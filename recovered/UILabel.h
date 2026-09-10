// Recovered class model for `UILabel` — from RTTI + vtable + symtab. NOT compiled.
// kind=si
#pragma once

class UILabel : public UIFormElement {
public:
  virtual void ~UILabel();  // +0x10 @0x5a4fc0
  virtual void ~UILabel();  // +0x18 @0x5a5120
  virtual void Update();  // +0x20 @0x5a5000
  virtual void Render();  // +0x28 @0x5a5160
  virtual void MouseOut();  // +0x30 @0x5a2120  // via UIFormElement
  virtual void MouseOver();  // +0x38 @0x5a2130  // via UIFormElement
  virtual void ClickOn();  // +0x40 @0x5a2140  // via UIFormElement
  virtual void ClickOff();  // +0x48 @0x5a2150  // via UIFormElement
  virtual void Activate();  // +0x50 @0x5a2160  // via UIFormElement
  virtual void DeActivate();  // +0x58 @0x5a2170  // via UIFormElement
  virtual void __setParent(UIForm*);  // +0x60 @0x5a1d30  // via UIFormElement
  virtual void __getElementArea(UIRect&);  // +0x68 @0x5a5010
  // ---- non-virtual / static (from symtab) ----
  void UILabel(UILabelCreation const*);  // @0x5a5270
  void __setText(wchar_t const*);  // @0x5a5350
  void __setAlign(tagTextAlign);  // @0x5a5360
};
