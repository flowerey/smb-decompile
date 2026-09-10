/* src/game/classes/UIScrollBar.c — 7 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "UIScrollBar.h"

/* ======================================================================
 * UIScrollBar__UIScrollBar  (Ghidra `~UIScrollBar` @ 005a53c0)
 * Signature: uint8_t __thiscall ~UIScrollBar(UIScrollBar * self)
 * Class: UIScrollBar
 * Calls: `UIScrollBar__UIScrollBar__005a5470`
 * Called by: (none)
 */
/* UIScrollBar__UIScrollBar__005a5470() */

void __thiscall UIScrollBar__UIScrollBar__005a5470(UIScrollBar *self)

{
  *(uint8_t ***)self = &PTR__UIFormElement_005dd830;
  return;
}

/* ======================================================================
 * UIScrollBar__Activate  (Ghidra `Activate` @ 005a5410)
 * Signature: uint8_t __thiscall Activate(UIScrollBar * self)
 * Class: UIScrollBar
 * Calls: (none)
 * Called by: (none)
 */
/* UIScrollBar__Activate() */

void __thiscall UIScrollBar__Activate(UIScrollBar *self)

{
  *(uint32_t *)(self + 0x38) = 1;
  (**(code **)(**(long **)(self + 0x58) + 0x40))();
                    /* WARNING: Could not recover jumptable at 0x005a5431. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(self + 0x50) + 0x40))();
  return;
}

/* ======================================================================
 * UIScrollBar__DeActivate  (Ghidra `DeActivate` @ 005a5440)
 * Signature: uint8_t __thiscall DeActivate(UIScrollBar * self)
 * Class: UIScrollBar
 * Calls: (none)
 * Called by: (none)
 */
/* UIScrollBar__DeActivate() */

void __thiscall UIScrollBar__DeActivate(UIScrollBar *self)

{
  *(uint32_t *)(self + 0x38) = 0;
  (**(code **)(**(long **)(self + 0x58) + 0x48))();
                    /* WARNING: Could not recover jumptable at 0x005a5461. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(self + 0x50) + 0x48))();
  return;
}

/* ======================================================================
 * UIScrollBar__UIScrollBar__005a5470  (Ghidra `~UIScrollBar` @ 005a5470)
 * Signature: uint8_t __thiscall ~UIScrollBar(UIScrollBar * self)
 * Class: UIScrollBar
 * Calls: `operator_delete`
 * Called by: `UIScrollBar__UIScrollBar`
 */
/* UIScrollBar__UIScrollBar__005a5470() */

void __thiscall UIScrollBar__UIScrollBar__005a5470(UIScrollBar *self)

{
  *(uint8_t ***)self = &PTR__UIFormElement_005dd830;
  operator_delete(self);
  return;
}

/* ======================================================================
 * UIScrollBar__Render  (Ghidra `Render` @ 005a5500)
 * Signature: uint8_t __thiscall Render(UIScrollBar * self)
 * Class: UIScrollBar
 * Calls: `TGraphics__AddPixelStage`, `TGraphics__Draw`, `TGraphics__GetMatrix`, `TGraphics__PopMatrix`, `TGraphics__PushMatrix`, `TGraphics__ResetPixelStages`, `TGraphics__SetPerspectiveProjectionMode`, `TGraphics__SetPixelColorConstant`, `Vector2__operator_mul_assign__005be220`
 * Called by: (none)
 */
/* UIScrollBar__Render() */

void __thiscall UIScrollBar__Render(UIScrollBar *self)

{
  Matrix4x4 *pMVar1;
  Vector2 local_68 [16];
  uint32_t local_58;
  uint32_t local_54;
  float local_48 [4];
  float local_38;
  uint32_t local_34;
  uint32_t local_28;
  float local_24;
  uint32_t local_18;
  float local_14;
  
  if (*(int *)(self + 0x38) == 0) {
    return;
  }
  UIFormElement__ConvertFromPixelToScreen(local_68,(Vector2 *)(self + 0x20));
  Vector2__operator_mul_assign__005be220(local_68,DAT_005c0068 /* R:2.0f */);
  UIFormElement__ConvertFromPixelToScreen((Vector2 *)&local_58,(Vector2 *)(self + 0x28));
  pMVar1 = (Matrix4x4 *)TGraphics__GetMatrix(Graphics);
  Matrix4x4__Transformation2DRot(pMVar1,(Vector2 *)0x0,(float *)0x0,local_68);
  TGraphics__PushMatrix(Graphics,0);
  TGraphics__ResetPixelStages(Graphics);
  TGraphics__AddPixelStage(Graphics,1,0,0,0,0,1,0xffffffff);
  TGraphics__SetPerspectiveProjectionMode(Graphics,0);
  pMVar1 = (Matrix4x4 *)TGraphics__GetMatrix(Graphics,3);
  Matrix4x4__ConvertToOrthoMatrix
            (pMVar1,DAT_005be894 /* R:1.0f */,DAT_005c07a4 /* R:-1.0f */,DAT_005c07a4 /* R:-1.0f */,DAT_005be894 /* R:1.0f */,DAT_005c07a4 /* R:-1.0f */,DAT_005be894 /* R:1.0f */);
  TGraphics__SetPixelColorConstant(Graphics,0,*(uint64_t *)(self + 0x40));
  pMVar1 = (Matrix4x4 *)TGraphics__GetMatrix(Graphics,0);
  Matrix4x4__ConvertToScalingMatrix(pMVar1,(Vector2 *)&local_58);
  TGraphics__Draw(Graphics,CGR__pSingleQuadStream,(IndexBuffer *)0x0);
  TGraphics__SetPixelColorConstant(Graphics,0,*(long *)(self + 0x40) + 0x10);
  if (*(int *)(self + 0x48) == 1) {
    local_48[1] = 0.0;
    local_48[0] = *(float *)(self + 0x28) - (*(float *)(self + 0x2c) + *(float *)(self + 0x2c));
    local_48[0] = (*(float *)(self + 100) + *(float *)(self + 100)) * local_48[0] - local_48[0];
    UIFormElement__ConvertFromPixelToScreen((Vector2 *)local_48,(Vector2 *)local_48);
    local_34 = local_54;
    local_38 = *(float *)(self + 0x60) / (float)*(ushort *)(Window + 8);
    pMVar1 = (Matrix4x4 *)TGraphics__GetMatrix(Graphics,0);
    Matrix4x4__Transformation2DRot(pMVar1,(Vector2 *)&local_38,(float *)0x0,(Vector2 *)local_48);
  }
  else {
    local_28 = 0;
    local_24 = *(float *)(self + 0x2c) - (*(float *)(self + 0x28) + *(float *)(self + 0x28));
    local_24 = local_24 - (*(float *)(self + 100) + *(float *)(self + 100)) * local_24;
    UIFormElement__ConvertFromPixelToScreen((Vector2 *)&local_28,(Vector2 *)&local_28);
    local_18 = local_58;
    local_14 = *(float *)(self + 0x60) / (float)*(ushort *)(Window + 10);
    pMVar1 = (Matrix4x4 *)TGraphics__GetMatrix(Graphics,0);
    Matrix4x4__Transformation2DRot(pMVar1,(Vector2 *)&local_18,(float *)0x0,(Vector2 *)&local_28);
  }
  TGraphics__Draw(Graphics,CGR__pSingleQuadStream,(IndexBuffer *)0x0);
  TGraphics__PopMatrix(Graphics);
  return;
}

/* ======================================================================
 * UIScrollBar__Update  (Ghidra `Update` @ 005a5790)
 * Signature: uint8_t __thiscall Update(UIScrollBar * self)
 * Class: UIScrollBar
 * Calls: `Vector2__operator_assign`, `Vector2__operator_plus__005be140`
 * Called by: (none)
 */
/* UIScrollBar__Update() */

void __thiscall UIScrollBar__Update(UIScrollBar *self)

{
  float fVar1;
  Vector2 local_88 [16];
  uint32_t local_78;
  float local_74;
  Vector2 local_68 [16];
  Vector2 local_58 [16];
  float local_48;
  uint32_t local_44;
  Vector2 local_38 [16];
  float local_28;
  uint32_t local_24;
  
  fVar1 = DAT_005be6e4 /* R:0.5f */;
  if (*(int *)(self + 0x38) != 0) {
    if (*(int *)(self + 0x48) == 1) {
      local_48 = *(float *)(self + 0x28) * DAT_005be6e4 /* R:0.5f */;
      local_44 = 0;
      Vector2__operator_plus__005be140(local_58,(Vector2 *)(self + 0x20));
      Vector2__operator_assign((Vector2 *)(*(long *)(self + 0x50) + 0x20),local_58);
      local_24 = 0;
      local_28 = (float)(*(uint *)(self + 0x28) ^ DAT_005be6f0 /* R:u32=2147483648 */) * fVar1;
      Vector2__operator_plus__005be140(local_38,(Vector2 *)(self + 0x20));
      Vector2__operator_assign((Vector2 *)(*(long *)(self + 0x58) + 0x20),local_38);
      return;
    }
    Vector2__operator_plus__005be140(local_88,(Vector2 *)(self + 0x20));
    Vector2__operator_assign((Vector2 *)(*(long *)(self + 0x50) + 0x20),local_88);
    local_78 = 0;
    local_74 = (float)(*(uint *)(self + 0x2c) ^ DAT_005be6f0 /* R:u32=2147483648 */) * fVar1;
    Vector2__operator_plus__005be140(local_68,(Vector2 *)(self + 0x20));
    Vector2__operator_assign((Vector2 *)(*(long *)(self + 0x58) + 0x20),local_68);
  }
  return;
}

/* ======================================================================
 * UIScrollBar__UIScrollBar__005a5900  (Ghidra `UIScrollBar` @ 005a5900)
 * Signature: uint8_t __thiscall UIScrollBar(UIScrollBar * self, UIScrollBarCreation * arg1)
 * Class: UIScrollBar
 * Calls: `DecreaseScroll`, `IncreaseScroll`, `UIButton__UIButton__005a2560`, `UILabel__setText`, `operator_new`
 * Called by: `UIFrame__UIFrame__005a4e70`
 */
/* UIScrollBar__UIScrollBar__005a5900(UIScrollBarCreation const*) */

void __thiscall UIScrollBar__UIScrollBar__005a5900(UIScrollBar *self,UIScrollBarCreation *arg1)

{
  UIButton *pUVar1;
  uint8_t *local_38;
  uint64_t local_30;
  uint64_t local_28;
  
  *(uint32_t *)(self + 8) = 0;
  *(uint64_t *)(self + 0x10) = 0;
  *(uint64_t *)(self + 0x18) = 0;
  *(uint32_t *)(self + 0x20) = 0;
  *(uint32_t *)(self + 0x24) = 0;
  *(uint32_t *)(self + 0x28) = 0x3f800000;
  *(uint32_t *)(self + 0x2c) = 0x3f800000;
  *(uint64_t *)(self + 0x30) = 0;
  *(uint32_t *)(self + 0x38) = 0;
  *(uint8_t ***)self = &PTR__UIScrollBar_005ddc50;
  *(uint32_t *)(self + 0x60) = 0x41c80000;
  *(uint32_t *)(self + 100) = 0;
  local_38 = _DEFAULT_UILABEL_STYLE;
  local_30 = 0;
  *(uint64_t *)(self + 0x40) = *(uint64_t *)arg1;
  *(uint32_t *)(self + 0x48) = *(uint32_t *)(arg1 + 0x10);
  local_28 = *(uint64_t *)(arg1 + 8);
                    /* try { // try from 005a598d to 005a5991 has its CatchHandler @ 005a5a4f */
  pUVar1 = operator_new(0x70);
                    /* try { // try from 005a599d to 005a59a1 has its CatchHandler @ 005a5a73 */
  UIButton__UIButton__005a2560(pUVar1,(UIButtonCreation *)&local_38);
  *(UIButton **)(self + 0x50) = pUVar1;
                    /* try { // try from 005a59af to 005a59bd has its CatchHandler @ 005a5a4f */
  UILabel__setText(*(UILabel **)(pUVar1 + 0x50),L"X");
  pUVar1 = operator_new(0x70);
                    /* try { // try from 005a59c9 to 005a59cd has its CatchHandler @ 005a5a5f */
  UIButton__UIButton__005a2560(pUVar1,(UIButtonCreation *)&local_38);
  *(UIButton **)(self + 0x58) = pUVar1;
                    /* try { // try from 005a59db to 005a59df has its CatchHandler @ 005a5a4f */
  UILabel__setText(*(UILabel **)(pUVar1 + 0x50),L"X");
  if (*(int *)(self + 0x48) != 1) {
    *(code **)(*(long *)(self + 0x50) + 0x40) = DecreaseScroll;
    *(UIScrollBar **)(*(long *)(self + 0x50) + 0x48) = self + 100;
    *(code **)(*(long *)(self + 0x58) + 0x40) = IncreaseScroll;
    *(UIScrollBar **)(*(long *)(self + 0x58) + 0x48) = self + 100;
    return;
  }
  *(code **)(*(long *)(self + 0x50) + 0x40) = IncreaseScroll;
  *(UIScrollBar **)(*(long *)(self + 0x50) + 0x48) = self + 100;
  *(code **)(*(long *)(self + 0x58) + 0x40) = DecreaseScroll;
  *(UIScrollBar **)(*(long *)(self + 0x58) + 0x48) = self + 100;
  return;
}
