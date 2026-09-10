/* src/engine/core_00.c — 78 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "core_00.h"

/* ======================================================================
 * CharJump  (Ghidra `CharJump` @ 00473c50)
 * Signature: uint8_t __stdcall CharJump(tagButtonProps * arg1, void * arg2)
 * Calls: (none)
 * Called by: `MeatBoyCharactor__RestoreControls`
 */
/* CharJump(tagButtonProps const*, void*) */

void CharJump(tagButtonProps *arg1,void *arg2)

{
                    /* WARNING: Could not recover jumptable at 0x00473c66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)arg2 + 0x80))(arg2,arg1,arg2);
  return;
}

/* ======================================================================
 * CharMoveRight  (Ghidra `CharMoveRight` @ 00473c70)
 * Signature: uint8_t __stdcall CharMoveRight(tagButtonProps * arg1, void * arg2)
 * Calls: (none)
 * Called by: `MeatBoyCharactor__RestoreControls`
 */
/* CharMoveRight(tagButtonProps const*, void*) */

void CharMoveRight(tagButtonProps *arg1,void *arg2)

{
                    /* WARNING: Could not recover jumptable at 0x00473c86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)arg2 + 0x90))(arg2,arg1,arg2);
  return;
}

/* ======================================================================
 * CharMoveLeft  (Ghidra `CharMoveLeft` @ 00473c90)
 * Signature: uint8_t __stdcall CharMoveLeft(tagButtonProps * arg1, void * arg2)
 * Calls: (none)
 * Called by: `MeatBoyCharactor__RestoreControls`
 */
/* CharMoveLeft(tagButtonProps const*, void*) */

void CharMoveLeft(tagButtonProps *arg1,void *arg2)

{
                    /* WARNING: Could not recover jumptable at 0x00473ca6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)arg2 + 0x88))(arg2,arg1,arg2);
  return;
}

/* ======================================================================
 * CharSpecial  (Ghidra `CharSpecial` @ 00473cb0)
 * Signature: uint8_t __stdcall CharSpecial(tagButtonProps * arg1, void * arg2)
 * Calls: (none)
 * Called by: `MeatBoyCharactor__RestoreControls`
 */
/* CharSpecial(tagButtonProps const*, void*) */

void CharSpecial(tagButtonProps *arg1,void *arg2)

{
                    /* WARNING: Could not recover jumptable at 0x00473cc3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)arg2 + 0x78))(arg2,arg1,arg2);
  return;
}

/* ======================================================================
 * CombinePlatformAndTileCollision  (Ghidra `CombinePlatformAndTileCollision` @ 00479570)
 * Signature: uint8_t __stdcall CombinePlatformAndTileCollision(TileCollisionInfo * arg1, TileCollisionInfo * arg2)
 * Calls: (none)
 * Called by: (none)
 */
/* CombinePlatformAndTileCollision(TileCollisionInfo&, TileCollisionInfo&) */

void CombinePlatformAndTileCollision(TileCollisionInfo *arg1,TileCollisionInfo *arg2)

{
  if (*(int *)(arg1 + 0x20) != 0) {
    *(int *)(arg2 + 0x20) = *(int *)(arg1 + 0x20);
    *(uint64_t *)(arg2 + 8) = *(uint64_t *)(arg1 + 8);
    *(uint64_t *)arg2 = *(uint64_t *)arg1;
  }
  if (*(int *)(arg1 + 0x24) != 0) {
    *(int *)(arg2 + 0x24) = *(int *)(arg1 + 0x24);
    *(uint64_t *)(arg2 + 0x18) = *(uint64_t *)(arg1 + 0x18);
    *(uint64_t *)(arg2 + 0x10) = *(uint64_t *)(arg1 + 0x10);
  }
  return;
}

/* ======================================================================
 * ChangeBlockID_Selection  (Ghidra `ChangeBlockID_Selection` @ 0049e2e0)
 * Signature: uint8_t __stdcall ChangeBlockID_Selection(GRIDBLOCK * arg1, int arg2, int arg3)
 * Calls: (none)
 * Called by: `ChangeBlockID`
 */
/* ChangeBlockID_Selection(GRIDBLOCK&, int, int) */

void ChangeBlockID_Selection(GRIDBLOCK *arg1,int arg2,int arg3)

{
  if (*arg1 != (GRIDBLOCK)0x0) {
    *arg1 = *SuperMeatBoyEditor;
  }
  return;
}

/* ======================================================================
 * CancelPasteTileRendering  (Ghidra `CancelPasteTileRendering` @ 0049ec10)
 * Signature: uint8_t __stdcall CancelPasteTileRendering(tagButtonProps * arg1, void * arg2)
 * Calls: `DeSelectTile`, `SelectTile`, `TMouse__AddButtonCallback`
 * Called by: `SMBEditor__SetToTileMode`, `SMBEditor__Update`
 */
/* CancelPasteTileRendering(tagButtonProps const*, void*) */

void CancelPasteTileRendering(tagButtonProps *arg1,void *arg2)

{
  if (*(int *)arg1 != 1) {
    return;
  }
  bRenderCopiedElements = 0;
  TMouse__AddButtonCallback(Mouse,0,SelectTile,0);
  TMouse__AddButtonCallback(Mouse,1,DeSelectTile,0);
  return;
}

/* ======================================================================
 * AlignedReAlloc  (Ghidra `AlignedReAlloc` @ 0049f640)
 * Signature: uint8_t __stdcall AlignedReAlloc(void * arg1, ulong arg2, ulong arg3)
 * Calls: `free`, `malloc`, `memcpy`
 * Called by: (none)
 */
/* TMemory__AlignedReAlloc(void*, unsigned long, unsigned long) [clone .isra.10] */

void * TMemory__AlignedReAlloc(void *arg1,ulong arg2,ulong arg3)

{
  void *pvVar1;
  ulong __n;
  void *__dest;
  
  __dest = (void *)0x0;
  pvVar1 = malloc(arg2 + 0x10 + arg3);
  if (pvVar1 != (void *)0x0) {
    __dest = (void *)((long)pvVar1 + 0x10U + (arg3 - ((long)pvVar1 + 0x10U) % arg3) % arg3)
    ;
    *(ulong *)((long)__dest + -0x10) = arg2;
    *(void **)((long)__dest + -8) = pvVar1;
    if (arg1 != (void *)0x0) {
      __n = *(ulong *)((long)arg1 + -0x10);
      if (arg2 < *(ulong *)((long)arg1 + -0x10)) {
        __n = arg2;
      }
      memcpy(__dest,arg1,__n);
      free(*(void **)((long)arg1 + -8));
    }
  }
  return __dest;
}

/* ======================================================================
 * CopySelected_Selection  (Ghidra `CopySelected_Selection` @ 004a1d70)
 * Signature: uint8_t __stdcall CopySelected_Selection(GRIDBLOCK * arg1, int arg2, int arg3)
 * Calls: `TileLevel__GetGridBlock`, `TileLevel__GetGridPos`, `Vector2__operator_assign`, `free`, `malloc`, `memcpy`
 * Called by: `CopySelected`, `SMBEditor__Update`
 */
/* CopySelected_Selection(GRIDBLOCK&, int, int) */

void CopySelected_Selection(GRIDBLOCK *arg1,int arg2,int arg3)

{
  Vector2 *this;
  short sVar1;
  ushort uVar2;
  uint64_t uVar3;
  uint32_t *puVar4;
  void *pvVar5;
  short *psVar6;
  void *pvVar7;
  ulong uVar8;
  short sVar9;
  uint32_t in_register_00000014;
  uint32_t in_register_00000034;
  ulong uVar10;
  uint64_t *puVar11;
  ushort uVar12;
  bool bVar13;
  byte bVar14;
  Vector2 aVStack_38 [8];
  uint32_t local_30;
  
  bVar14 = 0;
  local_30 = 0;
  puVar4 = (uint32_t *)
           TileLevel__GetGridBlock
                     (*(TileLevel **)(SuperMeatBoy + 0x40),CONCAT44(in_register_00000034,arg2),
                      CONCAT44(in_register_00000014,arg3),
                      *(uint32_t *)(SuperMeatBoyEditor + 0xd0));
  local_30 = *puVar4;
  if ((char)local_30 != '\0') {
    TileLevel__GetGridPos(*(TileLevel **)(SuperMeatBoy + 0x40),arg2,arg3,aVStack_38);
    uVar3 = pCopiedBlocks._56_8_;
    if (pCopiedBlocks._72_4_ == -0x5eef3582) {
      if ((ushort)pCopiedBlocks._42_2_ <= (ushort)pCopiedBlocks._40_2_) {
        pCopiedBlocks._42_2_ = pCopiedBlocks._42_2_ + pCopiedBlocks._52_2_;
        uVar10 = (ulong)pCopiedBlocks[0x2c];
        pvVar5 = (void *)0x0;
        uVar8 = (ulong)(ushort)pCopiedBlocks._42_2_ * 0xc;
        pvVar7 = malloc(uVar10 + 0x10 + uVar8);
        if (pvVar7 != (void *)0x0) {
          pvVar5 = (void *)((long)pvVar7 + 0x10U +
                           (uVar10 - ((long)pvVar7 + 0x10U) % uVar10) % uVar10);
          *(ulong *)((long)pvVar5 + -0x10) = uVar8;
          *(void **)((long)pvVar5 + -8) = pvVar7;
          if (uVar3 != 0) {
            uVar10 = *(ulong *)(uVar3 + -0x10);
            if (uVar8 <= *(ulong *)(uVar3 + -0x10)) {
              uVar10 = uVar8;
            }
            memcpy(pvVar5,(void *)uVar3,uVar10);
            free(*(void **)(uVar3 + -8));
          }
        }
        uVar3 = pCopiedBlocks._64_8_;
        uVar12 = pCopiedBlocks._42_2_;
        pCopiedBlocks._56_8_ = pvVar5;
        if (pCopiedBlocks._64_8_ != 0) {
          uVar8 = (ulong)pCopiedBlocks[0x2c];
          uVar10 = (ulong)(ushort)pCopiedBlocks._42_2_ * 2;
          pvVar7 = malloc(uVar8 + 0x10 + uVar10);
          pvVar5 = (void *)0x0;
          uVar2 = pCopiedBlocks._40_2_;
          if (pvVar7 != (void *)0x0) {
            pvVar5 = (void *)((long)pvVar7 + 0x10U +
                             (uVar8 - ((long)pvVar7 + 0x10U) % uVar8) % uVar8);
            *(void **)((long)pvVar5 + -8) = pvVar7;
            *(ulong *)((long)pvVar5 + -0x10) = uVar10;
            uVar8 = *(ulong *)(uVar3 + -0x10);
            if (uVar10 <= *(ulong *)(uVar3 + -0x10)) {
              uVar8 = uVar10;
            }
            memcpy(pvVar5,(void *)uVar3,uVar8);
            free(*(void **)(uVar3 + -8));
            uVar2 = pCopiedBlocks._40_2_;
            uVar12 = pCopiedBlocks._42_2_;
          }
          for (; pCopiedBlocks._64_8_ = pvVar5, uVar2 < uVar12; uVar2 = uVar2 + 1) {
            *(uint16_t *)(pCopiedBlocks._64_8_ + (ulong)uVar2 * 2) = 0xffff;
            pvVar5 = (void *)pCopiedBlocks._64_8_;
          }
        }
      }
      if ((pCopiedBlocks._48_4_ == 1) && (pCopiedBlocks._42_2_ != 0)) {
        sVar9 = 0;
        sVar1 = *(short *)pCopiedBlocks._64_8_;
        psVar6 = (short *)pCopiedBlocks._64_8_;
        while (sVar1 != -1) {
          psVar6 = psVar6 + 1;
          sVar9 = sVar9 + 1;
          if (sVar9 == pCopiedBlocks._42_2_) goto LAB_004a1ed4;
          sVar1 = *psVar6;
        }
        *psVar6 = pCopiedBlocks._40_2_;
      }
    }
    else {
      uVar10 = (ulong)pCopiedBlocks[0x2c];
      pCopiedBlocks._48_4_ = 0;
      pvVar5 = malloc(uVar10 + 0x4c);
      puVar11 = (uint64_t *)0x0;
      if (pvVar5 != (void *)0x0) {
        puVar11 = (uint64_t *)
                  ((long)pvVar5 + 0x10U + (uVar10 - ((long)pvVar5 + 0x10U) % uVar10) % uVar10);
        puVar11[-2] = 0x3c;
        puVar11[-1] = pvVar5;
      }
      bVar13 = ((ulong)puVar11 & 1) != 0;
      uVar10 = 0x3c;
      pCopiedBlocks._56_8_ = puVar11;
      if (bVar13) {
        *(uint8_t *)puVar11 = 0;
        uVar10 = 0x3b;
        puVar11 = (uint64_t *)((long)puVar11 + 1);
      }
      if (((ulong)puVar11 & 2) != 0) {
        *(uint16_t *)puVar11 = 0;
        uVar10 = (ulong)((int)uVar10 - 2);
        puVar11 = (uint64_t *)((long)puVar11 + 2);
      }
      if (((ulong)puVar11 & 4) != 0) {
        *(uint32_t *)puVar11 = 0;
        uVar10 = (ulong)((int)uVar10 - 4);
        puVar11 = (uint64_t *)((long)puVar11 + 4);
      }
      for (uVar8 = uVar10 >> 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar11 = 0;
        puVar11 = puVar11 + (ulong)bVar14 * -2 + 1;
      }
      if ((uVar10 & 4) != 0) {
        *(uint32_t *)puVar11 = 0;
        puVar11 = (uint64_t *)((long)puVar11 + 4);
      }
      if ((uVar10 & 2) != 0) {
        *(uint16_t *)puVar11 = 0;
        puVar11 = (uint64_t *)((long)puVar11 + 2);
      }
      if (bVar13) {
        *(uint8_t *)puVar11 = 0;
      }
      pCopiedBlocks._40_2_ = 0;
      pCopiedBlocks._42_2_ = 5;
      pCopiedBlocks._72_4_ = 0xa110ca7e;
      pCopiedBlocks._52_2_ = 5;
    }
LAB_004a1ed4:
    this = (Vector2 *)(pCopiedBlocks._56_8_ + (ulong)(ushort)pCopiedBlocks._40_2_ * 0xc);
    Vector2__operator_assign(this,aVStack_38);
    *(uint32_t *)(this + 8) = local_30;
    pCopiedBlocks._40_2_ = pCopiedBlocks._40_2_ + 1;
  }
  return;
}

/* ======================================================================
 * AddEditorLayerTween  (Ghidra `AddEditorLayerTween` @ 004a2be0)
 * Signature: uint8_t __stdcall AddEditorLayerTween(LevelRenderLayer * arg1, int arg2)
 * Calls: `free`, `malloc`, `memcpy`, `operator_new`
 * Called by: `EditorButton_SetLayerToActive_Click`, `EditorButton_SetLayerToBackGeneral1_Click`, `EditorButton_SetLayerToBackGeneral2_Click`, `EditorButton_SetLayerToBackGeneral3_Click`, `EditorButton_SetLayerToBack_Click`, `EditorButton_SetLayerToForeGeneral1_Click`, `EditorButton_SetLayerToForeGeneral2_Click`, `EditorButton_SetLayerToFore_Click`, `SMBEditor__SetToParalaxMode`, `SMBEditor__SetToTileMode` (+8 more)
 */
/* AddEditorLayerTween(LevelRenderLayer*, int) */

void AddEditorLayerTween(LevelRenderLayer *arg1,int arg2)

{
  float fVar1;
  short sVar3;
  uint32_t uVar4;
  LevelRenderLayer *pLVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  int iVar8;
  uint uVar9;
  void *pvVar10;
  uint64_t *puVar11;
  short *psVar12;
  void *pvVar13;
  ulong uVar14;
  short sVar15;
  ulong uVar16;
  uint uVar17;
  uint64_t *puVar18;
  ushort uVar19;
  bool bVar20;
  byte bVar21;
  float fVar2;
  
  uVar6 = pLayerColorTweens._56_8_;
  bVar21 = 0;
  uVar17 = (uint)(ushort)pLayerColorTweens._40_2_;
  if (uVar17 != 0) {
    iVar8 = 0;
    pLVar5 = *(LevelRenderLayer **)(pLayerColorTweens._56_8_ + 0x10);
    while( true ) {
      if (arg1 == pLVar5) {
        return;
      }
      iVar8 = iVar8 + 1;
      if ((int)uVar17 <= iVar8) break;
      pLVar5 = *(LevelRenderLayer **)(pLayerColorTweens._56_8_ + 0x10 + (ulong)(ushort)iVar8 * 0x18)
      ;
    }
  }
  if (pLayerColorTweens._72_4_ != -0x5eef3582) {
    uVar16 = (ulong)pLayerColorTweens[0x2c];
    pLayerColorTweens._48_4_ = 0;
    pvVar10 = malloc(uVar16 + 0x88);
    puVar18 = (uint64_t *)0x0;
    if (pvVar10 != (void *)0x0) {
      puVar18 = (uint64_t *)
                ((long)pvVar10 + 0x10U + (uVar16 - ((long)pvVar10 + 0x10U) % uVar16) % uVar16);
      puVar18[-2] = 0x78;
      puVar18[-1] = pvVar10;
    }
    bVar20 = ((ulong)puVar18 & 1) != 0;
    uVar16 = 0x78;
    pLayerColorTweens._56_8_ = puVar18;
    if (bVar20) {
      *(uint8_t *)puVar18 = 0;
      uVar16 = 0x77;
      puVar18 = (uint64_t *)((long)puVar18 + 1);
    }
    if (((ulong)puVar18 & 2) != 0) {
      *(uint16_t *)puVar18 = 0;
      uVar16 = (ulong)((int)uVar16 - 2);
      puVar18 = (uint64_t *)((long)puVar18 + 2);
    }
    if (((ulong)puVar18 & 4) != 0) {
      *(uint32_t *)puVar18 = 0;
      uVar16 = (ulong)((int)uVar16 - 4);
      puVar18 = (uint64_t *)((long)puVar18 + 4);
    }
    for (uVar14 = uVar16 >> 3; uVar14 != 0; uVar14 = uVar14 - 1) {
      *puVar18 = 0;
      puVar18 = puVar18 + (ulong)bVar21 * -2 + 1;
    }
    if ((uVar16 & 4) != 0) {
      *(uint32_t *)puVar18 = 0;
      puVar18 = (uint64_t *)((long)puVar18 + 4);
    }
    if ((uVar16 & 2) != 0) {
      *(uint16_t *)puVar18 = 0;
      puVar18 = (uint64_t *)((long)puVar18 + 2);
    }
    if (bVar20) {
      *(uint8_t *)puVar18 = 0;
    }
    pLayerColorTweens._42_2_ = 5;
    pLayerColorTweens._72_4_ = 0xa110ca7e;
    uVar17 = 0;
    pLayerColorTweens._52_2_ = 5;
    goto LAB_004a2d06;
  }
  if ((ushort)pLayerColorTweens._42_2_ <= (ushort)pLayerColorTweens._40_2_) {
    pLayerColorTweens._42_2_ = pLayerColorTweens._42_2_ + pLayerColorTweens._52_2_;
    uVar16 = (ulong)pLayerColorTweens[0x2c];
    pvVar10 = (void *)0x0;
    uVar14 = (ulong)(ushort)pLayerColorTweens._42_2_ * 0x18;
    pvVar13 = malloc(uVar16 + 0x10 + uVar14);
    if (pvVar13 != (void *)0x0) {
      pvVar10 = (void *)((long)pvVar13 + 0x10U +
                        (uVar16 - ((long)pvVar13 + 0x10U) % uVar16) % uVar16);
      *(ulong *)((long)pvVar10 + -0x10) = uVar14;
      *(void **)((long)pvVar10 + -8) = pvVar13;
      if (uVar6 != 0) {
        uVar16 = *(ulong *)(uVar6 + -0x10);
        if (uVar14 <= *(ulong *)(uVar6 + -0x10)) {
          uVar16 = uVar14;
        }
        memcpy(pvVar10,(void *)uVar6,uVar16);
        free(*(void **)(uVar6 + -8));
      }
    }
    uVar6 = pLayerColorTweens._64_8_;
    uVar19 = pLayerColorTweens._42_2_;
    pLayerColorTweens._56_8_ = pvVar10;
    if (pLayerColorTweens._64_8_ != 0) {
      uVar14 = (ulong)pLayerColorTweens[0x2c];
      pvVar10 = (void *)0x0;
      uVar16 = (ulong)(ushort)pLayerColorTweens._42_2_ * 2;
      pvVar13 = malloc(uVar14 + 0x10 + uVar16);
      if (pvVar13 != (void *)0x0) {
        pvVar10 = (void *)((long)pvVar13 + 0x10U +
                          (uVar14 - ((long)pvVar13 + 0x10U) % uVar14) % uVar14);
        *(void **)((long)pvVar10 + -8) = pvVar13;
        *(ulong *)((long)pvVar10 + -0x10) = uVar16;
        uVar14 = *(ulong *)(uVar6 + -0x10);
        if (uVar16 <= *(ulong *)(uVar6 + -0x10)) {
          uVar14 = uVar16;
        }
        memcpy(pvVar10,(void *)uVar6,uVar14);
        free(*(void **)(uVar6 + -8));
        uVar19 = pLayerColorTweens._42_2_;
      }
      uVar17 = (uint)(ushort)pLayerColorTweens._40_2_;
      pLayerColorTweens._64_8_ = pvVar10;
      if (uVar19 <= (ushort)pLayerColorTweens._40_2_) goto LAB_004a2ea2;
      do {
        uVar9 = uVar17 & 0xffff;
        uVar17 = uVar17 + 1;
        *(uint16_t *)(pLayerColorTweens._64_8_ + (ulong)uVar9 * 2) = 0xffff;
      } while ((ushort)uVar17 < uVar19);
    }
    uVar17 = (uint)(ushort)pLayerColorTweens._40_2_;
  }
LAB_004a2ea2:
  if ((pLayerColorTweens._48_4_ == 1) && (pLayerColorTweens._42_2_ != 0)) {
    sVar15 = 0;
    sVar3 = *(short *)pLayerColorTweens._64_8_;
    psVar12 = (short *)pLayerColorTweens._64_8_;
    while (sVar3 != -1) {
      psVar12 = psVar12 + 1;
      sVar15 = sVar15 + 1;
      if (sVar15 == pLayerColorTweens._42_2_) goto LAB_004a2d06;
      sVar3 = *psVar12;
    }
    *psVar12 = (short)uVar17;
    uVar17 = (uint)(ushort)pLayerColorTweens._40_2_;
  }
LAB_004a2d06:
  pLayerColorTweens._40_2_ = (uint16_t)(uVar17 + 1);
  puVar18 = (uint64_t *)(pLayerColorTweens._56_8_ + ((ulong)(uVar17 + 1 & 0xffff) * 3 + -3) * 8);
  *puVar18 = 0;
  puVar18[1] = 0;
  puVar18[2] = 0;
  puVar18 = (uint64_t *)
            (pLayerColorTweens._56_8_ + ((ulong)(ushort)pLayerColorTweens._40_2_ * 3 + -3) * 8);
  puVar18[2] = arg1;
  puVar11 = operator_new(0x50);
  *puVar11 = &PTR_Calculate_005c4490;
  *(uint32_t *)((long)puVar11 + 0x44) = 0;
  *(uint32_t *)(puVar11 + 9) = 0;
  puVar11[1] = arg1 + 0x400;
  uVar7 = cWhite;
  *(uint32_t *)((long)puVar11 + 0x4c) = 1;
  *(uint32_t *)(puVar11 + 4) = 0;
  puVar11[2] = uVar7;
  uVar6 = DAT_0081a968 /* R:2.2420775429197073e-44f */;
  *(uint32_t *)((long)puVar11 + 0x24) = 0;
  *(uint32_t *)(puVar11 + 5) = 0;
  *(uint32_t *)((long)puVar11 + 0x2c) = 0;
  puVar11[3] = uVar6;
  puVar11[4] = *(uint64_t *)(arg1 + 0x400);
  uVar6 = *(uint64_t *)(arg1 + 0x408);
  *(uint32_t *)((long)puVar11 + 0x3c) = 0;
  *(uint32_t *)(puVar11 + 6) = 0x3f800000;
  *(uint32_t *)(puVar11 + 7) = 0x3e800000;
  puVar11[5] = uVar6;
  fVar1 = *(float *)((long)puVar11 + 0x34);
  fVar2 = *(float *)((long)puVar11 + 0x34);
  *(uint32_t *)((long)puVar11 + 0x34) = 0;
  *(uint *)(puVar11 + 8) = (uint)(fVar2 <= 0.0 && fVar1 != 0.0);
  *(uint64_t *)(arg1 + 0x400) = uVar7;
  *(uint64_t *)(arg1 + 0x408) = puVar11[3];
  *puVar18 = puVar11;
  puVar11 = operator_new(0x38);
  *(uint32_t *)((long)puVar11 + 0x2c) = 0;
  *(uint32_t *)(puVar11 + 6) = 0;
  *(uint32_t *)((long)puVar11 + 0x34) = 1;
  *puVar11 = &PTR_Calculate_005c4510;
  puVar11[1] = arg1 + 0x410;
  *(uint32_t *)(puVar11 + 2) = 0x3f800000;
  uVar4 = *(uint32_t *)(arg1 + 0x410);
  *(uint32_t *)(puVar11 + 3) = 0x3f800000;
  *(uint32_t *)(puVar11 + 4) = 0x3e800000;
  *(uint32_t *)((long)puVar11 + 0x14) = uVar4;
  fVar1 = *(float *)((long)puVar11 + 0x1c);
  fVar2 = *(float *)((long)puVar11 + 0x1c);
  *(uint32_t *)((long)puVar11 + 0x24) = 0;
  *(uint32_t *)((long)puVar11 + 0x1c) = 0;
  *(uint *)(puVar11 + 5) = (uint)(fVar2 <= 0.0 && fVar1 != 0.0);
  *(uint32_t *)(arg1 + 0x410) = 0x3f800000;
  puVar18[1] = puVar11;
  return;
}

/* ======================================================================
 * AddEditorButton  (Ghidra `AddEditorButton` @ 004a3fd0)
 * Signature: uint8_t __stdcall AddEditorButton(FlashMovieClip * arg1, FlashAnimationLibrary * arg2, char * arg3, int arg4, tagEditorButtonType arg5)
 * Calls: `FlashAnimationLibrary__GetMovieClip__005731d0`, `FlashMovieClip__FindInstance`, `free`, `malloc`, `memcpy`, `operator_new`
 * Called by: `EditorFormChapterUpload__EditorFormChapterUpload__004b8ec0`, `EditorForm__EditorForm__004b8350`, `SMBEditor__SMBEditor__004ad010`, `SMBLevelPortalInterface__Initialize`, `SetupPortalInterfaceButtons`
 */
/* AddEditorButton(FlashMovieClip*, FlashAnimationLibrary*, char const*, int, tagEditorButtonType)
    */

uint64_t *
AddEditorButton(FlashMovieClip *arg1,FlashAnimationLibrary *arg2,char *arg3,int arg4,
               int arg5)

{
  short sVar1;
  uint32_t uVar2;
  uint16_t uVar3;
  long lVar4;
  long lVar5;
  void *pvVar6;
  short *psVar7;
  uint64_t *puVar8;
  void *pvVar9;
  ushort uVar10;
  short sVar11;
  ulong uVar12;
  ulong uVar13;
  void *__dest;
  uint64_t *puVar14;
  
  puVar8 = (uint64_t *)0x0;
  lVar4 = FlashAnimationLibrary__GetMovieClip__005731d0(arg2,arg3);
  if ((lVar4 != 0) &&
     (lVar5 = FlashMovieClip__FindInstance(arg1,*(int *)(lVar4 + 0x20),0,(int *)0x0,0),
     lVar5 != 0)) {
    if (arg5 == 0) {
      puVar8 = operator_new(0x50);
      *puVar8 = &PTR__EditorButton_005c4390;
      puVar8[1] = lVar4;
      puVar8[2] = lVar5;
      puVar8[3] = 0;
      puVar8[4] = 0;
      puVar8[5] = 0;
      puVar8[6] = 0;
      puVar8[7] = 0;
      puVar8[8] = 0;
      *(uint16_t *)(puVar8 + 9) = 0;
      *(uint8_t *)((long)puVar8 + 0x4a) = 0;
      *(uint8_t *)((long)puVar8 + 0x4b) = 0;
      *(uint32_t *)((long)puVar8 + 0x4c) = *(uint32_t *)(lVar5 + 0x20);
      pvVar6 = (void *)pEditorButtons._56_8_;
    }
    else {
      pvVar6 = (void *)pEditorButtons._56_8_;
      if (arg5 == 1) {
        puVar8 = operator_new(0x58);
        *puVar8 = &PTR__EditorButton_005c4390;
        puVar8[1] = lVar4;
        puVar8[2] = lVar5;
        puVar8[3] = 0;
        puVar8[4] = 0;
        puVar8[5] = 0;
        puVar8[6] = 0;
        puVar8[7] = 0;
        puVar8[8] = 0;
        *(uint16_t *)(puVar8 + 9) = 0;
        *(uint8_t *)((long)puVar8 + 0x4a) = 0;
        *(uint8_t *)((long)puVar8 + 0x4b) = 0;
        uVar2 = *(uint32_t *)(lVar5 + 0x20);
        *puVar8 = &PTR__EditorTextField_005c43f0;
        *(uint32_t *)((long)puVar8 + 0x4c) = uVar2;
        pvVar6 = (void *)pEditorButtons._56_8_;
      }
    }
    pEditorButtons._56_8_ = pvVar6;
    if (arg4 == 1) {
      if (pEditorButtons._72_4_ == -0x5eef3582) {
        if ((ushort)pEditorButtons._42_2_ <= (ushort)pEditorButtons._40_2_) {
          pEditorButtons._42_2_ = pEditorButtons._42_2_ + pEditorButtons._52_2_;
          uVar12 = (ulong)pEditorButtons[0x2c];
          __dest = (void *)0x0;
          uVar13 = (ulong)(ushort)pEditorButtons._42_2_ * 8;
          pvVar9 = malloc(uVar12 + 0x10 + uVar13);
          if (pvVar9 != (void *)0x0) {
            __dest = (void *)((long)pvVar9 + 0x10U +
                             (uVar12 - ((long)pvVar9 + 0x10U) % uVar12) % uVar12);
            *(ulong *)((long)__dest + -0x10) = uVar13;
            *(void **)((long)__dest + -8) = pvVar9;
            if (pvVar6 != (void *)0x0) {
              uVar12 = *(ulong *)((long)pvVar6 + -0x10);
              if (uVar13 < uVar12 || uVar13 - uVar12 == 0) {
                uVar12 = uVar13;
              }
              memcpy(__dest,pvVar6,uVar12);
              free(*(void **)((long)pvVar6 + -8));
            }
          }
          pEditorButtons._56_8_ = __dest;
          if (pEditorButtons._64_8_ != 0) {
            pEditorButtons._64_8_ =
                 TMemory__AlignedReAlloc
                           ((void *)pEditorButtons._64_8_,(ulong)(ushort)pEditorButtons._42_2_ * 2,
                            (ulong)pEditorButtons[0x2c]);
            uVar3 = pEditorButtons._42_2_;
            for (uVar10 = pEditorButtons._40_2_; uVar10 < (ushort)uVar3; uVar10 = uVar10 + 1) {
              *(uint16_t *)(pEditorButtons._64_8_ + (ulong)uVar10 * 2) = 0xffff;
            }
          }
        }
        if ((pEditorButtons._48_4_ == 1) && (pEditorButtons._42_2_ != 0)) {
          sVar11 = 0;
          sVar1 = *(short *)pEditorButtons._64_8_;
          psVar7 = (short *)pEditorButtons._64_8_;
          while (sVar1 != -1) {
            psVar7 = psVar7 + 1;
            sVar11 = sVar11 + 1;
            if (sVar11 == pEditorButtons._42_2_) goto LAB_004a417a;
            sVar1 = *psVar7;
          }
          *psVar7 = pEditorButtons._40_2_;
        }
      }
      else {
        uVar13 = (ulong)pEditorButtons[0x2c];
        pEditorButtons._48_4_ = 0;
        pvVar6 = malloc(uVar13 + 0x38);
        puVar14 = (uint64_t *)0x0;
        if (pvVar6 != (void *)0x0) {
          puVar14 = (uint64_t *)
                    ((long)pvVar6 + 0x10U + (uVar13 - ((long)pvVar6 + 0x10U) % uVar13) % uVar13);
          puVar14[-2] = 0x28;
          puVar14[-1] = pvVar6;
        }
        pEditorButtons._56_8_ = puVar14;
        *puVar14 = 0;
        puVar14[1] = 0;
        puVar14[2] = 0;
        puVar14[3] = 0;
        puVar14[4] = 0;
        pEditorButtons._40_2_ = 0;
        pEditorButtons._42_2_ = 5;
        pEditorButtons._72_4_ = 0xa110ca7e;
        pEditorButtons._52_2_ = 5;
      }
LAB_004a417a:
      *(uint64_t **)(pEditorButtons._56_8_ + (ulong)(ushort)pEditorButtons._40_2_ * 8) = puVar8;
      pEditorButtons._40_2_ = pEditorButtons._40_2_ + 1;
    }
  }
  return puVar8;
}

/* ======================================================================
 * CancelPastePiecesRendering  (Ghidra `CancelPastePiecesRendering` @ 004a7780)
 * Signature: uint8_t __stdcall CancelPastePiecesRendering(tagButtonProps * arg1, void * arg2)
 * Calls: `EditorButton__IsMouseOverButton`, `IsFlashFormActive`, `PlaceSetPiece`, `ResetSetPieceSelection`, `SMBEditorForms__IsFormActive`, `TMouse__AddButtonCallback`
 * Called by: `SMBEditor__EditSetPieces`, `SMBEditor__SetToAnimationMode`, `SMBEditor__SetToObstacleMode`, `SMBEditor__SetToParalaxMode`, `SMBEditor__SetToSetPieceMode`
 */
/* CancelPastePiecesRendering(tagButtonProps const*, void*) */

void CancelPastePiecesRendering(tagButtonProps *arg1,void *arg2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = SMBEditorForms__IsFormActive();
  uVar2 = IsFlashFormActive();
  if (pEditorButtons._40_2_ != 0) {
    uVar4 = 0;
    do {
      iVar3 = EditorButton__IsMouseOverButton
                        (*(EditorButton **)(pEditorButtons._56_8_ + (ulong)(uVar4 & 0xffff) * 8));
      if (iVar3 == 1) {
        if ((uVar1 | uVar2 | 1) != 0) {
          return;
        }
        goto LAB_004a7810;
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < (int)(uint)(ushort)pEditorButtons._40_2_);
  }
  FlashAnimationLibrary__SetTextFieldText(pEditorLib,"hotkey",&DAT_005ca3d2 /* R:u32=1931804704 */);
  if (uVar1 == 0 && uVar2 == 0) {
LAB_004a7810:
    if ((bSetPieceWayPointMode != 1) && (*(int *)arg1 == 1)) {
      bRenderCopiedElements = 0;
      TMouse__AddButtonCallback(Mouse,0,PlaceSetPiece,0);
      TMouse__AddButtonCallback(Mouse,1,ResetSetPieceSelection,0);
      return;
    }
  }
  return;
}

/* ======================================================================
 * ChangeBlockID  (Ghidra `ChangeBlockID` @ 004a9a90)
 * Signature: uint8_t __stdcall ChangeBlockID(tagButtonProps * arg1, void * arg2)
 * Calls: `ChangeBlockID_Selection`, `EditorButton__IsMouseOverButton`, `IsFlashFormActive`, `RunCommandOnSelection`, `SMBEditorForms__IsFormActive`
 * Called by: `SMBEditor__SetToTileMode`
 */
/* ChangeBlockID(tagButtonProps const*, void*) */

void ChangeBlockID(tagButtonProps *arg1,void *arg2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = SMBEditorForms__IsFormActive();
  uVar2 = IsFlashFormActive();
  if (pEditorButtons._40_2_ != 0) {
    uVar4 = 0;
    do {
      iVar3 = EditorButton__IsMouseOverButton
                        (*(EditorButton **)(pEditorButtons._56_8_ + (ulong)(uVar4 & 0xffff) * 8));
      if (iVar3 == 1) {
        if ((uVar1 | uVar2 | 1) != 0) {
          return;
        }
        goto LAB_004a9b20;
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < (int)(uint)(ushort)pEditorButtons._40_2_);
  }
  FlashAnimationLibrary__SetTextFieldText(pEditorLib,"hotkey",&DAT_005ca3d2 /* R:u32=1931804704 */);
  if (uVar1 == 0 && uVar2 == 0) {
LAB_004a9b20:
    if (*(int *)arg1 == 1) {
      RunCommandOnSelection(ChangeBlockID_Selection);
      return;
    }
  }
  return;
}

/* ======================================================================
 * CopySelected  (Ghidra `CopySelected` @ 004a9bf0)
 * Signature: uint8_t __stdcall CopySelected(tagButtonProps * arg1, void * arg2)
 * Calls: `CopySelected_Selection`, `EditorButton__IsMouseOverButton`, `IsFlashFormActive`, `RunCommandOnSelection`, `SMBEditorForms__IsFormActive`
 * Called by: (none)
 */
/* CopySelected(tagButtonProps const*, void*) */

void CopySelected(tagButtonProps *arg1,void *arg2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  
  uVar2 = SMBEditorForms__IsFormActive();
  uVar3 = IsFlashFormActive();
  if (pEditorButtons._40_2_ != 0) {
    uVar6 = 0;
    do {
      iVar4 = EditorButton__IsMouseOverButton
                        (*(EditorButton **)(pEditorButtons._56_8_ + (ulong)(uVar6 & 0xffff) * 8));
      if (iVar4 == 1) {
        if ((uVar2 | uVar3 | 1) != 0) {
          return;
        }
        goto LAB_004a9c81;
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < (int)(uint)(ushort)pEditorButtons._40_2_);
  }
  FlashAnimationLibrary__SetTextFieldText(pEditorLib,"hotkey",&DAT_005ca3d2 /* R:u32=1931804704 */);
  if (uVar2 == 0 && uVar3 == 0) {
LAB_004a9c81:
    if ((arg1 == (tagButtonProps *)0x0) || (*(int *)arg1 == 1)) {
      iSelectedScale = 0;
      iSelectedRotation = 0;
      pCopiedBlocks._40_2_ = 0;
      if ((pCopiedBlocks._48_4_ == 1) && (pCopiedBlocks._42_2_ != 0)) {
        uVar1 = pCopiedBlocks._42_2_ - 1;
        lVar5 = 0;
        do {
          *(uint16_t *)(pCopiedBlocks._64_8_ + lVar5) = 0xffff;
          lVar5 = lVar5 + 2;
        } while (lVar5 != (ulong)uVar1 * 2 + 2);
      }
      RunCommandOnSelection(CopySelected_Selection);
      return;
    }
  }
  return;
}

/* ======================================================================
 * AdjustSetPieceLayering  (Ghidra `AdjustSetPieceLayering` @ 004aa6e0)
 * Signature: uint8_t AdjustSetPieceLayering(void)
 * Calls: `CriticalSection__CriticalSection`, `RenderLayer__GetObjectPosition`, `RenderLayer__InsertObjectAfter`, `RenderLayer__InsertObjectBefore`, `RenderLayer__RemoveObject`, `ResizeableArray_SortedSetPiece__ResizeableArray`, `TKeyboard__GetExclusiveState`, `free`, `malloc`, `memcpy`
 * Called by: `SMBEditor__EditSetPieces`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AdjustSetPieceLayering() */

void AdjustSetPieceLayering(void)

{
  float fVar1;
  short sVar2;
  RenderLayer *this;
  uint64_t uVar3;
  uint64_t uVar4;
  bool bVar5;
  bool bVar6;
  short sVar7;
  ushort uVar8;
  ushort uVar9;
  int iVar10;
  void *pvVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  uint64_t *puVar15;
  short *psVar16;
  int *piVar17;
  ulong uVar18;
  uint uVar19;
  int *piVar20;
  RenderLayerObject *pRVar21;
  void *pvVar22;
  uint uVar23;
  RenderLayerObject *pRVar24;
  long lVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  byte bVar29;
  int local_64;
  long local_60;
  long local_58;
  int local_50;
  
  bVar29 = 0;
  iVar10 = TKeyboard__GetExclusiveState(Keyboard,0x6b);
  bVar26 = true;
  if (iVar10 != 2) {
    iVar10 = TKeyboard__GetExclusiveState(Keyboard,0x40);
    bVar26 = iVar10 == 2;
  }
  iVar10 = TKeyboard__GetExclusiveState(Keyboard,0x6f);
  bVar5 = false;
  bVar27 = true;
  if (iVar10 != 2) {
    iVar10 = TKeyboard__GetExclusiveState(Keyboard,0x43);
    bVar27 = iVar10 == 2;
    bVar5 = !bVar27;
  }
  if ((AdjustSetPieceLayering()::pObjectOrder == '\0') &&
     (iVar10 = __cxa_guard_acquire(&AdjustSetPieceLayering()::pObjectOrder), iVar10 != 0)) {
                    /* try { // try from 004aad2f to 004aad33 has its CatchHandler @ 004ab250 */
    CriticalSection__CriticalSection((CriticalSection *)AdjustSetPieceLayering()::pObjectOrder);
    AdjustSetPieceLayering()::pObjectOrder._42_2_ = 0;
    AdjustSetPieceLayering()::pObjectOrder._40_2_ = 0;
    AdjustSetPieceLayering()::pObjectOrder._52_2_ = 1;
    AdjustSetPieceLayering()::pObjectOrder._56_8_ = 0;
    AdjustSetPieceLayering()::pObjectOrder._64_8_ = 0;
    AdjustSetPieceLayering()::pObjectOrder._72_4_ = 0;
    AdjustSetPieceLayering()::pObjectOrder[0x2c] = 4;
    AdjustSetPieceLayering()::pObjectOrder._48_4_ = 0;
    __cxa_guard_release(&AdjustSetPieceLayering()::pObjectOrder);
    __cxa_atexit(ResizeableArray_SortedSetPiece__ResizeableArray,
                 AdjustSetPieceLayering()::pObjectOrder,&__dso_handle);
  }
  lVar12 = SuperMeatBoyEditor;
  pRVar21 = (RenderLayerObject *)**(long **)(SuperMeatBoyEditor + 0xa8);
  fVar1 = *(float *)(pRVar21 + 0x2c);
  this = *(RenderLayer **)(pRVar21 + 0x18);
  if (*(short *)(SuperMeatBoyEditor + 0x98) != 0) {
    lVar25 = 0;
    uVar18 = 0;
    local_50 = 99999999;
    local_64 = 0;
    local_58 = 0;
    local_60 = 0;
    do {
      iVar10 = RenderLayer__GetObjectPosition(this,pRVar21);
      uVar4 = AdjustSetPieceLayering()::pObjectOrder._56_8_;
      if (iVar10 != -1) {
        uVar3 = *(uint64_t *)(*(long *)(lVar12 + 0xa8) + lVar25);
        if (AdjustSetPieceLayering()::pObjectOrder._72_4_ == -0x5eef3582) {
          uVar19 = (uint)(ushort)AdjustSetPieceLayering()::pObjectOrder._40_2_;
          if ((ushort)AdjustSetPieceLayering()::pObjectOrder._42_2_ <=
              (ushort)AdjustSetPieceLayering()::pObjectOrder._40_2_) {
            AdjustSetPieceLayering()::pObjectOrder._42_2_ =
                 AdjustSetPieceLayering()::pObjectOrder._42_2_ +
                 AdjustSetPieceLayering()::pObjectOrder._52_2_;
            uVar13 = (ulong)AdjustSetPieceLayering()::pObjectOrder[0x2c];
            uVar14 = (ulong)(ushort)AdjustSetPieceLayering()::pObjectOrder._42_2_ * 0x10;
            pvVar11 = malloc(uVar13 + 0x10 + uVar14);
            pvVar22 = (void *)0x0;
            if (pvVar11 != (void *)0x0) {
              pvVar22 = (void *)((long)pvVar11 + 0x10U +
                                (uVar13 - ((long)pvVar11 + 0x10U) % uVar13) % uVar13);
              *(ulong *)((long)pvVar22 + -0x10) = uVar14;
              *(void **)((long)pvVar22 + -8) = pvVar11;
              if (uVar4 != 0) {
                uVar13 = *(ulong *)(uVar4 + -0x10);
                if (uVar14 <= *(ulong *)(uVar4 + -0x10)) {
                  uVar13 = uVar14;
                }
                memcpy(pvVar22,(void *)uVar4,uVar13);
                free(*(void **)(uVar4 + -8));
              }
            }
            uVar4 = AdjustSetPieceLayering()::pObjectOrder._64_8_;
            uVar8 = AdjustSetPieceLayering()::pObjectOrder._42_2_;
            AdjustSetPieceLayering()::pObjectOrder._56_8_ = pvVar22;
            if (AdjustSetPieceLayering()::pObjectOrder._64_8_ != 0) {
              uVar13 = (ulong)AdjustSetPieceLayering()::pObjectOrder[0x2c];
              uVar14 = (ulong)(ushort)AdjustSetPieceLayering()::pObjectOrder._42_2_ * 2;
              pvVar11 = malloc(uVar13 + 0x10 + uVar14);
              pvVar22 = (void *)0x0;
              if (pvVar11 != (void *)0x0) {
                pvVar22 = (void *)((long)pvVar11 + 0x10U +
                                  (uVar13 - ((long)pvVar11 + 0x10U) % uVar13) % uVar13);
                *(void **)((long)pvVar22 + -8) = pvVar11;
                *(ulong *)((long)pvVar22 + -0x10) = uVar14;
                uVar13 = *(ulong *)(uVar4 + -0x10);
                if (uVar14 <= *(ulong *)(uVar4 + -0x10)) {
                  uVar13 = uVar14;
                }
                memcpy(pvVar22,(void *)uVar4,uVar13);
                free(*(void **)(uVar4 + -8));
                uVar8 = AdjustSetPieceLayering()::pObjectOrder._42_2_;
              }
              uVar19 = (uint)(ushort)AdjustSetPieceLayering()::pObjectOrder._40_2_;
              AdjustSetPieceLayering()::pObjectOrder._64_8_ = pvVar22;
              if (uVar8 <= (ushort)AdjustSetPieceLayering()::pObjectOrder._40_2_) goto LAB_004aa979;
              do {
                uVar23 = uVar19 & 0xffff;
                uVar19 = uVar19 + 1;
                *(uint16_t *)(AdjustSetPieceLayering()::pObjectOrder._64_8_ + (ulong)uVar23 * 2) =
                     0xffff;
              } while ((ushort)uVar19 < uVar8);
            }
            uVar19 = (uint)(ushort)AdjustSetPieceLayering()::pObjectOrder._40_2_;
          }
LAB_004aa979:
          if ((AdjustSetPieceLayering()::pObjectOrder._48_4_ == 1) &&
             (AdjustSetPieceLayering()::pObjectOrder._42_2_ != 0)) {
            sVar7 = 1;
            sVar2 = *(short *)AdjustSetPieceLayering()::pObjectOrder._64_8_;
            psVar16 = (short *)AdjustSetPieceLayering()::pObjectOrder._64_8_;
            while (sVar2 != -1) {
              psVar16 = psVar16 + 1;
              if (sVar7 == AdjustSetPieceLayering()::pObjectOrder._42_2_) goto LAB_004aa8a8;
              sVar7 = sVar7 + 1;
              sVar2 = *psVar16;
            }
            *psVar16 = (short)uVar19;
            uVar19 = (uint)(ushort)AdjustSetPieceLayering()::pObjectOrder._40_2_;
          }
        }
        else {
          uVar14 = (ulong)AdjustSetPieceLayering()::pObjectOrder[0x2c];
          AdjustSetPieceLayering()::pObjectOrder._48_4_ = 0;
          pvVar11 = malloc(uVar14 + 0x60);
          puVar15 = (uint64_t *)0x0;
          if (pvVar11 != (void *)0x0) {
            puVar15 = (uint64_t *)
                      ((uVar14 - ((long)pvVar11 + 0x10U) % uVar14) % uVar14 + (long)pvVar11 + 0x10U)
            ;
            puVar15[-2] = 0x50;
            puVar15[-1] = pvVar11;
          }
          bVar28 = ((ulong)puVar15 & 1) != 0;
          uVar14 = 0x50;
          AdjustSetPieceLayering()::pObjectOrder._56_8_ = puVar15;
          if (bVar28) {
            *(uint8_t *)puVar15 = 0;
            puVar15 = (uint64_t *)((long)puVar15 + 1);
            uVar14 = 0x4f;
          }
          if (((ulong)puVar15 & 2) != 0) {
            *(uint16_t *)puVar15 = 0;
            uVar14 = (ulong)((int)uVar14 - 2);
            puVar15 = (uint64_t *)((long)puVar15 + 2);
          }
          if (((ulong)puVar15 & 4) != 0) {
            *(uint32_t *)puVar15 = 0;
            uVar14 = (ulong)((int)uVar14 - 4);
            puVar15 = (uint64_t *)((long)puVar15 + 4);
          }
          for (uVar13 = uVar14 >> 3; uVar13 != 0; uVar13 = uVar13 - 1) {
            *puVar15 = 0;
            puVar15 = puVar15 + (ulong)bVar29 * -2 + 1;
          }
          if ((uVar14 & 4) != 0) {
            *(uint32_t *)puVar15 = 0;
            puVar15 = (uint64_t *)((long)puVar15 + 4);
          }
          if ((uVar14 & 2) != 0) {
            *(uint16_t *)puVar15 = 0;
            puVar15 = (uint64_t *)((long)puVar15 + 2);
          }
          if (bVar28) {
            *(uint8_t *)puVar15 = 0;
          }
          AdjustSetPieceLayering()::pObjectOrder._40_2_ = 0;
          AdjustSetPieceLayering()::pObjectOrder._42_2_ = 5;
          uVar19 = 0;
          AdjustSetPieceLayering()::pObjectOrder._72_4_ = 0xa110ca7e;
          AdjustSetPieceLayering()::pObjectOrder._52_2_ = 5;
        }
LAB_004aa8a8:
        piVar20 = (int *)((ulong)uVar19 * 0x10 + AdjustSetPieceLayering()::pObjectOrder._56_8_);
        *piVar20 = iVar10;
        *(uint64_t *)(piVar20 + 2) = uVar3;
        AdjustSetPieceLayering()::pObjectOrder._40_2_ =
             AdjustSetPieceLayering()::pObjectOrder._40_2_ + 1;
        if (local_64 < iVar10) {
          local_58 = *(long *)(*(long *)(lVar12 + 0xa8) + lVar25);
          local_64 = iVar10;
        }
        if (iVar10 < local_50) {
          local_60 = *(long *)(*(long *)(lVar12 + 0xa8) + lVar25);
          local_50 = iVar10;
        }
      }
      uVar19 = (int)uVar18 + 1;
      uVar18 = (ulong)uVar19;
      if ((int)(uint)*(ushort *)(lVar12 + 0x98) <= (int)uVar19) goto LAB_004aabb0;
      lVar25 = (uVar18 & 0xffff) * 8;
      pRVar21 = *(RenderLayerObject **)(*(long *)(lVar12 + 0xa8) + (uVar18 & 0xffff) * 8);
      if (fVar1 != *(float *)(pRVar21 + 0x2c)) {
        AdjustSetPieceLayering()::pObjectOrder._40_2_ = 0;
        if ((AdjustSetPieceLayering()::pObjectOrder._48_4_ == 1) &&
           (AdjustSetPieceLayering()::pObjectOrder._42_2_ != 0)) {
          uVar8 = AdjustSetPieceLayering()::pObjectOrder._42_2_ - 1;
          lVar12 = 0;
          do {
            *(uint16_t *)(AdjustSetPieceLayering()::pObjectOrder._64_8_ + lVar12) = 0xffff;
            lVar12 = lVar12 + 2;
          } while (lVar12 != (ulong)uVar8 * 2 + 2);
          return;
        }
        return;
      }
    } while( true );
  }
  local_58 = 0;
  local_60 = 0;
LAB_004aabb0:
  uVar19 = (uint)(ushort)AdjustSetPieceLayering()::pObjectOrder._40_2_;
  uVar8 = 0;
  bVar28 = false;
  do {
    uVar9 = uVar8;
    if ((int)(uVar19 - 1) <= (int)(uint)uVar8) {
      do {
        if (!bVar28) {
          bVar28 = false;
          if ((local_58 != 0) && (*(long *)(local_58 + 8) != 0)) {
            bVar28 = fVar1 == *(float *)(*(long *)(local_58 + 8) + 0x2c);
          }
          bVar6 = false;
          if ((local_60 != 0) && (*(long *)(local_60 + 0x10) != 0)) {
            bVar6 = fVar1 == *(float *)(*(long *)(local_60 + 0x10) + 0x2c);
          }
          if ((bVar27) && (bVar26)) {
            iVar10 = TKeyboard__GetExclusiveState(Keyboard,0x7f);
            if ((iVar10 == 1) && (bVar28)) {
              pRVar21 = *(RenderLayerObject **)(this + 0x10);
              while( true ) {
                if (pRVar21 == (RenderLayerObject *)0x0) {
                  return;
                }
                if (fVar1 == *(float *)(pRVar21 + 0x2c)) break;
                pRVar21 = *(RenderLayerObject **)(pRVar21 + 0x10);
              }
              uVar19 = (uint)(ushort)AdjustSetPieceLayering()::pObjectOrder._40_2_;
              pRVar24 = *(RenderLayerObject **)(AdjustSetPieceLayering()::pObjectOrder._56_8_ + 8);
              if (AdjustSetPieceLayering()::pObjectOrder._40_2_ != 0) {
                uVar23 = 0;
                do {
                  if ((pRVar21 == pRVar24) || (uVar23 != 0)) {
                    if (uVar23 != 0) {
                      lVar12 = (ulong)(uVar23 & 0xffff) * 0x10;
                      RenderLayer__RemoveObject
                                (this,*(RenderLayerObject **)
                                       (AdjustSetPieceLayering()::pObjectOrder._56_8_ + 8 + lVar12))
                      ;
                      RenderLayer__InsertObjectAfter
                                (this,*(RenderLayerObject **)
                                       (AdjustSetPieceLayering()::pObjectOrder._56_8_ + 8 + lVar12),
                                 pRVar24);
                      uVar19 = (uint)(ushort)AdjustSetPieceLayering()::pObjectOrder._40_2_;
                      pRVar24 = *(RenderLayerObject **)
                                 (AdjustSetPieceLayering()::pObjectOrder._56_8_ + 8 + lVar12);
                    }
                  }
                  else {
                    RenderLayer__RemoveObject
                              (this,*(RenderLayerObject **)
                                     (AdjustSetPieceLayering()::pObjectOrder._56_8_ + 8));
                    RenderLayer__InsertObjectAfter
                              (this,*(RenderLayerObject **)
                                     (AdjustSetPieceLayering()::pObjectOrder._56_8_ + 8),pRVar21);
                    uVar19 = (uint)(ushort)AdjustSetPieceLayering()::pObjectOrder._40_2_;
                  }
                  uVar23 = uVar23 + 1;
                } while ((int)uVar23 < (int)uVar19);
              }
            }
            iVar10 = TKeyboard__GetExclusiveState(Keyboard,0x1f);
            if ((iVar10 == 1) && (bVar6)) {
              pRVar21 = *(RenderLayerObject **)(this + 8);
              while( true ) {
                if (pRVar21 == (RenderLayerObject *)0x0) {
                  return;
                }
                if (fVar1 == *(float *)(pRVar21 + 0x2c)) break;
                pRVar21 = *(RenderLayerObject **)(pRVar21 + 8);
              }
              pRVar24 = *(RenderLayerObject **)(AdjustSetPieceLayering()::pObjectOrder._56_8_ + 8);
              if (AdjustSetPieceLayering()::pObjectOrder._40_2_ != 0) {
                uVar19 = 0;
                uVar8 = AdjustSetPieceLayering()::pObjectOrder._40_2_;
                do {
                  if ((pRVar21 == pRVar24) || (uVar19 != 0)) {
                    if (uVar19 != 0) {
                      lVar12 = (ulong)(uVar19 & 0xffff) * 0x10;
                      RenderLayer__RemoveObject
                                (this,*(RenderLayerObject **)
                                       (AdjustSetPieceLayering()::pObjectOrder._56_8_ + 8 + lVar12))
                      ;
                      RenderLayer__InsertObjectAfter
                                (this,*(RenderLayerObject **)
                                       (AdjustSetPieceLayering()::pObjectOrder._56_8_ + 8 + lVar12),
                                 pRVar24);
                      pRVar24 = *(RenderLayerObject **)
                                 (AdjustSetPieceLayering()::pObjectOrder._56_8_ + 8 + lVar12);
                      uVar8 = AdjustSetPieceLayering()::pObjectOrder._40_2_;
                    }
                  }
                  else {
                    RenderLayer__RemoveObject
                              (this,*(RenderLayerObject **)
                                     (AdjustSetPieceLayering()::pObjectOrder._56_8_ + 8));
                    RenderLayer__InsertObjectBefore
                              (this,*(RenderLayerObject **)
                                     (AdjustSetPieceLayering()::pObjectOrder._56_8_ + 8),pRVar21);
                    uVar8 = AdjustSetPieceLayering()::pObjectOrder._40_2_;
                  }
                  uVar19 = uVar19 + 1;
                } while ((int)uVar19 < (int)(uint)uVar8);
              }
            }
          }
          else if ((bVar5) && (bVar26)) {
            iVar10 = TKeyboard__GetExclusiveState(Keyboard,0x7f);
            if ((iVar10 == 1) && (bVar28)) {
              uVar19 = (uint)(ushort)AdjustSetPieceLayering()::pObjectOrder._40_2_;
              pRVar21 = *(RenderLayerObject **)(local_58 + 8);
              pRVar24 = *(RenderLayerObject **)(AdjustSetPieceLayering()::pObjectOrder._56_8_ + 8);
              if (AdjustSetPieceLayering()::pObjectOrder._40_2_ != 0) {
                uVar18 = 0;
                do {
                  iVar10 = (int)uVar18;
                  if ((iVar10 == 0) && (pRVar21 != (RenderLayerObject *)0x0)) {
                    RenderLayer__RemoveObject
                              (this,*(RenderLayerObject **)
                                     (AdjustSetPieceLayering()::pObjectOrder._56_8_ + 8));
                    RenderLayer__InsertObjectAfter
                              (this,*(RenderLayerObject **)
                                     (AdjustSetPieceLayering()::pObjectOrder._56_8_ + 8),pRVar21);
                    uVar19 = (uint)(ushort)AdjustSetPieceLayering()::pObjectOrder._40_2_;
                  }
                  else if (iVar10 != 0) {
                    lVar12 = (uVar18 & 0xffff) * 0x10;
                    RenderLayer__RemoveObject
                              (this,*(RenderLayerObject **)
                                     (AdjustSetPieceLayering()::pObjectOrder._56_8_ + 8 + lVar12));
                    RenderLayer__InsertObjectAfter
                              (this,*(RenderLayerObject **)
                                     (AdjustSetPieceLayering()::pObjectOrder._56_8_ + 8 + lVar12),
                               pRVar24);
                    uVar19 = (uint)(ushort)AdjustSetPieceLayering()::pObjectOrder._40_2_;
                    pRVar24 = *(RenderLayerObject **)
                               (AdjustSetPieceLayering()::pObjectOrder._56_8_ + 8 + lVar12);
                  }
                  uVar18 = (ulong)(iVar10 + 1U);
                } while ((int)(iVar10 + 1U) < (int)uVar19);
              }
            }
            iVar10 = TKeyboard__GetExclusiveState(Keyboard,0x1f);
            if ((iVar10 == 1) && (bVar6)) {
              pRVar21 = *(RenderLayerObject **)(local_60 + 0x10);
              pRVar24 = *(RenderLayerObject **)(AdjustSetPieceLayering()::pObjectOrder._56_8_ + 8);
              if (AdjustSetPieceLayering()::pObjectOrder._40_2_ != 0) {
                uVar18 = 0;
                uVar8 = AdjustSetPieceLayering()::pObjectOrder._40_2_;
                do {
                  iVar10 = (int)uVar18;
                  if ((iVar10 == 0) && (pRVar21 != (RenderLayerObject *)0x0)) {
                    RenderLayer__RemoveObject
                              (this,*(RenderLayerObject **)
                                     (AdjustSetPieceLayering()::pObjectOrder._56_8_ + 8));
                    RenderLayer__InsertObjectBefore
                              (this,*(RenderLayerObject **)
                                     (AdjustSetPieceLayering()::pObjectOrder._56_8_ + 8),pRVar21);
                    uVar8 = AdjustSetPieceLayering()::pObjectOrder._40_2_;
                  }
                  else if (iVar10 != 0) {
                    lVar12 = (uVar18 & 0xffff) * 0x10;
                    RenderLayer__RemoveObject
                              (this,*(RenderLayerObject **)
                                     (AdjustSetPieceLayering()::pObjectOrder._56_8_ + 8 + lVar12));
                    RenderLayer__InsertObjectAfter
                              (this,*(RenderLayerObject **)
                                     (AdjustSetPieceLayering()::pObjectOrder._56_8_ + 8 + lVar12),
                               pRVar24);
                    pRVar24 = *(RenderLayerObject **)
                               (AdjustSetPieceLayering()::pObjectOrder._56_8_ + 8 + lVar12);
                    uVar8 = AdjustSetPieceLayering()::pObjectOrder._40_2_;
                  }
                  uVar18 = (ulong)(iVar10 + 1U);
                } while ((int)(iVar10 + 1U) < (int)(uint)uVar8);
              }
            }
          }
          AdjustSetPieceLayering()::pObjectOrder._40_2_ = 0;
          if (AdjustSetPieceLayering()::pObjectOrder._48_4_ != 1) {
            AdjustSetPieceLayering()::pObjectOrder._40_2_ = 0;
            return;
          }
          if (AdjustSetPieceLayering()::pObjectOrder._42_2_ == 0) {
            AdjustSetPieceLayering()::pObjectOrder._40_2_ = 0;
            return;
          }
          uVar8 = AdjustSetPieceLayering()::pObjectOrder._42_2_ - 1;
          lVar12 = 0;
          do {
            *(uint16_t *)(AdjustSetPieceLayering()::pObjectOrder._64_8_ + lVar12) = 0xffff;
            lVar12 = lVar12 + 2;
          } while (lVar12 != (ulong)uVar8 * 2 + 2);
          return;
        }
        uVar9 = 0;
        bVar28 = false;
      } while ((int)(uVar19 - 1) < 1);
    }
    uVar8 = uVar9 + 1;
    piVar20 = (int *)((ulong)uVar9 * 0x10 + AdjustSetPieceLayering()::pObjectOrder._56_8_);
    piVar17 = (int *)((ulong)uVar8 * 0x10 + AdjustSetPieceLayering()::pObjectOrder._56_8_);
    iVar10 = *piVar20;
    if (*piVar17 < iVar10) {
      uVar4 = *(uint64_t *)(piVar20 + 2);
      uVar3 = *(uint64_t *)piVar20;
      *(uint64_t *)piVar20 = *(uint64_t *)piVar17;
      *(uint64_t *)(piVar20 + 2) = *(uint64_t *)(piVar17 + 2);
      *(uint64_t *)piVar17 = uVar3;
      *(uint64_t *)(piVar17 + 2) = uVar4;
      *piVar17 = iVar10;
      bVar28 = true;
    }
  } while( true );
}

/* ======================================================================
 * ActivateAnimalProps  (Ghidra `ActivateAnimalProps` @ 004baba0)
 * Signature: uint8_t __stdcall ActivateAnimalProps(void * arg1)
 * Calls: `SMBEditor__getCurrAnimal`
 * Called by: `SMBEditorForms__Initialize`
 */
/* ActivateAnimalProps(void*) */

void ActivateAnimalProps(void *arg1)

{
  long lVar1;
  
  lVar1 = SMBEditor__getCurrAnimal();
  if (lVar1 != 0) {
    UITextField__SetDynamicText(pANIMALPROPgravityX,(double)*(float *)(lVar1 + 0x100),&DAT_005c48d0 /* R:5.184804318001823e-44f */)
    ;
    UITextField__SetDynamicText(pANIMALPROPgravityY,(double)*(float *)(lVar1 + 0x104),&DAT_005c48d0 /* R:5.184804318001823e-44f */)
    ;
    UITextField__SetDynamicText
              (pANIMALPROPvelocityX,(double)*(float *)(lVar1 + 0x108),&DAT_005c48d0 /* R:5.184804318001823e-44f */);
    UITextField__SetDynamicText
              (pANIMALPROPvelocityY,(double)*(float *)(lVar1 + 0x10c),&DAT_005c48d0 /* R:5.184804318001823e-44f */);
    return;
  }
  return;
}

/* ======================================================================
 * ActivateWayPointProps  (Ghidra `ActivateWayPointProps` @ 004bac90)
 * Signature: uint8_t __stdcall ActivateWayPointProps(void * arg1)
 * Calls: (none)
 * Called by: `SMBEditorForms__Initialize`
 */
/* ActivateWayPointProps(void*) */

void ActivateWayPointProps(void *arg1)

{
  long lVar1;
  
  lVar1 = *(long *)(SuperMeatBoyEditor + 0x108);
  if (lVar1 != 0) {
    UITextField__SetDynamicText
              (pWAYPOINTPROPDuration,(double)*(float *)(lVar1 + 0x10),&DAT_005c48d0 /* R:5.184804318001823e-44f */);
    UITextField__SetDynamicText(pWAYPOINTPROPZoom,(double)*(float *)(lVar1 + 8),&DAT_005c48d0 /* R:5.184804318001823e-44f */);
    return;
  }
  return;
}

/* ======================================================================
 * ActivatePieceProps  (Ghidra `ActivatePieceProps` @ 004bacf0)
 * Signature: uint8_t __stdcall ActivatePieceProps(void * arg1)
 * Calls: (none)
 * Called by: `SMBEditorForms__Initialize`
 */
/* ActivatePieceProps(void*) */

void ActivatePieceProps(void *arg1)

{
  long lVar1;
  
  lVar1 = **(long **)(SuperMeatBoyEditor + 0xa8);
  UITextField__SetDynamicText(pSETPIECEPROPStartTime,(double)*(float *)(lVar1 + 0x48),&DAT_005c48d0 /* R:5.184804318001823e-44f */)
  ;
  UITextField__SetDynamicText(pSETPIECEPROPSTimeMod,(double)*(float *)(lVar1 + 0x44),&DAT_005c48d0 /* R:5.184804318001823e-44f */);
  UITextField__SetDynamicText(pSETPIECEPROPFloat1,(double)*(float *)(lVar1 + 0x4c),&DAT_005c48d0 /* R:5.184804318001823e-44f */);
  UITextField__SetDynamicText(pSETPIECEPROPFloat2,(double)*(float *)(lVar1 + 0x50),&DAT_005c48d0 /* R:5.184804318001823e-44f */);
  UITextField__SetDynamicText(pSETPIECEPROPInt1,&DAT_005c6660 /* R:5.184804318001823e-44f */,(ulong)*(uint *)(lVar1 + 0x54));
  UITextField__SetDynamicText(pSETPIECEPROPInt2,&DAT_005c6660 /* R:5.184804318001823e-44f */,(ulong)*(uint *)(lVar1 + 0x58));
  return;
}

/* ======================================================================
 * ApplyAnimalProps  (Ghidra `ApplyAnimalProps` @ 004badb0)
 * Signature: uint8_t __stdcall ApplyAnimalProps(void * arg1)
 * Calls: `SMBEditor__getCurrAnimal`, `StringToFloatW`, `Vector2__operator_assign`
 * Called by: `SMBEditorForms__Initialize`
 */
/* ApplyAnimalProps(void*) */

void ApplyAnimalProps(void *arg1)

{
  long lVar1;
  uint32_t local_28;
  uint32_t local_24;
  uint32_t local_18;
  uint32_t local_14;
  
  lVar1 = SMBEditor__getCurrAnimal();
  if (lVar1 != 0) {
    local_28 = StringToFloatW(*(uint64_t *)(pANIMALPROPvelocityX + 0x40));
    local_24 = StringToFloatW(*(uint64_t *)(pANIMALPROPvelocityY + 0x40));
    local_18 = StringToFloatW(*(uint64_t *)(pANIMALPROPgravityX + 0x40));
    local_14 = StringToFloatW(*(uint64_t *)(pANIMALPROPgravityY + 0x40));
    Vector2__operator_assign((Vector2 *)(lVar1 + 0x108),(Vector2 *)&local_28);
    Vector2__operator_assign((Vector2 *)(lVar1 + 0x100),(Vector2 *)&local_18);
  }
  return;
}

/* ======================================================================
 * ApplySetPieceProps  (Ghidra `ApplySetPieceProps` @ 004bae90)
 * Signature: uint8_t __stdcall ApplySetPieceProps(void * arg1)
 * Calls: `StringToFloatW`, `StringToIntW`
 * Called by: `SMBEditorForms__Initialize`
 */
/* ApplySetPieceProps(void*) */

void ApplySetPieceProps(void *arg1)

{
  long lVar1;
  long lVar2;
  uint32_t uVar3;
  
  lVar1 = **(long **)(SuperMeatBoyEditor + 0xa8);
  uVar3 = StringToFloatW(*(uint64_t *)(pSETPIECEPROPStartTime + 0x40));
  lVar2 = pSETPIECEPROPSTimeMod;
  *(uint32_t *)(lVar1 + 0x48) = uVar3;
  uVar3 = StringToFloatW(*(uint64_t *)(lVar2 + 0x40));
  lVar2 = pSETPIECEPROPFloat1;
  *(uint32_t *)(lVar1 + 0x44) = uVar3;
  uVar3 = StringToFloatW(*(uint64_t *)(lVar2 + 0x40));
  lVar2 = pSETPIECEPROPFloat2;
  *(uint32_t *)(lVar1 + 0x4c) = uVar3;
  uVar3 = StringToFloatW(*(uint64_t *)(lVar2 + 0x40));
  lVar2 = pSETPIECEPROPInt1;
  *(uint32_t *)(lVar1 + 0x50) = uVar3;
  uVar3 = StringToIntW(*(uint64_t *)(lVar2 + 0x40));
  *(uint32_t *)(lVar1 + 0x54) = uVar3;
  uVar3 = StringToIntW(*(uint64_t *)(pSETPIECEPROPInt2 + 0x40));
  *(uint32_t *)(lVar1 + 0x58) = uVar3;
  return;
}

/* ======================================================================
 * ActivateEffectProps  (Ghidra `ActivateEffectProps` @ 004baf20)
 * Signature: uint8_t __stdcall ActivateEffectProps(void * arg1)
 * Calls: `GSuperMeatBoy__getChar`
 * Called by: `SMBEditorForms__Initialize`
 */
/* ActivateEffectProps(void*) */

void ActivateEffectProps(void *arg1)

{
  long lVar1;
  
  lVar1 = GSuperMeatBoy__getChar(SuperMeatBoy,1);
  UITextField__SetDynamicText
            (pSMBPLAYEREFFECTFields,(double)*(float *)(lVar1 + 0x994),&DAT_005c48d0 /* R:5.184804318001823e-44f */);
  UITextField__SetDynamicText(DAT_0081ab88 /* R:6.659755029611553e-39f */,(double)*(float *)(lVar1 + 0x998),&DAT_005c48d0 /* R:5.184804318001823e-44f */);
  UITextField__SetDynamicText(DAT_0081ab90 /* R:7.805232446289231e-43f */,(double)*(float *)(lVar1 + 0x99c),&DAT_005c48d0 /* R:5.184804318001823e-44f */);
  UITextField__SetDynamicText(DAT_0081ab98 /* R:6.3184547756406e-42f */,(double)*(float *)(lVar1 + 0x9a4),&DAT_005c48d0 /* R:5.184804318001823e-44f */);
  UITextField__SetDynamicText(DAT_0081aba0 /* R:8.457071650342278e-39f */,(double)*(float *)(lVar1 + 0x9a8),&DAT_005c48d0 /* R:5.184804318001823e-44f */);
  UITextField__SetDynamicText(DAT_0081aba8 /* R:2.2420775429197073e-43f */,(double)*(float *)(lVar1 + 0x9ac),&DAT_005c48d0 /* R:5.184804318001823e-44f */);
  UITextField__SetDynamicText(DAT_0081abb0 /* R:6.392723594249815e-42f */,(double)*(float *)(lVar1 + 0x9b4),&DAT_005c48d0 /* R:5.184804318001823e-44f */);
  UITextField__SetDynamicText(DAT_0081abb8 /* R:8.45729585809657e-39f */,(double)*(float *)(lVar1 + 0x9b8),&DAT_005c48d0 /* R:5.184804318001823e-44f */);
  UITextField__SetDynamicText(DAT_0081abc0 /* R:1.1210387714598537e-43f */,(double)*(float *)(lVar1 + 0x9bc),&DAT_005c48d0 /* R:5.184804318001823e-44f */);
  UITextField__SetDynamicText(DAT_0081abc8 /* R:6.471196308252005e-42f */,(double)*(float *)(lVar1 + 0x9c4),&DAT_005c48d0 /* R:5.184804318001823e-44f */);
  UITextField__SetDynamicText(DAT_0081abd0 /* R:6.364854570391324e-39f */,(double)*(float *)(lVar1 + 0x9c8),&DAT_005c48d0 /* R:5.184804318001823e-44f */);
  UITextField__SetDynamicText(DAT_0081abd8 /* R:5.254869241218064e-43f */,(double)*(float *)(lVar1 + 0x9cc),&DAT_005c48d0 /* R:5.184804318001823e-44f */);
  UITextField__SetDynamicText(DAT_0081abe0 /* R:2.766163168577189e-42f */,(double)*(float *)(lVar1 + 0x9d4),&DAT_005c48d0 /* R:5.184804318001823e-44f */);
  UITextField__SetDynamicText(DAT_0081abe8 /* R:1.1901171805572098e-38f */,(double)*(float *)(lVar1 + 0x9d8),&DAT_005c48d0 /* R:5.184804318001823e-44f */);
  UITextField__SetDynamicText(DAT_0081abf0 /* R:2.2420775429197073e-44f */,(double)*(float *)(lVar1 + 0x9dc),&DAT_005c48d0 /* R:5.184804318001823e-44f */);
  UITextField__SetDynamicText(DAT_0081abf8 /* R:2.781577451684762e-42f */,(double)*(float *)(lVar1 + 0x9e4),&DAT_005c48d0 /* R:5.184804318001823e-44f */);
  UITextField__SetDynamicText(DAT_0081ac00 /* R:1.1901194226347528e-38f */,(double)*(float *)(lVar1 + 0x9e8),&DAT_005c48d0 /* R:5.184804318001823e-44f */);
  UITextField__SetDynamicText(DAT_0081ac08 /* R:2.2420775429197073e-44f */,(double)*(float *)(lVar1 + 0x9ec),&DAT_005c48d0 /* R:5.184804318001823e-44f */);
  UITextField__SetDynamicText(DAT_0081ac10 /* R:2.796991734792335e-42f */,(double)*(float *)(lVar1 + 0x9f4),&DAT_005c48d0 /* R:5.184804318001823e-44f */);
  UITextField__SetDynamicText(DAT_0081ac18 /* R:1.1901216647122957e-38f */,(double)*(float *)(lVar1 + 0x9f8),&DAT_005c48d0 /* R:5.184804318001823e-44f */);
  UITextField__SetDynamicText(DAT_0081ac20 /* R:2.2420775429197073e-44f */,(double)*(float *)(lVar1 + 0x9fc),&DAT_005c48d0 /* R:5.184804318001823e-44f */);
  UITextField__SetDynamicText(DAT_0081ac28 /* R:2.8138073163642327e-42f */,(double)*(float *)(lVar1 + 0xa04),&DAT_005c48d0 /* R:5.184804318001823e-44f */);
  UITextField__SetDynamicText(DAT_0081ac30 /* R:1.1901239067898386e-38f */,(double)*(float *)(lVar1 + 0xa08),&DAT_005c48d0 /* R:5.184804318001823e-44f */);
  UITextField__SetDynamicText(DAT_0081ac38 /* R:2.2420775429197073e-44f */,(double)*(float *)(lVar1 + 0xa0c),&DAT_005c48d0 /* R:5.184804318001823e-44f */);
  UITextField__SetDynamicText(DAT_0081ac40 /* R:2.8306228979361305e-42f */,(double)*(float *)(lVar1 + 0xa14),&DAT_005c48d0 /* R:5.184804318001823e-44f */);
  UITextField__SetDynamicText(DAT_0081ac48 /* R:1.1901261488673815e-38f */,(double)*(float *)(lVar1 + 0xa18),&DAT_005c48d0 /* R:5.184804318001823e-44f */);
  UITextField__SetDynamicText(DAT_0081ac50 /* R:2.2420775429197073e-44f */,(double)*(float *)(lVar1 + 0xa1c),&DAT_005c48d0 /* R:5.184804318001823e-44f */);
  UITextField__SetDynamicText
            (pSMBPLAYEREFFECTWalkDelay,(double)*(float *)(lVar1 + 0xa2c),&DAT_005c48d0 /* R:5.184804318001823e-44f */);
  UITextField__SetDynamicText
            (pSMBPLAYEREFFECTRunDelay,(double)*(float *)(lVar1 + 0xa24),&DAT_005c48d0 /* R:5.184804318001823e-44f */);
  UITextField__SetDynamicText
            (pSMBPLAYEREFFECTRunFastDelay,(double)*(float *)(lVar1 + 0xa28),&DAT_005c48d0 /* R:5.184804318001823e-44f */);
  return;
}

/* ======================================================================
 * ActivateAnimProps  (Ghidra `ActivateAnimProps` @ 004bb320)
 * Signature: uint8_t __stdcall ActivateAnimProps(void * arg1)
 * Calls: `GSuperMeatBoy__getChar`
 * Called by: `SMBEditorForms__Initialize`
 */
/* ActivateAnimProps(void*) */

void ActivateAnimProps(void *arg1)

{
  uint64_t *puVar1;
  long lVar2;
  int iVar3;
  uint64_t *puVar4;
  int iVar5;
  long lVar6;
  
  puVar4 = &pSMBPLAYERANIMFields;
  iVar3 = 0;
  lVar2 = GSuperMeatBoy__getChar(SuperMeatBoy,1);
  do {
    iVar5 = iVar3 >> 1;
    iVar3 = iVar3 + 2;
    lVar6 = (long)iVar5 + 4;
    UITextField__SetDynamicText
              ((wchar_t *)*puVar4,(double)*(float *)(lVar2 + 0x8b4 + lVar6 * 8),&DAT_005c48d0 /* R:5.184804318001823e-44f */);
    puVar1 = puVar4 + 1;
    puVar4 = puVar4 + 2;
    UITextField__SetDynamicText
              ((wchar_t *)*puVar1,(double)*(float *)(lVar2 + 0x8b8 + lVar6 * 8),&DAT_005c48d0 /* R:5.184804318001823e-44f */);
  } while (iVar3 != 0x30);
  return;
}

/* ======================================================================
 * ApplyLightProperties  (Ghidra `ApplyLightProperties` @ 004bba90)
 * Signature: uint8_t __stdcall ApplyLightProperties(void * arg1)
 * Calls: `SMBEditor__getCurrLight`, `StringToIntW`
 * Called by: `SMBEditorForms__Initialize`
 */
/* ApplyLightProperties(void*) */

void ApplyLightProperties(void *arg1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  
  lVar5 = SMBEditor__getCurrLight(SuperMeatBoyEditor);
  if (lVar5 != 0) {
    iVar2 = StringToIntW(*(uint64_t *)(pSMBLIGHTPROPRed + 0x40));
    iVar3 = StringToIntW(*(uint64_t *)(pSMBLIGHTPROPGreen + 0x40));
    iVar4 = StringToIntW(*(uint64_t *)(pSMBLIGHTPROPBlue + 0x40));
    fVar1 = DAT_005c4890 /* R:0.003921568859368563f */;
    *(int *)(lVar5 + 0x28) = (int)*(uint64_t *)(*(long *)(pSMBLIGHTPROPType + 0x528) + 8);
    *(float *)(lVar5 + 0x10) = (float)iVar2 * fVar1;
    *(float *)(lVar5 + 0x14) = (float)iVar3 * fVar1;
    *(float *)(lVar5 + 0x18) = (float)iVar4 * fVar1;
  }
  return;
}

/* ======================================================================
 * ApplyLayerPropertiesToAllLayers  (Ghidra `ApplyLayerPropertiesToAllLayers` @ 004bbcf0)
 * Signature: uint8_t __stdcall ApplyLayerPropertiesToAllLayers(void * arg1)
 * Calls: `StringToFloatW`, `StringToIntW`, `TileLevel__getLevelLayer`
 * Called by: `SMBEditorForms__Initialize`
 */
/* ApplyLayerPropertiesToAllLayers(void*) */

void ApplyLayerPropertiesToAllLayers(void *arg1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint32_t uVar8;
  
  TileLevel__getLevelLayer
            (*(TileLevel **)(SuperMeatBoy + 0x40),*(uint32_t *)(SuperMeatBoyEditor + 0xd0));
  iVar2 = StringToIntW(*(uint64_t *)(pSMBLAYERPROPRed + 0x40));
  fVar4 = DAT_005c4890 /* R:0.003921568859368563f */ * (float)iVar2;
  iVar2 = StringToIntW(*(uint64_t *)(pSMBLAYERPROPGreen + 0x40));
  fVar5 = DAT_005c4890 /* R:0.003921568859368563f */ * (float)iVar2;
  iVar2 = StringToIntW(*(uint64_t *)(pSMBLAYERPROPBlue + 0x40));
  fVar6 = DAT_005c4890 /* R:0.003921568859368563f */ * (float)iVar2;
  iVar2 = StringToIntW(*(uint64_t *)(pSMBLAYERPROPAlpha + 0x40));
  fVar7 = DAT_005c4890 /* R:0.003921568859368563f */ * (float)iVar2;
  uVar8 = StringToFloatW(*(uint64_t *)(pSMBLAYERPROPLerp + 0x40));
  lVar3 = TileLevel__getLevelLayer(*(TileLevel **)(SuperMeatBoy + 0x40),0);
  *(float *)(lVar3 + 0x400) = fVar4;
  *(float *)(lVar3 + 0x404) = fVar5;
  *(float *)(lVar3 + 0x408) = fVar6;
  *(float *)(lVar3 + 0x40c) = fVar7;
  *(uint32_t *)(lVar3 + 0x410) = uVar8;
  lVar3 = TileLevel__getLevelLayer(*(TileLevel **)(SuperMeatBoy + 0x40),1);
  *(float *)(lVar3 + 0x400) = fVar4;
  *(float *)(lVar3 + 0x404) = fVar5;
  *(float *)(lVar3 + 0x408) = fVar6;
  *(float *)(lVar3 + 0x40c) = fVar7;
  *(uint32_t *)(lVar3 + 0x410) = uVar8;
  lVar3 = TileLevel__getLevelLayer(*(TileLevel **)(SuperMeatBoy + 0x40),2);
  *(float *)(lVar3 + 0x400) = fVar4;
  *(float *)(lVar3 + 0x404) = fVar5;
  *(float *)(lVar3 + 0x408) = fVar6;
  *(float *)(lVar3 + 0x40c) = fVar7;
  *(uint32_t *)(lVar3 + 0x410) = uVar8;
  lVar3 = TileLevel__getLevelLayer(*(TileLevel **)(SuperMeatBoy + 0x40),3);
  *(float *)(lVar3 + 0x400) = fVar4;
  *(float *)(lVar3 + 0x404) = fVar5;
  *(float *)(lVar3 + 0x408) = fVar6;
  *(float *)(lVar3 + 0x40c) = fVar7;
  *(uint32_t *)(lVar3 + 0x410) = uVar8;
  lVar3 = TileLevel__getLevelLayer(*(TileLevel **)(SuperMeatBoy + 0x40),4);
  *(float *)(lVar3 + 0x400) = fVar4;
  *(float *)(lVar3 + 0x404) = fVar5;
  *(float *)(lVar3 + 0x408) = fVar6;
  *(float *)(lVar3 + 0x40c) = fVar7;
  *(uint32_t *)(lVar3 + 0x410) = uVar8;
  lVar3 = TileLevel__getLevelLayer(*(TileLevel **)(SuperMeatBoy + 0x40),5);
  *(float *)(lVar3 + 0x400) = fVar4;
  *(float *)(lVar3 + 0x404) = fVar5;
  *(float *)(lVar3 + 0x408) = fVar6;
  *(float *)(lVar3 + 0x40c) = fVar7;
  *(uint32_t *)(lVar3 + 0x410) = uVar8;
  lVar3 = TileLevel__getLevelLayer(*(TileLevel **)(SuperMeatBoy + 0x40),6);
  *(float *)(lVar3 + 0x400) = fVar4;
  *(float *)(lVar3 + 0x404) = fVar5;
  *(float *)(lVar3 + 0x408) = fVar6;
  *(float *)(lVar3 + 0x40c) = fVar7;
  *(uint32_t *)(lVar3 + 0x410) = uVar8;
  lVar3 = TileLevel__getLevelLayer(*(TileLevel **)(SuperMeatBoy + 0x40),7);
  lVar1 = SuperMeatBoy;
  *(float *)(lVar3 + 0x400) = fVar4;
  *(float *)(lVar3 + 0x404) = fVar5;
  *(float *)(lVar3 + 0x408) = fVar6;
  *(float *)(lVar3 + 0x40c) = fVar7;
  *(uint32_t *)(lVar3 + 0x410) = uVar8;
  lVar3 = *(long *)(lVar1 + 0x88);
  *(float *)(lVar3 + 0x400) = fVar4;
  *(float *)(lVar3 + 0x404) = fVar5;
  *(float *)(lVar3 + 0x408) = fVar6;
  *(float *)(lVar3 + 0x40c) = fVar7;
  *(uint32_t *)(*(long *)(lVar1 + 0x88) + 0x410) = uVar8;
  return;
}

/* ======================================================================
 * ApplyLayerProperties  (Ghidra `ApplyLayerProperties` @ 004bc120)
 * Signature: uint8_t __stdcall ApplyLayerProperties(void * arg1)
 * Calls: `StringToFloatW`, `StringToIntW`, `TileLevel__getLevelLayer`
 * Called by: `SMBEditorForms__Initialize`
 */
/* ApplyLayerProperties(void*) */

void ApplyLayerProperties(void *arg1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  uint32_t uVar7;
  
  lVar6 = TileLevel__getLevelLayer
                    (*(TileLevel **)(SuperMeatBoy + 0x40),*(uint32_t *)(SuperMeatBoyEditor + 0xd0)
                    );
  iVar2 = StringToIntW(*(uint64_t *)(pSMBLAYERPROPRed + 0x40));
  iVar3 = StringToIntW(*(uint64_t *)(pSMBLAYERPROPGreen + 0x40));
  iVar4 = StringToIntW(*(uint64_t *)(pSMBLAYERPROPBlue + 0x40));
  iVar5 = StringToIntW(*(uint64_t *)(pSMBLAYERPROPAlpha + 0x40));
  uVar7 = StringToFloatW(*(uint64_t *)(pSMBLAYERPROPLerp + 0x40));
  fVar1 = DAT_005c4890 /* R:0.003921568859368563f */;
  *(uint32_t *)(lVar6 + 0x410) = uVar7;
  *(float *)(lVar6 + 0x400) = (float)iVar2 * fVar1;
  *(float *)(lVar6 + 0x404) = (float)iVar3 * fVar1;
  *(float *)(lVar6 + 0x408) = (float)iVar4 * fVar1;
  *(float *)(lVar6 + 0x40c) = (float)iVar5 * fVar1;
  return;
}

/* ======================================================================
 * AllowedToMove  (Ghidra `AllowedToMove` @ 004d1fe0)
 * Signature: uint8_t __stdcall AllowedToMove(int arg1)
 * Calls: (none)
 * Called by: (none)
 */
/* GSMBMenu__AllowedToMove(int) */

bool GSMBMenu__AllowedToMove(int arg1)

{
  long lVar1;
  long in_RDX;
  int in_ESI;
  uint32_t in_register_0000003c;
  
  if (*(int *)(CONCAT44(in_register_0000003c,arg1) + 0x418) != 9) {
    return true;
  }
  if (LoadedPortalChapter != 0) {
    in_RDX = 0;
    lVar1 = *(long *)(LoadedPortalChapter + (long)in_ESI * 8);
    if (lVar1 != 0) {
      in_RDX = *(long *)(lVar1 + 8);
    }
  }
  return in_RDX != 0;
}

/* ======================================================================
 * AlignedReAlloc__004dc970  (Ghidra `AlignedReAlloc` @ 004dc970)
 * Signature: uint8_t __stdcall AlignedReAlloc(void * arg1, ulong arg2, ulong arg3)
 * Calls: `free`, `malloc`, `memcpy`
 * Called by: (none)
 */
/* TMemory__AlignedReAlloc(void*, unsigned long, unsigned long) [clone .isra.4] */

void * TMemory__AlignedReAlloc(void *arg1,ulong arg2,ulong arg3)

{
  void *pvVar1;
  ulong __n;
  void *__dest;
  
  __dest = (void *)0x0;
  pvVar1 = malloc(arg2 + 0x10 + arg3);
  if (pvVar1 != (void *)0x0) {
    __dest = (void *)((long)pvVar1 + 0x10U + (arg3 - ((long)pvVar1 + 0x10U) % arg3) % arg3)
    ;
    *(ulong *)((long)__dest + -0x10) = arg2;
    *(void **)((long)__dest + -8) = pvVar1;
    if (arg1 != (void *)0x0) {
      __n = *(ulong *)((long)arg1 + -0x10);
      if (arg2 < *(ulong *)((long)arg1 + -0x10)) {
        __n = arg2;
      }
      memcpy(__dest,arg1,__n);
      free(*(void **)((long)arg1 + -8));
    }
  }
  return __dest;
}

/* ======================================================================
 * Add  (Ghidra `Add` @ 004dee40)
 * Signature: uint8_t __stdcall Add(SMBShooter * arg1, int arg2)
 * Calls: `Matrix4x4__operator_assign`, `Vector2__operator_assign`, `free`, `malloc`, `memcpy`, `memset`
 * Called by: (none)
 */
/* ResizeableArray_SMBShooter__Add(SMBShooter const&, int) [clone .constprop.197] */

short ResizeableArray_SMBShooter__Add(SMBShooter *arg1,int arg2)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  short sVar4;
  ushort uVar5;
  void *pvVar6;
  void *pvVar7;
  ulong uVar8;
  ushort uVar9;
  ushort *puVar10;
  uint32_t in_register_00000034;
  uint64_t *puVar11;
  void *pvVar12;
  uint64_t *puVar13;
  uint64_t *puVar14;
  uint64_t *puVar15;
  ulong uVar16;
  short local_6a;
  
  puVar11 = (uint64_t *)CONCAT44(in_register_00000034,arg2);
  if (*(int *)(arg1 + 0x48) == -0x5eef3582) {
    uVar5 = *(ushort *)(arg1 + 0x28);
    if (*(ushort *)(arg1 + 0x2a) <= uVar5) {
      uVar5 = *(ushort *)(arg1 + 0x2a) + *(short *)(arg1 + 0x34);
      uVar8 = (ulong)(byte)arg1[0x2c];
      pvVar12 = (void *)0x0;
      pvVar6 = *(void **)(arg1 + 0x38);
      *(ushort *)(arg1 + 0x2a) = uVar5;
      uVar16 = (ulong)uVar5 * 0xb68;
      pvVar7 = malloc(uVar8 + 0x10 + uVar16);
      if (pvVar7 != (void *)0x0) {
        pvVar12 = (void *)((long)pvVar7 + 0x10U + (uVar8 - ((long)pvVar7 + 0x10U) % uVar8) % uVar8);
        *(ulong *)((long)pvVar12 + -0x10) = uVar16;
        *(void **)((long)pvVar12 + -8) = pvVar7;
        if (pvVar6 != (void *)0x0) {
          uVar8 = *(ulong *)((long)pvVar6 + -0x10);
          if (uVar16 < uVar8 || uVar16 - uVar8 == 0) {
            uVar8 = uVar16;
          }
          memcpy(pvVar12,pvVar6,uVar8);
          free(*(void **)((long)pvVar6 + -8));
        }
      }
      pvVar6 = *(void **)(arg1 + 0x40);
      *(void **)(arg1 + 0x38) = pvVar12;
      if (pvVar6 != (void *)0x0) {
        uVar9 = *(ushort *)(arg1 + 0x2a);
        uVar16 = (ulong)(byte)arg1[0x2c];
        pvVar12 = (void *)0x0;
        uVar8 = (ulong)uVar9 * 2;
        pvVar7 = malloc(uVar16 + 0x10 + uVar8);
        if (pvVar7 != (void *)0x0) {
          pvVar12 = (void *)((long)pvVar7 + 0x10U +
                            (uVar16 - ((long)pvVar7 + 0x10U) % uVar16) % uVar16);
          *(void **)((long)pvVar12 + -8) = pvVar7;
          *(ulong *)((long)pvVar12 + -0x10) = uVar8;
          uVar16 = *(ulong *)((long)pvVar6 + -0x10);
          if (uVar8 <= *(ulong *)((long)pvVar6 + -0x10)) {
            uVar16 = uVar8;
          }
          memcpy(pvVar12,pvVar6,uVar16);
          free(*(void **)((long)pvVar6 + -8));
          uVar9 = *(ushort *)(arg1 + 0x2a);
        }
        uVar5 = *(ushort *)(arg1 + 0x28);
        *(void **)(arg1 + 0x40) = pvVar12;
        if (uVar9 <= uVar5) goto LAB_004deed7;
        while( true ) {
          uVar8 = (ulong)uVar5;
          uVar5 = uVar5 + 1;
          *(uint16_t *)((long)pvVar12 + uVar8 * 2) = 0xffff;
          if (uVar9 <= uVar5) break;
          pvVar12 = *(void **)(arg1 + 0x40);
        }
      }
      uVar5 = *(ushort *)(arg1 + 0x28);
    }
  }
  else {
    uVar8 = (ulong)(byte)arg1[0x2c];
    *(uint32_t *)(arg1 + 0x30) = 0;
    pvVar6 = malloc(uVar8 + 0x3918);
    pvVar12 = (void *)0x0;
    if (pvVar6 != (void *)0x0) {
      pvVar12 = (void *)((long)pvVar6 + 0x10U + (uVar8 - ((long)pvVar6 + 0x10U) % uVar8) % uVar8);
      *(uint64_t *)((long)pvVar12 + -0x10) = 0x3908;
      *(void **)((long)pvVar12 + -8) = pvVar6;
    }
    *(void **)(arg1 + 0x38) = pvVar12;
    memset(pvVar12,0,0x3908);
    uVar5 = 0;
    *(uint16_t *)(arg1 + 0x28) = 0;
    *(uint16_t *)(arg1 + 0x2a) = 5;
    *(uint32_t *)(arg1 + 0x48) = 0xa110ca7e;
    *(uint16_t *)(arg1 + 0x34) = 5;
  }
LAB_004deed7:
  local_6a = -1;
  if ((*(int *)(arg1 + 0x30) == 1) && (*(short *)(arg1 + 0x2a) != 0)) {
    puVar10 = *(ushort **)(arg1 + 0x40);
    if (*puVar10 == 0xffff) {
      local_6a = 0;
    }
    else {
      sVar4 = 1;
      do {
        local_6a = sVar4;
        puVar10 = puVar10 + 1;
        if (local_6a == *(short *)(arg1 + 0x2a)) {
          local_6a = -1;
          goto LAB_004deef1;
        }
        sVar4 = local_6a + 1;
      } while (*puVar10 != 0xffff);
    }
    *puVar10 = uVar5;
    uVar5 = *(ushort *)(arg1 + 0x28);
  }
LAB_004deef1:
  puVar15 = (uint64_t *)((ulong)uVar5 * 0xb68 + *(long *)(arg1 + 0x38));
  *puVar15 = *puVar11;
  *(uint32_t *)(puVar15 + 1) = *(uint32_t *)(puVar11 + 1);
  *(uint32_t *)((long)puVar15 + 0xc) = *(uint32_t *)((long)puVar11 + 0xc);
  *(uint32_t *)(puVar15 + 2) = *(uint32_t *)(puVar11 + 2);
  *(uint32_t *)((long)puVar15 + 0x14) = *(uint32_t *)((long)puVar11 + 0x14);
  *(uint32_t *)(puVar15 + 3) = *(uint32_t *)(puVar11 + 3);
  *(uint32_t *)((long)puVar15 + 0x1c) = *(uint32_t *)((long)puVar11 + 0x1c);
  Vector2__operator_assign((Vector2 *)(puVar15 + 4),(Vector2 *)(puVar11 + 4));
  puVar1 = puVar15 + 5;
  puVar2 = puVar11 + 5;
  puVar13 = puVar2;
  puVar14 = puVar1;
  do {
    Matrix4x4__operator_assign((Matrix4x4 *)(puVar14 + 1),(Matrix4x4 *)(puVar13 + 1));
    puVar14[9] = puVar13[9];
    *(uint32_t *)(puVar14 + 10) = *(uint32_t *)(puVar13 + 10);
    *(uint64_t *)((long)puVar15 + (long)puVar14 + (0x80 - (long)puVar1)) =
         *(uint64_t *)((long)puVar11 + (long)puVar13 + (0x80 - (long)puVar2));
    *(uint64_t *)((long)puVar15 + (long)puVar14 + (0x88 - (long)puVar1)) =
         *(uint64_t *)((long)puVar11 + (long)puVar13 + (0x88 - (long)puVar2));
    *(uint64_t *)((long)puVar15 + (long)puVar14 + (0x90 - (long)puVar1)) =
         *(uint64_t *)((long)puVar11 + (long)puVar13 + (0x90 - (long)puVar2));
    *(uint64_t *)((long)puVar15 + (long)puVar14 + (0x98 - (long)puVar1)) =
         *(uint64_t *)((long)puVar11 + (long)puVar13 + (0x98 - (long)puVar2));
    *(uint64_t *)((long)puVar15 + (long)puVar14 + (0xa0 - (long)puVar1)) =
         *(uint64_t *)((long)puVar11 + (long)puVar13 + (0xa0 - (long)puVar2));
    *(uint64_t *)((long)puVar15 + (long)puVar14 + (0xa8 - (long)puVar1)) =
         *(uint64_t *)((long)puVar11 + (long)puVar13 + (0xa8 - (long)puVar2));
    *(uint64_t *)((long)puVar15 + (long)puVar14 + (0xb0 - (long)puVar1)) =
         *(uint64_t *)((long)puVar11 + (long)puVar13 + (0xb0 - (long)puVar2));
    *(uint64_t *)((long)puVar15 + (long)puVar14 + (0xb8 - (long)puVar1)) =
         *(uint64_t *)((long)puVar11 + (long)puVar13 + (0xb8 - (long)puVar2));
    *(uint64_t *)((long)puVar15 + (long)puVar14 + (0xc0 - (long)puVar1)) =
         *(uint64_t *)((long)puVar11 + (long)puVar13 + (0xc0 - (long)puVar2));
    Vector2__operator_assign((Vector2 *)(puVar14 + 0x14),(Vector2 *)(puVar13 + 0x14));
    Vector2__operator_assign((Vector2 *)(puVar14 + 0x15),(Vector2 *)(puVar13 + 0x15));
    Vector2__operator_assign((Vector2 *)(puVar14 + 0x16),(Vector2 *)(puVar13 + 0x16));
    Vector2__operator_assign((Vector2 *)(puVar14 + 0x17),(Vector2 *)(puVar13 + 0x17));
    Vector2__operator_assign((Vector2 *)(puVar14 + 0x18),(Vector2 *)(puVar13 + 0x18));
    Vector2__operator_assign((Vector2 *)(puVar14 + 0x19),(Vector2 *)(puVar13 + 0x19));
    Vector2__operator_assign((Vector2 *)(puVar14 + 0x1a),(Vector2 *)(puVar13 + 0x1a));
    *(uint32_t *)((long)puVar15 + (long)puVar14 + (0x100 - (long)puVar1)) =
         *(uint32_t *)((long)puVar11 + (long)puVar13 + (0x100 - (long)puVar2));
    Vector2__operator_assign((Vector2 *)((long)puVar14 + 0xdc),(Vector2 *)((long)puVar13 + 0xdc));
    Vector2__operator_assign((Vector2 *)((long)puVar14 + 0xe4),(Vector2 *)((long)puVar13 + 0xe4));
    Vector2__operator_assign((Vector2 *)((long)puVar14 + 0xec),(Vector2 *)((long)puVar13 + 0xec));
    *(uint32_t *)(puVar14 + 0x1f) = *(uint32_t *)(puVar13 + 0x1f);
    *(uint32_t *)((long)puVar14 + 0xfc) = *(uint32_t *)((long)puVar13 + 0xfc);
    *(uint32_t *)((long)puVar15 + (long)puVar14 + (0x128 - (long)puVar1)) =
         *(uint32_t *)((long)puVar11 + (long)puVar13 + (0x128 - (long)puVar2));
    *(uint32_t *)((long)puVar15 + (long)puVar14 + (300 - (long)puVar1)) =
         *(uint32_t *)((long)puVar11 + (long)puVar13 + (300 - (long)puVar2));
    *(uint32_t *)((long)puVar15 + (long)puVar14 + (0x130 - (long)puVar1)) =
         *(uint32_t *)((long)puVar11 + (long)puVar13 + (0x130 - (long)puVar2));
    *(uint32_t *)((long)puVar15 + (long)puVar14 + (0x134 - (long)puVar1)) =
         *(uint32_t *)((long)puVar11 + (long)puVar13 + (0x134 - (long)puVar2));
    *(uint32_t *)(puVar14 + 0x22) = *(uint32_t *)(puVar13 + 0x22);
    puVar3 = puVar13 + 0x23;
    puVar13 = puVar13 + 0x24;
    puVar14[0x23] = *puVar3;
    puVar14 = puVar14 + 0x24;
  } while (puVar13 != puVar11 + 0x16d);
  *(short *)(arg1 + 0x28) = *(short *)(arg1 + 0x28) + 1;
  return local_6a;
}

/* ======================================================================
 * Add__004df390  (Ghidra `Add` @ 004df390)
 * Signature: uint8_t __stdcall Add(SMBCurrUnlockBlock * arg1, int arg2)
 * Calls: `free`, `malloc`, `memcpy`
 * Called by: (none)
 */
/* ResizeableArray_SMBCurrUnlockBlock__Add(SMBCurrUnlockBlock const&, int) [clone .constprop.204]
    */

short ResizeableArray_SMBCurrUnlockBlock__Add(SMBCurrUnlockBlock *arg1,int arg2)

{
  void *pvVar1;
  uint uVar2;
  void *pvVar3;
  uint64_t *puVar4;
  void *pvVar5;
  short sVar6;
  ulong uVar7;
  short *psVar8;
  uint uVar9;
  uint32_t in_register_00000034;
  uint64_t *puVar10;
  ulong uVar11;
  ushort uVar12;
  bool bVar13;
  byte bVar14;
  
  puVar10 = (uint64_t *)CONCAT44(in_register_00000034,arg2);
  bVar14 = 0;
  if (*(int *)(arg1 + 0x48) == -0x5eef3582) {
    uVar9 = (uint)*(ushort *)(arg1 + 0x28);
    if (*(ushort *)(arg1 + 0x2a) <= *(ushort *)(arg1 + 0x28)) {
      uVar12 = *(ushort *)(arg1 + 0x2a) + *(short *)(arg1 + 0x34);
      uVar7 = (ulong)(byte)arg1[0x2c];
      pvVar3 = (void *)0x0;
      pvVar1 = *(void **)(arg1 + 0x38);
      *(ushort *)(arg1 + 0x2a) = uVar12;
      uVar11 = (ulong)uVar12 * 0x20;
      pvVar5 = malloc(uVar7 + 0x10 + uVar11);
      if (pvVar5 != (void *)0x0) {
        pvVar3 = (void *)((long)pvVar5 + 0x10U + (uVar7 - ((long)pvVar5 + 0x10U) % uVar7) % uVar7);
        *(ulong *)((long)pvVar3 + -0x10) = uVar11;
        *(void **)((long)pvVar3 + -8) = pvVar5;
        if (pvVar1 != (void *)0x0) {
          uVar7 = *(ulong *)((long)pvVar1 + -0x10);
          if (uVar11 <= *(ulong *)((long)pvVar1 + -0x10)) {
            uVar7 = uVar11;
          }
          memcpy(pvVar3,pvVar1,uVar7);
          free(*(void **)((long)pvVar1 + -8));
        }
      }
      pvVar1 = *(void **)(arg1 + 0x40);
      *(void **)(arg1 + 0x38) = pvVar3;
      if (pvVar1 != (void *)0x0) {
        uVar12 = *(ushort *)(arg1 + 0x2a);
        uVar7 = (ulong)(byte)arg1[0x2c];
        pvVar3 = (void *)0x0;
        uVar11 = (ulong)uVar12 * 2;
        pvVar5 = malloc(uVar7 + 0x10 + uVar11);
        if (pvVar5 != (void *)0x0) {
          pvVar3 = (void *)((long)pvVar5 + 0x10U + (uVar7 - ((long)pvVar5 + 0x10U) % uVar7) % uVar7)
          ;
          *(void **)((long)pvVar3 + -8) = pvVar5;
          *(ulong *)((long)pvVar3 + -0x10) = uVar11;
          uVar7 = *(ulong *)((long)pvVar1 + -0x10);
          if (uVar11 <= *(ulong *)((long)pvVar1 + -0x10)) {
            uVar7 = uVar11;
          }
          memcpy(pvVar3,pvVar1,uVar7);
          free(*(void **)((long)pvVar1 + -8));
          uVar12 = *(ushort *)(arg1 + 0x2a);
        }
        uVar9 = (uint)*(ushort *)(arg1 + 0x28);
        *(void **)(arg1 + 0x40) = pvVar3;
        if (uVar12 <= *(ushort *)(arg1 + 0x28)) goto LAB_004df478;
        while( true ) {
          uVar2 = uVar9 & 0xffff;
          uVar9 = uVar9 + 1;
          *(uint16_t *)((long)pvVar3 + (ulong)uVar2 * 2) = 0xffff;
          if (uVar12 <= (ushort)uVar9) break;
          pvVar3 = *(void **)(arg1 + 0x40);
        }
      }
      uVar9 = (uint)*(ushort *)(arg1 + 0x28);
    }
  }
  else {
    uVar11 = (ulong)(byte)arg1[0x2c];
    *(uint32_t *)(arg1 + 0x30) = 0;
    pvVar3 = malloc(uVar11 + 0xb0);
    puVar4 = (uint64_t *)0x0;
    if (pvVar3 != (void *)0x0) {
      puVar4 = (uint64_t *)
               ((long)pvVar3 + 0x10U + (uVar11 - ((long)pvVar3 + 0x10U) % uVar11) % uVar11);
      puVar4[-2] = 0xa0;
      puVar4[-1] = pvVar3;
    }
    bVar13 = ((ulong)puVar4 & 1) != 0;
    *(uint64_t **)(arg1 + 0x38) = puVar4;
    uVar11 = 0xa0;
    if (bVar13) {
      *(uint8_t *)puVar4 = 0;
      uVar11 = 0x9f;
      puVar4 = (uint64_t *)((long)puVar4 + 1);
    }
    if (((ulong)puVar4 & 2) != 0) {
      *(uint16_t *)puVar4 = 0;
      uVar11 = (ulong)((int)uVar11 - 2);
      puVar4 = (uint64_t *)((long)puVar4 + 2);
    }
    if (((ulong)puVar4 & 4) != 0) {
      *(uint32_t *)puVar4 = 0;
      uVar11 = (ulong)((int)uVar11 - 4);
      puVar4 = (uint64_t *)((long)puVar4 + 4);
    }
    for (uVar7 = uVar11 >> 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar4 = 0;
      puVar4 = puVar4 + (ulong)bVar14 * -2 + 1;
    }
    if ((uVar11 & 4) != 0) {
      *(uint32_t *)puVar4 = 0;
      puVar4 = (uint64_t *)((long)puVar4 + 4);
    }
    if ((uVar11 & 2) != 0) {
      *(uint16_t *)puVar4 = 0;
      puVar4 = (uint64_t *)((long)puVar4 + 2);
    }
    if (bVar13) {
      *(uint8_t *)puVar4 = 0;
    }
    *(uint16_t *)(arg1 + 0x28) = 0;
    *(uint16_t *)(arg1 + 0x2a) = 5;
    uVar9 = 0;
    *(uint32_t *)(arg1 + 0x48) = 0xa110ca7e;
    *(uint16_t *)(arg1 + 0x34) = 5;
  }
LAB_004df478:
  sVar6 = -1;
  if ((*(int *)(arg1 + 0x30) == 1) && (*(short *)(arg1 + 0x2a) != 0)) {
    psVar8 = *(short **)(arg1 + 0x40);
    if (*psVar8 == -1) {
      sVar6 = 0;
    }
    else {
      sVar6 = 0;
      do {
        psVar8 = psVar8 + 1;
        sVar6 = sVar6 + 1;
        if (sVar6 == *(short *)(arg1 + 0x2a)) {
          sVar6 = -1;
          goto LAB_004df489;
        }
      } while (*psVar8 != -1);
    }
    *psVar8 = (short)uVar9;
    uVar9 = (uint)*(ushort *)(arg1 + 0x28);
  }
LAB_004df489:
  puVar4 = (uint64_t *)((ulong)uVar9 * 0x20 + *(long *)(arg1 + 0x38));
  *puVar4 = *puVar10;
  puVar4[1] = puVar10[1];
  puVar4[2] = puVar10[2];
  *(uint32_t *)(puVar4 + 3) = *(uint32_t *)(puVar10 + 3);
  *(short *)(arg1 + 0x28) = *(short *)(arg1 + 0x28) + 1;
  return sVar6;
}

/* ======================================================================
 * ApplyGravityOrbForce  (Ghidra `ApplyGravityOrbForce` @ 004e2710)
 * Signature: uint8_t __stdcall ApplyGravityOrbForce(SceneObject2D * arg1, SMBGravityOrb * arg2)
 * Calls: `Vector2__operator_div_assign__005be2c0`, `Vector2__operator_minus__005be180`, `Vector2__operator_mul__005be200`, `Vector2__operator_plus_assign`
 * Called by: `ApplyObstacleForces`
 */
/* ApplyGravityOrbForce(SceneObject2D*, SMBGravityOrb*) */

uint64_t ApplyGravityOrbForce(SceneObject2D *arg1,SMBGravityOrb *arg2)

{
  long lVar1;
  uint64_t uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint32_t local_78;
  uint32_t local_74;
  Vector2 local_68 [16];
  Vector2 local_58 [16];
  Vector2 local_48 [16];
  Vector2 local_38 [16];
  Vector2 local_28 [16];
  
  uVar2 = 0;
  lVar1 = *(long *)arg2;
  fVar5 = (float)*(int *)(lVar1 + 0x54);
  if (fVar5 * fVar5 != 0.0) {
    local_74 = *(uint32_t *)(lVar1 + 0x28);
    local_78 = *(uint32_t *)(lVar1 + 0x24);
    Vector2__operator_minus__005be180(local_68,(Vector2 *)&local_78);
    fVar6 = (float)*(int *)(*(long *)arg2 + 0x58);
    fVar3 = (float)Vector2__Length(local_68);
    fVar4 = fVar3 * fVar3;
    if (fVar4 <= fVar5 * fVar5) {
      if (fVar6 * fVar6 <= fVar4) {
        if (0.0 < fVar3) {
          Vector2__operator_div_assign__005be2c0(local_68,fVar3);
        }
        Vector2__operator_mul__005be200(local_58,*(float *)(*(long *)arg2 + 0x4c));
        Vector2__operator_mul__005be200(local_48,DAT_005be894 /* R:1.0f */ - fVar3 / fVar5);
        Vector2__operator_plus_assign((Vector2 *)(arg1 + 0xec),local_48);
        return 1;
      }
    }
    else if (fVar6 * fVar6 <= fVar4) {
      return 0;
    }
    uVar2 = 0;
    if (fVar6 != 0.0) {
      if (0.0 < fVar3) {
        Vector2__operator_div_assign__005be2c0(local_68,fVar3);
      }
      uVar2 = 1;
      Vector2__operator_mul__005be200(local_38,*(float *)(*(long *)arg2 + 0x50));
      Vector2__operator_mul__005be200(local_28,DAT_005be894 /* R:1.0f */ - fVar3 / fVar6);
      Vector2__operator_plus_assign((Vector2 *)(arg1 + 0xec),local_28);
    }
  }
  return uVar2;
}

/* ======================================================================
 * ApplyObstacleForces  (Ghidra `ApplyObstacleForces` @ 004e89a0)
 * Signature: uint8_t __stdcall ApplyObstacleForces(SceneObject2D * arg1, Bounds * arg2)
 * Calls: `ApplyGravityOrbForce`, `TileLevel__TileLineOfSight`, `Vector2__operator_assign`, `Vector2__operator_minus__005be180`, `Vector2__operator_mul__005be200`, `Vector2__operator_plus__005be140`, `Vector2__operator_plus_assign`
 * Called by: (none)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SMBPalette__ApplyObstacleForces(SceneObject2D*, Bounds*) */

uint64_t SMBPalette__ApplyObstacleForces(SceneObject2D *arg1,Bounds *arg2)

{
  Vector2 *pVVar1;
  int iVar2;
  long *plVar3;
  ushort uVar4;
  uint uVar5;
  ulong uVar6;
  uint64_t uVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  uint32_t local_e8;
  uint32_t local_e4;
  Vector2 local_d8 [16];
  Vector2 local_c8 [16];
  Vector2 local_b8 [16];
  Vector2 local_a8 [16];
  Vector2 local_98 [16];
  Vector2 local_88 [16];
  Vector2 local_78 [16];
  Vector2 local_68 [16];
  Vector2 local_58 [16];
  Vector2 local_48 [24];
  
  uVar7 = 0;
  uVar4 = *(ushort *)(arg1 + 0x3fb8);
  if (uVar4 != 0) {
    uVar6 = 0;
    do {
      while( true ) {
        lVar8 = (uVar6 & 0xffff) * 0x28;
        plVar3 = (long *)(lVar8 + *(long *)(arg1 + 0x3fc8));
        local_e8 = *(uint32_t *)(*plVar3 + 0x24);
        local_e4 = *(uint32_t *)(*plVar3 + 0x28);
        if (*(float *)(*plVar3 + 0x50) == 0.0) break;
        pVVar1 = (Vector2 *)(arg2 + 0xa0);
        iVar2 = TileLevel__TileLineOfSight
                          (*(TileLevel **)(SuperMeatBoy + 0x40),pVVar1,(Vector2 *)&local_e8,local_d8
                          );
        if (iVar2 != 0) {
          Vector2__operator_minus__005be180(local_c8,pVVar1);
          fVar9 = (float)Vector2__Dot((Vector2 *)(lVar8 + *(long *)(arg1 + 0x3fc8) + 0x20),
                                      local_c8);
          if (0.0 <= fVar9) {
            Vector2__operator_plus__005be140(local_b8,(Vector2 *)(lVar8 + *(long *)(arg1 + 0x3fc8) + 0x10));
            Vector2__operator_minus__005be180(local_a8,pVVar1);
            Vector2__operator_minus__005be180(local_98);
            fVar9 = (float)Vector2__Dot(local_98,local_a8);
            if (fVar9 < 0.0) {
              Vector2__operator_plus__005be140(local_88,(Vector2 *)(lVar8 + *(long *)(arg1 + 0x3fc8) + 0x18));
              Vector2__operator_assign(local_b8,local_88);
              Vector2__operator_minus__005be180(local_78,pVVar1);
              Vector2__operator_assign(local_a8,local_78);
              fVar9 = (float)Vector2__Dot((Vector2 *)(lVar8 + *(long *)(arg1 + 0x3fc8) + 8),
                                          local_a8);
              if (fVar9 < 0.0) {
                Vector2__operator_minus__005be180(local_68,(Vector2 *)&local_e8);
                fVar10 = (float)Vector2__Length(local_68);
                fVar9 = *(float *)(*(long *)(lVar8 + *(long *)(arg1 + 0x3fc8)) + 0x50);
                if (fVar9 <= fVar10) {
                  fVar10 = fVar9;
                }
                fVar9 = DAT_005be894 /* R:1.0f */ - fVar10 / fVar9;
                if (DAT_005be6e4 /* R:0.5f */ <= fVar9) {
                  fVar9 = fVar9 * _DAT_005bff44 /* R:5.0f */;
                }
                if (0.0 < fVar9) {
                  uVar7 = 1;
                  Vector2__operator_mul__005be200(local_58,*(float *)(*(long *)(lVar8 + *(long *)(arg1 +
                                                                                    0x3fc8)) + 0x4c)
                                    );
                  Vector2__operator_mul__005be200(local_48,fVar9);
                  Vector2__operator_plus_assign((Vector2 *)(arg2 + 0xec),local_48);
                  uVar4 = *(ushort *)(arg1 + 0x3fb8);
                  break;
                }
              }
            }
          }
        }
        uVar4 = *(ushort *)(arg1 + 0x3fb8);
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulong)uVar5;
        if ((int)(uint)uVar4 <= (int)uVar5) goto LAB_004e8a57;
      }
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulong)uVar5;
    } while ((int)uVar5 < (int)(uint)uVar4);
  }
LAB_004e8a57:
  if (*(short *)(arg1 + 0x41c0) != 0) {
    uVar6 = 0;
    do {
      iVar2 = ApplyGravityOrbForce
                        ((SceneObject2D *)arg2,
                         (SMBGravityOrb *)(*(long *)(arg1 + 0x41d0) + (uVar6 & 0xffff) * 8));
      if (iVar2 == 1) {
        uVar7 = 1;
      }
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulong)uVar5;
    } while ((int)uVar5 < (int)(uint)*(ushort *)(arg1 + 0x41c0));
  }
  return uVar7;
}

/* ======================================================================
 * ApplyPlatformVelocity  (Ghidra `ApplyPlatformVelocity` @ 004ea3b0)
 * Signature: uint8_t __stdcall ApplyPlatformVelocity(SceneObject2D * arg1, SMBPlatform * arg2, TileCollisionInfo * arg3, Vector2 * arg4)
 * Calls: `GSetPieceWayPoints__GetWayPointGroup`
 * Called by: (none)
 */
/* ApplyPlatformVelocity(SceneObject2D*, SMBPlatform&, TileCollisionInfo const&, Vector2 const&) */

void ApplyPlatformVelocity
               (SceneObject2D *arg1,SMBPlatform *arg2,TileCollisionInfo *arg3,
               Vector2 *arg4)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  lVar1 = GSetPieceWayPoints__GetWayPointGroup(SetPieceWayPoints,*(TileLevelSetPiece **)arg2);
  if (lVar1 != 0) {
    fVar3 = *(float *)(lVar1 + 0x68);
    fVar2 = *(float *)(lVar1 + 0x6c);
    if ((float)(DAT_005be880 /* R:u32=2147483647 */ & (uint)fVar2) < (float)((uint)fVar3 & DAT_005be880 /* R:u32=2147483647 */)) {
      fVar2 = 0.0;
    }
    else {
      fVar3 = 0.0;
    }
    if (((*(int *)(arg3 + 0x24) == 0) || ((0.0 < fVar3 && (0.0 < *(float *)arg4)))) ||
       ((fVar3 < 0.0 && (*(float *)arg4 <= 0.0 && *(float *)arg4 != 0.0)))) {
      *(float *)(arg1 + 200) = fVar3 + *(float *)(arg1 + 200);
    }
    *(float *)(arg1 + 0xcc) = *(float *)(arg1 + 0xcc) + fVar2;
    if (0.0 < fVar2) {
      if (*(int *)(arg3 + 0x20) == 0) {
        return;
      }
      *(uint32_t *)(arg1 + 0xcc) = 0;
    }
    if (*(int *)(arg3 + 0x20) == 1) {
      *(uint32_t *)(arg1 + 200) = 0;
      if (fVar2 <= 0.0) {
        *(float *)(arg1 + 0xbc) = fVar2;
      }
      else {
        *(uint32_t *)(arg1 + 0xcc) = 0;
      }
    }
  }
  return;
}

/* ======================================================================
 * Add__00501060  (Ghidra `Add` @ 00501060)
 * Signature: uint8_t __thiscall Add(ResizeableArray<SMBPlatform> * this, SMBPlatform * arg1, int arg2)
 * Calls: `CriticalSection__Lock`, `CriticalSection__Unlock`, `free`, `malloc`, `memcpy`
 * Called by: (none)
 */
/* ResizeableArray_SMBPlatform__Add(SMBPlatform const&, int) */

short __thiscall
ResizeableArray_SMBPlatform__Add
          (ResizeableArray<SMBPlatform> *this,SMBPlatform *arg1,int arg2)

{
  int iVar1;
  void *pvVar2;
  short sVar3;
  ushort uVar4;
  void *pvVar5;
  void *pvVar6;
  ulong uVar7;
  ushort uVar8;
  ulong uVar9;
  ushort *puVar10;
  uint64_t *puVar11;
  short sVar12;
  bool bVar13;
  byte bVar14;
  
  bVar14 = 0;
  if (arg2 == 1) {
    CriticalSection__Lock((CriticalSection *)this,1);
  }
  if (*(int *)(this + 0x48) == -0x5eef3582) {
    uVar4 = *(ushort *)(this + 0x28);
    if (*(ushort *)(this + 0x2a) <= uVar4) {
      uVar4 = *(ushort *)(this + 0x2a) + *(short *)(this + 0x34);
      uVar7 = (ulong)(byte)this[0x2c];
      pvVar5 = (void *)0x0;
      pvVar2 = *(void **)(this + 0x38);
      *(ushort *)(this + 0x2a) = uVar4;
      uVar9 = (ulong)uVar4 * 0x18;
      pvVar6 = malloc(uVar7 + 0x10 + uVar9);
      if (pvVar6 != (void *)0x0) {
        pvVar5 = (void *)((long)pvVar6 + 0x10U + (uVar7 - ((long)pvVar6 + 0x10U) % uVar7) % uVar7);
        *(ulong *)((long)pvVar5 + -0x10) = uVar9;
        *(void **)((long)pvVar5 + -8) = pvVar6;
        if (pvVar2 != (void *)0x0) {
          uVar7 = *(ulong *)((long)pvVar2 + -0x10);
          if (uVar9 <= *(ulong *)((long)pvVar2 + -0x10)) {
            uVar7 = uVar9;
          }
          memcpy(pvVar5,pvVar2,uVar7);
          free(*(void **)((long)pvVar2 + -8));
        }
      }
      pvVar2 = *(void **)(this + 0x40);
      *(void **)(this + 0x38) = pvVar5;
      if (pvVar2 != (void *)0x0) {
        uVar8 = *(ushort *)(this + 0x2a);
        uVar7 = (ulong)(byte)this[0x2c];
        pvVar5 = (void *)0x0;
        uVar9 = (ulong)uVar8 * 2;
        pvVar6 = malloc(uVar7 + 0x10 + uVar9);
        if (pvVar6 != (void *)0x0) {
          pvVar5 = (void *)((long)pvVar6 + 0x10U + (uVar7 - ((long)pvVar6 + 0x10U) % uVar7) % uVar7)
          ;
          *(ulong *)((long)pvVar5 + -0x10) = uVar9;
          *(void **)((long)pvVar5 + -8) = pvVar6;
          uVar7 = *(ulong *)((long)pvVar2 + -0x10);
          if (uVar9 <= *(ulong *)((long)pvVar2 + -0x10)) {
            uVar7 = uVar9;
          }
          memcpy(pvVar5,pvVar2,uVar7);
          free(*(void **)((long)pvVar2 + -8));
          uVar8 = *(ushort *)(this + 0x2a);
        }
        uVar4 = *(ushort *)(this + 0x28);
        *(void **)(this + 0x40) = pvVar5;
        if (uVar8 <= uVar4) goto LAB_00501151;
        while( true ) {
          uVar9 = (ulong)uVar4;
          uVar4 = uVar4 + 1;
          *(uint16_t *)((long)pvVar5 + uVar9 * 2) = 0xffff;
          if (uVar8 <= uVar4) break;
          pvVar5 = *(void **)(this + 0x40);
        }
      }
      iVar1 = *(int *)(this + 0x30);
      uVar4 = *(ushort *)(this + 0x28);
      goto joined_r0x00501327;
    }
  }
  else {
    uVar9 = (ulong)(byte)this[0x2c];
    *(uint32_t *)(this + 0x30) = 0;
    pvVar5 = malloc(uVar9 + 0x88);
    puVar11 = (uint64_t *)0x0;
    if (pvVar5 != (void *)0x0) {
      puVar11 = (uint64_t *)
                ((long)pvVar5 + 0x10U + (uVar9 - ((long)pvVar5 + 0x10U) % uVar9) % uVar9);
      puVar11[-2] = 0x78;
      puVar11[-1] = pvVar5;
    }
    bVar13 = ((ulong)puVar11 & 1) != 0;
    *(uint64_t **)(this + 0x38) = puVar11;
    uVar9 = 0x78;
    if (bVar13) {
      *(uint8_t *)puVar11 = 0;
      uVar9 = 0x77;
      puVar11 = (uint64_t *)((long)puVar11 + 1);
    }
    if (((ulong)puVar11 & 2) != 0) {
      *(uint16_t *)puVar11 = 0;
      uVar9 = (ulong)((int)uVar9 - 2);
      puVar11 = (uint64_t *)((long)puVar11 + 2);
    }
    if (((ulong)puVar11 & 4) != 0) {
      *(uint32_t *)puVar11 = 0;
      uVar9 = (ulong)((int)uVar9 - 4);
      puVar11 = (uint64_t *)((long)puVar11 + 4);
    }
    for (uVar7 = uVar9 >> 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar11 = 0;
      puVar11 = puVar11 + (ulong)bVar14 * -2 + 1;
    }
    if ((uVar9 & 4) != 0) {
      *(uint32_t *)puVar11 = 0;
      puVar11 = (uint64_t *)((long)puVar11 + 4);
    }
    if ((uVar9 & 2) != 0) {
      *(uint16_t *)puVar11 = 0;
      puVar11 = (uint64_t *)((long)puVar11 + 2);
    }
    if (bVar13) {
      *(uint8_t *)puVar11 = 0;
    }
    *(uint16_t *)(this + 0x28) = 0;
    *(uint16_t *)(this + 0x2a) = 5;
    uVar4 = 0;
    *(uint32_t *)(this + 0x48) = 0xa110ca7e;
    *(uint16_t *)(this + 0x34) = 5;
  }
LAB_00501151:
  iVar1 = *(int *)(this + 0x30);
joined_r0x00501327:
  sVar12 = -1;
  if (iVar1 == 1) {
    sVar12 = -1;
    if (*(short *)(this + 0x2a) != 0) {
      puVar10 = *(ushort **)(this + 0x40);
      if (*puVar10 == 0xffff) {
        sVar12 = 0;
      }
      else {
        sVar3 = 1;
        do {
          sVar12 = sVar3;
          puVar10 = puVar10 + 1;
          if (sVar12 == *(short *)(this + 0x2a)) {
            sVar12 = -1;
            goto LAB_00501163;
          }
          sVar3 = sVar12 + 1;
        } while (*puVar10 != 0xffff);
      }
      *puVar10 = uVar4;
      uVar4 = *(ushort *)(this + 0x28);
    }
  }
LAB_00501163:
  puVar11 = (uint64_t *)(*(long *)(this + 0x38) + (ulong)uVar4 * 0x18);
  *puVar11 = *(uint64_t *)arg1;
  *(uint32_t *)(puVar11 + 1) = *(uint32_t *)(arg1 + 8);
  *(uint32_t *)((long)puVar11 + 0xc) = *(uint32_t *)(arg1 + 0xc);
  *(uint32_t *)(puVar11 + 2) = *(uint32_t *)(arg1 + 0x10);
  *(uint32_t *)((long)puVar11 + 0x14) = *(uint32_t *)(arg1 + 0x14);
  *(short *)(this + 0x28) = *(short *)(this + 0x28) + 1;
  if (arg2 == 1) {
    CriticalSection__Unlock((CriticalSection *)this);
  }
  return sVar12;
}

/* ======================================================================
 * Add__00501440  (Ghidra `Add` @ 00501440)
 * Signature: uint8_t __thiscall Add(ResizeableArray<SMBPaletteEmitter> * this, SMBPaletteEmitter * arg1, int arg2)
 * Calls: `CriticalSection__Lock`, `CriticalSection__Unlock`, `free`, `malloc`, `memcpy`
 * Called by: (none)
 */
/* ResizeableArray_SMBPaletteEmitter__Add(SMBPaletteEmitter const&, int) */

short __thiscall
ResizeableArray_SMBPaletteEmitter__Add
          (ResizeableArray<SMBPaletteEmitter> *this,SMBPaletteEmitter *arg1,int arg2)

{
  void *pvVar1;
  void *pvVar2;
  uint64_t *puVar3;
  void *pvVar4;
  ulong uVar5;
  ushort uVar6;
  ushort *puVar7;
  ulong uVar8;
  short sVar9;
  ushort uVar10;
  bool bVar11;
  byte bVar12;
  
  bVar12 = 0;
  if (arg2 == 1) {
    CriticalSection__Lock((CriticalSection *)this,1);
  }
  if (*(int *)(this + 0x48) == -0x5eef3582) {
    uVar10 = *(ushort *)(this + 0x28);
    if (*(ushort *)(this + 0x2a) <= uVar10) {
      uVar10 = *(ushort *)(this + 0x2a) + *(short *)(this + 0x34);
      uVar8 = (ulong)(byte)this[0x2c];
      pvVar2 = (void *)0x0;
      pvVar1 = *(void **)(this + 0x38);
      *(ushort *)(this + 0x2a) = uVar10;
      uVar5 = (ulong)uVar10 * 0x10;
      pvVar4 = malloc(uVar8 + 0x10 + uVar5);
      if (pvVar4 != (void *)0x0) {
        pvVar2 = (void *)((long)pvVar4 + 0x10U + (uVar8 - ((long)pvVar4 + 0x10U) % uVar8) % uVar8);
        *(ulong *)((long)pvVar2 + -0x10) = uVar5;
        *(void **)((long)pvVar2 + -8) = pvVar4;
        if (pvVar1 != (void *)0x0) {
          uVar8 = *(ulong *)((long)pvVar1 + -0x10);
          if (uVar5 <= *(ulong *)((long)pvVar1 + -0x10)) {
            uVar8 = uVar5;
          }
          memcpy(pvVar2,pvVar1,uVar8);
          free(*(void **)((long)pvVar1 + -8));
        }
      }
      pvVar1 = *(void **)(this + 0x40);
      *(void **)(this + 0x38) = pvVar2;
      if (pvVar1 != (void *)0x0) {
        uVar6 = *(ushort *)(this + 0x2a);
        uVar5 = (ulong)(byte)this[0x2c];
        pvVar2 = (void *)0x0;
        uVar8 = (ulong)uVar6 * 2;
        pvVar4 = malloc(uVar5 + 0x10 + uVar8);
        if (pvVar4 != (void *)0x0) {
          pvVar2 = (void *)((long)pvVar4 + 0x10U + (uVar5 - ((long)pvVar4 + 0x10U) % uVar5) % uVar5)
          ;
          *(ulong *)((long)pvVar2 + -0x10) = uVar8;
          *(void **)((long)pvVar2 + -8) = pvVar4;
          uVar5 = *(ulong *)((long)pvVar1 + -0x10);
          if (uVar8 <= *(ulong *)((long)pvVar1 + -0x10)) {
            uVar5 = uVar8;
          }
          memcpy(pvVar2,pvVar1,uVar5);
          free(*(void **)((long)pvVar1 + -8));
          uVar6 = *(ushort *)(this + 0x2a);
        }
        uVar10 = *(ushort *)(this + 0x28);
        *(void **)(this + 0x40) = pvVar2;
        if (uVar6 <= uVar10) goto LAB_0050152f;
        while( true ) {
          uVar8 = (ulong)uVar10;
          uVar10 = uVar10 + 1;
          *(uint16_t *)((long)pvVar2 + uVar8 * 2) = 0xffff;
          if (uVar6 <= uVar10) break;
          pvVar2 = *(void **)(this + 0x40);
        }
      }
      uVar10 = *(ushort *)(this + 0x28);
    }
  }
  else {
    uVar8 = (ulong)(byte)this[0x2c];
    *(uint32_t *)(this + 0x30) = 0;
    pvVar2 = malloc(uVar8 + 0x60);
    puVar3 = (uint64_t *)0x0;
    if (pvVar2 != (void *)0x0) {
      puVar3 = (uint64_t *)
               ((long)pvVar2 + 0x10U + (uVar8 - ((long)pvVar2 + 0x10U) % uVar8) % uVar8);
      puVar3[-2] = 0x50;
      puVar3[-1] = pvVar2;
    }
    bVar11 = ((ulong)puVar3 & 1) != 0;
    *(uint64_t **)(this + 0x38) = puVar3;
    uVar8 = 0x50;
    if (bVar11) {
      *(uint8_t *)puVar3 = 0;
      uVar8 = 0x4f;
      puVar3 = (uint64_t *)((long)puVar3 + 1);
    }
    if (((ulong)puVar3 & 2) != 0) {
      *(uint16_t *)puVar3 = 0;
      uVar8 = (ulong)((int)uVar8 - 2);
      puVar3 = (uint64_t *)((long)puVar3 + 2);
    }
    if (((ulong)puVar3 & 4) != 0) {
      *(uint32_t *)puVar3 = 0;
      uVar8 = (ulong)((int)uVar8 - 4);
      puVar3 = (uint64_t *)((long)puVar3 + 4);
    }
    for (uVar5 = uVar8 >> 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar3 = 0;
      puVar3 = puVar3 + (ulong)bVar12 * -2 + 1;
    }
    if ((uVar8 & 4) != 0) {
      *(uint32_t *)puVar3 = 0;
      puVar3 = (uint64_t *)((long)puVar3 + 4);
    }
    if ((uVar8 & 2) != 0) {
      *(uint16_t *)puVar3 = 0;
      puVar3 = (uint64_t *)((long)puVar3 + 2);
    }
    if (bVar11) {
      *(uint8_t *)puVar3 = 0;
    }
    *(uint16_t *)(this + 0x28) = 0;
    *(uint16_t *)(this + 0x2a) = 5;
    uVar10 = 0;
    *(uint32_t *)(this + 0x48) = 0xa110ca7e;
    *(uint16_t *)(this + 0x34) = 5;
  }
LAB_0050152f:
  sVar9 = -1;
  if ((*(int *)(this + 0x30) == 1) && (*(short *)(this + 0x2a) != 0)) {
    puVar7 = *(ushort **)(this + 0x40);
    if (*puVar7 == 0xffff) {
      sVar9 = 0;
    }
    else {
      sVar9 = 0;
      do {
        puVar7 = puVar7 + 1;
        sVar9 = sVar9 + 1;
        if (sVar9 == *(short *)(this + 0x2a)) {
          sVar9 = -1;
          goto LAB_00501541;
        }
      } while (*puVar7 != 0xffff);
    }
    *puVar7 = uVar10;
    uVar10 = *(ushort *)(this + 0x28);
  }
LAB_00501541:
  puVar3 = (uint64_t *)((ulong)uVar10 * 0x10 + *(long *)(this + 0x38));
  *puVar3 = *(uint64_t *)arg1;
  puVar3[1] = *(uint64_t *)(arg1 + 8);
  *(short *)(this + 0x28) = *(short *)(this + 0x28) + 1;
  if (arg2 == 1) {
    CriticalSection__Unlock((CriticalSection *)this);
  }
  return sVar9;
}

/* ======================================================================
 * AddPostLineRenderItem  (Ghidra `AddPostLineRenderItem` @ 005097f0)
 * Signature: uint8_t __stdcall AddPostLineRenderItem(char * arg1, FlashLibraryInstance * arg2, FlashMovieClip * arg3, FlashMovieClip * arg4, FlashAnimationLibrary * arg5, FlashLibraryInstance * arg6)
 * Calls: `FlashAnimationLibrary__GetClipIndex`, `FlashMovieClip__FindInstance`, `Vector2__operator_assign`
 * Called by: `SMBLevelPortalInterface__Initialize`
 */
/* AddPostLineRenderItem(char const*, FlashLibraryInstance*, FlashMovieClip*, FlashMovieClip*,
   FlashAnimationLibrary*, FlashLibraryInstance&) */

void AddPostLineRenderItem
               (char *arg1,FlashLibraryInstance *arg2,FlashMovieClip *arg3,
               FlashMovieClip *arg4,FlashAnimationLibrary *arg5,FlashLibraryInstance *arg6)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  iVar1 = FlashAnimationLibrary__GetClipIndex(arg5,arg1);
  lVar2 = FlashMovieClip__FindInstance(arg3,iVar1,0,(int *)0x0,0);
  lVar3 = FlashMovieClip__FindInstance(arg4,*(int *)(arg2 + 0x20),0,(int *)0x0,0);
  *(uint64_t *)(arg6 + 8) = *(uint64_t *)(lVar2 + 8);
  *(uint64_t *)(arg6 + 0x10) = *(uint64_t *)(lVar2 + 0x10);
  *(uint64_t *)(arg6 + 0x18) = *(uint64_t *)(lVar2 + 0x18);
  *(uint32_t *)(arg6 + 0x20) = *(uint32_t *)(lVar2 + 0x20);
  *(uint32_t *)(arg6 + 0x24) = *(uint32_t *)(lVar2 + 0x24);
  *(uint64_t *)(arg6 + 0x28) = *(uint64_t *)(lVar2 + 0x28);
  *(uint32_t *)(arg6 + 0x30) = *(uint32_t *)(lVar2 + 0x30);
  *(uint32_t *)(arg6 + 0x34) = *(uint32_t *)(lVar2 + 0x34);
  *(uint32_t *)(arg6 + 0x38) = *(uint32_t *)(lVar2 + 0x38);
  *(uint32_t *)(arg6 + 0x3c) = *(uint32_t *)(lVar2 + 0x3c);
  Vector2__operator_assign((Vector2 *)(arg6 + 0x40),(Vector2 *)(lVar2 + 0x40));
  Vector2__operator_assign((Vector2 *)(arg6 + 0x48),(Vector2 *)(lVar2 + 0x48));
  Vector2__operator_assign((Vector2 *)(arg6 + 0x50),(Vector2 *)(lVar2 + 0x50));
  *(uint32_t *)(arg6 + 0x58) = *(uint32_t *)(lVar2 + 0x58);
  *(uint32_t *)(arg6 + 0x5c) = *(uint32_t *)(lVar2 + 0x5c);
  *(uint32_t *)(arg6 + 0x60) = *(uint32_t *)(lVar2 + 0x60);
  *(uint64_t *)(arg6 + 100) = *(uint64_t *)(lVar2 + 100);
  *(uint64_t *)(arg6 + 0x6c) = *(uint64_t *)(lVar2 + 0x6c);
  *(uint64_t *)(arg6 + 0x74) = *(uint64_t *)(lVar2 + 0x74);
  *(uint64_t *)(arg6 + 0x7c) = *(uint64_t *)(lVar2 + 0x7c);
  *(uint32_t *)(arg6 + 0x84) = *(uint32_t *)(lVar2 + 0x84);
  *(uint64_t *)(arg6 + 0x88) = *(uint64_t *)(lVar2 + 0x88);
  *(uint64_t *)(arg6 + 0x90) = *(uint64_t *)(lVar2 + 0x90);
  *(uint32_t *)(arg6 + 0x98) = *(uint32_t *)(lVar2 + 0x98);
  *(uint32_t *)(arg6 + 0x9c) = *(uint32_t *)(lVar2 + 0x9c);
  *(float *)(arg6 + 0x30) = *(float *)(arg6 + 0x30) + *(float *)(lVar3 + 0x30);
  *(float *)(arg6 + 0x34) = *(float *)(arg6 + 0x34) + *(float *)(lVar3 + 0x34);
  *(float *)(arg6 + 0x38) = *(float *)(arg6 + 0x38) + *(float *)(lVar3 + 0x38);
  *(float *)(arg6 + 0x3c) = *(float *)(arg6 + 0x3c) + *(float *)(lVar3 + 0x3c);
  return;
}

/* ======================================================================
 * ConvertSDLJoystickStateToJoyState  (Ghidra `ConvertSDLJoystickStateToJoyState` @ 0056f8e0)
 * Signature: uint8_t __stdcall ConvertSDLJoystickStateToJoyState(tagSDLJoystick * arg1)
 * Calls: `FormatButtonProps`, `SDL_GameControllerGetAxis`, `SDL_GameControllerGetButton`, `System_GetTimeInMS`
 * Called by: `UpdateJoysticks`, `iptUpdateDevices`
 */
/* ConvertSDLJoystickStateToJoyState(tagSDLJoystick*) */

void ConvertSDLJoystickStateToJoyState(tagSDLJoystick *arg1)

{
  int iVar1;
  uint64_t uVar2;
  uint32_t *puVar3;
  long lVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  char cVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  bool bVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  uVar2 = *(uint64_t *)(arg1 + 8);
  puVar3 = *(uint32_t **)(arg1 + 0x10);
  lVar4 = *(long *)(arg1 + 0x18);
  sVar14 = SDL_GameControllerGetAxis(uVar2,0);
  sVar15 = SDL_GameControllerGetAxis(uVar2,1);
  sVar16 = SDL_GameControllerGetAxis(uVar2,2);
  sVar17 = SDL_GameControllerGetAxis(uVar2,3);
  uVar19 = (uint)-sVar15;
  uVar20 = (uint)sVar14;
  fVar23 = DAT_005db9a4 /* R:32767.0f */;
  if (sVar14 < 0) {
    fVar23 = DAT_005db9a0 /* R:32768.0f */;
  }
  fVar24 = DAT_005db9a4 /* R:32767.0f */;
  if (-sVar15 < 0) {
    fVar24 = DAT_005db9a0 /* R:32768.0f */;
  }
  fVar22 = 0.0;
  if (7999 < ((int)uVar20 >> 0x1f ^ uVar20) - ((int)uVar20 >> 0x1f)) {
    fVar22 = (float)(int)uVar20 / fVar23;
  }
  puVar3[1] = fVar22;
  fVar23 = 0.0;
  if (7999 < ((int)uVar19 >> 0x1f ^ uVar19) - ((int)uVar19 >> 0x1f)) {
    fVar23 = (float)(int)uVar19 / fVar24;
  }
  puVar3[2] = fVar23;
  puVar3[3] = 0;
  uVar20 = (uint)-sVar17;
  uVar19 = (uint)sVar16;
  fVar23 = DAT_005db9a4 /* R:32767.0f */;
  if (sVar16 < 0) {
    fVar23 = DAT_005db9a0 /* R:32768.0f */;
  }
  fVar24 = DAT_005db9a4 /* R:32767.0f */;
  if (-sVar17 < 0) {
    fVar24 = DAT_005db9a0 /* R:32768.0f */;
  }
  fVar22 = 0.0;
  if (7999 < ((int)uVar19 >> 0x1f ^ uVar19) - ((int)uVar19 >> 0x1f)) {
    fVar22 = (float)(int)uVar19 / fVar23;
  }
  puVar3[5] = fVar22;
  fVar23 = 0.0;
  if (7999 < ((int)uVar20 >> 0x1f ^ uVar20) - ((int)uVar20 >> 0x1f)) {
    fVar23 = (float)(int)uVar20 / fVar24;
  }
  bVar21 = ConvertSDLJoystickStateToJoyState(tagSDLJoystick*)::dwLastFrameTime == '\0';
  puVar3[6] = fVar23;
  puVar3[7] = 0;
  if ((bVar21) &&
     (iVar18 = __cxa_guard_acquire(&ConvertSDLJoystickStateToJoyState(tagSDLJoystick*)::
                                    dwLastFrameTime), iVar18 != 0)) {
                    /* try { // try from 00570170 to 00570174 has its CatchHandler @ 00570489 */
    ConvertSDLJoystickStateToJoyState(tagSDLJoystick*)::dwLastFrameTime = System_GetTimeInMS();
    __cxa_guard_release(&ConvertSDLJoystickStateToJoyState(tagSDLJoystick*)::dwLastFrameTime);
  }
  iVar18 = System_GetTimeInMS();
  uVar19 = iVar18 - ConvertSDLJoystickStateToJoyState(tagSDLJoystick*)::dwLastFrameTime;
  *puVar3 = 0;
  cVar13 = SDL_GameControllerGetButton(uVar2,0);
  FormatButtonProps((tagButtonProps *)(puVar3 + 9),(uint)(cVar13 != '\0'),uVar19);
  if (puVar3[9] != 0) {
    if (puVar3[9] == 1) {
      *puVar3 = 1;
      pcVar5 = *(code **)(lVar4 + 0x100);
    }
    else {
      pcVar5 = *(code **)(lVar4 + 0x100);
    }
    if ((pcVar5 != (code *)0x0) && (_Input_Callbacks_Allowed == 1)) {
      (*pcVar5)((tagButtonProps *)(puVar3 + 9),*(uint64_t *)(lVar4 + 0x108));
    }
  }
  cVar13 = SDL_GameControllerGetButton(uVar2,1);
  FormatButtonProps((tagButtonProps *)(puVar3 + 0xc),(uint)(cVar13 != '\0'),uVar19);
  if (puVar3[0xc] != 0) {
    if (puVar3[0xc] == 1) {
      *puVar3 = 1;
      pcVar5 = *(code **)(lVar4 + 0x110);
    }
    else {
      pcVar5 = *(code **)(lVar4 + 0x110);
    }
    if ((pcVar5 != (code *)0x0) && (_Input_Callbacks_Allowed == 1)) {
      (*pcVar5)((tagButtonProps *)(puVar3 + 0xc),*(uint64_t *)(lVar4 + 0x118));
    }
  }
  cVar13 = SDL_GameControllerGetButton(uVar2,2);
  FormatButtonProps((tagButtonProps *)(puVar3 + 0xf),(uint)(cVar13 != '\0'),uVar19);
  if (puVar3[0xf] != 0) {
    if (puVar3[0xf] == 1) {
      *puVar3 = 1;
      pcVar5 = *(code **)(lVar4 + 0x120);
    }
    else {
      pcVar5 = *(code **)(lVar4 + 0x120);
    }
    if ((pcVar5 != (code *)0x0) && (_Input_Callbacks_Allowed == 1)) {
      (*pcVar5)((tagButtonProps *)(puVar3 + 0xf),*(uint64_t *)(lVar4 + 0x128));
    }
  }
  cVar13 = SDL_GameControllerGetButton(uVar2,3);
  FormatButtonProps((tagButtonProps *)(puVar3 + 0x12),(uint)(cVar13 != '\0'),uVar19);
  if (puVar3[0x12] != 0) {
    if (puVar3[0x12] == 1) {
      *puVar3 = 1;
      pcVar5 = *(code **)(lVar4 + 0x130);
    }
    else {
      pcVar5 = *(code **)(lVar4 + 0x130);
    }
    if ((pcVar5 != (code *)0x0) && (_Input_Callbacks_Allowed == 1)) {
      (*pcVar5)((tagButtonProps *)(puVar3 + 0x12),*(uint64_t *)(lVar4 + 0x138));
    }
  }
  cVar13 = SDL_GameControllerGetButton(uVar2,9);
  FormatButtonProps((tagButtonProps *)(puVar3 + 0x15),(uint)(cVar13 != '\0'),uVar19);
  if (puVar3[0x15] != 0) {
    if (puVar3[0x15] == 1) {
      *puVar3 = 1;
      pcVar5 = *(code **)(lVar4 + 0x140);
    }
    else {
      pcVar5 = *(code **)(lVar4 + 0x140);
    }
    if ((pcVar5 != (code *)0x0) && (_Input_Callbacks_Allowed == 1)) {
      (*pcVar5)((tagButtonProps *)(puVar3 + 0x15),*(uint64_t *)(lVar4 + 0x148));
    }
  }
  cVar13 = SDL_GameControllerGetButton(uVar2,10);
  FormatButtonProps((tagButtonProps *)(puVar3 + 0x18),(uint)(cVar13 != '\0'),uVar19);
  if (puVar3[0x18] != 0) {
    if (puVar3[0x18] == 1) {
      *puVar3 = 1;
      pcVar5 = *(code **)(lVar4 + 0x150);
    }
    else {
      pcVar5 = *(code **)(lVar4 + 0x150);
    }
    if ((pcVar5 != (code *)0x0) && (_Input_Callbacks_Allowed == 1)) {
      (*pcVar5)((tagButtonProps *)(puVar3 + 0x18),*(uint64_t *)(lVar4 + 0x158));
    }
  }
  cVar13 = SDL_GameControllerGetButton(uVar2,4);
  FormatButtonProps((tagButtonProps *)(puVar3 + 0x1b),(uint)(cVar13 != '\0'),uVar19);
  if (puVar3[0x1b] != 0) {
    if (puVar3[0x1b] == 1) {
      *puVar3 = 1;
      pcVar5 = *(code **)(lVar4 + 0x160);
    }
    else {
      pcVar5 = *(code **)(lVar4 + 0x160);
    }
    if ((pcVar5 != (code *)0x0) && (_Input_Callbacks_Allowed == 1)) {
      (*pcVar5)((tagButtonProps *)(puVar3 + 0x1b),*(uint64_t *)(lVar4 + 0x168));
    }
  }
  cVar13 = SDL_GameControllerGetButton(uVar2,6);
  FormatButtonProps((tagButtonProps *)(puVar3 + 0x1e),(uint)(cVar13 != '\0'),uVar19);
  if (puVar3[0x1e] != 0) {
    if (puVar3[0x1e] == 1) {
      *puVar3 = 1;
      pcVar5 = *(code **)(lVar4 + 0x170);
    }
    else {
      pcVar5 = *(code **)(lVar4 + 0x170);
    }
    if ((pcVar5 != (code *)0x0) && (_Input_Callbacks_Allowed == 1)) {
      (*pcVar5)((tagButtonProps *)(puVar3 + 0x1e),*(uint64_t *)(lVar4 + 0x178));
    }
  }
  cVar13 = SDL_GameControllerGetButton(uVar2,7);
  FormatButtonProps((tagButtonProps *)(puVar3 + 0x21),(uint)(cVar13 != '\0'),uVar19);
  if (puVar3[0x21] != 0) {
    if (puVar3[0x21] == 1) {
      *puVar3 = 1;
      pcVar5 = *(code **)(lVar4 + 0x180);
    }
    else {
      pcVar5 = *(code **)(lVar4 + 0x180);
    }
    if ((pcVar5 != (code *)0x0) && (_Input_Callbacks_Allowed == 1)) {
      (*pcVar5)((tagButtonProps *)(puVar3 + 0x21),*(uint64_t *)(lVar4 + 0x188));
    }
  }
  cVar13 = SDL_GameControllerGetButton(uVar2,8);
  FormatButtonProps((tagButtonProps *)(puVar3 + 0x24),(uint)(cVar13 != '\0'),uVar19);
  if (puVar3[0x24] != 0) {
    if (puVar3[0x24] == 1) {
      *puVar3 = 1;
      pcVar5 = *(code **)(lVar4 + 400);
    }
    else {
      pcVar5 = *(code **)(lVar4 + 400);
    }
    if ((pcVar5 != (code *)0x0) && (_Input_Callbacks_Allowed == 1)) {
      (*pcVar5)((tagButtonProps *)(puVar3 + 0x24),*(uint64_t *)(lVar4 + 0x198));
    }
  }
  sVar14 = SDL_GameControllerGetAxis(uVar2,4);
  sVar15 = SDL_GameControllerGetAxis(uVar2,5);
  puVar3[0x29] = (int)sVar14;
  FormatButtonProps((tagButtonProps *)(puVar3 + 0x27),(uint)(0 < sVar14),uVar19);
  puVar3[0x2c] = (int)sVar15;
  FormatButtonProps((tagButtonProps *)(puVar3 + 0x2a),(uint)(0 < sVar15),uVar19);
  if (puVar3[0x27] != 0) {
    if (puVar3[0x27] == 1) {
      *puVar3 = 1;
      pcVar5 = *(code **)(lVar4 + 0x1a0);
    }
    else {
      pcVar5 = *(code **)(lVar4 + 0x1a0);
    }
    if ((pcVar5 != (code *)0x0) && (_Input_Callbacks_Allowed == 1)) {
      (*pcVar5)((tagButtonProps *)(puVar3 + 0x27),*(uint64_t *)(lVar4 + 0x1a8));
    }
  }
  if (puVar3[0x2a] != 0) {
    if (puVar3[0x2a] == 1) {
      *puVar3 = 1;
      pcVar5 = *(code **)(lVar4 + 0x1b0);
    }
    else {
      pcVar5 = *(code **)(lVar4 + 0x1b0);
    }
    if ((pcVar5 != (code *)0x0) && (_Input_Callbacks_Allowed == 1)) {
      (*pcVar5)((tagButtonProps *)(puVar3 + 0x2a),*(uint64_t *)(lVar4 + 0x1b8));
    }
  }
  bVar21 = DAT_005be6e4 /* R:0.5f */ <= (float)puVar3[2];
  bVar6 = DAT_005be6e4 /* R:0.5f */ <= (float)puVar3[1];
  bVar9 = (float)puVar3[2] <= DAT_005c0e00 /* R:-0.5f */;
  bVar10 = (float)puVar3[1] <= DAT_005c0e00 /* R:-0.5f */;
  bVar7 = DAT_005be6e4 /* R:0.5f */ <= (float)puVar3[6];
  bVar8 = DAT_005be6e4 /* R:0.5f */ <= (float)puVar3[5];
  bVar11 = (float)puVar3[6] <= DAT_005c0e00 /* R:-0.5f */;
  bVar12 = (float)puVar3[5] <= DAT_005c0e00 /* R:-0.5f */;
  cVar13 = SDL_GameControllerGetButton(uVar2,0xb);
  uVar20 = (uint)(cVar13 != '\0');
  if (*(int *)(lVar4 + 0xfc) == 1) {
    iVar1 = *(int *)(lVar4 + 0xf8);
    uVar20 = (uint)(uVar20 != 0 || bVar21);
  }
  else {
    iVar1 = *(int *)(lVar4 + 0xf8);
  }
  if (iVar1 == 1) {
    uVar20 = (uint)(uVar20 != 0 || bVar7);
  }
  FormatButtonProps((tagButtonProps *)(puVar3 + 0x2d),uVar20,uVar19);
  if (((puVar3[0x2d] != 0) && (*(code **)(lVar4 + 0x280) != (code *)0x0)) &&
     (_Input_Callbacks_Allowed == 1)) {
    (**(code **)(lVar4 + 0x280))((tagButtonProps *)(puVar3 + 0x2d),*(uint64_t *)(lVar4 + 0x288));
  }
  cVar13 = SDL_GameControllerGetButton(uVar2,0xe);
  uVar20 = (uint)(cVar13 != '\0');
  if (*(int *)(lVar4 + 0xfc) == 1) {
    uVar20 = (uint)(uVar20 != 0 || bVar6);
  }
  if (*(int *)(lVar4 + 0xf8) == 1) {
    uVar20 = (uint)(uVar20 != 0 || bVar8);
  }
  FormatButtonProps((tagButtonProps *)(puVar3 + 0x30),uVar20,uVar19);
  if (((puVar3[0x30] != 0) && (*(code **)(lVar4 + 0x290) != (code *)0x0)) &&
     (_Input_Callbacks_Allowed == 1)) {
    (**(code **)(lVar4 + 0x290))((tagButtonProps *)(puVar3 + 0x30),*(uint64_t *)(lVar4 + 0x298));
  }
  cVar13 = SDL_GameControllerGetButton(uVar2,0xc);
  uVar20 = (uint)(cVar13 != '\0');
  if (*(int *)(lVar4 + 0xfc) == 1) {
    uVar20 = (uint)(uVar20 != 0 || bVar9);
  }
  if (*(int *)(lVar4 + 0xf8) == 1) {
    uVar20 = (uint)(uVar20 != 0 || bVar11);
  }
  FormatButtonProps((tagButtonProps *)(puVar3 + 0x33),uVar20,uVar19);
  if (((puVar3[0x33] != 0) && (*(code **)(lVar4 + 0x2a0) != (code *)0x0)) &&
     (_Input_Callbacks_Allowed == 1)) {
    (**(code **)(lVar4 + 0x2a0))((tagButtonProps *)(puVar3 + 0x33),*(uint64_t *)(lVar4 + 0x2a8));
  }
  cVar13 = SDL_GameControllerGetButton(uVar2,0xd);
  uVar20 = (uint)(cVar13 != '\0');
  if (*(int *)(lVar4 + 0xfc) == 1) {
    uVar20 = (uint)(uVar20 != 0 || bVar10);
  }
  if (*(int *)(lVar4 + 0xf8) == 1) {
    uVar20 = (uint)(uVar20 != 0 || bVar12);
  }
  FormatButtonProps((tagButtonProps *)(puVar3 + 0x36),uVar20,uVar19);
  if (((puVar3[0x36] != 0) && (*(code **)(lVar4 + 0x2b0) != (code *)0x0)) &&
     (_Input_Callbacks_Allowed == 1)) {
    (**(code **)(lVar4 + 0x2b0))((tagButtonProps *)(puVar3 + 0x36),*(uint64_t *)(lVar4 + 0x2b8));
  }
  ConvertSDLJoystickStateToJoyState(tagSDLJoystick*)::dwLastFrameTime = iVar18;
  return;
}

/* ======================================================================
 * CodeToChar  (Ghidra `CodeToChar` @ 00570c30)
 * Signature: uint8_t __stdcall CodeToChar(int arg1)
 * Calls: (none)
 * Called by: `UpdateKeyboard`
 */
/* CodeToChar(int) */

int CodeToChar(int arg1)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  
  if (arg1 == 0x6a) {
    return 0x6a;
  }
  if (arg1 < 0x6b) {
    if (arg1 == 0x38) {
      return 0x38;
    }
    if (0x38 < arg1) {
      if (arg1 == 0x62) {
        return 0x62;
      }
      if (0x62 < arg1) {
        if (arg1 == 0x66) {
          return 0x66;
        }
        if (arg1 < 0x67) {
          if (arg1 == 100) {
            return 100;
          }
          return (100 < arg1) + 99 + (uint)(100 < arg1);
        }
        if (arg1 == 0x68) {
          return 0x68;
        }
        return (0x68 < arg1) + 0x67 + (uint)(0x68 < arg1);
      }
      if (arg1 == 0x5b) {
        return 0x5b;
      }
      if (arg1 < 0x5c) {
        if (arg1 == 0x3b) {
          return 0x3b;
        }
        if (arg1 == 0x3d) {
          return 0x3d;
        }
        if (arg1 != 0x39) {
          return 0;
        }
        return 0x39;
      }
      if (arg1 == 0x5d) {
        return 0x5d;
      }
      if (arg1 < 0x5d) {
        return 0x5c;
      }
      if (arg1 != 0x61) {
        return 0;
      }
      return 0x61;
    }
    if (arg1 == 0x30) {
      return 0x30;
    }
    if (arg1 < 0x31) {
      if (arg1 == 0x2c) {
        return 0x2c;
      }
      if (0x2c < arg1) {
        if (arg1 == 0x2e) {
          return 0x2e;
        }
        return (0x2e < arg1) + 0x2d + (uint)(0x2e < arg1);
      }
      if (arg1 == 0x20) {
        return 0x20;
      }
      if (arg1 != 0x27) {
        return 0;
      }
      return 0x27;
    }
    if (arg1 == 0x34) {
      return 0x34;
    }
    if (0x34 < arg1) {
      bVar3 = SBORROW4(arg1,0x36);
      iVar1 = arg1 + -0x36;
      bVar2 = iVar1 == 0;
      goto joined_r0x00570f48;
    }
    if (arg1 != 0x32) {
      if (0x32 < arg1) {
        return 0x33;
      }
      return 0x31;
    }
  }
  else {
    if (arg1 == 0x79) {
      return 0x79;
    }
    if (arg1 < 0x7a) {
      if (arg1 == 0x71) {
        return 0x71;
      }
      if (0x71 < arg1) {
        if (arg1 == 0x75) {
          return 0x75;
        }
        if (arg1 < 0x76) {
          if (arg1 == 0x73) {
            return 0x73;
          }
          return (0x73 < arg1) + 0x72 + (uint)(0x73 < arg1);
        }
        if (arg1 == 0x77) {
          return 0x77;
        }
        return (0x77 < arg1) + 0x76 + (uint)(0x77 < arg1);
      }
      if (arg1 == 0x6d) {
        return 0x6d;
      }
      if (arg1 < 0x6e) {
        if (arg1 == 0x6b) {
          return 0x6b;
        }
        if (arg1 != 0x6c) {
          return 0;
        }
        return 0x6c;
      }
      if (arg1 == 0x6f) {
        return 0x6f;
      }
      return (0x6f < arg1) + 0x6e + (uint)(0x6f < arg1);
    }
    if (arg1 == 0x4000005c) {
      return 0x34;
    }
    if (0x4000005c < arg1) {
      if (arg1 == 0x40000060) {
        return 0x38;
      }
      if (0x40000060 < arg1) {
        if (arg1 == 0x40000062) {
          return 0x30;
        }
        if (arg1 < 0x40000062) {
          return 0x39;
        }
        if (arg1 != 0x40000063) {
          return 0;
        }
        return 0x2e;
      }
      bVar3 = SBORROW4(arg1,0x4000005e);
      iVar1 = arg1 + -0x4000005e;
      bVar2 = arg1 == 0x4000005e;
joined_r0x00570f48:
      if (bVar2) {
        return 0x36;
      }
      bVar3 = bVar3 == iVar1 < 0;
      return bVar3 + 0x35 + (uint)bVar3;
    }
    if (arg1 == 0x40000057) {
      return 0x2b;
    }
    if (arg1 < 0x40000058) {
      if (arg1 == 0x40000055) {
        return 0x2a;
      }
      if (0x40000055 < arg1) {
        return 0x2d;
      }
      if (arg1 != 0x7a) {
        return 0;
      }
      return 0x7a;
    }
    if (arg1 != 0x4000005a) {
      if (0x4000005a < arg1) {
        return 0x33;
      }
      if (arg1 != 0x40000059) {
        return 0;
      }
      return 0x31;
    }
  }
  return 0x32;
}

/* ======================================================================
 * AlignedReAlloc__00571b70  (Ghidra `AlignedReAlloc` @ 00571b70)
 * Signature: uint8_t __stdcall AlignedReAlloc(void * arg1, ulong arg2, ulong arg3)
 * Calls: `free`, `malloc`, `memcpy`
 * Called by: (none)
 */
/* TMemory__AlignedReAlloc(void*, unsigned long, unsigned long) [clone .isra.7] */

void * TMemory__AlignedReAlloc(void *arg1,ulong arg2,ulong arg3)

{
  void *pvVar1;
  ulong __n;
  void *__dest;
  
  __dest = (void *)0x0;
  pvVar1 = malloc(arg2 + 0x10 + arg3);
  if (pvVar1 != (void *)0x0) {
    __dest = (void *)((long)pvVar1 + 0x10U + (arg3 - ((long)pvVar1 + 0x10U) % arg3) % arg3)
    ;
    *(ulong *)((long)__dest + -0x10) = arg2;
    *(void **)((long)__dest + -8) = pvVar1;
    if (arg1 != (void *)0x0) {
      __n = *(ulong *)((long)arg1 + -0x10);
      if (arg2 < *(ulong *)((long)arg1 + -0x10)) {
        __n = arg2;
      }
      memcpy(__dest,arg1,__n);
      free(*(void **)((long)arg1 + -8));
    }
  }
  return __dest;
}

/* ======================================================================
 * AddAnimationCallback  (Ghidra `AddAnimationCallback` @ 00572270)
 * Signature: uint8_t __stdcall AddAnimationCallback(AnimationFinishedCallback * arg1)
 * Calls: `AutoLockSection__AutoLockSection`, `AutoLockSection__AutoLockSection__005b59d0`, `free`, `malloc`, `memcpy`
 * Called by: (none)
 */
/* AnimationManager__AddAnimationCallback(AnimationFinishedCallback const&) */

void AnimationManager__AddAnimationCallback(AnimationFinishedCallback *arg1)

{
  short sVar1;
  uint64_t uVar2;
  uint uVar3;
  void *pvVar4;
  short *psVar5;
  void *pvVar6;
  ulong uVar7;
  short sVar8;
  uint uVar9;
  ulong uVar10;
  uint64_t *puVar11;
  ushort uVar12;
  bool bVar13;
  byte bVar14;
  AutoLockSection aAStack_48 [24];
  
  bVar14 = 0;
  AutoLockSection__AutoLockSection(aAStack_48,(CriticalSection *)AnimationCallbackSection);
  uVar2 = pAnimCallbacks._56_8_;
  if (pAnimCallbacks._72_4_ != -0x5eef3582) {
    uVar10 = (ulong)pAnimCallbacks[0x2c];
    pAnimCallbacks._48_4_ = 0;
    pvVar4 = malloc(uVar10 + 0xd8);
    puVar11 = (uint64_t *)0x0;
    if (pvVar4 != (void *)0x0) {
      puVar11 = (uint64_t *)
                ((long)pvVar4 + 0x10U + (uVar10 - ((long)pvVar4 + 0x10U) % uVar10) % uVar10);
      puVar11[-2] = 200;
      puVar11[-1] = pvVar4;
    }
    bVar13 = ((ulong)puVar11 & 1) != 0;
    uVar10 = 200;
    pAnimCallbacks._56_8_ = puVar11;
    if (bVar13) {
      *(uint8_t *)puVar11 = 0;
      uVar10 = 199;
      puVar11 = (uint64_t *)((long)puVar11 + 1);
    }
    if (((ulong)puVar11 & 2) != 0) {
      *(uint16_t *)puVar11 = 0;
      uVar10 = (ulong)((int)uVar10 - 2);
      puVar11 = (uint64_t *)((long)puVar11 + 2);
    }
    if (((ulong)puVar11 & 4) != 0) {
      *(uint32_t *)puVar11 = 0;
      uVar10 = (ulong)((int)uVar10 - 4);
      puVar11 = (uint64_t *)((long)puVar11 + 4);
    }
    for (uVar7 = uVar10 >> 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar11 = 0;
      puVar11 = puVar11 + (ulong)bVar14 * -2 + 1;
    }
    if ((uVar10 & 4) != 0) {
      *(uint32_t *)puVar11 = 0;
      puVar11 = (uint64_t *)((long)puVar11 + 4);
    }
    if ((uVar10 & 2) != 0) {
      *(uint16_t *)puVar11 = 0;
      puVar11 = (uint64_t *)((long)puVar11 + 2);
    }
    if (bVar13) {
      *(uint8_t *)puVar11 = 0;
    }
    pAnimCallbacks._40_2_ = 0;
    pAnimCallbacks._42_2_ = 5;
    uVar9 = 0;
    pAnimCallbacks._72_4_ = 0xa110ca7e;
    pAnimCallbacks._52_2_ = 5;
    goto LAB_00572378;
  }
  uVar9 = (uint)(ushort)pAnimCallbacks._40_2_;
  if ((ushort)pAnimCallbacks._42_2_ <= (ushort)pAnimCallbacks._40_2_) {
    pAnimCallbacks._42_2_ = pAnimCallbacks._42_2_ + pAnimCallbacks._52_2_;
    uVar10 = (ulong)pAnimCallbacks[0x2c];
    pvVar4 = (void *)0x0;
    uVar7 = (ulong)(ushort)pAnimCallbacks._42_2_ * 0x28;
    pvVar6 = malloc(uVar10 + 0x10 + uVar7);
    if (pvVar6 != (void *)0x0) {
      pvVar4 = (void *)((long)pvVar6 + 0x10U + (uVar10 - ((long)pvVar6 + 0x10U) % uVar10) % uVar10);
      *(ulong *)((long)pvVar4 + -0x10) = uVar7;
      *(void **)((long)pvVar4 + -8) = pvVar6;
      if (uVar2 != 0) {
        uVar10 = *(ulong *)(uVar2 + -0x10);
        if (uVar7 <= *(ulong *)(uVar2 + -0x10)) {
          uVar10 = uVar7;
        }
        memcpy(pvVar4,(void *)uVar2,uVar10);
        free(*(void **)(uVar2 + -8));
      }
    }
    uVar2 = pAnimCallbacks._64_8_;
    uVar12 = pAnimCallbacks._42_2_;
    pAnimCallbacks._56_8_ = pvVar4;
    if (pAnimCallbacks._64_8_ != 0) {
      uVar7 = (ulong)pAnimCallbacks[0x2c];
      pvVar4 = (void *)0x0;
      uVar10 = (ulong)(ushort)pAnimCallbacks._42_2_ * 2;
      pvVar6 = malloc(uVar7 + 0x10 + uVar10);
      if (pvVar6 != (void *)0x0) {
        pvVar4 = (void *)((long)pvVar6 + 0x10U + (uVar7 - ((long)pvVar6 + 0x10U) % uVar7) % uVar7);
        *(void **)((long)pvVar4 + -8) = pvVar6;
        *(ulong *)((long)pvVar4 + -0x10) = uVar10;
        uVar7 = *(ulong *)(uVar2 + -0x10);
        if (uVar10 <= *(ulong *)(uVar2 + -0x10)) {
          uVar7 = uVar10;
        }
        memcpy(pvVar4,(void *)uVar2,uVar7);
        free(*(void **)(uVar2 + -8));
        uVar12 = pAnimCallbacks._42_2_;
      }
      uVar9 = (uint)(ushort)pAnimCallbacks._40_2_;
      pAnimCallbacks._64_8_ = pvVar4;
      if (uVar12 <= (ushort)pAnimCallbacks._40_2_) goto LAB_00572405;
      do {
        uVar3 = uVar9 & 0xffff;
        uVar9 = uVar9 + 1;
        *(uint16_t *)(pAnimCallbacks._64_8_ + (ulong)uVar3 * 2) = 0xffff;
      } while ((ushort)uVar9 < uVar12);
    }
    uVar9 = (uint)(ushort)pAnimCallbacks._40_2_;
  }
LAB_00572405:
  if ((pAnimCallbacks._48_4_ == 1) && (pAnimCallbacks._42_2_ != 0)) {
    sVar8 = 0;
    sVar1 = *(short *)pAnimCallbacks._64_8_;
    psVar5 = (short *)pAnimCallbacks._64_8_;
    while (sVar1 != -1) {
      psVar5 = psVar5 + 1;
      sVar8 = sVar8 + 1;
      if (sVar8 == pAnimCallbacks._42_2_) goto LAB_00572378;
      sVar1 = *psVar5;
    }
    *psVar5 = (short)uVar9;
    uVar9 = (uint)(ushort)pAnimCallbacks._40_2_;
  }
LAB_00572378:
  puVar11 = (uint64_t *)(pAnimCallbacks._56_8_ + (ulong)uVar9 * 0x28);
  *puVar11 = *(uint64_t *)arg1;
  puVar11[1] = *(uint64_t *)(arg1 + 8);
  puVar11[2] = *(uint64_t *)(arg1 + 0x10);
  puVar11[3] = *(uint64_t *)(arg1 + 0x18);
  puVar11[4] = *(uint64_t *)(arg1 + 0x20);
  pAnimCallbacks._40_2_ = pAnimCallbacks._40_2_ + 1;
  AutoLockSection__AutoLockSection__005b59d0(aAStack_48);
  return;
}

/* ======================================================================
 * AddCachedCue  (Ghidra `AddCachedCue` @ 0057a650)
 * Signature: uint8_t __stdcall AddCachedCue(void * arg1, char * arg2)
 * Calls: `AutoLockSection__AutoLockSection`, `AutoLockSection__AutoLockSection__005b59d0`, `free`, `malloc`, `memcpy`, `strlen`
 * Called by: `Create`, `CreateTAudioCue`
 */
/* AddCachedCue(void*, char const*) */

void AddCachedCue(void *arg1,char *arg2)

{
  short sVar1;
  ushort uVar2;
  uint64_t uVar3;
  short sVar4;
  void *pvVar5;
  size_t sVar6;
  void *pvVar7;
  ulong uVar8;
  ushort uVar9;
  uint uVar10;
  short *psVar11;
  ulong uVar12;
  uint64_t *puVar13;
  char *__dest;
  bool bVar14;
  byte bVar15;
  AutoLockSection local_48 [24];
  
  bVar15 = 0;
  AutoLockSection__AutoLockSection(local_48,(CriticalSection *)cacheCueSection);
  uVar3 = pAudioCueCache._56_8_;
  if (pAudioCueCache._72_4_ == -0x5eef3582) {
    if ((ushort)pAudioCueCache._42_2_ <= (ushort)pAudioCueCache._40_2_) {
      pAudioCueCache._42_2_ = pAudioCueCache._42_2_ + pAudioCueCache._52_2_;
      uVar8 = (ulong)pAudioCueCache[0x2c];
      pvVar5 = (void *)0x0;
      uVar12 = (ulong)(ushort)pAudioCueCache._42_2_ * 0x90;
      pvVar7 = malloc(uVar8 + 0x10 + uVar12);
      if (pvVar7 != (void *)0x0) {
        pvVar5 = (void *)((long)pvVar7 + 0x10U + (uVar8 - ((long)pvVar7 + 0x10U) % uVar8) % uVar8);
        *(ulong *)((long)pvVar5 + -0x10) = uVar12;
        *(void **)((long)pvVar5 + -8) = pvVar7;
        if (uVar3 != 0) {
          uVar8 = *(ulong *)(uVar3 + -0x10);
          if (uVar12 <= *(ulong *)(uVar3 + -0x10)) {
            uVar8 = uVar12;
          }
          memcpy(pvVar5,(void *)uVar3,uVar8);
          free(*(void **)(uVar3 + -8));
        }
      }
      uVar3 = pAudioCueCache._64_8_;
      uVar9 = pAudioCueCache._42_2_;
      pAudioCueCache._56_8_ = pvVar5;
      if (pAudioCueCache._64_8_ != 0) {
        uVar8 = (ulong)pAudioCueCache[0x2c];
        uVar12 = (ulong)(ushort)pAudioCueCache._42_2_ * 2;
        pvVar7 = malloc(uVar8 + 0x10 + uVar12);
        pvVar5 = (void *)0x0;
        uVar2 = pAudioCueCache._40_2_;
        if (pvVar7 != (void *)0x0) {
          pvVar5 = (void *)((long)pvVar7 + 0x10U + (uVar8 - ((long)pvVar7 + 0x10U) % uVar8) % uVar8)
          ;
          *(void **)((long)pvVar5 + -8) = pvVar7;
          *(ulong *)((long)pvVar5 + -0x10) = uVar12;
          uVar8 = *(ulong *)(uVar3 + -0x10);
          if (uVar12 <= *(ulong *)(uVar3 + -0x10)) {
            uVar8 = uVar12;
          }
          memcpy(pvVar5,(void *)uVar3,uVar8);
          free(*(void **)(uVar3 + -8));
          uVar2 = pAudioCueCache._40_2_;
          uVar9 = pAudioCueCache._42_2_;
        }
        for (; pAudioCueCache._64_8_ = pvVar5, uVar2 < uVar9; uVar2 = uVar2 + 1) {
          *(uint16_t *)(pAudioCueCache._64_8_ + (ulong)uVar2 * 2) = 0xffff;
          pvVar5 = (void *)pAudioCueCache._64_8_;
        }
      }
    }
    if ((pAudioCueCache._48_4_ == 1) && (pAudioCueCache._42_2_ != 0)) {
      sVar4 = 1;
      sVar1 = *(short *)pAudioCueCache._64_8_;
      psVar11 = (short *)pAudioCueCache._64_8_;
      while (sVar1 != -1) {
        psVar11 = psVar11 + 1;
        if (sVar4 == pAudioCueCache._42_2_) goto LAB_0057a742;
        sVar4 = sVar4 + 1;
        sVar1 = *psVar11;
      }
      *psVar11 = pAudioCueCache._40_2_;
    }
  }
  else {
    uVar12 = (ulong)pAudioCueCache[0x2c];
    pAudioCueCache._48_4_ = 0;
    pvVar5 = malloc(uVar12 + 0x2e0);
    puVar13 = (uint64_t *)0x0;
    if (pvVar5 != (void *)0x0) {
      puVar13 = (uint64_t *)
                ((long)pvVar5 + 0x10U + (uVar12 - ((long)pvVar5 + 0x10U) % uVar12) % uVar12);
      puVar13[-2] = 0x2d0;
      puVar13[-1] = pvVar5;
    }
    bVar14 = ((ulong)puVar13 & 1) != 0;
    uVar12 = 0x2d0;
    pAudioCueCache._56_8_ = puVar13;
    if (bVar14) {
      *(uint8_t *)puVar13 = 0;
      uVar12 = 0x2cf;
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
      puVar13 = puVar13 + (ulong)bVar15 * -2 + 1;
    }
    if ((uVar12 & 4) != 0) {
      *(uint32_t *)puVar13 = 0;
      puVar13 = (uint64_t *)((long)puVar13 + 4);
    }
    if ((uVar12 & 2) != 0) {
      *(uint16_t *)puVar13 = 0;
      puVar13 = (uint64_t *)((long)puVar13 + 2);
    }
    if (bVar14) {
      *(uint8_t *)puVar13 = 0;
    }
    pAudioCueCache._42_2_ = 5;
    pAudioCueCache._72_4_ = 0xa110ca7e;
    pAudioCueCache._40_2_ = 0;
    pAudioCueCache._52_2_ = 5;
  }
LAB_0057a742:
  pAudioCueCache._40_2_ = pAudioCueCache._40_2_ + 1;
  uVar12 = 0x90;
  puVar13 = (uint64_t *)
            (((ulong)(ushort)pAudioCueCache._40_2_ * 9 + -9) * 0x10 + pAudioCueCache._56_8_);
  bVar14 = ((ulong)puVar13 & 1) != 0;
  if (bVar14) {
    *(uint8_t *)puVar13 = 0;
    uVar12 = 0x8f;
    puVar13 = (uint64_t *)((long)puVar13 + 1);
  }
  uVar10 = (uint)uVar12;
  if (((ulong)puVar13 & 2) != 0) {
    *(uint16_t *)puVar13 = 0;
    puVar13 = (uint64_t *)((long)puVar13 + 2);
    uVar10 = uVar10 - 2;
    uVar12 = (ulong)uVar10;
  }
  if (((ulong)puVar13 & 4) != 0) {
    *(uint32_t *)puVar13 = 0;
    uVar12 = (ulong)(uVar10 - 4);
    puVar13 = (uint64_t *)((long)puVar13 + 4);
  }
  for (uVar8 = uVar12 >> 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *puVar13 = 0;
    puVar13 = puVar13 + (ulong)bVar15 * -2 + 1;
  }
  if ((uVar12 & 4) != 0) {
    *(uint32_t *)puVar13 = 0;
    puVar13 = (uint64_t *)((long)puVar13 + 4);
  }
  if ((uVar12 & 2) != 0) {
    *(uint16_t *)puVar13 = 0;
    puVar13 = (uint64_t *)((long)puVar13 + 2);
  }
  if (bVar14) {
    *(uint8_t *)puVar13 = 0;
  }
  __dest = (char *)(((ulong)(ushort)pAudioCueCache._40_2_ * 9 + -9) * 0x10 + pAudioCueCache._56_8_);
  *(void **)(__dest + 0x80) = arg1;
  __dest[0x88] = '\x01';
  __dest[0x89] = '\0';
  __dest[0x8a] = '\0';
  __dest[0x8b] = '\0';
  sVar6 = strlen(arg2);
  uVar12 = sVar6 + 1;
  if (0x7f < uVar12) {
    uVar12 = 0x80;
  }
  if (arg2 != __dest) {
    memcpy(__dest,arg2,uVar12);
  }
  AutoLockSection__AutoLockSection__005b59d0(local_48);
  return;
}

/* ======================================================================
 * Clone  (Ghidra `Clone` @ 0057b420)
 * Signature: uint8_t __stdcall Clone(TAudioCue * arg1)
 * Calls: `audDuplicateCue`, `operator_new`
 * Called by: (none)
 */
/* TAudioCue__Clone(TAudioCue*) */

uint64_t * TAudioCue__Clone(TAudioCue *arg1)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  
  puVar1 = operator_new(0x30);
  *(uint32_t *)(puVar1 + 1) = 100;
  *(uint32_t *)((long)puVar1 + 0xc) = 0xffffffff;
  puVar1[2] = &DAT_008184c8 /* R:0.00016803004837129265f */;
  *(uint32_t *)(puVar1 + 3) = 0;
  puVar1[4] = 0;
  *(uint32_t *)(puVar1 + 5) = 0;
  *(uint32_t *)((long)puVar1 + 0x2c) = 0;
  uVar2 = audDuplicateCue(*(uint64_t *)arg1);
  *puVar1 = uVar2;
  return puVar1;
}

/* ======================================================================
 * ClosestPointToBoundingSquare  (Ghidra `ClosestPointToBoundingSquare` @ 0057d1e0)
 * Signature: uint8_t __stdcall ClosestPointToBoundingSquare(Vector2 * arg1, BoundingSquare * arg2, Vector2 * arg3)
 * Calls: `Vector2__operator_assign`, `Vector2__operator_index__005be370`, `Vector2__operator_minus__005be180`, `Vector2__operator_mul__005be200`, `Vector2__operator_plus_assign`
 * Called by: `ClosestPointToBoundingSquare__0057e5e0`, `IsBoundsTouchingBounds`, `IsPointWithinBoundingSquare`, `IsSquareTouchingCircle`
 */
/* ClosestPointToBoundingSquare(Vector2 const&, BoundingSquare const*, Vector2&) [clone
   .constprop.23] */

void ClosestPointToBoundingSquare(Vector2 *arg1,BoundingSquare *arg2,Vector2 *arg3)

{
  Vector2 *this;
  float *pfVar1;
  uint *puVar2;
  float fVar3;
  float fVar4;
  uint64_t local_68 [2];
  Vector2 local_58 [16];
  uint64_t local_48 [2];
  uint32_t local_38;
  uint32_t local_34;
  Vector2 local_28 [16];
  
  Matrix4x4__Get2DPos((Vector2 *)local_68,(Matrix4x4 *)(arg2 + 0x44));
  this = (Vector2 *)(arg2 + 0x8c);
  Vector2__operator_minus__005be180(local_58,arg1);
  local_48[0] = local_68[0];
  local_38 = *(uint32_t *)(arg2 + 0x44);
  local_34 = *(uint32_t *)(arg2 + 0x54);
  fVar3 = (float)Vector2__Dot(local_58,(Vector2 *)&local_38);
  pfVar1 = (float *)Vector2__operator_index__005be370(this,0);
  fVar4 = *pfVar1;
  puVar2 = (uint *)Vector2__operator_index__005be370(this,0);
  if ((fVar3 <= fVar4) &&
     (fVar4 = (float)(DAT_005be6f0 /* R:u32=2147483648 */ ^ *puVar2), (float)(DAT_005be6f0 /* R:u32=2147483648 */ ^ *puVar2) <= fVar3)) {
    fVar4 = fVar3;
  }
  Vector2__operator_mul__005be200(local_28,fVar4);
  Vector2__operator_plus_assign((Vector2 *)local_48,local_28);
  local_38 = *(uint32_t *)(arg2 + 0x48);
  local_34 = *(uint32_t *)(arg2 + 0x58);
  fVar3 = (float)Vector2__Dot(local_58,(Vector2 *)&local_38);
  pfVar1 = (float *)Vector2__operator_index__005be370(this,1);
  fVar4 = *pfVar1;
  puVar2 = (uint *)Vector2__operator_index__005be370(this,1);
  if ((fVar3 <= fVar4) &&
     (fVar4 = (float)(DAT_005be6f0 /* R:u32=2147483648 */ ^ *puVar2), (float)(DAT_005be6f0 /* R:u32=2147483648 */ ^ *puVar2) <= fVar3)) {
    fVar4 = fVar3;
  }
  Vector2__operator_mul__005be200(local_28,fVar4);
  Vector2__operator_plus_assign((Vector2 *)local_48,local_28);
  Vector2__operator_assign(arg3,(Vector2 *)local_48);
  return;
}

/* ======================================================================
 * ClosestPointToBoundingSquareDistSq  (Ghidra `ClosestPointToBoundingSquareDistSq` @ 0057d350)
 * Signature: uint8_t __stdcall ClosestPointToBoundingSquareDistSq(Vector2 * arg1, BoundingSquare * arg2)
 * Calls: `Vector2__operator_index__005be370`, `Vector2__operator_minus__005be180`
 * Called by: `ClosestPointToBoundingSquareDistSq__0057e850`, `IsBoundsTouchingBounds`, `IsSquareTouchingSquare`
 */
/* ClosestPointToBoundingSquareDistSq(Vector2 const&, BoundingSquare const*) [clone .constprop.24]
    */

float ClosestPointToBoundingSquareDistSq(Vector2 *arg1,BoundingSquare *arg2)

{
  Vector2 *this;
  uint *puVar1;
  float *pfVar2;
  float fVar3;
  float local_50;
  Vector2 local_48 [16];
  Vector2 local_38 [16];
  uint32_t local_28;
  uint32_t local_24;
  
  Matrix4x4__Get2DPos(local_48,(Matrix4x4 *)(arg2 + 0x44));
  this = (Vector2 *)(arg2 + 0x8c);
  Vector2__operator_minus__005be180(local_38,arg1);
  local_28 = *(uint32_t *)(arg2 + 0x44);
  local_24 = *(uint32_t *)(arg2 + 0x48);
  fVar3 = (float)Vector2__Dot(local_38,(Vector2 *)&local_28);
  puVar1 = (uint *)Vector2__operator_index__005be370(this,0);
  if (fVar3 < (float)(*puVar1 ^ DAT_005be6f0 /* R:u32=2147483648 */)) {
    pfVar2 = (float *)Vector2__operator_index__005be370(this,0);
    local_50 = (fVar3 + *pfVar2) * (fVar3 + *pfVar2);
  }
  else {
    pfVar2 = (float *)Vector2__operator_index__005be370(this,0);
    if (*pfVar2 <= fVar3 && fVar3 != *pfVar2) {
      pfVar2 = (float *)Vector2__operator_index__005be370(this,0);
      local_50 = (fVar3 - *pfVar2) * (fVar3 - *pfVar2);
    }
    else {
      local_50 = 0.0;
    }
  }
  local_28 = *(uint32_t *)(arg2 + 0x54);
  local_24 = *(uint32_t *)(arg2 + 0x58);
  fVar3 = (float)Vector2__Dot(local_38,(Vector2 *)&local_28);
  puVar1 = (uint *)Vector2__operator_index__005be370(this,1);
  if (fVar3 < (float)(*puVar1 ^ DAT_005be6f0 /* R:u32=2147483648 */)) {
    pfVar2 = (float *)Vector2__operator_index__005be370(this,1);
    return (fVar3 + *pfVar2) * (fVar3 + *pfVar2) + local_50;
  }
  pfVar2 = (float *)Vector2__operator_index__005be370(this,1);
  if (fVar3 < *pfVar2 || fVar3 == *pfVar2) {
    return local_50 + 0.0;
  }
  pfVar2 = (float *)Vector2__operator_index__005be370(this,1);
  return (fVar3 - *pfVar2) * (fVar3 - *pfVar2) + local_50;
}

/* ======================================================================
 * ClosestPointToBoundingBox  (Ghidra `ClosestPointToBoundingBox` @ 0057d500)
 * Signature: uint8_t __stdcall ClosestPointToBoundingBox(FPUVector * arg1, BoundingBox * arg2, FPUVector * arg3)
 * Calls: `Matrix4x4__operator_index__005baf30`
 * Called by: `ClosestPointToBoundingBox__005805b0`, `IsPointWithinBoundingCube`, `IsVector3WithinBounds`
 */
/* ClosestPointToBoundingBox(FPUVector const&, BoundingBox const*, FPUVector&) [clone .constprop.25]
    */

void ClosestPointToBoundingBox(FPUVector *arg1,BoundingBox *arg2,FPUVector *arg3)

{
  Matrix4x4 *this;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float *pfVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  this = (Matrix4x4 *)(arg2 + 100);
  fVar1 = *(float *)(arg1 + 0xc);
  fVar2 = *(float *)(arg2 + 0x78);
  fVar15 = *(float *)(arg1 + 8) - fVar2;
  fVar3 = *(float *)(arg2 + 0x74);
  fVar4 = *(float *)(arg2 + 0x70);
  fVar16 = *(float *)(arg1 + 4) - fVar3;
  fVar17 = *(float *)arg1 - fVar4;
  pfVar14 = (float *)Matrix4x4__operator_index__005baf30(this,0);
  fVar5 = *pfVar14;
  fVar6 = pfVar14[1];
  fVar7 = pfVar14[3];
  fVar8 = pfVar14[2];
  fVar18 = fVar17 * fVar5 + fVar16 * fVar6 + fVar1 * fVar7 + fVar15 * fVar8;
  fVar9 = *(float *)(arg2 + 4);
  fVar19 = fVar9;
  if ((fVar18 <= fVar9) &&
     (fVar19 = (float)((uint)fVar9 ^ DAT_005be6f0 /* R:u32=2147483648 */), (float)((uint)fVar9 ^ DAT_005be6f0 /* R:u32=2147483648 */) <= fVar18))
  {
    fVar19 = fVar18;
  }
  pfVar14 = (float *)Matrix4x4__operator_index__005baf30(this,1);
  fVar9 = *pfVar14;
  fVar18 = pfVar14[1];
  fVar10 = pfVar14[3];
  fVar11 = pfVar14[2];
  fVar20 = fVar17 * fVar9 + fVar16 * fVar18 + fVar1 * fVar10 + fVar15 * fVar11;
  fVar12 = *(float *)(arg2 + 8);
  fVar21 = fVar12;
  if ((fVar20 <= fVar12) &&
     (fVar21 = (float)((uint)fVar12 ^ DAT_005be6f0 /* R:u32=2147483648 */), (float)((uint)fVar12 ^ DAT_005be6f0 /* R:u32=2147483648 */) <= fVar20)
     ) {
    fVar21 = fVar20;
  }
  pfVar14 = (float *)Matrix4x4__operator_index__005baf30(this,2);
  fVar12 = pfVar14[1];
  fVar20 = pfVar14[3];
  fVar13 = pfVar14[2];
  fVar16 = fVar17 * *pfVar14 + fVar16 * fVar12 + fVar1 * fVar20 + fVar15 * fVar13;
  fVar1 = *(float *)(arg2 + 0xc);
  fVar15 = fVar1;
  if ((fVar16 <= fVar1) &&
     (fVar15 = (float)((uint)fVar1 ^ DAT_005be6f0 /* R:u32=2147483648 */), (float)((uint)fVar1 ^ DAT_005be6f0 /* R:u32=2147483648 */) <= fVar16))
  {
    fVar15 = fVar16;
  }
  *(float *)arg3 = *pfVar14 * fVar15 + fVar9 * fVar21 + fVar5 * fVar19 + fVar4;
  *(float *)(arg3 + 4) = fVar12 * fVar15 + fVar18 * fVar21 + fVar6 * fVar19 + fVar3;
  *(float *)(arg3 + 8) = fVar15 * fVar13 + fVar11 * fVar21 + fVar19 * fVar8 + fVar2;
  *(float *)(arg3 + 0xc) = fVar15 * fVar20 + fVar21 * fVar10 + fVar7 * fVar19;
  return;
}

/* ======================================================================
 * ClosestPointToBoundingSquare__0057e5e0  (Ghidra `ClosestPointToBoundingSquare` @ 0057e5e0)
 * Signature: uint8_t __stdcall ClosestPointToBoundingSquare(Vector2 * arg1, BoundingSquare * arg2, Vector2 * arg3)
 * Calls: `ClosestPointToBoundingSquare`, `Vector2__operator_assign`, `Vector2__operator_index__005be370`, `Vector2__operator_minus__005be180`, `Vector2__operator_mul__005be200`, `Vector2__operator_plus_assign`
 * Called by: (none)
 */
/* ClosestPointToBoundingSquare(Vector2 const&, BoundingSquare const*, Vector2&) */

void ClosestPointToBoundingSquare(Vector2 *arg1,BoundingSquare *arg2,Vector2 *arg3)

{
  Vector2 *this;
  float *pfVar1;
  uint *puVar2;
  float fVar3;
  float fVar4;
  uint64_t local_68 [2];
  Vector2 local_58 [16];
  uint64_t local_48 [2];
  uint32_t local_38;
  uint32_t local_34;
  Vector2 local_28 [16];
  
  Matrix4x4__Get2DPos((Vector2 *)local_68,(Matrix4x4 *)(arg2 + 0x44));
  this = (Vector2 *)(arg2 + 0x8c);
  Vector2__operator_minus__005be180(local_58,arg1);
  local_48[0] = local_68[0];
  local_38 = *(uint32_t *)(arg2 + 0x44);
  local_34 = *(uint32_t *)(arg2 + 0x54);
  fVar3 = (float)Vector2__Dot(local_58,(Vector2 *)&local_38);
  pfVar1 = (float *)Vector2__operator_index__005be370(this,0);
  fVar4 = *pfVar1;
  puVar2 = (uint *)Vector2__operator_index__005be370(this,0);
  if ((fVar3 <= fVar4) &&
     (fVar4 = (float)(DAT_005be6f0 /* R:u32=2147483648 */ ^ *puVar2), (float)(DAT_005be6f0 /* R:u32=2147483648 */ ^ *puVar2) <= fVar3)) {
    fVar4 = fVar3;
  }
  Vector2__operator_mul__005be200(local_28,fVar4);
  Vector2__operator_plus_assign((Vector2 *)local_48,local_28);
  local_38 = *(uint32_t *)(arg2 + 0x48);
  local_34 = *(uint32_t *)(arg2 + 0x58);
  fVar3 = (float)Vector2__Dot(local_58,(Vector2 *)&local_38);
  pfVar1 = (float *)Vector2__operator_index__005be370(this,1);
  fVar4 = *pfVar1;
  puVar2 = (uint *)Vector2__operator_index__005be370(this,1);
  if ((fVar3 <= fVar4) &&
     (fVar4 = (float)(DAT_005be6f0 /* R:u32=2147483648 */ ^ *puVar2), (float)(DAT_005be6f0 /* R:u32=2147483648 */ ^ *puVar2) <= fVar3)) {
    fVar4 = fVar3;
  }
  Vector2__operator_mul__005be200(local_28,fVar4);
  Vector2__operator_plus_assign((Vector2 *)local_48,local_28);
  Vector2__operator_assign(arg3,(Vector2 *)local_48);
  return;
}

/* ======================================================================
 * ClosestPointToBoundingSquareDistSq__0057e850  (Ghidra `ClosestPointToBoundingSquareDistSq` @ 0057e850)
 * Signature: uint8_t __stdcall ClosestPointToBoundingSquareDistSq(Vector2 * arg1, BoundingSquare * arg2)
 * Calls: `ClosestPointToBoundingSquareDistSq`, `Vector2__operator_index__005be370`, `Vector2__operator_minus__005be180`
 * Called by: (none)
 */
/* ClosestPointToBoundingSquareDistSq(Vector2 const&, BoundingSquare const*) */

float ClosestPointToBoundingSquareDistSq(Vector2 *arg1,BoundingSquare *arg2)

{
  Vector2 *this;
  uint *puVar1;
  float *pfVar2;
  float fVar3;
  float local_50;
  Vector2 local_48 [16];
  Vector2 local_38 [16];
  uint32_t local_28;
  uint32_t local_24;
  
  Matrix4x4__Get2DPos(local_48,(Matrix4x4 *)(arg2 + 0x44));
  this = (Vector2 *)(arg2 + 0x8c);
  Vector2__operator_minus__005be180(local_38,arg1);
  local_28 = *(uint32_t *)(arg2 + 0x44);
  local_24 = *(uint32_t *)(arg2 + 0x48);
  fVar3 = (float)Vector2__Dot(local_38,(Vector2 *)&local_28);
  puVar1 = (uint *)Vector2__operator_index__005be370(this,0);
  if (fVar3 < (float)(*puVar1 ^ DAT_005be6f0 /* R:u32=2147483648 */)) {
    pfVar2 = (float *)Vector2__operator_index__005be370(this,0);
    local_50 = (fVar3 + *pfVar2) * (fVar3 + *pfVar2);
  }
  else {
    pfVar2 = (float *)Vector2__operator_index__005be370(this,0);
    if (*pfVar2 <= fVar3 && fVar3 != *pfVar2) {
      pfVar2 = (float *)Vector2__operator_index__005be370(this,0);
      local_50 = (fVar3 - *pfVar2) * (fVar3 - *pfVar2);
    }
    else {
      local_50 = 0.0;
    }
  }
  local_28 = *(uint32_t *)(arg2 + 0x54);
  local_24 = *(uint32_t *)(arg2 + 0x58);
  fVar3 = (float)Vector2__Dot(local_38,(Vector2 *)&local_28);
  puVar1 = (uint *)Vector2__operator_index__005be370(this,1);
  if (fVar3 < (float)(*puVar1 ^ DAT_005be6f0 /* R:u32=2147483648 */)) {
    pfVar2 = (float *)Vector2__operator_index__005be370(this,1);
    return (fVar3 + *pfVar2) * (fVar3 + *pfVar2) + local_50;
  }
  pfVar2 = (float *)Vector2__operator_index__005be370(this,1);
  if (fVar3 < *pfVar2 || fVar3 == *pfVar2) {
    return local_50 + 0.0;
  }
  pfVar2 = (float *)Vector2__operator_index__005be370(this,1);
  return (fVar3 - *pfVar2) * (fVar3 - *pfVar2) + local_50;
}

/* ======================================================================
 * ClosestPointToBoundingBoxDistSq  (Ghidra `ClosestPointToBoundingBoxDistSq` @ 00580340)
 * Signature: uint8_t __stdcall ClosestPointToBoundingBoxDistSq(FPUVector * arg1, BoundingBox * arg2)
 * Calls: `Matrix4x4__operator_index__005baf30`
 * Called by: (none)
 */
/* ClosestPointToBoundingBoxDistSq(FPUVector const&, BoundingBox const*) */

float ClosestPointToBoundingBoxDistSq(FPUVector *arg1,BoundingBox *arg2)

{
  Matrix4x4 *this;
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  this = (Matrix4x4 *)(arg2 + 100);
  fVar6 = *(float *)(arg1 + 0xc) - *(float *)(arg2 + 0x7c);
  fVar7 = *(float *)(arg1 + 8) - *(float *)(arg2 + 0x78);
  fVar4 = *(float *)(arg1 + 4) - *(float *)(arg2 + 0x74);
  fVar8 = *(float *)arg1 - *(float *)(arg2 + 0x70);
  pfVar1 = (float *)Matrix4x4__operator_index__005baf30(this,0);
  fVar3 = *(float *)(arg2 + 4);
  fVar2 = pfVar1[1] * fVar4 + *pfVar1 * fVar8 + pfVar1[2] * fVar7 + pfVar1[3] * fVar6;
  if (fVar2 < (float)((uint)fVar3 ^ DAT_005be6f0 /* R:u32=2147483648 */)) {
    fVar3 = (fVar2 + fVar3) * (fVar2 + fVar3);
  }
  else if (fVar3 < fVar2) {
    fVar3 = (fVar2 - fVar3) * (fVar2 - fVar3);
  }
  else {
    fVar3 = 0.0;
  }
  pfVar1 = (float *)Matrix4x4__operator_index__005baf30(this,1);
  fVar5 = pfVar1[1] * fVar4 + *pfVar1 * fVar8 + pfVar1[2] * fVar7 + pfVar1[3] * fVar6;
  fVar2 = *(float *)(arg2 + 8);
  if (fVar5 < (float)((uint)fVar2 ^ DAT_005be6f0 /* R:u32=2147483648 */)) {
    fVar2 = (fVar5 + fVar2) * (fVar5 + fVar2);
  }
  else if (fVar5 <= fVar2) {
    fVar2 = 0.0;
  }
  else {
    fVar2 = (fVar5 - fVar2) * (fVar5 - fVar2);
  }
  fVar2 = fVar2 + fVar3;
  pfVar1 = (float *)Matrix4x4__operator_index__005baf30(this,2);
  fVar4 = fVar4 * pfVar1[1] + fVar8 * *pfVar1 + fVar7 * pfVar1[2] + fVar6 * pfVar1[3];
  fVar3 = *(float *)(arg2 + 0xc);
  if (fVar4 < (float)((uint)fVar3 ^ DAT_005be6f0 /* R:u32=2147483648 */)) {
    return (fVar4 + fVar3) * (fVar4 + fVar3) + fVar2;
  }
  if (fVar3 < fVar4) {
    return (fVar4 - fVar3) * (fVar4 - fVar3) + fVar2;
  }
  return fVar2 + 0.0;
}

/* ======================================================================
 * ClosestPointToBoundingBox__005805b0  (Ghidra `ClosestPointToBoundingBox` @ 005805b0)
 * Signature: uint8_t __stdcall ClosestPointToBoundingBox(FPUVector * arg1, BoundingBox * arg2, FPUVector * arg3)
 * Calls: `ClosestPointToBoundingBox`, `Matrix4x4__operator_index__005baf30`
 * Called by: (none)
 */
/* ClosestPointToBoundingBox(FPUVector const&, BoundingBox const*, FPUVector&) */

void ClosestPointToBoundingBox(FPUVector *arg1,BoundingBox *arg2,FPUVector *arg3)

{
  Matrix4x4 *this;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float *pfVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  this = (Matrix4x4 *)(arg2 + 100);
  fVar1 = *(float *)(arg1 + 0xc);
  fVar2 = *(float *)(arg2 + 0x78);
  fVar15 = *(float *)(arg1 + 8) - fVar2;
  fVar3 = *(float *)(arg2 + 0x74);
  fVar4 = *(float *)(arg2 + 0x70);
  fVar16 = *(float *)(arg1 + 4) - fVar3;
  fVar17 = *(float *)arg1 - fVar4;
  pfVar14 = (float *)Matrix4x4__operator_index__005baf30(this,0);
  fVar5 = *pfVar14;
  fVar6 = pfVar14[1];
  fVar7 = pfVar14[3];
  fVar8 = pfVar14[2];
  fVar18 = fVar17 * fVar5 + fVar16 * fVar6 + fVar1 * fVar7 + fVar15 * fVar8;
  fVar9 = *(float *)(arg2 + 4);
  fVar19 = fVar9;
  if ((fVar18 <= fVar9) &&
     (fVar19 = (float)((uint)fVar9 ^ DAT_005be6f0 /* R:u32=2147483648 */), (float)((uint)fVar9 ^ DAT_005be6f0 /* R:u32=2147483648 */) <= fVar18))
  {
    fVar19 = fVar18;
  }
  pfVar14 = (float *)Matrix4x4__operator_index__005baf30(this,1);
  fVar9 = *pfVar14;
  fVar18 = pfVar14[1];
  fVar10 = pfVar14[3];
  fVar11 = pfVar14[2];
  fVar20 = fVar17 * fVar9 + fVar16 * fVar18 + fVar1 * fVar10 + fVar15 * fVar11;
  fVar12 = *(float *)(arg2 + 8);
  fVar21 = fVar12;
  if ((fVar20 <= fVar12) &&
     (fVar21 = (float)((uint)fVar12 ^ DAT_005be6f0 /* R:u32=2147483648 */), (float)((uint)fVar12 ^ DAT_005be6f0 /* R:u32=2147483648 */) <= fVar20)
     ) {
    fVar21 = fVar20;
  }
  pfVar14 = (float *)Matrix4x4__operator_index__005baf30(this,2);
  fVar12 = pfVar14[1];
  fVar20 = pfVar14[3];
  fVar13 = pfVar14[2];
  fVar16 = fVar17 * *pfVar14 + fVar16 * fVar12 + fVar1 * fVar20 + fVar15 * fVar13;
  fVar1 = *(float *)(arg2 + 0xc);
  fVar15 = fVar1;
  if ((fVar16 <= fVar1) &&
     (fVar15 = (float)((uint)fVar1 ^ DAT_005be6f0 /* R:u32=2147483648 */), (float)((uint)fVar1 ^ DAT_005be6f0 /* R:u32=2147483648 */) <= fVar16))
  {
    fVar15 = fVar16;
  }
  *(float *)arg3 = *pfVar14 * fVar15 + fVar9 * fVar21 + fVar5 * fVar19 + fVar4;
  *(float *)(arg3 + 4) = fVar12 * fVar15 + fVar18 * fVar21 + fVar6 * fVar19 + fVar3;
  *(float *)(arg3 + 8) = fVar15 * fVar13 + fVar11 * fVar21 + fVar19 * fVar8 + fVar2;
  *(float *)(arg3 + 0xc) = fVar15 * fVar20 + fVar21 * fVar10 + fVar7 * fVar19;
  return;
}

/* ======================================================================
 * ClosestPlaneInBoxToPosition  (Ghidra `ClosestPlaneInBoxToPosition` @ 00580860)
 * Signature: uint8_t __stdcall ClosestPlaneInBoxToPosition(FPUVector * arg1, BoundingBox * arg2, Plane * arg3)
 * Calls: (none)
 * Called by: (none)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ClosestPlaneInBoxToPosition(FPUVector const&, BoundingBox const*, Plane*) */

float ClosestPlaneInBoxToPosition(FPUVector *arg1,BoundingBox *arg2,Plane *arg3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  double dVar20;
  float fVar21;
  double dVar22;
  double local_78;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_50;
  float local_4c;
  double local_38;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  fVar1 = *(float *)(arg2 + 0x70);
  fVar2 = *(float *)(arg2 + 0x68);
  fVar3 = *(float *)(arg2 + 0x6c);
  fVar21 = *(float *)(arg2 + 4);
  fVar4 = *(float *)(arg2 + 100);
  fVar5 = *(float *)(arg2 + 0x74);
  fVar6 = *(float *)(arg2 + 0x78);
  fVar19 = *(float *)(arg2 + 8);
  fVar7 = *(float *)(arg1 + 4);
  fVar8 = *(float *)(arg2 + 0xc);
  fVar9 = *(float *)arg1;
  fVar10 = *(float *)(arg1 + 8);
  fVar16 = (fVar19 * fVar2 + fVar1) * fVar2 + (fVar3 * fVar19 + fVar5) * fVar3 +
           fVar5 * fVar19 * fVar5 + (fVar1 * fVar19 + fVar6) * fVar1;
  fVar11 = *(float *)(arg1 + 0xc);
  fVar12 = (fVar7 * fVar3 + fVar9 * fVar2 + fVar10 * fVar1 + fVar11 * fVar5) - fVar16;
  fVar17 = (fVar21 * fVar4 + fVar1) * fVar4 + (fVar2 * fVar21 + fVar5) * fVar2 +
           fVar1 * fVar21 * fVar1 + (fVar3 * fVar21 + fVar6) * fVar3;
  fVar14 = (fVar7 * fVar2 + fVar4 * fVar9 + fVar10 * fVar3 + fVar11 * fVar1) - fVar17;
  fVar18 = (fVar8 * fVar3 + fVar1) * fVar3 + (fVar1 * fVar8 + fVar5) * fVar1 + fVar6 * fVar8 * fVar6
           + (fVar5 * fVar8 + fVar6) * fVar5;
  fVar13 = 0.0;
  fVar15 = (fVar1 * fVar7 + fVar9 * fVar3 + fVar10 * fVar5 + fVar11 * fVar6) - fVar18;
  if (fVar12 < 0.0) {
    local_30 = (float)(DAT_005be6f0 /* R:u32=2147483648 */ ^ (uint)fVar5);
    local_2c = (float)(DAT_005be6f0 /* R:u32=2147483648 */ ^ (uint)fVar1);
    local_28 = (float)(DAT_005be6f0 /* R:u32=2147483648 */ ^ (uint)fVar3);
    local_24 = (float)(DAT_005be6f0 /* R:u32=2147483648 */ ^ (uint)fVar2);
    local_4c = (fVar6 - fVar1 * fVar19) * local_2c +
               (((fVar5 - fVar3 * fVar19) * local_28 + (fVar1 - fVar19 * fVar2) * local_24) -
               fVar5 * fVar19 * local_30);
    local_64 = (local_30 * fVar11 + local_2c * fVar10 + local_24 * fVar9 + local_28 * fVar7) -
               local_4c;
    local_50 = (float)((uint)local_64 & DAT_005be880 /* R:u32=2147483647 */);
    local_38 = (double)local_50;
  }
  else {
    local_38 = _DAT_005dbe58 /* R:0.0f */;
    local_50 = DAT_005c17f0 /* R:100000000.0f */;
    local_4c = 0.0;
    local_30 = 0.0;
    local_2c = 0.0;
    local_28 = 0.0;
    local_24 = 0.0;
    local_64 = DAT_005c17f0 /* R:100000000.0f */;
  }
  if (fVar14 < 0.0) {
    local_20 = (float)(DAT_005be6f0 /* R:u32=2147483648 */ ^ (uint)fVar1);
    local_1c = (float)(DAT_005be6f0 /* R:u32=2147483648 */ ^ (uint)fVar3);
    local_18 = (float)(DAT_005be6f0 /* R:u32=2147483648 */ ^ (uint)fVar2);
    local_14 = (float)((uint)fVar4 ^ DAT_005be6f0 /* R:u32=2147483648 */);
    local_5c = (fVar6 - fVar3 * fVar21) * local_1c +
               (((fVar5 - fVar2 * fVar21) * local_18 + (fVar1 - fVar21 * fVar4) * local_14) -
               fVar1 * fVar21 * local_20);
    local_60 = (local_20 * fVar11 + local_1c * fVar10 + local_14 * fVar9 + local_18 * fVar7) -
               local_5c;
    local_68 = (float)((uint)local_60 & DAT_005be880 /* R:u32=2147483647 */);
  }
  else {
    local_68 = DAT_005c17f0 /* R:100000000.0f */;
    local_5c = 0.0;
    local_20 = 0.0;
    local_1c = 0.0;
    local_18 = 0.0;
    local_14 = 0.0;
    local_60 = DAT_005c17f0 /* R:100000000.0f */;
  }
  if (fVar15 < 0.0) {
    local_10 = (float)((uint)fVar6 ^ DAT_005be6f0 /* R:u32=2147483648 */);
    local_c = (float)((uint)fVar5 ^ DAT_005be6f0 /* R:u32=2147483648 */);
    local_8 = (float)((uint)fVar1 ^ DAT_005be6f0 /* R:u32=2147483648 */);
    local_4 = (float)((uint)fVar3 ^ DAT_005be6f0 /* R:u32=2147483648 */);
    fVar13 = (((fVar1 - fVar8 * fVar3) * local_4 + (fVar5 - fVar1 * fVar8) * local_8) -
             fVar6 * fVar8 * local_10) + (fVar6 - fVar5 * fVar8) * local_c;
    fVar21 = (fVar7 * local_8 + fVar9 * local_4 + local_c * fVar10 + local_10 * fVar11) - fVar13;
    fVar19 = (float)((uint)fVar21 & DAT_005be880 /* R:u32=2147483647 */);
  }
  else {
    local_10 = 0.0;
    local_c = 0.0;
    local_8 = 0.0;
    local_4 = 0.0;
    fVar21 = DAT_005c17f0 /* R:100000000.0f */;
    fVar19 = DAT_005c17f0 /* R:100000000.0f */;
  }
  fVar7 = local_68;
  if (fVar19 <= local_68) {
    fVar7 = fVar19;
  }
  local_78 = (double)fVar7;
  dVar22 = (double)(float)((uint)fVar15 & DAT_005be880 /* R:u32=2147483647 */);
  dVar20 = (double)(float)((uint)fVar14 & DAT_005be880 /* R:u32=2147483647 */);
  if (dVar22 <= dVar20) {
    dVar20 = dVar22;
  }
  dVar22 = (double)(float)(DAT_005be880 /* R:u32=2147483647 */ & (uint)fVar12);
  if (dVar22 <= dVar20) {
    dVar20 = dVar22;
  }
  if (local_38 <= dVar20) {
    dVar20 = local_38;
  }
  if (local_78 <= dVar20) {
    dVar20 = local_78;
  }
  fVar19 = (float)dVar20;
  if ((float)(DAT_005be880 /* R:u32=2147483647 */ & (uint)fVar12) == fVar19) {
    *(float *)arg3 = fVar2;
    *(float *)(arg3 + 4) = fVar3;
    *(float *)(arg3 + 8) = fVar1;
    *(float *)(arg3 + 0xc) = fVar5;
    *(float *)(arg3 + 0x10) = fVar16;
    return fVar12;
  }
  if ((float)((uint)fVar14 & DAT_005be880 /* R:u32=2147483647 */) == fVar19) {
    *(float *)arg3 = fVar4;
    *(float *)(arg3 + 4) = fVar2;
    *(float *)(arg3 + 8) = fVar3;
    *(float *)(arg3 + 0xc) = fVar1;
    *(float *)(arg3 + 0x10) = fVar17;
    return fVar14;
  }
  if ((float)((uint)fVar15 & DAT_005be880 /* R:u32=2147483647 */) != fVar19) {
    if (local_50 == fVar19) {
      *(float *)arg3 = local_24;
      *(float *)(arg3 + 4) = local_28;
      *(float *)(arg3 + 8) = local_2c;
      *(float *)(arg3 + 0xc) = local_30;
      *(float *)(arg3 + 0x10) = local_4c;
      return local_64;
    }
    if (local_68 == fVar19) {
      *(float *)(arg3 + 0x10) = local_5c;
      *(float *)arg3 = local_14;
      *(float *)(arg3 + 4) = local_18;
      *(float *)(arg3 + 8) = local_1c;
      *(float *)(arg3 + 0xc) = local_20;
      return local_60;
    }
    *(float *)(arg3 + 0xc) = local_10;
    *(float *)arg3 = local_4;
    *(float *)(arg3 + 4) = local_8;
    *(float *)(arg3 + 8) = local_c;
    *(float *)(arg3 + 0x10) = fVar13;
    return fVar21;
  }
  *(float *)arg3 = fVar3;
  *(float *)(arg3 + 4) = fVar1;
  *(float *)(arg3 + 8) = fVar5;
  *(float *)(arg3 + 0xc) = fVar6;
  *(float *)(arg3 + 0x10) = fVar18;
  return fVar15;
}

/* ======================================================================
 * ApplyFullScreen  (Ghidra `ApplyFullScreen` @ 00589b00)
 * Signature: uint8_t __stdcall ApplyFullScreen(void * arg1)
 * Calls: (none)
 * Called by: `CreateGraphicsSettingsForm`
 */
/* ApplyFullScreen(void*) */

void ApplyFullScreen(void *arg1)

{
  uint32_t *puVar1;
  
  puVar1 = (uint32_t *)
           (pSelectableResolutions._56_8_ +
           (ulong)*(ushort *)(*(long *)(pResolutionDropDown + 0x528) + 8) * 8);
  gfxCurrState = 1;
  _GFXResetParams._8_4_ = 1;
  _GFXResetParams._0_4_ = *puVar1;
  _GFXResetParams._4_4_ = puVar1[1];
  return;
}

/* ======================================================================
 * ApplyWindowed  (Ghidra `ApplyWindowed` @ 00589b50)
 * Signature: uint8_t __stdcall ApplyWindowed(void * arg1)
 * Calls: (none)
 * Called by: `CreateGraphicsSettingsForm`
 */
/* ApplyWindowed(void*) */

void ApplyWindowed(void *arg1)

{
  uint32_t *puVar1;
  
  puVar1 = (uint32_t *)
           (pSelectableResolutions._56_8_ +
           (ulong)*(ushort *)(*(long *)(pResolutionDropDown + 0x528) + 8) * 8);
  gfxCurrState = 1;
  _GFXResetParams._8_4_ = 0;
  _GFXResetParams._0_4_ = *puVar1;
  _GFXResetParams._4_4_ = puVar1[1];
  return;
}

/* ======================================================================
 * BackupKeyboardCallbacks  (Ghidra `BackupKeyboardCallbacks` @ 0058c520)
 * Signature: uint8_t BackupKeyboardCallbacks(void)
 * Calls: (none)
 * Called by: `UITextField__ClickOn`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* BackupKeyboardCallbacks() */

void BackupKeyboardCallbacks(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  bool bVar10;
  ulong uVar6;
  
  lVar1 = Keyboard;
  puVar9 = (uint64_t *)(Keyboard + 0xc18);
  if (puVar9 != &pBackupKeys) {
    puVar7 = puVar9;
    puVar8 = &pBackupKeys;
    for (lVar2 = 0x200; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
  }
  bVar10 = ((ulong)puVar9 & 1) != 0;
  uVar6 = 0x1000;
  iVar4 = 0x1000;
  if (bVar10) {
    puVar9 = (uint64_t *)(lVar1 + 0xc19);
    *(uint8_t *)(lVar1 + 0xc18) = 0;
    uVar6 = 0xfff;
    iVar4 = 0xfff;
  }
  if (((ulong)puVar9 & 2) == 0) {
    uVar5 = (uint)uVar6;
  }
  else {
    *(uint16_t *)puVar9 = 0;
    puVar9 = (uint64_t *)((long)puVar9 + 2);
    uVar5 = iVar4 - 2;
    uVar6 = (ulong)uVar5;
  }
  if (((ulong)puVar9 & 4) != 0) {
    *(uint32_t *)puVar9 = 0;
    uVar6 = (ulong)(uVar5 - 4);
    puVar9 = (uint64_t *)((long)puVar9 + 4);
  }
  for (uVar3 = uVar6 >> 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  if ((uVar6 & 4) != 0) {
    *(uint32_t *)puVar9 = 0;
    puVar9 = (uint64_t *)((long)puVar9 + 4);
  }
  if ((uVar6 & 2) != 0) {
    *(uint16_t *)puVar9 = 0;
    puVar9 = (uint64_t *)((long)puVar9 + 2);
  }
  if (bVar10) {
    *(uint8_t *)puVar9 = 0;
  }
  return;
}

/* ======================================================================
 * CheckBlockCollidedWith  (Ghidra `CheckBlockCollidedWith` @ 0058e1a0)
 * Signature: uint8_t __stdcall CheckBlockCollidedWith(GRIDBLOCK * arg1, GRIDBLOCK * * arg2, int arg3)
 * Calls: (none)
 * Called by: (none)
 */
/* CheckBlockCollidedWith(GRIDBLOCK*, GRIDBLOCK**, int) */

uint64_t CheckBlockCollidedWith(GRIDBLOCK *arg1,GRIDBLOCK **arg2,int arg3)

{
  long lVar1;
  uint64_t uVar2;
  
  uVar2 = 0;
  if ((0 < arg3) && (uVar2 = 1, *arg2 != arg1)) {
    lVar1 = 0;
    do {
      if (lVar1 == (ulong)(arg3 - 1) << 3) {
        return 0;
      }
      lVar1 = lVar1 + 8;
    } while (*(GRIDBLOCK **)((long)arg2 + lVar1) != arg1);
    uVar2 = 1;
  }
  return uVar2;
}

/* ======================================================================
 * AddLoader  (Ghidra `AddLoader` @ 00592760)
 * Signature: uint8_t __stdcall AddLoader(LoaderFuncCreate * arg1)
 * Calls: (none)
 * Called by: (none)
 */
/* Loader__AddLoader(LoaderFuncCreate const*) */

void Loader__AddLoader(LoaderFuncCreate *arg1)

{
                    /* WARNING: Could not recover jumptable at 0x0059276a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)arg1)(*(uint64_t *)(arg1 + 8));
  return;
}

/* ======================================================================
 * CastLoadNet  (Ghidra `CastLoadNet` @ 005927a0)
 * Signature: uint8_t __stdcall CastLoadNet(LoaderIDNet * arg1)
 * Calls: (none)
 * Called by: (none)
 */
/* Loader__CastLoadNet(LoaderIDNet*) */

void Loader__CastLoadNet(LoaderIDNet *arg1)

{
  pCurrNet = arg1;
  *(uint32_t *)arg1 = 0xffffffff;
  *(uint32_t *)(pCurrNet + 4) = 0;
  return;
}

/* ======================================================================
 * Apply2DPhysics  (Ghidra `Apply2DPhysics` @ 00595a10)
 * Signature: uint8_t __stdcall Apply2DPhysics(SceneObject2D * arg1, float arg2)
 * Calls: `Vector2__operator_assign`, `Vector2__operator_minus_assign`, `Vector2__operator_mul__005be200`, `Vector2__operator_plus__005be140`, `Vector2__operator_plus_assign`
 * Called by: `DrFetus__UpdateShots`, `MeatBoyCharactor__ProcessReplayFrame`, `MeatBoyCharactor__Update`, `RaptureBoss__UpdateMaggot`, `SMBAnimalAirCritterUpdate`, `SMBAnimalAirEnemyUpdate`, `SMBAnimalGroundCritterUpdate`, `SMBAnimalGroundEnemyUpdate`, `SMBAnimal__Update`, `SMBBooUpdate` (+5 more)
 */
/* Apply2DPhysics(SceneObject2D*, float) */

void Apply2DPhysics(SceneObject2D *arg1,float arg2)

{
  Vector2 *this;
  uint32_t uVar1;
  Vector2 local_58 [16];
  Vector2 local_48 [16];
  Vector2 local_38 [16];
  Vector2 local_28 [16];
  
  this = (Vector2 *)(arg1 + 0xb8);
  Vector2__operator_assign((Vector2 *)(arg1 + 0xa8),(Vector2 *)(arg1 + 0xa0));
  Vector2__operator_mul__005be200(local_58,arg2);
  Vector2__operator_plus_assign(this,local_58);
  if (0.0 < *(float *)(arg1 + 0x80)) {
    Vector2__operator_mul__005be200(local_48,arg2 * *(float *)(arg1 + 0x94));
    Vector2__operator_minus_assign(this,local_48);
  }
  Vector2__operator_plus__005be140(local_38,this);
  Vector2__operator_assign((Vector2 *)(arg1 + 0xc0),local_38);
  Vector2__operator_mul__005be200(local_28,arg2);
  Vector2__operator_plus_assign((Vector2 *)(arg1 + 0xa0),local_28);
  *(uint32_t *)(arg1 + 0xf0) = 0;
  *(uint32_t *)(arg1 + 0xec) = 0;
  *(uint32_t *)(arg1 + 0xcc) = 0;
  *(uint32_t *)(arg1 + 200) = 0;
  uVar1 = Vector2__Length((Vector2 *)(arg1 + 0xc0));
  *(uint32_t *)(arg1 + 0x9c) = 1;
  *(uint32_t *)(arg1 + 0x80) = uVar1;
  return;
}

/* ======================================================================
 * Apply3DPhysics  (Ghidra `Apply3DPhysics` @ 00595b30)
 * Signature: uint8_t __stdcall Apply3DPhysics(SceneObject3D * arg1, float arg2)
 * Calls: (none)
 * Called by: (none)
 */
/* Apply3DPhysics(SceneObject3D*, float) */

void Apply3DPhysics(SceneObject3D *arg1,float arg2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint8_t auVar4 [16];
  uint8_t auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar6 = *(float *)(arg1 + 0x110) * arg2 + *(float *)(arg1 + 0xc0);
  *(float *)(arg1 + 0xb0) = *(float *)(arg1 + 0xa0);
  fVar3 = *(float *)(arg1 + 0x114) * arg2 + *(float *)(arg1 + 0xc4);
  fVar8 = *(float *)(arg1 + 0x118) * arg2 + *(float *)(arg1 + 200);
  fVar7 = *(float *)(arg1 + 0x11c) * arg2 + *(float *)(arg1 + 0xcc);
  *(float *)(arg1 + 0xb8) = *(float *)(arg1 + 0xa8);
  *(float *)(arg1 + 0xbc) = *(float *)(arg1 + 0xac);
  *(float *)(arg1 + 0xc0) = fVar6;
  *(float *)(arg1 + 0xc4) = fVar3;
  *(float *)(arg1 + 0xb4) = *(float *)(arg1 + 0xa4);
  *(float *)(arg1 + 200) = fVar8;
  *(float *)(arg1 + 0xcc) = fVar7;
  *(float *)(arg1 + 0xa0) = fVar6 * arg2 + *(float *)(arg1 + 0xa0);
  *(float *)(arg1 + 0xa4) = fVar3 * arg2 + *(float *)(arg1 + 0xa4);
  *(float *)(arg1 + 0xa8) = fVar8 * arg2 + *(float *)(arg1 + 0xa8);
  *(float *)(arg1 + 0xac) = arg2 * fVar7 + *(float *)(arg1 + 0xac);
  fVar1 = DAT_005bf760 /* R:0.0f */;
  fVar2 = SQRT(fVar3 * fVar3 + fVar6 * fVar6 + fVar8 * fVar8 + fVar7 * fVar7);
  *(float *)(arg1 + 0x80) = fVar2;
  if (fVar2 <= fVar1) {
    *(uint64_t *)(arg1 + 0x100) = 0;
    *(uint64_t *)(arg1 + 0x108) = 0;
  }
  else {
    auVar4._4_4_ = fVar3;
    auVar4._0_4_ = fVar6;
    auVar4._12_4_ = fVar7;
    auVar4._8_4_ = fVar8;
    auVar5._4_4_ = fVar2;
    auVar5._0_4_ = fVar2;
    auVar5._8_4_ = fVar2;
    auVar5._12_4_ = fVar2;
    auVar5 = divps(auVar4,auVar5);
    *(long *)(arg1 + 0x100) = auVar5._0_8_;
    *(long *)(arg1 + 0x108) = auVar5._8_8_;
  }
  *(uint32_t *)(arg1 + 0x118) = 0;
  *(uint32_t *)(arg1 + 0x114) = 0;
  *(uint32_t *)(arg1 + 0x110) = 0;
  *(uint32_t *)(arg1 + 0x9c) = 1;
  return;
}

/* ======================================================================
 * AddLayer  (Ghidra `AddLayer` @ 00598e20)
 * Signature: uint8_t __stdcall AddLayer(RenderLayer * arg1)
 * Calls: `AutoLockSection__AutoLockSection`, `AutoLockSection__AutoLockSection__005b59d0`, `SwapLayers`
 * Called by: (none)
 */
/* RenderLayers__AddLayer(RenderLayer*) */

void RenderLayers__AddLayer(RenderLayer *arg1)

{
  RenderLayer *pRVar1;
  AutoLockSection aAStack_18 [16];
  
  AutoLockSection__AutoLockSection(aAStack_18,(CriticalSection *)_RENDERLAYER_SECTION);
  pRVar1 = pHeadLayer;
  if (pHeadLayer == (RenderLayer *)0x0) {
    pHeadLayer = arg1;
    *(uint64_t *)(arg1 + 0x3d0) = 0;
  }
  else {
    do {
      if (pRVar1 == arg1) goto LAB_00598e96;
      pRVar1 = *(RenderLayer **)(pRVar1 + 0x3c8);
    } while (pRVar1 != (RenderLayer *)0x0);
    if (pLastLayer != (RenderLayer *)0x0) {
      *(RenderLayer **)(pLastLayer + 0x3c8) = arg1;
      *(RenderLayer **)(arg1 + 0x3d0) = pLastLayer;
    }
  }
  pLastLayer = arg1;
  if (__UILayer != arg1) {
                    /* try { // try from 00598e91 to 00598e95 has its CatchHandler @ 00598eb8 */
    SwapLayers(__UILayer,arg1);
  }
LAB_00598e96:
  AutoLockSection__AutoLockSection__005b59d0(aAStack_18);
  return;
}

/* ======================================================================
 * ConvertFromPixelToScreen  (Ghidra `ConvertFromPixelToScreen` @ 005a20d0)
 * Signature: uint8_t __stdcall ConvertFromPixelToScreen(Vector2 * arg1, Vector2 * arg2)
 * Calls: (none)
 * Called by: (none)
 */
/* UIFormElement__ConvertFromPixelToScreen(Vector2*, Vector2 const*) */

void UIFormElement__ConvertFromPixelToScreen(Vector2 *arg1,Vector2 *arg2)

{
  *(float *)arg1 = *(float *)arg2 / (float)*(ushort *)(Window + 8);
  *(float *)(arg1 + 4) = *(float *)(arg2 + 4) / (float)*(ushort *)(Window + 10);
  return;
}

/* ======================================================================
 * ConvertPosTo0To1  (Ghidra `ConvertPosTo0To1` @ 005a35e0)
 * Signature: uint8_t __stdcall ConvertPosTo0To1(float * arg1, float * arg2, float arg3, float arg4)
 * Calls: (none)
 * Called by: `GLOBAL_sub_I_ConvertPosTo0To1`
 */
/* ConvertPosTo0To1(float&, float&, float, float) */

void ConvertPosTo0To1(float *arg1,float *arg2,float arg3,float arg4)

{
  float fVar1;
  
  fVar1 = DAT_005be6e4 /* R:0.5f */;
  *arg1 = arg3 + (float)*(ushort *)(Window + 8) * DAT_005be6e4 /* R:0.5f */;
  *arg2 = (float)*(ushort *)(Window + 10) * fVar1 - arg4;
  return;
}

/* ======================================================================
 * AudioStreamingFunc  (Ghidra `AudioStreamingFunc` @ 005a6d70)
 * Signature: uint8_t __stdcall AudioStreamingFunc(void * arg1)
 * Calls: `File__Read`, `File__Seek`, `SyncEvent__Reset`, `SyncEvent__Set`, `SyncEvent__Wait`
 * Called by: `AudioFile__AudioFile`
 */
/* AudioFile__AudioStreamingFunc(void*) */

uint64_t AudioFile__AudioStreamingFunc(void *arg1)

{
  uint uVar1;
  
  if (*(int *)((long)arg1 + 0x2c) == 1) {
    do {
      SyncEvent__Wait((SyncEvent *)((long)arg1 + 0x70));
      SyncEvent__Reset((SyncEvent *)((long)arg1 + 0x70));
      if (*(int *)((long)arg1 + 0x2c) == 0) break;
      File__Seek(*(File **)((long)arg1 + 0x150),
                 *(int *)((long)arg1 + 0x38) + *(int *)((long)arg1 + 0x34));
      uVar1 = *(int *)((long)arg1 + 0x10) - *(int *)((long)arg1 + 0x38);
      if (0x19000 < uVar1) {
        uVar1 = 0x19000;
      }
      uVar1 = File__Read(*(File **)((long)arg1 + 0x150),
                         *(void **)((long)arg1 +
                                   ((long)*(int *)((long)arg1 + 0x3c) + 4) * 0x10),uVar1);
      if (0x19000 < uVar1) {
        uVar1 = 0x19000;
      }
      *(uint *)((long)arg1 + ((long)*(int *)((long)arg1 + 0x3c) + 4) * 0x10 + 8) = uVar1;
      uVar1 = *(int *)((long)arg1 + 0x38) + 0x19000;
      *(uint *)((long)arg1 + 0x38) = uVar1;
      if (((*(byte *)((long)arg1 + 0x30) & 4) != 0) && (*(uint *)((long)arg1 + 0x10) <= uVar1)
         ) {
        *(uint32_t *)((long)arg1 + 0x38) = 0;
      }
      SyncEvent__Set((SyncEvent *)((long)arg1 + 0xd8));
    } while (*(int *)((long)arg1 + 0x2c) == 1);
  }
  SyncEvent__Set((SyncEvent *)((long)arg1 + 0xd8));
  return 0;
}

/* ======================================================================
 * CloseThread  (Ghidra `CloseThread` @ 005b8a10)
 * Signature: uint8_t __stdcall CloseThread(THREADHANDLESTRUCT * arg1)
 * Calls: `free`, `pthread_detach`, `pthread_join`
 * Called by: `AudioFile__AudioFile__005a75c0`, `DisableLoadingRenderThread`, `FinalBoss__Update`, `GSMBChapterData__ResetData`, `GSMBChapterData__SaveData`, `GSMBMenu__GSMBMenu`, `Load`, `SMBChapter__DestroyBossIntro`, `SMBChapter__DestroyBossOutro`, `SMBChapter__PlayBossIntro` (+6 more)
 */
/* CloseThread(THREADHANDLESTRUCT*) */

void CloseThread(THREADHANDLESTRUCT *arg1)

{
  if (arg1 == (THREADHANDLESTRUCT *)0x0) {
    return;
  }
  if (arg1[9] == (THREADHANDLESTRUCT)0x0) {
    if (arg1[8] == (THREADHANDLESTRUCT)0x0) {
      pthread_join(*(pthread_t *)arg1,(void **)0x0);
      free(arg1);
      return;
    }
    pthread_detach(*(pthread_t *)arg1);
  }
  free(arg1);
  return;
}

/* ======================================================================
 * CloseFile  (Ghidra `CloseFile` @ 005b8bf0)
 * Signature: uint8_t __stdcall CloseFile(File * arg1, tagFileClass arg2)
 * Calls: `CriticalSection__Unlock`, `File__File__005b7a70`, `operator_delete`
 * Called by: (none)
 */
/* UnixUserProfile__CloseFile(File*, tagFileClass) */

void UnixUserProfile__CloseFile(long arg1,File *arg2)

{
  if (arg2 != (File *)0x0) {
    File__File__005b7a70(arg2);
    operator_delete(arg2);
  }
  CriticalSection__Unlock((CriticalSection *)(arg1 + 0x28));
  return;
}

/* ======================================================================
 * AllowRender  (Ghidra `AllowRender` @ 005b9900)
 * Signature: uint8_t AllowRender(void)
 * Calls: (none)
 * Called by: `TEngine__EngineRun`, `TEngine__Render`
 */
bool AllowRender(void)

{
  return ((byte)UserAlert__currInterrupt & 1) == 0;
}

/* ======================================================================
 * AllowUpdate  (Ghidra `AllowUpdate` @ 005b9910)
 * Signature: uint8_t AllowUpdate(void)
 * Calls: (none)
 * Called by: `TEngine__Update`
 */
bool AllowUpdate(void)

{
  return ((byte)UserAlert__currInterrupt & 2) == 0;
}

/* ======================================================================
 * AwardAchievement  (Ghidra `AwardAchievement` @ 005ba130)
 * Signature: uint8_t __stdcall AwardAchievement(UserProfile * arg1, AchievementAward * arg2)
 * Calls: `SteamAPI_IsSteamRunning`, `SteamUser`, `SteamUserStats`
 * Called by: (none)
 */
/* Achievements__AwardAchievement(UserProfile*, AchievementAward const*) */

uint64_t Achievements__AwardAchievement(UserProfile *arg1,AchievementAward *arg2)

{
  int iVar1;
  long lVar2;
  char cVar3;
  int *piVar4;
  long *plVar5;
  int iVar6;
  
  if (0 < iNumAchievements) {
    iVar6 = 0;
    iVar1 = *pAchievementDatabase;
    piVar4 = pAchievementDatabase;
    while (iVar1 != *(int *)(arg2 + 4)) {
      piVar4 = piVar4 + 6;
      iVar6 = iVar6 + 1;
      if (iVar6 == iNumAchievements) {
        return 1;
      }
      iVar1 = *piVar4;
    }
    lVar2 = *(long *)(piVar4 + 2);
    if ((((char)piVar4[4] == '\0') && (lVar2 != 0)) &&
       (cVar3 = SteamAPI_IsSteamRunning(), cVar3 != '\0')) {
      plVar5 = (long *)SteamUser();
      cVar3 = (**(code **)(*plVar5 + 8))(plVar5);
      if (cVar3 != '\0') {
        plVar5 = (long *)SteamUserStats();
        (**(code **)(*plVar5 + 0x38))(plVar5,lVar2);
        plVar5 = (long *)SteamUserStats();
        (**(code **)(*plVar5 + 0x50))(plVar5);
      }
    }
  }
  return 1;
}

/* ======================================================================
 * ConvertColorToColor8  (Ghidra `ConvertColorToColor8` @ 005ba280)
 * Signature: uint8_t __stdcall ConvertColorToColor8(ColorTemplate * arg1, ColorTemplate * arg2)
 * Calls: (none)
 * Called by: (none)
 */
/* ColorConversion__ConvertColorToColor8(ColorTemplate<float> const&, ColorTemplate<unsigned char>&)
    */

void ColorConversion__ConvertColorToColor8(ColorTemplate *arg1,ColorTemplate *arg2)

{
  float fVar1;
  
  fVar1 = DAT_005be898 /* R:255.0f */;
  *arg2 = SUB41((int)(*(float *)arg1 * DAT_005be898 /* R:255.0f */),0);
  arg2[1] = SUB41((int)(*(float *)(arg1 + 4) * fVar1),0);
  arg2[2] = SUB41((int)(*(float *)(arg1 + 8) * fVar1),0);
  arg2[3] = SUB41((int)(fVar1 * *(float *)(arg1 + 0xc)),0);
  return;
}

/* ======================================================================
 * ConvertRBGHEXToColor  (Ghidra `ConvertRBGHEXToColor` @ 005ba2d0)
 * Signature: uint8_t __stdcall ConvertRBGHEXToColor(uint arg1, ColorTemplate * arg2)
 * Calls: (none)
 * Called by: (none)
 */
/* ColorConversion__ConvertRBGHEXToColor(unsigned int, ColorTemplate<float>&) */

void ColorConversion__ConvertRBGHEXToColor(uint arg1,ColorTemplate *arg2)

{
  float fVar1;
  
  fVar1 = DAT_005c4890 /* R:0.003921568859368563f */;
  *(uint32_t *)(arg2 + 0xc) = 0x3f800000;
  *(float *)arg2 = (float)(arg1 >> 0x10 & 0xff) * fVar1;
  *(float *)(arg2 + 4) = (float)(arg1 >> 8 & 0xff) * fVar1;
  *(float *)(arg2 + 8) = (float)(arg1 & 0xff) * fVar1;
  return;
}

/* ======================================================================
 * ConvertToRotationMatrix  (Ghidra `ConvertToRotationMatrix` @ 005bc080)
 * Signature: uint8_t __stdcall ConvertToRotationMatrix(Matrix4x4 * arg1, TQuaternion * arg2)
 * Calls: (none)
 * Called by: (none)
 */
/* Matrix4x4__ConvertToRotationMatrix(Matrix4x4*, TQuaternion const*) */

void Matrix4x4__ConvertToRotationMatrix(Matrix4x4 *arg1,TQuaternion *arg2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = DAT_005be894 /* R:1.0f */;
  fVar5 = *(float *)(arg2 + 4) * *(float *)(arg2 + 4) +
          *(float *)(arg2 + 8) * *(float *)(arg2 + 8);
  *(float *)arg1 = DAT_005be894 /* R:1.0f */ - (fVar5 + fVar5);
  fVar5 = *(float *)(arg2 + 8) * *(float *)(arg2 + 0xc) +
          *(float *)(arg2 + 4) * *(float *)arg2;
  *(float *)(arg1 + 0x10) = fVar5 + fVar5;
  fVar5 = *(float *)(arg2 + 8);
  fVar1 = *(float *)(arg2 + 4);
  fVar2 = *(float *)arg2;
  fVar3 = *(float *)(arg2 + 0xc);
  *(uint32_t *)(arg1 + 0x30) = 0;
  fVar5 = fVar5 * fVar2 - fVar1 * fVar3;
  *(float *)(arg1 + 0x20) = fVar5 + fVar5;
  fVar5 = *(float *)(arg2 + 4) * *(float *)arg2 -
          *(float *)(arg2 + 8) * *(float *)(arg2 + 0xc);
  *(float *)(arg1 + 4) = fVar5 + fVar5;
  fVar5 = *(float *)arg2 * *(float *)arg2 + *(float *)(arg2 + 8) * *(float *)(arg2 + 8);
  *(float *)(arg1 + 0x14) = fVar4 - (fVar5 + fVar5);
  fVar5 = *(float *)arg2;
  fVar1 = *(float *)(arg2 + 8);
  fVar2 = *(float *)(arg2 + 0xc);
  fVar3 = *(float *)(arg2 + 4);
  *(uint32_t *)(arg1 + 0x34) = 0;
  fVar5 = fVar5 * fVar2 + fVar1 * fVar3;
  *(float *)(arg1 + 0x24) = fVar5 + fVar5;
  fVar5 = *(float *)(arg2 + 4) * *(float *)(arg2 + 0xc) +
          *(float *)(arg2 + 8) * *(float *)arg2;
  *(float *)(arg1 + 8) = fVar5 + fVar5;
  fVar5 = *(float *)(arg2 + 8) * *(float *)(arg2 + 4) -
          *(float *)arg2 * *(float *)(arg2 + 0xc);
  *(float *)(arg1 + 0x18) = fVar5 + fVar5;
  fVar5 = *(float *)arg2 * *(float *)arg2 + *(float *)(arg2 + 4) * *(float *)(arg2 + 4);
  *(float *)(arg1 + 0x28) = fVar4 - (fVar5 + fVar5);
  *(uint32_t *)(arg1 + 0x38) = 0;
  *(uint32_t *)(arg1 + 0xc) = 0;
  *(uint32_t *)(arg1 + 0x1c) = 0;
  *(uint32_t *)(arg1 + 0x2c) = 0;
  *(float *)(arg1 + 0x3c) = fVar4;
  return;
}

/* ======================================================================
 * ConvertToRotationMatrix__005bc1e0  (Ghidra `ConvertToRotationMatrix` @ 005bc1e0)
 * Signature: uint8_t __stdcall ConvertToRotationMatrix(Matrix4x4 * arg1, float arg2)
 * Calls: `sincosf`
 * Called by: (none)
 */
/* Matrix4x4__ConvertToRotationMatrix(Matrix4x4*, float) */

Matrix4x4 * Matrix4x4__ConvertToRotationMatrix(Matrix4x4 *arg1,float arg2)

{
  uint uVar1;
  float local_10;
  float local_c;
  
  sincosf(arg2,&local_c,&local_10);
  uVar1 = DAT_005be6f0 /* R:u32=2147483648 */;
  *(float *)(arg1 + 0x10) = local_c;
  *(uint32_t *)(arg1 + 0x38) = 0;
  *(uint32_t *)(arg1 + 0x34) = 0;
  *(uint32_t *)(arg1 + 0x30) = 0;
  *(uint32_t *)(arg1 + 0x2c) = 0;
  *(uint32_t *)(arg1 + 0x24) = 0;
  *(uint32_t *)(arg1 + 0x20) = 0;
  *(uint *)(arg1 + 4) = (uint)local_c ^ uVar1;
  *(uint32_t *)(arg1 + 0x1c) = 0;
  *(uint32_t *)(arg1 + 0x18) = 0;
  *(uint32_t *)(arg1 + 0xc) = 0;
  *(uint32_t *)(arg1 + 8) = 0;
  *(float *)arg1 = local_10;
  *(uint32_t *)(arg1 + 0x3c) = 0x3f800000;
  *(uint32_t *)(arg1 + 0x28) = 0x3f800000;
  *(float *)(arg1 + 0x14) = local_10;
  return arg1;
}

/* ======================================================================
 * ConvertToScalingMatrix  (Ghidra `ConvertToScalingMatrix` @ 005bc250)
 * Signature: uint8_t __stdcall ConvertToScalingMatrix(Matrix4x4 * arg1, FPUVector * arg2)
 * Calls: (none)
 * Called by: (none)
 */
/* Matrix4x4__ConvertToScalingMatrix(Matrix4x4*, FPUVector const*) */

Matrix4x4 * Matrix4x4__ConvertToScalingMatrix(Matrix4x4 *arg1,FPUVector *arg2)

{
  *(uint32_t *)(arg1 + 0x38) = 0;
  *(uint32_t *)(arg1 + 0x34) = 0;
  *(uint32_t *)(arg1 + 0x30) = 0;
  *(uint32_t *)(arg1 + 0x2c) = 0;
  *(uint32_t *)(arg1 + 0x24) = 0;
  *(uint32_t *)(arg1 + 0x20) = 0;
  *(uint32_t *)(arg1 + 0x1c) = 0;
  *(uint32_t *)(arg1 + 0x18) = 0;
  *(uint32_t *)(arg1 + 0x10) = 0;
  *(uint32_t *)(arg1 + 0xc) = 0;
  *(uint32_t *)(arg1 + 8) = 0;
  *(uint32_t *)(arg1 + 4) = 0;
  *(uint32_t *)(arg1 + 0x28) = 0x3f800000;
  *(uint32_t *)(arg1 + 0x14) = 0x3f800000;
  *(uint32_t *)arg1 = 0x3f800000;
  *(uint32_t *)(arg1 + 0x3c) = 0x3f800000;
  *(uint32_t *)arg1 = *(uint32_t *)arg2;
  *(uint32_t *)(arg1 + 0x14) = *(uint32_t *)(arg2 + 4);
  *(uint32_t *)(arg1 + 0x28) = *(uint32_t *)(arg2 + 8);
  return arg1;
}

/* ======================================================================
 * ConvertToScalingMatrix__005bc2a0  (Ghidra `ConvertToScalingMatrix` @ 005bc2a0)
 * Signature: uint8_t __stdcall ConvertToScalingMatrix(Matrix4x4 * arg1, Vector2 * arg2)
 * Calls: (none)
 * Called by: (none)
 */
/* Matrix4x4__ConvertToScalingMatrix(Matrix4x4*, Vector2 const*) */

Matrix4x4 * Matrix4x4__ConvertToScalingMatrix(Matrix4x4 *arg1,Vector2 *arg2)

{
  *(uint32_t *)(arg1 + 0x38) = 0;
  *(uint32_t *)(arg1 + 0x34) = 0;
  *(uint32_t *)(arg1 + 0x30) = 0;
  *(uint32_t *)(arg1 + 0x2c) = 0;
  *(uint32_t *)(arg1 + 0x24) = 0;
  *(uint32_t *)(arg1 + 0x20) = 0;
  *(uint32_t *)(arg1 + 0x1c) = 0;
  *(uint32_t *)(arg1 + 0x18) = 0;
  *(uint32_t *)(arg1 + 0x10) = 0;
  *(uint32_t *)(arg1 + 0xc) = 0;
  *(uint32_t *)(arg1 + 8) = 0;
  *(uint32_t *)(arg1 + 4) = 0;
  *(uint32_t *)(arg1 + 0x14) = 0x3f800000;
  *(uint32_t *)arg1 = 0x3f800000;
  *(uint32_t *)(arg1 + 0x3c) = 0x3f800000;
  *(uint32_t *)(arg1 + 0x28) = 0x3f800000;
  *(uint32_t *)arg1 = *(uint32_t *)arg2;
  *(uint32_t *)(arg1 + 0x14) = *(uint32_t *)(arg2 + 4);
  return arg1;
}

/* ======================================================================
 * ConvertToTranslationMatrix  (Ghidra `ConvertToTranslationMatrix` @ 005bc2f0)
 * Signature: uint8_t __stdcall ConvertToTranslationMatrix(Matrix4x4 * arg1, FPUVector * arg2)
 * Calls: (none)
 * Called by: (none)
 */
/* Matrix4x4__ConvertToTranslationMatrix(Matrix4x4*, FPUVector const*) */

Matrix4x4 * Matrix4x4__ConvertToTranslationMatrix(Matrix4x4 *arg1,FPUVector *arg2)

{
  *(uint32_t *)(arg1 + 0x2c) = 0;
  *(uint32_t *)(arg1 + 0x1c) = 0;
  *(uint32_t *)(arg1 + 0xc) = 0;
  *(uint32_t *)(arg1 + 0x38) = 0;
  *(uint32_t *)(arg1 + 0x34) = 0;
  *(uint32_t *)(arg1 + 0x30) = 0;
  *(uint32_t *)(arg1 + 0x24) = 0;
  *(uint32_t *)(arg1 + 0x20) = 0;
  *(uint32_t *)(arg1 + 0x18) = 0;
  *(uint32_t *)(arg1 + 0x10) = 0;
  *(uint32_t *)(arg1 + 8) = 0;
  *(uint32_t *)(arg1 + 4) = 0;
  *(uint32_t *)(arg1 + 0x3c) = 0x3f800000;
  *(uint32_t *)(arg1 + 0x28) = 0x3f800000;
  *(uint32_t *)(arg1 + 0x14) = 0x3f800000;
  *(uint32_t *)arg1 = 0x3f800000;
  *(uint32_t *)(arg1 + 0xc) = *(uint32_t *)arg2;
  *(uint32_t *)(arg1 + 0x1c) = *(uint32_t *)(arg2 + 4);
  *(uint32_t *)(arg1 + 0x2c) = *(uint32_t *)(arg2 + 8);
  return arg1;
}

/* ======================================================================
 * ConvertToPerspectiveMatrix  (Ghidra `ConvertToPerspectiveMatrix` @ 005bcaf0)
 * Signature: uint8_t __stdcall ConvertToPerspectiveMatrix(Matrix4x4 * arg1, float arg2, float arg3, float arg4, float arg5)
 * Calls: `tan`
 * Called by: (none)
 */
/* Matrix4x4__ConvertToPerspectiveMatrix(Matrix4x4*, float, float, float, float) */

Matrix4x4 *
Matrix4x4__ConvertToPerspectiveMatrix
          (Matrix4x4 *arg1,float arg2,float arg3,float arg4,float arg5)

{
  float fVar1;
  double dVar2;
  
  *(uint32_t *)(arg1 + 0x3c) = 0;
  *(uint32_t *)(arg1 + 0x1c) = 0;
  fVar1 = arg2 * DAT_005be6e4 /* R:0.5f */;
  *(uint32_t *)(arg1 + 0xc) = 0;
  *(uint32_t *)(arg1 + 0x18) = 0;
  *(uint32_t *)(arg1 + 8) = 0;
  *(uint32_t *)(arg1 + 0x34) = 0;
  *(uint32_t *)(arg1 + 0x24) = 0;
  *(uint32_t *)(arg1 + 4) = 0;
  *(uint32_t *)(arg1 + 0x30) = 0;
  *(uint32_t *)(arg1 + 0x20) = 0;
  *(uint32_t *)(arg1 + 0x10) = 0;
  *(uint32_t *)(arg1 + 0x38) = 0x3f800000;
  dVar2 = tan((double)fVar1);
  dVar2 = DAT_005c7318 /* R:0.0f */ / dVar2;
  *(float *)(arg1 + 0x14) = (float)dVar2;
  *(float *)arg1 = (float)dVar2 / arg3;
  *(float *)(arg1 + 0x28) = arg5 / (arg5 - arg4);
  *(float *)(arg1 + 0x2c) = (arg5 * arg4) / (arg4 - arg5);
  return arg1;
}

/* ======================================================================
 * ConvertToOrthoMatrix  (Ghidra `ConvertToOrthoMatrix` @ 005bcbb0)
 * Signature: uint8_t __stdcall ConvertToOrthoMatrix(Matrix4x4 * arg1, float arg2, float arg3, float arg4, float arg5, float arg6, float arg7)
 * Calls: (none)
 * Called by: (none)
 */
/* Matrix4x4__ConvertToOrthoMatrix(Matrix4x4*, float, float, float, float, float, float) */

void Matrix4x4__ConvertToOrthoMatrix
               (Matrix4x4 *arg1,float arg2,float arg3,float arg4,float arg5,
               float arg6,float arg7)

{
  float fVar1;
  
  fVar1 = DAT_005c0068 /* R:2.0f */;
  *(uint32_t *)(arg1 + 0x38) = 0;
  *(uint32_t *)(arg1 + 0x18) = 0;
  *(uint32_t *)(arg1 + 8) = 0;
  *(uint32_t *)(arg1 + 0x34) = 0;
  *(uint32_t *)(arg1 + 0x24) = 0;
  *(uint32_t *)(arg1 + 4) = 0;
  *(uint32_t *)(arg1 + 0x30) = 0;
  *(uint32_t *)(arg1 + 0x20) = 0;
  *(uint32_t *)(arg1 + 0x10) = 0;
  *(float *)arg1 = fVar1 / (arg5 - arg4);
  *(float *)(arg1 + 0x14) = fVar1 / (arg2 - arg3);
  *(uint32_t *)(arg1 + 0x3c) = 0x3f800000;
  *(float *)(arg1 + 0x28) = fVar1 / (arg7 - arg6);
  *(float *)(arg1 + 0xc) = (arg5 + arg4) / (arg4 - arg5);
  *(float *)(arg1 + 0x1c) = (arg3 + arg2) / (arg3 - arg2);
  *(float *)(arg1 + 0x2c) = (arg7 + arg6) / (arg6 - arg7);
  return;
}

/* ======================================================================
 * ConvertToLookAtMatrix  (Ghidra `ConvertToLookAtMatrix` @ 005bcc60)
 * Signature: uint8_t __stdcall ConvertToLookAtMatrix(Matrix4x4 * arg1, FPUVector * arg2, FPUVector * arg3, FPUVector * arg4)
 * Calls: (none)
 * Called by: (none)
 */
/* Matrix4x4__ConvertToLookAtMatrix(Matrix4x4*, FPUVector*, FPUVector*, FPUVector*) */

void Matrix4x4__ConvertToLookAtMatrix
               (Matrix4x4 *arg1,FPUVector *arg2,FPUVector *arg3,FPUVector *arg4)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar4 = *(float *)(arg3 + 4) - *(float *)(arg2 + 4);
  fVar3 = *(float *)arg3 - *(float *)arg2;
  fVar2 = *(float *)(arg3 + 8) - *(float *)(arg2 + 8);
  fVar8 = *(float *)(arg3 + 0xc) - *(float *)(arg2 + 0xc);
  fVar5 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2 + fVar8 * fVar8);
  if (DAT_005d3660 /* R:9.999999747378752e-06f */ < fVar5) {
    fVar5 = DAT_005be894 /* R:1.0f */ / fVar5;
    fVar8 = fVar8 * fVar5;
    fVar2 = fVar2 * fVar5;
    fVar4 = fVar4 * fVar5;
    fVar3 = fVar3 * fVar5;
  }
  fVar6 = fVar2 * *(float *)(arg4 + 4) - fVar4 * *(float *)(arg4 + 8);
  fVar7 = *(float *)(arg4 + 8) * fVar3 - fVar2 * *(float *)arg4;
  fVar5 = *(float *)arg4 * fVar4 - *(float *)(arg4 + 4) * fVar3;
  fVar9 = SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5);
  if (DAT_005d3660 /* R:9.999999747378752e-06f */ < fVar9) {
    fVar9 = DAT_005be894 /* R:1.0f */ / fVar9;
    fVar5 = fVar5 * fVar9;
    fVar7 = fVar7 * fVar9;
    fVar6 = fVar6 * fVar9;
  }
  *(float *)arg1 = fVar6;
  *(float *)(arg1 + 4) = fVar7;
  *(float *)(arg1 + 8) = fVar5;
  *(float *)(arg1 + 0x20) = fVar3;
  *(float *)(arg1 + 0x24) = fVar4;
  fVar10 = fVar5 * fVar4 - fVar7 * fVar2;
  *(float *)(arg1 + 0x28) = fVar2;
  *(float *)(arg1 + 0x10) = fVar10;
  fVar11 = fVar6 * fVar2 - fVar5 * fVar3;
  *(float *)(arg1 + 0x14) = fVar11;
  fVar9 = fVar7 * fVar3 - fVar6 * fVar4;
  *(float *)(arg1 + 0x18) = fVar9;
  uVar1 = DAT_005be6f0 /* R:u32=2147483648 */;
  *(uint *)(arg1 + 0xc) =
       (uint)(fVar7 * *(float *)(arg2 + 4) + fVar6 * *(float *)arg2 +
             fVar5 * *(float *)(arg2 + 8)) ^ DAT_005be6f0 /* R:u32=2147483648 */;
  *(uint *)(arg1 + 0x1c) =
       (uint)(*(float *)(arg2 + 4) * fVar11 + fVar10 * *(float *)arg2 +
             fVar9 * *(float *)(arg2 + 8)) ^ uVar1;
  fVar5 = *(float *)(arg2 + 4);
  fVar6 = *(float *)arg2;
  fVar7 = *(float *)(arg2 + 8);
  fVar9 = *(float *)(arg2 + 0xc);
  *(uint32_t *)(arg1 + 0x38) = 0;
  *(uint32_t *)(arg1 + 0x34) = 0;
  *(uint32_t *)(arg1 + 0x30) = 0;
  *(uint32_t *)(arg1 + 0x3c) = 0x3f800000;
  *(uint *)(arg1 + 0x2c) =
       (uint)(fVar4 * fVar5 + fVar3 * fVar6 + fVar2 * fVar7 + fVar8 * fVar9) ^ uVar1;
  return;
}

/* ======================================================================
 * ConvertCHARtoWCHAR  (Ghidra `ConvertCHARtoWCHAR` @ 005bdda0)
 * Signature: uint8_t ConvertCHARtoWCHAR(void)
 * Calls: `malloc`, `strlen`
 * Called by: `SMBEditorForms__Initialize`, `SMB_SAVE_LEVEL_Activate`, `SetText__005763a0`, `SetText__00578630`
 */
void ConvertCHARtoWCHAR(char *arg1,ulong *arg2)

{
  char *pcVar1;
  short *psVar2;
  uint uVar3;
  uint8_t auVar4 [12];
  unkbyte10 Var5;
  size_t sVar6;
  char *pcVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  uint16_t uVar14;
  short sVar21;
  uint8_t auVar22 [16];
  uint8_t auVar30 [14];
  char cVar31;
  uint8_t auVar38 [15];
  uint8_t auVar39 [14];
  uint8_t auVar32 [16];
  uint8_t auVar44 [16];
  uint32_t uVar15;
  undefined6 uVar16;
  uint64_t uVar17;
  uint8_t auVar18 [12];
  uint8_t auVar19 [14];
  uint8_t auVar20 [16];
  uint8_t auVar23 [16];
  uint8_t auVar24 [16];
  uint8_t auVar25 [16];
  uint8_t auVar26 [16];
  uint8_t auVar27 [16];
  uint8_t auVar28 [16];
  uint8_t auVar29 [16];
  uint8_t auVar33 [16];
  uint8_t auVar34 [16];
  uint8_t auVar35 [16];
  uint8_t auVar36 [16];
  uint8_t auVar37 [16];
  char cVar40;
  char cVar41;
  char cVar42;
  char cVar43;
  uint8_t auVar45 [16];
  uint8_t auVar46 [16];
  uint8_t auVar47 [16];
  
  sVar6 = strlen(arg1);
  pcVar7 = (char *)*arg2;
  uVar11 = (uint)sVar6;
  if (pcVar7 == (char *)0x0) {
    pcVar7 = malloc((ulong)(uVar11 + 1) << 2);
  }
  uVar13 = sVar6 & 0xffffffff;
  if (uVar11 != 0) {
    uVar3 = (uint)(sVar6 >> 4);
    uVar8 = uVar3 * 0x10;
    if ((uVar8 == 0) ||
       (uVar11 < 0x10 || pcVar7 <= arg1 + uVar13 && arg1 <= pcVar7 + uVar13 * 4)) {
      uVar8 = 0;
    }
    else {
      lVar9 = 0;
      uVar12 = 0;
      do {
        auVar32 = *(uint8_t (*) [16])(arg1 + lVar9);
        uVar12 = uVar12 + 1;
        auVar38 = SUB1615((uint8_t  [16])0x0,1);
        cVar31 = -(auVar32[0] < '\0');
        cVar40 = -(auVar32[8] < '\0');
        cVar41 = -(auVar32[9] < auVar38[8]);
        cVar42 = -(auVar32[10] < auVar38[9]);
        cVar43 = -(auVar32[0xb] < auVar38[10]);
        auVar29._0_14_ = auVar32._0_14_;
        auVar29[0xe] = auVar32[7];
        auVar29[0xf] = -(auVar32[7] < '\0');
        auVar28._14_2_ = auVar29._14_2_;
        auVar28._0_13_ = auVar32._0_13_;
        auVar28[0xd] = -(auVar32[6] < '\0');
        auVar27._13_3_ = auVar28._13_3_;
        auVar27._0_12_ = auVar32._0_12_;
        auVar27[0xc] = auVar32[6];
        auVar26._12_4_ = auVar27._12_4_;
        auVar26._0_11_ = auVar32._0_11_;
        auVar26[0xb] = -(auVar32[5] < '\0');
        auVar25._11_5_ = auVar26._11_5_;
        auVar25._0_10_ = auVar32._0_10_;
        auVar25[10] = auVar32[5];
        auVar24._10_6_ = auVar25._10_6_;
        auVar24._0_9_ = auVar32._0_9_;
        auVar24[9] = -(auVar32[4] < '\0');
        auVar23._9_7_ = auVar24._9_7_;
        auVar23._0_8_ = auVar32._0_8_;
        auVar23[8] = auVar32[4];
        Var5 = CONCAT91(CONCAT81(auVar23._8_8_,-(auVar32[3] < '\0')),auVar32[3]);
        auVar4._2_10_ = Var5;
        auVar4[1] = -(auVar32[2] < '\0');
        auVar4[0] = auVar32[2];
        auVar30._2_12_ = auVar4;
        auVar30[1] = -(auVar32[1] < '\0');
        auVar30[0] = auVar32[1];
        auVar22._0_2_ = CONCAT11(cVar31,auVar32[0]);
        auVar22._2_14_ = auVar30;
        uVar14 = CONCAT11(cVar40,auVar32[8]);
        uVar15 = CONCAT13(cVar41,CONCAT12(auVar32[9],uVar14));
        uVar16 = CONCAT15(cVar42,CONCAT14(auVar32[10],uVar15));
        uVar17 = CONCAT17(cVar43,CONCAT16(auVar32[0xb],uVar16));
        auVar18._0_10_ = CONCAT19(-(auVar32[0xc] < auVar38[0xb]),CONCAT18(auVar32[0xc],uVar17));
        auVar18[10] = auVar32[0xd];
        auVar18[0xb] = -(auVar32[0xd] < auVar38[0xc]);
        auVar19[0xc] = auVar32[0xe];
        auVar19._0_12_ = auVar18;
        auVar19[0xd] = -(auVar32[0xe] < auVar38[0xd]);
        auVar20[0xe] = auVar32[0xf];
        auVar20._0_14_ = auVar19;
        auVar20[0xf] = -(auVar32[0xf] < auVar38[0xe]);
        auVar39 = SUB1614((uint8_t  [16])0x0,2);
        sVar21 = (short)Var5;
        auVar47._0_12_ = auVar22._0_12_;
        auVar47._12_2_ = sVar21;
        auVar47._14_2_ = -(ushort)(sVar21 < 0);
        auVar46._12_4_ = auVar47._12_4_;
        auVar46._0_10_ = auVar22._0_10_;
        auVar46._10_2_ = -(ushort)(auVar4._0_2_ < 0);
        auVar45._10_6_ = auVar46._10_6_;
        auVar45._0_8_ = auVar22._0_8_;
        auVar45._8_2_ = auVar4._0_2_;
        auVar44._8_8_ = auVar45._8_8_;
        auVar44._6_2_ = -(ushort)(auVar30._0_2_ < 0);
        auVar44._4_2_ = auVar30._0_2_;
        auVar44._2_2_ = -(ushort)(cVar31 < '\0');
        auVar44._0_2_ = auVar22._0_2_;
        psVar2 = (short *)(pcVar7 + lVar9 * 4 + 0x10);
        *psVar2 = auVar23._8_2_;
        psVar2[1] = -(ushort)(auVar23._8_2_ < 0);
        psVar2[2] = auVar25._10_2_;
        psVar2[3] = -(ushort)(auVar25._10_2_ < auVar39._8_2_);
        psVar2[4] = auVar27._12_2_;
        psVar2[5] = -(ushort)(auVar27._12_2_ < auVar39._10_2_);
        psVar2[6] = auVar28._14_2_;
        psVar2[7] = -(ushort)(auVar28._14_2_ < auVar39._12_2_);
        *(uint8_t (*) [16])(pcVar7 + lVar9 * 4) = auVar44;
        auVar30 = SUB1614((uint8_t  [16])0x0,2);
        sVar21 = (short)((unkuint10)auVar18._0_10_ >> 0x40);
        auVar37._12_2_ = (short)((ulong)uVar17 >> 0x30);
        auVar37._0_12_ = auVar18;
        auVar37._14_2_ = -(ushort)(cVar43 < '\0');
        auVar36._12_4_ = auVar37._12_4_;
        auVar36._10_2_ = -(ushort)(cVar42 < '\0');
        auVar36._0_10_ = auVar18._0_10_;
        auVar35._10_6_ = auVar36._10_6_;
        auVar35._8_2_ = (short)((uint6)uVar16 >> 0x20);
        auVar35._0_8_ = uVar17;
        auVar34._8_8_ = auVar35._8_8_;
        auVar34._6_2_ = -(ushort)(cVar41 < '\0');
        auVar34._0_6_ = uVar16;
        auVar33._6_10_ = auVar34._6_10_;
        auVar33._4_2_ = (short)((uint)uVar15 >> 0x10);
        auVar33._0_4_ = uVar15;
        auVar32._4_12_ = auVar33._4_12_;
        auVar32._2_2_ = -(ushort)(cVar40 < '\0');
        auVar32._0_2_ = uVar14;
        *(uint8_t (*) [16])(pcVar7 + lVar9 * 4 + 0x20) = auVar32;
        psVar2 = (short *)(pcVar7 + lVar9 * 4 + 0x30);
        *psVar2 = sVar21;
        psVar2[1] = -(ushort)(sVar21 < 0);
        psVar2[2] = auVar18._10_2_;
        psVar2[3] = -(ushort)(auVar18._10_2_ < auVar30._8_2_);
        psVar2[4] = auVar19._12_2_;
        psVar2[5] = -(ushort)(auVar19._12_2_ < auVar30._10_2_);
        psVar2[6] = auVar20._14_2_;
        psVar2[7] = -(ushort)(auVar20._14_2_ < auVar30._12_2_);
        lVar9 = lVar9 + 0x10;
      } while (uVar12 < (uVar3 & 0xfffffff));
      if (uVar11 == uVar8) goto LAB_005bde90;
    }
    do {
      uVar10 = (ulong)uVar8;
      uVar8 = uVar8 + 1;
      *(int *)(pcVar7 + uVar10 * 4) = (int)arg1[uVar10];
    } while (uVar8 < uVar11);
  }
LAB_005bde90:
  pcVar1 = pcVar7 + uVar13 * 4;
  pcVar1[0] = '\0';
  pcVar1[1] = '\0';
  pcVar1[2] = '\0';
  pcVar1[3] = '\0';
  *arg2 = (ulong)pcVar7;
  return;
}

/* ======================================================================
 * ConvertWCHARtoTCHAR  (Ghidra `ConvertWCHARtoTCHAR` @ 005bdec0)
 * Signature: uint8_t ConvertWCHARtoTCHAR(void)
 * Calls: `malloc`, `safe_wcslen`
 * Called by: `EditorForm_LoadFormOk`, `EditorForm_SaveFormOk`, `EditorForm_UploadFormOk`, `FlashAnimationLibrary__GetEditablTextFieldText`, `SMBLevelPortalInterface__DoSearch`, `SMB_LOAD_LEVEL_Submit`, `SMB_NEW_LEVEL_Submit`, `SMB_SAVE_LEVEL_Submit`
 */
void ConvertWCHARtoTCHAR(wchar_t *arg1,ulong *arg2)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  uint8_t auVar3 [16];
  uint8_t auVar4 [16];
  uint8_t auVar5 [16];
  uint8_t auVar6 [16];
  uint8_t auVar7 [16];
  uint8_t auVar8 [16];
  uint8_t auVar9 [16];
  uint8_t auVar10 [16];
  uint8_t auVar11 [16];
  uint8_t auVar12 [16];
  uint8_t auVar13 [16];
  uint8_t auVar14 [16];
  uint8_t auVar15 [16];
  uint8_t auVar16 [16];
  uint8_t auVar17 [16];
  uint8_t auVar18 [16];
  uint8_t auVar19 [16];
  uint8_t auVar20 [16];
  uint8_t auVar21 [16];
  uint8_t auVar22 [16];
  uint uVar23;
  wchar_t *pwVar24;
  uint uVar25;
  long lVar26;
  ulong uVar27;
  uint uVar28;
  uint uVar29;
  ulong uVar30;
  uint8_t auVar31 [16];
  uint8_t auVar35 [16];
  uint8_t auVar39 [16];
  uint8_t auVar43 [16];
  uint8_t auVar51 [16];
  uint8_t auVar59 [16];
  uint8_t auVar67 [16];
  uint8_t auVar32 [16];
  uint8_t auVar36 [16];
  uint8_t auVar40 [16];
  uint8_t auVar44 [16];
  uint8_t auVar52 [16];
  uint8_t auVar60 [16];
  uint8_t auVar68 [16];
  uint8_t auVar45 [16];
  uint8_t auVar53 [16];
  uint8_t auVar61 [16];
  uint8_t auVar69 [16];
  uint8_t auVar33 [16];
  uint8_t auVar37 [16];
  uint8_t auVar41 [16];
  uint8_t auVar46 [16];
  uint8_t auVar54 [16];
  uint8_t auVar62 [16];
  uint8_t auVar70 [16];
  uint8_t auVar47 [16];
  uint8_t auVar55 [16];
  uint8_t auVar63 [16];
  uint8_t auVar71 [16];
  uint8_t auVar34 [16];
  uint8_t auVar38 [16];
  uint8_t auVar42 [16];
  uint8_t auVar48 [16];
  uint8_t auVar56 [16];
  uint8_t auVar64 [16];
  uint8_t auVar72 [16];
  uint8_t auVar49 [16];
  uint8_t auVar57 [16];
  uint8_t auVar65 [16];
  uint8_t auVar73 [16];
  uint8_t auVar50 [16];
  uint8_t auVar58 [16];
  uint8_t auVar66 [16];
  uint8_t auVar74 [16];
  
  uVar23 = safe_wcslen(arg1);
  pwVar24 = (wchar_t *)*arg2;
  if (pwVar24 == (wchar_t *)0x0) {
    pwVar24 = malloc((ulong)(uVar23 + 1));
  }
  uVar30 = (ulong)uVar23;
  if (uVar23 != 0) {
    uVar29 = uVar23 >> 4;
    uVar25 = uVar29 << 4;
    if ((uVar29 == 0) ||
       (uVar23 < 0x10 ||
        pwVar24 <= arg1 + uVar30 && arg1 <= (wchar_t *)((long)pwVar24 + uVar30))) {
      uVar25 = 0;
    }
    else {
      lVar26 = 0;
      uVar28 = 0;
      do {
        auVar3 = *(uint8_t (*) [16])(arg1 + lVar26 + 4);
        uVar28 = uVar28 + 1;
        auVar4 = *(uint8_t (*) [16])(arg1 + lVar26);
        auVar34._0_12_ = auVar4._0_12_;
        auVar34._12_2_ = auVar4._6_2_;
        auVar34._14_2_ = auVar3._6_2_;
        auVar33._12_4_ = auVar34._12_4_;
        auVar33._0_10_ = auVar4._0_10_;
        auVar33._10_2_ = auVar3._4_2_;
        auVar32._10_6_ = auVar33._10_6_;
        auVar32._0_8_ = auVar4._0_8_;
        auVar32._8_2_ = auVar4._4_2_;
        auVar5._2_8_ = auVar32._8_8_;
        auVar5._0_2_ = auVar3._2_2_;
        auVar5._10_6_ = 0;
        auVar31._12_4_ = 0;
        auVar31._0_12_ = SUB1612(auVar5 << 0x30,4);
        auVar31 = auVar31 << 0x20;
        pwVar1 = arg1 + lVar26 + 0xc;
        auVar38._0_12_ = auVar31._0_12_;
        auVar38._12_2_ = auVar3._2_2_;
        auVar38._14_2_ = auVar3._10_2_;
        auVar37._12_4_ = auVar38._12_4_;
        auVar37._0_10_ = auVar31._0_10_;
        auVar37._10_2_ = auVar4._10_2_;
        auVar36._10_6_ = auVar37._10_6_;
        auVar36._0_8_ = auVar31._0_8_;
        auVar36._8_2_ = auVar4._2_2_;
        auVar6._2_8_ = auVar36._8_8_;
        auVar6._0_2_ = auVar3._8_2_;
        auVar6._10_6_ = 0;
        auVar35._12_4_ = 0;
        auVar35._0_12_ = SUB1612(auVar6 << 0x30,4);
        auVar35 = auVar35 << 0x20;
        pwVar2 = arg1 + lVar26 + 8;
        auVar42._0_12_ = auVar35._0_12_;
        auVar42._12_2_ = auVar3._8_2_;
        auVar42._14_2_ = auVar3._12_2_;
        auVar41._12_4_ = auVar42._12_4_;
        auVar41._0_10_ = auVar35._0_10_;
        auVar41._10_2_ = auVar3._4_2_;
        auVar40._10_6_ = auVar41._10_6_;
        auVar40._0_8_ = auVar35._0_8_;
        auVar40._8_2_ = auVar3._0_2_;
        auVar7._2_8_ = auVar40._8_8_;
        auVar7._0_2_ = auVar4._12_2_;
        auVar7._10_6_ = 0;
        auVar39._12_4_ = 0;
        auVar39._0_12_ = SUB1612(auVar7 << 0x30,4);
        auVar39 = auVar39 << 0x20;
        auVar50._0_14_ = auVar39._0_14_;
        auVar50[0xe] = auVar4[0xd];
        auVar50[0xf] = *(uint8_t *)((long)pwVar2 + 0xd);
        auVar49._14_2_ = auVar50._14_2_;
        auVar49._0_13_ = auVar39._0_13_;
        auVar49[0xd] = (char)pwVar2[3];
        auVar48._13_3_ = auVar49._13_3_;
        auVar48._0_12_ = auVar39._0_12_;
        auVar48[0xc] = auVar4[0xc];
        auVar47._12_4_ = auVar48._12_4_;
        auVar47._0_11_ = auVar39._0_11_;
        auVar47[0xb] = *(uint8_t *)((long)pwVar2 + 9);
        auVar46._11_5_ = auVar47._11_5_;
        auVar46._0_10_ = auVar39._0_10_;
        auVar46[10] = auVar4[9];
        auVar45._10_6_ = auVar46._10_6_;
        auVar45._0_9_ = auVar39._0_9_;
        auVar45[9] = (char)pwVar2[2];
        auVar44._9_7_ = auVar45._9_7_;
        auVar44._0_8_ = auVar39._0_8_;
        auVar44[8] = auVar4[8];
        auVar12._1_8_ = auVar44._8_8_;
        auVar12[0] = *(uint8_t *)((long)pwVar2 + 5);
        auVar12._9_7_ = 0;
        auVar11._10_6_ = 0;
        auVar11._0_10_ = SUB1610(auVar12 << 0x38,6);
        auVar10._11_5_ = 0;
        auVar10._0_11_ = SUB1611(auVar11 << 0x30,5);
        auVar9._12_4_ = 0;
        auVar9._0_12_ = SUB1612(auVar10 << 0x28,4);
        auVar8._13_3_ = 0;
        auVar8._0_13_ = SUB1613(auVar9 << 0x20,3);
        auVar67[0] = auVar4[0];
        auVar43._14_2_ = 0;
        auVar43._0_14_ = SUB1614(auVar8 << 0x18,2);
        auVar43 = auVar43 << 0x10;
        auVar58._0_14_ = auVar43._0_14_;
        auVar58[0xe] = *(uint8_t *)((long)pwVar2 + 5);
        auVar58[0xf] = *(uint8_t *)((long)pwVar1 + 5);
        auVar57._14_2_ = auVar58._14_2_;
        auVar57._0_13_ = auVar43._0_13_;
        auVar57[0xd] = auVar3[5];
        auVar56._13_3_ = auVar57._13_3_;
        auVar56._0_12_ = auVar43._0_12_;
        auVar56[0xc] = auVar4[5];
        auVar55._12_4_ = auVar56._12_4_;
        auVar55._0_11_ = auVar43._0_11_;
        auVar55[0xb] = (char)pwVar1[1];
        auVar54._11_5_ = auVar55._11_5_;
        auVar54._0_10_ = auVar43._0_10_;
        auVar54[10] = (char)pwVar2[1];
        auVar53._10_6_ = auVar54._10_6_;
        auVar53._0_9_ = auVar43._0_9_;
        auVar53[9] = auVar3[4];
        auVar52._9_7_ = auVar53._9_7_;
        auVar52._0_8_ = auVar43._0_8_;
        auVar52[8] = auVar4[4];
        auVar17._1_8_ = auVar52._8_8_;
        auVar17[0] = *(uint8_t *)((long)pwVar1 + 1);
        auVar17._9_7_ = 0;
        auVar16._10_6_ = 0;
        auVar16._0_10_ = SUB1610(auVar17 << 0x38,6);
        auVar15._11_5_ = 0;
        auVar15._0_11_ = SUB1611(auVar16 << 0x30,5);
        auVar14._12_4_ = 0;
        auVar14._0_12_ = SUB1612(auVar15 << 0x28,4);
        auVar13._13_3_ = 0;
        auVar13._0_13_ = SUB1613(auVar14 << 0x20,3);
        auVar51._14_2_ = 0;
        auVar51._0_14_ = SUB1614(auVar13 << 0x18,2);
        auVar51 = auVar51 << 0x10;
        auVar66._0_14_ = auVar51._0_14_;
        auVar66[0xe] = *(uint8_t *)((long)pwVar1 + 1);
        auVar66[0xf] = *(uint8_t *)((long)pwVar1 + 9);
        auVar65._14_2_ = auVar66._14_2_;
        auVar65._0_13_ = auVar51._0_13_;
        auVar65[0xd] = *(uint8_t *)((long)pwVar2 + 9);
        auVar64._13_3_ = auVar65._13_3_;
        auVar64._0_12_ = auVar51._0_12_;
        auVar64[0xc] = *(uint8_t *)((long)pwVar2 + 1);
        auVar63._12_4_ = auVar64._12_4_;
        auVar63._0_11_ = auVar51._0_11_;
        auVar63[0xb] = auVar3[9];
        auVar62._11_5_ = auVar63._11_5_;
        auVar62._0_10_ = auVar51._0_10_;
        auVar62[10] = auVar3[1];
        auVar61._10_6_ = auVar62._10_6_;
        auVar61._0_9_ = auVar51._0_9_;
        auVar61[9] = auVar4[9];
        auVar60._9_7_ = auVar61._9_7_;
        auVar60._0_8_ = auVar51._0_8_;
        auVar60[8] = auVar4[1];
        auVar22._1_8_ = auVar60._8_8_;
        auVar22[0] = (char)pwVar1[2];
        auVar22._9_7_ = 0;
        auVar21._10_6_ = 0;
        auVar21._0_10_ = SUB1610(auVar22 << 0x38,6);
        auVar20._11_5_ = 0;
        auVar20._0_11_ = SUB1611(auVar21 << 0x30,5);
        auVar19._12_4_ = 0;
        auVar19._0_12_ = SUB1612(auVar20 << 0x28,4);
        auVar18._13_3_ = 0;
        auVar18._0_13_ = SUB1613(auVar19 << 0x20,3);
        auVar59._14_2_ = 0;
        auVar59._0_14_ = SUB1614(auVar18 << 0x18,2);
        auVar59 = auVar59 << 0x10;
        auVar74._0_14_ = auVar59._0_14_;
        auVar74[0xe] = (char)pwVar1[2];
        auVar74[0xf] = (char)pwVar1[3];
        auVar73._14_2_ = auVar74._14_2_;
        auVar73._0_13_ = auVar59._0_13_;
        auVar73[0xd] = (char)pwVar1[1];
        auVar72._13_3_ = auVar73._13_3_;
        auVar72._0_12_ = auVar59._0_12_;
        auVar72[0xc] = (char)*pwVar1;
        auVar71._12_4_ = auVar72._12_4_;
        auVar71._0_11_ = auVar59._0_11_;
        auVar71[0xb] = (char)pwVar2[3];
        auVar70._11_5_ = auVar71._11_5_;
        auVar70._0_10_ = auVar59._0_10_;
        auVar70[10] = (char)pwVar2[2];
        auVar69._10_6_ = auVar70._10_6_;
        auVar69._0_9_ = auVar59._0_9_;
        auVar69[9] = (char)pwVar2[1];
        auVar68._9_7_ = auVar69._9_7_;
        auVar68._0_8_ = auVar59._0_8_;
        auVar68[8] = (char)*pwVar2;
        auVar67._8_8_ = auVar68._8_8_;
        auVar67[7] = auVar3[0xc];
        auVar67[6] = auVar3[8];
        auVar67[5] = auVar3[4];
        auVar67[4] = auVar3[0];
        auVar67[3] = auVar4[0xc];
        auVar67[2] = auVar4[8];
        auVar67[1] = auVar4[4];
        *(uint8_t (*) [16])((long)pwVar24 + lVar26) = auVar67;
        lVar26 = lVar26 + 0x10;
      } while (uVar28 < uVar29);
      if (uVar23 == uVar25) goto LAB_005bdfd0;
    }
    do {
      uVar27 = (ulong)uVar25;
      uVar25 = uVar25 + 1;
      *(char *)((long)pwVar24 + uVar27) = (char)arg1[uVar27];
    } while (uVar25 < uVar23);
  }
LAB_005bdfd0:
  *(uint8_t *)((long)pwVar24 + uVar30) = 0;
  *arg2 = (ulong)pwVar24;
  return;
}
