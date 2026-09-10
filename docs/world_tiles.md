# World: TileLevel (the grid) + SMBPalette (everything on it)

Two files that split the world cleanly. `TileLevel.c` (25 methods) is the
spatial database; `SMBPalette.c` (16,689 lines, ~56 methods — biggest file
in the tree) is every interactive thing bolted onto it.

## TileLevel — grid math + swept collision

- Coordinates: `GetGridBlock/Pos/Coords`, `GetGridIndex`,
  `SnapPositionToCenter`, `IsPositionWithinGrid`. Cell lookup is
  `(x − origin) / fLevelGridWH` with ceiling (see `GetGridBlockFromPos`,
  the call AlienHominid's shots use).
- `TileCollision(obj, info)`: swept test — substep count derived from
  velocity ÷ grid size, early-out flag at obj `+0x9c`, detail in
  `TileCollisionResponse` + `TileCollisionInfo` out-param. Called by every
  character `Update`, animals, and boss critters.
- `TileLineOfSight` (AI vision), `PlaceTile`/`PlaceSetPiece`/`RemoveSetPiece`
  (editor + Minecraft char), `Add/RemoveLevelLayers`,
  `BuildTileStreams`/`BuildSetPieceStreams` (batched render data),
  `ExtendLevelToWH`, `ResetLevel`, in/out level transitions.

## SMBPalette — the interactive layer

One method family per hazard/toy, each with update + render + collision:

- Breaky blocks: `BreakyCollide` (called from character `Update`) gates on
  block-type nibble + replay flag + breaky-registry lookup, then
  `MarkBlockAsNotCollideable`; `MarkCollision`/`MarkCollisionOnBlock`
  build the registration tables (`0xffff` invalidation).
- Demons: `SpawnDemonSpawn`, `UpdateDemonSpawn`, `DemonBulletCollision`,
  `RenderDemonSpawn`.
- Lasers: `CreateSMBLaserStream` (+ stream render).
- Portals: `PortalCollision`. Platforms: `PlatformCollision/WallJump/Death`.
  Treadmills: `ApplyTredmillForce` (sic). Setpieces: `Add/RenderSetPiece*`.
- Obstacles: `Initialize/Destroy/ResetObstacleArrays`, `ObstacleCollision`,
  `FindAnimatedObstacles`, `ResetObstacles`.
- Replay twins of the hot paths: `SetReplayIndex/UnSetReplayIndex`,
  `ReplayUpdate`, `SetToReplayMode/SetToNormalMode`.
- Render batching: `RenderTile(Stream)`, `RenderSetPiece(Stream)`,
  `AddTileToBuffer`, `SpecialRender`, `GetCollisionMask`,
  `CollisionResponse`, boss-position ids (`IsBossPosID`).

*See also: `actors_meta.md` (animals collide here), `editor_input_data.md` (editor paints here), `rendering.md` (lightmaps).*
