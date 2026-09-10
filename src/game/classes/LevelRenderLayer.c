/* src/game/classes/LevelRenderLayer.c — 3 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "LevelRenderLayer.h"

/* ======================================================================
 * LevelRenderLayer__Render  (Ghidra `Render` @ 0058ce80)
 * Signature: uint8_t __thiscall Render(LevelRenderLayer * self)
 * Class: LevelRenderLayer
 * Calls: `TGraphics__DeleteMasterPixelStage`, `TGraphics__SetMasterPixelStage`, `TGraphics__SetPixelColorConstant`, `TGraphics__SetPixelOutputParams`
 * Called by: `TileLevelLayer__Render`
 */
/* LevelRenderLayer__Render() */

void __thiscall LevelRenderLayer__Render(LevelRenderLayer *self)

{
  long *plVar1;
  int iVar2;
  
  TGraphics__SetMasterPixelStage(Graphics,0x15,0,2,0,4);
  TGraphics__SetPixelOutputParams(Graphics,*(float *)(self + 0x410),0.0,0.0,0.0);
  TGraphics__SetPixelColorConstant(Graphics,1,self + 0x400);
  iVar2 = *(int *)(self + 0x420);
  plVar1 = *(long **)(self + 8);
  if (iVar2 == 0) {
    if (plVar1 == (long *)0x0) {
      (**(code **)(**(long **)(*(long *)(self + 0x418) + 0x40) + 0x30))
                (*(long **)(*(long *)(self + 0x418) + 0x40),0);
      goto LAB_0058cf33;
    }
    (**(code **)(*plVar1 + 0x10))(plVar1);
    plVar1 = (long *)plVar1[1];
    iVar2 = *(int *)(self + 0x420);
  }
  (**(code **)(**(long **)(*(long *)(self + 0x418) + 0x40) + 0x30))
            (*(long **)(*(long *)(self + 0x418) + 0x40),iVar2);
  for (; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[1]) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
LAB_0058cf33:
  TGraphics__DeleteMasterPixelStage(Graphics);
  return;
}

/* ======================================================================
 * LevelRenderLayer__LevelRenderLayer  (Ghidra `~LevelRenderLayer` @ 005920f0)
 * Signature: uint8_t __thiscall ~LevelRenderLayer(LevelRenderLayer * self)
 * Class: LevelRenderLayer
 * Calls: `LevelRenderLayer__LevelRenderLayer__00592110`, `RenderLayer__RenderLayer__005988e0`
 * Called by: (none)
 */
/* LevelRenderLayer__LevelRenderLayer__00592110() */

void __thiscall LevelRenderLayer__LevelRenderLayer__00592110(LevelRenderLayer *self)

{
  *(uint8_t ***)self = &PTR__LevelRenderLayer_005dcfb0;
  RenderLayer__RenderLayer__005988e0((RenderLayer *)self);
  return;
}

/* ======================================================================
 * LevelRenderLayer__LevelRenderLayer__00592110  (Ghidra `~LevelRenderLayer` @ 00592110)
 * Signature: uint8_t __thiscall ~LevelRenderLayer(LevelRenderLayer * self)
 * Class: LevelRenderLayer
 * Calls: `RenderLayer__RenderLayer__005988e0`, `operator_delete`
 * Called by: `LevelRenderLayer__LevelRenderLayer`
 */
/* LevelRenderLayer__LevelRenderLayer__00592110() */

void __thiscall LevelRenderLayer__LevelRenderLayer__00592110(LevelRenderLayer *self)

{
  *(uint8_t ***)self = &PTR__LevelRenderLayer_005dcfb0;
  RenderLayer__RenderLayer__005988e0((RenderLayer *)self);
  operator_delete(self);
  return;
}
