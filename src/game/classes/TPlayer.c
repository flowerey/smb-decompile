/* src/game/classes/TPlayer.c — 4 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "TPlayer.h"

/* ======================================================================
 * TPlayer__IsValid  (Ghidra `IsValid` @ 00595e30)
 * Signature: uint8_t __thiscall IsValid(TPlayer * self)
 * Class: TPlayer
 * Calls: (none)
 * Called by: (none)
 */
/* TPlayer__IsValid() */

bool __thiscall TPlayer__IsValid(TPlayer *self)

{
  bool bVar1;
  
  bVar1 = false;
  if (*(long *)(self + 8) != 0) {
    bVar1 = *(int *)self != -1;
  }
  return bVar1;
}

/* ======================================================================
 * TPlayer__GetProfile  (Ghidra `GetProfile` @ 00595e50)
 * Signature: uint8_t __thiscall GetProfile(TPlayer * self)
 * Class: TPlayer
 * Calls: (none)
 * Called by: `EnterTitleMenu`, `FinalBoss__Update`, `FlyWrench__Reset`, `GSMBChapterData__AwardBandageGet`, `GSMBChapterData__ChapterAchievementCheck`, `GSMBChapterData__ChapterLowestAchievementTime`, `GSMBChapterData__LoadData`, `GSMBChapterData__ReloadData`, `GSMBChapterData__SaveWarpzoneStats`, `GSMBMenu__ClickPauseOption` (+54 more)
 */
/* TPlayer__GetProfile() */

uint64_t __thiscall TPlayer__GetProfile(TPlayer *self)

{
  return (&UserProfiles)[*(int *)self];
}

/* ======================================================================
 * TPlayer__GetJoystick  (Ghidra `GetJoystick` @ 00595e60)
 * Signature: uint8_t __thiscall GetJoystick(TPlayer * self)
 * Class: TPlayer
 * Calls: (none)
 * Called by: `BackToTitleFromReplay`, `DetermineMenuButtons`, `GSMBInstructions__GSMBInstructions`, `GSMBMenu__HideCharMenu`, `GSMBMenu__HideStartMenu`, `GSMBMenu__HideTitleMenu`, `GSMBMenu__RemoveControls`, `GSMBMenu__RemoveWorldMapControls`, `GSMBMenu__RestoreControls`, `GSMBMenu__RestoreStartGameControls` (+80 more)
 */
/* TPlayer__GetJoystick() */

uint64_t __thiscall TPlayer__GetJoystick(TPlayer *self)

{
  return *(uint64_t *)(self + 8);
}

/* ======================================================================
 * TPlayer__IsPlayerID  (Ghidra `IsPlayerID` @ 00595e70)
 * Signature: uint8_t __thiscall IsPlayerID(TPlayer * self, uint arg1)
 * Class: TPlayer
 * Calls: (none)
 * Called by: `Game_JoystickUnplugged`, `Game_ProfileSignedOut`
 */
/* TPlayer__IsPlayerID(unsigned int) */

bool __thiscall TPlayer__IsPlayerID(TPlayer *self,uint arg1)

{
  if (((&UserProfiles)[*(int *)self] != 0) &&
     (*(uint *)((&UserProfiles)[*(int *)self] + 0x14) == arg1)) {
    return *(int *)(self + 0x10) == 1;
  }
  return false;
}
