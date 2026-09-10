/* src/game/classes/OpenALCue.c — 2 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "OpenALCue.h"

/* ======================================================================
 * OpenALCue__OpenALCue  (Ghidra `OpenALCue` @ 0053e1d0)
 * Signature: uint8_t __thiscall OpenALCue(OpenALCue * self)
 * Class: OpenALCue
 * Calls: (none)
 * Called by: (none)
 */
/* OpenALCue__OpenALCue() */

void __thiscall OpenALCue__OpenALCue(OpenALCue *self)

{
  *(uint32_t *)(self + 4) = 0x3f800000;
  *(uint64_t *)(self + 8) = 0;
  return;
}

/* ======================================================================
 * OpenALCue__OpenALCue__0053e1e0  (Ghidra `~OpenALCue` @ 0053e1e0)
 * Signature: uint8_t __thiscall ~OpenALCue(OpenALCue * self)
 * Class: OpenALCue
 * Calls: `AudioFile__AudioFile__005a75c0`, `alDeleteBuffers`, `free`, `operator_delete`
 * Called by: (none)
 */
/* OpenALCue__OpenALCue__0053e1e0() */

void __thiscall OpenALCue__OpenALCue__0053e1e0(OpenALCue *self)

{
  int iVar1;
  int *piVar2;
  AudioFile *this_00;
  void *pvVar3;
  void *pvVar4;
  
  piVar2 = *(int **)(self + 8);
  if ((piVar2 != (int *)0x0) && (iVar1 = *piVar2, *piVar2 = iVar1 + -1, iVar1 + -1 == 0)) {
    this_00 = *(AudioFile **)(piVar2 + 8);
    if (this_00 != (AudioFile *)0x0) {
      AudioFile__AudioFile__005a75c0(this_00);
      operator_delete(this_00);
    }
    if (*(void **)(piVar2 + 2) != (void *)0x0) {
      free(*(void **)(piVar2 + 2));
    }
    pvVar3 = *(void **)(piVar2 + 0x10);
    pvVar4 = *(void **)((long)pvVar3 + 0x18);
    if (pvVar4 != (void *)0x0) {
      operator_delete__(pvVar4);
    }
    operator_delete(pvVar3);
    alDeleteBuffers(2,piVar2 + 4);
    operator_delete(piVar2);
    return;
  }
  return;
}
