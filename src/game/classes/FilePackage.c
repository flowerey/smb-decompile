/* src/game/classes/FilePackage.c — 5 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "FilePackage.h"

/* ======================================================================
 * FilePackage__FilePackage  (Ghidra `FilePackage` @ 005b59e0)
 * Signature: uint8_t __thiscall FilePackage(FilePackage * self, char * arg1)
 * Class: FilePackage
 * Calls: `FilePackage__FilePackage__005b5c90`, `File__File`, `File__Read`, `File__ReadVariable`, `malloc`, `operator_new`, `strlen`
 * Called by: (none)
 */
/* FilePackage__FilePackage__005b5c90(char const*) */

void __thiscall FilePackage__FilePackage__005b5c90(FilePackage *self, char *arg1)

{
  File *this_00;
  void *pvVar1;
  void *pvVar2;
  size_t sVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  char *local_78;
  uint8_t *local_70;
  uint32_t local_68;
  uint64_t local_60;
  uint32_t local_58;
  uint32_t local_54;
  uint32_t local_50;
  uint32_t local_4c;
  uint32_t local_48;
  uint32_t local_44;
  uint8_t *local_40;
  uint local_30;
  uint local_2c;

  local_60 = 0;
  local_58 = 0;
  local_54 = 1;
  local_50 = 1;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = &DAT_005c04cf /* R:7.374579797039071e-39f */;
  local_70 = &DAT_005c328c /* R:u32=1811964530 */;
  local_68 = 0x42;
  local_78 = arg1;
  this_00 = operator_new(0x30);
  /* try { // try from 005b5a59 to 005b5a5d has its CatchHandler @ 005b5c77 */
  File__File(this_00, (tagFileCreation *)&local_78);
  *(File **)(self + 0x18) = this_00;
  File__ReadVariable(this_00, self + 0x10, 4);
  pvVar1 = operator_new__((long)*(int *)(self + 0x10) << 3);
  *(void **)self = pvVar1;
  if (0 < *(int *)(self + 0x10)) {
    lVar4 = 0;
    iVar7 = 0;
    while (true) {
      iVar7 = iVar7 + 1;
      File__ReadVariable(*(File **)(self + 0x18), (void *)((long)pvVar1 + lVar4), 4);
      lVar6 = lVar4 + *(long *)self;
      lVar4 = lVar4 + 8;
      File__ReadVariable(*(File **)(self + 0x18), (void *)(lVar6 + 4), 4);
      if (*(int *)(self + 0x10) <= iVar7)
        break;
      pvVar1 = *(void **)self;
    }
  }
  File__ReadVariable(*(File **)(self + 0x18), self + 0x14, 4);
  pvVar1 = operator_new__((long)*(int *)(self + 0x14) * 0xc);
  *(void **)(self + 8) = pvVar1;
  if (0 < *(int *)(self + 0x14)) {
    lVar4 = 0;
    iVar7 = 0;
    while (true) {
      iVar7 = iVar7 + 1;
      File__ReadVariable(*(File **)(self + 0x18), (void *)((long)pvVar1 + lVar4 + 4), 4);
      File__ReadVariable(*(File **)(self + 0x18), (void *)(lVar4 + *(long *)(self + 8) + 8), 4);
      pvVar1 = (void *)(lVar4 + *(long *)(self + 8));
      lVar4 = lVar4 + 0xc;
      File__ReadVariable(*(File **)(self + 0x18), pvVar1, 4);
      if (*(int *)(self + 0x14) <= iVar7)
        break;
      pvVar1 = *(void **)(self + 8);
    }
  }
  File__ReadVariable(*(File **)(self + 0x18), &local_2c, 4);
  File__ReadVariable(*(File **)(self + 0x18), &local_30, 4);
  pvVar1 = malloc((long)(int)local_2c);
  *(void **)(self + 0x30) = pvVar1;
  pvVar2 = malloc((long)*(int *)(self + 0x10) << 3);
  *(void **)(self + 0x38) = pvVar2;
  pvVar2 = malloc((long)(int)local_30);
  *(void **)(self + 0x20) = pvVar2;
  pvVar2 = malloc((long)*(int *)(self + 0x14) << 3);
  *(void **)(self + 0x28) = pvVar2;
  File__Read(*(File **)(self + 0x18), pvVar1, local_2c);
  File__Read(*(File **)(self + 0x18), *(void **)(self + 0x20), local_30);
  if (0 < *(int *)(self + 0x10)) {
    lVar4 = 0;
    iVar8 = 0;
    iVar7 = 0;
    do {
      lVar5 = (long)iVar7;
      lVar6 = *(long *)(self + 0x30);
      iVar8 = iVar8 + 1;
      sVar3 = strlen((char *)(lVar5 + lVar6));
      iVar7 = iVar7 + 1 + (int)sVar3;
      *(char **)(*(long *)(self + 0x38) + lVar4) = (char *)(lVar5 + lVar6);
      lVar4 = lVar4 + 8;
    } while (iVar8 < *(int *)(self + 0x10));
  }
  if (0 < *(int *)(self + 0x14)) {
    lVar4 = 0;
    iVar8 = 0;
    iVar7 = 0;
    do {
      lVar5 = (long)iVar7;
      lVar6 = *(long *)(self + 0x20);
      iVar8 = iVar8 + 1;
      sVar3 = strlen((char *)(lVar5 + lVar6));
      iVar7 = iVar7 + 1 + (int)sVar3;
      *(char **)(*(long *)(self + 0x28) + lVar4) = (char *)(lVar5 + lVar6);
      lVar4 = lVar4 + 8;
    } while (iVar8 < *(int *)(self + 0x14));
  }
  return;
}

/* ======================================================================
 * FilePackage__FilePackage__005b5c90  (Ghidra `FilePackage` @ 005b5c90)
 * Signature: uint8_t __thiscall FilePackage(FilePackage * self, uchar * arg1, uint arg2)
 * Class: FilePackage
 * Calls: `File__File`, `File__Read`, `File__ReadVariable`, `malloc`, `operator_new`, `strlen`
 * Called by: `FilePackage__FilePackage`, `TEngine__TEngine`
 */
/* FilePackage__FilePackage__005b5c90(unsigned char*, unsigned int) */

void __thiscall FilePackage__FilePackage__005b5c90(FilePackage *self, uchar *arg1, uint arg2)

{
  File *this_00;
  void *pvVar1;
  void *pvVar2;
  size_t sVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  uint64_t local_78;
  uint8_t *local_70;
  uint32_t local_68;
  uchar *local_60;
  uint local_58;
  uint32_t local_54;
  uint32_t local_50;
  uint32_t local_4c;
  uint32_t local_48;
  uint32_t local_44;
  uint8_t *local_40;
  uint local_30;
  uint local_2c;

  local_78 = 0;
  local_54 = 1;
  local_50 = 1;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = &DAT_005c04cf /* R:7.374579797039071e-39f */;
  local_70 = &DAT_005c328c /* R:u32=1811964530 */;
  local_68 = 0x42;
  local_60 = arg1;
  local_58 = arg2;
  this_00 = operator_new(0x30);
  /* try { // try from 005b5d05 to 005b5d09 has its CatchHandler @ 005b5f27 */
  File__File(this_00, (tagFileCreation *)&local_78);
  *(File **)(self + 0x18) = this_00;
  File__ReadVariable(this_00, self + 0x10, 4);
  pvVar1 = operator_new__((long)*(int *)(self + 0x10) << 3);
  *(void **)self = pvVar1;
  if (0 < *(int *)(self + 0x10)) {
    lVar4 = 0;
    iVar7 = 0;
    while (true) {
      iVar7 = iVar7 + 1;
      File__ReadVariable(*(File **)(self + 0x18), (void *)((long)pvVar1 + lVar4), 4);
      lVar6 = lVar4 + *(long *)self;
      lVar4 = lVar4 + 8;
      File__ReadVariable(*(File **)(self + 0x18), (void *)(lVar6 + 4), 4);
      if (*(int *)(self + 0x10) <= iVar7)
        break;
      pvVar1 = *(void **)self;
    }
  }
  File__ReadVariable(*(File **)(self + 0x18), self + 0x14, 4);
  pvVar1 = operator_new__((long)*(int *)(self + 0x14) * 0xc);
  *(void **)(self + 8) = pvVar1;
  if (0 < *(int *)(self + 0x14)) {
    lVar4 = 0;
    iVar7 = 0;
    while (true) {
      iVar7 = iVar7 + 1;
      File__ReadVariable(*(File **)(self + 0x18), (void *)((long)pvVar1 + lVar4 + 4), 4);
      File__ReadVariable(*(File **)(self + 0x18), (void *)(lVar4 + *(long *)(self + 8) + 8), 4);
      pvVar1 = (void *)(lVar4 + *(long *)(self + 8));
      lVar4 = lVar4 + 0xc;
      File__ReadVariable(*(File **)(self + 0x18), pvVar1, 4);
      if (*(int *)(self + 0x14) <= iVar7)
        break;
      pvVar1 = *(void **)(self + 8);
    }
  }
  File__ReadVariable(*(File **)(self + 0x18), &local_2c, 4);
  File__ReadVariable(*(File **)(self + 0x18), &local_30, 4);
  pvVar1 = malloc((long)(int)local_2c);
  *(void **)(self + 0x30) = pvVar1;
  pvVar2 = malloc((long)*(int *)(self + 0x10) << 3);
  *(void **)(self + 0x38) = pvVar2;
  pvVar2 = malloc((long)(int)local_30);
  *(void **)(self + 0x20) = pvVar2;
  pvVar2 = malloc((long)*(int *)(self + 0x14) << 3);
  *(void **)(self + 0x28) = pvVar2;
  File__Read(*(File **)(self + 0x18), pvVar1, local_2c);
  File__Read(*(File **)(self + 0x18), *(void **)(self + 0x20), local_30);
  if (0 < *(int *)(self + 0x10)) {
    lVar4 = 0;
    iVar8 = 0;
    iVar7 = 0;
    do {
      lVar5 = (long)iVar7;
      lVar6 = *(long *)(self + 0x30);
      iVar8 = iVar8 + 1;
      sVar3 = strlen((char *)(lVar5 + lVar6));
      iVar7 = iVar7 + 1 + (int)sVar3;
      *(char **)(*(long *)(self + 0x38) + lVar4) = (char *)(lVar5 + lVar6);
      lVar4 = lVar4 + 8;
    } while (iVar8 < *(int *)(self + 0x10));
  }
  if (0 < *(int *)(self + 0x14)) {
    lVar4 = 0;
    iVar8 = 0;
    iVar7 = 0;
    do {
      lVar5 = (long)iVar7;
      lVar6 = *(long *)(self + 0x20);
      iVar8 = iVar8 + 1;
      sVar3 = strlen((char *)(lVar5 + lVar6));
      iVar7 = iVar7 + 1 + (int)sVar3;
      *(char **)(*(long *)(self + 0x28) + lVar4) = (char *)(lVar5 + lVar6);
      lVar4 = lVar4 + 8;
    } while (iVar8 < *(int *)(self + 0x14));
  }
  return;
}

/* ======================================================================
 * FilePackage__FilePackage__005b5f40  (Ghidra `~FilePackage` @ 005b5f40)
 * Signature: uint8_t __thiscall ~FilePackage(FilePackage * self)
 * Class: FilePackage
 * Calls: `File__File__005b7a70`, `operator_delete`
 * Called by: (none)
 */
/* FilePackage__FilePackage__005b5f40() */

void __thiscall FilePackage__FilePackage__005b5f40(FilePackage *self)

{
  File *this_00;

  this_00 = *(File **)(self + 0x18);
  if (this_00 != (File *)0x0) {
    File__File__005b7a70(this_00);
    operator_delete(this_00);
  }
  if (*(void **)(self + 8) != (void *)0x0) {
    operator_delete__(*(void **)(self + 8));
  }
  if (*(void **)self != (void *)0x0) {
    operator_delete__(*(void **)self);
    return;
  }
  return;
}

/* ======================================================================
 * FilePackage__GetFileFromPackage  (Ghidra `GetFileFromPackage` @ 005b5fb0)
 * Signature: uint8_t __thiscall GetFileFromPackage(FilePackage * self, char * arg1, uint * arg2, uint * arg3, void * * arg4)
 * Class: FilePackage
 * Calls: `std__string_string`, `strcmp`
 * Called by: `Exists`, `File__File`
 */
/* WARNING: Removing unreachable block (ram,0x005b628b) */
/* WARNING: Removing unreachable block (ram,0x005b62fd) */
/* WARNING: Removing unreachable block (ram,0x005b63ad) */
/* WARNING: Removing unreachable block (ram,0x005b630a) */
/* WARNING: Removing unreachable block (ram,0x005b6298) */
/* FilePackage__GetFileFromPackage(char const*, unsigned int&, unsigned int&, void**) */

void __thiscall FilePackage__GetFileFromPackage(FilePackage *self, char *arg1, uint *arg2,
                                                uint *arg3, void **arg4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  char *pcVar7;
  long lVar8;
  long lVar9;
  long local_78[2];
  char *local_68[2];
  long local_58[2];
  long local_48;
  allocator local_3f[15];

  std__string_string((string *)local_78, arg1, local_3f);
  local_68[0] = &DAT_008184c8 /* R:0.00016803004837129265f */;
  /* try { // try from 005b5ffd to 005b6051 has its CatchHandler @ 005b6315 */
  iVar3 = std__string_rfind((char)local_78, 0x5c);
  iVar4 = std__string_rfind((char)local_78, 0x2f);
  if (iVar3 <= iVar4) {
    iVar3 = iVar4;
  }
  if (iVar3 != -1) {
    std__string_string((string *)local_58, (string *)local_78, 0, (long)iVar3);
    /* try { // try from 005b605f to 005b6063 has its CatchHandler @ 005b639b */
    std__string_assign((string *)local_68);
    if ((allocator *)(local_58[0] + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage) {
      LOCK();
      piVar1 = (int *)(local_58[0] + -8);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 < 1) {
        std__string_Rep_M_destroy((allocator *)(local_58[0] + -0x18));
      }
    }
    if (*(ulong *)(local_78[0] + -0x18) < (ulong)(long)(iVar3 + 1)) {
      pcVar7 = "basic_string__substr";
      /* try { // try from 005b63bd to 005b63c1 has its CatchHandler @ 005b6315 */
      lVar6 = std__throw_out_of_range("basic_string__substr");
      iVar3 = *(int *)(lVar6 + -8);
      *(int *)(lVar6 + -8) = iVar3 + -1;
      goto LAB_005b634a;
    }
    /* try { // try from 005b60a6 to 005b60aa has its CatchHandler @ 005b6315 */
    std__string_string((string *)&local_48, (string *)local_78, (long)(iVar3 + 1),
                       (*(ulong *)(local_78[0] + -0x18) + 1) - (long)iVar3);
    /* try { // try from 005b60b5 to 005b60b9 has its CatchHandler @ 005b6361 */
    std__string_assign((string *)local_78);
    if ((allocator *)(local_48 + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage) {
      LOCK();
      piVar1 = (int *)(local_48 + -8);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 < 1) {
        std__string_Rep_M_destroy((allocator *)(local_48 + -0x18));
      }
    }
  }
  pcVar7 = local_68[0];
  iVar3 = *(int *)(self + 0x10);
  iVar4 = 0;
  if (0 < iVar3) {
    lVar6 = *(long *)(self + 0x38);
    lVar8 = 0;
    do {
      iVar4 = strcmp(pcVar7, *(char **)(lVar6 + lVar8));
      if (iVar4 == 0) {
        iVar4 = *(int *)(*(long *)self + 4 + lVar8);
        goto LAB_005b6132;
      }
      lVar8 = lVar8 + 8;
    } while (lVar8 != (ulong)(iVar3 - 1) * 8 + 8);
    iVar4 = 0;
  }
LAB_005b6132:
  iVar3 = *(int *)(self + 0x14);
  if (iVar4 < iVar3) {
    lVar9 = (long)iVar4;
    lVar8 = *(long *)(self + 0x28);
    lVar6 = lVar9 + 1;
    do {
      iVar5 = strcmp(arg1, *(char **)(lVar8 + lVar9 * 8));
      if (iVar5 == 0) {
        *arg2 = *(uint *)(*(long *)(self + 8) + 8 + lVar9 * 0xc);
        uVar2 = *(uint *)(*(long *)(self + 8) + 4 + lVar9 * 0xc);
        *arg3 = uVar2;
        if (arg4 != (void **)0x0) {
          *arg4 = (void *)((ulong)uVar2 + *(long *)(*(long *)(self + 0x18) + 0x10));
        }
        if ((allocator *)(pcVar7 + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage) {
          LOCK();
          piVar1 = (int *)(pcVar7 + -8);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 < 1) {
            std__string_Rep_M_destroy((allocator *)(pcVar7 + -0x18));
          }
        }
        if ((allocator *)(local_78[0] + -0x18) ==
            (allocator *)&std__string_Rep_S_empty_rep_storage) {
          return;
        }
        LOCK();
        piVar1 = (int *)(local_78[0] + -8);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (0 < iVar3) {
          return;
        }
        std__string_Rep_M_destroy((allocator *)(local_78[0] + -0x18));
        return;
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 != lVar6 + (ulong)(uint)((iVar3 + -1) - iVar4));
  }
  *arg2 = 0;
  *arg3 = 0;
  if (arg4 != (void **)0x0) {
    *arg4 = (void *)0x0;
  }
  if ((allocator *)(pcVar7 + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage) {
    LOCK();
    piVar1 = (int *)(pcVar7 + -8);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 < 1) {
      std__string_Rep_M_destroy((allocator *)(pcVar7 + -0x18));
    }
  }
  pcVar7 = (char *)(local_78[0] + -0x18);
  if ((allocator *)pcVar7 == (allocator *)&std__string_Rep_S_empty_rep_storage) {
    return;
  }
  LOCK();
  piVar1 = (int *)(local_78[0] + -8);
  iVar3 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
LAB_005b634a:
  if (iVar3 < 1) {
    std__string_Rep_M_destroy((allocator *)pcVar7);
  }
  return;
}

/* ======================================================================
 * FilePackage__Read  (Ghidra `Read` @ 005b63d0)
 * Signature: uint8_t __thiscall Read(FilePackage * self, void * arg1, uint arg2, uint arg3)
 * Class: FilePackage
 * Calls: `memcpy`
 * Called by: `File__Read`, `File__ReadVariable`
 */
/* FilePackage__Read(void*, unsigned int, unsigned int) */

void __thiscall FilePackage__Read(FilePackage *self, void *arg1, uint arg2, uint arg3)

{
  void *__src;

  __src = (void *)((ulong)arg2 + *(long *)(*(long *)(self + 0x18) + 0x10));
  if (__src != arg1) {
    memcpy(arg1, __src, (ulong)arg3);
    return;
  }
  return;
}
