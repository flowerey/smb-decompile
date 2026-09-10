// Recovered class model for `UIMessageBox` — from RTTI + vtable + symtab. NOT compiled.
// kind=si
#pragma once

class UIMessageBox : public UIForm {
public:
  virtual void ~UIMessageBox();  // +0x10 @0x5a3430
  virtual void ~UIMessageBox();  // +0x18 @0x5a34d0
  virtual void Render();  // +0x20 @0x5a3170  // via UIForm
  // ---- non-virtual / static (from symtab) ----
  void UIMessageBox(wchar_t const*, Vector2 const&);  // @0x5a4280
};
