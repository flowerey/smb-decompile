/* src/game/classes/UIMessageBox.c — 3 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "UIMessageBox.h"

/* ======================================================================
 * UIMessageBox__UIMessageBox  (Ghidra `~UIMessageBox` @ 005a3430)
 * Signature: uint8_t __thiscall ~UIMessageBox(UIMessageBox * self)
 * Class: UIMessageBox
 * Calls: `RenderLayer__RemoveObject`, `UIMessageBox__UIMessageBox__005a34d0`
 * Called by: (none)
 */
/* UIMessageBox__UIMessageBox__005a34d0() */

void __thiscall UIMessageBox__UIMessageBox__005a34d0(UIMessageBox *self)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  
  uVar2 = *(uint *)(self + 0x78);
  *(uint8_t ***)self = &PTR__UIMessageBox_005ddab0;
  iUIMessageBoxesActive = iUIMessageBoxesActive + -1;
  *(uint8_t ***)self = &PTR__UIForm_005dda70;
  if ((uVar2 & 4) != 0) {
    RenderLayer__RemoveObject(__UILayer,(RenderLayerObject *)self);
    uVar2 = *(uint *)(self + 0x78);
  }
  if (((uVar2 & 1) != 0) && (plVar3 = *(long **)(self + 0x68), plVar3 != (long *)0x0)) {
    do {
      lVar1 = *plVar3;
      plVar3 = (long *)plVar3[2];
                    /* try { // try from 005a348a to 005a34b6 has its CatchHandler @ 005a34bc */
      (**(code **)(lVar1 + 8))();
    } while (plVar3 != (long *)0x0);
    *(uint8_t ***)self = &PTR__RenderLayerObject_005be670;
    return;
  }
  *(uint8_t ***)self = &PTR__RenderLayerObject_005be670;
  return;
}

/* ======================================================================
 * UIMessageBox__UIMessageBox__005a34d0  (Ghidra `~UIMessageBox` @ 005a34d0)
 * Signature: uint8_t __thiscall ~UIMessageBox(UIMessageBox * self)
 * Class: UIMessageBox
 * Calls: `RenderLayer__RemoveObject`, `operator_delete`
 * Called by: `UIMessageBox__UIMessageBox`
 */
/* UIMessageBox__UIMessageBox__005a34d0() */

void __thiscall UIMessageBox__UIMessageBox__005a34d0(UIMessageBox *self)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(self + 0x78);
  *(uint8_t ***)self = &PTR__UIMessageBox_005ddab0;
  iUIMessageBoxesActive = iUIMessageBoxesActive + -1;
  *(uint8_t ***)self = &PTR__UIForm_005dda70;
  if ((uVar3 & 4) != 0) {
    RenderLayer__RemoveObject(__UILayer,(RenderLayerObject *)self);
    uVar3 = *(uint *)(self + 0x78);
  }
  if ((uVar3 & 1) != 0) {
    plVar1 = *(long **)(self + 0x68);
    while (plVar1 != (long *)0x0) {
      lVar2 = *plVar1;
      plVar1 = (long *)plVar1[2];
                    /* try { // try from 005a352a to 005a3546 has its CatchHandler @ 005a354c */
      (**(code **)(lVar2 + 8))();
    }
  }
  *(uint8_t ***)self = &PTR__RenderLayerObject_005be670;
  operator_delete(self);
  return;
}

/* ======================================================================
 * UIMessageBox__UIMessageBox__005a4280  (Ghidra `UIMessageBox` @ 005a4280)
 * Signature: uint8_t __thiscall UIMessageBox(UIMessageBox * self, wchar_t * arg1, Vector2 * arg2)
 * Class: UIMessageBox
 * Calls: `RenderLayer__AddObject`, `UIButton__UIButton__005a2560`, `UIForm__AddFormElement`, `UILabel__UILabel__005a5270`, `UILabel__setAlign`, `UILabel__setText`, `UIMessageBoxClose`, `UIMessageBoxClose2`, `Vector2__operator_assign`, `operator_new`
 * Called by: (none)
 */
/* UIMessageBox__UIMessageBox__005a4280(wchar_t const*, Vector2 const&) */

void __thiscall UIMessageBox__UIMessageBox__005a4280(UIMessageBox *self,wchar_t *arg1,Vector2 *arg2)

{
  long *plVar1;
  float fVar2;
  UIMessageBox *pUVar3;
  RenderLayer *this_00;
  long lVar4;
  UIMessageBox *pUVar5;
  UILabel *this_01;
  UIButton *this_02;
  uint8_t *local_58;
  uint64_t local_50;
  uint8_t *local_48;
  uint8_t *local_38 [2];
  uint32_t local_28;
  uint32_t local_24;
  
  *(uint64_t *)(self + 8) = 0;
  *(uint64_t *)(self + 0x10) = 0;
  *(uint64_t *)(self + 0x18) = 0;
  *(uint32_t *)(self + 0x20) = 0;
  *(uint32_t *)(self + 0x24) = 0;
  *(uint32_t *)(self + 0x28) = 0x3f800000;
  *(uint32_t *)(self + 0x2c) = 0x3f800000;
  *(uint32_t *)(self + 0x30) = 0;
  *(uint32_t *)(self + 0x34) = 0;
  *(uint32_t *)(self + 0x38) = 0;
  *(uint32_t *)(self + 0x3c) = 0;
  *(uint32_t *)(self + 0x40) = 0x3f800000;
  *(uint32_t *)(self + 0x44) = 0x3f800000;
  *(uint8_t **)(self + 0x48) = _DEFAULT_UIFORM_STYLE;
  *(uint64_t *)(self + 0x50) = 0;
  *(uint64_t *)(self + 0x58) = 0;
  *(uint64_t *)(self + 0x60) = 0;
  *(uint64_t *)(self + 0x68) = 0;
  *(uint32_t *)(self + 0x8c) = 0;
  *(uint32_t *)(self + 0x90) = 0;
  *(uint64_t *)(self + 0x98) = 0;
  *(uint8_t ***)self = &PTR__UIMessageBox_005ddab0;
  *(uint32_t *)(self + 0x78) = 7;
  local_38[0] = _DEFAULT_UILABEL_STYLE;
                    /* try { // try from 005a434f to 005a4353 has its CatchHandler @ 005a4518 */
  this_01 = operator_new(0x50);
                    /* try { // try from 005a435f to 005a4363 has its CatchHandler @ 005a453d */
  UILabel__UILabel__005a5270(this_01,(UILabelCreation *)local_38);
                    /* try { // try from 005a436a to 005a4378 has its CatchHandler @ 005a4518 */
  UILabel__setText(this_01,arg1);
  UILabel__setAlign(this_01,0);
  local_58 = _DEFAULT_UILABEL_STYLE;
  local_50 = 0;
  local_48 = _DEFAULT_UIBUTTON_STYLE;
                    /* try { // try from 005a4398 to 005a439c has its CatchHandler @ 005a453b */
  this_02 = operator_new(0x70);
                    /* try { // try from 005a43a6 to 005a43aa has its CatchHandler @ 005a452b */
  UIButton__UIButton__005a2560(this_02,(UIButtonCreation *)&local_58);
                    /* try { // try from 005a43b4 to 005a4512 has its CatchHandler @ 005a453b */
  UILabel__setText(*(UILabel **)(this_02 + 0x50),L"OK");
  local_28 = 0;
  local_24 = 0xc2200000;
  Vector2__operator_assign((Vector2 *)(this_02 + 0x20),(Vector2 *)&local_28);
  *(code **)(this_02 + 0x40) = UIMessageBoxClose;
  UIForm__AddFormElement((UIForm *)self,(UIFormElement *)this_01);
  UIForm__AddFormElement((UIForm *)self,(UIFormElement *)this_02);
  lVar4 = Window;
  this_00 = __UILayer;
  fVar2 = DAT_005c48a4 /* R:50.0f */;
  *(float *)(self + 0x30) = DAT_005c48a4 /* R:50.0f */ / (float)*(ushort *)(Window + 8);
  *(float *)(self + 0x34) = fVar2 / (float)*(ushort *)(lVar4 + 10);
  RenderLayer__AddObject(this_00,(RenderLayerObject *)self);
  pUVar3 = _CURRENT_EXCLUSIVE_FORM;
  pUVar5 = _CURRENT_EXCLUSIVE_FORM;
  if ((((byte)self[0x78] & 8) != 0) &&
     (pUVar5 = self, _CURRENT_EXCLUSIVE_FORM != (UIMessageBox *)0x0)) {
    for (plVar1 = *(long **)(_CURRENT_EXCLUSIVE_FORM + 0x68); plVar1 != (long *)0x0;
        plVar1 = (long *)plVar1[2]) {
      (**(code **)(*plVar1 + 0x48))(plVar1);
    }
    if ((*(int *)(pUVar3 + 0x90) == 1) && (*(code **)(pUVar3 + 0x60) != (code *)0x0)) {
      (**(code **)(pUVar3 + 0x60))(pUVar3);
    }
    *(uint32_t *)(pUVar3 + 0x90) = 0;
    *(uint64_t *)(pUVar3 + 0x98) = 0;
    pUVar5 = self;
  }
  _CURRENT_EXCLUSIVE_FORM = pUVar5;
  for (plVar1 = *(long **)(self + 0x68); plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x40))(plVar1);
  }
  if (*(int *)(self + 0x90) == 0) {
    if (*(code **)(self + 0x58) != (code *)0x0) {
      (**(code **)(self + 0x58))(self);
    }
    *(uint32_t *)(self + 0xa0) = 0;
  }
  *(uint32_t *)(self + 0x90) = 1;
  *(code **)(self + 0x50) = UIMessageBoxClose2;
  iUIMessageBoxesActive = iUIMessageBoxesActive + 1;
  return;
}
