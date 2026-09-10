/* src/game/classes/ResizeableArray.c — 48 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "ResizeableArray.h"

/* ======================================================================
 * ResizeableArray_tagUnlockScreen__ResizeableArray  (Ghidra `~ResizeableArray` @ 00480de0)
 * Signature: uint8_t __thiscall ~ResizeableArray(ResizeableArray<tagUnlockScreen> * self)
 * Class: ResizeableArray<tagUnlockScreen>
 * Calls: `CriticalSection__CriticalSection__005b71d0`, `free`
 * Called by: (none)
 */
/* ResizeableArray_tagUnlockScreen__ResizeableArray() */

void __thiscall
ResizeableArray_tagUnlockScreen__ResizeableArray(ResizeableArray<tagUnlockScreen> *self)

{
  if (*(int *)(self + 0x48) != -0x5eef3582) {
    CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
    return;
  }
  *(uint32_t *)(self + 0x48) = 0;
  free(*(void **)(*(long *)(self + 0x38) + -8));
  if (*(int *)(self + 0x30) == 1) {
    free(*(void **)(*(long *)(self + 0x40) + -8));
  }
  *(uint32_t *)(self + 0x48) = 0;
  *(uint16_t *)(self + 0x2a) = 0;
  *(uint16_t *)(self + 0x28) = 0;
  *(uint64_t *)(self + 0x38) = 0;
  *(uint64_t *)(self + 0x40) = 0;
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
  return;
}

/* ======================================================================
 * ResizeableArray_MrMinecraft__ManipulatedBlock_ResizeableArray  (Ghidra `~ResizeableArray` @ 00482a40)
 * Signature: uint8_t __thiscall ~ResizeableArray(ResizeableArray<MrMinecraft::ManipulatedBlock> * self)
 * Class: ResizeableArray<MrMinecraft
 * Calls: `CriticalSection__CriticalSection__005b71d0`, `free`
 * Called by: (none)
 */
/* ResizeableArray_MrMinecraft__ManipulatedBlock_ResizeableArray() */

void __thiscall
ResizeableArray_MrMinecraft__ManipulatedBlock_ResizeableArray
          (ResizeableArray_MrMinecraft__ManipulatedBlock *self)

{
  if (*(int *)(self + 0x48) != -0x5eef3582) {
    CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
    return;
  }
  *(uint32_t *)(self + 0x48) = 0;
  free(*(void **)(*(long *)(self + 0x38) + -8));
  if (*(int *)(self + 0x30) == 1) {
    free(*(void **)(*(long *)(self + 0x40) + -8));
  }
  *(uint32_t *)(self + 0x48) = 0;
  *(uint16_t *)(self + 0x2a) = 0;
  *(uint16_t *)(self + 0x28) = 0;
  *(uint64_t *)(self + 0x38) = 0;
  *(uint64_t *)(self + 0x40) = 0;
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
  return;
}

/* ======================================================================
 * ResizeableArray_SMBAnimal__ResizeableArray  (Ghidra `~ResizeableArray` @ 0048ca70)
 * Signature: uint8_t __thiscall ~ResizeableArray(ResizeableArray<SMBAnimal*> * self)
 * Class: ResizeableArray<SMBAnimal*>
 * Calls: `CriticalSection__CriticalSection__005b71d0`, `free`
 * Called by: (none)
 */
/* ResizeableArray_SMBAnimal__ResizeableArray() */

void __thiscall ResizeableArray_SMBAnimal__ResizeableArray(ResizeableArray<SMBAnimal*> *self)

{
  if (*(int *)(self + 0x48) != -0x5eef3582) {
    CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
    return;
  }
  *(uint32_t *)(self + 0x48) = 0;
  free(*(void **)(*(long *)(self + 0x38) + -8));
  if (*(int *)(self + 0x30) == 1) {
    free(*(void **)(*(long *)(self + 0x40) + -8));
  }
  *(uint32_t *)(self + 0x48) = 0;
  *(uint16_t *)(self + 0x2a) = 0;
  *(uint16_t *)(self + 0x28) = 0;
  *(uint64_t *)(self + 0x38) = 0;
  *(uint64_t *)(self + 0x40) = 0;
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
  return;
}

/* ======================================================================
 * ResizeableArray_SMBChapter__LevelInfo_ResizeableArray  (Ghidra `~ResizeableArray` @ 00495ab0)
 * Signature: uint8_t __thiscall ~ResizeableArray(ResizeableArray<SMBChapter::LevelInfo> * self)
 * Class: ResizeableArray<SMBChapter
 * Calls: `CriticalSection__CriticalSection__005b71d0`, `free`
 * Called by: (none)
 */
/* ResizeableArray_SMBChapter__LevelInfo_ResizeableArray() */

void __thiscall
ResizeableArray_SMBChapter__LevelInfo_ResizeableArray
          (ResizeableArray_SMBChapter__LevelInfo *self)

{
  if (*(int *)(self + 0x48) != -0x5eef3582) {
    CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
    return;
  }
  *(uint32_t *)(self + 0x48) = 0;
  free(*(void **)(*(long *)(self + 0x38) + -8));
  if (*(int *)(self + 0x30) == 1) {
    free(*(void **)(*(long *)(self + 0x40) + -8));
  }
  *(uint32_t *)(self + 0x48) = 0;
  *(uint16_t *)(self + 0x2a) = 0;
  *(uint16_t *)(self + 0x28) = 0;
  *(uint64_t *)(self + 0x38) = 0;
  *(uint64_t *)(self + 0x40) = 0;
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
  return;
}

/* ======================================================================
 * ResizeableArray_SMBChapter__WarpZone_ResizeableArray  (Ghidra `~ResizeableArray` @ 00495b30)
 * Signature: uint8_t __thiscall ~ResizeableArray(ResizeableArray<SMBChapter::WarpZone> * self)
 * Class: ResizeableArray<SMBChapter
 * Calls: `CriticalSection__CriticalSection__005b71d0`, `free`
 * Called by: (none)
 */
/* ResizeableArray_SMBChapter__WarpZone_ResizeableArray() */

void __thiscall
ResizeableArray_SMBChapter__WarpZone_ResizeableArray(ResizeableArray_SMBChapter__WarpZone *self)

{
  if (*(int *)(self + 0x48) != -0x5eef3582) {
    CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
    return;
  }
  *(uint32_t *)(self + 0x48) = 0;
  free(*(void **)(*(long *)(self + 0x38) + -8));
  if (*(int *)(self + 0x30) == 1) {
    free(*(void **)(*(long *)(self + 0x40) + -8));
  }
  *(uint32_t *)(self + 0x48) = 0;
  *(uint16_t *)(self + 0x2a) = 0;
  *(uint16_t *)(self + 0x28) = 0;
  *(uint64_t *)(self + 0x38) = 0;
  *(uint64_t *)(self + 0x40) = 0;
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
  return;
}

/* ======================================================================
 * ResizeableArray_EditorButton__ResizeableArray  (Ghidra `~ResizeableArray` @ 004b59f0)
 * Signature: uint8_t __thiscall ~ResizeableArray(ResizeableArray<EditorButton*> * self)
 * Class: ResizeableArray<EditorButton*>
 * Calls: `CriticalSection__CriticalSection__005b71d0`, `free`
 * Called by: `GLOBAL_sub_I_UserLoginCheck`
 */
/* ResizeableArray_EditorButton__ResizeableArray() */

void __thiscall
ResizeableArray_EditorButton__ResizeableArray(ResizeableArray<EditorButton*> *self)

{
  if (*(int *)(self + 0x48) != -0x5eef3582) {
    CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
    return;
  }
  *(uint32_t *)(self + 0x48) = 0;
  free(*(void **)(*(long *)(self + 0x38) + -8));
  if (*(int *)(self + 0x30) == 1) {
    free(*(void **)(*(long *)(self + 0x40) + -8));
  }
  *(uint32_t *)(self + 0x48) = 0;
  *(uint16_t *)(self + 0x2a) = 0;
  *(uint16_t *)(self + 0x28) = 0;
  *(uint64_t *)(self + 0x38) = 0;
  *(uint64_t *)(self + 0x40) = 0;
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
  return;
}

/* ======================================================================
 * ResizeableArray_SortedSetPiece__ResizeableArray  (Ghidra `~ResizeableArray` @ 004b5a70)
 * Signature: uint8_t __thiscall ~ResizeableArray(ResizeableArray<SortedSetPiece> * self)
 * Class: ResizeableArray<SortedSetPiece>
 * Calls: `CriticalSection__CriticalSection__005b71d0`, `free`
 * Called by: `AdjustSetPieceLayering`
 */
/* ResizeableArray_SortedSetPiece__ResizeableArray() */

void __thiscall
ResizeableArray_SortedSetPiece__ResizeableArray(ResizeableArray<SortedSetPiece> *self)

{
  if (*(int *)(self + 0x48) != -0x5eef3582) {
    CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
    return;
  }
  *(uint32_t *)(self + 0x48) = 0;
  free(*(void **)(*(long *)(self + 0x38) + -8));
  if (*(int *)(self + 0x30) == 1) {
    free(*(void **)(*(long *)(self + 0x40) + -8));
  }
  *(uint32_t *)(self + 0x48) = 0;
  *(uint16_t *)(self + 0x2a) = 0;
  *(uint16_t *)(self + 0x28) = 0;
  *(uint64_t *)(self + 0x38) = 0;
  *(uint64_t *)(self + 0x40) = 0;
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
  return;
}

/* ======================================================================
 * ResizeableArray_TileLevelSetPiece__ResizeableArray  (Ghidra `~ResizeableArray` @ 004b5af0)
 * Signature: uint8_t __thiscall ~ResizeableArray(ResizeableArray<TileLevelSetPiece*> * self)
 * Class: ResizeableArray<TileLevelSetPiece*>
 * Calls: `CriticalSection__CriticalSection__005b71d0`, `free`
 * Called by: `GLOBAL_sub_I_UserLoginCheck`
 */
/* ResizeableArray_TileLevelSetPiece__ResizeableArray() */

void __thiscall
ResizeableArray_TileLevelSetPiece__ResizeableArray(ResizeableArray<TileLevelSetPiece*> *self)

{
  if (*(int *)(self + 0x48) != -0x5eef3582) {
    CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
    return;
  }
  *(uint32_t *)(self + 0x48) = 0;
  free(*(void **)(*(long *)(self + 0x38) + -8));
  if (*(int *)(self + 0x30) == 1) {
    free(*(void **)(*(long *)(self + 0x40) + -8));
  }
  *(uint32_t *)(self + 0x48) = 0;
  *(uint16_t *)(self + 0x2a) = 0;
  *(uint16_t *)(self + 0x28) = 0;
  *(uint64_t *)(self + 0x38) = 0;
  *(uint64_t *)(self + 0x40) = 0;
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
  return;
}

/* ======================================================================
 * ResizeableArray_EditorLayerColorTweens__ResizeableArray  (Ghidra `~ResizeableArray` @ 004b5b70)
 * Signature: uint8_t __thiscall ~ResizeableArray(ResizeableArray<EditorLayerColorTweens> * self)
 * Class: ResizeableArray<EditorLayerColorTweens>
 * Calls: `CriticalSection__CriticalSection__005b71d0`, `free`
 * Called by: `GLOBAL_sub_I_UserLoginCheck`
 */
/* ResizeableArray_EditorLayerColorTweens__ResizeableArray() */

void __thiscall
ResizeableArray_EditorLayerColorTweens__ResizeableArray
          (ResizeableArray<EditorLayerColorTweens> *self)

{
  if (*(int *)(self + 0x48) != -0x5eef3582) {
    CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
    return;
  }
  *(uint32_t *)(self + 0x48) = 0;
  free(*(void **)(*(long *)(self + 0x38) + -8));
  if (*(int *)(self + 0x30) == 1) {
    free(*(void **)(*(long *)(self + 0x40) + -8));
  }
  *(uint32_t *)(self + 0x48) = 0;
  *(uint16_t *)(self + 0x2a) = 0;
  *(uint16_t *)(self + 0x28) = 0;
  *(uint64_t *)(self + 0x38) = 0;
  *(uint64_t *)(self + 0x40) = 0;
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
  return;
}

/* ======================================================================
 * ResizeableArray_SelectedBlock__ResizeableArray  (Ghidra `~ResizeableArray` @ 004b5bf0)
 * Signature: uint8_t __thiscall ~ResizeableArray(ResizeableArray<SelectedBlock> * self)
 * Class: ResizeableArray<SelectedBlock>
 * Calls: `CriticalSection__CriticalSection__005b71d0`, `free`
 * Called by: `GLOBAL_sub_I_UserLoginCheck`
 */
/* ResizeableArray_SelectedBlock__ResizeableArray() */

void __thiscall
ResizeableArray_SelectedBlock__ResizeableArray(ResizeableArray<SelectedBlock> *self)

{
  if (*(int *)(self + 0x48) != -0x5eef3582) {
    CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
    return;
  }
  *(uint32_t *)(self + 0x48) = 0;
  free(*(void **)(*(long *)(self + 0x38) + -8));
  if (*(int *)(self + 0x30) == 1) {
    free(*(void **)(*(long *)(self + 0x40) + -8));
  }
  *(uint32_t *)(self + 0x48) = 0;
  *(uint16_t *)(self + 0x2a) = 0;
  *(uint16_t *)(self + 0x28) = 0;
  *(uint64_t *)(self + 0x38) = 0;
  *(uint64_t *)(self + 0x40) = 0;
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
  return;
}

/* ======================================================================
 * ResizeableArray_TileLevelSetPiece__ResizeableArray__004b5c70  (Ghidra `~ResizeableArray` @ 004b5c70)
 * Signature: uint8_t __thiscall ~ResizeableArray(ResizeableArray<TileLevelSetPiece> * self)
 * Class: ResizeableArray<TileLevelSetPiece>
 * Calls: `CriticalSection__CriticalSection__005b71d0`, `free`
 * Called by: `GLOBAL_sub_I_UserLoginCheck`
 */
/* ResizeableArray_TileLevelSetPiece__ResizeableArray__004b5c70() */

void __thiscall
ResizeableArray_TileLevelSetPiece__ResizeableArray__004b5c70(ResizeableArray<TileLevelSetPiece> *self)

{
  if (*(int *)(self + 0x48) != -0x5eef3582) {
    CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
    return;
  }
  *(uint32_t *)(self + 0x48) = 0;
  free(*(void **)(*(long *)(self + 0x38) + -8));
  if (*(int *)(self + 0x30) == 1) {
    free(*(void **)(*(long *)(self + 0x40) + -8));
  }
  *(uint32_t *)(self + 0x48) = 0;
  *(uint16_t *)(self + 0x2a) = 0;
  *(uint16_t *)(self + 0x28) = 0;
  *(uint64_t *)(self + 0x38) = 0;
  *(uint64_t *)(self + 0x40) = 0;
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
  return;
}

/* ======================================================================
 * ResizeableArray_RemoteChapter__ResizeableArray  (Ghidra `~ResizeableArray` @ 004da000)
 * Signature: uint8_t __thiscall ~ResizeableArray(ResizeableArray<RemoteChapter*> * self)
 * Class: ResizeableArray<RemoteChapter*>
 * Calls: `CriticalSection__CriticalSection__005b71d0`, `free`
 * Called by: `GLOBAL_sub_I_SMBMenu`
 */
/* ResizeableArray_RemoteChapter__ResizeableArray() */

void __thiscall
ResizeableArray_RemoteChapter__ResizeableArray(ResizeableArray<RemoteChapter*> *self)

{
  if (*(int *)(self + 0x48) != -0x5eef3582) {
    CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
    return;
  }
  *(uint32_t *)(self + 0x48) = 0;
  free(*(void **)(*(long *)(self + 0x38) + -8));
  if (*(int *)(self + 0x30) == 1) {
    free(*(void **)(*(long *)(self + 0x40) + -8));
  }
  *(uint32_t *)(self + 0x48) = 0;
  *(uint16_t *)(self + 0x2a) = 0;
  *(uint16_t *)(self + 0x28) = 0;
  *(uint64_t *)(self + 0x38) = 0;
  *(uint64_t *)(self + 0x40) = 0;
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
  return;
}

/* ======================================================================
 * ResizeableArray_GSMBMenu__CharacterSilouette_ResizeableArray  (Ghidra `~ResizeableArray` @ 004da280)
 * Signature: uint8_t __thiscall ~ResizeableArray(ResizeableArray<GSMBMenu::CharacterSilouette> * self)
 * Class: ResizeableArray<GSMBMenu
 * Calls: `CriticalSection__CriticalSection__005b71d0`, `free`
 * Called by: (none)
 */
/* ResizeableArray_GSMBMenu__CharacterSilouette_ResizeableArray() */

void __thiscall
ResizeableArray_GSMBMenu__CharacterSilouette_ResizeableArray
          (ResizeableArray_GSMBMenu__CharacterSilouette *self)

{
  if (*(int *)(self + 0x48) != -0x5eef3582) {
    CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
    return;
  }
  *(uint32_t *)(self + 0x48) = 0;
  free(*(void **)(*(long *)(self + 0x38) + -8));
  if (*(int *)(self + 0x30) == 1) {
    free(*(void **)(*(long *)(self + 0x40) + -8));
  }
  *(uint32_t *)(self + 0x48) = 0;
  *(uint16_t *)(self + 0x2a) = 0;
  *(uint16_t *)(self + 0x28) = 0;
  *(uint64_t *)(self + 0x38) = 0;
  *(uint64_t *)(self + 0x40) = 0;
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
  return;
}

/* ======================================================================
 * ResizeableArray_GSMBMenu__WarpInstance_ResizeableArray  (Ghidra `~ResizeableArray` @ 004da300)
 * Signature: uint8_t __thiscall ~ResizeableArray(ResizeableArray<GSMBMenu::WarpInstance> * self)
 * Class: ResizeableArray<GSMBMenu
 * Calls: `CriticalSection__CriticalSection__005b71d0`, `free`
 * Called by: (none)
 */
/* ResizeableArray_GSMBMenu__WarpInstance_ResizeableArray() */

void __thiscall
ResizeableArray_GSMBMenu__WarpInstance_ResizeableArray
          (ResizeableArray_GSMBMenu__WarpInstance *self)

{
  if (*(int *)(self + 0x48) != -0x5eef3582) {
    CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
    return;
  }
  *(uint32_t *)(self + 0x48) = 0;
  free(*(void **)(*(long *)(self + 0x38) + -8));
  if (*(int *)(self + 0x30) == 1) {
    free(*(void **)(*(long *)(self + 0x40) + -8));
  }
  *(uint32_t *)(self + 0x48) = 0;
  *(uint16_t *)(self + 0x2a) = 0;
  *(uint16_t *)(self + 0x28) = 0;
  *(uint64_t *)(self + 0x38) = 0;
  *(uint64_t *)(self + 0x40) = 0;
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
  return;
}

/* ======================================================================
 * ResizeableArray_GSMBMenu__LevelIcon_ResizeableArray  (Ghidra `~ResizeableArray` @ 004da380)
 * Signature: uint8_t __thiscall ~ResizeableArray(ResizeableArray<GSMBMenu::LevelIcon> * self)
 * Class: ResizeableArray<GSMBMenu
 * Calls: `CriticalSection__CriticalSection__005b71d0`, `free`
 * Called by: (none)
 */
/* ResizeableArray_GSMBMenu__LevelIcon_ResizeableArray() */

void __thiscall
ResizeableArray_GSMBMenu__LevelIcon_ResizeableArray(ResizeableArray_GSMBMenu__LevelIcon *self)

{
  if (*(int *)(self + 0x48) != -0x5eef3582) {
    CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
    return;
  }
  *(uint32_t *)(self + 0x48) = 0;
  free(*(void **)(*(long *)(self + 0x38) + -8));
  if (*(int *)(self + 0x30) == 1) {
    free(*(void **)(*(long *)(self + 0x40) + -8));
  }
  *(uint32_t *)(self + 0x48) = 0;
  *(uint16_t *)(self + 0x2a) = 0;
  *(uint16_t *)(self + 0x28) = 0;
  *(uint64_t *)(self + 0x38) = 0;
  *(uint64_t *)(self + 0x40) = 0;
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
  return;
}

/* ======================================================================
 * ResizeableArray_ChapterMessageString__ResizeableArray  (Ghidra `~ResizeableArray` @ 004da400)
 * Signature: uint8_t __thiscall ~ResizeableArray(ResizeableArray<ChapterMessageString> * self)
 * Class: ResizeableArray<ChapterMessageString>
 * Calls: `CriticalSection__CriticalSection__005b71d0`, `free`
 * Called by: (none)
 */
/* ResizeableArray_ChapterMessageString__ResizeableArray() */

void __thiscall
ResizeableArray_ChapterMessageString__ResizeableArray(ResizeableArray<ChapterMessageString> *self)

{
  if (*(int *)(self + 0x48) != -0x5eef3582) {
    CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
    return;
  }
  *(uint32_t *)(self + 0x48) = 0;
  free(*(void **)(*(long *)(self + 0x38) + -8));
  if (*(int *)(self + 0x30) == 1) {
    free(*(void **)(*(long *)(self + 0x40) + -8));
  }
  *(uint32_t *)(self + 0x48) = 0;
  *(uint16_t *)(self + 0x2a) = 0;
  *(uint16_t *)(self + 0x28) = 0;
  *(uint64_t *)(self + 0x38) = 0;
  *(uint64_t *)(self + 0x40) = 0;
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
  return;
}

/* ======================================================================
 * ResizeableArray_FlashLibraryInstance__ResizeableArray  (Ghidra `~ResizeableArray` @ 00500480)
 * Signature: uint8_t __thiscall ~ResizeableArray(ResizeableArray<FlashLibraryInstance*> * self)
 * Class: ResizeableArray<FlashLibraryInstance*>
 * Calls: `CriticalSection__CriticalSection__005b71d0`, `free`
 * Called by: (none)
 */
/* ResizeableArray_FlashLibraryInstance__ResizeableArray() */

void __thiscall
ResizeableArray_FlashLibraryInstance__ResizeableArray
          (ResizeableArray<FlashLibraryInstance*> *self)

{
  if (*(int *)(self + 0x48) != -0x5eef3582) {
    CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
    return;
  }
  *(uint32_t *)(self + 0x48) = 0;
  free(*(void **)(*(long *)(self + 0x38) + -8));
  if (*(int *)(self + 0x30) == 1) {
    free(*(void **)(*(long *)(self + 0x40) + -8));
  }
  *(uint32_t *)(self + 0x48) = 0;
  *(uint16_t *)(self + 0x2a) = 0;
  *(uint16_t *)(self + 0x28) = 0;
  *(uint64_t *)(self + 0x38) = 0;
  *(uint64_t *)(self + 0x40) = 0;
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
  return;
}

/* ======================================================================
 * ResizeableArray_LevelTransition__ResizeableArray  (Ghidra `~ResizeableArray` @ 00500500)
 * Signature: uint8_t __thiscall ~ResizeableArray(ResizeableArray<LevelTransition> * self)
 * Class: ResizeableArray<LevelTransition>
 * Calls: `CriticalSection__CriticalSection__005b71d0`, `free`
 * Called by: (none)
 */
/* ResizeableArray_LevelTransition__ResizeableArray() */

void __thiscall
ResizeableArray_LevelTransition__ResizeableArray(ResizeableArray<LevelTransition> *self)

{
  if (*(int *)(self + 0x48) != -0x5eef3582) {
    CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
    return;
  }
  *(uint32_t *)(self + 0x48) = 0;
  free(*(void **)(*(long *)(self + 0x38) + -8));
  if (*(int *)(self + 0x30) == 1) {
    free(*(void **)(*(long *)(self + 0x40) + -8));
  }
  *(uint32_t *)(self + 0x48) = 0;
  *(uint16_t *)(self + 0x2a) = 0;
  *(uint16_t *)(self + 0x28) = 0;
  *(uint64_t *)(self + 0x38) = 0;
  *(uint64_t *)(self + 0x40) = 0;
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
  return;
}

/* ======================================================================
 * ResizeableArray_SMBSwitch__ResizeableArray  (Ghidra `~ResizeableArray` @ 00500580)
 * Signature: uint8_t __thiscall ~ResizeableArray(ResizeableArray<SMBSwitch> * self)
 * Class: ResizeableArray<SMBSwitch>
 * Calls: `CriticalSection__CriticalSection__005b71d0`, `free`
 * Called by: (none)
 */
/* ResizeableArray_SMBSwitch__ResizeableArray() */

void __thiscall ResizeableArray_SMBSwitch__ResizeableArray(ResizeableArray<SMBSwitch> *self)

{
  if (*(int *)(self + 0x48) != -0x5eef3582) {
    CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
    return;
  }
  *(uint32_t *)(self + 0x48) = 0;
  free(*(void **)(*(long *)(self + 0x38) + -8));
  if (*(int *)(self + 0x30) == 1) {
    free(*(void **)(*(long *)(self + 0x40) + -8));
  }
  *(uint32_t *)(self + 0x48) = 0;
  *(uint16_t *)(self + 0x2a) = 0;
  *(uint16_t *)(self + 0x28) = 0;
  *(uint64_t *)(self + 0x38) = 0;
  *(uint64_t *)(self + 0x40) = 0;
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
  return;
}

/* ======================================================================
 * ResizeableArray_SMBCurrUnlockBlock__ResizeableArray  (Ghidra `~ResizeableArray` @ 00500600)
 * Signature: uint8_t __thiscall ~ResizeableArray(ResizeableArray<SMBCurrUnlockBlock> * self)
 * Class: ResizeableArray<SMBCurrUnlockBlock>
 * Calls: `CriticalSection__CriticalSection__005b71d0`, `free`
 * Called by: (none)
 */
/* ResizeableArray_SMBCurrUnlockBlock__ResizeableArray() */

void __thiscall
ResizeableArray_SMBCurrUnlockBlock__ResizeableArray(ResizeableArray<SMBCurrUnlockBlock> *self)

{
  if (*(int *)(self + 0x48) != -0x5eef3582) {
    CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
    return;
  }
  *(uint32_t *)(self + 0x48) = 0;
  free(*(void **)(*(long *)(self + 0x38) + -8));
  if (*(int *)(self + 0x30) == 1) {
    free(*(void **)(*(long *)(self + 0x40) + -8));
  }
  *(uint32_t *)(self + 0x48) = 0;
  *(uint16_t *)(self + 0x2a) = 0;
  *(uint16_t *)(self + 0x28) = 0;
  *(uint64_t *)(self + 0x38) = 0;
  *(uint64_t *)(self + 0x40) = 0;
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
  return;
}

/* ======================================================================
 * ResizeableArray_ReplayBreakyBlock__ResizeableArray  (Ghidra `~ResizeableArray` @ 00500680)
 * Signature: uint8_t __thiscall ~ResizeableArray(ResizeableArray<ReplayBreakyBlock> * self)
 * Class: ResizeableArray<ReplayBreakyBlock>
 * Calls: `CriticalSection__CriticalSection__005b71d0`, `free`
 * Called by: (none)
 */
/* ResizeableArray_ReplayBreakyBlock__ResizeableArray() */

void __thiscall
ResizeableArray_ReplayBreakyBlock__ResizeableArray(ResizeableArray<ReplayBreakyBlock> *self)

{
  if (*(int *)(self + 0x48) != -0x5eef3582) {
    CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
    return;
  }
  *(uint32_t *)(self + 0x48) = 0;
  free(*(void **)(*(long *)(self + 0x38) + -8));
  if (*(int *)(self + 0x30) == 1) {
    free(*(void **)(*(long *)(self + 0x40) + -8));
  }
  *(uint32_t *)(self + 0x48) = 0;
  *(uint16_t *)(self + 0x2a) = 0;
  *(uint16_t *)(self + 0x28) = 0;
  *(uint64_t *)(self + 0x38) = 0;
  *(uint64_t *)(self + 0x40) = 0;
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
  return;
}

/* ======================================================================
 * ResizeableArray_BreakyBlock__ResizeableArray  (Ghidra `~ResizeableArray` @ 00500700)
 * Signature: uint8_t __thiscall ~ResizeableArray(ResizeableArray<BreakyBlock> * self)
 * Class: ResizeableArray<BreakyBlock>
 * Calls: `CriticalSection__CriticalSection__005b71d0`, `free`
 * Called by: (none)
 */
/* ResizeableArray_BreakyBlock__ResizeableArray() */

void __thiscall ResizeableArray_BreakyBlock__ResizeableArray(ResizeableArray<BreakyBlock> *self)

{
  if (*(int *)(self + 0x48) != -0x5eef3582) {
    CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
    return;
  }
  *(uint32_t *)(self + 0x48) = 0;
  free(*(void **)(*(long *)(self + 0x38) + -8));
  if (*(int *)(self + 0x30) == 1) {
    free(*(void **)(*(long *)(self + 0x40) + -8));
  }
  *(uint32_t *)(self + 0x48) = 0;
  *(uint16_t *)(self + 0x2a) = 0;
  *(uint16_t *)(self + 0x28) = 0;
  *(uint64_t *)(self + 0x38) = 0;
  *(uint64_t *)(self + 0x40) = 0;
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
  return;
}

/* ======================================================================
 * ResizeableArray_SMBShooter__ResizeableArray  (Ghidra `~ResizeableArray` @ 00500780)
 * Signature: uint8_t __thiscall ~ResizeableArray(ResizeableArray<SMBShooter> * self)
 * Class: ResizeableArray<SMBShooter>
 * Calls: `CriticalSection__CriticalSection__005b71d0`, `free`
 * Called by: (none)
 */
/* ResizeableArray_SMBShooter__ResizeableArray() */

void __thiscall ResizeableArray_SMBShooter__ResizeableArray(ResizeableArray<SMBShooter> *self)

{
  if (*(int *)(self + 0x48) != -0x5eef3582) {
    CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
    return;
  }
  *(uint32_t *)(self + 0x48) = 0;
  free(*(void **)(*(long *)(self + 0x38) + -8));
  if (*(int *)(self + 0x30) == 1) {
    free(*(void **)(*(long *)(self + 0x40) + -8));
  }
  *(uint32_t *)(self + 0x48) = 0;
  *(uint16_t *)(self + 0x2a) = 0;
  *(uint16_t *)(self + 0x28) = 0;
  *(uint64_t *)(self + 0x38) = 0;
  *(uint64_t *)(self + 0x40) = 0;
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
  return;
}

/* ======================================================================
 * ResizeableArray_SMBDemonSpawn__ResizeableArray  (Ghidra `~ResizeableArray` @ 00500800)
 * Signature: uint8_t __thiscall ~ResizeableArray(ResizeableArray<SMBDemonSpawn> * self)
 * Class: ResizeableArray<SMBDemonSpawn>
 * Calls: `CriticalSection__CriticalSection__005b71d0`, `free`
 * Called by: (none)
 */
/* ResizeableArray_SMBDemonSpawn__ResizeableArray() */

void __thiscall
ResizeableArray_SMBDemonSpawn__ResizeableArray(ResizeableArray<SMBDemonSpawn> *self)

{
  if (*(int *)(self + 0x48) != -0x5eef3582) {
    CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
    return;
  }
  *(uint32_t *)(self + 0x48) = 0;
  free(*(void **)(*(long *)(self + 0x38) + -8));
  if (*(int *)(self + 0x30) == 1) {
    free(*(void **)(*(long *)(self + 0x40) + -8));
  }
  *(uint32_t *)(self + 0x48) = 0;
  *(uint16_t *)(self + 0x2a) = 0;
  *(uint16_t *)(self + 0x28) = 0;
  *(uint64_t *)(self + 0x38) = 0;
  *(uint64_t *)(self + 0x40) = 0;
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
  return;
}

/* ======================================================================
 * ResizeableArray_SMBFan__ResizeableArray  (Ghidra `~ResizeableArray` @ 00500880)
 * Signature: uint8_t __thiscall ~ResizeableArray(ResizeableArray<SMBFan> * self)
 * Class: ResizeableArray<SMBFan>
 * Calls: `CriticalSection__CriticalSection__005b71d0`, `free`
 * Called by: (none)
 */
/* ResizeableArray_SMBFan__ResizeableArray() */

void __thiscall ResizeableArray_SMBFan__ResizeableArray(ResizeableArray<SMBFan> *self)

{
  if (*(int *)(self + 0x48) != -0x5eef3582) {
    CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
    return;
  }
  *(uint32_t *)(self + 0x48) = 0;
  free(*(void **)(*(long *)(self + 0x38) + -8));
  if (*(int *)(self + 0x30) == 1) {
    free(*(void **)(*(long *)(self + 0x40) + -8));
  }
  *(uint32_t *)(self + 0x48) = 0;
  *(uint16_t *)(self + 0x2a) = 0;
  *(uint16_t *)(self + 0x28) = 0;
  *(uint64_t *)(self + 0x38) = 0;
  *(uint64_t *)(self + 0x40) = 0;
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
  return;
}

/* ======================================================================
 * ResizeableArray_SMBLaser__ResizeableArray  (Ghidra `~ResizeableArray` @ 00500900)
 * Signature: uint8_t __thiscall ~ResizeableArray(ResizeableArray<SMBLaser> * self)
 * Class: ResizeableArray<SMBLaser>
 * Calls: `CriticalSection__CriticalSection__005b71d0`, `free`
 * Called by: (none)
 */
/* ResizeableArray_SMBLaser__ResizeableArray() */

void __thiscall ResizeableArray_SMBLaser__ResizeableArray(ResizeableArray<SMBLaser> *self)

{
  if (*(int *)(self + 0x48) != -0x5eef3582) {
    CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
    return;
  }
  *(uint32_t *)(self + 0x48) = 0;
  free(*(void **)(*(long *)(self + 0x38) + -8));
  if (*(int *)(self + 0x30) == 1) {
    free(*(void **)(*(long *)(self + 0x40) + -8));
  }
  *(uint32_t *)(self + 0x48) = 0;
  *(uint16_t *)(self + 0x2a) = 0;
  *(uint16_t *)(self + 0x28) = 0;
  *(uint64_t *)(self + 0x38) = 0;
  *(uint64_t *)(self + 0x40) = 0;
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
  return;
}

/* ======================================================================
 * ResizeableArray_SMBLaserStream__ResizeableArray  (Ghidra `~ResizeableArray` @ 00500980)
 * Signature: uint8_t __thiscall ~ResizeableArray(ResizeableArray<SMBLaserStream> * self)
 * Class: ResizeableArray<SMBLaserStream>
 * Calls: `CriticalSection__CriticalSection__005b71d0`, `free`
 * Called by: (none)
 */
/* ResizeableArray_SMBLaserStream__ResizeableArray() */

void __thiscall
ResizeableArray_SMBLaserStream__ResizeableArray(ResizeableArray<SMBLaserStream> *self)

{
  if (*(int *)(self + 0x48) != -0x5eef3582) {
    CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
    return;
  }
  *(uint32_t *)(self + 0x48) = 0;
  free(*(void **)(*(long *)(self + 0x38) + -8));
  if (*(int *)(self + 0x30) == 1) {
    free(*(void **)(*(long *)(self + 0x40) + -8));
  }
  *(uint32_t *)(self + 0x48) = 0;
  *(uint16_t *)(self + 0x2a) = 0;
  *(uint16_t *)(self + 0x28) = 0;
  *(uint64_t *)(self + 0x38) = 0;
  *(uint64_t *)(self + 0x40) = 0;
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
  return;
}

/* ======================================================================
 * ResizeableArray_SMBTredMill__ResizeableArray  (Ghidra `~ResizeableArray` @ 00500a00)
 * Signature: uint8_t __thiscall ~ResizeableArray(ResizeableArray<SMBTredMill> * self)
 * Class: ResizeableArray<SMBTredMill>
 * Calls: `CriticalSection__CriticalSection__005b71d0`, `free`
 * Called by: (none)
 */
/* ResizeableArray_SMBTredMill__ResizeableArray() */

void __thiscall ResizeableArray_SMBTredMill__ResizeableArray(ResizeableArray<SMBTredMill> *self)

{
  if (*(int *)(self + 0x48) != -0x5eef3582) {
    CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
    return;
  }
  *(uint32_t *)(self + 0x48) = 0;
  free(*(void **)(*(long *)(self + 0x38) + -8));
  if (*(int *)(self + 0x30) == 1) {
    free(*(void **)(*(long *)(self + 0x40) + -8));
  }
  *(uint32_t *)(self + 0x48) = 0;
  *(uint16_t *)(self + 0x2a) = 0;
  *(uint16_t *)(self + 0x28) = 0;
  *(uint64_t *)(self + 0x38) = 0;
  *(uint64_t *)(self + 0x40) = 0;
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
  return;
}

/* ======================================================================
 * ResizeableArray_SMBPlatform__ResizeableArray  (Ghidra `~ResizeableArray` @ 00500a80)
 * Signature: uint8_t __thiscall ~ResizeableArray(ResizeableArray<SMBPlatform> * self)
 * Class: ResizeableArray<SMBPlatform>
 * Calls: `CriticalSection__CriticalSection__005b71d0`, `free`
 * Called by: (none)
 */
/* ResizeableArray_SMBPlatform__ResizeableArray() */

void __thiscall ResizeableArray_SMBPlatform__ResizeableArray(ResizeableArray<SMBPlatform> *self)

{
  if (*(int *)(self + 0x48) != -0x5eef3582) {
    CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
    return;
  }
  *(uint32_t *)(self + 0x48) = 0;
  free(*(void **)(*(long *)(self + 0x38) + -8));
  if (*(int *)(self + 0x30) == 1) {
    free(*(void **)(*(long *)(self + 0x40) + -8));
  }
  *(uint32_t *)(self + 0x48) = 0;
  *(uint16_t *)(self + 0x2a) = 0;
  *(uint16_t *)(self + 0x28) = 0;
  *(uint64_t *)(self + 0x38) = 0;
  *(uint64_t *)(self + 0x40) = 0;
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
  return;
}

/* ======================================================================
 * ResizeableArray_SMBPortal__ResizeableArray  (Ghidra `~ResizeableArray` @ 00500b00)
 * Signature: uint8_t __thiscall ~ResizeableArray(ResizeableArray<SMBPortal> * self)
 * Class: ResizeableArray<SMBPortal>
 * Calls: `CriticalSection__CriticalSection__005b71d0`, `free`
 * Called by: (none)
 */
/* ResizeableArray_SMBPortal__ResizeableArray() */

void __thiscall ResizeableArray_SMBPortal__ResizeableArray(ResizeableArray<SMBPortal> *self)

{
  if (*(int *)(self + 0x48) != -0x5eef3582) {
    CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
    return;
  }
  *(uint32_t *)(self + 0x48) = 0;
  free(*(void **)(*(long *)(self + 0x38) + -8));
  if (*(int *)(self + 0x30) == 1) {
    free(*(void **)(*(long *)(self + 0x40) + -8));
  }
  *(uint32_t *)(self + 0x48) = 0;
  *(uint16_t *)(self + 0x2a) = 0;
  *(uint16_t *)(self + 0x28) = 0;
  *(uint64_t *)(self + 0x38) = 0;
  *(uint64_t *)(self + 0x40) = 0;
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
  return;
}

/* ======================================================================
 * ResizeableArray_SMBGravityOrb__ResizeableArray  (Ghidra `~ResizeableArray` @ 00500b80)
 * Signature: uint8_t __thiscall ~ResizeableArray(ResizeableArray<SMBGravityOrb> * self)
 * Class: ResizeableArray<SMBGravityOrb>
 * Calls: `CriticalSection__CriticalSection__005b71d0`, `free`
 * Called by: (none)
 */
/* ResizeableArray_SMBGravityOrb__ResizeableArray() */

void __thiscall
ResizeableArray_SMBGravityOrb__ResizeableArray(ResizeableArray<SMBGravityOrb> *self)

{
  if (*(int *)(self + 0x48) != -0x5eef3582) {
    CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
    return;
  }
  *(uint32_t *)(self + 0x48) = 0;
  free(*(void **)(*(long *)(self + 0x38) + -8));
  if (*(int *)(self + 0x30) == 1) {
    free(*(void **)(*(long *)(self + 0x40) + -8));
  }
  *(uint32_t *)(self + 0x48) = 0;
  *(uint16_t *)(self + 0x2a) = 0;
  *(uint16_t *)(self + 0x28) = 0;
  *(uint64_t *)(self + 0x38) = 0;
  *(uint64_t *)(self + 0x40) = 0;
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
  return;
}

/* ======================================================================
 * ResizeableArray_SMBPaletteEmitter__ResizeableArray  (Ghidra `~ResizeableArray` @ 00500c00)
 * Signature: uint8_t __thiscall ~ResizeableArray(ResizeableArray<SMBPaletteEmitter> * self)
 * Class: ResizeableArray<SMBPaletteEmitter>
 * Calls: `CriticalSection__CriticalSection__005b71d0`, `free`
 * Called by: (none)
 */
/* ResizeableArray_SMBPaletteEmitter__ResizeableArray() */

void __thiscall
ResizeableArray_SMBPaletteEmitter__ResizeableArray(ResizeableArray<SMBPaletteEmitter> *self)

{
  if (*(int *)(self + 0x48) != -0x5eef3582) {
    CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
    return;
  }
  *(uint32_t *)(self + 0x48) = 0;
  free(*(void **)(*(long *)(self + 0x38) + -8));
  if (*(int *)(self + 0x30) == 1) {
    free(*(void **)(*(long *)(self + 0x40) + -8));
  }
  *(uint32_t *)(self + 0x48) = 0;
  *(uint16_t *)(self + 0x2a) = 0;
  *(uint16_t *)(self + 0x28) = 0;
  *(uint64_t *)(self + 0x38) = 0;
  *(uint64_t *)(self + 0x40) = 0;
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
  return;
}

/* ======================================================================
 * ResizeableArray_SMBLaser__Add  (Ghidra `Add` @ 00500c80)
 * Signature: uint8_t __thiscall Add(ResizeableArray<SMBLaser> * self, SMBLaser * arg1, int arg2)
 * Class: ResizeableArray<SMBLaser>
 * Calls: `CriticalSection__Lock`, `CriticalSection__Unlock`, `Vector2__operator_assign`, `free`, `malloc`, `memcpy`
 * Called by: `SMBPalette__FindAnimatedObstacles`
 */
/* ResizeableArray_SMBLaser__Add(SMBLaser const&, int) */

short __thiscall
ResizeableArray_SMBLaser__Add(ResizeableArray<SMBLaser> *self,SMBLaser *arg1,int arg2)

{
  int iVar1;
  void *pvVar2;
  short sVar3;
  ushort uVar4;
  void *pvVar5;
  void *pvVar6;
  ulong uVar7;
  ushort uVar8;
  ushort *puVar9;
  ulong uVar10;
  uint64_t *puVar11;
  short sVar12;
  bool bVar13;
  byte bVar14;
  
  bVar14 = 0;
  if (arg2 == 1) {
    CriticalSection__Lock((CriticalSection *)self,1);
  }
  if (*(int *)(self + 0x48) == -0x5eef3582) {
    uVar4 = *(ushort *)(self + 0x28);
    if (*(ushort *)(self + 0x2a) <= uVar4) {
      uVar4 = *(ushort *)(self + 0x2a) + *(short *)(self + 0x34);
      uVar7 = (ulong)(byte)self[0x2c];
      pvVar5 = (void *)0x0;
      pvVar2 = *(void **)(self + 0x38);
      *(ushort *)(self + 0x2a) = uVar4;
      uVar10 = (ulong)uVar4 * 0x28;
      pvVar6 = malloc(uVar7 + 0x10 + uVar10);
      if (pvVar6 != (void *)0x0) {
        pvVar5 = (void *)((long)pvVar6 + 0x10U + (uVar7 - ((long)pvVar6 + 0x10U) % uVar7) % uVar7);
        *(ulong *)((long)pvVar5 + -0x10) = uVar10;
        *(void **)((long)pvVar5 + -8) = pvVar6;
        if (pvVar2 != (void *)0x0) {
          uVar7 = *(ulong *)((long)pvVar2 + -0x10);
          if (uVar10 <= *(ulong *)((long)pvVar2 + -0x10)) {
            uVar7 = uVar10;
          }
          memcpy(pvVar5,pvVar2,uVar7);
          free(*(void **)((long)pvVar2 + -8));
        }
      }
      pvVar2 = *(void **)(self + 0x40);
      *(void **)(self + 0x38) = pvVar5;
      if (pvVar2 != (void *)0x0) {
        uVar8 = *(ushort *)(self + 0x2a);
        uVar7 = (ulong)(byte)self[0x2c];
        pvVar5 = (void *)0x0;
        uVar10 = (ulong)uVar8 * 2;
        pvVar6 = malloc(uVar7 + 0x10 + uVar10);
        if (pvVar6 != (void *)0x0) {
          pvVar5 = (void *)((long)pvVar6 + 0x10U + (uVar7 - ((long)pvVar6 + 0x10U) % uVar7) % uVar7)
          ;
          *(ulong *)((long)pvVar5 + -0x10) = uVar10;
          *(void **)((long)pvVar5 + -8) = pvVar6;
          uVar7 = *(ulong *)((long)pvVar2 + -0x10);
          if (uVar10 <= *(ulong *)((long)pvVar2 + -0x10)) {
            uVar7 = uVar10;
          }
          memcpy(pvVar5,pvVar2,uVar7);
          free(*(void **)((long)pvVar2 + -8));
          uVar8 = *(ushort *)(self + 0x2a);
        }
        uVar4 = *(ushort *)(self + 0x28);
        *(void **)(self + 0x40) = pvVar5;
        if (uVar8 <= uVar4) goto LAB_00500d5f;
        while( true ) {
          uVar10 = (ulong)uVar4;
          uVar4 = uVar4 + 1;
          *(uint16_t *)((long)pvVar5 + uVar10 * 2) = 0xffff;
          if (uVar8 <= uVar4) break;
          pvVar5 = *(void **)(self + 0x40);
        }
      }
      iVar1 = *(int *)(self + 0x30);
      uVar4 = *(ushort *)(self + 0x28);
      goto joined_r0x00500f48;
    }
  }
  else {
    uVar10 = (ulong)(byte)self[0x2c];
    *(uint32_t *)(self + 0x30) = 0;
    pvVar5 = malloc(uVar10 + 0xd8);
    puVar11 = (uint64_t *)0x0;
    if (pvVar5 != (void *)0x0) {
      puVar11 = (uint64_t *)
                ((long)pvVar5 + 0x10U + (uVar10 - ((long)pvVar5 + 0x10U) % uVar10) % uVar10);
      puVar11[-2] = 200;
      puVar11[-1] = pvVar5;
    }
    bVar13 = ((ulong)puVar11 & 1) != 0;
    *(uint64_t **)(self + 0x38) = puVar11;
    uVar10 = 200;
    if (bVar13) {
      *(uint8_t *)puVar11 = 0;
      uVar10 = 199;
      puVar11 = (uint64_t *)((long)puVar11 + 1);
    }
    if (((ulong)puVar11 & 2) != 0) {
      *(uint16_t *)puVar11 = 0;
      uVar10 = (ulong)((int)uVar10 - 2);
      puVar11 = (uint64_t *)((long)puVar11 + 2);
    }
    if (((ulong)puVar11 & 4) != 0) {
      *(uint32_t *)puVar11 = 0;
      uVar10 = (ulong)((int)uVar10 - 4);
      puVar11 = (uint64_t *)((long)puVar11 + 4);
    }
    for (uVar7 = uVar10 >> 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar11 = 0;
      puVar11 = puVar11 + (ulong)bVar14 * -2 + 1;
    }
    if ((uVar10 & 4) != 0) {
      *(uint32_t *)puVar11 = 0;
      puVar11 = (uint64_t *)((long)puVar11 + 4);
    }
    if ((uVar10 & 2) != 0) {
      *(uint16_t *)puVar11 = 0;
      puVar11 = (uint64_t *)((long)puVar11 + 2);
    }
    if (bVar13) {
      *(uint8_t *)puVar11 = 0;
    }
    *(uint16_t *)(self + 0x28) = 0;
    *(uint16_t *)(self + 0x2a) = 5;
    uVar4 = 0;
    *(uint32_t *)(self + 0x48) = 0xa110ca7e;
    *(uint16_t *)(self + 0x34) = 5;
  }
LAB_00500d5f:
  iVar1 = *(int *)(self + 0x30);
joined_r0x00500f48:
  sVar12 = -1;
  if (iVar1 == 1) {
    sVar12 = -1;
    if (*(short *)(self + 0x2a) != 0) {
      puVar9 = *(ushort **)(self + 0x40);
      if (*puVar9 == 0xffff) {
        sVar12 = 0;
      }
      else {
        sVar3 = 1;
        do {
          sVar12 = sVar3;
          puVar9 = puVar9 + 1;
          if (sVar12 == *(short *)(self + 0x2a)) {
            sVar12 = -1;
            goto LAB_00500d72;
          }
          sVar3 = sVar12 + 1;
        } while (*puVar9 != 0xffff);
      }
      *puVar9 = uVar4;
      uVar4 = *(ushort *)(self + 0x28);
    }
  }
LAB_00500d72:
  puVar11 = (uint64_t *)(*(long *)(self + 0x38) + (ulong)uVar4 * 0x28);
  *puVar11 = *(uint64_t *)arg1;
  *(uint32_t *)(puVar11 + 1) = *(uint32_t *)(arg1 + 8);
  *(uint32_t *)((long)puVar11 + 0xc) = *(uint32_t *)(arg1 + 0xc);
  *(uint32_t *)(puVar11 + 2) = *(uint32_t *)(arg1 + 0x10);
  *(uint32_t *)((long)puVar11 + 0x14) = *(uint32_t *)(arg1 + 0x14);
  Vector2__operator_assign((Vector2 *)(puVar11 + 3),(Vector2 *)(arg1 + 0x18));
  Vector2__operator_assign((Vector2 *)(puVar11 + 4),(Vector2 *)(arg1 + 0x20));
  *(short *)(self + 0x28) = *(short *)(self + 0x28) + 1;
  if (arg2 == 1) {
    CriticalSection__Unlock((CriticalSection *)self);
  }
  return sVar12;
}

/* ======================================================================
 * ResizeableArray_GFXScreenResolutions__ResizeableArray  (Ghidra `~ResizeableArray` @ 00511a80)
 * Signature: uint8_t __thiscall ~ResizeableArray(ResizeableArray<GFXScreenResolutions> * self)
 * Class: ResizeableArray<GFXScreenResolutions>
 * Calls: `CriticalSection__CriticalSection__005b71d0`, `free`
 * Called by: `GLOBAL_sub_I_GLOBAL_SETTINGS_MENU`
 */
/* ResizeableArray_GFXScreenResolutions__ResizeableArray() */

void __thiscall
ResizeableArray_GFXScreenResolutions__ResizeableArray(ResizeableArray<GFXScreenResolutions> *self)

{
  if (*(int *)(self + 0x48) != -0x5eef3582) {
    CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
    return;
  }
  *(uint32_t *)(self + 0x48) = 0;
  free(*(void **)(*(long *)(self + 0x38) + -8));
  if (*(int *)(self + 0x30) == 1) {
    free(*(void **)(*(long *)(self + 0x40) + -8));
  }
  *(uint32_t *)(self + 0x48) = 0;
  *(uint16_t *)(self + 0x2a) = 0;
  *(uint16_t *)(self + 0x28) = 0;
  *(uint64_t *)(self + 0x38) = 0;
  *(uint64_t *)(self + 0x40) = 0;
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
  return;
}

/* ======================================================================
 * ResizeableArray_OpenALCue__ResizeableArray  (Ghidra `~ResizeableArray` @ 0053f610)
 * Signature: uint8_t __thiscall ~ResizeableArray(ResizeableArray<OpenALCue*> * self)
 * Class: ResizeableArray<OpenALCue*>
 * Calls: `CriticalSection__CriticalSection__005b71d0`, `free`
 * Called by: `GLOBAL_sub_I_XAudioSection`
 */
/* ResizeableArray_OpenALCue__ResizeableArray() */

void __thiscall ResizeableArray_OpenALCue__ResizeableArray(ResizeableArray<OpenALCue*> *self)

{
  if (*(int *)(self + 0x48) != -0x5eef3582) {
    CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
    return;
  }
  *(uint32_t *)(self + 0x48) = 0;
  free(*(void **)(*(long *)(self + 0x38) + -8));
  if (*(int *)(self + 0x30) == 1) {
    free(*(void **)(*(long *)(self + 0x40) + -8));
  }
  *(uint32_t *)(self + 0x48) = 0;
  *(uint16_t *)(self + 0x2a) = 0;
  *(uint16_t *)(self + 0x28) = 0;
  *(uint64_t *)(self + 0x38) = 0;
  *(uint64_t *)(self + 0x40) = 0;
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
  return;
}

/* ======================================================================
 * ResizeableArray_AnimationFinishedCallback__ResizeableArray  (Ghidra `~ResizeableArray` @ 00578750)
 * Signature: uint8_t __thiscall ~ResizeableArray(ResizeableArray<AnimationFinishedCallback> * self)
 * Class: ResizeableArray<AnimationFinishedCallback>
 * Calls: `CriticalSection__CriticalSection__005b71d0`, `free`
 * Called by: `GLOBAL_sub_I_AnimationCallbackSection`
 */
/* ResizeableArray_AnimationFinishedCallback__ResizeableArray() */

void __thiscall
ResizeableArray_AnimationFinishedCallback__ResizeableArray
          (ResizeableArray<AnimationFinishedCallback> *self)

{
  if (*(int *)(self + 0x48) != -0x5eef3582) {
    CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
    return;
  }
  *(uint32_t *)(self + 0x48) = 0;
  free(*(void **)(*(long *)(self + 0x38) + -8));
  if (*(int *)(self + 0x30) == 1) {
    free(*(void **)(*(long *)(self + 0x40) + -8));
  }
  *(uint32_t *)(self + 0x48) = 0;
  *(uint16_t *)(self + 0x2a) = 0;
  *(uint16_t *)(self + 0x28) = 0;
  *(uint64_t *)(self + 0x38) = 0;
  *(uint64_t *)(self + 0x40) = 0;
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
  return;
}

/* ======================================================================
 * ResizeableArray_TAudioInstance__ResizeableArray  (Ghidra `~ResizeableArray` @ 0057b990)
 * Signature: uint8_t __thiscall ~ResizeableArray(ResizeableArray<TAudioInstance*> * self)
 * Class: ResizeableArray<TAudioInstance*>
 * Calls: `CriticalSection__CriticalSection__005b71d0`, `free`
 * Called by: `GLOBAL_sub_I_Audio`
 */
/* ResizeableArray_TAudioInstance__ResizeableArray() */

void __thiscall
ResizeableArray_TAudioInstance__ResizeableArray(ResizeableArray<TAudioInstance*> *self)

{
  if (*(int *)(self + 0x48) != -0x5eef3582) {
    CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
    return;
  }
  *(uint32_t *)(self + 0x48) = 0;
  free(*(void **)(*(long *)(self + 0x38) + -8));
  if (*(int *)(self + 0x30) == 1) {
    free(*(void **)(*(long *)(self + 0x40) + -8));
  }
  *(uint32_t *)(self + 0x48) = 0;
  *(uint16_t *)(self + 0x2a) = 0;
  *(uint16_t *)(self + 0x28) = 0;
  *(uint64_t *)(self + 0x38) = 0;
  *(uint64_t *)(self + 0x40) = 0;
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
  return;
}

/* ======================================================================
 * ResizeableArray_TAudioCueCache__ResizeableArray  (Ghidra `~ResizeableArray` @ 0057ba10)
 * Signature: uint8_t __thiscall ~ResizeableArray(ResizeableArray<TAudioCueCache> * self)
 * Class: ResizeableArray<TAudioCueCache>
 * Calls: `CriticalSection__CriticalSection__005b71d0`, `free`
 * Called by: `GLOBAL_sub_I_Audio`
 */
/* ResizeableArray_TAudioCueCache__ResizeableArray() */

void __thiscall
ResizeableArray_TAudioCueCache__ResizeableArray(ResizeableArray<TAudioCueCache> *self)

{
  if (*(int *)(self + 0x48) != -0x5eef3582) {
    CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
    return;
  }
  *(uint32_t *)(self + 0x48) = 0;
  free(*(void **)(*(long *)(self + 0x38) + -8));
  if (*(int *)(self + 0x30) == 1) {
    free(*(void **)(*(long *)(self + 0x40) + -8));
  }
  *(uint32_t *)(self + 0x48) = 0;
  *(uint16_t *)(self + 0x2a) = 0;
  *(uint16_t *)(self + 0x28) = 0;
  *(uint64_t *)(self + 0x38) = 0;
  *(uint64_t *)(self + 0x40) = 0;
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
  return;
}

/* ======================================================================
 * ResizeableArray_TAudio__ManagedAudioInstance_ResizeableArray  (Ghidra `~ResizeableArray` @ 0057ba90)
 * Signature: uint8_t __thiscall ~ResizeableArray(ResizeableArray<TAudio::ManagedAudioInstance> * self)
 * Class: ResizeableArray<TAudio
 * Calls: `CriticalSection__CriticalSection__005b71d0`, `free`
 * Called by: (none)
 */
/* ResizeableArray_TAudio__ManagedAudioInstance_ResizeableArray() */

void __thiscall
ResizeableArray_TAudio__ManagedAudioInstance_ResizeableArray
          (ResizeableArray_TAudio__ManagedAudioInstance *self)

{
  if (*(int *)(self + 0x48) != -0x5eef3582) {
    CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
    return;
  }
  *(uint32_t *)(self + 0x48) = 0;
  free(*(void **)(*(long *)(self + 0x38) + -8));
  if (*(int *)(self + 0x30) == 1) {
    free(*(void **)(*(long *)(self + 0x40) + -8));
  }
  *(uint32_t *)(self + 0x48) = 0;
  *(uint16_t *)(self + 0x2a) = 0;
  *(uint16_t *)(self + 0x28) = 0;
  *(uint64_t *)(self + 0x38) = 0;
  *(uint64_t *)(self + 0x40) = 0;
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
  return;
}

/* ======================================================================
 * ResizeableArray_AudioEffectBase__ResizeableArray  (Ghidra `~ResizeableArray` @ 0057bb10)
 * Signature: uint8_t __thiscall ~ResizeableArray(ResizeableArray<AudioEffectBase*> * self)
 * Class: ResizeableArray<AudioEffectBase*>
 * Calls: `CriticalSection__CriticalSection__005b71d0`, `free`
 * Called by: (none)
 */
/* ResizeableArray_AudioEffectBase__ResizeableArray() */

void __thiscall
ResizeableArray_AudioEffectBase__ResizeableArray(ResizeableArray<AudioEffectBase*> *self)

{
  if (*(int *)(self + 0x48) != -0x5eef3582) {
    CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
    return;
  }
  *(uint32_t *)(self + 0x48) = 0;
  free(*(void **)(*(long *)(self + 0x38) + -8));
  if (*(int *)(self + 0x30) == 1) {
    free(*(void **)(*(long *)(self + 0x40) + -8));
  }
  *(uint32_t *)(self + 0x48) = 0;
  *(uint16_t *)(self + 0x2a) = 0;
  *(uint16_t *)(self + 0x28) = 0;
  *(uint64_t *)(self + 0x38) = 0;
  *(uint64_t *)(self + 0x40) = 0;
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
  return;
}

/* ======================================================================
 * ResizeableArray_tagEditableItem__ResizeableArray  (Ghidra `~ResizeableArray` @ 00581dc0)
 * Signature: uint8_t __thiscall ~ResizeableArray(ResizeableArray<tagEditableItem*> * self)
 * Class: ResizeableArray<tagEditableItem*>
 * Calls: `CriticalSection__CriticalSection__005b71d0`, `free`
 * Called by: `GLOBAL_sub_I_uMasterInvokeID`
 */
/* ResizeableArray_tagEditableItem__ResizeableArray() */

void __thiscall
ResizeableArray_tagEditableItem__ResizeableArray(ResizeableArray<tagEditableItem*> *self)

{
  if (*(int *)(self + 0x48) != -0x5eef3582) {
    CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
    return;
  }
  *(uint32_t *)(self + 0x48) = 0;
  free(*(void **)(*(long *)(self + 0x38) + -8));
  if (*(int *)(self + 0x30) == 1) {
    free(*(void **)(*(long *)(self + 0x40) + -8));
  }
  *(uint32_t *)(self + 0x48) = 0;
  *(uint16_t *)(self + 0x2a) = 0;
  *(uint16_t *)(self + 0x28) = 0;
  *(uint64_t *)(self + 0x38) = 0;
  *(uint64_t *)(self + 0x40) = 0;
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
  return;
}

/* ======================================================================
 * ResizeableArray_tagEditableCategory__ResizeableArray  (Ghidra `~ResizeableArray` @ 00581e40)
 * Signature: uint8_t __thiscall ~ResizeableArray(ResizeableArray<tagEditableCategory*> * self)
 * Class: ResizeableArray<tagEditableCategory*>
 * Calls: `CriticalSection__CriticalSection__005b71d0`, `free`
 * Called by: `GLOBAL_sub_I_uMasterInvokeID`
 */
/* ResizeableArray_tagEditableCategory__ResizeableArray() */

void __thiscall
ResizeableArray_tagEditableCategory__ResizeableArray(ResizeableArray<tagEditableCategory*> *self)

{
  if (*(int *)(self + 0x48) != -0x5eef3582) {
    CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
    return;
  }
  *(uint32_t *)(self + 0x48) = 0;
  free(*(void **)(*(long *)(self + 0x38) + -8));
  if (*(int *)(self + 0x30) == 1) {
    free(*(void **)(*(long *)(self + 0x40) + -8));
  }
  *(uint32_t *)(self + 0x48) = 0;
  *(uint16_t *)(self + 0x2a) = 0;
  *(uint16_t *)(self + 0x28) = 0;
  *(uint64_t *)(self + 0x38) = 0;
  *(uint64_t *)(self + 0x40) = 0;
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
  return;
}

/* ======================================================================
 * ResizeableArray_SelectableResolutions__ResizeableArray  (Ghidra `~ResizeableArray` @ 0058a4a0)
 * Signature: uint8_t __thiscall ~ResizeableArray(ResizeableArray<_SelectableResolutions> * self)
 * Class: ResizeableArray<_SelectableResolutions>
 * Calls: `CriticalSection__CriticalSection__005b71d0`, `free`
 * Called by: `GLOBAL_sub_I_GRAPHICSFORM`
 */
/* ResizeableArray_SelectableResolutions__ResizeableArray() */

void __thiscall
ResizeableArray_SelectableResolutions__ResizeableArray
          (ResizeableArray<_SelectableResolutions> *self)

{
  if (*(int *)(self + 0x48) != -0x5eef3582) {
    CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
    return;
  }
  *(uint32_t *)(self + 0x48) = 0;
  free(*(void **)(*(long *)(self + 0x38) + -8));
  if (*(int *)(self + 0x30) == 1) {
    free(*(void **)(*(long *)(self + 0x40) + -8));
  }
  *(uint32_t *)(self + 0x48) = 0;
  *(uint16_t *)(self + 0x2a) = 0;
  *(uint16_t *)(self + 0x28) = 0;
  *(uint64_t *)(self + 0x38) = 0;
  *(uint64_t *)(self + 0x40) = 0;
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
  return;
}

/* ======================================================================
 * ResizeableArray_tagCheatCode__ResizeableArray  (Ghidra `~ResizeableArray` @ 0058ae90)
 * Signature: uint8_t __thiscall ~ResizeableArray(ResizeableArray<tagCheatCode*> * self)
 * Class: ResizeableArray<tagCheatCode*>
 * Calls: `CriticalSection__CriticalSection__005b71d0`, `free`
 * Called by: (none)
 */
/* ResizeableArray_tagCheatCode__ResizeableArray() */

void __thiscall
ResizeableArray_tagCheatCode__ResizeableArray(ResizeableArray<tagCheatCode*> *self)

{
  if (*(int *)(self + 0x48) != -0x5eef3582) {
    CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
    return;
  }
  *(uint32_t *)(self + 0x48) = 0;
  free(*(void **)(*(long *)(self + 0x38) + -8));
  if (*(int *)(self + 0x30) == 1) {
    free(*(void **)(*(long *)(self + 0x40) + -8));
  }
  *(uint32_t *)(self + 0x48) = 0;
  *(uint16_t *)(self + 0x2a) = 0;
  *(uint16_t *)(self + 0x28) = 0;
  *(uint64_t *)(self + 0x38) = 0;
  *(uint64_t *)(self + 0x40) = 0;
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
  return;
}

/* ======================================================================
 * ResizeableArray_Loader__LoaderFuncBlock_ResizeableArray  (Ghidra `~ResizeableArray` @ 005927e0)
 * Signature: uint8_t __thiscall ~ResizeableArray(ResizeableArray<Loader::LoaderFuncBlock*> * self)
 * Class: ResizeableArray<Loader
 * Calls: `CriticalSection__CriticalSection__005b71d0`, `free`
 * Called by: (none)
 */
/* ResizeableArray_Loader__LoaderFuncBlock::ResizeableArray__dtor() */

void __thiscall
ResizeableArray_Loader__LoaderFuncBlock::ResizeableArray__dtor(ResizeableArray_Loader__LoaderFuncBlock *self)

{
  if (*(int *)(self + 0x48) != -0x5eef3582) {
    CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
    return;
  }
  *(uint32_t *)(self + 0x48) = 0;
  free(*(void **)(*(long *)(self + 0x38) + -8));
  if (*(int *)(self + 0x30) == 1) {
    free(*(void **)(*(long *)(self + 0x40) + -8));
  }
  *(uint32_t *)(self + 0x48) = 0;
  *(uint16_t *)(self + 0x2a) = 0;
  *(uint16_t *)(self + 0x28) = 0;
  *(uint64_t *)(self + 0x38) = 0;
  *(uint64_t *)(self + 0x40) = 0;
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
  return;
}

/* ======================================================================
 * ResizeableArray_ModelLoader__Face_ResizeableArray  (Ghidra `~ResizeableArray` @ 00595850)
 * Signature: uint8_t __thiscall ~ResizeableArray(ResizeableArray<ModelLoader::Face> * self)
 * Class: ResizeableArray<ModelLoader
 * Calls: `CriticalSection__CriticalSection__005b71d0`, `free`
 * Called by: (none)
 */
/* ResizeableArray_ModelLoader__Face_ResizeableArray() */

void __thiscall
ResizeableArray_ModelLoader__Face_ResizeableArray(ResizeableArray_ModelLoader__Face *self)

{
  if (*(int *)(self + 0x48) != -0x5eef3582) {
    CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
    return;
  }
  *(uint32_t *)(self + 0x48) = 0;
  free(*(void **)(*(long *)(self + 0x38) + -8));
  if (*(int *)(self + 0x30) == 1) {
    free(*(void **)(*(long *)(self + 0x40) + -8));
  }
  *(uint32_t *)(self + 0x48) = 0;
  *(uint16_t *)(self + 0x2a) = 0;
  *(uint16_t *)(self + 0x28) = 0;
  *(uint64_t *)(self + 0x38) = 0;
  *(uint64_t *)(self + 0x40) = 0;
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
  return;
}

/* ======================================================================
 * ResizeableArray_TResourceCreator__GraphicsCreationFunction_ResizeableArray  (Ghidra `~ResizeableArray` @ 0059a430)
 * Signature: uint8_t __thiscall ~ResizeableArray(ResizeableArray<TResourceCreator::GraphicsCreationFunction> * self)
 * Class: ResizeableArray<TResourceCreator
 * Calls: `CriticalSection__CriticalSection__005b71d0`, `free`
 * Called by: (none)
 */
/* ResizeableArray_TResourceCreator__GraphicsCreationFunction_ResizeableArray() */

void __thiscall
ResizeableArray_TResourceCreator__GraphicsCreationFunction_ResizeableArray
          (ResizeableArray_TResourceCreator__GraphicsCreationFunction *self)

{
  if (*(int *)(self + 0x48) != -0x5eef3582) {
    CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
    return;
  }
  *(uint32_t *)(self + 0x48) = 0;
  free(*(void **)(*(long *)(self + 0x38) + -8));
  if (*(int *)(self + 0x30) == 1) {
    free(*(void **)(*(long *)(self + 0x40) + -8));
  }
  *(uint32_t *)(self + 0x48) = 0;
  *(uint16_t *)(self + 0x2a) = 0;
  *(uint16_t *)(self + 0x28) = 0;
  *(uint64_t *)(self + 0x38) = 0;
  *(uint64_t *)(self + 0x40) = 0;
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
  return;
}

/* ======================================================================
 * ResizeableArray_SetPieceWayPointGroup__ResizeableArray  (Ghidra `~ResizeableArray` @ 0059f080)
 * Signature: uint8_t __thiscall ~ResizeableArray(ResizeableArray<SetPieceWayPointGroup> * self)
 * Class: ResizeableArray<SetPieceWayPointGroup>
 * Calls: `CriticalSection__CriticalSection__005b71d0`, `free`
 * Called by: (none)
 */
/* ResizeableArray_SetPieceWayPointGroup__ResizeableArray() */

void __thiscall
ResizeableArray_SetPieceWayPointGroup__ResizeableArray
          (ResizeableArray<SetPieceWayPointGroup> *self)

{
  if (*(int *)(self + 0x48) != -0x5eef3582) {
    CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
    return;
  }
  *(uint32_t *)(self + 0x48) = 0;
  free(*(void **)(*(long *)(self + 0x38) + -8));
  if (*(int *)(self + 0x30) == 1) {
    free(*(void **)(*(long *)(self + 0x40) + -8));
  }
  *(uint32_t *)(self + 0x48) = 0;
  *(uint16_t *)(self + 0x2a) = 0;
  *(uint16_t *)(self + 0x28) = 0;
  *(uint64_t *)(self + 0x38) = 0;
  *(uint64_t *)(self + 0x40) = 0;
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
  return;
}
