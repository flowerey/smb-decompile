/* src/game/classes/QuakeEmitter.c — 6 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "QuakeEmitter.h"

/* ======================================================================
 * QuakeEmitter__QuakeEmitter  (Ghidra `~QuakeEmitter` @ 00483990)
 * Signature: uint8_t __thiscall ~QuakeEmitter(QuakeEmitter * self)
 * Class: QuakeEmitter
 * Calls: `QuakeEmitter__QuakeEmitter__004839d0`
 * Called by: (none)
 */
/* QuakeEmitter__QuakeEmitter__004839d0() */

void __thiscall QuakeEmitter__QuakeEmitter__004839d0(QuakeEmitter *self)

{
  *(uint8_t ***)self = &PTR__ParticleEmitter_005c12b0;
  return;
}

/* ======================================================================
 * QuakeEmitter__Render  (Ghidra `Render` @ 004839a0)
 * Signature: uint8_t __stdcall Render(void)
 * Class: QuakeEmitter
 * Calls: (none)
 * Called by: (none)
 */
/* QuakeEmitter__Render() */

void QuakeEmitter__Render(void)

{
  return;
}

/* ======================================================================
 * QuakeEmitter__Reset  (Ghidra `Reset` @ 004839c0)
 * Signature: uint8_t __thiscall Reset(QuakeEmitter * self)
 * Class: QuakeEmitter
 * Calls: (none)
 * Called by: (none)
 */
/* QuakeEmitter__Reset() */

void __thiscall QuakeEmitter__Reset(QuakeEmitter *self)

{
  *(uint32_t *)(self + 0x20) = 0;
  return;
}

/* ======================================================================
 * QuakeEmitter__QuakeEmitter__004839d0  (Ghidra `~QuakeEmitter` @ 004839d0)
 * Signature: uint8_t __thiscall ~QuakeEmitter(QuakeEmitter * self)
 * Class: QuakeEmitter
 * Calls: `operator_delete`
 * Called by: `QuakeEmitter__QuakeEmitter`
 */
/* QuakeEmitter__QuakeEmitter__004839d0() */

void __thiscall QuakeEmitter__QuakeEmitter__004839d0(QuakeEmitter *self)

{
  *(uint8_t ***)self = &PTR__ParticleEmitter_005c12b0;
  operator_delete(self);
  return;
}

/* ======================================================================
 * QuakeEmitter__Update  (Ghidra `Update` @ 004839e0)
 * Signature: uint8_t __thiscall Update(QuakeEmitter * self)
 * Class: QuakeEmitter
 * Calls: `SMBCamera__ScreenShake`
 * Called by: (none)
 */
/* QuakeEmitter__Update() */

void __thiscall QuakeEmitter__Update(QuakeEmitter *self)

{
  float fVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *(float *)(self + 0x20);
  fVar4 = (float)*(int *)(self + 0x18);
  fVar3 = (float)*(uint *)(Engine + 4) + fVar1;
  *(float *)(self + 0x20) = fVar3;
  lVar2 = SuperMeatBoy;
  if (fVar4 < fVar3) {
    if ((float)(*(int *)(self + 0x18) + *(int *)(self + 0x1c)) < fVar3) {
      *(uint32_t *)(self + 0x20) = 0;
      SMBCamera__ScreenShake(*(SMBCamera **)(lVar2 + 0x38),0.0,0.0);
      return;
    }
    if (fVar1 <= fVar4) {
      SMBCamera__ScreenShake
                (*(SMBCamera **)(SuperMeatBoy + 0x38),*(float *)(self + 0x14),
                 (float)*(int *)(self + 0x1c) * DAT_005c01c4 /* R:1000.0f */);
      return;
    }
  }
  return;
}

/* ======================================================================
 * QuakeEmitter__QuakeEmitter__00483a70  (Ghidra `QuakeEmitter` @ 00483a70)
 * Signature: uint8_t __thiscall QuakeEmitter(QuakeEmitter * self, QuakeEmitterCreate * arg1)
 * Class: QuakeEmitter
 * Calls: (none)
 * Called by: `GLOBAL_sub_I_QuakeEmitter`, `SMBPalette__FindAnimatedObstacles`
 */
/* QuakeEmitter__QuakeEmitter__00483a70(QuakeEmitterCreate const*) */

void __thiscall QuakeEmitter__QuakeEmitter__00483a70(QuakeEmitter *self,QuakeEmitterCreate *arg1)

{
  *(uint64_t *)(self + 8) = 0;
  *(uint32_t *)(self + 0x10) = 1;
  *(uint8_t ***)self = &PTR__QuakeEmitter_005c1270;
  *(uint32_t *)(self + 0x20) = 0;
  *(uint64_t *)(self + 0x14) = *(uint64_t *)arg1;
  *(uint32_t *)(self + 0x1c) = *(uint32_t *)(arg1 + 8);
  return;
}
