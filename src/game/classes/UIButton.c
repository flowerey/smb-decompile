/* src/game/classes/UIButton.c — 10 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "UIButton.h"

/* ======================================================================
 * UIButton__UIButton  (Ghidra `~UIButton` @ 005a2190)
 * Signature: uint8_t __thiscall ~UIButton(UIButton * self)
 * Class: UIButton
 * Calls: `UIButton__UIButton__005a2320`
 * Called by: (none)
 */
/* UIButton__UIButton__005a2320() */

void __thiscall UIButton__UIButton__005a2320(UIButton *self)

{
  *(uint8_t ***)self = &PTR__UIButton_005dd8d0;
  if (*(long **)(self + 0x50) != (long *)0x0) {
    /* try { // try from 005a21a7 to 005a21a9 has its CatchHandler @ 005a21b3 */
    (**(code **)(**(long **)(self + 0x50) + 8))();
  }
  *(uint8_t ***)self = &PTR__UIFormElement_005dd830;
  return;
}

/* ======================================================================
 * UIButton__Update  (Ghidra `Update` @ 005a21d0)
 * Signature: uint8_t __stdcall Update(void)
 * Class: UIButton
 * Calls: (none)
 * Called by: (none)
 */
/* UIButton__Update() */

void UIButton__Update(void)

{
  return;
}

/* ======================================================================
 * UIButton__ClickOn  (Ghidra `ClickOn` @ 005a2250)
 * Signature: uint8_t __thiscall ClickOn(UIButton * self)
 * Class: UIButton
 * Calls: (none)
 * Called by: (none)
 */
/* UIButton__ClickOn() */

void __thiscall UIButton__ClickOn(UIButton *self)

{
  UIButton *pUVar1;

  if (*(code **)(self + 0x40) != (code *)0x0) {
    pUVar1 = *(UIButton **)(self + 0x48);
    if (*(UIButton **)(self + 0x48) == (UIButton *)0x0) {
      pUVar1 = self;
    }
    (**(code **)(self + 0x40))(pUVar1);
  }
  *(uint32_t *)(self + 0x60) = 2;
  return;
}

/* ======================================================================
 * UIButton__MouseOver  (Ghidra `MouseOver` @ 005a2280)
 * Signature: uint8_t __thiscall MouseOver(UIButton * self)
 * Class: UIButton
 * Calls: (none)
 * Called by: (none)
 */
/* UIButton__MouseOver() */

void __thiscall UIButton__MouseOver(UIButton *self)

{
  *(uint32_t *)(self + 0x60) = 1;
  return;
}

/* ======================================================================
 * UIButton__MouseOut  (Ghidra `MouseOut` @ 005a2290)
 * Signature: uint8_t __thiscall MouseOut(UIButton * self)
 * Class: UIButton
 * Calls: (none)
 * Called by: (none)
 */
/* UIButton__MouseOut() */

void __thiscall UIButton__MouseOut(UIButton *self)

{
  *(uint32_t *)(self + 0x60) = 0;
  return;
}

/* ======================================================================
 * UIButton__Activate  (Ghidra `Activate` @ 005a22a0)
 * Signature: uint8_t __thiscall Activate(UIButton * self)
 * Class: UIButton
 * Calls: (none)
 * Called by: (none)
 */
/* UIButton__Activate() */

void __thiscall UIButton__Activate(UIButton *self)

{
  *(uint32_t *)(self + 0x38) = 1;
  /* WARNING: Could not recover jumptable at 0x005a22b2. Too many branches */
  /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(self + 0x50) + 0x40))();
  return;
}

/* ======================================================================
 * UIButton__DeActivate  (Ghidra `DeActivate` @ 005a22c0)
 * Signature: uint8_t __thiscall DeActivate(UIButton * self)
 * Class: UIButton
 * Calls: (none)
 * Called by: (none)
 */
/* UIButton__DeActivate() */

void __thiscall UIButton__DeActivate(UIButton *self)

{
  *(uint32_t *)(self + 0x38) = 0;
  /* WARNING: Could not recover jumptable at 0x005a22d2. Too many branches */
  /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(self + 0x50) + 0x48))();
  return;
}

/* ======================================================================
 * UIButton__UIButton__005a2320  (Ghidra `~UIButton` @ 005a2320)
 * Signature: uint8_t __thiscall ~UIButton(UIButton * self)
 * Class: UIButton
 * Calls: `operator_delete`
 * Called by: `UIButton__UIButton`
 */
/* UIButton__UIButton__005a2320() */

void __thiscall UIButton__UIButton__005a2320(UIButton *self)

{
  *(uint8_t ***)self = &PTR__UIButton_005dd8d0;
  if (*(long **)(self + 0x50) != (long *)0x0) {
    /* try { // try from 005a2337 to 005a2339 has its CatchHandler @ 005a234a */
    (**(code **)(**(long **)(self + 0x50) + 8))();
  }
  *(uint8_t ***)self = &PTR__UIFormElement_005dd830;
  operator_delete(self);
  return;
}

/* ======================================================================
 * UIButton__Render  (Ghidra `Render` @ 005a2360)
 * Signature: uint8_t __thiscall Render(UIButton * self)
 * Class: UIButton
 * Calls: `TGraphics__AddPixelStage`, `TGraphics__Draw`, `TGraphics__GetMatrix`, `TGraphics__PopMatrix`, `TGraphics__PushMatrix`, `TGraphics__ResetPixelStages`, `TGraphics__ResetTexCoordGen`, `TGraphics__SetPerspectiveProjectionMode`, `TGraphics__SetPixelColorConstant`, `TGraphics__SetRenderState`
 * Called by: (none)
 */
/* UIButton__Render() */

void __thiscall UIButton__Render(UIButton *self)

{
  Matrix4x4 *pMVar1;
  uint8_t local_38[8];
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_18;
  float local_14;

  if (*(int *)(self + 0x38) != 0) {
    local_28 = *(float *)(self + 0x20) / (float)*(ushort *)(Window + 8);
    local_28 = local_28 + local_28;
    local_24 = *(float *)(self + 0x24) / (float)*(ushort *)(Window + 10);
    local_24 = local_24 + local_24;
    pMVar1 = (Matrix4x4 *)TGraphics__GetMatrix(Graphics, 0);
    Matrix4x4__Transformation2DRot(pMVar1, (Vector2 *)(self + 0x28), (float *)0x0,
                                   (Vector2 *)&local_28);
    TGraphics__PushMatrix(Graphics, 0);
    (**(code **)(**(long **)(self + 0x50) + 0x58))(*(long **)(self + 0x50), local_38);
    local_30 = (*(float *)(self + 100) + local_30) / (float)*(ushort *)(Window + 8);
    local_2c = (*(float *)(self + 0x68) + local_2c) / (float)*(ushort *)(Window + 10);
    TGraphics__ResetPixelStages(Graphics);
    TGraphics__ResetTexCoordGen(Graphics);
    TGraphics__SetRenderState(Graphics, '\x05', 4);
    TGraphics__SetRenderState(Graphics, '\x06', 5);
    TGraphics__AddPixelStage(Graphics, 1, 0, 0, 0, 0, 1, 0xffffffff);
    TGraphics__SetPixelColorConstant(Graphics, 0,
                                     (long)*(int *)(self + 0x60) * 0x10 + *(long *)(self + 0x58));
    TGraphics__SetPerspectiveProjectionMode(Graphics, 0);
    pMVar1 = (Matrix4x4 *)TGraphics__GetMatrix(Graphics, 3);
    Matrix4x4__ConvertToOrthoMatrix(pMVar1, DAT_005be894 /* R:1.0f */, DAT_005c07a4 /* R:-1.0f */,
                                    DAT_005c07a4 /* R:-1.0f */, DAT_005be894 /* R:1.0f */,
                                    DAT_005c07a4 /* R:-1.0f */, DAT_005be894 /* R:1.0f */);
    local_18 = local_30;
    local_14 = local_2c;
    pMVar1 = (Matrix4x4 *)TGraphics__GetMatrix(Graphics, 0);
    Matrix4x4__ConvertToScalingMatrix(pMVar1, (Vector2 *)&local_18);
    TGraphics__Draw(Graphics, CGR__pSingleQuadStream, (IndexBuffer *)0x0);
    (**(code **)(**(long **)(self + 0x50) + 0x18))();
    TGraphics__PopMatrix(Graphics);
  }
  return;
}

/* ======================================================================
 * UIButton__UIButton__005a2560  (Ghidra `UIButton` @ 005a2560)
 * Signature: uint8_t __thiscall UIButton(UIButton * self, UIButtonCreation * arg1)
 * Class: UIButton
 * Calls: `UILabel__UILabel__005a5270`, `UILabel__setAlign`, `operator_new`
 * Called by: `CreateGraphicsSettingsForm`, `SMBEditorForms__Initialize`, `ShowUIMessageBox`, `UIDropDown__AddDropdownElement`, `UIDropDown__UIDropDown__005a2c90`, `UIMessageBox__UIMessageBox__005a4280`, `UIScrollBar__UIScrollBar__005a5900`
 */
/* UIButton__UIButton__005a2560(UIButtonCreation const*) */

void __thiscall UIButton__UIButton__005a2560(UIButton *self, UIButtonCreation *arg1)

{
  long lVar1;
  UILabel *this_00;

  *(uint32_t *)(self + 8) = 0;
  *(uint64_t *)(self + 0x10) = 0;
  *(uint64_t *)(self + 0x18) = 0;
  *(uint32_t *)(self + 0x20) = 0;
  *(uint32_t *)(self + 0x24) = 0;
  *(uint32_t *)(self + 0x28) = 0x3f800000;
  *(uint32_t *)(self + 0x2c) = 0x3f800000;
  *(uint64_t *)(self + 0x30) = 0;
  *(uint32_t *)(self + 0x38) = 0;
  *(uint8_t ***)self = &PTR__UIButton_005dd8d0;
  *(uint64_t *)(self + 0x48) = 0;
  *(uint32_t *)(self + 0x60) = 0;
  *(uint32_t *)(self + 100) = 0x41200000;
  *(uint32_t *)(self + 0x68) = 0x41200000;
  *(uint64_t *)(self + 0x40) = *(uint64_t *)(arg1 + 8);
  lVar1 = *(long *)(arg1 + 0x10);
  *(long *)(self + 0x58) = lVar1;
  if (*(long *)(lVar1 + 0x30) == 0) {
    *(uint64_t *)(lVar1 + 0x30) = _DEFAULT_UI_FONT;
  }
  /* try { // try from 005a25fb to 005a25ff has its CatchHandler @ 005a263d */
  this_00 = operator_new(0x50);
  /* try { // try from 005a2609 to 005a260d has its CatchHandler @ 005a264c */
  UILabel__UILabel__005a5270(this_00, (UILabelCreation *)arg1);
  *(UILabel **)(self + 0x50) = this_00;
  /* try { // try from 005a2617 to 005a261b has its CatchHandler @ 005a263d */
  UILabel__setAlign(this_00, 0);
  return;
}
