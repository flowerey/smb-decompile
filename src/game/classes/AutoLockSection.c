/* src/game/classes/AutoLockSection.c — 2 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "AutoLockSection.h"

/* ======================================================================
 * AutoLockSection__AutoLockSection  (Ghidra `AutoLockSection` @ 005b59b0)
 * Signature: uint8_t __thiscall AutoLockSection(AutoLockSection * self, CriticalSection * arg1)
 * Class: AutoLockSection
 * Calls: `CriticalSection__Lock`
 * Called by: `AddAnimationCallback`, `AddCachedCue`, `AddLayer`, `AnimationManager__RemoveAllCallbacks`, `AnimationManager__UpdateCallbacks`, `BaseResource__Release`, `BloodyTiles__Render`, `BloodyTiles__Reset`, `Create`, `DestroyCachedCue` (+87 more)
 */
/* AutoLockSection__AutoLockSection(CriticalSection*) */

void __thiscall AutoLockSection__AutoLockSection(AutoLockSection *self, CriticalSection *arg1)

{
  *(CriticalSection **)self = arg1;
  CriticalSection__Lock(arg1, 1);
  return;
}

/* ======================================================================
 * AutoLockSection__AutoLockSection__005b59d0  (Ghidra `~AutoLockSection` @ 005b59d0)
 * Signature: uint8_t __thiscall ~AutoLockSection(AutoLockSection * self)
 * Class: AutoLockSection
 * Calls: `CriticalSection__Unlock`
 * Called by: `AddAnimationCallback`, `AddCachedCue`, `AddLayer`, `AnimationManager__RemoveAllCallbacks`, `AnimationManager__UpdateCallbacks`, `BaseResource__Release`, `BloodyTiles__Render`, `BloodyTiles__Reset`, `Create`, `DestroyCachedCue` (+87 more)
 */
/* AutoLockSection__AutoLockSection__005b59d0() */

void __thiscall AutoLockSection__AutoLockSection__005b59d0(AutoLockSection *self)

{
  CriticalSection__Unlock(*(CriticalSection **)self);
  return;
}
