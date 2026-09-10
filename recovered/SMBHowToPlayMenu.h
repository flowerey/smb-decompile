// Recovered class model for `SMBHowToPlayMenu` — from RTTI + vtable + symtab. NOT compiled.
// kind=si
#pragma once

class SMBHowToPlayMenu : public SMBPopupMenu {
public:
  virtual void ~SMBHowToPlayMenu();  // +0x10 @0x503f00
  virtual void ~SMBHowToPlayMenu();  // +0x18 @0x503f60
  virtual void Create(char const*, char const*);  // +0x20 @0x504620  // via SMBPopupMenu
  virtual void Initialize();  // +0x28 @0x5019b0
  virtual void Activate();  // +0x30 @0x5030f0
  virtual void DeActivate();  // +0x38 @0x504440
  virtual void DeactivationFinished();  // +0x40 @0x501870
  virtual void Update();  // +0x48 @0x501860
  virtual void Render();  // +0x50 @0x502a40
  // ---- non-virtual / static (from symtab) ----
  void SMBHowToPlayMenu();  // @0x504900
};
