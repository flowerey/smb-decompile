/* src/game/classes/MultiPointBoundsCheck.c — 2 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "MultiPointBoundsCheck.h"

/* ======================================================================
 * MultiPointBoundsCheck__MultiPointBoundsCheck  (Ghidra `MultiPointBoundsCheck` @ 0057e140)
 * Signature: uint8_t __thiscall MultiPointBoundsCheck(MultiPointBoundsCheck * self)
 * Class: MultiPointBoundsCheck
 * Calls: (none)
 * Called by: (none)
 */
/* MultiPointBoundsCheck__MultiPointBoundsCheck() */

void __thiscall MultiPointBoundsCheck__MultiPointBoundsCheck(MultiPointBoundsCheck *self)

{
  MultiPointBoundsCheck *pMVar1;

  *(uint32_t *)(self + 0x40) = 0;
  pMVar1 = self;
  *(MultiPointBoundsCheck **)(self + 0x48) = pCurrentBoundsCheck;
  pCurrentBoundsCheck = pMVar1;
  return;
}

/* ======================================================================
 * MultiPointBoundsCheck__MultiPointBoundsCheck__0057e160  (Ghidra `~MultiPointBoundsCheck` @ 0057e160)
 * Signature: uint8_t __thiscall ~MultiPointBoundsCheck(MultiPointBoundsCheck * self)
 * Class: MultiPointBoundsCheck
 * Calls: (none)
 * Called by: (none)
 */
/* MultiPointBoundsCheck__MultiPointBoundsCheck__0057e160() */

void __thiscall MultiPointBoundsCheck__MultiPointBoundsCheck__0057e160(MultiPointBoundsCheck *self)

{
  pCurrentBoundsCheck = *(uint64_t *)(self + 0x48);
  return;
}
