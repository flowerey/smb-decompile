/* src/game/classes/BoundingVolume3D.c — 5 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "BoundingVolume3D.h"

/* ======================================================================
 * BoundingVolume3D__BoundingVolume3D  (Ghidra `BoundingVolume3D` @ 0057d8e0)
 * Signature: uint8_t __thiscall BoundingVolume3D(BoundingVolume3D * self)
 * Class: BoundingVolume3D
 * Calls: `CriticalSection__CriticalSection`
 * Called by: (none)
 */
/* BoundingVolume3D__BoundingVolume3D() */

void __thiscall BoundingVolume3D__BoundingVolume3D(BoundingVolume3D *self)

{
  *self = (BoundingVolume3D)((byte)*self & 0xf | 0x10);
  CriticalSection__CriticalSection((CriticalSection *)(self + 8));
  *(uint16_t *)(self + 0x32) = 0;
  *(uint16_t *)(self + 0x30) = 0;
  *(uint16_t *)(self + 0x3c) = 1;
  *(uint64_t *)(self + 0x40) = 0;
  *(uint64_t *)(self + 0x48) = 0;
  *(uint32_t *)(self + 0x50) = 0;
  self[0x34] = (BoundingVolume3D)0x4;
  *(uint32_t *)(self + 0x38) = 0;
  *self = (BoundingVolume3D)((byte)*self & 0xf0 | 5);
  return;
}

/* ======================================================================
 * BoundingVolume3D__BoundingVolume3D__0057d940  (Ghidra `~BoundingVolume3D` @ 0057d940)
 * Signature: uint8_t __thiscall ~BoundingVolume3D(BoundingVolume3D * self)
 * Class: BoundingVolume3D
 * Calls: `CriticalSection__CriticalSection__005b71d0`, `free`
 * Called by: (none)
 */
/* BoundingVolume3D__BoundingVolume3D__0057d940() */

void __thiscall BoundingVolume3D__BoundingVolume3D__0057d940(BoundingVolume3D *self)

{
  long lVar1;
  ushort uVar2;
  ushort uVar3;
  
  uVar2 = *(ushort *)(self + 0x30);
  if (uVar2 != 0) {
    uVar3 = 0;
    do {
      lVar1 = *(long *)(*(long *)(self + 0x40) + (ulong)uVar3 * 8);
      if (lVar1 != 0) {
        free(*(void **)(lVar1 + -8));
        uVar2 = *(ushort *)(self + 0x30);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  if (*(int *)(self + 0x50) != -0x5eef3582) {
    CriticalSection__CriticalSection__005b71d0((CriticalSection *)(self + 8));
    return;
  }
  *(uint32_t *)(self + 0x50) = 0;
  free(*(void **)(*(long *)(self + 0x40) + -8));
  if (*(int *)(self + 0x38) == 1) {
    free(*(void **)(*(long *)(self + 0x48) + -8));
  }
  *(uint32_t *)(self + 0x50) = 0;
  *(uint16_t *)(self + 0x32) = 0;
  *(uint16_t *)(self + 0x30) = 0;
  *(uint64_t *)(self + 0x40) = 0;
  *(uint64_t *)(self + 0x48) = 0;
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)(self + 8));
  return;
}

/* ======================================================================
 * BoundingVolume3D__AddBounds  (Ghidra `AddBounds` @ 0057da00)
 * Signature: uint8_t __thiscall AddBounds(BoundingVolume3D * self, Bounds * arg1)
 * Class: BoundingVolume3D
 * Calls: `free`, `malloc`, `memcpy`
 * Called by: (none)
 */
/* BoundingVolume3D__AddBounds(Bounds*) */

void __thiscall BoundingVolume3D__AddBounds(BoundingVolume3D *self,Bounds *arg1)

{
  void *pvVar1;
  ushort uVar2;
  void *pvVar3;
  ushort *puVar4;
  void *pvVar5;
  ulong uVar6;
  short sVar7;
  ushort uVar8;
  ulong uVar9;
  uint64_t *puVar10;
  
  if (*(int *)(self + 0x50) == -0x5eef3582) {
    uVar2 = *(ushort *)(self + 0x30);
    if (*(ushort *)(self + 0x32) <= uVar2) {
      uVar2 = *(ushort *)(self + 0x32) + *(short *)(self + 0x3c);
      uVar9 = (ulong)(byte)self[0x34];
      pvVar3 = (void *)0x0;
      pvVar1 = *(void **)(self + 0x40);
      *(ushort *)(self + 0x32) = uVar2;
      uVar6 = (ulong)uVar2 * 8;
      pvVar5 = malloc(uVar9 + 0x10 + uVar6);
      if (pvVar5 != (void *)0x0) {
        pvVar3 = (void *)((long)pvVar5 + 0x10U + (uVar9 - ((long)pvVar5 + 0x10U) % uVar9) % uVar9);
        *(ulong *)((long)pvVar3 + -0x10) = uVar6;
        *(void **)((long)pvVar3 + -8) = pvVar5;
        if (pvVar1 != (void *)0x0) {
          uVar9 = *(ulong *)((long)pvVar1 + -0x10);
          if (uVar6 < uVar9 || uVar6 - uVar9 == 0) {
            uVar9 = uVar6;
          }
          memcpy(pvVar3,pvVar1,uVar9);
          free(*(void **)((long)pvVar1 + -8));
        }
      }
      pvVar1 = *(void **)(self + 0x48);
      *(void **)(self + 0x40) = pvVar3;
      if (pvVar1 != (void *)0x0) {
        uVar8 = *(ushort *)(self + 0x32);
        uVar9 = (ulong)(byte)self[0x34];
        pvVar3 = (void *)0x0;
        uVar6 = (ulong)uVar8 * 2;
        pvVar5 = malloc(uVar9 + 0x10 + uVar6);
        if (pvVar5 != (void *)0x0) {
          pvVar3 = (void *)((long)pvVar5 + 0x10U + (uVar9 - ((long)pvVar5 + 0x10U) % uVar9) % uVar9)
          ;
          *(void **)((long)pvVar3 + -8) = pvVar5;
          *(ulong *)((long)pvVar3 + -0x10) = uVar6;
          uVar9 = *(ulong *)((long)pvVar1 + -0x10);
          if (uVar6 <= *(ulong *)((long)pvVar1 + -0x10)) {
            uVar9 = uVar6;
          }
          memcpy(pvVar3,pvVar1,uVar9);
          free(*(void **)((long)pvVar1 + -8));
          uVar8 = *(ushort *)(self + 0x32);
        }
        uVar2 = *(ushort *)(self + 0x30);
        *(void **)(self + 0x48) = pvVar3;
        if (uVar8 <= uVar2) goto LAB_0057dac1;
        while( true ) {
          uVar6 = (ulong)uVar2;
          uVar2 = uVar2 + 1;
          *(uint16_t *)((long)pvVar3 + uVar6 * 2) = 0xffff;
          if (uVar8 <= uVar2) break;
          pvVar3 = *(void **)(self + 0x48);
        }
      }
      uVar2 = *(ushort *)(self + 0x30);
    }
  }
  else {
    uVar6 = (ulong)(byte)self[0x34];
    *(uint32_t *)(self + 0x38) = 0;
    pvVar3 = malloc(uVar6 + 0x38);
    puVar10 = (uint64_t *)0x0;
    if (pvVar3 != (void *)0x0) {
      puVar10 = (uint64_t *)
                ((long)pvVar3 + 0x10U + (uVar6 - ((long)pvVar3 + 0x10U) % uVar6) % uVar6);
      puVar10[-2] = 0x28;
      puVar10[-1] = pvVar3;
    }
    *(uint64_t **)(self + 0x40) = puVar10;
    *puVar10 = 0;
    puVar10[1] = 0;
    puVar10[2] = 0;
    puVar10[3] = 0;
    puVar10[4] = 0;
    uVar2 = 0;
    *(uint16_t *)(self + 0x30) = 0;
    *(uint16_t *)(self + 0x32) = 5;
    *(uint32_t *)(self + 0x50) = 0xa110ca7e;
    *(uint16_t *)(self + 0x3c) = 5;
  }
LAB_0057dac1:
  if ((*(int *)(self + 0x38) == 1) && (*(short *)(self + 0x32) != 0)) {
    puVar4 = *(ushort **)(self + 0x48);
    sVar7 = 0;
    uVar8 = *puVar4;
    while (uVar8 != 0xffff) {
      puVar4 = puVar4 + 1;
      sVar7 = sVar7 + 1;
      if (sVar7 == *(short *)(self + 0x32)) goto LAB_0057dac7;
      uVar8 = *puVar4;
    }
    *puVar4 = uVar2;
    uVar2 = *(ushort *)(self + 0x30);
  }
LAB_0057dac7:
  *(Bounds **)(*(long *)(self + 0x40) + (ulong)uVar2 * 8) = arg1;
  *(short *)(self + 0x30) = *(short *)(self + 0x30) + 1;
  return;
}

/* ======================================================================
 * BoundingVolume3D__Change  (Ghidra `Change` @ 0057dc90)
 * Signature: uint8_t __thiscall Change(BoundingVolume3D * self, FPUVector * arg1, TQuaternion * arg2, FPUVector * arg3)
 * Class: BoundingVolume3D
 * Calls: `Matrix4x4__operator_assign`
 * Called by: (none)
 */
/* BoundingVolume3D__Change(FPUVector const&, TQuaternion const&, FPUVector const&) */

void __thiscall
BoundingVolume3D__Change
          (BoundingVolume3D *self,FPUVector *arg1,TQuaternion *arg2,FPUVector *arg3)

{
  byte *pbVar1;
  ushort uVar2;
  ushort uVar3;
  
  uVar2 = *(ushort *)(self + 0x30);
  if (uVar2 != 0) {
    uVar3 = 0;
    do {
      while (pbVar1 = *(byte **)(*(long *)(self + 0x40) + (ulong)uVar3 * 8), (*pbVar1 & 0xf) == 2) {
        uVar3 = uVar3 + 1;
        *(uint32_t *)(pbVar1 + 0x14) = *(uint32_t *)arg1;
        *(uint32_t *)(pbVar1 + 0x18) = *(uint32_t *)(arg1 + 4);
        *(uint32_t *)(pbVar1 + 0x1c) = *(uint32_t *)(arg1 + 8);
        *(uint32_t *)(pbVar1 + 0x20) = *(uint32_t *)(arg1 + 0xc);
        *(uint32_t *)(pbVar1 + 4) = *(uint32_t *)arg1;
        *(uint32_t *)(pbVar1 + 8) = *(uint32_t *)(arg1 + 4);
        *(uint32_t *)(pbVar1 + 0xc) = *(uint32_t *)(arg1 + 8);
        *(uint32_t *)(pbVar1 + 0x10) = *(uint32_t *)(arg1 + 0xc);
        Matrix4x4__Transformation3D((Matrix4x4 *)(pbVar1 + 0x24),(FPUVector *)0x0,arg2,arg3);
        Matrix4x4__operator_assign((Matrix4x4 *)(pbVar1 + 100),(Matrix4x4 *)(pbVar1 + 0x24));
        uVar2 = *(ushort *)(self + 0x30);
        if (uVar2 <= uVar3) {
          return;
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  return;
}

/* ======================================================================
 * BoundingVolume3D__Update  (Ghidra `Update` @ 0057def0)
 * Signature: uint8_t __thiscall Update(BoundingVolume3D * self, FPUVector * arg1, TQuaternion * arg2, FPUVector * arg3)
 * Class: BoundingVolume3D
 * Calls: `BoundingBox__Update`
 * Called by: (none)
 */
/* BoundingVolume3D__Update(FPUVector const&, TQuaternion const&, FPUVector const&) */

void __thiscall
BoundingVolume3D__Update
          (BoundingVolume3D *self,FPUVector *arg1,TQuaternion *arg2,FPUVector *arg3)

{
  BoundingBox *this_00;
  ushort uVar1;
  ushort uVar2;
  
  uVar1 = *(ushort *)(self + 0x30);
  if (uVar1 != 0) {
    uVar2 = 0;
    do {
      while (this_00 = *(BoundingBox **)(*(long *)(self + 0x40) + (ulong)uVar2 * 8),
            ((byte)*this_00 & 0xf) == 2) {
        BoundingBox__Update(this_00,arg1,arg2,arg3);
        uVar1 = *(ushort *)(self + 0x30);
        uVar2 = uVar2 + 1;
        if (uVar1 <= uVar2) {
          return;
        }
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  return;
}
