# Dr Fetus — homing missile battery (and the Final Boss's ammo dump)

`src/game/classes/DrFetus.c` (1742 lines, 20 methods, char id 4, giant
`0x14c0` payload). Playable-bonus version of the end boss: same homing
missiles, player-aimed. The richest shooter in the roster — and wired
directly into `FinalBoss`, which borrows both his missiles and his
position helpers (see bosses doc).

## Missile system (10 slots, stride 0x100)

Slot bases `0xac0, 0xbc0, … 0x13c0` (`0xac0 + 10·0x100 = 0x14c0` = alloc
size — the slots *are* the tail). Each slot is a 256-byte steering
sub-object (`+0x9c` armed, `+0xd8` heading, `+0xa4` counter, `+0xa8`
position), not AlienHominid's flat 16-byte records.

- `AddShot` — first-free-slot arming at player pos (`+0xa8`), facing by
  `+0x7d8` bit 0, state 0.
- `UpdateShots` — per live missile: bearing to `getChar(SuperMeatBoy, 1)`
  via `atan2` (+ π/2-style offset `0x5bf768`), `Apply2DPhysics(dt)`,
  tile probe at slot `+0xb68`; solid → state 1, frame 0. I.e. **homing**:
  they steer toward player 2 / the target char every frame and die on
  walls.
- `ShootOnlyUpdate` — fans `UpdateShots` across every clone in the manager
  (`+0xa38` count, `+0x7f0` array).
- `ResetShots`, `RenderShots`, `RenderClones`, `Render` — the usual
  shooter chorus over `shoot`/`missile`/`explosion` clips.
- `IsBoundsHittingShot(Bounds*)` — any live missile touching bounds?
  Called by **`FinalBoss__IsCollidingWithBounds`**: the end boss reuses
  Fetus's live missiles for its own hit tests.
- `GetClonePosition` — first clone's `+0xa0`, called by
  **`FinalBoss__Update`** for targeting.

## Boss wiring

`CanDie` returns constant `0` — boss-form Fetus cannot die by the normal
path (death is scripted elsewhere). `ProcessSpecial`/`RecordSpecial` follow
the standard edge protocol (see base-class doc).
