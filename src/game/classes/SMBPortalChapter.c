/* src/game/classes/SMBPortalChapter.c — 3 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "SMBPortalChapter.h"

/* ======================================================================
 * SMBPortalChapter__SMBPortalChapter  (Ghidra `SMBPortalChapter` @ 00506250)
 * Signature: uint8_t __thiscall SMBPortalChapter(SMBPortalChapter * self)
 * Class: SMBPortalChapter
 * Calls: (none)
 * Called by: (none)
 */
/* SMBPortalChapter__SMBPortalChapter() */

void __thiscall SMBPortalChapter__SMBPortalChapter(SMBPortalChapter *self)

{
  ulong uVar1;
  int iVar2;
  uint uVar3;
  bool bVar5;
  ulong uVar4;
  
  bVar5 = ((ulong)self & 1) != 0;
  *(uint64_t *)(self + 0xa0) = 0;
  *(uint32_t *)(self + 0xa8) = 0xffffffff;
  uVar4 = 0xa0;
  iVar2 = 0xa0;
  if (bVar5) {
    *self = (SMBPortalChapter)0x0;
    self = self + 1;
    uVar4 = 0x9f;
    iVar2 = 0x9f;
  }
  if (((ulong)self & 2) == 0) {
    uVar3 = (uint)uVar4;
  }
  else {
    *(uint16_t *)self = 0;
    self = self + 2;
    uVar3 = iVar2 - 2;
    uVar4 = (ulong)uVar3;
  }
  if (((ulong)self & 4) != 0) {
    *(uint32_t *)self = 0;
    uVar4 = (ulong)(uVar3 - 4);
    self = self + 4;
  }
  for (uVar1 = uVar4 >> 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(uint64_t *)self = 0;
    self = self + 8;
  }
  if ((uVar4 & 4) != 0) {
    *(uint32_t *)self = 0;
    self = self + 4;
  }
  if ((uVar4 & 2) != 0) {
    *(uint16_t *)self = 0;
    self = self + 2;
  }
  if (bVar5) {
    *self = (SMBPortalChapter)0x0;
  }
  return;
}

/* ======================================================================
 * SMBPortalChapter__SMBPortalChapter__005062f0  (Ghidra `~SMBPortalChapter` @ 005062f0)
 * Signature: uint8_t __thiscall ~SMBPortalChapter(SMBPortalChapter * self)
 * Class: SMBPortalChapter
 * Calls: `free`, `operator_delete`
 * Called by: (none)
 */
/* SMBPortalChapter__SMBPortalChapter__005062f0() */

void __thiscall SMBPortalChapter__SMBPortalChapter__005062f0(SMBPortalChapter *self)

{
  uint64_t *puVar1;
  long lVar2;
  
  lVar2 = 0;
  do {
    puVar1 = *(uint64_t **)(self + lVar2);
    if (puVar1 != (uint64_t *)0x0) {
      if ((void *)puVar1[1] != (void *)0x0) {
        free((void *)puVar1[1]);
        if (puVar1[1] != 0) {
          free((void *)*puVar1);
        }
      }
      operator_delete(puVar1);
    }
    *(uint64_t *)(self + lVar2) = 0;
    lVar2 = lVar2 + 8;
  } while (lVar2 != 0xa0);
  if (*(void **)(self + 0xa0) != (void *)0x0) {
    free(*(void **)(self + 0xa0));
    return;
  }
  return;
}

/* ======================================================================
 * SMBPortalChapter__OrderByDifficulty  (Ghidra `OrderByDifficulty` @ 00506370)
 * Signature: uint8_t __stdcall OrderByDifficulty(void)
 * Class: SMBPortalChapter
 * Calls: (none)
 * Called by: (none)
 */
/* SMBPortalChapter__OrderByDifficulty() */

void SMBPortalChapter__OrderByDifficulty(void)

{
  SMBPortalLevel **ppSVar1;
  SMBPortalLevel *pSVar2;
  SMBPortalLevel **ppSVar3;
  _func_bool_SMBPortalLevel_ptr_SMBPortalLevel_ptr *in_RCX;
  SMBPortalLevel **ppSVar4;
  _func_bool_SMBPortalLevel_ptr_SMBPortalLevel_ptr *extraout_RDX;
  SMBPortalLevel *pSVar5;
  SMBPortalLevel **in_RDI;
  SMBPortalLevel **ppSVar6;
  
  ppSVar6 = in_RDI + 0x10;
  ppSVar1 = in_RDI + 0x13;
  std__introsort_loop_SMBPortalLevel,long,bool(*)(SMBPortalLevel*,SMBPortalLevel*)>
            (in_RDI,ppSVar1,8,in_RCX);
  std__insertion_sort_SMBPortalLevel,bool(*)(SMBPortalLevel*,SMBPortalLevel*)>
            (in_RDI,ppSVar6,extraout_RDX);
  do {
    if (ppSVar1 == ppSVar6) {
      return;
    }
    while( true ) {
      pSVar5 = ppSVar6[-1];
      pSVar2 = *ppSVar6;
      ppSVar4 = ppSVar6;
      if (*(float *)(pSVar2 + 0x74) <= *(float *)(pSVar5 + 0x74) &&
          *(float *)(pSVar5 + 0x74) != *(float *)(pSVar2 + 0x74)) break;
      ppSVar4 = ppSVar6 + 1;
      *ppSVar6 = pSVar2;
      ppSVar6 = ppSVar4;
      if (ppSVar1 == ppSVar4) {
        return;
      }
    }
    do {
      ppSVar3 = ppSVar4 + -1;
      *ppSVar4 = pSVar5;
      pSVar5 = ppSVar4[-2];
      ppSVar4 = ppSVar3;
    } while (*(float *)(pSVar2 + 0x74) <= *(float *)(pSVar5 + 0x74) &&
             *(float *)(pSVar5 + 0x74) != *(float *)(pSVar2 + 0x74));
    ppSVar6 = ppSVar6 + 1;
    *ppSVar3 = pSVar2;
  } while( true );
}
