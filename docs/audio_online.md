# Audio (TAudio) and the Steam/online stack

## Sound: one cue manager over OpenAL

All audio runs through `TAudio.c` (20 methods) on top of OpenAL. The
model has two halves. **Cues and instances**: a cue is a loaded sound;
playing one spawns a managed instance, which can be moved, destroyed by
position or by sound id, or invalidated wholesale. **Positional audio**:
there is a virtual "microphone" (the listener) with a position and a
hearing range, and directional audio derives each instance's volume and
pan from where it sits relative to the mic. Music has its own volume
plus an override (used for ducking under events), mute/unmute is global,
and there is a dedicated decoder path for console-format ADPCM samples.

## Online: Steam SDK, callback glue, and menus

Three layers, bottom to top:

1. **SDK access** (`src/platform/shims.c`): initialize, pump callbacks
   every frame, and reach the user/utils/apps/friends/stats interfaces,
   including async call-result registration.
2. **Callback glue** (`src/game/logic/`): leaderboard read/write
   completion handlers, entry setup/teardown, "show this player's
   profile", and about sixteen `Game_*` event handlers the SDK invokes —
   player joined, profile changed or signed out, storage changed or
   removed, connection lost, overlay shown, controller unplugged, full
   game purchased, background-music mode changed. (All 16 names verified
   present in the tree.)
3. **Menus** (`SMBLeaderBoardMenu.c`, 18 methods): activate/deactivate,
   load and page data, select rows, show player details, and handle a
   dropped connection gracefully — plus the statistics screen and the
   achievement/leaderboard entry tables.

The design is failure-tolerant throughout: every online path has an
offline or message-box twin, so a lost connection degrades into dialogs
instead of crashes.

*See also: `tengine.md` (startup), `editor_input_data.md` (UI/widgets for menus).*
