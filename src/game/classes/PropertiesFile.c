/* src/game/classes/PropertiesFile.c — 8 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "PropertiesFile.h"

/* ======================================================================
 * PropertiesFile__PropertiesFile  (Ghidra `~PropertiesFile` @ 005960d0)
 * Signature: uint8_t __thiscall ~PropertiesFile(PropertiesFile * self)
 * Class: PropertiesFile
 * Calls: `CriticalSection__CriticalSection__005b71d0`, `free`
 * Called by: `LoadControlConfig`, `SMBChapter__LoadChapter`, `SMBChapter__VerifyChapterFileData`, `SMBPalette__SMBPalette`
 */
/* PropertiesFile__PropertiesFile() */

void __thiscall PropertiesFile__PropertiesFile(PropertiesFile *self)

{
  if (*(int *)(self + 0x48) != -0x5eef3582) {
    CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
    return;
  }
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

/* ======================================================================
 * PropertiesFile__ReadBlock  (Ghidra `ReadBlock` @ 00596260)
 * Signature: uint8_t __thiscall ReadBlock(PropertiesFile * self, string * arg1, int * arg2)
 * Class: PropertiesFile
 * Calls: `CriticalSection__CriticalSection`, `free`, `malloc`, `memcpy`, `std__string_string`, `std__string_string__00825640`
 * Called by: (none)
 */
/* WARNING: Removing unreachable block (ram,0x0059726f) */
/* WARNING: Removing unreachable block (ram,0x005972c3) */
/* WARNING: Removing unreachable block (ram,0x005972b5) */
/* WARNING: Removing unreachable block (ram,0x00597252) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PropertiesFile__ReadBlock(std__string_string__00825640&, int&) */

uint64_t __thiscall PropertiesFile__ReadBlock(PropertiesFile *self,string *arg1,int *arg2)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  PropertiesFile *pPVar4;
  short sVar5;
  ushort uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  void *pvVar10;
  void *pvVar11;
  long lVar12;
  uint *puVar13;
  long lVar14;
  void *pvVar15;
  uint64_t uVar16;
  ulong uVar17;
  void *pvVar18;
  PropertiesFile *pPVar19;
  ushort uVar20;
  ulong uVar21;
  uint *puVar22;
  size_t sVar23;
  ushort *puVar24;
  char cVar25;
  int iVar26;
  int iVar27;
  uint64_t *puVar28;
  bool bVar29;
  byte bVar30;
  uint local_80;
  void *local_78 [2];
  void *local_68 [2];
  char *local_58 [2];
  long local_48 [3];
  
  bVar30 = 0;
  cVar25 = (char)arg1;
  iVar7 = std__string_find(cVar25,0x7b);
  if ((iVar7 == -1) || (iVar8 = std__string_find(cVar25,0x7d), iVar8 == -1)) {
    return 0;
  }
  if (*(int *)(self + 0x48) == -0x5eef3582) {
    uVar6 = *(ushort *)(self + 0x28);
    if (*(ushort *)(self + 0x2a) <= uVar6) {
      uVar6 = *(ushort *)(self + 0x2a) + *(short *)(self + 0x34);
      uVar17 = (ulong)(byte)self[0x2c];
      pvVar10 = *(void **)(self + 0x38);
      *(ushort *)(self + 0x2a) = uVar6;
      uVar21 = (ulong)uVar6 * 0x70;
      pvVar11 = malloc(uVar17 + 0x10 + uVar21);
      pvVar18 = (void *)0x0;
      if (pvVar11 != (void *)0x0) {
        pvVar18 = (void *)((long)pvVar11 + 0x10U +
                          (uVar17 - ((long)pvVar11 + 0x10U) % uVar17) % uVar17);
        *(ulong *)((long)pvVar18 + -0x10) = uVar21;
        *(void **)((long)pvVar18 + -8) = pvVar11;
        if (pvVar10 != (void *)0x0) {
          uVar17 = *(ulong *)((long)pvVar10 + -0x10);
          if (uVar21 <= *(ulong *)((long)pvVar10 + -0x10)) {
            uVar17 = uVar21;
          }
          memcpy(pvVar18,pvVar10,uVar17);
          free(*(void **)((long)pvVar10 + -8));
        }
      }
      *(void **)(self + 0x38) = pvVar18;
      pvVar10 = *(void **)(self + 0x40);
      if (pvVar10 != (void *)0x0) {
        uVar20 = *(ushort *)(self + 0x2a);
        uVar17 = (ulong)(byte)self[0x2c];
        pvVar11 = (void *)0x0;
        uVar21 = (ulong)uVar20 * 2;
        pvVar18 = malloc(uVar17 + 0x10 + uVar21);
        if (pvVar18 != (void *)0x0) {
          pvVar11 = (void *)((long)pvVar18 + 0x10U +
                            (uVar17 - ((long)pvVar18 + 0x10U) % uVar17) % uVar17);
          *(ulong *)((long)pvVar11 + -0x10) = uVar21;
          *(void **)((long)pvVar11 + -8) = pvVar18;
          uVar17 = *(ulong *)((long)pvVar10 + -0x10);
          if (uVar21 <= *(ulong *)((long)pvVar10 + -0x10)) {
            uVar17 = uVar21;
          }
          memcpy(pvVar11,pvVar10,uVar17);
          free(*(void **)((long)pvVar10 + -8));
          uVar20 = *(ushort *)(self + 0x2a);
        }
        uVar6 = *(ushort *)(self + 0x28);
        *(void **)(self + 0x40) = pvVar11;
        if (uVar20 <= uVar6) goto LAB_00596380;
        while( true ) {
          uVar21 = (ulong)uVar6;
          uVar6 = uVar6 + 1;
          *(uint16_t *)((long)pvVar11 + uVar21 * 2) = 0xffff;
          if (uVar20 <= uVar6) break;
          pvVar11 = *(void **)(self + 0x40);
        }
      }
      uVar6 = *(ushort *)(self + 0x28);
    }
  }
  else {
    uVar21 = (ulong)(byte)self[0x2c];
    *(uint32_t *)(self + 0x30) = 0;
    pvVar10 = malloc(uVar21 + 0x240);
    puVar28 = (uint64_t *)0x0;
    if (pvVar10 != (void *)0x0) {
      puVar28 = (uint64_t *)
                ((long)pvVar10 + 0x10U + (uVar21 - ((long)pvVar10 + 0x10U) % uVar21) % uVar21);
      puVar28[-2] = 0x230;
      puVar28[-1] = pvVar10;
    }
    bVar29 = ((ulong)puVar28 & 1) != 0;
    *(uint64_t **)(self + 0x38) = puVar28;
    uVar21 = 0x230;
    if (bVar29) {
      *(uint8_t *)puVar28 = 0;
      uVar21 = 0x22f;
      puVar28 = (uint64_t *)((long)puVar28 + 1);
    }
    if (((ulong)puVar28 & 2) != 0) {
      *(uint16_t *)puVar28 = 0;
      uVar21 = (ulong)((int)uVar21 - 2);
      puVar28 = (uint64_t *)((long)puVar28 + 2);
    }
    if (((ulong)puVar28 & 4) != 0) {
      *(uint32_t *)puVar28 = 0;
      uVar21 = (ulong)((int)uVar21 - 4);
      puVar28 = (uint64_t *)((long)puVar28 + 4);
    }
    for (uVar17 = uVar21 >> 3; uVar17 != 0; uVar17 = uVar17 - 1) {
      *puVar28 = 0;
      puVar28 = puVar28 + (ulong)bVar30 * -2 + 1;
    }
    if ((uVar21 & 4) != 0) {
      *(uint32_t *)puVar28 = 0;
      puVar28 = (uint64_t *)((long)puVar28 + 4);
    }
    if ((uVar21 & 2) != 0) {
      *(uint16_t *)puVar28 = 0;
      puVar28 = (uint64_t *)((long)puVar28 + 2);
    }
    if (bVar29) {
      *(uint8_t *)puVar28 = 0;
    }
    *(uint16_t *)(self + 0x28) = 0;
    *(uint16_t *)(self + 0x2a) = 5;
    uVar6 = 0;
    *(uint32_t *)(self + 0x48) = 0xa110ca7e;
    *(uint16_t *)(self + 0x34) = 5;
  }
LAB_00596380:
  if ((*(int *)(self + 0x30) == 1) && (*(short *)(self + 0x2a) != 0)) {
    puVar24 = *(ushort **)(self + 0x40);
    sVar5 = 1;
    uVar20 = *puVar24;
    while (uVar20 != 0xffff) {
      puVar24 = puVar24 + 1;
      if (sVar5 == *(short *)(self + 0x2a)) goto LAB_0059638b;
      sVar5 = sVar5 + 1;
      uVar20 = *puVar24;
    }
    *puVar24 = uVar6;
    uVar6 = *(ushort *)(self + 0x28);
  }
LAB_0059638b:
  uVar21 = 0x70;
  *(ushort *)(self + 0x28) = uVar6 + 1;
  puVar28 = (uint64_t *)(((ulong)(ushort)(uVar6 + 1) - 1) * 0x70 + *(long *)(self + 0x38));
  bVar29 = ((ulong)puVar28 & 1) != 0;
  if (bVar29) {
    *(uint8_t *)puVar28 = 0;
    uVar21 = 0x6f;
    puVar28 = (uint64_t *)((long)puVar28 + 1);
  }
  if (((ulong)puVar28 & 2) != 0) {
    *(uint16_t *)puVar28 = 0;
    uVar21 = (ulong)((int)uVar21 - 2);
    puVar28 = (uint64_t *)((long)puVar28 + 2);
  }
  if (((ulong)puVar28 & 4) != 0) {
    *(uint32_t *)puVar28 = 0;
    uVar21 = (ulong)((int)uVar21 - 4);
    puVar28 = (uint64_t *)((long)puVar28 + 4);
  }
  for (uVar17 = uVar21 >> 3; uVar17 != 0; uVar17 = uVar17 - 1) {
    *puVar28 = 0;
    puVar28 = puVar28 + (ulong)bVar30 * -2 + 1;
  }
  if ((uVar21 & 4) != 0) {
    *(uint32_t *)puVar28 = 0;
    puVar28 = (uint64_t *)((long)puVar28 + 4);
  }
  if ((uVar21 & 2) != 0) {
    *(uint16_t *)puVar28 = 0;
    puVar28 = (uint64_t *)((long)puVar28 + 2);
  }
  if (bVar29) {
    *(uint8_t *)puVar28 = 0;
  }
  pPVar4 = _DAT_00000058 /* R:u32=1919252014 */;
  pvVar10 = (void *)((ulong)(*(ushort *)(self + 0x28) - 1 & 0xffff) * 0x70 + *(long *)(self + 0x38))
  ;
  if (pvVar10 == (void *)0x0) {
    _DAT_00000050 /* R:u32=7237481 str="completed.5889" */ = 0;
    if (iRam0000000000000068 == -0x5eef3582) {
      if (_DAT_0000004a /* R:u32=1702243957 */ == 0) {
        _DAT_0000004a /* R:u32=1702243957 */ = 1;
        uVar21 = (ulong)DAT_0000004c /* R:u32=1936876918 */;
        pvVar11 = malloc(uVar21 + 0x70);
        self = pPVar4;
        if (pvVar11 == (void *)0x0) {
          _DAT_00000058 /* R:u32=1919252014 */ = (PropertiesFile *)0x0;
        }
        else {
          pPVar19 = (PropertiesFile *)
                    ((long)pvVar11 + 0x10U + (uVar21 - ((long)pvVar11 + 0x10U) % uVar21) % uVar21);
          *(uint64_t *)(pPVar19 + -0x10) = 0x60;
          *(void **)(pPVar19 + -8) = pvVar11;
          if (pPVar4 != (PropertiesFile *)0x0) {
            sVar23 = 0x60;
            if (*(ulong *)(pPVar4 + -0x10) < 0x61) {
              sVar23 = *(ulong *)(pPVar4 + -0x10);
            }
            memcpy(pPVar19,pPVar4,sVar23);
            free(*(void **)(pPVar4 + -8));
          }
          pPVar4 = _DAT_00000060 /* R:2.9205412394039953e-11f */;
          uVar6 = _DAT_0000004a /* R:u32=1702243957 */;
          _DAT_00000058 /* R:u32=1919252014 */ = pPVar19;
          if (_DAT_00000050 /* R:u32=7237481 str="completed.5889" */ == 1) {
            uVar17 = (ulong)DAT_0000004c /* R:u32=1936876918 */;
            self = (PropertiesFile *)0x0;
            uVar21 = (ulong)_DAT_0000004a /* R:u32=1702243957 */ * 2;
            pvVar11 = malloc(uVar17 + 0x10 + uVar21);
            pPVar19 = self;
            uVar20 = _DAT_00000048 /* R:5.580460746279492e-11f */;
            if (pvVar11 == (void *)0x0) goto joined_r0x00597026;
            self = (PropertiesFile *)
                   ((long)pvVar11 + 0x10U + (uVar17 - ((long)pvVar11 + 0x10U) % uVar17) % uVar17);
            *(ulong *)(self + -0x10) = uVar21;
            *(void **)(self + -8) = pvVar11;
            lVar12 = 0;
            if (pPVar4 == (PropertiesFile *)0x0) goto LAB_00597249;
            uVar17 = *(ulong *)(pPVar4 + -0x10);
            if (uVar21 <= *(ulong *)(pPVar4 + -0x10)) {
              uVar17 = uVar21;
            }
            memcpy(self,pPVar4,uVar17);
            free(*(void **)(pPVar4 + -8));
            pPVar19 = self;
            uVar20 = _DAT_00000048 /* R:5.580460746279492e-11f */;
            uVar6 = _DAT_0000004a /* R:u32=1702243957 */;
            goto joined_r0x00597026;
          }
        }
      }
      goto LAB_0059650c;
    }
  }
  else {
    CriticalSection__CriticalSection((CriticalSection *)((long)pvVar10 + 0x20));
    *(uint16_t *)((long)pvVar10 + 0x4a) = 0;
    *(uint16_t *)((long)pvVar10 + 0x48) = 0;
    *(uint16_t *)((long)pvVar10 + 0x54) = 1;
    *(uint64_t *)((long)pvVar10 + 0x58) = 0;
    *(uint64_t *)((long)pvVar10 + 0x60) = 0;
    *(uint32_t *)((long)pvVar10 + 0x68) = 0;
    *(uint8_t *)((long)pvVar10 + 0x4c) = 4;
    *(uint32_t *)((long)pvVar10 + 0x50) = 0;
  }
  self = (PropertiesFile *)(ulong)*(byte *)((long)pvVar10 + 0x4c);
  pvVar11 = malloc((size_t)(self + 0x70));
  puVar28 = (uint64_t *)0x0;
  if (pvVar11 != (void *)0x0) {
    puVar28 = (uint64_t *)
              ((long)pvVar11 + 0x10U +
              ((long)self - ((long)pvVar11 + 0x10U) % (ulong)self) % (ulong)self);
    puVar28[-2] = 0x60;
    puVar28[-1] = pvVar11;
  }
  bVar29 = ((ulong)puVar28 & 1) != 0;
  *(uint64_t **)((long)pvVar10 + 0x58) = puVar28;
  uVar21 = 0x60;
  if (bVar29) {
    *(uint8_t *)puVar28 = 0;
    uVar21 = 0x5f;
    puVar28 = (uint64_t *)((long)puVar28 + 1);
  }
  if (((ulong)puVar28 & 2) != 0) {
    *(uint16_t *)puVar28 = 0;
    uVar21 = (ulong)((int)uVar21 - 2);
    puVar28 = (uint64_t *)((long)puVar28 + 2);
  }
  if (((ulong)puVar28 & 4) != 0) {
    *(uint32_t *)puVar28 = 0;
    uVar21 = (ulong)((int)uVar21 - 4);
    puVar28 = (uint64_t *)((long)puVar28 + 4);
  }
  for (uVar17 = uVar21 >> 3; uVar17 != 0; uVar17 = uVar17 - 1) {
    *puVar28 = 0;
    puVar28 = puVar28 + (ulong)bVar30 * -2 + 1;
  }
  if ((uVar21 & 4) != 0) {
    *(uint32_t *)puVar28 = 0;
    puVar28 = (uint64_t *)((long)puVar28 + 4);
  }
  if ((uVar21 & 2) != 0) {
    *(uint16_t *)puVar28 = 0;
    puVar28 = (uint64_t *)((long)puVar28 + 2);
  }
  if (bVar29) {
    *(uint8_t *)puVar28 = 0;
  }
  *(uint16_t *)((long)pvVar10 + 0x48) = 0;
  *(uint16_t *)((long)pvVar10 + 0x4a) = 1;
  *(uint32_t *)((long)pvVar10 + 0x68) = 0xa110ca7e;
  *(uint16_t *)((long)pvVar10 + 0x54) = 5;
LAB_0059650c:
  while( true ) {
    iVar9 = *arg2;
    lVar12 = *(long *)arg1;
    if ((ulong)(long)iVar9 <= *(ulong *)(lVar12 + -0x18)) break;
    std__throw_out_of_range("basic_string__substr");
LAB_00597249:
    pPVar19 = self;
    uVar20 = _DAT_00000048 /* R:5.580460746279492e-11f */;
    uVar6 = *(ushort *)(lVar12 + 0x4a);
joined_r0x00597026:
    for (; pPVar4 = pPVar19, _DAT_00000060 /* R:2.9205412394039953e-11f */ = pPVar4, uVar20 < uVar6; uVar20 = uVar20 + 1) {
      *(uint16_t *)(pPVar4 + (ulong)uVar20 * 2) = 0xffff;
      pPVar19 = _DAT_00000060 /* R:2.9205412394039953e-11f */;
      self = pPVar4;
    }
  }
  std__string_string((string *)local_78,arg1,(long)iVar9,(long)(iVar7 - iVar9));
                    /* try { // try from 00596541 to 00596724 has its CatchHandler @ 0059723a */
  lVar12 = std__string_find((char)local_78,0x20);
  pvVar11 = local_78[0];
  if (lVar12 != -1) {
    iVar9 = *(int *)((long)local_78[0] + -0x18);
    puVar13 = malloc((long)iVar9);
    uVar21 = 0;
    if (0 < iVar9) {
      lVar12 = 0;
      do {
        if (*(char *)((long)pvVar11 + lVar12) != ' ') {
          iVar26 = (int)uVar21;
          uVar21 = (ulong)(iVar26 + 1);
          *(char *)((long)puVar13 + (long)iVar26) = *(char *)((long)pvVar11 + lVar12);
        }
        lVar12 = lVar12 + 1;
      } while ((int)lVar12 < iVar9);
      uVar21 = (ulong)(int)uVar21;
    }
    *(uint8_t *)((long)puVar13 + uVar21) = 0;
    puVar22 = puVar13;
    do {
      uVar3 = *puVar22;
      puVar22 = puVar22 + 1;
    } while ((uVar3 + 0xfefefeff & ~uVar3 & 0x80808080) == 0);
    std__string_assign((char *)local_78,(ulong)puVar13);
    free(puVar13);
  }
  if (pvVar10 != local_78[0]) {
    sVar23 = 0x20;
    if (*(ulong *)((long)local_78[0] + -0x18) < 0x21) {
      sVar23 = *(ulong *)((long)local_78[0] + -0x18);
    }
    memcpy(pvVar10,local_78[0],sVar23);
  }
  *arg2 = iVar7;
  do {
    iVar7 = std__string_find(cVar25,0x3d);
    iVar9 = std__string_find(cVar25,0x3b);
    bVar29 = false;
    if (iVar7 < iVar9) {
      if (*(int *)((long)pvVar10 + 0x68) == -0x5eef3582) {
        uVar6 = *(ushort *)((long)pvVar10 + 0x48);
        if (*(ushort *)((long)pvVar10 + 0x4a) <= uVar6) {
          uVar6 = *(ushort *)((long)pvVar10 + 0x4a) + *(short *)((long)pvVar10 + 0x54);
          uVar17 = (ulong)*(byte *)((long)pvVar10 + 0x4c);
          pvVar18 = *(void **)((long)pvVar10 + 0x58);
          *(ushort *)((long)pvVar10 + 0x4a) = uVar6;
          uVar21 = (ulong)uVar6 * 0x60;
          pvVar15 = malloc(uVar17 + 0x10 + uVar21);
          pvVar11 = (void *)0x0;
          if (pvVar15 != (void *)0x0) {
            pvVar11 = (void *)((long)pvVar15 + 0x10U +
                              (uVar17 - ((long)pvVar15 + 0x10U) % uVar17) % uVar17);
            *(ulong *)((long)pvVar11 + -0x10) = uVar21;
            *(void **)((long)pvVar11 + -8) = pvVar15;
            if (pvVar18 != (void *)0x0) {
              uVar17 = *(ulong *)((long)pvVar18 + -0x10);
              if (uVar21 <= *(ulong *)((long)pvVar18 + -0x10)) {
                uVar17 = uVar21;
              }
              memcpy(pvVar11,pvVar18,uVar17);
              free(*(void **)((long)pvVar18 + -8));
            }
          }
          *(void **)((long)pvVar10 + 0x58) = pvVar11;
          pvVar11 = *(void **)((long)pvVar10 + 0x60);
          if (pvVar11 != (void *)0x0) {
            uVar20 = *(ushort *)((long)pvVar10 + 0x4a);
            uVar17 = (ulong)*(byte *)((long)pvVar10 + 0x4c);
            pvVar18 = (void *)0x0;
            uVar21 = (ulong)uVar20 * 2;
            pvVar15 = malloc(uVar17 + 0x10 + uVar21);
            if (pvVar15 != (void *)0x0) {
              pvVar18 = (void *)((long)pvVar15 + 0x10U +
                                (uVar17 - ((long)pvVar15 + 0x10U) % uVar17) % uVar17);
              *(ulong *)((long)pvVar18 + -0x10) = uVar21;
              *(void **)((long)pvVar18 + -8) = pvVar15;
              uVar17 = *(ulong *)((long)pvVar11 + -0x10);
              if (uVar21 <= *(ulong *)((long)pvVar11 + -0x10)) {
                uVar17 = uVar21;
              }
              memcpy(pvVar18,pvVar11,uVar17);
              free(*(void **)((long)pvVar11 + -8));
              uVar20 = *(ushort *)((long)pvVar10 + 0x4a);
            }
            uVar6 = *(ushort *)((long)pvVar10 + 0x48);
            *(void **)((long)pvVar10 + 0x60) = pvVar18;
            if (uVar20 <= uVar6) goto LAB_00596670;
            while( true ) {
              uVar21 = (ulong)uVar6;
              uVar6 = uVar6 + 1;
              *(uint16_t *)((long)pvVar18 + uVar21 * 2) = 0xffff;
              if (uVar20 <= uVar6) break;
              pvVar18 = *(void **)((long)pvVar10 + 0x60);
            }
          }
          uVar6 = *(ushort *)((long)pvVar10 + 0x48);
        }
LAB_00596670:
        iVar26 = *(int *)((long)pvVar10 + 0x50);
      }
      else {
        uVar21 = (ulong)*(byte *)((long)pvVar10 + 0x4c);
        *(uint32_t *)((long)pvVar10 + 0x50) = 0;
        pvVar11 = malloc(uVar21 + 0x1f0);
        puVar28 = (uint64_t *)0x0;
        if (pvVar11 != (void *)0x0) {
          puVar28 = (uint64_t *)
                    ((uVar21 - ((long)pvVar11 + 0x10U) % uVar21) % uVar21 + (long)pvVar11 + 0x10U);
          puVar28[-2] = 0x1e0;
          puVar28[-1] = pvVar11;
        }
        bVar29 = ((ulong)puVar28 & 1) != 0;
        *(uint64_t **)((long)pvVar10 + 0x58) = puVar28;
        uVar21 = 0x1e0;
        if (bVar29) {
          *(uint8_t *)puVar28 = 0;
          puVar28 = (uint64_t *)((long)puVar28 + 1);
          uVar21 = 0x1df;
        }
        if (((ulong)puVar28 & 2) != 0) {
          *(uint16_t *)puVar28 = 0;
          uVar21 = (ulong)((int)uVar21 - 2);
          puVar28 = (uint64_t *)((long)puVar28 + 2);
        }
        if (((ulong)puVar28 & 4) != 0) {
          *(uint32_t *)puVar28 = 0;
          uVar21 = (ulong)((int)uVar21 - 4);
          puVar28 = (uint64_t *)((long)puVar28 + 4);
        }
        for (uVar17 = uVar21 >> 3; uVar17 != 0; uVar17 = uVar17 - 1) {
          *puVar28 = 0;
          puVar28 = puVar28 + (ulong)bVar30 * -2 + 1;
        }
        if ((uVar21 & 4) != 0) {
          *(uint32_t *)puVar28 = 0;
          puVar28 = (uint64_t *)((long)puVar28 + 4);
        }
        if ((uVar21 & 2) != 0) {
          *(uint16_t *)puVar28 = 0;
          puVar28 = (uint64_t *)((long)puVar28 + 2);
        }
        if (bVar29) {
          *(uint8_t *)puVar28 = 0;
        }
        uVar6 = 0;
        iVar26 = *(int *)((long)pvVar10 + 0x50);
        *(uint16_t *)((long)pvVar10 + 0x48) = 0;
        *(uint16_t *)((long)pvVar10 + 0x4a) = 5;
        *(uint32_t *)((long)pvVar10 + 0x68) = 0xa110ca7e;
        *(uint16_t *)((long)pvVar10 + 0x54) = 5;
      }
      if ((iVar26 == 1) && (*(short *)((long)pvVar10 + 0x4a) != 0)) {
        puVar24 = *(ushort **)((long)pvVar10 + 0x60);
        sVar5 = 1;
        uVar20 = *puVar24;
        while (uVar20 != 0xffff) {
          puVar24 = puVar24 + 1;
          if (sVar5 == *(short *)((long)pvVar10 + 0x4a)) goto LAB_0059667a;
          sVar5 = sVar5 + 1;
          uVar20 = *puVar24;
        }
        *puVar24 = uVar6;
        uVar6 = *(ushort *)((long)pvVar10 + 0x48);
      }
LAB_0059667a:
      uVar21 = 0x60;
      *(ushort *)((long)pvVar10 + 0x48) = uVar6 + 1;
      puVar28 = (uint64_t *)
                (((ulong)(ushort)(uVar6 + 1) * 3 + -3) * 0x20 + *(long *)((long)pvVar10 + 0x58));
      bVar29 = ((ulong)puVar28 & 1) != 0;
      if (bVar29) {
        *(uint8_t *)puVar28 = 0;
        puVar28 = (uint64_t *)((long)puVar28 + 1);
        uVar21 = 0x5f;
      }
      if (((ulong)puVar28 & 2) != 0) {
        *(uint16_t *)puVar28 = 0;
        uVar21 = (ulong)((int)uVar21 - 2);
        puVar28 = (uint64_t *)((long)puVar28 + 2);
      }
      if (((ulong)puVar28 & 4) != 0) {
        *(uint32_t *)puVar28 = 0;
        uVar21 = (ulong)((int)uVar21 - 4);
        puVar28 = (uint64_t *)((long)puVar28 + 4);
      }
      for (uVar17 = uVar21 >> 3; uVar17 != 0; uVar17 = uVar17 - 1) {
        *puVar28 = 0;
        puVar28 = puVar28 + (ulong)bVar30 * -2 + 1;
      }
      if ((uVar21 & 4) != 0) {
        *(uint32_t *)puVar28 = 0;
        puVar28 = (uint64_t *)((long)puVar28 + 4);
      }
      if ((uVar21 & 2) != 0) {
        *(uint16_t *)puVar28 = 0;
        puVar28 = (uint64_t *)((long)puVar28 + 2);
      }
      if (bVar29) {
        *(uint8_t *)puVar28 = 0;
      }
      uVar6 = *(ushort *)((long)pvVar10 + 0x48);
      lVar12 = *(long *)((long)pvVar10 + 0x58);
      uVar21 = (ulong)(*arg2 + 1);
      if (*(ulong *)(*(long *)arg1 + -0x18) < uVar21) {
                    /* try { // try from 00597235 to 00597239 has its CatchHandler @ 0059723a */
        uVar16 = std__throw_out_of_range("basic_string__substr");
                    /* catch() { ... } // from try @ 00596541 with catch @ 0059723a
                       catch() { ... } // from try @ 00597235 with catch @ 0059723a */
        goto LAB_005971f7;
      }
      std__string_string((string *)local_68,arg1,uVar21,(long)((iVar7 - *arg2) + -1));
                    /* try { // try from 00596731 to 0059684c has its CatchHandler @ 005971ea */
      lVar14 = std__string_find((char)local_68,0x20);
      pvVar11 = local_68[0];
      if (lVar14 != -1) {
        iVar26 = *(int *)((long)local_68[0] + -0x18);
        puVar13 = malloc((long)iVar26);
        uVar21 = 0;
        if (0 < iVar26) {
          lVar14 = 0;
          do {
            if (*(char *)((long)pvVar11 + lVar14) != ' ') {
              iVar27 = (int)uVar21;
              uVar21 = (ulong)(iVar27 + 1);
              *(char *)((long)puVar13 + (long)iVar27) = *(char *)((long)pvVar11 + lVar14);
            }
            lVar14 = lVar14 + 1;
          } while ((int)lVar14 < iVar26);
          uVar21 = (ulong)(int)uVar21;
        }
        *(uint8_t *)((long)puVar13 + uVar21) = 0;
        puVar22 = puVar13;
        do {
          uVar3 = *puVar22;
          puVar22 = puVar22 + 1;
        } while ((uVar3 + 0xfefefeff & ~uVar3 & 0x80808080) == 0);
        std__string_assign((char *)local_68,(ulong)puVar13);
        free(puVar13);
      }
      pvVar11 = (void *)((ulong)(uVar6 - 1 & 0xffff) * 0x60 + lVar12);
      if (pvVar11 != local_68[0]) {
        sVar23 = 0x20;
        if (*(ulong *)((long)local_68[0] + -0x18) < 0x21) {
          sVar23 = *(ulong *)((long)local_68[0] + -0x18);
        }
        memcpy(pvVar11,local_68[0],sVar23);
      }
      if (*(ulong *)(*(long *)arg1 + -0x18) < (ulong)(long)(iVar7 + 1)) {
                    /* try { // try from 005971e5 to 005971e9 has its CatchHandler @ 005971ea */
        uVar16 = std__throw_out_of_range("basic_string__substr");
                    /* catch() { ... } // from try @ 00596731 with catch @ 005971ea
                       catch() { ... } // from try @ 005971e5 with catch @ 005971ea */
      }
      else {
        std__string_string((string *)local_58,arg1,(long)(iVar7 + 1),
                            (long)((iVar9 - iVar7) + -1));
        uVar21 = *(ulong *)(local_58[0] + -0x18);
        iVar7 = (int)uVar21;
        if (*(int *)(local_58[0] + -8) < 0) {
          cVar2 = *local_58[0];
        }
        else {
                    /* try { // try from 00596869 to 005968de has its CatchHandler @ 0059721a */
          std__string_M_leak_hard();
          cVar2 = *local_58[0];
          if (-1 < *(int *)(local_58[0] + -8)) {
            std__string_M_leak_hard();
          }
          uVar21 = *(ulong *)(local_58[0] + -0x18);
        }
        local_80 = (uint)(cVar2 == ' ');
        if ((ulong)(long)(int)local_80 <= uVar21) {
          std__string_string((string *)local_48,(string *)local_58,(long)(int)local_80,
                              (long)(int)((iVar7 - (uint)(local_58[0][iVar7 + -1] == ' ')) -
                                         local_80));
                    /* try { // try from 005968e9 to 005968ed has its CatchHandler @ 00597260 */
          std__string_assign((string *)local_58);
          if ((allocator *)(local_48[0] + -0x18) !=
              (allocator *)&std__string_Rep_S_empty_rep_storage) {
            LOCK();
            piVar1 = (int *)(local_48[0] + -8);
            iVar7 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar7 < 1) {
              std__string_Rep_M_destroy((allocator *)(local_48[0] + -0x18));
            }
          }
          if ((char *)((long)pvVar11 + 0x20) != local_58[0]) {
            sVar23 = 0x40;
            if (*(ulong *)(local_58[0] + -0x18) < 0x41) {
              sVar23 = *(ulong *)(local_58[0] + -0x18);
            }
            memcpy((char *)((long)pvVar11 + 0x20),local_58[0],sVar23);
          }
          *arg2 = iVar9;
          if ((allocator *)(local_58[0] + -0x18) !=
              (allocator *)&std__string_Rep_S_empty_rep_storage) {
            LOCK();
            piVar1 = (int *)(local_58[0] + -8);
            iVar7 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar7 < 1) {
              std__string_Rep_M_destroy((allocator *)(local_58[0] + -0x18));
            }
          }
          if ((allocator *)((long)local_68[0] + -0x18) ==
              (allocator *)&std__string_Rep_S_empty_rep_storage) {
            bVar29 = true;
          }
          else {
            LOCK();
            piVar1 = (int *)((long)local_68[0] + -8);
            iVar7 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            bVar29 = true;
            if (iVar7 < 1) {
              std__string_Rep_M_destroy((allocator *)((long)local_68[0] + -0x18));
            }
          }
          goto LAB_0059695d;
        }
                    /* try { // try from 00597215 to 00597219 has its CatchHandler @ 0059721a */
        uVar16 = std__throw_out_of_range("basic_string__substr");
                    /* catch() { ... } // from try @ 00596869 with catch @ 0059721a
                       catch() { ... } // from try @ 00597215 with catch @ 0059721a */
        std__string_string((string *)local_58);
      }
      std__string_string((string *)local_68);
LAB_005971f7:
      std__string_string((string *)local_78);
                    /* WARNING: Subroutine does not return */
      _Unwind_Resume(uVar16);
    }
LAB_0059695d:
    if (*arg2 + 1 == iVar8) {
      *arg2 = *arg2 + 2;
      goto LAB_00596c77;
    }
    if (!bVar29) {
LAB_00596c77:
      if ((allocator *)((long)local_78[0] + -0x18) !=
          (allocator *)&std__string_Rep_S_empty_rep_storage) {
        LOCK();
        piVar1 = (int *)((long)local_78[0] + -8);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 < 1) {
          std__string_Rep_M_destroy((allocator *)((long)local_78[0] + -0x18));
        }
        return 1;
      }
      return 1;
    }
  } while( true );
}

/* ======================================================================
 * PropertiesFile__ParseData  (Ghidra `ParseData` @ 005972d0)
 * Signature: uint8_t __thiscall ParseData(PropertiesFile * self, string * arg1)
 * Class: PropertiesFile
 * Calls: `free`, `malloc`, `std__string_string__00825640`
 * Called by: (none)
 */
/* PropertiesFile__ParseData(std__string_string__00825640&) */

void __thiscall PropertiesFile__ParseData(PropertiesFile *self,string *arg1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  uint *puVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  uint *puVar9;
  char cVar10;
  int local_38 [4];
  
  cVar10 = (char)arg1;
  lVar4 = std__string_find(cVar10,10);
  if (lVar4 != -1) {
    lVar4 = *(long *)arg1;
    iVar3 = *(int *)(lVar4 + -0x18);
    puVar5 = malloc((long)iVar3);
    uVar8 = 0;
    if (0 < iVar3) {
      lVar6 = 0;
      do {
        cVar1 = *(char *)(lVar4 + lVar6);
        if (cVar1 != '\n') {
          iVar7 = (int)uVar8;
          uVar8 = (ulong)(iVar7 + 1);
          *(char *)((long)puVar5 + (long)iVar7) = cVar1;
        }
        lVar6 = lVar6 + 1;
      } while ((int)lVar6 < iVar3);
      uVar8 = (ulong)(int)uVar8;
    }
    *(uint8_t *)((long)puVar5 + uVar8) = 0;
    puVar9 = puVar5;
    do {
      uVar2 = *puVar9;
      puVar9 = puVar9 + 1;
    } while ((uVar2 + 0xfefefeff & ~uVar2 & 0x80808080) == 0);
    std__string_assign((char *)arg1,(ulong)puVar5);
    free(puVar5);
  }
  lVar4 = std__string_find(cVar10,9);
  if (lVar4 != -1) {
    lVar4 = *(long *)arg1;
    iVar3 = *(int *)(lVar4 + -0x18);
    puVar5 = malloc((long)iVar3);
    uVar8 = 0;
    if (0 < iVar3) {
      lVar6 = 0;
      do {
        cVar1 = *(char *)(lVar4 + lVar6);
        if (cVar1 != '\t') {
          iVar7 = (int)uVar8;
          uVar8 = (ulong)(iVar7 + 1);
          *(char *)((long)puVar5 + (long)iVar7) = cVar1;
        }
        lVar6 = lVar6 + 1;
      } while ((int)lVar6 < iVar3);
      uVar8 = (ulong)(int)uVar8;
    }
    *(uint8_t *)((long)puVar5 + uVar8) = 0;
    puVar9 = puVar5;
    do {
      uVar2 = *puVar9;
      puVar9 = puVar9 + 1;
    } while ((uVar2 + 0xfefefeff & ~uVar2 & 0x80808080) == 0);
    std__string_assign((char *)arg1,(ulong)puVar5);
    free(puVar5);
  }
  lVar4 = std__string_find(cVar10,0xd);
  if (lVar4 != -1) {
    lVar4 = *(long *)arg1;
    iVar3 = *(int *)(lVar4 + -0x18);
    puVar5 = malloc((long)iVar3);
    uVar8 = 0;
    if (0 < iVar3) {
      lVar6 = 0;
      do {
        cVar1 = *(char *)(lVar4 + lVar6);
        if (cVar1 != '\r') {
          iVar7 = (int)uVar8;
          uVar8 = (ulong)(iVar7 + 1);
          *(char *)((long)puVar5 + (long)iVar7) = cVar1;
        }
        lVar6 = lVar6 + 1;
      } while ((int)lVar6 < iVar3);
      uVar8 = (ulong)(int)uVar8;
    }
    *(uint8_t *)((long)puVar5 + uVar8) = 0;
    puVar9 = puVar5;
    do {
      uVar2 = *puVar9;
      puVar9 = puVar9 + 1;
    } while ((uVar2 + 0xfefefeff & ~uVar2 & 0x80808080) == 0);
    std__string_assign((char *)arg1,(ulong)puVar5);
    free(puVar5);
  }
  lVar4 = std__string_find(cVar10,0x22);
  if (lVar4 != -1) {
    lVar4 = *(long *)arg1;
    iVar3 = *(int *)(lVar4 + -0x18);
    puVar5 = malloc((long)iVar3);
    uVar8 = 0;
    if (0 < iVar3) {
      lVar6 = 0;
      do {
        cVar10 = *(char *)(lVar4 + lVar6);
        if (cVar10 != '\"') {
          iVar7 = (int)uVar8;
          uVar8 = (ulong)(iVar7 + 1);
          *(char *)((long)puVar5 + (long)iVar7) = cVar10;
        }
        lVar6 = lVar6 + 1;
      } while ((int)lVar6 < iVar3);
      uVar8 = (ulong)(int)uVar8;
    }
    *(uint8_t *)((long)puVar5 + uVar8) = 0;
    puVar9 = puVar5;
    do {
      uVar2 = *puVar9;
      puVar9 = puVar9 + 1;
    } while ((uVar2 + 0xfefefeff & ~uVar2 & 0x80808080) == 0);
    std__string_assign((char *)arg1,(ulong)puVar5);
    free(puVar5);
  }
  local_38[0] = 0;
  do {
    iVar3 = ReadBlock(self,arg1,local_38);
  } while (iVar3 == 1);
  return;
}

/* ======================================================================
 * PropertiesFile__PropertiesFile__005975b0  (Ghidra `PropertiesFile` @ 005975b0)
 * Signature: uint8_t __thiscall PropertiesFile(PropertiesFile * self, char * arg1, uint arg2)
 * Class: PropertiesFile
 * Calls: `CriticalSection__CriticalSection`, `File__File`, `File__File__005b7a70`, `File__Read`, `strlen`
 * Called by: `GLOBAL_sub_I_PropertiesFile`, `LoadControlConfig`, `SMBChapter__LoadChapter`, `SMBChapter__VerifyChapterFileData`, `SMBPalette__SMBPalette__004f3ca0`
 */
/* WARNING: Removing unreachable block (ram,0x00597763) */
/* PropertiesFile__PropertiesFile__005975b0(char const*, unsigned int) */

void __thiscall PropertiesFile__PropertiesFile__005975b0(PropertiesFile *self,char *arg1,uint arg2)

{
  int *piVar1;
  int iVar2;
  char *__s;
  char *local_98;
  uint8_t *local_90;
  uint32_t local_88;
  uint64_t local_80;
  uint32_t local_78;
  uint32_t local_74;
  uint32_t local_70;
  uint32_t local_6c;
  uint32_t local_68;
  uint32_t local_64;
  uint8_t *local_60;
  File local_58 [4];
  uint local_54;
  uint8_t *local_28 [2];
  
  CriticalSection__CriticalSection((CriticalSection *)self);
  *(uint16_t *)(self + 0x2a) = 0;
  *(uint16_t *)(self + 0x28) = 0;
  *(uint16_t *)(self + 0x34) = 1;
  *(uint64_t *)(self + 0x38) = 0;
  *(uint64_t *)(self + 0x40) = 0;
  *(uint32_t *)(self + 0x48) = 0;
  self[0x2c] = (PropertiesFile)0x4;
  *(uint32_t *)(self + 0x30) = 0;
  local_28[0] = &DAT_008184c8 /* R:0.00016803004837129265f */;
  if (arg2 == 0) {
    local_88 = 2;
    local_80 = 0;
    local_78 = 0;
    local_74 = 1;
    local_70 = 1;
    local_6c = 0;
    local_68 = 0;
    local_64 = 0;
    local_60 = &DAT_005c04cf /* R:7.374579797039071e-39f */;
    local_90 = &DAT_005c328c /* R:u32=1811964530 */;
    local_98 = arg1;
                    /* try { // try from 0059766e to 00597672 has its CatchHandler @ 005977cc */
    File__File(local_58,(tagFileCreation *)&local_98);
                    /* try { // try from 0059767f to 005976c0 has its CatchHandler @ 005977ba */
    __s = operator_new__((ulong)(local_54 + 1));
    File__Read(local_58,__s,local_54);
    __s[local_54] = '\0';
    strlen(__s);
    std__string_assign((char *)local_28,(ulong)__s);
    if (__s != (char *)0x0) {
      operator_delete__(__s);
    }
                    /* try { // try from 005976d3 to 005976d7 has its CatchHandler @ 005977cc */
    File__File__005b7a70(local_58);
  }
  else {
    strlen(arg1);
    std__string_assign((char *)local_28,(ulong)arg1);
  }
                    /* try { // try from 005976de to 0059771a has its CatchHandler @ 0059773f */
  ParseData(self,(string *)local_28);
  if ((allocator *)(local_28[0] + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage) {
    LOCK();
    piVar1 = (int *)(local_28[0] + -8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 < 1) {
      std__string_Rep_M_destroy((allocator *)(local_28[0] + -0x18));
    }
  }
  return;
}

/* ======================================================================
 * PropertiesFile__operator_index  (Ghidra `operator[]` @ 005977e0)
 * Signature: uint8_t __thiscall operator[](PropertiesFile * self, int arg1)
 * Class: PropertiesFile
 * Calls: (none)
 * Called by: (none)
 */
/* PropertiesFile__operator_index(int) const */

long __thiscall PropertiesFile__operator_index(PropertiesFile *self,int arg1)

{
  return (ulong)(arg1 & 0xffff) * 0x70 + *(long *)(self + 0x38);
}

/* ======================================================================
 * PropertiesFile__FindPropertyBlock  (Ghidra `FindPropertyBlock` @ 00597800)
 * Signature: uint8_t __thiscall FindPropertyBlock(PropertiesFile * self, PropertyBlock * * arg1, char * arg2, int arg3)
 * Class: PropertiesFile
 * Calls: `strcmp`
 * Called by: `CreateSMBPaletteResources`, `LoadControlConfig`, `SMBChapter__LoadChapter`, `SMBChapter__VerifyChapterFileData`, `SMBPalette__SMBPalette__004f3ca0`
 */
/* PropertiesFile__FindPropertyBlock(PropertyBlock**, char const*, int) */

int __thiscall
PropertiesFile__FindPropertyBlock
          (PropertiesFile *self,PropertyBlock **arg1,char *arg2,int arg3)

{
  ushort uVar1;
  long lVar2;
  int iVar3;
  PropertyBlock *__s1;
  
  iVar3 = -1;
  *arg1 = (PropertyBlock *)0x0;
  uVar1 = *(ushort *)(self + 0x28);
  if (arg3 < (int)(uint)uVar1) {
    lVar2 = *(long *)(self + 0x38);
    while( true ) {
      __s1 = (PropertyBlock *)((ulong)(arg3 & 0xffff) * 0x70 + lVar2);
      iVar3 = strcmp((char *)__s1,arg2);
      if (iVar3 == 0) break;
      arg3 = arg3 + 1;
      if ((int)(uint)uVar1 <= arg3) {
        return -1;
      }
    }
    iVar3 = arg3 + 1;
    *arg1 = __s1;
  }
  return iVar3;
}

/* ======================================================================
 * PropertiesFile__FindPropertyVariable  (Ghidra `FindPropertyVariable` @ 005978a0)
 * Signature: uint8_t __thiscall FindPropertyVariable(PropertiesFile * self, PropertyVariable * * arg1, PropertyBlock * arg2, char * arg3)
 * Class: PropertiesFile
 * Calls: `strcmp`
 * Called by: `CreateSMBPaletteResources`, `LoadBossDataFromBlock`, `LoadControlConfig`, `LoadLevelDataFromBlock`, `SMBChapter__LoadChapter`, `SMBChapter__VerifyChapterFileData`, `SMBPalette__SMBPalette__004f3ca0`
 */
/* PropertiesFile__FindPropertyVariable(PropertyBlock__PropertyVariable, PropertyBlock*, char
   const*) */

PropertyVariable * __thiscall
PropertiesFile__FindPropertyVariable
          (PropertiesFile *self,PropertyVariable **arg1,PropertyBlock *arg2,char *arg3)

{
  ushort uVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  PropertyVariable *__s1;
  
  *arg1 = (PropertyVariable *)0x0;
  if ((arg2 != (PropertyBlock *)0x0) && (uVar1 = *(ushort *)(arg2 + 0x48), uVar1 != 0)) {
    lVar2 = *(long *)(arg2 + 0x58);
    uVar4 = 0;
    do {
      __s1 = (PropertyVariable *)((ulong)(uVar4 & 0xffff) * 0x60 + lVar2);
      iVar3 = strcmp((char *)__s1,arg3);
      if (iVar3 == 0) {
        *arg1 = __s1;
        return __s1;
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < (int)(uint)uVar1);
  }
  return (PropertyVariable *)0x0;
}

/* ======================================================================
 * PropertiesFile__GetNumPropertyBlocksByName  (Ghidra `GetNumPropertyBlocksByName` @ 00597920)
 * Signature: uint8_t __thiscall GetNumPropertyBlocksByName(PropertiesFile * self, char * arg1)
 * Class: PropertiesFile
 * Calls: `strcmp`
 * Called by: `SMBChapter__LoadChapter`, `SMBChapter__VerifyChapterFileData`, `SMBPalette__SMBPalette__004f3ca0`
 */
/* PropertiesFile__GetNumPropertyBlocksByName(char const*) */

int __thiscall PropertiesFile__GetNumPropertyBlocksByName(PropertiesFile *self,char *arg1)

{
  ushort uVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  int iVar6;
  
  iVar6 = 0;
  uVar1 = *(ushort *)(self + 0x28);
  if (uVar1 != 0) {
    lVar2 = *(long *)(self + 0x38);
    uVar5 = 0;
    do {
      iVar3 = strcmp((char *)((uVar5 & 0xffff) * 0x70 + lVar2),arg1);
      if (iVar3 == 0) {
        iVar6 = iVar6 + 1;
      }
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulong)uVar4;
    } while ((int)uVar4 < (int)(uint)uVar1);
  }
  return iVar6;
}
