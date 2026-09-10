/* src/game/classes/SetPieceWayPointGroup.c — 13 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "SetPieceWayPointGroup.h"

/* ======================================================================
 * SetPieceWayPointGroup__SetPieceWayPointGroup  (Ghidra `SetPieceWayPointGroup` @ 0059c130)
 * Signature: uint8_t __thiscall SetPieceWayPointGroup(SetPieceWayPointGroup * self)
 * Class: SetPieceWayPointGroup
 * Calls: `CriticalSection__CriticalSection`
 * Called by: (none)
 */
/* SetPieceWayPointGroup__SetPieceWayPointGroup() */

void __thiscall SetPieceWayPointGroup__SetPieceWayPointGroup(SetPieceWayPointGroup *self)

{
  *(uint64_t *)self = 0;
  *(uint32_t *)(self + 8) = 0;
  CriticalSection__CriticalSection((CriticalSection *)(self + 0x10));
  *(uint16_t *)(self + 0x3a) = 0;
  *(uint16_t *)(self + 0x38) = 0;
  *(uint16_t *)(self + 0x44) = 1;
  *(uint64_t *)(self + 0x48) = 0;
  *(uint64_t *)(self + 0x50) = 0;
  *(uint32_t *)(self + 0x58) = 0;
  self[0x3c] = (SetPieceWayPointGroup)0x4;
  *(uint32_t *)(self + 0x40) = 0;
  return;
}

/* ======================================================================
 * SetPieceWayPointGroup__SetPieceWayPointGroup__0059c190  (Ghidra `~SetPieceWayPointGroup` @ 0059c190)
 * Signature: uint8_t __thiscall ~SetPieceWayPointGroup(SetPieceWayPointGroup * self)
 * Class: SetPieceWayPointGroup
 * Calls: `CriticalSection__CriticalSection__005b71d0`, `free`
 * Called by: (none)
 */
/* SetPieceWayPointGroup__SetPieceWayPointGroup__0059c190() */

void __thiscall SetPieceWayPointGroup__SetPieceWayPointGroup__0059c190(SetPieceWayPointGroup *self)

{
  if (*(int *)(self + 0x58) != -0x5eef3582) {
    CriticalSection__CriticalSection__005b71d0((CriticalSection *)(self + 0x10));
    return;
  }
  *(uint32_t *)(self + 0x58) = 0;
  free(*(void **)(*(long *)(self + 0x48) + -8));
  if (*(int *)(self + 0x40) == 1) {
    free(*(void **)(*(long *)(self + 0x50) + -8));
  }
  *(uint32_t *)(self + 0x58) = 0;
  *(uint16_t *)(self + 0x3a) = 0;
  *(uint16_t *)(self + 0x38) = 0;
  *(uint64_t *)(self + 0x48) = 0;
  *(uint64_t *)(self + 0x50) = 0;
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)(self + 0x10));
  return;
}

/* ======================================================================
 * SetPieceWayPointGroup__Destroy  (Ghidra `Destroy` @ 0059c210)
 * Signature: uint8_t __thiscall Destroy(SetPieceWayPointGroup * self)
 * Class: SetPieceWayPointGroup
 * Calls: `free`
 * Called by: (none)
 */
/* SetPieceWayPointGroup__Destroy() */

void __thiscall SetPieceWayPointGroup__Destroy(SetPieceWayPointGroup *self)

{
  if (*(int *)(self + 0x58) != -0x5eef3582) {
    *(uint64_t *)self = 0;
    return;
  }
  *(uint32_t *)(self + 0x58) = 0;
  free(*(void **)(*(long *)(self + 0x48) + -8));
  if (*(int *)(self + 0x40) == 1) {
    free(*(void **)(*(long *)(self + 0x50) + -8));
  }
  *(uint32_t *)(self + 0x58) = 0;
  *(uint16_t *)(self + 0x3a) = 0;
  *(uint16_t *)(self + 0x38) = 0;
  *(uint64_t *)(self + 0x48) = 0;
  *(uint64_t *)(self + 0x50) = 0;
  *(uint64_t *)self = 0;
  return;
}

/* ======================================================================
 * SetPieceWayPointGroup__AddWayPoint  (Ghidra `AddWayPoint` @ 0059c290)
 * Signature: uint8_t __thiscall AddWayPoint(SetPieceWayPointGroup * self, FPUVector * arg1, Vector2 * arg2, float arg3, float arg4)
 * Class: SetPieceWayPointGroup
 * Calls: `SetPieceWayPointGroup__AddWayPoint__0059c660`, `Vector2__operator_assign`, `free`, `malloc`, `memcpy`
 * Called by: (none)
 */
/* SetPieceWayPointGroup__AddWayPoint__0059c660(FPUVector const&, Vector2 const&, float, float) */

void __thiscall
SetPieceWayPointGroup__AddWayPoint__0059c660
          (SetPieceWayPointGroup *self,FPUVector *arg1,Vector2 *arg2,float arg3,
          float arg4)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  void *pvVar5;
  void *pvVar6;
  void *pvVar7;
  ulong uVar8;
  ushort *puVar9;
  short sVar10;
  uint32_t *puVar11;
  ulong uVar12;
  uint64_t *puVar13;
  ushort uVar14;
  ushort uVar15;
  bool bVar16;
  byte bVar17;
  uint32_t local_48;
  uint32_t local_44;
  float local_40;
  float local_3c;
  
  bVar17 = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0.0;
  local_3c = 0.0;
  Vector2__operator_assign((Vector2 *)&local_48,arg2);
  uVar1 = *(uint32_t *)arg1;
  uVar2 = *(uint32_t *)(arg1 + 4);
  uVar3 = *(uint32_t *)(arg1 + 8);
  uVar4 = *(uint32_t *)(arg1 + 0xc);
  uVar14 = *(ushort *)(self + 0x38);
  if (9 < uVar14) {
    return;
  }
  local_40 = arg3;
  local_3c = arg4;
  if (*(int *)(self + 0x58) == -0x5eef3582) {
    if (*(ushort *)(self + 0x3a) <= uVar14) {
      uVar14 = *(ushort *)(self + 0x3a) + *(short *)(self + 0x44);
      uVar8 = (ulong)(byte)self[0x3c];
      pvVar6 = (void *)0x0;
      pvVar5 = *(void **)(self + 0x48);
      *(ushort *)(self + 0x3a) = uVar14;
      uVar12 = (ulong)uVar14 * 0x20;
      pvVar7 = malloc(uVar8 + 0x10 + uVar12);
      if (pvVar7 != (void *)0x0) {
        pvVar6 = (void *)((long)pvVar7 + 0x10U + (uVar8 - ((long)pvVar7 + 0x10U) % uVar8) % uVar8);
        *(ulong *)((long)pvVar6 + -0x10) = uVar12;
        *(void **)((long)pvVar6 + -8) = pvVar7;
        if (pvVar5 != (void *)0x0) {
          uVar8 = *(ulong *)((long)pvVar5 + -0x10);
          if (uVar12 <= *(ulong *)((long)pvVar5 + -0x10)) {
            uVar8 = uVar12;
          }
          memcpy(pvVar6,pvVar5,uVar8);
          free(*(void **)((long)pvVar5 + -8));
        }
      }
      pvVar5 = *(void **)(self + 0x50);
      *(void **)(self + 0x48) = pvVar6;
      if (pvVar5 != (void *)0x0) {
        uVar15 = *(ushort *)(self + 0x3a);
        uVar8 = (ulong)(byte)self[0x3c];
        pvVar6 = (void *)0x0;
        uVar12 = (ulong)uVar15 * 2;
        pvVar7 = malloc(uVar8 + 0x10 + uVar12);
        if (pvVar7 != (void *)0x0) {
          pvVar6 = (void *)((long)pvVar7 + 0x10U + (uVar8 - ((long)pvVar7 + 0x10U) % uVar8) % uVar8)
          ;
          *(void **)((long)pvVar6 + -8) = pvVar7;
          *(ulong *)((long)pvVar6 + -0x10) = uVar12;
          uVar8 = *(ulong *)((long)pvVar5 + -0x10);
          if (uVar12 <= *(ulong *)((long)pvVar5 + -0x10)) {
            uVar8 = uVar12;
          }
          memcpy(pvVar6,pvVar5,uVar8);
          free(*(void **)((long)pvVar5 + -8));
          uVar15 = *(ushort *)(self + 0x3a);
        }
        uVar14 = *(ushort *)(self + 0x38);
        *(void **)(self + 0x50) = pvVar6;
        if (uVar15 <= uVar14) goto LAB_0059c438;
        while( true ) {
          uVar12 = (ulong)uVar14;
          uVar14 = uVar14 + 1;
          *(uint16_t *)((long)pvVar6 + uVar12 * 2) = 0xffff;
          if (uVar15 <= uVar14) break;
          pvVar6 = *(void **)(self + 0x50);
        }
      }
      uVar14 = *(ushort *)(self + 0x38);
    }
  }
  else {
    uVar12 = (ulong)(byte)self[0x3c];
    *(uint32_t *)(self + 0x40) = 0;
    pvVar6 = malloc(uVar12 + 0xb0);
    puVar13 = (uint64_t *)0x0;
    if (pvVar6 != (void *)0x0) {
      puVar13 = (uint64_t *)
                ((long)pvVar6 + 0x10U + (uVar12 - ((long)pvVar6 + 0x10U) % uVar12) % uVar12);
      puVar13[-2] = 0xa0;
      puVar13[-1] = pvVar6;
    }
    bVar16 = ((ulong)puVar13 & 1) != 0;
    *(uint64_t **)(self + 0x48) = puVar13;
    uVar12 = 0xa0;
    if (bVar16) {
      *(uint8_t *)puVar13 = 0;
      uVar12 = 0x9f;
      puVar13 = (uint64_t *)((long)puVar13 + 1);
    }
    if (((ulong)puVar13 & 2) != 0) {
      *(uint16_t *)puVar13 = 0;
      uVar12 = (ulong)((int)uVar12 - 2);
      puVar13 = (uint64_t *)((long)puVar13 + 2);
    }
    if (((ulong)puVar13 & 4) != 0) {
      *(uint32_t *)puVar13 = 0;
      uVar12 = (ulong)((int)uVar12 - 4);
      puVar13 = (uint64_t *)((long)puVar13 + 4);
    }
    for (uVar8 = uVar12 >> 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar13 = 0;
      puVar13 = puVar13 + (ulong)bVar17 * -2 + 1;
    }
    if ((uVar12 & 4) != 0) {
      *(uint32_t *)puVar13 = 0;
      puVar13 = (uint64_t *)((long)puVar13 + 4);
    }
    if ((uVar12 & 2) != 0) {
      *(uint16_t *)puVar13 = 0;
      puVar13 = (uint64_t *)((long)puVar13 + 2);
    }
    if (bVar16) {
      *(uint8_t *)puVar13 = 0;
    }
    *(uint16_t *)(self + 0x38) = 0;
    *(uint16_t *)(self + 0x3a) = 5;
    uVar14 = 0;
    *(uint32_t *)(self + 0x58) = 0xa110ca7e;
    *(uint16_t *)(self + 0x44) = 5;
  }
LAB_0059c438:
  if ((*(int *)(self + 0x40) == 1) && (*(short *)(self + 0x3a) != 0)) {
    puVar9 = *(ushort **)(self + 0x50);
    sVar10 = 1;
    uVar15 = *puVar9;
    while (uVar15 != 0xffff) {
      puVar9 = puVar9 + 1;
      if (sVar10 == *(short *)(self + 0x3a)) goto LAB_0059c442;
      sVar10 = sVar10 + 1;
      uVar15 = *puVar9;
    }
    *puVar9 = uVar14;
    uVar14 = *(ushort *)(self + 0x38);
  }
LAB_0059c442:
  puVar11 = (uint32_t *)((ulong)uVar14 * 0x20 + *(long *)(self + 0x48));
  *puVar11 = uVar1;
  puVar11[1] = uVar2;
  puVar11[2] = uVar3;
  puVar11[3] = uVar4;
  Vector2__operator_assign((Vector2 *)(puVar11 + 4),(Vector2 *)&local_48);
  puVar11[6] = local_40;
  puVar11[7] = local_3c;
  *(short *)(self + 0x38) = *(short *)(self + 0x38) + 1;
  return;
}

/* ======================================================================
 * SetPieceWayPointGroup__AddWayPoint__0059c660  (Ghidra `AddWayPoint` @ 0059c660)
 * Signature: uint8_t __thiscall AddWayPoint(SetPieceWayPointGroup * self, SetPieceWayPoint * arg1)
 * Class: SetPieceWayPointGroup
 * Calls: `Vector2__operator_assign`, `free`, `malloc`, `memcpy`
 * Called by: `PlaceSetPiece`, `SetPieceWayPointGroup__AddWayPoint`
 */
/* SetPieceWayPointGroup__AddWayPoint__0059c660(SetPieceWayPoint const&) */

void __thiscall
SetPieceWayPointGroup__AddWayPoint__0059c660(SetPieceWayPointGroup *self,SetPieceWayPoint *arg1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  ushort *puVar5;
  ushort uVar6;
  short sVar7;
  ulong uVar8;
  uint64_t *puVar9;
  uint32_t *puVar10;
  ushort uVar11;
  bool bVar12;
  byte bVar13;
  
  bVar13 = 0;
  uVar11 = *(ushort *)(self + 0x38);
  if (9 < uVar11) {
    return;
  }
  if (*(int *)(self + 0x58) == -0x5eef3582) {
    if (*(ushort *)(self + 0x3a) <= uVar11) {
      uVar11 = *(ushort *)(self + 0x3a) + *(short *)(self + 0x44);
      uVar4 = (ulong)(byte)self[0x3c];
      pvVar2 = (void *)0x0;
      pvVar1 = *(void **)(self + 0x48);
      *(ushort *)(self + 0x3a) = uVar11;
      uVar8 = (ulong)uVar11 * 0x20;
      pvVar3 = malloc(uVar4 + 0x10 + uVar8);
      if (pvVar3 != (void *)0x0) {
        pvVar2 = (void *)((long)pvVar3 + 0x10U + (uVar4 - ((long)pvVar3 + 0x10U) % uVar4) % uVar4);
        *(ulong *)((long)pvVar2 + -0x10) = uVar8;
        *(void **)((long)pvVar2 + -8) = pvVar3;
        if (pvVar1 != (void *)0x0) {
          uVar4 = *(ulong *)((long)pvVar1 + -0x10);
          if (uVar8 <= *(ulong *)((long)pvVar1 + -0x10)) {
            uVar4 = uVar8;
          }
          memcpy(pvVar2,pvVar1,uVar4);
          free(*(void **)((long)pvVar1 + -8));
        }
      }
      pvVar1 = *(void **)(self + 0x50);
      *(void **)(self + 0x48) = pvVar2;
      if (pvVar1 != (void *)0x0) {
        uVar6 = *(ushort *)(self + 0x3a);
        uVar4 = (ulong)(byte)self[0x3c];
        pvVar2 = (void *)0x0;
        uVar8 = (ulong)uVar6 * 2;
        pvVar3 = malloc(uVar4 + 0x10 + uVar8);
        if (pvVar3 != (void *)0x0) {
          pvVar2 = (void *)((long)pvVar3 + 0x10U + (uVar4 - ((long)pvVar3 + 0x10U) % uVar4) % uVar4)
          ;
          *(void **)((long)pvVar2 + -8) = pvVar3;
          *(ulong *)((long)pvVar2 + -0x10) = uVar8;
          uVar4 = *(ulong *)((long)pvVar1 + -0x10);
          if (uVar8 <= *(ulong *)((long)pvVar1 + -0x10)) {
            uVar4 = uVar8;
          }
          memcpy(pvVar2,pvVar1,uVar4);
          free(*(void **)((long)pvVar1 + -8));
          uVar6 = *(ushort *)(self + 0x3a);
        }
        uVar11 = *(ushort *)(self + 0x38);
        *(void **)(self + 0x50) = pvVar2;
        if (uVar6 <= uVar11) goto LAB_0059c782;
        while( true ) {
          uVar8 = (ulong)uVar11;
          uVar11 = uVar11 + 1;
          *(uint16_t *)((long)pvVar2 + uVar8 * 2) = 0xffff;
          if (uVar6 <= uVar11) break;
          pvVar2 = *(void **)(self + 0x50);
        }
      }
      uVar11 = *(ushort *)(self + 0x38);
    }
  }
  else {
    uVar8 = (ulong)(byte)self[0x3c];
    *(uint32_t *)(self + 0x40) = 0;
    pvVar2 = malloc(uVar8 + 0xb0);
    puVar9 = (uint64_t *)0x0;
    if (pvVar2 != (void *)0x0) {
      puVar9 = (uint64_t *)
               ((long)pvVar2 + 0x10U + (uVar8 - ((long)pvVar2 + 0x10U) % uVar8) % uVar8);
      puVar9[-2] = 0xa0;
      puVar9[-1] = pvVar2;
    }
    bVar12 = ((ulong)puVar9 & 1) != 0;
    *(uint64_t **)(self + 0x48) = puVar9;
    uVar8 = 0xa0;
    if (bVar12) {
      *(uint8_t *)puVar9 = 0;
      uVar8 = 0x9f;
      puVar9 = (uint64_t *)((long)puVar9 + 1);
    }
    if (((ulong)puVar9 & 2) != 0) {
      *(uint16_t *)puVar9 = 0;
      uVar8 = (ulong)((int)uVar8 - 2);
      puVar9 = (uint64_t *)((long)puVar9 + 2);
    }
    if (((ulong)puVar9 & 4) != 0) {
      *(uint32_t *)puVar9 = 0;
      uVar8 = (ulong)((int)uVar8 - 4);
      puVar9 = (uint64_t *)((long)puVar9 + 4);
    }
    for (uVar4 = uVar8 >> 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar9 = 0;
      puVar9 = puVar9 + (ulong)bVar13 * -2 + 1;
    }
    if ((uVar8 & 4) != 0) {
      *(uint32_t *)puVar9 = 0;
      puVar9 = (uint64_t *)((long)puVar9 + 4);
    }
    if ((uVar8 & 2) != 0) {
      *(uint16_t *)puVar9 = 0;
      puVar9 = (uint64_t *)((long)puVar9 + 2);
    }
    if (bVar12) {
      *(uint8_t *)puVar9 = 0;
    }
    *(uint16_t *)(self + 0x38) = 0;
    *(uint16_t *)(self + 0x3a) = 5;
    uVar11 = 0;
    *(uint32_t *)(self + 0x58) = 0xa110ca7e;
    *(uint16_t *)(self + 0x44) = 5;
  }
LAB_0059c782:
  if ((*(int *)(self + 0x40) == 1) && (*(short *)(self + 0x3a) != 0)) {
    puVar5 = *(ushort **)(self + 0x50);
    sVar7 = 1;
    uVar6 = *puVar5;
    while (uVar6 != 0xffff) {
      puVar5 = puVar5 + 1;
      if (sVar7 == *(short *)(self + 0x3a)) goto LAB_0059c78c;
      sVar7 = sVar7 + 1;
      uVar6 = *puVar5;
    }
    *puVar5 = uVar11;
    uVar11 = *(ushort *)(self + 0x38);
  }
LAB_0059c78c:
  puVar10 = (uint32_t *)((ulong)uVar11 * 0x20 + *(long *)(self + 0x48));
  *puVar10 = *(uint32_t *)arg1;
  puVar10[1] = *(uint32_t *)(arg1 + 4);
  puVar10[2] = *(uint32_t *)(arg1 + 8);
  puVar10[3] = *(uint32_t *)(arg1 + 0xc);
  Vector2__operator_assign((Vector2 *)(puVar10 + 4),(Vector2 *)(arg1 + 0x10));
  puVar10[6] = *(uint32_t *)(arg1 + 0x18);
  puVar10[7] = *(uint32_t *)(arg1 + 0x1c);
  *(short *)(self + 0x38) = *(short *)(self + 0x38) + 1;
  return;
}

/* ======================================================================
 * SetPieceWayPointGroup__RemoveWayPoint  (Ghidra `RemoveWayPoint` @ 0059c9b0)
 * Signature: uint8_t __thiscall RemoveWayPoint(SetPieceWayPointGroup * self, int arg1)
 * Class: SetPieceWayPointGroup
 * Calls: `SetPieceWayPointGroup__RemoveWayPoint__0059cad0`, `Vector2__operator_assign`
 * Called by: (none)
 */
/* SetPieceWayPointGroup__RemoveWayPoint__0059cad0(int) */

void __thiscall SetPieceWayPointGroup__RemoveWayPoint__0059cad0(SetPieceWayPointGroup *self,int arg1)

{
  uint32_t *puVar1;
  ushort *puVar2;
  uint32_t *puVar3;
  ushort uVar4;
  ushort uVar5;
  short sVar6;
  ushort uVar7;
  long lVar8;
  int iVar9;
  
  uVar5 = *(ushort *)(self + 0x38);
  if ((arg1 + 1U < (uint)uVar5) && (arg1 < (int)(uVar5 - 1))) {
    lVar8 = ((long)arg1 + 1) * 0x20;
    iVar9 = arg1;
    do {
      iVar9 = iVar9 + 1;
      puVar1 = (uint32_t *)(*(long *)(self + 0x48) + lVar8);
      puVar3 = (uint32_t *)(*(long *)(self + 0x48) + -0x20 + lVar8);
      lVar8 = lVar8 + 0x20;
      *puVar3 = *puVar1;
      puVar3[1] = puVar1[1];
      puVar3[2] = puVar1[2];
      puVar3[3] = puVar1[3];
      Vector2__operator_assign((Vector2 *)(puVar3 + 4),(Vector2 *)(puVar1 + 4));
      puVar3[6] = puVar1[6];
      puVar3[7] = puVar1[7];
      uVar5 = *(ushort *)(self + 0x38);
    } while (iVar9 < (int)(uVar5 - 1));
  }
  if (*(int *)(self + 0x40) == 1) {
    uVar7 = *(ushort *)(self + 0x3a);
    if (uVar7 != 0) {
      uVar5 = 0;
      do {
        while( true ) {
          puVar2 = (ushort *)(*(long *)(self + 0x50) + (ulong)uVar5 * 2);
          uVar4 = *puVar2;
          if (arg1 != (uint)uVar4) break;
          *puVar2 = 0xffff;
          uVar7 = *(ushort *)(self + 0x3a);
          uVar5 = uVar5 + 1;
          if (uVar7 <= uVar5) goto LAB_0059cac4;
        }
        if (((uint)arg1 < (uint)uVar4) && ((ushort)(uVar4 - 1) < 0xfffe)) {
          *puVar2 = uVar4 - 1;
          uVar7 = *(ushort *)(self + 0x3a);
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar7);
LAB_0059cac4:
      uVar5 = *(ushort *)(self + 0x38);
    }
  }
  sVar6 = 0;
  if (uVar5 != 0) {
    sVar6 = uVar5 - 1;
  }
  *(short *)(self + 0x38) = sVar6;
  return;
}

/* ======================================================================
 * SetPieceWayPointGroup__RemoveWayPoint__0059cad0  (Ghidra `RemoveWayPoint` @ 0059cad0)
 * Signature: uint8_t __thiscall RemoveWayPoint(SetPieceWayPointGroup * self, SetPieceWayPoint * arg1)
 * Class: SetPieceWayPointGroup
 * Calls: `Vector2__operator_assign`
 * Called by: `RemoveSetPieces`, `SetPieceWayPointGroup__RemoveWayPoint`
 */
/* SetPieceWayPointGroup__RemoveWayPoint__0059cad0(SetPieceWayPoint*) */

void __thiscall
SetPieceWayPointGroup__RemoveWayPoint__0059cad0(SetPieceWayPointGroup *self,SetPieceWayPoint *arg1)

{
  SetPieceWayPoint *pSVar1;
  ushort *puVar2;
  ushort uVar3;
  short sVar4;
  uint uVar5;
  SetPieceWayPoint *pSVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  ushort uVar10;
  ushort uVar11;
  long lVar12;
  uint local_3c;
  
  uVar10 = *(ushort *)(self + 0x38);
  uVar8 = (uint)uVar10;
  if (uVar8 == 0) {
    return;
  }
  pSVar6 = *(SetPieceWayPoint **)(self + 0x48);
  uVar9 = 0;
  if (arg1 == pSVar6) {
    uVar5 = 1;
    local_3c = 0;
    uVar9 = 0;
  }
  else {
    do {
      iVar7 = (int)uVar9;
      local_3c = iVar7 + 1;
      uVar9 = (ulong)local_3c;
      if ((int)uVar8 <= (int)local_3c) {
        return;
      }
    } while (arg1 != pSVar6 + (uVar9 & 0xffff) * 0x20);
    uVar5 = iVar7 + 2;
  }
  if ((uVar5 < uVar8) && ((int)uVar9 < (int)(uVar8 - 1))) {
    lVar12 = ((long)(int)uVar9 + 1) * 0x20;
    while( true ) {
      pSVar1 = pSVar6 + lVar12;
      pSVar6 = pSVar6 + lVar12 + -0x20;
      uVar8 = (int)uVar9 + 1;
      uVar9 = (ulong)uVar8;
      lVar12 = lVar12 + 0x20;
      *(uint32_t *)pSVar6 = *(uint32_t *)pSVar1;
      *(uint32_t *)(pSVar6 + 4) = *(uint32_t *)(pSVar1 + 4);
      *(uint32_t *)(pSVar6 + 8) = *(uint32_t *)(pSVar1 + 8);
      *(uint32_t *)(pSVar6 + 0xc) = *(uint32_t *)(pSVar1 + 0xc);
      Vector2__operator_assign((Vector2 *)(pSVar6 + 0x10),(Vector2 *)(pSVar1 + 0x10));
      *(uint32_t *)(pSVar6 + 0x18) = *(uint32_t *)(pSVar1 + 0x18);
      *(uint32_t *)(pSVar6 + 0x1c) = *(uint32_t *)(pSVar1 + 0x1c);
      uVar10 = *(ushort *)(self + 0x38);
      if ((int)(uVar10 - 1) <= (int)uVar8) break;
      pSVar6 = *(SetPieceWayPoint **)(self + 0x48);
    }
  }
  if ((*(int *)(self + 0x40) == 1) && (uVar11 = *(ushort *)(self + 0x3a), uVar11 != 0)) {
    uVar10 = 0;
    do {
      while( true ) {
        puVar2 = (ushort *)(*(long *)(self + 0x50) + (ulong)uVar10 * 2);
        uVar3 = *puVar2;
        if (uVar3 != local_3c) break;
        *puVar2 = 0xffff;
        uVar11 = *(ushort *)(self + 0x3a);
        uVar10 = uVar10 + 1;
        if (uVar11 <= uVar10) goto LAB_0059cc36;
      }
      if ((local_3c < uVar3) && ((ushort)(uVar3 - 1) < 0xfffe)) {
        *puVar2 = uVar3 - 1;
        uVar11 = *(ushort *)(self + 0x3a);
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar11);
LAB_0059cc36:
    uVar10 = *(ushort *)(self + 0x38);
  }
  sVar4 = 0;
  if (uVar10 != 0) {
    sVar4 = uVar10 - 1;
  }
  *(short *)(self + 0x38) = sVar4;
  return;
}

/* ======================================================================
 * SetPieceWayPointGroup__Render  (Ghidra `Render` @ 0059cc60)
 * Signature: uint8_t __thiscall Render(SetPieceWayPointGroup * self, int arg1)
 * Class: SetPieceWayPointGroup
 * Calls: `TGraphics__AddPixelStage`, `TGraphics__Draw`, `TGraphics__GetMatrix`, `TGraphics__ResetPixelStages`, `TGraphics__ResetTexCoordGen`, `TGraphics__SetPixelColorConstant`, `Vector2__operator_assign`, `VertexBuffer__Lock`, `VertexBuffer__Unlock`
 * Called by: `GSetPieceWayPoints__EditorRender`, `GSetPieceWayPoints__RenderGroup`
 */
/* SetPieceWayPointGroup__Render(int) */

void __thiscall SetPieceWayPointGroup__Render(SetPieceWayPointGroup *self,int arg1)

{
  uint32_t uVar1;
  VertexBuffer *this_00;
  TGraphics *this_01;
  VertexStream *pVVar2;
  ulong uVar3;
  Matrix4x4 *pMVar4;
  ulong uVar5;
  ushort uVar6;
  uint32_t *puVar7;
  uint32_t *puVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  void *local_30;
  
  lVar10 = *(long *)self;
  if (lVar10 != 0) {
    uVar6 = *(ushort *)(self + 0x38);
    if (1 < uVar6) {
      iVar12 = 0;
      iVar13 = 0;
      this_00 = *(VertexBuffer **)(pSetPieceWayPointStream + 0x20);
      VertexBuffer__Lock(this_00,&local_30,1,0);
      if (1 < *(ushort *)(self + 0x38)) {
        lVar10 = 0;
        uVar5 = 1;
        do {
          iVar13 = (int)uVar5;
          uVar3 = uVar5 & 0xffff;
          iVar12 = iVar13 * 2;
          uVar5 = (ulong)(iVar13 + 1U);
          puVar7 = (uint32_t *)((ulong)(iVar13 - 1U & 0xffff) * 0x20 + *(long *)(self + 0x48));
          uVar1 = *puVar7;
          ((uint32_t *)(lVar10 + (long)local_30))[1] = puVar7[1];
          *(uint32_t *)(lVar10 + (long)local_30) = uVar1;
          puVar7 = (uint32_t *)(uVar3 * 0x20 + *(long *)(self + 0x48));
          puVar8 = (uint32_t *)(lVar10 + 8 + (long)local_30);
          lVar10 = lVar10 + 0x10;
          uVar1 = *puVar7;
          puVar8[1] = puVar7[1];
          *puVar8 = uVar1;
        } while ((int)(iVar13 + 1U) < (int)(uint)*(ushort *)(self + 0x38));
        iVar13 = iVar12 >> 1;
      }
      VertexBuffer__Unlock(this_00);
      pVVar2 = pSetPieceWayPointStream;
      this_01 = Graphics;
      *(int *)(pSetPieceWayPointStream + 0x10) = iVar13;
      *(int *)(pVVar2 + 0x14) = iVar12;
      TGraphics__ResetPixelStages(this_01);
      TGraphics__ResetTexCoordGen(Graphics);
      TGraphics__AddPixelStage(Graphics,1,0,0,0,0,1,0xffffffff);
      if (arg1 == 1) {
        TGraphics__SetPixelColorConstant(Graphics,0,::cOrange);
      }
      else {
        TGraphics__SetPixelColorConstant(Graphics,0,::cBlack);
      }
      pMVar4 = (Matrix4x4 *)TGraphics__GetMatrix(Graphics,0);
      Matrix4x4__Identity(pMVar4);
      TGraphics__Draw(Graphics,pSetPieceWayPointStream,(IndexBuffer *)0x0);
      uVar6 = *(ushort *)(self + 0x38);
      lVar10 = *(long *)self;
    }
    if (uVar6 != 0) {
      uVar5 = 0;
      do {
        uVar3 = uVar5 & 0xffff;
        uVar11 = (int)uVar5 + 1;
        uVar5 = (ulong)uVar11;
        lVar9 = uVar3 * 0x20;
        puVar7 = (uint32_t *)(lVar9 + *(long *)(self + 0x48));
        *(uint32_t *)(lVar10 + 0x24) = *puVar7;
        *(uint32_t *)(lVar10 + 0x28) = puVar7[1];
        *(uint32_t *)(lVar10 + 0x2c) = puVar7[2];
        *(uint32_t *)(lVar10 + 0x30) = puVar7[3];
        Vector2__operator_assign((Vector2 *)(*(long *)self + 0x34),
                           (Vector2 *)(lVar9 + *(long *)(self + 0x48) + 0x10));
        *(uint32_t *)(*(long *)self + 0x3c) =
             *(uint32_t *)(*(long *)(self + 0x48) + 0x18 + lVar9);
        (**(code **)(**(long **)self + 0x10))();
        lVar10 = *(long *)self;
      } while ((int)uVar11 < (int)(uint)*(ushort *)(self + 0x38));
    }
    puVar7 = *(uint32_t **)(self + 0x48);
    *(uint32_t *)(lVar10 + 0x24) = *puVar7;
    *(uint32_t *)(lVar10 + 0x28) = puVar7[1];
    *(uint32_t *)(lVar10 + 0x2c) = puVar7[2];
    *(uint32_t *)(lVar10 + 0x30) = puVar7[3];
    Vector2__operator_assign((Vector2 *)(*(long *)self + 0x34),(Vector2 *)(*(long *)(self + 0x48) + 0x10))
    ;
    *(uint32_t *)(*(long *)self + 0x3c) = *(uint32_t *)(*(long *)(self + 0x48) + 0x18);
  }
  return;
}

/* ======================================================================
 * SetPieceWayPointGroup__SetParentPiece  (Ghidra `SetParentPiece` @ 0059cea0)
 * Signature: uint8_t __thiscall SetParentPiece(SetPieceWayPointGroup * self, TileLevelSetPiece * arg1)
 * Class: SetPieceWayPointGroup
 * Calls: (none)
 * Called by: (none)
 */
/* SetPieceWayPointGroup__SetParentPiece(TileLevelSetPiece*) */

void __thiscall
SetPieceWayPointGroup__SetParentPiece(SetPieceWayPointGroup *self,TileLevelSetPiece *arg1)

{
  *(TileLevelSetPiece **)self = arg1;
  return;
}

/* ======================================================================
 * SetPieceWayPointGroup__EditorRefresh  (Ghidra `EditorRefresh` @ 0059ceb0)
 * Signature: uint8_t __thiscall EditorRefresh(SetPieceWayPointGroup * self)
 * Class: SetPieceWayPointGroup
 * Calls: `Vector2__operator_assign`
 * Called by: (none)
 */
/* SetPieceWayPointGroup__EditorRefresh() */

void __thiscall SetPieceWayPointGroup__EditorRefresh(SetPieceWayPointGroup *self)

{
  long lVar1;
  uint32_t *puVar2;
  
  lVar1 = *(long *)self;
  if (lVar1 != 0) {
    puVar2 = *(uint32_t **)(self + 0x48);
    *puVar2 = *(uint32_t *)(lVar1 + 0x24);
    puVar2[1] = *(uint32_t *)(lVar1 + 0x28);
    puVar2[2] = *(uint32_t *)(lVar1 + 0x2c);
    puVar2[3] = *(uint32_t *)(lVar1 + 0x30);
    Vector2__operator_assign((Vector2 *)(*(long *)(self + 0x48) + 0x10),(Vector2 *)(*(long *)self + 0x34))
    ;
    *(uint32_t *)(*(long *)(self + 0x48) + 0x18) = *(uint32_t *)(*(long *)self + 0x3c);
  }
  return;
}

/* ======================================================================
 * SetPieceWayPointGroup__UpdateParent  (Ghidra `UpdateParent` @ 0059cf00)
 * Signature: uint8_t __thiscall UpdateParent(SetPieceWayPointGroup * self)
 * Class: SetPieceWayPointGroup
 * Calls: `IsWayPointRotateable`, `Vector2__operator_assign`, `Vector2__operator_div_assign__005be2c0`, `Vector2__operator_minus__005be180`, `Vector2__operator_mul__005be200`, `Vector2__operator_plus__005be140`
 * Called by: `GSetPieceWayPoints__Update`
 */
/* SetPieceWayPointGroup__UpdateParent() */

void __thiscall SetPieceWayPointGroup__UpdateParent(SetPieceWayPointGroup *self)

{
  float fVar1;
  float fVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  float *pfVar6;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_ac;
  uint32_t local_88;
  uint32_t local_84;
  Vector2 local_78 [16];
  uint32_t local_68;
  uint32_t local_64;
  Vector2 local_58 [16];
  Vector2 local_48 [16];
  Vector2 local_38 [24];
  long lVar7;
  
  uVar4 = *(uint *)(self + 8);
  lVar7 = *(long *)(self + 0x48);
  local_ac = *(float *)(self + 0xc);
  pfVar6 = (float *)(lVar7 + 0x1c + (ulong)(uVar4 & 0xffff) * 0x20);
  if (*pfVar6 <= local_ac && local_ac != *pfVar6) {
    uVar4 = uVar4 + 1;
    *(uint *)(self + 8) = uVar4;
    if ((int)(uint)*(ushort *)(self + 0x38) <= (int)uVar4) {
      *(uint32_t *)(self + 8) = 0;
      *(uint32_t *)(self + 0xc) = 0;
      local_ac = 0.0;
      uVar4 = 0;
    }
  }
  lVar3 = *(long *)self;
  if (lVar3 != 0) {
    lVar8 = 0;
    if (uVar4 - 1 != 0xffffffff) {
      lVar8 = ((ulong)(uVar4 - 1) & 0xffff) << 5;
    }
    fVar11 = *(float *)(lVar7 + 0x1c + lVar8);
    fVar9 = *(float *)(lVar7 + 0x1c + (ulong)(uVar4 & 0xffff) * 0x20);
    local_84 = *(uint32_t *)(lVar3 + 0x28);
    local_88 = *(uint32_t *)(lVar3 + 0x24);
    Vector2__operator_assign((Vector2 *)(self + 0x60),(Vector2 *)&local_88);
    fVar14 = 0.0;
    fVar9 = fVar9 - fVar11;
    if (fVar9 == 0.0) {
      lVar7 = *(long *)(self + 0x48);
      fVar12 = 0.0;
      fVar10 = 0.0;
      fVar13 = 0.0;
      fVar9 = 0.0;
      fVar11 = DAT_005be894 /* R:1.0f */;
    }
    else {
      lVar7 = *(long *)(self + 0x48);
      fVar9 = (*(float *)(self + 0xc) - fVar11) / fVar9;
      pfVar6 = (float *)((ulong)*(ushort *)(self + 8) * 0x20 + lVar7);
      fVar13 = pfVar6[3] * fVar9;
      fVar11 = DAT_005be894 /* R:1.0f */ - fVar9;
      fVar10 = pfVar6[2] * fVar9;
      fVar12 = pfVar6[1] * fVar9;
      fVar14 = *pfVar6 * fVar9;
    }
    pfVar6 = (float *)(lVar7 + lVar8);
    fVar1 = pfVar6[3];
    fVar2 = pfVar6[2];
    lVar7 = *(long *)self;
    *(ulong *)(lVar7 + 0x24) = CONCAT44(pfVar6[1] * fVar11 + fVar12,*pfVar6 * fVar11 + fVar14);
    *(ulong *)(lVar7 + 0x2c) = CONCAT44(fVar1 * fVar11 + fVar13,fVar2 * fVar11 + fVar10);
    Vector2__operator_mul__005be200(local_38,fVar9);
    Vector2__operator_mul__005be200(local_48,fVar11);
    Vector2__operator_plus__005be140(local_78,local_48);
    Vector2__operator_assign((Vector2 *)(*(long *)self + 0x34),local_78);
    local_64 = *(uint32_t *)(*(long *)self + 0x28);
    local_68 = *(uint32_t *)(*(long *)self + 0x24);
    Vector2__operator_minus__005be180(local_58,(Vector2 *)&local_68);
    Vector2__operator_assign((Vector2 *)(self + 0x68),local_58);
    Vector2__operator_div_assign__005be2c0((Vector2 *)(self + 0x68),fOneFrameTimeStep);
    iVar5 = IsWayPointRotateable(*(uint64_t *)self);
    if (iVar5 == 1) {
      *(float *)(*(long *)self + 0x3c) =
           fVar9 * *(float *)(*(long *)(self + 0x48) + 0x18 + (ulong)*(ushort *)(self + 8) * 0x20) +
           fVar11 * *(float *)(*(long *)(self + 0x48) + 0x18 + lVar8);
    }
    local_ac = *(float *)(self + 0xc);
  }
  *(float *)(self + 0xc) = local_ac + fOneFrameTimeStep;
  return;
}

/* ======================================================================
 * SetPieceWayPointGroup__Reset  (Ghidra `Reset` @ 0059d1a0)
 * Signature: uint8_t __thiscall Reset(SetPieceWayPointGroup * self)
 * Class: SetPieceWayPointGroup
 * Calls: `IsWayPointRotateable`, `Vector2__operator_assign`
 * Called by: `GSetPieceWayPoints__Reset`
 */
/* SetPieceWayPointGroup__Reset() */

void __thiscall SetPieceWayPointGroup__Reset(SetPieceWayPointGroup *self)

{
  long lVar1;
  uint32_t *puVar2;
  int iVar3;
  
  lVar1 = *(long *)self;
  *(uint32_t *)(self + 8) = 0;
  *(uint32_t *)(self + 0xc) = 0;
  if (lVar1 != 0) {
    puVar2 = *(uint32_t **)(self + 0x48);
    *(uint32_t *)(lVar1 + 0x24) = *puVar2;
    *(uint32_t *)(lVar1 + 0x28) = puVar2[1];
    *(uint32_t *)(lVar1 + 0x2c) = puVar2[2];
    *(uint32_t *)(lVar1 + 0x30) = puVar2[3];
    Vector2__operator_assign((Vector2 *)(*(long *)self + 0x34),(Vector2 *)(*(long *)(self + 0x48) + 0x10))
    ;
    *(uint32_t *)(self + 0x60) = *(uint32_t *)(*(long *)self + 0x24);
    *(uint32_t *)(self + 100) = *(uint32_t *)(*(long *)self + 0x28);
    iVar3 = IsWayPointRotateable();
    if (iVar3 == 1) {
      *(uint32_t *)(*(long *)self + 0x3c) = *(uint32_t *)(*(long *)(self + 0x48) + 0x18);
      return;
    }
  }
  return;
}

/* ======================================================================
 * SetPieceWayPointGroup__GetClickedWayPoint  (Ghidra `GetClickedWayPoint` @ 0059d220)
 * Signature: uint8_t __thiscall GetClickedWayPoint(SetPieceWayPointGroup * self)
 * Class: SetPieceWayPointGroup
 * Calls: `Camera__WorldToScreen`, `GetGameCamera`, `GetGamePalette`
 * Called by: `PlaceSetPiece`
 */
/* SetPieceWayPointGroup__GetClickedWayPoint() */

long __thiscall SetPieceWayPointGroup__GetClickedWayPoint(SetPieceWayPointGroup *self)

{
  float fVar1;
  long *plVar2;
  Camera *this_00;
  float *pfVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  float fVar7;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_58;
  float local_54;
  float local_48;
  float local_44;
  float local_38;
  float local_34;
  uint32_t local_2c [3];
  
  local_88 = 0.0;
  local_84 = 0.0;
  local_80 = 0.0;
  local_7c = 0.0;
  local_78 = 0.0;
  local_74 = 0.0;
  local_70 = 0.0;
  local_6c = 0.0;
  local_68 = 0.0;
  local_64 = 0.0;
  local_58 = 0.0;
  local_54 = 0.0;
  local_2c[0] = 0;
  plVar2 = (long *)GetGamePalette();
  (**(code **)(*plVar2 + 0x38))(plVar2,*(uint64_t *)self,&local_58,local_2c,&local_68);
  fVar1 = *(float *)(Mouse + 0xc);
  fVar7 = (float)(*(uint *)(Mouse + 0x10) ^ DAT_005be6f0 /* R:u32=2147483648 */);
  this_00 = (Camera *)GetGameCamera();
  if (1 < *(ushort *)(self + 0x38)) {
    uVar5 = 1;
    do {
      lVar6 = (uVar5 & 0xffff) * 0x20;
      pfVar3 = (float *)(lVar6 + *(long *)(self + 0x48));
      local_80 = pfVar3[2];
      local_7c = pfVar3[3];
      local_6c = pfVar3[3];
      local_78 = pfVar3[4] * local_58 + local_68;
      local_70 = pfVar3[2];
      local_74 = pfVar3[5] * local_54 + local_64;
      local_88 = *pfVar3 - local_78;
      local_84 = pfVar3[1] - local_74;
      local_78 = local_78 + *pfVar3;
      local_74 = local_74 + pfVar3[1];
      Camera__WorldToScreen(this_00,(Vector2 *)&local_48,(FPUVector *)&local_88);
      Camera__WorldToScreen(this_00,(Vector2 *)&local_38,(FPUVector *)&local_78);
      if ((((local_48 < fVar1) && (local_44 < fVar7)) && (fVar1 < local_38)) && (fVar7 < local_34))
      {
        return lVar6 + *(long *)(self + 0x48);
      }
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulong)uVar4;
    } while ((int)uVar4 < (int)(uint)*(ushort *)(self + 0x38));
  }
  return 0;
}
