# Character census — 25 playable, who does what

Derived from the `GSMBCharactor` factory (id → class → alloc size) plus
per-class clips and special methods. Base object ends ~`0xab0`; anything
bigger carries character-specific state.

## Shooters (projectile systems — see AlienHominid doc for the template)

| id | class | size | clips | extras |
|---|---|---|---|---|
| 0x1b (27) | AlienHominid | 0xb58 | shoot, bullet, bulletbreak | 10 gravity shots |
| 4 | DrFetus | 0x14c0 | shoot, missile, explosion | `UpdateShots`, `ResetShots`, `IsBoundsHittingShot` — homing/bounds logic, biggest payload |
| 7 | MeatNinja | 0xae8 | meatpoof | 3 timed bombs + death-burst `CanDie` (see meat_ninja.md) |

## Ability characters (special without projectiles)

| id | class | size | clips | special |
|---|---|---|---|---|
| 10 | Naija | 0xae0 | attack, charge | chargeable attack |
| 0xb | CommanderVideo | 0xad8 | float, float move | hover/float |
| 0x18 | Ogmo | 0xaa8 | doublejump | extra jump (overrides `Jump`) |
| 0x12 | Jill | 0xab0 | slowfall | fall retard |
| 0x1d | Tim | 0x10f0 | glow | largest state block after DrFetus |
| 0xe | MrMinecraft | 0xb00 | (see file) | — |
| 0xd | GooBall | 0xab0 | — | clone-heavy |

## Reskins (`0xa98` = bare base, no tail state)

TofuBoy (0x14), PotatoBoy (0x19), MeatboyEnding (0x1a), Brownie (5),
BandageGirl (6), MeatBoy8Bit (1), MeatBoy4Color (2), MeatBoy4Bit (3),
FlyWrench (0x10), Machinarium (0x15), TheKid (0x16), HeadCrab (0x17),
Runman (0xc), SprintMeatBoy (0x1c), VVVVVV (0x13).

## How to read a new character (5-minute recipe)

1. Factory row above → id, size (= base + tail).
2. `*CreateClones` → clip names = the ability's animation set.
3. `ProcessSpecial`/`AddShot`-shaped methods → trigger wiring.
4. `Update` prologue → what it simulates per frame.
5. `CanDie`/`Jump` overrides → where it breaks base rules.
