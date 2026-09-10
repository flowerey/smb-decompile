/* src/game/classes/AnimalLayer.c — 3 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "AnimalLayer.h"

/* ======================================================================
 * AnimalLayer__AnimalLayer  (Ghidra `~AnimalLayer` @ 00517ac0)
 * Signature: uint8_t __thiscall ~AnimalLayer(AnimalLayer * self)
 * Class: AnimalLayer
 * Calls: `AnimalLayer__AnimalLayer__005182c0`, `RenderLayer__RenderLayer__005988e0`
 * Called by: (none)
 */
/* AnimalLayer__AnimalLayer__005182c0() */

void __thiscall AnimalLayer__AnimalLayer__005182c0(AnimalLayer *self)

{
  *(uint8_t ***)self = &PTR__AnimalLayer_005c94b0;
  RenderLayer__RenderLayer__005988e0((RenderLayer *)self);
  return;
}

/* ======================================================================
 * AnimalLayer__Render  (Ghidra `Render` @ 00517af0)
 * Signature: uint8_t __thiscall Render(AnimalLayer * self)
 * Class: AnimalLayer
 * Calls: `Camera__SetCameraMatricies`, `SMBAnimals__RenderAnimals`, `TGraphics__DeleteMasterPixelStage`, `TGraphics__SetMasterPixelStage`, `TGraphics__SetPixelColorConstant`, `TGraphics__SetPixelOutputParams`, `TGraphics__SetRenderState`
 * Called by: (none)
 */
/* AnimalLayer__Render() */

void __thiscall AnimalLayer__Render(AnimalLayer *self)

{
  TGraphics__SetMasterPixelStage(Graphics,0x15,0,2,0,4);
  TGraphics__SetPixelOutputParams(Graphics,*(float *)(self + 0x410),0.0,0.0,0.0);
  TGraphics__SetPixelColorConstant(Graphics,1,self + 0x400);
  TGraphics__SetRenderState(Graphics,'\b',1);
  TGraphics__SetRenderState(Graphics,'\x05',4);
  TGraphics__SetRenderState(Graphics,'\x06',5);
  TGraphics__SetRenderState(Graphics,'\a',0);
  TGraphics__SetRenderState(Graphics,'\x03',0);
  TGraphics__SetRenderState(Graphics,'\x01',7);
  Camera__SetCameraMatricies(*(Camera **)(SuperMeatBoy + 0x38),1);
  SMBAnimals__RenderAnimals(*(SMBAnimals **)(GSuperMeatBoy__pLevelPalette + 0x41e8));
  TGraphics__DeleteMasterPixelStage(Graphics);
  return;
}

/* ======================================================================
 * AnimalLayer__AnimalLayer__005182c0  (Ghidra `~AnimalLayer` @ 005182c0)
 * Signature: uint8_t __thiscall ~AnimalLayer(AnimalLayer * self)
 * Class: AnimalLayer
 * Calls: `RenderLayer__RenderLayer__005988e0`, `operator_delete`
 * Called by: `AnimalLayer__AnimalLayer`
 */
/* AnimalLayer__AnimalLayer__005182c0() */

void __thiscall AnimalLayer__AnimalLayer__005182c0(AnimalLayer *self)

{
  *(uint8_t ***)self = &PTR__AnimalLayer_005c94b0;
  RenderLayer__RenderLayer__005988e0((RenderLayer *)self);
  operator_delete(self);
  return;
}
