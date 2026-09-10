/* src/game/classes/SMBAnimal.c — 14 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "SMBAnimal.h"

/* ======================================================================
 * SMBAnimal__SMBAnimal__004868a0  (Ghidra `~SMBAnimal` @ 004868a0)
 * Signature: uint8_t __thiscall ~SMBAnimal(SMBAnimal * self)
 * Class: SMBAnimal
 * Calls: `SMBAnimal__SMBAnimal__004868b0`, `SceneObject2D__SceneObject2D__0059b220`
 * Called by: (none)
 */
/* SMBAnimal__SMBAnimal__004868b0() */

void __thiscall SMBAnimal__SMBAnimal__004868b0(SMBAnimal *self)

{
  *(uint8_t ***)self = &PTR__SMBAnimal_005c16b0;
  SceneObject2D__SceneObject2D__0059b220((SceneObject2D *)self);
  return;
}

/* ======================================================================
 * SMBAnimal__SMBAnimal__004868b0  (Ghidra `~SMBAnimal` @ 004868b0)
 * Signature: uint8_t __thiscall ~SMBAnimal(SMBAnimal * self)
 * Class: SMBAnimal
 * Calls: `SceneObject2D__SceneObject2D__0059b220`, `operator_delete`
 * Called by: `SMBAnimal__SMBAnimal__004868a0`
 */
/* SMBAnimal__SMBAnimal__004868b0() */

void __thiscall SMBAnimal__SMBAnimal__004868b0(SMBAnimal *self)

{
  *(uint8_t ***)self = &PTR__SMBAnimal_005c16b0;
  SceneObject2D__SceneObject2D__0059b220((SceneObject2D *)self);
  operator_delete(self);
  return;
}

/* ======================================================================
 * SMBAnimal__SMBAnimal__004868d0  (Ghidra `SMBAnimal` @ 004868d0)
 * Signature: uint8_t __thiscall SMBAnimal(SMBAnimal * self)
 * Class: SMBAnimal
 * Calls: `BoundingSquare__BoundingSquare`, `CriticalSection__CriticalSection`, `GetRandomINT`, `Vector2__operator_assign`, `malloc`
 * Called by: `SMBAnimal__SMBAnimal`, `SMBAnimals__CreateAnimal`
 */
/* SMBAnimal__SMBAnimal__004868d0() */

void __thiscall SMBAnimal__SMBAnimal__004868d0(SMBAnimal *self)

{
  ushort uVar1;
  uint64_t uVar2;
  int iVar3;
  uint32_t uVar4;
  void *pvVar5;
  BoundingSquare *this_00;
  long lVar6;
  uint32_t local_58;
  uint32_t local_50;
  uint32_t local_4c;
  uint32_t local_48;
  uint32_t local_44;
  uint32_t local_38;
  uint32_t local_34;
  uint32_t local_28;
  uint32_t local_24;

  *(uint64_t *)(self + 0x48) = 0;
  *(uint32_t *)(self + 0x50) = 1;
  *(uint8_t ***)self = &PTR__SceneObject2D_005dd3d0;
  /* try { // try from 004868f3 to 004868f7 has its CatchHandler @ 00486d7d */
  CriticalSection__CriticalSection((CriticalSection *)(self + 0x58));
  uVar2 = vDefaultStart2D;
  *(uint32_t *)(self + 0x80) = 0;
  *(uint32_t *)(self + 0x84) = 0;
  *(uint32_t *)(self + 0x88) = 0x3f800000;
  *(uint32_t *)(self + 0x8c) = 0;
  *(uint32_t *)(self + 0x90) = 0;
  *(uint32_t *)(self + 0x94) = 0;
  *(uint32_t *)(self + 0x98) = 0;
  *(uint32_t *)(self + 0x9c) = 1;
  *(uint64_t *)(self + 0xa0) = uVar2;
  *(uint64_t *)(self + 0xa8) = uVar2;
  *(uint32_t *)(self + 0xb0) = 0;
  *(uint32_t *)(self + 0xb4) = 0;
  *(uint32_t *)(self + 0xb8) = 0;
  *(uint32_t *)(self + 0xbc) = 0;
  *(uint32_t *)(self + 200) = 0;
  *(uint32_t *)(self + 0xcc) = 0;
  *(uint32_t *)(self + 0xd0) = 0x3f800000;
  *(uint32_t *)(self + 0xd4) = 0x3f800000;
  *(uint32_t *)(self + 0xd8) = 0;
  *(uint32_t *)(self + 0xdc) = 0;
  *(uint32_t *)(self + 0xe0) = 0;
  *(uint32_t *)(self + 0xe4) = 0;
  *(uint32_t *)(self + 0xe8) = 0;
  *(uint32_t *)(self + 0xec) = 0;
  *(uint32_t *)(self + 0xf0) = 0;
  *(uint8_t ***)self = &PTR__SMBAnimal_005c16b0;
  *(uint32_t *)(self + 0x110) = 0x42c80000;
  *(uint32_t *)(self + 0x114) = 0x43480000;
  *(uint32_t *)(self + 0x118) = 0x461c4000;
  *(uint32_t *)(self + 0x11c) = 0;
  *(uint32_t *)(self + 0x120) = 0;
  *(uint32_t *)(self + 0x14c) = 0;
  *(uint32_t *)(self + 0x150) = 0xc3fa0000;
  self[0x15c] = (SMBAnimal)0x11;
  *(uint32_t *)(self + 0x160) = 0x3f800000;
  *(uint32_t *)(self + 0x164) = 0;
  *(uint32_t *)(self + 0x168) = 0;
  *(uint64_t *)(self + 0x170) = 0;
  *(uint64_t *)(self + 0x178) = 0;
  *(uint64_t *)(self + 0x180) = 0;
  *(uint64_t *)(self + 0x188) = 0;
  *(uint32_t *)(self + 400) = 0;
  *(uint32_t *)(self + 0x194) = 0;
  *(uint32_t *)(self + 0x1b8) = 1;
  *(uint64_t *)(self + 0x1c0) = 0;
  *(uint64_t *)(self + 0x1c8) = 0;
  *(uint64_t *)(self + 0x1d0) = 0;
  *(uint64_t *)(self + 0x1d8) = 0;
  *(uint32_t *)(self + 0x1e0) = 0;
  *(uint32_t *)(self + 0x1e4) = 0;
  *(uint32_t *)(self + 0x208) = 1;
  *(uint32_t *)(self + 0x210) = 1;
  *(uint32_t *)(self + 0x218) = 0;
  *(uint32_t *)(self + 0x21c) = 0;
  *(uint32_t *)(self + 0x220) = 0;
  *(uint32_t *)(self + 0x224) = 0;
  local_48 = 0x3f800000;
  local_44 = 0x3f800000;
  /* try { // try from 00486b48 to 00486b4c has its CatchHandler @ 00486d78 */
  Vector2__operator_assign((Vector2 *)(self + 0xd0), (Vector2 *)&local_48);
  local_38 = 0;
  local_34 = 0;
  local_28 = 0x41100000;
  local_24 = 0x41100000;
  this_00 = (BoundingSquare *)0x0;
  pvVar5 = malloc(0xb4);
  if (pvVar5 != (void *)0x0) {
    this_00 = (BoundingSquare *)((long)pvVar5 + 0x10 + (ulong)(-(int)((long)pvVar5 + 0x10) & 0xf));
    *(uint64_t *)(this_00 + -0x10) = 0x94;
    *(void **)(this_00 + -8) = pvVar5;
  }
  /* try { // try from 00486baa to 00486bae has its CatchHandler @ 00486d52 */
  BoundingSquare__BoundingSquare(this_00, (Vector2 *)&local_38, 0.0, (Vector2 *)&local_28);
  *(BoundingSquare **)(self + 0x48) = this_00;
  local_58 = CONCAT31(local_58._1_3_, 0x11);
  *(uint32_t *)(self + 0x160) = 0x41200000;
  local_50 = 0;
  local_4c = 0;
  *(uint32_t *)(self + 0x15c) = local_58;
  /* try { // try from 00486bf0 to 00486d4c has its CatchHandler @ 00486d78 */
  Vector2__operator_assign((Vector2 *)(self + 0x164), (Vector2 *)&local_50);
  if (*(int *)(self + 0x214) == 0x11) {
    *(uint32_t *)(self + 0x118) = 0x47742400;
  } else {
    iVar3 = GetRandomINT(100, 200);
    *(float *)(self + 0x118) = (float)iVar3 * (float)iVar3;
    if (*(int *)(self + 0x214) != 0x11) {
      iVar3 = GetRandomINT(0x96, 0xfa);
      *(float *)(self + 0x110) = (float)iVar3;
      if (*(int *)(self + 0x214) - 6U < 2) {
        *(float *)(self + 0x110) = (float)iVar3 * DAT_005be6e8 /* R:0.25f */;
      }
      goto LAB_00486c67;
    }
  }
  iVar3 = GetRandomINT(0x14, 0x19);
  *(uint *)(self + 0x110) = (uint)(float)iVar3 ^ DAT_005be6f0 /* R:u32=2147483648 */;
  iVar3 = GetRandomINT(200, 0xfa);
  *(float *)(self + 0x114) = (float)iVar3;
LAB_00486c67:
  if (*(int *)(self + 0x218) != 0) {
    uVar4 = 0;
    lVar6 = (long)*(int *)(self + 0x214) * 0x370 + 0x50 + *(long *)(self + 0x230);
    uVar1 = *(ushort *)(lVar6 + 0x28);
    if (uVar1 != 0) {
      uVar4 = GetRandomINT(0, uVar1 - 1);
    }
    *(uint32_t *)(lVar6 + 0x50) = uVar4;
    *(uint32_t *)(self + 0x220) = 0;
    uVar4 = *(uint32_t *)((long)*(int *)(self + 0x214) * 0x370 + *(long *)(self + 0x230) + 0xa0);
    *(uint32_t *)(self + 0x218) = 0;
    *(uint32_t *)(self + 0x228) = 1;
    *(uint32_t *)(self + 0x21c) = uVar4;
  }
  return;
}

/* ======================================================================
 * SMBAnimal__CanJumpOver  (Ghidra `CanJumpOver` @ 00486d90)
 * Signature: uint8_t __thiscall CanJumpOver(SMBAnimal * self, GRIDBLOCK * arg1)
 * Class: SMBAnimal
 * Calls: `TileLevel__GetGridBlock`, `TileLevel__GetGridCoordsFromBlock`
 * Called by: `SMBAnimalGroundCritterUpdate`, `SMBChargerUpdate`
 */
/* SMBAnimal__CanJumpOver(GRIDBLOCK*) */

bool __thiscall SMBAnimal__CanJumpOver(SMBAnimal *self, GRIDBLOCK *arg1)

{
  uint32_t uVar1;
  uint32_t *puVar2;
  char *pcVar3;
  bool bVar4;
  char local_28;
  int local_10;
  int local_c[3];

  bVar4 = false;
  if (arg1 != (GRIDBLOCK *)0x0) {
    TileLevel__GetGridCoordsFromBlock(*(TileLevel **)(SuperMeatBoy + 0x40), arg1, &local_10,
                                      local_c);
    puVar2 = (uint32_t *)TileLevel__GetGridBlock(*(TileLevel **)(SuperMeatBoy + 0x40), local_10,
                                                 local_c[0] + 2, 0);
    uVar1 = *puVar2;
    pcVar3 = (char *)TileLevel__GetGridBlock(*(TileLevel **)(SuperMeatBoy + 0x40), local_10,
                                             local_c[0] + 3, 0);
    bVar4 = true;
    if (*pcVar3 != '\0') {
      local_28 = (char)uVar1;
      return local_28 == '\0';
    }
  }
  return bVar4;
}

/* ======================================================================
 * SMBAnimal__CanJumpDown  (Ghidra `CanJumpDown` @ 00486e20)
 * Signature: uint8_t __thiscall CanJumpDown(SMBAnimal * self)
 * Class: SMBAnimal
 * Calls: `GetRandomINT`
 * Called by: (none)
 */
/* SMBAnimal__CanJumpDown() */

bool __thiscall SMBAnimal__CanJumpDown(SMBAnimal *self)

{
  bool bVar1;
  int iVar2;

  bVar1 = true;
  if ((*(int *)(self + 0x210) != 0) && (bVar1 = false, *(int *)(self + 0x210) == 1)) {
    iVar2 = GetRandomINT(0, 500);
    return iVar2 == 0x96;
  }
  return bVar1;
}

/* ======================================================================
 * SMBAnimal__GetHorzSpeed  (Ghidra `GetHorzSpeed` @ 00486e60)
 * Signature: uint8_t __thiscall GetHorzSpeed(SMBAnimal * self)
 * Class: SMBAnimal
 * Calls: `GetRandomINT`
 * Called by: (none)
 */
/* SMBAnimal__GetHorzSpeed() */

float __thiscall SMBAnimal__GetHorzSpeed(SMBAnimal *self)

{
  int iVar1;
  float fVar2;

  if (*(int *)(self + 0x214) == 0x11) {
    iVar1 = GetRandomINT(0x14, 0x19);
    *(uint *)(self + 0x110) = (uint)(float)iVar1 ^ DAT_005be6f0 /* R:u32=2147483648 */;
    iVar1 = GetRandomINT(200, 0xfa);
    *(float *)(self + 0x114) = (float)iVar1;
    return *(float *)(self + 0x110);
  }
  iVar1 = GetRandomINT(0x96, 0xfa);
  fVar2 = (float)iVar1;
  *(float *)(self + 0x110) = fVar2;
  if (1 < *(int *)(self + 0x214) - 6U) {
    return fVar2;
  }
  fVar2 = fVar2 * DAT_005be6e8 /* R:0.25f */;
  *(float *)(self + 0x110) = fVar2;
  return fVar2;
}

/* ======================================================================
 * SMBAnimal__GetSafeDistance  (Ghidra `GetSafeDistance` @ 00486f10)
 * Signature: uint8_t __thiscall GetSafeDistance(SMBAnimal * self)
 * Class: SMBAnimal
 * Calls: `GetRandomINT`
 * Called by: (none)
 */
/* SMBAnimal__GetSafeDistance() */

float __thiscall SMBAnimal__GetSafeDistance(SMBAnimal *self)

{
  int iVar1;
  float fVar2;

  if (*(int *)(self + 0x214) != 0x11) {
    iVar1 = GetRandomINT(100, 200);
    fVar2 = (float)iVar1 * (float)iVar1;
    *(float *)(self + 0x118) = fVar2;
    return fVar2;
  }
  *(uint32_t *)(self + 0x118) = 0x47742400;
  return 62500.0;
}

/* ======================================================================
 * SMBAnimal__GetAnimalState  (Ghidra `GetAnimalState` @ 00488240)
 * Signature: uint8_t __thiscall GetAnimalState(SMBAnimal * self)
 * Class: SMBAnimal
 * Calls: (none)
 * Called by: (none)
 */
/* SMBAnimal__GetAnimalState() */

uint32_t __thiscall SMBAnimal__GetAnimalState(SMBAnimal *self)

{
  return *(uint32_t *)(self + 0x218);
}

/* ======================================================================
 * SMBAnimal__GetAnimalAIState  (Ghidra `GetAnimalAIState` @ 00488250)
 * Signature: uint8_t __thiscall GetAnimalAIState(SMBAnimal * self)
 * Class: SMBAnimal
 * Calls: (none)
 * Called by: `ForestBoss__Update`
 */
/* SMBAnimal__GetAnimalAIState() */

uint32_t __thiscall SMBAnimal__GetAnimalAIState(SMBAnimal *self)

{
  return *(uint32_t *)(self + 0x210);
}

/* ======================================================================
 * SMBAnimal__SetState  (Ghidra `SetState` @ 00488260)
 * Signature: uint8_t __thiscall SetState(SMBAnimal * self, tagSMBAnimalState arg1)
 * Class: SMBAnimal
 * Calls: `GetRandomINT`
 * Called by: `ForestBoss__Update`, `HellBoss__Update`
 */
/* SMBAnimal__SetState(tagSMBAnimalState) */

void __thiscall SMBAnimal__SetState(SMBAnimal *self, int arg2)

{
  ushort uVar1;
  uint32_t uVar2;
  long lVar3;

  if (*(int *)(self + 0x218) != arg2) {
    lVar3 =
        (long)*(int *)(self + 0x214) * 0x370 + 0x50 + (long)arg2 * 0x58 + *(long *)(self + 0x230);
    uVar2 = 0;
    uVar1 = *(ushort *)(lVar3 + 0x28);
    if (uVar1 != 0) {
      uVar2 = GetRandomINT(0, uVar1 - 1);
    }
    *(uint32_t *)(lVar3 + 0x50) = uVar2;
    *(uint32_t *)(self + 0x220) = 0;
    uVar2 = *(uint32_t *)((long)*(int *)(self + 0x214) * 0x370 + (long)arg2 * 0x58 +
                          *(long *)(self + 0x230) + 0xa0);
    *(int *)(self + 0x218) = arg2;
    *(uint32_t *)(self + 0x228) = 1;
    *(uint32_t *)(self + 0x21c) = uVar2;
  }
  return;
}

/* ======================================================================
 * SMBAnimal__Update  (Ghidra `Update` @ 0048aa70)
 * Signature: uint8_t __thiscall Update(SMBAnimal * self)
 * Class: SMBAnimal
 * Calls: `Apply2DPhysics`, `IsPointWithinBoundingSquare`, `SMBAnimalAirCritterUpdate`, `SMBAnimalGroundCritterUpdate`, `SMBAnimalGroundEnemyUpdate`, `SMBBooUpdate`, `SMBBossGroundCritterUpdate`, `SMBChargerUpdate`, `SMBHellBossBoyUpdate`, `TileLevel__TileCollision` (+1 more)
 * Called by: `SMBAnimals__UpdateAnimals`
 */
/* SMBAnimal__Update() */

void __thiscall SMBAnimal__Update(SMBAnimal *self)

{
  uint uVar1;
  long lVar2;
  uint32_t uVar3;
  uint64_t local_68;
  uint64_t local_60;
  uint64_t local_58;
  uint64_t local_50;
  uint32_t local_48;
  uint32_t local_44;
  uint32_t local_20;

  uVar3 = IsPointWithinBoundingSquare((BoundingSquare *)(*(long *)(SuperMeatBoy + 0x38) + 0x140),
                                      (Vector2 *)(self + 0xa0));
  *(uint32_t *)(self + 0x50) = uVar3;
  lVar2 = SuperMeatBoy;
  if (*(int *)(self + 0x210) != 3) {
    uVar1 = *(uint *)(self + 0x214);
    if (uVar1 < 4) {
      SMBAnimalGroundCritterUpdate(self);
    } else if (uVar1 - 4 < 4) {
      SMBAnimalAirCritterUpdate(self);
    } else if (uVar1 - 0xc < 4) {
      *(uint32_t *)(self + 0x98) = 0x3f800000;
      local_20 = 1;
      local_68 = 0;
      local_60 = 0;
      local_58 = 0;
      local_50 = 0;
      local_48 = 0;
      local_44 = 0;
      TileLevel__TileCollision(*(TileLevel **)(lVar2 + 0x40), (SceneObject2D *)self,
                               (TileCollisionInfo *)&local_68);
      Apply2DPhysics((SceneObject2D *)self, fOneFrameTimeStep);
    } else if (uVar1 - 8 < 4) {
      SMBAnimalGroundEnemyUpdate(self);
    } else if (uVar1 == 0x10) {
      SMBBossGroundCritterUpdate(self);
    } else if (uVar1 == 0x11) {
      SMBChargerUpdate(self);
    } else if (uVar1 == 0x12) {
      SMBBooUpdate(self);
    } else if (uVar1 == 0x13) {
      SMBHellBossBoyUpdate(self);
    }
    Vector2__operator_assign((Vector2 *)(self + 0x164), (Vector2 *)(self + 0xa0));
    *(float *)(self + 0x11c) = *(float *)(self + 0x11c) + fOneFrameTimeStep;
  }
  return;
}

/* ======================================================================
 * SMBAnimal__SetAIState  (Ghidra `SetAIState` @ 0048ac00)
 * Signature: uint8_t __thiscall SetAIState(SMBAnimal * self, tagSMBAnimalAIState arg1)
 * Class: SMBAnimal
 * Calls: `GetRandomINT`, `SetAIState`
 * Called by: `ForestBoss__Update`, `HellBoss__Update`, `SMBAnimalGroundCritterUpdate`, `SetAIState`
 */
/* SMBAnimal__SetAIState(tagSMBAnimalAIState) */

void __thiscall SMBAnimal__SetAIState(SMBAnimal *self, int arg2)

{
  int iVar1;

  if (*(int *)(self + 0x210) != arg2) {
    *(int *)(self + 0x210) = arg2;
    *(uint32_t *)(self + 0x11c) = 0;
    if (arg2 == 1) {
      SetAIState();
      return;
    }
    if (arg2 == 2) {
      iVar1 = GetRandomINT(3, 5);
      *(float *)(self + 0x120) = (float)iVar1;
      return;
    }
    *(uint32_t *)(self + 0x120) = 0;
  }
  return;
}

/* ======================================================================
 * SMBAnimal__SetWayPoint  (Ghidra `SetWayPoint` @ 0048ac60)
 * Signature: uint8_t __thiscall SetWayPoint(SMBAnimal * self, int arg1, Vector2 * arg2)
 * Class: SMBAnimal
 * Calls: `Vector2__operator_assign`
 * Called by: `ForestBoss__Update`
 */
/* SMBAnimal__SetWayPoint(int, Vector2 const&) */

void __thiscall SMBAnimal__SetWayPoint(SMBAnimal *self, int arg1, Vector2 *arg2)

{
  Vector2__operator_assign((Vector2 *)(self + (long)arg1 * 8 + 0x124), arg2);
  return;
}

/* ======================================================================
 * SMBAnimal__Reset  (Ghidra `Reset` @ 0048ac80)
 * Signature: uint8_t __thiscall Reset(SMBAnimal * self)
 * Class: SMBAnimal
 * Calls: `GetRandomINT`, `SetAIState`, `Vector2__operator_assign`
 * Called by: `SMBAnimals__Reset`
 */
/* SMBAnimal__Reset() */

void __thiscall SMBAnimal__Reset(SMBAnimal *self)

{
  ushort uVar1;
  uint32_t uVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  SMBAnimal *pSVar8;
  bool bVar9;
  byte bVar10;
  uint32_t local_28;
  uint32_t local_24;

  bVar10 = 0;
  *(uint32_t *)(self + 0x16c) = 0xffffffff;
  if (*(int *)(self + 0x214) - 8U < 4) {
    local_28 = 0;
    local_24 = 0;
    Vector2__operator_assign((Vector2 *)(self + 0xb8), (Vector2 *)&local_28);
  } else {
    Vector2__operator_assign((Vector2 *)(self + 0xb8), (Vector2 *)(self + 0x108));
  }
  *(uint32_t *)(self + 0x110) = *(uint32_t *)(self + 0x108);
  Vector2__operator_assign((Vector2 *)(self + 0xa0), (Vector2 *)(self + 0xf8));
  *(uint32_t *)(self + 0xd8) = 0;
  Vector2__operator_assign((Vector2 *)(self + 0xa8), (Vector2 *)(self + 0xf8));
  Vector2__operator_assign((Vector2 *)(self + 0x14c), (Vector2 *)(self + 0x100));
  pSVar8 = self + 0x170;
  uVar6 = 0x50;
  bVar9 = ((ulong)pSVar8 & 1) != 0;
  if (bVar9) {
    self[0x170] = (SMBAnimal)0x0;
    pSVar8 = self + 0x171;
    uVar6 = 0x4f;
  }
  uVar5 = (uint)uVar6;
  if (((ulong)pSVar8 & 2) != 0) {
    *(uint16_t *)pSVar8 = 0;
    pSVar8 = pSVar8 + 2;
    uVar5 = uVar5 - 2;
    uVar6 = (ulong)uVar5;
  }
  if (((ulong)pSVar8 & 4) != 0) {
    *(uint32_t *)pSVar8 = 0;
    uVar6 = (ulong)(uVar5 - 4);
    pSVar8 = pSVar8 + 4;
  }
  for (uVar3 = uVar6 >> 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(uint64_t *)pSVar8 = 0;
    pSVar8 = pSVar8 + (ulong)bVar10 * -0x10 + 8;
  }
  if ((uVar6 & 4) != 0) {
    *(uint32_t *)pSVar8 = 0;
    pSVar8 = pSVar8 + 4;
  }
  if ((uVar6 & 2) != 0) {
    *(uint16_t *)pSVar8 = 0;
    pSVar8 = pSVar8 + 2;
  }
  if (bVar9) {
    *pSVar8 = (SMBAnimal)0x0;
  }
  pSVar8 = self + 0x1c0;
  uVar6 = 0x50;
  iVar4 = 0x50;
  bVar9 = ((ulong)pSVar8 & 1) != 0;
  if (bVar9) {
    pSVar8 = self + 0x1c1;
    self[0x1c0] = (SMBAnimal)0x0;
    uVar6 = 0x4f;
    iVar4 = 0x4f;
  }
  if (((ulong)pSVar8 & 2) != 0) {
    *(uint16_t *)pSVar8 = 0;
    uVar6 = (ulong)(iVar4 - 2);
    pSVar8 = pSVar8 + 2;
  }
  if (((ulong)pSVar8 & 4) != 0) {
    *(uint32_t *)pSVar8 = 0;
    uVar6 = (ulong)((int)uVar6 - 4);
    pSVar8 = pSVar8 + 4;
  }
  for (uVar3 = uVar6 >> 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(uint64_t *)pSVar8 = 0;
    pSVar8 = pSVar8 + (ulong)bVar10 * -0x10 + 8;
  }
  if ((uVar6 & 4) != 0) {
    *(uint32_t *)pSVar8 = 0;
    pSVar8 = pSVar8 + 4;
  }
  if ((uVar6 & 2) != 0) {
    *(uint16_t *)pSVar8 = 0;
    pSVar8 = pSVar8 + 2;
  }
  if (bVar9) {
    *pSVar8 = (SMBAnimal)0x0;
  }
  if (*(int *)(self + 0x210) != 1) {
    *(uint32_t *)(self + 0x210) = 1;
    *(uint32_t *)(self + 0x11c) = 0;
    SetAIState(self);
  }
  if (*(int *)(self + 0x214) == 8) {
    if (*(int *)(self + 0x218) != 4) {
      lVar7 = *(long *)(self + 0x230);
      uVar2 = 0;
      uVar1 = *(ushort *)(lVar7 + 0x1d58);
      if (uVar1 != 0) {
        uVar2 = GetRandomINT(0, uVar1 - 1);
      }
      *(uint32_t *)(lVar7 + 0x1d80) = uVar2;
      *(uint32_t *)(self + 0x220) = 0;
      uVar2 = *(uint32_t *)((long)*(int *)(self + 0x214) * 0x370 + *(long *)(self + 0x230) + 0x200);
      *(uint32_t *)(self + 0x218) = 4;
      *(uint32_t *)(self + 0x228) = 1;
      *(uint32_t *)(self + 0x21c) = uVar2;
    }
  } else if (*(int *)(self + 0x218) != 0) {
    uVar2 = 0;
    lVar7 = (long)*(int *)(self + 0x214) * 0x370 + 0x50 + *(long *)(self + 0x230);
    uVar1 = *(ushort *)(lVar7 + 0x28);
    if (uVar1 != 0) {
      uVar2 = GetRandomINT(0, uVar1 - 1);
    }
    *(uint32_t *)(lVar7 + 0x50) = uVar2;
    *(uint32_t *)(self + 0x220) = 0;
    uVar2 = *(uint32_t *)((long)*(int *)(self + 0x214) * 0x370 + *(long *)(self + 0x230) + 0xa0);
    *(uint32_t *)(self + 0x218) = 0;
    *(uint32_t *)(self + 0x228) = 1;
    *(uint32_t *)(self + 0x21c) = uVar2;
  }
  *(uint32_t *)(self + 0x224) = 0;
  return;
}
