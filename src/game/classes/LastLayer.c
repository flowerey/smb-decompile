/* src/game/classes/LastLayer.c — 3 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "LastLayer.h"

/* ======================================================================
 * LastLayer__LastLayer  (Ghidra `~LastLayer` @ 00517ae0)
 * Signature: uint8_t __thiscall ~LastLayer(LastLayer * self)
 * Class: LastLayer
 * Calls: `LastLayer__LastLayer__00518240`, `RenderLayer__RenderLayer__005988e0`
 * Called by: (none)
 */
/* LastLayer__LastLayer__00518240() */

void __thiscall LastLayer__LastLayer__00518240(LastLayer *self)

{
  *(uint8_t ***)self = &PTR__LastLayer_005c9530;
  RenderLayer__RenderLayer__005988e0((RenderLayer *)self);
  return;
}

/* ======================================================================
 * LastLayer__LastLayer__00518240  (Ghidra `~LastLayer` @ 00518240)
 * Signature: uint8_t __thiscall ~LastLayer(LastLayer * self)
 * Class: LastLayer
 * Calls: `RenderLayer__RenderLayer__005988e0`, `operator_delete`
 * Called by: `LastLayer__LastLayer`
 */
/* LastLayer__LastLayer__00518240() */

void __thiscall LastLayer__LastLayer__00518240(LastLayer *self)

{
  *(uint8_t ***)self = &PTR__LastLayer_005c9530;
  RenderLayer__RenderLayer__005988e0((RenderLayer *)self);
  operator_delete(self);
  return;
}

/* ======================================================================
 * LastLayer__Render  (Ghidra `Render` @ 005182e0)
 * Signature: uint8_t __stdcall Render(void)
 * Class: LastLayer
 * Calls: `Camera__SetCameraMatricies`, `Camera__SetOrthoProjection`, `SMBBossCollision`, `SMBPalette__ObstacleCollision`, `TGraphics__AddPixelStage`, `TGraphics__Draw`, `TGraphics__GetMatrix`, `TGraphics__ResetPixelStages`, `TGraphics__ResetTexCoordGen`, `TGraphics__SetPixelColorConstant` (+1 more)
 * Called by: (none)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LastLayer__Render() */

void LastLayer__Render(void)

{
  Matrix4x4 *pMVar1;
  Camera *self;
  bool bVar2;

  if (_DAT_0081c778 /* R:8.499491757454318e-39f */ == 1) {
    if (ScreenFlash <= 0.0) {
      DAT_0081c774 /* R:1.2856983475103413e-39f */ = DAT_0081c774 /* R:1.2856983475103413e-39f */ -
                                                     fOneFrameTimeStep / _DAT_0081c764 /* R:0.0f */;
      if (DAT_0081c774 /* R:1.2856983475103413e-39f */ <= 0.0)
        goto LAB_0051831e;
    } else {
      ScreenFlash = ScreenFlash - fOneFrameTimeStep;
      DAT_0081c774 /* R:1.2856983475103413e-39f */ = 1.0;
    }
    TGraphics__ResetTexCoordGen(Graphics);
    TGraphics__ResetPixelStages(Graphics);
    self = *(Camera **)(SuperMeatBoy + 0x38);
  } else {
    TGraphics__ResetTexCoordGen(Graphics);
    TGraphics__ResetPixelStages(Graphics);
    if (DAT_005be894 /* R:1.0f */ <= DAT_0081c774 /* R:1.2856983475103413e-39f */)
      goto LAB_0051831e;
    self = *(Camera **)(SuperMeatBoy + 0x38);
    DAT_0081c774 /* R:1.2856983475103413e-39f */ = fOneFrameTimeStep / _DAT_0081c764 /* R:0.0f */ +
                                                   DAT_0081c774 /* R:1.2856983475103413e-39f */;
  }
  Camera__SetOrthoProjection(self, DAT_005be894 /* R:1.0f */, DAT_005c07a4 /* R:-1.0f */,
                             DAT_005c07a4 /* R:-1.0f */, DAT_005be894 /* R:1.0f */,
                             DAT_005c07a4 /* R:-1.0f */, DAT_005be894 /* R:1.0f */);
  Camera__SetCameraMatricies(*(Camera **)(SuperMeatBoy + 0x38), 2);
  pMVar1 = (Matrix4x4 *)TGraphics__GetMatrix(Graphics, 0);
  Matrix4x4__Identity(pMVar1);
  TGraphics__AddPixelStage(Graphics, 1, 0, 0, 0, 0, 1, 0xffffffff);
  TGraphics__SetPixelColorConstant(Graphics, 0, &DAT_0081c768 /* R:2.2420775429197073e-44f */);
  TGraphics__SetRenderState(Graphics, '\a', 0);
  TGraphics__SetRenderState(Graphics, '\x05', 4);
  TGraphics__SetRenderState(Graphics, '\x06', 5);
  TGraphics__Draw(Graphics, CGR__pSingleQuadStream, (IndexBuffer *)0x0);
LAB_0051831e:
  Camera__SetCameraMatricies(*(Camera **)(SuperMeatBoy + 0x38), 1);
  bVar2 = false;
  if (Keyboard != 0) {
    bVar2 = *(int *)(Keyboard + 0x574) == 2;
  }
  if (((*(int *)(SuperMeatBoy + 0x2c) == 1) && (bVar2)) &&
      (GSuperMeatBoy__pLevelPalette != (SMBPalette *)0x0)) {
    bDrawInstanceBounds = 1;
    SMBPalette__ObstacleCollision(GSuperMeatBoy__pLevelPalette,
                                  *(SceneObject2D **)(SuperMeatBoy + 0x48), (Bounds *)0x0);
    SMBBossCollision(*(uint64_t *)(*(long *)(SuperMeatBoy + 0x48) + 0x48));
    bDrawInstanceBounds = 0;
  }
  return;
}
