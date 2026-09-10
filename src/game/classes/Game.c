/* src/game/classes/Game.c — 3 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "Game.h"

/* ======================================================================
 * Game__ExitGame__00587be0  (Ghidra `ExitGame` @ 00587be0)
 * Signature: uint8_t __thiscall ExitGame(Game * self)
 * Class: Game
 * Calls: (none)
 * Called by: `Game__ExitGame`
 */
/* Game__ExitGame__00587be0() */

void __thiscall Game__ExitGame__00587be0(Game *self)

{
  *(uint32_t *)(self + 8) = 1;
  return;
}

/* ======================================================================
 * Game__Game  (Ghidra `~Game` @ 00587bf0)
 * Signature: uint8_t __thiscall ~Game(Game * self)
 * Class: Game
 * Calls: `Game__Game__00587c00`
 * Called by: (none)
 */
/* Game__Game__00587c00() */

void __thiscall Game__Game__00587c00(Game *self)

{
  *(uint8_t ***)self = &PTR__Game_005dcbb0;
  return;
}

/* ======================================================================
 * Game__Game__00587c00  (Ghidra `~Game` @ 00587c00)
 * Signature: uint8_t __thiscall ~Game(Game * self)
 * Class: Game
 * Calls: `operator_delete`
 * Called by: `Game__Game`
 */
/* Game__Game__00587c00() */

void __thiscall Game__Game__00587c00(Game *self)

{
  *(uint8_t ***)self = &PTR__Game_005dcbb0;
  operator_delete(self);
  return;
}
