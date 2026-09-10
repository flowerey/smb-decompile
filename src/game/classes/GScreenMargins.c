/* src/game/classes/GScreenMargins.c — 4 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "GScreenMargins.h"

/* ======================================================================
 * GScreenMargins__GScreenMargins  (Ghidra `GScreenMargins` @ 0059bb50)
 * Signature: uint8_t __thiscall GScreenMargins(GScreenMargins * self)
 * Class: GScreenMargins
 * Calls: (none)
 * Called by: `TEngine__TEngine`
 */
/* GScreenMargins__GScreenMargins() */

void __thiscall GScreenMargins__GScreenMargins(GScreenMargins *self)

{
  *(uint32_t *)self = 0;
  ScreenMargins = self;
  return;
}

/* ======================================================================
 * GScreenMargins__GScreenMargins__0059bb60  (Ghidra `~GScreenMargins` @ 0059bb60)
 * Signature: uint8_t __thiscall ~GScreenMargins(GScreenMargins * self)
 * Class: GScreenMargins
 * Calls: `BaseResource__Release`
 * Called by: `TEngine__TEngine__00583e20`
 */
/* GScreenMargins__GScreenMargins__0059bb60() */

void __thiscall GScreenMargins__GScreenMargins__0059bb60(GScreenMargins *self)

{
  if (__pMarginStream != (BaseResource *)0x0) {
    BaseResource__Release(__pMarginStream, 0);
    __pMarginStream = (BaseResource *)0x0;
  }
  ScreenMargins = 0;
  return;
}

/* ======================================================================
 * GScreenMargins__EnableMargins  (Ghidra `EnableMargins` @ 0059bba0)
 * Signature: uint8_t __thiscall EnableMargins(GScreenMargins * self, int arg1)
 * Class: GScreenMargins
 * Calls: `BaseResource__Release`, `VertexStream__VertexStream__005a6980`
 * Called by: `GSuperMeatBoy__Initialize__00516f60`
 */
/* GScreenMargins__EnableMargins(int) */

void __thiscall GScreenMargins__EnableMargins(GScreenMargins *self, int arg1)

{
  VertexStream *pVVar1;
  uint32_t local_88;
  uint32_t local_84;
  uint32_t local_80;
  uint32_t local_7c;
  uint32_t local_78;
  uint32_t local_74;
  uint32_t local_70;
  uint32_t local_6c;
  uint32_t local_68;
  uint32_t local_64;
  uint32_t local_60;
  uint32_t local_5c;
  uint32_t local_58;
  uint32_t local_54;
  uint32_t local_50;
  uint32_t local_4c;
  uint64_t local_48;
  uint16_t local_40;
  uint32_t local_3c;
  uint32_t *local_38;
  uint32_t local_30;
  uint32_t local_2c;
  uint32_t local_28;
  BaseResource *local_20;

  if ((arg1 == 1) && (__pMarginStream == (VertexStream *)0x0)) {
    local_38 = &local_88;
    local_88 = 0xbf800000;
    local_84 = 0xbf800000;
    local_80 = 0xbf800000;
    local_7c = 0x3f800000;
    local_78 = 0xbf800000;
    local_74 = 0x3f800000;
    local_70 = 0x3f800000;
    local_6c = 0x3f800000;
    local_68 = 0x3f800000;
    local_64 = 0x3f800000;
    local_60 = 0x3f800000;
    local_5c = 0xbf800000;
    local_58 = 0x3f800000;
    local_54 = 0xbf800000;
    local_50 = 0xbf800000;
    local_4c = 0xbf800000;
    local_3c = 5;
    local_30 = 0;
    local_2c = 1;
    local_28 = 0;
    local_40 = 8;
    local_48 = 0x40;
    local_20 = (BaseResource *)VertexBuffer__Create((tagVertexBufferCreation *)&local_48);
    pVVar1 = BaseResource__operator_new(0xa8, 1);
    /* try { // try from 0059bcf5 to 0059bcf9 has its CatchHandler @ 0059bd12 */
    VertexStream__VertexStream__005a6980(pVVar1, 1, 4, 8, 5, &local_20, CGR__pPos2Decl);
    __pMarginStream = pVVar1;
    BaseResource__Release(local_20, 0);
  }
  *(int *)self = arg1;
  return;
}

/* ======================================================================
 * GScreenMargins__Render  (Ghidra `Render` @ 0059bd40)
 * Signature: uint8_t __thiscall Render(GScreenMargins * self)
 * Class: GScreenMargins
 * Calls: `TGraphics__AddPixelStage`, `TGraphics__DeleteMasterPixelStage`, `TGraphics__Draw`, `TGraphics__GetMatrix`, `TGraphics__ResetPixelStages`, `TGraphics__ResetTexCoordGen`, `TGraphics__SetPerspectiveProjectionMode`, `TGraphics__SetPixelColorConstant`, `TGraphics__SetRenderState`
 * Called by: `TEngine__EngineRun`, `TEngine__Render`
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GScreenMargins__Render() */

void __thiscall GScreenMargins__Render(GScreenMargins *self)

{
  Matrix4x4 *pMVar1;
  uint32_t local_28;
  uint32_t local_24;
  uint32_t local_18;
  uint32_t local_14;

  if (*(int *)self != 1) {
    return;
  }
  TGraphics__ResetPixelStages(Graphics);
  TGraphics__ResetTexCoordGen(Graphics);
  TGraphics__DeleteMasterPixelStage(Graphics);
  TGraphics__AddPixelStage(Graphics, 1, 0, 0, 0, 0, 1, 0xffffffff);
  TGraphics__SetPerspectiveProjectionMode(Graphics, 0);
  local_28 = 0x43a00000;
  local_24 = 0x43700000;
  pMVar1 = (Matrix4x4 *)TGraphics__GetMatrix(Graphics, 0);
  Matrix4x4__ConvertToScalingMatrix(pMVar1, (Vector2 *)&local_28);
  pMVar1 = (Matrix4x4 *)TGraphics__GetMatrix(Graphics, 2);
  Matrix4x4__Identity(pMVar1);
  TGraphics__SetRenderState(Graphics, '\x03', 0);
  TGraphics__SetRenderState(Graphics, '\x01', 7);
  TGraphics__SetRenderState(Graphics, '\x05', 1);
  TGraphics__SetRenderState(Graphics, '\x06', 0);
  TGraphics__SetRenderState(Graphics, '\a', 0);
  pMVar1 = (Matrix4x4 *)TGraphics__GetMatrix(Graphics, 3);
  Matrix4x4__ConvertToOrthoMatrix(pMVar1, _DAT_005c0c9c /* R:240.0f */,
                                  DAT_005c0c98 /* R:-240.0f */, DAT_005dd444 /* R:-320.0f */,
                                  DAT_005dd440 /* R:320.0f */, DAT_005c07a4 /* R:-1.0f */,
                                  DAT_005be894 /* R:1.0f */);
  TGraphics__SetPixelColorConstant(Graphics, 0, ::cGreen);
  TGraphics__Draw(Graphics, __pMarginStream, (IndexBuffer *)0x0);
  pMVar1 = (Matrix4x4 *)TGraphics__GetMatrix(Graphics, 3);
  Matrix4x4__ConvertToOrthoMatrix(pMVar1, _DAT_005c0c9c /* R:240.0f */,
                                  DAT_005c0c98 /* R:-240.0f */, DAT_005c0c94 /* R:-426.5f */,
                                  DAT_005c0c90 /* R:426.5f */, DAT_005c07a4 /* R:-1.0f */,
                                  DAT_005be894 /* R:1.0f */);
  TGraphics__SetPixelColorConstant(Graphics, 0, ::cGreen);
  TGraphics__Draw(Graphics, __pMarginStream, (IndexBuffer *)0x0);
  local_18 = 0x43900000;
  local_14 = 0x43580000;
  pMVar1 = (Matrix4x4 *)TGraphics__GetMatrix(Graphics, 0);
  Matrix4x4__ConvertToScalingMatrix(pMVar1, (Vector2 *)&local_18);
  pMVar1 = (Matrix4x4 *)TGraphics__GetMatrix(Graphics, 3);
  Matrix4x4__ConvertToOrthoMatrix(pMVar1, _DAT_005c0c9c /* R:240.0f */,
                                  DAT_005c0c98 /* R:-240.0f */, DAT_005dd444 /* R:-320.0f */,
                                  DAT_005dd440 /* R:320.0f */, DAT_005c07a4 /* R:-1.0f */,
                                  DAT_005be894 /* R:1.0f */);
  TGraphics__SetPixelColorConstant(Graphics, 0, ::cOrange);
  TGraphics__Draw(Graphics, __pMarginStream, (IndexBuffer *)0x0);
  pMVar1 = (Matrix4x4 *)TGraphics__GetMatrix(Graphics, 3);
  Matrix4x4__ConvertToOrthoMatrix(pMVar1, _DAT_005c0c9c /* R:240.0f */,
                                  DAT_005c0c98 /* R:-240.0f */, DAT_005c0c94 /* R:-426.5f */,
                                  DAT_005c0c90 /* R:426.5f */, DAT_005c07a4 /* R:-1.0f */,
                                  DAT_005be894 /* R:1.0f */);
  TGraphics__SetPixelColorConstant(Graphics, 0, ::cOrange);
  TGraphics__Draw(Graphics, __pMarginStream, (IndexBuffer *)0x0);
  return;
}
