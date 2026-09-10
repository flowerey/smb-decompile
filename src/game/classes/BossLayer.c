/* src/game/classes/BossLayer.c — 3 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "BossLayer.h"

/* ======================================================================
 * BossLayer__BossLayer  (Ghidra `~BossLayer` @ 00517ab0)
 * Signature: uint8_t __thiscall ~BossLayer(BossLayer * self)
 * Class: BossLayer
 * Calls: `BossLayer__BossLayer__005182a0`, `RenderLayer__RenderLayer__005988e0`
 * Called by: (none)
 */
/* BossLayer__BossLayer__005182a0() */

void __thiscall BossLayer__BossLayer__005182a0(BossLayer *self)

{
  *(uint8_t ***)self = &PTR__BossLayer_005c9470;
  RenderLayer__RenderLayer__005988e0((RenderLayer *)self);
  return;
}

/* ======================================================================
 * BossLayer__Render  (Ghidra `Render` @ 00517c00)
 * Signature: uint8_t __stdcall Render(void)
 * Class: BossLayer
 * Calls: `Camera__SetCameraMatricies`, `RenderSMBBoss`, `TGraphics__SetRenderState`
 * Called by: (none)
 */
/* BossLayer__Render() */

void BossLayer__Render(void)

{
  TGraphics__SetRenderState(Graphics, '\b', 1);
  TGraphics__SetRenderState(Graphics, '\x05', 4);
  TGraphics__SetRenderState(Graphics, '\x06', 5);
  TGraphics__SetRenderState(Graphics, '\a', 0);
  TGraphics__SetRenderState(Graphics, '\x03', 0);
  TGraphics__SetRenderState(Graphics, '\x01', 7);
  Camera__SetCameraMatricies(*(Camera **)(SuperMeatBoy + 0x38), 1);
  RenderSMBBoss();
  return;
}

/* ======================================================================
 * BossLayer__BossLayer__005182a0  (Ghidra `~BossLayer` @ 005182a0)
 * Signature: uint8_t __thiscall ~BossLayer(BossLayer * self)
 * Class: BossLayer
 * Calls: `RenderLayer__RenderLayer__005988e0`, `operator_delete`
 * Called by: `BossLayer__BossLayer`
 */
/* BossLayer__BossLayer__005182a0() */

void __thiscall BossLayer__BossLayer__005182a0(BossLayer *self)

{
  *(uint8_t ***)self = &PTR__BossLayer_005c9470;
  RenderLayer__RenderLayer__005988e0((RenderLayer *)self);
  operator_delete(self);
  return;
}
