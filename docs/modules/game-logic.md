# Module: game-logic (311 functions, 4 files)

Unclassified game functions (SMB*/Game_* free functions).

## Files

- `src/game/logic/game_00.c` (100)
- `src/game/logic/game_01.c` (100)
- `src/game/logic/game_02.c` (100)
- `src/game/logic/game_03.c` (11)

## Hubs (most called-by)

| function | addr | callers |
|---|---|---|
| `ResetSMBBoss` | `0048dda0` | 10 |
| `ShowMenuPress` | `00512a90` | 10 |
| `System_GetTimeInMS` | `005b82f0` | 10 |
| `SetupMenuIconTween` | `004c83f0` | 7 |
| `ShowPauseMenuPress` | `005139c0` | 7 |
| `DestroySMBBoss` | `0048dcd0` | 6 |
| `TransitionToNextLevel` | `00513560` | 6 |
| `SMBMenuEndMenuTransition` | `004c7530` | 5 |
| `SwitchOutMenuButtons` | `004c8720` | 5 |
| `System_PurchaseFullGame` | `005b8390` | 5 |
| `SkipSMBIntro` | `0047e280` | 4 |
| `SMBMessageUpdate` | `0047e2d0` | 4 |

## Most connected callers

| function | addr | calls |
|---|---|---|
| `SMBMessageRender` | `0047e7f0` | 10 |
| `SMBBooUpdate` | `00487d60` | 10 |
| `SMBAnimalGroundCritterUpdate` | `00489390` | 10 |
| `SMBChapterLoadWarpZone` | `004931b0` | 10 |
| `SMBChapterPlayWarpIntro` | `00493610` | 10 |
| `SMBChapterDataSave` | `00495bb0` | 10 |
| `LoadWorldMenu` | `004ccc40` | 10 |
| `ShowPauseMenu` | `004ced80` | 10 |
| `SMBMenuTransitionInCharMenu` | `004d1710` | 10 |
| `SMBMenu_ClickReplayPauseOption` | `004d6360` | 10 |
| `CreateSMBPaletteResources` | `004dca10` | 10 |
| `GetPortalChapter` | `00506f30` | 10 |
