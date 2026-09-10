/* src/game/logic/game_02.c — 100 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "game_02.h"

/* ======================================================================
 * SMBLevelDifficultyCompare  (Ghidra `SMBLevelDifficultyCompare` @ 005056f0)
 * Signature: uint8_t __stdcall SMBLevelDifficultyCompare(SMBPortalLevel * arg1, SMBPortalLevel * arg2)
 * Calls: (none)
 * Called by: (none)
 */
/* SMBLevelDifficultyCompare(SMBPortalLevel*, SMBPortalLevel*) */

bool SMBLevelDifficultyCompare(SMBPortalLevel *arg1, SMBPortalLevel *arg2)

{
  return *(float *)(arg1 + 0x74) <= *(float *)(arg2 + 0x74) &&
         *(float *)(arg2 + 0x74) != *(float *)(arg1 + 0x74);
}

/* ======================================================================
 * SMBLevelPortalWebButtonPress  (Ghidra `SMBLevelPortalWebButtonPress` @ 00505700)
 * Signature: uint8_t __stdcall SMBLevelPortalWebButtonPress(void * arg1)
 * Calls: (none)
 * Called by: `SMBLevelPortalInterface__Initialize`
 */
/* SMBLevelPortalWebButtonPress(void*) */

void SMBLevelPortalWebButtonPress(void *arg1)

{
  return;
}

/* ======================================================================
 * SMBLevelPortalUnknownDifficultyPress  (Ghidra `SMBLevelPortalUnknownDifficultyPress` @ 00505760)
 * Signature: uint8_t __stdcall SMBLevelPortalUnknownDifficultyPress(void * arg1)
 * Calls: `GSMBMenu__TransitionInReloadChapter`
 * Called by: `SMBLevelPortalInterface__Initialize`
 */
/* SMBLevelPortalUnknownDifficultyPress(void*) */

void SMBLevelPortalUnknownDifficultyPress(void *arg1)

{
  GSMBMenu *self;

  self = SMBMenu;
  *(uint32_t *)(SuperMeatBoyPortal + 0x1c) = *(uint32_t *)(pUnknownDifficulty + (long)arg1 * 4);
  GSMBMenu__TransitionInReloadChapter(self);
  return;
}

/* ======================================================================
 * SMBLevelPortalLevelPress  (Ghidra `SMBLevelPortalLevelPress` @ 00505780)
 * Signature: uint8_t __stdcall SMBLevelPortalLevelPress(void * arg1)
 * Calls: `GSMBMenu__TransitionInGameFromMenu`, `GSMBMenu__TransitionInReloadChapter`, `GSuperMeatBoy__DeferLoadCharactor`
 * Called by: `SMBLevelPortalInterface__Initialize`
 */
/* SMBLevelPortalLevelPress(void*) */

void SMBLevelPortalLevelPress(void *arg1)

{
  *(void **)(SMBLevelChapterPortalInterface + 0x1bb0) = arg1;
  if (*(int *)arg1 == -1) {
    return;
  }
  if (*(int *)((long)arg1 + 0x2a0) != 1) {
    GSMBMenu__TransitionInReloadChapter(SMBMenu);
    return;
  }
  GSuperMeatBoy__DeferLoadCharactor(SuperMeatBoy, *(uint32_t *)((long)arg1 + 0x294));
  GSMBMenu__TransitionInGameFromMenu(SMBMenu);
  return;
}

/* ======================================================================
 * GetPortalChapter  (Ghidra `GetPortalChapter` @ 00506f30)
 * Signature: uint8_t __stdcall GetPortalChapter(int arg1, SMBPortalChapter * * arg2)
 * Calls: `SMBLevelPortal__GetPortalChapter`, `SQLDatabase__ChooseDatabase`, `SQLDatabase__Connect`, `SQLDatabase__ExecuteQuery`, `SQLDatabase__SQLDatabase`, `SQLDatabase__SQLDatabase__005b4540`, `SQLQuery__SQLQuery`, `SQLResultSet__GetINT`, `SQLResultSet__GetString`, `SQLResultSet__NextRow` (+3 more)
 * Called by: `SMBLevelPortal__LoadSelectedChapter`
 */
/* SMBLevelPortal__GetPortalChapter(int, SMBPortalChapter**) [clone .constprop.39] */

void SMBLevelPortal__GetPortalChapter(int arg1, SMBPortalChapter **arg2)

{
  int iVar1;
  size_t sVar2;
  uint64_t *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  uint32_t in_register_0000003c;
  SMBLevelPortal *self;
  uint64_t *puVar7;
  bool bVar8;
  byte bVar9;
  SQLDatabase aSStack_178[144];
  uint64_t local_e8;
  char *local_e0;
  SQLResultSet *local_d8;
  uint32_t local_d0;
  uint32_t local_cc;
  uint16_t local_c8;
  uint16_t local_c6;
  uint64_t local_b8;
  char *local_b0;
  SQLResultSet *local_a8;
  uint32_t local_a0;
  uint32_t local_9c;
  uint16_t local_98;
  uint16_t local_96;
  char *local_88;
  char *local_80;
  uint8_t *local_78;
  uint32_t local_70;
  char *local_68;
  uint32_t local_60;
  char *local_58;
  uint32_t local_50;
  char *local_48;
  uint32_t local_40;
  int local_38[4];

  self = (SMBLevelPortal *)CONCAT44(in_register_0000003c, arg1);
  bVar9 = 0;
  *(uint64_t *)(self + 0x20) = 0xffffffffffffffff;
  *(uint64_t *)(self + 0x28) = 0xffffffffffffffff;
  *(uint64_t *)(self + 0x30) = 0xffffffffffffffff;
  *(uint64_t *)(self + 0x38) = 0xffffffffffffffff;
  *(uint64_t *)(self + 0x40) = 0xffffffffffffffff;
  *(uint64_t *)(self + 0x48) = 0xffffffffffffffff;
  *(uint64_t *)(self + 0x50) = 0xffffffffffffffff;
  *(uint64_t *)(self + 0x58) = 0xffffffffffffffff;
  *(uint64_t *)(self + 0x60) = 0xffffffffffffffff;
  *(uint64_t *)(self + 0x68) = 0xffffffffffffffff;
  local_70 = 0;
  local_78 = strPortalIP;
  local_88 = "smb_editor_user";
  local_80 = "editor";
  SQLDatabase__SQLDatabase(aSStack_178);
  /* try { // try from 00506fd6 to 00506ffc has its CatchHandler @ 0050734d */
  SQLDatabase__Connect(aSStack_178, (SQLDatabaseConnection *)&local_88);
  SQLDatabase__ChooseDatabase(aSStack_178, "smb_editor");
  Sprint("SELECT * FROM smb_editor_chapterinfo WHERE chapter_id = %i", strPortalUploadQuery,
         (ulong)arg2 & 0xffffffff);
  local_e8 = 0;
  local_d8 = (SQLResultSet *)0x0;
  local_d0 = 0;
  local_cc = 0;
  local_c8 = 0;
  local_e0 = strPortalUploadQuery;
  local_c6 = 0;
  sVar2 = strlen(strPortalUploadQuery);
  local_d0 = (uint32_t)sVar2;
  /* try { // try from 00507067 to 00507078 has its CatchHandler @ 0050734b */
  SQLDatabase__ExecuteQuery(aSStack_178, (SQLQuery *)&local_e8, 0);
  iVar1 = SQLResultSet__NextRow(local_d8);
  if (iVar1 == 1) {
    /* try { // try from 005070ad to 005070b1 has its CatchHandler @ 0050734b */
    puVar3 = operator_new(0xb0);
    bVar8 = ((ulong)puVar3 & 1) != 0;
    puVar3[0x14] = 0;
    *(uint32_t *)(puVar3 + 0x15) = 0xffffffff;
    uVar5 = 0xa0;
    puVar7 = puVar3;
    if (bVar8) {
      *(uint8_t *)puVar3 = 0;
      puVar7 = (uint64_t *)((long)puVar3 + 1);
      uVar5 = 0x9f;
    }
    if (((ulong)puVar7 & 2) != 0) {
      *(uint16_t *)puVar7 = 0;
      uVar5 = (ulong)((int)uVar5 - 2);
      puVar7 = (uint64_t *)((long)puVar7 + 2);
    }
    if (((ulong)puVar7 & 4) != 0) {
      *(uint32_t *)puVar7 = 0;
      uVar5 = (ulong)((int)uVar5 - 4);
      puVar7 = (uint64_t *)((long)puVar7 + 4);
    }
    for (uVar4 = uVar5 >> 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar7 = 0;
      puVar7 = puVar7 + (ulong)bVar9 * -2 + 1;
    }
    if ((uVar5 & 4) != 0) {
      *(uint32_t *)puVar7 = 0;
      puVar7 = (uint64_t *)((long)puVar7 + 4);
    }
    if ((uVar5 & 2) != 0) {
      *(uint16_t *)puVar7 = 0;
      puVar7 = (uint64_t *)((long)puVar7 + 2);
    }
    if (bVar8) {
      *(uint8_t *)puVar7 = 0;
    }
    local_60 = 0xffffffff;
    local_68 = "chaptername";
    local_50 = 0xffffffff;
    local_58 = "chaptermusic";
    /* try { // try from 0050715a to 00507191 has its CatchHandler @ 0050731e */
    SQLResultSet__GetString(local_d8, (SQLFieldName *)&local_68, (char **)(puVar3 + 0x14),
                            (uint *)0x0);
    SQLResultSet__GetINT(local_d8, (SQLFieldName *)&local_58, (int *)(puVar3 + 0x15), (uint *)0x0);
    Sprint("SELECT * FROM smb_editor_chapterlevels WHERE chapter_id = %i ORDER BY ordering ASC",
           strPortalUploadQuery, (ulong)arg2 & 0xffffffff);
    local_b8 = 0;
    local_a8 = (SQLResultSet *)0x0;
    local_a0 = 0;
    local_9c = 0;
    local_98 = 0;
    local_b0 = strPortalUploadQuery;
    local_96 = 0;
    sVar2 = strlen(strPortalUploadQuery);
    local_a0 = (uint32_t)sVar2;
    local_40 = 0xffffffff;
    local_48 = "level_id";
    /* try { // try from 00507216 to 00507235 has its CatchHandler @ 0050733e */
    SQLDatabase__ExecuteQuery(aSStack_178, (SQLQuery *)&local_b8, 0);
    for (lVar6 = 0; lVar6 != 0x14; lVar6 = lVar6 + 1) {
      do {
        /* try { // try from 00507258 to 005072ab has its CatchHandler @ 0050733e */
        iVar1 = SQLResultSet__NextRow(local_a8);
        if (iVar1 != 1)
          goto LAB_00507236;
        local_38[0] = -1;
        SQLResultSet__GetINT(local_a8, (SQLFieldName *)&local_48, local_38, (uint *)0x0);
        *(int *)(self + lVar6 * 4 + 0x20) = local_38[0];
      } while (local_38[0] == -1);
      GetPortalLevel(self, local_38[0], (SMBPortalLevel **)(puVar3 + (int)lVar6));
    }
    SQLResultSet__NextRow(local_a8);
  LAB_00507236:
    LoadedPortalChapter = puVar3;
    /* try { // try from 00507240 to 00507244 has its CatchHandler @ 0050731e */
    SQLQuery__SQLQuery((SQLQuery *)&local_b8);
  }
  /* try { // try from 00507088 to 0050708c has its CatchHandler @ 0050734d */
  SQLQuery__SQLQuery((SQLQuery *)&local_e8);
  SQLDatabase__SQLDatabase__005b4540(aSStack_178);
  return;
}

/* ======================================================================
 * SMBLevelPortalSearchPress  (Ghidra `SMBLevelPortalSearchPress` @ 0050ba60)
 * Signature: uint8_t __stdcall SMBLevelPortalSearchPress(void * arg1)
 * Calls: `SMBLevelPortalInterface__GetList`
 * Called by: `SMBLevelPortalInterface__Initialize`
 */
/* SMBLevelPortalSearchPress(void*) */

void SMBLevelPortalSearchPress(void *arg1)

{
  SMBLevelPortalInterface__GetList(SMBLevelChapterPortalInterface);
  return;
}

/* ======================================================================
 * SMBLevelPortalNextButtonPress  (Ghidra `SMBLevelPortalNextButtonPress` @ 0050ba70)
 * Signature: uint8_t __stdcall SMBLevelPortalNextButtonPress(void * arg1)
 * Calls: `SMBLevelPortalInterface__GetList`
 * Called by: `SMBLevelPortalInterface__Initialize`
 */
/* SMBLevelPortalNextButtonPress(void*) */

void SMBLevelPortalNextButtonPress(void *arg1)

{
  SMBLevelPortalInterface *self;

  self = SMBLevelChapterPortalInterface;
  *(int *)(SMBLevelChapterPortalInterface + 0x3768) =
      *(int *)(SMBLevelChapterPortalInterface + 0x3768) + 10;
  SMBLevelPortalInterface__GetList(self);
  return;
}

/* ======================================================================
 * SMBLevelPortalPrevButtonPress  (Ghidra `SMBLevelPortalPrevButtonPress` @ 0050ba90)
 * Signature: uint8_t __stdcall SMBLevelPortalPrevButtonPress(void * arg1)
 * Calls: `SMBLevelPortalInterface__GetList`
 * Called by: `SMBLevelPortalInterface__Initialize`
 */
/* SMBLevelPortalPrevButtonPress(void*) */

void SMBLevelPortalPrevButtonPress(void *arg1)

{
  SMBLevelPortalInterface *self;
  int iVar1;

  self = SMBLevelChapterPortalInterface;
  iVar1 = 0;
  if (9 < *(int *)(SMBLevelChapterPortalInterface + 0x3768)) {
    iVar1 = *(int *)(SMBLevelChapterPortalInterface + 0x3768) + -10;
  }
  *(int *)(SMBLevelChapterPortalInterface + 0x3768) = iVar1;
  SMBLevelPortalInterface__GetList(self);
  return;
}

/* ======================================================================
 * SMBEditorButtonOrderSwitch  (Ghidra `SMBEditorButtonOrderSwitch` @ 0050bac0)
 * Signature: uint8_t __stdcall SMBEditorButtonOrderSwitch(void * arg1)
 * Calls: `SMBLevelPortalInterface__GetList`
 * Called by: `SMBLevelPortalInterface__Initialize`
 */
/* SMBEditorButtonOrderSwitch(void*) */

void SMBEditorButtonOrderSwitch(void *arg1)

{
  SMBLevelPortalInterface *pSVar1;
  SMBLevelPortalInterface *self;
  int iVar2;

  self = SMBLevelChapterPortalInterface;
  iVar2 = (int)arg1;
  pSVar1 = SMBLevelChapterPortalInterface + 0x3704;
  *(uint32_t *)(SMBLevelChapterPortalInterface + 0x3768) = 0;
  if (iVar2 == *(int *)pSVar1) {
    *(uint *)(self + 0x3700) = (uint)(*(int *)(self + 0x3700) == 0);
  } else {
    *(int *)(self + 0x3704) = iVar2;
    *(uint32_t *)(self + 0x3700) = 0;
  }
  if (iVar2 == 0) {
    *(uint32_t *)(self + 0x3700) = 0;
    return;
  }
  SMBLevelPortalInterface__GetList(self);
  return;
}

/* ======================================================================
 * SMBLevelPortalUnknownPress  (Ghidra `SMBLevelPortalUnknownPress` @ 0050d1b0)
 * Signature: uint8_t __stdcall SMBLevelPortalUnknownPress(void * arg1)
 * Calls: `SMBLevelPortalInterface__SetDisplayMode`
 * Called by: `SMBLevelPortalInterface__Initialize`
 */
/* SMBLevelPortalUnknownPress(void*) */

void SMBLevelPortalUnknownPress(void *arg1)

{
  SMBLevelPortalInterface__SetDisplayMode(SMBLevelChapterPortalInterface, 4);
  return;
}

/* ======================================================================
 * SMBLevelPortalFeaturedPress  (Ghidra `SMBLevelPortalFeaturedPress` @ 0050d1d0)
 * Signature: uint8_t __stdcall SMBLevelPortalFeaturedPress(void * arg1)
 * Calls: `SMBLevelPortalInterface__GetList`, `SMBLevelPortalInterface__SetDisplayMode`
 * Called by: `SMBLevelPortalInterface__Initialize`
 */
/* SMBLevelPortalFeaturedPress(void*) */

void SMBLevelPortalFeaturedPress(void *arg1)

{
  SMBLevelPortalInterface__SetDisplayMode(SMBLevelChapterPortalInterface, 0);
  SMBLevelPortalInterface__GetList(SMBLevelChapterPortalInterface);
  return;
}

/* ======================================================================
 * SMBLevelPortalRecommendedButtonPress  (Ghidra `SMBLevelPortalRecommendedButtonPress` @ 0050d200)
 * Signature: uint8_t __stdcall SMBLevelPortalRecommendedButtonPress(void * arg1)
 * Calls: `SMBLevelPortalInterface__GetList`, `SMBLevelPortalInterface__SetDisplayMode`
 * Called by: `SMBLevelPortalInterface__Initialize`
 */
/* SMBLevelPortalRecommendedButtonPress(void*) */

void SMBLevelPortalRecommendedButtonPress(void *arg1)

{
  SMBLevelPortalInterface__SetDisplayMode(SMBLevelChapterPortalInterface, 2);
  SMBLevelPortalInterface__GetList(SMBLevelChapterPortalInterface);
  return;
}

/* ======================================================================
 * SMBLevelPortalLevelButtonPress  (Ghidra `SMBLevelPortalLevelButtonPress` @ 0050d230)
 * Signature: uint8_t __stdcall SMBLevelPortalLevelButtonPress(void * arg1)
 * Calls: `SMBLevelPortalInterface__GetList`, `SMBLevelPortalInterface__SetDisplayMode`
 * Called by: `SMBLevelPortalInterface__Initialize`
 */
/* SMBLevelPortalLevelButtonPress(void*) */

void SMBLevelPortalLevelButtonPress(void *arg1)

{
  SMBLevelPortalInterface__SetDisplayMode(SMBLevelChapterPortalInterface, 3);
  SMBLevelPortalInterface__GetList(SMBLevelChapterPortalInterface);
  return;
}

/* ======================================================================
 * SMBLevelPortalBigLevelButtonPress  (Ghidra `SMBLevelPortalBigLevelButtonPress` @ 0050d260)
 * Signature: uint8_t __stdcall SMBLevelPortalBigLevelButtonPress(void * arg1)
 * Calls: `SMBLevelPortalInterface__GetList`, `SMBLevelPortalInterface__SetDisplayMode`
 * Called by: `SMBLevelPortalInterface__Initialize`
 */
/* SMBLevelPortalBigLevelButtonPress(void*) */

void SMBLevelPortalBigLevelButtonPress(void *arg1)

{
  SMBLevelPortalInterface__SetDisplayMode(SMBLevelChapterPortalInterface, 2);
  SMBLevelPortalInterface__GetList(SMBLevelChapterPortalInterface);
  return;
}

/* ======================================================================
 * SMBLevelPortalChapterButtonPress  (Ghidra `SMBLevelPortalChapterButtonPress` @ 0050d290)
 * Signature: uint8_t __stdcall SMBLevelPortalChapterButtonPress(void * arg1)
 * Calls: `SMBLevelPortalInterface__GetList`, `SMBLevelPortalInterface__SetDisplayMode`
 * Called by: `SMBLevelPortalInterface__Initialize`
 */
/* SMBLevelPortalChapterButtonPress(void*) */

void SMBLevelPortalChapterButtonPress(void *arg1)

{
  SMBLevelPortalInterface__SetDisplayMode(SMBLevelChapterPortalInterface, 1);
  SMBLevelPortalInterface__GetList(SMBLevelChapterPortalInterface);
  return;
}

/* ======================================================================
 * GetReplayFileHeader  (Ghidra `GetReplayFileHeader` @ 0050d380)
 * Signature: uint8_t __stdcall GetReplayFileHeader(SMBReplayFileCreate * arg1, int arg2, File * arg3, File * arg4, SystemFileTime * arg5)
 * Calls: `File__Read`, `File__ReadVariable`, `SMBReplay__GetReplayFileHeader`, `TPlayer__GetProfile`
 * Called by: `LoadReplayData`
 */
/* SMBReplay__GetReplayFileHeader(SMBReplayFileCreate*, int, File*, File*, SystemFileTime*) [clone
   .constprop.24] */

void SMBReplay__GetReplayFileHeader(SMBReplayFileCreate *arg1, int arg2, File *arg3, File *arg4,
                                    SystemFileTime *arg5)

{
  long *plVar1;
  uint32_t in_register_00000034;
  File *self;

  self = (File *)CONCAT44(in_register_00000034, arg2);
  if (self != (File *)0x0) {
    File__Read(self, arg1 + 8, 0x10);
    File__Read(self, arg1 + 0x19, 1);
    File__Read(self, arg1 + 0x18, 1);
    File__ReadVariable(self, arg1 + 0x1a, 2);
    File__ReadVariable(self, arg1 + 0x1c, 4);
    return;
  }
  plVar1 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
  (**(code **)(*plVar1 + 0x48))(plVar1, arg3, arg1 + 8, 0x10);
  plVar1 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
  (**(code **)(*plVar1 + 0x48))(plVar1, arg3, arg1 + 0x19, 1);
  plVar1 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
  (**(code **)(*plVar1 + 0x48))(plVar1, arg3, arg1 + 0x18, 1);
  plVar1 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
  (**(code **)(*plVar1 + 0x48))(plVar1, arg3, arg1 + 0x1a, 2);
  plVar1 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
  /* WARNING: Could not recover jumptable at 0x0050d4c2. Too many branches */
  /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x48))(plVar1, arg3, arg1 + 0x1c, 4, *(code **)(*plVar1 + 0x48));
  return;
}

/* ======================================================================
 * WriteReplayDataThread  (Ghidra `WriteReplayDataThread` @ 0050d4d0)
 * Signature: uint8_t __stdcall WriteReplayDataThread(void * arg1)
 * Calls: `GSMBCutSceneManager__CancelSavingMessage`, `GetRandomINT`, `Sprint`, `SyncEvent__Set`, `TPlayer__GetProfile`, `free`, `memcpy`, `operator_delete`
 * Called by: `SMBReplay__WriteReplayData`
 */
/* WARNING: Removing unreachable block (ram,0x0050d972) */
/* WARNING: Removing unreachable block (ram,0x0050d967) */
/* WriteReplayDataThread(void*) */

uint64_t WriteReplayDataThread(void *arg1)

{
  allocator *paVar1;
  int *piVar2;
  uint32_t uVar3;
  uint8_t *__src;
  byte bVar4;
  uint32_t uVar5;
  uint32_t uVar6;
  long lVar7;
  long *plVar8;
  size_t __n;
  long lVar9;
  long lVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  uint8_t local_168[128];
  uint8_t local_e8[64];
  uint8_t *local_a8;
  uint8_t *local_a0;
  uint32_t local_98;
  uint64_t local_90;
  uint32_t local_88;
  uint32_t local_84;
  uint32_t local_80;
  uint32_t local_7c;
  int local_78;
  uint32_t local_74;
  uint8_t *local_70;
  uint8_t local_68[15];
  uint8_t local_59;
  uint8_t local_58;
  byte local_57;
  uint16_t local_56[7];
  int local_48[6];

  __src = *(uint8_t **)arg1;
  local_57 = (byte) * (uint32_t *)((long)arg1 + 0xc);
  local_58 = (uint8_t)*(uint32_t *)((long)arg1 + 8);
  if (__src != local_68) {
    __n = *(long *)(__src + -0x18) + 1;
    if (0x10 < __n) {
      __n = 0x10;
    }
    memcpy(local_68, __src, __n);
  }
  uVar3 = *(uint32_t *)((long)arg1 + 0x10);
  local_59 = 0;
  local_56[0] = 0xffff;
  uVar5 = GetRandomINT(200000, 500000);
  uVar6 = GetRandomINT(10000, 100000);
  uVar5 = GetRandomINT(uVar6, uVar5);
  Sprint("%s_%i_%i_%i.rpl", local_e8, local_68, local_58, uVar5, uVar3);
  Sprint("%s Replay %s", local_168, local_68, "Meatboy");
  local_98 = 2;
  local_90 = 0;
  local_88 = 0;
  local_84 = 1;
  local_80 = 1;
  local_7c = 0;
  local_a0 = &DAT_005c0513 /* R:u32=1996513911 */;
  local_74 = 1;
  local_78 = 0x18;
  if (local_57 != 0) {
    local_78 = 0x18;
    lVar7 = 0;
    do {
      lVar9 = lVar7 + 0x10;
      lVar7 = lVar7 + 0x10;
      local_78 = local_78 + 4 + *(int *)((long)arg1 + lVar9) * 0xc;
    } while (lVar7 != ((ulong)(local_57 - 1) + 1) * 0x10);
  }
  local_48[0] = 0;
  local_a8 = local_e8;
  local_70 = local_168;
  plVar8 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
  lVar7 = (**(code **)(*plVar8 + 0x40))(plVar8, &local_a8, local_48);
  if (lVar7 == 0) {
    if (local_48[0] == 1) {
      free(*(void **)((long)arg1 + 0x290));
      paVar1 = (allocator *)(*(long *)arg1 + -0x18);
      if (paVar1 != (allocator *)&std__string_Rep_S_empty_rep_storage) {
        LOCK();
        piVar2 = (int *)(*(long *)arg1 + -8);
        iVar11 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar11 < 1) {
          std__string_Rep_M_destroy(paVar1);
        }
      }
      operator_delete(arg1);
      SyncEvent__Set((SyncEvent *)writeReplayEvent);
      GSMBCutSceneManager__CancelSavingMessage(SMBCutSceneManager);
      return 1;
    }
  } else {
    plVar8 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
    (**(code **)(*plVar8 + 0x50))(plVar8, lVar7, local_68, 0x10);
    plVar8 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
    (**(code **)(*plVar8 + 0x50))(plVar8, lVar7, &local_57, 1);
    plVar8 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
    (**(code **)(*plVar8 + 0x50))(plVar8, lVar7, &local_58, 1);
    plVar8 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
    (**(code **)(*plVar8 + 0x50))(plVar8, lVar7, local_56, 2);
    plVar8 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
    (**(code **)(*plVar8 + 0x50))(plVar8, lVar7, (long)arg1 + 0x298, 4);
    if (local_57 != 0) {
      iVar11 = 0;
      do {
        plVar8 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
        lVar9 = (long)iVar11;
        iVar11 = iVar11 + 1;
        (**(code **)(*plVar8 + 0x50))(plVar8, lVar7, (void *)((lVar9 + 1) * 0x10 + (long)arg1), 4);
      } while (iVar11 < (int)(uint)local_57);
      if (local_57 != 0) {
        iVar11 = 0;
        bVar4 = local_57;
        piVar2 = arg1;
        do {
          piVar12 = piVar2 + 4;
          lVar9 = 0;
          iVar13 = 0;
          if (0 < *piVar12) {
            do {
              iVar13 = iVar13 + 1;
              plVar8 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
              (**(code **)(*plVar8 + 0x50))(plVar8, lVar7, *(long *)(piVar2 + 6) + lVar9, 4);
              plVar8 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
              (**(code **)(*plVar8 + 0x50))(plVar8, lVar7, *(long *)(piVar2 + 6) + lVar9 + 4, 4);
              plVar8 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
              lVar10 = *(long *)(piVar2 + 6) + lVar9;
              lVar9 = lVar9 + 0xc;
              (**(code **)(*plVar8 + 0x50))(plVar8, lVar7, lVar10 + 8, 4);
              bVar4 = local_57;
            } while (iVar13 < *piVar12);
          }
          iVar11 = iVar11 + 1;
          piVar2 = piVar12;
        } while (iVar11 < (int)(uint)bVar4);
      }
    }
  }
  plVar8 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
  (**(code **)(*plVar8 + 0x58))(plVar8, lVar7, 1);
  free(*(void **)((long)arg1 + 0x290));
  paVar1 = (allocator *)(*(long *)arg1 + -0x18);
  if (paVar1 != (allocator *)&std__string_Rep_S_empty_rep_storage) {
    LOCK();
    piVar2 = (int *)(*(long *)arg1 + -8);
    iVar11 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar11 < 1) {
      std__string_Rep_M_destroy(paVar1);
    }
  }
  operator_delete(arg1);
  SyncEvent__Set((SyncEvent *)writeReplayEvent);
  GSMBCutSceneManager__CancelSavingMessage(SMBCutSceneManager);
  return 0;
}

/* ======================================================================
 * GetReplayData  (Ghidra `GetReplayData` @ 0050df70)
 * Signature: uint8_t __stdcall GetReplayData(int arg1, int arg2, SMBReplayFrame * arg3, int * arg4)
 * Calls: (none)
 * Called by: (none)
 */
/* SMBReplay__GetReplayData(int, int, SMBReplayFrame&, int&) */

uint64_t SMBReplay__GetReplayData(int arg1, int arg2, SMBReplayFrame *arg3, int *arg4)

{
  return 0;
}

/* ======================================================================
 * LoadReplayData  (Ghidra `LoadReplayData` @ 0050e310)
 * Signature: uint8_t __stdcall LoadReplayData(SMBReplayFileCreate * arg1)
 * Calls: `File__File`, `File__File__005b7a70`, `File__ReadArray`, `File__ReadVariable`, `GetReplayFileHeader`, `TPlayer__GetProfile`
 * Called by: (none)
 */
/* SMBReplay__LoadReplayData(SMBReplayFileCreate*) */

void SMBReplay__LoadReplayData(SMBReplayFileCreate *arg1)

{
  SMBReplayFileCreate SVar1;
  int iVar2;
  long *plVar3;
  File *pFVar4;
  File *in_RCX;
  File *pFVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  SMBReplayFileCreate *pSVar9;
  SMBReplayFileCreate *in_RSI;
  SystemFileTime *in_R8;
  int iVar10;
  uint64_t local_a8;
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
  File local_68[56];

  local_a8 = *(uint64_t *)in_RSI;
  local_98 = 2;
  local_90 = 0;
  local_88 = 0;
  local_84 = 1;
  local_80 = 1;
  local_7c = 0;
  local_78 = 0;
  local_74 = 0;
  local_70 = &DAT_005c04cf /* R:7.374579797039071e-39f */;
  local_a0 = &DAT_005c328c /* R:u32=1811964530 */;
  if (*(int *)(in_RSI + 0x20) == 1) {
    local_74 = 1;
    plVar3 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
    pFVar5 = (File *)*plVar3;
    pFVar4 = (File *)(**(code **)(pFVar5 + 0x40))(plVar3, &local_a8, 0);
    if (pFVar4 != (File *)0x0) {
      GetReplayFileHeader(in_RSI, 0, pFVar4, pFVar5, in_R8);
      SVar1 = in_RSI[0x19];
      *(uint *)(arg1 + 0x34) = (uint)(byte)SVar1;
      *(uint32_t *)(arg1 + 0x3c) = *(uint32_t *)(in_RSI + 0x1c);
      if ((byte)SVar1 != 0) {
        iVar7 = 0;
        do {
          plVar3 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
          lVar8 = (long)iVar7;
          iVar7 = iVar7 + 1;
          (**(code **)(*plVar3 + 0x48))(plVar3, pFVar4, arg1 + (lVar8 + 4) * 0x10 + 8, 4);
          iVar2 = *(int *)(arg1 + 0x34);
        } while (iVar7 < iVar2);
        iVar7 = 0;
        pSVar9 = arg1 + 0x48;
        if (0 < iVar2) {
          do {
            lVar8 = 0;
            iVar10 = 0;
            if (0 < *(int *)pSVar9) {
              do {
                iVar10 = iVar10 + 1;
                plVar3 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
                (**(code **)(*plVar3 + 0x48))(plVar3, pFVar4, *(long *)(pSVar9 + 8) + lVar8, 4);
                plVar3 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
                (**(code **)(*plVar3 + 0x48))(plVar3, pFVar4, *(long *)(pSVar9 + 8) + lVar8 + 4, 4);
                plVar3 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
                lVar6 = *(long *)(pSVar9 + 8) + lVar8;
                lVar8 = lVar8 + 0xc;
                (**(code **)(*plVar3 + 0x48))(plVar3, pFVar4, lVar6 + 8, 4);
              } while (iVar10 < *(int *)pSVar9);
              iVar2 = *(int *)(arg1 + 0x34);
            }
            iVar7 = iVar7 + 1;
            pSVar9 = pSVar9 + 0x10;
          } while (iVar7 < iVar2);
        }
      }
    }
    plVar3 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
    (**(code **)(*plVar3 + 0x58))(plVar3, pFVar4, 1);
    return;
  }
  File__File(local_68, (tagFileCreation *)&local_a8);
  /* try { // try from 0050e39f to 0050e444 has its CatchHandler @ 0050e5ee */
  GetReplayFileHeader(in_RSI, (int)local_68, (File *)0x0, in_RCX, in_R8);
  SVar1 = in_RSI[0x19];
  *(uint *)(arg1 + 0x34) = (uint)(byte)SVar1;
  *(uint32_t *)(arg1 + 0x3c) = *(uint32_t *)(in_RSI + 0x1c);
  if ((byte)SVar1 != 0) {
    iVar7 = 0;
    do {
      File__ReadVariable(local_68, arg1 + ((long)iVar7 + 4) * 0x10 + 8, 4);
      iVar2 = *(int *)(arg1 + 0x34);
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar2);
    iVar7 = 0;
    pSVar9 = arg1 + 0x48;
    if (0 < iVar2) {
      do {
        lVar8 = 0;
        iVar10 = 0;
        if (0 < *(int *)pSVar9) {
          do {
            File__ReadVariable(local_68, (void *)(*(long *)(pSVar9 + 8) + lVar8), 4);
            File__ReadArray(local_68, (uchar *)(*(long *)(pSVar9 + 8) + lVar8 + 4), 2, 4);
            iVar10 = iVar10 + 1;
            lVar8 = lVar8 + 0xc;
          } while (iVar10 < *(int *)pSVar9);
          iVar2 = *(int *)(arg1 + 0x34);
        }
        iVar7 = iVar7 + 1;
        pSVar9 = pSVar9 + 0x10;
      } while (iVar7 < iVar2);
    }
  }
  File__File__005b7a70(local_68);
  return;
}

/* ======================================================================
 * SMBReplayCloseMenu  (Ghidra `SMBReplayCloseMenu` @ 0050ea70)
 * Signature: uint8_t __stdcall SMBReplayCloseMenu(tagButtonProps * arg1, void * arg2)
 * Calls: (none)
 * Called by: `SMBReplayManager__Activate`
 */
/* SMBReplayCloseMenu(tagButtonProps const*, void*) */

void SMBReplayCloseMenu(tagButtonProps *arg1, void *arg2)

{
  if (*(int *)arg1 != 1) {
    return;
  }
  /* WARNING: Could not recover jumptable at 0x0050ea8a. Too many branches */
  /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)arg2 + 0x28))(arg2);
  return;
}

/* ======================================================================
 * SMBReplayDeletePress  (Ghidra `SMBReplayDeletePress` @ 0050ebc0)
 * Signature: uint8_t __stdcall SMBReplayDeletePress(tagButtonProps * arg1, void * arg2)
 * Calls: `CreateMessage`, `GetLocalizedText`, `SMBReplayConfirmDelete`, `System_IsTrialMode`, `UserAlertCloseCurrent`
 * Called by: `SMBReplayManager__Activate`
 */
/* SMBReplayDeletePress(tagButtonProps const*, void*) */

void SMBReplayDeletePress(tagButtonProps *arg1, void *arg2)

{
  int iVar1;
  uint32_t local_78[2];
  uint64_t local_70;
  uint64_t local_68;
  uint64_t local_60;
  uint64_t local_58;
  code *local_50;
  code *local_48;
  uint64_t local_40;
  uint64_t local_38;
  uint64_t local_30;
  uint64_t local_28;
  void *local_20;
  uint64_t local_18;
  uint64_t local_10;

  if (*(int *)arg1 == 1) {
    iVar1 = System_IsTrialMode();
    if (((iVar1 == 0) && (*(int **)((long)arg2 + 0xd0) != (int *)0x0)) &&
        (0 < **(int **)((long)arg2 + 0xd0))) {
      local_78[0] = 0;
      local_70 = 0;
      local_68 = 0;
      local_60 = 0;
      local_58 = 0;
      local_50 = (code *)0x0;
      local_48 = (code *)0x0;
      local_40 = 0;
      local_38 = 0;
      local_30 = 0;
      local_28 = 0;
      local_20 = (void *)0x0;
      local_18 = 0;
      local_10 = 0;
      local_70 = GetLocalizedText(0x53);
      local_68 = GetLocalizedText(0x54);
      local_78[0] = 0x1e;
      local_60 = GetLocalizedText(4);
      local_58 = GetLocalizedText(5);
      local_50 = SMBReplayConfirmDelete;
      local_48 = UserAlertCloseCurrent;
      local_20 = arg2;
      CreateMessage(local_78);
    }
  }
  return;
}

/* ======================================================================
 * SMBReplayLoadPress  (Ghidra `SMBReplayLoadPress` @ 0050fb90)
 * Signature: uint8_t __stdcall SMBReplayLoadPress(tagButtonProps * arg1, void * arg2)
 * Calls: `SMBReplayManager__LoadSelectedReplay`
 * Called by: `SMBReplayManager__Activate`
 */
/* SMBReplayLoadPress(tagButtonProps const*, void*) */

void SMBReplayLoadPress(tagButtonProps *arg1, void *arg2)

{
  if (*(int *)arg1 != 1) {
    return;
  }
  SMBReplayManager__LoadSelectedReplay(arg2);
  return;
}

/* ======================================================================
 * SMBReplayConfirmDelete  (Ghidra `SMBReplayConfirmDelete` @ 0050fd10)
 * Signature: uint8_t __stdcall SMBReplayConfirmDelete(void * arg1)
 * Calls: `DisableMessage`, `SMBReplayManager__LoadFileList__0050fd40`, `SMBReplayManager__LoadText`, `TPlayer__GetProfile`, `free`
 * Called by: `GLOBAL_sub_I_SMBReplayConfirmDelete`, `SMBReplayDeletePress`
 */
/* SMBReplayConfirmDelete(void*) */

void SMBReplayConfirmDelete(void *arg1)

{
  int iVar1;
  long *plVar2;
  long lVar3;

  plVar2 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
  iVar1 = (**(code **)(*plVar2 + 0x20))(plVar2);
  if (iVar1 == 1) {
    lVar3 = TPlayer__GetProfile((TPlayer *)Players__Player);
    if (((*(int *)(lVar3 + 0xc) == 1) && (*(int **)((long)arg1 + 0xd0) != (int *)0x0)) &&
        (**(int **)((long)arg1 + 0xd0) != 0)) {
      plVar2 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
      (**(code **)(*plVar2 + 0x88))(plVar2,
                                    *(uint64_t *)((long)*(int *)((long)arg1 + 200) * 0x10 +
                                                  *(long *)(*(long *)((long)arg1 + 0xd0) + 8)));
      *(uint32_t *)((long)arg1 + 200) = 0;
      *(uint32_t *)((long)arg1 + 0x68) = 0;
      DisableMessage(1);
      if (*(void **)((long)arg1 + 0xd0) != (void *)0x0) {
        free(*(void **)((long)arg1 + 0xd0));
        *(uint64_t *)((long)arg1 + 0xd0) = 0;
      }
      if (*(void **)((long)arg1 + 0xd8) != (void *)0x0) {
        free(*(void **)((long)arg1 + 0xd8));
        *(uint64_t *)((long)arg1 + 0xd8) = 0;
      }
      plVar2 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
      iVar1 = (**(code **)(*plVar2 + 0x20))(plVar2);
      if (iVar1 == 1) {
        lVar3 = TPlayer__GetProfile((TPlayer *)Players__Player);
        if (*(int *)(lVar3 + 0xc) == 1) {
          SMBReplayManager__LoadFileList__0050fd40(arg1);
        }
      }
      SMBReplayManager__LoadText(arg1);
      return;
    }
  }
  return;
}

/* ======================================================================
 * SMBSelectionMenuDecrement  (Ghidra `SMBSelectionMenuDecrement` @ 0050ffd0)
 * Signature: uint8_t __stdcall SMBSelectionMenuDecrement(tagButtonProps * arg1, void * arg2)
 * Calls: (none)
 * Called by: `SMBSelectionMenu__Activate`
 */
/* SMBSelectionMenuDecrement(tagButtonProps const*, void*) */

void SMBSelectionMenuDecrement(tagButtonProps *arg1, void *arg2)

{
  int iVar1;

  if (*(int *)arg1 == 1) {
    (**(code **)(*(long *)arg2 + 0x50))(arg2);
    *(uint32_t *)((long)arg2 + 0x74) = 0xf0;
  } else if (*(int *)arg1 == 2) {
    iVar1 = *(int *)((long)arg2 + 0x74) - *(int *)(Engine + 4);
    *(int *)((long)arg2 + 0x74) = iVar1;
    if (iVar1 < 1) {
      (**(code **)(*(long *)arg2 + 0x50))(arg2);
      *(uint32_t *)((long)arg2 + 0x74) = 0x78;
    }
  }
  return;
}

/* ======================================================================
 * SMBSelectionMenuIncrement  (Ghidra `SMBSelectionMenuIncrement` @ 00510040)
 * Signature: uint8_t __stdcall SMBSelectionMenuIncrement(tagButtonProps * arg1, void * arg2)
 * Calls: (none)
 * Called by: `GLOBAL_sub_I_SMBSelectionMenuIncrement`, `SMBSelectionMenu__Activate`
 */
/* SMBSelectionMenuIncrement(tagButtonProps const*, void*) */

void SMBSelectionMenuIncrement(tagButtonProps *arg1, void *arg2)

{
  int iVar1;

  if (*(int *)arg1 == 1) {
    (**(code **)(*(long *)arg2 + 0x48))(arg2);
    *(uint32_t *)((long)arg2 + 0x78) = 0xf0;
  } else if (*(int *)arg1 == 2) {
    iVar1 = *(int *)((long)arg2 + 0x78) - *(int *)(Engine + 4);
    *(int *)((long)arg2 + 0x78) = iVar1;
    if (iVar1 < 1) {
      (**(code **)(*(long *)arg2 + 0x48))(arg2);
      *(uint32_t *)((long)arg2 + 0x78) = 0x78;
    }
  }
  return;
}

/* ======================================================================
 * SMBSettingsIncrementSFXVolume  (Ghidra `SMBSettingsIncrementSFXVolume` @ 00510560)
 * Signature: uint8_t __stdcall SMBSettingsIncrementSFXVolume(tagButtonProps * arg1, void * arg2)
 * Calls: (none)
 * Called by: `SMBSettingsMenu__SetSFXVolumeSelected`
 */
/* SMBSettingsIncrementSFXVolume(tagButtonProps const*, void*) */

void SMBSettingsIncrementSFXVolume(tagButtonProps *arg1, void *arg2)

{
  int iVar1;

  if (*(int *)arg1 != 1) {
    return;
  }
  GLOBALSFXVOLUME = GLOBALSFXVOLUME + 5;
  iVar1 = 100;
  if (GLOBALSFXVOLUME < 0x65) {
    iVar1 = GLOBALSFXVOLUME;
  }
  GLOBALSFXVOLUME = iVar1;
  return;
}

/* ======================================================================
 * SMBSettingsDecrementSFXVolume  (Ghidra `SMBSettingsDecrementSFXVolume` @ 005105a0)
 * Signature: uint8_t __stdcall SMBSettingsDecrementSFXVolume(tagButtonProps * arg1, void * arg2)
 * Calls: (none)
 * Called by: `SMBSettingsMenu__SetSFXVolumeSelected`
 */
/* SMBSettingsDecrementSFXVolume(tagButtonProps const*, void*) */

void SMBSettingsDecrementSFXVolume(tagButtonProps *arg1, void *arg2)

{
  int iVar1;

  if (*(int *)arg1 != 1) {
    return;
  }
  GLOBALSFXVOLUME = GLOBALSFXVOLUME + -5;
  iVar1 = 0;
  if (-1 < GLOBALSFXVOLUME) {
    iVar1 = GLOBALSFXVOLUME;
  }
  GLOBALSFXVOLUME = iVar1;
  return;
}

/* ======================================================================
 * SMBSettingsChangeFullScreen  (Ghidra `SMBSettingsChangeFullScreen` @ 005105d0)
 * Signature: uint8_t __stdcall SMBSettingsChangeFullScreen(tagButtonProps * arg1, void * arg2)
 * Calls: (none)
 * Called by: `SMBSettingsMenu__SetFullScreenControls`
 */
/* SMBSettingsChangeFullScreen(tagButtonProps const*, void*) */

void SMBSettingsChangeFullScreen(tagButtonProps *arg1, void *arg2)

{
  if (*(int *)arg1 != 1) {
    return;
  }
  bSelectedResFullScreen = (uint)(bSelectedResFullScreen == 0);
  return;
}

/* ======================================================================
 * SMBSettingsRestoreDefaults  (Ghidra `SMBSettingsRestoreDefaults` @ 00510740)
 * Signature: uint8_t __stdcall SMBSettingsRestoreDefaults(tagButtonProps * arg1, void * arg2)
 * Calls: `TAudio__SetMusicVolume`
 * Called by: `SMBSettingsMenu__SetRestoreDefaultControls`
 */
/* SMBSettingsRestoreDefaults(tagButtonProps const*, void*) */

void SMBSettingsRestoreDefaults(tagButtonProps *arg1, void *arg2)

{
  if (*(int *)arg1 != 1) {
    return;
  }
  GLOBALSFXVOLUME = GLOBALDEFAULTMUSICVOLUME;
  GLOBALMUSICVOLUME = GLOBALDEFAULTSFXVOLUME;
  TAudio__SetMusicVolume(Audio, GLOBALDEFAULTSFXVOLUME);
  return;
}

/* ======================================================================
 * SMBSettingsDecrementMusicVolume  (Ghidra `SMBSettingsDecrementMusicVolume` @ 00510780)
 * Signature: uint8_t __stdcall SMBSettingsDecrementMusicVolume(tagButtonProps * arg1, void * arg2)
 * Calls: `TAudio__SetMusicVolume`
 * Called by: `SMBSettingsMenu__SetMusicVolumeSelected`
 */
/* SMBSettingsDecrementMusicVolume(tagButtonProps const*, void*) */

void SMBSettingsDecrementMusicVolume(tagButtonProps *arg1, void *arg2)

{
  if (*(int *)arg1 != 1) {
    return;
  }
  GLOBALMUSICVOLUME = GLOBALMUSICVOLUME - 5;
  if ((int)GLOBALMUSICVOLUME < 0) {
    GLOBALMUSICVOLUME = 0;
  }
  TAudio__SetMusicVolume(Audio, GLOBALMUSICVOLUME);
  return;
}

/* ======================================================================
 * SMBSettingsIncrementMusicVolume  (Ghidra `SMBSettingsIncrementMusicVolume` @ 005107c0)
 * Signature: uint8_t __stdcall SMBSettingsIncrementMusicVolume(tagButtonProps * arg1, void * arg2)
 * Calls: `TAudio__SetMusicVolume`
 * Called by: `SMBSettingsMenu__SetMusicVolumeSelected`
 */
/* SMBSettingsIncrementMusicVolume(tagButtonProps const*, void*) */

void SMBSettingsIncrementMusicVolume(tagButtonProps *arg1, void *arg2)

{
  if (*(int *)arg1 != 1) {
    return;
  }
  GLOBALMUSICVOLUME = GLOBALMUSICVOLUME + 5;
  if (100 < (int)GLOBALMUSICVOLUME) {
    GLOBALMUSICVOLUME = 100;
  }
  TAudio__SetMusicVolume(Audio, GLOBALMUSICVOLUME);
  return;
}

/* ======================================================================
 * SMBSettingsIncrementResolution  (Ghidra `SMBSettingsIncrementResolution` @ 00510800)
 * Signature: uint8_t __stdcall SMBSettingsIncrementResolution(tagButtonProps * arg1, void * arg2)
 * Calls: (none)
 * Called by: `SMBSettingsMenu__SetResolutionControls`
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SMBSettingsIncrementResolution(tagButtonProps const*, void*) */

void SMBSettingsIncrementResolution(tagButtonProps *arg1, void *arg2)

{
  if (*(int *)arg1 == 1) {
    _iSelectedResolutionIndex = _iSelectedResolutionIndex + 1;
    if ((int)((ushort)pScreenResolutions._40_2_ - 1) < _iSelectedResolutionIndex) {
      _iSelectedResolutionIndex = 0;
    } else if (_iSelectedResolutionIndex < 0) {
      _iSelectedResolutionIndex = (ushort)pScreenResolutions._40_2_ - 1;
    }
    return;
  }
  return;
}

/* ======================================================================
 * SMBSettingsDecrementResolution  (Ghidra `SMBSettingsDecrementResolution` @ 00510840)
 * Signature: uint8_t __stdcall SMBSettingsDecrementResolution(tagButtonProps * arg1, void * arg2)
 * Calls: (none)
 * Called by: `SMBSettingsMenu__SetResolutionControls`
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SMBSettingsDecrementResolution(tagButtonProps const*, void*) */

void SMBSettingsDecrementResolution(tagButtonProps *arg1, void *arg2)

{
  if (*(int *)arg1 == 1) {
    _iSelectedResolutionIndex = _iSelectedResolutionIndex + -1;
    if ((int)((ushort)pScreenResolutions._40_2_ - 1) < _iSelectedResolutionIndex) {
      _iSelectedResolutionIndex = 0;
    } else if (_iSelectedResolutionIndex < 0) {
      _iSelectedResolutionIndex = (ushort)pScreenResolutions._40_2_ - 1;
    }
    return;
  }
  return;
}

/* ======================================================================
 * SMBSettingsApplyWindowChanges  (Ghidra `SMBSettingsApplyWindowChanges` @ 00510880)
 * Signature: uint8_t __stdcall SMBSettingsApplyWindowChanges(tagButtonProps * arg1, void * arg2)
 * Calls: `GameRegistry__Flush`, `GameRegistry__GetVariable`
 * Called by: `SMBSettingsMenu__SetFullScreenControls`, `SMBSettingsMenu__SetResolutionControls`
 */
/* SMBSettingsApplyWindowChanges(tagButtonProps const*, void*) */

void SMBSettingsApplyWindowChanges(tagButtonProps *arg1, void *arg2)

{
  uint32_t *puVar1;
  uint32_t uVar2;
  GameRegistry *pGVar3;
  GameRegistryEntry *local_20;
  GameRegistryEntry *local_18;
  GameRegistryEntry *local_10[2];

  if (*(int *)arg1 != 1) {
    return;
  }
  puVar1 = (uint32_t *)(pScreenResolutions._56_8_ + (ulong)iSelectedResolutionIndex * 8);
  _GFXResetParams._0_4_ = *puVar1;
  _GFXResetParams._4_4_ = puVar1[1];
  gfxCurrState = 4;
  _GFXResetParams._8_4_ = bSelectedResFullScreen;
  GameRegistry__GetVariable(EngineRegistry, "winheight", &local_18);
  pGVar3 = EngineRegistry;
  uVar2 = *(uint32_t *)(pScreenResolutions._56_8_ + 4 + (ulong)iSelectedResolutionIndex * 8);
  *(uint32_t *)(local_18 + 8) = 1;
  *(uint32_t *)(local_18 + 0x10) = uVar2;
  GameRegistry__GetVariable(pGVar3, "winwidth", &local_20);
  pGVar3 = EngineRegistry;
  uVar2 = *(uint32_t *)(pScreenResolutions._56_8_ + (ulong)iSelectedResolutionIndex * 8);
  *(uint32_t *)(local_20 + 8) = 1;
  *(uint32_t *)(local_20 + 0x10) = uVar2;
  GameRegistry__GetVariable(pGVar3, "fullscreen", local_10);
  pGVar3 = EngineRegistry;
  uVar2 = bSelectedResFullScreen;
  *(uint32_t *)(local_10[0] + 8) = 1;
  *(uint32_t *)(local_10[0] + 0x10) = uVar2;
  GameRegistry__Flush(pGVar3);
  return;
}

/* ======================================================================
 * SMBReselectedDrive  (Ghidra `SMBReselectedDrive` @ 00511970)
 * Signature: uint8_t SMBReselectedDrive(void)
 * Calls: `GSMBChapterData__ReloadData`, `GSMBChapterData__SaveData`, `SMBSettingsMenu__SetSelectionControls`
 * Called by: `SMBSettingsMenu__ReselectDrive`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SMBReselectedDrive() */

void SMBReselectedDrive(void)

{
  SMBSettingsMenu *self;

  if (*(int *)(SuperMeatBoy + 0x2c) == 0xc) {
    GSMBChapterData__ReloadData(SMBChapterData);
  } else {
    GSMBChapterData__SaveData(SMBChapterData, 0);
  }
  self = GLOBAL_SETTINGS_MENU;
  *(uint32_t *)(GLOBAL_SETTINGS_MENU + 0xd0) = 0;
  SMBSettingsMenu__SetSelectionControls(self);
  return;
}

/* ======================================================================
 * SMBSettingsChangeStorage  (Ghidra `SMBSettingsChangeStorage` @ 00511a50)
 * Signature: uint8_t __stdcall SMBSettingsChangeStorage(tagButtonProps * arg1, void * arg2)
 * Calls: `SMBSettingsMenu__ReselectDrive`
 * Called by: `SMBSettingsMenu__SetChangeStorageDeviceControls`
 */
/* SMBSettingsChangeStorage(tagButtonProps const*, void*) */

void SMBSettingsChangeStorage(tagButtonProps *arg1, void *arg2)

{
  if (*(int *)arg1 != 1) {
    return;
  }
  SMBSettingsMenu__ReselectDrive(GLOBAL_SETTINGS_MENU);
  return;
}

/* ======================================================================
 * ResetSMBGraphicsDependentFactors  (Ghidra `ResetSMBGraphicsDependentFactors` @ 005120c0)
 * Signature: uint8_t __stdcall ResetSMBGraphicsDependentFactors(void * arg1)
 * Calls: `TileLevelLightMap__RegenerateLights`
 * Called by: `GSuperMeatBoy__GSuperMeatBoy__00512120`, `GSuperMeatBoy__Initialize__00516f60`
 */
/* ResetSMBGraphicsDependentFactors(void*) */

void ResetSMBGraphicsDependentFactors(void *arg1)

{
  ushort uVar1;
  ushort uVar2;
  long lVar3;
  long lVar4;

  lVar4 = SuperMeatBoy;
  uVar1 = *(ushort *)(Window + 8);
  uVar2 = *(ushort *)(Window + 10);
  lVar3 = *(long *)(SuperMeatBoy + 0x38);
  *(uint32_t *)(lVar3 + 0x1d4) = 1;
  *(float *)(lVar3 + 0x134) = (float)uVar1 / (float)uVar2;
  TileLevelLightMap__RegenerateLights(*(TileLevelLightMap **)(lVar4 + 0x390));
  return;
}

/* ======================================================================
 * ShowReplayInterface  (Ghidra `ShowReplayInterface` @ 00512460)
 * Signature: uint8_t __stdcall ShowReplayInterface(void * arg1)
 * Calls: `GSMBMenu__ShowReplayMenu`
 * Called by: `ShowSaveReplayInterface`
 */
/* ShowReplayInterface(void*) */

void ShowReplayInterface(void *arg1)

{
  GSMBMenu__ShowReplayMenu(SMBMenu, 1);
  return;
}

/* ======================================================================
 * SMBLevelTransitionOut  (Ghidra `SMBLevelTransitionOut` @ 00512480)
 * Signature: uint8_t __stdcall SMBLevelTransitionOut(void * arg1, int arg2, int arg3)
 * Calls: `GMeatHUD__ShowInGameHud`, `GSMBCutSceneManager__PlayCutScene`, `SMBLevelFinished`, `SMBPalette__GetOutLevelTransition`
 * Called by: `EndLevelTransitionIn`
 */
/* SMBLevelTransitionOut(void*, int, int) */

void SMBLevelTransitionOut(void *arg1, int arg2, int arg3)

{
  GMeatHUD *self;
  long lVar1;
  uint32_t local_58;
  uint32_t local_54;
  uint32_t local_50;
  uint64_t local_48;
  code *local_40;
  uint64_t local_38;
  uint64_t local_30;
  uint64_t local_28;
  uint32_t local_20;
  uint32_t local_1c;
  uint32_t local_18;

  local_48 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 1;
  local_18 = 1;
  local_54 = 0x43f00000;
  local_58 = 0x44200000;
  local_50 = 1;
  local_40 = SMBLevelFinished;
  lVar1 = SMBPalette__GetOutLevelTransition(GSuperMeatBoy__pLevelPalette);
  local_48 = *(uint64_t *)(lVar1 + 8);
  local_18 = 0;
  GSMBCutSceneManager__PlayCutScene(SMBCutSceneManager, (SMBCutScene *)&local_58);
  self = SMBHUD;
  *(uint32_t *)(SuperMeatBoy + 0x2c) = 0;
  GMeatHUD__ShowInGameHud(self);
  bLevelReady = 0;
  return;
}

/* ======================================================================
 * Game_StorageRemovedCancel  (Ghidra `Game_StorageRemovedCancel` @ 00512540)
 * Signature: uint8_t __stdcall Game_StorageRemovedCancel(void * arg1)
 * Calls: `DisableMessage`, `TPlayer__GetProfile`
 * Called by: `GSuperMeatBoy__Update__00516690`
 */
/* Game_StorageRemovedCancel(void*) */

void Game_StorageRemovedCancel(void *arg1)

{
  long lVar1;

  lVar1 = TPlayer__GetProfile((TPlayer *)Players__Player);
  *(uint32_t *)(lVar1 + 0xc) = 0;
  DisableMessage(1);
  return;
}

/* ======================================================================
 * Game_StorageRemovedOK  (Ghidra `Game_StorageRemovedOK` @ 00512570)
 * Signature: uint8_t __stdcall Game_StorageRemovedOK(void * arg1)
 * Calls: `DisableMessage`, `SMBProfileInitialized`, `SMBProfileResave`, `TPlayer__GetProfile`
 * Called by: `GSuperMeatBoy__Update__00516690`
 */
/* Game_StorageRemovedOK(void*) */

void Game_StorageRemovedOK(void *arg1)

{
  long *plVar1;

  plVar1 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
  (**(code **)(*plVar1 + 0x68))(plVar1);
  if (*(int *)(SuperMeatBoy + 0x2c) == 0xc) {
    plVar1 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
    (**(code **)(*plVar1 + 0x10))(plVar1, 0, 1, 0);
  } else {
    if (*(int *)(SuperMeatBoy + 0x2c) == 0xd) {
      plVar1 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
      (**(code **)(*plVar1 + 0x10))(plVar1, 0, 1, SMBProfileInitialized);
      DisableMessage(1);
      return;
    }
    plVar1 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
    (**(code **)(*plVar1 + 0x10))(plVar1, 1, 1, SMBProfileResave);
  }
  DisableMessage(1);
  return;
}

/* ======================================================================
 * ShowPlayerAnimProps  (Ghidra `ShowPlayerAnimProps` @ 00512730)
 * Signature: uint8_t __stdcall ShowPlayerAnimProps(tagButtonProps * arg1, void * arg2)
 * Calls: `UIForm__Activate`, `UIForm__DeActivate`
 * Called by: `GSuperMeatBoy__Initialize__00516f60`
 */
/* ShowPlayerAnimProps(tagButtonProps const*, void*) */

void ShowPlayerAnimProps(tagButtonProps *arg1, void *arg2)

{
  UIForm *self;

  self = SMBEditorForms__SMB_PLAYER_ANIMS;
  if (*(int *)arg1 == 1) {
    if (*(int *)(SuperMeatBoy + 0x2c) == 0) {
      UIForm__Activate(SMBEditorForms__SMB_PLAYER_ANIMS);
      *(uint32_t *)(SuperMeatBoy + 0x2c) = 6;
    } else if (*(int *)(SuperMeatBoy + 0x2c) == 6) {
      *(uint32_t *)(SuperMeatBoy + 0x2c) = 0;
      UIForm__DeActivate(self);
      return;
    }
  }
  return;
}

/* ======================================================================
 * ShowPlayerProps  (Ghidra `ShowPlayerProps` @ 005127f0)
 * Signature: uint8_t __stdcall ShowPlayerProps(tagButtonProps * arg1, void * arg2)
 * Calls: `UIForm__Activate`, `UIForm__DeActivate`
 * Called by: `GSuperMeatBoy__Initialize__00516f60`
 */
/* ShowPlayerProps(tagButtonProps const*, void*) */

void ShowPlayerProps(tagButtonProps *arg1, void *arg2)

{
  UIForm *self;

  self = SMBEditorForms__SMB_PLAYER_PROPS;
  if (*(int *)arg1 == 1) {
    if (*(int *)(SuperMeatBoy + 0x2c) == 0) {
      UIForm__Activate(SMBEditorForms__SMB_PLAYER_PROPS);
      *(uint32_t *)(SuperMeatBoy + 0x2c) = 5;
    } else if (*(int *)(SuperMeatBoy + 0x2c) == 5) {
      *(uint32_t *)(SuperMeatBoy + 0x2c) = 0;
      UIForm__DeActivate(self);
      return;
    }
  }
  return;
}

/* ======================================================================
 * SMBProfileResave  (Ghidra `SMBProfileResave` @ 00512850)
 * Signature: uint8_t SMBProfileResave(void)
 * Calls: `GSMBChapterData__SaveData`, `TPlayer__GetProfile`
 * Called by: `Game_StorageRemovedOK`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SMBProfileResave() */

void SMBProfileResave(void)

{
  int iVar1;
  long *plVar2;
  long lVar3;

  iVar1 = *(int *)(SuperMeatBoy + 0x2c);
  if ((((iVar1 != 0xf) && (iVar1 != 0)) && (iVar1 != 10)) && (iVar1 != 9)) {
    return;
  }
  plVar2 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
  iVar1 = (**(code **)(*plVar2 + 0x20))(plVar2);
  if (iVar1 != 0) {
    plVar2 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
    iVar1 = (**(code **)(*plVar2 + 0x28))(plVar2);
    if (iVar1 == 1) {
      lVar3 = TPlayer__GetProfile((TPlayer *)Players__Player);
      if (*(int *)(lVar3 + 0xc) == 1) {
        GSMBChapterData__SaveData(SMBChapterData, 1);
        return;
      }
    }
  }
  return;
}

/* ======================================================================
 * PauseGame  (Ghidra `PauseGame` @ 005128e0)
 * Signature: uint8_t __stdcall PauseGame(tagButtonProps * arg1, void * arg2)
 * Calls: `SMBEditor__DeActivate`, `SMBPalette__FindAnimatedObstacles`
 * Called by: `GSuperMeatBoy__Initialize__00516f60`
 */
/* PauseGame(tagButtonProps const*, void*) */

void PauseGame(tagButtonProps *arg1, void *arg2)

{
  int iVar1;

  if (*(int *)arg1 != 1) {
    return;
  }
  iVar1 = *(int *)(SuperMeatBoy + 0x2c);
  if (iVar1 == 1) {
    SMBEditor__DeActivate();
    SMBPalette__FindAnimatedObstacles(GSuperMeatBoy__pLevelPalette);
    iVar1 = *(int *)(SuperMeatBoy + 0x2c);
  }
  *(uint *)(SuperMeatBoy + 0x2c) = -(uint)(iVar1 == 0) & 2;
  return;
}

/* ======================================================================
 * BackToTitleFromReplay  (Ghidra `BackToTitleFromReplay` @ 005129c0)
 * Signature: uint8_t __stdcall BackToTitleFromReplay(tagButtonProps * arg1, void * arg2)
 * Calls: `EndBackToTitleFromReplay`, `GMeatHUD__HideInGame`, `GSMBCutSceneManager__PlayCutScene`, `Joystick__AddButtonCallback`, `SMBPalette__GetInLevelTransition`, `TPlayer__GetJoystick`
 * Called by: `GSuperMeatBoy__ShowCurrentReplay`, `ShowCurrentReplay`
 */
/* BackToTitleFromReplay(tagButtonProps const*, void*) */

void BackToTitleFromReplay(tagButtonProps *arg1, void *arg2)

{
  uint64_t *puVar1;
  Joystick *pJVar2;
  uint32_t local_58;
  uint32_t local_54;
  uint32_t local_50;
  uint64_t local_48;
  code *local_40;
  uint64_t local_38;
  uint64_t local_30;
  uint64_t local_28;
  uint32_t local_20;
  uint32_t local_1c;
  uint32_t local_18;

  if (*(int *)arg1 != 1) {
    return;
  }
  local_48 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 1;
  local_18 = 1;
  local_54 = 0x43f00000;
  local_58 = 0x44200000;
  local_50 = 1;
  local_40 = EndBackToTitleFromReplay;
  puVar1 = (uint64_t *)SMBPalette__GetInLevelTransition(GSuperMeatBoy__pLevelPalette);
  local_48 = *puVar1;
  local_18 = 0;
  GSMBCutSceneManager__PlayCutScene(SMBCutSceneManager, (SMBCutScene *)&local_58);
  GMeatHUD__HideInGame(SMBHUD);
  pJVar2 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddButtonCallback(pJVar2, 1, 0, 0);
  bCurrLevelTransitioning = 1;
  return;
}

/* ======================================================================
 * ShowMenuPress  (Ghidra `ShowMenuPress` @ 00512a90)
 * Signature: uint8_t __stdcall ShowMenuPress(tagButtonProps * arg1, void * arg2)
 * Calls: `GSMBMenu__TransitionInMenuFromGame`, `Joystick__AddButtonCallback`, `TKeyboard__AddKeyCallback`, `TPlayer__GetJoystick`
 * Called by: `GSMBMenu__GoBackToMapFromPause`, `GSuperMeatBoy__BeatLevel`, `GSuperMeatBoy__Initialize__00516f60`, `GSuperMeatBoy__ShowCurrentReplay`, `GSuperMeatBoy__ShowGame`, `SMBChapter__LoadNextLevel`, `SMBMenuToMapFromGame`, `ShowCurrentReplay`, `ShowMenuPress__00512b90`, `TransitionToNextLevel`
 */
/* ShowMenuPress(tagButtonProps const*, void*) [clone .part.49] */

void ShowMenuPress(tagButtonProps *arg1, void *arg2)

{
  Joystick *pJVar1;

  if (Keyboard != (TKeyboard *)0x0) {
    TKeyboard__AddKeyCallback(Keyboard, 0x76, 0, 0);
    TKeyboard__AddKeyCallback(Keyboard, 0x6c, 0, 0);
    TKeyboard__AddKeyCallback(Keyboard, 0x6f, 0, 0);
    TKeyboard__AddKeyCallback(Keyboard, 0x43, 0, 0);
    TKeyboard__AddKeyCallback(Keyboard, 0x1b, 0, 0);
    TKeyboard__AddKeyCallback(Keyboard, 10, 0, 0);
    TKeyboard__AddKeyCallback(Keyboard, 0x71, 0, 0);
  }
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddButtonCallback(pJVar1, 0, 0, 0);
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddButtonCallback(pJVar1, 3, 0, 0);
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddButtonCallback(pJVar1, 1, 0, 0);
  GSMBMenu__TransitionInMenuFromGame(SMBMenu);
  return;
}

/* ======================================================================
 * ShowMenuPress__00512b90  (Ghidra `ShowMenuPress` @ 00512b90)
 * Signature: uint8_t __stdcall ShowMenuPress(tagButtonProps * arg1, void * arg2)
 * Calls: `ShowMenuPress`
 * Called by: (none)
 */
/* ShowMenuPress(tagButtonProps const*, void*) */

void ShowMenuPress(tagButtonProps *arg1, void *arg2)

{
  if ((((arg1 == (tagButtonProps *)0x0) ||
        ((*(int *)arg1 == 1 && (*(int *)(SuperMeatBoy + 0x3a4) == 0)))) &&
       (*(int *)(SuperMeatBoy + 0x2c) != 9)) &&
      (*(int *)(SuperMeatBoy + 0x3a0) == 0)) {
    ShowMenuPress((tagButtonProps *)0x0, arg2);
    return;
  }
  return;
}

/* ======================================================================
 * ShowSaveReplayInterface  (Ghidra `ShowSaveReplayInterface` @ 00512bd0)
 * Signature: uint8_t __stdcall ShowSaveReplayInterface(tagButtonProps * arg1, void * arg2)
 * Calls: `CreateMessage`, `GSMBCutSceneManager__ShowSavingMessage`, `GetLocalizedText`, `Joystick__AddButtonCallback`, `SMBReplay__WriteReplayData`, `ShowReplayAlreadySaved`, `ShowReplayInterface`, `System_IsTrialMode`, `System_PurchaseFullGame`, `TKeyboard__AddKeyCallback` (+3 more)
 * Called by: `GSuperMeatBoy__ShowCurrentReplay`, `ShowCurrentReplay`
 */
/* ShowSaveReplayInterface(tagButtonProps const*, void*) */

void ShowSaveReplayInterface(tagButtonProps *arg1, void *arg2)

{
  long lVar1;
  Joystick *pJVar2;
  int iVar3;
  long *plVar4;
  uint32_t local_78[2];
  uint64_t local_70;
  uint64_t local_68;
  uint64_t local_60;
  uint64_t local_58;
  code *local_50;
  uint64_t local_48;
  code *local_40;
  uint64_t local_38;
  uint64_t local_30;
  uint64_t local_28;
  uint64_t local_20;
  uint64_t local_18;
  uint64_t local_10;

  if (*(int *)arg1 == 1) {
    iVar3 = System_IsTrialMode();
    if (iVar3 == 0) {
      plVar4 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
      iVar3 = (**(code **)(*plVar4 + 0x20))(plVar4);
      if (((iVar3 == 1) &&
           (lVar1 = TPlayer__GetProfile((TPlayer *)Players__Player), *(int *)(lVar1 + 0xc) == 1)) &&
          (iVar3 = System_IsTrialMode(), iVar3 == 0)) {
        iVar3 = SMBReplay__WriteReplayData(GSuperMeatBoy__pReplay);
        if (iVar3 != 1) {
          local_70 = 0;
          local_68 = 0;
          local_60 = 0;
          local_58 = 0;
          local_50 = (code *)0x0;
          local_48 = 0;
          local_40 = (code *)0x0;
          local_38 = 0;
          local_30 = 0;
          local_28 = 0;
          local_20 = 0;
          local_18 = 0;
          local_10 = 0;
          local_78[0] = 0xe;
          local_68 = GetLocalizedText(0xda);
          local_70 = GetLocalizedText(0xd4);
          local_60 = GetLocalizedText(4);
          local_50 = UserAlertCloseCurrent;
          local_40 = ShowReplayInterface;
          CreateMessage(local_78);
          return;
        }
        GSMBCutSceneManager__ShowSavingMessage(SMBCutSceneManager);
        pJVar2 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
        Joystick__AddButtonCallback(pJVar2, 2, ShowReplayAlreadySaved, 0);
        if (Keyboard == (TKeyboard *)0x0) {
          return;
        }
        TKeyboard__AddKeyCallback(Keyboard, 0x83, ShowReplayAlreadySaved, 0);
        return;
      }
      local_78[0] = 0;
      local_70 = 0;
      local_68 = 0;
      local_60 = 0;
      local_58 = 0;
      local_50 = (code *)0x0;
      local_48 = 0;
      local_40 = (code *)0x0;
      local_38 = 0;
      local_30 = 0;
      local_28 = 0;
      local_20 = 0;
      local_18 = 0;
      local_10 = 0;
      local_70 = GetLocalizedText(0x5b);
      local_68 = GetLocalizedText(0x5a);
      local_78[0] = 0xe;
      local_60 = GetLocalizedText(4);
      local_50 = UserAlertCloseCurrent;
      CreateMessage(local_78);
    } else {
      lVar1 = TPlayer__GetProfile((TPlayer *)Players__Player);
      System_PurchaseFullGame(*(uint32_t *)(lVar1 + 0x14));
    }
  }
  return;
}

/* ======================================================================
 * ShowReplayAlreadySaved  (Ghidra `ShowReplayAlreadySaved` @ 00512e40)
 * Signature: uint8_t __stdcall ShowReplayAlreadySaved(tagButtonProps * arg1, void * arg2)
 * Calls: `CreateMessage`, `GetLocalizedText`, `UserAlertCloseCurrent`
 * Called by: `GSuperMeatBoy__ShowCurrentReplay`, `ShowCurrentReplay`, `ShowSaveReplayInterface`
 */
/* ShowReplayAlreadySaved(tagButtonProps const*, void*) */

void ShowReplayAlreadySaved(tagButtonProps *arg1, void *arg2)

{
  uint32_t local_78[2];
  uint64_t local_70;
  uint64_t local_68;
  uint64_t local_60;
  uint64_t local_58;
  code *local_50;
  uint64_t local_48;
  uint64_t local_40;
  uint64_t local_38;
  uint64_t local_30;
  uint64_t local_28;
  uint64_t local_20;
  uint64_t local_18;
  uint64_t local_10;

  if (*(int *)arg1 != 1) {
    return;
  }
  local_78[0] = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = (code *)0x0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  local_70 = GetLocalizedText(0xc2);
  local_68 = GetLocalizedText(0xc3);
  local_78[0] = 0xe;
  local_60 = GetLocalizedText(4);
  local_50 = UserAlertCloseCurrent;
  CreateMessage(local_78);
  return;
}

/* ======================================================================
 * EndLevelTransitionIn  (Ghidra `EndLevelTransitionIn` @ 00513050)
 * Signature: uint8_t __stdcall EndLevelTransitionIn(void * arg1, int arg2, int arg3)
 * Calls: `GMeatHUD__RenderUnlocks`, `GMeatHUD__ShowInGameHud`, `MeatBoyCharactor__RestoreControls`, `SMBChapter__LoadNextLevel`, `SMBChapter__ShowLivesScreen`, `SMBLevelTransitionOut`
 * Called by: `TransitionToNextLevel`
 */
/* EndLevelTransitionIn(void*, int, int) */

void EndLevelTransitionIn(void *arg1, int arg2, int arg3)

{
  GMeatHUD *self;
  long lVar1;

  bLevelReady = 0;
  bCurrLevelTransitioning = 0;
  lVar1 = SMBChapter__LoadNextLevel((SMBChapter *)(SuperMeatBoy + 0x90));
  if (lVar1 == 0) {
    return;
  }
  if ((1 < *(int *)(SuperMeatBoy + 0x294)) && (*(int *)(SuperMeatBoy + 0x294) != 3)) {
    SMBChapter__ShowLivesScreen((SMBChapter *)(SuperMeatBoy + 0x90),
                                *(int *)(*(long *)(SuperMeatBoy + 0x48) + 0x7f8));
    self = SMBHUD;
    *(uint32_t *)(SuperMeatBoy + 0x2c) = 0;
    GMeatHUD__ShowInGameHud(self);
    MeatBoyCharactor__RestoreControls(*(MeatBoyCharactor **)(SuperMeatBoy + 0x48));
    return;
  }
  GMeatHUD__RenderUnlocks(SMBHUD, SMBLevelTransitionOut);
  return;
}

/* ======================================================================
 * ShowCurrentReplay  (Ghidra `ShowCurrentReplay` @ 00513100)
 * Signature: uint8_t __stdcall ShowCurrentReplay(int arg1)
 * Calls: `BackToTitleFromReplay`, `BloodyTiles__Reset`, `DecrementCurrentInternetsRating`, `GMeatHUD__ShowReplayHUD`, `GSMBMenu__IsInReplayMode`, `GSuperMeatBoy__ShowCurrentReplay`, `IncrementCurrentInternetsRating`, `Joystick__AddButtonCallback`, `Joystick__AddPOVCallback`, `MeatBoyCharactor__SwitchToReplayMode` (+13 more)
 * Called by: (none)
 */
/* GSuperMeatBoy__ShowCurrentReplay(int) [clone .constprop.81] */

void GSuperMeatBoy__ShowCurrentReplay(int arg1)

{
  uint64_t *puVar1;
  int iVar2;
  Joystick *pJVar3;
  uint32_t in_register_0000003c;
  long lVar4;
  uint32_t local_18[2];
  uint64_t local_10;

  lVar4 = CONCAT44(in_register_0000003c, arg1);
  if ((*(int *)(lVar4 + 0x3a4) != 1) && (bCurrLevelTransitioning != 1)) {
    bCurrLevelTransitioning = 0;
    if (Keyboard != (TKeyboard *)0x0) {
      TKeyboard__AddKeyCallback(Keyboard, 0x6f, 0, 0);
      TKeyboard__AddKeyCallback(Keyboard, 0x43, 0, 0);
    }
    pJVar3 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
    Joystick__AddButtonCallback(pJVar3, 3, 0, 0);
    (**(code **)(**(long **)(SuperMeatBoy + 0x48) + 0x68))();
    SMBPalette__ResetObstacles(pLevelPalette);
    BloodyTiles__Reset((BloodyTiles *)(SuperMeatBoy + 0x50));
    TileLevel__ResetLevel(*(TileLevel **)(SuperMeatBoy + 0x40));
    SMBCamera__Reset(*(SMBCamera **)(SuperMeatBoy + 0x38));
    SMBAnimals__Reset(*(SMBAnimals **)(pLevelPalette + 0x41e8));
    puVar1 = (uint64_t *)(SuperMeatBoy + 0x48);
    *(uint32_t *)(SuperMeatBoy + 0x2c) = 0;
    MeatBoyCharactor__SwitchToReplayMode((MeatBoyCharactor *)*puVar1);
    GMeatHUD__ShowReplayHUD(SMBHUD);
    local_18[0] = 9;
    local_10 = TPlayer__GetProfile((TPlayer *)Players__Player);
    BroadcastString__SetBroadcastString((BroadcastStringCreate *)local_18);
    iVar2 = GSMBMenu__IsInReplayMode(SMBMenu);
    if (iVar2 == 0) {
      pJVar3 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
      Joystick__AddButtonCallback(pJVar3, 0, TransitionToNextLevel, 0);
      pJVar3 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
      Joystick__AddButtonCallback(pJVar3, 1, ShowMenuPress, 0);
      if (*(int *)(lVar4 + 0x290) != 9) {
        if (*(char *)(lVar4 + 0x3a9) == '\x01') {
          pJVar3 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
          Joystick__AddButtonCallback(pJVar3, 2, ShowReplayAlreadySaved, 0);
          if (Keyboard != (TKeyboard *)0x0) {
            TKeyboard__AddKeyCallback(Keyboard, 0x43, ShowReplayAlreadySaved, 0);
            TKeyboard__AddKeyCallback(Keyboard, 0x6f, ShowReplayAlreadySaved, 0);
          }
        } else {
          pJVar3 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
          Joystick__AddButtonCallback(pJVar3, 2, ShowSaveReplayInterface, 0);
          if (Keyboard != (TKeyboard *)0x0) {
            TKeyboard__AddKeyCallback(Keyboard, 0x43, ShowSaveReplayInterface, 0);
            TKeyboard__AddKeyCallback(Keyboard, 0x6f, ShowSaveReplayInterface, 0);
          }
        }
      }
      pJVar3 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
      Joystick__AddPOVCallback(pJVar3, 3, DecrementCurrentInternetsRating, 0);
      pJVar3 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
      Joystick__AddPOVCallback(pJVar3, 1, IncrementCurrentInternetsRating, 0);
      if (Keyboard != (TKeyboard *)0x0) {
        TKeyboard__AddKeyCallback(Keyboard, 0x41, DecrementCurrentInternetsRating, 0);
        TKeyboard__AddKeyCallback(Keyboard, 0x6d, IncrementCurrentInternetsRating, 0);
      }
      pJVar3 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
      Joystick__AddButtonCallback(pJVar3, 3, ReplayLevel, 0);
      if (Keyboard != (TKeyboard *)0x0) {
        TKeyboard__AddKeyCallback(Keyboard, 0x83, ReplayLevel, 0);
        TKeyboard__AddKeyCallback(Keyboard, 0x76, TransitionToNextLevel, 0);
        TKeyboard__AddKeyCallback(Keyboard, 0x6c, TransitionToNextLevel, 0);
        TKeyboard__AddKeyCallback(Keyboard, 0x23, ShowMenuPress, 0);
      }
    } else {
      pJVar3 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
      Joystick__AddButtonCallback(pJVar3, 1, BackToTitleFromReplay, 0);
      pJVar3 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
      Joystick__AddButtonCallback(pJVar3, 0, RestartReplay, 0);
      if (Keyboard != (TKeyboard *)0x0) {
        TKeyboard__AddKeyCallback(Keyboard, 0x23, BackToTitleFromReplay, 0);
        TKeyboard__AddKeyCallback(Keyboard, 0x76, RestartReplay, 0);
        TKeyboard__AddKeyCallback(Keyboard, 0x6c, RestartReplay, 0);
        return;
      }
    }
  }
  return;
}

/* ======================================================================
 * RestartReplay  (Ghidra `RestartReplay` @ 005134c0)
 * Signature: uint8_t __stdcall RestartReplay(tagButtonProps * arg1, void * arg2)
 * Calls: `GSuperMeatBoy__ShowCurrentReplay`
 * Called by: `GSuperMeatBoy__ShowCurrentReplay`, `ShowCurrentReplay`
 */
/* RestartReplay(tagButtonProps const*, void*) */

void RestartReplay(tagButtonProps *arg1, void *arg2)

{
  if (*(int *)arg1 != 1) {
    return;
  }
  GSuperMeatBoy__ShowCurrentReplay((int)SuperMeatBoy);
  return;
}

/* ======================================================================
 * ViewReplay  (Ghidra `ViewReplay` @ 005134e0)
 * Signature: uint8_t __stdcall ViewReplay(tagButtonProps * arg1, void * arg2)
 * Calls: `GSuperMeatBoy__ShowCurrentReplay`
 * Called by: `GSuperMeatBoy__BeatLevel`
 */
/* ViewReplay(tagButtonProps const*, void*) */

void ViewReplay(tagButtonProps *arg1, void *arg2)

{
  if (*(int *)arg1 != 1) {
    return;
  }
  GSuperMeatBoy__ShowCurrentReplay((int)SuperMeatBoy);
  return;
}

/* ======================================================================
 * TransitionToNextLevel  (Ghidra `TransitionToNextLevel` @ 00513560)
 * Signature: uint8_t __stdcall TransitionToNextLevel(tagButtonProps * arg1, void * arg2)
 * Calls: `EndLevelTransitionIn`, `GMeatHUD__HideInGame`, `GSMBChapterData__SaveWarpzoneStats`, `GSMBChapterData__SetCurrentLevel`, `GSMBCutSceneManager__PlayCutScene`, `GSMBMenu__PromptUpsell`, `GSMBMenu__SetSelectedLevel`, `Joystick__AddButtonCallback`, `SMBChapter__GetNumberOfLevels`, `SMBChapter__IsNextLevelUnlocked` (+9 more)
 * Called by: `DrFetusCaptureFinished`, `GSuperMeatBoy__BeatLevel`, `GSuperMeatBoy__ShowCurrentReplay`, `ReplayLevel`, `ShowCurrentReplay`, `TransitionToNextLevel__00513950`
 */
/* TransitionToNextLevel(tagButtonProps const*, void*) [clone .part.50] */

void TransitionToNextLevel(tagButtonProps *arg1, void *arg2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  Joystick *pJVar4;
  uint64_t *puVar5;
  void *pvVar6;
  tagButtonProps *ptVar7;
  uint32_t local_58;
  uint32_t local_54;
  uint32_t local_50;
  uint64_t local_48;
  code *local_40;
  uint64_t local_38;
  uint64_t local_30;
  uint64_t local_28;
  uint32_t local_20;
  uint32_t local_1c;
  uint32_t local_18;

  if (Keyboard != (TKeyboard *)0x0) {
    TKeyboard__AddKeyCallback(Keyboard, 0x76, 0, 0);
    TKeyboard__AddKeyCallback(Keyboard, 0x6c, 0, 0);
    TKeyboard__AddKeyCallback(Keyboard, 0x6f, 0, 0);
    TKeyboard__AddKeyCallback(Keyboard, 0x43, 0, 0);
    TKeyboard__AddKeyCallback(Keyboard, 0x83, 0, 0);
    TKeyboard__AddKeyCallback(Keyboard, 0x1b, 0, 0);
    TKeyboard__AddKeyCallback(Keyboard, 10, 0, 0);
    TKeyboard__AddKeyCallback(Keyboard, 0x71, 0, 0);
    TKeyboard__AddKeyCallback(Keyboard, 0x23, ShowPauseMenuPress, 0);
  }
  bNeedToWriteData = 1;
  pJVar4 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddButtonCallback(pJVar4, 0, 0, 0);
  pJVar4 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddButtonCallback(pJVar4, 3, 0, 0);
  pJVar4 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddButtonCallback(pJVar4, 2, 0, 0);
  pJVar4 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  pvVar6 = (void *)0x1;
  Joystick__AddButtonCallback(pJVar4, 1, 0, 0);
  if (*(int *)(SuperMeatBoy + 0x290) == 9) {
    bVar1 = true;
    iVar2 = SMBLevelPortal__IsChapterLoaded();
    if (iVar2 != 0)
      goto LAB_005136b5;
  } else {
  LAB_005136b5:
    iVar2 = SMBChapter__IsNextLevelUnlocked((SMBChapter *)(SuperMeatBoy + 0x90));
    if ((iVar2 == 0) && (*(int *)(SuperMeatBoy + 0x294) < 2)) {
      bCurrLevelTransitioning = 0;
      ptVar7 = SuperMeatBoy;
      iVar2 = System_IsTrialMode();
      if (iVar2 == 1) {
        iVar2 = *(int *)(SMBChapterData + 0x1ce8);
        ptVar7 = SuperMeatBoy + 0x90;
        iVar3 = SMBChapter__GetNumberOfLevels((SMBChapter *)ptVar7);
        if (iVar3 <= iVar2 + 1) {
          ptVar7 = (tagButtonProps *)SMBMenu;
          GSMBMenu__PromptUpsell(SMBMenu);
        }
      }
      goto LAB_0051384b;
    }
    if (*(short *)(SuperMeatBoy + 0xa4) == 0) {
      ptVar7 = SuperMeatBoy + 0x90;
      iVar2 = *(int *)(SMBChapterData + 0x1ce8);
      iVar3 = SMBChapter__GetNumberOfLevels((SMBChapter *)ptVar7);
      if (iVar3 <= iVar2 + 1) {
        if (*(int *)(SuperMeatBoy + 0x294) < 2) {
          if ((*(int *)(SuperMeatBoy + 0x2c) != 9) && (*(int *)(SuperMeatBoy + 0x3a0) == 0)) {
            ShowMenuPress(ptVar7, pvVar6);
          }
        } else {
          GSMBChapterData__SaveWarpzoneStats(SMBChapterData);
          SMBChapter__PlayWarpOutro((SMBChapter *)(SuperMeatBoy + 0x90));
        }
        bCurrLevelTransitioning = 0;
        return;
      }
    }
    local_48 = 0;
    bVar1 = false;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_1c = 1;
    local_18 = 1;
    local_54 = 0x43f00000;
    local_58 = 0x44200000;
    local_50 = 1;
    local_40 = EndLevelTransitionIn;
    puVar5 = (uint64_t *)SMBPalette__GetInLevelTransition(GSuperMeatBoy__pLevelPalette);
    local_48 = *puVar5;
    local_18 = 0;
    GSMBCutSceneManager__PlayCutScene(SMBCutSceneManager, (SMBCutScene *)&local_58);
    GMeatHUD__HideInGame(SMBHUD);
  }
  if (*(int *)(SuperMeatBoy + 0x290) == 9) {
    local_58 = *(uint32_t *)(SMBChapterData + 0x1ce8);
    SMBLevelPortal__UpdateLevelStats(SuperMeatBoyPortal, (PortalLevelStatsUpdate *)&local_58);
  }
  bCurrLevelTransitioning = 1;
  if (!bVar1) {
    bCurrLevelTransitioning = 1;
    return;
  }
  GSMBMenu__SetSelectedLevel(SMBMenu, 0, 1);
  pvVar6 = (void *)0x0;
  ptVar7 = (tagButtonProps *)SMBChapterData;
  GSMBChapterData__SetCurrentLevel(SMBChapterData, 0);
  bCurrLevelTransitioning = 0;
LAB_0051384b:
  if ((*(int *)(SuperMeatBoy + 0x2c) != 9) && (*(int *)(SuperMeatBoy + 0x3a0) == 0)) {
    ShowMenuPress(ptVar7, pvVar6);
  }
  return;
}

/* ======================================================================
 * TransitionToNextLevel__00513950  (Ghidra `TransitionToNextLevel` @ 00513950)
 * Signature: uint8_t __stdcall TransitionToNextLevel(tagButtonProps * arg1, void * arg2)
 * Calls: `TransitionToNextLevel`
 * Called by: (none)
 */
/* TransitionToNextLevel(tagButtonProps const*, void*) */

void TransitionToNextLevel(tagButtonProps *arg1, void *arg2)

{
  if ((arg1 != (tagButtonProps *)0x0) && (*(int *)arg1 != 1)) {
    return;
  }
  TransitionToNextLevel(arg1, arg2);
  return;
}

/* ======================================================================
 * ReplayLevel  (Ghidra `ReplayLevel` @ 00513970)
 * Signature: uint8_t __stdcall ReplayLevel(tagButtonProps * arg1, void * arg2)
 * Calls: `SMBChapter__EndReplayCurrentLevel`, `SMBChapter__StartReplayCurrentLevel`, `TransitionToNextLevel`
 * Called by: `GSuperMeatBoy__ShowCurrentReplay`, `ShowCurrentReplay`
 */
/* ReplayLevel(tagButtonProps const*, void*) */

void ReplayLevel(tagButtonProps *arg1, void *arg2)

{
  tagButtonProps *self;

  if (*(int *)arg1 != 1) {
    return;
  }
  self = (tagButtonProps *)(SuperMeatBoy + 0x90);
  SMBChapter__StartReplayCurrentLevel((SMBChapter *)self);
  if (*(int *)arg1 == 1) {
    TransitionToNextLevel(self, arg2);
  }
  SMBChapter__EndReplayCurrentLevel((SMBChapter *)(SuperMeatBoy + 0x90));
  return;
}

/* ======================================================================
 * ShowPauseMenuPress  (Ghidra `ShowPauseMenuPress` @ 005139c0)
 * Signature: uint8_t __stdcall ShowPauseMenuPress(tagButtonProps * arg1, void * arg2)
 * Calls: `GSMBCutSceneManager__IsRendering`, `GSMBMenu__ShowPauseMenu`, `Joystick__BackupCallbacks`, `Joystick__RestoreCallbacks`, `MessageActive`, `TAudio__SetMusicVolume`, `TKeyboard__BackupCallbacks`, `TKeyboard__RestoreCallbacks`, `TPlayer__GetJoystick`
 * Called by: `GSMBMenu__ShowPauseMenu`, `GSuperMeatBoy__ShowGame`, `Game_JoystickUnplugged`, `Game_OverlayShowing`, `SMBCharSwitch__DeactivationFinished`, `ShowPauseMenu`, `TransitionToNextLevel`
 */
/* ShowPauseMenuPress(tagButtonProps const*, void*) */

void ShowPauseMenuPress(tagButtonProps *arg1, void *arg2)

{
  long lVar1;
  int iVar2;
  Joystick *pJVar3;

  if (SMBCutSceneManager != (GSMBCutSceneManager *)0x0) {
    iVar2 = GSMBCutSceneManager__IsRendering(SMBCutSceneManager);
    if (iVar2 == 1) {
      iVar2 = MessageActive();
      if (iVar2 == 0) {
        return;
      }
    }
    lVar1 = SuperMeatBoy;
    if (((arg1 == (tagButtonProps *)0x0) || (*(int *)arg1 == 1)) && (bIsGamePauseable == 1)) {
      if (*(int *)(SuperMeatBoy + 0x2c) == 0xf) {
        GSMBMenu__HidePauseMenu((int)SMBMenu);
        pJVar3 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
        Joystick__RestoreCallbacks(pJVar3, (InputCallback **)&pPrePauseButtonCallbacks,
                                   (InputCallback **)&pPrePausePOVCallbacks);
        if (Keyboard != (TKeyboard *)0x0) {
          TKeyboard__RestoreCallbacks(Keyboard, (InputCallback **)&pPrePauseKeyboardCallbacks);
        }
        *(uint32_t *)(lVar1 + 0x2c) = prePauseGameState;
        AnimationManager__PauseAnimations(0);
        TAudio__SetMusicVolume(Audio, GLOBALMUSICVOLUME);
        return;
      }
      if (*(int *)(SuperMeatBoy + 0x2c) == 0) {
        pJVar3 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
        Joystick__BackupCallbacks(pJVar3, (InputCallback **)&pPrePauseButtonCallbacks,
                                  (InputCallback **)&pPrePausePOVCallbacks);
        if (Keyboard != (TKeyboard *)0x0) {
          TKeyboard__BackupCallbacks(Keyboard, (InputCallback **)&pPrePauseKeyboardCallbacks);
        }
        GSMBMenu__ShowPauseMenu(SMBMenu, 0);
        prePauseGameState = *(uint32_t *)(lVar1 + 0x2c);
        *(uint32_t *)(lVar1 + 0x2c) = 0xf;
        AnimationManager__PauseAnimations(1);
        TAudio__SetMusicVolume(Audio, GLOBALMUSICVOLUME / 3);
        return;
      }
    }
  }
  return;
}

/* ======================================================================
 * SMBLevelFinished  (Ghidra `SMBLevelFinished` @ 00513b20)
 * Signature: uint8_t __stdcall SMBLevelFinished(void * arg1, int arg2, int arg3)
 * Calls: `GSMBChapterData__GetCurrentLevelData`, `GSMBInstructions__SetInstructionPage`, `GSMBInstructions__ShowPage`, `GSMBMenu__IsInReplayMode`, `Joystick__AddButtonCallback`, `MeatBoyCharactor__RestoreControls`, `ShowInstructionsPage`, `TKeyboard__AddKeyCallback`, `TPlayer__GetJoystick`
 * Called by: `SMBLevelTransitionOut`, `SMBMenuGameTransitionOut`
 */
/* SMBLevelFinished(void*, int, int) */

void SMBLevelFinished(void *arg1, int arg2, int arg3)

{
  int iVar1;
  Joystick *pJVar2;
  long lVar3;

  if ((((iCurrentLevel <= *(int *)(SMBInstructions + 0x30)) &&
        (*(int *)(SuperMeatBoy + 0x294) == 0)) &&
       ((*(int *)(SuperMeatBoy + 0x290) == 1 || (*(int *)(SuperMeatBoy + 0x290) == 8)))) &&
      ((iVar1 = GSMBMenu__IsInReplayMode(SMBMenu), iVar1 == 0 && (iCurrentLevel < 4)))) {
    GSMBInstructions__SetInstructionPage(SMBInstructions, iCurrentLevel);
    if (Keyboard != (TKeyboard *)0x0) {
      TKeyboard__AddKeyCallback(Keyboard, 0x1b, ShowInstructionsPage, 0);
    }
    pJVar2 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
    Joystick__AddButtonCallback(pJVar2, 1, ShowInstructionsPage, 0);
    lVar3 = GSMBChapterData__GetCurrentLevelData(SMBChapterData, 0xffffffff, 0);
    if ((*(byte *)(lVar3 + 4) & 2) == 0) {
      GSMBInstructions__ShowPage(SMBInstructions);
      if (Keyboard != (TKeyboard *)0x0) {
        TKeyboard__AddKeyCallback(Keyboard, 0x1b, 0, 0);
      }
      pJVar2 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
      Joystick__AddButtonCallback(pJVar2, 1, 0, 0);
    }
  }
  MeatBoyCharactor__RestoreControls(*(MeatBoyCharactor **)(SuperMeatBoy + 0x48));
  bLevelReady = 1;
  return;
}

/* ======================================================================
 * Game_StorageChanged  (Ghidra `Game_StorageChanged` @ 00513c50)
 * Signature: uint8_t Game_StorageChanged(void)
 * Calls: `TPlayer__GetProfile`
 * Called by: (none)
 */
void Game_StorageChanged(void)

{
  long lVar1;
  int iVar2;
  long *plVar3;

  plVar3 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
  iVar2 = (**(code **)(*plVar3 + 0x20))(plVar3);
  if (iVar2 != 0) {
    plVar3 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
    iVar2 = (**(code **)(*plVar3 + 0x28))(plVar3);
    if (iVar2 == 0) {
      lVar1 = TPlayer__GetProfile((TPlayer *)Players__Player);
      if (*(int *)(lVar1 + 0xc) == 1) {
        lVar1 = TPlayer__GetProfile((TPlayer *)Players__Player);
        bProcessStorageChange = 1;
        *(uint32_t *)(lVar1 + 0xc) = 0;
      }
    }
  }
  return;
}

/* ======================================================================
 * Game_ProfileChanged  (Ghidra `Game_ProfileChanged` @ 00513cc0)
 * Signature: uint8_t Game_ProfileChanged(void)
 * Calls: (none)
 * Called by: (none)
 */
void Game_ProfileChanged(void)

{
  return;
}

/* ======================================================================
 * Game_ProfileSignedOut  (Ghidra `Game_ProfileSignedOut` @ 00513cd0)
 * Signature: uint8_t Game_ProfileSignedOut(void)
 * Calls: `ForceClose`, `TPlayer__GetProfile`, `TPlayer__IsPlayerID`
 * Called by: (none)
 */
uint64_t Game_ProfileSignedOut(uint arg1)

{
  int iVar1;
  long lVar2;

  iVar1 = TPlayer__IsPlayerID((TPlayer *)Players__Player, arg1);
  if ((iVar1 == 1) && (*(int *)(SuperMeatBoy + 0x2c) != 3)) {
    bProcessProfileSignOut = 1;
    bProcessStorageChange = 0;
    lVar2 = TPlayer__GetProfile((TPlayer *)Players__Player);
    *(uint32_t *)(lVar2 + 0xc) = 0;
    ForceClose();
    return 1;
  }
  return 0;
}

/* ======================================================================
 * Game_ConnectionChanged  (Ghidra `Game_ConnectionChanged` @ 00513d40)
 * Signature: uint8_t Game_ConnectionChanged(void)
 * Calls: `System_WasUserOnline`, `TPlayer__GetProfile`
 * Called by: (none)
 */
void Game_ConnectionChanged(int arg1)

{
  int iVar1;
  long lVar2;

  if (arg1 == 0) {
    lVar2 = TPlayer__GetProfile((TPlayer *)Players__Player);
    iVar1 = System_WasUserOnline(*(uint32_t *)(lVar2 + 0x14));
    if ((iVar1 == 1) && (bProcessProfileSignOut == 0)) {
      bProcessDisconnect = 1;
      return;
    }
  }
  return;
}

/* ======================================================================
 * Game_JoystickUnplugged  (Ghidra `Game_JoystickUnplugged` @ 00513d80)
 * Signature: uint8_t Game_JoystickUnplugged(void)
 * Calls: `MessageActive`, `ShowPauseMenuPress`, `TPlayer__IsPlayerID`
 * Called by: (none)
 */
void Game_JoystickUnplugged(uint arg1)

{
  int iVar1;

  iVar1 = TPlayer__IsPlayerID((TPlayer *)Players__Player, arg1);
  if ((iVar1 == 1) && (*(int *)(SuperMeatBoy + 0x2c) != 0xf)) {
    iVar1 = MessageActive();
    if (iVar1 == 0) {
      ShowPauseMenuPress((tagButtonProps *)0x0, (void *)0x0);
      return;
    }
  }
  return;
}

/* ======================================================================
 * Game_OverlayShowing  (Ghidra `Game_OverlayShowing` @ 00513dd0)
 * Signature: uint8_t Game_OverlayShowing(void)
 * Calls: `GSMBMenu__IsReplayManagerOpen`, `MessageActive`, `ShowPauseMenuPress`
 * Called by: (none)
 */
void Game_OverlayShowing(int arg1)

{
  int iVar1;

  if ((arg1 == 1) && (*(int *)(SuperMeatBoy + 0x2c) != 0xf)) {
    iVar1 = MessageActive();
    if ((iVar1 == 0) && (SMBMenu != (GSMBMenu *)0x0)) {
      iVar1 = GSMBMenu__IsReplayManagerOpen(SMBMenu);
      if (iVar1 == 0) {
        ShowPauseMenuPress((tagButtonProps *)0x0, (void *)0x0);
        return;
      }
    }
  }
  return;
}

/* ======================================================================
 * Game_PlayerAdded  (Ghidra `Game_PlayerAdded` @ 00513e20)
 * Signature: uint8_t Game_PlayerAdded(void)
 * Calls: `TPlayer__GetJoystick`, `TPlayer__GetProfile`
 * Called by: `AddPlayer`
 */
void Game_PlayerAdded(uint arg1)

{
  long lVar1;

  lVar1 = TPlayer__GetJoystick((TPlayer *)(Players__Player + (ulong)arg1 * 0x18));
  *(uint32_t *)(lVar1 + 0xfc) = 1;
  lVar1 = TPlayer__GetProfile((TPlayer *)(Players__Player + (ulong)arg1 * 0x18));
  *(uint32_t *)(lVar1 + 0x18) = 0x1ca8;
  return;
}

/* ======================================================================
 * Game_FullGamePurchased  (Ghidra `Game_FullGamePurchased` @ 00513e60)
 * Signature: uint8_t Game_FullGamePurchased(void)
 * Calls: `ForceClose`
 * Called by: `System_PurchaseFullGame`
 */
void Game_FullGamePurchased(void)

{
  if ((*(int *)(SuperMeatBoy + 0x2c) != 3) && (bGameOfficiallyStarted == 1)) {
    bProcessProfileSignOut = 1;
    bJustPurchased = 1;
    ForceClose();
    bProcessStorageChange = 0;
    return;
  }
  return;
}

/* ======================================================================
 * Game_AllowLeaderboardFailureMessage  (Ghidra `Game_AllowLeaderboardFailureMessage` @ 00513eb0)
 * Signature: uint8_t Game_AllowLeaderboardFailureMessage(void)
 * Calls: (none)
 * Called by: (none)
 */
bool Game_AllowLeaderboardFailureMessage(void)

{
  return bProcessDisconnect == 0;
}

/* ======================================================================
 * Game_OSMusicChanged  (Ghidra `Game_OSMusicChanged` @ 00513ec0)
 * Signature: uint8_t Game_OSMusicChanged(void)
 * Calls: (none)
 * Called by: (none)
 */
void Game_OSMusicChanged(void)

{
  return;
}

/* ======================================================================
 * Game_ReinitializePlayers  (Ghidra `Game_ReinitializePlayers` @ 00513ed0)
 * Signature: uint8_t __stdcall Game_ReinitializePlayers(void)
 * Calls: (none)
 * Called by: (none)
 */
void Players__Game_ReinitializePlayers(void)

{
  Player._0_4_ = 0;
  Player._16_4_ = 0;
  Player._8_8_ = pGameJoysticks;
  if (UserProfiles != (long *)0x0) {
    (**(code **)(*UserProfiles + 0x68))();
  }
  Player._32_8_ = pGameJoysticks + 0x308;
  Player._24_4_ = 1;
  Player._40_4_ = 0;
  if (DAT_00824c28 /* R:2.8376293902577546e-42f */ != (long *)0x0) {
    (**(code **)(*DAT_00824c28 /* R:2.8376293902577546e-42f */ + 0x68))();
  }
  Player._56_8_ = pGameJoysticks + 0x610;
  Player._48_4_ = 2;
  Player._64_4_ = 0;
  if (DAT_00824c30 /* R:4.0442874978878545e-41f */ != (long *)0x0) {
    (**(code **)(*DAT_00824c30 /* R:4.0442874978878545e-41f */ + 0x68))();
  }
  Player._80_8_ = pGameJoysticks + 0x918;
  Player._72_4_ = 3;
  Player._88_4_ = 0;
  if (DAT_00824c38 /* R:8.089505457956021e-39f */ != (long *)0x0) {
    (**(code **)(*DAT_00824c38 /* R:8.089505457956021e-39f */ + 0x68))();
  }
  iNumPlayersInitialized = 0;
  return;
}

/* ======================================================================
 * ShowTitleMenuPress  (Ghidra `ShowTitleMenuPress` @ 00514160)
 * Signature: uint8_t __stdcall ShowTitleMenuPress(tagButtonProps * arg1, void * arg2)
 * Calls: `GSMBMenu__TransitionOutGameToTitle`, `Joystick__AddButtonCallback`, `TKeyboard__AddKeyCallback`, `TPlayer__GetJoystick`
 * Called by: `GSMBMenu__GoBackToTitleFromPause`, `SMBMenuToTitleFromGame`
 */
/* ShowTitleMenuPress(tagButtonProps const*, void*) */

void ShowTitleMenuPress(tagButtonProps *arg1, void *arg2)

{
  Joystick *pJVar1;

  if ((((arg1 == (tagButtonProps *)0x0) ||
        ((*(int *)arg1 == 1 && (*(int *)(SuperMeatBoy + 0x3a4) == 0)))) &&
       (*(int *)(SuperMeatBoy + 0x2c) != 9)) &&
      (*(int *)(SuperMeatBoy + 0x3a0) == 0)) {
    if (Keyboard != (TKeyboard *)0x0) {
      TKeyboard__AddKeyCallback(Keyboard, 0x76, 0, 0);
      TKeyboard__AddKeyCallback(Keyboard, 0x6f, 0, 0);
      TKeyboard__AddKeyCallback(Keyboard, 0x43, 0, 0);
      TKeyboard__AddKeyCallback(Keyboard, 0x1b, 0, 0);
      TKeyboard__AddKeyCallback(Keyboard, 10, 0, 0);
      TKeyboard__AddKeyCallback(Keyboard, 0x71, 0, 0);
    }
    pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
    Joystick__AddButtonCallback(pJVar1, 0, 0, 0);
    pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
    Joystick__AddButtonCallback(pJVar1, 3, 0, 0);
    pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
    Joystick__AddButtonCallback(pJVar1, 1, 0, 0);
    GSMBMenu__TransitionOutGameToTitle(SMBMenu);
    return;
  }
  return;
}

/* ======================================================================
 * WriteLevelStats  (Ghidra `WriteLevelStats` @ 00515890)
 * Signature: uint8_t __stdcall WriteLevelStats(void * arg1)
 * Calls: (none)
 * Called by: (none)
 */
/* WriteLevelStats(void*) */

uint64_t WriteLevelStats(void *arg1)

{
  return 0;
}

/* ======================================================================
 * WriteSMBStats  (Ghidra `WriteSMBStats` @ 005158a0)
 * Signature: uint8_t __stdcall WriteSMBStats(SMBOnlineStats * arg1)
 * Calls: (none)
 * Called by: (none)
 */
/* WriteSMBStats(SMBOnlineStats&) */

void WriteSMBStats(SMBOnlineStats *arg1)

{
  return;
}

/* ======================================================================
 * WriteLevelCompleteLeaderboard  (Ghidra `WriteLevelCompleteLeaderboard` @ 005158b0)
 * Signature: uint8_t __stdcall WriteLevelCompleteLeaderboard(int arg1, float arg2)
 * Calls: `GSMBChapterData__GetCurrentLevelData`, `System_IsTrialMode`, `TPlayer__GetProfile`
 * Called by: `GSuperMeatBoy__BeatLevel`
 */
/* WriteLevelCompleteLeaderboard(int, float) */

void WriteLevelCompleteLeaderboard(int arg1, float arg2)

{
  float fVar1;
  uint32_t uVar3;
  float fVar4;
  long lVar5;
  int iVar6;
  float *pfVar7;
  float fVar8;
  int local_48[2];
  uint32_t *local_40;
  uint64_t local_30;
  uint32_t local_28;
  float fVar2;

  if (*(int *)(*(long *)(SuperMeatBoy + 0x48) + 0xa54) != 7) {
    iVar6 = System_IsTrialMode();
    if ((((iVar6 != 1) && (*(int *)(*(long *)(SuperMeatBoy + 0x48) + 0xa54) != 0xe)) &&
         (*(int *)(SuperMeatBoy + 0x290) != 9)) &&
        (DAT_005be6e4 /* R:0.5f */ < *(float *)(SMBHUD + 0x418))) {
      pfVar7 = (float *)GSMBChapterData__GetCurrentLevelData(SMBChapterData, 0xffffffff, 0xb);
      Leaderboards__InitializeLeaderboardEntry((LeaderBoardEntry *)local_48, 3);
      local_30 = TPlayer__GetProfile((TPlayer *)Players__Player);
      local_28 = 0;
      fVar8 = *(float *)(SMBHUD + 0x418);
      fVar1 = *pfVar7;
      fVar2 = *pfVar7;
      *(uint8_t *)(local_40 + 1) = 1;
      *local_40 = 1;
      fVar4 = DAT_005c01c4 /* R:1000.0f */;
      if (fVar8 < fVar2 || fVar8 == fVar1) {
        fVar8 = arg2 * DAT_005c01c4 /* R:1000.0f */;
        *(long *)(local_40 + 2) = (long)(DAT_005c9670 /* R:-1000.0f */ * arg2);
        lVar5 = SuperMeatBoy;
        *(uint8_t *)(local_40 + 7) = 0;
        local_40[6] = 4;
        uVar3 = *(uint32_t *)(*(long *)(lVar5 + 0x48) + 0xa54);
        *(uint8_t *)(local_40 + 0xd) = 0;
        local_40[0xc] = 0;
        local_40[8] = uVar3;
        local_40[0xe] = (int)fVar8;
      } else {
        *(long *)(local_40 + 2) = (long)(DAT_005c9670 /* R:-1000.0f */ * *pfVar7);
        *(uint8_t *)(local_40 + 7) = 0;
        local_40[6] = 4;
        fVar8 = pfVar7[2];
        *(uint8_t *)(local_40 + 0xd) = 0;
        local_40[0xc] = 0;
        local_40[8] = fVar8;
        local_40[0xe] = (int)(fVar4 * *pfVar7);
      }
      local_48[0] = arg1;
      Leaderboards__WriteEntryToLeaderboard((LeaderBoardEntry *)local_48);
      return;
    }
  }
  return;
}

/* ======================================================================
 * ShowGamePress  (Ghidra `ShowGamePress` @ 00516610)
 * Signature: uint8_t __stdcall ShowGamePress(tagButtonProps * arg1, void * arg2)
 * Calls: `GSuperMeatBoy__SwitchGameMode`
 * Called by: (none)
 */
/* ShowGamePress(tagButtonProps const*, void*) */

void ShowGamePress(tagButtonProps *arg1, void *arg2)

{
  if ((*(int *)arg1 == 1) && (*(int *)(SuperMeatBoy + 0x2c) != 0)) {
    GSuperMeatBoy__SwitchGameMode(SuperMeatBoy, 0);
    return;
  }
  return;
}

/* ======================================================================
 * SMBStartGame  (Ghidra `SMBStartGame` @ 00516640)
 * Signature: uint8_t __stdcall SMBStartGame(tagButtonProps * arg1, void * arg2)
 * Calls: `GSuperMeatBoy__SwitchGameMode`, `Joystick__AddAnyButtonCallback`, `TKeyboard__AddAnyKeyCallback`, `TPlayer__GetJoystick`
 * Called by: (none)
 */
/* SMBStartGame(tagButtonProps const*, void*) */

void SMBStartGame(tagButtonProps *arg1, void *arg2)

{
  Joystick *self;

  GSuperMeatBoy__SwitchGameMode(SuperMeatBoy);
  if (Keyboard != (TKeyboard *)0x0) {
    TKeyboard__AddAnyKeyCallback(Keyboard, (_func_void_tagButtonProps_ptr_void_ptr *)0x0);
  }
  self = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddAnyButtonCallback(self, (_func_void_tagButtonProps_ptr_void_ptr *)0x0);
  return;
}

/* ======================================================================
 * EndBackToTitleFromReplay  (Ghidra `EndBackToTitleFromReplay` @ 00516ec0)
 * Signature: uint8_t __stdcall EndBackToTitleFromReplay(void * arg1, int arg2, int arg3)
 * Calls: `DestroySMBBoss`, `GSMBCharactor__DestroyCharactor__0049cbf0`, `GSMBMenu__TransitionInTitleFromWorld`, `GSuperMeatBoy__SetTilePalette`, `GSuperMeatBoy__SwitchGameMode`, `TileLevelLightMap__DestroyLightsAndMaps`, `TileLevel__TileLevel__0058d9f0`, `operator_delete`
 * Called by: `BackToTitleFromReplay`
 */
/* EndBackToTitleFromReplay(void*, int, int) */

void EndBackToTitleFromReplay(void *arg1, int arg2, int arg3)

{
  TileLevel *self;
  GSuperMeatBoy *pGVar1;
  GSuperMeatBoy *pGVar2;
  uint32_t in_register_00000034;

  pGVar1 = SuperMeatBoy;
  bCurrLevelTransitioning = 0;
  DestroySMBBoss(arg1, CONCAT44(in_register_00000034, arg2));
  self = *(TileLevel **)(pGVar1 + 0x40);
  if (self != (TileLevel *)0x0) {
    TileLevel__TileLevel__0058d9f0(self);
    operator_delete(self);
  }
  *(uint64_t *)(pGVar1 + 0x40) = 0;
  GSuperMeatBoy__SetTilePalette((char *)pGVar1);
  GSMBCharactor__DestroyCharactor__0049cbf0(SMBCharactor, *(MeatBoyCharactor **)(pGVar1 + 0x48));
  TileLevelLightMap__DestroyLightsAndMaps(*(TileLevelLightMap **)(pGVar1 + 0x390));
  pGVar2 = SuperMeatBoy;
  *(uint64_t *)(pGVar1 + 0x48) = 0;
  GSuperMeatBoy__SwitchGameMode(pGVar2, 0xc);
  GSMBMenu__TransitionInTitleFromWorld(SMBMenu);
  return;
}

/* ======================================================================
 * HidePauseMenu__00517640  (Ghidra `HidePauseMenu` @ 00517640)
 * Signature: uint8_t __stdcall HidePauseMenu(int arg1)
 * Calls: `Joystick__RestoreCallbacks`, `TAudio__SetMusicVolume`, `TKeyboard__RestoreCallbacks`, `TPlayer__GetJoystick`
 * Called by: (none)
 */
/* GSuperMeatBoy__HidePauseMenu(int) */

void GSuperMeatBoy__HidePauseMenu(int arg1)

{
  Joystick *self;
  uint32_t in_register_0000003c;

  GSMBMenu__HidePauseMenu((int)SMBMenu);
  self = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__RestoreCallbacks(self, (InputCallback **)&pPrePauseButtonCallbacks,
                             (InputCallback **)&pPrePausePOVCallbacks);
  if (Keyboard != (TKeyboard *)0x0) {
    TKeyboard__RestoreCallbacks(Keyboard, (InputCallback **)&pPrePauseKeyboardCallbacks);
  }
  *(uint32_t *)(CONCAT44(in_register_0000003c, arg1) + 0x2c) = prePauseGameState;
  AnimationManager__PauseAnimations(0);
  TAudio__SetMusicVolume(Audio, GLOBALMUSICVOLUME);
  return;
}

/* ======================================================================
 * GetGameCamera  (Ghidra `GetGameCamera` @ 005179f0)
 * Signature: uint8_t GetGameCamera(void)
 * Calls: (none)
 * Called by: `SetPieceWayPointGroup__GetClickedWayPoint`
 */
uint64_t GetGameCamera(void)

{
  return *(uint64_t *)(SuperMeatBoy + 0x38);
}

/* ======================================================================
 * GetGamePalette  (Ghidra `GetGamePalette` @ 00517a00)
 * Signature: uint8_t GetGamePalette(void)
 * Calls: (none)
 * Called by: `SetPieceWayPointGroup__GetClickedWayPoint`
 */
long GetGamePalette(void)

{
  if (GSuperMeatBoy__pLevelPalette != 0) {
    return GSuperMeatBoy__pLevelPalette + 0x10;
  }
  return 0;
}

/* ======================================================================
 * DrFetusCaptureFinished  (Ghidra `DrFetusCaptureFinished` @ 00517a30)
 * Signature: uint8_t __stdcall DrFetusCaptureFinished(FlashLibraryInstance * arg1, void * arg2)
 * Calls: `GSuperMeatBoy__ShowCurrentReplay`, `SMBEditor__PromptLevelUploadForm`, `TransitionToNextLevel`
 * Called by: `SMBPalette__ActivateEnd`
 */
/* DrFetusCaptureFinished(FlashLibraryInstance*, void*) */

void DrFetusCaptureFinished(FlashLibraryInstance *arg1, void *arg2)

{
  if (*(int *)(SuperMeatBoy + 0x3a4) != 0) {
    SMBEditor__PromptLevelUploadForm();
    return;
  }
  if (1 < *(int *)(SuperMeatBoy + 0x294)) {
    TransitionToNextLevel(SuperMeatBoy, arg2);
    return;
  }
  GSuperMeatBoy__ShowCurrentReplay((int)SuperMeatBoy);
  return;
}

/* ======================================================================
 * TimelineRender  (Ghidra `TimelineRender` @ 005736c0)
 * Signature: uint8_t __stdcall TimelineRender(float arg1, float arg2, ColorTemplate * arg3, ColorTemplate * arg4, FlashLibraryInstance * arg5)
 * Calls: `TGraphics__GetMatrix`, `Vector2__operator_mul__005be200`, `Vector2__operator_plus__005be140`
 * Called by: (none)
 */
/* FlashLibraryInstance__TimelineRender(float, float, ColorTemplate<float> const&,
   ColorTemplate<float> const&, FlashLibraryInstance*) */

void FlashLibraryInstance__TimelineRender(float arg1, float arg2, ColorTemplate *arg3,
                                          ColorTemplate *arg4, FlashLibraryInstance *arg5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  long lVar7;
  long *plVar8;
  Matrix4x4 *pMVar9;
  float fVar10;
  float local_154;
  uint64_t local_148;
  uint32_t local_140;
  float fStack_13c;
  uint64_t local_138;
  uint32_t local_130;
  float fStack_12c;
  uint64_t local_128;
  uint64_t local_120;
  uint64_t local_118;
  uint64_t local_110;
  uint64_t local_108;
  uint32_t local_100;
  uint32_t uStack_fc;
  uint64_t local_f8;
  uint32_t local_f0;
  uint32_t uStack_ec;
  uint64_t local_e8;
  uint64_t local_e0;
  uint64_t local_d8;
  uint64_t local_d0;
  uint64_t local_c8;
  uint64_t uStack_c0;
  uint64_t local_b8;
  uint64_t uStack_b0;
  float local_a8;
  float local_a4;
  Vector2 local_98[16];
  Vector2 local_88[16];
  Vector2 local_78[16];
  Vector2 local_68[16];
  Vector2 local_58[16];
  Vector2 local_48[16];
  Vector2 local_38[16];
  Vector2 local_28[16];

  if (*(int *)(arg3 + 0x20) == -1) {
    return;
  }
  if (*(int *)(arg3 + 0x24) == 0) {
    return;
  }
  if ((*(char *)(*(long *)(arg3 + 0x28) + 0x8c) == '\0') && (bGlobalAnimationPause == 1)) {
    if (*(int *)(arg3 + 0x9c) != 0) {
      *(uint32_t *)(arg3 + 0x9c) = 2;
    }
  } else if (*(int *)(arg3 + 0x9c) == 2) {
    if (bGlobalAnimationPause == 0) {
      *(uint32_t *)(arg3 + 0x9c) = 1;
      goto LAB_00573ce8;
    }
  } else if (*(int *)(arg3 + 0x9c) == 1) {
  LAB_00573ce8:
    local_154 = arg1 - *(float *)(arg3 + 0x5c);
    goto LAB_00573726;
  }
  local_154 = *(float *)(arg3 + 0x58);
LAB_00573726:
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  if ((*(long *)(arg3 + 0x88) == 0) || (arg2 <= DAT_005bf760 /* R:0.0f */)) {
    local_108 = matIdentity;
    local_f8 = DAT_005ded50 /* R:0.0f */;
    local_e8 = DAT_005ded60 /* R:0.0f */;
    local_e0 = DAT_005ded68 /* R:1.0f */;
    local_d8 = DAT_005ded70 /* R:0.0f */;
    local_d0 = DAT_005ded78 /* R:0.0f */;
    _local_100 = CONCAT44(*(uint32_t *)(arg3 + 0x50), (int)DAT_005ded48 /* R:0.0f */);
    _local_f0 = CONCAT44(*(uint32_t *)(arg3 + 0x54), (int)DAT_005ded58 /* R:0.0f */);
    pMVar9 = (Matrix4x4 *)TGraphics__GetMatrix(Graphics, 0);
    Matrix4x4__Transformation2DSkew(pMVar9, (Vector2 *)(arg3 + 0x40), (Vector2 *)(arg3 + 0x48),
                                    (Vector2 *)0x0);
    pMVar9 = (Matrix4x4 *)TGraphics__GetMatrix(Graphics, 0);
    *(float *)(pMVar9 + 0xc) = *(float *)(arg3 + 0x30) - *(float *)(arg3 + 0x50);
    *(float *)(pMVar9 + 0x1c) = *(float *)(arg3 + 0x34) - *(float *)(arg3 + 0x54);
    *(uint32_t *)(pMVar9 + 0x2c) = *(uint32_t *)(arg3 + 0x38);
    uStack_c0 = CONCAT44(*(float *)(arg4 + 0xc) + *(float *)(arg3 + 0x70),
                         *(float *)(arg4 + 8) + *(float *)(arg3 + 0x6c));
    local_c8 = CONCAT44(*(float *)(arg4 + 4) + *(float *)(arg3 + 0x68),
                        *(float *)arg4 + *(float *)(arg3 + 100));
    local_b8 = CONCAT44((float)((ulong) * (uint64_t *)(arg3 + 0x74) >> 0x20) *
                            (float)((ulong) * (uint64_t *)arg5 >> 0x20),
                        (float)*(uint64_t *)(arg3 + 0x74) * (float)*(uint64_t *)arg5);
    uStack_b0 = CONCAT44((float)((ulong) * (uint64_t *)(arg3 + 0x7c) >> 0x20) *
                             (float)((ulong) * (uint64_t *)(arg5 + 8) >> 0x20),
                         (float)*(uint64_t *)(arg3 + 0x7c) * (float)*(uint64_t *)(arg5 + 8));
    Matrix4x4__Multiply(pMVar9, (Matrix4x4 *)&local_108, pMVar9);
  } else {
    Vector2__operator_mul__005be200(local_68, arg2);
    fVar10 = DAT_005be894 /* R:1.0f */ - arg2;
    Vector2__operator_mul__005be200(local_78, fVar10);
    Vector2__operator_plus__005be140((Vector2 *)&local_a8, local_78);
    local_148 = matIdentity;
    local_138 = DAT_005ded50 /* R:0.0f */;
    local_128 = DAT_005ded60 /* R:0.0f */;
    local_120 = DAT_005ded68 /* R:1.0f */;
    local_118 = DAT_005ded70 /* R:0.0f */;
    local_110 = DAT_005ded78 /* R:0.0f */;
    _local_140 = CONCAT44(local_a8, (int)DAT_005ded48 /* R:0.0f */);
    _local_130 = CONCAT44(local_a4, (int)DAT_005ded58 /* R:0.0f */);
    Vector2__operator_mul__005be200(local_48, arg2);
    Vector2__operator_mul__005be200(local_58, fVar10);
    Vector2__operator_plus__005be140(local_98, local_58);
    Vector2__operator_mul__005be200(local_28, arg2);
    Vector2__operator_mul__005be200(local_38, fVar10);
    Vector2__operator_plus__005be140(local_88, local_38);
    pMVar9 = (Matrix4x4 *)TGraphics__GetMatrix(Graphics, 0);
    Matrix4x4__Transformation2DSkew(pMVar9, local_98, local_88, (Vector2 *)0x0);
    lVar7 = *(long *)(arg3 + 0x88);
    fVar1 = *(float *)(arg3 + 0x34);
    fVar2 = *(float *)(lVar7 + 0x38);
    fVar3 = *(float *)(lVar7 + 0x34);
    fVar4 = *(float *)(lVar7 + 0x30);
    fVar5 = *(float *)(arg3 + 0x30);
    fVar6 = *(float *)(arg3 + 0x38);
    pMVar9 = (Matrix4x4 *)TGraphics__GetMatrix(Graphics, 0);
    *(float *)(pMVar9 + 0xc) = (fVar4 * arg2 - local_a8) + fVar5 * fVar10;
    *(float *)(pMVar9 + 0x1c) = (fVar3 * arg2 - local_a4) + fVar1 * fVar10;
    *(float *)(pMVar9 + 0x2c) = fVar6 * fVar10 + fVar2 * arg2;
    lVar7 = *(long *)(arg3 + 0x88);
    local_c8 = CONCAT44((*(float *)(arg3 + 0x68) + *(float *)(arg4 + 4)) * fVar10 +
                            (*(float *)(arg4 + 4) + *(float *)(lVar7 + 0x68)) * arg2,
                        (*(float *)(arg3 + 100) + *(float *)arg4) * fVar10 +
                            (*(float *)arg4 + *(float *)(lVar7 + 100)) * arg2);
    uStack_c0 = CONCAT44((*(float *)(arg3 + 0x70) + *(float *)(arg4 + 0xc)) * fVar10 +
                             (*(float *)(arg4 + 0xc) + *(float *)(lVar7 + 0x70)) * arg2,
                         (*(float *)(arg3 + 0x6c) + *(float *)(arg4 + 8)) * fVar10 +
                             (*(float *)(arg4 + 8) + *(float *)(lVar7 + 0x6c)) * arg2);
    local_b8 = CONCAT44(
        (*(float *)(arg3 + 0x78) * fVar10 + *(float *)(lVar7 + 0x78) * arg2) * *(float *)(arg5 + 4),
        (*(float *)(arg3 + 0x74) * fVar10 + *(float *)(lVar7 + 0x74) * arg2) * *(float *)arg5);
    uStack_b0 = CONCAT44((fVar10 * *(float *)(arg3 + 0x80) + arg2 * *(float *)(lVar7 + 0x80)) *
                             *(float *)(arg5 + 0xc),
                         (*(float *)(arg3 + 0x7c) * fVar10 + *(float *)(lVar7 + 0x7c) * arg2) *
                             *(float *)(arg5 + 8));
    Matrix4x4__Multiply(pMVar9, (Matrix4x4 *)&local_148, pMVar9);
  }
  plVar8 =
      *(long **)(*(long *)(*(long *)(arg3 + 0x28) + 0x48) + (ulong) * (ushort *)(arg3 + 0x20) * 8);
  (**(code **)(*plVar8 + 0x10))(local_154, plVar8, &local_c8, &local_b8, arg3);
  return;
}

/* ======================================================================
 * LoadGameModule  (Ghidra `LoadGameModule` @ 00584520)
 * Signature: uint8_t __stdcall LoadGameModule(char * arg1)
 * Calls: (none)
 * Called by: (none)
 */
/* TEngine__LoadGameModule(char const*) */

void TEngine__LoadGameModule(char *arg1)

{
  return;
}

/* ======================================================================
 * DestroyTileLevelResources  (Ghidra `DestroyTileLevelResources` @ 0058c790)
 * Signature: uint8_t __stdcall DestroyTileLevelResources(void * arg1)
 * Calls: `BaseResource__Release`
 * Called by: `TileLevel__TileLevel`, `TileLevel__TileLevel__0058d9f0`
 */
/* DestroyTileLevelResources(void*) */

void DestroyTileLevelResources(void *arg1)

{
  if (*(BaseResource **)((long)arg1 + 0x18) != (BaseResource *)0x0) {
    BaseResource__Release(*(BaseResource **)((long)arg1 + 0x18), 0);
    *(uint64_t *)((long)arg1 + 0x18) = 0;
  }
  if (*(BaseResource **)((long)arg1 + 0x20) != (BaseResource *)0x0) {
    BaseResource__Release(*(BaseResource **)((long)arg1 + 0x20), 0);
    *(uint64_t *)((long)arg1 + 0x20) = 0;
  }
  if (*(BaseResource **)((long)arg1 + 0x28) != (BaseResource *)0x0) {
    BaseResource__Release(*(BaseResource **)((long)arg1 + 0x28), 0);
    *(uint64_t *)((long)arg1 + 0x28) = 0;
  }
  if (*(BaseResource **)((long)arg1 + 0x2280) != (BaseResource *)0x0) {
    BaseResource__Release(*(BaseResource **)((long)arg1 + 0x2280), 0);
    *(uint64_t *)((long)arg1 + 0x2280) = 0;
  }
  if (*(BaseResource **)((long)arg1 + 0x2290) != (BaseResource *)0x0) {
    BaseResource__Release(*(BaseResource **)((long)arg1 + 0x2290), 0);
    *(uint64_t *)((long)arg1 + 0x2290) = 0;
  }
  if (*(BaseResource **)((long)arg1 + 0x2240) != (BaseResource *)0x0) {
    BaseResource__Release(*(BaseResource **)((long)arg1 + 0x2240), 0);
    *(uint64_t *)((long)arg1 + 0x2240) = 0;
  }
  if (*(BaseResource **)((long)arg1 + 0x2230) != (BaseResource *)0x0) {
    BaseResource__Release(*(BaseResource **)((long)arg1 + 0x2230), 0);
    *(uint64_t *)((long)arg1 + 0x2230) = 0;
  }
  if (*(BaseResource **)((long)arg1 + 0x2220) != (BaseResource *)0x0) {
    BaseResource__Release(*(BaseResource **)((long)arg1 + 0x2220), 0);
    *(uint64_t *)((long)arg1 + 0x2220) = 0;
  }
  if (*(BaseResource **)((long)arg1 + 0x2260) != (BaseResource *)0x0) {
    BaseResource__Release(*(BaseResource **)((long)arg1 + 0x2260), 0);
    *(uint64_t *)((long)arg1 + 0x2260) = 0;
  }
  if (*(BaseResource **)((long)arg1 + 0x2250) != (BaseResource *)0x0) {
    BaseResource__Release(*(BaseResource **)((long)arg1 + 0x2250), 0);
    *(uint64_t *)((long)arg1 + 0x2250) = 0;
  }
  if (*(BaseResource **)((long)arg1 + 0x2270) != (BaseResource *)0x0) {
    BaseResource__Release(*(BaseResource **)((long)arg1 + 0x2270), 0);
    *(uint64_t *)((long)arg1 + 0x2270) = 0;
  }
  return;
}

/* ======================================================================
 * CreateTileLevelResources  (Ghidra `CreateTileLevelResources` @ 0058c8d0)
 * Signature: uint8_t __stdcall CreateTileLevelResources(void * arg1)
 * Calls: `BaseResource__Release`, `VertexStream__VertexStream__005a6980`
 * Called by: `TileLevel__TileLevel`, `TileLevel__TileLevel__0058d9f0`
 */
/* CreateTileLevelResources(void*) */

void CreateTileLevelResources(void *arg1)

{
  VertexStream *pVVar1;
  long local_48;
  uint16_t local_40;
  uint32_t local_3c;
  uint64_t local_38;
  uint32_t local_30;
  uint32_t local_2c;
  uint32_t local_28;
  BaseResource *local_20[2];

  local_3c = 5;
  local_38 = 0;
  local_30 = 0;
  local_2c = 1;
  local_28 = 0;
  local_40 = 0x10;
  local_48 =
      (ulong) * (ushort *)((long)arg1 + 0x38) * (ulong) * (ushort *)((long)arg1 + 0x3a) * 0x60;
  local_20[0] = (BaseResource *)VertexBuffer__Create((tagVertexBufferCreation *)&local_48);
  pVVar1 = BaseResource__operator_new(0xa8, 1);
  /* try { // try from 0058c962 to 0058c966 has its CatchHandler @ 0058cd69 */
  VertexStream__VertexStream__005a6980(pVVar1, 1, 0, 0, 0, local_20, CGR__pPos2TexDecl);
  *(VertexStream **)((long)arg1 + 0x18) = pVVar1;
  BaseResource__Release(local_20[0], 0);
  local_20[0] = (BaseResource *)VertexBuffer__Create((tagVertexBufferCreation *)&local_48);
  pVVar1 = BaseResource__operator_new(0xa8, 1);
  /* try { // try from 0058c9b7 to 0058c9bb has its CatchHandler @ 0058ce59 */
  VertexStream__VertexStream__005a6980(pVVar1, 1, 0, 0, 0, local_20, CGR__pPos2TexDecl);
  *(VertexStream **)((long)arg1 + 0x20) = pVVar1;
  BaseResource__Release(local_20[0], 0);
  local_20[0] = (BaseResource *)VertexBuffer__Create((tagVertexBufferCreation *)&local_48);
  pVVar1 = BaseResource__operator_new(0xa8, 1);
  /* try { // try from 0058ca0c to 0058ca10 has its CatchHandler @ 0058ce41 */
  VertexStream__VertexStream__005a6980(pVVar1, 1, 0, 0, 0, local_20, CGR__pPos2TexDecl);
  *(VertexStream **)((long)arg1 + 0x28) = pVVar1;
  BaseResource__Release(local_20[0], 0);
  *(uint32_t *)((long)arg1 + 0x2248) = 0;
  *(uint32_t *)((long)arg1 + 0x2238) = 0;
  *(uint32_t *)((long)arg1 + 0x2228) = 0;
  *(uint32_t *)((long)arg1 + 0x2268) = 0;
  *(uint32_t *)((long)arg1 + 0x2258) = 0;
  *(uint64_t *)((long)arg1 + 0x19b8) = *(uint64_t *)((long)arg1 + 0x28);
  *(uint32_t *)((long)arg1 + 0x2278) = 0;
  *(uint32_t *)((long)arg1 + 0x2298) = 0;
  *(uint32_t *)((long)arg1 + 0x2288) = 0;
  local_48 = 0x4b0;
  *(uint64_t *)((long)arg1 + 0x1578) = *(uint64_t *)((long)arg1 + 0x18);
  local_40 = 0x14;
  *(uint64_t *)((long)arg1 + 0x1138) = *(uint64_t *)((long)arg1 + 0x20);
  local_20[0] = (BaseResource *)VertexBuffer__Create((tagVertexBufferCreation *)&local_48);
  pVVar1 = BaseResource__operator_new(0xa8, 1);
  /* try { // try from 0058cae2 to 0058cae6 has its CatchHandler @ 0058ce29 */
  VertexStream__VertexStream__005a6980(pVVar1, 1, 0, 0, 0, local_20, CGR__pPos3TexDecl);
  *(VertexStream **)((long)arg1 + 0x2240) = pVVar1;
  BaseResource__Release(local_20[0], 0);
  local_20[0] = (BaseResource *)VertexBuffer__Create((tagVertexBufferCreation *)&local_48);
  pVVar1 = BaseResource__operator_new(0xa8, 1);
  /* try { // try from 0058cb3a to 0058cb3e has its CatchHandler @ 0058ce11 */
  VertexStream__VertexStream__005a6980(pVVar1, 1, 0, 0, 0, local_20, CGR__pPos3TexDecl);
  *(VertexStream **)((long)arg1 + 0x2230) = pVVar1;
  BaseResource__Release(local_20[0], 0);
  local_20[0] = (BaseResource *)VertexBuffer__Create((tagVertexBufferCreation *)&local_48);
  pVVar1 = BaseResource__operator_new(0xa8, 1);
  /* try { // try from 0058cb92 to 0058cb96 has its CatchHandler @ 0058cdf9 */
  VertexStream__VertexStream__005a6980(pVVar1, 1, 0, 0, 0, local_20, CGR__pPos3TexDecl);
  *(VertexStream **)((long)arg1 + 0x2220) = pVVar1;
  BaseResource__Release(local_20[0], 0);
  local_20[0] = (BaseResource *)VertexBuffer__Create((tagVertexBufferCreation *)&local_48);
  pVVar1 = BaseResource__operator_new(0xa8, 1);
  /* try { // try from 0058cbea to 0058cbee has its CatchHandler @ 0058cde1 */
  VertexStream__VertexStream__005a6980(pVVar1, 1, 0, 0, 0, local_20, CGR__pPos3TexDecl);
  *(VertexStream **)((long)arg1 + 0x2260) = pVVar1;
  BaseResource__Release(local_20[0], 0);
  local_20[0] = (BaseResource *)VertexBuffer__Create((tagVertexBufferCreation *)&local_48);
  pVVar1 = BaseResource__operator_new(0xa8, 1);
  /* try { // try from 0058cc42 to 0058cc46 has its CatchHandler @ 0058cdc9 */
  VertexStream__VertexStream__005a6980(pVVar1, 1, 0, 0, 0, local_20, CGR__pPos3TexDecl);
  *(VertexStream **)((long)arg1 + 0x2270) = pVVar1;
  BaseResource__Release(local_20[0], 0);
  local_20[0] = (BaseResource *)VertexBuffer__Create((tagVertexBufferCreation *)&local_48);
  pVVar1 = BaseResource__operator_new(0xa8, 1);
  /* try { // try from 0058cc9a to 0058cc9e has its CatchHandler @ 0058cdb1 */
  VertexStream__VertexStream__005a6980(pVVar1, 1, 0, 0, 0, local_20, CGR__pPos3TexDecl);
  *(VertexStream **)((long)arg1 + 0x2250) = pVVar1;
  BaseResource__Release(local_20[0], 0);
  local_20[0] = (BaseResource *)VertexBuffer__Create((tagVertexBufferCreation *)&local_48);
  pVVar1 = BaseResource__operator_new(0xa8, 1);
  /* try { // try from 0058ccf2 to 0058ccf6 has its CatchHandler @ 0058cd99 */
  VertexStream__VertexStream__005a6980(pVVar1, 1, 0, 0, 0, local_20, CGR__pPos3TexDecl);
  *(VertexStream **)((long)arg1 + 0x2290) = pVVar1;
  BaseResource__Release(local_20[0], 0);
  local_20[0] = (BaseResource *)VertexBuffer__Create((tagVertexBufferCreation *)&local_48);
  pVVar1 = BaseResource__operator_new(0xa8, 1);
  /* try { // try from 0058cd4a to 0058cd4e has its CatchHandler @ 0058cd81 */
  VertexStream__VertexStream__005a6980(pVVar1, 1, 0, 0, 0, local_20, CGR__pPos3TexDecl);
  *(VertexStream **)((long)arg1 + 0x2280) = pVVar1;
  BaseResource__Release(local_20[0], 0);
  return;
}

/* ======================================================================
 * CreateBlankLevel  (Ghidra `CreateBlankLevel` @ 0058f630)
 * Signature: uint8_t __stdcall CreateBlankLevel(ushort arg1, ushort arg2)
 * Calls: `RenderLayer__AddObject`, `Vector2__operator_assign`, `memset`, `operator_new`
 * Called by: (none)
 */
/* TileLevel__CreateBlankLevel(unsigned short, unsigned short) */

TileLevel *TileLevel__CreateBlankLevel(ushort arg1, ushort arg2)

{
  ulong *__s;
  uint64_t *puVar1;
  long lVar2;
  TileLevel *self;
  ulong *puVar3;
  uint64_t *puVar4;
  ushort uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  uint64_t *puVar10;
  ulong uVar11;
  uint8_t (*pauVar12)[16];
  int iVar13;
  long lVar14;
  uint uVar15;
  int iVar16;
  float local_58;
  float local_54;
  uint32_t local_48;

  self = operator_new(0x22c8);
  /* try { // try from 0058f653 to 0058f657 has its CatchHandler @ 0058fa55 */
  TileLevel(self);
  *(ushort *)(self + 0x3a) = arg2;
  *(ushort *)(self + 0x38) = arg1;
  uVar15 = (uint)arg2;
  iVar16 = arg1 * uVar15;
  uVar8 = (ulong)(iVar16 * 3);
  puVar3 = operator_new__(uVar8 * 4 + 8);
  __s = puVar3 + 1;
  lVar14 = uVar8 - 1;
  *puVar3 = uVar8;
  if (lVar14 != -1) {
    uVar11 = (ulong)(-(((uint)__s & 0xf) >> 2) & 3);
    if (uVar8 <= uVar11) {
      uVar11 = uVar8;
    }
    puVar3 = __s;
    if (uVar11 != 0) {
      uVar6 = 0;
      do {
        uVar6 = uVar6 + 1;
        *(uint32_t *)puVar3 = 0;
        lVar14 = lVar14 + -1;
        puVar3 = (ulong *)((long)puVar3 + 4);
      } while (uVar6 < uVar11);
      if (uVar8 == uVar11)
        goto LAB_0058f740;
    }
    uVar6 = uVar8 - uVar11 >> 2;
    if (uVar6 != 0) {
      pauVar12 = (uint8_t (*)[16])((long)__s + uVar11 * 4);
      uVar7 = 0;
      do {
        uVar7 = uVar7 + 1;
        *pauVar12 = (uint8_t[16])0x0;
        pauVar12 = pauVar12 + 1;
      } while (uVar7 < uVar6);
      lVar14 = lVar14 + uVar6 * -4;
      puVar3 = puVar3 + uVar6 * 2;
      if (uVar8 - uVar11 == uVar6 * 4)
        goto LAB_0058f740;
    }
    lVar9 = 0;
    do {
      *(uint32_t *)((long)puVar3 + lVar9 * 4) = 0;
      lVar9 = lVar9 + 1;
    } while (lVar9 != lVar14 + 1);
  }
LAB_0058f740:
  *(ulong **)self = __s;
  memset(__s, 0, (ulong)arg1 * 0xc * (ulong)arg2);
  lVar2 = *(long *)self;
  *(TileLevel **)(self + 0x1558) = self;
  *(TileLevel **)(self + 0x1998) = self;
  *(TileLevel **)(self + 0x1118) = self;
  *(uint32_t *)(self + 0x1560) = 0;
  lVar14 = lVar2 + (long)iVar16 * 4;
  lVar9 = lVar2 + (long)(iVar16 * 2) * 4;
  *(long *)(self + 0x1570) = lVar2;
  *(uint32_t *)(self + 0x1120) = 2;
  *(uint32_t *)(self + 0x19a0) = 1;
  *(long *)(self + 0x10) = lVar14;
  *(long *)(self + 0x1130) = lVar14;
  *(TileLevel **)(self + 0xcf8) = self + 0x2240;
  *(long *)(self + 8) = lVar9;
  *(long *)(self + 0x19b0) = lVar9;
  *(TileLevel **)(self + 0xce8) = self;
  *(TileLevel **)(self + 0x8c8) = self + 0x2230;
  *(TileLevel **)(self + 0x8b8) = self;
  *(TileLevel **)(self + 0x488) = self;
  *(TileLevel **)(self + 0x2208) = self;
  *(TileLevel **)(self + 0x498) = self + 0x2220;
  *(TileLevel **)(self + 0x1dd8) = self;
  *(uint32_t *)(self + 0xcf0) = 3;
  *(uint32_t *)(self + 0x8c0) = 4;
  *(TileLevel **)(self + 0x2218) = self + 0x2290;
  *(uint32_t *)(self + 0x490) = 5;
  *(uint32_t *)(self + 0x2210) = 6;
  *(uint32_t *)(self + 0x1de0) = 7;
  *(TileLevel **)(self + 0x1de8) = self + 0x2280;
  *(TileLevel **)(self + 0x1568) = self + 0x2260;
  *(TileLevel **)(self + 0x19a8) = self + 0x2270;
  *(TileLevel **)(self + 0x1128) = self + 0x2250;
  puVar4 = operator_new__(0xa288);
  puVar1 = puVar4 + 1;
  *puVar4 = 400;
  puVar10 = puVar1;
  do {
    puVar10[1] = 0;
    puVar10[2] = 0;
    puVar10[3] = 0;
    *puVar10 = &PTR__TileLevelSetPiece_005dd030;
    *(uint32_t *)((long)puVar4 + (long)puVar10 + (0x2c - (long)puVar1)) = 0;
    *(uint32_t *)((long)puVar4 + (long)puVar10 + (0x30 - (long)puVar1)) = 0;
    *(uint32_t *)((long)puVar4 + (long)puVar10 + (0x34 - (long)puVar1)) = 0;
    *(uint32_t *)((long)puVar4 + (long)puVar10 + (0x38 - (long)puVar1)) = 0;
    *(uint32_t *)((long)puVar4 + (long)puVar10 + (0x3c - (long)puVar1)) = 0x3f800000;
    *(uint32_t *)((long)puVar4 + (long)puVar10 + (0x40 - (long)puVar1)) = 0x3f800000;
    *(uint32_t *)((long)puVar10 + 0x3c) = 0;
    *(byte *)((long)puVar10 + 0x21) = *(byte *)((long)puVar10 + 0x21) & 0x40;
    *(uint32_t *)(puVar10 + 8) = 0;
    *(uint32_t *)((long)puVar10 + 0x44) = 0x3f800000;
    *(uint32_t *)(puVar10 + 9) = 0;
    puVar10[0xc] = 0;
    *(uint32_t *)((long)puVar10 + 0x4c) = 0;
    *(uint32_t *)(puVar10 + 10) = 0;
    *(uint32_t *)((long)puVar10 + 0x54) = 0;
    *(uint32_t *)(puVar10 + 0xb) = 0;
    *(uint8_t *)(puVar10 + 4) = 0;
    puVar10 = puVar10 + 0xd;
  } while (puVar10 != puVar4 + 0x1451);
  *(uint64_t **)(self + 0x60) = puVar1;
  *(byte *)((long)puVar4 + 0x29) = *(byte *)((long)puVar4 + 0x29) | 2;
  *(TileLevel **)(*(long *)(self + 0x60) + 0x60) = self;
  RenderLayer__AddObject((RenderLayer *)(self + 0x70), *(RenderLayerObject **)(self + 0x60));
  *(uint32_t *)(self + 0x68) = 1;
  local_48 = 1;
  if (arg1 != 0) {
    lVar14 = 0;
    do {
      *(uint32_t *)(*(long *)self + lVar14 * 4) = 1;
      iVar16 = (int)lVar14;
      lVar14 = lVar14 + 1;
      *(uint32_t *)(*(long *)self +
                    (long)(int)((uint) * (ushort *)(self + 0x38) * (uVar15 - 1) + iVar16) * 4) = 1;
    } while ((int)lVar14 < (int)(uint)arg1);
  }
  if (uVar15 != 0) {
    uVar5 = *(ushort *)(self + 0x38);
    iVar16 = 0;
    while (true) {
      *(uint32_t *)(*(long *)self + (long)(int)((uint)uVar5 * iVar16) * 4) = 1;
      iVar13 = (uint) * (ushort *)(self + 0x38) * iVar16;
      iVar16 = iVar16 + 1;
      *(uint32_t *)(*(long *)self + (long)(int)(iVar13 + (arg1 - 1)) * 4) = 1;
      if ((int)(uint)arg2 <= iVar16)
        break;
      uVar5 = *(ushort *)(self + 0x38);
    }
  }
  local_58 = (float)arg1 * DAT_005c0e00 /* R:-0.5f */ * fLevelGridWH;
  local_54 = (float)arg2 * DAT_005c0e00 /* R:-0.5f */ * fLevelGridWH;
  Vector2__operator_assign((Vector2 *)(self + 0x30), (Vector2 *)&local_58);
  *(uint32_t *)(self + 0x22c4) = 1;
  return self;
}

/* ======================================================================
 * SaveLevel  (Ghidra `SaveLevel` @ 0058fa70)
 * Signature: uint8_t __stdcall SaveLevel(TileLevel * arg1, char * arg2, int arg3)
 * Calls: `File__File`, `File__File__005b7a70`, `File__Write`, `File__WriteArray`, `RenderLayer__GetNumObjects`
 * Called by: `SMBEditor__QuickSaveLevel`
 */
/* TileLevel__SaveLevel(TileLevel*, char const*, int) */

uint64_t TileLevel__SaveLevel(TileLevel *arg1, char *arg2, int arg3)

{
  int *piVar1;
  ulong uVar2;
  int iVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint64_t uVar10;
  uint uVar11;
  long lVar12;
  File *pFVar13;
  int local_11c;
  char *local_118;
  uint8_t *local_110;
  uint32_t local_108;
  uint64_t local_100;
  uint32_t local_f8;
  uint32_t local_f4;
  uint32_t local_f0;
  uint32_t local_ec;
  uint32_t local_e8;
  uint32_t local_e4;
  uint8_t *local_e0;
  RenderLayer *local_d8[8];
  File local_98[48];
  uint64_t local_68[4];
  int local_48;
  uint8_t local_44[4];
  uint8_t local_40[8];
  uint32_t local_38;
  uint32_t local_30;
  byte local_29;

  local_11c = arg3;
  pvVar4 = operator_new__(
      (long)(int)((uint) * (ushort *)(arg1 + 0x38) * (uint) * (ushort *)(arg1 + 0x3a) * 3) << 2);
  lVar12 = 0;
  local_68[0] = *(uint64_t *)arg1;
  local_68[1] = *(uint64_t *)(arg1 + 0x10);
  local_68[2] = *(uint64_t *)(arg1 + 8);
  iVar3 = 0;
  do {
    piVar1 = *(int **)((long)local_68 + lVar12 * 2);
    uVar11 = 0;
    iVar9 = *piVar1;
    iVar7 = (uint) * (ushort *)(arg1 + 0x38) * (uint) * (ushort *)(arg1 + 0x3a);
    iVar8 = iVar3;
    local_38 = iVar9;
    if (iVar7 != 0) {
      lVar5 = 0;
      uVar11 = 0;
      do {
        while ((piVar1[lVar5] == iVar9 && (uVar11 < 0x3ff))) {
          lVar5 = lVar5 + 1;
          uVar11 = uVar11 + 1;
          if (iVar7 <= (int)lVar5)
            goto LAB_0058fb61;
        }
        local_38 = CONCAT22(local_38._2_2_ & 0x3f | (ushort)(uVar11 << 6), (uint16_t)local_38);
        lVar6 = (long)iVar8;
        iVar8 = iVar8 + 1;
        *(int *)((long)pvVar4 + lVar6 * 4) = local_38;
        iVar9 = piVar1[lVar5];
        lVar5 = lVar5 + 1;
        uVar11 = 1;
        local_38 = iVar9;
      } while ((int)lVar5 < iVar7);
    LAB_0058fb61:
      uVar11 = uVar11 & 0xffff03ff;
    }
    local_38 = CONCAT22(local_38._2_2_ & 0x3f | (ushort)(uVar11 << 6), (uint16_t)local_38);
    iVar9 = iVar8 + 1;
    *(int *)((long)pvVar4 + (long)iVar8 * 4) = local_38;
    *(int *)(local_44 + lVar12 + -4) = iVar9 - iVar3;
    lVar12 = lVar12 + 4;
    iVar3 = iVar9;
  } while (lVar12 != 0xc);
  local_108 = 2;
  local_100 = 0;
  local_f8 = 0;
  local_f4 = 1;
  local_f0 = 1;
  local_ec = 0;
  local_e8 = 0;
  local_e4 = 0;
  local_e0 = &DAT_005c04cf /* R:7.374579797039071e-39f */;
  local_110 = &DAT_005c04d3 /* R:3.984248865183858e-39f */;
  local_118 = arg2;
  File__File(local_98, (tagFileCreation *)&local_118);
  /* try { // try from 0058fc2b to 005902a0 has its CatchHandler @ 005902c5 */
  File__Write(local_98, &TILELEVEL_BASEVERSION02, 4);
  File__Write(local_98, &local_11c, 4);
  lVar12 = *(long *)(arg1 + 0x40);
  uVar2 = *(ulong *)(*(long *)(lVar12 + 8) + -0x18);
  local_29 = 0xff;
  if (0xfe < uVar2) {
    local_29 = (byte)uVar2;
  }
  File__Write(local_98, &local_29, 1);
  File__Write(local_98, *(void **)(lVar12 + 8), local_29 + 1);
  File__Write(local_98, arg1 + 0x22a8, 4);
  File__Write(local_98, arg1 + 0x22ac, 4);
  File__Write(local_98, arg1 + 0x38, 2);
  File__Write(local_98, arg1 + 0x3a, 2);
  File__WriteArray(local_98, (uchar *)(arg1 + 0xcd0), 4, 4);
  File__Write(local_98, arg1 + 0xce0, 4);
  File__WriteArray(local_98, (uchar *)(arg1 + 0x8a0), 4, 4);
  File__Write(local_98, arg1 + 0x8b0, 4);
  File__WriteArray(local_98, (uchar *)(arg1 + 0x470), 4, 4);
  File__Write(local_98, arg1 + 0x480, 4);
  File__WriteArray(local_98, (uchar *)(arg1 + 0x1100), 4, 4);
  File__Write(local_98, arg1 + 0x1110, 4);
  File__WriteArray(local_98, (uchar *)(arg1 + 0x1540), 4, 4);
  File__Write(local_98, arg1 + 0x1550, 4);
  File__WriteArray(local_98, (uchar *)(arg1 + 0x1980), 4, 4);
  File__Write(local_98, arg1 + 0x1990, 4);
  File__WriteArray(local_98, (uchar *)(arg1 + 0x21f0), 4, 4);
  File__Write(local_98, arg1 + 0x2200, 4);
  File__WriteArray(local_98, (uchar *)(arg1 + 0x1dc0), 4, 4);
  File__Write(local_98, arg1 + 0x1dd0, 4);
  File__Write(local_98, &local_48, 4);
  File__Write(local_98, local_44, 4);
  File__Write(local_98, local_40, 4);
  File__Write(local_98, pvVar4, iVar9 * 4);
  local_30 = RenderLayer__GetNumObjects((RenderLayer *)(arg1 + 0x8d0));
  File__Write(local_98, &local_30, 4);
  local_30 = RenderLayer__GetNumObjects((RenderLayer *)(arg1 + 0x4a0));
  File__Write(local_98, &local_30, 4);
  local_30 = RenderLayer__GetNumObjects((RenderLayer *)(arg1 + 0x70));
  File__Write(local_98, &local_30, 4);
  local_30 = RenderLayer__GetNumObjects((RenderLayer *)(arg1 + 0xd00));
  File__Write(local_98, &local_30, 4);
  local_30 = RenderLayer__GetNumObjects((RenderLayer *)(arg1 + 0x1140));
  File__Write(local_98, &local_30, 4);
  local_30 = RenderLayer__GetNumObjects((RenderLayer *)(arg1 + 0x1580));
  File__Write(local_98, &local_30, 4);
  local_30 = RenderLayer__GetNumObjects((RenderLayer *)(arg1 + 0x1df0));
  File__Write(local_98, &local_30, 4);
  local_30 = RenderLayer__GetNumObjects((RenderLayer *)(arg1 + 0x19c0));
  File__Write(local_98, &local_30, 4);
  pFVar13 = (File *)local_d8;
  local_d8[0] = (RenderLayer *)(arg1 + 0x8d0);
  local_d8[1] = (RenderLayer *)(arg1 + 0x4a0);
  local_d8[4] = (RenderLayer *)(arg1 + 0x1140);
  local_d8[5] = (RenderLayer *)(arg1 + 0x1580);
  local_d8[2] = (RenderLayer *)(arg1 + 0x70);
  local_d8[3] = (RenderLayer *)(arg1 + 0xd00);
  local_d8[6] = (RenderLayer *)(arg1 + 0x1df0);
  local_d8[7] = (RenderLayer *)(arg1 + 0x19c0);
  do {
    for (lVar12 = *(long *)(*(RenderLayer **)pFVar13 + 8); lVar12 != 0;
         lVar12 = *(long *)(lVar12 + 8)) {
      File__WriteArray(local_98, (uchar *)(lVar12 + 0x24), 3, 4);
      File__WriteArray(local_98, (uchar *)(lVar12 + 0x34), 2, 4);
      File__Write(local_98, (void *)(lVar12 + 0x3c), 4);
      File__Write(local_98, (void *)(lVar12 + 0x20), 2);
      File__Write(local_98, (void *)(lVar12 + 0x44), 4);
      File__Write(local_98, (void *)(lVar12 + 0x48), 4);
      File__WriteArray(local_98, (uchar *)(lVar12 + 0x4c), 2, 4);
      File__WriteArray(local_98, (uchar *)(lVar12 + 0x54), 2, 4);
    }
    pFVar13 = pFVar13 + 8;
  } while (pFVar13 != local_98);
  File__WriteArray(local_98, (uchar *)(arg1 + 0x22b4), 2, 4);
  File__WriteArray(local_98, (uchar *)(arg1 + 0x22bc), 2, 4);
  if (pvVar4 != (void *)0x0) {
    operator_delete__(pvVar4);
  }
  if (fnLevelSave != (code *)0x0) {
    iVar3 = (*fnLevelSave)(local_98, arg1, local_11c);
    uVar10 = 0;
    if (iVar3 == 0)
      goto LAB_005902a6;
  }
  File__Write(local_98, &TILELEVEL_FILEEND, 4);
  uVar10 = 1;
LAB_005902a6:
  File__File__005b7a70(local_98);
  return uVar10;
}

/* ======================================================================
 * GetPaletteFromLevelFile  (Ghidra `GetPaletteFromLevelFile` @ 005902e0)
 * Signature: uint8_t __stdcall GetPaletteFromLevelFile(TileLevelLoad * arg1, string * arg2)
 * Calls: `File__File`, `File__File__005b7a70`, `File__Read`, `File__ReadVariable`, `std__string_string__00825640`, `strlen`
 * Called by: (none)
 */
/* TileLevel__GetPaletteFromLevelFile(TileLevelLoad const*, std__string_string__00825640&) */

void TileLevel__GetPaletteFromLevelFile(TileLevelLoad *arg1, string *arg2)

{
  int iVar1;
  char *pcVar2;
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
  int local_28[3];
  byte local_19[9];

  pcVar2 = *(char **)arg1;
  local_a8 = (char *)0x0;
  local_a0 = (uint8_t *)0x0;
  local_98 = 2;
  local_90 = 0;
  local_88 = 0;
  local_84 = 1;
  local_80 = 1;
  local_7c = 0;
  local_78 = 0;
  local_74 = 0;
  local_70 = &DAT_005c04cf /* R:7.374579797039071e-39f */;
  if (pcVar2 == (char *)0x0) {
    local_90 = *(uint64_t *)(arg1 + 8);
    local_88 = *(uint32_t *)(arg1 + 0x10);
  } else {
    local_a0 = &DAT_005c328c /* R:u32=1811964530 */;
    local_a8 = pcVar2;
    iVar1 = File__Exists(pcVar2, 0);
    if (iVar1 == 0) {
      return;
    }
  }
  File__File(local_68, (tagFileCreation *)&local_a8);
  /* try { // try from 0059038e to 00590415 has its CatchHandler @ 00590474 */
  File__ReadVariable(local_68, local_38, 4);
  if (local_38[0] + 0xabb3cfcfU < 2) {
    /* try { // try from 0059046a to 0059046e has its CatchHandler @ 00590474 */
    File__ReadVariable(local_68, local_28, 4);
  } else {
    local_28[0] = local_38[0];
    local_38[0] = -1;
  }
  local_19[0] = 0;
  File__ReadVariable(local_68, local_19, 1);
  pcVar2 = operator_new__((ulong)local_19[0] + 1);
  File__Read(local_68, pcVar2, local_19[0] + 1);
  strlen(pcVar2);
  std__string_assign((char *)arg2, (ulong)pcVar2);
  if (pcVar2 != (char *)0x0) {
    operator_delete__(pcVar2);
  }
  File__File__005b7a70(local_68);
  return;
}

/* ======================================================================
 * LoadLevelFromFile  (Ghidra `LoadLevelFromFile` @ 00590490)
 * Signature: uint8_t __stdcall LoadLevelFromFile(TileLevelLoad * arg1)
 * Calls: `File__File`, `File__File__005b7a70`, `File__Read`, `File__ReadArray`, `File__ReadVariable`, `RenderLayer__AddObject`, `Vector2__operator_assign`, `operator_new`, `strlen`
 * Called by: (none)
 */
/* TileLevel__LoadLevelFromFile(TileLevelLoad const*) */

TileLevel *TileLevel__LoadLevelFromFile(TileLevelLoad *arg1)

{
  uint64_t *puVar1;
  uint32_t *puVar2;
  RenderLayer *self;
  int iVar3;
  uint uVar4;
  TileLevel *this_00;
  char *pcVar5;
  ulong *puVar6;
  ulong *puVar7;
  uint64_t *puVar8;
  ulong uVar9;
  uint8_t (*pauVar10)[16];
  uint *puVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  uint64_t *puVar16;
  uint *puVar17;
  ulong uVar18;
  RenderLayerObject *pRVar19;
  int iVar20;
  long lVar21;
  ushort uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  int iVar27;
  char *local_178;
  uint8_t *local_170;
  uint32_t local_168;
  uint64_t local_160;
  uint32_t local_158;
  uint32_t local_154;
  uint32_t local_150;
  uint32_t local_14c;
  uint32_t local_148;
  uint32_t local_144;
  uint8_t *local_140;
  TileLevel *local_138[8];
  File local_f8[48];
  int local_c8;
  uint8_t local_c4[4];
  uint8_t local_c0[4];
  uint8_t local_bc[4];
  uint8_t local_b8[4];
  uint8_t local_b4[4];
  uint8_t local_b0[4];
  uint8_t local_ac[4];
  long local_a8[4];
  int local_88;
  uint8_t local_84[4];
  uint8_t local_80[8];
  float local_78;
  float local_74;
  int local_68[4];
  int local_58[4];
  uint local_48;
  uint local_40;
  byte local_39[9];

  pcVar5 = *(char **)arg1;
  local_178 = (char *)0x0;
  local_170 = (uint8_t *)0x0;
  local_168 = 2;
  local_160 = 0;
  local_158 = 0;
  local_154 = 1;
  local_150 = 1;
  local_14c = 0;
  local_148 = 0;
  local_144 = 0;
  local_140 = &DAT_005c04cf /* R:7.374579797039071e-39f */;
  if (pcVar5 == (char *)0x0) {
    local_160 = *(uint64_t *)(arg1 + 8);
    local_158 = *(uint32_t *)(arg1 + 0x10);
  } else {
    local_170 = &DAT_005c328c /* R:u32=1811964530 */;
    local_178 = pcVar5;
    iVar3 = File__Exists(pcVar5, 0);
    if (iVar3 == 0) {
      return (TileLevel *)0x0;
    }
  }
  File__File(local_f8, (tagFileCreation *)&local_178);
  /* try { // try from 00590540 to 00590544 has its CatchHandler @ 00591086 */
  this_00 = operator_new(0x22c8);
  /* try { // try from 0059054b to 0059054f has its CatchHandler @ 0059109e */
  TileLevel(this_00);
  *(uint32_t *)(this_00 + 0x1560) = 0;
  *(uint32_t *)(this_00 + 0x1120) = 2;
  *(uint32_t *)(this_00 + 0x19a0) = 1;
  /* try { // try from 00590583 to 00591021 has its CatchHandler @ 00591086 */
  File__ReadVariable(local_f8, local_68, 4);
  if (local_68[0] + 0xabb3cfcfU < 2) {
    /* try { // try from 00591078 to 0059107c has its CatchHandler @ 00591086 */
    File__ReadVariable(local_f8, local_58, 4);
  } else {
    local_58[0] = local_68[0];
    local_68[0] = -1;
  }
  local_39[0] = 0;
  File__ReadVariable(local_f8, local_39, 1);
  pcVar5 = operator_new__((ulong)local_39[0] + 1);
  File__Read(local_f8, pcVar5, local_39[0] + 1);
  strlen(pcVar5);
  std__string_assign((char *)(this_00 + 0x22a0), (ulong)pcVar5);
  if (pcVar5 != (char *)0x0) {
    operator_delete__(pcVar5);
  }
  File__ReadVariable(local_f8, this_00 + 0x22a8, 4);
  File__ReadVariable(local_f8, this_00 + 0x22ac, 4);
  File__ReadVariable(local_f8, this_00 + 0x38, 2);
  File__ReadVariable(local_f8, this_00 + 0x3a, 2);
  File__ReadArray(local_f8, (uchar *)(this_00 + 0xcd0), 4, 4);
  File__ReadVariable(local_f8, this_00 + 0xce0, 4);
  File__ReadArray(local_f8, (uchar *)(this_00 + 0x8a0), 4, 4);
  File__ReadVariable(local_f8, this_00 + 0x8b0, 4);
  File__ReadArray(local_f8, (uchar *)(this_00 + 0x470), 4, 4);
  File__ReadVariable(local_f8, this_00 + 0x480, 4);
  File__ReadArray(local_f8, (uchar *)(this_00 + 0x1100), 4, 4);
  File__ReadVariable(local_f8, this_00 + 0x1110, 4);
  File__ReadArray(local_f8, (uchar *)(this_00 + 0x1540), 4, 4);
  File__ReadVariable(local_f8, this_00 + 0x1550, 4);
  File__ReadArray(local_f8, (uchar *)(this_00 + 0x1980), 4, 4);
  File__ReadVariable(local_f8, this_00 + 0x1990, 4);
  File__ReadArray(local_f8, (uchar *)(this_00 + 0x21f0), 4, 4);
  File__ReadVariable(local_f8, this_00 + 0x2200, 4);
  File__ReadArray(local_f8, (uchar *)(this_00 + 0x1dc0), 4, 4);
  File__ReadVariable(local_f8, this_00 + 0x1dd0, 4);
  uVar18 =
      (ulong)(int)((uint) * (ushort *)(this_00 + 0x38) * (uint) * (ushort *)(this_00 + 0x3a) * 3);
  puVar6 = operator_new__(uVar18 * 4 + 8);
  lVar21 = uVar18 - 1;
  *puVar6 = uVar18;
  puVar6 = puVar6 + 1;
  if (lVar21 != -1) {
    uVar9 = (ulong)(-(((uint)puVar6 & 0xf) >> 2) & 3);
    if (uVar18 <= uVar9) {
      uVar9 = uVar18;
    }
    puVar7 = puVar6;
    if (uVar9 != 0) {
      uVar13 = 0;
      do {
        uVar13 = uVar13 + 1;
        *(uint32_t *)puVar7 = 0;
        lVar21 = lVar21 + -1;
        puVar7 = (ulong *)((long)puVar7 + 4);
      } while (uVar13 < uVar9);
      if (uVar18 == uVar9)
        goto LAB_00590910;
    }
    uVar13 = uVar18 - uVar9 >> 2;
    if (uVar13 != 0) {
      pauVar10 = (uint8_t (*)[16])((long)puVar6 + uVar9 * 4);
      uVar14 = 0;
      do {
        uVar14 = uVar14 + 1;
        *pauVar10 = (uint8_t[16])0x0;
        pauVar10 = pauVar10 + 1;
      } while (uVar14 < uVar13);
      lVar21 = lVar21 + uVar13 * -4;
      puVar7 = puVar7 + uVar13 * 2;
      if (uVar18 - uVar9 == uVar13 * 4)
        goto LAB_00590910;
    }
    lVar15 = 0;
    do {
      *(uint32_t *)((long)puVar7 + lVar15 * 4) = 0;
      lVar15 = lVar15 + 1;
    } while (lVar15 != lVar21 + 1);
  }
LAB_00590910:
  *(ulong **)this_00 = puVar6;
  *(ulong **)(this_00 + 0x1570) = puVar6;
  *(TileLevel **)(this_00 + 0x1558) = this_00;
  *(TileLevel **)(this_00 + 0x1998) = this_00;
  *(TileLevel **)(this_00 + 0x1118) = this_00;
  *(TileLevel **)(this_00 + 0xce8) = this_00;
  *(TileLevel **)(this_00 + 0x8b8) = this_00;
  *(TileLevel **)(this_00 + 0x488) = this_00;
  *(TileLevel **)(this_00 + 0x2208) = this_00;
  *(TileLevel **)(this_00 + 0x1dd8) = this_00;
  *(uint32_t *)(this_00 + 0xcf0) = 3;
  *(uint32_t *)(this_00 + 0x8c0) = 4;
  *(uint32_t *)(this_00 + 0x490) = 5;
  *(uint32_t *)(this_00 + 0x2210) = 6;
  *(uint32_t *)(this_00 + 0x1de0) = 7;
  *(uint32_t *)(this_00 + 0x1560) = 0;
  *(uint32_t *)(this_00 + 0x1120) = 2;
  *(uint32_t *)(this_00 + 0x19a0) = 1;
  puVar2 = (uint32_t *)((long)puVar6 + (long)(int)((uint) * (ushort *)(this_00 + 0x38) * (uint) *
                                                   (ushort *)(this_00 + 0x3a)) *
                                           4);
  *(uint32_t **)(this_00 + 0x10) = puVar2;
  *(uint32_t **)(this_00 + 0x1130) = puVar2;
  *(uint32_t **)(this_00 + 8) =
      puVar2 + (int)((uint) * (ushort *)(this_00 + 0x38) * (uint) * (ushort *)(this_00 + 0x3a));
  *(uint32_t **)(this_00 + 0x19b0) =
      puVar2 + (int)((uint) * (ushort *)(this_00 + 0x38) * (uint) * (ushort *)(this_00 + 0x3a));
  *(TileLevel **)(this_00 + 0xcf8) = this_00 + 0x2240;
  *(TileLevel **)(this_00 + 0x8c8) = this_00 + 0x2230;
  *(TileLevel **)(this_00 + 0x498) = this_00 + 0x2220;
  *(TileLevel **)(this_00 + 0x2218) = this_00 + 0x2290;
  *(TileLevel **)(this_00 + 0x1de8) = this_00 + 0x2280;
  *(TileLevel **)(this_00 + 0x1568) = this_00 + 0x2260;
  *(TileLevel **)(this_00 + 0x19a8) = this_00 + 0x2270;
  *(TileLevel **)(this_00 + 0x1128) = this_00 + 0x2250;
  puVar8 = operator_new__(0xa288);
  puVar1 = puVar8 + 1;
  *puVar8 = 400;
  puVar16 = puVar1;
  do {
    puVar16[1] = 0;
    puVar16[2] = 0;
    puVar16[3] = 0;
    *puVar16 = &PTR__TileLevelSetPiece_005dd030;
    *(uint32_t *)((long)puVar8 + (long)puVar16 + (0x2c - (long)puVar1)) = 0;
    *(uint32_t *)((long)puVar8 + (long)puVar16 + (0x30 - (long)puVar1)) = 0;
    *(uint32_t *)((long)puVar8 + (long)puVar16 + (0x34 - (long)puVar1)) = 0;
    *(uint32_t *)((long)puVar8 + (long)puVar16 + (0x38 - (long)puVar1)) = 0;
    *(uint32_t *)((long)puVar8 + (long)puVar16 + (0x3c - (long)puVar1)) = 0x3f800000;
    *(uint32_t *)((long)puVar8 + (long)puVar16 + (0x40 - (long)puVar1)) = 0x3f800000;
    *(uint32_t *)((long)puVar16 + 0x3c) = 0;
    *(byte *)((long)puVar16 + 0x21) = *(byte *)((long)puVar16 + 0x21) & 0x40;
    *(uint32_t *)(puVar16 + 8) = 0;
    *(uint32_t *)((long)puVar16 + 0x44) = 0x3f800000;
    *(uint32_t *)(puVar16 + 9) = 0;
    puVar16[0xc] = 0;
    *(uint32_t *)((long)puVar16 + 0x4c) = 0;
    *(uint32_t *)(puVar16 + 10) = 0;
    *(uint32_t *)((long)puVar16 + 0x54) = 0;
    *(uint32_t *)(puVar16 + 0xb) = 0;
    *(uint8_t *)(puVar16 + 4) = 0;
    puVar16 = puVar16 + 0xd;
  } while (puVar16 != puVar8 + 0x1451);
  local_a8[0] = *(long *)this_00;
  *(uint64_t **)(this_00 + 0x60) = puVar1;
  local_a8[1] = *(long *)(this_00 + 0x10);
  local_a8[2] = *(long *)(this_00 + 8);
  File__ReadVariable(local_f8, &local_88, 4);
  File__ReadVariable(local_f8, local_84, 4);
  File__ReadVariable(local_f8, local_80, 4);
  lVar21 = 0;
  do {
    iVar27 = 0;
    iVar3 = 0;
    if (0 < *(int *)(local_84 + lVar21 + -4)) {
      do {
        File__ReadVariable(local_f8, &local_40, 4);
        uVar22 = (ushort)(local_40 >> 0x16);
        local_48 = local_40 & 0x3fffff;
        if (uVar22 != 0) {
          lVar15 = *(long *)((long)local_a8 + lVar21 * 2);
          puVar11 = (uint *)(lVar15 + (long)iVar3 * 4);
          uVar25 = -(((uint)puVar11 & 0xf) >> 2) & 3;
          uVar23 = (uint)uVar22;
          if (uVar23 < uVar25) {
            uVar25 = uVar23;
          }
          uVar4 = 0;
          uVar24 = (uint)uVar22;
          puVar17 = puVar11;
          iVar20 = iVar3;
          if (uVar25 == 0) {
          LAB_00590c56:
            uVar23 = uVar24 - uVar25 >> 2;
            uVar26 = uVar23 * 4;
            if (uVar23 != 0) {
              puVar11 = puVar11 + uVar25;
              uVar12 = 0;
              do {
                uVar12 = uVar12 + 1;
                *puVar11 = local_48;
                puVar11[1] = local_48;
                puVar11[2] = local_48;
                puVar11[3] = local_48;
                puVar11 = puVar11 + 4;
              } while (uVar12 < uVar23);
              iVar20 = iVar20 + uVar26;
              uVar4 = uVar4 + uVar26;
              if (uVar24 - uVar25 == uVar26)
                goto LAB_00590cbe;
            }
            puVar11 = (uint *)(lVar15 + (long)iVar20 * 4);
            do {
              uVar4 = uVar4 + 1;
              *puVar11 = local_48;
              puVar11 = puVar11 + 1;
            } while ((int)uVar4 < (int)uVar24);
          } else {
            do {
              uVar4 = uVar4 + 1;
              iVar20 = iVar20 + 1;
              *puVar17 = local_48;
              puVar17 = puVar17 + 1;
            } while (uVar4 < uVar25);
            if (uVar23 != uVar25)
              goto LAB_00590c56;
          }
        LAB_00590cbe:
          iVar3 = iVar3 + uVar24;
        }
        iVar27 = iVar27 + 1;
      } while (iVar27 < *(int *)(local_84 + lVar21 + -4));
    }
    lVar21 = lVar21 + 4;
    if (lVar21 == 0xc) {
      local_74 = (float)*(ushort *)(this_00 + 0x3a) * DAT_005c0e00 /* R:-0.5f */ * fLevelGridWH;
      local_78 = (float)*(ushort *)(this_00 + 0x38) * DAT_005c0e00 /* R:-0.5f */ * fLevelGridWH;
      Vector2__operator_assign((Vector2 *)(this_00 + 0x30), (Vector2 *)&local_78);
      local_138[0] = this_00 + 0x8d0;
      local_138[1] = this_00 + 0x4a0;
      local_138[2] = this_00 + 0x70;
      local_138[3] = this_00 + 0xd00;
      local_138[4] = this_00 + 0x1140;
      local_138[5] = this_00 + 0x1580;
      local_138[6] = this_00 + 0x1df0;
      local_138[7] = this_00 + 0x19c0;
      File__ReadVariable(local_f8, &local_c8, 4);
      File__ReadVariable(local_f8, local_c4, 4);
      File__ReadVariable(local_f8, local_c0, 4);
      File__ReadVariable(local_f8, local_bc, 4);
      File__ReadVariable(local_f8, local_b8, 4);
      File__ReadVariable(local_f8, local_b4, 4);
      File__ReadVariable(local_f8, local_b0, 4);
      File__ReadVariable(local_f8, local_ac, 4);
      lVar21 = 0;
      iVar3 = 0;
      do {
        self = *(RenderLayer **)((long)local_138 + lVar21 * 2);
        if (0 < *(int *)(local_c4 + lVar21 + -4)) {
          iVar27 = 0;
          lVar15 = (long)iVar3 * 0x68;
          do {
            pRVar19 = (RenderLayerObject *)(lVar15 + *(long *)(this_00 + 0x60));
            File__ReadArray(local_f8, (uchar *)(pRVar19 + 0x24), 3, 4);
            File__ReadArray(local_f8, (uchar *)(pRVar19 + 0x34), 2, 4);
            File__ReadVariable(local_f8, pRVar19 + 0x3c, 4);
            File__ReadVariable(local_f8, pRVar19 + 0x20, 2);
            if (local_68[0] + 0xabb3cfcfU < 2) {
              File__ReadVariable(local_f8, pRVar19 + 0x44, 4);
              File__ReadVariable(local_f8, pRVar19 + 0x48, 4);
              File__ReadArray(local_f8, (uchar *)(pRVar19 + 0x4c), 2, 4);
              File__ReadArray(local_f8, (uchar *)(pRVar19 + 0x54), 2, 4);
            }
            *(TileLevel **)(pRVar19 + 0x60) = this_00;
            RenderLayer__AddObject(self, pRVar19);
            iVar3 = iVar3 + 1;
            *(int *)(this_00 + 0x68) = *(int *)(this_00 + 0x68) + 1;
            iVar27 = iVar27 + 1;
            lVar15 = lVar15 + 0x68;
          } while (iVar27 < *(int *)(local_c4 + lVar21 + -4));
        }
        lVar21 = lVar21 + 4;
      } while (lVar21 != 0x20);
      File__ReadArray(local_f8, (uchar *)(this_00 + 0x22b4), 2, 4);
      File__ReadArray(local_f8, (uchar *)(this_00 + 0x22bc), 2, 4);
      if (fnLevelLoad != (code *)0x0) {
        (*fnLevelLoad)(local_f8, this_00, local_58[0]);
      }
      *(uint32_t *)(this_00 + 0x22c4) = 1;
      File__File__005b7a70(local_f8);
      return this_00;
    }
  } while (true);
}

/* ======================================================================
 * VerifyLevelData  (Ghidra `VerifyLevelData` @ 00591760)
 * Signature: uint8_t __stdcall VerifyLevelData(uchar * arg1, uint arg2)
 * Calls: `File__File`, `File__File__005b7a70`, `File__Read`, `File__ReadArray`, `File__ReadVariable`, `File__Seek`, `RenderLayer__RemoveObject`
 * Called by: (none)
 */
/* WARNING: Type propagation algorithm not settling */
/* TileLevel__VerifyLevelData(unsigned char*, unsigned int) */

uint TileLevel__VerifyLevelData(uchar *arg1, uint arg2)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  int *piVar5;
  uint8_t **local_1c8;
  uint64_t local_1c0;
  uint64_t local_1b8;
  RenderLayer *local_1b0;
  uint8_t local_1a8;
  byte local_1a7;
  uchar local_1a4[24];
  uint32_t local_18c;
  uint32_t local_188;
  uint32_t local_184;
  uint32_t local_180;
  uchar local_17c[20];
  uint64_t local_168;
  uint64_t local_158;
  uint64_t local_150;
  uint32_t local_148;
  uchar *local_140;
  uint local_138;
  uint32_t local_134;
  uint32_t local_130;
  uint32_t local_12c;
  uint32_t local_128;
  uint32_t local_124;
  uint8_t *local_120;
  File local_118[48];
  int local_e8[4];
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  int local_c8[4];
  uint local_b8;
  uint8_t local_b4[4];
  uint8_t local_b0[4];
  uint local_ac;
  uchar local_a8[4];
  uint8_t local_a4[12];
  int local_98[4];
  int local_88[4];
  int local_78[3];
  uint8_t local_6c[4];
  ushort local_68[8];
  ushort local_58[8];
  byte local_48[24];

  local_158 = 0;
  local_150 = 0;
  local_148 = 2;
  local_134 = 1;
  local_130 = 1;
  local_12c = 0;
  local_128 = 0;
  local_124 = 0;
  local_120 = &DAT_005c04cf /* R:7.374579797039071e-39f */;
  local_140 = arg1;
  local_138 = arg2;
  File__File(local_118, (tagFileCreation *)&local_158);
  /* try { // try from 00591826 to 00591874 has its CatchHandler @ 005920dc */
  File__ReadVariable(local_118, local_98, 4);
  if (local_98[0] + 0xabb3cfcfU < 2) {
    /* try { // try from 00591fb5 to 00592019 has its CatchHandler @ 005920dc */
    File__ReadVariable(local_118, local_88, 4);
    if (local_98[0] == 0x544c3032) {
      File__Seek(local_118, arg2 - 4);
      File__ReadVariable(local_118, local_78, 4);
      uVar3 = 0;
      if (local_78[0] != 0x54454e44)
        goto LAB_00591881;
      File__Seek(local_118, 8);
    }
  } else {
    local_88[0] = local_98[0];
    local_98[0] = -1;
  }
  local_48[0] = 0;
  File__ReadVariable(local_118, local_48, 1);
  uVar3 = 0;
  if (local_48[0] == 0xff) {
    /* try { // try from 005918d5 to 005918f7 has its CatchHandler @ 005920dc */
    pvVar1 = operator_new__(0x100);
    File__Read(local_118, pvVar1, local_48[0] + 1);
    if (pvVar1 != (void *)0x0) {
      operator_delete__(pvVar1);
    }
    /* try { // try from 0059191a to 0059196c has its CatchHandler @ 005920da */
    File__ReadVariable(local_118, local_a8, 4);
    File__ReadVariable(local_118, local_a4, 4);
    File__ReadVariable(local_118, local_68, 2);
    File__ReadVariable(local_118, local_58, 2);
    uVar3 = 0;
    if ((local_68[0] < 0x1f5) && (local_58[0] < 0x1f5)) {
      local_c8[0] = 0;
      local_c8[1] = 0;
      local_c8[2] = 0;
      local_c8[3] = 0;
      /* try { // try from 005919d5 to 00591d79 has its CatchHandler @ 005920d8 */
      File__ReadArray(local_118, (uchar *)local_c8, 4, 4);
      File__ReadVariable(local_118, local_6c, 4);
      File__ReadArray(local_118, (uchar *)local_c8, 4, 4);
      File__ReadVariable(local_118, local_6c, 4);
      File__ReadArray(local_118, (uchar *)local_c8, 4, 4);
      File__ReadVariable(local_118, local_6c, 4);
      File__ReadArray(local_118, (uchar *)local_c8, 4, 4);
      File__ReadVariable(local_118, local_6c, 4);
      File__ReadArray(local_118, (uchar *)local_c8, 4, 4);
      File__ReadVariable(local_118, local_6c, 4);
      File__ReadArray(local_118, (uchar *)local_c8, 4, 4);
      File__ReadVariable(local_118, local_6c, 4);
      File__ReadArray(local_118, (uchar *)local_c8, 4, 4);
      File__ReadVariable(local_118, local_6c, 4);
      File__ReadArray(local_118, (uchar *)local_c8, 4, 4);
      File__ReadVariable(local_118, local_6c, 4);
      File__ReadVariable(local_118, &local_b8, 4);
      File__ReadVariable(local_118, local_b4, 4);
      File__ReadVariable(local_118, local_b0, 4);
      puVar4 = &local_b8;
      do {
        if ((uint)local_68[0] * (uint)local_58[0] < *puVar4)
          goto LAB_00592020;
        if (0 < (int)*puVar4) {
          iVar2 = 0;
          do {
            File__ReadVariable(local_118, local_78, 4);
            iVar2 = iVar2 + 1;
          } while (iVar2 < (int)*puVar4);
        }
        puVar4 = puVar4 + 1;
      } while (puVar4 != &local_ac);
      File__ReadVariable(local_118, local_e8, 4);
      if (local_e8[0] < 0x191) {
        File__ReadVariable(local_118, local_e8 + 1, 4);
        if (local_e8[1] < 0x191) {
          File__ReadVariable(local_118, local_e8 + 2, 4);
          if (local_e8[2] < 0x191) {
            File__ReadVariable(local_118, local_e8 + 3, 4);
            if (local_e8[3] < 0x191) {
              File__ReadVariable(local_118, &local_d8, 4);
              if (local_d8 < 0x191) {
                File__ReadVariable(local_118, &local_d4, 4);
                if (local_d4 < 0x191) {
                  File__ReadVariable(local_118, &local_d0, 4);
                  if (local_d0 < 0x191) {
                    File__ReadVariable(local_118, &local_cc, 4);
                    if (local_cc < 0x191) {
                      piVar5 = local_e8;
                      iVar2 = 0;
                      do {
                        if (0 < *piVar5) {
                          uVar3 = 0;
                          if (400 < iVar2)
                            goto LAB_00591881;
                          while (true) {
                            local_1c0 = 0;
                            local_1b8 = 0;
                            local_1b0 = (RenderLayer *)0x0;
                            local_1c8 = &PTR__TileLevelSetPiece_005dd030;
                            local_1a4[0] = '\0';
                            local_1a4[1] = '\0';
                            local_1a4[2] = '\0';
                            local_1a4[3] = '\0';
                            local_1a4[4] = '\0';
                            local_1a4[5] = '\0';
                            local_1a4[6] = '\0';
                            local_1a4[7] = '\0';
                            local_1a4[8] = '\0';
                            local_1a4[9] = '\0';
                            local_1a4[10] = '\0';
                            local_1a4[0xb] = '\0';
                            local_1a4[0xc] = '\0';
                            local_1a4[0xd] = '\0';
                            local_1a4[0xe] = '\0';
                            local_1a4[0xf] = '\0';
                            local_1a4[0x10] = '\0';
                            local_1a4[0x11] = '\0';
                            local_1a4[0x12] = 0x80;
                            local_1a4[0x13] = '?';
                            local_1a4[0x14] = '\0';
                            local_1a4[0x15] = '\0';
                            local_1a4[0x16] = 0x80;
                            local_1a4[0x17] = '?';
                            local_18c = 0;
                            local_188 = 0;
                            local_184 = 0x3f800000;
                            local_180 = 0;
                            local_168 = 0;
                            local_17c[0] = '\0';
                            local_17c[1] = '\0';
                            local_17c[2] = '\0';
                            local_17c[3] = '\0';
                            local_17c[4] = '\0';
                            local_17c[5] = '\0';
                            local_17c[6] = '\0';
                            local_17c[7] = '\0';
                            local_17c[8] = '\0';
                            local_17c[9] = '\0';
                            local_17c[10] = '\0';
                            local_17c[0xb] = '\0';
                            local_17c[0xc] = '\0';
                            local_17c[0xd] = '\0';
                            local_17c[0xe] = '\0';
                            local_17c[0xf] = '\0';
                            local_1a7 = local_1a7 & 0x40;
                            local_1a8 = 0;
                            /* try { // try from 00591ed7 to 00591f9a has its CatchHandler @ 005920b0 */
                            File__ReadArray(local_118, local_1a4, 3, 4);
                            File__ReadArray(local_118, local_1a4 + 0x10, 2, 4);
                            File__ReadVariable(local_118, &local_18c, 4);
                            File__ReadVariable(local_118, &local_1a8, 2);
                            if (local_98[0] + 0xabb3cfcfU < 2) {
                              File__ReadVariable(local_118, &local_184, 4);
                              File__ReadVariable(local_118, &local_180, 4);
                              File__ReadArray(local_118, local_17c, 2, 4);
                              File__ReadArray(local_118, local_17c + 8, 2, 4);
                            }
                            local_1c8 = &PTR__TileLevelSetPiece_005dd030;
                            if (local_1b0 != (RenderLayer *)0x0) {
                              /* try { // try from 00591df0 to 00591df4 has its CatchHandler @ 005920e2 */
                              RenderLayer__RemoveObject(local_1b0, (RenderLayerObject *)&local_1c8);
                            }
                            iVar2 = iVar2 + 1;
                            uVar3 = uVar3 + 1;
                            local_1c8 = &PTR__RenderLayerObject_005be670;
                            if (*piVar5 <= (int)uVar3)
                              break;
                            if (iVar2 == 0x191)
                              goto LAB_00592020;
                          }
                        }
                        piVar5 = piVar5 + 1;
                      } while (piVar5 != local_c8);
                      /* try { // try from 00592059 to 00592099 has its CatchHandler @ 005920d8 */
                      File__ReadArray(local_118, local_a8, 2, 4);
                      File__ReadArray(local_118, local_a8, 2, 4);
                      if (fnLevelVerify == (code *)0x0) {
                        uVar3 = 1;
                      } else {
                        iVar2 = (*fnLevelVerify)(local_118, local_88[0]);
                        uVar3 = (uint)(iVar2 != 0);
                      }
                      goto LAB_00591881;
                    }
                  }
                }
              }
            }
          }
        }
      }
    LAB_00592020:
      uVar3 = 0;
    }
  }
LAB_00591881:
  File__File__005b7a70(local_118);
  return uVar3;
}

/* ======================================================================
 * AddPlayer  (Ghidra `AddPlayer` @ 00595fa0)
 * Signature: uint8_t __stdcall AddPlayer(Joystick * arg1)
 * Calls: `Game_PlayerAdded`
 * Called by: (none)
 */
/* Players__AddPlayer(Joystick*) */

uint64_t Players__AddPlayer(Joystick *arg1)

{
  int iVar1;
  int iVar2;
  Joystick *pJVar3;
  Joystick *pJVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;

  iVar5 = iNumPlayersInitialized;
  if (iNumPlayersInitialized != 4) {
    if (iNumPlayersInitialized < 4) {
      pJVar3 = *(Joystick **)(Player + (long)iNumPlayersInitialized * 0x18 + 8);
      iVar6 = iNumPlayersInitialized;
      pJVar4 = pJVar3;
      while (pJVar4 != arg1) {
        iVar6 = iVar6 + 1;
        if (iVar6 == 4)
          goto LAB_00595feb;
        pJVar4 = *(Joystick **)(Player + (long)iVar6 * 0x18 + 8);
      }
      if (iVar6 != -1) {
        lVar8 = (long)iNumPlayersInitialized * 0x18;
        lVar7 = (long)iVar6 * 0x18;
        *(Joystick **)(Player + lVar8 + 8) = arg1;
        iVar1 = *(int *)(Player + lVar8);
        iVar2 = *(int *)(Player + lVar7);
        *(int *)(Player + lVar8) = iVar2;
        *(uint32_t *)((&UserProfiles)[iVar2] + 0x14) = *(uint32_t *)(Player + lVar7);
        *(uint32_t *)(Player + lVar8 + 0x10) = 1;
        lVar8 = (&UserProfiles)[iVar1];
        *(Joystick **)(Player + lVar7 + 8) = pJVar3;
        *(int *)(Player + lVar7) = iVar1;
        *(int *)(lVar8 + 0x14) = iVar1;
        if (iVar6 != iVar5) {
          *(uint32_t *)(Player + lVar7 + 0x10) = 0;
        }
        Game_PlayerAdded(iVar5);
        iNumPlayersInitialized = iNumPlayersInitialized + 1;
        return 1;
      }
    }
  LAB_00595feb:
    iNumPlayersInitialized = iNumPlayersInitialized + 1;
  }
  return 0;
}

/* ======================================================================
 * InitializeLeaderboardEntry  (Ghidra `InitializeLeaderboardEntry` @ 005b6b90)
 * Signature: uint8_t __stdcall InitializeLeaderboardEntry(LeaderBoardEntry * arg1, uint arg2)
 * Calls: `AllocLeaderboardColumnData`
 * Called by: (none)
 */
/* Leaderboards__InitializeLeaderboardEntry(LeaderBoardEntry*, unsigned int) */

void Leaderboards__InitializeLeaderboardEntry(LeaderBoardEntry *arg1, uint arg2)

{
  uint64_t uVar1;

  *(uint *)(arg1 + 0x10) = arg2;
  uVar1 = AllocLeaderboardColumnData((ulong)arg2 * 0x18);
  *(uint64_t *)(arg1 + 8) = uVar1;
  return;
}

/* ======================================================================
 * FreeLeaderboardEntry  (Ghidra `FreeLeaderboardEntry` @ 005b6bb0)
 * Signature: uint8_t __stdcall FreeLeaderboardEntry(LeaderBoardEntry * arg1)
 * Calls: `FreeLeaderboardColumnData`
 * Called by: (none)
 */
/* Leaderboards__FreeLeaderboardEntry(LeaderBoardEntry*) */

void Leaderboards__FreeLeaderboardEntry(LeaderBoardEntry *arg1)

{
  *(uint32_t *)(arg1 + 0x10) = 0;
  FreeLeaderboardColumnData(*(void **)(arg1 + 8));
  return;
}

/* ======================================================================
 * InitializeLeaderboardRead  (Ghidra `InitializeLeaderboardRead` @ 005b6bc0)
 * Signature: uint8_t __stdcall InitializeLeaderboardRead(LeaderBoardRead * arg1, uint arg2, uint arg3)
 * Calls: `AllocLeaderboardColumnData`
 * Called by: (none)
 */
/* Leaderboards__InitializeLeaderboardRead(LeaderBoardRead*, unsigned int, unsigned int) */

void Leaderboards__InitializeLeaderboardRead(LeaderBoardRead *arg1, uint arg2, uint arg3)

{
  long lVar1;
  long lVar2;

  *(uint *)(arg1 + 0x18) = arg2;
  lVar1 = AllocLeaderboardColumnData((ulong)arg2 * 0x30);
  *(long *)(arg1 + 0x10) = lVar1;
  if (arg2 != 0) {
    lVar2 = 0;
    while (true) {
      *(uint *)(lVar1 + 0x2c + lVar2) = arg3;
      lVar2 = lVar2 + 0x30;
      if (lVar2 == ((ulong)(arg2 - 1) * 3 + 3) * 0x10)
        break;
      lVar1 = *(long *)(arg1 + 0x10);
    }
  }
  return;
}

/* ======================================================================
 * FreeLeaderboardRead  (Ghidra `FreeLeaderboardRead` @ 005b6c20)
 * Signature: uint8_t __stdcall FreeLeaderboardRead(LeaderBoardRead * arg1)
 * Calls: `FreeLeaderboardColumnData`
 * Called by: (none)
 */
/* Leaderboards__FreeLeaderboardRead(LeaderBoardRead*) */

void Leaderboards__FreeLeaderboardRead(LeaderBoardRead *arg1)

{
  uint uVar1;
  long lVar2;

  if (*(int *)(arg1 + 0x18) != 0) {
    lVar2 = 0;
    uVar1 = 0;
    do {
      uVar1 = uVar1 + 1;
      *(uint32_t *)(*(long *)(arg1 + 0x10) + 0x2c + lVar2) = 0;
      lVar2 = lVar2 + 0x30;
    } while (uVar1 < *(uint *)(arg1 + 0x18));
  }
  *(uint32_t *)(arg1 + 0x18) = 0;
  FreeLeaderboardColumnData(*(void **)(arg1 + 0x10));
  return;
}

/* ======================================================================
 * System_GetTimeInMS  (Ghidra `System_GetTimeInMS` @ 005b82f0)
 * Signature: uint8_t System_GetTimeInMS(void)
 * Calls: `gettimeofday`
 * Called by: `ConvertSDLJoystickStateToJoyState`, `FlashAnimationLibrary__FlashAnimationLibrary__00576680`, `GSMBCharactor__CreateCharactor`, `GraphicsBenchmark`, `SMBPalette__SMBPalette__004f3ca0`, `TEngineLoadThreadFunc`, `TEngine__EngineRun`, `TEngine__Render`, `TEngine__TEngine`, `UpdateKeyboard` (+3 more)
 */
int System_GetTimeInMS(void)

{
  timeval local_18;

  gettimeofday(&local_18, (__timezone_ptr_t)0x0);
  return (int)local_18.tv_sec * 1000 + (int)((ulong)local_18.tv_usec / 1000);
}

/* ======================================================================
 * System_PurchaseFullGame  (Ghidra `System_PurchaseFullGame` @ 005b8390)
 * Signature: uint8_t System_PurchaseFullGame(void)
 * Calls: `Game_FullGamePurchased`
 * Called by: `GSMBMenu__ClickPauseOption`, `GSMBMenu__ClickTitleOption`, `SMBChapterMenuUpsell`, `SMBUpsellBuy`, `ShowSaveReplayInterface`
 */
void System_PurchaseFullGame(void)

{
  bTrial = 0;
  Game_FullGamePurchased();
  return;
}

/* ======================================================================
 * ReadSaveGames  (Ghidra `ReadSaveGames` @ 005b8a90)
 * Signature: uint8_t __stdcall ReadSaveGames(char * arg1, FileList * * arg2)
 * Calls: (none)
 * Called by: (none)
 */
/* UnixUserProfile__ReadSaveGames(char const*, FileList**) */

void UnixUserProfile__ReadSaveGames(char *arg1, FileList **arg2)

{
  /* WARNING: Could not recover jumptable at 0x005b8a97. Too many branches */
  /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)arg1 + 0x70))();
  return;
}

/* ======================================================================
 * DeleteSaveGame  (Ghidra `DeleteSaveGame` @ 005b8aa0)
 * Signature: uint8_t __stdcall DeleteSaveGame(char * arg1)
 * Calls: (none)
 * Called by: (none)
 */
/* UnixUserProfile__DeleteSaveGame(char const*) */

void UnixUserProfile__DeleteSaveGame(char *arg1)

{
  /* WARNING: Could not recover jumptable at 0x005b8aa7. Too many branches */
  /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)arg1 + 0x78))();
  return;
}

/* ======================================================================
 * OnLeaderboardFoundRead  (Ghidra `OnLeaderboardFoundRead` @ 005ba320)
 * Signature: uint8_t __stdcall OnLeaderboardFoundRead(LeaderboardFindResult_t * arg1, bool arg2)
 * Calls: `OnLeaderboardFoundReadFinished`, `SteamAPI_IsSteamRunning`, `SteamAPI_RegisterCallResult`, `SteamAPI_UnregisterCallResult`, `SteamUser`, `SteamUserStats`
 * Called by: (none)
 */
/* SteamLeaderBoards__OnLeaderboardFoundRead(LeaderboardFindResult_t*, bool) */

void SteamLeaderBoards__OnLeaderboardFoundRead(LeaderboardFindResult_t *arg1, bool arg2)

{
  int *piVar1;
  char cVar2;
  long *plVar3;
  long lVar4;
  undefined7 in_register_00000031;
  int iVar5;
  int iVar6;
  uint8_t uVar7;

  cVar2 = SteamAPI_IsSteamRunning();
  if (cVar2 != '\0') {
    plVar3 = (long *)SteamUser();
    cVar2 = (**(code **)(*plVar3 + 8))(plVar3);
    if (cVar2 != '\0') {
      piVar1 = *(int **)(arg1 + 0x40);
      uVar7 = 2;
      iVar5 = piVar1[1];
      iVar6 = piVar1[2] + iVar5;
      if ((*piVar1 != 1) && (uVar7 = *piVar1 == 2, (bool)uVar7)) {
        iVar6 = 5;
        iVar5 = -4;
      }
      plVar3 = (long *)SteamUserStats();
      lVar4 = (**(code **)(*plVar3 + 0xe0))(
          plVar3, *(uint64_t *)CONCAT71(in_register_00000031, arg2), uVar7, iVar5, iVar6);
      *(long *)(arg1 + 0x30) = lVar4;
      if (*(long *)(arg1 + 0x88) != 0) {
        SteamAPI_UnregisterCallResult(arg1 + 0x78);
      }
      *(long *)(arg1 + 0x88) = lVar4;
      *(LeaderboardFindResult_t **)(arg1 + 0x90) = arg1;
      *(code **)(arg1 + 0x98) = OnLeaderboardFoundReadFinished;
      *(uint64_t *)(arg1 + 0xa0) = 0;
      if (lVar4 != 0) {
        SteamAPI_RegisterCallResult(arg1 + 0x78, lVar4);
        return;
      }
    }
  }
  return;
}
