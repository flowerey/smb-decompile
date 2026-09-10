/* src/game/classes/FlashTextField.c — 4 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "FlashTextField.h"

/* ======================================================================
 * FlashTextField__FlashTextField  (Ghidra `~FlashTextField` @ 005713c0)
 * Signature: uint8_t __thiscall ~FlashTextField(FlashTextField * self)
 * Class: FlashTextField
 * Calls: `FlashTextField__FlashTextField__00571ad0`
 * Called by: (none)
 */
/* FlashTextField__FlashTextField__00571ad0() */

void __thiscall FlashTextField__FlashTextField__00571ad0(FlashTextField *self)

{
  *(uint8_t ***)self = &PTR__FlashTextField_005dbc10;
  if (*(long **)(self + 0x18) != (long *)0x0) {
    /* try { // try from 005713d7 to 005713d9 has its CatchHandler @ 005713eb */
    (**(code **)(**(long **)(self + 0x18) + 8))();
  }
  *(uint64_t *)(self + 0x18) = 0;
  *(uint8_t ***)self = &PTR__FlashLibraryEntry_005dbc90;
  return;
}

/* ======================================================================
 * FlashTextField__FlashTextField__00571ad0  (Ghidra `~FlashTextField` @ 00571ad0)
 * Signature: uint8_t __thiscall ~FlashTextField(FlashTextField * self)
 * Class: FlashTextField
 * Calls: `operator_delete`
 * Called by: `FlashTextField__FlashTextField`
 */
/* FlashTextField__FlashTextField__00571ad0() */

void __thiscall FlashTextField__FlashTextField__00571ad0(FlashTextField *self)

{
  *(uint8_t ***)self = &PTR__FlashTextField_005dbc10;
  if (*(long **)(self + 0x18) != (long *)0x0) {
    /* try { // try from 00571ae7 to 00571ae9 has its CatchHandler @ 00571b02 */
    (**(code **)(**(long **)(self + 0x18) + 8))();
  }
  *(uint64_t *)(self + 0x18) = 0;
  *(uint8_t ***)self = &PTR__FlashLibraryEntry_005dbc90;
  operator_delete(self);
  return;
}

/* ======================================================================
 * FlashTextField__FlashTextField__00576210  (Ghidra `FlashTextField` @ 00576210)
 * Signature: uint8_t __thiscall FlashTextField(FlashTextField * self, tagTextAlign arg1)
 * Class: FlashTextField
 * Calls: `FlashTextField__FlashTextField__005762b0`, `FontEmitter__FontEmitter__005861d0`, `operator_new`
 * Called by: (none)
 */
/* FlashTextField__FlashTextField__005762b0(tagTextAlign) */

void __thiscall FlashTextField__FlashTextField__005762b0(FlashTextField *self, uint32_t arg2)

{
  FontEmitter *this_00;
  uint64_t local_28;
  uint64_t local_20;

  *(uint8_t ***)self = &PTR__FlashTextField_005dbc10;
  local_28 = 0;
  local_20 = _DEFAULT_UI_FONT;
  /* try { // try from 00576249 to 0057624d has its CatchHandler @ 00576286 */
  this_00 = operator_new(0xa0);
  /* try { // try from 00576257 to 0057625b has its CatchHandler @ 00576296 */
  FontEmitter__FontEmitter__005861d0(this_00, (FontEmitterCreation *)&local_28);
  *(FontEmitter **)(self + 0x18) = this_00;
  *(uint32_t *)(this_00 + 0x5c) = arg2;
  *(uint32_t *)(self + 0x20) = 1;
  *(uint32_t *)(self + 0x10) = 2;
  return;
}

/* ======================================================================
 * FlashTextField__FlashTextField__005762b0  (Ghidra `FlashTextField` @ 005762b0)
 * Signature: uint8_t __thiscall FlashTextField(FlashTextField * self)
 * Class: FlashTextField
 * Calls: (none)
 * Called by: `FlashTextField__FlashTextField__00576210`
 */
/* FlashTextField__FlashTextField__005762b0() */

void __thiscall FlashTextField__FlashTextField__005762b0(FlashTextField *self)

{
  *(uint8_t ***)self = &PTR__FlashTextField_005dbc10;
  *(uint32_t *)(self + 0x20) = 1;
  *(uint64_t *)(self + 0x18) = 0;
  return;
}
