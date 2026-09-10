/* src/game/classes/EditorFormChapterUpload.c — 6 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "EditorFormChapterUpload.h"

/* ======================================================================
 * EditorFormChapterUpload__Update  (Ghidra `Update` @ 004b66b0)
 * Signature: uint8_t __thiscall Update(EditorFormChapterUpload * self)
 * Class: EditorFormChapterUpload
 * Calls: `Sprint`, `TKeyboard__RestoreCallbacks`, `TKeyboard__UnLock`
 * Called by: (none)
 */
/* EditorFormChapterUpload__Update() */

void __thiscall EditorFormChapterUpload__Update(EditorFormChapterUpload *self)

{
  int iVar1;
  TKeyboard *this_00;
  EditorFormChapterUpload *pEVar2;
  EditorFormChapterUpload *pEVar3;
  int iVar4;
  char acStack_48 [32];
  
  pEVar3 = self + 0x2d0;
  pEVar2 = self + 0xb8;
  iVar4 = 0;
  while( true ) {
    if (*(long **)pEVar2 != (long *)0x0) {
      (**(code **)(**(long **)pEVar2 + 0x48))();
    }
    if (*(long **)(pEVar2 + 0xa0) != (long *)0x0) {
      (**(code **)(**(long **)(pEVar2 + 0xa0) + 0x48))();
    }
    iVar1 = iVar4 + 1;
    Sprint("chtext%i",acStack_48,iVar1);
    if (*(int *)pEVar3 == -1) {
      FlashAnimationLibrary__SetTextFieldText(*(char **)(self + 0x78),acStack_48,&DAT_005ca3d2 /* R:u32=1931804704 */);
    }
    else {
      FlashAnimationLibrary__SetTextFieldText
                (*(char **)(self + 0x78),acStack_48,self + (long)iVar4 * 0x2c + 0x2dc);
    }
    if (iVar1 == 0x14) break;
    pEVar3 = pEVar3 + 0x2c;
    pEVar2 = pEVar2 + 8;
    iVar4 = iVar1;
  }
  if (*(long **)(self + 0x1f8) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x1f8) + 0x48))();
  }
  if (*(long **)(self + 0x200) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x200) + 0x48))();
  }
  if (*(long **)(self + 0x208) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x208) + 0x48))();
  }
  if (*(long **)(self + 0x210) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x210) + 0x48))();
  }
  if (*(long **)(self + 0x218) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x218) + 0x48))();
  }
  if (*(long **)(self + 0x220) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x220) + 0x48))();
  }
  if (*(long **)(self + 0x228) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x228) + 0x48))();
  }
  if (*(long **)(self + 0x230) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x230) + 0x48))();
  }
  if (*(long **)(self + 0x238) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x238) + 0x48))();
  }
  if (*(long **)(self + 0x240) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x240) + 0x48))();
  }
  if (*(long **)(self + 0x248) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x248) + 0x48))();
  }
  if (*(long **)(self + 0x250) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x250) + 0x48))();
  }
  if (*(long **)(self + 600) != (long *)0x0) {
    (**(code **)(**(long **)(self + 600) + 0x48))();
  }
  if (*(long **)(self + 0x260) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x260) + 0x48))();
  }
  if (*(long **)(self + 0x268) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x268) + 0x48))();
  }
  if (*(long **)(self + 0x270) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x270) + 0x48))();
  }
  if (*(long **)(self + 0x278) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x278) + 0x48))();
  }
  if (*(long **)(self + 0x280) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x280) + 0x48))();
  }
  if (*(long **)(self + 0x288) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x288) + 0x48))();
  }
  if (*(long **)(self + 0x290) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x290) + 0x48))();
  }
  if (*(long **)(self + 0x298) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x298) + 0x48))();
  }
  if (*(long **)(self + 0x2a0) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x2a0) + 0x48))();
  }
  if (*(long **)(self + 0x2a8) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x2a8) + 0x48))();
  }
  if (*(long **)(self + 0x2b0) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x2b0) + 0x48))();
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
  if (*(int *)(self + 0xac) == 1) {
    if (self == pCurrentVisibleForm) {
      pCurrentVisibleForm = (EditorFormChapterUpload *)0x0;
    }
    *(uint32_t *)(self + 0xa8) = 0;
    TKeyboard__RestoreCallbacks(this_00,(InputCallback **)(self + 0xb0));
    TKeyboard__UnLock(Keyboard);
    *(uint32_t *)(self + 0xac) = 0;
    return;
  }
  return;
}

/* ======================================================================
 * EditorFormChapterUpload__EditorFormChapterUpload  (Ghidra `~EditorFormChapterUpload` @ 004b6c80)
 * Signature: uint8_t __thiscall ~EditorFormChapterUpload(EditorFormChapterUpload * self)
 * Class: EditorFormChapterUpload
 * Calls: `EditorFormChapterUpload__EditorFormChapterUpload__004b71a0`, `TAudioInstance__TAudioInstance__0057a200`, `operator_delete`
 * Called by: (none)
 */
/* EditorFormChapterUpload__EditorFormChapterUpload__004b71a0() */

void __thiscall EditorFormChapterUpload__EditorFormChapterUpload__004b71a0(EditorFormChapterUpload *self)

{
  uint64_t *puVar1;
  long lVar2;
  
  lVar2 = 0;
  *(uint8_t ***)self = &PTR__EditorFormChapterUpload_005c46b0;
  do {
    if (*(long **)(self + lVar2 + 0xb8) != (long *)0x0) {
                    /* try { // try from 004b6ca8 to 004b6f8f has its CatchHandler @ 004b717a */
      (**(code **)(**(long **)(self + lVar2 + 0xb8) + 8))();
    }
    *(uint64_t *)(self + lVar2 + 0xb8) = 0;
    if (*(long **)(self + lVar2 + 0x158) != (long *)0x0) {
      (**(code **)(**(long **)(self + lVar2 + 0x158) + 8))();
    }
    *(uint64_t *)(self + lVar2 + 0x158) = 0;
    lVar2 = lVar2 + 8;
  } while (lVar2 != 0xa0);
  if (*(long **)(self + 0x1f8) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x1f8) + 8))();
  }
  *(uint64_t *)(self + 0x1f8) = 0;
  if (*(long **)(self + 0x200) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x200) + 8))();
  }
  *(uint64_t *)(self + 0x200) = 0;
  if (*(long **)(self + 0x208) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x208) + 8))();
  }
  *(uint64_t *)(self + 0x208) = 0;
  if (*(long **)(self + 0x210) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x210) + 8))();
  }
  *(uint64_t *)(self + 0x210) = 0;
  if (*(long **)(self + 0x218) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x218) + 8))();
  }
  *(uint64_t *)(self + 0x218) = 0;
  if (*(long **)(self + 0x220) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x220) + 8))();
  }
  *(uint64_t *)(self + 0x220) = 0;
  if (*(long **)(self + 0x228) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x228) + 8))();
  }
  *(uint64_t *)(self + 0x228) = 0;
  if (*(long **)(self + 0x230) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x230) + 8))();
  }
  *(uint64_t *)(self + 0x230) = 0;
  if (*(long **)(self + 0x238) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x238) + 8))();
  }
  *(uint64_t *)(self + 0x238) = 0;
  if (*(long **)(self + 0x240) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x240) + 8))();
  }
  *(uint64_t *)(self + 0x240) = 0;
  if (*(long **)(self + 0x248) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x248) + 8))();
  }
  *(uint64_t *)(self + 0x248) = 0;
  if (*(long **)(self + 0x250) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x250) + 8))();
  }
  *(uint64_t *)(self + 0x250) = 0;
  if (*(long **)(self + 600) != (long *)0x0) {
    (**(code **)(**(long **)(self + 600) + 8))();
  }
  *(uint64_t *)(self + 600) = 0;
  if (*(long **)(self + 0x260) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x260) + 8))();
  }
  *(uint64_t *)(self + 0x260) = 0;
  if (*(long **)(self + 0x268) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x268) + 8))();
  }
  *(uint64_t *)(self + 0x268) = 0;
  if (*(long **)(self + 0x270) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x270) + 8))();
  }
  *(uint64_t *)(self + 0x270) = 0;
  if (*(long **)(self + 0x278) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x278) + 8))();
  }
  *(uint64_t *)(self + 0x278) = 0;
  if (*(long **)(self + 0x280) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x280) + 8))();
  }
  *(uint64_t *)(self + 0x280) = 0;
  if (*(long **)(self + 0x288) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x288) + 8))();
  }
  *(uint64_t *)(self + 0x288) = 0;
  if (*(long **)(self + 0x290) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x290) + 8))();
  }
  *(uint64_t *)(self + 0x290) = 0;
  if (*(long **)(self + 0x298) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x298) + 8))();
  }
  *(uint64_t *)(self + 0x298) = 0;
  if (*(long **)(self + 0x2a0) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x2a0) + 8))();
  }
  *(uint64_t *)(self + 0x2a0) = 0;
  if (*(long **)(self + 0x2a8) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x2a8) + 8))();
  }
  *(uint64_t *)(self + 0x2a8) = 0;
  if (*(long **)(self + 0x2b0) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x2b0) + 8))();
  }
  *(uint64_t *)(self + 0x2b0) = 0;
                    /* try { // try from 004b6fa2 to 004b6fa6 has its CatchHandler @ 004b7199 */
  TAudioInstance__TAudioInstance__0057a200((TAudioInstance *)(self + 0x808));
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
 * EditorFormChapterUpload__EditorFormChapterUpload__004b71a0  (Ghidra `~EditorFormChapterUpload` @ 004b71a0)
 * Signature: uint8_t __thiscall ~EditorFormChapterUpload(EditorFormChapterUpload * self)
 * Class: EditorFormChapterUpload
 * Calls: `TAudioInstance__TAudioInstance__0057a200`, `operator_delete`
 * Called by: `EditorFormChapterUpload__EditorFormChapterUpload`
 */
/* EditorFormChapterUpload__EditorFormChapterUpload__004b71a0() */

void __thiscall EditorFormChapterUpload__EditorFormChapterUpload__004b71a0(EditorFormChapterUpload *self)

{
  uint64_t *puVar1;
  long lVar2;
  
  lVar2 = 0;
  *(uint8_t ***)self = &PTR__EditorFormChapterUpload_005c46b0;
  do {
    if (*(long **)(self + lVar2 + 0xb8) != (long *)0x0) {
                    /* try { // try from 004b71c8 to 004b74af has its CatchHandler @ 004b76b2 */
      (**(code **)(**(long **)(self + lVar2 + 0xb8) + 8))();
    }
    *(uint64_t *)(self + lVar2 + 0xb8) = 0;
    if (*(long **)(self + lVar2 + 0x158) != (long *)0x0) {
      (**(code **)(**(long **)(self + lVar2 + 0x158) + 8))();
    }
    *(uint64_t *)(self + lVar2 + 0x158) = 0;
    lVar2 = lVar2 + 8;
  } while (lVar2 != 0xa0);
  if (*(long **)(self + 0x1f8) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x1f8) + 8))();
  }
  *(uint64_t *)(self + 0x1f8) = 0;
  if (*(long **)(self + 0x200) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x200) + 8))();
  }
  *(uint64_t *)(self + 0x200) = 0;
  if (*(long **)(self + 0x208) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x208) + 8))();
  }
  *(uint64_t *)(self + 0x208) = 0;
  if (*(long **)(self + 0x210) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x210) + 8))();
  }
  *(uint64_t *)(self + 0x210) = 0;
  if (*(long **)(self + 0x218) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x218) + 8))();
  }
  *(uint64_t *)(self + 0x218) = 0;
  if (*(long **)(self + 0x220) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x220) + 8))();
  }
  *(uint64_t *)(self + 0x220) = 0;
  if (*(long **)(self + 0x228) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x228) + 8))();
  }
  *(uint64_t *)(self + 0x228) = 0;
  if (*(long **)(self + 0x230) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x230) + 8))();
  }
  *(uint64_t *)(self + 0x230) = 0;
  if (*(long **)(self + 0x238) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x238) + 8))();
  }
  *(uint64_t *)(self + 0x238) = 0;
  if (*(long **)(self + 0x240) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x240) + 8))();
  }
  *(uint64_t *)(self + 0x240) = 0;
  if (*(long **)(self + 0x248) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x248) + 8))();
  }
  *(uint64_t *)(self + 0x248) = 0;
  if (*(long **)(self + 0x250) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x250) + 8))();
  }
  *(uint64_t *)(self + 0x250) = 0;
  if (*(long **)(self + 600) != (long *)0x0) {
    (**(code **)(**(long **)(self + 600) + 8))();
  }
  *(uint64_t *)(self + 600) = 0;
  if (*(long **)(self + 0x260) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x260) + 8))();
  }
  *(uint64_t *)(self + 0x260) = 0;
  if (*(long **)(self + 0x268) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x268) + 8))();
  }
  *(uint64_t *)(self + 0x268) = 0;
  if (*(long **)(self + 0x270) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x270) + 8))();
  }
  *(uint64_t *)(self + 0x270) = 0;
  if (*(long **)(self + 0x278) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x278) + 8))();
  }
  *(uint64_t *)(self + 0x278) = 0;
  if (*(long **)(self + 0x280) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x280) + 8))();
  }
  *(uint64_t *)(self + 0x280) = 0;
  if (*(long **)(self + 0x288) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x288) + 8))();
  }
  *(uint64_t *)(self + 0x288) = 0;
  if (*(long **)(self + 0x290) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x290) + 8))();
  }
  *(uint64_t *)(self + 0x290) = 0;
  if (*(long **)(self + 0x298) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x298) + 8))();
  }
  *(uint64_t *)(self + 0x298) = 0;
  if (*(long **)(self + 0x2a0) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x2a0) + 8))();
  }
  *(uint64_t *)(self + 0x2a0) = 0;
  if (*(long **)(self + 0x2a8) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x2a8) + 8))();
  }
  *(uint64_t *)(self + 0x2a8) = 0;
  if (*(long **)(self + 0x2b0) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x2b0) + 8))();
  }
  *(uint64_t *)(self + 0x2b0) = 0;
                    /* try { // try from 004b74c2 to 004b74c6 has its CatchHandler @ 004b769f */
  TAudioInstance__TAudioInstance__0057a200((TAudioInstance *)(self + 0x808));
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
 * EditorFormChapterUpload__EditorFormChapterUpload__004b8ec0  (Ghidra `EditorFormChapterUpload` @ 004b8ec0)
 * Signature: uint8_t __thiscall EditorFormChapterUpload(EditorFormChapterUpload * self, EditorFormCreate * arg1)
 * Class: EditorFormChapterUpload
 * Calls: `AddEditorButton`, `EditorButton_ChapterLevelButtonClick`, `EditorButton_ChapterLevelDeletePress`, `EditorButton_ChapterLevelLineButtonClick`, `EditorButton_ChapterLevelMusicPress`, `EditorButton_ChapterLibraryLeftClick`, `EditorButton_ChapterLibraryRightClick`, `FlashAnimationLibrary__GetLibraryEntry`, `FlashAnimationLibrary__GetMovieClip__005731d0`, `FlashAnimationLibrary__GetUITextField` (+5 more)
 * Called by: `SMBEditor__SMBEditor__004ad010`
 */
/* EditorFormChapterUpload__EditorFormChapterUpload__004b8ec0(EditorFormCreate*) */

void __thiscall
EditorFormChapterUpload__EditorFormChapterUpload__004b8ec0
          (EditorFormChapterUpload *self,EditorFormCreate *arg1)

{
  uint64_t uVar1;
  uint64_t *puVar2;
  size_t sVar3;
  size_t sVar4;
  void *pvVar5;
  uint64_t uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  EditorFormChapterUpload *pEVar12;
  int iVar13;
  bool bVar14;
  char acStack_48 [32];
  
  uVar11 = 0x50;
  iVar13 = 0x50;
  *(uint8_t ***)self = &PTR__EditorForm_005c4670;
  *(uint64_t *)(self + 8) = 0;
  *(uint32_t *)(self + 0xa8) = 0;
  *(uint32_t *)(self + 0xac) = 0;
  pEVar12 = self + 0x28;
  bVar14 = ((ulong)pEVar12 & 1) != 0;
  if (bVar14) {
    pEVar12 = self + 0x29;
    self[0x28] = (EditorFormChapterUpload)0x0;
    uVar11 = 0x4f;
    iVar13 = 0x4f;
  }
  if (((ulong)pEVar12 & 2) == 0) {
    uVar10 = (uint)uVar11;
  }
  else {
    *(uint16_t *)pEVar12 = 0;
    pEVar12 = pEVar12 + 2;
    uVar10 = iVar13 - 2;
    uVar11 = (ulong)uVar10;
  }
  if (((ulong)pEVar12 & 4) != 0) {
    *(uint32_t *)pEVar12 = 0;
    uVar11 = (ulong)(uVar10 - 4);
    pEVar12 = pEVar12 + 4;
  }
  for (uVar9 = uVar11 >> 3; uVar9 != 0; uVar9 = uVar9 - 1) {
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
  if (bVar14) {
    *pEVar12 = (EditorFormChapterUpload)0x0;
  }
  uVar1 = FlashAnimationLibrary__GetMovieClip__005731d0
                    (*(FlashAnimationLibrary **)arg1,*(char **)(arg1 + 8));
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
  pEVar12 = *(EditorFormChapterUpload **)(arg1 + 0x10);
  if (pEVar12 != (EditorFormChapterUpload *)0x0) {
    sVar3 = strlen((char *)pEVar12);
    sVar4 = 0x20;
    if (sVar3 < 0x21) {
      sVar4 = (long)(int)sVar3;
    }
    if (self + 0x88 != pEVar12) {
      memcpy(self + 0x88,pEVar12,sVar4);
    }
    self[0xa7] = (EditorFormChapterUpload)0x0;
  }
  if (*(long *)(arg1 + 0x18) != 0) {
    Sprint("labeltext%i",acStack_48,1);
    FlashAnimationLibrary__SetTextFieldText
              (*(char **)arg1,acStack_48,*(uint64_t *)(arg1 + 0x18));
    sVar4 = strlen(*(char **)(arg1 + 0x18));
    puVar2 = *(uint64_t **)(self + 0x80);
    uVar11 = (ulong)((int)sVar4 + 1);
    pvVar5 = operator_new__(uVar11);
    *puVar2 = pvVar5;
    if (*(void **)(arg1 + 0x18) != (void *)**(uint64_t **)(self + 0x80)) {
      memcpy((void *)**(uint64_t **)(self + 0x80),*(void **)(arg1 + 0x18),uVar11);
    }
  }
  if (*(long *)(arg1 + 0x20) != 0) {
    Sprint("labeltext%i",acStack_48,2);
    FlashAnimationLibrary__SetTextFieldText
              (*(char **)arg1,acStack_48,*(uint64_t *)(arg1 + 0x20));
    sVar4 = strlen(*(char **)(arg1 + 0x20));
    lVar7 = *(long *)(self + 0x80);
    uVar11 = (ulong)((int)sVar4 + 1);
    pvVar5 = operator_new__(uVar11);
    *(void **)(lVar7 + 8) = pvVar5;
    if (*(void **)(arg1 + 0x20) != *(void **)(*(long *)(self + 0x80) + 8)) {
      memcpy(*(void **)(*(long *)(self + 0x80) + 8),*(void **)(arg1 + 0x20),uVar11);
    }
  }
  if (*(long *)(arg1 + 0x28) != 0) {
    Sprint("labeltext%i",acStack_48,3);
    FlashAnimationLibrary__SetTextFieldText
              (*(char **)arg1,acStack_48,*(uint64_t *)(arg1 + 0x28));
    sVar4 = strlen(*(char **)(arg1 + 0x28));
    lVar7 = *(long *)(self + 0x80);
    uVar11 = (ulong)((int)sVar4 + 1);
    pvVar5 = operator_new__(uVar11);
    *(void **)(lVar7 + 0x10) = pvVar5;
    if (*(void **)(arg1 + 0x28) != *(void **)(*(long *)(self + 0x80) + 0x10)) {
      memcpy(*(void **)(*(long *)(self + 0x80) + 0x10),*(void **)(arg1 + 0x28),uVar11);
    }
  }
  if (*(long *)(arg1 + 0x30) != 0) {
    Sprint("labeltext%i",acStack_48,4);
    FlashAnimationLibrary__SetTextFieldText
              (*(char **)arg1,acStack_48,*(uint64_t *)(arg1 + 0x30));
    sVar4 = strlen(*(char **)(arg1 + 0x30));
    lVar7 = *(long *)(self + 0x80);
    uVar11 = (ulong)((int)sVar4 + 1);
    pvVar5 = operator_new__(uVar11);
    *(void **)(lVar7 + 0x18) = pvVar5;
    if (*(void **)(arg1 + 0x30) != *(void **)(*(long *)(self + 0x80) + 0x18)) {
      memcpy(*(void **)(*(long *)(self + 0x80) + 0x18),*(void **)(arg1 + 0x30),uVar11);
    }
  }
  if (*(long *)(arg1 + 0x38) != 0) {
    Sprint("labeltext%i",acStack_48,5);
    FlashAnimationLibrary__SetTextFieldText
              (*(char **)arg1,acStack_48,*(uint64_t *)(arg1 + 0x38));
    sVar4 = strlen(*(char **)(arg1 + 0x38));
    lVar7 = *(long *)(self + 0x80);
    uVar11 = (ulong)((int)sVar4 + 1);
    pvVar5 = operator_new__(uVar11);
    *(void **)(lVar7 + 0x20) = pvVar5;
    if (*(void **)(arg1 + 0x38) != *(void **)(*(long *)(self + 0x80) + 0x20)) {
      memcpy(*(void **)(*(long *)(self + 0x80) + 0x20),*(void **)(arg1 + 0x38),uVar11);
    }
  }
  uVar1 = FlashAnimationLibrary__GetLibraryEntry
                    (*(FlashAnimationLibrary **)arg1,*(int *)(*(long *)(self + 8) + 0x20));
  uVar6 = AddEditorButton(uVar1,*(uint64_t *)arg1,"apply",0,0);
  *(uint64_t *)(self + 0x10) = uVar6;
  uVar6 = AddEditorButton(uVar1,*(uint64_t *)arg1,"cancel",0,0);
  *(uint64_t *)(self + 0x18) = uVar6;
  uVar6 = AddEditorButton(uVar1,*(uint64_t *)arg1,"applytoall",0,0);
  *(uint64_t *)(self + 0x20) = uVar6;
  FlashAnimationLibrary__SetTextFieldText(*(char **)arg1,"apply",*(uint64_t *)(arg1 + 0x40))
  ;
  FlashAnimationLibrary__SetTextFieldText
            (*(char **)arg1,"cancel",*(uint64_t *)(arg1 + 0x48));
  FlashAnimationLibrary__SetTextFieldText
            (*(char **)arg1,"applytoall",*(uint64_t *)(arg1 + 0x50));
  FlashAnimationLibrary__SetTextFieldText
            (*(char **)arg1,"formlabel",*(uint64_t *)(arg1 + 0x10));
  Sprint("textfield%i",acStack_48,1);
  lVar7 = AddEditorButton(uVar1,*(uint64_t *)arg1,acStack_48,0,1);
  *(long *)(self + 0x28) = lVar7;
  if (lVar7 != 0) {
    uVar6 = FlashAnimationLibrary__GetUITextField(*(FlashAnimationLibrary **)arg1,1);
    *(uint64_t *)(*(long *)(self + 0x28) + 0x50) = uVar6;
    Sprint("textfield%i",acStack_48,2);
    lVar7 = AddEditorButton(uVar1,*(uint64_t *)arg1,acStack_48,0,1);
    *(long *)(self + 0x30) = lVar7;
    if (lVar7 != 0) {
      uVar6 = FlashAnimationLibrary__GetUITextField(*(FlashAnimationLibrary **)arg1,2);
      *(uint64_t *)(*(long *)(self + 0x30) + 0x50) = uVar6;
      Sprint("textfield%i",acStack_48,3);
      lVar7 = AddEditorButton(uVar1,*(uint64_t *)arg1,acStack_48,0,1);
      *(long *)(self + 0x38) = lVar7;
      if (lVar7 != 0) {
        uVar6 = FlashAnimationLibrary__GetUITextField(*(FlashAnimationLibrary **)arg1,3);
        *(uint64_t *)(*(long *)(self + 0x38) + 0x50) = uVar6;
        Sprint("textfield%i",acStack_48,4);
        lVar7 = AddEditorButton(uVar1,*(uint64_t *)arg1,acStack_48,0,1);
        *(long *)(self + 0x40) = lVar7;
        if (lVar7 != 0) {
          uVar6 = FlashAnimationLibrary__GetUITextField(*(FlashAnimationLibrary **)arg1,4);
          *(uint64_t *)(*(long *)(self + 0x40) + 0x50) = uVar6;
          Sprint("textfield%i",acStack_48,5);
          lVar7 = AddEditorButton(uVar1,*(uint64_t *)arg1,acStack_48,0,1);
          *(long *)(self + 0x48) = lVar7;
          if (lVar7 != 0) {
            uVar6 = FlashAnimationLibrary__GetUITextField(*(FlashAnimationLibrary **)arg1,5);
            *(uint64_t *)(*(long *)(self + 0x48) + 0x50) = uVar6;
            Sprint("textfield%i",acStack_48,6);
            lVar7 = AddEditorButton(uVar1,*(uint64_t *)arg1,acStack_48,0,1);
            *(long *)(self + 0x50) = lVar7;
            if (lVar7 != 0) {
              uVar6 = FlashAnimationLibrary__GetUITextField(*(FlashAnimationLibrary **)arg1,6);
              *(uint64_t *)(*(long *)(self + 0x50) + 0x50) = uVar6;
              Sprint("textfield%i",acStack_48,7);
              lVar7 = AddEditorButton(uVar1,*(uint64_t *)arg1,acStack_48,0,1);
              *(long *)(self + 0x58) = lVar7;
              if (lVar7 != 0) {
                uVar6 = FlashAnimationLibrary__GetUITextField(*(FlashAnimationLibrary **)arg1,7);
                *(uint64_t *)(*(long *)(self + 0x58) + 0x50) = uVar6;
                Sprint("textfield%i",acStack_48,8);
                lVar7 = AddEditorButton(uVar1,*(uint64_t *)arg1,acStack_48,0,1);
                *(long *)(self + 0x60) = lVar7;
                if (lVar7 != 0) {
                  uVar6 = FlashAnimationLibrary__GetUITextField
                                    (*(FlashAnimationLibrary **)arg1,8);
                  *(uint64_t *)(*(long *)(self + 0x60) + 0x50) = uVar6;
                  Sprint("textfield%i",acStack_48,9);
                  lVar7 = AddEditorButton(uVar1,*(uint64_t *)arg1,acStack_48,0,1);
                  *(long *)(self + 0x68) = lVar7;
                  if (lVar7 != 0) {
                    uVar6 = FlashAnimationLibrary__GetUITextField
                                      (*(FlashAnimationLibrary **)arg1,9);
                    *(uint64_t *)(*(long *)(self + 0x68) + 0x50) = uVar6;
                    Sprint("textfield%i",acStack_48,10);
                    lVar7 = AddEditorButton(uVar1,*(uint64_t *)arg1,acStack_48,0,1);
                    *(long *)(self + 0x70) = lVar7;
                    if (lVar7 != 0) {
                      uVar1 = FlashAnimationLibrary__GetUITextField
                                        (*(FlashAnimationLibrary **)arg1,10);
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
  uVar1 = *(uint64_t *)arg1;
  *(uint8_t ***)self = &PTR__EditorFormChapterUpload_005c46b0;
  *(uint64_t *)(self + 0x78) = uVar1;
  pEVar12 = self + 0x2d0;
  do {
    *(uint32_t *)pEVar12 = 0xffffffff;
    pEVar12 = pEVar12 + 0x2c;
  } while (pEVar12 != self + 0x640);
  *(uint32_t *)(self + 0x640) = 0xffffffff;
  *(uint32_t *)(self + 0x66c) = 0xffffffff;
  *(uint32_t *)(self + 0x698) = 0xffffffff;
  *(uint32_t *)(self + 0x6c4) = 0xffffffff;
  *(uint32_t *)(self + 0x6f0) = 0xffffffff;
  *(uint32_t *)(self + 0x71c) = 0xffffffff;
  *(uint32_t *)(self + 0x748) = 0xffffffff;
  *(uint32_t *)(self + 0x774) = 0xffffffff;
  *(uint32_t *)(self + 0x7a0) = 0xffffffff;
  *(uint32_t *)(self + 0x7cc) = 0xffffffff;
                    /* try { // try from 004b966d to 004b9671 has its CatchHandler @ 004ba18a */
  TAudioInstance__TAudioInstance((TAudioInstance *)(self + 0x808));
  *(uint32_t *)(self + 0x2cc) = 0xffffffff;
  *(uint32_t *)(self + 0x2c8) = 0xffffffff;
  *(uint32_t *)(self + 0x7f8) = 0;
                    /* try { // try from 004b969b to 004ba140 has its CatchHandler @ 004ba19d */
  uVar1 = FlashAnimationLibrary__GetLibraryEntry
                    (*(FlashAnimationLibrary **)(self + 0x78),*(int *)(*(long *)(self + 8) + 0x20));
  lVar7 = 0;
  do {
    iVar13 = (int)lVar7 + 1;
    Sprint(&DAT_005c2c85 /* R:9.656168351458881e-39f */,acStack_48,iVar13);
    lVar8 = AddEditorButton(uVar1,*(uint64_t *)(self + 0x78),acStack_48,0,0);
    *(long *)(self + lVar7 * 8 + 0xb8) = lVar8;
    *(code **)(lVar8 + 0x28) = EditorButton_ChapterLevelDeletePress;
    *(uint64_t *)(lVar8 + 0x20) = 0;
    *(uint64_t *)(lVar8 + 0x18) = 0;
    *(long *)(lVar8 + 0x40) = lVar7;
    *(uint64_t *)(lVar8 + 0x38) = 0;
    *(uint64_t *)(lVar8 + 0x30) = 0;
    Sprint("num%i",acStack_48,iVar13);
    FlashAnimationLibrary__SetTextFieldText(*(char **)(self + 0x78),acStack_48,&DAT_005c2c8f /* R:4.262151574031827e-39f */);
    Sprint("levelline%i",acStack_48,iVar13);
    lVar8 = AddEditorButton(uVar1,*(uint64_t *)(self + 0x78),acStack_48);
    *(long *)(self + lVar7 * 8 + 0x158) = lVar8;
    *(long *)(lVar8 + 0x40) = lVar7;
    lVar7 = lVar7 + 1;
    *(code **)(lVar8 + 0x28) = EditorButton_ChapterLevelButtonClick;
    *(uint64_t *)(lVar8 + 0x20) = 0;
    *(uint64_t *)(lVar8 + 0x18) = 0;
    *(uint64_t *)(lVar8 + 0x38) = 0;
    *(uint64_t *)(lVar8 + 0x30) = 0;
  } while (lVar7 != 0x14);
  Sprint("line%i",acStack_48,1);
  lVar7 = AddEditorButton(uVar1,*(uint64_t *)(self + 0x78),acStack_48,0,0);
  *(long *)(self + 0x1f8) = lVar7;
  *(code **)(lVar7 + 0x28) = EditorButton_ChapterLevelLineButtonClick;
  *(uint64_t *)(lVar7 + 0x20) = 0;
  *(uint64_t *)(lVar7 + 0x18) = 0;
  *(uint64_t *)(lVar7 + 0x40) = 0;
  *(uint64_t *)(lVar7 + 0x38) = 0;
  *(uint64_t *)(lVar7 + 0x30) = 0;
  Sprint("line%i",acStack_48,2);
  lVar7 = AddEditorButton(uVar1,*(uint64_t *)(self + 0x78),acStack_48,0,0);
  *(long *)(self + 0x200) = lVar7;
  *(code **)(lVar7 + 0x28) = EditorButton_ChapterLevelLineButtonClick;
  *(uint64_t *)(lVar7 + 0x20) = 0;
  *(uint64_t *)(lVar7 + 0x18) = 0;
  *(uint64_t *)(lVar7 + 0x40) = 1;
  *(uint64_t *)(lVar7 + 0x38) = 0;
  *(uint64_t *)(lVar7 + 0x30) = 0;
  Sprint("line%i",acStack_48,3);
  lVar7 = AddEditorButton(uVar1,*(uint64_t *)(self + 0x78),acStack_48,0,0);
  *(long *)(self + 0x208) = lVar7;
  *(code **)(lVar7 + 0x28) = EditorButton_ChapterLevelLineButtonClick;
  *(uint64_t *)(lVar7 + 0x20) = 0;
  *(uint64_t *)(lVar7 + 0x18) = 0;
  *(uint64_t *)(lVar7 + 0x40) = 2;
  *(uint64_t *)(lVar7 + 0x38) = 0;
  *(uint64_t *)(lVar7 + 0x30) = 0;
  Sprint("line%i",acStack_48,4);
  lVar7 = AddEditorButton(uVar1,*(uint64_t *)(self + 0x78),acStack_48,0,0);
  *(long *)(self + 0x210) = lVar7;
  *(code **)(lVar7 + 0x28) = EditorButton_ChapterLevelLineButtonClick;
  *(uint64_t *)(lVar7 + 0x20) = 0;
  *(uint64_t *)(lVar7 + 0x18) = 0;
  *(uint64_t *)(lVar7 + 0x40) = 3;
  *(uint64_t *)(lVar7 + 0x38) = 0;
  *(uint64_t *)(lVar7 + 0x30) = 0;
  Sprint("line%i",acStack_48,5);
  lVar7 = AddEditorButton(uVar1,*(uint64_t *)(self + 0x78),acStack_48,0,0);
  *(long *)(self + 0x218) = lVar7;
  *(code **)(lVar7 + 0x28) = EditorButton_ChapterLevelLineButtonClick;
  *(uint64_t *)(lVar7 + 0x20) = 0;
  *(uint64_t *)(lVar7 + 0x18) = 0;
  *(uint64_t *)(lVar7 + 0x40) = 4;
  *(uint64_t *)(lVar7 + 0x38) = 0;
  *(uint64_t *)(lVar7 + 0x30) = 0;
  Sprint("line%i",acStack_48,6);
  lVar7 = AddEditorButton(uVar1,*(uint64_t *)(self + 0x78),acStack_48,0,0);
  *(long *)(self + 0x220) = lVar7;
  *(code **)(lVar7 + 0x28) = EditorButton_ChapterLevelLineButtonClick;
  *(uint64_t *)(lVar7 + 0x20) = 0;
  *(uint64_t *)(lVar7 + 0x18) = 0;
  *(uint64_t *)(lVar7 + 0x40) = 5;
  *(uint64_t *)(lVar7 + 0x38) = 0;
  *(uint64_t *)(lVar7 + 0x30) = 0;
  Sprint("line%i",acStack_48,7);
  lVar7 = AddEditorButton(uVar1,*(uint64_t *)(self + 0x78),acStack_48,0,0);
  *(long *)(self + 0x228) = lVar7;
  *(code **)(lVar7 + 0x28) = EditorButton_ChapterLevelLineButtonClick;
  *(uint64_t *)(lVar7 + 0x20) = 0;
  *(uint64_t *)(lVar7 + 0x18) = 0;
  *(uint64_t *)(lVar7 + 0x40) = 6;
  *(uint64_t *)(lVar7 + 0x38) = 0;
  *(uint64_t *)(lVar7 + 0x30) = 0;
  Sprint("line%i",acStack_48,8);
  lVar7 = AddEditorButton(uVar1,*(uint64_t *)(self + 0x78),acStack_48,0,0);
  *(long *)(self + 0x230) = lVar7;
  *(code **)(lVar7 + 0x28) = EditorButton_ChapterLevelLineButtonClick;
  *(uint64_t *)(lVar7 + 0x20) = 0;
  *(uint64_t *)(lVar7 + 0x18) = 0;
  *(uint64_t *)(lVar7 + 0x40) = 7;
  *(uint64_t *)(lVar7 + 0x38) = 0;
  *(uint64_t *)(lVar7 + 0x30) = 0;
  Sprint("line%i",acStack_48,9);
  lVar7 = AddEditorButton(uVar1,*(uint64_t *)(self + 0x78),acStack_48,0,0);
  *(long *)(self + 0x238) = lVar7;
  *(code **)(lVar7 + 0x28) = EditorButton_ChapterLevelLineButtonClick;
  *(uint64_t *)(lVar7 + 0x20) = 0;
  *(uint64_t *)(lVar7 + 0x18) = 0;
  *(uint64_t *)(lVar7 + 0x40) = 8;
  *(uint64_t *)(lVar7 + 0x38) = 0;
  *(uint64_t *)(lVar7 + 0x30) = 0;
  Sprint("line%i",acStack_48,10);
  lVar7 = AddEditorButton(uVar1,*(uint64_t *)(self + 0x78),acStack_48,0,0);
  *(long *)(self + 0x240) = lVar7;
  *(code **)(lVar7 + 0x28) = EditorButton_ChapterLevelLineButtonClick;
  *(uint64_t *)(lVar7 + 0x20) = 0;
  *(uint64_t *)(lVar7 + 0x18) = 0;
  *(uint64_t *)(lVar7 + 0x40) = 9;
  *(uint64_t *)(lVar7 + 0x38) = 0;
  *(uint64_t *)(lVar7 + 0x30) = 0;
  Sprint(&DAT_005c8bf9 /* R:u32=1996515621 */,acStack_48,1);
  lVar7 = AddEditorButton(uVar1,*(uint64_t *)(self + 0x78),acStack_48,0,0);
  *(long *)(self + 0x248) = lVar7;
  *(code **)(lVar7 + 0x28) = EditorButton_ChapterLevelMusicPress;
  *(uint64_t *)(lVar7 + 0x20) = 0;
  *(uint64_t *)(lVar7 + 0x18) = 0;
  *(uint64_t *)(lVar7 + 0x40) = 0;
  *(uint64_t *)(lVar7 + 0x38) = 0;
  *(uint64_t *)(lVar7 + 0x30) = 0;
  Sprint(&DAT_005c8bf9 /* R:u32=1996515621 */,acStack_48,2);
  lVar7 = AddEditorButton(uVar1,*(uint64_t *)(self + 0x78),acStack_48,0,0);
  *(long *)(self + 0x250) = lVar7;
  *(code **)(lVar7 + 0x28) = EditorButton_ChapterLevelMusicPress;
  *(uint64_t *)(lVar7 + 0x20) = 0;
  *(uint64_t *)(lVar7 + 0x18) = 0;
  *(uint64_t *)(lVar7 + 0x40) = 1;
  *(uint64_t *)(lVar7 + 0x38) = 0;
  *(uint64_t *)(lVar7 + 0x30) = 0;
  Sprint(&DAT_005c8bf9 /* R:u32=1996515621 */,acStack_48,3);
  lVar7 = AddEditorButton(uVar1,*(uint64_t *)(self + 0x78),acStack_48,0,0);
  *(long *)(self + 600) = lVar7;
  *(code **)(lVar7 + 0x28) = EditorButton_ChapterLevelMusicPress;
  *(uint64_t *)(lVar7 + 0x20) = 0;
  *(uint64_t *)(lVar7 + 0x18) = 0;
  *(uint64_t *)(lVar7 + 0x40) = 2;
  *(uint64_t *)(lVar7 + 0x38) = 0;
  *(uint64_t *)(lVar7 + 0x30) = 0;
  Sprint(&DAT_005c8bf9 /* R:u32=1996515621 */,acStack_48,4);
  lVar7 = AddEditorButton(uVar1,*(uint64_t *)(self + 0x78),acStack_48,0,0);
  *(long *)(self + 0x260) = lVar7;
  *(code **)(lVar7 + 0x28) = EditorButton_ChapterLevelMusicPress;
  *(uint64_t *)(lVar7 + 0x20) = 0;
  *(uint64_t *)(lVar7 + 0x18) = 0;
  *(uint64_t *)(lVar7 + 0x40) = 3;
  *(uint64_t *)(lVar7 + 0x38) = 0;
  *(uint64_t *)(lVar7 + 0x30) = 0;
  Sprint(&DAT_005c8bf9 /* R:u32=1996515621 */,acStack_48,5);
  lVar7 = AddEditorButton(uVar1,*(uint64_t *)(self + 0x78),acStack_48,0,0);
  *(long *)(self + 0x268) = lVar7;
  *(code **)(lVar7 + 0x28) = EditorButton_ChapterLevelMusicPress;
  *(uint64_t *)(lVar7 + 0x20) = 0;
  *(uint64_t *)(lVar7 + 0x18) = 0;
  *(uint64_t *)(lVar7 + 0x40) = 4;
  *(uint64_t *)(lVar7 + 0x38) = 0;
  *(uint64_t *)(lVar7 + 0x30) = 0;
  Sprint(&DAT_005c8bf9 /* R:u32=1996515621 */,acStack_48,6);
  lVar7 = AddEditorButton(uVar1,*(uint64_t *)(self + 0x78),acStack_48,0,0);
  *(long *)(self + 0x270) = lVar7;
  *(code **)(lVar7 + 0x28) = EditorButton_ChapterLevelMusicPress;
  *(uint64_t *)(lVar7 + 0x20) = 0;
  *(uint64_t *)(lVar7 + 0x18) = 0;
  *(uint64_t *)(lVar7 + 0x40) = 5;
  *(uint64_t *)(lVar7 + 0x38) = 0;
  *(uint64_t *)(lVar7 + 0x30) = 0;
  Sprint(&DAT_005c8bf9 /* R:u32=1996515621 */,acStack_48,7);
  lVar7 = AddEditorButton(uVar1,*(uint64_t *)(self + 0x78),acStack_48,0,0);
  *(long *)(self + 0x278) = lVar7;
  *(code **)(lVar7 + 0x28) = EditorButton_ChapterLevelMusicPress;
  *(uint64_t *)(lVar7 + 0x20) = 0;
  *(uint64_t *)(lVar7 + 0x18) = 0;
  *(uint64_t *)(lVar7 + 0x40) = 6;
  *(uint64_t *)(lVar7 + 0x38) = 0;
  *(uint64_t *)(lVar7 + 0x30) = 0;
  Sprint(&DAT_005c8bf9 /* R:u32=1996515621 */,acStack_48,8);
  lVar7 = AddEditorButton(uVar1,*(uint64_t *)(self + 0x78),acStack_48,0,0);
  *(long *)(self + 0x280) = lVar7;
  *(code **)(lVar7 + 0x28) = EditorButton_ChapterLevelMusicPress;
  *(uint64_t *)(lVar7 + 0x20) = 0;
  *(uint64_t *)(lVar7 + 0x18) = 0;
  *(uint64_t *)(lVar7 + 0x40) = 7;
  *(uint64_t *)(lVar7 + 0x38) = 0;
  *(uint64_t *)(lVar7 + 0x30) = 0;
  Sprint(&DAT_005c8bf9 /* R:u32=1996515621 */,acStack_48,9);
  lVar7 = AddEditorButton(uVar1,*(uint64_t *)(self + 0x78),acStack_48,0,0);
  *(long *)(self + 0x288) = lVar7;
  *(code **)(lVar7 + 0x28) = EditorButton_ChapterLevelMusicPress;
  *(uint64_t *)(lVar7 + 0x20) = 0;
  *(uint64_t *)(lVar7 + 0x18) = 0;
  *(uint64_t *)(lVar7 + 0x40) = 8;
  *(uint64_t *)(lVar7 + 0x38) = 0;
  *(uint64_t *)(lVar7 + 0x30) = 0;
  Sprint(&DAT_005c8bf9 /* R:u32=1996515621 */,acStack_48,10);
  lVar7 = AddEditorButton(uVar1,*(uint64_t *)(self + 0x78),acStack_48,0,0);
  *(long *)(self + 0x290) = lVar7;
  *(code **)(lVar7 + 0x28) = EditorButton_ChapterLevelMusicPress;
  *(uint64_t *)(lVar7 + 0x20) = 0;
  *(uint64_t *)(lVar7 + 0x18) = 0;
  *(uint64_t *)(lVar7 + 0x40) = 9;
  *(uint64_t *)(lVar7 + 0x38) = 0;
  *(uint64_t *)(lVar7 + 0x30) = 0;
  Sprint(&DAT_005c8bf9 /* R:u32=1996515621 */,acStack_48,0xb);
  lVar7 = AddEditorButton(uVar1,*(uint64_t *)(self + 0x78),acStack_48,0,0);
  *(long *)(self + 0x298) = lVar7;
  *(code **)(lVar7 + 0x28) = EditorButton_ChapterLevelMusicPress;
  *(uint64_t *)(lVar7 + 0x20) = 0;
  *(uint64_t *)(lVar7 + 0x18) = 0;
  *(uint64_t *)(lVar7 + 0x40) = 10;
  *(uint64_t *)(lVar7 + 0x38) = 0;
  *(uint64_t *)(lVar7 + 0x30) = 0;
  Sprint(&DAT_005c8bf9 /* R:u32=1996515621 */,acStack_48,0xc);
  lVar7 = AddEditorButton(uVar1,*(uint64_t *)(self + 0x78),acStack_48,0,0);
  *(long *)(self + 0x2a0) = lVar7;
  *(code **)(lVar7 + 0x28) = EditorButton_ChapterLevelMusicPress;
  *(uint64_t *)(lVar7 + 0x20) = 0;
  *(uint64_t *)(lVar7 + 0x18) = 0;
  *(uint64_t *)(lVar7 + 0x40) = 0xb;
  *(uint64_t *)(lVar7 + 0x38) = 0;
  *(uint64_t *)(lVar7 + 0x30) = 0;
  Sprint(&DAT_005c8bf9 /* R:u32=1996515621 */,acStack_48,0xd);
  lVar7 = AddEditorButton(uVar1,*(uint64_t *)(self + 0x78),acStack_48,0,0);
  *(long *)(self + 0x2a8) = lVar7;
  *(code **)(lVar7 + 0x28) = EditorButton_ChapterLevelMusicPress;
  *(uint64_t *)(lVar7 + 0x20) = 0;
  *(uint64_t *)(lVar7 + 0x18) = 0;
  *(uint64_t *)(lVar7 + 0x40) = 0xc;
  *(uint64_t *)(lVar7 + 0x38) = 0;
  *(uint64_t *)(lVar7 + 0x30) = 0;
  Sprint(&DAT_005c8bf9 /* R:u32=1996515621 */,acStack_48,0xe);
  lVar7 = AddEditorButton(uVar1,*(uint64_t *)(self + 0x78),acStack_48,0,0);
  *(long *)(self + 0x2b0) = lVar7;
  *(code **)(lVar7 + 0x28) = EditorButton_ChapterLevelMusicPress;
  *(uint64_t *)(lVar7 + 0x20) = 0;
  *(uint64_t *)(lVar7 + 0x18) = 0;
  *(uint64_t *)(lVar7 + 0x40) = 0xd;
  *(uint64_t *)(lVar7 + 0x38) = 0;
  *(uint64_t *)(lVar7 + 0x30) = 0;
  lVar7 = AddEditorButton(uVar1,*(uint64_t *)(self + 0x78),"arrowleft",1,0);
  *(long *)(self + 0x2b8) = lVar7;
  *(code **)(lVar7 + 0x28) = EditorButton_ChapterLibraryLeftClick;
  *(uint64_t *)(lVar7 + 0x20) = 0;
  *(uint64_t *)(lVar7 + 0x18) = 0;
  *(uint64_t *)(lVar7 + 0x40) = 0;
  *(uint64_t *)(lVar7 + 0x38) = 0;
  *(uint64_t *)(lVar7 + 0x30) = 0;
  lVar7 = AddEditorButton(uVar1,*(uint64_t *)(self + 0x78),"arrowright",1,0);
  *(long *)(self + 0x2c0) = lVar7;
  *(code **)(lVar7 + 0x28) = EditorButton_ChapterLibraryRightClick;
  *(uint64_t *)(lVar7 + 0x20) = 0;
  *(uint64_t *)(lVar7 + 0x18) = 0;
  *(uint64_t *)(lVar7 + 0x40) = 0;
  *(uint64_t *)(lVar7 + 0x38) = 0;
  *(uint64_t *)(lVar7 + 0x30) = 0;
  FlashAnimationLibrary__SetTextFieldText(*(char **)(self + 0x78),"x","X");
  FlashLibraryInstance__GotoAndStop(*(FlashLibraryInstance **)(self + 8),1);
  return;
}

/* ======================================================================
 * EditorFormChapterUpload__LoadLevelLibrary  (Ghidra `LoadLevelLibrary` @ 004ba1b0)
 * Signature: uint8_t __thiscall LoadLevelLibrary(EditorFormChapterUpload * self)
 * Class: EditorFormChapterUpload
 * Calls: `CreateMessage`, `FlashAnimationLibrary__GetEditablTextFieldText`, `GetLocalizedText`, `SMBLevelPortal__GetUserLibrary`, `SQLQuery__SQLQuery`, `SQLResultSet__GetINT`, `SQLResultSet__GetString`, `SQLResultSet__NextRow`, `Sprint`, `UserAlertCloseCurrent` (+3 more)
 * Called by: `EditorButton_ChapterLevelButtonClick`, `EditorButton_ChapterLibraryLeftClick`, `EditorButton_ChapterLibraryRightClick`, `EditorForm_ChapterUploadFormSearch`
 */
/* EditorFormChapterUpload__LoadLevelLibrary() */

void __thiscall EditorFormChapterUpload__LoadLevelLibrary(EditorFormChapterUpload *self)

{
  EditorFormChapterUpload *__src;
  int iVar1;
  int iVar2;
  char *pcVar3;
  size_t sVar4;
  ulong __n;
  long lVar5;
  EditorFormChapterUpload *pEVar6;
  char *local_138;
  wchar_t *local_130;
  wchar_t *local_128;
  uint64_t local_120;
  uint64_t local_118;
  code *local_110;
  uint64_t local_108;
  uint64_t local_100;
  uint64_t local_f8;
  uint64_t local_f0;
  uint64_t local_e8;
  uint64_t local_e0;
  uint64_t local_d8;
  uint64_t local_d0;
  uint64_t local_c8;
  uint64_t local_c0;
  SQLResultSet *local_b8;
  uint32_t local_b0;
  uint32_t local_ac;
  uint16_t local_a8;
  uint16_t local_a6;
  char local_98 [32];
  char *local_78;
  uint32_t local_70;
  char *local_68;
  uint32_t local_60;
  char *local_58;
  uint32_t local_50;
  EditorFormChapterUpload *local_48 [3];
  
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = (SQLResultSet *)0x0;
  local_b0 = 0;
  local_ac = 0;
  local_a8 = 0;
  local_a6 = 0;
                    /* try { // try from 004ba21c to 004ba240 has its CatchHandler @ 004ba75a */
  pcVar3 = (char *)FlashAnimationLibrary__GetEditablTextFieldText
                             (*(FlashAnimationLibrary **)(self + 0x78),2,(wstring **)0x0);
  iVar1 = SMBLevelPortal__GetUserLibrary
                    (SuperMeatBoyPortal,(SQLQuery *)&local_c8,pcVar3,*(int *)(self + 0x7f8));
  if (iVar1 == 0) {
    local_120 = 0;
    local_118 = 0;
    local_110 = (code *)0x0;
    local_108 = 0;
    local_100 = 0;
    local_f8 = 0;
    local_f0 = 0;
    local_e8 = 0;
    local_e0 = 0;
    local_d8 = 0;
    local_d0 = 0;
    local_130 = L"Library Error";
    local_128 = L"Could not load users level library,\n please try again";
    local_138 = (char *)CONCAT44(local_138._4_4_,0xe);
                    /* try { // try from 004ba2ca to 004ba2e4 has its CatchHandler @ 004ba774 */
    local_120 = GetLocalizedText(4);
    local_110 = UserAlertCloseCurrent;
    CreateMessage(&local_138);
  }
  else {
    operator_delete(pcVar3);
    *(uint32_t *)(self + 0x640) = 0xffffffff;
    self[0x64c] = (EditorFormChapterUpload)0x0;
                    /* try { // try from 004ba335 to 004ba5c4 has its CatchHandler @ 004ba75a */
    Sprint("searchtxt%i",local_98,1);
    FlashAnimationLibrary__SetTextFieldText(*(char **)(self + 0x78),local_98,&DAT_005ca3d2 /* R:u32=1931804704 */);
    *(uint32_t *)(self + 0x66c) = 0xffffffff;
    self[0x678] = (EditorFormChapterUpload)0x0;
    Sprint("searchtxt%i",local_98,2);
    FlashAnimationLibrary__SetTextFieldText(*(char **)(self + 0x78),local_98,&DAT_005ca3d2 /* R:u32=1931804704 */);
    *(uint32_t *)(self + 0x698) = 0xffffffff;
    self[0x6a4] = (EditorFormChapterUpload)0x0;
    Sprint("searchtxt%i",local_98,3);
    FlashAnimationLibrary__SetTextFieldText(*(char **)(self + 0x78),local_98,&DAT_005ca3d2 /* R:u32=1931804704 */);
    *(uint32_t *)(self + 0x6c4) = 0xffffffff;
    self[0x6d0] = (EditorFormChapterUpload)0x0;
    Sprint("searchtxt%i",local_98,4);
    FlashAnimationLibrary__SetTextFieldText(*(char **)(self + 0x78),local_98,&DAT_005ca3d2 /* R:u32=1931804704 */);
    *(uint32_t *)(self + 0x6f0) = 0xffffffff;
    self[0x6fc] = (EditorFormChapterUpload)0x0;
    Sprint("searchtxt%i",local_98,5);
    FlashAnimationLibrary__SetTextFieldText(*(char **)(self + 0x78),local_98,&DAT_005ca3d2 /* R:u32=1931804704 */);
    *(uint32_t *)(self + 0x71c) = 0xffffffff;
    self[0x728] = (EditorFormChapterUpload)0x0;
    Sprint("searchtxt%i",local_98,6);
    FlashAnimationLibrary__SetTextFieldText(*(char **)(self + 0x78),local_98,&DAT_005ca3d2 /* R:u32=1931804704 */);
    *(uint32_t *)(self + 0x748) = 0xffffffff;
    self[0x754] = (EditorFormChapterUpload)0x0;
    Sprint("searchtxt%i",local_98,7);
    FlashAnimationLibrary__SetTextFieldText(*(char **)(self + 0x78),local_98,&DAT_005ca3d2 /* R:u32=1931804704 */);
    *(uint32_t *)(self + 0x774) = 0xffffffff;
    self[0x780] = (EditorFormChapterUpload)0x0;
    Sprint("searchtxt%i",local_98,8);
    FlashAnimationLibrary__SetTextFieldText(*(char **)(self + 0x78),local_98,&DAT_005ca3d2 /* R:u32=1931804704 */);
    *(uint32_t *)(self + 0x7a0) = 0xffffffff;
    self[0x7ac] = (EditorFormChapterUpload)0x0;
    Sprint("searchtxt%i",local_98,9);
    FlashAnimationLibrary__SetTextFieldText(*(char **)(self + 0x78),local_98,&DAT_005ca3d2 /* R:u32=1931804704 */);
    *(uint32_t *)(self + 0x7cc) = 0xffffffff;
    self[0x7d8] = (EditorFormChapterUpload)0x0;
    Sprint("searchtxt%i",local_98,10);
    FlashAnimationLibrary__SetTextFieldText(*(char **)(self + 0x78),local_98,&DAT_005ca3d2 /* R:u32=1931804704 */);
    iVar1 = 0;
    pEVar6 = self;
    if (local_b8 != (SQLResultSet *)0x0) {
      while ((iVar2 = SQLResultSet__NextRow(local_b8), iVar2 == 1 && (iVar1 != 10))) {
        lVar5 = (long)iVar1;
        local_130 = (wchar_t *)CONCAT44(local_130._4_4_,0xffffffff);
        local_138 = "levelname";
        local_70 = 0xffffffff;
        local_78 = "level_id";
                    /* try { // try from 004ba624 to 004ba628 has its CatchHandler @ 004ba772 */
        SQLResultSet__GetINT
                  (local_b8,(SQLFieldName *)&local_78,(int *)(self + lVar5 * 0x2c + 0x640),
                   (uint *)0x0);
        local_60 = 0xffffffff;
        local_68 = "palette";
                    /* try { // try from 004ba662 to 004ba666 has its CatchHandler @ 004ba76f */
        SQLResultSet__GetINT
                  (local_b8,(SQLFieldName *)&local_68,(int *)(self + lVar5 * 0x2c + 0x644),
                   (uint *)0x0);
        local_50 = 0xffffffff;
        local_58 = "char_id";
                    /* try { // try from 004ba6a0 to 004ba6f4 has its CatchHandler @ 004ba76d */
        SQLResultSet__GetINT
                  (local_b8,(SQLFieldName *)&local_58,(int *)(self + lVar5 * 0x2c + 0x648),
                   (uint *)0x0);
        SQLResultSet__GetString(local_b8,(SQLFieldName *)&local_138,(char **)local_48,(uint *)0x0);
        iVar1 = iVar1 + 1;
        Sprint("searchtxt%i",local_98,iVar1);
        FlashAnimationLibrary__SetTextFieldText(*(char **)(self + 0x78),local_98,local_48[0]);
        __src = local_48[0];
        sVar4 = strlen((char *)local_48[0]);
        __n = sVar4 + 1;
        if (0x1f < __n) {
          __n = 0x20;
        }
        if (__src != self + lVar5 * 0x2c + 0x64c) {
          memcpy(self + lVar5 * 0x2c + 0x64c,__src,__n);
        }
        pEVar6[0x66b] = (EditorFormChapterUpload)0x0;
        if (__src != (EditorFormChapterUpload *)0x0) {
          operator_delete__(__src);
        }
        pEVar6 = pEVar6 + 0x2c;
      }
    }
  }
  SQLQuery__SQLQuery((SQLQuery *)&local_c8);
  return;
}

/* ======================================================================
 * EditorFormChapterUpload__UploadChapter  (Ghidra `UploadChapter` @ 004ba780)
 * Signature: uint8_t __thiscall UploadChapter(EditorFormChapterUpload * self)
 * Class: EditorFormChapterUpload
 * Calls: `CreateMessage`, `FlashAnimationLibrary__GetEditablTextFieldText`, `GetLocalizedText`, `SMBLevelPortal__AddChapter`, `UserAlertCloseCurrent`, `memcpy`, `strlen`
 * Called by: `EditorForm_ChapterUploadFormOk`
 */
/* EditorFormChapterUpload__UploadChapter() */

void __thiscall EditorFormChapterUpload__UploadChapter(EditorFormChapterUpload *self)

{
  EditorFormChapterUpload *pEVar1;
  char *__s;
  size_t sVar2;
  int iVar3;
  uint64_t local_108;
  uint64_t local_100;
  uint64_t local_f8;
  ulong local_f0;
  int local_e8;
  int local_e4;
  int local_e0;
  int local_dc [21];
  uint32_t local_88 [2];
  wchar_t *local_80;
  wchar_t *local_78;
  uint64_t local_70;
  uint64_t local_68;
  code *local_60;
  uint64_t local_58;
  uint64_t local_50;
  uint64_t local_48;
  uint64_t local_40;
  uint64_t local_38;
  uint64_t local_30;
  uint64_t local_28;
  uint64_t local_20;
  
  local_e0 = -1;
  pEVar1 = self + 0x2d0;
  local_e4 = -1;
  iVar3 = 0;
  local_dc[0] = -1;
  local_dc[1] = -1;
  local_dc[2] = -1;
  local_dc[3] = -1;
  local_dc[4] = -1;
  local_dc[5] = -1;
  local_dc[6] = -1;
  local_dc[7] = -1;
  local_dc[8] = -1;
  local_dc[9] = -1;
  local_dc[10] = -1;
  local_dc[0xb] = -1;
  local_dc[0xc] = -1;
  local_dc[0xd] = -1;
  local_dc[0xe] = -1;
  local_dc[0xf] = -1;
  local_dc[0x10] = -1;
  local_dc[0x11] = -1;
  local_dc[0x12] = -1;
  local_dc[0x13] = -1;
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = local_e4;
  do {
    if (*(int *)pEVar1 != -1) {
      local_dc[iVar3] = *(int *)pEVar1;
      if (local_e0 == -1) {
        local_e0 = *(int *)(pEVar1 + 8);
        local_e4 = *(int *)(pEVar1 + 4);
        local_e8 = *(int *)(self + 0x7fc);
      }
      iVar3 = iVar3 + 1;
    }
    pEVar1 = pEVar1 + 0x2c;
  } while (pEVar1 != self + 0x640);
  if (iVar3 < 5) {
    local_78 = L"You must have at least \n5 levels to upload a chapter";
  }
  else {
    __s = (char *)FlashAnimationLibrary__GetEditablTextFieldText
                            (*(FlashAnimationLibrary **)(self + 0x78),1,(wstring **)0x0);
    sVar2 = strlen(__s);
    iVar3 = (int)sVar2;
    if (3 < iVar3) {
      sVar2 = 0x20;
      if (iVar3 < 0x1f) {
        sVar2 = (size_t)(iVar3 + 1);
      }
      if (__s != (char *)&local_108) {
        memcpy(&local_108,__s,sVar2);
      }
      local_f0 = local_f0 & 0xffffffffffffff;
      SMBLevelPortal__AddChapter(SuperMeatBoyPortal,(SMBPortalChapterCreate *)&local_108);
      local_70 = 0;
      local_68 = 0;
      local_60 = (code *)0x0;
      local_58 = 0;
      local_50 = 0;
      local_48 = 0;
      local_40 = 0;
      local_38 = 0;
      local_30 = 0;
      local_28 = 0;
      local_20 = 0;
      local_80 = L"Chapter Uploaded";
      local_78 = L"Your chapter has been uploaded";
      local_88[0] = 0xe;
      local_70 = GetLocalizedText(4);
      local_60 = UserAlertCloseCurrent;
      CreateMessage(local_88);
      if (__s == (char *)0x0) {
        return;
      }
      operator_delete__(__s);
      return;
    }
    local_78 = L"Chapter name is not long enough";
  }
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = (code *)0x0;
  local_68 = 0;
  local_70 = 0;
  local_80 = L"Upload Chapter";
  local_88[0] = 0xe;
  local_70 = GetLocalizedText(4);
  local_60 = UserAlertCloseCurrent;
  CreateMessage(local_88);
  return;
}
