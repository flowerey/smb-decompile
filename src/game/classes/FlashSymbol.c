/* src/game/classes/FlashSymbol.c — 3 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "FlashSymbol.h"

/* ======================================================================
 * FlashSymbol__FlashSymbol  (Ghidra `~FlashSymbol` @ 005713b0)
 * Signature: uint8_t __thiscall ~FlashSymbol(FlashSymbol * self)
 * Class: FlashSymbol
 * Calls: `FlashSymbol__FlashSymbol__00571460`
 * Called by: (none)
 */
/* FlashSymbol__FlashSymbol__00571460() */

void __thiscall FlashSymbol__FlashSymbol__00571460(FlashSymbol *self)

{
  *(uint8_t ***)self = &PTR__FlashLibraryEntry_005dbc90;
  return;
}

/* ======================================================================
 * FlashSymbol__FlashSymbol__00571460  (Ghidra `~FlashSymbol` @ 00571460)
 * Signature: uint8_t __thiscall ~FlashSymbol(FlashSymbol * self)
 * Class: FlashSymbol
 * Calls: `operator_delete`
 * Called by: `FlashSymbol__FlashSymbol`
 */
/* FlashSymbol__FlashSymbol__00571460() */

void __thiscall FlashSymbol__FlashSymbol__00571460(FlashSymbol *self)

{
  *(uint8_t ***)self = &PTR__FlashLibraryEntry_005dbc90;
  operator_delete(self);
  return;
}

/* ======================================================================
 * FlashSymbol__FlashSymbol__00575060  (Ghidra `FlashSymbol` @ 00575060)
 * Signature: uint8_t __thiscall FlashSymbol(FlashSymbol * self)
 * Class: FlashSymbol
 * Calls: (none)
 * Called by: (none)
 */
/* FlashSymbol__FlashSymbol__00575060() */

void __thiscall FlashSymbol__FlashSymbol__00575060(FlashSymbol *self)

{
  *(uint8_t ***)self = &PTR__FlashSymbol_005dbbd0;
  *(uint32_t *)(self + 0x10) = 0;
  return;
}
