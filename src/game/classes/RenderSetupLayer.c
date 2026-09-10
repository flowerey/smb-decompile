/* src/game/classes/RenderSetupLayer.c — 3 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "RenderSetupLayer.h"

/* ======================================================================
 * RenderSetupLayer__RenderSetupLayer  (Ghidra `~RenderSetupLayer` @ 00517a90)
 * Signature: uint8_t __thiscall ~RenderSetupLayer(RenderSetupLayer * self)
 * Class: RenderSetupLayer
 * Calls: `RenderLayer__RenderLayer__005988e0`, `RenderSetupLayer__RenderSetupLayer__00518220`
 * Called by: (none)
 */
/* RenderSetupLayer__RenderSetupLayer__00518220() */

void __thiscall RenderSetupLayer__RenderSetupLayer__00518220(RenderSetupLayer *self)

{
  *(uint8_t ***)self = &PTR__RenderSetupLayer_005c93f0;
  RenderLayer__RenderLayer__005988e0((RenderLayer *)self);
  return;
}

/* ======================================================================
 * RenderSetupLayer__Render  (Ghidra `Render` @ 00517ca0)
 * Signature: uint8_t __stdcall Render(void)
 * Class: RenderSetupLayer
 * Calls: `Camera__SetCameraMatricies`, `SMBCamera__Update`, `TGraphics__AutoSetViewport`, `TGraphics__Clear`, `TGraphics__DeleteMasterPixelStage`, `TGraphics__ForceAspectRatio`, `TGraphics__RenderToBackBuffer`, `TGraphics__SetRenderState`, `TileLevelLightMap__GenerateLightMap`, `TileLevel__getLevelLayer`
 * Called by: (none)
 */
/* RenderSetupLayer__Render() */

void RenderSetupLayer__Render(void)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  TGraphics__DeleteMasterPixelStage(Graphics);
  TGraphics__ForceAspectRatio(Graphics,0);
  TGraphics__AutoSetViewport();
  TGraphics__Clear(Graphics,(ColorTemplate *)::cNullColor,3);
  TGraphics__ForceAspectRatio(Graphics,1);
  TGraphics__AutoSetViewport();
  TGraphics__SetRenderState(Graphics,'\a',0);
  TGraphics__SetRenderState(Graphics,'\b',1);
  lVar2 = SuperMeatBoy;
  iVar1 = *(int *)(SuperMeatBoy + 0x2c);
  if ((iVar1 == 0) || (iVar1 == 8)) {
    lVar3 = *(long *)(SuperMeatBoy + 0x40);
    bUseLighting = 0;
    if (lVar3 != 0) {
      if ((iVar1 == 0) || (iVar1 == 8)) {
        *(uint32_t *)(lVar3 + 0x22b0) = 1;
        *(uint32_t *)(*(long *)(lVar2 + 0x38) + 0x11b0) = 1;
      }
      else {
        *(uint32_t *)(lVar3 + 0x22b0) = 0;
        *(uint32_t *)(*(long *)(lVar2 + 0x38) + 0x11b0) = 0;
      }
      SMBCamera__Update(*(SMBCamera **)(lVar2 + 0x38));
      if (bUseLighting == 1) {
        TileLevelLightMap__GenerateLightMap(*(TileLevelLightMap **)(SuperMeatBoy + 0x390));
      }
      TGraphics__RenderToBackBuffer(Graphics);
      TGraphics__Clear(Graphics,(ColorTemplate *)::cNullColor,2);
      TGraphics__SetRenderState(Graphics,'\x03',1);
      TGraphics__SetRenderState(Graphics,'\x01',1);
      TGraphics__SetRenderState(Graphics,'\t',1);
      TGraphics__SetRenderState(Graphics,'\n',4);
      TGraphics__SetRenderState(Graphics,'\v',0xfe);
      lVar2 = TileLevel__getLevelLayer(*(TileLevel **)(SuperMeatBoy + 0x40),0);
      lVar3 = TileLevel__getLevelLayer(*(TileLevel **)(SuperMeatBoy + 0x40),2);
      lVar4 = TileLevel__getLevelLayer(*(TileLevel **)(SuperMeatBoy + 0x40),1);
      Camera__SetCameraMatricies(*(Camera **)(SuperMeatBoy + 0x38),1);
      (**(code **)GSuperMeatBoy__pLevelPalette_2)(GSuperMeatBoy__pLevelPalette + 2);
      (**(code **)(*GSuperMeatBoy__pLevelPalette + 0x28))
                (GSuperMeatBoy__pLevelPalette,*(uint64_t *)(lVar3 + 0x438));
      (**(code **)(*GSuperMeatBoy__pLevelPalette + 0x28))
                (GSuperMeatBoy__pLevelPalette,*(uint64_t *)(lVar2 + 0x438));
      (**(code **)(*GSuperMeatBoy__pLevelPalette + 0x28))
                (GSuperMeatBoy__pLevelPalette,*(uint64_t *)(lVar4 + 0x438));
      (**(code **)(GSuperMeatBoy__pLevelPalette_2 + 8))(GSuperMeatBoy__pLevelPalette + 2);
      TGraphics__SetRenderState(Graphics,'\x03',0);
      TGraphics__SetRenderState(Graphics,'\x01',3);
      TGraphics__SetRenderState(Graphics,'\n',7);
      TGraphics__SetRenderState(Graphics,'\t',0);
      goto LAB_00517fae;
    }
  }
  else if (iVar1 == 1) {
    TileLevelLightMap__GenerateLightMap(*(TileLevelLightMap **)(SuperMeatBoy + 0x390));
  }
  TGraphics__SetRenderState(Graphics,'\x03',0);
  TGraphics__SetRenderState(Graphics,'\x01',3);
  TGraphics__SetRenderState(Graphics,'\n',7);
  TGraphics__SetRenderState(Graphics,'\t',0);
  TGraphics__RenderToBackBuffer(Graphics);
LAB_00517fae:
  TGraphics__Clear(Graphics,(ColorTemplate *)::cNullColor,1);
  return;
}

/* ======================================================================
 * RenderSetupLayer__RenderSetupLayer__00518220  (Ghidra `~RenderSetupLayer` @ 00518220)
 * Signature: uint8_t __thiscall ~RenderSetupLayer(RenderSetupLayer * self)
 * Class: RenderSetupLayer
 * Calls: `RenderLayer__RenderLayer__005988e0`, `operator_delete`
 * Called by: `RenderSetupLayer__RenderSetupLayer`
 */
/* RenderSetupLayer__RenderSetupLayer__00518220() */

void __thiscall RenderSetupLayer__RenderSetupLayer__00518220(RenderSetupLayer *self)

{
  *(uint8_t ***)self = &PTR__RenderSetupLayer_005c93f0;
  RenderLayer__RenderLayer__005988e0((RenderLayer *)self);
  operator_delete(self);
  return;
}
