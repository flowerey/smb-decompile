/* src/game/classes/SMBStatisticsMenu.c — 9 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "SMBStatisticsMenu.h"

/* ======================================================================
 * SMBStatisticsMenu__Update  (Ghidra `Update` @ 00501890)
 * Signature: uint8_t __stdcall Update(void)
 * Class: SMBStatisticsMenu
 * Calls: (none)
 * Called by: (none)
 */
/* SMBStatisticsMenu__Update() */

void SMBStatisticsMenu__Update(void)

{
  return;
}

/* ======================================================================
 * SMBStatisticsMenu__DeactivationFinished  (Ghidra `DeactivationFinished` @ 005018a0)
 * Signature: uint8_t __thiscall DeactivationFinished(SMBStatisticsMenu * self)
 * Class: SMBStatisticsMenu
 * Calls: (none)
 * Called by: (none)
 */
/* SMBStatisticsMenu__DeactivationFinished() */

void __thiscall SMBStatisticsMenu__DeactivationFinished(SMBStatisticsMenu *self)

{
  *(ushort *)(self + 0x34) = *(ushort *)(self + 0x34) & 0xfc00;
  *(uint32_t *)(self + 0x30) = 4;
  return;
}

/* ======================================================================
 * SMBStatisticsMenu__Initialize  (Ghidra `Initialize` @ 00501980)
 * Signature: uint8_t __thiscall Initialize(SMBStatisticsMenu * self)
 * Class: SMBStatisticsMenu
 * Calls: `GetLocalizedText`
 * Called by: `GSMBMenu__GSMBMenu__004d8690`
 */
/* SMBStatisticsMenu__Initialize() */

void __thiscall SMBStatisticsMenu__Initialize(SMBStatisticsMenu *self)

{
  uint64_t uVar1;

  (**(code **)(*(long *)self + 0x10))(self, 0, "statsidle");
  uVar1 = GetLocalizedText(0x1f);
  *(uint64_t *)(self + 0x50) = uVar1;
  return;
}

/* ======================================================================
 * SMBStatisticsMenu__Render  (Ghidra `Render` @ 005029d0)
 * Signature: uint8_t __thiscall Render(SMBStatisticsMenu * self)
 * Class: SMBStatisticsMenu
 * Calls: `SMBPopupMenu__Render__00502110`
 * Called by: (none)
 */
/* SMBStatisticsMenu__Render() */

void __thiscall SMBStatisticsMenu__Render(SMBStatisticsMenu *self)

{
  if ((*(ushort *)(self + 0x34) & 0x3ff) == 0) {
    return;
  }
  SMBPopupMenu__Render__00502110((SMBPopupMenu *)self);
  return;
}

/* ======================================================================
 * SMBStatisticsMenu__Activate  (Ghidra `Activate` @ 00502f20)
 * Signature: uint8_t __thiscall Activate(SMBStatisticsMenu * self)
 * Class: SMBStatisticsMenu
 * Calls: `FlashAnimationLibrary__GetTextField`, `GSMBChapterData__GetDarkWorldPercentComplete`, `GSMBChapterData__GetLightWorldPercentComplete`, `GSMBChapterData__GetTotalPercentComplete`, `GetLocalizedText`, `SMBPopupMenu__Activate`
 * Called by: (none)
 */
/* SMBStatisticsMenu__Activate() */

void __thiscall SMBStatisticsMenu__Activate(SMBStatisticsMenu *self)

{
  uint uVar1;
  wchar_t *pwVar2;
  uint64_t uVar3;

  SMBPopupMenu__Activate((SMBPopupMenu *)self);
  pwVar2 = (wchar_t *)FlashAnimationLibrary__GetTextField(SMBPopupMenu__pSMBPopupLib, "deathstat");
  if (pwVar2 != (wchar_t *)0x0) {
    uVar3 = GetLocalizedText(0x2e);
    FlashTextField__SetText(pwVar2, &DAT_005c6644 /* R:5.184804318001823e-44f */, uVar3);
  }
  pwVar2 = (wchar_t *)FlashAnimationLibrary__GetTextField(SMBPopupMenu__pSMBPopupLib, "totalstat");
  if (pwVar2 != (wchar_t *)0x0) {
    uVar3 = GetLocalizedText(0x2f);
    FlashTextField__SetText(pwVar2, &DAT_005c6644 /* R:5.184804318001823e-44f */, uVar3);
  }
  pwVar2 = (wchar_t *)FlashAnimationLibrary__GetTextField(SMBPopupMenu__pSMBPopupLib, "lightstat");
  if (pwVar2 != (wchar_t *)0x0) {
    uVar3 = GetLocalizedText(0x2a);
    FlashTextField__SetText(pwVar2, &DAT_005c6644 /* R:5.184804318001823e-44f */, uVar3);
  }
  pwVar2 = (wchar_t *)FlashAnimationLibrary__GetTextField(SMBPopupMenu__pSMBPopupLib, "darkstat");
  if (pwVar2 != (wchar_t *)0x0) {
    uVar3 = GetLocalizedText(0x2b);
    FlashTextField__SetText(pwVar2, &DAT_005c6644 /* R:5.184804318001823e-44f */, uVar3);
  }
  pwVar2 = (wchar_t *)FlashAnimationLibrary__GetTextField(SMBPopupMenu__pSMBPopupLib, "deathnum");
  if (pwVar2 != (wchar_t *)0x0) {
    FlashTextField__SetText(pwVar2, &DAT_005c6660 /* R:5.184804318001823e-44f */,
                            (ulong) * (uint *)(SMBChapterData + 0x1cd0));
  }
  pwVar2 = (wchar_t *)FlashAnimationLibrary__GetTextField(SMBPopupMenu__pSMBPopupLib, "totalnum");
  if (pwVar2 != (wchar_t *)0x0) {
    uVar1 = GSMBChapterData__GetTotalPercentComplete(SMBChapterData, 1);
    FlashTextField__SetText(pwVar2, &DAT_005c749c /* R:5.184804318001823e-44f */, (ulong)uVar1,
                            &DAT_005c6630 /* R:5.184804318001823e-44f */);
  }
  pwVar2 = (wchar_t *)FlashAnimationLibrary__GetTextField(SMBPopupMenu__pSMBPopupLib, "lightnum");
  if (pwVar2 != (wchar_t *)0x0) {
    uVar1 = GSMBChapterData__GetLightWorldPercentComplete(SMBChapterData);
    FlashTextField__SetText(pwVar2, &DAT_005c749c /* R:5.184804318001823e-44f */, (ulong)uVar1,
                            &DAT_005c6630 /* R:5.184804318001823e-44f */);
  }
  pwVar2 = (wchar_t *)FlashAnimationLibrary__GetTextField(SMBPopupMenu__pSMBPopupLib, "darknum");
  if (pwVar2 != (wchar_t *)0x0) {
    uVar1 = GSMBChapterData__GetDarkWorldPercentComplete(SMBChapterData);
    FlashTextField__SetText(pwVar2, &DAT_005c749c /* R:5.184804318001823e-44f */, (ulong)uVar1,
                            &DAT_005c6630 /* R:5.184804318001823e-44f */);
    return;
  }
  return;
}

/* ======================================================================
 * SMBStatisticsMenu__SMBStatisticsMenu  (Ghidra `~SMBStatisticsMenu` @ 00503e80)
 * Signature: uint8_t __thiscall ~SMBStatisticsMenu(SMBStatisticsMenu * self)
 * Class: SMBStatisticsMenu
 * Calls: `SMBPopupMenu__SMBPopupMenu__00503f20`, `SMBStatisticsMenu__SMBStatisticsMenu__00503f80`
 * Called by: (none)
 */
/* SMBStatisticsMenu__SMBStatisticsMenu__00503f80() */

void __thiscall SMBStatisticsMenu__SMBStatisticsMenu__00503f80(SMBStatisticsMenu *self)

{
  *(uint8_t ***)self = &PTR__SMBStatisticsMenu_005c7850;
  SMBPopupMenu__SMBPopupMenu__00503f20((SMBPopupMenu *)self);
  return;
}

/* ======================================================================
 * SMBStatisticsMenu__SMBStatisticsMenu__00503f80  (Ghidra `~SMBStatisticsMenu` @ 00503f80)
 * Signature: uint8_t __thiscall ~SMBStatisticsMenu(SMBStatisticsMenu * self)
 * Class: SMBStatisticsMenu
 * Calls: `SMBPopupMenu__SMBPopupMenu__00503f20`, `operator_delete`
 * Called by: `GSMBMenu__GSMBMenu`, `SMBStatisticsMenu__SMBStatisticsMenu`
 */
/* SMBStatisticsMenu__SMBStatisticsMenu__00503f80() */

void __thiscall SMBStatisticsMenu__SMBStatisticsMenu__00503f80(SMBStatisticsMenu *self)

{
  *(uint8_t ***)self = &PTR__SMBStatisticsMenu_005c7850;
  SMBPopupMenu__SMBPopupMenu__00503f20((SMBPopupMenu *)self);
  operator_delete(self);
  return;
}

/* ======================================================================
 * SMBStatisticsMenu__DeActivate  (Ghidra `DeActivate` @ 005043c0)
 * Signature: uint8_t __thiscall DeActivate(SMBStatisticsMenu * self)
 * Class: SMBStatisticsMenu
 * Calls: `Joystick__AddButtonCallback`, `Joystick__RestoreCallbacks`, `TKeyboard__AddKeyCallback`, `TKeyboard__RestoreCallbacks`, `TPlayer__GetJoystick`
 * Called by: (none)
 */
/* SMBStatisticsMenu__DeActivate() */

void __thiscall SMBStatisticsMenu__DeActivate(SMBStatisticsMenu *self)

{
  Joystick *pJVar1;

  *(uint32_t *)(self + 0x30) = 2;
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddButtonCallback(pJVar1, 1, 0, 0);
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__RestoreCallbacks(pJVar1, (InputCallback **)(self + 0x40),
                             (InputCallback **)(self + 0x38));
  if (Keyboard != (TKeyboard *)0x0) {
    TKeyboard__AddKeyCallback(Keyboard, 0x23, 0, 0);
    TKeyboard__RestoreCallbacks(Keyboard, (InputCallback **)(self + 0x48));
    return;
  }
  return;
}

/* ======================================================================
 * SMBStatisticsMenu__SMBStatisticsMenu__005049f0  (Ghidra `SMBStatisticsMenu` @ 005049f0)
 * Signature: uint8_t __thiscall SMBStatisticsMenu(SMBStatisticsMenu * self)
 * Class: SMBStatisticsMenu
 * Calls: `GetLocalizedText`
 * Called by: `GSMBMenu__GSMBMenu__004d8690`
 */
/* SMBStatisticsMenu__SMBStatisticsMenu__005049f0() */

void __thiscall SMBStatisticsMenu__SMBStatisticsMenu__005049f0(SMBStatisticsMenu *self)

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
  *(uint8_t ***)self = &PTR__SMBStatisticsMenu_005c7850;
  *(uint64_t *)(self + 0x50) = uVar1;
  return;
}
