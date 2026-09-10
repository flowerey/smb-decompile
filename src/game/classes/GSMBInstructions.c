/* src/game/classes/GSMBInstructions.c — 9 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "GSMBInstructions.h"

/* ======================================================================
 * GSMBInstructions__GSMBInstructions  (Ghidra `GSMBInstructions` @ 004c28e0)
 * Signature: uint8_t __thiscall GSMBInstructions(GSMBInstructions * self)
 * Class: GSMBInstructions
 * Calls: `FlashAnimationLibrary__FlashAnimationLibrary__00576680`, `FormatResourcePath`, `GSMBCutSceneManager__GSMBCutSceneManager__0049d5e0`, `TPlayer__GetJoystick`, `operator_new`
 * Called by: `GSuperMeatBoy__Initialize__00516f60`
 */
/* WARNING: Removing unreachable block (ram,0x004c2a32) */
/* GSMBInstructions__GSMBInstructions() */

void __thiscall GSMBInstructions__GSMBInstructions(GSMBInstructions *self)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  FlashAnimationLibrary *this_00;
  GSMBCutSceneManager *this_01;
  uint8_t *local_38[3];

  *(uint64_t *)self = 0;
  *(uint32_t *)(self + 0x30) = 3;
  *(uint64_t *)(self + 0x18) = 0;
  *(uint64_t *)(self + 0x20) = 0;
  *(uint64_t *)(self + 8) = 0;
  *(uint64_t *)(self + 0x10) = 0;
  *(uint64_t *)(self + 0x28) = 0;
  local_38[0] = &DAT_008184c8 /* R:0.00016803004837129265f */;
  /* try { // try from 004c293e to 004c2961 has its CatchHandler @ 004c2a09 */
  piVar2 = (int *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  if (*piVar2 == 1) {
    /* try { // try from 004c29c5 to 004c29d6 has its CatchHandler @ 004c2a09 */
    pcVar3 = (char *)FormatResourcePath("/Inst/instxbox.am", local_38);
    this_00 = operator_new(0xb0);
    /* try { // try from 004c29e0 to 004c29e4 has its CatchHandler @ 004c2a29 */
    FlashAnimationLibrary__FlashAnimationLibrary__00576680(this_00, pcVar3);
  } else {
    pcVar3 = (char *)FormatResourcePath("/Inst/inst.am", local_38);
    this_00 = operator_new(0xb0);
    /* try { // try from 004c296b to 004c296f has its CatchHandler @ 004c2a1c */
    FlashAnimationLibrary__FlashAnimationLibrary__00576680(this_00, pcVar3);
  }
  *(FlashAnimationLibrary **)self = this_00;
  /* try { // try from 004c2978 to 004c297c has its CatchHandler @ 004c2a09 */
  this_01 = operator_new(0x498);
  /* try { // try from 004c2985 to 004c2989 has its CatchHandler @ 004c2a2b */
  GSMBCutSceneManager__GSMBCutSceneManager__0049d5e0(this_01, 0);
  *(GSMBCutSceneManager **)(self + 0x38) = this_01;
  SMBInstructions = self;
  if ((allocator *)(local_38[0] + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage) {
    LOCK();
    piVar2 = (int *)(local_38[0] + -8);
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 < 1) {
      std__string_Rep_M_destroy((allocator *)(local_38[0] + -0x18));
    }
  }
  return;
}

/* ======================================================================
 * GSMBInstructions__ForceClosePage  (Ghidra `ForceClosePage` @ 004c2a40)
 * Signature: uint8_t __thiscall ForceClosePage(GSMBInstructions * self)
 * Class: GSMBInstructions
 * Calls: `GSMBCutSceneManager__CancelCutScene`
 * Called by: `GSuperMeatBoy__BeatLevel`
 */
/* GSMBInstructions__ForceClosePage() */

void __thiscall GSMBInstructions__ForceClosePage(GSMBInstructions *self)

{
  GSMBCutSceneManager__CancelCutScene(*(GSMBCutSceneManager **)(self + 0x38));
  return;
}

/* ======================================================================
 * GSMBInstructions__Render  (Ghidra `Render` @ 004c2a50)
 * Signature: uint8_t __thiscall Render(GSMBInstructions * self)
 * Class: GSMBInstructions
 * Calls: (none)
 * Called by: `GMeatHUD__Render`
 */
/* GSMBInstructions__Render() */

void __thiscall GSMBInstructions__Render(GSMBInstructions *self)

{
  /* WARNING: Could not recover jumptable at 0x004c2a5b. Too many branches */
  /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(self + 0x38) + 0x10))();
  return;
}

/* ======================================================================
 * GSMBInstructions__Update  (Ghidra `Update` @ 004c2a60)
 * Signature: uint8_t __thiscall Update(GSMBInstructions * self)
 * Class: GSMBInstructions
 * Calls: `GSMBCutSceneManager__Update`
 * Called by: `GMeatHUD__Update`
 */
/* GSMBInstructions__Update() */

void __thiscall GSMBInstructions__Update(GSMBInstructions *self)

{
  GSMBCutSceneManager__Update(*(GSMBCutSceneManager **)(self + 0x38));
  return;
}

/* ======================================================================
 * GSMBInstructions__ShowPage  (Ghidra `ShowPage` @ 004c2a70)
 * Signature: uint8_t __thiscall ShowPage(GSMBInstructions * self)
 * Class: GSMBInstructions
 * Calls: `GSMBCutSceneManager__PlayCutScene`, `SMBInstPageIntroDone`
 * Called by: `SMBLevelFinished`, `ShowInstructionsPage`
 */
/* GSMBInstructions__ShowPage() */

void __thiscall GSMBInstructions__ShowPage(GSMBInstructions *self)

{
  uint32_t local_58;
  uint32_t local_54;
  uint32_t local_50;
  uint64_t local_48;
  code *local_40;
  uint64_t local_38;
  uint64_t local_30;
  uint64_t local_28;
  uint32_t local_20;
  uint32_t local_1c;
  uint32_t local_18;

  local_48 = *(uint64_t *)(self + 0x18);
  local_20 = 0;
  local_1c = 1;
  local_18 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_54 = 0x43f00000;
  local_58 = 0x44200000;
  local_50 = 1;
  local_40 = SMBInstPageIntroDone;
  GSMBCutSceneManager__PlayCutScene(*(GSMBCutSceneManager **)(SMBInstructions + 0x38),
                                    (SMBCutScene *)&local_58);
  bPageShowing = 1;
  return;
}

/* ======================================================================
 * GSMBInstructions__DeleteInstructionPage  (Ghidra `DeleteInstructionPage` @ 004c2b00)
 * Signature: uint8_t __thiscall DeleteInstructionPage(GSMBInstructions * self)
 * Class: GSMBInstructions
 * Calls: (none)
 * Called by: (none)
 */
/* GSMBInstructions__DeleteInstructionPage() */

void __thiscall GSMBInstructions__DeleteInstructionPage(GSMBInstructions *self)

{
  if (*(long **)(self + 0x10) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x10) + 8))();
  }
  if (*(long **)(self + 8) != (long *)0x0) {
    (**(code **)(**(long **)(self + 8) + 8))();
  }
  if (*(long **)(self + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x18) + 8))();
  }
  if (*(long **)(self + 0x20) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x20) + 8))();
  }
  if (*(long **)(self + 0x28) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x28) + 8))();
  }
  *(uint64_t *)(self + 0x18) = 0;
  *(uint64_t *)(self + 0x20) = 0;
  *(uint64_t *)(self + 8) = 0;
  *(uint64_t *)(self + 0x10) = 0;
  *(uint64_t *)(self + 0x28) = 0;
  return;
}

/* ======================================================================
 * GSMBInstructions__SetInstructionPage  (Ghidra `SetInstructionPage` @ 004c2b80)
 * Signature: uint8_t __thiscall SetInstructionPage(GSMBInstructions * self, int arg1)
 * Class: GSMBInstructions
 * Calls: `FlashAnimationLibrary__GetMovieClip__005731d0`, `Sprint`
 * Called by: `SMBLevelFinished`
 */
/* GSMBInstructions__SetInstructionPage(int) */

void __thiscall GSMBInstructions__SetInstructionPage(GSMBInstructions *self, int arg1)

{
  uint64_t uVar1;
  char acStack_38[40];

  DeleteInstructionPage(self);
  Sprint("page%i-1", acStack_38, arg1);
  uVar1 =
      FlashAnimationLibrary__GetMovieClip__005731d0(*(FlashAnimationLibrary **)self, acStack_38);
  *(uint64_t *)(self + 8) = uVar1;
  Sprint("page%i-2", acStack_38, arg1);
  uVar1 =
      FlashAnimationLibrary__GetMovieClip__005731d0(*(FlashAnimationLibrary **)self, acStack_38);
  *(uint64_t *)(self + 0x10) = uVar1;
  Sprint("page%iin", acStack_38, arg1);
  uVar1 =
      FlashAnimationLibrary__GetMovieClip__005731d0(*(FlashAnimationLibrary **)self, acStack_38);
  *(uint64_t *)(self + 0x18) = uVar1;
  Sprint("page%iout", acStack_38, arg1);
  uVar1 =
      FlashAnimationLibrary__GetMovieClip__005731d0(*(FlashAnimationLibrary **)self, acStack_38);
  *(uint64_t *)(self + 0x20) = uVar1;
  Sprint("page%itrans", acStack_38, arg1);
  uVar1 =
      FlashAnimationLibrary__GetMovieClip__005731d0(*(FlashAnimationLibrary **)self, acStack_38);
  *(uint64_t *)(self + 0x28) = uVar1;
  return;
}

/* ======================================================================
 * GSMBInstructions__GSMBInstructions__004c2c40  (Ghidra `~GSMBInstructions` @ 004c2c40)
 * Signature: uint8_t __thiscall ~GSMBInstructions(GSMBInstructions * self)
 * Class: GSMBInstructions
 * Calls: `FlashAnimationLibrary__FlashAnimationLibrary`, `operator_delete`
 * Called by: `GSuperMeatBoy__GSuperMeatBoy__00512120`
 */
/* GSMBInstructions__GSMBInstructions__004c2c40() */

void __thiscall GSMBInstructions__GSMBInstructions__004c2c40(GSMBInstructions *self)

{
  FlashAnimationLibrary *this_00;

  DeleteInstructionPage(self);
  this_00 = *(FlashAnimationLibrary **)self;
  if (this_00 != (FlashAnimationLibrary *)0x0) {
    FlashAnimationLibrary__FlashAnimationLibrary(this_00);
    operator_delete(this_00);
  }
  if (*(long **)(self + 0x38) != (long *)0x0) {
    /* WARNING: Could not recover jumptable at 0x004c2c8c. Too many branches */
    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(self + 0x38) + 8))();
    return;
  }
  return;
}

/* ======================================================================
 * GSMBInstructions__IsPageShowing  (Ghidra `IsPageShowing` @ 004c2ca0)
 * Signature: uint8_t __stdcall IsPageShowing(void)
 * Class: GSMBInstructions
 * Calls: (none)
 * Called by: (none)
 */
/* GSMBInstructions__IsPageShowing() */

uint32_t GSMBInstructions__IsPageShowing(void)

{
  return bPageShowing;
}
