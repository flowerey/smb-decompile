# GSuperMeatBoy — the object that *is* the running game

There is one global game object (`SuperMeatBoy`, with sibling globals for
the character roster, menu, and HUD). It owns the current level, the
player character, and the chapter/level flow, and its `SwitchGameMode`
is the single funnel every screen change passes through.
Source: `src/game/classes/GSuperMeatBoy.c` (~43 methods).

## One function switches every screen

`SwitchGameMode` takes the destination state and does the right teardown
and setup. The states, recovered from the dispatch code:

| state | where you end up |
|---|---|
| 0 | playing the level (`ShowGame`) |
| 3 | intro card (`GMeatHUD__ShowIntro`) |
| 9 | chapter map |
| 10 | world map — plus full level teardown (boss destroyed, tile level deleted, character destroyed, lightmaps dropped) |
| 0xc | pause (world animations frozen) |
| 0xd | adjacent animation state |

Mode 0 additionally flips an engine flag between gameplay and replay
depending on whether the menu is in replay mode, then jumps through the
mode table. Around 25 call sites feed it — menu transitions, level
loads, chapter-end cutscenes, replay exits.

## Frame by frame

`Update` dispatches per-mode updates (including ambient animals);
`Render` draws level, actors, and HUD layers. Finishing a level runs
`BeatLevel`: unlocks, best times, leaderboard submission, and chapter-end
detection. `ShowCurrentReplay` hands the characters to replay mode (see
the base-character doc). Level bookkeeping — `SetCurrentLevel`,
`LoadNextLevel`, warp zones, deferred character swaps (loading the next
character asynchronously so the frame doesn't hitch), pausing, freezing,
and full resource teardown — all lives here.

## Technical appendix

Key addresses: `SwitchGameMode` 005162a0, `Update` 00516690, `Render`
005126b0, `BeatLevel` 00515a70, `ShowCurrentReplay` 005154d0,
constructor 00514290, `Initialize` 00516f50/60. Current level at
`+0x40`, player at `+0x48`, replay flag at engine `+0x2c`. Level data
itself lives in `TileLevel`/`SMBChapter`/`GSMBChapterData`; screens in
`GSMBMenu` (the biggest file in the tree at 9,852 lines, 136 methods).

*See also: `gsmb_menu.md` (screens), `tengine.md` (frame loop), `actors_meta.md` (replays/chapters).*
