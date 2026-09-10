/* src/game/classes/Sprite.c — 8 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "Sprite.h"

/* ======================================================================
 * Sprite__Render  (Ghidra `Render` @ 0059fdb0)
 * Signature: uint8_t __thiscall Render(Sprite * self)
 * Class: Sprite
 * Calls: `SamplerRegisterToSource`, `SceneObject2D__getTransformationMatrix`, `TGraphics__AddPixelStage`, `TGraphics__Draw`, `TGraphics__GetMatrix`, `TGraphics__ResetPixelStages`, `TGraphics__ResetTexCoordGen`, `TGraphics__SetMatrix`, `TGraphics__SetPerspectiveProjectionMode`, `TGraphics__SetRenderState` (+1 more)
 * Called by: (none)
 */
/* Sprite__Render() */

void __thiscall Sprite__Render(Sprite *self)

{
  TGraphics *this_00;
  Sprite SVar1;
  uint32_t uVar2;
  uint64_t uVar3;
  Matrix4x4 *pMVar4;

  uVar3 = SceneObject2D__getTransformationMatrix((SceneObject2D *)(self + 0x20));
  TGraphics__SetMatrix(Graphics, 0, uVar3);
  SVar1 = self[0x120];
  if (((byte)SVar1 & 1) != 0) {
    pMVar4 = (Matrix4x4 *)TGraphics__GetMatrix(Graphics);
    Matrix4x4__ConvertToOrthoMatrix(pMVar4, DAT_005be894 /* R:1.0f */, DAT_005c07a4 /* R:-1.0f */,
                                    DAT_005c07a4 /* R:-1.0f */, DAT_005be894 /* R:1.0f */,
                                    DAT_005c07a4 /* R:-1.0f */, DAT_005be894 /* R:1.0f */);
    TGraphics__SetPerspectiveProjectionMode(Graphics, 0);
    SVar1 = self[0x120];
  }
  if (((byte)SVar1 & 2) == 0) {
    TGraphics__ResetTexCoordGen(Graphics);
  }
  SVar1 = (Sprite)TGraphics__SetTexture(Graphics, 0xff, *(Texture **)(self + 0x118));
  this_00 = Graphics;
  self[0x121] = SVar1;
  TGraphics__SetRenderState(this_00, '\a', 0);
  if (((byte)self[0x120] & 4) == 0) {
    TGraphics__ResetPixelStages(Graphics);
    uVar2 = SamplerRegisterToSource(self[0x121]);
    TGraphics__AddPixelStage(Graphics, uVar2, 1, 0, 0, 0, 1, 0xffffffff);
  }
  TGraphics__Draw(Graphics, CGR__pSingleQuadStream, (IndexBuffer *)0x0);
  SVar1 = self[0x120];
  if (((byte)SVar1 & 4) == 0) {
    TGraphics__ResetPixelStages(Graphics);
    SVar1 = self[0x120];
  }
  if (((byte)SVar1 & 2) != 0) {
    return;
  }
  TGraphics__ResetTexCoordGen(Graphics);
  return;
}

/* ======================================================================
 * Sprite__Sprite  (Ghidra `~Sprite` @ 0059ff40)
 * Signature: uint8_t __thiscall ~Sprite(Sprite * self)
 * Class: Sprite
 * Calls: `Sprite__Sprite__0059ffd0`
 * Called by: (none)
 */
/* non-virtual thunk to Sprite__Sprite__0059ffd0() */

void __thiscall Sprite__Sprite__0059ffd0(Sprite *self)

{
  Sprite__dtor(self + -0x20);
  return;
}

/* ======================================================================
 * Sprite__Sprite__0059ff50  (Ghidra `~Sprite` @ 0059ff50)
 * Signature: uint8_t __thiscall ~Sprite(Sprite * self)
 * Class: Sprite
 * Calls: `BaseResource__Release`, `SceneObject2D__SceneObject2D__0059b220`, `Sprite__Sprite__0059ffd0`
 * Called by: (none)
 */
/* Sprite__Sprite__0059ffd0() */

void __thiscall Sprite__Sprite__0059ffd0(Sprite *self)

{
  *(uint8_t ***)self = &PTR__Sprite_005dd590;
  *(uint8_t ***)(self + 0x20) = &PTR__Sprite_005dd5b8;
  if (*(BaseResource **)(self + 0x118) != (BaseResource *)0x0) {
    /* try { // try from 0059ff75 to 0059ff79 has its CatchHandler @ 0059ff90 */
    BaseResource__Release(*(BaseResource **)(self + 0x118), 0);
  }
  /* try { // try from 0059ff7e to 0059ff82 has its CatchHandler @ 0059ffb2 */
  SceneObject2D__SceneObject2D__0059b220((SceneObject2D *)(self + 0x20));
  *(uint8_t ***)self = &PTR__RenderLayerObject_005be670;
  return;
}

/* ======================================================================
 * Sprite__Sprite__0059ffc0  (Ghidra `~Sprite` @ 0059ffc0)
 * Signature: uint8_t __thiscall ~Sprite(Sprite * self)
 * Class: Sprite
 * Calls: `Sprite__Sprite__0059ffd0`
 * Called by: (none)
 */
/* non-virtual thunk to Sprite__Sprite__0059ffd0() */

void __thiscall Sprite__Sprite__0059ffd0(Sprite *self)

{
  Sprite__dtor(self + -0x20);
  return;
}

/* ======================================================================
 * Sprite__Sprite__0059ffd0  (Ghidra `~Sprite` @ 0059ffd0)
 * Signature: uint8_t __thiscall ~Sprite(Sprite * self)
 * Class: Sprite
 * Calls: `BaseResource__Release`, `SceneObject2D__SceneObject2D__0059b220`, `operator_delete`
 * Called by: `Sprite__Sprite`, `Sprite__Sprite__0059ff50`, `Sprite__Sprite__0059ffc0`
 */
/* Sprite__Sprite__0059ffd0() */

void __thiscall Sprite__Sprite__0059ffd0(Sprite *self)

{
  *(uint8_t ***)self = &PTR__Sprite_005dd590;
  *(uint8_t ***)(self + 0x20) = &PTR__Sprite_005dd5b8;
  if (*(BaseResource **)(self + 0x118) != (BaseResource *)0x0) {
    /* try { // try from 0059fff5 to 0059fff9 has its CatchHandler @ 005a0017 */
    BaseResource__Release(*(BaseResource **)(self + 0x118), 0);
  }
  /* try { // try from 0059fffe to 005a0002 has its CatchHandler @ 005a0039 */
  SceneObject2D__SceneObject2D__0059b220((SceneObject2D *)(self + 0x20));
  *(uint8_t ***)self = &PTR__RenderLayerObject_005be670;
  operator_delete(self);
  return;
}

/* ======================================================================
 * Sprite__Sprite__005a0040  (Ghidra `Sprite` @ 005a0040)
 * Signature: uint8_t __thiscall Sprite(Sprite * self, SpriteCreation * arg1)
 * Class: Sprite
 * Calls: `CriticalSection__CriticalSection`, `TexturePackage__CreateTexture`
 * Called by: `CreateSMBPaletteResources`, `GLOBAL_sub_I_Sprite`
 */
/* Sprite__Sprite__005a0040(SpriteCreation const*) */

void __thiscall Sprite__Sprite__005a0040(Sprite *self, SpriteCreation *arg1)

{
  long *plVar1;
  uint64_t uVar2;

  *(uint8_t ***)self = &PTR__RenderLayerObject_005be670;
  *(uint64_t *)(self + 8) = 0;
  *(uint64_t *)(self + 0x10) = 0;
  *(uint64_t *)(self + 0x18) = 0;
  *(uint64_t *)(self + 0x68) = 0;
  *(uint32_t *)(self + 0x70) = 1;
  *(uint8_t ***)(self + 0x20) = &PTR__SceneObject2D_005dd3d0;
  /* try { // try from 005a0086 to 005a008a has its CatchHandler @ 005a0208 */
  CriticalSection__CriticalSection((CriticalSection *)(self + 0x78));
  uVar2 = vDefaultStart2D;
  self[0x120] = (Sprite)((byte)self[0x120] & 0xf8);
  *(uint32_t *)(self + 0xa0) = 0;
  *(uint32_t *)(self + 0xa4) = 0;
  *(uint32_t *)(self + 0xa8) = 0x3f800000;
  *(uint32_t *)(self + 0xac) = 0;
  *(uint32_t *)(self + 0xb0) = 0;
  *(uint32_t *)(self + 0xb4) = 0;
  *(uint32_t *)(self + 0xb8) = 0;
  *(uint32_t *)(self + 0xbc) = 1;
  *(uint64_t *)(self + 0xc0) = uVar2;
  *(uint64_t *)(self + 200) = uVar2;
  *(uint32_t *)(self + 0xd0) = 0;
  *(uint32_t *)(self + 0xd4) = 0;
  *(uint32_t *)(self + 0xd8) = 0;
  *(uint32_t *)(self + 0xdc) = 0;
  *(uint32_t *)(self + 0xe8) = 0;
  *(uint32_t *)(self + 0xec) = 0;
  *(uint32_t *)(self + 0xf0) = 0x3f800000;
  *(uint32_t *)(self + 0xf4) = 0x3f800000;
  *(uint32_t *)(self + 0xf8) = 0;
  *(uint32_t *)(self + 0xfc) = 0;
  *(uint32_t *)(self + 0x100) = 0;
  *(uint32_t *)(self + 0x104) = 0;
  *(uint32_t *)(self + 0x108) = 0;
  *(uint32_t *)(self + 0x10c) = 0;
  *(uint32_t *)(self + 0x110) = 0;
  *(uint8_t ***)self = &PTR__Sprite_005dd590;
  *(uint8_t ***)(self + 0x20) = &PTR__Sprite_005dd5b8;
  self[0x121] = (Sprite)0x0;
  if ((*(TexturePackage **)(arg1 + 8) == (TexturePackage *)0x0) || (*(int *)(arg1 + 0x10) == -1)) {
    plVar1 = *(long **)arg1;
    *(long **)(self + 0x118) = plVar1;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x10))();
      return;
    }
  } else {
    /* try { // try from 005a01b4 to 005a01e5 has its CatchHandler @ 005a01ed */
    uVar2 = TexturePackage__CreateTexture(*(TexturePackage **)(arg1 + 8), *(int *)(arg1 + 0x10));
    *(uint64_t *)(self + 0x118) = uVar2;
  }
  return;
}

/* ======================================================================
 * Sprite__SetupRender  (Ghidra `SetupRender` @ 005a0220)
 * Signature: uint8_t __thiscall SetupRender(Sprite * self)
 * Class: Sprite
 * Calls: `SamplerRegisterToSource`, `TGraphics__AddPixelStage`, `TGraphics__ResetPixelStages`, `TGraphics__SetTexture`
 * Called by: `RenderSetPiece`
 */
/* Sprite__SetupRender() */

void __thiscall Sprite__SetupRender(Sprite *self)

{
  Sprite SVar1;
  uint32_t uVar2;

  SVar1 = (Sprite)TGraphics__SetTexture(Graphics, 0xff, *(Texture **)(self + 0x118));
  self[0x121] = SVar1;
  if (((byte)self[0x120] & 4) == 0) {
    TGraphics__ResetPixelStages(Graphics);
    uVar2 = SamplerRegisterToSource(self[0x121]);
    TGraphics__AddPixelStage(Graphics, uVar2, 1, 0, 0, 0, 1, 0xffffffff);
  }
  return;
}

/* ======================================================================
 * Sprite__RenderOnly  (Ghidra `RenderOnly` @ 005a02a0)
 * Signature: uint8_t __thiscall RenderOnly(Sprite * self)
 * Class: Sprite
 * Calls: `SamplerRegisterToSource`, `SceneObject2D__getTransformationMatrix`, `TGraphics__AddPixelStage`, `TGraphics__Draw`, `TGraphics__GetMatrix`, `TGraphics__ResetPixelStages`, `TGraphics__ResetTexCoordGen`, `TGraphics__SetMatrix`, `TGraphics__SetPerspectiveProjectionMode`
 * Called by: `RenderSetPiece`
 */
/* Sprite__RenderOnly() */

void __thiscall Sprite__RenderOnly(Sprite *self)

{
  Sprite SVar1;
  uint32_t uVar2;
  uint64_t uVar3;
  Matrix4x4 *pMVar4;

  uVar3 = SceneObject2D__getTransformationMatrix((SceneObject2D *)(self + 0x20));
  TGraphics__SetMatrix(Graphics, 0, uVar3);
  SVar1 = self[0x120];
  if (((byte)SVar1 & 1) != 0) {
    pMVar4 = (Matrix4x4 *)TGraphics__GetMatrix(Graphics);
    Matrix4x4__ConvertToOrthoMatrix(pMVar4, DAT_005be894 /* R:1.0f */, DAT_005c07a4 /* R:-1.0f */,
                                    DAT_005c07a4 /* R:-1.0f */, DAT_005be894 /* R:1.0f */,
                                    DAT_005c07a4 /* R:-1.0f */, DAT_005be894 /* R:1.0f */);
    TGraphics__SetPerspectiveProjectionMode(Graphics, 0);
    SVar1 = self[0x120];
  }
  if (((byte)SVar1 & 2) == 0) {
    TGraphics__ResetTexCoordGen(Graphics);
    SVar1 = self[0x120];
  }
  if (((byte)SVar1 & 4) == 0) {
    TGraphics__ResetPixelStages(Graphics);
    uVar2 = SamplerRegisterToSource(self[0x121]);
    TGraphics__AddPixelStage(Graphics, uVar2, 1, 0, 0, 0, 1, 0xffffffff);
  }
  TGraphics__Draw(Graphics, CGR__pSingleQuadStream, (IndexBuffer *)0x0);
  SVar1 = self[0x120];
  if (((byte)SVar1 & 4) == 0) {
    TGraphics__ResetPixelStages(Graphics);
    SVar1 = self[0x120];
  }
  if (((byte)SVar1 & 2) != 0) {
    return;
  }
  TGraphics__ResetTexCoordGen(Graphics);
  return;
}
