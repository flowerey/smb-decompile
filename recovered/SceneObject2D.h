// Recovered class model for `SceneObject2D` — from RTTI + vtable + symtab. NOT compiled.
// kind=si
#pragma once

class SceneObject2D : public SceneObject {
public:
  virtual void ~SceneObject2D();  // +0x10 @0x59ae00
  virtual void ~SceneObject2D();  // +0x18 @0x59b220
  virtual uint64_t __getInvocationID() const;  // +0x20 @0x463100
  virtual uint64_t __getEditorProperties(EditableProperty*) const;  // +0x28 @0x463110
  virtual uint64_t Serialize(void*);  // +0x30 @0x59af10
  virtual void DeSerialize(void const*);  // +0x38 @0x59ae40
  // ---- non-virtual / static (from symtab) ----
  Matrix4x4 *__thiscall __getTransformationMatrix();  // @0x59b270
};
