/* src/game/classes/TMouse.c — 3 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "TMouse.h"

/* ======================================================================
 * TMouse__TMouse  (Ghidra `TMouse` @ 005958d0)
 * Signature: uint8_t __thiscall TMouse(TMouse * self)
 * Class: TMouse
 * Calls: `iptRegisterMouse`
 * Called by: `TInput__TInput__0058adc0`
 */
/* TMouse__TMouse() */

void __thiscall TMouse__TMouse(TMouse *self)

{
  ulong uVar1;
  int iVar2;
  uint uVar3;
  TMouse *pTVar5;
  bool bVar6;
  byte bVar7;
  ulong uVar4;
  
  bVar7 = 0;
  bVar6 = Mouse != (TMouse *)0x0;
  *(uint32_t *)(self + 0x14) = 0;
  *(uint32_t *)(self + 0x18) = 0;
  *(uint32_t *)(self + 0x1c) = 0;
  *(uint32_t *)(self + 0x20) = 0;
  *(uint32_t *)(self + 0x24) = 0;
  *(uint32_t *)(self + 0x28) = 0;
  *(uint32_t *)(self + 0x2c) = 0;
  *(uint32_t *)(self + 0x30) = 0;
  *(uint32_t *)(self + 0x34) = 0;
  if (bVar6) {
    Error__ThrowFatalError("A Mouse has already been created");
  }
  pTVar5 = self + 0x38;
  uVar4 = 0x30;
  iVar2 = 0x30;
  bVar6 = ((ulong)pTVar5 & 1) != 0;
  if (bVar6) {
    pTVar5 = self + 0x39;
    self[0x38] = (TMouse)0x0;
    uVar4 = 0x2f;
    iVar2 = 0x2f;
  }
  if (((ulong)pTVar5 & 2) == 0) {
    uVar3 = (uint)uVar4;
  }
  else {
    *(uint16_t *)pTVar5 = 0;
    pTVar5 = pTVar5 + 2;
    uVar3 = iVar2 - 2;
    uVar4 = (ulong)uVar3;
  }
  if (((ulong)pTVar5 & 4) != 0) {
    *(uint32_t *)pTVar5 = 0;
    uVar4 = (ulong)(uVar3 - 4);
    pTVar5 = pTVar5 + 4;
  }
  for (uVar1 = uVar4 >> 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(uint64_t *)pTVar5 = 0;
    pTVar5 = pTVar5 + (ulong)bVar7 * -0x10 + 8;
  }
  if ((uVar4 & 4) != 0) {
    *(uint32_t *)pTVar5 = 0;
    pTVar5 = pTVar5 + 4;
  }
  if ((uVar4 & 2) != 0) {
    *(uint16_t *)pTVar5 = 0;
    pTVar5 = pTVar5 + 2;
  }
  if (bVar6) {
    *pTVar5 = (TMouse)0x0;
  }
  iptRegisterMouse(self);
  Mouse = self;
  return;
}

/* ======================================================================
 * TMouse__TMouse__005959d0  (Ghidra `~TMouse` @ 005959d0)
 * Signature: uint8_t __thiscall ~TMouse(TMouse * self)
 * Class: TMouse
 * Calls: `iptUnRegisterMouse`
 * Called by: `TInput__TInput`
 */
/* TMouse__TMouse__005959d0() */

void __thiscall TMouse__TMouse__005959d0(TMouse *self)

{
  iptUnRegisterMouse();
  Mouse = 0;
  return;
}

/* ======================================================================
 * TMouse__AddButtonCallback  (Ghidra `AddButtonCallback` @ 005959f0)
 * Signature: uint8_t __thiscall AddButtonCallback(TMouse * self, tagMouseButtons arg1, _func_void_tagButtonProps_ptr_void_ptr * arg2, void * arg3)
 * Class: TMouse
 * Calls: (none)
 * Called by: `CancelPastePiecesRendering`, `CancelPasteTileRendering`, `SMBEditor__DeActivate`, `SMBEditor__EditSetPieces`, `SMBEditor__SetToAnimalMode`, `SMBEditor__SetToAnimationMode`, `SMBEditor__SetToCameraMode`, `SMBEditor__SetToLightingMode`, `SMBEditor__SetToObstacleMode`, `SMBEditor__SetToParalaxMode` (+3 more)
 */
/* TMouse__AddButtonCallback(tagMouseButtons, void (*)(tagButtonProps const*, void*), void*) */

void __thiscall
TMouse__AddButtonCallback(TMouse *self,int arg2,uint64_t arg3,uint64_t arg4)

{
  *(uint64_t *)(self + ((long)arg2 + 3) * 0x10 + 8) = arg3;
  *(uint64_t *)(self + ((long)arg2 + 3) * 0x10 + 0x10) = arg4;
  return;
}
