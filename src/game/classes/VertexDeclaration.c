/* src/game/classes/VertexDeclaration.c — 3 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "VertexDeclaration.h"

/* ======================================================================
 * VertexDeclaration__VertexDeclaration  (Ghidra `~VertexDeclaration` @ 005a65b0)
 * Signature: uint8_t __thiscall ~VertexDeclaration(VertexDeclaration * self)
 * Class: VertexDeclaration
 * Calls: `VertexDeclaration__VertexDeclaration__005a65f0`, `free`, `gfxDestroyVertexDeclaration`
 * Called by: (none)
 */
/* VertexDeclaration__VertexDeclaration__005a65f0() */

void __thiscall VertexDeclaration__VertexDeclaration__005a65f0(VertexDeclaration *self)

{
  *(uint8_t ***)self = &PTR__VertexDeclaration_005dde10;
  /* try { // try from 005a65bf to 005a65c3 has its CatchHandler @ 005a65d6 */
  gfxDestroyVertexDeclaration(self + 0x10);
  free(*(void **)(self + 0x18));
  *(uint8_t ***)self = &PTR__BaseResource_005dbe30;
  return;
}

/* ======================================================================
 * VertexDeclaration__VertexDeclaration__005a65f0  (Ghidra `~VertexDeclaration` @ 005a65f0)
 * Signature: uint8_t __thiscall ~VertexDeclaration(VertexDeclaration * self)
 * Class: VertexDeclaration
 * Calls: `BaseResource__operator_delete`, `free`, `gfxDestroyVertexDeclaration`
 * Called by: `VertexDeclaration__VertexDeclaration`
 */
/* VertexDeclaration__VertexDeclaration__005a65f0() */

void __thiscall VertexDeclaration__VertexDeclaration__005a65f0(VertexDeclaration *self)

{
  void *in_RSI;

  *(uint8_t ***)self = &PTR__VertexDeclaration_005dde10;
  /* try { // try from 005a65ff to 005a6603 has its CatchHandler @ 005a661d */
  gfxDestroyVertexDeclaration(self + 0x10);
  free(*(void **)(self + 0x18));
  *(uint8_t ***)self = &PTR__BaseResource_005dbe30;
  BaseResource__operator_delete((BaseResource *)self, in_RSI);
  return;
}

/* ======================================================================
 * VertexDeclaration__VertexDeclaration__005a6630  (Ghidra `VertexDeclaration` @ 005a6630)
 * Signature: uint8_t __thiscall VertexDeclaration(VertexDeclaration * self, tagVertexDeclarationCreation * arg1)
 * Class: VertexDeclaration
 * Calls: `malloc`, `memcpy`
 * Called by: `GLOBAL_sub_I_VertexDeclaration`
 */
/* VertexDeclaration__VertexDeclaration__005a6630(tagVertexDeclarationCreation const*) */

void __thiscall VertexDeclaration__VertexDeclaration__005a6630(VertexDeclaration *self,
                                                               tagVertexDeclarationCreation *arg1)

{
  ushort uVar1;
  void *__dest;
  size_t __size;

  *(uint32_t *)(self + 8) = 1;
  *(uint8_t ***)self = &PTR__VertexDeclaration_005dde10;
  uVar1 = *(ushort *)(arg1 + 8);
  *(ushort *)(self + 0x20) = uVar1;
  __size = (ulong)uVar1 << 4;
  __dest = malloc(__size);
  *(void **)(self + 0x18) = __dest;
  if (*(void **)arg1 != __dest) {
    memcpy(__dest, *(void **)arg1, __size);
    return;
  }
  return;
}
