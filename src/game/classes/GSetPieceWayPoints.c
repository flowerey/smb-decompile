/* src/game/classes/GSetPieceWayPoints.c — 13 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "GSetPieceWayPoints.h"

/* ======================================================================
 * GSetPieceWayPoints__CreateNewWayPointGroup  (Ghidra `CreateNewWayPointGroup` @ 0059d400)
 * Signature: uint8_t __thiscall CreateNewWayPointGroup(GSetPieceWayPoints * self, TileLevelSetPiece * arg1, int arg2)
 * Class: GSetPieceWayPoints
 * Calls: `CriticalSection__CriticalSection`, `Vector2__operator_assign`, `free`, `malloc`, `memcpy`
 * Called by: `PlaceSetPiece`
 */
/* GSetPieceWayPoints__CreateNewWayPointGroup(TileLevelSetPiece*, int) */

uint64_t *__thiscall GSetPieceWayPoints__CreateNewWayPointGroup(GSetPieceWayPoints *self,
                                                                TileLevelSetPiece *arg1, int arg2)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  uint32_t uVar5;
  void *pvVar6;
  short sVar7;
  void *pvVar8;
  void *pvVar9;
  ulong uVar10;
  ushort uVar11;
  ushort uVar12;
  ushort *puVar13;
  uint32_t *puVar14;
  ulong uVar15;
  uint64_t *puVar16;
  uint64_t *puVar17;
  bool bVar18;
  byte bVar19;
  uint32_t local_48;
  uint32_t local_44;
  uint32_t local_40;
  uint32_t local_3c;

  bVar19 = 0;
  if (*(int *)(self + 0x48) == -0x5eef3582) {
    uVar12 = *(ushort *)(self + 0x28);
    if (*(ushort *)(self + 0x2a) <= uVar12) {
      uVar12 = *(ushort *)(self + 0x2a) + *(short *)(self + 0x34);
      uVar10 = (ulong)(byte)self[0x2c];
      pvVar6 = *(void **)(self + 0x38);
      pvVar8 = (void *)0x0;
      *(ushort *)(self + 0x2a) = uVar12;
      uVar15 = (ulong)uVar12 * 0x70;
      pvVar9 = malloc(uVar10 + 0x10 + uVar15);
      if (pvVar9 != (void *)0x0) {
        pvVar8 =
            (void *)((long)pvVar9 + 0x10U + (uVar10 - ((long)pvVar9 + 0x10U) % uVar10) % uVar10);
        *(ulong *)((long)pvVar8 + -0x10) = uVar15;
        *(void **)((long)pvVar8 + -8) = pvVar9;
        if (pvVar6 != (void *)0x0) {
          uVar10 = *(ulong *)((long)pvVar6 + -0x10);
          if (uVar15 <= *(ulong *)((long)pvVar6 + -0x10)) {
            uVar10 = uVar15;
          }
          memcpy(pvVar8, pvVar6, uVar10);
          free(*(void **)((long)pvVar6 + -8));
        }
      }
      pvVar6 = *(void **)(self + 0x40);
      *(void **)(self + 0x38) = pvVar8;
      if (pvVar6 != (void *)0x0) {
        uVar11 = *(ushort *)(self + 0x2a);
        uVar10 = (ulong)(byte)self[0x2c];
        pvVar8 = (void *)0x0;
        uVar15 = (ulong)uVar11 * 2;
        pvVar9 = malloc(uVar10 + 0x10 + uVar15);
        if (pvVar9 != (void *)0x0) {
          pvVar8 =
              (void *)((long)pvVar9 + 0x10U + (uVar10 - ((long)pvVar9 + 0x10U) % uVar10) % uVar10);
          *(ulong *)((long)pvVar8 + -0x10) = uVar15;
          *(void **)((long)pvVar8 + -8) = pvVar9;
          uVar10 = *(ulong *)((long)pvVar6 + -0x10);
          if (uVar15 <= *(ulong *)((long)pvVar6 + -0x10)) {
            uVar10 = uVar15;
          }
          memcpy(pvVar8, pvVar6, uVar10);
          free(*(void **)((long)pvVar6 + -8));
          uVar11 = *(ushort *)(self + 0x2a);
        }
        uVar12 = *(ushort *)(self + 0x28);
        *(void **)(self + 0x40) = pvVar8;
        if (uVar11 <= uVar12)
          goto LAB_0059d4d6;
        while (true) {
          uVar15 = (ulong)uVar12;
          uVar12 = uVar12 + 1;
          *(uint16_t *)((long)pvVar8 + uVar15 * 2) = 0xffff;
          if (uVar11 <= uVar12)
            break;
          pvVar8 = *(void **)(self + 0x40);
        }
      }
      uVar12 = *(ushort *)(self + 0x28);
    }
  } else {
    uVar15 = (ulong)(byte)self[0x2c];
    *(uint32_t *)(self + 0x30) = 0;
    pvVar8 = malloc(uVar15 + 0x240);
    puVar16 = (uint64_t *)0x0;
    if (pvVar8 != (void *)0x0) {
      puVar16 =
          (uint64_t *)((long)pvVar8 + 0x10U + (uVar15 - ((long)pvVar8 + 0x10U) % uVar15) % uVar15);
      puVar16[-2] = 0x230;
      puVar16[-1] = pvVar8;
    }
    bVar18 = ((ulong)puVar16 & 1) != 0;
    *(uint64_t **)(self + 0x38) = puVar16;
    uVar15 = 0x230;
    if (bVar18) {
      *(uint8_t *)puVar16 = 0;
      uVar15 = 0x22f;
      puVar16 = (uint64_t *)((long)puVar16 + 1);
    }
    if (((ulong)puVar16 & 2) != 0) {
      *(uint16_t *)puVar16 = 0;
      uVar15 = (ulong)((int)uVar15 - 2);
      puVar16 = (uint64_t *)((long)puVar16 + 2);
    }
    if (((ulong)puVar16 & 4) != 0) {
      *(uint32_t *)puVar16 = 0;
      uVar15 = (ulong)((int)uVar15 - 4);
      puVar16 = (uint64_t *)((long)puVar16 + 4);
    }
    for (uVar10 = uVar15 >> 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *puVar16 = 0;
      puVar16 = puVar16 + (ulong)bVar19 * -2 + 1;
    }
    if ((uVar15 & 4) != 0) {
      *(uint32_t *)puVar16 = 0;
      puVar16 = (uint64_t *)((long)puVar16 + 4);
    }
    if ((uVar15 & 2) != 0) {
      *(uint16_t *)puVar16 = 0;
      puVar16 = (uint64_t *)((long)puVar16 + 2);
    }
    if (bVar18) {
      *(uint8_t *)puVar16 = 0;
    }
    *(uint16_t *)(self + 0x28) = 0;
    *(uint16_t *)(self + 0x2a) = 5;
    uVar12 = 0;
    *(uint32_t *)(self + 0x48) = 0xa110ca7e;
    *(uint16_t *)(self + 0x34) = 5;
  }
LAB_0059d4d6:
  if ((*(int *)(self + 0x30) == 1) && (*(short *)(self + 0x2a) != 0)) {
    puVar13 = *(ushort **)(self + 0x40);
    sVar7 = 1;
    uVar11 = *puVar13;
    while (uVar11 != 0xffff) {
      puVar13 = puVar13 + 1;
      if (sVar7 == *(short *)(self + 0x2a))
        goto LAB_0059d4e0;
      sVar7 = sVar7 + 1;
      uVar11 = *puVar13;
    }
    *puVar13 = uVar12;
    uVar12 = *(ushort *)(self + 0x28);
  }
LAB_0059d4e0:
  uVar15 = 0x70;
  *(ushort *)(self + 0x28) = uVar12 + 1;
  puVar16 = (uint64_t *)(((ulong)(ushort)(uVar12 + 1) - 1) * 0x70 + *(long *)(self + 0x38));
  bVar18 = ((ulong)puVar16 & 1) != 0;
  if (bVar18) {
    *(uint8_t *)puVar16 = 0;
    uVar15 = 0x6f;
    puVar16 = (uint64_t *)((long)puVar16 + 1);
  }
  if (((ulong)puVar16 & 2) != 0) {
    *(uint16_t *)puVar16 = 0;
    uVar15 = (ulong)((int)uVar15 - 2);
    puVar16 = (uint64_t *)((long)puVar16 + 2);
  }
  if (((ulong)puVar16 & 4) != 0) {
    *(uint32_t *)puVar16 = 0;
    uVar15 = (ulong)((int)uVar15 - 4);
    puVar16 = (uint64_t *)((long)puVar16 + 4);
  }
  for (uVar10 = uVar15 >> 3; uVar10 != 0; uVar10 = uVar10 - 1) {
    *puVar16 = 0;
    puVar16 = puVar16 + (ulong)bVar19 * -2 + 1;
  }
  if ((uVar15 & 4) != 0) {
    *(uint32_t *)puVar16 = 0;
    puVar16 = (uint64_t *)((long)puVar16 + 4);
  }
  if ((uVar15 & 2) != 0) {
    *(uint16_t *)puVar16 = 0;
    puVar16 = (uint64_t *)((long)puVar16 + 2);
  }
  if (bVar18) {
    *(uint8_t *)puVar16 = 0;
  }
  puVar16 = (uint64_t *)(((ulong) * (ushort *)(self + 0x28) - 1) * 0x70 + *(long *)(self + 0x38));
  if (puVar16 != (uint64_t *)0x0) {
    *puVar16 = 0;
    *(uint32_t *)(puVar16 + 1) = 0;
    CriticalSection__CriticalSection((CriticalSection *)(puVar16 + 2));
    *(uint16_t *)((long)puVar16 + 0x3a) = 0;
    *(uint16_t *)(puVar16 + 7) = 0;
    *(uint16_t *)((long)puVar16 + 0x44) = 1;
    puVar16[9] = 0;
    puVar16[10] = 0;
    *(uint32_t *)(puVar16 + 0xb) = 0;
    *(uint8_t *)((long)puVar16 + 0x3c) = 4;
    *(uint32_t *)(puVar16 + 8) = 0;
  }
  *puVar16 = arg1;
  if (arg2 != 1) {
    return puVar16;
  }
  uVar1 = *(uint32_t *)(arg1 + 0x3c);
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  Vector2__operator_assign((Vector2 *)&local_48, (Vector2 *)(arg1 + 0x34));
  uVar2 = *(uint32_t *)(arg1 + 0x24);
  local_3c = 0;
  uVar3 = *(uint32_t *)(arg1 + 0x28);
  uVar4 = *(uint32_t *)(arg1 + 0x2c);
  uVar5 = *(uint32_t *)(arg1 + 0x30);
  uVar12 = *(ushort *)(puVar16 + 7);
  if (9 < uVar12) {
    return puVar16;
  }
  local_40 = uVar1;
  if (*(int *)(puVar16 + 0xb) == -0x5eef3582) {
    if (*(ushort *)((long)puVar16 + 0x3a) <= uVar12) {
      uVar12 = *(ushort *)((long)puVar16 + 0x3a) + *(short *)((long)puVar16 + 0x44);
      uVar10 = (ulong) * (byte *)((long)puVar16 + 0x3c);
      pvVar8 = (void *)0x0;
      pvVar6 = (void *)puVar16[9];
      *(ushort *)((long)puVar16 + 0x3a) = uVar12;
      uVar15 = (ulong)uVar12 * 0x20;
      pvVar9 = malloc(uVar10 + 0x10 + uVar15);
      if (pvVar9 != (void *)0x0) {
        pvVar8 =
            (void *)((long)pvVar9 + 0x10U + (uVar10 - ((long)pvVar9 + 0x10U) % uVar10) % uVar10);
        *(ulong *)((long)pvVar8 + -0x10) = uVar15;
        *(void **)((long)pvVar8 + -8) = pvVar9;
        if (pvVar6 != (void *)0x0) {
          uVar10 = *(ulong *)((long)pvVar6 + -0x10);
          if (uVar15 <= *(ulong *)((long)pvVar6 + -0x10)) {
            uVar10 = uVar15;
          }
          memcpy(pvVar8, pvVar6, uVar10);
          free(*(void **)((long)pvVar6 + -8));
        }
      }
      pvVar6 = (void *)puVar16[10];
      puVar16[9] = pvVar8;
      if (pvVar6 != (void *)0x0) {
        uVar10 = (ulong) * (byte *)((long)puVar16 + 0x3c);
        pvVar8 = (void *)0x0;
        uVar15 = (ulong) * (ushort *)((long)puVar16 + 0x3a) * 2;
        pvVar9 = malloc(uVar10 + 0x10 + uVar15);
        if (pvVar9 != (void *)0x0) {
          pvVar8 =
              (void *)((long)pvVar9 + 0x10U + (uVar10 - ((long)pvVar9 + 0x10U) % uVar10) % uVar10);
          *(ulong *)((long)pvVar8 + -0x10) = uVar15;
          *(void **)((long)pvVar8 + -8) = pvVar9;
          uVar10 = *(ulong *)((long)pvVar6 + -0x10);
          if (uVar15 <= *(ulong *)((long)pvVar6 + -0x10)) {
            uVar10 = uVar15;
          }
          memcpy(pvVar8, pvVar6, uVar10);
          free(*(void **)((long)pvVar6 + -8));
        }
        uVar12 = *(ushort *)(puVar16 + 7);
        uVar11 = *(ushort *)((long)puVar16 + 0x3a);
        puVar16[10] = pvVar8;
        if (uVar11 <= uVar12)
          goto LAB_0059d91f;
        while (true) {
          uVar15 = (ulong)uVar12;
          uVar12 = uVar12 + 1;
          *(uint16_t *)((long)pvVar8 + uVar15 * 2) = 0xffff;
          if (uVar11 <= uVar12)
            break;
          pvVar8 = (void *)puVar16[10];
        }
      }
      uVar12 = *(ushort *)(puVar16 + 7);
    }
  } else {
    uVar15 = (ulong) * (byte *)((long)puVar16 + 0x3c);
    *(uint32_t *)(puVar16 + 8) = 0;
    pvVar8 = malloc(uVar15 + 0xb0);
    puVar17 = (uint64_t *)0x0;
    if (pvVar8 != (void *)0x0) {
      puVar17 =
          (uint64_t *)((long)pvVar8 + 0x10U + (uVar15 - ((long)pvVar8 + 0x10U) % uVar15) % uVar15);
      puVar17[-2] = 0xa0;
      puVar17[-1] = pvVar8;
    }
    bVar18 = ((ulong)puVar17 & 1) != 0;
    puVar16[9] = puVar17;
    uVar15 = 0xa0;
    if (bVar18) {
      *(uint8_t *)puVar17 = 0;
      uVar15 = 0x9f;
      puVar17 = (uint64_t *)((long)puVar17 + 1);
    }
    if (((ulong)puVar17 & 2) != 0) {
      *(uint16_t *)puVar17 = 0;
      uVar15 = (ulong)((int)uVar15 - 2);
      puVar17 = (uint64_t *)((long)puVar17 + 2);
    }
    if (((ulong)puVar17 & 4) != 0) {
      *(uint32_t *)puVar17 = 0;
      uVar15 = (ulong)((int)uVar15 - 4);
      puVar17 = (uint64_t *)((long)puVar17 + 4);
    }
    for (uVar10 = uVar15 >> 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *puVar17 = 0;
      puVar17 = puVar17 + (ulong)bVar19 * -2 + 1;
    }
    if ((uVar15 & 4) != 0) {
      *(uint32_t *)puVar17 = 0;
      puVar17 = (uint64_t *)((long)puVar17 + 4);
    }
    if ((uVar15 & 2) != 0) {
      *(uint16_t *)puVar17 = 0;
      puVar17 = (uint64_t *)((long)puVar17 + 2);
    }
    if (bVar18) {
      *(uint8_t *)puVar17 = 0;
    }
    *(uint16_t *)(puVar16 + 7) = 0;
    *(uint16_t *)((long)puVar16 + 0x3a) = 5;
    uVar12 = 0;
    *(uint32_t *)(puVar16 + 0xb) = 0xa110ca7e;
    *(uint16_t *)((long)puVar16 + 0x44) = 5;
  }
LAB_0059d91f:
  if ((*(int *)(puVar16 + 8) == 1) && (*(short *)((long)puVar16 + 0x3a) != 0)) {
    puVar13 = (ushort *)puVar16[10];
    sVar7 = 1;
    uVar11 = *puVar13;
    while (uVar11 != 0xffff) {
      puVar13 = puVar13 + 1;
      if (sVar7 == *(short *)((long)puVar16 + 0x3a))
        goto LAB_0059d929;
      sVar7 = sVar7 + 1;
      uVar11 = *puVar13;
    }
    *puVar13 = uVar12;
    uVar12 = *(ushort *)(puVar16 + 7);
  }
LAB_0059d929:
  puVar14 = (uint32_t *)((ulong)uVar12 * 0x20 + puVar16[9]);
  *puVar14 = uVar2;
  puVar14[1] = uVar3;
  puVar14[2] = uVar4;
  puVar14[3] = uVar5;
  Vector2__operator_assign((Vector2 *)(puVar14 + 4), (Vector2 *)&local_48);
  puVar14[6] = local_40;
  puVar14[7] = local_3c;
  *(short *)(puVar16 + 7) = *(short *)(puVar16 + 7) + 1;
  return puVar16;
}

/* ======================================================================
 * GSetPieceWayPoints__GetWayPointGroup  (Ghidra `GetWayPointGroup` @ 0059dbb0)
 * Signature: uint8_t __thiscall GetWayPointGroup(GSetPieceWayPoints * self, TileLevelSetPiece * arg1)
 * Class: GSetPieceWayPoints
 * Calls: (none)
 * Called by: `ApplyPlatformVelocity`, `PlaceSetPiece`, `RemoveSetPieces`, `SMBEditor__RenderSetPieceInfo`, `SMBPalette__PlatformCollision`, `SMBPalette__PlatformDeath`
 */
/* GSetPieceWayPoints__GetWayPointGroup(TileLevelSetPiece const*) */

long *__thiscall GSetPieceWayPoints__GetWayPointGroup(GSetPieceWayPoints *self,
                                                      TileLevelSetPiece *arg1)

{
  long *plVar1;
  TileLevelSetPiece *pTVar2;
  long *plVar3;
  uint uVar4;
  ulong uVar5;

  plVar3 = (long *)0x0;
  if (*(ushort *)(self + 0x28) != 0) {
    plVar1 = *(long **)(self + 0x38);
    uVar5 = 0;
    pTVar2 = (TileLevelSetPiece *)*plVar1;
    plVar3 = plVar1;
    while (pTVar2 != arg1) {
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulong)uVar4;
      if ((int)(uint) * (ushort *)(self + 0x28) <= (int)uVar4) {
        return (long *)0x0;
      }
      plVar3 = plVar1 + (uVar5 & 0xffff) * 0xe;
      pTVar2 = (TileLevelSetPiece *)*plVar3;
    }
  }
  return plVar3;
}

/* ======================================================================
 * GSetPieceWayPoints__Update  (Ghidra `Update` @ 0059dc00)
 * Signature: uint8_t __thiscall Update(GSetPieceWayPoints * self)
 * Class: GSetPieceWayPoints
 * Calls: `SetPieceWayPointGroup__UpdateParent`
 * Called by: `GSuperMeatBoy__Update__00516690`
 */
/* GSetPieceWayPoints__Update() */

void __thiscall GSetPieceWayPoints__Update(GSetPieceWayPoints *self)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;

  if (*(short *)(self + 0x28) != 0) {
    uVar2 = 0;
    do {
      uVar3 = uVar2 & 0xffff;
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulong)uVar1;
      SetPieceWayPointGroup__UpdateParent(
          (SetPieceWayPointGroup *)(uVar3 * 0x70 + *(long *)(self + 0x38)));
    } while ((int)uVar1 < (int)(uint) * (ushort *)(self + 0x28));
  }
  return;
}

/* ======================================================================
 * GSetPieceWayPoints__EditorUpdate  (Ghidra `EditorUpdate` @ 0059dc50)
 * Signature: uint8_t __thiscall EditorUpdate(GSetPieceWayPoints * self)
 * Class: GSetPieceWayPoints
 * Calls: `Vector2__operator_assign`
 * Called by: `SMBEditor__Update`
 */
/* GSetPieceWayPoints__EditorUpdate() */

void __thiscall GSetPieceWayPoints__EditorUpdate(GSetPieceWayPoints *self)

{
  long lVar1;
  uint32_t *puVar2;
  ushort uVar3;
  long *plVar4;
  uint uVar5;
  ulong uVar6;

  uVar3 = *(ushort *)(self + 0x28);
  if (uVar3 != 0) {
    uVar6 = 0;
    do {
      plVar4 = (long *)((uVar6 & 0xffff) * 0x70 + *(long *)(self + 0x38));
      lVar1 = *plVar4;
      if (lVar1 != 0) {
        puVar2 = (uint32_t *)plVar4[9];
        *puVar2 = *(uint32_t *)(lVar1 + 0x24);
        puVar2[1] = *(uint32_t *)(lVar1 + 0x28);
        puVar2[2] = *(uint32_t *)(lVar1 + 0x2c);
        puVar2[3] = *(uint32_t *)(lVar1 + 0x30);
        Vector2__operator_assign((Vector2 *)(plVar4[9] + 0x10), (Vector2 *)(*plVar4 + 0x34));
        *(uint32_t *)(plVar4[9] + 0x18) = *(uint32_t *)(*plVar4 + 0x3c);
        uVar3 = *(ushort *)(self + 0x28);
      }
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulong)uVar5;
    } while ((int)uVar5 < (int)(uint)uVar3);
  }
  return;
}

/* ======================================================================
 * GSetPieceWayPoints__RenderGroup  (Ghidra `RenderGroup` @ 0059dce0)
 * Signature: uint8_t __thiscall RenderGroup(GSetPieceWayPoints * self, SetPieceWayPointGroup * arg1)
 * Class: GSetPieceWayPoints
 * Calls: `SetPieceWayPointGroup__Render`
 * Called by: (none)
 */
/* GSetPieceWayPoints__RenderGroup(SetPieceWayPointGroup*) */

void __thiscall GSetPieceWayPoints__RenderGroup(GSetPieceWayPoints *self,
                                                SetPieceWayPointGroup *arg1)

{
  if (arg1 != (SetPieceWayPointGroup *)0x0) {
    SetPieceWayPointGroup__Render(arg1, 1);
    return;
  }
  return;
}

/* ======================================================================
 * GSetPieceWayPoints__EditorRender  (Ghidra `EditorRender` @ 0059dd00)
 * Signature: uint8_t __thiscall EditorRender(GSetPieceWayPoints * self, SetPieceWayPointGroup * arg1)
 * Class: GSetPieceWayPoints
 * Calls: `SetPieceWayPointGroup__Render`
 * Called by: `SMBEditor__RenderSetPieceInfo`
 */
/* GSetPieceWayPoints__EditorRender(SetPieceWayPointGroup*) */

void __thiscall GSetPieceWayPoints__EditorRender(GSetPieceWayPoints *self,
                                                 SetPieceWayPointGroup *arg1)

{
  uint uVar1;
  ulong uVar2;
  SetPieceWayPointGroup *this_00;

  if (*(short *)(self + 0x28) != 0) {
    uVar2 = 0;
    do {
      this_00 = (SetPieceWayPointGroup *)((uVar2 & 0xffff) * 0x70 + *(long *)(self + 0x38));
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulong)uVar1;
      SetPieceWayPointGroup__Render(this_00, (uint)(arg1 == this_00));
    } while ((int)uVar1 < (int)(uint) * (ushort *)(self + 0x28));
  }
  return;
}

/* ======================================================================
 * GSetPieceWayPoints__ClearWayPointGroup  (Ghidra `ClearWayPointGroup` @ 0059dd50)
 * Signature: uint8_t __thiscall ClearWayPointGroup(GSetPieceWayPoints * self, TileLevelSetPiece * arg1)
 * Class: GSetPieceWayPoints
 * Calls: `Vector2__operator_assign`, `free`
 * Called by: `RemoveSetPieces`
 */
/* GSetPieceWayPoints__ClearWayPointGroup(TileLevelSetPiece const*) */

void __thiscall GSetPieceWayPoints__ClearWayPointGroup(GSetPieceWayPoints *self,
                                                       TileLevelSetPiece *arg1)

{
  uint64_t *puVar1;
  ushort *puVar2;
  uint64_t *puVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  long *plVar10;
  ushort uVar11;
  uint uVar12;
  long lVar13;
  long lVar14;

  uVar6 = (uint) * (ushort *)(self + 0x28);
  if (*(ushort *)(self + 0x28) != 0) {
    lVar13 = 0x70;
    uVar9 = 0;
    do {
      plVar10 = (long *)((uVar9 & 0xffff) * 0x70 + *(long *)(self + 0x38));
      uVar7 = uVar6 & 0xffff;
      uVar8 = (uint)uVar9;
      if ((TileLevelSetPiece *)*plVar10 == arg1) {
        if ((int)plVar10[0xb] == -0x5eef3582) {
          *(uint32_t *)(plVar10 + 0xb) = 0;
          free(*(void **)(plVar10[9] + -8));
          if ((int)plVar10[8] == 1) {
            free(*(void **)(plVar10[10] + -8));
          }
          *(uint32_t *)(plVar10 + 0xb) = 0;
          *(uint16_t *)((long)plVar10 + 0x3a) = 0;
          *(uint16_t *)(plVar10 + 7) = 0;
          plVar10[9] = 0;
          plVar10[10] = 0;
        }
        *plVar10 = 0;
        uVar12 = (uint) * (ushort *)(self + 0x28);
        if ((uVar8 + 1 < uVar12) &&
            (lVar14 = lVar13, uVar6 = uVar8, (int)uVar8 < (int)(uVar12 - 1))) {
          do {
            puVar1 = (uint64_t *)(*(long *)(self + 0x38) + lVar14);
            puVar3 = (uint64_t *)(*(long *)(self + 0x38) + -0x70 + lVar14);
            *puVar3 = *puVar1;
            *(uint32_t *)(puVar3 + 1) = *(uint32_t *)(puVar1 + 1);
            *(uint32_t *)((long)puVar3 + 0xc) = *(uint32_t *)((long)puVar1 + 0xc);
            puVar3[2] = puVar1[2];
            puVar3[3] = puVar1[3];
            puVar3[4] = puVar1[4];
            puVar3[5] = puVar1[5];
            puVar3[6] = puVar1[6];
            puVar3[7] = puVar1[7];
            puVar3[8] = puVar1[8];
            puVar3[9] = puVar1[9];
            puVar3[10] = puVar1[10];
            *(uint32_t *)(puVar3 + 0xb) = *(uint32_t *)(puVar1 + 0xb);
            Vector2__operator_assign((Vector2 *)(puVar3 + 0xc), (Vector2 *)(puVar1 + 0xc));
            Vector2__operator_assign((Vector2 *)(puVar3 + 0xd), (Vector2 *)(puVar1 + 0xd));
            uVar12 = (uint) * (ushort *)(self + 0x28);
            uVar6 = uVar6 + 1;
            lVar14 = lVar14 + 0x70;
          } while ((int)uVar6 < (int)(uVar12 - 1));
        }
        if ((*(int *)(self + 0x30) == 1) && (uVar11 = *(ushort *)(self + 0x2a), uVar11 != 0)) {
          uVar5 = 0;
          do {
            while (true) {
              puVar2 = (ushort *)(*(long *)(self + 0x40) + (ulong)uVar5 * 2);
              uVar4 = *puVar2;
              if (uVar8 != uVar4)
                break;
              *puVar2 = 0xffff;
              uVar11 = *(ushort *)(self + 0x2a);
              uVar5 = uVar5 + 1;
              if (uVar11 <= uVar5)
                goto LAB_0059df34;
            }
            if ((uVar8 < uVar4) && ((ushort)(uVar4 - 1) < 0xfffe)) {
              *puVar2 = uVar4 - 1;
              uVar11 = *(ushort *)(self + 0x2a);
            }
            uVar5 = uVar5 + 1;
          } while (uVar5 < uVar11);
        LAB_0059df34:
          uVar11 = *(ushort *)(self + 0x28);
          uVar12 = (uint)uVar11;
        } else {
          uVar11 = (ushort)uVar12;
        }
        uVar7 = 0;
        uVar6 = 0;
        if (uVar11 != 0) {
          uVar6 = uVar12 - 1;
          uVar7 = uVar6 & 0xffff;
        }
        *(short *)(self + 0x28) = (short)uVar6;
      }
      uVar9 = (ulong)(uVar8 + 1);
      lVar13 = lVar13 + 0x70;
    } while ((int)(uVar8 + 1) < (int)uVar7);
  }
  return;
}

/* ======================================================================
 * GSetPieceWayPoints__ClearAllWayPointGroups  (Ghidra `ClearAllWayPointGroups` @ 0059dfb0)
 * Signature: uint8_t __thiscall ClearAllWayPointGroups(GSetPieceWayPoints * self)
 * Class: GSetPieceWayPoints
 * Calls: `Vector2__operator_assign`, `free`
 * Called by: (none)
 */
/* GSetPieceWayPoints__ClearAllWayPointGroups() */

void __thiscall GSetPieceWayPoints__ClearAllWayPointGroups(GSetPieceWayPoints *self)

{
  ushort *puVar1;
  uint64_t *puVar2;
  long lVar3;
  ushort uVar4;
  ushort uVar5;
  uint64_t *puVar6;
  ushort uVar7;
  int iVar8;

  if (*(short *)(self + 0x28) == 0) {
    return;
  }
  puVar2 = *(uint64_t **)(self + 0x38);
  iVar8 = *(int *)(puVar2 + 0xb);
  do {
    if (iVar8 == -0x5eef3582) {
      *(uint32_t *)(puVar2 + 0xb) = 0;
      free(*(void **)(puVar2[9] + -8));
      if (*(int *)(puVar2 + 8) == 1) {
        free(*(void **)(puVar2[10] + -8));
      }
      *(uint32_t *)(puVar2 + 0xb) = 0;
      *(uint16_t *)((long)puVar2 + 0x3a) = 0;
      *(uint16_t *)(puVar2 + 7) = 0;
      puVar2[9] = 0;
      puVar2[10] = 0;
    }
    *puVar2 = 0;
    uVar5 = *(ushort *)(self + 0x28);
    if (1 < uVar5) {
      iVar8 = 0;
      lVar3 = 0;
      do {
        iVar8 = iVar8 + 1;
        puVar2 = (uint64_t *)(*(long *)(self + 0x38) + lVar3 + 0x70);
        puVar6 = (uint64_t *)(*(long *)(self + 0x38) + lVar3);
        *puVar6 = *puVar2;
        *(uint32_t *)(puVar6 + 1) = *(uint32_t *)(puVar2 + 1);
        *(uint32_t *)((long)puVar6 + 0xc) = *(uint32_t *)((long)puVar2 + 0xc);
        puVar6[2] = puVar2[2];
        puVar6[3] = puVar2[3];
        puVar6[4] = puVar2[4];
        puVar6[5] = puVar2[5];
        puVar6[6] = puVar2[6];
        puVar6[7] = puVar2[7];
        puVar6[8] = puVar2[8];
        puVar6[9] = puVar2[9];
        puVar6[10] = puVar2[10];
        *(uint32_t *)(puVar6 + 0xb) = *(uint32_t *)(puVar2 + 0xb);
        Vector2__operator_assign((Vector2 *)(puVar6 + 0xc), (Vector2 *)(puVar2 + 0xc));
        Vector2__operator_assign((Vector2 *)(puVar6 + 0xd), (Vector2 *)(puVar2 + 0xd));
        uVar5 = *(ushort *)(self + 0x28);
        lVar3 = lVar3 + 0x70;
      } while (iVar8 < (int)(uVar5 - 1));
    }
    if ((*(int *)(self + 0x30) == 1) && (uVar7 = *(ushort *)(self + 0x2a), uVar7 != 0)) {
      uVar5 = 0;
      do {
        while (true) {
          puVar1 = (ushort *)(*(long *)(self + 0x40) + (ulong)uVar5 * 2);
          if (*puVar1 != 0)
            break;
          *puVar1 = 0xffff;
          uVar7 = *(ushort *)(self + 0x2a);
          uVar5 = uVar5 + 1;
          if (uVar7 <= uVar5)
            goto LAB_0059e181;
        }
        uVar4 = *puVar1 - 1;
        if (uVar4 < 0xfffe) {
          *puVar1 = uVar4;
          uVar7 = *(ushort *)(self + 0x2a);
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar7);
    LAB_0059e181:
      uVar5 = *(ushort *)(self + 0x28);
    }
    if (uVar5 == 0) {
      *(uint16_t *)(self + 0x28) = 0;
      return;
    }
    *(ushort *)(self + 0x28) = uVar5 - 1;
    if ((ushort)(uVar5 - 1) == 0) {
      return;
    }
    puVar2 = *(uint64_t **)(self + 0x38);
    iVar8 = *(int *)(puVar2 + 0xb);
  } while (true);
}

/* ======================================================================
 * GSetPieceWayPoints__Reset  (Ghidra `Reset` @ 0059e1c0)
 * Signature: uint8_t __thiscall Reset(GSetPieceWayPoints * self)
 * Class: GSetPieceWayPoints
 * Calls: `SetPieceWayPointGroup__Reset`
 * Called by: `SMBPalette__FindAnimatedObstacles`, `SMBPalette__ResetObstacles`
 */
/* GSetPieceWayPoints__Reset() */

void __thiscall GSetPieceWayPoints__Reset(GSetPieceWayPoints *self)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;

  if (*(short *)(self + 0x28) != 0) {
    uVar2 = 0;
    do {
      uVar3 = uVar2 & 0xffff;
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulong)uVar1;
      SetPieceWayPointGroup__Reset(
          (SetPieceWayPointGroup *)(uVar3 * 0x70 + *(long *)(self + 0x38)));
    } while ((int)uVar1 < (int)(uint) * (ushort *)(self + 0x28));
  }
  return;
}

/* ======================================================================
 * GSetPieceWayPoints__LoadWayPointData  (Ghidra `LoadWayPointData` @ 0059e2a0)
 * Signature: uint8_t __thiscall LoadWayPointData(GSetPieceWayPoints * self, File * arg1, TileLevel * arg2)
 * Class: GSetPieceWayPoints
 * Calls: `CriticalSection__CriticalSection`, `File__ReadArray`, `File__ReadVariable`, `Vector2__operator_assign`, `free`, `malloc`, `memcpy`
 * Called by: `SMBLevelLoad`, `SMBLevelVerify`
 */
/* GSetPieceWayPoints__LoadWayPointData(File*, TileLevel*) */

uint64_t __thiscall GSetPieceWayPoints__LoadWayPointData(GSetPieceWayPoints *self, File *arg1,
                                                         TileLevel *arg2)

{
  int iVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  uint32_t uVar5;
  uint32_t uVar6;
  uint32_t uVar7;
  short sVar8;
  long lVar9;
  void *pvVar10;
  uint32_t *puVar11;
  void *pvVar12;
  void *pvVar13;
  ulong uVar14;
  ushort uVar15;
  uint64_t *puVar16;
  ushort *puVar17;
  long *plVar18;
  ushort uVar19;
  ulong uVar20;
  int iVar21;
  int iVar22;
  bool bVar23;
  byte bVar24;
  long local_b0;
  uint32_t local_98;
  uint32_t local_94;
  uint32_t local_90;
  uint32_t local_8c;
  uint32_t local_88;
  uint32_t local_84;
  uint32_t local_80;
  uint32_t local_7c;
  Vector2 local_78[16];
  int local_68[4];
  int local_58[2];
  uint32_t local_50;
  uint32_t local_4c;
  byte local_48[24];

  bVar24 = 0;
  File__ReadVariable(arg1, local_68, 4);
  local_88 = 0;
  local_84 = 0;
  local_80 = 0;
  local_7c = 0;
  local_b0 = 0;
  if (arg2 != (TileLevel *)0x0) {
    local_b0 = *(long *)(arg2 + 0x60);
  }
  if (0 < local_68[0]) {
    iVar22 = 0;
    plVar18 = (long *)0x0;
    do {
      File__ReadVariable(arg1, local_58, 4);
      if (400 < local_58[0]) {
        return 0;
      }
      File__ReadVariable(arg1, local_48, 1);
      if (arg2 != (TileLevel *)0x0) {
        lVar9 = (long)local_58[0];
        if (*(int *)(self + 0x48) == -0x5eef3582) {
          uVar19 = *(ushort *)(self + 0x28);
          if (*(ushort *)(self + 0x2a) <= uVar19) {
            uVar19 = *(ushort *)(self + 0x2a) + *(short *)(self + 0x34);
            uVar14 = (ulong)(byte)self[0x2c];
            pvVar10 = *(void **)(self + 0x38);
            *(ushort *)(self + 0x2a) = uVar19;
            uVar20 = (ulong)uVar19 * 0x70;
            pvVar13 = malloc(uVar14 + 0x10 + uVar20);
            pvVar12 = (void *)0x0;
            if (pvVar13 != (void *)0x0) {
              pvVar12 = (void *)((long)pvVar13 + 0x10U +
                                 (uVar14 - ((long)pvVar13 + 0x10U) % uVar14) % uVar14);
              *(ulong *)((long)pvVar12 + -0x10) = uVar20;
              *(void **)((long)pvVar12 + -8) = pvVar13;
              if (pvVar10 != (void *)0x0) {
                uVar14 = *(ulong *)((long)pvVar10 + -0x10);
                if (uVar20 <= *(ulong *)((long)pvVar10 + -0x10)) {
                  uVar14 = uVar20;
                }
                memcpy(pvVar12, pvVar10, uVar14);
                free(*(void **)((long)pvVar10 + -8));
              }
            }
            *(void **)(self + 0x38) = pvVar12;
            pvVar10 = *(void **)(self + 0x40);
            if (pvVar10 != (void *)0x0) {
              uVar15 = *(ushort *)(self + 0x2a);
              uVar14 = (ulong)(byte)self[0x2c];
              pvVar13 = (void *)0x0;
              uVar20 = (ulong)uVar15 * 2;
              pvVar12 = malloc(uVar14 + 0x10 + uVar20);
              if (pvVar12 != (void *)0x0) {
                pvVar13 = (void *)((long)pvVar12 + 0x10U +
                                   (uVar14 - ((long)pvVar12 + 0x10U) % uVar14) % uVar14);
                *(ulong *)((long)pvVar13 + -0x10) = uVar20;
                *(void **)((long)pvVar13 + -8) = pvVar12;
                uVar14 = *(ulong *)((long)pvVar10 + -0x10);
                if (uVar20 <= *(ulong *)((long)pvVar10 + -0x10)) {
                  uVar14 = uVar20;
                }
                memcpy(pvVar13, pvVar10, uVar14);
                free(*(void **)((long)pvVar10 + -8));
                uVar15 = *(ushort *)(self + 0x2a);
              }
              uVar19 = *(ushort *)(self + 0x28);
              *(void **)(self + 0x40) = pvVar13;
              if (uVar15 <= uVar19)
                goto LAB_0059e44d;
              while (true) {
                uVar20 = (ulong)uVar19;
                uVar19 = uVar19 + 1;
                *(uint16_t *)((long)pvVar13 + uVar20 * 2) = 0xffff;
                if (uVar15 <= uVar19)
                  break;
                pvVar13 = *(void **)(self + 0x40);
              }
            }
            uVar19 = *(ushort *)(self + 0x28);
          }
        } else {
          uVar20 = (ulong)(byte)self[0x2c];
          *(uint32_t *)(self + 0x30) = 0;
          pvVar10 = malloc(uVar20 + 0x240);
          puVar16 = (uint64_t *)0x0;
          if (pvVar10 != (void *)0x0) {
            puVar16 = (uint64_t *)((uVar20 - ((long)pvVar10 + 0x10U) % uVar20) % uVar20 +
                                   (long)pvVar10 + 0x10U);
            puVar16[-2] = 0x230;
            puVar16[-1] = pvVar10;
          }
          bVar23 = ((ulong)puVar16 & 1) != 0;
          *(uint64_t **)(self + 0x38) = puVar16;
          uVar20 = 0x230;
          if (bVar23) {
            *(uint8_t *)puVar16 = 0;
            puVar16 = (uint64_t *)((long)puVar16 + 1);
            uVar20 = 0x22f;
          }
          if (((ulong)puVar16 & 2) != 0) {
            *(uint16_t *)puVar16 = 0;
            uVar20 = (ulong)((int)uVar20 - 2);
            puVar16 = (uint64_t *)((long)puVar16 + 2);
          }
          if (((ulong)puVar16 & 4) != 0) {
            *(uint32_t *)puVar16 = 0;
            uVar20 = (ulong)((int)uVar20 - 4);
            puVar16 = (uint64_t *)((long)puVar16 + 4);
          }
          for (uVar14 = uVar20 >> 3; uVar14 != 0; uVar14 = uVar14 - 1) {
            *puVar16 = 0;
            puVar16 = puVar16 + (ulong)bVar24 * -2 + 1;
          }
          if ((uVar20 & 4) != 0) {
            *(uint32_t *)puVar16 = 0;
            puVar16 = (uint64_t *)((long)puVar16 + 4);
          }
          if ((uVar20 & 2) != 0) {
            *(uint16_t *)puVar16 = 0;
            puVar16 = (uint64_t *)((long)puVar16 + 2);
          }
          if (bVar23) {
            *(uint8_t *)puVar16 = 0;
          }
          *(uint16_t *)(self + 0x28) = 0;
          *(uint16_t *)(self + 0x2a) = 5;
          uVar19 = 0;
          *(uint32_t *)(self + 0x48) = 0xa110ca7e;
          *(uint16_t *)(self + 0x34) = 5;
        }
      LAB_0059e44d:
        if ((*(int *)(self + 0x30) == 1) && (*(short *)(self + 0x2a) != 0)) {
          puVar17 = *(ushort **)(self + 0x40);
          sVar8 = 1;
          uVar15 = *puVar17;
          while (uVar15 != 0xffff) {
            puVar17 = puVar17 + 1;
            if (sVar8 == *(short *)(self + 0x2a))
              goto LAB_0059e458;
            sVar8 = sVar8 + 1;
            uVar15 = *puVar17;
          }
          *puVar17 = uVar19;
          uVar19 = *(ushort *)(self + 0x28);
        }
      LAB_0059e458:
        *(ushort *)(self + 0x28) = uVar19 + 1;
        puVar16 = (uint64_t *)(((ulong)(ushort)(uVar19 + 1) - 1) * 0x70 + *(long *)(self + 0x38));
        uVar20 = 0x70;
        bVar23 = ((ulong)puVar16 & 1) != 0;
        if (bVar23) {
          *(uint8_t *)puVar16 = 0;
          puVar16 = (uint64_t *)((long)puVar16 + 1);
          uVar20 = 0x6f;
        }
        if (((ulong)puVar16 & 2) != 0) {
          *(uint16_t *)puVar16 = 0;
          uVar20 = (ulong)((int)uVar20 - 2);
          puVar16 = (uint64_t *)((long)puVar16 + 2);
        }
        if (((ulong)puVar16 & 4) != 0) {
          *(uint32_t *)puVar16 = 0;
          uVar20 = (ulong)((int)uVar20 - 4);
          puVar16 = (uint64_t *)((long)puVar16 + 4);
        }
        for (uVar14 = uVar20 >> 3; uVar14 != 0; uVar14 = uVar14 - 1) {
          *puVar16 = 0;
          puVar16 = puVar16 + (ulong)bVar24 * -2 + 1;
        }
        if ((uVar20 & 4) != 0) {
          *(uint32_t *)puVar16 = 0;
          puVar16 = (uint64_t *)((long)puVar16 + 4);
        }
        if ((uVar20 & 2) != 0) {
          *(uint16_t *)puVar16 = 0;
          puVar16 = (uint64_t *)((long)puVar16 + 2);
        }
        if (bVar23) {
          *(uint8_t *)puVar16 = 0;
        }
        plVar18 = (long *)(((ulong) * (ushort *)(self + 0x28) - 1) * 0x70 + *(long *)(self + 0x38));
        if (plVar18 != (long *)0x0) {
          *plVar18 = 0;
          *(uint32_t *)(plVar18 + 1) = 0;
          CriticalSection__CriticalSection((CriticalSection *)(plVar18 + 2));
          *(uint16_t *)((long)plVar18 + 0x3a) = 0;
          *(uint16_t *)(plVar18 + 7) = 0;
          *(uint16_t *)((long)plVar18 + 0x44) = 1;
          plVar18[9] = 0;
          plVar18[10] = 0;
          *(uint32_t *)(plVar18 + 0xb) = 0;
          *(uint8_t *)((long)plVar18 + 0x3c) = 4;
          *(uint32_t *)(plVar18 + 8) = 0;
        }
        *plVar18 = local_b0 + lVar9 * 0x68;
      }
      if (local_48[0] != 0) {
        iVar21 = 0;
        do {
          File__ReadArray(arg1, (uchar *)&local_88, 3, 4);
          File__ReadArray(arg1, (uchar *)local_78, 2, 4);
          File__ReadVariable(arg1, &local_4c, 4);
          File__ReadVariable(arg1, &local_50, 4);
          uVar7 = local_4c;
          uVar6 = local_50;
          if (arg2 != (TileLevel *)0x0) {
            local_98 = 0;
            local_94 = 0;
            local_90 = 0;
            local_8c = 0;
            Vector2__operator_assign((Vector2 *)&local_98, local_78);
            uVar5 = local_7c;
            uVar4 = local_80;
            uVar3 = local_84;
            uVar2 = local_88;
            local_90 = uVar7;
            local_8c = uVar6;
            uVar19 = *(ushort *)(plVar18 + 7);
            if (uVar19 < 10) {
              if ((int)plVar18[0xb] == -0x5eef3582) {
                if (uVar19 < *(ushort *)((long)plVar18 + 0x3a))
                  goto LAB_0059e738;
                uVar19 = *(ushort *)((long)plVar18 + 0x3a) + *(short *)((long)plVar18 + 0x44);
                uVar14 = (ulong) * (byte *)((long)plVar18 + 0x3c);
                pvVar13 = (void *)plVar18[9];
                *(ushort *)((long)plVar18 + 0x3a) = uVar19;
                uVar20 = (ulong)uVar19 * 0x20;
                pvVar12 = malloc(uVar14 + 0x10 + uVar20);
                pvVar10 = (void *)0x0;
                if (pvVar12 != (void *)0x0) {
                  pvVar10 = (void *)((long)pvVar12 + 0x10U +
                                     (uVar14 - ((long)pvVar12 + 0x10U) % uVar14) % uVar14);
                  *(ulong *)((long)pvVar10 + -0x10) = uVar20;
                  *(void **)((long)pvVar10 + -8) = pvVar12;
                  if (pvVar13 != (void *)0x0) {
                    uVar14 = *(ulong *)((long)pvVar13 + -0x10);
                    if (uVar20 <= *(ulong *)((long)pvVar13 + -0x10)) {
                      uVar14 = uVar20;
                    }
                    memcpy(pvVar10, pvVar13, uVar14);
                    free(*(void **)((long)pvVar13 + -8));
                  }
                }
                pvVar13 = (void *)plVar18[10];
                plVar18[9] = (long)pvVar10;
                if (pvVar13 != (void *)0x0) {
                  uVar15 = *(ushort *)((long)plVar18 + 0x3a);
                  uVar14 = (ulong) * (byte *)((long)plVar18 + 0x3c);
                  uVar20 = (ulong)uVar15 * 2;
                  pvVar12 = malloc(uVar14 + 0x10 + uVar20);
                  pvVar10 = (void *)0x0;
                  if (pvVar12 != (void *)0x0) {
                    pvVar10 = (void *)((long)pvVar12 + 0x10U +
                                       (uVar14 - ((long)pvVar12 + 0x10U) % uVar14) % uVar14);
                    *(void **)((long)pvVar10 + -8) = pvVar12;
                    *(ulong *)((long)pvVar10 + -0x10) = uVar20;
                    uVar14 = *(ulong *)((long)pvVar13 + -0x10);
                    if (uVar20 <= *(ulong *)((long)pvVar13 + -0x10)) {
                      uVar14 = uVar20;
                    }
                    memcpy(pvVar10, pvVar13, uVar14);
                    free(*(void **)((long)pvVar13 + -8));
                    uVar15 = *(ushort *)((long)plVar18 + 0x3a);
                  }
                  uVar19 = *(ushort *)(plVar18 + 7);
                  plVar18[10] = (long)pvVar10;
                  if (uVar15 <= uVar19)
                    goto LAB_0059e738;
                  while (true) {
                    uVar20 = (ulong)uVar19;
                    uVar19 = uVar19 + 1;
                    *(uint16_t *)((long)pvVar10 + uVar20 * 2) = 0xffff;
                    if (uVar15 <= uVar19)
                      break;
                    pvVar10 = (void *)plVar18[10];
                  }
                }
                iVar1 = (int)plVar18[8];
                uVar19 = *(ushort *)(plVar18 + 7);
              } else {
                uVar20 = (ulong) * (byte *)((long)plVar18 + 0x3c);
                *(uint32_t *)(plVar18 + 8) = 0;
                pvVar10 = malloc(uVar20 + 0xb0);
                puVar16 = (uint64_t *)0x0;
                if (pvVar10 != (void *)0x0) {
                  puVar16 = (uint64_t *)((uVar20 - ((long)pvVar10 + 0x10U) % uVar20) % uVar20 +
                                         (long)pvVar10 + 0x10U);
                  puVar16[-2] = 0xa0;
                  puVar16[-1] = pvVar10;
                }
                bVar23 = ((ulong)puVar16 & 1) != 0;
                plVar18[9] = (long)puVar16;
                uVar20 = 0xa0;
                if (bVar23) {
                  *(uint8_t *)puVar16 = 0;
                  puVar16 = (uint64_t *)((long)puVar16 + 1);
                  uVar20 = 0x9f;
                }
                if (((ulong)puVar16 & 2) != 0) {
                  *(uint16_t *)puVar16 = 0;
                  uVar20 = (ulong)((int)uVar20 - 2);
                  puVar16 = (uint64_t *)((long)puVar16 + 2);
                }
                if (((ulong)puVar16 & 4) != 0) {
                  *(uint32_t *)puVar16 = 0;
                  uVar20 = (ulong)((int)uVar20 - 4);
                  puVar16 = (uint64_t *)((long)puVar16 + 4);
                }
                for (uVar14 = uVar20 >> 3; uVar14 != 0; uVar14 = uVar14 - 1) {
                  *puVar16 = 0;
                  puVar16 = puVar16 + (ulong)bVar24 * -2 + 1;
                }
                if ((uVar20 & 4) != 0) {
                  *(uint32_t *)puVar16 = 0;
                  puVar16 = (uint64_t *)((long)puVar16 + 4);
                }
                if ((uVar20 & 2) != 0) {
                  *(uint16_t *)puVar16 = 0;
                  puVar16 = (uint64_t *)((long)puVar16 + 2);
                }
                if (bVar23) {
                  *(uint8_t *)puVar16 = 0;
                }
                *(uint16_t *)(plVar18 + 7) = 0;
                *(uint16_t *)((long)plVar18 + 0x3a) = 5;
                uVar19 = 0;
                *(uint32_t *)(plVar18 + 0xb) = 0xa110ca7e;
                *(uint16_t *)((long)plVar18 + 0x44) = 5;
              LAB_0059e738:
                iVar1 = (int)plVar18[8];
              }
              if ((iVar1 == 1) && (*(short *)((long)plVar18 + 0x3a) != 0)) {
                puVar17 = (ushort *)plVar18[10];
                sVar8 = 0;
                uVar15 = *puVar17;
                while (uVar15 != 0xffff) {
                  puVar17 = puVar17 + 1;
                  sVar8 = sVar8 + 1;
                  if (sVar8 == *(short *)((long)plVar18 + 0x3a))
                    goto LAB_0059e742;
                  uVar15 = *puVar17;
                }
                *puVar17 = uVar19;
                uVar19 = *(ushort *)(plVar18 + 7);
              }
            LAB_0059e742:
              puVar11 = (uint32_t *)((ulong)uVar19 * 0x20 + plVar18[9]);
              *puVar11 = uVar2;
              puVar11[1] = uVar3;
              puVar11[2] = uVar4;
              puVar11[3] = uVar5;
              Vector2__operator_assign((Vector2 *)(puVar11 + 4), (Vector2 *)&local_98);
              puVar11[6] = local_90;
              puVar11[7] = local_8c;
              *(short *)(plVar18 + 7) = (short)plVar18[7] + 1;
            }
          }
          iVar21 = iVar21 + 1;
        } while (iVar21 < (int)(uint)local_48[0]);
      }
      iVar22 = iVar22 + 1;
    } while (iVar22 < local_68[0]);
  }
  return 1;
}

/* ======================================================================
 * GSetPieceWayPoints__SaveWayPointData  (Ghidra `SaveWayPointData` @ 0059ec50)
 * Signature: uint8_t __thiscall SaveWayPointData(GSetPieceWayPoints * self, File * arg1, TileLevel * arg2)
 * Class: GSetPieceWayPoints
 * Calls: `File__Write`, `File__WriteArray`, `TileLevel__getLevelLayer`
 * Called by: `SMBLevelSave`
 */
/* GSetPieceWayPoints__SaveWayPointData(File*, TileLevel*) */

void __thiscall GSetPieceWayPoints__SaveWayPointData(GSetPieceWayPoints *self, File *arg1,
                                                     TileLevel *arg2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  uint uVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  int local_68[10];
  uint local_40;
  byte local_39[9];

  local_40 = (uint) * (ushort *)(self + 0x28);
  File__Write(arg1, &local_40, 4);
  local_68[8] = 0;
  if (*(short *)(self + 0x28) == 0) {
    return;
  }
  uVar6 = 0;
LAB_0059eca8:
  do {
    piVar4 = local_68;
    local_68[0] = 3;
    local_68[1] = 4;
    local_68[2] = 5;
    local_68[3] = 2;
    lVar1 = (uVar6 & 0xffff) * 0x70;
    local_68[4] = 0;
    local_68[5] = 1;
    local_68[6] = 6;
    iVar7 = 0;
    local_68[7] = 7;
    lVar8 = *(long *)(*(long *)(self + 0x38) + lVar1);
    while (true) {
      lVar2 = TileLevel__getLevelLayer(arg2, *piVar4);
      lVar2 = *(long *)(lVar2 + 8);
      if (lVar2 != 0)
        break;
    LAB_0059ee60:
      piVar4 = piVar4 + 1;
      if (piVar4 == local_68 + 8)
        goto code_r0x0059ee6f;
    }
    while (lVar8 != lVar2) {
      lVar2 = *(long *)(lVar2 + 8);
      iVar7 = iVar7 + 1;
      if (lVar2 == 0)
        goto LAB_0059ee60;
    }
    local_68[8] = iVar7;
    File__Write(arg1, local_68 + 8, 4);
    local_39[0] = (byte) * (uint16_t *)(*(long *)(self + 0x38) + 0x38 + lVar1);
    File__Write(arg1, local_39, 1);
    if (local_39[0] != 0) {
      uVar3 = 0;
      do {
        lVar8 = (uVar3 & 0xffff) * 0x20;
        File__WriteArray(arg1, (uchar *)(*(long *)(*(long *)(self + 0x38) + 0x48 + lVar1) + lVar8),
                         3, 4);
        File__WriteArray(
            arg1, (uchar *)(*(long *)(*(long *)(self + 0x38) + 0x48 + lVar1) + lVar8 + 0x10), 2, 4);
        File__Write(arg1, (void *)(*(long *)(*(long *)(self + 0x38) + 0x48 + lVar1) + lVar8 + 0x18),
                    4);
        File__Write(arg1, (void *)(lVar8 + *(long *)(*(long *)(self + 0x38) + 0x48 + lVar1) + 0x1c),
                    4);
        uVar5 = (int)uVar3 + 1;
        uVar3 = (ulong)uVar5;
      } while ((int)uVar5 < (int)(uint)local_39[0]);
    }
    uVar5 = (int)uVar6 + 1;
    uVar6 = (ulong)uVar5;
    if ((int)(uint) * (ushort *)(self + 0x28) <= (int)uVar5) {
      return;
    }
  } while (true);
code_r0x0059ee6f:
  uVar5 = (int)uVar6 + 1;
  uVar6 = (ulong)uVar5;
  local_68[8] = -1;
  if ((int)(uint) * (ushort *)(self + 0x28) <= (int)uVar5) {
    return;
  }
  goto LAB_0059eca8;
}

/* ======================================================================
 * GSetPieceWayPoints__GSetPieceWayPoints  (Ghidra `~GSetPieceWayPoints` @ 0059ee90)
 * Signature: uint8_t __thiscall ~GSetPieceWayPoints(GSetPieceWayPoints * self)
 * Class: GSetPieceWayPoints
 * Calls: `BaseResource__Release`, `CreateSetPieceWayPointResources`, `CriticalSection__CriticalSection__005b71d0`, `DestroySetPieceWayPointResources`, `TResourceCreator__RemoveResourceCreationFunction`, `TResourceCreator__RemoveResourceDestroyFunction`, `free`
 * Called by: (none)
 */
/* GSetPieceWayPoints__GSetPieceWayPoints() */

void __thiscall GSetPieceWayPoints__GSetPieceWayPoints(GSetPieceWayPoints *self)

{
  /* try { // try from 0059ee98 to 0059eed7 has its CatchHandler @ 0059efaf */
  ClearAllWayPointGroups(self);
  if (*(int *)(self + 0x48) == -0x5eef3582) {
    *(uint32_t *)(self + 0x48) = 0;
    free(*(void **)(*(long *)(self + 0x38) + -8));
    if (*(int *)(self + 0x30) == 1) {
      free(*(void **)(*(long *)(self + 0x40) + -8));
    }
    *(uint32_t *)(self + 0x48) = 0;
    *(uint16_t *)(self + 0x2a) = 0;
    *(uint16_t *)(self + 0x28) = 0;
    *(uint64_t *)(self + 0x38) = 0;
    *(uint64_t *)(self + 0x40) = 0;
  }
  BaseResource__Release(pSetPieceWayPointStream, 0);
  TResourceCreator__RemoveResourceCreationFunction((TResourceCreator *)ResourceCreator,
                                                   CreateSetPieceWayPointResources, self);
  TResourceCreator__RemoveResourceDestroyFunction((TResourceCreator *)ResourceCreator,
                                                  DestroySetPieceWayPointResources, self);
  if (*(int *)(self + 0x48) != -0x5eef3582) {
    CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
    return;
  }
  *(uint32_t *)(self + 0x48) = 0;
  free(*(void **)(*(long *)(self + 0x38) + -8));
  if (*(int *)(self + 0x30) == 1) {
    free(*(void **)(*(long *)(self + 0x40) + -8));
  }
  *(uint32_t *)(self + 0x48) = 0;
  *(uint16_t *)(self + 0x2a) = 0;
  *(uint16_t *)(self + 0x28) = 0;
  *(uint64_t *)(self + 0x38) = 0;
  *(uint64_t *)(self + 0x40) = 0;
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
  return;
}

/* ======================================================================
 * GSetPieceWayPoints__GSetPieceWayPoints__0059efd0  (Ghidra `GSetPieceWayPoints` @ 0059efd0)
 * Signature: uint8_t __thiscall GSetPieceWayPoints(GSetPieceWayPoints * self)
 * Class: GSetPieceWayPoints
 * Calls: `CreateSetPieceWayPointResources`, `CriticalSection__CriticalSection`, `DestroySetPieceWayPointResources`, `TResourceCreator__AddResourceCreationFunction`, `TResourceCreator__AddResourceDestroyFunction`, `operator_delete`
 * Called by: `TileLevel__TileLevel`
 */
/* GSetPieceWayPoints__GSetPieceWayPoints__0059efd0() */

void __thiscall GSetPieceWayPoints__GSetPieceWayPoints__0059efd0(GSetPieceWayPoints *self)

{
  GSetPieceWayPoints *this_00;

  CriticalSection__CriticalSection((CriticalSection *)self);
  this_00 = SetPieceWayPoints;
  *(uint16_t *)(self + 0x2a) = 0;
  *(uint16_t *)(self + 0x28) = 0;
  *(uint16_t *)(self + 0x34) = 1;
  *(uint64_t *)(self + 0x38) = 0;
  *(uint64_t *)(self + 0x40) = 0;
  *(uint32_t *)(self + 0x48) = 0;
  self[0x2c] = (GSetPieceWayPoints)0x4;
  *(uint32_t *)(self + 0x30) = 0;
  if (this_00 != (GSetPieceWayPoints *)0x0) {
    /* try { // try from 0059f021 to 0059f059 has its CatchHandler @ 0059f068 */
    GSetPieceWayPoints__dtor(this_00);
    operator_delete(this_00);
  }
  CreateSetPieceWayPointResources(self);
  TResourceCreator__AddResourceCreationFunction((TResourceCreator *)ResourceCreator,
                                                CreateSetPieceWayPointResources, self);
  TResourceCreator__AddResourceDestroyFunction((TResourceCreator *)ResourceCreator,
                                               DestroySetPieceWayPointResources, self);
  SetPieceWayPoints = self;
  return;
}
