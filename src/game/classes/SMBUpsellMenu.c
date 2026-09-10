/* src/game/classes/SMBUpsellMenu.c — 16 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "SMBUpsellMenu.h"

/* ======================================================================
 * SMBUpsellMenu__Update  (Ghidra `Update` @ 005018c0)
 * Signature: uint8_t __stdcall Update(void)
 * Class: SMBUpsellMenu
 * Calls: (none)
 * Called by: (none)
 */
/* SMBUpsellMenu__Update() */

void SMBUpsellMenu__Update(void)

{
  return;
}

/* ======================================================================
 * SMBUpsellMenu__DeactivationFinished  (Ghidra `DeactivationFinished` @ 00501900)
 * Signature: uint8_t __thiscall DeactivationFinished(SMBUpsellMenu * self)
 * Class: SMBUpsellMenu
 * Calls: (none)
 * Called by: (none)
 */
/* SMBUpsellMenu__DeactivationFinished() */

void __thiscall SMBUpsellMenu__DeactivationFinished(SMBUpsellMenu *self)

{
  long lVar1;
  
  *(ushort *)(self + 0x34) = *(ushort *)(self + 0x34) & 0xfc00;
  lVar1 = SuperMeatBoy;
  *(uint32_t *)(self + 0x30) = 4;
  if (*(int *)(lVar1 + 0x2c) == 0) {
    RenderLayers__RemoveLayer(SMBMenu);
  }
  *(uint64_t *)(self + 0x10) = 0;
  *(uint64_t *)(self + 0x18) = 0;
  *(uint64_t *)(self + 0x28) = 0;
  return;
}

/* ======================================================================
 * SMBUpsellMenu__Render  (Ghidra `Render` @ 005029b0)
 * Signature: uint8_t __thiscall Render(SMBUpsellMenu * self)
 * Class: SMBUpsellMenu
 * Calls: `SMBPopupMenu__Render__00502110`
 * Called by: (none)
 */
/* SMBUpsellMenu__Render() */

void __thiscall SMBUpsellMenu__Render(SMBUpsellMenu *self)

{
  if ((*(ushort *)(self + 0x34) & 0x3ff) == 0) {
    return;
  }
  SMBPopupMenu__Render__00502110((SMBPopupMenu *)self);
  return;
}

/* ======================================================================
 * SMBUpsellMenu__Initialize  (Ghidra `Initialize` @ 00502a80)
 * Signature: uint8_t __thiscall Initialize(SMBUpsellMenu * self)
 * Class: SMBUpsellMenu
 * Calls: `FlashAnimationLibrary__FlashAnimationLibrary__00576680`, `FlashAnimationLibrary__GetClipIndex`, `FlashAnimationLibrary__GetLibraryEntry`, `FlashAnimationLibrary__GetMovieClip__005731d0`, `FlashMovieClip__FindInstance`, `FormatResourcePath`, `operator_new`
 * Called by: `GSMBMenu__GSMBMenu__004d8690`
 */
/* WARNING: Removing unreachable block (ram,0x00502c69) */
/* SMBUpsellMenu__Initialize() */

void __thiscall SMBUpsellMenu__Initialize(SMBUpsellMenu *self)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  FlashAnimationLibrary *pFVar4;
  uint64_t uVar5;
  FlashMovieClip *this_00;
  uint8_t *local_28 [2];
  
  local_28[0] = &DAT_008184c8 /* R:0.00016803004837129265f */;
                    /* try { // try from 00502a9b to 00502aac has its CatchHandler @ 00502c62 */
  pcVar3 = (char *)FormatResourcePath("/Menus/buyscreen.am",local_28);
  pFVar4 = operator_new(0xb0);
                    /* try { // try from 00502ab6 to 00502aba has its CatchHandler @ 00502c60 */
  FlashAnimationLibrary__FlashAnimationLibrary__00576680(pFVar4,pcVar3);
  *(FlashAnimationLibrary **)(self + 8) = pFVar4;
  pFVar4[0x8c] = (FlashAnimationLibrary)0x1;
                    /* try { // try from 00502acf to 00502b4e has its CatchHandler @ 00502c62 */
  uVar5 = FlashAnimationLibrary__GetMovieClip__005731d0(*(FlashAnimationLibrary **)(self + 8),"in");
  *(uint64_t *)(self + 0x58) = uVar5;
  uVar5 = FlashAnimationLibrary__GetMovieClip__005731d0(*(FlashAnimationLibrary **)(self + 8),"out");
  *(uint64_t *)(self + 0x60) = uVar5;
  uVar5 = FlashAnimationLibrary__GetMovieClip__005731d0(*(FlashAnimationLibrary **)(self + 8),"idle");
  *(uint64_t *)(self + 0x68) = uVar5;
  uVar5 = FlashAnimationLibrary__GetMovieClip__005731d0(*(FlashAnimationLibrary **)(self + 8),"popupin");
  *(uint64_t *)(self + 0x70) = uVar5;
  uVar5 = FlashAnimationLibrary__GetMovieClip__005731d0(*(FlashAnimationLibrary **)(self + 8),"popupout");
  *(uint64_t *)(self + 0x78) = uVar5;
  uVar5 = FlashAnimationLibrary__GetMovieClip__005731d0(*(FlashAnimationLibrary **)(self + 8),"popupidle");
  *(uint64_t *)(self + 0x80) = uVar5;
  pcVar3 = (char *)FormatResourcePath("/Intro/demooutro.am",local_28);
  pFVar4 = operator_new(0xb0);
                    /* try { // try from 00502b58 to 00502b5c has its CatchHandler @ 00502c67 */
  FlashAnimationLibrary__FlashAnimationLibrary__00576680(pFVar4,pcVar3);
  *(FlashAnimationLibrary **)(self + 0x88) = pFVar4;
  pFVar4[0x8c] = (FlashAnimationLibrary)0x1;
                    /* try { // try from 00502b74 to 00502b99 has its CatchHandler @ 00502c62 */
  uVar5 = FlashAnimationLibrary__GetMovieClip__005731d0(*(FlashAnimationLibrary **)(self + 0x88),0);
  *(uint64_t *)(self + 0x90) = uVar5;
  pcVar3 = (char *)FormatResourcePath("/Menus/buyoverlay.am",local_28);
  pFVar4 = operator_new(0xb0);
                    /* try { // try from 00502ba3 to 00502ba7 has its CatchHandler @ 00502c42 */
  FlashAnimationLibrary__FlashAnimationLibrary__00576680(pFVar4,pcVar3);
  *(FlashAnimationLibrary **)(self + 0x98) = pFVar4;
  pFVar4[0x8c] = (FlashAnimationLibrary)0x1;
                    /* try { // try from 00502bbf to 00502bfe has its CatchHandler @ 00502c62 */
  uVar5 = FlashAnimationLibrary__GetMovieClip__005731d0(*(FlashAnimationLibrary **)(self + 0x98),0);
  *(uint64_t *)(self + 0xa0) = uVar5;
  iVar2 = FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 8),"sadface");
  this_00 = (FlashMovieClip *)
            FlashAnimationLibrary__GetLibraryEntry
                      (*(FlashAnimationLibrary **)(self + 8),*(int *)(*(long *)(self + 0x80) + 0x20)
                      );
  uVar5 = FlashMovieClip__FindInstance(this_00,iVar2,0,(int *)0x0,0);
  *(uint64_t *)(self + 0xa8) = uVar5;
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
  return;
}

/* ======================================================================
 * SMBUpsellMenu__Activate  (Ghidra `Activate` @ 005037d0)
 * Signature: uint8_t __thiscall Activate(SMBUpsellMenu * self)
 * Class: SMBUpsellMenu
 * Calls: `CreateMessage`, `FlashAnimationLibrary__GetTextField`, `FlashLibraryInstance__GotoAndStop`, `FlashLibraryInstance__Reset`, `GetLocalizedText`, `RegisterMessageBoxRenderUpdate`, `SMBMessageUpsellControls`, `SMBMessageUpsellRender`, `SMBMessageUpsellUpdate`, `UserAlertCloseCurrent`
 * Called by: `GSMBMenu__ClickReplayPauseOption`, `GSMBMenu__ClickTitleOption`, `GSMBMenu__ShowUpsell`, `GSMBMenu__Update`, `SMBMenu_ClickReplayPauseOption`, `ShowAchievementUpsell`
 */
/* SMBUpsellMenu__Activate() */

void __thiscall SMBUpsellMenu__Activate(SMBUpsellMenu *self)

{
  int iVar1;
  uint64_t uVar2;
  wchar_t *pwVar3;
  uint uVar4;
  FlashLibraryInstance *this_00;
  uint32_t local_88 [2];
  wchar_t *local_80;
  wchar_t *local_78;
  uint64_t local_70;
  uint64_t local_68;
  code *local_60;
  code *local_58;
  uint64_t local_50;
  uint64_t local_48;
  uint64_t local_40;
  code *local_38;
  uint64_t local_30;
  uint64_t local_28;
  uint64_t local_20;
  
  if (*(short *)(self + 0xb0) == 1) {
    *(uint64_t *)(self + 0x10) = *(uint64_t *)(self + 0x70);
    *(uint64_t *)(self + 0x18) = *(uint64_t *)(self + 0x78);
    this_00 = *(FlashLibraryInstance **)(self + 0x80);
    *(FlashLibraryInstance **)(self + 0x28) = this_00;
  }
  else {
    *(uint64_t *)(self + 0x10) = *(uint64_t *)(self + 0x58);
    *(uint64_t *)(self + 0x18) = *(uint64_t *)(self + 0x60);
    this_00 = *(FlashLibraryInstance **)(self + 0x68);
    *(FlashLibraryInstance **)(self + 0x28) = this_00;
  }
  FlashLibraryInstance__Reset(this_00);
  FlashLibraryInstance__Reset(*(FlashLibraryInstance **)(self + 0x18));
  FlashLibraryInstance__Reset(*(FlashLibraryInstance **)(self + 0x10));
  FlashLibraryInstance__Reset(*(FlashLibraryInstance **)(self + 0x90));
  RegisterMessageBoxRenderUpdate(SMBMessageUpsellRender,SMBMessageUpsellUpdate);
  local_70 = 0;
  local_68 = 0;
  local_60 = (code *)0x0;
  local_58 = (code *)0x0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = (code *)0x0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_80 = L"BUy now";
  local_78 = L"buy the game";
  local_88[0] = 0xe;
  local_70 = GetLocalizedText(4);
  local_60 = UserAlertCloseCurrent;
  local_58 = UserAlertCloseCurrent;
  local_38 = SMBMessageUpsellControls;
  CreateMessage(local_88);
  if (*(short *)(self + 0xb0) == 0) {
    uVar2 = GetLocalizedText(0x68);
    pwVar3 = (wchar_t *)
             FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8),"trial");
    if (pwVar3 != (wchar_t *)0x0) {
      FlashTextField__SetText(pwVar3,uVar2);
    }
    uVar2 = GetLocalizedText(0x62);
    pwVar3 = (wchar_t *)
             FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8),"text1");
    if (pwVar3 != (wchar_t *)0x0) {
      FlashTextField__SetText(pwVar3,uVar2);
    }
    uVar2 = GetLocalizedText(99);
    pwVar3 = (wchar_t *)
             FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8),"text2");
    if (pwVar3 != (wchar_t *)0x0) {
      FlashTextField__SetText(pwVar3,uVar2);
    }
    uVar2 = GetLocalizedText(100);
    pwVar3 = (wchar_t *)
             FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8),"text3");
    if (pwVar3 != (wchar_t *)0x0) {
      FlashTextField__SetText(pwVar3,uVar2);
    }
    uVar2 = GetLocalizedText(0x65);
    pwVar3 = (wchar_t *)
             FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8),"text4");
    if (pwVar3 != (wchar_t *)0x0) {
      FlashTextField__SetText(pwVar3,uVar2);
    }
    uVar2 = GetLocalizedText(0x66);
    pwVar3 = (wchar_t *)
             FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8),"text5");
    if (pwVar3 != (wchar_t *)0x0) {
      FlashTextField__SetText(pwVar3,uVar2);
    }
    uVar2 = GetLocalizedText(0x67);
    pwVar3 = (wchar_t *)
             FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8),"text6");
    if (pwVar3 != (wchar_t *)0x0) {
      FlashTextField__SetText(pwVar3,uVar2);
    }
    uVar4 = 0x2d;
    if (self[0xb2] != (SMBUpsellMenu)0x1) {
      uVar4 = 0x5c;
    }
    uVar2 = GetLocalizedText(uVar4);
    pwVar3 = (wchar_t *)
             FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8),"quit");
    if (pwVar3 != (wchar_t *)0x0) {
      FlashTextField__SetText(pwVar3,uVar2);
    }
    uVar2 = GetLocalizedText(0xac);
    pwVar3 = (wchar_t *)
             FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8),"unlock");
    if (pwVar3 != (wchar_t *)0x0) {
      FlashTextField__SetText(pwVar3,uVar2);
    }
    uVar4 = 10;
    goto LAB_0050396d;
  }
  iVar1 = *(int *)(self + 0xb4);
  if (iVar1 == 1) {
    uVar2 = GetLocalizedText(0x69);
    pwVar3 = (wchar_t *)
             FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8),"title");
    if (pwVar3 != (wchar_t *)0x0) {
      FlashTextField__SetText(pwVar3,uVar2);
    }
    uVar4 = 0x6a;
LAB_00503c12:
    uVar2 = GetLocalizedText(uVar4);
    pwVar3 = (wchar_t *)
             FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8),"pop1");
    if (pwVar3 != (wchar_t *)0x0) {
      FlashTextField__SetText(pwVar3,uVar2);
    }
    FlashLibraryInstance__GotoAndStop(*(FlashLibraryInstance **)(self + 0xa8),1);
  }
  else {
    if (iVar1 == 3) {
      uVar2 = GetLocalizedText(0xd8);
      pwVar3 = (wchar_t *)
               FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8),"title");
      if (pwVar3 != (wchar_t *)0x0) {
        FlashTextField__SetText(pwVar3,uVar2);
      }
      uVar4 = 0xd9;
      goto LAB_00503c12;
    }
    if (iVar1 == 2) {
      uVar2 = GetLocalizedText(0xd6);
      pwVar3 = (wchar_t *)
               FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8),"title");
      if (pwVar3 != (wchar_t *)0x0) {
        FlashTextField__SetText(pwVar3,uVar2);
      }
      uVar2 = GetLocalizedText(0xd7);
      pwVar3 = (wchar_t *)
               FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8),"pop1");
      if (pwVar3 != (wchar_t *)0x0) {
        FlashTextField__SetText(pwVar3,uVar2);
      }
      FlashLibraryInstance__GotoAndStop(*(FlashLibraryInstance **)(self + 0xa8),2);
    }
  }
  uVar2 = GetLocalizedText(0x6b);
  pwVar3 = (wchar_t *)
           FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8),"pop2");
  if (pwVar3 != (wchar_t *)0x0) {
    FlashTextField__SetText(pwVar3,uVar2);
  }
  uVar2 = GetLocalizedText(0x48);
  pwVar3 = (wchar_t *)
           FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8),"unlock");
  if (pwVar3 != (wchar_t *)0x0) {
    FlashTextField__SetText(pwVar3,uVar2);
  }
  uVar4 = 0x27;
LAB_0050396d:
  uVar2 = GetLocalizedText(uVar4);
  pwVar3 = (wchar_t *)
           FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8),"back");
  if (pwVar3 != (wchar_t *)0x0) {
    FlashTextField__SetText(pwVar3,uVar2);
  }
  return;
}

/* ======================================================================
 * SMBUpsellMenu__DeActivate  (Ghidra `DeActivate` @ 00504310)
 * Signature: uint8_t __thiscall DeActivate(SMBUpsellMenu * self)
 * Class: SMBUpsellMenu
 * Calls: `Joystick__AddButtonCallback`, `Joystick__RestoreCallbacks`, `TKeyboard__AddKeyCallback`, `TKeyboard__RestoreCallbacks`, `TPlayer__GetJoystick`
 * Called by: (none)
 */
/* SMBUpsellMenu__DeActivate() */

void __thiscall SMBUpsellMenu__DeActivate(SMBUpsellMenu *self)

{
  Joystick *pJVar1;
  
  self[0xb3] = (SMBUpsellMenu)0x0;
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddButtonCallback(pJVar1,2,0,0);
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddButtonCallback(pJVar1,0,0,0);
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
 * SMBUpsellMenu__SMBUpsellMenu  (Ghidra `SMBUpsellMenu` @ 00504a70)
 * Signature: uint8_t __thiscall SMBUpsellMenu(SMBUpsellMenu * self)
 * Class: SMBUpsellMenu
 * Calls: `GetLocalizedText`
 * Called by: `GSMBMenu__GSMBMenu__004d8690`
 */
/* SMBUpsellMenu__SMBUpsellMenu() */

void __thiscall SMBUpsellMenu__SMBUpsellMenu(SMBUpsellMenu *self)

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
  *(uint8_t ***)self = &PTR__SMBUpsellMenu_005c78b0;
  *(uint64_t *)(self + 0x50) = uVar1;
  *(uint64_t *)(self + 0x58) = 0;
  *(uint64_t *)(self + 0x60) = 0;
  *(uint64_t *)(self + 0x68) = 0;
  *(uint64_t *)(self + 0x70) = 0;
  *(uint64_t *)(self + 0x78) = 0;
  *(uint64_t *)(self + 0x80) = 0;
  *(uint64_t *)(self + 0x88) = 0;
  *(uint64_t *)(self + 0x90) = 0;
  *(uint64_t *)(self + 0x98) = 0;
  *(uint64_t *)(self + 0xa0) = 0;
  *(uint16_t *)(self + 0xb0) = 0;
  self[0xb2] = (SMBUpsellMenu)0x0;
  self[0xb3] = (SMBUpsellMenu)0x0;
  *(uint32_t *)(self + 0xb4) = 0;
  pCurrUpsellMenu = self;
  return;
}

/* ======================================================================
 * SMBUpsellMenu__DestroyUpsellResources  (Ghidra `DestroyUpsellResources` @ 00504b70)
 * Signature: uint8_t __thiscall DestroyUpsellResources(SMBUpsellMenu * self)
 * Class: SMBUpsellMenu
 * Calls: `FlashAnimationLibrary__FlashAnimationLibrary`, `operator_delete`
 * Called by: (none)
 */
/* SMBUpsellMenu__DestroyUpsellResources() */

void __thiscall SMBUpsellMenu__DestroyUpsellResources(SMBUpsellMenu *self)

{
  FlashAnimationLibrary *pFVar1;
  
  if (*(long **)(self + 0x58) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x58) + 8))();
  }
  *(uint64_t *)(self + 0x58) = 0;
  if (*(long **)(self + 0x60) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x60) + 8))();
  }
  *(uint64_t *)(self + 0x60) = 0;
  if (*(long **)(self + 0x68) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x68) + 8))();
  }
  *(uint64_t *)(self + 0x68) = 0;
  if (*(long **)(self + 0x70) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x70) + 8))();
  }
  *(uint64_t *)(self + 0x70) = 0;
  if (*(long **)(self + 0x78) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x78) + 8))();
  }
  *(uint64_t *)(self + 0x78) = 0;
  if (*(long **)(self + 0x80) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x80) + 8))();
  }
  *(uint64_t *)(self + 0x80) = 0;
  if (*(long **)(self + 0x90) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x90) + 8))();
  }
  pFVar1 = *(FlashAnimationLibrary **)(self + 0x88);
  *(uint64_t *)(self + 0x90) = 0;
  if (pFVar1 != (FlashAnimationLibrary *)0x0) {
    FlashAnimationLibrary__FlashAnimationLibrary(pFVar1);
    operator_delete(pFVar1);
  }
  *(uint64_t *)(self + 0x88) = 0;
  if (*(long **)(self + 0xa0) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0xa0) + 8))();
  }
  pFVar1 = *(FlashAnimationLibrary **)(self + 0x98);
  *(uint64_t *)(self + 0xa0) = 0;
  if (pFVar1 != (FlashAnimationLibrary *)0x0) {
    FlashAnimationLibrary__FlashAnimationLibrary(pFVar1);
    operator_delete(pFVar1);
  }
  *(uint64_t *)(self + 0x98) = 0;
  return;
}

/* ======================================================================
 * SMBUpsellMenu__SMBUpsellMenu__00504ca0  (Ghidra `~SMBUpsellMenu` @ 00504ca0)
 * Signature: uint8_t __thiscall ~SMBUpsellMenu(SMBUpsellMenu * self)
 * Class: SMBUpsellMenu
 * Calls: `SMBPopupMenu__SMBPopupMenu__00503f20`, `SMBUpsellMenu__SMBUpsellMenu__00504d00`
 * Called by: (none)
 */
/* SMBUpsellMenu__SMBUpsellMenu__00504d00() */

void __thiscall SMBUpsellMenu__SMBUpsellMenu__00504d00(SMBUpsellMenu *self)

{
  *(uint8_t ***)self = &PTR__SMBUpsellMenu_005c78b0;
  *(uint64_t *)(self + 0x28) = 0;
  *(uint64_t *)(self + 0x10) = 0;
  *(uint64_t *)(self + 0x18) = 0;
                    /* try { // try from 00504cc7 to 00504ccb has its CatchHandler @ 00504cd9 */
  DestroyUpsellResources(self);
  SMBPopupMenu__SMBPopupMenu__00503f20((SMBPopupMenu *)self);
  return;
}

/* ======================================================================
 * SMBUpsellMenu__SMBUpsellMenu__00504d00  (Ghidra `~SMBUpsellMenu` @ 00504d00)
 * Signature: uint8_t __thiscall ~SMBUpsellMenu(SMBUpsellMenu * self)
 * Class: SMBUpsellMenu
 * Calls: `SMBPopupMenu__SMBPopupMenu__00503f20`, `operator_delete`
 * Called by: `GSMBMenu__GSMBMenu`, `SMBUpsellMenu__SMBUpsellMenu__00504ca0`
 */
/* SMBUpsellMenu__SMBUpsellMenu__00504d00() */

void __thiscall SMBUpsellMenu__SMBUpsellMenu__00504d00(SMBUpsellMenu *self)

{
  *(uint8_t ***)self = &PTR__SMBUpsellMenu_005c78b0;
  *(uint64_t *)(self + 0x28) = 0;
  *(uint64_t *)(self + 0x10) = 0;
  *(uint64_t *)(self + 0x18) = 0;
                    /* try { // try from 00504d27 to 00504d2b has its CatchHandler @ 00504d41 */
  DestroyUpsellResources(self);
  SMBPopupMenu__SMBPopupMenu__00503f20((SMBPopupMenu *)self);
  operator_delete(self);
  return;
}

/* ======================================================================
 * SMBUpsellMenu__SetUpsellAchievementMode  (Ghidra `SetUpsellAchievementMode` @ 00504d60)
 * Signature: uint8_t __thiscall SetUpsellAchievementMode(SMBUpsellMenu * self, tagAwardType arg1)
 * Class: SMBUpsellMenu
 * Calls: (none)
 * Called by: `GSMBMenu__ClickReplayPauseOption`, `GSMBMenu__ClickTitleOption`, `GSMBMenu__ShowUpsell`, `GSMBMenu__Update`, `SMBMenu_ClickReplayPauseOption`, `ShowAchievementUpsell`
 */
/* SMBUpsellMenu__SetUpsellAchievementMode(tagAwardType) */

void __thiscall SMBUpsellMenu__SetUpsellAchievementMode(SMBUpsellMenu *self,int arg2)

{
  *(int *)(self + 0xb4) = arg2;
  self[0xb3] = (SMBUpsellMenu)0x0;
  self[0xb2] = (SMBUpsellMenu)0x0;
  *(ushort *)(self + 0xb0) = (ushort)(arg2 != 0);
  return;
}

/* ======================================================================
 * SMBUpsellMenu__SetUpsellNotExitMode  (Ghidra `SetUpsellNotExitMode` @ 00504d90)
 * Signature: uint8_t __thiscall SetUpsellNotExitMode(SMBUpsellMenu * self, int arg1)
 * Class: SMBUpsellMenu
 * Calls: (none)
 * Called by: `GSMBMenu__ClickReplayPauseOption`, `GSMBMenu__ClickTitleOption`, `GSMBMenu__ShowUpsell`, `GSMBMenu__Update`, `SMBMenu_ClickReplayPauseOption`
 */
/* SMBUpsellMenu__SetUpsellNotExitMode(int) */

void __thiscall SMBUpsellMenu__SetUpsellNotExitMode(SMBUpsellMenu *self,int arg1)

{
  self[0xb2] = SUB41(arg1,0);
  return;
}

/* ======================================================================
 * SMBUpsellMenu__SetUpsellControls  (Ghidra `SetUpsellControls` @ 00504da0)
 * Signature: uint8_t __thiscall SetUpsellControls(SMBUpsellMenu * self)
 * Class: SMBUpsellMenu
 * Calls: `Joystick__AddButtonCallback`, `SMBUpsellBuy`, `SMBUpsellContinue`, `SMBUpsellExit`, `TPlayer__GetJoystick`
 * Called by: (none)
 */
/* SMBUpsellMenu__SetUpsellControls() */

void __thiscall SMBUpsellMenu__SetUpsellControls(SMBUpsellMenu *self)

{
  Joystick *pJVar1;
  
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddButtonCallback(pJVar1,2,SMBUpsellBuy,0);
  if (*(short *)(self + 0xb0) != 0) {
    return;
  }
  if (self[0xb2] != (SMBUpsellMenu)0x1) {
    pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
    Joystick__AddButtonCallback(pJVar1,0,SMBUpsellExit,0);
    return;
  }
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddButtonCallback(pJVar1,0,SMBUpsellContinue,0);
  return;
}

/* ======================================================================
 * SMBUpsellMenu__MessageBoxRender  (Ghidra `MessageBoxRender` @ 00504e20)
 * Signature: uint8_t __thiscall MessageBoxRender(SMBUpsellMenu * self, tagUAState arg1)
 * Class: SMBUpsellMenu
 * Calls: `FlashLibraryInstance__IsPlaying`, `RegisterAudioPosition`, `SetCurrState`, `TAudio__DisableDirectionalAudio`, `TAudio__EnableDirectionalAudio`, `TGraphics__GetMatrix`, `TGraphics__SetMatrix`, `TGraphics__SetPerspectiveProjectionMode`, `TGraphics__SetRenderState`
 * Called by: `SMBMessageUpsellRender`
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SMBUpsellMenu__MessageBoxRender(tagUAState) */

void __thiscall SMBUpsellMenu__MessageBoxRender(SMBUpsellMenu *self,int arg2)

{
  int iVar1;
  Matrix4x4 *pMVar2;
  Matrix4x4 aMStack_58 [72];
  
  TGraphics__SetRenderState(Graphics,'\x03',0);
  TGraphics__SetRenderState(Graphics,'\x01',7);
  TGraphics__SetRenderState(Graphics,'\b',1);
  TGraphics__SetRenderState(Graphics,'\x05',4);
  TGraphics__SetRenderState(Graphics,'\x06',5);
  TGraphics__SetRenderState(Graphics,'\n',7);
  TGraphics__SetRenderState(Graphics,'\t',0);
  Matrix4x4__ConvertToOrthoMatrix
            (aMStack_58,_DAT_005c0c9c /* R:240.0f */,DAT_005c0c98 /* R:-240.0f */,DAT_005c0c94 /* R:-426.5f */,DAT_005c0c90 /* R:426.5f */,DAT_005c07a4 /* R:-1.0f */,
             DAT_005be894 /* R:1.0f */);
  TGraphics__SetMatrix(Graphics,3,aMStack_58);
  TGraphics__SetPerspectiveProjectionMode(Graphics,0);
  pMVar2 = (Matrix4x4 *)TGraphics__GetMatrix(Graphics,2);
  Matrix4x4__Identity(pMVar2);
  pMVar2 = (Matrix4x4 *)TGraphics__GetMatrix(Graphics,0);
  Matrix4x4__Identity(pMVar2);
  TAudio__DisableDirectionalAudio(Audio);
  RegisterAudioPosition((FPUVector *)0xffffffff);
  if (self[0xb3] == (SMBUpsellMenu)0x1) {
    (**(code **)(**(long **)(self + 0x90) + 0x10))();
    iVar1 = FlashLibraryInstance__IsPlaying(*(FlashLibraryInstance **)(self + 0x90));
    if (iVar1 == 0) {
      self[0xb3] = (SMBUpsellMenu)0x0;
    }
  }
  else {
    if (arg2 == 2) {
      (**(code **)(**(long **)(self + 0x28) + 0x10))();
    }
    else if (arg2 == 0) {
      (**(code **)(**(long **)(self + 0x10) + 0x10))();
      iVar1 = FlashLibraryInstance__IsPlaying(*(FlashLibraryInstance **)(self + 0x10));
      if (iVar1 == 0) {
        SetCurrState(2);
      }
    }
    else if (arg2 == 1) {
      (**(code **)(**(long **)(self + 0x18) + 0x10))();
      iVar1 = FlashLibraryInstance__IsPlaying(*(FlashLibraryInstance **)(self + 0x18));
      if (iVar1 == 0) {
        SetCurrState(3);
      }
    }
    if (*(short *)(self + 0xb0) == 0) {
      (**(code **)(**(long **)(self + 0xa0) + 0x10))();
    }
  }
  TAudio__EnableDirectionalAudio(Audio);
  RegisterAudioPosition((FPUVector *)0x0);
  return;
}

/* ======================================================================
 * SMBUpsellMenu__SetUpsellOutroMode  (Ghidra `SetUpsellOutroMode` @ 00505050)
 * Signature: uint8_t __thiscall SetUpsellOutroMode(SMBUpsellMenu * self, int arg1)
 * Class: SMBUpsellMenu
 * Calls: (none)
 * Called by: `GSMBMenu__ClickReplayPauseOption`, `GSMBMenu__ClickTitleOption`, `GSMBMenu__ShowUpsell`, `GSMBMenu__Update`, `SMBMenu_ClickReplayPauseOption`
 */
/* SMBUpsellMenu__SetUpsellOutroMode(int) */

void __thiscall SMBUpsellMenu__SetUpsellOutroMode(SMBUpsellMenu *self,int arg1)

{
  self[0xb3] = SUB41(arg1,0);
  return;
}

/* ======================================================================
 * SMBUpsellMenu__CloseUpsell  (Ghidra `CloseUpsell` @ 00505060)
 * Signature: uint8_t __thiscall CloseUpsell(SMBUpsellMenu * self)
 * Class: SMBUpsellMenu
 * Calls: `RunCancelFunction`
 * Called by: (none)
 */
/* SMBUpsellMenu__CloseUpsell() */

void __thiscall SMBUpsellMenu__CloseUpsell(SMBUpsellMenu *self)

{
  if (self[0xb3] != (SMBUpsellMenu)0x0) {
    self[0xb3] = (SMBUpsellMenu)0x0;
    return;
  }
  RunCancelFunction();
  return;
}
