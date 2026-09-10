// Recovered class model for `SMBCreditMenu` — from RTTI + vtable + symtab. NOT compiled.
// kind=si
#pragma once

class SMBCreditMenu : public SMBPopupMenu {
public:
  virtual void ~SMBCreditMenu();  // +0x10 @0x503f10
  virtual void ~SMBCreditMenu();  // +0x18 @0x503f40
  virtual void Create(char const*, char const*);  // +0x20 @0x504620  // via SMBPopupMenu
  virtual void Initialize();  // +0x28 @0x5019e0
  virtual void Activate();  // +0x30 @0x503640
  virtual void DeActivate();  // +0x38 @0x5044c0
  virtual void DeactivationFinished();  // +0x40 @0x501850
  virtual void Update();  // +0x48 @0x501840
  virtual void Render();  // +0x50 @0x502a60
  // ---- non-virtual / static (from symtab) ----
  void SMBCreditMenu();  // @0x504890
};
