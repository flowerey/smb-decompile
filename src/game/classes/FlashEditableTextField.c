/* src/game/classes/FlashEditableTextField.c — 6 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "FlashEditableTextField.h"

/* ======================================================================
 * FlashEditableTextField__FlashEditableTextField  (Ghidra `~FlashEditableTextField` @ 00571420)
 * Signature: uint8_t __thiscall ~FlashEditableTextField(FlashEditableTextField * self)
 * Class: FlashEditableTextField
 * Calls: `FlashEditableTextField__FlashEditableTextField__00571b20`
 * Called by: (none)
 */
/* FlashEditableTextField__FlashEditableTextField__00571b20() */

void __thiscall FlashEditableTextField__FlashEditableTextField__00571b20(FlashEditableTextField *self)

{
  *(uint8_t ***)self = &PTR__FlashEditableTextField_005dbc50;
  if (*(long **)(self + 0x40) != (long *)0x0) {
                    /* try { // try from 00571437 to 00571439 has its CatchHandler @ 0057144b */
    (**(code **)(**(long **)(self + 0x40) + 8))();
  }
  *(uint64_t *)(self + 0x40) = 0;
  *(uint8_t ***)self = &PTR__FlashLibraryEntry_005dbc90;
  return;
}

/* ======================================================================
 * FlashEditableTextField__FlashEditableTextField__00571b20  (Ghidra `~FlashEditableTextField` @ 00571b20)
 * Signature: uint8_t __thiscall ~FlashEditableTextField(FlashEditableTextField * self)
 * Class: FlashEditableTextField
 * Calls: `operator_delete`
 * Called by: `FlashEditableTextField__FlashEditableTextField`
 */
/* FlashEditableTextField__FlashEditableTextField__00571b20() */

void __thiscall FlashEditableTextField__FlashEditableTextField__00571b20(FlashEditableTextField *self)

{
  *(uint8_t ***)self = &PTR__FlashEditableTextField_005dbc50;
  if (*(long **)(self + 0x40) != (long *)0x0) {
                    /* try { // try from 00571b37 to 00571b39 has its CatchHandler @ 00571b52 */
    (**(code **)(**(long **)(self + 0x40) + 8))();
  }
  *(uint64_t *)(self + 0x40) = 0;
  *(uint8_t ***)self = &PTR__FlashLibraryEntry_005dbc90;
  operator_delete(self);
  return;
}

/* ======================================================================
 * FlashEditableTextField__Render  (Ghidra `Render` @ 005760b0)
 * Signature: uint8_t __thiscall Render(FlashEditableTextField * self, float arg1, ColorTemplate * arg2, ColorTemplate * arg3, FlashLibraryInstance * arg4)
 * Class: FlashEditableTextField
 * Calls: `TGraphics__PopMatrix`, `TGraphics__PushMatrix`, `UITextField__CustomRender`, `Vector2__operator_assign`
 * Called by: (none)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FlashEditableTextField__Render(float, ColorTemplate<float> const&, ColorTemplate<float> const&,
   FlashLibraryInstance*) */

void __thiscall
FlashEditableTextField__Render
          (FlashEditableTextField *self,float arg1,ColorTemplate *arg2,ColorTemplate *arg3,
          FlashLibraryInstance *arg4)

{
  float fVar1;
  float fVar2;
  float local_58;
  float local_54;
  float local_48;
  float local_44;
  float local_38;
  float local_34;
  float local_28;
  float local_24;
  
  if (*(int *)(self + 0x48) != 0) {
    TGraphics__PushMatrix(Graphics,0);
    FlashTimeline__Render
              (arg1,(ColorTemplate *)(self + 0x18),arg2,(FlashLibraryInstance *)arg3);
    TGraphics__PopMatrix(Graphics);
    local_58 = 1e+08;
    local_54 = 1e+08;
    local_48 = -1e+08;
    local_44 = -1e+08;
    (**(code **)(*(long *)self + 0x18))(0,self,&local_58,&local_48);
    fVar2 = _DAT_005c0c9c /* R:240.0f */;
    fVar1 = DAT_005c0c90 /* R:426.5f */;
    local_34 = (local_44 - local_54) * _DAT_005c0c9c /* R:240.0f */;
    local_38 = (local_48 - local_58) * DAT_005c0c90 /* R:426.5f */;
    Vector2__operator_assign((Vector2 *)(*(long *)(self + 0x40) + 0x70),(Vector2 *)&local_38);
    local_24 = fVar2 * *(float *)(arg4 + 0x34);
    local_28 = fVar1 * *(float *)(arg4 + 0x30);
    Vector2__operator_assign((Vector2 *)(*(long *)(self + 0x40) + 0x20),(Vector2 *)&local_28);
    UITextField__CustomRender(*(UITextField **)(self + 0x40),0x355,0x1e0);
  }
  return;
}

/* ======================================================================
 * FlashEditableTextField__FlashEditableTextField__00576550  (Ghidra `FlashEditableTextField` @ 00576550)
 * Signature: uint8_t __thiscall FlashEditableTextField(FlashEditableTextField * self)
 * Class: FlashEditableTextField
 * Calls: `UITextField__UITextField__005a5de0`, `operator_new`
 * Called by: `FlashAnimationLibrary__FlashAnimationLibrary__00576680`
 */
/* FlashEditableTextField__FlashEditableTextField__00576550() */

void __thiscall FlashEditableTextField__FlashEditableTextField__00576550(FlashEditableTextField *self)

{
  UITextField *this_00;
  uint64_t local_38;
  uint64_t local_30;
  uint8_t *local_28;
  uint32_t local_20;
  uint32_t local_1c;
  
  *(uint8_t ***)self = &PTR__FlashEditableTextField_005dbc50;
  FlashEditableTextFieldStyle._0_8_ = ::cNullColor;
  *(uint32_t *)(self + 0x10) = 4;
  *(uint32_t *)(self + 0x18) = 0;
  *(uint32_t *)(self + 0x1c) = 1;
  *(uint32_t *)(self + 0x20) = 0;
  FlashEditableTextFieldStyle._8_8_ = DAT_00820448 /* R:2.8306228979361305e-42f */;
  *(uint32_t *)(self + 0x24) = 0;
  *(uint32_t *)(self + 0x28) = 0;
  *(uint32_t *)(self + 0x2c) = 0;
  *(uint64_t *)(self + 0x30) = 0;
  FlashEditableTextFieldStyle._16_8_ = ::cWhite;
  *(uint32_t *)(self + 0x48) = 1;
  local_38 = 0;
  local_30 = 0;
  local_20 = 0x43c80000;
  local_1c = 0x42480000;
  local_28 = FlashEditableTextFieldStyle;
  FlashEditableTextFieldStyle._24_8_ = DAT_00820458 /* R:2.2420775429197073e-44f */;
  FlashEditableTextFieldStyle._40_4_ = _DEFAULT_UI_FONT_SIZE;
  FlashEditableTextFieldStyle._32_8_ = _DEFAULT_UI_FONT;
                    /* try { // try from 00576622 to 00576626 has its CatchHandler @ 00576656 */
  this_00 = operator_new(0x78);
                    /* try { // try from 00576632 to 00576636 has its CatchHandler @ 00576665 */
  UITextField__UITextField__005a5de0(this_00,(UITextFieldCreation *)&local_38);
  *(UITextField **)(self + 0x40) = this_00;
                    /* try { // try from 00576642 to 00576644 has its CatchHandler @ 00576656 */
  (**(code **)(*(long *)this_00 + 0x40))(this_00);
  *(uint16_t *)(*(long *)(self + 0x40) + 0x52) = 1;
  return;
}

/* ======================================================================
 * FlashEditableTextField__GetText  (Ghidra `GetText` @ 00578710)
 * Signature: uint8_t __thiscall GetText(FlashEditableTextField * self)
 * Class: FlashEditableTextField
 * Calls: (none)
 * Called by: `SMBLevelPortalInterface__DoSearch`, `SMBLevelPortalInterface__GetList`, `SMBLevelPortalInterface__IsInSearchMode`
 */
/* FlashEditableTextField__GetText() */

long __thiscall FlashEditableTextField__GetText(FlashEditableTextField *self)

{
  return *(long *)(self + 0x40) + 0x40;
}

/* ======================================================================
 * FlashEditableTextField__GetUITextField  (Ghidra `GetUITextField` @ 00578720)
 * Signature: uint8_t __thiscall GetUITextField(FlashEditableTextField * self)
 * Class: FlashEditableTextField
 * Calls: (none)
 * Called by: `EditorForm_LayerPropsOk`, `EditorForm_LayerPropsOpen`, `EditorForm_LoadFormOk`, `EditorForm_NewFormOk`, `EditorForm_NewFormOpen`, `EditorForm_ObjectPropertiesOk`, `EditorForm_ObjectPropertiesOpen`, `EditorForm_SaveFormOk`, `EditorForm_UploadFormOk`, `EditorTextField__SetSelectedState` (+5 more)
 */
/* FlashEditableTextField__GetUITextField() */

uint64_t __thiscall FlashEditableTextField__GetUITextField(FlashEditableTextField *self)

{
  return *(uint64_t *)(self + 0x40);
}
