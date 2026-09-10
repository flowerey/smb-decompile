/* src/game/classes/SceneObject3D.c — 4 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "SceneObject3D.h"

/* ======================================================================
 * SceneObject3D__SceneObject3D  (Ghidra `~SceneObject3D` @ 0059adc0)
 * Signature: uint8_t __thiscall ~SceneObject3D(SceneObject3D * self)
 * Class: SceneObject3D
 * Calls: `CriticalSection__CriticalSection__005b71d0`, `SceneObject3D__SceneObject3D__0059b1d0`, `free`
 * Called by: (none)
 */
/* SceneObject3D__SceneObject3D__0059b1d0() */

void __thiscall SceneObject3D__SceneObject3D__0059b1d0(SceneObject3D *self)

{
  *(uint8_t ***)self = &PTR__SceneObject3D_005dd410;
  if (*(long *)(self + 0x48) != 0) {
    free(*(void **)(*(long *)(self + 0x48) + -8));
  }
                    /* try { // try from 0059ade1 to 0059ade5 has its CatchHandler @ 0059adef */
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)(self + 0x58));
  *(uint8_t ***)self = &PTR__SceneObject_005bf710;
  return;
}

/* ======================================================================
 * SceneObject3D__DeSerialize  (Ghidra `DeSerialize` @ 0059afe0)
 * Signature: uint8_t __thiscall DeSerialize(SceneObject3D * self, void * arg1)
 * Class: SceneObject3D
 * Calls: (none)
 * Called by: (none)
 */
/* SceneObject3D__DeSerialize(void const*) */

void __thiscall SceneObject3D__DeSerialize(SceneObject3D *self,void *arg1)

{
  SceneObject3D SVar1;
  uint16_t uVar2;
  uint32_t uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  SceneObject3D *pSVar7;
  bool bVar8;
  
  if (arg1 != (void *)0x0) {
    pSVar7 = self + 0x80;
    if (arg1 != pSVar7) {
      bVar8 = ((ulong)pSVar7 & 1) != 0;
      uVar4 = 0xa0;
      if (bVar8) {
        SVar1 = *(SceneObject3D *)arg1;
        pSVar7 = self + 0x81;
        arg1 = (void *)((long)arg1 + 1);
        self[0x80] = SVar1;
        uVar4 = 0x9f;
      }
      if (((ulong)pSVar7 & 2) != 0) {
        uVar2 = *(uint16_t *)arg1;
        uVar4 = uVar4 - 2;
        arg1 = (void *)((long)arg1 + 2);
        *(uint16_t *)pSVar7 = uVar2;
        pSVar7 = pSVar7 + 2;
      }
      if (((ulong)pSVar7 & 4) != 0) {
        uVar3 = *(uint32_t *)arg1;
        uVar4 = uVar4 - 4;
        arg1 = (void *)((long)arg1 + 4);
        *(uint32_t *)pSVar7 = uVar3;
        pSVar7 = pSVar7 + 4;
      }
      for (uVar5 = (ulong)(uVar4 >> 3); uVar5 != 0; uVar5 = uVar5 - 1) {
        *(uint64_t *)pSVar7 = *(uint64_t *)arg1;
        arg1 = (uint64_t *)((long)arg1 + 8);
        pSVar7 = pSVar7 + 8;
      }
      if ((uVar4 & 4) == 0) {
        lVar6 = 0;
      }
      else {
        *(uint32_t *)pSVar7 = *(uint32_t *)arg1;
        lVar6 = 4;
      }
      if ((uVar4 & 2) != 0) {
        *(uint16_t *)(pSVar7 + lVar6) = *(uint16_t *)((long)arg1 + lVar6);
        lVar6 = lVar6 + 2;
      }
      if (bVar8) {
        pSVar7[lVar6] = *(SceneObject3D *)((long)arg1 + lVar6);
        *(uint32_t *)(self + 0x9c) = 1;
        return;
      }
    }
    *(uint32_t *)(self + 0x9c) = 1;
  }
  return;
}

/* ======================================================================
 * SceneObject3D__Serialize  (Ghidra `Serialize` @ 0059b0e0)
 * Signature: uint8_t __thiscall Serialize(SceneObject3D * self, void * arg1)
 * Class: SceneObject3D
 * Calls: (none)
 * Called by: (none)
 */
/* SceneObject3D__Serialize(void*) */

uint64_t __thiscall SceneObject3D__Serialize(SceneObject3D *self,void *arg1)

{
  uint16_t uVar1;
  uint32_t uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  SceneObject3D *pSVar6;
  bool bVar7;
  
  if ((arg1 != (void *)0x0) && (pSVar6 = self + 0x80, arg1 != pSVar6)) {
    uVar3 = 0xa0;
    bVar7 = ((ulong)arg1 & 1) != 0;
    if (bVar7) {
      pSVar6 = self + 0x81;
      *(SceneObject3D *)arg1 = self[0x80];
      arg1 = (void *)((long)arg1 + 1);
      uVar3 = 0x9f;
    }
    if (((ulong)arg1 & 2) != 0) {
      uVar1 = *(uint16_t *)pSVar6;
      uVar3 = uVar3 - 2;
      pSVar6 = pSVar6 + 2;
      *(uint16_t *)arg1 = uVar1;
      arg1 = (void *)((long)arg1 + 2);
    }
    if (((ulong)arg1 & 4) != 0) {
      uVar2 = *(uint32_t *)pSVar6;
      uVar3 = uVar3 - 4;
      pSVar6 = pSVar6 + 4;
      *(uint32_t *)arg1 = uVar2;
      arg1 = (void *)((long)arg1 + 4);
    }
    for (uVar4 = (ulong)(uVar3 >> 3); uVar4 != 0; uVar4 = uVar4 - 1) {
      *(uint64_t *)arg1 = *(uint64_t *)pSVar6;
      pSVar6 = pSVar6 + 8;
      arg1 = (uint64_t *)((long)arg1 + 8);
    }
    if ((uVar3 & 4) == 0) {
      lVar5 = 0;
    }
    else {
      *(uint32_t *)arg1 = *(uint32_t *)pSVar6;
      lVar5 = 4;
    }
    if ((uVar3 & 2) != 0) {
      *(uint16_t *)((long)arg1 + lVar5) = *(uint16_t *)(pSVar6 + lVar5);
      lVar5 = lVar5 + 2;
    }
    if (bVar7) {
      *(SceneObject3D *)((long)arg1 + lVar5) = pSVar6[lVar5];
      return 0xa0;
    }
  }
  return 0xa0;
}

/* ======================================================================
 * SceneObject3D__SceneObject3D__0059b1d0  (Ghidra `~SceneObject3D` @ 0059b1d0)
 * Signature: uint8_t __thiscall ~SceneObject3D(SceneObject3D * self)
 * Class: SceneObject3D
 * Calls: `CriticalSection__CriticalSection__005b71d0`, `free`, `operator_delete`
 * Called by: `ReimplmentThisSprite__ReimplmentThisSprite__005979a0`, `ReimplmentThisSprite__ReimplmentThisSprite__005979b0`, `SceneObject3D__SceneObject3D`
 */
/* SceneObject3D__SceneObject3D__0059b1d0() */

void __thiscall SceneObject3D__SceneObject3D__0059b1d0(SceneObject3D *self)

{
  *(uint8_t ***)self = &PTR__SceneObject3D_005dd410;
  if (*(long *)(self + 0x48) != 0) {
    free(*(void **)(*(long *)(self + 0x48) + -8));
  }
                    /* try { // try from 0059b1f1 to 0059b1f5 has its CatchHandler @ 0059b206 */
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)(self + 0x58));
  *(uint8_t ***)self = &PTR__SceneObject_005bf710;
  operator_delete(self);
  return;
}
