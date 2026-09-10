/* src/game/classes/FlashSoundLibrary.c — 6 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "FlashSoundLibrary.h"

/* ======================================================================
 * FlashSoundLibrary__FlashSoundLibrary  (Ghidra `FlashSoundLibrary` @ 00575070)
 * Signature: uint8_t __thiscall FlashSoundLibrary(FlashSoundLibrary * self)
 * Class: FlashSoundLibrary
 * Calls: (none)
 * Called by: (none)
 */
/* FlashSoundLibrary__FlashSoundLibrary() */

void __thiscall FlashSoundLibrary__FlashSoundLibrary(FlashSoundLibrary *self)

{
  *(uint64_t *)self = 0;
  *(uint32_t *)(self + 8) = 0;
  *(uint32_t *)(self + 0xc) = 0xffffffff;
  *(uint64_t *)(self + 0x10) = 0;
  return;
}

/* ======================================================================
 * FlashSoundLibrary__FlashSoundLibrary__00575090  (Ghidra `~FlashSoundLibrary` @ 00575090)
 * Signature: uint8_t __thiscall ~FlashSoundLibrary(FlashSoundLibrary * self)
 * Class: FlashSoundLibrary
 * Calls: `CriticalSection__CriticalSection__005b71d0`, `TAudioCue__TAudioCue__0057ab30`, `TAudio__RemoveInstanceByLibraryID`, `free`, `operator_delete`
 * Called by: `FlashAnimationLibrary__FlashAnimationLibrary`
 */
/* FlashSoundLibrary__FlashSoundLibrary__00575090() */

void __thiscall FlashSoundLibrary__FlashSoundLibrary__00575090(FlashSoundLibrary *self)

{
  TAudioCue *this_00;
  CriticalSection *this_01;
  ushort uVar1;
  uint uVar2;
  ulong uVar3;
  CriticalSection *pCVar4;
  CriticalSection *pCVar5;
  long lVar6;
  int iVar7;
  
  iVar7 = 0;
  lVar6 = 0;
  TAudio__RemoveInstanceByLibraryID(Audio,*(uint *)(*(long *)(self + 0x10) + 0x88));
  pCVar5 = *(CriticalSection **)self;
  if (0 < *(int *)(self + 8)) {
    do {
      pCVar4 = pCVar5 + lVar6;
      uVar3 = 0;
      uVar1 = *(ushort *)(pCVar4 + 0x28);
      if (uVar1 != 0) {
        do {
          this_00 = *(TAudioCue **)(*(long *)(pCVar4 + 0x38) + (uVar3 & 0xffff) * 8);
          if (this_00 != (TAudioCue *)0x0) {
            TAudioCue__TAudioCue__0057ab30(this_00);
            operator_delete(this_00);
            pCVar5 = *(CriticalSection **)self;
            pCVar4 = pCVar5 + lVar6;
            uVar1 = *(ushort *)(pCVar4 + 0x28);
          }
          uVar2 = (int)uVar3 + 1;
          uVar3 = (ulong)uVar2;
        } while ((int)uVar2 < (int)(uint)uVar1);
      }
      if (*(int *)(pCVar4 + 0x48) == -0x5eef3582) {
        *(uint32_t *)(pCVar4 + 0x48) = 0;
        free(*(void **)(*(long *)(pCVar4 + 0x38) + -8));
        if (*(int *)(pCVar4 + 0x30) == 1) {
          free(*(void **)(*(long *)(pCVar4 + 0x40) + -8));
        }
        *(uint32_t *)(pCVar4 + 0x48) = 0;
        *(uint16_t *)(pCVar4 + 0x2a) = 0;
        *(uint16_t *)(pCVar4 + 0x28) = 0;
        *(uint64_t *)(pCVar4 + 0x38) = 0;
        *(uint64_t *)(pCVar4 + 0x40) = 0;
        pCVar5 = *(CriticalSection **)self;
      }
      iVar7 = iVar7 + 1;
      lVar6 = lVar6 + 0x50;
    } while (iVar7 < *(int *)(self + 8));
  }
  if (pCVar5 == (CriticalSection *)0x0) {
    return;
  }
  this_01 = pCVar5 + *(long *)(pCVar5 + -8) * 0x50;
  pCVar4 = this_01 + -8;
  if (this_01 != pCVar5) {
    do {
      this_01 = this_01 + -0x50;
      if (*(int *)pCVar4 == -0x5eef3582) {
        *(int *)pCVar4 = 0;
        free(*(void **)(*(long *)(pCVar4 + -0x10) + -8));
        if (*(int *)(pCVar4 + -0x18) == 1) {
          free(*(void **)(*(long *)(pCVar4 + -8) + -8));
        }
        *(int *)pCVar4 = 0;
        *(uint16_t *)(pCVar4 + -0x1e) = 0;
        *(uint16_t *)(pCVar4 + -0x20) = 0;
        *(uint64_t *)(pCVar4 + -0x10) = 0;
        *(uint64_t *)(pCVar4 + -8) = 0;
      }
      pCVar4 = pCVar4 + -0x50;
      CriticalSection__CriticalSection__005b71d0(this_01);
      pCVar5 = *(CriticalSection **)self;
    } while (pCVar5 != this_01);
  }
  operator_delete__(pCVar5 + -8);
  return;
}

/* ======================================================================
 * FlashSoundLibrary__Initialize  (Ghidra `Initialize` @ 00575670)
 * Signature: uint8_t __thiscall Initialize(FlashSoundLibrary * self, int arg1, FlashAnimationLibrary * arg2)
 * Class: FlashSoundLibrary
 * Calls: `CriticalSection__CriticalSection`
 * Called by: `FlashAnimationLibrary__FlashAnimationLibrary__00576680`
 */
/* FlashSoundLibrary__Initialize(int, FlashAnimationLibrary*) */

void __thiscall
FlashSoundLibrary__Initialize(FlashSoundLibrary *self,int arg1,FlashAnimationLibrary *arg2)

{
  long *plVar1;
  CriticalSection *this_00;
  long lVar2;
  
  lVar2 = (long)arg1;
  *(FlashAnimationLibrary **)(self + 0x10) = arg2;
  *(int *)(self + 8) = arg1;
  plVar1 = operator_new__(lVar2 * 0x50 + 8);
  *plVar1 = lVar2;
  this_00 = (CriticalSection *)(plVar1 + 1);
  while (lVar2 = lVar2 + -1, lVar2 != -1) {
                    /* try { // try from 005756c3 to 005756c7 has its CatchHandler @ 0057571d */
    CriticalSection__CriticalSection(this_00);
    *(uint16_t *)(this_00 + 0x2a) = 0;
    *(uint16_t *)(this_00 + 0x28) = 0;
    *(uint16_t *)(this_00 + 0x34) = 1;
    *(uint64_t *)(this_00 + 0x38) = 0;
    *(uint64_t *)(this_00 + 0x40) = 0;
    *(uint32_t *)(this_00 + 0x48) = 0;
    this_00[0x2c] = (CriticalSection)0x4;
    *(uint32_t *)(this_00 + 0x30) = 0;
    this_00 = this_00 + 0x50;
  }
  *(CriticalSection **)self = (CriticalSection *)(plVar1 + 1);
  return;
}

/* ======================================================================
 * FlashSoundLibrary__NewCueSet  (Ghidra `NewCueSet` @ 005757c0)
 * Signature: uint8_t __thiscall NewCueSet(FlashSoundLibrary * self)
 * Class: FlashSoundLibrary
 * Calls: (none)
 * Called by: (none)
 */
/* FlashSoundLibrary__NewCueSet() */

void __thiscall FlashSoundLibrary__NewCueSet(FlashSoundLibrary *self)

{
  *(int *)(self + 0xc) = *(int *)(self + 0xc) + 1;
  return;
}

/* ======================================================================
 * FlashSoundLibrary__AddSound  (Ghidra `AddSound` @ 005757d0)
 * Signature: uint8_t __thiscall AddSound(FlashSoundLibrary * self, char * arg1)
 * Class: FlashSoundLibrary
 * Calls: `malloc`, `std__string_string`, `strlen`
 * Called by: `FlashAnimationLibrary__FlashAnimationLibrary__00576680`
 */
/* WARNING: Removing unreachable block (ram,0x00575bef) */
/* WARNING: Removing unreachable block (ram,0x00575bd6) */
/* WARNING: Removing unreachable block (ram,0x00575be1) */
/* WARNING: Removing unreachable block (ram,0x00575b90) */
/* FlashSoundLibrary__AddSound(char const*) */

uint32_t __thiscall FlashSoundLibrary__AddSound(FlashSoundLibrary *self,char *arg1)

{
  int *piVar1;
  ushort uVar2;
  ushort uVar3;
  short sVar4;
  int iVar5;
  long lVar6;
  uint64_t uVar7;
  void *pvVar8;
  uint64_t uVar9;
  long lVar10;
  uint64_t *puVar11;
  ulong uVar12;
  ushort *puVar13;
  uint32_t uVar14;
  uint32_t local_68 [2];
  char *local_60;
  uint32_t local_58;
  uint32_t local_54;
  long local_48 [2];
  long local_38 [2];
  char *local_28;
  allocator local_1e;
  allocator local_1d [5];
  
  std__string_string((string *)local_48,"audio/",&local_1e);
                    /* try { // try from 005757ff to 00575803 has its CatchHandler @ 00575bd1 */
  std__string_string((string *)local_38,arg1,local_1d);
                    /* try { // try from 00575815 to 0057584f has its CatchHandler @ 00575b62 */
  lVar6 = std__string_find((char *)local_38,0x5db9b8,0);
  uVar14 = 5;
  if (lVar6 == -1) {
                    /* try { // try from 005758d7 to 005758db has its CatchHandler @ 00575b62 */
    std__string_append((char *)local_48,0x5db9bf);
    uVar14 = 2;
  }
  strlen(arg1);
  std__string_append((char *)local_48,(ulong)arg1);
  std__string_string((string *)&local_28,(string *)local_48);
                    /* try { // try from 0057585f to 0057586f has its CatchHandler @ 00575b81 */
  std__string_append((char *)&local_28,0x5c1e90);
  iVar5 = File__Exists(local_28,0);
  if (iVar5 != 1) {
    if ((allocator *)(local_28 + -0x18) == (allocator *)&std__string_Rep_S_empty_rep_storage) {
      uVar14 = 0;
    }
    else {
      LOCK();
      piVar1 = (int *)(local_28 + -8);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      uVar14 = 0;
      if (iVar5 < 1) {
        std__string_Rep_M_destroy((allocator *)(local_28 + -0x18));
        uVar14 = 0;
      }
    }
    goto LAB_0057588d;
  }
  local_58 = 0;
  local_54 = 0;
  local_60 = local_28;
  local_68[0] = uVar14;
                    /* try { // try from 0057590b to 0057590f has its CatchHandler @ 00575b81 */
  uVar7 = TAudioCue__Create((TAudioCueCreation *)local_68);
  lVar6 = (long)*(int *)(self + 0xc) * 0x50 + *(long *)self;
  if (*(int *)(lVar6 + 0x48) == -0x5eef3582) {
    uVar3 = *(ushort *)(lVar6 + 0x28);
    if (*(ushort *)(lVar6 + 0x2a) <= uVar3) {
      uVar3 = *(ushort *)(lVar6 + 0x2a) + *(short *)(lVar6 + 0x34);
      *(ushort *)(lVar6 + 0x2a) = uVar3;
      uVar9 = TMemory__AlignedReAlloc
                        (*(void **)(lVar6 + 0x38),(ulong)uVar3 * 8,(ulong)*(byte *)(lVar6 + 0x2c));
      *(uint64_t *)(lVar6 + 0x38) = uVar9;
      if (*(void **)(lVar6 + 0x40) != (void *)0x0) {
        lVar10 = TMemory__AlignedReAlloc
                           (*(void **)(lVar6 + 0x40),(ulong)*(ushort *)(lVar6 + 0x2a) * 2,
                            (ulong)*(byte *)(lVar6 + 0x2c));
        uVar3 = *(ushort *)(lVar6 + 0x28);
        uVar2 = *(ushort *)(lVar6 + 0x2a);
        *(long *)(lVar6 + 0x40) = lVar10;
        if (uVar2 <= uVar3) goto LAB_005759bd;
        while( true ) {
          uVar12 = (ulong)uVar3;
          uVar3 = uVar3 + 1;
          *(uint16_t *)(lVar10 + uVar12 * 2) = 0xffff;
          if (uVar2 <= uVar3) break;
          lVar10 = *(long *)(lVar6 + 0x40);
        }
      }
      uVar3 = *(ushort *)(lVar6 + 0x28);
    }
  }
  else {
    uVar12 = (ulong)*(byte *)(lVar6 + 0x2c);
    *(uint32_t *)(lVar6 + 0x30) = 0;
    pvVar8 = malloc(uVar12 + 0x38);
    puVar11 = (uint64_t *)0x0;
    if (pvVar8 != (void *)0x0) {
      puVar11 = (uint64_t *)
                ((uVar12 - ((long)pvVar8 + 0x10U) % uVar12) % uVar12 + (long)pvVar8 + 0x10U);
      puVar11[-2] = 0x28;
      puVar11[-1] = pvVar8;
    }
    *(uint64_t **)(lVar6 + 0x38) = puVar11;
    uVar3 = 0;
    *puVar11 = 0;
    puVar11[1] = 0;
    puVar11[2] = 0;
    puVar11[3] = 0;
    puVar11[4] = 0;
    *(uint16_t *)(lVar6 + 0x28) = 0;
    *(uint16_t *)(lVar6 + 0x2a) = 5;
    *(uint32_t *)(lVar6 + 0x48) = 0xa110ca7e;
    *(uint16_t *)(lVar6 + 0x34) = 5;
  }
LAB_005759bd:
  if ((*(int *)(lVar6 + 0x30) == 1) && (*(short *)(lVar6 + 0x2a) != 0)) {
    puVar13 = *(ushort **)(lVar6 + 0x40);
    sVar4 = 1;
    uVar2 = *puVar13;
    while (uVar2 != 0xffff) {
      puVar13 = puVar13 + 1;
      if (sVar4 == *(short *)(lVar6 + 0x2a)) goto LAB_005759c7;
      sVar4 = sVar4 + 1;
      uVar2 = *puVar13;
    }
    *puVar13 = uVar3;
    uVar3 = *(ushort *)(lVar6 + 0x28);
  }
LAB_005759c7:
  *(uint64_t *)(*(long *)(lVar6 + 0x38) + (ulong)uVar3 * 8) = uVar7;
  *(short *)(lVar6 + 0x28) = *(short *)(lVar6 + 0x28) + 1;
  if ((allocator *)(local_28 + -0x18) == (allocator *)&std__string_Rep_S_empty_rep_storage) {
    uVar14 = 1;
  }
  else {
    LOCK();
    piVar1 = (int *)(local_28 + -8);
    iVar5 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    uVar14 = 1;
    if (iVar5 < 1) {
      std__string_Rep_M_destroy((allocator *)(local_28 + -0x18));
      uVar14 = 1;
    }
  }
LAB_0057588d:
  if ((allocator *)(local_38[0] + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage) {
    LOCK();
    piVar1 = (int *)(local_38[0] + -8);
    iVar5 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar5 < 1) {
      std__string_Rep_M_destroy((allocator *)(local_38[0] + -0x18));
    }
  }
  if ((allocator *)(local_48[0] + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage) {
    LOCK();
    piVar1 = (int *)(local_48[0] + -8);
    iVar5 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar5 < 1) {
      std__string_Rep_M_destroy((allocator *)(local_48[0] + -0x18));
    }
  }
  return uVar14;
}

/* ======================================================================
 * FlashSoundLibrary__Play  (Ghidra `Play` @ 00575c00)
 * Signature: uint8_t __thiscall Play(FlashSoundLibrary * self, int arg1, int arg2, int arg3, FPUVector * arg4)
 * Class: FlashSoundLibrary
 * Calls: `GetRandomINT`, `TAudioCue__IsMusic`, `TAudioCue__Play`, `TAudioInstance__SetVolume`
 * Called by: `Render__00575d50`
 */
/* FlashSoundLibrary__Play(int, int, int, FPUVector const*) */

TAudioInstance * __thiscall
FlashSoundLibrary__Play
          (FlashSoundLibrary *self,int arg1,int arg2,int arg3,FPUVector *arg4)

{
  TAudioCue *this_00;
  ushort uVar1;
  int iVar2;
  TAudioInstance *this_01;
  uint32_t in_register_00000014;
  long lVar3;
  
  this_01 = (TAudioInstance *)0x0;
  lVar3 = (long)arg1 * 0x50 + *(long *)self;
  if (*(ushort *)(lVar3 + 0x28) != 0) {
    uVar1 = GetRandomINT(0,*(ushort *)(lVar3 + 0x28) - 1,CONCAT44(in_register_00000014,arg2));
    if (*(long *)(*(long *)(lVar3 + 0x38) + (ulong)uVar1 * 8) != 0) {
      uVar1 = GetRandomINT(0);
      this_00 = *(TAudioCue **)(*(long *)(lVar3 + 0x38) + (ulong)uVar1 * 8);
      this_01 = (TAudioInstance *)TAudioCue__Play(this_00,0,1,(TAudioInstance *)0x0);
      iVar2 = TAudioCue__IsMusic(this_00);
      if (((*(int *)(Audio + 100) == 0) || (iVar2 == 1)) || (arg4 == (FPUVector *)0x0)) {
        if (iVar2 == 0) {
          TAudioInstance__SetVolume(this_01,GLOBALSFXVOLUME);
        }
        else {
          TAudioInstance__SetVolume(this_01,GLOBALMUSICVOLUME);
        }
        *(uint32_t *)(this_01 + 0x1c) = 1;
        *(uint64_t *)(this_01 + 0x10) = 0xffffffff;
      }
      else {
        if (iVar2 == 0) {
          *(uint *)(this_01 + 8) = GLOBALSFXVOLUME;
        }
        else {
          *(uint *)(this_01 + 8) = GLOBALMUSICVOLUME;
        }
        *(FPUVector **)(this_01 + 0x10) = arg4;
        *(uint32_t *)(this_01 + 0x1c) = 0;
      }
      *(uint32_t *)(this_01 + 0x24) = *(uint32_t *)(*(long *)(self + 0x10) + 0x88);
    }
  }
  return this_01;
}
