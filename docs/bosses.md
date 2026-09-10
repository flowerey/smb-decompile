# Bosses — one interface, three very different insides

Every boss answers the same calls — where it is, what the camera should
do, reset, draw, update, take a hit, die. The small ones (Factory 10
methods, Forest 11, Hospital 12 with an extra "change action") are arena
dressing over that interface; read any one of them in minutes once the
pattern is familiar. The three below have real systems inside.

## Rapture sprays maggots in circles

30 projectile slots (stride `0x1c` from `+0x8d0`), each holding a state,
a position, a direction, a speed, and an animation frame. Firing grabs
the first free slot and fans it outward using sine/cosine (a radial
spread); per frame the shots fly, collide (`MaggotBulletCollision`,
`IsBoundsTouchingMaggot`), and draw, with dedicated reset functions to
recycle them. It's the game's third projectile family alongside Alien
Hominid's falling shots and Dr Fetus's homing missiles — comparing the
three is the fastest way to learn the codebase's combat idioms.

## Hell runs off a script — literally

The Hell fight is choreographed by a hard-coded 11-entry attack table
sitting at offset `+0x450`:

```
1, 2, 4, 3, 0, 1, 4, 3, 0, 0, 4
```

`DetermineNextAction` walks the table (restamped fresh in `Reset` /
`ResetAttacks`, so every phase starts clean); attacks execute through
spawn/render/hit-test helpers, including one that spawns live Meat Boys,
and `IncrementHurtState` tracks the phases. Rebalancing this boss would
mean editing that array.

## The Final Boss fight ends by tearing itself down

"Phase two" (`SetToPhaseTwo`, triggered when the outro cinematic
finishes) destroys the player character, deletes the replay object, and
loads the ending on a background thread — the phase change *is* a
controlled teardown plus a streamed movie. During the fight itself it
leans on borrowed systems: hit-testing through Dr Fetus's live missiles
and targeting through his clone position (see the Dr Fetus doc), plus a
credits roll for the win.

## Technical appendix

Sources: `RaptureBoss.c` (24 methods), `HellBoss.c` (22),
`FinalBoss.c` (13). Key addresses: maggot fire 00485180, attack-table
fill 0046ca00, phase-two 00469900.

*See also: `dr_fetus.md` (missile battery), `world_tiles.md` (arenas), `actors_meta.md` (critters).*
