/* src/game/classes/SMBInternetChapterSel.c — 20 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "SMBInternetChapterSel.h"

/* ======================================================================
 * SMBInternetChapterSel__Render  (Ghidra `Render` @ 004c2cb0)
 * Signature: uint8_t __thiscall Render(SMBInternetChapterSel * self)
 * Class: SMBInternetChapterSel
 * Calls: `SMBPopupMenu__Render__00502110`
 * Called by: (none)
 */
/* SMBInternetChapterSel__Render() */

void __thiscall SMBInternetChapterSel__Render(SMBInternetChapterSel *self)

{
  if ((*(ushort *)(self + 0x34) & 0x3ff) == 0) {
    return;
  }
  SMBPopupMenu__Render__00502110((SMBPopupMenu *)self);
  return;
}

/* ======================================================================
 * SMBInternetChapterSel__DeActivate  (Ghidra `DeActivate` @ 004c2cc0)
 * Signature: uint8_t __thiscall DeActivate(SMBInternetChapterSel * self)
 * Class: SMBInternetChapterSel
 * Calls: `Joystick__AddButtonCallback`, `SMBSelectionMenu__DeActivate`, `TPlayer__GetJoystick`
 * Called by: (none)
 */
/* SMBInternetChapterSel__DeActivate() */

void __thiscall SMBInternetChapterSel__DeActivate(SMBInternetChapterSel *self)

{
  Joystick *pJVar1;
  
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddButtonCallback(pJVar1,0,0,0);
  SMBSelectionMenu__DeActivate((SMBSelectionMenu *)self);
  FlashTextField__SetText(*(wchar_t **)(self + 0x90),&DAT_005c6634 /* R:0.0f */);
  FlashTextField__SetText(*(wchar_t **)(self + 0xe0),&DAT_005c6634 /* R:0.0f */);
  FlashTextField__SetText(*(wchar_t **)(self + 0x98),&DAT_005c6634 /* R:0.0f */);
  FlashTextField__SetText(*(wchar_t **)(self + 0xe8),&DAT_005c6634 /* R:0.0f */);
  FlashTextField__SetText(*(wchar_t **)(self + 0xa0),&DAT_005c6634 /* R:0.0f */);
  FlashTextField__SetText(*(wchar_t **)(self + 0xf0),&DAT_005c6634 /* R:0.0f */);
  FlashTextField__SetText(*(wchar_t **)(self + 0xa8),&DAT_005c6634 /* R:0.0f */);
  FlashTextField__SetText(*(wchar_t **)(self + 0xf8),&DAT_005c6634 /* R:0.0f */);
  FlashTextField__SetText(*(wchar_t **)(self + 0xb0),&DAT_005c6634 /* R:0.0f */);
  FlashTextField__SetText(*(wchar_t **)(self + 0x100),&DAT_005c6634 /* R:0.0f */);
  self[0x1b5] = (SMBInternetChapterSel)0x0;
  *(uint64_t *)(self + 0x28) = *(uint64_t *)(self + 0x88);
  return;
}

/* ======================================================================
 * SMBInternetChapterSel__SMBInternetChapterSel  (Ghidra `~SMBInternetChapterSel` @ 004c2dc0)
 * Signature: uint8_t __thiscall ~SMBInternetChapterSel(SMBInternetChapterSel * self)
 * Class: SMBInternetChapterSel
 * Calls: `SMBInternetChapterSel__SMBInternetChapterSel__004c35f0`, `SMBSelectionMenu__SMBSelectionMenu__005100b0`, `SyncEvent__SyncEvent__005b8100`, `operator_delete`
 * Called by: (none)
 */
/* SMBInternetChapterSel__SMBInternetChapterSel__004c35f0() */

void __thiscall SMBInternetChapterSel__SMBInternetChapterSel__004c35f0(SMBInternetChapterSel *self)

{
  *(uint8_t ***)self = &PTR__SMBInternetChapterSel_005c5c90;
  if (*(void **)(self + 0x1a8) != (void *)0x0) {
    operator_delete(*(void **)(self + 0x1a8));
  }
                    /* try { // try from 004c2de7 to 004c2deb has its CatchHandler @ 004c2df9 */
  SyncEvent__SyncEvent__005b8100((SyncEvent *)(self + 0x140));
  SMBSelectionMenu__SMBSelectionMenu__005100b0((SMBSelectionMenu *)self);
  return;
}

/* ======================================================================
 * SMBInternetChapterSel__DeactivationFinished  (Ghidra `DeactivationFinished` @ 004c2e20)
 * Signature: uint8_t __thiscall DeactivationFinished(SMBInternetChapterSel * self)
 * Class: SMBInternetChapterSel
 * Calls: `CreateMessage`, `GetLocalizedText`, `SMBInternetChapterSel__DeactivationFinished__004c3090`, `UserAlertCloseCurrent`
 * Called by: (none)
 */
/* SMBInternetChapterSel__DeactivationFinished__004c3090() [clone .part.2] */

void __thiscall SMBInternetChapterSel__DeactivationFinished__004c3090(SMBInternetChapterSel *self)

{
  uint uVar1;
  uint32_t local_78 [2];
  uint64_t local_70;
  uint64_t local_68;
  uint64_t local_60;
  uint64_t local_58;
  code *local_50;
  uint64_t local_48;
  uint64_t local_40;
  uint64_t local_38;
  uint64_t local_30;
  uint64_t local_28;
  uint64_t local_20;
  uint64_t local_18;
  uint64_t local_10;
  
  if (self[0x1b4] == (SMBInternetChapterSel)0x1) {
    local_78[0] = 0;
    local_70 = 0;
    local_68 = 0;
    local_60 = 0;
    local_58 = 0;
    local_50 = (code *)0x0;
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    local_10 = 0;
    local_70 = GetLocalizedText(0x35);
    local_68 = GetLocalizedText(0x33);
    local_78[0] = 0xe;
    local_60 = GetLocalizedText(4);
    local_50 = UserAlertCloseCurrent;
    CreateMessage(local_78);
    self[0x1b4] = (SMBInternetChapterSel)0x0;
    return;
  }
  if (rmChapterStatus == 0) {
    local_78[0] = 0;
    local_70 = 0;
    local_68 = 0;
    local_60 = 0;
    local_58 = 0;
    local_50 = (code *)0x0;
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    local_10 = 0;
    local_70 = GetLocalizedText(0x34);
    uVar1 = 0x36;
  }
  else {
    if (rmChapterStatus != 3) {
      return;
    }
    local_78[0] = 0;
    local_70 = 0;
    local_68 = 0;
    local_60 = 0;
    local_58 = 0;
    local_50 = (code *)0x0;
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    local_10 = 0;
    local_70 = GetLocalizedText(0x37);
    uVar1 = 0x38;
  }
  local_68 = GetLocalizedText(uVar1);
  local_78[0] = 0xe;
  local_60 = GetLocalizedText(4);
  local_50 = UserAlertCloseCurrent;
  CreateMessage(local_78);
  return;
}

/* ======================================================================
 * SMBInternetChapterSel__DeactivationFinished__004c3090  (Ghidra `DeactivationFinished` @ 004c3090)
 * Signature: uint8_t __thiscall DeactivationFinished(SMBInternetChapterSel * self)
 * Class: SMBInternetChapterSel
 * Calls: `SMBPopupMenu__DeactivationFinished`
 * Called by: `SMBInternetChapterSel__DeactivationFinished`
 */
/* SMBInternetChapterSel__DeactivationFinished__004c3090() */

void __thiscall SMBInternetChapterSel__DeactivationFinished__004c3090(SMBInternetChapterSel *self)

{
  SMBPopupMenu__DeactivationFinished((SMBPopupMenu *)self);
  if ((*(ushort *)(self + 0x1b6) & 0xfff) != 0x100) {
    return;
  }
  DeactivationFinished(self);
  return;
}

/* ======================================================================
 * SMBInternetChapterSel__Initialize  (Ghidra `Initialize` @ 004c30c0)
 * Signature: uint8_t __thiscall Initialize(SMBInternetChapterSel * self)
 * Class: SMBInternetChapterSel
 * Calls: `FlashAnimationLibrary__FlashAnimationLibrary__00576680`, `FlashAnimationLibrary__GetClipIndex`, `FlashAnimationLibrary__GetMovieClip__005731d0`, `FlashAnimationLibrary__GetTextField`, `FormatResourcePath`, `GetLocalizedText`, `SMBSelectionMenu__InitializeMenuRows`, `Sprint`, `operator_new`
 * Called by: `GSMBMenu__GSMBMenu__004d8690`
 */
/* WARNING: Removing unreachable block (ram,0x004c350a) */
/* SMBInternetChapterSel__Initialize() */

void __thiscall SMBInternetChapterSel__Initialize(SMBInternetChapterSel *self)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  FlashAnimationLibrary *this_00;
  uint64_t uVar4;
  wchar_t *pwVar5;
  char acStack_38 [16];
  uint8_t *local_28 [2];
  
  local_28[0] = &DAT_008184c8 /* R:0.00016803004837129265f */;
                    /* try { // try from 004c30de to 004c30ef has its CatchHandler @ 004c3505 */
  pcVar3 = (char *)FormatResourcePath("/Menus/iloading.am",local_28);
  this_00 = operator_new(0xb0);
                    /* try { // try from 004c30f9 to 004c30fd has its CatchHandler @ 004c34e5 */
  FlashAnimationLibrary__FlashAnimationLibrary__00576680(this_00,pcVar3);
  *(FlashAnimationLibrary **)(self + 8) = this_00;
  this_00[0x8c] = (FlashAnimationLibrary)0x1;
                    /* try { // try from 004c3112 to 004c34a1 has its CatchHandler @ 004c3505 */
  uVar4 = FlashAnimationLibrary__GetMovieClip__005731d0(*(FlashAnimationLibrary **)(self + 8),"loadchapter");
  *(uint64_t *)(self + 0x28) = uVar4;
  uVar4 = FlashAnimationLibrary__GetMovieClip__005731d0
                    (*(FlashAnimationLibrary **)(self + 8),"loadchapterload");
  *(uint64_t *)(self + 0x20) = uVar4;
  uVar4 = FlashAnimationLibrary__GetMovieClip__005731d0(*(FlashAnimationLibrary **)(self + 8),"loadin");
  *(uint64_t *)(self + 0x10) = uVar4;
  uVar4 = FlashAnimationLibrary__GetMovieClip__005731d0(*(FlashAnimationLibrary **)(self + 8),"loadout");
  *(uint64_t *)(self + 0x18) = uVar4;
  uVar4 = FlashAnimationLibrary__GetMovieClip__005731d0(*(FlashAnimationLibrary **)(self + 8),"loadidle");
  *(uint64_t *)(self + 0x80) = uVar4;
  *(uint64_t *)(self + 0x88) = *(uint64_t *)(self + 0x28);
  SMBSelectionMenu__InitializeMenuRows((SMBSelectionMenu *)self,5);
  FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 8),"selectbar");
  Sprint("name%i",acStack_38,1);
  uVar4 = FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8),acStack_38);
  *(uint64_t *)(self + 0x90) = uVar4;
  Sprint("time%i",acStack_38,1);
  uVar4 = FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8),acStack_38);
  *(uint64_t *)(self + 0xe0) = uVar4;
  Sprint("name%i",acStack_38,2);
  uVar4 = FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8),acStack_38);
  *(uint64_t *)(self + 0x98) = uVar4;
  Sprint("time%i",acStack_38,2);
  uVar4 = FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8),acStack_38);
  *(uint64_t *)(self + 0xe8) = uVar4;
  Sprint("name%i",acStack_38,3);
  uVar4 = FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8),acStack_38);
  *(uint64_t *)(self + 0xa0) = uVar4;
  Sprint("time%i",acStack_38,3);
  uVar4 = FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8),acStack_38);
  *(uint64_t *)(self + 0xf0) = uVar4;
  Sprint("name%i",acStack_38,4);
  uVar4 = FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8),acStack_38);
  *(uint64_t *)(self + 0xa8) = uVar4;
  Sprint("time%i",acStack_38,4);
  uVar4 = FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8),acStack_38);
  *(uint64_t *)(self + 0xf8) = uVar4;
  Sprint("name%i",acStack_38,5);
  uVar4 = FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8),acStack_38);
  *(uint64_t *)(self + 0xb0) = uVar4;
  Sprint("time%i",acStack_38,5);
  uVar4 = FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8),acStack_38);
  *(uint64_t *)(self + 0x100) = uVar4;
  FlashTextField__SetText(*(wchar_t **)(self + 0x90),&DAT_005c6634 /* R:0.0f */);
  FlashTextField__SetText(*(wchar_t **)(self + 0xe0),&DAT_005c6634 /* R:0.0f */);
  FlashTextField__SetText(*(wchar_t **)(self + 0x98),&DAT_005c6634 /* R:0.0f */);
  FlashTextField__SetText(*(wchar_t **)(self + 0xe8),&DAT_005c6634 /* R:0.0f */);
  FlashTextField__SetText(*(wchar_t **)(self + 0xa0),&DAT_005c6634 /* R:0.0f */);
  FlashTextField__SetText(*(wchar_t **)(self + 0xf0),&DAT_005c6634 /* R:0.0f */);
  FlashTextField__SetText(*(wchar_t **)(self + 0xa8),&DAT_005c6634 /* R:0.0f */);
  FlashTextField__SetText(*(wchar_t **)(self + 0xf8),&DAT_005c6634 /* R:0.0f */);
  FlashTextField__SetText(*(wchar_t **)(self + 0xb0),&DAT_005c6634 /* R:0.0f */);
  FlashTextField__SetText(*(wchar_t **)(self + 0x100),&DAT_005c6634 /* R:0.0f */);
  pwVar5 = (wchar_t *)
           FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8),"select");
  uVar4 = GetLocalizedText(1);
  FlashTextField__SetText(pwVar5,uVar4);
  pwVar5 = (wchar_t *)
           FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8),"title");
  uVar4 = GetLocalizedText(2);
  FlashTextField__SetText(pwVar5,uVar4);
  pwVar5 = (wchar_t *)
           FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8),"date");
  uVar4 = GetLocalizedText(3);
  FlashTextField__SetText(pwVar5,uVar4);
  pwVar5 = (wchar_t *)
           FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8),"ok");
  uVar4 = GetLocalizedText(4);
  FlashTextField__SetText(pwVar5,uVar4);
  pwVar5 = (wchar_t *)
           FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8),"cancel");
  uVar4 = GetLocalizedText(5);
  FlashTextField__SetText(pwVar5,uVar4);
  uVar4 = GetLocalizedText(0x102);
  *(uint64_t *)(self + 0x50) = uVar4;
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
 * SMBInternetChapterSel__Activate  (Ghidra `Activate` @ 004c3520)
 * Signature: uint8_t __thiscall Activate(SMBInternetChapterSel * self)
 * Class: SMBInternetChapterSel
 * Calls: `SMBSelectionMenu__Activate`, `SMBSelectionMenu__SetRowAsSelected`
 * Called by: (none)
 */
/* SMBInternetChapterSel__Activate() */

void __thiscall SMBInternetChapterSel__Activate(SMBInternetChapterSel *self)

{
  SMBInternetChapterSel SVar1;
  
  SMBSelectionMenu__Activate((SMBSelectionMenu *)self);
  SVar1 = self[0x1b7];
  if (((byte)SVar1 & 0xf0) == 0) {
    if (*(void **)(self + 0x1a8) != (void *)0x0) {
      operator_delete__(*(void **)(self + 0x1a8));
      *(uint64_t *)(self + 0x1a8) = 0;
    }
    (**(code **)(**(long **)(self + 0x130) + 0x28))
              (*(long **)(self + 0x130),"*.chapter",self + 0x138);
    SVar1 = self[0x1b7];
  }
  self[0x1b6] = (SMBInternetChapterSel)0x1;
  self[0x1b7] = (SMBInternetChapterSel)((byte)SVar1 & 0xf0);
  self[0x1b4] = (SMBInternetChapterSel)0x0;
  self[0x1b5] = (SMBInternetChapterSel)0x0;
  *(ushort *)(self + 0x36) = *(ushort *)(self + 0x36) & 0xf | 0x10;
  rmChapterStatus = 0;
  *(uint64_t *)(self + 0x28) = *(uint64_t *)(self + 0x88);
  if (((byte)self[0x1b7] & 0xf0) != 0x10) {
    return;
  }
  *(uint32_t *)(self + 0x1b0) = 0;
  *(uint32_t *)(self + 0x68) = 0;
  SMBSelectionMenu__SetRowAsSelected((SMBSelectionMenu *)self,0);
  return;
}

/* ======================================================================
 * SMBInternetChapterSel__SMBInternetChapterSel__004c35f0  (Ghidra `~SMBInternetChapterSel` @ 004c35f0)
 * Signature: uint8_t __thiscall ~SMBInternetChapterSel(SMBInternetChapterSel * self)
 * Class: SMBInternetChapterSel
 * Calls: `SMBSelectionMenu__SMBSelectionMenu__005100b0`, `SyncEvent__SyncEvent__005b8100`, `operator_delete`
 * Called by: `GSMBMenu__GSMBMenu`, `SMBInternetChapterSel__SMBInternetChapterSel`
 */
/* SMBInternetChapterSel__SMBInternetChapterSel__004c35f0() */

void __thiscall SMBInternetChapterSel__SMBInternetChapterSel__004c35f0(SMBInternetChapterSel *self)

{
  *(uint8_t ***)self = &PTR__SMBInternetChapterSel_005c5c90;
  if (*(void **)(self + 0x1a8) != (void *)0x0) {
    operator_delete(*(void **)(self + 0x1a8));
  }
                    /* try { // try from 004c3617 to 004c361b has its CatchHandler @ 004c3631 */
  SyncEvent__SyncEvent__005b8100((SyncEvent *)(self + 0x140));
  SMBSelectionMenu__SMBSelectionMenu__005100b0((SMBSelectionMenu *)self);
  operator_delete(self);
  return;
}

/* ======================================================================
 * SMBInternetChapterSel__SMBInternetChapterSel__004c36f0  (Ghidra `SMBInternetChapterSel` @ 004c36f0)
 * Signature: uint8_t __thiscall SMBInternetChapterSel(SMBInternetChapterSel * self)
 * Class: SMBInternetChapterSel
 * Calls: `SMBSelectionMenu__SMBSelectionMenu__00510270`, `SyncEvent__SyncEvent`
 * Called by: `GSMBMenu__GSMBMenu__004d8690`
 */
/* SMBInternetChapterSel__SMBInternetChapterSel__004c36f0() */

void __thiscall SMBInternetChapterSel__SMBInternetChapterSel__004c36f0(SMBInternetChapterSel *self)

{
  SMBSelectionMenu__SMBSelectionMenu__00510270((SMBSelectionMenu *)self);
  *(uint8_t ***)self = &PTR__SMBInternetChapterSel_005c5c90;
  *(uint32_t *)(self + 0x138) = 0;
                    /* try { // try from 004c3715 to 004c3719 has its CatchHandler @ 004c374a */
  SyncEvent__SyncEvent((SyncEvent *)(self + 0x140));
  *(uint64_t *)(self + 0x1a8) = 0;
  *(uint32_t *)(self + 0x1b0) = 0;
  self[0x1b4] = (SMBInternetChapterSel)0x0;
  self[0x1b5] = (SMBInternetChapterSel)0x0;
  self[0x1b7] = (SMBInternetChapterSel)((byte)self[0x1b7] & 0xf);
  return;
}

/* ======================================================================
 * SMBInternetChapterSel__LoadText  (Ghidra `LoadText` @ 004c37d0)
 * Signature: uint8_t __thiscall LoadText(SMBInternetChapterSel * self)
 * Class: SMBInternetChapterSel
 * Calls: `GetLocalizedText`, `strlen`
 * Called by: (none)
 */
/* SMBInternetChapterSel__LoadText() */

void __thiscall SMBInternetChapterSel__LoadText(SMBInternetChapterSel *self)

{
  char cVar1;
  uint64_t uVar2;
  size_t sVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  SMBInternetChapterSel *pSVar7;
  long lVar8;
  char *__s;
  char local_68 [64];
  
  iVar6 = 0;
  pSVar7 = self;
  do {
    if (*(int *)(self + 0x1b0) + iVar6 < *(int *)(self + 0x138)) {
      lVar8 = (long)(*(int *)(self + 0x1b0) + iVar6) * 0x26;
      __s = (char *)(*(long *)(self + 0x1a8) + lVar8);
      sVar3 = strlen(__s);
      if (0 < (int)sVar3) {
        lVar4 = 0;
        lVar5 = (ulong)((int)sVar3 - 1) + 1;
        do {
          while (cVar1 = __s[lVar4], cVar1 != '_') {
            if (cVar1 == '.') {
              local_68[lVar4] = '\0';
              goto LAB_004c38a0;
            }
            local_68[lVar4] = cVar1;
            lVar4 = lVar4 + 1;
            if (lVar4 == lVar5) goto LAB_004c38a0;
          }
          local_68[lVar4] = ' ';
          lVar4 = lVar4 + 1;
        } while (lVar4 != lVar5);
      }
LAB_004c38a0:
      FlashTextField__SetText(*(char **)(pSVar7 + 0x90),local_68);
      lVar8 = lVar8 + *(long *)(self + 0x1a8);
      FlashTextField__SetText
                (*(wchar_t **)(pSVar7 + 0xe0),&DAT_005c5c10 /* R:5.184804318001823e-44f */,(ulong)*(ushort *)(lVar8 + 0x20),
                 (ulong)*(ushort *)(lVar8 + 0x22),(ulong)*(ushort *)(lVar8 + 0x24));
    }
    else {
      uVar2 = GetLocalizedText(6);
      FlashTextField__SetText(*(wchar_t **)(pSVar7 + 0x90),uVar2);
      FlashTextField__SetText(*(wchar_t **)(pSVar7 + 0xe0),&DAT_005c6634 /* R:0.0f */);
    }
    iVar6 = iVar6 + 1;
    pSVar7 = pSVar7 + 8;
    if (iVar6 == 5) {
      return;
    }
  } while( true );
}

/* ======================================================================
 * SMBInternetChapterSel__DecrementSelection  (Ghidra `DecrementSelection` @ 004c38f0)
 * Signature: uint8_t __thiscall DecrementSelection(SMBInternetChapterSel * self)
 * Class: SMBInternetChapterSel
 * Calls: `SMBSelectionMenu__SetRowAsSelected`, `SMBSelectionMenu__SetRowAsUnselected`
 * Called by: (none)
 */
/* SMBInternetChapterSel__DecrementSelection() */

void __thiscall SMBInternetChapterSel__DecrementSelection(SMBInternetChapterSel *self)

{
  int iVar1;
  uint uVar2;
  
  if ((*(int *)(self + 0x6c) != 0) && ((*(ushort *)(self + 0x36) & 0xfff0) != 0x10)) {
    SMBSelectionMenu__SetRowAsUnselected((SMBSelectionMenu *)self,*(uint *)(self + 0x68));
    iVar1 = *(int *)(self + 0x1b0) + -1;
    *(int *)(self + 0x1b0) = iVar1;
    if (iVar1 < 0) {
      iVar1 = 0;
      *(uint32_t *)(self + 0x1b0) = 0;
      uVar2 = *(int *)(self + 0x68) - 1;
      *(uint *)(self + 0x68) = uVar2;
    }
    else {
      uVar2 = *(int *)(self + 0x68) - 1;
      *(uint *)(self + 0x68) = uVar2;
    }
    if ((int)uVar2 < 0) {
      *(int *)(self + 0x68) = *(int *)(self + 0x70) + -1;
      if (iVar1 == 0) {
        *(uint32_t *)(self + 0x68) = 0;
        uVar2 = 0;
      }
      else {
        *(int *)(self + 0x1b0) = iVar1 + -4;
        LoadText(self);
        uVar2 = *(uint *)(self + 0x68);
      }
      *(int *)(self + 0x1b0) = iVar1;
    }
    SMBSelectionMenu__SetRowAsSelected((SMBSelectionMenu *)self,uVar2);
    return;
  }
  return;
}

/* ======================================================================
 * SMBInternetChapterSel__IncrementSelection  (Ghidra `IncrementSelection` @ 004c39d0)
 * Signature: uint8_t __thiscall IncrementSelection(SMBInternetChapterSel * self)
 * Class: SMBInternetChapterSel
 * Calls: `SMBSelectionMenu__SetRowAsSelected`, `SMBSelectionMenu__SetRowAsUnselected`
 * Called by: (none)
 */
/* SMBInternetChapterSel__IncrementSelection() */

void __thiscall SMBInternetChapterSel__IncrementSelection(SMBInternetChapterSel *self)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if ((*(int *)(self + 0x6c) == 0) || ((*(ushort *)(self + 0x36) & 0xfff0) == 0x10)) {
    return;
  }
  SMBSelectionMenu__SetRowAsUnselected((SMBSelectionMenu *)self,*(uint *)(self + 0x68));
  iVar2 = *(int *)(self + 0x1b0);
  uVar3 = *(uint *)(self + 0x68);
  iVar1 = iVar2 + 1;
  *(int *)(self + 0x1b0) = iVar1;
  *(uint *)(self + 0x68) = uVar3 + 1;
  uVar4 = uVar3 + 1;
  if (iVar1 == *(int *)(self + 0x138)) {
    *(int *)(self + 0x1b0) = iVar2;
    *(uint *)(self + 0x68) = uVar3;
    uVar4 = uVar3;
  }
  if ((int)uVar4 < *(int *)(self + 0x70)) {
    SMBSelectionMenu__SetRowAsSelected((SMBSelectionMenu *)self,uVar4);
    return;
  }
  *(uint32_t *)(self + 0x68) = 0;
  LoadText(self);
  SMBSelectionMenu__SetRowAsSelected((SMBSelectionMenu *)self,*(uint *)(self + 0x68));
  return;
}

/* ======================================================================
 * SMBInternetChapterSel__ShowLoadingScreen  (Ghidra `ShowLoadingScreen` @ 004c3a60)
 * Signature: uint8_t __thiscall ShowLoadingScreen(SMBInternetChapterSel * self)
 * Class: SMBInternetChapterSel
 * Calls: `FlashLibraryInstance__Reset`
 * Called by: (none)
 */
/* SMBInternetChapterSel__ShowLoadingScreen() */

void __thiscall SMBInternetChapterSel__ShowLoadingScreen(SMBInternetChapterSel *self)

{
  *(FlashLibraryInstance **)(self + 0x28) = *(FlashLibraryInstance **)(self + 0x80);
  FlashLibraryInstance__Reset(*(FlashLibraryInstance **)(self + 0x80));
  self[0x1b5] = (SMBInternetChapterSel)0x1;
  return;
}

/* ======================================================================
 * SMBInternetChapterSel__CloseDueToConnectionLoss  (Ghidra `CloseDueToConnectionLoss` @ 004c3a80)
 * Signature: uint8_t __thiscall CloseDueToConnectionLoss(SMBInternetChapterSel * self)
 * Class: SMBInternetChapterSel
 * Calls: `CreateMessage`, `GetLocalizedText`, `UserAlertCloseCurrent`
 * Called by: `GSMBMenu__ProcessDisconnect`
 */
/* SMBInternetChapterSel__CloseDueToConnectionLoss() */

void __thiscall SMBInternetChapterSel__CloseDueToConnectionLoss(SMBInternetChapterSel *self)

{
  uint32_t local_78 [2];
  uint64_t local_70;
  uint64_t local_68;
  uint64_t local_60;
  uint64_t local_58;
  code *local_50;
  uint64_t local_48;
  uint64_t local_40;
  uint64_t local_38;
  uint64_t local_30;
  uint64_t local_28;
  uint64_t local_20;
  uint64_t local_18;
  uint64_t local_10;
  
  if ((*(int *)(self + 0x30) != 1) && (*(int *)(self + 0x30) != 3)) {
    return;
  }
  (**(code **)(*(long *)self + 0x28))();
  local_78[0] = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = (code *)0x0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  local_70 = GetLocalizedText(0x3e);
  local_68 = GetLocalizedText(0x40);
  local_78[0] = 0xe;
  local_60 = GetLocalizedText(4);
  local_50 = UserAlertCloseCurrent;
  CreateMessage(local_78);
  return;
}

/* ======================================================================
 * SMBInternetChapterSel__LoadChapterData  (Ghidra `LoadChapterData` @ 004c3b70)
 * Signature: uint8_t __thiscall LoadChapterData(SMBInternetChapterSel * self)
 * Class: SMBInternetChapterSel
 * Calls: `Joystick__AddButtonCallback`, `SMBInternetsSelectChapter`, `SMBSelectionMenu__SetRowAsSelected`, `SMBSelectionMenu__SetRowAsUnselected`, `TPlayer__GetJoystick`
 * Called by: (none)
 */
/* SMBInternetChapterSel__LoadChapterData() */

void __thiscall SMBInternetChapterSel__LoadChapterData(SMBInternetChapterSel *self)

{
  int iVar1;
  uint32_t uVar2;
  Joystick *pJVar3;
  
  if (*(int *)(self + 0x138) == 0) {
    (**(code **)(*(long *)self + 0x28))(self);
    self[0x1b4] = (SMBInternetChapterSel)0x1;
    self[0x1b7] = (SMBInternetChapterSel)((byte)self[0x1b7] & 0xf);
    return;
  }
  pJVar3 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddButtonCallback(pJVar3,0,SMBInternetsSelectChapter,self);
  LoadText(self);
  *(uint32_t *)(self + 0x68) = 0;
  SMBSelectionMenu__SetRowAsSelected((SMBSelectionMenu *)self,0);
  *(uint32_t *)(self + 0x70) = 5;
  self[0x1b7] = (SMBInternetChapterSel)((byte)self[0x1b7] & 0xf | 0x10);
  uVar2 = 5;
  if (*(int *)(self + 0x138) < 6) {
    uVar2 = *(uint32_t *)(self + 0x138);
  }
  *(uint32_t *)(self + 0x6c) = uVar2;
  *(uint32_t *)(*(long *)(self + 0x28) + 0x58) = 0x41f00000;
  if (*(int *)(self + 0x138) < 1) goto LAB_004c3c59;
  if (*(int *)(self + 0x68) == 0) {
    SMBSelectionMenu__SetRowAsSelected((SMBSelectionMenu *)self,0);
    if (*(int *)(self + 0x68) == 1) goto LAB_004c3c93;
LAB_004c3c1b:
    SMBSelectionMenu__SetRowAsUnselected((SMBSelectionMenu *)self,1);
    if (*(int *)(self + 0x68) != 2) goto LAB_004c3c2e;
LAB_004c3ca6:
    SMBSelectionMenu__SetRowAsSelected((SMBSelectionMenu *)self,2);
    if (*(int *)(self + 0x68) == 3) goto LAB_004c3cb9;
LAB_004c3c41:
    SMBSelectionMenu__SetRowAsUnselected((SMBSelectionMenu *)self,3);
    iVar1 = *(int *)(self + 0x68);
  }
  else {
    SMBSelectionMenu__SetRowAsUnselected((SMBSelectionMenu *)self,0);
    if (*(int *)(self + 0x68) != 1) goto LAB_004c3c1b;
LAB_004c3c93:
    SMBSelectionMenu__SetRowAsSelected((SMBSelectionMenu *)self,1);
    if (*(int *)(self + 0x68) == 2) goto LAB_004c3ca6;
LAB_004c3c2e:
    SMBSelectionMenu__SetRowAsUnselected((SMBSelectionMenu *)self,2);
    if (*(int *)(self + 0x68) != 3) goto LAB_004c3c41;
LAB_004c3cb9:
    SMBSelectionMenu__SetRowAsSelected((SMBSelectionMenu *)self,3);
    iVar1 = *(int *)(self + 0x68);
  }
  if (iVar1 == 4) {
    SMBSelectionMenu__SetRowAsSelected((SMBSelectionMenu *)self,4);
    *(ushort *)(self + 0x36) = *(ushort *)(self + 0x36) & 0xf;
    return;
  }
  SMBSelectionMenu__SetRowAsUnselected((SMBSelectionMenu *)self,4);
LAB_004c3c59:
  *(ushort *)(self + 0x36) = *(ushort *)(self + 0x36) & 0xf;
  return;
}

/* ======================================================================
 * SMBInternetChapterSel__Update  (Ghidra `Update` @ 004c3ce0)
 * Signature: uint8_t __thiscall Update(SMBInternetChapterSel * self)
 * Class: SMBInternetChapterSel
 * Calls: `FlashLibraryInstance__IsPlaying`, `FlashLibraryInstance__Reset`, `GSMBMenu__CheckChapterLoadingStatus`, `GSMBMenu__RemoveControls`, `GSMBMenu__ValidateAndLoadChapter`, `SMBSelectionMenu__Update`, `SyncEvent__CheckStatus`
 * Called by: (none)
 */
/* SMBInternetChapterSel__Update() */

void __thiscall SMBInternetChapterSel__Update(SMBInternetChapterSel *self)

{
  ushort uVar1;
  int iVar2;
  
  if ((*(ushort *)(self + 0x34) & 0x3ff) != 0) {
    uVar1 = *(ushort *)(self + 0x36);
    if ((uVar1 & 0xfff0) == 0x10) {
      iVar2 = SyncEvent__CheckStatus((SyncEvent *)(self + 0x140));
      if (iVar2 == 1) {
        *(ushort *)(self + 0x36) = *(ushort *)(self + 0x36) & 0xf;
        LoadChapterData(self);
        uVar1 = *(ushort *)(self + 0x36);
      }
      else {
        uVar1 = *(ushort *)(self + 0x36);
      }
    }
    if (((uVar1 & 0xfff0) == 0) &&
       (*(FlashLibraryInstance **)(self + 0x28) == *(FlashLibraryInstance **)(self + 0x80))) {
      iVar2 = FlashLibraryInstance__IsPlaying(*(FlashLibraryInstance **)(self + 0x28));
      if (iVar2 == 0) {
        self[0x1b7] = (SMBInternetChapterSel)((byte)self[0x1b7] & 0xf0 | 1);
        iVar2 = GSMBMenu__CheckChapterLoadingStatus();
        if (iVar2 == 1) {
          rmChapterStatus = GSMBMenu__ValidateAndLoadChapter(SMBMenu);
          (**(code **)(*(long *)self + 0x28))(self);
          GSMBMenu__RemoveControls();
        }
        else {
          FlashLibraryInstance__Reset(*(FlashLibraryInstance **)(self + 0x80));
        }
      }
    }
    SMBSelectionMenu__Update();
    return;
  }
  return;
}

/* ======================================================================
 * SMBInternetChapterSel__ReadDataFromServer  (Ghidra `ReadDataFromServer` @ 004c3dd0)
 * Signature: uint8_t __thiscall ReadDataFromServer(SMBInternetChapterSel * self)
 * Class: SMBInternetChapterSel
 * Calls: (none)
 * Called by: (none)
 */
/* SMBInternetChapterSel__ReadDataFromServer() */

void __thiscall SMBInternetChapterSel__ReadDataFromServer(SMBInternetChapterSel *self)

{
  if (((byte)self[0x1b7] & 0xf0) == 0) {
    if (*(void **)(self + 0x1a8) != (void *)0x0) {
      operator_delete__(*(void **)(self + 0x1a8));
      *(uint64_t *)(self + 0x1a8) = 0;
    }
    (**(code **)(**(long **)(self + 0x130) + 0x28))
              (*(long **)(self + 0x130),"*.chapter",self + 0x138);
    *(ushort *)(self + 0x36) = *(ushort *)(self + 0x36) & 0xf | 0x10;
  }
  return;
}

/* ======================================================================
 * SMBInternetChapterSel__LoadSelectedChapterFile  (Ghidra `LoadSelectedChapterFile` @ 004c3e30)
 * Signature: uint8_t __thiscall LoadSelectedChapterFile(SMBInternetChapterSel * self)
 * Class: SMBInternetChapterSel
 * Calls: `FlashLibraryInstance__Reset`, `GSMBMenu__LoadInternetsChapter`, `GSMBMenu__RemoveControls`, `GSMBMenu__ValidateAndLoadChapter`
 * Called by: (none)
 */
/* SMBInternetChapterSel__LoadSelectedChapterFile() */

void __thiscall SMBInternetChapterSel__LoadSelectedChapterFile(SMBInternetChapterSel *self)

{
  int iVar1;
  
  if (self[0x1b5] != (SMBInternetChapterSel)0x1) {
    self[0x1b6] = (SMBInternetChapterSel)0x0;
    iVar1 = GSMBMenu__LoadInternetsChapter();
    if (iVar1 != 1) {
      rmChapterStatus = GSMBMenu__ValidateAndLoadChapter(SMBMenu);
      (**(code **)(*(long *)self + 0x28))(self);
      GSMBMenu__RemoveControls();
      return;
    }
    *(FlashLibraryInstance **)(self + 0x28) = *(FlashLibraryInstance **)(self + 0x80);
    FlashLibraryInstance__Reset(*(FlashLibraryInstance **)(self + 0x80));
    self[0x1b5] = (SMBInternetChapterSel)0x1;
  }
  return;
}

/* ======================================================================
 * SMBInternetChapterSel__SetRemoteFolder  (Ghidra `SetRemoteFolder` @ 004c3ea0)
 * Signature: uint8_t __thiscall SetRemoteFolder(SMBInternetChapterSel * self, RemoteFolder * arg1)
 * Class: SMBInternetChapterSel
 * Calls: (none)
 * Called by: `GSMBMenu__StartGame`
 */
/* SMBInternetChapterSel__SetRemoteFolder(RemoteFolder*) */

void __thiscall
SMBInternetChapterSel__SetRemoteFolder(SMBInternetChapterSel *self,RemoteFolder *arg1)

{
  *(RemoteFolder **)(self + 0x130) = arg1;
  return;
}

/* ======================================================================
 * SMBInternetChapterSel__GetSelectedChapter  (Ghidra `GetSelectedChapter` @ 004c3eb0)
 * Signature: uint8_t __thiscall GetSelectedChapter(SMBInternetChapterSel * self)
 * Class: SMBInternetChapterSel
 * Calls: (none)
 * Called by: (none)
 */
/* SMBInternetChapterSel__GetSelectedChapter() */

long __thiscall SMBInternetChapterSel__GetSelectedChapter(SMBInternetChapterSel *self)

{
  return *(long *)(self + 0x1a8) + (long)*(int *)(self + 0x1b0) * 0x26;
}
