// Recovered class model for `EditorButton` — from RTTI + vtable + symtab. NOT compiled.
// kind=single
#pragma once

class EditorButton {
public:
  virtual void ~EditorButton();  // +0x10 @0x49e1c0
  virtual void ~EditorButton();  // +0x18 @0x49e420
  virtual void SetMouseOverState();  // +0x20 @0x49e490
  virtual void OnMouseOver();  // +0x28 @0x49eb80
  virtual void SetMouseOutState();  // +0x30 @0x49e470
  virtual void OnMouseOut();  // +0x38 @0x49ebb0
  virtual void OnMouseClick();  // +0x40 @0x49ebe0
  virtual void SetSelectedState();  // +0x48 @0x49e450
  virtual void UnSelectedClick();  // +0x50 @0x49e1f0
  virtual void Update();  // +0x58 @0x4a2870
  // ---- non-virtual / static (from symtab) ----
  void EditorButton();  // @0x4a2590
  void EditorButton(FlashLibraryInstance*, FlashLibraryInstance*);  // @0x4a25f0
  void SetButtonProps(void (*)(void*), void*, void (*)(void*), void*, void (*)(void*), void*);  // @0x4a2650
  bool IsMouseOverButton();  // @0x4a2670
  void SetSelected();  // @0x4a2940
  void SetUnSelected();  // @0x4a2950
  void Hide();  // @0x4a2960
  void Show();  // @0x4a2970
  int IsSelected();  // @0x4a2980
};
