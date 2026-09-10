/* src/game/classes/UILabel.c — 5 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "UILabel.h"

/* ======================================================================
 * UILabel__UILabel  (Ghidra `~UILabel` @ 005a4fc0)
 * Signature: uint8_t __thiscall ~UILabel(UILabel * self)
 * Class: UILabel
 * Calls: `UILabel__UILabel__005a5120`
 * Called by: (none)
 */
/* UILabel__UILabel__005a5120() */

void __thiscall UILabel__UILabel__005a5120(UILabel *self)

{
  *(uint8_t ***)self = &PTR__UILabel_005ddbb0;
  if (*(long **)(self + 0x40) != (long *)0x0) {
                    /* try { // try from 005a4fd7 to 005a4fd9 has its CatchHandler @ 005a4fe3 */
    (**(code **)(**(long **)(self + 0x40) + 8))();
  }
  *(uint8_t ***)self = &PTR__UIFormElement_005dd830;
  return;
}

/* ======================================================================
 * UILabel__Update  (Ghidra `Update` @ 005a5000)
 * Signature: uint8_t __stdcall Update(void)
 * Class: UILabel
 * Calls: (none)
 * Called by: (none)
 */
/* UILabel__Update() */

void UILabel__Update(void)

{
  return;
}

/* ======================================================================
 * UILabel__UILabel__005a5120  (Ghidra `~UILabel` @ 005a5120)
 * Signature: uint8_t __thiscall ~UILabel(UILabel * self)
 * Class: UILabel
 * Calls: `operator_delete`
 * Called by: `UILabel__UILabel`
 */
/* UILabel__UILabel__005a5120() */

void __thiscall UILabel__UILabel__005a5120(UILabel *self)

{
  *(uint8_t ***)self = &PTR__UILabel_005ddbb0;
  if (*(long **)(self + 0x40) != (long *)0x0) {
                    /* try { // try from 005a5137 to 005a5139 has its CatchHandler @ 005a514a */
    (**(code **)(**(long **)(self + 0x40) + 8))();
  }
  *(uint8_t ***)self = &PTR__UIFormElement_005dd830;
  operator_delete(self);
  return;
}

/* ======================================================================
 * UILabel__Render  (Ghidra `Render` @ 005a5160)
 * Signature: uint8_t __thiscall Render(UILabel * self)
 * Class: UILabel
 * Calls: `FontEmitter__SetFontSize`, `TGraphics__GetMatrix`, `TGraphics__PopMatrix`, `TGraphics__PushMatrix`, `TGraphics__SetPerspectiveProjectionMode`
 * Called by: (none)
 */
/* UILabel__Render() */

void __thiscall UILabel__Render(UILabel *self)

{
  uint64_t *puVar1;
  long lVar2;
  Matrix4x4 *pMVar3;
  float local_18;
  float local_14;
  
  if (*(int *)(self + 0x38) != 0) {
    TGraphics__SetPerspectiveProjectionMode(Graphics,0);
    pMVar3 = (Matrix4x4 *)TGraphics__GetMatrix(Graphics,3);
    Matrix4x4__ConvertToOrthoMatrix
              (pMVar3,DAT_005be894 /* R:1.0f */,DAT_005c07a4 /* R:-1.0f */,DAT_005c07a4 /* R:-1.0f */,DAT_005be894 /* R:1.0f */,DAT_005c07a4 /* R:-1.0f */,DAT_005be894 /* R:1.0f */)
    ;
    local_18 = *(float *)(self + 0x20) / (float)*(ushort *)(Window + 8);
    local_18 = local_18 + local_18;
    local_14 = *(float *)(self + 0x24) / (float)*(ushort *)(Window + 10);
    local_14 = local_14 + local_14;
    pMVar3 = (Matrix4x4 *)TGraphics__GetMatrix(Graphics,0);
    Matrix4x4__Transformation2DRot
              (pMVar3,(Vector2 *)(self + 0x28),(float *)0x0,(Vector2 *)&local_18);
    TGraphics__PushMatrix(Graphics,0);
    puVar1 = *(uint64_t **)(self + 0x48);
    lVar2 = *(long *)(self + 0x40);
    *(uint64_t *)(lVar2 + 0x3c) = *puVar1;
    *(uint64_t *)(lVar2 + 0x44) = puVar1[1];
    FontEmitter__SetFontSize
              (*(FontEmitter **)(self + 0x40),*(float *)(*(long *)(self + 0x48) + 0x18));
    (**(code **)(**(long **)(self + 0x40) + 0x10))();
    TGraphics__PopMatrix(Graphics);
  }
  return;
}

/* ======================================================================
 * UILabel__UILabel__005a5270  (Ghidra `UILabel` @ 005a5270)
 * Signature: uint8_t __thiscall UILabel(UILabel * self, UILabelCreation * arg1)
 * Class: UILabel
 * Calls: `FontEmitter__FontEmitter__005861d0`, `FontEmitter__SetFontSize`, `operator_new`
 * Called by: `CreateGraphicsSettingsForm`, `SMBEditorForms__Initialize`, `ShowUIMessageBox`, `UIButton__UIButton__005a2560`, `UIDropDown__UIDropDown__005a2c90`, `UIMessageBox__UIMessageBox__005a4280`
 */
/* UILabel__UILabel__005a5270(UILabelCreation const*) */

void __thiscall UILabel__UILabel__005a5270(UILabel *self,UILabelCreation *arg1)

{
  long lVar1;
  FontEmitter *this_00;
  uint64_t local_28;
  long local_20;
  
  *(uint8_t ***)self = &PTR__UILabel_005ddbb0;
  *(uint32_t *)(self + 8) = 0;
  *(uint64_t *)(self + 0x10) = 0;
  *(uint64_t *)(self + 0x18) = 0;
  *(uint32_t *)(self + 0x20) = 0;
  *(uint32_t *)(self + 0x24) = 0;
  *(uint32_t *)(self + 0x28) = 0x3f800000;
  *(uint32_t *)(self + 0x2c) = 0x3f800000;
  *(uint64_t *)(self + 0x30) = 0;
  *(uint32_t *)(self + 0x38) = 0;
  lVar1 = *(long *)arg1;
  local_28 = 0;
  *(long *)(self + 0x48) = lVar1;
  local_20 = *(long *)(lVar1 + 0x10);
  if (local_20 == 0) {
    local_20 = _DEFAULT_UI_FONT;
  }
                    /* try { // try from 005a52eb to 005a52ef has its CatchHandler @ 005a5327 */
  this_00 = operator_new(0xa0);
                    /* try { // try from 005a52fb to 005a52ff has its CatchHandler @ 005a5336 */
  FontEmitter__FontEmitter__005861d0(this_00,(FontEmitterCreation *)&local_28);
  *(FontEmitter **)(self + 0x40) = this_00;
                    /* try { // try from 005a5310 to 005a5314 has its CatchHandler @ 005a5327 */
  FontEmitter__SetFontSize(this_00,*(float *)(*(long *)(self + 0x48) + 0x18));
  *(uint32_t *)(*(long *)(self + 0x40) + 0x5c) = 1;
  return;
}
