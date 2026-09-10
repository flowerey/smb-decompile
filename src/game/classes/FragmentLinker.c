/* src/game/classes/FragmentLinker.c — 10 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "FragmentLinker.h"

/* ======================================================================
 * FragmentLinker__FragmentLinker  (Ghidra `~FragmentLinker` @ 00586670)
 * Signature: uint8_t __thiscall ~FragmentLinker(FragmentLinker * self)
 * Class: FragmentLinker
 * Calls: `CriticalSection__CriticalSection__005b71d0`, `free`, `operator_delete`
 * Called by: (none)
 */
/* WARNING: Removing unreachable block (ram,0x00586837) */
/* WARNING: Removing unreachable block (ram,0x0058682c) */
/* FragmentLinker__FragmentLinker() */

void __thiscall FragmentLinker__FragmentLinker(FragmentLinker *self)

{
  allocator *paVar1;
  int *piVar2;
  int iVar3;

  if (*(int *)(self + 0x9c0) == -0x5eef3582) {
    *(uint32_t *)(self + 0x9c0) = 0;
    free(*(void **)(*(long *)(self + 0x9b0) + -8));
    if (*(int *)(self + 0x9a8) == 1) {
      free(*(void **)(*(long *)(self + 0x9b8) + -8));
    }
    *(uint32_t *)(self + 0x9c0) = 0;
    *(uint16_t *)(self + 0x9a2) = 0;
    *(uint16_t *)(self + 0x9a0) = 0;
    *(uint64_t *)(self + 0x9b0) = 0;
    *(uint64_t *)(self + 0x9b8) = 0;
  }
  if (*(void **)(self + 0x968) != (void *)0x0) {
    operator_delete(*(void **)(self + 0x968));
  }
  *(uint64_t *)(self + 0x968) = 0;
  paVar1 = (allocator *)(*(long *)(self + 0x9d8) + -0x18);
  if (paVar1 != (allocator *)&std__string_Rep_S_empty_rep_storage) {
    LOCK();
    piVar2 = (int *)(*(long *)(self + 0x9d8) + -8);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 < 1) {
      std__string_Rep_M_destroy(paVar1);
    }
  }
  paVar1 = (allocator *)(*(long *)(self + 0x9d0) + -0x18);
  if (paVar1 != (allocator *)&std__string_Rep_S_empty_rep_storage) {
    LOCK();
    piVar2 = (int *)(*(long *)(self + 0x9d0) + -8);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 < 1) {
      std__string_Rep_M_destroy(paVar1);
    }
  }
  if (*(int *)(self + 0x9c0) == -0x5eef3582) {
    *(uint32_t *)(self + 0x9c0) = 0;
    free(*(void **)(*(long *)(self + 0x9b0) + -8));
    if (*(int *)(self + 0x9a8) == 1) {
      free(*(void **)(*(long *)(self + 0x9b8) + -8));
    }
    *(uint32_t *)(self + 0x9c0) = 0;
    *(uint16_t *)(self + 0x9a2) = 0;
    *(uint16_t *)(self + 0x9a0) = 0;
    *(uint64_t *)(self + 0x9b0) = 0;
    *(uint64_t *)(self + 0x9b8) = 0;
  }
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)(self + 0x978));
  return;
}

/* ======================================================================
 * FragmentLinker__WriteCacheFile  (Ghidra `WriteCacheFile` @ 00586850)
 * Signature: uint8_t __stdcall WriteCacheFile(void)
 * Class: FragmentLinker
 * Calls: (none)
 * Called by: (none)
 */
/* FragmentLinker__WriteCacheFile() */

void FragmentLinker__WriteCacheFile(void)

{
  return;
}

/* ======================================================================
 * FragmentLinker__ResetFragments  (Ghidra `ResetFragments` @ 00586860)
 * Signature: uint8_t __thiscall ResetFragments(FragmentLinker * self)
 * Class: FragmentLinker
 * Calls: (none)
 * Called by: `gfxDraw`
 */
/* FragmentLinker__ResetFragments() */

void __thiscall FragmentLinker__ResetFragments(FragmentLinker *self)

{
  *(uint32_t *)(self + 0x960) = 0xffffffff;
  *(uint32_t *)(self + 0x9c8) = 0;
  return;
}

/* ======================================================================
 * FragmentLinker__AddFragment  (Ghidra `AddFragment` @ 00586880)
 * Signature: uint8_t __thiscall AddFragment(FragmentLinker * self, ShaderFragment * arg1)
 * Class: FragmentLinker
 * Calls: `FragmentLinker__AddFragment__00586940`
 * Called by: (none)
 */
/* FragmentLinker__AddFragment__00586940(ShaderFragment const&) */

void __thiscall FragmentLinker__AddFragment__00586940(FragmentLinker *self, ShaderFragment *arg1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ShaderFragment *pSVar5;
  int iVar6;
  long lVar7;
  FragmentLinker *pFVar8;

  iVar4 = *(int *)(self + 0x960);
  iVar6 = *(int *)arg1;
  iVar1 = iVar4 + 1;
  *(int *)(self + 0x960) = iVar1;
  pFVar8 = self + (long)iVar1 * 0x30;
  *(int *)pFVar8 = iVar6;
  *(uint32_t *)(self + (long)(iVar4 + 2) * 0x30) = 0;
  *(uint32_t *)(self + (long)(iVar4 + 2) * 0x30 + 4) = 0xffffffff;
  *(int *)(pFVar8 + 8) = 0;
  *(int *)(pFVar8 + 4) = 0;
  iVar4 = iVar6 + *(int *)(self + 0x9c8) + (int)pFVar8;
  *(int *)(self + 0x9c8) = iVar4;
  if (0 < *(int *)(arg1 + 4)) {
    iVar6 = 0;
    pSVar5 = arg1;
    do {
      iVar2 = *(int *)(pFVar8 + 4);
      iVar3 = *(int *)(pSVar5 + 8);
      iVar6 = iVar6 + 1;
      pSVar5 = pSVar5 + 4;
      lVar7 = (long)iVar2 + (long)iVar1 * 0xc;
      *(int *)(self + lVar7 * 4 + 8) = iVar3;
      *(int *)(pFVar8 + 4) = iVar2 + 1;
      iVar4 = iVar4 + iVar3 + (int)self + 8 + (int)lVar7 * 4;
      *(int *)(self + 0x9c8) = iVar4;
    } while (iVar6 < *(int *)(arg1 + 4));
  }
  return;
}

/* ======================================================================
 * FragmentLinker__AddFragment__00586940  (Ghidra `AddFragment` @ 00586940)
 * Signature: uint8_t __thiscall AddFragment(FragmentLinker * self, int arg1)
 * Class: FragmentLinker
 * Calls: (none)
 * Called by: `FragmentLinker__AddFragment`, `gfxDraw`
 */
/* FragmentLinker__AddFragment__00586940(int) */

void __thiscall FragmentLinker__AddFragment__00586940(FragmentLinker *self, int arg1)

{
  int iVar1;
  int iVar2;
  FragmentLinker *pFVar3;

  iVar2 = *(int *)(self + 0x960);
  iVar1 = iVar2 + 1;
  *(int *)(self + 0x960) = iVar1;
  pFVar3 = self + (long)iVar1 * 0x30;
  *(int *)pFVar3 = arg1;
  *(uint32_t *)(self + (long)(iVar2 + 2) * 0x30) = 0;
  *(uint32_t *)(self + (long)(iVar2 + 2) * 0x30 + 4) = 0xffffffff;
  *(int *)(pFVar3 + 8) = 0;
  *(int *)(pFVar3 + 4) = 0;
  *(int *)(self + 0x9c8) = arg1 + (int)pFVar3 + *(int *)(self + 0x9c8);
  return;
}

/* ======================================================================
 * FragmentLinker__AddParam  (Ghidra `AddParam` @ 005869a0)
 * Signature: uint8_t __thiscall AddParam(FragmentLinker * self, int arg1)
 * Class: FragmentLinker
 * Calls: (none)
 * Called by: (none)
 */
/* FragmentLinker__AddParam(int) */

void __thiscall FragmentLinker__AddParam(FragmentLinker *self, int arg1)

{
  long lVar1;
  int iVar2;
  long lVar3;

  lVar3 = (long)*(int *)(self + 0x960);
  iVar2 = *(int *)(self + lVar3 * 0x30 + 4);
  lVar1 = (long)iVar2 + lVar3 * 0xc;
  *(int *)(self + lVar1 * 4 + 8) = arg1;
  *(int *)(self + lVar3 * 0x30 + 4) = iVar2 + 1;
  *(int *)(self + 0x9c8) = arg1 + (int)self + 8 + (int)lVar1 * 4 + *(int *)(self + 0x9c8);
  return;
}

/* ======================================================================
 * FragmentLinker__CompileFragments  (Ghidra `CompileFragments` @ 005869e0)
 * Signature: uint8_t __thiscall CompileFragments(FragmentLinker * self)
 * Class: FragmentLinker
 * Calls: `strlen`
 * Called by: (none)
 */
/* FragmentLinker__CompileFragments() */

void __thiscall FragmentLinker__CompileFragments(FragmentLinker *self)

{
  ulong uVar1;
  string *psVar2;
  uint8_t *puVar3;
  int *piVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  FragmentLinker *pFVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  FragmentLinker *pFVar13;
  FragmentLinker *local_48;
  int local_3c;

  psVar2 = (string *)(self + 0x9d8);
  std__string_assign(psVar2);
  std__string_append((char *)psVar2, 0x5dc114);
  iVar10 = *(int *)(self + 0x960);
  *(int *)(self + 0xa08) = *(int *)(self + 0xa08) + 1;
  if (-1 < iVar10) {
    pFVar13 = self + 4;
    local_3c = 0;
    iVar11 = 0;
    do {
      iVar12 = *(int *)pFVar13;
      if (0 < iVar12) {
        iVar10 = 0;
        pFVar8 = self + (long)local_3c * 0x30 + 8;
        do {
          iVar6 = *(int *)(self + 0xa08);
          piVar4 = (int *)((long)*(int *)pFVar8 * 4 + *(long *)(self + 0xa00));
          if (*piVar4 != iVar6) {
            pcVar9 = *(char **)(*(long *)(self + 0x9e8) + (long)*(int *)pFVar8 * 8);
            if (pcVar9 != (char *)0x0) {
              if (*(int *)(self + 0x9e0) == 1) {
                if (iVar11 != 0) {
                  std__string_append((char *)psVar2, 0x5ca6b5);
                }
                strlen(pcVar9);
                std__string_append((char *)psVar2, (ulong)pcVar9);
                iVar11 = iVar11 + 1;
                iVar6 = *(int *)(self + 0xa08);
                piVar4 = (int *)(*(long *)(self + 0xa00) + (long)*(int *)pFVar8 * 4);
              } else if (*(int *)(self + 0x9e0) == 0) {
                strlen(pcVar9);
                std__string_append((char *)psVar2, (ulong)pcVar9);
                std__string_append((char *)psVar2, 0x5ca6b5);
                iVar6 = *(int *)(self + 0xa08);
                piVar4 = (int *)(*(long *)(self + 0xa00) + (long)*(int *)pFVar8 * 4);
              }
            }
            *piVar4 = iVar6;
            iVar12 = *(int *)pFVar13;
          }
          iVar10 = iVar10 + 1;
          pFVar8 = pFVar8 + 4;
        } while (iVar10 < iVar12);
        iVar10 = *(int *)(self + 0x960);
      }
      local_3c = local_3c + 1;
      pFVar13 = pFVar13 + 0x30;
    } while (local_3c <= iVar10);
  }
  if (*(int *)(self + 0x9e0) == 0) {
    std__string_append((char *)psVar2, 0x5dc750);
  } else {
    std__string_append((char *)psVar2, 0x5dc124);
  }
  iVar10 = *(int *)(self + 0x960);
  if (-1 < iVar10) {
    local_3c = 0;
    local_48 = self;
    do {
      pcVar9 = *(char **)(*(long *)(self + 0x9f0) + (long)*(int *)local_48 * 8);
      if (pcVar9 != (char *)0x0) {
        strlen(pcVar9);
        std__string_append((char *)psVar2, (ulong)pcVar9);
        lVar5 = *(long *)(self + 0x9d8);
        lVar7 = *(long *)(lVar5 + -0x18);
        uVar1 = lVar7 + 1;
        if ((*(ulong *)(lVar5 + -0x10) < uVar1) || (0 < *(int *)(lVar5 + -8))) {
          std__string_reserve((ulong)psVar2);
          lVar5 = *(long *)(self + 0x9d8);
          lVar7 = *(long *)(lVar5 + -0x18);
        }
        *(uint8_t *)(lVar5 + lVar7) = 0x28;
        puVar3 = *(uint8_t **)(self + 0x9d8);
        if (puVar3 != &DAT_008184c8 /* R:0.00016803004837129265f */) {
          *(uint32_t *)(puVar3 + -8) = 0;
          *(ulong *)(puVar3 + -0x18) = uVar1;
          puVar3[uVar1] = 0;
        }
        iVar10 = *(int *)(local_48 + 4);
        if (0 < iVar10) {
          iVar11 = 0;
          iVar12 = 0;
          pFVar13 = self + (long)local_3c * 0x30 + 8;
          do {
            pcVar9 = *(char **)(*(long *)(self + 0x9f8) + (long)*(int *)pFVar13 * 8);
            if (pcVar9 != (char *)0x0) {
              if (iVar12 != 0) {
                std__string_append((char *)psVar2, 0x5ca6b5);
              }
              iVar12 = iVar12 + 1;
              strlen(pcVar9);
              std__string_append((char *)psVar2, (ulong)pcVar9);
              iVar10 = *(int *)(local_48 + 4);
            }
            iVar11 = iVar11 + 1;
            pFVar13 = pFVar13 + 4;
          } while (iVar11 < iVar10);
        }
        std__string_append((char *)psVar2, 0x5dc129);
        iVar10 = *(int *)(self + 0x960);
      }
      local_3c = local_3c + 1;
      local_48 = local_48 + 0x30;
    } while (local_3c <= iVar10);
  }
  pcVar9 = "cFinalColor = cFinal;\n}\n";
  if (*(int *)(self + 0x9e0) != 0) {
    pcVar9 = "\n}\n";
  }
  std__string_append((char *)psVar2, (ulong)pcVar9);
  return;
}

/* ======================================================================
 * FragmentLinker__CreateFromCache  (Ghidra `CreateFromCache` @ 005871e0)
 * Signature: uint8_t __thiscall CreateFromCache(FragmentLinker * self)
 * Class: FragmentLinker
 * Calls: `File__File`, `File__File__005b7a70`, `File__ReadVariable`
 * Called by: (none)
 */
/* FragmentLinker__CreateFromCache() */

void __thiscall FragmentLinker__CreateFromCache(FragmentLinker *self)

{
  long lVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  FragmentLinker *pFVar5;
  long lVar6;
  int iVar7;
  char *local_a8;
  uint8_t *local_a0;
  uint32_t local_98;
  uint64_t local_90;
  uint32_t local_88;
  uint32_t local_84;
  uint32_t local_80;
  uint32_t local_7c;
  uint32_t local_78;
  uint32_t local_74;
  uint8_t *local_70;
  File local_68[48];
  int local_38[4];
  int local_28[2];
  int local_20;
  int local_1c;

  local_a8 = "pixel.cache";
  local_98 = 2;
  local_90 = 0;
  local_88 = 0;
  local_84 = 1;
  local_80 = 1;
  if (*(int *)(self + 0x9e0) != 0) {
    local_a8 = "vertex.cache";
  }
  local_7c = 0;
  local_78 = 0;
  local_74 = 0;
  local_70 = &DAT_005c04cf /* R:7.374579797039071e-39f */;
  local_a0 = &DAT_005c328c /* R:u32=1811964530 */;
  iVar3 = File__Exists(local_a8, 0);
  if (iVar3 != 1) {
    return;
  }
  *(uint32_t *)(self + 0x9cc) = 0;
  File__File(local_68, (tagFileCreation *)&local_a8);
  local_38[0] = 0;
  /* try { // try from 005872a1 to 00587442 has its CatchHandler @ 005874b5 */
  File__ReadVariable(local_68, local_38, 4);
  if (0 < local_38[0]) {
    iVar3 = 0;
    do {
      while (true) {
        local_28[0] = 0;
        File__ReadVariable(local_68, local_28, 4);
        if (local_28[0] == -1)
          break;
        local_20 = 0;
        File__ReadVariable(local_68, &local_20, 4);
        iVar4 = *(int *)(self + 0x960);
        iVar7 = iVar4 + 1;
        *(int *)(self + 0x960) = iVar7;
        pFVar5 = self + (long)iVar7 * 0x30;
        *(int *)pFVar5 = local_20;
        *(uint32_t *)(self + (long)(iVar4 + 2) * 0x30) = 0;
        *(uint32_t *)(self + (long)(iVar4 + 2) * 0x30 + 4) = 0xffffffff;
        *(uint32_t *)(pFVar5 + 8) = 0;
        *(uint32_t *)(pFVar5 + 4) = 0;
        *(int *)(self + 0x9c8) = (int)pFVar5 + local_20 + *(int *)(self + 0x9c8);
        if (0 < local_28[0]) {
          iVar7 = 0;
          do {
            local_1c = 0;
            File__ReadVariable(local_68, &local_1c, 4);
            lVar6 = (long)*(int *)(self + 0x960);
            iVar7 = iVar7 + 1;
            iVar4 = *(int *)(self + lVar6 * 0x30 + 4);
            lVar1 = (long)iVar4 + lVar6 * 0xc;
            *(int *)(self + lVar1 * 4 + 8) = local_1c;
            *(int *)(self + lVar6 * 0x30 + 4) = iVar4 + 1;
            *(int *)(self + 0x9c8) =
                local_1c + *(int *)(self + 0x9c8) + (int)self + 8 + (int)lVar1 * 4;
          } while (iVar7 < local_28[0]);
        }
      }
      uVar2 = *(ushort *)(self + 0x9a0);
      if (*(int *)(self + 0x9e0) == 0) {
        if (uVar2 == 0)
          goto LAB_0058743b;
        iVar4 = 0;
        iVar7 = **(int **)(self + 0x9b0);
        while (iVar7 != *(int *)(self + 0x9c8)) {
          iVar4 = iVar4 + 1;
          if ((int)(uint)uVar2 <= iVar4)
            goto LAB_0058743b;
          iVar7 = (*(int **)(self + 0x9b0))[(ulong)(ushort)iVar4 * 4];
        }
      } else if (uVar2 == 0) {
      LAB_0058743b:
        GetShader(self);
      } else {
        iVar4 = 0;
        iVar7 = **(int **)(self + 0x9b0);
        while (iVar7 != *(int *)(self + 0x9c8)) {
          iVar4 = iVar4 + 1;
          if ((int)(uint)uVar2 <= iVar4)
            goto LAB_0058743b;
          iVar7 = (*(int **)(self + 0x9b0))[(ulong)(ushort)iVar4 * 4];
        }
      }
      iVar3 = iVar3 + 1;
      *(uint32_t *)(self + 0x960) = 0xffffffff;
      *(uint32_t *)(self + 0x9c8) = 0;
    } while (iVar3 < local_38[0]);
  }
  File__File__005b7a70(local_68);
  return;
}

/* ======================================================================
 * FragmentLinker__ResetCache  (Ghidra `ResetCache` @ 005874d0)
 * Signature: uint8_t __thiscall ResetCache(FragmentLinker * self)
 * Class: FragmentLinker
 * Calls: (none)
 * Called by: `CreateEngineShaders`
 */
/* FragmentLinker__ResetCache() */

void __thiscall FragmentLinker__ResetCache(FragmentLinker *self)

{
  ushort uVar1;
  long lVar2;

  *(uint16_t *)(self + 0x9a0) = 0;
  if ((*(int *)(self + 0x9a8) == 1) && (uVar1 = *(ushort *)(self + 0x9a2), uVar1 != 0)) {
    lVar2 = 0;
    do {
      *(uint16_t *)(*(long *)(self + 0x9b8) + lVar2) = 0xffff;
      lVar2 = lVar2 + 2;
    } while (lVar2 != (ulong)(uVar1 - 1 & 0xffff) * 2 + 2);
    CreateFromCache(self);
    return;
  }
  CreateFromCache(self);
  return;
}

/* ======================================================================
 * FragmentLinker__FragmentLinker__00587530  (Ghidra `FragmentLinker` @ 00587530)
 * Signature: uint8_t __thiscall FragmentLinker(FragmentLinker * self, FragmentLinkerCreation * arg1)
 * Class: FragmentLinker
 * Calls: `CriticalSection__CriticalSection`, `File__File`, `File__File__005b7a70`, `File__Read`, `free`, `malloc`, `std__string_string`, `strlen`
 * Called by: `CreateEngineShaders`
 */
/* WARNING: Removing unreachable block (ram,0x00587a96) */
/* FragmentLinker__FragmentLinker__00587530(FragmentLinkerCreation const*) */

void __thiscall FragmentLinker__FragmentLinker__00587530(FragmentLinker *self,
                                                         FragmentLinkerCreation *arg1)

{
  ulong uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  char *__s;
  uint8_t *puVar5;
  FragmentLinker *pFVar6;
  uint *__ptr;
  long lVar7;
  uint *puVar8;
  long lVar9;
  uint64_t *puVar10;
  byte bVar11;
  char *local_128;
  uint8_t *local_120;
  uint32_t local_118;
  uint64_t local_110;
  uint32_t local_108;
  uint32_t local_104;
  uint32_t local_100;
  uint32_t local_fc;
  uint32_t local_f8;
  uint32_t local_f4;
  uint8_t *local_f0;
  long local_e8;
  uint8_t *local_e0;
  uint32_t local_d8;
  uint64_t local_d0;
  uint32_t local_c8;
  uint32_t local_c4;
  uint32_t local_c0;
  uint32_t local_bc;
  uint32_t local_b8;
  uint32_t local_b4;
  uint8_t *local_b0;
  File local_a8[4];
  uint local_a4;
  File local_78[4];
  uint local_74;
  long local_48;
  allocator local_3a[10];

  bVar11 = 0;
  pFVar6 = self;
  do {
    *(uint32_t *)pFVar6 = 0;
    *(uint32_t *)(pFVar6 + 4) = 0;
    *(uint32_t *)(pFVar6 + 8) = 0;
    pFVar6 = pFVar6 + 0x30;
  } while (pFVar6 != self + 0x960);
  *(uint32_t *)(self + 0x960) = 0xffffffff;
  *(uint64_t *)(self + 0x968) = 0;
  *(uint32_t *)(self + 0x970) = 0;
  CriticalSection__CriticalSection((CriticalSection *)(self + 0x978));
  *(uint16_t *)(self + 0x9a2) = 0;
  *(uint16_t *)(self + 0x9a0) = 0;
  *(uint16_t *)(self + 0x9ac) = 1;
  *(uint64_t *)(self + 0x9b0) = 0;
  *(uint64_t *)(self + 0x9b8) = 0;
  *(uint32_t *)(self + 0x9c0) = 0;
  self[0x9a4] = (FragmentLinker)0x4;
  *(uint32_t *)(self + 0x9a8) = 0;
  *(uint32_t *)(self + 0x9c8) = 0;
  *(uint32_t *)(self + 0x9cc) = 1;
  *(uint8_t **)(self + 0x9d0) = &DAT_008184c8 /* R:0.00016803004837129265f */;
  *(uint8_t **)(self + 0x9d8) = &DAT_008184c8 /* R:0.00016803004837129265f */;
  *(uint32_t *)(self + 0xa08) = 0;
  local_118 = 2;
  local_110 = 0;
  local_108 = 0;
  local_104 = 1;
  local_100 = 1;
  local_fc = 0;
  local_f8 = 0;
  local_f4 = 0;
  local_f0 = &DAT_005c04cf /* R:7.374579797039071e-39f */;
  local_128 = "resources/Shaders/ShaderMacros.h";
  local_120 = &DAT_005c328c /* R:u32=1811964530 */;
  /* try { // try from 00587693 to 00587697 has its CatchHandler @ 005879c0 */
  std__string_string((string *)&local_48, "resources/Shaders/", local_3a);
  __s = *(char **)arg1;
  strlen(__s);
  /* try { // try from 005876b2 to 005876b6 has its CatchHandler @ 00587b07 */
  std__string_append((char *)&local_48, (ulong)__s);
  local_d8 = 2;
  local_d0 = 0;
  pFVar6 = self + 0x9d0;
  local_c8 = 0;
  local_c4 = 1;
  local_c0 = 1;
  local_bc = 0;
  local_b8 = 0;
  local_b4 = 0;
  local_b0 = &DAT_005c04cf /* R:7.374579797039071e-39f */;
  local_e8 = local_48;
  local_e0 = &DAT_005c328c /* R:u32=1811964530 */;
  /* try { // try from 00587729 to 0058772d has its CatchHandler @ 00587b02 */
  File__File(local_a8, (tagFileCreation *)&local_128);
  /* try { // try from 0058773b to 0058773f has its CatchHandler @ 00587afd */
  File__File(local_78, (tagFileCreation *)&local_e8);
  uVar3 = local_a4;
  if (local_a4 <= local_74) {
    uVar3 = local_74;
  }
  __ptr = malloc((ulong)(uVar3 + 1));
  /* try { // try from 0058776f to 00587931 has its CatchHandler @ 00587ace */
  std__string_assign((char *)pFVar6, 0x5dc17c);
  File__Read(local_a8, __ptr, local_a4);
  *(uint8_t *)((long)__ptr + (ulong)local_a4) = 0;
  puVar8 = __ptr;
  do {
    uVar3 = *puVar8;
    puVar8 = puVar8 + 1;
  } while ((uVar3 + 0xfefefeff & ~uVar3 & 0x80808080) == 0);
  std__string_append((char *)pFVar6, (ulong)__ptr);
  lVar7 = *(long *)(self + 0x9d0);
  lVar9 = *(long *)(lVar7 + -0x18);
  uVar1 = lVar9 + 1;
  if ((*(ulong *)(lVar7 + -0x10) < uVar1) || (0 < *(int *)(lVar7 + -8))) {
    std__string_reserve((ulong)pFVar6);
    lVar7 = *(long *)(self + 0x9d0);
    lVar9 = *(long *)(lVar7 + -0x18);
  }
  *(uint8_t *)(lVar7 + lVar9) = 10;
  puVar5 = *(uint8_t **)(self + 0x9d0);
  if (puVar5 != &DAT_008184c8 /* R:0.00016803004837129265f */) {
    *(uint32_t *)(puVar5 + -8) = 0;
    *(ulong *)(puVar5 + -0x18) = uVar1;
    puVar5[uVar1] = 0;
  }
  File__Read(local_78, __ptr, local_74);
  *(uint8_t *)((long)__ptr + (ulong)local_74) = 0;
  puVar8 = __ptr;
  do {
    uVar3 = *puVar8;
    puVar8 = puVar8 + 1;
  } while ((uVar3 + 0xfefefeff & ~uVar3 & 0x80808080) == 0);
  std__string_append((char *)pFVar6, (ulong)__ptr);
  lVar7 = *(long *)(self + 0x9d0);
  lVar9 = *(long *)(lVar7 + -0x18);
  uVar1 = lVar9 + 1;
  if ((*(ulong *)(lVar7 + -0x10) < uVar1) || (0 < *(int *)(lVar7 + -8))) {
    std__string_reserve((ulong)pFVar6);
    lVar7 = *(long *)(self + 0x9d0);
    lVar9 = *(long *)(lVar7 + -0x18);
  }
  *(uint8_t *)(lVar7 + lVar9) = 10;
  puVar5 = *(uint8_t **)(self + 0x9d0);
  if (puVar5 != &DAT_008184c8 /* R:0.00016803004837129265f */) {
    *(uint32_t *)(puVar5 + -8) = 0;
    *(ulong *)(puVar5 + -0x18) = uVar1;
    puVar5[uVar1] = 0;
  }
  free(__ptr);
  iVar4 = *(int *)(arg1 + 8);
  *(int *)(self + 0x9e0) = iVar4;
  if (iVar4 == 0) {
    *(uint8_t **)(self + 0x9f0) = strPixelShaderFragmentLookup;
    *(uint8_t **)(self + 0x9f8) = strPixelShaderParamLookup;
    puVar10 = &pPixelDeclCounter;
    for (lVar7 = 0x11; lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar10 = 0;
      puVar10 = puVar10 + (ulong)bVar11 * -2 + 1;
    }
    *(uint8_t **)(self + 0x9e8) = strPixelShaderDeclLookup;
    *(uint64_t **)(self + 0xa00) = &pPixelDeclCounter;
  } else {
    *(uint8_t **)(self + 0x9f0) = strVertexShaderFragmentLookup;
    *(uint8_t **)(self + 0x9f8) = strVertexShaderParamLookup;
    puVar10 = &pVertexDeclCounter;
    for (lVar7 = 0x12; lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar10 = 0;
      puVar10 = puVar10 + (ulong)bVar11 * -2 + 1;
    }
    *(uint8_t **)(self + 0x9e8) = strVertexShaderDeclLookup;
    *(uint64_t **)(self + 0xa00) = &pVertexDeclCounter;
    *(uint32_t *)puVar10 = 0;
  }
  CreateFromCache(self);
  /* try { // try from 0058793a to 0058793e has its CatchHandler @ 00587afd */
  File__File__005b7a70(local_78);
  /* try { // try from 00587947 to 0058794b has its CatchHandler @ 00587b02 */
  File__File__005b7a70(local_a8);
  if ((allocator *)(local_48 + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage) {
    LOCK();
    piVar2 = (int *)(local_48 + -8);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 < 1) {
      std__string_Rep_M_destroy((allocator *)(local_48 + -0x18));
    }
  }
  return;
}
