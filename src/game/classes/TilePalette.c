/* src/game/classes/TilePalette.c — 4 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "TilePalette.h"

/* ======================================================================
 * TilePalette__EndPaletteRendering  (Ghidra `EndPaletteRendering` @ 005a1c30)
 * Signature: uint8_t __thiscall EndPaletteRendering(TilePalette * self)
 * Class: TilePalette
 * Calls: `TGraphics__ResetTexCoordGen`
 * Called by: (none)
 */
/* TilePalette__EndPaletteRendering() */

void __thiscall TilePalette__EndPaletteRendering(TilePalette *self)

{
  *(uint32_t *)(self + 0x10) = 0xffffffff;
  TGraphics__ResetTexCoordGen(Graphics);
  return;
}

/* ======================================================================
 * TilePalette__StartPaletteRendering  (Ghidra `StartPaletteRendering` @ 005a1c50)
 * Signature: uint8_t __thiscall StartPaletteRendering(TilePalette * self)
 * Class: TilePalette
 * Calls: `TGraphics__AddPixelStage`, `TGraphics__ResetPixelStages`, `TGraphics__ResetTexCoordGen`
 * Called by: (none)
 */
/* TilePalette__StartPaletteRendering() */

void __thiscall TilePalette__StartPaletteRendering(TilePalette *self)

{
  TGraphics__ResetTexCoordGen(Graphics);
  TGraphics__ResetPixelStages(Graphics);
  TGraphics__AddPixelStage(Graphics,5,1,0,0,0,1,0xffffffff);
  *(uint32_t *)(self + 0x10) = 0xffffffff;
  return;
}

/* ======================================================================
 * TilePalette__TilePalette__005a1cb0  (Ghidra `TilePalette` @ 005a1cb0)
 * Signature: uint8_t __thiscall TilePalette(TilePalette * self)
 * Class: TilePalette
 * Calls: (none)
 * Called by: `SMBPalette__SMBPalette__004f3ca0`, `TilePalette__TilePalette`
 */
/* TilePalette__TilePalette__005a1cb0() */

void __thiscall TilePalette__TilePalette__005a1cb0(TilePalette *self)

{
  *(uint8_t ***)self = &PTR_StartPaletteRendering_005dd690;
  *(uint8_t **)(self + 8) = &DAT_008184c8 /* R:0.00016803004837129265f */;
  *(uint32_t *)(self + 0x10) = 0;
  return;
}

/* ======================================================================
 * TilePalette__TilePalette__005a1cd0  (Ghidra `~TilePalette` @ 005a1cd0)
 * Signature: uint8_t __thiscall ~TilePalette(TilePalette * self)
 * Class: TilePalette
 * Calls: (none)
 * Called by: `SMBPalette__SMBPalette`
 */
/* WARNING: Removing unreachable block (ram,0x005a1d13) */
/* TilePalette__TilePalette__005a1cd0() */

void __thiscall TilePalette__TilePalette__005a1cd0(TilePalette *self)

{
  allocator *paVar1;
  int *piVar2;
  int iVar3;
  
  *(uint8_t ***)self = &PTR_StartPaletteRendering_005dd690;
  paVar1 = (allocator *)(*(long *)(self + 8) + -0x18);
  if (paVar1 != (allocator *)&std__string_Rep_S_empty_rep_storage) {
    LOCK();
    piVar2 = (int *)(*(long *)(self + 8) + -8);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 < 1) {
      std__string_Rep_M_destroy(paVar1);
    }
  }
  return;
}
