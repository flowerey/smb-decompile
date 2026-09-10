/* src/game/classes/EditorForm.c — 5 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "EditorForm.h"

/* ======================================================================
 * EditorForm__EditorForm  (Ghidra `~EditorForm` @ 004b5f20)
 * Signature: uint8_t __thiscall ~EditorForm(EditorForm * self)
 * Class: EditorForm
 * Calls: `EditorForm__EditorForm__004b7c20`, `operator_delete`
 * Called by: (none)
 */
/* EditorForm__EditorForm__004b7c20() */

void __thiscall EditorForm__EditorForm__004b7c20(EditorForm *self)

{
  uint64_t *puVar1;

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
 * EditorForm__Update  (Ghidra `Update` @ 004b6210)
 * Signature: uint8_t __thiscall Update(EditorForm * self)
 * Class: EditorForm
 * Calls: `TKeyboard__RestoreCallbacks`, `TKeyboard__UnLock`
 * Called by: (none)
 */
/* EditorForm__Update() */

void __thiscall EditorForm__Update(EditorForm *self)

{
  TKeyboard *this_00;

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
    pCurrentVisibleForm = (EditorForm *)0x0;
  }
  *(uint32_t *)(self + 0xa8) = 0;
  TKeyboard__RestoreCallbacks(this_00, (InputCallback **)(self + 0xb0));
  TKeyboard__UnLock(Keyboard);
  *(uint32_t *)(self + 0xac) = 0;
  return;
}

/* ======================================================================
 * EditorForm__EditorForm__004b7c20  (Ghidra `~EditorForm` @ 004b7c20)
 * Signature: uint8_t __thiscall ~EditorForm(EditorForm * self)
 * Class: EditorForm
 * Calls: `operator_delete`
 * Called by: `EditorForm__EditorForm`
 */
/* EditorForm__EditorForm__004b7c20() */

void __thiscall EditorForm__EditorForm__004b7c20(EditorForm *self)

{
  uint64_t *puVar1;

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

/* ======================================================================
 * EditorForm__EditorForm__004b8350  (Ghidra `EditorForm` @ 004b8350)
 * Signature: uint8_t __thiscall EditorForm(EditorForm * self, EditorFormCreate * arg1)
 * Class: EditorForm
 * Calls: `AddEditorButton`, `FlashAnimationLibrary__GetLibraryEntry`, `FlashAnimationLibrary__GetMovieClip__005731d0`, `FlashAnimationLibrary__GetUITextField`, `Sprint`, `memcpy`, `strlen`
 * Called by: `SMBEditor__SMBEditor__004ad010`
 */
/* EditorForm__EditorForm__004b8350(EditorFormCreate const*) */

void __thiscall EditorForm__EditorForm__004b8350(EditorForm *self, EditorFormCreate *arg1)

{
  uint64_t uVar1;
  uint64_t *puVar2;
  size_t sVar3;
  size_t sVar4;
  void *pvVar5;
  uint64_t uVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  uint uVar10;
  EditorForm *pEVar12;
  bool bVar13;
  char acStack_48[40];
  ulong uVar11;

  uVar11 = 0x50;
  iVar9 = 0x50;
  *(uint8_t ***)self = &PTR__EditorForm_005c4670;
  *(uint64_t *)(self + 8) = 0;
  *(uint32_t *)(self + 0xa8) = 0;
  *(uint32_t *)(self + 0xac) = 0;
  pEVar12 = self + 0x28;
  bVar13 = ((ulong)pEVar12 & 1) != 0;
  if (bVar13) {
    pEVar12 = self + 0x29;
    self[0x28] = (EditorForm)0x0;
    uVar11 = 0x4f;
    iVar9 = 0x4f;
  }
  if (((ulong)pEVar12 & 2) == 0) {
    uVar10 = (uint)uVar11;
  } else {
    *(uint16_t *)pEVar12 = 0;
    pEVar12 = pEVar12 + 2;
    uVar10 = iVar9 - 2;
    uVar11 = (ulong)uVar10;
  }
  if (((ulong)pEVar12 & 4) != 0) {
    *(uint32_t *)pEVar12 = 0;
    uVar11 = (ulong)(uVar10 - 4);
    pEVar12 = pEVar12 + 4;
  }
  for (uVar8 = uVar11 >> 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(uint64_t *)pEVar12 = 0;
    pEVar12 = pEVar12 + 8;
  }
  if ((uVar11 & 4) != 0) {
    *(uint32_t *)pEVar12 = 0;
    pEVar12 = pEVar12 + 4;
  }
  if ((uVar11 & 2) != 0) {
    *(uint16_t *)pEVar12 = 0;
    pEVar12 = pEVar12 + 2;
  }
  if (bVar13) {
    *pEVar12 = (EditorForm)0x0;
  }
  uVar1 = FlashAnimationLibrary__GetMovieClip__005731d0(*(FlashAnimationLibrary **)arg1,
                                                        *(char **)(arg1 + 8));
  *(uint64_t *)(self + 8) = uVar1;
  puVar2 = operator_new__(0x28);
  *(uint64_t **)(self + 0x80) = puVar2;
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  *(uint64_t *)(self + 0x88) = 0;
  *(uint64_t *)(self + 0x90) = 0;
  *(uint64_t *)(self + 0x98) = 0;
  *(uint64_t *)(self + 0xa0) = 0;
  pEVar12 = *(EditorForm **)(arg1 + 0x10);
  if (pEVar12 != (EditorForm *)0x0) {
    sVar3 = strlen((char *)pEVar12);
    sVar4 = 0x20;
    if (sVar3 < 0x21) {
      sVar4 = (long)(int)sVar3;
    }
    if (self + 0x88 != pEVar12) {
      memcpy(self + 0x88, pEVar12, sVar4);
    }
    self[0xa7] = (EditorForm)0x0;
  }
  if (*(long *)(arg1 + 0x18) != 0) {
    Sprint("labeltext%i", acStack_48, 1);
    FlashAnimationLibrary__SetTextFieldText(*(char **)arg1, acStack_48, *(uint64_t *)(arg1 + 0x18));
    sVar4 = strlen(*(char **)(arg1 + 0x18));
    puVar2 = *(uint64_t **)(self + 0x80);
    uVar11 = (ulong)((int)sVar4 + 1);
    pvVar5 = operator_new__(uVar11);
    *puVar2 = pvVar5;
    if (*(void **)(arg1 + 0x18) != (void *)**(uint64_t **)(self + 0x80)) {
      memcpy((void *)**(uint64_t **)(self + 0x80), *(void **)(arg1 + 0x18), uVar11);
    }
  }
  if (*(long *)(arg1 + 0x20) != 0) {
    Sprint("labeltext%i", acStack_48, 2);
    FlashAnimationLibrary__SetTextFieldText(*(char **)arg1, acStack_48, *(uint64_t *)(arg1 + 0x20));
    sVar4 = strlen(*(char **)(arg1 + 0x20));
    lVar7 = *(long *)(self + 0x80);
    uVar11 = (ulong)((int)sVar4 + 1);
    pvVar5 = operator_new__(uVar11);
    *(void **)(lVar7 + 8) = pvVar5;
    if (*(void **)(arg1 + 0x20) != *(void **)(*(long *)(self + 0x80) + 8)) {
      memcpy(*(void **)(*(long *)(self + 0x80) + 8), *(void **)(arg1 + 0x20), uVar11);
    }
  }
  if (*(long *)(arg1 + 0x28) != 0) {
    Sprint("labeltext%i", acStack_48, 3);
    FlashAnimationLibrary__SetTextFieldText(*(char **)arg1, acStack_48, *(uint64_t *)(arg1 + 0x28));
    sVar4 = strlen(*(char **)(arg1 + 0x28));
    lVar7 = *(long *)(self + 0x80);
    uVar11 = (ulong)((int)sVar4 + 1);
    pvVar5 = operator_new__(uVar11);
    *(void **)(lVar7 + 0x10) = pvVar5;
    if (*(void **)(arg1 + 0x28) != *(void **)(*(long *)(self + 0x80) + 0x10)) {
      memcpy(*(void **)(*(long *)(self + 0x80) + 0x10), *(void **)(arg1 + 0x28), uVar11);
    }
  }
  if (*(long *)(arg1 + 0x30) != 0) {
    Sprint("labeltext%i", acStack_48, 4);
    FlashAnimationLibrary__SetTextFieldText(*(char **)arg1, acStack_48, *(uint64_t *)(arg1 + 0x30));
    sVar4 = strlen(*(char **)(arg1 + 0x30));
    lVar7 = *(long *)(self + 0x80);
    uVar11 = (ulong)((int)sVar4 + 1);
    pvVar5 = operator_new__(uVar11);
    *(void **)(lVar7 + 0x18) = pvVar5;
    if (*(void **)(arg1 + 0x30) != *(void **)(*(long *)(self + 0x80) + 0x18)) {
      memcpy(*(void **)(*(long *)(self + 0x80) + 0x18), *(void **)(arg1 + 0x30), uVar11);
    }
  }
  if (*(long *)(arg1 + 0x38) != 0) {
    Sprint("labeltext%i", acStack_48, 5);
    FlashAnimationLibrary__SetTextFieldText(*(char **)arg1, acStack_48, *(uint64_t *)(arg1 + 0x38));
    sVar4 = strlen(*(char **)(arg1 + 0x38));
    lVar7 = *(long *)(self + 0x80);
    uVar11 = (ulong)((int)sVar4 + 1);
    pvVar5 = operator_new__(uVar11);
    *(void **)(lVar7 + 0x20) = pvVar5;
    if (*(void **)(arg1 + 0x38) != *(void **)(*(long *)(self + 0x80) + 0x20)) {
      memcpy(*(void **)(*(long *)(self + 0x80) + 0x20), *(void **)(arg1 + 0x38), uVar11);
    }
  }
  uVar1 = FlashAnimationLibrary__GetLibraryEntry(*(FlashAnimationLibrary **)arg1,
                                                 *(int *)(*(long *)(self + 8) + 0x20));
  uVar6 = AddEditorButton(uVar1, *(uint64_t *)arg1, "apply", 0, 0);
  *(uint64_t *)(self + 0x10) = uVar6;
  uVar6 = AddEditorButton(uVar1, *(uint64_t *)arg1, "cancel", 0, 0);
  *(uint64_t *)(self + 0x18) = uVar6;
  uVar6 = AddEditorButton(uVar1, *(uint64_t *)arg1, "applytoall", 0, 0);
  *(uint64_t *)(self + 0x20) = uVar6;
  FlashAnimationLibrary__SetTextFieldText(*(char **)arg1, "apply", *(uint64_t *)(arg1 + 0x40));
  FlashAnimationLibrary__SetTextFieldText(*(char **)arg1, "cancel", *(uint64_t *)(arg1 + 0x48));
  FlashAnimationLibrary__SetTextFieldText(*(char **)arg1, "applytoall", *(uint64_t *)(arg1 + 0x50));
  FlashAnimationLibrary__SetTextFieldText(*(char **)arg1, "formlabel", *(uint64_t *)(arg1 + 0x10));
  Sprint("textfield%i", acStack_48, 1);
  lVar7 = AddEditorButton(uVar1, *(uint64_t *)arg1, acStack_48, 0, 1);
  *(long *)(self + 0x28) = lVar7;
  if (lVar7 != 0) {
    uVar6 = FlashAnimationLibrary__GetUITextField(*(FlashAnimationLibrary **)arg1, 1);
    *(uint64_t *)(*(long *)(self + 0x28) + 0x50) = uVar6;
    Sprint("textfield%i", acStack_48, 2);
    lVar7 = AddEditorButton(uVar1, *(uint64_t *)arg1, acStack_48, 0, 1);
    *(long *)(self + 0x30) = lVar7;
    if (lVar7 != 0) {
      uVar6 = FlashAnimationLibrary__GetUITextField(*(FlashAnimationLibrary **)arg1, 2);
      *(uint64_t *)(*(long *)(self + 0x30) + 0x50) = uVar6;
      Sprint("textfield%i", acStack_48, 3);
      lVar7 = AddEditorButton(uVar1, *(uint64_t *)arg1, acStack_48, 0, 1);
      *(long *)(self + 0x38) = lVar7;
      if (lVar7 != 0) {
        uVar6 = FlashAnimationLibrary__GetUITextField(*(FlashAnimationLibrary **)arg1, 3);
        *(uint64_t *)(*(long *)(self + 0x38) + 0x50) = uVar6;
        Sprint("textfield%i", acStack_48, 4);
        lVar7 = AddEditorButton(uVar1, *(uint64_t *)arg1, acStack_48, 0, 1);
        *(long *)(self + 0x40) = lVar7;
        if (lVar7 != 0) {
          uVar6 = FlashAnimationLibrary__GetUITextField(*(FlashAnimationLibrary **)arg1, 4);
          *(uint64_t *)(*(long *)(self + 0x40) + 0x50) = uVar6;
          Sprint("textfield%i", acStack_48, 5);
          lVar7 = AddEditorButton(uVar1, *(uint64_t *)arg1, acStack_48, 0, 1);
          *(long *)(self + 0x48) = lVar7;
          if (lVar7 != 0) {
            uVar6 = FlashAnimationLibrary__GetUITextField(*(FlashAnimationLibrary **)arg1, 5);
            *(uint64_t *)(*(long *)(self + 0x48) + 0x50) = uVar6;
            Sprint("textfield%i", acStack_48, 6);
            lVar7 = AddEditorButton(uVar1, *(uint64_t *)arg1, acStack_48, 0, 1);
            *(long *)(self + 0x50) = lVar7;
            if (lVar7 != 0) {
              uVar6 = FlashAnimationLibrary__GetUITextField(*(FlashAnimationLibrary **)arg1, 6);
              *(uint64_t *)(*(long *)(self + 0x50) + 0x50) = uVar6;
              Sprint("textfield%i", acStack_48, 7);
              lVar7 = AddEditorButton(uVar1, *(uint64_t *)arg1, acStack_48, 0, 1);
              *(long *)(self + 0x58) = lVar7;
              if (lVar7 != 0) {
                uVar6 = FlashAnimationLibrary__GetUITextField(*(FlashAnimationLibrary **)arg1, 7);
                *(uint64_t *)(*(long *)(self + 0x58) + 0x50) = uVar6;
                Sprint("textfield%i", acStack_48, 8);
                lVar7 = AddEditorButton(uVar1, *(uint64_t *)arg1, acStack_48, 0, 1);
                *(long *)(self + 0x60) = lVar7;
                if (lVar7 != 0) {
                  uVar6 = FlashAnimationLibrary__GetUITextField(*(FlashAnimationLibrary **)arg1, 8);
                  *(uint64_t *)(*(long *)(self + 0x60) + 0x50) = uVar6;
                  Sprint("textfield%i", acStack_48, 9);
                  lVar7 = AddEditorButton(uVar1, *(uint64_t *)arg1, acStack_48, 0, 1);
                  *(long *)(self + 0x68) = lVar7;
                  if (lVar7 != 0) {
                    uVar6 =
                        FlashAnimationLibrary__GetUITextField(*(FlashAnimationLibrary **)arg1, 9);
                    *(uint64_t *)(*(long *)(self + 0x68) + 0x50) = uVar6;
                    Sprint("textfield%i", acStack_48, 10);
                    lVar7 = AddEditorButton(uVar1, *(uint64_t *)arg1, acStack_48, 0, 1);
                    *(long *)(self + 0x70) = lVar7;
                    if (lVar7 != 0) {
                      uVar1 = FlashAnimationLibrary__GetUITextField(*(FlashAnimationLibrary **)arg1,
                                                                    10);
                      *(uint64_t *)(*(long *)(self + 0x70) + 0x50) = uVar1;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  *(uint64_t *)(self + 0x78) = *(uint64_t *)arg1;
  return;
}

/* ======================================================================
 * EditorForm__Activate  (Ghidra `Activate` @ 004b8b70)
 * Signature: uint8_t __thiscall Activate(EditorForm * self)
 * Class: EditorForm
 * Calls: `Sprint`, `TKeyboard__BackupCallbacks`
 * Called by: `EditorForm_ChapterUploadFormOpen`, `SMBEditor__PromptLevelUploadForm`, `SMBEditor__Update`, `ShowObstacleAnimalProps`, `ShowWayPointProperties`
 */
/* EditorForm__Activate() */

void __thiscall EditorForm__Activate(EditorForm *self)

{
  long *plVar1;
  char acStack_28[32];

  *(uint64_t *)(self + 0xb0) = 0;
  TKeyboard__BackupCallbacks(Keyboard, (InputCallback **)(self + 0xb0));
  if (pCurrentVisibleForm == (EditorForm *)0x0) {
    if (self == (EditorForm *)0x0)
      goto LAB_004b8e00;
  } else {
    if (self == pCurrentVisibleForm)
      goto LAB_004b8e00;
    *(uint32_t *)(pCurrentVisibleForm + 0xac) = 1;
  }
  FlashAnimationLibrary__SetTextFieldText(*(char **)(self + 0x78), "formlabel", self + 0x88);
  plVar1 = *(long **)(self + 0x80);
  if (*plVar1 != 0) {
    Sprint("labeltext%i", acStack_28, 1);
    FlashAnimationLibrary__SetTextFieldText(*(char **)(self + 0x78), acStack_28,
                                            **(uint64_t **)(self + 0x80));
    plVar1 = *(long **)(self + 0x80);
  }
  if (plVar1[1] != 0) {
    Sprint("labeltext%i", acStack_28, 2);
    FlashAnimationLibrary__SetTextFieldText(*(char **)(self + 0x78), acStack_28,
                                            *(uint64_t *)(*(long *)(self + 0x80) + 8));
    plVar1 = *(long **)(self + 0x80);
  }
  if (plVar1[2] != 0) {
    Sprint("labeltext%i", acStack_28, 3);
    FlashAnimationLibrary__SetTextFieldText(*(char **)(self + 0x78), acStack_28,
                                            *(uint64_t *)(*(long *)(self + 0x80) + 0x10));
    plVar1 = *(long **)(self + 0x80);
  }
  if (plVar1[3] != 0) {
    Sprint("labeltext%i", acStack_28, 4);
    FlashAnimationLibrary__SetTextFieldText(*(char **)(self + 0x78), acStack_28,
                                            *(uint64_t *)(*(long *)(self + 0x80) + 0x18));
    plVar1 = *(long **)(self + 0x80);
  }
  if (plVar1[4] != 0) {
    Sprint("labeltext%i", acStack_28, 5);
    FlashAnimationLibrary__SetTextFieldText(*(char **)(self + 0x78), acStack_28,
                                            *(uint64_t *)(*(long *)(self + 0x80) + 0x20));
  }
  if (*(long *)(self + 0x28) != 0) {
    FlashEditableTextField__SetText(*(char **)(*(long *)(self + 0x28) + 0x50), "");
  }
  if (*(long *)(self + 0x30) != 0) {
    FlashEditableTextField__SetText(*(char **)(*(long *)(self + 0x30) + 0x50), "");
  }
  if (*(long *)(self + 0x38) != 0) {
    FlashEditableTextField__SetText(*(char **)(*(long *)(self + 0x38) + 0x50), "");
  }
  if (*(long *)(self + 0x40) != 0) {
    FlashEditableTextField__SetText(*(char **)(*(long *)(self + 0x40) + 0x50), "");
  }
  if (*(long *)(self + 0x48) != 0) {
    FlashEditableTextField__SetText(*(char **)(*(long *)(self + 0x48) + 0x50), "");
  }
  if (*(long *)(self + 0x50) != 0) {
    FlashEditableTextField__SetText(*(char **)(*(long *)(self + 0x50) + 0x50), "");
  }
  if (*(long *)(self + 0x58) != 0) {
    FlashEditableTextField__SetText(*(char **)(*(long *)(self + 0x58) + 0x50), "");
  }
  if (*(long *)(self + 0x60) != 0) {
    FlashEditableTextField__SetText(*(char **)(*(long *)(self + 0x60) + 0x50), "");
  }
  if (*(long *)(self + 0x68) != 0) {
    FlashEditableTextField__SetText(*(char **)(*(long *)(self + 0x68) + 0x50), "");
  }
  if (*(long *)(self + 0x70) != 0) {
    FlashEditableTextField__SetText(*(char **)(*(long *)(self + 0x70) + 0x50), "");
  }
  pCurrentVisibleForm = self;
  *(uint32_t *)(self + 0xa8) = 1;
LAB_004b8e00:
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
  if (*(long **)(self + 0x28) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x28) + 0x38))();
  }
  return;
}
