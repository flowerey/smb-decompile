/* src/game/classes/TInput.c — 8 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "TInput.h"

/* ======================================================================
 * TInput__Update  (Ghidra `Update` @ 0058a640)
 * Signature: uint8_t __thiscall Update(TInput * self, int arg1)
 * Class: TInput
 * Calls: `TPlayer__GetJoystick`, `iptUpdateDevices`
 * Called by: `TEngine__Update`
 */
/* TInput__Update(int) */

void __thiscall TInput__Update(TInput *self,int arg1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  uint *puVar9;
  
  iptUpdateDevices(arg1);
  if (*(short *)(self + 0x30) != 0) {
    uVar7 = 0;
    while( true ) {
      uVar8 = uVar7 & 0xffff;
      lVar6 = *(long *)(*(long *)(self + 0x40) + uVar8 * 8);
      iVar2 = *(int *)(lVar6 + 0x50);
      if (iVar2 == 0) break;
      if (*(int *)(lVar6 + 4) == 0) {
        iVar3 = 0;
      }
      else {
        lVar5 = 0;
        do {
          if (lVar5 == (ulong)(iVar2 - 1) << 3) {
            return;
          }
          lVar5 = lVar5 + 8;
        } while (*(int *)(lVar6 + 4 + lVar5) != 0);
        iVar3 = 0;
        lVar5 = lVar6;
        do {
          iVar3 = iVar3 + 1;
          if (iVar3 == iVar2) {
            puVar9 = (uint *)0x0;
            goto LAB_0058a6eb;
          }
          piVar1 = (int *)(lVar5 + 0xc);
          lVar5 = lVar5 + 8;
        } while (*piVar1 != 0);
      }
      puVar9 = (uint *)(lVar6 + (long)iVar3 * 8);
LAB_0058a6eb:
      if (1 < iVar3) {
        *(int *)(lVar6 + 0x58) = *(int *)(lVar6 + 0x58) + *(int *)(Engine + 4);
        lVar6 = *(long *)(*(long *)(self + 0x40) + uVar8 * 8);
      }
      if (*(uint *)(lVar6 + 0x54) < *(uint *)(lVar6 + 0x58)) {
        *(uint32_t *)(lVar6 + 0x58) = 0;
        lVar6 = *(long *)(*(long *)(self + 0x40) + uVar8 * 8);
        if (*(int *)(lVar6 + 0x50) != 0) {
          uVar4 = 0;
          do {
            lVar5 = (long)(int)uVar4;
            uVar4 = uVar4 + 1;
            *(uint32_t *)(lVar6 + 4 + lVar5 * 8) = 0;
            lVar6 = *(long *)(*(long *)(self + 0x40) + uVar8 * 8);
          } while (uVar4 < *(uint *)(lVar6 + 0x50));
        }
      }
      if (puVar9 != (uint *)0x0) {
        if (*(int *)(lVar6 + 0x5c) == 0) {
          uVar4 = *puVar9;
          lVar6 = TPlayer__GetJoystick((TPlayer *)Players__Player);
          iVar2 = *(int *)(lVar6 + 0x2c + (ulong)uVar4 * 0xc);
        }
        else {
          iVar2 = *(int *)(Keyboard + 0x10 + (ulong)*puVar9 * 0xc);
        }
        if (iVar2 == 1) {
          puVar9[1] = 1;
        }
      }
      uVar4 = (int)uVar7 + 1;
      uVar7 = (ulong)uVar4;
      if ((int)(uint)*(ushort *)(self + 0x30) <= (int)uVar4) {
        return;
      }
    }
  }
  return;
}

/* ======================================================================
 * TInput__JoystickPluggedIn  (Ghidra `JoystickPluggedIn` @ 0058a810)
 * Signature: uint8_t __thiscall JoystickPluggedIn(TInput * self)
 * Class: TInput
 * Calls: (none)
 * Called by: (none)
 */
/* TInput__JoystickPluggedIn() */

void __thiscall TInput__JoystickPluggedIn(TInput *self)

{
  if (*(code **)self != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0058a818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)self)();
    return;
  }
  return;
}

/* ======================================================================
 * TInput__HasCodeBeenEntered  (Ghidra `HasCodeBeenEntered` @ 0058a830)
 * Signature: uint8_t __thiscall HasCodeBeenEntered(TInput * self, tagCheatCode * arg1)
 * Class: TInput
 * Calls: (none)
 * Called by: `GSMBMenu__PlayCodeSound`, `GSMBMenu__SelectCharacter`
 */
/* TInput__HasCodeBeenEntered(tagCheatCode*) */

uint64_t __thiscall TInput__HasCodeBeenEntered(TInput *self,tagCheatCode *arg1)

{
  long lVar1;
  uint64_t uVar2;
  long lVar3;
  
  uVar2 = 1;
  if ((*(int *)(arg1 + 0x50) != 0) && (uVar2 = 0, *(int *)(arg1 + 4) != 0)) {
    lVar3 = 0;
    do {
      if (lVar3 == (ulong)(*(int *)(arg1 + 0x50) - 1) << 3) {
        return 1;
      }
      lVar1 = lVar3 + 0xc;
      lVar3 = lVar3 + 8;
    } while (*(int *)(arg1 + lVar1) != 0);
    uVar2 = 0;
  }
  return uVar2;
}

/* ======================================================================
 * TInput__RegisterCode  (Ghidra `RegisterCode` @ 0058a880)
 * Signature: uint8_t __thiscall RegisterCode(TInput * self, tagCheatCode * arg1)
 * Class: TInput
 * Calls: `free`, `malloc`, `memcpy`
 * Called by: `GSMBMenu__ShowCharMenu`, `SMBMenuTransitionInCharMenu`
 */
/* TInput__RegisterCode(tagCheatCode*) */

void __thiscall TInput__RegisterCode(TInput *self,tagCheatCode *arg1)

{
  tagCheatCode *ptVar1;
  void *pvVar2;
  ushort uVar3;
  ushort uVar4;
  short sVar5;
  void *pvVar6;
  void *pvVar7;
  ulong uVar8;
  long *plVar9;
  uint64_t *puVar10;
  ulong uVar11;
  long lVar12;
  ushort *puVar13;
  
  uVar4 = *(ushort *)(self + 0x30);
  if (uVar4 != 0) {
    plVar9 = *(long **)(self + 0x40);
    uVar3 = 0;
    ptVar1 = (tagCheatCode *)*plVar9;
    while( true ) {
      if (ptVar1 == arg1) {
        if (((*(int *)(self + 0x38) == 1) && (*(ushort *)(self + 0x32) != 0)) &&
           (uVar3 != **(ushort **)(self + 0x48))) {
          lVar12 = 0;
          do {
            if (lVar12 == (ulong)(*(ushort *)(self + 0x32) - 1) * 2) {
              return;
            }
            lVar12 = lVar12 + 2;
          } while (uVar3 != *(ushort *)((long)*(ushort **)(self + 0x48) + lVar12));
        }
        return;
      }
      uVar3 = uVar3 + 1;
      if (uVar3 == uVar4) break;
      plVar9 = plVar9 + 1;
      ptVar1 = (tagCheatCode *)*plVar9;
    }
  }
  if (*(int *)(self + 0x50) == -0x5eef3582) {
    if (*(ushort *)(self + 0x32) <= uVar4) {
      uVar4 = *(ushort *)(self + 0x32) + *(short *)(self + 0x3c);
      uVar11 = (ulong)(byte)self[0x34];
      pvVar6 = (void *)0x0;
      pvVar2 = *(void **)(self + 0x40);
      *(ushort *)(self + 0x32) = uVar4;
      uVar8 = (ulong)uVar4 * 8;
      pvVar7 = malloc(uVar11 + 0x10 + uVar8);
      if (pvVar7 != (void *)0x0) {
        pvVar6 = (void *)((long)pvVar7 + 0x10U + (uVar11 - ((long)pvVar7 + 0x10U) % uVar11) % uVar11
                         );
        *(ulong *)((long)pvVar6 + -0x10) = uVar8;
        *(void **)((long)pvVar6 + -8) = pvVar7;
        if (pvVar2 != (void *)0x0) {
          uVar11 = *(ulong *)((long)pvVar2 + -0x10);
          if (uVar8 < uVar11 || uVar8 - uVar11 == 0) {
            uVar11 = uVar8;
          }
          memcpy(pvVar6,pvVar2,uVar11);
          free(*(void **)((long)pvVar2 + -8));
        }
      }
      pvVar2 = *(void **)(self + 0x48);
      *(void **)(self + 0x40) = pvVar6;
      if (pvVar2 != (void *)0x0) {
        uVar3 = *(ushort *)(self + 0x32);
        uVar11 = (ulong)(byte)self[0x34];
        pvVar6 = (void *)0x0;
        uVar8 = (ulong)uVar3 * 2;
        pvVar7 = malloc(uVar11 + 0x10 + uVar8);
        if (pvVar7 != (void *)0x0) {
          pvVar6 = (void *)((long)pvVar7 + 0x10U +
                           (uVar11 - ((long)pvVar7 + 0x10U) % uVar11) % uVar11);
          *(void **)((long)pvVar6 + -8) = pvVar7;
          *(ulong *)((long)pvVar6 + -0x10) = uVar8;
          uVar11 = *(ulong *)((long)pvVar2 + -0x10);
          if (uVar8 <= *(ulong *)((long)pvVar2 + -0x10)) {
            uVar11 = uVar8;
          }
          memcpy(pvVar6,pvVar2,uVar11);
          free(*(void **)((long)pvVar2 + -8));
          uVar3 = *(ushort *)(self + 0x32);
        }
        uVar4 = *(ushort *)(self + 0x30);
        *(void **)(self + 0x48) = pvVar6;
        if (uVar3 <= uVar4) goto LAB_0058a95e;
        while( true ) {
          uVar8 = (ulong)uVar4;
          uVar4 = uVar4 + 1;
          *(uint16_t *)((long)pvVar6 + uVar8 * 2) = 0xffff;
          if (uVar3 <= uVar4) break;
          pvVar6 = *(void **)(self + 0x48);
        }
      }
      uVar4 = *(ushort *)(self + 0x30);
    }
  }
  else {
    uVar8 = (ulong)(byte)self[0x34];
    *(uint32_t *)(self + 0x38) = 0;
    pvVar6 = malloc(uVar8 + 0x38);
    puVar10 = (uint64_t *)0x0;
    if (pvVar6 != (void *)0x0) {
      puVar10 = (uint64_t *)
                ((uVar8 - ((long)pvVar6 + 0x10U) % uVar8) % uVar8 + (long)pvVar6 + 0x10U);
      puVar10[-2] = 0x28;
      puVar10[-1] = pvVar6;
    }
    *(uint64_t **)(self + 0x40) = puVar10;
    uVar4 = 0;
    *puVar10 = 0;
    puVar10[1] = 0;
    puVar10[2] = 0;
    puVar10[3] = 0;
    puVar10[4] = 0;
    *(uint16_t *)(self + 0x30) = 0;
    *(uint16_t *)(self + 0x32) = 5;
    *(uint32_t *)(self + 0x50) = 0xa110ca7e;
    *(uint16_t *)(self + 0x3c) = 5;
  }
LAB_0058a95e:
  if ((*(int *)(self + 0x38) == 1) && (*(short *)(self + 0x32) != 0)) {
    puVar13 = *(ushort **)(self + 0x48);
    sVar5 = 1;
    uVar3 = *puVar13;
    while (uVar3 != 0xffff) {
      puVar13 = puVar13 + 1;
      if (sVar5 == *(short *)(self + 0x32)) goto LAB_0058a968;
      sVar5 = sVar5 + 1;
      uVar3 = *puVar13;
    }
    *puVar13 = uVar4;
    uVar4 = *(ushort *)(self + 0x30);
  }
LAB_0058a968:
  *(tagCheatCode **)(*(long *)(self + 0x40) + (ulong)uVar4 * 8) = arg1;
  *(short *)(self + 0x30) = *(short *)(self + 0x30) + 1;
  return;
}

/* ======================================================================
 * TInput__UnregisterCode  (Ghidra `UnregisterCode` @ 0058ab90)
 * Signature: uint8_t __thiscall UnregisterCode(TInput * self, tagCheatCode * arg1)
 * Class: TInput
 * Calls: (none)
 * Called by: `GSMBMenu__SelectCharacter`
 */
/* TInput__UnregisterCode(tagCheatCode*) */

void __thiscall TInput__UnregisterCode(TInput *self,tagCheatCode *arg1)

{
  uint64_t *puVar1;
  ushort *puVar2;
  ushort uVar3;
  short sVar4;
  uint uVar5;
  long lVar6;
  ushort uVar7;
  long *plVar8;
  uint uVar9;
  long *plVar10;
  ushort uVar11;
  
  uVar9 = *(uint *)(arg1 + 0x50);
  if (uVar9 != 0) {
    lVar6 = 0;
    do {
      *(uint32_t *)(arg1 + lVar6 * 8 + 4) = 0;
      lVar6 = lVar6 + 1;
    } while ((uint)lVar6 < uVar9);
  }
  uVar7 = *(ushort *)(self + 0x30);
  if (uVar7 == 0) {
    return;
  }
  plVar10 = *(long **)(self + 0x40);
  uVar11 = 0;
  plVar8 = plVar10;
  if ((tagCheatCode *)*plVar10 == arg1) {
    uVar9 = 1;
    uVar5 = 0;
  }
  else {
    do {
      uVar11 = uVar11 + 1;
      if (uVar11 == uVar7) {
        return;
      }
      plVar8 = plVar8 + 1;
    } while ((tagCheatCode *)*plVar8 != arg1);
    uVar5 = (uint)uVar11;
    uVar9 = uVar5 + 1;
  }
  if ((uVar9 < uVar7) && ((int)uVar5 < (int)(uVar7 - 1))) {
    lVar6 = (long)(int)uVar5 << 3;
    uVar9 = uVar5;
    while( true ) {
      puVar1 = (uint64_t *)((long)plVar10 + lVar6);
      lVar6 = lVar6 + 8;
      uVar9 = uVar9 + 1;
      *puVar1 = *(uint64_t *)((long)plVar10 + lVar6);
      uVar7 = *(ushort *)(self + 0x30);
      if ((int)(uVar7 - 1) <= (int)uVar9) break;
      plVar10 = *(long **)(self + 0x40);
    }
  }
  if ((*(int *)(self + 0x38) != 1) || (uVar11 = *(ushort *)(self + 0x32), uVar11 == 0)) {
    sVar4 = 0;
    if (uVar7 != 0) {
      sVar4 = uVar7 - 1;
    }
    *(short *)(self + 0x30) = sVar4;
    return;
  }
  uVar7 = 0;
  do {
    while( true ) {
      puVar2 = (ushort *)(*(long *)(self + 0x48) + (ulong)uVar7 * 2);
      uVar3 = *puVar2;
      if (uVar5 != uVar3) break;
      *puVar2 = 0xffff;
      uVar11 = *(ushort *)(self + 0x32);
      uVar7 = uVar7 + 1;
      if (uVar11 <= uVar7) goto LAB_0058aca6;
    }
    if ((uVar5 < uVar3) && ((ushort)(uVar3 - 1) < 0xfffe)) {
      *puVar2 = uVar3 - 1;
      uVar11 = *(ushort *)(self + 0x32);
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < uVar11);
LAB_0058aca6:
  sVar4 = 0;
  if (*(short *)(self + 0x30) != 0) {
    sVar4 = *(short *)(self + 0x30) + -1;
  }
  *(short *)(self + 0x30) = sVar4;
  return;
}

/* ======================================================================
 * TInput__AllowCallbacks  (Ghidra `AllowCallbacks` @ 0058acd0)
 * Signature: uint8_t __thiscall AllowCallbacks(TInput * self, int arg1)
 * Class: TInput
 * Calls: (none)
 * Called by: `TEngine__Update`
 */
/* TInput__AllowCallbacks(int) */

void __thiscall TInput__AllowCallbacks(TInput *self,int arg1)

{
  _Input_Callbacks_Allowed = arg1;
  return;
}

/* ======================================================================
 * TInput__TInput  (Ghidra `~TInput` @ 0058ace0)
 * Signature: uint8_t __thiscall ~TInput(TInput * self)
 * Class: TInput
 * Calls: `CriticalSection__CriticalSection__005b71d0`, `TKeyboard__TKeyboard__0058c000`, `TMouse__TMouse__005959d0`, `free`, `iptDestroyDevices`, `operator_delete`
 * Called by: `TEngine__TEngine__00583e20`
 */
/* TInput__TInput() */

void __thiscall TInput__TInput(TInput *self)

{
  TKeyboard *pTVar1;
  TMouse *pTVar2;
  
  pTVar2 = Mouse;
  if (Mouse != (TMouse *)0x0) {
                    /* try { // try from 0058acf8 to 0058ad25 has its CatchHandler @ 0058ad9f */
    TMouse__TMouse__005959d0(Mouse);
    operator_delete(pTVar2);
  }
  pTVar1 = Keyboard;
  if (Keyboard != (TKeyboard *)0x0) {
    TKeyboard__TKeyboard__0058c000(Keyboard);
    operator_delete(pTVar1);
  }
  iptDestroyDevices();
  if (*(int *)(self + 0x50) != -0x5eef3582) {
    CriticalSection__CriticalSection__005b71d0((CriticalSection *)(self + 8));
    return;
  }
  *(uint32_t *)(self + 0x50) = 0;
  free(*(void **)(*(long *)(self + 0x40) + -8));
  if (*(int *)(self + 0x38) == 1) {
    free(*(void **)(*(long *)(self + 0x48) + -8));
  }
  *(uint32_t *)(self + 0x50) = 0;
  *(uint16_t *)(self + 0x32) = 0;
  *(uint16_t *)(self + 0x30) = 0;
  *(uint64_t *)(self + 0x40) = 0;
  *(uint64_t *)(self + 0x48) = 0;
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)(self + 8));
  return;
}

/* ======================================================================
 * TInput__TInput__0058adc0  (Ghidra `TInput` @ 0058adc0)
 * Signature: uint8_t __thiscall TInput(TInput * self)
 * Class: TInput
 * Calls: `CriticalSection__CriticalSection`, `TKeyboard__TKeyboard`, `TMouse__TMouse`, `iptCreateDevices`, `operator_new`
 * Called by: `TEngine__TEngine`
 */
/* TInput__TInput__0058adc0() */

void __thiscall TInput__TInput__0058adc0(TInput *self)

{
  TMouse *this_00;
  TKeyboard *this_01;
  bool bVar1;
  
  *(uint64_t *)self = 0;
  CriticalSection__CriticalSection((CriticalSection *)(self + 8));
  bVar1 = Input != (TInput *)0x0;
  *(uint16_t *)(self + 0x32) = 0;
  *(uint16_t *)(self + 0x30) = 0;
  *(uint16_t *)(self + 0x3c) = 1;
  *(uint64_t *)(self + 0x40) = 0;
  *(uint64_t *)(self + 0x48) = 0;
  *(uint32_t *)(self + 0x50) = 0;
  self[0x34] = (TInput)0x4;
  *(uint32_t *)(self + 0x38) = 0;
  if (bVar1) {
                    /* try { // try from 0058ae1f to 0058ae39 has its CatchHandler @ 0058ae61 */
    Error__ThrowFatalError("The input module is already loaded");
  }
  Input = self;
  iptCreateDevices();
  this_00 = operator_new(0x68);
                    /* try { // try from 0058ae40 to 0058ae44 has its CatchHandler @ 0058ae8b */
  TMouse__TMouse(this_00);
                    /* try { // try from 0058ae4a to 0058ae4e has its CatchHandler @ 0058ae61 */
  this_01 = operator_new(0x2c20);
                    /* try { // try from 0058ae55 to 0058ae59 has its CatchHandler @ 0058ae74 */
  TKeyboard__TKeyboard(this_01);
  return;
}
