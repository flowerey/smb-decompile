/* src/game/classes/SMBAnimalAnimations.c — 1 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "SMBAnimalAnimations.h"

/* ======================================================================
 * SMBAnimalAnimations__SMBAnimalAnimations  (Ghidra `~SMBAnimalAnimations` @ 0048c9d0)
 * Signature: uint8_t __thiscall ~SMBAnimalAnimations(SMBAnimalAnimations * self)
 * Class: SMBAnimalAnimations
 * Calls: `CriticalSection__CriticalSection__005b71d0`, `free`
 * Called by: (none)
 */
/* SMBAnimalAnimations__SMBAnimalAnimations() */

void __thiscall SMBAnimalAnimations__SMBAnimalAnimations(SMBAnimalAnimations *self)

{
  SMBAnimalAnimations *pSVar1;
  CriticalSection *this_00;

  if (self != (SMBAnimalAnimations *)0x0) {
    this_00 = (CriticalSection *)(self + 0x370);
    pSVar1 = self + 0x360;
    do {
      if (*(int *)pSVar1 == -0x5eef3582) {
        *(int *)pSVar1 = 0;
        free(*(void **)(*(long *)(pSVar1 + -0x10) + -8));
        if (*(int *)(pSVar1 + -0x18) == 1) {
          free(*(void **)(*(long *)(pSVar1 + -8) + -8));
        }
        *(int *)pSVar1 = 0;
        *(uint16_t *)(pSVar1 + -0x1e) = 0;
        *(uint16_t *)(pSVar1 + -0x20) = 0;
        *(uint64_t *)(pSVar1 + -0x10) = 0;
        *(uint64_t *)(pSVar1 + -8) = 0;
      }
      this_00 = this_00 + -0x58;
      pSVar1 = pSVar1 + -0x58;
      CriticalSection__CriticalSection__005b71d0(this_00);
    } while (self != (SMBAnimalAnimations *)this_00);
  }
  return;
}
