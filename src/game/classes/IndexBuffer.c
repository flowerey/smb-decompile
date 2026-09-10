/* src/game/classes/IndexBuffer.c — 5 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "IndexBuffer.h"

/* ======================================================================
 * IndexBuffer__IndexBuffer__0058a520  (Ghidra `~IndexBuffer` @ 0058a520)
 * Signature: uint8_t __thiscall ~IndexBuffer(IndexBuffer * self)
 * Class: IndexBuffer
 * Calls: `IndexBuffer__IndexBuffer__0058a550`, `gfxDestroyIndexBuffer`
 * Called by: (none)
 */
/* IndexBuffer__IndexBuffer__0058a550() */

void __thiscall IndexBuffer__IndexBuffer__0058a550(IndexBuffer *self)

{
  *(uint8_t ***)self = &PTR__IndexBuffer_005dcd50;
  /* try { // try from 0058a52f to 0058a533 has its CatchHandler @ 0058a53d */
  gfxDestroyIndexBuffer(self + 0x20);
  *(uint8_t ***)self = &PTR__BaseResource_005dbe30;
  return;
}

/* ======================================================================
 * IndexBuffer__IndexBuffer__0058a550  (Ghidra `~IndexBuffer` @ 0058a550)
 * Signature: uint8_t __thiscall ~IndexBuffer(IndexBuffer * self)
 * Class: IndexBuffer
 * Calls: `BaseResource__operator_delete`, `gfxDestroyIndexBuffer`
 * Called by: `IndexBuffer__IndexBuffer__0058a520`
 */
/* IndexBuffer__IndexBuffer__0058a550() */

void __thiscall IndexBuffer__IndexBuffer__0058a550(IndexBuffer *self)

{
  void *in_RSI;

  *(uint8_t ***)self = &PTR__IndexBuffer_005dcd50;
  /* try { // try from 0058a55f to 0058a563 has its CatchHandler @ 0058a574 */
  gfxDestroyIndexBuffer(self + 0x20);
  *(uint8_t ***)self = &PTR__BaseResource_005dbe30;
  BaseResource__operator_delete((BaseResource *)self, in_RSI);
  return;
}

/* ======================================================================
 * IndexBuffer__IndexBuffer__0058a590  (Ghidra `IndexBuffer` @ 0058a590)
 * Signature: uint8_t __thiscall IndexBuffer(IndexBuffer * self)
 * Class: IndexBuffer
 * Calls: (none)
 * Called by: `IndexBuffer__IndexBuffer`
 */
/* IndexBuffer__IndexBuffer__0058a590() */

void __thiscall IndexBuffer__IndexBuffer__0058a590(IndexBuffer *self)

{
  *(uint32_t *)(self + 8) = 1;
  *(uint8_t ***)self = &PTR__IndexBuffer_005dcd50;
  *(uint64_t *)(self + 0x10) = 0;
  return;
}

/* ======================================================================
 * IndexBuffer__Lock  (Ghidra `Lock` @ 0058a610)
 * Signature: uint8_t __thiscall Lock(IndexBuffer * self, void * * arg1, uint arg2, ulong arg3)
 * Class: IndexBuffer
 * Calls: `gfxLockIndexBuffer`
 * Called by: (none)
 */
/* IndexBuffer__Lock(void**, unsigned int, unsigned long) */

void __thiscall IndexBuffer__Lock(IndexBuffer *self, void **arg1, uint arg2, ulong arg3)

{
  if (arg3 == 0) {
    arg3 = *(ulong *)(self + 0x10);
  }
  gfxLockIndexBuffer(*(tagGLVertexBuffer **)(self + 0x20), arg1, arg2, arg3);
  return;
}

/* ======================================================================
 * IndexBuffer__Unlock  (Ghidra `Unlock` @ 0058a630)
 * Signature: uint8_t __thiscall Unlock(IndexBuffer * self)
 * Class: IndexBuffer
 * Calls: `gfxUnLockIndexBuffer`
 * Called by: (none)
 */
/* IndexBuffer__Unlock() */

void __thiscall IndexBuffer__Unlock(IndexBuffer *self)

{
  gfxUnLockIndexBuffer(*(tagGLVertexBuffer **)(self + 0x20));
  return;
}
