# Core types, scene, particles, players

## Math (`Vector2.c`, `Matrix4x4.c`, `FPUVector`)

Full operator suites (`+ - * /`, `+=`…, `==/!=`, `[]`, float casts) as
free functions with mangled-suffix twins (`__005be140` etc. — overloads
Ghidra couldn't separate; see the rename rule in the main README).
Everything positional is a `Vector2` (player `+0xa0`, shots, grid probes);
`Matrix4x4` carries the camera/world transforms (`Get2DPos/Scale/Skew`,
`operator*` compose). `FPUVector`, `Plane`, `Bounding{Box,Square,Circle,
Volume3D}`, `MultiPointBoundsCheck` serve collision queries.

## Scene graph + camera

`SceneObject2D/3D`, `TSceneObjectManager`, `RenderLayer(s)`,
`ReimplmentThisSprite`, `Sprite`, `Texture` family (`Tile/IndexTexture`,
`TexturePackage`, `TilePalette`), `Model/ModelLoader`,
`VertexBuffer/Stream/Declaration`, `IndexBuffer`, `Cursor3D`.
`Camera.c`: `SetupCamera`, `SetOrthoProjection`, `SetCameraMatricies`,
`ScreenToWorld/WorldToScreen`, per-frame `Update` (driven by
`GetCameraFocus` overrides).

## Particle emitters (one shape, many looks)

`ParticleEmitter` (base, 2 methods) with `RibbonEmitter`, `SmokeEmitter`,
`SparkEmitter`, `QuakeEmitter`, `FontEmitter`/`TextEmitterFont`,
`Blood` via `BloodyTiles` (`AddBloodyTile`), `TileLevelLightMap` flashes
(`ScreenFlashManager`), `GooBall`/`SprintMeatBoy` trails. Character code
spawns them through `MeatBoyCharactor__AddEffect(kind, tintA, tintB)` —
kinds 2/3 are the wall impact/kick bursts from the AlienHominid doc.

## Players and profiles

`TPlayer.c` (`IsValid`, `GetProfile`, `GetJoystick`, `IsPlayerID`),
`Players.c`, `UserProfile.c` / `UnixUserProfile.c` (18 methods: saves —
see `ReadSaveGames`/`WriteEntryToLeaderboard` in game-logic),
`TWindow.c`, `UserAlert.c` (interrupt message boxes),
`Achievements.c`/`Leaderboards.c` tables, `GameRegistry.c` tunables.
Console-platform leftovers (`Trophies`…) are stubs on this build.
