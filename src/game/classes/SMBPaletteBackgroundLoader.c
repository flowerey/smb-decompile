/* src/game/classes/SMBPaletteBackgroundLoader.c — 4 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "SMBPaletteBackgroundLoader.h"

/* ======================================================================
 * SMBPaletteBackgroundLoader__SMBPaletteBackgroundLoader  (Ghidra `SMBPaletteBackgroundLoader` @ 004f2a70)
 * Signature: uint8_t __thiscall SMBPaletteBackgroundLoader(SMBPaletteBackgroundLoader * self)
 * Class: SMBPaletteBackgroundLoader
 * Calls: `SyncEvent__Set`, `SyncEvent__SyncEvent`
 * Called by: `GSuperMeatBoy__GSuperMeatBoy__00514290`
 */
/* SMBPaletteBackgroundLoader__SMBPaletteBackgroundLoader() */

void __thiscall
SMBPaletteBackgroundLoader__SMBPaletteBackgroundLoader(SMBPaletteBackgroundLoader *self)

{
  SyncEvent__SyncEvent((SyncEvent *)self);
  *(uint64_t *)(self + 0x68) = 0;
  *(uint8_t **)(self + 0x70) = &DAT_008184c8 /* R:0.00016803004837129265f */;
  *(uint64_t *)(self + 0x78) = 0;
                    /* try { // try from 004f2a98 to 004f2a9c has its CatchHandler @ 004f2aa3 */
  SyncEvent__Set((SyncEvent *)self);
  return;
}

/* ======================================================================
 * SMBPaletteBackgroundLoader__SMBPaletteBackgroundLoader__004f2ad0  (Ghidra `~SMBPaletteBackgroundLoader` @ 004f2ad0)
 * Signature: uint8_t __thiscall ~SMBPaletteBackgroundLoader(SMBPaletteBackgroundLoader * self)
 * Class: SMBPaletteBackgroundLoader
 * Calls: `BaseResource__Release`, `SyncEvent__SyncEvent__005b8100`, `SyncEvent__Wait`
 * Called by: `GSuperMeatBoy__GSuperMeatBoy__00512120`
 */
/* WARNING: Removing unreachable block (ram,0x004f2b59) */
/* SMBPaletteBackgroundLoader__SMBPaletteBackgroundLoader__004f2ad0() */

void __thiscall
SMBPaletteBackgroundLoader__SMBPaletteBackgroundLoader__004f2ad0(SMBPaletteBackgroundLoader *self)

{
  allocator *paVar1;
  int *piVar2;
  int iVar3;
  
                    /* try { // try from 004f2ad8 to 004f2aec has its CatchHandler @ 004f2b36 */
  SyncEvent__Wait((SyncEvent *)self);
  if (*(BaseResource **)(self + 0x68) != (BaseResource *)0x0) {
    BaseResource__Release(*(BaseResource **)(self + 0x68),0);
    *(uint64_t *)(self + 0x68) = 0;
  }
  paVar1 = (allocator *)(*(long *)(self + 0x70) + -0x18);
  if (paVar1 != (allocator *)&std__string_Rep_S_empty_rep_storage) {
    LOCK();
    piVar2 = (int *)(*(long *)(self + 0x70) + -8);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 < 1) {
      std__string_Rep_M_destroy(paVar1);
    }
  }
  SyncEvent__SyncEvent__005b8100((SyncEvent *)self);
  return;
}

/* ======================================================================
 * SMBPaletteBackgroundLoader__GetPalette  (Ghidra `GetPalette` @ 004f2b70)
 * Signature: uint8_t __thiscall GetPalette(SMBPaletteBackgroundLoader * self)
 * Class: SMBPaletteBackgroundLoader
 * Calls: `CloseThread`, `SyncEvent__Wait`
 * Called by: `GSuperMeatBoy__SetTilePalette`
 */
/* SMBPaletteBackgroundLoader__GetPalette() */

uint64_t __thiscall SMBPaletteBackgroundLoader__GetPalette(SMBPaletteBackgroundLoader *self)

{
  SyncEvent__Wait((SyncEvent *)self);
  std__string_assign((char *)(self + 0x70),0x5dc192);
  if (*(THREADHANDLESTRUCT **)(self + 0x78) != (THREADHANDLESTRUCT *)0x0) {
    CloseThread(*(THREADHANDLESTRUCT **)(self + 0x78));
  }
  *(uint64_t *)(self + 0x78) = 0;
  return *(uint64_t *)(self + 0x68);
}

/* ======================================================================
 * SMBPaletteBackgroundLoader__NullPalette  (Ghidra `NullPalette` @ 004f2c40)
 * Signature: uint8_t __thiscall NullPalette(SMBPaletteBackgroundLoader * self)
 * Class: SMBPaletteBackgroundLoader
 * Calls: `BaseResource__Release`, `SyncEvent__Wait`
 * Called by: `GSuperMeatBoy__SetTilePalette`, `SetTilePalette`
 */
/* SMBPaletteBackgroundLoader__NullPalette() */

void __thiscall SMBPaletteBackgroundLoader__NullPalette(SMBPaletteBackgroundLoader *self)

{
  SyncEvent__Wait((SyncEvent *)self);
  std__string_assign((char *)(self + 0x70),0x5dc192);
  if (*(BaseResource **)(self + 0x68) != (BaseResource *)0x0) {
    BaseResource__Release(*(BaseResource **)(self + 0x68),0);
    *(uint64_t *)(self + 0x68) = 0;
  }
  return;
}
