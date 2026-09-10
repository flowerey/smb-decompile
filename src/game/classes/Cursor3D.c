/* src/game/classes/Cursor3D.c — 4 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "Cursor3D.h"

/* ======================================================================
 * Cursor3D__Cursor3D  (Ghidra `~Cursor3D` @ 00581b90)
 * Signature: uint8_t __thiscall ~Cursor3D(Cursor3D * self)
 * Class: Cursor3D
 * Calls: `BaseResource__Release`, `Cursor3D__Cursor3D__00581bf0`, `ReimplmentThisSprite__ReimplmentThisSprite__005979b0`
 * Called by: (none)
 */
/* Cursor3D__Cursor3D__00581bf0() */

void __thiscall Cursor3D__Cursor3D__00581bf0(Cursor3D *self)

{
  *(uint8_t ***)self = &PTR__Cursor3D_005dbed0;
  if (p3DCursorTexture != (BaseResource *)0x0) {
                    /* try { // try from 00581bad to 00581bb1 has its CatchHandler @ 00581bca */
    BaseResource__Release(p3DCursorTexture,0);
  }
  p3DCursorTexture = (BaseResource *)0x0;
  ReimplmentThisSprite__ReimplmentThisSprite__005979b0((ReimplmentThisSprite *)self);
  return;
}

/* ======================================================================
 * Cursor3D__Cursor3D__00581bf0  (Ghidra `~Cursor3D` @ 00581bf0)
 * Signature: uint8_t __thiscall ~Cursor3D(Cursor3D * self)
 * Class: Cursor3D
 * Calls: `BaseResource__Release`, `ReimplmentThisSprite__ReimplmentThisSprite__005979b0`, `operator_delete`
 * Called by: `Cursor3D__Cursor3D`
 */
/* Cursor3D__Cursor3D__00581bf0() */

void __thiscall Cursor3D__Cursor3D__00581bf0(Cursor3D *self)

{
  *(uint8_t ***)self = &PTR__Cursor3D_005dbed0;
  if (p3DCursorTexture != (BaseResource *)0x0) {
                    /* try { // try from 00581c0d to 00581c11 has its CatchHandler @ 00581c32 */
    BaseResource__Release(p3DCursorTexture,0);
  }
  p3DCursorTexture = (BaseResource *)0x0;
  ReimplmentThisSprite__ReimplmentThisSprite__005979b0((ReimplmentThisSprite *)self);
  operator_delete(self);
  return;
}

/* ======================================================================
 * Cursor3D__Cursor3D__00581c50  (Ghidra `Cursor3D` @ 00581c50)
 * Signature: uint8_t __thiscall Cursor3D(Cursor3D * self)
 * Class: Cursor3D
 * Calls: `ReimplmentThisSprite__ReimplmentThisSprite__005979d0`, `TGraphics__SetActiveGPUBlock`
 * Called by: (none)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Cursor3D__Cursor3D__00581c50() */

void __thiscall Cursor3D__Cursor3D__00581c50(Cursor3D *self)

{
  uint64_t uVar1;
  TGraphics *this_00;
  char *local_48;
  uint64_t local_40;
  uint32_t local_38;
  uint32_t local_34;
  uint32_t local_30;
  uint16_t local_2c;
  uint32_t local_24;
  uint8_t local_20;
  uint32_t local_1c;
  uint32_t local_18;
  
  ReimplmentThisSprite__ReimplmentThisSprite__005979d0((ReimplmentThisSprite *)self);
  *(uint8_t ***)self = &PTR__Cursor3D_005dbed0;
  if (p3DCursorTexture == 0) {
    local_40 = 0;
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
    local_24 = 0;
    local_20 = 1;
    local_1c = 0;
    local_18 = 0;
    local_48 = "EditorTextures/3dcursor.png";
    p3DCursorTexture = Texture__Create((tagTextureCreation *)&local_48);
  }
  this_00 = Graphics;
  *(uint64_t *)(self + 0x4c8) = *(uint64_t *)(Graphics + 0xaa0);
                    /* try { // try from 00581c8a to 00581d17 has its CatchHandler @ 00581d24 */
  TGraphics__SetActiveGPUBlock(this_00,(GPUState *)(self + 0x120));
  TGraphics__SetActiveGPUBlock(Graphics,(GPUState *)0x0);
  uVar1 = _UNK_005dbf08;
  *(uint64_t *)(self + 0xd0) = _DAT_005dbf00 /* R:0.02500000037252903f */;
  *(uint64_t *)(self + 0xd8) = uVar1;
  return;
}

/* ======================================================================
 * Cursor3D__Render  (Ghidra `Render` @ 00581d40)
 * Signature: uint8_t __thiscall Render(Cursor3D * self)
 * Class: Cursor3D
 * Calls: `TGraphics__SetActiveGPUBlock`, `TWindow__getAspectRatio`
 * Called by: (none)
 */
/* Cursor3D__Render() */

void __thiscall Cursor3D__Render(Cursor3D *self)

{
  float fVar1;
  TGraphics *this_00;
  Matrix4x4 aMStack_78 [64];
  uint32_t uStack_38;
  uint32_t uStack_34;
  uint32_t uStack_30;
  uint32_t uStack_2c;
  uint32_t uStack_28;
  float fStack_24;
  uint32_t uStack_20;
  uint32_t uStack_1c;
  
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  Matrix4x4__TransformVector3((FPUVector *)&uStack_38,(FPUVector *)(self + 0xa0),aMStack_78,1);
  fVar1 = *(float *)(self + 0xd4);
  fStack_24 = (float)TWindow__getAspectRatio(Window);
  fStack_24 = fStack_24 * fVar1;
  uStack_28 = *(uint32_t *)(self + 0xd0);
  uStack_1c = 0;
  uStack_20 = 0x3f800000;
  Matrix4x4__Transformation3D
            (aMStack_78,(FPUVector *)&uStack_28,(TQuaternion *)0x0,(FPUVector *)&uStack_38);
  this_00 = Graphics;
  *(uint64_t *)(self + 0x4c8) = *(uint64_t *)(Graphics + 0xaa0);
  TGraphics__SetActiveGPUBlock(this_00,(GPUState *)(self + 0x120));
  TGraphics__SetActiveGPUBlock(Graphics,(GPUState *)0x0);
  return;
}
