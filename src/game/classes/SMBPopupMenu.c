/* src/game/classes/SMBPopupMenu.c — 14 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "SMBPopupMenu.h"

/* ======================================================================
 * SMBPopupMenu__DeactivationFinished  (Ghidra `DeactivationFinished` @ 00501820)
 * Signature: uint8_t __thiscall DeactivationFinished(SMBPopupMenu * self)
 * Class: SMBPopupMenu
 * Calls: (none)
 * Called by: `SMBInternetChapterSel__DeactivationFinished__004c3090`, `SMBReplayManager__DeactivationFinished`
 */
/* SMBPopupMenu__DeactivationFinished() */

void __thiscall SMBPopupMenu__DeactivationFinished(SMBPopupMenu *self)

{
  *(ushort *)(self + 0x34) = *(ushort *)(self + 0x34) & 0xfc00;
  *(uint32_t *)(self + 0x30) = 4;
  return;
}

/* ======================================================================
 * SMBPopupMenu__Update  (Ghidra `Update` @ 00501830)
 * Signature: uint8_t __stdcall Update(void)
 * Class: SMBPopupMenu
 * Calls: (none)
 * Called by: (none)
 */
/* SMBPopupMenu__Update() */

void SMBPopupMenu__Update(void)

{
  return;
}

/* ======================================================================
 * SMBPopupMenu__DeActivate  (Ghidra `DeActivate` @ 00501e30)
 * Signature: uint8_t __thiscall DeActivate(SMBPopupMenu * self)
 * Class: SMBPopupMenu
 * Calls: `Joystick__AddButtonCallback`, `Joystick__RestoreCallbacks`, `TKeyboard__AddKeyCallback`, `TKeyboard__RestoreCallbacks`, `TPlayer__GetJoystick`
 * Called by: `SMBSelectionMenu__DeActivate`
 */
/* SMBPopupMenu__DeActivate() */

void __thiscall SMBPopupMenu__DeActivate(SMBPopupMenu *self)

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
 * SMBPopupMenu__Render  (Ghidra `Render` @ 00501f90)
 * Signature: uint8_t __thiscall Render(SMBPopupMenu * self)
 * Class: SMBPopupMenu
 * Calls: `Camera__SetCameraMatricies`, `Camera__SetOrthoProjection`, `FlashLibraryInstance__IsPlaying`, `FlashLibraryInstance__Reset`, `SMBPopupMenu__Render__00502110`, `SwitchOutMenuButtons`, `TGraphics__SetRenderState`
 * Called by: (none)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SMBPopupMenu__Render__00502110() [clone .part.11] */

void __thiscall SMBPopupMenu__Render__00502110(SMBPopupMenu *self)

{
  FlashLibraryInstance *pFVar1;
  int iVar2;

  TGraphics__SetRenderState(Graphics, '\x05', 4);
  TGraphics__SetRenderState(Graphics, '\x06', 5);
  Camera__SetOrthoProjection(*(Camera **)(SuperMeatBoy + 0x38), _DAT_005c0c9c /* R:240.0f */,
                             DAT_005c0c98 /* R:-240.0f */, DAT_005c0c94 /* R:-426.5f */,
                             DAT_005c0c90 /* R:426.5f */, DAT_005c07a4 /* R:-1.0f */,
                             DAT_005be894 /* R:1.0f */);
  Camera__SetCameraMatricies(*(Camera **)(SuperMeatBoy + 0x38), 2);
  pFVar1 = *(FlashLibraryInstance **)(self + 0x28);
  if (pFVar1 != (FlashLibraryInstance *)0x0) {
    SwitchOutMenuButtons(*(FlashAnimationLibrary **)(pFVar1 + 0x28), pFVar1);
  }
  pFVar1 = *(FlashLibraryInstance **)(self + 0x10);
  if (pFVar1 != (FlashLibraryInstance *)0x0) {
    SwitchOutMenuButtons(*(FlashAnimationLibrary **)(pFVar1 + 0x28), pFVar1);
  }
  pFVar1 = *(FlashLibraryInstance **)(self + 0x18);
  if (pFVar1 != (FlashLibraryInstance *)0x0) {
    SwitchOutMenuButtons(*(FlashAnimationLibrary **)(pFVar1 + 0x28), pFVar1);
  }
  pFVar1 = *(FlashLibraryInstance **)(self + 0x20);
  if (pFVar1 != (FlashLibraryInstance *)0x0) {
    SwitchOutMenuButtons(*(FlashAnimationLibrary **)(pFVar1 + 0x28), pFVar1);
  }
  if (*(int *)(self + 0x30) == 1) {
    if (*(long **)(self + 0x10) != (long *)0x0) {
      (**(code **)(**(long **)(self + 0x10) + 0x10))();
      iVar2 = FlashLibraryInstance__IsPlaying(*(FlashLibraryInstance **)(self + 0x10));
      if (iVar2 != 0) {
        return;
      }
    }
    *(uint32_t *)(self + 0x30) = 3;
  } else {
    if (*(int *)(self + 0x30) == 2) {
      if (*(long **)(self + 0x18) != (long *)0x0) {
        (**(code **)(**(long **)(self + 0x18) + 0x10))();
        iVar2 = FlashLibraryInstance__IsPlaying(*(FlashLibraryInstance **)(self + 0x18));
        if (iVar2 != 0) {
          return;
        }
      }
      /* WARNING: Could not recover jumptable at 0x005020df. Too many branches */
      /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)self + 0x30))(self);
      return;
    }
    if ((*(ushort *)(self + 0x36) & 0xfff0) == 0x10) {
      if (*(long **)(self + 0x20) != (long *)0x0) {
        (**(code **)(**(long **)(self + 0x20) + 0x10))();
        iVar2 = FlashLibraryInstance__IsPlaying(*(FlashLibraryInstance **)(self + 0x20));
        if (iVar2 == 0) {
          FlashLibraryInstance__Reset(*(FlashLibraryInstance **)(self + 0x20));
          return;
        }
      }
    } else if (*(long **)(self + 0x28) != (long *)0x0) {
      /* WARNING: Could not recover jumptable at 0x00502088. Too many branches */
      /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(self + 0x28) + 0x10))();
      return;
    }
  }
  return;
}

/* ======================================================================
 * SMBPopupMenu__Render__00502110  (Ghidra `Render` @ 00502110)
 * Signature: uint8_t __thiscall Render(SMBPopupMenu * self)
 * Class: SMBPopupMenu
 * Calls: `Render`
 * Called by: `SMBCharSwitch__Render`, `SMBControlsMenu__Render`, `SMBCreditMenu__Render`, `SMBHowToPlayMenu__Render`, `SMBInternetChapterSel__Render`, `SMBMoveOn__Render`, `SMBPopupMenu__Render`, `SMBReplayManager__Render`, `SMBSelectionMenu__Render`, `SMBStatisticsMenu__Render` (+1 more)
 */
/* SMBPopupMenu__Render__00502110() */

void __thiscall SMBPopupMenu__Render__00502110(SMBPopupMenu *self)

{
  if ((*(ushort *)(self + 0x34) & 0x3ff) == 0) {
    return;
  }
  Render(self);
  return;
}

/* ======================================================================
 * SMBPopupMenu__Activate  (Ghidra `Activate` @ 00502d60)
 * Signature: uint8_t __thiscall Activate(SMBPopupMenu * self)
 * Class: SMBPopupMenu
 * Calls: `FlashAnimationLibrary__GetTextField`, `FlashLibraryInstance__Reset`, `GetLocalizedText`, `Joystick__AddButtonCallback`, `Joystick__BackupCallbacks`, `SMBPopupDeActivateMenu`, `TKeyboard__AddKeyCallback`, `TKeyboard__BackupCallbacks`, `TPlayer__GetJoystick`
 * Called by: `SMBCharSwitch__Activate`, `SMBControlsMenu__Activate`, `SMBCreditMenu__Activate`, `SMBMoveOn__Activate`, `SMBSelectionMenu__Activate`, `SMBStatisticsMenu__Activate`
 */
/* SMBPopupMenu__Activate() */

void __thiscall SMBPopupMenu__Activate(SMBPopupMenu *self)

{
  Joystick *pJVar1;
  wchar_t *pwVar2;
  uint64_t uVar3;

  *(ushort *)(self + 0x34) = *(ushort *)(self + 0x34) & 0xfc00 | 1;
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__BackupCallbacks(pJVar1, (InputCallback **)(self + 0x40),
                            (InputCallback **)(self + 0x38));
  if ((*(uint *)(self + 0x34) & 0xffc00) == 0x400) {
    pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
    Joystick__AddButtonCallback(pJVar1, 1, SMBPopupDeActivateMenu, self);
  }
  if (Keyboard != (TKeyboard *)0x0) {
    TKeyboard__BackupCallbacks(Keyboard, (InputCallback **)(self + 0x48));
    if ((*(uint *)(self + 0x34) & 0xffc00) == 0x400) {
      TKeyboard__AddKeyCallback(Keyboard, 0x23, SMBPopupDeActivateMenu, self);
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
  pwVar2 = (wchar_t *)FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8),
                                                          "title");
  if (pwVar2 != (wchar_t *)0x0) {
    FlashTextField__SetText(pwVar2, uVar3);
  }
  uVar3 = GetLocalizedText(0xb7);
  pwVar2 = (wchar_t *)FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8),
                                                          "select");
  if (pwVar2 != (wchar_t *)0x0) {
    FlashTextField__SetText(pwVar2, uVar3);
  }
  uVar3 = GetLocalizedText(4);
  pwVar2 =
      (wchar_t *)FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8), "ok");
  if (pwVar2 != (wchar_t *)0x0) {
    FlashTextField__SetText(pwVar2, uVar3);
  }
  uVar3 = GetLocalizedText(10);
  pwVar2 =
      (wchar_t *)FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8), "back");
  if (pwVar2 != (wchar_t *)0x0) {
    FlashTextField__SetText(pwVar2, uVar3);
    return;
  }
  return;
}

/* ======================================================================
 * SMBPopupMenu__SMBPopupMenu  (Ghidra `~SMBPopupMenu` @ 00503d90)
 * Signature: uint8_t __thiscall ~SMBPopupMenu(SMBPopupMenu * self)
 * Class: SMBPopupMenu
 * Calls: `FlashAnimationLibrary__FlashAnimationLibrary`, `SMBPopupMenu__SMBPopupMenu__00503f20`, `operator_delete`
 * Called by: (none)
 */
/* SMBPopupMenu__SMBPopupMenu__00503f20() */

void __thiscall SMBPopupMenu__SMBPopupMenu__00503f20(SMBPopupMenu *self)

{
  FlashAnimationLibrary *this_00;

  *(uint8_t ***)self = &PTR__SMBPopupMenu_005c76d0;
  this_00 = *(FlashAnimationLibrary **)(self + 8);
  if (this_00 == pSMBPopupLib) {
    iPopupMenuLibReferences = iPopupMenuLibReferences + -1;
    if (iPopupMenuLibReferences < 1) {
      if (this_00 != (FlashAnimationLibrary *)0x0) {
        FlashAnimationLibrary__FlashAnimationLibrary(this_00);
        operator_delete(this_00);
      }
      pSMBPopupLib = (FlashAnimationLibrary *)0x0;
    }
  } else {
    if (this_00 != (FlashAnimationLibrary *)0x0) {
      FlashAnimationLibrary__FlashAnimationLibrary(this_00);
      operator_delete(this_00);
    }
    *(uint64_t *)(self + 8) = 0;
  }
  if (*(long **)(self + 0x28) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x28) + 8))();
  }
  *(uint64_t *)(self + 0x28) = 0;
  if (*(long **)(self + 0x10) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x10) + 8))();
  }
  *(uint64_t *)(self + 0x10) = 0;
  if (*(long **)(self + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x18) + 8))();
  }
  *(uint64_t *)(self + 0x18) = 0;
  return;
}

/* ======================================================================
 * SMBPopupMenu__SMBPopupMenu__00503f20  (Ghidra `~SMBPopupMenu` @ 00503f20)
 * Signature: uint8_t __thiscall ~SMBPopupMenu(SMBPopupMenu * self)
 * Class: SMBPopupMenu
 * Calls: `operator_delete`
 * Called by: `SMBCharSwitch__SMBCharSwitch`, `SMBCharSwitch__SMBCharSwitch__00503fa0`, `SMBControlsMenu__SMBControlsMenu`, `SMBControlsMenu__SMBControlsMenu__00503fe0`, `SMBCreditMenu__SMBCreditMenu`, `SMBCreditMenu__SMBCreditMenu__00503f40`, `SMBHowToPlayMenu__SMBHowToPlayMenu`, `SMBHowToPlayMenu__SMBHowToPlayMenu__00503f60`, `SMBMoveOn__SMBMoveOn`, `SMBMoveOn__SMBMoveOn__00503fc0` (+7 more)
 */
/* SMBPopupMenu__SMBPopupMenu__00503f20() */

void __thiscall SMBPopupMenu__SMBPopupMenu__00503f20(SMBPopupMenu *self)

{
  SMBPopupMenu__dtor(self);
  operator_delete(self);
  return;
}

/* ======================================================================
 * SMBPopupMenu__InitializeMenuPopupLib  (Ghidra `InitializeMenuPopupLib` @ 00504540)
 * Signature: uint8_t __stdcall InitializeMenuPopupLib(void)
 * Class: SMBPopupMenu
 * Calls: `FlashAnimationLibrary__FlashAnimationLibrary__00576680`, `FormatResourcePath`, `operator_new`
 * Called by: (none)
 */
/* WARNING: Removing unreachable block (ram,0x00504607) */
/* SMBPopupMenu__InitializeMenuPopupLib() */

void SMBPopupMenu__InitializeMenuPopupLib(void)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  FlashAnimationLibrary *self;
  uint8_t *local_28[3];

  if (pSMBPopupLib == (FlashAnimationLibrary *)0x0) {
    local_28[0] = &DAT_008184c8 /* R:0.00016803004837129265f */;
    /* try { // try from 00504580 to 00504591 has its CatchHandler @ 005045e4 */
    pcVar3 = (char *)FormatResourcePath("/Menus/titlepopup.am", local_28);
    self = operator_new(0xb0);
    /* try { // try from 0050459b to 0050459f has its CatchHandler @ 005045f7 */
    FlashAnimationLibrary__FlashAnimationLibrary__00576680(self, pcVar3);
    pSMBPopupLib = self;
    self[0x8c] = (FlashAnimationLibrary)0x1;
    if ((allocator *)(local_28[0] + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage) {
      LOCK();
      piVar1 = (int *)(local_28[0] + -8);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 < 1) {
        std__string_Rep_M_destroy((allocator *)(local_28[0] + -0x18));
      }
    }
  }
  iPopupMenuLibReferences = iPopupMenuLibReferences + 1;
  return;
}

/* ======================================================================
 * SMBPopupMenu__Create  (Ghidra `Create` @ 00504620)
 * Signature: uint8_t __thiscall Create(SMBPopupMenu * self, char * arg1, char * arg2)
 * Class: SMBPopupMenu
 * Calls: `FlashAnimationLibrary__FlashAnimationLibrary__00576680`, `FlashAnimationLibrary__GetMovieClip__005731d0`, `FormatResourcePath`, `operator_new`
 * Called by: (none)
 */
/* WARNING: Removing unreachable block (ram,0x00504783) */
/* SMBPopupMenu__Create(char const*, char const*) */

void __thiscall SMBPopupMenu__Create(SMBPopupMenu *self, char *arg1, char *arg2)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  FlashAnimationLibrary *pFVar4;
  uint64_t uVar5;
  uint8_t *local_38[3];

  if (arg1 == (char *)0x0) {
    InitializeMenuPopupLib();
    uVar5 = FlashAnimationLibrary__GetMovieClip__005731d0(pSMBPopupLib, arg2);
    pFVar4 = pSMBPopupLib;
    *(uint64_t *)(self + 0x28) = uVar5;
    uVar5 = FlashAnimationLibrary__GetMovieClip__005731d0(pFVar4, "in");
    pFVar4 = pSMBPopupLib;
    *(uint64_t *)(self + 0x10) = uVar5;
    uVar5 = FlashAnimationLibrary__GetMovieClip__005731d0(pFVar4, "out");
    *(uint64_t *)(self + 0x18) = uVar5;
    *(FlashAnimationLibrary **)(self + 8) = pSMBPopupLib;
  } else {
    local_38[0] = &DAT_008184c8 /* R:0.00016803004837129265f */;
    /* try { // try from 00504655 to 00504666 has its CatchHandler @ 0050477e */
    pcVar3 = (char *)FormatResourcePath(arg1, local_38);
    pFVar4 = operator_new(0xb0);
    /* try { // try from 00504670 to 00504674 has its CatchHandler @ 00504760 */
    FlashAnimationLibrary__FlashAnimationLibrary__00576680(pFVar4, pcVar3);
    *(FlashAnimationLibrary **)(self + 8) = pFVar4;
    pFVar4[0x8c] = (FlashAnimationLibrary)0x1;
    if (*(FlashAnimationLibrary **)(self + 8) != (FlashAnimationLibrary *)0x0) {
      /* try { // try from 0050468c to 005046b4 has its CatchHandler @ 0050477e */
      uVar5 = FlashAnimationLibrary__GetMovieClip__005731d0(*(FlashAnimationLibrary **)(self + 8),
                                                            arg2);
      *(uint64_t *)(self + 0x28) = uVar5;
      uVar5 = FlashAnimationLibrary__GetMovieClip__005731d0(*(FlashAnimationLibrary **)(self + 8),
                                                            "in");
      *(uint64_t *)(self + 0x10) = uVar5;
      uVar5 = FlashAnimationLibrary__GetMovieClip__005731d0(*(FlashAnimationLibrary **)(self + 8),
                                                            "out");
      *(uint64_t *)(self + 0x18) = uVar5;
    }
    if ((allocator *)(local_38[0] + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage) {
      LOCK();
      piVar1 = (int *)(local_38[0] + -8);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 < 1) {
        std__string_Rep_M_destroy((allocator *)(local_38[0] + -0x18));
      }
    }
  }
  return;
}

/* ======================================================================
 * SMBPopupMenu__DestroyMenuPopupLib  (Ghidra `DestroyMenuPopupLib` @ 00504790)
 * Signature: uint8_t __stdcall DestroyMenuPopupLib(void)
 * Class: SMBPopupMenu
 * Calls: `FlashAnimationLibrary__FlashAnimationLibrary`, `operator_delete`
 * Called by: (none)
 */
/* SMBPopupMenu__DestroyMenuPopupLib() */

void SMBPopupMenu__DestroyMenuPopupLib(void)

{
  FlashAnimationLibrary *pFVar1;

  pFVar1 = pSMBPopupLib;
  iPopupMenuLibReferences = iPopupMenuLibReferences + -1;
  if (0 < iPopupMenuLibReferences) {
    return;
  }
  if (pSMBPopupLib != (FlashAnimationLibrary *)0x0) {
    FlashAnimationLibrary__FlashAnimationLibrary(pSMBPopupLib);
    operator_delete(pFVar1);
  }
  pSMBPopupLib = (FlashAnimationLibrary *)0x0;
  return;
}

/* ======================================================================
 * SMBPopupMenu__SMBPopupMenu__005047e0  (Ghidra `SMBPopupMenu` @ 005047e0)
 * Signature: uint8_t __thiscall SMBPopupMenu(SMBPopupMenu * self)
 * Class: SMBPopupMenu
 * Calls: `GetLocalizedText`
 * Called by: `SMBSelectionMenu__SMBSelectionMenu__00510270`
 */
/* SMBPopupMenu__SMBPopupMenu__005047e0() */

void __thiscall SMBPopupMenu__SMBPopupMenu__005047e0(SMBPopupMenu *self)

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
  *(uint64_t *)(self + 0x50) = uVar1;
  return;
}

/* ======================================================================
 * SMBPopupMenu__SetMenuText  (Ghidra `SetMenuText` @ 00504850)
 * Signature: uint8_t __thiscall SetMenuText(SMBPopupMenu * self, char * arg1, wchar_t * arg2)
 * Class: SMBPopupMenu
 * Calls: `FlashAnimationLibrary__GetTextField`
 * Called by: (none)
 */
/* SMBPopupMenu__SetMenuText(char const*, wchar_t const*) */

void __thiscall SMBPopupMenu__SetMenuText(SMBPopupMenu *self, char *arg1, wchar_t *arg2)

{
  wchar_t *pwVar1;

  pwVar1 =
      (wchar_t *)FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8), arg1);
  if (pwVar1 != (wchar_t *)0x0) {
    FlashTextField__SetText(pwVar1, arg2);
    return;
  }
  return;
}

/* ======================================================================
 * SMBPopupMenu__ShouldDelete  (Ghidra `ShouldDelete` @ 00504880)
 * Signature: uint8_t __thiscall ShouldDelete(SMBPopupMenu * self)
 * Class: SMBPopupMenu
 * Calls: (none)
 * Called by: `GSMBMenu__Update`
 */
/* SMBPopupMenu__ShouldDelete() */

bool __thiscall SMBPopupMenu__ShouldDelete(SMBPopupMenu *self)

{
  return *(int *)(self + 0x30) == 4;
}
