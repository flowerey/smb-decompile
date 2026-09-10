/* src/game/classes/UserProfile.c — 3 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "UserProfile.h"

/* ======================================================================
 * UserProfile__CreateUserRegistry  (Ghidra `CreateUserRegistry` @ 005b9af0)
 * Signature: uint8_t __thiscall CreateUserRegistry(UserProfile * self, uint arg1)
 * Class: UserProfile
 * Calls: `GameRegistry__GameRegistry__005b6430`, `operator_new`
 * Called by: (none)
 */
/* UserProfile__CreateUserRegistry(unsigned int) */

void __thiscall UserProfile__CreateUserRegistry(UserProfile *self,uint arg1)

{
  GameRegistry *this_00;
  
  this_00 = operator_new(0x20);
                    /* try { // try from 005b9b1e to 005b9b22 has its CatchHandler @ 005b9b3a */
  GameRegistry__GameRegistry__005b6430(this_00,arg1 + 10);
  *(GameRegistry **)(self + 0x20) = this_00;
  return;
}

/* ======================================================================
 * UserProfile__UserProfile  (Ghidra `~UserProfile` @ 005b9be0)
 * Signature: uint8_t __thiscall ~UserProfile(UserProfile * self)
 * Class: UserProfile
 * Calls: `UserProfile__UserProfile__005b9bf0`
 * Called by: (none)
 */
/* UserProfile__UserProfile__005b9bf0() */

void __thiscall UserProfile__UserProfile__005b9bf0(UserProfile *self)

{
  *(uint8_t ***)self = &PTR__UserProfile_005de8f0;
  return;
}

/* ======================================================================
 * UserProfile__UserProfile__005b9bf0  (Ghidra `~UserProfile` @ 005b9bf0)
 * Signature: uint8_t __thiscall ~UserProfile(UserProfile * self)
 * Class: UserProfile
 * Calls: `operator_delete`
 * Called by: `UserProfile__UserProfile`
 */
/* UserProfile__UserProfile__005b9bf0() */

void __thiscall UserProfile__UserProfile__005b9bf0(UserProfile *self)

{
  *(uint8_t ***)self = &PTR__UserProfile_005de8f0;
  operator_delete(self);
  return;
}
