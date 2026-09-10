/* src/game/classes/TileLevelLightMap.c — 12 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "TileLevelLightMap.h"

/* ======================================================================
 * TileLevelLightMap__TileLevelLightMap  (Ghidra `TileLevelLightMap` @ 0046f370)
 * Signature: uint8_t __thiscall TileLevelLightMap(TileLevelLightMap * self)
 * Class: TileLevelLightMap
 * Calls: `CreateTileLightMapResources`, `DestroyTileLightMapResources`, `TResourceCreator__AddResourceCreationFunction`, `TResourceCreator__AddResourceDestroyFunction`
 * Called by: `GSuperMeatBoy__Initialize__00516f60`
 */
/* TileLevelLightMap__TileLevelLightMap() */

void __thiscall TileLevelLightMap__TileLevelLightMap(TileLevelLightMap *self)

{
  uint64_t uVar1;
  uint64_t uVar2;

  *(uint32_t *)self = 0;
  *(uint32_t *)(self + 4) = 0;
  *(uint32_t *)(self + 8) = 0;
  *(uint32_t *)(self + 0xc) = 0;
  uVar1 = ::cWhite;
  *(uint32_t *)(self + 0x20) = 0x3f800000;
  *(uint32_t *)(self + 0x60) = 0x3f800000;
  *(uint32_t *)(self + 0xa0) = 0x3f800000;
  *(uint32_t *)(self + 0x24) = 0;
  *(uint32_t *)(self + 0x28) = 0;
  *(uint64_t *)(self + 0x10) = uVar1;
  uVar2 = DAT_00818ef8 /* R:5.268882225861312e-43f */;
  *(uint64_t *)(self + 0x50) = uVar1;
  *(uint64_t *)(self + 0x90) = uVar1;
  *(uint64_t *)(self + 0x30) = 0;
  *(uint32_t *)(self + 0x38) = 1;
  *(uint64_t *)(self + 0x18) = uVar2;
  *(uint64_t *)(self + 0x58) = uVar2;
  *(uint64_t *)(self + 0x98) = uVar2;
  *(uint32_t *)(self + 0x40) = 0;
  *(uint32_t *)(self + 0x44) = 0;
  *(uint32_t *)(self + 0x48) = 0;
  *(uint32_t *)(self + 0x4c) = 0;
  *(uint32_t *)(self + 100) = 0;
  *(uint32_t *)(self + 0x68) = 0;
  *(uint64_t *)(self + 0x70) = 0;
  *(uint32_t *)(self + 0x78) = 1;
  *(uint32_t *)(self + 0x80) = 0;
  *(uint32_t *)(self + 0x84) = 0;
  *(uint32_t *)(self + 0x88) = 0;
  *(uint32_t *)(self + 0x8c) = 0;
  *(uint32_t *)(self + 0xa4) = 0;
  *(uint32_t *)(self + 0xa8) = 0;
  *(uint64_t *)(self + 0xd8) = uVar2;
  *(uint64_t *)(self + 0x118) = uVar2;
  *(uint64_t *)(self + 0x158) = uVar2;
  *(uint64_t *)(self + 0xd0) = uVar1;
  *(uint32_t *)(self + 0xe0) = 0x3f800000;
  *(uint64_t *)(self + 0x110) = uVar1;
  *(uint32_t *)(self + 0x120) = 0x3f800000;
  *(uint64_t *)(self + 0x150) = uVar1;
  *(uint32_t *)(self + 0x160) = 0x3f800000;
  *(uint64_t *)(self + 0xb0) = 0;
  *(uint32_t *)(self + 0xb8) = 1;
  *(uint32_t *)(self + 0xc0) = 0;
  *(uint32_t *)(self + 0xc4) = 0;
  *(uint32_t *)(self + 200) = 0;
  *(uint32_t *)(self + 0xcc) = 0;
  *(uint32_t *)(self + 0xe4) = 0;
  *(uint32_t *)(self + 0xe8) = 0;
  *(uint64_t *)(self + 0xf0) = 0;
  *(uint32_t *)(self + 0xf8) = 1;
  *(uint32_t *)(self + 0x100) = 0;
  *(uint32_t *)(self + 0x104) = 0;
  *(uint32_t *)(self + 0x108) = 0;
  *(uint32_t *)(self + 0x10c) = 0;
  *(uint32_t *)(self + 0x124) = 0;
  *(uint32_t *)(self + 0x128) = 0;
  *(uint64_t *)(self + 0x130) = 0;
  *(uint32_t *)(self + 0x138) = 1;
  *(uint32_t *)(self + 0x140) = 0;
  *(uint32_t *)(self + 0x144) = 0;
  *(uint32_t *)(self + 0x148) = 0;
  *(uint32_t *)(self + 0x14c) = 0;
  *(uint32_t *)(self + 0x164) = 0;
  *(uint32_t *)(self + 0x168) = 0;
  *(uint64_t *)(self + 0x170) = 0;
  *(uint64_t *)(self + 0x198) = uVar2;
  *(uint64_t *)(self + 0x1d8) = uVar2;
  *(uint64_t *)(self + 0x218) = uVar2;
  *(uint64_t *)(self + 400) = uVar1;
  *(uint32_t *)(self + 0x1a0) = 0x3f800000;
  *(uint64_t *)(self + 0x1d0) = uVar1;
  *(uint32_t *)(self + 0x1e0) = 0x3f800000;
  *(uint64_t *)(self + 0x210) = uVar1;
  *(uint32_t *)(self + 0x220) = 0x3f800000;
  *(uint32_t *)(self + 0x178) = 1;
  *(uint32_t *)(self + 0x180) = 0;
  *(uint32_t *)(self + 0x184) = 0;
  *(uint32_t *)(self + 0x188) = 0;
  *(uint32_t *)(self + 0x18c) = 0;
  *(uint32_t *)(self + 0x1a4) = 0;
  *(uint32_t *)(self + 0x1a8) = 0;
  *(uint64_t *)(self + 0x1b0) = 0;
  *(uint32_t *)(self + 0x1b8) = 1;
  *(uint32_t *)(self + 0x1c0) = 0;
  *(uint32_t *)(self + 0x1c4) = 0;
  *(uint32_t *)(self + 0x1c8) = 0;
  *(uint32_t *)(self + 0x1cc) = 0;
  *(uint32_t *)(self + 0x1e4) = 0;
  *(uint32_t *)(self + 0x1e8) = 0;
  *(uint64_t *)(self + 0x1f0) = 0;
  *(uint32_t *)(self + 0x1f8) = 1;
  *(uint32_t *)(self + 0x200) = 0;
  *(uint32_t *)(self + 0x204) = 0;
  *(uint32_t *)(self + 0x208) = 0;
  *(uint32_t *)(self + 0x20c) = 0;
  *(uint32_t *)(self + 0x224) = 0;
  *(uint32_t *)(self + 0x228) = 0;
  *(uint64_t *)(self + 0x230) = 0;
  *(uint32_t *)(self + 0x238) = 1;
  *(uint64_t *)(self + 600) = uVar2;
  *(uint64_t *)(self + 0x250) = uVar1;
  *(uint32_t *)(self + 0x260) = 0x3f800000;
  *(uint32_t *)(self + 0x240) = 0;
  *(uint32_t *)(self + 0x244) = 0;
  *(uint32_t *)(self + 0x248) = 0;
  *(uint32_t *)(self + 0x24c) = 0;
  *(uint32_t *)(self + 0x264) = 0;
  *(uint32_t *)(self + 0x268) = 0;
  *(uint64_t *)(self + 0x270) = 0;
  *(uint32_t *)(self + 0x278) = 1;
  *(uint64_t *)(self + 0x280) = 0;
  *(uint64_t *)(self + 0x288) = 0;
  *(uint32_t *)(self + 0x290) = 0;
  *(uint64_t *)(self + 0x298) = 0;
  *(uint64_t *)(self + 0x2a8) = 0;
  CreateTileLightMapResources(self);
  TResourceCreator__AddResourceCreationFunction((TResourceCreator *)ResourceCreator,
                                                CreateTileLightMapResources, self);
  TResourceCreator__AddResourceDestroyFunction((TResourceCreator *)ResourceCreator,
                                               DestroyTileLightMapResources, self);
  return;
}

/* ======================================================================
 * TileLevelLightMap__TileLevelLightMap__0046f6e0  (Ghidra `~TileLevelLightMap` @ 0046f6e0)
 * Signature: uint8_t __thiscall ~TileLevelLightMap(TileLevelLightMap * self)
 * Class: TileLevelLightMap
 * Calls: `BaseResource__Release`, `CreateTileLightMapResources`, `DestroyTileLightMapResources`, `TResourceCreator__RemoveResourceCreationFunction`
 * Called by: `GSuperMeatBoy__GSuperMeatBoy__00512120`
 */
/* TileLevelLightMap__TileLevelLightMap__0046f6e0() */

void __thiscall TileLevelLightMap__TileLevelLightMap__0046f6e0(TileLevelLightMap *self)

{
  if (*(BaseResource **)(self + 0x30) != (BaseResource *)0x0) {
    BaseResource__Release(*(BaseResource **)(self + 0x30), 0);
    *(uint64_t *)(self + 0x30) = 0;
  }
  if (*(BaseResource **)(self + 0x70) != (BaseResource *)0x0) {
    BaseResource__Release(*(BaseResource **)(self + 0x70), 0);
    *(uint64_t *)(self + 0x70) = 0;
  }
  if (*(BaseResource **)(self + 0xb0) != (BaseResource *)0x0) {
    BaseResource__Release(*(BaseResource **)(self + 0xb0), 0);
    *(uint64_t *)(self + 0xb0) = 0;
  }
  if (*(BaseResource **)(self + 0xf0) != (BaseResource *)0x0) {
    BaseResource__Release(*(BaseResource **)(self + 0xf0), 0);
    *(uint64_t *)(self + 0xf0) = 0;
  }
  if (*(BaseResource **)(self + 0x130) != (BaseResource *)0x0) {
    BaseResource__Release(*(BaseResource **)(self + 0x130), 0);
    *(uint64_t *)(self + 0x130) = 0;
  }
  if (*(BaseResource **)(self + 0x170) != (BaseResource *)0x0) {
    BaseResource__Release(*(BaseResource **)(self + 0x170), 0);
    *(uint64_t *)(self + 0x170) = 0;
  }
  if (*(BaseResource **)(self + 0x1b0) != (BaseResource *)0x0) {
    BaseResource__Release(*(BaseResource **)(self + 0x1b0), 0);
    *(uint64_t *)(self + 0x1b0) = 0;
  }
  if (*(BaseResource **)(self + 0x1f0) != (BaseResource *)0x0) {
    BaseResource__Release(*(BaseResource **)(self + 0x1f0), 0);
    *(uint64_t *)(self + 0x1f0) = 0;
  }
  if (*(BaseResource **)(self + 0x230) != (BaseResource *)0x0) {
    BaseResource__Release(*(BaseResource **)(self + 0x230), 0);
    *(uint64_t *)(self + 0x230) = 0;
  }
  if (*(BaseResource **)(self + 0x270) != (BaseResource *)0x0) {
    BaseResource__Release(*(BaseResource **)(self + 0x270), 0);
    *(uint64_t *)(self + 0x270) = 0;
  }
  if (*(BaseResource **)(self + 0x280) != (BaseResource *)0x0) {
    BaseResource__Release(*(BaseResource **)(self + 0x280), 0);
  }
  if (*(BaseResource **)(self + 0x298) != (BaseResource *)0x0) {
    BaseResource__Release(*(BaseResource **)(self + 0x298), 0);
  }
  if (*(BaseResource **)(self + 0x2a0) != (BaseResource *)0x0) {
    BaseResource__Release(*(BaseResource **)(self + 0x2a0), 0);
  }
  TResourceCreator__RemoveResourceCreationFunction((TResourceCreator *)ResourceCreator,
                                                   CreateTileLightMapResources, self);
  TResourceCreator__RemoveResourceCreationFunction((TResourceCreator *)ResourceCreator,
                                                   DestroyTileLightMapResources, self);
  return;
}

/* ======================================================================
 * TileLevelLightMap__CreateLight  (Ghidra `CreateLight` @ 0046f870)
 * Signature: uint8_t __thiscall CreateLight(TileLevelLightMap * self, Light * arg1)
 * Class: TileLevelLightMap
 * Calls: `BaseResource__Release`, `VertexStream__VertexStream__005a6980`
 * Called by: `DeleteSelectedLight`, `PlaceLight`, `SMBEditor__SetToLightingMode`, `SMBLevelLoad`, `SelectLight`
 */
/* TileLevelLightMap__CreateLight(Light const&) */

TileLevelLightMap *__thiscall TileLevelLightMap__CreateLight(TileLevelLightMap *self, Light *arg1)

{
  VertexStream *pVVar1;
  int iVar2;
  TileLevelLightMap *pTVar3;
  uint64_t local_48;
  uint16_t local_40;
  uint32_t local_3c;
  uint64_t local_38;
  uint32_t local_30;
  uint32_t local_2c;
  uint32_t local_28;
  BaseResource *local_20[2];

  if (*(int *)(self + 0x28) == 0) {
    iVar2 = 0;
  } else if (*(int *)(self + 0x68) == 0) {
    iVar2 = 1;
  } else if (*(int *)(self + 0xa8) == 0) {
    iVar2 = 2;
  } else if (*(int *)(self + 0xe8) == 0) {
    iVar2 = 3;
  } else if (*(int *)(self + 0x128) == 0) {
    iVar2 = 4;
  } else if (*(int *)(self + 0x168) == 0) {
    iVar2 = 5;
  } else if (*(int *)(self + 0x1a8) == 0) {
    iVar2 = 6;
  } else if (*(int *)(self + 0x1e8) == 0) {
    iVar2 = 7;
  } else if (*(int *)(self + 0x228) == 0) {
    iVar2 = 8;
  } else {
    iVar2 = 9;
    if (*(int *)(self + 0x268) != 0) {
      return (TileLevelLightMap *)0x0;
    }
  }
  pTVar3 = self + (long)iVar2 * 0x40;
  *(uint32_t *)pTVar3 = *(uint32_t *)arg1;
  *(uint32_t *)(pTVar3 + 4) = *(uint32_t *)(arg1 + 4);
  *(uint32_t *)(pTVar3 + 8) = *(uint32_t *)(arg1 + 8);
  *(uint32_t *)(pTVar3 + 0xc) = *(uint32_t *)(arg1 + 0xc);
  *(uint64_t *)(pTVar3 + 0x10) = *(uint64_t *)(arg1 + 0x10);
  *(uint64_t *)(pTVar3 + 0x18) = *(uint64_t *)(arg1 + 0x18);
  *(uint32_t *)(pTVar3 + 0x20) = *(uint32_t *)(arg1 + 0x20);
  *(uint32_t *)(pTVar3 + 0x24) = *(uint32_t *)(arg1 + 0x24);
  *(uint32_t *)(pTVar3 + 0x28) = *(uint32_t *)(arg1 + 0x28);
  if (*(long *)(pTVar3 + 0x30) == 0) {
    local_3c = 5;
    local_38 = 0;
    local_30 = 0;
    local_2c = 1;
    local_28 = 0;
    local_40 = 0xc;
    local_48 = 0x1c200;
    local_20[0] = (BaseResource *)VertexBuffer__Create((tagVertexBufferCreation *)&local_48);
    pVVar1 = BaseResource__operator_new(0xa8, 1);
    /* try { // try from 0046f9e9 to 0046f9ed has its CatchHandler @ 0046fa7a */
    VertexStream__VertexStream__005a6980(pVVar1, 1, 0, 0, 0, local_20, CGR__pPos2ColorDecl);
    *(VertexStream **)(pTVar3 + 0x30) = pVVar1;
    BaseResource__Release(local_20[0], 0);
  }
  return pTVar3;
}

/* ======================================================================
 * TileLevelLightMap__DestroyLight  (Ghidra `DestroyLight` @ 0046faa0)
 * Signature: uint8_t __thiscall DestroyLight(TileLevelLightMap * self, Light * * arg1)
 * Class: TileLevelLightMap
 * Calls: (none)
 * Called by: `DeleteSelectedLight`, `PlaceLight`, `RemoveCursorLight`, `SMBEditor__DeActivate`, `SMBEditor__SetToAnimationMode`, `SMBEditor__SetToCameraMode`, `SMBEditor__SetToObstacleMode`, `SMBEditor__SetToParalaxMode`, `SMBEditor__SetToSetPieceMode`, `SMBEditor__SetToTileMode` (+1 more)
 */
/* TileLevelLightMap__DestroyLight(Light**) */

void __thiscall TileLevelLightMap__DestroyLight(TileLevelLightMap *self, Light **arg1)

{
  if (*arg1 != (Light *)0x0) {
    *(uint32_t *)(*arg1 + 0x28) = 0;
    *arg1 = (Light *)0x0;
  }
  return;
}

/* ======================================================================
 * TileLevelLightMap__GenerateFacesFromLevel  (Ghidra `GenerateFacesFromLevel` @ 0046fac0)
 * Signature: uint8_t __thiscall GenerateFacesFromLevel(TileLevelLightMap * self, TileLevel * arg1)
 * Class: TileLevelLightMap
 * Calls: `VertexBuffer__Realloc`
 * Called by: `GSuperMeatBoy__SetCurrentLevel`
 */
/* TileLevelLightMap__GenerateFacesFromLevel(TileLevel*) */

void __thiscall TileLevelLightMap__GenerateFacesFromLevel(TileLevelLightMap *self, TileLevel *arg1)

{
  VertexBuffer *pVVar1;
  uint uVar2;

  *(TileLevel **)(self + 0x288) = arg1;
  uVar2 = (uint) * (ushort *)(arg1 + 0x38) * (uint) * (ushort *)(arg1 + 0x3a) * 0x120;
  *(uint *)(self + 0x290) = uVar2;
  if (*(long *)(self + 0x30) != 0) {
    pVVar1 = *(VertexBuffer **)(*(long *)(self + 0x30) + 0x20);
    if (*(ulong *)(pVVar1 + 0x10) < (ulong)uVar2) {
      VertexBuffer__Realloc(pVVar1, (ulong)uVar2);
    }
  }
  if (*(long *)(self + 0x70) != 0) {
    pVVar1 = *(VertexBuffer **)(*(long *)(self + 0x70) + 0x20);
    if (*(ulong *)(pVVar1 + 0x10) < (ulong) * (uint *)(self + 0x290)) {
      VertexBuffer__Realloc(pVVar1, (ulong) * (uint *)(self + 0x290));
    }
  }
  if (*(long *)(self + 0xb0) != 0) {
    pVVar1 = *(VertexBuffer **)(*(long *)(self + 0xb0) + 0x20);
    if (*(ulong *)(pVVar1 + 0x10) < (ulong) * (uint *)(self + 0x290)) {
      VertexBuffer__Realloc(pVVar1, (ulong) * (uint *)(self + 0x290));
    }
  }
  if (*(long *)(self + 0xf0) != 0) {
    pVVar1 = *(VertexBuffer **)(*(long *)(self + 0xf0) + 0x20);
    if (*(ulong *)(pVVar1 + 0x10) < (ulong) * (uint *)(self + 0x290)) {
      VertexBuffer__Realloc(pVVar1, (ulong) * (uint *)(self + 0x290));
    }
  }
  if (*(long *)(self + 0x130) != 0) {
    pVVar1 = *(VertexBuffer **)(*(long *)(self + 0x130) + 0x20);
    if (*(ulong *)(pVVar1 + 0x10) < (ulong) * (uint *)(self + 0x290)) {
      VertexBuffer__Realloc(pVVar1, (ulong) * (uint *)(self + 0x290));
    }
  }
  if (*(long *)(self + 0x170) != 0) {
    pVVar1 = *(VertexBuffer **)(*(long *)(self + 0x170) + 0x20);
    if (*(ulong *)(pVVar1 + 0x10) < (ulong) * (uint *)(self + 0x290)) {
      VertexBuffer__Realloc(pVVar1, (ulong) * (uint *)(self + 0x290));
    }
  }
  if (*(long *)(self + 0x1b0) != 0) {
    pVVar1 = *(VertexBuffer **)(*(long *)(self + 0x1b0) + 0x20);
    if (*(ulong *)(pVVar1 + 0x10) < (ulong) * (uint *)(self + 0x290)) {
      VertexBuffer__Realloc(pVVar1, (ulong) * (uint *)(self + 0x290));
    }
  }
  if (*(long *)(self + 0x1f0) != 0) {
    pVVar1 = *(VertexBuffer **)(*(long *)(self + 0x1f0) + 0x20);
    if (*(ulong *)(pVVar1 + 0x10) < (ulong) * (uint *)(self + 0x290)) {
      VertexBuffer__Realloc(pVVar1, (ulong) * (uint *)(self + 0x290));
    }
  }
  if (*(long *)(self + 0x230) != 0) {
    pVVar1 = *(VertexBuffer **)(*(long *)(self + 0x230) + 0x20);
    if (*(ulong *)(pVVar1 + 0x10) < (ulong) * (uint *)(self + 0x290)) {
      VertexBuffer__Realloc(pVVar1, (ulong) * (uint *)(self + 0x290));
    }
  }
  if (*(long *)(self + 0x270) != 0) {
    pVVar1 = *(VertexBuffer **)(*(long *)(self + 0x270) + 0x20);
    if (*(ulong *)(pVVar1 + 0x10) < (ulong) * (uint *)(self + 0x290)) {
      VertexBuffer__Realloc(pVVar1, (ulong) * (uint *)(self + 0x290));
      return;
    }
  }
  return;
}

/* ======================================================================
 * TileLevelLightMap__GetLight  (Ghidra `GetLight` @ 0046fcc0)
 * Signature: uint8_t __thiscall GetLight(TileLevelLightMap * self, int arg1)
 * Class: TileLevelLightMap
 * Calls: (none)
 * Called by: `SMBEditor__Render`, `SMBLevelSave`, `SelectLight`
 */
/* TileLevelLightMap__GetLight(int) */

TileLevelLightMap *__thiscall TileLevelLightMap__GetLight(TileLevelLightMap *self, int arg1)

{
  return self + (long)arg1 * 0x40;
}

/* ======================================================================
 * TileLevelLightMap__GenerateShadowMap  (Ghidra `GenerateShadowMap` @ 0046ff40)
 * Signature: uint8_t __thiscall GenerateShadowMap(TileLevelLightMap * self, Light * arg1, tagPos2ColorVertex * arg2, int * arg3)
 * Class: TileLevelLightMap
 * Calls: `AutoLockSection__AutoLockSection`, `AutoLockSection__AutoLockSection__005b59d0`, `ExtendFaceFromLight`, `TileLevel__GetGridBlock`, `TileLevel__GetGridPos`, `Vector2__Vector2`, `Vector2__operator_assign`, `Vector2__operator_plus__005be140`
 * Called by: (none)
 */
/* TileLevelLightMap__GenerateShadowMap(Light const*, CGR__tagPos2ColorVertex, int&) */

void __thiscall TileLevelLightMap__GenerateShadowMap(TileLevelLightMap *self, Light *arg1,
                                                     tagPos2ColorVertex *arg2, int *arg3)

{
  ushort uVar1;
  float fVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  SceneObject2D *pSVar6;
  long lVar7;
  ushort uVar8;
  TileLevel *pTVar9;
  ushort uVar10;
  float fVar11;
  uint uVar12;
  float fVar13;
  uint uVar14;
  float local_acc;
  uint8_t local_ac8[16];
  float local_ab4;
  float local_aa8;
  float local_aa4;
  float local_aa0;
  float local_a9c;
  ushort local_a96;
  Vector2 local_a88[8];
  Vector2 local_a80[8];
  Vector2 local_a78[16];
  AutoLockSection local_a68[16];
  uint64_t local_a58[2];
  Vector2 local_a48[16];
  uint32_t local_a38;
  uint32_t local_a34;
  Vector2 local_a28[16];
  uint32_t local_a18;
  uint32_t local_a14;
  Vector2 local_a08[16];
  uint32_t local_9f8;
  uint32_t local_9f4;
  uint32_t local_9e8;
  uint32_t local_9e4;
  Vector2 local_9d8[16];
  uint32_t local_9c8;
  uint32_t local_9c4;
  Vector2 local_9b8[16];
  uint32_t local_9a8;
  uint32_t local_9a4;
  uint32_t local_998;
  uint32_t local_994;
  Vector2 local_988[16];
  uint32_t local_978;
  uint32_t local_974;
  Vector2 local_968[16];
  uint32_t local_958;
  uint32_t local_954;
  uint32_t local_948;
  uint32_t local_944;
  Vector2 local_938[16];
  uint32_t local_928;
  uint32_t local_924;
  Vector2 local_918[16];
  uint32_t local_908;
  uint32_t local_904;
  float local_8f8;
  float local_8f4;
  uint32_t local_8e8;
  uint32_t local_8e4;
  uint32_t local_8d8;
  float local_8d4;
  uint32_t local_8c8;
  uint32_t local_8c4;
  float local_8b8;
  float local_8b4;
  uint32_t local_8a8;
  uint32_t local_8a4;
  float local_898;
  float local_894;
  uint32_t local_888;
  uint32_t local_884;
  uint32_t local_878;
  float local_874;
  uint32_t local_868;
  uint32_t local_864;
  uint32_t local_858;
  float local_854;
  uint32_t local_848;
  uint32_t local_844;
  Vector2 local_838[16];
  float local_828;
  float local_824;
  uint local_818;
  float local_814;
  Vector2 local_808[16];
  Vector2 local_7f8[16];
  float local_7e8;
  float local_7e4;
  Vector2 local_7d8[16];
  Vector2 local_7c8[16];
  uint32_t local_7b8;
  uint32_t local_7b4;
  uint local_7a8;
  float local_7a4;
  Vector2 local_798[16];
  Vector2 local_788[16];
  uint local_778;
  uint local_774;
  Vector2 local_768[16];
  Vector2 local_758[16];
  uint32_t local_748;
  uint32_t local_744;
  float local_738;
  float local_734;
  Vector2 local_728[16];
  Vector2 local_718[16];
  float local_708;
  uint local_704;
  Vector2 local_6f8[16];
  Vector2 local_6e8[16];
  uint32_t local_6d8;
  uint32_t local_6d4;
  uint local_6c8;
  uint local_6c4;
  Vector2 local_6b8[16];
  Vector2 local_6a8[16];
  float local_698;
  uint local_694;
  Vector2 local_688[16];
  Vector2 local_678[16];
  uint32_t local_668;
  uint32_t local_664;
  float local_658;
  float local_654;
  uint32_t local_648;
  uint32_t local_644;
  float local_638;
  float local_634;
  uint32_t local_628;
  uint32_t local_624;
  float local_618;
  float local_614;
  uint32_t local_608;
  uint32_t local_604;
  float local_5f8;
  float local_5f4;
  uint32_t local_5e8;
  uint32_t local_5e4;
  float local_5d8;
  float local_5d4;
  uint32_t local_5c8;
  uint32_t local_5c4;
  float local_5b8;
  float local_5b4;
  uint32_t local_5a8;
  uint32_t local_5a4;
  Vector2 local_598[16];
  float local_588;
  float local_584;
  Vector2 local_578[16];
  uint local_568;
  uint local_564;
  Vector2 local_558[16];
  uint local_548;
  uint local_544;
  uint32_t local_538;
  uint32_t local_534;
  Vector2 local_528[16];
  uint32_t local_518;
  uint32_t local_514;
  Vector2 local_508[16];
  uint32_t local_4f8;
  uint32_t local_4f4;
  uint32_t local_4e8;
  uint32_t local_4e4;
  Vector2 local_4d8[16];
  uint32_t local_4c8;
  uint32_t local_4c4;
  Vector2 local_4b8[16];
  uint32_t local_4a8;
  uint32_t local_4a4;
  float local_498;
  uint32_t local_494;
  uint32_t local_488;
  uint32_t local_484;
  float local_478;
  float local_474;
  uint32_t local_468;
  uint32_t local_464;
  float local_458;
  uint32_t local_454;
  uint32_t local_448;
  uint32_t local_444;
  float local_438;
  uint local_434;
  Vector2 local_428[16];
  uint local_418;
  float local_414;
  Vector2 local_408[16];
  uint local_3f8;
  uint local_3f4;
  uint32_t local_3e8;
  uint32_t local_3e4;
  Vector2 local_3d8[16];
  uint32_t local_3c8;
  uint32_t local_3c4;
  Vector2 local_3b8[16];
  uint32_t local_3a8;
  uint32_t local_3a4;
  uint32_t local_398;
  uint32_t local_394;
  Vector2 local_388[16];
  uint32_t local_378;
  uint32_t local_374;
  Vector2 local_368[16];
  uint32_t local_358;
  uint32_t local_354;
  float local_348;
  uint32_t local_344;
  uint32_t local_338;
  uint32_t local_334;
  float local_328;
  float local_324;
  uint32_t local_318;
  uint32_t local_314;
  float local_308;
  uint32_t local_304;
  uint32_t local_2f8;
  uint32_t local_2f4;
  uint local_2e8;
  float local_2e4;
  Vector2 local_2d8[16];
  float local_2c8;
  uint local_2c4;
  Vector2 local_2b8[16];
  uint local_2a8;
  uint local_2a4;
  uint32_t local_298;
  uint32_t local_294;
  Vector2 local_288[16];
  uint32_t local_278;
  uint32_t local_274;
  Vector2 local_268[16];
  uint32_t local_258;
  uint32_t local_254;
  uint32_t local_248;
  uint32_t local_244;
  Vector2 local_238[16];
  uint32_t local_228;
  uint32_t local_224;
  Vector2 local_218[16];
  uint32_t local_208;
  uint32_t local_204;
  float local_1f8;
  uint32_t local_1f4;
  uint32_t local_1e8;
  uint32_t local_1e4;
  float local_1d8;
  uint32_t local_1d4;
  uint32_t local_1c8;
  uint32_t local_1c4;
  float local_1b8;
  float local_1b4;
  uint32_t local_1a8;
  uint32_t local_1a4;
  float local_198;
  float local_194;
  Vector2 local_188[16];
  uint local_178;
  uint local_174;
  Vector2 local_168[16];
  uint local_158;
  uint local_154;
  uint32_t local_148;
  uint32_t local_144;
  Vector2 local_138[16];
  uint32_t local_128;
  uint32_t local_124;
  Vector2 local_118[16];
  uint32_t local_108;
  uint32_t local_104;
  uint32_t local_f8;
  uint32_t local_f4;
  Vector2 local_e8[16];
  uint32_t local_d8;
  uint32_t local_d4;
  Vector2 local_c8[16];
  uint32_t local_b8;
  uint32_t local_b4;
  float local_a8;
  uint32_t local_a4;
  uint32_t local_98;
  uint32_t local_94;
  float local_88;
  uint32_t local_84;
  uint32_t local_78;
  uint32_t local_74;
  float local_68;
  float local_64;
  uint32_t local_58;
  uint32_t local_54;
  int local_48[6];

  AutoLockSection__AutoLockSection(local_a68, (CriticalSection *)ShadowMapSection);
  pTVar9 = *(TileLevel **)(self + 0x288);
  local_a58[0] = *(uint64_t *)arg1;
  local_48[0] = 0;
  uVar8 = *(ushort *)(pTVar9 + 0x38);
  if (uVar8 != 0) {
    uVar10 = *(ushort *)(pTVar9 + 0x3a);
    local_a96 = 0;
    do {
      if (uVar10 != 0) {
        uVar8 = 0;
        uVar4 = (uint)local_a96;
        do {
          uVar12 = (uint)uVar8;
          /* try { // try from 00470004 to 00470026 has its CatchHandler @ 00472595 */
          pSVar6 = (SceneObject2D *)TileLevel__GetGridBlock(pTVar9, uVar4, uVar12, 0);
          uVar10 = *(ushort *)(pSVar6 + 2) >> 6;
          iVar5 = SMBPalette__IsBlockCollidable(GSuperMeatBoy__pLevelPalette, pSVar6);
          if (iVar5 != 0) {
            bVar3 = (byte)pSVar6[2] & 0xc;
            if (((byte)pSVar6[2] & 0xc) == 0) {
              /* try { // try from 0047004e to 00470052 has its CatchHandler @ 00472585 */
              TileLevel__GetGridPos(*(TileLevel **)(self + 0x288), uVar4, uVar12, local_a48);
              fVar13 = TileLevel__fLevelGridWH;
              fVar11 = DAT_005be6e4 /* R:0.5f */ * TileLevel__fLevelGridWH;
              local_ac8._0_4_ = fVar11;
              local_ab4 = fVar11;
              if ((uVar10 & 2) != 0) {
                local_a38 = 0xc1200000;
                local_a34 = 0x41200000;
                /* try { // try from 00470ab6 to 00470acc has its CatchHandler @ 004724d5 */
                Vector2__operator_plus__005be140(local_a28, (Vector2 *)&local_a38);
                Vector2__operator_assign(local_a88, local_a28);
                local_a18 = 0x41200000;
                local_a14 = 0x41200000;
                /* try { // try from 00470afb to 00470b11 has its CatchHandler @ 004724c5 */
                Vector2__operator_plus__005be140(local_a08, (Vector2 *)&local_a18);
                Vector2__operator_assign(local_a80, local_a08);
                local_9f8 = 0;
                local_9f4 = 0x3f800000;
                /* try { // try from 00470b35 to 00470b56 has its CatchHandler @ 00472585 */
                Vector2__operator_assign(local_a78, (Vector2 *)&local_9f8);
                iVar5 = ExtendFaceFromLight((LightFace2D *)local_a88, (Vector2 *)local_a58,
                                            local_48, arg2);
                local_ab4 = DAT_005c01cc /* R:9.0f */;
                if (iVar5 != 0) {
                  local_ab4 = fVar11;
                }
              }
              fVar11 = DAT_005be6e4 /* R:0.5f */ *
                       (float)((uint)fVar13 ^ DAT_005be6f0 /* R:u32=2147483648 */);
              fVar13 = fVar11;
              if ((uVar10 & 8) == 0) {
              LAB_004700b5:
                fVar2 = fVar13;
              } else {
                local_9e8 = 0xc1200000;
                local_9e4 = 0x41200000;
                /* try { // try from 004708d6 to 004708ec has its CatchHandler @ 004724f5 */
                Vector2__operator_plus__005be140(local_9d8, (Vector2 *)&local_9e8);
                Vector2__operator_assign(local_a88, local_9d8);
                local_9c8 = 0xc1200000;
                local_9c4 = 0xc1200000;
                /* try { // try from 0047091b to 00470931 has its CatchHandler @ 004724e5 */
                Vector2__operator_plus__005be140(local_9b8, (Vector2 *)&local_9c8);
                Vector2__operator_assign(local_a80, local_9b8);
                local_9a8 = 0xbf800000;
                local_9a4 = 0;
                /* try { // try from 00470955 to 00470976 has its CatchHandler @ 00472585 */
                Vector2__operator_assign(local_a78, (Vector2 *)&local_9a8);
                iVar5 = ExtendFaceFromLight((LightFace2D *)local_a88, (Vector2 *)local_a58,
                                            local_48, arg2);
                fVar13 = -9.0;
                fVar2 = fVar11;
                if (iVar5 == 0)
                  goto LAB_004700b5;
              }
              if ((uVar10 & 4) != 0) {
                local_998 = 0x41200000;
                local_994 = 0x41200000;
                /* try { // try from 004709c6 to 004709dc has its CatchHandler @ 004724b5 */
                Vector2__operator_plus__005be140(local_988, (Vector2 *)&local_998);
                Vector2__operator_assign(local_a88, local_988);
                local_978 = 0x41200000;
                local_974 = 0xc1200000;
                /* try { // try from 00470a0b to 00470a21 has its CatchHandler @ 004724a5 */
                Vector2__operator_plus__005be140(local_968, (Vector2 *)&local_978);
                Vector2__operator_assign(local_a80, local_968);
                local_958 = 0x3f800000;
                local_954 = 0;
                /* try { // try from 00470a45 to 00470a66 has its CatchHandler @ 00472585 */
                Vector2__operator_assign(local_a78, (Vector2 *)&local_958);
                iVar5 = ExtendFaceFromLight((LightFace2D *)local_a88, (Vector2 *)local_a58,
                                            local_48, arg2);
                if (iVar5 == 0) {
                  local_ac8._0_4_ = DAT_005c01cc /* R:9.0f */;
                }
              }
              fVar13 = fVar11;
              if ((uVar10 & 1) != 0) {
                local_948 = 0xc1200000;
                local_944 = 0xc1200000;
                /* try { // try from 004700fb to 00470111 has its CatchHandler @ 00472575 */
                Vector2__operator_plus__005be140(local_938, (Vector2 *)&local_948);
                Vector2__operator_assign(local_a88, local_938);
                local_928 = 0x41200000;
                local_924 = 0xc1200000;
                /* try { // try from 00470140 to 00470156 has its CatchHandler @ 00472565 */
                Vector2__operator_plus__005be140(local_918, (Vector2 *)&local_928);
                Vector2__operator_assign(local_a80, local_918);
                local_908 = 0;
                local_904 = 0xbf800000;
                /* try { // try from 0047017a to 004703c8 has its CatchHandler @ 00472585 */
                Vector2__operator_assign(local_a78, (Vector2 *)&local_908);
                iVar5 = ExtendFaceFromLight((LightFace2D *)local_a88, (Vector2 *)local_a58,
                                            local_48, arg2);
                fVar13 = -9.0;
                if (iVar5 != 0) {
                  fVar13 = fVar11;
                }
              }
              local_8f4 = local_ab4;
              local_8f8 = fVar2;
              Vector2__operator_plus__005be140((Vector2 *)&local_8e8, (Vector2 *)&local_8f8);
              lVar7 = (long)local_48[0];
              local_48[0] = local_48[0] + 1;
              *(uint32_t *)(arg2 + lVar7 * 0xc) = local_8e8;
              local_8d8 = local_ac8._0_4_;
              *(uint32_t *)(arg2 + lVar7 * 0xc + 4) = local_8e4;
              local_8d4 = local_ab4;
              Vector2__operator_plus__005be140((Vector2 *)&local_8c8, (Vector2 *)&local_8d8);
              lVar7 = (long)local_48[0];
              local_48[0] = local_48[0] + 1;
              *(uint32_t *)(arg2 + lVar7 * 0xc) = local_8c8;
              *(uint32_t *)(arg2 + lVar7 * 0xc + 4) = local_8c4;
              local_8b8 = fVar2;
              local_8b4 = fVar13;
              Vector2__operator_plus__005be140((Vector2 *)&local_8a8, (Vector2 *)&local_8b8);
              lVar7 = (long)local_48[0];
              local_48[0] = local_48[0] + 1;
              *(uint32_t *)(arg2 + lVar7 * 0xc) = local_8a8;
              *(uint32_t *)(arg2 + lVar7 * 0xc + 4) = local_8a4;
              local_898 = fVar2;
              local_894 = fVar13;
              Vector2__operator_plus__005be140((Vector2 *)&local_888, (Vector2 *)&local_898);
              lVar7 = (long)local_48[0];
              local_48[0] = local_48[0] + 1;
              *(uint32_t *)(arg2 + lVar7 * 0xc) = local_888;
              local_878 = local_ac8._0_4_;
              *(uint32_t *)(arg2 + lVar7 * 0xc + 4) = local_884;
              local_874 = fVar13;
              Vector2__operator_plus__005be140((Vector2 *)&local_868, (Vector2 *)&local_878);
              lVar7 = (long)local_48[0];
              local_48[0] = local_48[0] + 1;
              *(uint32_t *)(arg2 + lVar7 * 0xc) = local_868;
              local_858 = local_ac8._0_4_;
              *(uint32_t *)(arg2 + lVar7 * 0xc + 4) = local_864;
              local_854 = local_ab4;
              Vector2__operator_plus__005be140((Vector2 *)&local_848, (Vector2 *)&local_858);
              lVar7 = (long)local_48[0];
              local_48[0] = local_48[0] + 1;
              *(uint32_t *)(arg2 + lVar7 * 0xc) = local_848;
              *(uint32_t *)(arg2 + lVar7 * 0xc + 4) = local_844;
            } else if (bVar3 == 4) {
              /* try { // try from 00470416 to 0047041a has its CatchHandler @ 00472555 */
              TileLevel__GetGridPos(*(TileLevel **)(self + 0x288), uVar4, uVar12, local_838);
              uVar12 = DAT_005be6f0 /* R:u32=2147483648 */;
              local_828 = 0.0;
              local_ab4 = TileLevel__fLevelGridWH * DAT_005be6e4 /* R:0.5f */;
              local_824 = 0.0;
              iVar5 = (int)(uint)(*(ushort *)(pSVar6 + 2) >> 6) >> 8;
              local_ac8 = ZEXT416(DAT_005be6f0 /* R:u32=2147483648 */);
              local_acc =
                  (float)((uint)TileLevel__fLevelGridWH ^ DAT_005be6f0 /* R:u32=2147483648 */) *
                  DAT_005be6e4 /* R:0.5f */;
              local_aa8 = local_ab4;
              local_aa4 = local_ab4;
              local_aa0 = local_acc;
              if (iVar5 == 2) {
                local_ab4 = DAT_005be6e4 /* R:0.5f */ * local_ab4;
                local_a9c = 0.0;
                local_828 = (float)((uint)local_ab4 ^ DAT_005be6f0 /* R:u32=2147483648 */);
              } else {
                local_a9c = local_ab4;
                if (iVar5 == 3) {
                  local_ab4 = DAT_005be6e4 /* R:0.5f */ * local_ab4;
                  local_acc = 0.0;
                  local_828 = local_ab4;
                } else if (iVar5 == 1) {
                  local_aa8 = 0.0;
                  local_824 = (float)((uint)(local_ab4 * DAT_005be6e4 /* R:0.5f */) ^
                                      DAT_005be6f0 /* R:u32=2147483648 */);
                  local_aa4 = local_ab4 * DAT_005be6e4 /* R:0.5f */;
                } else {
                  local_aa0 = 0.0;
                  local_824 = local_ab4 * DAT_005be6e4 /* R:0.5f */;
                  local_aa4 = local_824;
                }
              }
              if ((uVar10 & 2) != 0) {
                local_818 = (uint)local_ab4 ^ DAT_005be6f0 /* R:u32=2147483648 */;
                local_814 = local_aa4;
                /* try { // try from 0047151b to 0047151f has its CatchHandler @ 004723b6 */
                Vector2__operator_plus__005be140(local_808, (Vector2 *)&local_818);
                /* try { // try from 0047153b to 00471551 has its CatchHandler @ 004723b4 */
                Vector2__operator_plus__005be140(local_7f8, local_808);
                Vector2__operator_assign(local_a88, local_7f8);
                local_7e8 = local_ab4;
                local_7e4 = local_aa4;
                /* try { // try from 00471588 to 0047158c has its CatchHandler @ 004723b2 */
                Vector2__operator_plus__005be140(local_7d8, (Vector2 *)&local_7e8);
                /* try { // try from 004715a0 to 004715b6 has its CatchHandler @ 004723a6 */
                Vector2__operator_plus__005be140(local_7c8, local_7d8);
                Vector2__operator_assign(local_a80, local_7c8);
                local_7b8 = 0;
                local_7b4 = 0x3f800000;
                /* try { // try from 004715da to 004715fb has its CatchHandler @ 00472505 */
                Vector2__operator_assign(local_a78, (Vector2 *)&local_7b8);
                iVar5 = ExtendFaceFromLight((LightFace2D *)local_a88, (Vector2 *)local_a58,
                                            local_48, arg2);
                if (iVar5 == 0) {
                  local_aa8 = local_aa8 - DAT_005be894 /* R:1.0f */;
                }
              }
              if ((uVar10 & 8) != 0) {
                local_7a4 = local_aa4;
                local_7a8 = (uint)local_ab4 ^ uVar12;
                /* try { // try from 004713d9 to 004713dd has its CatchHandler @ 004723e5 */
                Vector2__operator_plus__005be140(local_798, (Vector2 *)&local_7a8);
                /* try { // try from 004713f9 to 0047140f has its CatchHandler @ 004723d5 */
                Vector2__operator_plus__005be140(local_788, local_798);
                Vector2__operator_assign(local_a88, local_788);
                local_774 = (uint)local_aa4 ^ uVar12;
                local_778 = (uint)local_ab4 ^ uVar12;
                /* try { // try from 0047144b to 0047144f has its CatchHandler @ 004723c7 */
                Vector2__operator_plus__005be140(local_768, (Vector2 *)&local_778);
                /* try { // try from 00471463 to 00471479 has its CatchHandler @ 004723c2 */
                Vector2__operator_plus__005be140(local_758, local_768);
                Vector2__operator_assign(local_a80, local_758);
                local_748 = 0xbf800000;
                local_744 = 0;
                /* try { // try from 0047149d to 004714be has its CatchHandler @ 00472505 */
                Vector2__operator_assign(local_a78, (Vector2 *)&local_748);
                iVar5 = ExtendFaceFromLight((LightFace2D *)local_a88, (Vector2 *)local_a58,
                                            local_48, arg2);
                if (iVar5 == 0) {
                  local_acc = local_acc + DAT_005be894 /* R:1.0f */;
                }
              }
              if ((uVar10 & 4) != 0) {
                local_738 = local_ab4;
                local_734 = local_aa4;
                /* try { // try from 0047128e to 00471292 has its CatchHandler @ 00472425 */
                Vector2__operator_plus__005be140(local_728, (Vector2 *)&local_738);
                /* try { // try from 004712ae to 004712c4 has its CatchHandler @ 00472415 */
                Vector2__operator_plus__005be140(local_718, local_728);
                Vector2__operator_assign(local_a88, local_718);
                local_704 = (uint)local_aa4 ^ uVar12;
                local_708 = local_ab4;
                /* try { // try from 00471300 to 00471304 has its CatchHandler @ 00472405 */
                Vector2__operator_plus__005be140(local_6f8, (Vector2 *)&local_708);
                /* try { // try from 00471318 to 0047132e has its CatchHandler @ 004723f5 */
                Vector2__operator_plus__005be140(local_6e8, local_6f8);
                Vector2__operator_assign(local_a80, local_6e8);
                local_6d8 = 0x3f800000;
                local_6d4 = 0;
                /* try { // try from 00471352 to 00471373 has its CatchHandler @ 00472505 */
                Vector2__operator_assign(local_a78, (Vector2 *)&local_6d8);
                iVar5 = ExtendFaceFromLight((LightFace2D *)local_a88, (Vector2 *)local_a58,
                                            local_48, arg2);
                if (iVar5 == 0) {
                  local_a9c = local_a9c - DAT_005be894 /* R:1.0f */;
                }
              }
              if ((uVar10 & 1) != 0) {
                local_6c8 = (uint)local_ab4 ^ uVar12;
                local_6c4 = (uint)local_aa4 ^ uVar12;
                /* try { // try from 00470528 to 0047052c has its CatchHandler @ 00472545 */
                Vector2__operator_plus__005be140(local_6b8, (Vector2 *)&local_6c8);
                /* try { // try from 00470548 to 0047055e has its CatchHandler @ 00472535 */
                Vector2__operator_plus__005be140(local_6a8, local_6b8);
                Vector2__operator_assign(local_a88, local_6a8);
                local_698 = local_ab4;
                local_694 = (uint)local_aa4 ^ uVar12;
                /* try { // try from 00470595 to 00470599 has its CatchHandler @ 00472525 */
                Vector2__operator_plus__005be140(local_688, (Vector2 *)&local_698);
                /* try { // try from 004705ad to 004705c3 has its CatchHandler @ 00472515 */
                Vector2__operator_plus__005be140(local_678, local_688);
                Vector2__operator_assign(local_a80, local_678);
                local_668 = 0;
                local_664 = 0xbf800000;
                /* try { // try from 004705e7 to 0047086d has its CatchHandler @ 00472505 */
                Vector2__operator_assign(local_a78, (Vector2 *)&local_668);
                iVar5 = ExtendFaceFromLight((LightFace2D *)local_a88, (Vector2 *)local_a58,
                                            local_48, arg2);
                if (iVar5 == 0) {
                  local_aa0 = local_aa0 + DAT_005be894 /* R:1.0f */;
                }
              }
              local_658 = local_acc;
              local_654 = local_aa8;
              Vector2__operator_plus__005be140((Vector2 *)&local_648, (Vector2 *)&local_658);
              lVar7 = (long)local_48[0];
              local_48[0] = local_48[0] + 1;
              *(uint32_t *)(arg2 + lVar7 * 0xc) = local_648;
              local_638 = local_a9c;
              *(uint32_t *)(arg2 + lVar7 * 0xc + 4) = local_644;
              local_634 = local_aa8;
              Vector2__operator_plus__005be140((Vector2 *)&local_628, (Vector2 *)&local_638);
              lVar7 = (long)local_48[0];
              local_48[0] = local_48[0] + 1;
              *(uint32_t *)(arg2 + lVar7 * 0xc) = local_628;
              local_618 = local_acc;
              *(uint32_t *)(arg2 + lVar7 * 0xc + 4) = local_624;
              local_614 = local_aa0;
              Vector2__operator_plus__005be140((Vector2 *)&local_608, (Vector2 *)&local_618);
              lVar7 = (long)local_48[0];
              local_48[0] = local_48[0] + 1;
              *(uint32_t *)(arg2 + lVar7 * 0xc) = local_608;
              local_5f8 = local_acc;
              *(uint32_t *)(arg2 + lVar7 * 0xc + 4) = local_604;
              local_5f4 = local_aa0;
              Vector2__operator_plus__005be140((Vector2 *)&local_5e8, (Vector2 *)&local_5f8);
              lVar7 = (long)local_48[0];
              local_48[0] = local_48[0] + 1;
              *(uint32_t *)(arg2 + lVar7 * 0xc) = local_5e8;
              local_5d8 = local_a9c;
              *(uint32_t *)(arg2 + lVar7 * 0xc + 4) = local_5e4;
              local_5d4 = local_aa0;
              Vector2__operator_plus__005be140((Vector2 *)&local_5c8, (Vector2 *)&local_5d8);
              lVar7 = (long)local_48[0];
              local_48[0] = local_48[0] + 1;
              *(uint32_t *)(arg2 + lVar7 * 0xc) = local_5c8;
              local_5b8 = local_a9c;
              *(uint32_t *)(arg2 + lVar7 * 0xc + 4) = local_5c4;
              local_5b4 = local_aa8;
              Vector2__operator_plus__005be140((Vector2 *)&local_5a8, (Vector2 *)&local_5b8);
              lVar7 = (long)local_48[0];
              local_48[0] = local_48[0] + 1;
              *(uint32_t *)(arg2 + lVar7 * 0xc) = local_5a8;
              *(uint32_t *)(arg2 + lVar7 * 0xc + 4) = local_5a4;
            } else if (bVar3 == 8) {
              uVar1 = *(ushort *)(pSVar6 + 2);
              /* try { // try from 00470b9e to 00470ba2 has its CatchHandler @ 00472495 */
              TileLevel__GetGridPos(*(TileLevel **)(self + 0x288), uVar4, uVar12, local_598);
              if ((GenerateShadowMap(Light_const *, CGR__tagPos2ColorVertex, int &)::vTriNorm ==
                   '\0') &&
                  (iVar5 = __cxa_guard_acquire(
                       &GenerateShadowMap(Light_const *, CGR__tagPos2ColorVertex, int &)::vTriNorm),
                   iVar5 != 0)) {
                GenerateShadowMap(Light_const *, CGR__tagPos2ColorVertex, int &)::vTriNorm =
                    0x3f3504f3;
                DAT_00818f1c /* R:1.2856983475103413e-39f */ = 0x3f3504f3;
                __cxa_guard_release(
                    &GenerateShadowMap(Light_const *, CGR__tagPos2ColorVertex, int &)::vTriNorm);
                __cxa_atexit(
                    Vector2__Vector2,
                    &GenerateShadowMap(Light_const *, CGR__tagPos2ColorVertex, int &)::vTriNorm,
                    &__dso_handle);
              }
              uVar12 = DAT_005be6f0 /* R:u32=2147483648 */;
              iVar5 = (int)(uint)(uVar1 >> 6) >> 8;
              fVar13 = TileLevel__fLevelGridWH * DAT_005be6e4 /* R:0.5f */;
              local_ac8 = ZEXT416(DAT_005be6f0 /* R:u32=2147483648 */);
              local_acc = DAT_005be6e4 /* R:0.5f */ * (float)((uint)TileLevel__fLevelGridWH ^
                                                              DAT_005be6f0 /* R:u32=2147483648 */);
              local_aa8 = fVar13;
              local_aa0 = local_acc;
              if (iVar5 == 1) {
                local_aa4 = fVar13;
                if ((uVar10 & 10) != 0) {
                  local_588 = fVar13;
                  local_584 = fVar13;
                  /* try { // try from 00472058 to 0047206e has its CatchHandler @ 00472364 */
                  Vector2__operator_plus__005be140(local_578, (Vector2 *)&local_588);
                  Vector2__operator_assign(local_a88, local_578);
                  local_568 = (uint)fVar13 ^ uVar12;
                  local_564 = local_568;
                  /* try { // try from 004720a4 to 004720ba has its CatchHandler @ 00472362 */
                  Vector2__operator_plus__005be140(local_558, (Vector2 *)&local_568);
                  Vector2__operator_assign(local_a80, local_558);
                  local_548 =
                      GenerateShadowMap(Light_const *, CGR__tagPos2ColorVertex, int &)::vTriNorm ^
                      uVar12;
                  local_544 = DAT_00818f1c /* R:1.2856983475103413e-39f */;
                  /* try { // try from 004720eb to 0047210c has its CatchHandler @ 00472495 */
                  Vector2__operator_assign(local_a78, (Vector2 *)&local_548);
                  iVar5 = ExtendFaceFromLight((LightFace2D *)local_a88, (Vector2 *)local_a58,
                                              local_48, arg2);
                  if (iVar5 == 0) {
                    local_aa4 = fVar13 - DAT_005be894 /* R:1.0f */;
                    local_aa0 = DAT_005be894 /* R:1.0f */ + local_acc;
                  }
                }
                if ((uVar10 & 4) != 0) {
                  local_538 = 0x41200000;
                  local_534 = 0x41200000;
                  /* try { // try from 00471f66 to 00471f7c has its CatchHandler @ 00472372 */
                  Vector2__operator_plus__005be140(local_528, (Vector2 *)&local_538);
                  Vector2__operator_assign(local_a88, local_528);
                  local_518 = 0x41200000;
                  local_514 = 0xc1200000;
                  /* try { // try from 00471fab to 00471fc1 has its CatchHandler @ 00472366 */
                  Vector2__operator_plus__005be140(local_508, (Vector2 *)&local_518);
                  Vector2__operator_assign(local_a80, local_508);
                  local_4f8 = 0x3f800000;
                  local_4f4 = 0;
                  /* try { // try from 00471fe5 to 00472006 has its CatchHandler @ 00472495 */
                  Vector2__operator_assign(local_a78, (Vector2 *)&local_4f8);
                  iVar5 = ExtendFaceFromLight((LightFace2D *)local_a88, (Vector2 *)local_a58,
                                              local_48, arg2);
                  if (iVar5 == 0) {
                    local_aa8 = fVar13 - DAT_005be894 /* R:1.0f */;
                  }
                }
                local_ac8 = ZEXT416((uint)local_acc);
                if ((uVar10 & 1) != 0) {
                  local_4e8 = 0xc1200000;
                  local_4e4 = 0xc1200000;
                  /* try { // try from 004716e9 to 004716ff has its CatchHandler @ 004723a4 */
                  Vector2__operator_plus__005be140(local_4d8, (Vector2 *)&local_4e8);
                  Vector2__operator_assign(local_a88, local_4d8);
                  local_4c8 = 0x41200000;
                  local_4c4 = 0xc1200000;
                  /* try { // try from 0047172e to 00471744 has its CatchHandler @ 004723a2 */
                  Vector2__operator_plus__005be140(local_4b8, (Vector2 *)&local_4c8);
                  Vector2__operator_assign(local_a80, local_4b8);
                  local_4a8 = 0;
                  local_4a4 = 0xbf800000;
                  /* try { // try from 00471768 to 004718b6 has its CatchHandler @ 00472495 */
                  Vector2__operator_assign(local_a78, (Vector2 *)&local_4a8);
                  iVar5 = ExtendFaceFromLight((LightFace2D *)local_a88, (Vector2 *)local_a58,
                                              local_48, arg2);
                  local_ac8 = ZEXT416((uint)local_acc);
                  if (iVar5 == 0) {
                    local_ac8 = ZEXT416((uint)(local_acc + DAT_005be894 /* R:1.0f */));
                  }
                }
                local_498 = local_aa8;
                local_494 = local_ac8._0_4_;
                Vector2__operator_plus__005be140((Vector2 *)&local_488, (Vector2 *)&local_498);
                lVar7 = (long)local_48[0];
                local_48[0] = local_48[0] + 1;
                *(uint32_t *)(arg2 + lVar7 * 0xc) = local_488;
                local_478 = local_aa8;
                *(uint32_t *)(arg2 + lVar7 * 0xc + 4) = local_484;
                local_474 = local_aa4;
                Vector2__operator_plus__005be140((Vector2 *)&local_468, (Vector2 *)&local_478);
                lVar7 = (long)local_48[0];
                local_48[0] = local_48[0] + 1;
                *(uint32_t *)(arg2 + lVar7 * 0xc) = local_468;
                local_458 = local_aa0;
                *(uint32_t *)(arg2 + lVar7 * 0xc + 4) = local_464;
                local_454 = local_ac8._0_4_;
                Vector2__operator_plus__005be140((Vector2 *)&local_448, (Vector2 *)&local_458);
                lVar7 = (long)local_48[0];
                local_48[0] = local_48[0] + 1;
                *(uint32_t *)(arg2 + lVar7 * 0xc) = local_448;
                *(uint32_t *)(arg2 + lVar7 * 0xc + 4) = local_444;
              } else if (iVar5 == 0) {
                if ((uVar10 & 6) != 0) {
                  uVar12 = (uint)fVar13 ^ DAT_005be6f0 /* R:u32=2147483648 */;
                  local_438 = fVar13;
                  local_434 = uVar12;
                  /* try { // try from 00471ae6 to 00471afc has its CatchHandler @ 00472392 */
                  Vector2__operator_plus__005be140(local_428, (Vector2 *)&local_438);
                  Vector2__operator_assign(local_a88, local_428);
                  local_418 = uVar12;
                  local_414 = fVar13;
                  /* try { // try from 00471b33 to 00471b49 has its CatchHandler @ 00472386 */
                  Vector2__operator_plus__005be140(local_408, (Vector2 *)&local_418);
                  Vector2__operator_assign(local_a80, local_408);
                  local_3f8 =
                      GenerateShadowMap(Light_const *, CGR__tagPos2ColorVertex, int &)::vTriNorm;
                  local_3f4 = DAT_00818f1c /* R:1.2856983475103413e-39f */;
                  /* try { // try from 00471b71 to 00471b92 has its CatchHandler @ 00472495 */
                  Vector2__operator_assign(local_a78, (Vector2 *)&local_3f8);
                  iVar5 = ExtendFaceFromLight((LightFace2D *)local_a88, (Vector2 *)local_a58,
                                              local_48, arg2);
                  if (iVar5 == 0) {
                    local_aa8 = fVar13 - DAT_005be894 /* R:1.0f */;
                  }
                }
                local_ab4 = local_acc;
                if ((uVar10 & 8) != 0) {
                  local_3e8 = 0xc1200000;
                  local_3e4 = 0x41200000;
                  /* try { // try from 004719e2 to 004719f8 has its CatchHandler @ 00472396 */
                  Vector2__operator_plus__005be140(local_3d8, (Vector2 *)&local_3e8);
                  Vector2__operator_assign(local_a88, local_3d8);
                  local_3c8 = 0xc1200000;
                  local_3c4 = 0xc1200000;
                  /* try { // try from 00471a27 to 00471a3d has its CatchHandler @ 00472394 */
                  Vector2__operator_plus__005be140(local_3b8, (Vector2 *)&local_3c8);
                  Vector2__operator_assign(local_a80, local_3b8);
                  local_3a8 = 0xbf800000;
                  local_3a4 = 0;
                  /* try { // try from 00471a61 to 00471a82 has its CatchHandler @ 00472495 */
                  Vector2__operator_assign(local_a78, (Vector2 *)&local_3a8);
                  iVar5 = ExtendFaceFromLight((LightFace2D *)local_a88, (Vector2 *)local_a58,
                                              local_48, arg2);
                  if (iVar5 == 0) {
                    local_ab4 = DAT_005be894 /* R:1.0f */ + local_acc;
                  }
                }
                local_ac8 = ZEXT416((uint)local_acc);
                if ((uVar10 & 1) != 0) {
                  local_398 = 0xc1200000;
                  local_394 = 0xc1200000;
                  /* try { // try from 00470c6e to 00470c84 has its CatchHandler @ 00472485 */
                  Vector2__operator_plus__005be140(local_388, (Vector2 *)&local_398);
                  Vector2__operator_assign(local_a88, local_388);
                  local_378 = 0x41200000;
                  local_374 = 0xc1200000;
                  /* try { // try from 00470cb3 to 00470cc9 has its CatchHandler @ 00472475 */
                  Vector2__operator_plus__005be140(local_368, (Vector2 *)&local_378);
                  Vector2__operator_assign(local_a80, local_368);
                  local_358 = 0;
                  local_354 = 0xbf800000;
                  /* try { // try from 00470ced to 00470e3b has its CatchHandler @ 00472495 */
                  Vector2__operator_assign(local_a78, (Vector2 *)&local_358);
                  iVar5 = ExtendFaceFromLight((LightFace2D *)local_a88, (Vector2 *)local_a58,
                                              local_48, arg2);
                  local_ac8 = ZEXT416((uint)local_acc);
                  if (iVar5 == 0) {
                    local_ac8 = ZEXT416((uint)(local_acc + DAT_005be894 /* R:1.0f */));
                  }
                }
                local_348 = local_ab4;
                local_344 = local_ac8._0_4_;
                Vector2__operator_plus__005be140((Vector2 *)&local_338, (Vector2 *)&local_348);
                lVar7 = (long)local_48[0];
                local_48[0] = local_48[0] + 1;
                *(uint32_t *)(arg2 + lVar7 * 0xc) = local_338;
                local_328 = local_ab4;
                *(uint32_t *)(arg2 + lVar7 * 0xc + 4) = local_334;
                local_324 = local_aa8;
                Vector2__operator_plus__005be140((Vector2 *)&local_318, (Vector2 *)&local_328);
                lVar7 = (long)local_48[0];
                local_48[0] = local_48[0] + 1;
                *(uint32_t *)(arg2 + lVar7 * 0xc) = local_318;
                local_308 = local_aa8;
                *(uint32_t *)(arg2 + lVar7 * 0xc + 4) = local_314;
                local_304 = local_ac8._0_4_;
                Vector2__operator_plus__005be140((Vector2 *)&local_2f8, (Vector2 *)&local_308);
                lVar7 = (long)local_48[0];
                local_48[0] = local_48[0] + 1;
                *(uint32_t *)(arg2 + lVar7 * 0xc) = local_2f8;
                *(uint32_t *)(arg2 + lVar7 * 0xc + 4) = local_2f4;
              } else if (iVar5 == 3) {
                if ((uVar10 & 9) != 0) {
                  uVar14 = (uint)fVar13 ^ DAT_005be6f0 /* R:u32=2147483648 */;
                  local_2e8 = uVar14;
                  local_2e4 = fVar13;
                  /* try { // try from 00471c05 to 00471c1b has its CatchHandler @ 00472384 */
                  Vector2__operator_plus__005be140(local_2d8, (Vector2 *)&local_2e8);
                  Vector2__operator_assign(local_a88, local_2d8);
                  local_2c8 = fVar13;
                  local_2c4 = uVar14;
                  /* try { // try from 00471c52 to 00471c68 has its CatchHandler @ 00472382 */
                  Vector2__operator_plus__005be140(local_2b8, (Vector2 *)&local_2c8);
                  Vector2__operator_assign(local_a80, local_2b8);
                  local_2a4 = DAT_00818f1c /* R:1.2856983475103413e-39f */ ^ uVar12;
                  local_2a8 =
                      GenerateShadowMap(Light_const *, CGR__tagPos2ColorVertex, int &)::vTriNorm ^
                      uVar12;
                  /* try { // try from 00471ca2 to 00471cc3 has its CatchHandler @ 00472495 */
                  Vector2__operator_assign(local_a78, (Vector2 *)&local_2a8);
                  iVar5 = ExtendFaceFromLight((LightFace2D *)local_a88, (Vector2 *)local_a58,
                                              local_48, arg2);
                  if (iVar5 == 0) {
                    local_acc = local_acc + DAT_005be894 /* R:1.0f */;
                  }
                }
                if ((uVar10 & 4) != 0) {
                  local_298 = 0x41200000;
                  local_294 = 0x41200000;
                  /* try { // try from 00472181 to 00472197 has its CatchHandler @ 0047235c */
                  Vector2__operator_plus__005be140(local_288, (Vector2 *)&local_298);
                  Vector2__operator_assign(local_a88, local_288);
                  local_278 = 0x41200000;
                  local_274 = 0xc1200000;
                  /* try { // try from 004721c6 to 004721dc has its CatchHandler @ 0047235a */
                  Vector2__operator_plus__005be140(local_268, (Vector2 *)&local_278);
                  Vector2__operator_assign(local_a80, local_268);
                  local_258 = 0x3f800000;
                  local_254 = 0;
                  /* try { // try from 00472200 to 00472221 has its CatchHandler @ 00472495 */
                  Vector2__operator_assign(local_a78, (Vector2 *)&local_258);
                  iVar5 = ExtendFaceFromLight((LightFace2D *)local_a88, (Vector2 *)local_a58,
                                              local_48, arg2);
                  if (iVar5 == 0) {
                    local_aa8 = fVar13 - DAT_005be894 /* R:1.0f */;
                  }
                }
                local_ac8 = ZEXT416((uint)fVar13);
                if ((uVar10 & 2) != 0) {
                  local_248 = 0xc1200000;
                  local_244 = 0x41200000;
                  /* try { // try from 00471d36 to 00471d4c has its CatchHandler @ 00472376 */
                  Vector2__operator_plus__005be140(local_238, (Vector2 *)&local_248);
                  Vector2__operator_assign(local_a88, local_238);
                  local_228 = 0x41200000;
                  local_224 = 0x41200000;
                  /* try { // try from 00471d7b to 00471d91 has its CatchHandler @ 00472374 */
                  Vector2__operator_plus__005be140(local_218, (Vector2 *)&local_228);
                  Vector2__operator_assign(local_a80, local_218);
                  local_208 = 0;
                  local_204 = 0x3f800000;
                  /* try { // try from 00471db5 to 00471f03 has its CatchHandler @ 00472495 */
                  Vector2__operator_assign(local_a78, (Vector2 *)&local_208);
                  iVar5 = ExtendFaceFromLight((LightFace2D *)local_a88, (Vector2 *)local_a58,
                                              local_48, arg2);
                  local_ac8 = ZEXT416((uint)fVar13);
                  if (iVar5 == 0) {
                    local_ac8 = ZEXT416((uint)(fVar13 - DAT_005be894 /* R:1.0f */));
                  }
                }
                local_1f8 = local_aa8;
                local_1f4 = local_ac8._0_4_;
                Vector2__operator_plus__005be140((Vector2 *)&local_1e8, (Vector2 *)&local_1f8);
                lVar7 = (long)local_48[0];
                local_48[0] = local_48[0] + 1;
                *(uint32_t *)(arg2 + lVar7 * 0xc) = local_1e8;
                local_1d8 = local_acc;
                *(uint32_t *)(arg2 + lVar7 * 0xc + 4) = local_1e4;
                local_1d4 = local_ac8._0_4_;
                Vector2__operator_plus__005be140((Vector2 *)&local_1c8, (Vector2 *)&local_1d8);
                lVar7 = (long)local_48[0];
                local_48[0] = local_48[0] + 1;
                *(uint32_t *)(arg2 + lVar7 * 0xc) = local_1c8;
                local_1b8 = local_aa8;
                *(uint32_t *)(arg2 + lVar7 * 0xc + 4) = local_1c4;
                local_1b4 = local_acc;
                Vector2__operator_plus__005be140((Vector2 *)&local_1a8, (Vector2 *)&local_1b8);
                lVar7 = (long)local_48[0];
                local_48[0] = local_48[0] + 1;
                *(uint32_t *)(arg2 + lVar7 * 0xc) = local_1a8;
                *(uint32_t *)(arg2 + lVar7 * 0xc + 4) = local_1a4;
              } else if (iVar5 == 2) {
                if ((uVar10 & 5) != 0) {
                  local_198 = fVar13;
                  local_194 = fVar13;
                  /* try { // try from 00470f0e to 00470f24 has its CatchHandler @ 00472465 */
                  Vector2__operator_plus__005be140(local_188, (Vector2 *)&local_198);
                  Vector2__operator_assign(local_a88, local_188);
                  local_178 = (uint)fVar13 ^ uVar12;
                  local_174 = local_178;
                  /* try { // try from 00470f5a to 00470f70 has its CatchHandler @ 00472455 */
                  Vector2__operator_plus__005be140(local_168, (Vector2 *)&local_178);
                  Vector2__operator_assign(local_a80, local_168);
                  local_154 = DAT_00818f1c /* R:1.2856983475103413e-39f */ ^ uVar12;
                  local_158 =
                      GenerateShadowMap(Light_const *, CGR__tagPos2ColorVertex, int &)::vTriNorm;
                  /* try { // try from 00470fa1 to 00470fc2 has its CatchHandler @ 00472495 */
                  Vector2__operator_assign(local_a78, (Vector2 *)&local_158);
                  iVar5 = ExtendFaceFromLight((LightFace2D *)local_a88, (Vector2 *)local_a58,
                                              local_48, arg2);
                  if (iVar5 == 0) {
                    local_aa0 = local_acc + DAT_005be894 /* R:1.0f */;
                    local_aa8 = fVar13 - DAT_005be894 /* R:1.0f */;
                  }
                }
                if ((uVar10 & 8) != 0) {
                  local_148 = 0xc1200000;
                  local_144 = 0x41200000;
                  /* try { // try from 0047227a to 00472290 has its CatchHandler @ 00472358 */
                  Vector2__operator_plus__005be140(local_138, (Vector2 *)&local_148);
                  Vector2__operator_assign(local_a88, local_138);
                  local_128 = 0xc1200000;
                  local_124 = 0xc1200000;
                  /* try { // try from 004722bf to 004722d5 has its CatchHandler @ 00472343 */
                  Vector2__operator_plus__005be140(local_118, (Vector2 *)&local_128);
                  Vector2__operator_assign(local_a80, local_118);
                  local_108 = 0xbf800000;
                  local_104 = 0;
                  /* try { // try from 004722f9 to 0047231a has its CatchHandler @ 00472495 */
                  Vector2__operator_assign(local_a78, (Vector2 *)&local_108);
                  iVar5 = ExtendFaceFromLight((LightFace2D *)local_a88, (Vector2 *)local_a58,
                                              local_48, arg2);
                  if (iVar5 == 0) {
                    local_acc = local_acc + DAT_005be894 /* R:1.0f */;
                  }
                }
                local_ac8 = ZEXT416((uint)fVar13);
                if ((uVar10 & 2) != 0) {
                  local_f8 = 0xc1200000;
                  local_f4 = 0x41200000;
                  /* try { // try from 00471052 to 00471068 has its CatchHandler @ 00472445 */
                  Vector2__operator_plus__005be140(local_e8, (Vector2 *)&local_f8);
                  Vector2__operator_assign(local_a88, local_e8);
                  local_d8 = 0x41200000;
                  local_d4 = 0x41200000;
                  /* try { // try from 00471097 to 004710ad has its CatchHandler @ 00472435 */
                  Vector2__operator_plus__005be140(local_c8, (Vector2 *)&local_d8);
                  Vector2__operator_assign(local_a80, local_c8);
                  local_b8 = 0;
                  local_b4 = 0x3f800000;
                  /* try { // try from 004710d1 to 0047121f has its CatchHandler @ 00472495 */
                  Vector2__operator_assign(local_a78, (Vector2 *)&local_b8);
                  iVar5 = ExtendFaceFromLight((LightFace2D *)local_a88, (Vector2 *)local_a58,
                                              local_48, arg2);
                  local_ac8 = ZEXT416((uint)fVar13);
                  if (iVar5 == 0) {
                    local_ac8 = ZEXT416((uint)(fVar13 - DAT_005be894 /* R:1.0f */));
                  }
                }
                local_a8 = local_acc;
                local_a4 = local_ac8._0_4_;
                Vector2__operator_plus__005be140((Vector2 *)&local_98, (Vector2 *)&local_a8);
                lVar7 = (long)local_48[0];
                local_48[0] = local_48[0] + 1;
                *(uint32_t *)(arg2 + lVar7 * 0xc) = local_98;
                local_88 = local_aa8;
                *(uint32_t *)(arg2 + lVar7 * 0xc + 4) = local_94;
                local_84 = local_ac8._0_4_;
                Vector2__operator_plus__005be140((Vector2 *)&local_78, (Vector2 *)&local_88);
                lVar7 = (long)local_48[0];
                local_48[0] = local_48[0] + 1;
                *(uint32_t *)(arg2 + lVar7 * 0xc) = local_78;
                local_68 = local_acc;
                *(uint32_t *)(arg2 + lVar7 * 0xc + 4) = local_74;
                local_64 = local_aa0;
                Vector2__operator_plus__005be140((Vector2 *)&local_58, (Vector2 *)&local_68);
                lVar7 = (long)local_48[0];
                local_48[0] = local_48[0] + 1;
                *(uint32_t *)(arg2 + lVar7 * 0xc) = local_58;
                *(uint32_t *)(arg2 + lVar7 * 0xc + 4) = local_54;
              }
            }
          }
          pTVar9 = *(TileLevel **)(self + 0x288);
          uVar8 = uVar8 + 1;
          uVar10 = *(ushort *)(pTVar9 + 0x3a);
        } while (uVar8 < uVar10);
        uVar8 = *(ushort *)(pTVar9 + 0x38);
      }
      local_a96 = local_a96 + 1;
    } while (local_a96 < uVar8);
  }
  *arg3 = local_48[0];
  AutoLockSection__AutoLockSection__005b59d0(local_a68);
  return;
}

/* ======================================================================
 * TileLevelLightMap__GenerateStaticShadows  (Ghidra `GenerateStaticShadows` @ 004725b0)
 * Signature: uint8_t __thiscall GenerateStaticShadows(TileLevelLightMap * self)
 * Class: TileLevelLightMap
 * Calls: `VertexBuffer__Lock`, `VertexBuffer__Realloc`, `VertexBuffer__Unlock`
 * Called by: (none)
 */
/* TileLevelLightMap__GenerateStaticShadows() */

uint __thiscall TileLevelLightMap__GenerateStaticShadows(TileLevelLightMap *self)

{
  int iVar1;
  VertexBuffer *pVVar2;
  tagPos2ColorVertex *local_28;
  int local_1c[3];

  if (*(int *)(self + 0x28) - 3U < 2) {
    pVVar2 = *(VertexBuffer **)(*(long *)(self + 0x30) + 0x20);
    if (*(ulong *)(pVVar2 + 0x10) < (ulong) * (uint *)(self + 0x290)) {
      VertexBuffer__Realloc(pVVar2, (ulong) * (uint *)(self + 0x290));
    }
    local_1c[0] = 0;
    VertexBuffer__Lock(pVVar2, &local_28, 1, 0);
    GenerateShadowMap(self, (Light *)self, local_28, local_1c);
    VertexBuffer__Unlock(pVVar2);
    *(int *)(*(long *)(self + 0x30) + 0x14) = local_1c[0];
    *(int *)(*(long *)(self + 0x30) + 0x10) = local_1c[0] / 3;
    iVar1 = *(int *)(self + 0x68);
  } else {
    iVar1 = *(int *)(self + 0x68);
  }
  if (iVar1 - 3U < 2) {
    pVVar2 = *(VertexBuffer **)(*(long *)(self + 0x70) + 0x20);
    if (*(ulong *)(pVVar2 + 0x10) < (ulong) * (uint *)(self + 0x290)) {
      VertexBuffer__Realloc(pVVar2, (ulong) * (uint *)(self + 0x290));
    }
    local_1c[0] = 0;
    VertexBuffer__Lock(pVVar2, &local_28, 1, 0);
    GenerateShadowMap(self, (Light *)(self + 0x40), local_28, local_1c);
    VertexBuffer__Unlock(pVVar2);
    *(int *)(*(long *)(self + 0x70) + 0x14) = local_1c[0];
    *(int *)(*(long *)(self + 0x70) + 0x10) = local_1c[0] / 3;
    iVar1 = *(int *)(self + 0xa8);
  } else {
    iVar1 = *(int *)(self + 0xa8);
  }
  if (iVar1 - 3U < 2) {
    pVVar2 = *(VertexBuffer **)(*(long *)(self + 0xb0) + 0x20);
    if (*(ulong *)(pVVar2 + 0x10) < (ulong) * (uint *)(self + 0x290)) {
      VertexBuffer__Realloc(pVVar2, (ulong) * (uint *)(self + 0x290));
    }
    local_1c[0] = 0;
    VertexBuffer__Lock(pVVar2, &local_28, 1, 0);
    GenerateShadowMap(self, (Light *)(self + 0x80), local_28, local_1c);
    VertexBuffer__Unlock(pVVar2);
    *(int *)(*(long *)(self + 0xb0) + 0x14) = local_1c[0];
    *(int *)(*(long *)(self + 0xb0) + 0x10) = local_1c[0] / 3;
    iVar1 = *(int *)(self + 0xe8);
  } else {
    iVar1 = *(int *)(self + 0xe8);
  }
  if (iVar1 - 3U < 2) {
    pVVar2 = *(VertexBuffer **)(*(long *)(self + 0xf0) + 0x20);
    if (*(ulong *)(pVVar2 + 0x10) < (ulong) * (uint *)(self + 0x290)) {
      VertexBuffer__Realloc(pVVar2, (ulong) * (uint *)(self + 0x290));
    }
    local_1c[0] = 0;
    VertexBuffer__Lock(pVVar2, &local_28, 1, 0);
    GenerateShadowMap(self, (Light *)(self + 0xc0), local_28, local_1c);
    VertexBuffer__Unlock(pVVar2);
    *(int *)(*(long *)(self + 0xf0) + 0x14) = local_1c[0];
    *(int *)(*(long *)(self + 0xf0) + 0x10) = local_1c[0] / 3;
    iVar1 = *(int *)(self + 0x128);
  } else {
    iVar1 = *(int *)(self + 0x128);
  }
  if (iVar1 - 3U < 2) {
    pVVar2 = *(VertexBuffer **)(*(long *)(self + 0x130) + 0x20);
    if (*(ulong *)(pVVar2 + 0x10) < (ulong) * (uint *)(self + 0x290)) {
      VertexBuffer__Realloc(pVVar2, (ulong) * (uint *)(self + 0x290));
    }
    local_1c[0] = 0;
    VertexBuffer__Lock(pVVar2, &local_28, 1, 0);
    GenerateShadowMap(self, (Light *)(self + 0x100), local_28, local_1c);
    VertexBuffer__Unlock(pVVar2);
    *(int *)(*(long *)(self + 0x130) + 0x14) = local_1c[0];
    *(int *)(*(long *)(self + 0x130) + 0x10) = local_1c[0] / 3;
    iVar1 = *(int *)(self + 0x168);
  } else {
    iVar1 = *(int *)(self + 0x168);
  }
  if (iVar1 - 3U < 2) {
    pVVar2 = *(VertexBuffer **)(*(long *)(self + 0x170) + 0x20);
    if (*(ulong *)(pVVar2 + 0x10) < (ulong) * (uint *)(self + 0x290)) {
      VertexBuffer__Realloc(pVVar2, (ulong) * (uint *)(self + 0x290));
    }
    local_1c[0] = 0;
    VertexBuffer__Lock(pVVar2, &local_28, 1, 0);
    GenerateShadowMap(self, (Light *)(self + 0x140), local_28, local_1c);
    VertexBuffer__Unlock(pVVar2);
    *(int *)(*(long *)(self + 0x170) + 0x14) = local_1c[0];
    *(int *)(*(long *)(self + 0x170) + 0x10) = local_1c[0] / 3;
    iVar1 = *(int *)(self + 0x1a8);
  } else {
    iVar1 = *(int *)(self + 0x1a8);
  }
  if (iVar1 - 3U < 2) {
    pVVar2 = *(VertexBuffer **)(*(long *)(self + 0x1b0) + 0x20);
    if (*(ulong *)(pVVar2 + 0x10) < (ulong) * (uint *)(self + 0x290)) {
      VertexBuffer__Realloc(pVVar2, (ulong) * (uint *)(self + 0x290));
    }
    local_1c[0] = 0;
    VertexBuffer__Lock(pVVar2, &local_28, 1, 0);
    GenerateShadowMap(self, (Light *)(self + 0x180), local_28, local_1c);
    VertexBuffer__Unlock(pVVar2);
    *(int *)(*(long *)(self + 0x1b0) + 0x14) = local_1c[0];
    *(int *)(*(long *)(self + 0x1b0) + 0x10) = local_1c[0] / 3;
    iVar1 = *(int *)(self + 0x1e8);
  } else {
    iVar1 = *(int *)(self + 0x1e8);
  }
  if (iVar1 - 3U < 2) {
    pVVar2 = *(VertexBuffer **)(*(long *)(self + 0x1f0) + 0x20);
    if (*(ulong *)(pVVar2 + 0x10) < (ulong) * (uint *)(self + 0x290)) {
      VertexBuffer__Realloc(pVVar2, (ulong) * (uint *)(self + 0x290));
    }
    local_1c[0] = 0;
    VertexBuffer__Lock(pVVar2, &local_28, 1, 0);
    GenerateShadowMap(self, (Light *)(self + 0x1c0), local_28, local_1c);
    VertexBuffer__Unlock(pVVar2);
    *(int *)(*(long *)(self + 0x1f0) + 0x14) = local_1c[0];
    *(int *)(*(long *)(self + 0x1f0) + 0x10) = local_1c[0] / 3;
    iVar1 = *(int *)(self + 0x228);
  } else {
    iVar1 = *(int *)(self + 0x228);
  }
  if (iVar1 - 3U < 2) {
    pVVar2 = *(VertexBuffer **)(*(long *)(self + 0x230) + 0x20);
    if (*(ulong *)(pVVar2 + 0x10) < (ulong) * (uint *)(self + 0x290)) {
      VertexBuffer__Realloc(pVVar2, (ulong) * (uint *)(self + 0x290));
    }
    local_1c[0] = 0;
    VertexBuffer__Lock(pVVar2, &local_28, 1, 0);
    GenerateShadowMap(self, (Light *)(self + 0x200), local_28, local_1c);
    VertexBuffer__Unlock(pVVar2);
    *(int *)(*(long *)(self + 0x230) + 0x14) = local_1c[0];
    *(int *)(*(long *)(self + 0x230) + 0x10) = local_1c[0] / 3;
    iVar1 = *(int *)(self + 0x268);
  } else {
    iVar1 = *(int *)(self + 0x268);
  }
  if (iVar1 - 3U < 2) {
    pVVar2 = *(VertexBuffer **)(*(long *)(self + 0x270) + 0x20);
    if (*(ulong *)(pVVar2 + 0x10) < (ulong) * (uint *)(self + 0x290)) {
      VertexBuffer__Realloc(pVVar2, (ulong) * (uint *)(self + 0x290));
    }
    local_1c[0] = 0;
    VertexBuffer__Lock(pVVar2, &local_28, 1, 0);
    GenerateShadowMap(self, (Light *)(self + 0x240), local_28, local_1c);
    VertexBuffer__Unlock(pVVar2);
    *(int *)(*(long *)(self + 0x270) + 0x14) = local_1c[0];
    *(int *)(*(long *)(self + 0x270) + 0x10) = local_1c[0] / 3;
    return local_1c[0] * 0x55555556;
  }
  return iVar1 - 3U;
}

/* ======================================================================
 * TileLevelLightMap__GenerateLightMap  (Ghidra `GenerateLightMap` @ 00472c70)
 * Signature: uint8_t __thiscall GenerateLightMap(TileLevelLightMap * self)
 * Class: TileLevelLightMap
 * Calls: `Camera__SetCameraMatricies`, `TGraphics__AddPixelStage`, `TGraphics__AutoSetViewport`, `TGraphics__BindRenderTarget`, `TGraphics__Clear`, `TGraphics__Draw`, `TGraphics__ForceAspectRatio`, `TGraphics__GetMatrix`, `TGraphics__RenderToBackBuffer`, `TGraphics__ResetPixelStages` (+6 more)
 * Called by: `RenderSetupLayer__Render`
 */
/* TileLevelLightMap__GenerateLightMap() */

void __thiscall TileLevelLightMap__GenerateLightMap(TileLevelLightMap *self)

{
  VertexBuffer *pVVar1;
  uint uVar2;
  Matrix4x4 *pMVar3;
  Light *pLVar4;
  int iVar5;
  TileLevelLightMap *pTVar6;
  uint32_t local_78;
  uint32_t local_74;
  uint32_t local_70;
  uint32_t local_6c;
  uint32_t local_68;
  uint32_t local_64;
  uint32_t local_60;
  uint32_t local_5c;
  uint32_t local_58;
  uint32_t local_54;
  uint32_t local_50;
  uint32_t local_4c;
  uint32_t local_48;
  uint32_t local_44;
  tagPos2ColorVertex *local_38;
  int local_2c[3];

  TGraphics__BindRenderTarget(Graphics, *(Texture **)(self + 0x280));
  TGraphics__Clear(Graphics, (ColorTemplate *)::cNullColor, 1);
  Camera__SetCameraMatricies(*(Camera **)(self + 0x2a8), 1);
  uVar2 = (uint) * (ushort *)(*(long *)(self + 0x288) + 0x38) * (uint) *
          (ushort *)(*(long *)(self + 0x288) + 0x3a) * 0x120;
  *(uint *)(self + 0x290) = uVar2;
  if (*(long *)(self + 0x30) != 0) {
    pVVar1 = *(VertexBuffer **)(*(long *)(self + 0x30) + 0x20);
    if (*(ulong *)(pVVar1 + 0x10) < (ulong)uVar2) {
      VertexBuffer__Realloc(pVVar1, (ulong)uVar2);
    }
  }
  if (*(long *)(self + 0x70) != 0) {
    pVVar1 = *(VertexBuffer **)(*(long *)(self + 0x70) + 0x20);
    if (*(ulong *)(pVVar1 + 0x10) < (ulong) * (uint *)(self + 0x290)) {
      VertexBuffer__Realloc(pVVar1, (ulong) * (uint *)(self + 0x290));
    }
  }
  if (*(long *)(self + 0xb0) != 0) {
    pVVar1 = *(VertexBuffer **)(*(long *)(self + 0xb0) + 0x20);
    if (*(ulong *)(pVVar1 + 0x10) < (ulong) * (uint *)(self + 0x290)) {
      VertexBuffer__Realloc(pVVar1, (ulong) * (uint *)(self + 0x290));
    }
  }
  if (*(long *)(self + 0xf0) != 0) {
    pVVar1 = *(VertexBuffer **)(*(long *)(self + 0xf0) + 0x20);
    if (*(ulong *)(pVVar1 + 0x10) < (ulong) * (uint *)(self + 0x290)) {
      VertexBuffer__Realloc(pVVar1, (ulong) * (uint *)(self + 0x290));
    }
  }
  if (*(long *)(self + 0x130) != 0) {
    pVVar1 = *(VertexBuffer **)(*(long *)(self + 0x130) + 0x20);
    if (*(ulong *)(pVVar1 + 0x10) < (ulong) * (uint *)(self + 0x290)) {
      VertexBuffer__Realloc(pVVar1, (ulong) * (uint *)(self + 0x290));
    }
  }
  if (*(long *)(self + 0x170) != 0) {
    pVVar1 = *(VertexBuffer **)(*(long *)(self + 0x170) + 0x20);
    if (*(ulong *)(pVVar1 + 0x10) < (ulong) * (uint *)(self + 0x290)) {
      VertexBuffer__Realloc(pVVar1, (ulong) * (uint *)(self + 0x290));
    }
  }
  if (*(long *)(self + 0x1b0) != 0) {
    pVVar1 = *(VertexBuffer **)(*(long *)(self + 0x1b0) + 0x20);
    if (*(ulong *)(pVVar1 + 0x10) < (ulong) * (uint *)(self + 0x290)) {
      VertexBuffer__Realloc(pVVar1, (ulong) * (uint *)(self + 0x290));
    }
  }
  if (*(long *)(self + 0x1f0) != 0) {
    pVVar1 = *(VertexBuffer **)(*(long *)(self + 0x1f0) + 0x20);
    if (*(ulong *)(pVVar1 + 0x10) < (ulong) * (uint *)(self + 0x290)) {
      VertexBuffer__Realloc(pVVar1, (ulong) * (uint *)(self + 0x290));
    }
  }
  if (*(long *)(self + 0x230) != 0) {
    pVVar1 = *(VertexBuffer **)(*(long *)(self + 0x230) + 0x20);
    if (*(ulong *)(pVVar1 + 0x10) < (ulong) * (uint *)(self + 0x290)) {
      VertexBuffer__Realloc(pVVar1, (ulong) * (uint *)(self + 0x290));
    }
  }
  if (*(long *)(self + 0x270) != 0) {
    pVVar1 = *(VertexBuffer **)(*(long *)(self + 0x270) + 0x20);
    if (*(ulong *)(pVVar1 + 0x10) < (ulong) * (uint *)(self + 0x290)) {
      VertexBuffer__Realloc(pVVar1, (ulong) * (uint *)(self + 0x290));
    }
  }
  iVar5 = 0;
  pTVar6 = self;
  do {
    while (pLVar4 = (Light *)(self + (long)iVar5 * 0x40), *(int *)(pLVar4 + 0x28) == 0) {
    LAB_00472e20:
      iVar5 = iVar5 + 1;
      pTVar6 = pTVar6 + 0x40;
      if (iVar5 == 10)
        goto LAB_00473178;
    }
    TGraphics__SetRenderState(Graphics, '\f', 0);
    TGraphics__SetRenderState(Graphics, '\x03', 1);
    TGraphics__SetRenderState(Graphics, '\x01', 7);
    TGraphics__SetRenderState(Graphics, '\a', 0);
    TGraphics__SetRenderState(Graphics, '\b', 0);
    TGraphics__ResetPixelStages(Graphics);
    TGraphics__ResetTexCoordGen(Graphics);
    TGraphics__SetRenderState(Graphics, '\x05', 0);
    TGraphics__SetRenderState(Graphics, '\x06', 0);
    TGraphics__AddPixelStage(Graphics, 1, 0, 0, 0, 0, 1, 0xffffffff);
    local_78 = 0;
    local_74 = 0;
    local_70 = 0;
    local_6c = 0;
    TGraphics__SetPixelColorConstant(Graphics, 0, &local_78);
    local_68 = 0x461c4000;
    local_64 = 0x461c4000;
    local_60 = 0x3f800000;
    local_5c = 0;
    local_58 = 0;
    local_54 = 0;
    local_50 = 0x460ca000;
    local_4c = 0;
    pMVar3 = (Matrix4x4 *)TGraphics__GetMatrix(Graphics, 0);
    Matrix4x4__Transformation3D(pMVar3, (FPUVector *)&local_68, (TQuaternion *)0x0,
                                (FPUVector *)&local_58);
    TGraphics__Draw(Graphics, CGR__pSingleQuadStream, (IndexBuffer *)0x0);
    pMVar3 = (Matrix4x4 *)TGraphics__GetMatrix(Graphics, 0);
    Matrix4x4__Identity(pMVar3);
    if ((1 < *(int *)(pLVar4 + 0x28) - 3U) && (*(int *)(pTVar6 + 0x38) == 1)) {
      local_2c[0] = 0;
      local_38 = (tagPos2ColorVertex *)0x0;
      VertexBuffer__Lock(*(VertexBuffer **)(*(long *)(pTVar6 + 0x30) + 0x20), &local_38, 1, 0);
      GenerateShadowMap(self, pLVar4, local_38, local_2c);
      *(int *)(*(long *)(pTVar6 + 0x30) + 0x14) = local_2c[0];
      *(int *)(*(long *)(pTVar6 + 0x30) + 0x10) = local_2c[0] / 3;
      VertexBuffer__Unlock(*(VertexBuffer **)(*(long *)(pTVar6 + 0x30) + 0x20));
      *(uint32_t *)(pTVar6 + 0x38) = 0;
    }
    TGraphics__Draw(Graphics, *(VertexStream **)(pTVar6 + 0x30), (IndexBuffer *)0x0);
    TGraphics__SetRenderState(Graphics, '\x03', 1);
    TGraphics__ResetPixelStages(Graphics);
    TGraphics__ResetTexCoordGen(Graphics);
    TGraphics__SetRenderState(Graphics, '\x01', 7);
    TGraphics__AddPixelStage(Graphics, 4, 0, 1, 0, 3, 3, 0xffffffff);
    TGraphics__SetPixelColorConstant(Graphics, 0, pLVar4 + 0x10);
    TGraphics__SetRenderState(Graphics, '\b', 1);
    TGraphics__SetRenderState(Graphics, '\x05', 1);
    TGraphics__SetRenderState(Graphics, '\x06', 1);
    TGraphics__SetRenderState(Graphics, '\x01', 1);
    TGraphics__SetRenderState(Graphics, '\f', 1);
    if (*(int *)(pLVar4 + 0x28) != 0) {
      *(float *)(pLVar4 + 0x24) =
          DAT_005c01d0 /* R:0.0010000000474974513f */ + *(float *)(pLVar4 + 0x24);
    }
    local_48 = *(uint32_t *)(pLVar4 + 0x20);
    local_44 = local_48;
    pMVar3 = (Matrix4x4 *)TGraphics__GetMatrix(Graphics, 0);
    Matrix4x4__Transformation2DRot(pMVar3, (Vector2 *)&local_48, (float *)(pLVar4 + 0x24),
                                   (Vector2 *)pLVar4);
    if ((*(int *)(pLVar4 + 0x28) == 2) || (*(int *)(pLVar4 + 0x28) == 4)) {
      TGraphics__Draw(Graphics, *(VertexStream **)(self + 0x2a0), (IndexBuffer *)0x0);
      goto LAB_00472e20;
    }
    iVar5 = iVar5 + 1;
    pTVar6 = pTVar6 + 0x40;
    TGraphics__Draw(Graphics, *(VertexStream **)(self + 0x298), (IndexBuffer *)0x0);
  } while (iVar5 != 10);
LAB_00473178:
  TGraphics__RenderToBackBuffer(Graphics);
  TGraphics__ForceAspectRatio(Graphics, 0);
  TGraphics__AutoSetViewport();
  TGraphics__SetRenderState(Graphics, '\x01', 7);
  TGraphics__ResetPixelStages(Graphics);
  TGraphics__ResetTexCoordGen(Graphics);
  TGraphics__SetRenderState(Graphics, '\b', 1);
  TGraphics__SetRenderState(Graphics, '\x05', 4);
  TGraphics__SetRenderState(Graphics, '\x06', 5);
  TGraphics__SetRenderState(Graphics, '\x03', 0);
  TGraphics__Clear(Graphics, (ColorTemplate *)::cNullColor, 3);
  TGraphics__ForceAspectRatio(Graphics, 1);
  TGraphics__AutoSetViewport();
  return;
}

/* ======================================================================
 * TileLevelLightMap__Reset  (Ghidra `Reset` @ 004733a0)
 * Signature: uint8_t __thiscall Reset(TileLevelLightMap * self)
 * Class: TileLevelLightMap
 * Calls: (none)
 * Called by: `EditorForm_LoadFormOk`, `SMBEditor__LoadLevel`, `SMBEditor__NewLevel`, `SMBLevelLoad`
 */
/* TileLevelLightMap__Reset() */

void __thiscall TileLevelLightMap__Reset(TileLevelLightMap *self)

{
  *(uint32_t *)(self + 0x28) = 0;
  *(uint32_t *)(self + 0x38) = 1;
  *(uint32_t *)(self + 0x68) = 0;
  *(uint32_t *)(self + 0x78) = 1;
  *(uint32_t *)(self + 0xa8) = 0;
  *(uint32_t *)(self + 0xb8) = 1;
  *(uint32_t *)(self + 0xe8) = 0;
  *(uint32_t *)(self + 0xf8) = 1;
  *(uint32_t *)(self + 0x128) = 0;
  *(uint32_t *)(self + 0x138) = 1;
  *(uint32_t *)(self + 0x168) = 0;
  *(uint32_t *)(self + 0x178) = 1;
  *(uint32_t *)(self + 0x1a8) = 0;
  *(uint32_t *)(self + 0x1b8) = 1;
  *(uint32_t *)(self + 0x1e8) = 0;
  *(uint32_t *)(self + 0x1f8) = 1;
  *(uint32_t *)(self + 0x228) = 0;
  *(uint32_t *)(self + 0x238) = 1;
  *(uint32_t *)(self + 0x268) = 0;
  *(uint32_t *)(self + 0x278) = 1;
  return;
}

/* ======================================================================
 * TileLevelLightMap__RegenerateLights  (Ghidra `RegenerateLights` @ 00473460)
 * Signature: uint8_t __thiscall RegenerateLights(TileLevelLightMap * self)
 * Class: TileLevelLightMap
 * Calls: (none)
 * Called by: `GSuperMeatBoy__SetCurrentLevel`, `MrMinecraft__ManipulateBlock`, `MrMinecraft__ResetBlocks`, `ResetSMBGraphicsDependentFactors`, `SMBEditor__DeActivate`, `SMBEditor__Update`, `SMBPalette__ResetObstacles`, `SMBPalette__Update`
 */
/* TileLevelLightMap__RegenerateLights() */

void __thiscall TileLevelLightMap__RegenerateLights(TileLevelLightMap *self)

{
  *(uint32_t *)(self + 0x38) = 1;
  *(uint32_t *)(self + 0x78) = 1;
  *(uint32_t *)(self + 0xb8) = 1;
  *(uint32_t *)(self + 0xf8) = 1;
  *(uint32_t *)(self + 0x138) = 1;
  *(uint32_t *)(self + 0x178) = 1;
  *(uint32_t *)(self + 0x1b8) = 1;
  *(uint32_t *)(self + 0x1f8) = 1;
  *(uint32_t *)(self + 0x238) = 1;
  *(uint32_t *)(self + 0x278) = 1;
  return;
}

/* ======================================================================
 * TileLevelLightMap__DestroyLightsAndMaps  (Ghidra `DestroyLightsAndMaps` @ 004734c0)
 * Signature: uint8_t __thiscall DestroyLightsAndMaps(TileLevelLightMap * self)
 * Class: TileLevelLightMap
 * Calls: `BaseResource__Release`
 * Called by: `EndBackToTitleFromReplay`, `GSuperMeatBoy__DestroyGameResources`, `GSuperMeatBoy__SwitchGameMode`, `GSuperMeatBoy__Update__00516690`
 */
/* TileLevelLightMap__DestroyLightsAndMaps() */

void __thiscall TileLevelLightMap__DestroyLightsAndMaps(TileLevelLightMap *self)

{
  if (*(BaseResource **)(self + 0x30) != (BaseResource *)0x0) {
    BaseResource__Release(*(BaseResource **)(self + 0x30), 0);
    *(uint64_t *)(self + 0x30) = 0;
  }
  if (*(BaseResource **)(self + 0x70) != (BaseResource *)0x0) {
    BaseResource__Release(*(BaseResource **)(self + 0x70), 0);
    *(uint64_t *)(self + 0x70) = 0;
  }
  if (*(BaseResource **)(self + 0xb0) != (BaseResource *)0x0) {
    BaseResource__Release(*(BaseResource **)(self + 0xb0), 0);
    *(uint64_t *)(self + 0xb0) = 0;
  }
  if (*(BaseResource **)(self + 0xf0) != (BaseResource *)0x0) {
    BaseResource__Release(*(BaseResource **)(self + 0xf0), 0);
    *(uint64_t *)(self + 0xf0) = 0;
  }
  if (*(BaseResource **)(self + 0x130) != (BaseResource *)0x0) {
    BaseResource__Release(*(BaseResource **)(self + 0x130), 0);
    *(uint64_t *)(self + 0x130) = 0;
  }
  if (*(BaseResource **)(self + 0x170) != (BaseResource *)0x0) {
    BaseResource__Release(*(BaseResource **)(self + 0x170), 0);
    *(uint64_t *)(self + 0x170) = 0;
  }
  if (*(BaseResource **)(self + 0x1b0) != (BaseResource *)0x0) {
    BaseResource__Release(*(BaseResource **)(self + 0x1b0), 0);
    *(uint64_t *)(self + 0x1b0) = 0;
  }
  if (*(BaseResource **)(self + 0x1f0) != (BaseResource *)0x0) {
    BaseResource__Release(*(BaseResource **)(self + 0x1f0), 0);
    *(uint64_t *)(self + 0x1f0) = 0;
  }
  if (*(BaseResource **)(self + 0x230) != (BaseResource *)0x0) {
    BaseResource__Release(*(BaseResource **)(self + 0x230), 0);
    *(uint64_t *)(self + 0x230) = 0;
  }
  if (*(BaseResource **)(self + 0x270) != (BaseResource *)0x0) {
    BaseResource__Release(*(BaseResource **)(self + 0x270), 0);
    *(uint64_t *)(self + 0x270) = 0;
  }
  *(uint32_t *)(self + 0x28) = 0;
  *(uint32_t *)(self + 0x38) = 1;
  *(uint32_t *)(self + 0x68) = 0;
  *(uint32_t *)(self + 0x78) = 1;
  *(uint32_t *)(self + 0xa8) = 0;
  *(uint32_t *)(self + 0xb8) = 1;
  *(uint32_t *)(self + 0xe8) = 0;
  *(uint32_t *)(self + 0xf8) = 1;
  *(uint32_t *)(self + 0x128) = 0;
  *(uint32_t *)(self + 0x138) = 1;
  *(uint32_t *)(self + 0x168) = 0;
  *(uint32_t *)(self + 0x178) = 1;
  *(uint32_t *)(self + 0x1a8) = 0;
  *(uint32_t *)(self + 0x1b8) = 1;
  *(uint32_t *)(self + 0x1e8) = 0;
  *(uint32_t *)(self + 0x1f8) = 1;
  *(uint32_t *)(self + 0x228) = 0;
  *(uint32_t *)(self + 0x238) = 1;
  *(uint32_t *)(self + 0x268) = 0;
  *(uint32_t *)(self + 0x278) = 1;
  return;
}
