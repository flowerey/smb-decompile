# GSMBMenu — the screen fleet (136 methods, 9852 lines)

`src/game/classes/GSMBMenu.c`. Not one system but ~25 screens run through
one object: Title, Start, Pause (+ReplayPause), Chapter, World, Character,
Leaderboard, Settings, HowToPlay, Controls, Credits, Replay, Internets,
Stats, Upsell, ChapterEnd, BossDefeat/Unlock, MoveOn, plus popups and the
loading screen. Don't read it front to back — read the *pattern*, then one
screen.

## The Show pattern (every screen, e.g. `ShowPauseMenu` @ 004cea00)

1. Stamp mode id (`+0xd04 = 0x11` for pause).
2. `FlashLibraryInstance__Reset` the screen's clips.
3. Wire input: `Joystick__AddButtonCallback` / `AddPOVCallback` with that
   screen's `Click*` / `Increment*` / `Decrement*` handlers.
4. `RenderLayers__InsertLayerBefore(self, SMBCutSceneManager)` + restore
   saved slider/cursor values (`+0x908/+0x918`, `+0x928/+0x938`… pairs).

`Hide*` reverses it (`RemoveControls`, layer removal). `TransitionIn*/Out*`
pairs animate the swap and end in `GSuperMeatBoy__SwitchGameMode` (see
gsuper_meatboy.md for the state table).

## Per-frame (`Update`)

Polls clip playback (`IsPlaying` ×10), cutscenes, chapter/world-menu music
and loading status (`CheckChapterLoadingStatus`,
`ValidateAndLoadChapter`), level-portal and popup updates. Boss-intro and
char-select gates live here too.

## Selection model

`MoveTo{Right,Left,Up,Down}Level`, `SetSelectedLevel`,
`EnterSelectedLevel/Chapter`, `MoveTo{Next,Prev}Char`, `SelectCharacter`;
replays via `LoadReplayFromManager` / `IsInReplayMode` / `GetCurrReplayInfo`;
options via `Increment*/Decrement*/Click*` triplets per screen
(Title, Pause, ReplayPause, Help share the shape).

## Loading path

`LoadChapterMenu` → `GetChapterFileData` → `ValidateAndLoadChapter` →
`LoadSelectedLevel`; internet levels through `LoadInternetsChapter/Levels`
+ `GetLevelDataByIndex`. Sign-in/storage robustness:
`ProcessDisconnect/ProcessStorageChange/ResetForSignout/ResetForPurchase`.

*See also: `gsuper_meatboy.md` (state table), `editor_input_data.md` (widgets/input).*
