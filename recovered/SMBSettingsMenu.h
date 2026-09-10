// Recovered class model for `SMBSettingsMenu` — from RTTI + vtable + symtab. NOT compiled.
// kind=si
#pragma once

class SMBSettingsMenu : public SMBSelectionMenu {
public:
  virtual void ~SMBSettingsMenu();  // +0x10 @0x510550
  virtual void ~SMBSettingsMenu();  // +0x18 @0x510980
  virtual void Create(char const*, char const*);  // +0x20 @0x504620  // via SMBPopupMenu
  virtual void Initialize();  // +0x28 @0x5109a0
  virtual void Activate();  // +0x30 @0x511910
  virtual void DeActivate();  // +0x38 @0x510600
  virtual void DeactivationFinished();  // +0x40 @0x510540
  virtual void Update();  // +0x48 @0x510500
  virtual void Render();  // +0x50 @0x5104a0
  virtual void IncrementSelection();  // +0x58 @0x5118c0
  virtual void DecrementSelection();  // +0x60 @0x511860
  virtual void SelectingEndOfList();  // +0x68 @0x50fe40  // via SMBSelectionMenu
  virtual void SelectingBeginOfList();  // +0x70 @0x50fe50  // via SMBSelectionMenu
  // ---- non-virtual / static (from symtab) ----
  void SMBSettingsMenu();  // @0x511330
  void SetMusicVolumeSelected();  // @0x511350
  void SetSFXVolumeSelected();  // @0x511420
  void SetRestoreDefaultControls();  // @0x5114f0
  void SetChangeStorageDeviceControls();  // @0x511550
  void SetResolutionControls();  // @0x5115b0
  void SetFullScreenControls();  // @0x511680
  void SetSelectionControls();  // @0x511750
  void ReselectDrive();  // @0x5119c0
  void EndDriveReselection();  // @0x511a70
};
