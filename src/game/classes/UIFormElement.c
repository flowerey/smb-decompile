/* src/game/classes/UIFormElement.c — 8 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "UIFormElement.h"

/* ======================================================================
 * UIFormElement__UIFormElement  (Ghidra `~UIFormElement` @ 005a2110)
 * Signature: uint8_t __thiscall ~UIFormElement(UIFormElement * self)
 * Class: UIFormElement
 * Calls: `UIFormElement__UIFormElement__005a2180`
 * Called by: (none)
 */
/* UIFormElement__UIFormElement__005a2180() */

void __thiscall UIFormElement__UIFormElement__005a2180(UIFormElement *self)

{
  *(uint8_t ***)self = &PTR__UIFormElement_005dd830;
  return;
}

/* ======================================================================
 * UIFormElement__MouseOut  (Ghidra `MouseOut` @ 005a2120)
 * Signature: uint8_t __stdcall MouseOut(void)
 * Class: UIFormElement
 * Calls: (none)
 * Called by: (none)
 */
/* UIFormElement__MouseOut() */

void UIFormElement__MouseOut(void)

{
  return;
}

/* ======================================================================
 * UIFormElement__MouseOver  (Ghidra `MouseOver` @ 005a2130)
 * Signature: uint8_t __stdcall MouseOver(void)
 * Class: UIFormElement
 * Calls: (none)
 * Called by: (none)
 */
/* UIFormElement__MouseOver() */

void UIFormElement__MouseOver(void)

{
  return;
}

/* ======================================================================
 * UIFormElement__ClickOn  (Ghidra `ClickOn` @ 005a2140)
 * Signature: uint8_t __stdcall ClickOn(void)
 * Class: UIFormElement
 * Calls: (none)
 * Called by: (none)
 */
/* UIFormElement__ClickOn() */

void UIFormElement__ClickOn(void)

{
  return;
}

/* ======================================================================
 * UIFormElement__ClickOff  (Ghidra `ClickOff` @ 005a2150)
 * Signature: uint8_t __stdcall ClickOff(void)
 * Class: UIFormElement
 * Calls: (none)
 * Called by: (none)
 */
/* UIFormElement__ClickOff() */

void UIFormElement__ClickOff(void)

{
  return;
}

/* ======================================================================
 * UIFormElement__Activate  (Ghidra `Activate` @ 005a2160)
 * Signature: uint8_t __thiscall Activate(UIFormElement * self)
 * Class: UIFormElement
 * Calls: (none)
 * Called by: (none)
 */
/* UIFormElement__Activate() */

void __thiscall UIFormElement__Activate(UIFormElement *self)

{
  *(uint32_t *)(self + 0x38) = 1;
  return;
}

/* ======================================================================
 * UIFormElement__DeActivate  (Ghidra `DeActivate` @ 005a2170)
 * Signature: uint8_t __thiscall DeActivate(UIFormElement * self)
 * Class: UIFormElement
 * Calls: (none)
 * Called by: (none)
 */
/* UIFormElement__DeActivate() */

void __thiscall UIFormElement__DeActivate(UIFormElement *self)

{
  *(uint32_t *)(self + 0x38) = 0;
  return;
}

/* ======================================================================
 * UIFormElement__UIFormElement__005a2180  (Ghidra `~UIFormElement` @ 005a2180)
 * Signature: uint8_t __thiscall ~UIFormElement(UIFormElement * self)
 * Class: UIFormElement
 * Calls: `operator_delete`
 * Called by: `UIFormElement__UIFormElement`
 */
/* UIFormElement__UIFormElement__005a2180() */

void __thiscall UIFormElement__UIFormElement__005a2180(UIFormElement *self)

{
  *(uint8_t ***)self = &PTR__UIFormElement_005dd830;
  operator_delete(self);
  return;
}
