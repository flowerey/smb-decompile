/* src/engine/core_05.c — 78 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "core_05.h"

/* ======================================================================
 * SpecialPress  (Ghidra `SpecialPress` @ 00461910)
 * Signature: uint8_t __stdcall SpecialPress(tagButtonProps * arg1, void * arg2)
 * Calls: `FlashLibraryInstance__IsPlaying`, `Vector2__operator_assign`
 * Called by: (none)
 */
/* AlienHominid__SpecialPress(tagButtonProps const*, void*) */

void AlienHominid__SpecialPress(tagButtonProps *arg1,void *arg2)

{
  int iVar1;
  float fVar2;
  
  MeatBoyCharactor__SpecialPress(arg1,arg2);
  if ((((((byte)arg1[0x7d8] & 2) != 0) && (*(int *)arg2 == 1)) &&
      (((byte)arg1[0x7d9] & 1) == 0)) &&
     ((*(int *)(arg1 + 0x7d4) != 0x10 &&
      ((*(uint32_t *)(*(long *)(arg1 + 0xa98) + 0x58) = *(uint32_t *)(arg1 + 0xab4),
       *(int *)(arg1 + 0xab0) == 0 ||
       (iVar1 = FlashLibraryInstance__IsPlaying(*(FlashLibraryInstance **)(arg1 + 0xa98)),
       iVar1 == 0)))))) {
    fVar2 = DAT_005be5e4 /* R:75.0f */ + *(float *)(arg1 + 0xbc);
    *(uint32_t *)(arg1 + 0xab4) = 0;
    *(uint32_t *)(arg1 + 0xab0) = 1;
    *(float *)(arg1 + 0xbc) = fVar2;
    if (*(int *)(arg1 + 0xab8) == 2) {
      iVar1 = 0;
    }
    else if (*(int *)(arg1 + 0xac8) == 2) {
      iVar1 = 1;
    }
    else if (*(int *)(arg1 + 0xad8) == 2) {
      iVar1 = 2;
    }
    else if (*(int *)(arg1 + 0xae8) == 2) {
      iVar1 = 3;
    }
    else if (*(int *)(arg1 + 0xaf8) == 2) {
      iVar1 = 4;
    }
    else if (*(int *)(arg1 + 0xb08) == 2) {
      iVar1 = 5;
    }
    else if (*(int *)(arg1 + 0xb18) == 2) {
      iVar1 = 6;
    }
    else if (*(int *)(arg1 + 0xb28) == 2) {
      iVar1 = 7;
    }
    else if (*(int *)(arg1 + 0xb38) == 2) {
      iVar1 = 8;
    }
    else {
      iVar1 = 9;
      if (*(int *)(arg1 + 0xb48) != 2) {
        return;
      }
    }
    Vector2__operator_assign((Vector2 *)(arg1 + ((long)iVar1 + 0xab) * 0x10 + 0xc),
                       (Vector2 *)(arg1 + 0xa0));
    *(uint32_t *)(arg1 + ((long)iVar1 + 0xab) * 0x10 + 8) = 0;
  }
  return;
}

/* ======================================================================
 * SpecialPress__00466090  (Ghidra `SpecialPress` @ 00466090)
 * Signature: uint8_t __stdcall SpecialPress(tagButtonProps * arg1, void * arg2)
 * Calls: `Vector2__operator_assign`
 * Called by: (none)
 */
/* DrFetus__SpecialPress(tagButtonProps const*, void*) */

void DrFetus__SpecialPress(tagButtonProps *arg1,void *arg2)

{
  tagButtonProps *ptVar1;
  int iVar2;
  uint32_t local_38;
  uint32_t local_34;
  uint32_t local_28;
  uint32_t local_24;
  
  if (*(int *)arg2 != 1) {
    *(uint32_t *)(arg1 + 0xab8) = 0;
    return;
  }
  *(uint32_t *)(*(long *)(arg1 + 0xa98) + 0x58) = *(uint32_t *)(arg1 + 0xab4);
  if (*(int *)(arg1 + 0xac0) == 2) {
    iVar2 = 0;
  }
  else if (*(int *)(arg1 + 0xbc0) == 2) {
    iVar2 = 1;
  }
  else if (*(int *)(arg1 + 0xcc0) == 2) {
    iVar2 = 2;
  }
  else if (*(int *)(arg1 + 0xdc0) == 2) {
    iVar2 = 3;
  }
  else if (*(int *)(arg1 + 0xec0) == 2) {
    iVar2 = 4;
  }
  else if (*(int *)(arg1 + 0xfc0) == 2) {
    iVar2 = 5;
  }
  else if (*(int *)(arg1 + 0x10c0) == 2) {
    iVar2 = 6;
  }
  else if (*(int *)(arg1 + 0x11c0) == 2) {
    iVar2 = 7;
  }
  else if (*(int *)(arg1 + 0x12c0) == 2) {
    iVar2 = 8;
  }
  else {
    iVar2 = 9;
    if (*(int *)(arg1 + 0x13c0) != 2) goto LAB_0046614f;
  }
  ptVar1 = arg1 + (long)iVar2 * 0x100 + 0xac0;
  *(uint32_t *)(ptVar1 + 0xa4) = 1;
  Vector2__operator_assign((Vector2 *)(ptVar1 + 0xa8),(Vector2 *)(arg1 + 0xa0));
  if (((byte)arg1[0x7d8] & 1) == 0) {
    local_38 = 0x43fa0000;
    local_34 = 0;
    Vector2__operator_assign((Vector2 *)(ptVar1 + 0xc0),(Vector2 *)&local_38);
  }
  else {
    local_28 = 0xc3fa0000;
    local_24 = 0;
    Vector2__operator_assign((Vector2 *)(ptVar1 + 0xc0),(Vector2 *)&local_28);
  }
  *(uint32_t *)ptVar1 = 0;
LAB_0046614f:
  *(uint32_t *)(arg1 + 0xab8) = 1;
  return;
}

/* ======================================================================
 * SpecialPress__0046aaa0  (Ghidra `SpecialPress` @ 0046aaa0)
 * Signature: uint8_t __stdcall SpecialPress(tagButtonProps * arg1, void * arg2)
 * Calls: (none)
 * Called by: (none)
 */
/* GooBall__SpecialPress(tagButtonProps const*, void*) */

void GooBall__SpecialPress(tagButtonProps *arg1,void *arg2)

{
  if (*(int *)arg2 - 1U < 2) {
    arg1[0x7d8] = (tagButtonProps)((byte)arg1[0x7d8] | 0x40);
    *(uint32_t *)(arg1 + 0xaa8) = 1;
    return;
  }
  if (*(int *)arg2 != 3) {
    return;
  }
  *(uint32_t *)(arg1 + 0xaa8) = 0;
  return;
}

/* ======================================================================
 * SpecialPress__0046ae00  (Ghidra `SpecialPress` @ 0046ae00)
 * Signature: uint8_t __stdcall SpecialPress(tagButtonProps * arg1, void * arg2)
 * Calls: (none)
 * Called by: (none)
 */
/* HeadCrab__SpecialPress(tagButtonProps const*, void*) */

void HeadCrab__SpecialPress(tagButtonProps *arg1,void *arg2)

{
  if (*(int *)arg2 - 1U < 2) {
    arg1[0x7d8] = (tagButtonProps)((byte)arg1[0x7d8] | 0x40);
    *(uint32_t *)(arg1 + 0xaa8) = 1;
    return;
  }
  if (*(int *)arg2 != 3) {
    return;
  }
  *(uint32_t *)(arg1 + 0xaa8) = 0;
  return;
}

/* ======================================================================
 * SpecialPress__00473ce0  (Ghidra `SpecialPress` @ 00473ce0)
 * Signature: uint8_t __stdcall SpecialPress(tagButtonProps * arg1, void * arg2)
 * Calls: (none)
 * Called by: (none)
 */
/* MeatBoyCharactor__SpecialPress(tagButtonProps const*, void*) */

void MeatBoyCharactor__SpecialPress(tagButtonProps *arg1,void *arg2)

{
  if (1 < *(int *)arg2 - 1U) {
    return;
  }
  arg1[0x7d8] = (tagButtonProps)((byte)arg1[0x7d8] | 0x40);
  return;
}

/* ======================================================================
 * SafeSetIntroText  (Ghidra `SafeSetIntroText` @ 0047eef0)
 * Signature: uint8_t __stdcall SafeSetIntroText(FlashAnimationLibrary * arg1, char * arg2, uint arg3)
 * Calls: `FlashAnimationLibrary__GetTextField`, `GetLocalizedText`
 * Called by: (none)
 */
/* SafeSetIntroText(FlashAnimationLibrary*, char const*, unsigned int) */

void SafeSetIntroText(FlashAnimationLibrary *arg1,char *arg2,uint arg3)

{
  wchar_t *pwVar1;
  uint64_t uVar2;
  
  pwVar1 = (wchar_t *)FlashAnimationLibrary__GetTextField(arg1,arg2);
  if (pwVar1 != (wchar_t *)0x0) {
    uVar2 = GetLocalizedText(arg3);
    FlashTextField__SetText(pwVar1,uVar2);
    return;
  }
  return;
}

/* ======================================================================
 * SpecialPress__00480fa0  (Ghidra `SpecialPress` @ 00480fa0)
 * Signature: uint8_t __stdcall SpecialPress(tagButtonProps * arg1, void * arg2)
 * Calls: (none)
 * Called by: (none)
 */
/* MeatNinja__SpecialPress(tagButtonProps const*, void*) */

void MeatNinja__SpecialPress(tagButtonProps *arg1,void *arg2)

{
  if (*(int *)arg2 != 1) {
    return;
  }
  if ((*(int *)(arg1 + 0xaa4) == 0) && (*(int *)(arg1 + 0xaa8) == 1)) {
    *(uint32_t *)(arg1 + 0xaa0) = 0;
    *(uint32_t *)(arg1 + 0xaa8) = 0;
  }
  arg1[0x7d8] = (tagButtonProps)((byte)arg1[0x7d8] | 0x40);
  return;
}

/* ======================================================================
 * SpecialPress__00481a70  (Ghidra `SpecialPress` @ 00481a70)
 * Signature: uint8_t __stdcall SpecialPress(tagButtonProps * arg1, void * arg2)
 * Calls: (none)
 * Called by: (none)
 */
/* MrMinecraft__SpecialPress(tagButtonProps const*, void*) */

void MrMinecraft__SpecialPress(tagButtonProps *arg1,void *arg2)

{
  if (*(int *)arg2 != 1) {
    return;
  }
  *(uint32_t *)(arg1 + 0xae8) = 1;
  return;
}

/* ======================================================================
 * SpecialPress__00482f40  (Ghidra `SpecialPress` @ 00482f40)
 * Signature: uint8_t __stdcall SpecialPress(tagButtonProps * arg1, void * arg2)
 * Calls: (none)
 * Called by: (none)
 */
/* Naija__SpecialPress(tagButtonProps const*, void*) */

void Naija__SpecialPress(tagButtonProps *arg1,void *arg2)

{
  tagButtonProps tVar1;
  
  tVar1 = arg1[0x7d8];
  if (((((byte)tVar1 & 4) != 0) || (*(int *)(arg1 + 0x7d4) == 0xe)) ||
     (*(int *)(arg1 + 0x7d4) == 0x10)) {
    *(uint32_t *)(arg1 + 0xa94) = 0;
    return;
  }
  if (*(int *)arg2 == 2) {
    if (((((byte)tVar1 & 2) != 0) && (*(int *)(arg1 + 0xad4) == 1)) &&
       (*(uint32_t *)(arg1 + 0xa94) = 1, 0.0 < *(float *)(arg1 + 0xbc))) {
      *(uint32_t *)(arg1 + 0xbc) = 0;
      return;
    }
  }
  else if ((*(int *)arg2 == 3) && (*(int *)(arg1 + 0xad4) == 1)) {
    if (((byte)tVar1 & 2) != 0) {
      *(uint32_t *)(arg1 + 0xa94) = 0;
      *(uint32_t *)(arg1 + 0xaa0) = 0x3e23d70a;
      *(uint32_t *)(arg1 + 0xad4) = 0;
      *(uint32_t *)(arg1 + 0xacc) = 0;
    }
    if (*(long **)(arg1 + 0xad8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00482ff7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(arg1 + 0xad8) + 0x20))();
      return;
    }
  }
  return;
}

/* ======================================================================
 * SetPosition  (Ghidra `SetPosition` @ 004839b0)
 * Signature: uint8_t __stdcall SetPosition(Vector2 * arg1)
 * Calls: (none)
 * Called by: (none)
 */
/* QuakeEmitter__SetPosition(Vector2 const&) */

void QuakeEmitter__SetPosition(Vector2 *arg1)

{
  return;
}

/* ======================================================================
 * SpecialPress__00486530  (Ghidra `SpecialPress` @ 00486530)
 * Signature: uint8_t __stdcall SpecialPress(tagButtonProps * arg1, void * arg2)
 * Calls: `Vector2__operator_assign`
 * Called by: (none)
 */
/* Runman__SpecialPress(tagButtonProps const*, void*) */

void Runman__SpecialPress(tagButtonProps *arg1,void *arg2)

{
  tagButtonProps tVar1;
  
  if (*(int *)arg2 == 1) {
    if (((byte)arg1[0xa94] & 1) != 0) {
      arg1[0x7d8] = (tagButtonProps)((byte)arg1[0x7d8] | 0x40);
      arg1[0xa94] = (tagButtonProps)((byte)arg1[0xa94] & 0xfe | 2);
      *(uint *)(arg1 + 0xa94) = *(uint *)(arg1 + 0xa94) & 3;
      if (*(long **)(arg1 + 0xa98) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004865a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(long **)(arg1 + 0xa98) + 0x20))();
        return;
      }
    }
  }
  else if (*(int *)arg2 == 3) {
    tVar1 = arg1[0xa94];
    if (((byte)tVar1 & 2) != 0) {
      Vector2__operator_assign((Vector2 *)(arg1 + 0xaa0),(Vector2 *)(arg1 + 0xa0));
      tVar1 = arg1[0xa94];
    }
    arg1[0x7d8] = (tagButtonProps)((byte)arg1[0x7d8] & 0xbf);
    arg1[0xa94] = (tagButtonProps)((byte)tVar1 & 0xfd);
    return;
  }
  return;
}

/* ======================================================================
 * SetAIState  (Ghidra `SetAIState` @ 004884b0)
 * Signature: uint8_t __stdcall SetAIState(tagSMBAnimalAIState arg1)
 * Calls: `GetRandomINT`, `SMBAnimal__SetAIState`, `ValidWayPoint`
 * Called by: `SMBAnimal__Reset`, `SMBAnimal__SetAIState`
 */
/* SMBAnimal__SetAIState(tagSMBAnimalAIState) [clone .part.18] */

void SMBAnimal__SetAIState(long arg1)

{
  Vector2 *pVVar1;
  Vector2 *pVVar2;
  int iVar3;
  
  pVVar1 = (Vector2 *)(arg1 + 0x124);
  pVVar2 = (Vector2 *)(arg1 + 0xa0);
  iVar3 = GetRandomINT(2,5);
  *(float *)(arg1 + 0x120) = (float)iVar3;
  iVar3 = GetRandomINT(0xffffff38,200);
  *(uint32_t *)(arg1 + 0x128) = *(uint32_t *)(arg1 + 0xa4);
  *(float *)(arg1 + 0x124) = *(float *)(arg1 + 0xa0) + (float)iVar3;
  if ((float)iVar3 < 0.0) {
    iVar3 = ValidWayPoint(pVVar2,pVVar1);
    if (iVar3 != 0) {
      return;
    }
    *(float *)(arg1 + 0x124) = *(float *)(arg1 + 0x124) + TileLevel__fLevelGridWH;
    iVar3 = ValidWayPoint(pVVar2,pVVar1);
    if (iVar3 != 0) {
      return;
    }
    *(float *)(arg1 + 0x124) = *(float *)(arg1 + 0x124) + TileLevel__fLevelGridWH;
    iVar3 = ValidWayPoint(pVVar2,pVVar1);
    if (iVar3 != 0) {
      return;
    }
    *(float *)(arg1 + 0x124) = *(float *)(arg1 + 0x124) + TileLevel__fLevelGridWH;
    iVar3 = ValidWayPoint(pVVar2,pVVar1);
    if (iVar3 != 0) {
      return;
    }
    *(float *)(arg1 + 0x124) = *(float *)(arg1 + 0x124) + TileLevel__fLevelGridWH;
    iVar3 = ValidWayPoint(pVVar2,pVVar1);
    if (iVar3 != 0) {
      return;
    }
    *(float *)(arg1 + 0x124) = *(float *)(arg1 + 0x124) + TileLevel__fLevelGridWH;
    ValidWayPoint(pVVar2,pVVar1);
  }
  else {
    iVar3 = ValidWayPoint(pVVar2,pVVar1);
    if (iVar3 != 0) {
      return;
    }
    *(float *)(arg1 + 0x124) = *(float *)(arg1 + 0x124) - TileLevel__fLevelGridWH;
    iVar3 = ValidWayPoint(pVVar2,pVVar1);
    if (iVar3 != 0) {
      return;
    }
    *(float *)(arg1 + 0x124) = *(float *)(arg1 + 0x124) - TileLevel__fLevelGridWH;
    iVar3 = ValidWayPoint(pVVar2,pVVar1);
    if (iVar3 != 0) {
      return;
    }
    *(float *)(arg1 + 0x124) = *(float *)(arg1 + 0x124) - TileLevel__fLevelGridWH;
    iVar3 = ValidWayPoint(pVVar2,pVVar1);
    if (iVar3 != 0) {
      return;
    }
    *(float *)(arg1 + 0x124) = *(float *)(arg1 + 0x124) - TileLevel__fLevelGridWH;
    iVar3 = ValidWayPoint(pVVar2,pVVar1);
    if (iVar3 != 0) {
      return;
    }
    *(float *)(arg1 + 0x124) = *(float *)(arg1 + 0x124) - TileLevel__fLevelGridWH;
    ValidWayPoint(pVVar2,pVVar1);
  }
  *(uint32_t *)(arg1 + 0x210) = 2;
  return;
}

/* ======================================================================
 * SaveData  (Ghidra `SaveData` @ 004961c0)
 * Signature: uint8_t __stdcall SaveData(int arg1)
 * Calls: `CloseThread`, `CreateWorkerThread`, `GSMBChapterData__SaveData`, `GSMBCutSceneManager__ShowSavingMessage`, `SMBChapterDataSave`, `SyncEvent__Reset`, `SyncEvent__Wait`, `malloc`
 * Called by: `GSMBChapterData__SaveLevelData`, `GSMBChapterData__SaveWarpzoneStats`
 */
/* GSMBChapterData__SaveData(int) [clone .part.43] [clone .constprop.46] */

void GSMBChapterData__SaveData(int arg1)

{
  uint32_t uVar1;
  uint32_t *puVar2;
  long lVar3;
  uint64_t *puVar4;
  uint32_t in_register_0000003c;
  long lVar5;
  uint64_t *puVar6;
  byte bVar7;
  code *local_38;
  uint32_t *local_30;
  uint32_t local_28;
  
  lVar5 = CONCAT44(in_register_0000003c,arg1);
  bVar7 = 0;
  puVar2 = malloc(0x1ca8);
  *puVar2 = *(uint32_t *)(lVar5 + 0x1d68);
  puVar2[1] = *(uint32_t *)(lVar5 + 0x1d6c);
  uVar1 = *(uint32_t *)(lVar5 + 0x1cd0);
  puVar2[3] = 600;
  puVar2[2] = uVar1;
  if ((uint32_t *)(lVar5 + 0x1cf0) != puVar2 + 4) {
    *(uint64_t *)(puVar2 + 4) = *(uint64_t *)(lVar5 + 0x1cf0);
    *(uint64_t *)(puVar2 + 6) = *(uint64_t *)(lVar5 + 0x1cf8);
    *(uint64_t *)(puVar2 + 8) = *(uint64_t *)(lVar5 + 0x1d00);
    *(uint64_t *)(puVar2 + 10) = *(uint64_t *)(lVar5 + 0x1d08);
    *(uint64_t *)(puVar2 + 0xc) = *(uint64_t *)(lVar5 + 0x1d10);
    *(uint64_t *)(puVar2 + 0xe) = *(uint64_t *)(lVar5 + 0x1d18);
    *(uint64_t *)(puVar2 + 0x10) = *(uint64_t *)(lVar5 + 0x1d20);
    *(uint64_t *)(puVar2 + 0x12) = *(uint64_t *)(lVar5 + 0x1d28);
    *(uint64_t *)(puVar2 + 0x14) = *(uint64_t *)(lVar5 + 0x1d30);
    *(uint64_t *)(puVar2 + 0x16) = *(uint64_t *)(lVar5 + 0x1d38);
    *(uint64_t *)(puVar2 + 0x18) = *(uint64_t *)(lVar5 + 0x1d40);
    *(uint64_t *)(puVar2 + 0x1a) = *(uint64_t *)(lVar5 + 0x1d48);
    *(uint64_t *)(puVar2 + 0x1c) = *(uint64_t *)(lVar5 + 0x1d50);
    *(uint64_t *)(puVar2 + 0x1e) = *(uint64_t *)(lVar5 + 0x1d58);
    *(uint64_t *)(puVar2 + 0x20) = *(uint64_t *)(lVar5 + 0x1d60);
  }
  if ((uint64_t *)(lVar5 + 0xa4) != (uint64_t *)(puVar2 + 0x22)) {
    puVar4 = (uint64_t *)(lVar5 + 0xa4);
    puVar6 = (uint64_t *)(puVar2 + 0x22);
    for (lVar3 = 900; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + (ulong)bVar7 * -2 + 1;
      puVar6 = puVar6 + (ulong)bVar7 * -2 + 1;
    }
  }
  SyncEvent__Wait((SyncEvent *)SMBChapterSaveEvent);
  SyncEvent__Reset((SyncEvent *)SMBChapterSaveEvent);
  if (hSMBChapterSaveHandle != (THREADHANDLESTRUCT *)0x0) {
    CloseThread(hSMBChapterSaveHandle);
  }
  local_28 = 2;
  local_38 = SMBChapterDataSave;
  local_30 = puVar2;
  hSMBChapterSaveHandle = (THREADHANDLESTRUCT *)CreateWorkerThread((tagThreadCreate *)&local_38);
  if (hSMBChapterSaveHandle == (THREADHANDLESTRUCT *)0x0) {
    SMBChapterDataSave(puVar2);
  }
  GSMBCutSceneManager__ShowSavingMessage(SMBCutSceneManager);
  return;
}

/* ======================================================================
 * SetCreditsTextSafe  (Ghidra `SetCreditsTextSafe` @ 0049ccc0)
 * Signature: uint8_t __stdcall SetCreditsTextSafe(FlashAnimationLibrary * arg1, char * arg2, char * arg3)
 * Calls: `FlashAnimationLibrary__GetTextField`
 * Called by: (none)
 */
/* SetCreditsTextSafe(FlashAnimationLibrary*, char const*, char const*) */

void SetCreditsTextSafe(FlashAnimationLibrary *arg1,char *arg2,char *arg3)

{
  char *pcVar1;
  
  pcVar1 = (char *)FlashAnimationLibrary__GetTextField(arg1,arg2);
  if (pcVar1 != (char *)0x0) {
    FlashTextField__SetText(pcVar1,arg3);
    return;
  }
  return;
}

/* ======================================================================
 * SetCreditsText  (Ghidra `SetCreditsText` @ 0049d1b0)
 * Signature: uint8_t __stdcall SetCreditsText(FlashAnimationLibrary * arg1, int arg2)
 * Calls: `FlashAnimationLibrary__GetTextField`
 * Called by: (none)
 */
/* SMBCreditRoll__SetCreditsText(FlashAnimationLibrary*, int) */

void SMBCreditRoll__SetCreditsText(FlashAnimationLibrary *arg1,int arg2)

{
  uint8_t *puVar1;
  char *pcVar2;
  
  puVar1 = strBefore;
  pcVar2 = (char *)FlashAnimationLibrary__GetTextField(arg1,"before");
  if (pcVar2 != (char *)0x0) {
    FlashTextField__SetText(pcVar2,puVar1);
  }
  puVar1 = strAfter;
  pcVar2 = (char *)FlashAnimationLibrary__GetTextField(arg1,"after");
  if (pcVar2 != (char *)0x0) {
    FlashTextField__SetText(pcVar2,puVar1);
  }
  puVar1 = strTitle;
  if (arg2 == 1) {
    pcVar2 = (char *)FlashAnimationLibrary__GetTextField(arg1,"title");
    if (pcVar2 != (char *)0x0) {
      FlashTextField__SetText(pcVar2,puVar1);
    }
  }
  puVar1 = strTitle2;
  pcVar2 = (char *)FlashAnimationLibrary__GetTextField(arg1,"title2");
  if (pcVar2 != (char *)0x0) {
    FlashTextField__SetText(pcVar2,puVar1);
  }
  puVar1 = strTitle3;
  pcVar2 = (char *)FlashAnimationLibrary__GetTextField(arg1,"title3");
  if (pcVar2 != (char *)0x0) {
    FlashTextField__SetText(pcVar2,puVar1);
  }
  puVar1 = strcr1;
  pcVar2 = (char *)FlashAnimationLibrary__GetTextField(arg1,"cr1");
  if (pcVar2 != (char *)0x0) {
    FlashTextField__SetText(pcVar2,puVar1);
  }
  puVar1 = strcr2;
  pcVar2 = (char *)FlashAnimationLibrary__GetTextField(arg1,"ch2");
  if (pcVar2 != (char *)0x0) {
    FlashTextField__SetText(pcVar2,puVar1);
  }
  puVar1 = strcr3;
  pcVar2 = (char *)FlashAnimationLibrary__GetTextField(arg1,"cr3");
  if (pcVar2 != (char *)0x0) {
    FlashTextField__SetText(pcVar2,puVar1);
  }
  puVar1 = strcr4;
  pcVar2 = (char *)FlashAnimationLibrary__GetTextField(arg1,"cr4");
  if (pcVar2 != (char *)0x0) {
    FlashTextField__SetText(pcVar2,puVar1);
  }
  puVar1 = strcr5;
  pcVar2 = (char *)FlashAnimationLibrary__GetTextField(arg1,"cr5");
  if (pcVar2 != (char *)0x0) {
    FlashTextField__SetText(pcVar2,puVar1);
  }
  puVar1 = strcr6;
  pcVar2 = (char *)FlashAnimationLibrary__GetTextField(arg1,"cr6");
  if (pcVar2 != (char *)0x0) {
    FlashTextField__SetText(pcVar2,puVar1);
  }
  puVar1 = cr7;
  pcVar2 = (char *)FlashAnimationLibrary__GetTextField(arg1,"cr7");
  if (pcVar2 != (char *)0x0) {
    FlashTextField__SetText(pcVar2,puVar1);
  }
  puVar1 = cr8;
  pcVar2 = (char *)FlashAnimationLibrary__GetTextField(arg1,"cr8");
  if (pcVar2 != (char *)0x0) {
    FlashTextField__SetText(pcVar2,puVar1);
  }
  puVar1 = cr9;
  pcVar2 = (char *)FlashAnimationLibrary__GetTextField(arg1,"cr9");
  if (pcVar2 != (char *)0x0) {
    FlashTextField__SetText(pcVar2,puVar1);
  }
  puVar1 = cr10;
  pcVar2 = (char *)FlashAnimationLibrary__GetTextField(arg1,"cr10");
  if (pcVar2 != (char *)0x0) {
    FlashTextField__SetText(pcVar2,puVar1);
  }
  puVar1 = cr11;
  pcVar2 = (char *)FlashAnimationLibrary__GetTextField(arg1,"cr11");
  if (pcVar2 != (char *)0x0) {
    FlashTextField__SetText(pcVar2,puVar1);
  }
  puVar1 = cr12;
  pcVar2 = (char *)FlashAnimationLibrary__GetTextField(arg1,"cr12");
  if (pcVar2 != (char *)0x0) {
    FlashTextField__SetText(pcVar2,puVar1);
  }
  puVar1 = cr13;
  pcVar2 = (char *)FlashAnimationLibrary__GetTextField(arg1,"cr13");
  if (pcVar2 != (char *)0x0) {
    FlashTextField__SetText(pcVar2,puVar1);
  }
  puVar1 = strTitle4;
  pcVar2 = (char *)FlashAnimationLibrary__GetTextField(arg1,"title4");
  if (pcVar2 != (char *)0x0) {
    FlashTextField__SetText(pcVar2,puVar1);
    return;
  }
  return;
}

/* ======================================================================
 * SelectCameraItems  (Ghidra `SelectCameraItems` @ 0049eca0)
 * Signature: uint8_t __stdcall SelectCameraItems(tagButtonProps * arg1, void * arg2)
 * Calls: `Camera__ScreenToWorld`, `Vector2__operator_minus__005be180`
 * Called by: `SMBEditor__SetToCameraMode`
 */
/* SelectCameraItems(tagButtonProps const*, void*) */

void SelectCameraItems(tagButtonProps *arg1,void *arg2)

{
  uint32_t *puVar1;
  uint32_t *puVar2;
  float fVar3;
  float local_6c;
  uint32_t local_68;
  uint32_t local_64;
  uint32_t local_60;
  uint32_t local_5c;
  uint32_t local_58;
  uint32_t local_54;
  uint32_t local_48;
  uint32_t local_44;
  uint32_t local_38;
  uint32_t local_34;
  Vector2 local_28 [24];
  
  if (*(int *)arg1 != 1) {
    return;
  }
  puVar2 = (uint32_t *)0x0;
  local_48 = *(uint32_t *)(Mouse + 0xc);
  local_44 = *(uint32_t *)(Mouse + 0x10);
  local_68 = 0;
  local_64 = 0;
  local_60 = 0;
  local_5c = 0;
  Camera__ScreenToWorld
            (*(Camera **)(SuperMeatBoy + 0x38),(FPUVector *)&local_68,(Vector2 *)&local_48,0.0);
  local_58 = local_68;
  local_54 = local_64;
  puVar1 = *(uint32_t **)(*(long *)(SuperMeatBoy + 0x38) + 0x1180);
  if (puVar1 != (uint32_t *)0x0) {
    local_6c = DAT_005c17f0 /* R:100000000.0f */;
    do {
      local_38 = *puVar1;
      local_34 = puVar1[1];
      Vector2__operator_minus__005be180(local_28,(Vector2 *)&local_38);
      fVar3 = (float)Vector2__LengthSq(local_28);
      if ((fVar3 < DAT_005c488c /* R:1600.0f */) && (fVar3 < local_6c)) {
        puVar2 = puVar1;
        local_6c = fVar3;
      }
      puVar1 = *(uint32_t **)(puVar1 + 6);
    } while (puVar1 != (uint32_t *)0x0);
  }
  *(uint32_t **)(SuperMeatBoyEditor + 0x108) = puVar2;
  return;
}

/* ======================================================================
 * SetPieceWayPointMode  (Ghidra `SetPieceWayPointMode` @ 0049f260)
 * Signature: uint8_t __stdcall SetPieceWayPointMode(tagButtonProps * arg1, void * arg2)
 * Calls: (none)
 * Called by: `SMBEditor__SetToAnimationMode`, `SMBEditor__SetToObstacleMode`, `SMBEditor__SetToSetPieceMode`
 */
/* SetPieceWayPointMode(tagButtonProps const*, void*) */

void SetPieceWayPointMode(tagButtonProps *arg1,void *arg2)

{
  if (((arg1 == (tagButtonProps *)0x0) || (*(int *)arg1 == 1)) &&
     (*(short *)(SuperMeatBoyEditor + 0x98) == 1)) {
    pCurrentSetPieceWayPoint = 0;
    bSetPieceWayPointMode = (uint)(bSetPieceWayPointMode == 0);
    return;
  }
  return;
}

/* ======================================================================
 * ShowLayerProperties  (Ghidra `ShowLayerProperties` @ 004a1740)
 * Signature: uint8_t __stdcall ShowLayerProperties(tagButtonProps * arg1, void * arg2)
 * Calls: `EditorForm_LayerPropsOpen`
 * Called by: `SMBEditor__Activate`
 */
/* ShowLayerProperties(tagButtonProps const*, void*) */

void ShowLayerProperties(tagButtonProps *arg1,void *arg2)

{
  if (*(int *)arg1 != 1) {
    return;
  }
  EditorForm_LayerPropsOpen((void *)0x0);
  return;
}

/* ======================================================================
 * ShowLightProperties  (Ghidra `ShowLightProperties` @ 004a1760)
 * Signature: uint8_t __stdcall ShowLightProperties(tagButtonProps * arg1, void * arg2)
 * Calls: `FlashEditableTextField__GetUITextField`, `Sprint`, `TKeyboard__BackupCallbacks`
 * Called by: `EditorForm_ObjectPropertiesOpen`, `SMBEditor__Activate`, `ShowLightProperties__004a1d40`
 */
/* WARNING: Removing unreachable block (ram,0x004a1ca8) */
/* ShowLightProperties(tagButtonProps const*, void*) [clone .part.99] */

void ShowLightProperties(tagButtonProps *arg1,void *arg2)

{
  InputCallback **ppIVar1;
  long lVar2;
  TKeyboard *this;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  wchar_t *pwVar6;
  uint uVar7;
  double dVar8;
  char local_58 [32];
  ulong local_38;
  uint64_t local_30;
  uint64_t local_28;
  
  this = Keyboard;
  lVar5 = pEditorLightPropsForm;
  ppIVar1 = (InputCallback **)(pEditorLightPropsForm + 0xb0);
  *(uint64_t *)(pEditorLightPropsForm + 0xb0) = 0;
  TKeyboard__BackupCallbacks(this,ppIVar1);
  if (pCurrentVisibleForm == 0) {
    if (lVar5 == 0) goto LAB_004a1a09;
  }
  else {
    if (lVar5 == pCurrentVisibleForm) goto LAB_004a1a09;
    *(uint32_t *)(pCurrentVisibleForm + 0xac) = 1;
  }
  FlashAnimationLibrary__SetTextFieldText(*(char **)(lVar5 + 0x78),"formlabel",lVar5 + 0x88);
  plVar4 = *(long **)(lVar5 + 0x80);
  if (*plVar4 != 0) {
    Sprint("labeltext%i",local_58,1);
    FlashAnimationLibrary__SetTextFieldText
              (*(char **)(lVar5 + 0x78),local_58,**(uint64_t **)(lVar5 + 0x80));
    plVar4 = *(long **)(lVar5 + 0x80);
  }
  if (plVar4[1] != 0) {
    Sprint("labeltext%i",local_58,2);
    FlashAnimationLibrary__SetTextFieldText
              (*(char **)(lVar5 + 0x78),local_58,*(uint64_t *)(*(long *)(lVar5 + 0x80) + 8));
    plVar4 = *(long **)(lVar5 + 0x80);
  }
  if (plVar4[2] != 0) {
    Sprint("labeltext%i",local_58,3);
    FlashAnimationLibrary__SetTextFieldText
              (*(char **)(lVar5 + 0x78),local_58,*(uint64_t *)(*(long *)(lVar5 + 0x80) + 0x10));
    plVar4 = *(long **)(lVar5 + 0x80);
  }
  if (plVar4[3] != 0) {
    Sprint("labeltext%i",local_58,4);
    FlashAnimationLibrary__SetTextFieldText
              (*(char **)(lVar5 + 0x78),local_58,*(uint64_t *)(*(long *)(lVar5 + 0x80) + 0x18));
    plVar4 = *(long **)(lVar5 + 0x80);
  }
  if (plVar4[4] != 0) {
    Sprint("labeltext%i",local_58,5);
    FlashAnimationLibrary__SetTextFieldText
              (*(char **)(lVar5 + 0x78),local_58,*(uint64_t *)(*(long *)(lVar5 + 0x80) + 0x20));
  }
  if (*(long *)(lVar5 + 0x28) != 0) {
    FlashEditableTextField__SetText(*(char **)(*(long *)(lVar5 + 0x28) + 0x50),"");
  }
  if (*(long *)(lVar5 + 0x30) != 0) {
    FlashEditableTextField__SetText(*(char **)(*(long *)(lVar5 + 0x30) + 0x50),"");
  }
  if (*(long *)(lVar5 + 0x38) != 0) {
    FlashEditableTextField__SetText(*(char **)(*(long *)(lVar5 + 0x38) + 0x50),"");
  }
  if (*(long *)(lVar5 + 0x40) != 0) {
    FlashEditableTextField__SetText(*(char **)(*(long *)(lVar5 + 0x40) + 0x50),"");
  }
  if (*(long *)(lVar5 + 0x48) != 0) {
    FlashEditableTextField__SetText(*(char **)(*(long *)(lVar5 + 0x48) + 0x50),"");
  }
  if (*(long *)(lVar5 + 0x50) != 0) {
    FlashEditableTextField__SetText(*(char **)(*(long *)(lVar5 + 0x50) + 0x50),"");
  }
  if (*(long *)(lVar5 + 0x58) != 0) {
    FlashEditableTextField__SetText(*(char **)(*(long *)(lVar5 + 0x58) + 0x50),"");
  }
  if (*(long *)(lVar5 + 0x60) != 0) {
    FlashEditableTextField__SetText(*(char **)(*(long *)(lVar5 + 0x60) + 0x50),"");
  }
  if (*(long *)(lVar5 + 0x68) != 0) {
    FlashEditableTextField__SetText(*(char **)(*(long *)(lVar5 + 0x68) + 0x50),"");
  }
  if (*(long *)(lVar5 + 0x70) != 0) {
    FlashEditableTextField__SetText(*(char **)(*(long *)(lVar5 + 0x70) + 0x50),"");
  }
  pCurrentVisibleForm = lVar5;
  *(uint32_t *)(lVar5 + 0xa8) = 1;
LAB_004a1a09:
  if (*(long **)(lVar5 + 0x28) != (long *)0x0) {
    (**(code **)(**(long **)(lVar5 + 0x28) + 0x48))();
  }
  if (*(long **)(lVar5 + 0x30) != (long *)0x0) {
    (**(code **)(**(long **)(lVar5 + 0x30) + 0x48))();
  }
  if (*(long **)(lVar5 + 0x38) != (long *)0x0) {
    (**(code **)(**(long **)(lVar5 + 0x38) + 0x48))();
  }
  if (*(long **)(lVar5 + 0x40) != (long *)0x0) {
    (**(code **)(**(long **)(lVar5 + 0x40) + 0x48))();
  }
  if (*(long **)(lVar5 + 0x48) != (long *)0x0) {
    (**(code **)(**(long **)(lVar5 + 0x48) + 0x48))();
  }
  if (*(long **)(lVar5 + 0x50) != (long *)0x0) {
    (**(code **)(**(long **)(lVar5 + 0x50) + 0x48))();
  }
  if (*(long **)(lVar5 + 0x58) != (long *)0x0) {
    (**(code **)(**(long **)(lVar5 + 0x58) + 0x48))();
  }
  if (*(long **)(lVar5 + 0x60) != (long *)0x0) {
    (**(code **)(**(long **)(lVar5 + 0x60) + 0x48))();
  }
  if (*(long **)(lVar5 + 0x68) != (long *)0x0) {
    (**(code **)(**(long **)(lVar5 + 0x68) + 0x48))();
  }
  if (*(long **)(lVar5 + 0x70) != (long *)0x0) {
    (**(code **)(**(long **)(lVar5 + 0x70) + 0x48))();
  }
  if (*(long **)(lVar5 + 0x28) != (long *)0x0) {
    (**(code **)(**(long **)(lVar5 + 0x28) + 0x38))();
  }
  lVar2 = pEditorLightPropsForm;
  lVar5 = pSelectedLight;
  if ((pSelectedLight == 0) && (lVar5 = *(long *)(SuperMeatBoyEditor + 200), lVar5 == 0)) {
    return;
  }
  uVar7 = (uint)(*(float *)(lVar5 + 0x10) * DAT_005be898 /* R:255.0f */);
  local_38 = (ulong)uVar7;
  local_30 = (ulong)(uint)(int)(*(float *)(lVar5 + 0x14) * DAT_005be898 /* R:255.0f */);
  local_28 = (ulong)(uint)(int)(DAT_005be898 /* R:255.0f */ * *(float *)(lVar5 + 0x18));
  if (*(long *)(pEditorLightPropsForm + 0x28) != 0) {
    pwVar6 = (wchar_t *)
             FlashEditableTextField__GetUITextField
                       (*(FlashEditableTextField **)(*(long *)(pEditorLightPropsForm + 0x28) + 0x50)
                       );
    UITextField__SetDynamicText(pwVar6,&DAT_005c6660 /* R:5.184804318001823e-44f */,(ulong)uVar7);
    *(uint32_t *)(*(long *)(*(long *)(lVar2 + 0x28) + 0x50) + 0x48) = 1;
  }
  uVar3 = local_30;
  lVar5 = *(long *)(lVar2 + 0x30);
  if (lVar5 != 0) {
    if (local_30._4_1_ == '\x01') {
      dVar8 = (double)(float)local_30;
      pwVar6 = (wchar_t *)
               FlashEditableTextField__GetUITextField(*(FlashEditableTextField **)(lVar5 + 0x50));
      UITextField__SetDynamicText(pwVar6,dVar8,&DAT_005c07c4 /* R:5.184804318001823e-44f */);
    }
    else {
      pwVar6 = (wchar_t *)
               FlashEditableTextField__GetUITextField(*(FlashEditableTextField **)(lVar5 + 0x50));
      UITextField__SetDynamicText(pwVar6,&DAT_005c6660 /* R:5.184804318001823e-44f */,uVar3 & 0xffffffff);
    }
    *(uint32_t *)(*(long *)(*(long *)(lVar2 + 0x30) + 0x50) + 0x48) = 1;
  }
  uVar3 = local_28;
  lVar5 = *(long *)(lVar2 + 0x38);
  if (lVar5 != 0) {
    if (local_28._4_1_ == '\x01') {
      dVar8 = (double)(float)local_28;
      pwVar6 = (wchar_t *)
               FlashEditableTextField__GetUITextField(*(FlashEditableTextField **)(lVar5 + 0x50));
      UITextField__SetDynamicText(pwVar6,dVar8,&DAT_005c07c4 /* R:5.184804318001823e-44f */);
    }
    else {
      pwVar6 = (wchar_t *)
               FlashEditableTextField__GetUITextField(*(FlashEditableTextField **)(lVar5 + 0x50));
      UITextField__SetDynamicText(pwVar6,&DAT_005c6660 /* R:5.184804318001823e-44f */,uVar3 & 0xffffffff);
    }
    *(uint32_t *)(*(long *)(*(long *)(lVar2 + 0x38) + 0x50) + 0x48) = 1;
  }
  if (*(long *)(lVar2 + 0x40) != 0) {
    *(uint32_t *)(*(long *)(*(long *)(lVar2 + 0x40) + 0x50) + 0x48) = 0;
  }
  if (*(long *)(lVar2 + 0x48) != 0) {
    *(uint32_t *)(*(long *)(*(long *)(lVar2 + 0x48) + 0x50) + 0x48) = 0;
  }
  if (*(long *)(lVar2 + 0x50) != 0) {
    *(uint32_t *)(*(long *)(*(long *)(lVar2 + 0x50) + 0x50) + 0x48) = 0;
  }
  if (*(long *)(lVar2 + 0x58) != 0) {
    *(uint32_t *)(*(long *)(*(long *)(lVar2 + 0x58) + 0x50) + 0x48) = 0;
  }
  if (*(long *)(lVar2 + 0x60) != 0) {
    *(uint32_t *)(*(long *)(*(long *)(lVar2 + 0x60) + 0x50) + 0x48) = 0;
  }
  if (*(long *)(lVar2 + 0x68) != 0) {
    *(uint32_t *)(*(long *)(*(long *)(lVar2 + 0x68) + 0x50) + 0x48) = 0;
  }
  if (*(long *)(lVar2 + 0x70) != 0) {
    *(uint32_t *)(*(long *)(*(long *)(lVar2 + 0x70) + 0x50) + 0x48) = 0;
  }
  return;
}

/* ======================================================================
 * ShowLightProperties__004a1d40  (Ghidra `ShowLightProperties` @ 004a1d40)
 * Signature: uint8_t __stdcall ShowLightProperties(tagButtonProps * arg1, void * arg2)
 * Calls: `ShowLightProperties`
 * Called by: (none)
 */
/* ShowLightProperties(tagButtonProps const*, void*) */

void ShowLightProperties(tagButtonProps *arg1,void *arg2)

{
  if ((*(int *)(SuperMeatBoyEditor + 0xc0) == 6) &&
     ((arg1 == (tagButtonProps *)0x0 || (*(int *)arg1 == 1)))) {
    ShowLightProperties(arg1,arg2);
    return;
  }
  return;
}

/* ======================================================================
 * SetLayerToBackGeneral2  (Ghidra `SetLayerToBackGeneral2` @ 004a3310)
 * Signature: uint8_t __stdcall SetLayerToBackGeneral2(tagButtonProps * arg1, void * arg2)
 * Calls: `AddEditorLayerTween`, `SMBEditorForms__IsFormActive`, `TileLevel__getLevelLayer`
 * Called by: `SMBEditor__Activate`
 */
/* SetLayerToBackGeneral2(tagButtonProps const*, void*) */

void SetLayerToBackGeneral2(tagButtonProps *arg1,void *arg2)

{
  void *pvVar1;
  int iVar2;
  LevelRenderLayer *pLVar3;
  
  iVar2 = SMBEditorForms__IsFormActive();
  if ((iVar2 == 1) || ((arg1 != (tagButtonProps *)0x0 && (*(int *)arg1 != 1)))) {
    return;
  }
  FlashTextField__SetText(pCurrentLayerField,"Back General 2");
  *(uint32_t *)(SuperMeatBoyEditor + 0xd0) = 4;
  pvVar1 = pCurrentLayerButton;
  if (arg2 != (void *)0x0) {
    if (pCurrentLayerButton != (void *)0x0) {
      pvVar1 = arg2;
      if (arg2 == pCurrentLayerButton) goto LAB_004a33aa;
      *(uint8_t *)((long)pCurrentLayerButton + 0x4a) = 0;
      *(uint16_t *)((long)pCurrentLayerButton + 0x48) = 0;
    }
    *(uint8_t *)((long)arg2 + 0x4a) = 1;
    pvVar1 = arg2;
  }
LAB_004a33aa:
  pCurrentLayerButton = pvVar1;
  pLVar3 = (LevelRenderLayer *)TileLevel__getLevelLayer(*(TileLevel **)(SuperMeatBoy + 0x40));
  AddEditorLayerTween(pLVar3,0);
  return;
}

/* ======================================================================
 * SetLayerToActive  (Ghidra `SetLayerToActive` @ 004a3870)
 * Signature: uint8_t __stdcall SetLayerToActive(tagButtonProps * arg1, void * arg2)
 * Calls: `AddEditorLayerTween`, `SMBEditorForms__IsFormActive`, `TileLevel__getLevelLayer`
 * Called by: `SMBEditor__Activate`
 */
/* SetLayerToActive(tagButtonProps const*, void*) */

void SetLayerToActive(tagButtonProps *arg1,void *arg2)

{
  void *pvVar1;
  int iVar2;
  LevelRenderLayer *pLVar3;
  
  iVar2 = SMBEditorForms__IsFormActive();
  if ((iVar2 == 1) || ((arg1 != (tagButtonProps *)0x0 && (*(int *)arg1 != 1)))) {
    return;
  }
  FlashTextField__SetText(pCurrentLayerField);
  *(uint32_t *)(SuperMeatBoyEditor + 0xd0) = 0;
  pvVar1 = pCurrentLayerButton;
  if (arg2 != (void *)0x0) {
    if (pCurrentLayerButton != (void *)0x0) {
      pvVar1 = arg2;
      if (arg2 == pCurrentLayerButton) goto LAB_004a3907;
      *(uint8_t *)((long)pCurrentLayerButton + 0x4a) = 0;
      *(uint16_t *)((long)pCurrentLayerButton + 0x48) = 0;
    }
    *(uint8_t *)((long)arg2 + 0x4a) = 1;
    pvVar1 = arg2;
  }
LAB_004a3907:
  pCurrentLayerButton = pvVar1;
  pLVar3 = (LevelRenderLayer *)TileLevel__getLevelLayer(*(TileLevel **)(SuperMeatBoy + 0x40));
  AddEditorLayerTween(pLVar3,0);
  return;
}

/* ======================================================================
 * SetLayerToBackGeneral1  (Ghidra `SetLayerToBackGeneral1` @ 004a3930)
 * Signature: uint8_t __stdcall SetLayerToBackGeneral1(tagButtonProps * arg1, void * arg2)
 * Calls: `AddEditorLayerTween`, `SMBEditorForms__IsFormActive`, `TileLevel__getLevelLayer`
 * Called by: `SMBEditor__Activate`
 */
/* SetLayerToBackGeneral1(tagButtonProps const*, void*) */

void SetLayerToBackGeneral1(tagButtonProps *arg1,void *arg2)

{
  void *pvVar1;
  int iVar2;
  LevelRenderLayer *pLVar3;
  
  iVar2 = SMBEditorForms__IsFormActive();
  if ((iVar2 == 1) || ((arg1 != (tagButtonProps *)0x0 && (*(int *)arg1 != 1)))) {
    return;
  }
  FlashTextField__SetText(pCurrentLayerField,"Back Tile General");
  *(uint32_t *)(SuperMeatBoyEditor + 0xd0) = 3;
  pvVar1 = pCurrentLayerButton;
  if (arg2 != (void *)0x0) {
    if (pCurrentLayerButton != (void *)0x0) {
      pvVar1 = arg2;
      if (arg2 == pCurrentLayerButton) goto LAB_004a39ca;
      *(uint8_t *)((long)pCurrentLayerButton + 0x4a) = 0;
      *(uint16_t *)((long)pCurrentLayerButton + 0x48) = 0;
    }
    *(uint8_t *)((long)arg2 + 0x4a) = 1;
    pvVar1 = arg2;
  }
LAB_004a39ca:
  pCurrentLayerButton = pvVar1;
  pLVar3 = (LevelRenderLayer *)TileLevel__getLevelLayer(*(TileLevel **)(SuperMeatBoy + 0x40));
  AddEditorLayerTween(pLVar3,0);
  return;
}

/* ======================================================================
 * SetLayerToFore  (Ghidra `SetLayerToFore` @ 004a3a00)
 * Signature: uint8_t __stdcall SetLayerToFore(tagButtonProps * arg1, void * arg2)
 * Calls: `AddEditorLayerTween`, `SMBEditorForms__IsFormActive`, `TileLevel__getLevelLayer`
 * Called by: `SMBEditor__Activate`
 */
/* SetLayerToFore(tagButtonProps const*, void*) */

void SetLayerToFore(tagButtonProps *arg1,void *arg2)

{
  void *pvVar1;
  int iVar2;
  LevelRenderLayer *pLVar3;
  
  iVar2 = SMBEditorForms__IsFormActive();
  if ((iVar2 == 1) || ((arg1 != (tagButtonProps *)0x0 && (*(int *)arg1 != 1)))) {
    return;
  }
  FlashTextField__SetText(pCurrentLayerField,"Fore Tile");
  *(uint32_t *)(SuperMeatBoyEditor + 0xd0) = 1;
  pvVar1 = pCurrentLayerButton;
  if (arg2 != (void *)0x0) {
    if (pCurrentLayerButton != (void *)0x0) {
      pvVar1 = arg2;
      if (arg2 == pCurrentLayerButton) goto LAB_004a3a9a;
      *(uint8_t *)((long)pCurrentLayerButton + 0x4a) = 0;
      *(uint16_t *)((long)pCurrentLayerButton + 0x48) = 0;
    }
    *(uint8_t *)((long)arg2 + 0x4a) = 1;
    pvVar1 = arg2;
  }
LAB_004a3a9a:
  pCurrentLayerButton = pvVar1;
  pLVar3 = (LevelRenderLayer *)TileLevel__getLevelLayer(*(TileLevel **)(SuperMeatBoy + 0x40));
  AddEditorLayerTween(pLVar3,0);
  return;
}

/* ======================================================================
 * SetLayerToBack  (Ghidra `SetLayerToBack` @ 004a3ad0)
 * Signature: uint8_t __stdcall SetLayerToBack(tagButtonProps * arg1, void * arg2)
 * Calls: `AddEditorLayerTween`, `SMBEditorForms__IsFormActive`, `TileLevel__getLevelLayer`
 * Called by: `SMBEditor__Activate`
 */
/* SetLayerToBack(tagButtonProps const*, void*) */

void SetLayerToBack(tagButtonProps *arg1,void *arg2)

{
  void *pvVar1;
  int iVar2;
  LevelRenderLayer *pLVar3;
  
  iVar2 = SMBEditorForms__IsFormActive();
  if ((iVar2 == 1) || ((arg1 != (tagButtonProps *)0x0 && (*(int *)arg1 != 1)))) {
    return;
  }
  FlashTextField__SetText(pCurrentLayerField,"Back Tile");
  *(uint32_t *)(SuperMeatBoyEditor + 0xd0) = 2;
  pvVar1 = pCurrentLayerButton;
  if (arg2 != (void *)0x0) {
    if (pCurrentLayerButton != (void *)0x0) {
      pvVar1 = arg2;
      if (arg2 == pCurrentLayerButton) goto LAB_004a3b6a;
      *(uint8_t *)((long)pCurrentLayerButton + 0x4a) = 0;
      *(uint16_t *)((long)pCurrentLayerButton + 0x48) = 0;
    }
    *(uint8_t *)((long)arg2 + 0x4a) = 1;
    pvVar1 = arg2;
  }
LAB_004a3b6a:
  pCurrentLayerButton = pvVar1;
  pLVar3 = (LevelRenderLayer *)TileLevel__getLevelLayer(*(TileLevel **)(SuperMeatBoy + 0x40));
  AddEditorLayerTween(pLVar3,0);
  return;
}

/* ======================================================================
 * SetLayerToForeGeneral1  (Ghidra `SetLayerToForeGeneral1` @ 004a3ba0)
 * Signature: uint8_t __stdcall SetLayerToForeGeneral1(tagButtonProps * arg1, void * arg2)
 * Calls: `AddEditorLayerTween`, `SMBEditorForms__IsFormActive`, `TileLevel__getLevelLayer`
 * Called by: `SMBEditor__Activate`
 */
/* SetLayerToForeGeneral1(tagButtonProps const*, void*) */

void SetLayerToForeGeneral1(tagButtonProps *arg1,void *arg2)

{
  void *pvVar1;
  int iVar2;
  LevelRenderLayer *pLVar3;
  
  iVar2 = SMBEditorForms__IsFormActive();
  if ((iVar2 == 1) || ((arg1 != (tagButtonProps *)0x0 && (*(int *)arg1 != 1)))) {
    return;
  }
  FlashTextField__SetText(pCurrentLayerField,"Fore General 2");
  *(uint32_t *)(SuperMeatBoyEditor + 0xd0) = 6;
  pvVar1 = pCurrentLayerButton;
  if (arg2 != (void *)0x0) {
    if (pCurrentLayerButton != (void *)0x0) {
      pvVar1 = arg2;
      if (arg2 == pCurrentLayerButton) goto LAB_004a3c3a;
      *(uint8_t *)((long)pCurrentLayerButton + 0x4a) = 0;
      *(uint16_t *)((long)pCurrentLayerButton + 0x48) = 0;
    }
    *(uint8_t *)((long)arg2 + 0x4a) = 1;
    pvVar1 = arg2;
  }
LAB_004a3c3a:
  pCurrentLayerButton = pvVar1;
  pLVar3 = (LevelRenderLayer *)TileLevel__getLevelLayer(*(TileLevel **)(SuperMeatBoy + 0x40));
  AddEditorLayerTween(pLVar3,0);
  return;
}

/* ======================================================================
 * SetLayerToBackGeneral3  (Ghidra `SetLayerToBackGeneral3` @ 004a3c70)
 * Signature: uint8_t __stdcall SetLayerToBackGeneral3(tagButtonProps * arg1, void * arg2)
 * Calls: `AddEditorLayerTween`, `SMBEditorForms__IsFormActive`, `TileLevel__getLevelLayer`
 * Called by: `SMBEditor__Activate`
 */
/* SetLayerToBackGeneral3(tagButtonProps const*, void*) */

void SetLayerToBackGeneral3(tagButtonProps *arg1,void *arg2)

{
  void *pvVar1;
  int iVar2;
  LevelRenderLayer *pLVar3;
  
  iVar2 = SMBEditorForms__IsFormActive();
  if ((iVar2 == 1) || ((arg1 != (tagButtonProps *)0x0 && (*(int *)arg1 != 1)))) {
    return;
  }
  FlashTextField__SetText(pCurrentLayerField,"Back General 3");
  *(uint32_t *)(SuperMeatBoyEditor + 0xd0) = 5;
  pvVar1 = pCurrentLayerButton;
  if (arg2 != (void *)0x0) {
    if (pCurrentLayerButton != (void *)0x0) {
      pvVar1 = arg2;
      if (arg2 == pCurrentLayerButton) goto LAB_004a3d0a;
      *(uint8_t *)((long)pCurrentLayerButton + 0x4a) = 0;
      *(uint16_t *)((long)pCurrentLayerButton + 0x48) = 0;
    }
    *(uint8_t *)((long)arg2 + 0x4a) = 1;
    pvVar1 = arg2;
  }
LAB_004a3d0a:
  pCurrentLayerButton = pvVar1;
  pLVar3 = (LevelRenderLayer *)TileLevel__getLevelLayer(*(TileLevel **)(SuperMeatBoy + 0x40));
  AddEditorLayerTween(pLVar3,0);
  return;
}

/* ======================================================================
 * SetLayerToForeGeneral2  (Ghidra `SetLayerToForeGeneral2` @ 004a3d40)
 * Signature: uint8_t __stdcall SetLayerToForeGeneral2(tagButtonProps * arg1, void * arg2)
 * Calls: `AddEditorLayerTween`, `SMBEditorForms__IsFormActive`, `TileLevel__getLevelLayer`
 * Called by: `SMBEditor__Activate`
 */
/* SetLayerToForeGeneral2(tagButtonProps const*, void*) */

void SetLayerToForeGeneral2(tagButtonProps *arg1,void *arg2)

{
  void *pvVar1;
  int iVar2;
  LevelRenderLayer *pLVar3;
  
  iVar2 = SMBEditorForms__IsFormActive();
  if ((iVar2 == 1) || ((arg1 != (tagButtonProps *)0x0 && (*(int *)arg1 != 1)))) {
    return;
  }
  FlashTextField__SetText(pCurrentLayerField,"Fore Tile General");
  *(uint32_t *)(SuperMeatBoyEditor + 0xd0) = 7;
  pvVar1 = pCurrentLayerButton;
  if (arg2 != (void *)0x0) {
    if (pCurrentLayerButton != (void *)0x0) {
      pvVar1 = arg2;
      if (arg2 == pCurrentLayerButton) goto LAB_004a3dda;
      *(uint8_t *)((long)pCurrentLayerButton + 0x4a) = 0;
      *(uint16_t *)((long)pCurrentLayerButton + 0x48) = 0;
    }
    *(uint8_t *)((long)arg2 + 0x4a) = 1;
    pvVar1 = arg2;
  }
LAB_004a3dda:
  pCurrentLayerButton = pvVar1;
  pLVar3 = (LevelRenderLayer *)TileLevel__getLevelLayer(*(TileLevel **)(SuperMeatBoy + 0x40));
  AddEditorLayerTween(pLVar3,0);
  return;
}

/* ======================================================================
 * SetButtonAsSelected  (Ghidra `SetButtonAsSelected` @ 004a3fa0)
 * Signature: uint8_t __stdcall SetButtonAsSelected(EditorButton * arg1, EditorButton * * arg2)
 * Calls: (none)
 * Called by: (none)
 */
/* SetButtonAsSelected(EditorButton*, EditorButton**) */

void SetButtonAsSelected(EditorButton *arg1,EditorButton **arg2)

{
  EditorButton *pEVar1;
  
  if (arg1 == (EditorButton *)0x0) {
    return;
  }
  pEVar1 = *arg2;
  if (pEVar1 != (EditorButton *)0x0) {
    if (arg1 == pEVar1) goto LAB_004a3fc5;
    pEVar1[0x4a] = (EditorButton)0x0;
    *(uint16_t *)(pEVar1 + 0x48) = 0;
    if (*arg2 == arg1) goto LAB_004a3fc5;
  }
  arg1[0x4a] = (EditorButton)0x1;
LAB_004a3fc5:
  *arg2 = arg1;
  return;
}

/* ======================================================================
 * SetObjectDefaults  (Ghidra `SetObjectDefaults` @ 004a45d0)
 * Signature: uint8_t __stdcall SetObjectDefaults(TileLevelSetPiece * arg1)
 * Calls: `strcmp`
 * Called by: (none)
 */
/* SetObjectDefaults(TileLevelSetPiece*) */

void SetObjectDefaults(TileLevelSetPiece *arg1)

{
  char *__s1;
  uint64_t *puVar1;
  int iVar2;
  uint64_t *puVar3;
  uint8_t **ppuVar4;
  uint64_t *puVar5;
  
  puVar5 = pCurrentObjectArray;
  if ((0 < iNumObjectArrayEntries) &&
     ((uint)(byte)arg1[0x20] != *(uint *)(pCurrentObjectArray + 2))) {
    puVar1 = pCurrentObjectArray + 3;
    do {
      puVar3 = puVar1;
      puVar5 = pCurrentObjectArray;
      if (puVar3 == pCurrentObjectArray + 3 + (ulong)(iNumObjectArrayEntries - 1) * 3) break;
      puVar1 = puVar3 + 3;
      puVar5 = puVar3;
    } while ((uint)(byte)arg1[0x20] != *(uint *)(puVar3 + 2));
  }
  __s1 = (char *)*puVar5;
  iVar2 = strcmp(__s1,objectFormDefaults);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = strcmp(__s1,PTR_s_quake_00816018);
    if (iVar2 == 0) {
      iVar2 = 1;
    }
    else {
      iVar2 = strcmp(__s1,PTR_s_smoke_00816030);
      if (iVar2 == 0) {
        iVar2 = 2;
      }
      else {
        iVar2 = strcmp(__s1,PTR_s_shooter1_00816048);
        if (iVar2 == 0) {
          iVar2 = 3;
        }
        else {
          iVar2 = strcmp(__s1,PTR_s_shooter2_00816060);
          if (iVar2 == 0) {
            iVar2 = 4;
          }
          else {
            iVar2 = strcmp(__s1,PTR_s_cannon_00816078);
            if (iVar2 == 0) {
              iVar2 = 5;
            }
            else {
              iVar2 = strcmp(__s1,PTR_s_buttholeidle_00816090);
              if (iVar2 == 0) {
                iVar2 = 6;
              }
              else {
                iVar2 = strcmp(__s1,PTR_s_turret1idle_008160a8);
                if (iVar2 == 0) {
                  iVar2 = 7;
                }
                else {
                  iVar2 = strcmp(__s1,PTR_s_lazeroff_005c6e3d_6_008160c0);
                  if (iVar2 == 0) {
                    iVar2 = 8;
                  }
                  else {
                    iVar2 = strcmp(__s1,PTR_s_hominglazeron_008160d8);
                    if (iVar2 == 0) {
                      iVar2 = 9;
                    }
                    else {
                      iVar2 = strcmp(__s1,PTR_DAT_008160f0 /* R:8.464432671175376e-39f */);
                      if (iVar2 == 0) {
                        iVar2 = 10;
                      }
                      else {
                        iVar2 = strcmp(__s1,PTR_s_switchidle_00816108);
                        if (iVar2 == 0) {
                          iVar2 = 0xb;
                        }
                        else {
                          iVar2 = strcmp(__s1,PTR_DAT_00816120 /* R:8.46699704736509e-39f */);
                          if (iVar2 == 0) {
                            iVar2 = 0xc;
                          }
                          else {
                            iVar2 = strcmp(__s1,PTR_s_launcher2shoot_00816138);
                            if (iVar2 == 0) {
                              iVar2 = 0xd;
                            }
                            else {
                              iVar2 = strcmp(__s1,PTR_DAT_00816150 /* R:8.467023672035912e-39f */);
                              if (iVar2 == 0) {
                                iVar2 = 0xe;
                              }
                              else {
                                iVar2 = strcmp(__s1,PTR_s_defaultform_00816168);
                                ppuVar4 = &PTR_s_defaultform_00816168;
                                if (iVar2 != 0) goto LAB_004a4799;
                                iVar2 = 0xf;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  ppuVar4 = &objectFormDefaults + (long)iVar2 * 3;
LAB_004a4799:
  if (ppuVar4[2] != (uint8_t *)0x0) {
    *(uint32_t *)(arg1 + 0x4c) = *(uint32_t *)(ppuVar4[2] + 8);
    *(uint32_t *)(arg1 + 0x50) = *(uint32_t *)(ppuVar4[2] + 0xc);
    *(uint32_t *)(arg1 + 0x54) = *(uint32_t *)(ppuVar4[2] + 0x10);
    *(uint32_t *)(arg1 + 0x58) = *(uint32_t *)(ppuVar4[2] + 0x14);
    *(uint32_t *)(arg1 + 0x48) = *(uint32_t *)ppuVar4[2];
    *(uint32_t *)(arg1 + 0x44) = *(uint32_t *)(ppuVar4[2] + 4);
  }
  return;
}

/* ======================================================================
 * ShowObstacleAnimalProps  (Ghidra `ShowObstacleAnimalProps` @ 004a4980)
 * Signature: uint8_t __stdcall ShowObstacleAnimalProps(tagButtonProps * arg1, void * arg2)
 * Calls: `EditorForm__Activate`, `FlashAnimationLibrary__GetTextField`, `FlashEditableTextField__GetUITextField`, `Sprint`, `strcmp`
 * Called by: `EditorForm_ObjectPropertiesOpen`, `SMBEditor__Activate`, `ShowObstacleAnimalProps__004a5ac0`
 */
/* ShowObstacleAnimalProps(tagButtonProps const*, void*) [clone .part.129] */

void ShowObstacleAnimalProps(tagButtonProps *arg1,void *arg2)

{
  float fVar1;
  uint uVar2;
  char *__s1;
  long *plVar3;
  long lVar4;
  float *pfVar5;
  EditorForm *pEVar6;
  ulong uVar7;
  uint64_t *puVar8;
  int iVar9;
  uint64_t *puVar10;
  long lVar11;
  wchar_t *pwVar12;
  char cVar13;
  uint8_t **ppuVar14;
  uint64_t *puVar15;
  double dVar16;
  uint32_t local_88;
  uint8_t local_84;
  uint32_t local_80;
  uint8_t local_7c;
  uint32_t local_78;
  uint8_t local_74;
  uint32_t local_70;
  uint8_t local_6c;
  uint32_t local_68;
  uint8_t local_64;
  uint32_t local_60;
  uint8_t local_5c;
  char local_58 [32];
  uint64_t local_38;
  uint64_t local_30;
  uint64_t local_28;
  uint64_t local_20;
  
  iVar9 = *(int *)(SuperMeatBoyEditor + 0xc0);
  if ((iVar9 != 5) && (iVar9 != 4)) {
    if (iVar9 != 7) {
      return;
    }
    if (pSelectedAnimal == 0) {
      return;
    }
    EditorForm__Activate(pEditorAnimalPropsForm);
    pEVar6 = pEditorAnimalPropsForm;
    if (pSelectedAnimal == 0) {
      return;
    }
    cVar13 = (char)(int)*(float *)(pSelectedAnimal + 0x108);
    local_38 = (ulong)CONCAT14(cVar13,1);
    local_20 = (ulong)CONCAT14((char)(int)*(float *)(pSelectedAnimal + 0x104),1);
    lVar11 = *(long *)(pEditorAnimalPropsForm + 0x28);
    local_30 = (ulong)CONCAT14((char)(int)*(float *)(pSelectedAnimal + 0x10c),1);
    local_28 = (ulong)CONCAT14((char)(int)*(float *)(pSelectedAnimal + 0x100),1);
    if (lVar11 != 0) {
      if (cVar13 == '\x01') {
        pwVar12 = (wchar_t *)
                  FlashEditableTextField__GetUITextField
                            (*(FlashEditableTextField **)(lVar11 + 0x50));
        UITextField__SetDynamicText(pwVar12,0x36a0000000000000,&DAT_005c07c4 /* R:5.184804318001823e-44f */);
      }
      else {
        pwVar12 = (wchar_t *)
                  FlashEditableTextField__GetUITextField
                            (*(FlashEditableTextField **)(lVar11 + 0x50));
        UITextField__SetDynamicText(pwVar12,&DAT_005c6660 /* R:5.184804318001823e-44f */,1);
      }
      *(uint32_t *)(*(long *)(*(long *)(pEVar6 + 0x28) + 0x50) + 0x48) = 1;
    }
    uVar7 = local_30;
    lVar11 = *(long *)(pEVar6 + 0x30);
    if (lVar11 != 0) {
      if (local_30._4_1_ == '\x01') {
        dVar16 = (double)(float)local_30;
        pwVar12 = (wchar_t *)
                  FlashEditableTextField__GetUITextField
                            (*(FlashEditableTextField **)(lVar11 + 0x50));
        UITextField__SetDynamicText(pwVar12,dVar16,&DAT_005c07c4 /* R:5.184804318001823e-44f */);
      }
      else {
        pwVar12 = (wchar_t *)
                  FlashEditableTextField__GetUITextField
                            (*(FlashEditableTextField **)(lVar11 + 0x50));
        UITextField__SetDynamicText(pwVar12,&DAT_005c6660 /* R:5.184804318001823e-44f */,uVar7 & 0xffffffff);
      }
      *(uint32_t *)(*(long *)(*(long *)(pEVar6 + 0x30) + 0x50) + 0x48) = 1;
    }
    uVar7 = local_28;
    lVar11 = *(long *)(pEVar6 + 0x38);
    if (lVar11 != 0) {
      if (local_28._4_1_ == '\x01') {
        dVar16 = (double)(float)local_28;
        pwVar12 = (wchar_t *)
                  FlashEditableTextField__GetUITextField
                            (*(FlashEditableTextField **)(lVar11 + 0x50));
        UITextField__SetDynamicText(pwVar12,dVar16,&DAT_005c07c4 /* R:5.184804318001823e-44f */);
      }
      else {
        pwVar12 = (wchar_t *)
                  FlashEditableTextField__GetUITextField
                            (*(FlashEditableTextField **)(lVar11 + 0x50));
        UITextField__SetDynamicText(pwVar12,&DAT_005c6660 /* R:5.184804318001823e-44f */,uVar7 & 0xffffffff);
      }
      *(uint32_t *)(*(long *)(*(long *)(pEVar6 + 0x38) + 0x50) + 0x48) = 1;
    }
    uVar7 = local_20;
    lVar11 = *(long *)(pEVar6 + 0x40);
    if (lVar11 != 0) {
      if (local_20._4_1_ == '\x01') {
        dVar16 = (double)(float)local_20;
        pwVar12 = (wchar_t *)
                  FlashEditableTextField__GetUITextField
                            (*(FlashEditableTextField **)(lVar11 + 0x50));
        UITextField__SetDynamicText(pwVar12,dVar16,&DAT_005c07c4 /* R:5.184804318001823e-44f */);
      }
      else {
        pwVar12 = (wchar_t *)
                  FlashEditableTextField__GetUITextField
                            (*(FlashEditableTextField **)(lVar11 + 0x50));
        UITextField__SetDynamicText(pwVar12,&DAT_005c6660 /* R:5.184804318001823e-44f */,uVar7 & 0xffffffff);
      }
      *(uint32_t *)(*(long *)(*(long *)(pEVar6 + 0x40) + 0x50) + 0x48) = 1;
    }
    if (*(long *)(pEVar6 + 0x48) != 0) {
      *(uint32_t *)(*(long *)(*(long *)(pEVar6 + 0x48) + 0x50) + 0x48) = 0;
    }
    if (*(long *)(pEVar6 + 0x50) != 0) {
      *(uint32_t *)(*(long *)(*(long *)(pEVar6 + 0x50) + 0x50) + 0x48) = 0;
    }
    if (*(long *)(pEVar6 + 0x58) != 0) {
      *(uint32_t *)(*(long *)(*(long *)(pEVar6 + 0x58) + 0x50) + 0x48) = 0;
    }
    if (*(long *)(pEVar6 + 0x60) != 0) {
      *(uint32_t *)(*(long *)(*(long *)(pEVar6 + 0x60) + 0x50) + 0x48) = 0;
    }
    if (*(long *)(pEVar6 + 0x68) != 0) {
      *(uint32_t *)(*(long *)(*(long *)(pEVar6 + 0x68) + 0x50) + 0x48) = 0;
    }
    lVar11 = *(long *)(pEVar6 + 0x70);
    if (lVar11 == 0) {
      return;
    }
    goto LAB_004a5219;
  }
  if (*(short *)(SuperMeatBoyEditor + 0x98) == 0) {
    return;
  }
  EditorForm__Activate(pEditorObjectPropsForm);
  lVar11 = **(long **)(SuperMeatBoyEditor + 0xa8);
  puVar15 = pCurrentObjectArray;
  if ((0 < iNumObjectArrayEntries) &&
     ((uint)*(byte *)(lVar11 + 0x20) != *(uint *)(pCurrentObjectArray + 2))) {
    puVar8 = pCurrentObjectArray + 3;
    do {
      puVar10 = puVar8;
      puVar15 = pCurrentObjectArray;
      if (puVar10 == pCurrentObjectArray + 3 + (ulong)(iNumObjectArrayEntries - 1) * 3) break;
      puVar8 = puVar10 + 3;
      puVar15 = puVar10;
    } while ((uint)*(byte *)(lVar11 + 0x20) != *(uint *)(puVar10 + 2));
  }
  __s1 = (char *)*puVar15;
  iVar9 = strcmp(__s1,objectFormDefaults);
  if (iVar9 == 0) {
    iVar9 = 0;
LAB_004a5a40:
    ppuVar14 = &objectFormDefaults + (long)iVar9 * 3;
  }
  else {
    iVar9 = strcmp(__s1,PTR_s_quake_00816018);
    if (iVar9 == 0) {
      iVar9 = 1;
      goto LAB_004a5a40;
    }
    iVar9 = strcmp(__s1,PTR_s_smoke_00816030);
    if (iVar9 == 0) {
      iVar9 = 2;
      goto LAB_004a5a40;
    }
    iVar9 = strcmp(__s1,PTR_s_shooter1_00816048);
    if (iVar9 == 0) {
      iVar9 = 3;
      goto LAB_004a5a40;
    }
    iVar9 = strcmp(__s1,PTR_s_shooter2_00816060);
    if (iVar9 == 0) {
      iVar9 = 4;
      goto LAB_004a5a40;
    }
    iVar9 = strcmp(__s1,PTR_s_cannon_00816078);
    if (iVar9 == 0) {
      iVar9 = 5;
      goto LAB_004a5a40;
    }
    iVar9 = strcmp(__s1,PTR_s_buttholeidle_00816090);
    if (iVar9 == 0) {
      iVar9 = 6;
      goto LAB_004a5a40;
    }
    iVar9 = strcmp(__s1,PTR_s_turret1idle_008160a8);
    if (iVar9 == 0) {
      iVar9 = 7;
      goto LAB_004a5a40;
    }
    iVar9 = strcmp(__s1,PTR_s_lazeroff_005c6e3d_6_008160c0);
    if (iVar9 == 0) {
      iVar9 = 8;
      goto LAB_004a5a40;
    }
    iVar9 = strcmp(__s1,PTR_s_hominglazeron_008160d8);
    if (iVar9 == 0) {
      iVar9 = 9;
      goto LAB_004a5a40;
    }
    iVar9 = strcmp(__s1,PTR_DAT_008160f0 /* R:8.464432671175376e-39f */);
    if (iVar9 == 0) {
      iVar9 = 10;
      goto LAB_004a5a40;
    }
    iVar9 = strcmp(__s1,PTR_s_switchidle_00816108);
    if (iVar9 == 0) {
      iVar9 = 0xb;
      goto LAB_004a5a40;
    }
    iVar9 = strcmp(__s1,PTR_DAT_00816120 /* R:8.46699704736509e-39f */);
    if (iVar9 == 0) {
      iVar9 = 0xc;
      goto LAB_004a5a40;
    }
    iVar9 = strcmp(__s1,PTR_s_launcher2shoot_00816138);
    if (iVar9 == 0) {
      iVar9 = 0xd;
      goto LAB_004a5a40;
    }
    iVar9 = strcmp(__s1,PTR_DAT_00816150 /* R:8.467023672035912e-39f */);
    if (iVar9 == 0) {
      iVar9 = 0xe;
      goto LAB_004a5a40;
    }
    iVar9 = strcmp(__s1,PTR_s_defaultform_00816168);
    ppuVar14 = &PTR_s_defaultform_00816168;
    if (iVar9 == 0) {
      iVar9 = 0xf;
      goto LAB_004a5a40;
    }
  }
  local_6c = 1;
  local_84 = 1;
  local_7c = 1;
  local_74 = 1;
  *(uint32_t *)(ppuVar14[1] + 0x20) = 6;
  pEVar6 = pEditorObjectPropsForm;
  local_88 = *(uint32_t *)(lVar11 + 0x48);
  local_64 = 0;
  local_5c = 0;
  local_80 = *(uint32_t *)(lVar11 + 0x44);
  local_78 = *(uint32_t *)(lVar11 + 0x4c);
  local_70 = *(uint32_t *)(lVar11 + 0x50);
  local_68 = *(uint32_t *)(lVar11 + 0x54);
  local_60 = *(uint32_t *)(lVar11 + 0x58);
  *(uint32_t **)(ppuVar14[1] + 0x18) = &local_88;
  plVar3 = (long *)ppuVar14[1];
  Sprint("labeltext%i",local_58,1);
  if ((int)plVar3[2] < 1) {
    lVar11 = FlashAnimationLibrary__GetTextField
                       (*(FlashAnimationLibrary **)(pEVar6 + 0x78),local_58);
    if (lVar11 != 0) {
      *(uint32_t *)(lVar11 + 0x20) = 0;
    }
  }
  else {
    FlashAnimationLibrary__SetTextFieldText
              (*(char **)(pEVar6 + 0x78),local_58,*(uint64_t *)plVar3[1]);
    lVar11 = FlashAnimationLibrary__GetTextField
                       (*(FlashAnimationLibrary **)(pEVar6 + 0x78),local_58);
    if (lVar11 != 0) {
      *(uint32_t *)(lVar11 + 0x20) = 1;
    }
  }
  Sprint("labeltext%i",local_58,2);
  if ((int)plVar3[2] < 2) {
    lVar11 = FlashAnimationLibrary__GetTextField
                       (*(FlashAnimationLibrary **)(pEVar6 + 0x78),local_58);
    if (lVar11 != 0) {
      *(uint32_t *)(lVar11 + 0x20) = 0;
    }
  }
  else {
    FlashAnimationLibrary__SetTextFieldText
              (*(char **)(pEVar6 + 0x78),local_58,*(uint64_t *)(plVar3[1] + 8));
    lVar11 = FlashAnimationLibrary__GetTextField
                       (*(FlashAnimationLibrary **)(pEVar6 + 0x78),local_58);
    if (lVar11 != 0) {
      *(uint32_t *)(lVar11 + 0x20) = 1;
    }
  }
  Sprint("labeltext%i",local_58,3);
  if ((int)plVar3[2] < 3) {
    lVar11 = FlashAnimationLibrary__GetTextField
                       (*(FlashAnimationLibrary **)(pEVar6 + 0x78),local_58);
    if (lVar11 != 0) {
      *(uint32_t *)(lVar11 + 0x20) = 0;
    }
  }
  else {
    FlashAnimationLibrary__SetTextFieldText
              (*(char **)(pEVar6 + 0x78),local_58,*(uint64_t *)(plVar3[1] + 0x10));
    lVar11 = FlashAnimationLibrary__GetTextField
                       (*(FlashAnimationLibrary **)(pEVar6 + 0x78),local_58);
    if (lVar11 != 0) {
      *(uint32_t *)(lVar11 + 0x20) = 1;
    }
  }
  Sprint("labeltext%i",local_58,4);
  if ((int)plVar3[2] < 4) {
    lVar11 = FlashAnimationLibrary__GetTextField
                       (*(FlashAnimationLibrary **)(pEVar6 + 0x78),local_58);
    if (lVar11 != 0) {
      *(uint32_t *)(lVar11 + 0x20) = 0;
    }
  }
  else {
    FlashAnimationLibrary__SetTextFieldText
              (*(char **)(pEVar6 + 0x78),local_58,*(uint64_t *)(plVar3[1] + 0x18));
    lVar11 = FlashAnimationLibrary__GetTextField
                       (*(FlashAnimationLibrary **)(pEVar6 + 0x78),local_58);
    if (lVar11 != 0) {
      *(uint32_t *)(lVar11 + 0x20) = 1;
    }
  }
  Sprint("labeltext%i",local_58,5);
  if ((int)plVar3[2] < 5) {
    lVar11 = FlashAnimationLibrary__GetTextField
                       (*(FlashAnimationLibrary **)(pEVar6 + 0x78),local_58);
    if (lVar11 != 0) {
      *(uint32_t *)(lVar11 + 0x20) = 0;
    }
  }
  else {
    FlashAnimationLibrary__SetTextFieldText
              (*(char **)(pEVar6 + 0x78),local_58,*(uint64_t *)(plVar3[1] + 0x20));
    lVar11 = FlashAnimationLibrary__GetTextField
                       (*(FlashAnimationLibrary **)(pEVar6 + 0x78),local_58);
    if (lVar11 != 0) {
      *(uint32_t *)(lVar11 + 0x20) = 1;
    }
  }
  Sprint("labeltext%i",local_58,6);
  if ((int)plVar3[2] < 6) {
    lVar11 = FlashAnimationLibrary__GetTextField
                       (*(FlashAnimationLibrary **)(pEVar6 + 0x78),local_58);
    if (lVar11 != 0) {
      *(uint32_t *)(lVar11 + 0x20) = 0;
    }
  }
  else {
    FlashAnimationLibrary__SetTextFieldText
              (*(char **)(pEVar6 + 0x78),local_58,*(uint64_t *)(plVar3[1] + 0x28));
    lVar11 = FlashAnimationLibrary__GetTextField
                       (*(FlashAnimationLibrary **)(pEVar6 + 0x78),local_58);
    if (lVar11 != 0) {
      *(uint32_t *)(lVar11 + 0x20) = 1;
    }
  }
  Sprint("labeltext%i",local_58,7);
  if ((int)plVar3[2] < 7) {
    lVar11 = FlashAnimationLibrary__GetTextField
                       (*(FlashAnimationLibrary **)(pEVar6 + 0x78),local_58);
    if (lVar11 != 0) {
      *(uint32_t *)(lVar11 + 0x20) = 0;
    }
  }
  else {
    FlashAnimationLibrary__SetTextFieldText
              (*(char **)(pEVar6 + 0x78),local_58,*(uint64_t *)(plVar3[1] + 0x30));
    lVar11 = FlashAnimationLibrary__GetTextField
                       (*(FlashAnimationLibrary **)(pEVar6 + 0x78),local_58);
    if (lVar11 != 0) {
      *(uint32_t *)(lVar11 + 0x20) = 1;
    }
  }
  Sprint("labeltext%i",local_58,8);
  if ((int)plVar3[2] < 8) {
    lVar11 = FlashAnimationLibrary__GetTextField
                       (*(FlashAnimationLibrary **)(pEVar6 + 0x78),local_58);
    if (lVar11 != 0) {
      *(uint32_t *)(lVar11 + 0x20) = 0;
    }
  }
  else {
    FlashAnimationLibrary__SetTextFieldText
              (*(char **)(pEVar6 + 0x78),local_58,*(uint64_t *)(plVar3[1] + 0x38));
    lVar11 = FlashAnimationLibrary__GetTextField
                       (*(FlashAnimationLibrary **)(pEVar6 + 0x78),local_58);
    if (lVar11 != 0) {
      *(uint32_t *)(lVar11 + 0x20) = 1;
    }
  }
  Sprint("labeltext%i",local_58,9);
  if ((int)plVar3[2] < 9) {
    lVar11 = FlashAnimationLibrary__GetTextField
                       (*(FlashAnimationLibrary **)(pEVar6 + 0x78),local_58);
    if (lVar11 != 0) {
      *(uint32_t *)(lVar11 + 0x20) = 0;
    }
  }
  else {
    FlashAnimationLibrary__SetTextFieldText
              (*(char **)(pEVar6 + 0x78),local_58,*(uint64_t *)(plVar3[1] + 0x40));
    lVar11 = FlashAnimationLibrary__GetTextField
                       (*(FlashAnimationLibrary **)(pEVar6 + 0x78),local_58);
    if (lVar11 != 0) {
      *(uint32_t *)(lVar11 + 0x20) = 1;
    }
  }
  Sprint("labeltext%i",local_58,10);
  if ((int)plVar3[2] < 10) {
    lVar11 = FlashAnimationLibrary__GetTextField
                       (*(FlashAnimationLibrary **)(pEVar6 + 0x78),local_58);
    if (lVar11 != 0) {
      *(uint32_t *)(lVar11 + 0x20) = 0;
    }
  }
  else {
    FlashAnimationLibrary__SetTextFieldText
              (*(char **)(pEVar6 + 0x78),local_58,*(uint64_t *)(plVar3[1] + 0x48));
    lVar11 = FlashAnimationLibrary__GetTextField
                       (*(FlashAnimationLibrary **)(pEVar6 + 0x78),local_58);
    if (lVar11 != 0) {
      *(uint32_t *)(lVar11 + 0x20) = 1;
    }
  }
  if (*plVar3 == 0) {
    FlashAnimationLibrary__SetTextFieldText(*(char **)(pEVar6 + 0x78),"formlabel",pEVar6 + 0x88);
  }
  else {
    FlashAnimationLibrary__SetTextFieldText(*(char **)(pEVar6 + 0x78),"formlabel");
  }
  lVar11 = *(long *)(pEVar6 + 0x28);
  if (lVar11 != 0) {
    if ((int)plVar3[4] < 1) {
      *(uint32_t *)(*(long *)(lVar11 + 0x50) + 0x48) = 0;
    }
    else {
      pfVar5 = (float *)plVar3[3];
      if (*(char *)(pfVar5 + 1) == '\x01') {
        fVar1 = *pfVar5;
        pwVar12 = (wchar_t *)
                  FlashEditableTextField__GetUITextField
                            (*(FlashEditableTextField **)(lVar11 + 0x50));
        UITextField__SetDynamicText(pwVar12,(double)fVar1,&DAT_005c07c4 /* R:5.184804318001823e-44f */);
      }
      else {
        fVar1 = *pfVar5;
        pwVar12 = (wchar_t *)
                  FlashEditableTextField__GetUITextField
                            (*(FlashEditableTextField **)(lVar11 + 0x50));
        UITextField__SetDynamicText(pwVar12,&DAT_005c6660 /* R:5.184804318001823e-44f */,(ulong)(uint)fVar1);
      }
      *(uint32_t *)(*(long *)(*(long *)(pEVar6 + 0x28) + 0x50) + 0x48) = 1;
    }
  }
  lVar11 = *(long *)(pEVar6 + 0x30);
  if (lVar11 != 0) {
    if ((int)plVar3[4] < 2) {
      *(uint32_t *)(*(long *)(lVar11 + 0x50) + 0x48) = 0;
    }
    else {
      lVar4 = plVar3[3];
      if (*(char *)(lVar4 + 0xc) == '\x01') {
        fVar1 = *(float *)(lVar4 + 8);
        pwVar12 = (wchar_t *)
                  FlashEditableTextField__GetUITextField
                            (*(FlashEditableTextField **)(lVar11 + 0x50));
        UITextField__SetDynamicText(pwVar12,(double)fVar1,&DAT_005c07c4 /* R:5.184804318001823e-44f */);
      }
      else {
        uVar2 = *(uint *)(lVar4 + 8);
        pwVar12 = (wchar_t *)
                  FlashEditableTextField__GetUITextField
                            (*(FlashEditableTextField **)(lVar11 + 0x50));
        UITextField__SetDynamicText(pwVar12,&DAT_005c6660 /* R:5.184804318001823e-44f */,(ulong)uVar2);
      }
      *(uint32_t *)(*(long *)(*(long *)(pEVar6 + 0x30) + 0x50) + 0x48) = 1;
    }
  }
  lVar11 = *(long *)(pEVar6 + 0x38);
  if (lVar11 != 0) {
    if ((int)plVar3[4] < 3) {
      *(uint32_t *)(*(long *)(lVar11 + 0x50) + 0x48) = 0;
    }
    else {
      lVar4 = plVar3[3];
      if (*(char *)(lVar4 + 0x14) == '\x01') {
        fVar1 = *(float *)(lVar4 + 0x10);
        pwVar12 = (wchar_t *)
                  FlashEditableTextField__GetUITextField
                            (*(FlashEditableTextField **)(lVar11 + 0x50));
        UITextField__SetDynamicText(pwVar12,(double)fVar1,&DAT_005c07c4 /* R:5.184804318001823e-44f */);
      }
      else {
        uVar2 = *(uint *)(lVar4 + 0x10);
        pwVar12 = (wchar_t *)
                  FlashEditableTextField__GetUITextField
                            (*(FlashEditableTextField **)(lVar11 + 0x50));
        UITextField__SetDynamicText(pwVar12,&DAT_005c6660 /* R:5.184804318001823e-44f */,(ulong)uVar2);
      }
      *(uint32_t *)(*(long *)(*(long *)(pEVar6 + 0x38) + 0x50) + 0x48) = 1;
    }
  }
  lVar11 = *(long *)(pEVar6 + 0x40);
  if (lVar11 != 0) {
    if ((int)plVar3[4] < 4) {
      *(uint32_t *)(*(long *)(lVar11 + 0x50) + 0x48) = 0;
    }
    else {
      lVar4 = plVar3[3];
      if (*(char *)(lVar4 + 0x1c) == '\x01') {
        fVar1 = *(float *)(lVar4 + 0x18);
        pwVar12 = (wchar_t *)
                  FlashEditableTextField__GetUITextField
                            (*(FlashEditableTextField **)(lVar11 + 0x50));
        UITextField__SetDynamicText(pwVar12,(double)fVar1,&DAT_005c07c4 /* R:5.184804318001823e-44f */);
      }
      else {
        uVar2 = *(uint *)(lVar4 + 0x18);
        pwVar12 = (wchar_t *)
                  FlashEditableTextField__GetUITextField
                            (*(FlashEditableTextField **)(lVar11 + 0x50));
        UITextField__SetDynamicText(pwVar12,&DAT_005c6660 /* R:5.184804318001823e-44f */,(ulong)uVar2);
      }
      *(uint32_t *)(*(long *)(*(long *)(pEVar6 + 0x40) + 0x50) + 0x48) = 1;
    }
  }
  lVar11 = *(long *)(pEVar6 + 0x48);
  if (lVar11 != 0) {
    if ((int)plVar3[4] < 5) {
      *(uint32_t *)(*(long *)(lVar11 + 0x50) + 0x48) = 0;
    }
    else {
      lVar4 = plVar3[3];
      if (*(char *)(lVar4 + 0x24) == '\x01') {
        fVar1 = *(float *)(lVar4 + 0x20);
        pwVar12 = (wchar_t *)
                  FlashEditableTextField__GetUITextField
                            (*(FlashEditableTextField **)(lVar11 + 0x50));
        UITextField__SetDynamicText(pwVar12,(double)fVar1,&DAT_005c07c4 /* R:5.184804318001823e-44f */);
      }
      else {
        uVar2 = *(uint *)(lVar4 + 0x20);
        pwVar12 = (wchar_t *)
                  FlashEditableTextField__GetUITextField
                            (*(FlashEditableTextField **)(lVar11 + 0x50));
        UITextField__SetDynamicText(pwVar12,&DAT_005c6660 /* R:5.184804318001823e-44f */,(ulong)uVar2);
      }
      *(uint32_t *)(*(long *)(*(long *)(pEVar6 + 0x48) + 0x50) + 0x48) = 1;
    }
  }
  lVar11 = *(long *)(pEVar6 + 0x50);
  if (lVar11 != 0) {
    if ((int)plVar3[4] < 6) {
      *(uint32_t *)(*(long *)(lVar11 + 0x50) + 0x48) = 0;
    }
    else {
      lVar4 = plVar3[3];
      if (*(char *)(lVar4 + 0x2c) == '\x01') {
        fVar1 = *(float *)(lVar4 + 0x28);
        pwVar12 = (wchar_t *)
                  FlashEditableTextField__GetUITextField
                            (*(FlashEditableTextField **)(lVar11 + 0x50));
        UITextField__SetDynamicText(pwVar12,(double)fVar1,&DAT_005c07c4 /* R:5.184804318001823e-44f */);
      }
      else {
        uVar2 = *(uint *)(lVar4 + 0x28);
        pwVar12 = (wchar_t *)
                  FlashEditableTextField__GetUITextField
                            (*(FlashEditableTextField **)(lVar11 + 0x50));
        UITextField__SetDynamicText(pwVar12,&DAT_005c6660 /* R:5.184804318001823e-44f */,(ulong)uVar2);
      }
      *(uint32_t *)(*(long *)(*(long *)(pEVar6 + 0x50) + 0x50) + 0x48) = 1;
    }
  }
  lVar11 = *(long *)(pEVar6 + 0x58);
  if (lVar11 != 0) {
    if ((int)plVar3[4] < 7) {
      *(uint32_t *)(*(long *)(lVar11 + 0x50) + 0x48) = 0;
    }
    else {
      lVar4 = plVar3[3];
      if (*(char *)(lVar4 + 0x34) == '\x01') {
        fVar1 = *(float *)(lVar4 + 0x30);
        pwVar12 = (wchar_t *)
                  FlashEditableTextField__GetUITextField
                            (*(FlashEditableTextField **)(lVar11 + 0x50));
        UITextField__SetDynamicText(pwVar12,(double)fVar1,&DAT_005c07c4 /* R:5.184804318001823e-44f */);
      }
      else {
        uVar2 = *(uint *)(lVar4 + 0x30);
        pwVar12 = (wchar_t *)
                  FlashEditableTextField__GetUITextField
                            (*(FlashEditableTextField **)(lVar11 + 0x50));
        UITextField__SetDynamicText(pwVar12,&DAT_005c6660 /* R:5.184804318001823e-44f */,(ulong)uVar2);
      }
      *(uint32_t *)(*(long *)(*(long *)(pEVar6 + 0x58) + 0x50) + 0x48) = 1;
    }
  }
  lVar11 = *(long *)(pEVar6 + 0x60);
  if (lVar11 != 0) {
    if ((int)plVar3[4] < 8) {
      *(uint32_t *)(*(long *)(lVar11 + 0x50) + 0x48) = 0;
    }
    else {
      lVar4 = plVar3[3];
      if (*(char *)(lVar4 + 0x3c) == '\x01') {
        fVar1 = *(float *)(lVar4 + 0x38);
        pwVar12 = (wchar_t *)
                  FlashEditableTextField__GetUITextField
                            (*(FlashEditableTextField **)(lVar11 + 0x50));
        UITextField__SetDynamicText(pwVar12,(double)fVar1,&DAT_005c07c4 /* R:5.184804318001823e-44f */);
      }
      else {
        uVar2 = *(uint *)(lVar4 + 0x38);
        pwVar12 = (wchar_t *)
                  FlashEditableTextField__GetUITextField
                            (*(FlashEditableTextField **)(lVar11 + 0x50));
        UITextField__SetDynamicText(pwVar12,&DAT_005c6660 /* R:5.184804318001823e-44f */,(ulong)uVar2);
      }
      *(uint32_t *)(*(long *)(*(long *)(pEVar6 + 0x60) + 0x50) + 0x48) = 1;
    }
  }
  lVar11 = *(long *)(pEVar6 + 0x68);
  if (lVar11 != 0) {
    if ((int)plVar3[4] < 9) {
      *(uint32_t *)(*(long *)(lVar11 + 0x50) + 0x48) = 0;
    }
    else {
      lVar4 = plVar3[3];
      if (*(char *)(lVar4 + 0x44) == '\x01') {
        fVar1 = *(float *)(lVar4 + 0x40);
        pwVar12 = (wchar_t *)
                  FlashEditableTextField__GetUITextField
                            (*(FlashEditableTextField **)(lVar11 + 0x50));
        UITextField__SetDynamicText(pwVar12,(double)fVar1,&DAT_005c07c4 /* R:5.184804318001823e-44f */);
      }
      else {
        uVar2 = *(uint *)(lVar4 + 0x40);
        pwVar12 = (wchar_t *)
                  FlashEditableTextField__GetUITextField
                            (*(FlashEditableTextField **)(lVar11 + 0x50));
        UITextField__SetDynamicText(pwVar12,&DAT_005c6660 /* R:5.184804318001823e-44f */,(ulong)uVar2);
      }
      *(uint32_t *)(*(long *)(*(long *)(pEVar6 + 0x68) + 0x50) + 0x48) = 1;
    }
  }
  lVar11 = *(long *)(pEVar6 + 0x70);
  if (lVar11 != 0) {
    if ((int)plVar3[4] < 10) {
LAB_004a5219:
      *(uint32_t *)(*(long *)(lVar11 + 0x50) + 0x48) = 0;
      return;
    }
    lVar4 = plVar3[3];
    if (*(char *)(lVar4 + 0x4c) == '\x01') {
      fVar1 = *(float *)(lVar4 + 0x48);
      pwVar12 = (wchar_t *)
                FlashEditableTextField__GetUITextField(*(FlashEditableTextField **)(lVar11 + 0x50));
      UITextField__SetDynamicText(pwVar12,(double)fVar1,&DAT_005c07c4 /* R:5.184804318001823e-44f */);
    }
    else {
      uVar2 = *(uint *)(lVar4 + 0x48);
      pwVar12 = (wchar_t *)
                FlashEditableTextField__GetUITextField(*(FlashEditableTextField **)(lVar11 + 0x50));
      UITextField__SetDynamicText(pwVar12,&DAT_005c6660 /* R:5.184804318001823e-44f */,(ulong)uVar2);
    }
    *(uint32_t *)(*(long *)(*(long *)(pEVar6 + 0x70) + 0x50) + 0x48) = 1;
  }
  return;
}

/* ======================================================================
 * ShowObstacleAnimalProps__004a5ac0  (Ghidra `ShowObstacleAnimalProps` @ 004a5ac0)
 * Signature: uint8_t __stdcall ShowObstacleAnimalProps(tagButtonProps * arg1, void * arg2)
 * Calls: `ShowObstacleAnimalProps`
 * Called by: (none)
 */
/* ShowObstacleAnimalProps(tagButtonProps const*, void*) */

void ShowObstacleAnimalProps(tagButtonProps *arg1,void *arg2)

{
  if ((arg1 != (tagButtonProps *)0x0) && (*(int *)arg1 != 1)) {
    return;
  }
  ShowObstacleAnimalProps(arg1,arg2);
  return;
}

/* ======================================================================
 * ShowWayPointProperties  (Ghidra `ShowWayPointProperties` @ 004a6020)
 * Signature: uint8_t __stdcall ShowWayPointProperties(tagButtonProps * arg1, void * arg2)
 * Calls: `EditorForm__Activate`, `FlashEditableTextField__GetUITextField`
 * Called by: `SMBEditor__Activate`
 */
/* WARNING: Removing unreachable block (ram,0x004a60f2) */
/* ShowWayPointProperties(tagButtonProps const*, void*) */

void ShowWayPointProperties(tagButtonProps *arg1,void *arg2)

{
  float fVar1;
  float fVar2;
  long lVar3;
  EditorForm *pEVar4;
  wchar_t *pwVar5;
  
  if ((*(int *)(SuperMeatBoyEditor + 0xc0) == 3) &&
     ((arg1 == (tagButtonProps *)0x0 || (*(int *)arg1 == 1)))) {
    EditorForm__Activate(pEditorCameraPropsForm);
    pEVar4 = pEditorCameraPropsForm;
    lVar3 = *(long *)(SuperMeatBoyEditor + 0x108);
    if (lVar3 != 0) {
      fVar1 = *(float *)(lVar3 + 0x10);
      fVar2 = *(float *)(lVar3 + 8);
      if (*(long *)(pEditorCameraPropsForm + 0x28) != 0) {
        pwVar5 = (wchar_t *)
                 FlashEditableTextField__GetUITextField
                           (*(FlashEditableTextField **)
                             (*(long *)(pEditorCameraPropsForm + 0x28) + 0x50));
        UITextField__SetDynamicText(pwVar5,(double)fVar1,&DAT_005c07c4 /* R:5.184804318001823e-44f */);
        *(uint32_t *)(*(long *)(*(long *)(pEVar4 + 0x28) + 0x50) + 0x48) = 1;
      }
      if (*(long *)(pEVar4 + 0x30) != 0) {
        pwVar5 = (wchar_t *)
                 FlashEditableTextField__GetUITextField
                           (*(FlashEditableTextField **)(*(long *)(pEVar4 + 0x30) + 0x50));
        UITextField__SetDynamicText(pwVar5,(double)fVar2,&DAT_005c07c4 /* R:5.184804318001823e-44f */);
        *(uint32_t *)(*(long *)(*(long *)(pEVar4 + 0x30) + 0x50) + 0x48) = 1;
      }
      if (*(long *)(pEVar4 + 0x38) != 0) {
        *(uint32_t *)(*(long *)(*(long *)(pEVar4 + 0x38) + 0x50) + 0x48) = 0;
      }
      if (*(long *)(pEVar4 + 0x40) != 0) {
        *(uint32_t *)(*(long *)(*(long *)(pEVar4 + 0x40) + 0x50) + 0x48) = 0;
      }
      if (*(long *)(pEVar4 + 0x48) != 0) {
        *(uint32_t *)(*(long *)(*(long *)(pEVar4 + 0x48) + 0x50) + 0x48) = 0;
      }
      if (*(long *)(pEVar4 + 0x50) != 0) {
        *(uint32_t *)(*(long *)(*(long *)(pEVar4 + 0x50) + 0x50) + 0x48) = 0;
      }
      if (*(long *)(pEVar4 + 0x58) != 0) {
        *(uint32_t *)(*(long *)(*(long *)(pEVar4 + 0x58) + 0x50) + 0x48) = 0;
      }
      if (*(long *)(pEVar4 + 0x60) != 0) {
        *(uint32_t *)(*(long *)(*(long *)(pEVar4 + 0x60) + 0x50) + 0x48) = 0;
      }
      if (*(long *)(pEVar4 + 0x68) != 0) {
        *(uint32_t *)(*(long *)(*(long *)(pEVar4 + 0x68) + 0x50) + 0x48) = 0;
      }
      if (*(long *)(pEVar4 + 0x70) != 0) {
        *(uint32_t *)(*(long *)(*(long *)(pEVar4 + 0x70) + 0x50) + 0x48) = 0;
      }
    }
  }
  return;
}

/* ======================================================================
 * SelectAnimal  (Ghidra `SelectAnimal` @ 004a67b0)
 * Signature: uint8_t __stdcall SelectAnimal(tagButtonProps * arg1, void * arg2)
 * Calls: `Camera__ScreenToWorld`, `EditorButton__IsMouseOverButton`, `IsFlashFormActive`, `IsPointWithinBoundingSquare`, `SMBEditorForms__IsFormActive`
 * Called by: `SMBEditor__SetToAnimalMode`
 */
/* SelectAnimal(tagButtonProps const*, void*) */

void SelectAnimal(tagButtonProps *arg1,void *arg2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  uint64_t *puVar6;
  BoundingSquare *pBVar7;
  uint uVar8;
  byte bVar9;
  BoundingSquare aBStack_f8 [80];
  uint32_t local_a8;
  uint32_t local_98;
  uint32_t local_58;
  uint32_t local_54;
  uint32_t local_50;
  uint32_t local_4c;
  uint32_t local_48;
  uint32_t local_44;
  uint32_t local_38;
  uint32_t local_34;
  
  bVar9 = 0;
  uVar1 = SMBEditorForms__IsFormActive();
  uVar2 = IsFlashFormActive();
  if (pEditorButtons._40_2_ != 0) {
    uVar8 = 0;
    do {
      iVar3 = EditorButton__IsMouseOverButton
                        (*(EditorButton **)(pEditorButtons._56_8_ + (ulong)(uVar8 & 0xffff) * 8));
      if (iVar3 == 1) {
        if ((uVar1 | uVar2 | 1) != 0) {
          return;
        }
        goto LAB_004a6850;
      }
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < (int)(uint)(ushort)pEditorButtons._40_2_);
  }
  FlashAnimationLibrary__SetTextFieldText(pEditorLib,"hotkey",&DAT_005ca3d2 /* R:u32=1931804704 */);
  if (uVar1 == 0 && uVar2 == 0) {
LAB_004a6850:
    if (*(int *)arg1 == 1) {
      local_38 = *(uint32_t *)(Mouse + 0xc);
      local_34 = *(uint32_t *)(Mouse + 0x10);
      local_58 = 0;
      local_54 = 0;
      local_50 = 0;
      local_4c = 0;
      Camera__ScreenToWorld
                (*(Camera **)(SuperMeatBoy + 0x38),(FPUVector *)&local_58,(Vector2 *)&local_38,0.0);
      local_48 = local_58;
      local_44 = local_54;
      lVar4 = SMBAnimals__GetClosestAnimal(*(Vector2 **)(GSuperMeatBoy__pLevelPalette + 0x41e8));
      pSelectedAnimal = 0;
      if (lVar4 != 0) {
        puVar6 = *(uint64_t **)(lVar4 + 0x48);
        pBVar7 = aBStack_f8;
        for (lVar5 = 0x12; lVar5 != 0; lVar5 = lVar5 + -1) {
          *(uint64_t *)pBVar7 = *puVar6;
          puVar6 = puVar6 + (ulong)bVar9 * -2 + 1;
          pBVar7 = (BoundingSquare *)((long)pBVar7 + ((ulong)bVar9 * -2 + 1) * 8);
        }
        *(uint32_t *)pBVar7 = *(uint32_t *)puVar6;
        local_a8 = *(uint32_t *)(lVar4 + 0xf8);
        local_98 = *(uint32_t *)(lVar4 + 0xfc);
        iVar3 = IsPointWithinBoundingSquare(aBStack_f8,(Vector2 *)&local_48);
        if (iVar3 == 1) {
          pSelectedAnimal = lVar4;
        }
      }
    }
  }
  return;
}

/* ======================================================================
 * SelectLight  (Ghidra `SelectLight` @ 004a6ab0)
 * Signature: uint8_t __stdcall SelectLight(tagButtonProps * arg1, void * arg2)
 * Calls: `Camera__ScreenToWorld`, `EditorButton__IsMouseOverButton`, `IsFlashFormActive`, `SMBEditorForms__IsFormActive`, `TileLevelLightMap__CreateLight`, `TileLevelLightMap__DestroyLight`, `TileLevelLightMap__GetLight`
 * Called by: `SMBEditor__SetToLightingMode`
 */
/* SelectLight(tagButtonProps const*, void*) */

void SelectLight(tagButtonProps *arg1,void *arg2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  Light *pLVar4;
  Light *pLVar5;
  uint64_t uVar6;
  uint uVar7;
  float fVar8;
  float local_ac;
  uint32_t local_a8;
  uint32_t local_a4;
  uint32_t local_a0;
  uint32_t local_9c;
  uint32_t local_98;
  uint32_t local_94;
  uint32_t local_90;
  uint32_t local_8c;
  uint32_t local_88;
  uint32_t local_84;
  uint32_t local_80;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  uint32_t local_68;
  uint32_t local_64;
  uint32_t local_60;
  uint32_t local_5c;
  Light *local_58 [2];
  uint32_t local_48;
  uint32_t local_44;
  uint32_t local_38;
  uint32_t local_34;
  
  uVar1 = SMBEditorForms__IsFormActive();
  uVar2 = IsFlashFormActive();
  if (pEditorButtons._40_2_ != 0) {
    uVar7 = 0;
    do {
      iVar3 = EditorButton__IsMouseOverButton
                        (*(EditorButton **)(pEditorButtons._56_8_ + (ulong)(uVar7 & 0xffff) * 8));
      if (iVar3 == 1) {
        if ((uVar1 | uVar2 | 1) != 0) {
          return;
        }
        goto LAB_004a6b50;
      }
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < (int)(uint)(ushort)pEditorButtons._40_2_);
  }
  FlashAnimationLibrary__SetTextFieldText(pEditorLib,"hotkey",&DAT_005ca3d2 /* R:u32=1931804704 */);
  if (uVar1 == 0 && uVar2 == 0) {
LAB_004a6b50:
    if (*(int *)arg1 == 1) {
      if (pSelectedLight == (Light *)0x0) {
        local_58[0] = *(Light **)(SuperMeatBoyEditor + 200);
        if (local_58[0] != (Light *)0x0) {
          TileLevelLightMap__DestroyLight(*(TileLevelLightMap **)(SuperMeatBoy + 0x390),local_58);
          *(Light **)(SuperMeatBoyEditor + 200) = local_58[0];
        }
      }
      else {
        local_58[0] = pSelectedLight;
      }
      pSelectedLight = (Light *)0x0;
      pLVar4 = (Light *)TileLevelLightMap__GetLight(*(TileLevelLightMap **)(SuperMeatBoy + 0x390),0)
      ;
      local_ac = DAT_005c17f0 /* R:100000000.0f */;
      pLVar5 = pSelectedLight;
      if ((*(float *)(pLVar4 + 0x28) != 0.0) && (pLVar4 != local_58[0])) {
        local_6c = 0.0;
        local_70 = 0.0;
        local_78 = 0.0;
        local_74 = 0.0;
        local_44 = *(uint32_t *)(Mouse + 0x10);
        local_48 = *(uint32_t *)(Mouse + 0xc);
        Camera__ScreenToWorld
                  (*(Camera **)(SuperMeatBoy + 0x38),(FPUVector *)&local_78,(Vector2 *)&local_48,
                   *(float *)(pLVar4 + 8));
        local_ac = *(float *)(pLVar4 + 8);
        if ((*(float *)(pLVar4 + 0x20) * *(float *)(pLVar4 + 0x20) <=
             (*(float *)(pLVar4 + 4) - local_74) * (*(float *)(pLVar4 + 4) - local_74) +
             (*(float *)pLVar4 - local_78) * (*(float *)pLVar4 - local_78) +
             (local_ac - local_70) * (local_ac - local_70) +
             (*(float *)(pLVar4 + 0xc) - local_6c) * (*(float *)(pLVar4 + 0xc) - local_6c)) ||
           (pLVar5 = pLVar4, DAT_005c17f0 /* R:100000000.0f */ <= local_ac)) {
          local_ac = DAT_005c17f0 /* R:100000000.0f */;
          pLVar5 = pSelectedLight;
        }
      }
      pSelectedLight = pLVar5;
      pLVar5 = (Light *)TileLevelLightMap__GetLight(*(TileLevelLightMap **)(SuperMeatBoy + 0x390),1)
      ;
      if ((*(float *)(pLVar5 + 0x28) != 0.0) && (pLVar5 != local_58[0])) {
        local_6c = 0.0;
        local_70 = 0.0;
        local_78 = 0.0;
        local_74 = 0.0;
        local_44 = *(uint32_t *)(Mouse + 0x10);
        local_48 = *(uint32_t *)(Mouse + 0xc);
        Camera__ScreenToWorld
                  (*(Camera **)(SuperMeatBoy + 0x38),(FPUVector *)&local_78,(Vector2 *)&local_48,
                   *(float *)(pLVar5 + 8));
        fVar8 = *(float *)(pLVar5 + 8);
        if (((*(float *)(pLVar5 + 4) - local_74) * (*(float *)(pLVar5 + 4) - local_74) +
             (*(float *)pLVar5 - local_78) * (*(float *)pLVar5 - local_78) +
             (fVar8 - local_70) * (fVar8 - local_70) +
             (*(float *)(pLVar5 + 0xc) - local_6c) * (*(float *)(pLVar5 + 0xc) - local_6c) <
             *(float *)(pLVar5 + 0x20) * *(float *)(pLVar5 + 0x20)) && (fVar8 < local_ac)) {
          pSelectedLight = pLVar5;
          local_ac = fVar8;
        }
      }
      pLVar5 = (Light *)TileLevelLightMap__GetLight(*(TileLevelLightMap **)(SuperMeatBoy + 0x390),2)
      ;
      if ((*(float *)(pLVar5 + 0x28) != 0.0) && (pLVar5 != local_58[0])) {
        local_6c = 0.0;
        local_70 = 0.0;
        local_78 = 0.0;
        local_74 = 0.0;
        local_44 = *(uint32_t *)(Mouse + 0x10);
        local_48 = *(uint32_t *)(Mouse + 0xc);
        Camera__ScreenToWorld
                  (*(Camera **)(SuperMeatBoy + 0x38),(FPUVector *)&local_78,(Vector2 *)&local_48,
                   *(float *)(pLVar5 + 8));
        fVar8 = *(float *)(pLVar5 + 8);
        if (((*(float *)(pLVar5 + 4) - local_74) * (*(float *)(pLVar5 + 4) - local_74) +
             (*(float *)pLVar5 - local_78) * (*(float *)pLVar5 - local_78) +
             (fVar8 - local_70) * (fVar8 - local_70) +
             (*(float *)(pLVar5 + 0xc) - local_6c) * (*(float *)(pLVar5 + 0xc) - local_6c) <
             *(float *)(pLVar5 + 0x20) * *(float *)(pLVar5 + 0x20)) && (fVar8 < local_ac)) {
          pSelectedLight = pLVar5;
          local_ac = fVar8;
        }
      }
      pLVar5 = (Light *)TileLevelLightMap__GetLight(*(TileLevelLightMap **)(SuperMeatBoy + 0x390),3)
      ;
      if ((*(float *)(pLVar5 + 0x28) != 0.0) && (pLVar5 != local_58[0])) {
        local_6c = 0.0;
        local_70 = 0.0;
        local_78 = 0.0;
        local_74 = 0.0;
        local_44 = *(uint32_t *)(Mouse + 0x10);
        local_48 = *(uint32_t *)(Mouse + 0xc);
        Camera__ScreenToWorld
                  (*(Camera **)(SuperMeatBoy + 0x38),(FPUVector *)&local_78,(Vector2 *)&local_48,
                   *(float *)(pLVar5 + 8));
        fVar8 = *(float *)(pLVar5 + 8);
        if (((*(float *)(pLVar5 + 4) - local_74) * (*(float *)(pLVar5 + 4) - local_74) +
             (*(float *)pLVar5 - local_78) * (*(float *)pLVar5 - local_78) +
             (fVar8 - local_70) * (fVar8 - local_70) +
             (*(float *)(pLVar5 + 0xc) - local_6c) * (*(float *)(pLVar5 + 0xc) - local_6c) <
             *(float *)(pLVar5 + 0x20) * *(float *)(pLVar5 + 0x20)) && (fVar8 < local_ac)) {
          pSelectedLight = pLVar5;
          local_ac = fVar8;
        }
      }
      pLVar5 = (Light *)TileLevelLightMap__GetLight(*(TileLevelLightMap **)(SuperMeatBoy + 0x390),4)
      ;
      if ((*(float *)(pLVar5 + 0x28) != 0.0) && (pLVar5 != local_58[0])) {
        local_6c = 0.0;
        local_70 = 0.0;
        local_78 = 0.0;
        local_74 = 0.0;
        local_44 = *(uint32_t *)(Mouse + 0x10);
        local_48 = *(uint32_t *)(Mouse + 0xc);
        Camera__ScreenToWorld
                  (*(Camera **)(SuperMeatBoy + 0x38),(FPUVector *)&local_78,(Vector2 *)&local_48,
                   *(float *)(pLVar5 + 8));
        fVar8 = *(float *)(pLVar5 + 8);
        if (((*(float *)(pLVar5 + 4) - local_74) * (*(float *)(pLVar5 + 4) - local_74) +
             (*(float *)pLVar5 - local_78) * (*(float *)pLVar5 - local_78) +
             (fVar8 - local_70) * (fVar8 - local_70) +
             (*(float *)(pLVar5 + 0xc) - local_6c) * (*(float *)(pLVar5 + 0xc) - local_6c) <
             *(float *)(pLVar5 + 0x20) * *(float *)(pLVar5 + 0x20)) && (fVar8 < local_ac)) {
          pSelectedLight = pLVar5;
          local_ac = fVar8;
        }
      }
      pLVar5 = (Light *)TileLevelLightMap__GetLight(*(TileLevelLightMap **)(SuperMeatBoy + 0x390),5)
      ;
      if ((*(float *)(pLVar5 + 0x28) != 0.0) && (pLVar5 != local_58[0])) {
        local_6c = 0.0;
        local_70 = 0.0;
        local_78 = 0.0;
        local_74 = 0.0;
        local_44 = *(uint32_t *)(Mouse + 0x10);
        local_48 = *(uint32_t *)(Mouse + 0xc);
        Camera__ScreenToWorld
                  (*(Camera **)(SuperMeatBoy + 0x38),(FPUVector *)&local_78,(Vector2 *)&local_48,
                   *(float *)(pLVar5 + 8));
        fVar8 = *(float *)(pLVar5 + 8);
        if (((*(float *)(pLVar5 + 4) - local_74) * (*(float *)(pLVar5 + 4) - local_74) +
             (*(float *)pLVar5 - local_78) * (*(float *)pLVar5 - local_78) +
             (fVar8 - local_70) * (fVar8 - local_70) +
             (*(float *)(pLVar5 + 0xc) - local_6c) * (*(float *)(pLVar5 + 0xc) - local_6c) <
             *(float *)(pLVar5 + 0x20) * *(float *)(pLVar5 + 0x20)) && (fVar8 < local_ac)) {
          pSelectedLight = pLVar5;
          local_ac = fVar8;
        }
      }
      pLVar5 = (Light *)TileLevelLightMap__GetLight(*(TileLevelLightMap **)(SuperMeatBoy + 0x390),6)
      ;
      if ((*(float *)(pLVar5 + 0x28) != 0.0) && (pLVar5 != local_58[0])) {
        local_6c = 0.0;
        local_70 = 0.0;
        local_78 = 0.0;
        local_74 = 0.0;
        local_44 = *(uint32_t *)(Mouse + 0x10);
        local_48 = *(uint32_t *)(Mouse + 0xc);
        Camera__ScreenToWorld
                  (*(Camera **)(SuperMeatBoy + 0x38),(FPUVector *)&local_78,(Vector2 *)&local_48,
                   *(float *)(pLVar5 + 8));
        fVar8 = *(float *)(pLVar5 + 8);
        if (((*(float *)(pLVar5 + 4) - local_74) * (*(float *)(pLVar5 + 4) - local_74) +
             (*(float *)pLVar5 - local_78) * (*(float *)pLVar5 - local_78) +
             (fVar8 - local_70) * (fVar8 - local_70) +
             (*(float *)(pLVar5 + 0xc) - local_6c) * (*(float *)(pLVar5 + 0xc) - local_6c) <
             *(float *)(pLVar5 + 0x20) * *(float *)(pLVar5 + 0x20)) && (fVar8 < local_ac)) {
          pSelectedLight = pLVar5;
          local_ac = fVar8;
        }
      }
      pLVar5 = (Light *)TileLevelLightMap__GetLight(*(TileLevelLightMap **)(SuperMeatBoy + 0x390),7)
      ;
      if ((*(float *)(pLVar5 + 0x28) != 0.0) && (pLVar5 != local_58[0])) {
        local_6c = 0.0;
        local_70 = 0.0;
        local_78 = 0.0;
        local_74 = 0.0;
        local_44 = *(uint32_t *)(Mouse + 0x10);
        local_48 = *(uint32_t *)(Mouse + 0xc);
        Camera__ScreenToWorld
                  (*(Camera **)(SuperMeatBoy + 0x38),(FPUVector *)&local_78,(Vector2 *)&local_48,
                   *(float *)(pLVar5 + 8));
        fVar8 = *(float *)(pLVar5 + 8);
        if (((*(float *)(pLVar5 + 4) - local_74) * (*(float *)(pLVar5 + 4) - local_74) +
             (*(float *)pLVar5 - local_78) * (*(float *)pLVar5 - local_78) +
             (fVar8 - local_70) * (fVar8 - local_70) +
             (*(float *)(pLVar5 + 0xc) - local_6c) * (*(float *)(pLVar5 + 0xc) - local_6c) <
             *(float *)(pLVar5 + 0x20) * *(float *)(pLVar5 + 0x20)) && (fVar8 < local_ac)) {
          pSelectedLight = pLVar5;
          local_ac = fVar8;
        }
      }
      pLVar5 = (Light *)TileLevelLightMap__GetLight(*(TileLevelLightMap **)(SuperMeatBoy + 0x390),8)
      ;
      if ((*(float *)(pLVar5 + 0x28) != 0.0) && (pLVar5 != local_58[0])) {
        local_6c = 0.0;
        local_70 = 0.0;
        local_78 = 0.0;
        local_74 = 0.0;
        local_44 = *(uint32_t *)(Mouse + 0x10);
        local_48 = *(uint32_t *)(Mouse + 0xc);
        Camera__ScreenToWorld
                  (*(Camera **)(SuperMeatBoy + 0x38),(FPUVector *)&local_78,(Vector2 *)&local_48,
                   *(float *)(pLVar5 + 8));
        fVar8 = *(float *)(pLVar5 + 8);
        if (((*(float *)(pLVar5 + 4) - local_74) * (*(float *)(pLVar5 + 4) - local_74) +
             (*(float *)pLVar5 - local_78) * (*(float *)pLVar5 - local_78) +
             (fVar8 - local_70) * (fVar8 - local_70) +
             (*(float *)(pLVar5 + 0xc) - local_6c) * (*(float *)(pLVar5 + 0xc) - local_6c) <
             *(float *)(pLVar5 + 0x20) * *(float *)(pLVar5 + 0x20)) && (fVar8 < local_ac)) {
          pSelectedLight = pLVar5;
          local_ac = fVar8;
        }
      }
      pLVar5 = (Light *)TileLevelLightMap__GetLight(*(TileLevelLightMap **)(SuperMeatBoy + 0x390),9)
      ;
      if ((*(float *)(pLVar5 + 0x28) != 0.0) && (pLVar5 != local_58[0])) {
        local_6c = 0.0;
        local_70 = 0.0;
        local_78 = 0.0;
        local_74 = 0.0;
        local_44 = *(uint32_t *)(Mouse + 0x10);
        local_48 = *(uint32_t *)(Mouse + 0xc);
        Camera__ScreenToWorld
                  (*(Camera **)(SuperMeatBoy + 0x38),(FPUVector *)&local_78,(Vector2 *)&local_48,
                   *(float *)(pLVar5 + 8));
        fVar8 = *(float *)(pLVar5 + 8) - local_70;
        if (((*(float *)(pLVar5 + 4) - local_74) * (*(float *)(pLVar5 + 4) - local_74) +
             (*(float *)pLVar5 - local_78) * (*(float *)pLVar5 - local_78) + fVar8 * fVar8 +
             (*(float *)(pLVar5 + 0xc) - local_6c) * (*(float *)(pLVar5 + 0xc) - local_6c) <
             *(float *)(pLVar5 + 0x20) * *(float *)(pLVar5 + 0x20)) &&
           (*(float *)(pLVar5 + 8) < local_ac)) {
          pSelectedLight = pLVar5;
        }
      }
      if ((pSelectedLight == (Light *)0x0) && (*(long *)(SuperMeatBoyEditor + 200) == 0)) {
        local_34 = *(uint32_t *)(Mouse + 0x10);
        local_5c = 0;
        local_38 = *(uint32_t *)(Mouse + 0xc);
        local_68 = 0;
        local_64 = 0;
        local_60 = 0;
        Camera__ScreenToWorld
                  (*(Camera **)(SuperMeatBoy + 0x38),(FPUVector *)&local_68,(Vector2 *)&local_38,0.0
                  );
        local_88 = 0x42c80000;
        local_98 = 0x3e800000;
        local_84 = 0;
        local_94 = 0x3e800000;
        local_90 = 0x3e800000;
        local_a8 = local_68;
        local_8c = 0;
        local_80 = 1;
        local_a4 = local_64;
        local_a0 = local_60;
        local_9c = local_5c;
        uVar6 = TileLevelLightMap__CreateLight
                          (*(TileLevelLightMap **)(SuperMeatBoy + 0x390),(Light *)&local_a8);
        *(uint64_t *)(SuperMeatBoyEditor + 200) = uVar6;
      }
    }
  }
  return;
}

/* ======================================================================
 * SelectTile  (Ghidra `SelectTile` @ 004a7ed0)
 * Signature: uint8_t __stdcall SelectTile(tagButtonProps * arg1, void * arg2)
 * Calls: `Camera__ScreenToWorld`, `EditorButton__IsMouseOverButton`, `IsFlashFormActive`, `SMBEditorForms__IsFormActive`, `TKeyboard__GetExclusiveState`, `TileLevel__GetGridBlock`, `TileLevel__GetGridIndex__0058dd90`, `TileLevel__GetGridPos`, `TileLevel__PlaceTile`, `Vector2__operator_assign` (+1 more)
 * Called by: `CancelPasteTileRendering`, `SMBEditor__SetToTileMode`
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SelectTile(tagButtonProps const*, void*) */

void SelectTile(tagButtonProps *arg1,void *arg2)

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  uint *puVar8;
  int iVar9;
  uint *puVar10;
  ulong uVar11;
  int iVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
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
  Vector2 local_c8 [16];
  uint32_t local_b8;
  uint32_t local_b4;
  uint32_t local_a8;
  uint32_t local_a4;
  uint32_t local_98;
  uint32_t local_94;
  uint32_t local_88;
  uint32_t local_84;
  Vector2 local_78 [16];
  uint local_68 [4];
  int local_58 [4];
  int local_48 [4];
  uint32_t local_38 [3];
  int local_2c [3];
  
  uVar4 = SMBEditorForms__IsFormActive();
  uVar5 = IsFlashFormActive();
  if (pEditorButtons._40_2_ != 0) {
    uVar13 = 0;
    do {
      iVar6 = EditorButton__IsMouseOverButton
                        (*(EditorButton **)(pEditorButtons._56_8_ + (ulong)(uVar13 & 0xffff) * 8));
      if (iVar6 == 1) {
        if ((uVar4 | uVar5 | 1) != 0) {
          return;
        }
        goto LAB_004a7f68;
      }
      uVar13 = uVar13 + 1;
    } while ((int)uVar13 < (int)(uint)(ushort)pEditorButtons._40_2_);
  }
  FlashAnimationLibrary__SetTextFieldText(pEditorLib,"hotkey",&DAT_005ca3d2 /* R:u32=1931804704 */);
  if (uVar4 != 0 || uVar5 != 0) {
    return;
  }
LAB_004a7f68:
  iVar6 = *(int *)arg1;
  if ((iVar6 == 1) || ((iVar6 == 2 && (200 < *(uint *)(arg1 + 4))))) {
    if ((*(int *)(Keyboard + 0x544) != 2) && (*(int *)(Keyboard + 0x334) != 2)) {
      if ((*(int *)(Keyboard + 0x310) != 2) && (*(int *)(Keyboard + 0x514) != 2)) {
        local_d8 = *(uint32_t *)(Mouse + 0xc);
        local_d4 = *(uint32_t *)(Mouse + 0x10);
        local_108 = 0;
        local_104 = 0;
        local_100 = 0;
        local_fc = 0;
        Camera__ScreenToWorld
                  (*(Camera **)(SuperMeatBoy + 0x38),(FPUVector *)&local_108,(Vector2 *)&local_d8,
                   0.0);
        TileLevel__GetGridIndex__0058dd90
                  (*(TileLevel **)(SuperMeatBoy + 0x40),(Vector2 *)&local_108,local_c8,local_48,
                   local_2c);
        local_38[0] = *SuperMeatBoyEditor;
        TileLevel__GetGridBlock
                  (*(TileLevel **)(SuperMeatBoy + 0x40),local_48[0],local_2c[0],
                   SuperMeatBoyEditor[0x34]);
        TileLevel__PlaceTile
                  (*(TileLevel **)(SuperMeatBoy + 0x40),local_48[0],local_2c[0],local_38,
                   SuperMeatBoyEditor[0x34]);
        TileLevel__GetGridPos(*(TileLevel **)(SuperMeatBoy + 0x40),local_48[0],local_2c[0],local_78)
        ;
        local_98 = 0x4cbebc20;
        local_94 = 0x4cbebc20;
        Vector2__operator_assign((Vector2 *)&vSelectionPoint1,(Vector2 *)&local_98);
        local_88 = 0x4cbebc20;
        local_84 = 0x4cbebc20;
        Vector2__operator_assign((Vector2 *)&vSelectionPoint2,(Vector2 *)&local_88);
        memset(pSelectionIDX,0,(long)iNumIDX << 2);
        memset(pCurrSelectionIDX,0,(long)iNumIDX << 2);
        return;
      }
LAB_004a7f9b:
      if ((*(int *)(Keyboard + 0x310) != 2) && (*(int *)(Keyboard + 0x514) != 2)) {
        return;
      }
    }
LAB_004a7fb0:
    if (iVar6 == 1) {
      local_b8 = *(uint32_t *)(Mouse + 0xc);
      local_b4 = *(uint32_t *)(Mouse + 0x10);
      local_f8 = 0;
      local_f4 = 0;
      local_f0 = 0;
      local_ec = 0;
      Camera__ScreenToWorld
                (*(Camera **)(SuperMeatBoy + 0x38),(FPUVector *)&local_f8,(Vector2 *)&local_b8,0.0);
      vSelectionPoint1 = local_f8;
      DAT_0081a974 /* R:2.2958888052482446e-39f */ = local_f4;
      TileLevel__GetGridIndex__0058dd90
                (*(TileLevel **)(SuperMeatBoy + 0x40),(Vector2 *)&vSelectionPoint1,
                 (Vector2 *)&local_f8,(int *)local_68,local_58);
      memset(pCurrSelectionIDX,0,(long)iNumIDX << 2);
      iVar6 = TKeyboard__GetExclusiveState(Keyboard,0x6f);
      if ((((iVar6 != 2) && (iVar6 = TKeyboard__GetExclusiveState(Keyboard,0x43), iVar6 != 2)) &&
          (iVar6 = TKeyboard__GetExclusiveState(Keyboard,0x6b), iVar6 != 2)) &&
         (iVar6 = TKeyboard__GetExclusiveState(Keyboard), iVar6 != 2)) {
        memset(pSelectionIDX,0,(long)iNumIDX << 2);
      }
      iVar6 = TKeyboard__GetExclusiveState(Keyboard,0x6b);
      if ((iVar6 != 2) && (iVar6 = TKeyboard__GetExclusiveState(Keyboard,0x40), iVar6 != 2)) {
        fVar14 = (float)*(ushort *)(*(long *)(SuperMeatBoy + 0x40) + 0x38) * DAT_005be6e8 /* R:0.25f */;
        lVar7 = (long)fVar14;
        if ((float)lVar7 < fVar14) {
          lVar7 = lVar7 + 1;
        }
        puVar10 = (uint *)((((ulong)(long)(int)local_68[0] >> 2) + (long)((int)lVar7 * local_58[0]))
                           * 4 + (long)pCurrSelectionIDX);
        uVar4 = *puVar10;
        if ((uVar4 >> (local_68[0] & 0x1f) & 1) != 0) {
          return;
        }
        *puVar10 = 1 << ((byte)local_68[0] & 0x1f) | uVar4;
        return;
      }
      fVar14 = (float)*(ushort *)(*(long *)(SuperMeatBoy + 0x40) + 0x38) * DAT_005be6e8 /* R:0.25f */;
      lVar7 = (long)fVar14;
      if ((float)lVar7 < fVar14) {
        lVar7 = lVar7 + 1;
      }
      puVar10 = (uint *)((long)pSelectionIDX +
                        (((ulong)(long)(int)local_68[0] >> 2) + (long)((int)lVar7 * local_58[0])) *
                        4);
      bVar2 = (byte)local_68[0] & 0x1f;
      *puVar10 = *puVar10 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
      return;
    }
  }
  else if (*(int *)(Keyboard + 0x544) != 2) {
    if (*(int *)(Keyboard + 0x334) != 2) goto LAB_004a7f9b;
    goto LAB_004a7fb0;
  }
  if (iVar6 != 2) {
    if (iVar6 != 3) {
      return;
    }
    if (0 < iNumIDX) {
      lVar7 = 0;
      iVar6 = 0;
      do {
        puVar8 = (uint *)(lVar7 + (long)pSelectionIDX);
        iVar6 = iVar6 + 1;
        puVar10 = (uint *)((long)pCurrSelectionIDX + lVar7);
        lVar7 = lVar7 + 4;
        *puVar8 = *puVar8 | *puVar10;
      } while (iVar6 < iNumIDX);
    }
    memset(pCurrSelectionIDX,0,(long)iNumIDX << 2);
    return;
  }
  local_a8 = *(uint32_t *)(Mouse + 0xc);
  local_a4 = *(uint32_t *)(Mouse + 0x10);
  local_e8 = 0;
  local_e4 = 0;
  local_e0 = 0;
  local_dc = 0;
  Camera__ScreenToWorld
            (*(Camera **)(SuperMeatBoy + 0x38),(FPUVector *)&local_e8,(Vector2 *)&local_a8,0.0);
  vSelectionPoint2 = local_e8;
  _DAT_0081a97c /* R:0.0f */ = local_e4;
  memset(pCurrSelectionIDX,0,(long)iNumIDX << 2);
  iVar6 = TKeyboard__GetExclusiveState(Keyboard,0x6f);
  if (((iVar6 != 2) && (iVar6 = TKeyboard__GetExclusiveState(Keyboard,0x43), iVar6 != 2)) &&
     ((iVar6 = TKeyboard__GetExclusiveState(Keyboard,0x6b), iVar6 != 2 &&
      (iVar6 = TKeyboard__GetExclusiveState(Keyboard), iVar6 != 2)))) {
    memset(pSelectionIDX,0,(long)iNumIDX << 2);
  }
  iVar6 = TKeyboard__GetExclusiveState(Keyboard,0x6b);
  if (iVar6 != 2) {
    bVar3 = true;
    iVar6 = TKeyboard__GetExclusiveState(Keyboard,0x40);
    if (iVar6 != 2) goto LAB_004a84b2;
  }
  bVar3 = false;
LAB_004a84b2:
  TileLevel__GetGridIndex__0058dd90
            (*(TileLevel **)(SuperMeatBoy + 0x40),(Vector2 *)&vSelectionPoint1,(Vector2 *)&local_e8,
             local_2c,(int *)local_68);
  TileLevel__GetGridIndex__0058dd90
            (*(TileLevel **)(SuperMeatBoy + 0x40),(Vector2 *)&vSelectionPoint2,(Vector2 *)&local_e8,
             local_58,local_48);
  fVar14 = DAT_005be6e8 /* R:0.25f */;
  iVar12 = ((local_2c[0] <= local_58[0]) - 1) + (uint)(local_2c[0] <= local_58[0]);
  iVar6 = (((int)local_68[0] <= local_48[0]) - 1) + (uint)((int)local_68[0] <= local_48[0]);
  uVar4 = local_48[0] + iVar6;
  if (local_2c[0] != local_58[0] + iVar12) {
    uVar11 = (ulong)local_2c[0];
    do {
      if (local_68[0] != uVar4) {
        uVar13 = 1 << ((byte)local_2c[0] & 0x1f);
        uVar5 = local_68[0];
        if (bVar3) {
          do {
            fVar15 = (float)*(ushort *)(*(long *)(SuperMeatBoy + 0x40) + 0x38) * fVar14;
            lVar7 = (long)fVar15;
            if ((float)lVar7 < fVar15) {
              lVar7 = lVar7 + 1;
            }
            puVar10 = (uint *)((long)pCurrSelectionIDX +
                              ((long)(int)((int)lVar7 * uVar5) + (uVar11 >> 2)) * 4);
            uVar1 = *puVar10;
            if ((uVar13 & uVar1) == 0) {
              *puVar10 = uVar1 | uVar13;
            }
            uVar5 = uVar5 + iVar6;
          } while (uVar5 != uVar4);
        }
        else {
          do {
            fVar15 = (float)*(ushort *)(*(long *)(SuperMeatBoy + 0x40) + 0x38) * fVar14;
            lVar7 = (long)fVar15;
            if ((float)lVar7 < fVar15) {
              lVar7 = lVar7 + 1;
            }
            iVar9 = (int)lVar7 * uVar5;
            uVar5 = uVar5 + iVar6;
            puVar10 = (uint *)((long)pSelectionIDX + ((long)iVar9 + (uVar11 >> 2)) * 4);
            *puVar10 = *puVar10 & ~uVar13;
          } while (uVar4 != uVar5);
        }
      }
      local_2c[0] = local_2c[0] + iVar12;
      uVar11 = uVar11 + (long)iVar12;
    } while (local_58[0] + iVar12 != local_2c[0]);
  }
  return;
}

/* ======================================================================
 * SetIDX  (Ghidra `SetIDX` @ 004a9560)
 * Signature: uint8_t __stdcall SetIDX(int arg1, int arg2, int * arg3, int arg4)
 * Calls: (none)
 * Called by: (none)
 */
/* SetIDX(int, int, int*, int) */

void SetIDX(int arg1,int arg2,int *arg3,int arg4)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  float fVar4;
  
  fVar4 = (float)*(ushort *)(*(long *)(SuperMeatBoy + 0x40) + 0x38) * DAT_005be6e8 /* R:0.25f */;
  lVar3 = (long)fVar4;
  if ((float)lVar3 < fVar4) {
    lVar3 = lVar3 + 1;
  }
  puVar1 = (uint *)(arg3 + ((ulong)(long)arg1 >> 2) + (long)(arg2 * (int)lVar3));
  uVar2 = 1 << ((byte)arg1 & 0x1f);
  if (arg4 != 1) {
    *puVar1 = *puVar1 & ~uVar2;
    return;
  }
  *puVar1 = *puVar1 | uVar2;
  return;
}

/* ======================================================================
 * SetEditorTextFields  (Ghidra `SetEditorTextFields` @ 004ab3d0)
 * Signature: uint8_t __stdcall SetEditorTextFields(FlashAnimationLibrary * arg1)
 * Calls: (none)
 * Called by: `SMBEditor__SMBEditor__004ad010`
 */
/* SetEditorTextFields(FlashAnimationLibrary*) */

void SetEditorTextFields(FlashAnimationLibrary *arg1)

{
  FlashAnimationLibrary__SetTextFieldText((char *)arg1,"layer1","1");
  FlashAnimationLibrary__SetTextFieldText((char *)arg1,"layer2","2");
  FlashAnimationLibrary__SetTextFieldText((char *)arg1,"layer3","3");
  FlashAnimationLibrary__SetTextFieldText((char *)arg1,"layer4","4");
  FlashAnimationLibrary__SetTextFieldText((char *)arg1,"layer5",&DAT_005c2f54 /* R:u32=1866989621 */);
  FlashAnimationLibrary__SetTextFieldText((char *)arg1,"layer6",&DAT_005c2f5e /* R:u32=1866989622 */);
  FlashAnimationLibrary__SetTextFieldText((char *)arg1,"layer7",&DAT_005c2f68 /* R:u32=1866989623 */);
  FlashAnimationLibrary__SetTextFieldText((char *)arg1,"layer8",&DAT_005c2f72 /* R:u32=1969422392 */);
  FlashAnimationLibrary__SetTextFieldText((char *)arg1,"layer9","9");
  FlashAnimationLibrary__SetTextFieldText((char *)arg1,"layer10","10");
  FlashAnimationLibrary__SetTextFieldText((char *)arg1,"layer11","11");
  FlashAnimationLibrary__SetTextFieldText((char *)arg1,"layer12","12");
  FlashAnimationLibrary__SetTextFieldText((char *)arg1,"layer13","13");
  FlashAnimationLibrary__SetTextFieldText((char *)arg1,"layer14","14");
  FlashAnimationLibrary__SetTextFieldText((char *)arg1,"layer","Layer");
  FlashAnimationLibrary__SetTextFieldText((char *)arg1,"newlevel",&DAT_005c2d3e /* R:1.0964765317174754e-38f */);
  FlashAnimationLibrary__SetTextFieldText((char *)arg1,"loadlevel",&DAT_005c2d4b /* R:"Load" */);
  FlashAnimationLibrary__SetTextFieldText((char *)arg1,"save",&DAT_005c2d5a /* R:"Save" */);
  FlashAnimationLibrary__SetTextFieldText((char *)arg1,"props","Props");
  FlashAnimationLibrary__SetTextFieldText((char *)arg1,"properties","Properties");
  FlashAnimationLibrary__SetTextFieldText((char *)arg1,"paralax","Paralax");
  FlashAnimationLibrary__SetTextFieldText((char *)arg1,"tiles","Tiles");
  FlashAnimationLibrary__SetTextFieldText((char *)arg1,"upload","Upload");
  FlashAnimationLibrary__SetTextFieldText((char *)arg1,"objects","Objects");
  FlashAnimationLibrary__SetTextFieldText((char *)arg1,"lights","Lights");
  FlashAnimationLibrary__SetTextFieldText((char *)arg1,"layercolor","Layer Color");
  FlashAnimationLibrary__SetTextFieldText((char *)arg1,"waypoints","Waypoints");
  FlashAnimationLibrary__SetTextFieldText((char *)arg1,"camera","Camera");
  FlashAnimationLibrary__SetTextFieldText((char *)arg1,"aniprops","Ani.Props");
  FlashAnimationLibrary__SetTextFieldText((char *)arg1,"animals","Animals");
  FlashAnimationLibrary__SetTextFieldText((char *)arg1,"question",&DAT_005c741f /* R:u32=1952645183 */);
  return;
}

/* ======================================================================
 * SetGridCoordsLabel  (Ghidra `SetGridCoordsLabel` @ 004b2bd0)
 * Signature: uint8_t __stdcall SetGridCoordsLabel(Vector2 * arg1)
 * Calls: `TileLevel__GetGridIndex__0058dd90`
 * Called by: (none)
 */
/* SetGridCoordsLabel(Vector2 const*) */

void SetGridCoordsLabel(Vector2 *arg1)

{
  uint32_t local_28;
  uint32_t local_24;
  Vector2 local_18 [8];
  uint local_10;
  uint local_c [3];
  
  local_28 = *(uint32_t *)arg1;
  local_24 = *(uint32_t *)(arg1 + 4);
  TileLevel__GetGridIndex__0058dd90
            (*(TileLevel **)(SuperMeatBoy + 0x40),(Vector2 *)&local_28,local_18,(int *)&local_10,
             (int *)local_c);
  FontEmitter__SetDynamicText
            (*(wchar_t **)(SMBEditor__pGridCoordsLabel + 0x40),L"Grid: (%i, %i)",(ulong)local_10,
             (ulong)local_c[0]);
  return;
}

/* ======================================================================
 * SetIndividualTextValue  (Ghidra `SetIndividualTextValue` @ 004b8aa0)
 * Signature: uint8_t __stdcall SetIndividualTextValue(int arg1, char * arg2, ...)
 * Calls: `Sprint`, `SprintArgList`
 * Called by: (none)
 */
/* EditorForm__SetIndividualTextValue(int, char const*, ...) */

void EditorForm__SetIndividualTextValue(int arg1,char *arg2,...)

{
  char in_AL;
  uint64_t in_RCX;
  uint64_t in_RDX;
  uint64_t in_R8;
  uint64_t in_R9;
  uint64_t in_XMM0_Qa;
  uint64_t in_XMM1_Qa;
  uint64_t in_XMM2_Qa;
  uint64_t in_XMM3_Qa;
  uint64_t in_XMM4_Qa;
  uint64_t in_XMM5_Qa;
  uint64_t in_XMM6_Qa;
  uint64_t in_XMM7_Qa;
  char acStack_108 [40];
  uint32_t local_e0;
  uint32_t local_dc;
  uint8_t *local_d8;
  uint8_t *local_d0;
  uint8_t local_c8 [24];
  uint64_t local_b0;
  uint64_t local_a8;
  uint64_t local_a0;
  uint64_t local_98;
  uint64_t local_88;
  uint64_t local_78;
  uint64_t local_68;
  uint64_t local_58;
  uint64_t local_48;
  uint64_t local_38;
  uint64_t local_28;
  
  if (in_AL != '\0') {
    local_98 = in_XMM0_Qa;
    local_88 = in_XMM1_Qa;
    local_78 = in_XMM2_Qa;
    local_68 = in_XMM3_Qa;
    local_58 = in_XMM4_Qa;
    local_48 = in_XMM5_Qa;
    local_38 = in_XMM6_Qa;
    local_28 = in_XMM7_Qa;
  }
  local_b0 = in_RCX;
  local_a8 = in_R8;
  local_a0 = in_R9;
  Sprint("labeltext%i",acStack_108,(int)arg2 + 1);
  local_d8 = &stack0x00000008;
  local_e0 = 0x18;
  local_dc = 0x30;
  local_d0 = local_c8;
  SprintArgList(in_RDX,strLargeString,&local_e0);
  FlashAnimationLibrary__SetTextFieldText(*(char **)(_param_1 + 0x78),acStack_108,strLargeString);
  return;
}

/* ======================================================================
 * SetWorldPad  (Ghidra `SetWorldPad` @ 004c8a30)
 * Signature: uint8_t __stdcall SetWorldPad(FlashLibraryInstance * arg1, tagChapterName arg2)
 * Calls: `FlashLibraryInstance__GotoAndStop`, `GSMBChapterData__IsChapterUnlocked`
 * Called by: (none)
 */
/* SetWorldPad(FlashLibraryInstance*, tagChapterName) */

void SetWorldPad(FlashLibraryInstance *arg1)

{
  int iVar1;
  
  if (arg1 == (FlashLibraryInstance *)0x0) {
    return;
  }
  iVar1 = GSMBChapterData__IsChapterUnlocked(SMBChapterData);
  if (iVar1 != 1) {
    FlashLibraryInstance__GotoAndStop(arg1,2);
    return;
  }
  FlashLibraryInstance__GotoAndStop(arg1,1);
  return;
}

/* ======================================================================
 * ShowAchievementUpsell  (Ghidra `ShowAchievementUpsell` @ 004d7cd0)
 * Signature: uint8_t __stdcall ShowAchievementUpsell(tagAwardType arg1)
 * Calls: `SMBUpsellMenu__Activate`, `SMBUpsellMenu__SetUpsellAchievementMode`
 * Called by: (none)
 */
/* GSMBMenu__ShowAchievementUpsell(tagAwardType) */

void GSMBMenu__ShowAchievementUpsell(long arg1)

{
  SMBUpsellMenu__SetUpsellAchievementMode((SMBUpsellMenu *)(arg1 + 0x1600));
  SMBUpsellMenu__Activate((SMBUpsellMenu *)(arg1 + 0x1600));
  return;
}

/* ======================================================================
 * SetupPortalInterfaceButtons  (Ghidra `SetupPortalInterfaceButtons` @ 00508460)
 * Signature: uint8_t __stdcall SetupPortalInterfaceButtons(FlashMovieClip * arg1, FlashAnimationLibrary * arg2, EditorButton * * arg3, EditorButton * * arg4, EditorButton * * arg5)
 * Calls: `AddEditorButton`
 * Called by: (none)
 */
/* SetupPortalInterfaceButtons(FlashMovieClip*, FlashAnimationLibrary*, EditorButton**,
   EditorButton**, EditorButton**) */

void SetupPortalInterfaceButtons
               (FlashMovieClip *arg1,FlashAnimationLibrary *arg2,EditorButton **arg3,
               EditorButton **arg4,EditorButton **arg5)

{
  EditorButton *pEVar1;
  
  pEVar1 = (EditorButton *)AddEditorButton(arg1,arg2,"featuredbutton",0,0);
  *arg3 = pEVar1;
  pEVar1 = (EditorButton *)AddEditorButton(arg1,arg2,"levelbutton",0,0);
  *arg4 = pEVar1;
  pEVar1 = (EditorButton *)AddEditorButton(arg1,arg2,"unknownbutton",0,0);
  *arg5 = pEVar1;
  return;
}

/* ======================================================================
 * SetAuthorText  (Ghidra `SetAuthorText` @ 0050a8e0)
 * Signature: uint8_t __stdcall SetAuthorText(FlashAnimationLibrary * arg1, int arg2, SQLQuery * arg3)
 * Calls: `SQLResultSet__GetString`, `Sprint`, `strlen`
 * Called by: `SMBLevelPortalInterface__FillList`
 */
/* SetAuthorText(FlashAnimationLibrary*, int, SQLQuery&) */

void SetAuthorText(FlashAnimationLibrary *arg1,int arg2,SQLQuery *arg3)

{
  char *pcVar1;
  size_t sVar2;
  char acStack_58 [32];
  char *local_38;
  uint32_t local_30;
  char *local_20 [2];
  
  local_20[0] = (char *)0x0;
  local_30 = 0xffffffff;
  local_38 = "author_name";
  Sprint("fauthor%i",acStack_58,arg2);
  SQLResultSet__GetString
            (*(SQLResultSet **)(arg3 + 0x10),(SQLFieldName *)&local_38,local_20,(uint *)0x0);
  pcVar1 = local_20[0];
  if (local_20[0] != (char *)0x0) {
    sVar2 = strlen(local_20[0]);
    if (0xe < sVar2) {
      pcVar1[0xd] = '\0';
    }
    FlashAnimationLibrary__SetTextFieldText((char *)arg1,acStack_58,pcVar1);
    if (local_20[0] != (char *)0x0) {
      operator_delete__(local_20[0]);
    }
  }
  return;
}

/* ======================================================================
 * SetPosition__00511b40  (Ghidra `SetPosition` @ 00511b40)
 * Signature: uint8_t __stdcall SetPosition(Vector2 * arg1)
 * Calls: (none)
 * Called by: (none)
 */
/* SmokeEmitter__SetPosition(Vector2 const&) */

void SmokeEmitter__SetPosition(Vector2 *arg1)

{
  return;
}

/* ======================================================================
 * ShowEffectProps  (Ghidra `ShowEffectProps` @ 00512790)
 * Signature: uint8_t __stdcall ShowEffectProps(tagButtonProps * arg1, void * arg2)
 * Calls: `UIForm__Activate`, `UIForm__DeActivate`
 * Called by: `GSuperMeatBoy__Initialize__00516f60`, `GSuperMeatBoy__Update__00516690`
 */
/* ShowEffectProps(tagButtonProps const*, void*) */

void ShowEffectProps(tagButtonProps *arg1,void *arg2)

{
  UIForm *this;
  
  this = SMBEditorForms__SMB_PLAYER_EFFECTS;
  if (*(int *)arg1 == 1) {
    if (*(int *)(SuperMeatBoy + 0x2c) == 0) {
      UIForm__Activate(SMBEditorForms__SMB_PLAYER_EFFECTS);
      *(uint32_t *)(SuperMeatBoy + 0x2c) = 7;
    }
    else if (*(int *)(SuperMeatBoy + 0x2c) == 7) {
      *(uint32_t *)(SuperMeatBoy + 0x2c) = 0;
      UIForm__DeActivate(this);
      return;
    }
  }
  return;
}

/* ======================================================================
 * ShowEditor  (Ghidra `ShowEditor` @ 00512940)
 * Signature: uint8_t __stdcall ShowEditor(tagButtonProps * arg1, void * arg2)
 * Calls: `SMBEditor__Activate`, `SMBEditor__DeActivate`, `SMBPalette__FindAnimatedObstacles`
 * Called by: `GSuperMeatBoy__Initialize__00516f60`, `SMBEditor__PromptLevelUploadForm`, `UploadPromptClose`
 */
/* ShowEditor(tagButtonProps const*, void*) */

void ShowEditor(tagButtonProps *arg1,void *arg2)

{
  SMBEditor *this;
  SMBPalette *this_00;
  
  this_00 = GSuperMeatBoy__pLevelPalette;
  this = SuperMeatBoyEditor;
  if ((arg1 == (tagButtonProps *)0x0) || (*(int *)arg1 == 1)) {
    if (*(int *)(SuperMeatBoy + 0x2c) == 1) {
      *(uint32_t *)(SuperMeatBoy + 0x2c) = 0;
      SMBPalette__FindAnimatedObstacles(this_00);
      SMBEditor__DeActivate();
      GLOBALSFXVOLUME = GLOBALDEFAULTSFXVOLUME;
    }
    else if (*(int *)(SuperMeatBoy + 0x2c) != 5) {
      *(uint32_t *)(SuperMeatBoy + 0x2c) = 1;
      SMBEditor__Activate(this);
      GLOBALSFXVOLUME = 0;
      return;
    }
  }
  return;
}

/* ======================================================================
 * SetTilePalette  (Ghidra `SetTilePalette` @ 00513020)
 * Signature: uint8_t __stdcall SetTilePalette(char * arg1)
 * Calls: `BaseResource__Release`, `GSuperMeatBoy__SetTilePalette`, `SMBPaletteBackgroundLoader__NullPalette`
 * Called by: `GSuperMeatBoy__DestroyGameResources`, `GSuperMeatBoy__SwitchGameMode`, `GSuperMeatBoy__Update__00516690`
 */
/* GSuperMeatBoy__SetTilePalette(char const*) [clone .constprop.80] */

void GSuperMeatBoy__SetTilePalette(char *arg1)

{
  if (pLevelPalette != (BaseResource *)0x0) {
    BaseResource__Release(pLevelPalette,0);
    pLevelPalette = (BaseResource *)0x0;
  }
  SMBPaletteBackgroundLoader__NullPalette((SMBPaletteBackgroundLoader *)(arg1 + 0x3b0));
  return;
}

/* ======================================================================
 * ShowInstructionsPage  (Ghidra `ShowInstructionsPage` @ 00513500)
 * Signature: uint8_t __stdcall ShowInstructionsPage(tagButtonProps * arg1, void * arg2)
 * Calls: `GSMBInstructions__ShowPage`, `Joystick__AddButtonCallback`, `TKeyboard__AddKeyCallback`, `TPlayer__GetJoystick`
 * Called by: `GSuperMeatBoy__RestoreInstructionsControls`, `SMBLevelFinished`
 */
/* ShowInstructionsPage(tagButtonProps const*, void*) */

void ShowInstructionsPage(tagButtonProps *arg1,void *arg2)

{
  Joystick *pJVar1;
  
  if ((arg1 != (tagButtonProps *)0x0) && (*(int *)arg1 != 1)) {
    return;
  }
  GSMBInstructions__ShowPage(SMBInstructions);
  if (Keyboard != (TKeyboard *)0x0) {
    TKeyboard__AddKeyCallback(Keyboard,0x1b,0,0);
  }
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddButtonCallback(pJVar1,1,0,0);
  return;
}

/* ======================================================================
 * SafeMarkLayerVisible  (Ghidra `SafeMarkLayerVisible` @ 00514c80)
 * Signature: uint8_t __stdcall SafeMarkLayerVisible(RenderLayer * arg1, int arg2)
 * Calls: (none)
 * Called by: (none)
 */
/* SafeMarkLayerVisible(RenderLayer*, int) */

void SafeMarkLayerVisible(RenderLayer *arg1,int arg2)

{
  if (arg1 != (RenderLayer *)0x0) {
    *(int *)(arg1 + 0x414) = arg2;
  }
  return;
}

/* ======================================================================
 * ShowMonitorMessage  (Ghidra `ShowMonitorMessage` @ 00517a20)
 * Signature: uint8_t __stdcall ShowMonitorMessage(SMBMonitorMessage * arg1)
 * Calls: (none)
 * Called by: `FlyWrench__Reset`, `Machinarium__Reset`, `MeatBoyCharactor__Reset`, `Ogmo__Reset`, `Runman__Reset`
 */
/* ShowMonitorMessage(SMBMonitorMessage&) */

void ShowMonitorMessage(SMBMonitorMessage *arg1)

{
  return;
}

/* ======================================================================
 * SpecialPress__00518dc0  (Ghidra `SpecialPress` @ 00518dc0)
 * Signature: uint8_t __stdcall SpecialPress(tagButtonProps * arg1, void * arg2)
 * Calls: `FlashLibraryInstance__Reset`
 * Called by: (none)
 */
/* Tim__SpecialPress(tagButtonProps const*, void*) */

void Tim__SpecialPress(tagButtonProps *arg1,void *arg2)

{
  tagButtonProps tVar1;
  int iVar2;
  
  iVar2 = *(int *)arg2;
  if (iVar2 - 1U < 2) {
    arg1[0x7d8] = (tagButtonProps)((byte)arg1[0x7d8] | 0x40);
    iVar2 = *(int *)arg2;
    if (iVar2 == 1) {
      arg1[0x10e4] = (tagButtonProps)((byte)arg1[0x10e4] | 1);
      FlashLibraryInstance__Reset(*(FlashLibraryInstance **)(arg1 + 0xa98));
      *(uint32_t *)(arg1 + 0x10ec) = 0;
      tVar1 = (tagButtonProps)0x63;
      if ((tagButtonProps)((char)arg1[0x10e0] + -1) != (tagButtonProps)0xff) {
        tVar1 = (tagButtonProps)((char)arg1[0x10e0] + -1);
      }
      arg1[0x10e3] = tVar1;
      return;
    }
  }
  if (iVar2 != 3) {
    return;
  }
  arg1[0x7d8] = (tagButtonProps)((byte)arg1[0x7d8] & 0xbf);
  arg1[0x10e0] = (tagButtonProps)0x0;
  arg1[0x10e1] = (tagButtonProps)0x0;
  arg1[0x10e2] = (tagButtonProps)0x0;
  arg1[0x10e3] = (tagButtonProps)0x0;
  *(uint32_t *)(arg1 + 0xbc) = 0;
  *(uint *)(arg1 + 0x10e4) = *(uint *)(arg1 + 0x10e4) & 1;
  *(uint32_t *)(arg1 + 0xb8) = 0;
  arg1[0x10e4] = (tagButtonProps)0x0;
  *(uint32_t *)(arg1 + 0xf0) = 0;
  *(uint32_t *)(arg1 + 0xec) = 0;
  return;
}

/* ======================================================================
 * SpecialPress__005195c0  (Ghidra `SpecialPress` @ 005195c0)
 * Signature: uint8_t __stdcall SpecialPress(tagButtonProps * arg1, void * arg2)
 * Calls: `FlashLibraryInstance__Reset`
 * Called by: (none)
 */
/* VVVVVV__SpecialPress(tagButtonProps const*, void*) */

void VVVVVV__SpecialPress(tagButtonProps *arg1,void *arg2)

{
  uint uVar1;
  
  uVar1 = DAT_005be6f0 /* R:u32=2147483648 */;
  if ((*(int *)arg2 == 1) && (((byte)arg1[0x7d8] & 2) == 0)) {
    if (0.0 < *(float *)(arg1 + 0x8c4)) {
      *(uint32_t *)(arg1 + 0x8c4) = *(uint32_t *)(arg1 + 0xa94);
      *(uint32_t *)(arg1 + 0x8b0) = *(uint32_t *)(arg1 + 0xa98);
      *(uint32_t *)(arg1 + 0x8b4) = *(uint32_t *)(arg1 + 0xa9c);
      FlashLibraryInstance__Reset(*(FlashLibraryInstance **)(arg1 + 0xaa8));
      return;
    }
    *(uint *)(arg1 + 0x8c4) = *(uint *)(arg1 + 0xa94) ^ DAT_005be6f0 /* R:u32=2147483648 */;
    *(uint *)(arg1 + 0x8b0) = *(uint *)(arg1 + 0xa98) ^ uVar1;
    *(uint *)(arg1 + 0x8b4) = *(uint *)(arg1 + 0xa9c) ^ uVar1;
    FlashLibraryInstance__Reset(*(FlashLibraryInstance **)(arg1 + 0xaa0));
    return;
  }
  return;
}

/* ======================================================================
 * SetText  (Ghidra `SetText` @ 005762d0)
 * Signature: uint8_t __stdcall SetText(wchar_t * arg1, ...)
 * Calls: `FontEmitter__SetStaticText`, `SprintArgListW`
 * Called by: (none)
 */
/* FlashTextField__SetText(wchar_t const*, ...) */

void FlashTextField__SetText(wchar_t *arg1,...)

{
  char in_AL;
  uint64_t in_RCX;
  uint64_t in_RDX;
  long in_RSI;
  uint64_t in_R8;
  uint64_t in_R9;
  uint64_t in_XMM0_Qa;
  uint64_t in_XMM1_Qa;
  uint64_t in_XMM2_Qa;
  uint64_t in_XMM3_Qa;
  uint64_t in_XMM4_Qa;
  uint64_t in_XMM5_Qa;
  uint64_t in_XMM6_Qa;
  uint64_t in_XMM7_Qa;
  uint32_t local_d0;
  uint32_t local_cc;
  uint8_t *local_c8;
  uint8_t *local_c0;
  uint8_t local_b8 [16];
  uint64_t local_a8;
  uint64_t local_a0;
  uint64_t local_98;
  uint64_t local_90;
  uint64_t local_88;
  uint64_t local_78;
  uint64_t local_68;
  uint64_t local_58;
  uint64_t local_48;
  uint64_t local_38;
  uint64_t local_28;
  uint64_t local_18;
  
  if (in_AL != '\0') {
    local_88 = in_XMM0_Qa;
    local_78 = in_XMM1_Qa;
    local_68 = in_XMM2_Qa;
    local_58 = in_XMM3_Qa;
    local_48 = in_XMM4_Qa;
    local_38 = in_XMM5_Qa;
    local_28 = in_XMM6_Qa;
    local_18 = in_XMM7_Qa;
  }
  local_a8 = in_RDX;
  local_a0 = in_RCX;
  local_98 = in_R8;
  local_90 = in_R9;
  if (in_RSI != 0) {
    local_c8 = &stack0x00000008;
    local_d0 = 0x10;
    local_cc = 0x30;
    local_c0 = local_b8;
    SprintArgListW(in_RSI,strLargeStringW,&local_d0);
    FontEmitter__SetStaticText(*(FontEmitter **)(arg1 + 6),strLargeStringW);
    return;
  }
  FontEmitter__SetStaticText(*(FontEmitter **)(arg1 + 6),(wchar_t *)0x0);
  return;
}

/* ======================================================================
 * SetText__005763a0  (Ghidra `SetText` @ 005763a0)
 * Signature: uint8_t __stdcall SetText(char * arg1, ...)
 * Calls: `ConvertCHARtoWCHAR`, `FontEmitter__SetStaticText`, `SprintArgList`
 * Called by: (none)
 */
/* FlashTextField__SetText(char const*, ...) */

void FlashTextField__SetText(char *arg1,...)

{
  char in_AL;
  uint64_t in_RCX;
  uint64_t in_RDX;
  long in_RSI;
  uint64_t in_R8;
  uint64_t in_R9;
  uint64_t in_XMM0_Qa;
  uint64_t in_XMM1_Qa;
  uint64_t in_XMM2_Qa;
  uint64_t in_XMM3_Qa;
  uint64_t in_XMM4_Qa;
  uint64_t in_XMM5_Qa;
  uint64_t in_XMM6_Qa;
  uint64_t in_XMM7_Qa;
  uint32_t local_d0;
  uint32_t local_cc;
  uint8_t *local_c8;
  uint8_t *local_c0;
  uint8_t local_b8 [16];
  uint64_t local_a8;
  uint64_t local_a0;
  uint64_t local_98;
  uint64_t local_90;
  uint64_t local_88;
  uint64_t local_78;
  uint64_t local_68;
  uint64_t local_58;
  uint64_t local_48;
  uint64_t local_38;
  uint64_t local_28;
  uint64_t local_18;
  
  if (in_AL != '\0') {
    local_88 = in_XMM0_Qa;
    local_78 = in_XMM1_Qa;
    local_68 = in_XMM2_Qa;
    local_58 = in_XMM3_Qa;
    local_48 = in_XMM4_Qa;
    local_38 = in_XMM5_Qa;
    local_28 = in_XMM6_Qa;
    local_18 = in_XMM7_Qa;
  }
  local_a8 = in_RDX;
  local_a0 = in_RCX;
  local_98 = in_R8;
  local_90 = in_R9;
  if (in_RSI != 0) {
    local_c8 = &stack0x00000008;
    local_d0 = 0x10;
    local_cc = 0x30;
    local_c0 = local_b8;
    SprintArgList(in_RSI,strLargeString,&local_d0);
    ConvertCHARtoWCHAR(strLargeString,&strLargeStringW);
    FontEmitter__SetStaticText(*(FontEmitter **)(arg1 + 0x18),strLargeStringW);
    return;
  }
  FontEmitter__SetStaticText(*(FontEmitter **)(arg1 + 0x18),(wchar_t *)0x0);
  return;
}

/* ======================================================================
 * SetTextFieldText  (Ghidra `SetTextFieldText` @ 00576480)
 * Signature: uint8_t __stdcall SetTextFieldText(char * arg1, char * arg2, ...)
 * Calls: `SprintArgList`
 * Called by: (none)
 */
/* FlashAnimationLibrary__SetTextFieldText(char const*, char const*, ...) */

void FlashAnimationLibrary__SetTextFieldText(char *arg1,char *arg2,...)

{
  char in_AL;
  char *pcVar1;
  uint64_t in_RCX;
  long in_RDX;
  uint64_t in_R8;
  uint64_t in_R9;
  uint64_t in_XMM0_Qa;
  uint64_t in_XMM1_Qa;
  uint64_t in_XMM2_Qa;
  uint64_t in_XMM3_Qa;
  uint64_t in_XMM4_Qa;
  uint64_t in_XMM5_Qa;
  uint64_t in_XMM6_Qa;
  uint64_t in_XMM7_Qa;
  uint32_t local_e0;
  uint32_t local_dc;
  uint8_t *local_d8;
  uint8_t *local_d0;
  uint8_t local_c8 [24];
  uint64_t local_b0;
  uint64_t local_a8;
  uint64_t local_a0;
  uint64_t local_98;
  uint64_t local_88;
  uint64_t local_78;
  uint64_t local_68;
  uint64_t local_58;
  uint64_t local_48;
  uint64_t local_38;
  uint64_t local_28;
  
  if (in_AL != '\0') {
    local_98 = in_XMM0_Qa;
    local_88 = in_XMM1_Qa;
    local_78 = in_XMM2_Qa;
    local_68 = in_XMM3_Qa;
    local_58 = in_XMM4_Qa;
    local_48 = in_XMM5_Qa;
    local_38 = in_XMM6_Qa;
    local_28 = in_XMM7_Qa;
  }
  local_b0 = in_RCX;
  local_a8 = in_R8;
  local_a0 = in_R9;
  pcVar1 = (char *)GetTextField((FlashAnimationLibrary *)arg1,arg2);
  if ((pcVar1 != (char *)0x0) && (in_RDX != 0)) {
    local_d8 = &stack0x00000008;
    local_e0 = 0x18;
    local_dc = 0x30;
    local_d0 = local_c8;
    SprintArgList(in_RDX,strLargeString,&local_e0);
    FlashTextField__SetText(pcVar1,strLargeString);
    return;
  }
  return;
}

/* ======================================================================
 * SetText__00578560  (Ghidra `SetText` @ 00578560)
 * Signature: uint8_t __stdcall SetText(wchar_t * arg1, ...)
 * Calls: `SprintArgListW`, `UITextField__SetStaticText`
 * Called by: (none)
 */
/* FlashEditableTextField__SetText(wchar_t const*, ...) */

void FlashEditableTextField__SetText(wchar_t *arg1,...)

{
  char in_AL;
  uint64_t in_RCX;
  uint64_t in_RDX;
  long in_RSI;
  uint64_t in_R8;
  uint64_t in_R9;
  uint64_t in_XMM0_Qa;
  uint64_t in_XMM1_Qa;
  uint64_t in_XMM2_Qa;
  uint64_t in_XMM3_Qa;
  uint64_t in_XMM4_Qa;
  uint64_t in_XMM5_Qa;
  uint64_t in_XMM6_Qa;
  uint64_t in_XMM7_Qa;
  uint32_t local_d0;
  uint32_t local_cc;
  uint8_t *local_c8;
  uint8_t *local_c0;
  uint8_t local_b8 [16];
  uint64_t local_a8;
  uint64_t local_a0;
  uint64_t local_98;
  uint64_t local_90;
  uint64_t local_88;
  uint64_t local_78;
  uint64_t local_68;
  uint64_t local_58;
  uint64_t local_48;
  uint64_t local_38;
  uint64_t local_28;
  uint64_t local_18;
  
  if (in_AL != '\0') {
    local_88 = in_XMM0_Qa;
    local_78 = in_XMM1_Qa;
    local_68 = in_XMM2_Qa;
    local_58 = in_XMM3_Qa;
    local_48 = in_XMM4_Qa;
    local_38 = in_XMM5_Qa;
    local_28 = in_XMM6_Qa;
    local_18 = in_XMM7_Qa;
  }
  local_a8 = in_RDX;
  local_a0 = in_RCX;
  local_98 = in_R8;
  local_90 = in_R9;
  if (in_RSI != 0) {
    local_c8 = &stack0x00000008;
    local_d0 = 0x10;
    local_cc = 0x30;
    local_c0 = local_b8;
    SprintArgListW(in_RSI,strLargeStringW,&local_d0);
    UITextField__SetStaticText(*(UITextField **)(arg1 + 0x10),strLargeStringW);
    return;
  }
  UITextField__SetStaticText(*(UITextField **)(arg1 + 0x10),(wchar_t *)0x0);
  return;
}

/* ======================================================================
 * SetText__00578630  (Ghidra `SetText` @ 00578630)
 * Signature: uint8_t __stdcall SetText(char * arg1, ...)
 * Calls: `ConvertCHARtoWCHAR`, `SprintArgList`, `UITextField__SetStaticText`
 * Called by: (none)
 */
/* FlashEditableTextField__SetText(char const*, ...) */

void FlashEditableTextField__SetText(char *arg1,...)

{
  char in_AL;
  uint64_t in_RCX;
  uint64_t in_RDX;
  long in_RSI;
  uint64_t in_R8;
  uint64_t in_R9;
  uint64_t in_XMM0_Qa;
  uint64_t in_XMM1_Qa;
  uint64_t in_XMM2_Qa;
  uint64_t in_XMM3_Qa;
  uint64_t in_XMM4_Qa;
  uint64_t in_XMM5_Qa;
  uint64_t in_XMM6_Qa;
  uint64_t in_XMM7_Qa;
  uint32_t local_d0;
  uint32_t local_cc;
  uint8_t *local_c8;
  uint8_t *local_c0;
  uint8_t local_b8 [16];
  uint64_t local_a8;
  uint64_t local_a0;
  uint64_t local_98;
  uint64_t local_90;
  uint64_t local_88;
  uint64_t local_78;
  uint64_t local_68;
  uint64_t local_58;
  uint64_t local_48;
  uint64_t local_38;
  uint64_t local_28;
  uint64_t local_18;
  
  if (in_AL != '\0') {
    local_88 = in_XMM0_Qa;
    local_78 = in_XMM1_Qa;
    local_68 = in_XMM2_Qa;
    local_58 = in_XMM3_Qa;
    local_48 = in_XMM4_Qa;
    local_38 = in_XMM5_Qa;
    local_28 = in_XMM6_Qa;
    local_18 = in_XMM7_Qa;
  }
  local_a8 = in_RDX;
  local_a0 = in_RCX;
  local_98 = in_R8;
  local_90 = in_R9;
  if (in_RSI != 0) {
    local_c8 = &stack0x00000008;
    local_d0 = 0x10;
    local_cc = 0x30;
    local_c0 = local_b8;
    SprintArgList(in_RSI,strLargeString,&local_d0);
    ConvertCHARtoWCHAR(strLargeString,&strLargeStringW);
    UITextField__SetStaticText(*(UITextField **)(arg1 + 0x40),strLargeStringW);
    return;
  }
  UITextField__SetStaticText(*(UITextField **)(arg1 + 0x40),(wchar_t *)0x0);
  return;
}

/* ======================================================================
 * SetDynamicText  (Ghidra `SetDynamicText` @ 00586480)
 * Signature: uint8_t __stdcall SetDynamicText(wchar_t * arg1, ...)
 * Calls: `SprintArgListW`
 * Called by: (none)
 */
/* FontEmitter__SetDynamicText(wchar_t const*, ...) */

void FontEmitter__SetDynamicText(wchar_t *arg1,...)

{
  char in_AL;
  uint64_t in_RCX;
  uint64_t in_RDX;
  uint64_t in_RSI;
  uint64_t in_R8;
  uint64_t in_R9;
  uint64_t in_XMM0_Qa;
  uint64_t in_XMM1_Qa;
  uint64_t in_XMM2_Qa;
  uint64_t in_XMM3_Qa;
  uint64_t in_XMM4_Qa;
  uint64_t in_XMM5_Qa;
  uint64_t in_XMM6_Qa;
  uint64_t in_XMM7_Qa;
  uint32_t local_d0;
  uint32_t local_cc;
  uint8_t *local_c8;
  uint8_t *local_c0;
  uint8_t local_b8 [16];
  uint64_t local_a8;
  uint64_t local_a0;
  uint64_t local_98;
  uint64_t local_90;
  uint64_t local_88;
  uint64_t local_78;
  uint64_t local_68;
  uint64_t local_58;
  uint64_t local_48;
  uint64_t local_38;
  uint64_t local_28;
  uint64_t local_18;
  
  if (in_AL != '\0') {
    local_88 = in_XMM0_Qa;
    local_78 = in_XMM1_Qa;
    local_68 = in_XMM2_Qa;
    local_58 = in_XMM3_Qa;
    local_48 = in_XMM4_Qa;
    local_38 = in_XMM5_Qa;
    local_28 = in_XMM6_Qa;
    local_18 = in_XMM7_Qa;
  }
  local_c8 = &stack0x00000008;
  local_d0 = 0x10;
  local_cc = 0x30;
  local_c0 = local_b8;
  local_a8 = in_RDX;
  local_a0 = in_RCX;
  local_98 = in_R8;
  local_90 = in_R9;
  SprintArgListW(in_RSI,0,&local_d0);
  SetStaticText((FontEmitter *)arg1,strLargeStringW);
  return;
}

/* ======================================================================
 * SamplerRegisterToSource  (Ghidra `SamplerRegisterToSource` @ 00588070)
 * Signature: uint8_t SamplerRegisterToSource(void)
 * Calls: (none)
 * Called by: `FontEmitter__Render`, `GraphicsBenchmark`, `LightLayer__Render`, `RenderSetPiece`, `Render__00571c10`, `SMBEditor__Render`, `SMBPalette__RenderSetPieceStream__004da800`, `SMBPalette__RenderTileStream__004daeb0`, `SMBPalette__RenderTile__004daac0`, `Sprite__Render` (+2 more)
 */
int SamplerRegisterToSource(byte arg1)

{
  return arg1 + 5;
}

/* ======================================================================
 * SetPosition__0059adb0  (Ghidra `SetPosition` @ 0059adb0)
 * Signature: uint8_t __stdcall SetPosition(Vector2 * arg1)
 * Calls: (none)
 * Called by: (none)
 */
/* RibbonEmitter__SetPosition(Vector2 const&) */

void RibbonEmitter__SetPosition(Vector2 *arg1)

{
  return;
}

/* ======================================================================
 * SafeRegion  (Ghidra `SafeRegion` @ 0059bd30)
 * Signature: uint8_t __stdcall SafeRegion(float arg1, float arg2)
 * Calls: (none)
 * Called by: (none)
 */
/* GScreenMargins__SafeRegion(float, float) */

void GScreenMargins__SafeRegion(float arg1,float arg2)

{
  return;
}

/* ======================================================================
 * SetPiece_GetSetPieceIndex  (Ghidra `SetPiece_GetSetPieceIndex` @ 0059e210)
 * Signature: uint8_t __stdcall SetPiece_GetSetPieceIndex(TileLevel * arg1, TileLevelSetPiece * arg2)
 * Calls: `TileLevel__getLevelLayer`
 * Called by: (none)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SetPiece_GetSetPieceIndex(TileLevel*, TileLevelSetPiece*) */

int SetPiece_GetSetPieceIndex(TileLevel *arg1,TileLevelSetPiece *arg2)

{
  TileLevelSetPiece *pTVar1;
  long lVar2;
  int iVar3;
  uint64_t *puVar4;
  uint64_t local_48;
  uint64_t uStack_40;
  uint64_t local_38;
  uint64_t uStack_30;
  
  iVar3 = 0;
  puVar4 = &local_48;
  local_48 = _DAT_005dd450 /* R:4.203895392974451e-45f */;
  uStack_40 = _UNK_005dd458;
  local_38 = _DAT_005dd460 /* R:0.0f */;
  uStack_30 = _UNK_005dd468;
  do {
    lVar2 = TileLevel__getLevelLayer(arg1,*(uint32_t *)puVar4);
    for (pTVar1 = *(TileLevelSetPiece **)(lVar2 + 8); pTVar1 != (TileLevelSetPiece *)0x0;
        pTVar1 = *(TileLevelSetPiece **)(pTVar1 + 8)) {
      if (pTVar1 == arg2) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
    }
    puVar4 = (uint64_t *)((long)puVar4 + 4);
  } while (puVar4 != (uint64_t *)&stack0xffffffffffffffd8);
  return -1;
}

/* ======================================================================
 * SparkEmitterResourceDestroy  (Ghidra `SparkEmitterResourceDestroy` @ 0059f2f0)
 * Signature: uint8_t SparkEmitterResourceDestroy(void)
 * Calls: `BaseResource__Release`
 * Called by: `SparkEmitter__SparkEmitter`, `SparkEmitter__SparkEmitter__0059f5b0`
 */
void SparkEmitterResourceDestroy(long arg1)

{
  if (*(BaseResource **)(arg1 + 0x58) != (BaseResource *)0x0) {
    BaseResource__Release(*(BaseResource **)(arg1 + 0x58),0);
    *(uint64_t *)(arg1 + 0x58) = 0;
  }
  if (*(BaseResource **)(arg1 + 0x60) != (BaseResource *)0x0) {
    BaseResource__Release(*(BaseResource **)(arg1 + 0x60),0);
    *(uint64_t *)(arg1 + 0x60) = 0;
  }
  if (*(BaseResource **)(arg1 + 0x68) != (BaseResource *)0x0) {
    BaseResource__Release(*(BaseResource **)(arg1 + 0x68),0);
    *(uint64_t *)(arg1 + 0x68) = 0;
  }
  return;
}

/* ======================================================================
 * SparkEmitterResourceCreate  (Ghidra `SparkEmitterResourceCreate` @ 0059f340)
 * Signature: uint8_t SparkEmitterResourceCreate(void)
 * Calls: `VertexStream__VertexStream__005a6980`
 * Called by: `SparkEmitter__SparkEmitter`, `SparkEmitter__SparkEmitter__0059f5b0`
 */
void SparkEmitterResourceCreate(long arg1)

{
  uint64_t uVar1;
  VertexStream *pVVar2;
  long local_48;
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
  local_40 = 0xc;
  local_48 = (long)*(int *)(arg1 + 0x4c) * 0x18;
  uVar1 = VertexBuffer__Create((tagVertexBufferCreation *)&local_48);
  *(uint64_t *)(arg1 + 0x58) = uVar1;
  uVar1 = VertexBuffer__Create((tagVertexBufferCreation *)&local_48);
  *(uint64_t *)(arg1 + 0x60) = uVar1;
  pVVar2 = BaseResource__operator_new(0xa8,1);
                    /* try { // try from 0059f3db to 0059f3df has its CatchHandler @ 0059f3eb */
  VertexStream__VertexStream__005a6980
            (pVVar2,1,*(int *)(arg1 + 0x4c),*(int *)(arg1 + 0x4c) * 2,5,arg1 + 0x60,
             CGR__pPos2ColorDecl);
  *(VertexStream **)(arg1 + 0x68) = pVVar2;
  return;
}

/* ======================================================================
 * SetupUI  (Ghidra `SetupUI` @ 005a1ee0)
 * Signature: uint8_t SetupUI(void)
 * Calls: `CreateUIResources`, `DestroyUIResources`, `RenderLayer__RenderLayer__00597d50`, `TResourceCreator__AddResourceCreationFunction`, `TResourceCreator__AddResourceDestroyFunction`, `operator_new`
 * Called by: `TEngine__TEngine`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SetupUI() */

void SetupUI(void)

{
  RenderLayer *this;
  
  this = operator_new(0x418);
                    /* try { // try from 005a1ef5 to 005a1ef9 has its CatchHandler @ 005a1f37 */
  RenderLayer__RenderLayer__00597d50(this);
  __UILayer = this;
  RenderLayers__AddLayer(this);
  CreateUIResources((void *)0x0);
  TResourceCreator__AddResourceCreationFunction
            ((TResourceCreator *)ResourceCreator,CreateUIResources,(void *)0x0);
  TResourceCreator__AddResourceDestroyFunction
            ((TResourceCreator *)ResourceCreator,DestroyUIResources,(void *)0x0);
  return;
}

/* ======================================================================
 * ShutdownUI  (Ghidra `ShutdownUI` @ 005a2000)
 * Signature: uint8_t ShutdownUI(void)
 * Calls: `BaseResource__Release`, `CreateUIResources`, `DestroyUIResources`, `TResourceCreator__RemoveResourceCreationFunction`, `TResourceCreator__RemoveResourceDestroyFunction`
 * Called by: `TEngine__TEngine__00583e20`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ShutdownUI() */

void ShutdownUI(void)

{
  BaseResource__Release(_DEFAULT_UI_FONT,0);
  RenderLayers__RemoveLayer(__UILayer);
  if (__UILayer != (RenderLayer *)0x0) {
    (**(code **)(*(long *)__UILayer + 8))();
  }
  TResourceCreator__RemoveResourceCreationFunction
            ((TResourceCreator *)ResourceCreator,CreateUIResources,(void *)0x0);
  TResourceCreator__RemoveResourceDestroyFunction
            ((TResourceCreator *)ResourceCreator,DestroyUIResources,(void *)0x0);
  return;
}

/* ======================================================================
 * ShowUIMessageBox  (Ghidra `ShowUIMessageBox` @ 005a4550)
 * Signature: uint8_t ShowUIMessageBox(void)
 * Calls: `RenderLayer__AddObject`, `UIButton__UIButton__005a2560`, `UIForm__AddFormElement`, `UILabel__UILabel__005a5270`, `UILabel__setAlign`, `UILabel__setText`, `UIMessageBoxClose`, `UIMessageBoxClose2`, `Vector2__operator_assign`, `operator_new`
 * Called by: `EditorForm_LoadFormOk`, `SMBEditor__LoadLevel`, `SMBEditor__SaveLevel`
 */
void ShowUIMessageBox(wchar_t *arg1)

{
  long *plVar1;
  float fVar2;
  UIForm *pUVar3;
  RenderLayer *this;
  long lVar4;
  UIForm *pUVar5;
  UIForm *this_00;
  UILabel *this_01;
  UIButton *this_02;
  uint8_t *local_58;
  uint64_t local_50;
  uint8_t *local_48;
  uint8_t *local_38 [2];
  uint32_t local_28;
  uint32_t local_24;
  
  this_00 = operator_new(0xa8);
  *(uint8_t ***)this_00 = &PTR__UIMessageBox_005ddab0;
  *(uint64_t *)(this_00 + 8) = 0;
  *(uint64_t *)(this_00 + 0x10) = 0;
  *(uint64_t *)(this_00 + 0x18) = 0;
  *(uint32_t *)(this_00 + 0x20) = 0;
  *(uint32_t *)(this_00 + 0x24) = 0;
  *(uint32_t *)(this_00 + 0x28) = 0x3f800000;
  *(uint32_t *)(this_00 + 0x2c) = 0x3f800000;
  *(uint32_t *)(this_00 + 0x30) = 0;
  *(uint32_t *)(this_00 + 0x34) = 0;
  *(uint32_t *)(this_00 + 0x38) = 0;
  *(uint32_t *)(this_00 + 0x3c) = 0;
  *(uint32_t *)(this_00 + 0x40) = 0x3f800000;
  *(uint32_t *)(this_00 + 0x44) = 0x3f800000;
  *(uint8_t **)(this_00 + 0x48) = _DEFAULT_UIFORM_STYLE;
  *(uint64_t *)(this_00 + 0x50) = 0;
  *(uint64_t *)(this_00 + 0x58) = 0;
  *(uint64_t *)(this_00 + 0x60) = 0;
  *(uint64_t *)(this_00 + 0x68) = 0;
  *(uint32_t *)(this_00 + 0x8c) = 0;
  *(uint32_t *)(this_00 + 0x90) = 0;
  *(uint64_t *)(this_00 + 0x98) = 0;
  *(uint32_t *)(this_00 + 0x78) = 7;
  local_38[0] = _DEFAULT_UILABEL_STYLE;
                    /* try { // try from 005a4629 to 005a462d has its CatchHandler @ 005a47f8 */
  this_01 = operator_new(0x50);
                    /* try { // try from 005a4639 to 005a463d has its CatchHandler @ 005a4825 */
  UILabel__UILabel__005a5270(this_01,(UILabelCreation *)local_38);
                    /* try { // try from 005a4644 to 005a4652 has its CatchHandler @ 005a47f8 */
  UILabel__setText(this_01,arg1);
  UILabel__setAlign(this_01,0);
  local_58 = _DEFAULT_UILABEL_STYLE;
  local_50 = 0;
  local_48 = _DEFAULT_UIBUTTON_STYLE;
                    /* try { // try from 005a4672 to 005a4676 has its CatchHandler @ 005a4823 */
  this_02 = operator_new(0x70);
                    /* try { // try from 005a4680 to 005a4684 has its CatchHandler @ 005a4813 */
  UIButton__UIButton__005a2560(this_02,(UIButtonCreation *)&local_58);
                    /* try { // try from 005a468e to 005a47f2 has its CatchHandler @ 005a4823 */
  UILabel__setText(*(UILabel **)(this_02 + 0x50),L"OK");
  local_28 = 0;
  local_24 = 0xc2200000;
  Vector2__operator_assign((Vector2 *)(this_02 + 0x20),(Vector2 *)&local_28);
  *(code **)(this_02 + 0x40) = UIMessageBoxClose;
  UIForm__AddFormElement(this_00,(UIFormElement *)this_01);
  UIForm__AddFormElement(this_00,(UIFormElement *)this_02);
  lVar4 = Window;
  this = __UILayer;
  fVar2 = DAT_005c48a4 /* R:50.0f */;
  *(float *)(this_00 + 0x30) = DAT_005c48a4 /* R:50.0f */ / (float)*(ushort *)(Window + 8);
  *(float *)(this_00 + 0x34) = fVar2 / (float)*(ushort *)(lVar4 + 10);
  RenderLayer__AddObject(this,(RenderLayerObject *)this_00);
  pUVar3 = _CURRENT_EXCLUSIVE_FORM;
  pUVar5 = _CURRENT_EXCLUSIVE_FORM;
  if ((((byte)this_00[0x78] & 8) != 0) &&
     (pUVar5 = this_00, _CURRENT_EXCLUSIVE_FORM != (UIForm *)0x0)) {
    for (plVar1 = *(long **)(_CURRENT_EXCLUSIVE_FORM + 0x68); plVar1 != (long *)0x0;
        plVar1 = (long *)plVar1[2]) {
      (**(code **)(*plVar1 + 0x48))(plVar1);
    }
    if ((*(int *)(pUVar3 + 0x90) == 1) && (*(code **)(pUVar3 + 0x60) != (code *)0x0)) {
      (**(code **)(pUVar3 + 0x60))(pUVar3);
    }
    *(uint32_t *)(pUVar3 + 0x90) = 0;
    *(uint64_t *)(pUVar3 + 0x98) = 0;
  }
  _CURRENT_EXCLUSIVE_FORM = pUVar5;
  for (plVar1 = *(long **)(this_00 + 0x68); plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x40))(plVar1);
  }
  if (*(int *)(this_00 + 0x90) == 0) {
    if (*(code **)(this_00 + 0x58) != (code *)0x0) {
      (**(code **)(this_00 + 0x58))(this_00);
    }
    *(uint32_t *)(this_00 + 0xa0) = 0;
  }
  *(uint32_t *)(this_00 + 0x90) = 1;
  *(code **)(this_00 + 0x50) = UIMessageBoxClose2;
  iUIMessageBoxesActive = iUIMessageBoxesActive + 1;
  return;
}

/* ======================================================================
 * SetDynamicText__005a6240  (Ghidra `SetDynamicText` @ 005a6240)
 * Signature: uint8_t __stdcall SetDynamicText(wchar_t * arg1, ...)
 * Calls: `FontEmitter__SetStaticText`, `SprintArgListW`, `wcslen`
 * Called by: (none)
 */
/* UITextField__SetDynamicText(wchar_t const*, ...) */

void UITextField__SetDynamicText(wchar_t *arg1,...)

{
  wchar_t *pwVar1;
  char in_AL;
  uint64_t in_RCX;
  uint64_t in_RDX;
  uint64_t in_RSI;
  uint64_t in_R8;
  uint64_t in_R9;
  uint64_t in_XMM0_Qa;
  uint64_t in_XMM1_Qa;
  uint64_t in_XMM2_Qa;
  uint64_t in_XMM3_Qa;
  uint64_t in_XMM4_Qa;
  uint64_t in_XMM5_Qa;
  uint64_t in_XMM6_Qa;
  uint64_t in_XMM7_Qa;
  uint32_t local_e0;
  uint32_t local_dc;
  uint8_t *local_d8;
  uint8_t *local_d0;
  uint8_t local_c8 [16];
  uint64_t local_b8;
  uint64_t local_b0;
  uint64_t local_a8;
  uint64_t local_a0;
  uint64_t local_98;
  uint64_t local_88;
  uint64_t local_78;
  uint64_t local_68;
  uint64_t local_58;
  uint64_t local_48;
  uint64_t local_38;
  uint64_t local_28;
  
  if (in_AL != '\0') {
    local_98 = in_XMM0_Qa;
    local_88 = in_XMM1_Qa;
    local_78 = in_XMM2_Qa;
    local_68 = in_XMM3_Qa;
    local_58 = in_XMM4_Qa;
    local_48 = in_XMM5_Qa;
    local_38 = in_XMM6_Qa;
    local_28 = in_XMM7_Qa;
  }
  local_d8 = &stack0x00000008;
  local_e0 = 0x10;
  local_dc = 0x30;
  local_d0 = local_c8;
  local_b8 = in_RDX;
  local_b0 = in_RCX;
  local_a8 = in_R8;
  local_a0 = in_R9;
  SprintArgListW(in_RSI,0,&local_e0);
  pwVar1 = strLargeStringW;
  wcslen(strLargeStringW);
  std__wstring_assign(arg1 + 0x10,(ulong)pwVar1);
  FontEmitter__SetStaticText(*(FontEmitter **)(arg1 + 0x12),*(wchar_t **)(arg1 + 0x10));
  return;
}

/* ======================================================================
 * SQLDatabaseQueryProcessor  (Ghidra `SQLDatabaseQueryProcessor` @ 005b54e0)
 * Signature: uint8_t __stdcall SQLDatabaseQueryProcessor(void * arg1)
 * Calls: `CreateMessage`, `SQLDatabase__PopQueuedQuery`, `UserAlertCloseCurrent`, `free`, `mysql_errno`, `mysql_free_result`, `mysql_init`, `mysql_real_connect`, `mysql_real_query`, `mysql_select_db` (+4 more)
 * Called by: `SQLDatabase__Connect`
 */
/* SQLDatabaseQueryProcessor(void*) */

uint64_t SQLDatabaseQueryProcessor(void *arg1)

{
  long *plVar1;
  int iVar2;
  void *pvVar3;
  uint64_t uVar4;
  uint64_t *puVar5;
  long lVar6;
  uint32_t local_98 [2];
  wchar_t *local_90;
  wchar_t *local_88;
  uint8_t *local_80;
  uint64_t local_78;
  code *local_70;
  uint64_t local_68;
  uint64_t local_60;
  uint64_t local_58;
  uint64_t local_50;
  uint64_t local_48;
  uint64_t local_40;
  uint64_t local_38;
  uint64_t local_30;
  
  lVar6 = *(long *)arg1;
  if (lVar6 == 0) {
    lVar6 = mysql_init(0);
    *(long *)arg1 = lVar6;
    mysql_real_connect(lVar6,*(uint64_t *)((long)arg1 + 0x20),
                       *(uint64_t *)((long)arg1 + 0x28),*(uint64_t *)((long)arg1 + 0x30),0
                       ,0,0,0);
    if (lVar6 == 0) goto LAB_005b5538;
  }
  else {
    mysql_real_connect(lVar6,*(uint64_t *)((long)arg1 + 0x20),
                       *(uint64_t *)((long)arg1 + 0x28),*(uint64_t *)((long)arg1 + 0x30),0
                       ,0,0,0);
  }
  mysql_select_db(lVar6,*(uint64_t *)((long)arg1 + 0x38));
LAB_005b5538:
  do {
    iVar2 = *(int *)((long)arg1 + 0x10);
    while( true ) {
      if (iVar2 != 1) {
        *(uint32_t *)((long)arg1 + 0x18) = 1;
        return 0;
      }
      pvVar3 = (void *)SQLDatabase__PopQueuedQuery(arg1);
      if (pvVar3 == (void *)0x0) break;
      *(uint32_t *)((long)arg1 + 0x14) = 1;
      uVar4 = *(uint64_t *)arg1;
      iVar2 = mysql_real_query(uVar4,*(uint64_t *)((long)pvVar3 + 8),
                               *(uint32_t *)((long)pvVar3 + 0x18));
      if (iVar2 == 0) {
LAB_005b57f0:
        uVar4 = mysql_store_result(uVar4);
        puVar5 = operator_new(8);
        *(uint64_t **)((long)pvVar3 + 0x10) = puVar5;
        *puVar5 = uVar4;
        *(uint32_t *)((long)pvVar3 + 0x1c) = 2;
      }
      else {
        iVar2 = mysql_errno(uVar4);
        if ((iVar2 == 0x7dd) || (iVar2 == 0x7d6)) {
          lVar6 = *(long *)arg1;
          if (lVar6 == 0) {
            lVar6 = mysql_init(0);
            *(long *)arg1 = lVar6;
            mysql_real_connect(lVar6,*(uint64_t *)((long)arg1 + 0x20),
                               *(uint64_t *)((long)arg1 + 0x28),
                               *(uint64_t *)((long)arg1 + 0x30),0,0,0,0);
            if (lVar6 != 0) goto LAB_005b55c3;
          }
          else {
            mysql_real_connect(lVar6,*(uint64_t *)((long)arg1 + 0x20),
                               *(uint64_t *)((long)arg1 + 0x28),
                               *(uint64_t *)((long)arg1 + 0x30),0,0,0,0);
LAB_005b55c3:
            mysql_select_db(lVar6,*(uint64_t *)((long)arg1 + 0x38));
          }
          iVar2 = mysql_real_query(uVar4,*(uint64_t *)((long)pvVar3 + 8),
                                   *(uint32_t *)((long)pvVar3 + 0x18));
          if (iVar2 == 0) goto LAB_005b57f0;
          iVar2 = mysql_errno(uVar4);
          if ((iVar2 != 0x7dd) && (iVar2 != 0x7d6)) goto LAB_005b574f;
          lVar6 = *(long *)arg1;
          if (lVar6 == 0) {
            lVar6 = mysql_init(0);
            *(long *)arg1 = lVar6;
            mysql_real_connect(lVar6,*(uint64_t *)((long)arg1 + 0x20),
                               *(uint64_t *)((long)arg1 + 0x28),
                               *(uint64_t *)((long)arg1 + 0x30),0,0,0,0);
            if (lVar6 != 0) goto LAB_005b5630;
          }
          else {
            mysql_real_connect(lVar6,*(uint64_t *)((long)arg1 + 0x20),
                               *(uint64_t *)((long)arg1 + 0x28),
                               *(uint64_t *)((long)arg1 + 0x30),0,0,0,0);
LAB_005b5630:
            mysql_select_db(lVar6,*(uint64_t *)((long)arg1 + 0x38));
          }
          iVar2 = mysql_real_query(uVar4,*(uint64_t *)((long)pvVar3 + 8),
                                   *(uint32_t *)((long)pvVar3 + 0x18));
          if (iVar2 == 0) goto LAB_005b57f0;
          iVar2 = mysql_errno(uVar4);
          if ((iVar2 != 0x7dd) && (iVar2 != 0x7d6)) goto LAB_005b574f;
          lVar6 = *(long *)arg1;
          if (lVar6 == 0) {
            lVar6 = mysql_init(0);
            *(long *)arg1 = lVar6;
            mysql_real_connect(lVar6,*(uint64_t *)((long)arg1 + 0x20),
                               *(uint64_t *)((long)arg1 + 0x28),
                               *(uint64_t *)((long)arg1 + 0x30),0,0,0,0);
            if (lVar6 != 0) goto LAB_005b569d;
          }
          else {
            mysql_real_connect(lVar6,*(uint64_t *)((long)arg1 + 0x20),
                               *(uint64_t *)((long)arg1 + 0x28),
                               *(uint64_t *)((long)arg1 + 0x30),0,0,0,0);
LAB_005b569d:
            mysql_select_db(lVar6,*(uint64_t *)((long)arg1 + 0x38));
          }
          iVar2 = mysql_real_query(uVar4,*(uint64_t *)((long)pvVar3 + 8),
                                   *(uint32_t *)((long)pvVar3 + 0x18));
          if (iVar2 == 0) goto LAB_005b57f0;
          mysql_errno(uVar4);
          local_78 = 0;
          local_68 = 0;
          local_60 = 0;
          local_58 = 0;
          local_50 = 0;
          local_48 = 0;
          local_40 = 0;
          local_38 = 0;
          local_30 = 0;
          local_90 = L"SQL Server Error";
          local_88 = 
          L"A Connection to the SQL Server\ncould not be established after 3 retries\nPlease try to connect again later"
          ;
          local_98[0] = 0xe;
          local_80 = &DAT_005de598 /* R:1.1070257868166055e-43f */;
          local_70 = UserAlertCloseCurrent;
          CreateMessage(local_98);
        }
LAB_005b574f:
        *(uint32_t *)((long)pvVar3 + 0x1c) = 1;
      }
      free(*(void **)((long)pvVar3 + 8));
      *(uint64_t *)((long)pvVar3 + 8) = 0;
      if (*(short *)((long)pvVar3 + 0x22) != 1) goto LAB_005b5538;
      plVar1 = *(long **)((long)pvVar3 + 0x10);
      if (plVar1 != (long *)0x0) {
        if (*plVar1 != 0) {
          mysql_free_result();
        }
        operator_delete(plVar1);
      }
      *(uint64_t *)((long)pvVar3 + 0x10) = 0;
      operator_delete(pvVar3);
      iVar2 = *(int *)((long)arg1 + 0x10);
    }
    *(uint32_t *)((long)arg1 + 0x14) = 0;
    usleep(100000);
  } while( true );
}

/* ======================================================================
 * SetCurrentFinishFunction  (Ghidra `SetCurrentFinishFunction` @ 005b9810)
 * Signature: uint8_t SetCurrentFinishFunction(void)
 * Calls: (none)
 * Called by: (none)
 */
void SetCurrentFinishFunction(uint64_t arg1,uint64_t arg2)

{
  DAT_00824ba8 /* R:8.396019878848574e-39f */ = arg1;
  DAT_00824be0 /* R:7.763193492359487e-43f */ = arg2;
  return;
}

/* ======================================================================
 * SetCurrState  (Ghidra `SetCurrState` @ 005b9920)
 * Signature: uint8_t SetCurrState(void)
 * Calls: (none)
 * Called by: `SMBMessageRender`, `SMBMoveOn__MessageBoxRender`, `SMBUpsellMenu__MessageBoxRender`
 */
void SetCurrState(uint32_t arg1)

{
  DAT_00824be8 /* R:4.0283126953945516e-41f */ = arg1;
  return;
}

/* ======================================================================
 * ShowAchievementsUI  (Ghidra `ShowAchievementsUI` @ 005ba1e0)
 * Signature: uint8_t __stdcall ShowAchievementsUI(UserProfile * arg1)
 * Calls: (none)
 * Called by: (none)
 */
/* Achievements__ShowAchievementsUI(UserProfile*) */

void Achievements__ShowAchievementsUI(UserProfile *arg1)

{
  return;
}

/* ======================================================================
 * SetBroadcastString  (Ghidra `SetBroadcastString` @ 005ba260)
 * Signature: uint8_t __stdcall SetBroadcastString(BroadcastStringCreate * arg1)
 * Calls: (none)
 * Called by: (none)
 */
/* BroadcastString__SetBroadcastString(BroadcastStringCreate const*) */

void BroadcastString__SetBroadcastString(BroadcastStringCreate *arg1)

{
  return;
}

/* ======================================================================
 * SetBroadcastStringParam  (Ghidra `SetBroadcastStringParam` @ 005ba270)
 * Signature: uint8_t __stdcall SetBroadcastStringParam(BroadcastStringParam * arg1)
 * Calls: (none)
 * Called by: (none)
 */
/* BroadcastString__SetBroadcastStringParam(BroadcastStringParam const*) */

void BroadcastString__SetBroadcastStringParam(BroadcastStringParam *arg1)

{
  return;
}

/* ======================================================================
 * Run__005bae40  (Ghidra `Run` @ 005bae40)
 * Signature: uint8_t __thiscall Run(CCallResult<SteamLeaderBoards,LeaderboardScoreUploaded_t> * this, void * arg1, bool arg2, ulonglong arg3)
 * Calls: (none)
 * Called by: (none)
 */
/* CCallResult<SteamLeaderBoards, LeaderboardScoreUploaded_t__Run(void*, bool, unsigned long long)
    */

void __thiscall
CCallResult<SteamLeaderBoards,LeaderboardScoreUploaded_t__Run
          (CCallResult<SteamLeaderBoards,LeaderboardScoreUploaded_t> *this,void *arg1,
          bool arg2,ulonglong arg3)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if (*(ulonglong *)(this + 0x10) != arg3) {
    return;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(this + 0x20);
  *(uint64_t *)(this + 0x10) = 0;
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(this + 0x18) + *(long *)(this + 0x28)) + -1);
  }
                    /* WARNING: Could not recover jumptable at 0x005bae78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*(long *)(this + 0x18) + *(long *)(this + 0x28),arg1,arg2);
  return;
}

/* ======================================================================
 * Run__005bae80  (Ghidra `Run` @ 005bae80)
 * Signature: uint8_t __thiscall Run(CCallResult<SteamLeaderBoards,LeaderboardScoresDownloaded_t> * this, void * arg1, bool arg2, ulonglong arg3)
 * Calls: (none)
 * Called by: (none)
 */
/* CCallResult<SteamLeaderBoards, LeaderboardScoresDownloaded_t__Run(void*, bool, unsigned long
   long) */

void __thiscall
CCallResult<SteamLeaderBoards,LeaderboardScoresDownloaded_t__Run
          (CCallResult<SteamLeaderBoards,LeaderboardScoresDownloaded_t> *this,void *arg1,
          bool arg2,ulonglong arg3)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if (*(ulonglong *)(this + 0x10) != arg3) {
    return;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(this + 0x20);
  *(uint64_t *)(this + 0x10) = 0;
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(this + 0x18) + *(long *)(this + 0x28)) + -1);
  }
                    /* WARNING: Could not recover jumptable at 0x005baeb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*(long *)(this + 0x18) + *(long *)(this + 0x28),arg1,arg2);
  return;
}

/* ======================================================================
 * Run__005baec0  (Ghidra `Run` @ 005baec0)
 * Signature: uint8_t __thiscall Run(CCallResult<SteamLeaderBoards,LeaderboardFindResult_t> * this, void * arg1, bool arg2, ulonglong arg3)
 * Calls: (none)
 * Called by: (none)
 */
/* CCallResult<SteamLeaderBoards, LeaderboardFindResult_t__Run(void*, bool, unsigned long long) */

void __thiscall
CCallResult<SteamLeaderBoards,LeaderboardFindResult_t__Run
          (CCallResult<SteamLeaderBoards,LeaderboardFindResult_t> *this,void *arg1,bool arg2,
          ulonglong arg3)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if (*(ulonglong *)(this + 0x10) != arg3) {
    return;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(this + 0x20);
  *(uint64_t *)(this + 0x10) = 0;
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(this + 0x18) + *(long *)(this + 0x28)) + -1);
  }
                    /* WARNING: Could not recover jumptable at 0x005baef8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*(long *)(this + 0x18) + *(long *)(this + 0x28),arg1,arg2);
  return;
}
