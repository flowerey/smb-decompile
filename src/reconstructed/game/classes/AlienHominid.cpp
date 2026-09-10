// AlienHominid — reconstructed implementation.
// Original: src/game/classes/AlienHominid.c, plus SpecialPress @00461910
// (src/engine/core_05.c) and its base default @00473ce0. Every method cites
// its original address. See AlienHominid.md for the 8-point class note.
#include "AlienHominid.h"

// ---- Engine/base entry points used here (opaque; defined elsewhere) ----
// Original decompiled names in comments.
extern void MeatBoyCharactor_Reset(MeatBoyCharactor *c);              // @00474920
extern void MeatBoyCharactor_Update(MeatBoyCharactor *c);             // @00477070
extern void MeatBoyCharactor_Death(MeatBoyCharactor *c);              // @00473ed0
extern void MeatBoyCharactor_ProcessReplayFrame(MeatBoyCharactor *c); // @004795b0
extern void MeatBoyCharactor_CreateClones(MeatBoyCharactor *c);       // @00473e90
extern void MeatBoyCharactor_Clone(MeatBoyCharactor *c, MeatBoyCharactor *src,
                                   int idx); // @00476980
extern void MeatBoyCharactor_Construct(MeatBoyCharactor *c, uint64_t anim,
                                       uint32_t id);         // @0047b350
extern void MeatBoyCharactor_Construct(MeatBoyCharactor *c); // @00476530
extern void MeatBoyCharactor_Destroy(MeatBoyCharactor *c);   // @00476510
extern void MeatBoyCharactor_Render(MeatBoyCharactor *c);    // @0047ab60
extern void MeatBoyCharactor_AddEffect(MeatBoyCharactor *c, int kind, void *tintA,
                                       void *tintB); // @0047af00
extern void MeatBoyCharactor_RenderFoundation(void *f, MeatBoyCharactor *c,
                                              FlashClip *clip); // MeatBoyCharFoundation__Render
extern void MeatBoyCharactor_SpecialPress(MeatBoyCharactor *c,
                                          void *pressPhase); // @00473ce0 base default
extern void operator_delete(void *p);
extern int GetRandomINT(int lo, int hi);
extern uint64_t FormatResourcePath(const char *rel, void *basePath);
extern void *strCharPath; // [Confirmed] nm symbol
extern char *TileLevel_GetGridBlockFromPos(void *level, const float *pos, int layer);
extern bool FlashClip_IsPlaying(FlashClip *clip);
extern void *FlashLibrary_GetMovieClip(void *lib, const char *name);
extern void FlashLibrary_EnableFlags(void *lib, int flags);
extern void FlashLibrary_DisableFlags(void *lib, int flags);

// Clip instance slots, observed uniformly: position + frame cursor.
// [Inferred] role from identical use at dozens of sites.
static void clipSetPos(FlashClip *clip, float x, float y) {
  *(uint32_t *)((uint8_t *)clip + 0x30) = *(const uint32_t *)&x;
  *(uint32_t *)((uint8_t *)clip + 0x34) = *(const uint32_t *)&y;
}
static void clipSetFrame(FlashClip *clip, uint32_t frame) {
  *(uint32_t *)((uint8_t *)clip + 0x58) = frame;
}
static uint32_t clipGetFrame(const FlashClip *clip) {
  return *(const uint32_t *)((const uint8_t *)clip + 0x58);
}
static void clipRelease(FlashClip *clip) { // vtable +8 [Inferred]
  ((void (*)(FlashClip *))(*(void **)clip + 8))(clip);
}
static void clipStep(FlashClip *clip) { // vtable +0x10 [Inferred]
  ((void (*)(FlashClip *))(*(void **)clip + 0x10))(clip);
}

namespace {

// The layout view: complete picture of [0, 0xB58).
struct FullLayout {
  CharacterBaseView base;
  FlashClip *shootClip;      // +0xA98
  FlashClip *bulletClip;     // +0xAA0
  FlashClip *breakClip;      // +0xAA8
  uint32_t specialActive;    // +0xAB0
  uint32_t specialAnimFrame; // +0xAB4
  Shot shots[kMaxShots];     // +0xAB8
};

FullLayout *layout(AlienHominid *self) {
  return (FullLayout *)self; // single documented reinterpretation point
}

int findSpentShot(FullLayout *me) {
  for (int i = 0; i < kMaxShots; i++) {
    if (me->shots[i].state == ShotState::Spent) {
      return i;
    }
  }
  return -1;
}

void fireShotAt(FullLayout *me, int slot, const Vector2 *from) {
  me->shots[slot].x = from->x;
  me->shots[slot].y = from->y;
  me->shots[slot].state = ShotState::Flying;
}

// Pin a clip to a shot, advance one frame, retire finished break anims.
// Shared by Render, RenderShots, and per-clone rendering.
void drawShot(FlashClip *flyClip, FlashClip *breakClip, Shot *shot) {
  if (shot->state == ShotState::Spent) {
    return;
  }
  FlashClip *clip = (shot->state == ShotState::Flying) ? flyClip : breakClip;
  if (clip == nullptr) {
    return;
  }
  clipSetPos(clip, shot->x, shot->y);
  clipSetFrame(clip, shot->animFrame);
  clipStep(clip);
  if (shot->state == ShotState::Breaking && !FlashClip_IsPlaying(clip)) {
    shot->state = ShotState::Spent;
  }
  shot->animFrame = clipGetFrame(clip);
}

} // namespace

// @004612d0 — stamp this frame's special state into the input record so
// replays can reproduce it. [Confirmed]
void AlienHominid::RecordSpecial() {
  FullLayout *me = layout(this);
  uint8_t *input = (uint8_t *)me->base.input;
  if (input != nullptr) {
    input[kInputSpecialByte] =
        (input[kInputSpecialByte] & ~kInputSpecialBit) | ((me->specialActive & 1) << 6);
  }
}

// @00461300 — base reset, plus our flag. [Confirmed]
void AlienHominid::Reset() {
  layout(this)->specialActive = 0;
  MeatBoyCharactor_Reset(this);
}

// One live shot: gravity, then stick on the first solid tile. [Confirmed]
static void updateShot(FullLayout *me, TileLevel *level, Shot *shot) {
  (void)me;
  if (shot->state != ShotState::Flying) {
    return;
  }
  shot->y -= kShotGravity * fOneFrameTimeStep;
  if (*TileLevel_GetGridBlockFromPos(level, &shot->x, 0) != '\0') {
    shot->state = ShotState::Breaking;
    shot->animFrame = 0;
  }
}

// @00461310 — base update plus the 10 falling shots. [Confirmed]
// (The original unrolled the loop 10x and returned out of the last block
// when the 10th shot landed — a no-op quirk since nothing follows it.)
void AlienHominid::Update() {
  FullLayout *me = layout(this);
  CharacterBaseView *b = &me->base;

  b->poseA = b->poseB; // animation sync
  MeatBoyCharactor_ProcessReplayFrame(this);
  clipSetFrame(me->shootClip, me->specialAnimFrame); // push frame into shoot clip
  if ((int)me->specialActive == 1 && !FlashClip_IsPlaying(me->shootClip)) {
    me->specialActive = 0; // shoot animation over
  }
  MeatBoyCharactor_Update(this);

  TileLevel *level = *(TileLevel **)((uint8_t *)SuperMeatBoy + 0x40);
  for (int i = 0; i < kMaxShots; i++) {
    updateShot(me, level, &me->shots[i]);
  }
}

// @004617d0 — base death, then drop the special flag. [Confirmed]
void AlienHominid::Death() {
  MeatBoyCharactor_Death(this);
  layout(this)->specialActive = 0;
}

// @00461910 — live fire on a button press. NOTE: Ghidra misread `this` as
// the first parameter (filed in core_05.c); the symbol table gives the
// real signature, restored here. [Confirmed via symtab + body]
// Fires only when *pressPhase == 1 [Confirmed gate value; the pointed-to
// meaning is unverified — plausibly a fresh-press indicator
// [Speculation]], the character is alive, and no shoot is already
// playing. The button descriptor is forwarded but never read here.
void AlienHominid::SpecialPress(const tagButtonProps * /*button*/, void *pressPhase) {
  FullLayout *me = layout(this);
  CharacterBaseView *b = &me->base;

  MeatBoyCharactor_SpecialPress(this, pressPhase);
  if (b->state == 0x10) {
    return; // dead characters don't fire
  }
  clipSetFrame(me->shootClip, me->specialAnimFrame); // side effect before gate
  bool stanceReady = (b->flags0 & 0x02) != 0;        // [Inferred] ready bit
  bool aimFree = (b->flags1 & 0x01) == 0;            // [Inferred]
  bool freshPress = *(const int *)pressPhase == 1;
  bool quiet = me->specialActive == 0 || !FlashClip_IsPlaying(me->shootClip);
  if (stanceReady && freshPress && aimFree && quiet) {
    b->velY = kFireKickY + b->velY; // upward kick
    me->specialAnimFrame = 0;
    me->specialActive = 1;
    int slot = findSpentShot(me);
    if (slot >= 0) {
      fireShotAt(me, slot, &b->pos);
    }
  }
}

// WallJump @004617f0 / WallHit @00461800 — base wall behavior with the
// character's sound table; reconstructed with named flags. Only the
// sound-index selection is Alien-specific; the rest is base idiom.
namespace {
struct TintQuad {
  float r, g, b, a;
};
} // namespace

void AlienHominid::WallJump() {
  FullLayout *me = layout(this);
  CharacterBaseView *b = &me->base;
  // vtable +0xB0 gate [Confirmed slot, unknown method]: no jump if denied.
  typedef int (*GateFn)(AlienHominid *);
  GateFn gate = *(GateFn *)((uint8_t *)*(void **)this + 0xB0 * 8);
  if (gate(this) == 0) {
    return;
  }
  b->poiseC = b->poseB; // [Speculation on role; copy observed]
  b->unk_b8 = b->tune_808 * b->tune_8B8 + b->unk_b8;
  if (b->state != 6) {
    uint8_t *lib = (uint8_t *)b->animLib;
    b->flags2 = b->flags2 | 0x08;
    uint32_t pick = 0;
    uint16_t choices = *(const uint16_t *)(lib + 0x240);
    if (choices != 0) {
      pick = GetRandomINT(0, choices - 1);
    }
    *(uint32_t *)(lib + 0x268) = pick;
    // sfxPick/sfxGen mirrored [Confirmed pattern]
  }
  b->state = 6;
  // Toggle bit0, pick kick tint by its new value, skip the effect entirely
  // when facing is set. Tint values are raw 1.0f/-1.0f words from the binary.
  bool toggledOn = (b->flags0 & 0x01) == 0;
  b->flags0 = (b->flags0 & 0xFE) | (toggledOn ? 1 : 0);
  TintQuad identity = {1, 1, 1, 1};
  TintQuad mirrored = {-1, 1, -1, 1};
  // NOTE: the original passes two adjacent stack quads; values are equal,
  // so one pair object is behaviorally identical.
  bool facing = (b->flags1 & 0x40) != 0; // [Strong inference] mirror selector
  if (!facing) {
    TintQuad *pair = toggledOn ? &mirrored : &identity;
    MeatBoyCharactor_AddEffect(this, 3, pair, pair);
  }
  uint8_t f0 = b->flags0;
  uint8_t f1 = b->flags1;
  b->flags0 = f0 & 0xFB; // clear wall-contact latch
  b->flags1 = f1 | 0x20;
}

void AlienHominid::WallHit(int side) {
  FullLayout *me = layout(this);
  CharacterBaseView *b = &me->base;
  // tagTileCollisionType 4 selects the mirrored tint pair. [Confirmed]
  TintQuad identity = {1, 1, 1, 1};
  TintQuad mirrored = {-1, 1, -1, 1};
  auto stampHit = [&]() {
    b->state = 9;
    b->flags0 = b->flags0 | 0x04;
  };
  auto pickHitSound = [&]() {
    uint8_t *lib = (uint8_t *)b->animLib;
    b->flags2 = b->flags2 | 0x08;
    uint32_t pick = 0;
    uint16_t choices = *(const uint16_t *)(lib + 0x348);
    if (choices != 0) {
      pick = GetRandomINT(0, choices - 1);
    }
    *(uint32_t *)(lib + 0x370) = pick;
  };
  if (b->state == 9) {
    stampHit();
    return;
  }
  bool latched = (b->flags0 & 0x04) != 0; // wall-contact latch [Strong]
  bool facing = (b->flags1 & 0x40) != 0;
  if (!latched && !facing) {
    TintQuad *pair = (side == 4) ? &identity : &mirrored;
    MeatBoyCharactor_AddEffect(this, 2, pair, pair);
  }
  pickHitSound();
  stampHit();
}

// @00461810 — grab the three clips, then base clone setup. [Confirmed]
void AlienHominid::CreateClones() {
  FullLayout *me = layout(this);
  void *lib = me->base.animLib;
  me->shootClip = (FlashClip *)FlashLibrary_GetMovieClip(lib, "shoot");
  me->bulletClip = (FlashClip *)FlashLibrary_GetMovieClip(lib, "bullet");
  me->breakClip = (FlashClip *)FlashLibrary_GetMovieClip(lib, "bulletbreak");
  MeatBoyCharactor_CreateClones(this);
}

// @00461870 destructor — owner releases the 3 shared clips (clones skip:
// they don't own them), then base teardown. [Confirmed]
AlienHominid::~AlienHominid() {
  FullLayout *me = layout(this);
  // vtable restore observed in original; omitted here (build artifact).
  if (me->base.isClone == 0) {
    if (me->shootClip != nullptr) {
      clipRelease(me->shootClip);
    }
    if (me->bulletClip != nullptr) {
      clipRelease(me->bulletClip);
    }
    if (me->breakClip != nullptr) {
      clipRelease(me->breakClip);
    }
  }
  MeatBoyCharactor_Destroy(this);
}

// @004618f0 deleting destructor — destructor + free. [Confirmed]
void AlienHominid_delete(AlienHominid *self) {
  self->~AlienHominid();
  operator_delete(self);
}

// @00461ac0 — owner-only: for each live clone, mirror the base render
// path, then render that clone's own 10 shots. [Confirmed]
void AlienHominid::RenderClones() {
  FullLayout *me = layout(this);
  CharacterBaseView *b = &me->base;
  if (b->isClone != 0) {
    return;
  }
  void *lib = b->animLib;
  FlashLibrary_EnableFlags(lib, 1);
  // Clone-manager fields (+0x2C8 idle flag, +0x34 count, +0x3C current)
  // are used but its layout is unrecovered: explicit offsets. [Confirmed use]
  uint8_t *mgr = (uint8_t *)b->replayMgr;
  if (*(int *)(mgr + 0x2C8) == 0) {
    int count = *(int *)(mgr + 0x34);
    MeatBoyCharactor **clones = (MeatBoyCharactor **)b->clones;
    for (int i = 0; i < count; i++) {
      FullLayout *c = (FullLayout *)clones[i]; // clones are same-class objects
      if (*(int *)(mgr + 0x3C) == i && i == c->base.cloneIndex) {
        FlashLibrary_EnableFlags(lib, 1);
      } else {
        FlashLibrary_DisableFlags(lib, 1);
      }
      if ((int)c->specialActive == 1) {
        clipSetFrame(me->shootClip, c->specialAnimFrame);
        MeatBoyCharactor_RenderFoundation(b->animLib, clones[i], me->shootClip);
        c->specialAnimFrame = clipGetFrame(me->shootClip);
      } else {
        MeatBoyCharactor_RenderFoundation(b->animLib, clones[i], nullptr);
      }
      for (int j = 0; j < kMaxShots; j++) {
        drawShot(c->bulletClip, c->breakClip, &c->shots[j]);
      }
    }
  }
}

// @00462190 — shoot-animation body (or base render), then own shots. [Confirmed]
void AlienHominid::Render() {
  FullLayout *me = layout(this);
  CharacterBaseView *b = &me->base;
  if ((int)me->specialActive == 1) {
    // Unidentified virtual at slot +0x50 (also used in base Update).
    // [Confirmed slot, unknown method] — kept explicit, not invented.
    ((void (*)(AlienHominid *))(*(void **)this + 0x50))(this);
    clipSetFrame(me->shootClip, me->specialAnimFrame);
    MeatBoyCharactor_RenderFoundation(b->animLib, this, me->shootClip);
    me->specialAnimFrame = clipGetFrame(me->shootClip);
  } else {
    MeatBoyCharactor_Render(this);
  }
  for (int i = 0; i < kMaxShots; i++) {
    drawShot(me->bulletClip, me->breakClip, &me->shots[i]);
  }
}

// @00462760 — replay/live special dispatch: latch the input-record bit,
// and on a 0->1 edge re-arm the first spent shot at the player. The anim
// frame is always cleared. [Confirmed]
void AlienHominid::ProcessSpecial() {
  FullLayout *me = layout(this);
  CharacterBaseView *b = &me->base;
  uint32_t was = me->specialActive;
  me->specialActive = (uint32_t)(((const uint8_t *)b->input)[kInputSpecialByte] >> 6 & 1);
  if (was != 0 || me->specialActive != 1) {
    return; // edge-triggered
  }
  int slot = findSpentShot(me);
  if (slot >= 0) {
    fireShotAt(me, slot, &b->pos);
  }
  me->specialAnimFrame = 0;
}

// @004628b0 constructor — base setup with /Animations/ah.am id 0x1B,
// vtable install, all shots spent, special clear. [Confirmed]
AlienHominid::AlienHominid() {
  FullLayout *me = layout(this);
  uint64_t anim = FormatResourcePath("/Animations/ah.am", &strCharPath);
  MeatBoyCharactor_Construct(this, anim, kAlienHominidCharId);
  // vtable install observed; omitted (build artifact).
  for (int i = 0; i < kMaxShots; i++) {
    me->shots[i].state = ShotState::Spent;
  }
  me->base.charId = kAlienHominidCharId;
  me->specialActive = 0;
}

// @00462960 clone constructor — base clone plus shared clips. [Confirmed]
AlienHominid::AlienHominid(MeatBoyCharactor *src, int cloneIndex) {
  FullLayout *me = layout(this);
  MeatBoyCharactor_Construct(this);
  // vtable install observed; omitted (build artifact).
  for (int i = 0; i < kMaxShots; i++) {
    me->shots[i].state = ShotState::Spent;
  }
  MeatBoyCharactor_Clone(this, src, cloneIndex);
  me->specialActive = 0;
  FullLayout *s = (FullLayout *)src; // same-class source in observed flows
  me->shootClip = s->shootClip;
  me->bulletClip = s->bulletClip;
  me->breakClip = s->breakClip;
}

// @00462a60 — fire: re-arm first spent slot at the player; silently drop
// the input when the rack is full. [Confirmed]
void AlienHominid::AddShot() {
  FullLayout *me = layout(this);
  int slot = findSpentShot(me);
  if (slot < 0) {
    return;
  }
  fireShotAt(me, slot, &me->base.pos);
}

// @00462b90 — draw own 10 shots. [Confirmed]
void AlienHominid::RenderShots() {
  FullLayout *me = layout(this);
  for (int i = 0; i < kMaxShots; i++) {
    drawShot(me->bulletClip, me->breakClip, &me->shots[i]);
  }
}
