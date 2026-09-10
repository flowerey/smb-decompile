/* src/game/classes/MeatboyReplayBoys.c — 2 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "MeatboyReplayBoys.h"

/* ======================================================================
 * MeatboyReplayBoys__MeatboyReplayBoys  (Ghidra `MeatboyReplayBoys` @ 00474f90)
 * Signature: uint8_t __thiscall MeatboyReplayBoys(MeatboyReplayBoys * self)
 * Class: MeatboyReplayBoys
 * Calls: (none)
 * Called by: (none)
 */
/* MeatboyReplayBoys__MeatboyReplayBoys() */

void __thiscall MeatboyReplayBoys__MeatboyReplayBoys(MeatboyReplayBoys *self)

{
  return;
}

/* ======================================================================
 * MeatboyReplayBoys__MeatboyReplayBoys__00474fa0  (Ghidra `~MeatboyReplayBoys` @ 00474fa0)
 * Signature: uint8_t __thiscall ~MeatboyReplayBoys(MeatboyReplayBoys * self)
 * Class: MeatboyReplayBoys
 * Calls: (none)
 * Called by: (none)
 */
/* MeatboyReplayBoys__MeatboyReplayBoys__00474fa0() */

void __thiscall MeatboyReplayBoys__MeatboyReplayBoys__00474fa0(MeatboyReplayBoys *self)

{
  long lVar1;
  
  lVar1 = 0;
  do {
    if (*(long **)(self + lVar1) != (long *)0x0) {
      (**(code **)(**(long **)(self + lVar1) + 8))();
    }
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0x140);
  return;
}
