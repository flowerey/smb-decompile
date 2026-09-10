# Alien Hominid — deep reverse-engineering notes

Companion to `src/game/classes/AlienHominid_documented.c` (human rewrite of
`AlienHominid.c`, 16 functions). Everything below is derived from the code;
game-knowledge cross-checks are marked *(external)*.

## TL;DR

Guest character (id `0x1b` = 27, picked in `GSMBCharactor`'s factory switch,
object size `0xb58`, anims `/Animations/ah.am`). His special is a blaster:
**10 shots max**, each spawns at the player, **falls straight down** under
500 u/s² gravity (x never changes), sticks on the first solid tile, plays
`bullet` while flying and `bulletbreak` on impact, then frees its slot.
Firing is **rising-edge triggered**; a full rack silently eats the input.
Clones (replay/ghost copies) are full objects sharing the owner's clips.

## Memory layout (byte-exact, verified: total 0xb58)

```
base[0xab0]   MeatBoyCharactor subobject (opaque)
+0xab0 u32    specialActive   1 while the "shoot" anim plays
+0xab4 u32    specialAnimFrame, synced both ways with shoot clip +0x58
+0xab8..0xb57 shots[10], stride 0x10:
              +0x0 u32 state  0 flying / 1 landed+breaking / 2 spent
              +0x4 f32 x      +0x8 f32 y   (a Vector2 in place)
              +0xc u32 frame  anim-frame cursor, synced with clip +0x58
```

Proof: all 39 unrolled slot addresses in the original satisfy
`(addr − 0xab8) % 0x10 ∈ {0,4,8,12}`; factory allocates `0xb58` for id 0x1b;
all other offsets in the rewrite are byte-identical to the original.

Base-class fields touched: `+0xa0` pos, `+0xf8` anim lib, `+0x7d4` stateId
(6 = wallslide-jump, 9 = wall-hit), `+0x7d8/0x7d9/0x7db` flags, `+0x7e0`
input record, `+0x7f0` clone array, `+0xa38` clone/replay manager,
`+0xa40` isClone gate, `+0xa4c/0xa50` sfx pick, `+0xa54` char id,
`+0xa90` clone index, `+0xa98/0xaa0/0xaa8` shoot/bullet/break clips.
Flash clip slots: `+0x30` x, `+0x34` y, `+0x58` frame; vtab `+8` release,
`+0x10` render/advance. (Slot roles inferred from uniform use.)

## Function-by-function

| addr | fn | behaviour |
|---|---|---|
| 004612d0 | RecordSpecial | recording path: `input[3].bit6 = specialActive&1` (mask `0xbf` first) |
| 00461300 | Reset | `specialActive = 0` + base reset |
| 00461310 | Update | anim sync, shoot-anim watchdog (`specialActive=0` when clip ends), base update, then per shot: `y −= 500·dt`, land on solid tile → state 1, frame 0 |
| 004617d0 | Death | base death + `specialActive = 0` |
| 004617f0 | WallJump | base wall-jump (state 6, kick effects, random landing sfx); nothing Alien-specific |
| 00461800 | WallHit | base wall-hit (state 9, impact effects); nothing Alien-specific |
| 00461810 | CreateClones | fetch `shoot`/`bullet`/`bulletbreak` clips + base clone setup |
| 00461870 | dtor | owner (`+0xa40 == 0`) releases 3 clips; clones skip; base dtor |
| 004618f0 | deleting dtor | dtor + `operator_delete` |
| 00461ac0 | RenderClones | owner-only: per clone, base render w/ shoot clip if its special is on, then that clone's 10 shots (fly/break clip pinned at x,y, retire when break ends) |
| 00462190 | Render | shoot-anim body (or base render), then own 10 shots |
| 00462760 | ProcessSpecial | latch input bit6 → specialActive; on 0→1 edge, re-arm first spent slot at player pos; always clear `specialAnimFrame` |
| 004628b0 | ctor | base ctor (`ah.am`, id 27), vtable, all shots spent, flag clear |
| 00462960 | clone ctor | base Clone + **share** owner's 3 clip pointers |
| 00462a60 | AddShot | re-arm first spent slot at player pos; drop if rack full |
| 00462b90 | RenderShots | own 10 shots (same helper as Render) |

## Replay wiring (inference, clearly marked)

`RecordSpecial` (write bit) / `ProcessSpecial` (read bit, edge-fire) are a
matched record/playback pair around input-record byte 3 bit 6, reached via
vtable (no static callers). Live firing presumably sets the bit from the
physical key elsewhere and flows through the same edge logic.

## Family

Same 10-shot layout in CommanderVideo, DrFetus, MeatNinja, Naija (each with
own char id: MeatNinja 7, AlienHominid 27) — likely one shared shooter
template with per-character clips. *(External: matches SMB's guest-character
design — Alien Hominid keeps his ray gun.)*

## Verification

- Offset audit: rewrite introduces no new memory offsets; all 39 unrolled
  slot addresses factor into `shots[i]`.
- `gcc -fsyntax-only` (project flags): original file 673 error lines,
  rewrite **0 errors**.
