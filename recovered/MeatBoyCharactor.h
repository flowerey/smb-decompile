// Recovered class model for `MeatBoyCharactor` — from RTTI + vtable + symtab. NOT compiled.
// kind=si
#pragma once

class MeatBoyCharactor : public SceneObject2D {
public:
  virtual void ~MeatBoyCharactor();  // +0x10 @0x4763b0
  virtual void ~MeatBoyCharactor();  // +0x18 @0x476510
  virtual uint64_t __getInvocationID() const;  // +0x20 @0x463100  // via SceneObject2D
  virtual uint64_t __getEditorProperties(EditableProperty*) const;  // +0x28 @0x463110  // via SceneObject2D
  virtual uint64_t Serialize(void*);  // +0x30 @0x59af10  // via SceneObject2D
  virtual void DeSerialize(void const*);  // +0x38 @0x59ae40  // via SceneObject2D
  virtual void RecordSpecial();  // +0x40 @0x473e60
  virtual void ProcessSpecial();  // +0x48 @0x473e70
  virtual void Update();  // +0x50 @0x477070
  virtual void Render();  // +0x58 @0x47ab60
  virtual void RenderClones();  // +0x60 @0x47aa90
  virtual void Initialize();  // +0x68 @0x473cd0
  virtual void CreateClones();  // +0x70 @0x473e90
  virtual void Reset();  // +0x78 @0x474920
  virtual void ForceAppear();  // +0x80 @0x474600
  virtual void SpecialPress(tagButtonProps const*, void*);  // +0x88 @0x473ce0
  virtual void JumpPress(tagButtonProps const*, void*);  // +0x90 @0x473d00
  virtual void LeftPress(tagButtonProps const*, void*);  // +0x98 @0x473d40
  virtual void RightPress(tagButtonProps const*, void*);  // +0xa0 @0x473d90
  virtual void Jump();  // +0xa8 @0x474800
  virtual void WallJump();  // +0xb0 @0x474490
  virtual bool CanJump();  // +0xb8 @0x473e00
  virtual bool CanWallJump();  // +0xc0 @0x473de0
  virtual void DoMovement();  // +0xc8 @0x473e20
  virtual void SpawnMovementEffect();  // +0xd0 @0x4741a0
  virtual void WallHit(tagTileCollisionType);  // +0xd8 @0x474360
  virtual void GroundHit();  // +0xe0 @0x4746e0
  virtual void OffScreen();  // +0xe8 @0x473e80
  virtual void Death();  // +0xf0 @0x473ed0
  virtual uint64_t CanDie();  // +0xf8 @0x473e50
  // ---- non-virtual / static (from symtab) ----
  void MeatBoyCharactor();  // @0x476530
  void Clone(MeatBoyCharactor*, int);  // @0x476980
  void SetState(tagSuperMeatBoyState);  // @0x476fe0
  void ProcessReplayFrame();  // @0x4795b0
  void RenderEffects();  // @0x479a60
  void WritePropertiesToFile();  // @0x47abd0
  void AddEffect(tagSuperMeatBoyEffects, Vector2 const&, Vector2 const&);  // @0x47af00
  void RestoreControls();  // @0x47b1c0
  void MeatBoyCharactor(char const*, tagSuperMeatBoyCharactor);  // @0x47b350
  void RemoveControls();  // @0x47dcb0
  void ResetReplays();  // @0x47de10
  void SwitchToReplayMode();  // @0x47de20
  void SwitchToRegularMode();  // @0x47e050
  MeatBoyCharactor *__thiscall __getRenderPos();  // @0x47e0c0
  void ResetLevelDeaths();  // @0x47e100
  uint64_t GetGroundSplatInstance();  // @0x47e160
  void MakeShocked();  // @0x47e170
};
