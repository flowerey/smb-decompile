/* src/game/classes/ExplodeStringData.c — 2 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "ExplodeStringData.h"

/* ======================================================================
 * ExplodeStringData__ExplodeStringData  (Ghidra `~ExplodeStringData` @ 005bd540)
 * Signature: uint8_t __thiscall ~ExplodeStringData(ExplodeStringData * self)
 * Class: ExplodeStringData
 * Calls: (none)
 * Called by: `GSuperMeatBoy__GSuperMeatBoy__00514290`, `ModelLoader__ModelLoader__005942a0`, `TEngine__TEngine`
 */
/* ExplodeStringData__ExplodeStringData() */

void __thiscall ExplodeStringData__ExplodeStringData(ExplodeStringData *self)

{
  void *pvVar1;
  uint uVar2;
  void *pvVar3;
  uint uVar4;
  ulong uVar5;

  uVar5 = 0;
  uVar2 = *(uint *)self;
  pvVar3 = *(void **)(self + 8);
  if (uVar2 != 0) {
    do {
      pvVar1 = *(void **)((long)pvVar3 + uVar5 * 8);
      if (pvVar1 != (void *)0x0) {
        operator_delete__(pvVar1);
        pvVar3 = *(void **)(self + 8);
        uVar2 = *(uint *)self;
      }
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulong)uVar4;
    } while (uVar4 < uVar2);
  }
  if (pvVar3 != (void *)0x0) {
    operator_delete__(pvVar3);
    return;
  }
  return;
}

/* ======================================================================
 * ExplodeStringData__operator_index  (Ghidra `operator[]` @ 005bd5a0)
 * Signature: uint8_t __thiscall operator[](ExplodeStringData * self, uint arg1)
 * Class: ExplodeStringData
 * Calls: (none)
 * Called by: `ModelLoader__ModelLoader__005942a0`
 */
/* ExplodeStringData__operator_index(unsigned int) */

uint64_t __thiscall ExplodeStringData__operator_index(ExplodeStringData *self, uint arg1)

{
  return *(uint64_t *)(*(long *)(self + 8) + (ulong)arg1 * 8);
}
