// Recovered class model for `GMeatHUD` — from RTTI + vtable + symtab. NOT compiled.
// kind=si
#pragma once

class GMeatHUD : public RenderLayer {
public:
  virtual void ~GMeatHUD();  // +0x10 @0x47fe20
  virtual void ~GMeatHUD();  // +0x18 @0x4800a0
  virtual void Render();  // +0x20 @0x47e310
  // ---- non-virtual / static (from symtab) ----
  void RestoreMessageBoxFunctions();  // @0x47ef40
  void RenderUnlocks(void (*)(void*, int, int));  // @0x47ef50
  void ResetTimer();  // @0x47efa0
  void FreezeTimer(int);  // @0x47efb0
  void SetInGameHudLevelName();  // @0x47efc0
  void ShowInGameHud();  // @0x47f0d0
  void ShowEndLevelHud();  // @0x47f100
  void HideIntroPlayer();  // @0x47f180
  void ShowLevelTransition();  // @0x47f190
  void ShowIntro();  // @0x47f1d0
  void KillIntro();  // @0x47f1e0
  void Update();  // @0x47f2e0
  void PlayIntroPart2();  // @0x47f980
  void AddUnlockScreen(tagUnlockScreen);  // @0x47fa10
  void ShowReplayHUD();  // @0x47fce0
  void HideInGame();  // @0x47fd80
  void PlayStartIntro();  // @0x47fd90
  void WaitForLogosToFinish();  // @0x47fe10
  void GMeatHUD();  // @0x4800c0
};
