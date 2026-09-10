// Recovered class model for `SMBReplayManager` — from RTTI + vtable + symtab. NOT compiled.
// kind=si
#pragma once

class SMBReplayManager : public SMBSelectionMenu {
public:
  virtual void ~SMBReplayManager();  // +0x10 @0x50ea20
  virtual void ~SMBReplayManager();  // +0x18 @0x50f030
  virtual void Create(char const*, char const*);  // +0x20 @0x504620  // via SMBPopupMenu
  virtual void Initialize();  // +0x28 @0x50ecf0
  virtual void Activate();  // +0x30 @0x50f740
  virtual void DeActivate();  // +0x38 @0x50e920
  virtual void DeactivationFinished();  // +0x40 @0x50e8e0
  virtual void Update();  // +0x48 @0x50e8d0
  virtual void Render();  // +0x50 @0x50e8c0
  virtual void IncrementSelection();  // +0x58 @0x50f680
  virtual void DecrementSelection();  // +0x60 @0x50f590
  virtual void SelectingEndOfList();  // +0x68 @0x50fe40  // via SMBSelectionMenu
  virtual void SelectingBeginOfList();  // +0x70 @0x50fe50  // via SMBSelectionMenu
  // ---- non-virtual / static (from symtab) ----
  void SMBReplayManager();  // @0x50f090
  void LoadText();  // @0x50f0e0
  bool IsSelectedReplayValid();  // @0x50f9a0
  void LoadSelectedReplay();  // @0x50fa70
  void LoadSelectedReplayData();  // @0x50fbb0
  void DeleteSelectedReplay();  // @0x50fc00
  void SetManageOnlyMode(int);  // @0x50fd20
  void LoadFileList();  // @0x50fd40
  long GetSelectedReplayInfo();  // @0x50fdc0
  void DisconnectedStorage();  // @0x50fdf0
  bool AllowDelete();  // @0x50fe10
};
