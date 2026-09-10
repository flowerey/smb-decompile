# AlienHominid — reconstruction note

Companion to `AlienHominid.h` / `AlienHominid.cpp` in this directory.
Original: `src/game/classes/AlienHominid.c` (untouched) plus
`SpecialPress` @00461910 (`src/engine/core_05.c`) and its base default
@00473ce0. General analysis: `docs/alien_hominid.md`.

## 1. What the class represents

Guest blaster character (id 27): base movement plus a 10-shot rack. Shots
spawn at the player on a button-press edge, fall straight down under
gravity, stick on solid tiles, play a break animation, free the slot.

## 2. Important fields and structures

- `Shot { state, x, y, animFrame }`, 16 bytes — **Confirmed** by stride
  math over 39 use sites (`(addr−0xAB8) % 0x10`).
- `ShotState { Flying 0, Breaking 1, Spent 2 }` — **Confirmed** by
  transitions (fire writes 0, landing writes 1, retire writes 2, ctor
  parks all at 2).
- `CharacterBaseView` — observed base region with per-field confidence in
  the header. Extension bounds `[0xA98, 0xB58)` **Confirmed** (factory
  alloc vs reskin allocs vs base max touch 0xA94).
- Clip slots `+0x30/+0x34/+0x58` as x/y/frame — **Inferred** from dozens
  of identical use sites. Clip vtable `+8` release / `+0x10` step —
  **Inferred** (discard vs per-frame-advance contexts).
- `velY (+0xBC)` — **Strong inference**: sign-tested in base Update,
  seeded on jumps, kicked +75 on fire. `unk_b8`, `poseA/B`, `poiseC`,
  `tune_*` — observed copies, roles unverified (**Speculation** tags).

## 3. State machines

- Shots: Spent →(fire) Flying →(solid tile) Breaking →(anim ends) Spent.
  **Confirmed**.
- Character special flag: set on fire, cleared when the shoot animation
  ends or on death/reset. **Confirmed**.
- Base state id 6/9/0x10 behaviors are base-idiom, preserved as observed.

## 4. Major functions

All 16 originals reconstructed 1:1, addresses in comments: RecordSpecial,
Reset, Update (+updateShot helper), Death, SpecialPress (**signature
restored from symtab** — Ghidra mistook `this` for the first parameter),
WallJump, WallHit (restructured from gotos, order preserved), CreateClones,
dtor + deleting dtor, RenderClones, Render, ProcessSpecial, ctor, clone
ctor, AddShot, RenderShots. Repeated 10× shot blocks folded into loops
plus `findSpentShot` / `fireShotAt` / `drawShot` / `updateShot` helpers
(all code-motion only).

## 5. Gameplay behavior

Press special → if the press is fresh, the character is alive, and no
shoot is playing: upward velocity kick (+75), shoot animation starts, one
shot spawns at the player. Shots rain down, stick, burst, free. Full rack
eats the input silently. Replays reproduce shots exactly via the input
bit. Clones share clips and render their own racks.

## 6. Relationships

- `MeatBoyCharactor` (base): movement, physics, collision, replay frame,
  effects, clone machinery — called, never reimplemented.
- `FlashClip`/`FlashLibrary`: animation instances and named-asset source.
- `TileLevel`: tile probe per shot per frame.
- `FinalBoss`-style consumers: none for AlienHominid (unlike DrFetus).

## 7. Evidence for key interpretations

| interpretation | evidence |
|---|---|
| 10×0x10 shot array | 39 addresses factor exactly; ctor parks 10×`2` |
| state values | fire/land/retire/ctor writes; render branches |
| gravity 500.0f | rodata float at 0x5BE5E0 + per-frame subtract |
| edge trigger | was/now compare in ProcessSpecial; `*pressPhase == 1` gate |
| clone clip sharing | clone ctor copies 3 pointers; dtor skips release on clones |
| SpecialPress `this` | symtab `AlienHominid::SpecialPress(tagButtonProps const*, void*)`; body does shot math on `+0xAB8` |
| velY | sign comparisons in base Update; jump seeding; +75 kick |
| vtable slots | recovered/AlienHominid.h cross-check (+0x50/+0x68/+0x88/+0xB0) |

## 8. Remaining uncertainties

- `+0xB8`, `+0x808`, `+0x8A8–0x8B8` tuning/pose roles (observed copies only).
- `pressPhase` pointed-to meaning beyond "must equal 1".
- vtable `+0x50` callee identity (kept as explicit call).
- `+0x7D8` bit0 / `+0x7D9` bit5 / `+0x20` post-jump mark roles.
- Base-class method internals (out of scope; called opaquely).
