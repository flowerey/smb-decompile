/* src/game/classes/PotatoBoy.c — 5 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "PotatoBoy.h"

/* ======================================================================
 * PotatoBoy__Update  (Ghidra `Update` @ 00464ee0)
 * Signature: uint8_t __thiscall Update(PotatoBoy * self)
 * Class: PotatoBoy
 * Calls: `MeatBoyCharactor__ProcessReplayFrame`, `MeatBoyCharactor__Update`
 * Called by: (none)
 */
/* PotatoBoy__Update() */

void __thiscall PotatoBoy__Update(PotatoBoy *self)

{
  MeatBoyCharactor__ProcessReplayFrame((MeatBoyCharactor *)self);
  MeatBoyCharactor__Update((MeatBoyCharactor *)self);
  return;
}

/* ======================================================================
 * PotatoBoy__PotatoBoy  (Ghidra `~PotatoBoy` @ 00464fe0)
 * Signature: uint8_t __thiscall ~PotatoBoy(PotatoBoy * self)
 * Class: PotatoBoy
 * Calls: `MeatBoyCharactor__MeatBoyCharactor__00476510`, `PotatoBoy__PotatoBoy__004652d0`
 * Called by: (none)
 */
/* PotatoBoy__PotatoBoy__004652d0() */

void __thiscall PotatoBoy__PotatoBoy__004652d0(PotatoBoy *self)

{
  *(uint8_t ***)self = &PTR__PotatoBoy_005bf4b0;
  MeatBoyCharactor__MeatBoyCharactor__00476510((MeatBoyCharactor *)self);
  return;
}

/* ======================================================================
 * PotatoBoy__PotatoBoy__004652d0  (Ghidra `~PotatoBoy` @ 004652d0)
 * Signature: uint8_t __thiscall ~PotatoBoy(PotatoBoy * self)
 * Class: PotatoBoy
 * Calls: `MeatBoyCharactor__MeatBoyCharactor__00476510`, `operator_delete`
 * Called by: `PotatoBoy__PotatoBoy`
 */
/* PotatoBoy__PotatoBoy__004652d0() */

void __thiscall PotatoBoy__PotatoBoy__004652d0(PotatoBoy *self)

{
  *(uint8_t ***)self = &PTR__PotatoBoy_005bf4b0;
  MeatBoyCharactor__MeatBoyCharactor__00476510((MeatBoyCharactor *)self);
  operator_delete(self);
  return;
}

/* ======================================================================
 * PotatoBoy__PotatoBoy__00465b00  (Ghidra `PotatoBoy` @ 00465b00)
 * Signature: uint8_t __thiscall PotatoBoy(PotatoBoy * self)
 * Class: PotatoBoy
 * Calls: `FormatResourcePath`, `MeatBoyCharactor__MeatBoyCharactor__0047b350`, `PotatoBoy__PotatoBoy__00465b40`
 * Called by: (none)
 */
/* PotatoBoy__PotatoBoy__00465b40() */

void __thiscall PotatoBoy__PotatoBoy__00465b40(PotatoBoy *self)

{
  uint64_t uVar1;

  uVar1 = FormatResourcePath("/Animations/potatoboy.am", &strCharPath);
  MeatBoyCharactor__MeatBoyCharactor__0047b350((MeatBoyCharactor *)self, uVar1, 0x19);
  *(uint8_t ***)self = &PTR__PotatoBoy_005bf4b0;
  *(uint32_t *)(self + 0xa54) = 0x19;
  return;
}

/* ======================================================================
 * PotatoBoy__PotatoBoy__00465b40  (Ghidra `PotatoBoy` @ 00465b40)
 * Signature: uint8_t __thiscall PotatoBoy(PotatoBoy * self, MeatBoyCharactor * arg1, int arg2)
 * Class: PotatoBoy
 * Calls: `MeatBoyCharactor__Clone`, `MeatBoyCharactor__MeatBoyCharactor__0047b350`
 * Called by: `GSMBCharactor__CreateCharactor`, `GSMBCharactor__CreateCharactor__0049c600`, `PotatoBoy__PotatoBoy__00465b00`
 */
/* PotatoBoy__PotatoBoy__00465b40(MeatBoyCharactor*, int) */

void __thiscall PotatoBoy__PotatoBoy__00465b40(PotatoBoy *self, MeatBoyCharactor *arg1, int arg2)

{
  MeatBoyCharactor__MeatBoyCharactor__0047b350((MeatBoyCharactor *)self);
  *(uint8_t ***)self = &PTR__PotatoBoy_005bf4b0;
  /* try { // try from 00465b71 to 00465b75 has its CatchHandler @ 00465b89 */
  MeatBoyCharactor__Clone((MeatBoyCharactor *)self, arg1, arg2);
  return;
}
