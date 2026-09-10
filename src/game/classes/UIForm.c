/* src/game/classes/UIForm.c — 12 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "UIForm.h"

/* ======================================================================
 * UIForm__UIForm  (Ghidra `~UIForm` @ 005a30e0)
 * Signature: uint8_t __thiscall ~UIForm(UIForm * self)
 * Class: UIForm
 * Calls: `RenderLayer__RemoveObject`, `UIForm__UIForm__005a3560`
 * Called by: (none)
 */
/* UIForm__UIForm__005a3560() */

void __thiscall UIForm__UIForm__005a3560(UIForm *self)

{
  long lVar1;
  uint uVar2;
  long *plVar3;

  uVar2 = *(uint *)(self + 0x78);
  *(uint8_t ***)self = &PTR__UIForm_005dda70;
  if ((uVar2 & 4) != 0) {
    RenderLayer__RemoveObject(__UILayer, (RenderLayerObject *)self);
    uVar2 = *(uint *)(self + 0x78);
  }
  if (((uVar2 & 1) != 0) && (plVar3 = *(long **)(self + 0x68), plVar3 != (long *)0x0)) {
    do {
      lVar1 = *plVar3;
      plVar3 = (long *)plVar3[2];
      /* try { // try from 005a312a to 005a3156 has its CatchHandler @ 005a315c */
      (**(code **)(lVar1 + 8))();
    } while (plVar3 != (long *)0x0);
    *(uint8_t ***)self = &PTR__RenderLayerObject_005be670;
    return;
  }
  *(uint8_t ***)self = &PTR__RenderLayerObject_005be670;
  return;
}

/* ======================================================================
 * UIForm__Render  (Ghidra `Render` @ 005a3170)
 * Signature: uint8_t __thiscall Render(UIForm * self)
 * Class: UIForm
 * Calls: `TGraphics__AddPixelStage`, `TGraphics__Draw`, `TGraphics__GetMatrix`, `TGraphics__PopMatrix`, `TGraphics__PushMatrix`, `TGraphics__ResetPixelStages`, `TGraphics__ResetTexCoordGen`, `TGraphics__SetPerspectiveProjectionMode`, `TGraphics__SetPixelColorConstant`, `TGraphics__SetRenderState` (+2 more)
 * Called by: (none)
 */
/* UIForm__Render() */

void __thiscall UIForm__Render(UIForm *self)

{
  long *plVar1;
  Matrix4x4 *pMVar2;
  Vector2 local_38[16];
  uint32_t local_28;
  uint32_t local_24;
  Vector2 local_18[16];

  if (*(int *)(self + 0x90) != 0) {
    UIFormElement__ConvertFromPixelToScreen(local_38, (Vector2 *)(self + 0x38));
    Vector2__operator_mul_assign__005be220(local_38, DAT_005c0068 /* R:2.0f */);
    local_28 = *(uint32_t *)(self + 0x40);
    local_24 = *(uint32_t *)(self + 0x44);
    pMVar2 = (Matrix4x4 *)TGraphics__GetMatrix(Graphics, 0);
    Matrix4x4__Transformation2DRot(pMVar2, (Vector2 *)&local_28, (float *)0x0, local_38);
    TGraphics__PushMatrix(Graphics, 0);
    if (((byte)self[0x78] & 2) != 0) {
      TGraphics__SetRenderState(Graphics, '\a', 0);
      TGraphics__ResetPixelStages(Graphics);
      TGraphics__ResetTexCoordGen(Graphics);
      TGraphics__SetRenderState(Graphics, '\x05', 4);
      TGraphics__SetRenderState(Graphics, '\x06', 5);
      TGraphics__AddPixelStage(Graphics, 1, 0, 0, 0, 0, 1, 0xffffffff);
      TGraphics__SetPixelColorConstant(Graphics, 0, *(uint64_t *)(self + 0x48));
      TGraphics__SetPerspectiveProjectionMode(Graphics, 0);
      pMVar2 = (Matrix4x4 *)TGraphics__GetMatrix(Graphics, 3);
      Matrix4x4__ConvertToOrthoMatrix(pMVar2, DAT_005be894 /* R:1.0f */, DAT_005c07a4 /* R:-1.0f */,
                                      DAT_005c07a4 /* R:-1.0f */, DAT_005be894 /* R:1.0f */,
                                      DAT_005c07a4 /* R:-1.0f */, DAT_005be894 /* R:1.0f */);
      Vector2__operator_plus__005be140(local_18, (Vector2 *)(self + 0x28));
      pMVar2 = (Matrix4x4 *)TGraphics__GetMatrix(Graphics, 0);
      Matrix4x4__Transformation2DRot(pMVar2, local_18, (float *)0x0, (Vector2 *)(self + 0x20));
      TGraphics__Draw(Graphics, CGR__pSingleQuadStream, (IndexBuffer *)0x0);
    }
    for (plVar1 = *(long **)(self + 0x68); plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
      (**(code **)(*plVar1 + 0x18))(plVar1);
    }
    TGraphics__PopMatrix(Graphics);
    return;
  }
  return;
}

/* ======================================================================
 * UIForm__UIForm__005a3560  (Ghidra `~UIForm` @ 005a3560)
 * Signature: uint8_t __thiscall ~UIForm(UIForm * self)
 * Class: UIForm
 * Calls: `RenderLayer__RemoveObject`, `operator_delete`
 * Called by: `UIForm__UIForm`
 */
/* UIForm__UIForm__005a3560() */

void __thiscall UIForm__UIForm__005a3560(UIForm *self)

{
  long *plVar1;
  long lVar2;
  uint uVar3;

  uVar3 = *(uint *)(self + 0x78);
  *(uint8_t ***)self = &PTR__UIForm_005dda70;
  if ((uVar3 & 4) != 0) {
    RenderLayer__RemoveObject(__UILayer, (RenderLayerObject *)self);
    uVar3 = *(uint *)(self + 0x78);
  }
  if ((uVar3 & 1) != 0) {
    plVar1 = *(long **)(self + 0x68);
    while (plVar1 != (long *)0x0) {
      lVar2 = *plVar1;
      plVar1 = (long *)plVar1[2];
      /* try { // try from 005a35aa to 005a35c6 has its CatchHandler @ 005a35cc */
      (**(code **)(lVar2 + 8))();
    }
  }
  *(uint8_t ***)self = &PTR__RenderLayerObject_005be670;
  operator_delete(self);
  return;
}

/* ======================================================================
 * UIForm__UIForm__005a3620  (Ghidra `UIForm` @ 005a3620)
 * Signature: uint8_t __thiscall UIForm(UIForm * self)
 * Class: UIForm
 * Calls: `UIForm__UIForm__005a3ce0`
 * Called by: (none)
 */
/* UIForm__UIForm__005a3ce0() */

void __thiscall UIForm__UIForm__005a3ce0(UIForm *self)

{
  *(uint64_t *)(self + 8) = 0;
  *(uint64_t *)(self + 0x10) = 0;
  *(uint64_t *)(self + 0x18) = 0;
  *(uint8_t ***)self = &PTR__UIForm_005dda70;
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
  *(uint32_t *)(self + 0x78) = 0;
  *(uint32_t *)(self + 0x8c) = 0;
  *(uint32_t *)(self + 0x90) = 0;
  *(uint64_t *)(self + 0x98) = 0;
  return;
}

/* ======================================================================
 * UIForm__Close  (Ghidra `Close` @ 005a36c0)
 * Signature: uint8_t __thiscall Close(UIForm * self)
 * Class: UIForm
 * Calls: (none)
 * Called by: (none)
 */
/* UIForm__Close() */

void __thiscall UIForm__Close(UIForm *self)

{
  long *plVar1;

  for (plVar1 = *(long **)(self + 0x68); plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x48))(plVar1);
  }
  if ((*(int *)(self + 0x90) == 1) && (*(code **)(self + 0x60) != (code *)0x0)) {
    (**(code **)(self + 0x60))(self);
  }
  *(uint32_t *)(self + 0x90) = 0;
  *(uint64_t *)(self + 0x98) = 0;
  *(uint32_t *)(self + 0x8c) = 1;
  return;
}

/* ======================================================================
 * UIForm__Update  (Ghidra `Update` @ 005a3840)
 * Signature: uint8_t __thiscall Update(UIForm * self)
 * Class: UIForm
 * Calls: `ElementUpdate`, `Vector2__operator_mul_assign__005be220`
 * Called by: `UIFrame__Update`, `UpdateUI`
 */
/* UIForm__Update() */

void __thiscall UIForm__Update(UIForm *self)

{
  ushort uVar1;
  ushort uVar2;
  uint32_t uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;

  if (*(int *)(self + 0x90) != 0) {
    if ((Keyboard != 0) && (*(int *)(self + 0xa0) != 0)) {
      if (*(int *)(Keyboard + 0x520) == 1) {
        if (*(long **)(self + 0x98) != (long *)0x0) {
          (**(code **)(**(long **)(self + 0x98) + 0x38))();
        }
        if (*(code **)(self + 0x50) != (code *)0x0) {
          (**(code **)(self + 0x50))(self);
        }
      } else if (*(int *)(Keyboard + 0x1b4) == 1) {
        if (*(long **)(self + 0x98) != (long *)0x0) {
          (**(code **)(**(long **)(self + 0x98) + 0x38))();
        }
        for (plVar6 = *(long **)(self + 0x68); plVar6 != (long *)0x0; plVar6 = (long *)plVar6[2]) {
          (**(code **)(*plVar6 + 0x48))(plVar6);
        }
        if ((*(int *)(self + 0x90) == 1) && (*(code **)(self + 0x60) != (code *)0x0)) {
          (**(code **)(self + 0x60))(self);
        }
        *(uint32_t *)(self + 0x90) = 0;
        *(uint64_t *)(self + 0x98) = 0;
      }
    }
    lVar4 = Window;
    lVar5 = *(long *)(self + 0x68);
    fVar7 = DAT_005be6e4 /* R:0.5f */ * *(float *)(Mouse + 0xc);
    uVar1 = *(ushort *)(Window + 8);
    uVar3 = *(uint32_t *)(Mouse + 0x14);
    uVar2 = *(ushort *)(Window + 10);
    fVar8 = DAT_005be6e4 /* R:0.5f */ *
            (float)(*(uint *)(Mouse + 0x10) ^ DAT_005be6f0 /* R:u32=2147483648 */);
    if (lVar5 == 0) {
      fVar8 = 0.0;
      *(int *)(self + 0xa0) = *(int *)(self + 0xa0) + 1;
      fVar7 = fVar8;
    } else {
      do {
        ElementUpdate((float)uVar1 * fVar7, (float)uVar2 * fVar8, lVar5, self + 0x98, uVar3);
        lVar5 = *(long *)(lVar5 + 0x10);
      } while (lVar5 != 0);
      plVar6 = *(long **)(self + 0x68);
      fVar8 = 0.0;
      *(int *)(self + 0xa0) = *(int *)(self + 0xa0) + 1;
      lVar4 = Window;
      fVar7 = 0.0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x58))(plVar6, self + 0x7c);
        fVar7 = *(float *)(self + 0x84) + *(float *)(self + 0x7c) +
                (float)*(ushort *)(Window + 8) * DAT_005be6e4 /* R:0.5f */;
        fVar8 = (*(float *)(self + 0x88) - *(float *)(self + 0x80)) +
                (float)*(ushort *)(Window + 10) * DAT_005be6e4 /* R:0.5f */;
        lVar4 = Window;
        for (plVar6 = (long *)plVar6[2]; plVar6 != (long *)0x0; plVar6 = (long *)plVar6[2]) {
          while ((int)plVar6[7] == 1) {
            (**(code **)(*plVar6 + 0x58))(plVar6, &local_38);
            lVar4 = Window;
            fVar9 = (float)*(ushort *)(Window + 8) * DAT_005be6e4 /* R:0.5f */;
            fVar11 = (float)*(ushort *)(Window + 10) * DAT_005be6e4 /* R:0.5f */;
            fVar12 = fVar9 + local_38;
            fVar10 = fVar11 - local_34;
            if (fVar12 < fVar9 + *(float *)(self + 0x7c)) {
              *(float *)(self + 0x7c) = local_38;
            }
            if (fVar10 < fVar11 - *(float *)(self + 0x80)) {
              *(float *)(self + 0x80) = local_34;
            }
            fVar12 = fVar12 + local_30;
            plVar6 = (long *)plVar6[2];
            fVar10 = fVar10 + local_2c;
            if (fVar7 <= fVar12) {
              fVar7 = fVar12;
            }
            if (fVar8 <= fVar10) {
              fVar8 = fVar10;
            }
            if (plVar6 == (long *)0x0)
              goto LAB_005a3a70;
          }
        }
      }
    }
  LAB_005a3a70:
    fVar9 = DAT_005be6e4 /* R:0.5f */;
    fVar8 = fVar8 -
            ((float)*(ushort *)(lVar4 + 10) * DAT_005be6e4 /* R:0.5f */ - *(float *)(self + 0x80));
    fVar7 = fVar7 -
            ((float)*(ushort *)(lVar4 + 8) * DAT_005be6e4 /* R:0.5f */ + *(float *)(self + 0x7c));
    *(float *)(self + 0x88) = fVar8;
    *(float *)(self + 0x84) = fVar7;
    fVar11 = DAT_005be6e4 /* R:0.5f */ * fVar8;
    *(float *)(self + 0x20) =
        (fVar9 * fVar7 + *(float *)(self + 0x7c)) / (float)*(ushort *)(lVar4 + 8);
    *(float *)(self + 0x24) = (*(float *)(self + 0x80) - fVar11) / (float)*(ushort *)(lVar4 + 10);
    *(float *)(self + 0x28) = fVar7 / (float)*(ushort *)(lVar4 + 8);
    *(float *)(self + 0x2c) = fVar8 / (float)*(ushort *)(lVar4 + 10);
    Vector2__operator_mul_assign__005be220((Vector2 *)(self + 0x20), DAT_005c0068 /* R:2.0f */);
  }
  return;
}

/* ======================================================================
 * UIForm__AddFormElement  (Ghidra `AddFormElement` @ 005a3c00)
 * Signature: uint8_t __thiscall AddFormElement(UIForm * self, UIFormElement * arg1)
 * Class: UIForm
 * Calls: (none)
 * Called by: `CreateGraphicsSettingsForm`, `SMBEditorForms__Initialize`, `ShowUIMessageBox`, `UIDropDown__AddDropdownElement`, `UIDropDown__setParent`, `UIFrame__setParent`, `UIMessageBox__UIMessageBox__005a4280`, `UIScrollBar__setParent`
 */
/* UIForm__AddFormElement(UIFormElement*) */

void __thiscall UIForm__AddFormElement(UIForm *self, UIFormElement *arg1)

{
  long lVar1;
  UIFormElement *pUVar2;

  lVar1 = *(long *)(arg1 + 0x30);
  if (lVar1 != 0) {
    if (arg1 == *(UIFormElement **)(lVar1 + 0x68)) {
      pUVar2 = *(UIFormElement **)(lVar1 + 0x70);
      *(uint64_t *)(lVar1 + 0x68) = *(uint64_t *)(arg1 + 0x10);
    } else {
      pUVar2 = *(UIFormElement **)(lVar1 + 0x70);
    }
    if (arg1 == pUVar2) {
      *(uint64_t *)(lVar1 + 0x70) = *(uint64_t *)(arg1 + 0x18);
    }
    if (*(long *)(arg1 + 0x18) != 0) {
      *(uint64_t *)(*(long *)(arg1 + 0x18) + 0x10) = *(uint64_t *)(arg1 + 0x10);
    }
    if (*(long *)(arg1 + 0x10) != 0) {
      *(uint64_t *)(*(long *)(arg1 + 0x10) + 0x18) = *(uint64_t *)(arg1 + 0x18);
    }
    *(uint64_t *)(arg1 + 0x18) = 0;
    *(uint64_t *)(arg1 + 0x10) = 0;
    (**(code **)(*(long *)arg1 + 0x50))(arg1, 0);
  }
  if (*(long *)(self + 0x68) == 0) {
    *(UIFormElement **)(self + 0x68) = arg1;
    *(uint64_t *)(arg1 + 0x18) = 0;
  } else if (*(long *)(self + 0x70) != 0) {
    *(UIFormElement **)(*(long *)(self + 0x70) + 0x10) = arg1;
    *(uint64_t *)(arg1 + 0x18) = *(uint64_t *)(self + 0x70);
  }
  *(UIFormElement **)(self + 0x70) = arg1;
  /* WARNING: Could not recover jumptable at 0x005a3c99. Too many branches */
  /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)arg1 + 0x50))(arg1, self);
  return;
}

/* ======================================================================
 * UIForm__UIForm__005a3ce0  (Ghidra `UIForm` @ 005a3ce0)
 * Signature: uint8_t __thiscall UIForm(UIForm * self, UIFormCreation * arg1)
 * Class: UIForm
 * Calls: `RenderLayer__AddObject`
 * Called by: `CreateGraphicsSettingsForm`, `SMBEditorForms__Initialize`, `UIDropDown__UIDropDown__005a2c90`, `UIForm__UIForm__005a3620`
 */
/* UIForm__UIForm__005a3ce0(UIFormCreation const*) */

void __thiscall UIForm__UIForm__005a3ce0(UIForm *self, UIFormCreation *arg1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long lVar4;

  *(uint64_t *)(self + 0x50) = 0;
  *(uint32_t *)(self + 0x78) = 0;
  *(uint64_t *)(self + 8) = 0;
  *(uint64_t *)(self + 0x10) = 0;
  *(uint64_t *)(self + 0x18) = 0;
  *(uint8_t ***)self = &PTR__UIForm_005dda70;
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
  *(uint64_t *)(self + 0x58) = 0;
  *(uint64_t *)(self + 0x60) = 0;
  *(uint64_t *)(self + 0x68) = 0;
  *(uint32_t *)(self + 0x8c) = 0;
  *(uint32_t *)(self + 0x90) = 0;
  *(uint64_t *)(self + 0x98) = 0;
  uVar2 = *(uint *)(arg1 + 0xc);
  *(uint *)(self + 0x78) = uVar2;
  *(uint64_t *)(self + 0x50) = *(uint64_t *)(arg1 + 0x10);
  *(uint64_t *)(self + 0x48) = *(uint64_t *)(arg1 + 0x18);
  lVar1 = *(long *)arg1;
  if ((lVar1 != 0) && (0 < *(int *)(arg1 + 8))) {
    lVar4 = 0;
    iVar3 = 0;
    while (true) {
      /* try { // try from 005a3ddb to 005a3e16 has its CatchHandler @ 005a3e22 */
      AddFormElement(self, *(UIFormElement **)(lVar1 + lVar4));
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 8;
      if (*(int *)(arg1 + 8) <= iVar3)
        break;
      lVar1 = *(long *)arg1;
    }
    uVar2 = *(uint *)(self + 0x78);
  }
  if ((uVar2 & 4) == 0) {
    return;
  }
  RenderLayer__AddObject(__UILayer, (RenderLayerObject *)self);
  return;
}

/* ======================================================================
 * UIForm__RemoveFormElement  (Ghidra `RemoveFormElement` @ 005a3e40)
 * Signature: uint8_t __thiscall RemoveFormElement(UIForm * self, UIFormElement * arg1)
 * Class: UIForm
 * Calls: (none)
 * Called by: `UIFormElement__setParent`
 */
/* UIForm__RemoveFormElement(UIFormElement*) */

void __thiscall UIForm__RemoveFormElement(UIForm *self, UIFormElement *arg1)

{
  UIFormElement *pUVar1;

  if (arg1 == *(UIFormElement **)(self + 0x68)) {
    pUVar1 = *(UIFormElement **)(self + 0x70);
    *(uint64_t *)(self + 0x68) = *(uint64_t *)(arg1 + 0x10);
  } else {
    pUVar1 = *(UIFormElement **)(self + 0x70);
  }
  if (arg1 == pUVar1) {
    *(uint64_t *)(self + 0x70) = *(uint64_t *)(arg1 + 0x18);
  }
  if (*(long *)(arg1 + 0x18) != 0) {
    *(uint64_t *)(*(long *)(arg1 + 0x18) + 0x10) = *(uint64_t *)(arg1 + 0x10);
  }
  if (*(long *)(arg1 + 0x10) != 0) {
    *(uint64_t *)(*(long *)(arg1 + 0x10) + 0x18) = *(uint64_t *)(arg1 + 0x18);
  }
  *(uint64_t *)(arg1 + 0x18) = 0;
  *(uint64_t *)(arg1 + 0x10) = 0;
  /* WARNING: Could not recover jumptable at 0x005a3e8d. Too many branches */
  /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)arg1 + 0x50))(arg1, 0);
  return;
}

/* ======================================================================
 * UIForm__CalculateFormArea  (Ghidra `CalculateFormArea` @ 005a3eb0)
 * Signature: uint8_t __thiscall CalculateFormArea(UIForm * self, UIRect * arg1)
 * Class: UIForm
 * Calls: `Vector2__operator_mul_assign__005be220`
 * Called by: `UIFrame__Update`
 */
/* UIForm__CalculateFormArea(UIRect*) */

void __thiscall UIForm__CalculateFormArea(UIForm *self, UIRect *arg1)

{
  long lVar1;
  long *plVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;

  if (arg1 != (UIRect *)0x0) {
    *(uint64_t *)arg1 = *(uint64_t *)(self + 0x7c);
    *(uint64_t *)(arg1 + 8) = *(uint64_t *)(self + 0x84);
  }
  plVar2 = *(long **)(self + 0x68);
  if (plVar2 == (long *)0x0) {
    fVar4 = 0.0;
    fVar6 = *(float *)(self + 0x80);
    fVar8 = *(float *)(self + 0x7c);
    fVar7 = (float)*(ushort *)(Window + 8) * DAT_005be6e4 /* R:0.5f */;
    fVar5 = (float)*(ushort *)(Window + 10) * DAT_005be6e4 /* R:0.5f */;
    lVar1 = Window;
    fVar3 = DAT_005be6e4 /* R:0.5f */;
    fVar9 = fVar4;
  } else {
    (**(code **)(*plVar2 + 0x58))(plVar2, self + 0x7c);
    fVar3 = DAT_005be6e4 /* R:0.5f */;
    fVar6 = *(float *)(self + 0x80);
    plVar2 = (long *)plVar2[2];
    fVar8 = *(float *)(self + 0x7c);
    fVar7 = (float)*(ushort *)(Window + 8) * DAT_005be6e4 /* R:0.5f */;
    fVar5 = (float)*(ushort *)(Window + 10) * DAT_005be6e4 /* R:0.5f */;
    fVar9 = *(float *)(self + 0x84) + fVar8 + fVar7;
    fVar4 = (*(float *)(self + 0x88) - fVar6) + fVar5;
    lVar1 = Window;
    if (plVar2 != (long *)0x0) {
      do {
        while ((int)plVar2[7] != 1) {
          plVar2 = (long *)plVar2[2];
          if (plVar2 == (long *)0x0)
            goto LAB_005a4018;
        }
        (**(code **)(*plVar2 + 0x58))(plVar2, &local_28);
        lVar1 = Window;
        fVar6 = (float)*(ushort *)(Window + 8) * fVar3;
        fVar8 = (float)*(ushort *)(Window + 10) * fVar3;
        fVar7 = fVar6 + local_28;
        fVar5 = fVar8 - local_24;
        if (fVar7 < fVar6 + *(float *)(self + 0x7c)) {
          *(float *)(self + 0x7c) = local_28;
        }
        if (fVar5 < fVar8 - *(float *)(self + 0x80)) {
          *(float *)(self + 0x80) = local_24;
        }
        fVar7 = fVar7 + local_20;
        plVar2 = (long *)plVar2[2];
        fVar5 = fVar5 + local_1c;
        if (fVar9 <= fVar7) {
          fVar9 = fVar7;
        }
        if (fVar4 <= fVar5) {
          fVar4 = fVar5;
        }
      } while (plVar2 != (long *)0x0);
    LAB_005a4018:
      fVar6 = *(float *)(self + 0x80);
      fVar8 = *(float *)(self + 0x7c);
      fVar7 = (float)*(ushort *)(lVar1 + 8) * fVar3;
      fVar5 = (float)*(ushort *)(lVar1 + 10) * fVar3;
    }
  }
  fVar9 = fVar9 - (fVar7 + fVar8);
  fVar4 = fVar4 - (fVar5 - fVar6);
  *(float *)(self + 0x84) = fVar9;
  *(float *)(self + 0x88) = fVar4;
  *(float *)(self + 0x20) = (fVar9 * fVar3 + fVar8) / (float)*(ushort *)(lVar1 + 8);
  *(float *)(self + 0x24) = (fVar6 - fVar3 * fVar4) / (float)*(ushort *)(lVar1 + 10);
  *(float *)(self + 0x28) = fVar9 / (float)*(ushort *)(lVar1 + 8);
  fVar6 = DAT_005c0068 /* R:2.0f */;
  *(float *)(self + 0x2c) = fVar4 / (float)*(ushort *)(lVar1 + 10);
  Vector2__operator_mul_assign__005be220((Vector2 *)(self + 0x20), fVar6);
  return;
}

/* ======================================================================
 * UIForm__Activate  (Ghidra `Activate` @ 005a4150)
 * Signature: uint8_t __thiscall Activate(UIForm * self)
 * Class: UIForm
 * Calls: (none)
 * Called by: `GraphicsSettings__ActivateGraphicsForm`, `LoadLevelMasterPress`, `NewLevelMasterPress`, `QuickSave`, `SMBEditor__Activate`, `SMBEditor__QuickSaveLevel`, `SaveLevelMasterPress`, `ShowEffectProps`, `ShowLevelProperties`, `ShowPlayerAnimProps` (+2 more)
 */
/* UIForm__Activate() */

void __thiscall UIForm__Activate(UIForm *self)

{
  long *plVar1;
  UIForm *pUVar2;
  UIForm *pUVar3;

  pUVar2 = _CURRENT_EXCLUSIVE_FORM;
  pUVar3 = _CURRENT_EXCLUSIVE_FORM;
  if ((((byte)self[0x78] & 8) != 0) && (pUVar3 = self, _CURRENT_EXCLUSIVE_FORM != (UIForm *)0x0)) {
    for (plVar1 = *(long **)(_CURRENT_EXCLUSIVE_FORM + 0x68); plVar1 != (long *)0x0;
         plVar1 = (long *)plVar1[2]) {
      (**(code **)(*plVar1 + 0x48))(plVar1);
    }
    if ((*(int *)(pUVar2 + 0x90) == 1) && (*(code **)(pUVar2 + 0x60) != (code *)0x0)) {
      (**(code **)(pUVar2 + 0x60))(pUVar2);
    }
    *(uint32_t *)(pUVar2 + 0x90) = 0;
    *(uint64_t *)(pUVar2 + 0x98) = 0;
    pUVar3 = self;
  }
  _CURRENT_EXCLUSIVE_FORM = pUVar3;
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
  return;
}

/* ======================================================================
 * UIForm__DeActivate  (Ghidra `DeActivate` @ 005a4220)
 * Signature: uint8_t __thiscall DeActivate(UIForm * self)
 * Class: UIForm
 * Calls: (none)
 * Called by: `DeactivateForm`, `GraphicsSettings__DeActivateGraphicsForm`, `SMBEditor__DeActivate`, `SMB_LEVEL_PROPS_Submit`, `SMB_LOAD_LEVEL_Submit`, `SMB_NEW_LEVEL_Submit`, `SMB_SAVE_LEVEL_Submit`, `ShowEffectProps`, `ShowPlayerAnimProps`, `ShowPlayerProps` (+1 more)
 */
/* UIForm__DeActivate() */

void __thiscall UIForm__DeActivate(UIForm *self)

{
  long *plVar1;

  for (plVar1 = *(long **)(self + 0x68); plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x48))(plVar1);
  }
  if ((*(int *)(self + 0x90) == 1) && (*(code **)(self + 0x60) != (code *)0x0)) {
    (**(code **)(self + 0x60))(self);
  }
  *(uint32_t *)(self + 0x90) = 0;
  *(uint64_t *)(self + 0x98) = 0;
  return;
}
