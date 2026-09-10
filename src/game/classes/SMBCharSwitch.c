/* src/game/classes/SMBCharSwitch.c — 15 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "SMBCharSwitch.h"

/* ======================================================================
 * SMBCharSwitch__Update  (Ghidra `Update` @ 005018d0)
 * Signature: uint8_t __stdcall Update(void)
 * Class: SMBCharSwitch
 * Calls: (none)
 * Called by: (none)
 */
/* SMBCharSwitch__Update() */

void SMBCharSwitch__Update(void)

{
  return;
}

/* ======================================================================
 * SMBCharSwitch__Initialize  (Ghidra `Initialize` @ 00501a40)
 * Signature: uint8_t __thiscall Initialize(SMBCharSwitch * self)
 * Class: SMBCharSwitch
 * Calls: `FlashAnimationLibrary__GetClipIndex`, `FlashAnimationLibrary__GetLibraryEntry`, `FlashAnimationLibrary__GetTextField`, `FlashMovieClip__FindInstance`, `GetLocalizedText`, `Sprint`
 * Called by: `GSMBMenu__GSMBMenu__004d8690`
 */
/* SMBCharSwitch__Initialize() */

void __thiscall SMBCharSwitch__Initialize(SMBCharSwitch *self)

{
  int iVar1;
  uint64_t uVar2;
  FlashMovieClip *this_00;
  char acStack_28[24];

  (**(code **)(*(long *)self + 0x10))(self, 0, "charselectidle");
  uVar2 = GetLocalizedText(0xde);
  *(uint64_t *)(self + 0x50) = uVar2;
  this_00 = (FlashMovieClip *)FlashAnimationLibrary__GetLibraryEntry(
      *(FlashAnimationLibrary **)(self + 8), *(int *)(*(long *)(self + 0x28) + 0x20));
  uVar2 = FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8), "charname");
  *(uint64_t *)(self + 0x58) = uVar2;
  uVar2 =
      FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8), "bandagenumber");
  *(uint64_t *)(self + 0x60) = uVar2;
  Sprint("char%i-%i", acStack_28, 1);
  iVar1 = FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 8), acStack_28);
  smbSwitchChars = FlashMovieClip__FindInstance(this_00, iVar1, 0, (int *)0x0, 0);
  Sprint("char%i-%i", acStack_28, 1);
  iVar1 = FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 8), acStack_28);
  DAT_00817110 /* R:0.0f */ = FlashMovieClip__FindInstance(this_00, iVar1, 0, (int *)0x0, 0);
  Sprint("char%i-%i", acStack_28, 1);
  iVar1 = FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 8), acStack_28);
  DAT_00817120 /* R:0.0f */ = FlashMovieClip__FindInstance(this_00, iVar1, 0, (int *)0x0, 0);
  Sprint("char%i-%i", acStack_28, 1);
  iVar1 = FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 8), acStack_28);
  DAT_00817130 /* R:0.0f */ = FlashMovieClip__FindInstance(this_00, iVar1, 0, (int *)0x0, 0);
  Sprint("char%i-%i", acStack_28, 1);
  iVar1 = FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 8), acStack_28);
  DAT_00817140 /* R:0.0f */ = FlashMovieClip__FindInstance(this_00, iVar1, 0, (int *)0x0, 0);
  Sprint("char%i-%i", acStack_28, 1);
  iVar1 = FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 8), acStack_28);
  DAT_00817150 /* R:0.0f */ = FlashMovieClip__FindInstance(this_00, iVar1, 0, (int *)0x0, 0);
  Sprint("char%i-%i", acStack_28, 2);
  iVar1 = FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 8), acStack_28);
  DAT_00817160 /* R:0.0f */ = FlashMovieClip__FindInstance(this_00, iVar1, 0, (int *)0x0, 0);
  Sprint("char%i-%i", acStack_28, 2);
  iVar1 = FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 8), acStack_28);
  DAT_00817170 /* R:0.0f */ = FlashMovieClip__FindInstance(this_00, iVar1, 0, (int *)0x0, 0);
  Sprint("char%i-%i", acStack_28, 2);
  iVar1 = FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 8), acStack_28);
  DAT_00817180 /* R:0.0f */ = FlashMovieClip__FindInstance(this_00, iVar1, 0, (int *)0x0, 0);
  Sprint("char%i-%i", acStack_28, 2);
  iVar1 = FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 8), acStack_28);
  DAT_00817190 /* R:0.0f */ = FlashMovieClip__FindInstance(this_00, iVar1, 0, (int *)0x0, 0);
  Sprint("char%i-%i", acStack_28, 2);
  iVar1 = FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 8), acStack_28);
  DAT_008171a0 /* R:0.0f */ = FlashMovieClip__FindInstance(this_00, iVar1, 0, (int *)0x0, 0);
  Sprint("char%i-%i", acStack_28, 2);
  iVar1 = FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 8), acStack_28);
  DAT_008171b0 /* R:0.0f */ = FlashMovieClip__FindInstance(this_00, iVar1, 0, (int *)0x0, 0);
  Sprint("char%i-%i", acStack_28, 3);
  iVar1 = FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 8), acStack_28);
  DAT_008171c0 /* R:0.0f */ = FlashMovieClip__FindInstance(this_00, iVar1, 0, (int *)0x0, 0);
  return;
}

/* ======================================================================
 * SMBCharSwitch__DeactivationFinished  (Ghidra `DeactivationFinished` @ 00501f00)
 * Signature: uint8_t __thiscall DeactivationFinished(SMBCharSwitch * self)
 * Class: SMBCharSwitch
 * Calls: `ShowPauseMenuPress`
 * Called by: (none)
 */
/* SMBCharSwitch__DeactivationFinished() */

void __thiscall SMBCharSwitch__DeactivationFinished(SMBCharSwitch *self)

{
  *(ushort *)(self + 0x34) = *(ushort *)(self + 0x34) & 0xfc00;
  *(uint32_t *)(self + 0x30) = 4;
  if (*(int *)(self + 0x6c) != 1) {
    return;
  }
  ShowPauseMenuPress((tagButtonProps *)0x0, (void *)0x0);
  return;
}

/* ======================================================================
 * SMBCharSwitch__Render  (Ghidra `Render` @ 00502170)
 * Signature: uint8_t __thiscall Render(SMBCharSwitch * self)
 * Class: SMBCharSwitch
 * Calls: `FlashLibraryInstance__GotoAndStop`, `GSMBChapterData__IsCharacterUnlocked`, `SMBPopupMenu__Render__00502110`
 * Called by: (none)
 */
/* SMBCharSwitch__Render() */

void __thiscall SMBCharSwitch__Render(SMBCharSwitch *self)

{
  int iVar1;

  if (*(int *)(self + 0x68) == 0) {
    iVar1 = GSMBChapterData__IsCharacterUnlocked(SMBChapterData, DAT_00817108 /* R:0.0f */);
    if (iVar1 == 1) {
      FlashLibraryInstance__GotoAndStop(smbSwitchChars, 1);
    } else {
      FlashLibraryInstance__GotoAndStop(smbSwitchChars, 5);
    }
  } else {
    iVar1 = GSMBChapterData__IsCharacterUnlocked(SMBChapterData, DAT_00817108 /* R:0.0f */);
    if (iVar1 == 1) {
      FlashLibraryInstance__GotoAndStop(smbSwitchChars, 2);
    } else {
      FlashLibraryInstance__GotoAndStop(smbSwitchChars, 6);
    }
  }
  if (*(int *)(self + 0x68) == 1) {
    iVar1 = GSMBChapterData__IsCharacterUnlocked(SMBChapterData,
                                                 DAT_00817118 /* R:1.5414283107572988e-44f */);
    if (iVar1 == 1) {
      FlashLibraryInstance__GotoAndStop(DAT_00817110 /* R:0.0f */, 1);
    } else {
      FlashLibraryInstance__GotoAndStop(DAT_00817110 /* R:0.0f */, 5);
    }
  } else {
    iVar1 = GSMBChapterData__IsCharacterUnlocked(SMBChapterData,
                                                 DAT_00817118 /* R:1.5414283107572988e-44f */);
    if (iVar1 == 1) {
      FlashLibraryInstance__GotoAndStop(DAT_00817110 /* R:0.0f */, 2);
    } else {
      FlashLibraryInstance__GotoAndStop(DAT_00817110 /* R:0.0f */, 6);
    }
  }
  if (*(int *)(self + 0x68) == 2) {
    iVar1 = GSMBChapterData__IsCharacterUnlocked(SMBChapterData,
                                                 DAT_00817128 /* R:2.2420775429197073e-44f */);
    if (iVar1 == 1) {
      FlashLibraryInstance__GotoAndStop(DAT_00817120 /* R:0.0f */, 1);
    } else {
      FlashLibraryInstance__GotoAndStop(DAT_00817120 /* R:0.0f */, 5);
    }
  } else {
    iVar1 = GSMBChapterData__IsCharacterUnlocked(SMBChapterData,
                                                 DAT_00817128 /* R:2.2420775429197073e-44f */);
    if (iVar1 == 1) {
      FlashLibraryInstance__GotoAndStop(DAT_00817120 /* R:0.0f */, 2);
    } else {
      FlashLibraryInstance__GotoAndStop(DAT_00817120 /* R:0.0f */, 6);
    }
  }
  if (*(int *)(self + 0x68) == 3) {
    iVar1 = GSMBChapterData__IsCharacterUnlocked(SMBChapterData,
                                                 DAT_00817138 /* R:3.363116314379561e-44f */);
    if (iVar1 == 1) {
      FlashLibraryInstance__GotoAndStop(DAT_00817130 /* R:0.0f */, 1);
    } else {
      FlashLibraryInstance__GotoAndStop(DAT_00817130 /* R:0.0f */, 5);
    }
  } else {
    iVar1 = GSMBChapterData__IsCharacterUnlocked(SMBChapterData,
                                                 DAT_00817138 /* R:3.363116314379561e-44f */);
    if (iVar1 == 1) {
      FlashLibraryInstance__GotoAndStop(DAT_00817130 /* R:0.0f */, 2);
    } else {
      FlashLibraryInstance__GotoAndStop(DAT_00817130 /* R:0.0f */, 6);
    }
  }
  if (*(int *)(self + 0x68) == 4) {
    iVar1 = GSMBChapterData__IsCharacterUnlocked(SMBChapterData,
                                                 DAT_00817148 /* R:2.5223372357846707e-44f */);
    if (iVar1 == 1) {
      FlashLibraryInstance__GotoAndStop(DAT_00817140 /* R:0.0f */, 1);
    } else {
      FlashLibraryInstance__GotoAndStop(DAT_00817140 /* R:0.0f */, 5);
    }
  } else {
    iVar1 = GSMBChapterData__IsCharacterUnlocked(SMBChapterData,
                                                 DAT_00817148 /* R:2.5223372357846707e-44f */);
    if (iVar1 == 1) {
      FlashLibraryInstance__GotoAndStop(DAT_00817140 /* R:0.0f */, 2);
    } else {
      FlashLibraryInstance__GotoAndStop(DAT_00817140 /* R:0.0f */, 6);
    }
  }
  if (*(int *)(self + 0x68) == 5) {
    iVar1 = GSMBChapterData__IsCharacterUnlocked(SMBChapterData,
                                                 DAT_00817158 /* R:3.0828566215145976e-44f */);
    if (iVar1 == 1) {
      FlashLibraryInstance__GotoAndStop(DAT_00817150 /* R:0.0f */, 1);
    } else {
      FlashLibraryInstance__GotoAndStop(DAT_00817150 /* R:0.0f */, 5);
    }
  } else {
    iVar1 = GSMBChapterData__IsCharacterUnlocked(SMBChapterData,
                                                 DAT_00817158 /* R:3.0828566215145976e-44f */);
    if (iVar1 == 1) {
      FlashLibraryInstance__GotoAndStop(DAT_00817150 /* R:0.0f */, 2);
    } else {
      FlashLibraryInstance__GotoAndStop(DAT_00817150 /* R:0.0f */, 6);
    }
  }
  if (*(int *)(self + 0x68) == 6) {
    iVar1 = GSMBChapterData__IsCharacterUnlocked(SMBChapterData,
                                                 DAT_00817168 /* R:3.2229864679470793e-44f */);
    if (iVar1 == 1) {
      FlashLibraryInstance__GotoAndStop(DAT_00817160 /* R:0.0f */, 1);
    } else {
      FlashLibraryInstance__GotoAndStop(DAT_00817160 /* R:0.0f */, 5);
    }
  } else {
    iVar1 = GSMBChapterData__IsCharacterUnlocked(SMBChapterData,
                                                 DAT_00817168 /* R:3.2229864679470793e-44f */);
    if (iVar1 == 1) {
      FlashLibraryInstance__GotoAndStop(DAT_00817160 /* R:0.0f */, 2);
    } else {
      FlashLibraryInstance__GotoAndStop(DAT_00817160 /* R:0.0f */, 6);
    }
  }
  if (*(int *)(self + 0x68) == 7) {
    iVar1 = GSMBChapterData__IsCharacterUnlocked(SMBChapterData,
                                                 DAT_00817178 /* R:2.942726775082116e-44f */);
    if (iVar1 == 1) {
      FlashLibraryInstance__GotoAndStop(DAT_00817170 /* R:0.0f */, 1);
    } else {
      FlashLibraryInstance__GotoAndStop(DAT_00817170 /* R:0.0f */, 5);
    }
  } else {
    iVar1 = GSMBChapterData__IsCharacterUnlocked(SMBChapterData,
                                                 DAT_00817178 /* R:2.942726775082116e-44f */);
    if (iVar1 == 1) {
      FlashLibraryInstance__GotoAndStop(DAT_00817170 /* R:0.0f */, 2);
    } else {
      FlashLibraryInstance__GotoAndStop(DAT_00817170 /* R:0.0f */, 6);
    }
  }
  if (*(int *)(self + 0x68) == 8) {
    iVar1 = GSMBChapterData__IsCharacterUnlocked(SMBChapterData,
                                                 DAT_00817188 /* R:1.401298464324817e-44f */);
    if (iVar1 == 1) {
      FlashLibraryInstance__GotoAndStop(DAT_00817180 /* R:0.0f */, 1);
    } else {
      FlashLibraryInstance__GotoAndStop(DAT_00817180 /* R:0.0f */, 5);
    }
  } else {
    iVar1 = GSMBChapterData__IsCharacterUnlocked(SMBChapterData,
                                                 DAT_00817188 /* R:1.401298464324817e-44f */);
    if (iVar1 == 1) {
      FlashLibraryInstance__GotoAndStop(DAT_00817180 /* R:0.0f */, 2);
    } else {
      FlashLibraryInstance__GotoAndStop(DAT_00817180 /* R:0.0f */, 6);
    }
  }
  if (*(int *)(self + 0x68) == 9) {
    iVar1 = GSMBChapterData__IsCharacterUnlocked(SMBChapterData,
                                                 DAT_00817198 /* R:1.6815581571897805e-44f */);
    if (iVar1 == 1) {
      FlashLibraryInstance__GotoAndStop(DAT_00817190 /* R:0.0f */, 1);
    } else {
      FlashLibraryInstance__GotoAndStop(DAT_00817190 /* R:0.0f */, 5);
    }
  } else {
    iVar1 = GSMBChapterData__IsCharacterUnlocked(SMBChapterData,
                                                 DAT_00817198 /* R:1.6815581571897805e-44f */);
    if (iVar1 == 1) {
      FlashLibraryInstance__GotoAndStop(DAT_00817190 /* R:0.0f */, 2);
    } else {
      FlashLibraryInstance__GotoAndStop(DAT_00817190 /* R:0.0f */, 6);
    }
  }
  if (*(int *)(self + 0x68) == 10) {
    iVar1 = GSMBChapterData__IsCharacterUnlocked(SMBChapterData,
                                                 DAT_008171a8 /* R:2.6624670822171524e-44f */);
    if (iVar1 == 1) {
      FlashLibraryInstance__GotoAndStop(DAT_008171a0 /* R:0.0f */, 1);
    } else {
      FlashLibraryInstance__GotoAndStop(DAT_008171a0 /* R:0.0f */, 5);
    }
  } else {
    iVar1 = GSMBChapterData__IsCharacterUnlocked(SMBChapterData,
                                                 DAT_008171a8 /* R:2.6624670822171524e-44f */);
    if (iVar1 == 1) {
      FlashLibraryInstance__GotoAndStop(DAT_008171a0 /* R:0.0f */, 2);
    } else {
      FlashLibraryInstance__GotoAndStop(DAT_008171a0 /* R:0.0f */, 6);
    }
  }
  if (*(int *)(self + 0x68) == 0xb) {
    iVar1 = GSMBChapterData__IsCharacterUnlocked(SMBChapterData,
                                                 DAT_008171b8 /* R:1.961817850054744e-44f */);
    if (iVar1 == 1) {
      FlashLibraryInstance__GotoAndStop(DAT_008171b0 /* R:0.0f */, 1);
    } else {
      FlashLibraryInstance__GotoAndStop(DAT_008171b0 /* R:0.0f */, 5);
    }
  } else {
    iVar1 = GSMBChapterData__IsCharacterUnlocked(SMBChapterData,
                                                 DAT_008171b8 /* R:1.961817850054744e-44f */);
    if (iVar1 == 1) {
      FlashLibraryInstance__GotoAndStop(DAT_008171b0 /* R:0.0f */, 2);
    } else {
      FlashLibraryInstance__GotoAndStop(DAT_008171b0 /* R:0.0f */, 6);
    }
  }
  if (*(int *)(self + 0x68) == 0xc) {
    iVar1 = GSMBChapterData__IsCharacterUnlocked(SMBChapterData,
                                                 DAT_008171c8 /* R:9.80908925027372e-45f */);
    if (iVar1 == 1) {
      FlashLibraryInstance__GotoAndStop(DAT_008171c0 /* R:0.0f */, 1);
    } else {
      FlashLibraryInstance__GotoAndStop(DAT_008171c0 /* R:0.0f */, 5);
    }
  } else {
    iVar1 = GSMBChapterData__IsCharacterUnlocked(SMBChapterData,
                                                 DAT_008171c8 /* R:9.80908925027372e-45f */);
    if (iVar1 == 1) {
      FlashLibraryInstance__GotoAndStop(DAT_008171c0 /* R:0.0f */, 2);
    } else {
      FlashLibraryInstance__GotoAndStop(DAT_008171c0 /* R:0.0f */, 6);
    }
  }
  if ((*(ushort *)(self + 0x34) & 0x3ff) == 0) {
    return;
  }
  SMBPopupMenu__Render__00502110((SMBPopupMenu *)self);
  return;
}

/* ======================================================================
 * SMBCharSwitch__Activate  (Ghidra `Activate` @ 00503100)
 * Signature: uint8_t __thiscall Activate(SMBCharSwitch * self)
 * Class: SMBCharSwitch
 * Calls: `CreateMessage`, `GSMBChapterData__GetTotalNumBandagesCollected`, `GSMBChapterData__IsCharacterUnlocked`, `GetLocalizedText`, `Joystick__AddButtonCallback`, `Joystick__AddPOVCallback`, `SMBChapter__AllowCharSelect`, `SMBCharSwitchMoveDown`, `SMBCharSwitchMoveLeft`, `SMBCharSwitchMoveRight` (+6 more)
 * Called by: (none)
 */
/* SMBCharSwitch__Activate() */

void __thiscall SMBCharSwitch__Activate(SMBCharSwitch *self)

{
  int iVar1;
  uint uVar2;
  Joystick *pJVar3;
  uint64_t uVar4;
  uint32_t local_88[2];
  uint64_t local_80;
  uint64_t local_78;
  uint64_t local_70;
  uint64_t local_68;
  code *local_60;
  code *local_58;
  uint64_t local_50;
  uint64_t local_48;
  uint64_t local_40;
  uint64_t local_38;
  uint64_t local_30;
  uint64_t local_28;
  uint64_t local_20;
  tagSuperMeatBoyCharactor local_c[4];

  iVar1 = SMBChapter__AllowCharSelect((SMBChapter *)(SuperMeatBoy + 0x90), local_c);
  if (iVar1 == 0) {
    local_88[0] = 0;
    local_80 = 0;
    local_78 = 0;
    local_70 = 0;
    local_68 = 0;
    local_60 = (code *)0x0;
    local_58 = (code *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_80 = GetLocalizedText(0xe0);
    uVar2 = 0xe1;
  } else {
    if (*(int *)(GSuperMeatBoy__pReplay + 0x2c8) != 0) {
      SMBPopupMenu__Activate((SMBPopupMenu *)self);
      iVar1 = GSMBChapterData__IsCharacterUnlocked(
          SMBChapterData, (&DAT_00817108 /* R:0.0f */)[(long)*(int *)(self + 0x68) * 4]);
      if (iVar1 == 1) {
        uVar4 = GetLocalizedText(*(uint *)(&DAT_0081710c /* R:3.685414961174269e-43f */ +
                                           (long)*(int *)(self + 0x68) * 0x10));
        FlashTextField__SetText(*(wchar_t **)(self + 0x58), uVar4);
      } else {
        FlashTextField__SetText(*(char **)(self + 0x58), &DAT_005c741a /* R:"??????" */);
      }
      if (Keyboard != (TKeyboard *)0x0) {
        TKeyboard__AddKeyCallback(Keyboard, 0x7f, SMBCharSwitchMoveUp, self);
        TKeyboard__AddKeyCallback(Keyboard, 0x1f, SMBCharSwitchMoveDown, self);
        TKeyboard__AddKeyCallback(Keyboard, 0x41, SMBCharSwitchMoveLeft, self);
        TKeyboard__AddKeyCallback(Keyboard, 0x6d, SMBCharSwitchMoveRight, self);
        TKeyboard__AddKeyCallback(Keyboard, 0x76, SMBCharSwitchMoveSelect, self);
        TKeyboard__AddKeyCallback(Keyboard, 0x6c, SMBCharSwitchMoveSelect, self);
      }
      pJVar3 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
      Joystick__AddPOVCallback(pJVar3, 0, SMBCharSwitchMoveUp, self);
      pJVar3 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
      Joystick__AddPOVCallback(pJVar3, 2, SMBCharSwitchMoveDown, self);
      pJVar3 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
      Joystick__AddPOVCallback(pJVar3, 3, SMBCharSwitchMoveLeft, self);
      pJVar3 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
      Joystick__AddPOVCallback(pJVar3, 1, SMBCharSwitchMoveRight, self);
      pJVar3 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
      Joystick__AddButtonCallback(pJVar3, 0, SMBCharSwitchMoveSelect, self);
      uVar2 = GSMBChapterData__GetTotalNumBandagesCollected(SMBChapterData);
      FlashTextField__SetText(*(char **)(self + 0x60), &DAT_005c8bf9 /* R:u32=1996515621 */,
                              (ulong)uVar2);
      *(uint32_t *)(self + 0x6c) = 0;
      return;
    }
    local_88[0] = 0;
    local_80 = 0;
    local_78 = 0;
    local_70 = 0;
    local_68 = 0;
    local_60 = (code *)0x0;
    local_58 = (code *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_80 = GetLocalizedText(0xe0);
    uVar2 = 0xe2;
  }
  local_78 = GetLocalizedText(uVar2);
  local_88[0] = 0xe;
  local_70 = GetLocalizedText(4);
  local_60 = UserAlertCloseCurrent;
  local_58 = UserAlertCloseCurrent;
  CreateMessage(local_88);
  return;
}

/* ======================================================================
 * SMBCharSwitch__SMBCharSwitch  (Ghidra `~SMBCharSwitch` @ 00503e70)
 * Signature: uint8_t __thiscall ~SMBCharSwitch(SMBCharSwitch * self)
 * Class: SMBCharSwitch
 * Calls: `SMBCharSwitch__SMBCharSwitch__00503fa0`, `SMBPopupMenu__SMBPopupMenu__00503f20`
 * Called by: (none)
 */
/* SMBCharSwitch__SMBCharSwitch__00503fa0() */

void __thiscall SMBCharSwitch__SMBCharSwitch__00503fa0(SMBCharSwitch *self)

{
  *(uint8_t ***)self = &PTR__SMBCharSwitch_005c7910;
  SMBPopupMenu__SMBPopupMenu__00503f20((SMBPopupMenu *)self);
  return;
}

/* ======================================================================
 * SMBCharSwitch__SMBCharSwitch__00503fa0  (Ghidra `~SMBCharSwitch` @ 00503fa0)
 * Signature: uint8_t __thiscall ~SMBCharSwitch(SMBCharSwitch * self)
 * Class: SMBCharSwitch
 * Calls: `SMBPopupMenu__SMBPopupMenu__00503f20`, `operator_delete`
 * Called by: `GSMBMenu__GSMBMenu`, `SMBCharSwitch__SMBCharSwitch`
 */
/* SMBCharSwitch__SMBCharSwitch__00503fa0() */

void __thiscall SMBCharSwitch__SMBCharSwitch__00503fa0(SMBCharSwitch *self)

{
  *(uint8_t ***)self = &PTR__SMBCharSwitch_005c7910;
  SMBPopupMenu__SMBPopupMenu__00503f20((SMBPopupMenu *)self);
  operator_delete(self);
  return;
}

/* ======================================================================
 * SMBCharSwitch__DeActivate  (Ghidra `DeActivate` @ 00504190)
 * Signature: uint8_t __thiscall DeActivate(SMBCharSwitch * self)
 * Class: SMBCharSwitch
 * Calls: `Joystick__AddButtonCallback`, `Joystick__AddPOVCallback`, `Joystick__RestoreCallbacks`, `TKeyboard__AddKeyCallback`, `TKeyboard__RestoreCallbacks`, `TPlayer__GetJoystick`
 * Called by: (none)
 */
/* SMBCharSwitch__DeActivate() */

void __thiscall SMBCharSwitch__DeActivate(SMBCharSwitch *self)

{
  Joystick *pJVar1;

  if (Keyboard != (TKeyboard *)0x0) {
    TKeyboard__AddKeyCallback(Keyboard, 0x7f, 0, 0);
    TKeyboard__AddKeyCallback(Keyboard, 0x1f, 0, 0);
    TKeyboard__AddKeyCallback(Keyboard, 0x41, 0, 0);
    TKeyboard__AddKeyCallback(Keyboard, 0x6d, 0, 0);
    TKeyboard__AddKeyCallback(Keyboard, 0x76, 0, 0);
    TKeyboard__AddKeyCallback(Keyboard, 0x6c, 0, 0);
  }
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddPOVCallback(pJVar1, 0, 0, 0);
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddPOVCallback(pJVar1, 2, 0, 0);
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddPOVCallback(pJVar1, 3, 0, 0);
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddPOVCallback(pJVar1, 1, 0, 0);
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddButtonCallback(pJVar1, 0, 0, 0);
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
 * SMBCharSwitch__SMBCharSwitch__00505080  (Ghidra `SMBCharSwitch` @ 00505080)
 * Signature: uint8_t __thiscall SMBCharSwitch(SMBCharSwitch * self)
 * Class: SMBCharSwitch
 * Calls: `GetLocalizedText`
 * Called by: `GSMBMenu__GSMBMenu__004d8690`
 */
/* SMBCharSwitch__SMBCharSwitch__00505080() */

void __thiscall SMBCharSwitch__SMBCharSwitch__00505080(SMBCharSwitch *self)

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
  *(uint8_t ***)self = &PTR__SMBCharSwitch_005c7910;
  *(uint64_t *)(self + 0x50) = uVar1;
  *(uint32_t *)(self + 0x68) = 0;
  *(uint32_t *)(self + 0x6c) = 0;
  return;
}

/* ======================================================================
 * SMBCharSwitch__MoveUp  (Ghidra `MoveUp` @ 00505100)
 * Signature: uint8_t __thiscall MoveUp(SMBCharSwitch * self)
 * Class: SMBCharSwitch
 * Calls: `GSMBChapterData__IsCharacterUnlocked`, `GetLocalizedText`
 * Called by: (none)
 */
/* SMBCharSwitch__MoveUp() */

void __thiscall SMBCharSwitch__MoveUp(SMBCharSwitch *self)

{
  int iVar1;
  uint64_t uVar2;

  iVar1 = *(int *)(self + 0x68) + -6;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  *(int *)(self + 0x68) = iVar1;
  iVar1 = GSMBChapterData__IsCharacterUnlocked(SMBChapterData,
                                               (&DAT_00817108 /* R:0.0f */)[(long)iVar1 * 4]);
  if (iVar1 != 1) {
    FlashTextField__SetText(*(char **)(self + 0x58), &DAT_005c741a /* R:"??????" */);
    return;
  }
  uVar2 = GetLocalizedText(
      *(uint *)(&DAT_0081710c /* R:3.685414961174269e-43f */ + (long)*(int *)(self + 0x68) * 0x10));
  FlashTextField__SetText(*(wchar_t **)(self + 0x58), uVar2);
  return;
}

/* ======================================================================
 * SMBCharSwitch__MoveDown  (Ghidra `MoveDown` @ 00505170)
 * Signature: uint8_t __thiscall MoveDown(SMBCharSwitch * self)
 * Class: SMBCharSwitch
 * Calls: `GSMBChapterData__IsCharacterUnlocked`, `GetLocalizedText`
 * Called by: `SMBCharSwitchMoveDown`
 */
/* SMBCharSwitch__MoveDown() */

void __thiscall SMBCharSwitch__MoveDown(SMBCharSwitch *self)

{
  uint uVar1;
  int iVar2;
  uint64_t uVar3;

  uVar1 = *(int *)(self + 0x68) + 6;
  if (0xc < uVar1) {
    uVar1 = 0xc;
  }
  *(uint *)(self + 0x68) = uVar1;
  iVar2 = (&DAT_00817108 /* R:0.0f */)[(long)(int)uVar1 * 4];
  if (iVar2 == 7) {
    iVar2 = GSMBChapterData__IsCharacterUnlocked(SMBChapterData);
    if (iVar2 == 0) {
      iVar2 = *(int *)(self + 0x68);
      *(int *)(self + 0x68) = iVar2 + -1;
      iVar2 = (&DAT_00817108 /* R:0.0f */)[(long)(iVar2 + -1) * 4];
    } else {
      iVar2 = (&DAT_00817108 /* R:0.0f */)[(long)*(int *)(self + 0x68) * 4];
    }
  }
  iVar2 = GSMBChapterData__IsCharacterUnlocked(SMBChapterData, iVar2);
  if (iVar2 != 1) {
    FlashTextField__SetText(*(char **)(self + 0x58), &DAT_005c741a /* R:"??????" */);
    return;
  }
  uVar3 = GetLocalizedText(
      *(uint *)(&DAT_0081710c /* R:3.685414961174269e-43f */ + (long)*(int *)(self + 0x68) * 0x10));
  FlashTextField__SetText(*(wchar_t **)(self + 0x58), uVar3);
  return;
}

/* ======================================================================
 * SMBCharSwitch__MoveLeft  (Ghidra `MoveLeft` @ 00505250)
 * Signature: uint8_t __thiscall MoveLeft(SMBCharSwitch * self)
 * Class: SMBCharSwitch
 * Calls: `GSMBChapterData__IsCharacterUnlocked`, `GetLocalizedText`
 * Called by: (none)
 */
/* SMBCharSwitch__MoveLeft() */

void __thiscall SMBCharSwitch__MoveLeft(SMBCharSwitch *self)

{
  int iVar1;
  uint64_t uVar2;

  iVar1 = *(int *)(self + 0x68) + -1;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  *(int *)(self + 0x68) = iVar1;
  iVar1 = GSMBChapterData__IsCharacterUnlocked(SMBChapterData,
                                               (&DAT_00817108 /* R:0.0f */)[(long)iVar1 * 4]);
  if (iVar1 != 1) {
    FlashTextField__SetText(*(char **)(self + 0x58), &DAT_005c741a /* R:"??????" */);
    return;
  }
  uVar2 = GetLocalizedText(
      *(uint *)(&DAT_0081710c /* R:3.685414961174269e-43f */ + (long)*(int *)(self + 0x68) * 0x10));
  FlashTextField__SetText(*(wchar_t **)(self + 0x58), uVar2);
  return;
}

/* ======================================================================
 * SMBCharSwitch__MoveRight  (Ghidra `MoveRight` @ 005052c0)
 * Signature: uint8_t __thiscall MoveRight(SMBCharSwitch * self)
 * Class: SMBCharSwitch
 * Calls: `GSMBChapterData__IsCharacterUnlocked`, `GetLocalizedText`
 * Called by: `SMBCharSwitchMoveRight`
 */
/* SMBCharSwitch__MoveRight() */

void __thiscall SMBCharSwitch__MoveRight(SMBCharSwitch *self)

{
  uint uVar1;
  int iVar2;
  uint64_t uVar3;

  uVar1 = *(int *)(self + 0x68) + 1;
  if (0xc < uVar1) {
    uVar1 = 0xc;
  }
  *(uint *)(self + 0x68) = uVar1;
  iVar2 = (&DAT_00817108 /* R:0.0f */)[(long)(int)uVar1 * 4];
  if (iVar2 == 7) {
    iVar2 = GSMBChapterData__IsCharacterUnlocked(SMBChapterData);
    if (iVar2 == 0) {
      iVar2 = *(int *)(self + 0x68);
      *(int *)(self + 0x68) = iVar2 + -1;
      iVar2 = (&DAT_00817108 /* R:0.0f */)[(long)(iVar2 + -1) * 4];
    } else {
      iVar2 = (&DAT_00817108 /* R:0.0f */)[(long)*(int *)(self + 0x68) * 4];
    }
  }
  iVar2 = GSMBChapterData__IsCharacterUnlocked(SMBChapterData, iVar2);
  if (iVar2 != 1) {
    FlashTextField__SetText(*(char **)(self + 0x58), &DAT_005c741a /* R:"??????" */);
    return;
  }
  uVar3 = GetLocalizedText(
      *(uint *)(&DAT_0081710c /* R:3.685414961174269e-43f */ + (long)*(int *)(self + 0x68) * 0x10));
  FlashTextField__SetText(*(wchar_t **)(self + 0x58), uVar3);
  return;
}

/* ======================================================================
 * SMBCharSwitch__SelectionChanged  (Ghidra `SelectionChanged` @ 005053a0)
 * Signature: uint8_t __thiscall SelectionChanged(SMBCharSwitch * self)
 * Class: SMBCharSwitch
 * Calls: `GSMBChapterData__IsCharacterUnlocked`, `GetLocalizedText`
 * Called by: (none)
 */
/* SMBCharSwitch__SelectionChanged() */

void __thiscall SMBCharSwitch__SelectionChanged(SMBCharSwitch *self)

{
  int iVar1;
  uint64_t uVar2;

  iVar1 = GSMBChapterData__IsCharacterUnlocked(
      SMBChapterData, (&DAT_00817108 /* R:0.0f */)[(long)*(int *)(self + 0x68) * 4]);
  if (iVar1 != 1) {
    FlashTextField__SetText(*(char **)(self + 0x58), &DAT_005c741a /* R:"??????" */);
    return;
  }
  uVar2 = GetLocalizedText(
      *(uint *)(&DAT_0081710c /* R:3.685414961174269e-43f */ + (long)*(int *)(self + 0x68) * 0x10));
  FlashTextField__SetText(*(wchar_t **)(self + 0x58), uVar2);
  return;
}

/* ======================================================================
 * SMBCharSwitch__LoadSelectedCharacter  (Ghidra `LoadSelectedCharacter` @ 00505400)
 * Signature: uint8_t __thiscall LoadSelectedCharacter(SMBCharSwitch * self)
 * Class: SMBCharSwitch
 * Calls: `GSMBChapterData__IsCharacterUnlocked`, `GSuperMeatBoy__DeferLoadCharactor`
 * Called by: (none)
 */
/* SMBCharSwitch__LoadSelectedCharacter() */

void __thiscall SMBCharSwitch__LoadSelectedCharacter(SMBCharSwitch *self)

{
  GSuperMeatBoy *pGVar1;
  int iVar2;

  iVar2 = GSMBChapterData__IsCharacterUnlocked(
      SMBChapterData, (&DAT_00817108 /* R:0.0f */)[(long)*(int *)(self + 0x68) * 4]);
  pGVar1 = SuperMeatBoy;
  if (iVar2 != 1) {
    return;
  }
  *(uint32_t *)(self + 0x6c) = 1;
  GSuperMeatBoy__DeferLoadCharactor(pGVar1,
                                    (&DAT_00817108 /* R:0.0f */)[(long)*(int *)(self + 0x68) * 4]);
  /* WARNING: Could not recover jumptable at 0x00505454. Too many branches */
  /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)self + 0x28))(self);
  return;
}
