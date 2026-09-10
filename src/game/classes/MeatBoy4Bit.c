/* src/game/classes/MeatBoy4Bit.c — 5 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "MeatBoy4Bit.h"

/* ======================================================================
 * MeatBoy4Bit__Update  (Ghidra `Update` @ 00464fa0)
 * Signature: uint8_t __thiscall Update(MeatBoy4Bit * self)
 * Class: MeatBoy4Bit
 * Calls: `MeatBoyCharactor__ProcessReplayFrame`, `MeatBoyCharactor__Update`
 * Called by: (none)
 */
/* MeatBoy4Bit__Update() */

void __thiscall MeatBoy4Bit__Update(MeatBoy4Bit *self)

{
  MeatBoyCharactor__ProcessReplayFrame((MeatBoyCharactor *)self);
  MeatBoyCharactor__Update((MeatBoyCharactor *)self);
  return;
}

/* ======================================================================
 * MeatBoy4Bit__MeatBoy4Bit  (Ghidra `~MeatBoy4Bit` @ 00465040)
 * Signature: uint8_t __thiscall ~MeatBoy4Bit(MeatBoy4Bit * self)
 * Class: MeatBoy4Bit
 * Calls: `MeatBoy4Bit__MeatBoy4Bit__00465330`, `MeatBoyCharactor__MeatBoyCharactor__00476510`
 * Called by: (none)
 */
/* MeatBoy4Bit__MeatBoy4Bit__00465330() */

void __thiscall MeatBoy4Bit__MeatBoy4Bit__00465330(MeatBoy4Bit *self)

{
  *(uint8_t ***)self = &PTR__MeatBoy4Bit_005beeb0;
  MeatBoyCharactor__MeatBoyCharactor__00476510((MeatBoyCharactor *)self);
  return;
}

/* ======================================================================
 * MeatBoy4Bit__MeatBoy4Bit__00465330  (Ghidra `~MeatBoy4Bit` @ 00465330)
 * Signature: uint8_t __thiscall ~MeatBoy4Bit(MeatBoy4Bit * self)
 * Class: MeatBoy4Bit
 * Calls: `MeatBoyCharactor__MeatBoyCharactor__00476510`, `operator_delete`
 * Called by: `MeatBoy4Bit__MeatBoy4Bit`
 */
/* MeatBoy4Bit__MeatBoy4Bit__00465330() */

void __thiscall MeatBoy4Bit__MeatBoy4Bit__00465330(MeatBoy4Bit *self)

{
  *(uint8_t ***)self = &PTR__MeatBoy4Bit_005beeb0;
  MeatBoyCharactor__MeatBoyCharactor__00476510((MeatBoyCharactor *)self);
  operator_delete(self);
  return;
}

/* ======================================================================
 * MeatBoy4Bit__MeatBoy4Bit__00465740  (Ghidra `MeatBoy4Bit` @ 00465740)
 * Signature: uint8_t __thiscall MeatBoy4Bit(MeatBoy4Bit * self)
 * Class: MeatBoy4Bit
 * Calls: `FormatResourcePath`, `MeatBoy4Bit__MeatBoy4Bit__00465780`, `MeatBoyCharactor__MeatBoyCharactor__0047b350`
 * Called by: (none)
 */
/* MeatBoy4Bit__MeatBoy4Bit__00465780() */

void __thiscall MeatBoy4Bit__MeatBoy4Bit__00465780(MeatBoy4Bit *self)

{
  uint64_t uVar1;
  
  uVar1 = FormatResourcePath("/Animations/4bitmeatboyfinal.am",&strCharPath);
  MeatBoyCharactor__MeatBoyCharactor__0047b350((MeatBoyCharactor *)self,uVar1,3);
  *(uint8_t ***)self = &PTR__MeatBoy4Bit_005beeb0;
  *(uint32_t *)(self + 0xa54) = 3;
  return;
}

/* ======================================================================
 * MeatBoy4Bit__MeatBoy4Bit__00465780  (Ghidra `MeatBoy4Bit` @ 00465780)
 * Signature: uint8_t __thiscall MeatBoy4Bit(MeatBoy4Bit * self, MeatBoyCharactor * arg1, int arg2)
 * Class: MeatBoy4Bit
 * Calls: `MeatBoyCharactor__Clone`, `MeatBoyCharactor__MeatBoyCharactor__0047b350`
 * Called by: `GSMBCharactor__CreateCharactor`, `GSMBCharactor__CreateCharactor__0049c600`, `MeatBoy4Bit__MeatBoy4Bit__00465740`
 */
/* MeatBoy4Bit__MeatBoy4Bit__00465780(MeatBoyCharactor*, int) */

void __thiscall MeatBoy4Bit__MeatBoy4Bit__00465780(MeatBoy4Bit *self,MeatBoyCharactor *arg1,int arg2)

{
  MeatBoyCharactor__MeatBoyCharactor__0047b350((MeatBoyCharactor *)self);
  *(uint8_t ***)self = &PTR__MeatBoy4Bit_005beeb0;
                    /* try { // try from 004657b1 to 004657b5 has its CatchHandler @ 004657c9 */
  MeatBoyCharactor__Clone((MeatBoyCharactor *)self,arg1,arg2);
  return;
}
