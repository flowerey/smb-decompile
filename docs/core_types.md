# Core types, scene graph, particles, players

## Math: vectors and matrices with full operator sets

`Vector2` and `Matrix4x4` come with complete arithmetic (add/subtract/
multiply/divide, in-place variants, comparisons, indexing, float casts).
(The tree shows near-duplicate "twins" with address suffixes — those are
overloads Ghidra couldn't separate, renamed apart during recovery; see
the main README.) Practically everything positional is a `Vector2` — the
player's location, projectile slots, grid probes — and matrices carry
the camera and world transforms. Smaller helpers (`FPUVector`, planes,
bounding boxes/circles/squares/volumes) serve collision queries.

## Scene graph and camera

Scene objects (2D and 3D) managed by a scene manager, render layers,
sprites, textures (tiled, indexed, packaged, paletted), models with
their loader, vertex/index buffers, and a 3D cursor. `Camera` sets up an
orthographic projection, converts screen↔world both ways, and follows
whatever each boss or level reports as the focus point each frame.

## Particles: one family, many looks

A two-method `ParticleEmitter` base with ribbon, smoke, spark, quake,
font, and text variants — plus blood tiles, screen flashes, and
character-trail effects. Gameplay code never touches these directly:
characters spawn effects through `AddEffect(kind, tintA, tintB)`, where
kinds 2 and 3 are the wall-impact and wall-kick bursts from the
AlienHominid writeup.

## Players, profiles, and saves

Tiny player descriptors (valid? which profile? which controller? which
id?), user profiles with 18 methods covering saves (see the save/load
and leaderboard functions in game-logic), the window object, interrupt
message boxes, achievement/leaderboard tables, and the settings
registry. Console-platform leftovers are stubs in this build.

*See also: `rendering.md` (scene), `flash_anim.md` (sprites), `audio_online.md` (profiles/saves).*
