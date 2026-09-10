# TEngine — the frame loop and everything it starts

`src/game/classes/TEngine.c` (12 methods). The program builds one engine
in `main` and then just runs it. The entire game loop is eight lines:

```c
do {
  if (!RunSDLEventQueue()) return;   // window-close / quit event => exit
  EngineRun(self);
} while (!quit_flag);
```

Each trip through `EngineRun` (@ 005842a0): if the graphics device was
lost, reset it and skip the frame; otherwise stamp timing bookkeeping,
run game logic (`Update`), and — unless a background level-load is
running — draw: acquire device, begin scene, render all layers (if
rendering is allowed), render, draw screen margins, end scene, present,
release device, bump the frame counter. Frame-time accounting includes a
forced 16ms value while a device reset is in flight.

`Update`/`Render` fan out to whichever world is loaded — game or editor,
each with its own load/unload pair. `ResetTimer` and `WaitForStartupLogos`
gate the early moments (the game waits for logo screens before proceeding).

## Startup builds the world bottom-up

The constructor creates, roughly in order: the settings registry (saved
to disk on exit), window, graphics (plus display settings, aspect-ratio
handling, shader stages), audio, input, the scene-object manager,
resource pools, screen margins, and the packed-data file readers. Numeric
tuning comes from a dozen registry reads — same philosophy as the
characters, whose physics lives in data files rather than code (see the
base-character doc).

## Technical appendix

`Run` 005844a0 (called from `main`), `EngineRun` 005842a0, constructor
005828e0, destructor 00583e20. Quit flag at engine `+0x30 + 8`; frame
timestamps at `+0x14/0x18/0x20`; render-time and frame-counter globals.

*See also: `gsuper_meatboy.md` (game object), `rendering.md` (frame order), `audio_online.md` (subsystems).*
