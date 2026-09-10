/* src/game/classes/SMBHowToPlayMenu.c — 9 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "SMBHowToPlayMenu.h"

/* ======================================================================
 * SMBHowToPlayMenu__Update  (Ghidra `Update` @ 00501860)
 * Signature: uint8_t __stdcall Update(void)
 * Class: SMBHowToPlayMenu
 * Calls: (none)
 * Called by: (none)
 */
/* SMBHowToPlayMenu__Update() */

void SMBHowToPlayMenu__Update(void)

{
  return;
}

/* ======================================================================
 * SMBHowToPlayMenu__DeactivationFinished  (Ghidra `DeactivationFinished` @ 00501870)
 * Signature: uint8_t __thiscall DeactivationFinished(SMBHowToPlayMenu * self)
 * Class: SMBHowToPlayMenu
 * Calls: (none)
 * Called by: (none)
 */
/* SMBHowToPlayMenu__DeactivationFinished() */

void __thiscall SMBHowToPlayMenu__DeactivationFinished(SMBHowToPlayMenu *self)

{
  *(ushort *)(self + 0x34) = *(ushort *)(self + 0x34) & 0xfc00;
  *(uint32_t *)(self + 0x30) = 4;
  return;
}

/* ======================================================================
 * SMBHowToPlayMenu__Initialize  (Ghidra `Initialize` @ 005019b0)
 * Signature: uint8_t __thiscall Initialize(SMBHowToPlayMenu * self)
 * Class: SMBHowToPlayMenu
 * Calls: `GetLocalizedText`
 * Called by: `GSMBMenu__GSMBMenu__004d8690`
 */
/* SMBHowToPlayMenu__Initialize() */

void __thiscall SMBHowToPlayMenu__Initialize(SMBHowToPlayMenu *self)

{
  uint64_t uVar1;
  
  (**(code **)(*(long *)self + 0x10))(self,0,"howtoidle");
  uVar1 = GetLocalizedText(0x22);
  *(uint64_t *)(self + 0x50) = uVar1;
  return;
}

/* ======================================================================
 * SMBHowToPlayMenu__Render  (Ghidra `Render` @ 00502a40)
 * Signature: uint8_t __thiscall Render(SMBHowToPlayMenu * self)
 * Class: SMBHowToPlayMenu
 * Calls: `SMBPopupMenu__Render__00502110`
 * Called by: (none)
 */
/* SMBHowToPlayMenu__Render() */

void __thiscall SMBHowToPlayMenu__Render(SMBHowToPlayMenu *self)

{
  if ((*(ushort *)(self + 0x34) & 0x3ff) == 0) {
    return;
  }
  SMBPopupMenu__Render__00502110((SMBPopupMenu *)self);
  return;
}

/* ======================================================================
 * SMBHowToPlayMenu__Activate  (Ghidra `Activate` @ 005030f0)
 * Signature: uint8_t __thiscall Activate(SMBHowToPlayMenu * self)
 * Class: SMBHowToPlayMenu
 * Calls: `FlashAnimationLibrary__GetTextField`, `FlashLibraryInstance__Reset`, `GetLocalizedText`, `Joystick__AddButtonCallback`, `Joystick__BackupCallbacks`, `SMBPopupDeActivateMenu`, `TKeyboard__AddKeyCallback`, `TKeyboard__BackupCallbacks`, `TPlayer__GetJoystick`
 * Called by: (none)
 */
/* SMBHowToPlayMenu__Activate() */

void __thiscall SMBHowToPlayMenu__Activate(SMBHowToPlayMenu *self)

{
  Joystick *pJVar1;
  wchar_t *pwVar2;
  uint64_t uVar3;
  
  *(ushort *)(self + 0x34) = *(ushort *)(self + 0x34) & 0xfc00 | 1;
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__BackupCallbacks(pJVar1,(InputCallback **)(self + 0x40),(InputCallback **)(self + 0x38));
  if ((*(uint *)(self + 0x34) & 0xffc00) == 0x400) {
    pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
    Joystick__AddButtonCallback(pJVar1,1,SMBPopupDeActivateMenu,self);
  }
  if (Keyboard != (TKeyboard *)0x0) {
    TKeyboard__BackupCallbacks(Keyboard,(InputCallback **)(self + 0x48));
    if ((*(uint *)(self + 0x34) & 0xffc00) == 0x400) {
      TKeyboard__AddKeyCallback(Keyboard,0x23,SMBPopupDeActivateMenu,self);
    }
  }
  *(uint32_t *)(self + 0x30) = 1;
  if (*(FlashLibraryInstance **)(self + 0x28) != (FlashLibraryInstance *)0x0) {
    FlashLibraryInstance__Reset(*(FlashLibraryInstance **)(self + 0x28));
  }
  if (*(FlashLibraryInstance **)(self + 0x18) != (FlashLibraryInstance *)0x0) {
    FlashLibraryInstance__Reset(*(FlashLibraryInstance **)(self + 0x18));
  }
  if (*(FlashLibraryInstance **)(self + 0x10) != (FlashLibraryInstance *)0x0) {
    FlashLibraryInstance__Reset(*(FlashLibraryInstance **)(self + 0x10));
  }
  if (*(FlashLibraryInstance **)(self + 0x20) != (FlashLibraryInstance *)0x0) {
    FlashLibraryInstance__Reset(*(FlashLibraryInstance **)(self + 0x20));
  }
  uVar3 = *(uint64_t *)(self + 0x50);
  pwVar2 = (wchar_t *)
           FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8),"title");
  if (pwVar2 != (wchar_t *)0x0) {
    FlashTextField__SetText(pwVar2,uVar3);
  }
  uVar3 = GetLocalizedText(0xb7);
  pwVar2 = (wchar_t *)
           FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8),"select");
  if (pwVar2 != (wchar_t *)0x0) {
    FlashTextField__SetText(pwVar2,uVar3);
  }
  uVar3 = GetLocalizedText(4);
  pwVar2 = (wchar_t *)
           FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8),"ok");
  if (pwVar2 != (wchar_t *)0x0) {
    FlashTextField__SetText(pwVar2,uVar3);
  }
  uVar3 = GetLocalizedText(10);
  pwVar2 = (wchar_t *)
           FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8),"back");
  if (pwVar2 != (wchar_t *)0x0) {
    FlashTextField__SetText(pwVar2,uVar3);
    return;
  }
  return;
}

/* ======================================================================
 * SMBHowToPlayMenu__SMBHowToPlayMenu  (Ghidra `~SMBHowToPlayMenu` @ 00503f00)
 * Signature: uint8_t __thiscall ~SMBHowToPlayMenu(SMBHowToPlayMenu * self)
 * Class: SMBHowToPlayMenu
 * Calls: `SMBHowToPlayMenu__SMBHowToPlayMenu__00503f60`, `SMBPopupMenu__SMBPopupMenu__00503f20`
 * Called by: (none)
 */
/* SMBHowToPlayMenu__SMBHowToPlayMenu__00503f60() */

void __thiscall SMBHowToPlayMenu__SMBHowToPlayMenu__00503f60(SMBHowToPlayMenu *self)

{
  *(uint8_t ***)self = &PTR__SMBHowToPlayMenu_005c7790;
  SMBPopupMenu__SMBPopupMenu__00503f20((SMBPopupMenu *)self);
  return;
}

/* ======================================================================
 * SMBHowToPlayMenu__SMBHowToPlayMenu__00503f60  (Ghidra `~SMBHowToPlayMenu` @ 00503f60)
 * Signature: uint8_t __thiscall ~SMBHowToPlayMenu(SMBHowToPlayMenu * self)
 * Class: SMBHowToPlayMenu
 * Calls: `SMBPopupMenu__SMBPopupMenu__00503f20`, `operator_delete`
 * Called by: `GSMBMenu__GSMBMenu`, `SMBHowToPlayMenu__SMBHowToPlayMenu`
 */
/* SMBHowToPlayMenu__SMBHowToPlayMenu__00503f60() */

void __thiscall SMBHowToPlayMenu__SMBHowToPlayMenu__00503f60(SMBHowToPlayMenu *self)

{
  *(uint8_t ***)self = &PTR__SMBHowToPlayMenu_005c7790;
  SMBPopupMenu__SMBPopupMenu__00503f20((SMBPopupMenu *)self);
  operator_delete(self);
  return;
}

/* ======================================================================
 * SMBHowToPlayMenu__DeActivate  (Ghidra `DeActivate` @ 00504440)
 * Signature: uint8_t __thiscall DeActivate(SMBHowToPlayMenu * self)
 * Class: SMBHowToPlayMenu
 * Calls: `Joystick__AddButtonCallback`, `Joystick__RestoreCallbacks`, `TKeyboard__AddKeyCallback`, `TKeyboard__RestoreCallbacks`, `TPlayer__GetJoystick`
 * Called by: (none)
 */
/* SMBHowToPlayMenu__DeActivate() */

void __thiscall SMBHowToPlayMenu__DeActivate(SMBHowToPlayMenu *self)

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
 * SMBHowToPlayMenu__SMBHowToPlayMenu__00504900  (Ghidra `SMBHowToPlayMenu` @ 00504900)
 * Signature: uint8_t __thiscall SMBHowToPlayMenu(SMBHowToPlayMenu * self)
 * Class: SMBHowToPlayMenu
 * Calls: `GetLocalizedText`
 * Called by: `GSMBMenu__GSMBMenu__004d8690`
 */
/* SMBHowToPlayMenu__SMBHowToPlayMenu__00504900() */

void __thiscall SMBHowToPlayMenu__SMBHowToPlayMenu__00504900(SMBHowToPlayMenu *self)

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
  *(uint8_t ***)self = &PTR__SMBHowToPlayMenu_005c7790;
  *(uint64_t *)(self + 0x50) = uVar1;
  return;
}
