/* src/game/classes/SMBCreditRoll.c — 3 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "SMBCreditRoll.h"

/* ======================================================================
 * SMBCreditRoll__SMBCreditRoll  (Ghidra `SMBCreditRoll` @ 0049ccf0)
 * Signature: uint8_t __thiscall SMBCreditRoll(SMBCreditRoll * self, int arg1)
 * Class: SMBCreditRoll
 * Calls: `FlashAnimationLibrary__FlashAnimationLibrary__00576680`, `FlashAnimationLibrary__GetMovieClip__005731d0`, `FlashAnimationLibrary__GetTextField`, `FormatResourcePath`, `operator_new`
 * Called by: `FinalBoss__Update`
 */
/* WARNING: Removing unreachable block (ram,0x0049d138) */
/* SMBCreditRoll__SMBCreditRoll(int) */

void __thiscall SMBCreditRoll__SMBCreditRoll(SMBCreditRoll *self, int arg1)

{
  int *piVar1;
  int iVar2;
  uint8_t *puVar3;
  char *pcVar4;
  FlashAnimationLibrary *pFVar5;
  uint64_t uVar6;
  uint8_t *puVar7;
  uint8_t *local_38[2];

  local_38[0] = &DAT_008184c8 /* R:0.00016803004837129265f */;
  if (arg1 == 1) {
    pcVar4 = (char *)FormatResourcePath("/Intro/credits.am", local_38);
    pFVar5 = operator_new(0xb0);
    /* try { // try from 0049d0a0 to 0049d0a4 has its CatchHandler @ 0049d148 */
    FlashAnimationLibrary__FlashAnimationLibrary__00576680(pFVar5, pcVar4);
  } else {
    /* try { // try from 0049cd1c to 0049cd2d has its CatchHandler @ 0049d143 */
    pcVar4 = (char *)FormatResourcePath("/Intro/credits2.am", local_38);
    pFVar5 = operator_new(0xb0);
    /* try { // try from 0049cd37 to 0049cd3b has its CatchHandler @ 0049d11a */
    FlashAnimationLibrary__FlashAnimationLibrary__00576680(pFVar5, pcVar4);
  }
  *(FlashAnimationLibrary **)self = pFVar5;
  /* try { // try from 0049cd48 to 0049d096 has its CatchHandler @ 0049d143 */
  uVar6 = FlashAnimationLibrary__GetMovieClip__005731d0(pFVar5, "intro");
  pFVar5 = *(FlashAnimationLibrary **)self;
  *(uint64_t *)(self + 8) = uVar6;
  puVar7 = strBefore;
  pcVar4 = (char *)FlashAnimationLibrary__GetTextField(pFVar5, "before");
  if (pcVar4 != (char *)0x0) {
    FlashTextField__SetText(pcVar4, puVar7);
  }
  puVar7 = strAfter;
  pcVar4 = (char *)FlashAnimationLibrary__GetTextField(pFVar5, "after");
  if (pcVar4 != (char *)0x0) {
    FlashTextField__SetText(pcVar4, puVar7);
  }
  puVar7 = strTitle;
  pcVar4 = (char *)FlashAnimationLibrary__GetTextField(pFVar5, "title");
  if (pcVar4 != (char *)0x0) {
    FlashTextField__SetText(pcVar4, puVar7);
  }
  puVar7 = strTitle2;
  pcVar4 = (char *)FlashAnimationLibrary__GetTextField(pFVar5, "title2");
  if (pcVar4 != (char *)0x0) {
    FlashTextField__SetText(pcVar4, puVar7);
  }
  puVar7 = strTitle3;
  pcVar4 = (char *)FlashAnimationLibrary__GetTextField(pFVar5, "title3");
  if (pcVar4 != (char *)0x0) {
    FlashTextField__SetText(pcVar4, puVar7);
  }
  puVar7 = strcr1;
  pcVar4 = (char *)FlashAnimationLibrary__GetTextField(pFVar5, "cr1");
  if (pcVar4 != (char *)0x0) {
    FlashTextField__SetText(pcVar4, puVar7);
  }
  puVar7 = strcr2;
  pcVar4 = (char *)FlashAnimationLibrary__GetTextField(pFVar5, "ch2");
  if (pcVar4 != (char *)0x0) {
    FlashTextField__SetText(pcVar4, puVar7);
  }
  puVar7 = strcr3;
  pcVar4 = (char *)FlashAnimationLibrary__GetTextField(pFVar5, "cr3");
  if (pcVar4 != (char *)0x0) {
    FlashTextField__SetText(pcVar4, puVar7);
  }
  puVar7 = strcr4;
  pcVar4 = (char *)FlashAnimationLibrary__GetTextField(pFVar5, "cr4");
  if (pcVar4 != (char *)0x0) {
    FlashTextField__SetText(pcVar4, puVar7);
  }
  puVar7 = strcr5;
  pcVar4 = (char *)FlashAnimationLibrary__GetTextField(pFVar5, "cr5");
  if (pcVar4 != (char *)0x0) {
    FlashTextField__SetText(pcVar4, puVar7);
  }
  puVar7 = strcr6;
  pcVar4 = (char *)FlashAnimationLibrary__GetTextField(pFVar5, "cr6");
  if (pcVar4 != (char *)0x0) {
    FlashTextField__SetText(pcVar4, puVar7);
  }
  puVar7 = cr7;
  pcVar4 = (char *)FlashAnimationLibrary__GetTextField(pFVar5, "cr7");
  if (pcVar4 != (char *)0x0) {
    FlashTextField__SetText(pcVar4, puVar7);
  }
  puVar7 = cr8;
  pcVar4 = (char *)FlashAnimationLibrary__GetTextField(pFVar5, "cr8");
  if (pcVar4 != (char *)0x0) {
    FlashTextField__SetText(pcVar4, puVar7);
  }
  puVar7 = cr9;
  pcVar4 = (char *)FlashAnimationLibrary__GetTextField(pFVar5, "cr9");
  if (pcVar4 != (char *)0x0) {
    FlashTextField__SetText(pcVar4, puVar7);
  }
  puVar7 = cr10;
  pcVar4 = (char *)FlashAnimationLibrary__GetTextField(pFVar5, "cr10");
  if (pcVar4 != (char *)0x0) {
    FlashTextField__SetText(pcVar4, puVar7);
  }
  puVar7 = cr11;
  pcVar4 = (char *)FlashAnimationLibrary__GetTextField(pFVar5, "cr11");
  if (pcVar4 != (char *)0x0) {
    FlashTextField__SetText(pcVar4, puVar7);
  }
  puVar7 = cr12;
  pcVar4 = (char *)FlashAnimationLibrary__GetTextField(pFVar5, "cr12");
  if (pcVar4 != (char *)0x0) {
    FlashTextField__SetText(pcVar4, puVar7);
  }
  puVar7 = cr13;
  pcVar4 = (char *)FlashAnimationLibrary__GetTextField(pFVar5, "cr13");
  if (pcVar4 != (char *)0x0) {
    FlashTextField__SetText(pcVar4, puVar7);
  }
  puVar7 = strTitle4;
  pcVar4 = (char *)FlashAnimationLibrary__GetTextField(pFVar5, "title4");
  if (pcVar4 != (char *)0x0) {
    FlashTextField__SetText(pcVar4, puVar7);
  }
  puVar3 = strend;
  puVar7 = strendalt;
  if (arg1 == 1) {
    /* try { // try from 0049d0c0 to 0049d0eb has its CatchHandler @ 0049d143 */
    pcVar4 = (char *)FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)self, "end");
    if (pcVar4 != (char *)0x0) {
      FlashTextField__SetText(pcVar4, puVar3);
    }
    puVar7 = strend2;
    pcVar4 = (char *)FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)self, "end2");
  } else {
    pcVar4 = (char *)FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)self, "end");
  }
  if (pcVar4 != (char *)0x0) {
    FlashTextField__SetText(pcVar4, puVar7);
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
  return;
}

/* ======================================================================
 * SMBCreditRoll__SMBCreditRoll__0049d150  (Ghidra `~SMBCreditRoll` @ 0049d150)
 * Signature: uint8_t __thiscall ~SMBCreditRoll(SMBCreditRoll * self)
 * Class: SMBCreditRoll
 * Calls: `FlashAnimationLibrary__FlashAnimationLibrary`, `operator_delete`
 * Called by: `FinalBoss__FinalBoss`
 */
/* SMBCreditRoll__SMBCreditRoll__0049d150() */

void __thiscall SMBCreditRoll__SMBCreditRoll__0049d150(SMBCreditRoll *self)

{
  FlashAnimationLibrary *this_00;

  if (*(long **)(self + 8) != (long *)0x0) {
    (**(code **)(**(long **)(self + 8) + 8))();
  }
  this_00 = *(FlashAnimationLibrary **)self;
  *(uint64_t *)(self + 8) = 0;
  if (this_00 != (FlashAnimationLibrary *)0x0) {
    FlashAnimationLibrary__FlashAnimationLibrary(this_00);
    operator_delete(this_00);
  }
  *(uint64_t *)self = 0;
  return;
}

/* ======================================================================
 * SMBCreditRoll__StartCredits  (Ghidra `StartCredits` @ 0049d4b0)
 * Signature: uint8_t __thiscall StartCredits(SMBCreditRoll * self, _func_void_void_ptr_int_int * arg1)
 * Class: SMBCreditRoll
 * Calls: `GSMBCutSceneManager__PlayCutScene`
 * Called by: `FinalBoss__PlayCredits`, `SMBFinalBossPhaseTwoFinished`
 */
/* SMBCreditRoll__StartCredits(void (*)(void*, int, int)) */

void __thiscall SMBCreditRoll__StartCredits(SMBCreditRoll *self, _func_void_void_ptr_int_int *arg1)

{
  uint32_t local_58;
  uint32_t local_54;
  uint32_t local_50;
  uint64_t local_48;
  _func_void_void_ptr_int_int *local_40;
  SMBCreditRoll *local_38;
  uint64_t local_30;
  uint64_t local_28;
  uint32_t local_20;
  uint32_t local_1c;
  uint32_t local_18;

  local_48 = *(uint64_t *)(self + 8);
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 1;
  local_54 = 0x43f00000;
  local_58 = 0x44200000;
  local_50 = 1;
  local_1c = 0;
  local_40 = arg1;
  local_38 = self;
  GSMBCutSceneManager__PlayCutScene(SMBCutSceneManager, (SMBCutScene *)&local_58);
  return;
}
