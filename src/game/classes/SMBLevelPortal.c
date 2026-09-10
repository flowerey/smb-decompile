/* src/game/classes/SMBLevelPortal.c — 28 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "SMBLevelPortal.h"

/* ======================================================================
 * SMBLevelPortal__SMBLevelPortal  (Ghidra `~SMBLevelPortal` @ 00506400)
 * Signature: uint8_t __thiscall ~SMBLevelPortal(SMBLevelPortal * self)
 * Class: SMBLevelPortal
 * Calls: `FlashAnimationLibrary__FlashAnimationLibrary`, `free`, `operator_delete`
 * Called by: (none)
 */
/* WARNING: Removing unreachable block (ram,0x005064b1) */
/* SMBLevelPortal__SMBLevelPortal() */

void __thiscall SMBLevelPortal__SMBLevelPortal(SMBLevelPortal *self)

{
  allocator *paVar1;
  int *piVar2;
  int iVar3;
  FlashAnimationLibrary *this_00;
  
  free(strPortalUploadQuery);
  if (*(long **)(self + 8) != (long *)0x0) {
                    /* try { // try from 00506429 to 00506447 has its CatchHandler @ 0050649d */
    (**(code **)(**(long **)(self + 8) + 8))();
  }
  this_00 = PortalInterfaceLibrary;
  *(uint64_t *)(self + 8) = 0;
  if (this_00 != (FlashAnimationLibrary *)0x0) {
    FlashAnimationLibrary__FlashAnimationLibrary(this_00);
    operator_delete(this_00);
  }
  PortalInterfaceLibrary = (FlashAnimationLibrary *)0x0;
  paVar1 = (allocator *)(*(long *)(self + 0x70) + -0x18);
  if (paVar1 != (allocator *)&std__string_Rep_S_empty_rep_storage) {
    LOCK();
    piVar2 = (int *)(*(long *)(self + 0x70) + -8);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 < 1) {
      std__string_Rep_M_destroy(paVar1);
    }
  }
  return;
}

/* ======================================================================
 * SMBLevelPortal__UploadPortalLevel  (Ghidra `UploadPortalLevel` @ 005064c0)
 * Signature: uint8_t __thiscall UploadPortalLevel(SMBLevelPortal * self, SMBPortalUpload * arg1)
 * Class: SMBLevelPortal
 * Calls: `File__Read`, `GSuperMeatBoy__getChar`, `SMBEditor__GetCurrentPaletteIndex`, `SQLDatabase__ChooseDatabase`, `SQLDatabase__Connect`, `SQLDatabase__ExecuteQuery`, `SQLDatabase__GetLastAutoIncrementID`, `SQLDatabase__SQLDatabase`, `SQLDatabase__SQLDatabase__005b4540`, `SQLQuery__SQLQuery` (+7 more)
 * Called by: `EditorForm_UploadFormOk`
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SMBLevelPortal__UploadPortalLevel(SMBPortalUpload*) */

void __thiscall SMBLevelPortal__UploadPortalLevel(SMBLevelPortal *self,SMBPortalUpload *arg1)

{
  uint uVar1;
  File *this_00;
  int iVar2;
  uint32_t uVar3;
  long lVar4;
  long *plVar5;
  uint64_t uVar6;
  size_t sVar7;
  void *__ptr;
  int iVar8;
  char cVar9;
  int iVar10;
  char *pcVar11;
  SQLDatabase aSStack_138 [144];
  uint64_t local_a8;
  char *local_a0;
  uint64_t local_98;
  uint local_90;
  uint32_t local_8c;
  uint16_t local_88;
  uint16_t local_86;
  uint64_t local_78;
  char *local_70;
  uint64_t local_68;
  int local_60;
  uint32_t local_5c;
  uint16_t local_58;
  uint16_t local_56;
  char *local_48;
  char *local_40;
  uint8_t *local_38;
  uint32_t local_30;
  
  memset(strPortalUploadQuery,0,0x19000);
  local_30 = 0;
  local_38 = strPortalIP;
  local_48 = "smb_editor_user";
  local_40 = "editor";
  SQLDatabase__SQLDatabase(aSStack_138);
                    /* try { // try from 00506525 to 005065b8 has its CatchHandler @ 005067d3 */
  SQLDatabase__Connect(aSStack_138,(SQLDatabaseConnection *)&local_48);
  SQLDatabase__ChooseDatabase(aSStack_138,"smb_editor");
  uVar3 = SMBEditor__GetCurrentPaletteIndex();
  lVar4 = SteamFriends();
  if (lVar4 == 0) {
    uVar6 = 1;
  }
  else {
    plVar5 = (long *)SteamUser();
    uVar6 = (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  lVar4 = GSuperMeatBoy__getChar(SuperMeatBoy,1);
  Sprint((double)(_DAT_005c0f60 /* R:1.100000023841858f */ * *(float *)(SMBHUD + 0x418)),
         "INSERT INTO smb_editor_levelinfo VALUES (\'\', \'%llu\', \'%s\', 1, 0, 1, 2.5, %.02f, %i, %i, NOW())"
         ,strPortalUploadQuery,uVar6,*(uint64_t *)(arg1 + 8),uVar3,
         *(uint32_t *)(lVar4 + 0xa54));
  local_a8 = 0;
  local_98 = 0;
  local_90 = 0;
  local_8c = 0;
  local_88 = 0;
  local_a0 = strPortalUploadQuery;
  local_86 = 0;
  sVar7 = strlen(strPortalUploadQuery);
  local_90 = (uint)sVar7;
                    /* try { // try from 00506623 to 0050667b has its CatchHandler @ 005067b3 */
  SQLDatabase__ExecuteQuery(aSStack_138,(SQLQuery *)&local_a8,0);
  memset(strPortalUploadQuery,0,(ulong)local_90);
  uVar6 = SQLDatabase__GetLastAutoIncrementID(aSStack_138);
  Sprint("INSERT INTO  smb_editor_leveldata VALUES (%i, \'",strPortalUploadQuery,uVar6);
  this_00 = *(File **)arg1;
  uVar1 = *(uint *)(this_00 + 4);
  __ptr = malloc((ulong)uVar1);
  File__Read(this_00,__ptr,uVar1);
  pcVar11 = strPortalUploadQuery;
  sVar7 = strlen(strPortalUploadQuery);
  iVar8 = 0;
  iVar2 = (int)sVar7;
  if (*(int *)(*(long *)arg1 + 4) != 0) {
    lVar4 = 0;
    do {
      cVar9 = *(char *)((long)__ptr + lVar4);
      if ((cVar9 == '\'') || (cVar9 == '\\')) {
        iVar10 = iVar2 + iVar8;
        iVar8 = iVar8 + 1;
        pcVar11[iVar10] = '\\';
        cVar9 = *(char *)((long)__ptr + lVar4);
        pcVar11 = strPortalUploadQuery;
      }
      iVar10 = iVar2 + iVar8;
      iVar8 = iVar8 + 1;
      pcVar11[iVar10] = cVar9;
      iVar10 = (int)lVar4;
      lVar4 = lVar4 + 1;
      pcVar11 = strPortalUploadQuery;
    } while (iVar10 + 1U < *(uint *)(*(long *)arg1 + 4));
  }
  pcVar11 = pcVar11 + (iVar2 + iVar8);
  if (pcVar11 != "\')") {
    pcVar11[0] = '\'';
    pcVar11[1] = ')';
  }
  free(__ptr);
  local_78 = 0;
  local_68 = 0;
  local_5c = 0;
  local_58 = 0;
  local_56 = 0;
  local_70 = strPortalUploadQuery;
  local_60 = iVar2 + iVar8 + 2;
                    /* try { // try from 0050676e to 00506772 has its CatchHandler @ 005067d8 */
  SQLDatabase__ExecuteQuery(aSStack_138,(SQLQuery *)&local_78,0);
                    /* try { // try from 0050677b to 0050677f has its CatchHandler @ 005067b3 */
  SQLQuery__SQLQuery((SQLQuery *)&local_78);
                    /* try { // try from 00506788 to 0050678c has its CatchHandler @ 005067d3 */
  SQLQuery__SQLQuery((SQLQuery *)&local_a8);
  SQLDatabase__SQLDatabase__005b4540(aSStack_138);
  return;
}

/* ======================================================================
 * SMBLevelPortal__ResetLevelStats  (Ghidra `ResetLevelStats` @ 005067f0)
 * Signature: uint8_t __thiscall ResetLevelStats(SMBLevelPortal * self)
 * Class: SMBLevelPortal
 * Calls: (none)
 * Called by: `MeatBoyCharactor__ResetLevelDeaths`
 */
/* SMBLevelPortal__ResetLevelStats() */

void __thiscall SMBLevelPortal__ResetLevelStats(SMBLevelPortal *self)

{
  *(uint32_t *)(self + 0x18) = 0;
  *(uint32_t *)(self + 0x10) = 0;
  *(uint32_t *)(self + 0x14) = 0;
  return;
}

/* ======================================================================
 * SMBLevelPortal__UpdateLevelStats  (Ghidra `UpdateLevelStats` @ 00506810)
 * Signature: uint8_t __thiscall UpdateLevelStats(SMBLevelPortal * self, PortalLevelStatsUpdate * arg1)
 * Class: SMBLevelPortal
 * Calls: `SQLDatabase__ExecuteQuery`, `SQLQuery__SQLQuery`, `Sprint`, `TPlayer__GetProfile`, `memset`, `strlen`
 * Called by: `TransitionToNextLevel`
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SMBLevelPortal__UpdateLevelStats(PortalLevelStatsUpdate const*) */

void __thiscall
SMBLevelPortal__UpdateLevelStats(SMBLevelPortal *self,PortalLevelStatsUpdate *arg1)

{
  int iVar1;
  size_t sVar2;
  UserProfile *pUVar3;
  int iVar4;
  bool bVar5;
  uint64_t local_58;
  char *local_50;
  uint64_t local_48;
  uint32_t local_40;
  uint32_t local_3c;
  uint16_t local_38;
  uint16_t local_36;
  uint32_t local_28;
  uint32_t local_24;
  
  if ((*(int *)(self + (ulong)*(uint *)arg1 * 4 + 0x20) == -1) || (0x13 < *(uint *)arg1)) {
    return;
  }
  memset(strPortalUploadQuery,0,0x19000);
  iVar1 = *(int *)(self + 0x18);
  iVar4 = 5;
  if (((iVar1 < 0x1a) && (iVar4 = 4, 4 < iVar1 - 0x15U)) && (iVar4 = 3, 4 < iVar1 - 0x10U)) {
    iVar4 = ~-(uint)(iVar1 - 0xbU < 5) + 2;
  }
  Sprint((double)*(float *)(self + 0x10),
         "UPDATE smb_editor_levelinfo SET num_fun_ratings = num_fun_ratings + %i, \t\t\t\t\t\t\t\t\t\t  raw_fun_ratings = raw_fun_ratings + %.02f, times_died = times_died + %i, \t\t\t\t\t\t\t\t\t\t  times_played = times_played + 1 WHERE level_id = %i"
         ,strPortalUploadQuery,*(int *)(self + 0x14) == 1,iVar4,
         *(uint32_t *)(self + (ulong)*(uint *)arg1 * 4 + 0x20));
  local_58 = 0;
  local_48 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_50 = strPortalUploadQuery;
  local_36 = 0;
  sVar2 = strlen(strPortalUploadQuery);
  local_40 = (uint32_t)sVar2;
  local_36 = 1;
                    /* try { // try from 005068e2 to 005068e6 has its CatchHandler @ 00506b26 */
  SQLDatabase__ExecuteQuery(pPortalConnection,(SQLQuery *)&local_58,0);
  *(uint32_t *)(self + 0x18) = 0;
  *(uint32_t *)(self + 0x10) = 0;
  *(uint32_t *)(self + 0x14) = 0;
  iVar4 = christmasLevels;
  iVar1 = *(int *)(self + (ulong)*(uint *)arg1 * 4 + 0x20);
  bVar5 = _DAT_008171e4 /* R:7.798225953967607e-42f */ == iVar1;
  if (bVar5) {
    local_28 = 1;
    local_24 = 0x2e;
    pUVar3 = (UserProfile *)TPlayer__GetProfile((TPlayer *)Players__Player);
    Achievements__AwardAchievement(pUVar3,(AchievementAward *)&local_28);
    christmasLevels = 1;
  }
  bVar5 = bVar5 || iVar4 != 0;
  if (DAT_008171ec /* R:7.799627252431932e-42f */ == iVar1) {
    local_28 = 1;
    local_24 = 0x2e;
    pUVar3 = (UserProfile *)TPlayer__GetProfile((TPlayer *)Players__Player);
    Achievements__AwardAchievement(pUVar3,(AchievementAward *)&local_28);
    DAT_008171e8 /* R:0.0f */ = 1;
  }
  else if (DAT_008171e8 /* R:0.0f */ == 0) {
    bVar5 = false;
  }
  if (DAT_008171f4 /* R:7.801028550896257e-42f */ == iVar1) {
    local_28 = 1;
    local_24 = 0x2e;
    pUVar3 = (UserProfile *)TPlayer__GetProfile((TPlayer *)Players__Player);
    Achievements__AwardAchievement(pUVar3,(AchievementAward *)&local_28);
    DAT_008171f0 /* R:0.0f */ = 1;
  }
  else if (DAT_008171f0 /* R:0.0f */ == 0) {
    bVar5 = false;
  }
  if (DAT_008171fc /* R:7.802429849360581e-42f */ == iVar1) {
    local_28 = 1;
    local_24 = 0x2e;
    pUVar3 = (UserProfile *)TPlayer__GetProfile((TPlayer *)Players__Player);
    Achievements__AwardAchievement(pUVar3,(AchievementAward *)&local_28);
    DAT_008171f8 /* R:0.0f */ = 1;
  }
  else if (DAT_008171f8 /* R:0.0f */ == 0) {
    bVar5 = false;
  }
  if (DAT_00817204 /* R:7.803831147824906e-42f */ == iVar1) {
    local_28 = 1;
    local_24 = 0x2e;
                    /* try { // try from 005069e5 to 00506b16 has its CatchHandler @ 00506b26 */
    pUVar3 = (UserProfile *)TPlayer__GetProfile((TPlayer *)Players__Player);
    Achievements__AwardAchievement(pUVar3,(AchievementAward *)&local_28);
    DAT_00817200 /* R:0.0f */ = 1;
  }
  else if (DAT_00817200 /* R:0.0f */ == 0) goto LAB_00506989;
  if (bVar5) {
    local_28 = 1;
    local_24 = 0x2f;
    pUVar3 = (UserProfile *)TPlayer__GetProfile((TPlayer *)Players__Player);
    Achievements__AwardAchievement(pUVar3,(AchievementAward *)&local_28);
  }
LAB_00506989:
  SQLQuery__SQLQuery((SQLQuery *)&local_58);
  return;
}

/* ======================================================================
 * SMBLevelPortal__SetLevelDeaths  (Ghidra `SetLevelDeaths` @ 00506b40)
 * Signature: uint8_t __thiscall SetLevelDeaths(SMBLevelPortal * self, int arg1)
 * Class: SMBLevelPortal
 * Calls: (none)
 * Called by: `GSuperMeatBoy__BeatLevel`
 */
/* SMBLevelPortal__SetLevelDeaths(int) */

void __thiscall SMBLevelPortal__SetLevelDeaths(SMBLevelPortal *self,int arg1)

{
  *(int *)(self + 0x18) = arg1;
  return;
}

/* ======================================================================
 * SMBLevelPortal__IncrementCurrentRating  (Ghidra `IncrementCurrentRating` @ 00506b50)
 * Signature: uint8_t __thiscall IncrementCurrentRating(SMBLevelPortal * self)
 * Class: SMBLevelPortal
 * Calls: (none)
 * Called by: `IncrementCurrentInternetsRating`
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SMBLevelPortal__IncrementCurrentRating() */

void __thiscall SMBLevelPortal__IncrementCurrentRating(SMBLevelPortal *self)

{
  uint32_t uVar1;
  float fVar2;
  
  uVar1 = _DAT_005bff44 /* R:5.0f */;
  if (*(float *)(self + 0x10) < DAT_005c17e8 /* R:4.0f */) {
    fVar2 = *(float *)(self + 0x10) + DAT_005be894 /* R:1.0f */;
    *(uint32_t *)(self + 0x14) = 1;
    *(float *)(self + 0x10) = fVar2;
    return;
  }
  *(uint32_t *)(self + 0x14) = 1;
  *(uint32_t *)(self + 0x10) = uVar1;
  return;
}

/* ======================================================================
 * SMBLevelPortal__DecrementCurrentRating  (Ghidra `DecrementCurrentRating` @ 00506ba0)
 * Signature: uint8_t __thiscall DecrementCurrentRating(SMBLevelPortal * self)
 * Class: SMBLevelPortal
 * Calls: (none)
 * Called by: `DecrementCurrentInternetsRating`
 */
/* SMBLevelPortal__DecrementCurrentRating() */

void __thiscall SMBLevelPortal__DecrementCurrentRating(SMBLevelPortal *self)

{
  float fVar1;
  
  if (DAT_005be894 /* R:1.0f */ < *(float *)(self + 0x10)) {
    fVar1 = *(float *)(self + 0x10) - DAT_005be894 /* R:1.0f */;
    *(uint32_t *)(self + 0x14) = 1;
    *(float *)(self + 0x10) = fVar1;
    return;
  }
  *(uint32_t *)(self + 0x14) = 1;
  *(uint32_t *)(self + 0x10) = 0;
  return;
}

/* ======================================================================
 * SMBLevelPortal__GetPortalLevel  (Ghidra `GetPortalLevel` @ 00506be0)
 * Signature: uint8_t __thiscall GetPortalLevel(SMBLevelPortal * self, int arg1, SMBPortalLevel * * arg2)
 * Class: SMBLevelPortal
 * Calls: `SQLDatabase__ChooseDatabase`, `SQLDatabase__Connect`, `SQLDatabase__ExecuteQuery`, `SQLDatabase__SQLDatabase`, `SQLDatabase__SQLDatabase__005b4540`, `SQLQuery__SQLQuery`, `SQLResultSet__GetBlob`, `SQLResultSet__GetFLOAT`, `SQLResultSet__GetINT`, `SQLResultSet__GetString` (+5 more)
 * Called by: (none)
 */
/* SMBLevelPortal__GetPortalLevel(int, SMBPortalLevel**) */

void __thiscall
SMBLevelPortal__GetPortalLevel(SMBLevelPortal *self,int arg1,SMBPortalLevel **arg2)

{
  int iVar1;
  size_t sVar2;
  SMBPortalLevel *pSVar3;
  SQLDatabase aSStack_168 [144];
  uint64_t local_d8;
  char *local_d0;
  SQLResultSet *local_c8;
  uint32_t local_c0;
  uint32_t local_bc;
  uint16_t local_b8;
  uint16_t local_b6;
  char *local_a8;
  char *local_a0;
  uint8_t *local_98;
  uint32_t local_90;
  char *local_88;
  uint32_t local_80;
  char *local_78;
  uint32_t local_70;
  char *local_68;
  uint32_t local_60;
  uint8_t *local_58;
  uint32_t local_50;
  char *local_48;
  uint32_t local_40;
  SMBPortalLevel *local_38;
  uchar *local_30;
  int local_28 [3];
  uint local_1c [3];
  
  local_90 = 0;
  local_98 = strPortalIP;
  local_a8 = "smb_editor_user";
  local_a0 = "editor";
  SQLDatabase__SQLDatabase(aSStack_168);
                    /* try { // try from 00506c30 to 00506c58 has its CatchHandler @ 00506f02 */
  SQLDatabase__Connect(aSStack_168,(SQLDatabaseConnection *)&local_a8);
  SQLDatabase__ChooseDatabase(aSStack_168,"smb_editor");
  Sprint("SELECT smb_editor_levelinfo.*, smb_editor_leveldata.level_data,  times_died / times_played AS difficulty FROM \t\t\t\t\t\t\t\t\t   smb_editor_levelinfo, smb_editor_leveldata WHERE \t\t\t\t\t\t\t\t\t   smb_editor_levelinfo.level_id = %i AND smb_editor_leveldata.level_id = %i"
         ,strPortalUploadQuery,arg1,arg1);
  local_d8 = 0;
  local_c8 = (SQLResultSet *)0x0;
  local_c0 = 0;
  local_bc = 0;
  local_b8 = 0;
  local_d0 = strPortalUploadQuery;
  local_b6 = 0;
  sVar2 = strlen(strPortalUploadQuery);
  local_c0 = (uint32_t)sVar2;
                    /* try { // try from 00506cc3 to 00506cdc has its CatchHandler @ 00506f27 */
  SQLDatabase__ExecuteQuery(aSStack_168,(SQLQuery *)&local_d8,0);
  do {
    iVar1 = SQLResultSet__NextRow(local_c8);
    if (iVar1 != 1) goto LAB_00506ee3;
    local_80 = 0xffffffff;
    local_88 = "level_data";
    local_70 = 0xffffffff;
    local_78 = "levelname";
    local_60 = 0xffffffff;
    local_68 = "char_id";
    local_50 = 0xffffffff;
    local_58 = &DAT_005c0952 /* R:1.0504200550905116e-38f */;
    local_40 = 0xffffffff;
    local_48 = "difficulty";
    local_1c[0] = 0;
                    /* try { // try from 00506d84 to 00506ed1 has its CatchHandler @ 00506f15 */
    SQLResultSet__GetBlob(local_c8,(SQLFieldName *)&local_88,&local_30,local_1c);
    iVar1 = TileLevel__VerifyLevelData(local_30,local_1c[0]);
  } while (iVar1 != 1);
  pSVar3 = operator_new(0x78);
  *(uint64_t *)pSVar3 = 0;
  *(uint32_t *)(pSVar3 + 0x14) = 0;
  *(uint32_t *)(pSVar3 + 0x18) = 0x4cbebc20;
  *(uint32_t *)(pSVar3 + 0x1c) = 0;
  *(uint32_t *)(pSVar3 + 0x20) = 0;
  *(uint32_t *)(pSVar3 + 100) = 0;
  *(uint32_t *)(pSVar3 + 0x68) = 0xffffffff;
  *(uint32_t *)(pSVar3 + 0x6c) = 0xffffffff;
  *(uint32_t *)(pSVar3 + 0x70) = 0;
  *(uint32_t *)(pSVar3 + 0x74) = 0;
  *(uchar **)(pSVar3 + 8) = local_30;
  *(uint *)(pSVar3 + 0x10) = local_1c[0];
  SQLResultSet__GetString(local_c8,(SQLFieldName *)&local_78,(char **)&local_38,(uint *)0x0);
  local_28[0] = 0;
  SQLResultSet__GetINT(local_c8,(SQLFieldName *)&local_68,local_28,(uint *)0x0);
  *(int *)(pSVar3 + 0x14) = local_28[0];
  if (local_38 != pSVar3 + 0x44) {
    *(uint64_t *)(pSVar3 + 0x44) = *(uint64_t *)local_38;
    *(uint64_t *)(pSVar3 + 0x4c) = *(uint64_t *)(local_38 + 8);
    *(uint64_t *)(pSVar3 + 0x54) = *(uint64_t *)(local_38 + 0x10);
    *(uint64_t *)(pSVar3 + 0x5c) = *(uint64_t *)(local_38 + 0x18);
  }
  *(int *)(pSVar3 + 0x70) = local_28[0];
  SQLResultSet__GetFLOAT(local_c8,(SQLFieldName *)&local_58,(float *)(pSVar3 + 100),(uint *)0x0);
  SQLResultSet__GetFLOAT(local_c8,(SQLFieldName *)&local_48,(float *)(pSVar3 + 0x74),(uint *)0x0);
  free(local_38);
  *arg2 = pSVar3;
LAB_00506ee3:
                    /* try { // try from 00506eeb to 00506eef has its CatchHandler @ 00506f02 */
  SQLQuery__SQLQuery((SQLQuery *)&local_d8);
  SQLDatabase__SQLDatabase__005b4540(aSStack_168);
  return;
}

/* ======================================================================
 * SMBLevelPortal__DestroyPortalLevel  (Ghidra `DestroyPortalLevel` @ 00507360)
 * Signature: uint8_t __thiscall DestroyPortalLevel(SMBLevelPortal * self, SMBPortalLevel * * arg1)
 * Class: SMBLevelPortal
 * Calls: `free`, `operator_delete`
 * Called by: (none)
 */
/* SMBLevelPortal__DestroyPortalLevel(SMBPortalLevel**) */

void __thiscall SMBLevelPortal__DestroyPortalLevel(SMBLevelPortal *self,SMBPortalLevel **arg1)

{
  SMBPortalLevel *pSVar1;
  
  if (arg1 != (SMBPortalLevel **)0x0) {
    pSVar1 = *arg1;
    if (pSVar1 != (SMBPortalLevel *)0x0) {
      if (*(void **)(pSVar1 + 8) != (void *)0x0) {
        free(*(void **)(pSVar1 + 8));
        if (*(long *)(pSVar1 + 8) != 0) {
          free(*(void **)pSVar1);
        }
      }
      operator_delete(pSVar1);
    }
    *arg1 = (SMBPortalLevel *)0x0;
  }
  return;
}

/* ======================================================================
 * SMBLevelPortal__GetPortalChapter  (Ghidra `GetPortalChapter` @ 005073c0)
 * Signature: uint8_t __thiscall GetPortalChapter(SMBLevelPortal * self, int arg1, SMBPortalChapter * * arg2)
 * Class: SMBLevelPortal
 * Calls: `SQLDatabase__ChooseDatabase`, `SQLDatabase__Connect`, `SQLDatabase__ExecuteQuery`, `SQLDatabase__SQLDatabase`, `SQLDatabase__SQLDatabase__005b4540`, `SQLQuery__SQLQuery`, `SQLResultSet__GetINT`, `SQLResultSet__GetString`, `SQLResultSet__NextRow`, `Sprint` (+2 more)
 * Called by: `GetPortalChapter`
 */
/* SMBLevelPortal__GetPortalChapter(int, SMBPortalChapter**) */

void __thiscall
SMBLevelPortal__GetPortalChapter(SMBLevelPortal *self,int arg1,SMBPortalChapter **arg2)

{
  int iVar1;
  size_t sVar2;
  SMBPortalChapter *pSVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  SMBPortalChapter *pSVar7;
  bool bVar8;
  byte bVar9;
  SQLDatabase aSStack_188 [144];
  uint64_t local_f8;
  char *local_f0;
  SQLResultSet *local_e8;
  uint32_t local_e0;
  uint32_t local_dc;
  uint16_t local_d8;
  uint16_t local_d6;
  uint64_t local_c8;
  char *local_c0;
  SQLResultSet *local_b8;
  uint32_t local_b0;
  uint32_t local_ac;
  uint16_t local_a8;
  uint16_t local_a6;
  char *local_98;
  char *local_90;
  uint8_t *local_88;
  uint32_t local_80;
  char *local_78;
  uint32_t local_70;
  char *local_68;
  uint32_t local_60;
  char *local_58;
  uint32_t local_50;
  int local_48 [6];
  
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
  local_80 = 0;
  local_88 = strPortalIP;
  local_98 = "smb_editor_user";
  local_90 = "editor";
  SQLDatabase__SQLDatabase(aSStack_188);
                    /* try { // try from 0050746b to 00507491 has its CatchHandler @ 005077dd */
  SQLDatabase__Connect(aSStack_188,(SQLDatabaseConnection *)&local_98);
  SQLDatabase__ChooseDatabase(aSStack_188,"smb_editor");
  Sprint("SELECT * FROM smb_editor_chapterinfo WHERE chapter_id = %i",strPortalUploadQuery,arg1);
  local_f8 = 0;
  local_e8 = (SQLResultSet *)0x0;
  local_e0 = 0;
  local_dc = 0;
  local_d8 = 0;
  local_f0 = strPortalUploadQuery;
  local_d6 = 0;
  sVar2 = strlen(strPortalUploadQuery);
  local_e0 = (uint32_t)sVar2;
                    /* try { // try from 005074fc to 0050750d has its CatchHandler @ 005077db */
  SQLDatabase__ExecuteQuery(aSStack_188,(SQLQuery *)&local_f8,0);
  iVar1 = SQLResultSet__NextRow(local_e8);
  if (iVar1 == 1) {
                    /* try { // try from 00507545 to 00507549 has its CatchHandler @ 005077db */
    pSVar3 = operator_new(0xb0);
    bVar8 = ((ulong)pSVar3 & 1) != 0;
    *(uint64_t *)(pSVar3 + 0xa0) = 0;
    *(uint32_t *)(pSVar3 + 0xa8) = 0xffffffff;
    uVar5 = 0xa0;
    pSVar7 = pSVar3;
    if (bVar8) {
      *pSVar3 = (SMBPortalChapter)0x0;
      pSVar7 = pSVar3 + 1;
      uVar5 = 0x9f;
    }
    if (((ulong)pSVar7 & 2) != 0) {
      *(uint16_t *)pSVar7 = 0;
      uVar5 = (ulong)((int)uVar5 - 2);
      pSVar7 = pSVar7 + 2;
    }
    if (((ulong)pSVar7 & 4) != 0) {
      *(uint32_t *)pSVar7 = 0;
      uVar5 = (ulong)((int)uVar5 - 4);
      pSVar7 = pSVar7 + 4;
    }
    for (uVar4 = uVar5 >> 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(uint64_t *)pSVar7 = 0;
      pSVar7 = pSVar7 + (ulong)bVar9 * -0x10 + 8;
    }
    if ((uVar5 & 4) != 0) {
      *(uint32_t *)pSVar7 = 0;
      pSVar7 = pSVar7 + 4;
    }
    if ((uVar5 & 2) != 0) {
      *(uint16_t *)pSVar7 = 0;
      pSVar7 = pSVar7 + 2;
    }
    if (bVar8) {
      *pSVar7 = (SMBPortalChapter)0x0;
    }
    local_70 = 0xffffffff;
    local_78 = "chaptername";
    local_60 = 0xffffffff;
    local_68 = "chaptermusic";
                    /* try { // try from 005075f2 to 00507629 has its CatchHandler @ 005077ae */
    SQLResultSet__GetString(local_e8,(SQLFieldName *)&local_78,(char **)(pSVar3 + 0xa0),(uint *)0x0)
    ;
    SQLResultSet__GetINT(local_e8,(SQLFieldName *)&local_68,(int *)(pSVar3 + 0xa8),(uint *)0x0);
    Sprint("SELECT * FROM smb_editor_chapterlevels WHERE chapter_id = %i ORDER BY ordering ASC",
           strPortalUploadQuery,arg1);
    local_c8 = 0;
    local_b8 = (SQLResultSet *)0x0;
    local_b0 = 0;
    local_ac = 0;
    local_a8 = 0;
    local_c0 = strPortalUploadQuery;
    local_a6 = 0;
    sVar2 = strlen(strPortalUploadQuery);
    local_b0 = (uint32_t)sVar2;
    local_50 = 0xffffffff;
    local_58 = "level_id";
                    /* try { // try from 005076ae to 005076cd has its CatchHandler @ 005077ce */
    SQLDatabase__ExecuteQuery(aSStack_188,(SQLQuery *)&local_c8,0);
    for (lVar6 = 0; lVar6 != 0x14; lVar6 = lVar6 + 1) {
      do {
                    /* try { // try from 005076e8 to 0050773b has its CatchHandler @ 005077ce */
        iVar1 = SQLResultSet__NextRow(local_b8);
        if (iVar1 != 1) goto LAB_005076ce;
        local_48[0] = -1;
        SQLResultSet__GetINT(local_b8,(SQLFieldName *)&local_58,local_48,(uint *)0x0);
        *(int *)(self + lVar6 * 4 + 0x20) = local_48[0];
      } while (local_48[0] == -1);
      GetPortalLevel(self,local_48[0],(SMBPortalLevel **)(pSVar3 + (long)(int)lVar6 * 8));
    }
    SQLResultSet__NextRow(local_b8);
LAB_005076ce:
    *arg2 = pSVar3;
                    /* try { // try from 005076d5 to 005076d9 has its CatchHandler @ 005077ae */
    SQLQuery__SQLQuery((SQLQuery *)&local_c8);
  }
                    /* try { // try from 00507520 to 00507524 has its CatchHandler @ 005077dd */
  SQLQuery__SQLQuery((SQLQuery *)&local_f8);
  SQLDatabase__SQLDatabase__005b4540(aSStack_188);
  return;
}

/* ======================================================================
 * SMBLevelPortal__ShowPortalDisplayMenu  (Ghidra `ShowPortalDisplayMenu` @ 005077f0)
 * Signature: uint8_t __thiscall ShowPortalDisplayMenu(SMBLevelPortal * self, tagPortalDisplayMode arg1)
 * Class: SMBLevelPortal
 * Calls: (none)
 * Called by: (none)
 */
/* SMBLevelPortal__ShowPortalDisplayMenu(tagPortalDisplayMode) */

void __thiscall SMBLevelPortal__ShowPortalDisplayMenu(SMBLevelPortal *self,uint32_t arg2)

{
  *(uint32_t *)self = arg2;
  return;
}

/* ======================================================================
 * SMBLevelPortal__Render  (Ghidra `Render` @ 00507800)
 * Signature: uint8_t __thiscall Render(SMBLevelPortal * self)
 * Class: SMBLevelPortal
 * Calls: (none)
 * Called by: `GSMBMenu__Render`
 */
/* SMBLevelPortal__Render() */

void __thiscall SMBLevelPortal__Render(SMBLevelPortal *self)

{
                    /* WARNING: Could not recover jumptable at 0x0050780b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(self + 8) + 0x40))();
  return;
}

/* ======================================================================
 * SMBLevelPortal__Update  (Ghidra `Update` @ 00507810)
 * Signature: uint8_t __thiscall Update(SMBLevelPortal * self)
 * Class: SMBLevelPortal
 * Calls: (none)
 * Called by: `GSMBMenu__Update`
 */
/* SMBLevelPortal__Update() */

void __thiscall SMBLevelPortal__Update(SMBLevelPortal *self)

{
                    /* WARNING: Could not recover jumptable at 0x0050781b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(self + 8) + 0x38))();
  return;
}

/* ======================================================================
 * SMBLevelPortal__LoadSelectedLevel  (Ghidra `LoadSelectedLevel` @ 00507820)
 * Signature: uint8_t __thiscall LoadSelectedLevel(SMBLevelPortal * self, uchar * * arg1, uint * arg2)
 * Class: SMBLevelPortal
 * Calls: `GSuperMeatBoy__DeferLoadCharactor`, `strlen`
 * Called by: `SMBChapter__LoadNextLevel`
 */
/* SMBLevelPortal__LoadSelectedLevel(unsigned char**, unsigned int*) */

void __thiscall
SMBLevelPortal__LoadSelectedLevel(SMBLevelPortal *self,uchar **arg1,uint *arg2)

{
  int *piVar1;
  char *__s;
  
  piVar1 = *(int **)(*(long *)(self + 8) + 0x1bb0);
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
  *(int *)(self + 0x20) = *piVar1;
  GetPortalLevel(SuperMeatBoyPortal,*piVar1,(SMBPortalLevel **)&LoadedPortalLevel);
  __s = (char *)(LoadedPortalLevel + 0x44);
  strlen(__s);
  std__string_assign((char *)(self + 0x70),(ulong)__s);
  GSuperMeatBoy__DeferLoadCharactor(SuperMeatBoy,piVar1[0xa5]);
  *arg1 = *(uchar **)(LoadedPortalLevel + 8);
  *arg2 = *(uint *)(LoadedPortalLevel + 0x10);
  return;
}

/* ======================================================================
 * SMBLevelPortal__GetSingleLoadedLevelName  (Ghidra `GetSingleLoadedLevelName` @ 00507910)
 * Signature: uint8_t __thiscall GetSingleLoadedLevelName(SMBLevelPortal * self)
 * Class: SMBLevelPortal
 * Calls: (none)
 * Called by: `GMeatHUD__SetInGameHudLevelName`
 */
/* SMBLevelPortal__GetSingleLoadedLevelName() */

uint64_t __thiscall SMBLevelPortal__GetSingleLoadedLevelName(SMBLevelPortal *self)

{
  return *(uint64_t *)(self + 0x70);
}

/* ======================================================================
 * SMBLevelPortal__LoadSelectedChapter  (Ghidra `LoadSelectedChapter` @ 00507920)
 * Signature: uint8_t __thiscall LoadSelectedChapter(SMBLevelPortal * self)
 * Class: SMBLevelPortal
 * Calls: `GetPortalChapter`, `SMBChapter__LoadInternetsChapterMusic`, `SQLDatabase__ChooseDatabase`, `SQLDatabase__Connect`, `SQLDatabase__ExecuteQuery`, `SQLDatabase__SQLDatabase`, `SQLDatabase__SQLDatabase__005b4540`, `SQLQuery__SQLQuery`, `SQLResultSet__GetINT`, `SQLResultSet__NextRow` (+5 more)
 * Called by: `GSMBMenu__TransitionOutReloadChapter`
 */
/* SMBLevelPortal__LoadSelectedChapter() */

void __thiscall SMBLevelPortal__LoadSelectedChapter(SMBLevelPortal *self)

{
  SMBPortalLevel *pSVar1;
  int iVar2;
  SMBPortalLevel **ppSVar3;
  SMBPortalLevel *pSVar4;
  size_t sVar5;
  SMBPortalLevel **ppSVar6;
  _func_bool_SMBPortalLevel_ptr_SMBPortalLevel_ptr *p_Var7;
  SMBPortalLevel **ppSVar8;
  ulong uVar9;
  _func_bool_SMBPortalLevel_ptr_SMBPortalLevel_ptr *extraout_RDX;
  long *plVar10;
  SMBPortalLevel **ppSVar11;
  int iVar12;
  bool bVar13;
  byte bVar14;
  SQLDatabase aSStack_128 [144];
  uint64_t local_98;
  char *local_90;
  SQLResultSet *local_88;
  uint32_t local_80;
  uint32_t local_7c;
  uint16_t local_78;
  uint16_t local_76;
  char *local_68;
  char *local_60;
  uint8_t *local_58;
  uint32_t local_50;
  char *local_48;
  uint32_t local_40;
  int local_38 [6];
  
  bVar14 = 0;
  plVar10 = *(long **)(self + 8);
  iVar12 = *(int *)((long)plVar10 + 0x376c);
  if (((iVar12 == 1) || (iVar12 == 0)) || (iVar12 == 2)) {
    GetPortalChapter((int)self,(SMBPortalChapter **)(ulong)*(uint *)plVar10[0x376]);
    SMBChapter__LoadInternetsChapterMusic
              ((SMBChapter *)(SuperMeatBoy + 0x90),*(int *)(LoadedPortalChapter + 0x15));
    plVar10 = *(long **)(self + 8);
  }
  else if (iVar12 == 4) {
    local_50 = 0;
    local_58 = strPortalIP;
    local_68 = "smb_editor_user";
    local_60 = "editor";
    SQLDatabase__SQLDatabase(aSStack_128);
                    /* try { // try from 005079dc to 00507ae0 has its CatchHandler @ 00507cf5 */
    SQLDatabase__Connect(aSStack_128,(SQLDatabaseConnection *)&local_68);
    SQLDatabase__ChooseDatabase(aSStack_128,"smb_editor");
    ppSVar3 = operator_new(0xb0);
    bVar13 = ((ulong)ppSVar3 & 1) != 0;
    ppSVar3[0x14] = (SMBPortalLevel *)0x0;
    *(uint32_t *)(ppSVar3 + 0x15) = 0xffffffff;
    uVar9 = 0xa0;
    ppSVar11 = ppSVar3;
    if (bVar13) {
      *(uint8_t *)ppSVar3 = 0;
      ppSVar11 = (SMBPortalLevel **)((long)ppSVar3 + 1);
      uVar9 = 0x9f;
    }
    if (((ulong)ppSVar11 & 2) != 0) {
      *(uint16_t *)ppSVar11 = 0;
      uVar9 = (ulong)((int)uVar9 - 2);
      ppSVar11 = (SMBPortalLevel **)((long)ppSVar11 + 2);
    }
    if (((ulong)ppSVar11 & 4) != 0) {
      *(uint32_t *)ppSVar11 = 0;
      uVar9 = (ulong)((int)uVar9 - 4);
      ppSVar11 = (SMBPortalLevel **)((long)ppSVar11 + 4);
    }
    for (p_Var7 = (_func_bool_SMBPortalLevel_ptr_SMBPortalLevel_ptr *)(uVar9 >> 3);
        p_Var7 != (_func_bool_SMBPortalLevel_ptr_SMBPortalLevel_ptr *)0x0; p_Var7 = p_Var7 + -1) {
      *ppSVar11 = (SMBPortalLevel *)0x0;
      ppSVar11 = ppSVar11 + (ulong)bVar14 * -2 + 1;
    }
    if ((uVar9 & 4) != 0) {
      *(uint32_t *)ppSVar11 = 0;
      ppSVar11 = (SMBPortalLevel **)((long)ppSVar11 + 4);
    }
    if ((uVar9 & 2) != 0) {
      *(uint16_t *)ppSVar11 = 0;
      ppSVar11 = (SMBPortalLevel **)((long)ppSVar11 + 2);
    }
    if (bVar13) {
      *(uint8_t *)ppSVar11 = 0;
    }
    pSVar4 = malloc(0x20);
    ppSVar3[0x14] = pSVar4;
    *(uint64_t *)pSVar4 = 0;
    *(uint64_t *)(pSVar4 + 8) = 0;
    *(uint64_t *)(pSVar4 + 0x10) = 0;
    *(uint64_t *)(pSVar4 + 0x18) = 0;
    if ((GetEnterTheUnknownChapter(SMBPortalChapter**)::iEnterUnknownLength == '\0') &&
       (iVar12 = __cxa_guard_acquire(&GetEnterTheUnknownChapter(SMBPortalChapter**)::
                                      iEnterUnknownLength), iVar12 != 0)) {
      GetEnterTheUnknownChapter(SMBPortalChapter**)::iEnterUnknownLength = 0x11;
      __cxa_guard_release(&GetEnterTheUnknownChapter(SMBPortalChapter**)::iEnterUnknownLength);
    }
    if (ppSVar3[0x14] != (SMBPortalLevel *)"Enter the Unknown") {
      memcpy(ppSVar3[0x14],"Enter the Unknown",
             (long)GetEnterTheUnknownChapter(SMBPortalChapter**)::iEnterUnknownLength);
    }
    Sprint((double)*(float *)(self + 0x1c),
           "SELECT level_id, times_died / times_played AS difficulty \t\t\t\t\t\t\t\t\t\t   FROM smb_editor_levelinfo WHERE raw_fun_ratings / num_fun_ratings >= 3.0 AND \t\t\t\t\t\t\t\t\t\t   times_died / times_played <= %.02f AND times_played > 10 ORDER BY RAND() LIMIT 20"
           ,strPortalUploadQuery);
    local_98 = 0;
    local_88 = (SQLResultSet *)0x0;
    local_80 = 0;
    local_7c = 0;
    local_78 = 0;
    local_90 = strPortalUploadQuery;
    local_76 = 0;
    sVar5 = strlen(strPortalUploadQuery);
    local_80 = (uint32_t)sVar5;
    local_40 = 0xffffffff;
    local_48 = "level_id";
                    /* try { // try from 00507b62 to 00507b7c has its CatchHandler @ 00507d08 */
    SQLDatabase__ExecuteQuery(aSStack_128,(SQLQuery *)&local_98,0);
    iVar12 = 0;
    do {
      do {
        iVar2 = SQLResultSet__NextRow(local_88);
        if (iVar2 != 1) goto LAB_00507b86;
        p_Var7 = (_func_bool_SMBPortalLevel_ptr_SMBPortalLevel_ptr *)0x0;
        local_38[0] = -1;
                    /* try { // try from 00507c4d to 00507c8b has its CatchHandler @ 00507d08 */
        SQLResultSet__GetINT(local_88,(SQLFieldName *)&local_48,local_38,(uint *)0x0);
      } while (local_38[0] == -1);
      GetPortalLevel(self,local_38[0],ppSVar3 + iVar12);
      iVar12 = iVar12 + 1;
    } while (iVar12 != 0x14);
    SQLResultSet__NextRow(local_88);
LAB_00507b86:
    ppSVar11 = ppSVar3 + 0x10;
    std__introsort_loop_SMBPortalLevel,long,bool(*)(SMBPortalLevel*,SMBPortalLevel*)>
              (ppSVar3,ppSVar3 + 0x13,8,p_Var7);
    std__insertion_sort_SMBPortalLevel,bool(*)(SMBPortalLevel*,SMBPortalLevel*)>
              (ppSVar3,ppSVar11,extraout_RDX);
    for (; ppSVar3 + 0x13 != ppSVar11; ppSVar11 = ppSVar11 + 1) {
      pSVar4 = ppSVar11[-1];
      pSVar1 = *ppSVar11;
      ppSVar6 = ppSVar11;
      ppSVar8 = ppSVar11;
      if (*(float *)(pSVar1 + 0x74) <= *(float *)(pSVar4 + 0x74) &&
          *(float *)(pSVar4 + 0x74) != *(float *)(pSVar1 + 0x74)) {
        do {
          *ppSVar8 = pSVar4;
          pSVar4 = ppSVar8[-2];
          ppSVar6 = ppSVar8 + -1;
          ppSVar8 = ppSVar8 + -1;
        } while (*(float *)(pSVar1 + 0x74) <= *(float *)(pSVar4 + 0x74) &&
                 *(float *)(pSVar4 + 0x74) != *(float *)(pSVar1 + 0x74));
      }
      *ppSVar6 = pSVar1;
    }
    LoadedPortalChapter = ppSVar3;
                    /* try { // try from 00507c0f to 00507c13 has its CatchHandler @ 00507cf5 */
    SQLQuery__SQLQuery((SQLQuery *)&local_98);
    SQLDatabase__SQLDatabase__005b4540(aSStack_128);
    plVar10 = *(long **)(self + 8);
  }
  (**(code **)(*plVar10 + 0x28))();
  return;
}

/* ======================================================================
 * SMBLevelPortal__GetEnterTheUnknownChapter  (Ghidra `GetEnterTheUnknownChapter` @ 00507d20)
 * Signature: uint8_t __thiscall GetEnterTheUnknownChapter(SMBLevelPortal * self, SMBPortalChapter * * arg1)
 * Class: SMBLevelPortal
 * Calls: `SQLDatabase__ChooseDatabase`, `SQLDatabase__Connect`, `SQLDatabase__ExecuteQuery`, `SQLDatabase__SQLDatabase`, `SQLDatabase__SQLDatabase__005b4540`, `SQLQuery__SQLQuery`, `SQLResultSet__GetINT`, `SQLResultSet__NextRow`, `Sprint`, `malloc` (+3 more)
 * Called by: (none)
 */
/* SMBLevelPortal__GetEnterTheUnknownChapter(SMBPortalChapter**) */

void __thiscall
SMBLevelPortal__GetEnterTheUnknownChapter(SMBLevelPortal *self,SMBPortalChapter **arg1)

{
  SMBPortalLevel *pSVar1;
  int iVar2;
  SMBPortalChapter *pSVar3;
  SMBPortalLevel *pSVar4;
  size_t sVar5;
  SMBPortalChapter *pSVar6;
  _func_bool_SMBPortalLevel_ptr_SMBPortalLevel_ptr *p_Var7;
  uint uVar8;
  ulong uVar9;
  _func_bool_SMBPortalLevel_ptr_SMBPortalLevel_ptr *extraout_RDX;
  int iVar10;
  SMBPortalChapter *pSVar11;
  SMBPortalChapter *pSVar12;
  SMBPortalChapter *pSVar13;
  bool bVar14;
  byte bVar15;
  SQLDatabase aSStack_128 [144];
  uint64_t local_98;
  char *local_90;
  SQLResultSet *local_88;
  uint32_t local_80;
  uint32_t local_7c;
  uint16_t local_78;
  uint16_t local_76;
  char *local_68;
  char *local_60;
  uint8_t *local_58;
  uint32_t local_50;
  char *local_48;
  uint32_t local_40;
  int local_38 [6];
  
  bVar15 = 0;
  local_50 = 0;
  local_58 = strPortalIP;
  local_68 = "smb_editor_user";
  local_60 = "editor";
  SQLDatabase__SQLDatabase(aSStack_128);
                    /* try { // try from 00507d75 to 00507e7b has its CatchHandler @ 005080b5 */
  SQLDatabase__Connect(aSStack_128,(SQLDatabaseConnection *)&local_68);
  SQLDatabase__ChooseDatabase(aSStack_128,"smb_editor");
  pSVar3 = operator_new(0xb0);
  bVar14 = ((ulong)pSVar3 & 1) != 0;
  *(SMBPortalLevel **)(pSVar3 + 0xa0) = (SMBPortalLevel *)0x0;
  *(uint32_t *)(pSVar3 + 0xa8) = 0xffffffff;
  uVar9 = 0xa0;
  iVar10 = 0xa0;
  pSVar11 = pSVar3;
  if (bVar14) {
    *pSVar3 = (SMBPortalChapter)0x0;
    uVar9 = 0x9f;
    iVar10 = 0x9f;
    pSVar11 = pSVar3 + 1;
  }
  if (((ulong)pSVar11 & 2) == 0) {
    uVar8 = (uint)uVar9;
  }
  else {
    *(uint16_t *)pSVar11 = 0;
    pSVar11 = pSVar11 + 2;
    uVar8 = iVar10 - 2;
    uVar9 = (ulong)uVar8;
  }
  if (((ulong)pSVar11 & 4) != 0) {
    *(uint32_t *)pSVar11 = 0;
    uVar9 = (ulong)(uVar8 - 4);
    pSVar11 = pSVar11 + 4;
  }
  for (p_Var7 = (_func_bool_SMBPortalLevel_ptr_SMBPortalLevel_ptr *)(uVar9 >> 3);
      p_Var7 != (_func_bool_SMBPortalLevel_ptr_SMBPortalLevel_ptr *)0x0; p_Var7 = p_Var7 + -1) {
    *(SMBPortalLevel **)pSVar11 = (SMBPortalLevel *)0x0;
    pSVar11 = pSVar11 + (ulong)bVar15 * -0x10 + 8;
  }
  if ((uVar9 & 4) != 0) {
    *(uint32_t *)pSVar11 = 0;
    pSVar11 = pSVar11 + 4;
  }
  if ((uVar9 & 2) != 0) {
    *(uint16_t *)pSVar11 = 0;
    pSVar11 = pSVar11 + 2;
  }
  if (bVar14) {
    *pSVar11 = (SMBPortalChapter)0x0;
  }
  pSVar4 = malloc(0x20);
  *(SMBPortalLevel **)(pSVar3 + 0xa0) = pSVar4;
  *(uint64_t *)pSVar4 = 0;
  *(uint64_t *)(pSVar4 + 8) = 0;
  *(uint64_t *)(pSVar4 + 0x10) = 0;
  *(uint64_t *)(pSVar4 + 0x18) = 0;
  if ((GetEnterTheUnknownChapter(SMBPortalChapter**)::iEnterUnknownLength == '\0') &&
     (iVar10 = __cxa_guard_acquire(&GetEnterTheUnknownChapter(SMBPortalChapter**)::
                                    iEnterUnknownLength), iVar10 != 0)) {
    GetEnterTheUnknownChapter(SMBPortalChapter**)::iEnterUnknownLength = 0x11;
    __cxa_guard_release(&GetEnterTheUnknownChapter(SMBPortalChapter**)::iEnterUnknownLength);
  }
  if (*(SMBPortalLevel **)(pSVar3 + 0xa0) != (SMBPortalLevel *)"Enter the Unknown") {
    memcpy(*(SMBPortalLevel **)(pSVar3 + 0xa0),"Enter the Unknown",
           (long)GetEnterTheUnknownChapter(SMBPortalChapter**)::iEnterUnknownLength);
  }
  Sprint((double)*(float *)(self + 0x1c),
         "SELECT level_id, times_died / times_played AS difficulty \t\t\t\t\t\t\t\t\t\t   FROM smb_editor_levelinfo WHERE raw_fun_ratings / num_fun_ratings >= 3.0 AND \t\t\t\t\t\t\t\t\t\t   times_died / times_played <= %.02f AND times_played > 10 ORDER BY RAND() LIMIT 20"
         ,strPortalUploadQuery);
  local_98 = 0;
  local_88 = (SQLResultSet *)0x0;
  local_80 = 0;
  local_7c = 0;
  local_78 = 0;
  local_90 = strPortalUploadQuery;
  local_76 = 0;
  sVar5 = strlen(strPortalUploadQuery);
  local_80 = (uint32_t)sVar5;
  local_40 = 0xffffffff;
  local_48 = "level_id";
                    /* try { // try from 00507efd to 00507f14 has its CatchHandler @ 005080c8 */
  SQLDatabase__ExecuteQuery(aSStack_128,(SQLQuery *)&local_98,0);
  iVar10 = 0;
  do {
    do {
      iVar2 = SQLResultSet__NextRow(local_88);
      if (iVar2 != 1) goto LAB_00507f1e;
      p_Var7 = (_func_bool_SMBPortalLevel_ptr_SMBPortalLevel_ptr *)0x0;
      local_38[0] = -1;
                    /* try { // try from 00507ff5 to 00508031 has its CatchHandler @ 005080c8 */
      SQLResultSet__GetINT(local_88,(SQLFieldName *)&local_48,local_38,(uint *)0x0);
    } while (local_38[0] == -1);
    GetPortalLevel(self,local_38[0],(SMBPortalLevel **)(pSVar3 + (long)iVar10 * 8));
    iVar10 = iVar10 + 1;
  } while (iVar10 != 0x14);
  SQLResultSet__NextRow(local_88);
LAB_00507f1e:
  pSVar11 = pSVar3 + 0x98;
  pSVar12 = pSVar3 + 0x80;
  std__introsort_loop_SMBPortalLevel,long,bool(*)(SMBPortalLevel*,SMBPortalLevel*)>
            ((SMBPortalLevel **)pSVar3,(SMBPortalLevel **)pSVar11,8,p_Var7);
  std__insertion_sort_SMBPortalLevel,bool(*)(SMBPortalLevel*,SMBPortalLevel*)>
            ((SMBPortalLevel **)pSVar3,(SMBPortalLevel **)pSVar12,extraout_RDX);
  for (; pSVar11 != pSVar12; pSVar12 = pSVar12 + 8) {
    while( true ) {
      pSVar4 = *(SMBPortalLevel **)(pSVar12 + -8);
      pSVar1 = *(SMBPortalLevel **)pSVar12;
      pSVar13 = pSVar12;
      if (*(float *)(pSVar1 + 0x74) <= *(float *)(pSVar4 + 0x74) &&
          *(float *)(pSVar4 + 0x74) != *(float *)(pSVar1 + 0x74)) break;
      pSVar13 = pSVar12 + 8;
      *(SMBPortalLevel **)pSVar12 = pSVar1;
      pSVar12 = pSVar13;
      if (pSVar11 == pSVar13) goto LAB_00507fa0;
    }
    do {
      pSVar6 = pSVar13 + -8;
      *(SMBPortalLevel **)pSVar13 = pSVar4;
      pSVar4 = *(SMBPortalLevel **)(pSVar13 + -0x10);
      pSVar13 = pSVar6;
    } while (*(float *)(pSVar1 + 0x74) <= *(float *)(pSVar4 + 0x74) &&
             *(float *)(pSVar4 + 0x74) != *(float *)(pSVar1 + 0x74));
    *(SMBPortalLevel **)pSVar6 = pSVar1;
  }
LAB_00507fa0:
  *arg1 = pSVar3;
                    /* try { // try from 00507fac to 00507fb0 has its CatchHandler @ 005080b5 */
  SQLQuery__SQLQuery((SQLQuery *)&local_98);
  SQLDatabase__SQLDatabase__005b4540(aSStack_128);
  return;
}

/* ======================================================================
 * SMBLevelPortal__ReleaseLoadedLevelData  (Ghidra `ReleaseLoadedLevelData` @ 005080e0)
 * Signature: uint8_t __stdcall ReleaseLoadedLevelData(void)
 * Class: SMBLevelPortal
 * Calls: `free`, `operator_delete`
 * Called by: `SMBChapter__LoadNextLevel`
 */
/* SMBLevelPortal__ReleaseLoadedLevelData() */

bool SMBLevelPortal__ReleaseLoadedLevelData(void)

{
  uint64_t *puVar1;
  bool bVar2;
  
  puVar1 = LoadedPortalLevel;
  bVar2 = LoadedPortalLevel != (uint64_t *)0x0;
  if (bVar2) {
    if ((void *)LoadedPortalLevel[1] != (void *)0x0) {
      free((void *)LoadedPortalLevel[1]);
      if (puVar1[1] != 0) {
        free((void *)*puVar1);
      }
    }
    operator_delete(puVar1);
  }
  LoadedPortalLevel = (uint64_t *)0x0;
  return bVar2;
}

/* ======================================================================
 * SMBLevelPortal__IsChapterLoaded  (Ghidra `IsChapterLoaded` @ 00508150)
 * Signature: uint8_t __stdcall IsChapterLoaded(void)
 * Class: SMBLevelPortal
 * Calls: (none)
 * Called by: `GSMBMenu__ShowChapterMap`, `SMBChapter__LoadNextLevel`, `TransitionToNextLevel`
 */
/* SMBLevelPortal__IsChapterLoaded() */

bool SMBLevelPortal__IsChapterLoaded(void)

{
  return LoadedPortalChapter != 0;
}

/* ======================================================================
 * SMBLevelPortal__InitializeInterface  (Ghidra `InitializeInterface` @ 00508160)
 * Signature: uint8_t __thiscall InitializeInterface(SMBLevelPortal * self)
 * Class: SMBLevelPortal
 * Calls: `free`, `operator_delete`
 * Called by: `GSMBMenu__ShowChapterMap`, `SMBMenuEnterWorld`
 */
/* SMBLevelPortal__InitializeInterface() */

void __thiscall SMBLevelPortal__InitializeInterface(SMBLevelPortal *self)

{
  uint64_t *puVar1;
  void *pvVar2;
  long lVar3;
  
  (**(code **)(**(long **)(self + 8) + 0x20))();
  pvVar2 = LoadedPortalChapter;
  if (LoadedPortalChapter != (void *)0x0) {
    lVar3 = 0;
    do {
      puVar1 = *(uint64_t **)((long)pvVar2 + lVar3);
      if (puVar1 != (uint64_t *)0x0) {
        if ((void *)puVar1[1] != (void *)0x0) {
          free((void *)puVar1[1]);
          if (puVar1[1] != 0) {
            free((void *)*puVar1);
          }
        }
        operator_delete(puVar1);
      }
      *(uint64_t *)((long)pvVar2 + lVar3) = 0;
      lVar3 = lVar3 + 8;
    } while (lVar3 != 0xa0);
    if (*(void **)((long)pvVar2 + 0xa0) != (void *)0x0) {
      free(*(void **)((long)pvVar2 + 0xa0));
    }
    operator_delete(pvVar2);
  }
  LoadedPortalChapter = (void *)0x0;
  return;
}

/* ======================================================================
 * SMBLevelPortal__DeActivateInterface  (Ghidra `DeActivateInterface` @ 005081f0)
 * Signature: uint8_t __thiscall DeActivateInterface(SMBLevelPortal * self)
 * Class: SMBLevelPortal
 * Calls: (none)
 * Called by: `SMBMenuEnterWorld`
 */
/* SMBLevelPortal__DeActivateInterface() */

void __thiscall SMBLevelPortal__DeActivateInterface(SMBLevelPortal *self)

{
                    /* WARNING: Could not recover jumptable at 0x005081fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(self + 8) + 0x28))();
  return;
}

/* ======================================================================
 * SMBLevelPortal__IsInterfaceActive  (Ghidra `IsInterfaceActive` @ 00508200)
 * Signature: uint8_t __thiscall IsInterfaceActive(SMBLevelPortal * self)
 * Class: SMBLevelPortal
 * Calls: (none)
 * Called by: `SMBMenuEnterWorld`
 */
/* SMBLevelPortal__IsInterfaceActive() */

ushort __thiscall SMBLevelPortal__IsInterfaceActive(SMBLevelPortal *self)

{
  return *(ushort *)(*(long *)(self + 8) + 0x34) & 0x3ff;
}

/* ======================================================================
 * SMBLevelPortal__ResetLevelIDs  (Ghidra `ResetLevelIDs` @ 00508210)
 * Signature: uint8_t __thiscall ResetLevelIDs(SMBLevelPortal * self)
 * Class: SMBLevelPortal
 * Calls: (none)
 * Called by: (none)
 */
/* SMBLevelPortal__ResetLevelIDs() */

void __thiscall SMBLevelPortal__ResetLevelIDs(SMBLevelPortal *self)

{
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
  return;
}

/* ======================================================================
 * SMBLevelPortal__GetCurrentRating  (Ghidra `GetCurrentRating` @ 00508240)
 * Signature: uint8_t __thiscall GetCurrentRating(SMBLevelPortal * self, float * arg1)
 * Class: SMBLevelPortal
 * Calls: (none)
 * Called by: `GMeatHUD__Render`
 */
/* SMBLevelPortal__GetCurrentRating(float&) */

uint32_t __thiscall SMBLevelPortal__GetCurrentRating(SMBLevelPortal *self,float *arg1)

{
  *arg1 = *(float *)(self + 0x10);
  return *(uint32_t *)(self + 0x14);
}

/* ======================================================================
 * SMBLevelPortal__GetUserLibrary  (Ghidra `GetUserLibrary` @ 00508250)
 * Signature: uint8_t __thiscall GetUserLibrary(SMBLevelPortal * self, SQLQuery * arg1, char * arg2, int arg3)
 * Class: SMBLevelPortal
 * Calls: `SQLDatabase__ExecuteQuery`, `Sprint`, `SteamUser`, `strlen`
 * Called by: `EditorFormChapterUpload__LoadLevelLibrary`
 */
/* SMBLevelPortal__GetUserLibrary(SQLQuery&, char const*, int) */

uint64_t __thiscall
SMBLevelPortal__GetUserLibrary(SMBLevelPortal *self,SQLQuery *arg1,char *arg2,int arg3)

{
  SQLDatabase *this_00;
  char *pcVar1;
  long lVar2;
  long *plVar3;
  uint64_t uVar4;
  size_t sVar5;
  
  lVar2 = SteamUser();
  uVar4 = 0;
  if (lVar2 != 0) {
    plVar3 = (long *)SteamUser();
    uVar4 = (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  pcVar1 = strPortalUploadQuery;
  *(uint16_t *)(arg1 + 0x20) = 1;
  Sprint("SELECT smb_editor_levelinfo.* FROM smb_editor_levelinfo WHERE author_id = \'%llu\' AND (levelname LIKE \'%%%s%%\' OR level_id = \'%s\') LIMIT %i, 10"
         ,pcVar1,uVar4,arg2,arg2,arg3);
  pcVar1 = strPortalUploadQuery;
  *(char **)(arg1 + 8) = strPortalUploadQuery;
  sVar5 = strlen(pcVar1);
  this_00 = pPortalConnection;
  *(int *)(arg1 + 0x18) = (int)sVar5;
  SQLDatabase__ExecuteQuery(this_00,arg1,0);
  return 1;
}

/* ======================================================================
 * SMBLevelPortal__SetUnknownDifficulty  (Ghidra `SetUnknownDifficulty` @ 005082f0)
 * Signature: uint8_t __thiscall SetUnknownDifficulty(SMBLevelPortal * self, float arg1)
 * Class: SMBLevelPortal
 * Calls: (none)
 * Called by: (none)
 */
/* SMBLevelPortal__SetUnknownDifficulty(float) */

void __thiscall SMBLevelPortal__SetUnknownDifficulty(SMBLevelPortal *self,float arg1)

{
  *(float *)(self + 0x1c) = arg1;
  return;
}

/* ======================================================================
 * SMBLevelPortal__AddChapter  (Ghidra `AddChapter` @ 00508300)
 * Signature: uint8_t __thiscall AddChapter(SMBLevelPortal * self, SMBPortalChapterCreate * arg1)
 * Class: SMBLevelPortal
 * Calls: `SQLDatabase__ExecuteQuery`, `SQLDatabase__WaitForQuery`, `SQLQuery__SQLQuery`, `Sprint`, `SteamUser`, `strlen`
 * Called by: `EditorFormChapterUpload__UploadChapter`
 */
/* SMBLevelPortal__AddChapter(SMBPortalChapterCreate const*) */

void __thiscall SMBLevelPortal__AddChapter(SMBLevelPortal *self,SMBPortalChapterCreate *arg1)

{
  long lVar1;
  long *plVar2;
  uint64_t uVar3;
  size_t sVar4;
  ulong uVar5;
  uint64_t local_48;
  char *local_40;
  uint64_t local_38;
  uint32_t local_30;
  uint32_t local_2c;
  uint16_t local_28;
  uint16_t local_26;
  
  local_48 = 0;
  local_40 = (char *)0x0;
  local_38 = 0;
  local_30 = 0;
  local_2c = 0;
  local_26 = 0;
  local_28 = 1;
                    /* try { // try from 00508349 to 00508427 has its CatchHandler @ 0050844a */
  lVar1 = SteamUser();
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    plVar2 = (long *)SteamUser();
    uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  Sprint("INSERT INTO smb_editor_chapterinfo VALUES (\'\', \'%llu\', \'%s\', %i, %i, %i, NOW())",
         strPortalUploadQuery,uVar3,arg1,*(uint32_t *)(arg1 + 0x20),
         *(uint32_t *)(arg1 + 0x24),*(uint32_t *)(arg1 + 0x28));
  local_40 = strPortalUploadQuery;
  sVar4 = strlen(strPortalUploadQuery);
  local_30 = (uint32_t)sVar4;
  SQLDatabase__ExecuteQuery(pPortalConnection,(SQLQuery *)&local_48,0);
  SQLDatabase__WaitForQuery(pPortalConnection);
  uVar5 = 0;
  do {
    if (*(int *)(arg1 + uVar5 * 4 + 0x2c) != -1) {
      Sprint("INSERT INTO smb_editor_chapterlevels VALUES (LAST_INSERT_ID(), %i, %i)",
             strPortalUploadQuery,*(int *)(arg1 + uVar5 * 4 + 0x2c),uVar5 & 0xffffffff);
      local_40 = strPortalUploadQuery;
      sVar4 = strlen(strPortalUploadQuery);
      local_30 = (uint32_t)sVar4;
      SQLDatabase__ExecuteQuery(pPortalConnection,(SQLQuery *)&local_48,0);
      SQLDatabase__WaitForQuery(pPortalConnection);
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 != 0x14);
  SQLQuery__SQLQuery((SQLQuery *)&local_48);
  return;
}

/* ======================================================================
 * SMBLevelPortal__SMBLevelPortal__00509490  (Ghidra `SMBLevelPortal` @ 00509490)
 * Signature: uint8_t __thiscall SMBLevelPortal(SMBLevelPortal * self)
 * Class: SMBLevelPortal
 * Calls: `FlashAnimationLibrary__FlashAnimationLibrary__00576680`, `FormatResourcePath`, `SMBLevelPortalInterface__SMBLevelPortalInterface__005084f0`, `Sprint`, `malloc`, `operator_new`
 * Called by: `GSuperMeatBoy__Initialize__00516f60`
 */
/* WARNING: Removing unreachable block (ram,0x0050977a) */
/* SMBLevelPortal__SMBLevelPortal__00509490() */

void __thiscall SMBLevelPortal__SMBLevelPortal__00509490(SMBLevelPortal *self)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  FlashAnimationLibrary *this_00;
  SMBLevelPortalInterface *this_01;
  bool bVar4;
  uint8_t *local_28 [2];
  
  *(uint32_t *)self = 2;
  bVar4 = strPortalUploadQuery == (void *)0x0;
  *(uint64_t *)(self + 8) = 0;
  *(uint32_t *)(self + 0x10) = 0;
  *(uint32_t *)(self + 0x14) = 0;
  *(uint32_t *)(self + 0x1c) = 0x40400000;
  *(uint8_t **)(self + 0x70) = &DAT_008184c8 /* R:0.00016803004837129265f */;
  if (bVar4) {
                    /* try { // try from 0050970a to 0050970e has its CatchHandler @ 00509747 */
    Sprint("%i.%i.%i.%i",strPortalIP,0x32,0x1c,8,0xa0);
    strPortalUploadQuery = malloc(0x19000);
  }
  local_28[0] = &DAT_008184c8 /* R:0.00016803004837129265f */;
                    /* try { // try from 005094e4 to 005094f5 has its CatchHandler @ 0050975b */
  pcVar3 = (char *)FormatResourcePath("/Menus/portal.am",local_28);
  this_00 = operator_new(0xb0);
                    /* try { // try from 005094ff to 00509503 has its CatchHandler @ 00509778 */
  FlashAnimationLibrary__FlashAnimationLibrary__00576680(this_00,pcVar3);
  PortalInterfaceLibrary = this_00;
                    /* try { // try from 0050951a to 005096a6 has its CatchHandler @ 0050975b */
  FlashAnimationLibrary__SetTextFieldText((char *)this_00,"featured","Featured");
  FlashAnimationLibrary__SetTextFieldText
            ((char *)PortalInterfaceLibrary,"featuredtitle","Featured Chapters");
  FlashAnimationLibrary__SetTextFieldText
            ((char *)PortalInterfaceLibrary,"featuredtitle2","Featured Levels");
  FlashAnimationLibrary__SetTextFieldText((char *)PortalInterfaceLibrary,"chapter","Tile Set");
  FlashAnimationLibrary__SetTextFieldText((char *)PortalInterfaceLibrary,"chapterportal","Chapters")
  ;
  FlashAnimationLibrary__SetTextFieldText((char *)PortalInterfaceLibrary,"char",&DAT_005c7aae /* R:"Char" */);
  FlashAnimationLibrary__SetTextFieldText((char *)PortalInterfaceLibrary,"difficulty","Difficulty");
  FlashAnimationLibrary__SetTextFieldText((char *)PortalInterfaceLibrary,"funfactor","Fun Factor");
  FlashAnimationLibrary__SetTextFieldText((char *)PortalInterfaceLibrary,"levelportal","Levels");
  FlashAnimationLibrary__SetTextFieldText((char *)PortalInterfaceLibrary,"name");
  FlashAnimationLibrary__SetTextFieldText((char *)PortalInterfaceLibrary,"search","Search");
  FlashAnimationLibrary__SetTextFieldText((char *)PortalInterfaceLibrary,"unknowntxt","The Unknown")
  ;
  FlashAnimationLibrary__SetTextFieldText((char *)PortalInterfaceLibrary,"num",&DAT_005c7af1 /* R:u32=1869021219 */);
  FlashAnimationLibrary__SetTextFieldText((char *)PortalInterfaceLibrary,"go",&DAT_005c31dc /* R:134673520.0f */);
  FlashAnimationLibrary__SetTextFieldText
            ((char *)PortalInterfaceLibrary,"utext1","Select your difficulty");
  FlashAnimationLibrary__SetTextFieldText
            ((char *)PortalInterfaceLibrary,"entertheunknown","Enter The Unknown");
  FlashAnimationLibrary__SetTextFieldText
            ((char *)PortalInterfaceLibrary,"utext2",
             "is a randomly generated chapter created by high ranking user made levels");
  this_01 = operator_new(0x3778);
                    /* try { // try from 005096ad to 005096b1 has its CatchHandler @ 00509768 */
  SMBLevelPortalInterface__SMBLevelPortalInterface__005084f0(this_01);
  *(SMBLevelPortalInterface **)(self + 8) = this_01;
                    /* try { // try from 005096bc to 005096be has its CatchHandler @ 0050975b */
  (**(code **)(*(long *)this_01 + 0x18))(this_01);
  SuperMeatBoyPortal = self;
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
