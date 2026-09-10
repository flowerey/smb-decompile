# GSuperMeatBoy — the game object

`src/game/classes/GSuperMeatBoy.c` (2072 lines, ~40 methods). Single global
instance (`SuperMeatBoy`, also `SMBCharactor`/`SMBMenu`/`SMBHUD` siblings).
Owns: current `TileLevel` (`+0x40`), player char (`+0x48`), chapter/level
flow, game-state machine, replays entry, pause, resource teardown.

## Game-state machine (`SwitchGameMode`, `SMB_GameState` arg)

| state | meaning |
|---|---|
| 0 | in-game (`ShowGame`) |
| 3 | intro (`GMeatHUD__ShowIntro`) |
| 9 | chapter map |
| 10 | world map (+ full level teardown: boss destroy, tile level delete, char destroy, lightmaps) |
| 0xc | pause animations (`AnimationManager__PauseAnimations(0)`) |
| 0xd | (sibling branch, animations-adjacent) |

Mode 0 also flips `Engine+0x2c` (1 = gameplay, 0 = replay) by
`IsInReplayMode`, then dispatches the mode jump table. Called from ~25
sites (menu transitions, level loads, chapter-end, replay exits).

## Per-frame (`Update` @ 00516690)

Dispatches `UpdateAnimals` + subsystem updates by current mode; render
(`Render` @ 005126b0) draws level/actors/HUD layers. `BeatLevel` (00515a70)
handles completion (unlocks, times, leaderboard push, chapter-end
detection); `ShowCurrentReplay` (005154d0) drives
`MeatBoyCharactor__SwitchToReplayMode` (see base-class doc).

## Flow helpers

`SetCurrentLevel` / `LoadNextLevel` / `ActivateWarpZone` /
`DeferLoadCharactor`+`LoadDeferredCharactor` (async char swap),
`Show/Hide{Game,ChapterMap,WorldMap,TitleMenu,StartMenu,IntroPlayer}`,
`ShowPauseMenu`, `Freeze`, `DestroyGameResources` (full teardown for
mode switches), `MarkAllLevelsVisible/Invisible`, `SetTilePalette`,
`PlaceBossLayer`, `GetCameraFocus`.

## Reading guide

Start at `GSuperMeatBoy` ctor @ 00514290 (what it news up), then
`Initialize` @ 00516f50/60, then `Update` @ 00516690 with the state table
above. Level data itself lives in `TileLevel`/`SMBChapter`/`GSMBChapterData`;
menus in `GSMBMenu` (9852 lines — the biggest file in the tree).

*See also: `gsmb_menu.md` (screens), `tengine.md` (frame loop), `actors_meta.md` (replays/chapters).*
