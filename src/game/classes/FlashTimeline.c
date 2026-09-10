/* src/game/classes/FlashTimeline.c — 4 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "FlashTimeline.h"

/* ======================================================================
 * FlashTimeline__FlashTimeline  (Ghidra `FlashTimeline` @ 00574ad0)
 * Signature: uint8_t __thiscall FlashTimeline(FlashTimeline * self)
 * Class: FlashTimeline
 * Calls: (none)
 * Called by: (none)
 */
/* FlashTimeline__FlashTimeline() */

void __thiscall FlashTimeline__FlashTimeline(FlashTimeline *self)

{
  *(uint32_t *)self = 0;
  *(uint32_t *)(self + 4) = 1;
  *(uint32_t *)(self + 8) = 0;
  *(uint32_t *)(self + 0xc) = 0;
  *(uint32_t *)(self + 0x10) = 0;
  *(uint32_t *)(self + 0x14) = 0;
  *(uint64_t *)(self + 0x18) = 0;
  return;
}

/* ======================================================================
 * FlashTimeline__FlashTimeline__00574b00  (Ghidra `~FlashTimeline` @ 00574b00)
 * Signature: uint8_t __thiscall ~FlashTimeline(FlashTimeline * self)
 * Class: FlashTimeline
 * Calls: (none)
 * Called by: (none)
 */
/* FlashTimeline__FlashTimeline__00574b00() */

void __thiscall FlashTimeline__FlashTimeline__00574b00(FlashTimeline *self)

{
  return;
}

/* ======================================================================
 * FlashTimeline__GetBounds  (Ghidra `GetBounds` @ 00574b10)
 * Signature: uint8_t __thiscall GetBounds(FlashTimeline * self, float arg1, Vector2 * arg2, Vector2 * arg3)
 * Class: FlashTimeline
 * Calls: `FlashLibraryInstance__GetBounds`
 * Called by: `FlashMovieClip__GetBounds`
 */
/* FlashTimeline__GetBounds(float, Vector2&, Vector2&) */

void __thiscall
FlashTimeline__GetBounds(FlashTimeline *self,float arg1,Vector2 *arg2,Vector2 *arg3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  float *pfVar5;
  int iVar6;
  FlashLibraryInstance *this_00;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_5c;
  long local_48;
  
  if ((*(int *)self == 1) && (fVar9 = *(float *)(self + 8), fVar9 <= arg1)) {
    fVar8 = arg1 / fVar9;
    fVar10 = fVar8;
    if ((float)((uint)fVar8 & DAT_005be880 /* R:u32=2147483647 */) < DAT_005dbd0c /* R:8388608.0f */) {
      fVar10 = (float)(int)fVar8 - (float)(DAT_005be894 /* R:1.0f */ & -(uint)(fVar8 < (float)(int)fVar8));
    }
    arg1 = (fVar8 - fVar10) * fVar9;
  }
  iVar6 = *(int *)(self + 0x14);
  if (0 < iVar6) {
    local_48 = 0;
    do {
      piVar4 = (int *)(local_48 * 0x10 + *(long *)(self + 0x18));
      iVar3 = *piVar4;
      if (0 < iVar3) {
        pfVar5 = *(float **)(piVar4 + 2);
        iVar2 = 0;
        fVar9 = 0.0;
        do {
          bVar1 = fVar9 <= arg1;
          fVar9 = *pfVar5 + fVar9;
          if ((bVar1) && (arg1 <= fVar9)) {
            if ((pfVar5 != (float *)0x0) && (0 < (int)pfVar5[6])) {
              lVar7 = 0;
              iVar6 = 0;
              do {
                local_5c = 0.0;
                if (pfVar5[2] == 1.4013e-45) {
                  local_5c = (arg1 - pfVar5[1]) / *pfVar5;
                }
                iVar6 = iVar6 + 1;
                this_00 = (FlashLibraryInstance *)(*(long *)(pfVar5 + 8) + lVar7);
                lVar7 = lVar7 + 0xa0;
                FlashLibraryInstance__GetBounds(this_00,arg1,arg2,arg3,local_5c);
              } while (iVar6 < (int)pfVar5[6]);
              iVar6 = *(int *)(self + 0x14);
            }
            break;
          }
          iVar2 = iVar2 + 1;
          pfVar5 = pfVar5 + 10;
        } while (iVar2 != iVar3);
      }
      iVar3 = (int)local_48 + 1;
      local_48 = local_48 + 1;
    } while (iVar3 < iVar6);
  }
  return;
}

/* ======================================================================
 * FlashTimeline__IsEntryTouchingBounds  (Ghidra `IsEntryTouchingBounds` @ 00574cd0)
 * Signature: uint8_t __thiscall IsEntryTouchingBounds(FlashTimeline * self, float arg1, Bounds * arg2, tagInstanceBoundsType arg3, Matrix4x4 * arg4)
 * Class: FlashTimeline
 * Calls: `FlashLibraryInstance__IsBoundsTouchingInstance__00574660`
 * Called by: `IsEntryTouchingBounds__00574ec0`
 */
/* FlashTimeline__IsEntryTouchingBounds(float, Bounds const*, tagInstanceBoundsType, Matrix4x4*) */

uint64_t __thiscall
FlashTimeline__IsEntryTouchingBounds
          (float arg1,FlashTimeline *self,Bounds *arg2,uint64_t arg4,Matrix4x4 *arg5)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  FlashLibraryInstance *this_00;
  float *pfVar5;
  long lVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  long local_40;
  
  fVar9 = arg1;
  if ((*(int *)self == 1) && (fVar8 = *(float *)(self + 8), fVar8 <= arg1)) {
    fVar10 = arg1 / fVar8;
    fVar9 = fVar10;
    if ((float)((uint)fVar10 & DAT_005be880 /* R:u32=2147483647 */) < DAT_005dbd0c /* R:8388608.0f */) {
      fVar9 = (float)(int)fVar10 - (float)(DAT_005be894 /* R:1.0f */ & -(uint)(fVar10 < (float)(int)fVar10));
    }
    fVar9 = (fVar10 - fVar9) * fVar8;
  }
  iVar7 = *(int *)(self + 0x14);
  if (iVar7 < 1) {
    return 0;
  }
  local_40 = 0;
LAB_00574d0b:
  piVar4 = (int *)(local_40 * 0x10 + *(long *)(self + 0x18));
  iVar3 = *piVar4;
  if (0 < iVar3) {
    pfVar5 = *(float **)(piVar4 + 2);
    fVar8 = 0.0;
    iVar2 = 0;
    do {
      bVar1 = fVar8 <= fVar9;
      fVar8 = *pfVar5 + fVar8;
      if ((bVar1) && (fVar9 <= fVar8)) {
        if ((pfVar5 != (float *)0x0) && (fVar8 = pfVar5[6], 0 < (int)fVar8)) {
          lVar6 = 0;
          iVar7 = 0;
          goto LAB_00574de0;
        }
        break;
      }
      iVar2 = iVar2 + 1;
      pfVar5 = pfVar5 + 10;
    } while (iVar2 != iVar3);
  }
  goto LAB_00574d52;
  while( true ) {
    fVar8 = 0.0;
    if (pfVar5[2] == 1.4013e-45) {
      fVar8 = (fVar9 - pfVar5[1]) / *pfVar5;
    }
    iVar3 = FlashLibraryInstance__IsBoundsTouchingInstance__00574660(this_00,arg2,arg1,arg5,fVar8);
    if (iVar3 == 1) {
      return 1;
    }
    fVar8 = pfVar5[6];
    iVar7 = iVar7 + 1;
    lVar6 = lVar6 + 0xa0;
    if ((int)fVar8 <= iVar7) break;
LAB_00574de0:
    this_00 = (FlashLibraryInstance *)(*(long *)(pfVar5 + 8) + lVar6);
    if ((*(int *)(this_00 + 0x84) == 0) &&
       (*(int *)(*(long *)(*(long *)(*(long *)(this_00 + 0x28) + 0x48) +
                          (ulong)*(ushort *)(this_00 + 0x20) * 8) + 0x10) != 1)) {
      iVar7 = iVar7 + 1;
      lVar6 = lVar6 + 0xa0;
      if ((int)fVar8 <= iVar7) break;
      goto LAB_00574de0;
    }
  }
  iVar7 = *(int *)(self + 0x14);
LAB_00574d52:
  iVar3 = (int)local_40 + 1;
  local_40 = local_40 + 1;
  if (iVar7 <= iVar3) {
    return 0;
  }
  goto LAB_00574d0b;
}
