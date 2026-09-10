/* src/game/classes/SmokeEmitter.c — 9 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "SmokeEmitter.h"

/* ======================================================================
 * SmokeEmitter__SmokeEmitter  (Ghidra `~SmokeEmitter` @ 00511b00)
 * Signature: uint8_t __thiscall ~SmokeEmitter(SmokeEmitter * self)
 * Class: SmokeEmitter
 * Calls: `SmokeEmitter__SmokeEmitter__00511b50`
 * Called by: (none)
 */
/* SmokeEmitter__SmokeEmitter__00511b50() */

void __thiscall SmokeEmitter__SmokeEmitter__00511b50(SmokeEmitter *self)

{
  *(uint8_t ***)self = &PTR__ParticleEmitter_005c12b0;
  return;
}

/* ======================================================================
 * SmokeEmitter__Reset  (Ghidra `Reset` @ 00511b10)
 * Signature: uint8_t __thiscall Reset(SmokeEmitter * self)
 * Class: SmokeEmitter
 * Calls: (none)
 * Called by: (none)
 */
/* SmokeEmitter__Reset() */

void __thiscall SmokeEmitter__Reset(SmokeEmitter *self)

{
  long lVar1;
  
  lVar1 = 0;
  do {
    *(uint32_t *)(self + lVar1 + 0x3c) = 0;
    lVar1 = lVar1 + 0x2c;
  } while (lVar1 != 0x1130);
  *(uint32_t *)(self + 0x1180) = *(uint32_t *)(self + 0x1168);
  return;
}

/* ======================================================================
 * SmokeEmitter__SmokeEmitter__00511b50  (Ghidra `~SmokeEmitter` @ 00511b50)
 * Signature: uint8_t __thiscall ~SmokeEmitter(SmokeEmitter * self)
 * Class: SmokeEmitter
 * Calls: `operator_delete`
 * Called by: `SmokeEmitter__SmokeEmitter`
 */
/* SmokeEmitter__SmokeEmitter__00511b50() */

void __thiscall SmokeEmitter__SmokeEmitter__00511b50(SmokeEmitter *self)

{
  *(uint8_t ***)self = &PTR__ParticleEmitter_005c12b0;
  operator_delete(self);
  return;
}

/* ======================================================================
 * SmokeEmitter__SmokeEmitter__00511b60  (Ghidra `SmokeEmitter` @ 00511b60)
 * Signature: uint8_t __thiscall SmokeEmitter(SmokeEmitter * self, SmokeEmitterCreate * arg1)
 * Class: SmokeEmitter
 * Calls: `Vector2__operator_assign`
 * Called by: `GLOBAL_sub_I_SmokeEmitter`, `SMBPalette__FindAnimatedObstacles`
 */
/* SmokeEmitter__SmokeEmitter__00511b60(SmokeEmitterCreate const*) */

void __thiscall SmokeEmitter__SmokeEmitter__00511b60(SmokeEmitter *self,SmokeEmitterCreate *arg1)

{
  SmokeEmitter *pSVar1;
  uint32_t uVar2;
  uint64_t uVar3;
  SmokeEmitter *pSVar4;
  
  pSVar1 = self + 0x14;
  *(uint64_t *)(self + 8) = 0;
  *(uint32_t *)(self + 0x10) = 1;
  *(uint8_t ***)self = &PTR__SmokeEmitter_005c8db0;
  pSVar4 = pSVar1;
  do {
    *(uint32_t *)pSVar4 = 0;
    *(uint32_t *)(pSVar4 + 4) = 0;
    *(uint32_t *)(pSVar4 + 8) = 0;
    *(uint32_t *)(pSVar4 + 0xc) = 0;
    *(uint32_t *)(self + (long)(pSVar4 + (0x24 - (long)pSVar1))) = 0;
    *(uint32_t *)(self + (long)(pSVar4 + (0x28 - (long)pSVar1))) = 0;
    *(uint32_t *)(pSVar4 + 0x18) = 0;
    *(uint32_t *)(pSVar4 + 0x1c) = 0;
    *(uint32_t *)(pSVar4 + 0x20) = 0;
    *(uint32_t *)(pSVar4 + 0x24) = 0;
    *(uint32_t *)(pSVar4 + 0x28) = 0;
    pSVar4 = pSVar4 + 0x2c;
  } while (pSVar4 != self + 0x1144);
  *(uint32_t *)(self + 0x1148) = 0;
  *(uint32_t *)(self + 0x114c) = 0;
  *(uint32_t *)(self + 0x1150) = 0;
  *(uint32_t *)(self + 0x1154) = 0;
  *(uint64_t *)(self + 0x1148) = *(uint64_t *)arg1;
  *(uint64_t *)(self + 0x1150) = *(uint64_t *)(arg1 + 8);
                    /* try { // try from 00511c3d to 00511c41 has its CatchHandler @ 00511c80 */
  Vector2__operator_assign((Vector2 *)(self + 0x1158),(Vector2 *)(arg1 + 0x10));
  *(uint32_t *)(self + 0x1160) = *(uint32_t *)(arg1 + 0x18);
  *(uint32_t *)(self + 0x1164) = *(uint32_t *)(arg1 + 0x1c);
  uVar2 = *(uint32_t *)(arg1 + 0x20);
  *(uint32_t *)(self + 0x1168) = uVar2;
  *(uint64_t *)(self + 0x1170) = *(uint64_t *)(arg1 + 0x28);
  uVar3 = *(uint64_t *)(arg1 + 0x30);
  *(uint32_t *)(self + 0x1180) = uVar2;
  *(uint64_t *)(self + 0x1178) = uVar3;
  return;
}

/* ======================================================================
 * SmokeEmitter__AddNewParticle  (Ghidra `AddNewParticle` @ 00511c90)
 * Signature: uint8_t __thiscall AddNewParticle(SmokeEmitter * self)
 * Class: SmokeEmitter
 * Calls: `GetRandomINT`
 * Called by: (none)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SmokeEmitter__AddNewParticle() */

void __thiscall SmokeEmitter__AddNewParticle(SmokeEmitter *self)

{
  float fVar1;
  long lVar2;
  int iVar3;
  uint32_t uVar4;
  SmokeEmitter *pSVar5;
  
  pSVar5 = self + 0x3c;
  iVar3 = 0;
  do {
    if (*(int *)(pSVar5 + -4) < *(int *)pSVar5) {
      pSVar5 = self + (long)iVar3 * 0x2c + 0x10;
      if (pSVar5 == (SmokeEmitter *)0xfffffffffffffffc) {
        return;
      }
      lVar2 = *(long *)(self + 0x1170);
      *(uint32_t *)(pSVar5 + 4) = *(uint32_t *)(lVar2 + 0x24);
      *(uint32_t *)(pSVar5 + 8) = *(uint32_t *)(lVar2 + 0x28);
      *(uint32_t *)(pSVar5 + 0xc) = *(uint32_t *)(lVar2 + 0x2c);
      *(uint32_t *)(pSVar5 + 0x10) = *(uint32_t *)(lVar2 + 0x30);
      fVar1 = *(float *)(self + 0x1158);
      iVar3 = GetRandomINT(0x4b,100);
      *(float *)(pSVar5 + 0x14) = fVar1 * DAT_005c07b0 /* R:0.009999999776482582f */ * (float)iVar3;
      fVar1 = *(float *)(self + 0x115c);
      iVar3 = GetRandomINT(0x4b,100);
      *(float *)(pSVar5 + 0x18) = fVar1 * DAT_005c07b0 /* R:0.009999999776482582f */ * (float)iVar3;
      uVar4 = GetRandomINT(*(uint32_t *)(self + 0x1164),*(uint32_t *)(self + 0x1160));
      *(uint32_t *)(pSVar5 + 0x28) = uVar4;
      *(uint32_t *)(pSVar5 + 0x2c) = 0;
      iVar3 = GetRandomINT(0,100);
      *(float *)(pSVar5 + 0x1c) = (float)iVar3 * _DAT_005c8de0 /* R:0.06283185631036758f */;
      iVar3 = GetRandomINT(0x4b,100);
      *(uint32_t *)(pSVar5 + 0x24) = 0;
      *(float *)(pSVar5 + 0x20) = (float)iVar3 * DAT_005c07b0 /* R:0.009999999776482582f */;
      return;
    }
    iVar3 = iVar3 + 1;
    pSVar5 = pSVar5 + 0x2c;
  } while (iVar3 != 100);
  return;
}

/* ======================================================================
 * SmokeEmitter__Update  (Ghidra `Update` @ 00511dd0)
 * Signature: uint8_t __thiscall Update(SmokeEmitter * self)
 * Class: SmokeEmitter
 * Calls: (none)
 * Called by: (none)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SmokeEmitter__Update() */

void __thiscall SmokeEmitter__Update(SmokeEmitter *self)

{
  double dVar1;
  SmokeEmitter *pSVar2;
  long lVar3;
  int iVar4;
  float fVar5;
  double dVar6;
  
  fVar5 = *(float *)(self + 0x1180) - fOneFrameTimeStep;
  *(float *)(self + 0x1180) = fVar5;
  if (fVar5 <= 0.0) {
    AddNewParticle(self);
    *(uint32_t *)(self + 0x1180) = *(uint32_t *)(self + 0x1168);
  }
  dVar1 = _DAT_005c8de8 /* R:89128.9609375f */;
  pSVar2 = self + 0x3c;
  iVar4 = 0;
  do {
    while (*(int *)(pSVar2 + -4) < *(int *)pSVar2) {
      iVar4 = iVar4 + 1;
      pSVar2 = pSVar2 + 0x2c;
      if (iVar4 == 100) {
        return;
      }
    }
    lVar3 = (long)iVar4;
    iVar4 = iVar4 + 1;
    pSVar2 = pSVar2 + 0x2c;
    lVar3 = lVar3 * 0x2c;
    fVar5 = fOneFrameTimeStep * *(float *)(self + lVar3 + 0x24);
    *(int *)(self + lVar3 + 0x3c) = *(int *)(self + lVar3 + 0x3c) + *(int *)(Engine + 4);
    *(float *)(self + lVar3 + 0x14) = fVar5 + *(float *)(self + lVar3 + 0x14);
    *(float *)(self + lVar3 + 0x18) =
         fOneFrameTimeStep * *(float *)(self + lVar3 + 0x28) + *(float *)(self + lVar3 + 0x18);
    dVar6 = (double)*(float *)(self + lVar3 + 0x34) + dVar1;
    if ((double)*(float *)(self + lVar3 + 0x30) <= (double)*(float *)(self + lVar3 + 0x34) + dVar1)
    {
      dVar6 = (double)*(float *)(self + lVar3 + 0x30);
    }
    *(float *)(self + lVar3 + 0x34) = (float)dVar6;
  } while (iVar4 != 100);
  return;
}

/* ======================================================================
 * SmokeEmitter__RenderSmokeParticle  (Ghidra `RenderSmokeParticle` @ 00511ed0)
 * Signature: uint8_t __thiscall RenderSmokeParticle(SmokeEmitter * self, SmokeParticle * arg1)
 * Class: SmokeEmitter
 * Calls: (none)
 * Called by: (none)
 */
/* SmokeEmitter__RenderSmokeParticle(SmokeEmitter__SmokeParticle) */

void __thiscall SmokeEmitter__RenderSmokeParticle(SmokeEmitter *self,SmokeParticle *arg1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  float fVar4;
  
  fVar4 = DAT_005be894 /* R:1.0f */;
  iVar1 = *(int *)(arg1 + 0x24);
  iVar2 = *(int *)(arg1 + 0x28);
  lVar3 = *(long *)(self + 0x1178);
  *(uint32_t *)(lVar3 + 0x30) = *(uint32_t *)arg1;
  *(uint32_t *)(lVar3 + 0x34) = *(uint32_t *)(arg1 + 4);
  *(uint32_t *)(lVar3 + 0x38) = *(uint32_t *)(arg1 + 8);
  *(uint32_t *)(lVar3 + 0x3c) = *(uint32_t *)(arg1 + 0xc);
  *(uint32_t *)(*(long *)(self + 0x1178) + 0x74) = *(uint32_t *)(self + 0x1148);
  fVar4 = fVar4 - (float)iVar2 / (float)iVar1;
  *(uint32_t *)(*(long *)(self + 0x1178) + 0x78) = *(uint32_t *)(self + 0x114c);
  if (fVar4 <= DAT_005bf760 /* R:0.0f */) {
    fVar4 = DAT_005bf760 /* R:0.0f */;
  }
  *(uint32_t *)(*(long *)(self + 0x1178) + 0x7c) = *(uint32_t *)(self + 0x1150);
  *(float *)(*(long *)(self + 0x1178) + 0x80) = fVar4;
  *(float *)(*(long *)(self + 0x1178) + 0x40) =
       *(float *)(arg1 + 0x20) * *(float *)(*(long *)(self + 0x1170) + 0x34);
  *(float *)(*(long *)(self + 0x1178) + 0x44) =
       *(float *)(arg1 + 0x20) * *(float *)(*(long *)(self + 0x1170) + 0x38);
  *(uint32_t *)(*(long *)(self + 0x1178) + 0x48) = *(uint32_t *)(arg1 + 0x18);
  *(uint32_t *)(*(long *)(self + 0x1178) + 0x4c) = *(uint32_t *)(arg1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00511fb1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(self + 0x1178) + 0x10))();
  return;
}

/* ======================================================================
 * SmokeEmitter__Render  (Ghidra `Render` @ 00511fc0)
 * Signature: uint8_t __thiscall Render(SmokeEmitter * self)
 * Class: SmokeEmitter
 * Calls: (none)
 * Called by: (none)
 */
/* SmokeEmitter__Render() */

void __thiscall SmokeEmitter__Render(SmokeEmitter *self)

{
  long lVar1;
  SmokeEmitter *pSVar2;
  int iVar3;
  
  iVar3 = 0;
  pSVar2 = self + 0x3c;
  do {
    while (*(int *)pSVar2 <= *(int *)(pSVar2 + -4)) {
      lVar1 = (long)iVar3;
      iVar3 = iVar3 + 1;
      pSVar2 = pSVar2 + 0x2c;
      RenderSmokeParticle(self,(SmokeParticle *)(self + lVar1 * 0x2c + 0x14));
      if (iVar3 == 100) {
        return;
      }
    }
    iVar3 = iVar3 + 1;
    pSVar2 = pSVar2 + 0x2c;
  } while (iVar3 != 100);
  return;
}

/* ======================================================================
 * SmokeEmitter__UpdateSmokeParticle  (Ghidra `UpdateSmokeParticle` @ 00512010)
 * Signature: uint8_t __thiscall UpdateSmokeParticle(SmokeEmitter * self, SmokeParticle * arg1)
 * Class: SmokeEmitter
 * Calls: (none)
 * Called by: (none)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SmokeEmitter__UpdateSmokeParticle(SmokeEmitter__SmokeParticle) */

void __thiscall SmokeEmitter__UpdateSmokeParticle(SmokeEmitter *self,SmokeParticle *arg1)

{
  float fVar1;
  double dVar2;
  
  fVar1 = fOneFrameTimeStep * *(float *)(arg1 + 0x10);
  *(int *)(arg1 + 0x28) = *(int *)(arg1 + 0x28) + *(int *)(Engine + 4);
  *(float *)arg1 = fVar1 + *(float *)arg1;
  *(float *)(arg1 + 4) = fOneFrameTimeStep * *(float *)(arg1 + 0x14) + *(float *)(arg1 + 4)
  ;
  dVar2 = (double)*(float *)(arg1 + 0x20) + _DAT_005c8de8 /* R:89128.9609375f */;
  if ((double)*(float *)(arg1 + 0x1c) <= (double)*(float *)(arg1 + 0x20) + _DAT_005c8de8 /* R:89128.9609375f */) {
    dVar2 = (double)*(float *)(arg1 + 0x1c);
  }
  *(float *)(arg1 + 0x20) = (float)dVar2;
  return;
}
