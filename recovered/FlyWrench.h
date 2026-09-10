// Recovered class model for `FlyWrench` — from RTTI + vtable + symtab. NOT compiled.
// kind=si size=0xaa0 (factory)
#pragma once

class FlyWrench : public MeatBoyCharactor {
public:
  virtual void ~FlyWrench();  // +0x10 @0x469ee0
  virtual void ~FlyWrench();  // +0x18 @0x469f40
  virtual uint64_t __getInvocationID() const;  // +0x20 @0x463100  // via SceneObject2D
  virtual uint64_t __getEditorProperties(EditableProperty*) const;  // +0x28 @0x463110  // via SceneObject2D
  virtual uint64_t Serialize(void*);  // +0x30 @0x59af10  // via SceneObject2D
  virtual void DeSerialize(void const*);  // +0x38 @0x59ae40  // via SceneObject2D
  virtual void RecordSpecial();  // +0x40 @0x473e60  // via MeatBoyCharactor
  virtual void ProcessSpecial();  // +0x48 @0x473e70  // via MeatBoyCharactor
  virtual void Update();  // +0x50 @0x469e70
  virtual void Render();  // +0x58 @0x469e60
  virtual void RenderClones();  // +0x60 @0x47aa90  // via MeatBoyCharactor
  virtual void Initialize();  // +0x68 @0x473cd0  // via MeatBoyCharactor
  virtual void CreateClones();  // +0x70 @0x473e90  // via MeatBoyCharactor
  virtual void Reset();  // +0x78 @0x469e50
  virtual void ForceAppear();  // +0x80 @0x474600  // via MeatBoyCharactor
  virtual void SpecialPress(tagButtonProps const*, void*);  // +0x88 @0x473ce0  // via MeatBoyCharactor
  virtual void JumpPress(tagButtonProps const*, void*);  // +0x90 @0x469ed0
  virtual void LeftPress(tagButtonProps const*, void*);  // +0x98 @0x469d80
  virtual void RightPress(tagButtonProps const*, void*);  // +0xa0 @0x469db0
  virtual void Jump();  // +0xa8 @0x469ef0
  virtual void WallJump();  // +0xb0 @0x469e90
  virtual bool CanJump();  // +0xb8 @0x469de0
  virtual uint64_t CanWallJump();  // +0xc0 @0x469e10
  virtual void DoMovement();  // +0xc8 @0x473e20  // via MeatBoyCharactor
  virtual void SpawnMovementEffect();  // +0xd0 @0x4741a0  // via MeatBoyCharactor
  virtual void WallHit(tagTileCollisionType);  // +0xd8 @0x469ea0
  virtual void GroundHit();  // +0xe0 @0x469e20
  virtual void OffScreen();  // +0xe8 @0x473e80  // via MeatBoyCharactor
  virtual void Death();  // +0xf0 @0x469e40
  virtual uint64_t CanDie();  // +0xf8 @0x473e50  // via MeatBoyCharactor
  // ---- non-virtual / static (from symtab) ----
  void FlyWrench();  // @0x469f60
  void FlyWrench(MeatBoyCharactor*, int);  // @0x469fb0
};
