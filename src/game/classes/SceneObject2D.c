/* src/game/classes/SceneObject2D.c — 4 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "SceneObject2D.h"

/* ======================================================================
 * SceneObject2D__SceneObject2D__0059ae00  (Ghidra `~SceneObject2D` @ 0059ae00)
 * Signature: uint8_t __thiscall ~SceneObject2D(SceneObject2D * self)
 * Class: SceneObject2D
 * Calls: `CriticalSection__CriticalSection__005b71d0`, `SceneObject2D__SceneObject2D__0059b220`, `free`
 * Called by: (none)
 */
/* SceneObject2D__SceneObject2D__0059b220() */

void __thiscall SceneObject2D__SceneObject2D__0059b220(SceneObject2D *self)

{
  *(uint8_t ***)self = &PTR__SceneObject2D_005dd3d0;
  if (*(long *)(self + 0x48) != 0) {
    free(*(void **)(*(long *)(self + 0x48) + -8));
  }
  /* try { // try from 0059ae21 to 0059ae25 has its CatchHandler @ 0059ae2f */
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)(self + 0x58));
  *(uint8_t ***)self = &PTR__SceneObject_005bf710;
  return;
}

/* ======================================================================
 * SceneObject2D__DeSerialize  (Ghidra `DeSerialize` @ 0059ae40)
 * Signature: uint8_t __thiscall DeSerialize(SceneObject2D * self, void * arg1)
 * Class: SceneObject2D
 * Calls: (none)
 * Called by: (none)
 */
/* SceneObject2D__DeSerialize(void const*) */

void __thiscall SceneObject2D__DeSerialize(SceneObject2D *self, void *arg1)

{
  if (arg1 != (void *)0x0) {
    if (arg1 != self + 0x80) {
      *(uint64_t *)(self + 0x80) = *(uint64_t *)arg1;
      *(uint64_t *)(self + 0x88) = *(uint64_t *)((long)arg1 + 8);
      *(uint64_t *)(self + 0x90) = *(uint64_t *)((long)arg1 + 0x10);
      *(uint64_t *)(self + 0x98) = *(uint64_t *)((long)arg1 + 0x18);
      *(uint64_t *)(self + 0xa0) = *(uint64_t *)((long)arg1 + 0x20);
      *(uint64_t *)(self + 0xa8) = *(uint64_t *)((long)arg1 + 0x28);
      *(uint64_t *)(self + 0xb0) = *(uint64_t *)((long)arg1 + 0x30);
      *(uint64_t *)(self + 0xb8) = *(uint64_t *)((long)arg1 + 0x38);
      *(uint64_t *)(self + 0xc0) = *(uint64_t *)((long)arg1 + 0x40);
      *(uint64_t *)(self + 200) = *(uint64_t *)((long)arg1 + 0x48);
      *(uint64_t *)(self + 0xd0) = *(uint64_t *)((long)arg1 + 0x50);
      *(uint64_t *)(self + 0xd8) = *(uint64_t *)((long)arg1 + 0x58);
      *(uint64_t *)(self + 0xe0) = *(uint64_t *)((long)arg1 + 0x60);
      *(uint64_t *)(self + 0xe8) = *(uint64_t *)((long)arg1 + 0x68);
      *(uint64_t *)(self + 0xf0) = *(uint64_t *)((long)arg1 + 0x70);
    }
    *(uint32_t *)(self + 0x9c) = 1;
  }
  return;
}

/* ======================================================================
 * SceneObject2D__Serialize  (Ghidra `Serialize` @ 0059af10)
 * Signature: uint8_t __thiscall Serialize(SceneObject2D * self, void * arg1)
 * Class: SceneObject2D
 * Calls: (none)
 * Called by: (none)
 */
/* SceneObject2D__Serialize(void*) */

uint64_t __thiscall SceneObject2D__Serialize(SceneObject2D *self, void *arg1)

{
  if ((arg1 != (void *)0x0) && (arg1 != self + 0x80)) {
    *(uint64_t *)arg1 = *(uint64_t *)(self + 0x80);
    *(uint64_t *)((long)arg1 + 8) = *(uint64_t *)(self + 0x88);
    *(uint64_t *)((long)arg1 + 0x10) = *(uint64_t *)(self + 0x90);
    *(uint64_t *)((long)arg1 + 0x18) = *(uint64_t *)(self + 0x98);
    *(uint64_t *)((long)arg1 + 0x20) = *(uint64_t *)(self + 0xa0);
    *(uint64_t *)((long)arg1 + 0x28) = *(uint64_t *)(self + 0xa8);
    *(uint64_t *)((long)arg1 + 0x30) = *(uint64_t *)(self + 0xb0);
    *(uint64_t *)((long)arg1 + 0x38) = *(uint64_t *)(self + 0xb8);
    *(uint64_t *)((long)arg1 + 0x40) = *(uint64_t *)(self + 0xc0);
    *(uint64_t *)((long)arg1 + 0x48) = *(uint64_t *)(self + 200);
    *(uint64_t *)((long)arg1 + 0x50) = *(uint64_t *)(self + 0xd0);
    *(uint64_t *)((long)arg1 + 0x58) = *(uint64_t *)(self + 0xd8);
    *(uint64_t *)((long)arg1 + 0x60) = *(uint64_t *)(self + 0xe0);
    *(uint64_t *)((long)arg1 + 0x68) = *(uint64_t *)(self + 0xe8);
    *(uint64_t *)((long)arg1 + 0x70) = *(uint64_t *)(self + 0xf0);
  }
  return 0x78;
}

/* ======================================================================
 * SceneObject2D__SceneObject2D__0059b220  (Ghidra `~SceneObject2D` @ 0059b220)
 * Signature: uint8_t __thiscall ~SceneObject2D(SceneObject2D * self)
 * Class: SceneObject2D
 * Calls: `CriticalSection__CriticalSection__005b71d0`, `free`, `operator_delete`
 * Called by: `DrFetus__DrFetus__00465c60`, `MeatBoyCharactor__MeatBoyCharactor`, `MeatBoyCharactor__MeatBoyCharactor__0047b350`, `RaptureBoss__RaptureBoss`, `SMBAnimal__SMBAnimal__004868a0`, `SMBAnimal__SMBAnimal__004868b0`, `SMBBloodExplosion__Update`, `SMBPalette__FindAnimatedObstacles`, `SMBPalette__SMBPalette`, `SMBShooter__SMBShooter__00500440` (+4 more)
 */
/* SceneObject2D__SceneObject2D__0059b220() */

void __thiscall SceneObject2D__SceneObject2D__0059b220(SceneObject2D *self)

{
  *(uint8_t ***)self = &PTR__SceneObject2D_005dd3d0;
  if (*(long *)(self + 0x48) != 0) {
    free(*(void **)(*(long *)(self + 0x48) + -8));
  }
  /* try { // try from 0059b241 to 0059b245 has its CatchHandler @ 0059b256 */
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)(self + 0x58));
  *(uint8_t ***)self = &PTR__SceneObject_005bf710;
  operator_delete(self);
  return;
}
