# World: the tile grid, and everything bolted onto it

The world splits cleanly in two. `TileLevel.c` (25 methods) is the
**spatial database** — where solid ground is and what's touching it.
`SMBPalette.c` (~56 methods, 16,689 lines, the biggest file in the tree)
is **everything interactive sitting on the grid**: breakable blocks,
demon spawners, lasers, portals, platforms, treadmills, set pieces.

## The grid: math plus swept collision

Looking up "what's at this position" is grid arithmetic: subtract the
level origin, divide by the cell size (`fLevelGridWH`), round up. The
companion queries convert both directions (position↔cell↔index), snap
positions to cell centers, and test whether a point is inside the level
at all. Levels can grow (`ExtendLevelToWH`), reset, swap layers in and
out, run in/out transitions, and pre-build batched render data
(`BuildTileStreams`/`BuildSetPieceStreams`) so static geometry draws
fast. `TileLineOfSight` answers "can A see B" for enemy AI.

Collision is **swept**, not sampled: `TileCollision` derives a substep
count from the object's velocity divided by cell size, then walks the
motion in small increments so fast objects can't tunnel through thin
walls. A hit flag on the object (`+0x9c`) and a detail-filled
`TileCollisionInfo` report come back out. Every character update,
animal, and boss critter funnels through this one function.

## The interactive layer

Each hazard family has its own update + render + collide routines:

- **Breakable blocks**: hitting one runs a gate chain (right block type?
  replay running? registered in the breaky table?) before the block is
  marked non-solid. `MarkCollision` builds those registration tables when
  a level loads (also called from level setup, the Minecraft character's
  block editing, and editor shutdown).
- **Demons**: spawners tick, bullets fly and collide, all drawn per-frame.
- **Lasers**: persistent streamed beams created with
  `CreateSMBLaserStream`.
- **Portals, platforms** (with their own wall-jump/death rules),
  **treadmills** (push the player with a force), **set pieces** (placed
  art + behavior chunks).
- **Obstacles** have their own lifecycle (initialize/destroy/reset
  arrays) plus animated-obstacle lookup.
- Every hot path has a **replay twin** (separate index set/unset,
  replay-update, replay/normal mode switches) so ghosts interact with a
  frozen world correctly.

*See also: `actors_meta.md` (animals collide here), `editor_input_data.md` (editor paints here), `rendering.md` (lightmaps).*
