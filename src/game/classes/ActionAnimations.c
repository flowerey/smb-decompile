/* src/game/classes/ActionAnimations.c — 1 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "ActionAnimations.h"

/* ======================================================================
 * ActionAnimations__ActionAnimations  (Ghidra `~ActionAnimations` @ 0047e1f0)
 * Signature: uint8_t __thiscall ~ActionAnimations(ActionAnimations * self)
 * Class: ActionAnimations
 * Calls: `CriticalSection__CriticalSection__005b71d0`, `free`
 * Called by: (none)
 */
/* ActionAnimations__ActionAnimations() */

void __thiscall ActionAnimations__ActionAnimations(ActionAnimations *self)

{
  if (*(int *)(self + 0x48) != -0x5eef3582) {
    CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
    return;
  }
  *(uint32_t *)(self + 0x48) = 0;
  free(*(void **)(*(long *)(self + 0x38) + -8));
  if (*(int *)(self + 0x30) == 1) {
    free(*(void **)(*(long *)(self + 0x40) + -8));
  }
  *(uint32_t *)(self + 0x48) = 0;
  *(uint16_t *)(self + 0x2a) = 0;
  *(uint16_t *)(self + 0x28) = 0;
  *(uint64_t *)(self + 0x38) = 0;
  *(uint64_t *)(self + 0x40) = 0;
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
  return;
}
