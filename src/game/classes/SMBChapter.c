/* src/game/classes/SMBChapter.c — 49 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "SMBChapter.h"

/* ======================================================================
 * SMBChapter__PlayChapterMusic  (Ghidra `PlayChapterMusic` @ 0048f170)
 * Signature: uint8_t __thiscall PlayChapterMusic(SMBChapter * self)
 * Class: SMBChapter
 * Calls: `SMBChapter__PlayChapterMusic__00491ea0`, `TAudioCue__Play`, `TAudioInstance__IsPlaying`
 * Called by: (none)
 */
/* SMBChapter__PlayChapterMusic__00491ea0() [clone .part.26] */

void __thiscall SMBChapter__PlayChapterMusic__00491ea0(SMBChapter *self)

{
  uint uVar1;
  int iVar2;
  TAudioCue *this_00;
  TAudioInstance *this_01;

  uVar1 = *(uint *)(self + 0x204);
  if (uVar1 < 2) {
    if (uVar1 == 0) {
      if (*(long *)(self + 0x18) != 0) {
        this_01 = (TAudioInstance *)(self + 0x48);
        iVar2 = TAudioInstance__IsPlaying(this_01);
        if (iVar2 == 0) {
          this_00 = *(TAudioCue **)(self + 0x18);
          goto LAB_0048f214;
        }
      }
    } else if (*(long *)(self + 0x20) != 0) {
      this_01 = (TAudioInstance *)(self + 0x48);
      iVar2 = TAudioInstance__IsPlaying(this_01);
      if (iVar2 == 0) {
        this_00 = *(TAudioCue **)(self + 0x20);
        goto LAB_0048f214;
      }
    }
  } else if (uVar1 == 10) {
    if (*(long *)(self + 0x40) != 0) {
      this_01 = (TAudioInstance *)(self + 0x98);
      iVar2 = TAudioInstance__IsPlaying(this_01);
      if (iVar2 == 0) {
        this_00 = *(TAudioCue **)(self + 0x40);
        goto LAB_0048f214;
      }
    }
  } else if (*(long *)(self + 0x28) != 0) {
    this_01 = (TAudioInstance *)(self + 0x70);
    iVar2 = TAudioInstance__IsPlaying(this_01);
    if (iVar2 == 0) {
      this_00 = *(TAudioCue **)(self + 0x28);
    LAB_0048f214:
      TAudioCue__Play(this_00, GLOBALMUSICVOLUME, 0, this_01);
      return;
    }
  }
  return;
}

/* ======================================================================
 * SMBChapter__GetLevelInfoArray  (Ghidra `GetLevelInfoArray` @ 0048f650)
 * Signature: uint8_t __thiscall GetLevelInfoArray(SMBChapter * self, tagChapterLevelType arg1)
 * Class: SMBChapter
 * Calls: (none)
 * Called by: `GetLevelInfoArray`
 */
/* SMBChapter__GetLevelInfoArray(tagChapterLevelType) */

SMBChapter *__thiscall SMBChapter__GetLevelInfoArray(SMBChapter *self, int arg2)

{
  if (arg2 == 0xb) {
    arg2 = *(int *)(self + 0x204);
  }
  switch (arg2) {
  default:
    return self + 0x110;
  case 1:
    return self + 0x160;
  case 2:
    return (SMBChapter *)(*(long *)(self + 0x1e8) + 0x68);
  case 3:
    return (SMBChapter *)(*(long *)(self + 0x1e8) + 0x120);
  case 4:
    return (SMBChapter *)(*(long *)(self + 0x1e8) + 0x1d8);
  case 5:
    return (SMBChapter *)(*(long *)(self + 0x1e8) + 0x290);
  case 6:
    return (SMBChapter *)(*(long *)(self + 0x1e8) + 0x348);
  case 7:
    return (SMBChapter *)(*(long *)(self + 0x1e8) + 0x400);
  case 8:
    return (SMBChapter *)(*(long *)(self + 0x1e8) + 0x4b8);
  case 9:
    return (SMBChapter *)(*(long *)(self + 0x1e8) + 0x570);
  }
}

/* ======================================================================
 * SMBChapter__GetChapterFile  (Ghidra `GetChapterFile` @ 0048f710)
 * Signature: uint8_t __thiscall GetChapterFile(SMBChapter * self, tagChapterName arg1)
 * Class: SMBChapter
 * Calls: (none)
 * Called by: (none)
 */
/* SMBChapter__GetChapterFile(tagChapterName) */

uint64_t __thiscall SMBChapter__GetChapterFile(uint64_t arg1, int arg2)

{
  return *(uint64_t *)(GetChapterFile(tagChapterName)::pChapterFiles + (long)(arg2 + -1) * 8);
}

/* ======================================================================
 * SMBChapter__LoadInternetsChapterMusic  (Ghidra `LoadInternetsChapterMusic` @ 0048fac0)
 * Signature: uint8_t __thiscall LoadInternetsChapterMusic(SMBChapter * self, int arg1)
 * Class: SMBChapter
 * Calls: `GetInternetsChapterMusic`, `TAudioCue__TAudioCue__0057ab30`, `operator_delete`
 * Called by: `SMBLevelPortal__LoadSelectedChapter`
 */
/* SMBChapter__LoadInternetsChapterMusic(int) */

void __thiscall SMBChapter__LoadInternetsChapterMusic(SMBChapter *self, int arg1)

{
  TAudioCue *this_00;
  int iVar1;
  uint64_t uVar2;
  int iVar3;
  uint32_t local_38[2];
  uint64_t local_30;
  uint32_t local_28;
  uint32_t local_24;

  this_00 = *(TAudioCue **)(self + 0x18);
  iVar1 = 0xd;
  if (arg1 < 0xe) {
    iVar1 = arg1;
  }
  iVar3 = 0;
  if (-1 < iVar1) {
    iVar3 = iVar1;
  }
  if (this_00 != (TAudioCue *)0x0) {
    TAudioCue__TAudioCue__0057ab30(this_00);
    operator_delete(this_00);
  }
  local_28 = 0;
  local_30 = *(uint64_t *)(GetInternetsChapterMusic(int)::strMusicTracks + (long)iVar3 * 8);
  local_24 = 0;
  local_38[0] = 5;
  uVar2 = TAudioCue__Create((TAudioCueCreation *)local_38);
  *(uint64_t *)(self + 0x18) = uVar2;
  return;
}

/* ======================================================================
 * SMBChapter__UnloadChapter  (Ghidra `UnloadChapter` @ 0048fb50)
 * Signature: uint8_t __thiscall UnloadChapter(SMBChapter * self)
 * Class: SMBChapter
 * Calls: `FlashAnimationLibrary__FlashAnimationLibrary`, `TAudioCue__TAudioCue__0057ab30`, `TAudioInstance__Stop`, `operator_delete`
 * Called by: (none)
 */
/* SMBChapter__UnloadChapter() */

void __thiscall SMBChapter__UnloadChapter(SMBChapter *self)

{
  ushort uVar1;
  uint16_t uVar2;
  uint32_t uVar3;
  FlashAnimationLibrary *this_00;
  long lVar4;
  long lVar5;
  TAudioCue *pTVar6;
  uint uVar7;

  *(uint16_t *)(self + 0x138) = 0;
  if ((*(int *)(self + 0x140) == 1) && (uVar1 = *(ushort *)(self + 0x13a), uVar1 != 0)) {
    lVar4 = 0;
    do {
      *(uint16_t *)(*(long *)(self + 0x150) + lVar4) = 0xffff;
      lVar4 = lVar4 + 2;
    } while (lVar4 != (ulong)(uVar1 - 1 & 0xffff) * 2 + 2);
  }
  *(uint16_t *)(self + 0x188) = 0;
  if ((*(int *)(self + 400) == 1) && (uVar1 = *(ushort *)(self + 0x18a), uVar1 != 0)) {
    lVar4 = 0;
    do {
      *(uint16_t *)(*(long *)(self + 0x1a0) + lVar4) = 0xffff;
      lVar4 = lVar4 + 2;
    } while (lVar4 != (ulong)(uVar1 - 1 & 0xffff) * 2 + 2);
  }
  *(uint32_t *)(self + 0x26c) = 0;
  if (*(short *)(self + 0x1d8) != 0) {
    uVar7 = 0;
    do {
      while (true) {
        lVar4 = (ulong)(uVar7 & 0xffff) * 0xb8 + *(long *)(self + 0x1e8);
        *(uint16_t *)(lVar4 + 0x90) = 0;
        if ((*(int *)(lVar4 + 0x98) != 1) || (uVar1 = *(ushort *)(lVar4 + 0x92), uVar1 == 0))
          break;
        lVar5 = 0;
        do {
          *(uint16_t *)(*(long *)(lVar4 + 0xa8) + lVar5) = 0xffff;
          lVar5 = lVar5 + 2;
        } while (lVar5 != (ulong)(uVar1 - 1 & 0xffff) * 2 + 2);
        uVar7 = uVar7 + 1;
        if ((int)(uint) * (ushort *)(self + 0x1d8) <= (int)uVar7)
          goto LAB_0048fc21;
      }
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < (int)(uint) * (ushort *)(self + 0x1d8));
  }
LAB_0048fc21:
  *(uint16_t *)(self + 0x1d8) = 0;
  if ((*(int *)(self + 0x1e0) == 1) && (uVar1 = *(ushort *)(self + 0x1da), uVar1 != 0)) {
    lVar4 = 0;
    do {
      *(uint16_t *)(*(long *)(self + 0x1f0) + lVar4) = 0xffff;
      lVar4 = lVar4 + 2;
    } while (lVar4 != (ulong)(uVar1 - 1 & 0xffff) * 2 + 2);
  }
  uVar3 = *(uint32_t *)(self + 0x2e0);
  uVar2 = *(uint16_t *)(self + 0x2e4);
  *(uint32_t *)(self + 0x2e0) = 0;
  *(uint16_t *)(self + 0x2e4) = 0;
  TAudioInstance__Stop((TAudioInstance *)(self + 0xc0));
  TAudioInstance__Stop((TAudioInstance *)(self + 0xe8));
  if (*(int *)(self + 0x2e0) == 1) {
  LAB_0048fca2:
    pTVar6 = *(TAudioCue **)(self + 0x18);
  } else if (*(uint *)(self + 0x204) < 2) {
    if (*(long *)(self + 0x18) == 0) {
      *(uint32_t *)(self + 0x2e0) = uVar3;
      *(uint16_t *)(self + 0x2e4) = uVar2;
      goto LAB_0048fcca;
    }
    TAudioInstance__Stop((TAudioInstance *)(self + 0x48));
    pTVar6 = *(TAudioCue **)(self + 0x18);
  } else {
    if (*(uint *)(self + 0x204) != 10) {
      if (*(long *)(self + 0x28) != 0) {
        TAudioInstance__Stop((TAudioInstance *)(self + 0x70));
      }
      goto LAB_0048fca2;
    }
    TAudioInstance__Stop((TAudioInstance *)(self + 0x98));
    pTVar6 = *(TAudioCue **)(self + 0x18);
  }
  *(uint32_t *)(self + 0x2e0) = uVar3;
  *(uint16_t *)(self + 0x2e4) = uVar2;
  if (pTVar6 != (TAudioCue *)0x0) {
    TAudioCue__TAudioCue__0057ab30(pTVar6);
    operator_delete(pTVar6);
  }
LAB_0048fcca:
  pTVar6 = *(TAudioCue **)(self + 0x28);
  if (pTVar6 != (TAudioCue *)0x0) {
    TAudioCue__TAudioCue__0057ab30(pTVar6);
    operator_delete(pTVar6);
  }
  pTVar6 = *(TAudioCue **)(self + 0x30);
  if (pTVar6 != (TAudioCue *)0x0) {
    TAudioCue__TAudioCue__0057ab30(pTVar6);
    operator_delete(pTVar6);
  }
  pTVar6 = *(TAudioCue **)(self + 0x38);
  if (pTVar6 != (TAudioCue *)0x0) {
    TAudioCue__TAudioCue__0057ab30(pTVar6);
    operator_delete(pTVar6);
  }
  pTVar6 = *(TAudioCue **)(self + 0x40);
  if (pTVar6 != (TAudioCue *)0x0) {
    TAudioCue__TAudioCue__0057ab30(pTVar6);
    operator_delete(pTVar6);
  }
  pTVar6 = *(TAudioCue **)(self + 0x20);
  if (pTVar6 != (TAudioCue *)0x0) {
    TAudioCue__TAudioCue__0057ab30(pTVar6);
    operator_delete(pTVar6);
  }
  this_00 = *(FlashAnimationLibrary **)(self + 0x288);
  if (this_00 != (FlashAnimationLibrary *)0x0) {
    FlashAnimationLibrary__FlashAnimationLibrary(this_00);
    operator_delete(this_00);
  }
  *(uint64_t *)(self + 0x288) = 0;
  *(uint64_t *)(self + 0x18) = 0;
  *(uint64_t *)(self + 0x28) = 0;
  *(uint64_t *)(self + 0x30) = 0;
  *(uint64_t *)(self + 0x38) = 0;
  *(uint64_t *)(self + 0x40) = 0;
  return;
}

/* ======================================================================
 * SMBChapter__LoadChapter  (Ghidra `LoadChapter` @ 0048fea0)
 * Signature: uint8_t __thiscall LoadChapter(SMBChapter * self, tagChapterName arg1)
 * Class: SMBChapter
 * Calls: `CriticalSection__CriticalSection`, `FormatResourcePath`, `GSMBChapterData__LoadData`, `LoadBossDataFromBlock`, `LoadLevelDataFromBlock`, `PropertiesFile__FindPropertyBlock`, `PropertiesFile__FindPropertyVariable`, `PropertiesFile__GetNumPropertyBlocksByName`, `PropertiesFile__PropertiesFile`, `PropertiesFile__PropertiesFile__005975b0` (+9 more)
 * Called by: `GSMBMenu__EnterSelectedChapter`, `GSMBMenu__ValidateAndLoadChapter`, `SMBMenuChapterSelect`
 */
/* WARNING: Removing unreachable block (ram,0x00491dc7) */
/* WARNING: Removing unreachable block (ram,0x00491e45) */
/* WARNING: Removing unreachable block (ram,0x00491d4e) */
/* WARNING: Removing unreachable block (ram,0x00491d89) */
/* WARNING: Removing unreachable block (ram,0x00491e85) */
/* WARNING: Removing unreachable block (ram,0x00491e05) */
/* WARNING: Removing unreachable block (ram,0x00491d03) */
/* SMBChapter__LoadChapter(tagChapterName) */

void __thiscall SMBChapter__LoadChapter(SMBChapter *self, int arg2)

{
  int *piVar1;
  SMBChapter *pSVar2;
  bool bVar3;
  ushort uVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  uint32_t uVar8;
  int iVar9;
  uint uVar10;
  PropertiesFile *this_00;
  char *pcVar11;
  uint64_t uVar12;
  uint64_t *puVar13;
  void *pvVar14;
  void *pvVar15;
  uint uVar16;
  ulong uVar17;
  void *pvVar18;
  ushort uVar19;
  ushort *puVar20;
  short *psVar21;
  LevelInfo *pLVar22;
  ulong uVar23;
  uint64_t *puVar24;
  int iVar25;
  PropertyBlock *__s;
  PropertyVariable *pPVar26;
  long lVar27;
  bool bVar28;
  byte bVar29;
  int local_15c;
  int local_130;
  uint32_t local_128[2];
  long local_120;
  uint32_t local_118;
  uint32_t local_114;
  PropertyVariable *local_108[2];
  uint8_t *local_f8[2];
  PropertyBlock *local_e8[2];
  PropertyVariable *local_d8[2];
  PropertyVariable *local_c8[2];
  PropertyVariable *local_b8[2];
  PropertyVariable *local_a8[2];
  long local_98[2];
  PropertyBlock *local_88;
  PropertyVariable *local_80;
  PropertyVariable *local_78;
  PropertyVariable *local_70;
  PropertyVariable *local_68;
  PropertyVariable *local_60;
  PropertyVariable *local_58;
  PropertyBlock *local_50;
  allocator local_45[2];
  allocator local_43[2];
  allocator local_41[2];
  allocator local_3f[2];
  allocator local_3d[2];
  allocator local_3b[11];

  bVar29 = 0;
  if (arg2 == 9) {
    this_00 = operator_new(0x50);
    /* try { // try from 00491c59 to 00491c5d has its CatchHandler @ 00491cad */
    PropertiesFile__PropertiesFile__005975b0(this_00, "Levels/Internets.chapter", 0);
  } else {
    pcVar11 = *(char **)(GetChapterFile(tagChapterName)::pChapterFiles + (long)(arg2 + -1) * 8);
    this_00 = operator_new(0x50);
    /* try { // try from 0048fee5 to 0048fee9 has its CatchHandler @ 00491cee */
    PropertiesFile__PropertiesFile__005975b0(this_00, pcVar11, 0);
  }
  UnloadChapter(self);
  PropertiesFile__FindPropertyBlock(this_00, &local_88, "chapter", 0);
  if (local_88 != (PropertyBlock *)0x0) {
    PropertiesFile__FindPropertyVariable(this_00, local_a8, local_88, "music");
    PropertiesFile__FindPropertyVariable(this_00, &local_60, local_88, "altmusic");
    PropertiesFile__FindPropertyVariable(this_00, local_108, local_88, "warptrans");
    PropertiesFile__FindPropertyVariable(this_00, local_b8, local_88, "warpmusic");
    PropertiesFile__FindPropertyVariable(this_00, local_c8, local_88, "menunormalmusic");
    PropertiesFile__FindPropertyVariable(this_00, local_d8, local_88, "menuretromusic");
    PropertiesFile__FindPropertyVariable(this_00, &local_80, local_88, "intro");
    PropertiesFile__FindPropertyVariable(this_00, &local_78, local_88, "bossmusic");
    PropertiesFile__FindPropertyVariable(this_00, &local_70, local_88, "bossintro");
    PropertiesFile__FindPropertyVariable(this_00, &local_68, local_88, "bossoutro");
    PropertiesFile__FindPropertyVariable(this_00, &local_58, local_88, "overridechar");
    if (local_58 == (PropertyVariable *)0x0) {
      *(uint32_t *)(self + 0x2f0) = 0xffffffff;
    } else {
      iVar7 = StringToInt((PropertyBlock *)(local_58 + 0x20));
      *(int *)(self + 0x2f0) = iVar7 + -1;
    }
    pSVar2 = self + 0x298;
    local_f8[0] = &DAT_008184c8 /* R:0.00016803004837129265f */;
    /* try { // try from 004900ae to 004901fc has its CatchHandler @ 00491cf0 */
    std__string_assign((char *)pSVar2, 0x5c1ca6);
    strlen((char *)(local_80 + 0x20));
    std__string_append((char *)pSVar2, (ulong)(local_80 + 0x20));
    pcVar11 = (char *)FormatResourcePath(*(uint64_t *)(self + 0x298), local_f8);
    strlen(pcVar11);
    std__string_assign((char *)pSVar2, (ulong)pcVar11);
    pSVar2 = self + 0x2b0;
    std__string_assign((char *)pSVar2, 0x5c1ca6);
    strlen((char *)(local_70 + 0x20));
    std__string_append((char *)pSVar2, (ulong)(local_70 + 0x20));
    pcVar11 = (char *)FormatResourcePath(*(uint64_t *)(self + 0x2b0), local_f8);
    strlen(pcVar11);
    std__string_assign((char *)pSVar2, (ulong)pcVar11);
    pSVar2 = self + 0x2c8;
    std__string_assign((char *)pSVar2, 0x5c1ca6);
    strlen((char *)(local_68 + 0x20));
    std__string_append((char *)pSVar2, (ulong)(local_68 + 0x20));
    pcVar11 = (char *)FormatResourcePath(*(uint64_t *)(self + 0x2c8), local_f8);
    strlen(pcVar11);
    std__string_assign((char *)pSVar2, (ulong)pcVar11);
    pPVar26 = local_a8[0];
    *(uint64_t *)(self + 0x18) = 0;
    std__string_string((string *)local_98, "audio/", local_45);
    if (pPVar26 != (PropertyVariable *)0x0) {
      __s = (PropertyBlock *)(pPVar26 + 0x20);
      strlen((char *)__s);
      /* try { // try from 0049021c to 00490258 has its CatchHandler @ 00491d87 */
      std__string_append((char *)local_98, (ulong)__s);
      local_118 = 0;
      local_114 = 0;
      local_128[0] = 5;
      local_120 = local_98[0];
      uVar12 = TAudioCue__Create((TAudioCueCreation *)local_128);
      *(uint64_t *)(self + 0x18) = uVar12;
    }
    if ((allocator *)(local_98[0] + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage) {
      LOCK();
      piVar1 = (int *)(local_98[0] + -8);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 < 1) {
        std__string_Rep_M_destroy((allocator *)(local_98[0] + -0x18));
      }
    }
    pPVar26 = local_b8[0];
    *(uint64_t *)(self + 0x28) = 0;
    /* try { // try from 0049029b to 0049029f has its CatchHandler @ 00491cf0 */
    std__string_string((string *)local_98, "audio/", local_43);
    if (pPVar26 != (PropertyVariable *)0x0) {
      pPVar26 = pPVar26 + 0x20;
      strlen((char *)pPVar26);
      /* try { // try from 004902bf to 004902fb has its CatchHandler @ 00491d3c */
      std__string_append((char *)local_98, (ulong)pPVar26);
      local_118 = 0;
      local_114 = 0;
      local_128[0] = 5;
      local_120 = local_98[0];
      uVar12 = TAudioCue__Create((TAudioCueCreation *)local_128);
      *(uint64_t *)(self + 0x28) = uVar12;
    }
    if ((allocator *)(local_98[0] + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage) {
      LOCK();
      piVar1 = (int *)(local_98[0] + -8);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 < 1) {
        std__string_Rep_M_destroy((allocator *)(local_98[0] + -0x18));
      }
    }
    pPVar26 = local_c8[0];
    *(uint64_t *)(self + 0x30) = 0;
    /* try { // try from 0049033e to 00490342 has its CatchHandler @ 00491cf0 */
    std__string_string((string *)local_98, "audio/", local_41);
    if (pPVar26 != (PropertyVariable *)0x0) {
      pPVar26 = pPVar26 + 0x20;
      strlen((char *)pPVar26);
      /* try { // try from 00490362 to 0049039e has its CatchHandler @ 00491e80 */
      std__string_append((char *)local_98, (ulong)pPVar26);
      local_118 = 0;
      local_114 = 0;
      local_128[0] = 5;
      local_120 = local_98[0];
      uVar12 = TAudioCue__Create((TAudioCueCreation *)local_128);
      *(uint64_t *)(self + 0x30) = uVar12;
    }
    if ((allocator *)(local_98[0] + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage) {
      LOCK();
      piVar1 = (int *)(local_98[0] + -8);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 < 1) {
        std__string_Rep_M_destroy((allocator *)(local_98[0] + -0x18));
      }
    }
    pPVar26 = local_d8[0];
    if (arg2 != 9) {
      *(uint64_t *)(self + 0x38) = 0;
      /* try { // try from 004903ec to 004903f0 has its CatchHandler @ 00491cf0 */
      std__string_string((string *)local_98, "audio/", local_3f);
      if (pPVar26 != (PropertyVariable *)0x0) {
        pPVar26 = pPVar26 + 0x20;
        strlen((char *)pPVar26);
        /* try { // try from 00490410 to 0049044c has its CatchHandler @ 00491e40 */
        std__string_append((char *)local_98, (ulong)pPVar26);
        local_118 = 0;
        local_114 = 0;
        local_128[0] = 5;
        local_120 = local_98[0];
        uVar12 = TAudioCue__Create((TAudioCueCreation *)local_128);
        *(uint64_t *)(self + 0x38) = uVar12;
      }
      if ((allocator *)(local_98[0] + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage) {
        LOCK();
        piVar1 = (int *)(local_98[0] + -8);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 < 1) {
          std__string_Rep_M_destroy((allocator *)(local_98[0] + -0x18));
        }
      }
    }
    *(uint64_t *)(self + 0x40) = 0;
    /* try { // try from 0049048f to 00490493 has its CatchHandler @ 00491cf0 */
    std__string_string((string *)local_98, "audio/", local_3d);
    if (local_78 != (PropertyVariable *)0x0) {
      strlen((char *)(local_78 + 0x20));
      /* try { // try from 004904b3 to 004904ef has its CatchHandler @ 00491e00 */
      std__string_append((char *)local_98, (ulong)(local_78 + 0x20));
      local_118 = 0;
      local_114 = 0;
      local_128[0] = 5;
      local_120 = local_98[0];
      uVar12 = TAudioCue__Create((TAudioCueCreation *)local_128);
      *(uint64_t *)(self + 0x40) = uVar12;
    }
    if ((allocator *)(local_98[0] + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage) {
      LOCK();
      piVar1 = (int *)(local_98[0] + -8);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 < 1) {
        std__string_Rep_M_destroy((allocator *)(local_98[0] + -0x18));
      }
    }
    pPVar26 = local_60;
    *(uint64_t *)(self + 0x20) = 0;
    /* try { // try from 00490532 to 00490536 has its CatchHandler @ 00491cf0 */
    std__string_string((string *)local_98, "audio/", local_3b);
    if (pPVar26 != (PropertyVariable *)0x0) {
      pPVar26 = pPVar26 + 0x20;
      strlen((char *)pPVar26);
      /* try { // try from 00490556 to 00490592 has its CatchHandler @ 00491dc2 */
      std__string_append((char *)local_98, (ulong)pPVar26);
      local_118 = 0;
      local_114 = 0;
      local_128[0] = 5;
      local_120 = local_98[0];
      uVar12 = TAudioCue__Create((TAudioCueCreation *)local_128);
      *(uint64_t *)(self + 0x20) = uVar12;
    }
    if ((allocator *)(local_98[0] + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage) {
      LOCK();
      piVar1 = (int *)(local_98[0] + -8);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 < 1) {
        std__string_Rep_M_destroy((allocator *)(local_98[0] + -0x18));
      }
    }
    if (local_108[0] != (PropertyVariable *)0x0) {
      pSVar2 = self + 0x280;
      /* try { // try from 004905cf to 0049061d has its CatchHandler @ 00491cf0 */
      std__string_assign((char *)pSVar2, 0x5c1cae);
      strlen((char *)(local_108[0] + 0x20));
      std__string_append((char *)pSVar2, (ulong)(local_108[0] + 0x20));
      pcVar11 = (char *)FormatResourcePath(*(uint64_t *)(self + 0x280), local_f8);
      strlen(pcVar11);
      std__string_assign((char *)pSVar2, (ulong)pcVar11);
    }
    if ((allocator *)(local_f8[0] + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage) {
      LOCK();
      piVar1 = (int *)(local_f8[0] + -8);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 < 1) {
        std__string_Rep_M_destroy((allocator *)(local_f8[0] + -0x18));
      }
    }
  }
  uVar8 = PropertiesFile__GetNumPropertyBlocksByName(this_00, "normlevel");
  *(uint32_t *)(self + 4) = uVar8;
  uVar8 = PropertiesFile__GetNumPropertyBlocksByName(this_00, "altlevel");
  *(uint32_t *)(self + 8) = uVar8;
  uVar8 = PropertiesFile__GetNumPropertyBlocksByName(this_00, "warp");
  *(uint32_t *)(self + 0xc) = uVar8;
  local_50 = (PropertyBlock *)0x0;
  *(int *)(self + 0x10) = *(int *)(self + 4) + *(int *)(self + 8);
  PropertiesFile__FindPropertyBlock(this_00, &local_50, "bosslevel", 0);
  if ((local_50 == (PropertyBlock *)0x0) ||
      (iVar7 = LoadBossDataFromBlock(local_50, (BossLevelInfo *)(self + 0x208), this_00),
       iVar7 == 0)) {
    *(uint32_t *)(self + 0x26c) = 0;
  }
  local_e8[0] = (PropertyBlock *)0x0;
  if (0 < *(int *)(self + 4)) {
    iVar25 = 0;
    iVar7 = 0;
    while (iVar7 = PropertiesFile__FindPropertyBlock(this_00, local_e8, "normlevel", iVar7),
           local_e8[0] != (PropertyBlock *)0x0) {
      if (*(int *)(self + 0x158) == -0x5eef3582) {
        uVar4 = *(ushort *)(self + 0x138);
        if (uVar4 < *(ushort *)(self + 0x13a))
          goto LAB_004907ba;
        uVar4 = *(ushort *)(self + 0x13a) + *(short *)(self + 0x144);
        uVar17 = (ulong)(byte)self[0x13c];
        pvVar15 = (void *)0x0;
        pvVar18 = *(void **)(self + 0x148);
        *(ushort *)(self + 0x13a) = uVar4;
        uVar23 = (ulong)uVar4 * 0x50;
        pvVar14 = malloc(uVar17 + 0x10 + uVar23);
        if (pvVar14 != (void *)0x0) {
          pvVar15 = (void *)((long)pvVar14 + 0x10U +
                             (uVar17 - ((long)pvVar14 + 0x10U) % uVar17) % uVar17);
          *(ulong *)((long)pvVar15 + -0x10) = uVar23;
          *(void **)((long)pvVar15 + -8) = pvVar14;
          if (pvVar18 != (void *)0x0) {
            uVar17 = *(ulong *)((long)pvVar18 + -0x10);
            if (uVar23 <= *(ulong *)((long)pvVar18 + -0x10)) {
              uVar17 = uVar23;
            }
            memcpy(pvVar15, pvVar18, uVar17);
            free(*(void **)((long)pvVar18 + -8));
          }
        }
        pvVar18 = *(void **)(self + 0x150);
        *(void **)(self + 0x148) = pvVar15;
        if (pvVar18 != (void *)0x0) {
          uVar19 = *(ushort *)(self + 0x13a);
          uVar17 = (ulong)(byte)self[0x13c];
          pvVar15 = (void *)0x0;
          uVar23 = (ulong)uVar19 * 2;
          pvVar14 = malloc(uVar17 + 0x10 + uVar23);
          if (pvVar14 != (void *)0x0) {
            pvVar15 = (void *)((long)pvVar14 + 0x10U +
                               (uVar17 - ((long)pvVar14 + 0x10U) % uVar17) % uVar17);
            *(ulong *)((long)pvVar15 + -0x10) = uVar23;
            *(void **)((long)pvVar15 + -8) = pvVar14;
            uVar17 = *(ulong *)((long)pvVar18 + -0x10);
            if (uVar23 <= *(ulong *)((long)pvVar18 + -0x10)) {
              uVar17 = uVar23;
            }
            memcpy(pvVar15, pvVar18, uVar17);
            free(*(void **)((long)pvVar18 + -8));
            uVar19 = *(ushort *)(self + 0x13a);
          }
          uVar4 = *(ushort *)(self + 0x138);
          *(void **)(self + 0x150) = pvVar15;
          if (uVar19 <= uVar4)
            goto LAB_004907ba;
          while (true) {
            uVar23 = (ulong)uVar4;
            uVar4 = uVar4 + 1;
            *(uint16_t *)((long)pvVar15 + uVar23 * 2) = 0xffff;
            if (uVar19 <= uVar4)
              break;
            pvVar15 = *(void **)(self + 0x150);
          }
        }
        iVar9 = *(int *)(self + 0x140);
        uVar4 = *(ushort *)(self + 0x138);
      } else {
        uVar23 = (ulong)(byte)self[0x13c];
        *(uint32_t *)(self + 0x140) = 0;
        pvVar15 = malloc(uVar23 + 0x1a0);
        puVar13 = (uint64_t *)0x0;
        if (pvVar15 != (void *)0x0) {
          puVar13 = (uint64_t *)((uVar23 - ((long)pvVar15 + 0x10U) % uVar23) % uVar23 +
                                 (long)pvVar15 + 0x10U);
          puVar13[-2] = 400;
          puVar13[-1] = pvVar15;
        }
        bVar28 = ((ulong)puVar13 & 1) != 0;
        *(uint64_t **)(self + 0x148) = puVar13;
        uVar23 = 400;
        if (bVar28) {
          *(uint8_t *)puVar13 = 0;
          puVar13 = (uint64_t *)((long)puVar13 + 1);
          uVar23 = 399;
        }
        if (((ulong)puVar13 & 2) != 0) {
          *(uint16_t *)puVar13 = 0;
          uVar23 = (ulong)((int)uVar23 - 2);
          puVar13 = (uint64_t *)((long)puVar13 + 2);
        }
        if (((ulong)puVar13 & 4) != 0) {
          *(uint32_t *)puVar13 = 0;
          uVar23 = (ulong)((int)uVar23 - 4);
          puVar13 = (uint64_t *)((long)puVar13 + 4);
        }
        for (uVar17 = uVar23 >> 3; uVar17 != 0; uVar17 = uVar17 - 1) {
          *puVar13 = 0;
          puVar13 = puVar13 + (ulong)bVar29 * -2 + 1;
        }
        if ((uVar23 & 4) != 0) {
          *(uint32_t *)puVar13 = 0;
          puVar13 = (uint64_t *)((long)puVar13 + 4);
        }
        if ((uVar23 & 2) != 0) {
          *(uint16_t *)puVar13 = 0;
          puVar13 = (uint64_t *)((long)puVar13 + 2);
        }
        if (bVar28) {
          *(uint8_t *)puVar13 = 0;
        }
        *(uint16_t *)(self + 0x138) = 0;
        *(uint16_t *)(self + 0x13a) = 5;
        uVar4 = 0;
        *(uint32_t *)(self + 0x158) = 0xa110ca7e;
        *(uint16_t *)(self + 0x144) = 5;
      LAB_004907ba:
        iVar9 = *(int *)(self + 0x140);
      }
      if ((iVar9 == 1) && (*(short *)(self + 0x13a) != 0)) {
        puVar20 = *(ushort **)(self + 0x150);
        sVar5 = 1;
        uVar19 = *puVar20;
        while (uVar19 != 0xffff) {
          puVar20 = puVar20 + 1;
          if (sVar5 == *(short *)(self + 0x13a))
            goto LAB_004907c7;
          sVar5 = sVar5 + 1;
          uVar19 = *puVar20;
        }
        *puVar20 = uVar4;
        uVar4 = *(ushort *)(self + 0x138);
      }
    LAB_004907c7:
      uVar23 = 0x50;
      *(ushort *)(self + 0x138) = uVar4 + 1;
      puVar13 =
          (uint64_t *)(((ulong)(ushort)(uVar4 + 1) * 5 + -5) * 0x10 + *(long *)(self + 0x148));
      bVar28 = ((ulong)puVar13 & 1) != 0;
      if (bVar28) {
        *(uint8_t *)puVar13 = 0;
        puVar13 = (uint64_t *)((long)puVar13 + 1);
        uVar23 = 0x4f;
      }
      if (((ulong)puVar13 & 2) != 0) {
        *(uint16_t *)puVar13 = 0;
        uVar23 = (ulong)((int)uVar23 - 2);
        puVar13 = (uint64_t *)((long)puVar13 + 2);
      }
      if (((ulong)puVar13 & 4) != 0) {
        *(uint32_t *)puVar13 = 0;
        uVar23 = (ulong)((int)uVar23 - 4);
        puVar13 = (uint64_t *)((long)puVar13 + 4);
      }
      for (uVar17 = uVar23 >> 3; uVar17 != 0; uVar17 = uVar17 - 1) {
        *puVar13 = 0;
        puVar13 = puVar13 + (ulong)bVar29 * -2 + 1;
      }
      if ((uVar23 & 4) != 0) {
        *(uint32_t *)puVar13 = 0;
        puVar13 = (uint64_t *)((long)puVar13 + 4);
      }
      if ((uVar23 & 2) != 0) {
        *(uint16_t *)puVar13 = 0;
        puVar13 = (uint64_t *)((long)puVar13 + 2);
      }
      if (bVar28) {
        *(uint8_t *)puVar13 = 0;
      }
      pLVar22 = (LevelInfo *)(((ulong) * (ushort *)(self + 0x138) * 5 + -5) * 0x10 +
                              *(long *)(self + 0x148));
      if (pLVar22 != (LevelInfo *)0x0) {
        *(uint32_t *)(pLVar22 + 0x40) = 0;
        *(uint32_t *)(pLVar22 + 0x44) = 0xffffffff;
        *(uint32_t *)(pLVar22 + 0x48) = 0xffffffff;
        *(uint32_t *)(pLVar22 + 0x4c) = 0;
      }
      iVar9 = LoadLevelDataFromBlock(local_e8[0], pLVar22, this_00);
      if ((iVar9 == 0) || (iVar25 = iVar25 + 1, *(int *)(self + 4) <= iVar25))
        break;
    }
  }
  if (0 < *(int *)(self + 8)) {
    iVar25 = 0;
    iVar7 = 0;
    while (iVar7 = PropertiesFile__FindPropertyBlock(this_00, local_e8, "altlevel", iVar7),
           local_e8[0] != (PropertyBlock *)0x0) {
      if (*(int *)(self + 0x1a8) == -0x5eef3582) {
        uVar4 = *(ushort *)(self + 0x188);
        if (uVar4 < *(ushort *)(self + 0x18a))
          goto LAB_00490c22;
        uVar4 = *(ushort *)(self + 0x18a) + *(short *)(self + 0x194);
        uVar17 = (ulong)(byte)self[0x18c];
        pvVar15 = (void *)0x0;
        pvVar18 = *(void **)(self + 0x198);
        *(ushort *)(self + 0x18a) = uVar4;
        uVar23 = (ulong)uVar4 * 0x50;
        pvVar14 = malloc(uVar17 + 0x10 + uVar23);
        if (pvVar14 != (void *)0x0) {
          pvVar15 = (void *)((long)pvVar14 + 0x10U +
                             (uVar17 - ((long)pvVar14 + 0x10U) % uVar17) % uVar17);
          *(ulong *)((long)pvVar15 + -0x10) = uVar23;
          *(void **)((long)pvVar15 + -8) = pvVar14;
          if (pvVar18 != (void *)0x0) {
            uVar17 = *(ulong *)((long)pvVar18 + -0x10);
            if (uVar23 <= *(ulong *)((long)pvVar18 + -0x10)) {
              uVar17 = uVar23;
            }
            memcpy(pvVar15, pvVar18, uVar17);
            free(*(void **)((long)pvVar18 + -8));
          }
        }
        pvVar18 = *(void **)(self + 0x1a0);
        *(void **)(self + 0x198) = pvVar15;
        if (pvVar18 != (void *)0x0) {
          uVar19 = *(ushort *)(self + 0x18a);
          uVar17 = (ulong)(byte)self[0x18c];
          pvVar15 = (void *)0x0;
          uVar23 = (ulong)uVar19 * 2;
          pvVar14 = malloc(uVar17 + 0x10 + uVar23);
          if (pvVar14 != (void *)0x0) {
            pvVar15 = (void *)((long)pvVar14 + 0x10U +
                               (uVar17 - ((long)pvVar14 + 0x10U) % uVar17) % uVar17);
            *(ulong *)((long)pvVar15 + -0x10) = uVar23;
            *(void **)((long)pvVar15 + -8) = pvVar14;
            uVar17 = *(ulong *)((long)pvVar18 + -0x10);
            if (uVar23 <= *(ulong *)((long)pvVar18 + -0x10)) {
              uVar17 = uVar23;
            }
            memcpy(pvVar15, pvVar18, uVar17);
            free(*(void **)((long)pvVar18 + -8));
            uVar19 = *(ushort *)(self + 0x18a);
          }
          uVar4 = *(ushort *)(self + 0x188);
          *(void **)(self + 0x1a0) = pvVar15;
          if (uVar19 <= uVar4)
            goto LAB_00490c22;
          while (true) {
            uVar23 = (ulong)uVar4;
            uVar4 = uVar4 + 1;
            *(uint16_t *)((long)pvVar15 + uVar23 * 2) = 0xffff;
            if (uVar19 <= uVar4)
              break;
            pvVar15 = *(void **)(self + 0x1a0);
          }
        }
        iVar9 = *(int *)(self + 400);
        uVar4 = *(ushort *)(self + 0x188);
      } else {
        uVar23 = (ulong)(byte)self[0x18c];
        *(uint32_t *)(self + 400) = 0;
        pvVar15 = malloc(uVar23 + 0x1a0);
        puVar13 = (uint64_t *)0x0;
        if (pvVar15 != (void *)0x0) {
          puVar13 = (uint64_t *)((uVar23 - ((long)pvVar15 + 0x10U) % uVar23) % uVar23 +
                                 (long)pvVar15 + 0x10U);
          puVar13[-2] = 400;
          puVar13[-1] = pvVar15;
        }
        bVar28 = ((ulong)puVar13 & 1) != 0;
        *(uint64_t **)(self + 0x198) = puVar13;
        uVar23 = 400;
        if (bVar28) {
          *(uint8_t *)puVar13 = 0;
          puVar13 = (uint64_t *)((long)puVar13 + 1);
          uVar23 = 399;
        }
        if (((ulong)puVar13 & 2) != 0) {
          *(uint16_t *)puVar13 = 0;
          uVar23 = (ulong)((int)uVar23 - 2);
          puVar13 = (uint64_t *)((long)puVar13 + 2);
        }
        if (((ulong)puVar13 & 4) != 0) {
          *(uint32_t *)puVar13 = 0;
          uVar23 = (ulong)((int)uVar23 - 4);
          puVar13 = (uint64_t *)((long)puVar13 + 4);
        }
        for (uVar17 = uVar23 >> 3; uVar17 != 0; uVar17 = uVar17 - 1) {
          *puVar13 = 0;
          puVar13 = puVar13 + (ulong)bVar29 * -2 + 1;
        }
        if ((uVar23 & 4) != 0) {
          *(uint32_t *)puVar13 = 0;
          puVar13 = (uint64_t *)((long)puVar13 + 4);
        }
        if ((uVar23 & 2) != 0) {
          *(uint16_t *)puVar13 = 0;
          puVar13 = (uint64_t *)((long)puVar13 + 2);
        }
        if (bVar28) {
          *(uint8_t *)puVar13 = 0;
        }
        *(uint16_t *)(self + 0x188) = 0;
        *(uint16_t *)(self + 0x18a) = 5;
        uVar4 = 0;
        *(uint32_t *)(self + 0x1a8) = 0xa110ca7e;
        *(uint16_t *)(self + 0x194) = 5;
      LAB_00490c22:
        iVar9 = *(int *)(self + 400);
      }
      if ((iVar9 == 1) && (*(short *)(self + 0x18a) != 0)) {
        puVar20 = *(ushort **)(self + 0x1a0);
        sVar5 = 0;
        uVar19 = *puVar20;
        while (uVar19 != 0xffff) {
          puVar20 = puVar20 + 1;
          sVar5 = sVar5 + 1;
          if (sVar5 == *(short *)(self + 0x18a))
            goto LAB_00490c2f;
          uVar19 = *puVar20;
        }
        *puVar20 = uVar4;
        uVar4 = *(ushort *)(self + 0x188);
      }
    LAB_00490c2f:
      uVar23 = 0x50;
      bVar28 = false;
      iVar9 = 0x50;
      *(ushort *)(self + 0x188) = uVar4 + 1;
      puVar13 =
          (uint64_t *)(((ulong)(ushort)(uVar4 + 1) * 5 + -5) * 0x10 + *(long *)(self + 0x198));
      if (((ulong)puVar13 & 1) == 0) {
        puVar24 = puVar13;
        bVar3 = false;
        if (((ulong)puVar13 & 2) == 0)
          goto LAB_00490c66;
      LAB_00490f64:
        bVar28 = bVar3;
        *(uint16_t *)puVar24 = 0;
        puVar24 = (uint64_t *)((long)puVar24 + 2);
        uVar16 = iVar9 - 2;
        uVar23 = (ulong)uVar16;
      } else {
        puVar24 = (uint64_t *)((long)puVar13 + 1);
        *(uint8_t *)puVar13 = 0;
        uVar23 = 0x4f;
        bVar28 = true;
        iVar9 = 0x4f;
        bVar3 = true;
        if (((ulong)puVar24 & 2) != 0)
          goto LAB_00490f64;
      LAB_00490c66:
        uVar16 = (uint)uVar23;
      }
      if (((ulong)puVar24 & 4) != 0) {
        *(uint32_t *)puVar24 = 0;
        uVar23 = (ulong)(uVar16 - 4);
        puVar24 = (uint64_t *)((long)puVar24 + 4);
      }
      for (uVar17 = uVar23 >> 3; uVar17 != 0; uVar17 = uVar17 - 1) {
        *puVar24 = 0;
        puVar24 = puVar24 + (ulong)bVar29 * -2 + 1;
      }
      if ((uVar23 & 4) != 0) {
        *(uint32_t *)puVar24 = 0;
        puVar24 = (uint64_t *)((long)puVar24 + 4);
      }
      if ((uVar23 & 2) != 0) {
        *(uint16_t *)puVar24 = 0;
        puVar24 = (uint64_t *)((long)puVar24 + 2);
      }
      if (bVar28) {
        *(uint8_t *)puVar24 = 0;
      }
      pLVar22 = (LevelInfo *)(((ulong) * (ushort *)(self + 0x188) * 5 + -5) * 0x10 +
                              *(long *)(self + 0x198));
      if (pLVar22 != (LevelInfo *)0x0) {
        *(uint32_t *)(pLVar22 + 0x40) = 0;
        *(uint32_t *)(pLVar22 + 0x44) = 0xffffffff;
        *(uint32_t *)(pLVar22 + 0x48) = 0xffffffff;
        *(uint32_t *)(pLVar22 + 0x4c) = 0;
      }
      iVar9 = LoadLevelDataFromBlock(local_e8[0], pLVar22, this_00);
      if ((iVar9 == 0) || (iVar25 = iVar25 + 1, *(int *)(self + 8) <= iVar25))
        break;
    }
  }
  iVar7 = *(int *)(self + 0xc);
  if (0 < iVar7) {
    iVar25 = 0;
    do {
      uVar16 = (uint) * (ushort *)(self + 0x1d8);
      if ((int)uVar16 <= iVar25) {
        if (*(int *)(self + 0x1f8) == -0x5eef3582) {
          if (*(ushort *)(self + 0x1d8) < *(ushort *)(self + 0x1da))
            goto LAB_0049107a;
          uVar4 = *(ushort *)(self + 0x1da) + *(short *)(self + 0x1e4);
          uVar23 = (ulong)(byte)self[0x1dc];
          pvVar15 = (void *)0x0;
          pvVar18 = *(void **)(self + 0x1e8);
          *(ushort *)(self + 0x1da) = uVar4;
          uVar17 = (ulong)uVar4 * 0xb8;
          pvVar14 = malloc(uVar23 + 0x10 + uVar17);
          if (pvVar14 != (void *)0x0) {
            pvVar15 = (void *)((long)pvVar14 + 0x10U +
                               (uVar23 - ((long)pvVar14 + 0x10U) % uVar23) % uVar23);
            *(ulong *)((long)pvVar15 + -0x10) = uVar17;
            *(void **)((long)pvVar15 + -8) = pvVar14;
            if (pvVar18 != (void *)0x0) {
              uVar23 = *(ulong *)((long)pvVar18 + -0x10);
              if (uVar17 <= *(ulong *)((long)pvVar18 + -0x10)) {
                uVar23 = uVar17;
              }
              memcpy(pvVar15, pvVar18, uVar23);
              free(*(void **)((long)pvVar18 + -8));
            }
          }
          pvVar18 = *(void **)(self + 0x1f0);
          *(void **)(self + 0x1e8) = pvVar15;
          if (pvVar18 != (void *)0x0) {
            uVar4 = *(ushort *)(self + 0x1da);
            uVar17 = (ulong)(byte)self[0x1dc];
            pvVar15 = (void *)0x0;
            uVar23 = (ulong)uVar4 * 2;
            pvVar14 = malloc(uVar17 + 0x10 + uVar23);
            if (pvVar14 != (void *)0x0) {
              pvVar15 = (void *)((long)pvVar14 + 0x10U +
                                 (uVar17 - ((long)pvVar14 + 0x10U) % uVar17) % uVar17);
              *(ulong *)((long)pvVar15 + -0x10) = uVar23;
              *(void **)((long)pvVar15 + -8) = pvVar14;
              uVar17 = *(ulong *)((long)pvVar18 + -0x10);
              if (uVar23 <= *(ulong *)((long)pvVar18 + -0x10)) {
                uVar17 = uVar23;
              }
              memcpy(pvVar15, pvVar18, uVar17);
              free(*(void **)((long)pvVar18 + -8));
              uVar4 = *(ushort *)(self + 0x1da);
            }
            uVar16 = (uint) * (ushort *)(self + 0x1d8);
            *(void **)(self + 0x1f0) = pvVar15;
            if (uVar4 <= *(ushort *)(self + 0x1d8))
              goto LAB_0049107a;
            while (true) {
              uVar10 = uVar16 & 0xffff;
              uVar16 = uVar16 + 1;
              *(uint16_t *)((long)pvVar15 + (ulong)uVar10 * 2) = 0xffff;
              if (uVar4 <= (ushort)uVar16)
                break;
              pvVar15 = *(void **)(self + 0x1f0);
            }
          }
          iVar7 = *(int *)(self + 0x1e0);
          uVar16 = (uint) * (ushort *)(self + 0x1d8);
        } else {
          uVar23 = (ulong)(byte)self[0x1dc];
          *(uint32_t *)(self + 0x1e0) = 0;
          pvVar15 = malloc(uVar23 + 0x3a8);
          puVar13 = (uint64_t *)0x0;
          if (pvVar15 != (void *)0x0) {
            puVar13 = (uint64_t *)((long)pvVar15 + 0x10U +
                                   (uVar23 - ((long)pvVar15 + 0x10U) % uVar23) % uVar23);
            puVar13[-2] = 0x398;
            puVar13[-1] = pvVar15;
          }
          *(uint64_t **)(self + 0x1e8) = puVar13;
          uVar23 = 0x398;
          bVar28 = false;
          iVar7 = 0x398;
          if (((ulong)puVar13 & 1) == 0) {
            puVar24 = puVar13;
            bVar3 = false;
            if (((ulong)puVar13 & 2) == 0)
              goto LAB_00491019;
          LAB_00491c85:
            bVar28 = bVar3;
            *(uint16_t *)puVar24 = 0;
            puVar24 = (uint64_t *)((long)puVar24 + 2);
            uVar16 = iVar7 - 2;
            uVar23 = (ulong)uVar16;
          } else {
            puVar24 = (uint64_t *)((long)puVar13 + 1);
            *(uint8_t *)puVar13 = 0;
            uVar23 = 0x397;
            bVar28 = true;
            iVar7 = 0x397;
            bVar3 = true;
            if (((ulong)puVar24 & 2) != 0)
              goto LAB_00491c85;
          LAB_00491019:
            uVar16 = (uint)uVar23;
          }
          if (((ulong)puVar24 & 4) != 0) {
            *(uint32_t *)puVar24 = 0;
            uVar23 = (ulong)(uVar16 - 4);
            puVar24 = (uint64_t *)((long)puVar24 + 4);
          }
          for (uVar17 = uVar23 >> 3; uVar17 != 0; uVar17 = uVar17 - 1) {
            *puVar24 = 0;
            puVar24 = puVar24 + (ulong)bVar29 * -2 + 1;
          }
          if ((uVar23 & 4) != 0) {
            *(uint32_t *)puVar24 = 0;
            puVar24 = (uint64_t *)((long)puVar24 + 4);
          }
          if ((uVar23 & 2) != 0) {
            *(uint16_t *)puVar24 = 0;
            puVar24 = (uint64_t *)((long)puVar24 + 2);
          }
          if (bVar28) {
            *(uint8_t *)puVar24 = 0;
          }
          *(uint16_t *)(self + 0x1d8) = 0;
          *(uint16_t *)(self + 0x1da) = 5;
          uVar16 = 0;
          *(uint32_t *)(self + 0x1f8) = 0xa110ca7e;
          *(uint16_t *)(self + 0x1e4) = 5;
        LAB_0049107a:
          iVar7 = *(int *)(self + 0x1e0);
        }
        if ((iVar7 == 1) && (*(short *)(self + 0x1da) != 0)) {
          psVar21 = *(short **)(self + 0x1f0);
          sVar6 = 1;
          sVar5 = *psVar21;
          while (sVar5 != -1) {
            psVar21 = psVar21 + 1;
            if (sVar6 == *(short *)(self + 0x1da))
              goto LAB_00491087;
            sVar6 = sVar6 + 1;
            sVar5 = *psVar21;
          }
          *psVar21 = (short)uVar16;
          uVar16 = (uint) * (ushort *)(self + 0x1d8);
        }
      LAB_00491087:
        uVar23 = 0xb8;
        *(short *)(self + 0x1d8) = (short)(uVar16 + 1);
        puVar13 = (uint64_t *)(((ulong)(uVar16 + 1 & 0xffff) - 1) * 0xb8 + *(long *)(self + 0x1e8));
        bVar28 = ((ulong)puVar13 & 1) != 0;
        if (bVar28) {
          *(uint8_t *)puVar13 = 0;
          puVar13 = (uint64_t *)((long)puVar13 + 1);
          uVar23 = 0xb7;
        }
        if (((ulong)puVar13 & 2) != 0) {
          *(uint16_t *)puVar13 = 0;
          uVar23 = (ulong)((int)uVar23 - 2);
          puVar13 = (uint64_t *)((long)puVar13 + 2);
        }
        if (((ulong)puVar13 & 4) != 0) {
          *(uint32_t *)puVar13 = 0;
          uVar23 = (ulong)((int)uVar23 - 4);
          puVar13 = (uint64_t *)((long)puVar13 + 4);
        }
        for (uVar17 = uVar23 >> 3; uVar17 != 0; uVar17 = uVar17 - 1) {
          *puVar13 = 0;
          puVar13 = puVar13 + (ulong)bVar29 * -2 + 1;
        }
        if ((uVar23 & 4) != 0) {
          *(uint32_t *)puVar13 = 0;
          puVar13 = (uint64_t *)((long)puVar13 + 4);
        }
        if ((uVar23 & 2) != 0) {
          *(uint16_t *)puVar13 = 0;
          puVar13 = (uint64_t *)((long)puVar13 + 2);
        }
        if (bVar28) {
          *(uint8_t *)puVar13 = 0;
        }
        lVar27 = ((ulong) * (ushort *)(self + 0x1d8) - 1) * 0xb8 + *(long *)(self + 0x1e8);
        if (lVar27 != 0) {
          CriticalSection__CriticalSection((CriticalSection *)(lVar27 + 0x68));
          *(uint16_t *)(lVar27 + 0x92) = 0;
          *(uint16_t *)(lVar27 + 0x90) = 0;
          *(uint16_t *)(lVar27 + 0x9c) = 1;
          *(uint64_t *)(lVar27 + 0xa0) = 0;
          *(uint64_t *)(lVar27 + 0xa8) = 0;
          *(uint32_t *)(lVar27 + 0xb0) = 0;
          *(uint8_t *)(lVar27 + 0x94) = 4;
          *(uint32_t *)(lVar27 + 0x98) = 0;
        }
        iVar7 = *(int *)(self + 0xc);
      }
      iVar25 = iVar25 + 1;
    } while (iVar25 < iVar7);
    if (0 < iVar7) {
      local_15c = 0;
      local_130 = 0;
      do {
        local_58 = (PropertyVariable *)0x0;
        local_130 = PropertiesFile__FindPropertyBlock(this_00, (PropertyBlock **)&local_58, "warp",
                                                      local_130);
        PropertiesFile__FindPropertyVariable(this_00, &local_60, (PropertyBlock *)local_58,
                                             "intro");
        PropertiesFile__FindPropertyVariable(this_00, local_d8, (PropertyBlock *)local_58, "char");
        PropertiesFile__FindPropertyVariable(this_00, local_c8, (PropertyBlock *)local_58, "id");
        PropertiesFile__FindPropertyVariable(this_00, local_b8, (PropertyBlock *)local_58, "name");
        if (((local_60 == (PropertyVariable *)0x0) || (local_d8[0] == (PropertyVariable *)0x0)) ||
            (local_c8[0] == (PropertyVariable *)0x0)) {
          Error__ThrowFatalError("Invalid Warpzone in chapter file");
        }
        iVar7 = StringToInt(local_c8[0] + 0x20);
        if ((int)(uint) * (ushort *)(self + 0x1d8) < iVar7) {
          Error__ThrowFatalError("Invalid Warpzone ID");
        }
        pPVar26 =
            (PropertyVariable *)((ulong)(iVar7 - 1U & 0xffff) * 0xb8 + *(long *)(self + 0x1e8));
        *(int *)(pPVar26 + 0x20) = iVar7 + -1;
        *(uint64_t *)(pPVar26 + 0x30) = 0;
        *(uint64_t *)(pPVar26 + 0x28) = 0;
        *(uint16_t *)(pPVar26 + 0x90) = 0;
        if ((*(int *)(pPVar26 + 0x98) == 1) && (uVar4 = *(ushort *)(pPVar26 + 0x92), uVar4 != 0)) {
          lVar27 = 0;
          do {
            *(uint16_t *)(*(long *)(pPVar26 + 0xa8) + lVar27) = 0xffff;
            lVar27 = lVar27 + 2;
          } while (lVar27 != (ulong)(uVar4 - 1 & 0xffff) * 2 + 2);
        }
        uVar8 = StringToInt(local_d8[0] + 0x20);
        *(uint32_t *)(pPVar26 + 0x24) = uVar8;
        if (local_60 + 0x20 != pPVar26) {
          *(uint64_t *)pPVar26 = *(uint64_t *)(local_60 + 0x20);
          *(uint64_t *)(pPVar26 + 8) = *(uint64_t *)(local_60 + 0x28);
          *(uint64_t *)(pPVar26 + 0x10) = *(uint64_t *)(local_60 + 0x30);
          *(uint64_t *)(pPVar26 + 0x18) = *(uint64_t *)(local_60 + 0x38);
        }
        if (local_b8[0] == (PropertyVariable *)0x0) {
          if (pPVar26 != (PropertyVariable *)0x5c1cac) {
            *(uint32_t *)(pPVar26 + 0x48) = 0x70726157;
            pPVar26[0x4c] = (PropertyVariable)0x0;
          }
        } else if (local_b8[0] + 0x20 != pPVar26 + 0x48) {
          *(uint64_t *)(pPVar26 + 0x48) = *(uint64_t *)(local_b8[0] + 0x20);
          *(uint64_t *)(pPVar26 + 0x50) = *(uint64_t *)(local_b8[0] + 0x28);
          *(uint64_t *)(pPVar26 + 0x58) = *(uint64_t *)(local_b8[0] + 0x30);
          *(uint64_t *)(pPVar26 + 0x60) = *(uint64_t *)(local_b8[0] + 0x38);
        }
        iVar25 = 0;
        local_a8[0] = (PropertyVariable *)0x0;
        Sprint("warp%ilevel", local_128, iVar7);
        while (iVar25 = PropertiesFile__FindPropertyBlock(this_00, (PropertyBlock **)local_a8,
                                                          (char *)local_128, iVar25),
               local_a8[0] != (PropertyVariable *)0x0) {
          if (*(int *)(pPVar26 + 0xb0) == -0x5eef3582) {
            uVar4 = *(ushort *)(pPVar26 + 0x90);
            if (*(ushort *)(pPVar26 + 0x92) <= uVar4) {
              uVar4 = *(ushort *)(pPVar26 + 0x92) + *(short *)(pPVar26 + 0x9c);
              uVar17 = (ulong)(byte)pPVar26[0x94];
              pvVar18 = *(void **)(pPVar26 + 0xa0);
              *(ushort *)(pPVar26 + 0x92) = uVar4;
              uVar23 = (ulong)uVar4 * 0x50;
              pvVar14 = malloc(uVar17 + 0x10 + uVar23);
              pvVar15 = (void *)0x0;
              if (pvVar14 != (void *)0x0) {
                pvVar15 = (void *)((long)pvVar14 + 0x10U +
                                   (uVar17 - ((long)pvVar14 + 0x10U) % uVar17) % uVar17);
                *(ulong *)((long)pvVar15 + -0x10) = uVar23;
                *(void **)((long)pvVar15 + -8) = pvVar14;
                if (pvVar18 != (void *)0x0) {
                  uVar17 = *(ulong *)((long)pvVar18 + -0x10);
                  if (uVar23 <= *(ulong *)((long)pvVar18 + -0x10)) {
                    uVar17 = uVar23;
                  }
                  memcpy(pvVar15, pvVar18, uVar17);
                  free(*(void **)((long)pvVar18 + -8));
                }
              }
              *(void **)(pPVar26 + 0xa0) = pvVar15;
              pvVar15 = *(void **)(pPVar26 + 0xa8);
              if (pvVar15 != (void *)0x0) {
                uVar19 = *(ushort *)(pPVar26 + 0x92);
                uVar17 = (ulong)(byte)pPVar26[0x94];
                uVar23 = (ulong)uVar19 * 2;
                pvVar14 = malloc(uVar17 + 0x10 + uVar23);
                pvVar18 = (void *)0x0;
                if (pvVar14 != (void *)0x0) {
                  pvVar18 = (void *)((long)pvVar14 + 0x10U +
                                     (uVar17 - ((long)pvVar14 + 0x10U) % uVar17) % uVar17);
                  *(void **)((long)pvVar18 + -8) = pvVar14;
                  *(ulong *)((long)pvVar18 + -0x10) = uVar23;
                  uVar17 = *(ulong *)((long)pvVar15 + -0x10);
                  if (uVar23 <= *(ulong *)((long)pvVar15 + -0x10)) {
                    uVar17 = uVar23;
                  }
                  memcpy(pvVar18, pvVar15, uVar17);
                  free(*(void **)((long)pvVar15 + -8));
                  uVar19 = *(ushort *)(pPVar26 + 0x92);
                }
                uVar4 = *(ushort *)(pPVar26 + 0x90);
                *(void **)(pPVar26 + 0xa8) = pvVar18;
                if (uVar19 <= uVar4)
                  goto LAB_004916fe;
                while (true) {
                  uVar23 = (ulong)uVar4;
                  uVar4 = uVar4 + 1;
                  *(uint16_t *)((long)pvVar18 + uVar23 * 2) = 0xffff;
                  if (uVar19 <= uVar4)
                    break;
                  pvVar18 = *(void **)(pPVar26 + 0xa8);
                }
              }
              uVar4 = *(ushort *)(pPVar26 + 0x90);
            }
          } else {
            uVar23 = (ulong)(byte)pPVar26[0x94];
            *(uint32_t *)(pPVar26 + 0x98) = 0;
            pvVar15 = malloc(uVar23 + 0x1a0);
            puVar13 = (uint64_t *)0x0;
            if (pvVar15 != (void *)0x0) {
              puVar13 = (uint64_t *)((uVar23 - ((long)pvVar15 + 0x10U) % uVar23) % uVar23 +
                                     (long)pvVar15 + 0x10U);
              puVar13[-2] = 400;
              puVar13[-1] = pvVar15;
            }
            *(uint64_t **)(pPVar26 + 0xa0) = puVar13;
            uVar23 = 400;
            bVar28 = false;
            iVar7 = 400;
            if (((ulong)puVar13 & 1) == 0) {
              puVar24 = puVar13;
              bVar3 = false;
              if (((ulong)puVar13 & 2) == 0)
                goto LAB_00491694;
            LAB_00491b58:
              bVar28 = bVar3;
              *(uint16_t *)puVar24 = 0;
              puVar24 = (uint64_t *)((long)puVar24 + 2);
              uVar16 = iVar7 - 2;
              uVar23 = (ulong)uVar16;
            } else {
              puVar24 = (uint64_t *)((long)puVar13 + 1);
              *(uint8_t *)puVar13 = 0;
              uVar23 = 399;
              bVar28 = true;
              iVar7 = 399;
              bVar3 = true;
              if (((ulong)puVar24 & 2) != 0)
                goto LAB_00491b58;
            LAB_00491694:
              uVar16 = (uint)uVar23;
            }
            if (((ulong)puVar24 & 4) != 0) {
              *(uint32_t *)puVar24 = 0;
              uVar23 = (ulong)(uVar16 - 4);
              puVar24 = (uint64_t *)((long)puVar24 + 4);
            }
            for (uVar17 = uVar23 >> 3; uVar17 != 0; uVar17 = uVar17 - 1) {
              *puVar24 = 0;
              puVar24 = puVar24 + (ulong)bVar29 * -2 + 1;
            }
            if ((uVar23 & 4) != 0) {
              *(uint32_t *)puVar24 = 0;
              puVar24 = (uint64_t *)((long)puVar24 + 4);
            }
            if ((uVar23 & 2) != 0) {
              *(uint16_t *)puVar24 = 0;
              puVar24 = (uint64_t *)((long)puVar24 + 2);
            }
            if (bVar28) {
              *(uint8_t *)puVar24 = 0;
            }
            *(uint16_t *)(pPVar26 + 0x90) = 0;
            *(uint16_t *)(pPVar26 + 0x92) = 5;
            uVar4 = 0;
            *(uint32_t *)(pPVar26 + 0xb0) = 0xa110ca7e;
            *(uint16_t *)(pPVar26 + 0x9c) = 5;
          }
        LAB_004916fe:
          if ((*(int *)(pPVar26 + 0x98) == 1) && (*(short *)(pPVar26 + 0x92) != 0)) {
            puVar20 = *(ushort **)(pPVar26 + 0xa8);
            sVar5 = 0;
            uVar19 = *puVar20;
            while (uVar19 != 0xffff) {
              puVar20 = puVar20 + 1;
              sVar5 = sVar5 + 1;
              if (sVar5 == *(short *)(pPVar26 + 0x92))
                goto LAB_0049170d;
              uVar19 = *puVar20;
            }
            *puVar20 = uVar4;
            uVar4 = *(ushort *)(pPVar26 + 0x90);
          }
        LAB_0049170d:
          uVar23 = 0x50;
          bVar28 = false;
          iVar7 = 0x50;
          *(ushort *)(pPVar26 + 0x90) = uVar4 + 1;
          puVar13 = (uint64_t *)(((ulong)(ushort)(uVar4 + 1) * 5 + -5) * 0x10 +
                                 *(long *)(pPVar26 + 0xa0));
          if (((ulong)puVar13 & 1) == 0) {
            puVar24 = puVar13;
            bVar3 = false;
            if (((ulong)puVar13 & 2) == 0)
              goto LAB_00491747;
          LAB_00491a98:
            bVar28 = bVar3;
            *(uint16_t *)puVar24 = 0;
            puVar24 = (uint64_t *)((long)puVar24 + 2);
            uVar16 = iVar7 - 2;
            uVar23 = (ulong)uVar16;
          } else {
            puVar24 = (uint64_t *)((long)puVar13 + 1);
            *(uint8_t *)puVar13 = 0;
            uVar23 = 0x4f;
            bVar28 = true;
            iVar7 = 0x4f;
            bVar3 = true;
            if (((ulong)puVar24 & 2) != 0)
              goto LAB_00491a98;
          LAB_00491747:
            uVar16 = (uint)uVar23;
          }
          if (((ulong)puVar24 & 4) != 0) {
            *(uint32_t *)puVar24 = 0;
            uVar23 = (ulong)(uVar16 - 4);
            puVar24 = (uint64_t *)((long)puVar24 + 4);
          }
          for (uVar17 = uVar23 >> 3; uVar17 != 0; uVar17 = uVar17 - 1) {
            *puVar24 = 0;
            puVar24 = puVar24 + (ulong)bVar29 * -2 + 1;
          }
          if ((uVar23 & 4) != 0) {
            *(uint32_t *)puVar24 = 0;
            puVar24 = (uint64_t *)((long)puVar24 + 4);
          }
          if ((uVar23 & 2) != 0) {
            *(uint16_t *)puVar24 = 0;
            puVar24 = (uint64_t *)((long)puVar24 + 2);
          }
          if (bVar28) {
            *(uint8_t *)puVar24 = 0;
          }
          pLVar22 = (LevelInfo *)(((ulong) * (ushort *)(pPVar26 + 0x90) * 5 + -5) * 0x10 +
                                  *(long *)(pPVar26 + 0xa0));
          if (pLVar22 != (LevelInfo *)0x0) {
            *(uint32_t *)(pLVar22 + 0x40) = 0;
            *(uint32_t *)(pLVar22 + 0x44) = 0xffffffff;
            *(uint32_t *)(pLVar22 + 0x48) = 0xffffffff;
            *(uint32_t *)(pLVar22 + 0x4c) = 0;
          }
          iVar7 = LoadLevelDataFromBlock((PropertyBlock *)local_a8[0], pLVar22, this_00);
          if ((iVar7 == 0) || (*(int *)(self + 0x10) = *(int *)(self + 0x10) + 1,
                               local_a8[0] == (PropertyVariable *)0x0))
            break;
        }
        local_15c = local_15c + 1;
      } while (local_15c < *(int *)(self + 0xc));
    }
  }
  if (this_00 != (PropertiesFile *)0x0) {
    PropertiesFile__PropertiesFile(this_00);
    operator_delete(this_00);
  }
  GSMBChapterData__LoadData(SMBChapterData, arg2);
  *(int *)(self + 0x200) = arg2;
  return;
}

/* ======================================================================
 * SMBChapter__PlayChapterMusic__00491ea0  (Ghidra `PlayChapterMusic` @ 00491ea0)
 * Signature: uint8_t __thiscall PlayChapterMusic(SMBChapter * self)
 * Class: SMBChapter
 * Calls: `GSMBMenu__IsInReplayMode`
 * Called by: `GSMBMenu__LoadSelectedLevel`, `GSuperMeatBoy__ShowGame`, `SMBChapterLoadWarpZone`, `SMBChapter__PlayChapterMusic`
 */
/* SMBChapter__PlayChapterMusic__00491ea0() */

void __thiscall SMBChapter__PlayChapterMusic__00491ea0(SMBChapter *self)

{
  int iVar1;

  if (*(short *)(self + 0x2e4) != 1) {
    iVar1 = GSMBMenu__IsInReplayMode(SMBMenu);
    if (iVar1 != 1) {
      PlayChapterMusic(self);
      return;
    }
  }
  return;
}

/* ======================================================================
 * SMBChapter__StopChapterMusic  (Ghidra `StopChapterMusic` @ 00491ee0)
 * Signature: uint8_t __thiscall StopChapterMusic(SMBChapter * self)
 * Class: SMBChapter
 * Calls: `TAudioInstance__Stop`
 * Called by: `GSuperMeatBoy__HideGame`
 */
/* SMBChapter__StopChapterMusic() */

void __thiscall SMBChapter__StopChapterMusic(SMBChapter *self)

{
  if (*(int *)(self + 0x2e0) != 1) {
    if (*(uint *)(self + 0x204) < 2) {
      if (*(long *)(self + 0x18) != 0) {
        TAudioInstance__Stop((TAudioInstance *)(self + 0x48));
        return;
      }
    } else {
      if (*(uint *)(self + 0x204) == 10) {
        TAudioInstance__Stop((TAudioInstance *)(self + 0x98));
        return;
      }
      if (*(long *)(self + 0x28) != 0) {
        TAudioInstance__Stop((TAudioInstance *)(self + 0x70));
        return;
      }
    }
  }
  return;
}

/* ======================================================================
 * SMBChapter__PlayChapterMenuMusic  (Ghidra `PlayChapterMenuMusic` @ 00491f50)
 * Signature: uint8_t __thiscall PlayChapterMenuMusic(SMBChapter * self)
 * Class: SMBChapter
 * Calls: `TAudioCue__Play`
 * Called by: `GSMBMenu__ShowChapterMap`, `SMBMenuChapterIntroEndFinished`
 */
/* SMBChapter__PlayChapterMenuMusic() */

void __thiscall SMBChapter__PlayChapterMenuMusic(SMBChapter *self)

{
  TAudioCue *this_00;

  this_00 = *(TAudioCue **)(self + 0x30);
  if ((*(int *)(self + 0x204) == 10) || (*(int *)(self + 0x204) == 0)) {
    if (this_00 != (TAudioCue *)0x0) {
      TAudioCue__Play(this_00, GLOBALMUSICVOLUME, 0, (TAudioInstance *)(self + 0xc0));
      if (*(TAudioCue **)(self + 0x38) != (TAudioCue *)0x0) {
        TAudioCue__Play(*(TAudioCue **)(self + 0x38), 0, 0, (TAudioInstance *)(self + 0xe8));
        return;
      }
    }
  } else if (this_00 != (TAudioCue *)0x0) {
    TAudioCue__Play(this_00, 0, 0, (TAudioInstance *)(self + 0xc0));
    if (*(TAudioCue **)(self + 0x38) != (TAudioCue *)0x0) {
      TAudioCue__Play(*(TAudioCue **)(self + 0x38), GLOBALMUSICVOLUME, 0,
                      (TAudioInstance *)(self + 0xe8));
      return;
    }
  }
  return;
}

/* ======================================================================
 * SMBChapter__ResetChapterMusic  (Ghidra `ResetChapterMusic` @ 00491fe0)
 * Signature: uint8_t __thiscall ResetChapterMusic(SMBChapter * self)
 * Class: SMBChapter
 * Calls: `TAudioInstance__SetVolume`
 * Called by: `GSMBMenu__UnlocksFinished`, `SMBMenuUnlocksFinished`
 */
/* SMBChapter__ResetChapterMusic() */

void __thiscall SMBChapter__ResetChapterMusic(SMBChapter *self)

{
  if ((*(int *)(self + 0x204) == 10) || (*(int *)(self + 0x204) == 0)) {
    if (*(long *)(self + 0x30) != 0) {
      TAudioInstance__SetVolume((TAudioInstance *)(self + 0xc0), GLOBALMUSICVOLUME);
      TAudioInstance__SetVolume((TAudioInstance *)(self + 0xe8), 0);
      return;
    }
  } else if (*(long *)(self + 0x30) != 0) {
    TAudioInstance__SetVolume((TAudioInstance *)(self + 0xc0), 0);
    TAudioInstance__SetVolume((TAudioInstance *)(self + 0xe8), GLOBALMUSICVOLUME);
    return;
  }
  return;
}

/* ======================================================================
 * SMBChapter__StopChapterMenuMusic  (Ghidra `StopChapterMenuMusic` @ 00492060)
 * Signature: uint8_t __thiscall StopChapterMenuMusic(SMBChapter * self)
 * Class: SMBChapter
 * Calls: `TAudioInstance__Stop`
 * Called by: `GSMBMenu__EnterSelectedLevel`, `GSMBMenu__HideChapterMap`, `GSMBMenu__LoadSelectedLevel`, `GSMBMenu__Update`
 */
/* SMBChapter__StopChapterMenuMusic() */

void __thiscall SMBChapter__StopChapterMenuMusic(SMBChapter *self)

{
  if (*(int *)(self + 0x2e0) != 0) {
    return;
  }
  TAudioInstance__Stop((TAudioInstance *)(self + 0xc0));
  TAudioInstance__Stop((TAudioInstance *)(self + 0xe8));
  return;
}

/* ======================================================================
 * SMBChapter__CrossFadeChapterMusic  (Ghidra `CrossFadeChapterMusic` @ 00492090)
 * Signature: uint8_t __thiscall CrossFadeChapterMusic(SMBChapter * self)
 * Class: SMBChapter
 * Calls: `TAudio__ManageEffect`
 * Called by: `GSMBMenu__ToggleLightAndDark`
 */
/* SMBChapter__CrossFadeChapterMusic() */

void __thiscall SMBChapter__CrossFadeChapterMusic(SMBChapter *self)

{
  AudioEffectBase *pAVar1;
  uint32_t local_38[2];
  SMBChapter *local_30;
  SMBChapter *local_28;
  uint32_t local_20;
  uint32_t local_1c;
  uint32_t local_18;

  local_38[0] = 1;
  local_1c = 0;
  if (*(int *)(self + 0x204) == 0) {
    local_30 = self + 0xc0;
    local_28 = self + 0xe8;
  } else {
    local_30 = self + 0xe8;
    local_28 = self + 0xc0;
  }
  local_18 = 0x3f800000;
  local_20 = GLOBALMUSICVOLUME;
  pAVar1 = (AudioEffectBase *)AudioEffectFade__Create((AudioEffectFadeCreation *)local_38);
  TAudio__ManageEffect(Audio, pAVar1);
  return;
}

/* ======================================================================
 * SMBChapter__StartReplayCurrentLevel  (Ghidra `StartReplayCurrentLevel` @ 00492110)
 * Signature: uint8_t __thiscall StartReplayCurrentLevel(SMBChapter * self)
 * Class: SMBChapter
 * Calls: (none)
 * Called by: `ReplayLevel`
 */
/* SMBChapter__StartReplayCurrentLevel() */

void __thiscall SMBChapter__StartReplayCurrentLevel(SMBChapter *self)

{
  int iVar1;

  *(uint16_t *)(self + 0x14) = 1;
  iVar1 = 0;
  if (1 < iCurrentLevel) {
    iVar1 = iCurrentLevel + -1;
  }
  iCurrentLevel = iVar1;
  return;
}

/* ======================================================================
 * SMBChapter__EndReplayCurrentLevel  (Ghidra `EndReplayCurrentLevel` @ 00492130)
 * Signature: uint8_t __thiscall EndReplayCurrentLevel(SMBChapter * self)
 * Class: SMBChapter
 * Calls: (none)
 * Called by: `ReplayLevel`
 */
/* SMBChapter__EndReplayCurrentLevel() */

void __thiscall SMBChapter__EndReplayCurrentLevel(SMBChapter *self)

{
  *(uint16_t *)(self + 0x14) = 0;
  return;
}

/* ======================================================================
 * SMBChapter__Reset  (Ghidra `Reset` @ 00492140)
 * Signature: uint8_t __thiscall Reset(SMBChapter * self)
 * Class: SMBChapter
 * Calls: `GSMBChapterData__SetCurrentLevel`
 * Called by: `GSMBMenu__ResetForPurchase`, `GSMBMenu__ResetForSignout`, `SMBMenuChapterIntroFinished`
 */
/* SMBChapter__Reset() */

void __thiscall SMBChapter__Reset(SMBChapter *self)

{
  iCurrentLevel = 0;
  GSMBChapterData__SetCurrentLevel(SMBChapterData, 0);
  *(uint32_t *)self = iCurrentLevel;
  return;
}

/* ======================================================================
 * SMBChapter__LoadCurrentLevel  (Ghidra `LoadCurrentLevel` @ 00492170)
 * Signature: uint8_t __thiscall LoadCurrentLevel(SMBChapter * self)
 * Class: SMBChapter
 * Calls: `GSMBChapterData__SetCurrentLevel`, `GSMBMenu__GetLevelDataByIndex`, `GetLevelInfoArray`, `SMBEditor__LoadLevel`
 * Called by: (none)
 */
/* SMBChapter__LoadCurrentLevel() */

uint64_t __thiscall SMBChapter__LoadCurrentLevel(SMBChapter *self)

{
  long lVar1;
  long local_38;
  uchar *local_30;
  uint local_28[6];

  lVar1 = GetLevelInfoArray();
  local_38 = 0;
  local_30 = (uchar *)0x0;
  local_28[0] = 0;
  if (*(int *)(self + 0x200) == 9) {
    GSMBMenu__GetLevelDataByIndex(SMBMenu, iCurrentLevel, &local_30, local_28);
  } else {
    local_38 = (ulong)(iCurrentLevel & 0xffff) * 0x50 + *(long *)(lVar1 + 0x38);
  }
  SMBEditor__LoadLevel(SuperMeatBoyEditor, (TileLevelLoad *)&local_38);
  GSMBChapterData__SetCurrentLevel(SMBChapterData, *(int *)self);
  return 0;
}

/* ======================================================================
 * SMBChapter__LoadBossLevel  (Ghidra `LoadBossLevel` @ 00492200)
 * Signature: uint8_t __thiscall LoadBossLevel(SMBChapter * self)
 * Class: SMBChapter
 * Calls: `CreateSMBBoss`, `SMBEditor__LoadLevel`
 * Called by: `GSMBMenu__LoadSelectedLevel`
 */
/* SMBChapter__LoadBossLevel() */

void __thiscall SMBChapter__LoadBossLevel(SMBChapter *self)

{
  SMBChapter *local_28;
  uint64_t local_20;
  uint32_t local_18;

  *(uint32_t *)(self + 0x26c) = 1;
  local_20 = 0;
  local_18 = 0;
  if (*(short *)(self + 0x2e6) == 0) {
    local_28 = self + 0x208;
  } else {
    local_28 = self + 0x228;
  }
  *(uint32_t *)(self + 0x204) = 10;
  CreateSMBBoss(0xffffffff);
  SMBEditor__LoadLevel(SuperMeatBoyEditor, (TileLevelLoad *)&local_28);
  return;
}

/* ======================================================================
 * SMBChapter__SetLevelType  (Ghidra `SetLevelType` @ 00492270)
 * Signature: uint8_t __thiscall SetLevelType(SMBChapter * self, tagChapterLevelType arg1)
 * Class: SMBChapter
 * Calls: `GSMBChapterData__SetLevelType`
 * Called by: `GSMBMenu__ShowChapterMap`, `GSMBMenu__ToggleLightAndDark`
 */
/* SMBChapter__SetLevelType(tagChapterLevelType) */

void __thiscall SMBChapter__SetLevelType(SMBChapter *self, uint32_t arg2)

{
  *(uint32_t *)(self + 0x204) = arg2;
  GSMBChapterData__SetLevelType(SMBChapterData);
  return;
}

/* ======================================================================
 * SMBChapter__SetCurrentLevel  (Ghidra `SetCurrentLevel` @ 00492290)
 * Signature: uint8_t __thiscall SetCurrentLevel(SMBChapter * self, int arg1)
 * Class: SMBChapter
 * Calls: (none)
 * Called by: `GSMBMenu__EnterSelectedLevel`, `GSMBMenu__LoadSelectedLevel`
 */
/* SMBChapter__SetCurrentLevel(int) */

void __thiscall SMBChapter__SetCurrentLevel(SMBChapter *self, int arg1)

{
  *(int *)self = arg1;
  return;
}

/* ======================================================================
 * SMBChapter__GetNumberOfLevels  (Ghidra `GetNumberOfLevels` @ 004922a0)
 * Signature: uint8_t __thiscall GetNumberOfLevels(SMBChapter * self)
 * Class: SMBChapter
 * Calls: (none)
 * Called by: `TransitionToNextLevel`
 */
/* SMBChapter__GetNumberOfLevels() */

uint __thiscall SMBChapter__GetNumberOfLevels(SMBChapter *self)

{
  switch (*(uint32_t *)(self + 0x204)) {
  default:
    return *(uint *)(self + 4);
  case 1:
    return *(uint *)(self + 8);
  case 2:
    return (uint) * (ushort *)(*(long *)(self + 0x1e8) + 0x90);
  case 3:
    return (uint) * (ushort *)(*(long *)(self + 0x1e8) + 0x148);
  case 4:
    return (uint) * (ushort *)(*(long *)(self + 0x1e8) + 0x200);
  case 5:
    return (uint) * (ushort *)(*(long *)(self + 0x1e8) + 0x2b8);
  case 6:
    return (uint) * (ushort *)(*(long *)(self + 0x1e8) + 0x370);
  case 7:
    return (uint) * (ushort *)(*(long *)(self + 0x1e8) + 0x428);
  case 8:
    return (uint) * (ushort *)(*(long *)(self + 0x1e8) + 0x4e0);
  case 9:
    return (uint) * (ushort *)(*(long *)(self + 0x1e8) + 0x598);
  }
}

/* ======================================================================
 * SMBChapter__GetTotalNumberOfLevels  (Ghidra `GetTotalNumberOfLevels` @ 00492350)
 * Signature: uint8_t __thiscall GetTotalNumberOfLevels(SMBChapter * self)
 * Class: SMBChapter
 * Calls: (none)
 * Called by: `GSMBChapterData__LoadData`
 */
/* SMBChapter__GetTotalNumberOfLevels() */

uint32_t __thiscall SMBChapter__GetTotalNumberOfLevels(SMBChapter *self)

{
  return *(uint32_t *)(self + 0x10);
}

/* ======================================================================
 * SMBChapter__ActivateWarpZoneFromMenu  (Ghidra `ActivateWarpZoneFromMenu` @ 00492360)
 * Signature: uint8_t __thiscall ActivateWarpZoneFromMenu(SMBChapter * self, int arg1)
 * Class: SMBChapter
 * Calls: `DisableLoadingRenderThread`, `FlashAnimationLibrary__FlashAnimationLibrary__00576680`, `FlashAnimationLibrary__GetMovieClip__005731d0`, `FormatResourcePath`, `GSMBChapterData__ResetWarpZoneBandages`, `GSMBChapterData__SaveLevelData`, `GSMBChapterData__UnlockGlitchLevel`, `GSMBCutSceneManager__PlayCutScene`, `GSuperMeatBoy__Freeze`, `GSuperMeatBoy__getChar` (+7 more)
 * Called by: `GSMBMenu__EnterSelectedLevel`
 */
/* WARNING: Removing unreachable block (ram,0x004927ee) */
/* WARNING: Removing unreachable block (ram,0x004927fe) */
/* SMBChapter__ActivateWarpZoneFromMenu(int) */

void __thiscall SMBChapter__ActivateWarpZoneFromMenu(SMBChapter *self, int arg1)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  FlashAnimationLibrary *pFVar4;
  UserProfile *pUVar5;
  long lVar6;
  bool bVar7;
  uint32_t local_98;
  uint32_t local_94;
  uint32_t local_90;
  uint64_t local_88;
  code *local_80;
  SMBChapter *local_78;
  uint64_t local_70;
  uint64_t local_68;
  uint32_t local_60;
  uint32_t local_5c;
  uint32_t local_58;
  long local_48[2];
  uint8_t *local_38;
  allocator local_2b[11];

  lVar6 = (ulong)(ushort)arg1 * 0xb8 + *(long *)(self + 0x1e8);
  *(uint16_t *)(self + 0x16) = 1;
  GSMBChapterData__ResetWarpZoneBandages(SMBChapterData);
  if (lVar6 == 0) {
    lVar6 = GetLevelInfoArray(self);
    iVar2 = *(int *)((ulong)(iCurrentLevel - 1U & 0xffff) * 0x50 + *(long *)(lVar6 + 0x38) + 0x44);
    if (iVar2 == -1) {
      *(uint64_t *)(self + 0x2e8) = 0;
      goto LAB_00492553;
    }
    lVar6 = (ulong)(iVar2 - 1U & 0xffff) * 0xb8 + *(long *)(self + 0x1e8);
    *(long *)(self + 0x2e8) = lVar6;
    if (lVar6 == 0)
      goto LAB_00492553;
  } else {
    *(long *)(self + 0x2e8) = lVar6;
  }
  bVar7 = *(int *)(lVar6 + 0x20) == GLITCH_WARP_INDEX;
  *(uint64_t *)(lVar6 + 0x40) = 0;
  *(uint64_t *)(*(long *)(self + 0x2e8) + 0x38) = 0;
  if (*(short *)(self + 0x16) == 0) {
    if (!bVar7) {
      SMBCurrLevelData._4_4_ = SMBCurrLevelData._4_4_ | 8;
      GSMBChapterData__SaveLevelData(SMBChapterData, (SMBLevelData *)SMBCurrLevelData);
      goto LAB_004923f1;
    }
    GSMBChapterData__UnlockGlitchLevel(SMBChapterData);
    SMBCurrLevelData._0_4_ = *(uint32_t *)(SMBHUD + 0x418);
    GSMBChapterData__SaveLevelData(SMBChapterData, (SMBLevelData *)SMBCurrLevelData);
    if (*(int *)(SuperMeatBoy + 0x2c) == 0)
      goto LAB_00492570;
  LAB_00492405:
    if (bVar7) {
      pFVar4 = *(FlashAnimationLibrary **)(self + 0x288);
    LAB_0049272f:
      local_88 = FlashAnimationLibrary__GetMovieClip__005731d0(pFVar4, 4);
      *(uint64_t *)(self + 0x290) = local_88;
    } else {
      pFVar4 = *(FlashAnimationLibrary **)(self + 0x288);
      if (*(int *)(*(long *)(self + 0x2e8) + 0x20) == 1) {
      LAB_00492674:
        local_88 = FlashAnimationLibrary__GetMovieClip__005731d0(pFVar4, 2);
        *(uint64_t *)(self + 0x290) = local_88;
      } else {
      LAB_00492426:
        local_88 = FlashAnimationLibrary__GetMovieClip__005731d0(pFVar4, 0);
        *(uint64_t *)(self + 0x290) = local_88;
      }
    }
  } else {
  LAB_004923f1:
    if (*(int *)(SuperMeatBoy + 0x2c) != 0)
      goto LAB_00492405;
  LAB_00492570:
    if (bVar7) {
      lVar6 = GSuperMeatBoy__getChar(SuperMeatBoy, 1);
      pFVar4 = *(FlashAnimationLibrary **)(self + 0x288);
      if (*(int *)(lVar6 + 0xa54) != 0) {
        local_88 = FlashAnimationLibrary__GetMovieClip__005731d0(pFVar4, 5);
        *(uint64_t *)(self + 0x290) = local_88;
        goto LAB_00492434;
      }
      goto LAB_0049272f;
    }
    if (*(int *)(*(long *)(self + 0x2e8) + 0x20) == 1) {
      lVar6 = GSuperMeatBoy__getChar(SuperMeatBoy, 1);
      pFVar4 = *(FlashAnimationLibrary **)(self + 0x288);
      if (*(int *)(lVar6 + 0xa54) != 0) {
        local_88 = FlashAnimationLibrary__GetMovieClip__005731d0(pFVar4, 3);
        *(uint64_t *)(self + 0x290) = local_88;
        goto LAB_00492434;
      }
      goto LAB_00492674;
    }
    lVar6 = GSuperMeatBoy__getChar(SuperMeatBoy, 1);
    pFVar4 = *(FlashAnimationLibrary **)(self + 0x288);
    if (*(int *)(lVar6 + 0xa54) == 0)
      goto LAB_00492426;
    local_88 = FlashAnimationLibrary__GetMovieClip__005731d0(pFVar4, 1);
    *(uint64_t *)(self + 0x290) = local_88;
  }
LAB_00492434:
  local_70 = 0;
  local_68 = 0;
  local_5c = 1;
  local_94 = 0x43f00000;
  local_98 = 0x44200000;
  local_90 = 1;
  local_80 = SMBChapterPlayWarpIntro;
  local_60 = 1;
  local_58 = 0;
  local_78 = self;
  GSMBCutSceneManager__PlayCutScene(SMBCutSceneManager, (SMBCutScene *)&local_98);
  if (*(uint8_t **)(self + 0x2e8) != &DAT_005c1d05 /* R:"none" */) {
    std__string_string((string *)local_48, "/LevelPalettes/", local_2b);
    pcVar3 = *(char **)(self + 0x2e8);
    strlen(pcVar3);
    /* try { // try from 004924d6 to 004924da has its CatchHandler @ 004927f9 */
    std__string_append((char *)local_48, (ulong)pcVar3);
    local_38 = &DAT_008184c8 /* R:0.00016803004837129265f */;
    /* try { // try from 004924ee to 004924ff has its CatchHandler @ 004927e9 */
    pcVar3 = (char *)FormatResourcePath(local_48[0], &local_38);
    pFVar4 = operator_new(0xb0);
    /* try { // try from 00492509 to 0049250d has its CatchHandler @ 004927c2 */
    FlashAnimationLibrary__FlashAnimationLibrary__00576680(pFVar4, pcVar3);
    *(FlashAnimationLibrary **)(*(long *)(self + 0x2e8) + 0x28) = pFVar4;
    /* try { // try from 00492519 to 0049251d has its CatchHandler @ 004927e9 */
    Loader__WaitAll();
    if ((allocator *)(local_38 + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage) {
      LOCK();
      piVar1 = (int *)(local_38 + -8);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 < 1) {
        std__string_Rep_M_destroy((allocator *)(local_38 + -0x18));
      }
    }
    if ((allocator *)(local_48[0] + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage) {
      LOCK();
      piVar1 = (int *)(local_48[0] + -8);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 < 1) {
        std__string_Rep_M_destroy((allocator *)(local_48[0] + -0x18));
      }
    }
  }
  DisableLoadingRenderThread();
  if (!bVar7) {
    local_38 = (uint8_t *)0xe00000001;
    pUVar5 = (UserProfile *)TPlayer__GetProfile((TPlayer *)Players__Player);
    iVar2 = Achievements__AwardAchievement(pUVar5, (AchievementAward *)&local_38);
    if (iVar2 == 0) {
      GSMBMenu__ShowAchievementUpsell(SMBMenu, 1);
    }
  }
LAB_00492553:
  GSuperMeatBoy__Freeze(SuperMeatBoy, 1);
  return;
}

/* ======================================================================
 * SMBChapter__ActivateWarpZone  (Ghidra `ActivateWarpZone` @ 00492810)
 * Signature: uint8_t __thiscall ActivateWarpZone(SMBChapter * self, WarpZone * arg1, int arg2)
 * Class: SMBChapter
 * Calls: `DisableLoadingRenderThread`, `FlashAnimationLibrary__FlashAnimationLibrary__00576680`, `FlashAnimationLibrary__GetMovieClip__005731d0`, `FormatResourcePath`, `GSMBChapterData__ResetWarpZoneBandages`, `GSMBChapterData__SaveLevelData`, `GSMBChapterData__UnlockGlitchLevel`, `GSMBCutSceneManager__PlayCutScene`, `GSuperMeatBoy__Freeze`, `GSuperMeatBoy__getChar` (+7 more)
 * Called by: `GSuperMeatBoy__ActivateWarpZone`, `GSuperMeatBoy__BeatLevel`
 */
/* WARNING: Removing unreachable block (ram,0x00492cbe) */
/* WARNING: Removing unreachable block (ram,0x00492cce) */
/* SMBChapter__ActivateWarpZone(SMBChapter__WarpZone, int) */

void __thiscall SMBChapter__ActivateWarpZone(SMBChapter *self, WarpZone *arg1, int arg2)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  FlashAnimationLibrary *pFVar4;
  long lVar5;
  UserProfile *pUVar6;
  bool bVar7;
  uint32_t local_98;
  uint32_t local_94;
  uint32_t local_90;
  uint64_t local_88;
  code *local_80;
  SMBChapter *local_78;
  uint64_t local_70;
  uint64_t local_68;
  uint32_t local_60;
  uint32_t local_5c;
  uint32_t local_58;
  long local_48[2];
  uint8_t *local_38;
  allocator local_2b[11];

  GSMBChapterData__ResetWarpZoneBandages(SMBChapterData);
  if (arg1 == (WarpZone *)0x0) {
    if (arg2 == 0) {
      lVar5 = GetLevelInfoArray(self);
      iVar2 =
          *(int *)((ulong)(iCurrentLevel - 1U & 0xffff) * 0x50 + *(long *)(lVar5 + 0x38) + 0x44);
      if (iVar2 == -1) {
        *(uint64_t *)(self + 0x2e8) = 0;
        goto LAB_004929ee;
      }
      arg1 = (WarpZone *)((ulong)(ushort)((short)iVar2 - 1) * 0xb8 + *(long *)(self + 0x1e8));
      *(WarpZone **)(self + 0x2e8) = arg1;
    } else {
      arg1 = (WarpZone *)((ulong)(GLITCH_WARP_INDEX & 0xffff) * 0xb8 + *(long *)(self + 0x1e8));
      *(WarpZone **)(self + 0x2e8) = arg1;
    }
    if (arg1 == (WarpZone *)0x0)
      goto LAB_004929ee;
  } else {
    *(WarpZone **)(self + 0x2e8) = arg1;
  }
  bVar7 = *(uint *)(arg1 + 0x20) == GLITCH_WARP_INDEX;
  *(uint64_t *)(arg1 + 0x40) = 0;
  *(uint64_t *)(*(long *)(self + 0x2e8) + 0x38) = 0;
  if (*(short *)(self + 0x16) == 0) {
    if (!bVar7) {
      SMBCurrLevelData._4_4_ = SMBCurrLevelData._4_4_ | 8;
      GSMBChapterData__SaveLevelData(SMBChapterData, (SMBLevelData *)SMBCurrLevelData);
      goto LAB_0049288e;
    }
    GSMBChapterData__UnlockGlitchLevel(SMBChapterData);
    SMBCurrLevelData._0_4_ = *(uint32_t *)(SMBHUD + 0x418);
    GSMBChapterData__SaveLevelData(SMBChapterData, (SMBLevelData *)SMBCurrLevelData);
    if (*(int *)(SuperMeatBoy + 0x2c) == 0)
      goto LAB_00492a10;
  LAB_004928a0:
    if (bVar7) {
      pFVar4 = *(FlashAnimationLibrary **)(self + 0x288);
    LAB_00492bcf:
      local_88 = FlashAnimationLibrary__GetMovieClip__005731d0(pFVar4, 4);
      *(uint64_t *)(self + 0x290) = local_88;
    } else {
      pFVar4 = *(FlashAnimationLibrary **)(self + 0x288);
      if (*(int *)(*(long *)(self + 0x2e8) + 0x20) == 1) {
      LAB_00492b0c:
        local_88 = FlashAnimationLibrary__GetMovieClip__005731d0(pFVar4, 2);
        *(uint64_t *)(self + 0x290) = local_88;
      } else {
      LAB_004928c1:
        local_88 = FlashAnimationLibrary__GetMovieClip__005731d0(pFVar4, 0);
        *(uint64_t *)(self + 0x290) = local_88;
      }
    }
  } else {
  LAB_0049288e:
    if (*(int *)(SuperMeatBoy + 0x2c) != 0)
      goto LAB_004928a0;
  LAB_00492a10:
    if (bVar7) {
      lVar5 = GSuperMeatBoy__getChar(SuperMeatBoy, 1);
      pFVar4 = *(FlashAnimationLibrary **)(self + 0x288);
      if (*(int *)(lVar5 + 0xa54) != 0) {
        local_88 = FlashAnimationLibrary__GetMovieClip__005731d0(pFVar4, 5);
        *(uint64_t *)(self + 0x290) = local_88;
        goto LAB_004928cf;
      }
      goto LAB_00492bcf;
    }
    if (*(int *)(*(long *)(self + 0x2e8) + 0x20) == 1) {
      lVar5 = GSuperMeatBoy__getChar(SuperMeatBoy, 1);
      pFVar4 = *(FlashAnimationLibrary **)(self + 0x288);
      if (*(int *)(lVar5 + 0xa54) != 0) {
        local_88 = FlashAnimationLibrary__GetMovieClip__005731d0(pFVar4, 3);
        *(uint64_t *)(self + 0x290) = local_88;
        goto LAB_004928cf;
      }
      goto LAB_00492b0c;
    }
    lVar5 = GSuperMeatBoy__getChar(SuperMeatBoy, 1);
    pFVar4 = *(FlashAnimationLibrary **)(self + 0x288);
    if (*(int *)(lVar5 + 0xa54) == 0)
      goto LAB_004928c1;
    local_88 = FlashAnimationLibrary__GetMovieClip__005731d0(pFVar4, 1);
    *(uint64_t *)(self + 0x290) = local_88;
  }
LAB_004928cf:
  local_70 = 0;
  local_68 = 0;
  local_5c = 1;
  local_94 = 0x43f00000;
  local_98 = 0x44200000;
  local_90 = 1;
  local_80 = SMBChapterPlayWarpIntro;
  local_60 = 1;
  local_58 = 0;
  local_78 = self;
  GSMBCutSceneManager__PlayCutScene(SMBCutSceneManager, (SMBCutScene *)&local_98);
  if (*(uint8_t **)(self + 0x2e8) != &DAT_005c1d05 /* R:"none" */) {
    std__string_string((string *)local_48, "/LevelPalettes/", local_2b);
    pcVar3 = *(char **)(self + 0x2e8);
    strlen(pcVar3);
    /* try { // try from 00492971 to 00492975 has its CatchHandler @ 00492cc9 */
    std__string_append((char *)local_48, (ulong)pcVar3);
    local_38 = &DAT_008184c8 /* R:0.00016803004837129265f */;
    /* try { // try from 00492989 to 0049299a has its CatchHandler @ 00492cb9 */
    pcVar3 = (char *)FormatResourcePath(local_48[0], &local_38);
    pFVar4 = operator_new(0xb0);
    /* try { // try from 004929a4 to 004929a8 has its CatchHandler @ 00492c92 */
    FlashAnimationLibrary__FlashAnimationLibrary__00576680(pFVar4, pcVar3);
    *(FlashAnimationLibrary **)(*(long *)(self + 0x2e8) + 0x28) = pFVar4;
    /* try { // try from 004929b4 to 004929b8 has its CatchHandler @ 00492cb9 */
    Loader__WaitAll();
    if ((allocator *)(local_38 + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage) {
      LOCK();
      piVar1 = (int *)(local_38 + -8);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 < 1) {
        std__string_Rep_M_destroy((allocator *)(local_38 + -0x18));
      }
    }
    if ((allocator *)(local_48[0] + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage) {
      LOCK();
      piVar1 = (int *)(local_48[0] + -8);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 < 1) {
        std__string_Rep_M_destroy((allocator *)(local_48[0] + -0x18));
      }
    }
  }
  DisableLoadingRenderThread();
  if (!bVar7) {
    local_38 = (uint8_t *)0xe00000001;
    pUVar6 = (UserProfile *)TPlayer__GetProfile((TPlayer *)Players__Player);
    iVar2 = Achievements__AwardAchievement(pUVar6, (AchievementAward *)&local_38);
    if (iVar2 == 0) {
      GSMBMenu__ShowAchievementUpsell(SMBMenu, 1);
    }
  }
LAB_004929ee:
  GSuperMeatBoy__Freeze(SuperMeatBoy, 1);
  return;
}

/* ======================================================================
 * SMBChapter__LoadWarpLibrary  (Ghidra `LoadWarpLibrary` @ 00492ce0)
 * Signature: uint8_t __thiscall LoadWarpLibrary(SMBChapter * self)
 * Class: SMBChapter
 * Calls: `FlashAnimationLibrary__FlashAnimationLibrary__00576680`, `operator_new`
 * Called by: `GSMBMenu__LoadChapterMenu`
 */
/* SMBChapter__LoadWarpLibrary() */

void __thiscall SMBChapter__LoadWarpLibrary(SMBChapter *self)

{
  char *pcVar1;
  FlashAnimationLibrary *this_00;

  if (*(long *)(self + 0x288) == 0) {
    pcVar1 = *(char **)(self + 0x280);
    this_00 = operator_new(0xb0);
    /* try { // try from 00492d32 to 00492d36 has its CatchHandler @ 00492d40 */
    FlashAnimationLibrary__FlashAnimationLibrary__00576680(this_00, pcVar1);
    *(FlashAnimationLibrary **)(self + 0x288) = this_00;
  }
  return;
}

/* ======================================================================
 * SMBChapter__AllowCharSelect  (Ghidra `AllowCharSelect` @ 00492d60)
 * Signature: uint8_t __thiscall AllowCharSelect(SMBChapter * self, tagSuperMeatBoyCharactor * arg1)
 * Class: SMBChapter
 * Calls: (none)
 * Called by: `GSMBMenu__Update`, `SMBCharSwitch__Activate`
 */
/* SMBChapter__AllowCharSelect(tagSuperMeatBoyCharactor&) */

uint64_t __thiscall SMBChapter__AllowCharSelect(SMBChapter *self, tagSuperMeatBoyCharactor *arg1)

{
  int iVar1;

  iVar1 = *(int *)(self + 0x200);
  if (iVar1 == 9) {
    *(uint32_t *)arg1 = 0;
    return 0;
  }
  if (iVar1 - 6U < 2) {
    if (1 < *(uint *)(self + 0x204)) {
      return 0;
    }
    if (iVar1 != 7) {
      *(uint32_t *)arg1 = 0;
      return 0;
    }
    *(uint32_t *)arg1 = 6;
    return 0;
  }
  if (1 < *(uint *)(self + 0x204)) {
    return 0;
  }
  if (*(int *)(self + 0x2f0) != -1) {
    *(int *)arg1 = *(int *)(self + 0x2f0);
    return 0;
  }
  *(uint32_t *)arg1 = 0;
  return 1;
}

/* ======================================================================
 * SMBChapter__FinishedWarpOutro  (Ghidra `FinishedWarpOutro` @ 00492de0)
 * Signature: uint8_t __thiscall FinishedWarpOutro(SMBChapter * self)
 * Class: SMBChapter
 * Calls: `GSMBChapterData__SetLevelType`, `GSMBMenu__SetSelectedLevel`, `GSuperMeatBoy__Freeze`, `GSuperMeatBoy__SwitchGameMode`, `TAudioInstance__Stop`
 * Called by: (none)
 */
/* SMBChapter__FinishedWarpOutro() */

void __thiscall SMBChapter__FinishedWarpOutro(SMBChapter *self)

{
  GSMBChapterData *pGVar1;
  long lVar2;

  if (*(int *)(self + 0x2e0) != 1) {
    if (*(uint *)(self + 0x204) < 2) {
      if (*(long *)(self + 0x18) != 0) {
        TAudioInstance__Stop((TAudioInstance *)(self + 0x48));
      }
    } else if (*(uint *)(self + 0x204) == 10) {
      TAudioInstance__Stop((TAudioInstance *)(self + 0x98));
    } else if (*(long *)(self + 0x28) != 0) {
      TAudioInstance__Stop((TAudioInstance *)(self + 0x70));
    }
  }
  lVar2 = *(long *)(self + 0x2e8);
  if (*(long **)(lVar2 + 0x40) != (long *)0x0) {
    (**(code **)(**(long **)(lVar2 + 0x40) + 8))();
    lVar2 = *(long *)(self + 0x2e8);
  }
  *(uint64_t *)(lVar2 + 0x40) = 0;
  pGVar1 = SMBChapterData;
  *(uint32_t *)(self + 0x204) = *(uint32_t *)(self + 0x270);
  GSMBChapterData__SetLevelType(pGVar1);
  *(int *)self = *(int *)(self + 0x274);
  GSMBMenu__SetSelectedLevel(SMBMenu, *(int *)(self + 0x274), 1);
  GSuperMeatBoy__SwitchGameMode(SuperMeatBoy);
  *(uint16_t *)(self + 0x16) = 0;
  GSuperMeatBoy__Freeze(SuperMeatBoy, 0);
  return;
}

/* ======================================================================
 * SMBChapter__LoadWarpZone  (Ghidra `LoadWarpZone` @ 00492ef0)
 * Signature: uint8_t __thiscall LoadWarpZone(SMBChapter * self)
 * Class: SMBChapter
 * Calls: `FlashAnimationLibrary__FlashAnimationLibrary`, `FlashAnimationLibrary__GetMovieClip__005731d0`, `GSMBChapterData__SetCurrentLevel`, `GSMBChapterData__SetLevelType`, `GSMBCutSceneManager__PlayCutScene`, `GSMBMenu__IsInReplayMode`, `GSMBMenu__SwitchIconToCurrWarp`, `GSuperMeatBoy__DeferLoadCharactor`, `GSuperMeatBoy__Freeze`, `GSuperMeatBoy__SetCurrentLevel` (+5 more)
 * Called by: `SMBChapterPlayWarpIntro`
 */
/* SMBChapter__LoadWarpZone() */

void __thiscall SMBChapter__LoadWarpZone(SMBChapter *self)

{
  FlashAnimationLibrary *this_00;
  GSMBChapterData *pGVar1;
  GSMBMenu *this_01;
  long lVar2;
  int iVar3;
  long lVar4;
  uint64_t uVar5;
  uint32_t local_88;
  uint32_t local_84;
  uint32_t local_80;
  uint64_t local_78;
  code *local_70;
  SMBChapter *local_68;
  uint64_t local_60;
  uint64_t local_58;
  uint32_t local_50;
  uint32_t local_4c;
  uint32_t local_48;
  char local_38[40];

  iVar3 = iCurrentLevel;
  if (*(short *)(self + 0x16) != 1) {
    iVar3 = iCurrentLevel + -1;
  }
  *(int *)(self + 0x274) = iVar3;
  this_01 = SMBMenu;
  *(uint32_t *)(self + 0x270) = *(uint32_t *)(self + 0x204);
  GSMBMenu__SwitchIconToCurrWarp(this_01);
  lVar4 = *(long *)(self + 0x2e8);
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x24) != 0) {
      GSuperMeatBoy__DeferLoadCharactor(SuperMeatBoy, *(int *)(lVar4 + 0x24) + -1);
      lVar4 = *(long *)(self + 0x2e8);
    }
    if (*(long **)(lVar4 + 0x30) != (long *)0x0) {
      (**(code **)(**(long **)(lVar4 + 0x30) + 8))();
      lVar4 = *(long *)(self + 0x2e8);
    }
    this_00 = *(FlashAnimationLibrary **)(lVar4 + 0x28);
    if (this_00 != (FlashAnimationLibrary *)0x0) {
      FlashAnimationLibrary__FlashAnimationLibrary(this_00);
      operator_delete(this_00);
    }
    if (*(int *)(self + 0x2e0) != 1) {
      if (*(uint *)(self + 0x204) < 2) {
        if (*(long *)(self + 0x18) != 0) {
          TAudioInstance__Stop((TAudioInstance *)(self + 0x48));
        }
      } else if (*(uint *)(self + 0x204) == 10) {
        TAudioInstance__Stop((TAudioInstance *)(self + 0x98));
      } else if (*(long *)(self + 0x28) != 0) {
        TAudioInstance__Stop((TAudioInstance *)(self + 0x70));
      }
    }
    pGVar1 = SMBChapterData;
    *(int *)(self + 0x204) = *(int *)(*(long *)(self + 0x2e8) + 0x20) + 2;
    GSMBChapterData__SetLevelType(pGVar1);
    if (*(short *)(self + 0x2e4) != 1) {
      iVar3 = GSMBMenu__IsInReplayMode(SMBMenu);
      if (iVar3 != 1) {
        PlayChapterMusic(self);
      }
    }
    iCurrentLevel = 0;
    GSMBChapterData__SetCurrentLevel(SMBChapterData, 0);
    *(int *)self = iCurrentLevel;
    GSuperMeatBoy__SetCurrentLevel(SuperMeatBoy, (TileLevel *)0x0);
    GSuperMeatBoy__SwitchGameMode(SuperMeatBoy);
    GSuperMeatBoy__Freeze(SuperMeatBoy, 0);
    if (*(int *)(self + 0x204) != 3) {
      lVar4 = *(long *)(self + 0x2e8);
      if (*(long **)(lVar4 + 0x40) != (long *)0x0) {
        (**(code **)(**(long **)(lVar4 + 0x40) + 8))();
        lVar4 = *(long *)(self + 0x2e8);
      }
      lVar2 = GSuperMeatBoy__pLevelPalette;
      *(uint64_t *)(lVar4 + 0x40) = 0;
      *(uint64_t *)(*(long *)(self + 0x2e8) + 0x38) = *(uint64_t *)(lVar2 + 0x108);
      if (*(long *)(*(long *)(self + 0x2e8) + 0x38) != 0) {
        Sprint(&DAT_005c1d0a /* R:"life%i-%i" */, local_38, iCurrentLevel, 3);
        lVar4 = *(long *)(self + 0x2e8);
        uVar5 = FlashAnimationLibrary__GetMovieClip__005731d0(
            *(FlashAnimationLibrary **)(lVar4 + 0x38), local_38);
        *(uint64_t *)(lVar4 + 0x40) = uVar5;
        if (*(long *)(*(long *)(self + 0x2e8) + 0x40) != 0) {
          local_48 = 1;
          local_78 = *(uint64_t *)(*(long *)(self + 0x2e8) + 0x40);
          local_60 = 0;
          local_58 = 0;
          local_50 = 0;
          local_4c = 1;
          local_84 = 0x43f00000;
          local_88 = 0x44200000;
          local_80 = 1;
          local_70 = SMBLivesScreenFinished;
          local_68 = self;
          GSMBCutSceneManager__PlayCutScene(SMBCutSceneManager, (SMBCutScene *)&local_88);
          GSuperMeatBoy__Freeze(SuperMeatBoy, 1);
        }
      }
    }
  }
  return;
}

/* ======================================================================
 * SMBChapter__PlayWarpIntro  (Ghidra `PlayWarpIntro` @ 004931c0)
 * Signature: uint8_t __thiscall PlayWarpIntro(SMBChapter * self)
 * Class: SMBChapter
 * Calls: `DisableLoadingRenderThread`, `FlashAnimationLibrary__GetMovieClip__005731d0`, `GSMBChapterData__SetLevelType`, `GSMBCutSceneManager__PlayCutScene`, `GSMBMenu__GetLevelDataByIndex`, `GetLevelInfo`, `Loader__WaitAll`, `SMBChapterLoadWarpZone`, `SMBWarpIntroSkip`, `TAudioInstance__Stop` (+3 more)
 * Called by: (none)
 */
/* WARNING: Removing unreachable block (ram,0x004935f7) */
/* WARNING: Removing unreachable block (ram,0x004935cc) */
/* WARNING: Removing unreachable block (ram,0x004935e4) */
/* SMBChapter__PlayWarpIntro() */

void __thiscall SMBChapter__PlayWarpIntro(SMBChapter *self)

{
  int *piVar1;
  int iVar2;
  uint8_t *puVar3;
  GSMBChapterData *pGVar4;
  uint64_t uVar5;
  char *__s;
  uint32_t local_c8;
  uint32_t local_c4;
  uint32_t local_c0;
  uint64_t local_b8;
  code *local_b0;
  SMBChapter *local_a8;
  code *local_a0;
  uint64_t local_98;
  uint32_t local_90;
  uint32_t local_8c;
  uint32_t local_88;
  long local_78[2];
  uint32_t local_68;
  long local_58;
  uchar *local_50;
  uint local_48[4];
  uint32_t local_38[2];
  uint64_t local_30;
  uint8_t *local_28;
  allocator local_1c[12];

  if (*(long **)(self + 0x290) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x290) + 8))();
  }
  *(uint64_t *)(self + 0x290) = 0;
  local_38[0] = 5;
  local_30 = TPlayer__GetProfile((TPlayer *)Players__Player);
  BroadcastString__SetBroadcastString((BroadcastStringCreate *)local_38);
  puVar3 = *(uint8_t **)(self + 0x2e8);
  if (puVar3 == (uint8_t *)0x0) {
    return;
  }
  if (puVar3 == &DAT_005c1d05 /* R:"none" */) {
    LoadWarpZone(self);
    return;
  }
  uVar5 =
      FlashAnimationLibrary__GetMovieClip__005731d0(*(FlashAnimationLibrary **)(puVar3 + 0x28), 0);
  *(uint64_t *)(puVar3 + 0x30) = uVar5;
  local_98 = 0;
  local_8c = 1;
  local_88 = 1;
  local_b8 = *(uint64_t *)(*(long *)(self + 0x2e8) + 0x30);
  local_c4 = 0x43f00000;
  local_c8 = 0x44200000;
  local_c0 = 1;
  local_b0 = SMBChapterLoadWarpZone;
  local_a0 = SMBWarpIntroSkip;
  local_90 = 1;
  local_a8 = self;
  GSMBCutSceneManager__PlayCutScene(SMBCutSceneManager, (SMBCutScene *)&local_c8);
  if (*(int *)(self + 0x2e0) != 1) {
    if (*(uint *)(self + 0x204) < 2) {
      if (*(long *)(self + 0x18) != 0) {
        TAudioInstance__Stop((TAudioInstance *)(self + 0x48));
      }
    } else if (*(uint *)(self + 0x204) == 10) {
      TAudioInstance__Stop((TAudioInstance *)(self + 0x98));
    } else if (*(long *)(self + 0x28) != 0) {
      TAudioInstance__Stop((TAudioInstance *)(self + 0x70));
    }
  }
  pGVar4 = SMBChapterData;
  *(int *)(self + 0x204) = *(int *)(*(long *)(self + 0x2e8) + 0x20) + 2;
  GSMBChapterData__SetLevelType(pGVar4);
  local_28 = &DAT_008184c8 /* R:0.00016803004837129265f */;
  if (*(int *)(self + 0x200) == 9) {
    local_58 = 0;
    local_50 = (uchar *)0x0;
    local_48[0] = 0;
    /* try { // try from 00493454 to 0049349e has its CatchHandler @ 004935f2 */
    GSMBMenu__GetLevelDataByIndex(SMBMenu, 0, &local_50, local_48);
    if ((local_48[0] == 0) || (local_50 == (uchar *)0x0)) {
      if ((allocator *)(local_28 + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage) {
        LOCK();
        piVar1 = (int *)(local_28 + -8);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 < 1) {
          std__string_Rep_M_destroy((allocator *)(local_28 + -0x18));
        }
      }
      goto LAB_004933fa;
    }
    TileLevel__GetPaletteFromLevelFile((TileLevelLoad *)&local_58, (string *)&local_28);
    SMBPaletteBackgroundLoader__Load((char *)(SuperMeatBoy + 0x3b0), (int)local_28);
  } else {
    /* try { // try from 00493339 to 0049333d has its CatchHandler @ 004935d7 */
    std__string_string((string *)&local_58, "Levels/", local_1c);
    __s = (char *)GetLevelInfo(self, 0, 0xb);
    strlen(__s);
    /* try { // try from 00493361 to 00493377 has its CatchHandler @ 0049359d */
    std__string_append((char *)&local_58, (ulong)__s);
    std__string_append((char *)&local_58, 0x5c1d1c);
    local_78[1] = 0;
    local_68 = 0;
    local_78[0] = local_58;
    /* try { // try from 004933a6 to 004933c7 has its CatchHandler @ 004935ca */
    TileLevel__GetPaletteFromLevelFile((TileLevelLoad *)local_78, (string *)&local_28);
    SMBPaletteBackgroundLoader__Load((char *)(SuperMeatBoy + 0x3b0), (int)local_28);
    if ((allocator *)(local_58 + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage) {
      LOCK();
      piVar1 = (int *)(local_58 + -8);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 < 1) {
        std__string_Rep_M_destroy((allocator *)(local_58 + -0x18));
      }
    }
  }
  if ((allocator *)(local_28 + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage) {
    LOCK();
    piVar1 = (int *)(local_28 + -8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 < 1) {
      std__string_Rep_M_destroy((allocator *)(local_28 + -0x18));
    }
  }
LAB_004933fa:
  Loader__WaitAll();
  DisableLoadingRenderThread();
  return;
}

/* ======================================================================
 * SMBChapter__ExitWarpZone  (Ghidra `ExitWarpZone` @ 00493620)
 * Signature: uint8_t __thiscall ExitWarpZone(SMBChapter * self)
 * Class: SMBChapter
 * Calls: (none)
 * Called by: (none)
 */
/* SMBChapter__ExitWarpZone() */

void __thiscall SMBChapter__ExitWarpZone(SMBChapter *self)

{
  long lVar1;

  lVar1 = *(long *)(self + 0x2e8);
  if (*(long **)(lVar1 + 0x40) != (long *)0x0) {
    (**(code **)(**(long **)(lVar1 + 0x40) + 8))();
    lVar1 = *(long *)(self + 0x2e8);
  }
  *(uint64_t *)(lVar1 + 0x40) = 0;
  return;
}

/* ======================================================================
 * SMBChapter__ShowLivesScreen  (Ghidra `ShowLivesScreen` @ 00493650)
 * Signature: uint8_t __thiscall ShowLivesScreen(SMBChapter * self, int arg1)
 * Class: SMBChapter
 * Calls: `FlashAnimationLibrary__GetMovieClip__005731d0`, `GSMBCutSceneManager__PlayCutScene`, `GSuperMeatBoy__Freeze`, `SMBLivesScreenFinished`, `Sprint`
 * Called by: `EndLevelTransitionIn`, `FlyWrench__Reset`, `Machinarium__Reset`, `MeatBoyCharactor__Reset`, `Ogmo__Reset`, `Runman__Reset`
 */
/* SMBChapter__ShowLivesScreen(int) */

void __thiscall SMBChapter__ShowLivesScreen(SMBChapter *self, int arg1)

{
  long lVar1;
  long lVar2;
  uint64_t uVar3;
  uint32_t local_88;
  uint32_t local_84;
  uint32_t local_80;
  uint64_t local_78;
  code *local_70;
  SMBChapter *local_68;
  uint64_t local_60;
  uint64_t local_58;
  uint32_t local_50;
  uint32_t local_4c;
  uint32_t local_48;
  char local_38[40];

  lVar2 = *(long *)(self + 0x2e8);
  if (*(long **)(lVar2 + 0x40) != (long *)0x0) {
    (**(code **)(**(long **)(lVar2 + 0x40) + 8))();
    lVar2 = *(long *)(self + 0x2e8);
  }
  lVar1 = GSuperMeatBoy__pLevelPalette;
  *(uint64_t *)(lVar2 + 0x40) = 0;
  *(uint64_t *)(*(long *)(self + 0x2e8) + 0x38) = *(uint64_t *)(lVar1 + 0x108);
  if (*(long *)(*(long *)(self + 0x2e8) + 0x38) != 0) {
    Sprint(&DAT_005c1d0a /* R:"life%i-%i" */, local_38, iCurrentLevel, 3 - arg1);
    lVar2 = *(long *)(self + 0x2e8);
    uVar3 = FlashAnimationLibrary__GetMovieClip__005731d0(*(FlashAnimationLibrary **)(lVar2 + 0x38),
                                                          local_38);
    *(uint64_t *)(lVar2 + 0x40) = uVar3;
    if (*(long *)(*(long *)(self + 0x2e8) + 0x40) != 0) {
      local_48 = 1;
      local_78 = *(uint64_t *)(*(long *)(self + 0x2e8) + 0x40);
      local_60 = 0;
      local_58 = 0;
      local_50 = 0;
      local_4c = 1;
      local_84 = 0x43f00000;
      local_88 = 0x44200000;
      local_80 = 1;
      local_70 = SMBLivesScreenFinished;
      local_68 = self;
      GSMBCutSceneManager__PlayCutScene(SMBCutSceneManager, (SMBCutScene *)&local_88);
      GSuperMeatBoy__Freeze(SuperMeatBoy, 1);
    }
  }
  return;
}

/* ======================================================================
 * SMBChapter__ShowGameOverScreen  (Ghidra `ShowGameOverScreen` @ 00493770)
 * Signature: uint8_t __thiscall ShowGameOverScreen(SMBChapter * self)
 * Class: SMBChapter
 * Calls: `DisableLoadingRenderThread`, `FlashAnimationLibrary__GetMovieClip__005731d0`, `GSMBCutSceneManager__PlayCutScene`, `GSMBMenu__LoadChapterMenu`, `GSuperMeatBoy__Freeze`, `Loader__WaitAll`, `SMBGameOverScreenFinished`, `SMBWarpOutroSkip`
 * Called by: `FlyWrench__Reset`, `Machinarium__Reset`, `MeatBoyCharactor__Reset`, `Ogmo__Reset`, `Runman__Reset`
 */
/* SMBChapter__ShowGameOverScreen() */

void __thiscall SMBChapter__ShowGameOverScreen(SMBChapter *self)

{
  GSuperMeatBoy *this_00;
  uint64_t uVar1;
  long lVar2;
  FlashAnimationLibrary *this_01;
  uint32_t local_68;
  uint32_t local_64;
  uint32_t local_60;
  uint64_t local_58;
  code *local_50;
  SMBChapter *local_48;
  code *local_40;
  uint64_t local_38;
  uint32_t local_30;
  uint32_t local_2c;
  uint32_t local_28;

  lVar2 = *(long *)(self + 0x2e8);
  if (*(long **)(lVar2 + 0x40) != (long *)0x0) {
    (**(code **)(**(long **)(lVar2 + 0x40) + 8))();
    lVar2 = *(long *)(self + 0x2e8);
  }
  this_01 = *(FlashAnimationLibrary **)(lVar2 + 0x38);
  if (this_01 == (FlashAnimationLibrary *)0x0) {
    *(uint64_t *)(lVar2 + 0x38) = *(uint64_t *)(GSuperMeatBoy__pLevelPalette + 0x108);
    lVar2 = *(long *)(self + 0x2e8);
    this_01 = *(FlashAnimationLibrary **)(lVar2 + 0x38);
  }
  uVar1 = FlashAnimationLibrary__GetMovieClip__005731d0(this_01, "gameover");
  this_00 = SuperMeatBoy;
  *(uint64_t *)(lVar2 + 0x40) = uVar1;
  GSuperMeatBoy__Freeze(this_00, 1);
  if (*(long *)(*(long *)(self + 0x2e8) + 0x40) != 0) {
    local_28 = 1;
    local_58 = *(uint64_t *)(*(long *)(self + 0x2e8) + 0x40);
    local_38 = 0;
    local_2c = 1;
    local_64 = 0x43f00000;
    local_68 = 0x44200000;
    local_60 = 1;
    local_50 = SMBGameOverScreenFinished;
    local_40 = SMBWarpOutroSkip;
    local_30 = 1;
    local_48 = self;
    GSMBCutSceneManager__PlayCutScene(SMBCutSceneManager, (SMBCutScene *)&local_68);
    GSMBMenu__LoadChapterMenu(SMBMenu, *(uint32_t *)(self + 0x200));
    Loader__WaitAll();
    DisableLoadingRenderThread();
    return;
  }
  FinishedWarpOutro(self);
  return;
}

/* ======================================================================
 * SMBChapter__PlayWarpOutro  (Ghidra `PlayWarpOutro` @ 004938a0)
 * Signature: uint8_t __thiscall PlayWarpOutro(SMBChapter * self)
 * Class: SMBChapter
 * Calls: `DisableLoadingRenderThread`, `FlashAnimationLibrary__GetMovieClip__005731d0`, `GMeatHUD__AddUnlockScreen`, `GSMBChapterData__IsCharacterUnlocked`, `GSMBChapterData__SaveData`, `GSMBChapterData__UnlockCharacter`, `GSMBCutSceneManager__PlayCutScene`, `GSMBMenu__LoadChapterMenu`, `GetRandomINT`, `Loader__WaitAll` (+5 more)
 * Called by: `TransitionToNextLevel`
 */
/* SMBChapter__PlayWarpOutro() */

void __thiscall SMBChapter__PlayWarpOutro(SMBChapter *self)

{
  uint32_t uVar1;
  uint64_t uVar2;
  long lVar3;
  UserProfile *pUVar4;
  int iVar5;
  uint32_t local_88;
  uint32_t local_84;
  uint32_t local_80;
  uint64_t local_78;
  code *local_70;
  SMBChapter *local_68;
  code *local_60;
  uint64_t local_58;
  uint32_t local_50;
  uint32_t local_4c;
  uint32_t local_48;
  char local_38[16];
  uint32_t local_28;
  uint32_t local_24;

  lVar3 = *(long *)(self + 0x2e8);
  if (*(long **)(lVar3 + 0x40) != (long *)0x0) {
    (**(code **)(**(long **)(lVar3 + 0x40) + 8))();
    lVar3 = *(long *)(self + 0x2e8);
  }
  if (*(long *)(lVar3 + 0x38) == 0) {
    *(uint64_t *)(lVar3 + 0x38) = *(uint64_t *)(GSuperMeatBoy__pLevelPalette + 0x108);
    lVar3 = *(long *)(self + 0x2e8);
  }
  *(uint64_t *)(lVar3 + 0x40) = 0;
  iVar5 = 0;
  while (lVar3 = *(long *)(self + 0x2e8), *(long *)(lVar3 + 0x40) == 0) {
    while (true) {
      iVar5 = iVar5 + 1;
      uVar1 = GetRandomINT(1, 0x14);
      Sprint("outro%i", local_38, uVar1);
      lVar3 = *(long *)(self + 0x2e8);
      uVar2 = FlashAnimationLibrary__GetMovieClip__005731d0(
          *(FlashAnimationLibrary **)(lVar3 + 0x38), local_38);
      *(uint64_t *)(lVar3 + 0x40) = uVar2;
      if (iVar5 != 0x14)
        break;
      lVar3 = *(long *)(self + 0x2e8);
      uVar2 = FlashAnimationLibrary__GetMovieClip__005731d0(
          *(FlashAnimationLibrary **)(lVar3 + 0x38), "outro");
      *(uint64_t *)(lVar3 + 0x40) = uVar2;
      lVar3 = *(long *)(self + 0x2e8);
      if (*(long *)(lVar3 + 0x40) != 0)
        goto LAB_00493960;
    }
  }
LAB_00493960:
  if (*(int *)(self + 0x2e0) != 1) {
    if (*(uint *)(self + 0x204) < 2) {
      if (*(long *)(self + 0x18) != 0) {
        TAudioInstance__Stop((TAudioInstance *)(self + 0x48));
        lVar3 = *(long *)(self + 0x2e8);
      }
    } else if (*(uint *)(self + 0x204) == 10) {
      TAudioInstance__Stop((TAudioInstance *)(self + 0x98));
      lVar3 = *(long *)(self + 0x2e8);
    } else if (*(long *)(self + 0x28) != 0) {
      TAudioInstance__Stop((TAudioInstance *)(self + 0x70));
      lVar3 = *(long *)(self + 0x2e8);
    }
  }
  local_48 = 1;
  local_78 = *(uint64_t *)(lVar3 + 0x40);
  local_58 = 0;
  local_4c = 1;
  local_84 = 0x43f00000;
  local_88 = 0x44200000;
  local_80 = 1;
  local_70 = SMBWarpOutroFinished;
  local_60 = SMBWarpOutroSkip;
  local_50 = 1;
  local_68 = self;
  GSMBCutSceneManager__PlayCutScene(SMBCutSceneManager, (SMBCutScene *)&local_88);
  if (*(int *)(*(long *)(self + 0x2e8) + 0x20) == 1) {
    switch (*(uint32_t *)(*(long *)(self + 0x2e8) + 0x24)) {
    case 0xc:
      iVar5 = GSMBChapterData__IsCharacterUnlocked(SMBChapterData, 0xb);
      if (iVar5 != 0)
        goto switchD_00493a43_caseD_d;
      GSMBChapterData__UnlockCharacter(SMBChapterData, 0xb);
      GMeatHUD__AddUnlockScreen(SMBHUD, 5);
      local_24 = 0x1d;
      break;
    default:
      goto switchD_00493a43_caseD_d;
    case 0x11:
      iVar5 = GSMBChapterData__IsCharacterUnlocked(SMBChapterData, 0x10);
      if (iVar5 != 0)
        goto switchD_00493a43_caseD_d;
      GSMBChapterData__UnlockCharacter(SMBChapterData, 0x10);
      GMeatHUD__AddUnlockScreen(SMBHUD, 0xd);
      local_24 = 0x20;
      break;
    case 0x13:
      iVar5 = GSMBChapterData__IsCharacterUnlocked(SMBChapterData, 0x12);
      if (iVar5 != 0)
        goto switchD_00493a43_caseD_d;
      GSMBChapterData__UnlockCharacter(SMBChapterData, 0x12);
      GMeatHUD__AddUnlockScreen(SMBHUD, 0xb);
      local_24 = 0x1e;
      break;
    case 0x17:
      iVar5 = GSMBChapterData__IsCharacterUnlocked(SMBChapterData, 0x16);
      if (iVar5 != 0)
        goto switchD_00493a43_caseD_d;
      GSMBChapterData__UnlockCharacter(SMBChapterData, 0x16);
      GMeatHUD__AddUnlockScreen(SMBHUD, 0xc);
      local_24 = 0x21;
      break;
    case 0x19:
      iVar5 = GSMBChapterData__IsCharacterUnlocked(SMBChapterData, 0x18);
      if (iVar5 != 0)
        goto switchD_00493a43_caseD_d;
      GSMBChapterData__UnlockCharacter(SMBChapterData, 0x18);
      GMeatHUD__AddUnlockScreen(SMBHUD, 10);
      local_24 = 0x1f;
    }
    local_28 = 1;
    pUVar4 = (UserProfile *)TPlayer__GetProfile((TPlayer *)Players__Player);
    Achievements__AwardAchievement(pUVar4, (AchievementAward *)&local_28);
    GSMBChapterData__SaveData(SMBChapterData, 1);
  }
switchD_00493a43_caseD_d:
  GSMBMenu__LoadChapterMenu(SMBMenu, *(uint32_t *)(self + 0x200));
  Loader__WaitAll();
  DisableLoadingRenderThread();
  return;
}

/* ======================================================================
 * SMBChapter__LoadNextLevel  (Ghidra `LoadNextLevel` @ 00493c40)
 * Signature: uint8_t __thiscall LoadNextLevel(SMBChapter * self)
 * Class: SMBChapter
 * Calls: `GSMBChapterData__SaveWarpzoneStats`, `GSMBChapterData__SetCurrentLevel`, `GSMBMenu__ExtractChapterAndLevelFromSelectedLevel`, `GSMBMenu__GetLevelDataByIndex`, `GSMBMenu__SetSelectedLevel`, `GSuperMeatBoy__DeferLoadCharactor`, `GetLevelInfoArray`, `SMBEditor__LoadLevel`, `SMBLevelPortal__IsChapterLoaded`, `SMBLevelPortal__LoadSelectedLevel` (+3 more)
 * Called by: `EndLevelTransitionIn`, `GSuperMeatBoy__LoadNextLevel`, `GSuperMeatBoy__ShowGame`
 */
/* SMBChapter__LoadNextLevel() */

uint64_t __thiscall SMBChapter__LoadNextLevel(SMBChapter *self)

{
  int iVar1;
  long lVar2;
  uint64_t uVar3;
  uint32_t local_b8[2];
  int *local_b0;
  uint32_t local_a8;
  uint64_t local_a0;
  uint32_t local_98[2];
  int *local_90;
  uint32_t local_88;
  uint64_t local_80;
  char *local_78;
  uchar *local_70;
  uint local_68[4];
  int local_58[2];
  uint64_t local_50;
  int local_48[4];
  int local_38[3];
  int local_2c[3];

  lVar2 = GetLevelInfoArray();
  if (iCurrentLevel == 99) {
    return 0;
  }
  if ((int)(uint) * (ushort *)(lVar2 + 0x28) <= (int)iCurrentLevel) {
    if (1 < *(uint *)(self + 0x204)) {
      GSMBChapterData__SaveWarpzoneStats(SMBChapterData);
      PlayWarpOutro(self);
      return 0;
    }
    ShowMenuPress((tagButtonProps *)0x0, (void *)0x0);
    return 0;
  }
  local_b0 = local_2c;
  local_2c[0] = 0;
  local_b8[0] = 0;
  local_a8 = 4;
  local_a0 = TPlayer__GetProfile((TPlayer *)Players__Player);
  BroadcastString__SetBroadcastStringParam((BroadcastStringParam *)local_b8);
  local_38[0] = *(int *)(self + 0x200);
  local_78 = (char *)0x0;
  local_70 = (uchar *)0x0;
  local_68[0] = 0;
  if (local_38[0] == 9) {
    iVar1 = SMBLevelPortal__IsChapterLoaded();
    if (iVar1 == 1) {
      GSMBMenu__GetLevelDataByIndex(SMBMenu, iCurrentLevel, &local_70, local_68);
      if ((local_70 == (uchar *)0x0) || (local_68[0] == 0)) {
        ShowMenuPress((tagButtonProps *)0x0, (void *)0x0);
        return 0;
      }
      lVar2 = *(long *)(LoadedPortalChapter + (long)(int)iCurrentLevel * 8);
      if (lVar2 != 0) {
        GSuperMeatBoy__DeferLoadCharactor(SuperMeatBoy, *(uint32_t *)(lVar2 + 0x14));
        local_38[0] = *(int *)(self + 0x200);
        goto LAB_00493d55;
      }
    } else {
      SMBLevelPortal__LoadSelectedLevel(SuperMeatBoyPortal, &local_70, local_68);
    }
    local_38[0] = *(int *)(self + 0x200);
  } else {
    local_78 = (char *)((ulong)(iCurrentLevel & 0xffff) * 0x50 + *(long *)(lVar2 + 0x38));
  }
LAB_00493d55:
  if (*(uint *)(self + 0x204) < 2) {
    local_48[0] = iCurrentLevel + 1;
    if ((local_38[0] == 9) ||
        (GSMBMenu__ExtractChapterAndLevelFromSelectedLevel(SMBMenu, local_38, local_48, local_78),
         *(int *)(self + 0x200) == 9)) {
      local_38[0] = 8;
    }
    local_b8[0] = 2;
    local_a8 = 4;
    local_b0 = local_38;
    local_a0 = TPlayer__GetProfile((TPlayer *)Players__Player);
    BroadcastString__SetBroadcastStringParam((BroadcastStringParam *)local_b8);
    local_b8[0] = 1;
    local_a8 = 4;
    local_b0 = local_48;
    local_a0 = TPlayer__GetProfile((TPlayer *)Players__Player);
    BroadcastString__SetBroadcastStringParam((BroadcastStringParam *)local_b8);
    local_58[0] = (-(uint)(*(int *)(self + 0x204) == 0) & 0xfffffffa) + 10;
  } else if (*(uint *)(self + 0x204) == 10) {
    if (local_38[0] == 9) {
      local_38[0] = 8;
    } else if (local_38[0] == 8) {
      local_38[0] = 1;
    }
    local_90 = local_38;
    local_98[0] = 2;
    local_88 = 4;
    local_80 = TPlayer__GetProfile((TPlayer *)Players__Player);
    BroadcastString__SetBroadcastStringParam((BroadcastStringParam *)local_98);
    local_58[0] = 6;
  } else {
    if (local_38[0] == 9) {
      local_38[0] = 8;
    } else if (local_38[0] == 8) {
      local_38[0] = 1;
    }
    local_90 = local_38;
    local_98[0] = 2;
    local_88 = 4;
    local_80 = TPlayer__GetProfile((TPlayer *)Players__Player);
    BroadcastString__SetBroadcastStringParam((BroadcastStringParam *)local_98);
    local_58[0] = 5;
  }
  local_50 = TPlayer__GetProfile((TPlayer *)Players__Player);
  BroadcastString__SetBroadcastString((BroadcastStringCreate *)local_58);
  uVar3 = SMBEditor__LoadLevel(SuperMeatBoyEditor, (TileLevelLoad *)&local_78);
  GSMBChapterData__SetCurrentLevel(SMBChapterData, iCurrentLevel);
  GSMBMenu__SetSelectedLevel(SMBMenu, iCurrentLevel, 1);
  iVar1 = SMBLevelPortal__ReleaseLoadedLevelData();
  if (iVar1 != 1) {
    iCurrentLevel = iCurrentLevel + 1;
  }
  return uVar3;
}

/* ======================================================================
 * SMBChapter__GetLevelInfo  (Ghidra `GetLevelInfo` @ 00494070)
 * Signature: uint8_t __thiscall GetLevelInfo(SMBChapter * self, int arg1, tagChapterLevelType arg2, int arg3)
 * Class: SMBChapter
 * Calls: (none)
 * Called by: `GMeatHUD__Render`, `GMeatHUD__SetInGameHudLevelName`, `GSMBMenu__EnterSelectedLevel`, `GSMBMenu__ExtractChapterAndLevelFromSelectedLevel`, `GSMBMenu__GetCurrLevelName`, `GSMBMenu__LoadChapterMenu`, `GSMBMenu__Render`, `GSMBMenu__SetLevelDisplay`, `GetLevelInfo`, `SMBChapterPlayWarpIntro`
 */
/* SMBChapter__GetLevelInfo(int, tagChapterLevelType, int) */

long __thiscall SMBChapter__GetLevelInfo(SMBChapter *self, ulong arg2, uint arg3, int arg4)

{
  uint uVar1;
  long lVar2;

  if ((int)arg2 == -1) {
    uVar1 = iCurrentLevel - 1U;
    if (iCurrentLevel - 1U == 0xffffffff) {
      uVar1 = 0;
    }
    arg2 = (ulong)uVar1;
  }
  if (((arg4 == 0) && (*(int *)(self + 0x200) == 9)) && (LoadedPortalChapter != 0)) {
    lVar2 = *(long *)(LoadedPortalChapter + (long)(int)arg2 * 8);
    if (lVar2 == 0) {
      return 0;
    }
    return lVar2 + 0x24;
  }
  if (arg3 == 0xb) {
    arg3 = *(uint *)(self + 0x204);
  }
  if (arg3 < 10) {
    /* WARNING: Could not recover jumptable at 0x004940ca. Too many branches */
    /* WARNING: Treating indirect jump as call */
    lVar2 = (**(code **)(&DAT_005c1af0 /* R:6.727199524699506e-39f */ + (ulong)arg3 * 8))();
    return lVar2;
  }
  return (arg2 & 0xffff) * 0x50 + *(long *)(self + 0x148);
}

/* ======================================================================
 * SMBChapter__PlayChapterIntro  (Ghidra `PlayChapterIntro` @ 00494220)
 * Signature: uint8_t __thiscall PlayChapterIntro(SMBChapter * self, _func_void_void_ptr_int_int * arg1)
 * Class: SMBChapter
 * Calls: `FlashAnimationLibrary__FlashAnimationLibrary`, `FlashAnimationLibrary__FlashAnimationLibrary__00576680`, `FlashAnimationLibrary__GetMovieClip__005731d0`, `GSMBCutSceneManager__PlayCutScene`, `SMBChapterIntroSkip`, `operator_delete`, `operator_new`
 * Called by: `GSMBMenu__TransitionInChapter`
 */
/* SMBChapter__PlayChapterIntro(void (*)(void*, int, int)) */

void __thiscall SMBChapter__PlayChapterIntro(SMBChapter *self, _func_void_void_ptr_int_int *arg1)

{
  char *pcVar1;
  GSMBCutSceneManager *this_00;
  FlashAnimationLibrary *pFVar2;
  uint32_t local_78;
  uint32_t local_74;
  uint32_t local_70;
  uint64_t local_68;
  _func_void_void_ptr_int_int *local_60;
  SMBChapter *local_58;
  code *local_50;
  uint64_t local_48;
  uint32_t local_40;
  uint32_t local_3c;
  uint32_t local_38;

  pFVar2 = *(FlashAnimationLibrary **)(self + 0x2a0);
  if (pFVar2 != (FlashAnimationLibrary *)0x0) {
    FlashAnimationLibrary__FlashAnimationLibrary(pFVar2);
    operator_delete(pFVar2);
  }
  *(uint64_t *)(self + 0x2a0) = 0;
  if (*(long **)(self + 0x2a8) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x2a8) + 8))();
  }
  pcVar1 = *(char **)(self + 0x298);
  *(uint64_t *)(self + 0x2a8) = 0;
  pFVar2 = operator_new(0xb0);
  /* try { // try from 0049429c to 004942a0 has its CatchHandler @ 00494331 */
  FlashAnimationLibrary__FlashAnimationLibrary__00576680(pFVar2, pcVar1);
  *(FlashAnimationLibrary **)(self + 0x2a0) = pFVar2;
  local_68 = FlashAnimationLibrary__GetMovieClip__005731d0(pFVar2, 0);
  this_00 = SMBCutSceneManager;
  *(uint64_t *)(self + 0x2a8) = local_68;
  local_48 = 0;
  local_38 = 1;
  local_78 = 0x44200000;
  local_74 = 0x43f00000;
  local_70 = 1;
  local_50 = SMBChapterIntroSkip;
  local_40 = 1;
  local_3c = 0;
  local_60 = arg1;
  local_58 = self;
  GSMBCutSceneManager__PlayCutScene(this_00, (SMBCutScene *)&local_78);
  return;
}

/* ======================================================================
 * SMBChapter__DestroyChapterIntro  (Ghidra `DestroyChapterIntro` @ 00494350)
 * Signature: uint8_t __thiscall DestroyChapterIntro(SMBChapter * self)
 * Class: SMBChapter
 * Calls: `TAudio__DestroyManagedInstances`
 * Called by: `SMBMenuChapterIntroFinished`
 */
/* SMBChapter__DestroyChapterIntro() */

void __thiscall SMBChapter__DestroyChapterIntro(SMBChapter *self)

{
  if (*(long **)(self + 0x2a8) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x2a8) + 8))();
  }
  *(uint64_t *)(self + 0x2a8) = 0;
  TAudio__DestroyManagedInstances(Audio, 0);
  return;
}

/* ======================================================================
 * SMBChapter__PlayChapterIntroEnd  (Ghidra `PlayChapterIntroEnd` @ 00494380)
 * Signature: uint8_t __thiscall PlayChapterIntroEnd(SMBChapter * self, _func_void_void_ptr_int_int * arg1)
 * Class: SMBChapter
 * Calls: `FlashAnimationLibrary__FlashAnimationLibrary__00576680`, `FlashAnimationLibrary__GetMovieClip__005731d0`, `GSMBCutSceneManager__PlayCutScene`, `operator_new`
 * Called by: `SMBMenuChapterIntroFinished`
 */
/* SMBChapter__PlayChapterIntroEnd(void (*)(void*, int, int)) */

void __thiscall SMBChapter__PlayChapterIntroEnd(SMBChapter *self, _func_void_void_ptr_int_int *arg1)

{
  char *pcVar1;
  GSMBCutSceneManager *this_00;
  FlashAnimationLibrary *this_01;
  uint32_t local_78;
  uint32_t local_74;
  uint32_t local_70;
  uint64_t local_68;
  _func_void_void_ptr_int_int *local_60;
  SMBChapter *local_58;
  uint64_t local_50;
  uint64_t local_48;
  uint32_t local_40;
  uint32_t local_3c;
  uint32_t local_38;

  this_01 = *(FlashAnimationLibrary **)(self + 0x2a0);
  if (this_01 == (FlashAnimationLibrary *)0x0) {
    pcVar1 = *(char **)(self + 0x298);
    this_01 = operator_new(0xb0);
    /* try { // try from 0049445a to 0049445e has its CatchHandler @ 0049446b */
    FlashAnimationLibrary__FlashAnimationLibrary__00576680(this_01, pcVar1);
    *(FlashAnimationLibrary **)(self + 0x2a0) = this_01;
  }
  local_68 = FlashAnimationLibrary__GetMovieClip__005731d0(this_01, 1);
  this_00 = SMBCutSceneManager;
  *(uint64_t *)(self + 0x2a8) = local_68;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_3c = 1;
  local_78 = 0x44200000;
  local_74 = 0x43f00000;
  local_70 = 1;
  local_38 = 0;
  local_60 = arg1;
  local_58 = self;
  GSMBCutSceneManager__PlayCutScene(this_00, (SMBCutScene *)&local_78);
  return;
}

/* ======================================================================
 * SMBChapter__DestroyChapterIntroEnd  (Ghidra `DestroyChapterIntroEnd` @ 00494480)
 * Signature: uint8_t __thiscall DestroyChapterIntroEnd(SMBChapter * self)
 * Class: SMBChapter
 * Calls: `FlashAnimationLibrary__FlashAnimationLibrary`, `operator_delete`
 * Called by: `SMBMenuChapterIntroEndFinished`
 */
/* SMBChapter__DestroyChapterIntroEnd() */

void __thiscall SMBChapter__DestroyChapterIntroEnd(SMBChapter *self)

{
  FlashAnimationLibrary *this_00;

  if (*(long **)(self + 0x2a8) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x2a8) + 8))();
  }
  this_00 = *(FlashAnimationLibrary **)(self + 0x2a0);
  *(uint64_t *)(self + 0x2a8) = 0;
  if (this_00 != (FlashAnimationLibrary *)0x0) {
    FlashAnimationLibrary__FlashAnimationLibrary(this_00);
    operator_delete(this_00);
  }
  *(uint64_t *)(self + 0x2a0) = 0;
  return;
}

/* ======================================================================
 * SMBChapter__ThreadLoadBossIntro  (Ghidra `ThreadLoadBossIntro` @ 00494510)
 * Signature: uint8_t __stdcall ThreadLoadBossIntro(void)
 * Class: SMBChapter
 * Calls: `PlayBossIntro`, `SyncEvent__Reset`, `SyncEvent__Set`
 * Called by: `GSMBMenu__ShowChapterMap`
 */
/* SMBChapter__ThreadLoadBossIntro() */

void SMBChapter__ThreadLoadBossIntro(void)

{
  int in_ESI;
  _func_void_void_ptr_int_int *in_RDI;

  if (*(int *)(in_RDI + 0x200) - 7U < 3) {
    return;
  }
  SyncEvent__Reset((SyncEvent *)bossIntroEvent);
  PlayBossIntro(in_RDI, in_ESI);
  SyncEvent__Set((SyncEvent *)bossIntroEvent);
  hBossIntroThread = 0;
  return;
}

/* ======================================================================
 * SMBChapter__PlayBossIntro  (Ghidra `PlayBossIntro` @ 00494560)
 * Signature: uint8_t __thiscall PlayBossIntro(SMBChapter * self, _func_void_void_ptr_int_int * arg1, int arg2)
 * Class: SMBChapter
 * Calls: `CloseThread`, `CreateSMBBoss`, `DisableLoadingRenderThread`, `FlashAnimationLibrary__FlashAnimationLibrary`, `FlashAnimationLibrary__FlashAnimationLibrary__00576680`, `FlashAnimationLibrary__GetMovieClip__005731d0`, `GSMBCutSceneManager__PlayCutScene`, `GSMBMenu__IsInReplayMode`, `GSuperMeatBoy__DeferLoadCharactor`, `GSuperMeatBoy__LoadDeferredCharactor` (+6 more)
 * Called by: `GSMBMenu__PlayBossIntro`, `GSMBMenu__Update`, `LoadBossIntro`, `PlayBossIntro`
 */
/* SMBChapter__PlayBossIntro(void (*)(void*, int, int), int) */

void __thiscall SMBChapter__PlayBossIntro(SMBChapter *self, _func_void_void_ptr_int_int *arg1,
                                          int arg2)

{
  char *pcVar1;
  int iVar2;
  FlashAnimationLibrary *pFVar3;
  uint64_t uVar4;
  uint32_t local_68;
  uint32_t local_64;
  uint32_t local_60;
  uint64_t local_58;
  _func_void_void_ptr_int_int *local_50;
  SMBChapter *local_48;
  code *local_40;
  uint64_t local_38;
  uint32_t local_30;
  uint32_t local_2c;
  uint32_t local_28;

  if (arg2 != 1) {
    SyncEvent__Wait((SyncEvent *)bossIntroEvent);
    CloseThread(hBossIntroThread);
    local_58 = *(uint64_t *)(self + 0x2c0);
    hBossIntroThread = (THREADHANDLESTRUCT *)0x0;
    local_38 = 0;
    local_2c = 1;
    local_28 = 1;
    local_68 = 0x44200000;
    local_64 = 0x43f00000;
    local_60 = 1;
    local_40 = SMBBossIntroSkip;
    local_30 = 1;
    local_50 = arg1;
    local_48 = self;
    GSMBCutSceneManager__PlayCutScene(SMBCutSceneManager, (SMBCutScene *)&local_68);
    if (*(int *)(self + 0x2e0) == 0) {
      TAudioInstance__Stop((TAudioInstance *)(self + 0xc0));
      TAudioInstance__Stop((TAudioInstance *)(self + 0xe8));
    }
    iVar2 = *(int *)(self + 0x204);
    *(uint32_t *)(self + 0x204) = 10;
    *(ushort *)(self + 0x2e6) = (ushort)(iVar2 != 0);
    if (*(short *)(self + 0x2e4) != 1) {
      iVar2 = GSMBMenu__IsInReplayMode(SMBMenu);
      if (iVar2 != 1) {
        PlayChapterMusic(self);
      }
    }
    CreateSMBBoss(0xffffffff);
    GSuperMeatBoy__DeferLoadCharactor(SuperMeatBoy, 0);
    GSuperMeatBoy__LoadDeferredCharactor(SuperMeatBoy, 1);
    Loader__WaitAll();
    DisableLoadingRenderThread();
    return;
  }
  if (*(long **)(self + 0x2c0) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x2c0) + 8))();
  }
  pFVar3 = *(FlashAnimationLibrary **)(self + 0x2b8);
  *(uint64_t *)(self + 0x2c0) = 0;
  if (pFVar3 != (FlashAnimationLibrary *)0x0) {
    FlashAnimationLibrary__FlashAnimationLibrary(pFVar3);
    operator_delete(pFVar3);
  }
  pcVar1 = *(char **)(self + 0x2b0);
  *(uint64_t *)(self + 0x2b8) = 0;
  pFVar3 = operator_new(0xb0);
  /* try { // try from 004946ee to 004946f2 has its CatchHandler @ 00494735 */
  FlashAnimationLibrary__FlashAnimationLibrary__00576680(pFVar3, pcVar1);
  *(FlashAnimationLibrary **)(self + 0x2b8) = pFVar3;
  uVar4 = FlashAnimationLibrary__GetMovieClip__005731d0(pFVar3, 0);
  *(uint64_t *)(self + 0x2c0) = uVar4;
  return;
}

/* ======================================================================
 * SMBChapter__DestroyBossIntro  (Ghidra `DestroyBossIntro` @ 00494750)
 * Signature: uint8_t __thiscall DestroyBossIntro(SMBChapter * self)
 * Class: SMBChapter
 * Calls: `CloseThread`, `FlashAnimationLibrary__FlashAnimationLibrary`, `SyncEvent__Wait`, `operator_delete`
 * Called by: `GSMBMenu__LoadChapterMenu`, `SMBMenuBossIntroFinished`
 */
/* SMBChapter__DestroyBossIntro() */

void __thiscall SMBChapter__DestroyBossIntro(SMBChapter *self)

{
  FlashAnimationLibrary *this_00;

  if (hBossIntroThread != (THREADHANDLESTRUCT *)0x0) {
    SyncEvent__Wait((SyncEvent *)bossIntroEvent);
    CloseThread(hBossIntroThread);
    hBossIntroThread = (THREADHANDLESTRUCT *)0x0;
  }
  if (*(long **)(self + 0x2c0) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x2c0) + 8))();
  }
  this_00 = *(FlashAnimationLibrary **)(self + 0x2b8);
  *(uint64_t *)(self + 0x2c0) = 0;
  if (this_00 != (FlashAnimationLibrary *)0x0) {
    FlashAnimationLibrary__FlashAnimationLibrary(this_00);
    operator_delete(this_00);
  }
  *(uint64_t *)(self + 0x2b8) = 0;
  return;
}

/* ======================================================================
 * SMBChapter__ThreadLoadBossOutro  (Ghidra `ThreadLoadBossOutro` @ 00494800)
 * Signature: uint8_t __stdcall ThreadLoadBossOutro(void)
 * Class: SMBChapter
 * Calls: `PlayBossOutro`, `SyncEvent__Reset`, `SyncEvent__Set`
 * Called by: `FactoryBoss__FactoryBoss__00468ff0`, `FinalBoss__FinalBoss__00469560`, `ForestBoss__ForestBoss__0046a890`, `HellBoss__HellBoss__0046bab0`, `HospitalBoss__HospitalBoss__0046d390`, `HospitalBoss__OnDeath`, `RaptureBoss__RaptureBoss__00483ef0`
 */
/* SMBChapter__ThreadLoadBossOutro() */

void SMBChapter__ThreadLoadBossOutro(void)

{
  int in_ESI;
  _func_void_void_ptr_int_int *in_RDI;

  SyncEvent__Reset((SyncEvent *)bossOutroEvent);
  PlayBossOutro(in_RDI, in_ESI);
  SyncEvent__Set((SyncEvent *)bossOutroEvent);
  hBossOutroThread = 0;
  return;
}

/* ======================================================================
 * SMBChapter__PlayBossOutro  (Ghidra `PlayBossOutro` @ 00494830)
 * Signature: uint8_t __thiscall PlayBossOutro(SMBChapter * self, _func_void_void_ptr_int_int * arg1, int arg2)
 * Class: SMBChapter
 * Calls: `CloseThread`, `DisableLoadingRenderThread`, `FlashAnimationLibrary__FlashAnimationLibrary`, `FlashAnimationLibrary__FlashAnimationLibrary__00576680`, `FlashAnimationLibrary__GetMovieClip__005731d0`, `GSMBCutSceneManager__PlayCutScene`, `GSMBMenu__LoadChapterEnd`, `GSMBMenu__LoadChapterMenu`, `GSuperMeatBoy__DeferLoadCharactor`, `GSuperMeatBoy__Freeze` (+8 more)
 * Called by: `FactoryBoss__Update`, `FinalBoss__Update`, `ForestBoss__Update`, `HellBoss__Update`, `HospitalBoss__Update`, `LoadBossOutro`, `PlayBossOutro`, `RaptureBoss__Update`
 */
/* SMBChapter__PlayBossOutro(void (*)(void*, int, int), int) */

void __thiscall SMBChapter__PlayBossOutro(SMBChapter *self, _func_void_void_ptr_int_int *arg1,
                                          int arg2)

{
  char *pcVar1;
  GSuperMeatBoy *this_00;
  FlashAnimationLibrary *pFVar2;
  uint64_t uVar3;
  uint32_t local_68;
  uint32_t local_64;
  uint32_t local_60;
  uint64_t local_58;
  _func_void_void_ptr_int_int *local_50;
  SMBChapter *local_48;
  code *local_40;
  uint64_t local_38;
  uint32_t local_30;
  uint32_t local_2c;
  uint32_t local_28;

  if (arg2 != 1) {
    SyncEvent__Wait((SyncEvent *)bossOutroEvent);
    CloseThread(hBossOutroThread);
    local_58 = *(uint64_t *)(self + 0x2d8);
    hBossOutroThread = (THREADHANDLESTRUCT *)0x0;
    local_38 = 0;
    local_28 = 1;
    local_68 = 0x44200000;
    local_64 = 0x43f00000;
    local_60 = 1;
    local_40 = SMBBossIntroSkip;
    local_30 = 1;
    local_2c = 0;
    local_50 = arg1;
    local_48 = self;
    if (*(int *)(self + 0x2e0) != 1) {
      if (*(uint *)(self + 0x204) < 2) {
        if (*(long *)(self + 0x18) != 0) {
          TAudioInstance__Stop((TAudioInstance *)(self + 0x48));
        }
      } else if (*(uint *)(self + 0x204) == 10) {
        TAudioInstance__Stop((TAudioInstance *)(self + 0x98));
      } else if (*(long *)(self + 0x28) != 0) {
        TAudioInstance__Stop((TAudioInstance *)(self + 0x70));
      }
    }
    this_00 = SuperMeatBoy;
    *(uint32_t *)(self + 0x204) = 10;
    GSuperMeatBoy__Freeze(this_00, 1);
    GSuperMeatBoy__SetCurrentLevel(SuperMeatBoy, (TileLevel *)0x0);
    GSMBCutSceneManager__PlayCutScene(SMBCutSceneManager, (SMBCutScene *)&local_68);
    GSMBMenu__LoadChapterMenu(SMBMenu, *(uint32_t *)(self + 0x200));
    GSMBMenu__LoadChapterEnd(SMBMenu);
    if (*(int *)(self + 0x200) == 6) {
      GSuperMeatBoy__DeferLoadCharactor(SuperMeatBoy, 0x1a);
      GSuperMeatBoy__LoadDeferredCharactor(SuperMeatBoy, 1);
    }
    Loader__WaitAll();
    DisableLoadingRenderThread();
    return;
  }
  if (*(long **)(self + 0x2d8) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x2d8) + 8))();
  }
  pFVar2 = *(FlashAnimationLibrary **)(self + 0x2d0);
  *(uint64_t *)(self + 0x2d8) = 0;
  if (pFVar2 != (FlashAnimationLibrary *)0x0) {
    FlashAnimationLibrary__FlashAnimationLibrary(pFVar2);
    operator_delete(pFVar2);
  }
  pcVar1 = *(char **)(self + 0x2c8);
  *(uint64_t *)(self + 0x2d0) = 0;
  pFVar2 = operator_new(0xb0);
  /* try { // try from 004949ce to 004949d2 has its CatchHandler @ 00494a51 */
  FlashAnimationLibrary__FlashAnimationLibrary__00576680(pFVar2, pcVar1);
  *(FlashAnimationLibrary **)(self + 0x2d0) = pFVar2;
  uVar3 = FlashAnimationLibrary__GetMovieClip__005731d0(pFVar2, 0);
  *(uint64_t *)(self + 0x2d8) = uVar3;
  return;
}

/* ======================================================================
 * SMBChapter__DestroyBossOutro  (Ghidra `DestroyBossOutro` @ 00494a70)
 * Signature: uint8_t __thiscall DestroyBossOutro(SMBChapter * self, int arg1)
 * Class: SMBChapter
 * Calls: `CloseThread`, `DestroySMBBoss`, `FlashAnimationLibrary__FlashAnimationLibrary`, `GSuperMeatBoy__MarkAllLevelsInvisible`, `SyncEvent__Wait`, `operator_delete`
 * Called by: `FinalBoss__Update`, `SMBFactoryBossOutroFinished`, `SMBFinalBossOutroFinished`, `SMBForestBossOutroFinished`, `SMBHellBossOutroFinished`, `SMBHospitalBossOutroFinished`, `SMBRaptureBossOutroFinished`
 */
/* SMBChapter__DestroyBossOutro(int) */

void __thiscall SMBChapter__DestroyBossOutro(SMBChapter *self, int arg1)

{
  FlashAnimationLibrary *this_00;

  if (hBossOutroThread != (THREADHANDLESTRUCT *)0x0) {
    SyncEvent__Wait((SyncEvent *)bossOutroEvent);
    CloseThread(hBossOutroThread);
    hBossOutroThread = (THREADHANDLESTRUCT *)0x0;
  }
  if (*(long **)(self + 0x2d8) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x2d8) + 8))();
  }
  this_00 = *(FlashAnimationLibrary **)(self + 0x2d0);
  *(uint64_t *)(self + 0x2d8) = 0;
  if (this_00 != (FlashAnimationLibrary *)0x0) {
    FlashAnimationLibrary__FlashAnimationLibrary(this_00);
    operator_delete(this_00);
  }
  *(uint64_t *)(self + 0x2d0) = 0;
  if (arg1 == 1) {
    DestroySMBBoss();
  }
  GSuperMeatBoy__MarkAllLevelsInvisible(SuperMeatBoy);
  return;
}

/* ======================================================================
 * SMBChapter__GetCurrChapterIndex  (Ghidra `GetCurrChapterIndex` @ 00494b30)
 * Signature: uint8_t __thiscall GetCurrChapterIndex(SMBChapter * self)
 * Class: SMBChapter
 * Calls: (none)
 * Called by: `GSuperMeatBoy__BeatLevel`
 */
/* SMBChapter__GetCurrChapterIndex() */

uint32_t __thiscall SMBChapter__GetCurrChapterIndex(SMBChapter *self)

{
  return *(uint32_t *)(self + 0x200);
}

/* ======================================================================
 * SMBChapter__IsNextLevelUnlocked  (Ghidra `IsNextLevelUnlocked` @ 00494e40)
 * Signature: uint8_t __thiscall IsNextLevelUnlocked(SMBChapter * self)
 * Class: SMBChapter
 * Calls: `GSMBChapterData__GetCurrentLevelData`, `GetLevelInfo`
 * Called by: `TransitionToNextLevel`
 */
/* SMBChapter__IsNextLevelUnlocked() */

bool __thiscall SMBChapter__IsNextLevelUnlocked(SMBChapter *self)

{
  GSMBChapterData *pGVar1;
  int iVar2;
  float *pfVar3;
  long lVar4;
  bool bVar5;
  int iVar6;

  pGVar1 = SMBChapterData;
  bVar5 = true;
  if (*(short *)(self + 0x14) != 1) {
    iVar2 = GetNumberOfLevels(self);
    bVar5 = false;
    iVar6 = *(int *)(pGVar1 + 0x1ce8) + 1;
    if ((iVar6 < iVar2) && (bVar5 = true, *(int *)(self + 0x204) != 0)) {
      pfVar3 = (float *)GSMBChapterData__GetCurrentLevelData(pGVar1, iVar6, 0);
      lVar4 = GetLevelInfo(self, iVar6, 0);
      bVar5 = *pfVar3 <= *(float *)(lVar4 + 0x40) && *(float *)(lVar4 + 0x40) != *pfVar3;
    }
  }
  return bVar5;
}

/* ======================================================================
 * SMBChapter__VerifyChapterFileData  (Ghidra `VerifyChapterFileData` @ 00494ed0)
 * Signature: uint8_t __thiscall VerifyChapterFileData(SMBChapter * self, uchar * arg1, uint arg2)
 * Class: SMBChapter
 * Calls: `LoadLevelDataFromBlock`, `PropertiesFile__FindPropertyBlock`, `PropertiesFile__FindPropertyVariable`, `PropertiesFile__GetNumPropertyBlocksByName`, `PropertiesFile__PropertiesFile`, `PropertiesFile__PropertiesFile__005975b0`
 * Called by: `GSMBMenu__ValidateAndLoadChapter`
 */
/* SMBChapter__VerifyChapterFileData(unsigned char*, unsigned int) */

uint64_t __thiscall SMBChapter__VerifyChapterFileData(SMBChapter *self, uchar *arg1, uint arg2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint64_t uVar6;
  PropertiesFile aPStack_188[80];
  LevelInfo local_138[64];
  uint32_t local_f8;
  uint32_t local_f4;
  uint32_t local_f0;
  uint32_t local_ec;
  PropertyBlock *local_e8[2];
  PropertyVariable *local_d8[2];
  PropertyVariable *local_c8[2];
  PropertyVariable *local_b8[2];
  PropertyVariable *local_a8[2];
  PropertyVariable *local_98[2];
  PropertyVariable *local_88[2];
  PropertyVariable *local_78[2];
  PropertyVariable *local_68[2];
  PropertyVariable *local_58[2];
  PropertyVariable *local_48[2];
  PropertyBlock *local_38[2];

  PropertiesFile__PropertiesFile__005975b0(aPStack_188, (char *)arg1, arg2);
  /* try { // try from 00494ef9 to 00495176 has its CatchHandler @ 0049523d */
  PropertiesFile__FindPropertyBlock(aPStack_188, local_e8, "chapter", 0);
  if (local_e8[0] != (PropertyBlock *)0x0) {
    PropertiesFile__FindPropertyVariable(aPStack_188, local_d8, local_e8[0], "music");
    PropertiesFile__FindPropertyVariable(aPStack_188, local_48, local_e8[0], "altmusic");
    PropertiesFile__FindPropertyVariable(aPStack_188, local_b8, local_e8[0], "warptrans");
    PropertiesFile__FindPropertyVariable(aPStack_188, local_c8, local_e8[0], "warpmusic");
    PropertiesFile__FindPropertyVariable(aPStack_188, local_a8, local_e8[0], "menunormalmusic");
    PropertiesFile__FindPropertyVariable(aPStack_188, local_98, local_e8[0], "menuretromusic");
    PropertiesFile__FindPropertyVariable(aPStack_188, local_88, local_e8[0], "intro");
    PropertiesFile__FindPropertyVariable(aPStack_188, local_78, local_e8[0], "bossmusic");
    PropertiesFile__FindPropertyVariable(aPStack_188, local_68, local_e8[0], "bossintro");
    PropertiesFile__FindPropertyVariable(aPStack_188, local_58, local_e8[0], "bossoutro");
    if ((((((local_d8[0] != (PropertyVariable *)0x0) && (local_48[0] != (PropertyVariable *)0x0)) &&
           (local_b8[0] != (PropertyVariable *)0x0)) &&
          ((local_c8[0] != (PropertyVariable *)0x0 && (local_a8[0] != (PropertyVariable *)0x0)))) &&
         ((local_98[0] != (PropertyVariable *)0x0 &&
           ((local_88[0] != (PropertyVariable *)0x0 &&
             (local_78[0] != (PropertyVariable *)0x0)))))) &&
        ((local_68[0] != (PropertyVariable *)0x0 && (local_58[0] != (PropertyVariable *)0x0)))) {
      iVar1 = PropertiesFile__GetNumPropertyBlocksByName(aPStack_188, "normlevel");
      iVar2 = PropertiesFile__GetNumPropertyBlocksByName(aPStack_188, "altlevel");
      PropertiesFile__GetNumPropertyBlocksByName(aPStack_188, "warp");
      if (iVar1 != 0) {
        local_38[0] = (PropertyBlock *)0x0;
        if (0 < iVar1) {
          iVar5 = 0;
          iVar4 = 0;
          do {
            iVar4 = PropertiesFile__FindPropertyBlock(aPStack_188, local_38, "normlevel", iVar4);
            if (local_38[0] == (PropertyBlock *)0x0)
              goto LAB_00495190;
            local_f8 = 0;
            local_f4 = 0xffffffff;
            local_f0 = 0xffffffff;
            local_ec = 0;
            iVar3 = LoadLevelDataFromBlock(local_38[0], local_138, aPStack_188);
            if (iVar3 == 0)
              goto LAB_00495190;
            iVar5 = iVar5 + 1;
          } while (iVar5 != iVar1);
        }
        if (0 < iVar2) {
          iVar4 = 0;
          iVar1 = 0;
          do {
            iVar1 = PropertiesFile__FindPropertyBlock(aPStack_188, local_38, "altlevel", iVar1);
            if (local_38[0] == (PropertyBlock *)0x0)
              goto LAB_00495190;
            local_f8 = 0;
            local_f4 = 0xffffffff;
            local_f0 = 0xffffffff;
            local_ec = 0;
            /* try { // try from 004951fc to 0049521e has its CatchHandler @ 0049523d */
            iVar5 = LoadLevelDataFromBlock(local_38[0], local_138, aPStack_188);
            if (iVar5 == 0)
              goto LAB_00495190;
            iVar4 = iVar4 + 1;
          } while (iVar4 != iVar2);
        }
        uVar6 = 1;
        goto LAB_00495192;
      }
    }
  }
LAB_00495190:
  uVar6 = 0;
LAB_00495192:
  PropertiesFile__PropertiesFile(aPStack_188);
  return uVar6;
}

/* ======================================================================
 * SMBChapter__SMBChapter  (Ghidra `~SMBChapter` @ 00495260)
 * Signature: uint8_t __thiscall ~SMBChapter(SMBChapter * self)
 * Class: SMBChapter
 * Calls: `CriticalSection__CriticalSection__005b71d0`, `GSMBChapterData__GSMBChapterData__004967a0`, `TAudioInstance__TAudioInstance__0057a200`, `free`, `operator_delete`
 * Called by: `GSuperMeatBoy__GSuperMeatBoy__00512120`
 */
/* WARNING: Removing unreachable block (ram,0x004956da) */
/* WARNING: Removing unreachable block (ram,0x004956b6) */
/* WARNING: Removing unreachable block (ram,0x004956cc) */
/* WARNING: Removing unreachable block (ram,0x004956e8) */
/* WARNING: Removing unreachable block (ram,0x0049564e) */
/* SMBChapter__SMBChapter() */

void __thiscall SMBChapter__SMBChapter(SMBChapter *self)

{
  allocator *paVar1;
  int *piVar2;
  int iVar3;
  GSMBChapterData *pGVar4;

  /* try { // try from 00495269 to 00495281 has its CatchHandler @ 0049565c */
  UnloadChapter(self);
  pGVar4 = SMBChapterData;
  if (SMBChapterData != (GSMBChapterData *)0x0) {
    GSMBChapterData__GSMBChapterData__004967a0(SMBChapterData);
    operator_delete(pGVar4);
  }
  paVar1 = (allocator *)(*(long *)(self + 0x2c8) + -0x18);
  if (paVar1 != (allocator *)&std__string_Rep_S_empty_rep_storage) {
    LOCK();
    piVar2 = (int *)(*(long *)(self + 0x2c8) + -8);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 < 1) {
      std__string_Rep_M_destroy(paVar1);
    }
  }
  paVar1 = (allocator *)(*(long *)(self + 0x2b0) + -0x18);
  if (paVar1 != (allocator *)&std__string_Rep_S_empty_rep_storage) {
    LOCK();
    piVar2 = (int *)(*(long *)(self + 0x2b0) + -8);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 < 1) {
      std__string_Rep_M_destroy(paVar1);
    }
  }
  paVar1 = (allocator *)(*(long *)(self + 0x298) + -0x18);
  if (paVar1 != (allocator *)&std__string_Rep_S_empty_rep_storage) {
    LOCK();
    piVar2 = (int *)(*(long *)(self + 0x298) + -8);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 < 1) {
      std__string_Rep_M_destroy(paVar1);
    }
  }
  paVar1 = (allocator *)(*(long *)(self + 0x280) + -0x18);
  if (paVar1 != (allocator *)&std__string_Rep_S_empty_rep_storage) {
    LOCK();
    piVar2 = (int *)(*(long *)(self + 0x280) + -8);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 < 1) {
      std__string_Rep_M_destroy(paVar1);
    }
  }
  paVar1 = (allocator *)(*(long *)(self + 0x278) + -0x18);
  if (paVar1 != (allocator *)&std__string_Rep_S_empty_rep_storage) {
    LOCK();
    piVar2 = (int *)(*(long *)(self + 0x278) + -8);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 < 1) {
      std__string_Rep_M_destroy(paVar1);
    }
  }
  if (*(int *)(self + 0x1f8) == -0x5eef3582) {
    *(uint32_t *)(self + 0x1f8) = 0;
    free(*(void **)(*(long *)(self + 0x1e8) + -8));
    if (*(int *)(self + 0x1e0) == 1) {
      free(*(void **)(*(long *)(self + 0x1f0) + -8));
    }
    *(uint32_t *)(self + 0x1f8) = 0;
    *(uint16_t *)(self + 0x1da) = 0;
    *(uint16_t *)(self + 0x1d8) = 0;
    *(uint64_t *)(self + 0x1e8) = 0;
    *(uint64_t *)(self + 0x1f0) = 0;
  }
  /* try { // try from 00495319 to 0049531d has its CatchHandler @ 00495631 */
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)(self + 0x1b0));
  if (*(int *)(self + 0x1a8) == -0x5eef3582) {
    *(uint32_t *)(self + 0x1a8) = 0;
    free(*(void **)(*(long *)(self + 0x198) + -8));
    if (*(int *)(self + 400) == 1) {
      free(*(void **)(*(long *)(self + 0x1a0) + -8));
    }
    *(uint32_t *)(self + 0x1a8) = 0;
    *(uint16_t *)(self + 0x18a) = 0;
    *(uint16_t *)(self + 0x188) = 0;
    *(uint64_t *)(self + 0x198) = 0;
    *(uint64_t *)(self + 0x1a0) = 0;
  }
  /* try { // try from 00495335 to 00495339 has its CatchHandler @ 004956b1 */
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)(self + 0x160));
  if (*(int *)(self + 0x158) == -0x5eef3582) {
    *(uint32_t *)(self + 0x158) = 0;
    free(*(void **)(*(long *)(self + 0x148) + -8));
    if (*(int *)(self + 0x140) == 1) {
      free(*(void **)(*(long *)(self + 0x150) + -8));
    }
    *(uint32_t *)(self + 0x158) = 0;
    *(uint16_t *)(self + 0x13a) = 0;
    *(uint16_t *)(self + 0x138) = 0;
    *(uint64_t *)(self + 0x148) = 0;
    *(uint64_t *)(self + 0x150) = 0;
  }
  /* try { // try from 00495351 to 00495355 has its CatchHandler @ 00495603 */
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)(self + 0x110));
  /* try { // try from 0049535d to 00495361 has its CatchHandler @ 004956c4 */
  TAudioInstance__TAudioInstance__0057a200((TAudioInstance *)(self + 0xe8));
  /* try { // try from 00495369 to 0049536d has its CatchHandler @ 0049562c */
  TAudioInstance__TAudioInstance__0057a200((TAudioInstance *)(self + 0xc0));
  /* try { // try from 00495375 to 00495379 has its CatchHandler @ 004955e6 */
  TAudioInstance__TAudioInstance__0057a200((TAudioInstance *)(self + 0x98));
  /* try { // try from 0049537e to 00495382 has its CatchHandler @ 004956a9 */
  TAudioInstance__TAudioInstance__0057a200((TAudioInstance *)(self + 0x70));
  TAudioInstance__TAudioInstance__0057a200((TAudioInstance *)(self + 0x48));
  return;
}

/* ======================================================================
 * SMBChapter__SMBChapter__00495700  (Ghidra `SMBChapter` @ 00495700)
 * Signature: uint8_t __thiscall SMBChapter(SMBChapter * self)
 * Class: SMBChapter
 * Calls: `CriticalSection__CriticalSection`, `GSMBChapterData__GSMBChapterData`, `TAudioInstance__TAudioInstance`, `operator_new`
 * Called by: `GSuperMeatBoy__GSuperMeatBoy__00514290`
 */
/* SMBChapter__SMBChapter__00495700() */

void __thiscall SMBChapter__SMBChapter__00495700(SMBChapter *self)

{
  GSMBChapterData *this_00;

  *(uint32_t *)self = 0;
  *(uint16_t *)(self + 0x14) = 0;
  *(uint16_t *)(self + 0x16) = 0;
  *(uint64_t *)(self + 0x18) = 0;
  *(uint64_t *)(self + 0x20) = 0;
  *(uint64_t *)(self + 0x28) = 0;
  *(uint64_t *)(self + 0x30) = 0;
  *(uint64_t *)(self + 0x38) = 0;
  *(uint64_t *)(self + 0x40) = 0;
  TAudioInstance__TAudioInstance((TAudioInstance *)(self + 0x48));
  /* try { // try from 00495784 to 00495788 has its CatchHandler @ 004959dc */
  TAudioInstance__TAudioInstance((TAudioInstance *)(self + 0x70));
  /* try { // try from 00495798 to 0049579c has its CatchHandler @ 00495aa9 */
  TAudioInstance__TAudioInstance((TAudioInstance *)(self + 0x98));
  /* try { // try from 004957ac to 004957b0 has its CatchHandler @ 00495aa4 */
  TAudioInstance__TAudioInstance((TAudioInstance *)(self + 0xc0));
  /* try { // try from 004957bb to 004957bf has its CatchHandler @ 00495a9f */
  TAudioInstance__TAudioInstance((TAudioInstance *)(self + 0xe8));
  /* try { // try from 004957ca to 004957ce has its CatchHandler @ 00495a9a */
  CriticalSection__CriticalSection((CriticalSection *)(self + 0x110));
  *(uint16_t *)(self + 0x13a) = 0;
  *(uint16_t *)(self + 0x138) = 0;
  *(uint16_t *)(self + 0x144) = 1;
  *(uint64_t *)(self + 0x148) = 0;
  *(uint64_t *)(self + 0x150) = 0;
  *(uint32_t *)(self + 0x158) = 0;
  self[0x13c] = (SMBChapter)0x4;
  *(uint32_t *)(self + 0x140) = 0;
  /* try { // try from 00495825 to 00495829 has its CatchHandler @ 00495a95 */
  CriticalSection__CriticalSection((CriticalSection *)(self + 0x160));
  *(uint16_t *)(self + 0x18a) = 0;
  *(uint16_t *)(self + 0x188) = 0;
  *(uint16_t *)(self + 0x194) = 1;
  *(uint64_t *)(self + 0x198) = 0;
  *(uint64_t *)(self + 0x1a0) = 0;
  *(uint32_t *)(self + 0x1a8) = 0;
  self[0x18c] = (SMBChapter)0x4;
  *(uint32_t *)(self + 400) = 0;
  /* try { // try from 00495880 to 00495884 has its CatchHandler @ 00495a90 */
  CriticalSection__CriticalSection((CriticalSection *)(self + 0x1b0));
  *(uint16_t *)(self + 0x1da) = 0;
  *(uint16_t *)(self + 0x1d8) = 0;
  *(uint16_t *)(self + 0x1e4) = 1;
  *(uint64_t *)(self + 0x1e8) = 0;
  *(uint64_t *)(self + 0x1f0) = 0;
  *(uint32_t *)(self + 0x1f8) = 0;
  self[0x1dc] = (SMBChapter)0x4;
  *(uint32_t *)(self + 0x1e0) = 0;
  *(uint32_t *)(self + 0x204) = 0;
  *(uint32_t *)(self + 0x270) = 0;
  *(uint32_t *)(self + 0x274) = 0xffffffff;
  *(uint8_t **)(self + 0x278) = &DAT_008184c8 /* R:0.00016803004837129265f */;
  *(uint8_t **)(self + 0x280) = &DAT_008184c8 /* R:0.00016803004837129265f */;
  *(uint64_t *)(self + 0x288) = 0;
  *(uint64_t *)(self + 0x290) = 0;
  *(uint8_t **)(self + 0x298) = &DAT_008184c8 /* R:0.00016803004837129265f */;
  *(uint64_t *)(self + 0x2a0) = 0;
  *(uint64_t *)(self + 0x2a8) = 0;
  *(uint8_t **)(self + 0x2b0) = &DAT_008184c8 /* R:0.00016803004837129265f */;
  *(uint64_t *)(self + 0x2b8) = 0;
  *(uint64_t *)(self + 0x2c0) = 0;
  *(uint8_t **)(self + 0x2c8) = &DAT_008184c8 /* R:0.00016803004837129265f */;
  *(uint64_t *)(self + 0x2d0) = 0;
  *(uint64_t *)(self + 0x2d8) = 0;
  *(uint32_t *)(self + 0x2e0) = 0;
  *(uint16_t *)(self + 0x2e4) = 0;
  *(uint16_t *)(self + 0x2e6) = 0;
  *(uint32_t *)(self + 0x2f0) = 0xffffffff;
  /* try { // try from 004959a9 to 004959ad has its CatchHandler @ 00495a88 */
  this_00 = operator_new(0x1f18);
  /* try { // try from 004959b4 to 004959b8 has its CatchHandler @ 004959f1 */
  GSMBChapterData__GSMBChapterData(this_00);
  return;
}
