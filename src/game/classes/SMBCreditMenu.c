/* src/game/classes/SMBCreditMenu.c — 9 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "SMBCreditMenu.h"

/* ======================================================================
 * SMBCreditMenu__Update  (Ghidra `Update` @ 00501840)
 * Signature: uint8_t __stdcall Update(void)
 * Class: SMBCreditMenu
 * Calls: (none)
 * Called by: (none)
 */
/* SMBCreditMenu__Update() */

void SMBCreditMenu__Update(void)

{
  return;
}

/* ======================================================================
 * SMBCreditMenu__DeactivationFinished  (Ghidra `DeactivationFinished` @ 00501850)
 * Signature: uint8_t __thiscall DeactivationFinished(SMBCreditMenu * self)
 * Class: SMBCreditMenu
 * Calls: (none)
 * Called by: (none)
 */
/* SMBCreditMenu__DeactivationFinished() */

void __thiscall SMBCreditMenu__DeactivationFinished(SMBCreditMenu *self)

{
  *(ushort *)(self + 0x34) = *(ushort *)(self + 0x34) & 0xfc00;
  *(uint32_t *)(self + 0x30) = 4;
  return;
}

/* ======================================================================
 * SMBCreditMenu__Initialize  (Ghidra `Initialize` @ 005019e0)
 * Signature: uint8_t __thiscall Initialize(SMBCreditMenu * self)
 * Class: SMBCreditMenu
 * Calls: `GetLocalizedText`
 * Called by: `GSMBMenu__GSMBMenu__004d8690`
 */
/* SMBCreditMenu__Initialize() */

void __thiscall SMBCreditMenu__Initialize(SMBCreditMenu *self)

{
  uint64_t uVar1;
  
  (**(code **)(*(long *)self + 0x10))(self,0,"creditsidle");
  uVar1 = GetLocalizedText(0x23);
  *(uint64_t *)(self + 0x50) = uVar1;
  return;
}

/* ======================================================================
 * SMBCreditMenu__Render  (Ghidra `Render` @ 00502a60)
 * Signature: uint8_t __thiscall Render(SMBCreditMenu * self)
 * Class: SMBCreditMenu
 * Calls: `SMBPopupMenu__Render__00502110`
 * Called by: (none)
 */
/* SMBCreditMenu__Render() */

void __thiscall SMBCreditMenu__Render(SMBCreditMenu *self)

{
  if ((*(ushort *)(self + 0x34) & 0x3ff) == 0) {
    return;
  }
  SMBPopupMenu__Render__00502110((SMBPopupMenu *)self);
  return;
}

/* ======================================================================
 * SMBCreditMenu__Activate  (Ghidra `Activate` @ 00503640)
 * Signature: uint8_t __thiscall Activate(SMBCreditMenu * self)
 * Class: SMBCreditMenu
 * Calls: `FlashAnimationLibrary__GetTextField`, `GetLocalizedText`, `SMBPopupMenu__Activate`
 * Called by: (none)
 */
/* SMBCreditMenu__Activate() */

void __thiscall SMBCreditMenu__Activate(SMBCreditMenu *self)

{
  uint64_t uVar1;
  wchar_t *pwVar2;
  
  SMBPopupMenu__Activate((SMBPopupMenu *)self);
  uVar1 = GetLocalizedText(0x116);
  pwVar2 = (wchar_t *)
           FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8),"tommy");
  if (pwVar2 != (wchar_t *)0x0) {
    FlashTextField__SetText(pwVar2,uVar1);
  }
  uVar1 = GetLocalizedText(0x80);
  pwVar2 = (wchar_t *)
           FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8),"tommytitle");
  if (pwVar2 != (wchar_t *)0x0) {
    FlashTextField__SetText(pwVar2,uVar1);
  }
  uVar1 = GetLocalizedText(0x117);
  pwVar2 = (wchar_t *)
           FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8),"ed");
  if (pwVar2 != (wchar_t *)0x0) {
    FlashTextField__SetText(pwVar2,uVar1);
  }
  uVar1 = GetLocalizedText(0x7f);
  pwVar2 = (wchar_t *)
           FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8),"edtitle");
  if (pwVar2 != (wchar_t *)0x0) {
    FlashTextField__SetText(pwVar2,uVar1);
  }
  uVar1 = GetLocalizedText(0x118);
  pwVar2 = (wchar_t *)
           FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8),"danny");
  if (pwVar2 != (wchar_t *)0x0) {
    FlashTextField__SetText(pwVar2,uVar1);
  }
  uVar1 = GetLocalizedText(0x81);
  pwVar2 = (wchar_t *)
           FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8),"dannytitle");
  if (pwVar2 != (wchar_t *)0x0) {
    FlashTextField__SetText(pwVar2,uVar1);
  }
  uVar1 = GetLocalizedText(0x119);
  pwVar2 = (wchar_t *)
           FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8),"jordan");
  if (pwVar2 != (wchar_t *)0x0) {
    FlashTextField__SetText(pwVar2,uVar1);
  }
  GetLocalizedText(0x82);
  pwVar2 = (wchar_t *)
           FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8),"jordantitle");
  if (pwVar2 != (wchar_t *)0x0) {
    FlashTextField__SetText(pwVar2);
  }
  SMBCreditRoll__SetCreditsText(*(FlashAnimationLibrary **)(self + 8),0);
  return;
}

/* ======================================================================
 * SMBCreditMenu__SMBCreditMenu  (Ghidra `~SMBCreditMenu` @ 00503f10)
 * Signature: uint8_t __thiscall ~SMBCreditMenu(SMBCreditMenu * self)
 * Class: SMBCreditMenu
 * Calls: `SMBCreditMenu__SMBCreditMenu__00503f40`, `SMBPopupMenu__SMBPopupMenu__00503f20`
 * Called by: (none)
 */
/* SMBCreditMenu__SMBCreditMenu__00503f40() */

void __thiscall SMBCreditMenu__SMBCreditMenu__00503f40(SMBCreditMenu *self)

{
  *(uint8_t ***)self = &PTR__SMBCreditMenu_005c7730;
  SMBPopupMenu__SMBPopupMenu__00503f20((SMBPopupMenu *)self);
  return;
}

/* ======================================================================
 * SMBCreditMenu__SMBCreditMenu__00503f40  (Ghidra `~SMBCreditMenu` @ 00503f40)
 * Signature: uint8_t __thiscall ~SMBCreditMenu(SMBCreditMenu * self)
 * Class: SMBCreditMenu
 * Calls: `SMBPopupMenu__SMBPopupMenu__00503f20`, `operator_delete`
 * Called by: `GSMBMenu__GSMBMenu`, `SMBCreditMenu__SMBCreditMenu`
 */
/* SMBCreditMenu__SMBCreditMenu__00503f40() */

void __thiscall SMBCreditMenu__SMBCreditMenu__00503f40(SMBCreditMenu *self)

{
  *(uint8_t ***)self = &PTR__SMBCreditMenu_005c7730;
  SMBPopupMenu__SMBPopupMenu__00503f20((SMBPopupMenu *)self);
  operator_delete(self);
  return;
}

/* ======================================================================
 * SMBCreditMenu__DeActivate  (Ghidra `DeActivate` @ 005044c0)
 * Signature: uint8_t __thiscall DeActivate(SMBCreditMenu * self)
 * Class: SMBCreditMenu
 * Calls: `Joystick__AddButtonCallback`, `Joystick__RestoreCallbacks`, `TKeyboard__AddKeyCallback`, `TKeyboard__RestoreCallbacks`, `TPlayer__GetJoystick`
 * Called by: (none)
 */
/* SMBCreditMenu__DeActivate() */

void __thiscall SMBCreditMenu__DeActivate(SMBCreditMenu *self)

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
 * SMBCreditMenu__SMBCreditMenu__00504890  (Ghidra `SMBCreditMenu` @ 00504890)
 * Signature: uint8_t __thiscall SMBCreditMenu(SMBCreditMenu * self)
 * Class: SMBCreditMenu
 * Calls: `GetLocalizedText`
 * Called by: `GSMBMenu__GSMBMenu__004d8690`
 */
/* SMBCreditMenu__SMBCreditMenu__00504890() */

void __thiscall SMBCreditMenu__SMBCreditMenu__00504890(SMBCreditMenu *self)

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
  *(uint8_t ***)self = &PTR__SMBCreditMenu_005c7730;
  *(uint64_t *)(self + 0x50) = uVar1;
  return;
}
