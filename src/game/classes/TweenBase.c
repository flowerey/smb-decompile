/* src/game/classes/TweenBase.c — 18 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "TweenBase.h"

/* ======================================================================
 * TweenBase_ColorTemplate_float__IsTweening  (Ghidra `IsTweening` @ 004b58d0)
 * Signature: uint8_t __thiscall IsTweening(TweenBase<ColorTemplate<float>> * self)
 * Class: TweenBase<ColorTemplate<float>>
 * Calls: (none)
 * Called by: (none)
 */
/* TweenBase<ColorTemplate<float> >::IsTweening() */

uint32_t __thiscall TweenBase_ColorTemplate_float__IsTweening(TweenBase<ColorTemplate<float>> *self)

{
  return *(uint32_t *)(self + 0x4c);
}

/* ======================================================================
 * TweenBase_float__Reset  (Ghidra `Reset` @ 004b58e0)
 * Signature: uint8_t __thiscall Reset(TweenBase<float> * self, int arg1)
 * Class: TweenBase<float>
 * Calls: (none)
 * Called by: (none)
 */
/* TweenBase_float__Reset(int) */

void __thiscall TweenBase_float__Reset(TweenBase<float> *self, int arg1)

{
  float fVar1;

  *(uint32_t *)(self + 0x1c) = 0;
  fVar1 = 0.0;
  if (arg1 == 1) {
    **(uint32_t **)(self + 8) = *(uint32_t *)(self + 0x10);
    fVar1 = *(float *)(self + 0x1c);
  }
  *(uint32_t *)(self + 0x1c) = 0;
  *(uint32_t *)(self + 0x2c) = 0;
  *(uint32_t *)(self + 0x34) = 1;
  *(uint *)(self + 0x28) = (uint)(fVar1 < *(float *)(self + 0x24));
  return;
}

/* ======================================================================
 * TweenBase_float__Reverse  (Ghidra `Reverse` @ 004b5930)
 * Signature: uint8_t __thiscall Reverse(TweenBase<float> * self)
 * Class: TweenBase<float>
 * Calls: (none)
 * Called by: (none)
 */
/* TweenBase_float__Reverse() */

void __thiscall TweenBase_float__Reverse(TweenBase<float> *self)

{
  *(uint32_t *)(self + 0x1c) = 0;
  *(uint32_t *)(self + 0x34) = 1;
  *(uint *)(self + 0x2c) = (uint)(*(int *)(self + 0x2c) == 0);
  return;
}

/* ======================================================================
 * TweenBase_float__Pause  (Ghidra `Pause` @ 004b5950)
 * Signature: uint8_t __thiscall Pause(TweenBase<float> * self, int arg1)
 * Class: TweenBase<float>
 * Calls: (none)
 * Called by: (none)
 */
/* TweenBase_float__Pause(int) */

void __thiscall TweenBase_float__Pause(TweenBase<float> *self, int arg1)

{
  *(int *)(self + 0x30) = arg1;
  return;
}

/* ======================================================================
 * TweenBase_float__IsTweening  (Ghidra `IsTweening` @ 004b5960)
 * Signature: uint8_t __thiscall IsTweening(TweenBase<float> * self)
 * Class: TweenBase<float>
 * Calls: (none)
 * Called by: (none)
 */
/* TweenBase_float__IsTweening() */

uint32_t __thiscall TweenBase_float__IsTweening(TweenBase<float> *self)

{
  return *(uint32_t *)(self + 0x34);
}

/* ======================================================================
 * TweenBase_ColorTemplate_float__Reset  (Ghidra `Reset` @ 004b5970)
 * Signature: uint8_t __thiscall Reset(TweenBase<ColorTemplate<float>> * self, int arg1)
 * Class: TweenBase<ColorTemplate<float>>
 * Calls: (none)
 * Called by: (none)
 */
/* TweenBase<ColorTemplate<float> >::Reset(int) */

void __thiscall TweenBase_ColorTemplate_float__Reset(TweenBase<ColorTemplate<float>> *self,
                                                     int arg1)

{
  uint64_t *puVar1;
  float fVar2;

  *(uint32_t *)(self + 0x34) = 0;
  fVar2 = 0.0;
  if (arg1 == 1) {
    puVar1 = *(uint64_t **)(self + 8);
    *puVar1 = *(uint64_t *)(self + 0x10);
    puVar1[1] = *(uint64_t *)(self + 0x18);
    fVar2 = *(float *)(self + 0x34);
  }
  *(uint32_t *)(self + 0x34) = 0;
  *(uint32_t *)(self + 0x44) = 0;
  *(uint32_t *)(self + 0x4c) = 1;
  *(uint *)(self + 0x40) = (uint)(fVar2 < *(float *)(self + 0x3c));
  return;
}

/* ======================================================================
 * TweenBase_ColorTemplate_float__Reverse  (Ghidra `Reverse` @ 004b59c0)
 * Signature: uint8_t __thiscall Reverse(TweenBase<ColorTemplate<float>> * self)
 * Class: TweenBase<ColorTemplate<float>>
 * Calls: (none)
 * Called by: (none)
 */
/* TweenBase<ColorTemplate<float> >::Reverse() */

void __thiscall TweenBase_ColorTemplate_float__Reverse(TweenBase<ColorTemplate<float>> *self)

{
  *(uint32_t *)(self + 0x34) = 0;
  *(uint32_t *)(self + 0x4c) = 1;
  *(uint *)(self + 0x44) = (uint)(*(int *)(self + 0x44) == 0);
  return;
}

/* ======================================================================
 * TweenBase_ColorTemplate_float__Pause  (Ghidra `Pause` @ 004b59e0)
 * Signature: uint8_t __thiscall Pause(TweenBase<ColorTemplate<float>> * self, int arg1)
 * Class: TweenBase<ColorTemplate<float>>
 * Calls: (none)
 * Called by: (none)
 */
/* TweenBase<ColorTemplate<float> >::Pause(int) */

void __thiscall TweenBase_ColorTemplate_float__Pause(TweenBase<ColorTemplate<float>> *self,
                                                     int arg1)

{
  *(int *)(self + 0x48) = arg1;
  return;
}

/* ======================================================================
 * TweenBase_float__Calculate  (Ghidra `Calculate` @ 004b5cf0)
 * Signature: uint8_t __thiscall Calculate(TweenBase<float> * self, float arg1)
 * Class: TweenBase<float>
 * Calls: (none)
 * Called by: (none)
 */
/* TweenBase_float__Calculate(float) */

void __thiscall TweenBase_float__Calculate(TweenBase<float> *self, float arg1)

{
  float fVar1;
  double dVar2;

  fVar1 = DAT_005be894 /* R:1.0f */;
  if (*(int *)(self + 0x2c) != 0) {
    dVar2 = (double)__pow_finite((double)(arg1 / *(float *)(self + 0x20)),
                                 (double)*(float *)(self + 0x18));
    **(float **)(self + 8) = (DAT_005be894 /* R:1.0f */ - (float)dVar2) * *(float *)(self + 0x14) +
                             (float)dVar2 * *(float *)(self + 0x10);
    *(uint32_t *)(self + 0x34) = 1;
    return;
  }
  dVar2 = (double)__pow_finite((double)(arg1 / *(float *)(self + 0x20)),
                               (double)(DAT_005be894 /* R:1.0f */ / *(float *)(self + 0x18)));
  **(float **)(self + 8) =
      (fVar1 - (float)dVar2) * *(float *)(self + 0x10) + (float)dVar2 * *(float *)(self + 0x14);
  *(uint32_t *)(self + 0x34) = 1;
  return;
}

/* ======================================================================
 * TweenBase_ColorTemplate_float__Calculate  (Ghidra `Calculate` @ 004b5db0)
 * Signature: uint8_t __thiscall Calculate(TweenBase<ColorTemplate<float>> * self, float arg1)
 * Class: TweenBase<ColorTemplate<float>>
 * Calls: (none)
 * Called by: (none)
 */
/* TweenBase<ColorTemplate<float> >::Calculate(float) */

void __thiscall TweenBase_ColorTemplate_float__Calculate(TweenBase<ColorTemplate<float>> *self,
                                                         float arg1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint64_t *puVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  float fVar8;

  fVar8 = DAT_005be894 /* R:1.0f */;
  if (*(int *)(self + 0x44) == 0) {
    dVar7 = (double)__pow_finite((double)(arg1 / *(float *)(self + 0x38)),
                                 (double)(DAT_005be894 /* R:1.0f */ / *(float *)(self + 0x30)));
    puVar4 = *(uint64_t **)(self + 8);
    fVar5 = (float)dVar7;
    fVar1 = *(float *)(self + 0x28);
    fVar8 = fVar8 - fVar5;
    fVar2 = *(float *)(self + 0x2c);
    fVar3 = *(float *)(self + 0x18);
    fVar6 = *(float *)(self + 0x1c);
    *puVar4 = CONCAT44(*(float *)(self + 0x14) * fVar8 + *(float *)(self + 0x24) * fVar5,
                       *(float *)(self + 0x10) * fVar8 + *(float *)(self + 0x20) * fVar5);
    puVar4[1] = CONCAT44(fVar8 * fVar6 + fVar5 * fVar2, fVar3 * fVar8 + fVar1 * fVar5);
    *(uint32_t *)(self + 0x4c) = 1;
    return;
  }
  dVar7 = (double)__pow_finite((double)(arg1 / *(float *)(self + 0x38)),
                               (double)*(float *)(self + 0x30));
  puVar4 = *(uint64_t **)(self + 8);
  fVar6 = (float)dVar7;
  fVar8 = *(float *)(self + 0x18);
  fVar5 = DAT_005be894 /* R:1.0f */ - fVar6;
  fVar1 = *(float *)(self + 0x1c);
  fVar2 = *(float *)(self + 0x28);
  fVar3 = *(float *)(self + 0x2c);
  *puVar4 = CONCAT44(*(float *)(self + 0x24) * fVar5 + *(float *)(self + 0x14) * fVar6,
                     *(float *)(self + 0x20) * fVar5 + *(float *)(self + 0x10) * fVar6);
  puVar4[1] = CONCAT44(fVar5 * fVar3 + fVar6 * fVar1, fVar2 * fVar5 + fVar8 * fVar6);
  *(uint32_t *)(self + 0x4c) = 1;
  return;
}

/* ======================================================================
 * TweenBase_ColorTemplate_float__Update  (Ghidra `Update` @ 004b6100)
 * Signature: uint8_t __thiscall Update(TweenBase<ColorTemplate<float>> * self, float arg1)
 * Class: TweenBase<ColorTemplate<float>>
 * Calls: `Update`
 * Called by: (none)
 */
/* TweenBase<ColorTemplate<float> >::Update(float) */

void __thiscall TweenBase_ColorTemplate_float__Update(TweenBase<ColorTemplate<float>> *self,
                                                      float arg1)

{
  float fVar1;
  uint64_t *puVar2;
  TweenBase<ColorTemplate<float>> *pTVar3;

  if (*(int *)(self + 0x40) == 1) {
    if (*(int *)(self + 0x48) != 0) {
      return;
    }
    fVar1 = *(float *)(self + 0x34);
    *(float *)(self + 0x34) = fVar1 + arg1;
    if (fVar1 + arg1 < *(float *)(self + 0x3c)) {
      return;
    }
    *(uint32_t *)(self + 0x40) = 0;
    *(uint32_t *)(self + 0x34) = 0;
  } else if (*(int *)(self + 0x40) != 0) {
    return;
  }
  if (*(int *)(self + 0x48) == 0) {
    fVar1 = *(float *)(self + 0x34);
    *(float *)(self + 0x34) = arg1 + fVar1;
    if (arg1 + fVar1 < *(float *)(self + 0x38)) {
      /* WARNING: Could not recover jumptable at 0x004b618e. Too many branches */
      /* WARNING: Treating indirect jump as call */
      (*(code *)**(uint64_t **)self)();
      return;
    }
    puVar2 = *(uint64_t **)(self + 8);
    pTVar3 = self + 0x20;
    if (*(int *)(self + 0x44) != 0) {
      pTVar3 = self + 0x10;
    }
    *puVar2 = *(uint64_t *)pTVar3;
    puVar2[1] = *(uint64_t *)(pTVar3 + 8);
    *(uint32_t *)(self + 0x4c) = 0;
  }
  return;
}

/* ======================================================================
 * TweenBase_float__Update  (Ghidra `Update` @ 004b6190)
 * Signature: uint8_t __thiscall Update(TweenBase<float> * self, float arg1)
 * Class: TweenBase<float>
 * Calls: (none)
 * Called by: (none)
 */
/* TweenBase_float__Update(float) */

void __thiscall TweenBase_float__Update(TweenBase<float> *self, float arg1)

{
  float fVar1;
  uint32_t uVar2;

  if (*(int *)(self + 0x28) == 1) {
    if (*(int *)(self + 0x30) != 0) {
      return;
    }
    fVar1 = *(float *)(self + 0x1c);
    *(float *)(self + 0x1c) = fVar1 + arg1;
    if (fVar1 + arg1 < *(float *)(self + 0x24)) {
      return;
    }
    *(uint32_t *)(self + 0x28) = 0;
    *(uint32_t *)(self + 0x1c) = 0;
  } else if (*(int *)(self + 0x28) != 0) {
    return;
  }
  if (*(int *)(self + 0x30) == 0) {
    fVar1 = *(float *)(self + 0x1c);
    *(float *)(self + 0x1c) = arg1 + fVar1;
    if (arg1 + fVar1 < *(float *)(self + 0x20)) {
      /* WARNING: Could not recover jumptable at 0x004b620e. Too many branches */
      /* WARNING: Treating indirect jump as call */
      (*(code *)**(uint64_t **)self)();
      return;
    }
    if (*(int *)(self + 0x2c) == 0) {
      uVar2 = *(uint32_t *)(self + 0x14);
    } else {
      uVar2 = *(uint32_t *)(self + 0x10);
    }
    **(uint32_t **)(self + 8) = uVar2;
    *(uint32_t *)(self + 0x34) = 0;
  }
  return;
}

/* ======================================================================
 * TweenBase_FPUVector__Reset  (Ghidra `Reset` @ 004d9f60)
 * Signature: uint8_t __thiscall Reset(TweenBase<FPUVector> * self, int arg1)
 * Class: TweenBase<FPUVector>
 * Calls: (none)
 * Called by: (none)
 */
/* TweenBase_FPUVector__Reset(int) */

void __thiscall TweenBase_FPUVector__Reset(TweenBase<FPUVector> *self, int arg1)

{
  uint32_t *puVar1;
  float fVar2;

  *(uint32_t *)(self + 0x34) = 0;
  fVar2 = 0.0;
  if (arg1 == 1) {
    puVar1 = *(uint32_t **)(self + 8);
    *puVar1 = *(uint32_t *)(self + 0x10);
    puVar1[1] = *(uint32_t *)(self + 0x14);
    puVar1[2] = *(uint32_t *)(self + 0x18);
    puVar1[3] = *(uint32_t *)(self + 0x1c);
    fVar2 = *(float *)(self + 0x34);
  }
  *(uint32_t *)(self + 0x34) = 0;
  *(uint32_t *)(self + 0x44) = 0;
  *(uint32_t *)(self + 0x4c) = 1;
  *(uint *)(self + 0x40) = (uint)(fVar2 < *(float *)(self + 0x3c));
  return;
}

/* ======================================================================
 * TweenBase_FPUVector__IsTweening  (Ghidra `IsTweening` @ 004d9fc0)
 * Signature: uint8_t __thiscall IsTweening(TweenBase<FPUVector> * self)
 * Class: TweenBase<FPUVector>
 * Calls: (none)
 * Called by: (none)
 */
/* TweenBase_FPUVector__IsTweening() */

uint32_t __thiscall TweenBase_FPUVector__IsTweening(TweenBase<FPUVector> *self)

{
  return *(uint32_t *)(self + 0x4c);
}

/* ======================================================================
 * TweenBase_FPUVector__Reverse  (Ghidra `Reverse` @ 004d9fd0)
 * Signature: uint8_t __thiscall Reverse(TweenBase<FPUVector> * self)
 * Class: TweenBase<FPUVector>
 * Calls: (none)
 * Called by: (none)
 */
/* TweenBase_FPUVector__Reverse() */

void __thiscall TweenBase_FPUVector__Reverse(TweenBase<FPUVector> *self)

{
  *(uint32_t *)(self + 0x34) = 0;
  *(uint32_t *)(self + 0x4c) = 1;
  *(uint *)(self + 0x44) = (uint)(*(int *)(self + 0x44) == 0);
  return;
}

/* ======================================================================
 * TweenBase_FPUVector__Pause  (Ghidra `Pause` @ 004d9ff0)
 * Signature: uint8_t __thiscall Pause(TweenBase<FPUVector> * self, int arg1)
 * Class: TweenBase<FPUVector>
 * Calls: (none)
 * Called by: (none)
 */
/* TweenBase_FPUVector__Pause(int) */

void __thiscall TweenBase_FPUVector__Pause(TweenBase<FPUVector> *self, int arg1)

{
  *(int *)(self + 0x48) = arg1;
  return;
}

/* ======================================================================
 * TweenBase_FPUVector__Calculate  (Ghidra `Calculate` @ 004da080)
 * Signature: uint8_t __thiscall Calculate(TweenBase<FPUVector> * self, float arg1)
 * Class: TweenBase<FPUVector>
 * Calls: (none)
 * Called by: (none)
 */
/* TweenBase_FPUVector__Calculate(float) */

void __thiscall TweenBase_FPUVector__Calculate(TweenBase<FPUVector> *self, float arg1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint64_t *puVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  float fVar8;

  fVar8 = DAT_005be894 /* R:1.0f */;
  if (*(int *)(self + 0x44) == 0) {
    dVar7 = (double)__pow_finite((double)(arg1 / *(float *)(self + 0x38)),
                                 (double)(DAT_005be894 /* R:1.0f */ / *(float *)(self + 0x30)));
    puVar4 = *(uint64_t **)(self + 8);
    fVar1 = *(float *)(self + 0x1c);
    fVar5 = (float)dVar7;
    fVar2 = *(float *)(self + 0x2c);
    fVar3 = *(float *)(self + 0x18);
    fVar8 = fVar8 - fVar5;
    fVar6 = *(float *)(self + 0x28);
    *puVar4 = CONCAT44(*(float *)(self + 0x14) * fVar8 + *(float *)(self + 0x24) * fVar5,
                       fVar8 * *(float *)(self + 0x10) + fVar5 * *(float *)(self + 0x20));
    puVar4[1] = CONCAT44(fVar1 * fVar8 + fVar2 * fVar5, fVar3 * fVar8 + fVar6 * fVar5);
    *(uint32_t *)(self + 0x4c) = 1;
    return;
  }
  dVar7 = (double)__pow_finite((double)(arg1 / *(float *)(self + 0x38)),
                               (double)*(float *)(self + 0x30));
  puVar4 = *(uint64_t **)(self + 8);
  fVar8 = *(float *)(self + 0x2c);
  fVar6 = (float)dVar7;
  fVar1 = *(float *)(self + 0x1c);
  fVar2 = *(float *)(self + 0x28);
  fVar5 = DAT_005be894 /* R:1.0f */ - fVar6;
  fVar3 = *(float *)(self + 0x18);
  *puVar4 = CONCAT44(*(float *)(self + 0x24) * fVar5 + *(float *)(self + 0x14) * fVar6,
                     fVar5 * *(float *)(self + 0x20) + fVar6 * *(float *)(self + 0x10));
  puVar4[1] = CONCAT44(fVar8 * fVar5 + fVar1 * fVar6, fVar2 * fVar5 + fVar3 * fVar6);
  *(uint32_t *)(self + 0x4c) = 1;
  return;
}

/* ======================================================================
 * TweenBase_FPUVector__Update  (Ghidra `Update` @ 004da1e0)
 * Signature: uint8_t __thiscall Update(TweenBase<FPUVector> * self, float arg1)
 * Class: TweenBase<FPUVector>
 * Calls: (none)
 * Called by: (none)
 */
/* TweenBase_FPUVector__Update(float) */

void __thiscall TweenBase_FPUVector__Update(TweenBase<FPUVector> *self, float arg1)

{
  float fVar1;
  uint32_t *puVar2;
  TweenBase<FPUVector> *pTVar3;

  if (*(int *)(self + 0x40) == 1) {
    if (*(int *)(self + 0x48) != 0) {
      return;
    }
    fVar1 = *(float *)(self + 0x34);
    *(float *)(self + 0x34) = fVar1 + arg1;
    if (fVar1 + arg1 < *(float *)(self + 0x3c)) {
      return;
    }
    *(uint32_t *)(self + 0x40) = 0;
    *(uint32_t *)(self + 0x34) = 0;
  } else if (*(int *)(self + 0x40) != 0) {
    return;
  }
  if (*(int *)(self + 0x48) == 0) {
    fVar1 = *(float *)(self + 0x34);
    *(float *)(self + 0x34) = arg1 + fVar1;
    if (arg1 + fVar1 < *(float *)(self + 0x38)) {
      /* WARNING: Could not recover jumptable at 0x004da276. Too many branches */
      /* WARNING: Treating indirect jump as call */
      (*(code *)**(uint64_t **)self)();
      return;
    }
    pTVar3 = self + 0x20;
    if (*(int *)(self + 0x44) != 0) {
      pTVar3 = self + 0x10;
    }
    puVar2 = *(uint32_t **)(self + 8);
    *puVar2 = *(uint32_t *)pTVar3;
    puVar2[1] = *(uint32_t *)(pTVar3 + 4);
    puVar2[2] = *(uint32_t *)(pTVar3 + 8);
    puVar2[3] = *(uint32_t *)(pTVar3 + 0xc);
    *(uint32_t *)(self + 0x4c) = 0;
  }
  return;
}
