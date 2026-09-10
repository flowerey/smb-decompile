// Recovered class model for `Cursor3D` — from RTTI + vtable + symtab. NOT compiled.
// kind=si
#pragma once

class Cursor3D : public ReimplmentThisSprite {
public:
  virtual void ~Cursor3D();  // +0x10 @0x581b90
  virtual void ~Cursor3D();  // +0x18 @0x581bf0
  virtual uint64_t __getInvocationID() const;  // +0x20 @0x581d50  // via SceneObject3D
  virtual uint64_t __getEditorProperties(EditableProperty*) const;  // +0x28 @0x581d60  // via SceneObject3D
  virtual uint64_t Serialize(void*);  // +0x30 @0x597990  // via ReimplmentThisSprite
  virtual void DeSerialize(void const*);  // +0x38 @0x597980  // via ReimplmentThisSprite
  // ---- non-virtual / static (from symtab) ----
  void Cursor3D();  // @0x581c50
  void Render();  // @0x581d40
};
