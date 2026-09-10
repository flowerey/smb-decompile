/* src/game/classes/SprintMeatBoy.c — 7 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "SprintMeatBoy.h"

/* ======================================================================
 * SprintMeatBoy__Update  (Ghidra `Update` @ 00465060)
 * Signature: uint8_t __thiscall Update(SprintMeatBoy * self)
 * Class: SprintMeatBoy
 * Calls: `MeatBoyCharactor__ProcessReplayFrame`, `MeatBoyCharactor__Update`, `SMBBloodExplosion__Update`
 * Called by: (none)
 */
/* SprintMeatBoy__Update() */

void __thiscall SprintMeatBoy__Update(SprintMeatBoy *self)

{
  SprintMeatBoy SVar1;
  
  MeatBoyCharactor__ProcessReplayFrame((MeatBoyCharactor *)self);
  SVar1 = self[0x7d8];
  self[0x7d8] = (SprintMeatBoy)((byte)SVar1 | 0x40);
  if (((byte)SVar1 & 1) == 0) {
    self[0x7d8] = (SprintMeatBoy)((byte)SVar1 & 0xef | 0x48);
  }
  else {
    self[0x7d8] = (SprintMeatBoy)((byte)SVar1 & 0xf7 | 0x50);
  }
  MeatBoyCharactor__Update((MeatBoyCharactor *)self);
  if (*(int *)(self + 0xa40) != 0) {
    return;
  }
  SMBBloodExplosion__Update(*(SMBBloodExplosion **)(self + 0xa98));
  return;
}

/* ======================================================================
 * SprintMeatBoy__Render  (Ghidra `Render` @ 004650f0)
 * Signature: uint8_t __thiscall Render(SprintMeatBoy * self)
 * Class: SprintMeatBoy
 * Calls: `MeatBoyCharactor__Render`, `SMBBloodExplosion__Render`
 * Called by: (none)
 */
/* SprintMeatBoy__Render() */

void __thiscall SprintMeatBoy__Render(SprintMeatBoy *self)

{
  MeatBoyCharactor__Render((MeatBoyCharactor *)self);
  if (*(int *)(self + 0xa40) != 0) {
    return;
  }
  SMBBloodExplosion__Render(*(SMBBloodExplosion **)(self + 0xa98));
  return;
}

/* ======================================================================
 * SprintMeatBoy__SprintMeatBoy  (Ghidra `~SprintMeatBoy` @ 00465150)
 * Signature: uint8_t __thiscall ~SprintMeatBoy(SprintMeatBoy * self)
 * Class: SprintMeatBoy
 * Calls: `MeatBoyCharactor__MeatBoyCharactor__00476510`, `SMBBloodExplosion__SMBBloodExplosion__0048cc90`, `SprintMeatBoy__SprintMeatBoy__004653b0`, `operator_delete`
 * Called by: (none)
 */
/* SprintMeatBoy__SprintMeatBoy__004653b0() */

void __thiscall SprintMeatBoy__SprintMeatBoy__004653b0(SprintMeatBoy *self)

{
  SMBBloodExplosion *this_00;
  
  *(uint8_t ***)self = &PTR__SprintMeatBoy_005becb0;
  if ((*(int *)(self + 0xa40) == 0) &&
     (this_00 = *(SMBBloodExplosion **)(self + 0xa98), this_00 != (SMBBloodExplosion *)0x0)) {
                    /* try { // try from 00465181 to 00465185 has its CatchHandler @ 004651a4 */
    SMBBloodExplosion__SMBBloodExplosion__0048cc90(this_00);
    operator_delete(this_00);
  }
  MeatBoyCharactor__MeatBoyCharactor__00476510((MeatBoyCharactor *)self);
  return;
}

/* ======================================================================
 * SprintMeatBoy__Death  (Ghidra `Death` @ 00465230)
 * Signature: uint8_t __thiscall Death(SprintMeatBoy * self)
 * Class: SprintMeatBoy
 * Calls: `MeatBoyCharactor__Death`, `SMBBloodExplosion__Spawn`
 * Called by: (none)
 */
/* SprintMeatBoy__Death() */

void __thiscall SprintMeatBoy__Death(SprintMeatBoy *self)

{
  MeatBoyCharactor__Death((MeatBoyCharactor *)self);
  if (*(int *)(self + 0xa40) != 0) {
    return;
  }
  SMBBloodExplosion__Spawn(*(SMBBloodExplosion **)(self + 0xa98),(Vector2 *)(self + 0xa0));
  return;
}

/* ======================================================================
 * SprintMeatBoy__SprintMeatBoy__004653b0  (Ghidra `~SprintMeatBoy` @ 004653b0)
 * Signature: uint8_t __thiscall ~SprintMeatBoy(SprintMeatBoy * self)
 * Class: SprintMeatBoy
 * Calls: `MeatBoyCharactor__MeatBoyCharactor__00476510`, `SMBBloodExplosion__SMBBloodExplosion__0048cc90`, `operator_delete`
 * Called by: `SprintMeatBoy__SprintMeatBoy`
 */
/* SprintMeatBoy__SprintMeatBoy__004653b0() */

void __thiscall SprintMeatBoy__SprintMeatBoy__004653b0(SprintMeatBoy *self)

{
  SMBBloodExplosion *this_00;
  
  *(uint8_t ***)self = &PTR__SprintMeatBoy_005becb0;
  if ((*(int *)(self + 0xa40) == 0) &&
     (this_00 = *(SMBBloodExplosion **)(self + 0xa98), this_00 != (SMBBloodExplosion *)0x0)) {
                    /* try { // try from 004653e3 to 004653e7 has its CatchHandler @ 0046540e */
    SMBBloodExplosion__SMBBloodExplosion__0048cc90(this_00);
    operator_delete(this_00);
  }
  MeatBoyCharactor__MeatBoyCharactor__00476510((MeatBoyCharactor *)self);
  operator_delete(self);
  return;
}

/* ======================================================================
 * SprintMeatBoy__SprintMeatBoy__004655a0  (Ghidra `SprintMeatBoy` @ 004655a0)
 * Signature: uint8_t __thiscall SprintMeatBoy(SprintMeatBoy * self)
 * Class: SprintMeatBoy
 * Calls: `FormatResourcePath`, `MeatBoyCharactor__MeatBoyCharactor__0047b350`, `SMBBloodExplosion__SMBBloodExplosion`, `SprintMeatBoy__SprintMeatBoy__00465640`, `operator_new`
 * Called by: (none)
 */
/* SprintMeatBoy__SprintMeatBoy__00465640() */

void __thiscall SprintMeatBoy__SprintMeatBoy__00465640(SprintMeatBoy *self)

{
  uint64_t uVar1;
  SMBBloodExplosion *this_00;
  
  uVar1 = FormatResourcePath("/Animations/meatboyanim.am",&strCharPath);
  MeatBoyCharactor__MeatBoyCharactor__0047b350((MeatBoyCharactor *)self,uVar1,0x1c);
  *(uint8_t ***)self = &PTR__SprintMeatBoy_005becb0;
  *(uint32_t *)(self + 0xa54) = 0x1c;
                    /* try { // try from 004655e6 to 004655ea has its CatchHandler @ 0046560c */
  this_00 = operator_new(0x690);
                    /* try { // try from 004655f1 to 004655f5 has its CatchHandler @ 0046561f */
  SMBBloodExplosion__SMBBloodExplosion(this_00);
  *(SMBBloodExplosion **)(self + 0xa98) = this_00;
  return;
}

/* ======================================================================
 * SprintMeatBoy__SprintMeatBoy__00465640  (Ghidra `SprintMeatBoy` @ 00465640)
 * Signature: uint8_t __thiscall SprintMeatBoy(SprintMeatBoy * self, MeatBoyCharactor * arg1, int arg2)
 * Class: SprintMeatBoy
 * Calls: `MeatBoyCharactor__Clone`, `MeatBoyCharactor__MeatBoyCharactor__0047b350`
 * Called by: `GSMBCharactor__CreateCharactor`, `GSMBCharactor__CreateCharactor__0049c600`, `SprintMeatBoy__SprintMeatBoy__004655a0`
 */
/* SprintMeatBoy__SprintMeatBoy__00465640(MeatBoyCharactor*, int) */

void __thiscall
SprintMeatBoy__SprintMeatBoy__00465640(SprintMeatBoy *self,MeatBoyCharactor *arg1,int arg2)

{
  MeatBoyCharactor__MeatBoyCharactor__0047b350((MeatBoyCharactor *)self);
  *(uint8_t ***)self = &PTR__SprintMeatBoy_005becb0;
                    /* try { // try from 00465671 to 00465675 has its CatchHandler @ 00465689 */
  MeatBoyCharactor__Clone((MeatBoyCharactor *)self,arg1,arg2);
  return;
}
