// Recovered class model for `ReimplmentThisSprite` — from RTTI + vtable + symtab. NOT compiled.
// kind=vmi
#pragma once

class ReimplmentThisSprite : public SceneObject3D, public RenderableObject {
public:
  virtual void ~ReimplmentThisSprite();  // +0x10 @0x5979a0
  virtual void ~ReimplmentThisSprite();  // +0x18 @0x5979b0
  virtual uint64_t __getInvocationID() const;  // +0x20 @0x581d50  // via SceneObject3D
  virtual uint64_t __getEditorProperties(EditableProperty*) const;  // +0x28 @0x581d60  // via SceneObject3D
  virtual uint64_t Serialize(void*);  // +0x30 @0x597990
  virtual void DeSerialize(void const*);  // +0x38 @0x597980
  // ---- non-virtual / static (from symtab) ----
  void ReimplmentThisSprite();  // @0x5979d0
  void RenderSprite();  // @0x597bc0
};
