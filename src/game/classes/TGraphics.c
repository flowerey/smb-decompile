/* src/game/classes/TGraphics.c — 45 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "TGraphics.h"

/* ======================================================================
 * TGraphics__GPUState_GPUState  (Ghidra `GPUState` @ 00587c10)
 * Signature: uint8_t __thiscall GPUState(GPUState * self)
 * Class: TGraphics
 * Calls: (none)
 * Called by: `Create__005956a0`, `ReimplmentThisSprite__ReimplmentThisSprite__005979d0`, `RenderLayer__RenderLayer__00597d50`
 */
/* WARNING: Type propagation algorithm not settling */
/* TGraphics__GPUState_GPUState() */

void __thiscall TGraphics__GPUState_GPUState(GPUState *self)

{
  ulong uVar1;
  int iVar2;
  uint uVar3;
  GPUState *pGVar5;
  bool bVar6;
  ulong uVar4;
  
  uVar4 = 0x3a8;
  iVar2 = 0x3a8;
  bVar6 = ((ulong)self & 1) != 0;
  pGVar5 = self;
  if (bVar6) {
    *self = (GPUState)0xff;
    uVar4 = 0x3a7;
    iVar2 = 0x3a7;
    pGVar5 = self + 1;
  }
  if (((ulong)pGVar5 & 2) == 0) {
    uVar3 = (uint)uVar4;
  }
  else {
    *(uint16_t *)pGVar5 = 0xffff;
    pGVar5 = pGVar5 + 2;
    uVar3 = iVar2 - 2;
    uVar4 = (ulong)uVar3;
  }
  if (((ulong)pGVar5 & 4) != 0) {
    *(uint32_t *)pGVar5 = 0xffffffff;
    uVar4 = (ulong)(uVar3 - 4);
    pGVar5 = pGVar5 + 4;
  }
  for (uVar1 = uVar4 >> 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(uint64_t *)pGVar5 = 0xffffffffffffffff;
    pGVar5 = pGVar5 + 8;
  }
  if ((uVar4 & 4) != 0) {
    *(uint32_t *)pGVar5 = 0xffffffff;
    pGVar5 = pGVar5 + 4;
  }
  if ((uVar4 & 2) != 0) {
    *(uint16_t *)pGVar5 = 0xffff;
    pGVar5 = pGVar5 + 2;
  }
  if (bVar6) {
    *pGVar5 = (GPUState)0xff;
  }
  pGVar5 = self + 0x98;
  uVar4 = 0x40;
  iVar2 = 0x40;
  bVar6 = ((ulong)pGVar5 & 1) != 0;
  if (bVar6) {
    pGVar5 = self + 0x99;
    self[0x98] = (GPUState)0x0;
    uVar4 = 0x3f;
    iVar2 = 0x3f;
  }
  if (((ulong)pGVar5 & 2) == 0) {
    uVar3 = (uint)uVar4;
  }
  else {
    *(uint16_t *)pGVar5 = 0;
    pGVar5 = pGVar5 + 2;
    uVar3 = iVar2 - 2;
    uVar4 = (ulong)uVar3;
  }
  if (((ulong)pGVar5 & 4) != 0) {
    *(uint32_t *)pGVar5 = 0;
    uVar4 = (ulong)(uVar3 - 4);
    pGVar5 = pGVar5 + 4;
  }
  for (uVar1 = uVar4 >> 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(uint64_t *)pGVar5 = 0;
    pGVar5 = pGVar5 + 8;
  }
  if ((uVar4 & 4) != 0) {
    *(uint32_t *)pGVar5 = 0;
    pGVar5 = pGVar5 + 4;
  }
  if ((uVar4 & 2) != 0) {
    *(uint16_t *)pGVar5 = 0;
    pGVar5 = pGVar5 + 2;
  }
  if (bVar6) {
    *pGVar5 = (GPUState)0x0;
  }
  pGVar5 = self + 0x244;
  uVar4 = 0xd4;
  iVar2 = 0xd4;
  bVar6 = ((ulong)pGVar5 & 1) != 0;
  if (bVar6) {
    pGVar5 = self + 0x245;
    self[0x244] = (GPUState)0x0;
    uVar4 = 0xd3;
    iVar2 = 0xd3;
  }
  if (((ulong)pGVar5 & 2) == 0) {
    uVar3 = (uint)uVar4;
  }
  else {
    *(uint16_t *)pGVar5 = 0;
    pGVar5 = pGVar5 + 2;
    uVar3 = iVar2 - 2;
    uVar4 = (ulong)uVar3;
  }
  if (((ulong)pGVar5 & 4) != 0) {
    *(uint32_t *)pGVar5 = 0;
    uVar4 = (ulong)(uVar3 - 4);
    pGVar5 = pGVar5 + 4;
  }
  for (uVar1 = uVar4 >> 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(uint64_t *)pGVar5 = 0;
    pGVar5 = pGVar5 + 8;
  }
  if ((uVar4 & 4) != 0) {
    *(uint32_t *)pGVar5 = 0;
    pGVar5 = pGVar5 + 4;
  }
  if ((uVar4 & 2) != 0) {
    *(uint16_t *)pGVar5 = 0;
    pGVar5 = pGVar5 + 2;
  }
  if (bVar6) {
    *pGVar5 = (GPUState)0x0;
  }
  *(uint32_t *)(self + 0x39c) = 1;
  *(uint32_t *)(self + 0x318) = 1;
  *(uint64_t *)(self + 0x3a0) = 0;
  return;
}

/* ======================================================================
 * TGraphics__GPUState_Reset  (Ghidra `Reset` @ 00587e40)
 * Signature: uint8_t __thiscall Reset(GPUState * self)
 * Class: TGraphics
 * Calls: (none)
 * Called by: (none)
 */
/* WARNING: Type propagation algorithm not settling */
/* TGraphics__GPUState_Reset() */

void __thiscall TGraphics__GPUState_Reset(GPUState *self)

{
  ulong uVar1;
  int iVar2;
  uint uVar3;
  GPUState *pGVar5;
  bool bVar6;
  ulong uVar4;
  
  uVar4 = 0x3a8;
  iVar2 = 0x3a8;
  bVar6 = ((ulong)self & 1) != 0;
  pGVar5 = self;
  if (bVar6) {
    *self = (GPUState)0xff;
    uVar4 = 0x3a7;
    iVar2 = 0x3a7;
    pGVar5 = self + 1;
  }
  if (((ulong)pGVar5 & 2) == 0) {
    uVar3 = (uint)uVar4;
  }
  else {
    *(uint16_t *)pGVar5 = 0xffff;
    pGVar5 = pGVar5 + 2;
    uVar3 = iVar2 - 2;
    uVar4 = (ulong)uVar3;
  }
  if (((ulong)pGVar5 & 4) != 0) {
    *(uint32_t *)pGVar5 = 0xffffffff;
    uVar4 = (ulong)(uVar3 - 4);
    pGVar5 = pGVar5 + 4;
  }
  for (uVar1 = uVar4 >> 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(uint64_t *)pGVar5 = 0xffffffffffffffff;
    pGVar5 = pGVar5 + 8;
  }
  if ((uVar4 & 4) != 0) {
    *(uint32_t *)pGVar5 = 0xffffffff;
    pGVar5 = pGVar5 + 4;
  }
  if ((uVar4 & 2) != 0) {
    *(uint16_t *)pGVar5 = 0xffff;
    pGVar5 = pGVar5 + 2;
  }
  if (bVar6) {
    *pGVar5 = (GPUState)0xff;
  }
  pGVar5 = self + 0x98;
  uVar4 = 0x40;
  iVar2 = 0x40;
  bVar6 = ((ulong)pGVar5 & 1) != 0;
  if (bVar6) {
    pGVar5 = self + 0x99;
    self[0x98] = (GPUState)0x0;
    uVar4 = 0x3f;
    iVar2 = 0x3f;
  }
  if (((ulong)pGVar5 & 2) == 0) {
    uVar3 = (uint)uVar4;
  }
  else {
    *(uint16_t *)pGVar5 = 0;
    pGVar5 = pGVar5 + 2;
    uVar3 = iVar2 - 2;
    uVar4 = (ulong)uVar3;
  }
  if (((ulong)pGVar5 & 4) != 0) {
    *(uint32_t *)pGVar5 = 0;
    uVar4 = (ulong)(uVar3 - 4);
    pGVar5 = pGVar5 + 4;
  }
  for (uVar1 = uVar4 >> 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(uint64_t *)pGVar5 = 0;
    pGVar5 = pGVar5 + 8;
  }
  if ((uVar4 & 4) != 0) {
    *(uint32_t *)pGVar5 = 0;
    pGVar5 = pGVar5 + 4;
  }
  if ((uVar4 & 2) != 0) {
    *(uint16_t *)pGVar5 = 0;
    pGVar5 = pGVar5 + 2;
  }
  if (bVar6) {
    *pGVar5 = (GPUState)0x0;
  }
  pGVar5 = self + 0x244;
  uVar4 = 0xd4;
  iVar2 = 0xd4;
  bVar6 = ((ulong)pGVar5 & 1) != 0;
  if (bVar6) {
    pGVar5 = self + 0x245;
    self[0x244] = (GPUState)0x0;
    uVar4 = 0xd3;
    iVar2 = 0xd3;
  }
  if (((ulong)pGVar5 & 2) == 0) {
    uVar3 = (uint)uVar4;
  }
  else {
    *(uint16_t *)pGVar5 = 0;
    pGVar5 = pGVar5 + 2;
    uVar3 = iVar2 - 2;
    uVar4 = (ulong)uVar3;
  }
  if (((ulong)pGVar5 & 4) != 0) {
    *(uint32_t *)pGVar5 = 0;
    uVar4 = (ulong)(uVar3 - 4);
    pGVar5 = pGVar5 + 4;
  }
  for (uVar1 = uVar4 >> 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(uint64_t *)pGVar5 = 0;
    pGVar5 = pGVar5 + 8;
  }
  if ((uVar4 & 4) != 0) {
    *(uint32_t *)pGVar5 = 0;
    pGVar5 = pGVar5 + 4;
  }
  if ((uVar4 & 2) != 0) {
    *(uint16_t *)pGVar5 = 0;
    pGVar5 = pGVar5 + 2;
  }
  if (bVar6) {
    *pGVar5 = (GPUState)0x0;
  }
  *(uint32_t *)(self + 0x39c) = 1;
  *(uint32_t *)(self + 0x318) = 1;
  *(uint64_t *)(self + 0x3a0) = 0;
  return;
}

/* ======================================================================
 * TGraphics__TGraphics  (Ghidra `TGraphics` @ 00588080)
 * Signature: uint8_t __thiscall TGraphics(TGraphics * self)
 * Class: TGraphics
 * Calls: `gfxCreateRenderDevice`
 * Called by: `TEngine__TEngine`
 */
/* WARNING: Type propagation algorithm not settling */
/* TGraphics__TGraphics() */

void __thiscall TGraphics__TGraphics(TGraphics *self)

{
  ulong uVar1;
  int iVar2;
  uint uVar3;
  TGraphics *pTVar5;
  TGraphics *pTVar6;
  bool bVar7;
  ulong uVar4;
  
  *(uint32_t *)(self + 0x348) = 0;
  pTVar5 = self + 0x350;
  uVar4 = 0x3a8;
  iVar2 = 0x3a8;
  bVar7 = ((ulong)pTVar5 & 1) != 0;
  if (bVar7) {
    pTVar5 = self + 0x351;
    self[0x350] = (TGraphics)0xff;
    uVar4 = 0x3a7;
    iVar2 = 0x3a7;
  }
  if (((ulong)pTVar5 & 2) == 0) {
    uVar3 = (uint)uVar4;
  }
  else {
    *(uint16_t *)pTVar5 = 0xffff;
    pTVar5 = (TGraphics *)((long)pTVar5 + 2);
    uVar3 = iVar2 - 2;
    uVar4 = (ulong)uVar3;
  }
  if (((ulong)pTVar5 & 4) != 0) {
    *(uint32_t *)pTVar5 = 0xffffffff;
    uVar4 = (ulong)(uVar3 - 4);
    pTVar5 = pTVar5 + 4;
  }
  for (uVar1 = uVar4 >> 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(uint64_t *)pTVar5 = 0xffffffffffffffff;
    pTVar5 = pTVar5 + 8;
  }
  if ((uVar4 & 4) != 0) {
    *(uint32_t *)pTVar5 = 0xffffffff;
    pTVar5 = pTVar5 + 4;
  }
  if ((uVar4 & 2) != 0) {
    *(uint16_t *)pTVar5 = 0xffff;
    pTVar5 = pTVar5 + 2;
  }
  if (bVar7) {
    *pTVar5 = (TGraphics)0xff;
  }
  pTVar5 = self + 1000;
  uVar4 = 0x40;
  iVar2 = 0x40;
  bVar7 = ((ulong)pTVar5 & 1) != 0;
  if (bVar7) {
    pTVar5 = self + 0x3e9;
    self[1000] = (TGraphics)0x0;
    uVar4 = 0x3f;
    iVar2 = 0x3f;
  }
  if (((ulong)pTVar5 & 2) == 0) {
    uVar3 = (uint)uVar4;
  }
  else {
    *(uint16_t *)pTVar5 = 0;
    pTVar5 = (TGraphics *)((long)pTVar5 + 2);
    uVar3 = iVar2 - 2;
    uVar4 = (ulong)uVar3;
  }
  if (((ulong)pTVar5 & 4) != 0) {
    *(uint32_t *)pTVar5 = 0;
    uVar4 = (ulong)(uVar3 - 4);
    pTVar5 = pTVar5 + 4;
  }
  for (uVar1 = uVar4 >> 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(uint64_t *)pTVar5 = 0;
    pTVar5 = pTVar5 + 8;
  }
  if ((uVar4 & 4) != 0) {
    *(uint32_t *)pTVar5 = 0;
    pTVar5 = pTVar5 + 4;
  }
  if ((uVar4 & 2) != 0) {
    *(uint16_t *)pTVar5 = 0;
    pTVar5 = pTVar5 + 2;
  }
  if (bVar7) {
    *pTVar5 = (TGraphics)0x0;
  }
  pTVar5 = self + 0x594;
  uVar4 = 0xd4;
  iVar2 = 0xd4;
  bVar7 = ((ulong)pTVar5 & 1) != 0;
  if (bVar7) {
    pTVar5 = self + 0x595;
    self[0x594] = (TGraphics)0x0;
    uVar4 = 0xd3;
    iVar2 = 0xd3;
  }
  if (((ulong)pTVar5 & 2) == 0) {
    uVar3 = (uint)uVar4;
  }
  else {
    *(uint16_t *)pTVar5 = 0;
    pTVar5 = (TGraphics *)((long)pTVar5 + 2);
    uVar3 = iVar2 - 2;
    uVar4 = (ulong)uVar3;
  }
  if (((ulong)pTVar5 & 4) != 0) {
    *(uint32_t *)pTVar5 = 0;
    uVar4 = (ulong)(uVar3 - 4);
    pTVar5 = pTVar5 + 4;
  }
  for (uVar1 = uVar4 >> 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(uint64_t *)pTVar5 = 0;
    pTVar5 = pTVar5 + 8;
  }
  if ((uVar4 & 4) != 0) {
    *(uint32_t *)pTVar5 = 0;
    pTVar5 = pTVar5 + 4;
  }
  if ((uVar4 & 2) != 0) {
    *(uint16_t *)pTVar5 = 0;
    pTVar5 = pTVar5 + 2;
  }
  if (bVar7) {
    *pTVar5 = (TGraphics)0x0;
  }
  pTVar5 = self + 0x6f8;
  *(uint32_t *)(self + 0x6ec) = 1;
  *(uint32_t *)(self + 0x668) = 1;
  *(uint64_t *)(self + 0x6f0) = 0;
  uVar4 = 0x3a8;
  iVar2 = 0x3a8;
  bVar7 = ((ulong)pTVar5 & 1) != 0;
  pTVar6 = pTVar5;
  if (bVar7) {
    self[0x6f8] = (TGraphics)0xff;
    uVar4 = 0x3a7;
    iVar2 = 0x3a7;
    pTVar6 = self + 0x6f9;
  }
  if (((ulong)pTVar6 & 2) == 0) {
    uVar3 = (uint)uVar4;
  }
  else {
    *(uint16_t *)pTVar6 = 0xffff;
    pTVar6 = pTVar6 + 2;
    uVar3 = iVar2 - 2;
    uVar4 = (ulong)uVar3;
  }
  if (((ulong)pTVar6 & 4) != 0) {
    *(uint32_t *)pTVar6 = 0xffffffff;
    uVar4 = (ulong)(uVar3 - 4);
    pTVar6 = pTVar6 + 4;
  }
  for (uVar1 = uVar4 >> 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(uint64_t *)pTVar6 = 0xffffffffffffffff;
    pTVar6 = pTVar6 + 8;
  }
  if ((uVar4 & 4) != 0) {
    *(uint32_t *)pTVar6 = 0xffffffff;
    pTVar6 = pTVar6 + 4;
  }
  if ((uVar4 & 2) != 0) {
    *(uint16_t *)pTVar6 = 0xffff;
    pTVar6 = pTVar6 + 2;
  }
  if (bVar7) {
    *pTVar6 = (TGraphics)0xff;
  }
  pTVar6 = self + 0x790;
  uVar4 = 0x40;
  iVar2 = 0x40;
  bVar7 = ((ulong)pTVar6 & 1) != 0;
  if (bVar7) {
    pTVar6 = self + 0x791;
    self[0x790] = (TGraphics)0x0;
    uVar4 = 0x3f;
    iVar2 = 0x3f;
  }
  if (((ulong)pTVar6 & 2) == 0) {
    uVar3 = (uint)uVar4;
  }
  else {
    *(uint16_t *)pTVar6 = 0;
    pTVar6 = pTVar6 + 2;
    uVar3 = iVar2 - 2;
    uVar4 = (ulong)uVar3;
  }
  if (((ulong)pTVar6 & 4) != 0) {
    *(uint32_t *)pTVar6 = 0;
    uVar4 = (ulong)(uVar3 - 4);
    pTVar6 = pTVar6 + 4;
  }
  for (uVar1 = uVar4 >> 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(uint64_t *)pTVar6 = 0;
    pTVar6 = pTVar6 + 8;
  }
  if ((uVar4 & 4) != 0) {
    *(uint32_t *)pTVar6 = 0;
    pTVar6 = pTVar6 + 4;
  }
  if ((uVar4 & 2) != 0) {
    *(uint16_t *)pTVar6 = 0;
    pTVar6 = pTVar6 + 2;
  }
  if (bVar7) {
    *pTVar6 = (TGraphics)0x0;
  }
  pTVar6 = self + 0x93c;
  uVar4 = 0xd4;
  iVar2 = 0xd4;
  bVar7 = ((ulong)pTVar6 & 1) != 0;
  if (bVar7) {
    pTVar6 = self + 0x93d;
    self[0x93c] = (TGraphics)0x0;
    uVar4 = 0xd3;
    iVar2 = 0xd3;
  }
  if (((ulong)pTVar6 & 2) == 0) {
    uVar3 = (uint)uVar4;
  }
  else {
    *(uint16_t *)pTVar6 = 0;
    pTVar6 = pTVar6 + 2;
    uVar3 = iVar2 - 2;
    uVar4 = (ulong)uVar3;
  }
  if (((ulong)pTVar6 & 4) != 0) {
    *(uint32_t *)pTVar6 = 0;
    uVar4 = (ulong)(uVar3 - 4);
    pTVar6 = pTVar6 + 4;
  }
  for (uVar1 = uVar4 >> 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(uint64_t *)pTVar6 = 0;
    pTVar6 = pTVar6 + 8;
  }
  if ((uVar4 & 4) != 0) {
    *(uint32_t *)pTVar6 = 0;
    pTVar6 = pTVar6 + 4;
  }
  if ((uVar4 & 2) != 0) {
    *(uint16_t *)pTVar6 = 0;
    pTVar6 = pTVar6 + 2;
  }
  if (bVar7) {
    *pTVar6 = (TGraphics)0x0;
  }
  bVar7 = Graphics != (TGraphics *)0x0;
  *(uint32_t *)(self + 0xa94) = 1;
  *(uint32_t *)(self + 0xa10) = 1;
  *(uint64_t *)(self + 0xa98) = 0;
  *(TGraphics **)(self + 0xaa0) = pTVar5;
  *(uint64_t *)(self + 0xaa8) = 0;
  if (bVar7) {
    Error__ThrowFatalError("The graphics interface has already been created");
  }
  Graphics = self;
  *(uint32_t *)(*(long *)(self + 0xaa0) + 0x10c) = 1;
  gfxCreateRenderDevice();
  Matrix4x4__Identity((Matrix4x4 *)self);
  Matrix4x4__Identity((Matrix4x4 *)(self + 0x40));
  Matrix4x4__Identity((Matrix4x4 *)(self + 0x80));
  Matrix4x4__Identity((Matrix4x4 *)(self + 0xc0));
  *(uint32_t *)(self + 0x340) = 0;
  return;
}

/* ======================================================================
 * TGraphics__TGraphics__00588560  (Ghidra `~TGraphics` @ 00588560)
 * Signature: uint8_t __thiscall ~TGraphics(TGraphics * self)
 * Class: TGraphics
 * Calls: `OpenGLGraphics__OpenGLGraphics__005608f0`, `operator_delete`
 * Called by: `TEngine__TEngine`, `TEngine__TEngine__00583e20`
 */
/* TGraphics__TGraphics__00588560() */

void __thiscall TGraphics__TGraphics__00588560(TGraphics *self)

{
  OpenGLGraphics *pOVar1;
  
  pOVar1 = GLGraphics;
  if (GLGraphics != (OpenGLGraphics *)0x0) {
    OpenGLGraphics__OpenGLGraphics__005608f0(GLGraphics);
    operator_delete(pOVar1);
  }
  GLGraphics = (OpenGLGraphics *)0x0;
  return;
}

/* ======================================================================
 * TGraphics__AcquireDevice  (Ghidra `AcquireDevice` @ 00588570)
 * Signature: uint8_t __stdcall AcquireDevice(void)
 * Class: TGraphics
 * Calls: (none)
 * Called by: `CreateShader`, `Create__00595df0`, `Create__005a0a60`, `Create__005a63e0`, `Create__005a66b0`, `Create__005a67f0`, `PixelShader__PixelShader__00595d50`, `PixelShader__PixelShader__00595da0`, `TEngine__EngineRun`, `TEngine__Render` (+11 more)
 */
/* TGraphics__AcquireDevice() */

uint64_t TGraphics__AcquireDevice(void)

{
  return 1;
}

/* ======================================================================
 * TGraphics__ReleaseDevice  (Ghidra `ReleaseDevice` @ 00588580)
 * Signature: uint8_t __stdcall ReleaseDevice(void)
 * Class: TGraphics
 * Calls: (none)
 * Called by: `CreateShader`, `Create__00595df0`, `Create__005a0a60`, `Create__005a63e0`, `Create__005a66b0`, `Create__005a67f0`, `PixelShader__PixelShader__00595d50`, `PixelShader__PixelShader__00595da0`, `TEngine__EngineRun`, `TEngine__Render` (+11 more)
 */
/* TGraphics__ReleaseDevice() */

void TGraphics__ReleaseDevice(void)

{
  return;
}

/* ======================================================================
 * TGraphics__ResetDevice  (Ghidra `ResetDevice` @ 00588590)
 * Signature: uint8_t __thiscall ResetDevice(TGraphics * self, tagResetDeviceParams * arg1)
 * Class: TGraphics
 * Calls: `ResourcePool__ReleaseAll`, `TResourceCreator__DestroyResources`, `TResourceCreator__RecreateResources`, `gfxResetDevice`
 * Called by: `TEngine__EngineRun`
 */
/* TGraphics__ResetDevice(tagResetDeviceParams const*) */

void __thiscall TGraphics__ResetDevice(TGraphics *self,tagResetDeviceParams *arg1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  TGraphics *pTVar5;
  bool bVar6;
  byte bVar7;
  
  bVar7 = 0;
  if ((gfxCurrState == 4) || (gfxCurrState == 1)) {
    pTVar5 = self + 0x6f8;
    uVar4 = 0x3a8;
    bVar6 = ((ulong)pTVar5 & 1) != 0;
    if (bVar6) {
      self[0x6f8] = (TGraphics)0xff;
      pTVar5 = self + 0x6f9;
      uVar4 = 0x3a7;
    }
    if (((ulong)pTVar5 & 2) != 0) {
      *(uint16_t *)pTVar5 = 0xffff;
      uVar4 = (ulong)((int)uVar4 - 2);
      pTVar5 = pTVar5 + 2;
    }
    if (((ulong)pTVar5 & 4) != 0) {
      *(uint32_t *)pTVar5 = 0xffffffff;
      uVar4 = (ulong)((int)uVar4 - 4);
      pTVar5 = pTVar5 + 4;
    }
    for (uVar3 = uVar4 >> 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(uint64_t *)pTVar5 = 0xffffffffffffffff;
      pTVar5 = pTVar5 + 8;
    }
    if ((uVar4 & 4) != 0) {
      *(uint32_t *)pTVar5 = 0xffffffff;
      pTVar5 = pTVar5 + 4;
    }
    if ((uVar4 & 2) != 0) {
      *(uint16_t *)pTVar5 = 0xffff;
      pTVar5 = pTVar5 + 2;
    }
    if (bVar6) {
      *pTVar5 = (TGraphics)0xff;
    }
    pTVar5 = self + 0x790;
    uVar4 = 0x40;
    bVar6 = ((ulong)pTVar5 & 1) != 0;
    if (bVar6) {
      self[0x790] = (TGraphics)0x0;
      pTVar5 = self + 0x791;
      uVar4 = 0x3f;
    }
    if (((ulong)pTVar5 & 2) != 0) {
      *(uint16_t *)pTVar5 = 0;
      uVar4 = (ulong)((int)uVar4 - 2);
      pTVar5 = pTVar5 + 2;
    }
    if (((ulong)pTVar5 & 4) != 0) {
      *(uint32_t *)pTVar5 = 0;
      uVar4 = (ulong)((int)uVar4 - 4);
      pTVar5 = pTVar5 + 4;
    }
    for (uVar3 = uVar4 >> 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(uint64_t *)pTVar5 = 0;
      pTVar5 = pTVar5 + 8;
    }
    if ((uVar4 & 4) != 0) {
      *(uint32_t *)pTVar5 = 0;
      pTVar5 = pTVar5 + 4;
    }
    if ((uVar4 & 2) != 0) {
      *(uint16_t *)pTVar5 = 0;
      pTVar5 = pTVar5 + 2;
    }
    if (bVar6) {
      *pTVar5 = (TGraphics)0x0;
    }
    pTVar5 = self + 0x93c;
    uVar4 = 0xd4;
    bVar6 = ((ulong)pTVar5 & 1) != 0;
    if (bVar6) {
      self[0x93c] = (TGraphics)0x0;
      pTVar5 = self + 0x93d;
      uVar4 = 0xd3;
    }
    if (((ulong)pTVar5 & 2) != 0) {
      *(uint16_t *)pTVar5 = 0;
      uVar4 = (ulong)((int)uVar4 - 2);
      pTVar5 = pTVar5 + 2;
    }
    if (((ulong)pTVar5 & 4) != 0) {
      *(uint32_t *)pTVar5 = 0;
      uVar4 = (ulong)((int)uVar4 - 4);
      pTVar5 = pTVar5 + 4;
    }
    for (uVar3 = uVar4 >> 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(uint64_t *)pTVar5 = 0;
      pTVar5 = pTVar5 + 8;
    }
    if ((uVar4 & 4) != 0) {
      *(uint32_t *)pTVar5 = 0;
      pTVar5 = pTVar5 + 4;
    }
    if ((uVar4 & 2) != 0) {
      *(uint16_t *)pTVar5 = 0;
      pTVar5 = pTVar5 + 2;
    }
    if (bVar6) {
      *pTVar5 = (TGraphics)0x0;
    }
    pTVar5 = self + 0x350;
    *(uint32_t *)(self + 0xa94) = 1;
    *(uint32_t *)(self + 0xa10) = 1;
    *(uint64_t *)(self + 0xa98) = 0;
    uVar4 = 0x3a8;
    bVar6 = ((ulong)pTVar5 & 1) != 0;
    if (bVar6) {
      self[0x350] = (TGraphics)0xff;
      pTVar5 = self + 0x351;
      uVar4 = 0x3a7;
    }
    if (((ulong)pTVar5 & 2) != 0) {
      *(uint16_t *)pTVar5 = 0xffff;
      uVar4 = (ulong)((int)uVar4 - 2);
      pTVar5 = pTVar5 + 2;
    }
    if (((ulong)pTVar5 & 4) != 0) {
      *(uint32_t *)pTVar5 = 0xffffffff;
      uVar4 = (ulong)((int)uVar4 - 4);
      pTVar5 = pTVar5 + 4;
    }
    for (uVar3 = uVar4 >> 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(uint64_t *)pTVar5 = 0xffffffffffffffff;
      pTVar5 = pTVar5 + 8;
    }
    if ((uVar4 & 4) != 0) {
      *(uint32_t *)pTVar5 = 0xffffffff;
      pTVar5 = pTVar5 + 4;
    }
    if ((uVar4 & 2) != 0) {
      *(uint16_t *)pTVar5 = 0xffff;
      pTVar5 = pTVar5 + 2;
    }
    if (bVar6) {
      *pTVar5 = (TGraphics)0xff;
    }
    pTVar5 = self + 1000;
    uVar4 = 0x40;
    bVar6 = ((ulong)pTVar5 & 1) != 0;
    if (bVar6) {
      self[1000] = (TGraphics)0x0;
      pTVar5 = self + 0x3e9;
      uVar4 = 0x3f;
    }
    if (((ulong)pTVar5 & 2) != 0) {
      *(uint16_t *)pTVar5 = 0;
      uVar4 = (ulong)((int)uVar4 - 2);
      pTVar5 = pTVar5 + 2;
    }
    if (((ulong)pTVar5 & 4) != 0) {
      *(uint32_t *)pTVar5 = 0;
      uVar4 = (ulong)((int)uVar4 - 4);
      pTVar5 = pTVar5 + 4;
    }
    for (uVar3 = uVar4 >> 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(uint64_t *)pTVar5 = 0;
      pTVar5 = pTVar5 + 8;
    }
    if ((uVar4 & 4) != 0) {
      *(uint32_t *)pTVar5 = 0;
      pTVar5 = pTVar5 + 4;
    }
    if ((uVar4 & 2) != 0) {
      *(uint16_t *)pTVar5 = 0;
      pTVar5 = pTVar5 + 2;
    }
    if (bVar6) {
      *pTVar5 = (TGraphics)0x0;
    }
    pTVar5 = self + 0x594;
    uVar4 = 0xd4;
    bVar6 = ((ulong)pTVar5 & 1) != 0;
    if (bVar6) {
      self[0x594] = (TGraphics)0x0;
      pTVar5 = self + 0x595;
      uVar4 = 0xd3;
    }
    if (((ulong)pTVar5 & 2) != 0) {
      *(uint16_t *)pTVar5 = 0;
      uVar4 = (ulong)((int)uVar4 - 2);
      pTVar5 = pTVar5 + 2;
    }
    if (((ulong)pTVar5 & 4) != 0) {
      *(uint32_t *)pTVar5 = 0;
      uVar4 = (ulong)((int)uVar4 - 4);
      pTVar5 = pTVar5 + 4;
    }
    for (uVar3 = uVar4 >> 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(uint64_t *)pTVar5 = 0;
      pTVar5 = pTVar5 + 8;
    }
    if ((uVar4 & 4) != 0) {
      *(uint32_t *)pTVar5 = 0;
      pTVar5 = pTVar5 + 4;
    }
    if ((uVar4 & 2) != 0) {
      *(uint16_t *)pTVar5 = 0;
      pTVar5 = pTVar5 + 2;
    }
    if (bVar6) {
      *pTVar5 = (TGraphics)0x0;
    }
    *(uint32_t *)(self + 0x6ec) = 1;
    *(uint32_t *)(self + 0x668) = 1;
    *(uint64_t *)(self + 0x6f0) = 0;
    TResourceCreator__DestroyResources((TResourceCreator *)ResourceCreator);
    ResourcePool__ReleaseAll(Resources);
    iVar2 = gfxResetDevice(arg1);
  }
  else {
    iVar2 = gfxResetDevice(arg1);
  }
  if (iVar2 == 1) {
    gfxCurrState = 3;
    TResourceCreator__RecreateResources((TResourceCreator *)ResourceCreator);
    pTVar5 = self + 0x350;
    uVar4 = 0x3a8;
    bVar6 = ((ulong)pTVar5 & 1) != 0;
    if (bVar6) {
      self[0x350] = (TGraphics)0xff;
      pTVar5 = self + 0x351;
      uVar4 = 0x3a7;
    }
    if (((ulong)pTVar5 & 2) != 0) {
      *(uint16_t *)pTVar5 = 0xffff;
      uVar4 = (ulong)((int)uVar4 - 2);
      pTVar5 = pTVar5 + 2;
    }
    if (((ulong)pTVar5 & 4) != 0) {
      *(uint32_t *)pTVar5 = 0xffffffff;
      uVar4 = (ulong)((int)uVar4 - 4);
      pTVar5 = pTVar5 + 4;
    }
    for (uVar3 = uVar4 >> 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(uint64_t *)pTVar5 = 0xffffffffffffffff;
      pTVar5 = pTVar5 + (ulong)bVar7 * -0x10 + 8;
    }
    if ((uVar4 & 4) != 0) {
      *(uint32_t *)pTVar5 = 0xffffffff;
      pTVar5 = pTVar5 + 4;
    }
    if ((uVar4 & 2) != 0) {
      *(uint16_t *)pTVar5 = 0xffff;
      pTVar5 = pTVar5 + 2;
    }
    if (bVar6) {
      *pTVar5 = (TGraphics)0xff;
    }
    pTVar5 = self + 1000;
    uVar4 = 0x40;
    bVar6 = ((ulong)pTVar5 & 1) != 0;
    if (bVar6) {
      self[1000] = (TGraphics)0x0;
      pTVar5 = self + 0x3e9;
      uVar4 = 0x3f;
    }
    if (((ulong)pTVar5 & 2) != 0) {
      *(uint16_t *)pTVar5 = 0;
      uVar4 = (ulong)((int)uVar4 - 2);
      pTVar5 = pTVar5 + 2;
    }
    if (((ulong)pTVar5 & 4) != 0) {
      *(uint32_t *)pTVar5 = 0;
      uVar4 = (ulong)((int)uVar4 - 4);
      pTVar5 = pTVar5 + 4;
    }
    for (uVar3 = uVar4 >> 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(uint64_t *)pTVar5 = 0;
      pTVar5 = pTVar5 + (ulong)bVar7 * -0x10 + 8;
    }
    if ((uVar4 & 4) != 0) {
      *(uint32_t *)pTVar5 = 0;
      pTVar5 = pTVar5 + 4;
    }
    if ((uVar4 & 2) != 0) {
      *(uint16_t *)pTVar5 = 0;
      pTVar5 = pTVar5 + 2;
    }
    if (bVar6) {
      *pTVar5 = (TGraphics)0x0;
    }
    pTVar5 = self + 0x594;
    uVar4 = 0xd4;
    bVar6 = ((ulong)pTVar5 & 1) != 0;
    if (bVar6) {
      self[0x594] = (TGraphics)0x0;
      pTVar5 = self + 0x595;
      uVar4 = 0xd3;
    }
    if (((ulong)pTVar5 & 2) != 0) {
      *(uint16_t *)pTVar5 = 0;
      uVar4 = (ulong)((int)uVar4 - 2);
      pTVar5 = pTVar5 + 2;
    }
    if (((ulong)pTVar5 & 4) != 0) {
      *(uint32_t *)pTVar5 = 0;
      uVar4 = (ulong)((int)uVar4 - 4);
      pTVar5 = pTVar5 + 4;
    }
    for (uVar3 = uVar4 >> 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(uint64_t *)pTVar5 = 0;
      pTVar5 = pTVar5 + (ulong)bVar7 * -0x10 + 8;
    }
    if ((uVar4 & 4) != 0) {
      *(uint32_t *)pTVar5 = 0;
      pTVar5 = pTVar5 + 4;
    }
    if ((uVar4 & 2) != 0) {
      *(uint16_t *)pTVar5 = 0;
      pTVar5 = pTVar5 + 2;
    }
    if (bVar6) {
      *pTVar5 = (TGraphics)0x0;
    }
    lVar1 = Engine;
    *(uint32_t *)(self + 0x6ec) = 1;
    *(uint32_t *)(self + 0x668) = 1;
    *(uint64_t *)(self + 0x6f0) = 0;
    gfxCurrState = 0;
    (**(code **)(**(long **)(lVar1 + 0x30) + 0x28))(*(long **)(lVar1 + 0x30),0,1);
    *(TGraphics **)(self + 0xaa0) = self + 0x6f8;
    return;
  }
  gfxCurrState = 2;
  (**(code **)(**(long **)(Engine + 0x30) + 0x28))(*(long **)(Engine + 0x30),1,1);
  *(TGraphics **)(self + 0xaa0) = self + 0x6f8;
  return;
}

/* ======================================================================
 * TGraphics__Clear  (Ghidra `Clear` @ 00588dd0)
 * Signature: uint8_t __thiscall Clear(TGraphics * self, ColorTemplate * arg1, uint arg2)
 * Class: TGraphics
 * Calls: `gfxClear`
 * Called by: `GSMBCutSceneManager__Render`, `GSMBMenu__RenderLoadingScreen`, `GraphicsBenchmark`, `RenderSetupLayer__Render`, `TEngine__TEngine`, `TileLevelLightMap__GenerateLightMap`, `UIDropDown__Render`, `UIFrame__Render`, `UITextField__CustomRender`
 */
/* TGraphics__Clear(ColorTemplate<float> const&, unsigned int) */

void __thiscall TGraphics__Clear(TGraphics *self,ColorTemplate *arg1,uint arg2)

{
  gfxClear(arg1,arg2);
  return;
}

/* ======================================================================
 * TGraphics__Present  (Ghidra `Present` @ 00588de0)
 * Signature: uint8_t __stdcall Present(void)
 * Class: TGraphics
 * Calls: `SDL_GL_GetDrawableSize`, `SDL_GL_SwapWindow`, `SDL_GetTicks`, `SDL_ceil`, `SDL_fabs`
 * Called by: `GraphicsBenchmark`, `TEngine__EngineRun`, `TEngine__Render`, `TEngine__TEngine`
 */
/* TGraphics__Present() */

void TGraphics__Present(void)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint64_t uVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int iStack_60;
  int iStack_5c;
  int aiStack_58 [4];
  int aiStack_48 [6];
  
  iVar3 = *(int *)(GLGraphics + 2);
  uVar4 = *GLGraphics;
  if (iVar3 != 0) {
    SDL_GL_GetDrawableSize(uVar4,aiStack_58,aiStack_48);
    fVar7 = (float)aiStack_48[0];
    fVar9 = (float)aiStack_58[0];
    uVar1 = *(ushort *)(Window + 8);
    uVar2 = *(ushort *)(Window + 10);
    fVar10 = (float)uVar1;
    fVar11 = (float)uVar2;
    dVar8 = (double)SDL_fabs((double)(fVar10 / fVar11 - fVar9 / fVar7));
    if (dVar8 < DAT_005d5480 /* R:u32=3944497965 */) {
      iVar5 = 0;
      iVar6 = 0;
      iStack_60 = aiStack_58[0];
      iStack_5c = aiStack_48[0];
    }
    else if (fVar10 / fVar11 <= fVar9 / fVar7) {
      iVar5 = 0;
      iStack_5c = aiStack_48[0];
      dVar8 = (double)SDL_ceil((double)(((float)aiStack_48[0] / fVar11) * fVar10));
      iStack_60 = (int)dVar8;
      iVar6 = (aiStack_58[0] - iStack_60) / 2;
    }
    else {
      iVar6 = 0;
      iStack_60 = aiStack_58[0];
      dVar8 = (double)SDL_ceil((double)(((float)aiStack_58[0] / fVar10) * fVar11));
      iStack_5c = (int)dVar8;
      iVar5 = (aiStack_48[0] - iStack_5c) / 2;
    }
    (*pglfn_glBindFramebufferEXT)(0x8ca8,iVar3);
    (*pglfn_glBindFramebufferEXT)(0x8ca9,0);
    (*pglfn_glBlitFramebufferEXT)(0,0,uVar1,uVar2,iVar6,iVar5,iStack_60,iStack_5c,0x4000,0x2601);
    (*pglfn_glBindFramebufferEXT)(0x8d40,0);
  }
  SDL_GL_SwapWindow(uVar4);
  iVar6 = gfxPresent__frametime + 0xb;
  do {
    iVar5 = SDL_GetTicks();
  } while (0 < iVar6 - iVar5);
  gfxPresent__frametime = iVar6;
  if (iVar3 != 0) {
    (*pglfn_glClearColor)(0,0,0);
    (*pglfn_glClear)(0x4000);
    (*pglfn_glBindFramebufferEXT)(0x8d40,iVar3);
  }
  return;
}

/* ======================================================================
 * TGraphics__BindRenderTarget  (Ghidra `BindRenderTarget` @ 00588df0)
 * Signature: uint8_t __thiscall BindRenderTarget(TGraphics * self, Texture * arg1)
 * Class: TGraphics
 * Calls: `gfxBindRenderTarget`, `gfxUnBindRenderTarget`
 * Called by: `GraphicsBenchmark`, `RenderLayer__Render`, `TileLevelLightMap__GenerateLightMap`
 */
/* TGraphics__BindRenderTarget(Texture*) */

void __thiscall TGraphics__BindRenderTarget(TGraphics *self,Texture *arg1)

{
  if (*(long *)(self + 0xaa8) != 0) {
    gfxUnBindRenderTarget(*(uint64_t *)(*(long *)(self + 0xaa8) + 0x18));
    *(uint64_t *)(self + 0xaa8) = 0;
  }
  gfxBindRenderTarget(*(uint64_t *)(arg1 + 0x18));
  *(Texture **)(self + 0xaa8) = arg1;
  return;
}

/* ======================================================================
 * TGraphics__UnBindRenderTarget  (Ghidra `UnBindRenderTarget` @ 00588e50)
 * Signature: uint8_t __thiscall UnBindRenderTarget(TGraphics * self)
 * Class: TGraphics
 * Calls: `gfxUnBindRenderTarget`
 * Called by: `GraphicsBenchmark`
 */
/* TGraphics__UnBindRenderTarget() */

void __thiscall TGraphics__UnBindRenderTarget(TGraphics *self)

{
  if (*(long *)(self + 0xaa8) != 0) {
    gfxUnBindRenderTarget(*(uint64_t *)(*(long *)(self + 0xaa8) + 0x18));
    *(uint64_t *)(self + 0xaa8) = 0;
  }
  return;
}

/* ======================================================================
 * TGraphics__RenderToBackBuffer  (Ghidra `RenderToBackBuffer` @ 00588e80)
 * Signature: uint8_t __thiscall RenderToBackBuffer(TGraphics * self)
 * Class: TGraphics
 * Calls: `gfxRenderToBackBuffer`, `gfxUnBindRenderTarget`
 * Called by: `GraphicsBenchmark`, `RenderSetupLayer__Render`, `TileLevelLightMap__GenerateLightMap`
 */
/* TGraphics__RenderToBackBuffer() */

void __thiscall TGraphics__RenderToBackBuffer(TGraphics *self)

{
  if (*(long *)(self + 0xaa8) != 0) {
    gfxUnBindRenderTarget(*(uint64_t *)(*(long *)(self + 0xaa8) + 0x18));
    *(uint64_t *)(self + 0xaa8) = 0;
  }
  gfxRenderToBackBuffer();
  return;
}

/* ======================================================================
 * TGraphics__SetCamera  (Ghidra `SetCamera` @ 00588eb0)
 * Signature: uint8_t __thiscall SetCamera(TGraphics * self, Camera * arg1)
 * Class: TGraphics
 * Calls: (none)
 * Called by: (none)
 */
/* TGraphics__SetCamera(Camera*) */

void __thiscall TGraphics__SetCamera(TGraphics *self,Camera *arg1)

{
  *(Camera **)(*(long *)(self + 0xaa0) + 0x3a0) = arg1;
  return;
}

/* ======================================================================
 * TGraphics__SetActiveGPUBlock  (Ghidra `SetActiveGPUBlock` @ 00588ec0)
 * Signature: uint8_t __thiscall SetActiveGPUBlock(TGraphics * self, GPUState * arg1)
 * Class: TGraphics
 * Calls: (none)
 * Called by: `Cursor3D__Cursor3D__00581c50`, `Cursor3D__Render`, `Model__Render`, `ReimplmentThisSprite__RenderSprite`
 */
/* TGraphics__SetActiveGPUBlock(TGraphics__GPUState) */

void __thiscall TGraphics__SetActiveGPUBlock(TGraphics *self,GPUState *arg1)

{
  if (arg1 != (GPUState *)0x0) {
    *(GPUState **)(self + 0xaa0) = arg1;
    return;
  }
  *(TGraphics **)(self + 0xaa0) = self + 0x6f8;
  return;
}

/* ======================================================================
 * TGraphics__SetMatrix  (Ghidra `SetMatrix` @ 00588ee0)
 * Signature: uint8_t __thiscall SetMatrix(TGraphics * self, tagMatrixType arg1, Matrix4x4 * arg2)
 * Class: TGraphics
 * Calls: `Matrix4x4__operator_assign`
 * Called by: `Camera__SetCameraMatricies`, `DrawBoundingShape`, `GSMBMenu__RenderLoadingScreen`, `SMBMessageRender`, `SMBMoveOn__MessageBoxRender`, `SMBUpsellMenu__MessageBoxRender`, `Sprite__Render`, `Sprite__RenderOnly`
 */
/* TGraphics__SetMatrix(tagMatrixType, Matrix4x4 const*) */

void __thiscall TGraphics__SetMatrix(TGraphics *self,int arg2,Matrix4x4 *arg3)

{
  if (arg3 == (Matrix4x4 *)0x0) {
    Matrix4x4__Identity((Matrix4x4 *)(self + (long)arg2 * 0x40));
  }
  else {
    Matrix4x4__operator_assign((Matrix4x4 *)(self + (long)arg2 * 0x40),arg3);
  }
  *(uint32_t *)(*(long *)(self + 0xaa0) + 0x398) = 1;
  return;
}

/* ======================================================================
 * TGraphics__GetMatrix  (Ghidra `GetMatrix` @ 00588f30)
 * Signature: uint8_t __thiscall GetMatrix(TGraphics * self, tagMatrixType arg1)
 * Class: TGraphics
 * Calls: (none)
 * Called by: `Camera__SetCameraMatricies`, `CommanderVideo__Render`, `DrawBoundingShape`, `FlashLibraryInstance__Render`, `FontEmitter__Render`, `GSMBCutSceneManager__Render`, `GSMBCutSceneManager__RenderLoadingOverlay`, `GSMBCutSceneManager__RenderSavingOverlay`, `GSMBMenu__RenderLoadingScreen`, `GScreenMargins__Render` (+30 more)
 */
/* TGraphics__GetMatrix(tagMatrixType) */

TGraphics * __thiscall TGraphics__GetMatrix(TGraphics *self,int arg2)

{
  *(uint32_t *)(*(long *)(self + 0xaa0) + 0x398) = 1;
  return self + (long)arg2 * 0x40;
}

/* ======================================================================
 * TGraphics__RecalculatePushCacheMatrix  (Ghidra `RecalculatePushCacheMatrix` @ 00588f50)
 * Signature: uint8_t __thiscall RecalculatePushCacheMatrix(TGraphics * self)
 * Class: TGraphics
 * Calls: `Matrix4x4__operator_assign`
 * Called by: (none)
 */
/* TGraphics__RecalculatePushCacheMatrix() */

void __thiscall TGraphics__RecalculatePushCacheMatrix(TGraphics *self)

{
  Matrix4x4 *this_00;
  long lVar1;
  int iVar2;
  
  this_00 = (Matrix4x4 *)(self + 0x40);
  Matrix4x4__operator_assign(this_00,(Matrix4x4 *)&matIdentity);
  iVar2 = *(int *)(self + 0x340) + -1;
  if (-1 < iVar2) {
    do {
      lVar1 = (long)iVar2;
      iVar2 = iVar2 + -1;
      Matrix4x4__Multiply(this_00,this_00,(Matrix4x4 *)(self + (lVar1 + 4) * 0x40));
    } while (iVar2 != -1);
  }
  return;
}

/* ======================================================================
 * TGraphics__PushMatrix  (Ghidra `PushMatrix` @ 00588fa0)
 * Signature: uint8_t __thiscall PushMatrix(TGraphics * self, tagMatrixType arg1)
 * Class: TGraphics
 * Calls: `Matrix4x4__operator_assign`
 * Called by: `FlashEditableTextField__Render`, `RenderSetPiece`, `Render__005719b0`, `Render__00571c10`, `Render__00576030`, `SMBEditor__Render`, `UIButton__Render`, `UIForm__Render`, `UILabel__Render`, `UIScrollBar__Render` (+1 more)
 */
/* TGraphics__PushMatrix(tagMatrixType) */

void __thiscall TGraphics__PushMatrix(TGraphics *self,int arg2)

{
  Matrix4x4 *this_00;
  long lVar1;
  int iVar2;
  
  this_00 = (Matrix4x4 *)(self + 0x40);
  iVar2 = *(int *)(self + 0x340);
  *(int *)(self + 0x340) = iVar2 + 1;
  Matrix4x4__operator_assign
            ((Matrix4x4 *)(self + ((long)iVar2 + 4) * 0x40),
             (Matrix4x4 *)(self + (long)arg2 * 0x40));
  Matrix4x4__operator_assign(this_00,(Matrix4x4 *)&matIdentity);
  iVar2 = *(int *)(self + 0x340) + -1;
  if (-1 < iVar2) {
    do {
      lVar1 = (long)iVar2;
      iVar2 = iVar2 + -1;
      Matrix4x4__Multiply(this_00,this_00,(Matrix4x4 *)(self + (lVar1 + 4) * 0x40));
    } while (iVar2 != -1);
  }
  return;
}

/* ======================================================================
 * TGraphics__PopMatrix  (Ghidra `PopMatrix` @ 00589020)
 * Signature: uint8_t __thiscall PopMatrix(TGraphics * self)
 * Class: TGraphics
 * Calls: `Matrix4x4__operator_assign`
 * Called by: `FlashEditableTextField__Render`, `RenderSetPiece`, `Render__005719b0`, `Render__00571c10`, `Render__00576030`, `SMBEditor__Render`, `UIButton__Render`, `UIForm__Render`, `UILabel__Render`, `UIScrollBar__Render` (+1 more)
 */
/* TGraphics__PopMatrix() */

void __thiscall TGraphics__PopMatrix(TGraphics *self)

{
  Matrix4x4 *this_00;
  long lVar1;
  int iVar2;
  
  this_00 = (Matrix4x4 *)(self + 0x40);
  iVar2 = 0;
  if (0 < *(int *)(self + 0x340)) {
    iVar2 = *(int *)(self + 0x340) + -1;
  }
  *(int *)(self + 0x340) = iVar2;
  Matrix4x4__operator_assign(this_00,(Matrix4x4 *)&matIdentity);
  iVar2 = *(int *)(self + 0x340) + -1;
  if (-1 < iVar2) {
    do {
      lVar1 = (long)iVar2;
      iVar2 = iVar2 + -1;
      Matrix4x4__Multiply(this_00,this_00,(Matrix4x4 *)(self + (lVar1 + 4) * 0x40));
    } while (iVar2 != -1);
  }
  return;
}

/* ======================================================================
 * TGraphics__ResetMatricies  (Ghidra `ResetMatricies` @ 00589090)
 * Signature: uint8_t __thiscall ResetMatricies(TGraphics * self)
 * Class: TGraphics
 * Calls: (none)
 * Called by: (none)
 */
/* TGraphics__ResetMatricies() */

void __thiscall TGraphics__ResetMatricies(TGraphics *self)

{
  *(uint32_t *)(*(long *)(self + 0xaa0) + 0x398) = 1;
  return;
}

/* ======================================================================
 * TGraphics__SetTexture  (Ghidra `SetTexture` @ 005890d0)
 * Signature: uint8_t __thiscall SetTexture(TGraphics * self, uchar arg1, Texture * arg2)
 * Class: TGraphics
 * Calls: (none)
 * Called by: `FontEmitter__Render`, `GraphicsBenchmark`, `IndexTexture__SetTexture`, `LightLayer__Render`, `SMBEditor__Render`, `SMBPalette__RenderSetPieceStream__004da800`, `SMBPalette__RenderTileStream__004daeb0`, `Sprite__Render`, `Sprite__SetupRender`, `TileTexture__SetTexture`
 */
/* TGraphics__SetTexture(unsigned char, Texture*) */

uint64_t __thiscall TGraphics__SetTexture(TGraphics *self,uchar arg1,Texture *arg2)

{
  *(Texture **)(*(long *)(self + 0xaa0) + 0x98) = arg2;
  if (arg2 != (Texture *)0x0) {
    *(uint32_t *)(arg2 + 0x20) = __frameCounter;
  }
  return 0;
}

/* ======================================================================
 * TGraphics__SetSamplerState  (Ghidra `SetSamplerState` @ 005890f0)
 * Signature: uint8_t __thiscall SetSamplerState(TGraphics * self, uchar arg1, uchar arg2, uint arg3)
 * Class: TGraphics
 * Calls: (none)
 * Called by: `FlashAnimationLibrary__SetSymbolTexture`, `FontEmitter__Render`, `GraphicsBenchmark`, `LightLayer__Render`, `RenderSetPiece`, `Render__00571c10`, `SMBPalette__RenderSetPieceStream__004da800`, `SMBPalette__RenderTileStream__004daeb0`, `TileLevelLayer__Render`
 */
/* TGraphics__SetSamplerState(unsigned char, unsigned char, unsigned int) */

void __thiscall TGraphics__SetSamplerState(TGraphics *self,uchar arg1,uchar arg2,uint arg3)

{
  *(uint *)(*(long *)(self + 0xaa0) + 4 + ((ulong)arg2 + 0x48 + (ulong)arg1 * 9) * 4) =
       arg3;
  return;
}

/* ======================================================================
 * TGraphics__SetRenderState  (Ghidra `SetRenderState` @ 00589110)
 * Signature: uint8_t __thiscall SetRenderState(TGraphics * self, uchar arg1, uint arg2)
 * Class: TGraphics
 * Calls: (none)
 * Called by: `AnimalLayer__Render`, `BossLayer__Render`, `CommanderVideo__Render`, `DrawBoundingShape`, `FlashLibraryInstance__Render`, `FontEmitter__Render`, `GSMBCutSceneManager__Render`, `GSMBCutSceneManager__RenderLoadingOverlay`, `GSMBCutSceneManager__RenderSavingOverlay`, `GSMBMenu__Render` (+31 more)
 */
/* TGraphics__SetRenderState(unsigned char, unsigned int) */

void __thiscall TGraphics__SetRenderState(TGraphics *self,uchar arg1,uint arg2)

{
  *(uint *)(*(long *)(self + 0xaa0) + 0xf0 + (ulong)arg1 * 4) = arg2;
  return;
}

/* ======================================================================
 * TGraphics__SetVertexBuffer  (Ghidra `SetVertexBuffer` @ 00589130)
 * Signature: uint8_t __thiscall SetVertexBuffer(TGraphics * self, uchar arg1, VertexBuffer * arg2)
 * Class: TGraphics
 * Calls: (none)
 * Called by: (none)
 */
/* TGraphics__SetVertexBuffer(unsigned char, VertexBuffer const*) */

void __thiscall TGraphics__SetVertexBuffer(TGraphics *self,uchar arg1,VertexBuffer *arg2)

{
  *(VertexBuffer **)(*(long *)(self + 0xaa0) + (ulong)arg1 * 8) = arg2;
  return;
}

/* ======================================================================
 * TGraphics__SetIndexBuffer  (Ghidra `SetIndexBuffer` @ 00589140)
 * Signature: uint8_t __thiscall SetIndexBuffer(TGraphics * self, IndexBuffer * arg1)
 * Class: TGraphics
 * Calls: (none)
 * Called by: (none)
 */
/* TGraphics__SetIndexBuffer(IndexBuffer const*) */

void __thiscall TGraphics__SetIndexBuffer(TGraphics *self,IndexBuffer *arg1)

{
  *(IndexBuffer **)(*(long *)(self + 0xaa0) + 0x80) = arg1;
  return;
}

/* ======================================================================
 * TGraphics__SetVertexDeclaration  (Ghidra `SetVertexDeclaration` @ 00589150)
 * Signature: uint8_t __thiscall SetVertexDeclaration(TGraphics * self, VertexDeclaration * arg1)
 * Class: TGraphics
 * Calls: (none)
 * Called by: (none)
 */
/* TGraphics__SetVertexDeclaration(VertexDeclaration const*) */

void __thiscall TGraphics__SetVertexDeclaration(TGraphics *self,VertexDeclaration *arg1)

{
  *(VertexDeclaration **)(*(long *)(self + 0xaa0) + 0xd8) = arg1;
  return;
}

/* ======================================================================
 * TGraphics__SetPixelColorConstant  (Ghidra `SetPixelColorConstant` @ 005891a0)
 * Signature: uint8_t __thiscall SetPixelColorConstant(TGraphics * self, tagColorConstantRegister arg1, ColorTemplate * arg2)
 * Class: TGraphics
 * Calls: `gfxSetColorConstant`
 * Called by: `AnimalLayer__Render`, `CommanderVideo__Render`, `DrawBoundingShape`, `FontEmitter__Render`, `GScreenMargins__Render`, `GraphicsBenchmark`, `LastLayer__Render`, `LevelRenderLayer__Render`, `RenderLayer__Render`, `RenderRating` (+15 more)
 */
/* TGraphics__SetPixelColorConstant(tagColorConstantRegister, ColorTemplate<float> const&) */

void __thiscall
TGraphics__SetPixelColorConstant(uint64_t arg1,uint32_t arg2,uint64_t arg3)

{
  gfxSetColorConstant(arg2,arg3);
  return;
}

/* ======================================================================
 * TGraphics__SetFogParameters  (Ghidra `SetFogParameters` @ 005891b0)
 * Signature: uint8_t __thiscall SetFogParameters(TGraphics * self, FogParams * arg1)
 * Class: TGraphics
 * Calls: `gfxSetFogParams`
 * Called by: `RenderSetPiece`
 */
/* TGraphics__SetFogParameters(FogParams const&) */

void __thiscall TGraphics__SetFogParameters(TGraphics *self,FogParams *arg1)

{
  gfxSetFogParams(arg1);
  return;
}

/* ======================================================================
 * TGraphics__SetPixelOutputParams  (Ghidra `SetPixelOutputParams` @ 005891c0)
 * Signature: uint8_t __thiscall SetPixelOutputParams(TGraphics * self, float arg1, float arg2, float arg3, float arg4)
 * Class: TGraphics
 * Calls: (none)
 * Called by: `AnimalLayer__Render`, `LevelRenderLayer__Render`, `RenderLayer__Render`, `RenderSetPiece`, `TileLevelLayer__Render`
 */
/* TGraphics__SetPixelOutputParams(float, float, float, float) */

void __thiscall
TGraphics__SetPixelOutputParams
          (TGraphics *self,float arg1,float arg2,float arg3,float arg4)

{
  *(float *)(*(long *)(self + 0xaa0) + 0x244) = arg1;
  *(float *)(*(long *)(self + 0xaa0) + 0x248) = arg2;
  *(float *)(*(long *)(self + 0xaa0) + 0x24c) = arg3;
  *(float *)(*(long *)(self + 0xaa0) + 0x250) = arg4;
  return;
}

/* ======================================================================
 * TGraphics__AddPixelStage  (Ghidra `AddPixelStage` @ 00589200)
 * Signature: uint8_t __thiscall AddPixelStage(TGraphics * self, tagColorChannelSource arg1, tagColorChannelSourceGen arg2, tagColorChannelSource arg3, tagColorChannelSourceGen arg4, tagColorChannelOp arg5, tagColorChannelOutput arg6, int arg7)
 * Class: TGraphics
 * Calls: (none)
 * Called by: `CommanderVideo__Render`, `DrawBoundingShape`, `FontEmitter__Render`, `GScreenMargins__Render`, `GraphicsBenchmark`, `LastLayer__Render`, `LightLayer__Render`, `RenderRating`, `RenderSetPiece`, `Render__00571c10` (+21 more)
 */
/* TGraphics__AddPixelStage(tagColorChannelSource, tagColorChannelSourceGen, tagColorChannelSource,
   tagColorChannelSourceGen, tagColorChannelOp, tagColorChannelOutput, int) */

void __thiscall
TGraphics__AddPixelStage
          (TGraphics *self,uint32_t arg2,uint32_t arg3,uint32_t arg4,
          uint32_t arg5,uint32_t arg6,uint32_t arg7,int arg8)

{
  long lVar1;
  
  if (arg8 == -1) {
    arg8 = *(int *)(*(long *)(self + 0xaa0) + 0x254);
    *(int *)(*(long *)(self + 0xaa0) + 0x254) = arg8 + 1;
  }
  lVar1 = (long)arg8 * 0x18;
  *(uint32_t *)(*(long *)(self + 0xaa0) + lVar1 + 0x268) = arg6;
  *(uint32_t *)(*(long *)(self + 0xaa0) + lVar1 + 600) = arg2;
  *(uint32_t *)(*(long *)(self + 0xaa0) + lVar1 + 0x260) = arg4;
  *(uint32_t *)(*(long *)(self + 0xaa0) + lVar1 + 0x25c) = arg3;
  *(uint32_t *)(*(long *)(self + 0xaa0) + lVar1 + 0x264) = arg5;
  *(uint32_t *)(lVar1 + *(long *)(self + 0xaa0) + 0x26c) = arg7;
  return;
}

/* ======================================================================
 * TGraphics__ResetPixelStages  (Ghidra `ResetPixelStages` @ 005892a0)
 * Signature: uint8_t __thiscall ResetPixelStages(TGraphics * self)
 * Class: TGraphics
 * Calls: (none)
 * Called by: `CommanderVideo__Render`, `DrawBoundingShape`, `FontEmitter__Render`, `GMeatHUD__Render`, `GSMBCutSceneManager__Render`, `GScreenMargins__Render`, `GraphicsBenchmark`, `LastLayer__Render`, `LightLayer__Render`, `RenderRating` (+26 more)
 */
/* TGraphics__ResetPixelStages() */

void __thiscall TGraphics__ResetPixelStages(TGraphics *self)

{
  *(uint32_t *)(*(long *)(self + 0xaa0) + 0x254) = 0;
  return;
}

/* ======================================================================
 * TGraphics__SetMasterPixelStage  (Ghidra `SetMasterPixelStage` @ 005892c0)
 * Signature: uint8_t __thiscall SetMasterPixelStage(TGraphics * self, tagColorChannelSource arg1, tagColorChannelSourceGen arg2, tagColorChannelSource arg3, tagColorChannelSourceGen arg4, tagColorChannelOp arg5)
 * Class: TGraphics
 * Calls: (none)
 * Called by: `AnimalLayer__Render`, `LevelRenderLayer__Render`, `RenderLayer__Render`, `TileLevelLayer__Render`
 */
/* TGraphics__SetMasterPixelStage(tagColorChannelSource, tagColorChannelSourceGen,
   tagColorChannelSource, tagColorChannelSourceGen, tagColorChannelOp) */

void __thiscall
TGraphics__SetMasterPixelStage
          (TGraphics *self,uint32_t arg2,uint32_t arg3,uint32_t arg4,
          uint32_t arg5,uint32_t arg6)

{
  *(uint32_t *)(*(long *)(self + 0xaa0) + 0x32c) = arg6;
  *(uint32_t *)(*(long *)(self + 0xaa0) + 0x31c) = arg2;
  *(uint32_t *)(*(long *)(self + 0xaa0) + 0x324) = arg4;
  *(uint32_t *)(*(long *)(self + 0xaa0) + 800) = arg3;
  *(uint32_t *)(*(long *)(self + 0xaa0) + 0x328) = arg5;
  *(uint32_t *)(*(long *)(self + 0xaa0) + 0x330) = 3;
  return;
}

/* ======================================================================
 * TGraphics__DeleteMasterPixelStage  (Ghidra `DeleteMasterPixelStage` @ 00589320)
 * Signature: uint8_t __thiscall DeleteMasterPixelStage(TGraphics * self)
 * Class: TGraphics
 * Calls: (none)
 * Called by: `AnimalLayer__Render`, `FontEmitter__Render`, `GScreenMargins__Render`, `GraphicsBenchmark`, `LevelRenderLayer__Render`, `LightLayer__Render`, `RenderLayer__Render`, `RenderSetupLayer__Render`, `TEngine__TEngine`, `TileLevelLayer__Render`
 */
/* TGraphics__DeleteMasterPixelStage() */

void __thiscall TGraphics__DeleteMasterPixelStage(TGraphics *self)

{
  *(uint32_t *)(*(long *)(self + 0xaa0) + 0x31c) = 0;
  *(uint32_t *)(*(long *)(self + 0xaa0) + 0x324) = 0;
  return;
}

/* ======================================================================
 * TGraphics__DisableMasterPixelStage  (Ghidra `DisableMasterPixelStage` @ 00589350)
 * Signature: uint8_t __thiscall DisableMasterPixelStage(TGraphics * self)
 * Class: TGraphics
 * Calls: (none)
 * Called by: `RenderSetPiece`
 */
/* TGraphics__DisableMasterPixelStage() */

void __thiscall TGraphics__DisableMasterPixelStage(TGraphics *self)

{
  *(uint32_t *)(*(long *)(self + 0xaa0) + 0x318) = 0;
  return;
}

/* ======================================================================
 * TGraphics__EnableMasterPixelStage  (Ghidra `EnableMasterPixelStage` @ 00589370)
 * Signature: uint8_t __thiscall EnableMasterPixelStage(TGraphics * self)
 * Class: TGraphics
 * Calls: (none)
 * Called by: `RenderSetPiece`
 */
/* TGraphics__EnableMasterPixelStage() */

void __thiscall TGraphics__EnableMasterPixelStage(TGraphics *self)

{
  *(uint32_t *)(*(long *)(self + 0xaa0) + 0x318) = 1;
  return;
}

/* ======================================================================
 * TGraphics__ResetTexCoordGen  (Ghidra `ResetTexCoordGen` @ 00589390)
 * Signature: uint8_t __thiscall ResetTexCoordGen(TGraphics * self)
 * Class: TGraphics
 * Calls: (none)
 * Called by: `CommanderVideo__Render`, `FontEmitter__Render`, `GMeatHUD__Render`, `GSMBCutSceneManager__Render`, `GScreenMargins__Render`, `GraphicsBenchmark`, `IndexTexture__SetTexture`, `LastLayer__Render`, `LightLayer__Render`, `RenderRating` (+21 more)
 */
/* TGraphics__ResetTexCoordGen() */

void __thiscall TGraphics__ResetTexCoordGen(TGraphics *self)

{
  *(uint32_t *)(*(long *)(self + 0xaa0) + 0x334) = 0;
  *(uint32_t *)(*(long *)(self + 0xaa0) + 0x33c) = 0;
  *(uint32_t *)(*(long *)(self + 0xaa0) + 0x348) = 0;
  *(uint32_t *)(*(long *)(self + 0xaa0) + 0x354) = 0;
  *(uint32_t *)(*(long *)(self + 0xaa0) + 0x360) = 0;
  *(uint32_t *)(*(long *)(self + 0xaa0) + 0x36c) = 0;
  *(uint32_t *)(*(long *)(self + 0xaa0) + 0x378) = 0;
  *(uint32_t *)(*(long *)(self + 0xaa0) + 900) = 0;
  *(uint32_t *)(*(long *)(self + 0xaa0) + 0x390) = 0;
  return;
}

/* ======================================================================
 * TGraphics__SetTextCoordMatrix  (Ghidra `SetTextCoordMatrix` @ 00589430)
 * Signature: uint8_t __thiscall SetTextCoordMatrix(TGraphics * self, tagTexCoordMatrix arg1, Matrix4x4 * arg2)
 * Class: TGraphics
 * Calls: `gfxSetTexCoordMatrix`
 * Called by: `IndexTexture__SetTexture`, `RenderSetPiece`, `TileTexture__SetTexture`
 */
/* TGraphics__SetTextCoordMatrix(tagTexCoordMatrix, Matrix4x4 const*) */

void __thiscall
TGraphics__SetTextCoordMatrix(uint64_t arg1,uint32_t arg2,uint64_t arg3)

{
  gfxSetTexCoordMatrix(arg2,arg3);
  return;
}

/* ======================================================================
 * TGraphics__AddTextureCoordGen  (Ghidra `AddTextureCoordGen` @ 00589440)
 * Signature: uint8_t __thiscall AddTextureCoordGen(TGraphics * self, tagTexCoordGenSource arg1, tagTexCoordGenFunc arg2, tagTexCoordGenParam arg3, int arg4)
 * Class: TGraphics
 * Calls: (none)
 * Called by: `IndexTexture__SetTexture`, `RenderSetPiece`, `TileTexture__SetTexture`
 */
/* TGraphics__AddTextureCoordGen(tagTexCoordGenSource, tagTexCoordGenFunc, tagTexCoordGenParam, int)
    */

void __thiscall
TGraphics__AddTextureCoordGen
          (TGraphics *self,uint32_t arg2,uint32_t arg3,uint32_t arg4,int arg5)

{
  long lVar1;
  long lVar2;
  
  if (arg5 == -1) {
    arg5 = *(int *)(*(long *)(self + 0xaa0) + 0x334);
    *(int *)(*(long *)(self + 0xaa0) + 0x334) = arg5 + 1;
    lVar2 = *(long *)(self + 0xaa0);
  }
  else {
    lVar2 = *(long *)(self + 0xaa0);
    if (*(int *)(lVar2 + 0x334) <= arg5) {
      *(int *)(lVar2 + 0x334) = arg5 + 1;
      lVar2 = *(long *)(self + 0xaa0);
    }
  }
  lVar1 = (long)arg5 * 0xc;
  *(uint32_t *)(lVar2 + 0x338 + lVar1) = arg2;
  *(uint32_t *)(*(long *)(self + 0xaa0) + lVar1 + 0x33c) = arg3;
  *(uint32_t *)(lVar1 + *(long *)(self + 0xaa0) + 0x340) = arg4;
  return;
}

/* ======================================================================
 * TGraphics__Draw  (Ghidra `Draw` @ 005894d0)
 * Signature: uint8_t __thiscall Draw(TGraphics * self, VertexStream * arg1, IndexBuffer * arg2)
 * Class: TGraphics
 * Calls: `AutoLockSection__AutoLockSection`, `AutoLockSection__AutoLockSection__005b59d0`, `gfxDraw`
 * Called by: `CommanderVideo__Render`, `DrawBoundingShape`, `FontEmitter__Render`, `GScreenMargins__Render`, `GraphicsBenchmark`, `LastLayer__Render`, `LightLayer__Render`, `Model__Render`, `RenderRating`, `RenderSetPiece` (+19 more)
 */
/* TGraphics__Draw(VertexStream*, IndexBuffer*) */

void __thiscall TGraphics__Draw(TGraphics *self,VertexStream *arg1,IndexBuffer *arg2)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  int unaff_R12D;
  uint32_t unaff_R13D;
  uint32_t unaff_R14D;
  uint32_t unaff_R15D;
  uint32_t local_50;
  uint32_t local_4c;
  AutoLockSection local_48 [24];
  
  AutoLockSection__AutoLockSection(local_48,(CriticalSection *)GFXDrawSection);
  if (arg1[0xc] == (VertexStream)0x0) {
    **(uint64_t **)(self + 0xaa0) = 0;
  }
  else {
    **(uint64_t **)(self + 0xaa0) = *(uint64_t *)(arg1 + 0x20);
  }
  if ((byte)arg1[0xc] < 2) {
    *(uint64_t *)(*(long *)(self + 0xaa0) + 8) = 0;
  }
  else {
    *(uint64_t *)(*(long *)(self + 0xaa0) + 8) = *(uint64_t *)(arg1 + 0x28);
  }
  if ((byte)arg1[0xc] < 3) {
    *(uint64_t *)(*(long *)(self + 0xaa0) + 0x10) = 0;
  }
  else {
    *(uint64_t *)(*(long *)(self + 0xaa0) + 0x10) = *(uint64_t *)(arg1 + 0x30);
  }
  if ((byte)arg1[0xc] < 4) {
    *(uint64_t *)(*(long *)(self + 0xaa0) + 0x18) = 0;
  }
  else {
    *(uint64_t *)(*(long *)(self + 0xaa0) + 0x18) = *(uint64_t *)(arg1 + 0x38);
  }
  if ((byte)arg1[0xc] < 5) {
    *(uint64_t *)(*(long *)(self + 0xaa0) + 0x20) = 0;
  }
  else {
    *(uint64_t *)(*(long *)(self + 0xaa0) + 0x20) = *(uint64_t *)(arg1 + 0x40);
  }
  if ((byte)arg1[0xc] < 6) {
    *(uint64_t *)(*(long *)(self + 0xaa0) + 0x28) = 0;
  }
  else {
    *(uint64_t *)(*(long *)(self + 0xaa0) + 0x28) = *(uint64_t *)(arg1 + 0x48);
  }
  if ((byte)arg1[0xc] < 7) {
    *(uint64_t *)(*(long *)(self + 0xaa0) + 0x30) = 0;
  }
  else {
    *(uint64_t *)(*(long *)(self + 0xaa0) + 0x30) = *(uint64_t *)(arg1 + 0x50);
  }
  if ((byte)arg1[0xc] < 8) {
    *(uint64_t *)(*(long *)(self + 0xaa0) + 0x38) = 0;
  }
  else {
    *(uint64_t *)(*(long *)(self + 0xaa0) + 0x38) = *(uint64_t *)(arg1 + 0x58);
  }
  if ((byte)arg1[0xc] < 9) {
    *(uint64_t *)(*(long *)(self + 0xaa0) + 0x40) = 0;
  }
  else {
    *(uint64_t *)(*(long *)(self + 0xaa0) + 0x40) = *(uint64_t *)(arg1 + 0x60);
  }
  if ((byte)arg1[0xc] < 10) {
    *(uint64_t *)(*(long *)(self + 0xaa0) + 0x48) = 0;
  }
  else {
    *(uint64_t *)(*(long *)(self + 0xaa0) + 0x48) = *(uint64_t *)(arg1 + 0x68);
  }
  if ((byte)arg1[0xc] < 0xb) {
    *(uint64_t *)(*(long *)(self + 0xaa0) + 0x50) = 0;
  }
  else {
    *(uint64_t *)(*(long *)(self + 0xaa0) + 0x50) = *(uint64_t *)(arg1 + 0x70);
  }
  if ((byte)arg1[0xc] < 0xc) {
    *(uint64_t *)(*(long *)(self + 0xaa0) + 0x58) = 0;
  }
  else {
    *(uint64_t *)(*(long *)(self + 0xaa0) + 0x58) = *(uint64_t *)(arg1 + 0x78);
  }
  if ((byte)arg1[0xc] < 0xd) {
    *(uint64_t *)(*(long *)(self + 0xaa0) + 0x60) = 0;
  }
  else {
    *(uint64_t *)(*(long *)(self + 0xaa0) + 0x60) = *(uint64_t *)(arg1 + 0x80);
  }
  if ((byte)arg1[0xc] < 0xe) {
    *(uint64_t *)(*(long *)(self + 0xaa0) + 0x68) = 0;
  }
  else {
    *(uint64_t *)(*(long *)(self + 0xaa0) + 0x68) = *(uint64_t *)(arg1 + 0x88);
  }
  if ((byte)arg1[0xc] < 0xf) {
    *(uint64_t *)(*(long *)(self + 0xaa0) + 0x70) = 0;
  }
  else {
    *(uint64_t *)(*(long *)(self + 0xaa0) + 0x70) = *(uint64_t *)(arg1 + 0x90);
  }
  if ((byte)arg1[0xc] < 0x10) {
    *(uint64_t *)(*(long *)(self + 0xaa0) + 0x78) = 0;
  }
  else {
    *(uint64_t *)(*(long *)(self + 0xaa0) + 0x78) = *(uint64_t *)(arg1 + 0x98);
  }
  *(VertexStream *)(*(long *)(self + 0xaa0) + 0xe0) = arg1[0xc];
  *(uint32_t *)(*(long *)(self + 0xaa0) + 0xec) = *(uint32_t *)(arg1 + 0x18);
  *(uint32_t *)(*(long *)(self + 0xaa0) + 0xe8) = *(uint32_t *)(arg1 + 0x14);
  *(uint32_t *)(*(long *)(self + 0xaa0) + 0xe4) = *(uint32_t *)(arg1 + 0x10);
  *(uint64_t *)(*(long *)(self + 0xaa0) + 0xd8) = *(uint64_t *)(arg1 + 0xa0);
  *(IndexBuffer **)(*(long *)(self + 0xaa0) + 0x80) = arg2;
  pGPUStateSet = self + 0x350;
  lVar4 = *(long *)(self + 0xaa0);
  pGPUStateDesired = lVar4;
  bVar2 = false;
  if (((*(int *)(lVar4 + 0x318) == 1) && (bVar2 = false, *(int *)(lVar4 + 0x31c) != 0)) &&
     (bVar2 = false, *(int *)(lVar4 + 0x324) != 0)) {
    iVar5 = *(int *)(lVar4 + 0x254);
    lVar1 = lVar4 + 0x250 + (long)(iVar5 + -1) * 0x18;
    unaff_R13D = *(uint32_t *)(lVar1 + 8);
    local_50 = *(uint32_t *)(lVar1 + 0x14);
    unaff_R12D = *(int *)(lVar1 + 0x1c);
    unaff_R14D = *(uint32_t *)(lVar1 + 0xc);
    unaff_R15D = *(uint32_t *)(lVar1 + 0x10);
    local_4c = *(uint32_t *)(lVar1 + 0x18);
    if (unaff_R12D == 3) {
      *(uint32_t *)(lVar1 + 0x1c) = 0;
      iVar5 = *(int *)(lVar4 + 0x254);
      lVar3 = *(long *)(self + 0xaa0);
    }
    else if (unaff_R12D == 1) {
      *(uint32_t *)(lVar1 + 0x1c) = 4;
      iVar5 = *(int *)(lVar4 + 0x254);
      lVar3 = *(long *)(self + 0xaa0);
    }
    else {
      lVar3 = lVar4;
      if (unaff_R12D == 2) {
        *(uint32_t *)(lVar1 + 0x1c) = 5;
        iVar5 = *(int *)(lVar4 + 0x254);
        lVar3 = *(long *)(self + 0xaa0);
      }
    }
    bVar2 = true;
    lVar1 = lVar3 + 0x250 + (long)iVar5 * 0x18;
    *(uint64_t *)(lVar1 + 8) = *(uint64_t *)(lVar3 + 0x31c);
    *(uint64_t *)(lVar1 + 0x10) = *(uint64_t *)(lVar3 + 0x324);
    *(uint64_t *)(lVar1 + 0x18) = *(uint64_t *)(lVar3 + 0x32c);
    *(int *)(lVar4 + 0x254) = *(int *)(lVar4 + 0x254) + 1;
    lVar4 = *(long *)(self + 0xaa0);
  }
  if (((*(char *)(lVar4 + 0xe0) != '\0') && (*(int *)(lVar4 + 0xe8) != 0)) &&
     (*(int *)(lVar4 + 0xe4) != 0)) {
                    /* try { // try from 0058994e to 00589952 has its CatchHandler @ 00589a79 */
    gfxDraw();
  }
  if (bVar2) {
    iVar5 = *(int *)(*(long *)(self + 0xaa0) + 0x254);
    *(int *)(*(long *)(self + 0xaa0) + 0x254) = iVar5 + -1;
    lVar4 = (long)(iVar5 + -2) * 0x18 + 0x250 + *(long *)(self + 0xaa0);
    *(uint32_t *)(lVar4 + 8) = unaff_R13D;
    *(uint32_t *)(lVar4 + 0xc) = unaff_R14D;
    *(uint32_t *)(lVar4 + 0x10) = unaff_R15D;
    *(uint32_t *)(lVar4 + 0x18) = local_4c;
    *(int *)(lVar4 + 0x1c) = unaff_R12D;
    *(uint32_t *)(lVar4 + 0x14) = local_50;
  }
  AutoLockSection__AutoLockSection__005b59d0(local_48);
  return;
}

/* ======================================================================
 * TGraphics__SetPerspectiveProjectionMode  (Ghidra `SetPerspectiveProjectionMode` @ 00589a90)
 * Signature: uint8_t __thiscall SetPerspectiveProjectionMode(TGraphics * self, int arg1)
 * Class: TGraphics
 * Calls: (none)
 * Called by: `Camera__SetCameraMatricies`, `GSMBMenu__RenderLoadingScreen`, `GScreenMargins__Render`, `GraphicsBenchmark`, `LightLayer__Render`, `SMBMessageRender`, `SMBMoveOn__MessageBoxRender`, `SMBUpsellMenu__MessageBoxRender`, `Sprite__Render`, `Sprite__RenderOnly` (+7 more)
 */
/* TGraphics__SetPerspectiveProjectionMode(int) */

void __thiscall TGraphics__SetPerspectiveProjectionMode(TGraphics *self,int arg1)

{
  *(int *)(*(long *)(self + 0xaa0) + 0x39c) = arg1;
  return;
}

/* ======================================================================
 * TGraphics__BeginScene  (Ghidra `BeginScene` @ 00589aa0)
 * Signature: uint8_t __stdcall BeginScene(void)
 * Class: TGraphics
 * Calls: (none)
 * Called by: `GraphicsBenchmark`, `TEngine__EngineRun`, `TEngine__Render`, `TEngine__TEngine`
 */
/* TGraphics__BeginScene() */

void TGraphics__BeginScene(void)

{
  return;
}

/* ======================================================================
 * TGraphics__EndScene  (Ghidra `EndScene` @ 00589ab0)
 * Signature: uint8_t __stdcall EndScene(void)
 * Class: TGraphics
 * Calls: (none)
 * Called by: `GraphicsBenchmark`, `TEngine__EngineRun`, `TEngine__Render`, `TEngine__TEngine`
 */
/* TGraphics__EndScene() */

void TGraphics__EndScene(void)

{
  return;
}

/* ======================================================================
 * TGraphics__UnbindAll  (Ghidra `UnbindAll` @ 00589ac0)
 * Signature: uint8_t __stdcall UnbindAll(void)
 * Class: TGraphics
 * Calls: `MOJOSHADER_glBindProgram`
 * Called by: (none)
 */
/* TGraphics__UnbindAll() */

void TGraphics__UnbindAll(void)

{
  (*pglfn_glActiveTexture)(0x84c7);
  (*pglfn_glBindTexture)(0xde1,0);
  (*pglfn_glActiveTexture)(0x84c6);
  (*pglfn_glBindTexture)(0xde1,0);
  (*pglfn_glActiveTexture)(0x84c5);
  (*pglfn_glBindTexture)(0xde1,0);
  (*pglfn_glActiveTexture)(0x84c4);
  (*pglfn_glBindTexture)(0xde1,0);
  (*pglfn_glActiveTexture)(0x84c3);
  (*pglfn_glBindTexture)(0xde1,0);
  (*pglfn_glActiveTexture)(0x84c2);
  (*pglfn_glBindTexture)(0xde1,0);
  (*pglfn_glActiveTexture)(0x84c1);
  (*pglfn_glBindTexture)(0xde1,0);
  (*pglfn_glActiveTexture)(0x84c0);
  (*pglfn_glBindTexture)(0xde1,0);
  MOJOSHADER_glBindProgram(0);
                    /* WARNING: Could not recover jumptable at 0x0056212d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pglfn_glBindBufferARB)(0x8893,0);
  return;
}

/* ======================================================================
 * TGraphics__ForceAspectRatio  (Ghidra `ForceAspectRatio` @ 00589ad0)
 * Signature: uint8_t __thiscall ForceAspectRatio(TGraphics * self, tagAspectRatioForce arg1)
 * Class: TGraphics
 * Calls: (none)
 * Called by: `GSMBCutSceneManager__Render`, `GSMBMenu__RenderLoadingScreen`, `GSuperMeatBoy__Initialize__00516f60`, `RenderSetupLayer__Render`, `TEngine__TEngine`, `TEngine__WaitForStartupLogos`, `TileLevelLightMap__GenerateLightMap`
 */
/* TGraphics__ForceAspectRatio(tagAspectRatioForce) */

void __thiscall TGraphics__ForceAspectRatio(TGraphics *self,uint32_t arg2)

{
  *(uint32_t *)(self + 0x348) = arg2;
  return;
}

/* ======================================================================
 * TGraphics__AutoSetViewport  (Ghidra `AutoSetViewport` @ 00589ae0)
 * Signature: uint8_t __stdcall AutoSetViewport(void)
 * Class: TGraphics
 * Calls: (none)
 * Called by: `GSMBCutSceneManager__Render`, `GSMBMenu__RenderLoadingScreen`, `RenderSetupLayer__Render`, `TileLevelLightMap__GenerateLightMap`
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGraphics__AutoSetViewport() */

void TGraphics__AutoSetViewport(void)

{
  ushort uVar1;
  ushort uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar1 = *(ushort *)(Window + 10);
  uVar4 = (ulong)uVar1;
  uVar2 = *(ushort *)(Window + 8);
  uVar3 = (ulong)uVar2;
  if (*(int *)(Graphics + 0x348) == 1) {
    uVar6 = 0;
    uVar4 = (long)((float)uVar2 * _DAT_005d5478 /* R:0.5625f */) & 0xffffffff;
    uVar5 = (uint)uVar1 - (int)(long)((float)uVar2 * _DAT_005d5478 /* R:0.5625f */) >> 1;
  }
  else {
    uVar6 = 0;
    uVar5 = 0;
    if (*(int *)(Graphics + 0x348) == 2) {
      uVar3 = (long)((float)uVar1 * DAT_005d547c /* R:1.3333333730697632f */) & 0xffffffff;
      uVar6 = (uint)uVar2 - (int)(long)((float)uVar1 * DAT_005d547c /* R:1.3333333730697632f */) >> 1;
    }
  }
  (*pglfn_glViewport)(uVar6,uVar5,uVar3,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00560f02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pglfn_glScissor)((uint)*(ushort *)(Window + 8) - (int)uVar3 >> 1,
                     (uint)*(ushort *)(Window + 10) - (int)uVar4 >> 1,uVar3,uVar4);
  return;
}
