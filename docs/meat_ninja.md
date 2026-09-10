# Meat Ninja — the character who explodes instead of dying

Meat Ninja (character id 7, `MeatNinja.c`, 707 lines, 16 methods) is built
on the same shooter template as Alien Hominid — same slot records, same
shared animation clips for clones, same edge-triggered special wiring —
but his weapon is different: timed explosions instead of falling shots,
and his signature trick is wired into death itself.

## Dying, converted into ammo

`CanDie` is the whole character in one function. The engine calls it to
ask "does this hit kill him?" For the first 5 lethal hits (tracked by a
death counter at `+0xaa0`), the answer is **no** — and each spared death
plants an explosion at his current position in the first free of 3 slots,
with a 0.2-second fuse (`0x3e4ccccd`, confirmed in the binary's float
table). Only when the rack is full does a lethal hit actually kill him.
(The N+ homage writes itself.)

## The explosion slots

Three slots (vs. the Hominid's ten), each holding an animation frame, a
position, and a state. `AddExplosion` and the special-button path both use
the same first-free-slot search; each frame `Update` ticks the fuse down
by the frame time; the render code draws the `meatpoof*` animation pinned
at each armed slot. The slot layout is the same `{frame, position,
state}` molecule as the Hominid's shots — same stride pattern, same clip
position/frame slots — just 3 wide and with no gravity.

## Technical appendix

Tail fields: online/armed flags (`+0xaa4`, `+0xaac`), fuse float
(`+0xab0`), zeroed scratch (`+0xab4`), then 3 slots from `+0xab8`
(stride `0x10`): frame at slot+0, position at slot+4, state at slot+12.
`Reset`, `CreateClones`, constructors mirror the Hominid shape with 3
slots and the `meatpoof` clip.

## Template confirmation

Alien Hominid (10 gravity shots) vs. Meat Ninja (3 timed bombs):
identical slot molecule, identical clone clip-sharing (the `+0xa40`
owner/clone gate), identical edge-triggered special wiring, different
payload. Any new shooter file can be read by diffing against these two.

*See also: `alien_hominid.md` (template twin), `characters.md` (roster).*
