/* src/game/classes/std.c — 8 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "std.h"

/* ======================================================================
 * std__string_string  (Ghidra `string` @ 004513f0)
 * Signature: uint8_t __thiscall string(string * self, string * arg1)
 * Class: std
 * Calls: (none)
 * Called by: `CreateAnimationLibResources`, `CreateSMBPaletteResources`, `CreateTextEmitterFontResources`, `EditorForm_LoadFormOk`, `FilePackage__GetFileFromPackage`, `FixFileCase`, `FlashAnimationLibrary__FlashAnimationLibrary__00576680`, `FlashSoundLibrary__AddSound`, `FragmentLinker__FragmentLinker__00587530`, `GLOBAL_sub_I_SMBCharactor` (+33 more)
 */
void __thiscall std__string_string(string *self, string *arg1)

{
  (*(code *)PTR_string_00815878)();
  return;
}

/* ======================================================================
 * std__string_string__00451890  (Ghidra `string` @ 00451890)
 * Signature: uint8_t __thiscall string(string * self, char * arg1, allocator * arg2)
 * Class: std
 * Calls: `std__string_string`
 * Called by: (none)
 */
void __thiscall std__string_string(string *self, char *arg1, allocator *arg2)

{
  (*(code *)PTR_string_00815ac8)();
  return;
}

/* ======================================================================
 * std__ios_base_Init_Init  (Ghidra `Init` @ 00451bf0)
 * Signature: uint8_t __thiscall Init(Init * self)
 * Class: std
 * Calls: (none)
 * Called by: `GLOBAL_sub_I_PropertiesFile`, `std__ios_base_Init_Init__00451ef0`, `std__ios_base_Init_Init__00825638`
 */
void __thiscall std__ios_base_Init_Init(Init *self)

{
  (*(code *)PTR_Init_00815c78)();
  return;
}

/* ======================================================================
 * std__string_string__00451c00  (Ghidra `string` @ 00451c00)
 * Signature: uint8_t __thiscall string(string * self, string * arg1, ulong arg2, ulong arg3)
 * Class: std
 * Calls: `std__string_string`
 * Called by: (none)
 */
void __thiscall std__string_string(string *self, string *arg1, ulong arg2, ulong arg3)

{
  (*(code *)PTR_string_00815c80)();
  return;
}

/* ======================================================================
 * std__string_string__00451c30  (Ghidra `~string` @ 00451c30)
 * Signature: uint8_t __thiscall ~string(string * self)
 * Class: std
 * Calls: `std__string_string`
 * Called by: (none)
 */
/* WARNING: Switch with 1 destination removed at 0x00451c30 */
/* std__string_string() */

void __thiscall std__string_string(string *self)

{
  do {
    /* WARNING: Do nothing block with infinite loop */
  } while (true);
}

/* ======================================================================
 * std__wstring_wstring  (Ghidra `~wstring` @ 00451dd0)
 * Signature: uint8_t __thiscall ~wstring(wstring * self)
 * Class: std
 * Calls: (none)
 * Called by: `UITextField__Update`, `std__wstring_wstring__00451ee0`, `std__wstring_wstring__00825718`, `std__wstring_wstring__008257a0`
 */
void __thiscall std__wstring_wstring(wstring *self)

{
  (*(code *)PTR__wstring_00815d68)();
  return;
}

/* ======================================================================
 * std__wstring_wstring__00451ee0  (Ghidra `wstring` @ 00451ee0)
 * Signature: uint8_t __thiscall wstring(wstring * self, wstring * arg1, ulong arg2, ulong arg3)
 * Class: std
 * Calls: `std__wstring_wstring`
 * Called by: (none)
 */
void __thiscall std__wstring_wstring(wstring *self, wstring *arg1, ulong arg2, ulong arg3)

{
  (*(code *)PTR_wstring_00815df0)();
  return;
}

/* ======================================================================
 * std__ios_base_Init_Init__00451ef0  (Ghidra `~Init` @ 00451ef0)
 * Signature: uint8_t __thiscall ~Init(Init * self)
 * Class: std
 * Calls: `std__ios_base_Init_Init`
 * Called by: (none)
 */
/* WARNING: Switch with 1 destination removed at 0x00451ef0 */
/* std__ios_base_Init_Init() */

void __thiscall std__ios_base_Init_Init(Init *self)

{
  do {
    /* WARNING: Do nothing block with infinite loop */
  } while (true);
}
