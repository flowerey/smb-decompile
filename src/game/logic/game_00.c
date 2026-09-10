/* src/game/logic/game_00.c — 100 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "game_00.h"

/* ======================================================================
 * SMBFactoryBossOutroFinished  (Ghidra `SMBFactoryBossOutroFinished` @ 00468e80)
 * Signature: uint8_t __stdcall SMBFactoryBossOutroFinished(void * arg1, int arg2, int arg3)
 * Calls: `GSMBChapterData__MarkBossAsDefeated`, `GSMBChapterData__SaveData`, `GSMBChapterData__UnlockChapter`, `GSMBMenu__ShowChapterEnd`, `SMBChapter__DestroyBossOutro`
 * Called by: `FactoryBoss__Update`, `GLOBAL_sub_I_SMBFactoryBossOutroFinished`
 */
/* SMBFactoryBossOutroFinished(void*, int, int) */

void SMBFactoryBossOutroFinished(void *arg1, int arg2, int arg3)

{
  SMBChapter__DestroyBossOutro((SMBChapter *)(SuperMeatBoy + 0x90), 1);
  GSMBChapterData__MarkBossAsDefeated(SMBChapterData, 3);
  GSMBChapterData__UnlockChapter(SMBChapterData);
  GSMBChapterData__SaveData(SMBChapterData, 0);
  if (arg3 != 0) {
    return;
  }
  GSMBMenu__ShowChapterEnd(SMBMenu);
  return;
}

/* ======================================================================
 * SMBFinalBossIntroSkip  (Ghidra `SMBFinalBossIntroSkip` @ 00469390)
 * Signature: uint8_t __stdcall SMBFinalBossIntroSkip(void * arg1)
 * Calls: `TPlayer__GetJoystick`
 * Called by: `FinalBoss__Update`
 */
/* SMBFinalBossIntroSkip(void*) */

bool SMBFinalBossIntroSkip(void *arg1)

{
  long lVar1;
  bool bVar2;

  if ((Keyboard == 0) || (bVar2 = true, *(int *)(Keyboard + 8) != 1)) {
    lVar1 = TPlayer__GetJoystick((TPlayer *)Players__Player);
    bVar2 = *(int *)(lVar1 + 8) == 1;
  }
  return bVar2;
}

/* ======================================================================
 * SMBCreditsFinished  (Ghidra `SMBCreditsFinished` @ 004693d0)
 * Signature: uint8_t __stdcall SMBCreditsFinished(void * arg1, int arg2, int arg3)
 * Calls: `DestroySMBBoss`, `GSMBMenu__ShowChapterEnd`
 * Called by: `FinalBoss__PlayCredits`, `SMBFinalBossPhaseTwoFinished`
 */
/* SMBCreditsFinished(void*, int, int) */

void SMBCreditsFinished(void *arg1, int arg2, int arg3)

{
  if (arg3 == 0) {
    GSMBMenu__ShowChapterEnd(SMBMenu);
  }
  DestroySMBBoss();
  return;
}

/* ======================================================================
 * SMBFinalBossPhaseTwoFinished  (Ghidra `SMBFinalBossPhaseTwoFinished` @ 004694a0)
 * Signature: uint8_t __stdcall SMBFinalBossPhaseTwoFinished(void * arg1, int arg2, int arg3)
 * Calls: `FlashAnimationLibrary__FlashAnimationLibrary`, `GSMBChapterData__MarkAltBossAsDefeated`, `GSMBChapterData__MarkBossAsDefeated`, `GSMBChapterData__SaveData`, `GSMBChapterData__UnlockChapter`, `SMBCreditRoll__StartCredits`, `SMBCreditsFinished`, `operator_delete`
 * Called by: `FinalBoss__Update`
 */
/* SMBFinalBossPhaseTwoFinished(void*, int, int) */

void SMBFinalBossPhaseTwoFinished(void *arg1, int arg2, int arg3)

{
  FlashAnimationLibrary *self;
  long lVar1;

  if (*(short *)(SuperMeatBoy + 0x376) == 0) {
    GSMBChapterData__MarkBossAsDefeated(SMBChapterData);
    GSMBChapterData__UnlockChapter(SMBChapterData);
  } else {
    GSMBChapterData__MarkAltBossAsDefeated();
  }
  GSMBChapterData__SaveData(SMBChapterData, 0);
  lVar1 = CurrentSMBBoss;
  if (*(long **)(CurrentSMBBoss + 400) != (long *)0x0) {
    (**(code **)(**(long **)(CurrentSMBBoss + 400) + 8))();
  }
  self = *(FlashAnimationLibrary **)(lVar1 + 0x188);
  *(uint64_t *)(lVar1 + 400) = 0;
  if (self != (FlashAnimationLibrary *)0x0) {
    FlashAnimationLibrary__FlashAnimationLibrary(self);
    operator_delete(self);
  }
  *(uint64_t *)(lVar1 + 0x188) = 0;
  SMBCreditRoll__StartCredits(*(SMBCreditRoll **)(lVar1 + 0x198), SMBCreditsFinished);
  return;
}

/* ======================================================================
 * SMBFinalBossOutroFinished  (Ghidra `SMBFinalBossOutroFinished` @ 004699b0)
 * Signature: uint8_t __stdcall SMBFinalBossOutroFinished(void * arg1, int arg2, int arg3)
 * Calls: `FinalBoss__SetToPhaseTwo`, `GSuperMeatBoy__Freeze`, `SMBChapter__DestroyBossOutro`, `SMBEditor__LoadLevel`
 * Called by: `FinalBoss__Update`
 */
/* SMBFinalBossOutroFinished(void*, int, int) */

void SMBFinalBossOutroFinished(void *arg1, int arg2, int arg3)

{
  char *local_28;
  uint64_t local_20;
  uint32_t local_18;

  SMBChapter__DestroyBossOutro((SMBChapter *)(SuperMeatBoy + 0x90), 0);
  local_28 = "boss62";
  local_20 = 0;
  local_18 = 0;
  if (*(short *)(SuperMeatBoy + 0x376) != 0) {
    local_28 = "boss62x";
  }
  SMBEditor__LoadLevel(SuperMeatBoyEditor, (TileLevelLoad *)&local_28);
  GSuperMeatBoy__Freeze(SuperMeatBoy, 0);
  FinalBoss__SetToPhaseTwo(CurrentSMBBoss);
  return;
}

/* ======================================================================
 * SMBForestBossOutroFinished  (Ghidra `SMBForestBossOutroFinished` @ 0046a530)
 * Signature: uint8_t __stdcall SMBForestBossOutroFinished(void * arg1, int arg2, int arg3)
 * Calls: `GSMBChapterData__MarkBossAsDefeated`, `GSMBChapterData__SaveData`, `GSMBChapterData__UnlockChapter`, `GSMBMenu__ShowChapterEnd`, `SMBChapter__DestroyBossOutro`
 * Called by: `ForestBoss__Update`, `GLOBAL_sub_I_SMBForestBossOutroFinished`
 */
/* SMBForestBossOutroFinished(void*, int, int) */

void SMBForestBossOutroFinished(void *arg1, int arg2, int arg3)

{
  SMBChapter__DestroyBossOutro((SMBChapter *)(SuperMeatBoy + 0x90), 1);
  GSMBChapterData__MarkBossAsDefeated(SMBChapterData, 1);
  GSMBChapterData__UnlockChapter(SMBChapterData);
  GSMBChapterData__SaveData(SMBChapterData, 0);
  if (arg3 != 0) {
    return;
  }
  GSMBMenu__ShowChapterEnd(SMBMenu);
  return;
}

/* ======================================================================
 * SMBHellBossOutroFinished  (Ghidra `SMBHellBossOutroFinished` @ 0046b220)
 * Signature: uint8_t __stdcall SMBHellBossOutroFinished(void * arg1, int arg2, int arg3)
 * Calls: `GSMBChapterData__MarkBossAsDefeated`, `GSMBChapterData__SaveData`, `GSMBChapterData__UnlockChapter`, `GSMBMenu__ShowChapterEnd`, `SMBChapter__DestroyBossOutro`
 * Called by: `GLOBAL_sub_I_SMBHellBossOutroFinished`, `HellBoss__Update`
 */
/* SMBHellBossOutroFinished(void*, int, int) */

void SMBHellBossOutroFinished(void *arg1, int arg2, int arg3)

{
  SMBChapter__DestroyBossOutro((SMBChapter *)(SuperMeatBoy + 0x90), 1);
  GSMBChapterData__MarkBossAsDefeated(SMBChapterData, 4);
  GSMBChapterData__UnlockChapter(SMBChapterData);
  GSMBChapterData__SaveData(SMBChapterData, 0);
  if (arg3 != 0) {
    return;
  }
  GSMBMenu__ShowChapterEnd(SMBMenu);
  return;
}

/* ======================================================================
 * SMBHospitalBossOutroFinished  (Ghidra `SMBHospitalBossOutroFinished` @ 0046d320)
 * Signature: uint8_t __stdcall SMBHospitalBossOutroFinished(void * arg1, int arg2, int arg3)
 * Calls: `GSMBChapterData__MarkBossAsDefeated`, `GSMBChapterData__SaveData`, `GSMBChapterData__UnlockChapter`, `GSMBMenu__ShowChapterEnd`, `SMBChapter__DestroyBossOutro`
 * Called by: `HospitalBoss__Update`
 */
/* SMBHospitalBossOutroFinished(void*, int, int) */

void SMBHospitalBossOutroFinished(void *arg1, int arg2, int arg3)

{
  SMBChapter__DestroyBossOutro((SMBChapter *)(SuperMeatBoy + 0x90), 1);
  GSMBChapterData__MarkBossAsDefeated(SMBChapterData, 2);
  GSMBChapterData__UnlockChapter(SMBChapterData);
  GSMBChapterData__SaveData(SMBChapterData, 0);
  if (arg3 != 0) {
    return;
  }
  GSMBMenu__ShowChapterEnd(SMBMenu);
  return;
}

/* ======================================================================
 * SkipSMBIntro  (Ghidra `SkipSMBIntro` @ 0047e280)
 * Signature: uint8_t __stdcall SkipSMBIntro(void * arg1)
 * Calls: (none)
 * Called by: `GMeatHUD__PlayIntroPart2`, `GMeatHUD__PlayStartIntro`, `SMBAutoSaveFinished`, `SMBIntro1Finished`
 */
/* SkipSMBIntro(void*) */

bool SkipSMBIntro(void *arg1)

{
  bool bVar1;

  if ((Keyboard == 0) || (bVar1 = true, *(int *)(Keyboard + 8) != 1)) {
    bVar1 = true;
    if ((*(int *)(pGameJoysticks + 8) != 1) &&
        ((*(int *)(pGameJoysticks + 0x310) != 1 && (*(int *)(pGameJoysticks + 0x618) != 1)))) {
      bVar1 = *(int *)(pGameJoysticks + 0x920) == 1;
    }
  }
  return bVar1;
}

/* ======================================================================
 * SMBMessageUpdate  (Ghidra `SMBMessageUpdate` @ 0047e2d0)
 * Signature: uint8_t __stdcall SMBMessageUpdate(void * arg1)
 * Calls: (none)
 * Called by: `GMeatHUD__GMeatHUD__004800c0`, `GMeatHUD__RestoreMessageBoxFunctions`, `Game_DisableMessage`, `Game_ForceCloseMessage`
 */
/* SMBMessageUpdate(void*) */

void SMBMessageUpdate(void *arg1)

{
  return;
}

/* ======================================================================
 * CreateHudResources  (Ghidra `CreateHudResources` @ 0047e2e0)
 * Signature: uint8_t __stdcall CreateHudResources(void * arg1)
 * Calls: (none)
 * Called by: `GMeatHUD__GMeatHUD`, `GMeatHUD__GMeatHUD__004800c0`
 */
/* CreateHudResources(void*) */

void CreateHudResources(void *arg1)

{
  return;
}

/* ======================================================================
 * DestroyHudResources  (Ghidra `DestroyHudResources` @ 0047e2f0)
 * Signature: uint8_t __stdcall DestroyHudResources(void * arg1)
 * Calls: (none)
 * Called by: `GMeatHUD__GMeatHUD`, `GMeatHUD__GMeatHUD__004800c0`
 */
/* DestroyHudResources(void*) */

void DestroyHudResources(void *arg1)

{
  return;
}

/* ======================================================================
 * SMBUnlockFinished  (Ghidra `SMBUnlockFinished` @ 0047e300)
 * Signature: uint8_t __stdcall SMBUnlockFinished(void * arg1, int arg2, int arg3)
 * Calls: (none)
 * Called by: `GMeatHUD__Update`
 */
/* SMBUnlockFinished(void*, int, int) */

void SMBUnlockFinished(void *arg1, int arg2, int arg3)

{
  return;
}

/* ======================================================================
 * SMBUnlockSkip  (Ghidra `SMBUnlockSkip` @ 0047e7b0)
 * Signature: uint8_t __stdcall SMBUnlockSkip(void * arg1)
 * Calls: `TPlayer__GetJoystick`
 * Called by: `GMeatHUD__Update`
 */
/* SMBUnlockSkip(void*) */

bool SMBUnlockSkip(void *arg1)

{
  long lVar1;
  bool bVar2;

  if ((Keyboard == 0) || (bVar2 = true, *(int *)(Keyboard + 8) != 1)) {
    lVar1 = TPlayer__GetJoystick((TPlayer *)Players__Player);
    bVar2 = *(int *)(lVar1 + 8) == 1;
  }
  return bVar2;
}

/* ======================================================================
 * SMBMessageRender  (Ghidra `SMBMessageRender` @ 0047e7f0)
 * Signature: uint8_t __stdcall SMBMessageRender(void * arg1, tagUAState arg2)
 * Calls: `FlashAnimationLibrary__GetTextField`, `FlashLibraryInstance__IsPlaying`, `RegisterAudioPosition`, `SetCurrState`, `SwitchOutMenuButtons`, `TAudio__DisableDirectionalAudio`, `TAudio__EnableDirectionalAudio`, `TGraphics__GetMatrix`, `TGraphics__SetMatrix`, `TGraphics__SetPerspectiveProjectionMode` (+1 more)
 * Called by: `GMeatHUD__GMeatHUD__004800c0`, `GMeatHUD__RestoreMessageBoxFunctions`, `Game_DisableMessage`, `Game_ForceCloseMessage`
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SMBMessageRender(void*, tagUAState) */

void SMBMessageRender(uint64_t arg1, int arg2)

{
  uint uVar1;
  int iVar2;
  Matrix4x4 *pMVar3;
  wchar_t *pwVar4;
  Matrix4x4 aMStack_48[64];

  TGraphics__SetRenderState(Graphics, '\x03', 0);
  TGraphics__SetRenderState(Graphics, '\x01', 7);
  TGraphics__SetRenderState(Graphics, '\b', 1);
  TGraphics__SetRenderState(Graphics, '\x05', 4);
  TGraphics__SetRenderState(Graphics, '\x06', 5);
  TGraphics__SetRenderState(Graphics, '\n', 7);
  TGraphics__SetRenderState(Graphics, '\t', 0);
  Matrix4x4__ConvertToOrthoMatrix(aMStack_48, _DAT_005c0c9c /* R:240.0f */,
                                  DAT_005c0c98 /* R:-240.0f */, DAT_005c0c94 /* R:-426.5f */,
                                  DAT_005c0c90 /* R:426.5f */, DAT_005c07a4 /* R:-1.0f */,
                                  DAT_005be894 /* R:1.0f */);
  TGraphics__SetMatrix(Graphics, 3, aMStack_48);
  TGraphics__SetPerspectiveProjectionMode(Graphics, 0);
  pMVar3 = (Matrix4x4 *)TGraphics__GetMatrix(Graphics, 2);
  Matrix4x4__Identity(pMVar3);
  pMVar3 = (Matrix4x4 *)TGraphics__GetMatrix(Graphics, 0);
  Matrix4x4__Identity(pMVar3);
  pwVar4 = (wchar_t *)FlashAnimationLibrary__GetTextField(pMessageBoxLib, "title");
  FlashTextField__SetText(pwVar4, &DAT_008241a4 /* R:0.0f */);
  pwVar4 = (wchar_t *)FlashAnimationLibrary__GetTextField(pMessageBoxLib, "info");
  FlashTextField__SetText(pwVar4, &DAT_008243a4 /* R:0.0f */);
  pwVar4 = (wchar_t *)FlashAnimationLibrary__GetTextField(pMessageBoxLib, "ok");
  FlashTextField__SetText(pwVar4, &DAT_008247a4 /* R:0.0f */);
  pwVar4 = (wchar_t *)FlashAnimationLibrary__GetTextField(pMessageBoxLib, "cancel");
  FlashTextField__SetText(pwVar4, &DAT_008249a4 /* R:0.0f */);
  uVar1 = UserAlert__currInterrupt;
  if ((UserAlert__currInterrupt & 0x10) == 0) {
    *(uint32_t *)(pMessageCancelButton + 0x20) = 0xffffffff;
  } else {
    *(uint32_t *)(pMessageCancelButton + 0x20) = iMessageCancelButton;
  }
  if ((uVar1 & 8) == 0) {
    *(uint32_t *)(pMessageOkButton + 0x20) = 0xffffffff;
  } else {
    *(uint32_t *)(pMessageOkButton + 0x20) = iMessageOkButton;
  }
  TAudio__DisableDirectionalAudio(Audio);
  RegisterAudioPosition((FPUVector *)0xffffffff);
  SwitchOutMenuButtons(pMessageBoxLib, pMessageBoxPage);
  if (arg2 == 2) {
    (**(code **)(*pMessageBoxPopup + 0x10))();
  } else if (arg2 == 0) {
    (**(code **)(*(long *)pMessageBoxTransIn + 0x10))();
    iVar2 = FlashLibraryInstance__IsPlaying(pMessageBoxTransIn);
    if (iVar2 == 0) {
      SetCurrState(2);
    }
  } else if (arg2 == 1) {
    (**(code **)(*(long *)pMessageBoxTransOut + 0x10))();
    iVar2 = FlashLibraryInstance__IsPlaying(pMessageBoxTransOut);
    if (iVar2 == 0) {
      SetCurrState(3);
    }
  }
  TAudio__EnableDirectionalAudio(Audio);
  RegisterAudioPosition((FPUVector *)0x0);
  return;
}

/* ======================================================================
 * GameUserAlert_CancelPress  (Ghidra `GameUserAlert_CancelPress` @ 0047ead0)
 * Signature: uint8_t __stdcall GameUserAlert_CancelPress(tagButtonProps * arg1, void * arg2)
 * Calls: `RunCancelFunction`
 * Called by: `Game_CreateMessage`
 */
/* GameUserAlert_CancelPress(tagButtonProps const*, void*) */

void GameUserAlert_CancelPress(tagButtonProps *arg1, void *arg2)

{
  if (*(int *)arg1 != 1) {
    return;
  }
  RunCancelFunction();
  return;
}

/* ======================================================================
 * GameUserAlert_OkPress  (Ghidra `GameUserAlert_OkPress` @ 0047eaf0)
 * Signature: uint8_t __stdcall GameUserAlert_OkPress(tagButtonProps * arg1, void * arg2)
 * Calls: `RunOKFunction`
 * Called by: `Game_CreateMessage`
 */
/* GameUserAlert_OkPress(tagButtonProps const*, void*) */

void GameUserAlert_OkPress(tagButtonProps *arg1, void *arg2)

{
  if (*(int *)arg1 != 1) {
    return;
  }
  RunOKFunction();
  return;
}

/* ======================================================================
 * SMBIntro1Finished  (Ghidra `SMBIntro1Finished` @ 0047eb10)
 * Signature: uint8_t __stdcall SMBIntro1Finished(void * arg1, int arg2, int arg3)
 * Calls: `GSMBCutSceneManager__PlayCutScene`, `SMBIntroFinished`, `SkipSMBIntro`
 * Called by: `GMeatHUD__PlayStartIntro`, `SMBAutoSaveFinished`
 */
/* SMBIntro1Finished(void*, int, int) */

void SMBIntro1Finished(void *arg1, int arg2, int arg3)

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
 * SMBAutoSaveFinished  (Ghidra `SMBAutoSaveFinished` @ 0047eba0)
 * Signature: uint8_t __stdcall SMBAutoSaveFinished(void * arg1, int arg2, int arg3)
 * Calls: `GSMBCutSceneManager__PlayCutScene`, `SMBIntro1Finished`, `SkipSMBIntro`
 * Called by: `GMeatHUD__GMeatHUD__004800c0`
 */
/* SMBAutoSaveFinished(void*, int, int) */

void SMBAutoSaveFinished(void *arg1, int arg2, int arg3)

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
 * Game_CreateMessage  (Ghidra `Game_CreateMessage` @ 0047ec20)
 * Signature: uint8_t Game_CreateMessage(void)
 * Calls: `FlashLibraryInstance__Reset`, `GameUserAlert_CancelPress`, `GameUserAlert_OkPress`, `Joystick__AddButtonCallback`, `Joystick__BackupCallbacks`, `TKeyboard__AddKeyCallback`, `TKeyboard__BackupCallbacks`, `TPlayer__GetJoystick`
 * Called by: `CreatePendingMessage`
 */
void Game_CreateMessage(long arg1)

{
  uint64_t uVar1;
  Joystick *pJVar2;

  AnimationManager__PauseAnimations(1);
  pJVar2 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__BackupCallbacks(pJVar2, (InputCallback **)0x0, (InputCallback **)0x0);
  pJVar2 = (Joystick *)TPlayer__GetJoystick((TPlayer *)(Players__Player + 0x18));
  Joystick__BackupCallbacks(pJVar2, (InputCallback **)0x0, (InputCallback **)0x0);
  pJVar2 = (Joystick *)TPlayer__GetJoystick((TPlayer *)(Players__Player + 0x30));
  Joystick__BackupCallbacks(pJVar2, (InputCallback **)0x0, (InputCallback **)0x0);
  pJVar2 = (Joystick *)TPlayer__GetJoystick((TPlayer *)(Players__Player + 0x48));
  Joystick__BackupCallbacks(pJVar2, (InputCallback **)0x0, (InputCallback **)0x0);
  uVar1 = *(uint64_t *)(arg1 + 0x28);
  pJVar2 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddButtonCallback(pJVar2, 0, GameUserAlert_OkPress, uVar1);
  uVar1 = *(uint64_t *)(arg1 + 0x30);
  pJVar2 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddButtonCallback(pJVar2, 1, GameUserAlert_CancelPress, uVar1);
  uVar1 = *(uint64_t *)(arg1 + 0x28);
  pJVar2 = (Joystick *)TPlayer__GetJoystick((TPlayer *)(Players__Player + 0x18));
  Joystick__AddButtonCallback(pJVar2, 0, GameUserAlert_OkPress, uVar1);
  uVar1 = *(uint64_t *)(arg1 + 0x30);
  pJVar2 = (Joystick *)TPlayer__GetJoystick((TPlayer *)(Players__Player + 0x18));
  Joystick__AddButtonCallback(pJVar2, 1, GameUserAlert_CancelPress, uVar1);
  uVar1 = *(uint64_t *)(arg1 + 0x28);
  pJVar2 = (Joystick *)TPlayer__GetJoystick((TPlayer *)(Players__Player + 0x30));
  Joystick__AddButtonCallback(pJVar2, 0, GameUserAlert_OkPress, uVar1);
  uVar1 = *(uint64_t *)(arg1 + 0x30);
  pJVar2 = (Joystick *)TPlayer__GetJoystick((TPlayer *)(Players__Player + 0x30));
  Joystick__AddButtonCallback(pJVar2, 1, GameUserAlert_CancelPress, uVar1);
  uVar1 = *(uint64_t *)(arg1 + 0x28);
  pJVar2 = (Joystick *)TPlayer__GetJoystick((TPlayer *)(Players__Player + 0x48));
  Joystick__AddButtonCallback(pJVar2, 0, GameUserAlert_OkPress, uVar1);
  uVar1 = *(uint64_t *)(arg1 + 0x30);
  pJVar2 = (Joystick *)TPlayer__GetJoystick((TPlayer *)(Players__Player + 0x48));
  Joystick__AddButtonCallback(pJVar2, 1, GameUserAlert_CancelPress, uVar1);
  if (Keyboard != (TKeyboard *)0x0) {
    TKeyboard__BackupCallbacks(Keyboard, (InputCallback **)0x0);
    TKeyboard__AddKeyCallback(Keyboard, 0x76, GameUserAlert_OkPress, *(uint64_t *)(arg1 + 0x28));
    TKeyboard__AddKeyCallback(Keyboard, 0x6c, GameUserAlert_OkPress, *(uint64_t *)(arg1 + 0x28));
    TKeyboard__AddKeyCallback(Keyboard, 0x23, GameUserAlert_CancelPress,
                              *(uint64_t *)(arg1 + 0x30));
  }
  if (*(code **)(arg1 + 0x50) != (code *)0x0) {
    (**(code **)(arg1 + 0x50))(0);
  }
  FlashLibraryInstance__Reset(pMessageBoxPopup);
  FlashLibraryInstance__Reset(pMessageBoxTransIn);
  FlashLibraryInstance__Reset(pMessageBoxTransOut);
  return;
}

/* ======================================================================
 * Game_DisableMessage  (Ghidra `Game_DisableMessage` @ 0047ee30)
 * Signature: uint8_t Game_DisableMessage(void)
 * Calls: `Joystick__RestoreCallbacks`, `RegisterMessageBoxRenderUpdate`, `SMBMessageRender`, `SMBMessageUpdate`, `TKeyboard__RestoreCallbacks`, `TPlayer__GetJoystick`
 * Called by: `CreateMessage`, `DisableMessage`, `Render__005b9970`, `UserAlertCloseCurrent`
 */
void Game_DisableMessage(int arg1)

{
  Joystick *pJVar1;

  AnimationManager__PauseAnimations(0);
  if (arg1 != 1) {
    RegisterMessageBoxRenderUpdate(SMBMessageRender, SMBMessageUpdate);
    return;
  }
  if (Keyboard != (TKeyboard *)0x0) {
    TKeyboard__RestoreCallbacks(Keyboard, (InputCallback **)0x0);
  }
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__RestoreCallbacks(pJVar1, (InputCallback **)0x0, (InputCallback **)0x0);
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)(Players__Player + 0x18));
  Joystick__RestoreCallbacks(pJVar1, (InputCallback **)0x0, (InputCallback **)0x0);
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)(Players__Player + 0x30));
  Joystick__RestoreCallbacks(pJVar1, (InputCallback **)0x0, (InputCallback **)0x0);
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)(Players__Player + 0x48));
  Joystick__RestoreCallbacks(pJVar1, (InputCallback **)0x0, (InputCallback **)0x0);
  RegisterMessageBoxRenderUpdate(SMBMessageRender, SMBMessageUpdate);
  return;
}

/* ======================================================================
 * Game_ForceCloseMessage  (Ghidra `Game_ForceCloseMessage` @ 0047eed0)
 * Signature: uint8_t Game_ForceCloseMessage(void)
 * Calls: `RegisterMessageBoxRenderUpdate`, `SMBMessageRender`, `SMBMessageUpdate`
 * Called by: `ForceClose`
 */
void Game_ForceCloseMessage(void)

{
  AnimationManager__PauseAnimations(0);
  RegisterMessageBoxRenderUpdate(SMBMessageRender, SMBMessageUpdate);
  return;
}

/* ======================================================================
 * SMBIntroFinished  (Ghidra `SMBIntroFinished` @ 0047f2b0)
 * Signature: uint8_t __stdcall SMBIntroFinished(void * arg1, int arg2, int arg3)
 * Calls: `GMeatHUD__KillIntro`, `GSuperMeatBoy__SwitchGameMode`
 * Called by: `GMeatHUD__PlayIntroPart2`, `SMBIntro1Finished`
 */
/* SMBIntroFinished(void*, int, int) */

void SMBIntroFinished(void *arg1, int arg2, int arg3)

{
  GMeatHUD__KillIntro();
  GSuperMeatBoy__SwitchGameMode(SuperMeatBoy, 0xd);
  return;
}

/* ======================================================================
 * SMBRaptureBossOutroFinished  (Ghidra `SMBRaptureBossOutroFinished` @ 00483b70)
 * Signature: uint8_t __stdcall SMBRaptureBossOutroFinished(void * arg1, int arg2, int arg3)
 * Calls: `GSMBChapterData__MarkBossAsDefeated`, `GSMBChapterData__SaveData`, `GSMBChapterData__UnlockChapter`, `GSMBMenu__ShowChapterEnd`, `SMBChapter__DestroyBossOutro`
 * Called by: `GLOBAL_sub_I_SMBRaptureBossOutroFinished`, `RaptureBoss__Update`
 */
/* SMBRaptureBossOutroFinished(void*, int, int) */

void SMBRaptureBossOutroFinished(void *arg1, int arg2, int arg3)

{
  SMBChapter__DestroyBossOutro((SMBChapter *)(SuperMeatBoy + 0x90), 1);
  GSMBChapterData__MarkBossAsDefeated(SMBChapterData, 5);
  GSMBChapterData__UnlockChapter(SMBChapterData);
  GSMBChapterData__SaveData(SMBChapterData, 0);
  if (arg3 != 0) {
    return;
  }
  GSMBMenu__ShowChapterEnd(SMBMenu);
  return;
}

/* ======================================================================
 * SMBAnimalAirEnemyUpdate  (Ghidra `SMBAnimalAirEnemyUpdate` @ 00486f70)
 * Signature: uint8_t SMBAnimalAirEnemyUpdate(void)
 * Calls: `Apply2DPhysics`, `TileLevel__TileCollision`
 * Called by: (none)
 */
void SMBAnimalAirEnemyUpdate(SceneObject2D *arg1)

{
  long lVar1;
  uint64_t local_58;
  uint64_t local_50;
  uint64_t local_48;
  uint64_t local_40;
  uint32_t local_38;
  uint32_t local_34;
  uint32_t local_10;

  lVar1 = SuperMeatBoy;
  *(uint32_t *)(arg1 + 0x98) = 0x3f800000;
  local_10 = 1;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_34 = 0;
  TileLevel__TileCollision(*(TileLevel **)(lVar1 + 0x40), arg1, (TileCollisionInfo *)&local_58);
  Apply2DPhysics(arg1, fOneFrameTimeStep);
  return;
}

/* ======================================================================
 * SMBAnimalGroundEnemyUpdate  (Ghidra `SMBAnimalGroundEnemyUpdate` @ 00487280)
 * Signature: uint8_t SMBAnimalGroundEnemyUpdate(void)
 * Calls: `Apply2DPhysics`, `GetRandomINT`, `IsStickableTile`, `TileLevel__TileCollision`, `Vector2__Vector2`, `Vector2__operator_assign`, `Vector2__operator_eq`, `Vector2__operator_plus_assign`
 * Called by: `SMBAnimal__Update`
 */
void SMBAnimalGroundEnemyUpdate(SceneObject2D *arg1)

{
  Vector2 *self;
  float fVar1;
  float fVar2;
  uint uVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint32_t uVar8;
  long lVar9;
  byte bVar10;
  uint64_t local_f8;
  uint32_t local_e8;
  uint32_t local_e4;
  uint32_t local_d8;
  uint32_t local_d4;
  uint32_t local_c8;
  uint32_t local_c4;
  uint32_t local_b8;
  uint32_t local_b4;
  uint32_t local_a8;
  uint32_t local_a4;
  uint32_t local_98;
  uint32_t local_94;
  uint32_t local_88;
  uint32_t local_84;
  uint32_t local_78;
  uint32_t local_74;
  uint32_t local_68;
  uint32_t local_64;
  uint32_t local_58;
  uint32_t local_54;
  uint32_t local_48;
  uint32_t local_44;
  uint32_t local_38;
  uint32_t local_34;

  fVar1 = *(float *)(*(long *)(arg1 + 0x48) + 0x84);
  fVar2 = *(float *)(*(long *)(arg1 + 0x48) + 0x88);
  uVar3 = *(uint *)(arg1 + 0x110);
  Apply2DPhysics(arg1, DAT_005c17d0 /* R:0.01666666753590107f */);
  lVar9 = SuperMeatBoy;
  *(uint32_t *)(arg1 + 0x1b8) = 0;
  TileLevel__TileCollision(*(TileLevel **)(lVar9 + 0x40), arg1,
                           (TileCollisionInfo *)(arg1 + 0x170));
  local_f8 = *(uint64_t *)(arg1 + 0xa0);
  if (SMBAnimalGroundEnemyUpdate__vUpGravity == '\0') {
    iVar7 = __cxa_guard_acquire(&SMBAnimalGroundEnemyUpdate__vUpGravity);
    if (iVar7 != 0) {
      SMBAnimalGroundEnemyUpdate__vUpGravity._0_4_ = 0;
      SMBAnimalGroundEnemyUpdate__vUpGravity._4_4_ = 0x44098000;
      __cxa_guard_release(&SMBAnimalGroundEnemyUpdate__vUpGravity);
      __cxa_atexit(Vector2__Vector2, &SMBAnimalGroundEnemyUpdate__vUpGravity, &__dso_handle);
    }
  }
  if (SMBAnimalGroundEnemyUpdate__vDownGravity == '\0') {
    iVar7 = __cxa_guard_acquire(&SMBAnimalGroundEnemyUpdate__vDownGravity);
    if (iVar7 != 0) {
      SMBAnimalGroundEnemyUpdate__vDownGravity._0_4_ = 0;
      SMBAnimalGroundEnemyUpdate__vDownGravity._4_4_ = 0xc4098000;
      __cxa_guard_release(&SMBAnimalGroundEnemyUpdate__vDownGravity);
      __cxa_atexit(Vector2__Vector2, &SMBAnimalGroundEnemyUpdate__vDownGravity, &__dso_handle);
    }
  }
  if (SMBAnimalGroundEnemyUpdate__vLeftGravity == '\0') {
    iVar7 = __cxa_guard_acquire(&SMBAnimalGroundEnemyUpdate__vLeftGravity);
    if (iVar7 != 0) {
      SMBAnimalGroundEnemyUpdate__vLeftGravity._0_4_ = 0xc4098000;
      SMBAnimalGroundEnemyUpdate__vLeftGravity._4_4_ = 0;
      __cxa_guard_release(&SMBAnimalGroundEnemyUpdate__vLeftGravity);
      __cxa_atexit(Vector2__Vector2, &SMBAnimalGroundEnemyUpdate__vLeftGravity, &__dso_handle);
    }
  }
  if (SMBAnimalGroundEnemyUpdate__vRightGravity == '\0') {
    iVar7 = __cxa_guard_acquire(&SMBAnimalGroundEnemyUpdate__vRightGravity);
    if (iVar7 != 0) {
      SMBAnimalGroundEnemyUpdate__vRightGravity._0_4_ = 0x44098000;
      SMBAnimalGroundEnemyUpdate__vRightGravity._4_4_ = 0;
      __cxa_guard_release(&SMBAnimalGroundEnemyUpdate__vRightGravity);
      __cxa_atexit(Vector2__Vector2, &SMBAnimalGroundEnemyUpdate__vRightGravity, &__dso_handle);
    }
  }
  if (*(long *)(arg1 + 400) != 0) {
    if (*(int *)(arg1 + 0x218) != 1) {
      uVar8 = 0;
      lVar9 = (long)*(int *)(arg1 + 0x214) * 0x370 + 0xa8 + *(long *)(arg1 + 0x230);
      uVar4 = *(ushort *)(lVar9 + 0x28);
      if (uVar4 != 0) {
        uVar8 = GetRandomINT(0, uVar4 - 1);
      }
      *(uint32_t *)(lVar9 + 0x50) = uVar8;
      *(uint32_t *)(arg1 + 0x220) = 0;
      uVar8 = *(uint32_t *)((long)*(int *)(arg1 + 0x214) * 0x370 + *(long *)(arg1 + 0x230) + 0xf8);
      *(uint32_t *)(arg1 + 0x218) = 1;
      *(uint32_t *)(arg1 + 0x228) = 1;
      *(uint32_t *)(arg1 + 0x21c) = uVar8;
    }
    self = (Vector2 *)(arg1 + 0x14c);
    *(uint32_t *)(arg1 + 0xb8) = 0;
    *(uint32_t *)(arg1 + 0xbc) = 0;
    iVar7 = Vector2__operator_eq(self, (Vector2 *)&SMBAnimalGroundEnemyUpdate__vUpGravity);
    bVar10 = 1;
    if (iVar7 == 0) {
      iVar7 = Vector2__operator_eq(self, (Vector2 *)&SMBAnimalGroundEnemyUpdate__vDownGravity);
      bVar10 = 2;
      if (iVar7 == 0) {
        iVar7 = Vector2__operator_eq(self, (Vector2 *)&SMBAnimalGroundEnemyUpdate__vLeftGravity);
        bVar10 = 4;
        if (iVar7 == 0) {
          iVar7 = Vector2__operator_eq(self, (Vector2 *)&SMBAnimalGroundEnemyUpdate__vRightGravity);
          bVar10 = ~-(iVar7 == 0) & 8;
        }
      }
    }
    iVar7 = IsStickableTile(uVar3, arg1 + 0xa0, bVar10, (TileCollisionInfo *)(arg1 + 0x170));
    if (iVar7 == 0) {
      *(uint *)(arg1 + 0x110) = *(uint *)(arg1 + 0x110) ^ DAT_005be6f0 /* R:u32=2147483648 */;
    } else {
      if (*(int *)(arg1 + 400) == 2) {
        local_68 = 0;
        local_64 = 0xc4098000;
        Vector2__operator_assign(self, (Vector2 *)&local_68);
        *(uint32_t *)(arg1 + 0xd8) = 0;
        *(uint *)(arg1 + 0xb8) = uVar3;
      } else if (*(int *)(arg1 + 400) == 1) {
        local_58 = 0;
        local_54 = 0x44098000;
        Vector2__operator_assign(self, (Vector2 *)&local_58);
        uVar5 = DAT_005be6f0 /* R:u32=2147483648 */;
        *(uint32_t *)(arg1 + 0xd8) = 0x40490fdb;
        *(uint *)(arg1 + 0xb8) = uVar5 ^ uVar3;
      }
      if (*(int *)(arg1 + 0x194) == 4) {
        local_48 = 0xc4098000;
        local_44 = 0;
        Vector2__operator_assign(self, (Vector2 *)&local_48);
        uVar5 = DAT_005be6f0 /* R:u32=2147483648 */;
        *(uint32_t *)(arg1 + 0xd8) = 0xbfc90fdb;
        *(uint *)(arg1 + 0xbc) = uVar5 ^ uVar3;
      } else if (*(int *)(arg1 + 0x194) == 8) {
        local_34 = 0;
        local_38 = 0x44098000;
        Vector2__operator_assign(self, (Vector2 *)&local_38);
        *(uint32_t *)(arg1 + 0xd8) = 0x3fc90fdb;
        *(uint *)(arg1 + 0xbc) = uVar3;
      }
    }
    goto LAB_004873b1;
  }
  if (*(int *)(arg1 + 0x1e0) == 2) {
    if (*(float *)(arg1 + 0xb8) <= 0.0) {
      iVar7 = 0;
      if (*(float *)(arg1 + 0xb8) < 0.0) {
        iVar7 = 8;
        local_f8 = CONCAT44(
            DAT_005be6e4 /* R:0.5f */ * TileLevel__fLevelGridWH + *(float *)(arg1 + 0x1ec) +
                DAT_005c17d8 /* R:-0.009999999776482582f */,
            (*(float *)(arg1 + 0x1e8) - DAT_005be6e4 /* R:0.5f */ * TileLevel__fLevelGridWH) -
                fVar1);
      }
    } else {
      iVar7 = 4;
      local_f8 = CONCAT44(DAT_005be6e4 /* R:0.5f */ * TileLevel__fLevelGridWH +
                              *(float *)(arg1 + 500) + DAT_005c17d8 /* R:-0.009999999776482582f */,
                          fVar1 + *(float *)(arg1 + 0x1f0) +
                              DAT_005be6e4 /* R:0.5f */ * TileLevel__fLevelGridWH);
    }
    local_e8 = 0;
    local_e4 = 0;
    Vector2__operator_assign((Vector2 *)(arg1 + 0xb8), (Vector2 *)&local_e8);
  LAB_00487363:
    iVar6 = *(int *)(arg1 + 0x1e4);
    if (iVar6 != 4)
      goto LAB_00487372;
  LAB_00487827:
    if (*(float *)(arg1 + 0xbc) <= 0.0) {
      if (*(float *)(arg1 + 0xbc) < 0.0) {
        iVar7 = 1;
        local_f8 = CONCAT44(
            (*(float *)(arg1 + 0x1fc) - DAT_005be6e4 /* R:0.5f */ * TileLevel__fLevelGridWH) -
                fVar2,
            DAT_005be6e4 /* R:0.5f */ * TileLevel__fLevelGridWH + *(float *)(arg1 + 0x1f8) +
                DAT_005c17d8 /* R:-0.009999999776482582f */);
      }
    } else {
      iVar7 = 2;
      local_f8 = CONCAT44(
          fVar2 + *(float *)(arg1 + 0x204) + DAT_005be6e4 /* R:0.5f */ * TileLevel__fLevelGridWH,
          DAT_005be6e4 /* R:0.5f */ * TileLevel__fLevelGridWH + *(float *)(arg1 + 0x200) +
              DAT_005c17d8 /* R:-0.009999999776482582f */);
    }
    local_c8 = 0;
    local_c4 = 0;
    Vector2__operator_assign((Vector2 *)(arg1 + 0xb8), (Vector2 *)&local_c8);
  } else {
    iVar7 = 0;
    if (*(int *)(arg1 + 0x1e0) != 1)
      goto LAB_00487363;
    if (*(float *)(arg1 + 0xb8) <= 0.0) {
      if (*(float *)(arg1 + 0xb8) < 0.0) {
        iVar7 = 8;
        local_f8 = CONCAT44(
            (DAT_005c07b0 /* R:0.009999999776482582f */ + *(float *)(arg1 + 0x1ec)) -
                DAT_005be6e4 /* R:0.5f */ * TileLevel__fLevelGridWH,
            (*(float *)(arg1 + 0x1e8) - DAT_005be6e4 /* R:0.5f */ * TileLevel__fLevelGridWH) -
                fVar1);
      }
    } else {
      iVar7 = 4;
      local_f8 = CONCAT44(
          (*(float *)(arg1 + 500) - DAT_005be6e4 /* R:0.5f */ * TileLevel__fLevelGridWH) -
              DAT_005c07b0 /* R:0.009999999776482582f */,
          fVar1 + *(float *)(arg1 + 0x1f0) + DAT_005be6e4 /* R:0.5f */ * TileLevel__fLevelGridWH);
    }
    local_d8 = 0;
    local_d4 = 0;
    Vector2__operator_assign((Vector2 *)(arg1 + 0xb8), (Vector2 *)&local_d8);
    iVar6 = *(int *)(arg1 + 0x1e4);
    if (iVar6 == 4)
      goto LAB_00487827;
  LAB_00487372:
    if (iVar6 == 8) {
      if (*(float *)(arg1 + 0xbc) <= 0.0) {
        if (*(float *)(arg1 + 0xbc) < 0.0) {
          iVar7 = 1;
          local_f8 = CONCAT44(
              (*(float *)(arg1 + 0x1fc) - DAT_005be6e4 /* R:0.5f */ * TileLevel__fLevelGridWH) -
                  fVar2,
              (DAT_005c07b0 /* R:0.009999999776482582f */ + *(float *)(arg1 + 0x1f8)) -
                  DAT_005be6e4 /* R:0.5f */ * TileLevel__fLevelGridWH);
        }
      } else {
        iVar7 = 2;
        local_f8 = CONCAT44(
            fVar2 + *(float *)(arg1 + 0x204) + DAT_005be6e4 /* R:0.5f */ * TileLevel__fLevelGridWH,
            (DAT_005c07b0 /* R:0.009999999776482582f */ + *(float *)(arg1 + 0x200)) -
                DAT_005be6e4 /* R:0.5f */ * TileLevel__fLevelGridWH);
      }
      local_b8 = 0;
      local_b4 = 0;
      Vector2__operator_assign((Vector2 *)(arg1 + 0xb8), (Vector2 *)&local_b8);
    }
  }
  if (iVar7 == 2) {
    local_a8 = 0;
    local_a4 = 0xc4098000;
    Vector2__operator_assign((Vector2 *)(arg1 + 0x14c), (Vector2 *)&local_a8);
  } else if (iVar7 == 1) {
    local_98 = 0;
    local_94 = 0x44098000;
    Vector2__operator_assign((Vector2 *)(arg1 + 0x14c), (Vector2 *)&local_98);
  } else if (iVar7 == 8) {
    local_88 = 0x44098000;
    local_84 = 0;
    Vector2__operator_assign((Vector2 *)(arg1 + 0x14c), (Vector2 *)&local_88);
  } else if (iVar7 == 4) {
    local_78 = 0xc4098000;
    local_74 = 0;
    Vector2__operator_assign((Vector2 *)(arg1 + 0x14c), (Vector2 *)&local_78);
  }
LAB_004873b1:
  Vector2__operator_plus_assign((Vector2 *)(arg1 + 0xec), (Vector2 *)(arg1 + 0x14c));
  Vector2__operator_assign((Vector2 *)(arg1 + 0xa0), (Vector2 *)&local_f8);
  if (*(float *)(arg1 + 0x110) <= 0.0) {
    if (*(float *)(arg1 + 0x110) < 0.0) {
      *(uint *)(arg1 + 0xd0) = *(uint *)(arg1 + 0xd0) & DAT_005be880 /* R:u32=2147483647 */ ^
                               DAT_005be6f0 /* R:u32=2147483648 */;
    }
  } else {
    *(uint *)(arg1 + 0xd0) = *(uint *)(arg1 + 0xd0) & DAT_005be880 /* R:u32=2147483647 */;
  }
  *(uint64_t *)(arg1 + 0x1c0) = *(uint64_t *)(arg1 + 0x170);
  *(uint64_t *)(arg1 + 0x1c8) = *(uint64_t *)(arg1 + 0x178);
  *(uint64_t *)(arg1 + 0x1d0) = *(uint64_t *)(arg1 + 0x180);
  *(uint64_t *)(arg1 + 0x1d8) = *(uint64_t *)(arg1 + 0x188);
  *(uint32_t *)(arg1 + 0x1e0) = *(uint32_t *)(arg1 + 400);
  *(uint32_t *)(arg1 + 0x1e4) = *(uint32_t *)(arg1 + 0x194);
  Vector2__operator_assign((Vector2 *)(arg1 + 0x1e8), (Vector2 *)(arg1 + 0x198));
  Vector2__operator_assign((Vector2 *)(arg1 + 0x1f0), (Vector2 *)(arg1 + 0x1a0));
  Vector2__operator_assign((Vector2 *)(arg1 + 0x1f8), (Vector2 *)(arg1 + 0x1a8));
  Vector2__operator_assign((Vector2 *)(arg1 + 0x200), (Vector2 *)(arg1 + 0x1b0));
  *(uint32_t *)(arg1 + 0x208) = *(uint32_t *)(arg1 + 0x1b8);
  return;
}

/* ======================================================================
 * SMBBooUpdate  (Ghidra `SMBBooUpdate` @ 00487d60)
 * Signature: uint8_t SMBBooUpdate(void)
 * Calls: `Apply2DPhysics`, `GSuperMeatBoy__getChar`, `GetRandomINT`, `SMBPalette__DisableFlags`, `SMBPalette__EnableFlags`, `Vector2__operator_div_assign__005be2c0`, `Vector2__operator_minus__005be180`, `Vector2__operator_mul__005be200`, `Vector2__operator_mul_assign__005be220`, `Vector2__operator_plus_assign`
 * Called by: `SMBAnimal__Update`
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SMBBooUpdate(SceneObject2D *arg1)

{
  ushort uVar1;
  GSuperMeatBoy *self;
  int iVar2;
  uint32_t uVar3;
  long lVar4;
  float fVar5;
  float local_58;
  float local_54;
  Vector2 local_48[16];
  Vector2 local_38[16];
  Vector2 local_28[24];

  if (*(int *)(arg1 + 0x218) == 9) {
    return;
  }
  SMBPalette__EnableFlags(GSuperMeatBoy__pLevelPalette, 4);
  SMBPalette__DisableFlags(GSuperMeatBoy__pLevelPalette, 0x1b);
  Apply2DPhysics(arg1, fOneFrameTimeStep);
  self = SuperMeatBoy;
  *(uint *)(arg1 + 0xd0) = ~-(uint)(*(float *)(arg1 + 0xb8) < 0.0) & DAT_005c07a4 /* R:-1.0f */ |
                           DAT_005be894 /* R:1.0f */ & -(uint)(*(float *)(arg1 + 0xb8) < 0.0);
  lVar4 = GSuperMeatBoy__getChar(self, 0);
  Vector2__operator_minus__005be180((Vector2 *)&local_58, (Vector2 *)(lVar4 + 0xa0));
  fVar5 = (float)Vector2__LengthSq((Vector2 *)&local_58);
  if (fVar5 <= DAT_005c17dc /* R:160000.0f */) {
    if (0.0 < fVar5) {
      Vector2__operator_div_assign__005be2c0((Vector2 *)&local_58, SQRT(fVar5));
    }
    if (fVar5 <= DAT_005c17e0 /* R:22500.0f */) {
      if (*(int *)(arg1 + 0x218) != 8) {
        uVar3 = 0;
        lVar4 = (long)*(int *)(arg1 + 0x214) * 0x370 + 0x310 + *(long *)(arg1 + 0x230);
        uVar1 = *(ushort *)(lVar4 + 0x28);
        if (uVar1 != 0) {
          uVar3 = GetRandomINT(0, uVar1 - 1);
        }
        *(uint32_t *)(lVar4 + 0x50) = uVar3;
        *(uint32_t *)(arg1 + 0x220) = 0;
        uVar3 =
            *(uint32_t *)((long)*(int *)(arg1 + 0x214) * 0x370 + *(long *)(arg1 + 0x230) + 0x360);
        *(uint32_t *)(arg1 + 0x218) = 8;
        *(uint32_t *)(arg1 + 0x228) = 1;
        *(uint32_t *)(arg1 + 0x21c) = uVar3;
      }
      Vector2__operator_mul__005be200(local_48, DAT_005be890 /* R:200.0f */);
      Vector2__operator_plus_assign((Vector2 *)(arg1 + 0xec), local_48);
    } else {
      if (*(int *)(arg1 + 0x218) != 7) {
        uVar3 = 0;
        lVar4 = (long)*(int *)(arg1 + 0x214) * 0x370 + 0x2b8 + *(long *)(arg1 + 0x230);
        uVar1 = *(ushort *)(lVar4 + 0x28);
        if (uVar1 != 0) {
          uVar3 = GetRandomINT(0, uVar1 - 1);
        }
        *(uint32_t *)(lVar4 + 0x50) = uVar3;
        *(uint32_t *)(arg1 + 0x220) = 0;
        uVar3 =
            *(uint32_t *)((long)*(int *)(arg1 + 0x214) * 0x370 + *(long *)(arg1 + 0x230) + 0x308);
        *(uint32_t *)(arg1 + 0x218) = 7;
        *(uint32_t *)(arg1 + 0x228) = 1;
        *(uint32_t *)(arg1 + 0x21c) = uVar3;
      }
      Vector2__operator_mul__005be200(local_38, DAT_005c1400 /* R:100.0f */);
      Vector2__operator_plus_assign((Vector2 *)(arg1 + 0xec), local_38);
    }
    *(uint32_t *)(arg1 + 0x210) = 5;
    goto LAB_00487ebc;
  }
  iVar2 = *(int *)(arg1 + 0x210);
  if (iVar2 == 5) {
    *(uint32_t *)(arg1 + 0x210) = 2;
  LAB_00488132:
    Vector2__operator_mul_assign__005be220((Vector2 *)(arg1 + 0xb8),
                                           DAT_005c17e4 /* R:0.8999999761581421f */);
    if (_DAT_005bff44 /* R:5.0f */ < *(float *)(arg1 + 0x80)) {
      iVar2 = *(int *)(arg1 + 0x210);
      goto LAB_00487e3f;
    }
    *(uint32_t *)(arg1 + 0x210) = 1;
  LAB_0048816b:
    Vector2__operator_mul__005be200(local_28, _DAT_005bfba8 /* R:0.10000000149011612f */);
    Vector2__operator_plus_assign((Vector2 *)(arg1 + 0xec), local_28);
    if (_DAT_005bfd00 /* R:10.0f */ < *(float *)(arg1 + 0x80)) {
      *(uint32_t *)(arg1 + 0x210) = 2;
    }
  } else {
    if (iVar2 == 2)
      goto LAB_00488132;
  LAB_00487e3f:
    if (iVar2 == 1)
      goto LAB_0048816b;
  }
  if (*(int *)(arg1 + 0x218) != 0) {
    uVar3 = 0;
    lVar4 = (long)*(int *)(arg1 + 0x214) * 0x370 + 0x50 + *(long *)(arg1 + 0x230);
    uVar1 = *(ushort *)(lVar4 + 0x28);
    if (uVar1 != 0) {
      uVar3 = GetRandomINT(0, uVar1 - 1);
    }
    *(uint32_t *)(lVar4 + 0x50) = uVar3;
    *(uint32_t *)(arg1 + 0x220) = 0;
    uVar3 = *(uint32_t *)((long)*(int *)(arg1 + 0x214) * 0x370 + *(long *)(arg1 + 0x230) + 0xa0);
    *(uint32_t *)(arg1 + 0x218) = 0;
    *(uint32_t *)(arg1 + 0x228) = 1;
    *(uint32_t *)(arg1 + 0x21c) = uVar3;
  }
LAB_00487ebc:
  if (((0.0 < local_58) && (*(float *)(arg1 + 0xb8) <= 0.0 && *(float *)(arg1 + 0xb8) != 0.0)) ||
      ((local_58 < 0.0 && (0.0 < *(float *)(arg1 + 0xb8))))) {
    *(float *)(arg1 + 0xec) = DAT_005c17e8 /* R:4.0f */ * *(float *)(arg1 + 0xec);
  }
  if (((local_54 <= 0.0) || (0.0 < *(float *)(arg1 + 0xbc) || *(float *)(arg1 + 0xbc) == 0.0)) &&
      ((0.0 <= local_54 || (*(float *)(arg1 + 0xbc) <= 0.0)))) {
    return;
  }
  *(float *)(arg1 + 0xf0) = DAT_005c17e8 /* R:4.0f */ * *(float *)(arg1 + 0xf0);
  return;
}

/* ======================================================================
 * SMBHellBossBoyUpdate  (Ghidra `SMBHellBossBoyUpdate` @ 004886e0)
 * Signature: uint8_t SMBHellBossBoyUpdate(void)
 * Calls: `Apply2DPhysics`, `GetRandomINT`, `SMBPalette__DisableFlags`, `SMBPalette__EnableFlags`, `TileLevel__TileCollision`
 * Called by: `SMBAnimal__Update`
 */
void SMBHellBossBoyUpdate(SceneObject2D *arg1)

{
  ushort uVar1;
  long *plVar2;
  int iVar3;
  uint32_t uVar4;
  long lVar5;

  SMBPalette__EnableFlags(GSuperMeatBoy__pLevelPalette, 4);
  SMBPalette__DisableFlags(GSuperMeatBoy__pLevelPalette, 0x1b);
  Apply2DPhysics(arg1, fOneFrameTimeStep);
  lVar5 = SuperMeatBoy;
  *(float *)(arg1 + 0xf0) = *(float *)(arg1 + 0xf0) - DAT_005c0060 /* R:350.0f */;
  TileLevel__TileCollision(*(TileLevel **)(lVar5 + 0x40), arg1,
                           (TileCollisionInfo *)(arg1 + 0x170));
  if (*(int *)(arg1 + 400) == 2) {
    if (*(int *)(arg1 + 0x218) != 0) {
      uVar4 = 0;
      lVar5 = (long)*(int *)(arg1 + 0x214) * 0x370 + 0x50 + *(long *)(arg1 + 0x230);
      uVar1 = *(ushort *)(lVar5 + 0x28);
      if (uVar1 != 0) {
        uVar4 = GetRandomINT(0, uVar1 - 1);
      }
      *(uint32_t *)(lVar5 + 0x50) = uVar4;
      *(uint32_t *)(arg1 + 0x220) = 0;
      uVar4 = *(uint32_t *)((long)*(int *)(arg1 + 0x214) * 0x370 + *(long *)(arg1 + 0x230) + 0xa0);
      *(uint32_t *)(arg1 + 0x218) = 0;
      *(uint32_t *)(arg1 + 0x228) = 1;
      *(uint32_t *)(arg1 + 0x21c) = uVar4;
    }
  } else if (*(int *)(arg1 + 0x218) != 4) {
    uVar4 = 0;
    lVar5 = (long)*(int *)(arg1 + 0x214) * 0x370 + 0x1b0 + *(long *)(arg1 + 0x230);
    uVar1 = *(ushort *)(lVar5 + 0x28);
    if (uVar1 != 0) {
      uVar4 = GetRandomINT(0, uVar1 - 1);
    }
    *(uint32_t *)(lVar5 + 0x50) = uVar4;
    *(uint32_t *)(arg1 + 0x220) = 0;
    uVar4 = *(uint32_t *)((long)*(int *)(arg1 + 0x214) * 0x370 + *(long *)(arg1 + 0x230) + 0x200);
    *(uint32_t *)(arg1 + 0x218) = 4;
    *(uint32_t *)(arg1 + 0x228) = 1;
    *(uint32_t *)(arg1 + 0x21c) = uVar4;
  }
  plVar2 = CurrentSMBBoss;
  lVar5 = *(long *)(arg1 + 0x48);
  *(uint32_t *)(lVar5 + 0x50) = *(uint32_t *)(arg1 + 0xa0);
  *(uint32_t *)(lVar5 + 0x60) = *(uint32_t *)(arg1 + 0xa4);
  if (plVar2 != (long *)0x0) {
    iVar3 = (**(code **)(*plVar2 + 0x28))();
    if (iVar3 == 1) {
      if (*(int *)(arg1 + 0x218) != 5) {
        uVar4 = 0;
        lVar5 = (long)*(int *)(arg1 + 0x214) * 0x370 + 0x208 + *(long *)(arg1 + 0x230);
        uVar1 = *(ushort *)(lVar5 + 0x28);
        if (uVar1 != 0) {
          uVar4 = GetRandomINT(0, uVar1 - 1);
        }
        *(uint32_t *)(lVar5 + 0x50) = uVar4;
        *(uint32_t *)(arg1 + 0x220) = 0;
        uVar4 = *(uint32_t *)((long)*(int *)(arg1 + 0x214) * 0x370 + *(long *)(arg1 + 0x230) + 600);
        *(uint32_t *)(arg1 + 0x218) = 5;
        *(uint32_t *)(arg1 + 0x228) = 1;
        *(uint32_t *)(arg1 + 0x21c) = uVar4;
      }
      if (*(int *)(arg1 + 0x210) != 3) {
        *(uint32_t *)(arg1 + 0x210) = 3;
        *(uint32_t *)(arg1 + 0x11c) = 0;
        *(uint32_t *)(arg1 + 0x120) = 0;
        return;
      }
    }
  }
  return;
}

/* ======================================================================
 * SMBAnimalAirCritterUpdate  (Ghidra `SMBAnimalAirCritterUpdate` @ 00488970)
 * Signature: uint8_t SMBAnimalAirCritterUpdate(void)
 * Calls: `Apply2DPhysics`, `GSuperMeatBoy__getChar`, `GetRandomINT`, `SMBPalette__DisableFlags`, `SMBPalette__EnableFlags`, `SMBPalette__ObstacleCollision`, `TileLevel__TileCollision`, `Vector2__operator_minus__005be180`
 * Called by: `SMBAnimal__Update`
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SMBAnimalAirCritterUpdate(SceneObject2D *arg1)

{
  float fVar1;
  ushort uVar2;
  SMBPalette *self;
  GSuperMeatBoy *pGVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint32_t uVar7;
  long lVar8;
  float fVar9;
  Vector2 local_28[24];

  SMBPalette__EnableFlags(GSuperMeatBoy__pLevelPalette, 4);
  SMBPalette__DisableFlags(GSuperMeatBoy__pLevelPalette, 0x1b);
  Apply2DPhysics(arg1, fOneFrameTimeStep);
  pGVar3 = SuperMeatBoy;
  *(float *)(arg1 + 0xf0) = *(float *)(arg1 + 0xf0) - _DAT_005c17d4 /* R:550.0f */;
  GSuperMeatBoy__getChar(pGVar3, 0);
  Vector2__operator_minus__005be180(local_28, (Vector2 *)(arg1 + 0xa0));
  fVar9 = (float)Vector2__LengthSq(local_28);
  iVar4 = *(int *)(arg1 + 400);
  TileLevel__TileCollision(*(TileLevel **)(SuperMeatBoy + 0x40), arg1,
                           (TileCollisionInfo *)(arg1 + 0x170));
  if (*(float *)(arg1 + 0x118) <= fVar9) {
    if (iVar4 != 0) {
      *(uint32_t *)(arg1 + 0xb8) = 0;
    }
    if (*(int *)(arg1 + 0x210) == 0) {
      fVar9 = *(float *)(arg1 + 0x110);
      goto LAB_00488a75;
    }
  } else {
    if (*(float *)(arg1 + 0xb8) == 0.0) {
      if (*(int *)(arg1 + 0x214) == 0x11) {
        iVar6 = GetRandomINT(0x14, 0x19);
        *(uint *)(arg1 + 0x110) = (uint)(float)iVar6 ^ DAT_005be6f0 /* R:u32=2147483648 */;
        iVar5 = GetRandomINT(200);
        iVar6 = *(int *)(arg1 + 0x214);
        *(float *)(arg1 + 0x114) = (float)iVar5;
      LAB_00488e14:
        if (iVar6 == 0x11) {
          *(uint32_t *)(arg1 + 0x118) = 0x47742400;
          goto LAB_00488a3a;
        }
      } else {
        iVar5 = GetRandomINT(0x96);
        iVar6 = *(int *)(arg1 + 0x214);
        *(float *)(arg1 + 0x110) = (float)iVar5;
        if (1 < iVar6 - 6U)
          goto LAB_00488e14;
        *(float *)(arg1 + 0x110) = (float)iVar5 * DAT_005be6e8 /* R:0.25f */;
      }
      iVar6 = GetRandomINT(100);
      *(float *)(arg1 + 0x118) = (float)iVar6 * (float)iVar6;
    }
  LAB_00488a3a:
    if (iVar4 == 2) {
      fVar1 = *(float *)(arg1 + 0xa0);
      lVar8 = GSuperMeatBoy__getChar(SuperMeatBoy, 0);
      fVar9 = *(float *)(arg1 + 0x110);
      if (*(float *)(lVar8 + 0xa0) <= fVar1) {
        *(float *)(arg1 + 0xb8) = fVar9;
      } else {
        *(uint *)(arg1 + 0xb8) = DAT_005be6f0 /* R:u32=2147483648 */ ^ (uint)fVar9;
      }
    } else {
      fVar9 = *(float *)(arg1 + 0x110);
    }
    if (*(int *)(arg1 + 0x210) != 0) {
      *(uint32_t *)(arg1 + 0x210) = 0;
      *(uint32_t *)(arg1 + 0x11c) = 0;
      *(uint32_t *)(arg1 + 0x120) = 0;
    }
  LAB_00488a75:
    pGVar3 = SuperMeatBoy;
    *(float *)(arg1 + 0xbc) = fVar9 + _DAT_005bff44 /* R:5.0f */;
    fVar9 = *(float *)(arg1 + 0xa0);
    lVar8 = GSuperMeatBoy__getChar(pGVar3, 0);
    if (*(float *)(lVar8 + 0xa0) <= fVar9) {
      iVar4 = *(int *)(arg1 + 400);
      *(uint32_t *)(arg1 + 0xb8) = *(uint32_t *)(arg1 + 0x110);
      goto joined_r0x00488d43;
    }
    *(uint *)(arg1 + 0xb8) = *(uint *)(arg1 + 0x110) ^ DAT_005be6f0 /* R:u32=2147483648 */;
  }
  iVar4 = *(int *)(arg1 + 400);
joined_r0x00488d43:
  if (iVar4 == 2) {
    if (*(int *)(arg1 + 0x218) != 0) {
      uVar7 = 0;
      lVar8 = (long)*(int *)(arg1 + 0x214) * 0x370 + 0x50 + *(long *)(arg1 + 0x230);
      uVar2 = *(ushort *)(lVar8 + 0x28);
      if (uVar2 != 0) {
        uVar7 = GetRandomINT(0, uVar2 - 1);
      }
      *(uint32_t *)(lVar8 + 0x50) = uVar7;
      *(uint32_t *)(arg1 + 0x220) = 0;
      uVar7 = *(uint32_t *)((long)*(int *)(arg1 + 0x214) * 0x370 + *(long *)(arg1 + 0x230) + 0xa0);
      *(uint32_t *)(arg1 + 0x218) = 0;
      *(uint32_t *)(arg1 + 0x228) = 1;
      *(uint32_t *)(arg1 + 0x21c) = uVar7;
    }
  } else if (*(float *)(arg1 + 0xbc) <= 0.0) {
    if ((*(float *)(arg1 + 0xbc) < 0.0) && (*(int *)(arg1 + 0x218) != 4)) {
      uVar7 = 0;
      lVar8 = (long)*(int *)(arg1 + 0x214) * 0x370 + 0x1b0 + *(long *)(arg1 + 0x230);
      uVar2 = *(ushort *)(lVar8 + 0x28);
      if (uVar2 != 0) {
        uVar7 = GetRandomINT(0, uVar2 - 1);
      }
      *(uint32_t *)(lVar8 + 0x50) = uVar7;
      *(uint32_t *)(arg1 + 0x220) = 0;
      uVar7 = *(uint32_t *)((long)*(int *)(arg1 + 0x214) * 0x370 + *(long *)(arg1 + 0x230) + 0x200);
      *(uint32_t *)(arg1 + 0x218) = 4;
      *(uint32_t *)(arg1 + 0x228) = 1;
      *(uint32_t *)(arg1 + 0x21c) = uVar7;
    }
  } else if (*(int *)(arg1 + 0x218) != 3) {
    uVar7 = 0;
    lVar8 = (long)*(int *)(arg1 + 0x214) * 0x370 + 0x158 + *(long *)(arg1 + 0x230);
    uVar2 = *(ushort *)(lVar8 + 0x28);
    if (uVar2 != 0) {
      uVar7 = GetRandomINT(0, uVar2 - 1);
    }
    *(uint32_t *)(lVar8 + 0x50) = uVar7;
    *(uint32_t *)(arg1 + 0x220) = 0;
    uVar7 = *(uint32_t *)((long)*(int *)(arg1 + 0x214) * 0x370 + *(long *)(arg1 + 0x230) + 0x1a8);
    *(uint32_t *)(arg1 + 0x218) = 3;
    *(uint32_t *)(arg1 + 0x228) = 1;
    *(uint32_t *)(arg1 + 0x21c) = uVar7;
  }
  self = GSuperMeatBoy__pLevelPalette;
  lVar8 = *(long *)(arg1 + 0x48);
  *(uint32_t *)(lVar8 + 0x50) = *(uint32_t *)(arg1 + 0xa0);
  *(uint32_t *)(lVar8 + 0x60) = *(uint32_t *)(arg1 + 0xa4);
  iVar4 = SMBPalette__ObstacleCollision(self, arg1, (Bounds *)0x0);
  if (iVar4 == 1) {
    if (*(int *)(arg1 + 0x218) != 5) {
      uVar7 = 0;
      lVar8 = (long)*(int *)(arg1 + 0x214) * 0x370 + 0x208 + *(long *)(arg1 + 0x230);
      uVar2 = *(ushort *)(lVar8 + 0x28);
      if (uVar2 != 0) {
        uVar7 = GetRandomINT(0, uVar2 - 1);
      }
      *(uint32_t *)(lVar8 + 0x50) = uVar7;
      *(uint32_t *)(arg1 + 0x220) = 0;
      uVar7 = *(uint32_t *)((long)*(int *)(arg1 + 0x214) * 0x370 + *(long *)(arg1 + 0x230) + 600);
      *(uint32_t *)(arg1 + 0x218) = 5;
      *(uint32_t *)(arg1 + 0x228) = 1;
      *(uint32_t *)(arg1 + 0x21c) = uVar7;
    }
    if (*(int *)(arg1 + 0x210) != 3) {
      *(uint32_t *)(arg1 + 0x210) = 3;
      *(uint32_t *)(arg1 + 0x11c) = 0;
      *(uint32_t *)(arg1 + 0x120) = 0;
    }
  }
  if (*(float *)(arg1 + 0xb8) < 0.0) {
    *(uint *)(arg1 + 0xd0) = *(uint *)(arg1 + 0xd0) & DAT_005be880 /* R:u32=2147483647 */ ^
                             DAT_005be6f0 /* R:u32=2147483648 */;
  } else if (0.0 < *(float *)(arg1 + 0xb8)) {
    *(uint *)(arg1 + 0xd0) = *(uint *)(arg1 + 0xd0) & DAT_005be880 /* R:u32=2147483647 */;
  }
  if (*(int *)(arg1 + 0x218) == 0) {
    fVar9 = *(float *)(arg1 + 0xa0);
    lVar8 = GSuperMeatBoy__getChar(SuperMeatBoy, 0);
    if (*(float *)(lVar8 + 0xa0) <= fVar9 && fVar9 != *(float *)(lVar8 + 0xa0)) {
      *(uint *)(arg1 + 0xd0) = *(uint *)(arg1 + 0xd0) & DAT_005be880 /* R:u32=2147483647 */ ^
                               DAT_005be6f0 /* R:u32=2147483648 */;
      return;
    }
    *(uint *)(arg1 + 0xd0) = *(uint *)(arg1 + 0xd0) & DAT_005be880 /* R:u32=2147483647 */;
    return;
  }
  return;
}

/* ======================================================================
 * SMBBossGroundCritterUpdate  (Ghidra `SMBBossGroundCritterUpdate` @ 00489080)
 * Signature: uint8_t SMBBossGroundCritterUpdate(void)
 * Calls: `Apply2DPhysics`, `GetRandomINT`, `SMBPalette__DisableFlags`, `SMBPalette__EnableFlags`, `TileLevel__TileCollision`, `Vector2__operator_assign`, `Vector2__operator_minus__005be180`
 * Called by: `SMBAnimal__Update`
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SMBBossGroundCritterUpdate(SceneObject2D *arg1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint32_t uVar4;
  long lVar5;
  float fVar6;
  Vector2 aVStack_48[16];
  Vector2 local_38[16];
  Vector2 local_28[16];

  SMBPalette__EnableFlags(GSuperMeatBoy__pLevelPalette, 4);
  SMBPalette__DisableFlags(GSuperMeatBoy__pLevelPalette, 0x1b);
  Apply2DPhysics(arg1, fOneFrameTimeStep);
  lVar5 = SuperMeatBoy;
  *(float *)(arg1 + 0xf0) = *(float *)(arg1 + 0xf0) - _DAT_005c17d4 /* R:550.0f */;
  TileLevel__TileCollision(*(TileLevel **)(lVar5 + 0x40), arg1,
                           (TileCollisionInfo *)(arg1 + 0x170));
  lVar5 = *(long *)(arg1 + 0x48);
  *(uint32_t *)(lVar5 + 0x50) = *(uint32_t *)(arg1 + 0xa0);
  *(uint32_t *)(lVar5 + 0x60) = *(uint32_t *)(arg1 + 0xa4);
  uVar2 = DAT_005be880 /* R:u32=2147483647 */;
  if (*(int *)(arg1 + 0x218) == 6) {
    if (*(int *)(arg1 + 0x210) != 5) {
      if (*(int *)(arg1 + 0x228) != 0) {
        return;
      }
      uVar4 = 0;
      lVar5 = (long)*(int *)(arg1 + 0x214) * 0x370 + 0xa8 + *(long *)(arg1 + 0x230);
      uVar1 = *(ushort *)(lVar5 + 0x28);
      if (uVar1 != 0) {
        uVar4 = GetRandomINT(0, uVar1 - 1);
      }
      *(uint32_t *)(lVar5 + 0x50) = uVar4;
      *(uint32_t *)(arg1 + 0x220) = 0;
      uVar4 = *(uint32_t *)((long)*(int *)(arg1 + 0x214) * 0x370 + *(long *)(arg1 + 0x230) + 0xf8);
      *(uint32_t *)(arg1 + 0x218) = 1;
      *(uint32_t *)(arg1 + 0x228) = 1;
      *(uint32_t *)(arg1 + 0x21c) = uVar4;
      if (*(int *)(arg1 + 0x210) == 5) {
        return;
      }
      *(uint32_t *)(arg1 + 0x210) = 5;
      *(uint32_t *)(arg1 + 0x11c) = 0;
      *(uint32_t *)(arg1 + 0x120) = 0;
      return;
    }
  } else if (*(int *)(arg1 + 0x210) != 5) {
    return;
  }
  if (*(long *)(arg1 + 400) == 0) {
    return;
  }
  iVar3 = *(int *)(arg1 + 0x224);
  if (*(float *)(arg1 + 0xa0) < *(float *)(arg1 + (long)iVar3 * 8 + 0x124) ||
      *(float *)(arg1 + 0xa0) == *(float *)(arg1 + (long)iVar3 * 8 + 0x124)) {
    *(uint32_t *)(arg1 + 0xb8) = 0x437a0000;
    *(uint *)(arg1 + 0xd0) = *(uint *)(arg1 + 0xd0) & uVar2;
  } else {
    *(uint32_t *)(arg1 + 0xb8) = 0xc37a0000;
    *(uint *)(arg1 + 0xd0) = *(uint *)(arg1 + 0xd0) & uVar2 ^ DAT_005be6f0 /* R:u32=2147483648 */;
  }
  if (iVar3 == 0) {
    Vector2__operator_minus__005be180(aVStack_48, (Vector2 *)(arg1 + 0xa0));
    fVar6 = (float)Vector2__Length(aVStack_48);
    if (fVar6 <= DAT_005c13fc /* R:20.0f */) {
      *(uint32_t *)(arg1 + 0x224) = 1;
      goto LAB_0048927c;
    }
    iVar3 = *(int *)(arg1 + 0x224);
  }
  if (iVar3 != 1) {
    return;
  }
LAB_0048927c:
  (**(code **)(*CurrentSMBBoss + 0x40))(local_38);
  Vector2__operator_assign((Vector2 *)(arg1 + 300), local_38);
  Vector2__operator_minus__005be180(local_28, (Vector2 *)(arg1 + 0xa0));
  fVar6 = (float)Vector2__Length(local_28);
  if ((fVar6 <= DAT_005be890 /* R:200.0f */) && (*(int *)(arg1 + 400) == 2)) {
    *(uint32_t *)(arg1 + 0xbc) = 0x437a0000;
  }
  return;
}

/* ======================================================================
 * SMBAnimalGroundCritterUpdate  (Ghidra `SMBAnimalGroundCritterUpdate` @ 00489390)
 * Signature: uint8_t SMBAnimalGroundCritterUpdate(void)
 * Calls: `Apply2DPhysics`, `GSuperMeatBoy__getChar`, `GetRandomINT`, `SMBAnimal__CanJumpOver`, `SMBAnimal__SetAIState`, `SMBPalette__DisableFlags`, `SMBPalette__EnableFlags`, `SMBPalette__ObstacleCollision`, `TileLevel__TileCollision`, `Vector2__operator_minus__005be180`
 * Called by: `SMBAnimal__Update`
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SMBAnimalGroundCritterUpdate(SceneObject2D *arg1)

{
  ushort uVar1;
  SMBPalette *self;
  GSuperMeatBoy *this_00;
  int iVar2;
  int iVar3;
  int iVar4;
  uint32_t uVar5;
  long lVar6;
  float fVar7;
  Vector2 local_38[16];
  Vector2 local_28[16];

  SMBPalette__EnableFlags(GSuperMeatBoy__pLevelPalette, 4);
  SMBPalette__DisableFlags(GSuperMeatBoy__pLevelPalette, 0x1b);
  Apply2DPhysics(arg1, fOneFrameTimeStep);
  this_00 = SuperMeatBoy;
  *(float *)(arg1 + 0xf0) = *(float *)(arg1 + 0xf0) - _DAT_005c17d4 /* R:550.0f */;
  GSuperMeatBoy__getChar(this_00, 0);
  Vector2__operator_minus__005be180(local_38, (Vector2 *)(arg1 + 0xa0));
  fVar7 = (float)Vector2__LengthSq(local_38);
  iVar2 = *(int *)(arg1 + 400);
  TileLevel__TileCollision(*(TileLevel **)(SuperMeatBoy + 0x40), arg1,
                           (TileCollisionInfo *)(arg1 + 0x170));
  if (*(float *)(arg1 + 0x118) <= fVar7) {
    if (iVar2 != 0) {
      *(uint32_t *)(arg1 + 0xb8) = 0;
    }
    iVar2 = *(int *)(arg1 + 0x210);
    if (iVar2 == 0) {
      *(uint32_t *)(arg1 + 0x210) = 2;
      *(uint32_t *)(arg1 + 0x11c) = 0;
      iVar4 = GetRandomINT(3, 5);
      iVar2 = *(int *)(arg1 + 0x210);
      *(float *)(arg1 + 0x120) = (float)iVar4;
    }
    if ((iVar2 == 2) && (*(float *)(arg1 + 0x120) <= *(float *)(arg1 + 0x11c) &&
                         *(float *)(arg1 + 0x11c) != *(float *)(arg1 + 0x120))) {
      *(uint32_t *)(arg1 + 0x11c) = 0;
      *(uint32_t *)(arg1 + 0x210) = 1;
      SMBAnimal__SetAIState(arg1);
    }
  } else {
    if (*(float *)(arg1 + 0xb8) == 0.0) {
      if (*(int *)(arg1 + 0x214) == 0x11) {
        iVar4 = GetRandomINT(0x14, 0x19);
        *(uint *)(arg1 + 0x110) = (uint)(float)iVar4 ^ DAT_005be6f0 /* R:u32=2147483648 */;
        iVar3 = GetRandomINT(200);
        iVar4 = *(int *)(arg1 + 0x214);
        *(float *)(arg1 + 0x114) = (float)iVar3;
      LAB_00489b14:
        if (iVar4 == 0x11) {
          *(uint32_t *)(arg1 + 0x118) = 0x47742400;
          goto LAB_00489462;
        }
      } else {
        iVar3 = GetRandomINT(0x96);
        iVar4 = *(int *)(arg1 + 0x214);
        *(float *)(arg1 + 0x110) = (float)iVar3;
        if (1 < iVar4 - 6U)
          goto LAB_00489b14;
        *(float *)(arg1 + 0x110) = (float)iVar3 * DAT_005be6e8 /* R:0.25f */;
      }
      iVar4 = GetRandomINT(100);
      *(float *)(arg1 + 0x118) = (float)iVar4 * (float)iVar4;
    }
  LAB_00489462:
    if (iVar2 == 2) {
      fVar7 = *(float *)(arg1 + 0xa0);
      lVar6 = GSuperMeatBoy__getChar(SuperMeatBoy, 0);
      if (*(float *)(lVar6 + 0xa0) <= fVar7) {
        *(uint32_t *)(arg1 + 0xb8) = *(uint32_t *)(arg1 + 0x110);
      } else {
        *(uint *)(arg1 + 0xb8) = *(uint *)(arg1 + 0x110) ^ DAT_005be6f0 /* R:u32=2147483648 */;
      }
    }
    if (*(int *)(arg1 + 0x210) != 0) {
      *(uint32_t *)(arg1 + 0x210) = 0;
      *(uint32_t *)(arg1 + 0x11c) = 0;
      *(uint32_t *)(arg1 + 0x120) = 0;
    }
  }
  if (((*(int *)(arg1 + 400) == 2) && (*(int *)(arg1 + 0x210) != 0)) &&
      (*(int *)(arg1 + 0x210) == 1)) {
    if (*(float *)(arg1 + 0x128) == *(float *)(arg1 + 0xa4)) {
      if (*(float *)(arg1 + 0x124) < *(float *)(arg1 + 0xa0) ||
          *(float *)(arg1 + 0x124) == *(float *)(arg1 + 0xa0)) {
        *(float *)(arg1 + 0xb8) =
            (float)(*(uint *)(arg1 + 0x110) ^ DAT_005be6f0 /* R:u32=2147483648 */) *
            DAT_005be6e4 /* R:0.5f */;
      } else {
        *(float *)(arg1 + 0xb8) = DAT_005be6e4 /* R:0.5f */ * *(float *)(arg1 + 0x110);
      }
      Vector2__operator_minus__005be180(local_28, (Vector2 *)(arg1 + 0xa0));
      fVar7 = (float)Vector2__LengthSq(local_28);
      if (fVar7 < DAT_005c1400 /* R:100.0f */) {
        if (*(int *)(arg1 + 0x210) != 2) {
          *(uint32_t *)(arg1 + 0x210) = 2;
          *(uint32_t *)(arg1 + 0x11c) = 0;
          iVar2 = GetRandomINT(3, 5);
          *(float *)(arg1 + 0x120) = (float)iVar2;
        }
        *(uint32_t *)(arg1 + 0xb8) = 0;
        if (*(int *)(arg1 + 0x218) != 0) {
          uVar5 = 0;
          lVar6 = (long)*(int *)(arg1 + 0x214) * 0x370 + 0x50 + *(long *)(arg1 + 0x230);
          uVar1 = *(ushort *)(lVar6 + 0x28);
          if (uVar1 != 0) {
            uVar5 = GetRandomINT(0, uVar1 - 1);
          }
          *(uint32_t *)(lVar6 + 0x50) = uVar5;
          *(uint32_t *)(arg1 + 0x220) = 0;
          uVar5 =
              *(uint32_t *)((long)*(int *)(arg1 + 0x214) * 0x370 + *(long *)(arg1 + 0x230) + 0xa0);
          *(uint32_t *)(arg1 + 0x218) = 0;
          *(uint32_t *)(arg1 + 0x228) = 1;
          *(uint32_t *)(arg1 + 0x21c) = uVar5;
        }
      }
    } else {
      *(uint32_t *)(arg1 + 0x210) = 0;
      *(uint32_t *)(arg1 + 0x11c) = 0;
      *(uint32_t *)(arg1 + 0x120) = 0;
    }
  }
  if ((*(int *)(arg1 + 0x194) == 0) ||
      ((*(long *)(arg1 + 0x188) == 0 && (*(GRIDBLOCK **)(arg1 + 0x180) == (GRIDBLOCK *)0x0)))) {
  LAB_00489658:
    iVar2 = *(int *)(arg1 + 400);
  LAB_0048965e:
    if (iVar2 == 2) {
    LAB_00489930:
      if (*(float *)(arg1 + 0xb8) == 0.0) {
        if (*(int *)(arg1 + 0x218) != 0) {
          uVar5 = 0;
          lVar6 = (long)*(int *)(arg1 + 0x214) * 0x370 + 0x50 + *(long *)(arg1 + 0x230);
          uVar1 = *(ushort *)(lVar6 + 0x28);
          if (uVar1 != 0) {
            uVar5 = GetRandomINT(0, uVar1 - 1);
          }
          *(uint32_t *)(lVar6 + 0x50) = uVar5;
          *(uint32_t *)(arg1 + 0x220) = 0;
          uVar5 =
              *(uint32_t *)((long)*(int *)(arg1 + 0x214) * 0x370 + *(long *)(arg1 + 0x230) + 0xa0);
          *(uint32_t *)(arg1 + 0x218) = 0;
          *(uint32_t *)(arg1 + 0x228) = 1;
          *(uint32_t *)(arg1 + 0x21c) = uVar5;
        }
      } else if (*(int *)(arg1 + 0x218) != 1) {
        uVar5 = 0;
        lVar6 = (long)*(int *)(arg1 + 0x214) * 0x370 + 0xa8 + *(long *)(arg1 + 0x230);
        uVar1 = *(ushort *)(lVar6 + 0x28);
        if (uVar1 != 0) {
          uVar5 = GetRandomINT(0, uVar1 - 1);
        }
        *(uint32_t *)(lVar6 + 0x50) = uVar5;
        *(uint32_t *)(arg1 + 0x220) = 0;
        uVar5 =
            *(uint32_t *)((long)*(int *)(arg1 + 0x214) * 0x370 + *(long *)(arg1 + 0x230) + 0xf8);
        *(uint32_t *)(arg1 + 0x218) = 1;
        *(uint32_t *)(arg1 + 0x228) = 1;
        *(uint32_t *)(arg1 + 0x21c) = uVar5;
      }
      goto LAB_004896ee;
    }
    fVar7 = *(float *)(arg1 + 0xbc);
    if (0.0 < fVar7) {
      if (*(int *)(arg1 + 0x218) != 2) {
        uVar5 = 0;
        lVar6 = (long)*(int *)(arg1 + 0x214) * 0x370 + 0x100 + *(long *)(arg1 + 0x230);
        uVar1 = *(ushort *)(lVar6 + 0x28);
        if (uVar1 != 0) {
          uVar5 = GetRandomINT(0, uVar1 - 1);
        }
        *(uint32_t *)(lVar6 + 0x50) = uVar5;
        *(uint32_t *)(arg1 + 0x220) = 0;
        uVar5 =
            *(uint32_t *)((long)*(int *)(arg1 + 0x214) * 0x370 + *(long *)(arg1 + 0x230) + 0x150);
        *(uint32_t *)(arg1 + 0x218) = 2;
        *(uint32_t *)(arg1 + 0x228) = 1;
        *(uint32_t *)(arg1 + 0x21c) = uVar5;
      }
      goto LAB_004896ee;
    }
  } else {
    iVar2 = SMBAnimal__CanJumpOver((SMBAnimal *)arg1, *(GRIDBLOCK **)(arg1 + 0x180));
    if ((iVar2 == 0) &&
        (iVar2 = SMBAnimal__CanJumpOver((SMBAnimal *)arg1, *(GRIDBLOCK **)(arg1 + 0x188)),
         iVar2 == 0)) {
      if (((byte)arg1[0x194] & 8) == 0) {
        *(uint32_t *)(arg1 + 0xb8) = *(uint32_t *)(arg1 + 0x110);
        goto LAB_00489658;
      }
      iVar2 = *(int *)(arg1 + 400);
      *(uint *)(arg1 + 0xb8) = *(uint *)(arg1 + 0x110) ^ DAT_005be6f0 /* R:u32=2147483648 */;
      goto LAB_0048965e;
    }
    if (((byte)arg1[0x194] & 8) == 0) {
      *(uint *)(arg1 + 0xb8) = *(uint *)(arg1 + 0x110) ^ DAT_005be6f0 /* R:u32=2147483648 */;
    } else {
      *(uint32_t *)(arg1 + 0xb8) = *(uint32_t *)(arg1 + 0x110);
    }
    fVar7 = *(float *)(arg1 + 0xbc);
    if (0.0 < fVar7)
      goto LAB_00489658;
    if (*(int *)(arg1 + 400) == 2) {
      *(uint32_t *)(arg1 + 0xbc) = 0x43960000;
      goto LAB_00489930;
    }
  }
  if ((fVar7 < 0.0) && (*(int *)(arg1 + 0x218) != 4)) {
    uVar5 = 0;
    lVar6 = (long)*(int *)(arg1 + 0x214) * 0x370 + 0x1b0 + *(long *)(arg1 + 0x230);
    uVar1 = *(ushort *)(lVar6 + 0x28);
    if (uVar1 != 0) {
      uVar5 = GetRandomINT(0, uVar1 - 1);
    }
    *(uint32_t *)(lVar6 + 0x50) = uVar5;
    *(uint32_t *)(arg1 + 0x220) = 0;
    uVar5 = *(uint32_t *)((long)*(int *)(arg1 + 0x214) * 0x370 + *(long *)(arg1 + 0x230) + 0x200);
    *(uint32_t *)(arg1 + 0x218) = 4;
    *(uint32_t *)(arg1 + 0x228) = 1;
    *(uint32_t *)(arg1 + 0x21c) = uVar5;
  }
LAB_004896ee:
  self = GSuperMeatBoy__pLevelPalette;
  lVar6 = *(long *)(arg1 + 0x48);
  *(uint32_t *)(lVar6 + 0x50) = *(uint32_t *)(arg1 + 0xa0);
  *(uint32_t *)(lVar6 + 0x60) = *(uint32_t *)(arg1 + 0xa4);
  iVar2 = SMBPalette__ObstacleCollision(self, arg1, (Bounds *)0x0);
  if (iVar2 == 1) {
    if (*(int *)(arg1 + 0x218) != 5) {
      uVar5 = 0;
      lVar6 = (long)*(int *)(arg1 + 0x214) * 0x370 + 0x208 + *(long *)(arg1 + 0x230);
      if (*(short *)(lVar6 + 0x28) != 0) {
        uVar5 = GetRandomINT(0);
      }
      *(uint32_t *)(lVar6 + 0x50) = uVar5;
      *(uint32_t *)(arg1 + 0x220) = 0;
      uVar5 = *(uint32_t *)((long)*(int *)(arg1 + 0x214) * 0x370 + *(long *)(arg1 + 0x230) + 600);
      *(uint32_t *)(arg1 + 0x218) = 5;
      *(uint32_t *)(arg1 + 0x228) = 1;
      *(uint32_t *)(arg1 + 0x21c) = uVar5;
    }
    if (*(int *)(arg1 + 0x210) != 3) {
      *(uint32_t *)(arg1 + 0x210) = 3;
      *(uint32_t *)(arg1 + 0x11c) = 0;
      *(uint32_t *)(arg1 + 0x120) = 0;
    }
  }
  if (*(float *)(arg1 + 0xb8) < 0.0) {
    *(uint *)(arg1 + 0xd0) = *(uint *)(arg1 + 0xd0) & DAT_005be880 /* R:u32=2147483647 */ ^
                             DAT_005be6f0 /* R:u32=2147483648 */;
  } else if (0.0 < *(float *)(arg1 + 0xb8)) {
    *(uint *)(arg1 + 0xd0) = *(uint *)(arg1 + 0xd0) & DAT_005be880 /* R:u32=2147483647 */;
  }
  if (*(int *)(arg1 + 0x218) == 0) {
    fVar7 = *(float *)(arg1 + 0xa0);
    lVar6 = GSuperMeatBoy__getChar(SuperMeatBoy, 0);
    if (*(float *)(lVar6 + 0xa0) <= fVar7 && fVar7 != *(float *)(lVar6 + 0xa0)) {
      *(uint *)(arg1 + 0xd0) = *(uint *)(arg1 + 0xd0) & DAT_005be880 /* R:u32=2147483647 */ ^
                               DAT_005be6f0 /* R:u32=2147483648 */;
      return;
    }
    *(uint *)(arg1 + 0xd0) = *(uint *)(arg1 + 0xd0) & DAT_005be880 /* R:u32=2147483647 */;
    return;
  }
  return;
}

/* ======================================================================
 * SMBChargerUpdate  (Ghidra `SMBChargerUpdate` @ 00489e50)
 * Signature: uint8_t SMBChargerUpdate(void)
 * Calls: `Apply2DPhysics`, `GSuperMeatBoy__getChar`, `GetRandomINT`, `SMBAnimal__CanJumpOver`, `SMBPalette__DisableFlags`, `SMBPalette__EnableFlags`, `SMBPalette__ObstacleCollision`, `TileLevel__TileCollision`, `Vector2__operator_minus__005be180`
 * Called by: `SMBAnimal__Update`
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SMBChargerUpdate(SceneObject2D *arg1)

{
  ushort uVar1;
  bool bVar2;
  SMBPalette *self;
  GSuperMeatBoy *this_00;
  int iVar3;
  int iVar4;
  uint32_t uVar5;
  int iVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  Vector2 local_48[16];
  Vector2 local_38[24];

  if (*(int *)(arg1 + 0x218) == 5) {
    return;
  }
  SMBPalette__EnableFlags(GSuperMeatBoy__pLevelPalette, 4);
  SMBPalette__DisableFlags(GSuperMeatBoy__pLevelPalette, 0x1b);
  Apply2DPhysics(arg1, fOneFrameTimeStep);
  this_00 = SuperMeatBoy;
  *(float *)(arg1 + 0xf0) = *(float *)(arg1 + 0xf0) - _DAT_005c17d4 /* R:550.0f */;
  GSuperMeatBoy__getChar(this_00, 0);
  Vector2__operator_minus__005be180(local_48, (Vector2 *)(arg1 + 0xa0));
  fVar8 = (float)Vector2__LengthSq(local_48);
  iVar3 = *(int *)(arg1 + 400);
  TileLevel__TileCollision(*(TileLevel **)(SuperMeatBoy + 0x40), arg1,
                           (TileCollisionInfo *)(arg1 + 0x170));
  if (*(float *)(arg1 + 0x118) <= fVar8) {
    bVar2 = false;
    if (iVar3 == 0)
      goto LAB_00489f6d;
    iVar3 = *(int *)(arg1 + 400);
    *(uint32_t *)(arg1 + 0xb8) = 0;
    if (iVar3 != 2)
      goto LAB_00489f7c;
  LAB_0048a2cc:
    if (*(int *)(arg1 + 0x210) == 0) {
      lVar7 = GSuperMeatBoy__getChar(SuperMeatBoy, 0);
      if (((*(float *)(lVar7 + 0xbc) <= _DAT_005c17ec /* R:150.0f */) ||
           (lVar7 = GSuperMeatBoy__getChar(SuperMeatBoy, 0),
            DAT_005be890 /* R:200.0f */ < *(float *)(lVar7 + 0xbc) ||
                DAT_005be890 /* R:200.0f */ == *(float *)(lVar7 + 0xbc))) ||
          (iVar3 = GetRandomINT(0), iVar3 < 0x4c)) {
      LAB_0048a010:
        iVar3 = *(int *)(arg1 + 400);
      } else {
        iVar4 = GetRandomINT(200);
        iVar3 = *(int *)(arg1 + 400);
        *(float *)(arg1 + 0xbc) = (float)iVar4;
      }
    LAB_0048a016:
      if (iVar3 == 0)
        goto LAB_0048a01a;
    } else if (*(int *)(arg1 + 0x210) == 1) {
      if (*(float *)(arg1 + 0x128) == *(float *)(arg1 + 0xa4)) {
        if (*(float *)(arg1 + 0x124) < *(float *)(arg1 + 0xa0) ||
            *(float *)(arg1 + 0x124) == *(float *)(arg1 + 0xa0)) {
          *(float *)(arg1 + 0xb8) =
              (float)(*(uint *)(arg1 + 0x110) ^ DAT_005be6f0 /* R:u32=2147483648 */) *
                  DAT_005be6e4 /* R:0.5f */
              + *(float *)(arg1 + 0xb8);
        } else {
          *(float *)(arg1 + 0xb8) =
              DAT_005be6e4 /* R:0.5f */ * *(float *)(arg1 + 0x110) + *(float *)(arg1 + 0xb8);
        }
        Vector2__operator_minus__005be180(local_38, (Vector2 *)(arg1 + 0xa0));
        fVar8 = (float)Vector2__LengthSq(local_38);
        if (fVar8 < DAT_005c1400 /* R:100.0f */) {
          if (*(int *)(arg1 + 0x210) != 2) {
            *(uint32_t *)(arg1 + 0x210) = 2;
            *(uint32_t *)(arg1 + 0x11c) = 0;
            iVar3 = GetRandomINT(3);
            *(float *)(arg1 + 0x120) = (float)iVar3;
          }
          *(uint32_t *)(arg1 + 0xb8) = 0;
          if (*(int *)(arg1 + 0x218) != 0) {
            uVar5 = 0;
            lVar7 = (long)*(int *)(arg1 + 0x214) * 0x370 + 0x50 + *(long *)(arg1 + 0x230);
            if (*(short *)(lVar7 + 0x28) != 0) {
              uVar5 = GetRandomINT(0);
            }
            *(uint32_t *)(lVar7 + 0x50) = uVar5;
            *(uint32_t *)(arg1 + 0x220) = 0;
            uVar5 = *(uint32_t *)((long)*(int *)(arg1 + 0x214) * 0x370 + *(long *)(arg1 + 0x230) +
                                  0xa0);
            *(uint32_t *)(arg1 + 0x218) = 0;
            *(uint32_t *)(arg1 + 0x228) = 1;
            *(uint32_t *)(arg1 + 0x21c) = uVar5;
            iVar3 = *(int *)(arg1 + 400);
            goto LAB_0048a016;
          }
        }
        goto LAB_0048a010;
      }
      *(uint32_t *)(arg1 + 0x210) = 0;
      *(uint32_t *)(arg1 + 0x11c) = 0;
      *(uint32_t *)(arg1 + 0x120) = 0;
    }
  } else {
    if (*(float *)(arg1 + 0xb8) == 0.0) {
      if (*(int *)(arg1 + 0x214) == 0x11) {
        iVar4 = GetRandomINT(0x14, 0x19);
        *(uint *)(arg1 + 0x110) = (uint)(float)iVar4 ^ DAT_005be6f0 /* R:u32=2147483648 */;
        iVar6 = GetRandomINT(200);
        iVar4 = *(int *)(arg1 + 0x214);
        *(float *)(arg1 + 0x114) = (float)iVar6;
      LAB_0048a8f6:
        if (iVar4 == 0x11) {
          *(uint32_t *)(arg1 + 0x118) = 0x47742400;
          goto LAB_00489f35;
        }
      } else {
        iVar6 = GetRandomINT(0x96);
        iVar4 = *(int *)(arg1 + 0x214);
        *(float *)(arg1 + 0x110) = (float)iVar6;
        if (1 < iVar4 - 6U)
          goto LAB_0048a8f6;
        *(float *)(arg1 + 0x110) = (float)iVar6 * DAT_005be6e8 /* R:0.25f */;
      }
      iVar4 = GetRandomINT(100);
      *(float *)(arg1 + 0x118) = (float)iVar4 * (float)iVar4;
    }
  LAB_00489f35:
    if (iVar3 == 2) {
      fVar8 = *(float *)(arg1 + 0xa0);
      lVar7 = GSuperMeatBoy__getChar(SuperMeatBoy, 0);
      if (*(float *)(lVar7 + 0xa0) <= fVar8) {
        *(float *)(arg1 + 0xb8) = *(float *)(arg1 + 0xb8) + *(float *)(arg1 + 0x110);
      } else {
        *(float *)(arg1 + 0xb8) = *(float *)(arg1 + 0xb8) - *(float *)(arg1 + 0x110);
      }
    }
    bVar2 = true;
    if (*(int *)(arg1 + 0x210) != 0) {
      *(uint32_t *)(arg1 + 0x210) = 0;
      *(uint32_t *)(arg1 + 0x11c) = 0;
      *(uint32_t *)(arg1 + 0x120) = 0;
    }
  LAB_00489f6d:
    iVar3 = *(int *)(arg1 + 400);
    if (iVar3 == 2)
      goto LAB_0048a2cc;
  LAB_00489f7c:
    if (iVar3 != 0)
      goto LAB_0048a067;
    if (0.0 < *(float *)(arg1 + 0xbc)) {
      fVar8 = *(float *)(arg1 + 0xa4);
      lVar7 = GSuperMeatBoy__getChar(SuperMeatBoy, 0);
      if ((DAT_005c13fc /* R:20.0f */ + *(float *)(lVar7 + 0xa4) < fVar8) &&
          (fVar8 = *(float *)(arg1 + 0xa0), lVar7 = GSuperMeatBoy__getChar(SuperMeatBoy, 0),
           (float)((uint)(fVar8 - *(float *)(lVar7 + 0xa0)) & DAT_005be880 /* R:u32=2147483647 */) <
               DAT_005c1400 /* R:100.0f */)) {
        *(float *)(arg1 + 0xbc) = *(float *)(arg1 + 0xbc) - _DAT_005bfd00 /* R:10.0f */;
      }
      goto LAB_0048a010;
    }
  LAB_0048a01a:
    fVar8 = *(float *)(arg1 + 0xa0);
    lVar7 = GSuperMeatBoy__getChar(SuperMeatBoy, 0);
    if (fVar8 < *(float *)(lVar7 + 0xa0) || fVar8 == *(float *)(lVar7 + 0xa0)) {
      fVar8 = *(float *)(arg1 + 0xa0);
      lVar7 = GSuperMeatBoy__getChar(SuperMeatBoy, 0);
      if (fVar8 < *(float *)(lVar7 + 0xa0)) {
        *(float *)(arg1 + 0xb8) =
            (float)(*(uint *)(arg1 + 0x110) ^ DAT_005be6f0 /* R:u32=2147483648 */) *
                DAT_005be6e4 /* R:0.5f */
            + *(float *)(arg1 + 0xb8);
      }
    } else {
      *(float *)(arg1 + 0xb8) =
          DAT_005be6e4 /* R:0.5f */ * *(float *)(arg1 + 0x110) + *(float *)(arg1 + 0xb8);
    }
  }
LAB_0048a067:
  if (((bVar2) && (*(int *)(arg1 + 0x194) != 0)) &&
      ((*(long *)(arg1 + 0x188) != 0 || (*(GRIDBLOCK **)(arg1 + 0x180) != (GRIDBLOCK *)0x0)))) {
    iVar3 = SMBAnimal__CanJumpOver((SMBAnimal *)arg1, *(GRIDBLOCK **)(arg1 + 0x180));
    if ((iVar3 == 0) &&
        (iVar3 = SMBAnimal__CanJumpOver((SMBAnimal *)arg1, *(GRIDBLOCK **)(arg1 + 0x188)),
         iVar3 == 0)) {
      if (((byte)arg1[0x194] & 8) == 0) {
        fVar8 = *(float *)(arg1 + 0xb8) - *(float *)(arg1 + 0x110);
        *(float *)(arg1 + 0xb8) = fVar8;
      } else {
        fVar8 = *(float *)(arg1 + 0x110) + *(float *)(arg1 + 0xb8);
        *(float *)(arg1 + 0xb8) = fVar8;
      }
      goto LAB_0048a108;
    }
    if (((byte)arg1[0x194] & 8) == 0) {
      fVar8 = *(float *)(arg1 + 0x110) + *(float *)(arg1 + 0xb8);
      *(float *)(arg1 + 0xb8) = fVar8;
    } else {
      fVar8 = *(float *)(arg1 + 0xb8) - *(float *)(arg1 + 0x110);
      *(float *)(arg1 + 0xb8) = fVar8;
    }
    if ((0.0 < *(float *)(arg1 + 0xbc)) || (*(int *)(arg1 + 400) != 2))
      goto LAB_0048a108;
    iVar3 = GetRandomINT(200, 0xfa);
    *(float *)(arg1 + 0xbc) = (float)iVar3;
  }
  fVar8 = *(float *)(arg1 + 0xb8);
LAB_0048a108:
  fVar9 = *(float *)(arg1 + 0x114);
  if ((fVar9 < fVar8) ||
      (fVar9 = (float)((uint)fVar9 ^ DAT_005be6f0 /* R:u32=2147483648 */), fVar8 < fVar9)) {
    iVar3 = *(int *)(arg1 + 400);
    *(float *)(arg1 + 0xb8) = fVar9;
    fVar8 = fVar9;
  } else {
    iVar3 = *(int *)(arg1 + 400);
  }
  if (iVar3 == 2) {
    if (fVar8 == 0.0) {
      if (*(int *)(arg1 + 0x218) != 0) {
        uVar5 = 0;
        lVar7 = (long)*(int *)(arg1 + 0x214) * 0x370 + 0x50 + *(long *)(arg1 + 0x230);
        uVar1 = *(ushort *)(lVar7 + 0x28);
        if (uVar1 != 0) {
          uVar5 = GetRandomINT(0, uVar1 - 1);
        }
        *(uint32_t *)(lVar7 + 0x50) = uVar5;
        *(uint32_t *)(arg1 + 0x220) = 0;
        uVar5 =
            *(uint32_t *)((long)*(int *)(arg1 + 0x214) * 0x370 + *(long *)(arg1 + 0x230) + 0xa0);
        *(uint32_t *)(arg1 + 0x218) = 0;
        *(uint32_t *)(arg1 + 0x228) = 1;
        *(uint32_t *)(arg1 + 0x21c) = uVar5;
      }
    } else if (*(int *)(arg1 + 0x218) != 1) {
      uVar5 = 0;
      lVar7 = (long)*(int *)(arg1 + 0x214) * 0x370 + 0xa8 + *(long *)(arg1 + 0x230);
      uVar1 = *(ushort *)(lVar7 + 0x28);
      if (uVar1 != 0) {
        uVar5 = GetRandomINT(0, uVar1 - 1);
      }
      *(uint32_t *)(lVar7 + 0x50) = uVar5;
      *(uint32_t *)(arg1 + 0x220) = 0;
      uVar5 = *(uint32_t *)((long)*(int *)(arg1 + 0x214) * 0x370 + *(long *)(arg1 + 0x230) + 0xf8);
      *(uint32_t *)(arg1 + 0x218) = 1;
      *(uint32_t *)(arg1 + 0x228) = 1;
      *(uint32_t *)(arg1 + 0x21c) = uVar5;
    }
  } else if (*(float *)(arg1 + 0xbc) <= 0.0) {
    if ((*(float *)(arg1 + 0xbc) < 0.0) && (*(int *)(arg1 + 0x218) != 4)) {
      uVar5 = 0;
      lVar7 = (long)*(int *)(arg1 + 0x214) * 0x370 + 0x1b0 + *(long *)(arg1 + 0x230);
      uVar1 = *(ushort *)(lVar7 + 0x28);
      if (uVar1 != 0) {
        uVar5 = GetRandomINT(0, uVar1 - 1);
      }
      *(uint32_t *)(lVar7 + 0x50) = uVar5;
      *(uint32_t *)(arg1 + 0x220) = 0;
      uVar5 = *(uint32_t *)((long)*(int *)(arg1 + 0x214) * 0x370 + *(long *)(arg1 + 0x230) + 0x200);
      *(uint32_t *)(arg1 + 0x218) = 4;
      *(uint32_t *)(arg1 + 0x228) = 1;
      *(uint32_t *)(arg1 + 0x21c) = uVar5;
    }
  } else if (*(int *)(arg1 + 0x218) != 2) {
    uVar5 = 0;
    lVar7 = (long)*(int *)(arg1 + 0x214) * 0x370 + 0x100 + *(long *)(arg1 + 0x230);
    uVar1 = *(ushort *)(lVar7 + 0x28);
    if (uVar1 != 0) {
      uVar5 = GetRandomINT(0, uVar1 - 1);
    }
    *(uint32_t *)(lVar7 + 0x50) = uVar5;
    *(uint32_t *)(arg1 + 0x220) = 0;
    uVar5 = *(uint32_t *)((long)*(int *)(arg1 + 0x214) * 0x370 + *(long *)(arg1 + 0x230) + 0x150);
    *(uint32_t *)(arg1 + 0x218) = 2;
    *(uint32_t *)(arg1 + 0x228) = 1;
    *(uint32_t *)(arg1 + 0x21c) = uVar5;
  }
  self = GSuperMeatBoy__pLevelPalette;
  lVar7 = *(long *)(arg1 + 0x48);
  *(uint32_t *)(lVar7 + 0x50) = *(uint32_t *)(arg1 + 0xa0);
  *(uint32_t *)(lVar7 + 0x60) = *(uint32_t *)(arg1 + 0xa4);
  iVar3 = SMBPalette__ObstacleCollision(self, arg1, (Bounds *)0x0);
  if (iVar3 == 1) {
    if (*(int *)(arg1 + 0x218) != 5) {
      uVar5 = 0;
      lVar7 = (long)*(int *)(arg1 + 0x214) * 0x370 + 0x208 + *(long *)(arg1 + 0x230);
      if (*(short *)(lVar7 + 0x28) != 0) {
        uVar5 = GetRandomINT(0);
      }
      *(uint32_t *)(lVar7 + 0x50) = uVar5;
      *(uint32_t *)(arg1 + 0x220) = 0;
      uVar5 = *(uint32_t *)((long)*(int *)(arg1 + 0x214) * 0x370 + *(long *)(arg1 + 0x230) + 600);
      *(uint32_t *)(arg1 + 0x218) = 5;
      *(uint32_t *)(arg1 + 0x228) = 1;
      *(uint32_t *)(arg1 + 0x21c) = uVar5;
    }
    if (*(int *)(arg1 + 0x210) != 3) {
      *(uint32_t *)(arg1 + 0x210) = 3;
      *(uint32_t *)(arg1 + 0x11c) = 0;
      *(uint32_t *)(arg1 + 0x120) = 0;
    }
  }
  if (*(float *)(arg1 + 0xb8) < 0.0) {
    *(uint *)(arg1 + 0xd0) = *(uint *)(arg1 + 0xd0) & DAT_005be880 /* R:u32=2147483647 */;
  } else if (0.0 < *(float *)(arg1 + 0xb8)) {
    *(uint *)(arg1 + 0xd0) = *(uint *)(arg1 + 0xd0) & DAT_005be880 /* R:u32=2147483647 */ ^
                             DAT_005be6f0 /* R:u32=2147483648 */;
  }
  if (*(int *)(arg1 + 0x218) == 0) {
    fVar8 = *(float *)(arg1 + 0xa0);
    lVar7 = GSuperMeatBoy__getChar(SuperMeatBoy, 0);
    if (*(float *)(lVar7 + 0xa0) <= fVar8 && fVar8 != *(float *)(lVar7 + 0xa0)) {
      *(uint *)(arg1 + 0xd0) = *(uint *)(arg1 + 0xd0) & DAT_005be880 /* R:u32=2147483647 */ ^
                               DAT_005be6f0 /* R:u32=2147483648 */;
    } else {
      *(uint *)(arg1 + 0xd0) = *(uint *)(arg1 + 0xd0) & DAT_005be880 /* R:u32=2147483647 */;
    }
  }
  return;
}

/* ======================================================================
 * SMBBloodExplosionDestroyResources  (Ghidra `SMBBloodExplosionDestroyResources` @ 0048caf0)
 * Signature: uint8_t __stdcall SMBBloodExplosionDestroyResources(void * arg1)
 * Calls: `BaseResource__Release`
 * Called by: `SMBBloodExplosion__SMBBloodExplosion`, `SMBBloodExplosion__SMBBloodExplosion__0048cc90`
 */
/* SMBBloodExplosionDestroyResources(void*) */

void SMBBloodExplosionDestroyResources(void *arg1)

{
  if (*(BaseResource **)((long)arg1 + 8) != (BaseResource *)0x0) {
    BaseResource__Release(*(BaseResource **)((long)arg1 + 8), 0);
  }
  if (*(BaseResource **)arg1 != (BaseResource *)0x0) {
    BaseResource__Release(*(BaseResource **)arg1, 0);
  }
  if (*(BaseResource **)((long)arg1 + 0x10) != (BaseResource *)0x0) {
    BaseResource__Release(*(BaseResource **)((long)arg1 + 0x10), 0);
    return;
  }
  return;
}

/* ======================================================================
 * SMBBloodExplosionCreateResources  (Ghidra `SMBBloodExplosionCreateResources` @ 0048cb30)
 * Signature: uint8_t __stdcall SMBBloodExplosionCreateResources(void * arg1)
 * Calls: `VertexStream__VertexStream__005a6980`
 * Called by: `GLOBAL_sub_I_SMBBloodExplosionCreateResources`, `SMBBloodExplosion__SMBBloodExplosion`, `SMBBloodExplosion__SMBBloodExplosion__0048cc90`
 */
/* SMBBloodExplosionCreateResources(void*) */

void SMBBloodExplosionCreateResources(void *arg1)

{
  uint64_t uVar1;
  VertexStream *pVVar2;
  uint64_t local_48;
  uint16_t local_40;
  uint32_t local_3c;
  uint64_t local_38;
  uint32_t local_30;
  uint32_t local_2c;
  uint32_t local_28;

  local_3c = 5;
  local_38 = 0;
  local_30 = 0;
  local_2c = 1;
  local_28 = 0;
  local_48 = 0x12c0;
  local_40 = 8;
  uVar1 = VertexBuffer__Create((tagVertexBufferCreation *)&local_48);
  *(uint64_t *)((long)arg1 + 8) = uVar1;
  uVar1 = VertexBuffer__Create((tagVertexBufferCreation *)&local_48);
  *(uint64_t *)arg1 = uVar1;
  pVVar2 = BaseResource__operator_new(0xa8, 1);
  /* try { // try from 0048cbc2 to 0048cbc6 has its CatchHandler @ 0048cbd2 */
  VertexStream__VertexStream__005a6980(pVVar2, 1, 200, 600, 0, arg1, CGR__pPos2Decl);
  *(VertexStream **)((long)arg1 + 0x10) = pVVar2;
  return;
}

/* ======================================================================
 * CreateSMBBoss  (Ghidra `CreateSMBBoss` @ 0048dad0)
 * Signature: uint8_t CreateSMBBoss(void)
 * Calls: `FactoryBoss__FactoryBoss__00468ff0`, `FinalBoss__FinalBoss__00469560`, `ForestBoss__ForestBoss__0046a890`, `HellBoss__HellBoss__0046bab0`, `HospitalBoss__HospitalBoss__0046d390`, `RaptureBoss__RaptureBoss__00483ef0`, `operator_new`
 * Called by: `EditorForm_LoadFormOk`, `SMBChapter__LoadBossLevel`, `SMBChapter__PlayBossIntro`, `SMBEditor__LoadLevel`
 */
void CreateSMBBoss(int arg1)

{
  FinalBoss *self;

  if (CurrentSMBBoss == (RaptureBoss *)0x0) {
    if (arg1 == -1) {
      switch (*(uint32_t *)(SuperMeatBoy + 0x290)) {
      default:
        goto switchD_0048daf4_default;
      case 1:
        self = operator_new(0x1d8);
        /* try { // try from 0048dc6c to 0048dc70 has its CatchHandler @ 0048dc90 */
        ForestBoss__ForestBoss__0046a890((ForestBoss *)self);
        break;
      case 2:
        self = operator_new(0x208);
        /* try { // try from 0048dc38 to 0048dc3c has its CatchHandler @ 0048dcb4 */
        HospitalBoss__HospitalBoss__0046d390((HospitalBoss *)self);
        break;
      case 3:
        self = operator_new(0x198);
        /* try { // try from 0048dc52 to 0048dc56 has its CatchHandler @ 0048dcc2 */
        FactoryBoss__FactoryBoss__00468ff0((FactoryBoss *)self);
        break;
      case 4:
        self = operator_new(0x498);
        /* try { // try from 0048dc1e to 0048dc22 has its CatchHandler @ 0048dcb6 */
        HellBoss__HellBoss__0046bab0((HellBoss *)self);
        break;
      case 5:
        self = operator_new(0xc18);
        /* try { // try from 0048dc04 to 0048dc08 has its CatchHandler @ 0048dcb2 */
        RaptureBoss__RaptureBoss__00483ef0((RaptureBoss *)self);
        break;
      case 6:
        self = operator_new(0x1a0);
        /* try { // try from 0048dbea to 0048dbee has its CatchHandler @ 0048dc94 */
        FinalBoss__FinalBoss__00469560(self);
      }
    } else {
      switch (arg1) {
      case 0:
        self = operator_new(0x1d8);
        /* try { // try from 0048db90 to 0048db94 has its CatchHandler @ 0048dca2 */
        ForestBoss__ForestBoss__0046a890((ForestBoss *)self);
        break;
      case 1:
        self = operator_new(0x208);
        /* try { // try from 0048dbb0 to 0048dbb4 has its CatchHandler @ 0048dca6 */
        HospitalBoss__HospitalBoss__0046d390((HospitalBoss *)self);
        break;
      case 2:
        self = operator_new(0x198);
        /* try { // try from 0048db70 to 0048db74 has its CatchHandler @ 0048dca4 */
        FactoryBoss__FactoryBoss__00468ff0((FactoryBoss *)self);
        break;
      case 3:
        self = operator_new(0x498);
        /* try { // try from 0048db58 to 0048db5c has its CatchHandler @ 0048dc96 */
        HellBoss__HellBoss__0046bab0((HellBoss *)self);
        break;
      case 4:
        self = operator_new(0xc18);
        /* try { // try from 0048db30 to 0048db34 has its CatchHandler @ 0048dc76 */
        RaptureBoss__RaptureBoss__00483ef0((RaptureBoss *)self);
        break;
      case 5:
        self = operator_new(0x1a0);
        /* try { // try from 0048dbd0 to 0048dbd4 has its CatchHandler @ 0048dc92 */
        FinalBoss__FinalBoss__00469560(self);
        break;
      default:
        goto switchD_0048daf4_default;
      }
    }
    CurrentSMBBoss = (RaptureBoss *)self;
    return;
  }
switchD_0048daf4_default:
  return;
}

/* ======================================================================
 * DestroySMBBoss  (Ghidra `DestroySMBBoss` @ 0048dcd0)
 * Signature: uint8_t DestroySMBBoss(void)
 * Calls: (none)
 * Called by: `EndBackToTitleFromReplay`, `GSuperMeatBoy__DestroyGameResources`, `GSuperMeatBoy__SwitchGameMode`, `GSuperMeatBoy__Update__00516690`, `SMBChapter__DestroyBossOutro`, `SMBCreditsFinished`
 */
void DestroySMBBoss(void)

{
  if (CurrentSMBBoss != (long *)0x0) {
    (**(code **)(*CurrentSMBBoss + 8))();
  }
  CurrentSMBBoss = (long *)0x0;
  return;
}

/* ======================================================================
 * UpdateSMBBoss  (Ghidra `UpdateSMBBoss` @ 0048dd00)
 * Signature: uint8_t UpdateSMBBoss(void)
 * Calls: (none)
 * Called by: `GSuperMeatBoy__Update__00516690`
 */
void UpdateSMBBoss(void)

{
  if (CurrentSMBBoss != (long *)0x0) {
    /* WARNING: Could not recover jumptable at 0x0048dd13. Too many branches */
    /* WARNING: Treating indirect jump as call */
    (**(code **)(*CurrentSMBBoss + 0x18))();
    return;
  }
  return;
}

/* ======================================================================
 * RenderSMBBoss  (Ghidra `RenderSMBBoss` @ 0048dd20)
 * Signature: uint8_t RenderSMBBoss(void)
 * Calls: (none)
 * Called by: `BossLayer__Render`
 */
void RenderSMBBoss(void)

{
  if (CurrentSMBBoss != (long *)0x0) {
    /* WARNING: Could not recover jumptable at 0x0048dd33. Too many branches */
    /* WARNING: Treating indirect jump as call */
    (**(code **)(*CurrentSMBBoss + 0x10))();
    return;
  }
  return;
}

/* ======================================================================
 * AddSMBBossWayPoint  (Ghidra `AddSMBBossWayPoint` @ 0048dd40)
 * Signature: uint8_t AddSMBBossWayPoint(void)
 * Calls: (none)
 * Called by: `SMBPalette__FindAnimatedObstacles`
 */
void AddSMBBossWayPoint(uint64_t arg1, uint64_t arg2, uint32_t arg3, uint64_t arg4)

{
  if (CurrentSMBBoss != (long *)0x0) {
    /* WARNING: Could not recover jumptable at 0x0048dd61. Too many branches */
    /* WARNING: Treating indirect jump as call */
    (**(code **)(*CurrentSMBBoss + 0x48))(CurrentSMBBoss, arg1, arg2, arg3, arg4);
    return;
  }
  return;
}

/* ======================================================================
 * SMBBossCollision  (Ghidra `SMBBossCollision` @ 0048dd70)
 * Signature: uint8_t SMBBossCollision(void)
 * Calls: (none)
 * Called by: `LastLayer__Render`, `MeatBoyCharactor__Update`
 */
uint64_t SMBBossCollision(uint64_t arg1)

{
  uint64_t uVar1;

  if (CurrentSMBBoss != (long *)0x0) {
    /* WARNING: Could not recover jumptable at 0x0048dd89. Too many branches */
    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*CurrentSMBBoss + 0x28))(CurrentSMBBoss, arg1);
    return uVar1;
  }
  return 0;
}

/* ======================================================================
 * ResetSMBBoss  (Ghidra `ResetSMBBoss` @ 0048dda0)
 * Signature: uint8_t ResetSMBBoss(void)
 * Calls: (none)
 * Called by: `FlyWrench__Reset`, `GSuperMeatBoy__LoadDeferredCharactor`, `GSuperMeatBoy__SetCurrentLevel`, `LoadDeferredCharactor`, `Machinarium__Reset`, `MeatBoyCharactor__Reset`, `Ogmo__Reset`, `Runman__Reset`, `SMBEditor__Activate`, `SMBEditor__DeActivate`
 */
void ResetSMBBoss(void)

{
  if (CurrentSMBBoss != (long *)0x0) {
    /* WARNING: Could not recover jumptable at 0x0048ddb3. Too many branches */
    /* WARNING: Treating indirect jump as call */
    (**(code **)(*CurrentSMBBoss + 0x30))();
    return;
  }
  return;
}

/* ======================================================================
 * SMBLivesScreenFinished  (Ghidra `SMBLivesScreenFinished` @ 0048f060)
 * Signature: uint8_t __stdcall SMBLivesScreenFinished(void * arg1, int arg2, int arg3)
 * Calls: `GSuperMeatBoy__Freeze`
 * Called by: `SMBChapterLoadWarpZone`, `SMBChapter__LoadWarpZone`, `SMBChapter__ShowLivesScreen`
 */
/* SMBLivesScreenFinished(void*, int, int) */

void SMBLivesScreenFinished(void *arg1, int arg2, int arg3)

{
  GSuperMeatBoy__Freeze(SuperMeatBoy, 0);
  return;
}

/* ======================================================================
 * SMBWarpOutroSkip  (Ghidra `SMBWarpOutroSkip` @ 0048f070)
 * Signature: uint8_t __stdcall SMBWarpOutroSkip(void * arg1)
 * Calls: `TPlayer__GetJoystick`
 * Called by: `SMBChapter__PlayWarpOutro`, `SMBChapter__ShowGameOverScreen`
 */
/* SMBWarpOutroSkip(void*) */

bool SMBWarpOutroSkip(void *arg1)

{
  long lVar1;
  bool bVar2;

  if ((Keyboard == 0) || (bVar2 = true, *(int *)(Keyboard + 8) != 1)) {
    lVar1 = TPlayer__GetJoystick((TPlayer *)Players__Player);
    bVar2 = *(int *)(lVar1 + 8) == 1;
  }
  return bVar2;
}

/* ======================================================================
 * SMBWarpIntroSkip  (Ghidra `SMBWarpIntroSkip` @ 0048f0b0)
 * Signature: uint8_t __stdcall SMBWarpIntroSkip(void * arg1)
 * Calls: `TPlayer__GetJoystick`
 * Called by: `SMBChapterPlayWarpIntro`, `SMBChapter__PlayWarpIntro`
 */
/* SMBWarpIntroSkip(void*) */

bool SMBWarpIntroSkip(void *arg1)

{
  long lVar1;
  bool bVar2;

  if ((Keyboard == 0) || (bVar2 = true, *(int *)(Keyboard + 8) != 1)) {
    lVar1 = TPlayer__GetJoystick((TPlayer *)Players__Player);
    bVar2 = *(int *)(lVar1 + 8) == 1;
  }
  return bVar2;
}

/* ======================================================================
 * SMBBossIntroSkip  (Ghidra `SMBBossIntroSkip` @ 0048f0f0)
 * Signature: uint8_t __stdcall SMBBossIntroSkip(void * arg1)
 * Calls: `TPlayer__GetJoystick`
 * Called by: `SMBChapter__PlayBossIntro`, `SMBChapter__PlayBossOutro`
 */
/* SMBBossIntroSkip(void*) */

bool SMBBossIntroSkip(void *arg1)

{
  long lVar1;
  bool bVar2;

  if ((Keyboard == 0) || (bVar2 = true, *(int *)(Keyboard + 8) != 1)) {
    lVar1 = TPlayer__GetJoystick((TPlayer *)Players__Player);
    bVar2 = *(int *)(lVar1 + 8) == 1;
  }
  return bVar2;
}

/* ======================================================================
 * SMBChapterIntroSkip  (Ghidra `SMBChapterIntroSkip` @ 0048f130)
 * Signature: uint8_t __stdcall SMBChapterIntroSkip(void * arg1)
 * Calls: `TPlayer__GetJoystick`
 * Called by: `SMBChapter__PlayChapterIntro`
 */
/* SMBChapterIntroSkip(void*) */

bool SMBChapterIntroSkip(void *arg1)

{
  long lVar1;
  bool bVar2;

  if ((Keyboard == 0) || (bVar2 = true, *(int *)(Keyboard + 8) != 1)) {
    lVar1 = TPlayer__GetJoystick((TPlayer *)Players__Player);
    bVar2 = *(int *)(lVar1 + 8) == 1;
  }
  return bVar2;
}

/* ======================================================================
 * GetLevelInfoArray  (Ghidra `GetLevelInfoArray` @ 0048f260)
 * Signature: uint8_t __stdcall GetLevelInfoArray(tagChapterLevelType arg1)
 * Calls: `SMBChapter__GetLevelInfoArray`
 * Called by: `SMBChapter__ActivateWarpZone`, `SMBChapter__ActivateWarpZoneFromMenu`, `SMBChapter__LoadCurrentLevel`, `SMBChapter__LoadNextLevel`
 */
/* SMBChapter__GetLevelInfoArray(tagChapterLevelType) [clone .constprop.51] */

long SMBChapter__GetLevelInfoArray(long arg1)

{
  switch (*(uint32_t *)(arg1 + 0x204)) {
  default:
    return arg1 + 0x110;
  case 1:
    return arg1 + 0x160;
  case 2:
    return *(long *)(arg1 + 0x1e8) + 0x68;
  case 3:
    return *(long *)(arg1 + 0x1e8) + 0x120;
  case 4:
    return *(long *)(arg1 + 0x1e8) + 0x1d8;
  case 5:
    return *(long *)(arg1 + 0x1e8) + 0x290;
  case 6:
    return *(long *)(arg1 + 0x1e8) + 0x348;
  case 7:
    return *(long *)(arg1 + 0x1e8) + 0x400;
  case 8:
    return *(long *)(arg1 + 0x1e8) + 0x4b8;
  case 9:
    return *(long *)(arg1 + 0x1e8) + 0x570;
  }
}

/* ======================================================================
 * GetLevelInfo  (Ghidra `GetLevelInfo` @ 0048f320)
 * Signature: uint8_t __stdcall GetLevelInfo(int arg1, tagChapterLevelType arg2, int arg3)
 * Calls: `SMBChapter__GetLevelInfo`
 * Called by: `PreloadPalette`, `SMBChapter__IsNextLevelUnlocked`, `SMBChapter__PlayWarpIntro`
 */
/* SMBChapter__GetLevelInfo(int, tagChapterLevelType, int) [clone .constprop.54] */

long SMBChapter__GetLevelInfo(long arg1, ulong arg2, uint arg3)

{
  uint uVar1;
  long lVar2;

  if ((int)arg2 == -1) {
    uVar1 = iCurrentLevel - 1U;
    if (iCurrentLevel - 1U == 0xffffffff) {
      uVar1 = 0;
    }
    arg2 = (ulong)uVar1;
  }
  if ((*(int *)(arg1 + 0x200) == 9) && (LoadedPortalChapter != 0)) {
    lVar2 = *(long *)(LoadedPortalChapter + (long)(int)arg2 * 8);
    if (lVar2 == 0) {
      return 0;
    }
    return lVar2 + 0x24;
  }
  if (arg3 == 0xb) {
    arg3 = *(uint *)(arg1 + 0x204);
  }
  if (arg3 < 10) {
    /* WARNING: Could not recover jumptable at 0x0048f372. Too many branches */
    /* WARNING: Treating indirect jump as call */
    lVar2 = (**(code **)(&DAT_005c1990 /* R:6.699453815105875e-39f */ + (ulong)arg3 * 8))();
    return lVar2;
  }
  return (arg2 & 0xffff) * 0x50 + *(long *)(arg1 + 0x148);
}

/* ======================================================================
 * PlayBossIntro  (Ghidra `PlayBossIntro` @ 0048f4d0)
 * Signature: uint8_t __stdcall PlayBossIntro(_func_void_void_ptr_int_int * arg1, int arg2)
 * Calls: `FlashAnimationLibrary__FlashAnimationLibrary`, `FlashAnimationLibrary__FlashAnimationLibrary__00576680`, `FlashAnimationLibrary__GetMovieClip__005731d0`, `SMBChapter__PlayBossIntro`, `operator_delete`, `operator_new`
 * Called by: `SMBChapter__ThreadLoadBossIntro`
 */
/* SMBChapter__PlayBossIntro(void (*)(void*, int, int), int) [clone .constprop.52] */

void SMBChapter__PlayBossIntro(_func_void_void_ptr_int_int *arg1, int arg2)

{
  long *plVar1;
  char *pcVar2;
  FlashAnimationLibrary *pFVar3;
  uint64_t uVar4;
  uint32_t in_register_00000034;

  plVar1 = *(long **)(arg1 + 0x2c0);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1, CONCAT44(in_register_00000034, arg2));
  }
  pFVar3 = *(FlashAnimationLibrary **)(arg1 + 0x2b8);
  *(uint64_t *)(arg1 + 0x2c0) = 0;
  if (pFVar3 != (FlashAnimationLibrary *)0x0) {
    FlashAnimationLibrary__FlashAnimationLibrary(pFVar3);
    operator_delete(pFVar3);
  }
  pcVar2 = *(char **)(arg1 + 0x2b0);
  *(uint64_t *)(arg1 + 0x2b8) = 0;
  pFVar3 = operator_new(0xb0);
  /* try { // try from 0048f544 to 0048f548 has its CatchHandler @ 0048f574 */
  FlashAnimationLibrary__FlashAnimationLibrary__00576680(pFVar3, pcVar2);
  *(FlashAnimationLibrary **)(arg1 + 0x2b8) = pFVar3;
  uVar4 = FlashAnimationLibrary__GetMovieClip__005731d0(pFVar3, 0);
  *(uint64_t *)(arg1 + 0x2c0) = uVar4;
  return;
}

/* ======================================================================
 * PlayBossOutro  (Ghidra `PlayBossOutro` @ 0048f590)
 * Signature: uint8_t __stdcall PlayBossOutro(_func_void_void_ptr_int_int * arg1, int arg2)
 * Calls: `FlashAnimationLibrary__FlashAnimationLibrary`, `FlashAnimationLibrary__FlashAnimationLibrary__00576680`, `FlashAnimationLibrary__GetMovieClip__005731d0`, `SMBChapter__PlayBossOutro`, `operator_delete`, `operator_new`
 * Called by: `SMBChapter__ThreadLoadBossOutro`
 */
/* SMBChapter__PlayBossOutro(void (*)(void*, int, int), int) [clone .constprop.53] */

void SMBChapter__PlayBossOutro(_func_void_void_ptr_int_int *arg1, int arg2)

{
  long *plVar1;
  char *pcVar2;
  FlashAnimationLibrary *pFVar3;
  uint64_t uVar4;
  uint32_t in_register_00000034;

  plVar1 = *(long **)(arg1 + 0x2d8);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1, CONCAT44(in_register_00000034, arg2));
  }
  pFVar3 = *(FlashAnimationLibrary **)(arg1 + 0x2d0);
  *(uint64_t *)(arg1 + 0x2d8) = 0;
  if (pFVar3 != (FlashAnimationLibrary *)0x0) {
    FlashAnimationLibrary__FlashAnimationLibrary(pFVar3);
    operator_delete(pFVar3);
  }
  pcVar2 = *(char **)(arg1 + 0x2c8);
  *(uint64_t *)(arg1 + 0x2d0) = 0;
  pFVar3 = operator_new(0xb0);
  /* try { // try from 0048f604 to 0048f608 has its CatchHandler @ 0048f634 */
  FlashAnimationLibrary__FlashAnimationLibrary__00576680(pFVar3, pcVar2);
  *(FlashAnimationLibrary **)(arg1 + 0x2d0) = pFVar3;
  uVar4 = FlashAnimationLibrary__GetMovieClip__005731d0(pFVar3, 0);
  *(uint64_t *)(arg1 + 0x2d8) = uVar4;
  return;
}

/* ======================================================================
 * LoadLevelDataFromBlock  (Ghidra `LoadLevelDataFromBlock` @ 0048f720)
 * Signature: uint8_t __stdcall LoadLevelDataFromBlock(PropertyBlock * arg1, LevelInfo * arg2, PropertiesFile * arg3)
 * Calls: `PropertiesFile__FindPropertyVariable`, `StringToFloat`, `StringToInt`
 * Called by: `SMBChapter__LoadChapter`, `SMBChapter__VerifyChapterFileData`
 */
/* LoadLevelDataFromBlock(PropertyBlock*, SMBChapter__LevelInfo&, PropertiesFile*) */

uint64_t LoadLevelDataFromBlock(PropertyBlock *arg1, LevelInfo *arg2, PropertiesFile *arg3)

{
  uint64_t uVar1;
  uint32_t uVar2;
  PropertyVariable *local_68[2];
  PropertyVariable *local_58[2];
  PropertyVariable *local_48[2];
  PropertyVariable *local_38;
  PropertyVariable *local_30[2];

  uVar1 = 0;
  if (arg1 != (PropertyBlock *)0x0) {
    PropertiesFile__FindPropertyVariable(arg3, &local_38, arg1, "file");
    PropertiesFile__FindPropertyVariable(arg3, local_68, arg1, "name");
    PropertiesFile__FindPropertyVariable(arg3, local_58, arg1, "par");
    PropertiesFile__FindPropertyVariable(arg3, local_30, arg1, "warpid");
    PropertiesFile__FindPropertyVariable(arg3, local_48, arg1, "id");
    if (local_38 != (PropertyVariable *)0x0) {
      if ((LevelInfo *)(local_38 + 0x20) != arg2) {
        *(uint64_t *)arg2 = *(uint64_t *)(local_38 + 0x20);
        *(uint64_t *)(arg2 + 8) = *(uint64_t *)(local_38 + 0x28);
        *(uint64_t *)(arg2 + 0x10) = *(uint64_t *)(local_38 + 0x30);
        *(uint64_t *)(arg2 + 0x18) = *(uint64_t *)(local_38 + 0x38);
      }
      uVar1 = 0;
      if (local_68[0] != (PropertyVariable *)0x0) {
        if ((LevelInfo *)(local_68[0] + 0x20) != arg2 + 0x20) {
          *(uint64_t *)(arg2 + 0x20) = *(uint64_t *)(local_68[0] + 0x20);
          *(uint64_t *)(arg2 + 0x28) = *(uint64_t *)(local_68[0] + 0x28);
          *(uint64_t *)(arg2 + 0x30) = *(uint64_t *)(local_68[0] + 0x30);
          *(uint64_t *)(arg2 + 0x38) = *(uint64_t *)(local_68[0] + 0x38);
        }
        uVar1 = 0;
        if (local_58[0] != (PropertyVariable *)0x0) {
          uVar2 = StringToFloat(local_58[0] + 0x20);
          *(uint32_t *)(arg2 + 0x40) = uVar2;
          if (local_30[0] == (PropertyVariable *)0x0) {
            *(uint32_t *)(arg2 + 0x44) = 0xffffffff;
          } else {
            uVar2 = StringToInt(local_30[0] + 0x20);
            *(uint32_t *)(arg2 + 0x44) = uVar2;
          }
          if (local_48[0] == (PropertyVariable *)0x0) {
            *(uint32_t *)(arg2 + 0x48) = 0xffffffff;
            uVar1 = 1;
          } else {
            uVar1 = 1;
            uVar2 = StringToInt(local_48[0] + 0x20);
            *(uint32_t *)(arg2 + 0x48) = uVar2;
          }
        }
      }
    }
  }
  return uVar1;
}

/* ======================================================================
 * LoadBossDataFromBlock  (Ghidra `LoadBossDataFromBlock` @ 0048f8b0)
 * Signature: uint8_t __stdcall LoadBossDataFromBlock(PropertyBlock * arg1, BossLevelInfo * arg2, PropertiesFile * arg3)
 * Calls: `PropertiesFile__FindPropertyVariable`, `StringToFloat`
 * Called by: `SMBChapter__LoadChapter`
 */
/* LoadBossDataFromBlock(PropertyBlock*, SMBChapter__BossLevelInfo&, PropertiesFile*) */

uint64_t LoadBossDataFromBlock(PropertyBlock *arg1, BossLevelInfo *arg2, PropertiesFile *arg3)

{
  uint64_t uVar1;
  uint32_t uVar2;
  PropertyVariable *local_48[2];
  PropertyVariable *local_38[2];
  PropertyVariable *local_28;
  PropertyVariable *local_20;

  uVar1 = 0;
  if (arg1 != (PropertyBlock *)0x0) {
    PropertiesFile__FindPropertyVariable(arg3, &local_20, arg1, "file");
    PropertiesFile__FindPropertyVariable(arg3, local_48, arg1, "altfile");
    PropertiesFile__FindPropertyVariable(arg3, local_38, arg1, "name");
    PropertiesFile__FindPropertyVariable(arg3, &local_28, arg1, "par");
    if ((local_20 != (PropertyVariable *)0x0) && ((BossLevelInfo *)(local_20 + 0x20) != arg2)) {
      *(uint64_t *)arg2 = *(uint64_t *)(local_20 + 0x20);
      *(uint64_t *)(arg2 + 8) = *(uint64_t *)(local_20 + 0x28);
      *(uint64_t *)(arg2 + 0x10) = *(uint64_t *)(local_20 + 0x30);
      *(uint64_t *)(arg2 + 0x18) = *(uint64_t *)(local_20 + 0x38);
    }
    if ((local_48[0] != (PropertyVariable *)0x0) &&
        ((BossLevelInfo *)(local_48[0] + 0x20) != arg2 + 0x20)) {
      *(uint64_t *)(arg2 + 0x20) = *(uint64_t *)(local_48[0] + 0x20);
      *(uint64_t *)(arg2 + 0x28) = *(uint64_t *)(local_48[0] + 0x28);
      *(uint64_t *)(arg2 + 0x30) = *(uint64_t *)(local_48[0] + 0x30);
      *(uint64_t *)(arg2 + 0x38) = *(uint64_t *)(local_48[0] + 0x38);
    }
    if ((local_38[0] != (PropertyVariable *)0x0) &&
        ((BossLevelInfo *)(local_38[0] + 0x20) != arg2 + 0x40)) {
      *(uint64_t *)(arg2 + 0x40) = *(uint64_t *)(local_38[0] + 0x20);
      *(uint64_t *)(arg2 + 0x48) = *(uint64_t *)(local_38[0] + 0x28);
      *(uint64_t *)(arg2 + 0x50) = *(uint64_t *)(local_38[0] + 0x30);
      *(uint64_t *)(arg2 + 0x58) = *(uint64_t *)(local_38[0] + 0x38);
    }
    if (local_28 != (PropertyVariable *)0x0) {
      uVar2 = StringToFloat(local_28 + 0x20);
      *(uint32_t *)(arg2 + 0x60) = uVar2;
    }
    *(uint32_t *)(arg2 + 100) = 1;
    uVar1 = 1;
  }
  return uVar1;
}

/* ======================================================================
 * ChapterLoadingScreenFunc  (Ghidra `ChapterLoadingScreenFunc` @ 0048fe90)
 * Signature: uint8_t ChapterLoadingScreenFunc(void)
 * Calls: `GSMBMenu__RenderLoadingScreen`
 * Called by: (none)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ChapterLoadingScreenFunc() */

void ChapterLoadingScreenFunc(void)

{
  GSMBMenu__RenderLoadingScreen(SMBMenu);
  return;
}

/* ======================================================================
 * SMBGameOverScreenFinished  (Ghidra `SMBGameOverScreenFinished` @ 00492ed0)
 * Signature: uint8_t __stdcall SMBGameOverScreenFinished(void * arg1, int arg2, int arg3)
 * Calls: `GSMBChapterData__SetLevelType`, `GSMBMenu__SetSelectedLevel`, `GSuperMeatBoy__Freeze`, `GSuperMeatBoy__SwitchGameMode`, `TAudioInstance__Stop`
 * Called by: `SMBChapter__ShowGameOverScreen`
 */
/* SMBGameOverScreenFinished(void*, int, int) */

void SMBGameOverScreenFinished(void *arg1, int arg2, int arg3)

{
  GSMBChapterData *pGVar1;
  long lVar2;

  if (*(int *)((long)arg1 + 0x2e0) != 1) {
    if (*(uint *)((long)arg1 + 0x204) < 2) {
      if (*(long *)((long)arg1 + 0x18) != 0) {
        TAudioInstance__Stop((TAudioInstance *)((long)arg1 + 0x48));
      }
    } else if (*(uint *)((long)arg1 + 0x204) == 10) {
      TAudioInstance__Stop((TAudioInstance *)((long)arg1 + 0x98));
    } else if (*(long *)((long)arg1 + 0x28) != 0) {
      TAudioInstance__Stop((TAudioInstance *)((long)arg1 + 0x70));
    }
  }
  lVar2 = *(long *)((long)arg1 + 0x2e8);
  if (*(long **)(lVar2 + 0x40) != (long *)0x0) {
    (**(code **)(**(long **)(lVar2 + 0x40) + 8))();
    lVar2 = *(long *)((long)arg1 + 0x2e8);
  }
  *(uint64_t *)(lVar2 + 0x40) = 0;
  pGVar1 = SMBChapterData;
  *(uint32_t *)((long)arg1 + 0x204) = *(uint32_t *)((long)arg1 + 0x270);
  GSMBChapterData__SetLevelType(pGVar1);
  *(int *)arg1 = *(int *)((long)arg1 + 0x274);
  GSMBMenu__SetSelectedLevel(SMBMenu, *(int *)((long)arg1 + 0x274), 1);
  GSuperMeatBoy__SwitchGameMode(SuperMeatBoy);
  *(uint16_t *)((long)arg1 + 0x16) = 0;
  GSuperMeatBoy__Freeze(SuperMeatBoy, 0);
  return;
}

/* ======================================================================
 * SMBWarpOutroFinished  (Ghidra `SMBWarpOutroFinished` @ 00492ee0)
 * Signature: uint8_t __stdcall SMBWarpOutroFinished(void * arg1, int arg2, int arg3)
 * Calls: `GSMBChapterData__SetLevelType`, `GSMBMenu__SetSelectedLevel`, `GSuperMeatBoy__Freeze`, `GSuperMeatBoy__SwitchGameMode`, `TAudioInstance__Stop`
 * Called by: `SMBChapter__PlayWarpOutro`
 */
/* SMBWarpOutroFinished(void*, int, int) */

void SMBWarpOutroFinished(void *arg1, int arg2, int arg3)

{
  GSMBChapterData *pGVar1;
  long lVar2;

  if (*(int *)((long)arg1 + 0x2e0) != 1) {
    if (*(uint *)((long)arg1 + 0x204) < 2) {
      if (*(long *)((long)arg1 + 0x18) != 0) {
        TAudioInstance__Stop((TAudioInstance *)((long)arg1 + 0x48));
      }
    } else if (*(uint *)((long)arg1 + 0x204) == 10) {
      TAudioInstance__Stop((TAudioInstance *)((long)arg1 + 0x98));
    } else if (*(long *)((long)arg1 + 0x28) != 0) {
      TAudioInstance__Stop((TAudioInstance *)((long)arg1 + 0x70));
    }
  }
  lVar2 = *(long *)((long)arg1 + 0x2e8);
  if (*(long **)(lVar2 + 0x40) != (long *)0x0) {
    (**(code **)(**(long **)(lVar2 + 0x40) + 8))();
    lVar2 = *(long *)((long)arg1 + 0x2e8);
  }
  *(uint64_t *)(lVar2 + 0x40) = 0;
  pGVar1 = SMBChapterData;
  *(uint32_t *)((long)arg1 + 0x204) = *(uint32_t *)((long)arg1 + 0x270);
  GSMBChapterData__SetLevelType(pGVar1);
  *(int *)arg1 = *(int *)((long)arg1 + 0x274);
  GSMBMenu__SetSelectedLevel(SMBMenu, *(int *)((long)arg1 + 0x274), 1);
  GSuperMeatBoy__SwitchGameMode(SuperMeatBoy);
  *(uint16_t *)((long)arg1 + 0x16) = 0;
  GSuperMeatBoy__Freeze(SuperMeatBoy, 0);
  return;
}

/* ======================================================================
 * SMBChapterLoadWarpZone  (Ghidra `SMBChapterLoadWarpZone` @ 004931b0)
 * Signature: uint8_t __stdcall SMBChapterLoadWarpZone(void * arg1, int arg2, int arg3)
 * Calls: `FlashAnimationLibrary__FlashAnimationLibrary`, `FlashAnimationLibrary__GetMovieClip__005731d0`, `GSMBChapterData__SetCurrentLevel`, `GSMBChapterData__SetLevelType`, `GSMBCutSceneManager__PlayCutScene`, `GSMBMenu__IsInReplayMode`, `GSMBMenu__SwitchIconToCurrWarp`, `GSuperMeatBoy__DeferLoadCharactor`, `GSuperMeatBoy__Freeze`, `GSuperMeatBoy__SetCurrentLevel` (+6 more)
 * Called by: `SMBChapterPlayWarpIntro`, `SMBChapter__PlayWarpIntro`
 */
/* SMBChapterLoadWarpZone(void*, int, int) */

void SMBChapterLoadWarpZone(void *arg1, int arg2, int arg3)

{
  FlashAnimationLibrary *self;
  GSMBChapterData *pGVar1;
  GSMBMenu *this_00;
  long lVar2;
  int iVar3;
  long lVar4;
  uint64_t uVar5;
  uint32_t uStack_88;
  uint32_t uStack_84;
  uint32_t uStack_80;
  uint64_t uStack_78;
  code *pcStack_70;
  void *pvStack_68;
  uint64_t uStack_60;
  uint64_t uStack_58;
  uint32_t uStack_50;
  uint32_t uStack_4c;
  uint32_t uStack_48;
  char acStack_38[40];

  iVar3 = iCurrentLevel;
  if (*(short *)((long)arg1 + 0x16) != 1) {
    iVar3 = iCurrentLevel + -1;
  }
  *(int *)((long)arg1 + 0x274) = iVar3;
  this_00 = SMBMenu;
  *(uint32_t *)((long)arg1 + 0x270) = *(uint32_t *)((long)arg1 + 0x204);
  GSMBMenu__SwitchIconToCurrWarp(this_00);
  lVar4 = *(long *)((long)arg1 + 0x2e8);
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x24) != 0) {
      GSuperMeatBoy__DeferLoadCharactor(SuperMeatBoy, *(int *)(lVar4 + 0x24) + -1);
      lVar4 = *(long *)((long)arg1 + 0x2e8);
    }
    if (*(long **)(lVar4 + 0x30) != (long *)0x0) {
      (**(code **)(**(long **)(lVar4 + 0x30) + 8))();
      lVar4 = *(long *)((long)arg1 + 0x2e8);
    }
    self = *(FlashAnimationLibrary **)(lVar4 + 0x28);
    if (self != (FlashAnimationLibrary *)0x0) {
      FlashAnimationLibrary__FlashAnimationLibrary(self);
      operator_delete(self);
    }
    if (*(int *)((long)arg1 + 0x2e0) != 1) {
      if (*(uint *)((long)arg1 + 0x204) < 2) {
        if (*(long *)((long)arg1 + 0x18) != 0) {
          TAudioInstance__Stop((TAudioInstance *)((long)arg1 + 0x48));
        }
      } else if (*(uint *)((long)arg1 + 0x204) == 10) {
        TAudioInstance__Stop((TAudioInstance *)((long)arg1 + 0x98));
      } else if (*(long *)((long)arg1 + 0x28) != 0) {
        TAudioInstance__Stop((TAudioInstance *)((long)arg1 + 0x70));
      }
    }
    pGVar1 = SMBChapterData;
    *(int *)((long)arg1 + 0x204) = *(int *)(*(long *)((long)arg1 + 0x2e8) + 0x20) + 2;
    GSMBChapterData__SetLevelType(pGVar1);
    if (*(short *)((long)arg1 + 0x2e4) != 1) {
      iVar3 = GSMBMenu__IsInReplayMode(SMBMenu);
      if (iVar3 != 1) {
        SMBChapter__PlayChapterMusic__00491ea0(arg1);
      }
    }
    iCurrentLevel = 0;
    GSMBChapterData__SetCurrentLevel(SMBChapterData, 0);
    *(int *)arg1 = iCurrentLevel;
    GSuperMeatBoy__SetCurrentLevel(SuperMeatBoy, (TileLevel *)0x0);
    GSuperMeatBoy__SwitchGameMode(SuperMeatBoy);
    GSuperMeatBoy__Freeze(SuperMeatBoy, 0);
    if (*(int *)((long)arg1 + 0x204) != 3) {
      lVar4 = *(long *)((long)arg1 + 0x2e8);
      if (*(long **)(lVar4 + 0x40) != (long *)0x0) {
        (**(code **)(**(long **)(lVar4 + 0x40) + 8))();
        lVar4 = *(long *)((long)arg1 + 0x2e8);
      }
      lVar2 = GSuperMeatBoy__pLevelPalette;
      *(uint64_t *)(lVar4 + 0x40) = 0;
      *(uint64_t *)(*(long *)((long)arg1 + 0x2e8) + 0x38) = *(uint64_t *)(lVar2 + 0x108);
      if (*(long *)(*(long *)((long)arg1 + 0x2e8) + 0x38) != 0) {
        Sprint(&DAT_005c1d0a /* R:"life%i-%i" */, acStack_38, iCurrentLevel, 3);
        lVar4 = *(long *)((long)arg1 + 0x2e8);
        uVar5 = FlashAnimationLibrary__GetMovieClip__005731d0(
            *(FlashAnimationLibrary **)(lVar4 + 0x38), acStack_38);
        *(uint64_t *)(lVar4 + 0x40) = uVar5;
        if (*(long *)(*(long *)((long)arg1 + 0x2e8) + 0x40) != 0) {
          uStack_48 = 1;
          uStack_78 = *(uint64_t *)(*(long *)((long)arg1 + 0x2e8) + 0x40);
          uStack_60 = 0;
          uStack_58 = 0;
          uStack_50 = 0;
          uStack_4c = 1;
          uStack_84 = 0x43f00000;
          uStack_88 = 0x44200000;
          uStack_80 = 1;
          pcStack_70 = SMBLivesScreenFinished;
          pvStack_68 = arg1;
          GSMBCutSceneManager__PlayCutScene(SMBCutSceneManager, (SMBCutScene *)&uStack_88);
          GSuperMeatBoy__Freeze(SuperMeatBoy, 1);
        }
      }
    }
  }
  return;
}

/* ======================================================================
 * SMBChapterPlayWarpIntro  (Ghidra `SMBChapterPlayWarpIntro` @ 00493610)
 * Signature: uint8_t __stdcall SMBChapterPlayWarpIntro(void * arg1, int arg2, int arg3)
 * Calls: `DisableLoadingRenderThread`, `FlashAnimationLibrary__GetMovieClip__005731d0`, `GSMBChapterData__SetLevelType`, `GSMBCutSceneManager__PlayCutScene`, `GSMBMenu__GetLevelDataByIndex`, `Loader__WaitAll`, `SMBChapterLoadWarpZone`, `SMBChapter__GetLevelInfo`, `SMBChapter__LoadWarpZone`, `SMBWarpIntroSkip` (+4 more)
 * Called by: `SMBChapter__ActivateWarpZone`, `SMBChapter__ActivateWarpZoneFromMenu`
 */
/* WARNING: Removing unreachable block (ram,0x004935f7) */
/* WARNING: Removing unreachable block (ram,0x004935cc) */
/* WARNING: Removing unreachable block (ram,0x004935e4) */
/* SMBChapterPlayWarpIntro(void*, int, int) */

void SMBChapterPlayWarpIntro(void *arg1, int arg2, int arg3)

{
  int *piVar1;
  int iVar2;
  long *plVar3;
  uint8_t *puVar4;
  GSMBChapterData *pGVar5;
  uint64_t uVar6;
  char *__s;
  uint32_t in_register_00000014;
  uint32_t in_register_00000034;
  uint32_t uStack_c8;
  uint32_t uStack_c4;
  uint32_t uStack_c0;
  uint64_t uStack_b8;
  code *pcStack_b0;
  void *pvStack_a8;
  code *pcStack_a0;
  uint64_t uStack_98;
  uint32_t uStack_90;
  uint32_t uStack_8c;
  uint32_t uStack_88;
  long alStack_78[2];
  uint32_t uStack_68;
  long lStack_58;
  uchar *puStack_50;
  uint auStack_48[4];
  uint32_t auStack_38[2];
  uint64_t uStack_30;
  uint8_t *puStack_28;
  allocator aaStack_1c[12];

  plVar3 = *(long **)((long)arg1 + 0x290);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))(plVar3, CONCAT44(in_register_00000034, arg2),
                               CONCAT44(in_register_00000014, arg3));
  }
  *(uint64_t *)((long)arg1 + 0x290) = 0;
  auStack_38[0] = 5;
  uStack_30 = TPlayer__GetProfile((TPlayer *)Players__Player);
  BroadcastString__SetBroadcastString((BroadcastStringCreate *)auStack_38);
  puVar4 = *(uint8_t **)((long)arg1 + 0x2e8);
  if (puVar4 == (uint8_t *)0x0) {
    return;
  }
  if (puVar4 == &DAT_005c1d05 /* R:"none" */) {
    SMBChapter__LoadWarpZone(arg1);
    return;
  }
  uVar6 =
      FlashAnimationLibrary__GetMovieClip__005731d0(*(FlashAnimationLibrary **)(puVar4 + 0x28), 0);
  *(uint64_t *)(puVar4 + 0x30) = uVar6;
  uStack_98 = 0;
  uStack_8c = 1;
  uStack_88 = 1;
  uStack_b8 = *(uint64_t *)(*(long *)((long)arg1 + 0x2e8) + 0x30);
  uStack_c4 = 0x43f00000;
  uStack_c8 = 0x44200000;
  uStack_c0 = 1;
  pcStack_b0 = SMBChapterLoadWarpZone;
  pcStack_a0 = SMBWarpIntroSkip;
  uStack_90 = 1;
  pvStack_a8 = arg1;
  GSMBCutSceneManager__PlayCutScene(SMBCutSceneManager, (SMBCutScene *)&uStack_c8);
  if (*(int *)((long)arg1 + 0x2e0) != 1) {
    if (*(uint *)((long)arg1 + 0x204) < 2) {
      if (*(long *)((long)arg1 + 0x18) != 0) {
        TAudioInstance__Stop((TAudioInstance *)((long)arg1 + 0x48));
      }
    } else if (*(uint *)((long)arg1 + 0x204) == 10) {
      TAudioInstance__Stop((TAudioInstance *)((long)arg1 + 0x98));
    } else if (*(long *)((long)arg1 + 0x28) != 0) {
      TAudioInstance__Stop((TAudioInstance *)((long)arg1 + 0x70));
    }
  }
  pGVar5 = SMBChapterData;
  *(int *)((long)arg1 + 0x204) = *(int *)(*(long *)((long)arg1 + 0x2e8) + 0x20) + 2;
  GSMBChapterData__SetLevelType(pGVar5);
  puStack_28 = &DAT_008184c8 /* R:0.00016803004837129265f */;
  if (*(int *)((long)arg1 + 0x200) == 9) {
    lStack_58 = 0;
    puStack_50 = (uchar *)0x0;
    auStack_48[0] = 0;
    GSMBMenu__GetLevelDataByIndex(SMBMenu, 0, &puStack_50, auStack_48);
    if ((auStack_48[0] == 0) || (puStack_50 == (uchar *)0x0)) {
      if ((allocator *)(puStack_28 + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage) {
        LOCK();
        piVar1 = (int *)(puStack_28 + -8);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 < 1) {
          std__string_Rep_M_destroy((allocator *)(puStack_28 + -0x18));
        }
      }
      goto LAB_004933fa;
    }
    TileLevel__GetPaletteFromLevelFile((TileLevelLoad *)&lStack_58, (string *)&puStack_28);
    SMBPaletteBackgroundLoader__Load((char *)(SuperMeatBoy + 0x3b0), (int)puStack_28);
  } else {
    std__string_string((string *)&lStack_58, "Levels/", aaStack_1c);
    __s = (char *)SMBChapter__GetLevelInfo(arg1, 0, 0xb);
    strlen(__s);
    std__string_append((char *)&lStack_58, (ulong)__s);
    std__string_append((char *)&lStack_58, 0x5c1d1c);
    alStack_78[1] = 0;
    uStack_68 = 0;
    alStack_78[0] = lStack_58;
    TileLevel__GetPaletteFromLevelFile((TileLevelLoad *)alStack_78, (string *)&puStack_28);
    SMBPaletteBackgroundLoader__Load((char *)(SuperMeatBoy + 0x3b0), (int)puStack_28);
    if ((allocator *)(lStack_58 + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage) {
      LOCK();
      piVar1 = (int *)(lStack_58 + -8);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 < 1) {
        std__string_Rep_M_destroy((allocator *)(lStack_58 + -0x18));
      }
    }
  }
  if ((allocator *)(puStack_28 + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage) {
    LOCK();
    piVar1 = (int *)(puStack_28 + -8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 < 1) {
      std__string_Rep_M_destroy((allocator *)(puStack_28 + -0x18));
    }
  }
LAB_004933fa:
  Loader__WaitAll();
  DisableLoadingRenderThread();
  return;
}

/* ======================================================================
 * LoadBossIntro  (Ghidra `LoadBossIntro` @ 004944f0)
 * Signature: uint8_t __stdcall LoadBossIntro(void * arg1)
 * Calls: `SMBChapter__PlayBossIntro`, `SyncEvent__Set`
 * Called by: (none)
 */
/* LoadBossIntro(void*) */

uint64_t LoadBossIntro(void *arg1)

{
  int in_ESI;

  SMBChapter__PlayBossIntro(arg1, in_ESI);
  SyncEvent__Set((SyncEvent *)bossIntroEvent);
  return 0;
}

/* ======================================================================
 * LoadBossOutro  (Ghidra `LoadBossOutro` @ 004947e0)
 * Signature: uint8_t __stdcall LoadBossOutro(void * arg1)
 * Calls: `SMBChapter__PlayBossOutro`, `SyncEvent__Set`
 * Called by: (none)
 */
/* LoadBossOutro(void*) */

uint64_t LoadBossOutro(void *arg1)

{
  int in_ESI;

  SMBChapter__PlayBossOutro(arg1, in_ESI);
  SyncEvent__Set((SyncEvent *)bossOutroEvent);
  return 0;
}

/* ======================================================================
 * GetInternetsChapterMusic  (Ghidra `GetInternetsChapterMusic` @ 00495250)
 * Signature: uint8_t __stdcall GetInternetsChapterMusic(int arg1)
 * Calls: (none)
 * Called by: `EditorButton_ChapterLevelMusicPress`, `SMBChapter__LoadInternetsChapterMusic`
 */
/* GetInternetsChapterMusic(int) */

uint64_t GetInternetsChapterMusic(int arg1)

{
  return *(uint64_t *)(GetInternetsChapterMusic(int)::strMusicTracks + (long)arg1 * 8);
}

/* ======================================================================
 * SMBChapterDataSave  (Ghidra `SMBChapterDataSave` @ 00495bb0)
 * Signature: uint8_t SMBChapterDataSave(void)
 * Calls: `File__File`, `File__File__005b7a70`, `File__Read`, `FixFileCase`, `GSMBCutSceneManager__CancelSavingMessage`, `SyncEvent__Set`, `TPlayer__GetProfile`, `access`, `fclose`, `fopen` (+5 more)
 * Called by: `GSMBChapterData__SaveData`, `SaveData`
 */
/* WARNING: Removing unreachable block (ram,0x004961ab) */
/* WARNING: Removing unreachable block (ram,0x004961a0) */
/* WARNING: Removing unreachable block (ram,0x00496104) */

uint32_t SMBChapterDataSave(void *arg1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  void *__ptr;
  FILE *__s;
  long lVar5;
  long lVar6;
  char *local_c8;
  uint8_t *local_c0;
  uint32_t local_b8;
  uint64_t local_b0;
  uint32_t local_a8;
  uint32_t local_a4;
  uint32_t local_a0;
  uint32_t local_9c;
  uint32_t local_98;
  uint32_t local_94;
  uint8_t *local_90;
  File local_88[4];
  uint local_84;
  char *local_58[2];
  char *local_48[2];
  char *local_38;
  allocator local_2c[12];

  plVar4 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
  iVar3 = (**(code **)(*plVar4 + 0x20))(plVar4);
  if ((iVar3 == 1) &&
      (lVar5 = TPlayer__GetProfile((TPlayer *)Players__Player), *(int *)(lVar5 + 0xc) == 1)) {
    local_b8 = 2;
    local_b0 = 0;
    local_a8 = 0;
    local_a4 = 1;
    local_a0 = 1;
    local_9c = 0;
    local_94 = 0;
    local_90 = &DAT_005c04cf /* R:7.374579797039071e-39f */;
    local_c0 = &DAT_005c0513 /* R:u32=1996513911 */;
    local_c8 = "savegame.dat";
    local_98 = 0x1ca8;
    plVar4 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
    lVar5 = (**(code **)(*plVar4 + 0x40))(plVar4, &local_c8, 0);
    if (lVar5 == 0) {
      SyncEvent__Set((SyncEvent *)SMBChapterSaveEvent);
      if (arg1 != (void *)0x0) {
        operator_delete(arg1);
      }
      GSMBCutSceneManager__CancelSavingMessage(SMBCutSceneManager);
      return 1;
    }
    iVar3 = 0;
    plVar4 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
    (**(code **)(*plVar4 + 0x50))(plVar4, lVar5, arg1, 4);
    plVar4 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
    (**(code **)(*plVar4 + 0x50))(plVar4, lVar5, (long)arg1 + 4, 4);
    plVar4 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
    (**(code **)(*plVar4 + 0x50))(plVar4, lVar5, (long)arg1 + 8, 4);
    plVar4 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
    (**(code **)(*plVar4 + 0x50))(plVar4, lVar5, (long)arg1 + 0xc, 4);
    do {
      plVar4 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
      lVar6 = (long)iVar3;
      iVar3 = iVar3 + 1;
      lVar6 = (long)arg1 + lVar6 * 0xc + 0x10;
      (**(code **)(*plVar4 + 0x50))(plVar4, lVar5, lVar6, 1);
      plVar4 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
      (**(code **)(*plVar4 + 0x50))(plVar4, lVar5, lVar6 + 1, 1);
      plVar4 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
      (**(code **)(*plVar4 + 0x50))(plVar4, lVar5, lVar6 + 2, 1);
      plVar4 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
      (**(code **)(*plVar4 + 0x50))(plVar4, lVar5, lVar6 + 3, 1);
      plVar4 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
      (**(code **)(*plVar4 + 0x50))(plVar4, lVar5, lVar6 + 4, 2);
      plVar4 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
      (**(code **)(*plVar4 + 0x50))(plVar4, lVar5, lVar6 + 6, 1);
      plVar4 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
      (**(code **)(*plVar4 + 0x50))(plVar4, lVar5, lVar6 + 7, 1);
      plVar4 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
      (**(code **)(*plVar4 + 0x50))(plVar4, lVar5, lVar6 + 8, 4);
    } while (iVar3 != 10);
    iVar3 = 0;
    do {
      plVar4 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
      lVar6 = (long)iVar3;
      iVar3 = iVar3 + 1;
      lVar6 = lVar6 * 0xc;
      (**(code **)(*plVar4 + 0x50))(plVar4, lVar5, (long)arg1 + lVar6 + 0x88, 4);
      plVar4 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
      (**(code **)(*plVar4 + 0x50))(plVar4, lVar5, (long)arg1 + lVar6 + 0x8c, 4);
      plVar4 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
      (**(code **)(*plVar4 + 0x50))(plVar4, lVar5, (long)arg1 + lVar6 + 0x90, 4);
    } while (iVar3 != 600);
    plVar4 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
    (**(code **)(*plVar4 + 0x58))(plVar4, lVar5, 0);
  }
  free(arg1);
  FixFileCase((char *)local_58);
  iVar3 = access(local_58[0], 0);
  if (iVar3 == 0) {
    /* try { // try from 00495c24 to 00495c28 has its CatchHandler @ 004960ec */
    std__string_string((string *)local_48, GUserDataPath, local_2c);
    /* try { // try from 00495c3b to 00495c54 has its CatchHandler @ 0049610f */
    std__string_append((char *)local_48, 0x5c1f11);
    std__string_string((string *)&local_38, (string *)local_58);
    /* try { // try from 00495c67 to 00495c6b has its CatchHandler @ 00496121 */
    std__string_append((char *)&local_38, 0x5c1f11);
    local_b8 = 2;
    local_b0 = 0;
    local_a8 = 0;
    local_a4 = 1;
    local_a0 = 1;
    local_9c = 0;
    local_98 = 0;
    local_94 = 0;
    local_90 = &DAT_005c04cf /* R:7.374579797039071e-39f */;
    local_c0 = &DAT_005c328c /* R:u32=1811964530 */;
    local_c8 = local_48[0];
    /* try { // try from 00495cd6 to 00495cda has its CatchHandler @ 00496133 */
    File__File(local_88, (tagFileCreation *)&local_c8);
    uVar2 = local_84;
    __ptr = malloc((ulong)local_84);
    /* try { // try from 00495cf3 to 00495d2d has its CatchHandler @ 00496135 */
    File__Read(local_88, __ptr, uVar2);
    __s = fopen(local_38, "wb");
    if (__s != (FILE *)0x0) {
      fwrite(__ptr, (ulong)local_84, 1, __s);
      fclose(__s);
    }
    free(__ptr);
    /* try { // try from 00495d3b to 00495d3f has its CatchHandler @ 00496133 */
    File__File__005b7a70(local_88);
    if ((allocator *)(local_38 + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage) {
      LOCK();
      piVar1 = (int *)(local_38 + -8);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 < 1) {
        std__string_Rep_M_destroy((allocator *)(local_38 + -0x18));
      }
    }
    if ((allocator *)(local_48[0] + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage) {
      LOCK();
      piVar1 = (int *)(local_48[0] + -8);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 < 1) {
        std__string_Rep_M_destroy((allocator *)(local_48[0] + -0x18));
      }
    }
  }
  /* try { // try from 00495d77 to 00495d87 has its CatchHandler @ 004960ec */
  SyncEvent__Set((SyncEvent *)SMBChapterSaveEvent);
  GSMBCutSceneManager__CancelSavingMessage(SMBCutSceneManager);
  if ((allocator *)(local_58[0] + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage) {
    LOCK();
    piVar1 = (int *)(local_58[0] + -8);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 < 1) {
      std__string_Rep_M_destroy((allocator *)(local_58[0] + -0x18));
    }
  }
  return 0;
}

/* ======================================================================
 * GetChapterFileName  (Ghidra `GetChapterFileName` @ 00496a00)
 * Signature: uint8_t __stdcall GetChapterFileName(tagChapterName arg1)
 * Calls: (none)
 * Called by: (none)
 */
/* GSMBChapterData__GetChapterFileName(tagChapterName) */

char *GSMBChapterData__GetChapterFileName(void)

{
  return "savegame.dat";
}

/* ======================================================================
 * WriteToOverallLeaderboard  (Ghidra `WriteToOverallLeaderboard` @ 00497ae0)
 * Signature: uint8_t WriteToOverallLeaderboard(void)
 * Calls: `GSMBChapterData__CalculateOverallScore`, `TPlayer__GetProfile`
 * Called by: `GSMBChapterData__SaveLevelData`, `GSMBChapterData__SaveWarpzoneStats`, `WriteToOverallLeaderboard__00497c50`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WriteToOverallLeaderboard() [clone .part.24] */

void WriteToOverallLeaderboard(void)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  uint32_t local_68[2];
  uint32_t *local_60;
  uint64_t local_50;
  uint32_t local_48;
  uint local_38[4];
  uint local_28[4];
  uint local_18[6];

  local_38[0] = 0;
  local_28[0] = 0;
  local_18[0] = 0;
  Leaderboards__InitializeLeaderboardEntry((LeaderBoardEntry *)local_68, 3);
  local_50 = TPlayer__GetProfile((TPlayer *)Players__Player);
  if (*(int *)(SuperMeatBoy + 0x290) == 9) {
    local_28[0] = 0;
    local_68[0] = 1;
    lVar1 = 0;
    local_38[0] = 0;
    do {
      if (((byte)SMBChapterData[lVar1 + 0x1110] & 2) != 0) {
        local_38[0] = local_38[0] + 1;
        iVar3 =
            (int)(long)(*(float *)(SMBChapterData + lVar1 + 0x110c) * DAT_005c01c4 /* R:1000.0f */);
        uVar2 = 1000000 - iVar3;
        local_18[0] = local_18[0] + iVar3;
        if (1000000 < uVar2) {
          uVar2 = 1000000;
        }
        local_28[0] = local_28[0] + uVar2;
      }
      lVar1 = lVar1 + 0xc;
    } while (lVar1 != 0xb40);
  } else {
    local_68[0] = 0;
    GSMBChapterData__CalculateOverallScore(SMBChapterData, local_38, local_28, local_18);
  }
  local_48 = 1;
  *(uint8_t *)(local_60 + 1) = 1;
  *local_60 = 2;
  *(ulong *)(local_60 + 2) = (ulong)local_28[0];
  local_60[0xe] = local_38[0];
  *(uint8_t *)(local_60 + 0xd) = 0;
  local_60[0xc] = 6;
  *(uint8_t *)(local_60 + 7) = 0;
  local_60[6] = 7;
  local_60[8] = local_18[0];
  Leaderboards__WriteEntryToLeaderboard((LeaderBoardEntry *)local_68);
  return;
}

/* ======================================================================
 * WriteToOverallLeaderboard__00497c50  (Ghidra `WriteToOverallLeaderboard` @ 00497c50)
 * Signature: uint8_t WriteToOverallLeaderboard(void)
 * Calls: `System_IsTrialMode`, `WriteToOverallLeaderboard`
 * Called by: (none)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WriteToOverallLeaderboard() */

void WriteToOverallLeaderboard(void)

{
  int iVar1;

  iVar1 = System_IsTrialMode();
  if ((iVar1 != 1) && (*(int *)(SuperMeatBoy + 0x290) != 9)) {
    WriteToOverallLeaderboard();
    return;
  }
  return;
}

/* ======================================================================
 * EditorButton_ChapterLevelDeletePress  (Ghidra `EditorButton_ChapterLevelDeletePress` @ 0049e2b0)
 * Signature: uint8_t __stdcall EditorButton_ChapterLevelDeletePress(void * arg1)
 * Calls: (none)
 * Called by: `EditorFormChapterUpload__EditorFormChapterUpload__004b8ec0`
 */
/* EditorButton_ChapterLevelDeletePress(void*) */

void EditorButton_ChapterLevelDeletePress(void *arg1)

{
  long lVar1;

  lVar1 = pEditorChapterUploadForm + (long)(int)arg1 * 0x2c;
  *(uint32_t *)(lVar1 + 0x2d0) = 0xffffffff;
  *(uint8_t *)(lVar1 + 0x2dc) = 0;
  return;
}

/* ======================================================================
 * ShowLevelProperties  (Ghidra `ShowLevelProperties` @ 0049e3e0)
 * Signature: uint8_t __stdcall ShowLevelProperties(tagButtonProps * arg1, void * arg2)
 * Calls: `UIForm__Activate`
 * Called by: `SMBEditor__Activate`
 */
/* ShowLevelProperties(tagButtonProps const*, void*) */

void ShowLevelProperties(tagButtonProps *arg1, void *arg2)

{
  UIForm__Activate(SMBEditorForms__SMB_LEVEL_PROPS);
  return;
}

/* ======================================================================
 * DestroySMBEditorResources  (Ghidra `DestroySMBEditorResources` @ 0049e5e0)
 * Signature: uint8_t __stdcall DestroySMBEditorResources(void * arg1)
 * Calls: `BaseResource__Release`
 * Called by: `SMBEditor__SMBEditor`, `SMBEditor__SMBEditor__004ad010`
 */
/* DestroySMBEditorResources(void*) */

void DestroySMBEditorResources(void *arg1)

{
  if (*(BaseResource **)((long)arg1 + 0xd8) != (BaseResource *)0x0) {
    BaseResource__Release(*(BaseResource **)((long)arg1 + 0xd8), 0);
    *(uint64_t *)((long)arg1 + 0xd8) = 0;
  }
  if (*(BaseResource **)((long)arg1 + 0xe8) != (BaseResource *)0x0) {
    BaseResource__Release(*(BaseResource **)((long)arg1 + 0xe8), 0);
    *(uint64_t *)((long)arg1 + 0xe8) = 0;
  }
  if (*(BaseResource **)((long)arg1 + 0xe0) != (BaseResource *)0x0) {
    BaseResource__Release(*(BaseResource **)((long)arg1 + 0xe0), 0);
    *(uint64_t *)((long)arg1 + 0xe0) = 0;
  }
  if (*(BaseResource **)((long)arg1 + 0xf0) != (BaseResource *)0x0) {
    BaseResource__Release(*(BaseResource **)((long)arg1 + 0xf0), 0);
    *(uint64_t *)((long)arg1 + 0xf0) = 0;
  }
  if (pSelectionBox != (BaseResource *)0x0) {
    BaseResource__Release(pSelectionBox, 0);
    pSelectionBox = (BaseResource *)0x0;
  }
  if (pWaypointStream != (BaseResource *)0x0) {
    BaseResource__Release(pWaypointStream, 0);
    pWaypointStream = (BaseResource *)0x0;
  }
  if (pLightCross != (BaseResource *)0x0) {
    BaseResource__Release(pLightCross, 0);
    pLightCross = (BaseResource *)0x0;
  }
  return;
}

/* ======================================================================
 * CreateSMBEditorResources  (Ghidra `CreateSMBEditorResources` @ 0049e6c0)
 * Signature: uint8_t __stdcall CreateSMBEditorResources(void * arg1)
 * Calls: `BaseResource__Release`, `TexturePackage__CreateTexture`, `TexturePackage__TexturePackage`, `TexturePackage__TexturePackage__005a1b10`, `VertexStream__VertexStream__005a6980`
 * Called by: `SMBEditor__SMBEditor`, `SMBEditor__SMBEditor__004ad010`
 */
/* CreateSMBEditorResources(void*) */

void CreateSMBEditorResources(void *arg1)

{
  BaseResource *self;
  VertexStream *pVVar1;
  uint64_t uVar2;
  uint32_t local_108;
  uint32_t local_104;
  uint32_t local_100;
  uint32_t local_fc;
  uint32_t local_f8;
  uint32_t local_f4;
  uint32_t local_f0;
  uint32_t local_ec;
  uint32_t local_e8;
  uint32_t local_e4;
  uint32_t local_e0;
  uint32_t local_dc;
  uint32_t local_d8;
  uint32_t local_d4;
  uint32_t local_d0;
  uint32_t local_cc;
  uint64_t local_c8;
  uint16_t local_c0;
  uint32_t local_bc;
  uint32_t *local_b8;
  uint32_t local_b0;
  uint32_t local_ac;
  uint32_t local_a8;
  uint8_t local_98[2];
  uint16_t local_96;
  uint32_t local_94;
  uint32_t local_90;
  uint8_t local_8c;
  uint8_t local_88;
  uint32_t local_78;
  uint32_t local_74;
  uint32_t local_70;
  uint32_t local_6c;
  uint32_t local_68;
  uint32_t local_64;
  uint32_t local_60;
  uint32_t local_5c;
  TexturePackage local_58[32];
  uint8_t *local_38;
  uint16_t local_30;
  uint32_t local_2c;
  char *local_28;
  BaseResource *local_20;

  local_b8 = &local_108;
  local_108 = 0xbf000000;
  local_104 = 0x3f000000;
  local_100 = 0xbf000000;
  local_fc = 0xbf000000;
  local_f8 = 0xbf000000;
  local_f4 = 0xbf000000;
  local_f0 = 0x3f000000;
  local_ec = 0xbf000000;
  local_e8 = 0x3f000000;
  local_e4 = 0xbf000000;
  local_e0 = 0x3f000000;
  local_dc = 0x3f000000;
  local_d8 = 0x3f000000;
  local_d4 = 0x3f000000;
  local_d0 = 0xbf000000;
  local_cc = 0x3f000000;
  local_bc = 5;
  local_b0 = 0;
  local_ac = 1;
  local_a8 = 0;
  local_c8 = 0x40;
  local_c0 = 8;
  local_20 = (BaseResource *)VertexBuffer__Create((tagVertexBufferCreation *)&local_c8);
  local_38 = local_98;
  local_98[0] = 0;
  local_96 = 0;
  local_94 = 0;
  local_90 = 1;
  local_8c = 0;
  local_88 = 0xff;
  local_2c = 0;
  local_30 = 2;
  self = (BaseResource *)VertexDeclaration__Create((tagVertexDeclarationCreation *)&local_38);
  pVVar1 = BaseResource__operator_new(0xa8, 1);
  /* try { // try from 0049e83d to 0049e841 has its CatchHandler @ 0049ea4a */
  VertexStream__VertexStream__005a6980(pVVar1, 1, 4, 8, 5, &local_20, self);
  pSelectionBox = pVVar1;
  BaseResource__Release(local_20, 0);
  local_b8 = &local_78;
  local_78 = 0xbf800000;
  local_74 = 0;
  local_70 = 0x3f800000;
  local_6c = 0;
  local_68 = 0;
  local_64 = 0xbf800000;
  local_60 = 0;
  local_5c = 0x3f800000;
  local_c8 = 0x20;
  local_20 = (BaseResource *)VertexBuffer__Create((tagVertexBufferCreation *)&local_c8);
  pVVar1 = BaseResource__operator_new(0xa8, 1);
  /* try { // try from 0049e90e to 0049e912 has its CatchHandler @ 0049ea92 */
  VertexStream__VertexStream__005a6980(pVVar1, 1, 2, 4, 5, &local_20, self);
  pLightCross = pVVar1;
  BaseResource__Release(local_20, 0);
  local_c8 = 0x640;
  local_c0 = 8;
  local_b8 = (uint32_t *)0x0;
  local_20 = (BaseResource *)VertexBuffer__Create((tagVertexBufferCreation *)&local_c8);
  pVVar1 = BaseResource__operator_new(0xa8, 1);
  /* try { // try from 0049e98a to 0049e98e has its CatchHandler @ 0049ea7a */
  VertexStream__VertexStream__005a6980(pVVar1, 1, 100, 200, 5, &local_20, self);
  pWaypointStream = pVVar1;
  BaseResource__Release(local_20, 0);
  BaseResource__Release(self, 0);
  local_28 = "resources/Textures/editoricons.tp";
  TexturePackage__TexturePackage(local_58, (TexturePackageCreate *)&local_28);
  /* try { // try from 0049e9da to 0049ea29 has its CatchHandler @ 0049ea62 */
  uVar2 = TexturePackage__CreateTexture(local_58, 0);
  *(uint64_t *)((long)arg1 + 0xd8) = uVar2;
  uVar2 = TexturePackage__CreateTexture(local_58, 2);
  *(uint64_t *)((long)arg1 + 0xe8) = uVar2;
  uVar2 = TexturePackage__CreateTexture(local_58, 1);
  *(uint64_t *)((long)arg1 + 0xe0) = uVar2;
  uVar2 = TexturePackage__CreateTexture(local_58, 3);
  *(uint64_t *)((long)arg1 + 0xf0) = uVar2;
  TexturePackage__TexturePackage__005a1b10(local_58);
  return;
}

/* ======================================================================
 * EditorButton_ChapterLevelLineButtonClick  (Ghidra `EditorButton_ChapterLevelLineButtonClick` @ 0049f400)
 * Signature: uint8_t __stdcall EditorButton_ChapterLevelLineButtonClick(void * arg1)
 * Calls: `FlashLibraryInstance__GotoAndStop`
 * Called by: `EditorFormChapterUpload__EditorFormChapterUpload__004b8ec0`
 */
/* EditorButton_ChapterLevelLineButtonClick(void*) */

void EditorButton_ChapterLevelLineButtonClick(void *arg1)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  long lVar3;

  lVar3 = pEditorChapterUploadForm;
  *(int *)(pEditorChapterUploadForm + 0x2cc) = (int)arg1;
  FlashLibraryInstance__GotoAndStop(*(FlashLibraryInstance **)(lVar3 + 8), 1);
  puVar1 = (uint64_t *)(lVar3 + 0x640 + (long)(int)arg1 * 0x2c);
  puVar2 = (uint64_t *)(lVar3 + 0x2d0 + (long)*(int *)(lVar3 + 0x2c8) * 0x2c);
  if (puVar1 != puVar2) {
    *puVar2 = *puVar1;
    puVar2[1] = puVar1[1];
    puVar2[2] = puVar1[2];
    puVar2[3] = puVar1[3];
    puVar2[4] = puVar1[4];
    *(uint32_t *)(puVar2 + 5) = *(uint32_t *)(puVar1 + 5);
  }
  return;
}

/* ======================================================================
 * EditorForm_ChapterUploadFormCancel  (Ghidra `EditorForm_ChapterUploadFormCancel` @ 0049f490)
 * Signature: uint8_t __stdcall EditorForm_ChapterUploadFormCancel(void * arg1)
 * Calls: `TAudioCue__TAudioCue__0057ab30`, `TAudioInstance__IsPlaying`, `TAudioInstance__Stop`, `operator_delete`
 * Called by: `SMBEditor__SMBEditor__004ad010`
 */
/* EditorForm_ChapterUploadFormCancel(void*) */

void EditorForm_ChapterUploadFormCancel(void *arg1)

{
  TAudioInstance *self;
  TAudioCue *this_00;
  long lVar1;
  int iVar2;

  lVar1 = pEditorChapterUploadForm;
  self = (TAudioInstance *)(pEditorChapterUploadForm + 0x808);
  iVar2 = TAudioInstance__IsPlaying(self);
  if (iVar2 == 1) {
    TAudioInstance__Stop(self);
    this_00 = *(TAudioCue **)(lVar1 + 0x800);
    if (this_00 != (TAudioCue *)0x0) {
      TAudioCue__TAudioCue__0057ab30(this_00);
      operator_delete(this_00);
    }
  }
  *(uint32_t *)(lVar1 + 0xac) = 1;
  return;
}

/* ======================================================================
 * EditorButton_ChapterLevelMusicPress  (Ghidra `EditorButton_ChapterLevelMusicPress` @ 0049f6e0)
 * Signature: uint8_t __stdcall EditorButton_ChapterLevelMusicPress(void * arg1)
 * Calls: `GetInternetsChapterMusic`, `TAudioCue__Play`, `TAudioCue__TAudioCue__0057ab30`, `TAudioInstance__IsPlaying`, `TAudioInstance__Stop`, `operator_delete`
 * Called by: `EditorFormChapterUpload__EditorFormChapterUpload__004b8ec0`
 */
/* EditorButton_ChapterLevelMusicPress(void*) */

void EditorButton_ChapterLevelMusicPress(void *arg1)

{
  TAudioInstance *self;
  uint uVar1;
  long lVar2;
  int iVar3;
  TAudioCue *pTVar4;
  uint32_t local_48[2];
  uint64_t local_40;
  uint32_t local_38;
  uint32_t local_34;

  lVar2 = pEditorChapterUploadForm;
  self = (TAudioInstance *)(pEditorChapterUploadForm + 0x808);
  iVar3 = TAudioInstance__IsPlaying(self);
  if (iVar3 == 1) {
    TAudioInstance__Stop(self);
    pTVar4 = *(TAudioCue **)(lVar2 + 0x800);
    if (pTVar4 != (TAudioCue *)0x0) {
      TAudioCue__TAudioCue__0057ab30(pTVar4);
      operator_delete(pTVar4);
    }
  }
  local_48[0] = 0;
  local_40 = 0;
  local_38 = 0;
  local_34 = 0;
  local_40 = GetInternetsChapterMusic((int)arg1);
  local_48[0] = 5;
  pTVar4 = (TAudioCue *)TAudioCue__Create((TAudioCueCreation *)local_48);
  uVar1 = GLOBALMUSICVOLUME;
  *(TAudioCue **)(lVar2 + 0x800) = pTVar4;
  TAudioCue__Play(pTVar4, uVar1, 0, self);
  *(int *)(lVar2 + 0x7fc) = (int)arg1;
  return;
}

/* ======================================================================
 * EditorForm_ChapterUploadFormOpen  (Ghidra `EditorForm_ChapterUploadFormOpen` @ 004a4870)
 * Signature: uint8_t __stdcall EditorForm_ChapterUploadFormOpen(void * arg1)
 * Calls: `CreateMessage`, `EditorForm__Activate`, `GetLocalizedText`, `SteamUser`, `UserAlertCloseCurrent`
 * Called by: `SMBEditor__SMBEditor__004ad010`
 */
/* EditorForm_ChapterUploadFormOpen(void*) */

void EditorForm_ChapterUploadFormOpen(void *arg1)

{
  int iVar1;
  long lVar2;
  EditorForm *self;
  uint32_t local_78[2];
  wchar_t *local_70;
  wchar_t *local_68;
  uint64_t local_60;
  uint64_t local_58;
  code *local_50;
  uint64_t local_48;
  uint64_t local_40;
  uint64_t local_38;
  uint64_t local_30;
  uint64_t local_28;
  uint64_t local_20;
  uint64_t local_18;
  uint64_t local_10;

  lVar2 = SteamUser();
  self = pEditorChapterUploadForm;
  if (lVar2 != 0) {
    *(uint32_t *)(pEditorChapterUploadForm + 0x7fc) = 0;
    EditorForm__Activate(self);
    iVar1 = 0;
    do {
      if (iVar1 < 10) {
        *(uint32_t *)(self + 0x640) = 0xffffffff;
      }
      iVar1 = iVar1 + 1;
      *(uint32_t *)(self + 0x2d0) = 0xffffffff;
      self = self + 0x2c;
    } while (iVar1 != 0x14);
    return;
  }
  local_60 = 0;
  local_58 = 0;
  local_50 = (code *)0x0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  local_70 = L"Steam Login Required";
  local_68 = L"You must be logged into \nSteam in order to use this feature";
  local_78[0] = 0xe;
  local_60 = GetLocalizedText(4);
  local_50 = UserAlertCloseCurrent;
  CreateMessage(local_78);
  return;
}

/* ======================================================================
 * EditorForm_ChapterUploadFormSearch  (Ghidra `EditorForm_ChapterUploadFormSearch` @ 004a6220)
 * Signature: uint8_t __stdcall EditorForm_ChapterUploadFormSearch(void * arg1)
 * Calls: `EditorFormChapterUpload__LoadLevelLibrary`
 * Called by: `SMBEditor__SMBEditor__004ad010`
 */
/* EditorForm_ChapterUploadFormSearch(void*) */

void EditorForm_ChapterUploadFormSearch(void *arg1)

{
  EditorFormChapterUpload *self;

  self = pEditorChapterUploadForm;
  *(uint32_t *)(pEditorChapterUploadForm + 0x7f8) = 0;
  EditorFormChapterUpload__LoadLevelLibrary(self);
  return;
}

/* ======================================================================
 * EditorButton_ChapterLevelButtonClick  (Ghidra `EditorButton_ChapterLevelButtonClick` @ 004a6240)
 * Signature: uint8_t __stdcall EditorButton_ChapterLevelButtonClick(void * arg1)
 * Calls: `EditorFormChapterUpload__LoadLevelLibrary`, `FlashLibraryInstance__GotoAndStop`
 * Called by: `EditorFormChapterUpload__EditorFormChapterUpload__004b8ec0`
 */
/* EditorButton_ChapterLevelButtonClick(void*) */

void EditorButton_ChapterLevelButtonClick(void *arg1)

{
  EditorFormChapterUpload *self;

  self = pEditorChapterUploadForm;
  *(int *)(pEditorChapterUploadForm + 0x2c8) = (int)arg1;
  FlashLibraryInstance__GotoAndStop(*(FlashLibraryInstance **)(self + 8), 2);
  EditorFormChapterUpload__LoadLevelLibrary(self);
  return;
}

/* ======================================================================
 * EditorButton_ChapterLibraryRightClick  (Ghidra `EditorButton_ChapterLibraryRightClick` @ 004a6270)
 * Signature: uint8_t __stdcall EditorButton_ChapterLibraryRightClick(void * arg1)
 * Calls: `EditorFormChapterUpload__LoadLevelLibrary`
 * Called by: `EditorFormChapterUpload__EditorFormChapterUpload__004b8ec0`
 */
/* EditorButton_ChapterLibraryRightClick(void*) */

void EditorButton_ChapterLibraryRightClick(void *arg1)

{
  EditorFormChapterUpload *self;

  self = pEditorChapterUploadForm;
  *(int *)(pEditorChapterUploadForm + 0x7f8) = *(int *)(pEditorChapterUploadForm + 0x7f8) + 10;
  EditorFormChapterUpload__LoadLevelLibrary(self);
  return;
}

/* ======================================================================
 * EditorButton_ChapterLibraryLeftClick  (Ghidra `EditorButton_ChapterLibraryLeftClick` @ 004a6290)
 * Signature: uint8_t __stdcall EditorButton_ChapterLibraryLeftClick(void * arg1)
 * Calls: `EditorFormChapterUpload__LoadLevelLibrary`
 * Called by: `EditorFormChapterUpload__EditorFormChapterUpload__004b8ec0`
 */
/* EditorButton_ChapterLibraryLeftClick(void*) */

void EditorButton_ChapterLibraryLeftClick(void *arg1)

{
  EditorFormChapterUpload *self;
  int iVar1;

  self = pEditorChapterUploadForm;
  iVar1 = 0;
  if (9 < *(int *)(pEditorChapterUploadForm + 0x7f8)) {
    iVar1 = *(int *)(pEditorChapterUploadForm + 0x7f8) + -10;
  }
  *(int *)(pEditorChapterUploadForm + 0x7f8) = iVar1;
  EditorFormChapterUpload__LoadLevelLibrary(self);
  return;
}

/* ======================================================================
 * EditorForm_ChapterUploadFormOk  (Ghidra `EditorForm_ChapterUploadFormOk` @ 004a62c0)
 * Signature: uint8_t __stdcall EditorForm_ChapterUploadFormOk(void * arg1)
 * Calls: `EditorFormChapterUpload__UploadChapter`
 * Called by: `SMBEditor__SMBEditor__004ad010`
 */
/* EditorForm_ChapterUploadFormOk(void*) */

void EditorForm_ChapterUploadFormOk(void *arg1)

{
  EditorFormChapterUpload__UploadChapter(pEditorChapterUploadForm);
  return;
}

/* ======================================================================
 * SaveLevelPress  (Ghidra `SaveLevelPress` @ 004a9d00)
 * Signature: uint8_t __stdcall SaveLevelPress(tagButtonProps * arg1, void * arg2)
 * Calls: `Sprint`, `TKeyboard__BackupCallbacks`
 * Called by: (none)
 */
/* SaveLevelPress(tagButtonProps const*, void*) */

void SaveLevelPress(tagButtonProps *arg1, void *arg2)

{
  InputCallback **ppIVar1;
  long lVar2;
  TKeyboard *self;
  long *plVar3;
  char acStack_28[32];

  self = Keyboard;
  lVar2 = pEditorSaveForm;
  if (*(int *)arg1 != 1) {
    return;
  }
  if (*(int *)(SuperMeatBoy + 0x2c) != 1) {
    return;
  }
  ppIVar1 = (InputCallback **)(pEditorSaveForm + 0xb0);
  *(uint64_t *)(pEditorSaveForm + 0xb0) = 0;
  TKeyboard__BackupCallbacks(self, ppIVar1);
  if (pCurrentVisibleForm == 0) {
    if (lVar2 == 0)
      goto LAB_004a9fac;
  } else {
    if (lVar2 == pCurrentVisibleForm)
      goto LAB_004a9fac;
    *(uint32_t *)(pCurrentVisibleForm + 0xac) = 1;
  }
  FlashAnimationLibrary__SetTextFieldText(*(char **)(lVar2 + 0x78), "formlabel", lVar2 + 0x88);
  plVar3 = *(long **)(lVar2 + 0x80);
  if (*plVar3 != 0) {
    Sprint("labeltext%i", acStack_28, 1);
    FlashAnimationLibrary__SetTextFieldText(*(char **)(lVar2 + 0x78), acStack_28,
                                            **(uint64_t **)(lVar2 + 0x80));
    plVar3 = *(long **)(lVar2 + 0x80);
  }
  if (plVar3[1] != 0) {
    Sprint("labeltext%i", acStack_28, 2);
    FlashAnimationLibrary__SetTextFieldText(*(char **)(lVar2 + 0x78), acStack_28,
                                            *(uint64_t *)(*(long *)(lVar2 + 0x80) + 8));
    plVar3 = *(long **)(lVar2 + 0x80);
  }
  if (plVar3[2] != 0) {
    Sprint("labeltext%i", acStack_28, 3);
    FlashAnimationLibrary__SetTextFieldText(*(char **)(lVar2 + 0x78), acStack_28,
                                            *(uint64_t *)(*(long *)(lVar2 + 0x80) + 0x10));
    plVar3 = *(long **)(lVar2 + 0x80);
  }
  if (plVar3[3] != 0) {
    Sprint("labeltext%i", acStack_28, 4);
    FlashAnimationLibrary__SetTextFieldText(*(char **)(lVar2 + 0x78), acStack_28,
                                            *(uint64_t *)(*(long *)(lVar2 + 0x80) + 0x18));
    plVar3 = *(long **)(lVar2 + 0x80);
  }
  if (plVar3[4] != 0) {
    Sprint("labeltext%i", acStack_28, 5);
    FlashAnimationLibrary__SetTextFieldText(*(char **)(lVar2 + 0x78), acStack_28,
                                            *(uint64_t *)(*(long *)(lVar2 + 0x80) + 0x20));
  }
  if (*(long *)(lVar2 + 0x28) != 0) {
    FlashEditableTextField__SetText(*(char **)(*(long *)(lVar2 + 0x28) + 0x50), "");
  }
  if (*(long *)(lVar2 + 0x30) != 0) {
    FlashEditableTextField__SetText(*(char **)(*(long *)(lVar2 + 0x30) + 0x50), "");
  }
  if (*(long *)(lVar2 + 0x38) != 0) {
    FlashEditableTextField__SetText(*(char **)(*(long *)(lVar2 + 0x38) + 0x50), "");
  }
  if (*(long *)(lVar2 + 0x40) != 0) {
    FlashEditableTextField__SetText(*(char **)(*(long *)(lVar2 + 0x40) + 0x50), "");
  }
  if (*(long *)(lVar2 + 0x48) != 0) {
    FlashEditableTextField__SetText(*(char **)(*(long *)(lVar2 + 0x48) + 0x50), "");
  }
  if (*(long *)(lVar2 + 0x50) != 0) {
    FlashEditableTextField__SetText(*(char **)(*(long *)(lVar2 + 0x50) + 0x50), "");
  }
  if (*(long *)(lVar2 + 0x58) != 0) {
    FlashEditableTextField__SetText(*(char **)(*(long *)(lVar2 + 0x58) + 0x50), "");
  }
  if (*(long *)(lVar2 + 0x60) != 0) {
    FlashEditableTextField__SetText(*(char **)(*(long *)(lVar2 + 0x60) + 0x50), "");
  }
  if (*(long *)(lVar2 + 0x68) != 0) {
    FlashEditableTextField__SetText(*(char **)(*(long *)(lVar2 + 0x68) + 0x50), "");
  }
  if (*(long *)(lVar2 + 0x70) != 0) {
    FlashEditableTextField__SetText(*(char **)(*(long *)(lVar2 + 0x70) + 0x50), "");
  }
  pCurrentVisibleForm = lVar2;
  *(uint32_t *)(lVar2 + 0xa8) = 1;
LAB_004a9fac:
  if (*(long **)(lVar2 + 0x28) != (long *)0x0) {
    (**(code **)(**(long **)(lVar2 + 0x28) + 0x48))();
  }
  if (*(long **)(lVar2 + 0x30) != (long *)0x0) {
    (**(code **)(**(long **)(lVar2 + 0x30) + 0x48))();
  }
  if (*(long **)(lVar2 + 0x38) != (long *)0x0) {
    (**(code **)(**(long **)(lVar2 + 0x38) + 0x48))();
  }
  if (*(long **)(lVar2 + 0x40) != (long *)0x0) {
    (**(code **)(**(long **)(lVar2 + 0x40) + 0x48))();
  }
  if (*(long **)(lVar2 + 0x48) != (long *)0x0) {
    (**(code **)(**(long **)(lVar2 + 0x48) + 0x48))();
  }
  if (*(long **)(lVar2 + 0x50) != (long *)0x0) {
    (**(code **)(**(long **)(lVar2 + 0x50) + 0x48))();
  }
  if (*(long **)(lVar2 + 0x58) != (long *)0x0) {
    (**(code **)(**(long **)(lVar2 + 0x58) + 0x48))();
  }
  if (*(long **)(lVar2 + 0x60) != (long *)0x0) {
    (**(code **)(**(long **)(lVar2 + 0x60) + 0x48))();
  }
  if (*(long **)(lVar2 + 0x68) != (long *)0x0) {
    (**(code **)(**(long **)(lVar2 + 0x68) + 0x48))();
  }
  if (*(long **)(lVar2 + 0x70) != (long *)0x0) {
    (**(code **)(**(long **)(lVar2 + 0x70) + 0x48))();
  }
  if (*(long **)(lVar2 + 0x28) == (long *)0x0) {
    return;
  }
  (**(code **)(**(long **)(lVar2 + 0x28) + 0x38))();
  return;
}

/* ======================================================================
 * LoadLevelPress  (Ghidra `LoadLevelPress` @ 004aa070)
 * Signature: uint8_t __stdcall LoadLevelPress(tagButtonProps * arg1, void * arg2)
 * Calls: `Sprint`, `TKeyboard__BackupCallbacks`
 * Called by: (none)
 */
/* LoadLevelPress(tagButtonProps const*, void*) */

void LoadLevelPress(tagButtonProps *arg1, void *arg2)

{
  InputCallback **ppIVar1;
  long lVar2;
  TKeyboard *self;
  long *plVar3;
  char acStack_28[32];

  self = Keyboard;
  lVar2 = pEditorLoadForm;
  if (*(int *)arg1 != 1) {
    return;
  }
  if (*(int *)(SuperMeatBoy + 0x2c) != 1) {
    return;
  }
  ppIVar1 = (InputCallback **)(pEditorLoadForm + 0xb0);
  *(uint64_t *)(pEditorLoadForm + 0xb0) = 0;
  TKeyboard__BackupCallbacks(self, ppIVar1);
  if (pCurrentVisibleForm == 0) {
    if (lVar2 == 0)
      goto LAB_004aa31c;
  } else {
    if (lVar2 == pCurrentVisibleForm)
      goto LAB_004aa31c;
    *(uint32_t *)(pCurrentVisibleForm + 0xac) = 1;
  }
  FlashAnimationLibrary__SetTextFieldText(*(char **)(lVar2 + 0x78), "formlabel", lVar2 + 0x88);
  plVar3 = *(long **)(lVar2 + 0x80);
  if (*plVar3 != 0) {
    Sprint("labeltext%i", acStack_28, 1);
    FlashAnimationLibrary__SetTextFieldText(*(char **)(lVar2 + 0x78), acStack_28,
                                            **(uint64_t **)(lVar2 + 0x80));
    plVar3 = *(long **)(lVar2 + 0x80);
  }
  if (plVar3[1] != 0) {
    Sprint("labeltext%i", acStack_28, 2);
    FlashAnimationLibrary__SetTextFieldText(*(char **)(lVar2 + 0x78), acStack_28,
                                            *(uint64_t *)(*(long *)(lVar2 + 0x80) + 8));
    plVar3 = *(long **)(lVar2 + 0x80);
  }
  if (plVar3[2] != 0) {
    Sprint("labeltext%i", acStack_28, 3);
    FlashAnimationLibrary__SetTextFieldText(*(char **)(lVar2 + 0x78), acStack_28,
                                            *(uint64_t *)(*(long *)(lVar2 + 0x80) + 0x10));
    plVar3 = *(long **)(lVar2 + 0x80);
  }
  if (plVar3[3] != 0) {
    Sprint("labeltext%i", acStack_28, 4);
    FlashAnimationLibrary__SetTextFieldText(*(char **)(lVar2 + 0x78), acStack_28,
                                            *(uint64_t *)(*(long *)(lVar2 + 0x80) + 0x18));
    plVar3 = *(long **)(lVar2 + 0x80);
  }
  if (plVar3[4] != 0) {
    Sprint("labeltext%i", acStack_28, 5);
    FlashAnimationLibrary__SetTextFieldText(*(char **)(lVar2 + 0x78), acStack_28,
                                            *(uint64_t *)(*(long *)(lVar2 + 0x80) + 0x20));
  }
  if (*(long *)(lVar2 + 0x28) != 0) {
    FlashEditableTextField__SetText(*(char **)(*(long *)(lVar2 + 0x28) + 0x50), "");
  }
  if (*(long *)(lVar2 + 0x30) != 0) {
    FlashEditableTextField__SetText(*(char **)(*(long *)(lVar2 + 0x30) + 0x50), "");
  }
  if (*(long *)(lVar2 + 0x38) != 0) {
    FlashEditableTextField__SetText(*(char **)(*(long *)(lVar2 + 0x38) + 0x50), "");
  }
  if (*(long *)(lVar2 + 0x40) != 0) {
    FlashEditableTextField__SetText(*(char **)(*(long *)(lVar2 + 0x40) + 0x50), "");
  }
  if (*(long *)(lVar2 + 0x48) != 0) {
    FlashEditableTextField__SetText(*(char **)(*(long *)(lVar2 + 0x48) + 0x50), "");
  }
  if (*(long *)(lVar2 + 0x50) != 0) {
    FlashEditableTextField__SetText(*(char **)(*(long *)(lVar2 + 0x50) + 0x50), "");
  }
  if (*(long *)(lVar2 + 0x58) != 0) {
    FlashEditableTextField__SetText(*(char **)(*(long *)(lVar2 + 0x58) + 0x50), "");
  }
  if (*(long *)(lVar2 + 0x60) != 0) {
    FlashEditableTextField__SetText(*(char **)(*(long *)(lVar2 + 0x60) + 0x50), "");
  }
  if (*(long *)(lVar2 + 0x68) != 0) {
    FlashEditableTextField__SetText(*(char **)(*(long *)(lVar2 + 0x68) + 0x50), "");
  }
  if (*(long *)(lVar2 + 0x70) != 0) {
    FlashEditableTextField__SetText(*(char **)(*(long *)(lVar2 + 0x70) + 0x50), "");
  }
  pCurrentVisibleForm = lVar2;
  *(uint32_t *)(lVar2 + 0xa8) = 1;
LAB_004aa31c:
  if (*(long **)(lVar2 + 0x28) != (long *)0x0) {
    (**(code **)(**(long **)(lVar2 + 0x28) + 0x48))();
  }
  if (*(long **)(lVar2 + 0x30) != (long *)0x0) {
    (**(code **)(**(long **)(lVar2 + 0x30) + 0x48))();
  }
  if (*(long **)(lVar2 + 0x38) != (long *)0x0) {
    (**(code **)(**(long **)(lVar2 + 0x38) + 0x48))();
  }
  if (*(long **)(lVar2 + 0x40) != (long *)0x0) {
    (**(code **)(**(long **)(lVar2 + 0x40) + 0x48))();
  }
  if (*(long **)(lVar2 + 0x48) != (long *)0x0) {
    (**(code **)(**(long **)(lVar2 + 0x48) + 0x48))();
  }
  if (*(long **)(lVar2 + 0x50) != (long *)0x0) {
    (**(code **)(**(long **)(lVar2 + 0x50) + 0x48))();
  }
  if (*(long **)(lVar2 + 0x58) != (long *)0x0) {
    (**(code **)(**(long **)(lVar2 + 0x58) + 0x48))();
  }
  if (*(long **)(lVar2 + 0x60) != (long *)0x0) {
    (**(code **)(**(long **)(lVar2 + 0x60) + 0x48))();
  }
  if (*(long **)(lVar2 + 0x68) != (long *)0x0) {
    (**(code **)(**(long **)(lVar2 + 0x68) + 0x48))();
  }
  if (*(long **)(lVar2 + 0x70) != (long *)0x0) {
    (**(code **)(**(long **)(lVar2 + 0x70) + 0x48))();
  }
  if (*(long **)(lVar2 + 0x28) == (long *)0x0) {
    return;
  }
  (**(code **)(**(long **)(lVar2 + 0x28) + 0x38))();
  return;
}

/* ======================================================================
 * SMB_LOAD_LEVEL_Activate  (Ghidra `SMB_LOAD_LEVEL_Activate` @ 004bab60)
 * Signature: uint8_t __stdcall SMB_LOAD_LEVEL_Activate(void * arg1)
 * Calls: (none)
 * Called by: `SMBEditorForms__Initialize`
 */
/* SMB_LOAD_LEVEL_Activate(void*) */

void SMB_LOAD_LEVEL_Activate(void *arg1)

{
  (**(code **)(*pSMBLoadFileName + 0x30))();
  *(long **)(SMBEditorForms__SMB_LOAD_LEVEL + 0x98) = pSMBLoadFileName;
  return;
}

/* ======================================================================
 * SMB_LEVEL_PROPS_Activate  (Ghidra `SMB_LEVEL_PROPS_Activate` @ 004bac50)
 * Signature: uint8_t __stdcall SMB_LEVEL_PROPS_Activate(void * arg1)
 * Calls: (none)
 * Called by: `SMBEditorForms__Initialize`
 */
/* SMB_LEVEL_PROPS_Activate(void*) */

void SMB_LEVEL_PROPS_Activate(void *arg1)

{
  ushort uVar1;

  uVar1 = *(ushort *)(*(long *)(SuperMeatBoy + 0x40) + 0x3a);
  UITextField__SetDynamicText(pSMBLEVELPROPSWidth, &DAT_005c6660 /* R:5.184804318001823e-44f */,
                              (ulong) * (ushort *)(*(long *)(SuperMeatBoy + 0x40) + 0x38));
  UITextField__SetDynamicText(pSMBLEVELPROPSHeight, &DAT_005c6660 /* R:5.184804318001823e-44f */,
                              (ulong)uVar1);
  return;
}

/* ======================================================================
 * ActivatePlayerProps  (Ghidra `ActivatePlayerProps` @ 004bb3b0)
 * Signature: uint8_t __stdcall ActivatePlayerProps(void * arg1)
 * Calls: `GSuperMeatBoy__getChar`
 * Called by: `SMBEditorForms__Initialize`
 */
/* ActivatePlayerProps(void*) */

void ActivatePlayerProps(void *arg1)

{
  long lVar1;

  lVar1 = GSuperMeatBoy__getChar(SuperMeatBoy, 1);
  UITextField__SetDynamicText(pSMBPLAYERPROPRun, (double)*(float *)(lVar1 + 0x8a8),
                              &DAT_005c48d0 /* R:5.184804318001823e-44f */);
  UITextField__SetDynamicText(pSMBPLAYERPROPWalk, (double)*(float *)(lVar1 + 0x8ac),
                              &DAT_005c48d0 /* R:5.184804318001823e-44f */);
  UITextField__SetDynamicText(pSMBPLAYERPROPJump, (double)*(float *)(lVar1 + 0x8b0),
                              &DAT_005c48d0 /* R:5.184804318001823e-44f */);
  UITextField__SetDynamicText(pSMBPLAYERPROPWallJumpUp, (double)*(float *)(lVar1 + 0x8b4),
                              &DAT_005c48d0 /* R:5.184804318001823e-44f */);
  UITextField__SetDynamicText(pSMBPLAYERPROPWallJumpOut, (double)*(float *)(lVar1 + 0x8b8),
                              &DAT_005c48d0 /* R:5.184804318001823e-44f */);
  UITextField__SetDynamicText(pSMBPLAYERPROPWallJumpFriction, (double)*(float *)(lVar1 + 0x8bc),
                              &DAT_005c48d0 /* R:5.184804318001823e-44f */);
  UITextField__SetDynamicText(pSMBPLAYERPROPDrag, (double)*(float *)(lVar1 + 0x8c0),
                              &DAT_005c48d0 /* R:5.184804318001823e-44f */);
  UITextField__SetDynamicText(pSMBPLAYERPROPGravity, (double)*(float *)(lVar1 + 0x8c4),
                              &DAT_005c48d0 /* R:5.184804318001823e-44f */);
  UITextField__SetDynamicText(pSMBPLAYERPROPScale, (double)*(float *)(lVar1 + 0x8c8),
                              &DAT_005c48d0 /* R:5.184804318001823e-44f */);
  UITextField__SetDynamicText(pSMBPLAYERPROPTileBounds, (double)*(float *)(lVar1 + 0x8cc),
                              &DAT_005c48d0 /* R:5.184804318001823e-44f */);
  UITextField__SetDynamicText(pSMBPLAYERPROPKillBounds, (double)*(float *)(lVar1 + 0x8d0),
                              &DAT_005c48d0 /* R:5.184804318001823e-44f */);
  UITextField__SetDynamicText(pSMBPLAYERPROPHillDamper, (double)*(float *)(lVar1 + 0xa30),
                              &DAT_005c48d0 /* R:5.184804318001823e-44f */);
  UITextField__SetDynamicText(pSMBPLAYERPROPTurnFriction, (double)*(float *)(lVar1 + 0xa34),
                              &DAT_005c48d0 /* R:5.184804318001823e-44f */);
  return;
}

/* ======================================================================
 * DeactivatePlayerProps  (Ghidra `DeactivatePlayerProps` @ 004bb920)
 * Signature: uint8_t __stdcall DeactivatePlayerProps(void * arg1)
 * Calls: `GSuperMeatBoy__getChar`, `MeatBoyCharactor__WritePropertiesToFile`, `StringToFloatW`
 * Called by: `SMBEditorForms__Initialize`
 */
/* DeactivatePlayerProps(void*) */

void DeactivatePlayerProps(void *arg1)

{
  long lVar1;
  GSuperMeatBoy *self;
  long lVar2;
  MeatBoyCharactor *this_00;
  uint32_t uVar3;

  lVar2 = GSuperMeatBoy__getChar(SuperMeatBoy, 1);
  uVar3 = StringToFloatW(*(uint64_t *)(pSMBPLAYERPROPRun + 0x40));
  lVar1 = pSMBPLAYERPROPWalk;
  *(uint32_t *)(lVar2 + 0x8a8) = uVar3;
  uVar3 = StringToFloatW(*(uint64_t *)(lVar1 + 0x40));
  lVar1 = pSMBPLAYERPROPJump;
  *(uint32_t *)(lVar2 + 0x8ac) = uVar3;
  uVar3 = StringToFloatW(*(uint64_t *)(lVar1 + 0x40));
  lVar1 = pSMBPLAYERPROPWallJumpUp;
  *(uint32_t *)(lVar2 + 0x8b0) = uVar3;
  uVar3 = StringToFloatW(*(uint64_t *)(lVar1 + 0x40));
  lVar1 = pSMBPLAYERPROPWallJumpOut;
  *(uint32_t *)(lVar2 + 0x8b4) = uVar3;
  uVar3 = StringToFloatW(*(uint64_t *)(lVar1 + 0x40));
  lVar1 = pSMBPLAYERPROPWallJumpFriction;
  *(uint32_t *)(lVar2 + 0x8b8) = uVar3;
  uVar3 = StringToFloatW(*(uint64_t *)(lVar1 + 0x40));
  lVar1 = pSMBPLAYERPROPDrag;
  *(uint32_t *)(lVar2 + 0x8bc) = uVar3;
  uVar3 = StringToFloatW(*(uint64_t *)(lVar1 + 0x40));
  lVar1 = pSMBPLAYERPROPGravity;
  *(uint32_t *)(lVar2 + 0x8c0) = uVar3;
  uVar3 = StringToFloatW(*(uint64_t *)(lVar1 + 0x40));
  lVar1 = pSMBPLAYERPROPScale;
  *(uint32_t *)(lVar2 + 0x8c4) = uVar3;
  uVar3 = StringToFloatW(*(uint64_t *)(lVar1 + 0x40));
  lVar1 = pSMBPLAYERPROPKillBounds;
  *(uint32_t *)(lVar2 + 0x8c8) = uVar3;
  uVar3 = StringToFloatW(*(uint64_t *)(lVar1 + 0x40));
  lVar1 = pSMBPLAYERPROPTileBounds;
  *(uint32_t *)(lVar2 + 0x8d0) = uVar3;
  uVar3 = StringToFloatW(*(uint64_t *)(lVar1 + 0x40));
  lVar1 = pSMBPLAYERPROPHillDamper;
  *(uint32_t *)(lVar2 + 0x8cc) = uVar3;
  uVar3 = StringToFloatW(*(uint64_t *)(lVar1 + 0x40));
  lVar1 = pSMBPLAYERPROPTurnFriction;
  *(uint32_t *)(lVar2 + 0xa30) = uVar3;
  uVar3 = StringToFloatW(*(uint64_t *)(lVar1 + 0x40));
  self = SuperMeatBoy;
  *(uint32_t *)(lVar2 + 0xa34) = uVar3;
  this_00 = (MeatBoyCharactor *)GSuperMeatBoy__getChar(self, 1);
  MeatBoyCharactor__WritePropertiesToFile(this_00);
  return;
}

/* ======================================================================
 * SMB_LEVEL_PROPS_Submit  (Ghidra `SMB_LEVEL_PROPS_Submit` @ 004bc240)
 * Signature: uint8_t __stdcall SMB_LEVEL_PROPS_Submit(void * arg1)
 * Calls: `SMBEditor__ResizeLevel`, `StringToIntW`, `UIForm__DeActivate`
 * Called by: `SMBEditorForms__Initialize`
 */
/* SMB_LEVEL_PROPS_Submit(void*) */

void SMB_LEVEL_PROPS_Submit(void *arg1)

{
  ushort uVar1;
  ushort uVar2;

  uVar1 = StringToIntW(*(uint64_t *)(pSMBLEVELPROPSWidth + 0x40));
  uVar2 = StringToIntW(*(uint64_t *)(pSMBLEVELPROPSHeight + 0x40));
  SMBEditor__ResizeLevel(SuperMeatBoyEditor, uVar1, uVar2);
  UIForm__DeActivate(SMBEditorForms__SMB_LEVEL_PROPS);
  return;
}

/* ======================================================================
 * SMB_NEW_LEVEL_Submit  (Ghidra `SMB_NEW_LEVEL_Submit` @ 004bc290)
 * Signature: uint8_t __stdcall SMB_NEW_LEVEL_Submit(void * arg1)
 * Calls: `ConvertWCHARtoTCHAR`, `SMBEditor__NewLevel`, `StringToIntW`, `UIForm__DeActivate`
 * Called by: `SMBEditorForms__Initialize`
 */
/* SMB_NEW_LEVEL_Submit(void*) */

void SMB_NEW_LEVEL_Submit(void *arg1)

{
  ushort uVar1;
  ushort uVar2;

  uVar1 = StringToIntW(*(uint64_t *)(pSMBNEWLevelWidth + 0x40));
  uVar2 = StringToIntW(*(uint64_t *)(pSMBNEWLevelHeight + 0x40));
  ConvertWCHARtoTCHAR(
      *(uint64_t *)(*(long *)(*(long *)(**(long **)(pSMBNEWPaletteDropDown + 0x528) + 0x50) +
                              0x40) +
                    0x28),
      &strLargeString);
  SMBEditor__NewLevel(SuperMeatBoyEditor, uVar1, uVar2, strLargeString);
  UIForm__DeActivate(SMBEditorForms__SMB_NEW_LEVEL);
  return;
}

/* ======================================================================
 * SMB_SAVE_LEVEL_Activate  (Ghidra `SMB_SAVE_LEVEL_Activate` @ 004bc310)
 * Signature: uint8_t __stdcall SMB_SAVE_LEVEL_Activate(void * arg1)
 * Calls: `ConvertCHARtoWCHAR`, `UITextField__SetStaticText`
 * Called by: `SMBEditorForms__Initialize`
 */
/* SMB_SAVE_LEVEL_Activate(void*) */

void SMB_SAVE_LEVEL_Activate(void *arg1)

{
  if (*(long *)(*(long *)(SuperMeatBoyEditor + 0x100) + -0x18) != 0) {
    ConvertCHARtoWCHAR(*(long *)(SuperMeatBoyEditor + 0x100), &strLargeStringW);
    UITextField__SetStaticText(pSMBSAVEFileName, strLargeStringW);
  }
  (**(code **)(*(long *)pSMBSAVEFileName + 0x30))();
  *(UITextField **)(SMBEditorForms__SMB_SAVE_LEVEL + 0x98) = pSMBSAVEFileName;
  return;
}

/* ======================================================================
 * SMB_SAVE_LEVEL_Submit  (Ghidra `SMB_SAVE_LEVEL_Submit` @ 004bc370)
 * Signature: uint8_t __stdcall SMB_SAVE_LEVEL_Submit(void * arg1)
 * Calls: `ConvertWCHARtoTCHAR`, `SMBEditor__SaveLevel`, `UIForm__DeActivate`
 * Called by: `SMBEditorForms__Initialize`
 */
/* SMB_SAVE_LEVEL_Submit(void*) */

void SMB_SAVE_LEVEL_Submit(void *arg1)

{
  long lVar1;

  lVar1 = pSMBSAVEFileName;
  UIForm__DeActivate(SMBEditorForms__SMB_SAVE_LEVEL);
  ConvertWCHARtoTCHAR(*(uint64_t *)(lVar1 + 0x40), &strLargeString);
  SMBEditor__SaveLevel(SuperMeatBoyEditor, strLargeString, 0);
  return;
}

/* ======================================================================
 * SMB_LOAD_LEVEL_Submit  (Ghidra `SMB_LOAD_LEVEL_Submit` @ 004bc3b0)
 * Signature: uint8_t __stdcall SMB_LOAD_LEVEL_Submit(void * arg1)
 * Calls: `ConvertWCHARtoTCHAR`, `SMBEditor__LoadLevel`, `UIForm__DeActivate`
 * Called by: `SMBEditorForms__Initialize`
 */
/* SMB_LOAD_LEVEL_Submit(void*) */

void SMB_LOAD_LEVEL_Submit(void *arg1)

{
  long lVar1;
  uint64_t local_28;
  uint64_t local_20;
  uint32_t local_18;

  lVar1 = pSMBLoadFileName;
  UIForm__DeActivate(SMBEditorForms__SMB_LOAD_LEVEL);
  ConvertWCHARtoTCHAR(*(uint64_t *)(lVar1 + 0x40), &strLargeString);
  local_20 = 0;
  local_18 = 0;
  local_28 = strLargeString;
  SMBEditor__LoadLevel(SuperMeatBoyEditor, (TileLevelLoad *)&local_28);
  return;
}

/* ======================================================================
 * SaveLevelMasterPress  (Ghidra `SaveLevelMasterPress` @ 004bc410)
 * Signature: uint8_t __stdcall SaveLevelMasterPress(void * arg1)
 * Calls: `UIForm__Activate`
 * Called by: (none)
 */
/* SaveLevelMasterPress(void*) */

void SaveLevelMasterPress(void *arg1)

{
  UIForm__Activate(SMBEditorForms__SMB_SAVE_LEVEL);
  return;
}

/* ======================================================================
 * LoadLevelMasterPress  (Ghidra `LoadLevelMasterPress` @ 004bc420)
 * Signature: uint8_t __stdcall LoadLevelMasterPress(void * arg1)
 * Calls: `UIForm__Activate`
 * Called by: (none)
 */
/* LoadLevelMasterPress(void*) */

void LoadLevelMasterPress(void *arg1)

{
  UIForm__Activate(SMBEditorForms__SMB_LOAD_LEVEL);
  return;
}

/* ======================================================================
 * NewLevelMasterPress  (Ghidra `NewLevelMasterPress` @ 004bc430)
 * Signature: uint8_t __stdcall NewLevelMasterPress(void * arg1)
 * Calls: `UIForm__Activate`
 * Called by: (none)
 */
/* NewLevelMasterPress(void*) */

void NewLevelMasterPress(void *arg1)

{
  UIForm__Activate(SMBEditorForms__SMB_NEW_LEVEL);
  return;
}

/* ======================================================================
 * SMBInstPageOutroDone  (Ghidra `SMBInstPageOutroDone` @ 004c2480)
 * Signature: uint8_t __stdcall SMBInstPageOutroDone(void * arg1, int arg2, int arg3)
 * Calls: (none)
 * Called by: `SMBInstPage1Done`, `SMBInstPage2Done`, `SMBInstPageIntroDone`, `SMBInstPageTransDone`
 */
/* SMBInstPageOutroDone(void*, int, int) */

void SMBInstPageOutroDone(void *arg1, int arg2, int arg3)

{
  bPageShowing = 0;
  return;
}

/* ======================================================================
 * SMBInstSkip  (Ghidra `SMBInstSkip` @ 004c2490)
 * Signature: uint8_t __stdcall SMBInstSkip(void * arg1)
 * Calls: `TPlayer__GetJoystick`
 * Called by: `SMBInstPageIntroDone`, `SMBInstPageTransDone`
 */
/* SMBInstSkip(void*) */

bool SMBInstSkip(void *arg1)

{
  long lVar1;
  bool bVar2;

  if ((Keyboard == 0) || (bVar2 = true, *(int *)(Keyboard + 0x154) != 1)) {
    lVar1 = TPlayer__GetJoystick((TPlayer *)Players__Player);
    bVar2 = *(int *)(lVar1 + 0x38) == 1;
  }
  return bVar2;
}

/* ======================================================================
 * SMBInstPageTransDone  (Ghidra `SMBInstPageTransDone` @ 004c24d0)
 * Signature: uint8_t __stdcall SMBInstPageTransDone(void * arg1, int arg2, int arg3)
 * Calls: `GSMBCutSceneManager__PlayCutScene`, `SMBInstPageOutroDone`, `SMBInstSkip`
 * Called by: `SMBInstPage1Done`, `SMBInstPageIntroDone`
 */
/* SMBInstPageTransDone(void*, int, int) */

void SMBInstPageTransDone(void *arg1, int arg2, int arg3)

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

  if (arg2 != 1) {
    local_38 = 0;
    local_28 = 0;
    local_20 = 0;
    local_1c = 1;
    local_48 = *(uint64_t *)(SMBInstructions + 0x10);
    local_54 = 0x43f00000;
    local_58 = 0x44200000;
    local_50 = 1;
    local_30 = SMBInstSkip;
    local_40 = SMBInstPageTransDone;
    local_18 = 0;
    GSMBCutSceneManager__PlayCutScene(*(GSMBCutSceneManager **)(SMBInstructions + 0x38),
                                      (SMBCutScene *)&local_58);
    return;
  }
  local_38 = 0;
  local_30 = (code *)0x0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 1;
  local_48 = *(uint64_t *)(SMBInstructions + 0x20);
  local_54 = 0x43f00000;
  local_58 = 0x44200000;
  local_50 = 1;
  local_40 = SMBInstPageOutroDone;
  local_18 = 0;
  GSMBCutSceneManager__PlayCutScene(*(GSMBCutSceneManager **)(SMBInstructions + 0x38),
                                    (SMBCutScene *)&local_58);
  return;
}

/* ======================================================================
 * SMBInstPage1Done  (Ghidra `SMBInstPage1Done` @ 004c2600)
 * Signature: uint8_t __stdcall SMBInstPage1Done(void * arg1, int arg2, int arg3)
 * Calls: `GSMBCutSceneManager__PlayCutScene`, `SMBInstPageOutroDone`, `SMBInstPageTransDone`
 * Called by: `SMBInstPageIntroDone`
 */
/* SMBInstPage1Done(void*, int, int) */

void SMBInstPage1Done(void *arg1, int arg2, int arg3)

{
  uint32_t local_58;
  uint32_t local_54;
  uint32_t local_50;
  uint64_t local_48;
  code *local_40;
  uint64_t local_38;
  uint64_t local_30;
  uint64_t local_28;
  uint32_t local_20;
  uint32_t local_1c;
  uint32_t local_18;

  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 1;
  if (*(long *)(SMBInstructions + 0x10) != 0) {
    local_48 = *(uint64_t *)(SMBInstructions + 0x28);
    local_54 = 0x43f00000;
    local_58 = 0x44200000;
    local_50 = 1;
    local_40 = SMBInstPageTransDone;
    local_18 = 0;
    GSMBCutSceneManager__PlayCutScene(*(GSMBCutSceneManager **)(SMBInstructions + 0x38),
                                      (SMBCutScene *)&local_58);
    return;
  }
  local_48 = *(uint64_t *)(SMBInstructions + 0x20);
  local_54 = 0x43f00000;
  local_58 = 0x44200000;
  local_50 = 1;
  local_40 = SMBInstPageOutroDone;
  local_18 = 0;
  GSMBCutSceneManager__PlayCutScene(*(GSMBCutSceneManager **)(SMBInstructions + 0x38),
                                    (SMBCutScene *)&local_58);
  return;
}

/* ======================================================================
 * SMBInstPageIntroDone  (Ghidra `SMBInstPageIntroDone` @ 004c26e0)
 * Signature: uint8_t __stdcall SMBInstPageIntroDone(void * arg1, int arg2, int arg3)
 * Calls: `GSMBCutSceneManager__PlayCutScene`, `SMBInstPage1Done`, `SMBInstPageOutroDone`, `SMBInstPageTransDone`, `SMBInstSkip`
 * Called by: `GSMBInstructions__ShowPage`
 */
/* SMBInstPageIntroDone(void*, int, int) */

void SMBInstPageIntroDone(void *arg1, int arg2, int arg3)

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

  if (arg2 == 1) {
    local_38 = 0;
    local_30 = (code *)0x0;
    local_28 = 0;
    local_20 = 0;
    local_1c = 1;
    if (*(long *)(SMBInstructions + 0x10) != 0) {
      local_48 = *(uint64_t *)(SMBInstructions + 0x28);
      local_54 = 0x43f00000;
      local_58 = 0x44200000;
      local_50 = 1;
      local_40 = SMBInstPageTransDone;
      local_18 = 0;
      GSMBCutSceneManager__PlayCutScene(*(GSMBCutSceneManager **)(SMBInstructions + 0x38),
                                        (SMBCutScene *)&local_58);
      return;
    }
    local_48 = *(uint64_t *)(SMBInstructions + 0x20);
    local_54 = 0x43f00000;
    local_58 = 0x44200000;
    local_50 = 1;
    local_40 = SMBInstPageOutroDone;
    local_18 = 0;
    GSMBCutSceneManager__PlayCutScene(*(GSMBCutSceneManager **)(SMBInstructions + 0x38),
                                      (SMBCutScene *)&local_58);
  } else {
    local_38 = 0;
    local_28 = 0;
    local_20 = 0;
    local_1c = 1;
    local_48 = *(uint64_t *)(SMBInstructions + 8);
    local_54 = 0x43f00000;
    local_58 = 0x44200000;
    local_50 = 1;
    local_30 = SMBInstSkip;
    local_40 = SMBInstPage1Done;
    local_18 = 0;
    GSMBCutSceneManager__PlayCutScene(*(GSMBCutSceneManager **)(SMBInstructions + 0x38),
                                      (SMBCutScene *)&local_58);
  }
  return;
}

/* ======================================================================
 * SMBInstPage2Done  (Ghidra `SMBInstPage2Done` @ 004c2860)
 * Signature: uint8_t __stdcall SMBInstPage2Done(void * arg1, int arg2, int arg3)
 * Calls: `GSMBCutSceneManager__PlayCutScene`, `SMBInstPageOutroDone`
 * Called by: (none)
 */
/* SMBInstPage2Done(void*, int, int) */

void SMBInstPage2Done(void *arg1, int arg2, int arg3)

{
  uint32_t local_58;
  uint32_t local_54;
  uint32_t local_50;
  uint64_t local_48;
  code *local_40;
  uint64_t local_38;
  uint64_t local_30;
  uint64_t local_28;
  uint32_t local_20;
  uint32_t local_1c;
  uint32_t local_18;

  local_20 = 0;
  local_1c = 1;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_48 = *(uint64_t *)(SMBInstructions + 0x20);
  local_18 = 0;
  local_54 = 0x43f00000;
  local_58 = 0x44200000;
  local_50 = 1;
  local_40 = SMBInstPageOutroDone;
  GSMBCutSceneManager__PlayCutScene(*(GSMBCutSceneManager **)(SMBInstructions + 0x38),
                                    (SMBCutScene *)&local_58);
  return;
}

/* ======================================================================
 * SMBInternetsSelectChapter  (Ghidra `SMBInternetsSelectChapter` @ 004c3650)
 * Signature: uint8_t __stdcall SMBInternetsSelectChapter(tagButtonProps * arg1, void * arg2)
 * Calls: `FlashLibraryInstance__Reset`, `GSMBMenu__LoadInternetsChapter`, `GSMBMenu__RemoveControls`, `GSMBMenu__ValidateAndLoadChapter`
 * Called by: `SMBInternetChapterSel__LoadChapterData`
 */
/* SMBInternetsSelectChapter(tagButtonProps const*, void*) */

void SMBInternetsSelectChapter(tagButtonProps *arg1, void *arg2)

{
  int iVar1;

  if ((*(int *)arg1 == 1) && (*(char *)((long)arg2 + 0x1b5) != '\x01')) {
    *(uint8_t *)((long)arg2 + 0x1b6) = 0;
    iVar1 = GSMBMenu__LoadInternetsChapter();
    if (iVar1 != 1) {
      rmChapterStatus = GSMBMenu__ValidateAndLoadChapter(SMBMenu);
      (**(code **)(*(long *)arg2 + 0x28))(arg2);
      GSMBMenu__RemoveControls();
      return;
    }
    *(FlashLibraryInstance **)((long)arg2 + 0x28) = *(FlashLibraryInstance **)((long)arg2 + 0x80);
    FlashLibraryInstance__Reset(*(FlashLibraryInstance **)((long)arg2 + 0x80));
    *(uint8_t *)((long)arg2 + 0x1b5) = 1;
  }
  return;
}

/* ======================================================================
 * FormatInternetsChapterName  (Ghidra `FormatInternetsChapterName` @ 004c3770)
 * Signature: uint8_t __stdcall FormatInternetsChapterName(char * arg1, char * arg2)
 * Calls: `strlen`
 * Called by: (none)
 */
/* FormatInternetsChapterName(char*, char const*) */

void FormatInternetsChapterName(char *arg1, char *arg2)

{
  char cVar1;
  int iVar2;
  size_t sVar3;
  long lVar4;

  sVar3 = strlen(arg2);
  iVar2 = (int)sVar3;
  if (0 < iVar2) {
    lVar4 = 0;
    do {
      while (cVar1 = arg2[lVar4], cVar1 == '_') {
        arg1[lVar4] = ' ';
        lVar4 = lVar4 + 1;
        if (iVar2 <= (int)lVar4) {
          return;
        }
      }
      if (cVar1 == '.') {
        arg1[lVar4] = '\0';
        return;
      }
      arg1[lVar4] = cVar1;
      lVar4 = lVar4 + 1;
    } while ((int)lVar4 < iVar2);
  }
  return;
}

/* ======================================================================
 * FillLeaderboardDatabase  (Ghidra `FillLeaderboardDatabase` @ 004c3ed0)
 * Signature: uint8_t FillLeaderboardDatabase(void)
 * Calls: (none)
 * Called by: `GSuperMeatBoy__Initialize__00516f60`
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* FillLeaderboardDatabase() */

void FillLeaderboardDatabase(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint8_t *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;

  iVar4 = _UNK_005c5d5c;
  iVar3 = _UNK_005c5d58;
  iVar2 = _UNK_005c5d54;
  iVar1 = _DAT_005c5d50 /* R:5.605193857299268e-45f */;
  puVar5 = pLeaderboards;
  iVar6 = _DAT_005c5d40 /* R:0.0f */;
  iVar7 = _UNK_005c5d44;
  iVar8 = _UNK_005c5d48;
  iVar9 = _UNK_005c5d4c;
  do {
    *(int *)puVar5 = iVar6;
    *(int *)((long)puVar5 + 4) = iVar6;
    *(int *)((long)puVar5 + 8) = iVar7;
    *(int *)((long)puVar5 + 0xc) = iVar7;
    *(int *)((long)puVar5 + 0x10) = iVar8;
    *(int *)((long)puVar5 + 0x14) = iVar8;
    *(int *)((long)puVar5 + 0x18) = iVar9;
    *(int *)((long)puVar5 + 0x1c) = iVar9;
    puVar5 = (uint8_t *)((long)puVar5 + 0x20);
    iVar6 = iVar6 + iVar1;
    iVar7 = iVar7 + iVar2;
    iVar8 = iVar8 + iVar3;
    iVar9 = iVar9 + iVar4;
  } while (puVar5 != pLeaderboards + 0x7c0);
  pLeaderboards._1984_4_ = 0xf8;
  pLeaderboards._1988_4_ = 0xf8;
  pLeaderboards._1992_4_ = 0xf9;
  pLeaderboards._1996_4_ = 0xf9;
  return;
}
