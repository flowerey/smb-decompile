// Recovered class model for `Runman` — from RTTI + vtable + symtab. NOT compiled.
// kind=si size=0xaa8 (factory)
#pragma once

class Runman : public MeatBoyCharactor {
public:
  virtual void ~Runman();  // +0x10 @0x4864d0
  virtual void ~Runman();  // +0x18 @0x486690
  virtual uint64_t __getInvocationID() const;  // +0x20 @0x463100  // via SceneObject2D
  virtual uint64_t __getEditorProperties(EditableProperty*) const;  // +0x28 @0x463110  // via SceneObject2D
  virtual uint64_t Serialize(void*);  // +0x30 @0x59af10  // via SceneObject2D
  virtual void DeSerialize(void const*);  // +0x38 @0x59ae40  // via SceneObject2D
  virtual void RecordSpecial();  // +0x40 @0x473e60  // via MeatBoyCharactor
  virtual void ProcessSpecial();  // +0x48 @0x473e70  // via MeatBoyCharactor
  virtual void Update();  // +0x50 @0x4863b0
  virtual void Render();  // +0x58 @0x486390
  virtual void RenderClones();  // +0x60 @0x4865d0
  virtual void Initialize();  // +0x68 @0x473cd0  // via MeatBoyCharactor
  virtual void CreateClones();  // +0x70 @0x4864c0
  virtual void Reset();  // +0x78 @0x486350
  virtual void ForceAppear();  // +0x80 @0x474600  // via MeatBoyCharactor
  virtual void SpecialPress(tagButtonProps const*, void*);  // +0x88 @0x486530
  virtual void JumpPress(tagButtonProps const*, void*);  // +0x90 @0x4864b0
  virtual void LeftPress(tagButtonProps const*, void*);  // +0x98 @0x473d40  // via MeatBoyCharactor
  virtual void RightPress(tagButtonProps const*, void*);  // +0xa0 @0x473d90  // via MeatBoyCharactor
  virtual void Jump();  // +0xa8 @0x486360
  virtual void WallJump();  // +0xb0 @0x486490
  virtual bool CanJump();  // +0xb8 @0x486380
  virtual bool CanWallJump();  // +0xc0 @0x473de0  // via MeatBoyCharactor
  virtual void DoMovement();  // +0xc8 @0x473e20  // via MeatBoyCharactor
  virtual void SpawnMovementEffect();  // +0xd0 @0x4741a0  // via MeatBoyCharactor
  virtual void WallHit(tagTileCollisionType);  // +0xd8 @0x4864a0
  virtual void GroundHit();  // +0xe0 @0x486370
  virtual void OffScreen();  // +0xe8 @0x473e80  // via MeatBoyCharactor
  virtual void Death();  // +0xf0 @0x473ed0  // via MeatBoyCharactor
  virtual uint64_t CanDie();  // +0xf8 @0x473e50  // via MeatBoyCharactor
  // ---- non-virtual / static (from symtab) ----
  void Runman();  // @0x4866f0
  void Runman(MeatBoyCharactor*, int);  // @0x486800
};
