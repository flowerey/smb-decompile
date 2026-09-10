// Recovered class model for `SMBPopupMenu` — from RTTI + vtable + symtab. NOT compiled.
// kind=single
#pragma once

class SMBPopupMenu {
public:
  virtual void ~SMBPopupMenu();  // +0x10 @0x503d90
  virtual void ~SMBPopupMenu();  // +0x18 @0x503f20
  virtual void Create(char const*, char const*);  // +0x20 @0x504620
  virtual void slot_3();  // +0x28 @0x451e40 ?
  virtual void Activate();  // +0x30 @0x502d60
  virtual void DeActivate();  // +0x38 @0x501e30
  virtual void DeactivationFinished();  // +0x40 @0x501820
  virtual void Update();  // +0x48 @0x501830
  virtual void Render();  // +0x50 @0x502110
  // ---- non-virtual / static (from symtab) ----
  void InitializeMenuPopupLib();  // @0x504540
  void DestroyMenuPopupLib();  // @0x504790
  void SMBPopupMenu();  // @0x5047e0
  void SetMenuText(char const*, wchar_t const*);  // @0x504850
  bool ShouldDelete();  // @0x504880
};
