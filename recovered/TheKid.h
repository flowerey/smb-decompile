// Recovered class model for `TheKid` — from RTTI + vtable + symtab. NOT compiled.
// kind=si size=0xaa8 (factory)
#pragma once

class TheKid : public MeatBoyCharactor {
public:
  virtual void ~TheKid();  // +0x10 @0x5186a0
  virtual void ~TheKid();  // +0x18 @0x518910
  virtual uint64_t __getInvocationID() const;  // +0x20 @0x463100  // via SceneObject2D
  virtual uint64_t __getEditorProperties(EditableProperty*) const;  // +0x28 @0x463110  // via SceneObject2D
  virtual uint64_t Serialize(void*);  // +0x30 @0x59af10  // via SceneObject2D
  virtual void DeSerialize(void const*);  // +0x38 @0x59ae40  // via SceneObject2D
  virtual void RecordSpecial();  // +0x40 @0x473e60  // via MeatBoyCharactor
  virtual void ProcessSpecial();  // +0x48 @0x473e70  // via MeatBoyCharactor
  virtual void Update();  // +0x50 @0x518610
  virtual void Render();  // +0x58 @0x518750
  virtual void RenderClones();  // +0x60 @0x5187d0
  virtual void Initialize();  // +0x68 @0x473cd0  // via MeatBoyCharactor
  virtual void CreateClones();  // +0x70 @0x518670
  virtual void Reset();  // +0x78 @0x5185f0
  virtual void ForceAppear();  // +0x80 @0x474600  // via MeatBoyCharactor
  virtual void SpecialPress(tagButtonProps const*, void*);  // +0x88 @0x473ce0  // via MeatBoyCharactor
  virtual void JumpPress(tagButtonProps const*, void*);  // +0x90 @0x518660
  virtual void LeftPress(tagButtonProps const*, void*);  // +0x98 @0x473d40  // via MeatBoyCharactor
  virtual void RightPress(tagButtonProps const*, void*);  // +0xa0 @0x473d90  // via MeatBoyCharactor
  virtual void Jump();  // +0xa8 @0x518700
  virtual void WallJump();  // +0xb0 @0x518630
  virtual bool CanJump();  // +0xb8 @0x518580
  virtual bool CanWallJump();  // +0xc0 @0x473de0  // via MeatBoyCharactor
  virtual void DoMovement();  // +0xc8 @0x473e20  // via MeatBoyCharactor
  virtual void SpawnMovementEffect();  // +0xd0 @0x4741a0  // via MeatBoyCharactor
  virtual void WallHit(tagTileCollisionType);  // +0xd8 @0x518640
  virtual void GroundHit();  // +0xe0 @0x5185b0
  virtual void OffScreen();  // +0xe8 @0x473e80  // via MeatBoyCharactor
  virtual void Death();  // +0xf0 @0x5185d0
  virtual uint64_t CanDie();  // +0xf8 @0x473e50  // via MeatBoyCharactor
  // ---- non-virtual / static (from symtab) ----
  void TheKid();  // @0x518970
  void TheKid(MeatBoyCharactor*, int);  // @0x5189d0
};
