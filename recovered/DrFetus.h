// Recovered class model for `DrFetus` — from RTTI + vtable + symtab. NOT compiled.
// kind=si size=0x14c0 (factory)
#pragma once

class DrFetus : public MeatBoyCharactor {
public:
  virtual void ~DrFetus();  // +0x10 @0x465c60
  virtual void ~DrFetus();  // +0x18 @0x465d40
  virtual uint64_t __getInvocationID() const;  // +0x20 @0x463100  // via SceneObject2D
  virtual uint64_t __getEditorProperties(EditableProperty*) const;  // +0x28 @0x463110  // via SceneObject2D
  virtual uint64_t Serialize(void*);  // +0x30 @0x59af10  // via SceneObject2D
  virtual void DeSerialize(void const*);  // +0x38 @0x59ae40  // via SceneObject2D
  virtual void RecordSpecial();  // +0x40 @0x465ba0
  virtual void ProcessSpecial();  // +0x48 @0x465e90
  virtual void Update();  // +0x50 @0x468100
  virtual void Render();  // +0x58 @0x468890
  virtual void RenderClones();  // +0x60 @0x4687e0
  virtual void Initialize();  // +0x68 @0x473cd0  // via MeatBoyCharactor
  virtual void CreateClones();  // +0x70 @0x465c00
  virtual void Reset();  // +0x78 @0x465d60
  virtual void ForceAppear();  // +0x80 @0x474600  // via MeatBoyCharactor
  virtual void SpecialPress(tagButtonProps const*, void*);  // +0x88 @0x466090
  virtual void JumpPress(tagButtonProps const*, void*);  // +0x90 @0x473d00  // via MeatBoyCharactor
  virtual void LeftPress(tagButtonProps const*, void*);  // +0x98 @0x473d40  // via MeatBoyCharactor
  virtual void RightPress(tagButtonProps const*, void*);  // +0xa0 @0x473d90  // via MeatBoyCharactor
  virtual void Jump();  // +0xa8 @0x474800  // via MeatBoyCharactor
  virtual void WallJump();  // +0xb0 @0x465be0
  virtual bool CanJump();  // +0xb8 @0x473e00  // via MeatBoyCharactor
  virtual bool CanWallJump();  // +0xc0 @0x473de0  // via MeatBoyCharactor
  virtual void DoMovement();  // +0xc8 @0x473e20  // via MeatBoyCharactor
  virtual void SpawnMovementEffect();  // +0xd0 @0x4741a0  // via MeatBoyCharactor
  virtual void WallHit(tagTileCollisionType);  // +0xd8 @0x465bf0
  virtual void GroundHit();  // +0xe0 @0x4746e0  // via MeatBoyCharactor
  virtual void OffScreen();  // +0xe8 @0x473e80  // via MeatBoyCharactor
  virtual void Death();  // +0xf0 @0x473ed0  // via MeatBoyCharactor
  virtual uint64_t CanDie();  // +0xf8 @0x465bd0
  // ---- non-virtual / static (from symtab) ----
  void DrFetus();  // @0x466250
  void DrFetus(MeatBoyCharactor*, int);  // @0x466f80
  void AddShot();  // @0x467d00
  void UpdateShots();  // @0x467ea0
  void ShootOnlyUpdate();  // @0x468160
  void RenderShots();  // @0x4681b0
  void ResetShots();  // @0x468900
  long GetClonePosition();  // @0x468970
  uint64_t IsBoundsHittingShot(Bounds const*);  // @0x468990
};
