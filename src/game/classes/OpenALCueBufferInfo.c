/* src/game/classes/OpenALCueBufferInfo.c — 5 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "OpenALCueBufferInfo.h"

/* ======================================================================
 * OpenALCueBufferInfo__OpenALCueBufferInfo  (Ghidra `OpenALCueBufferInfo` @ 0053e070)
 * Signature: uint8_t __thiscall OpenALCueBufferInfo(OpenALCueBufferInfo * self)
 * Class: OpenALCueBufferInfo
 * Calls: `alGenBuffers`
 * Called by: (none)
 */
/* OpenALCueBufferInfo__OpenALCueBufferInfo() */

void __thiscall OpenALCueBufferInfo__OpenALCueBufferInfo(OpenALCueBufferInfo *self)

{
  *(uint32_t *)self = 1;
  *(uint64_t *)(self + 8) = 0;
  *(uint32_t *)(self + 0x18) = 0;
  *(uint64_t *)(self + 0x20) = 0;
  *(uint64_t *)(self + 0x40) = 0;
  *(uint64_t *)(self + 0x10) = 0;
  alGenBuffers(2,self + 0x10);
  return;
}

/* ======================================================================
 * OpenALCueBufferInfo__OpenALCueBufferInfo__0053e0b0  (Ghidra `~OpenALCueBufferInfo` @ 0053e0b0)
 * Signature: uint8_t __thiscall ~OpenALCueBufferInfo(OpenALCueBufferInfo * self)
 * Class: OpenALCueBufferInfo
 * Calls: `AudioFile__AudioFile__005a75c0`, `alDeleteBuffers`, `free`, `operator_delete`
 * Called by: (none)
 */
/* OpenALCueBufferInfo__OpenALCueBufferInfo__0053e0b0() */

void __thiscall OpenALCueBufferInfo__OpenALCueBufferInfo__0053e0b0(OpenALCueBufferInfo *self)

{
  AudioFile *this_00;
  void *pvVar1;
  void *pvVar2;
  
  this_00 = *(AudioFile **)(self + 0x20);
  if (this_00 != (AudioFile *)0x0) {
    AudioFile__AudioFile__005a75c0(this_00);
    operator_delete(this_00);
  }
  if (*(void **)(self + 8) != (void *)0x0) {
    free(*(void **)(self + 8));
  }
  pvVar1 = *(void **)(self + 0x40);
  pvVar2 = *(void **)((long)pvVar1 + 0x18);
  if (pvVar2 != (void *)0x0) {
    operator_delete__(pvVar2);
  }
  operator_delete(pvVar1);
  alDeleteBuffers(2,self + 0x10);
  return;
}

/* ======================================================================
 * OpenALCueBufferInfo__AddRef  (Ghidra `AddRef` @ 0053e110)
 * Signature: uint8_t __thiscall AddRef(OpenALCueBufferInfo * self)
 * Class: OpenALCueBufferInfo
 * Calls: (none)
 * Called by: (none)
 */
/* OpenALCueBufferInfo__AddRef() */

void __thiscall OpenALCueBufferInfo__AddRef(OpenALCueBufferInfo *self)

{
  *(int *)self = *(int *)self + 1;
  return;
}

/* ======================================================================
 * OpenALCueBufferInfo__RemoveRef  (Ghidra `RemoveRef` @ 0053e120)
 * Signature: uint8_t __thiscall RemoveRef(OpenALCueBufferInfo * self)
 * Class: OpenALCueBufferInfo
 * Calls: (none)
 * Called by: (none)
 */
/* OpenALCueBufferInfo__RemoveRef() */

void __thiscall OpenALCueBufferInfo__RemoveRef(OpenALCueBufferInfo *self)

{
  *(int *)self = *(int *)self + -1;
  return;
}

/* ======================================================================
 * OpenALCueBufferInfo__Release  (Ghidra `Release` @ 0053e130)
 * Signature: uint8_t __thiscall Release(OpenALCueBufferInfo * self)
 * Class: OpenALCueBufferInfo
 * Calls: `AudioFile__AudioFile__005a75c0`, `alDeleteBuffers`, `free`, `operator_delete`
 * Called by: (none)
 */
/* OpenALCueBufferInfo__Release() */

void __thiscall OpenALCueBufferInfo__Release(OpenALCueBufferInfo *self)

{
  int iVar1;
  AudioFile *this_00;
  void *pvVar2;
  void *pvVar3;
  
  iVar1 = *(int *)self;
  *(int *)self = iVar1 + -1;
  if (iVar1 + -1 == 0) {
    this_00 = *(AudioFile **)(self + 0x20);
    if (this_00 != (AudioFile *)0x0) {
      AudioFile__AudioFile__005a75c0(this_00);
      operator_delete(this_00);
    }
    if (*(void **)(self + 8) != (void *)0x0) {
      free(*(void **)(self + 8));
    }
    pvVar2 = *(void **)(self + 0x40);
    pvVar3 = *(void **)((long)pvVar2 + 0x18);
    if (pvVar3 != (void *)0x0) {
      operator_delete__(pvVar3);
    }
    operator_delete(pvVar2);
    alDeleteBuffers(2,self + 0x10);
    operator_delete(self);
    return;
  }
  return;
}
