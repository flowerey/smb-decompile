// Recovered class model for `SceneObject3D` — from RTTI + vtable + symtab. NOT compiled.
// kind=si
#pragma once

class SceneObject3D : public SceneObject {
public:
  virtual void ~SceneObject3D();  // +0x10 @0x59adc0
  virtual void ~SceneObject3D();  // +0x18 @0x59b1d0
  virtual uint64_t __getInvocationID() const;  // +0x20 @0x581d50
  virtual uint64_t __getEditorProperties(EditableProperty*) const;  // +0x28 @0x581d60
  virtual uint64_t Serialize(void*);  // +0x30 @0x59b0e0
  virtual void DeSerialize(void const*);  // +0x38 @0x59afe0
  // ---- non-virtual / static (from symtab) ----
  void __setVelocity(FPUVector const&);  // @0x59b2d0
  Matrix4x4 *__thiscall __getTransformationMatrix();  // @0x59b3b0
};
