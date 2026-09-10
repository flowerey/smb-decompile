/* src/game/classes/Joystick.c — 8 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "Joystick.h"

/* ======================================================================
 * Joystick__Joystick  (Ghidra `Joystick` @ 0058af10)
 * Signature: uint8_t __thiscall Joystick(Joystick * self)
 * Class: Joystick
 * Calls: `iptRegisterJoystick`
 * Called by: `iptCreateDevices`
 */
/* WARNING: Type propagation algorithm not settling */
/* Joystick__Joystick() */

void __thiscall Joystick__Joystick(Joystick *self)

{
  ulong uVar1;
  Joystick *pJVar2;
  int iVar3;
  uint uVar4;
  bool bVar6;
  ulong uVar5;

  pJVar2 = self + 8;
  *(uint32_t *)self = 0;
  bVar6 = ((ulong)pJVar2 & 1) != 0;
  *(uint32_t *)(self + 0xc) = 0;
  *(uint32_t *)(self + 0x10) = 0;
  *(uint32_t *)(self + 0x14) = 0;
  *(uint32_t *)(self + 0x18) = 0;
  uVar5 = 0xf0;
  iVar3 = 0xf0;
  *(uint32_t *)(self + 0x1c) = 0;
  *(uint32_t *)(self + 0x20) = 0;
  *(uint32_t *)(self + 0x24) = 0;
  *(uint32_t *)(self + 0x28) = 0;
  *(uint8_t (*)[16])(self + 0x2c) = (uint8_t[16])0x0;
  *(uint32_t *)(self + 0xf8) = 0;
  *(uint32_t *)(self + 0xfc) = 0;
  *(uint8_t (*)[16])(self + 0x3c) = (uint8_t[16])0x0;
  *(uint8_t (*)[16])(self + 0x4c) = (uint8_t[16])0x0;
  *(uint8_t (*)[16])(self + 0x5c) = (uint8_t[16])0x0;
  *(uint8_t (*)[16])(self + 0x6c) = (uint8_t[16])0x0;
  *(uint8_t (*)[16])(self + 0x7c) = (uint8_t[16])0x0;
  *(uint8_t (*)[16])(self + 0x8c) = (uint8_t[16])0x0;
  *(uint8_t (*)[16])(self + 0x9c) = (uint8_t[16])0x0;
  *(uint8_t (*)[16])(self + 0xac) = (uint8_t[16])0x0;
  *(uint8_t (*)[16])(self + 0xbc) = (uint8_t[16])0x0;
  *(uint8_t (*)[16])(self + 0xcc) = (uint8_t[16])0x0;
  *(uint8_t (*)[16])(self + 0xdc) = (uint8_t[16])0x0;
  *(uint64_t *)(self + 0x300) = 0;
  if (bVar6) {
    pJVar2 = self + 9;
    self[8] = (Joystick)0x0;
    uVar5 = 0xef;
    iVar3 = 0xef;
  }
  if (((ulong)pJVar2 & 2) == 0) {
    uVar4 = (uint)uVar5;
  } else {
    *(uint16_t *)pJVar2 = 0;
    pJVar2 = (Joystick *)((long)pJVar2 + 2);
    uVar4 = iVar3 - 2;
    uVar5 = (ulong)uVar4;
  }
  if (((ulong)pJVar2 & 4) != 0) {
    *(uint32_t *)pJVar2 = 0;
    uVar5 = (ulong)(uVar4 - 4);
    pJVar2 = pJVar2 + 4;
  }
  for (uVar1 = uVar5 >> 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(uint64_t *)pJVar2 = 0;
    pJVar2 = pJVar2 + 8;
  }
  if ((uVar5 & 4) != 0) {
    *(uint32_t *)pJVar2 = 0;
    pJVar2 = pJVar2 + 4;
  }
  if ((uVar5 & 2) != 0) {
    *(uint16_t *)pJVar2 = 0;
    pJVar2 = pJVar2 + 2;
  }
  if (bVar6) {
    *pJVar2 = (Joystick)0x0;
  }
  pJVar2 = self + 0x100;
  uVar5 = 0xc0;
  iVar3 = 0xc0;
  bVar6 = ((ulong)pJVar2 & 1) != 0;
  if (bVar6) {
    pJVar2 = self + 0x101;
    self[0x100] = (Joystick)0x0;
    uVar5 = 0xbf;
    iVar3 = 0xbf;
  }
  if (((ulong)pJVar2 & 2) == 0) {
    uVar4 = (uint)uVar5;
  } else {
    *(uint16_t *)pJVar2 = 0;
    pJVar2 = (Joystick *)((long)pJVar2 + 2);
    uVar4 = iVar3 - 2;
    uVar5 = (ulong)uVar4;
  }
  if (((ulong)pJVar2 & 4) != 0) {
    *(uint32_t *)pJVar2 = 0;
    uVar5 = (ulong)(uVar4 - 4);
    pJVar2 = pJVar2 + 4;
  }
  for (uVar1 = uVar5 >> 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(uint64_t *)pJVar2 = 0;
    pJVar2 = pJVar2 + 8;
  }
  if ((uVar5 & 4) != 0) {
    *(uint32_t *)pJVar2 = 0;
    pJVar2 = pJVar2 + 4;
  }
  if ((uVar5 & 2) != 0) {
    *(uint16_t *)pJVar2 = 0;
    pJVar2 = pJVar2 + 2;
  }
  if (bVar6) {
    *pJVar2 = (Joystick)0x0;
  }
  pJVar2 = self + 0x280;
  uVar5 = 0x40;
  iVar3 = 0x40;
  bVar6 = ((ulong)pJVar2 & 1) != 0;
  if (bVar6) {
    pJVar2 = self + 0x281;
    self[0x280] = (Joystick)0x0;
    uVar5 = 0x3f;
    iVar3 = 0x3f;
  }
  if (((ulong)pJVar2 & 2) == 0) {
    uVar4 = (uint)uVar5;
  } else {
    *(uint16_t *)pJVar2 = 0;
    pJVar2 = pJVar2 + 2;
    uVar4 = iVar3 - 2;
    uVar5 = (ulong)uVar4;
  }
  if (((ulong)pJVar2 & 4) != 0) {
    *(uint32_t *)pJVar2 = 0;
    uVar5 = (ulong)(uVar4 - 4);
    pJVar2 = pJVar2 + 4;
  }
  for (uVar1 = uVar5 >> 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(uint64_t *)pJVar2 = 0;
    pJVar2 = pJVar2 + 8;
  }
  if ((uVar5 & 4) != 0) {
    *(uint32_t *)pJVar2 = 0;
    pJVar2 = pJVar2 + 4;
  }
  if ((uVar5 & 2) != 0) {
    *(uint16_t *)pJVar2 = 0;
    pJVar2 = pJVar2 + 2;
  }
  if (bVar6) {
    *pJVar2 = (Joystick)0x0;
  }
  pJVar2 = self + 0x2c0;
  uVar5 = 0x40;
  iVar3 = 0x40;
  bVar6 = ((ulong)pJVar2 & 1) != 0;
  if (bVar6) {
    pJVar2 = self + 0x2c1;
    self[0x2c0] = (Joystick)0x0;
    uVar5 = 0x3f;
    iVar3 = 0x3f;
  }
  if (((ulong)pJVar2 & 2) == 0) {
    uVar4 = (uint)uVar5;
  } else {
    *(uint16_t *)pJVar2 = 0;
    pJVar2 = pJVar2 + 2;
    uVar4 = iVar3 - 2;
    uVar5 = (ulong)uVar4;
  }
  if (((ulong)pJVar2 & 4) != 0) {
    *(uint32_t *)pJVar2 = 0;
    uVar5 = (ulong)(uVar4 - 4);
    pJVar2 = pJVar2 + 4;
  }
  for (uVar1 = uVar5 >> 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(uint64_t *)pJVar2 = 0;
    pJVar2 = pJVar2 + 8;
  }
  if ((uVar5 & 4) != 0) {
    *(uint32_t *)pJVar2 = 0;
    pJVar2 = pJVar2 + 4;
  }
  if ((uVar5 & 2) != 0) {
    *(uint16_t *)pJVar2 = 0;
    pJVar2 = pJVar2 + 2;
  }
  if (bVar6) {
    *pJVar2 = (Joystick)0x0;
  }
  pJVar2 = self + 0x1c0;
  uVar5 = 0xc0;
  iVar3 = 0xc0;
  bVar6 = ((ulong)pJVar2 & 1) != 0;
  if (bVar6) {
    pJVar2 = self + 0x1c1;
    self[0x1c0] = (Joystick)0x0;
    uVar5 = 0xbf;
    iVar3 = 0xbf;
  }
  if (((ulong)pJVar2 & 2) == 0) {
    uVar4 = (uint)uVar5;
  } else {
    *(uint16_t *)pJVar2 = 0;
    pJVar2 = pJVar2 + 2;
    uVar4 = iVar3 - 2;
    uVar5 = (ulong)uVar4;
  }
  if (((ulong)pJVar2 & 4) != 0) {
    *(uint32_t *)pJVar2 = 0;
    uVar5 = (ulong)(uVar4 - 4);
    pJVar2 = pJVar2 + 4;
  }
  for (uVar1 = uVar5 >> 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(uint64_t *)pJVar2 = 0;
    pJVar2 = pJVar2 + 8;
  }
  if ((uVar5 & 4) != 0) {
    *(uint32_t *)pJVar2 = 0;
    pJVar2 = pJVar2 + 4;
  }
  if ((uVar5 & 2) != 0) {
    *(uint16_t *)pJVar2 = 0;
    pJVar2 = pJVar2 + 2;
  }
  if (bVar6) {
    *pJVar2 = (Joystick)0x0;
  }
  iptRegisterJoystick(self);
  return;
}

/* ======================================================================
 * Joystick__Joystick__0058b340  (Ghidra `~Joystick` @ 0058b340)
 * Signature: uint8_t __thiscall ~Joystick(Joystick * self)
 * Class: Joystick
 * Calls: `iptUnRegisterJoystick`
 * Called by: `iptDestroyDevices`
 */
/* Joystick__Joystick__0058b340() */

void __thiscall Joystick__Joystick__0058b340(Joystick *self)

{
  iptUnRegisterJoystick(self, self + 8);
  return;
}

/* ======================================================================
 * Joystick__AddButtonCallback  (Ghidra `AddButtonCallback` @ 0058b360)
 * Signature: uint8_t __thiscall AddButtonCallback(Joystick * self, tagJoystickButtons arg1, _func_void_tagButtonProps_ptr_void_ptr * arg2, void * arg3)
 * Class: Joystick
 * Calls: (none)
 * Called by: `BackToTitleFromReplay`, `GSMBMenu__HideCharMenu`, `GSMBMenu__HideStartMenu`, `GSMBMenu__HideTitleMenu`, `GSMBMenu__RemoveControls`, `GSMBMenu__RemoveWorldMapControls`, `GSMBMenu__RestoreControls`, `GSMBMenu__RestoreStartGameControls`, `GSMBMenu__RestoreWorldMapControls`, `GSMBMenu__ShowCharMenu` (+54 more)
 */
/* Joystick__AddButtonCallback(tagJoystickButtons, void (*)(tagButtonProps const*, void*), void*) */

void __thiscall Joystick__AddButtonCallback(Joystick *self, int arg2, uint64_t arg3, uint64_t arg4)

{
  *(uint64_t *)(self + ((long)arg2 + 0x10) * 0x10) = arg3;
  *(uint64_t *)(self + ((long)arg2 + 0x10) * 0x10 + 8) = arg4;
  return;
}

/* ======================================================================
 * Joystick__AddPOVCallback  (Ghidra `AddPOVCallback` @ 0058b380)
 * Signature: uint8_t __thiscall AddPOVCallback(Joystick * self, tagJoystickPOV arg1, _func_void_tagButtonProps_ptr_void_ptr * arg2, void * arg3)
 * Class: Joystick
 * Calls: (none)
 * Called by: `GSMBMenu__HideCharMenu`, `GSMBMenu__HideTitleMenu`, `GSMBMenu__RemoveControls`, `GSMBMenu__RemoveWorldMapControls`, `GSMBMenu__RestoreControls`, `GSMBMenu__RestoreWorldMapControls`, `GSMBMenu__ShowCharMenu`, `GSMBMenu__ShowPauseHelpAndOptions`, `GSMBMenu__ShowPauseMenu`, `GSMBMenu__ShowTitleHelpAndOptions` (+20 more)
 */
/* Joystick__AddPOVCallback(tagJoystickPOV, void (*)(tagButtonProps const*, void*), void*) */

void __thiscall Joystick__AddPOVCallback(Joystick *self, int arg2, uint64_t arg3, uint64_t arg4)

{
  *(uint64_t *)(self + ((long)arg2 + 0x28) * 0x10) = arg3;
  *(uint64_t *)(self + ((long)arg2 + 0x28) * 0x10 + 8) = arg4;
  return;
}

/* ======================================================================
 * Joystick__AddAnyButtonCallback  (Ghidra `AddAnyButtonCallback` @ 0058b3a0)
 * Signature: uint8_t __thiscall AddAnyButtonCallback(Joystick * self, _func_void_tagButtonProps_ptr_void_ptr * arg1)
 * Class: Joystick
 * Calls: (none)
 * Called by: `SMBStartGame`
 */
/* Joystick__AddAnyButtonCallback(void (*)(tagButtonProps const*, void*)) */

void __thiscall Joystick__AddAnyButtonCallback(Joystick *self,
                                               _func_void_tagButtonProps_ptr_void_ptr *arg1)

{
  *(_func_void_tagButtonProps_ptr_void_ptr **)(self + 0x300) = arg1;
  return;
}

/* ======================================================================
 * Joystick__BackupCallbacks  (Ghidra `BackupCallbacks` @ 0058b3b0)
 * Signature: uint8_t __thiscall BackupCallbacks(Joystick * self, InputCallback * * arg1, InputCallback * * arg2)
 * Class: Joystick
 * Calls: `malloc`
 * Called by: `GSuperMeatBoy__ShowPauseMenu`, `Game_CreateMessage`, `SMBHowToPlayMenu__Activate`, `SMBPopupMenu__Activate`, `ShowPauseMenuPress`
 */
/* WARNING: Type propagation algorithm not settling */
/* Joystick__BackupCallbacks(InputCallback**, InputCallback**) */

void __thiscall Joystick__BackupCallbacks(Joystick *self, InputCallback **arg1,
                                          InputCallback **arg2)

{
  uint16_t uVar1;
  uint32_t uVar2;
  uint8_t uVar3;
  InputCallback *pIVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  uint uVar8;
  InputCallback *pIVar9;
  ulong uVar10;
  InputCallback *pIVar11;
  Joystick *pJVar12;
  Joystick *pJVar13;
  bool bVar14;
  byte bVar15;

  bVar15 = 0;
  if (arg1 == (InputCallback **)0x0) {
    pJVar12 = self + 0x100;
    pJVar13 = self + 0x1c0;
    uVar10 = 0xc0;
    bVar14 = ((ulong)pJVar13 & 1) != 0;
    if (bVar14) {
      pJVar13 = self + 0x1c1;
      pJVar12 = self + 0x101;
      self[0x1c0] = self[0x100];
      uVar10 = 0xbf;
    }
    if (((ulong)pJVar13 & 2) != 0) {
      uVar1 = *(uint16_t *)pJVar12;
      uVar10 = (ulong)((int)uVar10 - 2);
      pJVar12 = pJVar12 + 2;
      *(uint16_t *)pJVar13 = uVar1;
      pJVar13 = pJVar13 + 2;
    }
    if (((ulong)pJVar13 & 4) != 0) {
      uVar2 = *(uint32_t *)pJVar12;
      uVar10 = (ulong)((int)uVar10 - 4);
      pJVar12 = pJVar12 + 4;
      *(uint32_t *)pJVar13 = uVar2;
      pJVar13 = pJVar13 + 4;
    }
    lVar5 = 0;
    for (uVar6 = uVar10 >> 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(uint64_t *)pJVar13 = *(uint64_t *)pJVar12;
      pJVar12 = pJVar12 + 8;
      pJVar13 = pJVar13 + 8;
    }
    if ((uVar10 & 4) != 0) {
      *(uint32_t *)pJVar13 = *(uint32_t *)pJVar12;
      lVar5 = 4;
    }
    if ((uVar10 & 2) != 0) {
      *(uint16_t *)(pJVar13 + lVar5) = *(uint16_t *)(pJVar12 + lVar5);
      lVar5 = lVar5 + 2;
    }
    if (bVar14) {
      pJVar13[lVar5] = pJVar12[lVar5];
    }
  } else {
    pIVar4 = malloc(0xc0);
    if ((InputCallback *)(self + 0x100) != pIVar4) {
      pIVar9 = (InputCallback *)(self + 0x100);
      pIVar11 = pIVar4;
      for (lVar5 = 0x18; lVar5 != 0; lVar5 = lVar5 + -1) {
        *(uint64_t *)pIVar11 = *(uint64_t *)pIVar9;
        pIVar9 = pIVar9 + (ulong)bVar15 * -0x10 + 8;
        pIVar11 = pIVar11 + (ulong)bVar15 * -0x10 + 8;
      }
    }
    *arg1 = pIVar4;
  }
  pJVar12 = self + 0x100;
  if (arg2 == (InputCallback **)0x0) {
    *(uint64_t *)(self + 0x2c0) = *(uint64_t *)(self + 0x280);
    *(uint64_t *)(self + 0x2c8) = *(uint64_t *)(self + 0x288);
    *(uint64_t *)(self + 0x2d0) = *(uint64_t *)(self + 0x290);
    *(uint64_t *)(self + 0x2d8) = *(uint64_t *)(self + 0x298);
    *(uint64_t *)(self + 0x2e0) = *(uint64_t *)(self + 0x2a0);
    *(uint64_t *)(self + 0x2e8) = *(uint64_t *)(self + 0x2a8);
    *(uint64_t *)(self + 0x2f0) = *(uint64_t *)(self + 0x2b0);
    *(uint64_t *)(self + 0x2f8) = *(uint64_t *)(self + 0x2b8);
  } else {
    pIVar4 = malloc(0x40);
    if ((InputCallback *)(self + 0x280) != pIVar4) {
      *(uint64_t *)pIVar4 = *(uint64_t *)(self + 0x280);
      *(uint64_t *)(pIVar4 + 8) = *(uint64_t *)(self + 0x288);
      *(uint64_t *)(pIVar4 + 0x10) = *(uint64_t *)(self + 0x290);
      *(uint64_t *)(pIVar4 + 0x18) = *(uint64_t *)(self + 0x298);
      *(uint64_t *)(pIVar4 + 0x20) = *(uint64_t *)(self + 0x2a0);
      *(uint64_t *)(pIVar4 + 0x28) = *(uint64_t *)(self + 0x2a8);
      *(uint64_t *)(pIVar4 + 0x30) = *(uint64_t *)(self + 0x2b0);
      *(uint64_t *)(pIVar4 + 0x38) = *(uint64_t *)(self + 0x2b8);
    }
    *arg2 = pIVar4;
  }
  uVar3 = ((ulong)pJVar12 & 1) != 0;
  if ((bool)uVar3) {
    pJVar12 = self + 0x101;
    self[0x100] = (Joystick)0x0;
    uVar10 = 0xbf;
    iVar7 = 0xbf;
  } else {
    uVar10 = 0xc0;
    iVar7 = 0xc0;
  }
  if (((ulong)pJVar12 & 2) == 0) {
    uVar8 = (uint)uVar10;
  } else {
    *(uint16_t *)pJVar12 = 0;
    pJVar12 = pJVar12 + 2;
    uVar8 = iVar7 - 2;
    uVar10 = (ulong)uVar8;
  }
  if (((ulong)pJVar12 & 4) != 0) {
    *(uint32_t *)pJVar12 = 0;
    uVar10 = (ulong)(uVar8 - 4);
    pJVar12 = pJVar12 + 4;
  }
  pJVar13 = self + 0x280;
  for (uVar6 = uVar10 >> 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(uint64_t *)pJVar12 = 0;
    pJVar12 = pJVar12 + (ulong)bVar15 * -0x10 + 8;
  }
  if ((uVar10 & 4) != 0) {
    *(uint32_t *)pJVar12 = 0;
    pJVar12 = pJVar12 + 4;
  }
  if ((uVar10 & 2) != 0) {
    *(uint16_t *)pJVar12 = 0;
    pJVar12 = pJVar12 + 2;
  }
  if ((bool)uVar3) {
    *pJVar12 = (Joystick)0x0;
  }
  bVar14 = ((ulong)pJVar13 & 1) != 0;
  uVar10 = 0x40;
  iVar7 = 0x40;
  if (bVar14) {
    pJVar13 = self + 0x281;
    self[0x280] = (Joystick)0x0;
    uVar10 = 0x3f;
    iVar7 = 0x3f;
  }
  if (((ulong)pJVar13 & 2) == 0) {
    uVar8 = (uint)uVar10;
  } else {
    *(uint16_t *)pJVar13 = 0;
    pJVar13 = pJVar13 + 2;
    uVar8 = iVar7 - 2;
    uVar10 = (ulong)uVar8;
  }
  if (((ulong)pJVar13 & 4) != 0) {
    *(uint32_t *)pJVar13 = 0;
    uVar10 = (ulong)(uVar8 - 4);
    pJVar13 = pJVar13 + 4;
  }
  for (uVar6 = uVar10 >> 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(uint64_t *)pJVar13 = 0;
    pJVar13 = pJVar13 + (ulong)bVar15 * -0x10 + 8;
  }
  if ((uVar10 & 4) != 0) {
    *(uint32_t *)pJVar13 = 0;
    pJVar13 = pJVar13 + 4;
  }
  if ((uVar10 & 2) != 0) {
    *(uint16_t *)pJVar13 = 0;
    pJVar13 = pJVar13 + 2;
  }
  if (bVar14) {
    *pJVar13 = (Joystick)0x0;
  }
  return;
}

/* ======================================================================
 * Joystick__RestoreCallbacks  (Ghidra `RestoreCallbacks` @ 0058b710)
 * Signature: uint8_t __thiscall RestoreCallbacks(Joystick * self, InputCallback * * arg1, InputCallback * * arg2)
 * Class: Joystick
 * Calls: `free`
 * Called by: `GSuperMeatBoy__Update__00516690`, `Game_DisableMessage`, `HidePauseMenu__00517640`, `SMBCharSwitch__DeActivate`, `SMBControlsMenu__DeActivate`, `SMBCreditMenu__DeActivate`, `SMBHowToPlayMenu__DeActivate`, `SMBMoveOn__DeActivate`, `SMBPopupMenu__DeActivate`, `SMBStatisticsMenu__DeActivate` (+2 more)
 */
/* Joystick__RestoreCallbacks(InputCallback**, InputCallback**) */

void __thiscall Joystick__RestoreCallbacks(Joystick *self, InputCallback **arg1,
                                           InputCallback **arg2)

{
  InputCallback IVar1;
  uint16_t uVar2;
  uint32_t uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  InputCallback *pIVar8;
  InputCallback *pIVar9;
  Joystick *pJVar10;
  Joystick *pJVar11;
  Joystick *pJVar12;
  bool bVar13;
  byte bVar14;

  bVar14 = 0;
  if ((arg1 == (InputCallback **)0x0) || (pIVar9 = *arg1, pIVar9 == (InputCallback *)0x0)) {
    pJVar11 = self + 0x100;
    pJVar12 = self + 0x1c0;
    uVar4 = 0xc0;
    bVar13 = ((ulong)pJVar11 & 1) != 0;
    pJVar10 = pJVar12;
    if (bVar13) {
      pJVar11 = self + 0x101;
      pJVar10 = self + 0x1c1;
      self[0x100] = self[0x1c0];
      uVar4 = 0xbf;
    }
    if (((ulong)pJVar11 & 2) != 0) {
      uVar2 = *(uint16_t *)pJVar10;
      uVar4 = uVar4 - 2;
      pJVar10 = pJVar10 + 2;
      *(uint16_t *)pJVar11 = uVar2;
      pJVar11 = pJVar11 + 2;
    }
    if (((ulong)pJVar11 & 4) != 0) {
      uVar3 = *(uint32_t *)pJVar10;
      uVar4 = uVar4 - 4;
      pJVar10 = pJVar10 + 4;
      *(uint32_t *)pJVar11 = uVar3;
      pJVar11 = pJVar11 + 4;
    }
    for (uVar5 = (ulong)(uVar4 >> 3); uVar5 != 0; uVar5 = uVar5 - 1) {
      *(uint64_t *)pJVar11 = *(uint64_t *)pJVar10;
      pJVar10 = pJVar10 + 8;
      pJVar11 = pJVar11 + 8;
    }
    if ((uVar4 & 4) == 0) {
      lVar6 = 0;
    } else {
      *(uint32_t *)pJVar11 = *(uint32_t *)pJVar10;
      lVar6 = 4;
    }
    if ((uVar4 & 2) != 0) {
      *(uint16_t *)(pJVar11 + lVar6) = *(uint16_t *)(pJVar10 + lVar6);
      lVar6 = lVar6 + 2;
    }
    if (bVar13) {
      pJVar11[lVar6] = pJVar10[lVar6];
    }
    uVar5 = 0xc0;
    bVar13 = ((ulong)pJVar12 & 1) != 0;
    if (bVar13) {
      self[0x1c0] = (Joystick)0x0;
      pJVar12 = self + 0x1c1;
      uVar5 = 0xbf;
    }
    if (((ulong)pJVar12 & 2) != 0) {
      *(uint16_t *)pJVar12 = 0;
      uVar5 = (ulong)((int)uVar5 - 2);
      pJVar12 = pJVar12 + 2;
    }
    if (((ulong)pJVar12 & 4) != 0) {
      *(uint32_t *)pJVar12 = 0;
      uVar5 = (ulong)((int)uVar5 - 4);
      pJVar12 = pJVar12 + 4;
    }
    for (uVar7 = uVar5 >> 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(uint64_t *)pJVar12 = 0;
      pJVar12 = pJVar12 + 8;
    }
    if ((uVar5 & 4) != 0) {
      *(uint32_t *)pJVar12 = 0;
      pJVar12 = pJVar12 + 4;
    }
    if ((uVar5 & 2) != 0) {
      *(uint16_t *)pJVar12 = 0;
      pJVar12 = pJVar12 + 2;
    }
    if (bVar13) {
      *pJVar12 = (Joystick)0x0;
    }
  } else {
    pIVar8 = (InputCallback *)(self + 0x100);
    if (pIVar9 != pIVar8) {
      bVar13 = ((ulong)pIVar8 & 1) != 0;
      uVar4 = 0xc0;
      if (bVar13) {
        IVar1 = *pIVar9;
        pIVar8 = (InputCallback *)(self + 0x101);
        pIVar9 = pIVar9 + 1;
        *(InputCallback *)(self + 0x100) = IVar1;
        uVar4 = 0xbf;
      }
      if (((ulong)pIVar8 & 2) != 0) {
        uVar2 = *(uint16_t *)pIVar9;
        uVar4 = uVar4 - 2;
        pIVar9 = pIVar9 + 2;
        *(uint16_t *)pIVar8 = uVar2;
        pIVar8 = pIVar8 + 2;
      }
      if (((ulong)pIVar8 & 4) != 0) {
        uVar3 = *(uint32_t *)pIVar9;
        uVar4 = uVar4 - 4;
        pIVar9 = pIVar9 + 4;
        *(uint32_t *)pIVar8 = uVar3;
        pIVar8 = pIVar8 + 4;
      }
      for (uVar5 = (ulong)(uVar4 >> 3); uVar5 != 0; uVar5 = uVar5 - 1) {
        *(uint64_t *)pIVar8 = *(uint64_t *)pIVar9;
        pIVar9 = pIVar9 + 8;
        pIVar8 = pIVar8 + 8;
      }
      if ((uVar4 & 4) == 0) {
        lVar6 = 0;
      } else {
        *(uint32_t *)pIVar8 = *(uint32_t *)pIVar9;
        lVar6 = 4;
      }
      if ((uVar4 & 2) != 0) {
        *(uint16_t *)(pIVar8 + lVar6) = *(uint16_t *)(pIVar9 + lVar6);
        lVar6 = lVar6 + 2;
      }
      if (bVar13) {
        pIVar8[lVar6] = pIVar9[lVar6];
      }
      pIVar9 = *arg1;
    }
    free(pIVar9);
    *arg1 = (InputCallback *)0x0;
  }
  if ((arg2 == (InputCallback **)0x0) || (pIVar9 = *arg2, pIVar9 == (InputCallback *)0x0)) {
    pJVar11 = self + 0x2c0;
    bVar13 = ((ulong)pJVar11 & 1) != 0;
    *(uint64_t *)(self + 0x280) = *(uint64_t *)(self + 0x2c0);
    *(uint64_t *)(self + 0x288) = *(uint64_t *)(self + 0x2c8);
    *(uint64_t *)(self + 0x290) = *(uint64_t *)(self + 0x2d0);
    *(uint64_t *)(self + 0x298) = *(uint64_t *)(self + 0x2d8);
    *(uint64_t *)(self + 0x2a0) = *(uint64_t *)(self + 0x2e0);
    *(uint64_t *)(self + 0x2a8) = *(uint64_t *)(self + 0x2e8);
    *(uint64_t *)(self + 0x2b0) = *(uint64_t *)(self + 0x2f0);
    *(uint64_t *)(self + 0x2b8) = *(uint64_t *)(self + 0x2f8);
    uVar5 = 0x40;
    if (bVar13) {
      self[0x2c0] = (Joystick)0x0;
      pJVar11 = self + 0x2c1;
      uVar5 = 0x3f;
    }
    if (((ulong)pJVar11 & 2) != 0) {
      *(uint16_t *)pJVar11 = 0;
      uVar5 = (ulong)((int)uVar5 - 2);
      pJVar11 = pJVar11 + 2;
    }
    if (((ulong)pJVar11 & 4) != 0) {
      *(uint32_t *)pJVar11 = 0;
      uVar5 = (ulong)((int)uVar5 - 4);
      pJVar11 = pJVar11 + 4;
    }
    for (uVar7 = uVar5 >> 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(uint64_t *)pJVar11 = 0;
      pJVar11 = pJVar11 + (ulong)bVar14 * -0x10 + 8;
    }
    if ((uVar5 & 4) != 0) {
      *(uint32_t *)pJVar11 = 0;
      pJVar11 = pJVar11 + 4;
    }
    if ((uVar5 & 2) != 0) {
      *(uint16_t *)pJVar11 = 0;
      pJVar11 = pJVar11 + 2;
    }
    if (bVar13) {
      *pJVar11 = (Joystick)0x0;
      return;
    }
  } else {
    if (pIVar9 != (InputCallback *)(self + 0x280)) {
      *(uint64_t *)(self + 0x280) = *(uint64_t *)pIVar9;
      *(uint64_t *)(self + 0x288) = *(uint64_t *)(pIVar9 + 8);
      *(uint64_t *)(self + 0x290) = *(uint64_t *)(pIVar9 + 0x10);
      *(uint64_t *)(self + 0x298) = *(uint64_t *)(pIVar9 + 0x18);
      *(uint64_t *)(self + 0x2a0) = *(uint64_t *)(pIVar9 + 0x20);
      *(uint64_t *)(self + 0x2a8) = *(uint64_t *)(pIVar9 + 0x28);
      *(uint64_t *)(self + 0x2b0) = *(uint64_t *)(pIVar9 + 0x30);
      *(uint64_t *)(self + 0x2b8) = *(uint64_t *)(pIVar9 + 0x38);
      pIVar9 = *arg2;
    }
    free(pIVar9);
    *arg2 = (InputCallback *)0x0;
  }
  return;
}

/* ======================================================================
 * Joystick__Reset  (Ghidra `Reset` @ 0058bba0)
 * Signature: uint8_t __thiscall Reset(Joystick * self)
 * Class: Joystick
 * Calls: (none)
 * Called by: `GSuperMeatBoy__Update__00516690`, `SMBMenu_StartMenuStart`
 */
/* WARNING: Type propagation algorithm not settling */
/* Joystick__Reset() */

void __thiscall Joystick__Reset(Joystick *self)

{
  ulong uVar1;
  int iVar2;
  uint uVar3;
  Joystick *pJVar5;
  bool bVar6;
  ulong uVar4;

  pJVar5 = self + 8;
  uVar4 = 0xf0;
  iVar2 = 0xf0;
  bVar6 = ((ulong)pJVar5 & 1) != 0;
  if (bVar6) {
    pJVar5 = self + 9;
    self[8] = (Joystick)0x0;
    uVar4 = 0xef;
    iVar2 = 0xef;
  }
  if (((ulong)pJVar5 & 2) == 0) {
    uVar3 = (uint)uVar4;
  } else {
    *(uint16_t *)pJVar5 = 0;
    pJVar5 = (Joystick *)((long)pJVar5 + 2);
    uVar3 = iVar2 - 2;
    uVar4 = (ulong)uVar3;
  }
  if (((ulong)pJVar5 & 4) != 0) {
    *(uint32_t *)pJVar5 = 0;
    uVar4 = (ulong)(uVar3 - 4);
    pJVar5 = pJVar5 + 4;
  }
  for (uVar1 = uVar4 >> 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(uint64_t *)pJVar5 = 0;
    pJVar5 = pJVar5 + 8;
  }
  if ((uVar4 & 4) != 0) {
    *(uint32_t *)pJVar5 = 0;
    pJVar5 = pJVar5 + 4;
  }
  if ((uVar4 & 2) != 0) {
    *(uint16_t *)pJVar5 = 0;
    pJVar5 = pJVar5 + 2;
  }
  if (bVar6) {
    *pJVar5 = (Joystick)0x0;
  }
  pJVar5 = self + 0x100;
  uVar4 = 0xc0;
  iVar2 = 0xc0;
  bVar6 = ((ulong)pJVar5 & 1) != 0;
  if (bVar6) {
    pJVar5 = self + 0x101;
    self[0x100] = (Joystick)0x0;
    uVar4 = 0xbf;
    iVar2 = 0xbf;
  }
  if (((ulong)pJVar5 & 2) == 0) {
    uVar3 = (uint)uVar4;
  } else {
    *(uint16_t *)pJVar5 = 0;
    pJVar5 = (Joystick *)((long)pJVar5 + 2);
    uVar3 = iVar2 - 2;
    uVar4 = (ulong)uVar3;
  }
  if (((ulong)pJVar5 & 4) != 0) {
    *(uint32_t *)pJVar5 = 0;
    uVar4 = (ulong)(uVar3 - 4);
    pJVar5 = pJVar5 + 4;
  }
  for (uVar1 = uVar4 >> 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(uint64_t *)pJVar5 = 0;
    pJVar5 = pJVar5 + 8;
  }
  if ((uVar4 & 4) != 0) {
    *(uint32_t *)pJVar5 = 0;
    pJVar5 = pJVar5 + 4;
  }
  if ((uVar4 & 2) != 0) {
    *(uint16_t *)pJVar5 = 0;
    pJVar5 = pJVar5 + 2;
  }
  if (bVar6) {
    *pJVar5 = (Joystick)0x0;
  }
  pJVar5 = self + 0x280;
  uVar4 = 0x40;
  iVar2 = 0x40;
  bVar6 = ((ulong)pJVar5 & 1) != 0;
  if (bVar6) {
    pJVar5 = self + 0x281;
    self[0x280] = (Joystick)0x0;
    uVar4 = 0x3f;
    iVar2 = 0x3f;
  }
  if (((ulong)pJVar5 & 2) == 0) {
    uVar3 = (uint)uVar4;
  } else {
    *(uint16_t *)pJVar5 = 0;
    pJVar5 = pJVar5 + 2;
    uVar3 = iVar2 - 2;
    uVar4 = (ulong)uVar3;
  }
  if (((ulong)pJVar5 & 4) != 0) {
    *(uint32_t *)pJVar5 = 0;
    uVar4 = (ulong)(uVar3 - 4);
    pJVar5 = pJVar5 + 4;
  }
  for (uVar1 = uVar4 >> 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(uint64_t *)pJVar5 = 0;
    pJVar5 = pJVar5 + 8;
  }
  if ((uVar4 & 4) != 0) {
    *(uint32_t *)pJVar5 = 0;
    pJVar5 = pJVar5 + 4;
  }
  if ((uVar4 & 2) != 0) {
    *(uint16_t *)pJVar5 = 0;
    pJVar5 = pJVar5 + 2;
  }
  if (bVar6) {
    *pJVar5 = (Joystick)0x0;
  }
  pJVar5 = self + 0x2c0;
  uVar4 = 0x40;
  iVar2 = 0x40;
  bVar6 = ((ulong)pJVar5 & 1) != 0;
  if (bVar6) {
    pJVar5 = self + 0x2c1;
    self[0x2c0] = (Joystick)0x0;
    uVar4 = 0x3f;
    iVar2 = 0x3f;
  }
  if (((ulong)pJVar5 & 2) == 0) {
    uVar3 = (uint)uVar4;
  } else {
    *(uint16_t *)pJVar5 = 0;
    pJVar5 = pJVar5 + 2;
    uVar3 = iVar2 - 2;
    uVar4 = (ulong)uVar3;
  }
  if (((ulong)pJVar5 & 4) != 0) {
    *(uint32_t *)pJVar5 = 0;
    uVar4 = (ulong)(uVar3 - 4);
    pJVar5 = pJVar5 + 4;
  }
  for (uVar1 = uVar4 >> 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(uint64_t *)pJVar5 = 0;
    pJVar5 = pJVar5 + 8;
  }
  if ((uVar4 & 4) != 0) {
    *(uint32_t *)pJVar5 = 0;
    pJVar5 = pJVar5 + 4;
  }
  if ((uVar4 & 2) != 0) {
    *(uint16_t *)pJVar5 = 0;
    pJVar5 = pJVar5 + 2;
  }
  if (bVar6) {
    *pJVar5 = (Joystick)0x0;
  }
  pJVar5 = self + 0x1c0;
  uVar4 = 0xc0;
  iVar2 = 0xc0;
  bVar6 = ((ulong)pJVar5 & 1) != 0;
  if (bVar6) {
    pJVar5 = self + 0x1c1;
    self[0x1c0] = (Joystick)0x0;
    uVar4 = 0xbf;
    iVar2 = 0xbf;
  }
  if (((ulong)pJVar5 & 2) == 0) {
    uVar3 = (uint)uVar4;
  } else {
    *(uint16_t *)pJVar5 = 0;
    pJVar5 = pJVar5 + 2;
    uVar3 = iVar2 - 2;
    uVar4 = (ulong)uVar3;
  }
  if (((ulong)pJVar5 & 4) != 0) {
    *(uint32_t *)pJVar5 = 0;
    uVar4 = (ulong)(uVar3 - 4);
    pJVar5 = pJVar5 + 4;
  }
  for (uVar1 = uVar4 >> 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(uint64_t *)pJVar5 = 0;
    pJVar5 = pJVar5 + 8;
  }
  if ((uVar4 & 4) != 0) {
    *(uint32_t *)pJVar5 = 0;
    pJVar5 = pJVar5 + 4;
  }
  if ((uVar4 & 2) != 0) {
    *(uint16_t *)pJVar5 = 0;
    pJVar5 = pJVar5 + 2;
  }
  if (bVar6) {
    *pJVar5 = (Joystick)0x0;
  }
  return;
}
