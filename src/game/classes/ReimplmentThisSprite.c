/* src/game/classes/ReimplmentThisSprite.c — 6 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "ReimplmentThisSprite.h"

/* ======================================================================
 * ReimplmentThisSprite__DeSerialize  (Ghidra `DeSerialize` @ 00597980)
 * Signature: uint8_t __thiscall DeSerialize(ReimplmentThisSprite * self, void * arg1)
 * Class: ReimplmentThisSprite
 * Calls: (none)
 * Called by: (none)
 */
/* ReimplmentThisSprite__DeSerialize(void const*) */

void __thiscall ReimplmentThisSprite__DeSerialize(ReimplmentThisSprite *self, void *arg1)

{
  ReimplmentThisSprite RVar1;
  uint16_t uVar2;
  uint32_t uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  ReimplmentThisSprite *pRVar7;
  bool bVar8;

  if (arg1 != (void *)0x0) {
    pRVar7 = self + 0x80;
    if (arg1 != pRVar7) {
      bVar8 = ((ulong)pRVar7 & 1) != 0;
      uVar4 = 0xa0;
      if (bVar8) {
        RVar1 = *(ReimplmentThisSprite *)arg1;
        pRVar7 = self + 0x81;
        arg1 = (void *)((long)arg1 + 1);
        self[0x80] = RVar1;
        uVar4 = 0x9f;
      }
      if (((ulong)pRVar7 & 2) != 0) {
        uVar2 = *(uint16_t *)arg1;
        uVar4 = uVar4 - 2;
        arg1 = (void *)((long)arg1 + 2);
        *(uint16_t *)pRVar7 = uVar2;
        pRVar7 = pRVar7 + 2;
      }
      if (((ulong)pRVar7 & 4) != 0) {
        uVar3 = *(uint32_t *)arg1;
        uVar4 = uVar4 - 4;
        arg1 = (void *)((long)arg1 + 4);
        *(uint32_t *)pRVar7 = uVar3;
        pRVar7 = pRVar7 + 4;
      }
      for (uVar5 = (ulong)(uVar4 >> 3); uVar5 != 0; uVar5 = uVar5 - 1) {
        *(uint64_t *)pRVar7 = *(uint64_t *)arg1;
        arg1 = (uint64_t *)((long)arg1 + 8);
        pRVar7 = pRVar7 + 8;
      }
      if ((uVar4 & 4) == 0) {
        lVar6 = 0;
      } else {
        *(uint32_t *)pRVar7 = *(uint32_t *)arg1;
        lVar6 = 4;
      }
      if ((uVar4 & 2) != 0) {
        *(uint16_t *)(pRVar7 + lVar6) = *(uint16_t *)((long)arg1 + lVar6);
        lVar6 = lVar6 + 2;
      }
      if (bVar8) {
        pRVar7[lVar6] = *(ReimplmentThisSprite *)((long)arg1 + lVar6);
        *(uint32_t *)(self + 0x9c) = 1;
        return;
      }
    }
    *(uint32_t *)(self + 0x9c) = 1;
  }
  return;
}

/* ======================================================================
 * ReimplmentThisSprite__Serialize  (Ghidra `Serialize` @ 00597990)
 * Signature: uint8_t __thiscall Serialize(ReimplmentThisSprite * self, void * arg1)
 * Class: ReimplmentThisSprite
 * Calls: (none)
 * Called by: (none)
 */
/* ReimplmentThisSprite__Serialize(void*) */

uint64_t __thiscall ReimplmentThisSprite__Serialize(ReimplmentThisSprite *self, void *arg1)

{
  uint16_t uVar1;
  uint32_t uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  ReimplmentThisSprite *pRVar6;
  bool bVar7;

  if ((arg1 != (void *)0x0) && (pRVar6 = self + 0x80, arg1 != pRVar6)) {
    uVar3 = 0xa0;
    bVar7 = ((ulong)arg1 & 1) != 0;
    if (bVar7) {
      pRVar6 = self + 0x81;
      *(ReimplmentThisSprite *)arg1 = self[0x80];
      arg1 = (void *)((long)arg1 + 1);
      uVar3 = 0x9f;
    }
    if (((ulong)arg1 & 2) != 0) {
      uVar1 = *(uint16_t *)pRVar6;
      uVar3 = uVar3 - 2;
      pRVar6 = pRVar6 + 2;
      *(uint16_t *)arg1 = uVar1;
      arg1 = (void *)((long)arg1 + 2);
    }
    if (((ulong)arg1 & 4) != 0) {
      uVar2 = *(uint32_t *)pRVar6;
      uVar3 = uVar3 - 4;
      pRVar6 = pRVar6 + 4;
      *(uint32_t *)arg1 = uVar2;
      arg1 = (void *)((long)arg1 + 4);
    }
    for (uVar4 = (ulong)(uVar3 >> 3); uVar4 != 0; uVar4 = uVar4 - 1) {
      *(uint64_t *)arg1 = *(uint64_t *)pRVar6;
      pRVar6 = pRVar6 + 8;
      arg1 = (uint64_t *)((long)arg1 + 8);
    }
    if ((uVar3 & 4) == 0) {
      lVar5 = 0;
    } else {
      *(uint32_t *)arg1 = *(uint32_t *)pRVar6;
      lVar5 = 4;
    }
    if ((uVar3 & 2) != 0) {
      *(uint16_t *)((long)arg1 + lVar5) = *(uint16_t *)(pRVar6 + lVar5);
      lVar5 = lVar5 + 2;
    }
    if (bVar7) {
      *(ReimplmentThisSprite *)((long)arg1 + lVar5) = pRVar6[lVar5];
      return 0xa0;
    }
  }
  return 0xa0;
}

/* ======================================================================
 * ReimplmentThisSprite__ReimplmentThisSprite__005979a0  (Ghidra `~ReimplmentThisSprite` @ 005979a0)
 * Signature: uint8_t __thiscall ~ReimplmentThisSprite(ReimplmentThisSprite * self)
 * Class: ReimplmentThisSprite
 * Calls: `ReimplmentThisSprite__ReimplmentThisSprite__005979b0`, `SceneObject3D__SceneObject3D__0059b1d0`
 * Called by: (none)
 */
/* ReimplmentThisSprite__ReimplmentThisSprite__005979b0() */

void __thiscall ReimplmentThisSprite__ReimplmentThisSprite__005979b0(ReimplmentThisSprite *self)

{
  *(uint8_t ***)self = &PTR__ReimplmentThisSprite_005dd270;
  SceneObject3D__SceneObject3D__0059b1d0((SceneObject3D *)self);
  return;
}

/* ======================================================================
 * ReimplmentThisSprite__ReimplmentThisSprite__005979b0  (Ghidra `~ReimplmentThisSprite` @ 005979b0)
 * Signature: uint8_t __thiscall ~ReimplmentThisSprite(ReimplmentThisSprite * self)
 * Class: ReimplmentThisSprite
 * Calls: `SceneObject3D__SceneObject3D__0059b1d0`, `operator_delete`
 * Called by: `Cursor3D__Cursor3D`, `Cursor3D__Cursor3D__00581bf0`, `ReimplmentThisSprite__ReimplmentThisSprite__005979a0`
 */
/* ReimplmentThisSprite__ReimplmentThisSprite__005979b0() */

void __thiscall ReimplmentThisSprite__ReimplmentThisSprite__005979b0(ReimplmentThisSprite *self)

{
  *(uint8_t ***)self = &PTR__ReimplmentThisSprite_005dd270;
  SceneObject3D__SceneObject3D__0059b1d0((SceneObject3D *)self);
  operator_delete(self);
  return;
}

/* ======================================================================
 * ReimplmentThisSprite__ReimplmentThisSprite__005979d0  (Ghidra `ReimplmentThisSprite` @ 005979d0)
 * Signature: uint8_t __thiscall ReimplmentThisSprite(ReimplmentThisSprite * self)
 * Class: ReimplmentThisSprite
 * Calls: `CriticalSection__CriticalSection`, `TGraphics__GPUState_GPUState`
 * Called by: `Cursor3D__Cursor3D__00581c50`, `ReimplmentThisSprite__ReimplmentThisSprite`
 */
/* ReimplmentThisSprite__ReimplmentThisSprite__005979d0() */

void __thiscall ReimplmentThisSprite__ReimplmentThisSprite__005979d0(ReimplmentThisSprite *self)

{
  uint64_t uVar1;

  *(uint64_t *)(self + 0x48) = 0;
  *(uint32_t *)(self + 0x50) = 1;
  *(uint8_t ***)self = &PTR__SceneObject3D_005dd410;
  /* try { // try from 005979f2 to 005979f6 has its CatchHandler @ 00597b94 */
  CriticalSection__CriticalSection((CriticalSection *)(self + 0x58));
  uVar1 = vDefaultStart3D;
  *(uint32_t *)(self + 0x80) = 0;
  *(uint32_t *)(self + 0x84) = 0;
  *(uint32_t *)(self + 0x88) = 0x3f800000;
  *(uint32_t *)(self + 0x8c) = 0;
  *(uint32_t *)(self + 0x90) = 0;
  *(uint64_t *)(self + 0xa0) = uVar1;
  uVar1 = DAT_008224a8 /* R:7.541182974059577e-39f */;
  *(uint32_t *)(self + 0x94) = 0;
  *(uint32_t *)(self + 0x98) = 0;
  *(uint32_t *)(self + 0x9c) = 1;
  *(uint32_t *)(self + 0xb0) = 0;
  *(uint64_t *)(self + 0xa8) = uVar1;
  *(uint32_t *)(self + 0xb4) = 0;
  *(uint32_t *)(self + 0xb8) = 0;
  *(uint32_t *)(self + 0xbc) = 0;
  *(uint32_t *)(self + 0xc0) = 0;
  *(uint32_t *)(self + 0xc4) = 0;
  *(uint32_t *)(self + 200) = 0;
  *(uint32_t *)(self + 0xcc) = 0;
  *(uint32_t *)(self + 0xd0) = 0x3f800000;
  *(uint32_t *)(self + 0xd4) = 0x3f800000;
  *(uint32_t *)(self + 0xd8) = 0x3f800000;
  *(uint32_t *)(self + 0xdc) = 0;
  *(uint32_t *)(self + 0xe0) = 0;
  *(uint32_t *)(self + 0xe4) = 0;
  *(uint32_t *)(self + 0xe8) = 0;
  *(uint32_t *)(self + 0xec) = 0x3f800000;
  *(uint32_t *)(self + 0xf0) = 0;
  *(uint32_t *)(self + 0xf4) = 0;
  *(uint32_t *)(self + 0xf8) = 0;
  *(uint32_t *)(self + 0xfc) = 0;
  *(uint32_t *)(self + 0x100) = 0;
  *(uint32_t *)(self + 0x104) = 0;
  *(uint32_t *)(self + 0x108) = 0;
  *(uint32_t *)(self + 0x10c) = 0;
  *(uint32_t *)(self + 0x110) = 0;
  *(uint32_t *)(self + 0x114) = 0;
  *(uint32_t *)(self + 0x118) = 0;
  *(uint32_t *)(self + 0x11c) = 0;
  /* try { // try from 00597b82 to 00597b86 has its CatchHandler @ 00597ba3 */
  TGraphics__GPUState_GPUState((GPUState *)(self + 0x120));
  *(uint8_t ***)self = &PTR__ReimplmentThisSprite_005dd270;
  return;
}

/* ======================================================================
 * ReimplmentThisSprite__RenderSprite  (Ghidra `RenderSprite` @ 00597bc0)
 * Signature: uint8_t __thiscall RenderSprite(ReimplmentThisSprite * self)
 * Class: ReimplmentThisSprite
 * Calls: `TGraphics__SetActiveGPUBlock`, `TWindow__getAspectRatio`
 * Called by: (none)
 */
/* ReimplmentThisSprite__RenderSprite() */

void __thiscall ReimplmentThisSprite__RenderSprite(ReimplmentThisSprite *self)

{
  float fVar1;
  TGraphics *this_00;
  Matrix4x4 local_78[64];
  uint32_t local_38;
  uint32_t local_34;
  uint32_t local_30;
  uint32_t local_2c;
  uint32_t local_28;
  float local_24;
  uint32_t local_20;
  uint32_t local_1c;

  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  Matrix4x4__TransformVector3((FPUVector *)&local_38, (FPUVector *)(self + 0xa0), local_78, 1);
  fVar1 = *(float *)(self + 0xd4);
  local_24 = (float)TWindow__getAspectRatio(Window);
  local_24 = local_24 * fVar1;
  local_28 = *(uint32_t *)(self + 0xd0);
  local_1c = 0;
  local_20 = 0x3f800000;
  Matrix4x4__Transformation3D(local_78, (FPUVector *)&local_28, (TQuaternion *)0x0,
                              (FPUVector *)&local_38);
  this_00 = Graphics;
  *(uint64_t *)(self + 0x4c8) = *(uint64_t *)(Graphics + 0xaa0);
  TGraphics__SetActiveGPUBlock(this_00, (GPUState *)(self + 0x120));
  TGraphics__SetActiveGPUBlock(Graphics, (GPUState *)0x0);
  return;
}
