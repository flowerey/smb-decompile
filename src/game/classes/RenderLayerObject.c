/* src/game/classes/RenderLayerObject.c — 2 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "RenderLayerObject.h"

/* ======================================================================
 * RenderLayerObject__RenderLayerObject  (Ghidra `~RenderLayerObject` @ 00463f20)
 * Signature: uint8_t __thiscall ~RenderLayerObject(RenderLayerObject * self)
 * Class: RenderLayerObject
 * Calls: `RenderLayerObject__RenderLayerObject__00463f30`
 * Called by: (none)
 */
/* RenderLayerObject__RenderLayerObject__00463f30() */

void __thiscall RenderLayerObject__RenderLayerObject__00463f30(RenderLayerObject *self)

{
  *(uint8_t ***)self = &PTR__RenderLayerObject_005be670;
  return;
}

/* ======================================================================
 * RenderLayerObject__RenderLayerObject__00463f30  (Ghidra `~RenderLayerObject` @ 00463f30)
 * Signature: uint8_t __thiscall ~RenderLayerObject(RenderLayerObject * self)
 * Class: RenderLayerObject
 * Calls: `operator_delete`
 * Called by: `RenderLayerObject__RenderLayerObject`
 */
/* RenderLayerObject__RenderLayerObject__00463f30() */

void __thiscall RenderLayerObject__RenderLayerObject__00463f30(RenderLayerObject *self)

{
  *(uint8_t ***)self = &PTR__RenderLayerObject_005be670;
  operator_delete(self);
  return;
}
