// Recovered class model for `UITextField` — from RTTI + vtable + symtab. NOT compiled.
// kind=si
#pragma once

class UITextField : public UIFormElement {
public:
  virtual void ~UITextField();  // +0x10 @0x5a5b50
  virtual void ~UITextField();  // +0x18 @0x5a5be0
  virtual void Update();  // +0x20 @0x5a5c00
  virtual void Render();  // +0x28 @0x5a61b0
  virtual void MouseOut();  // +0x30 @0x5a2120  // via UIFormElement
  virtual void MouseOver();  // +0x38 @0x5a2130  // via UIFormElement
  virtual void ClickOn();  // +0x40 @0x5a5b20
  virtual void ClickOff();  // +0x48 @0x5a5af0
  virtual void Activate();  // +0x50 @0x5a2160  // via UIFormElement
  virtual void DeActivate();  // +0x58 @0x5a2170  // via UIFormElement
  virtual void __setParent(UIForm*);  // +0x60 @0x5a1d30  // via UIFormElement
  virtual void __getElementArea(UIRect&);  // +0x68 @0x5a5a90
  // ---- non-virtual / static (from symtab) ----
  void UITextField();  // @0x5a5d70
  void UITextField(UITextFieldCreation const*);  // @0x5a5de0
  void CustomRender(unsigned int, unsigned int);  // @0x5a5f00
  void SetStaticText(wchar_t const*);  // @0x5a61f0
  void SetDynamicText(wchar_t const*, ...);  // @0x5a6240
};
