/* src/game/classes/SMBReplayManager.c — 22 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "SMBReplayManager.h"

/* ======================================================================
 * SMBReplayManager__Render  (Ghidra `Render` @ 0050e8c0)
 * Signature: uint8_t __thiscall Render(SMBReplayManager * self)
 * Class: SMBReplayManager
 * Calls: `SMBPopupMenu__Render__00502110`
 * Called by: (none)
 */
/* SMBReplayManager__Render() */

void __thiscall SMBReplayManager__Render(SMBReplayManager *self)

{
  if ((*(ushort *)(self + 0x34) & 0x3ff) == 0) {
    return;
  }
  SMBPopupMenu__Render__00502110((SMBPopupMenu *)self);
  return;
}

/* ======================================================================
 * SMBReplayManager__Update  (Ghidra `Update` @ 0050e8d0)
 * Signature: uint8_t __stdcall Update(void)
 * Class: SMBReplayManager
 * Calls: (none)
 * Called by: (none)
 */
/* SMBReplayManager__Update() */

void SMBReplayManager__Update(void)

{
  return;
}

/* ======================================================================
 * SMBReplayManager__DeactivationFinished  (Ghidra `DeactivationFinished` @ 0050e8e0)
 * Signature: uint8_t __thiscall DeactivationFinished(SMBReplayManager * self)
 * Class: SMBReplayManager
 * Calls: `GSMBMenu__LoadReplayFromManager`, `SMBPopupMenu__DeactivationFinished`
 * Called by: (none)
 */
/* SMBReplayManager__DeactivationFinished() */

void __thiscall SMBReplayManager__DeactivationFinished(SMBReplayManager *self)

{
  SMBPopupMenu__DeactivationFinished((SMBPopupMenu *)self);
  if (*(int *)(self + 0xe0) != 1) {
    *(uint32_t *)(self + 0xe0) = 0;
    return;
  }
  GSMBMenu__LoadReplayFromManager(SMBMenu);
  *(uint32_t *)(self + 0xe0) = 0;
  return;
}

/* ======================================================================
 * SMBReplayManager__DeActivate  (Ghidra `DeActivate` @ 0050e920)
 * Signature: uint8_t __thiscall DeActivate(SMBReplayManager * self)
 * Class: SMBReplayManager
 * Calls: `GSuperMeatBoy__Freeze`, `Joystick__AddButtonCallback`, `SMBSelectionMenu__DeActivate`, `TKeyboard__AddKeyCallback`, `TPlayer__GetJoystick`
 * Called by: (none)
 */
/* SMBReplayManager__DeActivate() */

void __thiscall SMBReplayManager__DeActivate(SMBReplayManager *self)

{
  Joystick *pJVar1;
  
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddButtonCallback(pJVar1,0,0,0);
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddButtonCallback(pJVar1,3,0,0);
  if (Keyboard != (TKeyboard *)0x0) {
    TKeyboard__AddKeyCallback(Keyboard,0x76,0,0);
    TKeyboard__AddKeyCallback(Keyboard,0x83,0,0);
  }
  SMBSelectionMenu__DeActivate((SMBSelectionMenu *)self);
  FlashTextField__SetText(*(wchar_t **)(self + 0x80),&DAT_005c6634 /* R:0.0f */);
  FlashTextField__SetText(*(wchar_t **)(self + 0x98),&DAT_005c6634 /* R:0.0f */);
  FlashTextField__SetText(*(wchar_t **)(self + 0x88),&DAT_005c6634 /* R:0.0f */);
  FlashTextField__SetText(*(wchar_t **)(self + 0xa0),&DAT_005c6634 /* R:0.0f */);
  FlashTextField__SetText(*(wchar_t **)(self + 0x90),&DAT_005c6634 /* R:0.0f */);
  FlashTextField__SetText(*(wchar_t **)(self + 0xa8));
  if (*(int *)(self + 0xe4) != 1) {
    return;
  }
  GSuperMeatBoy__Freeze(SuperMeatBoy,0);
  return;
}

/* ======================================================================
 * SMBReplayManager__SMBReplayManager  (Ghidra `~SMBReplayManager` @ 0050ea20)
 * Signature: uint8_t __thiscall ~SMBReplayManager(SMBReplayManager * self)
 * Class: SMBReplayManager
 * Calls: `SMBReplayManager__SMBReplayManager__0050f030`, `SMBSelectionMenu__SMBSelectionMenu__005100b0`, `free`
 * Called by: (none)
 */
/* SMBReplayManager__SMBReplayManager__0050f030() */

void __thiscall SMBReplayManager__SMBReplayManager__0050f030(SMBReplayManager *self)

{
  *(uint8_t ***)self = &PTR__SMBReplayManager_005c8a90;
  if (*(void **)(self + 0xd0) != (void *)0x0) {
    free(*(void **)(self + 0xd0));
    *(uint64_t *)(self + 0xd0) = 0;
  }
  if (*(void **)(self + 0xd8) != (void *)0x0) {
    free(*(void **)(self + 0xd8));
    *(uint64_t *)(self + 0xd8) = 0;
  }
  SMBSelectionMenu__SMBSelectionMenu__005100b0((SMBSelectionMenu *)self);
  return;
}

/* ======================================================================
 * SMBReplayManager__LoadFileList  (Ghidra `LoadFileList` @ 0050ea90)
 * Signature: uint8_t __thiscall LoadFileList(SMBReplayManager * self)
 * Class: SMBReplayManager
 * Calls: `SMBReplayManager__LoadFileList__0050fd40`, `SMBReplay__GetReplayFileHeader`, `TPlayer__GetProfile`, `malloc`
 * Called by: (none)
 */
/* SMBReplayManager__LoadFileList__0050fd40() [clone .part.12] */

void __thiscall SMBReplayManager__LoadFileList__0050fd40(SMBReplayManager *self)

{
  long *plVar1;
  void *pvVar2;
  uint64_t *puVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  int *piVar7;
  uint64_t local_68;
  uint64_t local_60;
  uint64_t local_58;
  byte local_50;
  char local_4f;
  uint32_t local_48;
  
  plVar1 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
  (**(code **)(*plVar1 + 0x80))(plVar1,"*.rpl",self + 0xd0);
  piVar7 = *(int **)(self + 0xd0);
  if (piVar7 != (int *)0x0) {
    pvVar2 = malloc((long)*piVar7 * 0x24);
    *(void **)(self + 0xd8) = pvVar2;
    if (0 < *piVar7) {
      lVar4 = 0;
      lVar5 = 0;
      iVar6 = 0;
      do {
        local_48 = 1;
        local_68 = *(uint64_t *)(*(long *)(piVar7 + 2) + lVar5);
        SMBReplay__GetReplayFileHeader
                  (GSuperMeatBoy__pReplay,(SMBReplayFileCreate *)&local_68,0,(File *)0x0,(File *)0x0
                   ,(SystemFileTime *)(lVar4 + *(long *)(self + 0xd8) + 0x14));
        if (local_4f == '\0') {
          *(uint32_t *)(*(long *)(self + 0xd8) + 0x20 + lVar4) = 1;
        }
        else {
          *(uint32_t *)(*(long *)(self + 0xd8) + 0x20 + lVar4) = 0;
        }
        *(uint *)(*(long *)(self + 0xd8) + 0x10 + lVar4) = (uint)local_50;
        puVar3 = (uint64_t *)(lVar4 + *(long *)(self + 0xd8));
        if (puVar3 != &local_60) {
          *puVar3 = local_60;
          puVar3[1] = local_58;
        }
        piVar7 = *(int **)(self + 0xd0);
        iVar6 = iVar6 + 1;
        lVar5 = lVar5 + 0x10;
        lVar4 = lVar4 + 0x24;
      } while (iVar6 < *piVar7);
    }
  }
  return;
}

/* ======================================================================
 * SMBReplayManager__Initialize  (Ghidra `Initialize` @ 0050ecf0)
 * Signature: uint8_t __thiscall Initialize(SMBReplayManager * self)
 * Class: SMBReplayManager
 * Calls: `FlashAnimationLibrary__GetClipIndex`, `FlashAnimationLibrary__GetLibraryEntry`, `FlashAnimationLibrary__GetMovieClip__005731d0`, `FlashAnimationLibrary__GetTextField`, `FlashLibraryInstance__GotoAndStop`, `FlashMovieClip__FindInstance`, `GetLocalizedText`, `SMBSelectionMenu__InitializeMenuRows`, `Sprint`
 * Called by: `GSMBMenu__GSMBMenu__004d8690`
 */
/* WARNING: Removing unreachable block (ram,0x0050f019) */
/* SMBReplayManager__Initialize() */

void __thiscall SMBReplayManager__Initialize(SMBReplayManager *self)

{
  int *piVar1;
  int iVar2;
  uint64_t uVar3;
  long *plVar4;
  FlashMovieClip *pFVar5;
  char acStack_38 [16];
  uint8_t *local_28;
  
  (**(code **)(*(long *)self + 0x10))(self,0,"replayidle");
  local_28 = &DAT_008184c8 /* R:0.00016803004837129265f */;
                    /* try { // try from 0050ed17 to 0050efc4 has its CatchHandler @ 0050f004 */
  SMBSelectionMenu__InitializeMenuRows((SMBSelectionMenu *)self,3);
  FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 8),"selectbar");
  Sprint("name%i",acStack_38,1);
  uVar3 = FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8),acStack_38);
  *(uint64_t *)(self + 0x80) = uVar3;
  Sprint("date%i",acStack_38,1);
  uVar3 = FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8),acStack_38);
  *(uint64_t *)(self + 0x98) = uVar3;
  Sprint("icon%i",acStack_38,1);
  plVar4 = (long *)FlashAnimationLibrary__GetMovieClip__005731d0
                             (*(FlashAnimationLibrary **)(self + 8),acStack_38);
  pFVar5 = (FlashMovieClip *)
           FlashAnimationLibrary__GetLibraryEntry
                     (*(FlashAnimationLibrary **)(self + 8),*(int *)(*(long *)(self + 0x28) + 0x20))
  ;
  uVar3 = FlashMovieClip__FindInstance(pFVar5,(int)plVar4[4],0,(int *)0x0,0);
  *(uint64_t *)(self + 0xb0) = uVar3;
  (**(code **)(*plVar4 + 8))(plVar4);
  Sprint("name%i",acStack_38,2);
  uVar3 = FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8),acStack_38);
  *(uint64_t *)(self + 0x88) = uVar3;
  Sprint("date%i",acStack_38,2);
  uVar3 = FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8),acStack_38);
  *(uint64_t *)(self + 0xa0) = uVar3;
  Sprint("icon%i",acStack_38,2);
  plVar4 = (long *)FlashAnimationLibrary__GetMovieClip__005731d0
                             (*(FlashAnimationLibrary **)(self + 8),acStack_38);
  pFVar5 = (FlashMovieClip *)
           FlashAnimationLibrary__GetLibraryEntry
                     (*(FlashAnimationLibrary **)(self + 8),*(int *)(*(long *)(self + 0x28) + 0x20))
  ;
  uVar3 = FlashMovieClip__FindInstance(pFVar5,(int)plVar4[4],0,(int *)0x0,0);
  *(uint64_t *)(self + 0xb8) = uVar3;
  (**(code **)(*plVar4 + 8))(plVar4);
  Sprint("name%i",acStack_38,3);
  uVar3 = FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8),acStack_38);
  *(uint64_t *)(self + 0x90) = uVar3;
  Sprint("date%i",acStack_38,3);
  uVar3 = FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8),acStack_38);
  *(uint64_t *)(self + 0xa8) = uVar3;
  Sprint("icon%i",acStack_38,3);
  plVar4 = (long *)FlashAnimationLibrary__GetMovieClip__005731d0
                             (*(FlashAnimationLibrary **)(self + 8),acStack_38);
  pFVar5 = (FlashMovieClip *)
           FlashAnimationLibrary__GetLibraryEntry
                     (*(FlashAnimationLibrary **)(self + 8),*(int *)(*(long *)(self + 0x28) + 0x20))
  ;
  uVar3 = FlashMovieClip__FindInstance(pFVar5,(int)plVar4[4],0,(int *)0x0,0);
  *(uint64_t *)(self + 0xc0) = uVar3;
  (**(code **)(*plVar4 + 8))(plVar4);
  FlashTextField__SetText(*(wchar_t **)(self + 0x80),&DAT_005c6634 /* R:0.0f */);
  FlashTextField__SetText(*(wchar_t **)(self + 0x98),&DAT_005c6634 /* R:0.0f */);
  FlashLibraryInstance__GotoAndStop(*(FlashLibraryInstance **)(self + 0xb0),0x31);
  FlashTextField__SetText(*(wchar_t **)(self + 0x88),&DAT_005c6634 /* R:0.0f */);
  FlashTextField__SetText(*(wchar_t **)(self + 0xa0),&DAT_005c6634 /* R:0.0f */);
  FlashLibraryInstance__GotoAndStop(*(FlashLibraryInstance **)(self + 0xb8),0x31);
  FlashTextField__SetText(*(wchar_t **)(self + 0x90),&DAT_005c6634 /* R:0.0f */);
  FlashTextField__SetText(*(wchar_t **)(self + 0xa8),&DAT_005c6634 /* R:0.0f */);
  FlashLibraryInstance__GotoAndStop(*(FlashLibraryInstance **)(self + 0xc0),0x31);
  uVar3 = GetLocalizedText(0x7e);
  *(uint64_t *)(self + 0x50) = uVar3;
  if ((allocator *)(local_28 + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage) {
    LOCK();
    piVar1 = (int *)(local_28 + -8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 < 1) {
      std__string_Rep_M_destroy((allocator *)(local_28 + -0x18));
    }
  }
  return;
}

/* ======================================================================
 * SMBReplayManager__SMBReplayManager__0050f030  (Ghidra `~SMBReplayManager` @ 0050f030)
 * Signature: uint8_t __thiscall ~SMBReplayManager(SMBReplayManager * self)
 * Class: SMBReplayManager
 * Calls: `SMBSelectionMenu__SMBSelectionMenu__005100b0`, `free`, `operator_delete`
 * Called by: `GSMBMenu__GSMBMenu`, `SMBReplayManager__SMBReplayManager`
 */
/* SMBReplayManager__SMBReplayManager__0050f030() */

void __thiscall SMBReplayManager__SMBReplayManager__0050f030(SMBReplayManager *self)

{
  *(uint8_t ***)self = &PTR__SMBReplayManager_005c8a90;
  if (*(void **)(self + 0xd0) != (void *)0x0) {
    free(*(void **)(self + 0xd0));
    *(uint64_t *)(self + 0xd0) = 0;
  }
  if (*(void **)(self + 0xd8) != (void *)0x0) {
    free(*(void **)(self + 0xd8));
    *(uint64_t *)(self + 0xd8) = 0;
  }
  SMBSelectionMenu__SMBSelectionMenu__005100b0((SMBSelectionMenu *)self);
  operator_delete(self);
  return;
}

/* ======================================================================
 * SMBReplayManager__SMBReplayManager__0050f090  (Ghidra `SMBReplayManager` @ 0050f090)
 * Signature: uint8_t __thiscall SMBReplayManager(SMBReplayManager * self)
 * Class: SMBReplayManager
 * Calls: `SMBSelectionMenu__SMBSelectionMenu__00510270`
 * Called by: `GSMBMenu__GSMBMenu__004d8690`
 */
/* SMBReplayManager__SMBReplayManager__0050f090() */

void __thiscall SMBReplayManager__SMBReplayManager__0050f090(SMBReplayManager *self)

{
  SMBSelectionMenu__SMBSelectionMenu__00510270((SMBSelectionMenu *)self);
  *(uint8_t ***)self = &PTR__SMBReplayManager_005c8a90;
  *(uint32_t *)(self + 200) = 0;
  *(uint64_t *)(self + 0xd0) = 0;
  *(uint64_t *)(self + 0xd8) = 0;
  *(uint32_t *)(self + 0xe0) = 0;
  *(uint32_t *)(self + 0x70) = 3;
  return;
}

/* ======================================================================
 * SMBReplayManager__LoadText  (Ghidra `LoadText` @ 0050f0e0)
 * Signature: uint8_t __thiscall LoadText(SMBReplayManager * self)
 * Class: SMBReplayManager
 * Calls: `FlashLibraryInstance__GotoAndStop`, `GetLocalizedText`, `SMBSelectionMenu__SetRowAsSelected`, `SMBSelectionMenu__SetRowAsUnselected`
 * Called by: `SMBReplayConfirmDelete`
 */
/* SMBReplayManager__LoadText() */

void __thiscall SMBReplayManager__LoadText(SMBReplayManager *self)

{
  int iVar1;
  uint64_t uVar2;
  long lVar3;
  long lVar4;
  
  if (*(int **)(self + 0xd0) == (int *)0x0) {
    uVar2 = GetLocalizedText(0x45);
    FlashTextField__SetText(*(wchar_t **)(self + 0x80),uVar2);
    FlashTextField__SetText(*(wchar_t **)(self + 0x98));
    SMBSelectionMenu__SetRowAsUnselected((SMBSelectionMenu *)self,0);
    uVar2 = GetLocalizedText(0x45);
    FlashTextField__SetText(*(wchar_t **)(self + 0x88),uVar2);
    FlashTextField__SetText(*(wchar_t **)(self + 0xa0),&DAT_005c5d74 /* R:6.305843089461677e-44f */);
    SMBSelectionMenu__SetRowAsUnselected((SMBSelectionMenu *)self,1);
    uVar2 = GetLocalizedText(0x45);
    FlashTextField__SetText(*(wchar_t **)(self + 0x90),uVar2);
    FlashTextField__SetText(*(wchar_t **)(self + 0xa8),&DAT_005c5d74 /* R:6.305843089461677e-44f */);
    SMBSelectionMenu__SetRowAsUnselected((SMBSelectionMenu *)self,2);
    return;
  }
  if (*(int *)(self + 200) < **(int **)(self + 0xd0)) {
    lVar4 = (long)*(int *)(self + 200) * 0x24;
    if (*(int *)(lVar4 + *(long *)(self + 0xd8) + 0x20) != 0) {
      uVar2 = GetLocalizedText(0xb1);
      FlashTextField__SetText(*(wchar_t **)(self + 0x80),uVar2);
      FlashTextField__SetText(*(wchar_t **)(self + 0x98),&DAT_005c8a00 /* R:6.726232628759122e-44f */);
      FlashLibraryInstance__GotoAndStop(*(FlashLibraryInstance **)(self + 0xb0),1);
      goto LAB_0050f168;
    }
    FlashTextField__SetText(*(char **)(self + 0x80));
    lVar3 = lVar4 + *(long *)(self + 0xd8);
    FlashTextField__SetText
              (*(wchar_t **)(self + 0x98),&DAT_005c5c10 /* R:5.184804318001823e-44f */,(ulong)*(ushort *)(lVar3 + 0x14),
               (ulong)*(ushort *)(lVar3 + 0x16),(ulong)*(ushort *)(lVar3 + 0x18));
    FlashLibraryInstance__GotoAndStop
              (*(FlashLibraryInstance **)(self + 0xb0),
               *(int *)(*(long *)(self + 0xd8) + 0x10 + lVar4) + 1);
    if (*(int *)(self + 0x68) == 0) goto LAB_0050f31c;
LAB_0050f17a:
    SMBSelectionMenu__SetRowAsUnselected((SMBSelectionMenu *)self,0);
  }
  else {
    uVar2 = GetLocalizedText(0x45);
    FlashTextField__SetText(*(wchar_t **)(self + 0x80),uVar2);
    FlashTextField__SetText(*(wchar_t **)(self + 0x98),&DAT_005c5d74 /* R:6.305843089461677e-44f */);
    FlashLibraryInstance__GotoAndStop(*(FlashLibraryInstance **)(self + 0xb0),0x31);
LAB_0050f168:
    if (*(int *)(self + 0x68) != 0) goto LAB_0050f17a;
LAB_0050f31c:
    SMBSelectionMenu__SetRowAsSelected((SMBSelectionMenu *)self,0);
  }
  if (*(int *)(self + 200) + 1 < **(int **)(self + 0xd0)) {
    lVar4 = (long)(*(int *)(self + 200) + 1) * 0x24;
    if (*(int *)(lVar4 + *(long *)(self + 0xd8) + 0x20) != 0) {
      uVar2 = GetLocalizedText(0xb1);
      FlashTextField__SetText(*(wchar_t **)(self + 0x88),uVar2);
      FlashTextField__SetText(*(wchar_t **)(self + 0xa0),&DAT_005c8a00 /* R:6.726232628759122e-44f */);
      FlashLibraryInstance__GotoAndStop(*(FlashLibraryInstance **)(self + 0xb8),1);
      goto LAB_0050f1f5;
    }
    FlashTextField__SetText(*(char **)(self + 0x88));
    lVar3 = lVar4 + *(long *)(self + 0xd8);
    FlashTextField__SetText
              (*(wchar_t **)(self + 0xa0),&DAT_005c5c10 /* R:5.184804318001823e-44f */,(ulong)*(ushort *)(lVar3 + 0x14),
               (ulong)*(ushort *)(lVar3 + 0x16),(ulong)*(ushort *)(lVar3 + 0x18));
    FlashLibraryInstance__GotoAndStop
              (*(FlashLibraryInstance **)(self + 0xb8),
               *(int *)(*(long *)(self + 0xd8) + 0x10 + lVar4) + 1);
    if (*(int *)(self + 0x68) == 1) goto LAB_0050f3f4;
LAB_0050f207:
    SMBSelectionMenu__SetRowAsUnselected((SMBSelectionMenu *)self,1);
  }
  else {
    uVar2 = GetLocalizedText(0x45);
    FlashTextField__SetText(*(wchar_t **)(self + 0x88),uVar2);
    FlashTextField__SetText(*(wchar_t **)(self + 0xa0),&DAT_005c5d74 /* R:6.305843089461677e-44f */);
    FlashLibraryInstance__GotoAndStop(*(FlashLibraryInstance **)(self + 0xb8),0x31);
LAB_0050f1f5:
    if (*(int *)(self + 0x68) != 1) goto LAB_0050f207;
LAB_0050f3f4:
    SMBSelectionMenu__SetRowAsSelected((SMBSelectionMenu *)self,1);
  }
  if (*(int *)(self + 200) + 2 < **(int **)(self + 0xd0)) {
    lVar4 = (long)(*(int *)(self + 200) + 2) * 0x24;
    if (*(int *)(lVar4 + *(long *)(self + 0xd8) + 0x20) != 0) {
      uVar2 = GetLocalizedText(0xb1);
      FlashTextField__SetText(*(wchar_t **)(self + 0x90),uVar2);
      FlashTextField__SetText(*(wchar_t **)(self + 0xa8),&DAT_005c8a00 /* R:6.726232628759122e-44f */);
      FlashLibraryInstance__GotoAndStop(*(FlashLibraryInstance **)(self + 0xc0),1);
      iVar1 = *(int *)(self + 0x68);
      goto joined_r0x0050f37b;
    }
    FlashTextField__SetText(*(char **)(self + 0x90));
    lVar3 = lVar4 + *(long *)(self + 0xd8);
    FlashTextField__SetText
              (*(wchar_t **)(self + 0xa8),&DAT_005c5c10 /* R:5.184804318001823e-44f */,(ulong)*(ushort *)(lVar3 + 0x14),
               (ulong)*(ushort *)(lVar3 + 0x16),(ulong)*(ushort *)(lVar3 + 0x18));
    FlashLibraryInstance__GotoAndStop
              (*(FlashLibraryInstance **)(self + 0xc0),
               *(int *)(*(long *)(self + 0xd8) + 0x10 + lVar4) + 1);
  }
  else {
    uVar2 = GetLocalizedText(0x45);
    FlashTextField__SetText(*(wchar_t **)(self + 0x90),uVar2);
    FlashTextField__SetText(*(wchar_t **)(self + 0xa8),&DAT_005c5d74 /* R:6.305843089461677e-44f */);
    FlashLibraryInstance__GotoAndStop(*(FlashLibraryInstance **)(self + 0xc0),0x31);
  }
  iVar1 = *(int *)(self + 0x68);
joined_r0x0050f37b:
  if (iVar1 != 2) {
    SMBSelectionMenu__SetRowAsUnselected((SMBSelectionMenu *)self,2);
    return;
  }
  SMBSelectionMenu__SetRowAsSelected((SMBSelectionMenu *)self,2);
  return;
}

/* ======================================================================
 * SMBReplayManager__DecrementSelection  (Ghidra `DecrementSelection` @ 0050f590)
 * Signature: uint8_t __thiscall DecrementSelection(SMBReplayManager * self)
 * Class: SMBReplayManager
 * Calls: `SMBSelectionMenu__SetRowAsSelected`, `SMBSelectionMenu__SetRowAsUnselected`
 * Called by: (none)
 */
/* SMBReplayManager__DecrementSelection() */

void __thiscall SMBReplayManager__DecrementSelection(SMBReplayManager *self)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  piVar1 = *(int **)(self + 0xd0);
  if ((((piVar1 == (int *)0x0) || (*piVar1 != 0)) && ((*(ushort *)(self + 0x36) & 0xfff0) != 0x10))
     && (piVar1 != (int *)0x0)) {
    SMBSelectionMenu__SetRowAsUnselected((SMBSelectionMenu *)self,*(uint *)(self + 0x68));
    iVar2 = *(int *)(self + 200) + -1;
    *(int *)(self + 200) = iVar2;
    if (iVar2 < 0) {
      iVar2 = 0;
      *(uint32_t *)(self + 200) = 0;
      uVar3 = *(int *)(self + 0x68) - 1;
      *(uint *)(self + 0x68) = uVar3;
    }
    else {
      uVar3 = *(int *)(self + 0x68) - 1;
      *(uint *)(self + 0x68) = uVar3;
    }
    if ((int)uVar3 < 0) {
      *(int *)(self + 0x68) = *(int *)(self + 0x70) + -1;
      if (iVar2 == 0) {
        *(uint32_t *)(self + 0x68) = 0;
        uVar3 = 0;
      }
      else {
        *(int *)(self + 200) = (iVar2 - *(int *)(self + 0x70)) + 1;
        LoadText(self);
        uVar3 = *(uint *)(self + 0x68);
      }
      *(int *)(self + 200) = iVar2;
    }
    SMBSelectionMenu__SetRowAsSelected((SMBSelectionMenu *)self,uVar3);
    return;
  }
  return;
}

/* ======================================================================
 * SMBReplayManager__IncrementSelection  (Ghidra `IncrementSelection` @ 0050f680)
 * Signature: uint8_t __thiscall IncrementSelection(SMBReplayManager * self)
 * Class: SMBReplayManager
 * Calls: `SMBSelectionMenu__SetRowAsSelected`, `SMBSelectionMenu__SetRowAsUnselected`
 * Called by: (none)
 */
/* SMBReplayManager__IncrementSelection() */

void __thiscall SMBReplayManager__IncrementSelection(SMBReplayManager *self)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  
  piVar5 = *(int **)(self + 0xd0);
  if ((((piVar5 == (int *)0x0) || (*piVar5 != 0)) && ((*(ushort *)(self + 0x36) & 0xfff0) != 0x10))
     && (piVar5 != (int *)0x0)) {
    iVar2 = *piVar5;
    SMBSelectionMenu__SetRowAsUnselected((SMBSelectionMenu *)self,*(uint *)(self + 0x68));
    iVar3 = *(int *)(self + 200);
    uVar4 = *(uint *)(self + 0x68);
    iVar1 = iVar3 + 1;
    *(uint *)(self + 0x68) = uVar4 + 1;
    *(int *)(self + 200) = iVar1;
    uVar6 = uVar4 + 1;
    if (iVar2 == iVar1) {
      *(int *)(self + 200) = iVar3;
      *(uint *)(self + 0x68) = uVar4;
      uVar6 = uVar4;
    }
    if (*(int *)(self + 0x70) <= (int)uVar6) {
      *(uint32_t *)(self + 0x68) = 0;
      LoadText(self);
      uVar6 = *(uint *)(self + 0x68);
    }
    SMBSelectionMenu__SetRowAsSelected((SMBSelectionMenu *)self,uVar6);
    return;
  }
  return;
}

/* ======================================================================
 * SMBReplayManager__Activate  (Ghidra `Activate` @ 0050f740)
 * Signature: uint8_t __thiscall Activate(SMBReplayManager * self)
 * Class: SMBReplayManager
 * Calls: `FlashAnimationLibrary__GetTextField`, `GetLocalizedText`, `Joystick__AddButtonCallback`, `SMBReplayCloseMenu`, `SMBReplayDeletePress`, `SMBReplayLoadPress`, `SMBSelectionMenu__Activate`, `System_IsTrialMode`, `TKeyboard__AddKeyCallback`, `TPlayer__GetJoystick` (+2 more)
 * Called by: (none)
 */
/* SMBReplayManager__Activate() */

void __thiscall SMBReplayManager__Activate(SMBReplayManager *self)

{
  int iVar1;
  long *plVar2;
  Joystick *pJVar3;
  wchar_t *pwVar4;
  uint64_t uVar5;
  long lVar6;
  
  SMBSelectionMenu__Activate((SMBSelectionMenu *)self);
  if (*(void **)(self + 0xd0) != (void *)0x0) {
    free(*(void **)(self + 0xd0));
    *(uint64_t *)(self + 0xd0) = 0;
  }
  if (*(void **)(self + 0xd8) != (void *)0x0) {
    free(*(void **)(self + 0xd8));
    *(uint64_t *)(self + 0xd8) = 0;
  }
  plVar2 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
  iVar1 = (**(code **)(*plVar2 + 0x20))(plVar2);
  if ((iVar1 == 1) &&
     (lVar6 = TPlayer__GetProfile((TPlayer *)Players__Player), *(int *)(lVar6 + 0xc) == 1)) {
    LoadFileList(self);
  }
  *(uint32_t *)(self + 200) = 0;
  *(uint32_t *)(self + 0xe0) = 0;
  *(uint32_t *)(self + 0x68) = 0;
  LoadText(self);
  if (*(int *)(self + 0xe4) == 0) {
    pJVar3 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
    Joystick__AddButtonCallback(pJVar3,0,SMBReplayLoadPress,self);
    pwVar4 = (wchar_t *)
             FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8),"ok");
    uVar5 = GetLocalizedText(4);
    FlashTextField__SetText(pwVar4,uVar5);
    if (Keyboard != (TKeyboard *)0x0) {
      TKeyboard__AddKeyCallback(Keyboard,0x76,SMBReplayLoadPress,self);
    }
  }
  else {
    pJVar3 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
    Joystick__AddButtonCallback(pJVar3,0,SMBReplayCloseMenu,self);
    pwVar4 = (wchar_t *)
             FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8),"ok");
    uVar5 = GetLocalizedText(5);
    FlashTextField__SetText(pwVar4,uVar5);
    if (Keyboard != (TKeyboard *)0x0) {
      TKeyboard__AddKeyCallback(Keyboard,0x76,SMBReplayCloseMenu,self);
      iVar1 = System_IsTrialMode();
      goto joined_r0x0050f928;
    }
  }
  iVar1 = System_IsTrialMode();
joined_r0x0050f928:
  if (iVar1 == 0) {
    pJVar3 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
    Joystick__AddButtonCallback(pJVar3,3,SMBReplayDeletePress,self);
    if (Keyboard != (TKeyboard *)0x0) {
      TKeyboard__AddKeyCallback(Keyboard,0x83,SMBReplayDeletePress,self);
    }
  }
  pwVar4 = (wchar_t *)
           FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8),"date");
  uVar5 = GetLocalizedText(0x46);
  FlashTextField__SetText(pwVar4,uVar5);
  pwVar4 = (wchar_t *)
           FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8),"cancel");
  uVar5 = GetLocalizedText(5);
  FlashTextField__SetText(pwVar4,uVar5);
  pwVar4 = (wchar_t *)
           FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8),"del");
  uVar5 = GetLocalizedText(0xb5);
  FlashTextField__SetText(pwVar4,uVar5);
  return;
}

/* ======================================================================
 * SMBReplayManager__IsSelectedReplayValid  (Ghidra `IsSelectedReplayValid` @ 0050f9a0)
 * Signature: uint8_t __thiscall IsSelectedReplayValid(SMBReplayManager * self)
 * Class: SMBReplayManager
 * Calls: `TPlayer__GetProfile`
 * Called by: (none)
 */
/* SMBReplayManager__IsSelectedReplayValid() */

bool __thiscall SMBReplayManager__IsSelectedReplayValid(SMBReplayManager *self)

{
  long *plVar1;
  long lVar2;
  uint64_t local_48;
  uint8_t *local_40;
  uint32_t local_38;
  uint64_t local_30;
  uint32_t local_28;
  uint32_t local_24;
  uint32_t local_20;
  uint32_t local_1c;
  uint32_t local_18;
  uint32_t local_14;
  uint8_t *local_10;
  
  local_38 = 2;
  local_30 = 0;
  local_28 = 0;
  local_24 = 1;
  local_20 = 1;
  local_1c = 0;
  local_18 = 0;
  local_10 = &DAT_005c04cf /* R:7.374579797039071e-39f */;
  local_40 = &DAT_005c328c /* R:u32=1811964530 */;
  local_48 = *(uint64_t *)
              ((long)*(int *)(self + 200) * 0x10 + *(long *)(*(long *)(self + 0xd0) + 8));
  local_14 = 1;
  plVar1 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
  lVar2 = (**(code **)(*plVar1 + 0x40))(plVar1,&local_48,0);
  if (lVar2 != 0) {
    plVar1 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
    (**(code **)(*plVar1 + 0x58))(plVar1,lVar2,1);
  }
  return lVar2 != 0;
}

/* ======================================================================
 * SMBReplayManager__LoadSelectedReplay  (Ghidra `LoadSelectedReplay` @ 0050fa70)
 * Signature: uint8_t __thiscall LoadSelectedReplay(SMBReplayManager * self)
 * Class: SMBReplayManager
 * Calls: `CreateMessage`, `GetLocalizedText`, `UserAlertCloseCurrent`
 * Called by: `SMBReplayLoadPress`
 */
/* SMBReplayManager__LoadSelectedReplay() */

void __thiscall SMBReplayManager__LoadSelectedReplay(SMBReplayManager *self)

{
  int iVar1;
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
  
  if ((*(int **)(self + 0xd0) != (int *)0x0) && (**(int **)(self + 0xd0) != 0)) {
    iVar1 = IsSelectedReplayValid(self);
    if (iVar1 != 1) {
      *(uint32_t *)(self + 0xe0) = 0;
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
      local_78[0] = 0xe;
      local_68 = GetLocalizedText(0xdf);
      local_70 = GetLocalizedText(0xae);
      local_60 = GetLocalizedText(4);
      local_50 = UserAlertCloseCurrent;
      CreateMessage(local_78);
      return;
    }
    *(uint32_t *)(self + 0xe0) = 1;
    (**(code **)(*(long *)self + 0x28))(self);
  }
  return;
}

/* ======================================================================
 * SMBReplayManager__LoadSelectedReplayData  (Ghidra `LoadSelectedReplayData` @ 0050fbb0)
 * Signature: uint8_t __thiscall LoadSelectedReplayData(SMBReplayManager * self)
 * Class: SMBReplayManager
 * Calls: (none)
 * Called by: `GSMBMenu__TransitionOutGameFromMenu`
 */
/* SMBReplayManager__LoadSelectedReplayData() */

void __thiscall SMBReplayManager__LoadSelectedReplayData(SMBReplayManager *self)

{
  if (*(long *)(self + 0xd0) != 0) {
    SMBReplay__LoadReplayData(GSuperMeatBoy__pReplay);
  }
  return;
}

/* ======================================================================
 * SMBReplayManager__DeleteSelectedReplay  (Ghidra `DeleteSelectedReplay` @ 0050fc00)
 * Signature: uint8_t __thiscall DeleteSelectedReplay(SMBReplayManager * self)
 * Class: SMBReplayManager
 * Calls: `DisableMessage`, `TPlayer__GetProfile`, `free`
 * Called by: (none)
 */
/* SMBReplayManager__DeleteSelectedReplay() */

void __thiscall SMBReplayManager__DeleteSelectedReplay(SMBReplayManager *self)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
  iVar1 = (**(code **)(*plVar2 + 0x20))(plVar2);
  if (iVar1 == 1) {
    lVar3 = TPlayer__GetProfile((TPlayer *)Players__Player);
    if (((*(int *)(lVar3 + 0xc) == 1) && (*(int **)(self + 0xd0) != (int *)0x0)) &&
       (**(int **)(self + 0xd0) != 0)) {
      plVar2 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
      (**(code **)(*plVar2 + 0x88))
                (plVar2,*(uint64_t *)
                         ((long)*(int *)(self + 200) * 0x10 + *(long *)(*(long *)(self + 0xd0) + 8))
                );
      *(uint32_t *)(self + 200) = 0;
      *(uint32_t *)(self + 0x68) = 0;
      DisableMessage(1);
      if (*(void **)(self + 0xd0) != (void *)0x0) {
        free(*(void **)(self + 0xd0));
        *(uint64_t *)(self + 0xd0) = 0;
      }
      if (*(void **)(self + 0xd8) != (void *)0x0) {
        free(*(void **)(self + 0xd8));
        *(uint64_t *)(self + 0xd8) = 0;
      }
      plVar2 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
      iVar1 = (**(code **)(*plVar2 + 0x20))(plVar2);
      if (iVar1 == 1) {
        lVar3 = TPlayer__GetProfile((TPlayer *)Players__Player);
        if (*(int *)(lVar3 + 0xc) == 1) {
          LoadFileList(self);
        }
      }
      LoadText(self);
      return;
    }
  }
  return;
}

/* ======================================================================
 * SMBReplayManager__SetManageOnlyMode  (Ghidra `SetManageOnlyMode` @ 0050fd20)
 * Signature: uint8_t __thiscall SetManageOnlyMode(SMBReplayManager * self, int arg1)
 * Class: SMBReplayManager
 * Calls: `GSuperMeatBoy__Freeze`
 * Called by: `GSMBMenu__ClickTitleOption`, `GSMBMenu__ShowReplayMenu`
 */
/* SMBReplayManager__SetManageOnlyMode(int) */

void __thiscall SMBReplayManager__SetManageOnlyMode(SMBReplayManager *self,int arg1)

{
  *(int *)(self + 0xe4) = arg1;
  if (arg1 != 1) {
    return;
  }
  GSuperMeatBoy__Freeze(SuperMeatBoy,1);
  return;
}

/* ======================================================================
 * SMBReplayManager__LoadFileList__0050fd40  (Ghidra `LoadFileList` @ 0050fd40)
 * Signature: uint8_t __thiscall LoadFileList(SMBReplayManager * self)
 * Class: SMBReplayManager
 * Calls: `TPlayer__GetProfile`, `free`
 * Called by: `SMBReplayConfirmDelete`, `SMBReplayManager__LoadFileList`
 */
/* SMBReplayManager__LoadFileList__0050fd40() */

void __thiscall SMBReplayManager__LoadFileList__0050fd40(SMBReplayManager *self)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  
  if (*(void **)(self + 0xd0) != (void *)0x0) {
    free(*(void **)(self + 0xd0));
    *(uint64_t *)(self + 0xd0) = 0;
  }
  if (*(void **)(self + 0xd8) != (void *)0x0) {
    free(*(void **)(self + 0xd8));
    *(uint64_t *)(self + 0xd8) = 0;
  }
  plVar3 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
  iVar2 = (**(code **)(*plVar3 + 0x20))(plVar3);
  if (iVar2 == 1) {
    lVar1 = TPlayer__GetProfile((TPlayer *)Players__Player);
    if (*(int *)(lVar1 + 0xc) == 1) {
      LoadFileList(self);
      return;
    }
  }
  return;
}

/* ======================================================================
 * SMBReplayManager__GetSelectedReplayInfo  (Ghidra `GetSelectedReplayInfo` @ 0050fdc0)
 * Signature: uint8_t __thiscall GetSelectedReplayInfo(SMBReplayManager * self)
 * Class: SMBReplayManager
 * Calls: (none)
 * Called by: `GSMBMenu__GetCurrReplayInfo`
 */
/* SMBReplayManager__GetSelectedReplayInfo() */

long __thiscall SMBReplayManager__GetSelectedReplayInfo(SMBReplayManager *self)

{
  if (*(long *)(self + 0xd0) != 0) {
    return *(long *)(self + 0xd8) + (long)*(int *)(self + 200) * 0x24;
  }
  return 0;
}

/* ======================================================================
 * SMBReplayManager__DisconnectedStorage  (Ghidra `DisconnectedStorage` @ 0050fdf0)
 * Signature: uint8_t __thiscall DisconnectedStorage(SMBReplayManager * self)
 * Class: SMBReplayManager
 * Calls: (none)
 * Called by: `GSMBMenu__ProcessStorageChange`
 */
/* SMBReplayManager__DisconnectedStorage() */

void __thiscall SMBReplayManager__DisconnectedStorage(SMBReplayManager *self)

{
  if ((*(int *)(self + 0x30) != 1) && (*(int *)(self + 0x30) != 3)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0050fe07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)self + 0x28))();
  return;
}

/* ======================================================================
 * SMBReplayManager__AllowDelete  (Ghidra `AllowDelete` @ 0050fe10)
 * Signature: uint8_t __thiscall AllowDelete(SMBReplayManager * self)
 * Class: SMBReplayManager
 * Calls: (none)
 * Called by: (none)
 */
/* SMBReplayManager__AllowDelete() */

bool __thiscall SMBReplayManager__AllowDelete(SMBReplayManager *self)

{
  bool bVar1;
  
  bVar1 = false;
  if (*(int **)(self + 0xd0) != (int *)0x0) {
    bVar1 = 0 < **(int **)(self + 0xd0);
  }
  return bVar1;
}
