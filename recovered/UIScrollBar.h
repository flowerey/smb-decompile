// Recovered class model for `UIScrollBar` — from RTTI + vtable + symtab. NOT compiled.
// kind=si
#pragma once

class UIScrollBar : public UIFormElement {
public:
  virtual void ~UIScrollBar();  // +0x10 @0x5a53c0
  virtual void ~UIScrollBar();  // +0x18 @0x5a5470
  virtual void Update();  // +0x20 @0x5a5790
  virtual void Render();  // +0x28 @0x5a5500
  virtual void MouseOut();  // +0x30 @0x5a2120  // via UIFormElement
  virtual void MouseOver();  // +0x38 @0x5a2130  // via UIFormElement
  virtual void ClickOn();  // +0x40 @0x5a2140  // via UIFormElement
  virtual void ClickOff();  // +0x48 @0x5a2150  // via UIFormElement
  virtual void Activate();  // +0x50 @0x5a5410
  virtual void DeActivate();  // +0x58 @0x5a5440
  virtual void __setParent(UIForm*);  // +0x60 @0x5a5480
  virtual void __getElementArea(UIRect&);  // +0x68 @0x5a53d0
  // ---- non-virtual / static (from symtab) ----
  void UIScrollBar(UIScrollBarCreation const*);  // @0x5a5900
};
