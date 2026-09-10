// Recovered class model for `VVVVVV` — from RTTI + vtable + symtab. NOT compiled.
// kind=si size=0xab0 (factory)
#pragma once

class VVVVVV : public MeatBoyCharactor {
public:
  virtual void ~VVVVVV();  // +0x10 @0x519450
  virtual void ~VVVVVV();  // +0x18 @0x519520
  virtual uint64_t __getInvocationID() const;  // +0x20 @0x463100  // via SceneObject2D
  virtual uint64_t __getEditorProperties(EditableProperty*) const;  // +0x28 @0x463110  // via SceneObject2D
  virtual uint64_t Serialize(void*);  // +0x30 @0x59af10  // via SceneObject2D
  virtual void DeSerialize(void const*);  // +0x38 @0x59ae40  // via SceneObject2D
  virtual void RecordSpecial();  // +0x40 @0x473e60  // via MeatBoyCharactor
  virtual void ProcessSpecial();  // +0x48 @0x473e70  // via MeatBoyCharactor
  virtual void Update();  // +0x50 @0x5193a0
  virtual void Render();  // +0x58 @0x519330
  virtual void RenderClones();  // +0x60 @0x519460
  virtual void Initialize();  // +0x68 @0x473cd0  // via MeatBoyCharactor
  virtual void CreateClones();  // +0x70 @0x5193f0
  virtual void Reset();  // +0x78 @0x519580
  virtual void ForceAppear();  // +0x80 @0x474600  // via MeatBoyCharactor
  virtual void SpecialPress(tagButtonProps const*, void*);  // +0x88 @0x5195c0
  virtual void JumpPress(tagButtonProps const*, void*);  // +0x90 @0x5193e0
  virtual void LeftPress(tagButtonProps const*, void*);  // +0x98 @0x473d40  // via MeatBoyCharactor
  virtual void RightPress(tagButtonProps const*, void*);  // +0xa0 @0x473d90  // via MeatBoyCharactor
  virtual void Jump();  // +0xa8 @0x519300
  virtual void WallJump();  // +0xb0 @0x5193c0
  virtual bool CanJump();  // +0xb8 @0x519320
  virtual bool CanWallJump();  // +0xc0 @0x473de0  // via MeatBoyCharactor
  virtual void DoMovement();  // +0xc8 @0x473e20  // via MeatBoyCharactor
  virtual void SpawnMovementEffect();  // +0xd0 @0x4741a0  // via MeatBoyCharactor
  virtual void WallHit(tagTileCollisionType);  // +0xd8 @0x5193d0
  virtual void GroundHit();  // +0xe0 @0x519310
  virtual void OffScreen();  // +0xe8 @0x473e80  // via MeatBoyCharactor
  virtual void Death();  // +0xf0 @0x519540
  virtual uint64_t CanDie();  // +0xf8 @0x473e50  // via MeatBoyCharactor
  // ---- non-virtual / static (from symtab) ----
  void VVVVVV();  // @0x519670
  void VVVVVV(MeatBoyCharactor*, int);  // @0x5196d0
  void ToggleGravity(int);  // @0x519770
};
