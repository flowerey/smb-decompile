// AlienHominid — reconstructed interface.
// Guest blaster character, id 0x1B (27), object size 0xB58 (factory).
// See AlienHominid.md (8-point class note) and docs/alien_hominid.md.
// Original addresses on every method. Confidence tags per README.
#pragma once
#include <stdint.h>

#include "../../include/common.h"

struct MeatBoyCharactor; // base subobject [0, 0xA98); pending reconstruction
struct FlashClip;        // animation instance; slots +0x30 x / +0x34 y / +0x58 frame [Inferred]
struct FlashLibrary;
struct TileLevel;
struct Vector2; // float x, y [Inferred from copy sizes]
struct tagButtonProps;

// ---------------------------------------------------------------------------
// Constants
// ---------------------------------------------------------------------------
inline constexpr int kAlienHominidCharId = 0x1B;  // [Confirmed] factory switch
inline constexpr int kAlienObjectSize = 0xB58;    // [Confirmed] factory alloc
inline constexpr int kMaxShots = 10;              // [Confirmed] slots found
inline constexpr float kShotGravity = 500.0f;     // [Confirmed] rodata 0x5BE5E0
inline constexpr float kFireKickY = 75.0f;        // [Confirmed] rodata 0x5BE5E4
inline constexpr int kInputSpecialByte = 3;       // [Confirmed] input record byte
inline constexpr uint8_t kInputSpecialBit = 0x40; // [Confirmed] round-tripped by record/playback

// ---------------------------------------------------------------------------
// Shot state machine [Confirmed] — transitions observed in Update/Render/
// AddShot/ProcessSpecial/ctor. 0 is assigned without a symbolic use site,
// but every branch treats it as "live and simulated".
// ---------------------------------------------------------------------------
enum class ShotState : uint32_t {
  Flying = 0,   // simulated: falls, tile-tested
  Breaking = 1, // landed: break animation runs to completion
  Spent = 2,    // free slot (all slots start here)
};

// One shot: 16 bytes, verified by (addr - 0xAB8) % 0x10 over 39 sites.
struct Shot {
  ShotState state;    // +0x0
  float x;            // +0x4  \
  float y;           // +0x8  / Vector2 in place (copied wholesale on fire)
  uint32_t animFrame; // +0xC, synced both ways with the clip frame slot
};

// ---------------------------------------------------------------------------
// Observed base-class region touched by this character.
// Original member names unknown; roles from usage. Base ends at 0xA98
// [Strong inference: reskin allocations end there; base max touch 0xA94].
// ---------------------------------------------------------------------------
struct CharacterBaseView {
  uint8_t _pad0[0xA0];
  Vector2 pos; // +0xA0 [Confirmed] spawn anchor / physics position
  uint8_t _pad1[0x10];
  float unk_b8; // +0xB8 [Speculation] scaled accumulation on wall jump only
  float velY;   // +0xBC [Strong inference] sign-tested in base Update; seeded
                // on jumps; +75 kick on fire
  uint8_t _pad2[0x38];
  void *animLib; // +0xF8 [Confirmed] animation library (sfx tables read through it)
  uint8_t _pad3[0x6D4];
  int32_t state;  // +0x7D4 [Confirmed] 6 wallslide-jump, 9 wall-hit, 0x10 death
  uint8_t flags0; // +0x7D8 [Confirmed] bit2 wall-contact latch [Strong]; bit0 toggled on jump
  uint8_t flags1; // +0x7D9 [Confirmed] bit6 mirror selector [Strong: tint mirroring]
  uint8_t _pad4[0x1];
  uint8_t flags2; // +0x7DB [Confirmed] bit3 state-changed stamp; bit7 triggers vtable+0x68 hook
  uint8_t _pad5[0x4];
  void *input; // +0x7E0 [Confirmed] per-frame input record
  uint8_t _pad6[0x8];
  void *clones; // +0x7F0 [Confirmed] clone pointer array
  uint8_t _pad7[0x10];
  float tune_808; // +0x808 [Speculation] tuning; scales +0x8B8 into +0xB8
  uint8_t _pad8[0x9C];
  uint32_t poseA; // +0x8A8 [Speculation] animation sync pair with poseB
  uint32_t poseB; // +0x8AC [Speculation]
  uint8_t _pad9[0x4];
  uint32_t poiseC; // +0x8B4 [Speculation] copied toward +0xBC domain on wall jump
  float tune_8B8;  // +0x8B8 [Speculation] tuning multiplier
  uint8_t _pad10[0x17C];
  void *replayMgr; // +0xA38 [Confirmed] replay/clone manager
  int32_t isClone; // +0xA40 [Confirmed] set by Clone(); gates clip release + clone loop
  uint8_t _pad11[0x8];
  uint32_t sfxPick; // +0xA4C [Confirmed] chosen sound index
  uint32_t sfxGen;  // +0xA50 [Confirmed] cleared alongside sfxPick
  uint32_t charId;  // +0xA54 [Confirmed]
  uint8_t _pad12[0x38];
  int32_t cloneIndex; // +0xA90 [Confirmed] slot index among clones
  // NOTE: base extent to 0xA98 is Strong inference (see above), not fact.
};

// ---------------------------------------------------------------------------
// AlienHominid
// ---------------------------------------------------------------------------
class AlienHominid : public MeatBoyCharactor { // [Confirmed] RTTI si-chain
public:
  // Virtuals in vtable order (signatures from symtab; see recovered/AlienHominid.h).
  virtual ~AlienHominid();                                                   // +0x10/+0x18
  virtual void RecordSpecial();                                              // +0x40
  virtual void ProcessSpecial();                                             // +0x48
  virtual void Update();                                                     // +0x50
  virtual void Render();                                                     // +0x58
  virtual void RenderClones();                                               // +0x60
  virtual void CreateClones();                                               // +0x70
  virtual void Reset();                                                      // +0x78
  virtual void SpecialPress(const tagButtonProps *button, void *pressPhase); // +0x88
  virtual void WallJump();                                                   // +0xB0
  virtual void WallHit(int side); // +0xD8, tagTileCollisionType
  virtual void Death();           // +0xF0
  // Non-virtuals (from symtab).
  AlienHominid();
  AlienHominid(MeatBoyCharactor *src, int cloneIndex);
  void AddShot();
  void RenderShots();

  // AlienHominid extension [0xA98, 0xB58) [Confirmed: bounds above].
  // (Base subobject [0, 0xA98) is CharacterBaseView; the class hierarchy
  // itself is declared in recovered/AlienHominid.h.)
  FlashClip *shootClip;      // +0xA98 [Confirmed]
  FlashClip *bulletClip;     // +0xAA0 [Confirmed]
  FlashClip *breakClip;      // +0xAA8 [Confirmed]
  uint32_t specialActive;    // +0xAB0 [Confirmed] 1 while shoot anim plays
  uint32_t specialAnimFrame; // +0xAB4 [Confirmed] synced with shoot clip frame
  Shot shots[kMaxShots];     // +0xAB8 [Confirmed]
};
