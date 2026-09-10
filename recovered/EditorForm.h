// Recovered class model for `EditorForm` — from RTTI + vtable + symtab. NOT compiled.
// kind=single
#pragma once

class EditorForm {
public:
  virtual void ~EditorForm();  // +0x10 @0x4b5f20
  virtual void ~EditorForm();  // +0x18 @0x4b7c20
  virtual void Update();  // +0x20 @0x4b6210
  // ---- non-virtual / static (from symtab) ----
  void EditorForm(EditorFormCreate const*);  // @0x4b8350
  void SetIndividualTextValue(int, char const*, ...);  // @0x4b8aa0
  void Activate();  // @0x4b8b70
};
