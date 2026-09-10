// Recovered class model for `SMBSelectionMenu` — from RTTI + vtable + symtab. NOT compiled.
// kind=si
#pragma once

class SMBSelectionMenu : public SMBPopupMenu {
public:
  virtual void ~SMBSelectionMenu();  // +0x10 @0x50ff10
  virtual void ~SMBSelectionMenu();  // +0x18 @0x5100b0
  virtual void Create(char const*, char const*);  // +0x20 @0x504620  // via SMBPopupMenu
  virtual void Initialize();  // +0x28 @0x50fe30
  virtual void Activate();  // +0x30 @0x50ff40
  virtual void DeActivate();  // +0x38 @0x50fe60
  virtual void DeactivationFinished();  // +0x40 @0x501820  // via SMBPopupMenu
  virtual void Update();  // +0x48 @0x50ff00
  virtual void Render();  // +0x50 @0x50fef0
  virtual void IncrementSelection();  // +0x58 @0x5101a0
  virtual void DecrementSelection();  // +0x60 @0x5100e0
  virtual void SelectingEndOfList();  // +0x68 @0x50fe40
  virtual void SelectingBeginOfList();  // +0x70 @0x50fe50
  // ---- non-virtual / static (from symtab) ----
  void SMBSelectionMenu();  // @0x510270
  void InitializeMenuRows(int);  // @0x510290
  void SetRowAsSelected(unsigned int);  // @0x510400
  void SetRowAsUnselected(unsigned int);  // @0x510450
};
