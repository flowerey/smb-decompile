/* src/game/classes/SMBPlatform.c — 1 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "SMBPlatform.h"

/* ======================================================================
 * SMBPlatform__SMBPlatform  (Ghidra `SMBPlatform` @ 004e2420)
 * Signature: uint8_t __thiscall SMBPlatform(SMBPlatform * self, int arg1)
 * Class: SMBPlatform
 * Calls: (none)
 * Called by: `SMBPalette__FindAnimatedObstacles`
 */
/* SMBPlatform__SMBPlatform(int) */

void __thiscall SMBPlatform__SMBPlatform(SMBPlatform *self,int arg1)

{
  ushort uVar1;
  
  *(uint32_t *)(self + 8) = 0;
  self[10] = (SMBPlatform)0x0;
  uVar1 = *(ushort *)(self + 10);
  self[8] = (SMBPlatform)0x1;
  self[9] = (SMBPlatform)0x0;
  *(uint64_t *)self = 0;
  *(int *)(self + 0x14) = arg1;
  *(ushort *)(self + 10) = uVar1 & 0x3f;
  self[10] = (SMBPlatform)((byte)uVar1 & 0xc);
  *(uint32_t *)(self + 0xc) = *(uint32_t *)(self + 8);
  *(uint32_t *)(self + 0x10) = *(uint32_t *)(self + 8);
  if (arg1 != 0) {
    *(ushort *)(self + 10) = CONCAT11(3,(byte)*(ushort *)(self + 10) & 0x3f);
    *(ushort *)(self + 0xe) = *(ushort *)(self + 0xe) & 0x3f | 0x380;
    *(ushort *)(self + 0x12) = *(ushort *)(self + 0x12) & 0x3f | 0x340;
    return;
  }
  *(ushort *)(self + 10) = *(ushort *)(self + 10) & 0x3f | 0xc0;
  *(ushort *)(self + 0xe) = *(ushort *)(self + 0xe) & 0x3f | 0x1c0;
  *(ushort *)(self + 0x12) = *(ushort *)(self + 0x12) & 0x3f | 0x2c0;
  return;
}
