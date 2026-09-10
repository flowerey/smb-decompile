/* src/game/classes/SMBPortalLevel.c — 2 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "SMBPortalLevel.h"

/* ======================================================================
 * SMBPortalLevel__SMBPortalLevel  (Ghidra `SMBPortalLevel` @ 005061d0)
 * Signature: uint8_t __thiscall SMBPortalLevel(SMBPortalLevel * self)
 * Class: SMBPortalLevel
 * Calls: (none)
 * Called by: (none)
 */
/* SMBPortalLevel__SMBPortalLevel() */

void __thiscall SMBPortalLevel__SMBPortalLevel(SMBPortalLevel *self)

{
  *(uint64_t *)self = 0;
  *(uint64_t *)(self + 8) = 0;
  *(uint32_t *)(self + 0x10) = 0;
  *(uint32_t *)(self + 0x14) = 0;
  *(uint32_t *)(self + 0x18) = 0x4cbebc20;
  *(uint32_t *)(self + 0x1c) = 0;
  *(uint32_t *)(self + 0x20) = 0;
  *(uint32_t *)(self + 100) = 0;
  *(uint32_t *)(self + 0x68) = 0xffffffff;
  *(uint32_t *)(self + 0x6c) = 0xffffffff;
  *(uint32_t *)(self + 0x70) = 0;
  *(uint32_t *)(self + 0x74) = 0;
  return;
}

/* ======================================================================
 * SMBPortalLevel__SMBPortalLevel__00506220  (Ghidra `~SMBPortalLevel` @ 00506220)
 * Signature: uint8_t __thiscall ~SMBPortalLevel(SMBPortalLevel * self)
 * Class: SMBPortalLevel
 * Calls: `free`
 * Called by: (none)
 */
/* SMBPortalLevel__SMBPortalLevel__00506220() */

void __thiscall SMBPortalLevel__SMBPortalLevel__00506220(SMBPortalLevel *self)

{
  if (*(void **)(self + 8) != (void *)0x0) {
    free(*(void **)(self + 8));
    if (*(long *)(self + 8) != 0) {
      free(*(void **)self);
      return;
    }
  }
  return;
}
