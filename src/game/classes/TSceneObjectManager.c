/* src/game/classes/TSceneObjectManager.c — 6 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "TSceneObjectManager.h"

/* ======================================================================
 * TSceneObjectManager__TSceneObjectManager  (Ghidra `TSceneObjectManager` @ 0059b410)
 * Signature: uint8_t __thiscall TSceneObjectManager(TSceneObjectManager * self)
 * Class: TSceneObjectManager
 * Calls: `CriticalSection__CriticalSection`
 * Called by: `TEngine__TEngine`
 */
/* TSceneObjectManager__TSceneObjectManager() */

void __thiscall TSceneObjectManager__TSceneObjectManager(TSceneObjectManager *self)

{
  CriticalSection__CriticalSection((CriticalSection *)self);
  *(uint16_t *)(self + 0x2a) = 0;
  *(uint16_t *)(self + 0x28) = 0;
  *(uint16_t *)(self + 0x34) = 1;
  *(uint64_t *)(self + 0x38) = 0;
  *(uint64_t *)(self + 0x40) = 0;
  *(uint32_t *)(self + 0x48) = 0;
  self[0x2c] = (TSceneObjectManager)0x4;
  *(uint32_t *)(self + 0x30) = 0;
  SceneObjectManager = self;
  return;
}

/* ======================================================================
 * TSceneObjectManager__TSceneObjectManager__0059b460  (Ghidra `~TSceneObjectManager` @ 0059b460)
 * Signature: uint8_t __thiscall ~TSceneObjectManager(TSceneObjectManager * self)
 * Class: TSceneObjectManager
 * Calls: `CriticalSection__CriticalSection__005b71d0`, `free`, `operator_delete`
 * Called by: `TEngine__TEngine__00583e20`
 */
/* TSceneObjectManager__TSceneObjectManager__0059b460() */

void __thiscall TSceneObjectManager__TSceneObjectManager__0059b460(TSceneObjectManager *self)

{
  long *plVar1;
  long lVar2;
  ushort uVar3;
  ushort uVar4;
  
  uVar3 = *(ushort *)(self + 0x28);
  if (uVar3 != 0) {
    uVar4 = 0;
    do {
      plVar1 = *(long **)(*(long *)(self + 0x38) + (ulong)uVar4 * 0x28 + 0x20);
      if (plVar1 != (long *)0x0) {
        lVar2 = ((uint64_t *)*plVar1)[-2];
                    /* try { // try from 0059b4a3 to 0059b4a4 has its CatchHandler @ 0059b535 */
        (**(code **)*plVar1)(plVar1);
        operator_delete((void *)((long)plVar1 + lVar2));
        uVar3 = *(ushort *)(self + 0x28);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
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
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
  return;
}

/* ======================================================================
 * TSceneObjectManager__AddSceneObject  (Ghidra `AddSceneObject` @ 0059b5b0)
 * Signature: uint8_t __thiscall AddSceneObject(TSceneObjectManager * self, tagSceneObjectInfo * arg1)
 * Class: TSceneObjectManager
 * Calls: `free`, `malloc`, `memcpy`
 * Called by: (none)
 */
/* TSceneObjectManager__AddSceneObject(TSceneObjectManager__tagSceneObjectInfo const*) */

void __thiscall
TSceneObjectManager__AddSceneObject(TSceneObjectManager *self,tagSceneObjectInfo *arg1)

{
  short sVar1;
  void *pvVar2;
  ushort uVar3;
  uint uVar4;
  void *pvVar5;
  short *psVar6;
  void *pvVar7;
  ulong uVar8;
  short sVar9;
  uint uVar10;
  ulong uVar11;
  uint64_t *puVar12;
  bool bVar13;
  byte bVar14;
  
  bVar14 = 0;
  if (*(int *)(self + 0x48) == -0x5eef3582) {
    uVar10 = (uint)*(ushort *)(self + 0x28);
    if (*(ushort *)(self + 0x2a) <= *(ushort *)(self + 0x28)) {
      uVar3 = *(ushort *)(self + 0x2a) + *(short *)(self + 0x34);
      uVar11 = (ulong)(byte)self[0x2c];
      pvVar5 = (void *)0x0;
      pvVar2 = *(void **)(self + 0x38);
      *(ushort *)(self + 0x2a) = uVar3;
      uVar8 = (ulong)uVar3 * 0x28;
      pvVar7 = malloc(uVar11 + 0x10 + uVar8);
      if (pvVar7 != (void *)0x0) {
        pvVar5 = (void *)((long)pvVar7 + 0x10U + (uVar11 - ((long)pvVar7 + 0x10U) % uVar11) % uVar11
                         );
        *(ulong *)((long)pvVar5 + -0x10) = uVar8;
        *(void **)((long)pvVar5 + -8) = pvVar7;
        if (pvVar2 != (void *)0x0) {
          uVar11 = *(ulong *)((long)pvVar2 + -0x10);
          if (uVar8 <= *(ulong *)((long)pvVar2 + -0x10)) {
            uVar11 = uVar8;
          }
          memcpy(pvVar5,pvVar2,uVar11);
          free(*(void **)((long)pvVar2 + -8));
        }
      }
      pvVar2 = *(void **)(self + 0x40);
      *(void **)(self + 0x38) = pvVar5;
      if (pvVar2 != (void *)0x0) {
        uVar3 = *(ushort *)(self + 0x2a);
        uVar8 = (ulong)(byte)self[0x2c];
        pvVar5 = (void *)0x0;
        uVar11 = (ulong)uVar3 * 2;
        pvVar7 = malloc(uVar8 + 0x10 + uVar11);
        if (pvVar7 != (void *)0x0) {
          pvVar5 = (void *)((long)pvVar7 + 0x10U + (uVar8 - ((long)pvVar7 + 0x10U) % uVar8) % uVar8)
          ;
          *(void **)((long)pvVar5 + -8) = pvVar7;
          *(ulong *)((long)pvVar5 + -0x10) = uVar11;
          uVar8 = *(ulong *)((long)pvVar2 + -0x10);
          if (uVar11 <= *(ulong *)((long)pvVar2 + -0x10)) {
            uVar8 = uVar11;
          }
          memcpy(pvVar5,pvVar2,uVar8);
          free(*(void **)((long)pvVar2 + -8));
          uVar3 = *(ushort *)(self + 0x2a);
        }
        uVar10 = (uint)*(ushort *)(self + 0x28);
        *(void **)(self + 0x40) = pvVar5;
        if (uVar3 <= *(ushort *)(self + 0x28)) goto LAB_0059b698;
        while( true ) {
          uVar4 = uVar10 & 0xffff;
          uVar10 = uVar10 + 1;
          *(uint16_t *)((long)pvVar5 + (ulong)uVar4 * 2) = 0xffff;
          if (uVar3 <= (ushort)uVar10) break;
          pvVar5 = *(void **)(self + 0x40);
        }
      }
      uVar10 = (uint)*(ushort *)(self + 0x28);
    }
  }
  else {
    uVar11 = (ulong)(byte)self[0x2c];
    *(uint32_t *)(self + 0x30) = 0;
    pvVar5 = malloc(uVar11 + 0xd8);
    puVar12 = (uint64_t *)0x0;
    if (pvVar5 != (void *)0x0) {
      puVar12 = (uint64_t *)
                ((long)pvVar5 + 0x10U + (uVar11 - ((long)pvVar5 + 0x10U) % uVar11) % uVar11);
      puVar12[-2] = 200;
      puVar12[-1] = pvVar5;
    }
    bVar13 = ((ulong)puVar12 & 1) != 0;
    *(uint64_t **)(self + 0x38) = puVar12;
    uVar11 = 200;
    if (bVar13) {
      *(uint8_t *)puVar12 = 0;
      uVar11 = 199;
      puVar12 = (uint64_t *)((long)puVar12 + 1);
    }
    if (((ulong)puVar12 & 2) != 0) {
      *(uint16_t *)puVar12 = 0;
      uVar11 = (ulong)((int)uVar11 - 2);
      puVar12 = (uint64_t *)((long)puVar12 + 2);
    }
    if (((ulong)puVar12 & 4) != 0) {
      *(uint32_t *)puVar12 = 0;
      uVar11 = (ulong)((int)uVar11 - 4);
      puVar12 = (uint64_t *)((long)puVar12 + 4);
    }
    for (uVar8 = uVar11 >> 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar12 = 0;
      puVar12 = puVar12 + (ulong)bVar14 * -2 + 1;
    }
    if ((uVar11 & 4) != 0) {
      *(uint32_t *)puVar12 = 0;
      puVar12 = (uint64_t *)((long)puVar12 + 4);
    }
    if ((uVar11 & 2) != 0) {
      *(uint16_t *)puVar12 = 0;
      puVar12 = (uint64_t *)((long)puVar12 + 2);
    }
    if (bVar13) {
      *(uint8_t *)puVar12 = 0;
    }
    *(uint16_t *)(self + 0x28) = 0;
    *(uint16_t *)(self + 0x2a) = 5;
    uVar10 = 0;
    *(uint32_t *)(self + 0x48) = 0xa110ca7e;
    *(uint16_t *)(self + 0x34) = 5;
  }
LAB_0059b698:
  if ((*(int *)(self + 0x30) == 1) && (*(short *)(self + 0x2a) != 0)) {
    psVar6 = *(short **)(self + 0x40);
    sVar9 = 0;
    sVar1 = *psVar6;
    while (sVar1 != -1) {
      psVar6 = psVar6 + 1;
      sVar9 = sVar9 + 1;
      if (sVar9 == *(short *)(self + 0x2a)) goto LAB_0059b69e;
      sVar1 = *psVar6;
    }
    *psVar6 = (short)uVar10;
    uVar10 = (uint)*(ushort *)(self + 0x28);
  }
LAB_0059b69e:
  puVar12 = (uint64_t *)(*(long *)(self + 0x38) + (ulong)uVar10 * 0x28);
  *puVar12 = *(uint64_t *)arg1;
  puVar12[1] = *(uint64_t *)(arg1 + 8);
  puVar12[2] = *(uint64_t *)(arg1 + 0x10);
  puVar12[3] = *(uint64_t *)(arg1 + 0x18);
  puVar12[4] = *(uint64_t *)(arg1 + 0x20);
  *(short *)(self + 0x28) = *(short *)(self + 0x28) + 1;
  return;
}

/* ======================================================================
 * TSceneObjectManager__RemoveSceneObject  (Ghidra `RemoveSceneObject` @ 0059b910)
 * Signature: uint8_t __thiscall RemoveSceneObject(TSceneObjectManager * self, SceneObject * arg1)
 * Class: TSceneObjectManager
 * Calls: (none)
 * Called by: (none)
 */
/* TSceneObjectManager__RemoveSceneObject(SceneObject*) */

void __thiscall
TSceneObjectManager__RemoveSceneObject(TSceneObjectManager *self,SceneObject *arg1)

{
  uint64_t *puVar1;
  ushort *puVar2;
  long *plVar3;
  ushort uVar4;
  short sVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  ushort uVar10;
  ushort uVar11;
  
  uVar10 = *(ushort *)(self + 0x28);
  if (uVar10 == 0) {
    return;
  }
  lVar7 = *(long *)(self + 0x38);
  uVar11 = 0;
  lVar8 = 0x28;
  if (*(SceneObject **)(lVar7 + 0x20) == arg1) {
    uVar9 = 1;
    uVar6 = 0;
  }
  else {
    do {
      uVar11 = uVar11 + 1;
      if (uVar11 == uVar10) {
        return;
      }
      plVar3 = (long *)(lVar7 + 0x20 + lVar8);
      lVar8 = lVar8 + 0x28;
    } while ((SceneObject *)*plVar3 != arg1);
    uVar6 = (uint)uVar11;
    uVar9 = uVar6 + 1;
  }
  if ((uVar9 < uVar10) && ((int)uVar6 < (int)(uVar10 - 1))) {
    lVar8 = (long)(int)uVar6 * 0x28;
    uVar9 = uVar6;
    while( true ) {
      puVar1 = (uint64_t *)(lVar7 + lVar8);
      lVar8 = lVar8 + 0x28;
      uVar9 = uVar9 + 1;
      *puVar1 = *(uint64_t *)(lVar7 + lVar8);
      puVar1[1] = *(uint64_t *)(lVar7 + 8 + lVar8);
      puVar1[2] = *(uint64_t *)(lVar7 + 0x10 + lVar8);
      puVar1[3] = *(uint64_t *)(lVar7 + 0x18 + lVar8);
      puVar1[4] = *(uint64_t *)(lVar7 + 0x20 + lVar8);
      uVar10 = *(ushort *)(self + 0x28);
      if ((int)(uVar10 - 1) <= (int)uVar9) break;
      lVar7 = *(long *)(self + 0x38);
    }
  }
  if ((*(int *)(self + 0x30) == 1) && (uVar11 = *(ushort *)(self + 0x2a), uVar11 != 0)) {
    uVar10 = 0;
    do {
      while( true ) {
        puVar2 = (ushort *)(*(long *)(self + 0x40) + (ulong)uVar10 * 2);
        uVar4 = *puVar2;
        if (uVar4 != uVar6) break;
        *puVar2 = 0xffff;
        uVar11 = *(ushort *)(self + 0x2a);
        uVar10 = uVar10 + 1;
        if (uVar11 <= uVar10) goto LAB_0059ba46;
      }
      if ((uVar6 < uVar4) && ((ushort)(uVar4 - 1) < 0xfffe)) {
        *puVar2 = uVar4 - 1;
        uVar11 = *(ushort *)(self + 0x2a);
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar11);
LAB_0059ba46:
    uVar10 = *(ushort *)(self + 0x28);
  }
  sVar5 = 0;
  if (uVar10 != 0) {
    sVar5 = uVar10 - 1;
  }
  *(short *)(self + 0x28) = sVar5;
  return;
}

/* ======================================================================
 * TSceneObjectManager__Update  (Ghidra `Update` @ 0059ba70)
 * Signature: uint8_t __thiscall Update(TSceneObjectManager * self)
 * Class: TSceneObjectManager
 * Calls: (none)
 * Called by: `TEngine__Update`
 */
/* TSceneObjectManager__Update() */

void __thiscall TSceneObjectManager__Update(TSceneObjectManager *self)

{
  ulong *puVar1;
  code *pcVar2;
  ushort uVar3;
  ushort uVar4;
  
  uVar3 = *(ushort *)(self + 0x28);
  if (uVar3 != 0) {
    uVar4 = 0;
    do {
      puVar1 = (ulong *)(*(long *)(self + 0x38) + (ulong)uVar4 * 0x28);
      pcVar2 = (code *)*puVar1;
      if (pcVar2 != (code *)0x0) {
        if (((ulong)pcVar2 & 1) != 0) {
          pcVar2 = *(code **)(pcVar2 + *(long *)(puVar1[4] + puVar1[1]) + -1);
        }
        (*pcVar2)();
        uVar3 = *(ushort *)(self + 0x28);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
  return;
}

/* ======================================================================
 * TSceneObjectManager__Render  (Ghidra `Render` @ 0059bad0)
 * Signature: uint8_t __thiscall Render(TSceneObjectManager * self)
 * Class: TSceneObjectManager
 * Calls: (none)
 * Called by: (none)
 */
/* TSceneObjectManager__Render() */

void __thiscall TSceneObjectManager__Render(TSceneObjectManager *self)

{
  long lVar1;
  code *pcVar2;
  ushort uVar3;
  ushort uVar4;
  
  uVar4 = *(ushort *)(self + 0x28);
  if (uVar4 != 0) {
    uVar3 = 0;
    do {
      while( true ) {
        lVar1 = *(long *)(self + 0x38) + (ulong)uVar3 * 0x28;
        pcVar2 = *(code **)(lVar1 + 0x10);
        if ((pcVar2 == (code *)0x0) || (*(int *)(*(long *)(lVar1 + 0x20) + 0x50) != 1)) break;
        if (((ulong)pcVar2 & 1) != 0) {
          pcVar2 = *(code **)(pcVar2 + *(long *)(*(long *)(lVar1 + 0x18) + *(long *)(lVar1 + 0x20))
                                       + -1);
        }
        (*pcVar2)();
        uVar4 = *(ushort *)(self + 0x28);
        uVar3 = uVar3 + 1;
        if (uVar4 <= uVar3) {
          return;
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar4);
  }
  return;
}
