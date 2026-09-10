/* src/game/classes/Brownie.c — 5 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "Brownie.h"

/* ======================================================================
 * Brownie__Update  (Ghidra `Update` @ 00464f40)
 * Signature: uint8_t __thiscall Update(Brownie * self)
 * Class: Brownie
 * Calls: `MeatBoyCharactor__ProcessReplayFrame`, `MeatBoyCharactor__Update`
 * Called by: (none)
 */
/* Brownie__Update() */

void __thiscall Brownie__Update(Brownie *self)

{
  MeatBoyCharactor__ProcessReplayFrame((MeatBoyCharactor *)self);
  MeatBoyCharactor__Update((MeatBoyCharactor *)self);
  return;
}

/* ======================================================================
 * Brownie__Brownie  (Ghidra `~Brownie` @ 00465010)
 * Signature: uint8_t __thiscall ~Brownie(Brownie * self)
 * Class: Brownie
 * Calls: `Brownie__Brownie__00465390`, `MeatBoyCharactor__MeatBoyCharactor__00476510`
 * Called by: (none)
 */
/* Brownie__Brownie__00465390() */

void __thiscall Brownie__Brownie__00465390(Brownie *self)

{
  *(uint8_t ***)self = &PTR__Brownie_005bf1b0;
  MeatBoyCharactor__MeatBoyCharactor__00476510((MeatBoyCharactor *)self);
  return;
}

/* ======================================================================
 * Brownie__Brownie__00465390  (Ghidra `~Brownie` @ 00465390)
 * Signature: uint8_t __thiscall ~Brownie(Brownie * self)
 * Class: Brownie
 * Calls: `MeatBoyCharactor__MeatBoyCharactor__00476510`, `operator_delete`
 * Called by: `Brownie__Brownie`
 */
/* Brownie__Brownie__00465390() */

void __thiscall Brownie__Brownie__00465390(Brownie *self)

{
  *(uint8_t ***)self = &PTR__Brownie_005bf1b0;
  MeatBoyCharactor__MeatBoyCharactor__00476510((MeatBoyCharactor *)self);
  operator_delete(self);
  return;
}

/* ======================================================================
 * Brownie__Brownie__00465920  (Ghidra `Brownie` @ 00465920)
 * Signature: uint8_t __thiscall Brownie(Brownie * self)
 * Class: Brownie
 * Calls: `Brownie__Brownie__00465960`, `FormatResourcePath`, `MeatBoyCharactor__MeatBoyCharactor__0047b350`
 * Called by: (none)
 */
/* Brownie__Brownie__00465960() */

void __thiscall Brownie__Brownie__00465960(Brownie *self)

{
  uint64_t uVar1;

  uVar1 = FormatResourcePath("/Animations/brownie.am", &strCharPath);
  MeatBoyCharactor__MeatBoyCharactor__0047b350((MeatBoyCharactor *)self, uVar1, 5);
  *(uint8_t ***)self = &PTR__Brownie_005bf1b0;
  *(uint32_t *)(self + 0xa54) = 5;
  return;
}

/* ======================================================================
 * Brownie__Brownie__00465960  (Ghidra `Brownie` @ 00465960)
 * Signature: uint8_t __thiscall Brownie(Brownie * self, MeatBoyCharactor * arg1, int arg2)
 * Class: Brownie
 * Calls: `MeatBoyCharactor__Clone`, `MeatBoyCharactor__MeatBoyCharactor__0047b350`
 * Called by: `Brownie__Brownie__00465920`, `GSMBCharactor__CreateCharactor`, `GSMBCharactor__CreateCharactor__0049c600`
 */
/* Brownie__Brownie__00465960(MeatBoyCharactor*, int) */

void __thiscall Brownie__Brownie__00465960(Brownie *self, MeatBoyCharactor *arg1, int arg2)

{
  MeatBoyCharactor__MeatBoyCharactor__0047b350((MeatBoyCharactor *)self);
  *(uint8_t ***)self = &PTR__Brownie_005bf1b0;
  /* try { // try from 00465991 to 00465995 has its CatchHandler @ 004659a9 */
  MeatBoyCharactor__Clone((MeatBoyCharactor *)self, arg1, arg2);
  return;
}
