/* src/game/classes/MeatBoy8Bit.c — 5 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "MeatBoy8Bit.h"

/* ======================================================================
 * MeatBoy8Bit__Update  (Ghidra `Update` @ 00464fc0)
 * Signature: uint8_t __thiscall Update(MeatBoy8Bit * self)
 * Class: MeatBoy8Bit
 * Calls: `MeatBoyCharactor__ProcessReplayFrame`, `MeatBoyCharactor__Update`
 * Called by: (none)
 */
/* MeatBoy8Bit__Update() */

void __thiscall MeatBoy8Bit__Update(MeatBoy8Bit *self)

{
  MeatBoyCharactor__ProcessReplayFrame((MeatBoyCharactor *)self);
  MeatBoyCharactor__Update((MeatBoyCharactor *)self);
  return;
}

/* ======================================================================
 * MeatBoy8Bit__MeatBoy8Bit  (Ghidra `~MeatBoy8Bit` @ 00465050)
 * Signature: uint8_t __thiscall ~MeatBoy8Bit(MeatBoy8Bit * self)
 * Class: MeatBoy8Bit
 * Calls: `MeatBoy8Bit__MeatBoy8Bit__004652b0`, `MeatBoyCharactor__MeatBoyCharactor__00476510`
 * Called by: (none)
 */
/* MeatBoy8Bit__MeatBoy8Bit__004652b0() */

void __thiscall MeatBoy8Bit__MeatBoy8Bit__004652b0(MeatBoy8Bit *self)

{
  *(uint8_t ***)self = &PTR__MeatBoy8Bit_005bedb0;
  MeatBoyCharactor__MeatBoyCharactor__00476510((MeatBoyCharactor *)self);
  return;
}

/* ======================================================================
 * MeatBoy8Bit__MeatBoy8Bit__004652b0  (Ghidra `~MeatBoy8Bit` @ 004652b0)
 * Signature: uint8_t __thiscall ~MeatBoy8Bit(MeatBoy8Bit * self)
 * Class: MeatBoy8Bit
 * Calls: `MeatBoyCharactor__MeatBoyCharactor__00476510`, `operator_delete`
 * Called by: `MeatBoy8Bit__MeatBoy8Bit`
 */
/* MeatBoy8Bit__MeatBoy8Bit__004652b0() */

void __thiscall MeatBoy8Bit__MeatBoy8Bit__004652b0(MeatBoy8Bit *self)

{
  *(uint8_t ***)self = &PTR__MeatBoy8Bit_005bedb0;
  MeatBoyCharactor__MeatBoyCharactor__00476510((MeatBoyCharactor *)self);
  operator_delete(self);
  return;
}

/* ======================================================================
 * MeatBoy8Bit__MeatBoy8Bit__004656a0  (Ghidra `MeatBoy8Bit` @ 004656a0)
 * Signature: uint8_t __thiscall MeatBoy8Bit(MeatBoy8Bit * self)
 * Class: MeatBoy8Bit
 * Calls: `FormatResourcePath`, `MeatBoy8Bit__MeatBoy8Bit__004656e0`, `MeatBoyCharactor__MeatBoyCharactor__0047b350`
 * Called by: (none)
 */
/* MeatBoy8Bit__MeatBoy8Bit__004656e0() */

void __thiscall MeatBoy8Bit__MeatBoy8Bit__004656e0(MeatBoy8Bit *self)

{
  uint64_t uVar1;
  
  uVar1 = FormatResourcePath("/Animations/retromeatboyfinal.am",&strCharPath);
  MeatBoyCharactor__MeatBoyCharactor__0047b350((MeatBoyCharactor *)self,uVar1,1);
  *(uint8_t ***)self = &PTR__MeatBoy8Bit_005bedb0;
  *(uint32_t *)(self + 0xa54) = 1;
  return;
}

/* ======================================================================
 * MeatBoy8Bit__MeatBoy8Bit__004656e0  (Ghidra `MeatBoy8Bit` @ 004656e0)
 * Signature: uint8_t __thiscall MeatBoy8Bit(MeatBoy8Bit * self, MeatBoyCharactor * arg1, int arg2)
 * Class: MeatBoy8Bit
 * Calls: `MeatBoyCharactor__Clone`, `MeatBoyCharactor__MeatBoyCharactor__0047b350`
 * Called by: `GSMBCharactor__CreateCharactor`, `GSMBCharactor__CreateCharactor__0049c600`, `MeatBoy8Bit__MeatBoy8Bit__004656a0`
 */
/* MeatBoy8Bit__MeatBoy8Bit__004656e0(MeatBoyCharactor*, int) */

void __thiscall MeatBoy8Bit__MeatBoy8Bit__004656e0(MeatBoy8Bit *self,MeatBoyCharactor *arg1,int arg2)

{
  MeatBoyCharactor__MeatBoyCharactor__0047b350((MeatBoyCharactor *)self);
  *(uint8_t ***)self = &PTR__MeatBoy8Bit_005bedb0;
                    /* try { // try from 00465711 to 00465715 has its CatchHandler @ 00465729 */
  MeatBoyCharactor__Clone((MeatBoyCharactor *)self,arg1,arg2);
  return;
}
