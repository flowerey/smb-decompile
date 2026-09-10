/* src/game/classes/SMBControlsMenu.c — 9 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "SMBControlsMenu.h"

/* ======================================================================
 * SMBControlsMenu__DeactivationFinished  (Ghidra `DeactivationFinished` @ 00501880)
 * Signature: uint8_t __thiscall DeactivationFinished(SMBControlsMenu * self)
 * Class: SMBControlsMenu
 * Calls: (none)
 * Called by: (none)
 */
/* SMBControlsMenu__DeactivationFinished() */

void __thiscall SMBControlsMenu__DeactivationFinished(SMBControlsMenu *self)

{
  *(ushort *)(self + 0x34) = *(ushort *)(self + 0x34) & 0xfc00;
  *(uint32_t *)(self + 0x30) = 4;
  return;
}

/* ======================================================================
 * SMBControlsMenu__Update  (Ghidra `Update` @ 00501a10)
 * Signature: uint8_t __thiscall Update(SMBControlsMenu * self)
 * Class: SMBControlsMenu
 * Calls: `TPlayer__GetJoystick`
 * Called by: (none)
 */
/* SMBControlsMenu__Update() */

void __thiscall SMBControlsMenu__Update(SMBControlsMenu *self)

{
  int *piVar1;
  
  piVar1 = (int *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  if (*piVar1 != 1) {
    *(uint64_t *)(self + 0x28) = *(uint64_t *)(self + 0x58);
    return;
  }
  *(uint64_t *)(self + 0x28) = *(uint64_t *)(self + 0x60);
  return;
}

/* ======================================================================
 * SMBControlsMenu__Initialize  (Ghidra `Initialize` @ 00501dc0)
 * Signature: uint8_t __thiscall Initialize(SMBControlsMenu * self)
 * Class: SMBControlsMenu
 * Calls: `FlashAnimationLibrary__GetMovieClip__005731d0`, `GetLocalizedText`
 * Called by: `GSMBMenu__GSMBMenu__004d8690`
 */
/* SMBControlsMenu__Initialize() */

void __thiscall SMBControlsMenu__Initialize(SMBControlsMenu *self)

{
  uint64_t uVar1;
  
  (**(code **)(*(long *)self + 0x10))(self,0,"howidle");
  if (*(long **)(self + 0x28) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x28) + 8))();
  }
  *(uint64_t *)(self + 0x28) = 0;
  uVar1 = FlashAnimationLibrary__GetMovieClip__005731d0(*(FlashAnimationLibrary **)(self + 8),"howidle");
  *(uint64_t *)(self + 0x60) = uVar1;
  uVar1 = FlashAnimationLibrary__GetMovieClip__005731d0(*(FlashAnimationLibrary **)(self + 8),"how2idle");
  *(uint64_t *)(self + 0x58) = uVar1;
  *(uint64_t *)(self + 0x28) = *(uint64_t *)(self + 0x60);
  uVar1 = GetLocalizedText(0xb6);
  *(uint64_t *)(self + 0x50) = uVar1;
  return;
}

/* ======================================================================
 * SMBControlsMenu__Render  (Ghidra `Render` @ 005029f0)
 * Signature: uint8_t __thiscall Render(SMBControlsMenu * self)
 * Class: SMBControlsMenu
 * Calls: `SMBPopupMenu__Render__00502110`, `TPlayer__GetJoystick`
 * Called by: (none)
 */
/* SMBControlsMenu__Render() */

void __thiscall SMBControlsMenu__Render(SMBControlsMenu *self)

{
  int *piVar1;
  
  piVar1 = (int *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  if (*piVar1 == 1) {
    *(uint64_t *)(self + 0x28) = *(uint64_t *)(self + 0x60);
  }
  else {
    *(uint64_t *)(self + 0x28) = *(uint64_t *)(self + 0x58);
  }
  if ((*(ushort *)(self + 0x34) & 0x3ff) == 0) {
    return;
  }
  SMBPopupMenu__Render__00502110((SMBPopupMenu *)self);
  return;
}

/* ======================================================================
 * SMBControlsMenu__Activate  (Ghidra `Activate` @ 00503590)
 * Signature: uint8_t __thiscall Activate(SMBControlsMenu * self)
 * Class: SMBControlsMenu
 * Calls: `FlashAnimationLibrary__GetTextField`, `GetLocalizedText`, `SMBPopupMenu__Activate`
 * Called by: (none)
 */
/* SMBControlsMenu__Activate() */

void __thiscall SMBControlsMenu__Activate(SMBControlsMenu *self)

{
  uint64_t uVar1;
  wchar_t *pwVar2;
  
  SMBPopupMenu__Activate((SMBPopupMenu *)self);
  uVar1 = GetLocalizedText(0x1c);
  pwVar2 = (wchar_t *)
           FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8),"move");
  if (pwVar2 != (wchar_t *)0x0) {
    FlashTextField__SetText(pwVar2,uVar1);
  }
  uVar1 = GetLocalizedText(0x1a);
  pwVar2 = (wchar_t *)
           FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8),"run");
  if (pwVar2 != (wchar_t *)0x0) {
    FlashTextField__SetText(pwVar2,uVar1);
  }
  uVar1 = GetLocalizedText(0x1b);
  pwVar2 = (wchar_t *)
           FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8),"jump");
  if (pwVar2 != (wchar_t *)0x0) {
    FlashTextField__SetText(pwVar2,uVar1);
    return;
  }
  return;
}

/* ======================================================================
 * SMBControlsMenu__SMBControlsMenu  (Ghidra `~SMBControlsMenu` @ 00503e90)
 * Signature: uint8_t __thiscall ~SMBControlsMenu(SMBControlsMenu * self)
 * Class: SMBControlsMenu
 * Calls: `SMBControlsMenu__SMBControlsMenu__00503fe0`, `SMBPopupMenu__SMBPopupMenu__00503f20`
 * Called by: (none)
 */
/* SMBControlsMenu__SMBControlsMenu__00503fe0() */

void __thiscall SMBControlsMenu__SMBControlsMenu__00503fe0(SMBControlsMenu *self)

{
  *(uint8_t ***)self = &PTR__SMBControlsMenu_005c77f0;
  if (*(long **)(self + 0x60) != (long *)0x0) {
                    /* try { // try from 00503eab to 00503ec4 has its CatchHandler @ 00503ee2 */
    (**(code **)(**(long **)(self + 0x60) + 8))();
  }
  *(uint64_t *)(self + 0x60) = 0;
  if (*(long **)(self + 0x58) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x58) + 8))();
  }
  *(uint64_t *)(self + 0x58) = 0;
  *(uint64_t *)(self + 0x28) = 0;
  SMBPopupMenu__SMBPopupMenu__00503f20((SMBPopupMenu *)self);
  return;
}

/* ======================================================================
 * SMBControlsMenu__SMBControlsMenu__00503fe0  (Ghidra `~SMBControlsMenu` @ 00503fe0)
 * Signature: uint8_t __thiscall ~SMBControlsMenu(SMBControlsMenu * self)
 * Class: SMBControlsMenu
 * Calls: `SMBPopupMenu__SMBPopupMenu__00503f20`, `operator_delete`
 * Called by: `GSMBMenu__GSMBMenu`, `SMBControlsMenu__SMBControlsMenu`
 */
/* SMBControlsMenu__SMBControlsMenu__00503fe0() */

void __thiscall SMBControlsMenu__SMBControlsMenu__00503fe0(SMBControlsMenu *self)

{
  *(uint8_t ***)self = &PTR__SMBControlsMenu_005c77f0;
  if (*(long **)(self + 0x60) != (long *)0x0) {
                    /* try { // try from 00503ffb to 00504014 has its CatchHandler @ 0050403a */
    (**(code **)(**(long **)(self + 0x60) + 8))();
  }
  *(uint64_t *)(self + 0x60) = 0;
  if (*(long **)(self + 0x58) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x58) + 8))();
  }
  *(uint64_t *)(self + 0x58) = 0;
  *(uint64_t *)(self + 0x28) = 0;
  SMBPopupMenu__SMBPopupMenu__00503f20((SMBPopupMenu *)self);
  operator_delete(self);
  return;
}

/* ======================================================================
 * SMBControlsMenu__DeActivate  (Ghidra `DeActivate` @ 00504060)
 * Signature: uint8_t __thiscall DeActivate(SMBControlsMenu * self)
 * Class: SMBControlsMenu
 * Calls: `Joystick__AddButtonCallback`, `Joystick__RestoreCallbacks`, `TKeyboard__AddKeyCallback`, `TKeyboard__RestoreCallbacks`, `TPlayer__GetJoystick`
 * Called by: (none)
 */
/* SMBControlsMenu__DeActivate() */

void __thiscall SMBControlsMenu__DeActivate(SMBControlsMenu *self)

{
  Joystick *pJVar1;
  
  *(uint32_t *)(self + 0x30) = 2;
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddButtonCallback(pJVar1,1,0,0);
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__RestoreCallbacks(pJVar1,(InputCallback **)(self + 0x40),(InputCallback **)(self + 0x38))
  ;
  if (Keyboard != (TKeyboard *)0x0) {
    TKeyboard__AddKeyCallback(Keyboard,0x23,0,0);
    TKeyboard__RestoreCallbacks(Keyboard,(InputCallback **)(self + 0x48));
    return;
  }
  return;
}

/* ======================================================================
 * SMBControlsMenu__SMBControlsMenu__00504970  (Ghidra `SMBControlsMenu` @ 00504970)
 * Signature: uint8_t __thiscall SMBControlsMenu(SMBControlsMenu * self)
 * Class: SMBControlsMenu
 * Calls: `GetLocalizedText`
 * Called by: `GSMBMenu__GSMBMenu__004d8690`
 */
/* SMBControlsMenu__SMBControlsMenu__00504970() */

void __thiscall SMBControlsMenu__SMBControlsMenu__00504970(SMBControlsMenu *self)

{
  uint64_t uVar1;
  
  *(ushort *)(self + 0x34) = *(ushort *)(self + 0x34) & 0xfc00;
  *(uint8_t ***)self = &PTR__SMBPopupMenu_005c76d0;
  *(uint64_t *)(self + 8) = 0;
  *(uint64_t *)(self + 0x10) = 0;
  *(uint64_t *)(self + 0x18) = 0;
  *(uint64_t *)(self + 0x20) = 0;
  *(uint64_t *)(self + 0x28) = 0;
  *(uint32_t *)(self + 0x30) = 0;
  *(uint *)(self + 0x34) = *(uint *)(self + 0x34) & 0xfff003ff | 0x400;
  *(uint16_t *)(self + 0x36) = 0;
  uVar1 = GetLocalizedText(0x16);
  *(uint8_t ***)self = &PTR__SMBControlsMenu_005c77f0;
  *(uint64_t *)(self + 0x50) = uVar1;
  *(uint64_t *)(self + 0x60) = 0;
  *(uint64_t *)(self + 0x58) = 0;
  return;
}
