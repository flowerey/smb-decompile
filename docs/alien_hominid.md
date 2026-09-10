# Alien Hominid — the blaster guest character

Alien Hominid is one of the game's guest characters (character id 27,
selected in the character factory). He plays like the rest of the cast —
run, jump, wall-slide — with one addition: a blaster. Pressing special
fires a shot; up to 10 shots can exist at once.

Companion file: `src/game/classes/AlienHominid_documented.c` is a cleaned,
verified rewrite of the 16 decompiled functions (see Verification below).

## How the blaster works

Each shot is a small record holding a state (flying, landed-and-breaking,
or spent), a position, and an animation frame. Firing grabs the first
spent slot and places a fresh shot at the player. There is no aiming and
no muzzle velocity: every frame, each flying shot simply falls straight
down at a fixed gravity (500 units/s²) until it touches a solid tile. On
impact it sticks in place and plays a short break animation, then its
slot becomes free again.

While flying, a shot is drawn with the "bullet" animation; once landed it
switches to the "bulletbreak" animation, and the slot is retired when that
animation finishes. If all 10 slots are busy, pressing special quietly
does nothing.

## Firing is edge-triggered

Holding the special button does not machine-gun shots. The game watches
for the moment the button *becomes* pressed (a 0→1 transition) and fires
exactly one shot per press.

This same transition logic is what makes replays work. Every frame, the
current button state is stamped into the input record
(`RecordSpecial`); when a replay (or ghost clone) is played back,
`ProcessSpecial` reads that bit back out and fires on its rising edge.
So live play and replay playback share one code path by construction.

## Clones share one set of animations

Ghost copies (used by replays) are full character objects, but they don't
each load their own "shoot / bullet / bulletbreak" animations — they
borrow the owner's, and each frame syncs its animation position back and
forth with the shared clips. Only the original character runs the
clone-rendering loop and releases the animations on shutdown; clones skip
both (the `+0xa40` "am I a clone" flag).

## The rest of the character

Death just runs the normal death sequence and drops the special flag.
Wall jumps and wall hits behave exactly like the base character (dust
particles, landing sounds) — nothing Alien-specific there. Construction
loads the `/Animations/ah.am` animation set, parks all 10 shots as spent,
and clears the special flag.

## Technical appendix

Object size `0xb58`; tail layout after the shared character base:

| offset | field | meaning |
|---|---|---|
| `+0xab0` | `specialActive` (u32) | 1 while the shoot animation plays |
| `+0xab4` | `specialAnimFrame` (u32) | animation position, synced both ways with the shoot clip's frame slot |
| `+0xab8…0xb57` | `shots[10]`, 16 bytes each | `{u32 state; float x, y; u32 frame}` |

Base-class fields used: player position (`+0xa0`), animation library
(`+0xf8`), state id (`+0x7d4`: 6 = wall-sliding jump, 9 = wall hit),
flag bytes (`+0x7d8/0x7d9/0x7db`), input record (`+0x7e0`), clone list
(`+0x7f0`), clone manager (`+0xa38`), clone flag (`+0xa40`), sound picks
(`+0xa4c/0xa50`), character id (`+0xa54`), clip pointers (`+0xa98` shoot,
`+0xaa0` bullet, `+0xaa8` break). Animation clips expose position/frame at
slots `+0x30/+0x34/+0x58`; their vtable slots `+8`/`+0x10` release and
advance one frame (role inferred from uniform use).

Function map (all in `AlienHominid.c` / the rewrite):

| address | function | behavior |
|---|---|---|
| 004612d0 | RecordSpecial | stamp special state into input-record byte 3, bit 6 (mask `0xbf` clears it first) |
| 00461300 | Reset | clear special flag + base reset |
| 00461310 | Update | animation sync, shoot-anim watchdog, base update, then gravity + landing check per shot |
| 004617d0 | Death | base death + clear special flag |
| 004617f0 | WallJump | base wall jump (state 6, kick effect, random landing sound) |
| 00461800 | WallHit | base wall hit (state 9, impact effect) |
| 00461810 | CreateClones | fetch the 3 clips + base clone setup |
| 00461870 / 004618f0 | destructor / deleting destructor | owner releases clips; clones skip; base teardown |
| 00461ac0 | RenderClones | owner-only: draw each clone + that clone's 10 shots |
| 00462190 | Render | shoot-animation body (or base render) + own 10 shots |
| 00462760 | ProcessSpecial | latch input bit; on rising edge re-arm first spent slot at player; always clear anim frame |
| 004628b0 / 00462960 | constructor / clone constructor | base setup + park shots as spent (+0xab0 flag clear); clone shares owner's clips |
| 00462a60 | AddShot | re-arm first spent slot at player; drop if rack full |
| 00462b90 | RenderShots | draw own 10 shots |

## Verification

- The rewrite introduces no new memory offsets; all 39 unrolled slot
  addresses satisfy `(addr − 0xab8) % 0x10 ∈ {0,4,8,12}`, i.e. they fold
  exactly into `shots[i]`.
- `gcc -fsyntax-only` (project flags): original file 673 error lines,
  rewrite **0 errors**.

*See also: `meatboy_charactor.md` (base), `meat_ninja.md` (sister shooter), `characters.md` (roster).*
