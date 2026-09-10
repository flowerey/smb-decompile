/* src/game/classes/BloodyTiles.c — 6 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "BloodyTiles.h"

/* ======================================================================
 * BloodyTiles__Render  (Ghidra `Render` @ 00463130)
 * Signature: uint8_t __thiscall Render(BloodyTiles * self)
 * Class: BloodyTiles
 * Calls: `AutoLockSection__AutoLockSection`, `AutoLockSection__AutoLockSection__005b59d0`, `Camera__ScreenToWorld`, `FlashAnimationLibrary__GetLibraryEntry`, `FlashLibraryEntry__GetDuration`, `TileLevel__GetGridIndex__0058dd90`
 * Called by: (none)
 */
/* BloodyTiles__Render() */

void __thiscall BloodyTiles__Render(BloodyTiles *self)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  FlashLibraryEntry *pFVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  long local_e0;
  uint local_d8;
  uint32_t local_c8;
  uint32_t local_c4;
  uint32_t local_c0;
  uint32_t local_bc;
  AutoLockSection local_b8 [16];
  Vector2 local_a8 [16];
  uint32_t local_98;
  uint32_t local_94;
  uint32_t local_88;
  uint32_t local_84;
  ushort local_78 [8];
  ushort local_68 [8];
  uint local_58 [4];
  uint local_48 [6];
  
  if (*(int *)(SuperMeatBoy + 0x2c) != 2) {
    AutoLockSection__AutoLockSection(local_b8,(CriticalSection *)bloodRender);
    local_98 = 0xbf800000;
    local_94 = 0xbf800000;
    local_c8 = 0;
    local_c4 = 0;
    local_c0 = 0;
    local_bc = 0;
                    /* try { // try from 004631a4 to 004631cf has its CatchHandler @ 00463621 */
    Camera__ScreenToWorld
              (*(Camera **)(SuperMeatBoy + 0x38),(FPUVector *)&local_c8,(Vector2 *)&local_98,0.0);
    TileLevel__GetGridIndex__0058dd90
              (*(TileLevel **)(SuperMeatBoy + 0x40),(Vector2 *)&local_c8,local_a8,(int *)local_78,
               (int *)local_48);
    local_88 = 0x3f800000;
    local_84 = 0x3f800000;
                    /* try { // try from 004631f8 to 004635b5 has its CatchHandler @ 00463636 */
    Camera__ScreenToWorld
              (*(Camera **)(SuperMeatBoy + 0x38),(FPUVector *)&local_c8,(Vector2 *)&local_88,0.0);
    TileLevel__GetGridIndex__0058dd90
              (*(TileLevel **)(SuperMeatBoy + 0x40),(Vector2 *)&local_c8,local_a8,(int *)local_68,
               (int *)local_58);
    local_d8 = (uint)local_78[0];
    if (local_d8 <= local_68[0]) {
      uVar6 = local_58[0] & 0xffff;
      uVar3 = (uint)*(ushort *)(*(long *)(SuperMeatBoy + 0x40) + 0x38);
      local_e0 = ((ulong)local_78[0] + (long)(int)(uVar6 * uVar3)) * 4;
      do {
        local_d8 = local_d8 + 1;
        lVar8 = local_e0;
        uVar7 = uVar6;
        if (uVar6 <= (local_48[0] & 0xffff)) {
          do {
            uVar7 = uVar7 + 1;
            if (*(int *)(*(long *)(self + 0x20) + lVar8) != -1) {
              lVar2 = (long)*(int *)(*(long *)(self + 0x20) + lVar8) * 0x88;
              plVar4 = (long *)(*(long *)(self + 0x28) + lVar2);
              if ((int)plVar4[0x10] != 0) {
                if (*plVar4 != 0) {
                  *(int *)(*plVar4 + 0x30) = (int)plVar4[1];
                  *(uint32_t *)(*(long *)(*(long *)(self + 0x28) + lVar2) + 0x34) =
                       *(uint32_t *)(*(long *)(self + 0x28) + lVar2 + 0xc);
                  *(int *)(*(long *)(*(long *)(self + 0x28) + lVar2) + 0x58) =
                       (int)((long *)(*(long *)(self + 0x28) + lVar2))[3];
                  *(uint32_t *)(*(long *)(*(long *)(self + 0x28) + lVar2) + 0x48) =
                       *(uint32_t *)(*(long *)(self + 0x28) + lVar2 + 0x14);
                  *(uint32_t *)(*(long *)(*(long *)(self + 0x28) + lVar2) + 0x4c) =
                       *(uint32_t *)(*(long *)(self + 0x28) + lVar2 + 0x14);
                  *(int *)(*(long *)(*(long *)(self + 0x28) + lVar2) + 0x40) =
                       (int)((long *)(*(long *)(self + 0x28) + lVar2))[2];
                  (**(code **)(**(long **)(*(long *)(self + 0x28) + lVar2) + 0x10))();
                  pFVar5 = (FlashLibraryEntry *)
                           FlashAnimationLibrary__GetLibraryEntry
                                     (*(FlashAnimationLibrary **)
                                       (*(long *)(*(long *)(self + 0x28) + lVar2) + 0x28),
                                      *(int *)(*(long *)(*(long *)(self + 0x28) + lVar2) + 0x20));
                  fVar9 = (float)FlashLibraryEntry__GetDuration(pFVar5);
                  fVar10 = *(float *)(Engine + 0x38) +
                           *(float *)(*(long *)(self + 0x28) + lVar2 + 0x18);
                  if (fVar10 <= fVar9) {
                    fVar9 = fVar10;
                  }
                  *(float *)(*(long *)(self + 0x28) + lVar2 + 0x18) = fVar9;
                  plVar4 = (long *)(*(long *)(self + 0x28) + lVar2);
                }
                if (plVar4[4] != 0) {
                  *(int *)(plVar4[4] + 0x30) = (int)plVar4[5];
                  *(uint32_t *)(*(long *)(*(long *)(self + 0x28) + lVar2 + 0x20) + 0x34) =
                       *(uint32_t *)(*(long *)(self + 0x28) + lVar2 + 0x2c);
                  *(uint32_t *)(*(long *)(*(long *)(self + 0x28) + lVar2 + 0x20) + 0x58) =
                       *(uint32_t *)(*(long *)(self + 0x28) + lVar2 + 0x38);
                  *(uint32_t *)(*(long *)(*(long *)(self + 0x28) + lVar2 + 0x20) + 0x48) =
                       *(uint32_t *)(*(long *)(self + 0x28) + lVar2 + 0x34);
                  *(uint32_t *)(*(long *)(*(long *)(self + 0x28) + lVar2 + 0x20) + 0x4c) =
                       *(uint32_t *)(*(long *)(self + 0x28) + lVar2 + 0x34);
                  *(uint32_t *)(*(long *)(*(long *)(self + 0x28) + lVar2 + 0x20) + 0x40) =
                       *(uint32_t *)(*(long *)(self + 0x28) + lVar2 + 0x30);
                  (**(code **)(**(long **)(*(long *)(self + 0x28) + 0x20 + lVar2) + 0x10))();
                  lVar1 = *(long *)(*(long *)(self + 0x28) + 0x20 + lVar2);
                  pFVar5 = (FlashLibraryEntry *)
                           FlashAnimationLibrary__GetLibraryEntry
                                     (*(FlashAnimationLibrary **)(lVar1 + 0x28),
                                      *(int *)(lVar1 + 0x20));
                  fVar9 = (float)FlashLibraryEntry__GetDuration(pFVar5);
                  fVar10 = *(float *)(Engine + 0x38) +
                           *(float *)(*(long *)(self + 0x28) + lVar2 + 0x38);
                  if (fVar10 <= fVar9) {
                    fVar9 = fVar10;
                  }
                  *(float *)(*(long *)(self + 0x28) + lVar2 + 0x38) = fVar9;
                  plVar4 = (long *)(*(long *)(self + 0x28) + lVar2);
                }
                if (plVar4[8] != 0) {
                  *(int *)(plVar4[8] + 0x30) = (int)plVar4[9];
                  *(uint32_t *)(*(long *)(*(long *)(self + 0x28) + lVar2 + 0x40) + 0x34) =
                       *(uint32_t *)(*(long *)(self + 0x28) + lVar2 + 0x4c);
                  *(uint32_t *)(*(long *)(*(long *)(self + 0x28) + lVar2 + 0x40) + 0x58) =
                       *(uint32_t *)(*(long *)(self + 0x28) + lVar2 + 0x58);
                  *(uint32_t *)(*(long *)(*(long *)(self + 0x28) + lVar2 + 0x40) + 0x48) =
                       *(uint32_t *)(*(long *)(self + 0x28) + lVar2 + 0x54);
                  *(uint32_t *)(*(long *)(*(long *)(self + 0x28) + lVar2 + 0x40) + 0x4c) =
                       *(uint32_t *)(*(long *)(self + 0x28) + lVar2 + 0x54);
                  *(uint32_t *)(*(long *)(*(long *)(self + 0x28) + lVar2 + 0x40) + 0x40) =
                       *(uint32_t *)(*(long *)(self + 0x28) + lVar2 + 0x50);
                  (**(code **)(**(long **)(*(long *)(self + 0x28) + 0x40 + lVar2) + 0x10))();
                  lVar1 = *(long *)(*(long *)(self + 0x28) + 0x40 + lVar2);
                  pFVar5 = (FlashLibraryEntry *)
                           FlashAnimationLibrary__GetLibraryEntry
                                     (*(FlashAnimationLibrary **)(lVar1 + 0x28),
                                      *(int *)(lVar1 + 0x20));
                  fVar9 = (float)FlashLibraryEntry__GetDuration(pFVar5);
                  fVar10 = *(float *)(Engine + 0x38) +
                           *(float *)(*(long *)(self + 0x28) + lVar2 + 0x58);
                  if (fVar10 <= fVar9) {
                    fVar9 = fVar10;
                  }
                  *(float *)(*(long *)(self + 0x28) + lVar2 + 0x58) = fVar9;
                  plVar4 = (long *)(*(long *)(self + 0x28) + lVar2);
                }
                if (plVar4[0xc] != 0) {
                  *(int *)(plVar4[0xc] + 0x30) = (int)plVar4[0xd];
                  *(uint32_t *)(*(long *)(*(long *)(self + 0x28) + lVar2 + 0x60) + 0x34) =
                       *(uint32_t *)(*(long *)(self + 0x28) + lVar2 + 0x6c);
                  *(uint32_t *)(*(long *)(*(long *)(self + 0x28) + lVar2 + 0x60) + 0x58) =
                       *(uint32_t *)(*(long *)(self + 0x28) + lVar2 + 0x78);
                  *(uint32_t *)(*(long *)(*(long *)(self + 0x28) + lVar2 + 0x60) + 0x48) =
                       *(uint32_t *)(*(long *)(self + 0x28) + lVar2 + 0x74);
                  *(uint32_t *)(*(long *)(*(long *)(self + 0x28) + lVar2 + 0x60) + 0x4c) =
                       *(uint32_t *)(*(long *)(self + 0x28) + lVar2 + 0x74);
                  *(uint32_t *)(*(long *)(*(long *)(self + 0x28) + lVar2 + 0x60) + 0x40) =
                       *(uint32_t *)(*(long *)(self + 0x28) + lVar2 + 0x70);
                  (**(code **)(**(long **)(*(long *)(self + 0x28) + 0x60 + lVar2) + 0x10))();
                  lVar1 = *(long *)(*(long *)(self + 0x28) + 0x60 + lVar2);
                  pFVar5 = (FlashLibraryEntry *)
                           FlashAnimationLibrary__GetLibraryEntry
                                     (*(FlashAnimationLibrary **)(lVar1 + 0x28),
                                      *(int *)(lVar1 + 0x20));
                  fVar9 = (float)FlashLibraryEntry__GetDuration(pFVar5);
                  fVar10 = *(float *)(Engine + 0x38) +
                           *(float *)(lVar2 + *(long *)(self + 0x28) + 0x78);
                  if (fVar10 <= fVar9) {
                    fVar9 = fVar10;
                  }
                  *(float *)(lVar2 + *(long *)(self + 0x28) + 0x78) = fVar9;
                }
              }
            }
            lVar8 = lVar8 + (long)(int)uVar3 * 4;
          } while ((int)uVar7 <= (int)(local_48[0] & 0xffff));
        }
        local_e0 = local_e0 + 4;
      } while ((int)local_d8 <= (int)(uint)local_68[0]);
    }
    AutoLockSection__AutoLockSection__005b59d0(local_b8);
  }
  return;
}

/* ======================================================================
 * BloodyTiles__BloodyTiles  (Ghidra `~BloodyTiles` @ 00463640)
 * Signature: uint8_t __thiscall ~BloodyTiles(BloodyTiles * self)
 * Class: BloodyTiles
 * Calls: `BloodyTiles__BloodyTiles__00463670`, `free`
 * Called by: (none)
 */
/* BloodyTiles__BloodyTiles__00463670() */

void __thiscall BloodyTiles__BloodyTiles__00463670(BloodyTiles *self)

{
  *(uint8_t ***)self = &PTR__BloodyTiles_005be630;
  free(*(void **)(self + 0x28));
  free(*(void **)(self + 0x20));
  *(uint8_t ***)self = &PTR__RenderLayerObject_005be670;
  return;
}

/* ======================================================================
 * BloodyTiles__BloodyTiles__00463670  (Ghidra `~BloodyTiles` @ 00463670)
 * Signature: uint8_t __thiscall ~BloodyTiles(BloodyTiles * self)
 * Class: BloodyTiles
 * Calls: `free`, `operator_delete`
 * Called by: `BloodyTiles__BloodyTiles`, `GSuperMeatBoy__GSuperMeatBoy__00512120`
 */
/* BloodyTiles__BloodyTiles__00463670() */

void __thiscall BloodyTiles__BloodyTiles__00463670(BloodyTiles *self)

{
  *(uint8_t ***)self = &PTR__BloodyTiles_005be630;
  free(*(void **)(self + 0x28));
  free(*(void **)(self + 0x20));
  *(uint8_t ***)self = &PTR__RenderLayerObject_005be670;
  operator_delete(self);
  return;
}

/* ======================================================================
 * BloodyTiles__BloodyTiles__004636a0  (Ghidra `BloodyTiles` @ 004636a0)
 * Signature: uint8_t __thiscall BloodyTiles(BloodyTiles * self)
 * Class: BloodyTiles
 * Calls: (none)
 * Called by: `GSuperMeatBoy__GSuperMeatBoy__00514290`
 */
/* BloodyTiles__BloodyTiles__004636a0() */

void __thiscall BloodyTiles__BloodyTiles__004636a0(BloodyTiles *self)

{
  *(uint64_t *)(self + 8) = 0;
  *(uint64_t *)(self + 0x10) = 0;
  *(uint64_t *)(self + 0x18) = 0;
  *(uint8_t ***)self = &PTR__BloodyTiles_005be630;
  *(uint64_t *)(self + 0x20) = 0;
  *(uint64_t *)(self + 0x28) = 0;
  *(uint32_t *)(self + 0x30) = 0;
  *(uint32_t *)(self + 0x34) = 0;
  return;
}

/* ======================================================================
 * BloodyTiles__Reset  (Ghidra `Reset` @ 004636e0)
 * Signature: uint8_t __thiscall Reset(BloodyTiles * self)
 * Class: BloodyTiles
 * Calls: `AutoLockSection__AutoLockSection`, `AutoLockSection__AutoLockSection__005b59d0`, `TileLevel__GetGridBlock`, `malloc`, `memset`, `realloc`
 * Called by: `GSuperMeatBoy__LoadDeferredCharactor`, `GSuperMeatBoy__SetCurrentLevel`, `GSuperMeatBoy__ShowCurrentReplay`, `LoadDeferredCharactor`, `SMBEditor__DeActivate`, `ShowCurrentReplay`
 */
/* BloodyTiles__Reset() */

void __thiscall BloodyTiles__Reset(BloodyTiles *self)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  int iVar6;
  size_t __size;
  TileLevel *pTVar7;
  int iVar8;
  AutoLockSection aAStack_28 [16];
  
  AutoLockSection__AutoLockSection(aAStack_28,(CriticalSection *)bloodRender);
  lVar3 = SuperMeatBoy;
  pTVar7 = *(TileLevel **)(SuperMeatBoy + 0x40);
  iVar6 = (uint)*(ushort *)(pTVar7 + 0x38) * (uint)*(ushort *)(pTVar7 + 0x3a);
  if (*(long *)(self + 0x28) == 0) {
    *(int *)(self + 0x34) = iVar6 * 4;
    pvVar4 = malloc((ulong)(uint)(iVar6 * 4));
    *(void **)(self + 0x20) = pvVar4;
    pTVar7 = *(TileLevel **)(lVar3 + 0x40);
  }
  else {
    uVar2 = iVar6 * 4;
    if (*(uint *)(self + 0x34) < uVar2) {
      pvVar4 = realloc(*(void **)(self + 0x20),(ulong)uVar2);
      *(void **)(self + 0x20) = pvVar4;
      lVar3 = SuperMeatBoy;
      *(uint *)(self + 0x34) = uVar2;
      pTVar7 = *(TileLevel **)(lVar3 + 0x40);
    }
  }
                    /* try { // try from 00463738 to 0046373c has its CatchHandler @ 0046383c */
  lVar3 = TileLevel__GetGridBlock(pTVar7,0,0,0);
  iVar8 = 0;
  if (iVar6 != 0) {
    lVar5 = 0;
    lVar1 = (ulong)(iVar6 - 1) * 4 + 4;
    do {
      while (*(char *)(lVar3 + lVar5) == '\0') {
        *(uint32_t *)(*(long *)(self + 0x20) + lVar5) = 0xffffffff;
        lVar5 = lVar5 + 4;
        if (lVar5 == lVar1) goto LAB_00463783;
      }
      *(int *)(*(long *)(self + 0x20) + lVar5) = iVar8;
      lVar5 = lVar5 + 4;
      iVar8 = iVar8 + 1;
    } while (lVar5 != lVar1);
  }
LAB_00463783:
  if (*(int *)(self + 0x30) < iVar8) {
    __size = (long)iVar8 * 0x88;
    if (*(void **)(self + 0x28) == (void *)0x0) {
      pvVar4 = malloc(__size);
      *(void **)(self + 0x28) = pvVar4;
    }
    else {
      pvVar4 = realloc(*(void **)(self + 0x28),__size);
      *(void **)(self + 0x28) = pvVar4;
    }
    *(int *)(self + 0x30) = iVar8;
  }
  else {
    pvVar4 = *(void **)(self + 0x28);
    __size = (long)*(int *)(self + 0x30) * 0x88;
  }
  memset(pvVar4,0,__size);
  AutoLockSection__AutoLockSection__005b59d0(aAStack_28);
  return;
}

/* ======================================================================
 * BloodyTiles__AddBloodyTile  (Ghidra `AddBloodyTile` @ 00463a30)
 * Signature: uint8_t __thiscall AddBloodyTile(BloodyTiles * self, GRIDBLOCK * arg1, tagTileCollisionType arg2, Vector2 * arg3, int arg4, FlashLibraryInstance * arg5)
 * Class: BloodyTiles
 * Calls: `GetHalfTileOrientation`, `GetTriangleOrientation`, `IsBloodOnTile`, `IsBreakableBlock`, `Vector2__operator_assign`, `Vector2__operator_plus__005be140`
 * Called by: `MeatBoyCharactor__Update`, `SMBBloodExplosion__Update`
 */
/* BloodyTiles__AddBloodyTile(GRIDBLOCK const*, tagTileCollisionType, Vector2 const&, int,
   FlashLibraryInstance*) */

void __thiscall
BloodyTiles__AddBloodyTile
          (BloodyTiles *self,GRIDBLOCK *arg1,int arg3,Vector2 *arg4,int arg5,
          uint64_t arg6)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  uint64_t *puVar5;
  float fVar6;
  Matrix4x4 local_a8 [64];
  float local_68;
  float local_64;
  Vector2 local_58 [16];
  float local_48 [3];
  int local_3c [3];
  
  uVar1 = *(uint *)(GSuperMeatBoy__pLevelPalette + 0x427c);
  iVar3 = IsBreakableBlock(*arg1);
  if (iVar3 == 1) {
    return;
  }
  if (*arg1 == (GRIDBLOCK)0x0) {
    return;
  }
  if (((byte)arg1[2] & 0xc) == 0xc) {
    return;
  }
  if ((byte)*arg1 == uVar1) {
    return;
  }
  local_3c[0] = 0;
  iVar3 = GetTriangleOrientation(arg1,arg4);
  iVar4 = IsBloodOnTile(self,arg1,arg4,arg3,local_3c,iVar3,1);
  fVar2 = DAT_005be6e4 /* R:0.5f */;
  if (iVar4 != 0) {
    return;
  }
  local_68 = 0.0;
  local_64 = TileLevel__fLevelGridWH * DAT_005be6e4 /* R:0.5f */;
  local_48[0] = 0.0;
  if ((arg5 == 5) && (((byte)arg1[2] & 0xc) != 8)) {
    if (arg3 == 4) {
      local_48[0] = -1.5707964;
    }
    else if (arg3 == 8) {
      local_48[0] = 1.5707964;
    }
    else if (arg3 == 1) {
      local_48[0] = 3.1415927;
    }
    fVar6 = 1.2;
    if (((byte)arg1[2] & 0xc) == 4) {
      iVar3 = GetHalfTileOrientation(arg1,arg4);
      if (iVar3 == 1) {
        if (arg3 == 1) {
LAB_00463ea5:
          local_64 = fVar2 * TileLevel__fLevelGridWH;
        }
        else if (arg3 == 2) {
LAB_00463ebb:
          local_64 = 0.0;
        }
        else if (arg3 == 4) {
LAB_00463ecb:
          local_68 = DAT_005be6e8 /* R:0.25f */ * TileLevel__fLevelGridWH;
          fVar6 = fVar2;
        }
        else {
          if (arg3 != 8) goto LAB_00463b64;
LAB_00463cc6:
          local_68 = (float)((uint)TileLevel__fLevelGridWH ^ DAT_005be6f0 /* R:u32=2147483648 */) * DAT_005be6e8 /* R:0.25f */;
          fVar6 = fVar2;
        }
        goto LAB_00463cfb;
      }
      if (iVar3 == 0) {
        if (arg3 == 2) goto LAB_00463ea5;
        if (arg3 == 1) goto LAB_00463ebb;
        if (arg3 == 8) goto LAB_00463ecb;
        if (arg3 == 4) goto LAB_00463cc6;
      }
      else if (iVar3 == 3) {
        if (arg3 == 4) goto LAB_00463ea5;
        if (arg3 == 8) goto LAB_00463ebb;
        if (arg3 == 2) goto LAB_00463ecb;
        if (arg3 == 1) goto LAB_00463cc6;
      }
      else if (iVar3 == 2) {
        if (arg3 == 8) goto LAB_00463ea5;
        if (arg3 == 4) goto LAB_00463ebb;
        if (arg3 == 1) goto LAB_00463ecb;
        if (arg3 == 2) goto LAB_00463cc6;
      }
    }
LAB_00463b64:
    iVar3 = 0;
    if (7 < arg3 - 1U) goto LAB_00463b72;
  }
  else {
    if (iVar3 == 0) {
      if ((arg3 == 4) || (arg3 == 2)) {
LAB_00463b48:
        local_64 = 0.0;
        local_48[0] = -0.7853982;
        fVar6 = 1.5;
        goto LAB_00463b64;
      }
LAB_00463d62:
      if (arg3 == 4) {
        local_48[0] = -1.5707964;
        fVar6 = 1.2;
        goto LAB_00463cfb;
      }
    }
    else {
      if (iVar3 == 1) {
        if ((arg3 == 8) || (arg3 == 2)) {
LAB_00463d30:
          local_64 = 0.0;
          local_48[0] = 0.7853982;
          fVar6 = 1.5;
          goto LAB_00463b64;
        }
        goto LAB_00463d62;
      }
      if (iVar3 != 2) {
        if ((iVar3 == 3) && ((arg3 == 8 || (arg3 == 1)))) goto LAB_00463b48;
        goto LAB_00463d62;
      }
      if ((arg3 == 4) || (arg3 == 1)) goto LAB_00463d30;
    }
    if (arg3 == 8) {
      local_48[0] = 1.5707964;
      fVar6 = 1.2;
    }
    else {
      fVar6 = 1.2;
      if (arg3 != 1) goto LAB_00463b64;
      local_48[0] = 3.1415927;
    }
  }
LAB_00463cfb:
  iVar3 = *(int *)(CSWTCH_29 + (ulong)(arg3 - 1) * 4);
LAB_00463b72:
  Matrix4x4__Transformation2DRot(local_a8,(Vector2 *)0x0,local_48,(Vector2 *)0x0);
  Matrix4x4__TransformVector2((Vector2 *)&local_68,(Vector2 *)&local_68,local_a8,1);
  puVar5 = (uint64_t *)((long)iVar3 * 0x20 + (long)local_3c[0] * 0x88 + *(long *)(self + 0x28));
  *puVar5 = arg6;
  Vector2__operator_plus__005be140(local_58,arg4);
  Vector2__operator_assign((Vector2 *)(puVar5 + 1),local_58);
  *(uint32_t *)(puVar5 + 3) = 0;
  *(float *)(puVar5 + 2) = fVar6;
  *(float *)((long)puVar5 + 0x14) = local_48[0];
  return;
}
