// Recovered class model for `UIFrame` — from RTTI + vtable + symtab. NOT compiled.
// kind=si
#pragma once

class UIFrame : public UIFormElement {
public:
  virtual void ~UIFrame();  // +0x10 @0x5a4850
  virtual void ~UIFrame();  // +0x18 @0x5a4e30
  virtual void Update();  // +0x20 @0x5a4bc0
  virtual void Render();  // +0x28 @0x5a4990
  virtual void MouseOut();  // +0x30 @0x5a2120  // via UIFormElement
  virtual void MouseOver();  // +0x38 @0x5a2130  // via UIFormElement
  virtual void ClickOn();  // +0x40 @0x5a2140  // via UIFormElement
  virtual void ClickOff();  // +0x48 @0x5a2150  // via UIFormElement
  virtual void Activate();  // +0x50 @0x5a4b70
  virtual void DeActivate();  // +0x58 @0x5a48d0
  virtual void __setParent(UIForm*);  // +0x60 @0x5a4910
  virtual void __getElementArea(UIRect&);  // +0x68 @0x5a4890
  // ---- non-virtual / static (from symtab) ----
  void UIFrame(UIFrameCreation const*);  // @0x5a4e70
};
