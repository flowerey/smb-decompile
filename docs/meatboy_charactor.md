# MeatBoyCharactor — base-class bible

Every playable character (Meat Boy, Bandage Girl, Alien Hominid id 27,
Meat Ninja id 7, Ogmo, Jill, Tim, …) inherits this subobject: subclass
bodies are literally `MeatBoyCharactor` + tail fields (AlienHominid's shots
live at `+0xab8`, i.e. base size is ~`0xab0`). If you understand this file,
every character file becomes readable. Source: `src/game/classes/MeatBoyCharactor.c`
(~40 methods, 4232 lines).

## Virtual interface (observed vtable use)

The engine drives characters through vtable slots; subclass overrides seen
in the wild: `Update`, `Render`, `RenderClones`, `RenderShots`, `Death`,
`Reset`, `Jump`, `WallJump`, `WallHit`, `RecordSpecial`, `ProcessSpecial`,
`AddShot`, `CreateClones`, ctors/dtors, `Clone`. Base provides defaults for
all of them (e.g. base `RecordSpecial`/`ProcessSpecial` are near-empty;
shooters override).

## State machine (`+0x7d4`, set via `SetState`)

| id | meaning (inferred from use) |
|---|---|
| 0 | normal / running |
| 6 | wallslide-jump (set by `Jump`/`WallJump`) |
| 7, 8 | airborne sub-states (written in `Update`) |
| 9 | wall-hit (set by `WallHit`) |
| 10 | inactive / parked (clones in replay standby use `0x10`…) |
| 0xb / 0xc | wallslide left / right (set around `TileCollision`) |
| 0xe | input-clear transient (clears `+0x7e0`) |
| 0x10 | death-anim-then-reset (plays clip at anim `+0x5c0` until it ends, unfreezes HUD timer, back to 0) |
| 0xf | referenced in guards |

`SetState` also rolls a random anim variant (`anim+0x30` count → `anim+0x58`,
mirrored to `+0xa4c`, `+0xa50 = 0`) and stamps `+0x7db |= 8` (state-changed).
Flags: `+0x7d8/0x7d9/0x7db` bitfields (facing bit `0x40`, wall bits, replay
bits — see replay section), `+0x7da` low 3 bits from replay frames.

## Update pipeline (`Update` @ 00477070, ~1090 lines)

1. Lock (`+0x880` critical section), clear transient bit, palette flags on.
2. `0x7db` high bit → vtab `+0x68` hook (per-class pre-step).
3. Facing/flag roll (`0x7d9` bit 7 ← old bit 6).
4. State dispatch: `0xe` → drop input record; `0x10` → death-anim gate
   (above); else full update: input → `DoMovement` target select →
   `Apply2DPhysics(dt)` → `TileLevel__TileCollision` → wallslide attach
   (`0xb`/`0xc`) → anim/sfx/effects (`RenderEffects`, `GetGroundSplat`,
   blood via `BloodyTiles`), replay bookkeeping.

`DoMovement` itself is trivial: movement target `+0x80c` = `+0x8ac`
(grounded?) or `+0x8a8` (air) selected by `+0x7d8 & 0x40`.
`Jump` (overridden by FlyWrench/Machinarium/Ogmo/TheKid): gate, sfx pick
(`anim+0x240` count → `anim+0x268`, `+0xa4c/a50`), state 6, snapshot
`+0xbc = +0x8b0`, `+0x804 = +0xa4`.

## Replay / ghosts (the money section)

- `Clone(src, index)`: `+0xa40 = 1` (**proves** `+0xa40` is the isClone
  flag), `+0xa90 = index`, **shares** replay ptr (`+0xa38`) and anim lib
  (`+0xf8`), bulk-copies physics block `+0x8a8–0x9fc` (Vector2-wise).
- `SwitchToReplayMode` (called from `GSuperMeatBoy__ShowCurrentReplay`,
  boss resets): palette to replay mode, every clone gets the shared replay
  ptr and is parked in state `0x10`.
- `ProcessReplayFrame` (called first in every subclass `Update`): skipped
  unless replay-driven (`+0xa40 == 1`, not states `0xe`/`0x10`). Fetches
  keyframe `GetReplayFrame(replay, charIndex, &a44, &a48)` and either
  **teleports** (snap distance² ≥ `10000.0f`) or **lerps**
  (`(a44−1)/duration`, duration packed in frame word 1 bits 5–8). A new
  frame unpacks bitfields: stateId = `word0>>2 & 0x1f`, `+0x7da` low bits =
  `word0>>15 & 7`, flag bits from bytes 1–3 (byte 3 bit `0x40` = special —
  the bit AlienHominid's `RecordSpecial`/`ProcessSpecial` round-trips).
  Missing frame at the live index ends the replay (`ActivateEnd`).

## Physics / tuning fields (base region)

`+0xa0` pos, `+0xb8` vel, `+0xc0` prev/target, `+0x868` render pos,
`+0x818` collision info, `+0x880` lock, `+0x8a8–0x9fc` tunables + vectors
(copied wholesale by `Clone`), `+0xa38` replay, `+0xa44/0xa48` replay
cursors, `+0xa4c/0xa50` anim/sfx pick, `+0xa54` char id, `+0xa90` clone
index, `+0x7e0` input record ptr, `+0x7f0` clone array, `+0xf8` anim lib.
The giant ctor (`MeatBoyCharactor` @ 0047b350) loads per-character physics
from data files (`File__Read*`, properties) — that is where speeds/jumps
live; subclass ctors only add anim path + id + tail init.

## Subclass contract (checklist for reading any character file)

1. Tail layout after `+0xab0` + total alloc in `GSMBCharactor` factory.
2. Which virtuals it overrides (shooters: special/clips/shots).
3. `+0xa40` gating (owner vs clone duties).
4. `Update` prologue order: replay frame → anim push → flag watchdog → base.

*See also: `alien_hominid.md` (+ verified rewrite), `characters.md` (roster), `flash_anim.md` (anim runtime).*
