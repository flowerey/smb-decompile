# Character census — 25 playable, who does what

The character factory (`GSMBCharactor`) maps a numeric id to a class plus
an allocation size. Anything sized `0xa98` is a bare reskin (base object,
no extra state); anything bigger carries character-specific systems. All
rows below were read out of the factory switch and cross-checked against
each class file.

## Shooters (projectile systems — see the AlienHominid doc for the template)

| id | class | size | animations | system |
|---|---|---|---|---|
| 27 (0x1b) | AlienHominid | 0xb58 | shoot, bullet, bulletbreak | 10 gravity shots |
| 4 | DrFetus | 0x14c0 | shoot, missile, explosion | 10 homing missiles + bounds checks |
| 7 | MeatNinja | 0xae8 | meatpoof | 3 timed bombs + death-burst `CanDie` |

## Ability characters (a special move, no projectiles)

| id | class | size | animations | special |
|---|---|---|---|---|
| 10 | Naija | 0xae0 | attack, charge | chargeable attack |
| 0xb | CommanderVideo | 0xad8 | float, float move | hovering |
| 0x18 | Ogmo | 0xaa8 | doublejump | extra jump (overrides `Jump`) |
| 0x12 | Jill | 0xab0 | slowfall | slowed falling |
| 0x1d | Tim | 0x10f0 | glow | second-largest state block |
| 0xe | MrMinecraft | 0xb00 | (see file) | block manipulation |
| 0xd | GooBall | 0xab0 | — | clone-heavy |

## Reskins (base object only — `0xa98`, two at `0xaa0` — no extra state)

TofuBoy (0x14), PotatoBoy (0x19), MeatboyEnding (0x1a), Brownie (5),
BandageGirl (6), MeatBoy8Bit (1), MeatBoy4Color (2), MeatBoy4Bit (3),
FlyWrench (0x10, 0xaa0), Machinarium (0x15), TheKid (0x16), HeadCrab
(0x17), Runman (0xc), SprintMeatBoy (0x1c, 0xaa0), VVVVVV (0x13).

## How to read a new character (5-minute recipe)

1. Factory row above → id, size (= base + extra state).
2. `CreateClones` → animation names = the ability's visual set.
3. `ProcessSpecial` / `AddShot`-shaped methods → trigger wiring.
4. `Update` prologue → what it simulates per frame.
5. `CanDie` / `Jump` overrides → where it breaks base rules.

*See also: `alien_hominid.md`, `meat_ninja.md`, `dr_fetus.md`, `meatboy_charactor.md`.*
