/* src/game/classes/SMBMoveOn.c — 11 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "SMBMoveOn.h"

/* ======================================================================
 * SMBMoveOn__Update  (Ghidra `Update` @ 005018f0)
 * Signature: uint8_t __stdcall Update(void)
 * Class: SMBMoveOn
 * Calls: (none)
 * Called by: (none)
 */
/* SMBMoveOn__Update() */

void SMBMoveOn__Update(void)

{
  return;
}

/* ======================================================================
 * SMBMoveOn__Initialize  (Ghidra `Initialize` @ 00501950)
 * Signature: uint8_t __thiscall Initialize(SMBMoveOn * self)
 * Class: SMBMoveOn
 * Calls: `GetLocalizedText`
 * Called by: `GSMBMenu__GSMBMenu__004d8690`
 */
/* SMBMoveOn__Initialize() */

void __thiscall SMBMoveOn__Initialize(SMBMoveOn *self)

{
  uint64_t uVar1;
  
  (**(code **)(*(long *)self + 0x10))(self,0,"infoidle");
  uVar1 = GetLocalizedText(0xdb);
  *(uint64_t *)(self + 0x50) = uVar1;
  return;
}

/* ======================================================================
 * SMBMoveOn__DeactivationFinished  (Ghidra `DeactivationFinished` @ 00501f60)
 * Signature: uint8_t __thiscall DeactivationFinished(SMBMoveOn * self)
 * Class: SMBMoveOn
 * Calls: (none)
 * Called by: (none)
 */
/* SMBMoveOn__DeactivationFinished() */

void __thiscall SMBMoveOn__DeactivationFinished(SMBMoveOn *self)

{
  *(ushort *)(self + 0x34) = *(ushort *)(self + 0x34) & 0xfc00;
  *(uint32_t *)(self + 0x30) = 4;
  if (*(int *)(SuperMeatBoy + 0x2c) != 0) {
    return;
  }
  RenderLayers__RemoveLayer(SMBMenu);
  return;
}

/* ======================================================================
 * SMBMoveOn__Render  (Ghidra `Render` @ 00502990)
 * Signature: uint8_t __thiscall Render(SMBMoveOn * self)
 * Class: SMBMoveOn
 * Calls: `SMBPopupMenu__Render__00502110`
 * Called by: (none)
 */
/* SMBMoveOn__Render() */

void __thiscall SMBMoveOn__Render(SMBMoveOn *self)

{
  if ((*(ushort *)(self + 0x34) & 0x3ff) == 0) {
    return;
  }
  SMBPopupMenu__Render__00502110((SMBPopupMenu *)self);
  return;
}

/* ======================================================================
 * SMBMoveOn__Activate  (Ghidra `Activate` @ 00503470)
 * Signature: uint8_t __thiscall Activate(SMBMoveOn * self)
 * Class: SMBMoveOn
 * Calls: `CreateMessage`, `FlashAnimationLibrary__GetTextField`, `FlashLibraryInstance__Reset`, `GetLocalizedText`, `RegisterMessageBoxRenderUpdate`, `SMBMoveOnRender`, `SMBMoveOnUpdate`, `SMBPopupMenu__Activate`, `UserAlertCloseCurrent`
 * Called by: (none)
 */
/* SMBMoveOn__Activate() */

void __thiscall SMBMoveOn__Activate(SMBMoveOn *self)

{
  uint64_t uVar1;
  wchar_t *pwVar2;
  uint32_t local_88 [2];
  wchar_t *local_80;
  wchar_t *local_78;
  uint64_t local_70;
  uint64_t local_68;
  code *local_60;
  code *local_58;
  uint64_t local_50;
  uint64_t local_48;
  uint64_t local_40;
  uint64_t local_38;
  uint64_t local_30;
  uint64_t local_28;
  uint64_t local_20;
  
  FlashLibraryInstance__Reset(*(FlashLibraryInstance **)(self + 0x28));
  FlashLibraryInstance__Reset(*(FlashLibraryInstance **)(self + 0x18));
  FlashLibraryInstance__Reset(*(FlashLibraryInstance **)(self + 0x10));
  RegisterMessageBoxRenderUpdate(SMBMoveOnRender,SMBMoveOnUpdate);
  uVar1 = GetLocalizedText(0xdc);
  pwVar2 = (wchar_t *)
           FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8),"ctext1");
  if (pwVar2 != (wchar_t *)0x0) {
    FlashTextField__SetText(pwVar2,uVar1);
  }
  local_70 = 0;
  local_68 = 0;
  local_60 = (code *)0x0;
  local_58 = (code *)0x0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_80 = L"BUy now";
  local_78 = L"buy the game";
  local_88[0] = 0xe;
  local_70 = GetLocalizedText(4);
  local_60 = UserAlertCloseCurrent;
  local_58 = UserAlertCloseCurrent;
  CreateMessage(local_88);
  SMBPopupMenu__Activate((SMBPopupMenu *)self);
  return;
}

/* ======================================================================
 * SMBMoveOn__SMBMoveOn  (Ghidra `~SMBMoveOn` @ 00503e60)
 * Signature: uint8_t __thiscall ~SMBMoveOn(SMBMoveOn * self)
 * Class: SMBMoveOn
 * Calls: `SMBMoveOn__SMBMoveOn__00503fc0`, `SMBPopupMenu__SMBPopupMenu__00503f20`
 * Called by: (none)
 */
/* SMBMoveOn__SMBMoveOn__00503fc0() */

void __thiscall SMBMoveOn__SMBMoveOn__00503fc0(SMBMoveOn *self)

{
  *(uint8_t ***)self = &PTR__SMBMoveOn_005c7970;
  SMBPopupMenu__SMBPopupMenu__00503f20((SMBPopupMenu *)self);
  return;
}

/* ======================================================================
 * SMBMoveOn__SMBMoveOn__00503fc0  (Ghidra `~SMBMoveOn` @ 00503fc0)
 * Signature: uint8_t __thiscall ~SMBMoveOn(SMBMoveOn * self)
 * Class: SMBMoveOn
 * Calls: `SMBPopupMenu__SMBPopupMenu__00503f20`, `operator_delete`
 * Called by: `GSMBMenu__GSMBMenu`, `SMBMoveOn__SMBMoveOn`
 */
/* SMBMoveOn__SMBMoveOn__00503fc0() */

void __thiscall SMBMoveOn__SMBMoveOn__00503fc0(SMBMoveOn *self)

{
  *(uint8_t ***)self = &PTR__SMBMoveOn_005c7970;
  SMBPopupMenu__SMBPopupMenu__00503f20((SMBPopupMenu *)self);
  operator_delete(self);
  return;
}

/* ======================================================================
 * SMBMoveOn__DeActivate  (Ghidra `DeActivate` @ 005040e0)
 * Signature: uint8_t __thiscall DeActivate(SMBMoveOn * self)
 * Class: SMBMoveOn
 * Calls: `Joystick__AddButtonCallback`, `Joystick__RestoreCallbacks`, `TKeyboard__AddKeyCallback`, `TKeyboard__RestoreCallbacks`, `TPlayer__GetJoystick`
 * Called by: (none)
 */
/* SMBMoveOn__DeActivate() */

void __thiscall SMBMoveOn__DeActivate(SMBMoveOn *self)

{
  Joystick *pJVar1;
  
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddButtonCallback(pJVar1,2,0,0);
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddButtonCallback(pJVar1,0,0,0);
  *(uint32_t *)(self + 0x30) = 2;
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddButtonCallback(pJVar1,1,0,0);
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__RestoreCallbacks(pJVar1,(InputCallback **)(self + 0x40),(InputCallback **)(self + 0x38))
  ;
  if (Keyboard != (TKeyboard *)0x0) {
    TKeyboard__AddKeyCallback(Keyboard,0x23,0,0);
    TKeyboard__RestoreCallbacks(Keyboard,(InputCallback **)(self + 0x48));
    return;
  }
  return;
}

/* ======================================================================
 * SMBMoveOn__SMBMoveOn__00505470  (Ghidra `SMBMoveOn` @ 00505470)
 * Signature: uint8_t __thiscall SMBMoveOn(SMBMoveOn * self)
 * Class: SMBMoveOn
 * Calls: `GetLocalizedText`
 * Called by: `GSMBMenu__GSMBMenu__004d8690`
 */
/* SMBMoveOn__SMBMoveOn__00505470() */

void __thiscall SMBMoveOn__SMBMoveOn__00505470(SMBMoveOn *self)

{
  uint64_t uVar1;
  
  *(ushort *)(self + 0x34) = *(ushort *)(self + 0x34) & 0xfc00;
  *(uint8_t ***)self = &PTR__SMBPopupMenu_005c76d0;
  *(uint64_t *)(self + 8) = 0;
  *(uint64_t *)(self + 0x10) = 0;
  *(uint64_t *)(self + 0x18) = 0;
  *(uint64_t *)(self + 0x20) = 0;
  *(uint64_t *)(self + 0x28) = 0;
  *(uint32_t *)(self + 0x30) = 0;
  *(uint *)(self + 0x34) = *(uint *)(self + 0x34) & 0xfff003ff | 0x400;
  *(uint16_t *)(self + 0x36) = 0;
  uVar1 = GetLocalizedText(0x16);
  *(uint8_t ***)self = &PTR__SMBMoveOn_005c7970;
  *(uint64_t *)(self + 0x50) = uVar1;
  pCurrMoveOnMenu = self;
  return;
}

/* ======================================================================
 * SMBMoveOn__DisconnectedStorage  (Ghidra `DisconnectedStorage` @ 005054f0)
 * Signature: uint8_t __thiscall DisconnectedStorage(SMBMoveOn * self)
 * Class: SMBMoveOn
 * Calls: `DisableMessage`
 * Called by: (none)
 */
/* SMBMoveOn__DisconnectedStorage() */

void __thiscall SMBMoveOn__DisconnectedStorage(SMBMoveOn *self)

{
  if ((*(ushort *)(self + 0x34) & 0x3ff) != 1) {
    return;
  }
  DisableMessage(1);
  return;
}

/* ======================================================================
 * SMBMoveOn__MessageBoxRender  (Ghidra `MessageBoxRender` @ 00505510)
 * Signature: uint8_t __thiscall MessageBoxRender(SMBMoveOn * self, tagUAState arg1)
 * Class: SMBMoveOn
 * Calls: `FlashLibraryInstance__IsPlaying`, `RegisterAudioPosition`, `SetCurrState`, `TAudio__DisableDirectionalAudio`, `TAudio__EnableDirectionalAudio`, `TGraphics__GetMatrix`, `TGraphics__SetMatrix`, `TGraphics__SetPerspectiveProjectionMode`, `TGraphics__SetRenderState`
 * Called by: `SMBMoveOnRender`
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SMBMoveOn__MessageBoxRender(tagUAState) */

void __thiscall SMBMoveOn__MessageBoxRender(SMBMoveOn *self,int arg2)

{
  int iVar1;
  Matrix4x4 *pMVar2;
  Matrix4x4 aMStack_58 [72];
  
  TGraphics__SetRenderState(Graphics,'\x03',0);
  TGraphics__SetRenderState(Graphics,'\x01',7);
  TGraphics__SetRenderState(Graphics,'\b',1);
  TGraphics__SetRenderState(Graphics,'\x05',4);
  TGraphics__SetRenderState(Graphics,'\x06',5);
  TGraphics__SetRenderState(Graphics,'\n',7);
  TGraphics__SetRenderState(Graphics,'\t',0);
  Matrix4x4__ConvertToOrthoMatrix
            (aMStack_58,_DAT_005c0c9c /* R:240.0f */,DAT_005c0c98 /* R:-240.0f */,DAT_005c0c94 /* R:-426.5f */,DAT_005c0c90 /* R:426.5f */,DAT_005c07a4 /* R:-1.0f */,
             DAT_005be894 /* R:1.0f */);
  TGraphics__SetMatrix(Graphics,3,aMStack_58);
  TGraphics__SetPerspectiveProjectionMode(Graphics,0);
  pMVar2 = (Matrix4x4 *)TGraphics__GetMatrix(Graphics,2);
  Matrix4x4__Identity(pMVar2);
  pMVar2 = (Matrix4x4 *)TGraphics__GetMatrix(Graphics,0);
  Matrix4x4__Identity(pMVar2);
  TAudio__DisableDirectionalAudio(Audio);
  RegisterAudioPosition((FPUVector *)0xffffffff);
  if (arg2 == 2) {
    (**(code **)(**(long **)(self + 0x28) + 0x10))();
  }
  else if (arg2 == 0) {
    (**(code **)(**(long **)(self + 0x10) + 0x10))();
    iVar1 = FlashLibraryInstance__IsPlaying(*(FlashLibraryInstance **)(self + 0x10));
    if (iVar1 == 0) {
      SetCurrState(2);
    }
  }
  else if (arg2 == 1) {
    (**(code **)(**(long **)(self + 0x18) + 0x10))();
    iVar1 = FlashLibraryInstance__IsPlaying(*(FlashLibraryInstance **)(self + 0x18));
    if (iVar1 == 0) {
      SetCurrState(3);
    }
  }
  TAudio__EnableDirectionalAudio(Audio);
  RegisterAudioPosition((FPUVector *)0x0);
  return;
}
