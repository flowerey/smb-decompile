// Recovered class model for `SMBMoveOn` — from RTTI + vtable + symtab. NOT compiled.
// kind=si
#pragma once

class SMBMoveOn : public SMBPopupMenu {
public:
  virtual void ~SMBMoveOn();  // +0x10 @0x503e60
  virtual void ~SMBMoveOn();  // +0x18 @0x503fc0
  virtual void Create(char const*, char const*);  // +0x20 @0x504620  // via SMBPopupMenu
  virtual void Initialize();  // +0x28 @0x501950
  virtual void Activate();  // +0x30 @0x503470
  virtual void DeActivate();  // +0x38 @0x5040e0
  virtual void DeactivationFinished();  // +0x40 @0x501f60
  virtual void Update();  // +0x48 @0x5018f0
  virtual void Render();  // +0x50 @0x502990
  // ---- non-virtual / static (from symtab) ----
  void SMBMoveOn();  // @0x505470
  void DisconnectedStorage();  // @0x5054f0
  void MessageBoxRender(tagUAState);  // @0x505510
};
