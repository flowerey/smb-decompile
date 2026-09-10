/* src/game/classes/TKeyboard.c — 9 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "TKeyboard.h"

/* ======================================================================
 * TKeyboard__TKeyboard  (Ghidra `TKeyboard` @ 0058bf10)
 * Signature: uint8_t __thiscall TKeyboard(TKeyboard * self)
 * Class: TKeyboard
 * Calls: `iptRegisterKeyboard`
 * Called by: `TInput__TInput__0058adc0`
 */
/* TKeyboard__TKeyboard() */

void __thiscall TKeyboard__TKeyboard(TKeyboard *self)

{
  TKeyboard *pTVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  bool bVar6;
  byte bVar7;
  ulong uVar5;

  bVar7 = 0;
  pTVar1 = self + 0x10;
  do {
    *(uint8_t (*)[16])pTVar1 = (uint8_t[16])0x0;
    *(uint8_t (*)[16])(pTVar1 + 0x10) = (uint8_t[16])0x0;
    *(uint8_t (*)[16])(pTVar1 + 0x20) = (uint8_t[16])0x0;
    pTVar1 = pTVar1 + 0x30;
  } while (pTVar1 != self + 0xc10);
  bVar6 = Keyboard != (TKeyboard *)0x0;
  *(uint32_t *)(self + 0xc10) = 0;
  *(uint64_t *)(self + 0x2c18) = 0;
  if (bVar6) {
    Error__ThrowFatalError("A Keyboard has already been created, only support for 1 keyboard");
  }
  pTVar1 = self + 0xc18;
  uVar5 = 0x1000;
  iVar3 = 0x1000;
  bVar6 = ((ulong)pTVar1 & 1) != 0;
  if (bVar6) {
    pTVar1 = self + 0xc19;
    self[0xc18] = (TKeyboard)0x0;
    uVar5 = 0xfff;
    iVar3 = 0xfff;
  }
  if (((ulong)pTVar1 & 2) == 0) {
    uVar4 = (uint)uVar5;
  } else {
    *(uint16_t *)pTVar1 = 0;
    pTVar1 = pTVar1 + 2;
    uVar4 = iVar3 - 2;
    uVar5 = (ulong)uVar4;
  }
  if (((ulong)pTVar1 & 4) != 0) {
    *(uint32_t *)pTVar1 = 0;
    uVar5 = (ulong)(uVar4 - 4);
    pTVar1 = pTVar1 + 4;
  }
  for (uVar2 = uVar5 >> 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(uint64_t *)pTVar1 = 0;
    pTVar1 = pTVar1 + (ulong)bVar7 * -0x10 + 8;
  }
  if ((uVar5 & 4) != 0) {
    *(uint32_t *)pTVar1 = 0;
    pTVar1 = pTVar1 + 4;
  }
  if ((uVar5 & 2) != 0) {
    *(uint16_t *)pTVar1 = 0;
    pTVar1 = pTVar1 + 2;
  }
  if (bVar6) {
    *pTVar1 = (TKeyboard)0x0;
  }
  iptRegisterKeyboard(self);
  Keyboard = self;
  return;
}

/* ======================================================================
 * TKeyboard__TKeyboard__0058c000  (Ghidra `~TKeyboard` @ 0058c000)
 * Signature: uint8_t __thiscall ~TKeyboard(TKeyboard * self)
 * Class: TKeyboard
 * Calls: `iptUnRegisterKeyboard`
 * Called by: `TInput__TInput`
 */
/* TKeyboard__TKeyboard__0058c000() */

void __thiscall TKeyboard__TKeyboard__0058c000(TKeyboard *self)

{
  iptUnRegisterKeyboard();
  Keyboard = 0;
  return;
}

/* ======================================================================
 * TKeyboard__AddKeyCallback  (Ghidra `AddKeyCallback` @ 0058c020)
 * Signature: uint8_t __thiscall AddKeyCallback(TKeyboard * self, tagKeyboardKey arg1, _func_void_tagButtonProps_ptr_void_ptr * arg2, void * arg3)
 * Class: TKeyboard
 * Calls: (none)
 * Called by: `GSMBMenu__HideCharMenu`, `GSMBMenu__HideStartMenu`, `GSMBMenu__HideTitleMenu`, `GSMBMenu__RemoveControls`, `GSMBMenu__RemoveWorldMapControls`, `GSMBMenu__RestoreControls`, `GSMBMenu__RestoreStartGameControls`, `GSMBMenu__RestoreWorldMapControls`, `GSMBMenu__ShowCharMenu`, `GSMBMenu__ShowPauseHelpAndOptions` (+61 more)
 */
/* TKeyboard__AddKeyCallback(tagKeyboardKey, void (*)(tagButtonProps const*, void*), void*) */

void __thiscall TKeyboard__AddKeyCallback(TKeyboard *self, int arg2, uint64_t arg3, uint64_t arg4)

{
  *(uint64_t *)(self + ((long)arg2 + 0xc1) * 0x10 + 8) = arg3;
  *(uint64_t *)(self + ((long)arg2 + 0xc1) * 0x10 + 0x10) = arg4;
  return;
}

/* ======================================================================
 * TKeyboard__AddAnyKeyCallback  (Ghidra `AddAnyKeyCallback` @ 0058c040)
 * Signature: uint8_t __thiscall AddAnyKeyCallback(TKeyboard * self, _func_void_tagButtonProps_ptr_void_ptr * arg1)
 * Class: TKeyboard
 * Calls: (none)
 * Called by: `SMBStartGame`
 */
/* TKeyboard__AddAnyKeyCallback(void (*)(tagButtonProps const*, void*)) */

void __thiscall TKeyboard__AddAnyKeyCallback(TKeyboard *self,
                                             _func_void_tagButtonProps_ptr_void_ptr *arg1)

{
  *(_func_void_tagButtonProps_ptr_void_ptr **)(self + 0x2c18) = arg1;
  return;
}

/* ======================================================================
 * TKeyboard__Lock  (Ghidra `Lock` @ 0058c050)
 * Signature: uint8_t __thiscall Lock(TKeyboard * self)
 * Class: TKeyboard
 * Calls: (none)
 * Called by: `UITextField__ClickOn`
 */
/* TKeyboard__Lock() */

bool __thiscall TKeyboard__Lock(TKeyboard *self)

{
  int iVar1;

  iVar1 = *(int *)(self + 0xc10);
  if (iVar1 == 0) {
    *(uint32_t *)(self + 0xc10) = 1;
  }
  return iVar1 == 0;
}

/* ======================================================================
 * TKeyboard__UnLock  (Ghidra `UnLock` @ 0058c070)
 * Signature: uint8_t __thiscall UnLock(TKeyboard * self)
 * Class: TKeyboard
 * Calls: (none)
 * Called by: `EditorFormChapterUpload__Update`, `EditorFormCharacter__Update`, `EditorFormNewLevel__Update`, `EditorForm__Update`, `UITextField__ClickOff`
 */
/* TKeyboard__UnLock() */

void __thiscall TKeyboard__UnLock(TKeyboard *self)

{
  *(uint32_t *)(self + 0xc10) = 0;
  return;
}

/* ======================================================================
 * TKeyboard__GetExclusiveState  (Ghidra `GetExclusiveState` @ 0058c080)
 * Signature: uint8_t __thiscall GetExclusiveState(TKeyboard * self, tagKeyboardKey arg1)
 * Class: TKeyboard
 * Calls: (none)
 * Called by: `AdjustSetPieceLayering`, `NudgeSetPiece`, `SMBEditor__EditSetPieces`, `SMBEditor__SwitchEditorMode`, `SMBEditor__Update`, `SelectTile`
 */
/* TKeyboard__GetExclusiveState(tagKeyboardKey) const */

uint32_t __thiscall TKeyboard__GetExclusiveState(TKeyboard *self, int arg2)

{
  if (*(int *)(self + 0xc10) != 0) {
    return 4;
  }
  return *(uint32_t *)(self + (long)arg2 * 0xc + 0x10);
}

/* ======================================================================
 * TKeyboard__BackupCallbacks  (Ghidra `BackupCallbacks` @ 0058c0b0)
 * Signature: uint8_t __thiscall BackupCallbacks(TKeyboard * self, InputCallback * * arg1)
 * Class: TKeyboard
 * Calls: `malloc`
 * Called by: `EditorForm_CharFormOpen`, `EditorForm_LayerPropsOpen`, `EditorForm_LoadFormOpen`, `EditorForm_NewFormOpen`, `EditorForm_ObjectPropertiesOpen`, `EditorForm_SaveFormOpen`, `EditorForm__Activate`, `GSuperMeatBoy__ShowPauseMenu`, `Game_CreateMessage`, `LoadLevelPress` (+5 more)
 */
/* WARNING: Type propagation algorithm not settling */
/* TKeyboard__BackupCallbacks(InputCallback**) */

void __thiscall TKeyboard__BackupCallbacks(TKeyboard *self, InputCallback **arg1)

{
  uint16_t uVar1;
  uint32_t uVar2;
  InputCallback *pIVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  uint uVar8;
  InputCallback *pIVar9;
  InputCallback *pIVar10;
  TKeyboard *pTVar11;
  TKeyboard *pTVar12;
  bool bVar13;
  byte bVar14;

  bVar14 = 0;
  if (arg1 == (InputCallback **)0x0) {
    pTVar11 = self + 0xc18;
    pTVar12 = self + 0x1c18;
    uVar4 = 0x1000;
    bVar13 = ((ulong)pTVar12 & 1) != 0;
    if (bVar13) {
      pTVar12 = self + 0x1c19;
      pTVar11 = self + 0xc19;
      self[0x1c18] = self[0xc18];
      uVar4 = 0xfff;
    }
    if (((ulong)pTVar12 & 2) != 0) {
      uVar1 = *(uint16_t *)pTVar11;
      uVar4 = (ulong)((int)uVar4 - 2);
      pTVar11 = pTVar11 + 2;
      *(uint16_t *)pTVar12 = uVar1;
      pTVar12 = pTVar12 + 2;
    }
    if (((ulong)pTVar12 & 4) != 0) {
      uVar2 = *(uint32_t *)pTVar11;
      uVar4 = (ulong)((int)uVar4 - 4);
      pTVar11 = pTVar11 + 4;
      *(uint32_t *)pTVar12 = uVar2;
      pTVar12 = pTVar12 + 4;
    }
    for (uVar6 = uVar4 >> 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(uint64_t *)pTVar12 = *(uint64_t *)pTVar11;
      pTVar11 = pTVar11 + 8;
      pTVar12 = pTVar12 + 8;
    }
    if ((uVar4 & 4) == 0) {
      lVar5 = 0;
    } else {
      *(uint32_t *)pTVar12 = *(uint32_t *)pTVar11;
      lVar5 = 4;
    }
    if ((uVar4 & 2) != 0) {
      *(uint16_t *)(pTVar12 + lVar5) = *(uint16_t *)(pTVar11 + lVar5);
      lVar5 = lVar5 + 2;
    }
    if (bVar13) {
      pTVar12[lVar5] = pTVar11[lVar5];
    }
  } else {
    pIVar3 = malloc(0x1000);
    if ((InputCallback *)(self + 0xc18) != pIVar3) {
      pIVar9 = (InputCallback *)(self + 0xc18);
      pIVar10 = pIVar3;
      for (lVar5 = 0x200; lVar5 != 0; lVar5 = lVar5 + -1) {
        *(uint64_t *)pIVar10 = *(uint64_t *)pIVar9;
        pIVar9 = pIVar9 + (ulong)bVar14 * -0x10 + 8;
        pIVar10 = pIVar10 + (ulong)bVar14 * -0x10 + 8;
      }
    }
    *arg1 = pIVar3;
  }
  bVar13 = ((ulong)(self + 0xc18) & 1) == 0;
  if (bVar13) {
    pTVar11 = self + 0xc18;
    uVar4 = 0x1000;
    iVar7 = 0x1000;
  } else {
    pTVar11 = self + 0xc19;
    self[0xc18] = (TKeyboard)0x0;
    uVar4 = 0xfff;
    iVar7 = 0xfff;
  }
  if (((ulong)pTVar11 & 2) == 0) {
    uVar8 = (uint)uVar4;
  } else {
    *(uint16_t *)pTVar11 = 0;
    pTVar11 = pTVar11 + 2;
    uVar8 = iVar7 - 2;
    uVar4 = (ulong)uVar8;
  }
  if (((ulong)pTVar11 & 4) != 0) {
    *(uint32_t *)pTVar11 = 0;
    uVar4 = (ulong)(uVar8 - 4);
    pTVar11 = pTVar11 + 4;
  }
  for (uVar6 = uVar4 >> 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(uint64_t *)pTVar11 = 0;
    pTVar11 = pTVar11 + (ulong)bVar14 * -0x10 + 8;
  }
  if ((uVar4 & 4) != 0) {
    *(uint32_t *)pTVar11 = 0;
    pTVar11 = pTVar11 + 4;
  }
  if ((uVar4 & 2) != 0) {
    *(uint16_t *)pTVar11 = 0;
    pTVar11 = pTVar11 + 2;
  }
  if (!bVar13) {
    *pTVar11 = (TKeyboard)0x0;
  }
  return;
}

/* ======================================================================
 * TKeyboard__RestoreCallbacks  (Ghidra `RestoreCallbacks` @ 0058c2b0)
 * Signature: uint8_t __thiscall RestoreCallbacks(TKeyboard * self, InputCallback * * arg1)
 * Class: TKeyboard
 * Calls: `free`
 * Called by: `EditorFormChapterUpload__Update`, `EditorFormCharacter__Update`, `EditorFormNewLevel__Update`, `EditorForm__Update`, `GSuperMeatBoy__Update__00516690`, `Game_DisableMessage`, `HidePauseMenu__00517640`, `SMBCharSwitch__DeActivate`, `SMBControlsMenu__DeActivate`, `SMBCreditMenu__DeActivate` (+6 more)
 */
/* TKeyboard__RestoreCallbacks(InputCallback**) */

void __thiscall TKeyboard__RestoreCallbacks(TKeyboard *self, InputCallback **arg1)

{
  InputCallback IVar1;
  uint16_t uVar2;
  uint32_t uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  TKeyboard *pTVar8;
  InputCallback *__ptr;
  TKeyboard *pTVar9;
  TKeyboard *pTVar10;
  InputCallback *pIVar11;
  bool bVar12;

  if ((arg1 == (InputCallback **)0x0) || (__ptr = *arg1, __ptr == (InputCallback *)0x0)) {
    pTVar10 = self + 0xc18;
    pTVar9 = self + 0x1c18;
    uVar7 = 0x1000;
    bVar12 = ((ulong)pTVar10 & 1) != 0;
    pTVar8 = pTVar9;
    if (bVar12) {
      pTVar10 = self + 0xc19;
      pTVar8 = self + 0x1c19;
      self[0xc18] = self[0x1c18];
      uVar7 = 0xfff;
    }
    if (((ulong)pTVar10 & 2) != 0) {
      uVar2 = *(uint16_t *)pTVar8;
      uVar7 = uVar7 - 2;
      pTVar8 = pTVar8 + 2;
      *(uint16_t *)pTVar10 = uVar2;
      pTVar10 = pTVar10 + 2;
    }
    if (((ulong)pTVar10 & 4) != 0) {
      uVar3 = *(uint32_t *)pTVar8;
      uVar7 = uVar7 - 4;
      pTVar8 = pTVar8 + 4;
      *(uint32_t *)pTVar10 = uVar3;
      pTVar10 = pTVar10 + 4;
    }
    for (uVar5 = (ulong)(uVar7 >> 3); uVar5 != 0; uVar5 = uVar5 - 1) {
      *(uint64_t *)pTVar10 = *(uint64_t *)pTVar8;
      pTVar8 = pTVar8 + 8;
      pTVar10 = pTVar10 + 8;
    }
    lVar4 = 0;
    if ((uVar7 & 4) != 0) {
      *(uint32_t *)pTVar10 = *(uint32_t *)pTVar8;
      lVar4 = 4;
    }
    if ((uVar7 & 2) != 0) {
      *(uint16_t *)(pTVar10 + lVar4) = *(uint16_t *)(pTVar8 + lVar4);
      lVar4 = lVar4 + 2;
    }
    if (bVar12) {
      pTVar10[lVar4] = pTVar8[lVar4];
    }
    bVar12 = ((ulong)pTVar9 & 1) != 0;
    uVar5 = 0x1000;
    if (bVar12) {
      self[0x1c18] = (TKeyboard)0x0;
      pTVar9 = self + 0x1c19;
      uVar5 = 0xfff;
    }
    if (((ulong)pTVar9 & 2) != 0) {
      *(uint16_t *)pTVar9 = 0;
      uVar5 = (ulong)((int)uVar5 - 2);
      pTVar9 = pTVar9 + 2;
    }
    if (((ulong)pTVar9 & 4) != 0) {
      *(uint32_t *)pTVar9 = 0;
      uVar5 = (ulong)((int)uVar5 - 4);
      pTVar9 = pTVar9 + 4;
    }
    for (uVar6 = uVar5 >> 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(uint64_t *)pTVar9 = 0;
      pTVar9 = pTVar9 + 8;
    }
    if ((uVar5 & 4) != 0) {
      *(uint32_t *)pTVar9 = 0;
      pTVar9 = pTVar9 + 4;
    }
    if ((uVar5 & 2) != 0) {
      *(uint16_t *)pTVar9 = 0;
      pTVar9 = pTVar9 + 2;
    }
    if (bVar12) {
      *pTVar9 = (TKeyboard)0x0;
      return;
    }
  } else {
    pIVar11 = (InputCallback *)(self + 0xc18);
    if (__ptr != pIVar11) {
      bVar12 = ((ulong)pIVar11 & 1) != 0;
      uVar7 = 0x1000;
      if (bVar12) {
        IVar1 = *__ptr;
        pIVar11 = (InputCallback *)(self + 0xc19);
        __ptr = __ptr + 1;
        *(InputCallback *)(self + 0xc18) = IVar1;
        uVar7 = 0xfff;
      }
      if (((ulong)pIVar11 & 2) != 0) {
        uVar2 = *(uint16_t *)__ptr;
        uVar7 = uVar7 - 2;
        __ptr = __ptr + 2;
        *(uint16_t *)pIVar11 = uVar2;
        pIVar11 = pIVar11 + 2;
      }
      if (((ulong)pIVar11 & 4) != 0) {
        uVar3 = *(uint32_t *)__ptr;
        uVar7 = uVar7 - 4;
        __ptr = __ptr + 4;
        *(uint32_t *)pIVar11 = uVar3;
        pIVar11 = pIVar11 + 4;
      }
      lVar4 = 0;
      for (uVar5 = (ulong)(uVar7 >> 3); uVar5 != 0; uVar5 = uVar5 - 1) {
        *(uint64_t *)pIVar11 = *(uint64_t *)__ptr;
        __ptr = __ptr + 8;
        pIVar11 = pIVar11 + 8;
      }
      if ((uVar7 & 4) != 0) {
        *(uint32_t *)pIVar11 = *(uint32_t *)__ptr;
        lVar4 = 4;
      }
      if ((uVar7 & 2) != 0) {
        *(uint16_t *)(pIVar11 + lVar4) = *(uint16_t *)(__ptr + lVar4);
        lVar4 = lVar4 + 2;
      }
      if (bVar12) {
        pIVar11[lVar4] = __ptr[lVar4];
      }
      __ptr = *arg1;
    }
    free(__ptr);
    *arg1 = (InputCallback *)0x0;
  }
  return;
}
