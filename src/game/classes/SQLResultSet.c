/* src/game/classes/SQLResultSet.c — 8 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "SQLResultSet.h"

/* ======================================================================
 * SQLResultSet__SQLResultSet  (Ghidra `SQLResultSet` @ 005b3eb0)
 * Signature: uint8_t __thiscall SQLResultSet(SQLResultSet * self)
 * Class: SQLResultSet
 * Calls: (none)
 * Called by: (none)
 */
/* SQLResultSet__SQLResultSet() */

void __thiscall SQLResultSet__SQLResultSet(SQLResultSet *self)

{
  *(uint64_t *)self = 0;
  return;
}

/* ======================================================================
 * SQLResultSet__SQLResultSet__005b3ec0  (Ghidra `~SQLResultSet` @ 005b3ec0)
 * Signature: uint8_t __thiscall ~SQLResultSet(SQLResultSet * self)
 * Class: SQLResultSet
 * Calls: `mysql_free_result`
 * Called by: (none)
 */
/* SQLResultSet__SQLResultSet__005b3ec0() */

void __thiscall SQLResultSet__SQLResultSet__005b3ec0(SQLResultSet *self)

{
  if (*(long *)self != 0) {
    mysql_free_result();
    return;
  }
  return;
}

/* ======================================================================
 * SQLResultSet__GetFieldIndex  (Ghidra `GetFieldIndex` @ 005b3ee0)
 * Signature: uint8_t __thiscall GetFieldIndex(SQLResultSet * self, char * arg1)
 * Class: SQLResultSet
 * Calls: `strcmp`
 * Called by: (none)
 */
/* SQLResultSet__GetFieldIndex(char const*) */

int __thiscall SQLResultSet__GetFieldIndex(SQLResultSet *self,char *arg1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint64_t *puVar4;
  
  iVar3 = -1;
  iVar1 = *(int *)(*(long *)self + 8);
  if (iVar1 != 0) {
    puVar4 = *(uint64_t **)(*(long *)self + 0x10);
    iVar3 = 0;
    while( true ) {
      iVar2 = strcmp((char *)*puVar4,arg1);
      if (iVar2 == 0) break;
      iVar3 = iVar3 + 1;
      puVar4 = puVar4 + 0x10;
      if (iVar3 == iVar1) {
        return -1;
      }
    }
  }
  return iVar3;
}

/* ======================================================================
 * SQLResultSet__GetINT  (Ghidra `GetINT` @ 005b3f60)
 * Signature: uint8_t __thiscall GetINT(SQLResultSet * self, SQLFieldName * arg1, int * arg2, uint * arg3)
 * Class: SQLResultSet
 * Calls: `StringToInt`, `memcpy`, `strcmp`
 * Called by: `EditorFormChapterUpload__LoadLevelLibrary`, `FillPortalInterfaceElement`, `GetPortalChapter`, `SMBLevelPortal__GetEnterTheUnknownChapter`, `SMBLevelPortal__GetPortalChapter`, `SMBLevelPortal__GetPortalLevel`, `SMBLevelPortal__LoadSelectedChapter`
 */
/* SQLResultSet__GetINT(SQLFieldName const*, int*, unsigned int*) */

uint64_t __thiscall
SQLResultSet__GetINT(SQLResultSet *self,SQLFieldName *arg1,int *arg2,uint *arg3)

{
  uint uVar1;
  long lVar2;
  char *__s2;
  uint8_t *__src;
  int iVar3;
  uint64_t uVar4;
  size_t __n;
  long lVar5;
  uint64_t *puVar6;
  uint8_t local_58 [40];
  
  uVar4 = 0;
  lVar2 = *(long *)self;
  if ((lVar2 != 0) && (arg2 != (int *)0x0)) {
    __s2 = *(char **)arg1;
    if (__s2 == (char *)0x0) {
      lVar5 = (long)*(int *)(arg1 + 8);
LAB_005b3ff3:
      lVar5 = lVar5 << 3;
    }
    else {
      uVar1 = *(uint *)(lVar2 + 8);
      lVar5 = -8;
      if (uVar1 != 0) {
        puVar6 = *(uint64_t **)(lVar2 + 0x10);
        lVar5 = 0;
        do {
          iVar3 = strcmp((char *)*puVar6,__s2);
          if (iVar3 == 0) goto LAB_005b3ff3;
          lVar5 = lVar5 + 1;
          puVar6 = puVar6 + 0x10;
        } while ((uint)lVar5 < uVar1);
        lVar5 = -8;
      }
    }
    __n = *(size_t *)(lVar5 + *(long *)(lVar2 + 0x70));
    __src = *(uint8_t **)(*(long *)(lVar2 + 0x68) + lVar5);
    if (__src != local_58) {
      memcpy(local_58,__src,__n);
      __n = *(size_t *)(*(long *)(lVar2 + 0x70) + lVar5);
    }
    local_58[__n] = 0;
    iVar3 = StringToInt(local_58);
    if (arg3 != (uint *)0x0) {
      *arg3 = (uint)*(uint64_t *)(*(long *)(lVar2 + 0x70) + lVar5);
    }
    *arg2 = iVar3;
    uVar4 = 1;
  }
  return uVar4;
}

/* ======================================================================
 * SQLResultSet__GetFLOAT  (Ghidra `GetFLOAT` @ 005b4090)
 * Signature: uint8_t __thiscall GetFLOAT(SQLResultSet * self, SQLFieldName * arg1, float * arg2, uint * arg3)
 * Class: SQLResultSet
 * Calls: `StringToFloat`, `memcpy`, `strcmp`
 * Called by: `SMBLevelPortal__GetPortalLevel`
 */
/* SQLResultSet__GetFLOAT(SQLFieldName const*, float*, unsigned int*) */

uint64_t __thiscall
SQLResultSet__GetFLOAT(SQLResultSet *self,SQLFieldName *arg1,float *arg2,uint *arg3)

{
  uint uVar1;
  long lVar2;
  char *__s2;
  uint8_t *__src;
  int iVar3;
  uint64_t uVar4;
  size_t __n;
  long lVar5;
  uint64_t *puVar6;
  float fVar7;
  uint8_t local_58 [40];
  
  uVar4 = 0;
  lVar2 = *(long *)self;
  if ((lVar2 != 0) && (arg2 != (float *)0x0)) {
    __s2 = *(char **)arg1;
    if (__s2 == (char *)0x0) {
      lVar5 = (long)*(int *)(arg1 + 8);
LAB_005b4123:
      lVar5 = lVar5 << 3;
    }
    else {
      uVar1 = *(uint *)(lVar2 + 8);
      lVar5 = -8;
      if (uVar1 != 0) {
        puVar6 = *(uint64_t **)(lVar2 + 0x10);
        lVar5 = 0;
        do {
          iVar3 = strcmp((char *)*puVar6,__s2);
          if (iVar3 == 0) goto LAB_005b4123;
          lVar5 = lVar5 + 1;
          puVar6 = puVar6 + 0x10;
        } while ((uint)lVar5 < uVar1);
        lVar5 = -8;
      }
    }
    __n = *(size_t *)(lVar5 + *(long *)(lVar2 + 0x70));
    __src = *(uint8_t **)(*(long *)(lVar2 + 0x68) + lVar5);
    if (__src != local_58) {
      memcpy(local_58,__src,__n);
      __n = *(size_t *)(*(long *)(lVar2 + 0x70) + lVar5);
    }
    local_58[__n] = 0;
    fVar7 = (float)StringToFloat(local_58);
    if (arg3 != (uint *)0x0) {
      *arg3 = (uint)*(uint64_t *)(*(long *)(lVar2 + 0x70) + lVar5);
    }
    *arg2 = fVar7;
    uVar4 = 1;
  }
  return uVar4;
}

/* ======================================================================
 * SQLResultSet__GetString  (Ghidra `GetString` @ 005b41c0)
 * Signature: uint8_t __thiscall GetString(SQLResultSet * self, SQLFieldName * arg1, char * * arg2, uint * arg3)
 * Class: SQLResultSet
 * Calls: `malloc`, `memcpy`, `strcmp`
 * Called by: `EditorFormChapterUpload__LoadLevelLibrary`, `FillPortalInterfaceElement`, `GetPortalChapter`, `SMBLevelPortal__GetPortalChapter`, `SMBLevelPortal__GetPortalLevel`, `SetAuthorText`
 */
/* SQLResultSet__GetString(SQLFieldName const*, char**, unsigned int*) */

uint64_t __thiscall
SQLResultSet__GetString(SQLResultSet *self,SQLFieldName *arg1,char **arg2,uint *arg3)

{
  uint uVar1;
  long lVar2;
  char *pcVar3;
  int iVar4;
  char *__dest;
  uint64_t uVar5;
  ulong uVar6;
  uint64_t *puVar7;
  long lVar8;
  
  uVar5 = 0;
  lVar2 = *(long *)self;
  if ((lVar2 != 0) && (arg2 != (char **)0x0)) {
    pcVar3 = *(char **)arg1;
    if (pcVar3 == (char *)0x0) {
      lVar8 = (long)*(int *)(arg1 + 8);
LAB_005b4253:
      lVar8 = lVar8 << 3;
    }
    else {
      uVar1 = *(uint *)(lVar2 + 8);
      lVar8 = -8;
      if (uVar1 != 0) {
        puVar7 = *(uint64_t **)(lVar2 + 0x10);
        lVar8 = 0;
        do {
          iVar4 = strcmp((char *)*puVar7,pcVar3);
          if (iVar4 == 0) goto LAB_005b4253;
          lVar8 = lVar8 + 1;
          puVar7 = puVar7 + 0x10;
        } while ((uint)lVar8 < uVar1);
        lVar8 = -8;
      }
    }
    uVar6 = *(ulong *)(lVar8 + *(long *)(lVar2 + 0x70));
    uVar1 = (uint)uVar6;
    __dest = malloc((ulong)(uVar1 + 1));
    pcVar3 = *(char **)(*(long *)(lVar2 + 0x68) + lVar8);
    if (pcVar3 != __dest) {
      memcpy(__dest,pcVar3,uVar6 & 0xffffffff);
      uVar6 = *(ulong *)(lVar8 + *(long *)(lVar2 + 0x70));
    }
    __dest[uVar6] = '\0';
    if (arg3 != (uint *)0x0) {
      *arg3 = uVar1;
    }
    *arg2 = __dest;
    uVar5 = 1;
  }
  return uVar5;
}

/* ======================================================================
 * SQLResultSet__GetBlob  (Ghidra `GetBlob` @ 005b42f0)
 * Signature: uint8_t __thiscall GetBlob(SQLResultSet * self, SQLFieldName * arg1, void * * arg2, uint * arg3)
 * Class: SQLResultSet
 * Calls: `malloc`, `memcpy`, `strcmp`
 * Called by: `SMBLevelPortal__GetPortalLevel`
 */
/* SQLResultSet__GetBlob(SQLFieldName const*, void**, unsigned int*) */

uint64_t __thiscall
SQLResultSet__GetBlob(SQLResultSet *self,SQLFieldName *arg1,void **arg2,uint *arg3)

{
  uint uVar1;
  long lVar2;
  char *__s2;
  void *__src;
  int iVar3;
  void *__dest;
  uint64_t uVar4;
  long lVar5;
  uint64_t *puVar6;
  
  uVar4 = 0;
  lVar2 = *(long *)self;
  if ((lVar2 != 0) && (arg2 != (void **)0x0)) {
    __s2 = *(char **)arg1;
    if (__s2 == (char *)0x0) {
      lVar5 = (long)*(int *)(arg1 + 8) << 3;
    }
    else {
      uVar1 = *(uint *)(lVar2 + 8);
      lVar5 = -8;
      if (uVar1 != 0) {
        puVar6 = *(uint64_t **)(lVar2 + 0x10);
        lVar5 = 0;
        do {
          iVar3 = strcmp((char *)*puVar6,__s2);
          if (iVar3 == 0) {
            lVar5 = lVar5 * 8;
            goto LAB_005b4389;
          }
          lVar5 = lVar5 + 1;
          puVar6 = puVar6 + 0x10;
        } while ((uint)lVar5 < uVar1);
        lVar5 = -8;
      }
    }
LAB_005b4389:
    uVar1 = *(uint *)(*(long *)(lVar2 + 0x70) + lVar5);
    __dest = malloc((ulong)(uVar1 + 1));
    __src = *(void **)(*(long *)(lVar2 + 0x68) + lVar5);
    if (__src != __dest) {
      memcpy(__dest,__src,(ulong)uVar1);
    }
    if (arg3 != (uint *)0x0) {
      *arg3 = uVar1;
    }
    *arg2 = __dest;
    uVar4 = 1;
  }
  return uVar4;
}

/* ======================================================================
 * SQLResultSet__NextRow  (Ghidra `NextRow` @ 005b4420)
 * Signature: uint8_t __thiscall NextRow(SQLResultSet * self)
 * Class: SQLResultSet
 * Calls: `mysql_fetch_lengths`, `mysql_fetch_row`
 * Called by: `EditorFormChapterUpload__LoadLevelLibrary`, `GetPortalChapter`, `SMBLevelPortalInterface__FillList`, `SMBLevelPortal__GetEnterTheUnknownChapter`, `SMBLevelPortal__GetPortalChapter`, `SMBLevelPortal__GetPortalLevel`, `SMBLevelPortal__LoadSelectedChapter`
 */
/* SQLResultSet__NextRow() */

bool __thiscall SQLResultSet__NextRow(SQLResultSet *self)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  
  lVar1 = *(long *)self;
  bVar3 = false;
  if (lVar1 != 0) {
    lVar2 = mysql_fetch_row(lVar1);
    if (lVar2 != 0) {
      mysql_fetch_lengths(lVar1);
    }
    bVar3 = lVar2 != 0;
  }
  return bVar3;
}
