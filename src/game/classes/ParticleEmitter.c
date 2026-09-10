/* src/game/classes/ParticleEmitter.c — 2 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "ParticleEmitter.h"

/* ======================================================================
 * ParticleEmitter__ParticleEmitter  (Ghidra `~ParticleEmitter` @ 00483aa0)
 * Signature: uint8_t __thiscall ~ParticleEmitter(ParticleEmitter * self)
 * Class: ParticleEmitter
 * Calls: `ParticleEmitter__ParticleEmitter__00483ab0`
 * Called by: (none)
 */
/* ParticleEmitter__ParticleEmitter__00483ab0() */

void __thiscall ParticleEmitter__ParticleEmitter__00483ab0(ParticleEmitter *self)

{
  *(uint8_t ***)self = &PTR__ParticleEmitter_005c12b0;
  return;
}

/* ======================================================================
 * ParticleEmitter__ParticleEmitter__00483ab0  (Ghidra `~ParticleEmitter` @ 00483ab0)
 * Signature: uint8_t __thiscall ~ParticleEmitter(ParticleEmitter * self)
 * Class: ParticleEmitter
 * Calls: `operator_delete`
 * Called by: `ParticleEmitter__ParticleEmitter`
 */
/* ParticleEmitter__ParticleEmitter__00483ab0() */

void __thiscall ParticleEmitter__ParticleEmitter__00483ab0(ParticleEmitter *self)

{
  *(uint8_t ***)self = &PTR__ParticleEmitter_005c12b0;
  operator_delete(self);
  return;
}
