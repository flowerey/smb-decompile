/* src/game/classes/SMBBoss.c — 7 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "SMBBoss.h"

/* ======================================================================
 * SMBBoss__Reset  (Ghidra `Reset` @ 0048d780)
 * Signature: uint8_t __thiscall Reset(SMBBoss * self)
 * Class: SMBBoss
 * Calls: `GSuperMeatBoy__getChar`, `MeatBoyCharactor__RestoreControls`
 * Called by: `FactoryBoss__Reset`, `FinalBoss__Reset`, `ForestBoss__Reset`, `HellBoss__Reset`, `HospitalBoss__Reset`, `RaptureBoss__RaptureBoss__00483ef0`, `RaptureBoss__Reset`
 */
/* SMBBoss__Reset() */

void __thiscall SMBBoss__Reset(SMBBoss *self)

{
  long lVar1;
  MeatBoyCharactor *this_00;

  *(uint32_t *)(self + 0x38) = 1;
  *(uint32_t *)(self + 0x58) = 1;
  *(uint32_t *)(self + 0x78) = 1;
  *(uint32_t *)(self + 0x98) = 1;
  *(uint32_t *)(self + 0xb8) = 1;
  *(uint32_t *)(self + 0xd8) = 1;
  *(uint32_t *)(self + 0xf8) = 1;
  *(uint32_t *)(self + 0x118) = 1;
  *(uint32_t *)(self + 0x138) = 1;
  *(uint32_t *)(self + 0x158) = 1;
  lVar1 = GSuperMeatBoy__getChar(SuperMeatBoy, 1);
  if (lVar1 != 0) {
    this_00 = (MeatBoyCharactor *)GSuperMeatBoy__getChar(SuperMeatBoy, 1);
    MeatBoyCharactor__RestoreControls(this_00);
    return;
  }
  return;
}

/* ======================================================================
 * SMBBoss__AddWayPoint  (Ghidra `AddWayPoint` @ 0048d820)
 * Signature: uint8_t __thiscall AddWayPoint(SMBBoss * self, Vector2 * arg1, Vector2 * arg2, int arg3, TileLevelSetPiece * arg4)
 * Class: SMBBoss
 * Calls: `Vector2__operator_assign`
 * Called by: (none)
 */
/* SMBBoss__AddWayPoint(Vector2 const&, Vector2 const&, int, TileLevelSetPiece*) */

void __thiscall SMBBoss__AddWayPoint(SMBBoss *self, Vector2 *arg1, Vector2 *arg2, int arg3,
                                     TileLevelSetPiece *arg4)

{
  long lVar1;

  lVar1 = (long)arg3;
  Vector2__operator_assign((Vector2 *)(self + (lVar1 + 1) * 0x20 + 8), arg1);
  Vector2__operator_assign((Vector2 *)(self + (lVar1 + 1) * 0x20 + 0x10), arg2);
  *(uint32_t *)(self + lVar1 * 0x20 + 0x38) = 1;
  *(TileLevelSetPiece **)(self + lVar1 * 0x20 + 0x40) = arg4;
  if (arg3 < *(int *)(self + 0x168)) {
    arg3 = *(int *)(self + 0x168);
  }
  *(int *)(self + 0x168) = arg3;
  return;
}

/* ======================================================================
 * SMBBoss__SMBBoss  (Ghidra `~SMBBoss` @ 0048d8c0)
 * Signature: uint8_t __thiscall ~SMBBoss(SMBBoss * self)
 * Class: SMBBoss
 * Calls: `FlashAnimationLibrary__FlashAnimationLibrary`, `SMBBoss__SMBBoss__0048d920`, `operator_delete`
 * Called by: (none)
 */
/* SMBBoss__SMBBoss__0048d920() */

void __thiscall SMBBoss__SMBBoss__0048d920(SMBBoss *self)

{
  FlashAnimationLibrary *this_00;

  this_00 = *(FlashAnimationLibrary **)(self + 0x20);
  *(uint8_t ***)self = &PTR__SMBBoss_005c18b0;
  if (this_00 != (FlashAnimationLibrary *)0x0) {
    /* try { // try from 0048d8e4 to 0048d8e8 has its CatchHandler @ 0048d907 */
    FlashAnimationLibrary__FlashAnimationLibrary(this_00);
    operator_delete(this_00);
  }
  *(uint8_t ***)self = &PTR__RenderLayerObject_005be670;
  return;
}

/* ======================================================================
 * SMBBoss__SMBBoss__0048d920  (Ghidra `~SMBBoss` @ 0048d920)
 * Signature: uint8_t __thiscall ~SMBBoss(SMBBoss * self)
 * Class: SMBBoss
 * Calls: `FlashAnimationLibrary__FlashAnimationLibrary`, `operator_delete`
 * Called by: `FactoryBoss__FactoryBoss`, `FactoryBoss__FactoryBoss__00468f70`, `FinalBoss__FinalBoss`, `ForestBoss__ForestBoss`, `HellBoss__HellBoss`, `HospitalBoss__HospitalBoss`, `RaptureBoss__RaptureBoss`, `SMBBoss__SMBBoss`
 */
/* SMBBoss__SMBBoss__0048d920() */

void __thiscall SMBBoss__SMBBoss__0048d920(SMBBoss *self)

{
  FlashAnimationLibrary *this_00;

  this_00 = *(FlashAnimationLibrary **)(self + 0x20);
  *(uint8_t ***)self = &PTR__SMBBoss_005c18b0;
  if (this_00 != (FlashAnimationLibrary *)0x0) {
    /* try { // try from 0048d944 to 0048d948 has its CatchHandler @ 0048d96e */
    FlashAnimationLibrary__FlashAnimationLibrary(this_00);
    operator_delete(this_00);
  }
  *(uint8_t ***)self = &PTR__RenderLayerObject_005be670;
  operator_delete(self);
  return;
}

/* ======================================================================
 * SMBBoss__SMBBoss__0048d980  (Ghidra `SMBBoss` @ 0048d980)
 * Signature: uint8_t __thiscall SMBBoss(SMBBoss * self)
 * Class: SMBBoss
 * Calls: (none)
 * Called by: `FactoryBoss__FactoryBoss__00468ff0`, `FinalBoss__FinalBoss__00469560`, `ForestBoss__ForestBoss__0046a890`, `HellBoss__HellBoss__0046bab0`, `HospitalBoss__HospitalBoss__0046d390`, `RaptureBoss__RaptureBoss__00483ef0`
 */
/* SMBBoss__SMBBoss__0048d980() */

void __thiscall SMBBoss__SMBBoss__0048d980(SMBBoss *self)

{
  ulong uVar1;
  int iVar2;
  uint uVar3;
  SMBBoss *pSVar5;
  bool bVar6;
  ulong uVar4;

  pSVar5 = self + 0x28;
  *(uint64_t *)(self + 8) = 0;
  *(uint64_t *)(self + 0x10) = 0;
  *(uint64_t *)(self + 0x18) = 0;
  *(uint8_t ***)self = &PTR__SMBBoss_005c18b0;
  uVar4 = 0x140;
  iVar2 = 0x140;
  bVar6 = ((ulong)pSVar5 & 1) != 0;
  *(uint64_t *)(self + 0x20) = 0;
  *(uint32_t *)(self + 0x168) = 0xffffffff;
  *(uint32_t *)(self + 0x16c) = 0;
  if (bVar6) {
    pSVar5 = self + 0x29;
    self[0x28] = (SMBBoss)0x0;
    uVar4 = 0x13f;
    iVar2 = 0x13f;
  }
  if (((ulong)pSVar5 & 2) == 0) {
    uVar3 = (uint)uVar4;
  } else {
    *(uint16_t *)pSVar5 = 0;
    pSVar5 = pSVar5 + 2;
    uVar3 = iVar2 - 2;
    uVar4 = (ulong)uVar3;
  }
  if (((ulong)pSVar5 & 4) != 0) {
    *(uint32_t *)pSVar5 = 0;
    uVar4 = (ulong)(uVar3 - 4);
    pSVar5 = pSVar5 + 4;
  }
  for (uVar1 = uVar4 >> 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(uint64_t *)pSVar5 = 0;
    pSVar5 = pSVar5 + 8;
  }
  if ((uVar4 & 4) != 0) {
    *(uint32_t *)pSVar5 = 0;
    pSVar5 = pSVar5 + 4;
  }
  if ((uVar4 & 2) != 0) {
    *(uint16_t *)pSVar5 = 0;
    pSVar5 = pSVar5 + 2;
  }
  if (bVar6) {
    *pSVar5 = (SMBBoss)0x0;
  }
  return;
}

/* ======================================================================
 * SMBBoss__WayPointCollision  (Ghidra `WayPointCollision` @ 0048da50)
 * Signature: uint8_t __thiscall WayPointCollision(SMBBoss * self, int arg1, Bounds * arg2)
 * Class: SMBBoss
 * Calls: `BoundingSquare__BoundingSquare`, `IsBoundsTouchingBounds`, `SMBBoss__WayPointCollision__0048da90`
 * Called by: (none)
 */
/* SMBBoss__WayPointCollision__0048da90(int, Bounds*) */

void __thiscall SMBBoss__WayPointCollision__0048da90(SMBBoss *self, int arg1, Bounds *arg2)

{
  BoundingSquare aBStack_a8[160];

  BoundingSquare__BoundingSquare(aBStack_a8, (Vector2 *)(self + ((long)arg1 + 1) * 0x20 + 8), 0.0,
                                 (Vector2 *)(self + ((long)arg1 + 1) * 0x20 + 0x10));
  IsBoundsTouchingBounds((Bounds *)aBStack_a8, arg2);
  return;
}

/* ======================================================================
 * SMBBoss__WayPointCollision__0048da90  (Ghidra `WayPointCollision` @ 0048da90)
 * Signature: uint8_t __thiscall WayPointCollision(SMBBoss * self, int arg1, Vector2 * arg2)
 * Class: SMBBoss
 * Calls: `BoundingSquare__BoundingSquare`, `IsPointWithinBoundingSquare`
 * Called by: `FactoryBoss__Update`, `HospitalBoss__Update`, `SMBBoss__WayPointCollision`
 */
/* SMBBoss__WayPointCollision__0048da90(int, Vector2 const&) */

void __thiscall SMBBoss__WayPointCollision__0048da90(SMBBoss *self, int arg1, Vector2 *arg2)

{
  BoundingSquare aBStack_a8[160];

  BoundingSquare__BoundingSquare(aBStack_a8, (Vector2 *)(self + ((long)arg1 + 1) * 0x20 + 8), 0.0,
                                 (Vector2 *)(self + ((long)arg1 + 1) * 0x20 + 0x10));
  IsPointWithinBoundingSquare(aBStack_a8, arg2);
  return;
}
