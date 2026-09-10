/* src/game/classes/ResolutionLayer.c — 3 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "ResolutionLayer.h"

/* ======================================================================
 * ResolutionLayer__Render  (Ghidra `Render` @ 00517a80)
 * Signature: uint8_t __stdcall Render(void)
 * Class: ResolutionLayer
 * Calls: (none)
 * Called by: (none)
 */
/* ResolutionLayer__Render() */

void ResolutionLayer__Render(void)

{
  return;
}

/* ======================================================================
 * ResolutionLayer__ResolutionLayer  (Ghidra `~ResolutionLayer` @ 00517ad0)
 * Signature: uint8_t __thiscall ~ResolutionLayer(ResolutionLayer * self)
 * Class: ResolutionLayer
 * Calls: `RenderLayer__RenderLayer__005988e0`, `ResolutionLayer__ResolutionLayer__00518260`
 * Called by: (none)
 */
/* ResolutionLayer__ResolutionLayer__00518260() */

void __thiscall ResolutionLayer__ResolutionLayer__00518260(ResolutionLayer *self)

{
  *(uint8_t ***)self = &PTR__ResolutionLayer_005c94f0;
  RenderLayer__RenderLayer__005988e0((RenderLayer *)self);
  return;
}

/* ======================================================================
 * ResolutionLayer__ResolutionLayer__00518260  (Ghidra `~ResolutionLayer` @ 00518260)
 * Signature: uint8_t __thiscall ~ResolutionLayer(ResolutionLayer * self)
 * Class: ResolutionLayer
 * Calls: `RenderLayer__RenderLayer__005988e0`, `operator_delete`
 * Called by: `ResolutionLayer__ResolutionLayer`
 */
/* ResolutionLayer__ResolutionLayer__00518260() */

void __thiscall ResolutionLayer__ResolutionLayer__00518260(ResolutionLayer *self)

{
  *(uint8_t ***)self = &PTR__ResolutionLayer_005c94f0;
  RenderLayer__RenderLayer__005988e0((RenderLayer *)self);
  operator_delete(self);
  return;
}
