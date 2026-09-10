// Recovered class model for `UIFormElement` — from RTTI + vtable + symtab. NOT compiled.
// kind=single
#pragma once

class UIFormElement {
public:
  virtual void ~UIFormElement();  // +0x10 @0x5a2110
  virtual void ~UIFormElement();  // +0x18 @0x5a2180
  virtual void slot_2();  // +0x20 @0x451e40 ?
  virtual void slot_3();  // +0x28 @0x451e40 ?
  virtual void MouseOut();  // +0x30 @0x5a2120
  virtual void MouseOver();  // +0x38 @0x5a2130
  virtual void ClickOn();  // +0x40 @0x5a2140
  virtual void ClickOff();  // +0x48 @0x5a2150
  virtual void Activate();  // +0x50 @0x5a2160
  virtual void DeActivate();  // +0x58 @0x5a2170
  virtual void __setParent(UIForm*);  // +0x60 @0x5a1d30
  virtual void slot_11();  // +0x68 @0x451e40 ?
  // ---- non-virtual / static (from symtab) ----
  void GetAbsoluteRect(UIFormElement*, UIRect&);  // @0x5a2060
  void ConvertFromPixelToScreen(Vector2*, Vector2 const*);  // @0x5a20d0
};
