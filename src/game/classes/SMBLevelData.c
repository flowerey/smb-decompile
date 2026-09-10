/* src/game/classes/SMBLevelData.c — 2 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "SMBLevelData.h"

/* ======================================================================
 * SMBLevelData__Reset  (Ghidra `Reset` @ 00496350)
 * Signature: uint8_t __thiscall Reset(SMBLevelData * self)
 * Class: SMBLevelData
 * Calls: `GSuperMeatBoy__getChar`
 * Called by: `SMBPalette__ResetObstacles`
 */
/* SMBLevelData__Reset() */

void __thiscall SMBLevelData__Reset(SMBLevelData *self)

{
  long lVar1;
  
  *(uint32_t *)self = 0x4cbebc20;
  *(uint32_t *)(self + 4) = 0;
  lVar1 = GSuperMeatBoy__getChar(SuperMeatBoy,1);
  if (lVar1 != 0) {
    lVar1 = GSuperMeatBoy__getChar(SuperMeatBoy,1);
    *(uint32_t *)(self + 8) = *(uint32_t *)(lVar1 + 0xa54);
    return;
  }
  *(uint32_t *)(self + 8) = 0;
  return;
}

/* ======================================================================
 * SMBLevelData__SMBLevelData  (Ghidra `~SMBLevelData` @ 0049be60)
 * Signature: uint8_t __thiscall ~SMBLevelData(SMBLevelData * self)
 * Class: SMBLevelData
 * Calls: (none)
 * Called by: `GLOBAL_sub_I_SMBChapterData`
 */
/* SMBLevelData__SMBLevelData() */

void __thiscall SMBLevelData__SMBLevelData(SMBLevelData *self)

{
  return;
}
