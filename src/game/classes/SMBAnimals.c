/* src/game/classes/SMBAnimals.c — 16 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "SMBAnimals.h"

/* ======================================================================
 * SMBAnimals__InitializeAnimals  (Ghidra `InitializeAnimals` @ 0048afd0)
 * Signature: uint8_t __thiscall InitializeAnimals(SMBAnimals * self, char * arg1)
 * Class: SMBAnimals
 * Calls: `FlashAnimationLibrary__FlashAnimationLibrary__00576680`, `FlashAnimationLibrary__GetMovieClip__005731d0`, `FormatResourcePath`, `Sprint`, `free`, `malloc`, `memcpy`, `operator_new`
 * Called by: `SMBPalette__SMBPalette__004f3ca0`
 */
/* WARNING: Removing unreachable block (ram,0x0048b6c0) */
/* SMBAnimals__InitializeAnimals(char const*) */

void __thiscall SMBAnimals__InitializeAnimals(SMBAnimals *self, char *arg1)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  long lVar4;
  ushort uVar5;
  short sVar6;
  char *pcVar7;
  FlashAnimationLibrary *this_00;
  long lVar8;
  void *pvVar9;
  void *pvVar10;
  ulong uVar11;
  ulong uVar12;
  ushort uVar13;
  uint64_t *puVar14;
  ushort *puVar15;
  int iVar16;
  long lVar17;
  long local_e8;
  char local_d8[80];
  char local_88[64];
  uint8_t *local_48[3];

  if (*(long *)(self + 0x4510) == 0) {
    local_48[0] = &DAT_008184c8 /* R:0.00016803004837129265f */;
    /* try { // try from 0048b017 to 0048b028 has its CatchHandler @ 0048b6bb */
    pcVar7 = (char *)FormatResourcePath(arg1, local_48);
    this_00 = operator_new(0xb0);
    /* try { // try from 0048b032 to 0048b036 has its CatchHandler @ 0048b698 */
    FlashAnimationLibrary__FlashAnimationLibrary__00576680(this_00, pcVar7);
    *(FlashAnimationLibrary **)(self + 0x4510) = this_00;
    local_e8 = 0;
    do {
      lVar8 = *(long *)(InitializeAnimals(char_const *)::strAnimals + local_e8 * 8);
      if (lVar8 != 0) {
        lVar17 = 0;
        do {
          /* try { // try from 0048b097 to 0048b1bc has its CatchHandler @ 0048b6bb */
          Sprint("%s%s", local_88, lVar8,
                 (&InitializeAnimals(char_const *)::strAnimations)[lVar17]);
          lVar8 = FlashAnimationLibrary__GetMovieClip__005731d0(
              *(FlashAnimationLibrary **)(self + 0x4510), local_88);
          if (lVar8 != 0) {
            lVar4 = (long)(int)lVar17 * 0x58 + (long)(int)local_e8 * 0x370 + 0x50;
            if (*(int *)(self + lVar4 + 0x48) == -0x5eef3582) {
              uVar5 = *(ushort *)(self + lVar4 + 0x28);
              if (*(ushort *)(self + lVar4 + 0x2a) <= uVar5) {
                uVar5 = *(ushort *)(self + lVar4 + 0x2a) + *(short *)(self + lVar4 + 0x34);
                uVar12 = (ulong)(byte)self[lVar4 + 0x2c];
                pvVar9 = (void *)0x0;
                pvVar3 = *(void **)(self + lVar4 + 0x38);
                *(ushort *)(self + lVar4 + 0x2a) = uVar5;
                uVar11 = (ulong)uVar5 * 8;
                pvVar10 = malloc(uVar12 + 0x10 + uVar11);
                if (pvVar10 != (void *)0x0) {
                  pvVar9 = (void *)((long)pvVar10 + 0x10U +
                                    (uVar12 - ((long)pvVar10 + 0x10U) % uVar12) % uVar12);
                  *(ulong *)((long)pvVar9 + -0x10) = uVar11;
                  *(void **)((long)pvVar9 + -8) = pvVar10;
                  if (pvVar3 != (void *)0x0) {
                    uVar12 = *(ulong *)((long)pvVar3 + -0x10);
                    if (uVar11 <= *(ulong *)((long)pvVar3 + -0x10)) {
                      uVar12 = uVar11;
                    }
                    memcpy(pvVar9, pvVar3, uVar12);
                    free(*(void **)((long)pvVar3 + -8));
                  }
                }
                pvVar3 = *(void **)(self + lVar4 + 0x40);
                *(void **)(self + lVar4 + 0x38) = pvVar9;
                if (pvVar3 != (void *)0x0) {
                  uVar13 = *(ushort *)(self + lVar4 + 0x2a);
                  uVar12 = (ulong)(byte)self[lVar4 + 0x2c];
                  pvVar9 = (void *)0x0;
                  uVar11 = (ulong)uVar13 * 2;
                  pvVar10 = malloc(uVar12 + 0x10 + uVar11);
                  if (pvVar10 != (void *)0x0) {
                    pvVar9 = (void *)((long)pvVar10 + 0x10U +
                                      (uVar12 - ((long)pvVar10 + 0x10U) % uVar12) % uVar12);
                    *(ulong *)((long)pvVar9 + -0x10) = uVar11;
                    *(void **)((long)pvVar9 + -8) = pvVar10;
                    uVar12 = *(ulong *)((long)pvVar3 + -0x10);
                    if (uVar11 <= *(ulong *)((long)pvVar3 + -0x10)) {
                      uVar12 = uVar11;
                    }
                    memcpy(pvVar9, pvVar3, uVar12);
                    free(*(void **)((long)pvVar3 + -8));
                    uVar13 = *(ushort *)(self + lVar4 + 0x2a);
                  }
                  uVar5 = *(ushort *)(self + lVar4 + 0x28);
                  *(void **)(self + lVar4 + 0x40) = pvVar9;
                  if (uVar13 <= uVar5)
                    goto LAB_0048b168;
                  while (true) {
                    uVar11 = (ulong)uVar5;
                    uVar5 = uVar5 + 1;
                    *(uint16_t *)((long)pvVar9 + uVar11 * 2) = 0xffff;
                    if (uVar13 <= uVar5)
                      break;
                    pvVar9 = *(void **)(self + lVar4 + 0x40);
                  }
                }
                uVar5 = *(ushort *)(self + lVar4 + 0x28);
              }
            } else {
              uVar11 = (ulong)(byte)self[lVar4 + 0x2c];
              *(uint32_t *)(self + lVar4 + 0x30) = 0;
              pvVar9 = malloc(uVar11 + 0x38);
              puVar14 = (uint64_t *)0x0;
              if (pvVar9 != (void *)0x0) {
                puVar14 = (uint64_t *)((uVar11 - ((long)pvVar9 + 0x10U) % uVar11) % uVar11 +
                                       (long)pvVar9 + 0x10U);
                puVar14[-2] = 0x28;
                puVar14[-1] = pvVar9;
              }
              *(uint64_t **)(self + lVar4 + 0x38) = puVar14;
              uVar5 = 0;
              *puVar14 = 0;
              puVar14[1] = 0;
              puVar14[2] = 0;
              puVar14[3] = 0;
              puVar14[4] = 0;
              *(uint16_t *)(self + lVar4 + 0x28) = 0;
              *(uint16_t *)(self + lVar4 + 0x2a) = 5;
              *(uint32_t *)(self + lVar4 + 0x48) = 0xa110ca7e;
              *(uint16_t *)(self + lVar4 + 0x34) = 5;
            }
          LAB_0048b168:
            if ((*(int *)(self + lVar4 + 0x30) == 1) && (*(short *)(self + lVar4 + 0x2a) != 0)) {
              puVar15 = *(ushort **)(self + lVar4 + 0x40);
              sVar6 = 1;
              uVar13 = *puVar15;
              while (uVar13 != 0xffff) {
                puVar15 = puVar15 + 1;
                if (sVar6 == *(short *)(self + lVar4 + 0x2a))
                  goto LAB_0048b172;
                sVar6 = sVar6 + 1;
                uVar13 = *puVar15;
              }
              *puVar15 = uVar5;
              uVar5 = *(ushort *)(self + lVar4 + 0x28);
            }
          LAB_0048b172:
            *(long *)(*(long *)(self + lVar4 + 0x38) + (ulong)uVar5 * 8) = lVar8;
            *(short *)(self + lVar4 + 0x28) = *(short *)(self + lVar4 + 0x28) + 1;
            iVar16 = 1;
            while (true) {
              Sprint("%salt%i", local_d8, local_88, iVar16);
              lVar8 = FlashAnimationLibrary__GetMovieClip__005731d0(
                  *(FlashAnimationLibrary **)(self + 0x4510), local_d8);
              if (lVar8 == 0)
                break;
              if (*(int *)(self + lVar4 + 0x48) == -0x5eef3582) {
                uVar5 = *(ushort *)(self + lVar4 + 0x28);
                if (uVar5 < *(ushort *)(self + lVar4 + 0x2a))
                  goto LAB_0048b261;
                uVar5 = *(ushort *)(self + lVar4 + 0x2a) + *(short *)(self + lVar4 + 0x34);
                uVar12 = (ulong)(byte)self[lVar4 + 0x2c];
                pvVar9 = (void *)0x0;
                pvVar3 = *(void **)(self + lVar4 + 0x38);
                *(ushort *)(self + lVar4 + 0x2a) = uVar5;
                uVar11 = (ulong)uVar5 * 8;
                pvVar10 = malloc(uVar12 + 0x10 + uVar11);
                if (pvVar10 != (void *)0x0) {
                  pvVar9 = (void *)((long)pvVar10 + 0x10U +
                                    (uVar12 - ((long)pvVar10 + 0x10U) % uVar12) % uVar12);
                  *(ulong *)((long)pvVar9 + -0x10) = uVar11;
                  *(void **)((long)pvVar9 + -8) = pvVar10;
                  if (pvVar3 != (void *)0x0) {
                    uVar12 = *(ulong *)((long)pvVar3 + -0x10);
                    if (uVar11 <= *(ulong *)((long)pvVar3 + -0x10)) {
                      uVar12 = uVar11;
                    }
                    memcpy(pvVar9, pvVar3, uVar12);
                    free(*(void **)((long)pvVar3 + -8));
                  }
                }
                pvVar3 = *(void **)(self + lVar4 + 0x40);
                *(void **)(self + lVar4 + 0x38) = pvVar9;
                if (pvVar3 != (void *)0x0) {
                  uVar13 = *(ushort *)(self + lVar4 + 0x2a);
                  uVar12 = (ulong)(byte)self[lVar4 + 0x2c];
                  pvVar9 = (void *)0x0;
                  uVar11 = (ulong)uVar13 * 2;
                  pvVar10 = malloc(uVar12 + 0x10 + uVar11);
                  if (pvVar10 != (void *)0x0) {
                    pvVar9 = (void *)((long)pvVar10 + 0x10U +
                                      (uVar12 - ((long)pvVar10 + 0x10U) % uVar12) % uVar12);
                    *(ulong *)((long)pvVar9 + -0x10) = uVar11;
                    *(void **)((long)pvVar9 + -8) = pvVar10;
                    uVar12 = *(ulong *)((long)pvVar3 + -0x10);
                    if (uVar11 <= *(ulong *)((long)pvVar3 + -0x10)) {
                      uVar12 = uVar11;
                    }
                    memcpy(pvVar9, pvVar3, uVar12);
                    free(*(void **)((long)pvVar3 + -8));
                    uVar13 = *(ushort *)(self + lVar4 + 0x2a);
                  }
                  uVar5 = *(ushort *)(self + lVar4 + 0x28);
                  *(void **)(self + lVar4 + 0x40) = pvVar9;
                  if (uVar13 <= uVar5)
                    goto LAB_0048b261;
                  while (true) {
                    uVar11 = (ulong)uVar5;
                    uVar5 = uVar5 + 1;
                    *(uint16_t *)((long)pvVar9 + uVar11 * 2) = 0xffff;
                    if (uVar13 <= uVar5)
                      break;
                    pvVar9 = *(void **)(self + lVar4 + 0x40);
                  }
                }
                iVar2 = *(int *)(self + lVar4 + 0x30);
                uVar5 = *(ushort *)(self + lVar4 + 0x28);
              } else {
                uVar11 = (ulong)(byte)self[lVar4 + 0x2c];
                *(uint32_t *)(self + lVar4 + 0x30) = 0;
                pvVar9 = malloc(uVar11 + 0x38);
                puVar14 = (uint64_t *)0x0;
                if (pvVar9 != (void *)0x0) {
                  puVar14 = (uint64_t *)((long)pvVar9 + 0x10U +
                                         (uVar11 - ((long)pvVar9 + 0x10U) % uVar11) % uVar11);
                  puVar14[-2] = 0x28;
                  puVar14[-1] = pvVar9;
                }
                *(uint64_t **)(self + lVar4 + 0x38) = puVar14;
                *puVar14 = 0;
                puVar14[1] = 0;
                puVar14[2] = 0;
                puVar14[3] = 0;
                puVar14[4] = 0;
                uVar5 = 0;
                *(uint16_t *)(self + lVar4 + 0x28) = 0;
                *(uint16_t *)(self + lVar4 + 0x2a) = 5;
                *(uint32_t *)(self + lVar4 + 0x48) = 0xa110ca7e;
                *(uint16_t *)(self + lVar4 + 0x34) = 5;
              LAB_0048b261:
                iVar2 = *(int *)(self + lVar4 + 0x30);
              }
              if ((iVar2 == 1) && (*(short *)(self + lVar4 + 0x2a) != 0)) {
                puVar15 = *(ushort **)(self + lVar4 + 0x40);
                sVar6 = 1;
                uVar13 = *puVar15;
                while (uVar13 != 0xffff) {
                  puVar15 = puVar15 + 1;
                  if (sVar6 == *(short *)(self + lVar4 + 0x2a))
                    goto LAB_0048b26b;
                  sVar6 = sVar6 + 1;
                  uVar13 = *puVar15;
                }
                *puVar15 = uVar5;
                uVar5 = *(ushort *)(self + lVar4 + 0x28);
              }
            LAB_0048b26b:
              iVar16 = iVar16 + 1;
              *(long *)(*(long *)(self + lVar4 + 0x38) + (ulong)uVar5 * 8) = lVar8;
              *(short *)(self + lVar4 + 0x28) = *(short *)(self + lVar4 + 0x28) + 1;
            }
          }
          lVar17 = lVar17 + 1;
          if (lVar17 == 10)
            break;
          lVar8 = *(long *)(InitializeAnimals(char_const *)::strAnimals + local_e8 * 8);
        } while (true);
      }
      local_e8 = local_e8 + 1;
    } while (local_e8 != 0x14);
    if ((allocator *)(local_48[0] + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage) {
      LOCK();
      piVar1 = (int *)(local_48[0] + -8);
      iVar16 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar16 < 1) {
        std__string_Rep_M_destroy((allocator *)(local_48[0] + -0x18));
      }
    }
  }
  return;
}

/* ======================================================================
 * SMBAnimals__DestroyAnimals  (Ghidra `DestroyAnimals` @ 0048b6d0)
 * Signature: uint8_t __thiscall DestroyAnimals(SMBAnimals * self)
 * Class: SMBAnimals
 * Calls: `FlashAnimationLibrary__FlashAnimationLibrary`, `free`, `operator_delete`
 * Called by: (none)
 */
/* SMBAnimals__DestroyAnimals() */

void __thiscall SMBAnimals__DestroyAnimals(SMBAnimals *self)

{
  ushort uVar1;
  long *plVar2;
  FlashAnimationLibrary *this_00;
  long lVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;

  iVar9 = 0;
  do {
    iVar8 = 0;
    do {
      uVar7 = 0;
      lVar3 = (long)iVar8 * 0x58 + (long)iVar9 * 0x370 + 0x50;
      uVar5 = (uint) * (ushort *)(self + lVar3 + 0x28);
      if (*(ushort *)(self + lVar3 + 0x28) != 0) {
        do {
          plVar2 = *(long **)(*(long *)(self + lVar3 + 0x38) + (uVar7 & 0xffff) * 8);
          if (plVar2 != (long *)0x0) {
            (**(code **)(*plVar2 + 8))();
            uVar5 = (uint) * (ushort *)(self + lVar3 + 0x28);
          }
          uVar6 = (int)uVar7 + 1;
          uVar7 = (ulong)uVar6;
        } while ((int)uVar6 < (int)uVar5);
      }
      *(uint16_t *)(self + lVar3 + 0x28) = 0;
      if ((*(int *)(self + lVar3 + 0x30) == 1) &&
          (uVar1 = *(ushort *)(self + lVar3 + 0x2a), uVar1 != 0)) {
        lVar4 = 0;
        do {
          *(uint16_t *)(*(long *)(self + lVar3 + 0x40) + lVar4) = 0xffff;
          lVar4 = lVar4 + 2;
        } while (lVar4 != (ulong)(uVar1 - 1 & 0xffff) * 2 + 2);
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 != 10);
    iVar9 = iVar9 + 1;
  } while (iVar9 != 0x14);
  this_00 = *(FlashAnimationLibrary **)(self + 0x4510);
  if (this_00 != (FlashAnimationLibrary *)0x0) {
    FlashAnimationLibrary__FlashAnimationLibrary(this_00);
    operator_delete(this_00);
    *(uint64_t *)(self + 0x4510) = 0;
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
    return;
  }
  return;
}

/* ======================================================================
 * SMBAnimals__CreateAnimal  (Ghidra `CreateAnimal` @ 0048b840)
 * Signature: uint8_t __thiscall CreateAnimal(SMBAnimals * self, SMBAnimalCreate * arg1)
 * Class: SMBAnimals
 * Calls: `SMBAnimal__SMBAnimal__004868d0`, `Vector2__operator_assign`, `free`, `malloc`, `memcpy`, `operator_new`
 * Called by: `HellBoss__SpawnMeatBoys`, `PlaceAnimal`, `SMBLevelLoad`
 */
/* SMBAnimals__CreateAnimal(SMBAnimalCreate const*) */

void __thiscall SMBAnimals__CreateAnimal(SMBAnimals *self, SMBAnimalCreate *arg1)

{
  void *pvVar1;
  ushort uVar2;
  SMBAnimal *this_00;
  void *pvVar3;
  ushort *puVar4;
  void *pvVar5;
  ulong uVar6;
  short sVar7;
  ushort uVar8;
  ulong uVar9;
  uint64_t *puVar10;

  this_00 = operator_new(0x238);
  /* try { // try from 0048b878 to 0048b87c has its CatchHandler @ 0048bb3f */
  SMBAnimal__SMBAnimal__004868d0(this_00);
  *(uint32_t *)(this_00 + 0x214) = *(uint32_t *)arg1;
  Vector2__operator_assign((Vector2 *)(this_00 + 0xf8), (Vector2 *)(arg1 + 4));
  Vector2__operator_assign((Vector2 *)(this_00 + 0xa0), (Vector2 *)(arg1 + 4));
  Vector2__operator_assign((Vector2 *)(this_00 + 0x100), (Vector2 *)(arg1 + 0xc));
  Vector2__operator_assign((Vector2 *)(this_00 + 0x108), (Vector2 *)(arg1 + 0x14));
  *(SMBAnimals **)(this_00 + 0x230) = self;
  if (*(int *)(self + 0x48) == -0x5eef3582) {
    uVar2 = *(ushort *)(self + 0x28);
    if (*(ushort *)(self + 0x2a) <= uVar2) {
      uVar2 = *(ushort *)(self + 0x2a) + *(short *)(self + 0x34);
      uVar9 = (ulong)(byte)self[0x2c];
      pvVar3 = (void *)0x0;
      pvVar1 = *(void **)(self + 0x38);
      *(ushort *)(self + 0x2a) = uVar2;
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
          memcpy(pvVar3, pvVar1, uVar9);
          free(*(void **)((long)pvVar1 + -8));
        }
      }
      pvVar1 = *(void **)(self + 0x40);
      *(void **)(self + 0x38) = pvVar3;
      if (pvVar1 != (void *)0x0) {
        uVar8 = *(ushort *)(self + 0x2a);
        uVar9 = (ulong)(byte)self[0x2c];
        pvVar3 = (void *)0x0;
        uVar6 = (ulong)uVar8 * 2;
        pvVar5 = malloc(uVar9 + 0x10 + uVar6);
        if (pvVar5 != (void *)0x0) {
          pvVar3 =
              (void *)((long)pvVar5 + 0x10U + (uVar9 - ((long)pvVar5 + 0x10U) % uVar9) % uVar9);
          *(void **)((long)pvVar3 + -8) = pvVar5;
          *(ulong *)((long)pvVar3 + -0x10) = uVar6;
          uVar9 = *(ulong *)((long)pvVar1 + -0x10);
          if (uVar6 <= *(ulong *)((long)pvVar1 + -0x10)) {
            uVar9 = uVar6;
          }
          memcpy(pvVar3, pvVar1, uVar9);
          free(*(void **)((long)pvVar1 + -8));
          uVar8 = *(ushort *)(self + 0x2a);
        }
        uVar2 = *(ushort *)(self + 0x28);
        *(void **)(self + 0x40) = pvVar3;
        if (uVar8 <= uVar2)
          goto LAB_0048b96c;
        while (true) {
          uVar6 = (ulong)uVar2;
          uVar2 = uVar2 + 1;
          *(uint16_t *)((long)pvVar3 + uVar6 * 2) = 0xffff;
          if (uVar8 <= uVar2)
            break;
          pvVar3 = *(void **)(self + 0x40);
        }
      }
      uVar2 = *(ushort *)(self + 0x28);
    }
  } else {
    uVar6 = (ulong)(byte)self[0x2c];
    *(uint32_t *)(self + 0x30) = 0;
    pvVar3 = malloc(uVar6 + 0x38);
    puVar10 = (uint64_t *)0x0;
    if (pvVar3 != (void *)0x0) {
      puVar10 =
          (uint64_t *)((long)pvVar3 + 0x10U + (uVar6 - ((long)pvVar3 + 0x10U) % uVar6) % uVar6);
      puVar10[-2] = 0x28;
      puVar10[-1] = pvVar3;
    }
    *(uint64_t **)(self + 0x38) = puVar10;
    *puVar10 = 0;
    puVar10[1] = 0;
    puVar10[2] = 0;
    puVar10[3] = 0;
    puVar10[4] = 0;
    uVar2 = 0;
    *(uint16_t *)(self + 0x28) = 0;
    *(uint16_t *)(self + 0x2a) = 5;
    *(uint32_t *)(self + 0x48) = 0xa110ca7e;
    *(uint16_t *)(self + 0x34) = 5;
  }
LAB_0048b96c:
  if ((*(int *)(self + 0x30) == 1) && (*(short *)(self + 0x2a) != 0)) {
    puVar4 = *(ushort **)(self + 0x40);
    sVar7 = 0;
    uVar8 = *puVar4;
    while (uVar8 != 0xffff) {
      puVar4 = puVar4 + 1;
      sVar7 = sVar7 + 1;
      if (sVar7 == *(short *)(self + 0x2a))
        goto LAB_0048b972;
      uVar8 = *puVar4;
    }
    *puVar4 = uVar2;
    uVar2 = *(ushort *)(self + 0x28);
  }
LAB_0048b972:
  *(SMBAnimal **)(*(long *)(self + 0x38) + (ulong)uVar2 * 8) = this_00;
  *(short *)(self + 0x28) = *(short *)(self + 0x28) + 1;
  return;
}

/* ======================================================================
 * SMBAnimals__RenderAnimal  (Ghidra `RenderAnimal` @ 0048bb60)
 * Signature: uint8_t __thiscall RenderAnimal(SMBAnimals * self, SMBAnimal * arg1)
 * Class: SMBAnimals
 * Calls: `FlashLibraryInstance__IsPlaying`, `TGraphics__ResetPixelStages`, `TGraphics__ResetTexCoordGen`, `Vector2__operator_assign`
 * Called by: (none)
 */
/* SMBAnimals__RenderAnimal(SMBAnimal*) */

void __thiscall SMBAnimals__RenderAnimal(SMBAnimals *self, SMBAnimal *arg1)

{
  long lVar1;
  uint32_t uVar2;
  FlashLibraryInstance *this_00;

  if (*(int *)(arg1 + 0x50) != 0) {
    TGraphics__ResetPixelStages(Graphics);
    TGraphics__ResetTexCoordGen(Graphics);
    if (*(short *)(self + (long)*(int *)(arg1 + 0x218) * 0x58 +
                   (long)*(int *)(arg1 + 0x214) * 0x370 + 0x78) != 0) {
      lVar1 = (long)*(int *)(arg1 + 0x218) * 0x58 + (long)*(int *)(arg1 + 0x214) * 0x370 + 0x50;
      if (*(uint *)(arg1 + 0x21c) == 0xffffffff) {
        this_00 = *(FlashLibraryInstance **)(*(long *)(self + lVar1 + 0x38) +
                                             (ulong) * (ushort *)(self + lVar1 + 0x50) * 8);
      } else {
        this_00 = *(FlashLibraryInstance **)(*(long *)(self + lVar1 + 0x38) +
                                             (ulong)(*(uint *)(arg1 + 0x21c) & 0xffff) * 8);
      }
      Vector2__operator_assign((Vector2 *)(this_00 + 0x30), (Vector2 *)(arg1 + 0xa0));
      Vector2__operator_assign((Vector2 *)(this_00 + 0x40), (Vector2 *)(arg1 + 0xd0));
      *(uint32_t *)(this_00 + 0x48) = *(uint32_t *)(arg1 + 0xd8);
      *(uint32_t *)(this_00 + 0x4c) = *(uint32_t *)(arg1 + 0xd8);
      *(uint32_t *)(this_00 + 0x58) = *(uint32_t *)(arg1 + 0x220);
      (**(code **)(*(long *)this_00 + 0x10))(this_00);
      uVar2 = FlashLibraryInstance__IsPlaying(this_00);
      *(uint32_t *)(arg1 + 0x228) = uVar2;
      *(uint32_t *)(arg1 + 0x220) = *(uint32_t *)(this_00 + 0x58);
      return;
    }
  }
  return;
}

/* ======================================================================
 * SMBAnimals__EditorRender  (Ghidra `EditorRender` @ 0048bc70)
 * Signature: uint8_t __thiscall EditorRender(SMBAnimals * self, int arg1, Vector2 * arg2)
 * Class: SMBAnimals
 * Calls: `Vector2__operator_assign`
 * Called by: `SMBEditor__Render`
 */
/* SMBAnimals__EditorRender(int, Vector2 const&) */

void __thiscall SMBAnimals__EditorRender(SMBAnimals *self, int arg1, Vector2 *arg2)

{
  long *plVar1;
  long lVar2;
  uint32_t local_18;
  uint32_t local_14;

  lVar2 = (long)arg1 * 0x370;
  if ((*(short *)(self + lVar2 + 0x78) != 0) && (*(short *)(self + lVar2 + 0x78) != 0)) {
    plVar1 = (long *)**(long **)(self + lVar2 + 0x88);
    Vector2__operator_assign((Vector2 *)(plVar1 + 6), arg2);
    local_18 = 0x3f800000;
    local_14 = 0x3f800000;
    Vector2__operator_assign((Vector2 *)(plVar1 + 8), (Vector2 *)&local_18);
    *(uint32_t *)(plVar1 + 0xb) = 0;
    (**(code **)(*plVar1 + 0x10))(plVar1);
    return;
  }
  return;
}

/* ======================================================================
 * SMBAnimals__RenderAnimals  (Ghidra `RenderAnimals` @ 0048bcf0)
 * Signature: uint8_t __thiscall RenderAnimals(SMBAnimals * self)
 * Class: SMBAnimals
 * Calls: `Vector2__operator_assign`
 * Called by: `AnimalLayer__Render`
 */
/* SMBAnimals__RenderAnimals() */

void __thiscall SMBAnimals__RenderAnimals(SMBAnimals *self)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  uint32_t local_28;
  uint32_t local_24;

  uVar4 = *(ushort *)(self + 0x28);
  if (uVar4 != 0) {
    uVar6 = 0;
    do {
      while (*(int *)(SuperMeatBoy + 0x2c) == 0) {
        uVar5 = uVar6 & 0xffff;
        uVar6 = uVar6 + 1;
        RenderAnimal(self, *(SMBAnimal **)(*(long *)(self + 0x38) + (ulong)uVar5 * 8));
        uVar4 = *(ushort *)(self + 0x28);
        if ((int)(uint)uVar4 <= (int)uVar6) {
          return;
        }
      }
      if (*(int *)(SuperMeatBoy + 0x2c) == 1) {
        lVar1 = *(long *)(*(long *)(self + 0x38) + (ulong)(uVar6 & 0xffff) * 8);
        lVar3 = (long)*(int *)(lVar1 + 0x214) * 0x370;
        if ((*(short *)(self + lVar3 + 0x78) != 0) && (*(short *)(self + lVar3 + 0x78) != 0)) {
          plVar2 = (long *)**(long **)(self + lVar3 + 0x88);
          Vector2__operator_assign((Vector2 *)(plVar2 + 6), (Vector2 *)(lVar1 + 0xf8));
          local_28 = 0x3f800000;
          local_24 = 0x3f800000;
          Vector2__operator_assign((Vector2 *)(plVar2 + 8), (Vector2 *)&local_28);
          *(uint32_t *)(plVar2 + 0xb) = 0;
          (**(code **)(*plVar2 + 0x10))(plVar2);
          uVar4 = *(ushort *)(self + 0x28);
        }
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < (int)(uint)uVar4);
  }
  return;
}

/* ======================================================================
 * SMBAnimals__UpdateAnimals  (Ghidra `UpdateAnimals` @ 0048bde0)
 * Signature: uint8_t __thiscall UpdateAnimals(SMBAnimals * self)
 * Class: SMBAnimals
 * Calls: `SMBAnimal__Update`
 * Called by: `GSuperMeatBoy__Update__00516690`
 */
/* SMBAnimals__UpdateAnimals() */

void __thiscall SMBAnimals__UpdateAnimals(SMBAnimals *self)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;

  if (*(short *)(self + 0x28) != 0) {
    uVar3 = 0;
    do {
      uVar1 = uVar3 & 0xffff;
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulong)uVar2;
      SMBAnimal__Update(*(SMBAnimal **)(*(long *)(self + 0x38) + uVar1 * 8));
    } while ((int)uVar2 < (int)(uint) * (ushort *)(self + 0x28));
  }
  return;
}

/* ======================================================================
 * SMBAnimals__RemoveAnimal  (Ghidra `RemoveAnimal` @ 0048beb0)
 * Signature: uint8_t __thiscall RemoveAnimal(SMBAnimals * self, SMBAnimal * arg1)
 * Class: SMBAnimals
 * Calls: (none)
 * Called by: `DeleteSelectedAnimal`
 */
/* SMBAnimals__RemoveAnimal(SMBAnimal*) */

void __thiscall SMBAnimals__RemoveAnimal(SMBAnimals *self, SMBAnimal *arg1)

{
  uint64_t *puVar1;
  ushort *puVar2;
  ushort uVar3;
  short sVar4;
  uint uVar5;
  ushort uVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  ushort uVar11;

  uVar6 = *(ushort *)(self + 0x28);
  if (uVar6 != 0) {
    plVar9 = *(long **)(self + 0x38);
    uVar11 = 0;
    plVar7 = plVar9;
    if ((SMBAnimal *)*plVar9 == arg1) {
      uVar10 = 1;
      uVar5 = 0;
    } else {
      do {
        uVar11 = uVar11 + 1;
        if (uVar11 == uVar6)
          goto joined_r0x0048bee4;
        plVar7 = plVar7 + 1;
      } while ((SMBAnimal *)*plVar7 != arg1);
      uVar5 = (uint)uVar11;
      uVar10 = uVar5 + 1;
    }
    if ((uVar10 < uVar6) && ((int)uVar5 < (int)(uVar6 - 1))) {
      lVar8 = (long)(int)uVar5 << 3;
      uVar10 = uVar5;
      while (true) {
        puVar1 = (uint64_t *)((long)plVar9 + lVar8);
        lVar8 = lVar8 + 8;
        uVar10 = uVar10 + 1;
        *puVar1 = *(uint64_t *)((long)plVar9 + lVar8);
        uVar6 = *(ushort *)(self + 0x28);
        if ((int)(uVar6 - 1) <= (int)uVar10)
          break;
        plVar9 = *(long **)(self + 0x38);
      }
    }
    if ((*(int *)(self + 0x30) == 1) && (uVar11 = *(ushort *)(self + 0x2a), uVar11 != 0)) {
      uVar6 = 0;
      do {
        while (true) {
          puVar2 = (ushort *)(*(long *)(self + 0x40) + (ulong)uVar6 * 2);
          uVar3 = *puVar2;
          if (uVar3 != uVar5)
            break;
          *puVar2 = 0xffff;
          uVar11 = *(ushort *)(self + 0x2a);
          uVar6 = uVar6 + 1;
          if (uVar11 <= uVar6)
            goto LAB_0048bfca;
        }
        if ((uVar5 < uVar3) && ((ushort)(uVar3 - 1) < 0xfffe)) {
          *puVar2 = uVar3 - 1;
          uVar11 = *(ushort *)(self + 0x2a);
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar11);
    LAB_0048bfca:
      uVar6 = *(ushort *)(self + 0x28);
    }
    sVar4 = 0;
    if (uVar6 != 0) {
      sVar4 = uVar6 - 1;
    }
    *(short *)(self + 0x28) = sVar4;
  }
joined_r0x0048bee4:
  if (arg1 != (SMBAnimal *)0x0) {
    /* WARNING: Could not recover jumptable at 0x0048bef0. Too many branches */
    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)arg1 + 8))(arg1);
    return;
  }
  return;
}

/* ======================================================================
 * SMBAnimals__Reset  (Ghidra `Reset` @ 0048bfe0)
 * Signature: uint8_t __thiscall Reset(SMBAnimals * self)
 * Class: SMBAnimals
 * Calls: `SMBAnimal__Reset`
 * Called by: `FlyWrench__Reset`, `GSuperMeatBoy__LoadDeferredCharactor`, `GSuperMeatBoy__SetCurrentLevel`, `GSuperMeatBoy__ShowCurrentReplay`, `LoadDeferredCharactor`, `Machinarium__Reset`, `MeatBoyCharactor__Reset`, `Ogmo__Reset`, `Runman__Reset`, `SMBEditor__Activate` (+2 more)
 */
/* SMBAnimals__Reset() */

void __thiscall SMBAnimals__Reset(SMBAnimals *self)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;

  if (*(short *)(self + 0x28) != 0) {
    uVar3 = 0;
    do {
      uVar1 = uVar3 & 0xffff;
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulong)uVar2;
      SMBAnimal__Reset(*(SMBAnimal **)(*(long *)(self + 0x38) + uVar1 * 8));
    } while ((int)uVar2 < (int)(uint) * (ushort *)(self + 0x28));
  }
  return;
}

/* ======================================================================
 * SMBAnimals__GetNumAnimals  (Ghidra `GetNumAnimals` @ 0048c020)
 * Signature: uint8_t __thiscall GetNumAnimals(SMBAnimals * self)
 * Class: SMBAnimals
 * Calls: (none)
 * Called by: `ForestBoss__Update`, `HellBoss__Update`, `SMBLevelSave`
 */
/* SMBAnimals__GetNumAnimals() */

uint16_t __thiscall SMBAnimals__GetNumAnimals(SMBAnimals *self)

{
  return *(uint16_t *)(self + 0x28);
}

/* ======================================================================
 * SMBAnimals__GetAnimal  (Ghidra `GetAnimal` @ 0048c030)
 * Signature: uint8_t __thiscall GetAnimal(SMBAnimals * self, int arg1)
 * Class: SMBAnimals
 * Calls: (none)
 * Called by: `ForestBoss__Update`, `HellBoss__Update`, `SMBLevelSave`
 */
/* SMBAnimals__GetAnimal(int) */

uint64_t __thiscall SMBAnimals__GetAnimal(SMBAnimals *self, int arg1)

{
  return *(uint64_t *)(*(long *)(self + 0x38) + (ulong)(ushort)arg1 * 8);
}

/* ======================================================================
 * SMBAnimals__IsValidAnimal  (Ghidra `IsValidAnimal` @ 0048c040)
 * Signature: uint8_t __thiscall IsValidAnimal(SMBAnimals * self, int arg1)
 * Class: SMBAnimals
 * Calls: (none)
 * Called by: `EditorButton_SetAnimalMode`, `SMBEditor__SetToAnimalMode__004b05a0`, `SMBEditor__Update`
 */
/* SMBAnimals__IsValidAnimal(int) */

bool __thiscall SMBAnimals__IsValidAnimal(SMBAnimals *self, int arg1)

{
  return *(short *)(self + (long)arg1 * 0x370 + 0x78) != 0;
}

/* ======================================================================
 * SMBAnimals__AnimalCollision  (Ghidra `AnimalCollision` @ 0048c060)
 * Signature: uint8_t __thiscall AnimalCollision(SMBAnimals * self, SceneObject2D * arg1, Bounds * arg2)
 * Class: SMBAnimals
 * Calls: `GetRandomINT`, `IsBoundsTouchingBounds`
 * Called by: `MeatBoyCharactor__Update`
 */
/* SMBAnimals__AnimalCollision(SceneObject2D*, Bounds*) */

uint64_t __thiscall SMBAnimals__AnimalCollision(SMBAnimals *self, SceneObject2D *arg1, Bounds *arg2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  uint32_t uVar4;
  ushort uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;

  if (arg2 == (Bounds *)0x0) {
    arg2 = *(Bounds **)(arg1 + 0x48);
  }
  uVar5 = *(ushort *)(self + 0x28);
  if (uVar5 != 0) {
    uVar7 = 0;
    do {
      lVar1 = (uVar7 & 0xffff) * 8;
      lVar8 = *(long *)(*(long *)(self + 0x38) + (uVar7 & 0xffff) * 8);
      if ((*(int *)(lVar8 + 0x218) != 5) &&
          ((((iVar2 = *(int *)(lVar8 + 0x214), iVar2 - 8U < 8 || (iVar2 == 0x12)) ||
             (iVar2 == 0x13)) ||
            (iVar2 == 0x11)))) {
        iVar3 = IsBoundsTouchingBounds(arg2, (Bounds *)(lVar8 + 0x15c));
        if (iVar3 == 1) {
          if (iVar2 == 0x12) {
            lVar1 = *(long *)(*(long *)(self + 0x38) + lVar1);
            if (*(int *)(lVar1 + 0x218) != 9) {
              uVar4 = 0;
              lVar8 = (long)*(int *)(lVar1 + 0x214) * 0x370 + 0x368 + *(long *)(lVar1 + 0x230);
              uVar5 = *(ushort *)(lVar8 + 0x28);
              if (uVar5 != 0) {
                uVar4 = GetRandomINT(0, uVar5 - 1);
              }
              *(uint32_t *)(lVar8 + 0x50) = uVar4;
              *(uint32_t *)(lVar1 + 0x220) = 0;
              uVar4 = *(uint32_t *)((long)*(int *)(lVar1 + 0x214) * 0x370 +
                                    *(long *)(lVar1 + 0x230) + 0x3b8);
              *(uint32_t *)(lVar1 + 0x218) = 9;
              *(uint32_t *)(lVar1 + 0x228) = 1;
              *(uint32_t *)(lVar1 + 0x21c) = uVar4;
              return 1;
            }
            return 1;
          }
          if (iVar2 == 0x11) {
            lVar1 = *(long *)(*(long *)(self + 0x38) + lVar1);
            if (*(int *)(lVar1 + 0x218) != 5) {
              uVar4 = 0;
              lVar8 = (long)*(int *)(lVar1 + 0x214) * 0x370 + 0x208 + *(long *)(lVar1 + 0x230);
              uVar5 = *(ushort *)(lVar8 + 0x28);
              if (uVar5 != 0) {
                uVar4 = GetRandomINT(0, uVar5 - 1);
              }
              *(uint32_t *)(lVar8 + 0x50) = uVar4;
              *(uint32_t *)(lVar1 + 0x220) = 0;
              uVar4 = *(uint32_t *)((long)*(int *)(lVar1 + 0x214) * 0x370 +
                                    *(long *)(lVar1 + 0x230) + 600);
              *(uint32_t *)(lVar1 + 0x218) = 5;
              *(uint32_t *)(lVar1 + 0x228) = 1;
              *(uint32_t *)(lVar1 + 0x21c) = uVar4;
              return 1;
            }
            return 1;
          }
          return 1;
        }
        uVar5 = *(ushort *)(self + 0x28);
      }
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulong)uVar6;
    } while ((int)uVar6 < (int)(uint)uVar5);
  }
  return 0;
}

/* ======================================================================
 * SMBAnimals__RemoveAnimals  (Ghidra `RemoveAnimals` @ 0048c260)
 * Signature: uint8_t __thiscall RemoveAnimals(SMBAnimals * self)
 * Class: SMBAnimals
 * Calls: (none)
 * Called by: `HellBoss__Reset`, `HellBoss__Update`, `SMBLevelLoad`
 */
/* SMBAnimals__RemoveAnimals() */

void __thiscall SMBAnimals__RemoveAnimals(SMBAnimals *self)

{
  ushort uVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;

  uVar4 = (uint) * (ushort *)(self + 0x28);
  if (*(ushort *)(self + 0x28) != 0) {
    uVar6 = 0;
    do {
      plVar2 = *(long **)(*(long *)(self + 0x38) + (uVar6 & 0xffff) * 8);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
        uVar4 = (uint) * (ushort *)(self + 0x28);
      }
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulong)uVar5;
    } while ((int)uVar5 < (int)uVar4);
  }
  *(uint16_t *)(self + 0x28) = 0;
  if ((*(int *)(self + 0x30) == 1) && (uVar1 = *(ushort *)(self + 0x2a), uVar1 != 0)) {
    lVar3 = 0;
    do {
      *(uint16_t *)(*(long *)(self + 0x40) + lVar3) = 0xffff;
      lVar3 = lVar3 + 2;
    } while (lVar3 != (ulong)(uVar1 - 1 & 0xffff) * 2 + 2);
    return;
  }
  return;
}

/* ======================================================================
 * SMBAnimals__SMBAnimals  (Ghidra `SMBAnimals` @ 0048c2f0)
 * Signature: uint8_t __thiscall SMBAnimals(SMBAnimals * self)
 * Class: SMBAnimals
 * Calls: `CriticalSection__CriticalSection`
 * Called by: `SMBPalette__SMBPalette__004f3ca0`
 */
/* SMBAnimals__SMBAnimals() */

void __thiscall SMBAnimals__SMBAnimals(SMBAnimals *self)

{
  CriticalSection *pCVar1;
  CriticalSection *this_00;
  long lVar2;

  lVar2 = 0x13;
  pCVar1 = (CriticalSection *)(self + 0x50);
  CriticalSection__CriticalSection((CriticalSection *)self);
  *(uint16_t *)(self + 0x2a) = 0;
  *(uint16_t *)(self + 0x28) = 0;
  *(uint16_t *)(self + 0x34) = 1;
  *(uint64_t *)(self + 0x38) = 0;
  *(uint64_t *)(self + 0x40) = 0;
  *(uint32_t *)(self + 0x48) = 0;
  self[0x2c] = (SMBAnimals)0x4;
  *(uint32_t *)(self + 0x30) = 0;
  this_00 = pCVar1;
  do {
    /* try { // try from 0048c353 to 0048c357 has its CatchHandler @ 0048c6f4 */
    CriticalSection__CriticalSection(this_00);
    *(uint16_t *)(this_00 + 0x2a) = 0;
    *(uint16_t *)(this_00 + 0x28) = 0;
    *(uint16_t *)(this_00 + 0x34) = 1;
    *(uint64_t *)(this_00 + 0x38) = 0;
    *(uint64_t *)(this_00 + 0x40) = 0;
    *(uint32_t *)(this_00 + 0x48) = 0;
    this_00[0x2c] = (CriticalSection)0x4;
    *(uint32_t *)(this_00 + 0x30) = 0;
    *(uint32_t *)(this_00 + 0x50) = 0;
    /* try { // try from 0048c397 to 0048c39b has its CatchHandler @ 0048c815 */
    CriticalSection__CriticalSection(this_00 + 0x58);
    *(uint16_t *)(self + (long)(this_00 + (0xd2 - (long)pCVar1))) = 0;
    *(uint16_t *)(self + (long)(this_00 + (0xd0 - (long)pCVar1))) = 0;
    *(uint16_t *)(self + (long)(this_00 + (0xdc - (long)pCVar1))) = 1;
    *(uint64_t *)(self + (long)(this_00 + (0xe0 - (long)pCVar1))) = 0;
    *(uint64_t *)(self + (long)(this_00 + (0xe8 - (long)pCVar1))) = 0;
    *(uint32_t *)(self + (long)(this_00 + (0xf0 - (long)pCVar1))) = 0;
    self[(long)(this_00 + (0xd4 - (long)pCVar1))] = (SMBAnimals)0x4;
    *(uint32_t *)(self + (long)(this_00 + (0xd8 - (long)pCVar1))) = 0;
    *(uint32_t *)(self + (long)(this_00 + (0xf8 - (long)pCVar1))) = 0;
    /* try { // try from 0048c3f2 to 0048c3f6 has its CatchHandler @ 0048c808 */
    CriticalSection__CriticalSection(this_00 + 0xb0);
    *(uint16_t *)(self + (long)(this_00 + (0x12a - (long)pCVar1))) = 0;
    *(uint16_t *)(self + (long)(this_00 + (0x128 - (long)pCVar1))) = 0;
    *(uint16_t *)(self + (long)(this_00 + (0x134 - (long)pCVar1))) = 1;
    *(uint64_t *)(self + (long)(this_00 + (0x138 - (long)pCVar1))) = 0;
    *(uint64_t *)(self + (long)(this_00 + (0x140 - (long)pCVar1))) = 0;
    *(uint32_t *)(self + (long)(this_00 + (0x148 - (long)pCVar1))) = 0;
    self[(long)(this_00 + (300 - (long)pCVar1))] = (SMBAnimals)0x4;
    *(uint32_t *)(self + (long)(this_00 + (0x130 - (long)pCVar1))) = 0;
    *(uint32_t *)(self + (long)(this_00 + (0x150 - (long)pCVar1))) = 0;
    /* try { // try from 0048c44a to 0048c44e has its CatchHandler @ 0048c7fb */
    CriticalSection__CriticalSection(this_00 + 0x108);
    *(uint16_t *)(self + (long)(this_00 + (0x182 - (long)pCVar1))) = 0;
    *(uint16_t *)(self + (long)(this_00 + (0x180 - (long)pCVar1))) = 0;
    *(uint16_t *)(self + (long)(this_00 + (0x18c - (long)pCVar1))) = 1;
    *(uint64_t *)(self + (long)(this_00 + (400 - (long)pCVar1))) = 0;
    *(uint64_t *)(self + (long)(this_00 + (0x198 - (long)pCVar1))) = 0;
    *(uint32_t *)(self + (long)(this_00 + (0x1a0 - (long)pCVar1))) = 0;
    self[(long)(this_00 + (0x184 - (long)pCVar1))] = (SMBAnimals)0x4;
    *(uint32_t *)(self + (long)(this_00 + (0x188 - (long)pCVar1))) = 0;
    *(uint32_t *)(self + (long)(this_00 + (0x1a8 - (long)pCVar1))) = 0;
    /* try { // try from 0048c4a2 to 0048c4a6 has its CatchHandler @ 0048c7ee */
    CriticalSection__CriticalSection(this_00 + 0x160);
    *(uint16_t *)(self + (long)(this_00 + (0x1da - (long)pCVar1))) = 0;
    *(uint16_t *)(self + (long)(this_00 + (0x1d8 - (long)pCVar1))) = 0;
    *(uint16_t *)(self + (long)(this_00 + (0x1e4 - (long)pCVar1))) = 1;
    *(uint64_t *)(self + (long)(this_00 + (0x1e8 - (long)pCVar1))) = 0;
    *(uint64_t *)(self + (long)(this_00 + (0x1f0 - (long)pCVar1))) = 0;
    *(uint32_t *)(self + (long)(this_00 + (0x1f8 - (long)pCVar1))) = 0;
    self[(long)(this_00 + (0x1dc - (long)pCVar1))] = (SMBAnimals)0x4;
    *(uint32_t *)(self + (long)(this_00 + (0x1e0 - (long)pCVar1))) = 0;
    *(uint32_t *)(self + (long)(this_00 + (0x200 - (long)pCVar1))) = 0;
    /* try { // try from 0048c4fa to 0048c4fe has its CatchHandler @ 0048c82f */
    CriticalSection__CriticalSection(this_00 + 0x1b8);
    *(uint16_t *)(self + (long)(this_00 + (0x232 - (long)pCVar1))) = 0;
    *(uint16_t *)(self + (long)(this_00 + (0x230 - (long)pCVar1))) = 0;
    *(uint16_t *)(self + (long)(this_00 + (0x23c - (long)pCVar1))) = 1;
    *(uint64_t *)(self + (long)(this_00 + (0x240 - (long)pCVar1))) = 0;
    *(uint64_t *)(self + (long)(this_00 + (0x248 - (long)pCVar1))) = 0;
    *(uint32_t *)(self + (long)(this_00 + (0x250 - (long)pCVar1))) = 0;
    self[(long)(this_00 + (0x234 - (long)pCVar1))] = (SMBAnimals)0x4;
    *(uint32_t *)(self + (long)(this_00 + (0x238 - (long)pCVar1))) = 0;
    *(uint32_t *)(self + (long)(this_00 + (600 - (long)pCVar1))) = 0;
    /* try { // try from 0048c552 to 0048c556 has its CatchHandler @ 0048c822 */
    CriticalSection__CriticalSection(this_00 + 0x210);
    *(uint16_t *)(self + (long)(this_00 + (0x28a - (long)pCVar1))) = 0;
    *(uint16_t *)(self + (long)(this_00 + (0x288 - (long)pCVar1))) = 0;
    *(uint16_t *)(self + (long)(this_00 + (0x294 - (long)pCVar1))) = 1;
    *(uint64_t *)(self + (long)(this_00 + (0x298 - (long)pCVar1))) = 0;
    *(uint64_t *)(self + (long)(this_00 + (0x2a0 - (long)pCVar1))) = 0;
    *(uint32_t *)(self + (long)(this_00 + (0x2a8 - (long)pCVar1))) = 0;
    self[(long)(this_00 + (0x28c - (long)pCVar1))] = (SMBAnimals)0x4;
    *(uint32_t *)(self + (long)(this_00 + (0x290 - (long)pCVar1))) = 0;
    *(uint32_t *)(self + (long)(this_00 + (0x2b0 - (long)pCVar1))) = 0;
    /* try { // try from 0048c5aa to 0048c5ae has its CatchHandler @ 0048c83c */
    CriticalSection__CriticalSection(this_00 + 0x268);
    *(uint16_t *)(self + (long)(this_00 + (0x2e2 - (long)pCVar1))) = 0;
    *(uint16_t *)(self + (long)(this_00 + (0x2e0 - (long)pCVar1))) = 0;
    *(uint16_t *)(self + (long)(this_00 + (0x2ec - (long)pCVar1))) = 1;
    *(uint64_t *)(self + (long)(this_00 + (0x2f0 - (long)pCVar1))) = 0;
    *(uint64_t *)(self + (long)(this_00 + (0x2f8 - (long)pCVar1))) = 0;
    *(uint32_t *)(self + (long)(this_00 + (0x300 - (long)pCVar1))) = 0;
    self[(long)(this_00 + (0x2e4 - (long)pCVar1))] = (SMBAnimals)0x4;
    *(uint32_t *)(self + (long)(this_00 + (0x2e8 - (long)pCVar1))) = 0;
    *(uint32_t *)(self + (long)(this_00 + (0x308 - (long)pCVar1))) = 0;
    /* try { // try from 0048c602 to 0048c606 has its CatchHandler @ 0048c7e1 */
    CriticalSection__CriticalSection(this_00 + 0x2c0);
    *(uint16_t *)(self + (long)(this_00 + (0x33a - (long)pCVar1))) = 0;
    *(uint16_t *)(self + (long)(this_00 + (0x338 - (long)pCVar1))) = 0;
    *(uint16_t *)(self + (long)(this_00 + (0x344 - (long)pCVar1))) = 1;
    *(uint64_t *)(self + (long)(this_00 + (0x348 - (long)pCVar1))) = 0;
    *(uint64_t *)(self + (long)(this_00 + (0x350 - (long)pCVar1))) = 0;
    *(uint32_t *)(self + (long)(this_00 + (0x358 - (long)pCVar1))) = 0;
    self[(long)(this_00 + (0x33c - (long)pCVar1))] = (SMBAnimals)0x4;
    *(uint32_t *)(self + (long)(this_00 + (0x340 - (long)pCVar1))) = 0;
    *(uint32_t *)(self + (long)(this_00 + (0x360 - (long)pCVar1))) = 0;
    /* try { // try from 0048c65a to 0048c65e has its CatchHandler @ 0048c778 */
    CriticalSection__CriticalSection(this_00 + 0x318);
    lVar2 = lVar2 + -1;
    *(uint16_t *)(pCVar1 + (long)(this_00 + (0x342 - (long)pCVar1))) = 0;
    *(uint16_t *)(pCVar1 + (long)(this_00 + (0x340 - (long)pCVar1))) = 0;
    *(uint16_t *)(pCVar1 + (long)(this_00 + (0x34c - (long)pCVar1))) = 1;
    *(uint64_t *)(pCVar1 + (long)(this_00 + (0x350 - (long)pCVar1))) = 0;
    *(uint64_t *)(pCVar1 + (long)(this_00 + (0x358 - (long)pCVar1))) = 0;
    *(uint32_t *)(pCVar1 + (long)(this_00 + (0x360 - (long)pCVar1))) = 0;
    pCVar1[(long)(this_00 + (0x344 - (long)pCVar1))] = (CriticalSection)0x4;
    *(uint32_t *)(pCVar1 + (long)(this_00 + (0x348 - (long)pCVar1))) = 0;
    *(uint32_t *)(pCVar1 + (long)(this_00 + (0x368 - (long)pCVar1))) = 0;
    this_00 = this_00 + 0x370;
  } while (lVar2 != -1);
  *(uint64_t *)(self + 0x4510) = 0;
  return;
}

/* ======================================================================
 * SMBAnimals__SMBAnimals__0048c850  (Ghidra `~SMBAnimals` @ 0048c850)
 * Signature: uint8_t __thiscall ~SMBAnimals(SMBAnimals * self)
 * Class: SMBAnimals
 * Calls: `CriticalSection__CriticalSection__005b71d0`, `free`
 * Called by: `SMBPalette__SMBPalette`
 */
/* SMBAnimals__SMBAnimals__0048c850() */

void __thiscall SMBAnimals__SMBAnimals__0048c850(SMBAnimals *self)

{
  CriticalSection *pCVar1;
  CriticalSection *this_00;
  CriticalSection *pCVar2;

  /* try { // try from 0048c85b to 0048c85f has its CatchHandler @ 0048c99d */
  DestroyAnimals(self);
  if (self != (SMBAnimals *)0xffffffffffffffb0) {
    this_00 = (CriticalSection *)(self + 0x4510);
    do {
      pCVar2 = this_00 + -0x370;
      if (pCVar2 != (CriticalSection *)0x0) {
        pCVar1 = this_00 + -0x10;
        while (pCVar2 != this_00) {
          this_00 = this_00 + -0x58;
          if (*(int *)pCVar1 == -0x5eef3582) {
            *(int *)pCVar1 = 0;
            free(*(void **)(*(long *)(pCVar1 + -0x10) + -8));
            if (*(int *)(pCVar1 + -0x18) == 1) {
              free(*(void **)(*(long *)(pCVar1 + -8) + -8));
            }
            *(int *)pCVar1 = 0;
            *(uint16_t *)(pCVar1 + -0x1e) = 0;
            *(uint16_t *)(pCVar1 + -0x20) = 0;
            *(uint64_t *)(pCVar1 + -0x10) = 0;
            *(uint64_t *)(pCVar1 + -8) = 0;
          }
          /* try { // try from 0048c893 to 0048c897 has its CatchHandler @ 0048c98a */
          CriticalSection__CriticalSection__005b71d0(this_00);
          pCVar1 = pCVar1 + -0x58;
        }
      }
      this_00 = pCVar2;
    } while ((CriticalSection *)(self + 0x50) != pCVar2);
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
    CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
    return;
  }
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
  return;
}
