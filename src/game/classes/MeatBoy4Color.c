/* src/game/classes/MeatBoy4Color.c — 5 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "MeatBoy4Color.h"

/* ======================================================================
 * MeatBoy4Color__Update  (Ghidra `Update` @ 00464f80)
 * Signature: uint8_t __thiscall Update(MeatBoy4Color * self)
 * Class: MeatBoy4Color
 * Calls: `MeatBoyCharactor__ProcessReplayFrame`, `MeatBoyCharactor__Update`
 * Called by: (none)
 */
/* MeatBoy4Color__Update() */

void __thiscall MeatBoy4Color__Update(MeatBoy4Color *self)

{
  MeatBoyCharactor__ProcessReplayFrame((MeatBoyCharactor *)self);
  MeatBoyCharactor__Update((MeatBoyCharactor *)self);
  return;
}

/* ======================================================================
 * MeatBoy4Color__MeatBoy4Color  (Ghidra `~MeatBoy4Color` @ 00465030)
 * Signature: uint8_t __thiscall ~MeatBoy4Color(MeatBoy4Color * self)
 * Class: MeatBoy4Color
 * Calls: `MeatBoy4Color__MeatBoy4Color__00465350`, `MeatBoyCharactor__MeatBoyCharactor__00476510`
 * Called by: (none)
 */
/* MeatBoy4Color__MeatBoy4Color__00465350() */

void __thiscall MeatBoy4Color__MeatBoy4Color__00465350(MeatBoy4Color *self)

{
  *(uint8_t ***)self = &PTR__MeatBoy4Color_005befb0;
  MeatBoyCharactor__MeatBoyCharactor__00476510((MeatBoyCharactor *)self);
  return;
}

/* ======================================================================
 * MeatBoy4Color__MeatBoy4Color__00465350  (Ghidra `~MeatBoy4Color` @ 00465350)
 * Signature: uint8_t __thiscall ~MeatBoy4Color(MeatBoy4Color * self)
 * Class: MeatBoy4Color
 * Calls: `MeatBoyCharactor__MeatBoyCharactor__00476510`, `operator_delete`
 * Called by: `MeatBoy4Color__MeatBoy4Color`
 */
/* MeatBoy4Color__MeatBoy4Color__00465350() */

void __thiscall MeatBoy4Color__MeatBoy4Color__00465350(MeatBoy4Color *self)

{
  *(uint8_t ***)self = &PTR__MeatBoy4Color_005befb0;
  MeatBoyCharactor__MeatBoyCharactor__00476510((MeatBoyCharactor *)self);
  operator_delete(self);
  return;
}

/* ======================================================================
 * MeatBoy4Color__MeatBoy4Color__004657e0  (Ghidra `MeatBoy4Color` @ 004657e0)
 * Signature: uint8_t __thiscall MeatBoy4Color(MeatBoy4Color * self)
 * Class: MeatBoy4Color
 * Calls: `FormatResourcePath`, `MeatBoy4Color__MeatBoy4Color__00465820`, `MeatBoyCharactor__MeatBoyCharactor__0047b350`
 * Called by: (none)
 */
/* MeatBoy4Color__MeatBoy4Color__00465820() */

void __thiscall MeatBoy4Color__MeatBoy4Color__00465820(MeatBoy4Color *self)

{
  uint64_t uVar1;
  
  uVar1 = FormatResourcePath("/Animations/gameboy.am",&strCharPath);
  MeatBoyCharactor__MeatBoyCharactor__0047b350((MeatBoyCharactor *)self,uVar1,2);
  *(uint8_t ***)self = &PTR__MeatBoy4Color_005befb0;
  *(uint32_t *)(self + 0xa54) = 2;
  return;
}

/* ======================================================================
 * MeatBoy4Color__MeatBoy4Color__00465820  (Ghidra `MeatBoy4Color` @ 00465820)
 * Signature: uint8_t __thiscall MeatBoy4Color(MeatBoy4Color * self, MeatBoyCharactor * arg1, int arg2)
 * Class: MeatBoy4Color
 * Calls: `MeatBoyCharactor__Clone`, `MeatBoyCharactor__MeatBoyCharactor__0047b350`
 * Called by: `GSMBCharactor__CreateCharactor`, `GSMBCharactor__CreateCharactor__0049c600`, `MeatBoy4Color__MeatBoy4Color__004657e0`
 */
/* MeatBoy4Color__MeatBoy4Color__00465820(MeatBoyCharactor*, int) */

void __thiscall
MeatBoy4Color__MeatBoy4Color__00465820(MeatBoy4Color *self,MeatBoyCharactor *arg1,int arg2)

{
  MeatBoyCharactor__MeatBoyCharactor__0047b350((MeatBoyCharactor *)self);
  *(uint8_t ***)self = &PTR__MeatBoy4Color_005befb0;
                    /* try { // try from 00465851 to 00465855 has its CatchHandler @ 00465869 */
  MeatBoyCharactor__Clone((MeatBoyCharactor *)self,arg1,arg2);
  return;
}
