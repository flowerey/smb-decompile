/* src/game/classes/TofuBoy.c — 5 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "TofuBoy.h"

/* ======================================================================
 * TofuBoy__Update  (Ghidra `Update` @ 00464f00)
 * Signature: uint8_t __thiscall Update(TofuBoy * self)
 * Class: TofuBoy
 * Calls: `MeatBoyCharactor__ProcessReplayFrame`, `MeatBoyCharactor__Update`
 * Called by: (none)
 */
/* TofuBoy__Update() */

void __thiscall TofuBoy__Update(TofuBoy *self)

{
  MeatBoyCharactor__ProcessReplayFrame((MeatBoyCharactor *)self);
  MeatBoyCharactor__Update((MeatBoyCharactor *)self);
  return;
}

/* ======================================================================
 * TofuBoy__TofuBoy  (Ghidra `~TofuBoy` @ 00464ff0)
 * Signature: uint8_t __thiscall ~TofuBoy(TofuBoy * self)
 * Class: TofuBoy
 * Calls: `MeatBoyCharactor__MeatBoyCharactor__00476510`, `TofuBoy__TofuBoy__00465310`
 * Called by: (none)
 */
/* TofuBoy__TofuBoy__00465310() */

void __thiscall TofuBoy__TofuBoy__00465310(TofuBoy *self)

{
  *(uint8_t ***)self = &PTR__TofuBoy_005bf3b0;
  MeatBoyCharactor__MeatBoyCharactor__00476510((MeatBoyCharactor *)self);
  return;
}

/* ======================================================================
 * TofuBoy__TofuBoy__00465310  (Ghidra `~TofuBoy` @ 00465310)
 * Signature: uint8_t __thiscall ~TofuBoy(TofuBoy * self)
 * Class: TofuBoy
 * Calls: `MeatBoyCharactor__MeatBoyCharactor__00476510`, `operator_delete`
 * Called by: `TofuBoy__TofuBoy`
 */
/* TofuBoy__TofuBoy__00465310() */

void __thiscall TofuBoy__TofuBoy__00465310(TofuBoy *self)

{
  *(uint8_t ***)self = &PTR__TofuBoy_005bf3b0;
  MeatBoyCharactor__MeatBoyCharactor__00476510((MeatBoyCharactor *)self);
  operator_delete(self);
  return;
}

/* ======================================================================
 * TofuBoy__TofuBoy__00465a60  (Ghidra `TofuBoy` @ 00465a60)
 * Signature: uint8_t __thiscall TofuBoy(TofuBoy * self)
 * Class: TofuBoy
 * Calls: `FormatResourcePath`, `MeatBoyCharactor__MeatBoyCharactor__0047b350`, `TofuBoy__TofuBoy__00465aa0`
 * Called by: (none)
 */
/* TofuBoy__TofuBoy__00465aa0() */

void __thiscall TofuBoy__TofuBoy__00465aa0(TofuBoy *self)

{
  uint64_t uVar1;
  
  uVar1 = FormatResourcePath("/Animations/tofuboy.am",&strCharPath);
  MeatBoyCharactor__MeatBoyCharactor__0047b350((MeatBoyCharactor *)self,uVar1,0x14);
  *(uint8_t ***)self = &PTR__TofuBoy_005bf3b0;
  *(uint32_t *)(self + 0xa54) = 0x14;
  return;
}

/* ======================================================================
 * TofuBoy__TofuBoy__00465aa0  (Ghidra `TofuBoy` @ 00465aa0)
 * Signature: uint8_t __thiscall TofuBoy(TofuBoy * self, MeatBoyCharactor * arg1, int arg2)
 * Class: TofuBoy
 * Calls: `MeatBoyCharactor__Clone`, `MeatBoyCharactor__MeatBoyCharactor__0047b350`
 * Called by: `GSMBCharactor__CreateCharactor`, `GSMBCharactor__CreateCharactor__0049c600`, `TofuBoy__TofuBoy__00465a60`
 */
/* TofuBoy__TofuBoy__00465aa0(MeatBoyCharactor*, int) */

void __thiscall TofuBoy__TofuBoy__00465aa0(TofuBoy *self,MeatBoyCharactor *arg1,int arg2)

{
  MeatBoyCharactor__MeatBoyCharactor__0047b350((MeatBoyCharactor *)self);
  *(uint8_t ***)self = &PTR__TofuBoy_005bf3b0;
                    /* try { // try from 00465ad1 to 00465ad5 has its CatchHandler @ 00465ae9 */
  MeatBoyCharactor__Clone((MeatBoyCharactor *)self,arg1,arg2);
  return;
}
