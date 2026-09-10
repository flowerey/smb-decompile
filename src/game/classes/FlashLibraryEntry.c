/* src/game/classes/FlashLibraryEntry.c — 3 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "FlashLibraryEntry.h"

/* ======================================================================
 * FlashLibraryEntry__GetDuration  (Ghidra `GetDuration` @ 005735e0)
 * Signature: uint8_t __thiscall GetDuration(FlashLibraryEntry * self)
 * Class: FlashLibraryEntry
 * Calls: (none)
 * Called by: `BloodyTiles__Render`, `ForestBoss__OnDeath`, `SMBPalette__SMBPalette__004f3ca0`
 */
/* FlashLibraryEntry__GetDuration() */

uint32_t __thiscall FlashLibraryEntry__GetDuration(FlashLibraryEntry *self)

{
  if (*(int *)(self + 0x10) != 1) {
    return 0;
  }
  return *(uint32_t *)(self + 0x20);
}

/* ======================================================================
 * FlashLibraryEntry__FlashLibraryEntry  (Ghidra `~FlashLibraryEntry` @ 00578730)
 * Signature: uint8_t __thiscall ~FlashLibraryEntry(FlashLibraryEntry * self)
 * Class: FlashLibraryEntry
 * Calls: `FlashLibraryEntry__FlashLibraryEntry__005787d0`
 * Called by: (none)
 */
/* FlashLibraryEntry__FlashLibraryEntry__005787d0() */

void __thiscall FlashLibraryEntry__FlashLibraryEntry__005787d0(FlashLibraryEntry *self)

{
  *(uint8_t ***)self = &PTR__FlashLibraryEntry_005dbc90;
  return;
}

/* ======================================================================
 * FlashLibraryEntry__FlashLibraryEntry__005787d0  (Ghidra `~FlashLibraryEntry` @ 005787d0)
 * Signature: uint8_t __thiscall ~FlashLibraryEntry(FlashLibraryEntry * self)
 * Class: FlashLibraryEntry
 * Calls: `operator_delete`
 * Called by: `FlashLibraryEntry__FlashLibraryEntry`
 */
/* FlashLibraryEntry__FlashLibraryEntry__005787d0() */

void __thiscall FlashLibraryEntry__FlashLibraryEntry__005787d0(FlashLibraryEntry *self)

{
  *(uint8_t ***)self = &PTR__FlashLibraryEntry_005dbc90;
  operator_delete(self);
  return;
}
