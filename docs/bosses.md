# Bosses — one interface, three very different insides

All bosses share a shape (`GetPosition`, `GetCameraFocus`, `OnDeath`,
`Reset`, `Render`, `Update`, `Hit`; smaller ones stop there). The three
with real systems are below. Sources: `RaptureBoss.c` (24 methods),
`HellBoss.c` (22), `FinalBoss.c` (13).

## RaptureBoss — radial maggot artillery

30 slots (`0x1e`), stride `0x1c` from `+0x8d0`: `{u32 state, Vector2 pos,
float dir, float speed?, u32 frame}`. `ShootMaggots(origin)` grabs the
first free slot, fans it out with `sincos` (radial spread),
`UpdateMaggotShots` flies them, `MaggotBulletCollision` /
`IsBoundsTouchingMaggot` / `MaggotCollisionCheck` resolve hits,
`RenderMaggotShots`/`RenderMaggot` draw, `ResetMaggot(s)` recycle.
Third projectile family in the game after AlienHominid's shots and
Fetus's missiles — compare all three for the full taxonomy.

## HellBoss — scripted attack choreography

The fight is a literal table in `FillAttackSequenceArray` (`+0x450`):

```
1, 2, 4, 3, 0, 1, 4, 3, 0, 0, 4   (+0x48c = cursor reset)
```

`DetermineNextAction` walks it (the same table is re-stamped in `Reset`/`ResetAttacks`, so the script restarts clean every phase); `SpawnMeatBoys` (!), `RenderAttack` /
`IsTouchingAttack` / `ResetAttack(s)` execute; `IncrementHurtState` tracks
phases. To rebalance the boss, this 11-entry array is the whole design.

## FinalBoss — phase two is a level reload in disguise

`SetToPhaseTwo` (from `SMBFinalBossOutroFinished`): destroys the player
char, deletes the replay object, kicks `ThreadLoadEnding` for the outro —
the "phase change" is teardown + streamed ending. Gameplay-wise it leans
on borrowed systems: `IsCollidingWithBounds` →
`DrFetus__IsBoundsHittingShot`, `Update` → `DrFetus__GetClonePosition`
(see dr_fetus.md), `PlayCredits` for the roll.

## The small ones

FactoryBoss (10), ForestBoss (11), HospitalBoss (12: +`ChangeAction`) —
arena dressing over the shared interface; read any single one in minutes
once the interface above is familiar.

*See also: `dr_fetus.md` (missile battery), `world_tiles.md` (arenas), `actors_meta.md` (critters).*
