/* src/game/classes/SQLDatabase.c — 14 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "SQLDatabase.h"

/* ======================================================================
 * SQLDatabase__SQLDatabase  (Ghidra `SQLDatabase` @ 005b4470)
 * Signature: uint8_t __thiscall SQLDatabase(SQLDatabase * self)
 * Class: SQLDatabase
 * Calls: `CriticalSection__CriticalSection`
 * Called by: `GetPortalChapter`, `SMBLevelPortalInterface__SMBLevelPortalInterface__005084f0`, `SMBLevelPortal__GetEnterTheUnknownChapter`, `SMBLevelPortal__GetPortalChapter`, `SMBLevelPortal__GetPortalLevel`, `SMBLevelPortal__LoadSelectedChapter`, `SMBLevelPortal__UploadPortalLevel`
 */
/* SQLDatabase__SQLDatabase() */

void __thiscall SQLDatabase__SQLDatabase(SQLDatabase *self)

{
  *(uint32_t *)(self + 0x10) = 0;
  *(uint64_t *)self = 0;
  *(uint32_t *)(self + 0x14) = 0;
  *(uint64_t *)(self + 8) = 0;
  *(uint32_t *)(self + 0x18) = 0;
  *(uint8_t **)(self + 0x20) = &DAT_008184c8 /* R:0.00016803004837129265f */;
  *(uint8_t **)(self + 0x28) = &DAT_008184c8 /* R:0.00016803004837129265f */;
  *(uint8_t **)(self + 0x30) = &DAT_008184c8 /* R:0.00016803004837129265f */;
  *(uint8_t **)(self + 0x38) = &DAT_008184c8 /* R:0.00016803004837129265f */;
  /* try { // try from 005b44c0 to 005b44c4 has its CatchHandler @ 005b4505 */
  CriticalSection__CriticalSection((CriticalSection *)(self + 0x40));
  *(uint16_t *)(self + 0x6a) = 0;
  *(uint16_t *)(self + 0x68) = 0;
  *(uint16_t *)(self + 0x74) = 1;
  *(uint64_t *)(self + 0x78) = 0;
  *(uint64_t *)(self + 0x80) = 0;
  *(uint32_t *)(self + 0x88) = 0;
  self[0x6c] = (SQLDatabase)0x4;
  *(uint32_t *)(self + 0x70) = 0;
  return;
}

/* ======================================================================
 * SQLDatabase__SQLDatabase__005b4540  (Ghidra `~SQLDatabase` @ 005b4540)
 * Signature: uint8_t __thiscall ~SQLDatabase(SQLDatabase * self)
 * Class: SQLDatabase
 * Calls: `CloseThread`, `CriticalSection__CriticalSection__005b71d0`, `free`, `mysql_close`, `usleep`
 * Called by: `GetPortalChapter`, `SMBLevelPortal__GetEnterTheUnknownChapter`, `SMBLevelPortal__GetPortalChapter`, `SMBLevelPortal__GetPortalLevel`, `SMBLevelPortal__LoadSelectedChapter`, `SMBLevelPortal__UploadPortalLevel`
 */
/* WARNING: Removing unreachable block (ram,0x005b478f) */
/* WARNING: Removing unreachable block (ram,0x005b47d5) */
/* WARNING: Removing unreachable block (ram,0x005b479a) */
/* WARNING: Removing unreachable block (ram,0x005b472e) */
/* SQLDatabase__SQLDatabase__005b4540() */

void __thiscall SQLDatabase__SQLDatabase__005b4540(SQLDatabase *self)

{
  allocator *paVar1;
  int *piVar2;
  int iVar3;

  *(uint32_t *)(self + 0x10) = 0;
  if (*(long *)(self + 8) != 0) {
    while (*(int *)(self + 0x18) == 0) {
      /* try { // try from 005b4565 to 005b4589 has its CatchHandler @ 005b4657 */
      usleep(10000);
    }
    CloseThread(*(THREADHANDLESTRUCT **)(self + 8));
    *(uint64_t *)(self + 8) = 0;
  }
  mysql_close(*(uint64_t *)self);
  if (*(int *)(self + 0x88) == -0x5eef3582) {
    *(uint32_t *)(self + 0x88) = 0;
    free(*(void **)(*(long *)(self + 0x78) + -8));
    if (*(int *)(self + 0x70) == 1) {
      free(*(void **)(*(long *)(self + 0x80) + -8));
    }
    *(uint32_t *)(self + 0x88) = 0;
    *(uint16_t *)(self + 0x6a) = 0;
    *(uint16_t *)(self + 0x68) = 0;
    *(uint64_t *)(self + 0x78) = 0;
    *(uint64_t *)(self + 0x80) = 0;
  }
  /* try { // try from 005b459a to 005b459e has its CatchHandler @ 005b47d0 */
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)(self + 0x40));
  paVar1 = (allocator *)(*(long *)(self + 0x38) + -0x18);
  if (paVar1 != (allocator *)&std__string_Rep_S_empty_rep_storage) {
    LOCK();
    piVar2 = (int *)(*(long *)(self + 0x38) + -8);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 < 1) {
      std__string_Rep_M_destroy(paVar1);
    }
  }
  paVar1 = (allocator *)(*(long *)(self + 0x30) + -0x18);
  if (paVar1 != (allocator *)&std__string_Rep_S_empty_rep_storage) {
    LOCK();
    piVar2 = (int *)(*(long *)(self + 0x30) + -8);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 < 1) {
      std__string_Rep_M_destroy(paVar1);
    }
  }
  paVar1 = (allocator *)(*(long *)(self + 0x28) + -0x18);
  if (paVar1 != (allocator *)&std__string_Rep_S_empty_rep_storage) {
    LOCK();
    piVar2 = (int *)(*(long *)(self + 0x28) + -8);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 < 1) {
      std__string_Rep_M_destroy(paVar1);
    }
  }
  paVar1 = (allocator *)(*(long *)(self + 0x20) + -0x18);
  if (paVar1 != (allocator *)&std__string_Rep_S_empty_rep_storage) {
    LOCK();
    piVar2 = (int *)(*(long *)(self + 0x20) + -8);
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
 * SQLDatabase__IsConnectionActive  (Ghidra `IsConnectionActive` @ 005b47f0)
 * Signature: uint8_t __thiscall IsConnectionActive(SQLDatabase * self)
 * Class: SQLDatabase
 * Calls: (none)
 * Called by: (none)
 */
/* SQLDatabase__IsConnectionActive() */

uint32_t __thiscall SQLDatabase__IsConnectionActive(SQLDatabase *self)

{
  return *(uint32_t *)(self + 0x10);
}

/* ======================================================================
 * SQLDatabase__SetProcessingStatus  (Ghidra `SetProcessingStatus` @ 005b4800)
 * Signature: uint8_t __thiscall SetProcessingStatus(SQLDatabase * self, int arg1)
 * Class: SQLDatabase
 * Calls: (none)
 * Called by: (none)
 */
/* SQLDatabase__SetProcessingStatus(int) */

void __thiscall SQLDatabase__SetProcessingStatus(SQLDatabase *self, int arg1)

{
  *(int *)(self + 0x14) = arg1;
  return;
}

/* ======================================================================
 * SQLDatabase__IsProcessingQueries  (Ghidra `IsProcessingQueries` @ 005b4810)
 * Signature: uint8_t __thiscall IsProcessingQueries(SQLDatabase * self)
 * Class: SQLDatabase
 * Calls: (none)
 * Called by: `SMBLevelPortalInterface__Update`
 */
/* SQLDatabase__IsProcessingQueries() */

uint32_t __thiscall SQLDatabase__IsProcessingQueries(SQLDatabase *self)

{
  return *(uint32_t *)(self + 0x14);
}

/* ======================================================================
 * SQLDatabase__WaitForQuery  (Ghidra `WaitForQuery` @ 005b4820)
 * Signature: uint8_t __thiscall WaitForQuery(SQLDatabase * self)
 * Class: SQLDatabase
 * Calls: `usleep`
 * Called by: `SMBLevelPortal__AddChapter`
 */
/* SQLDatabase__WaitForQuery() */

void __thiscall SQLDatabase__WaitForQuery(SQLDatabase *self)

{
  int iVar1;

  iVar1 = *(int *)(self + 0x14);
  while (iVar1 == 1) {
    usleep(100000);
    iVar1 = *(int *)(self + 0x14);
  }
  return;
}

/* ======================================================================
 * SQLDatabase__ReadyConnectionClosure  (Ghidra `ReadyConnectionClosure` @ 005b4850)
 * Signature: uint8_t __thiscall ReadyConnectionClosure(SQLDatabase * self)
 * Class: SQLDatabase
 * Calls: (none)
 * Called by: (none)
 */
/* SQLDatabase__ReadyConnectionClosure() */

void __thiscall SQLDatabase__ReadyConnectionClosure(SQLDatabase *self)

{
  *(uint32_t *)(self + 0x18) = 1;
  return;
}

/* ======================================================================
 * SQLDatabase__ChooseDatabase  (Ghidra `ChooseDatabase` @ 005b4860)
 * Signature: uint8_t __thiscall ChooseDatabase(SQLDatabase * self, char * arg1)
 * Class: SQLDatabase
 * Calls: `mysql_select_db`, `strlen`
 * Called by: `GetPortalChapter`, `SMBLevelPortalInterface__Initialize`, `SMBLevelPortal__GetEnterTheUnknownChapter`, `SMBLevelPortal__GetPortalChapter`, `SMBLevelPortal__GetPortalLevel`, `SMBLevelPortal__LoadSelectedChapter`, `SMBLevelPortal__UploadPortalLevel`
 */
/* SQLDatabase__ChooseDatabase(char const*) */

void __thiscall SQLDatabase__ChooseDatabase(SQLDatabase *self, char *arg1)

{
  if (*(long *)(self + 8) == 0) {
    if (*(long *)self == 0) {
      return;
    }
    mysql_select_db();
  }
  strlen(arg1);
  std__string_assign((char *)(self + 0x38), (ulong)arg1);
  return;
}

/* ======================================================================
 * SQLDatabase__Reconnect  (Ghidra `Reconnect` @ 005b48c0)
 * Signature: uint8_t __thiscall Reconnect(SQLDatabase * self)
 * Class: SQLDatabase
 * Calls: `mysql_init`, `mysql_real_connect`, `mysql_select_db`
 * Called by: (none)
 */
/* SQLDatabase__Reconnect() */

void __thiscall SQLDatabase__Reconnect(SQLDatabase *self)

{
  long lVar1;

  lVar1 = *(long *)self;
  if (lVar1 == 0) {
    lVar1 = mysql_init(0);
    *(long *)self = lVar1;
    mysql_real_connect(lVar1, *(uint64_t *)(self + 0x20), *(uint64_t *)(self + 0x28),
                       *(uint64_t *)(self + 0x30), 0, 0, 0, 0);
    if (lVar1 == 0) {
      return;
    }
  } else {
    mysql_real_connect(lVar1, *(uint64_t *)(self + 0x20), *(uint64_t *)(self + 0x28),
                       *(uint64_t *)(self + 0x30), 0, 0, 0, 0);
  }
  mysql_select_db(lVar1, *(uint64_t *)(self + 0x38));
  return;
}

/* ======================================================================
 * SQLDatabase__Connect  (Ghidra `Connect` @ 005b4960)
 * Signature: uint8_t __thiscall Connect(SQLDatabase * self, SQLDatabaseConnection * arg1)
 * Class: SQLDatabase
 * Calls: `CreateWorkerThread`, `SQLDatabaseQueryProcessor`, `mysql_init`, `mysql_real_connect`, `mysql_server_init`, `strlen`
 * Called by: `GetPortalChapter`, `SMBLevelPortalInterface__Initialize`, `SMBLevelPortal__GetEnterTheUnknownChapter`, `SMBLevelPortal__GetPortalChapter`, `SMBLevelPortal__GetPortalLevel`, `SMBLevelPortal__LoadSelectedChapter`, `SMBLevelPortal__UploadPortalLevel`
 */
/* SQLDatabase__Connect(SQLDatabaseConnection const*) */

void __thiscall SQLDatabase__Connect(SQLDatabase *self, SQLDatabaseConnection *arg1)

{
  char *pcVar1;
  uint64_t uVar2;
  code *local_38;
  SQLDatabase *local_30;
  uint32_t local_28;

  pcVar1 = *(char **)(arg1 + 0x10);
  strlen(pcVar1);
  std__string_assign((char *)(self + 0x20), (ulong)pcVar1);
  pcVar1 = *(char **)arg1;
  strlen(pcVar1);
  std__string_assign((char *)(self + 0x28), (ulong)pcVar1);
  pcVar1 = *(char **)(arg1 + 8);
  strlen(pcVar1);
  std__string_assign((char *)(self + 0x30), (ulong)pcVar1);
  *(uint32_t *)(self + 0x10) = 1;
  if (*(int *)(arg1 + 0x18) != 1) {
    uVar2 = mysql_init(0);
    mysql_server_init(0, 0, 0);
    *(uint64_t *)self = uVar2;
    *(uint64_t *)(self + 8) = 0;
    mysql_real_connect(uVar2, *(uint64_t *)(self + 0x20), *(uint64_t *)(self + 0x28),
                       *(uint64_t *)(self + 0x30), 0, 0, 0, 0);
    return;
  }
  local_28 = 2;
  local_38 = SQLDatabaseQueryProcessor;
  local_30 = self;
  uVar2 = CreateWorkerThread((tagThreadCreate *)&local_38);
  *(uint64_t *)(self + 8) = uVar2;
  return;
}

/* ======================================================================
 * SQLDatabase__PopQueuedQuery  (Ghidra `PopQueuedQuery` @ 005b4a50)
 * Signature: uint8_t __thiscall PopQueuedQuery(SQLDatabase * self)
 * Class: SQLDatabase
 * Calls: `CriticalSection__Lock`, `CriticalSection__Unlock`
 * Called by: `SQLDatabaseQueryProcessor`
 */
/* SQLDatabase__PopQueuedQuery() */

uint64_t __thiscall SQLDatabase__PopQueuedQuery(SQLDatabase *self)

{
  uint64_t *puVar1;
  ushort *puVar2;
  short sVar3;
  long lVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  uint64_t uVar8;
  ushort uVar9;

  uVar8 = 0;
  if (*(short *)(self + 0x68) != 0) {
    uVar8 = **(uint64_t **)(self + 0x78);
    CriticalSection__Lock((CriticalSection *)(self + 0x40), 1);
    uVar5 = *(ushort *)(self + 0x68);
    if (1 < uVar5) {
      lVar4 = 0;
      iVar7 = 0;
      do {
        iVar7 = iVar7 + 1;
        puVar1 = (uint64_t *)(*(long *)(self + 0x78) + lVar4);
        lVar4 = lVar4 + 8;
        *puVar1 = *(uint64_t *)(*(long *)(self + 0x78) + lVar4);
        uVar5 = *(ushort *)(self + 0x68);
      } while (iVar7 < (int)(uVar5 - 1));
    }
    if (*(int *)(self + 0x70) == 1) {
      uVar9 = *(ushort *)(self + 0x6a);
      if (uVar9 != 0) {
        uVar5 = 0;
        do {
          while (true) {
            puVar2 = (ushort *)(*(long *)(self + 0x80) + (ulong)uVar5 * 2);
            if (*puVar2 != 0)
              break;
            *puVar2 = 0xffff;
            uVar9 = *(ushort *)(self + 0x6a);
            uVar5 = uVar5 + 1;
            if (uVar9 <= uVar5)
              goto LAB_005b4b2f;
          }
          uVar6 = *puVar2 - 1;
          if (uVar6 < 0xfffe) {
            *puVar2 = uVar6;
            uVar9 = *(ushort *)(self + 0x6a);
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar9);
      LAB_005b4b2f:
        uVar5 = *(ushort *)(self + 0x68);
      }
    }
    sVar3 = 0;
    if (uVar5 != 0) {
      sVar3 = uVar5 - 1;
    }
    *(short *)(self + 0x68) = sVar3;
    CriticalSection__Unlock((CriticalSection *)(self + 0x40));
  }
  return uVar8;
}

/* ======================================================================
 * SQLDatabase__AddQueuedQuery  (Ghidra `AddQueuedQuery` @ 005b4b40)
 * Signature: uint8_t __thiscall AddQueuedQuery(SQLDatabase * self, SQLQuery * arg1)
 * Class: SQLDatabase
 * Calls: `CriticalSection__Lock`, `CriticalSection__Unlock`, `free`, `malloc`, `memcpy`, `operator_new`
 * Called by: (none)
 */
/* SQLDatabase__AddQueuedQuery(SQLQuery*) */

void __thiscall SQLDatabase__AddQueuedQuery(SQLDatabase *self, SQLQuery *arg1)

{
  void *pvVar1;
  ushort uVar2;
  short sVar3;
  void *pvVar4;
  void *pvVar5;
  ulong uVar6;
  ushort *puVar7;
  ushort uVar8;
  uint64_t *puVar9;
  ulong uVar10;
  uint64_t *puVar11;

  if (*(short *)(arg1 + 0x22) == 1) {
    puVar11 = operator_new(0x28);
    *puVar11 = *(uint64_t *)arg1;
    puVar11[1] = *(uint64_t *)(arg1 + 8);
    puVar11[2] = *(uint64_t *)(arg1 + 0x10);
    puVar11[3] = *(uint64_t *)(arg1 + 0x18);
    puVar11[4] = *(uint64_t *)(arg1 + 0x20);
    CriticalSection__Lock((CriticalSection *)(self + 0x40), 1);
    if (*(int *)(self + 0x88) == -0x5eef3582) {
      uVar2 = *(ushort *)(self + 0x68);
      if (*(ushort *)(self + 0x6a) <= uVar2) {
        uVar2 = *(ushort *)(self + 0x6a) + *(short *)(self + 0x74);
        uVar10 = (ulong)(byte)self[0x6c];
        pvVar4 = (void *)0x0;
        pvVar1 = *(void **)(self + 0x78);
        *(ushort *)(self + 0x6a) = uVar2;
        uVar6 = (ulong)uVar2 * 8;
        pvVar5 = malloc(uVar10 + 0x10 + uVar6);
        if (pvVar5 != (void *)0x0) {
          pvVar4 =
              (void *)((long)pvVar5 + 0x10U + (uVar10 - ((long)pvVar5 + 0x10U) % uVar10) % uVar10);
          *(ulong *)((long)pvVar4 + -0x10) = uVar6;
          *(void **)((long)pvVar4 + -8) = pvVar5;
          if (pvVar1 != (void *)0x0) {
            uVar10 = *(ulong *)((long)pvVar1 + -0x10);
            if (uVar6 <= *(ulong *)((long)pvVar1 + -0x10)) {
              uVar10 = uVar6;
            }
            memcpy(pvVar4, pvVar1, uVar10);
            free(*(void **)((long)pvVar1 + -8));
          }
        }
        pvVar1 = *(void **)(self + 0x80);
        *(void **)(self + 0x78) = pvVar4;
        if (pvVar1 != (void *)0x0) {
          uVar8 = *(ushort *)(self + 0x6a);
          uVar10 = (ulong)(byte)self[0x6c];
          pvVar4 = (void *)0x0;
          uVar6 = (ulong)uVar8 * 2;
          pvVar5 = malloc(uVar10 + 0x10 + uVar6);
          if (pvVar5 != (void *)0x0) {
            pvVar4 = (void *)((long)pvVar5 + 0x10U +
                              (uVar10 - ((long)pvVar5 + 0x10U) % uVar10) % uVar10);
            *(ulong *)((long)pvVar4 + -0x10) = uVar6;
            *(void **)((long)pvVar4 + -8) = pvVar5;
            uVar10 = *(ulong *)((long)pvVar1 + -0x10);
            if (uVar6 <= *(ulong *)((long)pvVar1 + -0x10)) {
              uVar10 = uVar6;
            }
            memcpy(pvVar4, pvVar1, uVar10);
            free(*(void **)((long)pvVar1 + -8));
            uVar8 = *(ushort *)(self + 0x6a);
          }
          uVar2 = *(ushort *)(self + 0x68);
          *(void **)(self + 0x80) = pvVar4;
          if (uVar8 <= uVar2)
            goto LAB_005b4f08;
          while (true) {
            uVar6 = (ulong)uVar2;
            uVar2 = uVar2 + 1;
            *(uint16_t *)((long)pvVar4 + uVar6 * 2) = 0xffff;
            if (uVar8 <= uVar2)
              break;
            pvVar4 = *(void **)(self + 0x80);
          }
        }
        uVar2 = *(ushort *)(self + 0x68);
      }
    } else {
      uVar6 = (ulong)(byte)self[0x6c];
      *(uint32_t *)(self + 0x70) = 0;
      pvVar4 = malloc(uVar6 + 0x38);
      puVar9 = (uint64_t *)0x0;
      if (pvVar4 != (void *)0x0) {
        puVar9 =
            (uint64_t *)((uVar6 - ((long)pvVar4 + 0x10U) % uVar6) % uVar6 + (long)pvVar4 + 0x10U);
        puVar9[-2] = 0x28;
        puVar9[-1] = pvVar4;
      }
      *(uint64_t **)(self + 0x78) = puVar9;
      uVar2 = 0;
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9[2] = 0;
      puVar9[3] = 0;
      puVar9[4] = 0;
      *(uint16_t *)(self + 0x68) = 0;
      *(uint16_t *)(self + 0x6a) = 5;
      *(uint32_t *)(self + 0x88) = 0xa110ca7e;
      *(uint16_t *)(self + 0x74) = 5;
    }
  LAB_005b4f08:
    if ((*(int *)(self + 0x70) == 1) && (*(short *)(self + 0x6a) != 0)) {
      puVar7 = *(ushort **)(self + 0x80);
      sVar3 = 1;
      uVar8 = *puVar7;
      while (uVar8 != 0xffff) {
        puVar7 = puVar7 + 1;
        if (sVar3 == *(short *)(self + 0x6a))
          goto LAB_005b4f12;
        sVar3 = sVar3 + 1;
        uVar8 = *puVar7;
      }
      *puVar7 = uVar2;
      uVar2 = *(ushort *)(self + 0x68);
    }
  LAB_005b4f12:
    *(uint64_t **)(*(long *)(self + 0x78) + (ulong)uVar2 * 8) = puVar11;
    *(short *)(self + 0x68) = *(short *)(self + 0x68) + 1;
    goto LAB_005b4c3f;
  }
  CriticalSection__Lock((CriticalSection *)(self + 0x40), 1);
  if (*(int *)(self + 0x88) == -0x5eef3582) {
    uVar2 = *(ushort *)(self + 0x68);
    if (*(ushort *)(self + 0x6a) <= uVar2) {
      uVar2 = *(ushort *)(self + 0x6a) + *(short *)(self + 0x74);
      uVar10 = (ulong)(byte)self[0x6c];
      pvVar4 = (void *)0x0;
      pvVar1 = *(void **)(self + 0x78);
      *(ushort *)(self + 0x6a) = uVar2;
      uVar6 = (ulong)uVar2 * 8;
      pvVar5 = malloc(uVar10 + 0x10 + uVar6);
      if (pvVar5 != (void *)0x0) {
        pvVar4 =
            (void *)((long)pvVar5 + 0x10U + (uVar10 - ((long)pvVar5 + 0x10U) % uVar10) % uVar10);
        *(ulong *)((long)pvVar4 + -0x10) = uVar6;
        *(void **)((long)pvVar4 + -8) = pvVar5;
        if (pvVar1 != (void *)0x0) {
          uVar10 = *(ulong *)((long)pvVar1 + -0x10);
          if (uVar6 <= *(ulong *)((long)pvVar1 + -0x10)) {
            uVar10 = uVar6;
          }
          memcpy(pvVar4, pvVar1, uVar10);
          free(*(void **)((long)pvVar1 + -8));
        }
      }
      pvVar1 = *(void **)(self + 0x80);
      *(void **)(self + 0x78) = pvVar4;
      if (pvVar1 != (void *)0x0) {
        uVar8 = *(ushort *)(self + 0x6a);
        uVar10 = (ulong)(byte)self[0x6c];
        pvVar4 = (void *)0x0;
        uVar6 = (ulong)uVar8 * 2;
        pvVar5 = malloc(uVar10 + 0x10 + uVar6);
        if (pvVar5 != (void *)0x0) {
          pvVar4 =
              (void *)((long)pvVar5 + 0x10U + (uVar10 - ((long)pvVar5 + 0x10U) % uVar10) % uVar10);
          *(ulong *)((long)pvVar4 + -0x10) = uVar6;
          *(void **)((long)pvVar4 + -8) = pvVar5;
          uVar10 = *(ulong *)((long)pvVar1 + -0x10);
          if (uVar6 <= *(ulong *)((long)pvVar1 + -0x10)) {
            uVar10 = uVar6;
          }
          memcpy(pvVar4, pvVar1, uVar10);
          free(*(void **)((long)pvVar1 + -8));
          uVar8 = *(ushort *)(self + 0x6a);
        }
        uVar2 = *(ushort *)(self + 0x68);
        *(void **)(self + 0x80) = pvVar4;
        if (uVar8 <= uVar2)
          goto LAB_005b4c22;
        while (true) {
          uVar6 = (ulong)uVar2;
          uVar2 = uVar2 + 1;
          *(uint16_t *)((long)pvVar4 + uVar6 * 2) = 0xffff;
          if (uVar8 <= uVar2)
            break;
          pvVar4 = *(void **)(self + 0x80);
        }
      }
      uVar2 = *(ushort *)(self + 0x68);
    }
  } else {
    uVar6 = (ulong)(byte)self[0x6c];
    *(uint32_t *)(self + 0x70) = 0;
    pvVar4 = malloc(uVar6 + 0x38);
    puVar11 = (uint64_t *)0x0;
    if (pvVar4 != (void *)0x0) {
      puVar11 =
          (uint64_t *)((long)pvVar4 + 0x10U + (uVar6 - ((long)pvVar4 + 0x10U) % uVar6) % uVar6);
      puVar11[-2] = 0x28;
      puVar11[-1] = pvVar4;
    }
    *(uint64_t **)(self + 0x78) = puVar11;
    uVar2 = 0;
    *puVar11 = 0;
    puVar11[1] = 0;
    puVar11[2] = 0;
    puVar11[3] = 0;
    puVar11[4] = 0;
    *(uint16_t *)(self + 0x68) = 0;
    *(uint16_t *)(self + 0x6a) = 5;
    *(uint32_t *)(self + 0x88) = 0xa110ca7e;
    *(uint16_t *)(self + 0x74) = 5;
  }
LAB_005b4c22:
  if ((*(int *)(self + 0x70) == 1) && (*(short *)(self + 0x6a) != 0)) {
    puVar7 = *(ushort **)(self + 0x80);
    sVar3 = 0;
    uVar8 = *puVar7;
    while (uVar8 != 0xffff) {
      puVar7 = puVar7 + 1;
      sVar3 = sVar3 + 1;
      if (sVar3 == *(short *)(self + 0x6a))
        goto LAB_005b4c2c;
      uVar8 = *puVar7;
    }
    *puVar7 = uVar2;
    uVar2 = *(ushort *)(self + 0x68);
  }
LAB_005b4c2c:
  *(SQLQuery **)(*(long *)(self + 0x78) + (ulong)uVar2 * 8) = arg1;
  *(short *)(self + 0x68) = *(short *)(self + 0x68) + 1;
LAB_005b4c3f:
  CriticalSection__Unlock((CriticalSection *)(self + 0x40));
  return;
}

/* ======================================================================
 * SQLDatabase__ExecuteQuery  (Ghidra `ExecuteQuery` @ 005b50f0)
 * Signature: uint8_t __thiscall ExecuteQuery(SQLDatabase * self, SQLQuery * arg1, int arg2)
 * Class: SQLDatabase
 * Calls: `CreateMessage`, `UserAlertCloseCurrent`, `malloc`, `memcpy`, `mysql_errno`, `mysql_init`, `mysql_real_connect`, `mysql_real_query`, `mysql_select_db`, `mysql_store_result` (+1 more)
 * Called by: `GetPortalChapter`, `SMBLevelPortalInterface__GetList`, `SMBLevelPortal__AddChapter`, `SMBLevelPortal__GetEnterTheUnknownChapter`, `SMBLevelPortal__GetPortalChapter`, `SMBLevelPortal__GetPortalLevel`, `SMBLevelPortal__GetUserLibrary`, `SMBLevelPortal__LoadSelectedChapter`, `SMBLevelPortal__UpdateLevelStats`, `SMBLevelPortal__UploadPortalLevel`
 */
/* SQLDatabase__ExecuteQuery(SQLQuery*, int) */

uint64_t *__thiscall SQLDatabase__ExecuteQuery(SQLDatabase *self, SQLQuery *arg1, int arg2)

{
  void *__src;
  int iVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  void *__dest;
  long lVar4;
  uint32_t local_98[2];
  wchar_t *local_90;
  wchar_t *local_88;
  uint8_t *local_80;
  uint64_t local_78;
  code *local_70;
  uint64_t local_68;
  uint64_t local_60;
  uint64_t local_58;
  uint64_t local_50;
  uint64_t local_48;
  uint64_t local_40;
  uint64_t local_38;
  uint64_t local_30;

  if (((arg2 != 1) && (*(long *)(self + 8) != 0)) && (*(short *)(arg1 + 0x20) != 1)) {
    iVar1 = *(int *)(arg1 + 0x18);
    __src = *(void **)(arg1 + 8);
    __dest = malloc((ulong)(iVar1 + 1));
    *(void **)(arg1 + 8) = __dest;
    if (__src != __dest) {
      memcpy(__dest, __src, (ulong)(iVar1 + 1));
    }
    *(uint32_t *)(arg1 + 0x1c) = 3;
    AddQueuedQuery(self, arg1);
    *(uint32_t *)(self + 0x14) = 1;
    return (uint64_t *)0x0;
  }
  uVar2 = *(uint64_t *)self;
  iVar1 = mysql_real_query(uVar2, *(uint64_t *)(arg1 + 8), *(uint32_t *)(arg1 + 0x18));
  if (iVar1 == 0) {
  LAB_005b5328:
    uVar2 = mysql_store_result(uVar2);
    puVar3 = operator_new(8);
    *(uint64_t **)(arg1 + 0x10) = puVar3;
    *puVar3 = uVar2;
    *(uint32_t *)(arg1 + 0x1c) = 2;
  } else {
    iVar1 = mysql_errno(uVar2);
    if ((iVar1 == 0x7d6) || (iVar1 == 0x7dd)) {
      lVar4 = *(long *)self;
      if (lVar4 == 0) {
        lVar4 = mysql_init(0);
        *(long *)self = lVar4;
        mysql_real_connect(lVar4, *(uint64_t *)(self + 0x20), *(uint64_t *)(self + 0x28),
                           *(uint64_t *)(self + 0x30), 0, 0, 0, 0);
        if (lVar4 != 0)
          goto LAB_005b517e;
      } else {
        mysql_real_connect(lVar4, *(uint64_t *)(self + 0x20), *(uint64_t *)(self + 0x28),
                           *(uint64_t *)(self + 0x30), 0, 0, 0, 0);
      LAB_005b517e:
        mysql_select_db(lVar4, *(uint64_t *)(self + 0x38));
      }
      iVar1 = mysql_real_query(uVar2, *(uint64_t *)(arg1 + 8), *(uint32_t *)(arg1 + 0x18));
      if (iVar1 == 0)
        goto LAB_005b5328;
      iVar1 = mysql_errno(uVar2);
      if ((iVar1 != 0x7dd) && (iVar1 != 0x7d6))
        goto LAB_005b530a;
      lVar4 = *(long *)self;
      if (lVar4 == 0) {
        lVar4 = mysql_init(0);
        *(long *)self = lVar4;
        mysql_real_connect(lVar4, *(uint64_t *)(self + 0x20), *(uint64_t *)(self + 0x28),
                           *(uint64_t *)(self + 0x30), 0, 0, 0, 0);
        if (lVar4 != 0)
          goto LAB_005b51eb;
      } else {
        mysql_real_connect(lVar4, *(uint64_t *)(self + 0x20), *(uint64_t *)(self + 0x28),
                           *(uint64_t *)(self + 0x30), 0, 0, 0, 0);
      LAB_005b51eb:
        mysql_select_db(lVar4, *(uint64_t *)(self + 0x38));
      }
      iVar1 = mysql_real_query(uVar2, *(uint64_t *)(arg1 + 8), *(uint32_t *)(arg1 + 0x18));
      if (iVar1 == 0)
        goto LAB_005b5328;
      iVar1 = mysql_errno(uVar2);
      if ((iVar1 != 0x7dd) && (iVar1 != 0x7d6))
        goto LAB_005b530a;
      lVar4 = *(long *)self;
      if (lVar4 == 0) {
        lVar4 = mysql_init(0);
        *(long *)self = lVar4;
        mysql_real_connect(lVar4, *(uint64_t *)(self + 0x20), *(uint64_t *)(self + 0x28),
                           *(uint64_t *)(self + 0x30), 0, 0, 0, 0);
        if (lVar4 != 0)
          goto LAB_005b5258;
      } else {
        mysql_real_connect(lVar4, *(uint64_t *)(self + 0x20), *(uint64_t *)(self + 0x28),
                           *(uint64_t *)(self + 0x30), 0, 0, 0, 0);
      LAB_005b5258:
        mysql_select_db(lVar4, *(uint64_t *)(self + 0x38));
      }
      iVar1 = mysql_real_query(uVar2, *(uint64_t *)(arg1 + 8), *(uint32_t *)(arg1 + 0x18));
      if (iVar1 == 0)
        goto LAB_005b5328;
      mysql_errno(uVar2);
      local_78 = 0;
      local_68 = 0;
      local_60 = 0;
      local_58 = 0;
      local_50 = 0;
      local_48 = 0;
      local_40 = 0;
      local_38 = 0;
      local_30 = 0;
      local_90 = L"SQL Server Error";
      local_88 = L"A Connection to the SQL Server\ncould not be established after 3 "
                 L"retries\nPlease try to connect again later";
      local_98[0] = 0xe;
      local_80 = &DAT_005de598 /* R:1.1070257868166055e-43f */;
      local_70 = UserAlertCloseCurrent;
      CreateMessage(local_98);
    }
  LAB_005b530a:
    *(uint32_t *)(arg1 + 0x1c) = 1;
    puVar3 = (uint64_t *)0x0;
  }
  return puVar3;
}

/* ======================================================================
 * SQLDatabase__GetLastAutoIncrementID  (Ghidra `GetLastAutoIncrementID` @ 005b59a0)
 * Signature: uint8_t __thiscall GetLastAutoIncrementID(SQLDatabase * self)
 * Class: SQLDatabase
 * Calls: `mysql_insert_id`
 * Called by: `SMBLevelPortal__UploadPortalLevel`
 */
/* SQLDatabase__GetLastAutoIncrementID() */

void __thiscall SQLDatabase__GetLastAutoIncrementID(SQLDatabase *self)

{
  mysql_insert_id(*(uint64_t *)self);
  return;
}
