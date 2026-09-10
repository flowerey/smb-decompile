// Recovered class model for `UIForm` — from RTTI + vtable + symtab. NOT compiled.
// kind=si
#pragma once

class UIForm : public RenderLayerObject {
public:
  virtual void ~UIForm();  // +0x10 @0x5a30e0
  virtual void ~UIForm();  // +0x18 @0x5a3560
  virtual void Render();  // +0x20 @0x5a3170
  // ---- non-virtual / static (from symtab) ----
  void UIForm();  // @0x5a3620
  void Close();  // @0x5a36c0
  void __setPositionInPixels(float, float);  // @0x5a3730
  void ElementUpdate(UIFormElement*, UIFormElement**, float, float, tagButtonState);  // @0x5a3740
  void Update();  // @0x5a3840
  void AddFormElement(UIFormElement*);  // @0x5a3c00
  void UIForm(UIFormCreation const*);  // @0x5a3ce0
  void RemoveFormElement(UIFormElement*);  // @0x5a3e40
  void CalculateFormArea(UIRect*);  // @0x5a3eb0
  void __setEdgePadding(unsigned short, unsigned short);  // @0x5a4110
  void Activate();  // @0x5a4150
  void DeActivate();  // @0x5a4220
};
