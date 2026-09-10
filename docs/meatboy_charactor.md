# MeatBoyCharactor — the base every character is built on

Every playable character — Meat Boy, Bandage Girl, Alien Hominid, Meat
Ninja, Ogmo, Jill, Tim, and twenty more — contains this object as its
core. Subclass bodies are literally this base plus extra fields tacked on
the end (AlienHominid's shot rack, for example, starts where the base
ends around `+0xab0`). Learn this file and every character file becomes
readable. Source: `src/game/classes/MeatBoyCharactor.c` (~40 methods).

## The character state machine

A single integer (`+0x7d4`, changed through `SetState`) says what the
character is doing. The meaning of each value was recovered from how the
code reacts to it:

- **0** — normal running around.
- **6** — wall-slide jump; **9** — bouncing off a wall.
- **7, 8** — airborne sub-states used inside the update.
- **0xb / 0xc** — sliding down the left / right wall.
- **0xe** — brief cleanup state that drops the current input.
- **0x10** — death animation: plays the death clip to the end, unfreezes
  the HUD timer, then back to normal.
- **10** — parked/inactive (also used for replay standbys).

Changing state also picks a random animation variant for the new state
and stamps a "state changed" flag (`+0x7db` bit 3). A few one-byte flag
fields (`+0x7d8/0x7d9/0x7db`) carry facing direction, wall contact, and
replay bookkeeping as individual bits.

## What happens each frame (`Update`)

Roughly a thousand lines, but the shape is simple:

1. Lock the character, clear transient flags, turn on level palette flags.
2. Run a per-class pre-step hook (a virtual call — subclasses plug in here).
3. Handle the special states: `0xe` drops input; `0x10` waits out the death
   animation, then resets to normal.
4. Otherwise run the full update: read input, pick a movement target
   (`DoMovement` just selects between the grounded and airborne aim
   points), integrate physics (`Apply2DPhysics`), collide against the tile
   grid, attach to walls (states `0xb`/`0xc`), update animations, spawn
   dust/blood effects, and do replay bookkeeping.

Jumping (`Jump`, overridden by a few characters) gates on wall state,
picks a random jump sound, enters state 6, and snapshots the pose.
Death runs the base death sequence; subclasses add their own touch after
(see AlienHominid clearing its blaster flag).

## Replays and ghosts (the most interesting part)

A finished run can be stored and played back as a "ghost" racing
alongside you. Three pieces make this work:

- **Recording.** Each frame, the packed input (buttons, state id, special
  flag — see the bit layout below) is appended to the replay stream
  (`SMBReplay::RegisterInput`).
- **Cloning.** `Clone` builds a ghost copy: it is marked as a clone
  (`+0xa40 = 1`, which is how we *proved* what that flag means), given an
  index (`+0xa90`), handed the shared replay and animation library, and
  gets the whole physics tuning block (`+0x8a8–0x9fc`) copied over.
- **Playback.** `ProcessReplayFrame` runs first in every subclass update
  for clone objects. It fetches the keyframe for this character and frame,
  then either **teleports** (if the ghost is more than ~100 units away —
  distance-squared ≥ `10000.0f`) or **smoothly interpolates** toward the
  recorded position. When the tape runs out at the live index, the replay
  ends (`ActivateEnd`).

The keyframe is a tightly packed bitfield, decoded bit by bit in
`ProcessReplayFrame`: the state id lives in 5 bits of the first word,
facing and button flags in single bits of bytes 1–3 (byte 3, bit `0x40`
is the special button — the exact bit AlienHominid's record/playback
pair round-trips), a few flag bits go to `+0x7da`, and the recorded
position plus a duration used for interpolation follow. `SwitchToReplayMode`
(parks every clone in state `0x10` with the shared tape; called when you
watch a replay or reset certain bosses) and `SwitchToRegularMode` flip
between the two worlds.

## Tuning lives in data files, not code

The giant constructor reads per-character physics (speeds, jump heights,
timings) out of data files through the properties reader — that is where
a character's "feel" comes from. Subclass constructors only add their
animation path, character id, and extra-field initialization.

## Technical appendix

Replay-relevant base fields: position (`+0xa0`), velocity (`+0xb8`),
render position (`+0x868`), collision scratch (`+0x818`), input record
(`+0x7e0`), clone list (`+0x7f0`), animation library (`+0xf8`), replay
object (`+0xa38`), replay cursors (`+0xa44/0xa48`), animation/sound picks
(`+0xa4c/0xa50`), character id (`+0xa54`), clone index (`+0xa90`),
`sfx` slots, physics tunables (`+0x8a8–0x9fc`).

Virtual interface (called through the vtable; subclass override sets
observed in the wild): `Update`, `Render`, `RenderClones`, `RenderShots`,
`Death`, `Reset`, `Jump`, `WallJump`, `WallHit`, `RecordSpecial`,
`ProcessSpecial`, `AddShot`, `CreateClones`, constructors/destructors,
`Clone`. Slots confirmed against AlienHominid's vtable: `+0x50` Update,
`+0x68` Initialize, `+0x88` SpecialPress, `+0xb0` WallJump gate.

## Checklist for reading any character file

1. Tail layout after `+0xab0` + total size in the `GSMBCharactor` factory.
2. Which virtuals it overrides (shooters: special/clips/shots).
3. Owner-vs-clone gating on `+0xa40`.
4. `Update` prologue order: replay frame → animation push → flag watchdog → base.

*See also: `alien_hominid.md` (+ verified rewrite), `characters.md` (roster), `flash_anim.md` (animation runtime).*
