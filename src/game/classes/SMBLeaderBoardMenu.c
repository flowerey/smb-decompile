/* src/game/classes/SMBLeaderBoardMenu.c — 18 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "SMBLeaderBoardMenu.h"

/* ======================================================================
 * SMBLeaderBoardMenu__DeActivate  (Ghidra `DeActivate` @ 004c4020)
 * Signature: uint8_t __thiscall DeActivate(SMBLeaderBoardMenu * self)
 * Class: SMBLeaderBoardMenu
 * Calls: `FlashLibraryInstance__GotoAndStop`, `Joystick__AddButtonCallback`, `SMBSelectionMenu__DeActivate`, `TKeyboard__AddKeyCallback`, `TPlayer__GetJoystick`
 * Called by: (none)
 */
/* SMBLeaderBoardMenu__DeActivate() */

void __thiscall SMBLeaderBoardMenu__DeActivate(SMBLeaderBoardMenu *self)

{
  Joystick *pJVar1;
  
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddButtonCallback(pJVar1,0,0,0);
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddButtonCallback(pJVar1,3,0,0);
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddButtonCallback(pJVar1,10,0,0);
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddButtonCallback(pJVar1,0xb,0,0);
  if (Keyboard != (TKeyboard *)0x0) {
    TKeyboard__AddKeyCallback(Keyboard,0x76,0,0);
    TKeyboard__AddKeyCallback(Keyboard,0x6c,0,0);
    TKeyboard__AddKeyCallback(Keyboard,0x83,0,0);
  }
  FlashTextField__SetText(*(wchar_t **)(self + 0xd0),&DAT_005c6634 /* R:0.0f */);
  FlashTextField__SetText(*(wchar_t **)(self + 0x170),&DAT_005c6634 /* R:0.0f */);
  FlashTextField__SetText(*(wchar_t **)(self + 0x120),&DAT_005c6634 /* R:0.0f */);
  FlashLibraryInstance__GotoAndStop(*(FlashLibraryInstance **)(self + 0x240),0x31);
  FlashTextField__SetText(*(wchar_t **)(self + 0xd8),&DAT_005c6634 /* R:0.0f */);
  FlashTextField__SetText(*(wchar_t **)(self + 0x178),&DAT_005c6634 /* R:0.0f */);
  FlashTextField__SetText(*(wchar_t **)(self + 0x128),&DAT_005c6634 /* R:0.0f */);
  FlashLibraryInstance__GotoAndStop(*(FlashLibraryInstance **)(self + 0x248),0x31);
  FlashTextField__SetText(*(wchar_t **)(self + 0xe0),&DAT_005c6634 /* R:0.0f */);
  FlashTextField__SetText(*(wchar_t **)(self + 0x180),&DAT_005c6634 /* R:0.0f */);
  FlashTextField__SetText(*(wchar_t **)(self + 0x130),&DAT_005c6634 /* R:0.0f */);
  FlashLibraryInstance__GotoAndStop(*(FlashLibraryInstance **)(self + 0x250),0x31);
  FlashTextField__SetText(*(wchar_t **)(self + 0xe8),&DAT_005c6634 /* R:0.0f */);
  FlashTextField__SetText(*(wchar_t **)(self + 0x188),&DAT_005c6634 /* R:0.0f */);
  FlashTextField__SetText(*(wchar_t **)(self + 0x138),&DAT_005c6634 /* R:0.0f */);
  FlashLibraryInstance__GotoAndStop(*(FlashLibraryInstance **)(self + 600),0x31);
  FlashTextField__SetText(*(wchar_t **)(self + 0xf0),&DAT_005c6634 /* R:0.0f */);
  FlashTextField__SetText(*(wchar_t **)(self + 400),&DAT_005c6634 /* R:0.0f */);
  FlashTextField__SetText(*(wchar_t **)(self + 0x140),&DAT_005c6634 /* R:0.0f */);
  FlashLibraryInstance__GotoAndStop(*(FlashLibraryInstance **)(self + 0x260),0x31);
  FlashTextField__SetText(*(wchar_t **)(self + 0xf8),&DAT_005c6634 /* R:0.0f */);
  FlashTextField__SetText(*(wchar_t **)(self + 0x198),&DAT_005c6634 /* R:0.0f */);
  FlashTextField__SetText(*(wchar_t **)(self + 0x148),&DAT_005c6634 /* R:0.0f */);
  FlashLibraryInstance__GotoAndStop(*(FlashLibraryInstance **)(self + 0x268),0x31);
  FlashTextField__SetText(*(wchar_t **)(self + 0x100),&DAT_005c6634 /* R:0.0f */);
  FlashTextField__SetText(*(wchar_t **)(self + 0x1a0),&DAT_005c6634 /* R:0.0f */);
  FlashTextField__SetText(*(wchar_t **)(self + 0x150),&DAT_005c6634 /* R:0.0f */);
  FlashLibraryInstance__GotoAndStop(*(FlashLibraryInstance **)(self + 0x270),0x31);
  FlashTextField__SetText(*(wchar_t **)(self + 0x108),&DAT_005c6634 /* R:0.0f */);
  FlashTextField__SetText(*(wchar_t **)(self + 0x1a8),&DAT_005c6634 /* R:0.0f */);
  FlashTextField__SetText(*(wchar_t **)(self + 0x158),&DAT_005c6634 /* R:0.0f */);
  FlashLibraryInstance__GotoAndStop(*(FlashLibraryInstance **)(self + 0x278),0x31);
  FlashTextField__SetText(*(wchar_t **)(self + 0x110),&DAT_005c6634 /* R:0.0f */);
  FlashTextField__SetText(*(wchar_t **)(self + 0x1b0),&DAT_005c6634 /* R:0.0f */);
  FlashTextField__SetText(*(wchar_t **)(self + 0x160),&DAT_005c6634 /* R:0.0f */);
  FlashLibraryInstance__GotoAndStop(*(FlashLibraryInstance **)(self + 0x280),0x31);
  FlashTextField__SetText(*(wchar_t **)(self + 0x118),&DAT_005c6634 /* R:0.0f */);
  FlashTextField__SetText(*(wchar_t **)(self + 0x1b8),&DAT_005c6634 /* R:0.0f */);
  FlashTextField__SetText(*(wchar_t **)(self + 0x168),&DAT_005c6634 /* R:0.0f */);
  FlashLibraryInstance__GotoAndStop(*(FlashLibraryInstance **)(self + 0x288),0x31);
  SMBSelectionMenu__DeActivate((SMBSelectionMenu *)self);
  return;
}

/* ======================================================================
 * SMBLeaderBoardMenu__Render  (Ghidra `Render` @ 004c43c0)
 * Signature: uint8_t __thiscall Render(SMBLeaderBoardMenu * self)
 * Class: SMBLeaderBoardMenu
 * Calls: `SMBSelectionMenu__Render`, `SwitchOutMenuButtons`
 * Called by: (none)
 */
/* SMBLeaderBoardMenu__Render() */

void __thiscall SMBLeaderBoardMenu__Render(SMBLeaderBoardMenu *self)

{
  FlashLibraryInstance *pFVar1;
  
  pFVar1 = *(FlashLibraryInstance **)(self + 0x290);
  if (pFVar1 != (FlashLibraryInstance *)0x0) {
    SwitchOutMenuButtons(*(FlashAnimationLibrary **)(pFVar1 + 0x28),pFVar1);
  }
  SMBSelectionMenu__Render((SMBSelectionMenu *)self);
  return;
}

/* ======================================================================
 * SMBLeaderBoardMenu__SMBLeaderBoardMenu  (Ghidra `~SMBLeaderBoardMenu` @ 004c43f0)
 * Signature: uint8_t __thiscall ~SMBLeaderBoardMenu(SMBLeaderBoardMenu * self)
 * Class: SMBLeaderBoardMenu
 * Calls: `SMBLeaderBoardMenu__SMBLeaderBoardMenu__004c44c0`, `SMBSelectionMenu__SMBSelectionMenu__005100b0`, `SyncEvent__SyncEvent__005b8100`
 * Called by: (none)
 */
/* SMBLeaderBoardMenu__SMBLeaderBoardMenu__004c44c0() */

void __thiscall SMBLeaderBoardMenu__SMBLeaderBoardMenu__004c44c0(SMBLeaderBoardMenu *self)

{
  *(uint8_t ***)self = &PTR__SMBLeaderBoardMenu_005c5e70;
  if (*(long **)(self + 0x290) != (long *)0x0) {
                    /* try { // try from 004c440e to 004c4410 has its CatchHandler @ 004c444d */
    (**(code **)(**(long **)(self + 0x290) + 8))();
  }
  *(uint64_t *)(self + 0x290) = 0;
                    /* try { // try from 004c4423 to 004c4427 has its CatchHandler @ 004c44ad */
  SyncEvent__SyncEvent__005b8100((SyncEvent *)(self + 0x3c0));
                    /* try { // try from 004c442f to 004c4433 has its CatchHandler @ 004c44ab */
  SyncEvent__SyncEvent__005b8100((SyncEvent *)(self + 0x358));
                    /* try { // try from 004c443b to 004c443f has its CatchHandler @ 004c44a9 */
  SyncEvent__SyncEvent__005b8100((SyncEvent *)(self + 0x2f0));
  SMBSelectionMenu__SMBSelectionMenu__005100b0((SMBSelectionMenu *)self);
  return;
}

/* ======================================================================
 * SMBLeaderBoardMenu__SMBLeaderBoardMenu__004c44c0  (Ghidra `~SMBLeaderBoardMenu` @ 004c44c0)
 * Signature: uint8_t __thiscall ~SMBLeaderBoardMenu(SMBLeaderBoardMenu * self)
 * Class: SMBLeaderBoardMenu
 * Calls: `operator_delete`
 * Called by: `GSMBMenu__GSMBMenu`, `SMBLeaderBoardMenu__SMBLeaderBoardMenu`
 */
/* SMBLeaderBoardMenu__SMBLeaderBoardMenu__004c44c0() */

void __thiscall SMBLeaderBoardMenu__SMBLeaderBoardMenu__004c44c0(SMBLeaderBoardMenu *self)

{
  SMBLeaderBoardMenu__dtor(self);
  operator_delete(self);
  return;
}

/* ======================================================================
 * SMBLeaderBoardMenu__Initialize  (Ghidra `Initialize` @ 004c45c0)
 * Signature: uint8_t __thiscall Initialize(SMBLeaderBoardMenu * self)
 * Class: SMBLeaderBoardMenu
 * Calls: `FlashAnimationLibrary__FlashAnimationLibrary__00576680`, `FlashAnimationLibrary__GetClipIndex`, `FlashAnimationLibrary__GetLibraryEntry`, `FlashAnimationLibrary__GetMovieClip__005731d0`, `FlashAnimationLibrary__GetTextField`, `FlashLibraryInstance__GotoAndStop`, `FlashMovieClip__FindInstance`, `FormatResourcePath`, `GetLocalizedText`, `SMBSelectionMenu__InitializeMenuRows` (+2 more)
 * Called by: `GSMBMenu__GSMBMenu__004d8690`
 */
/* WARNING: Removing unreachable block (ram,0x004c4c51) */
/* SMBLeaderBoardMenu__Initialize() */

void __thiscall SMBLeaderBoardMenu__Initialize(SMBLeaderBoardMenu *self)

{
  int *piVar1;
  char *pcVar2;
  FlashAnimationLibrary *this_00;
  uint64_t uVar3;
  long *plVar4;
  FlashMovieClip *this_01;
  wchar_t *pwVar5;
  SMBLeaderBoardMenu *pSVar6;
  int iVar7;
  char acStack_48 [16];
  uint8_t *local_38 [3];
  
  local_38[0] = &DAT_008184c8 /* R:0.00016803004837129265f */;
                    /* try { // try from 004c45e0 to 004c45f1 has its CatchHandler @ 004c4c08 */
  pcVar2 = (char *)FormatResourcePath("/Menus/leaderboard.am",local_38);
  this_00 = operator_new(0xb0);
                    /* try { // try from 004c45fb to 004c45ff has its CatchHandler @ 004c4c41 */
  FlashAnimationLibrary__FlashAnimationLibrary__00576680(this_00,pcVar2);
  *(FlashAnimationLibrary **)(self + 8) = this_00;
  this_00[0x8c] = (FlashAnimationLibrary)0x1;
                    /* try { // try from 004c4614 to 004c4bea has its CatchHandler @ 004c4c08 */
  uVar3 = FlashAnimationLibrary__GetMovieClip__005731d0(*(FlashAnimationLibrary **)(self + 8),"leaderboard");
  *(uint64_t *)(self + 0x28) = uVar3;
  uVar3 = FlashAnimationLibrary__GetMovieClip__005731d0
                    (*(FlashAnimationLibrary **)(self + 8),"leaderboardload");
  *(uint64_t *)(self + 0x20) = uVar3;
  uVar3 = FlashAnimationLibrary__GetMovieClip__005731d0(*(FlashAnimationLibrary **)(self + 8),"leaderboardin")
  ;
  *(uint64_t *)(self + 0x10) = uVar3;
  uVar3 = FlashAnimationLibrary__GetMovieClip__005731d0
                    (*(FlashAnimationLibrary **)(self + 8),"leaderboardout");
  *(uint64_t *)(self + 0x18) = uVar3;
  uVar3 = FlashAnimationLibrary__GetMovieClip__005731d0(*(FlashAnimationLibrary **)(self + 8),"page");
  *(uint64_t *)(self + 0x290) = uVar3;
  SMBSelectionMenu__InitializeMenuRows((SMBSelectionMenu *)self,10);
  FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 8),"selectbar");
  iVar7 = 0;
  pSVar6 = self;
  do {
    iVar7 = iVar7 + 1;
    Sprint("name%i",acStack_48,iVar7);
    uVar3 = FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8),acStack_48);
    *(uint64_t *)(pSVar6 + 0xd0) = uVar3;
    Sprint("time%i",acStack_48,iVar7);
    uVar3 = FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8),acStack_48);
    *(uint64_t *)(pSVar6 + 0x120) = uVar3;
    Sprint("extra%i",acStack_48,iVar7);
    uVar3 = FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8),acStack_48);
    *(uint64_t *)(pSVar6 + 0x1c0) = uVar3;
    Sprint("rank%i",acStack_48,iVar7);
    uVar3 = FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8),acStack_48);
    *(uint64_t *)(pSVar6 + 0x170) = uVar3;
    Sprint("icon%i",acStack_48,iVar7);
    plVar4 = (long *)FlashAnimationLibrary__GetMovieClip__005731d0
                               (*(FlashAnimationLibrary **)(self + 8),acStack_48);
    this_01 = (FlashMovieClip *)
              FlashAnimationLibrary__GetLibraryEntry
                        (*(FlashAnimationLibrary **)(self + 8),
                         *(int *)(*(long *)(self + 0x28) + 0x20));
    uVar3 = FlashMovieClip__FindInstance(this_01,(int)plVar4[4],0,(int *)0x0,0);
    *(uint64_t *)(pSVar6 + 0x240) = uVar3;
    (**(code **)(*plVar4 + 8))(plVar4);
    pSVar6 = pSVar6 + 8;
  } while (iVar7 != 10);
  uVar3 = GetLocalizedText(8);
  pwVar5 = (wchar_t *)
           FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8),"gamercard");
  FlashTextField__SetText(pwVar5,uVar3);
  uVar3 = FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8),"friends");
  *(uint64_t *)(self + 0x210) = uVar3;
  uVar3 = GetLocalizedText(9);
  FlashTextField__SetText(*(wchar_t **)(self + 0x210),uVar3);
  uVar3 = GetLocalizedText(10);
  pwVar5 = (wchar_t *)
           FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8),"back");
  FlashTextField__SetText(pwVar5,uVar3);
  uVar3 = GetLocalizedText(0xb);
  pwVar5 = (wchar_t *)
           FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8),"ranktext");
  FlashTextField__SetText(pwVar5,uVar3);
  uVar3 = GetLocalizedText(0xc);
  pwVar5 = (wchar_t *)
           FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8),"gamertag");
  FlashTextField__SetText(pwVar5,uVar3);
  uVar3 = FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8),"besttimes");
  *(uint64_t *)(self + 0x218) = uVar3;
  uVar3 = GetLocalizedText(0xd);
  FlashTextField__SetText(*(wchar_t **)(self + 0x218),uVar3);
  uVar3 = FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8),"time");
  *(uint64_t *)(self + 0x228) = uVar3;
  uVar3 = FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8),"char");
  *(uint64_t *)(self + 0x230) = uVar3;
  uVar3 = FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8),"money");
  *(uint64_t *)(self + 0x238) = uVar3;
  uVar3 = FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8),"levelname");
  *(uint64_t *)(self + 0x220) = uVar3;
  uVar3 = GetLocalizedText(0x11);
  pwVar5 = (wchar_t *)
           FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8),"loading");
  FlashTextField__SetText(pwVar5,uVar3);
  FlashTextField__SetText(*(wchar_t **)(self + 0xd0),&DAT_005c6634 /* R:0.0f */);
  FlashTextField__SetText(*(wchar_t **)(self + 0x170),&DAT_005c6634 /* R:0.0f */);
  FlashTextField__SetText(*(wchar_t **)(self + 0x120),&DAT_005c6634 /* R:0.0f */);
  FlashLibraryInstance__GotoAndStop(*(FlashLibraryInstance **)(self + 0x240),0x31);
  FlashTextField__SetText(*(wchar_t **)(self + 0xd8),&DAT_005c6634 /* R:0.0f */);
  FlashTextField__SetText(*(wchar_t **)(self + 0x178),&DAT_005c6634 /* R:0.0f */);
  FlashTextField__SetText(*(wchar_t **)(self + 0x128),&DAT_005c6634 /* R:0.0f */);
  FlashLibraryInstance__GotoAndStop(*(FlashLibraryInstance **)(self + 0x248),0x31);
  FlashTextField__SetText(*(wchar_t **)(self + 0xe0),&DAT_005c6634 /* R:0.0f */);
  FlashTextField__SetText(*(wchar_t **)(self + 0x180),&DAT_005c6634 /* R:0.0f */);
  FlashTextField__SetText(*(wchar_t **)(self + 0x130),&DAT_005c6634 /* R:0.0f */);
  FlashLibraryInstance__GotoAndStop(*(FlashLibraryInstance **)(self + 0x250),0x31);
  FlashTextField__SetText(*(wchar_t **)(self + 0xe8),&DAT_005c6634 /* R:0.0f */);
  FlashTextField__SetText(*(wchar_t **)(self + 0x188),&DAT_005c6634 /* R:0.0f */);
  FlashTextField__SetText(*(wchar_t **)(self + 0x138),&DAT_005c6634 /* R:0.0f */);
  FlashLibraryInstance__GotoAndStop(*(FlashLibraryInstance **)(self + 600),0x31);
  FlashTextField__SetText(*(wchar_t **)(self + 0xf0),&DAT_005c6634 /* R:0.0f */);
  FlashTextField__SetText(*(wchar_t **)(self + 400),&DAT_005c6634 /* R:0.0f */);
  FlashTextField__SetText(*(wchar_t **)(self + 0x140),&DAT_005c6634 /* R:0.0f */);
  FlashLibraryInstance__GotoAndStop(*(FlashLibraryInstance **)(self + 0x260),0x31);
  FlashTextField__SetText(*(wchar_t **)(self + 0xf8),&DAT_005c6634 /* R:0.0f */);
  FlashTextField__SetText(*(wchar_t **)(self + 0x198),&DAT_005c6634 /* R:0.0f */);
  FlashTextField__SetText(*(wchar_t **)(self + 0x148),&DAT_005c6634 /* R:0.0f */);
  FlashLibraryInstance__GotoAndStop(*(FlashLibraryInstance **)(self + 0x268),0x31);
  FlashTextField__SetText(*(wchar_t **)(self + 0x100),&DAT_005c6634 /* R:0.0f */);
  FlashTextField__SetText(*(wchar_t **)(self + 0x1a0),&DAT_005c6634 /* R:0.0f */);
  FlashTextField__SetText(*(wchar_t **)(self + 0x150),&DAT_005c6634 /* R:0.0f */);
  FlashLibraryInstance__GotoAndStop(*(FlashLibraryInstance **)(self + 0x270),0x31);
  FlashTextField__SetText(*(wchar_t **)(self + 0x108),&DAT_005c6634 /* R:0.0f */);
  FlashTextField__SetText(*(wchar_t **)(self + 0x1a8),&DAT_005c6634 /* R:0.0f */);
  FlashTextField__SetText(*(wchar_t **)(self + 0x158),&DAT_005c6634 /* R:0.0f */);
  FlashLibraryInstance__GotoAndStop(*(FlashLibraryInstance **)(self + 0x278),0x31);
  FlashTextField__SetText(*(wchar_t **)(self + 0x110),&DAT_005c6634 /* R:0.0f */);
  FlashTextField__SetText(*(wchar_t **)(self + 0x1b0),&DAT_005c6634 /* R:0.0f */);
  FlashTextField__SetText(*(wchar_t **)(self + 0x160),&DAT_005c6634 /* R:0.0f */);
  FlashLibraryInstance__GotoAndStop(*(FlashLibraryInstance **)(self + 0x280),0x31);
  FlashTextField__SetText(*(wchar_t **)(self + 0x118),&DAT_005c6634 /* R:0.0f */);
  FlashTextField__SetText(*(wchar_t **)(self + 0x1b8),&DAT_005c6634 /* R:0.0f */);
  FlashTextField__SetText(*(wchar_t **)(self + 0x168),&DAT_005c6634 /* R:0.0f */);
  FlashLibraryInstance__GotoAndStop(*(FlashLibraryInstance **)(self + 0x288),0x31);
  if ((allocator *)(local_38[0] + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage) {
    LOCK();
    piVar1 = (int *)(local_38[0] + -8);
    iVar7 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar7 < 1) {
      std__string_Rep_M_destroy((allocator *)(local_38[0] + -0x18));
    }
  }
  return;
}

/* ======================================================================
 * SMBLeaderBoardMenu__SMBLeaderBoardMenu__004c4ca0  (Ghidra `SMBLeaderBoardMenu` @ 004c4ca0)
 * Signature: uint8_t __thiscall SMBLeaderBoardMenu(SMBLeaderBoardMenu * self)
 * Class: SMBLeaderBoardMenu
 * Calls: `SMBSelectionMenu__SMBSelectionMenu__00510270`, `SyncEvent__SyncEvent`
 * Called by: `GSMBMenu__GSMBMenu__004d8690`
 */
/* SMBLeaderBoardMenu__SMBLeaderBoardMenu__004c4ca0() */

void __thiscall SMBLeaderBoardMenu__SMBLeaderBoardMenu__004c4ca0(SMBLeaderBoardMenu *self)

{
  SMBSelectionMenu__SMBSelectionMenu__00510270((SMBSelectionMenu *)self);
  *(uint8_t ***)self = &PTR__SMBLeaderBoardMenu_005c5e70;
  *(uint32_t *)(self + 0x2a8) = 0;
  *(uint64_t *)(self + 0x2b0) = 0;
  *(uint32_t *)(self + 0x2b8) = 0;
  *(uint32_t *)(self + 700) = 0;
  *(uint32_t *)(self + 0x2c0) = 0;
  *(uint64_t *)(self + 0x2c8) = 0;
  *(uint32_t *)(self + 0x2d0) = 0;
  *(uint32_t *)(self + 0x2d4) = 0;
  *(uint32_t *)(self + 0x2d8) = 0;
  *(uint64_t *)(self + 0x2e0) = 0;
  *(uint32_t *)(self + 0x2e8) = 0;
  *(uint32_t *)(self + 0x2ec) = 0;
                    /* try { // try from 004c4d47 to 004c4d4b has its CatchHandler @ 004c4dc9 */
  SyncEvent__SyncEvent((SyncEvent *)(self + 0x2f0));
                    /* try { // try from 004c4d56 to 004c4d5a has its CatchHandler @ 004c4dfb */
  SyncEvent__SyncEvent((SyncEvent *)(self + 0x358));
                    /* try { // try from 004c4d62 to 004c4d66 has its CatchHandler @ 004c4ddc */
  SyncEvent__SyncEvent((SyncEvent *)(self + 0x3c0));
  *(uint32_t *)(self + 0x42c) = 1;
  *(uint32_t *)(self + 0x430) = 0;
  *(uint32_t *)(self + 0x434) = 0;
  *(uint32_t *)(self + 0x43c) = 0;
  *(uint32_t *)(self + 0x440) = 0;
  *(uint32_t *)(self + 0x6c) = 0xb;
  *(uint32_t *)(self + 0x70) = 10;
  *(SMBLeaderBoardMenu **)(self + 0x2a0) = self + 0x2d8;
  return;
}

/* ======================================================================
 * SMBLeaderBoardMenu__CloseDueToConnectionLoss  (Ghidra `CloseDueToConnectionLoss` @ 004c4e00)
 * Signature: uint8_t __thiscall CloseDueToConnectionLoss(SMBLeaderBoardMenu * self)
 * Class: SMBLeaderBoardMenu
 * Calls: `CreateMessage`, `GetLocalizedText`, `UserAlertCloseCurrent`
 * Called by: `GSMBMenu__ProcessDisconnect`
 */
/* SMBLeaderBoardMenu__CloseDueToConnectionLoss() */

void __thiscall SMBLeaderBoardMenu__CloseDueToConnectionLoss(SMBLeaderBoardMenu *self)

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
  local_60 = GetLocalizedText(4);
  local_50 = UserAlertCloseCurrent;
  local_68 = GetLocalizedText(0x39);
  local_70 = GetLocalizedText(0x3a);
  CreateMessage(local_78);
  return;
}

/* ======================================================================
 * SMBLeaderBoardMenu__ReadData  (Ghidra `ReadData` @ 004c4ef0)
 * Signature: uint8_t __thiscall ReadData(SMBLeaderBoardMenu * self)
 * Class: SMBLeaderBoardMenu
 * Calls: `ConvertLevelToLeaderboardID`, `GSMBMenu__GetCurrLevelName`, `GetLocalizedText`, `TPlayer__GetProfile`, `free`
 * Called by: (none)
 */
/* SMBLeaderBoardMenu__ReadData() */

void __thiscall SMBLeaderBoardMenu__ReadData(SMBLeaderBoardMenu *self)

{
  uint32_t *puVar1;
  uint32_t uVar2;
  int iVar3;
  uint64_t uVar4;
  LeaderBoardResult *pLVar5;
  uint32_t local_68;
  uint32_t local_64;
  uint32_t local_60;
  uint32_t *local_58;
  uint64_t local_48;
  SMBLeaderBoardMenu *local_40;
  SMBLeaderBoardMenu *local_38;
  
  local_38 = self + 0x438;
  iVar3 = *(int *)(SuperMeatBoy + 0x2c);
  if ((iVar3 != 0xc) && (iVar3 != 0xf)) {
    if (*(int *)(SuperMeatBoy + 0x290) == 9) {
      *(uint32_t *)(self + 0x428) = 2;
      iVar3 = 2;
      goto LAB_004c4f47;
    }
    if ((iVar3 != 9) || (iVar3 = ConvertLevelToLeaderboardID(), iVar3 != -1)) {
      *(uint32_t *)(self + 0x428) = 0;
      iVar3 = 0;
      goto LAB_004c4f47;
    }
  }
  *(uint32_t *)(self + 0x428) = 1;
  iVar3 = 1;
LAB_004c4f47:
  local_40 = self + 0x3c0;
  if (*(int *)(self + 0x440) != 1) {
    local_40 = self + 0x358;
    if (*(int *)(self + 0x440) == 0) {
      local_40 = self + 0x2f0;
    }
  }
  if (iVar3 == 0) {
    Leaderboards__InitializeLeaderboardRead((LeaderBoardRead *)&local_68,1,2);
    puVar1 = local_58;
    uVar2 = ConvertLevelToLeaderboardID();
    *puVar1 = uVar2;
    local_68 = *(uint32_t *)(self + 0x440);
    local_60 = 100;
    local_64 = *(uint32_t *)(self + 0x42c);
    local_48 = TPlayer__GetProfile((TPlayer *)Players__Player);
    local_58[2] = 0;
    local_58[1] = 4;
    if (*(long *)(self + 0x228) != 0) {
      uVar4 = GetLocalizedText(0xf);
      FlashTextField__SetText(*(wchar_t **)(self + 0x228),uVar4);
    }
    if (*(long *)(self + 0x230) != 0) {
      uVar4 = GetLocalizedText(0xe);
      FlashTextField__SetText(*(wchar_t **)(self + 0x230),uVar4);
    }
    if (*(long *)(self + 0x220) != 0) {
      uVar4 = GSMBMenu__GetCurrLevelName(SMBMenu);
      FlashTextField__SetText(*(char **)(self + 0x220),uVar4);
    }
  }
  else {
    Leaderboards__InitializeLeaderboardRead((LeaderBoardRead *)&local_68,1,2);
    if (*(int *)(self + 0x428) == 2) {
      *local_58 = 1;
    }
    else {
      *local_58 = 0;
    }
    local_68 = *(uint32_t *)(self + 0x440);
    local_60 = 100;
    local_64 = *(uint32_t *)(self + 0x42c);
    local_48 = TPlayer__GetProfile((TPlayer *)Players__Player);
    local_58[1] = 7;
    local_58[2] = 6;
    if (*(long *)(self + 0x228) != 0) {
      uVar4 = GetLocalizedText(0xf);
      FlashTextField__SetText(*(wchar_t **)(self + 0x228),uVar4);
    }
    if (*(long *)(self + 0x230) != 0) {
      uVar4 = GetLocalizedText(0xc5);
      FlashTextField__SetText(*(wchar_t **)(self + 0x230),uVar4);
    }
    if (*(long *)(self + 0x220) != 0) {
      uVar4 = GetLocalizedText(0xc6);
      FlashTextField__SetText(*(wchar_t **)(self + 0x220),uVar4);
    }
  }
  pLVar5 = *(LeaderBoardResult **)(self + 0x2a0);
  if (*(void **)(pLVar5 + 8) != (void *)0x0) {
    free(*(void **)(pLVar5 + 8));
    *(uint64_t *)(*(long *)(self + 0x2a0) + 8) = 0;
    *(uint32_t *)(*(long *)(self + 0x2a0) + 0x10) = 0;
    **(uint32_t **)(self + 0x2a0) = 0;
    pLVar5 = *(LeaderBoardResult **)(self + 0x2a0);
  }
  Leaderboards__ReadLeaderboard((LeaderBoardRead *)&local_68,pLVar5);
  *(ushort *)(self + 0x36) = *(ushort *)(self + 0x36) & 0xf | 0x10;
  return;
}

/* ======================================================================
 * SMBLeaderBoardMenu__Activate  (Ghidra `Activate` @ 004c5200)
 * Signature: uint8_t __thiscall Activate(SMBLeaderBoardMenu * self)
 * Class: SMBLeaderBoardMenu
 * Calls: `FlashLibraryInstance__GotoAndStop`, `GetLocalizedText`, `Joystick__AddButtonCallback`, `SMBLeaderBoardShowGamerID`, `SMBLeaderBoardSwitchFilter`, `SMBLeaderboardPageDown`, `SMBLeaderboardPageUp`, `SMBSelectionMenu__Activate`, `TKeyboard__AddKeyCallback`, `TPlayer__GetJoystick`
 * Called by: (none)
 */
/* SMBLeaderBoardMenu__Activate() */

void __thiscall SMBLeaderBoardMenu__Activate(SMBLeaderBoardMenu *self)

{
  uint uVar1;
  uint64_t uVar2;
  Joystick *pJVar3;
  long lVar4;
  
  SMBSelectionMenu__Activate((SMBSelectionMenu *)self);
  *(uint32_t *)(self + 0x440) = 1;
  *(SMBLeaderBoardMenu **)(self + 0x2a0) = self + 0x2d8;
  uVar2 = GetLocalizedText(0x12);
  FlashTextField__SetText(*(wchar_t **)(self + 0x210),uVar2);
  uVar2 = GetLocalizedText(0x13);
  FlashTextField__SetText(*(wchar_t **)(self + 0x218),uVar2);
  *(uint32_t *)(self + 0x42c) = 0;
  *(SMBLeaderBoardMenu **)(self + 0x298) = self + 0x3c0;
  uVar1 = *(uint *)(self + 0x68);
  FlashLibraryInstance__GotoAndStop
            (*(FlashLibraryInstance **)(*(long *)(self + 0x58) + 0x20 + (ulong)uVar1 * 0x28),2);
  lVar4 = (ulong)uVar1 * 0x28 + *(long *)(self + 0x58);
  *(uint32_t *)(*(long *)(lVar4 + 0x10) + 0x20) = *(uint32_t *)(lVar4 + 8);
  *(uint32_t *)(self + 0x430) = 0;
  *(uint32_t *)(self + 0x68) = 0;
  FlashLibraryInstance__GotoAndStop(*(FlashLibraryInstance **)(*(long *)(self + 0x58) + 0x20),1);
  *(uint32_t *)(*(long *)(*(uint32_t **)(self + 0x58) + 4) + 0x20) =
       **(uint32_t **)(self + 0x58);
  pJVar3 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddButtonCallback(pJVar3,0,SMBLeaderBoardShowGamerID,self);
  pJVar3 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddButtonCallback(pJVar3,3,SMBLeaderBoardSwitchFilter,self);
  pJVar3 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddButtonCallback(pJVar3,10,SMBLeaderboardPageUp,self);
  pJVar3 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddButtonCallback(pJVar3,0xb,SMBLeaderboardPageDown,self);
  if (Keyboard != (TKeyboard *)0x0) {
    TKeyboard__AddKeyCallback(Keyboard,0x76,SMBLeaderBoardShowGamerID,self);
    TKeyboard__AddKeyCallback(Keyboard,0x6c,SMBLeaderBoardShowGamerID,self);
    TKeyboard__AddKeyCallback(Keyboard,0x83,SMBLeaderBoardSwitchFilter,self);
  }
  ReadData(self);
  *(ushort *)(self + 0x36) = *(ushort *)(self + 0x36) & 0xf | 0x10;
  return;
}

/* ======================================================================
 * SMBLeaderBoardMenu__LoadData  (Ghidra `LoadData` @ 004c53c0)
 * Signature: uint8_t __thiscall LoadData(SMBLeaderBoardMenu * self, int arg1)
 * Class: SMBLeaderBoardMenu
 * Calls: `FlashLibraryInstance__GotoAndStop`, `GSMBChapterData__IsCharacterUnlocked`
 * Called by: (none)
 */
/* SMBLeaderBoardMenu__LoadData(int) */

void __thiscall SMBLeaderBoardMenu__LoadData(SMBLeaderBoardMenu *self,int arg1)

{
  int iVar1;
  uint32_t *puVar2;
  int iVar3;
  uint *puVar4;
  ulong uVar5;
  long lVar6;
  SMBLeaderBoardMenu *pSVar7;
  long lVar8;
  FlashLibraryInstance *this_00;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint local_3c;
  
  local_3c = *(uint *)(self + 0x430);
  if (arg1 == 1) {
    if (*(int *)(self + 0x434) == 1) {
      puVar4 = *(uint **)(self + 0x2a0);
      local_3c = puVar4[4] - 10;
      *(uint *)(self + 0x430) = local_3c;
    }
    else {
      *(uint32_t *)(self + 0x430) = 0;
      puVar4 = *(uint **)(self + 0x2a0);
      local_3c = 0;
    }
  }
  else {
    puVar4 = *(uint **)(self + 0x2a0);
  }
  if ((puVar4[4] == 0) || (puVar4[4] <= local_3c)) {
    *(uint32_t *)(self + 0x43c) = 0;
    uVar9 = 0;
  }
  else {
    iVar10 = 0;
    pSVar7 = self;
    uVar11 = local_3c;
    do {
      uVar11 = uVar11 + 1;
      lVar6 = (ulong)(local_3c + iVar10) * 0x38;
      lVar8 = lVar6 + *(long *)(puVar4 + 2);
      if (*(int *)(lVar8 + 0x18) == 0) {
        FlashTextField__SetText(*(char **)(pSVar7 + 0xd0),lVar8 + 8);
        FlashTextField__SetText(*(wchar_t **)(pSVar7 + 0x170),&DAT_005c5d74 /* R:6.305843089461677e-44f */);
        FlashTextField__SetText(*(wchar_t **)(pSVar7 + 0x120),&DAT_005c5d70 /* R:6.305843089461677e-44f */);
        FlashTextField__SetText(*(wchar_t **)(pSVar7 + 0x1c0),&DAT_005c5d70 /* R:6.305843089461677e-44f */);
        FlashLibraryInstance__GotoAndStop(*(FlashLibraryInstance **)(pSVar7 + 0x240),0x31);
      }
      else if (*(int *)(self + 0x428) == 0) {
        FlashTextField__SetText(*(char **)(pSVar7 + 0xd0),lVar8 + 8);
        FlashTextField__SetText
                  (*(wchar_t **)(pSVar7 + 0x170),&DAT_005c5d60 /* R:5.184804318001823e-44f */,
                   (ulong)*(uint *)(*(long *)(*(long *)(self + 0x2a0) + 8) + 0x18 + lVar6));
        FlashTextField__SetText
                  (*(wchar_t **)(pSVar7 + 0x120),
                   (double)((float)*(int *)(*(long *)(*(long *)(*(long *)(self + 0x2a0) + 8) + 0x28
                                                     + lVar6) + 0x20) * DAT_005c01d0 /* R:0.0010000000474974513f */),&DAT_005c07c4 /* R:5.184804318001823e-44f */)
        ;
        FlashTextField__SetText(*(wchar_t **)(pSVar7 + 0x1c0),&DAT_005c6634 /* R:0.0f */);
        iVar1 = *(int *)(*(long *)(*(long *)(*(long *)(self + 0x2a0) + 8) + 0x28 + lVar6) + 8);
        iVar3 = GSMBChapterData__IsCharacterUnlocked(SMBChapterData,iVar1);
        if (iVar3 == 1) {
          if (iVar1 != 5) goto LAB_004c5978;
          FlashLibraryInstance__GotoAndStop(*(FlashLibraryInstance **)(pSVar7 + 0x240),1);
        }
        else if (iVar1 == 6) {
LAB_004c5978:
          FlashLibraryInstance__GotoAndStop(*(FlashLibraryInstance **)(pSVar7 + 0x240),iVar1 + 1);
        }
        else {
          FlashLibraryInstance__GotoAndStop(*(FlashLibraryInstance **)(pSVar7 + 0x240),0x32);
        }
      }
      else {
        FlashTextField__SetText(*(char **)(pSVar7 + 0xd0),lVar8 + 8);
        FlashTextField__SetText
                  (*(wchar_t **)(pSVar7 + 0x170),&DAT_005c5d60 /* R:5.184804318001823e-44f */,
                   (ulong)*(uint *)(*(long *)(*(long *)(self + 0x2a0) + 8) + 0x18 + lVar6));
        FlashTextField__SetText
                  (*(wchar_t **)(pSVar7 + 0x120),
                   (double)((float)*(int *)(*(long *)(*(long *)(*(long *)(self + 0x2a0) + 8) + 0x28
                                                     + lVar6) + 8) * DAT_005c01d0 /* R:0.0010000000474974513f */),&DAT_005c07c4 /* R:5.184804318001823e-44f */);
        FlashTextField__SetText
                  (*(wchar_t **)(pSVar7 + 0x1c0),&DAT_005c6660 /* R:5.184804318001823e-44f */,
                   (ulong)*(uint *)(*(long *)(*(long *)(*(long *)(self + 0x2a0) + 8) + 0x28 + lVar6)
                                   + 0x20));
        FlashLibraryInstance__GotoAndStop(*(FlashLibraryInstance **)(pSVar7 + 0x240),0x31);
      }
      puVar4 = *(uint **)(self + 0x2a0);
      uVar9 = iVar10 + 1;
      *(uint64_t *)(pSVar7 + 0x80) = *(uint64_t *)(*(long *)(puVar4 + 2) + lVar6);
      if ((puVar4[4] <= uVar9) || (9 < uVar9)) break;
      iVar10 = iVar10 + 1;
      pSVar7 = pSVar7 + 8;
    } while (uVar11 < puVar4[4]);
    *(uint *)(self + 0x43c) = uVar9;
    if (9 < uVar9) goto LAB_004c5620;
  }
  do {
    uVar5 = (ulong)uVar9;
    uVar9 = uVar9 + 1;
    FlashTextField__SetText(*(wchar_t **)(self + uVar5 * 8 + 0xd0),&DAT_005c6634 /* R:0.0f */);
    FlashTextField__SetText(*(wchar_t **)(self + uVar5 * 8 + 0x170),&DAT_005c6634 /* R:0.0f */);
    FlashTextField__SetText(*(wchar_t **)(self + uVar5 * 8 + 0x120),&DAT_005c6634 /* R:0.0f */);
    FlashTextField__SetText(*(wchar_t **)(self + uVar5 * 8 + 0x1c0),&DAT_005c6634 /* R:0.0f */);
    FlashLibraryInstance__GotoAndStop(*(FlashLibraryInstance **)(self + uVar5 * 8 + 0x240),0x31);
    *(uint64_t *)(self + uVar5 * 8 + 0x80) = 0;
    FlashLibraryInstance__GotoAndStop
              (*(FlashLibraryInstance **)(*(long *)(self + 0x58) + 0x20 + uVar5 * 0x28),2);
    lVar6 = uVar5 * 0x28 + *(long *)(self + 0x58);
    *(uint32_t *)(*(long *)(lVar6 + 0x10) + 0x20) = *(uint32_t *)(lVar6 + 8);
  } while (uVar9 < 10);
  puVar4 = *(uint **)(self + 0x2a0);
LAB_004c5620:
  FlashTextField__SetText(*(char **)(self + 0x238),&DAT_005c8bf9 /* R:u32=1996515621 */,(ulong)*puVar4);
  if (*(int *)(*(long *)(self + 0x2a0) + 0x10) == 0) {
    return;
  }
  puVar2 = *(uint32_t **)(self + 0x58);
  if (*(int *)(self + 0x68) == 0) {
    *(uint32_t *)(*(long *)(puVar2 + 4) + 0x20) = *puVar2;
    *(uint32_t *)(*(long *)(*(long *)(self + 0x58) + 0x20) + 0x20) =
         *(uint32_t *)(*(long *)(self + 0x58) + 0x18);
    FlashLibraryInstance__GotoAndStop(*(FlashLibraryInstance **)(*(long *)(self + 0x58) + 0x20),1);
    iVar10 = *(int *)(self + 0x68);
    lVar6 = *(long *)(self + 0x58);
    lVar8 = *(long *)(lVar6 + 0x38);
  }
  else {
    *(uint32_t *)(*(long *)(puVar2 + 4) + 0x20) = puVar2[2];
    FlashLibraryInstance__GotoAndStop(*(FlashLibraryInstance **)(*(long *)(self + 0x58) + 0x20),2);
    iVar10 = *(int *)(self + 0x68);
    lVar6 = *(long *)(self + 0x58);
    lVar8 = *(long *)(lVar6 + 0x38);
  }
  if (iVar10 == 1) {
    *(uint32_t *)(lVar8 + 0x20) = *(uint32_t *)(lVar6 + 0x28);
    *(uint32_t *)(*(long *)(*(long *)(self + 0x58) + 0x48) + 0x20) =
         *(uint32_t *)(*(long *)(self + 0x58) + 0x40);
    FlashLibraryInstance__GotoAndStop(*(FlashLibraryInstance **)(*(long *)(self + 0x58) + 0x48),1);
    iVar10 = *(int *)(self + 0x68);
    lVar6 = *(long *)(self + 0x58);
    lVar8 = *(long *)(lVar6 + 0x60);
  }
  else {
    *(uint32_t *)(lVar8 + 0x20) = *(uint32_t *)(lVar6 + 0x30);
    FlashLibraryInstance__GotoAndStop(*(FlashLibraryInstance **)(*(long *)(self + 0x58) + 0x48),2);
    iVar10 = *(int *)(self + 0x68);
    lVar6 = *(long *)(self + 0x58);
    lVar8 = *(long *)(lVar6 + 0x60);
  }
  if (iVar10 == 2) {
    *(uint32_t *)(lVar8 + 0x20) = *(uint32_t *)(lVar6 + 0x50);
    *(uint32_t *)(*(long *)(*(long *)(self + 0x58) + 0x70) + 0x20) =
         *(uint32_t *)(*(long *)(self + 0x58) + 0x68);
    FlashLibraryInstance__GotoAndStop(*(FlashLibraryInstance **)(*(long *)(self + 0x58) + 0x70),1);
  }
  else {
    *(uint32_t *)(lVar8 + 0x20) = *(uint32_t *)(lVar6 + 0x58);
    FlashLibraryInstance__GotoAndStop(*(FlashLibraryInstance **)(*(long *)(self + 0x58) + 0x70),2);
  }
  lVar6 = *(long *)(self + 0x58);
  if (*(int *)(self + 0x68) == 3) {
    *(uint32_t *)(*(long *)(lVar6 + 0x88) + 0x20) = *(uint32_t *)(lVar6 + 0x78);
    *(uint32_t *)(*(long *)(*(long *)(self + 0x58) + 0x98) + 0x20) =
         *(uint32_t *)(*(long *)(self + 0x58) + 0x90);
    FlashLibraryInstance__GotoAndStop(*(FlashLibraryInstance **)(*(long *)(self + 0x58) + 0x98),1);
  }
  else {
    *(uint32_t *)(*(long *)(lVar6 + 0x88) + 0x20) = *(uint32_t *)(lVar6 + 0x80);
    FlashLibraryInstance__GotoAndStop(*(FlashLibraryInstance **)(*(long *)(self + 0x58) + 0x98),2);
  }
  lVar6 = *(long *)(self + 0x58);
  if (*(int *)(self + 0x68) == 4) {
    *(uint32_t *)(*(long *)(lVar6 + 0xb0) + 0x20) = *(uint32_t *)(lVar6 + 0xa0);
    *(uint32_t *)(*(long *)(*(long *)(self + 0x58) + 0xc0) + 0x20) =
         *(uint32_t *)(*(long *)(self + 0x58) + 0xb8);
    FlashLibraryInstance__GotoAndStop(*(FlashLibraryInstance **)(*(long *)(self + 0x58) + 0xc0),1);
  }
  else {
    *(uint32_t *)(*(long *)(lVar6 + 0xb0) + 0x20) = *(uint32_t *)(lVar6 + 0xa8);
    FlashLibraryInstance__GotoAndStop(*(FlashLibraryInstance **)(*(long *)(self + 0x58) + 0xc0),2);
  }
  lVar6 = *(long *)(self + 0x58);
  if (*(int *)(self + 0x68) == 5) {
    *(uint32_t *)(*(long *)(lVar6 + 0xd8) + 0x20) = *(uint32_t *)(lVar6 + 200);
    *(uint32_t *)(*(long *)(*(long *)(self + 0x58) + 0xe8) + 0x20) =
         *(uint32_t *)(*(long *)(self + 0x58) + 0xe0);
    FlashLibraryInstance__GotoAndStop(*(FlashLibraryInstance **)(*(long *)(self + 0x58) + 0xe8),1);
  }
  else {
    *(uint32_t *)(*(long *)(lVar6 + 0xd8) + 0x20) = *(uint32_t *)(lVar6 + 0xd0);
    FlashLibraryInstance__GotoAndStop(*(FlashLibraryInstance **)(*(long *)(self + 0x58) + 0xe8),2);
  }
  lVar6 = *(long *)(self + 0x58);
  if (*(int *)(self + 0x68) == 6) {
    *(uint32_t *)(*(long *)(lVar6 + 0x100) + 0x20) = *(uint32_t *)(lVar6 + 0xf0);
    *(uint32_t *)(*(long *)(*(long *)(self + 0x58) + 0x110) + 0x20) =
         *(uint32_t *)(*(long *)(self + 0x58) + 0x108);
    FlashLibraryInstance__GotoAndStop(*(FlashLibraryInstance **)(*(long *)(self + 0x58) + 0x110),1);
  }
  else {
    *(uint32_t *)(*(long *)(lVar6 + 0x100) + 0x20) = *(uint32_t *)(lVar6 + 0xf8);
    FlashLibraryInstance__GotoAndStop(*(FlashLibraryInstance **)(*(long *)(self + 0x58) + 0x110),2);
  }
  lVar6 = *(long *)(self + 0x58);
  if (*(int *)(self + 0x68) == 7) {
    *(uint32_t *)(*(long *)(lVar6 + 0x128) + 0x20) = *(uint32_t *)(lVar6 + 0x118);
    *(uint32_t *)(*(long *)(*(long *)(self + 0x58) + 0x138) + 0x20) =
         *(uint32_t *)(*(long *)(self + 0x58) + 0x130);
    FlashLibraryInstance__GotoAndStop(*(FlashLibraryInstance **)(*(long *)(self + 0x58) + 0x138),1);
  }
  else {
    *(uint32_t *)(*(long *)(lVar6 + 0x128) + 0x20) = *(uint32_t *)(lVar6 + 0x120);
    FlashLibraryInstance__GotoAndStop(*(FlashLibraryInstance **)(*(long *)(self + 0x58) + 0x138),2);
  }
  lVar6 = *(long *)(self + 0x58);
  if (*(int *)(self + 0x68) == 8) {
    *(uint32_t *)(*(long *)(lVar6 + 0x150) + 0x20) = *(uint32_t *)(lVar6 + 0x140);
    *(uint32_t *)(*(long *)(*(long *)(self + 0x58) + 0x160) + 0x20) =
         *(uint32_t *)(*(long *)(self + 0x58) + 0x158);
    FlashLibraryInstance__GotoAndStop(*(FlashLibraryInstance **)(*(long *)(self + 0x58) + 0x160),1);
  }
  else {
    *(uint32_t *)(*(long *)(lVar6 + 0x150) + 0x20) = *(uint32_t *)(lVar6 + 0x148);
    FlashLibraryInstance__GotoAndStop(*(FlashLibraryInstance **)(*(long *)(self + 0x58) + 0x160),2);
  }
  lVar6 = *(long *)(self + 0x58);
  if (*(int *)(self + 0x68) == 9) {
    iVar10 = 1;
    *(uint32_t *)(*(long *)(lVar6 + 0x178) + 0x20) = *(uint32_t *)(lVar6 + 0x168);
    *(uint32_t *)(*(long *)(*(long *)(self + 0x58) + 0x188) + 0x20) =
         *(uint32_t *)(*(long *)(self + 0x58) + 0x180);
    this_00 = *(FlashLibraryInstance **)(*(long *)(self + 0x58) + 0x188);
  }
  else {
    iVar10 = 2;
    *(uint32_t *)(*(long *)(lVar6 + 0x178) + 0x20) = *(uint32_t *)(lVar6 + 0x170);
    this_00 = *(FlashLibraryInstance **)(*(long *)(self + 0x58) + 0x188);
  }
  FlashLibraryInstance__GotoAndStop(this_00,iVar10);
  return;
}

/* ======================================================================
 * SMBLeaderBoardMenu__DecrementSelection  (Ghidra `DecrementSelection` @ 004c5c50)
 * Signature: uint8_t __thiscall DecrementSelection(SMBLeaderBoardMenu * self)
 * Class: SMBLeaderBoardMenu
 * Calls: `FlashLibraryInstance__GotoAndStop`
 * Called by: (none)
 */
/* SMBLeaderBoardMenu__DecrementSelection() */

void __thiscall SMBLeaderBoardMenu__DecrementSelection(SMBLeaderBoardMenu *self)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  long lVar6;
  uint32_t *puVar7;
  ulong uVar5;
  
  if ((*(int *)(self + 0x6c) != 0) && ((*(ushort *)(self + 0x36) & 0xfff0) != 0x10)) {
    uVar3 = *(uint *)(self + 0x68);
    FlashLibraryInstance__GotoAndStop
              (*(FlashLibraryInstance **)(*(long *)(self + 0x58) + 0x20 + (ulong)uVar3 * 0x28),2);
    lVar6 = (ulong)uVar3 * 0x28 + *(long *)(self + 0x58);
    *(uint32_t *)(*(long *)(lVar6 + 0x10) + 0x20) = *(uint32_t *)(lVar6 + 8);
    uVar3 = *(int *)(self + 0x68) - 1;
    uVar5 = (ulong)uVar3;
    *(uint *)(self + 0x68) = uVar3;
    if ((int)uVar3 < 0) {
      *(int *)(self + 0x68) = *(int *)(self + 0x70) + -1;
      iVar1 = *(int *)(self + 0x430);
      *(int *)(self + 0x430) = iVar1 + -10;
      if (iVar1 + -10 < 0) {
        iVar2 = *(int *)(self + 0x42c);
        iVar1 = iVar2 + -100;
        *(int *)(self + 0x42c) = iVar1;
        if (*(int *)(self + 0x440) == 0) {
          iVar4 = 1;
          if (0 < iVar1) {
            iVar4 = iVar1;
          }
          *(int *)(self + 0x42c) = iVar4;
        }
        else {
          iVar4 = 0;
          if (-1 < iVar1) {
            iVar4 = iVar1;
          }
          *(int *)(self + 0x42c) = iVar4;
        }
        *(uint32_t *)(self + 0x434) = 1;
        if (iVar2 == iVar4) {
          *(uint32_t *)(self + 0x430) = 0;
          *(uint32_t *)(self + 0x68) = 0;
          uVar5 = 0;
        }
        else {
          ReadData(self);
          uVar5 = (ulong)*(uint *)(self + 0x68);
        }
      }
      else {
        LoadData(self,0);
        uVar5 = (ulong)*(uint *)(self + 0x68);
      }
    }
    if ((uint)uVar5 < *(uint *)(*(long *)(self + 0x2a0) + 0x10)) {
      FlashLibraryInstance__GotoAndStop
                (*(FlashLibraryInstance **)(*(long *)(self + 0x58) + 0x20 + uVar5 * 0x28),1);
      puVar7 = (uint32_t *)(uVar5 * 0x28 + *(long *)(self + 0x58));
      *(uint32_t *)(*(long *)(puVar7 + 4) + 0x20) = *puVar7;
      return;
    }
  }
  return;
}

/* ======================================================================
 * SMBLeaderBoardMenu__IncrementSelection  (Ghidra `IncrementSelection` @ 004c5dc0)
 * Signature: uint8_t __thiscall IncrementSelection(SMBLeaderBoardMenu * self)
 * Class: SMBLeaderBoardMenu
 * Calls: `FlashLibraryInstance__GotoAndStop`
 * Called by: (none)
 */
/* SMBLeaderBoardMenu__IncrementSelection() */

void __thiscall SMBLeaderBoardMenu__IncrementSelection(SMBLeaderBoardMenu *self)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  uint32_t *puVar5;
  
  if ((*(int *)(self + 0x6c) != 0) && ((*(ushort *)(self + 0x36) & 0xfff0) != 0x10)) {
    uVar1 = *(uint *)(self + 0x68);
    FlashLibraryInstance__GotoAndStop
              (*(FlashLibraryInstance **)(*(long *)(self + 0x58) + 0x20 + (ulong)uVar1 * 0x28),2);
    lVar4 = (ulong)uVar1 * 0x28 + *(long *)(self + 0x58);
    *(uint32_t *)(*(long *)(lVar4 + 0x10) + 0x20) = *(uint32_t *)(lVar4 + 8);
    uVar1 = *(uint *)(self + 0x68);
    iVar3 = *(int *)(self + 0x43c);
    if ((int)uVar1 < iVar3) {
      uVar1 = uVar1 + 1;
      *(uint *)(self + 0x68) = uVar1;
    }
    uVar2 = (ulong)uVar1;
    if (9 < (int)uVar1) {
      iVar3 = *(int *)(self + 0x430);
      *(uint32_t *)(self + 0x68) = 0;
      *(uint *)(self + 0x430) = iVar3 + 10U;
      if (iVar3 + 10U < 100) {
        LoadData(self,0);
        uVar2 = (ulong)*(uint *)(self + 0x68);
        iVar3 = *(int *)(self + 0x43c);
      }
      else {
        *(int *)(self + 0x42c) = *(int *)(self + 0x42c) + 100;
        *(uint32_t *)(self + 0x434) = 0;
        ReadData(self);
        uVar2 = (ulong)*(uint *)(self + 0x68);
        iVar3 = *(int *)(self + 0x43c);
      }
    }
    if (iVar3 <= (int)uVar2) {
      uVar1 = (int)uVar2 - 1;
      uVar2 = (ulong)uVar1;
      *(uint *)(self + 0x68) = uVar1;
      if ((int)uVar1 < 0) {
        *(uint32_t *)(self + 0x68) = 0;
        uVar2 = 0;
      }
    }
    if ((uint)uVar2 < *(uint *)(*(long *)(self + 0x2a0) + 0x10)) {
      FlashLibraryInstance__GotoAndStop
                (*(FlashLibraryInstance **)(*(long *)(self + 0x58) + 0x20 + uVar2 * 0x28),1);
      puVar5 = (uint32_t *)(uVar2 * 0x28 + *(long *)(self + 0x58));
      *(uint32_t *)(*(long *)(puVar5 + 4) + 0x20) = *puVar5;
      return;
    }
  }
  return;
}

/* ======================================================================
 * SMBLeaderBoardMenu__Update  (Ghidra `Update` @ 004c5ef0)
 * Signature: uint8_t __thiscall Update(SMBLeaderBoardMenu * self)
 * Class: SMBLeaderBoardMenu
 * Calls: `SMBSelectionMenu__Update`, `SyncEvent__CheckStatus`
 * Called by: (none)
 */
/* SMBLeaderBoardMenu__Update() */

void __thiscall SMBLeaderBoardMenu__Update(SMBLeaderBoardMenu *self)

{
  int iVar1;
  
  if ((*(ushort *)(self + 0x34) & 0x3ff) == 0) {
    return;
  }
  if ((*(ushort *)(self + 0x36) & 0xfff0) != 0x10) goto LAB_004c5f09;
  if (*(SyncEvent **)(self + 0x298) == (SyncEvent *)0x0) {
LAB_004c5f36:
    if (*(int *)(self + 0x438) != 1) goto LAB_004c5f09;
  }
  else {
    iVar1 = SyncEvent__CheckStatus(*(SyncEvent **)(self + 0x298));
    if (iVar1 != 1) goto LAB_004c5f36;
  }
  if (*(int *)(*(long *)(self + 0x2a0) + 0x14) == 1) {
    *(ushort *)(self + 0x36) = *(ushort *)(self + 0x36) & 0xf;
    LoadData(self,1);
  }
LAB_004c5f09:
  SMBSelectionMenu__Update();
  return;
}

/* ======================================================================
 * SMBLeaderBoardMenu__SetRowAsSelected  (Ghidra `SetRowAsSelected` @ 004c5f60)
 * Signature: uint8_t __thiscall SetRowAsSelected(SMBLeaderBoardMenu * self, uint arg1)
 * Class: SMBLeaderBoardMenu
 * Calls: `FlashLibraryInstance__GotoAndStop`
 * Called by: (none)
 */
/* SMBLeaderBoardMenu__SetRowAsSelected(unsigned int) */

void __thiscall SMBLeaderBoardMenu__SetRowAsSelected(SMBLeaderBoardMenu *self,uint arg1)

{
  uint32_t *puVar1;
  
  FlashLibraryInstance__GotoAndStop
            (*(FlashLibraryInstance **)(*(long *)(self + 0x58) + 0x20 + (ulong)arg1 * 0x28),1);
  puVar1 = (uint32_t *)((ulong)arg1 * 0x28 + *(long *)(self + 0x58));
  *(uint32_t *)(*(long *)(puVar1 + 4) + 0x20) = *puVar1;
  return;
}

/* ======================================================================
 * SMBLeaderBoardMenu__SetRowAsUnselected  (Ghidra `SetRowAsUnselected` @ 004c5fb0)
 * Signature: uint8_t __thiscall SetRowAsUnselected(SMBLeaderBoardMenu * self, uint arg1)
 * Class: SMBLeaderBoardMenu
 * Calls: `FlashLibraryInstance__GotoAndStop`
 * Called by: (none)
 */
/* SMBLeaderBoardMenu__SetRowAsUnselected(unsigned int) */

void __thiscall SMBLeaderBoardMenu__SetRowAsUnselected(SMBLeaderBoardMenu *self,uint arg1)

{
  long lVar1;
  
  FlashLibraryInstance__GotoAndStop
            (*(FlashLibraryInstance **)(*(long *)(self + 0x58) + 0x20 + (ulong)arg1 * 0x28),2);
  lVar1 = (ulong)arg1 * 0x28 + *(long *)(self + 0x58);
  *(uint32_t *)(*(long *)(lVar1 + 0x10) + 0x20) = *(uint32_t *)(lVar1 + 8);
  return;
}

/* ======================================================================
 * SMBLeaderBoardMenu__ShowSelectedPlayerProps  (Ghidra `ShowSelectedPlayerProps` @ 004c6200)
 * Signature: uint8_t __thiscall ShowSelectedPlayerProps(SMBLeaderBoardMenu * self)
 * Class: SMBLeaderBoardMenu
 * Calls: `TPlayer__GetProfile`
 * Called by: (none)
 */
/* SMBLeaderBoardMenu__ShowSelectedPlayerProps() */

void __thiscall SMBLeaderBoardMenu__ShowSelectedPlayerProps(SMBLeaderBoardMenu *self)

{
  long lVar1;
  UserProfile *pUVar2;
  
  lVar1 = *(long *)(self + (long)*(int *)(self + 0x68) * 8 + 0x80);
  pUVar2 = (UserProfile *)TPlayer__GetProfile((TPlayer *)Players__Player);
  Leaderboards__ShowGamerInfo(pUVar2,lVar1);
  return;
}

/* ======================================================================
 * SMBLeaderBoardMenu__PageUp  (Ghidra `PageUp` @ 004c6230)
 * Signature: uint8_t __thiscall PageUp(SMBLeaderBoardMenu * self)
 * Class: SMBLeaderBoardMenu
 * Calls: (none)
 * Called by: (none)
 */
/* SMBLeaderBoardMenu__PageUp() */

void __thiscall SMBLeaderBoardMenu__PageUp(SMBLeaderBoardMenu *self)

{
  (**(code **)(*(long *)self + 0x50))();
  (**(code **)(*(long *)self + 0x50))(self);
  (**(code **)(*(long *)self + 0x50))(self);
  (**(code **)(*(long *)self + 0x50))(self);
  (**(code **)(*(long *)self + 0x50))(self);
  (**(code **)(*(long *)self + 0x50))(self);
  (**(code **)(*(long *)self + 0x50))(self);
  (**(code **)(*(long *)self + 0x50))(self);
  (**(code **)(*(long *)self + 0x50))(self);
                    /* WARNING: Could not recover jumptable at 0x004c628d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)self + 0x50))(self);
  return;
}

/* ======================================================================
 * SMBLeaderBoardMenu__PageDown  (Ghidra `PageDown` @ 004c6290)
 * Signature: uint8_t __thiscall PageDown(SMBLeaderBoardMenu * self)
 * Class: SMBLeaderBoardMenu
 * Calls: (none)
 * Called by: (none)
 */
/* SMBLeaderBoardMenu__PageDown() */

void __thiscall SMBLeaderBoardMenu__PageDown(SMBLeaderBoardMenu *self)

{
  (**(code **)(*(long *)self + 0x48))();
  (**(code **)(*(long *)self + 0x48))(self);
  (**(code **)(*(long *)self + 0x48))(self);
  (**(code **)(*(long *)self + 0x48))(self);
  (**(code **)(*(long *)self + 0x48))(self);
  (**(code **)(*(long *)self + 0x48))(self);
  (**(code **)(*(long *)self + 0x48))(self);
  (**(code **)(*(long *)self + 0x48))(self);
  (**(code **)(*(long *)self + 0x48))(self);
                    /* WARNING: Could not recover jumptable at 0x004c62ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)self + 0x48))(self);
  return;
}
