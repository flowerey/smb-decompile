/* src/game/classes/MeatBoyCharFoundation.c — 4 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "MeatBoyCharFoundation.h"

/* ======================================================================
 * MeatBoyCharFoundation__MeatBoyCharFoundation  (Ghidra `MeatBoyCharFoundation` @ 00474fe0)
 * Signature: uint8_t __thiscall MeatBoyCharFoundation(MeatBoyCharFoundation * self)
 * Class: MeatBoyCharFoundation
 * Calls: `CriticalSection__CriticalSection`
 * Called by: (none)
 */
/* MeatBoyCharFoundation__MeatBoyCharFoundation() */

void __thiscall MeatBoyCharFoundation__MeatBoyCharFoundation(MeatBoyCharFoundation *self)

{
  CriticalSection *this_00;
  long lVar1;
  
  this_00 = (CriticalSection *)(self + 8);
  lVar1 = 0x17;
  do {
                    /* try { // try from 00475003 to 00475007 has its CatchHandler @ 0047505c */
    CriticalSection__CriticalSection(this_00);
    lVar1 = lVar1 + -1;
    *(uint16_t *)(this_00 + 0x2a) = 0;
    *(uint16_t *)(this_00 + 0x28) = 0;
    *(uint16_t *)(this_00 + 0x34) = 1;
    *(uint64_t *)(this_00 + 0x38) = 0;
    *(uint64_t *)(this_00 + 0x40) = 0;
    *(uint32_t *)(this_00 + 0x48) = 0;
    this_00[0x2c] = (CriticalSection)0x4;
    *(uint32_t *)(this_00 + 0x30) = 0;
    *(uint32_t *)(this_00 + 0x50) = 0;
    this_00 = this_00 + 0x58;
  } while (lVar1 != -1);
  return;
}

/* ======================================================================
 * MeatBoyCharFoundation__MeatBoyCharFoundation__004750a0  (Ghidra `~MeatBoyCharFoundation` @ 004750a0)
 * Signature: uint8_t __thiscall ~MeatBoyCharFoundation(MeatBoyCharFoundation * self)
 * Class: MeatBoyCharFoundation
 * Calls: `CriticalSection__CriticalSection__005b71d0`, `FlashAnimationLibrary__FlashAnimationLibrary`, `free`, `operator_delete`
 * Called by: `MeatBoyCharactor__MeatBoyCharactor`
 */
/* MeatBoyCharFoundation__MeatBoyCharFoundation__004750a0() */

void __thiscall MeatBoyCharFoundation__MeatBoyCharFoundation__004750a0(MeatBoyCharFoundation *self)

{
  long lVar1;
  long *plVar2;
  FlashAnimationLibrary *this_00;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  CriticalSection *this_01;
  int iVar6;
  MeatBoyCharFoundation *pMVar7;
  
  iVar6 = 0;
  do {
    uVar5 = 0;
    lVar1 = (long)iVar6 * 0x58;
    uVar3 = (uint)*(ushort *)(self + lVar1 + 0x30);
    if (*(ushort *)(self + lVar1 + 0x30) != 0) {
      do {
        plVar2 = *(long **)(*(long *)(self + lVar1 + 0x40) + (uVar5 & 0xffff) * 8);
        if (plVar2 != (long *)0x0) {
                    /* try { // try from 004750e3 to 004751b0 has its CatchHandler @ 0047524d */
          (**(code **)(*plVar2 + 8))();
          uVar3 = (uint)*(ushort *)(self + lVar1 + 0x30);
        }
        uVar4 = (int)uVar5 + 1;
        uVar5 = (ulong)uVar4;
      } while ((int)uVar4 < (int)uVar3);
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 != 0x18);
  if (*(long **)(self + 0x848) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x848) + 8))();
  }
  if (*(long **)(self + 0x850) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x850) + 8))();
  }
  if (*(long **)(self + 0x858) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x858) + 8))();
  }
  if (*(long **)(self + 0x860) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x860) + 8))();
  }
  if (*(long **)(self + 0x868) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x868) + 8))();
  }
  if (*(long **)(self + 0x870) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x870) + 8))();
  }
  if (*(long **)(self + 0x878) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x878) + 8))();
  }
  if (*(long **)(self + 0x880) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x880) + 8))();
  }
  if (*(long **)(self + 0x888) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x888) + 8))();
  }
  this_00 = *(FlashAnimationLibrary **)self;
  if (this_00 != (FlashAnimationLibrary *)0x0) {
    FlashAnimationLibrary__FlashAnimationLibrary(this_00);
    operator_delete(this_00);
  }
  this_01 = (CriticalSection *)(self + 0x848);
  pMVar7 = self + 0x838;
  do {
    if (*(int *)pMVar7 == -0x5eef3582) {
      *(int *)pMVar7 = 0;
      free(*(void **)(*(long *)(pMVar7 + -0x10) + -8));
      if (*(int *)(pMVar7 + -0x18) == 1) {
        free(*(void **)(*(long *)(pMVar7 + -8) + -8));
      }
      *(int *)pMVar7 = 0;
      *(uint16_t *)(pMVar7 + -0x1e) = 0;
      *(uint16_t *)(pMVar7 + -0x20) = 0;
      *(uint64_t *)(pMVar7 + -0x10) = 0;
      *(uint64_t *)(pMVar7 + -8) = 0;
    }
    this_01 = this_01 + -0x58;
    pMVar7 = pMVar7 + -0x58;
    CriticalSection__CriticalSection__005b71d0(this_01);
  } while ((CriticalSection *)(self + 8) != this_01);
  return;
}

/* ======================================================================
 * MeatBoyCharFoundation__Initialize  (Ghidra `Initialize` @ 00475280)
 * Signature: uint8_t __thiscall Initialize(MeatBoyCharFoundation * self, MeatBoyCharFoundationCreate * arg1)
 * Class: MeatBoyCharFoundation
 * Calls: `FlashAnimationLibrary__FlashAnimationLibrary__00576680`, `FlashAnimationLibrary__GetMovieClip__005731d0`, `Sprint`, `free`, `malloc`, `memcpy`, `operator_new`, `std__string_string`, `strlen`
 * Called by: `MeatBoyCharactor__MeatBoyCharactor__0047b350`
 */
/* WARNING: Removing unreachable block (ram,0x00476022) */
/* WARNING: Removing unreachable block (ram,0x00475e86) */
/* WARNING: Removing unreachable block (ram,0x00476339) */
/* WARNING: Removing unreachable block (ram,0x00476385) */
/* WARNING: Removing unreachable block (ram,0x00476396) */
/* WARNING: Removing unreachable block (ram,0x00475e9b) */
/* WARNING: Removing unreachable block (ram,0x004762ca) */
/* WARNING: Removing unreachable block (ram,0x00476316) */
/* WARNING: Removing unreachable block (ram,0x00476327) */
/* WARNING: Removing unreachable block (ram,0x00475eb9) */
/* WARNING: Removing unreachable block (ram,0x0047625b) */
/* WARNING: Removing unreachable block (ram,0x004762a7) */
/* WARNING: Removing unreachable block (ram,0x004762b8) */
/* WARNING: Removing unreachable block (ram,0x00475ed7) */
/* WARNING: Removing unreachable block (ram,0x004761ec) */
/* WARNING: Removing unreachable block (ram,0x00476238) */
/* WARNING: Removing unreachable block (ram,0x00476249) */
/* WARNING: Removing unreachable block (ram,0x00475ef5) */
/* WARNING: Removing unreachable block (ram,0x0047617d) */
/* WARNING: Removing unreachable block (ram,0x004761c9) */
/* WARNING: Removing unreachable block (ram,0x004761da) */
/* WARNING: Removing unreachable block (ram,0x00475f13) */
/* WARNING: Removing unreachable block (ram,0x0047610e) */
/* WARNING: Removing unreachable block (ram,0x0047615a) */
/* WARNING: Removing unreachable block (ram,0x0047616b) */
/* WARNING: Removing unreachable block (ram,0x00475f31) */
/* WARNING: Removing unreachable block (ram,0x0047609f) */
/* WARNING: Removing unreachable block (ram,0x004760eb) */
/* WARNING: Removing unreachable block (ram,0x004760fc) */
/* WARNING: Removing unreachable block (ram,0x00475f4f) */
/* WARNING: Removing unreachable block (ram,0x00476030) */
/* WARNING: Removing unreachable block (ram,0x0047607c) */
/* WARNING: Removing unreachable block (ram,0x0047608d) */
/* WARNING: Removing unreachable block (ram,0x00475f6d) */
/* WARNING: Removing unreachable block (ram,0x00475f8b) */
/* WARNING: Removing unreachable block (ram,0x00475fd7) */
/* MeatBoyCharFoundation__Initialize(MeatBoyCharFoundationCreate const*) */

void __thiscall
MeatBoyCharFoundation__Initialize(MeatBoyCharFoundation *self,MeatBoyCharFoundationCreate *arg1)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  char *__s;
  uint8_t *puVar4;
  ushort uVar5;
  short sVar6;
  FlashAnimationLibrary *this_00;
  long lVar7;
  void *pvVar8;
  void *pvVar9;
  ulong uVar10;
  ushort *puVar11;
  void *pvVar12;
  ulong uVar13;
  ushort uVar14;
  uint64_t *puVar15;
  long lVar16;
  int iVar17;
  char *local_c8 [17];
  allocator local_3c;
  allocator local_3b [11];
  
  this_00 = operator_new(0xb0);
                    /* try { // try from 004752ab to 004752af has its CatchHandler @ 00475ffa */
  FlashAnimationLibrary__FlashAnimationLibrary__00576680(this_00,*(char **)arg1);
  *(FlashAnimationLibrary **)self = this_00;
  this_00[0x8d] = (FlashAnimationLibrary)0x1;
  lVar16 = 0;
  do {
    __s = (&Initialize(MeatBoyCharFoundationCreate_const*)::strClipNames)[lVar16];
    if (__s != (char *)0x0) {
      lVar7 = FlashAnimationLibrary__GetMovieClip__005731d0(*(FlashAnimationLibrary **)self,__s);
      if (lVar7 == 0) {
        std__string_string((string *)local_c8,"Could not find Clip: ",&local_3c);
        strlen(__s);
                    /* try { // try from 0047550a to 00475518 has its CatchHandler @ 0047600d */
        std__string_append((char *)local_c8,(ulong)__s);
        Error__ThrowFatalError(local_c8[0]);
        if ((allocator *)(local_c8[0] + -0x18) !=
            (allocator *)&std__string_Rep_S_empty_rep_storage) {
          LOCK();
          piVar1 = (int *)(local_c8[0] + -8);
          iVar17 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar17 < 1) {
            std__string_Rep_M_destroy((allocator *)(local_c8[0] + -0x18));
          }
        }
      }
      else {
        lVar2 = (long)(int)lVar16 * 0x58;
        if (*(int *)(self + lVar2 + 0x50) == -0x5eef3582) {
          uVar5 = *(ushort *)(self + lVar2 + 0x30);
          if (*(ushort *)(self + lVar2 + 0x32) <= uVar5) {
            uVar5 = *(ushort *)(self + lVar2 + 0x32) + *(short *)(self + lVar2 + 0x3c);
            uVar13 = (ulong)(byte)self[lVar2 + 0x34];
            pvVar8 = (void *)0x0;
            pvVar12 = *(void **)(self + lVar2 + 0x40);
            *(ushort *)(self + lVar2 + 0x32) = uVar5;
            uVar10 = (ulong)uVar5 * 8;
            pvVar9 = malloc(uVar13 + 0x10 + uVar10);
            if (pvVar9 != (void *)0x0) {
              pvVar8 = (void *)((long)pvVar9 + 0x10U +
                               (uVar13 - ((long)pvVar9 + 0x10U) % uVar13) % uVar13);
              *(ulong *)((long)pvVar8 + -0x10) = uVar10;
              *(void **)((long)pvVar8 + -8) = pvVar9;
              if (pvVar12 != (void *)0x0) {
                uVar13 = *(ulong *)((long)pvVar12 + -0x10);
                if (uVar10 <= *(ulong *)((long)pvVar12 + -0x10)) {
                  uVar13 = uVar10;
                }
                memcpy(pvVar8,pvVar12,uVar13);
                free(*(void **)((long)pvVar12 + -8));
              }
            }
            pvVar12 = *(void **)(self + lVar2 + 0x48);
            *(void **)(self + lVar2 + 0x40) = pvVar8;
            if (pvVar12 != (void *)0x0) {
              uVar14 = *(ushort *)(self + lVar2 + 0x32);
              uVar13 = (ulong)(byte)self[lVar2 + 0x34];
              pvVar8 = (void *)0x0;
              uVar10 = (ulong)uVar14 * 2;
              pvVar9 = malloc(uVar13 + 0x10 + uVar10);
              if (pvVar9 != (void *)0x0) {
                pvVar8 = (void *)((long)pvVar9 + 0x10U +
                                 (uVar13 - ((long)pvVar9 + 0x10U) % uVar13) % uVar13);
                *(ulong *)((long)pvVar8 + -0x10) = uVar10;
                *(void **)((long)pvVar8 + -8) = pvVar9;
                uVar13 = *(ulong *)((long)pvVar12 + -0x10);
                if (uVar10 <= *(ulong *)((long)pvVar12 + -0x10)) {
                  uVar13 = uVar10;
                }
                memcpy(pvVar8,pvVar12,uVar13);
                free(*(void **)((long)pvVar12 + -8));
                uVar14 = *(ushort *)(self + lVar2 + 0x32);
              }
              uVar5 = *(ushort *)(self + lVar2 + 0x30);
              *(void **)(self + lVar2 + 0x48) = pvVar8;
              if (uVar14 <= uVar5) goto LAB_0047539f;
              while( true ) {
                uVar10 = (ulong)uVar5;
                uVar5 = uVar5 + 1;
                *(uint16_t *)((long)pvVar8 + uVar10 * 2) = 0xffff;
                if (uVar14 <= uVar5) break;
                pvVar8 = *(void **)(self + lVar2 + 0x48);
              }
            }
            uVar5 = *(ushort *)(self + lVar2 + 0x30);
          }
        }
        else {
          uVar10 = (ulong)(byte)self[lVar2 + 0x34];
          *(uint32_t *)(self + lVar2 + 0x38) = 0;
          pvVar8 = malloc(uVar10 + 0x38);
          puVar15 = (uint64_t *)0x0;
          if (pvVar8 != (void *)0x0) {
            puVar15 = (uint64_t *)
                      ((uVar10 - ((long)pvVar8 + 0x10U) % uVar10) % uVar10 + (long)pvVar8 + 0x10U);
            puVar15[-2] = 0x28;
            puVar15[-1] = pvVar8;
          }
          *(uint64_t **)(self + lVar2 + 0x40) = puVar15;
          uVar5 = 0;
          *puVar15 = 0;
          puVar15[1] = 0;
          puVar15[2] = 0;
          puVar15[3] = 0;
          puVar15[4] = 0;
          *(uint16_t *)(self + lVar2 + 0x30) = 0;
          *(uint16_t *)(self + lVar2 + 0x32) = 5;
          *(uint32_t *)(self + lVar2 + 0x50) = 0xa110ca7e;
          *(uint16_t *)(self + lVar2 + 0x3c) = 5;
        }
LAB_0047539f:
        if ((*(int *)(self + lVar2 + 0x38) == 1) && (*(short *)(self + lVar2 + 0x32) != 0)) {
          puVar11 = *(ushort **)(self + lVar2 + 0x48);
          sVar6 = 1;
          uVar14 = *puVar11;
          while (uVar14 != 0xffff) {
            puVar11 = puVar11 + 1;
            if (sVar6 == *(short *)(self + lVar2 + 0x32)) goto LAB_004753ab;
            sVar6 = sVar6 + 1;
            uVar14 = *puVar11;
          }
          *puVar11 = uVar5;
          uVar5 = *(ushort *)(self + lVar2 + 0x30);
        }
LAB_004753ab:
        puVar4 = (&Initialize(MeatBoyCharFoundationCreate_const*)::strClipNames)[lVar16];
        *(long *)(*(long *)(self + lVar2 + 0x40) + (ulong)uVar5 * 8) = lVar7;
        *(short *)(self + lVar2 + 0x30) = *(short *)(self + lVar2 + 0x30) + 1;
        iVar17 = 1;
        while( true ) {
          Sprint("%s_alt%i",local_c8,puVar4,iVar17);
          lVar7 = FlashAnimationLibrary__GetMovieClip__005731d0
                            (*(FlashAnimationLibrary **)self,(char *)local_c8);
          if (lVar7 == 0) break;
          if (*(int *)(self + lVar2 + 0x50) == -0x5eef3582) {
            uVar5 = *(ushort *)(self + lVar2 + 0x30);
            if (uVar5 < *(ushort *)(self + lVar2 + 0x32)) goto LAB_004754b1;
            uVar5 = *(ushort *)(self + lVar2 + 0x32) + *(short *)(self + lVar2 + 0x3c);
            uVar13 = (ulong)(byte)self[lVar2 + 0x34];
            pvVar12 = *(void **)(self + lVar2 + 0x40);
            *(ushort *)(self + lVar2 + 0x32) = uVar5;
            uVar10 = (ulong)uVar5 * 8;
            pvVar9 = malloc(uVar13 + 0x10 + uVar10);
            pvVar8 = (void *)0x0;
            if (pvVar9 != (void *)0x0) {
              pvVar8 = (void *)((long)pvVar9 + 0x10U +
                               (uVar13 - ((long)pvVar9 + 0x10U) % uVar13) % uVar13);
              *(ulong *)((long)pvVar8 + -0x10) = uVar10;
              *(void **)((long)pvVar8 + -8) = pvVar9;
              if (pvVar12 != (void *)0x0) {
                uVar13 = *(ulong *)((long)pvVar12 + -0x10);
                if (uVar10 <= *(ulong *)((long)pvVar12 + -0x10)) {
                  uVar13 = uVar10;
                }
                memcpy(pvVar8,pvVar12,uVar13);
                free(*(void **)((long)pvVar12 + -8));
              }
            }
            *(void **)(self + lVar2 + 0x40) = pvVar8;
            pvVar8 = *(void **)(self + lVar2 + 0x48);
            if (pvVar8 != (void *)0x0) {
              uVar14 = *(ushort *)(self + lVar2 + 0x32);
              uVar13 = (ulong)(byte)self[lVar2 + 0x34];
              uVar10 = (ulong)uVar14 * 2;
              pvVar9 = malloc(uVar13 + 0x10 + uVar10);
              pvVar12 = (void *)0x0;
              if (pvVar9 != (void *)0x0) {
                pvVar12 = (void *)((long)pvVar9 + 0x10U +
                                  (uVar13 - ((long)pvVar9 + 0x10U) % uVar13) % uVar13);
                *(void **)((long)pvVar12 + -8) = pvVar9;
                *(ulong *)((long)pvVar12 + -0x10) = uVar10;
                uVar13 = *(ulong *)((long)pvVar8 + -0x10);
                if (uVar10 <= *(ulong *)((long)pvVar8 + -0x10)) {
                  uVar13 = uVar10;
                }
                memcpy(pvVar12,pvVar8,uVar13);
                free(*(void **)((long)pvVar8 + -8));
                uVar14 = *(ushort *)(self + lVar2 + 0x32);
              }
              uVar5 = *(ushort *)(self + lVar2 + 0x30);
              *(void **)(self + lVar2 + 0x48) = pvVar12;
              if (uVar14 <= uVar5) goto LAB_004754b1;
              while( true ) {
                uVar10 = (ulong)uVar5;
                uVar5 = uVar5 + 1;
                *(uint16_t *)((long)pvVar12 + uVar10 * 2) = 0xffff;
                if (uVar14 <= uVar5) break;
                pvVar12 = *(void **)(self + lVar2 + 0x48);
              }
            }
            iVar3 = *(int *)(self + lVar2 + 0x38);
            uVar5 = *(ushort *)(self + lVar2 + 0x30);
          }
          else {
            uVar10 = (ulong)(byte)self[lVar2 + 0x34];
            *(uint32_t *)(self + lVar2 + 0x38) = 0;
            pvVar8 = malloc(uVar10 + 0x38);
            puVar15 = (uint64_t *)0x0;
            if (pvVar8 != (void *)0x0) {
              puVar15 = (uint64_t *)
                        ((long)pvVar8 + 0x10U + (uVar10 - ((long)pvVar8 + 0x10U) % uVar10) % uVar10)
              ;
              puVar15[-2] = 0x28;
              puVar15[-1] = pvVar8;
            }
            *(uint64_t **)(self + lVar2 + 0x40) = puVar15;
            uVar5 = 0;
            *puVar15 = 0;
            puVar15[1] = 0;
            puVar15[2] = 0;
            puVar15[3] = 0;
            puVar15[4] = 0;
            *(uint16_t *)(self + lVar2 + 0x30) = 0;
            *(uint16_t *)(self + lVar2 + 0x32) = 5;
            *(uint32_t *)(self + lVar2 + 0x50) = 0xa110ca7e;
            *(uint16_t *)(self + lVar2 + 0x3c) = 5;
LAB_004754b1:
            iVar3 = *(int *)(self + lVar2 + 0x38);
          }
          if ((iVar3 == 1) && (*(short *)(self + lVar2 + 0x32) != 0)) {
            puVar11 = *(ushort **)(self + lVar2 + 0x48);
            sVar6 = 0;
            uVar14 = *puVar11;
            while (uVar14 != 0xffff) {
              puVar11 = puVar11 + 1;
              sVar6 = sVar6 + 1;
              if (sVar6 == *(short *)(self + lVar2 + 0x32)) goto LAB_004754bd;
              uVar14 = *puVar11;
            }
            *puVar11 = uVar5;
            uVar5 = *(ushort *)(self + lVar2 + 0x30);
          }
LAB_004754bd:
          iVar17 = iVar17 + 1;
          *(long *)(*(long *)(self + lVar2 + 0x40) + (ulong)uVar5 * 8) = lVar7;
          *(short *)(self + lVar2 + 0x30) = *(short *)(self + lVar2 + 0x30) + 1;
        }
      }
    }
    lVar16 = lVar16 + 1;
    if (lVar16 == 0x18) {
      lVar16 = FlashAnimationLibrary__GetMovieClip__005731d0(*(FlashAnimationLibrary **)self,"land splat");
      *(long *)(self + 0x848) = lVar16;
      if (lVar16 == 0) {
        std__string_string((string *)local_c8,"Could not find Clip: ",local_3b);
                    /* try { // try from 00475aa9 to 00475ab7 has its CatchHandler @ 00475e73 */
        std__string_append((char *)local_c8,0x5c046c);
        Error__ThrowFatalError(local_c8[0]);
        if ((allocator *)(local_c8[0] + -0x18) !=
            (allocator *)&std__string_Rep_S_empty_rep_storage) {
          LOCK();
          piVar1 = (int *)(local_c8[0] + -8);
          iVar17 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar17 < 1) {
            std__string_Rep_M_destroy((allocator *)(local_c8[0] + -0x18));
          }
        }
      }
      lVar16 = FlashAnimationLibrary__GetMovieClip__005731d0(*(FlashAnimationLibrary **)self,"Jumping blood1")
      ;
      *(long *)(self + 0x850) = lVar16;
      if (lVar16 == 0) {
        std__string_string((string *)local_c8,"Could not find Clip: ",local_3b);
                    /* try { // try from 00475b1f to 00475b2d has its CatchHandler @ 00475e73 */
        std__string_append((char *)local_c8,0x5c0477);
        Error__ThrowFatalError(local_c8[0]);
        if ((allocator *)(local_c8[0] + -0x18) !=
            (allocator *)&std__string_Rep_S_empty_rep_storage) {
          LOCK();
          piVar1 = (int *)(local_c8[0] + -8);
          iVar17 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar17 < 1) {
            std__string_Rep_M_destroy((allocator *)(local_c8[0] + -0x18));
          }
        }
      }
      lVar16 = FlashAnimationLibrary__GetMovieClip__005731d0(*(FlashAnimationLibrary **)self,"wall land");
      *(long *)(self + 0x858) = lVar16;
      if (lVar16 == 0) {
        std__string_string((string *)local_c8,"Could not find Clip: ",local_3b);
                    /* try { // try from 00475b97 to 00475ba5 has its CatchHandler @ 00475e73 */
        std__string_append((char *)local_c8,0x5c0486);
        Error__ThrowFatalError(local_c8[0]);
        if ((allocator *)(local_c8[0] + -0x18) !=
            (allocator *)&std__string_Rep_S_empty_rep_storage) {
          LOCK();
          piVar1 = (int *)(local_c8[0] + -8);
          iVar17 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar17 < 1) {
            std__string_Rep_M_destroy((allocator *)(local_c8[0] + -0x18));
          }
        }
      }
      lVar16 = FlashAnimationLibrary__GetMovieClip__005731d0
                         (*(FlashAnimationLibrary **)self,"wall blood poof");
      *(long *)(self + 0x860) = lVar16;
      if (lVar16 == 0) {
        std__string_string((string *)local_c8,"Could not find Clip: ",local_3b);
                    /* try { // try from 00475c07 to 00475c15 has its CatchHandler @ 00475e73 */
        std__string_append((char *)local_c8,0x5c0490);
        Error__ThrowFatalError(local_c8[0]);
        if ((allocator *)(local_c8[0] + -0x18) !=
            (allocator *)&std__string_Rep_S_empty_rep_storage) {
          LOCK();
          piVar1 = (int *)(local_c8[0] + -8);
          iVar17 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar17 < 1) {
            std__string_Rep_M_destroy((allocator *)(local_c8[0] + -0x18));
          }
        }
      }
      lVar16 = FlashAnimationLibrary__GetMovieClip__005731d0(*(FlashAnimationLibrary **)self,"Bloodgush4");
      *(long *)(self + 0x868) = lVar16;
      if (lVar16 == 0) {
        std__string_string((string *)local_c8,"Could not find Clip: ",local_3b);
                    /* try { // try from 00475c77 to 00475c85 has its CatchHandler @ 00475e73 */
        std__string_append((char *)local_c8,0x5c04a0);
        Error__ThrowFatalError(local_c8[0]);
        if ((allocator *)(local_c8[0] + -0x18) !=
            (allocator *)&std__string_Rep_S_empty_rep_storage) {
          LOCK();
          piVar1 = (int *)(local_c8[0] + -8);
          iVar17 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar17 < 1) {
            std__string_Rep_M_destroy((allocator *)(local_c8[0] + -0x18));
          }
        }
      }
      lVar16 = FlashAnimationLibrary__GetMovieClip__005731d0(*(FlashAnimationLibrary **)self,"blood gush 3");
      *(long *)(self + 0x870) = lVar16;
      if (lVar16 == 0) {
        std__string_string((string *)local_c8,"Could not find Clip: ",local_3b);
                    /* try { // try from 00475ce7 to 00475cf5 has its CatchHandler @ 00475e73 */
        std__string_append((char *)local_c8,0x5c04ab);
        Error__ThrowFatalError(local_c8[0]);
        if ((allocator *)(local_c8[0] + -0x18) !=
            (allocator *)&std__string_Rep_S_empty_rep_storage) {
          LOCK();
          piVar1 = (int *)(local_c8[0] + -8);
          iVar17 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar17 < 1) {
            std__string_Rep_M_destroy((allocator *)(local_c8[0] + -0x18));
          }
        }
      }
      lVar16 = FlashAnimationLibrary__GetMovieClip__005731d0(*(FlashAnimationLibrary **)self,"bloodgush1");
      *(long *)(self + 0x878) = lVar16;
      if (lVar16 == 0) {
        std__string_string((string *)local_c8,"Could not find Clip: ",local_3b);
                    /* try { // try from 00475d57 to 00475d65 has its CatchHandler @ 00475e73 */
        std__string_append((char *)local_c8,0x5c04b8);
        Error__ThrowFatalError(local_c8[0]);
        if ((allocator *)(local_c8[0] + -0x18) !=
            (allocator *)&std__string_Rep_S_empty_rep_storage) {
          LOCK();
          piVar1 = (int *)(local_c8[0] + -8);
          iVar17 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar17 < 1) {
            std__string_Rep_M_destroy((allocator *)(local_c8[0] + -0x18));
          }
        }
      }
      lVar16 = FlashAnimationLibrary__GetMovieClip__005731d0(*(FlashAnimationLibrary **)self,"splat");
      *(long *)(self + 0x880) = lVar16;
      if (lVar16 == 0) {
        std__string_string((string *)local_c8,"Could not find Clip: ",local_3b);
                    /* try { // try from 00475dc7 to 00475dd5 has its CatchHandler @ 00475e73 */
        std__string_append((char *)local_c8,0x5c0471);
        Error__ThrowFatalError(local_c8[0]);
        if ((allocator *)(local_c8[0] + -0x18) !=
            (allocator *)&std__string_Rep_S_empty_rep_storage) {
          LOCK();
          piVar1 = (int *)(local_c8[0] + -8);
          iVar17 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar17 < 1) {
            std__string_Rep_M_destroy((allocator *)(local_c8[0] + -0x18));
          }
        }
      }
      lVar16 = FlashAnimationLibrary__GetMovieClip__005731d0(*(FlashAnimationLibrary **)self,"slide blood");
      *(long *)(self + 0x888) = lVar16;
      if (lVar16 == 0) {
        std__string_string((string *)local_c8,"Could not find Clip: ",local_3b);
                    /* try { // try from 00475e37 to 00475e45 has its CatchHandler @ 00475e73 */
        std__string_append((char *)local_c8,0x5c04c3);
        Error__ThrowFatalError(local_c8[0]);
        if ((allocator *)(local_c8[0] + -0x18) !=
            (allocator *)&std__string_Rep_S_empty_rep_storage) {
          LOCK();
          piVar1 = (int *)(local_c8[0] + -8);
          iVar17 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar17 < 1) {
            std__string_Rep_M_destroy((allocator *)(local_c8[0] + -0x18));
          }
        }
      }
      return;
    }
  } while( true );
}

/* ======================================================================
 * MeatBoyCharFoundation__Render  (Ghidra `Render` @ 00479b20)
 * Signature: uint8_t __thiscall Render(MeatBoyCharFoundation * self, MeatBoyCharactor * arg1, FlashLibraryInstance * arg2)
 * Class: MeatBoyCharFoundation
 * Calls: `FlashLibraryInstance__IsPlaying`, `FlashLibraryInstance__Reset`, `GetRandomINT`, `MeatBoyCharactor__RenderEffects`, `RegisterAudioPosition`, `Vector2__operator_assign`, `Vector2__operator_mul_assign__005be220`, `Vector2__operator_plus__005be140`
 * Called by: `AlienHominid__Render`, `AlienHominid__RenderClones`, `CommanderVideo__Render`, `CommanderVideo__RenderClones`, `DrFetus__Render`, `DrFetus__RenderClones`, `FlyWrench__Render`, `GooBall__Render`, `GooBall__RenderClones`, `HeadCrab__Render` (+20 more)
 */
/* MeatBoyCharFoundation__Render(MeatBoyCharactor*, FlashLibraryInstance*) */

void __thiscall
MeatBoyCharFoundation__Render
          (MeatBoyCharFoundation *self,MeatBoyCharactor *arg1,FlashLibraryInstance *arg2)

{
  ushort uVar1;
  long lVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint32_t uVar6;
  byte bVar7;
  FlashLibraryInstance *this_00;
  float local_ac;
  Matrix4x4 local_98 [64];
  float local_58;
  uint local_54;
  Vector2 local_48 [24];
  
  if (arg2 == (FlashLibraryInstance *)0x0) {
    lVar2 = (long)*(int *)(arg1 + 0x7d4) * 0x58;
    if (*(uint *)(arg1 + 0xa4c) == 0xffffffff) {
      this_00 = *(FlashLibraryInstance **)
                 (*(long *)(self + lVar2 + 0x40) + (ulong)*(ushort *)(self + lVar2 + 0x58) * 8);
    }
    else {
      this_00 = *(FlashLibraryInstance **)
                 (*(long *)(self + lVar2 + 0x40) + (ulong)(*(uint *)(arg1 + 0xa4c) & 0xffff) * 8)
      ;
    }
    bVar3 = true;
    bVar4 = true;
    *(uint32_t *)(this_00 + 0x58) = *(uint32_t *)(arg1 + 0xa50);
  }
  else {
    bVar4 = false;
    bVar3 = false;
    this_00 = arg2;
  }
  if (*(int *)(arg1 + 0x7d4) == 0x10) {
    *(uint8_t *)(*(long *)self + 0x8d) = 1;
  }
  else {
    *(uint8_t *)(*(long *)self + 0x8d) = 0;
  }
  iVar5 = *(int *)(arg1 + 0x7d4);
  if (bVar3) {
    if (iVar5 == 0xe) {
      iVar5 = FlashLibraryInstance__IsPlaying(this_00);
      if (iVar5 == 0) {
        if (*(int *)(arg1 + 0xa40) != 0) {
          return;
        }
        arg1[0x7db] = (MeatBoyCharactor)((byte)arg1[0x7db] | 0x80);
      }
LAB_00479dc6:
      iVar5 = *(int *)(arg1 + 0x7d4);
    }
    else if (iVar5 == 0x10) {
      iVar5 = FlashLibraryInstance__IsPlaying(this_00);
      if (iVar5 != 0) goto LAB_00479dc6;
      if (*(int *)(arg1 + 0x7d4) != 0) {
        lVar2 = *(long *)(arg1 + 0xf8);
        arg1[0x7db] = (MeatBoyCharactor)((byte)arg1[0x7db] | 8);
        uVar6 = 0;
        uVar1 = *(ushort *)(lVar2 + 0x30);
        if (uVar1 != 0) {
          uVar6 = GetRandomINT(0,uVar1 - 1);
        }
        *(uint32_t *)(lVar2 + 0x58) = uVar6;
        *(uint32_t *)(arg1 + 0xa4c) = uVar6;
        *(uint32_t *)(arg1 + 0xa50) = 0;
      }
      *(uint32_t *)(arg1 + 0x7d4) = 0;
      iVar5 = 0;
    }
  }
  if (arg2 == (FlashLibraryInstance *)0x0) {
    lVar2 = (long)iVar5 * 0x58;
    if (*(uint *)(arg1 + 0xa4c) == 0xffffffff) {
      this_00 = *(FlashLibraryInstance **)
                 (*(long *)(self + lVar2 + 0x40) + (ulong)*(ushort *)(self + lVar2 + 0x58) * 8);
    }
    else {
      this_00 = *(FlashLibraryInstance **)
                 (*(long *)(self + lVar2 + 0x40) + (ulong)(*(uint *)(arg1 + 0xa4c) & 0xffff) * 8)
      ;
    }
    *(uint32_t *)(this_00 + 0x58) = *(uint32_t *)(arg1 + 0xa50);
    iVar5 = *(int *)(arg1 + 0x7d4);
  }
  bVar7 = (byte)arg1[0x7d8] & 1;
  if (((byte)arg1[0x7d8] & 1) == 0) {
    local_58 = DAT_005c07a4 /* R:-1.0f */;
    if (iVar5 != 10) goto LAB_00479ba0;
LAB_00479d7e:
    if (bVar7 == 0) {
      local_58 = 1.0;
      goto LAB_00479ba0;
    }
    local_58 = -1.0;
    local_ac = -1.0;
  }
  else {
    local_58 = DAT_005be894 /* R:1.0f */;
    if (iVar5 == 10) goto LAB_00479d7e;
LAB_00479ba0:
    if (iVar5 - 0x12U < 2) {
      local_58 = (float)((uint)local_58 ^ DAT_005be6f0 /* R:u32=2147483648 */);
    }
    local_ac = local_58;
    if (iVar5 - 0x14U < 2) {
      if (bVar7 == 0) {
        local_ac = DAT_005c07a4 /* R:-1.0f */;
        if ((*(ushort *)(arg1 + 0x7da) & 0x7ff) == 1) {
          local_ac = 1.0;
        }
      }
      else {
        local_ac = 1.0;
        if ((*(ushort *)(arg1 + 0x7da) & 0x7ff) == 0) {
          local_ac = DAT_005c07a4 /* R:-1.0f */;
        }
      }
    }
  }
  local_54 = 0x3f800000;
  if (((((byte)arg1[0x7d9] & 2) == 0) || (iVar5 == 0x15)) || (iVar5 == 0x14)) {
    *(uint32_t *)(arg1 + 0xd8) = 0;
    Vector2__operator_mul_assign__005be220((Vector2 *)&local_58,(Vector2 *)(arg1 + (long)iVar5 * 8 + 0x8d4));
  }
  else if ((*(ushort *)(arg1 + 0x7da) & 0x7ff) == 0) {
    Matrix4x4__ConvertToRotationMatrix(local_98,DAT_005c07ac /* R:0.7853981852531433f */);
    Matrix4x4__TransformVector2
              ((Vector2 *)&local_58,
               (Vector2 *)(arg1 + (long)*(int *)(arg1 + 0x7d4) * 8 + 0x8d4),local_98,1);
    *(uint32_t *)(arg1 + 0xd8) = 0xbf490fdb;
  }
  else {
    Matrix4x4__ConvertToRotationMatrix(local_98,DAT_005c07a8 /* R:-0.7853981852531433f */);
    Matrix4x4__TransformVector2
              ((Vector2 *)&local_58,
               (Vector2 *)(arg1 + (long)*(int *)(arg1 + 0x7d4) * 8 + 0x8d4),local_98,1);
    *(uint32_t *)(arg1 + 0xd8) = 0x3f490fdb;
  }
  if (0.0 < *(float *)(arg1 + 0x8c4)) {
    local_54 = local_54 ^ DAT_005be6f0 /* R:u32=2147483648 */;
  }
  Vector2__operator_plus__005be140(local_48,(Vector2 *)(arg1 + 0x868));
  Vector2__operator_assign((Vector2 *)(this_00 + 0x30),local_48);
  Vector2__operator_assign((Vector2 *)(this_00 + 0x40),(Vector2 *)(arg1 + 0xd0));
  *(float *)(this_00 + 0x40) = local_ac * *(float *)(this_00 + 0x40);
  if (*(float *)(arg1 + 0x8c4) <= 0.0) {
    *(uint32_t *)(this_00 + 0x44) = *(uint32_t *)(arg1 + 0xd4);
  }
  else {
    *(uint *)(this_00 + 0x44) = *(uint *)(arg1 + 0xd4) ^ DAT_005be6f0 /* R:u32=2147483648 */;
  }
  *(uint32_t *)(this_00 + 0x48) = *(uint32_t *)(arg1 + 0xd8);
  *(uint32_t *)(this_00 + 0x4c) = *(uint32_t *)(arg1 + 0xd8);
  RegisterAudioPosition((FPUVector *)(arg1 + 0x870));
  (**(code **)(*(long *)this_00 + 0x10))(this_00);
  *(uint32_t *)(arg1 + 0xa50) = *(uint32_t *)(this_00 + 0x58);
  if (!bVar4) goto LAB_00479cce;
  iVar5 = *(int *)(arg1 + 0x7d4);
  if (iVar5 == 10) {
    iVar5 = FlashLibraryInstance__IsPlaying(this_00);
    if (iVar5 == 0) {
      FlashLibraryInstance__Reset(this_00);
      iVar5 = 5 - (uint)(((byte)arg1[0x7d8] & 0x40) == 0);
      if (*(int *)(arg1 + 0x7d4) != iVar5) {
        arg1[0x7db] = (MeatBoyCharactor)((byte)arg1[0x7db] | 8);
        uVar6 = 0;
        lVar2 = *(long *)(arg1 + 0xf8) + (long)iVar5 * 0x58;
        uVar1 = *(ushort *)(lVar2 + 0x30);
        if (uVar1 != 0) {
          uVar6 = GetRandomINT(0,uVar1 - 1);
        }
        *(uint32_t *)(lVar2 + 0x58) = uVar6;
        *(uint32_t *)(arg1 + 0xa4c) = uVar6;
        *(uint32_t *)(arg1 + 0xa50) = 0;
      }
      *(int *)(arg1 + 0x7d4) = iVar5;
      goto LAB_00479cce;
    }
    iVar5 = *(int *)(arg1 + 0x7d4);
  }
  if (iVar5 - 0xbU < 2) {
    iVar5 = FlashLibraryInstance__IsPlaying(this_00);
    if (iVar5 != 0) {
      iVar5 = *(int *)(arg1 + 0x7d4);
      goto LAB_00479e6b;
    }
    FlashLibraryInstance__Reset(this_00);
    if (0.0 < *(float *)(arg1 + 0xbc)) {
LAB_0047a1b0:
      if (*(int *)(arg1 + 0x7d4) != 6) {
        lVar2 = *(long *)(arg1 + 0xf8);
        arg1[0x7db] = (MeatBoyCharactor)((byte)arg1[0x7db] | 8);
        uVar6 = 0;
        uVar1 = *(ushort *)(lVar2 + 0x240);
        if (uVar1 != 0) {
          uVar6 = GetRandomINT(0,uVar1 - 1);
        }
        *(uint32_t *)(lVar2 + 0x268) = uVar6;
        *(uint32_t *)(arg1 + 0xa4c) = uVar6;
        *(uint32_t *)(arg1 + 0xa50) = 0;
      }
      *(uint32_t *)(arg1 + 0x7d4) = 6;
      goto LAB_00479cce;
    }
LAB_0047a224:
    iVar5 = *(int *)(arg1 + 0x7d4);
  }
  else {
LAB_00479e6b:
    if (iVar5 != 7) {
LAB_00479e74:
      if (iVar5 == 0xb) {
        iVar5 = FlashLibraryInstance__IsPlaying(this_00);
        if (iVar5 == 0) goto LAB_0047a1b0;
        iVar5 = *(int *)(arg1 + 0x7d4);
      }
      if (iVar5 == 0xc) {
        iVar5 = FlashLibraryInstance__IsPlaying(this_00);
        if (iVar5 == 0) goto LAB_0047a224;
        iVar5 = *(int *)(arg1 + 0x7d4);
      }
      if ((iVar5 == 0xf) && (iVar5 = FlashLibraryInstance__IsPlaying(this_00), iVar5 == 0)) {
        if (*(int *)(arg1 + 0x7d4) != 0) {
          lVar2 = *(long *)(arg1 + 0xf8);
          arg1[0x7db] = (MeatBoyCharactor)((byte)arg1[0x7db] | 8);
          uVar1 = *(ushort *)(lVar2 + 0x30);
          uVar6 = 0;
          if (uVar1 != 0) {
            uVar6 = GetRandomINT(0,uVar1 - 1);
          }
          *(uint32_t *)(lVar2 + 0x58) = uVar6;
          *(uint32_t *)(arg1 + 0xa4c) = uVar6;
          *(uint32_t *)(arg1 + 0xa50) = 0;
        }
        *(uint32_t *)(arg1 + 0x7d4) = 0;
      }
      goto LAB_00479cce;
    }
    iVar5 = FlashLibraryInstance__IsPlaying(this_00);
    if (iVar5 != 0) {
      iVar5 = *(int *)(arg1 + 0x7d4);
      goto LAB_00479e74;
    }
    FlashLibraryInstance__Reset(this_00);
    iVar5 = *(int *)(arg1 + 0x7d4);
  }
  if (iVar5 != 8) {
    lVar2 = *(long *)(arg1 + 0xf8);
    arg1[0x7db] = (MeatBoyCharactor)((byte)arg1[0x7db] | 8);
    uVar6 = 0;
    uVar1 = *(ushort *)(lVar2 + 0x2f0);
    if (uVar1 != 0) {
      uVar6 = GetRandomINT(0,uVar1 - 1);
    }
    *(uint32_t *)(lVar2 + 0x318) = uVar6;
    *(uint32_t *)(arg1 + 0xa4c) = uVar6;
    *(uint32_t *)(arg1 + 0xa50) = 0;
  }
  *(uint32_t *)(arg1 + 0x7d4) = 8;
LAB_00479cce:
  MeatBoyCharactor__RenderEffects(arg1);
  return;
}
