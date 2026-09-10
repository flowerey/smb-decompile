/* src/game/classes/Players.c — 3 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "Players.h"

/* ======================================================================
 * Players__InitializePlayers  (Ghidra `InitializePlayers` @ 00595ea0)
 * Signature: uint8_t __stdcall InitializePlayers(void)
 * Class: Players
 * Calls: (none)
 * Called by: `GSuperMeatBoy__Update__00516690`
 */
/* Players__InitializePlayers() */

void Players__InitializePlayers(void)

{
  Player._0_4_ = 0;
  Player._16_4_ = 0;
  Player._8_8_ = pGameJoysticks;
  if (UserProfiles != (long *)0x0) {
    (**(code **)(*UserProfiles + 0x68))();
  }
  Player._32_8_ = pGameJoysticks + 0x308;
  Player._24_4_ = 1;
  Player._40_4_ = 0;
  if (DAT_00824c28 /* R:2.8376293902577546e-42f */ != (long *)0x0) {
    (**(code **)(*DAT_00824c28 /* R:2.8376293902577546e-42f */ + 0x68))();
  }
  Player._56_8_ = pGameJoysticks + 0x610;
  Player._48_4_ = 2;
  Player._64_4_ = 0;
  if (DAT_00824c30 /* R:4.0442874978878545e-41f */ != (long *)0x0) {
    (**(code **)(*DAT_00824c30 /* R:4.0442874978878545e-41f */ + 0x68))();
  }
  Player._80_8_ = pGameJoysticks + 0x918;
  Player._72_4_ = 3;
  Player._88_4_ = 0;
  if (DAT_00824c38 /* R:8.089505457956021e-39f */ != (long *)0x0) {
    (**(code **)(*DAT_00824c38 /* R:8.089505457956021e-39f */ + 0x68))();
  }
  iNumPlayersInitialized = 0;
  return;
}

/* ======================================================================
 * Players__AllPlayersInitialized  (Ghidra `AllPlayersInitialized` @ 005960b0)
 * Signature: uint8_t __stdcall AllPlayersInitialized(void)
 * Class: Players
 * Calls: (none)
 * Called by: `TEngine__Update`
 */
/* Players__AllPlayersInitialized() */

bool Players__AllPlayersInitialized(void)

{
  return iNumPlayersInitialized == 4;
}

/* ======================================================================
 * Players__GetNumPlayersInitialized  (Ghidra `GetNumPlayersInitialized` @ 005960c0)
 * Signature: uint8_t __stdcall GetNumPlayersInitialized(void)
 * Class: Players
 * Calls: (none)
 * Called by: `TEngine__Update`
 */
/* Players__GetNumPlayersInitialized() */

uint32_t Players__GetNumPlayersInitialized(void)

{
  return iNumPlayersInitialized;
}
