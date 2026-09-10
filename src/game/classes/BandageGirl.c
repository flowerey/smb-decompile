/* src/game/classes/BandageGirl.c — 5 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "BandageGirl.h"

/* ======================================================================
 * BandageGirl__Update  (Ghidra `Update` @ 00464f60)
 * Signature: uint8_t __thiscall Update(BandageGirl * self)
 * Class: BandageGirl
 * Calls: `MeatBoyCharactor__ProcessReplayFrame`, `MeatBoyCharactor__Update`
 * Called by: (none)
 */
/* BandageGirl__Update() */

void __thiscall BandageGirl__Update(BandageGirl *self)

{
  MeatBoyCharactor__ProcessReplayFrame((MeatBoyCharactor *)self);
  MeatBoyCharactor__Update((MeatBoyCharactor *)self);
  return;
}

/* ======================================================================
 * BandageGirl__BandageGirl  (Ghidra `~BandageGirl` @ 00465020)
 * Signature: uint8_t __thiscall ~BandageGirl(BandageGirl * self)
 * Class: BandageGirl
 * Calls: `BandageGirl__BandageGirl__00465370`, `MeatBoyCharactor__MeatBoyCharactor__00476510`
 * Called by: (none)
 */
/* BandageGirl__BandageGirl__00465370() */

void __thiscall BandageGirl__BandageGirl__00465370(BandageGirl *self)

{
  *(uint8_t ***)self = &PTR__BandageGirl_005bf0b0;
  MeatBoyCharactor__MeatBoyCharactor__00476510((MeatBoyCharactor *)self);
  return;
}

/* ======================================================================
 * BandageGirl__BandageGirl__00465370  (Ghidra `~BandageGirl` @ 00465370)
 * Signature: uint8_t __thiscall ~BandageGirl(BandageGirl * self)
 * Class: BandageGirl
 * Calls: `MeatBoyCharactor__MeatBoyCharactor__00476510`, `operator_delete`
 * Called by: `BandageGirl__BandageGirl`
 */
/* BandageGirl__BandageGirl__00465370() */

void __thiscall BandageGirl__BandageGirl__00465370(BandageGirl *self)

{
  *(uint8_t ***)self = &PTR__BandageGirl_005bf0b0;
  MeatBoyCharactor__MeatBoyCharactor__00476510((MeatBoyCharactor *)self);
  operator_delete(self);
  return;
}

/* ======================================================================
 * BandageGirl__BandageGirl__00465880  (Ghidra `BandageGirl` @ 00465880)
 * Signature: uint8_t __thiscall BandageGirl(BandageGirl * self)
 * Class: BandageGirl
 * Calls: `BandageGirl__BandageGirl__004658c0`, `FormatResourcePath`, `MeatBoyCharactor__MeatBoyCharactor__0047b350`
 * Called by: (none)
 */
/* BandageGirl__BandageGirl__004658c0() */

void __thiscall BandageGirl__BandageGirl__004658c0(BandageGirl *self)

{
  uint64_t uVar1;

  uVar1 = FormatResourcePath("/Animations/bandagegirl.am", &strCharPath);
  MeatBoyCharactor__MeatBoyCharactor__0047b350((MeatBoyCharactor *)self, uVar1, 6);
  *(uint8_t ***)self = &PTR__BandageGirl_005bf0b0;
  *(uint32_t *)(self + 0xa54) = 6;
  return;
}

/* ======================================================================
 * BandageGirl__BandageGirl__004658c0  (Ghidra `BandageGirl` @ 004658c0)
 * Signature: uint8_t __thiscall BandageGirl(BandageGirl * self, MeatBoyCharactor * arg1, int arg2)
 * Class: BandageGirl
 * Calls: `MeatBoyCharactor__Clone`, `MeatBoyCharactor__MeatBoyCharactor__0047b350`
 * Called by: `BandageGirl__BandageGirl__00465880`, `GSMBCharactor__CreateCharactor`, `GSMBCharactor__CreateCharactor__0049c600`
 */
/* BandageGirl__BandageGirl__004658c0(MeatBoyCharactor*, int) */

void __thiscall BandageGirl__BandageGirl__004658c0(BandageGirl *self, MeatBoyCharactor *arg1,
                                                   int arg2)

{
  MeatBoyCharactor__MeatBoyCharactor__0047b350((MeatBoyCharactor *)self);
  *(uint8_t ***)self = &PTR__BandageGirl_005bf0b0;
  /* try { // try from 004658f1 to 004658f5 has its CatchHandler @ 00465909 */
  MeatBoyCharactor__Clone((MeatBoyCharactor *)self, arg1, arg2);
  return;
}
