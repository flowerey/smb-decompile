/* src/game/classes/UnixUserProfile.c — 18 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "UnixUserProfile.h"

/* ======================================================================
 * UnixUserProfile__GetUserName  (Ghidra `GetUserName` @ 005b8a60)
 * Signature: uint8_t __stdcall GetUserName(void)
 * Class: UnixUserProfile
 * Calls: (none)
 * Called by: (none)
 */
/* UnixUserProfile__GetUserName() */

uint64_t UnixUserProfile__GetUserName(void)

{
  return 0;
}

/* ======================================================================
 * UnixUserProfile__GetFileSize  (Ghidra `GetFileSize` @ 005b8a70)
 * Signature: uint8_t __stdcall GetFileSize(void)
 * Class: UnixUserProfile
 * Calls: (none)
 * Called by: (none)
 */
/* UnixUserProfile__GetFileSize() */

uint64_t UnixUserProfile__GetFileSize(void)

{
  return 0;
}

/* ======================================================================
 * UnixUserProfile__Reset  (Ghidra `Reset` @ 005b8a80)
 * Signature: uint8_t __stdcall Reset(void)
 * Class: UnixUserProfile
 * Calls: (none)
 * Called by: (none)
 */
/* UnixUserProfile__Reset() */

void UnixUserProfile__Reset(void)

{
  return;
}

/* ======================================================================
 * UnixUserProfile__ReadProfileSettings  (Ghidra `ReadProfileSettings` @ 005b8ac0)
 * Signature: uint8_t __thiscall ReadProfileSettings(UnixUserProfile * self, ProfileSetting * arg1)
 * Class: UnixUserProfile
 * Calls: `GameRegistry__GetVariable`, `Sprint`
 * Called by: (none)
 */
/* UnixUserProfile__ReadProfileSettings(ProfileSetting*) */

void __thiscall UnixUserProfile__ReadProfileSettings(UnixUserProfile *self, ProfileSetting *arg1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  char acStack_a8[136];
  GameRegistryEntry *local_20;

  if (*(int *)arg1 != 0) {
    lVar2 = 0;
    uVar3 = 0;
    do {
      while (true) {
        Sprint("PROFILESETTING%i", acStack_a8, *(uint32_t *)(*(long *)(arg1 + 8) + lVar2));
        iVar1 = GameRegistry__GetVariable(EngineRegistry, acStack_a8, &local_20);
        if (iVar1 != 1)
          break;
        uVar3 = uVar3 + 1;
        *(uint32_t *)(*(long *)(arg1 + 8) + 4 + lVar2) = *(uint32_t *)(local_20 + 0x10);
        lVar2 = lVar2 + 8;
        if (*(uint *)arg1 <= uVar3) {
          return;
        }
      }
      *(uint32_t *)(*(long *)(arg1 + 8) + 4 + lVar2) = 0xffffffff;
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 8;
    } while (uVar3 < *(uint *)arg1);
  }
  return;
}

/* ======================================================================
 * UnixUserProfile__WriteProfileSettings  (Ghidra `WriteProfileSettings` @ 005b8b60)
 * Signature: uint8_t __thiscall WriteProfileSettings(UnixUserProfile * self, ProfileSetting * arg1)
 * Class: UnixUserProfile
 * Calls: `GameRegistry__Flush`, `GameRegistry__GetVariable`, `Sprint`
 * Called by: (none)
 */
/* UnixUserProfile__WriteProfileSettings(ProfileSetting const*) */

void __thiscall UnixUserProfile__WriteProfileSettings(UnixUserProfile *self, ProfileSetting *arg1)

{
  uint32_t uVar1;
  long lVar2;
  uint uVar3;
  char acStack_a8[136];
  GameRegistryEntry *local_20;

  if (*(int *)arg1 != 0) {
    lVar2 = 0;
    uVar3 = 0;
    do {
      uVar3 = uVar3 + 1;
      Sprint("PROFILESETTING%i", acStack_a8, *(uint32_t *)(*(long *)(arg1 + 8) + lVar2));
      GameRegistry__GetVariable(EngineRegistry, acStack_a8, &local_20);
      uVar1 = *(uint32_t *)(*(long *)(arg1 + 8) + 4 + lVar2);
      *(uint32_t *)(local_20 + 8) = 1;
      lVar2 = lVar2 + 8;
      *(uint32_t *)(local_20 + 0x10) = uVar1;
    } while (uVar3 < *(uint *)arg1);
  }
  GameRegistry__Flush(EngineRegistry);
  return;
}

/* ======================================================================
 * UnixUserProfile__WriteData  (Ghidra `WriteData` @ 005b8c30)
 * Signature: uint8_t __thiscall WriteData(UnixUserProfile * self, File * arg1, void * arg2, uint arg3)
 * Class: UnixUserProfile
 * Calls: `File__Write`
 * Called by: (none)
 */
/* UnixUserProfile__WriteData(File*, void const*, unsigned int) */

void __thiscall UnixUserProfile__WriteData(UnixUserProfile *self, File *arg1, void *arg2, uint arg3)

{
  File__Write(arg1, arg2, arg3);
  return;
}

/* ======================================================================
 * UnixUserProfile__ReadData  (Ghidra `ReadData` @ 005b8c40)
 * Signature: uint8_t __thiscall ReadData(UnixUserProfile * self, File * arg1, void * arg2, uint arg3)
 * Class: UnixUserProfile
 * Calls: `File__Read`
 * Called by: (none)
 */
/* UnixUserProfile__ReadData(File*, void*, unsigned int) */

void __thiscall UnixUserProfile__ReadData(UnixUserProfile *self, File *arg1, void *arg2, uint arg3)

{
  File__Read(arg1, arg2, arg3);
  return;
}

/* ======================================================================
 * UnixUserProfile__InitializeProfile  (Ghidra `InitializeProfile` @ 005b8c50)
 * Signature: uint8_t __thiscall InitializeProfile(UnixUserProfile * self, int arg1, int arg2, _func_void * arg3)
 * Class: UnixUserProfile
 * Calls: `GameRegistry__GameRegistry__005b6430`, `operator_new`
 * Called by: (none)
 */
/* UnixUserProfile__InitializeProfile(int, int, void (*)()) */

void __thiscall UnixUserProfile__InitializeProfile(UnixUserProfile *self, int arg1, int arg2,
                                                   _func_void *arg3)

{
  GameRegistry *this_00;

  this_00 = operator_new(0x20);
  /* try { // try from 005b8c7f to 005b8c83 has its CatchHandler @ 005b8cc3 */
  GameRegistry__GameRegistry__005b6430(this_00, *(int *)(self + 0x14) + 10);
  *(GameRegistry **)(self + 0x20) = this_00;
  *(uint32_t *)(self + 8) = 1;
  if (arg3 != (_func_void *)0x0) {
    /* WARNING: Could not recover jumptable at 0x005b8ca9. Too many branches */
    /* WARNING: Treating indirect jump as call */
    (*arg3)();
    return;
  }
  return;
}

/* ======================================================================
 * UnixUserProfile__UnixUserProfile  (Ghidra `~UnixUserProfile` @ 005b8ce0)
 * Signature: uint8_t __thiscall ~UnixUserProfile(UnixUserProfile * self)
 * Class: UnixUserProfile
 * Calls: `CriticalSection__CriticalSection__005b71d0`, `GameRegistry__GameRegistry__005b6a60`, `UnixUserProfile__UnixUserProfile__005b8f50`, `operator_delete`
 * Called by: (none)
 */
/* UnixUserProfile__UnixUserProfile__005b8f50() */

void __thiscall UnixUserProfile__UnixUserProfile__005b8f50(UnixUserProfile *self)

{
  GameRegistry *this_00;

  this_00 = *(GameRegistry **)(self + 0x20);
  *(uint8_t ***)self = &PTR__UnixUserProfile_005de790;
  if (this_00 != (GameRegistry *)0x0) {
    /* try { // try from 005b8d04 to 005b8d08 has its CatchHandler @ 005b8d38 */
    GameRegistry__GameRegistry__005b6a60(this_00);
    operator_delete(this_00);
  }
  *(uint64_t *)(self + 0x20) = 0;
  /* try { // try from 005b8d1d to 005b8d21 has its CatchHandler @ 005b8d56 */
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)(self + 0x28));
  *(uint8_t ***)self = &PTR__UserProfile_005de8f0;
  return;
}

/* ======================================================================
 * UnixUserProfile__FileExists  (Ghidra `FileExists` @ 005b8d60)
 * Signature: uint8_t __thiscall FileExists(UnixUserProfile * self, char * arg1)
 * Class: UnixUserProfile
 * Calls: `std__string_string`, `strlen`
 * Called by: (none)
 */
/* WARNING: Removing unreachable block (ram,0x005b8df9) */
/* UnixUserProfile__FileExists(char const*) */

ulong __thiscall UnixUserProfile__FileExists(UnixUserProfile *self, char *arg1)

{
  int *piVar1;
  int iVar2;
  ulong uVar3;
  char *local_18;
  allocator local_a[2];

  std__string_string((string *)&local_18, GUserDataPath, local_a);
  strlen(arg1);
  /* try { // try from 005b8d91 to 005b8da1 has its CatchHandler @ 005b8de4 */
  std__string_append((char *)&local_18, (ulong)arg1);
  uVar3 = File__Exists(local_18, 0);
  if ((allocator *)(local_18 + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage) {
    LOCK();
    piVar1 = (int *)(local_18 + -8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 < 1) {
      std__string_Rep_M_destroy((allocator *)(local_18 + -0x18));
      uVar3 = uVar3 & 0xffffffff;
    }
  }
  return uVar3;
}

/* ======================================================================
 * UnixUserProfile__UnixUserProfile__005b8f50  (Ghidra `~UnixUserProfile` @ 005b8f50)
 * Signature: uint8_t __thiscall ~UnixUserProfile(UnixUserProfile * self)
 * Class: UnixUserProfile
 * Calls: `CriticalSection__CriticalSection__005b71d0`, `GameRegistry__GameRegistry__005b6a60`, `operator_delete`
 * Called by: `UnixUserProfile__UnixUserProfile`
 */
/* UnixUserProfile__UnixUserProfile__005b8f50() */

void __thiscall UnixUserProfile__UnixUserProfile__005b8f50(UnixUserProfile *self)

{
  GameRegistry *this_00;

  this_00 = *(GameRegistry **)(self + 0x20);
  *(uint8_t ***)self = &PTR__UnixUserProfile_005de790;
  if (this_00 != (GameRegistry *)0x0) {
    /* try { // try from 005b8f74 to 005b8f78 has its CatchHandler @ 005b8faf */
    GameRegistry__GameRegistry__005b6a60(this_00);
    operator_delete(this_00);
  }
  *(uint64_t *)(self + 0x20) = 0;
  /* try { // try from 005b8f8d to 005b8f91 has its CatchHandler @ 005b8fcd */
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)(self + 0x28));
  *(uint8_t ***)self = &PTR__UserProfile_005de8f0;
  operator_delete(self);
  return;
}

/* ======================================================================
 * UnixUserProfile__ReadDirectory  (Ghidra `ReadDirectory` @ 005b8fd0)
 * Signature: uint8_t __thiscall ReadDirectory(UnixUserProfile * self, char * arg1, FileList * * arg2)
 * Class: UnixUserProfile
 * Calls: `std__string_string`, `strlen`
 * Called by: (none)
 */
/* WARNING: Removing unreachable block (ram,0x005b905f) */
/* UnixUserProfile__ReadDirectory(char const*, FileList**) */

void __thiscall UnixUserProfile__ReadDirectory(UnixUserProfile *self, char *arg1, FileList **arg2)

{
  int *piVar1;
  int iVar2;
  char *local_28;
  allocator local_1a[10];

  std__string_string((string *)&local_28, GUserDataPath, local_1a);
  strlen(arg1);
  /* try { // try from 005b9001 to 005b9011 has its CatchHandler @ 005b904c */
  std__string_append((char *)&local_28, (ulong)arg1);
  File__ReadDirectory(local_28, arg2);
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
  return;
}

/* ======================================================================
 * UnixUserProfile__DeleteUserFile  (Ghidra `DeleteUserFile` @ 005b9070)
 * Signature: uint8_t __thiscall DeleteUserFile(UnixUserProfile * self, char * arg1)
 * Class: UnixUserProfile
 * Calls: `std__string_string`, `strlen`, `unlink`
 * Called by: (none)
 */
/* WARNING: Removing unreachable block (ram,0x005b90f7) */
/* UnixUserProfile__DeleteUserFile(char const*) */

void __thiscall UnixUserProfile__DeleteUserFile(UnixUserProfile *self, char *arg1)

{
  int *piVar1;
  int iVar2;
  char *local_18;
  allocator local_a[2];

  std__string_string((string *)&local_18, GUserDataPath, local_a);
  strlen(arg1);
  /* try { // try from 005b909d to 005b90a1 has its CatchHandler @ 005b90e4 */
  std__string_append((char *)&local_18, (ulong)arg1);
  unlink(local_18);
  if ((allocator *)(local_18 + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage) {
    LOCK();
    piVar1 = (int *)(local_18 + -8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 < 1) {
      std__string_Rep_M_destroy((allocator *)(local_18 + -0x18));
    }
  }
  return;
}

/* ======================================================================
 * UnixUserProfile__UnixUserProfile__005b9110  (Ghidra `UnixUserProfile` @ 005b9110)
 * Signature: uint8_t __thiscall UnixUserProfile(UnixUserProfile * self)
 * Class: UnixUserProfile
 * Calls: `CriticalSection__CriticalSection`
 * Called by: (none)
 */
/* UnixUserProfile__UnixUserProfile__005b9110() */

void __thiscall UnixUserProfile__UnixUserProfile__005b9110(UnixUserProfile *self)

{
  *(uint32_t *)(self + 8) = 0;
  *(uint32_t *)(self + 0xc) = 0;
  *(uint32_t *)(self + 0x14) = 0xffffffff;
  *(uint64_t *)(self + 0x20) = 0;
  *(uint8_t ***)self = &PTR__UnixUserProfile_005de790;
  /* try { // try from 005b913c to 005b9140 has its CatchHandler @ 005b914a */
  CriticalSection__CriticalSection((CriticalSection *)(self + 0x28));
  *(uint32_t *)(self + 0xc) = 1;
  return;
}

/* ======================================================================
 * UnixUserProfile__IsProfileDriveSelected  (Ghidra `IsProfileDriveSelected` @ 005b91f0)
 * Signature: uint8_t __stdcall IsProfileDriveSelected(void)
 * Class: UnixUserProfile
 * Calls: (none)
 * Called by: (none)
 */
/* UnixUserProfile__IsProfileDriveSelected() */

uint64_t UnixUserProfile__IsProfileDriveSelected(void)

{
  return 1;
}

/* ======================================================================
 * UnixUserProfile__IsProfileSignedIn  (Ghidra `IsProfileSignedIn` @ 005b9200)
 * Signature: uint8_t __stdcall IsProfileSignedIn(void)
 * Class: UnixUserProfile
 * Calls: (none)
 * Called by: (none)
 */
/* UnixUserProfile__IsProfileSignedIn() */

uint64_t UnixUserProfile__IsProfileSignedIn(void)

{
  return 1;
}

/* ======================================================================
 * UnixUserProfile__IsProfileDriveValid  (Ghidra `IsProfileDriveValid` @ 005b9210)
 * Signature: uint8_t __stdcall IsProfileDriveValid(void)
 * Class: UnixUserProfile
 * Calls: (none)
 * Called by: (none)
 */
/* UnixUserProfile__IsProfileDriveValid() */

uint64_t UnixUserProfile__IsProfileDriveValid(void)

{
  return 1;
}

/* ======================================================================
 * UnixUserProfile__IsSaveFileOwner  (Ghidra `IsSaveFileOwner` @ 005b9220)
 * Signature: uint8_t __stdcall IsSaveFileOwner(void)
 * Class: UnixUserProfile
 * Calls: (none)
 * Called by: (none)
 */
/* UnixUserProfile__IsSaveFileOwner() */

uint64_t UnixUserProfile__IsSaveFileOwner(void)

{
  return 1;
}
