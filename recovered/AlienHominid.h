// Recovered class model for `AlienHominid` — from RTTI + vtable + symtab. NOT compiled.
// kind=si size=0xb58 (factory)
#pragma once

class AlienHominid : public MeatBoyCharactor {
public:
  virtual void ~AlienHominid();  // +0x10 @0x461870
  virtual void ~AlienHominid();  // +0x18 @0x4618f0
  virtual uint64_t __getInvocationID() const;  // +0x20 @0x463100  // via SceneObject2D
  virtual uint64_t __getEditorProperties(EditableProperty*) const;  // +0x28 @0x463110  // via SceneObject2D
  virtual uint64_t Serialize(void*);  // +0x30 @0x59af10  // via SceneObject2D
  virtual void DeSerialize(void const*);  // +0x38 @0x59ae40  // via SceneObject2D
  virtual void RecordSpecial();  // +0x40 @0x4612d0
  virtual void ProcessSpecial();  // +0x48 @0x462760
  virtual void Update();  // +0x50 @0x461310
  virtual void Render();  // +0x58 @0x462190
  virtual void RenderClones();  // +0x60 @0x461ac0
  virtual void Initialize();  // +0x68 @0x473cd0  // via MeatBoyCharactor
  virtual void CreateClones();  // +0x70 @0x461810
  virtual void Reset();  // +0x78 @0x461300
  virtual void ForceAppear();  // +0x80 @0x474600  // via MeatBoyCharactor
  virtual void SpecialPress(tagButtonProps const*, void*);  // +0x88 @0x461910
  virtual void JumpPress(tagButtonProps const*, void*);  // +0x90 @0x473d00  // via MeatBoyCharactor
  virtual void LeftPress(tagButtonProps const*, void*);  // +0x98 @0x473d40  // via MeatBoyCharactor
  virtual void RightPress(tagButtonProps const*, void*);  // +0xa0 @0x473d90  // via MeatBoyCharactor
  virtual void Jump();  // +0xa8 @0x474800  // via MeatBoyCharactor
  virtual void WallJump();  // +0xb0 @0x4617f0
  virtual bool CanJump();  // +0xb8 @0x473e00  // via MeatBoyCharactor
  virtual bool CanWallJump();  // +0xc0 @0x473de0  // via MeatBoyCharactor
  virtual void DoMovement();  // +0xc8 @0x473e20  // via MeatBoyCharactor
  virtual void SpawnMovementEffect();  // +0xd0 @0x4741a0  // via MeatBoyCharactor
  virtual void WallHit(tagTileCollisionType);  // +0xd8 @0x461800
  virtual void GroundHit();  // +0xe0 @0x4746e0  // via MeatBoyCharactor
  virtual void OffScreen();  // +0xe8 @0x473e80  // via MeatBoyCharactor
  virtual void Death();  // +0xf0 @0x4617d0
  virtual uint64_t CanDie();  // +0xf8 @0x473e50  // via MeatBoyCharactor
  // ---- non-virtual / static (from symtab) ----
  void AlienHominid();  // @0x4628b0
  void AlienHominid(MeatBoyCharactor*, int);  // @0x462960
  void AddShot();  // @0x462a60
  void RenderShots();  // @0x462b90
  // ---- recovered fields ----
  // 0xab0 uint32_t specialActive — 1 while shoot anim plays
  // 0xab4 uint32_t specialAnimFrame — synced with shoot clip+0x58
  // 0xab8 AHShot[10] stride 0x10 {u32 state; float x,y; u32 frame} shots — verified
  // (see docs/alien_hominid.md (byte-audited))
};
