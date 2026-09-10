/* src/game/classes/Plane.c — 3 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "Plane.h"

/* ======================================================================
 * Plane__Plane  (Ghidra `Plane` @ 0057d7b0)
 * Signature: uint8_t __thiscall Plane(Plane * self, FPUVector * arg1, FPUVector * arg2)
 * Class: Plane
 * Calls: (none)
 * Called by: `GLOBAL_sub_I_Plane`
 */
/* Plane__Plane(FPUVector const&, FPUVector const&) */

void __thiscall Plane__Plane(Plane *self, FPUVector *arg1, FPUVector *arg2)

{
  *(uint64_t *)self = *(uint64_t *)arg1;
  *(uint64_t *)(self + 8) = *(uint64_t *)(arg1 + 8);
  *(float *)(self + 0x10) =
      *(float *)(arg2 + 4) * *(float *)(arg1 + 4) + *(float *)arg2 * *(float *)arg1 +
      *(float *)(arg2 + 8) * *(float *)(arg1 + 8) + *(float *)(arg2 + 0xc) * *(float *)(arg1 + 0xc);
  return;
}

/* ======================================================================
 * Plane__GetSignedDistanceFromPlane  (Ghidra `GetSignedDistanceFromPlane` @ 0057d800)
 * Signature: uint8_t __thiscall GetSignedDistanceFromPlane(Plane * self, FPUVector * arg1)
 * Class: Plane
 * Calls: (none)
 * Called by: (none)
 */
/* Plane__GetSignedDistanceFromPlane(FPUVector const&) const */

float __thiscall Plane__GetSignedDistanceFromPlane(Plane *self, FPUVector *arg1)

{
  return (*(float *)(arg1 + 4) * *(float *)(self + 4) + *(float *)arg1 * *(float *)self +
          *(float *)(arg1 + 8) * *(float *)(self + 8) +
          *(float *)(arg1 + 0xc) * *(float *)(self + 0xc)) -
         *(float *)(self + 0x10);
}

/* ======================================================================
 * Plane__GetClosestPointToPlane  (Ghidra `GetClosestPointToPlane` @ 0057d840)
 * Signature: uint8_t __thiscall GetClosestPointToPlane(Plane * self, FPUVector * arg1, FPUVector * arg2)
 * Class: Plane
 * Calls: (none)
 * Called by: (none)
 */
/* Plane__GetClosestPointToPlane(FPUVector const&, FPUVector&) const */

void __thiscall Plane__GetClosestPointToPlane(Plane *self, FPUVector *arg1, FPUVector *arg2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;

  fVar1 = *(float *)(self + 4);
  fVar2 = *(float *)(arg1 + 4);
  fVar3 = *(float *)(self + 8);
  fVar4 = *(float *)(arg1 + 8);
  fVar5 = *(float *)(self + 0xc);
  fVar6 = *(float *)(arg1 + 0xc);
  fVar7 = (fVar1 * fVar2 + *(float *)self * *(float *)arg1 + fVar3 * fVar4 + fVar5 * fVar6) -
          *(float *)(self + 0x10);
  *(float *)arg2 = *(float *)arg1 - *(float *)self * fVar7;
  *(float *)(arg2 + 4) = fVar2 - fVar1 * fVar7;
  *(float *)(arg2 + 8) = fVar4 - fVar3 * fVar7;
  *(float *)(arg2 + 0xc) = fVar6 - fVar7 * fVar5;
  return;
}
