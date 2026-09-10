/* src/game/classes/SceneObject.c — 2 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "SceneObject.h"

/* ======================================================================
 * SceneObject__SceneObject  (Ghidra `~SceneObject` @ 00468c10)
 * Signature: uint8_t __thiscall ~SceneObject(SceneObject * self)
 * Class: SceneObject
 * Calls: `SceneObject__SceneObject__00468c40`
 * Called by: (none)
 */
/* SceneObject__SceneObject__00468c40() */

void __thiscall SceneObject__SceneObject__00468c40(SceneObject *self)

{
  *(uint8_t ***)self = &PTR__SceneObject_005bf710;
  return;
}

/* ======================================================================
 * SceneObject__SceneObject__00468c40  (Ghidra `~SceneObject` @ 00468c40)
 * Signature: uint8_t __thiscall ~SceneObject(SceneObject * self)
 * Class: SceneObject
 * Calls: `operator_delete`
 * Called by: `SceneObject__SceneObject`
 */
/* SceneObject__SceneObject__00468c40() */

void __thiscall SceneObject__SceneObject__00468c40(SceneObject *self)

{
  *(uint8_t ***)self = &PTR__SceneObject_005bf710;
  operator_delete(self);
  return;
}
