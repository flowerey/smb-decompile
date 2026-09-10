# Dr Fetus — homing missiles, and the Final Boss's ammo dump

Dr Fetus (character id 4, `DrFetus.c`, 1742 lines, 21 methods) is the
heaviest shooter in the roster — his extra state alone is `0x14c0` bytes
(starting past the shared base, 10 missile slots at 256 bytes each:
`0xac0 + 10·0x100 = 0x14c0`, exactly the factory allocation). Each
missile is a full steering sub-object rather than AlienHominid's flat
record, because these missiles **home**: every frame each live missile
turns toward its target character (found via `getChar`) using an
angle computation, flies with real 2D physics, and dies on the first
solid tile — arming, heading, position and frame living inside the slot.

The supporting cast does what you'd expect: `AddShot` arms the first
free slot at the player, `ShootOnlyUpdate` fans the missile update across
every clone, `ResetShots`/`RenderShots`/`RenderClones`/`Render` handle
cleanup and drawing with the `shoot`/`missile`/`explosion` animations.
`CanDie` unconditionally returns "no" — boss-form Fetus can't die through
the normal path; his death is scripted elsewhere.

## Borrowed by the Final Boss

Two helpers exist for someone else's benefit: `IsBoundsHittingShot`
("is any live missile touching this box?") is called from
`FinalBoss__IsCollidingWithBounds`, and `GetClonePosition` (first clone's
position) from `FinalBoss__Update`. The end boss aims and hit-tests with
Fetus's live missiles rather than keeping its own.

## Technical appendix

Slot bases `0xac0, 0xbc0, … 0x13c0`; per-slot steering state includes armed
flag (`+0x9c` within the slot), heading (`+0xd8`), counters and position
(`+0xa4/+0xa8`). `ProcessSpecial`/`RecordSpecial` follow the standard
edge protocol from the base-class doc.

*See also: `bosses.md` (FinalBoss borrows), `characters.md` (roster).*
