/* src/game/classes/Achievements.c — 1 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "Achievements.h"

/* ======================================================================
 * Achievements__Achievements  (Ghidra `Achievements` @ 005ba100)
 * Signature: uint8_t __thiscall Achievements(Achievements * self)
 * Class: Achievements
 * Calls: `OnUserStatsReceived`, `SteamAPI_RegisterCallback`
 * Called by: `GSuperMeatBoy__Initialize__00516f60`
 */
/* Achievements__Achievements() */

void __thiscall Achievements__Achievements(Achievements *self)

{
  self[8] = (Achievements)0x0;
  *(uint32_t *)(self + 0xc) = 0;
  *(uint8_t ***)self = &PTR_Run_005dea10;
  *(Achievements **)(self + 0x10) = self;
  *(code **)(self + 0x18) = OnUserStatsReceived;
  *(uint64_t *)(self + 0x20) = 0;
  SteamAPI_RegisterCallback(self, 0x44d);
  return;
}
