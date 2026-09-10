// Recovered class model for `SMBStatisticsMenu` — from RTTI + vtable + symtab. NOT compiled.
// kind=si
#pragma once

class SMBStatisticsMenu : public SMBPopupMenu {
public:
  virtual void ~SMBStatisticsMenu();  // +0x10 @0x503e80
  virtual void ~SMBStatisticsMenu();  // +0x18 @0x503f80
  virtual void Create(char const*, char const*);  // +0x20 @0x504620  // via SMBPopupMenu
  virtual void Initialize();  // +0x28 @0x501980
  virtual void Activate();  // +0x30 @0x502f20
  virtual void DeActivate();  // +0x38 @0x5043c0
  virtual void DeactivationFinished();  // +0x40 @0x5018a0
  virtual void Update();  // +0x48 @0x501890
  virtual void Render();  // +0x50 @0x5029d0
  // ---- non-virtual / static (from symtab) ----
  void SMBStatisticsMenu();  // @0x5049f0
};
