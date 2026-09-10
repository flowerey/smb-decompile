// Recovered class model for `EditorTextField` — from RTTI + vtable + symtab. NOT compiled.
// kind=si
#pragma once

class EditorTextField : public EditorButton {
public:
  virtual void ~EditorTextField();  // +0x10 @0x49e200
  virtual void ~EditorTextField();  // +0x18 @0x49e3f0
  virtual void SetMouseOverState();  // +0x20 @0x49e230
  virtual void OnMouseOver();  // +0x28 @0x49eb80  // via EditorButton
  virtual void SetMouseOutState();  // +0x30 @0x49e240
  virtual void OnMouseOut();  // +0x38 @0x49ebb0  // via EditorButton
  virtual void OnMouseClick();  // +0x40 @0x49ebe0  // via EditorButton
  virtual void SetSelectedState();  // +0x48 @0x49e540
  virtual void UnSelectedClick();  // +0x50 @0x49e520
  virtual void Update();  // +0x58 @0x4a2920
  // ---- non-virtual / static (from symtab) ----
  void EditorTextField(FlashLibraryInstance*, FlashLibraryInstance*);  // @0x4a2990
  void SetTextField(FlashEditableTextField*);  // @0x4a29f0
};
