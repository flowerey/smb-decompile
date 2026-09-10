/* src/game/classes/SMBSelectionMenu.c — 15 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "SMBSelectionMenu.h"

/* ======================================================================
 * SMBSelectionMenu__Initialize  (Ghidra `Initialize` @ 0050fe30)
 * Signature: uint8_t __stdcall Initialize(void)
 * Class: SMBSelectionMenu
 * Calls: (none)
 * Called by: (none)
 */
/* SMBSelectionMenu__Initialize() */

void SMBSelectionMenu__Initialize(void)

{
  return;
}

/* ======================================================================
 * SMBSelectionMenu__SelectingEndOfList  (Ghidra `SelectingEndOfList` @ 0050fe40)
 * Signature: uint8_t __stdcall SelectingEndOfList(void)
 * Class: SMBSelectionMenu
 * Calls: (none)
 * Called by: (none)
 */
/* SMBSelectionMenu__SelectingEndOfList() */

void SMBSelectionMenu__SelectingEndOfList(void)

{
  return;
}

/* ======================================================================
 * SMBSelectionMenu__SelectingBeginOfList  (Ghidra `SelectingBeginOfList` @ 0050fe50)
 * Signature: uint8_t __stdcall SelectingBeginOfList(void)
 * Class: SMBSelectionMenu
 * Calls: (none)
 * Called by: (none)
 */
/* SMBSelectionMenu__SelectingBeginOfList() */

void SMBSelectionMenu__SelectingBeginOfList(void)

{
  return;
}

/* ======================================================================
 * SMBSelectionMenu__DeActivate  (Ghidra `DeActivate` @ 0050fe60)
 * Signature: uint8_t __thiscall DeActivate(SMBSelectionMenu * self)
 * Class: SMBSelectionMenu
 * Calls: `Joystick__AddPOVCallback`, `SMBPopupMenu__DeActivate`, `TKeyboard__AddKeyCallback`, `TPlayer__GetJoystick`
 * Called by: `SMBInternetChapterSel__DeActivate`, `SMBLeaderBoardMenu__DeActivate`, `SMBLevelPortalInterface__DeActivate`, `SMBReplayManager__DeActivate`, `SMBSettingsMenu__DeActivate`
 */
/* SMBSelectionMenu__DeActivate() */

void __thiscall SMBSelectionMenu__DeActivate(SMBSelectionMenu *self)

{
  Joystick *pJVar1;

  if (*(int *)(self + 0x7c) != 1) {
    SMBPopupMenu__DeActivate((SMBPopupMenu *)self);
    return;
  }
  if (Keyboard != (TKeyboard *)0x0) {
    TKeyboard__AddKeyCallback(Keyboard, 0x1f, 0, 0);
    TKeyboard__AddKeyCallback(Keyboard, 0x7f, 0, 0);
  }
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddPOVCallback(pJVar1, 0, 0, 0);
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddPOVCallback(pJVar1, 2, 0, 0);
  SMBPopupMenu__DeActivate((SMBPopupMenu *)self);
  return;
}

/* ======================================================================
 * SMBSelectionMenu__Render  (Ghidra `Render` @ 0050fef0)
 * Signature: uint8_t __thiscall Render(SMBSelectionMenu * self)
 * Class: SMBSelectionMenu
 * Calls: `SMBPopupMenu__Render__00502110`
 * Called by: `SMBLeaderBoardMenu__Render`, `SMBLevelPortalInterface__Render`, `SMBSettingsMenu__Render`
 */
/* SMBSelectionMenu__Render() */

void __thiscall SMBSelectionMenu__Render(SMBSelectionMenu *self)

{
  if ((*(ushort *)(self + 0x34) & 0x3ff) == 0) {
    return;
  }
  SMBPopupMenu__Render__00502110((SMBPopupMenu *)self);
  return;
}

/* ======================================================================
 * SMBSelectionMenu__Update  (Ghidra `Update` @ 0050ff00)
 * Signature: uint8_t __stdcall Update(void)
 * Class: SMBSelectionMenu
 * Calls: (none)
 * Called by: `SMBInternetChapterSel__Update`, `SMBLeaderBoardMenu__Update`, `SMBLevelPortalInterface__Update`, `SMBSettingsMenu__Update`
 */
/* SMBSelectionMenu__Update() */

void SMBSelectionMenu__Update(void)

{
  return;
}

/* ======================================================================
 * SMBSelectionMenu__SMBSelectionMenu  (Ghidra `~SMBSelectionMenu` @ 0050ff10)
 * Signature: uint8_t __thiscall ~SMBSelectionMenu(SMBSelectionMenu * self)
 * Class: SMBSelectionMenu
 * Calls: `SMBPopupMenu__SMBPopupMenu__00503f20`, `SMBSelectionMenu__SMBSelectionMenu__005100b0`
 * Called by: (none)
 */
/* SMBSelectionMenu__SMBSelectionMenu__005100b0() */

void __thiscall SMBSelectionMenu__SMBSelectionMenu__005100b0(SMBSelectionMenu *self)

{
  *(uint8_t ***)self = &PTR__SMBSelectionMenu_005c8b70;
  if (*(void **)(self + 0x58) != (void *)0x0) {
    operator_delete__(*(void **)(self + 0x58));
  }
  SMBPopupMenu__SMBPopupMenu__00503f20((SMBPopupMenu *)self);
  return;
}

/* ======================================================================
 * SMBSelectionMenu__Activate  (Ghidra `Activate` @ 0050ff40)
 * Signature: uint8_t __thiscall Activate(SMBSelectionMenu * self)
 * Class: SMBSelectionMenu
 * Calls: `Joystick__AddPOVCallback`, `SMBPopupMenu__Activate`, `SMBSelectionMenuDecrement`, `SMBSelectionMenuIncrement`, `TKeyboard__AddKeyCallback`, `TPlayer__GetJoystick`
 * Called by: `SMBInternetChapterSel__Activate`, `SMBLeaderBoardMenu__Activate`, `SMBLevelPortalInterface__Activate`, `SMBReplayManager__Activate`, `SMBSettingsMenu__Activate`
 */
/* SMBSelectionMenu__Activate() */

void __thiscall SMBSelectionMenu__Activate(SMBSelectionMenu *self)

{
  Joystick *pJVar1;

  SMBPopupMenu__Activate((SMBPopupMenu *)self);
  if (*(int *)(self + 0x7c) != 1) {
    return;
  }
  if (Keyboard != (TKeyboard *)0x0) {
    TKeyboard__AddKeyCallback(Keyboard, 0x1f, SMBSelectionMenuIncrement, self);
    TKeyboard__AddKeyCallback(Keyboard, 0x7f, SMBSelectionMenuDecrement, self);
  }
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddPOVCallback(pJVar1, 2, SMBSelectionMenuIncrement, self);
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddPOVCallback(pJVar1, 0, SMBSelectionMenuDecrement, self);
  return;
}

/* ======================================================================
 * SMBSelectionMenu__SMBSelectionMenu__005100b0  (Ghidra `~SMBSelectionMenu` @ 005100b0)
 * Signature: uint8_t __thiscall ~SMBSelectionMenu(SMBSelectionMenu * self)
 * Class: SMBSelectionMenu
 * Calls: `SMBPopupMenu__SMBPopupMenu__00503f20`, `operator_delete`
 * Called by: `SMBInternetChapterSel__SMBInternetChapterSel`, `SMBInternetChapterSel__SMBInternetChapterSel__004c35f0`, `SMBLeaderBoardMenu__SMBLeaderBoardMenu`, `SMBLevelPortalInterface__SMBLevelPortalInterface`, `SMBReplayManager__SMBReplayManager`, `SMBReplayManager__SMBReplayManager__0050f030`, `SMBSelectionMenu__SMBSelectionMenu`, `SMBSettingsMenu__SMBSettingsMenu`, `SMBSettingsMenu__SMBSettingsMenu__00510980`
 */
/* SMBSelectionMenu__SMBSelectionMenu__005100b0() */

void __thiscall SMBSelectionMenu__SMBSelectionMenu__005100b0(SMBSelectionMenu *self)

{
  *(uint8_t ***)self = &PTR__SMBSelectionMenu_005c8b70;
  if (*(void **)(self + 0x58) != (void *)0x0) {
    operator_delete__(*(void **)(self + 0x58));
  }
  SMBPopupMenu__SMBPopupMenu__00503f20((SMBPopupMenu *)self);
  operator_delete(self);
  return;
}

/* ======================================================================
 * SMBSelectionMenu__DecrementSelection  (Ghidra `DecrementSelection` @ 005100e0)
 * Signature: uint8_t __thiscall DecrementSelection(SMBSelectionMenu * self)
 * Class: SMBSelectionMenu
 * Calls: `FlashLibraryInstance__GotoAndStop`
 * Called by: (none)
 */
/* SMBSelectionMenu__DecrementSelection() */

void __thiscall SMBSelectionMenu__DecrementSelection(SMBSelectionMenu *self)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  uint32_t *puVar4;

  if ((*(int *)(self + 0x6c) != 0) && ((*(ushort *)(self + 0x36) & 0xfff0) != 0x10)) {
    uVar2 = *(uint *)(self + 0x68);
    FlashLibraryInstance__GotoAndStop(
        *(FlashLibraryInstance **)(*(long *)(self + 0x58) + 0x20 + (ulong)uVar2 * 0x28), 2);
    lVar3 = (ulong)uVar2 * 0x28 + *(long *)(self + 0x58);
    lVar1 = *(long *)(lVar3 + 0x10);
    if (lVar1 != 0) {
      *(uint32_t *)(lVar1 + 0x20) = *(uint32_t *)(lVar3 + 8);
    }
    uVar2 = *(int *)(self + 0x68) - 1;
    *(uint *)(self + 0x68) = uVar2;
    if ((int)uVar2 < 0) {
      *(int *)(self + 0x68) = *(int *)(self + 0x70) + -1;
      (**(code **)(*(long *)self + 0x60))(self);
      uVar2 = *(uint *)(self + 0x68);
    }
    FlashLibraryInstance__GotoAndStop(
        *(FlashLibraryInstance **)(*(long *)(self + 0x58) + 0x20 + (ulong)uVar2 * 0x28), 1);
    puVar4 = (uint32_t *)((ulong)uVar2 * 0x28 + *(long *)(self + 0x58));
    lVar1 = *(long *)(puVar4 + 4);
    if (lVar1 != 0) {
      *(uint32_t *)(lVar1 + 0x20) = *puVar4;
    }
  }
  return;
}

/* ======================================================================
 * SMBSelectionMenu__IncrementSelection  (Ghidra `IncrementSelection` @ 005101a0)
 * Signature: uint8_t __thiscall IncrementSelection(SMBSelectionMenu * self)
 * Class: SMBSelectionMenu
 * Calls: `FlashLibraryInstance__GotoAndStop`
 * Called by: (none)
 */
/* SMBSelectionMenu__IncrementSelection() */

void __thiscall SMBSelectionMenu__IncrementSelection(SMBSelectionMenu *self)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  uint32_t *puVar5;

  if (*(int *)(self + 0x6c) == 0) {
    return;
  }
  if ((*(ushort *)(self + 0x36) & 0xfff0) == 0x10) {
    return;
  }
  uVar2 = *(uint *)(self + 0x68);
  FlashLibraryInstance__GotoAndStop(
      *(FlashLibraryInstance **)(*(long *)(self + 0x58) + 0x20 + (ulong)uVar2 * 0x28), 2);
  lVar4 = (ulong)uVar2 * 0x28 + *(long *)(self + 0x58);
  lVar1 = *(long *)(lVar4 + 0x10);
  if (lVar1 != 0) {
    *(uint32_t *)(lVar1 + 0x20) = *(uint32_t *)(lVar4 + 8);
  }
  uVar2 = *(uint *)(self + 0x68);
  uVar3 = (ulong)uVar2;
  if ((int)uVar2 < *(int *)(self + 0x6c) + -1) {
    uVar2 = uVar2 + 1;
    uVar3 = (ulong)uVar2;
    *(uint *)(self + 0x68) = uVar2;
    if ((int)uVar2 < *(int *)(self + 0x70))
      goto LAB_00510208;
  } else if ((int)uVar2 < *(int *)(self + 0x70))
    goto LAB_00510208;
  *(uint32_t *)(self + 0x68) = 0;
  (**(code **)(*(long *)self + 0x58))(self);
  uVar3 = (ulong) * (uint *)(self + 0x68);
LAB_00510208:
  FlashLibraryInstance__GotoAndStop(
      *(FlashLibraryInstance **)(*(long *)(self + 0x58) + 0x20 + uVar3 * 0x28), 1);
  puVar5 = (uint32_t *)(uVar3 * 0x28 + *(long *)(self + 0x58));
  lVar1 = *(long *)(puVar5 + 4);
  if (lVar1 != 0) {
    *(uint32_t *)(lVar1 + 0x20) = *puVar5;
  }
  return;
}

/* ======================================================================
 * SMBSelectionMenu__SMBSelectionMenu__00510270  (Ghidra `SMBSelectionMenu` @ 00510270)
 * Signature: uint8_t __thiscall SMBSelectionMenu(SMBSelectionMenu * self)
 * Class: SMBSelectionMenu
 * Calls: `SMBPopupMenu__SMBPopupMenu__005047e0`
 * Called by: `SMBInternetChapterSel__SMBInternetChapterSel__004c36f0`, `SMBLeaderBoardMenu__SMBLeaderBoardMenu__004c4ca0`, `SMBLevelPortalInterface__SMBLevelPortalInterface__005084f0`, `SMBReplayManager__SMBReplayManager__0050f090`, `SMBSettingsMenu__SMBSettingsMenu__00511330`
 */
/* SMBSelectionMenu__SMBSelectionMenu__00510270() */

void __thiscall SMBSelectionMenu__SMBSelectionMenu__00510270(SMBSelectionMenu *self)

{
  SMBPopupMenu__SMBPopupMenu__005047e0((SMBPopupMenu *)self);
  *(uint8_t ***)self = &PTR__SMBSelectionMenu_005c8b70;
  *(uint32_t *)(self + 0x68) = 0;
  *(uint32_t *)(self + 0x7c) = 1;
  return;
}

/* ======================================================================
 * SMBSelectionMenu__InitializeMenuRows  (Ghidra `InitializeMenuRows` @ 00510290)
 * Signature: uint8_t __thiscall InitializeMenuRows(SMBSelectionMenu * self, int arg1)
 * Class: SMBSelectionMenu
 * Calls: `FlashAnimationLibrary__GetClipIndex`, `FlashAnimationLibrary__GetLibraryEntry`, `FlashMovieClip__FindInstance`, `Sprint`
 * Called by: `SMBInternetChapterSel__Initialize`, `SMBLeaderBoardMenu__Initialize`, `SMBReplayManager__Initialize`, `SMBSettingsMenu__Initialize`
 */
/* SMBSelectionMenu__InitializeMenuRows(int) */

void __thiscall SMBSelectionMenu__InitializeMenuRows(SMBSelectionMenu *self, int arg1)

{
  long lVar1;
  int iVar2;
  uint32_t uVar3;
  void *pvVar4;
  FlashMovieClip *this_00;
  uint64_t uVar5;
  long lVar6;
  int iVar7;
  char local_58[28];
  int local_3c[3];

  pvVar4 = operator_new__((long)arg1 * 0x28);
  *(void **)(self + 0x58) = pvVar4;
  this_00 = (FlashMovieClip *)FlashAnimationLibrary__GetLibraryEntry(
      *(FlashAnimationLibrary **)(self + 8), *(int *)(*(long *)(self + 0x28) + 0x20));
  iVar2 = FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 8), "selectbar");
  local_3c[0] = 0;
  if (0 < arg1) {
    iVar7 = 0;
    lVar6 = 0;
    do {
      iVar7 = iVar7 + 1;
      Sprint("row%isel", local_58, iVar7);
      lVar1 = *(long *)(self + 0x58);
      uVar3 = FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 8), local_58);
      *(uint32_t *)(lVar6 + lVar1) = uVar3;
      Sprint("row%idis", local_58, iVar7);
      lVar1 = *(long *)(self + 0x58);
      uVar3 = FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 8), local_58);
      *(uint32_t *)(lVar6 + lVar1 + 4) = uVar3;
      Sprint("row%ioff", local_58, iVar7);
      lVar1 = *(long *)(self + 0x58);
      uVar3 = FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 8), local_58);
      *(uint32_t *)(lVar6 + lVar1 + 8) = uVar3;
      lVar1 = *(long *)(self + 0x58);
      uVar5 = FlashMovieClip__FindInstance(this_00, *(int *)(lVar6 + lVar1 + 8), 0, (int *)0x0, 0);
      *(uint64_t *)(lVar6 + lVar1 + 0x10) = uVar5;
      *(int *)(*(long *)(self + 0x58) + 0x18 + lVar6) = iVar2;
      lVar1 = *(long *)(self + 0x58);
      uVar5 = FlashMovieClip__FindInstance(this_00, iVar2, local_3c[0], local_3c, 0);
      *(uint64_t *)(lVar6 + lVar1 + 0x20) = uVar5;
      lVar6 = lVar6 + 0x28;
    } while (iVar7 != arg1);
  }
  return;
}

/* ======================================================================
 * SMBSelectionMenu__SetRowAsSelected  (Ghidra `SetRowAsSelected` @ 00510400)
 * Signature: uint8_t __thiscall SetRowAsSelected(SMBSelectionMenu * self, uint arg1)
 * Class: SMBSelectionMenu
 * Calls: `FlashLibraryInstance__GotoAndStop`
 * Called by: `SMBInternetChapterSel__Activate`, `SMBInternetChapterSel__DecrementSelection`, `SMBInternetChapterSel__IncrementSelection`, `SMBInternetChapterSel__LoadChapterData`, `SMBReplayManager__DecrementSelection`, `SMBReplayManager__IncrementSelection`, `SMBReplayManager__LoadText`, `SMBSettingsMenu__Activate`, `SMBSettingsMenu__DecrementSelection`, `SMBSettingsMenu__IncrementSelection`
 */
/* SMBSelectionMenu__SetRowAsSelected(unsigned int) */

void __thiscall SMBSelectionMenu__SetRowAsSelected(SMBSelectionMenu *self, uint arg1)

{
  long lVar1;
  uint32_t *puVar2;

  FlashLibraryInstance__GotoAndStop(
      *(FlashLibraryInstance **)(*(long *)(self + 0x58) + 0x20 + (ulong)arg1 * 0x28), 1);
  puVar2 = (uint32_t *)((ulong)arg1 * 0x28 + *(long *)(self + 0x58));
  lVar1 = *(long *)(puVar2 + 4);
  if (lVar1 != 0) {
    *(uint32_t *)(lVar1 + 0x20) = *puVar2;
  }
  return;
}

/* ======================================================================
 * SMBSelectionMenu__SetRowAsUnselected  (Ghidra `SetRowAsUnselected` @ 00510450)
 * Signature: uint8_t __thiscall SetRowAsUnselected(SMBSelectionMenu * self, uint arg1)
 * Class: SMBSelectionMenu
 * Calls: `FlashLibraryInstance__GotoAndStop`
 * Called by: `SMBInternetChapterSel__DecrementSelection`, `SMBInternetChapterSel__IncrementSelection`, `SMBInternetChapterSel__LoadChapterData`, `SMBReplayManager__DecrementSelection`, `SMBReplayManager__IncrementSelection`, `SMBReplayManager__LoadText`, `SMBSettingsMenu__Activate`, `SMBSettingsMenu__DecrementSelection`, `SMBSettingsMenu__IncrementSelection`
 */
/* SMBSelectionMenu__SetRowAsUnselected(unsigned int) */

void __thiscall SMBSelectionMenu__SetRowAsUnselected(SMBSelectionMenu *self, uint arg1)

{
  long lVar1;
  long lVar2;

  FlashLibraryInstance__GotoAndStop(
      *(FlashLibraryInstance **)(*(long *)(self + 0x58) + 0x20 + (ulong)arg1 * 0x28), 2);
  lVar2 = (ulong)arg1 * 0x28 + *(long *)(self + 0x58);
  lVar1 = *(long *)(lVar2 + 0x10);
  if (lVar1 != 0) {
    *(uint32_t *)(lVar1 + 0x20) = *(uint32_t *)(lVar2 + 8);
  }
  return;
}
