// Recovered class model for `GSuperMeatBoy` — from RTTI + vtable + symtab. NOT compiled.
// kind=vmi
#pragma once

class GSuperMeatBoy : public RenderLayerObject, public Game {
public:
  virtual void ~GSuperMeatBoy();  // +0x10 @0x512120
  virtual void ~GSuperMeatBoy();  // +0x18 @0x512440
  virtual void Render();  // +0x20 @0x5126c0
  virtual void Update();  // +0x28 @0x516690
  virtual void Initialize();  // +0x30 @0x516f60
  virtual void Pause(int, int);  // +0x38 @0x516530
  // ---- non-virtual / static (from symtab) ----
  void GSuperMeatBoy(char const*);  // @0x514290
  uint64_t __getChar(int);  // @0x514c40
  void MarkAllLevelsInvisible();  // @0x514c90
  void MarkAllLevelsVisible();  // @0x514de0
  void SetTilePalette(char const*);  // @0x514f30
  void PlaceBossLayer();  // @0x515090
  void SetCurrentLevel(TileLevel*);  // @0x5150f0
  void ShowCurrentReplay(int);  // @0x5154d0
  void BeatLevel(int);  // @0x515a70
  void ShowChapterMap();  // @0x515dc0
  void ShowWorldMap();  // @0x515dd0
  void GetCameraFocus(FPUVector*);  // @0x515de0
  void ShowGame();  // @0x515e70
  void HideChapterMap();  // @0x516140
  void HideWorldMap();  // @0x516150
  void HideGame();  // @0x516160
  void HideIntroPlayer();  // @0x516290
  void SwitchGameMode(SMB_GameState);  // @0x5162a0
  void ShowPauseMenu();  // @0x5175c0
  void HidePauseMenu(int);  // @0x517640
  void ShowIntroPlayer();  // @0x5176b0
  void ShowTitleMenu();  // @0x5176c0
  void HideTitleMenu();  // @0x5176e0
  void ShowStartMenu();  // @0x5176f0
  void HideStartMenu();  // @0x517710
  void LoadNextLevel();  // @0x517720
  void ActivateWarpZone();  // @0x517730
  void DeferLoadCharactor(tagSuperMeatBoyCharactor);  // @0x517740
  void LoadDeferredCharactor(int);  // @0x517780
  void Freeze(int);  // @0x517890
  void DestroyGameResources();  // @0x5178a0
  void RestoreInstructionsControls();  // @0x517920
  void RemoveInstructionsControls();  // @0x5179b0
};
