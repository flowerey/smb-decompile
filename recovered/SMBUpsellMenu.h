// Recovered class model for `SMBUpsellMenu` — from RTTI + vtable + symtab. NOT compiled.
// kind=si
#pragma once

class SMBUpsellMenu : public SMBPopupMenu {
public:
  virtual void ~SMBUpsellMenu();  // +0x10 @0x504ca0
  virtual void ~SMBUpsellMenu();  // +0x18 @0x504d00
  virtual void Create(char const*, char const*);  // +0x20 @0x504620  // via SMBPopupMenu
  virtual void Initialize();  // +0x28 @0x502a80
  virtual void Activate();  // +0x30 @0x5037d0
  virtual void DeActivate();  // +0x38 @0x504310
  virtual void DeactivationFinished();  // +0x40 @0x501900
  virtual void Update();  // +0x48 @0x5018c0
  virtual void Render();  // +0x50 @0x5029b0
  // ---- non-virtual / static (from symtab) ----
  void SMBUpsellMenu();  // @0x504a70
  void DestroyUpsellResources();  // @0x504b70
  void SetUpsellAchievementMode(tagAwardType);  // @0x504d60
  void SetUpsellNotExitMode(int);  // @0x504d90
  void SetUpsellControls();  // @0x504da0
  void MessageBoxRender(tagUAState);  // @0x504e20
  void SetUpsellOutroMode(int);  // @0x505050
  void CloseUpsell();  // @0x505060
};
