# Actors around the player: animals, HUD, replays, cutscenes, chapters

## Animals (`SMBAnimal.c` + `SMBAnimals.c`, manager)

Per-critter AI (`SMBAnimal`: `GetAnimalAIState/SetAIState/SetState`,
`GetHorzSpeed`, `GetSafeDistance`, `CanJumpOver/CanJumpDown`,
`SetWayPoint`, `Update`) over the same `TileLevel__TileCollision` every
character uses; the manager (`SMBAnimals`) owns the herd —
`Initialize/DestroyAnimals`, `Create/RemoveAnimal`, `UpdateAnimals`,
`RenderAnimal(s)`, `EditorRender` (they're placeable), `AnimalCollision`.
Boss/minion variants (`SMBBossGroundCritterUpdate`, chargers, air/ground
critters in `src/game/logic/`) reuse the movement core.

## HUD (`GMeatHUD.c`)

Timer (`ResetTimer`, `FreezeTimer` — frozen by death anims, see
meatboy_charactor.md), level/intro/transition cards
(`SetInGameHudLevelName`, `ShowInGameHud`, `ShowLevelTransition`,
`ShowIntro`/`KillIntro`/`PlayIntroPart2`, `WaitForLogosToFinish`),
end-of-level + replay HUDs, unlock screens (`RenderUnlocks`,
`AddUnlockScreen`), message-box hooks.

## Replays, recorded and managed

- `SMBReplay.c` (the tape): `RegisterInput` per frame, `Start/EndReplayFrame`,
  `StartNewReplay`/`EndReplay`, `SetReplayMode`, `GetReplayFrame(ByIndex)`,
  `WriteReplayData`, file header, `ResetAll`. Frame packing is the bitfield
  layout decoded in meatboy_charactor.md.
- `SMBReplayManager.c` (the shelf): file list load, select/delete/validate,
  `LoadSelectedReplay(Data)`, `SetManageOnlyMode`, storage-disconnect
  handling. Entered via `GSuperMeatBoy__ShowCurrentReplay`.

## Cutscenes + chapters

- `GSMBCutSceneManager.c`: `PlayCutScene` / `IsCutSceneFinished` /
  `CancelCutScene`, loading/saving overlays, `ForceShutdown`.
- `SMBChapter.c`: chapter object — level lists, warp zones
  (`ActivateWarpZone(FromMenu)`, `LoadWarpZone/Library`, intros/outros),
  boss intro/outro **on threads** (`ThreadLoadBossIntro/Outro`),
  music crossfades per chapter/level/menu, unlock checks
  (`IsNextLevelUnlocked`, `VerifyChapterFileData`), lives/game-over
  screens, `GSMBChapterData.c` = the serializable chapter payload.
