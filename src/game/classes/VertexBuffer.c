/* src/game/classes/VertexBuffer.c — 8 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "VertexBuffer.h"

/* ======================================================================
 * VertexBuffer__VertexBuffer  (Ghidra `~VertexBuffer` @ 005a6310)
 * Signature: uint8_t __thiscall ~VertexBuffer(VertexBuffer * self)
 * Class: VertexBuffer
 * Calls: `TGraphics__AcquireDevice`, `TGraphics__ReleaseDevice`, `VertexBuffer__VertexBuffer__005a6360`, `gfxDestroyVertexBuffer`
 * Called by: (none)
 */
/* VertexBuffer__VertexBuffer__005a6360() */

void __thiscall VertexBuffer__VertexBuffer__005a6360(VertexBuffer *self)

{
  *(uint8_t ***)self = &PTR__VertexBuffer_005ddd90;
  /* try { // try from 005a6322 to 005a6342 has its CatchHandler @ 005a634c */
  TGraphics__AcquireDevice();
  _uNumVertexBuffers = _uNumVertexBuffers + -1;
  gfxDestroyVertexBuffer(self + 0x28);
  TGraphics__ReleaseDevice();
  *(uint8_t ***)self = &PTR__BaseResource_005dbe30;
  return;
}

/* ======================================================================
 * VertexBuffer__VertexBuffer__005a6360  (Ghidra `~VertexBuffer` @ 005a6360)
 * Signature: uint8_t __thiscall ~VertexBuffer(VertexBuffer * self)
 * Class: VertexBuffer
 * Calls: `BaseResource__operator_delete`, `TGraphics__AcquireDevice`, `TGraphics__ReleaseDevice`, `gfxDestroyVertexBuffer`
 * Called by: `VertexBuffer__VertexBuffer`
 */
/* VertexBuffer__VertexBuffer__005a6360() */

void __thiscall VertexBuffer__VertexBuffer__005a6360(VertexBuffer *self)

{
  void *in_RSI;

  *(uint8_t ***)self = &PTR__VertexBuffer_005ddd90;
  /* try { // try from 005a6372 to 005a6392 has its CatchHandler @ 005a63a3 */
  TGraphics__AcquireDevice();
  _uNumVertexBuffers = _uNumVertexBuffers + -1;
  gfxDestroyVertexBuffer(self + 0x28);
  TGraphics__ReleaseDevice();
  *(uint8_t ***)self = &PTR__BaseResource_005dbe30;
  BaseResource__operator_delete((BaseResource *)self, in_RSI);
  return;
}

/* ======================================================================
 * VertexBuffer__VertexBuffer__005a63c0  (Ghidra `VertexBuffer` @ 005a63c0)
 * Signature: uint8_t __thiscall VertexBuffer(VertexBuffer * self)
 * Class: VertexBuffer
 * Calls: (none)
 * Called by: (none)
 */
/* VertexBuffer__VertexBuffer__005a63c0() */

void __thiscall VertexBuffer__VertexBuffer__005a63c0(VertexBuffer *self)

{
  *(uint32_t *)(self + 8) = 1;
  *(uint8_t ***)self = &PTR__VertexBuffer_005ddd90;
  *(uint64_t *)(self + 0x10) = 0;
  *(uint32_t *)(self + 0x1c) = 0;
  return;
}

/* ======================================================================
 * VertexBuffer__Lock  (Ghidra `Lock` @ 005a6470)
 * Signature: uint8_t __thiscall Lock(VertexBuffer * self, void * * arg1, uint arg2, ulong arg3)
 * Class: VertexBuffer
 * Calls: `TGraphics__AcquireDevice`, `gfxLockVertexBuffer`
 * Called by: `CommanderVideo__Render`, `CreateTileLightMapResources`, `FontEmitter__FillVertexBuffer`, `RenderSetPiece`, `RibbonEmitter__Update`, `SMBBloodExplosion__Update`, `SMBEditor__Render`, `SetPieceWayPointGroup__Render`, `SparkEmitter__Update`, `TileLevelLightMap__GenerateLightMap` (+2 more)
 */
/* VertexBuffer__Lock(void**, unsigned int, unsigned long) */

void __thiscall VertexBuffer__Lock(VertexBuffer *self, void **arg1, uint arg2, ulong arg3)

{
  TGraphics__AcquireDevice();
  if (arg3 == 0) {
    arg3 = *(ulong *)(self + 0x10);
  }
  gfxLockVertexBuffer(*(tagGLVertexBuffer **)(self + 0x28), arg1, arg2, arg3);
  return;
}

/* ======================================================================
 * VertexBuffer__Unlock  (Ghidra `Unlock` @ 005a64e0)
 * Signature: uint8_t __thiscall Unlock(VertexBuffer * self)
 * Class: VertexBuffer
 * Calls: `TGraphics__ReleaseDevice`, `gfxUnLockVertexBuffer`
 * Called by: `CommanderVideo__Render`, `CreateTileLightMapResources`, `FontEmitter__FillVertexBuffer`, `RenderSetPiece`, `RibbonEmitter__Update`, `SMBBloodExplosion__Update`, `SMBEditor__Render`, `SetPieceWayPointGroup__Render`, `SparkEmitter__Update`, `TileLevelLightMap__GenerateLightMap` (+2 more)
 */
/* VertexBuffer__Unlock() */

void __thiscall VertexBuffer__Unlock(VertexBuffer *self)

{
  gfxUnLockVertexBuffer(*(tagGLVertexBuffer **)(self + 0x28));
  TGraphics__ReleaseDevice();
  return;
}

/* ======================================================================
 * VertexBuffer__Realloc  (Ghidra `Realloc` @ 005a6500)
 * Signature: uint8_t __thiscall Realloc(VertexBuffer * self, ulong arg1)
 * Class: VertexBuffer
 * Calls: `TGraphics__AcquireDevice`, `TGraphics__ReleaseDevice`, `gfxReallocVertexBuffer`
 * Called by: `FontEmitter__FillVertexBuffer`, `TileLevelLightMap__GenerateFacesFromLevel`, `TileLevelLightMap__GenerateLightMap`, `TileLevelLightMap__GenerateStaticShadows`, `TileLevel__BuildTileStreams`
 */
/* VertexBuffer__Realloc(unsigned long) */

void __thiscall VertexBuffer__Realloc(VertexBuffer *self, ulong arg1)

{
  ulong local_48;
  uint16_t local_40;
  uint32_t local_3c;
  uint64_t local_38;
  uint32_t local_30;
  uint32_t local_2c;
  uint32_t local_28;

  TGraphics__AcquireDevice();
  if (*(ulong *)(self + 0x10) < arg1) {
    local_40 = *(uint16_t *)(self + 0x18);
    local_3c = 5;
    local_38 = 0;
    local_30 = 0;
    local_2c = 1;
    local_28 = 0;
    local_48 = arg1;
    gfxReallocVertexBuffer(self + 0x28, &local_48);
    *(ulong *)(self + 0x10) = arg1;
  }
  TGraphics__ReleaseDevice();
  return;
}

/* ======================================================================
 * VertexBuffer__Replicate  (Ghidra `Replicate` @ 005a6590)
 * Signature: uint8_t __thiscall Replicate(VertexBuffer * self, uint arg1)
 * Class: VertexBuffer
 * Calls: (none)
 * Called by: `Model__Replicate`
 */
/* VertexBuffer__Replicate(unsigned int) */

void __thiscall VertexBuffer__Replicate(VertexBuffer *self, uint arg1)

{
  *(uint *)(self + 0x20) = arg1;
  *(uint32_t *)(self + 0x1c) = 2;
  return;
}

/* ======================================================================
 * VertexBuffer__ResetReplication  (Ghidra `ResetReplication` @ 005a65a0)
 * Signature: uint8_t __thiscall ResetReplication(VertexBuffer * self)
 * Class: VertexBuffer
 * Calls: (none)
 * Called by: `Model__Render`
 */
/* VertexBuffer__ResetReplication() */

void __thiscall VertexBuffer__ResetReplication(VertexBuffer *self)

{
  *(uint32_t *)(self + 0x20) = 1;
  *(uint32_t *)(self + 0x1c) = 0;
  return;
}
