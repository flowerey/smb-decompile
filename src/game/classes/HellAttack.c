/* src/game/classes/HellAttack.c — 1 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "HellAttack.h"

/* ======================================================================
 * HellAttack__FillAttacks  (Ghidra `FillAttacks` @ 0046b8a0)
 * Signature: uint8_t __thiscall FillAttacks(HellAttack * self, char * arg1, int arg2, FlashAnimationLibrary * arg3)
 * Class: HellAttack
 * Calls: `FlashAnimationLibrary__GetMovieClip__005731d0`, `Sprint`
 * Called by: (none)
 */
/* HellBoss__HellAttack_FillAttacks(char const*, int, FlashAnimationLibrary*) */

void __thiscall
HellBoss__HellAttack_FillAttacks
          (HellAttack *self,char *arg1,int arg2,FlashAnimationLibrary *arg3)

{
  uint64_t uVar1;
  int iVar2;
  HellAttack *pHVar3;
  int iVar4;
  char local_58 [40];
  
  iVar4 = 1;
  *(uint32_t *)(self + 4) = 0;
  *(int *)self = arg2;
  do {
    if (0 < arg2) {
      iVar2 = 0;
      pHVar3 = self + (long)(iVar4 + -1) * 0x28 + 0x10;
      do {
        iVar2 = iVar2 + 1;
        Sprint("%s%iv%i",local_58,arg1,iVar2,iVar4);
        uVar1 = FlashAnimationLibrary__GetMovieClip__005731d0(arg3,local_58);
        *(uint64_t *)pHVar3 = uVar1;
        pHVar3 = pHVar3 + 8;
      } while (iVar2 != arg2);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != 4);
  return;
}
