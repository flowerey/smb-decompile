/* src/game/classes/LightLayer.c — 3 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "LightLayer.h"

/* ======================================================================
 * LightLayer__LightLayer  (Ghidra `~LightLayer` @ 00517aa0)
 * Signature: uint8_t __thiscall ~LightLayer(LightLayer * self)
 * Class: LightLayer
 * Calls: `LightLayer__LightLayer__00518280`, `RenderLayer__RenderLayer__005988e0`
 * Called by: (none)
 */
/* LightLayer__LightLayer__00518280() */

void __thiscall LightLayer__LightLayer__00518280(LightLayer *self)

{
  *(uint8_t ***)self = &PTR__LightLayer_005c9430;
  RenderLayer__RenderLayer__005988e0((RenderLayer *)self);
  return;
}

/* ======================================================================
 * LightLayer__Render  (Ghidra `Render` @ 00518020)
 * Signature: uint8_t __stdcall Render(void)
 * Class: LightLayer
 * Calls: `SamplerRegisterToSource`, `TGraphics__AddPixelStage`, `TGraphics__DeleteMasterPixelStage`, `TGraphics__Draw`, `TGraphics__GetMatrix`, `TGraphics__ResetPixelStages`, `TGraphics__ResetTexCoordGen`, `TGraphics__SetPerspectiveProjectionMode`, `TGraphics__SetRenderState`, `TGraphics__SetSamplerState` (+1 more)
 * Called by: (none)
 */
/* LightLayer__Render() */

void LightLayer__Render(void)

{
  uchar uVar1;
  uint32_t uVar2;
  Matrix4x4 *pMVar3;
  uint32_t local_18;
  uint32_t local_14;
  
  if ((*(int *)(SuperMeatBoy + 0x2c) != 2) && (bUseLighting != 0)) {
    uVar1 = TGraphics__SetTexture
                      (Graphics,0xff,*(Texture **)(*(long *)(SuperMeatBoy + 0x390) + 0x280));
    TGraphics__DeleteMasterPixelStage(Graphics);
    TGraphics__ResetPixelStages(Graphics);
    TGraphics__ResetTexCoordGen(Graphics);
    uVar2 = SamplerRegisterToSource(uVar1);
    TGraphics__AddPixelStage(Graphics,uVar2,1,0,0,0,1,0xffffffff);
    TGraphics__SetSamplerState(Graphics,uVar1,'\x04',2);
    TGraphics__SetSamplerState(Graphics,uVar1,'\x03',2);
    TGraphics__SetRenderState(Graphics,'\x01',7);
    TGraphics__SetRenderState(Graphics,'\x03',0);
    TGraphics__SetPerspectiveProjectionMode(Graphics,0);
    pMVar3 = (Matrix4x4 *)TGraphics__GetMatrix(Graphics,3);
    Matrix4x4__ConvertToOrthoMatrix
              (pMVar3,DAT_005be894 /* R:1.0f */,DAT_005c07a4 /* R:-1.0f */,DAT_005c07a4 /* R:-1.0f */,DAT_005be894 /* R:1.0f */,DAT_005c07a4 /* R:-1.0f */,DAT_005be894 /* R:1.0f */)
    ;
    TGraphics__SetRenderState(Graphics,'\x05',1);
    TGraphics__SetRenderState(Graphics,'\x06',1);
    local_18 = 0x3f800000;
    local_14 = 0xbf800000;
    pMVar3 = (Matrix4x4 *)TGraphics__GetMatrix(Graphics,0);
    Matrix4x4__ConvertToScalingMatrix(pMVar3,(Vector2 *)&local_18);
    TGraphics__SetRenderState(Graphics,'\a',0);
    TGraphics__Draw(Graphics,CGR__pSingleQuadStream,(IndexBuffer *)0x0);
    TGraphics__SetTexture(Graphics,uVar1,(Texture *)0x0);
    TGraphics__SetRenderState(Graphics,'\x05',4);
    TGraphics__SetRenderState(Graphics,'\x06',5);
    return;
  }
  return;
}

/* ======================================================================
 * LightLayer__LightLayer__00518280  (Ghidra `~LightLayer` @ 00518280)
 * Signature: uint8_t __thiscall ~LightLayer(LightLayer * self)
 * Class: LightLayer
 * Calls: `RenderLayer__RenderLayer__005988e0`, `operator_delete`
 * Called by: `LightLayer__LightLayer`
 */
/* LightLayer__LightLayer__00518280() */

void __thiscall LightLayer__LightLayer__00518280(LightLayer *self)

{
  *(uint8_t ***)self = &PTR__LightLayer_005c9430;
  RenderLayer__RenderLayer__005988e0((RenderLayer *)self);
  operator_delete(self);
  return;
}
