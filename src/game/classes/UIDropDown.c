/* src/game/classes/UIDropDown.c — 11 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "UIDropDown.h"

/* ======================================================================
 * UIDropDown__UIDropDown  (Ghidra `~UIDropDown` @ 005a2690)
 * Signature: uint8_t __thiscall ~UIDropDown(UIDropDown * self)
 * Class: UIDropDown
 * Calls: `UIDropDown__UIDropDown__005a2c40`
 * Called by: (none)
 */
/* UIDropDown__UIDropDown__005a2c40() */

void __thiscall UIDropDown__UIDropDown__005a2c40(UIDropDown *self)

{
  *(uint8_t ***)self = &PTR__UIDropDown_005dd990;
  if (*(long **)(self + 0x58) != (long *)0x0) {
    /* try { // try from 005a26a7 to 005a26b8 has its CatchHandler @ 005a26c2 */
    (**(code **)(**(long **)(self + 0x58) + 8))();
  }
  if (*(long **)(self + 0x60) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x60) + 8))();
  }
  *(uint8_t ***)self = &PTR__UIFormElement_005dd830;
  return;
}

/* ======================================================================
 * UIDropDown__Activate  (Ghidra `Activate` @ 005a2760)
 * Signature: uint8_t __thiscall Activate(UIDropDown * self)
 * Class: UIDropDown
 * Calls: (none)
 * Called by: (none)
 */
/* UIDropDown__Activate() */

void __thiscall UIDropDown__Activate(UIDropDown *self)

{
  *(uint32_t *)(self + 0x38) = 1;
  (**(code **)(**(long **)(self + 0x58) + 0x48))();
  /* WARNING: Could not recover jumptable at 0x005a2781. Too many branches */
  /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(self + 0x60) + 0x40))();
  return;
}

/* ======================================================================
 * UIDropDown__DeActivate  (Ghidra `DeActivate` @ 005a2790)
 * Signature: uint8_t __thiscall DeActivate(UIDropDown * self)
 * Class: UIDropDown
 * Calls: (none)
 * Called by: (none)
 */
/* UIDropDown__DeActivate() */

void __thiscall UIDropDown__DeActivate(UIDropDown *self)

{
  *(uint32_t *)(self + 0x38) = 0;
  (**(code **)(**(long **)(self + 0x58) + 0x48))();
  /* WARNING: Could not recover jumptable at 0x005a27b1. Too many branches */
  /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(self + 0x60) + 0x48))();
  return;
}

/* ======================================================================
 * UIDropDown__Render  (Ghidra `Render` @ 005a27c0)
 * Signature: uint8_t __thiscall Render(UIDropDown * self)
 * Class: UIDropDown
 * Calls: `TGraphics__AddPixelStage`, `TGraphics__Clear`, `TGraphics__Draw`, `TGraphics__GetMatrix`, `TGraphics__ResetPixelStages`, `TGraphics__SetPerspectiveProjectionMode`, `TGraphics__SetPixelColorConstant`, `TGraphics__SetRenderState`, `Vector2__operator_mul_assign__005be220`
 * Called by: (none)
 */
/* UIDropDown__Render() */

void __thiscall UIDropDown__Render(UIDropDown *self)

{
  Matrix4x4 *pMVar1;
  Vector2 local_28[16];
  Vector2 local_18[16];

  if (*(int *)(self + 0x520) == 0) {
    TGraphics__Clear(Graphics, (ColorTemplate *)::cNullColor, 2);
    TGraphics__SetPerspectiveProjectionMode(Graphics, 0);
    pMVar1 = (Matrix4x4 *)TGraphics__GetMatrix(Graphics, 3);
    Matrix4x4__ConvertToOrthoMatrix(pMVar1, DAT_005be894 /* R:1.0f */, DAT_005c07a4 /* R:-1.0f */,
                                    DAT_005c07a4 /* R:-1.0f */, DAT_005be894 /* R:1.0f */,
                                    DAT_005c07a4 /* R:-1.0f */, DAT_005be894 /* R:1.0f */);
    TGraphics__SetRenderState(Graphics, '\x03', 1);
    TGraphics__SetRenderState(Graphics, '\x01', 7);
    UIFormElement__ConvertFromPixelToScreen(local_28, (Vector2 *)(self + 0x20));
    Vector2__operator_mul_assign__005be220(local_28, DAT_005c0068 /* R:2.0f */);
    UIFormElement__ConvertFromPixelToScreen(local_18, (Vector2 *)(self + 0x28));
    TGraphics__ResetPixelStages(Graphics);
    TGraphics__AddPixelStage(Graphics, 1, 0, 0, 0, 0, 1, 0xffffffff);
    TGraphics__SetPixelColorConstant(Graphics, 0, *(uint64_t *)(self + 0x40));
    pMVar1 = (Matrix4x4 *)TGraphics__GetMatrix(Graphics, 0);
    Matrix4x4__Transformation2DRot(pMVar1, local_18, (float *)0x0, local_28);
    TGraphics__Draw(Graphics, CGR__pSingleQuadStream, (IndexBuffer *)0x0);
    TGraphics__SetRenderState(Graphics, '\x01', 6);
    (**(code **)(**(long **)(self + 0x60) + 0x18))();
    TGraphics__SetRenderState(Graphics, '\x01', 7);
    TGraphics__SetRenderState(Graphics, '\x03', 0);
  }
  (**(code **)(**(long **)(self + 0x58) + 0x18))();
  return;
}

/* ======================================================================
 * UIDropDown__Update  (Ghidra `Update` @ 005a2970)
 * Signature: uint8_t __thiscall Update(UIDropDown * self)
 * Class: UIDropDown
 * Calls: `Vector2__operator_assign`, `Vector2__operator_minus__005be180`
 * Called by: (none)
 */
/* UIDropDown__Update() */

void __thiscall UIDropDown__Update(UIDropDown *self)

{
  int iVar1;
  float fVar2;
  uint8_t local_a8[16];
  uint8_t local_98[8];
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  uint32_t local_78;
  float local_74;
  uint32_t local_68;
  float local_64;
  Vector2 local_58[16];
  float local_48;
  uint32_t local_44;
  Vector2 local_38[16];
  float local_28;
  float local_24;

  if (*(int *)(self + 0x520) == 0) {
    (**(code **)(**(long **)(self + 0x58) + 0x48))();
  }
  (**(code **)(**(long **)(self + 0x60) + 0x58))(*(long **)(self + 0x60), local_a8);
  iVar1 = *(int *)(self + 0x51c);
  if (*(int *)(self + 0x518) < *(int *)(self + 0x51c)) {
    iVar1 = *(int *)(self + 0x518);
  }
  local_78 = *(uint32_t *)(self + 0x28);
  local_74 = (_DEFAULT_UI_FONT_SIZE + _DEFAULT_UI_FONT_SIZE) * (float)iVar1;
  Vector2__operator_assign((Vector2 *)(*(long *)(self + 0x58) + 0x28), (Vector2 *)&local_78);
  fVar2 = DAT_005be6e4 /* R:0.5f */;
  local_68 = 0;
  local_64 = (*(float *)(*(long *)(self + 0x58) + 0x2c) - *(float *)(self + 0x2c)) *
             DAT_005be6e4 /* R:0.5f */;
  Vector2__operator_minus__005be180(local_58, (Vector2 *)(self + 0x20));
  Vector2__operator_assign((Vector2 *)(*(long *)(self + 0x58) + 0x20), local_58);
  (**(code **)(**(long **)(self + 0x58) + 0x58))(*(long **)(self + 0x58), &local_88);
  local_44 = 0;
  local_48 = (*(float *)(self + 0x28) - *(float *)(*(long *)(self + 0x50) + 100)) * fVar2;
  Vector2__operator_minus__005be180(local_38, (Vector2 *)(self + 0x20));
  Vector2__operator_assign((Vector2 *)(*(long *)(self + 0x60) + 0x20), local_38);
  (**(code **)(**(long **)(self + 0x50) + 0x58))(*(long **)(self + 0x50), local_98);
  local_28 = local_80 + local_88 + local_90 * fVar2;
  local_24 = local_84 - fVar2 * local_8c;
  Vector2__operator_assign((Vector2 *)(*(long *)(self + 0x50) + 0x20), (Vector2 *)&local_28);
  (**(code **)(**(long **)(self + 0x58) + 0x10))();
  (**(code **)(**(long **)(self + 0x60) + 0x10))();
  return;
}

/* ======================================================================
 * UIDropDown__UIDropDown__005a2c40  (Ghidra `~UIDropDown` @ 005a2c40)
 * Signature: uint8_t __thiscall ~UIDropDown(UIDropDown * self)
 * Class: UIDropDown
 * Calls: `operator_delete`
 * Called by: `UIDropDown__UIDropDown`
 */
/* UIDropDown__UIDropDown__005a2c40() */

void __thiscall UIDropDown__UIDropDown__005a2c40(UIDropDown *self)

{
  *(uint8_t ***)self = &PTR__UIDropDown_005dd990;
  if (*(long **)(self + 0x58) != (long *)0x0) {
    /* try { // try from 005a2c57 to 005a2c68 has its CatchHandler @ 005a2c79 */
    (**(code **)(**(long **)(self + 0x58) + 8))();
  }
  if (*(long **)(self + 0x60) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x60) + 8))();
  }
  *(uint8_t ***)self = &PTR__UIFormElement_005dd830;
  operator_delete(self);
  return;
}

/* ======================================================================
 * UIDropDown__UIDropDown__005a2c90  (Ghidra `UIDropDown` @ 005a2c90)
 * Signature: uint8_t __thiscall UIDropDown(UIDropDown * self, UIDropDownCreation * arg1)
 * Class: UIDropDown
 * Calls: `UIButton__UIButton__005a2560`, `UIDROPDOWN_ActivateDropDown`, `UIForm__UIForm__005a3ce0`, `UIFrame__UIFrame__005a4e70`, `UILabel__UILabel__005a5270`, `UILabel__setAlign`, `UILabel__setText`, `operator_new`
 * Called by: `CreateGraphicsSettingsForm`, `SMBEditorForms__Initialize`
 */
/* UIDropDown__UIDropDown__005a2c90(UIDropDownCreation const*) */

void __thiscall UIDropDown__UIDropDown__005a2c90(UIDropDown *self, UIDropDownCreation *arg1)

{
  UIFrame *this_00;
  UIButton *this_01;
  UIForm *this_02;
  UILabel *this_03;
  uint64_t local_78;
  uint32_t local_70;
  uint32_t local_6c;
  uint64_t local_68;
  uint64_t local_60;
  uint8_t *local_58;
  uint64_t local_50;
  uint64_t local_48;
  uint64_t local_38;
  uint8_t *local_30;
  uint8_t *local_28[2];

  *(uint32_t *)(self + 8) = 0;
  *(uint64_t *)(self + 0x10) = 0;
  *(uint64_t *)(self + 0x18) = 0;
  *(uint32_t *)(self + 0x20) = 0;
  *(uint32_t *)(self + 0x24) = 0;
  *(uint32_t *)(self + 0x28) = 0x3f800000;
  *(uint32_t *)(self + 0x2c) = 0x3f800000;
  *(uint64_t *)(self + 0x30) = 0;
  *(uint32_t *)(self + 0x38) = 0;
  *(uint8_t ***)self = &PTR__UIDropDown_005dd990;
  *(uint32_t *)(self + 0x518) = 10;
  *(uint32_t *)(self + 0x51c) = 0;
  *(uint32_t *)(self + 0x520) = 0;
  *(uint64_t *)(self + 0x528) = 0;
  local_38 = *(uint64_t *)(arg1 + 0x18);
  local_30 = _DEFAULT_UISCROLLBAR_STYLE;
  /* try { // try from 005a2d27 to 005a2d2b has its CatchHandler @ 005a2e47 */
  this_00 = operator_new(0x68);
  /* try { // try from 005a2d37 to 005a2d3b has its CatchHandler @ 005a2e82 */
  UIFrame__UIFrame__005a4e70(this_00, (UIFrameCreation *)&local_38);
  *(UIFrame **)(self + 0x58) = this_00;
  *(uint32_t *)(this_00 + 100) = 0;
  local_58 = _DEFAULT_UILABEL_STYLE;
  local_50 = 0;
  *(uint32_t *)(*(long *)(self + 0x58) + 0x60) = 0;
  local_48 = *(uint64_t *)(arg1 + 8);
  /* try { // try from 005a2d73 to 005a2d77 has its CatchHandler @ 005a2e76 */
  this_01 = operator_new(0x70);
  /* try { // try from 005a2d83 to 005a2d87 has its CatchHandler @ 005a2e74 */
  UIButton__UIButton__005a2560(this_01, (UIButtonCreation *)&local_58);
  *(UIButton **)(self + 0x50) = this_01;
  /* try { // try from 005a2d95 to 005a2d99 has its CatchHandler @ 005a2e76 */
  UILabel__setText(*(UILabel **)(this_01 + 0x50), L"V");
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_6c = 3;
  *(UIDropDown **)(*(long *)(self + 0x50) + 0x48) = self;
  *(code **)(*(long *)(self + 0x50) + 0x40) = UIDROPDOWN_ActivateDropDown;
  local_60 = *(uint64_t *)(arg1 + 0x20);
  /* try { // try from 005a2dde to 005a2de2 has its CatchHandler @ 005a2e72 */
  this_02 = operator_new(0xa8);
  /* try { // try from 005a2dec to 005a2df0 has its CatchHandler @ 005a2e69 */
  UIForm__UIForm__005a3ce0(this_02, (UIFormCreation *)&local_78);
  local_28[0] = _DEFAULT_UILABEL_STYLE;
  *(UIForm **)(*(long *)(self + 0x58) + 0x40) = this_02;
  /* try { // try from 005a2e07 to 005a2e0b has its CatchHandler @ 005a2e67 */
  this_03 = operator_new(0x50);
  /* try { // try from 005a2e17 to 005a2e1b has its CatchHandler @ 005a2e57 */
  UILabel__UILabel__005a5270(this_03, (UILabelCreation *)local_28);
  *(UILabel **)(self + 0x60) = this_03;
  /* try { // try from 005a2e28 to 005a2e2c has its CatchHandler @ 005a2e67 */
  UILabel__setAlign(this_03, 1);
  *(uint64_t *)(self + 0x48) = *(uint64_t *)(arg1 + 0x10);
  *(uint64_t *)(self + 0x40) = *(uint64_t *)arg1;
  return;
}

/* ======================================================================
 * UIDropDown__ShowOptions  (Ghidra `ShowOptions` @ 005a2e90)
 * Signature: uint8_t __thiscall ShowOptions(UIDropDown * self)
 * Class: UIDropDown
 * Calls: (none)
 * Called by: (none)
 */
/* UIDropDown__ShowOptions() */

void __thiscall UIDropDown__ShowOptions(UIDropDown *self)

{
  if (*(int *)(self + 0x520) == 1) {
    (**(code **)(**(long **)(self + 0x58) + 0x48))();
  } else {
    (**(code **)(**(long **)(self + 0x58) + 0x40))();
  }
  *(uint *)(self + 0x520) = (uint)(*(int *)(self + 0x520) == 0);
  return;
}

/* ======================================================================
 * UIDropDown__AddDropdownElement  (Ghidra `AddDropdownElement` @ 005a2ed0)
 * Signature: uint8_t __thiscall AddDropdownElement(UIDropDown * self, wchar_t * arg1, void * arg2)
 * Class: UIDropDown
 * Calls: `UIButton__UIButton__005a2560`, `UIDROPDOWN_MakeSelection`, `UIForm__AddFormElement`, `UILabel__setText`, `Vector2__operator_assign`, `operator_new`
 * Called by: `CreateGraphicsSettingsForm`, `SMBEditorForms__Initialize`
 */
/* UIDropDown__AddDropdownElement(wchar_t const*, void*) */

void __thiscall UIDropDown__AddDropdownElement(UIDropDown *self, wchar_t *arg1, void *arg2)

{
  long lVar1;
  int iVar2;
  UIButton *this_00;
  uint8_t *local_78;
  uint64_t local_70;
  uint64_t local_68;
  uint8_t local_58[8];
  float local_50;
  float local_48;
  float local_44;

  iVar2 = *(int *)(self + 0x51c);
  local_78 = _DEFAULT_UILABEL_STYLE;
  local_70 = 0;
  *(int *)(self + 0x51c) = iVar2 + 1;
  local_68 = *(uint64_t *)(self + 0x48);
  this_00 = operator_new(0x70);
  /* try { // try from 005a2f3a to 005a2f3e has its CatchHandler @ 005a3056 */
  UIButton__UIButton__005a2560(this_00, (UIButtonCreation *)&local_78);
  lVar1 = (long)iVar2 * 0x18;
  *(UIButton **)(self + lVar1 + 0x68) = this_00;
  UILabel__setText(*(UILabel **)(this_00 + 0x50), arg1);
  local_48 = 0.0;
  local_44 =
      DAT_005dd9f0 /* R:-2.0f */ * _DEFAULT_UI_FONT_SIZE * (float)(*(int *)(self + 0x51c) + -1);
  (**(code **)(**(long **)(self + lVar1 + 0x68) + 0x58))(*(long **)(self + lVar1 + 0x68), local_58);
  local_48 = DAT_005be6e4 /* R:0.5f */ * local_50 + local_48;
  Vector2__operator_assign((Vector2 *)(*(long *)(self + lVar1 + 0x68) + 0x20),
                           (Vector2 *)&local_48);
  *(void **)(self + lVar1 + 0x70) = arg2;
  *(UIDropDown **)(self + lVar1 + 0x78) = self;
  *(UIDropDown **)(*(long *)(self + lVar1 + 0x68) + 0x48) = self + lVar1 + 0x68;
  *(code **)(*(long *)(self + lVar1 + 0x68) + 0x40) = UIDROPDOWN_MakeSelection;
  UIForm__AddFormElement(*(UIForm **)(*(long *)(self + 0x58) + 0x40),
                         *(UIFormElement **)(self + lVar1 + 0x68));
  if (*(int *)(self + 0x51c) == 1) {
    *(UIDropDown **)(self + 0x528) = self + 0x68;
    UILabel__setText(
        *(UILabel **)(self + 0x60),
        *(wchar_t **)(*(long *)(*(long *)(*(long *)(self + 0x68) + 0x50) + 0x40) + 0x28));
  }
  return;
}

/* ======================================================================
 * UIDropDown__SetSelected  (Ghidra `SetSelected` @ 005a3070)
 * Signature: uint8_t __thiscall SetSelected(UIDropDown * self, int arg1)
 * Class: UIDropDown
 * Calls: `UIDropDown__SetSelected__005a30a0`, `UILabel__setText`
 * Called by: (none)
 */
/* UIDropDown__SetSelected__005a30a0(int) */

void __thiscall UIDropDown__SetSelected__005a30a0(UIDropDown *self, int arg1)

{
  *(UIDropDown **)(self + 0x528) = self + (long)arg1 * 0x18 + 0x68;
  UILabel__setText(
      *(UILabel **)(self + 0x60),
      *(wchar_t **)(*(long *)(*(long *)(*(long *)(self + (long)arg1 * 0x18 + 0x68) + 0x50) + 0x40) +
                    0x28));
  return;
}

/* ======================================================================
 * UIDropDown__SetSelected__005a30a0  (Ghidra `SetSelected` @ 005a30a0)
 * Signature: uint8_t __thiscall SetSelected(UIDropDown * self, UIDropdownElement * arg1)
 * Class: UIDropDown
 * Calls: `UILabel__setText`
 * Called by: `LightPropertiesActivate`, `UIDropDown__SetSelected`
 */
/* UIDropDown__SetSelected__005a30a0(UIDropDown__UIDropdownElement) */

void __thiscall UIDropDown__SetSelected__005a30a0(UIDropDown *self, UIDropdownElement *arg1)

{
  *(UIDropdownElement **)(self + 0x528) = arg1;
  UILabel__setText(*(UILabel **)(self + 0x60),
                   *(wchar_t **)(*(long *)(*(long *)(*(long *)arg1 + 0x50) + 0x40) + 0x28));
  return;
}
