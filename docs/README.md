# Docs

Deep (human-written) notes first, then generated indexes.

## Deep dives

- `alien_hominid.md` — guest char id 27: 10-shot blaster, struct, replay wiring (+ documented rewrite)
- `meatboy_charactor.md` — base-class bible: virtuals, state machine, Update pipeline, replay/ghost system
- `meat_ninja.md` — N+ homage: death-burst charges, 3 timed explosions, shooter-template confirmation
- `gsuper_meatboy.md` — game object: state machine, level flow, replays entry
- `tengine.md` — frame loop, EngineRun, subsystem startup
- `characters.md` — 25-character census: shooters vs abilities vs reskins
- `dr_fetus.md` — homing missile battery, boss ammo dump
- `bosses.md` — maggot artillery, scripted Hell choreography, FinalBoss teardown
- `gsmb_menu.md` — 136-method screen fleet: the Show pattern, selection, loading
- `rendering.md` — D3D-shaped API on OpenGL + Mojoshader, layers, lightmaps
- `flash_anim.md` — the .am vector-animation runtime behind every sprite
- `editor_input_data.md` — level editor, cheat-code input, files/registry, UI, SQL portal backend
- `actors_meta.md` — animals AI, HUD, replay tape+shelf, cutscenes, chapters
- `core_types.md` — math, scene graph, particles, players/profiles
- `class_model.md` — RTTI inheritance forest (131 classes) + vtable layouts
- `misfiled.md` — 114 methods Ghidra filed in the wrong file
- `../recovered/` — 131 C++ headers: real bases, vtable-ordered virtuals, real signatures
- `../src/reconstructed/` — semantic reconstruction (behavior-identical readable code; originals untouched)
- `world_tiles.md` — TileLevel grid/swept collision + SMBPalette hazards
- `audio_online.md` — TAudio cue model + Steam/leaderboard stack

## Generated

- `index.md` — every function → file map (4894 rows)
- `rodata.md` — referenced rodata constants table
- `modules/` — per-area overviews: file lists, hub functions, class census:
  `runtime`, `platform`, `vendor`, `engine`, `game-classes`,
  `game-logic`, `external`

Infrastructure note: `src/globals.c` holds dummy definitions for every extern (no functions, so it appears in no function index).
