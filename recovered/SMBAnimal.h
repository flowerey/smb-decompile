// Recovered class model for `SMBAnimal` — from RTTI + vtable + symtab. NOT compiled.
// kind=si
#pragma once

class SMBAnimal : public SceneObject2D {
public:
  virtual void ~SMBAnimal();  // +0x10 @0x4868a0
  virtual void ~SMBAnimal();  // +0x18 @0x4868b0
  virtual uint64_t __getInvocationID() const;  // +0x20 @0x463100  // via SceneObject2D
  virtual uint64_t __getEditorProperties(EditableProperty*) const;  // +0x28 @0x463110  // via SceneObject2D
  virtual uint64_t Serialize(void*);  // +0x30 @0x59af10  // via SceneObject2D
  virtual void DeSerialize(void const*);  // +0x38 @0x59ae40  // via SceneObject2D
  // ---- non-virtual / static (from symtab) ----
  void SMBAnimal();  // @0x4868d0
  bool CanJumpOver(GRIDBLOCK*);  // @0x486d90
  bool CanJumpDown();  // @0x486e20
  float GetHorzSpeed();  // @0x486e60
  float GetSafeDistance();  // @0x486f10
  uint32_t GetAnimalState();  // @0x488240
  uint32_t GetAnimalAIState();  // @0x488250
  void SetState(tagSMBAnimalState);  // @0x488260
  void Update();  // @0x48aa70
  void SetAIState(tagSMBAnimalAIState);  // @0x48ac00
  void SetWayPoint(int, Vector2 const&);  // @0x48ac60
  void Reset();  // @0x48ac80
};
