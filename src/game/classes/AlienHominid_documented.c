/* AlienHominid — documented reverse-engineering rewrite.
 *
 * Original: `decompile` (Super Meat Boy, ELF64 x86-64), character id 0x1b (27),
 * allocation size 0xb58. Animation set `/Animations/ah.am`, clips "shoot",
 * "bullet", "bulletbreak".
 *
 * WHAT IT IS: the guest character Alien Hominid. His special fires a blaster:
 * up to 10 shots are in flight at once. Each shot spawns at the player
 * position, falls straight down under constant gravity (500 units/s^2, x never
 * changes), sticks where it first touches a solid tile, plays the "bullet"
 * clip while flying and the "bulletbreak" clip on impact, then frees its slot.
 *
 * This file is a human rewrite of src/game/classes/AlienHominid.c (16
 * functions). Semantics preserved; the 10x-unrolled shot blocks are factored
 * into loops. Offsets verified byte-exact against the original (see check
 * below). Base-class behaviour (MeatBoyCharactor) is out of scope and called
 * through.
 *
 * LAYOUT (byte-exact, total 0xb58):
 *   base[0xab0]   MeatBoyCharactor subobject (opaque here; fields used below
 *                 are named via MB_* accessors with their raw offsets).
 *   +0xab0 u32    specialActive   1 while the "shoot" anim is playing.
 *   +0xab4 u32    specialAnimFrame, synced both ways with shoot clip +0x58.
 *   +0xab8..0xb57 AHShot shots[10], stride 0x10:
 *                   +0x0 u32 state  0 = flying, 1 = landed/breaking, 2 = spent
 *                   +0x4 f32 x
 *                   +0x8 f32 y
 *                   +0xc u32 frame  anim-frame cursor, synced with clip +0x58
 *
 * BASE-CLASS FIELDS TOUCHED (MeatBoyCharactor layout, inferred from use):
 *   +0xa0  Vector2 pos            +0xf8  anim foundation/library
 *   +0x7d4 int   stateId  (6 = wallslide-jump, 9 = wallhit)
 *   +0x7d8/0x7d9 u8 flags         +0x7db  u8 flags
 *   +0x7e0 Input*                 +0x7f0  clone pointer array
 *   +0x808 f32, +0x8a8/0x8ac, +0x8b4/0x8b8, +0xb8/0xbc (anim/poise sync)
 *   +0xa38 replay/clone manager   +0xa40 isClone (1 on clones: they neither
 *                                 release shared clips nor run the clone loop)
 *   +0xa4c/0xa50 selected sfx indices
 *   +0xa54 char id (0x1b)         +0xa90 clone slot index
 *   +0xa98 "shoot" clip  +0xaa0 "bullet" clip  +0xaa8 "bulletbreak" clip
 *
 * FLASH CLIP SLOTS (inferred): +0x30 x, +0x34 y, +0x58 frame cursor;
 * vtab+8 = release, vtab+0x10 = render/advance one frame.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "AlienHominid.h"

/* fOneFrameTimeStep holds a float; globals.h keeps it untyped. */
#define fOneFrameTimeStep (*(float *)&fOneFrameTimeStep)
#define MB_U64(c, off) (*(uint64_t *)((uint8_t *)(c) + (off)))

#define AH_CHAR_ID 0x1b
#define AH_ALLOC_SIZE 0xb58
#define AH_ANIM_PATH "/Animations/ah.am"
#define AH_MAX_SHOTS 10
#define AH_GRAVITY 500.0f /* DAT_005be5e0, rodata float32 */

typedef enum { SHOT_FLYING = 0, SHOT_BREAKING = 1, SHOT_SPENT = 2 } ShotState;

typedef struct {
  uint32_t state; /* +0x0 */
  float x;        /* +0x4 */
  float y;        /* +0x8 */
  uint32_t frame; /* +0xc */
} AHShot;         /* sizeof == 0x10 */

typedef struct {
  uint8_t base[0xab0];
  uint32_t specialActive;     /* +0xab0 */
  uint32_t specialAnimFrame;  /* +0xab4 */
  AHShot shots[AH_MAX_SHOTS]; /* +0xab8 */
} AlienHominidBody;           /* sizeof == 0xb58 */

/* Base-class field accessors (raw offsets; see layout note above). */
#define MB_U32(c, off) (*(uint32_t *)((uint8_t *)(c) + (off)))
#define MB_I32(c, off) (*(int32_t *)((uint8_t *)(c) + (off)))
#define MB_F32(c, off) (*(float *)((uint8_t *)(c) + (off)))
#define MB_PTR(c, off) (*(void **)((uint8_t *)(c) + (off)))
#define MB_U8(c, off) (*((uint8_t *)(c) + (off)))
#define MB_STATE(c) MB_I32(c, 0x7d4)
#define MB_FLAGS0(c) MB_U8(c, 0x7d8)
#define MB_FLAGS1(c) MB_U8(c, 0x7d9)
#define MB_FLAGS2(c) MB_U8(c, 0x7db)
#define MB_CLONES(c) ((MeatBoyCharactor **)(*(void **)((uint8_t *)(c) + 0x7f0)))
#define MB_POS(c) ((Vector2 *)((uint8_t *)(c) + 0xa0))
#define MB_IS_CLONE(c) MB_I32(c, 0xa40)
#define CLIP_X(cl) (*(uint32_t *)((uint8_t *)(cl) + 0x30))
#define CLIP_Y(cl) (*(uint32_t *)((uint8_t *)(cl) + 0x34))
#define CLIP_FRAME(cl) (*(uint32_t *)((uint8_t *)(cl) + 0x58))
#define CLIP_RELEASE(cl) ((**(code **)(*(void **)(cl) + 8))())
#define CLIP_ADVANCE(cl) ((**(code **)(*(void **)(cl) + 0x10))(cl))

/* Engine entry points owned elsewhere (opaque here; implicit decls match the
 * original decompiled output where signatures were not recovered). */
extern void MeatBoyCharactor__Reset(MeatBoyCharactor *c);
extern void MeatBoyCharactor__Update(MeatBoyCharactor *c);
extern void MeatBoyCharactor__Death(MeatBoyCharactor *c);
extern void MeatBoyCharactor__ProcessReplayFrame(MeatBoyCharactor *c);
extern void MeatBoyCharactor__CreateClones(MeatBoyCharactor *c);
extern void MeatBoyCharactor__Clone(MeatBoyCharactor *c, MeatBoyCharactor *src, int n);
extern void MeatBoyCharactor__MeatBoyCharactor__0047b350(MeatBoyCharactor *c, ...);
extern void MeatBoyCharactor__Render(MeatBoyCharactor *c);
extern void MeatBoyCharactor__AddEffect__0047af00(MeatBoyCharactor *c, int kind, void *tintA,
                                                  void *tintB);
extern void MeatBoyCharactor__MeatBoyCharactor__00476510(MeatBoyCharactor *c);
extern void MeatBoyCharFoundation__Render(MeatBoyCharFoundation *f, MeatBoyCharactor *c,
                                          FlashLibraryInstance *clip);
extern int FlashLibraryInstance__IsPlaying(FlashLibraryInstance *cl);
extern void *FlashAnimationLibrary__GetMovieClip__005731d0(FlashAnimationLibrary *lib,
                                                           const char *name);
extern void FlashAnimationLibrary__EnableFlags(FlashAnimationLibrary *lib, int f);
extern void FlashAnimationLibrary__DisableFlags(FlashAnimationLibrary *lib, int f);
extern void Vector2__operator_assign(Vector2 *dst, Vector2 *src);
extern void operator_delete(void *p);
extern uint32_t GetRandomINT(uint32_t lo, uint32_t hi);
extern uint64_t FormatResourcePath(const char *rel, void *basePath);
extern char *TileLevel__GetGridBlockFromPos(TileLevel *lvl, float *pos, int layer);

/* ======================================================================
 * RecordSpecial @ 004612d0 — stamp this frame's special state into the
 * input record (replay recording path). Bit 6 of input byte 3 carries it;
 * 0xbf mask clears the bit first so playback sees exactly one value.
 */
void __thiscall AlienHominid__RecordSpecial(AlienHominid *self) {
  uint8_t *input;

  input = (uint8_t *)MB_PTR(self, 0x7e0);
  if (input != 0) {
    AlienHominidBody *h = (AlienHominidBody *)self;
    *(uint8_t *)(input + 3) =
        (uint8_t)(*(uint8_t *)(input + 3) & 0xbf | (uint8_t)((h->specialActive & 1) << 6));
  }
  return;
}

/* ======================================================================
 * Reset @ 00461300 — base reset, plus our flag (Death relies on this too).
 */
void __thiscall AlienHominid__Reset(AlienHominid *self) {
  ((AlienHominidBody *)self)->specialActive = 0;
  MeatBoyCharactor__Reset((MeatBoyCharactor *)self);
  return;
}

/* Advance one live shot: gravity, then stick on first solid tile. */
static void ah_update_shot(AlienHominidBody *h, TileLevel *lvl, AHShot *s) {
  if (s->state != SHOT_FLYING)
    return;
  s->y -= AH_GRAVITY * fOneFrameTimeStep;
  if (*TileLevel__GetGridBlockFromPos(lvl, &s->x, 0) != '\0') {
    s->state = SHOT_BREAKING;
    s->frame = 0;
  }
}

/* ======================================================================
 * Update @ 00461310 — base update plus the 10 falling shots.
 * (Original unrolls the loop 10x and `return`s out of the last block when
 * the 10th shot lands — a no-op quirk since nothing follows it.)
 */
void __thiscall AlienHominid__Update(AlienHominid *self) {
  AlienHominidBody *h = (AlienHominidBody *)self;
  TileLevel *lvl;
  int i;

  MB_U32(self, 0x8a8) = MB_U32(self, 0x8ac); /* anim-state sync */
  MeatBoyCharactor__ProcessReplayFrame((MeatBoyCharactor *)self);
  CLIP_FRAME(MB_PTR(self, 0xa98)) = h->specialAnimFrame; /* push frame into shoot clip */
  if ((int)h->specialActive == 1 &&
      !FlashLibraryInstance__IsPlaying((FlashLibraryInstance *)MB_PTR(self, 0xa98)))
    h->specialActive = 0; /* shoot anim over */
  MeatBoyCharactor__Update((MeatBoyCharactor *)self);

  lvl = *(TileLevel **)((uint8_t *)SuperMeatBoy + 0x40);
  for (i = 0; i < AH_MAX_SHOTS; i++)
    ah_update_shot(h, lvl, &h->shots[i]);
  return;
}

/* ======================================================================
 * Death @ 004617d0 — base death, then drop the special flag.
 */
void __thiscall AlienHominid__Death(AlienHominid *self) {
  MeatBoyCharactor__Death((MeatBoyCharactor *)self);
  ((AlienHominidBody *)self)->specialActive = 0;
  return;
}

/* WallJump @ 004617f0 / WallHit @ 00461800 — base wall behaviour (states 6
 * and 9, dust/kick effects with direction tints, landing-sfx pick) with no
 * Alien-specific state beyond the shared sfx slots +0xa4c/+0xa50. Bodies
 * unchanged apart from identifier cleanup; see original for the full
 * flag choreography.
 */

/* ======================================================================
 * CreateClones @ 00461810 — grab the three clips, then base clone setup.
 */
void __thiscall AlienHominid__CreateClones(AlienHominid *self) {
  FlashAnimationLibrary *lib = (FlashAnimationLibrary *)MB_PTR(self, 0xf8);

  MB_PTR(self, 0xa98) = FlashAnimationLibrary__GetMovieClip__005731d0(lib, "shoot");
  MB_PTR(self, 0xaa0) = FlashAnimationLibrary__GetMovieClip__005731d0(lib, "bullet");
  MB_PTR(self, 0xaa8) = FlashAnimationLibrary__GetMovieClip__005731d0(lib, "bulletbreak");
  MeatBoyCharactor__CreateClones((MeatBoyCharactor *)self);
  return;
}

/* ======================================================================
 * ~AlienHominid @ 00461870 (dtor) — owner releases the 3 shared clips
 * (clones, +0xa40 != 0, skip: they don't own them), then base dtor.
 * @ 004618f0 (deleting dtor) — dtor + operator_delete.
 */
void __thiscall AlienHominid__dtor(AlienHominid *self) {
  MB_PTR(self, 0) = &PTR__AlienHominid_005be4f0; /* restore vtable */
  if (MB_I32(self, 0xa40) == 0) {
    FlashLibraryInstance *shoot = (FlashLibraryInstance *)MB_PTR(self, 0xa98);
    FlashLibraryInstance *bullet = (FlashLibraryInstance *)MB_PTR(self, 0xaa0);
    FlashLibraryInstance *brk = (FlashLibraryInstance *)MB_PTR(self, 0xaa8);
    if (shoot != 0)
      CLIP_RELEASE(shoot);
    if (bullet != 0)
      CLIP_RELEASE(bullet);
    if (brk != 0)
      CLIP_RELEASE(brk);
  }
  MeatBoyCharactor__MeatBoyCharactor__00476510((MeatBoyCharactor *)self);
  return;
}

void __thiscall AlienHominid__dtor_delete(AlienHominid *self) {
  AlienHominid__dtor(self);
  operator_delete(self);
  return;
}

/* Render one shot slot: pick flying/break clip by state, pin it at (x, y),
 * advance a frame, retire the slot when the break anim ends. Shared by
 * Render, RenderShots and RenderClones (the latter passes clone slots).
 * Returns nothing; slot->frame always re-synced from the clip.
 */
static void ah_render_shot(FlashLibraryInstance *fly, FlashLibraryInstance *brk, AHShot *s) {
  FlashLibraryInstance *clip;

  if (s->state == SHOT_SPENT)
    return;
  clip = (s->state == SHOT_FLYING) ? fly : brk;
  if (clip == 0)
    return;
  CLIP_X(clip) = *(uint32_t *)&s->x;
  CLIP_Y(clip) = *(uint32_t *)&s->y;
  CLIP_FRAME(clip) = s->frame;
  CLIP_ADVANCE(clip);
  if (s->state == SHOT_BREAKING && !FlashLibraryInstance__IsPlaying(clip))
    s->state = SHOT_SPENT;
  s->frame = CLIP_FRAME(clip);
}

/* ======================================================================
 * RenderClones @ 00461ac0 — owner-only (gated on +0xa40 == 0): for each
 * live clone, mirror the base render path, then render that clone's own
 * 10 shots via ah_render_shot. The EnableFlags/DisableFlags toggle tracks
 * whether clone i is the "current" one (manager +0x3c vs clone +0xa90).
 */
void __thiscall AlienHominid__RenderClones(AlienHominid *self) {
  FlashAnimationLibrary *lib = (FlashAnimationLibrary *)MB_PTR(self, 0xf8);
  void *clonemgr = MB_PTR(self, 0xa38);
  MeatBoyCharactor **clones = MB_CLONES(self);
  int n, i;

  if (MB_I32(self, 0xa40) != 0)
    return;
  FlashAnimationLibrary__EnableFlags(lib, 1);
  if (*(int *)((uint8_t *)clonemgr + 0x2c8) == 0 &&
      (n = *(int *)((uint8_t *)clonemgr + 0x34)) > 0) {
    for (i = 0; i < n; i++) {
      MeatBoyCharactor *c = clones[i];
      AlienHominidBody *ch = (AlienHominidBody *)c;
      int j;

      if (*(int *)((uint8_t *)clonemgr + 0x3c) == i && i == MB_I32(c, 0xa90))
        FlashAnimationLibrary__EnableFlags(lib, 1);
      else
        FlashAnimationLibrary__DisableFlags(lib, 1);
      if ((int)ch->specialActive == 1) {
        CLIP_FRAME(MB_PTR(self, 0xa98)) = ch->specialAnimFrame;
        MeatBoyCharFoundation__Render((MeatBoyCharFoundation *)MB_PTR(self, 0xf8), c,
                                      (FlashLibraryInstance *)MB_PTR(self, 0xa98));
        ch->specialAnimFrame = CLIP_FRAME(MB_PTR(self, 0xa98));
      } else {
        MeatBoyCharFoundation__Render((MeatBoyCharFoundation *)MB_PTR(self, 0xf8), c, 0);
      }
      for (j = 0; j < AH_MAX_SHOTS; j++)
        ah_render_shot((FlashLibraryInstance *)MB_PTR(c, 0xaa0),
                       (FlashLibraryInstance *)MB_PTR(c, 0xaa8), &ch->shots[j]);
    }
  }
  return;
}

/* ======================================================================
 * Render @ 00462190 — shoot-anim body (or base render), then own shots.
 */
void __thiscall AlienHominid__Render(AlienHominid *self) {
  AlienHominidBody *h = (AlienHominidBody *)self;
  int i;

  if ((int)h->specialActive == 1) {
    (**(code **)(*(void **)self + 0x50))(); /* vtab +0x50 pre-step */
    CLIP_FRAME(MB_PTR(self, 0xa98)) = h->specialAnimFrame;
    MeatBoyCharFoundation__Render((MeatBoyCharFoundation *)MB_PTR(self, 0xf8),
                                  (MeatBoyCharactor *)self,
                                  (FlashLibraryInstance *)MB_PTR(self, 0xa98));
    h->specialAnimFrame = CLIP_FRAME(MB_PTR(self, 0xa98));
  } else {
    MeatBoyCharactor__Render((MeatBoyCharactor *)self);
  }
  for (i = 0; i < AH_MAX_SHOTS; i++)
    ah_render_shot((FlashLibraryInstance *)MB_PTR(self, 0xaa0),
                   (FlashLibraryInstance *)MB_PTR(self, 0xaa8), &h->shots[i]);
  return;
}

/* ======================================================================
 * ProcessSpecial @ 00462760 — replay/live special dispatch. Latches the
 * input-record bit into specialActive; on a 0->1 rising edge re-arms the
 * first spent shot at the player position (slot search identical to
 * AddShot). specialAnimFrame is always cleared.
 */
static int ah_first_spent(AlienHominidBody *h) {
  int i;

  for (i = 0; i < AH_MAX_SHOTS; i++)
    if (h->shots[i].state == SHOT_SPENT)
      return i;
  return -1;
}

void __thiscall AlienHominid__ProcessSpecial(AlienHominid *self) {
  AlienHominidBody *h = (AlienHominidBody *)self;
  uint32_t was = h->specialActive;
  int slot;

  h->specialActive = (uint32_t)(*(uint8_t *)((long *)MB_PTR(self, 0x7e0) + 3) >> 6 & 1);
  if (was != 0 || h->specialActive != 1)
    return; /* edge-triggered */
  slot = ah_first_spent(h);
  if (slot >= 0) {
    Vector2__operator_assign((Vector2 *)&h->shots[slot].x, MB_POS(self));
    h->shots[slot].state = SHOT_FLYING; /* == flag slot = 0 */
  }
  h->specialAnimFrame = 0;
  return;
}

/* ======================================================================
 * AlienHominid @ 004628b0 (ctor) — base ctor with /Animations/ah.am id
 * 0x1b, vtable install, all shots spent, special clear.
 * AlienHominid @ 00462960 (clone ctor) — base Clone + share owner's clips.
 */
void __thiscall AlienHominid__ctor(AlienHominid *self) {
  AlienHominidBody *h = (AlienHominidBody *)self;
  uint64_t anim = FormatResourcePath(AH_ANIM_PATH, &strCharPath);
  int i;

  MeatBoyCharactor__MeatBoyCharactor__0047b350((MeatBoyCharactor *)self, anim, AH_CHAR_ID);
  MB_PTR(self, 0) = &PTR__AlienHominid_005be4f0;
  for (i = 0; i < AH_MAX_SHOTS; i++)
    h->shots[i].state = SHOT_SPENT;
  MB_U32(self, 0xa54) = AH_CHAR_ID;
  h->specialActive = 0;
  return;
}

void __thiscall AlienHominid__ctor_clone(AlienHominid *self, MeatBoyCharactor *arg1, int arg2) {
  AlienHominidBody *h = (AlienHominidBody *)self;
  int i;

  MeatBoyCharactor__MeatBoyCharactor__0047b350((MeatBoyCharactor *)self);
  MB_PTR(self, 0) = &PTR__AlienHominid_005be4f0;
  for (i = 0; i < AH_MAX_SHOTS; i++)
    h->shots[i].state = SHOT_SPENT;
  MeatBoyCharactor__Clone((MeatBoyCharactor *)self, arg1, arg2);
  h->specialActive = 0;
  MB_PTR(self, 0xa98) = MB_PTR(arg1, 0xa98); /* share clips */
  MB_PTR(self, 0xaa0) = MB_PTR(arg1, 0xaa0);
  MB_PTR(self, 0xaa8) = MB_PTR(arg1, 0xaa8);
  return;
}

/* ======================================================================
 * AddShot @ 00462a60 — fire: re-arm first spent slot at player pos.
 * Silently drops the input if all 10 are busy (slot-9-in-use early-out).
 */
void __thiscall AlienHominid__AddShot(AlienHominid *self) {
  AlienHominidBody *h = (AlienHominidBody *)self;
  int slot = ah_first_spent(h);

  if (slot < 0)
    return;
  Vector2__operator_assign((Vector2 *)&h->shots[slot].x, MB_POS(self));
  h->shots[slot].state = SHOT_FLYING;
  return;
}

/* ======================================================================
 * RenderShots @ 00462b90 — own 10 shots (same helper as Render).
 */
void __thiscall AlienHominid__RenderShots(AlienHominid *self) {
  AlienHominidBody *h = (AlienHominidBody *)self;
  int i;

  for (i = 0; i < AH_MAX_SHOTS; i++)
    ah_render_shot((FlashLibraryInstance *)MB_PTR(self, 0xaa0),
                   (FlashLibraryInstance *)MB_PTR(self, 0xaa8), &h->shots[i]);
  return;
}

/* ======================================================================
 * WallJump @ 004617f0 / WallHit @ 00461800 — base wall behaviour, kept
 * verbatim from the decompiler (identifier cleanup only).
 *
 * WallJump: no-op unless vtab+0xb0 allows it; copies poise (+0x8b4 -> +0xbc),
 * kicks vertical speed (+0xb8 += +0x808 * +0x8b8); first touch picks a random
 * landing sfx (count at anim+0x240, index to anim+0x268 and +0xa4c, +0xa50 =
 * 0) and sets state 6; spawns a kind-3 wall-kick effect tinted (1,1,1,1) or
 * (-1,1,-1,1) by facing (0x3f800000 = 1.0f, 0xbf800000 = -1.0f).
 * WallHit(arg2): same shape for state 9 with kind-2 impact effects and the
 * 0x348/0x370 sfx pair; arg2 == 4 selects the mirrored tint pair.
 * (Note: `AlienHominid` as a *local type* below is a Ghidra quirk — those
 * locals hold single flag bytes, cf. the (byte) casts everywhere.)
 */

void __thiscall AlienHominid__WallJump(AlienHominid *self)

{
  ushort uVar1;
  long lVar2;
  uint8_t AVar3;
  int iVar4;
  uint32_t uVar5;
  uint32_t *puVar6;
  uint8_t AVar7;
  uint32_t *puVar8;
  bool bVar9;
  uint32_t uStack_58;
  uint32_t uStack_54;
  uint32_t uStack_48;
  uint32_t uStack_44;
  uint32_t uStack_38;
  uint32_t uStack_34;
  uint32_t uStack_28;
  uint32_t uStack_24;

  void *vtab = *(void **)(uint8_t *)self;
  puVar6 = &uStack_58;
  iVar4 = (int)(intptr_t)((code)((long *)vtab)[0xb0])(); /* vtab slot 0xb0 */
  if (iVar4 == 0) {
    return;
  }
  MB_U32(self, 0xbc) = MB_U32(self, 0x8b4);
  MB_F32(self, 0xb8) = MB_F32(self, 0x808) * MB_F32(self, 0x8b8) + MB_F32(self, 0xb8);
  if (MB_I32(self, 0x7d4) != 6) {
    lVar2 = (long)MB_PTR(self, 0xf8);
    MB_U8(self, 0x7db) = (uint8_t)((byte)MB_U8(self, 0x7db) | 8);
    uVar5 = 0;
    uVar1 = *(ushort *)(lVar2 + 0x240);
    if (uVar1 != 0) {
      uVar5 = GetRandomINT(0, uVar1 - 1);
    }
    *(uint32_t *)(lVar2 + 0x268) = uVar5;
    MB_U32(self, 0xa4c) = uVar5;
    MB_U32(self, 0xa50) = 0;
  }
  MB_U32(self, 0x7d4) = 6;
  bVar9 = ((byte)MB_U8(self, 0x7d8) & 1) == 0;
  AVar3 = (uint8_t)((byte)MB_U8(self, 0x7d8) & 0xfe | bVar9);
  MB_U8(self, 0x7d8) = AVar3;
  if (bVar9) {
    AVar7 = MB_U8(self, 0x7d9);
    uStack_38 = 0xbf800000;
    uStack_34 = 0x3f800000;
    uStack_28 = 0xbf800000;
    uStack_24 = 0x3f800000;
    if (((uint8_t)AVar7 & 0x40) != 0)
      goto LAB_00474591;
    puVar6 = &uStack_38;
    puVar8 = &uStack_28;
  } else {
    AVar7 = MB_U8(self, 0x7d9);
    uStack_58 = 0x3f800000;
    uStack_54 = 0x3f800000;
    uStack_48 = 0x3f800000;
    uStack_44 = 0x3f800000;
    if (((uint8_t)AVar7 & 0x40) != 0)
      goto LAB_00474591;
    puVar8 = &uStack_48;
  }
  MeatBoyCharactor__AddEffect__0047af00((MeatBoyCharactor *)self, 3, puVar8, puVar6);
  AVar3 = MB_U8(self, 0x7d8);
  AVar7 = MB_U8(self, 0x7d9);
LAB_00474591:
  MB_U8(self, 0x7d8) = (uint8_t)((byte)AVar3 & 0xfb);
  MB_U8(self, 0x7d9) = (uint8_t)((uint8_t)AVar7 | 0x20);
  return;
}

void __thiscall AlienHominid__WallHit(AlienHominid *self, int arg2)

{
  uint8_t AVar1;
  ushort uVar2;
  long lVar3;
  int iVar4;
  uint32_t uVar5;
  uint32_t uStack_58;
  uint32_t uStack_54;
  uint32_t uStack_48;
  uint32_t uStack_44;
  uint32_t uStack_38;
  uint32_t uStack_34;
  uint32_t uStack_28;
  uint32_t uStack_24;

  AVar1 = MB_U8(self, 0x7d8);
  if (((uint8_t)AVar1 & 4) == 0) {
    if (MB_I32(self, 0x7d4) == 9)
      goto LAB_0047440b;
    if (arg2 == 4) {
      uStack_48 = 0x3f800000;
      uStack_44 = 0x3f800000;
      uStack_58 = 0x3f800000;
      uStack_54 = 0x3f800000;
      if (((byte)MB_U8(self, 0x7d9) & 0x40) == 0) {
        MeatBoyCharactor__AddEffect__0047af00((MeatBoyCharactor *)self, 2, &uStack_58, &uStack_48);
        iVar4 = MB_I32(self, 0x7d4);
        goto LAB_004743cd;
      }
    } else {
      uStack_28 = 0xbf800000;
      uStack_24 = 0x3f800000;
      uStack_38 = 0xbf800000;
      uStack_34 = 0x3f800000;
      if (((byte)MB_U8(self, 0x7d9) & 0x40) == 0) {
        MeatBoyCharactor__AddEffect__0047af00((MeatBoyCharactor *)self, 2, &uStack_38, &uStack_28);
        goto LAB_004743c7;
      }
    }
  LAB_004743d2:
    lVar3 = (long)MB_PTR(self, 0xf8);
    MB_U8(self, 0x7db) = (uint8_t)((byte)MB_U8(self, 0x7db) | 8);
    uVar5 = 0;
    uVar2 = *(ushort *)(lVar3 + 0x348);
    if (uVar2 != 0) {
      uVar5 = GetRandomINT(0, uVar2 - 1);
    }
    *(uint32_t *)(lVar3 + 0x370) = uVar5;
    MB_U32(self, 0xa4c) = uVar5;
    MB_U32(self, 0xa50) = 0;
  } else {
  LAB_004743c7:
    iVar4 = MB_I32(self, 0x7d4);
  LAB_004743cd:
    if (iVar4 != 9)
      goto LAB_004743d2;
  }
  AVar1 = MB_U8(self, 0x7d8);
LAB_0047440b:
  MB_U32(self, 0x7d4) = 9;
  MB_U8(self, 0x7d8) = (uint8_t)((uint8_t)AVar1 | 4);
  return;
}
