/* src/game/classes/TResourceCreator.c — 8 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "TResourceCreator.h"

/* ======================================================================
 * TResourceCreator__AddResourceCreationFunction  (Ghidra `AddResourceCreationFunction` @ 005990d0)
 * Signature: uint8_t __thiscall AddResourceCreationFunction(TResourceCreator * self, _func_void_void_ptr * arg1, void * arg2)
 * Class: TResourceCreator
 * Calls: `free`, `malloc`, `memcpy`
 * Called by: `CommanderVideo__CommanderVideo__00464c70`, `FlashAnimationLibrary__FlashAnimationLibrary__00576680`, `FontEmitter__FontEmitter__005861d0`, `GMeatHUD__GMeatHUD__004800c0`, `GSMBMenu__GSMBMenu__004d8690`, `GSetPieceWayPoints__GSetPieceWayPoints__0059efd0`, `GSuperMeatBoy__Initialize__00516f60`, `GSuperMeatBoy__SetCurrentLevel`, `OpenGLGraphics__OpenGLGraphics`, `RibbonEmitter__RibbonEmitter__0059ac20` (+9 more)
 */
/* TResourceCreator__AddResourceCreationFunction(void (*)(void*), void*) */

void __thiscall TResourceCreator__AddResourceCreationFunction(TResourceCreator *self,
                                                              _func_void_void_ptr *arg1, void *arg2)

{
  int iVar1;
  void *pvVar2;
  ushort uVar3;
  short sVar4;
  void *pvVar5;
  void *pvVar6;
  ulong uVar7;
  ushort uVar8;
  ushort *puVar9;
  ulong uVar10;
  uint64_t *puVar11;
  bool bVar12;
  byte bVar13;

  bVar13 = 0;
  if (*(int *)(self + 0x48) == -0x5eef3582) {
    uVar3 = *(ushort *)(self + 0x28);
    if (*(ushort *)(self + 0x2a) <= uVar3) {
      uVar3 = *(ushort *)(self + 0x2a) + *(short *)(self + 0x34);
      uVar7 = (ulong)(byte)self[0x2c];
      pvVar5 = (void *)0x0;
      pvVar2 = *(void **)(self + 0x38);
      *(ushort *)(self + 0x2a) = uVar3;
      uVar10 = (ulong)uVar3 * 0x18;
      pvVar6 = malloc(uVar7 + 0x10 + uVar10);
      if (pvVar6 != (void *)0x0) {
        pvVar5 = (void *)((long)pvVar6 + 0x10U + (uVar7 - ((long)pvVar6 + 0x10U) % uVar7) % uVar7);
        *(ulong *)((long)pvVar5 + -0x10) = uVar10;
        *(void **)((long)pvVar5 + -8) = pvVar6;
        if (pvVar2 != (void *)0x0) {
          uVar7 = *(ulong *)((long)pvVar2 + -0x10);
          if (uVar10 <= *(ulong *)((long)pvVar2 + -0x10)) {
            uVar7 = uVar10;
          }
          memcpy(pvVar5, pvVar2, uVar7);
          free(*(void **)((long)pvVar2 + -8));
        }
      }
      pvVar2 = *(void **)(self + 0x40);
      *(void **)(self + 0x38) = pvVar5;
      if (pvVar2 != (void *)0x0) {
        uVar8 = *(ushort *)(self + 0x2a);
        uVar7 = (ulong)(byte)self[0x2c];
        pvVar5 = (void *)0x0;
        uVar10 = (ulong)uVar8 * 2;
        pvVar6 = malloc(uVar7 + 0x10 + uVar10);
        if (pvVar6 != (void *)0x0) {
          pvVar5 =
              (void *)((long)pvVar6 + 0x10U + (uVar7 - ((long)pvVar6 + 0x10U) % uVar7) % uVar7);
          *(ulong *)((long)pvVar5 + -0x10) = uVar10;
          *(void **)((long)pvVar5 + -8) = pvVar6;
          uVar7 = *(ulong *)((long)pvVar2 + -0x10);
          if (uVar10 <= *(ulong *)((long)pvVar2 + -0x10)) {
            uVar7 = uVar10;
          }
          memcpy(pvVar5, pvVar2, uVar7);
          free(*(void **)((long)pvVar2 + -8));
          uVar8 = *(ushort *)(self + 0x2a);
        }
        uVar3 = *(ushort *)(self + 0x28);
        *(void **)(self + 0x40) = pvVar5;
        if (uVar8 <= uVar3)
          goto LAB_005991ba;
        while (true) {
          uVar10 = (ulong)uVar3;
          uVar3 = uVar3 + 1;
          *(uint16_t *)((long)pvVar5 + uVar10 * 2) = 0xffff;
          if (uVar8 <= uVar3)
            break;
          pvVar5 = *(void **)(self + 0x40);
        }
      }
      iVar1 = *(int *)(self + 0x30);
      uVar3 = *(ushort *)(self + 0x28);
      goto joined_r0x0059935f;
    }
  } else {
    uVar10 = (ulong)(byte)self[0x2c];
    *(uint32_t *)(self + 0x30) = 0;
    pvVar5 = malloc(uVar10 + 0x88);
    puVar11 = (uint64_t *)0x0;
    if (pvVar5 != (void *)0x0) {
      puVar11 =
          (uint64_t *)((long)pvVar5 + 0x10U + (uVar10 - ((long)pvVar5 + 0x10U) % uVar10) % uVar10);
      puVar11[-2] = 0x78;
      puVar11[-1] = pvVar5;
    }
    bVar12 = ((ulong)puVar11 & 1) != 0;
    *(uint64_t **)(self + 0x38) = puVar11;
    uVar10 = 0x78;
    if (bVar12) {
      *(uint8_t *)puVar11 = 0;
      uVar10 = 0x77;
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
      puVar11 = puVar11 + (ulong)bVar13 * -2 + 1;
    }
    if ((uVar10 & 4) != 0) {
      *(uint32_t *)puVar11 = 0;
      puVar11 = (uint64_t *)((long)puVar11 + 4);
    }
    if ((uVar10 & 2) != 0) {
      *(uint16_t *)puVar11 = 0;
      puVar11 = (uint64_t *)((long)puVar11 + 2);
    }
    if (bVar12) {
      *(uint8_t *)puVar11 = 0;
    }
    *(uint16_t *)(self + 0x28) = 0;
    *(uint16_t *)(self + 0x2a) = 5;
    uVar3 = 0;
    *(uint32_t *)(self + 0x48) = 0xa110ca7e;
    *(uint16_t *)(self + 0x34) = 5;
  }
LAB_005991ba:
  iVar1 = *(int *)(self + 0x30);
joined_r0x0059935f:
  if ((iVar1 == 1) && (*(short *)(self + 0x2a) != 0)) {
    puVar9 = *(ushort **)(self + 0x40);
    sVar4 = 1;
    uVar8 = *puVar9;
    while (uVar8 != 0xffff) {
      puVar9 = puVar9 + 1;
      if (sVar4 == *(short *)(self + 0x2a))
        goto LAB_005991c4;
      sVar4 = sVar4 + 1;
      uVar8 = *puVar9;
    }
    *puVar9 = uVar3;
    uVar3 = *(ushort *)(self + 0x28);
  }
LAB_005991c4:
  puVar11 = (uint64_t *)(*(long *)(self + 0x38) + (ulong)uVar3 * 0x18);
  *puVar11 = arg1;
  puVar11[1] = arg2;
  *(uint32_t *)(puVar11 + 2) = 0;
  *(short *)(self + 0x28) = *(short *)(self + 0x28) + 1;
  return;
}

/* ======================================================================
 * TResourceCreator__RemoveResourceCreationFunction  (Ghidra `RemoveResourceCreationFunction` @ 00599420)
 * Signature: uint8_t __thiscall RemoveResourceCreationFunction(TResourceCreator * self, _func_void_void_ptr * arg1, void * arg2)
 * Class: TResourceCreator
 * Calls: (none)
 * Called by: `CommanderVideo__CommanderVideo`, `FlashAnimationLibrary__FlashAnimationLibrary`, `FontEmitter__FontEmitter`, `FontEmitter__FontEmitter__00584db0`, `GMeatHUD__GMeatHUD`, `GSMBMenu__GSMBMenu`, `GSetPieceWayPoints__GSetPieceWayPoints`, `GSuperMeatBoy__GSuperMeatBoy__00512120`, `GSuperMeatBoy__SetCurrentLevel`, `RibbonEmitter__RibbonEmitter` (+8 more)
 */
/* TResourceCreator__RemoveResourceCreationFunction(void (*)(void*), void*) */

void __thiscall TResourceCreator__RemoveResourceCreationFunction(TResourceCreator *self,
                                                                 _func_void_void_ptr *arg1,
                                                                 void *arg2)

{
  uint64_t *puVar1;
  ushort *puVar2;
  ushort uVar3;
  short sVar4;
  long *plVar5;
  long lVar6;
  uint uVar7;
  ushort uVar8;
  uint uVar9;
  ushort uVar10;
  long *plVar11;

  uVar8 = *(ushort *)(self + 0x28);
  uVar9 = (uint)uVar8;
  if (_bBulkDeleteResources != 0) {
    uVar7 = 0;
    if (uVar8 == 0) {
      return;
    }
    do {
      while ((plVar11 = (long *)(*(long *)(self + 0x38) + (ulong)(uVar7 & 0xffff) * 0x18),
              arg1 != (_func_void_void_ptr *)*plVar11 || (arg2 != (void *)plVar11[1]))) {
        uVar7 = uVar7 + 1;
        if ((int)uVar9 <= (int)uVar7) {
          return;
        }
      }
      *(uint32_t *)(plVar11 + 2) = 1;
      uVar9 = (uint) * (ushort *)(self + 0x28);
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < (int)uVar9);
    return;
  }
  if (uVar8 != 0) {
    plVar11 = *(long **)(self + 0x38);
    uVar10 = 0;
    plVar5 = plVar11;
    do {
      if ((arg1 == (_func_void_void_ptr *)*plVar5) && (arg2 == (void *)plVar5[1])) {
        uVar9 = (uint)uVar10;
        if ((uVar9 + 1 < (uint)uVar8) && ((int)uVar9 < (int)(uVar8 - 1))) {
          lVar6 = (ulong)uVar10 * 0x18;
          uVar7 = uVar9;
          while (true) {
            puVar1 = (uint64_t *)((long)plVar11 + lVar6);
            uVar7 = uVar7 + 1;
            *puVar1 = *(uint64_t *)((long)plVar11 + lVar6 + 0x18);
            puVar1[1] = *(uint64_t *)((long)plVar11 + lVar6 + 0x20);
            puVar1[2] = *(uint64_t *)((long)plVar11 + lVar6 + 0x28);
            uVar8 = *(ushort *)(self + 0x28);
            if ((int)(uVar8 - 1) <= (int)uVar7)
              break;
            plVar11 = *(long **)(self + 0x38);
            lVar6 = lVar6 + 0x18;
          }
        }
        if ((*(int *)(self + 0x30) == 1) && (uVar10 = *(ushort *)(self + 0x2a), uVar10 != 0)) {
          uVar8 = 0;
          do {
            puVar2 = (ushort *)(*(long *)(self + 0x40) + (ulong)uVar8 * 2);
            uVar3 = *puVar2;
            if (uVar9 == uVar3) {
              *puVar2 = 0xffff;
              uVar10 = *(ushort *)(self + 0x2a);
            } else if ((uVar9 < uVar3) && ((ushort)(uVar3 - 1) < 0xfffe)) {
              *puVar2 = uVar3 - 1;
              uVar10 = *(ushort *)(self + 0x2a);
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 < uVar10);
          uVar8 = *(ushort *)(self + 0x28);
        }
        sVar4 = 0;
        if (uVar8 != 0) {
          sVar4 = uVar8 - 1;
        }
        *(short *)(self + 0x28) = sVar4;
        return;
      }
      uVar10 = uVar10 + 1;
      plVar5 = plVar5 + 3;
    } while (uVar10 != uVar8);
  }
  return;
}

/* ======================================================================
 * TResourceCreator__AddResourceDestroyFunction  (Ghidra `AddResourceDestroyFunction` @ 005995a0)
 * Signature: uint8_t __thiscall AddResourceDestroyFunction(TResourceCreator * self, _func_void_void_ptr * arg1, void * arg2)
 * Class: TResourceCreator
 * Calls: `free`, `malloc`, `memcpy`
 * Called by: `CommanderVideo__CommanderVideo__00464c70`, `FlashAnimationLibrary__FlashAnimationLibrary__00576680`, `FontEmitter__FontEmitter__005861d0`, `GMeatHUD__GMeatHUD__004800c0`, `GSMBMenu__GSMBMenu__004d8690`, `GSetPieceWayPoints__GSetPieceWayPoints__0059efd0`, `RibbonEmitter__RibbonEmitter__0059ac20`, `SMBBloodExplosion__SMBBloodExplosion`, `SMBEditor__SMBEditor__004ad010`, `SMBPalette__SMBPalette__004f3ca0` (+5 more)
 */
/* TResourceCreator__AddResourceDestroyFunction(void (*)(void*), void*) */

void __thiscall TResourceCreator__AddResourceDestroyFunction(TResourceCreator *self,
                                                             _func_void_void_ptr *arg1, void *arg2)

{
  int iVar1;
  void *pvVar2;
  ushort uVar3;
  short sVar4;
  void *pvVar5;
  void *pvVar6;
  ulong uVar7;
  ushort uVar8;
  ushort *puVar9;
  ulong uVar10;
  uint64_t *puVar11;
  bool bVar12;
  byte bVar13;

  bVar13 = 0;
  if (*(int *)(self + 0x98) == -0x5eef3582) {
    uVar3 = *(ushort *)(self + 0x78);
    if (*(ushort *)(self + 0x7a) <= uVar3) {
      uVar3 = *(ushort *)(self + 0x7a) + *(short *)(self + 0x84);
      uVar7 = (ulong)(byte)self[0x7c];
      pvVar5 = (void *)0x0;
      pvVar2 = *(void **)(self + 0x88);
      *(ushort *)(self + 0x7a) = uVar3;
      uVar10 = (ulong)uVar3 * 0x18;
      pvVar6 = malloc(uVar7 + 0x10 + uVar10);
      if (pvVar6 != (void *)0x0) {
        pvVar5 = (void *)((long)pvVar6 + 0x10U + (uVar7 - ((long)pvVar6 + 0x10U) % uVar7) % uVar7);
        *(ulong *)((long)pvVar5 + -0x10) = uVar10;
        *(void **)((long)pvVar5 + -8) = pvVar6;
        if (pvVar2 != (void *)0x0) {
          uVar7 = *(ulong *)((long)pvVar2 + -0x10);
          if (uVar10 <= *(ulong *)((long)pvVar2 + -0x10)) {
            uVar7 = uVar10;
          }
          memcpy(pvVar5, pvVar2, uVar7);
          free(*(void **)((long)pvVar2 + -8));
        }
      }
      pvVar2 = *(void **)(self + 0x90);
      *(void **)(self + 0x88) = pvVar5;
      if (pvVar2 != (void *)0x0) {
        uVar8 = *(ushort *)(self + 0x7a);
        uVar7 = (ulong)(byte)self[0x7c];
        pvVar5 = (void *)0x0;
        uVar10 = (ulong)uVar8 * 2;
        pvVar6 = malloc(uVar7 + 0x10 + uVar10);
        if (pvVar6 != (void *)0x0) {
          pvVar5 =
              (void *)((long)pvVar6 + 0x10U + (uVar7 - ((long)pvVar6 + 0x10U) % uVar7) % uVar7);
          *(ulong *)((long)pvVar5 + -0x10) = uVar10;
          *(void **)((long)pvVar5 + -8) = pvVar6;
          uVar7 = *(ulong *)((long)pvVar2 + -0x10);
          if (uVar10 <= *(ulong *)((long)pvVar2 + -0x10)) {
            uVar7 = uVar10;
          }
          memcpy(pvVar5, pvVar2, uVar7);
          free(*(void **)((long)pvVar2 + -8));
          uVar8 = *(ushort *)(self + 0x7a);
        }
        uVar3 = *(ushort *)(self + 0x78);
        *(void **)(self + 0x90) = pvVar5;
        if (uVar8 <= uVar3)
          goto LAB_00599699;
        while (true) {
          uVar10 = (ulong)uVar3;
          uVar3 = uVar3 + 1;
          *(uint16_t *)((long)pvVar5 + uVar10 * 2) = 0xffff;
          if (uVar8 <= uVar3)
            break;
          pvVar5 = *(void **)(self + 0x90);
        }
      }
      iVar1 = *(int *)(self + 0x80);
      uVar3 = *(ushort *)(self + 0x78);
      goto joined_r0x00599855;
    }
  } else {
    uVar10 = (ulong)(byte)self[0x7c];
    *(uint32_t *)(self + 0x80) = 0;
    pvVar5 = malloc(uVar10 + 0x88);
    puVar11 = (uint64_t *)0x0;
    if (pvVar5 != (void *)0x0) {
      puVar11 =
          (uint64_t *)((long)pvVar5 + 0x10U + (uVar10 - ((long)pvVar5 + 0x10U) % uVar10) % uVar10);
      puVar11[-2] = 0x78;
      puVar11[-1] = pvVar5;
    }
    bVar12 = ((ulong)puVar11 & 1) != 0;
    *(uint64_t **)(self + 0x88) = puVar11;
    uVar10 = 0x78;
    if (bVar12) {
      *(uint8_t *)puVar11 = 0;
      uVar10 = 0x77;
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
      puVar11 = puVar11 + (ulong)bVar13 * -2 + 1;
    }
    if ((uVar10 & 4) != 0) {
      *(uint32_t *)puVar11 = 0;
      puVar11 = (uint64_t *)((long)puVar11 + 4);
    }
    if ((uVar10 & 2) != 0) {
      *(uint16_t *)puVar11 = 0;
      puVar11 = (uint64_t *)((long)puVar11 + 2);
    }
    if (bVar12) {
      *(uint8_t *)puVar11 = 0;
    }
    *(uint16_t *)(self + 0x78) = 0;
    *(uint16_t *)(self + 0x7a) = 5;
    uVar3 = 0;
    *(uint32_t *)(self + 0x98) = 0xa110ca7e;
    *(uint16_t *)(self + 0x84) = 5;
  }
LAB_00599699:
  iVar1 = *(int *)(self + 0x80);
joined_r0x00599855:
  if ((iVar1 == 1) && (*(short *)(self + 0x7a) != 0)) {
    puVar9 = *(ushort **)(self + 0x90);
    sVar4 = 1;
    uVar8 = *puVar9;
    while (uVar8 != 0xffff) {
      puVar9 = puVar9 + 1;
      if (sVar4 == *(short *)(self + 0x7a))
        goto LAB_005996a6;
      sVar4 = sVar4 + 1;
      uVar8 = *puVar9;
    }
    *puVar9 = uVar3;
    uVar3 = *(ushort *)(self + 0x78);
  }
LAB_005996a6:
  puVar11 = (uint64_t *)(*(long *)(self + 0x88) + (ulong)uVar3 * 0x18);
  *puVar11 = arg1;
  puVar11[1] = arg2;
  *(uint32_t *)(puVar11 + 2) = 0;
  *(short *)(self + 0x78) = *(short *)(self + 0x78) + 1;
  return;
}

/* ======================================================================
 * TResourceCreator__RemoveResourceDestroyFunction  (Ghidra `RemoveResourceDestroyFunction` @ 00599920)
 * Signature: uint8_t __thiscall RemoveResourceDestroyFunction(TResourceCreator * self, _func_void_void_ptr * arg1, void * arg2)
 * Class: TResourceCreator
 * Calls: (none)
 * Called by: `CommanderVideo__CommanderVideo`, `FlashAnimationLibrary__FlashAnimationLibrary`, `FontEmitter__FontEmitter`, `FontEmitter__FontEmitter__00584db0`, `GMeatHUD__GMeatHUD`, `GSMBMenu__GSMBMenu`, `GSetPieceWayPoints__GSetPieceWayPoints`, `RibbonEmitter__RibbonEmitter`, `SMBBloodExplosion__SMBBloodExplosion__0048cc90`, `SMBEditor__SMBEditor` (+4 more)
 */
/* TResourceCreator__RemoveResourceDestroyFunction(void (*)(void*), void*) */

void __thiscall TResourceCreator__RemoveResourceDestroyFunction(TResourceCreator *self,
                                                                _func_void_void_ptr *arg1,
                                                                void *arg2)

{
  uint64_t *puVar1;
  ushort *puVar2;
  ushort uVar3;
  short sVar4;
  long *plVar5;
  long lVar6;
  uint uVar7;
  ushort uVar8;
  uint uVar9;
  ushort uVar10;
  long *plVar11;

  uVar8 = *(ushort *)(self + 0x78);
  uVar9 = (uint)uVar8;
  if (_bBulkDeleteResources != 0) {
    uVar7 = 0;
    if (uVar8 == 0) {
      return;
    }
    do {
      while ((plVar11 = (long *)(*(long *)(self + 0x88) + (ulong)(uVar7 & 0xffff) * 0x18),
              arg1 != (_func_void_void_ptr *)*plVar11 || (arg2 != (void *)plVar11[1]))) {
        uVar7 = uVar7 + 1;
        if ((int)uVar9 <= (int)uVar7) {
          return;
        }
      }
      *(uint32_t *)(plVar11 + 2) = 1;
      uVar9 = (uint) * (ushort *)(self + 0x78);
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < (int)uVar9);
    return;
  }
  if (uVar8 != 0) {
    plVar11 = *(long **)(self + 0x88);
    uVar10 = 0;
    plVar5 = plVar11;
    do {
      if ((arg1 == (_func_void_void_ptr *)*plVar5) && (arg2 == (void *)plVar5[1])) {
        uVar9 = (uint)uVar10;
        if ((uVar9 + 1 < (uint)uVar8) && ((int)uVar9 < (int)(uVar8 - 1))) {
          lVar6 = (ulong)uVar10 * 0x18;
          uVar7 = uVar9;
          while (true) {
            puVar1 = (uint64_t *)((long)plVar11 + lVar6);
            uVar7 = uVar7 + 1;
            *puVar1 = *(uint64_t *)((long)plVar11 + lVar6 + 0x18);
            puVar1[1] = *(uint64_t *)((long)plVar11 + lVar6 + 0x20);
            puVar1[2] = *(uint64_t *)((long)plVar11 + lVar6 + 0x28);
            uVar8 = *(ushort *)(self + 0x78);
            if ((int)(uVar8 - 1) <= (int)uVar7)
              break;
            plVar11 = *(long **)(self + 0x88);
            lVar6 = lVar6 + 0x18;
          }
        }
        if ((*(int *)(self + 0x80) == 1) && (uVar10 = *(ushort *)(self + 0x7a), uVar10 != 0)) {
          uVar8 = 0;
          do {
            puVar2 = (ushort *)(*(long *)(self + 0x90) + (ulong)uVar8 * 2);
            uVar3 = *puVar2;
            if (uVar9 == uVar3) {
              *puVar2 = 0xffff;
              uVar10 = *(ushort *)(self + 0x7a);
            } else if ((uVar9 < uVar3) && ((ushort)(uVar3 - 1) < 0xfffe)) {
              *puVar2 = uVar3 - 1;
              uVar10 = *(ushort *)(self + 0x7a);
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 < uVar10);
          uVar8 = *(ushort *)(self + 0x78);
        }
        sVar4 = 0;
        if (uVar8 != 0) {
          sVar4 = uVar8 - 1;
        }
        *(short *)(self + 0x78) = sVar4;
        return;
      }
      uVar10 = uVar10 + 1;
      plVar5 = plVar5 + 3;
    } while (uVar10 != uVar8);
  }
  return;
}

/* ======================================================================
 * TResourceCreator__RecreateResources  (Ghidra `RecreateResources` @ 00599ac0)
 * Signature: uint8_t __thiscall RecreateResources(TResourceCreator * self)
 * Class: TResourceCreator
 * Calls: `Loader__WaitAll`
 * Called by: `TGraphics__ResetDevice`
 */
/* TResourceCreator__RecreateResources() */

void __thiscall TResourceCreator__RecreateResources(TResourceCreator *self)

{
  uint64_t *puVar1;
  ulong uVar2;
  ushort uVar3;

  if (*(short *)(self + 0x28) != 0) {
    uVar3 = 0;
    do {
      uVar2 = (ulong)uVar3;
      uVar3 = uVar3 + 1;
      puVar1 = (uint64_t *)(*(long *)(self + 0x38) + uVar2 * 0x18);
      (*(code *)*puVar1)(puVar1[1]);
    } while (uVar3 < *(ushort *)(self + 0x28));
  }
  Loader__WaitAll();
  return;
}

/* ======================================================================
 * TResourceCreator__DestroyResources  (Ghidra `DestroyResources` @ 00599b10)
 * Signature: uint8_t __thiscall DestroyResources(TResourceCreator * self)
 * Class: TResourceCreator
 * Calls: `Loader__WaitAll`
 * Called by: `TGraphics__ResetDevice`
 */
/* TResourceCreator__DestroyResources() */

void __thiscall TResourceCreator__DestroyResources(TResourceCreator *self)

{
  uint64_t *puVar1;
  ushort *puVar2;
  ushort uVar3;
  bool bVar4;
  short sVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  ushort uVar12;
  ushort uVar13;

  _bBulkDeleteResources = 1;
  Loader__WaitAll();
  uVar11 = 0;
  if (*(ushort *)(self + 0x78) != 0) {
    uVar11 = *(ushort *)(self + 0x78) - 1;
  }
  do {
    uVar10 = uVar11 - 1;
    puVar1 = (uint64_t *)(*(long *)(self + 0x88) + (ulong)(uVar11 & 0xffff) * 0x18);
    (*(code *)*puVar1)(puVar1[1]);
    uVar11 = uVar10;
  } while (uVar10 != 0xffffffff);
  do {
    uVar11 = (uint) * (ushort *)(self + 0x78);
  LAB_00599b68:
    if (uVar11 != 0) {
      lVar8 = *(long *)(self + 0x88);
      uVar10 = 0;
      if (*(int *)(lVar8 + 0x10) == 1) {
        uVar6 = 1;
        uVar10 = 0;
      } else {
        do {
          uVar6 = uVar10;
          uVar10 = uVar6 + 1;
          if ((int)uVar11 <= (int)uVar10)
            goto LAB_00599b9f;
        } while (*(int *)(lVar8 + 0x10 + (ulong)(ushort)uVar10 * 0x18) != 1);
        uVar6 = uVar6 + 2;
      }
      if ((uVar6 < uVar11) && ((int)uVar10 < (int)(uVar11 - 1))) {
        lVar9 = (long)(int)uVar10 * 0x18;
        uVar6 = uVar10;
        while (true) {
          puVar1 = (uint64_t *)(lVar8 + lVar9);
          lVar9 = lVar9 + 0x18;
          uVar6 = uVar6 + 1;
          *puVar1 = *(uint64_t *)(lVar8 + lVar9);
          puVar1[1] = *(uint64_t *)(lVar8 + 8 + lVar9);
          puVar1[2] = *(uint64_t *)(lVar8 + 0x10 + lVar9);
          uVar11 = (uint) * (ushort *)(self + 0x78);
          if ((int)(*(ushort *)(self + 0x78) - 1) <= (int)uVar6)
            break;
          lVar8 = *(long *)(self + 0x88);
        }
      }
      sVar5 = (short)uVar11;
      if ((*(int *)(self + 0x80) == 1) && (uVar13 = *(ushort *)(self + 0x7a), uVar13 != 0)) {
        uVar12 = 0;
        do {
          while (true) {
            puVar2 = (ushort *)(*(long *)(self + 0x90) + (ulong)uVar12 * 2);
            uVar3 = *puVar2;
            if (uVar3 != uVar10)
              break;
            *puVar2 = 0xffff;
            uVar13 = *(ushort *)(self + 0x7a);
            uVar12 = uVar12 + 1;
            if (uVar13 <= uVar12)
              goto LAB_00599ce6;
          }
          if ((uVar10 < uVar3) && ((ushort)(uVar3 - 1) < 0xfffe)) {
            *puVar2 = uVar3 - 1;
            uVar13 = *(ushort *)(self + 0x7a);
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 < uVar13);
      LAB_00599ce6:
        sVar5 = *(short *)(self + 0x78);
      }
      uVar13 = *(ushort *)(self + 0x28);
      bVar4 = true;
      uVar12 = sVar5 + -1 + (ushort)(sVar5 == 0);
      uVar11 = (uint)uVar12;
      *(ushort *)(self + 0x78) = uVar12;
      if (uVar13 != 0)
        goto LAB_00599c53;
    LAB_00599bae:
      if (!bVar4) {
        _bBulkDeleteResources = 0;
        return;
      }
      goto LAB_00599b68;
    }
  LAB_00599b9f:
    bVar4 = false;
    uVar13 = *(ushort *)(self + 0x28);
    if (uVar13 == 0)
      goto LAB_00599bae;
  LAB_00599c53:
    uVar10 = (uint)uVar13;
    lVar8 = *(long *)(self + 0x38);
    if (*(int *)(lVar8 + 0x10) != 1) {
      uVar6 = 0;
      while (uVar7 = uVar6, uVar6 = uVar7 + 1, (int)uVar6 < (int)uVar10) {
        if (*(int *)(lVar8 + 0x10 + (ulong)(uVar6 & 0xffff) * 0x18) == 1) {
          uVar7 = uVar7 + 2;
          goto LAB_00599d07;
        }
      }
      goto LAB_00599bae;
    }
    uVar7 = 1;
    uVar6 = 0;
  LAB_00599d07:
    if ((uVar7 < uVar10) && ((int)uVar6 < (int)(uVar10 - 1))) {
      lVar9 = (long)(int)uVar6 * 0x18;
      uVar11 = uVar6;
      while (true) {
        puVar1 = (uint64_t *)(lVar8 + lVar9);
        lVar9 = lVar9 + 0x18;
        uVar11 = uVar11 + 1;
        *puVar1 = *(uint64_t *)(lVar8 + lVar9);
        puVar1[1] = *(uint64_t *)(lVar8 + 8 + lVar9);
        puVar1[2] = *(uint64_t *)(lVar8 + 0x10 + lVar9);
        uVar13 = *(ushort *)(self + 0x28);
        if ((int)(uVar13 - 1) <= (int)uVar11)
          break;
        lVar8 = *(long *)(self + 0x38);
      }
    }
    if ((*(int *)(self + 0x30) == 1) && (uVar12 = *(ushort *)(self + 0x2a), uVar12 != 0)) {
      uVar13 = 0;
      do {
        puVar2 = (ushort *)(*(long *)(self + 0x40) + (ulong)uVar13 * 2);
        uVar3 = *puVar2;
        if (uVar3 == uVar6) {
          *puVar2 = 0xffff;
          uVar12 = *(ushort *)(self + 0x2a);
        } else if ((uVar6 < uVar3) && ((ushort)(uVar3 - 1) < 0xfffe)) {
          *puVar2 = uVar3 - 1;
          uVar12 = *(ushort *)(self + 0x2a);
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 < uVar12);
      uVar13 = *(ushort *)(self + 0x28);
    }
    sVar5 = 0;
    if (uVar13 != 0) {
      sVar5 = uVar13 - 1;
    }
    *(short *)(self + 0x28) = sVar5;
  } while (true);
}

/* ======================================================================
 * TResourceCreator__TResourceCreator  (Ghidra `~TResourceCreator` @ 00599dc0)
 * Signature: uint8_t __thiscall ~TResourceCreator(TResourceCreator * self)
 * Class: TResourceCreator
 * Calls: `CriticalSection__CriticalSection__005b71d0`, `free`
 * Called by: `GLOBAL_sub_I_ResourceCreator`
 */
/* TResourceCreator__TResourceCreator() */

void __thiscall TResourceCreator__TResourceCreator(TResourceCreator *self)

{
  int iVar1;

  if (*(int *)(self + 0x48) == -0x5eef3582) {
    *(uint32_t *)(self + 0x48) = 0;
    free(*(void **)(*(long *)(self + 0x38) + -8));
    if (*(int *)(self + 0x30) == 1) {
      free(*(void **)(*(long *)(self + 0x40) + -8));
    }
    iVar1 = *(int *)(self + 0x98);
    *(uint32_t *)(self + 0x48) = 0;
    *(uint16_t *)(self + 0x2a) = 0;
    *(uint16_t *)(self + 0x28) = 0;
    *(uint64_t *)(self + 0x38) = 0;
    *(uint64_t *)(self + 0x40) = 0;
  } else {
    iVar1 = *(int *)(self + 0x98);
  }
  if (iVar1 == -0x5eef3582) {
    *(uint32_t *)(self + 0x98) = 0;
    free(*(void **)(*(long *)(self + 0x88) + -8));
    if (*(int *)(self + 0x80) == 1) {
      free(*(void **)(*(long *)(self + 0x90) + -8));
    }
    *(uint32_t *)(self + 0x98) = 0;
    *(uint16_t *)(self + 0x7a) = 0;
    *(uint16_t *)(self + 0x78) = 0;
    *(uint64_t *)(self + 0x88) = 0;
    *(uint64_t *)(self + 0x90) = 0;
  }
  /* try { // try from 00599de1 to 00599de5 has its CatchHandler @ 00599f45 */
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)(self + 0x50));
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
    CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
    return;
  }
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
  return;
}

/* ======================================================================
 * TResourceCreator__TResourceCreator__00599f60  (Ghidra `TResourceCreator` @ 00599f60)
 * Signature: uint8_t __thiscall TResourceCreator(TResourceCreator * self)
 * Class: TResourceCreator
 * Calls: `CriticalSection__CriticalSection`, `free`, `malloc`, `memcpy`
 * Called by: `GLOBAL_sub_I_ResourceCreator`
 */
/* TResourceCreator__TResourceCreator__00599f60() */

ulong __thiscall TResourceCreator__TResourceCreator__00599f60(TResourceCreator *self)

{
  ushort uVar1;
  uint uVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  ulong uVar6;
  ulong uVar7;
  size_t sVar8;
  ulong uVar9;
  uint64_t *puVar10;
  ushort uVar11;

  CriticalSection__CriticalSection((CriticalSection *)self);
  *(uint16_t *)(self + 0x2a) = 0;
  *(uint16_t *)(self + 0x28) = 0;
  *(uint16_t *)(self + 0x34) = 1;
  *(uint64_t *)(self + 0x38) = 0;
  *(uint64_t *)(self + 0x40) = 0;
  *(uint32_t *)(self + 0x48) = 0;
  self[0x2c] = (TResourceCreator)0x4;
  *(uint32_t *)(self + 0x30) = 0;
  /* try { // try from 00599fc2 to 00599fc6 has its CatchHandler @ 0059a410 */
  CriticalSection__CriticalSection((CriticalSection *)(self + 0x50));
  *(uint16_t *)(self + 0x7a) = 0;
  *(uint16_t *)(self + 0x78) = 0;
  *(uint16_t *)(self + 0x84) = 1;
  *(uint64_t *)(self + 0x88) = 0;
  *(uint64_t *)(self + 0x90) = 0;
  *(uint32_t *)(self + 0x98) = 0;
  self[0x7c] = (TResourceCreator)0x4;
  *(uint32_t *)(self + 0x80) = 0;
  *(uint32_t *)(self + 0x30) = 0;
  if (*(int *)(self + 0x48) == -0x5eef3582) {
    if (*(short *)(self + 0x2a) != 0) {
      *(uint32_t *)(self + 0x80) = 0;
      goto LAB_0059a215;
    }
    uVar7 = (ulong)(byte)self[0x2c];
    *(uint16_t *)(self + 0x2a) = 1;
    pvVar3 = *(void **)(self + 0x38);
    pvVar4 = malloc(uVar7 + 0x28);
    if (pvVar4 == (void *)0x0) {
      *(uint64_t *)(self + 0x38) = 0;
    } else {
      pvVar5 = (void *)((long)pvVar4 + 0x10U + (uVar7 - ((long)pvVar4 + 0x10U) % uVar7) % uVar7);
      *(uint64_t *)((long)pvVar5 + -0x10) = 0x18;
      *(void **)((long)pvVar5 + -8) = pvVar4;
      if (pvVar3 != (void *)0x0) {
        sVar8 = 0x18;
        if (*(ulong *)((long)pvVar3 + -0x10) < 0x19) {
          sVar8 = *(ulong *)((long)pvVar3 + -0x10);
        }
        memcpy(pvVar5, pvVar3, sVar8);
        free(*(void **)((long)pvVar3 + -8));
      }
      *(void **)(self + 0x38) = pvVar5;
      if (*(int *)(self + 0x30) == 1) {
        uVar11 = *(ushort *)(self + 0x2a);
        uVar9 = (ulong)(byte)self[0x2c];
        pvVar3 = (void *)0x0;
        pvVar4 = *(void **)(self + 0x40);
        uVar7 = (ulong)uVar11 * 2;
        pvVar5 = malloc(uVar9 + 0x10 + uVar7);
        if (pvVar5 != (void *)0x0) {
          pvVar3 =
              (void *)((long)pvVar5 + 0x10U + (uVar9 - ((long)pvVar5 + 0x10U) % uVar9) % uVar9);
          *(ulong *)((long)pvVar3 + -0x10) = uVar7;
          *(void **)((long)pvVar3 + -8) = pvVar5;
          if (pvVar4 != (void *)0x0) {
            uVar9 = *(ulong *)((long)pvVar4 + -0x10);
            if (uVar7 <= *(ulong *)((long)pvVar4 + -0x10)) {
              uVar9 = uVar7;
            }
            memcpy(pvVar3, pvVar4, uVar9);
            free(*(void **)((long)pvVar4 + -8));
          }
          uVar11 = *(ushort *)(self + 0x2a);
        }
        uVar1 = *(ushort *)(self + 0x28);
        *(void **)(self + 0x40) = pvVar3;
        if (uVar1 < uVar11) {
          while (true) {
            uVar7 = (ulong)uVar1;
            uVar1 = uVar1 + 1;
            *(uint16_t *)((long)pvVar3 + uVar7 * 2) = 0xffff;
            if (uVar11 <= uVar1)
              break;
            pvVar3 = *(void **)(self + 0x40);
          }
        }
      }
    }
  } else {
    uVar7 = (ulong)(byte)self[0x2c];
    pvVar3 = malloc(uVar7 + 0x28);
    puVar10 = (uint64_t *)0x0;
    if (pvVar3 != (void *)0x0) {
      puVar10 =
          (uint64_t *)((long)pvVar3 + 0x10U + (uVar7 - ((long)pvVar3 + 0x10U) % uVar7) % uVar7);
      puVar10[-2] = 0x18;
      puVar10[-1] = pvVar3;
    }
    *(uint64_t **)(self + 0x38) = puVar10;
    *puVar10 = 0;
    puVar10[1] = 0;
    puVar10[2] = 0;
    *(uint16_t *)(self + 0x28) = 0;
    *(uint16_t *)(self + 0x2a) = 1;
    *(uint32_t *)(self + 0x48) = 0xa110ca7e;
    *(uint16_t *)(self + 0x34) = 1;
  }
  *(uint32_t *)(self + 0x80) = 0;
  if (*(int *)(self + 0x98) == -0x5eef3582) {
    if (*(short *)(self + 0x7a) != 0) {
      return 0xa110ca7e;
    }
    uVar7 = (ulong)(byte)self[0x7c];
    *(uint16_t *)(self + 0x7a) = 1;
    pvVar3 = *(void **)(self + 0x88);
    pvVar4 = malloc(uVar7 + 0x28);
    if (pvVar4 == (void *)0x0) {
      *(uint64_t *)(self + 0x88) = 0;
      return 0;
    }
    pvVar5 = (void *)((long)pvVar4 + 0x10U + (uVar7 - ((long)pvVar4 + 0x10U) % uVar7) % uVar7);
    *(uint64_t *)((long)pvVar5 + -0x10) = 0x18;
    *(void **)((long)pvVar5 + -8) = pvVar4;
    if (pvVar3 != (void *)0x0) {
      sVar8 = 0x18;
      if (*(ulong *)((long)pvVar3 + -0x10) < 0x19) {
        sVar8 = *(ulong *)((long)pvVar3 + -0x10);
      }
      memcpy(pvVar5, pvVar3, sVar8);
      free(*(void **)((long)pvVar3 + -8));
    }
    *(void **)(self + 0x88) = pvVar5;
    if (*(uint *)(self + 0x80) != 1) {
      return (ulong) * (uint *)(self + 0x80);
    }
    uVar11 = *(ushort *)(self + 0x7a);
    uVar9 = (ulong)(byte)self[0x7c];
    pvVar3 = (void *)0x0;
    pvVar4 = *(void **)(self + 0x90);
    uVar7 = (ulong)uVar11 * 2;
    pvVar5 = malloc(uVar9 + 0x10 + uVar7);
    if (pvVar5 != (void *)0x0) {
      pvVar3 = (void *)((long)pvVar5 + 0x10U + (uVar9 - ((long)pvVar5 + 0x10U) % uVar9) % uVar9);
      *(ulong *)((long)pvVar3 + -0x10) = uVar7;
      *(void **)((long)pvVar3 + -8) = pvVar5;
      if (pvVar4 != (void *)0x0) {
        uVar9 = *(ulong *)((long)pvVar4 + -0x10);
        if (uVar7 <= *(ulong *)((long)pvVar4 + -0x10)) {
          uVar9 = uVar7;
        }
        memcpy(pvVar3, pvVar4, uVar9);
        free(*(void **)((long)pvVar4 + -8));
      }
      uVar11 = *(ushort *)(self + 0x7a);
    }
    uVar7 = (ulong) * (ushort *)(self + 0x78);
    *(void **)(self + 0x90) = pvVar3;
    if (uVar11 <= *(ushort *)(self + 0x78)) {
      return uVar7;
    }
    while (true) {
      uVar9 = uVar7 & 0xffff;
      uVar2 = (int)uVar7 + 1;
      uVar7 = (ulong)uVar2;
      *(uint16_t *)((long)pvVar3 + uVar9 * 2) = 0xffff;
      if (uVar11 <= (ushort)uVar2)
        break;
      pvVar3 = *(void **)(self + 0x90);
    }
    return uVar7;
  }
LAB_0059a215:
  uVar9 = (ulong)(byte)self[0x7c];
  pvVar3 = malloc(uVar9 + 0x28);
  puVar10 = (uint64_t *)0x0;
  uVar7 = 0;
  if (pvVar3 != (void *)0x0) {
    uVar6 = uVar9 - ((long)pvVar3 + 0x10U) % uVar9;
    uVar7 = uVar6 / uVar9;
    puVar10 = (uint64_t *)((long)pvVar3 + 0x10U + uVar6 % uVar9);
    puVar10[-2] = 0x18;
    puVar10[-1] = pvVar3;
  }
  *(uint64_t **)(self + 0x88) = puVar10;
  *puVar10 = 0;
  puVar10[1] = 0;
  puVar10[2] = 0;
  *(uint16_t *)(self + 0x78) = 0;
  *(uint16_t *)(self + 0x7a) = 1;
  *(uint32_t *)(self + 0x98) = 0xa110ca7e;
  *(uint16_t *)(self + 0x84) = 1;
  return uVar7;
}
