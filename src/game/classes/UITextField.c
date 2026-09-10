/* src/game/classes/UITextField.c — 10 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "UITextField.h"

/* ======================================================================
 * UITextField__ClickOff  (Ghidra `ClickOff` @ 005a5af0)
 * Signature: uint8_t __thiscall ClickOff(UITextField * self)
 * Class: UITextField
 * Calls: `RestoreKeyboardCallbacks`, `TKeyboard__UnLock`
 * Called by: (none)
 */
/* UITextField__ClickOff() */

void __thiscall UITextField__ClickOff(UITextField *self)

{
  if (self[0x50] != (UITextField)0x1) {
    self[0x50] = (UITextField)0x0;
    return;
  }
  RestoreKeyboardCallbacks();
  TKeyboard__UnLock(Keyboard);
  self[0x50] = (UITextField)0x0;
  return;
}

/* ======================================================================
 * UITextField__ClickOn  (Ghidra `ClickOn` @ 005a5b20)
 * Signature: uint8_t __thiscall ClickOn(UITextField * self)
 * Class: UITextField
 * Calls: `BackupKeyboardCallbacks`, `TKeyboard__Lock`
 * Called by: (none)
 */
/* UITextField__ClickOn() */

void __thiscall UITextField__ClickOn(UITextField *self)

{
  if (self[0x50] == (UITextField)0x0) {
    BackupKeyboardCallbacks();
    TKeyboard__Lock(Keyboard);
  }
  self[0x50] = (UITextField)0x1;
  self[0x51] = (UITextField)0x1;
  return;
}

/* ======================================================================
 * UITextField__UITextField  (Ghidra `~UITextField` @ 005a5b50)
 * Signature: uint8_t __thiscall ~UITextField(UITextField * self)
 * Class: UITextField
 * Calls: `UITextField__UITextField__005a5be0`
 * Called by: (none)
 */
/* WARNING: Removing unreachable block (ram,0x005a5bd0) */
/* UITextField__UITextField__005a5be0() */

void __thiscall UITextField__UITextField__005a5be0(UITextField *self)

{
  allocator *paVar1;
  int *piVar2;
  int iVar3;

  *(uint8_t ***)self = &PTR__UITextField_005ddcf0;
  if (*(long **)(self + 0x48) != (long *)0x0) {
    /* try { // try from 005a5b6b to 005a5b6d has its CatchHandler @ 005a5bae */
    (**(code **)(**(long **)(self + 0x48) + 8))();
  }
  paVar1 = (allocator *)(*(long *)(self + 0x40) + -0x18);
  if (paVar1 != (allocator *)std__wstring_Rep_S_empty_rep_storage) {
    LOCK();
    piVar2 = (int *)(*(long *)(self + 0x40) + -8);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 < 1) {
      std__wstring_Rep_M_destroy(paVar1);
    }
  }
  *(uint8_t ***)self = &PTR__UIFormElement_005dd830;
  return;
}

/* ======================================================================
 * UITextField__UITextField__005a5be0  (Ghidra `~UITextField` @ 005a5be0)
 * Signature: uint8_t __thiscall ~UITextField(UITextField * self)
 * Class: UITextField
 * Calls: `operator_delete`
 * Called by: `UITextField__UITextField`
 */
/* UITextField__UITextField__005a5be0() */

void __thiscall UITextField__UITextField__005a5be0(UITextField *self)

{
  UITextField__dtor(self);
  operator_delete(self);
  return;
}

/* ======================================================================
 * UITextField__Update  (Ghidra `Update` @ 005a5c00)
 * Signature: uint8_t __thiscall Update(UITextField * self)
 * Class: UITextField
 * Calls: `FontEmitter__SetStaticText`, `std__wstring_wstring`
 * Called by: (none)
 */
/* WARNING: Removing unreachable block (ram,0x005a5d58) */
/* UITextField__Update() */

void __thiscall UITextField__Update(UITextField *self)

{
  ulong uVar1;
  int *piVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  wchar_t *pwVar6;
  long local_28[2];

  if ((*(int *)(self + 0x38) != 0) && (self[0x50] != (UITextField)0x0)) {
    if ((self[0x51] == (UITextField)0x0) && ((Keyboard != (int *)0x0 && (Keyboard[3] == 1)))) {
      if ((*Keyboard == 0x13) || (*Keyboard == 0x1d)) {
        std__wstring_wstring((wstring *)local_28, (wstring *)(self + 0x40), 0,
                             *(long *)(*(long *)(self + 0x40) + -0x18) - 1);
        /* try { // try from 005a5ce3 to 005a5ce7 has its CatchHandler @ 005a5d45 */
        std__wstring_assign((wstring *)(self + 0x40));
        if ((allocator *)(local_28[0] + -0x18) !=
            (allocator *)std__wstring_Rep_S_empty_rep_storage) {
          LOCK();
          piVar2 = (int *)(local_28[0] + -8);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 < 1) {
            std__wstring_Rep_M_destroy((allocator *)(local_28[0] + -0x18));
          }
        }
        FontEmitter__SetStaticText(*(FontEmitter **)(self + 0x48), *(wchar_t **)(self + 0x40));
      } else {
        iVar3 = Keyboard[1];
        if ((char)iVar3 != '\0') {
          lVar4 = *(long *)(self + 0x40);
          lVar5 = *(long *)(lVar4 + -0x18);
          uVar1 = lVar5 + 1;
          if ((*(ulong *)(lVar4 + -0x10) < uVar1) || (0 < *(int *)(lVar4 + -8))) {
            std__wstring_reserve((ulong)(self + 0x40));
            lVar4 = *(long *)(self + 0x40);
            lVar5 = *(long *)(lVar4 + -0x18);
          }
          *(int *)(lVar4 + lVar5 * 4) = (int)(char)iVar3;
          pwVar6 = *(wchar_t **)(self + 0x40);
          if (pwVar6 != (wchar_t *)(std__wstring_Rep_S_empty_rep_storage + 0x18)) {
            pwVar6[-2] = L'\0';
            *(ulong *)(pwVar6 + -6) = uVar1;
            pwVar6[uVar1] = L'\0';
            pwVar6 = *(wchar_t **)(self + 0x40);
          }
          FontEmitter__SetStaticText(*(FontEmitter **)(self + 0x48), pwVar6);
        }
      }
    }
    self[0x51] = (UITextField)0x0;
  }
  return;
}

/* ======================================================================
 * UITextField__UITextField__005a5d70  (Ghidra `UITextField` @ 005a5d70)
 * Signature: uint8_t __thiscall UITextField(UITextField * self)
 * Class: UITextField
 * Calls: `UITextField__UITextField__005a5de0`
 * Called by: (none)
 */
/* UITextField__UITextField__005a5de0() */

void __thiscall UITextField__UITextField__005a5de0(UITextField *self)

{
  *(uint32_t *)(self + 8) = 0;
  *(uint64_t *)(self + 0x10) = 0;
  *(uint32_t *)(self + 0x20) = 0;
  *(uint32_t *)(self + 0x24) = 0;
  *(uint64_t *)(self + 0x18) = 0;
  *(uint32_t *)(self + 0x28) = 0x3f800000;
  *(uint32_t *)(self + 0x2c) = 0x3f800000;
  *(uint64_t *)(self + 0x30) = 0;
  *(uint32_t *)(self + 0x38) = 0;
  *(uint8_t ***)self = &PTR__UITextField_005ddcf0;
  *(uint64_t *)(self + 0x40) = 0x8184e8;
  self[0x50] = (UITextField)0x0;
  self[0x51] = (UITextField)0x0;
  *(uint16_t *)(self + 0x52) = 0;
  *(uint64_t *)(self + 0x58) = 0;
  *(uint64_t *)(self + 0x60) = 0;
  *(uint64_t **)(self + 0x68) = &_DEFAULT_UITEXTFIELD_STYLE;
  return;
}

/* ======================================================================
 * UITextField__UITextField__005a5de0  (Ghidra `UITextField` @ 005a5de0)
 * Signature: uint8_t __thiscall UITextField(UITextField * self, UITextFieldCreation * arg1)
 * Class: UITextField
 * Calls: `FontEmitter__FontEmitter__005861d0`, `operator_new`
 * Called by: `FlashEditableTextField__FlashEditableTextField__00576550`, `SMBEditorForms__Initialize`, `UITextField__UITextField__005a5d70`
 */
/* UITextField__UITextField__005a5de0(UITextFieldCreation const*) */

void __thiscall UITextField__UITextField__005a5de0(UITextField *self, UITextFieldCreation *arg1)

{
  long lVar1;
  FontEmitter *this_00;
  uint64_t local_28;
  uint64_t local_20;

  *(uint32_t *)(self + 8) = 0;
  *(uint64_t *)(self + 0x10) = 0;
  *(uint64_t *)(self + 0x18) = 0;
  *(uint32_t *)(self + 0x20) = 0;
  *(uint32_t *)(self + 0x24) = 0;
  *(uint32_t *)(self + 0x28) = 0x3f800000;
  *(uint32_t *)(self + 0x2c) = 0x3f800000;
  *(uint64_t *)(self + 0x30) = 0;
  *(uint32_t *)(self + 0x38) = 0;
  *(uint8_t ***)self = &PTR__UITextField_005ddcf0;
  *(uint64_t *)(self + 0x40) = 0x8184e8;
  self[0x50] = (UITextField)0x0;
  self[0x51] = (UITextField)0x0;
  *(uint16_t *)(self + 0x52) = 0;
  *(uint64_t *)(self + 0x58) = *(uint64_t *)arg1;
  *(uint64_t *)(self + 0x60) = *(uint64_t *)(arg1 + 8);
  lVar1 = *(long *)(arg1 + 0x10);
  *(long *)(self + 0x68) = lVar1;
  *(uint32_t *)(self + 0x70) = *(uint32_t *)(arg1 + 0x18);
  *(uint32_t *)(self + 0x74) = *(uint32_t *)(arg1 + 0x1c);
  if (*(long *)(lVar1 + 0x20) == 0) {
    *(uint64_t *)(lVar1 + 0x20) = _DEFAULT_UI_FONT;
    lVar1 = *(long *)(self + 0x68);
  }
  local_20 = *(uint64_t *)(lVar1 + 0x20);
  local_28 = 0;
  /* try { // try from 005a5e89 to 005a5e8d has its CatchHandler @ 005a5ec1 */
  this_00 = operator_new(0xa0);
  /* try { // try from 005a5e99 to 005a5e9d has its CatchHandler @ 005a5edd */
  FontEmitter__FontEmitter__005861d0(this_00, (FontEmitterCreation *)&local_28);
  *(FontEmitter **)(self + 0x48) = this_00;
  *(uint32_t *)(this_00 + 0x5c) = 2;
  return;
}

/* ======================================================================
 * UITextField__CustomRender  (Ghidra `CustomRender` @ 005a5f00)
 * Signature: uint8_t __thiscall CustomRender(UITextField * self, uint arg1, uint arg2)
 * Class: UITextField
 * Calls: `FontEmitter__SetFontSize`, `TGraphics__AddPixelStage`, `TGraphics__Clear`, `TGraphics__Draw`, `TGraphics__GetMatrix`, `TGraphics__PopMatrix`, `TGraphics__PushMatrix`, `TGraphics__ResetPixelStages`, `TGraphics__ResetTexCoordGen`, `TGraphics__SetPerspectiveProjectionMode` (+3 more)
 * Called by: `FlashEditableTextField__Render`
 */
/* UITextField__CustomRender(unsigned int, unsigned int) */

void __thiscall UITextField__CustomRender(UITextField *self, uint arg1, uint arg2)

{
  long lVar1;
  long lVar2;
  Matrix4x4 *pMVar3;
  float local_48;
  float local_44;
  float local_38;
  float local_34;
  float local_28[4];

  TGraphics__Clear(Graphics, (ColorTemplate *)::cNullColor, 2);
  TGraphics__SetRenderState(Graphics, '\x03', 1);
  TGraphics__SetRenderState(Graphics, '\x01', 7);
  local_28[1] = 0.0;
  local_44 = *(float *)(self + 0x74) / (float)arg2;
  local_48 = *(float *)(self + 0x70) / (float)arg1;
  local_38 = *(float *)(self + 0x20) / (float)arg1;
  local_38 = local_38 + local_38;
  local_34 = *(float *)(self + 0x24) / (float)arg2;
  local_34 = local_34 + local_34;
  local_28[0] = local_48;
  pMVar3 = (Matrix4x4 *)TGraphics__GetMatrix(Graphics, 0);
  Matrix4x4__Transformation2DRot(pMVar3, (Vector2 *)(self + 0x28), (float *)0x0,
                                 (Vector2 *)&local_38);
  TGraphics__PushMatrix(Graphics, 0);
  TGraphics__SetRenderState(Graphics, '\a', 0);
  if (*(short *)(self + 0x52) == 0) {
    TGraphics__SetPerspectiveProjectionMode(Graphics, 0);
    pMVar3 = (Matrix4x4 *)TGraphics__GetMatrix(Graphics, 3);
    Matrix4x4__ConvertToOrthoMatrix(pMVar3, DAT_005be894 /* R:1.0f */, DAT_005c07a4 /* R:-1.0f */,
                                    DAT_005c07a4 /* R:-1.0f */, DAT_005be894 /* R:1.0f */,
                                    DAT_005c07a4 /* R:-1.0f */, DAT_005be894 /* R:1.0f */);
  }
  pMVar3 = (Matrix4x4 *)TGraphics__GetMatrix(Graphics, 0);
  Matrix4x4__ConvertToScalingMatrix(pMVar3, (Vector2 *)&local_48);
  TGraphics__ResetPixelStages(Graphics);
  TGraphics__ResetTexCoordGen(Graphics);
  TGraphics__AddPixelStage(Graphics, 1, 0, 0, 0, 0, 1, 0xffffffff);
  TGraphics__SetPixelColorConstant(Graphics, 0, *(uint64_t *)(self + 0x68));
  TGraphics__Draw(Graphics, CGR__pSingleQuadStream, (IndexBuffer *)0x0);
  Vector2__operator_assign((Vector2 *)(*(long *)(self + 0x48) + 0x4c), (Vector2 *)local_28);
  TGraphics__SetRenderState(Graphics, '\x03', 0);
  TGraphics__SetRenderState(Graphics, '\x01', 7);
  TGraphics__SetRenderState(Graphics, '\x01', 6);
  if (*(short *)(self + 0x52) == 0) {
    *(uint32_t *)(*(long *)(self + 0x48) + 0x38) = 0;
  } else {
    *(uint32_t *)(*(long *)(self + 0x48) + 0x38) = 1;
  }
  FontEmitter__SetFontSize(*(FontEmitter **)(self + 0x48),
                           *(float *)(*(long *)(self + 0x68) + 0x28));
  lVar1 = *(long *)(self + 0x68);
  lVar2 = *(long *)(self + 0x48);
  *(uint64_t *)(lVar2 + 0x3c) = *(uint64_t *)(lVar1 + 0x10);
  *(uint64_t *)(lVar2 + 0x44) = *(uint64_t *)(lVar1 + 0x18);
  (**(code **)(**(long **)(self + 0x48) + 0x10))();
  TGraphics__SetRenderState(Graphics, '\x03', 0);
  TGraphics__SetRenderState(Graphics, '\x01', 7);
  TGraphics__PopMatrix(Graphics);
  return;
}

/* ======================================================================
 * UITextField__Render  (Ghidra `Render` @ 005a61b0)
 * Signature: uint8_t __thiscall Render(UITextField * self)
 * Class: UITextField
 * Calls: (none)
 * Called by: (none)
 */
/* UITextField__Render() */

void __thiscall UITextField__Render(UITextField *self)

{
  if (*(int *)(self + 0x38) == 0) {
    return;
  }
  if (*(short *)(self + 0x52) != 0) {
    CustomRender(self, 0x355, 0x1e0);
    return;
  }
  CustomRender(self, (uint) * (ushort *)(Window + 8), (uint) * (ushort *)(Window + 10));
  return;
}

/* ======================================================================
 * UITextField__SetStaticText  (Ghidra `SetStaticText` @ 005a61f0)
 * Signature: uint8_t __thiscall SetStaticText(UITextField * self, wchar_t * arg1)
 * Class: UITextField
 * Calls: `FontEmitter__SetStaticText`, `wcslen`
 * Called by: `SMB_SAVE_LEVEL_Activate`, `SetText__00578560`, `SetText__00578630`
 */
/* UITextField__SetStaticText(wchar_t const*) */

void __thiscall UITextField__SetStaticText(UITextField *self, wchar_t *arg1)

{
  wcslen(arg1);
  std__wstring_assign((wchar_t *)(self + 0x40), (ulong)arg1);
  FontEmitter__SetStaticText(*(FontEmitter **)(self + 0x48), arg1);
  return;
}
