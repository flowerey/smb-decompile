/* src/engine/core_06.c — 78 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "core_06.h"

/* ======================================================================
 * append  (Ghidra `append` @ 004510c0)
 * Signature: uint8_t append(char * arg1, ulong arg2)
 * Calls: (none)
 * Called by: (none)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std__string_append(char *arg1,ulong arg2)

{
  (*(code *)PTR_append_008156e0)();
  return;
}

/* ======================================================================
 * assign  (Ghidra `assign` @ 004511c0)
 * Signature: uint8_t assign(wstring * arg1)
 * Calls: (none)
 * Called by: (none)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std__wstring_assign(wstring *arg1)

{
  (*(code *)PTR_assign_00815760)();
  return;
}

/* ======================================================================
 * abort  (Ghidra `abort` @ 004513d0)
 * Signature: noreturn void abort(void)
 * Calls: (none)
 * Called by: `abort__00825220`, `png_create_read_struct`, `png_create_read_struct_2`, `png_create_read_struct_2_constprop_2`, `png_create_write_struct`, `png_create_write_struct_2`, `png_create_write_struct_2_constprop_3`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_00815868)();
  return;
}

/* ======================================================================
 * assign__004516a0  (Ghidra `assign` @ 004516a0)
 * Signature: uint8_t assign(wchar_t * arg1, ulong arg2)
 * Calls: (none)
 * Called by: (none)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std__wstring_assign(wchar_t *arg1,ulong arg2)

{
  (*(code *)PTR_assign_008159d0)();
  return;
}

/* ======================================================================
 * append__004517f0  (Ghidra `append` @ 004517f0)
 * Signature: uint8_t append(string * arg1)
 * Calls: (none)
 * Called by: (none)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std__string_append(string *arg1)

{
  (*(code *)PTR_append_00815a78)();
  return;
}

/* ======================================================================
 * assign__00451920  (Ghidra `assign` @ 00451920)
 * Signature: uint8_t assign(char * arg1, ulong arg2)
 * Calls: (none)
 * Called by: (none)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std__string_assign(char *arg1,ulong arg2)

{
  (*(code *)PTR_assign_00815b10)();
  return;
}

/* ======================================================================
 * assign__004519d0  (Ghidra `assign` @ 004519d0)
 * Signature: uint8_t assign(string * arg1)
 * Calls: (none)
 * Called by: (none)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std__string_assign(string *arg1)

{
  (*(code *)PTR_assign_00815b68)();
  return;
}

/* ======================================================================
 * access  (Ghidra `access` @ 00451cf0)
 * Signature: int access(char * __name, int __type)
 * Calls: (none)
 * Called by: `Exists`, `FixFileCase`, `GSMBChapterData__ReloadData`, `SMBChapterDataSave`, `access__008256a8`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access(char *__name,int __type)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_access_00815cf8)();
  return iVar1;
}

/* ======================================================================
 * append__00451dc0  (Ghidra `append` @ 00451dc0)
 * Signature: uint8_t append(char * arg1)
 * Calls: (none)
 * Called by: (none)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std__string_append(char *arg1)

{
  (*(code *)PTR_append_00815d60)();
  return;
}

/* ======================================================================
 * WallHit  (Ghidra `WallHit` @ 00463fe0)
 * Signature: uint8_t __stdcall WallHit(tagTileCollisionType arg1)
 * Calls: `MeatBoyCharactor__WallHit`
 * Called by: (none)
 */
/* CommanderVideo__WallHit(tagTileCollisionType) */

void CommanderVideo__WallHit(long arg1)

{
  MeatBoyCharactor__WallHit();
  *(uint32_t *)(arg1 + 0xa94) = 0;
  *(uint32_t *)(arg1 + 0xaa4) = 1;
  *(uint32_t *)(arg1 + 0xa98) = 0;
  *(uint32_t *)(arg1 + 0xad4) = 0;
  return;
}

/* ======================================================================
 * ThreadLoadEnding  (Ghidra `ThreadLoadEnding` @ 00469730)
 * Signature: uint8_t __stdcall ThreadLoadEnding(void * arg1)
 * Calls: `FlashAnimationLibrary__FlashAnimationLibrary__00576680`, `FormatResourcePath`, `SyncEvent__Set`, `operator_new`
 * Called by: `FinalBoss__SetToPhaseTwo`
 */
/* WARNING: Removing unreachable block (ram,0x0046982c) */
/* ThreadLoadEnding(void*) */

uint64_t ThreadLoadEnding(void *arg1)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  FlashAnimationLibrary *this;
  uint8_t *local_38 [3];
  
  local_38[0] = &DAT_008184c8 /* R:0.00016803004837129265f */;
  if (*(short *)(SuperMeatBoy + 0x376) == 0) {
                    /* try { // try from 0046976c to 0046977d has its CatchHandler @ 00469837 */
    pcVar3 = (char *)FormatResourcePath("/Intro/theend.am",local_38);
    this = operator_new(0xb0);
                    /* try { // try from 00469787 to 0046978b has its CatchHandler @ 00469811 */
    FlashAnimationLibrary__FlashAnimationLibrary__00576680(this,pcVar3);
  }
  else {
    pcVar3 = (char *)FormatResourcePath("/Intro/theend2.am",local_38);
    this = operator_new(0xb0);
                    /* try { // try from 004697e8 to 004697ec has its CatchHandler @ 0046983c */
    FlashAnimationLibrary__FlashAnimationLibrary__00576680(this,pcVar3);
  }
  *(FlashAnimationLibrary **)arg1 = this;
                    /* try { // try from 00469794 to 004697de has its CatchHandler @ 00469837 */
  SyncEvent__Set((SyncEvent *)endLibLoaded);
  if ((allocator *)(local_38[0] + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage) {
    LOCK();
    piVar1 = (int *)(local_38[0] + -8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 < 1) {
      std__string_Rep_M_destroy((allocator *)(local_38[0] + -0x18));
    }
  }
  return 0;
}

/* ======================================================================
 * WaitForEndingLibrary  (Ghidra `WaitForEndingLibrary` @ 00469840)
 * Signature: uint8_t WaitForEndingLibrary(void)
 * Calls: `CloseThread`, `SyncEvent__Wait`
 * Called by: (none)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WaitForEndingLibrary() */

void WaitForEndingLibrary(void)

{
  SyncEvent__Wait((SyncEvent *)endLibLoaded);
  if (hEndingLoadThread != (THREADHANDLESTRUCT *)0x0) {
    CloseThread(hEndingLoadThread);
    hEndingLoadThread = (THREADHANDLESTRUCT *)0x0;
  }
  return;
}

/* ======================================================================
 * WallHit__00469ea0  (Ghidra `WallHit` @ 00469ea0)
 * Signature: uint8_t __stdcall WallHit(tagTileCollisionType arg1)
 * Calls: `MeatBoyCharactor__WallHit`
 * Called by: (none)
 */
/* FlyWrench__WallHit(tagTileCollisionType) */

void FlyWrench__WallHit(long arg1)

{
  MeatBoyCharactor__WallHit();
  *(uint32_t *)(arg1 + 0xa94) = 0;
  *(uint32_t *)(arg1 + 0x8b0) = *(uint32_t *)(arg1 + 0xa98);
  return;
}

/* ======================================================================
 * WallHit__00473840  (Ghidra `WallHit` @ 00473840)
 * Signature: uint8_t __stdcall WallHit(tagTileCollisionType arg1)
 * Calls: `MeatBoyCharactor__WallHit`
 * Called by: (none)
 */
/* Machinarium__WallHit(tagTileCollisionType) */

void Machinarium__WallHit(long arg1)

{
  MeatBoyCharactor__WallHit();
  *(uint32_t *)(arg1 + 0xa94) = 0;
  *(uint32_t *)(arg1 + 0xaa0) = 0;
  return;
}

/* ======================================================================
 * WallHit__00483540  (Ghidra `WallHit` @ 00483540)
 * Signature: uint8_t __stdcall WallHit(tagTileCollisionType arg1)
 * Calls: `MeatBoyCharactor__WallHit`
 * Called by: (none)
 */
/* Ogmo__WallHit(tagTileCollisionType) */

void Ogmo__WallHit(long arg1)

{
  MeatBoyCharactor__WallHit();
  *(uint32_t *)(arg1 + 0xa94) = 0;
  *(uint32_t *)(arg1 + 0xaa0) = 0;
  return;
}

/* ======================================================================
 * ValidWayPoint  (Ghidra `ValidWayPoint` @ 00488350)
 * Signature: uint8_t __stdcall ValidWayPoint(Vector2 * arg1, Vector2 * arg2)
 * Calls: `TileLevel__GetGridBlock`, `TileLevel__GetGridIndex__0058dd90`
 * Called by: `SetAIState`
 */
/* ValidWayPoint(Vector2 const&, Vector2 const&) */

uint64_t ValidWayPoint(Vector2 *arg1,Vector2 *arg2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  uint64_t uVar4;
  Vector2 aVStack_48 [16];
  Vector2 local_38 [16];
  int local_28;
  int local_24;
  int local_20;
  int local_1c [3];
  
  uVar4 = 0;
  TileLevel__GetGridIndex__0058dd90
            (*(TileLevel **)(SuperMeatBoy + 0x40),arg2,aVStack_48,&local_28,&local_24);
  pcVar2 = (char *)TileLevel__GetGridBlock(*(TileLevel **)(SuperMeatBoy + 0x40),local_28,local_24,0)
  ;
  if ((*pcVar2 == '\0') &&
     (pcVar2 = (char *)TileLevel__GetGridBlock
                                 (*(TileLevel **)(SuperMeatBoy + 0x40),local_28,local_24 + -1,0),
     *pcVar2 != '\0')) {
    TileLevel__GetGridIndex__0058dd90
              (*(TileLevel **)(SuperMeatBoy + 0x40),arg1,local_38,&local_20,local_1c);
    if (local_20 < local_28) {
      do {
        pcVar2 = (char *)TileLevel__GetGridBlock
                                   (*(TileLevel **)(SuperMeatBoy + 0x40),local_28,local_24 + -1,0);
        cVar1 = *pcVar2;
        pcVar2 = (char *)TileLevel__GetGridBlock
                                   (*(TileLevel **)(SuperMeatBoy + 0x40),local_28,local_24);
        if ((cVar1 == '\0') && (*pcVar2 == '\0')) {
          return 0;
        }
        local_20 = local_20 + 1;
      } while (local_20 < local_28);
    }
    else {
      iVar3 = local_20;
      if (local_28 < local_20) {
        do {
          pcVar2 = (char *)TileLevel__GetGridBlock
                                     (*(TileLevel **)(SuperMeatBoy + 0x40),local_28,local_24 + -1,0)
          ;
          cVar1 = *pcVar2;
          pcVar2 = (char *)TileLevel__GetGridBlock
                                     (*(TileLevel **)(SuperMeatBoy + 0x40),local_28,local_24);
          if ((cVar1 == '\0') && (*pcVar2 == '\0')) {
            return 0;
          }
          iVar3 = iVar3 + -1;
        } while (local_28 < iVar3);
      }
    }
    uVar4 = 1;
  }
  return uVar4;
}

/* ======================================================================
 * ThreadedCutSceneRender  (Ghidra `ThreadedCutSceneRender` @ 0049e110)
 * Signature: uint8_t ThreadedCutSceneRender(void)
 * Calls: `GSMBCutSceneManager__RenderLoadingOverlay`, `GSMBCutSceneManager__RenderSavingOverlay`
 * Called by: `GSMBCutSceneManager__PlayCutScene`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ThreadedCutSceneRender() */

void ThreadedCutSceneRender(void)

{
  (**(code **)(*(long *)SMBCutSceneManager + 0x10))();
  GSMBCutSceneManager__RenderLoadingOverlay(SMBCutSceneManager);
  GSMBCutSceneManager__RenderSavingOverlay(SMBCutSceneManager);
  return;
}

/* ======================================================================
 * UploadPromptClose  (Ghidra `UploadPromptClose` @ 0049e560)
 * Signature: uint8_t __stdcall UploadPromptClose(void * arg1)
 * Calls: `GMeatHUD__FreezeTimer`, `GSuperMeatBoy__getChar`, `ShowEditor`, `UserAlertCloseCurrent`
 * Called by: `EditorForm_UploadFormOpen`
 */
/* UploadPromptClose(void*) */

void UploadPromptClose(void *arg1)

{
  long *plVar1;
  
  ShowEditor((tagButtonProps *)0x0,(void *)0x0);
  UserAlertCloseCurrent((void *)0x0);
  plVar1 = (long *)GSuperMeatBoy__getChar(SuperMeatBoy,1);
  (**(code **)(*plVar1 + 0x68))(plVar1);
  GMeatHUD__FreezeTimer(SMBHUD,0);
  return;
}

/* ======================================================================
 * UserLoginCheck  (Ghidra `UserLoginCheck` @ 004a2110)
 * Signature: uint8_t UserLoginCheck(void)
 * Calls: `CreateMessage`, `GetLocalizedText`, `SteamUser`, `UserAlertCloseCurrent`
 * Called by: `GLOBAL_sub_I_UserLoginCheck`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* UserLoginCheck() */

uint64_t UserLoginCheck(void)

{
  long lVar1;
  uint32_t local_78 [2];
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
  
  lVar1 = SteamUser();
  if (lVar1 != 0) {
    return 1;
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
  return 0;
}

/* ======================================================================
 * UpdateEditorLayerTweens  (Ghidra `UpdateEditorLayerTweens` @ 004a2a00)
 * Signature: uint8_t UpdateEditorLayerTweens(void)
 * Calls: `operator_delete`
 * Called by: `SMBEditor__Update`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* UpdateEditorLayerTweens() */

void UpdateEditorLayerTweens(void)

{
  ushort *puVar1;
  ushort uVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  uint64_t *puVar8;
  long lVar9;
  ushort uVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  ushort uVar14;
  
  if (pLayerColorTweens._40_2_ != 0) {
    uVar13 = 0;
    do {
      uVar7 = uVar13 & 0xffff;
      uVar11 = (int)uVar13 + 1;
      uVar13 = (ulong)uVar11;
      (**(code **)(**(long **)(pLayerColorTweens._56_8_ + uVar7 * 0x18) + 8))(fOneFrameTimeStep);
      (**(code **)(**(long **)(pLayerColorTweens._56_8_ + 8 + uVar7 * 0x18) + 8))(fOneFrameTimeStep)
      ;
      uVar5 = (uint)(ushort)pLayerColorTweens._40_2_;
    } while ((int)uVar11 < (int)uVar5);
    while ((short)uVar5 != 0) {
      uVar13 = 0;
      while( true ) {
        lVar9 = (uVar13 & 0xffff) * 0x18;
        iVar6 = (**(code **)(**(long **)(pLayerColorTweens._56_8_ + (uVar13 & 0xffff) * 0x18) + 0x28
                            ))();
        uVar5 = (uint)uVar13;
        if (iVar6 == 0) break;
        uVar13 = (ulong)(uVar5 + 1);
        if ((int)(uint)(ushort)pLayerColorTweens._40_2_ <= (int)(uVar5 + 1)) {
          return;
        }
      }
      puVar8 = (uint64_t *)(pLayerColorTweens._56_8_ + lVar9);
      puVar3 = (uint64_t *)*puVar8;
      if (puVar3 != (uint64_t *)0x0) {
        *puVar3 = &PTR_Calculate_005c44d0;
        operator_delete(puVar3);
        puVar8 = (uint64_t *)(pLayerColorTweens._56_8_ + lVar9);
      }
      puVar3 = (uint64_t *)puVar8[1];
      if (puVar3 != (uint64_t *)0x0) {
        *puVar3 = &PTR_Calculate_005c4550;
        operator_delete(puVar3);
      }
      uVar11 = (uint)(ushort)pLayerColorTweens._40_2_;
      if ((uVar5 + 1 < uVar11) && ((int)uVar5 < (int)(uVar11 - 1))) {
        lVar9 = (long)(int)uVar5 * 0x18;
        do {
          uVar4 = pLayerColorTweens._56_8_;
          uVar12 = (int)uVar13 + 1;
          uVar13 = (ulong)uVar12;
          puVar3 = (uint64_t *)(pLayerColorTweens._56_8_ + lVar9);
          lVar9 = lVar9 + 0x18;
          *puVar3 = *(uint64_t *)(pLayerColorTweens._56_8_ + lVar9);
          puVar3[1] = *(uint64_t *)(uVar4 + 8 + lVar9);
          puVar3[2] = *(uint64_t *)(uVar4 + 0x10 + lVar9);
          uVar11 = (uint)(ushort)pLayerColorTweens._40_2_;
        } while ((int)uVar12 < (int)(uVar11 - 1));
      }
      if (pLayerColorTweens._48_4_ == 1) {
        if (pLayerColorTweens._42_2_ != 0) {
          uVar10 = 0;
          uVar14 = pLayerColorTweens._42_2_;
          do {
            puVar1 = (ushort *)(pLayerColorTweens._64_8_ + (ulong)uVar10 * 2);
            uVar2 = *puVar1;
            if (uVar5 == uVar2) {
              *puVar1 = 0xffff;
              uVar14 = pLayerColorTweens._42_2_;
            }
            else if ((uVar5 < uVar2) && ((ushort)(uVar2 - 1) < 0xfffe)) {
              *puVar1 = uVar2 - 1;
              uVar14 = pLayerColorTweens._42_2_;
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 < uVar14);
          uVar11 = (uint)(ushort)pLayerColorTweens._40_2_;
        }
      }
      uVar5 = 0;
      if ((short)uVar11 != 0) {
        uVar5 = uVar11 - 1;
      }
      pLayerColorTweens._40_2_ = (uint16_t)uVar5;
    }
  }
  return;
}

/* ======================================================================
 * UpdateEditorButtons  (Ghidra `UpdateEditorButtons` @ 004ab2d0)
 * Signature: uint8_t UpdateEditorButtons(void)
 * Calls: (none)
 * Called by: (none)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* UpdateEditorButtons() */

void UpdateEditorButtons(void)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  
  if (pEditorButtons._40_2_ != 0) {
    uVar3 = 0;
    do {
      uVar1 = uVar3 & 0xffff;
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulong)uVar2;
      (**(code **)(**(long **)(pEditorButtons._56_8_ + uVar1 * 8) + 0x48))();
    } while ((int)uVar2 < (int)(uint)(ushort)pEditorButtons._40_2_);
  }
  return;
}

/* ======================================================================
 * UpdateEditorFunctionButtonStates  (Ghidra `UpdateEditorFunctionButtonStates` @ 004acc60)
 * Signature: uint8_t UpdateEditorFunctionButtonStates(void)
 * Calls: (none)
 * Called by: `SMBEditor__Update`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* UpdateEditorFunctionButtonStates() */

void UpdateEditorFunctionButtonStates(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  plVar5 = DAT_0081a888 /* R:1.1900611286186368e-38f */;
  plVar3 = pLayerButtons;
  *(uint8_t *)((long)pLayerButtons + 0x4a) = 0;
  *(uint16_t *)(plVar3 + 9) = 0;
  *(uint8_t *)((long)plVar5 + 0x4a) = 0;
  *(uint16_t *)(plVar5 + 9) = 0;
  plVar4 = DAT_0081a890 /* R:2.2420775429197073e-44f */;
  *(uint8_t *)((long)DAT_0081a890 /* R:2.2420775429197073e-44f */ + 0x4a) = 0;
  *(uint16_t *)(plVar4 + 9) = 0;
  plVar4 = DAT_0081a898 /* R:2.8306228979361305e-42f */;
  *(uint8_t *)((long)DAT_0081a898 /* R:2.8306228979361305e-42f */ + 0x4a) = 0;
  *(uint16_t *)(plVar4 + 9) = 0;
  plVar4 = DAT_0081a8a0 /* R:1.1900633706961798e-38f */;
  *(uint8_t *)((long)DAT_0081a8a0 /* R:1.1900633706961798e-38f */ + 0x4a) = 0;
  *(uint16_t *)(plVar4 + 9) = 0;
  plVar4 = DAT_0081a8a8 /* R:2.2420775429197073e-44f */;
  *(uint8_t *)((long)DAT_0081a8a8 /* R:2.2420775429197073e-44f */ + 0x4a) = 0;
  *(uint16_t *)(plVar4 + 9) = 0;
  plVar4 = DAT_0081a8b0 /* R:2.8432345841150538e-42f */;
  *(uint8_t *)((long)DAT_0081a8b0 /* R:2.8432345841150538e-42f */ + 0x4a) = 0;
  *(uint16_t *)(plVar4 + 9) = 0;
  plVar4 = DAT_0081a8b8 /* R:1.1900656127737227e-38f */;
  *(uint8_t *)((long)DAT_0081a8b8 /* R:1.1900656127737227e-38f */ + 0x4a) = 0;
  *(uint16_t *)(plVar4 + 9) = 0;
  switch(*(uint32_t *)(SuperMeatBoyEditor + 0xd0)) {
  default:
    (**(code **)(*DAT_0081a898 /* R:2.8306228979361305e-42f */ + 0x38))();
    break;
  case 2:
    plVar5 = DAT_0081a8a8 /* R:2.2420775429197073e-44f */;
  case 1:
    (**(code **)(*plVar5 + 0x38))();
    break;
  case 3:
    (**(code **)(*DAT_0081a8a0 /* R:1.1900633706961798e-38f */ + 0x38))();
    break;
  case 4:
    (**(code **)(*DAT_0081a8b0 /* R:2.8432345841150538e-42f */ + 0x38))();
    break;
  case 5:
    (**(code **)(*DAT_0081a8b8 /* R:1.1900656127737227e-38f */ + 0x38))();
    break;
  case 6:
    (**(code **)(*DAT_0081a890 /* R:2.2420775429197073e-44f */ + 0x38))();
    break;
  case 7:
    (**(code **)(*plVar3 + 0x38))(plVar3);
  }
  lVar2 = pEditorFunctionButtons;
  lVar1 = SuperMeatBoyEditor;
  if (pEditorFunctionButtons != 0) {
    if (*(int *)(SuperMeatBoyEditor + 0xc0) == 0) {
      *(uint8_t *)(pEditorFunctionButtons + 0x4a) = 1;
    }
    else {
      *(uint8_t *)(pEditorFunctionButtons + 0x4a) = 0;
      *(uint16_t *)(lVar2 + 0x48) = 0;
    }
  }
  lVar2 = DAT_0081a828 /* R:6.363240274560421e-39f */;
  if (DAT_0081a828 /* R:6.363240274560421e-39f */ != 0) {
    if (*(int *)(lVar1 + 0xc0) == 1) {
      *(uint8_t *)(DAT_0081a828 /* R:6.363240274560421e-39f */ + 0x4a) = 1;
    }
    else {
      *(uint8_t *)(DAT_0081a828 /* R:6.363240274560421e-39f */ + 0x4a) = 0;
      *(uint16_t *)(lVar2 + 0x48) = 0;
    }
  }
  lVar2 = DAT_0081a830 /* R:5.254869241218064e-43f */;
  if (DAT_0081a830 /* R:5.254869241218064e-43f */ != 0) {
    if (*(int *)(lVar1 + 0xc0) == 2) {
      *(uint8_t *)(DAT_0081a830 /* R:5.254869241218064e-43f */ + 0x4a) = 1;
    }
    else {
      *(uint8_t *)(DAT_0081a830 /* R:5.254869241218064e-43f */ + 0x4a) = 0;
      *(uint16_t *)(lVar2 + 0x48) = 0;
    }
  }
  lVar2 = DAT_0081a838 /* R:2.766163168577189e-42f */;
  if (DAT_0081a838 /* R:2.766163168577189e-42f */ != 0) {
    if (*(int *)(lVar1 + 0xc0) == 3) {
      *(uint8_t *)(DAT_0081a838 /* R:2.766163168577189e-42f */ + 0x4a) = 1;
    }
    else {
      *(uint8_t *)(DAT_0081a838 /* R:2.766163168577189e-42f */ + 0x4a) = 0;
      *(uint16_t *)(lVar2 + 0x48) = 0;
    }
  }
  lVar2 = DAT_0081a840 /* R:1.190054402386008e-38f */;
  if (DAT_0081a840 /* R:1.190054402386008e-38f */ != 0) {
    if (*(int *)(lVar1 + 0xc0) == 4) {
      *(uint8_t *)(DAT_0081a840 /* R:1.190054402386008e-38f */ + 0x4a) = 1;
    }
    else {
      *(uint8_t *)(DAT_0081a840 /* R:1.190054402386008e-38f */ + 0x4a) = 0;
      *(uint16_t *)(lVar2 + 0x48) = 0;
    }
  }
  lVar2 = DAT_0081a848 /* R:2.2420775429197073e-44f */;
  if (DAT_0081a848 /* R:2.2420775429197073e-44f */ != 0) {
    if (*(int *)(lVar1 + 0xc0) == 5) {
      *(uint8_t *)(DAT_0081a848 /* R:2.2420775429197073e-44f */ + 0x4a) = 1;
    }
    else {
      *(uint8_t *)(DAT_0081a848 /* R:2.2420775429197073e-44f */ + 0x4a) = 0;
      *(uint16_t *)(lVar2 + 0x48) = 0;
    }
  }
  lVar2 = DAT_0081a850 /* R:2.781577451684762e-42f */;
  if (DAT_0081a850 /* R:2.781577451684762e-42f */ != 0) {
    if (*(int *)(lVar1 + 0xc0) == 6) {
      *(uint8_t *)(DAT_0081a850 /* R:2.781577451684762e-42f */ + 0x4a) = 1;
    }
    else {
      *(uint8_t *)(DAT_0081a850 /* R:2.781577451684762e-42f */ + 0x4a) = 0;
      *(uint16_t *)(lVar2 + 0x48) = 0;
    }
  }
  lVar2 = DAT_0081a858 /* R:1.190056644463551e-38f */;
  if (DAT_0081a858 /* R:1.190056644463551e-38f */ != 0) {
    if (*(int *)(lVar1 + 0xc0) == 7) {
      *(uint8_t *)(DAT_0081a858 /* R:1.190056644463551e-38f */ + 0x4a) = 1;
      return;
    }
    *(uint8_t *)(DAT_0081a858 /* R:1.190056644463551e-38f */ + 0x4a) = 0;
    *(uint16_t *)(lVar2 + 0x48) = 0;
  }
  return;
}

/* ======================================================================
 * TurnOffSetPieceWayPointMode  (Ghidra `TurnOffSetPieceWayPointMode` @ 004af940)
 * Signature: uint8_t TurnOffSetPieceWayPointMode(void)
 * Calls: (none)
 * Called by: (none)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TurnOffSetPieceWayPointMode() */

void TurnOffSetPieceWayPointMode(void)

{
  bSetPieceWayPointMode = 0;
  pCurrentSetPieceWayPoint = 0;
  return;
}

/* ======================================================================
 * TurnOffLineItem  (Ghidra `TurnOffLineItem` @ 00509790)
 * Signature: uint8_t __stdcall TurnOffLineItem(char * arg1, FlashAnimationLibrary * arg2, FlashMovieClip * arg3)
 * Calls: `FlashAnimationLibrary__GetMovieClip__005731d0`, `FlashMovieClip__FindInstance`
 * Called by: (none)
 */
/* TurnOffLineItem(char const*, FlashAnimationLibrary*, FlashMovieClip*) */

void TurnOffLineItem(char *arg1,FlashAnimationLibrary *arg2,FlashMovieClip *arg3)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = 0;
  plVar1 = (long *)FlashAnimationLibrary__GetMovieClip__005731d0(arg2,arg1);
  while( true ) {
    lVar2 = FlashMovieClip__FindInstance(arg3,(int)plVar1[4],iVar3,(int *)0x0,0);
    if (lVar2 == 0) break;
    *(uint32_t *)(lVar2 + 0x20) = 0xffffffff;
    iVar3 = iVar3 + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x005097e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 8))(plVar1);
  return;
}

/* ======================================================================
 * SwitchCharacter  (Ghidra `SwitchCharacter` @ 00512080)
 * Signature: uint8_t __stdcall SwitchCharacter(tagButtonProps * arg1, void * arg2)
 * Calls: (none)
 * Called by: `GSuperMeatBoy__Initialize__00516f60`
 */
/* SwitchCharacter(tagButtonProps const*, void*) */

void SwitchCharacter(tagButtonProps *arg1,void *arg2)

{
  return;
}

/* ======================================================================
 * WallHit__00518640  (Ghidra `WallHit` @ 00518640)
 * Signature: uint8_t __stdcall WallHit(tagTileCollisionType arg1)
 * Calls: `MeatBoyCharactor__WallHit`
 * Called by: (none)
 */
/* TheKid__WallHit(tagTileCollisionType) */

void TheKid__WallHit(long arg1)

{
  MeatBoyCharactor__WallHit();
  *(uint32_t *)(arg1 + 0xa94) = 0;
  *(uint32_t *)(arg1 + 0xaa0) = 0;
  return;
}

/* ======================================================================
 * add_ctab_members_isra_11  (Ghidra `add_ctab_members.isra.11` @ 0052bcd0)
 * Signature: uint8_t add_ctab_members.isra.11(void)
 * Calls: `buffer_append`, `buffer_find`, `buffer_size`, `strlen`
 * Called by: `MOJOSHADER_assemble`
 */
int add_ctab_members_isra_11(int *arg1,uint *arg2,long *arg3)

{
  char *__s;
  int *piVar1;
  size_t sVar2;
  long lVar3;
  int iVar4;
  uint64_t *puVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  uint16_t local_48;
  uint16_t local_46;
  uint16_t local_44;
  uint16_t local_42;
  uint16_t local_40;
  uint16_t local_3e;
  uint32_t local_3c;
  
  iVar6 = *arg2 << 3;
  piVar1 = (int *)(**(code **)(arg1 + 2))(iVar6,*(uint64_t *)(arg1 + 6));
  if (piVar1 == (int *)0x0) {
    arg1[1] = 1;
    *arg1 = 1;
    iVar4 = 0;
  }
  else {
    if (*arg2 != 0) {
      uVar7 = 0;
      piVar8 = piVar1;
      do {
        puVar5 = (uint64_t *)((ulong)uVar7 * 0x28 + *arg3);
        __s = (char *)*puVar5;
        sVar2 = strlen(__s);
        iVar4 = 0;
        if (*arg1 == 0) {
          lVar3 = buffer_find(*(uint64_t *)(arg1 + 0x3c),0x20,__s,sVar2 + 1);
          iVar4 = (int)lVar3 + -4;
          if (lVar3 < 0) {
            iVar4 = buffer_size(*(uint64_t *)(arg1 + 0x3c));
            iVar4 = iVar4 + -4;
            buffer_append(*(uint64_t *)(arg1 + 0x3c),__s,sVar2 + 1);
          }
        }
        *piVar8 = iVar4;
        local_48 = (uint16_t)*(uint32_t *)(puVar5 + 1);
        local_46 = (uint16_t)*(uint32_t *)((long)puVar5 + 0xc);
        local_44 = (uint16_t)*(uint32_t *)(puVar5 + 2);
        local_42 = (uint16_t)*(uint32_t *)((long)puVar5 + 0x14);
        local_40 = (uint16_t)*(uint32_t *)(puVar5 + 3);
        iVar4 = 0;
        local_3e = (uint16_t)*(uint32_t *)((long)puVar5 + 0x1c);
        local_3c = add_ctab_members_isra_11(arg1,(long)puVar5 + 0x1c,puVar5 + 4);
        if (*arg1 == 0) {
          lVar3 = buffer_find(*(uint64_t *)(arg1 + 0x3c),0x20,&local_48,0x10);
          iVar4 = (int)lVar3 + -4;
          if (lVar3 < 0) {
            iVar4 = buffer_size(*(uint64_t *)(arg1 + 0x3c));
            iVar4 = iVar4 + -4;
            buffer_append(*(uint64_t *)(arg1 + 0x3c),&local_48,0x10);
          }
        }
        piVar8[1] = iVar4;
        uVar7 = uVar7 + 1;
        piVar8 = piVar8 + 2;
      } while (uVar7 < *arg2);
    }
    iVar4 = 0;
    if (*arg1 == 0) {
      lVar3 = buffer_find(*(uint64_t *)(arg1 + 0x3c),0x20,piVar1,iVar6);
      iVar4 = (int)lVar3 + -4;
      if (lVar3 < 0) {
        iVar4 = buffer_size(*(uint64_t *)(arg1 + 0x3c));
        iVar4 = iVar4 + -4;
        buffer_append(*(uint64_t *)(arg1 + 0x3c),piVar1,iVar6);
      }
    }
    (**(code **)(arg1 + 4))(piVar1,*(uint64_t *)(arg1 + 6));
  }
  return iVar4;
}

/* ======================================================================
 * UpdateJoysticks  (Ghidra `UpdateJoysticks` @ 005708d0)
 * Signature: uint8_t UpdateJoysticks(void)
 * Calls: `ConvertSDLJoystickStateToJoyState`, `SDL_GameControllerClose`, `SDL_GameControllerGetAttached`, `SDL_GameControllerUpdate`
 * Called by: (none)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* UpdateJoysticks() */

void UpdateJoysticks(void)

{
  int iVar1;
  
  uMasterInputFrameCounter = uMasterInputFrameCounter + 1;
  SDL_GameControllerUpdate();
  if (pJoysticks._8_8_ != 0) {
    iVar1 = SDL_GameControllerGetAttached();
    if (iVar1 == 0) {
      SDL_GameControllerClose(pJoysticks._8_8_);
      pJoysticks._8_8_ = 0;
    }
    else {
      ConvertSDLJoystickStateToJoyState((tagSDLJoystick *)pJoysticks);
    }
  }
  if (pJoysticks._40_8_ != 0) {
    iVar1 = SDL_GameControllerGetAttached();
    if (iVar1 == 0) {
      SDL_GameControllerClose(pJoysticks._40_8_);
      pJoysticks._40_8_ = 0;
    }
    else {
      ConvertSDLJoystickStateToJoyState((tagSDLJoystick *)(pJoysticks + 0x20));
    }
  }
  if (pJoysticks._72_8_ != 0) {
    iVar1 = SDL_GameControllerGetAttached();
    if (iVar1 == 0) {
      SDL_GameControllerClose(pJoysticks._72_8_);
      pJoysticks._72_8_ = 0;
    }
    else {
      ConvertSDLJoystickStateToJoyState((tagSDLJoystick *)(pJoysticks + 0x40));
    }
  }
  if (pJoysticks._104_8_ != 0) {
    iVar1 = SDL_GameControllerGetAttached();
    if (iVar1 != 0) {
      ConvertSDLJoystickStateToJoyState((tagSDLJoystick *)(pJoysticks + 0x60));
      return;
    }
    SDL_GameControllerClose(pJoysticks._104_8_);
    pJoysticks._104_8_ = 0;
  }
  return;
}

/* ======================================================================
 * UpdateMouse  (Ghidra `UpdateMouse` @ 005709e0)
 * Signature: uint8_t UpdateMouse(void)
 * Calls: `FormatButtonProps`, `SDL_GetKeyboardFocus`, `SDL_GetMouseState`, `System_GetTimeInMS`
 * Called by: `iptUpdateDevices`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* UpdateMouse() */

void UpdateMouse(void)

{
  ushort uVar1;
  ushort uVar2;
  float *pfVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int local_20;
  int local_1c;
  
  iVar5 = UpdateMouse()::dwLastFrameTime;
  if ((mouse != (float *)0x0) &&
     (lVar6 = SDL_GetKeyboardFocus(), iVar5 = UpdateMouse()::dwLastFrameTime, lVar6 == *Window)) {
    local_20 = 0;
    local_1c = 0;
    uVar4 = SDL_GetMouseState(&local_20,&local_1c);
    uVar1 = *(ushort *)(Window + 1);
    uVar2 = *(ushort *)((long)Window + 10);
    fVar10 = (float)uVar1;
    fVar11 = (float)uVar2;
    *mouse = (float)local_20 / fVar10;
    mouse[1] = (float)local_1c / fVar11;
    pfVar3 = mouse;
    fVar9 = 1.0;
    if (local_20 <= (int)(uint)uVar1) {
      iVar5 = 0;
      if (-1 < local_20) {
        iVar5 = local_20;
      }
      fVar10 = (float)iVar5 / fVar10;
      fVar9 = (fVar10 + fVar10) - 1.0;
    }
    fVar10 = 1.0;
    if (local_1c <= (int)(uint)uVar2) {
      iVar5 = 0;
      if (-1 < local_1c) {
        iVar5 = local_1c;
      }
      fVar11 = (float)iVar5 / fVar11;
      fVar10 = (fVar11 + fVar11) - 1.0;
    }
    bVar8 = UpdateMouse()::dwLastFrameTime == '\0';
    mouse[3] = fVar9;
    pfVar3[4] = fVar10;
    if ((bVar8) && (iVar5 = __cxa_guard_acquire(&UpdateMouse()::dwLastFrameTime), iVar5 != 0)) {
                    /* try { // try from 00570b0e to 00570b12 has its CatchHandler @ 00570c0f */
      UpdateMouse()::dwLastFrameTime = System_GetTimeInMS();
      __cxa_guard_release(&UpdateMouse()::dwLastFrameTime);
    }
    iVar5 = System_GetTimeInMS();
    uVar7 = iVar5 - UpdateMouse()::dwLastFrameTime;
    FormatButtonProps((tagButtonProps *)(mouse + 5),uVar4 & 1,uVar7);
    if ((mouse[5] != 0.0) && (*(code **)(Mouse + 0x38) != (code *)0x0)) {
      (**(code **)(Mouse + 0x38))(mouse + 5,*(uint64_t *)(Mouse + 0x40));
    }
    FormatButtonProps((tagButtonProps *)(mouse + 8),(int)(uVar4 & 0xff) >> 2 & 1,uVar7);
    if ((mouse[8] != 0.0) && (*(code **)(Mouse + 0x48) != (code *)0x0)) {
      (**(code **)(Mouse + 0x48))(mouse + 8,*(uint64_t *)(Mouse + 0x50));
    }
    FormatButtonProps((tagButtonProps *)(mouse + 0xb),(int)(uVar4 & 0xff) >> 1 & 1,uVar7);
    if ((mouse[0xb] != 0.0) && (*(code **)(Mouse + 0x58) != (code *)0x0)) {
      (**(code **)(Mouse + 0x58))(mouse + 0xb,*(uint64_t *)(Mouse + 0x60));
    }
  }
  UpdateMouse()::dwLastFrameTime = iVar5;
  return;
}

/* ======================================================================
 * UpdateKeyboard  (Ghidra `UpdateKeyboard` @ 00570f90)
 * Signature: uint8_t UpdateKeyboard(void)
 * Calls: `CodeToChar`, `FormatButtonProps`, `SDL_GetKeyboardFocus`, `SDL_GetKeyboardState`, `SDL_GetScancodeFromKey`, `System_GetTimeInMS`
 * Called by: `iptUpdateDevices`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* UpdateKeyboard() */

void UpdateKeyboard(void)

{
  code *pcVar1;
  bool bVar2;
  uint32_t *puVar3;
  uint8_t uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  int iVar13;
  
  iVar5 = UpdateKeyboard()::dwLastFrameTime;
  if (((keyboard != (uint32_t *)0x0) &&
      (lVar7 = SDL_GetKeyboardFocus(), iVar5 = UpdateKeyboard()::dwLastFrameTime, lVar7 == *Window))
     && (lVar7 = SDL_GetKeyboardState(0), iVar5 = UpdateKeyboard()::dwLastFrameTime, lVar7 != 0)) {
    if ((UpdateKeyboard()::dwLastFrameTime == '\0') &&
       (iVar5 = __cxa_guard_acquire(&UpdateKeyboard()::dwLastFrameTime), iVar5 != 0)) {
                    /* try { // try from 005711c3 to 005711c7 has its CatchHandler @ 00571204 */
      UpdateKeyboard()::dwLastFrameTime = System_GetTimeInMS();
      __cxa_guard_release(&UpdateKeyboard()::dwLastFrameTime);
    }
    iVar5 = System_GetTimeInMS();
    uVar10 = 0;
    uVar11 = iVar5 - UpdateKeyboard()::dwLastFrameTime;
    uVar12 = 0;
    iVar13 = 0;
    bVar2 = false;
    do {
      if ((((ushort)uVar10 < 0x90) && ((&bySDLKeyMap)[uVar10] != 0)) &&
         (iVar6 = SDL_GetScancodeFromKey(), iVar6 != 0)) {
        lVar8 = (long)(int)uVar10;
        FormatButtonProps((tagButtonProps *)(keyboard + lVar8 * 3 + 4),
                          (uint)(*(char *)(lVar7 + iVar6) != '\0'),uVar11);
        if (keyboard[lVar8 * 3 + 4] == 1) {
          uVar12 = uVar10 & 0xffffffff;
          bVar2 = true;
        }
        else {
          iVar6 = iVar13;
          if (keyboard[lVar8 * 3 + 4] == 0) goto LAB_00571030;
        }
        lVar9 = (lVar8 + 0xc1) * 0x10 + Keyboard;
        pcVar1 = *(code **)(lVar9 + 8);
        iVar13 = iVar6;
        if (pcVar1 != (code *)0x0) {
          (*pcVar1)(keyboard + lVar8 * 3 + 4,*(uint64_t *)(lVar9 + 0x10));
        }
      }
LAB_00571030:
      puVar3 = keyboard;
      uVar10 = uVar10 + 1;
    } while (uVar10 != 0x100);
    if (bVar2) {
      if (keyboard[3] == 0) {
        keyboard[3] = 1;
      }
      else if (keyboard[3] == 1) {
        keyboard[3] = 2;
      }
      uVar4 = CodeToChar(iVar13);
      *(uint8_t *)(puVar3 + 1) = uVar4;
      *keyboard = (int)uVar12;
      keyboard[2] = 1;
      if (*(code **)(Keyboard + 0x2c18) != (code *)0x0) {
        (**(code **)(Keyboard + 0x2c18))(0,0);
      }
    }
    else {
      if (keyboard[3] - 1 < 2) {
        keyboard[3] = 3;
      }
      else if (keyboard[3] == 3) {
        keyboard[3] = 0;
      }
      *(uint8_t *)(puVar3 + 1) = 0;
      *keyboard = 0;
      keyboard[2] = 0;
    }
  }
  UpdateKeyboard()::dwLastFrameTime = iVar5;
  return;
}

/* ======================================================================
 * TransformCheckPoint3D  (Ghidra `TransformCheckPoint3D` @ 0057e170)
 * Signature: uint8_t __stdcall TransformCheckPoint3D(SceneObject3D * arg1, FPUVector * arg2, FPUVector * arg3)
 * Calls: `SceneObject3D__getTransformationMatrix`
 * Called by: (none)
 */
/* TransformCheckPoint3D(SceneObject3D*, FPUVector const&, FPUVector&) */

void TransformCheckPoint3D(SceneObject3D *arg1,FPUVector *arg2,FPUVector *arg3)

{
  Matrix4x4 *pMVar1;
  Matrix4x4 aMStack_58 [72];
  
  if (pCurrentBoundsCheck == (Matrix4x4 *)0x0) {
    pMVar1 = (Matrix4x4 *)SceneObject3D__getTransformationMatrix(arg1);
    Matrix4x4__Inverse(aMStack_58,pMVar1);
    Matrix4x4__TransformVector3(arg3,arg2,aMStack_58,1);
  }
  else {
    pMVar1 = pCurrentBoundsCheck;
    if (*(int *)(pCurrentBoundsCheck + 0x40) == 0) {
      pMVar1 = (Matrix4x4 *)SceneObject3D__getTransformationMatrix(arg1);
      Matrix4x4__Inverse(pCurrentBoundsCheck,pMVar1);
      pMVar1 = pCurrentBoundsCheck;
      *(uint32_t *)(pCurrentBoundsCheck + 0x40) = 1;
    }
    Matrix4x4__TransformVector3(arg3,arg2,pMVar1,1);
  }
  return;
}

/* ======================================================================
 * TransformCheckPoint2D  (Ghidra `TransformCheckPoint2D` @ 0057e210)
 * Signature: uint8_t __stdcall TransformCheckPoint2D(SceneObject2D * arg1, Vector2 * arg2, Vector2 * arg3)
 * Calls: `SceneObject2D__getTransformationMatrix`
 * Called by: (none)
 */
/* TransformCheckPoint2D(SceneObject2D*, Vector2 const&, Vector2&) */

void TransformCheckPoint2D(SceneObject2D *arg1,Vector2 *arg2,Vector2 *arg3)

{
  Matrix4x4 *pMVar1;
  Matrix4x4 aMStack_58 [72];
  
  if (pCurrentBoundsCheck == (Matrix4x4 *)0x0) {
    pMVar1 = (Matrix4x4 *)SceneObject2D__getTransformationMatrix(arg1);
    Matrix4x4__Inverse(aMStack_58,pMVar1);
    Matrix4x4__TransformVector2(arg3,arg2,aMStack_58,1);
  }
  else {
    pMVar1 = pCurrentBoundsCheck;
    if (*(int *)(pCurrentBoundsCheck + 0x40) == 0) {
      pMVar1 = (Matrix4x4 *)SceneObject2D__getTransformationMatrix(arg1);
      Matrix4x4__Inverse(pCurrentBoundsCheck,pMVar1);
      pMVar1 = pCurrentBoundsCheck;
      *(uint32_t *)(pCurrentBoundsCheck + 0x40) = 1;
    }
    Matrix4x4__TransformVector2(arg3,arg2,pMVar1,1);
  }
  return;
}

/* ======================================================================
 * TEngineLoadThreadFunc  (Ghidra `TEngineLoadThreadFunc` @ 00581ec0)
 * Signature: uint8_t __stdcall TEngineLoadThreadFunc(void * arg1)
 * Calls: `SyncEvent__Set`, `System_GetTimeInMS`, `System_Update`
 * Called by: `EnableLoadingRenderThread`
 */
/* TEngineLoadThreadFunc(void*) */

uint64_t TEngineLoadThreadFunc(void *arg1)

{
  while (bLoadThreadRunning == 1) {
    System_Update();
    System_GetTimeInMS();
    dwTestLastTime = dwTestNowTime;
    dwTestNowTime = System_GetTimeInMS();
    fOneFrameTimeStep = 0x3c888889;
    *(uint32_t *)(Engine + 0x38) = 0x3c888889;
    System_GetTimeInMS();
  }
  SyncEvent__Set((SyncEvent *)LoadingRenderThreadFinished);
  return 0;
}

/* ======================================================================
 * Wait  (Ghidra `Wait` @ 00592780)
 * Signature: uint8_t __stdcall Wait(uint arg1, int arg2)
 * Calls: (none)
 * Called by: (none)
 */
/* Loader__Wait(unsigned int, int) */

uint64_t Loader__Wait(uint arg1,int arg2)

{
  return 1;
}

/* ======================================================================
 * WaitForNet  (Ghidra `WaitForNet` @ 005927d0)
 * Signature: uint8_t __stdcall WaitForNet(LoaderIDNet * arg1)
 * Calls: (none)
 * Called by: (none)
 */
/* Loader__WaitForNet(LoaderIDNet*) */

uint64_t Loader__WaitForNet(LoaderIDNet *arg1)

{
  return 1;
}

/* ======================================================================
 * SwapLayers  (Ghidra `SwapLayers` @ 00598970)
 * Signature: uint8_t __stdcall SwapLayers(RenderLayer * arg1, RenderLayer * arg2)
 * Calls: `AutoLockSection__AutoLockSection`, `AutoLockSection__AutoLockSection__005b59d0`, `RemoveLayer`
 * Called by: `AddLayer`
 */
/* RenderLayers__SwapLayers(RenderLayer*, RenderLayer*) */

void RenderLayers__SwapLayers(RenderLayer *arg1,RenderLayer *arg2)

{
  long lVar1;
  long lVar2;
  RenderLayer *pRVar3;
  RenderLayer *pRVar4;
  bool bVar5;
  AutoLockSection local_58 [16];
  AutoLockSection local_48 [24];
  
  AutoLockSection__AutoLockSection(local_58,(CriticalSection *)_RENDERLAYER_SECTION);
  lVar1 = *(long *)(arg1 + 0x3c8);
  lVar2 = *(long *)(arg2 + 0x3c8);
  pRVar3 = *(RenderLayer **)(arg1 + 0x3d0);
  pRVar4 = *(RenderLayer **)(arg2 + 0x3d0);
                    /* try { // try from 005989cb to 00598a94 has its CatchHandler @ 00598dfc */
  RemoveLayer(arg1);
  RemoveLayer(arg2);
  if (pRVar3 != arg2) {
    if (pRVar4 == arg1) {
                    /* try { // try from 00598b6b to 00598c7d has its CatchHandler @ 00598dfc */
      RemoveLayer(arg2);
      AutoLockSection__AutoLockSection(local_48,(CriticalSection *)_RENDERLAYER_SECTION);
      if (pRVar3 == (RenderLayer *)0x0) {
        if (pHeadLayer != (RenderLayer *)0x0) {
          *(RenderLayer **)(pHeadLayer + 0x3d0) = arg2;
        }
        bVar5 = pLastLayer == (RenderLayer *)0x0;
        *(RenderLayer **)(arg2 + 0x3c8) = pHeadLayer;
        pHeadLayer = arg2;
        *(uint64_t *)(arg2 + 0x3d0) = 0;
        if (bVar5) goto LAB_00598da0;
      }
      else {
        lVar1 = *(long *)(pRVar3 + 0x3c8);
        *(RenderLayer **)(pRVar3 + 0x3c8) = arg2;
        *(RenderLayer **)(arg2 + 0x3d0) = pRVar3;
        *(long *)(arg2 + 0x3c8) = lVar1;
        if (lVar1 == 0) {
LAB_00598da0:
          pLastLayer = arg2;
        }
        else {
          *(RenderLayer **)(lVar1 + 0x3d0) = arg2;
        }
      }
      AutoLockSection__AutoLockSection__005b59d0(local_48);
      RemoveLayer(pRVar4);
      AutoLockSection__AutoLockSection(local_48,(CriticalSection *)_RENDERLAYER_SECTION);
      if (lVar2 == 0) {
        if (pLastLayer != (RenderLayer *)0x0) {
          *(RenderLayer **)(pLastLayer + 0x3c8) = pRVar4;
        }
        bVar5 = pHeadLayer != (RenderLayer *)0x0;
        *(RenderLayer **)(pRVar4 + 0x3d0) = pLastLayer;
        pLastLayer = pRVar4;
        *(uint64_t *)(pRVar4 + 0x3c8) = 0;
        if (bVar5) goto LAB_00598a8d;
      }
      else {
        lVar1 = *(long *)(lVar2 + 0x3d0);
        *(RenderLayer **)(lVar2 + 0x3d0) = pRVar4;
        *(long *)(pRVar4 + 0x3c8) = lVar2;
        *(long *)(pRVar4 + 0x3d0) = lVar1;
        if (lVar1 != 0) {
          *(RenderLayer **)(lVar1 + 0x3c8) = pRVar4;
          goto LAB_00598a8d;
        }
      }
      pHeadLayer = pRVar4;
      goto LAB_00598a8d;
    }
    RemoveLayer(arg1);
    AutoLockSection__AutoLockSection(local_48,(CriticalSection *)_RENDERLAYER_SECTION);
    if (pRVar4 == (RenderLayer *)0x0) {
      if (pHeadLayer != (RenderLayer *)0x0) {
        *(RenderLayer **)(pHeadLayer + 0x3d0) = arg1;
      }
      bVar5 = pLastLayer == (RenderLayer *)0x0;
      *(RenderLayer **)(arg1 + 0x3c8) = pHeadLayer;
      pHeadLayer = arg1;
      *(uint64_t *)(arg1 + 0x3d0) = 0;
      if (bVar5) goto LAB_00598b08;
    }
    else {
      lVar1 = *(long *)(pRVar4 + 0x3c8);
      *(RenderLayer **)(pRVar4 + 0x3c8) = arg1;
      *(RenderLayer **)(arg1 + 0x3d0) = pRVar4;
      *(long *)(arg1 + 0x3c8) = lVar1;
      if (lVar1 == 0) {
LAB_00598b08:
        pLastLayer = arg1;
      }
      else {
        *(RenderLayer **)(lVar1 + 0x3d0) = arg1;
      }
    }
    AutoLockSection__AutoLockSection__005b59d0(local_48);
    RemoveLayer(arg2);
    AutoLockSection__AutoLockSection(local_48,(CriticalSection *)_RENDERLAYER_SECTION);
    if (pRVar3 == (RenderLayer *)0x0) {
      if (pHeadLayer != (RenderLayer *)0x0) {
        *(RenderLayer **)(pHeadLayer + 0x3d0) = arg2;
      }
      bVar5 = pLastLayer != (RenderLayer *)0x0;
      *(RenderLayer **)(arg2 + 0x3c8) = pHeadLayer;
      pHeadLayer = arg2;
      *(uint64_t *)(arg2 + 0x3d0) = 0;
      if (bVar5) goto LAB_00598a8d;
    }
    else {
      lVar1 = *(long *)(pRVar3 + 0x3c8);
      *(RenderLayer **)(pRVar3 + 0x3c8) = arg2;
      *(RenderLayer **)(arg2 + 0x3d0) = pRVar3;
      *(long *)(arg2 + 0x3c8) = lVar1;
      if (lVar1 != 0) {
        *(RenderLayer **)(lVar1 + 0x3d0) = arg2;
        goto LAB_00598a8d;
      }
    }
    pLastLayer = arg2;
    goto LAB_00598a8d;
  }
  RemoveLayer(arg1);
  AutoLockSection__AutoLockSection(local_48,(CriticalSection *)_RENDERLAYER_SECTION);
  if (pRVar4 == (RenderLayer *)0x0) {
    if (pHeadLayer != (RenderLayer *)0x0) {
      *(RenderLayer **)(pHeadLayer + 0x3d0) = arg1;
    }
    bVar5 = pLastLayer == (RenderLayer *)0x0;
    *(RenderLayer **)(arg1 + 0x3c8) = pHeadLayer;
    pHeadLayer = arg1;
    *(uint64_t *)(arg1 + 0x3d0) = 0;
    if (bVar5) goto LAB_00598d00;
  }
  else {
    lVar2 = *(long *)(pRVar4 + 0x3c8);
    *(RenderLayer **)(pRVar4 + 0x3c8) = arg1;
    *(RenderLayer **)(arg1 + 0x3d0) = pRVar4;
    *(long *)(arg1 + 0x3c8) = lVar2;
    if (lVar2 == 0) {
LAB_00598d00:
      pLastLayer = arg1;
    }
    else {
      *(RenderLayer **)(lVar2 + 0x3d0) = arg1;
    }
  }
  AutoLockSection__AutoLockSection__005b59d0(local_48);
  RemoveLayer(pRVar3);
  AutoLockSection__AutoLockSection(local_48,(CriticalSection *)_RENDERLAYER_SECTION);
  if (lVar1 == 0) {
    if (pLastLayer != (RenderLayer *)0x0) {
      *(RenderLayer **)(pLastLayer + 0x3c8) = pRVar3;
    }
    bVar5 = pHeadLayer != (RenderLayer *)0x0;
    *(RenderLayer **)(pRVar3 + 0x3d0) = pLastLayer;
    pLastLayer = pRVar3;
    *(uint64_t *)(pRVar3 + 0x3c8) = 0;
    if (bVar5) goto LAB_00598a8d;
  }
  else {
    lVar2 = *(long *)(lVar1 + 0x3d0);
    *(RenderLayer **)(lVar1 + 0x3d0) = pRVar3;
    *(long *)(pRVar3 + 0x3c8) = lVar1;
    *(long *)(pRVar3 + 0x3d0) = lVar2;
    if (lVar2 != 0) {
      *(RenderLayer **)(lVar2 + 0x3c8) = pRVar3;
      goto LAB_00598a8d;
    }
  }
  pHeadLayer = pRVar3;
LAB_00598a8d:
  AutoLockSection__AutoLockSection__005b59d0(local_48);
  AutoLockSection__AutoLockSection__005b59d0(local_58);
  return;
}

/* ======================================================================
 * UpdateUI  (Ghidra `UpdateUI` @ 005a1f60)
 * Signature: uint8_t UpdateUI(void)
 * Calls: `CriticalSection__Lock`, `CriticalSection__Unlock`, `UIForm__Update`
 * Called by: `TEngine__Update`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* UpdateUI() */

void UpdateUI(void)

{
  UIForm *this;
  long *plVar1;
  long *plVar2;
  
  for (this = *(UIForm **)(__UILayer + 8); this != (UIForm *)0x0; this = *(UIForm **)(this + 8)) {
    UIForm__Update(this);
  }
  CriticalSection__Lock((CriticalSection *)(__UILayer + 0x3d8),1);
  plVar1 = *(long **)(__UILayer + 8);
  while (plVar2 = plVar1, plVar1 != (long *)0x0) {
    while (plVar1 = (long *)plVar2[1], *(int *)((long)plVar2 + 0x8c) != 1) {
      plVar2 = plVar1;
      if (plVar1 == (long *)0x0) goto LAB_005a1fe7;
    }
    (**(code **)(*plVar2 + 8))();
  }
LAB_005a1fe7:
  CriticalSection__Unlock((CriticalSection *)(__UILayer + 0x3d8));
  return;
}

/* ======================================================================
 * UIDROPDOWN_MakeSelection  (Ghidra `UIDROPDOWN_MakeSelection` @ 005a2ba0)
 * Signature: uint8_t __stdcall UIDROPDOWN_MakeSelection(void * arg1)
 * Calls: `UILabel__setText`
 * Called by: `UIDropDown__AddDropdownElement`
 */
/* UIDROPDOWN_MakeSelection(void*) */

void UIDROPDOWN_MakeSelection(void *arg1)

{
  long lVar1;
  
  lVar1 = *(long *)((long)arg1 + 0x10);
  *(void **)(lVar1 + 0x528) = arg1;
  UILabel__setText(*(UILabel **)(lVar1 + 0x60),
                     *(wchar_t **)(*(long *)(*(long *)(*(long *)arg1 + 0x50) + 0x40) + 0x28));
  lVar1 = *(long *)((long)arg1 + 0x10);
  if (*(int *)(lVar1 + 0x520) == 1) {
    (**(code **)(**(long **)(lVar1 + 0x58) + 0x48))();
  }
  else {
    (**(code **)(**(long **)(lVar1 + 0x58) + 0x40))();
  }
  *(uint *)(lVar1 + 0x520) = (uint)(*(int *)(lVar1 + 0x520) == 0);
  return;
}

/* ======================================================================
 * UIDROPDOWN_ActivateDropDown  (Ghidra `UIDROPDOWN_ActivateDropDown` @ 005a2c00)
 * Signature: uint8_t __stdcall UIDROPDOWN_ActivateDropDown(void * arg1)
 * Calls: (none)
 * Called by: `UIDropDown__UIDropDown__005a2c90`
 */
/* UIDROPDOWN_ActivateDropDown(void*) */

void UIDROPDOWN_ActivateDropDown(void *arg1)

{
  if (*(int *)((long)arg1 + 0x520) == 1) {
    (**(code **)(**(long **)((long)arg1 + 0x58) + 0x48))();
  }
  else {
    (**(code **)(**(long **)((long)arg1 + 0x58) + 0x40))();
  }
  *(uint *)((long)arg1 + 0x520) = (uint)(*(int *)((long)arg1 + 0x520) == 0);
  return;
}

/* ======================================================================
 * UIMessageBoxClose2  (Ghidra `UIMessageBoxClose2` @ 005a3350)
 * Signature: uint8_t __stdcall UIMessageBoxClose2(void * arg1)
 * Calls: (none)
 * Called by: `ShowUIMessageBox`, `UIMessageBox__UIMessageBox__005a4280`
 */
/* UIMessageBoxClose2(void*) */

void UIMessageBoxClose2(void *arg1)

{
  long *plVar1;
  
  for (plVar1 = *(long **)((long)arg1 + 0x68); plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2])
  {
    (**(code **)(*plVar1 + 0x48))(plVar1);
  }
  if ((*(int *)((long)arg1 + 0x90) == 1) && (*(code **)((long)arg1 + 0x60) != (code *)0x0)) {
    (**(code **)((long)arg1 + 0x60))(arg1);
  }
  *(uint32_t *)((long)arg1 + 0x90) = 0;
  *(uint64_t *)((long)arg1 + 0x98) = 0;
  *(uint32_t *)((long)arg1 + 0x8c) = 1;
  return;
}

/* ======================================================================
 * UIMessageBoxClose  (Ghidra `UIMessageBoxClose` @ 005a33c0)
 * Signature: uint8_t __stdcall UIMessageBoxClose(void * arg1)
 * Calls: (none)
 * Called by: `ShowUIMessageBox`, `UIMessageBox__UIMessageBox__005a4280`
 */
/* UIMessageBoxClose(void*) */

void UIMessageBoxClose(void *arg1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = *(long *)((long)arg1 + 0x30);
  for (plVar2 = *(long **)(lVar1 + 0x68); plVar2 != (long *)0x0; plVar2 = (long *)plVar2[2]) {
    (**(code **)(*plVar2 + 0x48))(plVar2);
  }
  if ((*(int *)(lVar1 + 0x90) == 1) && (*(code **)(lVar1 + 0x60) != (code *)0x0)) {
    (**(code **)(lVar1 + 0x60))(lVar1);
  }
  *(uint32_t *)(lVar1 + 0x90) = 0;
  *(uint64_t *)(lVar1 + 0x98) = 0;
  *(uint32_t *)(lVar1 + 0x8c) = 1;
  return;
}

/* ======================================================================
 * WriteLocalizationHeader  (Ghidra `WriteLocalizationHeader` @ 005b6f90)
 * Signature: uint8_t __stdcall WriteLocalizationHeader(char * arg1)
 * Calls: (none)
 * Called by: (none)
 */
/* WriteLocalizationHeader(char const*) */

void WriteLocalizationHeader(char *arg1)

{
  return;
}

/* ======================================================================
 * ThrowFatalError  (Ghidra `ThrowFatalError` @ 005b7370)
 * Signature: uint8_t __stdcall ThrowFatalError(char * arg1)
 * Calls: `exit`, `fflush`, `fprintf`
 * Called by: (none)
 */
/* Error__ThrowFatalError(char const*) */

void Error__ThrowFatalError(char *arg1)

{
  fprintf(stderr,"\n\n\nFatal Error: %s\n\n",arg1);
  fflush(stderr);
                    /* WARNING: Subroutine does not return */
  exit(1);
}

/* ======================================================================
 * ThrowNonFatalError  (Ghidra `ThrowNonFatalError` @ 005b73a0)
 * Signature: uint8_t __stdcall ThrowNonFatalError(char * arg1)
 * Calls: `fflush`, `fprintf`
 * Called by: (none)
 */
/* Error__ThrowNonFatalError(char const*) */

void Error__ThrowNonFatalError(char *arg1)

{
  fprintf(stderr,"ERROR: %s\n",arg1);
  fflush(stderr);
  return;
}

/* ======================================================================
 * ThrowFileNotFoundError  (Ghidra `ThrowFileNotFoundError` @ 005b73d0)
 * Signature: uint8_t __stdcall ThrowFileNotFoundError(char * arg1)
 * Calls: `exit`, `fflush`, `printf`
 * Called by: (none)
 */
/* Error__ThrowFileNotFoundError(char const*) */

void Error__ThrowFileNotFoundError(char *arg1)

{
  printf("Could not find: %s\n",arg1);
  fflush(stdout);
                    /* WARNING: Subroutine does not return */
  exit(1);
}

/* ======================================================================
 * System_Startup  (Ghidra `System_Startup` @ 005b8330)
 * Signature: uint8_t System_Startup(void)
 * Calls: (none)
 * Called by: `TEngine__TEngine`
 */
void System_Startup(void)

{
  return;
}

/* ======================================================================
 * System_ShutDown  (Ghidra `System_ShutDown` @ 005b8340)
 * Signature: uint8_t System_ShutDown(void)
 * Calls: (none)
 * Called by: `TEngine__TEngine__00583e20`
 */
void System_ShutDown(void)

{
  return;
}

/* ======================================================================
 * System_Update  (Ghidra `System_Update` @ 005b8350)
 * Signature: uint8_t System_Update(void)
 * Calls: (none)
 * Called by: `TEngineLoadThreadFunc`, `TEngine__Update`
 */
void System_Update(void)

{
  return;
}

/* ======================================================================
 * System_IsTrialMode  (Ghidra `System_IsTrialMode` @ 005b8360)
 * Signature: uint8_t System_IsTrialMode(void)
 * Calls: (none)
 * Called by: `GMeatHUD__ShowReplayHUD`, `GSMBChapterData__DetermineGlitchOccurance`, `GSMBChapterData__LoadData`, `GSMBChapterData__ReloadData`, `GSMBChapterData__SaveData`, `GSMBChapterData__SaveLevelData`, `GSMBChapterData__SaveWarpzoneStats`, `GSMBMenu__ClickReplayPauseOption`, `GSMBMenu__ClickTitleOption`, `GSMBMenu__DecrementPauseOption` (+21 more)
 */
uint32_t System_IsTrialMode(void)

{
  return bTrial;
}

/* ======================================================================
 * System_IsUserOnline  (Ghidra `System_IsUserOnline` @ 005b8370)
 * Signature: uint8_t System_IsUserOnline(void)
 * Calls: (none)
 * Called by: `GSMBMenu__ShowInternetsSelection`, `GSMBMenu__ShowLeaderboardMenu`
 */
uint64_t System_IsUserOnline(void)

{
  return 1;
}

/* ======================================================================
 * System_IsOnline  (Ghidra `System_IsOnline` @ 005b8380)
 * Signature: uint8_t System_IsOnline(void)
 * Calls: (none)
 * Called by: `GSMBMenu__ShowLeaderboardMenu`
 */
uint64_t System_IsOnline(void)

{
  return 1;
}

/* ======================================================================
 * System_GetLanguage  (Ghidra `System_GetLanguage` @ 005b83a0)
 * Signature: uint8_t System_GetLanguage(void)
 * Calls: `SteamApps`, `getenv`, `strcmp`, `strcpy`, `strlen`
 * Called by: `CreateUIResources`, `LoadLocalizationDatabase`
 */
char System_GetLanguage(void)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  byte *__dest;
  size_t sVar5;
  long lVar6;
  uint8_t *puVar7;
  byte *pbVar8;
  char *pcVar9;
  byte *pbVar10;
  uint8_t uVar11;
  bool bVar12;
  bool bVar13;
  uint8_t uVar14;
  bool bVar15;
  byte bVar16;
  uint64_t uStack_20;
  
  bVar16 = 0;
  puVar7 = &stack0xffffffffffffffe8;
  uStack_20 = 0x5b83ac;
  lVar3 = SteamApps();
  uVar11 = 0;
  uVar14 = lVar3 == 0;
  if ((bool)uVar14) {
    uStack_20 = 0x5b84ea;
    pcVar9 = getenv("LANG");
    if (pcVar9 == (char *)0x0) {
      return '\x01';
    }
    uStack_20 = 0x5b8503;
    sVar5 = strlen(pcVar9);
    lVar3 = -(sVar5 + 0x1f & 0xfffffffffffffff0);
    puVar7 = &stack0xffffffffffffffe8 + lVar3;
    __dest = &stack0xfffffffffffffff0 + lVar3;
    *(uint64_t *)((long)&uStack_20 + lVar3) = 0x5b8522;
    strcpy((char *)__dest,pcVar9);
    bVar1 = *__dest;
    bVar15 = false;
    bVar12 = bVar1 == 0;
    pbVar8 = __dest;
    if (!bVar12) {
      while (bVar1 = bVar1 + 0x9f, bVar1 < 0x1a) {
        bVar1 = pbVar8[1];
        bVar15 = false;
        bVar12 = true;
        if (bVar1 == 0) goto LAB_005b8558;
        pbVar8 = pbVar8 + 1;
      }
      bVar12 = bVar1 == 0x19;
      bVar15 = bVar1 < 0x19;
      *pbVar8 = 0;
    }
LAB_005b8558:
    lVar6 = 3;
    pbVar8 = __dest;
    pbVar10 = (byte *)0x5c3033;
    do {
      if (lVar6 == 0) break;
      lVar6 = lVar6 + -1;
      bVar15 = *pbVar8 < *pbVar10;
      bVar12 = *pbVar8 == *pbVar10;
      pbVar8 = pbVar8 + (ulong)bVar16 * -2 + 1;
      pbVar10 = pbVar10 + (ulong)bVar16 * -2 + 1;
    } while (bVar12);
    bVar13 = (!bVar15 && !bVar12) < bVar15;
    if ((!bVar15 && !bVar12) == bVar15) {
      return '\x01';
    }
    lVar6 = 3;
    bVar12 = false;
    pbVar8 = __dest;
    pbVar10 = &DAT_005c35e8 /* R:u32=1375756650 */;
    do {
      if (lVar6 == 0) break;
      lVar6 = lVar6 + -1;
      bVar13 = *pbVar8 < *pbVar10;
      bVar12 = *pbVar8 == *pbVar10;
      pbVar8 = pbVar8 + (ulong)bVar16 * -2 + 1;
      pbVar10 = pbVar10 + (ulong)bVar16 * -2 + 1;
    } while (bVar12);
    bVar15 = (!bVar13 && !bVar12) < bVar13;
    if ((!bVar13 && !bVar12) == bVar13) {
      return '\x02';
    }
    lVar6 = 3;
    bVar12 = false;
    pbVar8 = __dest;
    pbVar10 = (byte *)0x5c611a;
    do {
      if (lVar6 == 0) break;
      lVar6 = lVar6 + -1;
      bVar15 = *pbVar8 < *pbVar10;
      bVar12 = *pbVar8 == *pbVar10;
      pbVar8 = pbVar8 + (ulong)bVar16 * -2 + 1;
      pbVar10 = pbVar10 + (ulong)bVar16 * -2 + 1;
    } while (bVar12);
    bVar13 = (!bVar15 && !bVar12) < bVar15;
    if ((!bVar15 && !bVar12) == bVar15) {
      return '\x03';
    }
    lVar6 = 3;
    bVar12 = false;
    pbVar8 = __dest;
    pbVar10 = &DAT_005de711 /* R:u32=1795191398 */;
    do {
      if (lVar6 == 0) break;
      lVar6 = lVar6 + -1;
      bVar13 = *pbVar8 < *pbVar10;
      bVar12 = *pbVar8 == *pbVar10;
      pbVar8 = pbVar8 + (ulong)bVar16 * -2 + 1;
      pbVar10 = pbVar10 + (ulong)bVar16 * -2 + 1;
    } while (bVar12);
    bVar15 = (!bVar13 && !bVar12) < bVar13;
    if ((!bVar13 && !bVar12) == bVar13) {
      return '\x04';
    }
    lVar6 = 3;
    bVar12 = false;
    pbVar8 = __dest;
    pbVar10 = (byte *)0x5c6c34;
    do {
      if (lVar6 == 0) break;
      lVar6 = lVar6 + -1;
      bVar15 = *pbVar8 < *pbVar10;
      bVar12 = *pbVar8 == *pbVar10;
      pbVar8 = pbVar8 + (ulong)bVar16 * -2 + 1;
      pbVar10 = pbVar10 + (ulong)bVar16 * -2 + 1;
    } while (bVar12);
    bVar13 = (!bVar15 && !bVar12) < bVar15;
    if ((!bVar15 && !bVar12) == bVar15) {
      return '\x05';
    }
    lVar6 = 3;
    bVar12 = false;
    pbVar8 = __dest;
    pbVar10 = &DAT_005c3660 /* R:4.1760095535343874e-41f */;
    do {
      if (lVar6 == 0) break;
      lVar6 = lVar6 + -1;
      bVar13 = *pbVar8 < *pbVar10;
      bVar12 = *pbVar8 == *pbVar10;
      pbVar8 = pbVar8 + (ulong)bVar16 * -2 + 1;
      pbVar10 = pbVar10 + (ulong)bVar16 * -2 + 1;
    } while (bVar12);
    if ((!bVar13 && !bVar12) == bVar13) {
      return '\x06';
    }
    *(uint64_t *)((long)&uStack_20 + lVar3) = 0x5b8622;
    iVar2 = strcmp((char *)__dest,"ko");
    if (iVar2 == 0) {
      return '\a';
    }
    *(uint64_t *)((long)&uStack_20 + lVar3) = 0x5b863e;
    iVar2 = strcmp((char *)__dest,"zh");
    if (iVar2 == 0) {
      return '\n';
    }
    *(uint64_t *)((long)&uStack_20 + lVar3) = 0x5b865a;
    iVar2 = strcmp((char *)__dest,"pt");
    if (iVar2 == 0) {
      return '\t';
    }
    pcVar9 = "ru";
  }
  else {
    uStack_20 = 0x5b83ba;
    plVar4 = (long *)SteamApps();
    uStack_20 = 0x5b83c3;
    __dest = (byte *)(**(code **)(*plVar4 + 0x20))(plVar4);
    lVar3 = 8;
    pbVar8 = __dest;
    pbVar10 = (byte *)"english";
    do {
      if (lVar3 == 0) break;
      lVar3 = lVar3 + -1;
      uVar11 = *pbVar8 < *pbVar10;
      uVar14 = *pbVar8 == *pbVar10;
      pbVar8 = pbVar8 + (ulong)bVar16 * -2 + 1;
      pbVar10 = pbVar10 + (ulong)bVar16 * -2 + 1;
    } while ((bool)uVar14);
    bVar12 = (!(bool)uVar11 && !(bool)uVar14) < (byte)uVar11;
    if ((!(bool)uVar11 && !(bool)uVar14) == (bool)uVar11) {
      return '\x01';
    }
    lVar3 = 9;
    bVar15 = false;
    pbVar8 = __dest;
    pbVar10 = (byte *)"japanese";
    do {
      if (lVar3 == 0) break;
      lVar3 = lVar3 + -1;
      bVar12 = *pbVar8 < *pbVar10;
      bVar15 = *pbVar8 == *pbVar10;
      pbVar8 = pbVar8 + (ulong)bVar16 * -2 + 1;
      pbVar10 = pbVar10 + (ulong)bVar16 * -2 + 1;
    } while (bVar15);
    bVar13 = (!bVar12 && !bVar15) < bVar12;
    if ((!bVar12 && !bVar15) == bVar12) {
      return '\x02';
    }
    lVar3 = 7;
    bVar12 = false;
    pbVar8 = __dest;
    pbVar10 = (byte *)"german";
    do {
      if (lVar3 == 0) break;
      lVar3 = lVar3 + -1;
      bVar13 = *pbVar8 < *pbVar10;
      bVar12 = *pbVar8 == *pbVar10;
      pbVar8 = pbVar8 + (ulong)bVar16 * -2 + 1;
      pbVar10 = pbVar10 + (ulong)bVar16 * -2 + 1;
    } while (bVar12);
    bVar15 = (!bVar13 && !bVar12) < bVar13;
    if ((!bVar13 && !bVar12) == bVar13) {
      return '\x03';
    }
    lVar3 = 7;
    bVar12 = false;
    pbVar8 = __dest;
    pbVar10 = (byte *)"french";
    do {
      if (lVar3 == 0) break;
      lVar3 = lVar3 + -1;
      bVar15 = *pbVar8 < *pbVar10;
      bVar12 = *pbVar8 == *pbVar10;
      pbVar8 = pbVar8 + (ulong)bVar16 * -2 + 1;
      pbVar10 = pbVar10 + (ulong)bVar16 * -2 + 1;
    } while (bVar12);
    bVar13 = (!bVar15 && !bVar12) < bVar15;
    if ((!bVar15 && !bVar12) == bVar15) {
      return '\x04';
    }
    lVar3 = 8;
    bVar12 = false;
    pbVar8 = __dest;
    pbVar10 = (byte *)"spanish";
    do {
      if (lVar3 == 0) break;
      lVar3 = lVar3 + -1;
      bVar13 = *pbVar8 < *pbVar10;
      bVar12 = *pbVar8 == *pbVar10;
      pbVar8 = pbVar8 + (ulong)bVar16 * -2 + 1;
      pbVar10 = pbVar10 + (ulong)bVar16 * -2 + 1;
    } while (bVar12);
    bVar15 = (!bVar13 && !bVar12) < bVar13;
    if ((!bVar13 && !bVar12) == bVar13) {
      return '\x05';
    }
    lVar3 = 8;
    bVar12 = false;
    pbVar8 = __dest;
    pbVar10 = (byte *)"italian";
    do {
      if (lVar3 == 0) break;
      lVar3 = lVar3 + -1;
      bVar15 = *pbVar8 < *pbVar10;
      bVar12 = *pbVar8 == *pbVar10;
      pbVar8 = pbVar8 + (ulong)bVar16 * -2 + 1;
      pbVar10 = pbVar10 + (ulong)bVar16 * -2 + 1;
    } while (bVar12);
    bVar13 = (!bVar15 && !bVar12) < bVar15;
    if ((!bVar15 && !bVar12) == bVar15) {
      return '\x06';
    }
    lVar3 = 7;
    bVar12 = false;
    pbVar8 = __dest;
    pbVar10 = (byte *)"korean";
    do {
      if (lVar3 == 0) break;
      lVar3 = lVar3 + -1;
      bVar13 = *pbVar8 < *pbVar10;
      bVar12 = *pbVar8 == *pbVar10;
      pbVar8 = pbVar8 + (ulong)bVar16 * -2 + 1;
      pbVar10 = pbVar10 + (ulong)bVar16 * -2 + 1;
    } while (bVar12);
    if ((!bVar13 && !bVar12) == bVar13) {
      return '\a';
    }
    uStack_20 = 0x5b84a8;
    iVar2 = strcmp((char *)__dest,"chinese");
    if (iVar2 == 0) {
      return '\n';
    }
    uStack_20 = 0x5b84c4;
    iVar2 = strcmp((char *)__dest,"portuguese");
    pcVar9 = "russian";
    if (iVar2 == 0) {
      return '\t';
    }
  }
  *(uint64_t *)(puVar7 + -8) = 0x5b8676;
  iVar2 = strcmp((char *)__dest,pcVar9);
  return (-(iVar2 == 0) & 0xbU) + 1;
}

/* ======================================================================
 * System_GetRegion  (Ghidra `System_GetRegion` @ 005b86a0)
 * Signature: uint8_t System_GetRegion(void)
 * Calls: (none)
 * Called by: `FontEmitter__FillVertexBuffer`
 */
uint64_t System_GetRegion(void)

{
  return 0;
}

/* ======================================================================
 * System_ISOSUIShowing  (Ghidra `System_ISOSUIShowing` @ 005b86b0)
 * Signature: uint8_t System_ISOSUIShowing(void)
 * Calls: (none)
 * Called by: `GSMBCutSceneManager__Render`, `GSMBCutSceneManager__RenderLoadingOverlay`, `GSMBCutSceneManager__RenderSavingOverlay`
 */
uint64_t System_ISOSUIShowing(void)

{
  return 0;
}

/* ======================================================================
 * System_CheckTrialMask  (Ghidra `System_CheckTrialMask` @ 005b86c0)
 * Signature: uint8_t System_CheckTrialMask(void)
 * Calls: (none)
 * Called by: `GSMBMenu__ShowStartMenu`, `GSMBMenu__ShowTitleMenu`, `GSuperMeatBoy__Initialize__00516f60`
 */
void System_CheckTrialMask(void)

{
  return;
}

/* ======================================================================
 * System_WasUserOnline  (Ghidra `System_WasUserOnline` @ 005b86d0)
 * Signature: uint8_t System_WasUserOnline(void)
 * Calls: (none)
 * Called by: `Game_ConnectionChanged`
 */
uint64_t System_WasUserOnline(void)

{
  return 0;
}

/* ======================================================================
 * System_LastUserSignedIn  (Ghidra `System_LastUserSignedIn` @ 005b86e0)
 * Signature: uint8_t System_LastUserSignedIn(void)
 * Calls: (none)
 * Called by: `GSMBMenu__ShowStartMenu`
 */
uint64_t System_LastUserSignedIn(void)

{
  return 0;
}

/* ======================================================================
 * SuspendWorkerThread  (Ghidra `SuspendWorkerThread` @ 005b87f0)
 * Signature: uint8_t __stdcall SuspendWorkerThread(THREADHANDLESTRUCT * arg1)
 * Calls: (none)
 * Called by: (none)
 */
/* SuspendWorkerThread(THREADHANDLESTRUCT*) */

void SuspendWorkerThread(THREADHANDLESTRUCT *arg1)

{
  return;
}

/* ======================================================================
 * WaitForWorkerThread  (Ghidra `WaitForWorkerThread` @ 005b8810)
 * Signature: uint8_t __stdcall WaitForWorkerThread(THREADHANDLESTRUCT * arg1, uint arg2)
 * Calls: `System_GetTimeInMS`, `pthread_join`, `usleep`
 * Called by: (none)
 */
/* WaitForWorkerThread(THREADHANDLESTRUCT*, unsigned int) */

void WaitForWorkerThread(THREADHANDLESTRUCT *arg1,uint arg2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (arg2 == 0xffffffff) {
    if (arg1[9] == (THREADHANDLESTRUCT)0x0) {
      pthread_join(*(pthread_t *)arg1,(void **)0x0);
      arg1[9] = (THREADHANDLESTRUCT)0x1;
      return;
    }
  }
  else {
    iVar1 = System_GetTimeInMS();
    while( true ) {
      while (arg1[8] == (THREADHANDLESTRUCT)0x0) {
        if (arg1[9] == (THREADHANDLESTRUCT)0x0) {
          pthread_join(*(pthread_t *)arg1,(void **)0x0);
          arg1[9] = (THREADHANDLESTRUCT)0x1;
        }
      }
      iVar2 = System_GetTimeInMS();
      if (arg2 <= (uint)(iVar2 - iVar1)) break;
      uVar3 = arg2 - (iVar2 - iVar1);
      if (10 < uVar3) {
        uVar3 = 10;
      }
      if (uVar3 == 0) {
        return;
      }
      usleep(uVar3 * 1000);
    }
  }
  return;
}

/* ======================================================================
 * WaitForWorkerThreads  (Ghidra `WaitForWorkerThreads` @ 005b88d0)
 * Signature: uint8_t __stdcall WaitForWorkerThreads(THREADHANDLESTRUCT * * arg1, uint arg2, uint arg3)
 * Calls: `System_GetTimeInMS`, `pthread_join`, `usleep`
 * Called by: (none)
 */
/* WaitForWorkerThreads(THREADHANDLESTRUCT**, unsigned int, unsigned int) */

void WaitForWorkerThreads(THREADHANDLESTRUCT **arg1,uint arg2,uint arg3)

{
  THREADHANDLESTRUCT *pTVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  
  if (arg3 == 0xffffffff) {
    if (arg2 != 0) {
      lVar6 = 0;
      do {
        pTVar1 = arg1[lVar6];
        if (pTVar1[9] == (THREADHANDLESTRUCT)0x0) {
          pthread_join(*(pthread_t *)pTVar1,(void **)0x0);
          pTVar1[9] = (THREADHANDLESTRUCT)0x1;
        }
        lVar6 = lVar6 + 1;
      } while ((uint)lVar6 < arg2);
    }
  }
  else {
    iVar2 = System_GetTimeInMS();
    if (arg2 != 0) {
      uVar5 = 0;
      do {
        pTVar1 = arg1[uVar5];
        if (pTVar1[8] == (THREADHANDLESTRUCT)0x0) {
          if (pTVar1[9] == (THREADHANDLESTRUCT)0x0) {
            pthread_join(*(pthread_t *)pTVar1,(void **)0x0);
            arg1[uVar5][9] = (THREADHANDLESTRUCT)0x1;
          }
          uVar5 = (ulong)((int)uVar5 + 1);
        }
        else {
          iVar3 = System_GetTimeInMS();
          if (arg3 <= (uint)(iVar3 - iVar2)) {
            return;
          }
          uVar4 = arg3 - (iVar3 - iVar2);
          if (10 < uVar4) {
            uVar4 = 10;
          }
          if (uVar4 == 0) {
            return;
          }
          uVar5 = 0;
          usleep(uVar4 * 1000);
        }
      } while ((uint)uVar5 < arg2);
    }
  }
  return;
}

/* ======================================================================
 * UserAlertCopyText  (Ghidra `UserAlertCopyText` @ 005b9480)
 * Signature: uint8_t __stdcall UserAlertCopyText(wchar_t * arg1, wchar_t * arg2, uint arg3)
 * Calls: `memcpy`, `safe_wcslen`
 * Called by: (none)
 */
/* UserAlertCopyText(wchar_t*, wchar_t const*, unsigned int) */

void UserAlertCopyText(wchar_t *arg1,wchar_t *arg2,uint arg3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  size_t __n;
  
  __n = 0;
  if (arg2 != (wchar_t *)0x0) {
    uVar3 = (ulong)arg3;
    uVar2 = safe_wcslen(arg2);
    if (uVar2 < uVar3) {
      uVar1 = safe_wcslen(arg2);
      uVar3 = (ulong)uVar1;
    }
    __n = uVar3 << 2;
    if (arg2 != arg1) {
      memcpy(arg1,arg2,__n);
    }
  }
  *(uint32_t *)((long)arg1 + __n) = 0;
  return;
}

/* ======================================================================
 * Update  (Ghidra `Update` @ 005b9930)
 * Signature: uint8_t Update(void)
 * Calls: (none)
 * Called by: `EditorFormCharacter__Update`, `EditorFormNewLevel__Update`, `GSuperMeatBoy__Update`, `GSuperMeatBoy__Update__00516690`, `MeatBoyCharactor__Update`, `SMBCamera__Reset`, `TEngine__EngineRun`, `TEngine__Update`, `TweenBase_ColorTemplate_float__Update`
 */
void Update(void)

{
  if ((UserAlert__currInterrupt != 0) && (UserAlert__fnMessageBoxUpdate != (code *)0x0)) {
    (*UserAlert__fnMessageBoxUpdate)(0);
    if (DAT_00824bb0 /* R:1.018743983564142e-42f */ != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005b9960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_00824bb0 /* R:1.018743983564142e-42f */)(0);
      return;
    }
  }
  return;
}

/* ======================================================================
 * UserAlertCloseCurrent  (Ghidra `UserAlertCloseCurrent` @ 005b9a80)
 * Signature: uint8_t __stdcall UserAlertCloseCurrent(void * arg1)
 * Calls: `Game_DisableMessage`
 * Called by: `EditorFormChapterUpload__LoadLevelLibrary`, `EditorFormChapterUpload__UploadChapter`, `EditorForm_ChapterUploadFormOpen`, `EditorForm_UploadFormOk`, `EditorForm_UploadFormOpen`, `GSMBMenu__ClickPauseOption`, `GSMBMenu__ClickReplayPauseOption`, `GSMBMenu__ClickTitleOption`, `GSMBMenu__ShowBackToMapMessage`, `GSMBMenu__ShowBackToTitleMessage` (+23 more)
 */
/* UserAlertCloseCurrent(void*) */

void UserAlertCloseCurrent(void *arg1)

{
  if (DAT_00824be8 /* R:4.0283126953945516e-41f */ == 3) {
    UserAlert__currInterrupt = 0;
    Game_DisableMessage(1);
    if (DAT_00824ba8 /* R:8.396019878848574e-39f */ != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005b9ad3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_00824ba8 /* R:8.396019878848574e-39f */)(DAT_00824be0 /* R:7.763193492359487e-43f */);
      return;
    }
  }
  else if (DAT_00824be8 /* R:4.0283126953945516e-41f */ == 2) {
    DAT_00824be8 /* R:4.0283126953945516e-41f */ = 1;
  }
  return;
}

/* ======================================================================
 * Transformation3D  (Ghidra `Transformation3D` @ 005bc340)
 * Signature: uint8_t __stdcall Transformation3D(Matrix4x4 * arg1, FPUVector * arg2, TQuaternion * arg3, FPUVector * arg4)
 * Calls: `Multiply`
 * Called by: (none)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matrix4x4__Transformation3D(Matrix4x4*, FPUVector const*, TQuaternion const*, FPUVector const*)
    */

Matrix4x4 *
Matrix4x4__Transformation3D
          (Matrix4x4 *arg1,FPUVector *arg2,TQuaternion *arg3,FPUVector *arg4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint8_t local_98 [16];
  long local_88;
  ulong uStack_80;
  uint64_t local_78;
  ulong uStack_70;
  uint64_t local_68;
  long lStack_60;
  uint8_t local_58 [8];
  float fStack_50;
  uint32_t uStack_4c;
  uint64_t local_48;
  ulong uStack_40;
  uint64_t local_38;
  ulong uStack_30;
  uint64_t local_28;
  long lStack_20;
  
  if (arg2 == (FPUVector *)0x0) {
    local_98 = ZEXT416(DAT_005ded90 /* R:1.0f */);
    local_88 = _DAT_005c1910 /* R:0.0f */;
    uStack_80 = _UNK_005c1918;
    local_78 = _DAT_005deda0 /* R:0.0f */;
    uStack_70 = _UNK_005deda8;
    local_68 = _DAT_005c48c0 /* R:0.0f */;
    lStack_60 = _UNK_005c48c8;
  }
  else {
    local_68 = 0;
    local_98._0_4_ = *(uint32_t *)arg2;
    local_78 = 0;
    uStack_80 = 0;
    local_88 = (ulong)*(uint *)(arg2 + 4) << 0x20;
    local_98._0_8_ = local_98._0_8_ & 0xffffffff;
    local_98._8_8_ = 0;
    lStack_60 = 0x3f80000000000000;
    uStack_70 = (ulong)*(uint *)(arg2 + 8);
  }
  if (arg3 == (TQuaternion *)0x0) {
    _local_58 = ZEXT416(DAT_005ded90 /* R:1.0f */);
    local_48 = _DAT_005c1910 /* R:0.0f */;
    uStack_40 = _UNK_005c1918;
    local_38 = _DAT_005deda0 /* R:0.0f */;
    uStack_30 = _UNK_005deda8;
    local_28 = _DAT_005c48c0 /* R:0.0f */;
    lStack_20 = _UNK_005c48c8;
  }
  else {
    fVar6 = *(float *)(arg3 + 8);
    local_28 = 0;
    fVar1 = *(float *)(arg3 + 4);
    fVar2 = *(float *)(arg3 + 0xc);
    fVar7 = fVar6 * fVar6 + fVar6 * fVar6;
    lStack_20 = (ulong)(uint)DAT_005be894 /* R:1.0f */ << 0x20;
    fVar5 = fVar1 * fVar1 + fVar1 * fVar1;
    fVar3 = *(float *)arg3;
    fVar9 = fVar2 * fVar6 + fVar3 * fVar1;
    fVar4 = fVar3 * fVar1 - fVar2 * fVar6;
    local_58._4_4_ = fVar4 + fVar4;
    local_58._0_4_ = DAT_005be894 /* R:1.0f */ - (fVar7 + fVar5);
    fVar10 = fVar3 * fVar6 - fVar2 * fVar1;
    fVar4 = (float)((uint)(fVar3 * fVar3 + fVar3 * fVar3) ^ DAT_005be6f0 /* R:u32=2147483648 */);
    fVar8 = fVar2 * fVar1 + fVar3 * fVar6;
    uStack_30 = (ulong)(uint)((fVar4 - fVar5) + DAT_005be894 /* R:1.0f */);
    local_48 = CONCAT44((fVar4 - fVar7) + DAT_005be894 /* R:1.0f */,fVar9 + fVar9);
    fVar4 = fVar3 * fVar2 + fVar1 * fVar6;
    fStack_50 = fVar8 + fVar8;
    uStack_4c = 0;
    fVar6 = fVar1 * fVar6 - fVar3 * fVar2;
    local_38 = CONCAT44(fVar4 + fVar4,fVar10 + fVar10);
    uStack_40 = (ulong)(uint)(fVar6 + fVar6);
  }
  Multiply(arg1,(Matrix4x4 *)local_98,(Matrix4x4 *)local_58);
  if (arg4 != (FPUVector *)0x0) {
    *(uint32_t *)(arg1 + 0xc) = *(uint32_t *)arg4;
    *(uint32_t *)(arg1 + 0x1c) = *(uint32_t *)(arg4 + 4);
    *(uint32_t *)(arg1 + 0x2c) = *(uint32_t *)(arg4 + 8);
  }
  return arg1;
}

/* ======================================================================
 * Transformation2DRot  (Ghidra `Transformation2DRot` @ 005bc5d0)
 * Signature: uint8_t __stdcall Transformation2DRot(Matrix4x4 * arg1, Vector2 * arg2, float * arg3, Vector2 * arg4)
 * Calls: `cos`, `sin`
 * Called by: (none)
 */
/* Matrix4x4__Transformation2DRot(Matrix4x4*, Vector2 const*, float const*, Vector2 const*) */

Matrix4x4 *
Matrix4x4__Transformation2DRot(Matrix4x4 *arg1,Vector2 *arg2,float *arg3,Vector2 *arg4)

{
  uint32_t uVar1;
  double dVar2;
  float fVar3;
  float local_3c;
  
  if (arg2 == (Vector2 *)0x0) {
    *(uint32_t *)(arg1 + 0x10) = 0;
    *(uint32_t *)(arg1 + 0x20) = 0;
    local_3c = 1.0;
    *(uint32_t *)arg1 = 0x3f800000;
    *(uint32_t *)(arg1 + 0x30) = 0;
    *(uint32_t *)(arg1 + 4) = 0;
    *(uint32_t *)(arg1 + 0x14) = 0x3f800000;
    *(uint32_t *)(arg1 + 0x24) = 0;
    *(uint32_t *)(arg1 + 0x34) = 0;
    fVar3 = local_3c;
  }
  else {
    local_3c = *(float *)arg2;
    *(uint32_t *)(arg1 + 0x10) = 0;
    *(float *)arg1 = local_3c;
    *(uint32_t *)(arg1 + 0x20) = 0;
    *(uint32_t *)(arg1 + 0x30) = 0;
    *(uint32_t *)(arg1 + 4) = 0;
    fVar3 = *(float *)(arg2 + 4);
    *(float *)(arg1 + 0x14) = fVar3;
    *(uint32_t *)(arg1 + 0x24) = 0;
    *(uint32_t *)(arg1 + 0x34) = 0;
  }
  if (arg3 != (float *)0x0) {
    dVar2 = cos((double)*arg3);
    *(float *)arg1 = (float)(dVar2 * (double)local_3c);
    dVar2 = sin((double)*arg3);
    *(float *)(arg1 + 0x10) = (float)(dVar2 * (double)local_3c);
    dVar2 = sin((double)*arg3);
    *(float *)(arg1 + 4) = (float)(dVar2 * (double)(float)(DAT_005be6f0 /* R:u32=2147483648 */ ^ (uint)fVar3));
    dVar2 = cos((double)*arg3);
    *(float *)(arg1 + 0x14) = (float)(dVar2 * (double)fVar3);
  }
  if (arg4 == (Vector2 *)0x0) {
    *(uint32_t *)(arg1 + 0xc) = 0;
    *(uint32_t *)(arg1 + 0x1c) = 0;
    *(uint32_t *)(arg1 + 0x2c) = 0;
    *(uint32_t *)(arg1 + 0x3c) = 0x3f800000;
  }
  else {
    *(uint32_t *)(arg1 + 0xc) = *(uint32_t *)arg4;
    uVar1 = *(uint32_t *)(arg4 + 4);
    *(uint32_t *)(arg1 + 0x2c) = 0;
    *(uint32_t *)(arg1 + 0x3c) = 0x3f800000;
    *(uint32_t *)(arg1 + 0x1c) = uVar1;
  }
  *(uint32_t *)(arg1 + 8) = 0;
  *(uint32_t *)(arg1 + 0x18) = 0;
  *(uint32_t *)(arg1 + 0x28) = 0x3f800000;
  *(uint32_t *)(arg1 + 0x38) = 0;
  return arg1;
}

/* ======================================================================
 * Transformation2DSkew  (Ghidra `Transformation2DSkew` @ 005bc7a0)
 * Signature: uint8_t __stdcall Transformation2DSkew(Matrix4x4 * arg1, Vector2 * arg2, Vector2 * arg3, Vector2 * arg4)
 * Calls: `cos`, `sin`
 * Called by: (none)
 */
/* Matrix4x4__Transformation2DSkew(Matrix4x4*, Vector2 const*, Vector2 const*, Vector2 const*) */

Matrix4x4 *
Matrix4x4__Transformation2DSkew
          (Matrix4x4 *arg1,Vector2 *arg2,Vector2 *arg3,Vector2 *arg4)

{
  uint32_t uVar1;
  double dVar2;
  float fVar3;
  float local_3c;
  
  if (arg2 == (Vector2 *)0x0) {
    *(uint32_t *)(arg1 + 0x10) = 0;
    *(uint32_t *)(arg1 + 0x20) = 0;
    local_3c = 1.0;
    *(uint32_t *)arg1 = 0x3f800000;
    *(uint32_t *)(arg1 + 0x30) = 0;
    *(uint32_t *)(arg1 + 4) = 0;
    *(uint32_t *)(arg1 + 0x14) = 0x3f800000;
    *(uint32_t *)(arg1 + 0x24) = 0;
    *(uint32_t *)(arg1 + 0x34) = 0;
    fVar3 = local_3c;
  }
  else {
    local_3c = *(float *)arg2;
    *(uint32_t *)(arg1 + 0x10) = 0;
    *(float *)arg1 = local_3c;
    *(uint32_t *)(arg1 + 0x20) = 0;
    *(uint32_t *)(arg1 + 0x30) = 0;
    *(uint32_t *)(arg1 + 4) = 0;
    fVar3 = *(float *)(arg2 + 4);
    *(float *)(arg1 + 0x14) = fVar3;
    *(uint32_t *)(arg1 + 0x24) = 0;
    *(uint32_t *)(arg1 + 0x34) = 0;
  }
  if (arg3 != (Vector2 *)0x0) {
    dVar2 = cos((double)*(float *)(arg3 + 4));
    *(float *)arg1 = (float)(dVar2 * (double)local_3c);
    dVar2 = sin((double)*(float *)(arg3 + 4));
    *(float *)(arg1 + 0x10) = (float)(dVar2 * (double)local_3c);
    dVar2 = sin((double)*(float *)arg3);
    *(float *)(arg1 + 4) = (float)(dVar2 * (double)(float)(DAT_005be6f0 /* R:u32=2147483648 */ ^ (uint)fVar3));
    dVar2 = cos((double)*(float *)arg3);
    *(float *)(arg1 + 0x14) = (float)(dVar2 * (double)fVar3);
  }
  if (arg4 == (Vector2 *)0x0) {
    *(uint32_t *)(arg1 + 0xc) = 0;
    *(uint32_t *)(arg1 + 0x1c) = 0;
    *(uint32_t *)(arg1 + 0x2c) = 0;
    *(uint32_t *)(arg1 + 0x3c) = 0x3f800000;
  }
  else {
    *(uint32_t *)(arg1 + 0xc) = *(uint32_t *)arg4;
    uVar1 = *(uint32_t *)(arg4 + 4);
    *(uint32_t *)(arg1 + 0x2c) = 0;
    *(uint32_t *)(arg1 + 0x3c) = 0x3f800000;
    *(uint32_t *)(arg1 + 0x1c) = uVar1;
  }
  *(uint32_t *)(arg1 + 8) = 0;
  *(uint32_t *)(arg1 + 0x18) = 0;
  *(uint32_t *)(arg1 + 0x28) = 0x3f800000;
  *(uint32_t *)(arg1 + 0x38) = 0;
  return arg1;
}

/* ======================================================================
 * TransformVector2  (Ghidra `TransformVector2` @ 005bc970)
 * Signature: uint8_t __stdcall TransformVector2(Vector2 * arg1, Vector2 * arg2, Matrix4x4 * arg3, int arg4)
 * Calls: (none)
 * Called by: (none)
 */
/* Matrix4x4__TransformVector2(Vector2*, Vector2 const*, Matrix4x4 const*, int) */

void Matrix4x4__TransformVector2(Vector2 *arg1,Vector2 *arg2,Matrix4x4 *arg3,int arg4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = 0.0;
  fVar4 = 0.0;
  if (arg4 == 1) {
    fVar3 = *(float *)(arg3 + 0xc);
    fVar4 = DAT_005be894 /* R:1.0f */;
  }
  fVar1 = *(float *)(arg2 + 4);
  fVar2 = *(float *)arg2;
  *(float *)arg1 = *(float *)(arg3 + 4) * fVar1 + *(float *)arg3 * fVar2 + fVar3;
  *(float *)(arg1 + 4) =
       fVar1 * *(float *)(arg3 + 0x14) + fVar2 * *(float *)(arg3 + 0x10) +
       fVar4 * *(float *)(arg3 + 0x1c);
  return;
}

/* ======================================================================
 * TransformVector3  (Ghidra `TransformVector3` @ 005bc9e0)
 * Signature: uint8_t __stdcall TransformVector3(FPUVector * arg1, FPUVector * arg2, Matrix4x4 * arg3, int arg4)
 * Calls: (none)
 * Called by: (none)
 */
/* Matrix4x4__TransformVector3(FPUVector*, FPUVector const*, Matrix4x4 const*, int) */

void Matrix4x4__TransformVector3
               (FPUVector *arg1,FPUVector *arg2,Matrix4x4 *arg3,int arg4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (arg4 == 1) {
    fVar6 = *(float *)(arg3 + 0x3c);
    fVar4 = *(float *)(arg3 + 0xc);
    fVar5 = DAT_005be894 /* R:1.0f */;
  }
  else {
    fVar4 = 0.0;
    fVar6 = 0.0;
    fVar5 = 0.0;
  }
  fVar1 = *(float *)(arg2 + 4);
  fVar2 = *(float *)arg2;
  fVar3 = *(float *)(arg2 + 8);
  fVar6 = DAT_005be894 /* R:1.0f */ /
          (*(float *)(arg3 + 0x34) * fVar1 + *(float *)(arg3 + 0x30) * fVar2 +
           *(float *)(arg3 + 0x38) * fVar3 + fVar6);
  *(float *)arg1 =
       (*(float *)(arg3 + 4) * fVar1 + *(float *)arg3 * fVar2 +
        *(float *)(arg3 + 8) * fVar3 + fVar4) * fVar6;
  *(float *)(arg1 + 4) =
       (*(float *)(arg3 + 0x14) * fVar1 + *(float *)(arg3 + 0x10) * fVar2 +
        *(float *)(arg3 + 0x18) * fVar3 + *(float *)(arg3 + 0x1c) * fVar5) * fVar6;
  *(float *)(arg1 + 8) =
       (fVar1 * *(float *)(arg3 + 0x24) + fVar2 * *(float *)(arg3 + 0x20) +
        fVar3 * *(float *)(arg3 + 0x28) + fVar5 * *(float *)(arg3 + 0x2c)) * fVar6;
  return;
}

/* ======================================================================
 * Transpose  (Ghidra `Transpose` @ 005bce70)
 * Signature: uint8_t __stdcall Transpose(Matrix4x4 * arg1, Matrix4x4 * arg2)
 * Calls: (none)
 * Called by: (none)
 */
/* Matrix4x4__Transpose(Matrix4x4*, Matrix4x4 const*) */

void Matrix4x4__Transpose(Matrix4x4 *arg1,Matrix4x4 *arg2)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  uint32_t uVar5;
  uint32_t uVar6;
  uint32_t uVar7;
  uint32_t uVar8;
  uint32_t uVar9;
  uint32_t uVar10;
  uint32_t uVar11;
  uint32_t uVar12;
  uint32_t uVar13;
  uint32_t uVar14;
  uint32_t uVar15;
  
  uVar3 = *(uint32_t *)(arg2 + 4);
  uVar4 = *(uint32_t *)(arg2 + 8);
  uVar5 = *(uint32_t *)(arg2 + 0xc);
  uVar6 = *(uint32_t *)(arg2 + 0x10);
  uVar7 = *(uint32_t *)(arg2 + 0x14);
  uVar8 = *(uint32_t *)(arg2 + 0x18);
  uVar9 = *(uint32_t *)(arg2 + 0x1c);
  uVar10 = *(uint32_t *)(arg2 + 0x20);
  uVar11 = *(uint32_t *)(arg2 + 0x24);
  uVar1 = *(uint32_t *)(arg2 + 0x34);
  uVar12 = *(uint32_t *)(arg2 + 0x28);
  uVar13 = *(uint32_t *)(arg2 + 0x2c);
  uVar14 = *(uint32_t *)(arg2 + 0x30);
  uVar2 = *(uint32_t *)(arg2 + 0x38);
  uVar15 = *(uint32_t *)(arg2 + 0x3c);
  *(uint32_t *)arg1 = *(uint32_t *)arg2;
  *(uint32_t *)(arg1 + 0x10) = uVar3;
  *(uint32_t *)(arg1 + 0x20) = uVar4;
  *(uint32_t *)(arg1 + 0x30) = uVar5;
  *(uint32_t *)(arg1 + 4) = uVar6;
  *(uint32_t *)(arg1 + 0x14) = uVar7;
  *(uint32_t *)(arg1 + 0x24) = uVar8;
  *(uint32_t *)(arg1 + 0x34) = uVar9;
  *(uint32_t *)(arg1 + 8) = uVar10;
  *(uint32_t *)(arg1 + 0x18) = uVar11;
  *(uint32_t *)(arg1 + 0x28) = uVar12;
  *(uint32_t *)(arg1 + 0x1c) = uVar1;
  *(uint32_t *)(arg1 + 0x38) = uVar13;
  *(uint32_t *)(arg1 + 0xc) = uVar14;
  *(uint32_t *)(arg1 + 0x3c) = uVar15;
  *(uint32_t *)(arg1 + 0x2c) = uVar2;
  return;
}

/* ======================================================================
 * TexCoordinateMatrix  (Ghidra `TexCoordinateMatrix` @ 005bcf40)
 * Signature: uint8_t __stdcall TexCoordinateMatrix(Matrix4x4 * arg1)
 * Calls: (none)
 * Called by: (none)
 */
/* Matrix4x4__TexCoordinateMatrix(Matrix4x4*) */

Matrix4x4 * Matrix4x4__TexCoordinateMatrix(Matrix4x4 *arg1)

{
  *(uint32_t *)(arg1 + 8) = *(uint32_t *)(arg1 + 0xc);
  *(uint32_t *)(arg1 + 0x18) = *(uint32_t *)(arg1 + 0x1c);
  *(uint32_t *)(arg1 + 0x28) = *(uint32_t *)(arg1 + 0x2c);
  *(uint32_t *)(arg1 + 0x2c) = 0;
  *(uint32_t *)(arg1 + 0x1c) = 0;
  *(uint32_t *)(arg1 + 0xc) = 0;
  return arg1;
}

/* ======================================================================
 * Sprint  (Ghidra `Sprint` @ 005bd250)
 * Signature: uint8_t Sprint(void)
 * Calls: `vsprintf`
 * Called by: `EditorFormChapterUpload__EditorFormChapterUpload__004b8ec0`, `EditorFormChapterUpload__LoadLevelLibrary`, `EditorFormChapterUpload__Update`, `EditorForm_CharFormOpen`, `EditorForm_LayerPropsOpen`, `EditorForm_LoadFormOpen`, `EditorForm_NewFormOpen`, `EditorForm_ObjectPropertiesOpen`, `EditorForm_SaveFormOpen`, `EditorForm__Activate` (+54 more)
 */
void Sprint(uint64_t arg1,uint64_t arg2,uint64_t arg3,uint64_t arg4,
           uint64_t arg5,uint64_t arg6,uint64_t arg7,uint64_t arg8,char *arg9
           ,char *arg10,uint64_t arg11,uint64_t arg12,uint64_t arg13,
           uint64_t arg14)

{
  char in_AL;
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
    local_88 = arg1;
    local_78 = arg2;
    local_68 = arg3;
    local_58 = arg4;
    local_48 = arg5;
    local_38 = arg6;
    local_28 = arg7;
    local_18 = arg8;
  }
  local_c8 = &stack0x00000008;
  if (arg10 == (char *)0x0) {
    arg10 = strLargeString;
  }
  local_d0 = 0x10;
  local_c0 = local_b8;
  local_cc = 0x30;
  local_a8 = arg11;
  local_a0 = arg12;
  local_98 = arg13;
  local_90 = arg14;
  vsprintf(arg10,arg9,&local_d0);
  return;
}

/* ======================================================================
 * SprintArgList  (Ghidra `SprintArgList` @ 005bd300)
 * Signature: uint8_t SprintArgList(void)
 * Calls: `vsprintf`
 * Called by: `SetIndividualTextValue`, `SetTextFieldText`, `SetText__005763a0`, `SetText__00578630`, `TommunismEngineError__TommunismEngineError`
 */
void SprintArgList(char *arg1,char *arg2,__gnuc_va_list arg3)

{
  if (arg2 == (char *)0x0) {
    arg2 = strLargeString;
  }
  vsprintf(arg2,arg1,arg3);
  return;
}

/* ======================================================================
 * SprintW  (Ghidra `SprintW` @ 005bd320)
 * Signature: uint8_t SprintW(void)
 * Calls: `safe_wcslen`, `vswprintf`
 * Called by: `CreateGraphicsSettingsForm`, `GSMBMenu__ShowStartMenu`
 */
void SprintW(uint64_t arg1,uint64_t arg2,uint64_t arg3,uint64_t arg4,
            uint64_t arg5,uint64_t arg6,uint64_t arg7,uint64_t arg8,
            wchar_t *arg9,wchar_t *arg10,uint64_t arg11,uint64_t arg12,
            uint64_t arg13,uint64_t arg14)

{
  wchar_t *__format;
  wchar_t wVar1;
  wchar_t *pwVar2;
  char in_AL;
  long lVar3;
  wchar_t *pwVar4;
  uint64_t auStack_f0 [2];
  wchar_t local_e0 [2];
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
    local_98 = arg1;
    local_88 = arg2;
    local_78 = arg3;
    local_68 = arg4;
    local_58 = arg5;
    local_48 = arg6;
    local_38 = arg7;
    local_28 = arg8;
  }
  local_d8 = &stack0x00000008;
  local_e0[0] = L'\x10';
  local_e0[1] = 0x30;
  local_d0 = local_c8;
  auStack_f0[0] = 0x5bd3ac;
  local_b8 = arg11;
  local_b0 = arg12;
  local_a8 = arg13;
  local_a0 = arg14;
  lVar3 = safe_wcslen(arg9);
  lVar3 = -(lVar3 * 8 + 0x26U & 0xfffffffffffffff0);
  __format = (wchar_t *)((long)local_e0 + lVar3);
  pwVar2 = __format;
  while (pwVar4 = pwVar2, wVar1 = *arg9, wVar1 != L'\0') {
    arg9 = arg9 + 1;
    *pwVar4 = wVar1;
    pwVar2 = pwVar4 + 1;
    if ((wVar1 == L'%') && (*arg9 == L's')) {
      pwVar4[1] = L'l';
      pwVar2 = pwVar4 + 2;
    }
  }
  if (arg10 == (wchar_t *)0x0) {
    arg10 = strLargeStringW;
  }
  *pwVar4 = L'\0';
  *(uint64_t *)((long)auStack_f0 + lVar3) = 0x5bd425;
  vswprintf(arg10,0xffffff,__format,local_e0);
  return;
}

/* ======================================================================
 * SprintArgListW  (Ghidra `SprintArgListW` @ 005bd430)
 * Signature: uint8_t SprintArgListW(void)
 * Calls: `safe_wcslen`, `vswprintf`
 * Called by: `SetDynamicText`, `SetDynamicText__005a6240`, `SetText`, `SetText__00578560`
 */
void SprintArgListW(wchar_t *arg1,wchar_t *arg2,__gnuc_va_list arg3)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  long lVar3;
  wchar_t *pwVar4;
  uint64_t auStack_30 [2];
  
  auStack_30[0] = 0x5bd44b;
  lVar3 = safe_wcslen(arg1);
  lVar3 = -(lVar3 * 8 + 0x26U & 0xfffffffffffffff0);
  pwVar2 = (wchar_t *)(&stack0xffffffffffffffe0 + lVar3);
  while (pwVar4 = pwVar2, wVar1 = *arg1, wVar1 != L'\0') {
    arg1 = arg1 + 1;
    *pwVar4 = wVar1;
    pwVar2 = pwVar4 + 1;
    if ((wVar1 == L'%') && (*arg1 == L's')) {
      pwVar4[1] = L'l';
      pwVar2 = pwVar4 + 2;
    }
  }
  if (arg2 == (wchar_t *)0x0) {
    arg2 = strLargeStringW;
  }
  *pwVar4 = L'\0';
  *(uint64_t *)((long)auStack_30 + lVar3) = 0x5bd4c1;
  vswprintf(arg2,0xffffff,(wchar_t *)(&stack0xffffffffffffffe0 + lVar3),arg3);
  return;
}

/* ======================================================================
 * StringToFloat  (Ghidra `StringToFloat` @ 005bd4d0)
 * Signature: uint8_t StringToFloat(void)
 * Calls: `strtod`
 * Called by: `CreateSMBPaletteResources`, `LoadBossDataFromBlock`, `LoadLevelDataFromBlock`, `ModelLoader__ModelLoader__005942a0`, `SQLResultSet__GetFLOAT`
 */
uint64_t StringToFloat(char *arg1)

{
  double dVar1;
  
  dVar1 = strtod(arg1,(char **)0x0);
  return CONCAT44((float)dVar1,(float)dVar1);
}

/* ======================================================================
 * StringToInt  (Ghidra `StringToInt` @ 005bd4f0)
 * Signature: uint8_t StringToInt(void)
 * Calls: `strtol`
 * Called by: `CreateSMBPaletteResources`, `FormatValueIntoJoystickButton`, `GSMBMenu__ExtractChapterAndLevelFromSelectedLevel`, `GSMBMenu__GetCurrLevelName`, `GSuperMeatBoy__GSuperMeatBoy__00514290`, `LoadControlConfig`, `LoadLevelDataFromBlock`, `ModelLoader__ModelLoader__005942a0`, `SMBChapter__LoadChapter`, `SMBPalette__SMBPalette__004f3ca0` (+1 more)
 */
void StringToInt(char *arg1)

{
  strtol(arg1,(char **)0x0,10);
  return;
}

/* ======================================================================
 * StringToFloatW  (Ghidra `StringToFloatW` @ 005bd510)
 * Signature: uint8_t StringToFloatW(void)
 * Calls: `wcstof`
 * Called by: `ApplyAnimalProps`, `ApplyLayerProperties`, `ApplyLayerPropertiesToAllLayers`, `ApplySetPieceProps`, `DeactivateAnimProps`, `DeactivateEffectProps`, `DeactivatePlayerProps`, `DeactivateWayPointProps`, `EditorForm_LayerPropsOk`, `EditorForm_ObjectPropertiesOk`
 */
void StringToFloatW(wchar_t *arg1)

{
  wcstof(arg1,(wchar_t **)0x0);
  return;
}

/* ======================================================================
 * StringToIntW  (Ghidra `StringToIntW` @ 005bd520)
 * Signature: uint8_t StringToIntW(void)
 * Calls: `wcstol`
 * Called by: `ApplyLayerProperties`, `ApplyLayerPropertiesToAllLayers`, `ApplyLightProperties`, `ApplySetPieceProps`, `EditorForm_LayerPropsOk`, `EditorForm_NewFormOk`, `EditorForm_ObjectPropertiesOk`, `SMB_LEVEL_PROPS_Submit`, `SMB_NEW_LEVEL_Submit`
 */
void StringToIntW(wchar_t *arg1)

{
  wcstol(arg1,(wchar_t **)0x0,10);
  return;
}
