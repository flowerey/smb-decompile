/* src/game/classes/EditorButton.c — 19 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "EditorButton.h"

/* ======================================================================
 * EditorButton__EditorButton  (Ghidra `~EditorButton` @ 0049e1c0)
 * Signature: uint8_t __thiscall ~EditorButton(EditorButton * self)
 * Class: EditorButton
 * Calls: `EditorButton__EditorButton__0049e420`
 * Called by: (none)
 */
/* EditorButton__EditorButton__0049e420() */

void __thiscall EditorButton__EditorButton__0049e420(EditorButton *self)

{
  *(uint8_t ***)self = &PTR__EditorButton_005c4390;
  if (*(long **)(self + 8) != (long *)0x0) {
    (**(code **)(**(long **)(self + 8) + 8))();
  }
  *(uint64_t *)(self + 8) = 0;
  return;
}

/* ======================================================================
 * EditorButton__UnSelectedClick  (Ghidra `UnSelectedClick` @ 0049e1f0)
 * Signature: uint8_t __stdcall UnSelectedClick(void)
 * Class: EditorButton
 * Calls: (none)
 * Called by: (none)
 */
/* EditorButton__UnSelectedClick() */

void EditorButton__UnSelectedClick(void)

{
  return;
}

/* ======================================================================
 * EditorButton__EditorButton__0049e420  (Ghidra `~EditorButton` @ 0049e420)
 * Signature: uint8_t __thiscall ~EditorButton(EditorButton * self)
 * Class: EditorButton
 * Calls: `operator_delete`
 * Called by: `EditorButton__EditorButton`
 */
/* EditorButton__EditorButton__0049e420() */

void __thiscall EditorButton__EditorButton__0049e420(EditorButton *self)

{
  *(uint8_t ***)self = &PTR__EditorButton_005c4390;
  if (*(long **)(self + 8) != (long *)0x0) {
    (**(code **)(**(long **)(self + 8) + 8))();
  }
  *(uint64_t *)(self + 8) = 0;
  operator_delete(self);
  return;
}

/* ======================================================================
 * EditorButton__SetSelectedState  (Ghidra `SetSelectedState` @ 0049e450)
 * Signature: uint8_t __thiscall SetSelectedState(EditorButton * self)
 * Class: EditorButton
 * Calls: `FlashLibraryInstance__GotoAndStop`
 * Called by: (none)
 */
/* EditorButton__SetSelectedState() */

void __thiscall EditorButton__SetSelectedState(EditorButton *self)

{
  if (*(FlashLibraryInstance **)(self + 0x10) != (FlashLibraryInstance *)0x0) {
    FlashLibraryInstance__GotoAndStop(*(FlashLibraryInstance **)(self + 0x10),3);
    return;
  }
  return;
}

/* ======================================================================
 * EditorButton__SetMouseOutState  (Ghidra `SetMouseOutState` @ 0049e470)
 * Signature: uint8_t __thiscall SetMouseOutState(EditorButton * self)
 * Class: EditorButton
 * Calls: `FlashLibraryInstance__GotoAndStop`
 * Called by: (none)
 */
/* EditorButton__SetMouseOutState() */

void __thiscall EditorButton__SetMouseOutState(EditorButton *self)

{
  if (*(FlashLibraryInstance **)(self + 0x10) != (FlashLibraryInstance *)0x0) {
    FlashLibraryInstance__GotoAndStop(*(FlashLibraryInstance **)(self + 0x10),1);
    return;
  }
  return;
}

/* ======================================================================
 * EditorButton__SetMouseOverState  (Ghidra `SetMouseOverState` @ 0049e490)
 * Signature: uint8_t __thiscall SetMouseOverState(EditorButton * self)
 * Class: EditorButton
 * Calls: `FlashLibraryInstance__GotoAndStop`
 * Called by: (none)
 */
/* EditorButton__SetMouseOverState() */

void __thiscall EditorButton__SetMouseOverState(EditorButton *self)

{
  if (*(FlashLibraryInstance **)(self + 0x10) != (FlashLibraryInstance *)0x0) {
    FlashLibraryInstance__GotoAndStop(*(FlashLibraryInstance **)(self + 0x10),2);
    return;
  }
  return;
}

/* ======================================================================
 * EditorButton__OnMouseOver  (Ghidra `OnMouseOver` @ 0049eb80)
 * Signature: uint8_t __thiscall OnMouseOver(EditorButton * self)
 * Class: EditorButton
 * Calls: (none)
 * Called by: (none)
 */
/* EditorButton__OnMouseOver() */

void __thiscall EditorButton__OnMouseOver(EditorButton *self)

{
  if (self[0x4b] != (EditorButton)0x1) {
    (**(code **)(*(long *)self + 0x10))();
    if (*(code **)(self + 0x18) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0049eb9e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(self + 0x18))(*(uint64_t *)(self + 0x30));
      return;
    }
  }
  return;
}

/* ======================================================================
 * EditorButton__OnMouseOut  (Ghidra `OnMouseOut` @ 0049ebb0)
 * Signature: uint8_t __thiscall OnMouseOut(EditorButton * self)
 * Class: EditorButton
 * Calls: (none)
 * Called by: (none)
 */
/* EditorButton__OnMouseOut() */

void __thiscall EditorButton__OnMouseOut(EditorButton *self)

{
  if (self[0x4b] != (EditorButton)0x1) {
    (**(code **)(*(long *)self + 0x20))();
    if (*(code **)(self + 0x20) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0049ebce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(self + 0x20))(*(uint64_t *)(self + 0x38));
      return;
    }
  }
  return;
}

/* ======================================================================
 * EditorButton__OnMouseClick  (Ghidra `OnMouseClick` @ 0049ebe0)
 * Signature: uint8_t __thiscall OnMouseClick(EditorButton * self)
 * Class: EditorButton
 * Calls: (none)
 * Called by: (none)
 */
/* EditorButton__OnMouseClick() */

void __thiscall EditorButton__OnMouseClick(EditorButton *self)

{
  if (self[0x4b] != (EditorButton)0x1) {
    (**(code **)(*(long *)self + 0x38))();
    if (*(code **)(self + 0x28) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0049ebfe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(self + 0x28))(*(uint64_t *)(self + 0x40));
      return;
    }
  }
  return;
}

/* ======================================================================
 * EditorButton__EditorButton__004a2590  (Ghidra `EditorButton` @ 004a2590)
 * Signature: uint8_t __thiscall EditorButton(EditorButton * self)
 * Class: EditorButton
 * Calls: `EditorButton__EditorButton__004a25f0`
 * Called by: (none)
 */
/* EditorButton__EditorButton__004a25f0() */

void __thiscall EditorButton__EditorButton__004a25f0(EditorButton *self)

{
  *(uint8_t ***)self = &PTR__EditorButton_005c4390;
  *(uint64_t *)(self + 8) = 0;
  *(uint64_t *)(self + 0x10) = 0;
  *(uint64_t *)(self + 0x18) = 0;
  *(uint64_t *)(self + 0x20) = 0;
  *(uint64_t *)(self + 0x28) = 0;
  *(uint64_t *)(self + 0x30) = 0;
  *(uint64_t *)(self + 0x38) = 0;
  *(uint64_t *)(self + 0x40) = 0;
  *(uint16_t *)(self + 0x48) = 0;
  self[0x4a] = (EditorButton)0x0;
  self[0x4b] = (EditorButton)0x0;
  *(uint32_t *)(self + 0x4c) = 0xffffffff;
  return;
}

/* ======================================================================
 * EditorButton__EditorButton__004a25f0  (Ghidra `EditorButton` @ 004a25f0)
 * Signature: uint8_t __thiscall EditorButton(EditorButton * self, FlashLibraryInstance * arg1, FlashLibraryInstance * arg2)
 * Class: EditorButton
 * Calls: (none)
 * Called by: `EditorButton__EditorButton__004a2590`
 */
/* EditorButton__EditorButton__004a25f0(FlashLibraryInstance*, FlashLibraryInstance*) */

void __thiscall
EditorButton__EditorButton__004a25f0
          (EditorButton *self,FlashLibraryInstance *arg1,FlashLibraryInstance *arg2)

{
  *(uint8_t ***)self = &PTR__EditorButton_005c4390;
  *(FlashLibraryInstance **)(self + 8) = arg2;
  *(FlashLibraryInstance **)(self + 0x10) = arg1;
  *(uint64_t *)(self + 0x18) = 0;
  *(uint64_t *)(self + 0x20) = 0;
  *(uint64_t *)(self + 0x28) = 0;
  *(uint64_t *)(self + 0x30) = 0;
  *(uint64_t *)(self + 0x38) = 0;
  *(uint64_t *)(self + 0x40) = 0;
  *(uint16_t *)(self + 0x48) = 0;
  self[0x4a] = (EditorButton)0x0;
  self[0x4b] = (EditorButton)0x0;
  *(uint32_t *)(self + 0x4c) = *(uint32_t *)(arg1 + 0x20);
  return;
}

/* ======================================================================
 * EditorButton__SetButtonProps  (Ghidra `SetButtonProps` @ 004a2650)
 * Signature: uint8_t __thiscall SetButtonProps(EditorButton * self, _func_void_void_ptr * arg1, void * arg2, _func_void_void_ptr * arg3, void * arg4, _func_void_void_ptr * arg5, void * arg6)
 * Class: EditorButton
 * Calls: (none)
 * Called by: `SMBLevelPortalInterface__Initialize`
 */
/* EditorButton__SetButtonProps(void (*)(void*), void*, void (*)(void*), void*, void (*)(void*),
   void*) */

void __thiscall
EditorButton__SetButtonProps
          (EditorButton *self,_func_void_void_ptr *arg1,void *arg2,
          _func_void_void_ptr *arg3,void *arg4,_func_void_void_ptr *arg5,void *arg6)

{
  *(_func_void_void_ptr **)(self + 0x28) = arg1;
  *(_func_void_void_ptr **)(self + 0x20) = arg5;
  *(_func_void_void_ptr **)(self + 0x18) = arg3;
  *(void **)(self + 0x40) = arg2;
  *(void **)(self + 0x30) = arg4;
  *(void **)(self + 0x38) = arg6;
  return;
}

/* ======================================================================
 * EditorButton__IsMouseOverButton  (Ghidra `IsMouseOverButton` @ 004a2670)
 * Signature: uint8_t __thiscall IsMouseOverButton(EditorButton * self)
 * Class: EditorButton
 * Calls: `FlashLibraryInstance__GetInstanceBounds`, `TWindow__getAspectRatio`, `Vector2__operator_plus_assign`
 * Called by: `CancelPastePiecesRendering`, `ChangeBlockID`, `CopySelected`, `DeSelectTile`, `DeleteSelected`, `DeleteSelectedAnimal`, `FillSelected`, `GrabBlock`, `IsEditorFunctionAllowed`, `PasteSelectedPieces` (+14 more)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EditorButton__IsMouseOverButton() */

bool __thiscall EditorButton__IsMouseOverButton(EditorButton *self)

{
  float fVar1;
  float fVar2;
  float fVar3;
  Matrix4x4 local_88 [64];
  uint32_t local_48;
  uint32_t local_44;
  float local_38;
  float local_34;
  float local_28;
  float local_24;
  Vector2 local_18 [8];
  float local_10;
  float local_c;
  
  fVar1 = *(float *)(Mouse + 0xc);
  fVar3 = (float)(*(uint *)(Mouse + 0x10) ^ DAT_005be6f0 /* R:u32=2147483648 */);
  fVar2 = (float)TWindow__getAspectRatio(Window);
  if (fVar2 != DAT_005c4894 /* R:1.7777777910232544f */) {
    fVar3 = fVar3 * ((float)*(ushort *)(Window + 8) / (float)*(ushort *)(Window + 10));
  }
  Matrix4x4__ConvertToOrthoMatrix
            (local_88,_DAT_005c0c9c /* R:240.0f */,DAT_005c0c98 /* R:-240.0f */,DAT_005c0c94 /* R:-426.5f */,DAT_005c0c90 /* R:426.5f */,DAT_005c07a4 /* R:-1.0f */,DAT_005be894 /* R:1.0f */
            );
  local_38 = 0.0;
  local_34 = 0.0;
  local_28 = 0.0;
  local_44 = *(uint32_t *)(*(long *)(self + 0x10) + 0x34);
  local_48 = *(uint32_t *)(*(long *)(self + 0x10) + 0x30);
  local_24 = 0.0;
  FlashLibraryInstance__GetInstanceBounds
            (*(FlashLibraryInstance **)(self + 8),&local_10,&local_c,local_18);
  local_38 = local_38 - local_10;
  local_34 = local_34 - local_c;
  Vector2__operator_plus_assign((Vector2 *)&local_38,(Vector2 *)&local_48);
  local_28 = local_28 + local_10;
  local_24 = local_24 + local_c;
  Vector2__operator_plus_assign((Vector2 *)&local_28,(Vector2 *)&local_48);
  Matrix4x4__TransformVector2((Vector2 *)&local_38,(Vector2 *)&local_38,local_88,1);
  Matrix4x4__TransformVector2((Vector2 *)&local_28,(Vector2 *)&local_28,local_88,1);
  if (((local_38 < fVar1) && (local_34 < fVar3)) && (fVar1 < local_28)) {
    return fVar3 < local_24;
  }
  return false;
}

/* ======================================================================
 * EditorButton__Update  (Ghidra `Update` @ 004a2870)
 * Signature: uint8_t __thiscall Update(EditorButton * self)
 * Class: EditorButton
 * Calls: (none)
 * Called by: `EditorTextField__Update`
 */
/* EditorButton__Update() */

void __thiscall EditorButton__Update(EditorButton *self)

{
  EditorButton EVar1;
  int iVar2;
  
  iVar2 = IsMouseOverButton(self);
  if (iVar2 == 1) {
    iVar2 = *(int *)(Mouse + 0x14);
    (**(code **)(*(long *)self + 0x18))(self);
    if (iVar2 == 1) {
      (**(code **)(*(long *)self + 0x30))(self);
      EVar1 = self[0x4a];
      goto joined_r0x004a28de;
    }
  }
  else {
    if (*(int *)(Mouse + 0x14) == 1) {
      self[0x4a] = (EditorButton)0x0;
      *(uint16_t *)(self + 0x48) = 0;
      (**(code **)(*(long *)self + 0x40))(self);
    }
    (**(code **)(*(long *)self + 0x28))(self);
  }
  EVar1 = self[0x4a];
joined_r0x004a28de:
  if (EVar1 != (EditorButton)0x1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004a28f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)self + 0x38))(self);
  return;
}

/* ======================================================================
 * EditorButton__SetSelected  (Ghidra `SetSelected` @ 004a2940)
 * Signature: uint8_t __thiscall SetSelected(EditorButton * self)
 * Class: EditorButton
 * Calls: (none)
 * Called by: (none)
 */
/* EditorButton__SetSelected() */

void __thiscall EditorButton__SetSelected(EditorButton *self)

{
  self[0x4a] = (EditorButton)0x1;
  return;
}

/* ======================================================================
 * EditorButton__SetUnSelected  (Ghidra `SetUnSelected` @ 004a2950)
 * Signature: uint8_t __thiscall SetUnSelected(EditorButton * self)
 * Class: EditorButton
 * Calls: (none)
 * Called by: `SMBLevelPortalInterface__FillList`, `SMBLevelPortalInterface__GetList`
 */
/* EditorButton__SetUnSelected() */

void __thiscall EditorButton__SetUnSelected(EditorButton *self)

{
  self[0x4a] = (EditorButton)0x0;
  *(uint16_t *)(self + 0x48) = 0;
  return;
}

/* ======================================================================
 * EditorButton__Hide  (Ghidra `Hide` @ 004a2960)
 * Signature: uint8_t __thiscall Hide(EditorButton * self)
 * Class: EditorButton
 * Calls: (none)
 * Called by: (none)
 */
/* EditorButton__Hide() */

void __thiscall EditorButton__Hide(EditorButton *self)

{
  self[0x4b] = (EditorButton)0x1;
  *(uint32_t *)(*(long *)(self + 0x10) + 0x20) = 0xffffffff;
  return;
}

/* ======================================================================
 * EditorButton__Show  (Ghidra `Show` @ 004a2970)
 * Signature: uint8_t __thiscall Show(EditorButton * self)
 * Class: EditorButton
 * Calls: (none)
 * Called by: (none)
 */
/* EditorButton__Show() */

void __thiscall EditorButton__Show(EditorButton *self)

{
  self[0x4b] = (EditorButton)0x0;
  *(uint32_t *)(*(long *)(self + 0x10) + 0x20) = *(uint32_t *)(self + 0x4c);
  return;
}

/* ======================================================================
 * EditorButton__IsSelected  (Ghidra `IsSelected` @ 004a2980)
 * Signature: uint8_t __thiscall IsSelected(EditorButton * self)
 * Class: EditorButton
 * Calls: (none)
 * Called by: (none)
 */
/* EditorButton__IsSelected() */

int __thiscall EditorButton__IsSelected(EditorButton *self)

{
  return (int)*(short *)(self + 0x48);
}
