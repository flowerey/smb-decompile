# GSMBMenu — 25 screens run through one object

`src/game/classes/GSMBMenu.c` (9,852 lines, 136 methods) looks
intimidating, but it isn't one system — it's about 25 screens sharing one
object: title, start, pause (plus a replay variant), chapter and world
maps, character select, leaderboards, settings, how-to-play, controls,
credits, replay browser, internet levels, statistics, upsell, chapter-end,
boss-defeat/unlock notices, and popups. Don't read it front to back.
Learn the one pattern every screen follows, then read a single screen.

## The Show pattern (e.g. `ShowPauseMenu` @ 004cea00)

Showing any screen does the same four things:

1. Stamp the screen's mode id (pause writes `0x11` to `+0xd04`).
2. Restart the screen's animations.
3. Wire up input: joystick buttons and direction-pad get that screen's
   click / move-up / move-down handlers.
4. Insert the menu into the render-layer list and restore saved slider
   and cursor positions.

Hiding reverses it (unwire input, remove the layer). Animated transitions
(`TransitionIn*`/`TransitionOut*`) end by calling the game's
`SwitchGameMode` (see its state table in the game-object doc).

## Selecting things

Level select is cursor movement (`MoveTo{Right,Left,Up,Down}Level`),
confirm (`EnterSelectedLevel/Chapter`), and character select
(`MoveTo{Next,Prev}Char`, `SelectCharacter`). Every options screen uses
the same triplet: move-selection / confirm / back. Replays go through
load/validate/select helpers plus an "is a replay playing?" query the
game object consults.

## Loading levels (and surviving the real world)

`LoadChapterMenu` → fetch chapter data → `ValidateAndLoadChapter` →
`LoadSelectedLevel`, with a parallel internet-levels path. Console-era
robustness is everywhere: lost sign-in, pulled storage, dropped
connection, and post-purchase states each have dedicated reset paths so
the menu never strands the player.

*See also: `gsuper_meatboy.md` (state table), `editor_input_data.md` (widgets/input).*
