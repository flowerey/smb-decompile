# The actors around the player: animals, HUD, replays, cutscenes, chapters

## Animals: small AIs on shared physics

Each critter (`SMBAnimal`) runs a tiny brain — AI state machine with
chase/flee flavors, horizontal speed, safe following distance, waypoint
targets, and can-I-jump-over-it / can-I-drop-down checks — integrated
with the same swept tile collision the player uses. A manager object
(`SMBAnimals`) owns the herd: create/destroy, per-frame updates, drawing
(including in the editor, since critters are placeable), and collision.
Boss-minion variants (chargers, air/ground critters) reuse the movement
core with fiercer parameters.

## HUD: timer discipline plus cards and unlocks

`GMeatHUD` owns the speedrun-critical timer (`ResetTimer`, and
`FreezeTimer` — frozen while death animations play, which is why the
death state unfreezes it), level/intro/transition cards, the end-of-level
and replay HUDs, unlock splash screens, and the message-box hooks. It
also gates the early game on logo screens finishing.

## Replays, recorded and managed

- **The tape** (`SMBReplay`): append the packed input each frame, mark
  frame boundaries, start/finish recordings, switch record/playback
  modes, fetch keyframes by index, serialize to disk with a file header.
  The keyframe bit-packing is decoded in the base-character doc.
- **The shelf** (`SMBReplayManager`): file list loading, select/delete/
  validate, loading a chosen replay's data, a manage-only mode, and
  storage-disconnect handling. Entered through the game's
  `ShowCurrentReplay`.

## Cutscenes and chapters

- The **cutscene manager** plays/cancels/finishes cinematics with
  loading/saving overlays and an emergency shutdown.
- A **chapter** (`SMBChapter`, with its serializable payload in
  `GSMBChapterData`) owns level lists, warp zones (enter/exit, warp
  intros/outros, warp libraries), per-chapter and menu music with
  crossfades, **boss cinematics loaded on background threads**, unlock
  checks with file verification, and the lives/game-over screens.

*See also: `world_tiles.md` (collision), `gsuper_meatboy.md` (replay entry), `meatboy_charactor.md` (ghost protocol).*
