/* src/game/classes/EditorFormCharacter.c — 3 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "EditorFormCharacter.h"

/* ======================================================================
 * EditorFormCharacter__Update  (Ghidra `Update` @ 004b6aa0)
 * Signature: uint8_t __thiscall Update(EditorFormCharacter * self)
 * Class: EditorFormCharacter
 * Calls: `TKeyboard__RestoreCallbacks`, `TKeyboard__UnLock`, `Update`
 * Called by: (none)
 */
/* EditorFormCharacter__Update() */

void __thiscall EditorFormCharacter__Update(EditorFormCharacter *self)

{
  TKeyboard *this_00;
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = 0xffffffff;
  uVar1 = 0;
  do {
    if (*(long **)(self + uVar1 * 8 + 0xb8) != (long *)0x0) {
      (**(code **)(**(long **)(self + uVar1 * 8 + 0xb8) + 0x48))();
      if (*(long *)(self + uVar1 * 8 + 0xb8) == *(long *)(self + 0x158)) {
        uVar2 = uVar1 & 0xffffffff;
      }
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 != 0x14);
  *(uint8_t *)(*(long *)(self + 0x158) + 0x4a) = 1;
  if ((int)uVar2 == -1) {
    FlashAnimationLibrary__SetTextFieldText(*(char **)(self + 0x78),"labeltext1",&DAT_005c2b74 /* R:"None" */);
  }
  else {
    FlashAnimationLibrary__SetTextFieldText
              (*(char **)(self + 0x78),"labeltext1",
               (&Update()::strCharacterFriendlyNames)[(int)uVar2]);
  }
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
    pCurrentVisibleForm = (EditorFormCharacter *)0x0;
  }
  *(uint32_t *)(self + 0xa8) = 0;
  TKeyboard__RestoreCallbacks(this_00,(InputCallback **)(self + 0xb0));
  TKeyboard__UnLock(Keyboard);
  *(uint32_t *)(self + 0xac) = 0;
  return;
}

/* ======================================================================
 * EditorFormCharacter__EditorFormCharacter  (Ghidra `~EditorFormCharacter` @ 004b79f0)
 * Signature: uint8_t __thiscall ~EditorFormCharacter(EditorFormCharacter * self)
 * Class: EditorFormCharacter
 * Calls: `EditorFormCharacter__EditorFormCharacter__004b8120`, `operator_delete`
 * Called by: (none)
 */
/* EditorFormCharacter__EditorFormCharacter__004b8120() */

void __thiscall EditorFormCharacter__EditorFormCharacter__004b8120(EditorFormCharacter *self)

{
  uint64_t *puVar1;
  long lVar2;
  
  lVar2 = 0;
  *(uint8_t ***)self = &PTR__EditorFormCharacter_005c4630;
  do {
    if (*(long **)(self + lVar2 + 0xb8) != (long *)0x0) {
                    /* try { // try from 004b7a18 to 004b7a1a has its CatchHandler @ 004b7c07 */
      (**(code **)(**(long **)(self + lVar2 + 0xb8) + 8))();
    }
    *(uint64_t *)(self + lVar2 + 0xb8) = 0;
    lVar2 = lVar2 + 8;
  } while (lVar2 != 0xa0);
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
 * EditorFormCharacter__EditorFormCharacter__004b8120  (Ghidra `~EditorFormCharacter` @ 004b8120)
 * Signature: uint8_t __thiscall ~EditorFormCharacter(EditorFormCharacter * self)
 * Class: EditorFormCharacter
 * Calls: `operator_delete`
 * Called by: `EditorFormCharacter__EditorFormCharacter`
 */
/* EditorFormCharacter__EditorFormCharacter__004b8120() */

void __thiscall EditorFormCharacter__EditorFormCharacter__004b8120(EditorFormCharacter *self)

{
  uint64_t *puVar1;
  long lVar2;
  
  lVar2 = 0;
  *(uint8_t ***)self = &PTR__EditorFormCharacter_005c4630;
  do {
    if (*(long **)(self + lVar2 + 0xb8) != (long *)0x0) {
                    /* try { // try from 004b8148 to 004b814a has its CatchHandler @ 004b8338 */
      (**(code **)(**(long **)(self + lVar2 + 0xb8) + 8))();
    }
    *(uint64_t *)(self + lVar2 + 0xb8) = 0;
    lVar2 = lVar2 + 8;
  } while (lVar2 != 0xa0);
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
