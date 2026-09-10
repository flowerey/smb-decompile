/* src/game/classes/EditorFormNewLevel.c — 3 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "EditorFormNewLevel.h"

/* ======================================================================
 * EditorFormNewLevel__Update  (Ghidra `Update` @ 004b6360)
 * Signature: uint8_t __thiscall Update(EditorFormNewLevel * self)
 * Class: EditorFormNewLevel
 * Calls: `TKeyboard__RestoreCallbacks`, `TKeyboard__UnLock`, `Update`
 * Called by: (none)
 */
/* EditorFormNewLevel__Update() */

void __thiscall EditorFormNewLevel__Update(EditorFormNewLevel *self)

{
  TKeyboard *this_00;
  int iVar1;

  iVar1 = -1;
  if (*(long **)(self + 0xb8) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0xb8) + 0x48))();
    iVar1 = (*(long *)(self + 0xb8) == *(long *)(self + 0x108)) - 1;
  }
  if (*(long **)(self + 0xc0) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0xc0) + 0x48))();
    if (*(long *)(self + 0xc0) == *(long *)(self + 0x108)) {
      iVar1 = 1;
    }
  }
  if (*(long **)(self + 200) != (long *)0x0) {
    (**(code **)(**(long **)(self + 200) + 0x48))();
    if (*(long *)(self + 200) == *(long *)(self + 0x108)) {
      iVar1 = 2;
    }
  }
  if (*(long **)(self + 0xd0) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0xd0) + 0x48))();
    if (*(long *)(self + 0xd0) == *(long *)(self + 0x108)) {
      iVar1 = 3;
    }
  }
  if (*(long **)(self + 0xd8) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0xd8) + 0x48))();
    if (*(long *)(self + 0xd8) == *(long *)(self + 0x108)) {
      iVar1 = 4;
    }
  }
  if (*(long **)(self + 0xe0) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0xe0) + 0x48))();
    if (*(long *)(self + 0xe0) == *(long *)(self + 0x108)) {
      iVar1 = 5;
    }
  }
  if (*(long **)(self + 0xe8) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0xe8) + 0x48))();
    if (*(long *)(self + 0xe8) == *(long *)(self + 0x108)) {
      iVar1 = 6;
    }
  }
  if (*(long **)(self + 0xf0) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0xf0) + 0x48))();
    if (*(long *)(self + 0xf0) == *(long *)(self + 0x108)) {
      iVar1 = 7;
    }
  }
  if (*(long **)(self + 0xf8) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0xf8) + 0x48))();
    if (*(long *)(self + 0xf8) == *(long *)(self + 0x108)) {
      iVar1 = 8;
    }
  }
  if (*(long **)(self + 0x100) == (long *)0x0) {
  LAB_004b64fd:
    *(uint8_t *)(*(long *)(self + 0x108) + 0x4a) = 1;
    if (iVar1 == -1) {
      FlashAnimationLibrary__SetTextFieldText(*(char **)(self + 0x78), "labeltext4",
                                              &DAT_005c2b74 /* R:"None" */);
      goto LAB_004b652c;
    }
  } else {
    (**(code **)(**(long **)(self + 0x100) + 0x48))();
    if (*(long *)(self + 0x100) != *(long *)(self + 0x108))
      goto LAB_004b64fd;
    *(uint8_t *)(*(long *)(self + 0x100) + 0x4a) = 1;
    iVar1 = 9;
  }
  FlashAnimationLibrary__SetTextFieldText(
      *(char **)(self + 0x78), "labeltext4",
      *(uint64_t *)(Update()::strPaletteFriendlyNames + (long)iVar1 * 8));
LAB_004b652c:
  if (*(long **)(self + 0x10) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x10) + 0x48))();
  }
  if (*(long **)(self + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x18) + 0x48))();
  }
  if (*(long **)(self + 0x20) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x20) + 0x48))();
  }
  if (*(long **)(self + 0x28) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x28) + 0x48))();
  }
  if (*(long **)(self + 0x30) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x30) + 0x48))();
  }
  if (*(long **)(self + 0x38) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x38) + 0x48))();
  }
  if (*(long **)(self + 0x40) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x40) + 0x48))();
  }
  if (*(long **)(self + 0x48) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x48) + 0x48))();
  }
  if (*(long **)(self + 0x50) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x50) + 0x48))();
  }
  if (*(long **)(self + 0x58) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x58) + 0x48))();
  }
  if (*(long **)(self + 0x60) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x60) + 0x48))();
  }
  if (*(long **)(self + 0x68) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x68) + 0x48))();
  }
  if (*(long **)(self + 0x70) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x70) + 0x48))();
  }
  if ((Keyboard != (TKeyboard *)0x0) && (*(int *)(Keyboard + 0x520) == 1)) {
    (**(code **)(**(long **)(self + 0x10) + 0x30))();
  }
  this_00 = Keyboard;
  if (*(int *)(self + 0xac) != 1) {
    return;
  }
  if (self == pCurrentVisibleForm) {
    pCurrentVisibleForm = (EditorFormNewLevel *)0x0;
  }
  *(uint32_t *)(self + 0xa8) = 0;
  TKeyboard__RestoreCallbacks(this_00, (InputCallback **)(self + 0xb0));
  TKeyboard__UnLock(Keyboard);
  *(uint32_t *)(self + 0xac) = 0;
  return;
}

/* ======================================================================
 * EditorFormNewLevel__EditorFormNewLevel  (Ghidra `~EditorFormNewLevel` @ 004b76d0)
 * Signature: uint8_t __thiscall ~EditorFormNewLevel(EditorFormNewLevel * self)
 * Class: EditorFormNewLevel
 * Calls: `EditorFormNewLevel__EditorFormNewLevel__004b7e00`, `operator_delete`
 * Called by: (none)
 */
/* EditorFormNewLevel__EditorFormNewLevel__004b7e00() */

void __thiscall EditorFormNewLevel__EditorFormNewLevel__004b7e00(EditorFormNewLevel *self)

{
  uint64_t *puVar1;

  *(uint8_t ***)self = &PTR__EditorFormNewLevel_005c45f0;
  if (*(long **)(self + 0xb8) != (long *)0x0) {
    /* try { // try from 004b76ee to 004b77f5 has its CatchHandler @ 004b79d6 */
    (**(code **)(**(long **)(self + 0xb8) + 8))();
  }
  *(uint64_t *)(self + 0xb8) = 0;
  if (*(long **)(self + 0xc0) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0xc0) + 8))();
  }
  *(uint64_t *)(self + 0xc0) = 0;
  if (*(long **)(self + 200) != (long *)0x0) {
    (**(code **)(**(long **)(self + 200) + 8))();
  }
  *(uint64_t *)(self + 200) = 0;
  if (*(long **)(self + 0xd0) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0xd0) + 8))();
  }
  *(uint64_t *)(self + 0xd0) = 0;
  if (*(long **)(self + 0xd8) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0xd8) + 8))();
  }
  *(uint64_t *)(self + 0xd8) = 0;
  if (*(long **)(self + 0xe0) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0xe0) + 8))();
  }
  *(uint64_t *)(self + 0xe0) = 0;
  if (*(long **)(self + 0xe8) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0xe8) + 8))();
  }
  *(uint64_t *)(self + 0xe8) = 0;
  if (*(long **)(self + 0xf0) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0xf0) + 8))();
  }
  *(uint64_t *)(self + 0xf0) = 0;
  if (*(long **)(self + 0xf8) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0xf8) + 8))();
  }
  *(uint64_t *)(self + 0xf8) = 0;
  if (*(long **)(self + 0x100) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x100) + 8))();
  }
  *(uint64_t *)(self + 0x100) = 0;
  *(uint8_t ***)self = &PTR__EditorForm_005c4670;
  if (*(long **)(self + 0x10) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x10) + 8))();
  }
  *(uint64_t *)(self + 0x10) = 0;
  if (*(long **)(self + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x18) + 8))();
  }
  *(uint64_t *)(self + 0x18) = 0;
  if (*(long **)(self + 0x20) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x20) + 8))();
  }
  *(uint64_t *)(self + 0x20) = 0;
  if (*(long **)(self + 0x28) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x28) + 8))();
  }
  *(uint64_t *)(self + 0x28) = 0;
  if (*(long **)(self + 0x30) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x30) + 8))();
  }
  *(uint64_t *)(self + 0x30) = 0;
  if (*(long **)(self + 0x38) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x38) + 8))();
  }
  *(uint64_t *)(self + 0x38) = 0;
  if (*(long **)(self + 0x40) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x40) + 8))();
  }
  *(uint64_t *)(self + 0x40) = 0;
  if (*(long **)(self + 0x48) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x48) + 8))();
  }
  *(uint64_t *)(self + 0x48) = 0;
  if (*(long **)(self + 0x50) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x50) + 8))();
  }
  *(uint64_t *)(self + 0x50) = 0;
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
  if (*(long **)(self + 8) != (long *)0x0) {
    (**(code **)(**(long **)(self + 8) + 8))();
  }
  puVar1 = *(uint64_t **)(self + 0x80);
  *(uint64_t *)(self + 8) = 0;
  if ((void *)*puVar1 != (void *)0x0) {
    operator_delete((void *)*puVar1);
    puVar1 = *(uint64_t **)(self + 0x80);
  }
  if ((void *)puVar1[1] != (void *)0x0) {
    operator_delete((void *)puVar1[1]);
    puVar1 = *(uint64_t **)(self + 0x80);
  }
  if ((void *)puVar1[2] != (void *)0x0) {
    operator_delete((void *)puVar1[2]);
    puVar1 = *(uint64_t **)(self + 0x80);
  }
  if ((void *)puVar1[3] != (void *)0x0) {
    operator_delete((void *)puVar1[3]);
    puVar1 = *(uint64_t **)(self + 0x80);
  }
  if ((void *)puVar1[4] != (void *)0x0) {
    operator_delete((void *)puVar1[4]);
    puVar1 = *(uint64_t **)(self + 0x80);
  }
  if (puVar1 != (uint64_t *)0x0) {
    operator_delete__(puVar1);
    return;
  }
  return;
}

/* ======================================================================
 * EditorFormNewLevel__EditorFormNewLevel__004b7e00  (Ghidra `~EditorFormNewLevel` @ 004b7e00)
 * Signature: uint8_t __thiscall ~EditorFormNewLevel(EditorFormNewLevel * self)
 * Class: EditorFormNewLevel
 * Calls: `operator_delete`
 * Called by: `EditorFormNewLevel__EditorFormNewLevel`
 */
/* EditorFormNewLevel__EditorFormNewLevel__004b7e00() */

void __thiscall EditorFormNewLevel__EditorFormNewLevel__004b7e00(EditorFormNewLevel *self)

{
  uint64_t *puVar1;

  *(uint8_t ***)self = &PTR__EditorFormNewLevel_005c45f0;
  if (*(long **)(self + 0xb8) != (long *)0x0) {
    /* try { // try from 004b7e1e to 004b7f25 has its CatchHandler @ 004b8103 */
    (**(code **)(**(long **)(self + 0xb8) + 8))();
  }
  *(uint64_t *)(self + 0xb8) = 0;
  if (*(long **)(self + 0xc0) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0xc0) + 8))();
  }
  *(uint64_t *)(self + 0xc0) = 0;
  if (*(long **)(self + 200) != (long *)0x0) {
    (**(code **)(**(long **)(self + 200) + 8))();
  }
  *(uint64_t *)(self + 200) = 0;
  if (*(long **)(self + 0xd0) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0xd0) + 8))();
  }
  *(uint64_t *)(self + 0xd0) = 0;
  if (*(long **)(self + 0xd8) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0xd8) + 8))();
  }
  *(uint64_t *)(self + 0xd8) = 0;
  if (*(long **)(self + 0xe0) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0xe0) + 8))();
  }
  *(uint64_t *)(self + 0xe0) = 0;
  if (*(long **)(self + 0xe8) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0xe8) + 8))();
  }
  *(uint64_t *)(self + 0xe8) = 0;
  if (*(long **)(self + 0xf0) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0xf0) + 8))();
  }
  *(uint64_t *)(self + 0xf0) = 0;
  if (*(long **)(self + 0xf8) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0xf8) + 8))();
  }
  *(uint64_t *)(self + 0xf8) = 0;
  if (*(long **)(self + 0x100) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x100) + 8))();
  }
  *(uint64_t *)(self + 0x100) = 0;
  *(uint8_t ***)self = &PTR__EditorForm_005c4670;
  if (*(long **)(self + 0x10) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x10) + 8))();
  }
  *(uint64_t *)(self + 0x10) = 0;
  if (*(long **)(self + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x18) + 8))();
  }
  *(uint64_t *)(self + 0x18) = 0;
  if (*(long **)(self + 0x20) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x20) + 8))();
  }
  *(uint64_t *)(self + 0x20) = 0;
  if (*(long **)(self + 0x28) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x28) + 8))();
  }
  *(uint64_t *)(self + 0x28) = 0;
  if (*(long **)(self + 0x30) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x30) + 8))();
  }
  *(uint64_t *)(self + 0x30) = 0;
  if (*(long **)(self + 0x38) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x38) + 8))();
  }
  *(uint64_t *)(self + 0x38) = 0;
  if (*(long **)(self + 0x40) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x40) + 8))();
  }
  *(uint64_t *)(self + 0x40) = 0;
  if (*(long **)(self + 0x48) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x48) + 8))();
  }
  *(uint64_t *)(self + 0x48) = 0;
  if (*(long **)(self + 0x50) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x50) + 8))();
  }
  *(uint64_t *)(self + 0x50) = 0;
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
  if (*(long **)(self + 8) != (long *)0x0) {
    (**(code **)(**(long **)(self + 8) + 8))();
  }
  puVar1 = *(uint64_t **)(self + 0x80);
  *(uint64_t *)(self + 8) = 0;
  if ((void *)*puVar1 != (void *)0x0) {
    operator_delete((void *)*puVar1);
    puVar1 = *(uint64_t **)(self + 0x80);
  }
  if ((void *)puVar1[1] != (void *)0x0) {
    operator_delete((void *)puVar1[1]);
    puVar1 = *(uint64_t **)(self + 0x80);
  }
  if ((void *)puVar1[2] != (void *)0x0) {
    operator_delete((void *)puVar1[2]);
    puVar1 = *(uint64_t **)(self + 0x80);
  }
  if ((void *)puVar1[3] != (void *)0x0) {
    operator_delete((void *)puVar1[3]);
    puVar1 = *(uint64_t **)(self + 0x80);
  }
  if ((void *)puVar1[4] != (void *)0x0) {
    operator_delete((void *)puVar1[4]);
    puVar1 = *(uint64_t **)(self + 0x80);
  }
  if (puVar1 != (uint64_t *)0x0) {
    operator_delete__(puVar1);
  }
  operator_delete(self);
  return;
}
