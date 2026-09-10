// Recovered class model for `GSMBCutSceneManager` — from RTTI + vtable + symtab. NOT compiled.
// kind=si
#pragma once

class GSMBCutSceneManager : public RenderLayer {
public:
  virtual void ~GSMBCutSceneManager();  // +0x10 @0x49d520
  virtual void ~GSMBCutSceneManager();  // +0x18 @0x49d5c0
  virtual void Render();  // +0x20 @0x49de40
  // ---- non-virtual / static (from symtab) ----
  void GSMBCutSceneManager(int);  // @0x49d5e0
  bool IsRendering();  // @0x49d7e0
  void PlayCutScene(SMBCutScene*);  // @0x49d810
  uint32_t IsCutSceneFinished();  // @0x49d950
  void Update();  // @0x49da20
  void CancelCutScene();  // @0x49da40
  void RenderLoadingOverlay();  // @0x49da60
  void RenderSavingOverlay();  // @0x49dc40
  void ForceShutdown();  // @0x49e140
  void ShowSavingMessage();  // @0x49e190
  void CancelSavingMessage();  // @0x49e1b0
};
