/* src/game/classes/SMBPortal.c — 1 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "SMBPortal.h"

/* ======================================================================
 * SMBPortal__Update  (Ghidra `Update` @ 004e24c0)
 * Signature: uint8_t __thiscall Update(SMBPortal * self)
 * Class: SMBPortal
 * Calls: (none)
 * Called by: `SMBPalette__Update`
 */
/* SMBPortal__Update() */

void __thiscall SMBPortal__Update(SMBPortal *self)

{
  int iVar1;
  long lVar2;
  long lVar3;

  lVar2 = pPalProps;
  if (*(int *)(self + 0x10) == 1) {
    lVar3 = *(long *)self;
    if (*(float *)(pPalProps + 0x15c) <= *(float *)(lVar3 + 0x40))
      goto LAB_004e2538;
  } else if ((*(int *)(self + 0x10) == 2) &&
             (lVar3 = *(long *)self, *(float *)(pPalProps + 0x160) <= *(float *)(lVar3 + 0x40))) {
  LAB_004e2538:
    *(uint32_t *)(lVar3 + 0x40) = 0;
    *(char *)(*(long *)self + 0x20) = (char)*(uint32_t *)(lVar2 + 0x150);
    iVar1 = *(int *)(self + 0x14);
    *(uint32_t *)(self + 0x10) = 0;
    lVar2 = pPalProps;
    goto joined_r0x004e2558;
  }
  iVar1 = *(int *)(self + 0x14);
joined_r0x004e2558:
  if (iVar1 == 1) {
    pPalProps = lVar2;
    lVar3 = *(long *)(self + 8);
    if (*(float *)(lVar3 + 0x40) < *(float *)(lVar2 + 0x15c)) {
      return;
    }
  } else {
    pPalProps = lVar2;
    if ((iVar1 != 2) ||
        (lVar3 = *(long *)(self + 8), *(float *)(lVar3 + 0x40) < *(float *)(lVar2 + 0x160))) {
      return;
    }
  }
  pPalProps = lVar2;
  *(uint32_t *)(lVar3 + 0x40) = 0;
  *(char *)(*(long *)(self + 8) + 0x20) = (char)*(uint32_t *)(lVar2 + 0x150);
  *(uint32_t *)(self + 0x14) = 0;
  return;
}
