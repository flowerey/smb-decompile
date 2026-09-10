// Recovered class model for `SMBLeaderBoardMenu` — from RTTI + vtable + symtab. NOT compiled.
// kind=si
#pragma once

class SMBLeaderBoardMenu : public SMBSelectionMenu {
public:
  virtual void ~SMBLeaderBoardMenu();  // +0x10 @0x4c43f0
  virtual void ~SMBLeaderBoardMenu();  // +0x18 @0x4c44c0
  virtual void Create(char const*, char const*);  // +0x20 @0x504620  // via SMBPopupMenu
  virtual void Initialize();  // +0x28 @0x4c45c0
  virtual void Activate();  // +0x30 @0x4c5200
  virtual void DeActivate();  // +0x38 @0x4c4020
  virtual void DeactivationFinished();  // +0x40 @0x501820  // via SMBPopupMenu
  virtual void Update();  // +0x48 @0x4c5ef0
  virtual void Render();  // +0x50 @0x4c43c0
  virtual void IncrementSelection();  // +0x58 @0x4c5dc0
  virtual void DecrementSelection();  // +0x60 @0x4c5c50
  virtual void SelectingEndOfList();  // +0x68 @0x50fe40  // via SMBSelectionMenu
  virtual void SelectingBeginOfList();  // +0x70 @0x50fe50  // via SMBSelectionMenu
  // ---- non-virtual / static (from symtab) ----
  void SMBLeaderBoardMenu();  // @0x4c4ca0
  void CloseDueToConnectionLoss();  // @0x4c4e00
  void ReadData();  // @0x4c4ef0
  void LoadData(int);  // @0x4c53c0
  void SetRowAsSelected(unsigned int);  // @0x4c5f60
  void SetRowAsUnselected(unsigned int);  // @0x4c5fb0
  void ToggleFilterSwitch();  // @0x4c6000
  void ShowSelectedPlayerProps();  // @0x4c6200
  void PageUp();  // @0x4c6230
  void PageDown();  // @0x4c6290
};
