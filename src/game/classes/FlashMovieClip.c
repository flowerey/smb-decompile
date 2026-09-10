/* src/game/classes/FlashMovieClip.c — 6 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "FlashMovieClip.h"

/* ======================================================================
 * FlashMovieClip__FlashMovieClip  (Ghidra `~FlashMovieClip` @ 005713a0)
 * Signature: uint8_t __thiscall ~FlashMovieClip(FlashMovieClip * self)
 * Class: FlashMovieClip
 * Calls: `FlashMovieClip__FlashMovieClip__00571470`
 * Called by: (none)
 */
/* FlashMovieClip__FlashMovieClip__00571470() */

void __thiscall FlashMovieClip__FlashMovieClip__00571470(FlashMovieClip *self)

{
  *(uint8_t ***)self = &PTR__FlashLibraryEntry_005dbc90;
  return;
}

/* ======================================================================
 * FlashMovieClip__FlashMovieClip__00571470  (Ghidra `~FlashMovieClip` @ 00571470)
 * Signature: uint8_t __thiscall ~FlashMovieClip(FlashMovieClip * self)
 * Class: FlashMovieClip
 * Calls: `operator_delete`
 * Called by: `FlashMovieClip__FlashMovieClip`
 */
/* FlashMovieClip__FlashMovieClip__00571470() */

void __thiscall FlashMovieClip__FlashMovieClip__00571470(FlashMovieClip *self)

{
  *(uint8_t ***)self = &PTR__FlashLibraryEntry_005dbc90;
  operator_delete(self);
  return;
}

/* ======================================================================
 * FlashMovieClip__GetBounds  (Ghidra `GetBounds` @ 00574cc0)
 * Signature: uint8_t __thiscall GetBounds(FlashMovieClip * self, float arg1, Vector2 * arg2, Vector2 * arg3)
 * Class: FlashMovieClip
 * Calls: `FlashTimeline__GetBounds`
 * Called by: (none)
 */
/* FlashMovieClip__GetBounds(float, Vector2&, Vector2&) */

void __thiscall FlashMovieClip__GetBounds(FlashMovieClip *self, float arg1, Vector2 *arg2,
                                          Vector2 *arg3)

{
  FlashTimeline__GetBounds((FlashTimeline *)(self + 0x18), arg1, arg2, arg3);
  return;
}

/* ======================================================================
 * FlashMovieClip__FlashMovieClip__00574ed0  (Ghidra `FlashMovieClip` @ 00574ed0)
 * Signature: uint8_t __thiscall FlashMovieClip(FlashMovieClip * self)
 * Class: FlashMovieClip
 * Calls: (none)
 * Called by: (none)
 */
/* FlashMovieClip__FlashMovieClip__00574ed0() */

void __thiscall FlashMovieClip__FlashMovieClip__00574ed0(FlashMovieClip *self)

{
  *(uint8_t ***)self = &PTR__FlashMovieClip_005dbb90;
  *(uint32_t *)(self + 0x18) = 0;
  *(uint32_t *)(self + 0x1c) = 1;
  *(uint32_t *)(self + 0x20) = 0;
  *(uint32_t *)(self + 0x24) = 0;
  *(uint32_t *)(self + 0x28) = 0;
  *(uint32_t *)(self + 0x2c) = 0;
  *(uint64_t *)(self + 0x30) = 0;
  *(uint32_t *)(self + 0x10) = 1;
  return;
}

/* ======================================================================
 * FlashMovieClip__IsPlaying  (Ghidra `IsPlaying` @ 00574f10)
 * Signature: uint8_t __thiscall IsPlaying(FlashMovieClip * self)
 * Class: FlashMovieClip
 * Calls: (none)
 * Called by: (none)
 */
/* FlashMovieClip__IsPlaying() */

uint32_t __thiscall FlashMovieClip__IsPlaying(FlashMovieClip *self)

{
  return *(uint32_t *)(self + 0x1c);
}

/* ======================================================================
 * FlashMovieClip__FindInstance  (Ghidra `FindInstance` @ 00574f20)
 * Signature: uint8_t __thiscall FindInstance(FlashMovieClip * self, int arg1, int arg2, int * arg3, int arg4)
 * Class: FlashMovieClip
 * Calls: (none)
 * Called by: `AddEditorButton`, `AddPostLineRenderItem`, `DetermineMenuButtons`, `GMeatHUD__GMeatHUD__004800c0`, `GSMBMenu__GSMBMenu__004d8690`, `GSMBMenu__LoadChapterMenu`, `GSMBMenu__LoadCharacterMenu`, `LoadWorldMenu`, `SMBCharSwitch__Initialize`, `SMBLeaderBoardMenu__Initialize` (+7 more)
 */
/* FlashMovieClip__FindInstance(int, int, int*, int) */

long __thiscall FlashMovieClip__FindInstance(FlashMovieClip *self, int arg1, int arg2, int *arg3,
                                             int arg4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long lVar10;

  lVar4 = 0;
  iVar6 = arg2;
  if (0 < *(int *)(self + 0x2c)) {
    lVar10 = 0;
    do {
      iVar1 = *(int *)(*(long *)(self + 0x30) + lVar10);
      if (arg4 < iVar1) {
        lVar5 = 0;
        lVar9 = (long)arg4 * 0x28 + *(long *)(*(long *)(self + 0x30) + 8 + lVar10);
        do {
          iVar2 = *(int *)(lVar9 + 0x18 + lVar5);
          if (arg2 < iVar2) {
            lVar3 = *(long *)(lVar9 + 0x20 + lVar5);
            lVar4 = lVar3 + (long)arg2 * 0xa0;
            iVar8 = *(int *)(lVar4 + 0x20);
            if ((iVar6 <= arg2) && (iVar8 == arg1)) {
            LAB_00575045:
              iVar6 = iVar6 + 1;
              goto LAB_00575028;
            }
            lVar3 = lVar3 + ((long)arg2 * 5 + 5) * 0x20;
            iVar7 = arg2;
            while (true) {
              lVar4 = lVar3;
              iVar7 = iVar7 + 1;
              iVar6 = iVar6 + (uint)(iVar8 == arg1);
              if (iVar7 == iVar2)
                break;
              iVar8 = *(int *)(lVar4 + 0x20);
              lVar3 = lVar4 + 0xa0;
              if ((iVar6 <= arg2) && (iVar8 == arg1))
                goto LAB_00575045;
            }
          }
          lVar5 = lVar5 + 0x28;
        } while (lVar5 != ((ulong)(uint)(iVar1 + ~arg4) * 5 + 5) * 8);
      }
      lVar10 = lVar10 + 0x10;
    } while (lVar10 != ((ulong)(*(int *)(self + 0x2c) - 1) + 1) * 0x10);
    lVar4 = 0;
  }
LAB_00575028:
  if (arg3 != (int *)0x0) {
    *arg3 = iVar6;
  }
  return lVar4;
}
