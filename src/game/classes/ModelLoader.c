/* src/game/classes/ModelLoader.c — 2 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "ModelLoader.h"

/* ======================================================================
 * ModelLoader__ModelLoader  (Ghidra `~ModelLoader` @ 00594120)
 * Signature: uint8_t __thiscall ~ModelLoader(ModelLoader * self)
 * Class: ModelLoader
 * Calls: `BaseResource__Release`, `CriticalSection__CriticalSection__005b71d0`, `free`
 * Called by: `Create__005956a0`
 */
/* ModelLoader__ModelLoader() */

void __thiscall ModelLoader__ModelLoader(ModelLoader *self)

{
  if (*(long *)(self + 0x10) != 0) {
    operator_delete__((void *)(*(long *)(self + 0x10) + -8));
  }
  if (*(long *)(self + 0x18) != 0) {
    operator_delete__((void *)(*(long *)(self + 0x18) + -8));
  }
  if (*(long *)(self + 8) != 0) {
    operator_delete__((void *)(*(long *)(self + 8) + -8));
  }
  if (*(void **)self != (void *)0x0) {
    operator_delete__(*(void **)self);
  }
  if (*(int *)(self + 0x78) == -0x5eef3582) {
    *(uint32_t *)(self + 0x78) = 0;
    free(*(void **)(*(long *)(self + 0x68) + -8));
    if (*(int *)(self + 0x60) == 1) {
      free(*(void **)(*(long *)(self + 0x70) + -8));
    }
    *(uint32_t *)(self + 0x78) = 0;
    *(uint16_t *)(self + 0x5a) = 0;
    *(uint16_t *)(self + 0x58) = 0;
    *(uint64_t *)(self + 0x68) = 0;
    *(uint64_t *)(self + 0x70) = 0;
  }
  if (*(BaseResource **)(self + 0x80) != (BaseResource *)0x0) {
                    /* try { // try from 00594182 to 00594199 has its CatchHandler @ 00594277 */
    BaseResource__Release(*(BaseResource **)(self + 0x80),0);
  }
  if (*(BaseResource **)(self + 0x88) != (BaseResource *)0x0) {
    BaseResource__Release(*(BaseResource **)(self + 0x88),0);
  }
  if (*(int *)(self + 0x78) != -0x5eef3582) {
    CriticalSection__CriticalSection__005b71d0((CriticalSection *)(self + 0x30));
    return;
  }
  *(uint32_t *)(self + 0x78) = 0;
  free(*(void **)(*(long *)(self + 0x68) + -8));
  if (*(int *)(self + 0x60) == 1) {
    free(*(void **)(*(long *)(self + 0x70) + -8));
  }
  *(uint32_t *)(self + 0x78) = 0;
  *(uint16_t *)(self + 0x5a) = 0;
  *(uint16_t *)(self + 0x58) = 0;
  *(uint64_t *)(self + 0x68) = 0;
  *(uint64_t *)(self + 0x70) = 0;
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)(self + 0x30));
  return;
}

/* ======================================================================
 * ModelLoader__ModelLoader__005942a0  (Ghidra `ModelLoader` @ 005942a0)
 * Signature: uint8_t __thiscall ModelLoader(ModelLoader * self, tagModelCreation * arg1)
 * Class: ModelLoader
 * Calls: `BaseResource__Release`, `CriticalSection__CriticalSection`, `ExplodeString`, `ExplodeStringData__ExplodeStringData`, `ExplodeStringData__operator_index`, `File__EndOfFile`, `File__File`, `File__File__005b7a70`, `File__Reset`, `StringToFloat` (+7 more)
 * Called by: `Create__005956a0`
 */
/* ModelLoader__ModelLoader__005942a0(tagModelCreation const*) */

void __thiscall ModelLoader__ModelLoader__005942a0(ModelLoader *self,tagModelCreation *arg1)

{
  int *piVar1;
  long *plVar2;
  float fVar3;
  bool bVar4;
  ushort uVar5;
  short sVar6;
  ushort uVar7;
  int iVar8;
  uint uVar9;
  void *pvVar10;
  void *pvVar11;
  char *pcVar12;
  ulong *puVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  ulong *puVar17;
  void *pvVar18;
  uint64_t uVar19;
  long *plVar20;
  BaseResource *this_00;
  VertexStream *pVVar21;
  ulong *puVar22;
  uint32_t *puVar23;
  ulong *puVar24;
  float *pfVar25;
  uint16_t uVar26;
  uint16_t uVar27;
  uint uVar28;
  int iVar29;
  int iVar30;
  size_t __n;
  ulong uVar31;
  uint8_t (*pauVar32) [16];
  ushort *puVar33;
  uint32_t *puVar34;
  uint uVar35;
  ulong uVar36;
  uint64_t *puVar37;
  uint64_t *puVar38;
  long lVar39;
  uint16_t uVar40;
  uint uVar41;
  int *piVar42;
  long lVar43;
  int *piVar44;
  bool bVar45;
  byte bVar46;
  float fVar47;
  uint local_1d0;
  uint local_1cc;
  uint16_t local_1c0;
  void *local_1b0;
  uint64_t local_198;
  uint8_t *local_190;
  uint32_t local_188;
  uint64_t local_180;
  uint32_t local_178;
  uint32_t local_174;
  uint32_t local_170;
  uint32_t local_16c;
  uint32_t local_168;
  uint32_t local_164;
  uint8_t *local_160;
  long local_158;
  uint32_t local_150;
  uint8_t local_14c [4];
  long local_148;
  uint32_t local_140;
  File local_13c [84];
  long local_e8;
  uint16_t local_e0;
  uint32_t local_dc;
  void *local_d8;
  uint32_t local_d0;
  uint32_t local_cc;
  uint32_t local_c8;
  ulong local_b8;
  uint64_t local_b0;
  uint64_t local_a8;
  long *local_98;
  ulong local_90;
  uint8_t local_88;
  byte bStack_87;
  uint16_t uStack_86;
  uint32_t uStack_84;
  uint32_t local_80;
  uint8_t local_7c;
  uint8_t local_78;
  byte bStack_77;
  uint16_t uStack_76;
  uint32_t uStack_74;
  uint32_t local_70;
  uint8_t local_6c;
  uint8_t local_68;
  uint8_t uStack_67;
  uint16_t uStack_66;
  uint32_t uStack_64;
  uint32_t local_60;
  uint8_t local_5c;
  uint8_t local_58;
  undefined7 uStack_57;
  uint32_t local_50;
  uint8_t local_4c;
  uint64_t local_40 [2];
  
  bVar46 = 0;
  *(uint64_t *)self = 0;
  *(uint64_t *)(self + 8) = 0;
  *(uint64_t *)(self + 0x10) = 0;
  *(uint64_t *)(self + 0x18) = 0;
  CriticalSection__CriticalSection((CriticalSection *)(self + 0x30));
  *(uint16_t *)(self + 0x5a) = 0;
  *(uint16_t *)(self + 0x58) = 0;
  *(uint16_t *)(self + 100) = 1;
  *(uint64_t *)(self + 0x68) = 0;
  *(uint64_t *)(self + 0x70) = 0;
  *(uint32_t *)(self + 0x78) = 0;
  self[0x5c] = (ModelLoader)0x4;
  *(uint32_t *)(self + 0x60) = 0;
  *(uint64_t *)(self + 0x80) = 0;
  *(uint64_t *)(self + 0x88) = 0;
  lVar39 = *(long *)(arg1 + 8);
  if (lVar39 == 0) {
    local_198 = *(uint64_t *)arg1;
    *(uint32_t *)(self + 0x60) = 0;
LAB_005945a2:
    local_160 = &DAT_005c04cf /* R:7.374579797039071e-39f */;
    local_164 = 0;
    local_168 = 0;
    local_16c = 0;
    local_170 = 1;
    local_174 = 1;
    local_178 = 0;
    local_180 = 0;
    local_188 = 2;
    local_190 = &DAT_005db9f0 /* R:u32=1818165362 */;
    uVar31 = (ulong)(byte)self[0x5c];
    pvVar18 = malloc(uVar31 + 0x880);
    puVar37 = (uint64_t *)0x0;
    if (pvVar18 != (void *)0x0) {
      puVar37 = (uint64_t *)
                ((long)pvVar18 + 0x10U + (uVar31 - ((long)pvVar18 + 0x10U) % uVar31) % uVar31);
      puVar37[-2] = 0x870;
      puVar37[-1] = pvVar18;
    }
    bVar45 = ((ulong)puVar37 & 1) != 0;
    *(uint64_t **)(self + 0x68) = puVar37;
    uVar31 = 0x870;
    if (bVar45) {
      *(uint8_t *)puVar37 = 0;
      uVar31 = 0x86f;
      puVar37 = (uint64_t *)((long)puVar37 + 1);
    }
    if (((ulong)puVar37 & 2) != 0) {
      *(uint16_t *)puVar37 = 0;
      uVar31 = (ulong)((int)uVar31 - 2);
      puVar37 = (uint64_t *)((long)puVar37 + 2);
    }
    if (((ulong)puVar37 & 4) != 0) {
      *(uint32_t *)puVar37 = 0;
      uVar31 = (ulong)((int)uVar31 - 4);
      puVar37 = (uint64_t *)((long)puVar37 + 4);
    }
    for (uVar14 = uVar31 >> 3; uVar14 != 0; uVar14 = uVar14 - 1) {
      *puVar37 = 0;
      puVar37 = puVar37 + (ulong)bVar46 * -2 + 1;
    }
    if ((uVar31 & 4) != 0) {
      *(uint32_t *)puVar37 = 0;
      puVar37 = (uint64_t *)((long)puVar37 + 4);
    }
    if ((uVar31 & 2) != 0) {
      *(uint16_t *)puVar37 = 0;
      puVar37 = (uint64_t *)((long)puVar37 + 2);
    }
    if (bVar45) {
      *(uint8_t *)puVar37 = 0;
    }
    *(uint16_t *)(self + 0x58) = 0;
    *(uint16_t *)(self + 0x5a) = 0x1e;
    *(uint32_t *)(self + 0x78) = 0xa110ca7e;
    *(uint16_t *)(self + 100) = 0x1e;
  }
  else {
    *(uint32_t *)(lVar39 + 0x14) = 0;
    *(uint32_t *)(lVar39 + 0x18) = 0;
    *(uint32_t *)(lVar39 + 0x1c) = 0;
    *(uint32_t *)(lVar39 + 0x20) = 0;
    local_198 = *(uint64_t *)arg1;
    local_188 = 2;
    local_180 = 0;
    local_178 = 0;
    local_174 = 1;
    local_170 = 1;
    local_16c = 0;
    local_168 = 0;
    local_164 = 0;
    local_160 = &DAT_005c04cf /* R:7.374579797039071e-39f */;
    local_190 = &DAT_005db9f0 /* R:u32=1818165362 */;
    *(uint32_t *)(self + 0x60) = 0;
    if (*(int *)(self + 0x78) != -0x5eef3582) goto LAB_005945a2;
    if (*(ushort *)(self + 0x5a) < 0x1e) {
      uVar31 = (ulong)(byte)self[0x5c];
      *(uint16_t *)(self + 0x5a) = 0x1e;
      pvVar18 = *(void **)(self + 0x68);
      pvVar10 = malloc(uVar31 + 0x880);
      if (pvVar10 == (void *)0x0) {
        *(uint64_t *)(self + 0x68) = 0;
      }
      else {
        pvVar11 = (void *)((long)pvVar10 + 0x10U +
                          (uVar31 - ((long)pvVar10 + 0x10U) % uVar31) % uVar31);
        *(uint64_t *)((long)pvVar11 + -0x10) = 0x870;
        *(void **)((long)pvVar11 + -8) = pvVar10;
        if (pvVar18 != (void *)0x0) {
          __n = 0x870;
          if (*(ulong *)((long)pvVar18 + -0x10) < 0x871) {
            __n = *(ulong *)((long)pvVar18 + -0x10);
          }
          memcpy(pvVar11,pvVar18,__n);
          free(*(void **)((long)pvVar18 + -8));
        }
        *(void **)(self + 0x68) = pvVar11;
        if (*(int *)(self + 0x60) == 1) {
          uVar7 = *(ushort *)(self + 0x5a);
          uVar14 = (ulong)(byte)self[0x5c];
          pvVar18 = (void *)0x0;
          pvVar10 = *(void **)(self + 0x70);
          uVar31 = (ulong)uVar7 * 2;
          pvVar11 = malloc(uVar14 + 0x10 + uVar31);
          if (pvVar11 != (void *)0x0) {
            pvVar18 = (void *)((long)pvVar11 + 0x10U +
                              (uVar14 - ((long)pvVar11 + 0x10U) % uVar14) % uVar14);
            *(ulong *)((long)pvVar18 + -0x10) = uVar31;
            *(void **)((long)pvVar18 + -8) = pvVar11;
            if (pvVar10 != (void *)0x0) {
              uVar14 = *(ulong *)((long)pvVar10 + -0x10);
              if (uVar31 <= *(ulong *)((long)pvVar10 + -0x10)) {
                uVar14 = uVar31;
              }
              memcpy(pvVar18,pvVar10,uVar14);
              free(*(void **)((long)pvVar10 + -8));
            }
            uVar7 = *(ushort *)(self + 0x5a);
          }
          uVar5 = *(ushort *)(self + 0x58);
          *(void **)(self + 0x70) = pvVar18;
          if (uVar5 < uVar7) {
            while( true ) {
              uVar31 = (ulong)uVar5;
              uVar5 = uVar5 + 1;
              *(uint16_t *)((long)pvVar18 + uVar31 * 2) = 0xffff;
              if (uVar7 <= uVar5) break;
              pvVar18 = *(void **)(self + 0x70);
            }
          }
        }
      }
    }
  }
                    /* try { // try from 00594655 to 00594659 has its CatchHandler @ 0059564d */
  File__File(local_13c + 0x24,(tagFileCreation *)&local_198);
  *(uint16_t *)(self + 0x28) = 0;
  *(uint16_t *)(self + 0x26) = 0;
  *(uint16_t *)(self + 0x24) = 0;
  *(uint16_t *)(self + 0x22) = 0;
  *(uint16_t *)(self + 0x20) = 0;
  do {
    pcVar12 = (char *)File__ReadLn((char *)(local_13c + 0x24),0x823f40);
    if (*pcVar12 != '#') {
      if (File__strFileString == 'v') {
        if (DAT_00823f41 /* R:9.40407027357176e-38f */ == ' ') {
          *(short *)(self + 0x20) = *(short *)(self + 0x20) + 1;
        }
        else if (DAT_00823f41 /* R:9.40407027357176e-38f */ == 'n') {
          *(short *)(self + 0x24) = *(short *)(self + 0x24) + 1;
        }
        else if (DAT_00823f41 /* R:9.40407027357176e-38f */ == 't') {
          *(short *)(self + 0x26) = *(short *)(self + 0x26) + 1;
        }
      }
      else if (File__strFileString == 'f') {
        if (*(int *)(self + 0x78) == -0x5eef3582) {
          uVar7 = *(ushort *)(self + 0x58);
          if (*(ushort *)(self + 0x5a) <= uVar7) {
            uVar7 = *(ushort *)(self + 0x5a) + *(short *)(self + 100);
            uVar31 = (ulong)(byte)self[0x5c];
            pvVar18 = (void *)0x0;
            pvVar10 = *(void **)(self + 0x68);
            *(ushort *)(self + 0x5a) = uVar7;
            uVar14 = (ulong)uVar7 * 0x48;
            pvVar11 = malloc(uVar31 + 0x10 + uVar14);
            if (pvVar11 != (void *)0x0) {
              pvVar18 = (void *)((long)pvVar11 + 0x10U +
                                (uVar31 - ((long)pvVar11 + 0x10U) % uVar31) % uVar31);
              *(ulong *)((long)pvVar18 + -0x10) = uVar14;
              *(void **)((long)pvVar18 + -8) = pvVar11;
              if (pvVar10 != (void *)0x0) {
                uVar31 = *(ulong *)((long)pvVar10 + -0x10);
                if (uVar14 <= *(ulong *)((long)pvVar10 + -0x10)) {
                  uVar31 = uVar14;
                }
                memcpy(pvVar18,pvVar10,uVar31);
                free(*(void **)((long)pvVar10 + -8));
              }
            }
            pvVar10 = *(void **)(self + 0x70);
            *(void **)(self + 0x68) = pvVar18;
            if (pvVar10 != (void *)0x0) {
              uVar5 = *(ushort *)(self + 0x5a);
              uVar14 = (ulong)(byte)self[0x5c];
              pvVar18 = (void *)0x0;
              uVar31 = (ulong)uVar5 * 2;
              pvVar11 = malloc(uVar14 + 0x10 + uVar31);
              if (pvVar11 != (void *)0x0) {
                pvVar18 = (void *)((long)pvVar11 + 0x10U +
                                  (uVar14 - ((long)pvVar11 + 0x10U) % uVar14) % uVar14);
                *(void **)((long)pvVar18 + -8) = pvVar11;
                *(ulong *)((long)pvVar18 + -0x10) = uVar31;
                uVar14 = *(ulong *)((long)pvVar10 + -0x10);
                if (uVar31 <= *(ulong *)((long)pvVar10 + -0x10)) {
                  uVar14 = uVar31;
                }
                memcpy(pvVar18,pvVar10,uVar14);
                free(*(void **)((long)pvVar10 + -8));
                uVar5 = *(ushort *)(self + 0x5a);
              }
              uVar7 = *(ushort *)(self + 0x58);
              *(void **)(self + 0x70) = pvVar18;
              if (uVar5 <= uVar7) goto LAB_00594700;
              while( true ) {
                uVar31 = (ulong)uVar7;
                uVar7 = uVar7 + 1;
                *(uint16_t *)((long)pvVar18 + uVar31 * 2) = 0xffff;
                if (uVar5 <= uVar7) break;
                pvVar18 = *(void **)(self + 0x70);
              }
            }
            uVar7 = *(ushort *)(self + 0x58);
          }
LAB_00594700:
          iVar8 = *(int *)(self + 0x60);
        }
        else {
          uVar31 = (ulong)(byte)self[0x5c];
          *(uint32_t *)(self + 0x60) = 0;
          pvVar18 = malloc(uVar31 + 0x178);
          puVar37 = (uint64_t *)0x0;
          if (pvVar18 != (void *)0x0) {
            puVar37 = (uint64_t *)
                      ((long)pvVar18 + 0x10U + (uVar31 - ((long)pvVar18 + 0x10U) % uVar31) % uVar31)
            ;
            puVar37[-2] = 0x168;
            puVar37[-1] = pvVar18;
          }
          bVar45 = ((ulong)puVar37 & 1) != 0;
          *(uint64_t **)(self + 0x68) = puVar37;
          uVar31 = 0x168;
          if (bVar45) {
            *(uint8_t *)puVar37 = 0;
            puVar37 = (uint64_t *)((long)puVar37 + 1);
            uVar31 = 0x167;
          }
          if (((ulong)puVar37 & 2) != 0) {
            *(uint16_t *)puVar37 = 0;
            uVar31 = (ulong)((int)uVar31 - 2);
            puVar37 = (uint64_t *)((long)puVar37 + 2);
          }
          if (((ulong)puVar37 & 4) != 0) {
            *(uint32_t *)puVar37 = 0;
            uVar31 = (ulong)((int)uVar31 - 4);
            puVar37 = (uint64_t *)((long)puVar37 + 4);
          }
          for (uVar14 = uVar31 >> 3; uVar14 != 0; uVar14 = uVar14 - 1) {
            *puVar37 = 0;
            puVar37 = puVar37 + (ulong)bVar46 * -2 + 1;
          }
          if ((uVar31 & 4) != 0) {
            *(uint32_t *)puVar37 = 0;
            puVar37 = (uint64_t *)((long)puVar37 + 4);
          }
          if ((uVar31 & 2) != 0) {
            *(uint16_t *)puVar37 = 0;
            puVar37 = (uint64_t *)((long)puVar37 + 2);
          }
          if (bVar45) {
            *(uint8_t *)puVar37 = 0;
          }
          uVar7 = 0;
          iVar8 = *(int *)(self + 0x60);
          *(uint16_t *)(self + 0x58) = 0;
          *(uint16_t *)(self + 0x5a) = 5;
          *(uint32_t *)(self + 0x78) = 0xa110ca7e;
          *(uint16_t *)(self + 100) = 5;
        }
        if ((iVar8 == 1) && (*(short *)(self + 0x5a) != 0)) {
          puVar33 = *(ushort **)(self + 0x70);
          sVar6 = 1;
          uVar5 = *puVar33;
          while (uVar5 != 0xffff) {
            puVar33 = puVar33 + 1;
            if (sVar6 == *(short *)(self + 0x5a)) goto LAB_0059470a;
            sVar6 = sVar6 + 1;
            uVar5 = *puVar33;
          }
          *puVar33 = uVar7;
          uVar7 = *(ushort *)(self + 0x58);
        }
LAB_0059470a:
        uVar31 = 0x48;
        bVar45 = false;
        iVar8 = 0x48;
        *(ushort *)(self + 0x58) = uVar7 + 1;
        puVar37 = (uint64_t *)(*(long *)(self + 0x68) + ((ulong)(ushort)(uVar7 + 1) * 9 + -9) * 8)
        ;
        if (((ulong)puVar37 & 1) == 0) {
          puVar38 = puVar37;
          bVar4 = false;
          if (((ulong)puVar37 & 2) == 0) goto LAB_0059473b;
LAB_005955b1:
          bVar45 = bVar4;
          *(uint16_t *)puVar38 = 0;
          puVar38 = (uint64_t *)((long)puVar38 + 2);
          uVar41 = iVar8 - 2;
          uVar31 = (ulong)uVar41;
        }
        else {
          puVar38 = (uint64_t *)((long)puVar37 + 1);
          *(uint8_t *)puVar37 = 0;
          uVar31 = 0x47;
          bVar45 = true;
          iVar8 = 0x47;
          bVar4 = true;
          if (((ulong)puVar38 & 2) != 0) goto LAB_005955b1;
LAB_0059473b:
          uVar41 = (uint)uVar31;
        }
        if (((ulong)puVar38 & 4) != 0) {
          *(uint32_t *)puVar38 = 0;
          uVar31 = (ulong)(uVar41 - 4);
          puVar38 = (uint64_t *)((long)puVar38 + 4);
        }
        for (uVar14 = uVar31 >> 3; uVar14 != 0; uVar14 = uVar14 - 1) {
          *puVar38 = 0;
          puVar38 = puVar38 + (ulong)bVar46 * -2 + 1;
        }
        if ((uVar31 & 4) != 0) {
          *(uint32_t *)puVar38 = 0;
          puVar38 = (uint64_t *)((long)puVar38 + 4);
        }
        if ((uVar31 & 2) != 0) {
          *(uint16_t *)puVar38 = 0;
          puVar38 = (uint64_t *)((long)puVar38 + 2);
        }
        if (bVar45) {
          *(uint8_t *)puVar38 = 0;
        }
        piVar1 = (int *)(*(long *)(self + 0x68) + ((ulong)*(ushort *)(self + 0x58) * 9 + -9) * 8);
        piVar1[0] = -1;
        piVar1[1] = -1;
        piVar1[2] = -1;
        piVar1[3] = -1;
        piVar1[6] = -1;
        piVar1[7] = -1;
        piVar1[8] = -1;
        piVar1[9] = -1;
        piVar1[0xc] = -1;
        piVar1[0xd] = -1;
        piVar1[0xe] = -1;
        piVar1[0xf] = -1;
        piVar1[4] = 0;
        piVar1[5] = 0;
        piVar1[10] = 0;
        piVar1[0xb] = 0;
        piVar1[0x10] = 0;
        piVar1[0x11] = 0;
        local_b8 = local_b8 & 0xffffffff00000000;
        local_b0 = 0;
                    /* try { // try from 005947f6 to 005947fa has its CatchHandler @ 00595652 */
        ExplodeString(0x20,&DAT_00823f42 /* R:1.8367099231598242e-40f */,&local_b8);
        uVar31 = 0;
        piVar44 = piVar1;
        do {
          uVar41 = (uint)uVar31;
          local_98 = (long *)((ulong)local_98 & 0xffffffff00000000);
          local_90 = 0;
                    /* try { // try from 00594823 to 0059487e has its CatchHandler @ 0059566c */
          uVar19 = ExplodeStringData__operator_index((ExplodeStringData *)&local_b8,uVar41);
          iVar8 = ExplodeString(0x2f,uVar19,&local_98);
          if (iVar8 == 1) {
            if ((uint)local_98 != 0) {
              uVar35 = 0;
              piVar42 = piVar1 + uVar31 * 6;
              do {
                uVar19 = ExplodeStringData__operator_index((ExplodeStringData *)&local_98,uVar35);
                iVar8 = StringToInt(uVar19);
                uVar35 = uVar35 + 1;
                *piVar42 = iVar8 + -1;
                piVar42 = piVar42 + 1;
              } while (uVar35 < (uint)local_98);
            }
          }
          else {
                    /* try { // try from 005948d7 to 005948e3 has its CatchHandler @ 0059566c */
            uVar19 = ExplodeStringData__operator_index((ExplodeStringData *)&local_b8,uVar41);
            iVar8 = StringToInt(uVar19);
            *piVar44 = iVar8 + -1;
          }
                    /* try { // try from 0059489e to 005948a2 has its CatchHandler @ 00595652 */
          ExplodeStringData__ExplodeStringData((ExplodeStringData *)&local_98);
          uVar31 = (ulong)(uVar41 + 1);
          piVar44 = piVar44 + 6;
        } while (uVar41 + 1 != 3);
        *(short *)(self + 0x28) = *(short *)(self + 0x28) + 3;
                    /* try { // try from 005948c2 to 005948c6 has its CatchHandler @ 00595639 */
        ExplodeStringData__ExplodeStringData((ExplodeStringData *)&local_b8);
      }
    }
                    /* try { // try from 0059468c to 005946af has its CatchHandler @ 00595639 */
    iVar8 = File__EndOfFile();
  } while (iVar8 == 0);
                    /* try { // try from 005948f4 to 00594a76 has its CatchHandler @ 00595639 */
  File__Reset(local_13c + 0x24);
  uVar31 = (ulong)*(ushort *)(self + 0x20);
  puVar13 = operator_new__(uVar31 * 8 + 8);
  lVar39 = uVar31 - 1;
  *puVar13 = uVar31;
  if (lVar39 != -1) {
    puVar24 = puVar13 + 1;
    uVar14 = -(((long)puVar24 << 0x3c) >> 0x3f);
    if (uVar31 <= uVar14) {
      uVar14 = uVar31;
    }
    puVar17 = puVar24;
    if (uVar14 != 0) {
      lVar39 = uVar31 - 2;
      puVar13[1] = 0;
      puVar17 = puVar13 + 2;
      if (uVar31 == uVar14) goto LAB_005949b9;
    }
    uVar36 = uVar31 - uVar14 >> 1;
    if (uVar36 != 0) {
      pauVar32 = (uint8_t (*) [16])(puVar24 + uVar14);
      uVar15 = 0;
      do {
        uVar15 = uVar15 + 1;
        *pauVar32 = (uint8_t  [16])0x0;
        pauVar32 = pauVar32 + 1;
      } while (uVar15 < uVar36);
      lVar39 = lVar39 + uVar36 * -2;
      puVar17 = puVar17 + uVar36 * 2;
      if (uVar31 - uVar14 == uVar36 * 2) goto LAB_005949b9;
    }
    lVar16 = 0;
    do {
      puVar17[lVar16] = 0;
      lVar16 = lVar16 + 1;
    } while (lVar16 != lVar39 + 1);
  }
LAB_005949b9:
  uVar7 = *(ushort *)(self + 0x20);
  uVar31 = (ulong)uVar7;
  puVar17 = operator_new__(uVar31 * 0x10 + 8);
  lVar39 = uVar31 - 1;
  *puVar17 = uVar31;
  puVar24 = puVar17 + 1;
  if (lVar39 != -1) {
    puVar22 = puVar24;
    if ((uVar7 == 0) || (uVar31 == 0)) {
      do {
        lVar39 = lVar39 + -1;
        *puVar22 = 0;
        puVar22[1] = 0;
        puVar22 = puVar22 + 2;
      } while (lVar39 != -1);
    }
    else {
      uVar14 = 0;
      do {
        uVar36 = uVar14 + 1;
        puVar24[uVar14 * 2] = 0;
        puVar17[uVar14 * 2 + 2] = 0;
        uVar14 = uVar36;
      } while (uVar36 < uVar31);
    }
  }
  *(ulong **)(self + 8) = puVar24;
  pvVar18 = operator_new__((ulong)*(ushort *)(self + 0x28) << 2);
  uVar7 = *(ushort *)(self + 0x26);
  *(void **)self = pvVar18;
  if (uVar7 != 0) {
    puVar24 = operator_new__((ulong)uVar7 * 8 + 8);
    *puVar24 = (ulong)uVar7;
    *(ulong **)(self + 0x10) = puVar24 + 1;
  }
  if (*(ushort *)(self + 0x24) != 0) {
    uVar31 = (ulong)*(ushort *)(self + 0x24);
    puVar24 = operator_new__(uVar31 * 0x10 + 8);
    *puVar24 = uVar31;
    if (uVar31 != 0) {
      uVar14 = 0;
      do {
        uVar36 = uVar14 + 1;
        (puVar24 + 1)[uVar14 * 2] = 0;
        puVar24[uVar14 * 2 + 2] = 0;
        uVar14 = uVar36;
      } while (uVar36 < uVar31);
    }
    *(ulong **)(self + 0x18) = puVar24 + 1;
  }
  uVar14 = 0;
  uVar41 = 0;
  uVar31 = 0;
  do {
    pcVar12 = (char *)File__ReadLn((char *)(local_13c + 0x24),0x823f40);
    uVar36 = uVar31;
    if (*pcVar12 == 'v') {
      if (DAT_00823f41 /* R:9.40407027357176e-38f */ == ' ') {
        uVar35 = 3;
        uVar36 = (ulong)((int)uVar31 + 1);
        pfVar25 = (float *)(uVar31 * 0x10 + *(long *)(self + 8));
      }
      else if (DAT_00823f41 /* R:9.40407027357176e-38f */ == 'n') {
        uVar35 = 3;
        pfVar25 = (float *)(uVar14 * 0x10 + *(long *)(self + 0x18));
        uVar14 = (ulong)((int)uVar14 + 1);
      }
      else {
        pfVar25 = (float *)0x0;
        uVar35 = 0;
        if (DAT_00823f41 /* R:9.40407027357176e-38f */ == 't') {
          pfVar25 = Vector2__operator_cast_to_float
                              ((Vector2 *)(*(long *)(self + 0x10) + (ulong)uVar41 * 8));
          uVar41 = uVar41 + 1;
          uVar35 = 2;
        }
      }
      local_98 = (long *)((ulong)local_98 & 0xffffffff00000000);
      local_90 = 0;
                    /* try { // try from 00594acd to 00594b06 has its CatchHandler @ 0059563b */
      ExplodeString(0x20,&File__strFileString,&local_98);
      uVar28 = (uint)local_98;
      if (uVar35 <= (uint)local_98) {
        uVar28 = uVar35;
      }
      if (uVar28 != 0) {
        uVar35 = 1;
        do {
          uVar19 = ExplodeStringData__operator_index((ExplodeStringData *)&local_98,uVar35);
          fVar47 = (float)StringToFloat(uVar19);
          uVar9 = uVar35 - 1;
          uVar35 = uVar35 + 1;
          pfVar25[uVar9] = fVar47;
        } while (uVar35 <= uVar28);
      }
      if (DAT_00823f41 /* R:9.40407027357176e-38f */ == 't') {
        uVar35 = (int)(pfVar25[1] - DAT_005be894 /* R:1.0f */) >> 0x1f;
        pfVar25[1] = (float)(int)(((int)(pfVar25[1] - DAT_005be894 /* R:1.0f */) ^ uVar35) - uVar35);
      }
      else {
        lVar39 = *(long *)(arg1 + 8);
        if ((lVar39 != 0) && (DAT_00823f41 /* R:9.40407027357176e-38f */ == ' ')) {
          fVar47 = (float)((uint)*pfVar25 & DAT_005be880 /* R:u32=2147483647 */);
          if ((float)((uint)*pfVar25 & DAT_005be880 /* R:u32=2147483647 */) <= *(float *)(lVar39 + 0x14)) {
            fVar47 = *(float *)(lVar39 + 0x14);
          }
          *(float *)(lVar39 + 0x14) = fVar47;
          fVar47 = *(float *)(*(long *)(arg1 + 8) + 0x18);
          fVar3 = (float)((uint)pfVar25[1] & DAT_005be880 /* R:u32=2147483647 */);
          if ((float)((uint)pfVar25[1] & DAT_005be880 /* R:u32=2147483647 */) <= fVar47) {
            fVar3 = fVar47;
          }
          *(float *)(*(long *)(arg1 + 8) + 0x18) = fVar3;
          fVar47 = *(float *)(*(long *)(arg1 + 8) + 0x1c);
          fVar3 = (float)((uint)pfVar25[2] & DAT_005be880 /* R:u32=2147483647 */);
          if ((float)((uint)pfVar25[2] & DAT_005be880 /* R:u32=2147483647 */) <= fVar47) {
            fVar3 = fVar47;
          }
          *(float *)(*(long *)(arg1 + 8) + 0x1c) = fVar3;
        }
      }
                    /* try { // try from 00594b45 to 00594b56 has its CatchHandler @ 00595639 */
      ExplodeStringData__ExplodeStringData((ExplodeStringData *)&local_98);
    }
    iVar8 = File__EndOfFile();
    uVar31 = uVar36;
  } while (iVar8 == 0);
  lVar39 = *(long *)(arg1 + 8);
  if (lVar39 != 0) {
    *(uint32_t *)(lVar39 + 4) = *(uint32_t *)(lVar39 + 0x14);
    *(uint32_t *)(lVar39 + 8) = *(uint32_t *)(lVar39 + 0x18);
    *(uint32_t *)(lVar39 + 0xc) = *(uint32_t *)(lVar39 + 0x1c);
    *(uint32_t *)(lVar39 + 0x10) = *(uint32_t *)(lVar39 + 0x20);
  }
  lVar39 = *(long *)(self + 0x68);
  lVar43 = (-(ulong)(*(long *)(self + 0x18) == 0) & 0xfffffffffffffffc) + 10;
  lVar16 = (-(ulong)(*(long *)(self + 0x18) == 0) & 0xfffffffffffffff0) + 0x28;
  if (*(long *)(self + 0x10) == 0) {
    lVar43 = (-(ulong)(*(long *)(self + 0x18) == 0) & 0xfffffffffffffffc) + 8;
    lVar16 = (-(ulong)(*(long *)(self + 0x18) == 0) & 0xfffffffffffffff0) + 0x20;
  }
  puVar24 = puVar13 + 1;
  if ((*(int *)(lVar39 + 4) < 0) && (*(int *)(lVar39 + 8) < 0)) {
    local_1b0 = *(void **)(self + 8);
    uVar31 = 0;
    uVar41 = 0;
    if (*(short *)(self + 0x58) != 0) {
      while( true ) {
        uVar14 = uVar31 & 0xffff;
        uVar28 = (int)uVar31 + 1;
        uVar31 = (ulong)uVar28;
        lVar43 = uVar14 * 0x48;
        *(uint32_t *)(*(long *)self + (ulong)uVar41 * 4) = *(uint32_t *)(lVar39 + uVar14 * 0x48)
        ;
        *(uint32_t *)(*(long *)self + (ulong)(uVar41 + 1) * 4) =
             *(uint32_t *)(*(long *)(self + 0x68) + 0x18 + lVar43);
        uVar35 = uVar41 + 2;
        uVar41 = uVar41 + 3;
        *(uint32_t *)(*(long *)self + (ulong)uVar35 * 4) =
             *(uint32_t *)(*(long *)(self + 0x68) + 0x30 + lVar43);
        if (*(ushort *)(self + 0x58) <= uVar28) break;
        lVar39 = *(long *)(self + 0x68);
      }
    }
  }
  else {
    *(uint16_t *)(self + 0x20) = 0;
    local_1b0 = malloc((ulong)*(ushort *)(self + 0x28) * lVar16);
    if (*(short *)(self + 0x58) != 0) {
      local_1d0 = 0;
      local_1cc = 0;
      uVar31 = 0;
LAB_00594c40:
      uVar36 = 0;
      uVar14 = uVar31;
      do {
        plVar2 = (long *)(lVar39 + (ulong)(ushort)local_1d0 * 0x48 + uVar36 * 0x18);
        plVar20 = (long *)puVar24[(int)*plVar2];
        if (plVar20 != (long *)0x0) {
          do {
            if ((*plVar20 == *plVar2) && ((int)plVar20[1] == (int)plVar2[1])) {
              iVar8 = *(int *)((long)plVar20 + 0xc);
              *(int *)((long)plVar2 + 0xc) = iVar8;
              goto LAB_00594ca0;
            }
            plVar20 = (long *)plVar20[2];
          } while (plVar20 != (long *)0x0);
        }
        puVar34 = (uint32_t *)((long)(int)*plVar2 * 0x10 + *(long *)(self + 8));
        puVar23 = (uint32_t *)((ulong)local_1cc * lVar43 * 4 + (long)local_1b0);
        *puVar23 = *puVar34;
        puVar23[1] = puVar34[1];
        puVar23[2] = puVar34[2];
        puVar23[3] = puVar34[3];
        if (*(long *)(self + 0x10) == 0) {
          lVar39 = 0xc;
        }
        else {
                    /* try { // try from 005952b3 to 005953ca has its CatchHandler @ 00595639 */
          Vector2__operator_assign((Vector2 *)(puVar23 + 3),
                             (Vector2 *)
                             (*(long *)(self + 0x10) + (long)*(int *)((long)plVar2 + 4) * 8));
          lVar39 = 0x14;
        }
        if (*(long *)(self + 0x18) != 0) {
          puVar23 = (uint32_t *)(lVar39 + (long)puVar23);
          puVar34 = (uint32_t *)(*(long *)(self + 0x18) + (long)(int)plVar2[1] * 0x10);
          *puVar23 = *puVar34;
          puVar23[1] = puVar34[1];
          puVar23[2] = puVar34[2];
          puVar23[3] = puVar34[3];
        }
        *(uint *)(*(long *)(self + 0x68) + uVar36 * 0x18 + 0xc + (ulong)(ushort)local_1d0 * 0x48) =
             local_1cc;
        *(short *)(self + 0x20) = *(short *)(self + 0x20) + 1;
        local_1cc = local_1cc + 1;
        if (puVar24[(int)*plVar2] != 0) {
          *(uint64_t *)(puVar24[(int)*plVar2] + 0x10) = 0;
        }
        iVar8 = *(int *)((long)plVar2 + 0xc);
LAB_00594ca0:
        uVar41 = (int)uVar36 + 1;
        uVar36 = (ulong)uVar41;
        uVar31 = (ulong)((int)uVar14 + 1);
        *(int *)(*(long *)self + uVar14 * 4) = iVar8;
        if (uVar41 == 3) goto LAB_00595240;
        lVar39 = *(long *)(self + 0x68);
        uVar14 = uVar31;
      } while( true );
    }
  }
LAB_00594d3e:
  if (*(int *)(arg1 + 0x10) == 0) {
    local_1c0 = (uint16_t)lVar16;
    local_dc = 5;
    local_d0 = 0;
    local_cc = 1;
    local_c8 = 0;
    local_d8 = local_1b0;
    local_e8 = (ulong)*(ushort *)(self + 0x20) * lVar16;
    local_e0 = local_1c0;
                    /* try { // try from 00594dae to 00594db2 has its CatchHandler @ 00595617 */
    local_40[0] = VertexBuffer__Create((tagVertexBufferCreation *)&local_e8);
    local_a8 = *(uint64_t *)self;
    local_b0 = CONCAT44(5,(uint32_t)local_b0);
    local_b0 = CONCAT62(local_b0._2_6_,4);
    local_b8 = (ulong)*(ushort *)(self + 0x28) << 2;
                    /* try { // try from 00594df4 to 00594df8 has its CatchHandler @ 0059567e */
    uVar19 = IndexBuffer__Create((tagIndexBufferCreation *)&local_b8);
    local_88 = 0;
    uStack_86 = 0;
    uStack_84 = 0;
    local_158 = (ulong)bStack_87 << 8;
    *(uint64_t *)(self + 0x88) = uVar19;
    local_98 = &local_158;
    local_148 = CONCAT71(local_148._1_7_,0xff);
    local_13c[4] = (File)0xff;
    local_13c[0x14] = (File)0xff;
    local_80 = 2;
    local_7c = 0;
    local_150 = 2;
    local_14c[0] = 0;
    if (*(long *)(self + 0x10) == 0) {
      lVar39 = *(long *)(self + 0x18);
      uVar26 = 3;
      iVar30 = 2;
      uVar27 = 2;
      iVar29 = 1;
      iVar8 = 1;
      uVar40 = 0x10;
    }
    else {
      lVar39 = *(long *)(self + 0x18);
      local_78 = 0;
      iVar30 = 3;
      uStack_76 = 0x10;
      uStack_74 = 1;
      uVar27 = 3;
      local_148 = CONCAT44(1,CONCAT22(0x10,(ushort)bStack_77 << 8));
      local_70 = 1;
      iVar29 = 2;
      iVar8 = 2;
      local_6c = 0;
      local_140 = 1;
      uVar40 = 0x18;
      local_13c[0] = (File)0x0;
      uVar26 = 4;
    }
    if (lVar39 != 0) {
      local_68 = 0;
      uStack_64 = 2;
      lVar39 = (long)iVar8 * 0x10;
      local_60 = 2;
      local_5c = 0;
      *(uint32_t *)(local_14c + lVar39 + -4) = 2;
      local_14c[lVar39] = 0;
      local_98[(long)iVar8 * 2] = CONCAT44(2,(uint)CONCAT21(uVar40,uStack_67) << 8);
      iVar29 = iVar30;
      uVar27 = uVar26;
      uStack_66 = uVar40;
    }
    local_58 = 0xff;
    lVar39 = (long)iVar29 * 0x10;
    local_90 = CONCAT62((int6)(local_90 >> 0x10),uVar27) & 0xffffffff;
    local_98[(long)iVar29 * 2] = CONCAT71(uStack_57,0xff);
    *(uint32_t *)(local_14c + lVar39 + -4) = local_50;
    local_14c[lVar39] = local_4c;
                    /* try { // try from 00594f93 to 00594fa9 has its CatchHandler @ 00595680 */
    this_00 = (BaseResource *)VertexDeclaration__Create((tagVertexDeclarationCreation *)&local_98);
    pVVar21 = BaseResource__operator_new(0xa8,1);
                    /* try { // try from 00594fd5 to 00594fd9 has its CatchHandler @ 00595682 */
    VertexStream__VertexStream__005a6980
              (pVVar21,1,*(ushort *)(self + 0x28) / 3,*(uint16_t *)(self + 0x20),0,local_40,
               this_00);
    *(VertexStream **)(self + 0x80) = pVVar21;
                    /* try { // try from 00594fe6 to 00594fea has its CatchHandler @ 00595680 */
    BaseResource__Release(this_00,0);
    if (*(void **)(self + 8) != local_1b0) {
      free(local_1b0);
    }
    if (puVar24 != (ulong *)0x0) {
      operator_delete__(puVar13);
    }
  }
                    /* try { // try from 00595015 to 00595019 has its CatchHandler @ 0059564d */
  File__File__005b7a70(local_13c + 0x24);
  return;
LAB_00595240:
  local_1d0 = local_1d0 + 1;
  if (*(ushort *)(self + 0x58) <= local_1d0) goto LAB_00594d3e;
  lVar39 = *(long *)(self + 0x68);
  goto LAB_00594c40;
}
