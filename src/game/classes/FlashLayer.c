/* src/game/classes/FlashLayer.c — 1 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "FlashLayer.h"

/* ======================================================================
 * FlashLayer__GetKeyFramesFromTime  (Ghidra `GetKeyFramesFromTime` @ 00574a50)
 * Signature: uint8_t __thiscall GetKeyFramesFromTime(FlashLayer * self, float arg1, FlashKeyFrame * * arg2, FlashKeyFrame * * arg3)
 * Class: FlashLayer
 * Calls: (none)
 * Called by: (none)
 */
/* FlashLayer__GetKeyFramesFromTime(float, FlashKeyFrame**, FlashKeyFrame**) */

float __thiscall
FlashLayer__GetKeyFramesFromTime
          (FlashLayer *self,float arg1,FlashKeyFrame **arg2,FlashKeyFrame **arg3)

{
  bool bVar1;
  long lVar2;
  FlashKeyFrame *pFVar3;
  float fVar4;
  
  fVar4 = DAT_005dbd08 /* R:10000000.0f */;
  if (0 < *(int *)self) {
    pFVar3 = *(FlashKeyFrame **)(self + 8);
    lVar2 = 0;
    fVar4 = 0.0;
    do {
      bVar1 = fVar4 <= arg1;
      fVar4 = *(float *)pFVar3 + fVar4;
      if ((bVar1) && (arg1 <= fVar4)) {
        *arg2 = pFVar3;
        if ((int)lVar2 + 1 < *(int *)self) {
          *arg3 = (FlashKeyFrame *)(*(long *)(self + 8) + (lVar2 * 5 + 5) * 8);
          return fVar4;
        }
        goto LAB_00574a94;
      }
      lVar2 = lVar2 + 1;
      pFVar3 = pFVar3 + 0x28;
    } while ((int)lVar2 < *(int *)self);
  }
  *arg2 = (FlashKeyFrame *)0x0;
LAB_00574a94:
  *arg3 = (FlashKeyFrame *)0x0;
  return fVar4;
}
