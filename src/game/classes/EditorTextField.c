/* src/game/classes/EditorTextField.c — 9 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "EditorTextField.h"

/* ======================================================================
 * EditorTextField__EditorTextField  (Ghidra `~EditorTextField` @ 0049e200)
 * Signature: uint8_t __thiscall ~EditorTextField(EditorTextField * self)
 * Class: EditorTextField
 * Calls: `EditorTextField__EditorTextField__0049e3f0`
 * Called by: (none)
 */
/* EditorTextField__EditorTextField__0049e3f0() */

void __thiscall EditorTextField__EditorTextField__0049e3f0(EditorTextField *self)

{
  *(uint8_t ***)self = &PTR__EditorButton_005c4390;
  if (*(long **)(self + 8) != (long *)0x0) {
    (**(code **)(**(long **)(self + 8) + 8))();
  }
  *(uint64_t *)(self + 8) = 0;
  return;
}

/* ======================================================================
 * EditorTextField__SetMouseOverState  (Ghidra `SetMouseOverState` @ 0049e230)
 * Signature: uint8_t __stdcall SetMouseOverState(void)
 * Class: EditorTextField
 * Calls: (none)
 * Called by: (none)
 */
/* EditorTextField__SetMouseOverState() */

void EditorTextField__SetMouseOverState(void)

{
  return;
}

/* ======================================================================
 * EditorTextField__SetMouseOutState  (Ghidra `SetMouseOutState` @ 0049e240)
 * Signature: uint8_t __stdcall SetMouseOutState(void)
 * Class: EditorTextField
 * Calls: (none)
 * Called by: (none)
 */
/* EditorTextField__SetMouseOutState() */

void EditorTextField__SetMouseOutState(void)

{
  return;
}

/* ======================================================================
 * EditorTextField__EditorTextField__0049e3f0  (Ghidra `~EditorTextField` @ 0049e3f0)
 * Signature: uint8_t __thiscall ~EditorTextField(EditorTextField * self)
 * Class: EditorTextField
 * Calls: `operator_delete`
 * Called by: `EditorTextField__EditorTextField`
 */
/* EditorTextField__EditorTextField__0049e3f0() */

void __thiscall EditorTextField__EditorTextField__0049e3f0(EditorTextField *self)

{
  *(uint8_t ***)self = &PTR__EditorButton_005c4390;
  if (*(long **)(self + 8) != (long *)0x0) {
    (**(code **)(**(long **)(self + 8) + 8))();
  }
  *(uint64_t *)(self + 8) = 0;
  operator_delete(self);
  return;
}

/* ======================================================================
 * EditorTextField__UnSelectedClick  (Ghidra `UnSelectedClick` @ 0049e520)
 * Signature: uint8_t __stdcall UnSelectedClick(void)
 * Class: EditorTextField
 * Calls: `FlashEditableTextField__GetUITextField`
 * Called by: (none)
 */
/* EditorTextField__UnSelectedClick() */

void EditorTextField__UnSelectedClick(void)

{
  long *plVar1;
  uint64_t in_RSI;
  long in_RDI;

  plVar1 =
      (long *)FlashEditableTextField__GetUITextField(*(FlashEditableTextField **)(in_RDI + 0x50));
  /* WARNING: Could not recover jumptable at 0x0049e53b. Too many branches */
  /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x38))(plVar1, in_RSI, *(code **)(*plVar1 + 0x38));
  return;
}

/* ======================================================================
 * EditorTextField__SetSelectedState  (Ghidra `SetSelectedState` @ 0049e540)
 * Signature: uint8_t __stdcall SetSelectedState(void)
 * Class: EditorTextField
 * Calls: `FlashEditableTextField__GetUITextField`
 * Called by: (none)
 */
/* EditorTextField__SetSelectedState() */

void EditorTextField__SetSelectedState(void)

{
  long *plVar1;
  uint64_t in_RSI;
  long in_RDI;

  plVar1 =
      (long *)FlashEditableTextField__GetUITextField(*(FlashEditableTextField **)(in_RDI + 0x50));
  /* WARNING: Could not recover jumptable at 0x0049e55b. Too many branches */
  /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1, in_RSI, *(code **)(*plVar1 + 0x30));
  return;
}

/* ======================================================================
 * EditorTextField__Update  (Ghidra `Update` @ 004a2920)
 * Signature: uint8_t __stdcall Update(void)
 * Class: EditorTextField
 * Calls: `EditorButton__Update`, `FlashEditableTextField__GetUITextField`
 * Called by: (none)
 */
/* EditorTextField__Update() */

void EditorTextField__Update(void)

{
  long *plVar1;
  uint64_t in_RSI;
  EditorButton *in_RDI;

  EditorButton__Update(in_RDI);
  plVar1 =
      (long *)FlashEditableTextField__GetUITextField(*(FlashEditableTextField **)(in_RDI + 0x50));
  /* WARNING: Could not recover jumptable at 0x004a293d. Too many branches */
  /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x10))(plVar1, in_RSI, *(code **)(*plVar1 + 0x10));
  return;
}

/* ======================================================================
 * EditorTextField__EditorTextField__004a2990  (Ghidra `EditorTextField` @ 004a2990)
 * Signature: uint8_t __thiscall EditorTextField(EditorTextField * self, FlashLibraryInstance * arg1, FlashLibraryInstance * arg2)
 * Class: EditorTextField
 * Calls: (none)
 * Called by: (none)
 */
/* EditorTextField__EditorTextField__004a2990(FlashLibraryInstance*, FlashLibraryInstance*) */

void __thiscall EditorTextField__EditorTextField__004a2990(EditorTextField *self,
                                                           FlashLibraryInstance *arg1,
                                                           FlashLibraryInstance *arg2)

{
  uint32_t uVar1;

  *(uint8_t ***)self = &PTR__EditorButton_005c4390;
  *(FlashLibraryInstance **)(self + 8) = arg2;
  *(FlashLibraryInstance **)(self + 0x10) = arg1;
  *(uint64_t *)(self + 0x18) = 0;
  *(uint64_t *)(self + 0x20) = 0;
  *(uint64_t *)(self + 0x28) = 0;
  *(uint64_t *)(self + 0x30) = 0;
  *(uint64_t *)(self + 0x38) = 0;
  *(uint64_t *)(self + 0x40) = 0;
  *(uint16_t *)(self + 0x48) = 0;
  self[0x4a] = (EditorTextField)0x0;
  self[0x4b] = (EditorTextField)0x0;
  uVar1 = *(uint32_t *)(arg1 + 0x20);
  *(uint8_t ***)self = &PTR__EditorTextField_005c43f0;
  *(uint32_t *)(self + 0x4c) = uVar1;
  return;
}

/* ======================================================================
 * EditorTextField__SetTextField  (Ghidra `SetTextField` @ 004a29f0)
 * Signature: uint8_t __thiscall SetTextField(EditorTextField * self, FlashEditableTextField * arg1)
 * Class: EditorTextField
 * Calls: (none)
 * Called by: `SMBLevelPortalInterface__Initialize`
 */
/* EditorTextField__SetTextField(FlashEditableTextField*) */

void __thiscall EditorTextField__SetTextField(EditorTextField *self, FlashEditableTextField *arg1)

{
  *(FlashEditableTextField **)(self + 0x50) = arg1;
  return;
}
