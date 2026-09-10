/* src/game/classes/Texture.c — 5 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "Texture.h"

/* ======================================================================
 * Texture__Texture  (Ghidra `~Texture` @ 005a0400)
 * Signature: uint8_t __thiscall ~Texture(Texture * self)
 * Class: Texture
 * Calls: `TGraphics__AcquireDevice`, `TGraphics__ReleaseDevice`, `Texture__Texture__005a0720`, `gfxDestroyTexture`
 * Called by: (none)
 */
/* WARNING: Type propagation algorithm not settling */
/* Texture__Texture__005a0720() */

void __thiscall Texture__Texture__005a0720(Texture *self)

{
  long lVar1;
  Texture *pTVar2;
  long lVar3;
  
  *(uint8_t ***)self = &PTR__Texture_005dd630;
                    /* try { // try from 005a0412 to 005a0509 has its CatchHandler @ 005a0710 */
  TGraphics__AcquireDevice();
  _uNumTextures = _uNumTextures + -1;
  gfxDestroyTexture(self + 0x18);
  lVar3 = Graphics;
  lVar1 = *(long *)(Graphics + 0xaa0);
  if (*(Texture **)(lVar1 + 0x98) == self) {
    *(uint64_t *)(lVar1 + 0x98) = 0;
    pTVar2 = *(Texture **)(lVar3 + 1000);
    lVar1 = *(long *)(lVar3 + 0xaa0);
  }
  else {
    pTVar2 = *(Texture **)(Graphics + 1000);
  }
  if (pTVar2 == self) {
    *(uint64_t *)(lVar3 + 1000) = 0;
    pTVar2 = *(Texture **)(lVar1 + 0xa0);
  }
  else {
    pTVar2 = *(Texture **)(lVar1 + 0xa0);
  }
  if (pTVar2 == self) {
    *(uint64_t *)(lVar1 + 0xa0) = 0;
    pTVar2 = *(Texture **)(lVar3 + 0x3f0);
    lVar1 = *(long *)(lVar3 + 0xaa0);
  }
  else {
    pTVar2 = *(Texture **)(lVar3 + 0x3f0);
  }
  if (pTVar2 == self) {
    *(uint64_t *)(lVar3 + 0x3f0) = 0;
    pTVar2 = *(Texture **)(lVar1 + 0xa8);
  }
  else {
    pTVar2 = *(Texture **)(lVar1 + 0xa8);
  }
  if (pTVar2 == self) {
    *(uint64_t *)(lVar1 + 0xa8) = 0;
    pTVar2 = *(Texture **)(lVar3 + 0x3f8);
    lVar1 = *(long *)(lVar3 + 0xaa0);
  }
  else {
    pTVar2 = *(Texture **)(lVar3 + 0x3f8);
  }
  if (pTVar2 == self) {
    *(uint64_t *)(lVar3 + 0x3f8) = 0;
    pTVar2 = *(Texture **)(lVar1 + 0xb0);
  }
  else {
    pTVar2 = *(Texture **)(lVar1 + 0xb0);
  }
  if (pTVar2 == self) {
    *(uint64_t *)(lVar1 + 0xb0) = 0;
    pTVar2 = *(Texture **)(lVar3 + 0x400);
    lVar1 = *(long *)(lVar3 + 0xaa0);
  }
  else {
    pTVar2 = *(Texture **)(lVar3 + 0x400);
  }
  if (pTVar2 == self) {
    *(uint64_t *)(lVar3 + 0x400) = 0;
    pTVar2 = *(Texture **)(lVar1 + 0xb8);
  }
  else {
    pTVar2 = *(Texture **)(lVar1 + 0xb8);
  }
  if (pTVar2 == self) {
    *(uint64_t *)(lVar1 + 0xb8) = 0;
    pTVar2 = *(Texture **)(lVar3 + 0x408);
    lVar1 = *(long *)(lVar3 + 0xaa0);
  }
  else {
    pTVar2 = *(Texture **)(lVar3 + 0x408);
  }
  if (pTVar2 == self) {
    *(uint64_t *)(lVar3 + 0x408) = 0;
    pTVar2 = *(Texture **)(lVar1 + 0xc0);
  }
  else {
    pTVar2 = *(Texture **)(lVar1 + 0xc0);
  }
  if (pTVar2 == self) {
    *(uint64_t *)(lVar1 + 0xc0) = 0;
    pTVar2 = *(Texture **)(lVar3 + 0x410);
    lVar1 = *(long *)(lVar3 + 0xaa0);
  }
  else {
    pTVar2 = *(Texture **)(lVar3 + 0x410);
  }
  if (pTVar2 == self) {
    *(uint64_t *)(lVar3 + 0x410) = 0;
    pTVar2 = *(Texture **)(lVar1 + 200);
  }
  else {
    pTVar2 = *(Texture **)(lVar1 + 200);
  }
  if (pTVar2 == self) {
    *(uint64_t *)(lVar1 + 200) = 0;
    pTVar2 = *(Texture **)(lVar3 + 0x418);
    lVar1 = *(long *)(lVar3 + 0xaa0);
  }
  else {
    pTVar2 = *(Texture **)(lVar3 + 0x418);
  }
  if (pTVar2 == self) {
    *(uint64_t *)(lVar3 + 0x418) = 0;
    pTVar2 = *(Texture **)(lVar1 + 0xd0);
  }
  else {
    pTVar2 = *(Texture **)(lVar1 + 0xd0);
  }
  if (pTVar2 == self) {
    *(uint64_t *)(lVar1 + 0xd0) = 0;
    pTVar2 = *(Texture **)(lVar3 + 0x420);
  }
  else {
    pTVar2 = *(Texture **)(lVar3 + 0x420);
  }
  if (pTVar2 == self) {
    *(uint64_t *)(lVar3 + 0x420) = 0;
  }
  TGraphics__ReleaseDevice();
  *(uint8_t ***)self = &PTR__BaseResource_005dbe30;
  return;
}

/* ======================================================================
 * Texture__Texture__005a0720  (Ghidra `~Texture` @ 005a0720)
 * Signature: uint8_t __thiscall ~Texture(Texture * self)
 * Class: Texture
 * Calls: `BaseResource__operator_delete`, `TGraphics__AcquireDevice`, `TGraphics__ReleaseDevice`, `gfxDestroyTexture`
 * Called by: `Texture__Texture`
 */
/* WARNING: Type propagation algorithm not settling */
/* Texture__Texture__005a0720() */

void __thiscall Texture__Texture__005a0720(Texture *self)

{
  long lVar1;
  Texture *pTVar2;
  long lVar3;
  void *in_RSI;
  
  *(uint8_t ***)self = &PTR__Texture_005dd630;
                    /* try { // try from 005a0732 to 005a0829 has its CatchHandler @ 005a0a30 */
  TGraphics__AcquireDevice();
  _uNumTextures = _uNumTextures + -1;
  gfxDestroyTexture(self + 0x18);
  lVar3 = Graphics;
  lVar1 = *(long *)(Graphics + 0xaa0);
  if (self == *(Texture **)(lVar1 + 0x98)) {
    *(uint64_t *)(lVar1 + 0x98) = 0;
    pTVar2 = *(Texture **)(lVar3 + 1000);
    lVar1 = *(long *)(lVar3 + 0xaa0);
  }
  else {
    pTVar2 = *(Texture **)(Graphics + 1000);
  }
  if (self == pTVar2) {
    *(uint64_t *)(lVar3 + 1000) = 0;
    pTVar2 = *(Texture **)(lVar1 + 0xa0);
  }
  else {
    pTVar2 = *(Texture **)(lVar1 + 0xa0);
  }
  if (self == pTVar2) {
    *(uint64_t *)(lVar1 + 0xa0) = 0;
    pTVar2 = *(Texture **)(lVar3 + 0x3f0);
    lVar1 = *(long *)(lVar3 + 0xaa0);
  }
  else {
    pTVar2 = *(Texture **)(lVar3 + 0x3f0);
  }
  if (self == pTVar2) {
    *(uint64_t *)(lVar3 + 0x3f0) = 0;
    pTVar2 = *(Texture **)(lVar1 + 0xa8);
  }
  else {
    pTVar2 = *(Texture **)(lVar1 + 0xa8);
  }
  if (self == pTVar2) {
    *(uint64_t *)(lVar1 + 0xa8) = 0;
    pTVar2 = *(Texture **)(lVar3 + 0x3f8);
    lVar1 = *(long *)(lVar3 + 0xaa0);
  }
  else {
    pTVar2 = *(Texture **)(lVar3 + 0x3f8);
  }
  if (self == pTVar2) {
    *(uint64_t *)(lVar3 + 0x3f8) = 0;
    pTVar2 = *(Texture **)(lVar1 + 0xb0);
  }
  else {
    pTVar2 = *(Texture **)(lVar1 + 0xb0);
  }
  if (self == pTVar2) {
    *(uint64_t *)(lVar1 + 0xb0) = 0;
    pTVar2 = *(Texture **)(lVar3 + 0x400);
    lVar1 = *(long *)(lVar3 + 0xaa0);
  }
  else {
    pTVar2 = *(Texture **)(lVar3 + 0x400);
  }
  if (self == pTVar2) {
    *(uint64_t *)(lVar3 + 0x400) = 0;
    pTVar2 = *(Texture **)(lVar1 + 0xb8);
  }
  else {
    pTVar2 = *(Texture **)(lVar1 + 0xb8);
  }
  if (self == pTVar2) {
    *(uint64_t *)(lVar1 + 0xb8) = 0;
    pTVar2 = *(Texture **)(lVar3 + 0x408);
    lVar1 = *(long *)(lVar3 + 0xaa0);
  }
  else {
    pTVar2 = *(Texture **)(lVar3 + 0x408);
  }
  if (self == pTVar2) {
    *(uint64_t *)(lVar3 + 0x408) = 0;
    pTVar2 = *(Texture **)(lVar1 + 0xc0);
  }
  else {
    pTVar2 = *(Texture **)(lVar1 + 0xc0);
  }
  if (self == pTVar2) {
    *(uint64_t *)(lVar1 + 0xc0) = 0;
    pTVar2 = *(Texture **)(lVar3 + 0x410);
    lVar1 = *(long *)(lVar3 + 0xaa0);
  }
  else {
    pTVar2 = *(Texture **)(lVar3 + 0x410);
  }
  if (self == pTVar2) {
    *(uint64_t *)(lVar3 + 0x410) = 0;
    pTVar2 = *(Texture **)(lVar1 + 200);
  }
  else {
    pTVar2 = *(Texture **)(lVar1 + 200);
  }
  if (self == pTVar2) {
    *(uint64_t *)(lVar1 + 200) = 0;
    pTVar2 = *(Texture **)(lVar3 + 0x418);
    lVar1 = *(long *)(lVar3 + 0xaa0);
  }
  else {
    pTVar2 = *(Texture **)(lVar3 + 0x418);
  }
  if (self == pTVar2) {
    *(uint64_t *)(lVar3 + 0x418) = 0;
    pTVar2 = *(Texture **)(lVar1 + 0xd0);
  }
  else {
    pTVar2 = *(Texture **)(lVar1 + 0xd0);
  }
  if (self == pTVar2) {
    *(uint64_t *)(lVar1 + 0xd0) = 0;
    pTVar2 = *(Texture **)(lVar3 + 0x420);
  }
  else {
    pTVar2 = *(Texture **)(lVar3 + 0x420);
  }
  if (self == pTVar2) {
    *(uint64_t *)(lVar3 + 0x420) = 0;
  }
  TGraphics__ReleaseDevice();
  *(uint8_t ***)self = &PTR__BaseResource_005dbe30;
  BaseResource__operator_delete((BaseResource *)self,in_RSI);
  return;
}

/* ======================================================================
 * Texture__Texture__005a0a40  (Ghidra `Texture` @ 005a0a40)
 * Signature: uint8_t __thiscall Texture(Texture * self)
 * Class: Texture
 * Calls: (none)
 * Called by: (none)
 */
/* Texture__Texture__005a0a40() */

void __thiscall Texture__Texture__005a0a40(Texture *self)

{
  *(uint32_t *)(self + 8) = 1;
  *(uint8_t ***)self = &PTR__Texture_005dd630;
  *(uint32_t *)(self + 0x20) = 0;
  return;
}

/* ======================================================================
 * Texture__Lock  (Ghidra `Lock` @ 005a0b40)
 * Signature: uint8_t __thiscall Lock(Texture * self, void * * arg1, uint arg2)
 * Class: Texture
 * Calls: `TGraphics__AcquireDevice`, `TGraphics__ReleaseDevice`, `gfxLockTexture`
 * Called by: (none)
 */
/* Texture__Lock(void**, unsigned int) */

void __thiscall Texture__Lock(Texture *self,void **arg1,uint arg2)

{
  TGraphics__AcquireDevice();
  gfxLockTexture(self + 0x18,arg1,arg2);
  TGraphics__ReleaseDevice();
  return;
}

/* ======================================================================
 * Texture__Unlock  (Ghidra `Unlock` @ 005a0ba0)
 * Signature: uint8_t __thiscall Unlock(Texture * self)
 * Class: Texture
 * Calls: `TGraphics__AcquireDevice`, `TGraphics__ReleaseDevice`, `gfxUnlockTexture`
 * Called by: (none)
 */
/* Texture__Unlock() */

void __thiscall Texture__Unlock(Texture *self)

{
  TGraphics__AcquireDevice();
  gfxUnlockTexture(self + 0x18);
  TGraphics__ReleaseDevice();
  return;
}
