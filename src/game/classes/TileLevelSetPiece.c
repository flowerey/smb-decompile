/* src/game/classes/TileLevelSetPiece.c — 5 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "TileLevelSetPiece.h"

/* ======================================================================
 * TileLevelSetPiece__Render  (Ghidra `Render` @ 0058c730)
 * Signature: uint8_t __thiscall Render(TileLevelSetPiece * self)
 * Class: TileLevelSetPiece
 * Calls: (none)
 * Called by: (none)
 */
/* TileLevelSetPiece__Render() */

void __thiscall TileLevelSetPiece__Render(TileLevelSetPiece *self)

{
                    /* WARNING: Could not recover jumptable at 0x0058c744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(*(long *)(self + 0x60) + 0x40) + 0x28))
            (*(long **)(*(long *)(self + 0x60) + 0x40),self,0);
  return;
}

/* ======================================================================
 * TileLevelSetPiece__TileLevelSetPiece  (Ghidra `~TileLevelSetPiece` @ 0058c750)
 * Signature: uint8_t __thiscall ~TileLevelSetPiece(TileLevelSetPiece * self)
 * Class: TileLevelSetPiece
 * Calls: `RenderLayer__RemoveObject`, `TileLevelSetPiece__TileLevelSetPiece__0058d560`
 * Called by: (none)
 */
/* TileLevelSetPiece__TileLevelSetPiece__0058d560() */

void __thiscall TileLevelSetPiece__TileLevelSetPiece__0058d560(TileLevelSetPiece *self)

{
  *(uint8_t ***)self = &PTR__TileLevelSetPiece_005dd030;
  if (*(RenderLayer **)(self + 0x18) != (RenderLayer *)0x0) {
                    /* try { // try from 0058c767 to 0058c76b has its CatchHandler @ 0058c775 */
    RenderLayer__RemoveObject(*(RenderLayer **)(self + 0x18),(RenderLayerObject *)self);
  }
  *(uint8_t ***)self = &PTR__RenderLayerObject_005be670;
  return;
}

/* ======================================================================
 * TileLevelSetPiece__TileLevelSetPiece__0058d560  (Ghidra `~TileLevelSetPiece` @ 0058d560)
 * Signature: uint8_t __thiscall ~TileLevelSetPiece(TileLevelSetPiece * self)
 * Class: TileLevelSetPiece
 * Calls: `RenderLayer__RemoveObject`, `operator_delete`
 * Called by: `GLOBAL_sub_I_UserLoginCheck`, `PasteSelectedPieces`, `PlaceSetPiece`, `SMBEditor__EditSetPieces`, `SMBEditor__SMBEditor`, `TileLevelSetPiece__TileLevelSetPiece`
 */
/* TileLevelSetPiece__TileLevelSetPiece__0058d560() */

void __thiscall TileLevelSetPiece__TileLevelSetPiece__0058d560(TileLevelSetPiece *self)

{
  *(uint8_t ***)self = &PTR__TileLevelSetPiece_005dd030;
  if (*(RenderLayer **)(self + 0x18) != (RenderLayer *)0x0) {
                    /* try { // try from 0058d577 to 0058d57b has its CatchHandler @ 0058d58c */
    RenderLayer__RemoveObject(*(RenderLayer **)(self + 0x18),(RenderLayerObject *)self);
  }
  *(uint8_t ***)self = &PTR__RenderLayerObject_005be670;
  operator_delete(self);
  return;
}

/* ======================================================================
 * TileLevelSetPiece__TileLevelSetPiece__0058d5d0  (Ghidra `TileLevelSetPiece` @ 0058d5d0)
 * Signature: uint8_t __thiscall TileLevelSetPiece(TileLevelSetPiece * self)
 * Class: TileLevelSetPiece
 * Calls: `TileLevelSetPiece__TileLevelSetPiece__0058d640`
 * Called by: (none)
 */
/* TileLevelSetPiece__TileLevelSetPiece__0058d640() */

void __thiscall TileLevelSetPiece__TileLevelSetPiece__0058d640(TileLevelSetPiece *self)

{
  *(uint64_t *)(self + 8) = 0;
  *(uint64_t *)(self + 0x10) = 0;
  *(uint64_t *)(self + 0x18) = 0;
  *(uint8_t ***)self = &PTR__TileLevelSetPiece_005dd030;
  *(uint32_t *)(self + 0x24) = 0;
  *(uint32_t *)(self + 0x28) = 0;
  *(uint32_t *)(self + 0x2c) = 0;
  *(uint32_t *)(self + 0x30) = 0;
  *(uint32_t *)(self + 0x34) = 0x3f800000;
  *(uint32_t *)(self + 0x38) = 0x3f800000;
  *(uint32_t *)(self + 0x3c) = 0;
  *(uint32_t *)(self + 0x40) = 0;
  *(uint32_t *)(self + 0x44) = 0x3f800000;
  *(uint32_t *)(self + 0x48) = 0;
  *(uint64_t *)(self + 0x60) = 0;
  *(uint32_t *)(self + 0x4c) = 0;
  *(uint32_t *)(self + 0x50) = 0;
  *(uint32_t *)(self + 0x54) = 0;
  *(uint32_t *)(self + 0x58) = 0;
  self[0x21] = (TileLevelSetPiece)((byte)self[0x21] & 0x40);
  self[0x20] = (TileLevelSetPiece)0x0;
  return;
}

/* ======================================================================
 * TileLevelSetPiece__TileLevelSetPiece__0058d640  (Ghidra `TileLevelSetPiece` @ 0058d640)
 * Signature: uint8_t __thiscall TileLevelSetPiece(TileLevelSetPiece * self, TileLevelSetPiece * arg1)
 * Class: TileLevelSetPiece
 * Calls: (none)
 * Called by: `GLOBAL_sub_I_UserLoginCheck`, `PasteSelectedPieces`, `PlaceSetPiece`, `SMBEditor__EditSetPieces`, `SMBEditor__SMBEditor__004ad010`, `TileLevelSetPiece__TileLevelSetPiece__0058d5d0`
 */
/* TileLevelSetPiece__TileLevelSetPiece__0058d640(TileLevelSetPiece const&) */

void __thiscall
TileLevelSetPiece__TileLevelSetPiece__0058d640(TileLevelSetPiece *self,TileLevelSetPiece *arg1)

{
  uint32_t uVar1;
  
  *(uint64_t *)(self + 8) = 0;
  *(uint64_t *)(self + 0x10) = 0;
  *(uint64_t *)(self + 0x18) = 0;
  *(uint8_t ***)self = &PTR__TileLevelSetPiece_005dd030;
  *(uint16_t *)(self + 0x20) = *(uint16_t *)(arg1 + 0x20);
  *(uint64_t *)(self + 0x24) = *(uint64_t *)(arg1 + 0x24);
  *(uint64_t *)(self + 0x2c) = *(uint64_t *)(arg1 + 0x2c);
  *(uint64_t *)(self + 0x34) = *(uint64_t *)(arg1 + 0x34);
  *(uint32_t *)(self + 0x3c) = *(uint32_t *)(arg1 + 0x3c);
  *(uint32_t *)(self + 0x40) = *(uint32_t *)(arg1 + 0x40);
  *(uint32_t *)(self + 0x44) = *(uint32_t *)(arg1 + 0x44);
  uVar1 = *(uint32_t *)(arg1 + 0x48);
  *(uint64_t *)(self + 0x60) = 0;
  *(uint32_t *)(self + 0x48) = uVar1;
  *(uint32_t *)(self + 0x4c) = *(uint32_t *)(arg1 + 0x4c);
  *(uint32_t *)(self + 0x50) = *(uint32_t *)(arg1 + 0x50);
  *(uint32_t *)(self + 0x54) = *(uint32_t *)(arg1 + 0x54);
  *(uint32_t *)(self + 0x58) = *(uint32_t *)(arg1 + 0x58);
  return;
}
