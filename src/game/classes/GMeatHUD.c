/* src/game/classes/GMeatHUD.c — 22 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "GMeatHUD.h"

/* ======================================================================
 * GMeatHUD__Render  (Ghidra `Render` @ 0047e310)
 * Signature: uint8_t __thiscall Render(GMeatHUD * self)
 * Class: GMeatHUD
 * Calls: `AutoLockSection__AutoLockSection`, `AutoLockSection__AutoLockSection__005b59d0`, `Camera__SetCameraMatricies`, `Camera__SetOrthoProjection`, `FlashLibraryInstance__GotoAndStop`, `GSMBChapterData__GetCurrentLevelData`, `GSMBInstructions__Render`, `GSMBMenu__IsInReplayMode`, `GSMBMenu__RenderTitleScreenForIntro`, `RegisterAudioPosition` (+7 more)
 * Called by: (none)
 */
/* WARNING: Removing unreachable block (ram,0x0047e778) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GMeatHUD__Render() */

void __thiscall GMeatHUD__Render(GMeatHUD *self)

{
  int iVar1;
  float *pfVar2;
  long lVar3;
  AutoLockSection aAStack_28[12];
  float local_1c;

  AutoLockSection__AutoLockSection(aAStack_28, (CriticalSection *)hudUpdate);
  if (bShowHud == 0)
    goto LAB_0047e3a8;
  /* try { // try from 0047e344 to 0047e352 has its CatchHandler @ 0047e78f */
  TAudio__DisableDirectionalAudio(Audio);
  RegisterAudioPosition((FPUVector *)0xffffffff);
  iVar1 = *(int *)(self + 0x420);
  if (iVar1 == 5) {
    *(uint32_t *)(self + 0x420) = 6;
  LAB_0047e40a:
    GSMBMenu__RenderTitleScreenForIntro(SMBMenu);
  LAB_0047e416:
    if (pIntroInstancePart1 != 0) {
      iVar1 = *(int *)(self + 0x420);
      if (iVar1 != 0xb)
        goto LAB_0047e382;
    LAB_0047e433:
      if ((1 < *(int *)(SuperMeatBoy + 0x294)) || (*(int *)(SuperMeatBoy + 0x3a0) == 1))
        goto LAB_0047e3a8;
      TGraphics__ResetPixelStages(Graphics);
      TGraphics__ResetTexCoordGen(Graphics);
      Camera__SetOrthoProjection(*(Camera **)(SuperMeatBoy + 0x38), _DAT_005c0c9c /* R:240.0f */,
                                 DAT_005c0c98 /* R:-240.0f */, DAT_005c0c94 /* R:-426.5f */,
                                 DAT_005c0c90 /* R:426.5f */, DAT_005c07a4 /* R:-1.0f */,
                                 DAT_005be894 /* R:1.0f */);
      Camera__SetCameraMatricies(*(Camera **)(SuperMeatBoy + 0x38), 2);
      (**(code **)(*pTimerHudCurrLevel + 0x10))();
      FlashTextField__SetText(pHudTimerField, (double)*(float *)(self + 0x418),
                              &DAT_005c07c4 /* R:5.184804318001823e-44f */);
      (**(code **)(*pTimerHudInstance + 0x10))();
      goto LAB_0047e4fc;
    }
    *(uint32_t *)(self + 0x420) = 1;
  } else {
    if (iVar1 == 1)
      goto LAB_0047e416;
    if (iVar1 == 6)
      goto LAB_0047e40a;
    if (iVar1 == 0xb)
      goto LAB_0047e433;
  LAB_0047e382:
    if ((iVar1 == 9) || (iVar1 == 7)) {
      if (1 < *(int *)(SuperMeatBoy + 0x294))
        goto LAB_0047e3a8;
      TGraphics__ResetPixelStages(Graphics);
      TGraphics__ResetTexCoordGen(Graphics);
      Camera__SetOrthoProjection(*(Camera **)(SuperMeatBoy + 0x38), _DAT_005c0c9c /* R:240.0f */,
                                 DAT_005c0c98 /* R:-240.0f */, DAT_005c0c94 /* R:-426.5f */,
                                 DAT_005c0c90 /* R:426.5f */, DAT_005c07a4 /* R:-1.0f */,
                                 DAT_005be894 /* R:1.0f */);
      Camera__SetCameraMatricies(*(Camera **)(SuperMeatBoy + 0x38), 2);
      (**(code **)(*pLevelComplete + 0x10))();
      pfVar2 = (float *)GSMBChapterData__GetCurrentLevelData(SMBChapterData, 0xffffffff, 0xb);
      lVar3 = SMBChapter__GetLevelInfo((SMBChapter *)(SuperMeatBoy + 0x90), 0xffffffff, 0xb, 0);
      if ((SMBCurrLevelData[4] & 1) != 0) {
        (**(code **)(*pBandageGet + 0x10))();
      }
      if (*pfVar2 <= *(float *)(lVar3 + 0x40) && *(float *)(lVar3 + 0x40) != *pfVar2) {
        (**(code **)(*pGradeA + 0x10))();
      }
    LAB_0047e4fc:
      iVar1 = *(int *)(self + 0x420);
    }
    if (iVar1 == 0xd) {
      TGraphics__ResetPixelStages(Graphics);
      TGraphics__ResetTexCoordGen(Graphics);
      SwitchOutMenuButtons(pHudLib, pReplayHud);
      Camera__SetOrthoProjection(*(Camera **)(SuperMeatBoy + 0x38), _DAT_005c0c9c /* R:240.0f */,
                                 DAT_005c0c98 /* R:-240.0f */, DAT_005c0c94 /* R:-426.5f */,
                                 DAT_005c0c90 /* R:426.5f */, DAT_005c07a4 /* R:-1.0f */,
                                 DAT_005be894 /* R:1.0f */);
      Camera__SetCameraMatricies(*(Camera **)(SuperMeatBoy + 0x38), 2);
      FlashTextField__SetText(*(wchar_t **)(self + 0x4a0), (double)*(float *)(self + 0x418),
                              &DAT_005c07c4 /* R:5.184804318001823e-44f */);
      iVar1 = GSMBMenu__IsInReplayMode(SMBMenu);
      if (iVar1 == 0) {
        lVar3 = SMBChapter__GetLevelInfo((SMBChapter *)(SuperMeatBoy + 0x90), 0xffffffff, 0xb, 0);
        FlashTextField__SetText(*(wchar_t **)(self + 0x498), (double)*(float *)(lVar3 + 0x40),
                                &DAT_005c07c4 /* R:5.184804318001823e-44f */);
      }
      local_1c = 0.0;
      iVar1 = SMBLevelPortal__GetCurrentRating(SuperMeatBoyPortal, &local_1c);
      if (iVar1 == 0) {
        FlashLibraryInstance__GotoAndStop(pRatingStars, 7);
      } else {
        lVar3 = (long)local_1c;
        if (local_1c < (float)lVar3) {
          lVar3 = lVar3 + -1;
        }
        FlashLibraryInstance__GotoAndStop(pRatingStars, (int)lVar3 + 1);
      }
      (**(code **)(*(long *)pReplayHud + 0x10))();
    }
  }
  /* try { // try from 0047e3dc to 0047e78c has its CatchHandler @ 0047e78f */
  TAudio__EnableDirectionalAudio(Audio);
  RegisterAudioPosition((FPUVector *)0x0);
  GSMBInstructions__Render(SMBInstructions);
LAB_0047e3a8:
  AutoLockSection__AutoLockSection__005b59d0(aAStack_28);
  return;
}

/* ======================================================================
 * GMeatHUD__RestoreMessageBoxFunctions  (Ghidra `RestoreMessageBoxFunctions` @ 0047ef40)
 * Signature: uint8_t __stdcall RestoreMessageBoxFunctions(void)
 * Class: GMeatHUD
 * Calls: `RegisterMessageBoxRenderUpdate`, `SMBMessageRender`, `SMBMessageUpdate`
 * Called by: `SMBMessageUpsellFinished`, `SMBMoveOnFinished`
 */
/* GMeatHUD__RestoreMessageBoxFunctions() */

void GMeatHUD__RestoreMessageBoxFunctions(void)

{
  RegisterMessageBoxRenderUpdate(SMBMessageRender, SMBMessageUpdate);
  return;
}

/* ======================================================================
 * GMeatHUD__RenderUnlocks  (Ghidra `RenderUnlocks` @ 0047ef50)
 * Signature: uint8_t __thiscall RenderUnlocks(GMeatHUD * self, _func_void_void_ptr_int_int * arg1)
 * Class: GMeatHUD
 * Calls: `TAudio__SetMusicVolume`
 * Called by: `EndLevelTransitionIn`, `GSMBMenu__RenderUnlocks`, `GSMBMenu__ShowChapterMap`
 */
/* GMeatHUD__RenderUnlocks(void (*)(void*, int, int)) */

void __thiscall GMeatHUD__RenderUnlocks(GMeatHUD *self, _func_void_void_ptr_int_int *arg1)

{
  if (*(short *)(self + 0x450) != 0) {
    *(_func_void_void_ptr_int_int **)(self + 0x488) = arg1;
    *(uint32_t *)(self + 0x490) = 1;
    uPreUnlockVolume = GLOBALMUSICVOLUME;
    TAudio__SetMusicVolume(Audio, 0);
    return;
  }
  /* WARNING: Could not recover jumptable at 0x0047ef99. Too many branches */
  /* WARNING: Treating indirect jump as call */
  (*arg1)((void *)0x0, 1, 0);
  return;
}

/* ======================================================================
 * GMeatHUD__ResetTimer  (Ghidra `ResetTimer` @ 0047efa0)
 * Signature: uint8_t __thiscall ResetTimer(GMeatHUD * self)
 * Class: GMeatHUD
 * Calls: (none)
 * Called by: `FlyWrench__Reset`, `GSuperMeatBoy__SetCurrentLevel`, `Machinarium__Reset`, `MeatBoyCharactor__ForceAppear`, `MeatBoyCharactor__Reset`, `Ogmo__Reset`, `Runman__Reset`
 */
/* GMeatHUD__ResetTimer() */

void __thiscall GMeatHUD__ResetTimer(GMeatHUD *self)

{
  *(uint32_t *)(self + 0x418) = 0;
  return;
}

/* ======================================================================
 * GMeatHUD__FreezeTimer  (Ghidra `FreezeTimer` @ 0047efb0)
 * Signature: uint8_t __thiscall FreezeTimer(GMeatHUD * self, int arg1)
 * Class: GMeatHUD
 * Calls: (none)
 * Called by: `FlyWrench__Reset`, `GSuperMeatBoy__BeatLevel`, `Machinarium__Reset`, `MeatBoyCharactor__ForceAppear`, `MeatBoyCharactor__Reset`, `MeatBoyCharactor__Update`, `Ogmo__Reset`, `Runman__Reset`, `SMBPalette__ActivateEnd`, `UploadPromptClose`
 */
/* GMeatHUD__FreezeTimer(int) */

void __thiscall GMeatHUD__FreezeTimer(GMeatHUD *self, int arg1)

{
  *(int *)(self + 0x41c) = arg1;
  return;
}

/* ======================================================================
 * GMeatHUD__SetInGameHudLevelName  (Ghidra `SetInGameHudLevelName` @ 0047efc0)
 * Signature: uint8_t __stdcall SetInGameHudLevelName(void)
 * Class: GMeatHUD
 * Calls: `FlashLibraryInstance__Reset`, `GSMBMenu__ExtractChapterAndLevelFromSelectedLevel`, `GSMBMenu__IsInReplayMode`, `GSMBMenu__IsOnBossLevel`, `GetLocalizedText`, `SMBChapter__GetLevelInfo`, `SMBLevelPortal__GetSingleLoadedLevelName`
 * Called by: (none)
 */
/* GMeatHUD__SetInGameHudLevelName() */

void GMeatHUD__SetInGameHudLevelName(void)

{
  int iVar1;
  char *pcVar2;
  uint64_t uVar3;
  uint local_10;
  uint local_c;

  iVar1 = GSMBMenu__IsInReplayMode(SMBMenu);
  if (iVar1 == 0) {
    iVar1 = GSMBMenu__IsOnBossLevel(SMBMenu);
    if (iVar1 == 0) {
      if (*(int *)(SuperMeatBoy + 0x290) == 9) {
        uVar3 = SMBLevelPortal__GetSingleLoadedLevelName(SuperMeatBoyPortal);
        FlashTextField__SetText((char *)pHudLevelText, uVar3);
      } else {
        pcVar2 = (char *)SMBChapter__GetLevelInfo((SMBChapter *)(SuperMeatBoy + 0x90), 0xffffffff,
                                                  0xb, 0);
        GSMBMenu__ExtractChapterAndLevelFromSelectedLevel(SMBMenu, (int *)&local_c,
                                                          (int *)&local_10, pcVar2);
        if (local_c == 9) {
          FlashTextField__SetText((char *)pHudLevelText, "I-%i: %s", (ulong)local_10,
                                  pcVar2 + 0x20);
        } else {
          FlashTextField__SetText((char *)pHudLevelText, "%i-%i: %s", (ulong)local_c,
                                  (ulong)local_10, pcVar2 + 0x20);
        }
      }
    }
  } else {
    uVar3 = GetLocalizedText(0x32);
    FlashTextField__SetText(pHudLevelText, uVar3);
  }
  FlashLibraryInstance__Reset(pTimerHudCurrLevel);
  return;
}

/* ======================================================================
 * GMeatHUD__ShowInGameHud  (Ghidra `ShowInGameHud` @ 0047f0d0)
 * Signature: uint8_t __thiscall ShowInGameHud(GMeatHUD * self)
 * Class: GMeatHUD
 * Calls: (none)
 * Called by: `EndLevelTransitionIn`, `GSuperMeatBoy__ShowGame`, `SMBLevelTransitionOut`
 */
/* GMeatHUD__ShowInGameHud() */

void __thiscall GMeatHUD__ShowInGameHud(GMeatHUD *self)

{
  long lVar1;

  lVar1 = SuperMeatBoy;
  *(uint32_t *)(self + 0x420) = 0xb;
  if (*(int *)(lVar1 + 0x3a4) != 0) {
    return;
  }
  SetInGameHudLevelName();
  return;
}

/* ======================================================================
 * GMeatHUD__ShowEndLevelHud  (Ghidra `ShowEndLevelHud` @ 0047f100)
 * Signature: uint8_t __thiscall ShowEndLevelHud(GMeatHUD * self)
 * Class: GMeatHUD
 * Calls: `FlashLibraryInstance__Reset`
 * Called by: `GSuperMeatBoy__BeatLevel`
 */
/* GMeatHUD__ShowEndLevelHud() */

void __thiscall GMeatHUD__ShowEndLevelHud(GMeatHUD *self)

{
  *(uint32_t *)(self + 0x420) = 7;
  if (pReplayHudDemo != (FlashLibraryInstance *)0x0) {
    FlashLibraryInstance__Reset(pReplayHudDemo);
  }
  if (pReplayHudInternets != (FlashLibraryInstance *)0x0) {
    FlashLibraryInstance__Reset(pReplayHudInternets);
  }
  if (pReplayHudNormal != (FlashLibraryInstance *)0x0) {
    FlashLibraryInstance__Reset(pReplayHudNormal);
  }
  if (pReplayViewer != (FlashLibraryInstance *)0x0) {
    FlashLibraryInstance__Reset(pReplayViewer);
  }
  FlashLibraryInstance__Reset(pGradeA);
  FlashLibraryInstance__Reset(pBandageGet);
  FlashLibraryInstance__Reset(pLevelComplete);
  return;
}

/* ======================================================================
 * GMeatHUD__HideIntroPlayer  (Ghidra `HideIntroPlayer` @ 0047f180)
 * Signature: uint8_t __stdcall HideIntroPlayer(void)
 * Class: GMeatHUD
 * Calls: (none)
 * Called by: `GSuperMeatBoy__HideIntroPlayer`
 */
/* GMeatHUD__HideIntroPlayer() */

void GMeatHUD__HideIntroPlayer(void)

{
  return;
}

/* ======================================================================
 * GMeatHUD__ShowLevelTransition  (Ghidra `ShowLevelTransition` @ 0047f190)
 * Signature: uint8_t __thiscall ShowLevelTransition(GMeatHUD * self)
 * Class: GMeatHUD
 * Calls: `FlashLibraryInstance__Reset`, `SMBPalette__GetInLevelTransition`
 * Called by: (none)
 */
/* GMeatHUD__ShowLevelTransition() */

void __thiscall GMeatHUD__ShowLevelTransition(GMeatHUD *self)

{
  *(uint32_t *)(self + 0x420) = 9;
  pCurrLevelTrans = (uint64_t *)SMBPalette__GetInLevelTransition(GSuperMeatBoy__pLevelPalette);
  FlashLibraryInstance__Reset((FlashLibraryInstance *)*pCurrLevelTrans);
  FlashLibraryInstance__Reset((FlashLibraryInstance *)pCurrLevelTrans[1]);
  return;
}

/* ======================================================================
 * GMeatHUD__ShowIntro  (Ghidra `ShowIntro` @ 0047f1d0)
 * Signature: uint8_t __thiscall ShowIntro(GMeatHUD * self)
 * Class: GMeatHUD
 * Calls: (none)
 * Called by: `GSuperMeatBoy__ShowIntroPlayer`, `GSuperMeatBoy__SwitchGameMode`
 */
/* GMeatHUD__ShowIntro() */

void __thiscall GMeatHUD__ShowIntro(GMeatHUD *self)

{
  *(uint32_t *)(self + 0x420) = 5;
  RenderLayers__AddLayer((RenderLayer *)self);
  return;
}

/* ======================================================================
 * GMeatHUD__KillIntro  (Ghidra `KillIntro` @ 0047f1e0)
 * Signature: uint8_t __stdcall KillIntro(void)
 * Class: GMeatHUD
 * Calls: `FlashAnimationLibrary__FlashAnimationLibrary`, `operator_delete`
 * Called by: `SMBIntroFinished`
 */
/* GMeatHUD__KillIntro() */

void GMeatHUD__KillIntro(void)

{
  FlashAnimationLibrary *pFVar1;

  if (pIntroInstancePart2 != (long *)0x0) {
    (**(code **)(*pIntroInstancePart2 + 8))();
  }
  pFVar1 = pIntroLibPart2;
  pIntroInstancePart2 = (long *)0x0;
  if (pIntroLibPart2 != (FlashAnimationLibrary *)0x0) {
    FlashAnimationLibrary__FlashAnimationLibrary(pIntroLibPart2);
    operator_delete(pFVar1);
  }
  pIntroLibPart2 = (FlashAnimationLibrary *)0x0;
  if (pIntroInstancePart1 != (long *)0x0) {
    (**(code **)(*pIntroInstancePart1 + 8))();
  }
  pFVar1 = pIntroLibPart1;
  pIntroInstancePart1 = (long *)0x0;
  if (pIntroLibPart1 != (FlashAnimationLibrary *)0x0) {
    FlashAnimationLibrary__FlashAnimationLibrary(pIntroLibPart1);
    operator_delete(pFVar1);
  }
  pIntroLibPart1 = (FlashAnimationLibrary *)0x0;
  if (pSaveGameScreen != (long *)0x0) {
    (**(code **)(*pSaveGameScreen + 8))();
  }
  pFVar1 = pSaveGameScreenLib;
  pSaveGameScreen = (long *)0x0;
  if (pSaveGameScreenLib != (FlashAnimationLibrary *)0x0) {
    FlashAnimationLibrary__FlashAnimationLibrary(pSaveGameScreenLib);
    operator_delete(pFVar1);
  }
  pSaveGameScreenLib = (FlashAnimationLibrary *)0x0;
  return;
}

/* ======================================================================
 * GMeatHUD__Update  (Ghidra `Update` @ 0047f2e0)
 * Signature: uint8_t __thiscall Update(GMeatHUD * self)
 * Class: GMeatHUD
 * Calls: `AutoLockSection__AutoLockSection`, `AutoLockSection__AutoLockSection__005b59d0`, `FlashAnimationLibrary__FlashAnimationLibrary`, `FlashAnimationLibrary__FlashAnimationLibrary__00576680`, `FlashAnimationLibrary__GetMovieClip__005731d0`, `FlashAnimationLibrary__GetTextField`, `FlashLibraryInstance__IsPlaying`, `FormatResourcePath`, `GSMBCutSceneManager__IsRendering`, `GSMBCutSceneManager__PlayCutScene` (+8 more)
 * Called by: `GSuperMeatBoy__Update__00516690`
 */
/* WARNING: Removing unreachable block (ram,0x0047f93f) */
/* GMeatHUD__Update() */

void __thiscall GMeatHUD__Update(GMeatHUD *self)

{
  int *piVar1;
  uint32_t *puVar2;
  ushort *puVar3;
  short sVar4;
  int iVar5;
  char *pcVar6;
  FlashAnimationLibrary *pFVar7;
  uint64_t uVar8;
  wchar_t *pwVar9;
  uint64_t uVar10;
  long lVar11;
  ushort uVar12;
  ushort uVar13;
  ushort uVar14;
  uint32_t local_88;
  uint32_t local_84;
  uint32_t local_80;
  long local_78;
  code *local_70;
  uint64_t local_68;
  code *local_60;
  uint64_t local_58;
  uint32_t local_50;
  uint32_t local_4c;
  uint32_t local_48;
  AutoLockSection local_38[16];
  uint8_t *local_28[2];

  AutoLockSection__AutoLockSection(local_38, (CriticalSection *)hudUpdate);
  if (*(int *)(self + 0x490) != 1)
    goto LAB_0047f315;
  /* try { // try from 0047f3d5 to 0047f412 has its CatchHandler @ 0047f974 */
  if ((*(long *)(self + 0x480) == 0) ||
      (iVar5 = GSMBCutSceneManager__IsRendering(SMBCutSceneManager), iVar5 != 0)) {
  LAB_0047f6a0:
    if (*(short *)(self + 0x450) == 0)
      goto LAB_0047f315;
  } else {
    if (*(long **)(self + 0x480) != (long *)0x0) {
      (**(code **)(**(long **)(self + 0x480) + 8))();
    }
    pFVar7 = *(FlashAnimationLibrary **)(self + 0x478);
    *(uint64_t *)(self + 0x480) = 0;
    if (pFVar7 != (FlashAnimationLibrary *)0x0) {
      FlashAnimationLibrary__FlashAnimationLibrary(pFVar7);
      operator_delete(pFVar7);
    }
    *(uint64_t *)(self + 0x478) = 0;
    if (*(short *)(self + 0x450) == 0) {
      /* try { // try from 0047f685 to 0047f8ec has its CatchHandler @ 0047f974 */
      TAudio__SetMusicVolume(Audio, uPreUnlockVolume);
      *(uint32_t *)(self + 0x490) = 0;
      (**(code **)(self + 0x488))(0, 0, 0);
      goto LAB_0047f6a0;
    }
  }
  if (**(int **)(self + 0x460) == 0x12) {
    uVar8 = FlashAnimationLibrary__GetMovieClip__005731d0(pTimerLib, "meatninja");
    pFVar7 = pTimerLib;
    *(uint64_t *)(self + 0x480) = uVar8;
    pwVar9 = (wchar_t *)FlashAnimationLibrary__GetTextField(pFVar7, "unlock");
    if (pwVar9 != (wchar_t *)0x0) {
      iVar5 = GetRandomINT(0, 0x7d);
      if (iVar5 < 0x19) {
        uVar8 = GetLocalizedText(0x127);
      } else if (iVar5 < 0x32) {
        uVar8 = GetLocalizedText(0x128);
      } else if (iVar5 < 0x4b) {
        uVar8 = GetLocalizedText(0x129);
      } else if (iVar5 < 100) {
        uVar8 = GetLocalizedText(0x12a);
      } else {
        /* try { // try from 0047f926 to 0047f939 has its CatchHandler @ 0047f974 */
        uVar8 = GetLocalizedText(299);
      }
      FlashTextField__SetText(pwVar9, uVar8);
    }
    local_78 = *(long *)(self + 0x480);
    local_70 = (code *)0x0;
    local_68 = 0;
    local_58 = 0;
    local_50 = 0;
    local_4c = 1;
    local_84 = 0x43f00000;
    local_88 = 0x44200000;
    local_80 = 1;
    local_60 = SMBUnlockSkip;
    local_48 = 0;
    if (*(short *)(self + 0x450) != 1) {
      local_70 = SMBUnlockFinished;
    }
    GSMBCutSceneManager__PlayCutScene(SMBCutSceneManager, (SMBCutScene *)&local_88);
    uVar12 = *(ushort *)(self + 0x450);
    if (1 < uVar12) {
      lVar11 = 0;
      iVar5 = 0;
      do {
        iVar5 = iVar5 + 1;
        puVar2 = (uint32_t *)(*(long *)(self + 0x460) + lVar11);
        lVar11 = lVar11 + 4;
        *puVar2 = *(uint32_t *)(*(long *)(self + 0x460) + lVar11);
        uVar12 = *(ushort *)(self + 0x450);
      } while (iVar5 < (int)(uVar12 - 1));
    }
    if ((*(int *)(self + 0x458) == 1) && (uVar14 = *(ushort *)(self + 0x452), uVar14 != 0)) {
      uVar12 = 0;
      do {
        puVar3 = (ushort *)(*(long *)(self + 0x468) + (ulong)uVar12 * 2);
        if (*puVar3 == 0) {
          *puVar3 = 0xffff;
          uVar14 = *(ushort *)(self + 0x452);
        } else {
          uVar13 = *puVar3 - 1;
          if (uVar13 < 0xfffe) {
            *puVar3 = uVar13;
            uVar14 = *(ushort *)(self + 0x452);
          }
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < uVar14);
      uVar12 = *(ushort *)(self + 0x450);
    }
    sVar4 = 0;
    if (uVar12 != 0) {
      sVar4 = uVar12 - 1;
    }
    *(short *)(self + 0x450) = sVar4;
  } else if (*(long *)(self + 0x478) == 0) {
    local_28[0] = &DAT_008184c8 /* R:0.00016803004837129265f */;
    /* try { // try from 0047f46e to 0047f47f has its CatchHandler @ 0047f979 */
    pcVar6 = (char *)FormatResourcePath(
        *(uint64_t *)(pUnlockProps + (long)**(int **)(self + 0x460) * 0x10), local_28);
    pFVar7 = operator_new(0xb0);
    /* try { // try from 0047f489 to 0047f48d has its CatchHandler @ 0047f94d */
    FlashAnimationLibrary__FlashAnimationLibrary__00576680(pFVar7, pcVar6);
    *(FlashAnimationLibrary **)(self + 0x478) = pFVar7;
    /* try { // try from 0047f49d to 0047f5d5 has its CatchHandler @ 0047f979 */
    uVar8 = FlashAnimationLibrary__GetMovieClip__005731d0(pFVar7, "cvunlock");
    *(uint64_t *)(self + 0x480) = uVar8;
    pwVar9 = (wchar_t *)FlashAnimationLibrary__GetTextField(
        *(FlashAnimationLibrary **)(self + 0x478), "unlock");
    if (pwVar9 != (wchar_t *)0x0) {
      uVar8 = GetLocalizedText(*(uint *)(pUnlockProps + (long)**(int **)(self + 0x460) * 0x10 + 8));
      uVar10 = GetLocalizedText(0x5d);
      FlashTextField__SetText(pwVar9, uVar10, uVar8);
    }
    pwVar9 = (wchar_t *)FlashAnimationLibrary__GetTextField(
        *(FlashAnimationLibrary **)(self + 0x478), "info");
    if ((pwVar9 != (wchar_t *)0x0) &&
        (*(uint *)(pUnlockProps + (long)**(int **)(self + 0x460) * 0x10 + 0xc) != 0xffffffff)) {
      uVar8 =
          GetLocalizedText(*(uint *)(pUnlockProps + (long)**(int **)(self + 0x460) * 0x10 + 0xc));
      uVar10 = GetLocalizedText(0x5e);
      FlashTextField__SetText(pwVar9, uVar10, uVar8);
    }
    if (*(long *)(self + 0x480) == 0) {
      pFVar7 = *(FlashAnimationLibrary **)(self + 0x478);
      if (pFVar7 != (FlashAnimationLibrary *)0x0) {
        /* try { // try from 0047f904 to 0047f908 has its CatchHandler @ 0047f979 */
        FlashAnimationLibrary__FlashAnimationLibrary(pFVar7);
        operator_delete(pFVar7);
      }
      *(uint64_t *)(self + 0x478) = 0;
    } else {
      local_70 = (code *)0x0;
      local_68 = 0;
      local_58 = 0;
      local_50 = 0;
      local_4c = 1;
      local_84 = 0x43f00000;
      local_88 = 0x44200000;
      local_80 = 1;
      local_60 = SMBUnlockSkip;
      local_48 = 0;
      if (*(short *)(self + 0x450) != 1) {
        local_70 = SMBUnlockFinished;
      }
      local_78 = *(long *)(self + 0x480);
      GSMBCutSceneManager__PlayCutScene(SMBCutSceneManager, (SMBCutScene *)&local_88);
    }
    uVar12 = *(ushort *)(self + 0x450);
    if (1 < uVar12) {
      lVar11 = 0;
      iVar5 = 0;
      do {
        iVar5 = iVar5 + 1;
        puVar2 = (uint32_t *)(*(long *)(self + 0x460) + lVar11);
        lVar11 = lVar11 + 4;
        *puVar2 = *(uint32_t *)(*(long *)(self + 0x460) + lVar11);
        uVar12 = *(ushort *)(self + 0x450);
      } while (iVar5 < (int)(uVar12 - 1));
    }
    if ((*(int *)(self + 0x458) == 1) && (uVar14 = *(ushort *)(self + 0x452), uVar14 != 0)) {
      uVar12 = 0;
      do {
        puVar3 = (ushort *)(*(long *)(self + 0x468) + (ulong)uVar12 * 2);
        if (*puVar3 == 0) {
          *puVar3 = 0xffff;
          uVar14 = *(ushort *)(self + 0x452);
        } else {
          uVar13 = *puVar3 - 1;
          if (uVar13 < 0xfffe) {
            *puVar3 = uVar13;
            uVar14 = *(ushort *)(self + 0x452);
          }
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < uVar14);
      uVar12 = *(ushort *)(self + 0x450);
    }
    sVar4 = 0;
    if (uVar12 != 0) {
      sVar4 = uVar12 - 1;
    }
    *(short *)(self + 0x450) = sVar4;
    if ((allocator *)(local_28[0] + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage) {
      LOCK();
      piVar1 = (int *)(local_28[0] + -8);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 < 1) {
        std__string_Rep_M_destroy((allocator *)(local_28[0] + -0x18));
      }
    }
  }
LAB_0047f315:
  if (*(int *)(self + 0x41c) == 0) {
    *(float *)(self + 0x418) = *(float *)(self + 0x418) + *(float *)(Engine + 0x38);
  }
  /* try { // try from 0047f352 to 0047f381 has its CatchHandler @ 0047f974 */
  if ((((*(int *)(self + 0x420) == 1) || (*(int *)(self + 0x420) == 6)) &&
       (pIntroInstancePart1 != (FlashLibraryInstance *)0x0)) &&
      ((iVar5 = FlashLibraryInstance__IsPlaying(pIntroInstancePart1),
        iVar5 == 0 && (*(int *)(self + 0x420) != 1)))) {
    KillIntro();
    *(uint32_t *)(self + 0x420) = 1;
  }
  GSMBInstructions__Update(SMBInstructions);
  AutoLockSection__AutoLockSection__005b59d0(local_38);
  return;
}

/* ======================================================================
 * GMeatHUD__PlayIntroPart2  (Ghidra `PlayIntroPart2` @ 0047f980)
 * Signature: uint8_t __stdcall PlayIntroPart2(void)
 * Class: GMeatHUD
 * Calls: `GSMBCutSceneManager__PlayCutScene`, `SMBIntroFinished`, `SkipSMBIntro`
 * Called by: (none)
 */
/* GMeatHUD__PlayIntroPart2() */

void GMeatHUD__PlayIntroPart2(void)

{
  uint32_t local_58;
  uint32_t local_54;
  uint32_t local_50;
  uint64_t local_48;
  code *local_40;
  uint64_t local_38;
  code *local_30;
  uint64_t local_28;
  uint32_t local_20;
  uint32_t local_1c;
  uint32_t local_18;

  if (*(int *)(SuperMeatBoy + 0x3a4) == 0) {
    local_38 = 0;
    local_28 = 0;
    local_20 = 0;
    local_1c = 1;
    local_18 = 1;
    local_58 = 0x44200000;
    local_54 = 0x43f00000;
    local_50 = 1;
    local_48 = pIntroInstancePart2;
    local_40 = SMBIntroFinished;
    local_30 = SkipSMBIntro;
    GSMBCutSceneManager__PlayCutScene(SMBCutSceneManager, (SMBCutScene *)&local_58);
  }
  return;
}

/* ======================================================================
 * GMeatHUD__AddUnlockScreen  (Ghidra `AddUnlockScreen` @ 0047fa10)
 * Signature: uint8_t __thiscall AddUnlockScreen(GMeatHUD * self, tagUnlockScreen arg1)
 * Class: GMeatHUD
 * Calls: `free`, `malloc`, `memcpy`
 * Called by: `GSMBChapterData__AwardBandageGet`, `GSMBChapterData__ChapterAchievementCheck`, `GSMBChapterData__SaveLevelData`, `GSMBChapterData__ShowMeatNinja`, `SMBChapter__PlayWarpOutro`
 */
/* GMeatHUD__AddUnlockScreen(tagUnlockScreen) */

void __thiscall GMeatHUD__AddUnlockScreen(GMeatHUD *self, uint32_t arg2)

{
  void *pvVar1;
  ushort uVar2;
  void *pvVar3;
  ushort *puVar4;
  void *pvVar5;
  ulong uVar6;
  short sVar7;
  ushort uVar8;
  ulong uVar9;
  uint64_t *puVar10;

  if (*(int *)(self + 0x470) == -0x5eef3582) {
    uVar2 = *(ushort *)(self + 0x450);
    if (*(ushort *)(self + 0x452) <= uVar2) {
      uVar2 = *(ushort *)(self + 0x452) + *(short *)(self + 0x45c);
      uVar9 = (ulong)(byte)self[0x454];
      pvVar3 = (void *)0x0;
      pvVar1 = *(void **)(self + 0x460);
      *(ushort *)(self + 0x452) = uVar2;
      uVar6 = (ulong)uVar2 * 4;
      pvVar5 = malloc(uVar9 + 0x10 + uVar6);
      if (pvVar5 != (void *)0x0) {
        pvVar3 = (void *)((long)pvVar5 + 0x10U + (uVar9 - ((long)pvVar5 + 0x10U) % uVar9) % uVar9);
        *(ulong *)((long)pvVar3 + -0x10) = uVar6;
        *(void **)((long)pvVar3 + -8) = pvVar5;
        if (pvVar1 != (void *)0x0) {
          uVar9 = *(ulong *)((long)pvVar1 + -0x10);
          if (uVar6 < uVar9 || uVar6 - uVar9 == 0) {
            uVar9 = uVar6;
          }
          memcpy(pvVar3, pvVar1, uVar9);
          free(*(void **)((long)pvVar1 + -8));
        }
      }
      pvVar1 = *(void **)(self + 0x468);
      *(void **)(self + 0x460) = pvVar3;
      if (pvVar1 != (void *)0x0) {
        uVar8 = *(ushort *)(self + 0x452);
        uVar9 = (ulong)(byte)self[0x454];
        pvVar3 = (void *)0x0;
        uVar6 = (ulong)uVar8 * 2;
        pvVar5 = malloc(uVar9 + 0x10 + uVar6);
        if (pvVar5 != (void *)0x0) {
          pvVar3 =
              (void *)((long)pvVar5 + 0x10U + (uVar9 - ((long)pvVar5 + 0x10U) % uVar9) % uVar9);
          *(void **)((long)pvVar3 + -8) = pvVar5;
          *(ulong *)((long)pvVar3 + -0x10) = uVar6;
          uVar9 = *(ulong *)((long)pvVar1 + -0x10);
          if (uVar6 <= *(ulong *)((long)pvVar1 + -0x10)) {
            uVar9 = uVar6;
          }
          memcpy(pvVar3, pvVar1, uVar9);
          free(*(void **)((long)pvVar1 + -8));
          uVar8 = *(ushort *)(self + 0x452);
        }
        uVar2 = *(ushort *)(self + 0x450);
        *(void **)(self + 0x468) = pvVar3;
        if (uVar8 <= uVar2)
          goto LAB_0047fad7;
        while (true) {
          uVar6 = (ulong)uVar2;
          uVar2 = uVar2 + 1;
          *(uint16_t *)((long)pvVar3 + uVar6 * 2) = 0xffff;
          if (uVar8 <= uVar2)
            break;
          pvVar3 = *(void **)(self + 0x468);
        }
      }
      uVar2 = *(ushort *)(self + 0x450);
    }
  } else {
    uVar6 = (ulong)(byte)self[0x454];
    *(uint32_t *)(self + 0x458) = 0;
    pvVar3 = malloc(uVar6 + 0x24);
    puVar10 = (uint64_t *)0x0;
    if (pvVar3 != (void *)0x0) {
      puVar10 =
          (uint64_t *)((long)pvVar3 + 0x10U + (uVar6 - ((long)pvVar3 + 0x10U) % uVar6) % uVar6);
      puVar10[-2] = 0x14;
      puVar10[-1] = pvVar3;
    }
    *(uint64_t **)(self + 0x460) = puVar10;
    *puVar10 = 0;
    puVar10[1] = 0;
    *(uint32_t *)(puVar10 + 2) = 0;
    uVar2 = 0;
    *(uint16_t *)(self + 0x450) = 0;
    *(uint16_t *)(self + 0x452) = 5;
    *(uint32_t *)(self + 0x470) = 0xa110ca7e;
    *(uint16_t *)(self + 0x45c) = 5;
  }
LAB_0047fad7:
  if ((*(int *)(self + 0x458) == 1) && (*(short *)(self + 0x452) != 0)) {
    puVar4 = *(ushort **)(self + 0x468);
    sVar7 = 0;
    uVar8 = *puVar4;
    while (uVar8 != 0xffff) {
      puVar4 = puVar4 + 1;
      sVar7 = sVar7 + 1;
      if (sVar7 == *(short *)(self + 0x452))
        goto LAB_0047fae0;
      uVar8 = *puVar4;
    }
    *puVar4 = uVar2;
    uVar2 = *(ushort *)(self + 0x450);
  }
LAB_0047fae0:
  *(uint32_t *)(*(long *)(self + 0x460) + (ulong)uVar2 * 4) = arg2;
  *(short *)(self + 0x450) = *(short *)(self + 0x450) + 1;
  return;
}

/* ======================================================================
 * GMeatHUD__ShowReplayHUD  (Ghidra `ShowReplayHUD` @ 0047fce0)
 * Signature: uint8_t __thiscall ShowReplayHUD(GMeatHUD * self)
 * Class: GMeatHUD
 * Calls: `FlashLibraryInstance__Reset`, `GSMBMenu__IsInReplayMode`, `System_IsTrialMode`
 * Called by: `GSuperMeatBoy__ShowCurrentReplay`, `ShowCurrentReplay`
 */
/* GMeatHUD__ShowReplayHUD() */

void __thiscall GMeatHUD__ShowReplayHUD(GMeatHUD *self)

{
  int iVar1;

  *(uint32_t *)(self + 0x420) = 0xd;
  iVar1 = System_IsTrialMode();
  if (iVar1 == 1) {
    pReplayHud = pReplayHudDemo;
    FlashLibraryInstance__Reset(pReplayHudDemo);
    return;
  }
  if (*(int *)(SuperMeatBoy + 0x290) == 9) {
    pReplayHud = pReplayHudInternets;
    FlashLibraryInstance__Reset(pReplayHudInternets);
    return;
  }
  iVar1 = GSMBMenu__IsInReplayMode(SMBMenu);
  pReplayHud = pReplayViewer;
  if (iVar1 != 1) {
    pReplayHud = pReplayHudNormal;
  }
  FlashLibraryInstance__Reset(pReplayHud);
  return;
}

/* ======================================================================
 * GMeatHUD__HideInGame  (Ghidra `HideInGame` @ 0047fd80)
 * Signature: uint8_t __thiscall HideInGame(GMeatHUD * self)
 * Class: GMeatHUD
 * Calls: (none)
 * Called by: `BackToTitleFromReplay`, `TransitionToNextLevel`
 */
/* GMeatHUD__HideInGame() */

void __thiscall GMeatHUD__HideInGame(GMeatHUD *self)

{
  *(uint32_t *)(self + 0x420) = 0xc;
  return;
}

/* ======================================================================
 * GMeatHUD__PlayStartIntro  (Ghidra `PlayStartIntro` @ 0047fd90)
 * Signature: uint8_t __stdcall PlayStartIntro(void)
 * Class: GMeatHUD
 * Calls: `GSMBCutSceneManager__PlayCutScene`, `SMBIntro1Finished`, `SkipSMBIntro`
 * Called by: (none)
 */
/* GMeatHUD__PlayStartIntro() */

void GMeatHUD__PlayStartIntro(void)

{
  uint32_t local_58;
  uint32_t local_54;
  uint32_t local_50;
  uint64_t local_48;
  code *local_40;
  uint64_t local_38;
  code *local_30;
  uint64_t local_28;
  uint32_t local_20;
  uint32_t local_1c;
  uint32_t local_18;

  local_38 = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 1;
  local_18 = 1;
  local_58 = 0x44200000;
  local_54 = 0x43f00000;
  local_50 = 1;
  local_48 = pIntroInstancePart1;
  local_40 = SMBIntro1Finished;
  local_30 = SkipSMBIntro;
  GSMBCutSceneManager__PlayCutScene(SMBCutSceneManager, (SMBCutScene *)&local_58);
  return;
}

/* ======================================================================
 * GMeatHUD__WaitForLogosToFinish  (Ghidra `WaitForLogosToFinish` @ 0047fe10)
 * Signature: uint8_t __stdcall WaitForLogosToFinish(void)
 * Class: GMeatHUD
 * Calls: (none)
 * Called by: `GSuperMeatBoy__Initialize__00516f60`
 */
/* GMeatHUD__WaitForLogosToFinish() */

void GMeatHUD__WaitForLogosToFinish(void)

{
  return;
}

/* ======================================================================
 * GMeatHUD__GMeatHUD  (Ghidra `~GMeatHUD` @ 0047fe20)
 * Signature: uint8_t __thiscall ~GMeatHUD(GMeatHUD * self)
 * Class: GMeatHUD
 * Calls: `CreateHudResources`, `CriticalSection__CriticalSection__005b71d0`, `DestroyHudResources`, `FlashAnimationLibrary__FlashAnimationLibrary`, `GMeatHUD__GMeatHUD__004800a0`, `RenderLayer__RenderLayer__005988e0`, `TResourceCreator__RemoveResourceCreationFunction`, `TResourceCreator__RemoveResourceDestroyFunction`, `free`, `operator_delete`
 * Called by: (none)
 */
/* GMeatHUD__GMeatHUD__004800a0() */

void __thiscall GMeatHUD__GMeatHUD__004800a0(GMeatHUD *self)

{
  FlashAnimationLibrary *pFVar1;

  *(uint8_t ***)self = &PTR__GMeatHUD_005c0b30;
  /* try { // try from 0047fe30 to 0047ffc6 has its CatchHandler @ 00480072 */
  KillIntro();
  if (pTimerHudCurrLevel != (long *)0x0) {
    (**(code **)(*pTimerHudCurrLevel + 8))();
  }
  if (pTimerHudInstance != (long *)0x0) {
    (**(code **)(*pTimerHudInstance + 8))();
  }
  pFVar1 = pTimerLib;
  if (pTimerLib != (FlashAnimationLibrary *)0x0) {
    FlashAnimationLibrary__FlashAnimationLibrary(pTimerLib);
    operator_delete(pFVar1);
  }
  if (pBandageGet != (long *)0x0) {
    (**(code **)(*pBandageGet + 8))();
  }
  if (pGradeA != (long *)0x0) {
    (**(code **)(*pGradeA + 8))();
  }
  if (pLevelComplete != (long *)0x0) {
    (**(code **)(*pLevelComplete + 8))();
  }
  if (pReplayHudNormal != (long *)0x0) {
    (**(code **)(*pReplayHudNormal + 8))();
  }
  if (pReplayHudInternets != (long *)0x0) {
    (**(code **)(*pReplayHudInternets + 8))();
  }
  if (pReplayHudDemo != (long *)0x0) {
    (**(code **)(*pReplayHudDemo + 8))();
  }
  if (pReplayViewer != (long *)0x0) {
    (**(code **)(*pReplayViewer + 8))();
  }
  pFVar1 = pHudLib;
  if (pHudLib != (FlashAnimationLibrary *)0x0) {
    FlashAnimationLibrary__FlashAnimationLibrary(pHudLib);
    operator_delete(pFVar1);
  }
  if (pMessageBoxPopup != (long *)0x0) {
    (**(code **)(*pMessageBoxPopup + 8))();
  }
  if (pMessageBoxTransIn != (long *)0x0) {
    (**(code **)(*pMessageBoxTransIn + 8))();
  }
  if (pMessageBoxTransOut != (long *)0x0) {
    (**(code **)(*pMessageBoxTransOut + 8))();
  }
  pFVar1 = pMessageBoxLib;
  if (pMessageBoxLib != (FlashAnimationLibrary *)0x0) {
    FlashAnimationLibrary__FlashAnimationLibrary(pMessageBoxLib);
    operator_delete(pFVar1);
  }
  if (*(long **)(self + 0x480) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x480) + 8))();
  }
  pFVar1 = *(FlashAnimationLibrary **)(self + 0x478);
  *(uint64_t *)(self + 0x480) = 0;
  if (pFVar1 != (FlashAnimationLibrary *)0x0) {
    FlashAnimationLibrary__FlashAnimationLibrary(pFVar1);
    operator_delete(pFVar1);
  }
  *(uint64_t *)(self + 0x478) = 0;
  TResourceCreator__RemoveResourceCreationFunction((TResourceCreator *)ResourceCreator,
                                                   CreateHudResources, (void *)0x0);
  TResourceCreator__RemoveResourceDestroyFunction((TResourceCreator *)ResourceCreator,
                                                  DestroyHudResources, (void *)0x0);
  SMBHUD = 0;
  if (*(int *)(self + 0x470) == -0x5eef3582) {
    *(uint32_t *)(self + 0x470) = 0;
    free(*(void **)(*(long *)(self + 0x460) + -8));
    if (*(int *)(self + 0x458) == 1) {
      free(*(void **)(*(long *)(self + 0x468) + -8));
    }
    *(uint32_t *)(self + 0x470) = 0;
    *(uint16_t *)(self + 0x452) = 0;
    *(uint16_t *)(self + 0x450) = 0;
    *(uint64_t *)(self + 0x460) = 0;
    *(uint64_t *)(self + 0x468) = 0;
  }
  /* try { // try from 0047ffe5 to 0047ffe9 has its CatchHandler @ 00480091 */
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)(self + 0x428));
  RenderLayer__RenderLayer__005988e0((RenderLayer *)self);
  return;
}

/* ======================================================================
 * GMeatHUD__GMeatHUD__004800a0  (Ghidra `~GMeatHUD` @ 004800a0)
 * Signature: uint8_t __thiscall ~GMeatHUD(GMeatHUD * self)
 * Class: GMeatHUD
 * Calls: `operator_delete`
 * Called by: `GMeatHUD__GMeatHUD`
 */
/* GMeatHUD__GMeatHUD__004800a0() */

void __thiscall GMeatHUD__GMeatHUD__004800a0(GMeatHUD *self)

{
  GMeatHUD__dtor(self);
  operator_delete(self);
  return;
}

/* ======================================================================
 * GMeatHUD__GMeatHUD__004800c0  (Ghidra `GMeatHUD` @ 004800c0)
 * Signature: uint8_t __thiscall GMeatHUD(GMeatHUD * self)
 * Class: GMeatHUD
 * Calls: `CreateHudResources`, `CriticalSection__CriticalSection`, `DestroyHudResources`, `FlashAnimationLibrary__FlashAnimationLibrary__00576680`, `FlashAnimationLibrary__GetClipIndex`, `FlashAnimationLibrary__GetLibraryEntry`, `FlashAnimationLibrary__GetMovieClip__005731d0`, `FlashAnimationLibrary__GetTextField`, `FlashMovieClip__FindInstance`, `FormatResourcePath` (+12 more)
 * Called by: `GSuperMeatBoy__Initialize__00516f60`
 */
/* WARNING: Removing unreachable block (ram,0x00480dd0) */
/* WARNING: Removing unreachable block (ram,0x00480d59) */
/* WARNING: Removing unreachable block (ram,0x00480dc2) */
/* WARNING: Removing unreachable block (ram,0x00480db4) */
/* GMeatHUD__GMeatHUD__004800c0() */

void __thiscall GMeatHUD__GMeatHUD__004800c0(GMeatHUD *self)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  FlashAnimationLibrary *pFVar4;
  wchar_t *pwVar5;
  uint64_t uVar6;
  long *plVar7;
  FlashMovieClip *pFVar8;
  long lVar9;
  uint32_t local_c8;
  uint32_t local_c4;
  uint32_t local_c0;
  uint64_t local_b8;
  code *local_b0;
  uint64_t local_a8;
  uint64_t local_a0;
  uint64_t local_98;
  uint32_t local_90;
  uint32_t local_8c;
  uint32_t local_88;
  uint8_t *local_78[2];
  uint8_t *local_68[2];
  uint8_t *local_58[2];
  uint8_t *local_48[3];

  RenderLayer__RenderLayer__00597d50((RenderLayer *)self);
  *(uint8_t ***)self = &PTR__GMeatHUD_005c0b30;
  *(uint32_t *)(self + 0x418) = 0;
  *(uint32_t *)(self + 0x41c) = 1;
  *(uint32_t *)(self + 0x420) = 5;
  /* try { // try from 0048010e to 00480112 has its CatchHandler @ 00480d3f */
  CriticalSection__CriticalSection((CriticalSection *)(self + 0x428));
  *(uint16_t *)(self + 0x452) = 0;
  *(uint16_t *)(self + 0x450) = 0;
  *(uint16_t *)(self + 0x45c) = 1;
  *(uint64_t *)(self + 0x460) = 0;
  *(uint64_t *)(self + 0x468) = 0;
  *(uint32_t *)(self + 0x470) = 0;
  self[0x454] = (GMeatHUD)0x4;
  *(uint32_t *)(self + 0x458) = 0;
  *(uint64_t *)(self + 0x478) = 0;
  *(uint64_t *)(self + 0x480) = 0;
  *(uint64_t *)(self + 0x488) = 0;
  *(uint32_t *)(self + 0x490) = 0;
  local_78[0] = &DAT_008184c8 /* R:0.00016803004837129265f */;
  local_68[0] = &DAT_008184c8 /* R:0.00016803004837129265f */;
  local_58[0] = &DAT_008184c8 /* R:0.00016803004837129265f */;
  local_48[0] = &DAT_008184c8 /* R:0.00016803004837129265f */;
  /* try { // try from 004801cb to 004801e9 has its CatchHandler @ 00480d4c */
  pcVar3 = (char *)FormatResourcePath("/Intro/save.am", local_78);
  pFVar4 = operator_new(0xb0);
  /* try { // try from 004801f3 to 004801f7 has its CatchHandler @ 00480ce0 */
  FlashAnimationLibrary__FlashAnimationLibrary__00576680(pFVar4, pcVar3);
  pSaveGameScreenLib = pFVar4;
  /* try { // try from 00480211 to 0048024b has its CatchHandler @ 00480d4c */
  pSaveGameScreen = FlashAnimationLibrary__GetMovieClip__005731d0(pFVar4, 0);
  pcVar3 = (char *)FormatResourcePath("/Intro/intro1.am", local_68);
  pFVar4 = operator_new(0xb0);
  /* try { // try from 00480255 to 00480259 has its CatchHandler @ 00480d7f */
  FlashAnimationLibrary__FlashAnimationLibrary__00576680(pFVar4, pcVar3);
  pIntroLibPart1 = pFVar4;
  /* try { // try from 0048026e to 0048029b has its CatchHandler @ 00480d4c */
  pIntroInstancePart1 = FlashAnimationLibrary__GetMovieClip__005731d0(pFVar4, 0);
  pcVar3 = (char *)FormatResourcePath("/Intro/intro2.am", local_58);
  pFVar4 = operator_new(0xb0);
  /* try { // try from 004802a5 to 004802a9 has its CatchHandler @ 00480d67 */
  FlashAnimationLibrary__FlashAnimationLibrary__00576680(pFVar4, pcVar3);
  pIntroLibPart2 = pFVar4;
  /* try { // try from 004802b6 to 00480623 has its CatchHandler @ 00480d4c */
  pIntroInstancePart2 = FlashAnimationLibrary__GetMovieClip__005731d0(pFVar4, 0);
  iVar2 = GetRandomINT(0, 4);
  if (iVar2 == 0) {
    /* try { // try from 00480b98 to 00480c1a has its CatchHandler @ 00480d4c */
    pwVar5 = (wchar_t *)FlashAnimationLibrary__GetTextField(pSaveGameScreenLib, "saveinfo");
    if (pwVar5 == (wchar_t *)0x0)
      goto LAB_00480324;
    uVar6 = GetLocalizedText(0xf1);
  } else if (iVar2 == 1) {
    pwVar5 = (wchar_t *)FlashAnimationLibrary__GetTextField(pSaveGameScreenLib, "saveinfo");
    if (pwVar5 == (wchar_t *)0x0)
      goto LAB_00480324;
    uVar6 = GetLocalizedText(0xf2);
  } else if (iVar2 == 2) {
    pwVar5 = (wchar_t *)FlashAnimationLibrary__GetTextField(pSaveGameScreenLib, "saveinfo");
    if (pwVar5 == (wchar_t *)0x0)
      goto LAB_00480324;
    uVar6 = GetLocalizedText(0xf3);
  } else if (iVar2 == 3) {
    pwVar5 = (wchar_t *)FlashAnimationLibrary__GetTextField(pSaveGameScreenLib, "saveinfo");
    if (pwVar5 == (wchar_t *)0x0)
      goto LAB_00480324;
    uVar6 = GetLocalizedText(0xf4);
  } else {
    pwVar5 = (wchar_t *)FlashAnimationLibrary__GetTextField(pSaveGameScreenLib, "saveinfo");
    if (pwVar5 == (wchar_t *)0x0)
      goto LAB_00480324;
    uVar6 = GetLocalizedText(0xf5);
  }
  FlashTextField__SetText(pwVar5, uVar6);
LAB_00480324:
  pwVar5 = (wchar_t *)FlashAnimationLibrary__GetTextField(pIntroLibPart2, "a");
  if (pwVar5 != (wchar_t *)0x0) {
    uVar6 = GetLocalizedText(0x6d);
    FlashTextField__SetText(pwVar5, uVar6);
  }
  pwVar5 = (wchar_t *)FlashAnimationLibrary__GetTextField(pIntroLibPart2, "b");
  if (pwVar5 != (wchar_t *)0x0) {
    uVar6 = GetLocalizedText(0x6e);
    FlashTextField__SetText(pwVar5, uVar6);
  }
  pwVar5 = (wchar_t *)FlashAnimationLibrary__GetTextField(pIntroLibPart2, "c");
  if (pwVar5 != (wchar_t *)0x0) {
    uVar6 = GetLocalizedText(0x6f);
    FlashTextField__SetText(pwVar5, uVar6);
  }
  pwVar5 = (wchar_t *)FlashAnimationLibrary__GetTextField(pIntroLibPart2, "d");
  if (pwVar5 != (wchar_t *)0x0) {
    uVar6 = GetLocalizedText(0x70);
    FlashTextField__SetText(pwVar5, uVar6);
  }
  pwVar5 = (wchar_t *)FlashAnimationLibrary__GetTextField(pIntroLibPart2, "e");
  if (pwVar5 != (wchar_t *)0x0) {
    uVar6 = GetLocalizedText(0x71);
    FlashTextField__SetText(pwVar5, uVar6);
  }
  pwVar5 = (wchar_t *)FlashAnimationLibrary__GetTextField(pIntroLibPart2, "f");
  if (pwVar5 != (wchar_t *)0x0) {
    uVar6 = GetLocalizedText(0x72);
    FlashTextField__SetText(pwVar5, uVar6);
  }
  pwVar5 = (wchar_t *)FlashAnimationLibrary__GetTextField(pIntroLibPart2, "g");
  if (pwVar5 != (wchar_t *)0x0) {
    uVar6 = GetLocalizedText(0x73);
    FlashTextField__SetText(pwVar5, uVar6);
  }
  pwVar5 = (wchar_t *)FlashAnimationLibrary__GetTextField(pIntroLibPart2, "h");
  if (pwVar5 != (wchar_t *)0x0) {
    uVar6 = GetLocalizedText(0x74);
    FlashTextField__SetText(pwVar5, uVar6);
  }
  pwVar5 = (wchar_t *)FlashAnimationLibrary__GetTextField(pIntroLibPart2, "i");
  if (pwVar5 != (wchar_t *)0x0) {
    uVar6 = GetLocalizedText(0x75);
    FlashTextField__SetText(pwVar5, uVar6);
  }
  pwVar5 = (wchar_t *)FlashAnimationLibrary__GetTextField(pIntroLibPart2, "j");
  if (pwVar5 != (wchar_t *)0x0) {
    uVar6 = GetLocalizedText(0x76);
    FlashTextField__SetText(pwVar5, uVar6);
  }
  pwVar5 = (wchar_t *)FlashAnimationLibrary__GetTextField(pIntroLibPart2, "k");
  if (pwVar5 != (wchar_t *)0x0) {
    uVar6 = GetLocalizedText(0x77);
    FlashTextField__SetText(pwVar5, uVar6);
  }
  pwVar5 = (wchar_t *)FlashAnimationLibrary__GetTextField(pIntroLibPart2, "l");
  if (pwVar5 != (wchar_t *)0x0) {
    uVar6 = GetLocalizedText(0x78);
    FlashTextField__SetText(pwVar5, uVar6);
  }
  pwVar5 = (wchar_t *)FlashAnimationLibrary__GetTextField(pIntroLibPart2, "m");
  if (pwVar5 != (wchar_t *)0x0) {
    uVar6 = GetLocalizedText(0x79);
    FlashTextField__SetText(pwVar5, uVar6);
  }
  if (*(int *)(SuperMeatBoy + 0x3a4) == 0) {
    TEngine__WaitForStartupLogos();
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 0;
    local_8c = 1;
    local_88 = 1;
    local_c8 = 0x44200000;
    local_c4 = 0x43f00000;
    local_c0 = 1;
    local_b8 = pSaveGameScreen;
    local_90 = 1;
    local_b0 = SMBAutoSaveFinished;
    GSMBCutSceneManager__PlayCutScene(SMBCutSceneManager, (SMBCutScene *)&local_c8);
  }
  /* try { // try from 00480638 to 00480677 has its CatchHandler @ 00480d44 */
  TResourceCreator__AddResourceCreationFunction((TResourceCreator *)ResourceCreator,
                                                CreateHudResources, (void *)0x0);
  TResourceCreator__AddResourceDestroyFunction((TResourceCreator *)ResourceCreator,
                                               DestroyHudResources, (void *)0x0);
  pcVar3 = (char *)FormatResourcePath("/HUD/popup.am", local_48);
  pFVar4 = operator_new(0xb0);
  /* try { // try from 00480681 to 00480685 has its CatchHandler @ 00480da2 */
  FlashAnimationLibrary__FlashAnimationLibrary__00576680(pFVar4, pcVar3);
  pFVar4[0x8c] = (FlashAnimationLibrary)0x1;
  pMessageBoxLib = pFVar4;
  /* try { // try from 0048069c to 004807a7 has its CatchHandler @ 00480d44 */
  pMessageBoxPopup = FlashAnimationLibrary__GetMovieClip__005731d0(pFVar4, "popupidle");
  pMessageBoxTransIn = FlashAnimationLibrary__GetMovieClip__005731d0(pMessageBoxLib, "popupin");
  pMessageBoxTransOut = FlashAnimationLibrary__GetMovieClip__005731d0(pMessageBoxLib, "popupout");
  pMessageBoxPage = FlashAnimationLibrary__GetMovieClip__005731d0(pMessageBoxLib, "page");
  plVar7 = (long *)FlashAnimationLibrary__GetMovieClip__005731d0(pMessageBoxLib, "page");
  pFVar8 = (FlashMovieClip *)FlashAnimationLibrary__GetLibraryEntry(pMessageBoxLib, (int)plVar7[4]);
  iMessageOkButton = FlashAnimationLibrary__GetClipIndex(pMessageBoxLib, "buttona");
  pMessageOkButton = FlashMovieClip__FindInstance(pFVar8, iMessageOkButton, 0, (int *)0x0, 0);
  iMessageCancelButton = FlashAnimationLibrary__GetClipIndex(pMessageBoxLib, "buttonb");
  pMessageCancelButton =
      FlashMovieClip__FindInstance(pFVar8, iMessageCancelButton, 0, (int *)0x0, 0);
  (**(code **)(*plVar7 + 8))(plVar7);
  RegisterMessageBoxRenderUpdate(SMBMessageRender, SMBMessageUpdate);
  pcVar3 = (char *)FormatResourcePath("/HUD/timerhud.am", local_78);
  pFVar4 = operator_new(0xb0);
  /* try { // try from 004807b1 to 004807b5 has its CatchHandler @ 00480daf */
  FlashAnimationLibrary__FlashAnimationLibrary__00576680(pFVar4, pcVar3);
  pTimerLib = pFVar4;
  /* try { // try from 004807c5 to 00480841 has its CatchHandler @ 00480d44 */
  pTimerHudInstance = FlashAnimationLibrary__GetMovieClip__005731d0(pFVar4, "timerhud1");
  pTimerHudCurrLevel = FlashAnimationLibrary__GetMovieClip__005731d0(pTimerLib, "leveltext");
  pHudLevelText = FlashAnimationLibrary__GetTextField(pTimerLib, "levelname");
  pHudTimerField = (wchar_t *)FlashAnimationLibrary__GetTextField(pTimerLib, "time");
  FlashTextField__SetText(pHudTimerField, &DAT_005c07dc /* R:6.726232628759122e-44f */);
  pcVar3 = (char *)FormatResourcePath("/HUD/meathuds.am", local_48);
  pFVar4 = operator_new(0xb0);
  /* try { // try from 0048084b to 0048084f has its CatchHandler @ 00480db2 */
  FlashAnimationLibrary__FlashAnimationLibrary__00576680(pFVar4, pcVar3);
  pHudLib = pFVar4;
  /* try { // try from 0048085f to 00480b19 has its CatchHandler @ 00480d44 */
  pReplayHudNormal = FlashAnimationLibrary__GetMovieClip__005731d0(pFVar4, "replayhud_xbox");
  pReplayHudDemo = FlashAnimationLibrary__GetMovieClip__005731d0(pHudLib, "replayhuddemo");
  pReplayHudInternets = FlashAnimationLibrary__GetMovieClip__005731d0(pHudLib, "portalhud");
  pFVar8 = (FlashMovieClip *)FlashAnimationLibrary__GetLibraryEntry(
      pHudLib, *(int *)(pReplayHudInternets + 0x20));
  iVar2 = FlashAnimationLibrary__GetClipIndex(pHudLib, "fun");
  pRatingStars = FlashMovieClip__FindInstance(pFVar8, iVar2, 0, (int *)0x0, 0);
  FlashAnimationLibrary__SetTextFieldText((char *)pHudLib, "skip", "Skip Vote");
  pReplayViewer = FlashAnimationLibrary__GetMovieClip__005731d0(pHudLib, "replayviewer");
  pBandageGet = FlashAnimationLibrary__GetMovieClip__005731d0(pHudLib, "bandageget");
  pGradeA = FlashAnimationLibrary__GetMovieClip__005731d0(pHudLib, "gradea");
  pLevelComplete = FlashAnimationLibrary__GetMovieClip__005731d0(pHudLib, "lvlcomplete");
  pwVar5 = (wchar_t *)FlashAnimationLibrary__GetTextField(pHudLib, "next");
  if (pwVar5 != (wchar_t *)0x0) {
    uVar6 = GetLocalizedText(0x30);
    FlashTextField__SetText(pwVar5, uVar6);
  }
  pwVar5 = (wchar_t *)FlashAnimationLibrary__GetTextField(pHudLib, "back");
  if (pwVar5 != (wchar_t *)0x0) {
    uVar6 = GetLocalizedText(0x50);
    FlashTextField__SetText(pwVar5, uVar6);
  }
  pwVar5 = (wchar_t *)FlashAnimationLibrary__GetTextField(pHudLib, "replay");
  if (pwVar5 != (wchar_t *)0x0) {
    uVar6 = GetLocalizedText(0x32);
    FlashTextField__SetText(pwVar5, uVar6);
  }
  pwVar5 = (wchar_t *)FlashAnimationLibrary__GetTextField(pHudLib, "save");
  if (pwVar5 != (wchar_t *)0x0) {
    uVar6 = GetLocalizedText(0x31);
    FlashTextField__SetText(pwVar5, uVar6);
  }
  pwVar5 = (wchar_t *)FlashAnimationLibrary__GetTextField(pHudLib, "restart");
  if (pwVar5 != (wchar_t *)0x0) {
    uVar6 = GetLocalizedText(0xc4);
    FlashTextField__SetText(pwVar5, uVar6);
  }
  pwVar5 = (wchar_t *)FlashAnimationLibrary__GetTextField(pHudLib, "back2");
  if (pwVar5 != (wchar_t *)0x0) {
    uVar6 = GetLocalizedText(10);
    FlashTextField__SetText(pwVar5, uVar6);
  }
  uVar6 = FlashAnimationLibrary__GetTextField(pHudLib, "time");
  pFVar4 = pHudLib;
  *(uint64_t *)(self + 0x4a0) = uVar6;
  uVar6 = FlashAnimationLibrary__GetTextField(pFVar4, "par");
  pFVar4 = pHudLib;
  *(uint64_t *)(self + 0x498) = uVar6;
  uVar6 = FlashAnimationLibrary__GetTextField(pFVar4, "bandageget");
  pFVar4 = pHudLib;
  *(uint64_t *)(self + 0x4b0) = uVar6;
  lVar9 = FlashAnimationLibrary__GetTextField(pFVar4, "levelcompletetext");
  *(long *)(self + 0x4a8) = lVar9;
  if (*(long *)(self + 0x4b0) != 0) {
    uVar6 = GetLocalizedText(0x126);
    FlashTextField__SetText(*(wchar_t **)(self + 0x4b0), uVar6);
    lVar9 = *(long *)(self + 0x4a8);
  }
  if (lVar9 != 0) {
    uVar6 = GetLocalizedText(0x10);
    FlashTextField__SetText(*(wchar_t **)(self + 0x4a8), uVar6);
  }
  SMBHUD = self;
  if ((allocator *)(local_48[0] + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage) {
    LOCK();
    piVar1 = (int *)(local_48[0] + -8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 < 1) {
      std__string_Rep_M_destroy((allocator *)(local_48[0] + -0x18));
    }
  }
  if ((allocator *)(local_58[0] + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage) {
    LOCK();
    piVar1 = (int *)(local_58[0] + -8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 < 1) {
      std__string_Rep_M_destroy((allocator *)(local_58[0] + -0x18));
    }
  }
  if ((allocator *)(local_68[0] + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage) {
    LOCK();
    piVar1 = (int *)(local_68[0] + -8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 < 1) {
      std__string_Rep_M_destroy((allocator *)(local_68[0] + -0x18));
    }
  }
  if ((allocator *)(local_78[0] + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage) {
    LOCK();
    piVar1 = (int *)(local_78[0] + -8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 < 1) {
      std__string_Rep_M_destroy((allocator *)(local_78[0] + -0x18));
    }
  }
  return;
}
