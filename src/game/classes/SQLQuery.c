/* src/game/classes/SQLQuery.c — 3 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "SQLQuery.h"

/* ======================================================================
 * SQLQuery__HasQueryCompletedSuccessfully  (Ghidra `HasQueryCompletedSuccessfully` @ 005b3e00)
 * Signature: uint8_t __thiscall HasQueryCompletedSuccessfully(SQLQuery * self)
 * Class: SQLQuery
 * Calls: (none)
 * Called by: (none)
 */
/* SQLQuery__HasQueryCompletedSuccessfully() */

bool __thiscall SQLQuery__HasQueryCompletedSuccessfully(SQLQuery *self)

{
  return *(int *)(self + 0x1c) == 2;
}

/* ======================================================================
 * SQLQuery__SQLQuery  (Ghidra `~SQLQuery` @ 005b3e10)
 * Signature: uint8_t __thiscall ~SQLQuery(SQLQuery * self)
 * Class: SQLQuery
 * Calls: `mysql_free_result`, `operator_delete`
 * Called by: `EditorFormChapterUpload__LoadLevelLibrary`, `GLOBAL_sub_I_strPortalUploadQuery`, `GetPortalChapter`, `SMBLevelPortal__AddChapter`, `SMBLevelPortal__GetEnterTheUnknownChapter`, `SMBLevelPortal__GetPortalChapter`, `SMBLevelPortal__GetPortalLevel`, `SMBLevelPortal__LoadSelectedChapter`, `SMBLevelPortal__UpdateLevelStats`, `SMBLevelPortal__UploadPortalLevel`
 */
/* SQLQuery__SQLQuery() */

void __thiscall SQLQuery__SQLQuery(SQLQuery *self)

{
  long *plVar1;

  plVar1 = *(long **)(self + 0x10);
  if (plVar1 != (long *)0x0) {
    if (*plVar1 != 0) {
      mysql_free_result();
    }
    operator_delete(plVar1);
  }
  *(uint64_t *)(self + 0x10) = 0;
  return;
}

/* ======================================================================
 * SQLQuery__ReleaseResults  (Ghidra `ReleaseResults` @ 005b3e60)
 * Signature: uint8_t __thiscall ReleaseResults(SQLQuery * self)
 * Class: SQLQuery
 * Calls: `mysql_free_result`, `operator_delete`
 * Called by: `SMBLevelPortalInterface__FillList`
 */
/* SQLQuery__ReleaseResults() */

void __thiscall SQLQuery__ReleaseResults(SQLQuery *self)

{
  long *plVar1;

  plVar1 = *(long **)(self + 0x10);
  if (plVar1 != (long *)0x0) {
    if (*plVar1 != 0) {
      mysql_free_result();
    }
    operator_delete(plVar1);
  }
  *(uint64_t *)(self + 0x10) = 0;
  return;
}
