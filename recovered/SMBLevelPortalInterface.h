// Recovered class model for `SMBLevelPortalInterface` — from RTTI + vtable + symtab. NOT compiled.
// kind=si
#pragma once

class SMBLevelPortalInterface : public SMBSelectionMenu {
public:
  virtual /* ? */ void ~SMBLevelPortalInterface();  // +0x10 @0x505ba0
  virtual /* ? */ void ~SMBLevelPortalInterface();  // +0x18 @0x5061b0
  virtual void Create(char const*, char const*);  // +0x20 @0x504620  // via SMBPopupMenu
  virtual void Initialize();  // +0x28 @0x50bc20
  virtual void Activate();  // +0x30 @0x50b9e0
  virtual void DeActivate();  // +0x38 @0x505740
  virtual void DeactivationFinished();  // +0x40 @0x505730
  virtual void Update();  // +0x48 @0x50b0e0
  virtual void Render();  // +0x50 @0x509d60
  virtual void IncrementSelection();  // +0x58 @0x505720
  virtual void DecrementSelection();  // +0x60 @0x505710
  virtual void SelectingEndOfList();  // +0x68 @0x50fe40  // via SMBSelectionMenu
  virtual void SelectingBeginOfList();  // +0x70 @0x50fe50  // via SMBSelectionMenu
  // ---- non-virtual / static (from symtab) ----
  /* ? */ void SMBLevelPortalInterface();  // @0x5084f0
  void DoSearch();  // @0x5099a0
  bool IsInSearchMode();  // @0x509ae0
  void SetSelectedLine(SMBLevelPortalInterface::PortalInterfaceElement*);  // @0x50a600
  uint64_t GetSelectedLine();  // @0x50a610
  void FillList();  // @0x50a980
  uint64_t GetOrderingOrder();  // @0x50b540
  uint64_t GetOrderingParam();  // @0x50b550
  void GetList();  // @0x50b580
  void SetOrdering(tagPortalOrderingParam);  // @0x50b980
  void NextPage();  // @0x50bb30
  void PrevPage();  // @0x50bb40
  uint32_t GetDisplayMode();  // @0x50bb60
  void SetDisplayMode(tagPortalDisplayMode);  // @0x50bb70
};
