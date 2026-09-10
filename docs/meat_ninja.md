# Meat Ninja — N+ homage with death-burst charges

`src/game/classes/MeatNinja.c` (707 lines, 16 methods, char id 7). Same
shooter *template* as Alien Hominid (per-slot state machine, shared-clip
clones, edge-triggered special) but a different weapon: timed explosions
instead of projectiles — and a `CanDie` override that spends death itself
as ammo. *(External: the N+ ninja guest star; "meatpoof" fits the poof
burst.)*

## Layout (tail after the `MeatBoyCharactor` base)

```
+0xaa4 u32 online      +0xaa8/? +0xaac/? (armed alongside)
+0xab0 f32 fuse        set to 0.2f (0x3e4ccccd) on plant, -= dt in Update
+0xab4 u32 zeroed on plant
+0xab8..0xaf7 3 slots, stride 0x10: { u32 frame @+0, Vector2 pos @+4, u32 state @+0xc }
```

i.e. the same `{frame, pos, state}` molecule as AlienHominid's shots, but
3 slots and no gravity — they sit where planted. (Address proof: slot
select tests `+0xac4/+0xad4/+0xae4 == 0`; field writes land at
`(i+0xab)*0x10 + {8,0xc,0x14}` = same cells.)

## The death-burst (`CanDie` — the whole character in one function)

Returns `bool`. If the ninja is online (`+0xaa4 == 0` means *not yet used*…
note the inverted sense: the flag is set to 1 as it fires) and the death
counter `+0xaa0 < 5`: plant an explosion at the current pos in the first
free slot, set fuse `0.2f`, and return whether a slot was actually free —
i.e. **the first 5 lethal hits are converted into explosions instead of
deaths** (returns false = "no, he doesn't die", unless the rack is full,
`+0xae4 != 0`, also false but planting nothing).

## Special / explosions

`ProcessSpecial` latches the input bit (same record path as AlienHominid)
and `AddExplosion` plants on demand with the identical first-free-slot
search. `Update` ticks the fuse down; `RenderExplosions`/`RenderClones`
draw the `meatpoof` clip pinned at each armed slot (same
`+0x30/+0x34/+0x58` clip-slot idiom). `Reset`/`CreateClones`/ctors mirror
the AlienHominid shape with 3 slots and the `meatpoof` clip.

## Template confirmation

AlienHominid (10 gravity shots) vs Meat Ninja (3 timed bombs): identical
slot molecule, identical clone-sharing (`+0xa40` gate, shared clip
pointers), identical edge-triggered special wiring, different payload.
Any new shooter file can be read by diffing against these two.

*See also: `alien_hominid.md` (template twin), `characters.md` (roster).*
