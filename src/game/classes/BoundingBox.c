/* src/game/classes/BoundingBox.c — 3 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "BoundingBox.h"

/* ======================================================================
 * BoundingBox__BoundingBox  (Ghidra `BoundingBox` @ 0057dd60)
 * Signature: uint8_t __thiscall BoundingBox(BoundingBox * self, FPUVector * arg1, FPUVector * arg2, TQuaternion * arg3)
 * Class: BoundingBox
 * Calls: `Matrix4x4__operator_assign`
 * Called by: (none)
 */
/* BoundingBox__BoundingBox(FPUVector const&, FPUVector const&, TQuaternion const&) */

void __thiscall BoundingBox__BoundingBox(BoundingBox *self, FPUVector *arg1, FPUVector *arg2,
                                         TQuaternion *arg3)

{
  *(uint32_t *)(self + 4) = 0;
  *(uint32_t *)(self + 8) = 0;
  *(uint32_t *)(self + 0xc) = 0;
  *(uint32_t *)(self + 0x10) = 0;
  *(uint32_t *)(self + 0x14) = 0;
  *(uint32_t *)(self + 0x18) = 0;
  *(uint32_t *)(self + 0x1c) = 0;
  *(uint32_t *)(self + 0x20) = 0;
  *self = (BoundingBox)0x12;
  *(uint32_t *)(self + 0x14) = *(uint32_t *)arg2;
  *(uint32_t *)(self + 0x18) = *(uint32_t *)(arg2 + 4);
  *(uint32_t *)(self + 0x1c) = *(uint32_t *)(arg2 + 8);
  *(uint32_t *)(self + 0x20) = *(uint32_t *)(arg2 + 0xc);
  *(uint32_t *)(self + 4) = *(uint32_t *)arg2;
  *(uint32_t *)(self + 8) = *(uint32_t *)(arg2 + 4);
  *(uint32_t *)(self + 0xc) = *(uint32_t *)(arg2 + 8);
  *(uint32_t *)(self + 0x10) = *(uint32_t *)(arg2 + 0xc);
  Matrix4x4__Transformation3D((Matrix4x4 *)(self + 0x24), (FPUVector *)0x0, arg3, arg1);
  Matrix4x4__operator_assign((Matrix4x4 *)(self + 100), (Matrix4x4 *)(self + 0x24));
  return;
}

/* ======================================================================
 * BoundingBox__Update  (Ghidra `Update` @ 0057dde0)
 * Signature: uint8_t __thiscall Update(BoundingBox * self, FPUVector * arg1, TQuaternion * arg2, FPUVector * arg3)
 * Class: BoundingBox
 * Calls: (none)
 * Called by: `BoundingVolume3D__Update`
 */
/* BoundingBox__Update(FPUVector const&, TQuaternion const&, FPUVector const&) */

void __thiscall BoundingBox__Update(BoundingBox *self, FPUVector *arg1, TQuaternion *arg2,
                                    FPUVector *arg3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  Matrix4x4 *pMVar5;

  fVar1 = *(float *)(self + 0x30);
  fVar2 = *(float *)(self + 0x34);
  fVar3 = *(float *)(self + 0x38);
  fVar4 = *(float *)(self + 0x3c);
  *(uint64_t *)(self + 0x30) = 0;
  *(uint64_t *)(self + 0x38) = 0;
  pMVar5 = (Matrix4x4 *)Matrix4x4__Transformation3D((Matrix4x4 *)(self + 100), (FPUVector *)0x0,
                                                    arg2, arg3);
  Matrix4x4__Multiply((Matrix4x4 *)(self + 100), (Matrix4x4 *)(self + 0x24), pMVar5);
  *(float *)(self + 0x30) = fVar1;
  *(float *)(self + 0x70) = *(float *)(self + 0x70) + fVar1;
  *(float *)(self + 0x34) = fVar2;
  *(float *)(self + 0x38) = fVar3;
  *(float *)(self + 0x3c) = fVar4;
  *(float *)(self + 0x74) = *(float *)(self + 0x74) + fVar2;
  *(float *)(self + 0x78) = *(float *)(self + 0x78) + fVar3;
  *(float *)(self + 0x7c) = *(float *)(self + 0x7c) + fVar4;
  fVar1 = *(float *)(arg1 + 8);
  fVar2 = *(float *)(arg1 + 4);
  fVar3 = *(float *)arg1;
  *(float *)(self + 0x10) = *(float *)(arg1 + 0xc) * *(float *)(self + 0x20);
  *(float *)(self + 0xc) = fVar1 * *(float *)(self + 0x1c);
  *(float *)(self + 8) = fVar2 * *(float *)(self + 0x18);
  *(float *)(self + 4) = fVar3 * *(float *)(self + 0x14);
  return;
}

/* ======================================================================
 * BoundingBox__Change  (Ghidra `Change` @ 0057df60)
 * Signature: uint8_t __thiscall Change(BoundingBox * self, FPUVector * arg1, TQuaternion * arg2, FPUVector * arg3)
 * Class: BoundingBox
 * Calls: `Matrix4x4__operator_assign`
 * Called by: (none)
 */
/* BoundingBox__Change(FPUVector const&, TQuaternion const&, FPUVector const&) */

void __thiscall BoundingBox__Change(BoundingBox *self, FPUVector *arg1, TQuaternion *arg2,
                                    FPUVector *arg3)

{
  *(uint32_t *)(self + 0x14) = *(uint32_t *)arg1;
  *(uint32_t *)(self + 0x18) = *(uint32_t *)(arg1 + 4);
  *(uint32_t *)(self + 0x1c) = *(uint32_t *)(arg1 + 8);
  *(uint32_t *)(self + 0x20) = *(uint32_t *)(arg1 + 0xc);
  *(uint32_t *)(self + 4) = *(uint32_t *)arg1;
  *(uint32_t *)(self + 8) = *(uint32_t *)(arg1 + 4);
  *(uint32_t *)(self + 0xc) = *(uint32_t *)(arg1 + 8);
  *(uint32_t *)(self + 0x10) = *(uint32_t *)(arg1 + 0xc);
  Matrix4x4__Transformation3D((Matrix4x4 *)(self + 0x24), (FPUVector *)0x0, arg2, arg3);
  Matrix4x4__operator_assign((Matrix4x4 *)(self + 100), (Matrix4x4 *)(self + 0x24));
  return;
}
