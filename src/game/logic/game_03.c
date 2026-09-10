/* src/game/logic/game_03.c — 11 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "game_03.h"

/* ======================================================================
 * OnLeaderboardFoundWrite  (Ghidra `OnLeaderboardFoundWrite` @ 005ba460)
 * Signature: uint8_t __stdcall OnLeaderboardFoundWrite(LeaderboardFindResult_t * arg1, bool arg2)
 * Calls: `OnLeaderboardFoundWriteFinished`, `SteamAPI_IsSteamRunning`, `SteamAPI_RegisterCallResult`, `SteamAPI_UnregisterCallResult`, `SteamUser`, `SteamUserStats`
 * Called by: (none)
 */
/* SteamLeaderBoards__OnLeaderboardFoundWrite(LeaderboardFindResult_t*, bool) */

void SteamLeaderBoards__OnLeaderboardFoundWrite(LeaderboardFindResult_t *arg1, bool arg2)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  undefined7 in_register_00000031;

  cVar1 = SteamAPI_IsSteamRunning();
  if (cVar1 != '\0') {
    plVar2 = (long *)SteamUser();
    cVar1 = (**(code **)(*plVar2 + 8))(plVar2);
    if (cVar1 != '\0') {
      plVar2 = (long *)SteamUserStats();
      lVar3 = (**(code **)(*plVar2 + 0xf8))(
          plVar2, *(uint64_t *)CONCAT71(in_register_00000031, arg2), *(uint32_t *)(arg1 + 0x18),
          *(uint32_t *)(arg1 + 0x1c), *(uint64_t *)(arg1 + 0x20), *(uint32_t *)(arg1 + 0x28));
      *(long *)(arg1 + 0x10) = lVar3;
      if (*(long *)(arg1 + 0xb8) != 0) {
        SteamAPI_UnregisterCallResult(arg1 + 0xa8);
      }
      *(long *)(arg1 + 0xb8) = lVar3;
      *(LeaderboardFindResult_t **)(arg1 + 0xc0) = arg1;
      *(code **)(arg1 + 200) = OnLeaderboardFoundWriteFinished;
      *(uint64_t *)(arg1 + 0xd0) = 0;
      if (lVar3 != 0) {
        SteamAPI_RegisterCallResult(arg1 + 0xa8, lVar3);
        return;
      }
    }
  }
  return;
}

/* ======================================================================
 * OnLeaderboardFoundWriteFinished  (Ghidra `OnLeaderboardFoundWriteFinished` @ 005ba7f0)
 * Signature: uint8_t __stdcall OnLeaderboardFoundWriteFinished(LeaderboardScoreUploaded_t * arg1, bool arg2)
 * Calls: `operator_delete`
 * Called by: `OnLeaderboardFoundWrite`
 */
/* SteamLeaderBoards__OnLeaderboardFoundWriteFinished(LeaderboardScoreUploaded_t*, bool) */

void SteamLeaderBoards__OnLeaderboardFoundWriteFinished(LeaderboardScoreUploaded_t *arg1, bool arg2)

{
  if (arg1 != (LeaderboardScoreUploaded_t *)0x0) {
    SteamLeaderBoards__dtor((SteamLeaderBoards *)arg1);
    operator_delete(arg1);
    return;
  }
  return;
}

/* ======================================================================
 * OnLeaderboardFoundReadFinished  (Ghidra `OnLeaderboardFoundReadFinished` @ 005ba820)
 * Signature: uint8_t __stdcall OnLeaderboardFoundReadFinished(LeaderboardScoresDownloaded_t * arg1, bool arg2)
 * Calls: `SteamAPI_IsSteamRunning`, `SteamFriends`, `SteamUser`, `SteamUserStats`, `malloc`, `operator_delete`
 * Called by: `OnLeaderboardFoundRead`
 */
/* SteamLeaderBoards__OnLeaderboardFoundReadFinished(LeaderboardScoresDownloaded_t*, bool) */

void SteamLeaderBoards__OnLeaderboardFoundReadFinished(LeaderboardScoresDownloaded_t *arg1,
                                                       bool arg2)

{
  char cVar1;
  uint32_t uVar2;
  long *plVar3;
  void *pvVar4;
  uint64_t *puVar5;
  long lVar6;
  uint32_t *puVar7;
  long lVar8;
  undefined7 in_register_00000031;
  uint64_t *puVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  uint32_t local_88[12];
  uint32_t local_58;
  uint16_t uStack_54;
  uint8_t uStack_52;
  uint8_t uStack_51;
  uint32_t local_50;
  int local_4c;
  int local_48;

  puVar9 = (uint64_t *)CONCAT71(in_register_00000031, arg2);
  cVar1 = SteamAPI_IsSteamRunning();
  if (cVar1 != '\0') {
    plVar3 = (long *)SteamUser();
    cVar1 = (**(code **)(*plVar3 + 8))(plVar3);
    if (cVar1 != '\0') {
      puVar7 = *(uint32_t **)(arg1 + 0x38);
      iVar10 = 0;
      plVar3 = (long *)SteamUserStats();
      uVar2 = (**(code **)(*plVar3 + 200))(plVar3, *puVar9);
      *puVar7 = uVar2;
      *(uint32_t *)(*(long *)(arg1 + 0x38) + 0x10) = *(uint32_t *)(puVar9 + 2);
      lVar8 = *(long *)(arg1 + 0x38);
      pvVar4 = malloc((ulong) * (uint *)(lVar8 + 0x10) * 0x38);
      *(void **)(lVar8 + 8) = pvVar4;
      lVar8 = 0;
      if (0 < *(int *)(puVar9 + 2)) {
        do {
          uStack_54 = 0;
          uStack_52 = 0;
          uStack_51 = 0;
          local_58 = 0;
          plVar3 = (long *)SteamUserStats();
          (**(code **)(*plVar3 + 0xf0))(plVar3, puVar9[1], iVar10, &local_58, local_88, 10);
          lVar12 = *(long *)(*(long *)(arg1 + 0x38) + 8);
          pvVar4 = malloc((long)*(int *)(puVar9 + 2) * 0x18);
          *(void **)(lVar8 + lVar12 + 0x28) = pvVar4;
          *(long *)(*(long *)(*(long *)(arg1 + 0x38) + 8) + 0x20 + lVar8) = (long)local_4c;
          if (0 < local_48) {
            puVar7 = local_88;
            lVar12 = 0;
            iVar11 = 0;
            do {
              plVar3 = (long *)SteamFriends();
              puVar5 = (uint64_t *)(**(code **)(*plVar3 + 0x38))(
                  plVar3, CONCAT17(uStack_51, CONCAT16(uStack_52, CONCAT24(uStack_54, local_58))));
              lVar6 = *(long *)(*(long *)(arg1 + 0x38) + 8) + lVar8;
              if (puVar5 != (uint64_t *)(lVar6 + 8)) {
                *(uint64_t *)(lVar6 + 8) = *puVar5;
                *(uint64_t *)(lVar6 + 0x10) = puVar5[1];
                lVar6 = lVar8 + *(long *)(*(long *)(arg1 + 0x38) + 8);
              }
              *(uint8_t *)(lVar6 + 0x17) = 0;
              iVar11 = iVar11 + 1;
              uVar2 = *puVar7;
              puVar7 = puVar7 + 1;
              *(uint32_t *)(*(long *)(*(long *)(*(long *)(arg1 + 0x38) + 8) + 0x28 + lVar8) + 8 +
                            lVar12) = uVar2;
              lVar12 = lVar12 + 0x18;
              *(uint32_t *)(*(long *)(*(long *)(arg1 + 0x38) + 8) + 0x18 + lVar8) = local_50;
            } while (iVar11 < local_48);
          }
          iVar10 = iVar10 + 1;
          lVar8 = lVar8 + 0x38;
        } while (iVar10 < *(int *)(puVar9 + 2));
      }
      *(uint32_t *)(*(long *)(arg1 + 0x38) + 0x14) = 1;
      **(uint32_t **)(*(long *)(arg1 + 0x40) + 0x30) = 1;
      SteamLeaderBoards__dtor((SteamLeaderBoards *)arg1);
      operator_delete(arg1);
      return;
    }
  }
  return;
}

/* ======================================================================
 * AllocLeaderboardColumnData  (Ghidra `AllocLeaderboardColumnData` @ 005baa30)
 * Signature: uint8_t __stdcall AllocLeaderboardColumnData(ulong arg1)
 * Calls: (none)
 * Called by: `InitializeLeaderboardEntry`, `InitializeLeaderboardRead`
 */
/* Leaderboards__AllocLeaderboardColumnData(unsigned long) */

void Leaderboards__AllocLeaderboardColumnData(ulong arg1)

{
  (*(code *)PTR_malloc_00815b88)();
  return;
}

/* ======================================================================
 * FreeLeaderboardColumnData  (Ghidra `FreeLeaderboardColumnData` @ 005baa40)
 * Signature: uint8_t __stdcall FreeLeaderboardColumnData(void * arg1)
 * Calls: (none)
 * Called by: `FreeLeaderboardEntry`, `FreeLeaderboardRead`
 */
/* Leaderboards__FreeLeaderboardColumnData(void*) */

void Leaderboards__FreeLeaderboardColumnData(void *arg1)

{
  (*(code *)PTR_free_00815b18)();
  return;
}

/* ======================================================================
 * JoinLeaderboardSession  (Ghidra `JoinLeaderboardSession` @ 005baa50)
 * Signature: uint8_t __stdcall JoinLeaderboardSession(LeaderboardJoinParam * arg1)
 * Calls: (none)
 * Called by: (none)
 */
/* Leaderboards__JoinLeaderboardSession(LeaderboardJoinParam*) */

void Leaderboards__JoinLeaderboardSession(LeaderboardJoinParam *arg1)

{
  return;
}

/* ======================================================================
 * GenerateLeaderboardName  (Ghidra `GenerateLeaderboardName` @ 005baa60)
 * Signature: uint8_t __stdcall GenerateLeaderboardName(char * arg1, int arg2)
 * Calls: `Sprint`
 * Called by: (none)
 */
/* GenerateLeaderboardName(char*, int) */

char *GenerateLeaderboardName(char *arg1, int arg2)

{
  Sprint("SMB_LEADERBOARD_%i", arg1, arg2);
  return arg1;
}

/* ======================================================================
 * LeaveLeaderboardSession  (Ghidra `LeaveLeaderboardSession` @ 005baa80)
 * Signature: uint8_t __stdcall LeaveLeaderboardSession(LeaderboardJoinParam * arg1)
 * Calls: (none)
 * Called by: (none)
 */
/* Leaderboards__LeaveLeaderboardSession(LeaderboardJoinParam*) */

void Leaderboards__LeaveLeaderboardSession(LeaderboardJoinParam *arg1)

{
  return;
}

/* ======================================================================
 * WriteEntryToLeaderboard  (Ghidra `WriteEntryToLeaderboard` @ 005baa90)
 * Signature: uint8_t __stdcall WriteEntryToLeaderboard(LeaderBoardEntry * arg1)
 * Calls: `Sprint`, `SteamAPI_IsSteamRunning`, `SteamAPI_RegisterCallResult`, `SteamAPI_UnregisterCallResult`, `SteamLeaderBoards__SteamLeaderBoards`, `SteamUser`, `SteamUserStats`, `operator_new`
 * Called by: (none)
 */
/* Leaderboards__WriteEntryToLeaderboard(LeaderBoardEntry const*) */

void Leaderboards__WriteEntryToLeaderboard(LeaderBoardEntry *arg1)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  long *plVar4;
  SteamLeaderBoards *pSVar5;
  void *pvVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  uint8_t local_48[40];

  cVar2 = SteamAPI_IsSteamRunning();
  if (cVar2 != '\0') {
    plVar4 = (long *)SteamUser();
    cVar2 = (**(code **)(*plVar4 + 8))(plVar4);
    if (cVar2 != '\0') {
      pSVar5 = operator_new(0x108);
      SteamLeaderBoards__SteamLeaderBoards(pSVar5, 2);
      *(uint *)(pSVar5 + 0x18) = 2 - (uint)(*(int *)(arg1 + 0x20) == 0);
      pvVar6 = operator_new__((ulong) * (uint *)(arg1 + 0x10) << 2);
      *(void **)(pSVar5 + 0x20) = pvVar6;
      iVar8 = 0;
      uVar10 = 0;
      *(uint32_t *)(pSVar5 + 0x28) = *(uint32_t *)(arg1 + 0x10);
      if (*(int *)(arg1 + 0x10) != 0) {
        do {
          while (true) {
            lVar7 = *(long *)(arg1 + 8) + uVar10 * 0x18;
            if (*(char *)(lVar7 + 4) != '\x01')
              break;
            uVar9 = (int)uVar10 + 1;
            uVar10 = (ulong)uVar9;
            uVar11 = (uint) * (uint64_t *)(lVar7 + 8);
            uVar3 = (int)uVar11 >> 0x1f;
            *(uint *)(pSVar5 + 0x1c) = uVar11 ^ uVar3;
            *(uint *)(pSVar5 + 0x1c) = *(int *)(pSVar5 + 0x1c) - uVar3;
            if (*(uint *)(arg1 + 0x10) <= uVar9)
              goto LAB_005bab67;
          }
          lVar12 = (long)iVar8;
          uVar3 = (int)uVar10 + 1;
          uVar10 = (ulong)uVar3;
          iVar8 = iVar8 + 1;
          *(uint32_t *)(*(long *)(pSVar5 + 0x20) + lVar12 * 4) = *(uint32_t *)(lVar7 + 8);
        } while (uVar3 < *(uint *)(arg1 + 0x10));
      }
    LAB_005bab67:
      *(int *)(pSVar5 + 0x28) = iVar8;
      plVar4 = (long *)SteamUserStats();
      pcVar1 = *(code **)(*plVar4 + 0xb0);
      Sprint("SMB_LEADERBOARD_%i", local_48, *(uint32_t *)arg1);
      lVar7 = (*pcVar1)(plVar4, local_48, 1, 1);
      *(long *)(pSVar5 + 8) = lVar7;
      if (*(long *)(pSVar5 + 0x58) != 0) {
        SteamAPI_UnregisterCallResult(pSVar5 + 0x48);
      }
      *(long *)(pSVar5 + 0x58) = lVar7;
      *(SteamLeaderBoards **)(pSVar5 + 0x60) = pSVar5;
      *(code **)(pSVar5 + 0x68) = SteamLeaderBoards__OnLeaderboardFoundWrite;
      *(uint64_t *)(pSVar5 + 0x70) = 0;
      if (lVar7 != 0) {
        SteamAPI_RegisterCallResult(pSVar5 + 0x48, lVar7);
        return;
      }
    }
  }
  return;
}

/* ======================================================================
 * ReadLeaderboard  (Ghidra `ReadLeaderboard` @ 005bac10)
 * Signature: uint8_t __stdcall ReadLeaderboard(LeaderBoardRead * arg1, LeaderBoardResult * arg2)
 * Calls: `Sprint`, `SteamAPI_IsSteamRunning`, `SteamAPI_RegisterCallResult`, `SteamAPI_UnregisterCallResult`, `SteamLeaderBoards__SteamLeaderBoards`, `SteamUser`, `SteamUserStats`, `operator_new`
 * Called by: (none)
 */
/* Leaderboards__ReadLeaderboard(LeaderBoardRead const*, LeaderBoardResult*) */

void Leaderboards__ReadLeaderboard(LeaderBoardRead *arg1, LeaderBoardResult *arg2)

{
  code *pcVar1;
  char cVar2;
  long *plVar3;
  SteamLeaderBoards *pSVar4;
  uint64_t *puVar5;
  long lVar6;
  uint8_t auStack_48[40];

  cVar2 = SteamAPI_IsSteamRunning();
  if (cVar2 != '\0') {
    plVar3 = (long *)SteamUser();
    cVar2 = (**(code **)(*plVar3 + 8))(plVar3);
    if (cVar2 != '\0') {
      pSVar4 = operator_new(0x108);
      SteamLeaderBoards__SteamLeaderBoards(pSVar4, 1);
      puVar5 = operator_new(0x38);
      *puVar5 = *(uint64_t *)arg1;
      puVar5[1] = *(uint64_t *)(arg1 + 8);
      puVar5[2] = *(uint64_t *)(arg1 + 0x10);
      puVar5[3] = *(uint64_t *)(arg1 + 0x18);
      puVar5[4] = *(uint64_t *)(arg1 + 0x20);
      puVar5[5] = *(uint64_t *)(arg1 + 0x28);
      puVar5[6] = *(uint64_t *)(arg1 + 0x30);
      *(uint64_t **)(pSVar4 + 0x40) = puVar5;
      *(uint32_t *)puVar5[6] = 0;
      *(LeaderBoardResult **)(pSVar4 + 0x38) = arg2;
      plVar3 = (long *)SteamUserStats();
      pcVar1 = *(code **)(*plVar3 + 0xb0);
      Sprint("SMB_LEADERBOARD_%i", auStack_48, **(uint32_t **)(arg1 + 0x10));
      lVar6 = (*pcVar1)(plVar3, auStack_48, 1, 1);
      *(long *)(pSVar4 + 8) = lVar6;
      if (*(long *)(pSVar4 + 0x58) != 0) {
        SteamAPI_UnregisterCallResult(pSVar4 + 0x48);
      }
      *(long *)(pSVar4 + 0x58) = lVar6;
      *(SteamLeaderBoards **)(pSVar4 + 0x60) = pSVar4;
      *(code **)(pSVar4 + 0x68) = SteamLeaderBoards__OnLeaderboardFoundRead;
      *(uint64_t *)(pSVar4 + 0x70) = 0;
      if (lVar6 != 0) {
        SteamAPI_RegisterCallResult(pSVar4 + 0x48, lVar6);
      }
    }
  }
  return;
}

/* ======================================================================
 * ShowGamerInfo  (Ghidra `ShowGamerInfo` @ 005bad60)
 * Signature: uint8_t __stdcall ShowGamerInfo(UserProfile * arg1, long arg2)
 * Calls: (none)
 * Called by: (none)
 */
/* Leaderboards__ShowGamerInfo(UserProfile*, long) */

void Leaderboards__ShowGamerInfo(UserProfile *arg1, long arg2)

{
  return;
}
