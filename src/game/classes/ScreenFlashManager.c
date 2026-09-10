/* src/game/classes/ScreenFlashManager.c — 5 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "ScreenFlashManager.h"

/* ======================================================================
 * ScreenFlashManager__ScreenFlashManager  (Ghidra `ScreenFlashManager` @ 00513ee0)
 * Signature: uint8_t __thiscall ScreenFlashManager(ScreenFlashManager * self)
 * Class: ScreenFlashManager
 * Calls: (none)
 * Called by: (none)
 */
/* ScreenFlashManager__ScreenFlashManager() */

void __thiscall ScreenFlashManager__ScreenFlashManager(ScreenFlashManager *self)

{
  *(uint32_t *)(self + 0x18) = 0;
  *(uint32_t *)self = 0;
  *(uint32_t *)(self + 4) = 0;
  *(uint64_t *)(self + 8) = ::cWhite;
  *(uint64_t *)(self + 0x10) = DAT_0081c7f8 /* R:2.2420775429197073e-44f */;
  return;
}

/* ======================================================================
 * ScreenFlashManager__Render  (Ghidra `Render` @ 00513f10)
 * Signature: uint8_t __thiscall Render(ScreenFlashManager * self)
 * Class: ScreenFlashManager
 * Calls: `Camera__SetCameraMatricies`, `Camera__SetOrthoProjection`, `TGraphics__AddPixelStage`, `TGraphics__Draw`, `TGraphics__GetMatrix`, `TGraphics__ResetPixelStages`, `TGraphics__ResetTexCoordGen`, `TGraphics__SetPixelColorConstant`, `TGraphics__SetRenderState`
 * Called by: (none)
 */
/* ScreenFlashManager__Render() */

uint64_t __thiscall ScreenFlashManager__Render(ScreenFlashManager *self)

{
  long lVar1;
  Matrix4x4 *pMVar2;
  Camera *this_00;
  float fVar3;
  float fVar4;

  if (*(int *)(self + 0x18) == 1) {
    if (*(float *)self <= 0.0) {
      fVar3 = *(float *)(self + 0x14) - fOneFrameTimeStep / *(float *)(self + 4);
      *(float *)(self + 0x14) = fVar3;
      if (fVar3 <= 0.0) {
        return 0;
      }
    } else {
      fVar3 = *(float *)self - fOneFrameTimeStep;
      *(uint32_t *)(self + 0x14) = 0x3f800000;
      *(float *)self = fVar3;
    }
    TGraphics__ResetTexCoordGen(Graphics);
    TGraphics__ResetPixelStages(Graphics);
    this_00 = *(Camera **)(SuperMeatBoy + 0x38);
    fVar4 = DAT_005c07a4 /* R:-1.0f */;
    fVar3 = DAT_005be894 /* R:1.0f */;
  } else {
    TGraphics__ResetTexCoordGen(Graphics);
    TGraphics__ResetPixelStages(Graphics);
    lVar1 = SuperMeatBoy;
    fVar4 = DAT_005c07a4 /* R:-1.0f */;
    fVar3 = DAT_005be894 /* R:1.0f */;
    if (DAT_005be894 /* R:1.0f */ <= *(float *)(self + 0x14)) {
      return 0;
    }
    *(float *)(self + 0x14) = fOneFrameTimeStep / *(float *)(self + 4) + *(float *)(self + 0x14);
    this_00 = *(Camera **)(lVar1 + 0x38);
  }
  Camera__SetOrthoProjection(this_00, fVar3, fVar4, fVar4, fVar3, fVar4, fVar3);
  Camera__SetCameraMatricies(*(Camera **)(SuperMeatBoy + 0x38), 2);
  pMVar2 = (Matrix4x4 *)TGraphics__GetMatrix(Graphics, 0);
  Matrix4x4__Identity(pMVar2);
  TGraphics__AddPixelStage(Graphics, 1, 0, 0, 0, 0, 1, 0xffffffff);
  TGraphics__SetPixelColorConstant(Graphics, 0, self + 8);
  TGraphics__SetRenderState(Graphics, '\a', 0);
  TGraphics__SetRenderState(Graphics, '\x05', 4);
  TGraphics__SetRenderState(Graphics, '\x06', 5);
  TGraphics__Draw(Graphics, CGR__pSingleQuadStream, (IndexBuffer *)0x0);
  return 1;
}

/* ======================================================================
 * ScreenFlashManager__SetFlash  (Ghidra `SetFlash` @ 00514100)
 * Signature: uint8_t __thiscall SetFlash(ScreenFlashManager * self, float arg1, float arg2, ColorTemplate * arg3)
 * Class: ScreenFlashManager
 * Calls: (none)
 * Called by: `FlyWrench__Reset`, `Machinarium__Reset`, `MeatBoyCharactor__Reset`, `Ogmo__Reset`, `Runman__Reset`
 */
/* ScreenFlashManager__SetFlash(float, float, ColorTemplate<float> const&) */

void __thiscall ScreenFlashManager__SetFlash(ScreenFlashManager *self, float arg1, float arg2,
                                             ColorTemplate *arg3)

{
  uint64_t uVar1;

  *(float *)self = arg1;
  *(float *)(self + 4) = arg2;
  *(uint64_t *)(self + 8) = *(uint64_t *)arg3;
  uVar1 = *(uint64_t *)(arg3 + 8);
  *(uint32_t *)(self + 0x18) = 1;
  *(uint64_t *)(self + 0x10) = uVar1;
  *(uint32_t *)(self + 0x14) = 0;
  return;
}

/* ======================================================================
 * ScreenFlashManager__SetFade  (Ghidra `SetFade` @ 00514130)
 * Signature: uint8_t __thiscall SetFade(ScreenFlashManager * self, float arg1, ColorTemplate * arg2)
 * Class: ScreenFlashManager
 * Calls: (none)
 * Called by: `ForestBoss__OnDeath`, `HellBoss__OnDeath`, `HospitalBoss__ChangeAction`, `RaptureBoss__OnDeath`
 */
/* ScreenFlashManager__SetFade(float, ColorTemplate<float> const&) */

void __thiscall ScreenFlashManager__SetFade(ScreenFlashManager *self, float arg1,
                                            ColorTemplate *arg2)

{
  uint64_t uVar1;

  *(float *)(self + 4) = arg1;
  *(uint64_t *)(self + 8) = *(uint64_t *)arg2;
  uVar1 = *(uint64_t *)(arg2 + 8);
  *(uint32_t *)(self + 0x18) = 0;
  *(uint64_t *)(self + 0x10) = uVar1;
  *(uint32_t *)(self + 0x14) = 0;
  return;
}

/* ======================================================================
 * ScreenFlashManager__ScreenFlashManager__00517a70  (Ghidra `~ScreenFlashManager` @ 00517a70)
 * Signature: uint8_t __thiscall ~ScreenFlashManager(ScreenFlashManager * self)
 * Class: ScreenFlashManager
 * Calls: (none)
 * Called by: `GLOBAL_sub_I_SMB_GLOBAL_INVINCIBLE`
 */
/* ScreenFlashManager__ScreenFlashManager__00517a70() */

void __thiscall ScreenFlashManager__ScreenFlashManager__00517a70(ScreenFlashManager *self)

{
  return;
}
