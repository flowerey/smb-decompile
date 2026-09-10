// Recovered class model for `SMBCharSwitch` — from RTTI + vtable + symtab. NOT compiled.
// kind=si
#pragma once

class SMBCharSwitch : public SMBPopupMenu {
public:
  virtual void ~SMBCharSwitch();  // +0x10 @0x503e70
  virtual void ~SMBCharSwitch();  // +0x18 @0x503fa0
  virtual void Create(char const*, char const*);  // +0x20 @0x504620  // via SMBPopupMenu
  virtual void Initialize();  // +0x28 @0x501a40
  virtual void Activate();  // +0x30 @0x503100
  virtual void DeActivate();  // +0x38 @0x504190
  virtual void DeactivationFinished();  // +0x40 @0x501f00
  virtual void Update();  // +0x48 @0x5018d0
  virtual void Render();  // +0x50 @0x502170
  // ---- non-virtual / static (from symtab) ----
  void SMBCharSwitch();  // @0x505080
  void MoveUp();  // @0x505100
  void MoveDown();  // @0x505170
  void MoveLeft();  // @0x505250
  void MoveRight();  // @0x5052c0
  void SelectionChanged();  // @0x5053a0
  void LoadSelectedCharacter();  // @0x505400
};
