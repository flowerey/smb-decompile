/* src/game/classes/ErrorLog.c — 6 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "ErrorLog.h"

/* ======================================================================
 * ErrorLog__ErrorLog  (Ghidra `ErrorLog` @ 005b6fa0)
 * Signature: uint8_t __thiscall ErrorLog(ErrorLog * self)
 * Class: ErrorLog
 * Calls: `CriticalSection__CriticalSection`
 * Called by: (none)
 */
/* ErrorLog__ErrorLog() */

void __thiscall ErrorLog__ErrorLog(ErrorLog *self)

{
  *(uint64_t *)self = 0;
  *(uint32_t *)(self + 8) = 0;
  *(uint32_t *)(self + 0xc) = 0;
  CriticalSection__CriticalSection((CriticalSection *)(self + 0x10));
  return;
}

/* ======================================================================
 * ErrorLog__ErrorLog__005b6fc0  (Ghidra `~ErrorLog` @ 005b6fc0)
 * Signature: uint8_t __thiscall ~ErrorLog(ErrorLog * self)
 * Class: ErrorLog
 * Calls: `CriticalSection__CriticalSection__005b71d0`, `File__File__005b7a70`, `operator_delete`
 * Called by: (none)
 */
/* ErrorLog__ErrorLog__005b6fc0() */

void __thiscall ErrorLog__ErrorLog__005b6fc0(ErrorLog *self)

{
  File *this_00;
  
  this_00 = *(File **)self;
  *(uint32_t *)(self + 8) = 0;
  if (this_00 != (File *)0x0) {
                    /* try { // try from 005b6fe3 to 005b6fe7 has its CatchHandler @ 005b7007 */
    File__File__005b7a70(this_00);
    operator_delete(this_00);
  }
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)(self + 0x10));
  return;
}

/* ======================================================================
 * ErrorLog__Initialize  (Ghidra `Initialize` @ 005b7020)
 * Signature: uint8_t __thiscall Initialize(ErrorLog * self, char * arg1)
 * Class: ErrorLog
 * Calls: `File__File`, `operator_new`
 * Called by: (none)
 */
/* ErrorLog__Initialize(char const*) */

void __thiscall ErrorLog__Initialize(ErrorLog *self,char *arg1)

{
  File *this_00;
  char *local_58;
  uint8_t *local_50;
  uint32_t local_48;
  uint64_t local_40;
  uint32_t local_38;
  uint32_t local_34;
  uint32_t local_30;
  uint32_t local_2c;
  uint32_t local_28;
  uint32_t local_24;
  uint8_t *local_20;
  
  local_48 = 2;
  local_40 = 0;
  local_38 = 0;
  local_34 = 1;
  local_30 = 1;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = &DAT_005c04cf /* R:7.374579797039071e-39f */;
  local_50 = &DAT_005c04d3 /* R:3.984248865183858e-39f */;
  local_58 = arg1;
  this_00 = operator_new(0x30);
                    /* try { // try from 005b7093 to 005b7097 has its CatchHandler @ 005b70a9 */
  File__File(this_00,(tagFileCreation *)&local_58);
  *(File **)self = this_00;
  *(uint32_t *)(self + 8) = 1;
  return;
}

/* ======================================================================
 * ErrorLog__Write  (Ghidra `Write` @ 005b70c0)
 * Signature: uint8_t __thiscall Write(ErrorLog * self, char * arg1)
 * Class: ErrorLog
 * Calls: `AutoLockSection__AutoLockSection`, `AutoLockSection__AutoLockSection__005b59d0`, `File__Write`, `strlen`
 * Called by: (none)
 */
/* ErrorLog__Write(char const*) */

void __thiscall ErrorLog__Write(ErrorLog *self,char *arg1)

{
  size_t sVar1;
  int iVar2;
  AutoLockSection aAStack_28 [16];
  
  AutoLockSection__AutoLockSection(aAStack_28,(CriticalSection *)(self + 0x10));
  if (*(int *)(self + 8) == 1) {
    if (0 < *(int *)(self + 0xc)) {
      iVar2 = 0;
      do {
                    /* try { // try from 005b70fe to 005b7133 has its CatchHandler @ 005b7145 */
        File__Write(*(File **)self,"\t\n\n\n\nFatal Error: %s\n\n",1);
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(self + 0xc));
    }
    sVar1 = strlen(arg1);
    File__Write(*(File **)self,arg1,(uint)sVar1);
    File__Write(*(File **)self,"\n\n\n\nFatal Error: %s\n\n",1);
  }
  AutoLockSection__AutoLockSection__005b59d0(aAStack_28);
  return;
}

/* ======================================================================
 * ErrorLog__StartBlock  (Ghidra `StartBlock` @ 005b7160)
 * Signature: uint8_t __thiscall StartBlock(ErrorLog * self)
 * Class: ErrorLog
 * Calls: (none)
 * Called by: (none)
 */
/* ErrorLog__StartBlock() */

void __thiscall ErrorLog__StartBlock(ErrorLog *self)

{
  *(int *)(self + 0xc) = *(int *)(self + 0xc) + 1;
  return;
}

/* ======================================================================
 * ErrorLog__EndBlock  (Ghidra `EndBlock` @ 005b7170)
 * Signature: uint8_t __thiscall EndBlock(ErrorLog * self)
 * Class: ErrorLog
 * Calls: (none)
 * Called by: (none)
 */
/* ErrorLog__EndBlock() */

void __thiscall ErrorLog__EndBlock(ErrorLog *self)

{
  *(int *)(self + 0xc) = *(int *)(self + 0xc) + -1;
  return;
}
