/* src/game/classes/UIFrame.c — 7 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "UIFrame.h"

/* ======================================================================
 * UIFrame__UIFrame  (Ghidra `~UIFrame` @ 005a4850)
 * Signature: uint8_t __thiscall ~UIFrame(UIFrame * self)
 * Class: UIFrame
 * Calls: `UIFrame__UIFrame__005a4e30`
 * Called by: (none)
 */
/* UIFrame__UIFrame__005a4e30() */

void __thiscall UIFrame__UIFrame__005a4e30(UIFrame *self)

{
  *(uint8_t ***)self = &PTR__UIFrame_005ddb10;
  if (*(long **)(self + 0x40) != (long *)0x0) {
    /* try { // try from 005a4867 to 005a4869 has its CatchHandler @ 005a4873 */
    (**(code **)(**(long **)(self + 0x40) + 8))();
  }
  *(uint8_t ***)self = &PTR__UIFormElement_005dd830;
  return;
}

/* ======================================================================
 * UIFrame__DeActivate  (Ghidra `DeActivate` @ 005a48d0)
 * Signature: uint8_t __thiscall DeActivate(UIFrame * self)
 * Class: UIFrame
 * Calls: `UIForm__DeActivate`
 * Called by: (none)
 */
/* UIFrame__DeActivate() */

void __thiscall UIFrame__DeActivate(UIFrame *self)

{
  *(uint32_t *)(self + 0x38) = 0;
  if (*(UIForm **)(self + 0x40) != (UIForm *)0x0) {
    UIForm__DeActivate(*(UIForm **)(self + 0x40));
  }
  (**(code **)(**(long **)(self + 0x58) + 0x48))();
  /* WARNING: Could not recover jumptable at 0x005a48ff. Too many branches */
  /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(self + 0x50) + 0x48))();
  return;
}

/* ======================================================================
 * UIFrame__Render  (Ghidra `Render` @ 005a4990)
 * Signature: uint8_t __thiscall Render(UIFrame * self)
 * Class: UIFrame
 * Calls: `TGraphics__AddPixelStage`, `TGraphics__Clear`, `TGraphics__Draw`, `TGraphics__GetMatrix`, `TGraphics__ResetPixelStages`, `TGraphics__SetPerspectiveProjectionMode`, `TGraphics__SetPixelColorConstant`, `TGraphics__SetRenderState`, `Vector2__operator_mul_assign__005be220`
 * Called by: (none)
 */
/* UIFrame__Render() */

void __thiscall UIFrame__Render(UIFrame *self)

{
  Matrix4x4 *pMVar1;
  Vector2 local_28[16];
  Vector2 local_18[16];

  if (*(int *)(self + 0x38) != 0) {
    UIFormElement__ConvertFromPixelToScreen(local_28, (Vector2 *)(self + 0x20));
    Vector2__operator_mul_assign__005be220(local_28, DAT_005c0068 /* R:2.0f */);
    UIFormElement__ConvertFromPixelToScreen(local_18, (Vector2 *)(self + 0x28));
    TGraphics__SetPerspectiveProjectionMode(Graphics, 0);
    pMVar1 = (Matrix4x4 *)TGraphics__GetMatrix(Graphics, 3);
    Matrix4x4__ConvertToOrthoMatrix(pMVar1, DAT_005be894 /* R:1.0f */, DAT_005c07a4 /* R:-1.0f */,
                                    DAT_005c07a4 /* R:-1.0f */, DAT_005be894 /* R:1.0f */,
                                    DAT_005c07a4 /* R:-1.0f */, DAT_005be894 /* R:1.0f */);
    TGraphics__Clear(Graphics, (ColorTemplate *)::cNullColor, 2);
    TGraphics__ResetPixelStages(Graphics);
    TGraphics__AddPixelStage(Graphics, 1, 0, 0, 0, 0, 1, 0xffffffff);
    TGraphics__SetPixelColorConstant(Graphics, 0, *(long *)(self + 0x48) + 0x10);
    TGraphics__SetRenderState(Graphics, '\x03', 1);
    TGraphics__SetRenderState(Graphics, '\x01', 7);
    pMVar1 = (Matrix4x4 *)TGraphics__GetMatrix(Graphics, 0);
    Matrix4x4__Transformation2DRot(pMVar1, local_18, (float *)0x0, local_28);
    TGraphics__Draw(Graphics, CGR__pSingleQuadStream, (IndexBuffer *)0x0);
    TGraphics__SetRenderState(Graphics, '\x01', 6);
    TGraphics__SetRenderState(Graphics, '\x03', 0);
    if (*(long **)(self + 0x40) != (long *)0x0) {
      (**(code **)(**(long **)(self + 0x40) + 0x10))();
    }
    TGraphics__SetRenderState(Graphics, '\x01', 7);
    TGraphics__SetRenderState(Graphics, '\x03', 0);
    if (*(int *)(self + 0x60) == 1) {
      (**(code **)(**(long **)(self + 0x50) + 0x18))();
    }
    if (*(int *)(self + 100) == 1) {
      (**(code **)(**(long **)(self + 0x58) + 0x18))();
    }
  }
  return;
}

/* ======================================================================
 * UIFrame__Activate  (Ghidra `Activate` @ 005a4b70)
 * Signature: uint8_t __thiscall Activate(UIFrame * self)
 * Class: UIFrame
 * Calls: `UIForm__Activate`
 * Called by: (none)
 */
/* UIFrame__Activate() */

void __thiscall UIFrame__Activate(UIFrame *self)

{
  *(uint32_t *)(self + 0x38) = 1;
  if (*(UIForm **)(self + 0x40) != (UIForm *)0x0) {
    UIForm__Activate(*(UIForm **)(self + 0x40));
  }
  if (*(int *)(self + 100) == 1) {
    (**(code **)(**(long **)(self + 0x58) + 0x40))();
  }
  if (*(int *)(self + 0x60) != 1) {
    return;
  }
  /* WARNING: Could not recover jumptable at 0x005a4bac. Too many branches */
  /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(self + 0x50) + 0x40))();
  return;
}

/* ======================================================================
 * UIFrame__Update  (Ghidra `Update` @ 005a4bc0)
 * Signature: uint8_t __thiscall Update(UIFrame * self)
 * Class: UIFrame
 * Calls: `UIForm__CalculateFormArea`, `UIForm__Update`, `Vector2__operator_assign`, `Vector2__operator_minus__005be180`, `Vector2__operator_plus__005be140`
 * Called by: (none)
 */
/* UIFrame__Update() */

void __thiscall UIFrame__Update(UIFrame *self)

{
  uint32_t local_c8;
  uint32_t local_c4;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_98;
  float local_94;
  uint32_t local_88;
  uint32_t local_84;
  Vector2 local_78[16];
  float local_68;
  uint32_t local_64;
  float local_58;
  float local_54;
  Vector2 local_48[16];
  uint32_t local_38;
  float local_34;
  float local_28;
  float local_24;

  if (*(int *)(self + 0x38) != 0) {
    if (*(long *)(self + 0x40) != 0) {
      (**(code **)(*(long *)self + 0x58))(self, &local_c8);
      UIForm__CalculateFormArea(*(UIForm **)(self + 0x40), (UIRect *)&local_b8);
      local_88 = local_c8;
      local_84 = local_c4;
      local_a8 = DAT_005be6e4 /* R:0.5f */ * local_b0 + local_b8;
      local_a4 = local_b4 - DAT_005be6e4 /* R:0.5f */ * local_ac;
      Vector2__operator_minus__005be180((Vector2 *)&local_98, (Vector2 *)&local_88);
      local_98 = (local_98 + local_b0) -
                 local_b0 * DAT_005be6e4 /* R:0.5f */ *
                     (*(float *)(*(long *)(self + 0x58) + 100) + DAT_005be894 /* R:1.0f */);
      local_94 = (local_94 - local_ac) +
                 local_ac * DAT_005be6e4 /* R:0.5f */ *
                     (*(float *)(*(long *)(self + 0x50) + 100) + DAT_005be894 /* R:1.0f */);
      Vector2__operator_assign((Vector2 *)(*(long *)(self + 0x40) + 0x38), (Vector2 *)&local_98);
      UIForm__Update(*(UIForm **)(self + 0x40));
    }
    local_64 = 0;
    local_68 = (*(float *)(self + 0x28) + *(float *)(*(long *)(self + 0x50) + 0x28)) *
               DAT_005be6e4 /* R:0.5f */;
    Vector2__operator_plus__005be140(local_78, (Vector2 *)(self + 0x20));
    Vector2__operator_assign((Vector2 *)(*(long *)(self + 0x50) + 0x20), local_78);
    local_58 = *(float *)(*(long *)(self + 0x50) + 0x28);
    local_54 = *(float *)(self + 0x28) - local_58;
    Vector2__operator_assign((Vector2 *)(*(long *)(self + 0x50) + 0x28), (Vector2 *)&local_58);
    local_38 = 0;
    local_34 = (*(float *)(self + 0x2c) + *(float *)(*(long *)(self + 0x58) + 0x2c)) *
               DAT_005be6e4 /* R:0.5f */;
    Vector2__operator_minus__005be180(local_48, (Vector2 *)(self + 0x20));
    Vector2__operator_assign((Vector2 *)(*(long *)(self + 0x58) + 0x20), local_48);
    local_24 = *(float *)(*(long *)(self + 0x58) + 0x2c);
    local_28 = *(float *)(self + 0x2c) - local_24;
    Vector2__operator_assign((Vector2 *)(*(long *)(self + 0x58) + 0x28), (Vector2 *)&local_28);
    if (*(int *)(self + 0x60) == 1) {
      (**(code **)(**(long **)(self + 0x50) + 0x10))();
    }
    if (*(int *)(self + 100) == 1) {
      (**(code **)(**(long **)(self + 0x58) + 0x10))();
      return;
    }
  }
  return;
}

/* ======================================================================
 * UIFrame__UIFrame__005a4e30  (Ghidra `~UIFrame` @ 005a4e30)
 * Signature: uint8_t __thiscall ~UIFrame(UIFrame * self)
 * Class: UIFrame
 * Calls: `operator_delete`
 * Called by: `UIFrame__UIFrame`
 */
/* UIFrame__UIFrame__005a4e30() */

void __thiscall UIFrame__UIFrame__005a4e30(UIFrame *self)

{
  *(uint8_t ***)self = &PTR__UIFrame_005ddb10;
  if (*(long **)(self + 0x40) != (long *)0x0) {
    /* try { // try from 005a4e47 to 005a4e49 has its CatchHandler @ 005a4e5a */
    (**(code **)(**(long **)(self + 0x40) + 8))();
  }
  *(uint8_t ***)self = &PTR__UIFormElement_005dd830;
  operator_delete(self);
  return;
}

/* ======================================================================
 * UIFrame__UIFrame__005a4e70  (Ghidra `UIFrame` @ 005a4e70)
 * Signature: uint8_t __thiscall UIFrame(UIFrame * self, UIFrameCreation * arg1)
 * Class: UIFrame
 * Calls: `UIScrollBar__UIScrollBar__005a5900`, `Vector2__operator_assign`, `operator_new`
 * Called by: `UIDropDown__UIDropDown__005a2c90`
 */
/* UIFrame__UIFrame__005a4e70(UIFrameCreation const*) */

void __thiscall UIFrame__UIFrame__005a4e70(UIFrame *self, UIFrameCreation *arg1)

{
  UIScrollBar *pUVar1;
  uint8_t *local_58;
  uint8_t *local_50;
  uint32_t local_48;
  uint32_t local_38;
  uint32_t local_34;
  uint32_t local_28;
  uint32_t local_24;

  *(uint32_t *)(self + 8) = 0;
  *(uint64_t *)(self + 0x10) = 0;
  *(uint64_t *)(self + 0x18) = 0;
  *(uint32_t *)(self + 0x20) = 0;
  *(uint32_t *)(self + 0x24) = 0;
  *(uint32_t *)(self + 0x28) = 0x3f800000;
  *(uint32_t *)(self + 0x2c) = 0x3f800000;
  *(uint64_t *)(self + 0x30) = 0;
  *(uint32_t *)(self + 0x38) = 0;
  *(uint8_t ***)self = &PTR__UIFrame_005ddb10;
  *(uint64_t *)(self + 0x40) = 0;
  *(uint32_t *)(self + 0x60) = 1;
  *(uint32_t *)(self + 100) = 1;
  local_58 = _DEFAULT_UISCROLLBAR_STYLE;
  local_50 = _DEFAULT_UIBUTTON_STYLE;
  local_48 = 0;
  *(uint64_t *)(self + 0x48) = *(uint64_t *)arg1;
  /* try { // try from 005a4efe to 005a4f02 has its CatchHandler @ 005a4f88 */
  pUVar1 = operator_new(0x68);
  /* try { // try from 005a4f0e to 005a4f12 has its CatchHandler @ 005a4fab */
  UIScrollBar__UIScrollBar__005a5900(pUVar1, (UIScrollBarCreation *)&local_58);
  *(UIScrollBar **)(self + 0x50) = pUVar1;
  local_48 = 1;
  /* try { // try from 005a4f24 to 005a4f28 has its CatchHandler @ 005a4f88 */
  pUVar1 = operator_new(0x68);
  /* try { // try from 005a4f34 to 005a4f38 has its CatchHandler @ 005a4f97 */
  UIScrollBar__UIScrollBar__005a5900(pUVar1, (UIScrollBarCreation *)&local_58);
  *(UIScrollBar **)(self + 0x58) = pUVar1;
  local_38 = 0x41c80000;
  local_34 = 0;
  /* try { // try from 005a4f5a to 005a4f80 has its CatchHandler @ 005a4f88 */
  Vector2__operator_assign((Vector2 *)(*(long *)(self + 0x50) + 0x28), (Vector2 *)&local_38);
  local_28 = 0;
  local_24 = 0x41c80000;
  Vector2__operator_assign((Vector2 *)(*(long *)(self + 0x58) + 0x28), (Vector2 *)&local_28);
  return;
}
