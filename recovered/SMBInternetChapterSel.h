// Recovered class model for `SMBInternetChapterSel` — from RTTI + vtable + symtab. NOT compiled.
// kind=si
#pragma once

class SMBInternetChapterSel : public SMBSelectionMenu {
public:
  virtual void ~SMBInternetChapterSel();  // +0x10 @0x4c2dc0
  virtual void ~SMBInternetChapterSel();  // +0x18 @0x4c35f0
  virtual void Create(char const*, char const*);  // +0x20 @0x504620  // via SMBPopupMenu
  virtual void Initialize();  // +0x28 @0x4c30c0
  virtual void Activate();  // +0x30 @0x4c3520
  virtual void DeActivate();  // +0x38 @0x4c2cc0
  virtual void DeactivationFinished();  // +0x40 @0x4c3090
  virtual void Update();  // +0x48 @0x4c3ce0
  virtual void Render();  // +0x50 @0x4c2cb0
  virtual void IncrementSelection();  // +0x58 @0x4c39d0
  virtual void DecrementSelection();  // +0x60 @0x4c38f0
  virtual void SelectingEndOfList();  // +0x68 @0x50fe40  // via SMBSelectionMenu
  virtual void SelectingBeginOfList();  // +0x70 @0x50fe50  // via SMBSelectionMenu
  // ---- non-virtual / static (from symtab) ----
  void SMBInternetChapterSel();  // @0x4c36f0
  void LoadText();  // @0x4c37d0
  void ShowLoadingScreen();  // @0x4c3a60
  void CloseDueToConnectionLoss();  // @0x4c3a80
  void LoadChapterData();  // @0x4c3b70
  void ReadDataFromServer();  // @0x4c3dd0
  void LoadSelectedChapterFile();  // @0x4c3e30
  void SetRemoteFolder(RemoteFolder*);  // @0x4c3ea0
  long GetSelectedChapter();  // @0x4c3eb0
};
