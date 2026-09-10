/* src/game/classes/MeatboyEnding.c — 5 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "MeatboyEnding.h"

/* ======================================================================
 * MeatboyEnding__Update  (Ghidra `Update` @ 00464f20)
 * Signature: uint8_t __thiscall Update(MeatboyEnding * self)
 * Class: MeatboyEnding
 * Calls: `MeatBoyCharactor__ProcessReplayFrame`, `MeatBoyCharactor__Update`
 * Called by: (none)
 */
/* MeatboyEnding__Update() */

void __thiscall MeatboyEnding__Update(MeatboyEnding *self)

{
  MeatBoyCharactor__ProcessReplayFrame((MeatBoyCharactor *)self);
  MeatBoyCharactor__Update((MeatBoyCharactor *)self);
  return;
}

/* ======================================================================
 * MeatboyEnding__MeatboyEnding  (Ghidra `~MeatboyEnding` @ 00465000)
 * Signature: uint8_t __thiscall ~MeatboyEnding(MeatboyEnding * self)
 * Class: MeatboyEnding
 * Calls: `MeatBoyCharactor__MeatBoyCharactor__00476510`, `MeatboyEnding__MeatboyEnding__004652f0`
 * Called by: (none)
 */
/* MeatboyEnding__MeatboyEnding__004652f0() */

void __thiscall MeatboyEnding__MeatboyEnding__004652f0(MeatboyEnding *self)

{
  *(uint8_t ***)self = &PTR__MeatboyEnding_005bf2b0;
  MeatBoyCharactor__MeatBoyCharactor__00476510((MeatBoyCharactor *)self);
  return;
}

/* ======================================================================
 * MeatboyEnding__MeatboyEnding__004652f0  (Ghidra `~MeatboyEnding` @ 004652f0)
 * Signature: uint8_t __thiscall ~MeatboyEnding(MeatboyEnding * self)
 * Class: MeatboyEnding
 * Calls: `MeatBoyCharactor__MeatBoyCharactor__00476510`, `operator_delete`
 * Called by: `MeatboyEnding__MeatboyEnding`
 */
/* MeatboyEnding__MeatboyEnding__004652f0() */

void __thiscall MeatboyEnding__MeatboyEnding__004652f0(MeatboyEnding *self)

{
  *(uint8_t ***)self = &PTR__MeatboyEnding_005bf2b0;
  MeatBoyCharactor__MeatBoyCharactor__00476510((MeatBoyCharactor *)self);
  operator_delete(self);
  return;
}

/* ======================================================================
 * MeatboyEnding__MeatboyEnding__004659c0  (Ghidra `MeatboyEnding` @ 004659c0)
 * Signature: uint8_t __thiscall MeatboyEnding(MeatboyEnding * self)
 * Class: MeatboyEnding
 * Calls: `FormatResourcePath`, `MeatBoyCharactor__MeatBoyCharactor__0047b350`, `MeatboyEnding__MeatboyEnding__00465a00`
 * Called by: (none)
 */
/* MeatboyEnding__MeatboyEnding__00465a00() */

void __thiscall MeatboyEnding__MeatboyEnding__00465a00(MeatboyEnding *self)

{
  uint64_t uVar1;
  
  uVar1 = FormatResourcePath("/Animations/meatboyend.am",&strCharPath);
  MeatBoyCharactor__MeatBoyCharactor__0047b350((MeatBoyCharactor *)self,uVar1,0x1a);
  *(uint8_t ***)self = &PTR__MeatboyEnding_005bf2b0;
  *(uint32_t *)(self + 0xa54) = 0x1a;
  return;
}

/* ======================================================================
 * MeatboyEnding__MeatboyEnding__00465a00  (Ghidra `MeatboyEnding` @ 00465a00)
 * Signature: uint8_t __thiscall MeatboyEnding(MeatboyEnding * self, MeatBoyCharactor * arg1, int arg2)
 * Class: MeatboyEnding
 * Calls: `MeatBoyCharactor__Clone`, `MeatBoyCharactor__MeatBoyCharactor__0047b350`
 * Called by: `GSMBCharactor__CreateCharactor`, `GSMBCharactor__CreateCharactor__0049c600`, `MeatboyEnding__MeatboyEnding__004659c0`
 */
/* MeatboyEnding__MeatboyEnding__00465a00(MeatBoyCharactor*, int) */

void __thiscall
MeatboyEnding__MeatboyEnding__00465a00(MeatboyEnding *self,MeatBoyCharactor *arg1,int arg2)

{
  MeatBoyCharactor__MeatBoyCharactor__0047b350((MeatBoyCharactor *)self);
  *(uint8_t ***)self = &PTR__MeatboyEnding_005bf2b0;
                    /* try { // try from 00465a31 to 00465a35 has its CatchHandler @ 00465a49 */
  MeatBoyCharactor__Clone((MeatBoyCharactor *)self,arg1,arg2);
  return;
}
