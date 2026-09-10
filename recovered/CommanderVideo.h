// Recovered class model for `CommanderVideo` — from RTTI + vtable + symtab. NOT compiled.
// kind=si size=0xad8 (factory)
#pragma once

class CommanderVideo : public MeatBoyCharactor {
public:
  virtual void ~CommanderVideo();  // +0x10 @0x4643d0
  virtual void ~CommanderVideo();  // +0x18 @0x464490
  virtual uint64_t __getInvocationID() const;  // +0x20 @0x463100  // via SceneObject2D
  virtual uint64_t __getEditorProperties(EditableProperty*) const;  // +0x28 @0x463110  // via SceneObject2D
  virtual uint64_t Serialize(void*);  // +0x30 @0x59af10  // via SceneObject2D
  virtual void DeSerialize(void const*);  // +0x38 @0x59ae40  // via SceneObject2D
  virtual void RecordSpecial();  // +0x40 @0x463f40
  virtual void ProcessSpecial();  // +0x48 @0x464230
  virtual void Update();  // +0x50 @0x4644b0
  virtual void Render();  // +0x58 @0x4645a0
  virtual void RenderClones();  // +0x60 @0x464280
  virtual void Initialize();  // +0x68 @0x473cd0  // via MeatBoyCharactor
  virtual void CreateClones();  // +0x70 @0x4640f0
  virtual void Reset();  // +0x78 @0x463fa0
  virtual void ForceAppear();  // +0x80 @0x474600  // via MeatBoyCharactor
  virtual void SpecialPress(tagButtonProps const*, void*);  // +0x88 @0x473ce0  // via MeatBoyCharactor
  virtual void JumpPress(tagButtonProps const*, void*);  // +0x90 @0x464010
  virtual void LeftPress(tagButtonProps const*, void*);  // +0x98 @0x473d40  // via MeatBoyCharactor
  virtual void RightPress(tagButtonProps const*, void*);  // +0xa0 @0x473d90  // via MeatBoyCharactor
  virtual void Jump();  // +0xa8 @0x474800  // via MeatBoyCharactor
  virtual void WallJump();  // +0xb0 @0x463fd0
  virtual bool CanJump();  // +0xb8 @0x473e00  // via MeatBoyCharactor
  virtual bool CanWallJump();  // +0xc0 @0x473de0  // via MeatBoyCharactor
  virtual void DoMovement();  // +0xc8 @0x473e20  // via MeatBoyCharactor
  virtual void SpawnMovementEffect();  // +0xd0 @0x4741a0  // via MeatBoyCharactor
  virtual void WallHit(tagTileCollisionType);  // +0xd8 @0x463fe0
  virtual void GroundHit();  // +0xe0 @0x4746e0  // via MeatBoyCharactor
  virtual void OffScreen();  // +0xe8 @0x473e80  // via MeatBoyCharactor
  virtual void Death();  // +0xf0 @0x463f80
  virtual uint64_t CanDie();  // +0xf8 @0x473e50  // via MeatBoyCharactor
  // ---- non-virtual / static (from symtab) ----
  void CommanderVideo();  // @0x464c70
  void CommanderVideo(MeatBoyCharactor*, int);  // @0x464d60
  void AddRainbowPosition(Vector2 const&);  // @0x464e30
  long GetRainbowPosition(int);  // @0x464ea0
};
