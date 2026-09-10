/* src/game/classes/DefaultMeatBoy.c — 7 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "DefaultMeatBoy.h"

/* ======================================================================
 * DefaultMeatBoy__Update  (Ghidra `Update` @ 004650c0)
 * Signature: uint8_t __thiscall Update(DefaultMeatBoy * self)
 * Class: DefaultMeatBoy
 * Calls: `MeatBoyCharactor__ProcessReplayFrame`, `MeatBoyCharactor__Update`, `SMBBloodExplosion__Update`
 * Called by: (none)
 */
/* DefaultMeatBoy__Update() */

void __thiscall DefaultMeatBoy__Update(DefaultMeatBoy *self)

{
  MeatBoyCharactor__ProcessReplayFrame((MeatBoyCharactor *)self);
  MeatBoyCharactor__Update((MeatBoyCharactor *)self);
  if (*(int *)(self + 0xa40) != 0) {
    return;
  }
  SMBBloodExplosion__Update(*(SMBBloodExplosion **)(self + 0xa98));
  return;
}

/* ======================================================================
 * DefaultMeatBoy__Render  (Ghidra `Render` @ 00465120)
 * Signature: uint8_t __thiscall Render(DefaultMeatBoy * self)
 * Class: DefaultMeatBoy
 * Calls: `MeatBoyCharactor__Render`, `SMBBloodExplosion__Render`
 * Called by: (none)
 */
/* DefaultMeatBoy__Render() */

void __thiscall DefaultMeatBoy__Render(DefaultMeatBoy *self)

{
  MeatBoyCharactor__Render((MeatBoyCharactor *)self);
  if (*(int *)(self + 0xa40) != 0) {
    return;
  }
  SMBBloodExplosion__Render(*(SMBBloodExplosion **)(self + 0xa98));
  return;
}

/* ======================================================================
 * DefaultMeatBoy__DefaultMeatBoy__004651c0  (Ghidra `~DefaultMeatBoy` @ 004651c0)
 * Signature: uint8_t __thiscall ~DefaultMeatBoy(DefaultMeatBoy * self)
 * Class: DefaultMeatBoy
 * Calls: `DefaultMeatBoy__DefaultMeatBoy__00465430`, `MeatBoyCharactor__MeatBoyCharactor__00476510`, `SMBBloodExplosion__SMBBloodExplosion__0048cc90`, `operator_delete`
 * Called by: (none)
 */
/* DefaultMeatBoy__DefaultMeatBoy__00465430() */

void __thiscall DefaultMeatBoy__DefaultMeatBoy__00465430(DefaultMeatBoy *self)

{
  SMBBloodExplosion *this_00;
  
  *(uint8_t ***)self = &PTR__DefaultMeatBoy_005bebb0;
  if ((*(int *)(self + 0xa40) == 0) &&
     (this_00 = *(SMBBloodExplosion **)(self + 0xa98), this_00 != (SMBBloodExplosion *)0x0)) {
                    /* try { // try from 004651f3 to 004651f7 has its CatchHandler @ 00465216 */
    SMBBloodExplosion__SMBBloodExplosion__0048cc90(this_00);
    operator_delete(this_00);
  }
  MeatBoyCharactor__MeatBoyCharactor__00476510((MeatBoyCharactor *)self);
  return;
}

/* ======================================================================
 * DefaultMeatBoy__Death  (Ghidra `Death` @ 00465270)
 * Signature: uint8_t __thiscall Death(DefaultMeatBoy * self)
 * Class: DefaultMeatBoy
 * Calls: `MeatBoyCharactor__Death`, `SMBBloodExplosion__Spawn`
 * Called by: (none)
 */
/* DefaultMeatBoy__Death() */

void __thiscall DefaultMeatBoy__Death(DefaultMeatBoy *self)

{
  MeatBoyCharactor__Death((MeatBoyCharactor *)self);
  if (*(int *)(self + 0xa40) != 0) {
    return;
  }
  SMBBloodExplosion__Spawn(*(SMBBloodExplosion **)(self + 0xa98),(Vector2 *)(self + 0xa0));
  return;
}

/* ======================================================================
 * DefaultMeatBoy__DefaultMeatBoy__00465430  (Ghidra `~DefaultMeatBoy` @ 00465430)
 * Signature: uint8_t __thiscall ~DefaultMeatBoy(DefaultMeatBoy * self)
 * Class: DefaultMeatBoy
 * Calls: `MeatBoyCharactor__MeatBoyCharactor__00476510`, `SMBBloodExplosion__SMBBloodExplosion__0048cc90`, `operator_delete`
 * Called by: `DefaultMeatBoy__DefaultMeatBoy__004651c0`
 */
/* DefaultMeatBoy__DefaultMeatBoy__00465430() */

void __thiscall DefaultMeatBoy__DefaultMeatBoy__00465430(DefaultMeatBoy *self)

{
  SMBBloodExplosion *this_00;
  
  *(uint8_t ***)self = &PTR__DefaultMeatBoy_005bebb0;
  if ((*(int *)(self + 0xa40) == 0) &&
     (this_00 = *(SMBBloodExplosion **)(self + 0xa98), this_00 != (SMBBloodExplosion *)0x0)) {
                    /* try { // try from 00465461 to 00465465 has its CatchHandler @ 0046548c */
    SMBBloodExplosion__SMBBloodExplosion__0048cc90(this_00);
    operator_delete(this_00);
  }
  MeatBoyCharactor__MeatBoyCharactor__00476510((MeatBoyCharactor *)self);
  operator_delete(self);
  return;
}

/* ======================================================================
 * DefaultMeatBoy__DefaultMeatBoy__004654a0  (Ghidra `DefaultMeatBoy` @ 004654a0)
 * Signature: uint8_t __thiscall DefaultMeatBoy(DefaultMeatBoy * self)
 * Class: DefaultMeatBoy
 * Calls: `DefaultMeatBoy__DefaultMeatBoy__00465540`, `FormatResourcePath`, `MeatBoyCharactor__MeatBoyCharactor__0047b350`, `SMBBloodExplosion__SMBBloodExplosion`, `operator_new`
 * Called by: (none)
 */
/* DefaultMeatBoy__DefaultMeatBoy__00465540() */

void __thiscall DefaultMeatBoy__DefaultMeatBoy__00465540(DefaultMeatBoy *self)

{
  uint64_t uVar1;
  SMBBloodExplosion *this_00;
  
  uVar1 = FormatResourcePath("/Animations/meatboyanim.am",&strCharPath);
  MeatBoyCharactor__MeatBoyCharactor__0047b350((MeatBoyCharactor *)self,uVar1,0);
  *(uint8_t ***)self = &PTR__DefaultMeatBoy_005bebb0;
  *(uint32_t *)(self + 0xa54) = 0;
                    /* try { // try from 004654e3 to 004654e7 has its CatchHandler @ 00465509 */
  this_00 = operator_new(0x690);
                    /* try { // try from 004654ee to 004654f2 has its CatchHandler @ 0046551c */
  SMBBloodExplosion__SMBBloodExplosion(this_00);
  *(SMBBloodExplosion **)(self + 0xa98) = this_00;
  return;
}

/* ======================================================================
 * DefaultMeatBoy__DefaultMeatBoy__00465540  (Ghidra `DefaultMeatBoy` @ 00465540)
 * Signature: uint8_t __thiscall DefaultMeatBoy(DefaultMeatBoy * self, MeatBoyCharactor * arg1, int arg2)
 * Class: DefaultMeatBoy
 * Calls: `MeatBoyCharactor__Clone`, `MeatBoyCharactor__MeatBoyCharactor__0047b350`
 * Called by: `DefaultMeatBoy__DefaultMeatBoy`, `DefaultMeatBoy__DefaultMeatBoy__004654a0`, `GSMBCharactor__CreateCharactor`, `GSMBCharactor__CreateCharactor__0049c600`
 */
/* DefaultMeatBoy__DefaultMeatBoy__00465540(MeatBoyCharactor*, int) */

void __thiscall
DefaultMeatBoy__DefaultMeatBoy__00465540(DefaultMeatBoy *self,MeatBoyCharactor *arg1,int arg2)

{
  MeatBoyCharactor__MeatBoyCharactor__0047b350((MeatBoyCharactor *)self);
  *(uint8_t ***)self = &PTR__DefaultMeatBoy_005bebb0;
                    /* try { // try from 00465571 to 00465575 has its CatchHandler @ 00465589 */
  MeatBoyCharactor__Clone((MeatBoyCharactor *)self,arg1,arg2);
  return;
}
