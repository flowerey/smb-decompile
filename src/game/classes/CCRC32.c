/* src/game/classes/CCRC32.c — 2 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "CCRC32.h"

/* ======================================================================
 * CCRC32__Initialize  (Ghidra `Initialize` @ 005b9c10)
 * Signature: uint8_t __thiscall Initialize(CCRC32 * self)
 * Class: CCRC32
 * Calls: (none)
 * Called by: (none)
 */
/* CCRC32__Initialize() */

void __thiscall CCRC32__Initialize(CCRC32 *self)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;

  uVar3 = 0;
  uVar1 = 0;
  uVar4 = 1;
  while (true) {
    if ((uVar1 & 2) != 0) {
      uVar3 = uVar3 | 0x40;
    }
    if ((uVar1 & 4) != 0) {
      uVar3 = uVar3 | 0x20;
    }
    if ((uVar1 & 8) != 0) {
      uVar3 = uVar3 | 0x10;
    }
    if ((uVar1 & 0x10) != 0) {
      uVar3 = uVar3 | 8;
    }
    if ((uVar1 & 0x20) != 0) {
      uVar3 = uVar3 | 4;
    }
    if ((uVar1 & 0x40) != 0) {
      uVar3 = uVar3 | 2;
    }
    if (uVar1 >> 7 != 0) {
      uVar3 = uVar3 | 1;
    }
    uVar3 = (ulong)(~-(uint)((uVar3 & 0xffffffff80) == 0) & 0x4c11db7) ^ uVar3 << 0x19;
    uVar3 = (ulong)(~-(uint)((uVar3 & 0xffffffff80000000) == 0) & 0x4c11db7) ^ uVar3 * 2;
    iVar2 = 0x1f;
    uVar3 = (ulong)(~-(uint)((uVar3 & 0xffffffff80000000) == 0) & 0x4c11db7) ^ uVar3 * 2;
    uVar3 = (ulong)(~-(uint)((uVar3 & 0xffffffff80000000) == 0) & 0x4c11db7) ^ uVar3 * 2;
    uVar3 = (ulong)(~-(uint)((uVar3 & 0xffffffff80000000) == 0) & 0x4c11db7) ^ uVar3 * 2;
    uVar3 = (ulong)(~-(uint)((uVar3 & 0xffffffff80000000) == 0) & 0x4c11db7) ^ uVar3 * 2;
    uVar3 = (ulong)(~-(uint)((uVar3 & 0xffffffff80000000) == 0) & 0x4c11db7) ^ uVar3 * 2;
    uVar1 = (ulong)(~-(uint)((uVar3 & 0xffffffff80000000) == 0) & 0x4c11db7) ^ uVar3 * 2;
    uVar3 = 0;
    do {
      if ((uVar1 & 1) != 0) {
        uVar3 = (long)(1 << ((byte)iVar2 & 0x1f)) | uVar3;
      }
      iVar2 = iVar2 + -1;
      uVar1 = uVar1 >> 1;
    } while (iVar2 != -1);
    *(ulong *)(self + uVar4 * 8 + -8) = uVar3;
    if (uVar4 == 0x100)
      break;
    uVar3 = (ulong)(-((uint)uVar4 & 1) & 0x80);
    uVar1 = uVar4;
    uVar4 = uVar4 + 1;
  }
  return;
}

/* ======================================================================
 * CCRC32__Reflect  (Ghidra `Reflect` @ 005b9de0)
 * Signature: uint8_t __thiscall Reflect(CCRC32 * self, ulong arg1, char arg2)
 * Class: CCRC32
 * Calls: (none)
 * Called by: (none)
 */
/* CCRC32__Reflect(unsigned long, char) */

void __thiscall CCRC32__Reflect(CCRC32 *self, ulong arg1, char arg2)

{
  int iVar1;

  if ('\0' < arg2) {
    iVar1 = arg2 + -1;
    do {
      iVar1 = iVar1 + -1;
    } while (iVar1 != -1);
  }
  return;
}
