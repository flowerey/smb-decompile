// Recovered class model for `UIDropDown` — from RTTI + vtable + symtab. NOT compiled.
// kind=si
#pragma once

class UIDropDown : public UIFormElement {
public:
  virtual void ~UIDropDown();  // +0x10 @0x5a2690
  virtual void ~UIDropDown();  // +0x18 @0x5a2c40
  virtual void Update();  // +0x20 @0x5a2970
  virtual void Render();  // +0x28 @0x5a27c0
  virtual void MouseOut();  // +0x30 @0x5a2120  // via UIFormElement
  virtual void MouseOver();  // +0x38 @0x5a2130  // via UIFormElement
  virtual void ClickOn();  // +0x40 @0x5a2140  // via UIFormElement
  virtual void ClickOff();  // +0x48 @0x5a2150  // via UIFormElement
  virtual void Activate();  // +0x50 @0x5a2760
  virtual void DeActivate();  // +0x58 @0x5a2790
  virtual void __setParent(UIForm*);  // +0x60 @0x5a2b30
  virtual void __getElementArea(UIRect&);  // +0x68 @0x5a26e0
  // ---- non-virtual / static (from symtab) ----
  void UIDropDown(UIDropDownCreation const*);  // @0x5a2c90
  void ShowOptions();  // @0x5a2e90
  void AddDropdownElement(wchar_t const*, void*);  // @0x5a2ed0
  void SetSelected(int);  // @0x5a3070
  void SetSelected(UIDropDown::UIDropdownElement*);  // @0x5a30a0
};
