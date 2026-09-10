// Recovered class model for `SMBControlsMenu` — from RTTI + vtable + symtab. NOT compiled.
// kind=si
#pragma once

class SMBControlsMenu : public SMBPopupMenu {
public:
  virtual void ~SMBControlsMenu();  // +0x10 @0x503e90
  virtual void ~SMBControlsMenu();  // +0x18 @0x503fe0
  virtual void Create(char const*, char const*);  // +0x20 @0x504620  // via SMBPopupMenu
  virtual void Initialize();  // +0x28 @0x501dc0
  virtual void Activate();  // +0x30 @0x503590
  virtual void DeActivate();  // +0x38 @0x504060
  virtual void DeactivationFinished();  // +0x40 @0x501880
  virtual void Update();  // +0x48 @0x501a10
  virtual void Render();  // +0x50 @0x5029f0
  // ---- non-virtual / static (from symtab) ----
  void SMBControlsMenu();  // @0x504970
};
