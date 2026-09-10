// Recovered class model for `UIButton` — from RTTI + vtable + symtab. NOT compiled.
// kind=si
#pragma once

class UIButton : public UIFormElement {
public:
  virtual void ~UIButton();  // +0x10 @0x5a2190
  virtual void ~UIButton();  // +0x18 @0x5a2320
  virtual void Update();  // +0x20 @0x5a21d0
  virtual void Render();  // +0x28 @0x5a2360
  virtual void MouseOut();  // +0x30 @0x5a2290
  virtual void MouseOver();  // +0x38 @0x5a2280
  virtual void ClickOn();  // +0x40 @0x5a2250
  virtual void ClickOff();  // +0x48 @0x5a2150  // via UIFormElement
  virtual void Activate();  // +0x50 @0x5a22a0
  virtual void DeActivate();  // +0x58 @0x5a22c0
  virtual void __setParent(UIForm*);  // +0x60 @0x5a22e0
  virtual void __getElementArea(UIRect&);  // +0x68 @0x5a21e0
  // ---- non-virtual / static (from symtab) ----
  void UIButton(UIButtonCreation const*);  // @0x5a2560
  void __setButtonPadding(float, float);  // @0x5a2660
};
