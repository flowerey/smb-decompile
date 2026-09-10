/* src/vendor/audio.c — 45 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "audio.h"

/* ======================================================================
 * SMBLeaderBoardMenu__ToggleFilterSwitch  (Ghidra `ToggleFilterSwitch` @ 004c6000)
 * Signature: uint8_t __thiscall ToggleFilterSwitch(SMBLeaderBoardMenu * this)
 * Class: SMBLeaderBoardMenu
 * Calls: `FlashLibraryInstance__GotoAndStop`, `GetLocalizedText`
 * Called by: `SMBLeaderBoardSwitchFilter`
 */
/* SMBLeaderBoardMenu__ToggleFilterSwitch() */

void __thiscall SMBLeaderBoardMenu__ToggleFilterSwitch(SMBLeaderBoardMenu *this)

{
  uint uVar1;
  uint64_t uVar2;
  long lVar3;

  if (*(int *)(this + 0x440) == 0) {
    *(uint32_t *)(this + 0x440) = 1;
    uVar2 = GetLocalizedText(0x12);
    FlashTextField__SetText(*(wchar_t **)(this + 0x210), uVar2);
    uVar2 = GetLocalizedText(0x13);
    FlashTextField__SetText(*(wchar_t **)(this + 0x218), uVar2);
    *(uint32_t *)(this + 0x42c) = 0;
    *(SMBLeaderBoardMenu **)(this + 0x2a0) = this + 0x2d8;
    *(SMBLeaderBoardMenu **)(this + 0x298) = this + 0x3c0;
  } else if (*(int *)(this + 0x440) == 1) {
    *(uint32_t *)(this + 0x440) = 2;
    uVar2 = GetLocalizedText(0xd);
    FlashTextField__SetText(*(wchar_t **)(this + 0x210), uVar2);
    uVar2 = GetLocalizedText(0x12);
    FlashTextField__SetText(*(wchar_t **)(this + 0x218), uVar2);
    *(uint32_t *)(this + 0x42c) = 0;
    *(SMBLeaderBoardMenu **)(this + 0x2a0) = this + 0x2c0;
    *(SMBLeaderBoardMenu **)(this + 0x298) = this + 0x358;
  } else {
    *(uint32_t *)(this + 0x440) = 0;
    uVar2 = GetLocalizedText(9);
    FlashTextField__SetText(*(wchar_t **)(this + 0x210), uVar2);
    uVar2 = GetLocalizedText(0xd);
    FlashTextField__SetText(*(wchar_t **)(this + 0x218), uVar2);
    *(uint32_t *)(this + 0x42c) = 1;
    *(SMBLeaderBoardMenu **)(this + 0x2a0) = this + 0x2a8;
    *(SMBLeaderBoardMenu **)(this + 0x298) = this + 0x2f0;
  }
  ReadData(this);
  uVar1 = *(uint *)(this + 0x68);
  FlashLibraryInstance__GotoAndStop(
      *(FlashLibraryInstance **)(*(long *)(this + 0x58) + 0x20 + (ulong)uVar1 * 0x28), 2);
  lVar3 = (ulong)uVar1 * 0x28 + *(long *)(this + 0x58);
  *(uint32_t *)(*(long *)(lVar3 + 0x10) + 0x20) = *(uint32_t *)(lVar3 + 8);
  *(uint32_t *)(this + 0x430) = 0;
  *(uint32_t *)(this + 0x68) = 0;
  *(uint32_t *)(this + 0x434) = 0;
  FlashLibraryInstance__GotoAndStop(*(FlashLibraryInstance **)(*(long *)(this + 0x58) + 0x20), 1);
  *(uint32_t *)(*(long *)(*(uint32_t **)(this + 0x58) + 4) + 0x20) = **(uint32_t **)(this + 0x58);
  return;
}

/* ======================================================================
 * GSMBMenu__ToggleLightAndDark  (Ghidra `ToggleLightAndDark` @ 004d3d30)
 * Signature: uint8_t __thiscall ToggleLightAndDark(GSMBMenu * this)
 * Class: GSMBMenu
 * Calls: `GSMBCutSceneManager__PlayCutScene`, `SMBChapter__CrossFadeChapterMusic`, `SMBChapter__SetLevelType`, `SMBMenuEndMenuTransition`
 * Called by: `SMBMenuTransitionPart2`
 */
/* GSMBMenu__ToggleLightAndDark() */

void __thiscall GSMBMenu__ToggleLightAndDark(GSMBMenu *this)

{
  uint32_t local_58;
  uint32_t local_54;
  uint32_t local_50;
  uint64_t local_48;
  code *local_40;
  uint64_t local_38;
  uint64_t local_30;
  uint64_t local_28;
  uint32_t local_20;
  uint32_t local_1c;
  uint32_t local_18;

  *(uint *)(this + 0x420) = (uint)(*(int *)(this + 0x420) == 0);
  SetBossPadState(this);
  SMBChapter__SetLevelType((SMBChapter *)(SuperMeatBoy + 0x90), *(uint32_t *)(this + 0x420));
  SetLevelDisplay(this);
  SMBChapter__CrossFadeChapterMusic((SMBChapter *)(SuperMeatBoy + 0x90));
  local_48 = *(uint64_t *)(this + 0x608);
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 1;
  local_58 = 0x44200000;
  local_54 = 0x43f00000;
  local_50 = 1;
  local_40 = SMBMenuEndMenuTransition;
  local_18 = 0;
  GSMBCutSceneManager__PlayCutScene(SMBCutSceneManager, (SMBCutScene *)&local_58);
  return;
}

/* ======================================================================
 * SMBMenuLevelLightDarkToggle  (Ghidra `SMBMenuLevelLightDarkToggle` @ 004d3ed0)
 * Signature: uint8_t __stdcall SMBMenuLevelLightDarkToggle(tagButtonProps * arg1, void * arg2)
 * Calls: `GSMBMenu__LightDarkStartChange`
 * Called by: `GSMBMenu__RestoreControls`
 */
/* SMBMenuLevelLightDarkToggle(tagButtonProps const*, void*) */

void SMBMenuLevelLightDarkToggle(tagButtonProps *arg1, void *arg2)

{
  if ((bMenuTransitioning == 0) && (*(int *)arg1 == 1)) {
    if ((*(int *)(SMBMenu + 0xd04) != 8) &&
        ((*(int *)(SMBMenu + 0xd04) != 7 && (bRenderingUnlocks == 0)))) {
      GSMBMenu__LightDarkStartChange(SMBMenu);
      return;
    }
  }
  return;
}

/* ======================================================================
 * VVVVVV__ToggleGravity  (Ghidra `ToggleGravity` @ 00519770)
 * Signature: uint8_t __thiscall ToggleGravity(VVVVVV * this, int arg1)
 * Class: VVVVVV
 * Calls: `FlashLibraryInstance__Reset`
 * Called by: (none)
 */
/* VVVVVV__ToggleGravity(int) */

void __thiscall VVVVVV__ToggleGravity(VVVVVV *this, int arg1)

{
  uint uVar1;

  uVar1 = DAT_005be6f0 /* R:u32=2147483648 */;
  if (arg1 != 1) {
    *(uint32_t *)(this + 0x8c4) = *(uint32_t *)(this + 0xa94);
    *(uint32_t *)(this + 0x8b0) = *(uint32_t *)(this + 0xa98);
    *(uint32_t *)(this + 0x8b4) = *(uint32_t *)(this + 0xa9c);
    FlashLibraryInstance__Reset(*(FlashLibraryInstance **)(this + 0xaa8));
    return;
  }
  *(uint *)(this + 0x8c4) = *(uint *)(this + 0xa94) ^ DAT_005be6f0 /* R:u32=2147483648 */;
  *(uint *)(this + 0x8b0) = *(uint *)(this + 0xa98) ^ uVar1;
  *(uint *)(this + 0x8b4) = *(uint *)(this + 0xa9c) ^ uVar1;
  FlashLibraryInstance__Reset(*(FlashLibraryInstance **)(this + 0xaa0));
  return;
}

/* ======================================================================
 * vorbis_finish_frame  (Ghidra `vorbis_finish_frame` @ 005a7e30)
 * Signature: uint8_t __stdcall vorbis_finish_frame(stb_vorbis * arg1, int arg2, int arg3, int arg4)
 * Calls: (none)
 * Called by: `stb_vorbis_decode_frame_pushdata`, `stb_vorbis_get_frame_float_part_25`, `stb_vorbis_open_file_section`, `stb_vorbis_open_file_section_constprop_33`, `stb_vorbis_open_memory`, `stb_vorbis_open_memory_constprop_31`, `stb_vorbis_seek_start`, `vorbis_seek_frame_from_page`
 */
/* vorbis_finish_frame(stb_vorbis*, int, int, int) */

int vorbis_finish_frame(stb_vorbis *arg1, int arg2, int arg3, int arg4)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  float *pfVar7;
  long lVar8;
  float *pfVar9;
  int iVar10;
  int iVar11;
  int iVar12;

  iVar12 = *(int *)(arg1 + 0x4f0);
  if (iVar12 == 0) {
    iVar5 = *(int *)(arg1 + 4);
    iVar12 = 0;
  } else {
    if (iVar12 * 2 == *(int *)(arg1 + 0xa0)) {
      lVar8 = *(long *)(arg1 + 0x5b0);
    } else {
      lVar8 = 0;
      if (iVar12 * 2 == *(int *)(arg1 + 0xa4)) {
        lVar8 = *(long *)(arg1 + 0x5b8);
      }
    }
    iVar5 = *(int *)(arg1 + 4);
    iVar11 = 0;
    if (iVar5 < 1) {
      *(int *)(arg1 + 0x4f0) = arg2 - arg4;
      goto LAB_005a7f6a;
    }
    do {
      if (0 < iVar12) {
        lVar6 = 0;
        pfVar9 = (float *)(lVar8 + (long)(int)(iVar12 - 1U) * 4);
        do {
          pfVar7 = (float *)(lVar6 + (long)arg3 * 4 + *(long *)(arg1 + (long)iVar11 * 8 + 0x370));
          pfVar1 = (float *)(*(long *)(arg1 + (long)iVar11 * 8 + 0x470) + lVar6);
          fVar3 = *pfVar9;
          pfVar9 = pfVar9 + -1;
          pfVar2 = (float *)(lVar8 + lVar6);
          lVar6 = lVar6 + 4;
          *pfVar7 = *pfVar7 * *pfVar2 + *pfVar1 * fVar3;
        } while (lVar6 != (ulong)(iVar12 - 1U) * 4 + 4);
        iVar5 = *(int *)(arg1 + 4);
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < iVar5);
    iVar12 = *(int *)(arg1 + 0x4f0);
  }
  iVar11 = 0;
  *(int *)(arg1 + 0x4f0) = arg2 - arg4;
  if (0 < iVar5) {
    do {
      if (arg4 < arg2) {
        lVar8 = 0;
        iVar5 = arg4 + 1;
        iVar10 = arg4;
        do {
          iVar4 = iVar5;
          *(uint32_t *)(*(long *)(arg1 + (long)iVar11 * 8 + 0x470) + lVar8) =
              *(uint32_t *)(*(long *)(arg1 + (long)iVar11 * 8 + 0x370) + (long)iVar10 * 4);
          iVar5 = iVar4 + 1;
          lVar8 = lVar8 + 4;
          iVar10 = iVar4;
        } while (iVar5 != arg2 + 1);
        iVar5 = *(int *)(arg1 + 4);
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < iVar5);
  }
  if (iVar12 == 0) {
    return 0;
  }
LAB_005a7f6a:
  if (arg4 <= arg2) {
    arg2 = arg4;
  }
  *(int *)(arg1 + 0x704) = *(int *)(arg1 + 0x704) + (arg2 - arg3);
  return arg2 - arg3;
}

/* ======================================================================
 * vorbis_deinit  (Ghidra `vorbis_deinit` @ 005a8b10)
 * Signature: uint8_t __stdcall vorbis_deinit(stb_vorbis * arg1)
 * Calls: `fclose`, `free`
 * Called by: `stb_vorbis_close`, `stb_vorbis_decode_filename`, `stb_vorbis_decode_memory`, `stb_vorbis_open_file_section`, `stb_vorbis_open_file_section_constprop_33`, `stb_vorbis_open_memory`, `stb_vorbis_open_memory_constprop_31`, `stb_vorbis_open_pushdata`
 */
/* vorbis_deinit(stb_vorbis*) */

void vorbis_deinit(stb_vorbis *arg1)

{
  int iVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  stb_vorbis *psVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  long lVar9;

  lVar9 = 0;
  iVar8 = 0;
  lVar3 = *(long *)(arg1 + 0x78);
  if (0 < *(int *)(arg1 + 0x148)) {
    do {
      lVar7 = lVar9 + *(long *)(arg1 + 0x1d0);
      pvVar2 = *(void **)(lVar7 + 0x10);
      if (pvVar2 == (void *)0x0) {
      LAB_005a8ca1:
        if (lVar3 == 0) {
          free(*(void **)(lVar7 + 0x18));
          lVar3 = *(long *)(arg1 + 0x78);
        }
      } else {
        iVar6 = *(int *)((ulong) * (byte *)(lVar7 + 0xd) * 0x848 + *(long *)(arg1 + 0xb0) + 4);
        if (0 < iVar6) {
          lVar4 = 0;
          do {
            while (true) {
              iVar1 = (int)lVar4;
              if (lVar3 == 0)
                break;
              lVar4 = lVar4 + 1;
              if (iVar6 <= iVar1 + 1)
                goto LAB_005a8bb8;
            }
            free(*(void **)((long)pvVar2 + lVar4 * 8));
            pvVar2 = *(void **)(lVar7 + 0x10);
            lVar3 = *(long *)(arg1 + 0x78);
            iVar6 = *(int *)((ulong) * (byte *)(lVar7 + 0xd) * 0x848 + *(long *)(arg1 + 0xb0) + 4);
            lVar4 = lVar4 + 1;
          } while (iVar1 + 1 < iVar6);
        }
      LAB_005a8bb8:
        if (lVar3 == 0) {
          free(pvVar2);
          lVar3 = *(long *)(arg1 + 0x78);
          goto LAB_005a8ca1;
        }
      }
      iVar8 = iVar8 + 1;
      lVar9 = lVar9 + 0x20;
    } while (iVar8 < *(int *)(arg1 + 0x148));
  }
  pvVar2 = *(void **)(arg1 + 0xb0);
  if (pvVar2 == (void *)0x0) {
  LAB_005a8e01:
    if (lVar3 == 0) {
      free(*(void **)(arg1 + 0x140));
      lVar3 = *(long *)(arg1 + 0x78);
      if (lVar3 == 0) {
        free(*(void **)(arg1 + 0x1d0));
        lVar3 = *(long *)(arg1 + 0x78);
      }
    }
  } else {
    if (0 < *(int *)(arg1 + 0xa8)) {
      lVar9 = 0;
      iVar8 = 0;
      do {
        if (lVar3 == 0) {
          free(*(void **)((long)pvVar2 + lVar9 + 8));
          lVar3 = *(long *)(arg1 + 0x78);
          if (lVar3 == 0) {
            free(*(void **)((long)pvVar2 + lVar9 + 0x20));
            lVar3 = *(long *)(arg1 + 0x78);
            if (lVar3 == 0) {
              free(*(void **)((long)pvVar2 + lVar9 + 0x28));
              lVar3 = *(long *)(arg1 + 0x78);
              if (lVar3 == 0) {
                free(*(void **)((long)pvVar2 + lVar9 + 0x830));
                lVar3 = *(long *)(arg1 + 0x78);
              }
            }
          }
        }
        lVar7 = *(long *)((long)pvVar2 + lVar9 + 0x838);
        pvVar2 = (void *)(lVar7 + -4);
        if (lVar7 == 0) {
          pvVar2 = (void *)0x0;
        }
        if (lVar3 == 0) {
          free(pvVar2);
          lVar3 = *(long *)(arg1 + 0x78);
        }
        iVar8 = iVar8 + 1;
        lVar9 = lVar9 + 0x848;
        pvVar2 = *(void **)(arg1 + 0xb0);
      } while (iVar8 < *(int *)(arg1 + 0xa8));
    }
    if (lVar3 == 0) {
      free(pvVar2);
      lVar3 = *(long *)(arg1 + 0x78);
      goto LAB_005a8e01;
    }
  }
  iVar8 = *(int *)(arg1 + 0x1d8);
  lVar9 = 0;
  iVar6 = 0;
  pvVar2 = *(void **)(arg1 + 0x1e0);
  if (0 < iVar8) {
    do {
      while (lVar3 == 0) {
        free(*(void **)((long)pvVar2 + lVar9 + 8));
        iVar8 = *(int *)(arg1 + 0x1d8);
        iVar6 = iVar6 + 1;
        lVar9 = lVar9 + 0x30;
        pvVar2 = *(void **)(arg1 + 0x1e0);
        lVar3 = *(long *)(arg1 + 0x78);
        if (iVar8 <= iVar6)
          goto LAB_005a8d30;
      }
      iVar6 = iVar6 + 1;
      lVar9 = lVar9 + 0x30;
    } while (iVar6 < iVar8);
  }
LAB_005a8d30:
  if (lVar3 == 0) {
    free(pvVar2);
    lVar3 = *(long *)(arg1 + 0x78);
  }
  iVar8 = *(int *)(arg1 + 4);
  if (0 < iVar8) {
    iVar6 = 0;
    psVar5 = arg1;
    do {
      while (lVar3 == 0) {
        free(*(void **)(psVar5 + 0x370));
        lVar3 = *(long *)(arg1 + 0x78);
        if (lVar3 == 0) {
          free(*(void **)(psVar5 + 0x470));
          lVar3 = *(long *)(arg1 + 0x78);
          if (lVar3 == 0) {
            free(*(void **)(psVar5 + 0x4f8));
            lVar3 = *(long *)(arg1 + 0x78);
          }
        }
        iVar8 = *(int *)(arg1 + 4);
        iVar6 = iVar6 + 1;
        psVar5 = psVar5 + 8;
        if (iVar8 <= iVar6)
          goto LAB_005a8db0;
      }
      iVar6 = iVar6 + 1;
      psVar5 = psVar5 + 8;
    } while (iVar6 < iVar8);
  }
LAB_005a8db0:
  if (lVar3 == 0) {
    free(*(void **)(arg1 + 0x580));
    if (*(long *)(arg1 + 0x78) != 0)
      goto LAB_005a8dc0;
    free(*(void **)(arg1 + 0x590));
    if (*(long *)(arg1 + 0x78) != 0)
      goto LAB_005a8dc0;
    free(*(void **)(arg1 + 0x5a0));
    if (*(long *)(arg1 + 0x78) != 0)
      goto LAB_005a8dd2;
    free(*(void **)(arg1 + 0x5b0));
    lVar3 = *(long *)(arg1 + 0x78);
    pvVar2 = *(void **)(arg1 + 0x588);
  } else {
  LAB_005a8dc0:
    lVar3 = *(long *)(arg1 + 0x78);
    pvVar2 = *(void **)(arg1 + 0x588);
  }
  if (lVar3 == 0) {
    free(pvVar2);
    if (*(long *)(arg1 + 0x78) == 0) {
      free(*(void **)(arg1 + 0x598));
      if (*(long *)(arg1 + 0x78) == 0) {
        free(*(void **)(arg1 + 0x5a8));
        if (*(long *)(arg1 + 0x78) == 0) {
          free(*(void **)(arg1 + 0x5b8));
        }
      }
    }
  }
LAB_005a8dd2:
  if (*(int *)(arg1 + 0x24) == 0) {
    return;
  }
  fclose(*(FILE **)(arg1 + 0x18));
  return;
}

/* ======================================================================
 * vorbis_find_page  (Ghidra `vorbis_find_page` @ 005a9b90)
 * Signature: uint8_t __stdcall vorbis_find_page(stb_vorbis * arg1, uint * arg2, uint * arg3)
 * Calls: `fgetc`, `fseek`, `ftell`
 * Called by: `stb_vorbis_stream_length_in_samples_part_24`, `vorbis_seek_base`
 */
/* vorbis_find_page(stb_vorbis*, unsigned int*, unsigned int*) */

uint64_t vorbis_find_page(stb_vorbis *arg1, uint *arg2, uint *arg3)

{
  byte bVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  ulong __off;
  ulong uVar15;
  byte *pbVar16;
  int iVar17;
  bool bVar18;
  byte local_58[27];
  byte local_3d[13];

  iVar17 = *(int *)(arg1 + 0x90);
joined_r0x005a9bb4:
  if (iVar17 != 0) {
    return 0;
  }
  do {
    pbVar16 = *(byte **)(arg1 + 0x28);
    if (pbVar16 == (byte *)0x0) {
      uVar10 = fgetc(*(FILE **)(arg1 + 0x18));
      if (uVar10 == 0xffffffff) {
        *(uint32_t *)(arg1 + 0x90) = 1;
        goto LAB_005a9bea;
      }
    } else {
      if (*(byte **)(arg1 + 0x38) <= pbVar16)
        goto LAB_005a9c78;
      uVar10 = (uint)*pbVar16;
      *(byte **)(arg1 + 0x28) = pbVar16 + 1;
    }
    if ((char)uVar10 != 'O')
      goto LAB_005a9bea;
    uVar15 = 0;
    uVar10 = 0xffffffe7;
    if (arg1[0x44] == (stb_vorbis)0x0) {
      if (*(long *)(arg1 + 0x28) == 0) {
        lVar9 = ftell(*(FILE **)(arg1 + 0x18));
        uVar10 = (int)lVar9 - *(int *)(arg1 + 0x20);
        uVar15 = (ulong)uVar10;
        uVar10 = uVar10 - 0x19;
      } else {
        uVar10 = (int)*(long *)(arg1 + 0x28) - *(int *)(arg1 + 0x30);
        uVar15 = (ulong)uVar10;
        uVar10 = uVar10 - 0x19;
      }
    }
    if (*(uint *)(arg1 + 0x40) < uVar10) {
      return 0;
    }
    pbVar16 = *(byte **)(arg1 + 0x28);
    uVar10 = (uint)uVar15;
    if (pbVar16 == (byte *)0x0) {
      uVar8 = fgetc(*(FILE **)(arg1 + 0x18));
      if (uVar8 == 0xffffffff)
        goto LAB_005a9f40;
    LAB_005a9cda:
      if ((char)uVar8 == ogg_page_header[1])
        goto LAB_005a9ce6;
    LAB_005a9f58:
      iVar17 = *(int *)(arg1 + 0x90);
      cVar7 = '\x01';
    } else {
      if (pbVar16 < *(byte **)(arg1 + 0x38)) {
        uVar8 = (uint)*pbVar16;
        *(byte **)(arg1 + 0x28) = pbVar16 + 1;
        goto LAB_005a9cda;
      }
    LAB_005a9f40:
      bVar18 = ogg_page_header[1] != '\0';
      *(uint32_t *)(arg1 + 0x90) = 1;
      if (bVar18)
        goto LAB_005a9f58;
    LAB_005a9ce6:
      pbVar16 = *(byte **)(arg1 + 0x28);
      if (pbVar16 == (byte *)0x0) {
        uVar8 = fgetc(*(FILE **)(arg1 + 0x18));
        if (uVar8 == 0xffffffff)
          goto LAB_005a9f88;
      LAB_005a9d08:
        if ((char)uVar8 != ogg_page_header[2]) {
        LAB_005a9fa0:
          iVar17 = *(int *)(arg1 + 0x90);
          cVar7 = '\x02';
          goto LAB_005a9d4b;
        }
      } else {
        if (pbVar16 < *(byte **)(arg1 + 0x38)) {
          uVar8 = (uint)*pbVar16;
          *(byte **)(arg1 + 0x28) = pbVar16 + 1;
          goto LAB_005a9d08;
        }
      LAB_005a9f88:
        bVar18 = ogg_page_header[2] != '\0';
        *(uint32_t *)(arg1 + 0x90) = 1;
        if (bVar18)
          goto LAB_005a9fa0;
      }
      pbVar16 = *(byte **)(arg1 + 0x28);
      if (pbVar16 == (byte *)0x0) {
        uVar8 = fgetc(*(FILE **)(arg1 + 0x18));
        if (uVar8 == 0xffffffff)
          goto LAB_005a9fd0;
      LAB_005a9d36:
        cVar7 = (char)uVar8;
        iVar17 = *(int *)(arg1 + 0x90);
      } else {
        if (pbVar16 < *(byte **)(arg1 + 0x38)) {
          uVar8 = (uint)*pbVar16;
          *(byte **)(arg1 + 0x28) = pbVar16 + 1;
          goto LAB_005a9d36;
        }
      LAB_005a9fd0:
        *(uint32_t *)(arg1 + 0x90) = 1;
        iVar17 = 1;
        cVar7 = '\0';
      }
      cVar7 = (cVar7 == ogg_page_header[3]) + '\x03';
    }
  LAB_005a9d4b:
    if (iVar17 != 0) {
      return 0;
    }
    if (cVar7 == '\x04') {
      pbVar16 = local_58 + 4;
      local_58[0] = ogg_page_header[0];
      local_58[1] = ogg_page_header[1];
      local_58[2] = ogg_page_header[2];
      local_58[3] = ogg_page_header[3];
      do {
        while (pbVar2 = *(byte **)(arg1 + 0x28), pbVar2 == (byte *)0x0) {
          uVar8 = fgetc(*(FILE **)(arg1 + 0x18));
          if (uVar8 != 0xffffffff)
            goto LAB_005a9d9b;
          *(uint32_t *)(arg1 + 0x90) = 1;
        LAB_005a9dc6:
          *pbVar16 = 0;
          pbVar16 = pbVar16 + 1;
          if (pbVar16 == local_3d)
            goto LAB_005a9dd2;
        }
        if (*(byte **)(arg1 + 0x38) <= pbVar2) {
          *(uint32_t *)(arg1 + 0x90) = 1;
          goto LAB_005a9dc6;
        }
        uVar8 = (uint)*pbVar2;
        *(byte **)(arg1 + 0x28) = pbVar2 + 1;
      LAB_005a9d9b:
        *pbVar16 = (byte)uVar8;
        pbVar16 = pbVar16 + 1;
      } while (pbVar16 != local_3d);
    LAB_005a9dd2:
      bVar6 = local_58[0x19];
      bVar5 = local_58[0x18];
      bVar4 = local_58[0x17];
      bVar3 = local_58[0x16];
      if (*(int *)(arg1 + 0x90) != 0) {
        return 0;
      }
      if (local_58[4] == '\0') {
        uVar8 = 0;
        local_58[0x16] = 0;
        local_58[0x17] = 0;
        local_58[0x18] = 0;
        local_58[0x19] = 0;
        pbVar16 = local_58;
        do {
          bVar1 = *pbVar16;
          pbVar16 = pbVar16 + 1;
          uVar8 = (&crc_table)[(byte)((byte)(uVar8 >> 0x18) ^ bVar1)] ^ uVar8 << 8;
        } while (pbVar16 != local_3d);
        if (local_58[0x1a] != 0) {
          iVar17 = 0;
          uVar11 = 0;
          do {
            pbVar16 = *(byte **)(arg1 + 0x28);
            if (pbVar16 == (byte *)0x0) {
              uVar14 = fgetc(*(FILE **)(arg1 + 0x18));
              uVar13 = uVar14 & 0xff;
              if (uVar14 == 0xffffffff)
                goto LAB_005a9ebf;
            } else if (pbVar16 < *(byte **)(arg1 + 0x38)) {
              bVar1 = *pbVar16;
              *(byte **)(arg1 + 0x28) = pbVar16 + 1;
              uVar13 = (uint)bVar1;
            } else {
            LAB_005a9ebf:
              *(uint32_t *)(arg1 + 0x90) = 1;
              uVar13 = 0;
            }
            uVar11 = uVar11 + 1;
            iVar17 = iVar17 + uVar13;
            uVar8 = (&crc_table)[uVar8 >> 0x18 ^ uVar13] ^ uVar8 << 8;
          } while (uVar11 < local_58[0x1a]);
          if (iVar17 != 0) {
            if (*(int *)(arg1 + 0x90) != 0) {
              return 0;
            }
            iVar12 = 0;
            do {
              pbVar16 = *(byte **)(arg1 + 0x28);
              if (pbVar16 == (byte *)0x0) {
                uVar11 = fgetc(*(FILE **)(arg1 + 0x18));
                uVar14 = uVar11 & 0xff;
                if (uVar11 == 0xffffffff)
                  goto LAB_005aa052;
              } else if (pbVar16 < *(byte **)(arg1 + 0x38)) {
                bVar1 = *pbVar16;
                *(byte **)(arg1 + 0x28) = pbVar16 + 1;
                uVar14 = (uint)bVar1;
              } else {
              LAB_005aa052:
                *(uint32_t *)(arg1 + 0x90) = 1;
                uVar14 = 0;
              }
              iVar12 = iVar12 + 1;
              uVar8 = (&crc_table)[uVar8 >> 0x18 ^ uVar14] ^ uVar8 << 8;
            } while (iVar12 != iVar17);
          }
        }
        if (uVar8 ==
            (uint)bVar5 * 0x10000 + (uint)bVar3 + (uint)bVar4 * 0x100 + (uint)bVar6 * 0x1000000) {
          if (arg2 != (uint *)0x0) {
            uVar8 = 0;
            if (arg1[0x44] == (stb_vorbis)0x0) {
              if (*(long *)(arg1 + 0x28) == 0) {
                lVar9 = ftell(*(FILE **)(arg1 + 0x18));
                uVar8 = (int)lVar9 - *(int *)(arg1 + 0x20);
              } else {
                uVar8 = (int)*(long *)(arg1 + 0x28) - *(int *)(arg1 + 0x30);
              }
            }
            *arg2 = uVar8;
          }
          if (arg3 != (uint *)0x0) {
            *arg3 = (uint)((local_58[5] & 4) != 0);
          }
          if (arg1[0x44] != (stb_vorbis)0x0) {
            return 1;
          }
          uVar10 = uVar10 - 1;
          *(uint32_t *)(arg1 + 0x90) = 0;
          if (*(long *)(arg1 + 0x28) != 0) {
            if ((ulong)uVar10 + *(long *)(arg1 + 0x30) < *(ulong *)(arg1 + 0x38)) {
              *(ulong *)(arg1 + 0x28) = (ulong)uVar10 + *(long *)(arg1 + 0x30);
              return 1;
            }
            *(ulong *)(arg1 + 0x28) = *(ulong *)(arg1 + 0x38);
            *(uint32_t *)(arg1 + 0x90) = 1;
            return 1;
          }
          uVar15 = (ulong)(uVar10 + *(int *)(arg1 + 0x20));
          if (((int)uVar10 < 0) || (uVar10 + *(int *)(arg1 + 0x20) < uVar10)) {
            *(uint32_t *)(arg1 + 0x90) = 1;
            uVar15 = 0x7fffffff;
          }
          iVar17 = fseek(*(FILE **)(arg1 + 0x18), uVar15, 0);
          if (iVar17 != 0) {
            *(uint32_t *)(arg1 + 0x90) = 1;
            fseek(*(FILE **)(arg1 + 0x18), (ulong) * (uint *)(arg1 + 0x20), 2);
            return 1;
          }
          return 1;
        }
      }
    }
    if (arg1[0x44] != (stb_vorbis)0x0)
      goto LAB_005a9bea;
    *(uint32_t *)(arg1 + 0x90) = 0;
    if (*(long *)(arg1 + 0x28) == 0)
      break;
    if (*(ulong *)(arg1 + 0x38) <= uVar15 + *(long *)(arg1 + 0x30)) {
      *(ulong *)(arg1 + 0x28) = *(ulong *)(arg1 + 0x38);
    LAB_005a9c78:
      *(uint32_t *)(arg1 + 0x90) = 1;
      return 0;
    }
    *(ulong *)(arg1 + 0x28) = uVar15 + *(long *)(arg1 + 0x30);
  } while (true);
  __off = (ulong)(uVar10 + *(int *)(arg1 + 0x20));
  if ((uVar15 >> 0x1f != 0) || (uVar10 + *(int *)(arg1 + 0x20) < uVar10)) {
    *(uint32_t *)(arg1 + 0x90) = 1;
    __off = 0x7fffffff;
  }
  iVar17 = fseek(*(FILE **)(arg1 + 0x18), __off, 0);
  if (iVar17 != 0) {
    *(uint32_t *)(arg1 + 0x90) = 1;
    fseek(*(FILE **)(arg1 + 0x18), (ulong) * (uint *)(arg1 + 0x20), 2);
  }
LAB_005a9bea:
  iVar17 = *(int *)(arg1 + 0x90);
  goto joined_r0x005a9bb4;
}

/* ======================================================================
 * codebook_decode_scalar_raw  (Ghidra `codebook_decode_scalar_raw` @ 005aa6a0)
 * Signature: uint8_t __stdcall codebook_decode_scalar_raw(stb_vorbis * arg1, Codebook * arg2)
 * Calls: `fgetc`, `next_segment`
 * Called by: `codebook_decode_deinterleave_repeat`, `codebook_decode_start`, `vorbis_decode_packet_rest`
 */
/* codebook_decode_scalar_raw(stb_vorbis*, Codebook*) */

ulong codebook_decode_scalar_raw(stb_vorbis *arg1, Codebook *arg2)

{
  byte bVar1;
  byte *pbVar2;
  stb_vorbis sVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;

  if (*(int *)(arg1 + 0x6f0) < 0x19) {
    if (*(int *)(arg1 + 0x6f0) == 0) {
      *(uint32_t *)(arg1 + 0x6ec) = 0;
    }
    do {
      sVar3 = arg1[0x6dc];
      if (*(int *)(arg1 + 0x6e4) == 0) {
        if (sVar3 == (stb_vorbis)0x0) {
          iVar5 = next_segment(arg1);
          if (iVar5 == 0)
            break;
          sVar3 = arg1[0x6dc];
        }
      } else if (sVar3 == (stb_vorbis)0x0)
        break;
      pbVar2 = *(byte **)(arg1 + 0x28);
      *(int *)(arg1 + 0x6f4) = *(int *)(arg1 + 0x6f4) + 1;
      arg1[0x6dc] = (stb_vorbis)((char)sVar3 + -1);
      if (pbVar2 == (byte *)0x0) {
        uVar6 = fgetc(*(FILE **)(arg1 + 0x18));
        if (uVar6 == 0xffffffff)
          goto LAB_005aa7c0;
        iVar5 = *(int *)(arg1 + 0x6f0);
        iVar4 = (uVar6 & 0xff) << ((byte)iVar5 & 0x1f);
      } else if (pbVar2 < *(byte **)(arg1 + 0x38)) {
        bVar1 = *pbVar2;
        iVar5 = *(int *)(arg1 + 0x6f0);
        *(byte **)(arg1 + 0x28) = pbVar2 + 1;
        iVar4 = (uint)bVar1 << ((byte)iVar5 & 0x1f);
      } else {
      LAB_005aa7c0:
        *(uint32_t *)(arg1 + 0x90) = 1;
        iVar5 = *(int *)(arg1 + 0x6f0);
        iVar4 = 0;
      }
      *(int *)(arg1 + 0x6ec) = *(int *)(arg1 + 0x6ec) + iVar4;
      *(int *)(arg1 + 0x6f0) = iVar5 + 8;
    } while (iVar5 + 8 < 0x19);
  }
  iVar5 = *(int *)(arg2 + 4);
  if (iVar5 < 9) {
    bVar12 = *(long *)(arg2 + 0x28) == 0;
  } else {
    bVar12 = *(long *)(arg2 + 0x830) != 0;
  }
  if (bVar12) {
    uVar6 = *(uint *)(arg1 + 0x6ec);
    iVar5 = *(int *)(arg2 + 0x840);
    lVar9 = 0;
    uVar11 = (uVar6 & 0x55555555) * 2 | (uVar6 & 0xaaaaaaaa) >> 1;
    uVar11 = (uVar11 & 0x33333333) << 2 | (uVar11 & 0xcccccccc) >> 2;
    uVar11 = (uVar11 & 0xf0f0f0f) << 4 | (uVar11 & 0xf0f0f0f0) >> 4;
    uVar11 = (uVar11 & 0xff00ff) << 8 | (uVar11 & 0xff00ff00) >> 8;
    uVar7 = 0;
    if (1 < iVar5) {
      do {
        iVar8 = iVar5 >> 1;
        uVar10 = iVar8 + (int)uVar7;
        iVar4 = iVar5 - iVar8;
        iVar5 = iVar8;
        if (*(uint *)(*(long *)(arg2 + 0x830) + (long)(int)uVar10 * 4) <=
            (uVar11 >> 0x10 | uVar11 << 0x10)) {
          uVar7 = (ulong)uVar10;
          iVar5 = iVar4;
        }
      } while (1 < iVar5);
      lVar9 = (long)(int)uVar7;
    }
    if (arg2[0x1b] == (Codebook)0x0) {
      uVar11 = *(uint *)(*(long *)(arg2 + 0x838) + lVar9 * 4);
      uVar7 = (ulong)uVar11;
      lVar9 = (long)(int)uVar11;
    }
    bVar1 = *(byte *)(*(long *)(arg2 + 8) + lVar9);
    if ((int)(uint)bVar1 <= *(int *)(arg1 + 0x6f0)) {
      *(uint *)(arg1 + 0x6ec) = uVar6 >> (bVar1 & 0x1f);
      *(uint *)(arg1 + 0x6f0) = *(int *)(arg1 + 0x6f0) - (uint)bVar1;
      return uVar7;
    }
  } else {
    if (0 < iVar5) {
      uVar7 = 0;
      do {
        bVar1 = *(byte *)(*(long *)(arg2 + 8) + uVar7);
        if ((bVar1 != 0xff) && (*(uint *)(*(long *)(arg2 + 0x28) + uVar7 * 4) ==
                                ((1 << (bVar1 & 0x1f)) - 1U & *(uint *)(arg1 + 0x6ec)))) {
          if ((int)(uint)bVar1 <= *(int *)(arg1 + 0x6f0)) {
            *(uint *)(arg1 + 0x6ec) = *(uint *)(arg1 + 0x6ec) >> (bVar1 & 0x1f);
            *(uint *)(arg1 + 0x6f0) =
                *(int *)(arg1 + 0x6f0) - (uint) * (byte *)(*(long *)(arg2 + 8) + uVar7);
            return uVar7;
          }
          goto LAB_005aa7a1;
        }
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < iVar5);
    }
    *(uint32_t *)(arg1 + 0x94) = 0x15;
  }
LAB_005aa7a1:
  *(uint32_t *)(arg1 + 0x6f0) = 0;
  return 0xffffffff;
}

/* ======================================================================
 * codebook_decode_deinterleave_repeat  (Ghidra `codebook_decode_deinterleave_repeat` @ 005aa980)
 * Signature: uint8_t __stdcall codebook_decode_deinterleave_repeat(stb_vorbis * arg1, Codebook * arg2, float * * arg3, int arg4, int * arg5, int * arg6, int arg7, int arg8)
 * Calls: `codebook_decode_scalar_raw`, `fgetc`, `next_segment`
 * Called by: `vorbis_decode_packet_rest`
 */
/* codebook_decode_deinterleave_repeat(stb_vorbis*, Codebook*, float**, int, int*, int*, int, int)
    */

uint64_t codebook_decode_deinterleave_repeat(stb_vorbis *arg1, Codebook *arg2, float **arg3,
                                             int arg4, int *arg5, int *arg6, int arg7, int arg8)

{
  byte bVar1;
  byte *pbVar2;
  stb_vorbis sVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  float fVar13;

  iVar12 = *arg6;
  iVar7 = *(int *)arg2;
  iVar11 = *arg5;
  if (arg2[0x19] == (Codebook)0x0) {
  LAB_005aab10:
    *(uint32_t *)(arg1 + 0x94) = 0x15;
    return 0;
  }
  if (0 < arg8) {
    do {
      if (*(int *)(arg1 + 0x6f0) < 10) {
        if (*(int *)(arg1 + 0x6f0) == 0) {
          *(uint32_t *)(arg1 + 0x6ec) = 0;
        }
        do {
          sVar3 = arg1[0x6dc];
          if (*(int *)(arg1 + 0x6e4) == 0) {
            if (sVar3 == (stb_vorbis)0x0) {
              iVar4 = next_segment(arg1);
              if (iVar4 == 0)
                goto LAB_005aa9e7;
              sVar3 = arg1[0x6dc];
            }
          } else if (sVar3 == (stb_vorbis)0x0)
            goto LAB_005aa9e7;
          pbVar2 = *(byte **)(arg1 + 0x28);
          *(int *)(arg1 + 0x6f4) = *(int *)(arg1 + 0x6f4) + 1;
          arg1[0x6dc] = (stb_vorbis)((char)sVar3 + -1);
          if (pbVar2 == (byte *)0x0) {
            uVar9 = fgetc(*(FILE **)(arg1 + 0x18));
            if (uVar9 == 0xffffffff)
              goto LAB_005aac50;
            iVar4 = *(int *)(arg1 + 0x6f0);
            iVar8 = (uVar9 & 0xff) << ((byte)iVar4 & 0x1f);
          } else if (pbVar2 < *(byte **)(arg1 + 0x38)) {
            bVar1 = *pbVar2;
            iVar4 = *(int *)(arg1 + 0x6f0);
            *(byte **)(arg1 + 0x28) = pbVar2 + 1;
            iVar8 = (uint)bVar1 << ((byte)iVar4 & 0x1f);
          } else {
          LAB_005aac50:
            *(uint32_t *)(arg1 + 0x90) = 1;
            iVar4 = *(int *)(arg1 + 0x6f0);
            iVar8 = 0;
          }
          *(int *)(arg1 + 0x6f0) = iVar4 + 8;
          uVar9 = *(int *)(arg1 + 0x6ec) + iVar8;
          *(uint *)(arg1 + 0x6ec) = uVar9;
        } while (iVar4 + 8 < 0x19);
      } else {
      LAB_005aa9e7:
        uVar9 = *(uint *)(arg1 + 0x6ec);
      }
      iVar4 = (int)*(short *)(arg2 + (ulong)(uVar9 & 0x3ff) * 2 + 0x30);
      if (iVar4 < 0) {
        iVar4 = codebook_decode_scalar_raw(arg1, arg2);
        if (iVar4 < 0)
          goto LAB_005aaafa;
      } else {
        bVar1 = *(byte *)(*(long *)(arg2 + 8) + (long)iVar4);
        *(uint *)(arg1 + 0x6ec) = uVar9 >> (bVar1 & 0x1f);
        iVar8 = *(int *)(arg1 + 0x6f0) - (uint)bVar1;
        *(int *)(arg1 + 0x6f0) = iVar8;
        if (iVar8 < 0) {
          *(uint32_t *)(arg1 + 0x6f0) = 0;
        LAB_005aaafa:
          if ((arg1[0x6dc] == (stb_vorbis)0x0) && (*(int *)(arg1 + 0x6e4) != 0)) {
            return 0;
          }
          goto LAB_005aab10;
        }
      }
      if (arg7 * arg4 < iVar12 * arg4 + iVar11 + iVar7) {
        iVar7 = (arg7 - iVar12) * arg4 + iVar11;
      }
      iVar8 = *(int *)arg2;
      if (arg2[0x1a] == (Codebook)0x0) {
        if (0 < iVar7) {
          lVar5 = 0;
          lVar6 = (ulong)(iVar7 - 1) * 4 + 4;
          do {
            while (true) {
              lVar10 = (long)iVar11;
              iVar11 = iVar11 + 1;
              arg3[lVar10][iVar12] =
                  arg3[lVar10][iVar12] +
                  *(float *)(*(long *)(arg2 + 0x20) + lVar5 + (long)(iVar8 * iVar4) * 4);
              if (arg4 != iVar11)
                break;
              lVar5 = lVar5 + 4;
              iVar12 = iVar12 + 1;
              iVar11 = 0;
              if (lVar5 == lVar6)
                goto LAB_005aaac0;
            }
            lVar5 = lVar5 + 4;
          } while (lVar5 != lVar6);
        }
      } else if (0 < iVar7) {
        lVar6 = 0;
        fVar13 = 0.0;
        do {
          lVar5 = (long)iVar11;
          iVar11 = iVar11 + 1;
          fVar13 = fVar13 + *(float *)(*(long *)(arg2 + 0x20) + lVar6 + (long)(iVar8 * iVar4) * 4);
          arg3[lVar5][iVar12] = arg3[lVar5][iVar12] + fVar13;
          if (arg4 == iVar11) {
            iVar12 = iVar12 + 1;
            iVar11 = 0;
          }
          lVar6 = lVar6 + 4;
        } while (lVar6 != (ulong)(iVar7 - 1) * 4 + 4);
      }
    LAB_005aaac0:
      arg8 = arg8 - iVar7;
    } while (0 < arg8);
  }
  *arg5 = iVar11;
  *arg6 = iVar12;
  return 1;
}

/* ======================================================================
 * vorbis_decode_initial  (Ghidra `vorbis_decode_initial` @ 005aaf60)
 * Signature: uint8_t __stdcall vorbis_decode_initial(stb_vorbis * arg1, int * arg2, int * arg3, int * arg4, int * arg5, int * arg6)
 * Calls: `fgetc`, `get_bits`, `ilog`, `maybe_start_packet`, `next_segment`
 * Called by: `stb_vorbis_decode_frame_pushdata`, `stb_vorbis_get_frame_float_part_25`, `stb_vorbis_open_file_section`, `stb_vorbis_open_file_section_constprop_33`, `stb_vorbis_open_memory`, `stb_vorbis_open_memory_constprop_31`, `stb_vorbis_seek_start`, `vorbis_seek_frame_from_page`
 */
/* vorbis_decode_initial(stb_vorbis*, int*, int*, int*, int*, int*) */

uint64_t vorbis_decode_initial(stb_vorbis *arg1, int *arg2, int *arg3, int *arg4, int *arg5,
                               int *arg6)

{
  long lVar1;
  ulong uVar2;
  stb_vorbis sVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;

  *(uint32_t *)(arg1 + 0x760) = 0;
  *(uint32_t *)(arg1 + 0x75c) = 0;
  if (*(int *)(arg1 + 0x90) != 0) {
    return 0;
  }
LAB_005aafa4:
  iVar4 = maybe_start_packet(arg1);
  if (iVar4 == 0) {
    return 0;
  }
  iVar4 = get_bits(arg1, 1);
  if (iVar4 != 0) {
    if (arg1[0x44] != (stb_vorbis)0x0) {
      *(uint32_t *)(arg1 + 0x94) = 0x23;
      return 0;
    }
    sVar3 = arg1[0x6dc];
    do {
      if (sVar3 == (stb_vorbis)0x0) {
        if ((*(int *)(arg1 + 0x6e4) != 0) || (iVar4 = next_segment(arg1), iVar4 == 0))
          goto LAB_005ab040;
        sVar3 = arg1[0x6dc];
      }
      uVar2 = *(ulong *)(arg1 + 0x28);
      sVar3 = (stb_vorbis)((char)sVar3 + -1);
      *(int *)(arg1 + 0x6f4) = *(int *)(arg1 + 0x6f4) + 1;
      arg1[0x6dc] = sVar3;
      if (uVar2 == 0) {
        iVar4 = fgetc(*(FILE **)(arg1 + 0x18));
        if (iVar4 == -1) {
          *(uint32_t *)(arg1 + 0x90) = 1;
        }
        sVar3 = arg1[0x6dc];
      } else if (uVar2 < *(ulong *)(arg1 + 0x38)) {
        *(ulong *)(arg1 + 0x28) = uVar2 + 1;
      } else {
        *(uint32_t *)(arg1 + 0x90) = 1;
      }
      *(uint32_t *)(arg1 + 0x6f0) = 0;
    } while (true);
  }
  uVar5 = *(int *)(arg1 + 0x1e8) - 1;
  if (uVar5 < 0x4000) {
    if (uVar5 < 0x10) {
      iVar4 = (int)(char)ilog(int)::log2_4[(int)uVar5];
    } else if (uVar5 < 0x200) {
      iVar4 = (char)ilog(int)::log2_4[(int)uVar5 >> 5] + 5;
    } else {
      iVar4 = (char)ilog(int)::log2_4[(int)uVar5 >> 10] + 10;
    }
  } else if (uVar5 < 0x1000000) {
    if (uVar5 < 0x80000) {
      iVar4 = (char)ilog(int)::log2_4[(int)uVar5 >> 0xf] + 0xf;
    } else {
      iVar4 = (char)ilog(int)::log2_4[(int)uVar5 >> 0x14] + 0x14;
    }
  } else if (uVar5 < 0x20000000) {
    iVar4 = (char)ilog(int)::log2_4[(int)uVar5 >> 0x19] + 0x19;
  } else {
    iVar4 = 0;
    if (-1 < (int)uVar5) {
      iVar4 = (char)ilog(int)::log2_4[(int)uVar5 >> 0x1e] + 0x1e;
    }
  }
  iVar4 = get_bits(arg1, iVar4);
  if (iVar4 == -1) {
    return 0;
  }
  if (*(int *)(arg1 + 0x1e8) <= iVar4) {
    return 0;
  }
  *arg6 = iVar4;
  lVar1 = (long)iVar4 * 6;
  if (arg1[lVar1 + 0x1ec] == (stb_vorbis)0x0) {
    iVar4 = *(int *)(arg1 + 0xa0);
    bVar9 = true;
    iVar8 = iVar4 >> 1;
  } else {
    iVar4 = *(int *)(arg1 + 0xa4);
    iVar6 = get_bits(arg1, 1);
    iVar7 = get_bits(arg1, 1);
    iVar8 = iVar4 >> 1;
    if ((iVar6 == 0) && (arg1[lVar1 + 0x1ec] != (stb_vorbis)0x0)) {
      *arg2 = iVar4 - *(int *)(arg1 + 0xa0) >> 2;
      bVar9 = iVar7 == 0;
      *arg3 = *(int *)(arg1 + 0xa0) + iVar4 >> 2;
      goto LAB_005ab18f;
    }
    bVar9 = iVar7 == 0;
  }
  *arg2 = 0;
  *arg3 = iVar8;
LAB_005ab18f:
  if ((bVar9) && (arg1[lVar1 + 0x1ec] != (stb_vorbis)0x0)) {
    *arg4 = iVar4 * 3 - *(int *)(arg1 + 0xa0) >> 2;
    *arg5 = *(int *)(arg1 + 0xa0) + iVar4 * 3 >> 2;
    return 1;
  }
  *arg4 = iVar8;
  *arg5 = iVar4;
  return 1;
LAB_005ab040:
  *(uint32_t *)(arg1 + 0x6f0) = 0;
  if (*(int *)(arg1 + 0x90) != 0) {
    return 0;
  }
  goto LAB_005aafa4;
}

/* ======================================================================
 * stb_vorbis_stream_length_in_samples_part_24  (Ghidra `stb_vorbis_stream_length_in_samples.part.24` @ 005ab290)
 * Signature: uint8_t stb_vorbis_stream_length_in_samples.part.24(void)
 * Calls: `fread`, `fseek`, `ftell`, `get32`, `vorbis_find_page`
 * Called by: `stb_vorbis_seek`, `stb_vorbis_seek_frame`, `stb_vorbis_stream_length_in_samples`, `stb_vorbis_stream_length_in_seconds`
 */
int stb_vorbis_stream_length_in_samples_part_24(stb_vorbis *arg1)

{
  uint32_t *puVar1;
  uint uVar2;
  stb_vorbis sVar3;
  int iVar4;
  int iVar5;
  uint32_t *puVar6;
  long lVar7;
  size_t sVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  uint32_t local_58;
  uint16_t local_54;
  uint local_48[4];
  uint local_38[4];

  iVar4 = *(int *)(arg1 + 0x36c);
  if (iVar4 != 0)
    goto LAB_005ab2bc;
  sVar3 = arg1[0x44];
  uVar12 = 0;
  if (sVar3 == (stb_vorbis)0x0) {
    if (*(long *)(arg1 + 0x28) == 0) {
      lVar7 = ftell(*(FILE **)(arg1 + 0x18));
      sVar3 = arg1[0x44];
      uVar12 = (ulong)(uint)((int)lVar7 - *(int *)(arg1 + 0x20));
    } else {
      uVar12 = (ulong)(uint)((int)*(long *)(arg1 + 0x28) - *(int *)(arg1 + 0x30));
    }
  }
  if (*(uint *)(arg1 + 0x40) < 0x10000) {
    uVar9 = *(uint *)(arg1 + 0x48);
  } else {
    uVar9 = *(uint *)(arg1 + 0x40) - 0x10000;
    if (uVar9 < *(uint *)(arg1 + 0x48)) {
      uVar9 = *(uint *)(arg1 + 0x48);
    }
  }
  if (sVar3 == (stb_vorbis)0x0) {
    *(uint32_t *)(arg1 + 0x90) = 0;
    if (*(long *)(arg1 + 0x28) == 0) {
      uVar11 = (ulong)(uVar9 + *(int *)(arg1 + 0x20));
      if (((int)uVar9 < 0) || (uVar9 + *(int *)(arg1 + 0x20) < uVar9)) {
        *(uint32_t *)(arg1 + 0x90) = 1;
        uVar11 = 0x7fffffff;
      }
      iVar4 = fseek(*(FILE **)(arg1 + 0x18), uVar11, 0);
      if (iVar4 != 0) {
        *(uint32_t *)(arg1 + 0x90) = 1;
        fseek(*(FILE **)(arg1 + 0x18), (ulong) * (uint *)(arg1 + 0x20), 2);
      }
    } else if ((ulong)uVar9 + *(long *)(arg1 + 0x30) < *(ulong *)(arg1 + 0x38)) {
      *(ulong *)(arg1 + 0x28) = (ulong)uVar9 + *(long *)(arg1 + 0x30);
    } else {
      *(ulong *)(arg1 + 0x28) = *(ulong *)(arg1 + 0x38);
      *(uint32_t *)(arg1 + 0x90) = 1;
    }
  }
  iVar4 = vorbis_find_page(arg1, local_48, local_38);
  if (iVar4 == 0) {
    *(uint32_t *)(arg1 + 0x94) = 0x24;
    *(uint32_t *)(arg1 + 0x36c) = 0xffffffff;
    iVar4 = -1;
  } else {
    while (true) {
      sVar3 = arg1[0x44];
      uVar11 = 0;
      if (sVar3 == (stb_vorbis)0x0) {
        if (*(long *)(arg1 + 0x28) == 0) {
          lVar7 = ftell(*(FILE **)(arg1 + 0x18));
          sVar3 = arg1[0x44];
          uVar11 = (ulong)(uint)((int)lVar7 - *(int *)(arg1 + 0x20));
        } else {
          uVar11 = (ulong)(uint)((int)*(long *)(arg1 + 0x28) - *(int *)(arg1 + 0x30));
        }
      }
      uVar2 = (uint)uVar11;
      if (local_38[0] != 0)
        goto LAB_005ab474;
      if (sVar3 == (stb_vorbis)0x0) {
        *(uint32_t *)(arg1 + 0x90) = 0;
        if (*(long *)(arg1 + 0x28) == 0) {
          uVar10 = (ulong)(local_48[0] + *(int *)(arg1 + 0x20));
          if (((int)local_48[0] < 0) || (local_48[0] + *(int *)(arg1 + 0x20) < local_48[0])) {
            *(uint32_t *)(arg1 + 0x90) = 1;
            uVar10 = 0x7fffffff;
          }
          iVar4 = fseek(*(FILE **)(arg1 + 0x18), uVar10, 0);
          if (iVar4 != 0) {
            *(uint32_t *)(arg1 + 0x90) = 1;
            fseek(*(FILE **)(arg1 + 0x18), (ulong) * (uint *)(arg1 + 0x20), 2);
          }
        } else if ((ulong)local_48[0] + *(long *)(arg1 + 0x30) < *(ulong *)(arg1 + 0x38)) {
          *(ulong *)(arg1 + 0x28) = (ulong)local_48[0] + *(long *)(arg1 + 0x30);
        } else {
          *(ulong *)(arg1 + 0x28) = *(ulong *)(arg1 + 0x38);
          *(uint32_t *)(arg1 + 0x90) = 1;
        }
      }
      iVar4 = vorbis_find_page(arg1, local_48, local_38);
      if (iVar4 == 0)
        break;
      uVar9 = uVar2 + 1;
    }
    sVar3 = arg1[0x44];
  LAB_005ab474:
    if (sVar3 == (stb_vorbis)0x0) {
      *(uint32_t *)(arg1 + 0x90) = 0;
      if (*(long *)(arg1 + 0x28) == 0) {
        uVar10 = (ulong)(uVar2 + *(int *)(arg1 + 0x20));
        if ((uVar11 >> 0x1f != 0) || (uVar2 + *(int *)(arg1 + 0x20) < uVar2)) {
          *(uint32_t *)(arg1 + 0x90) = 1;
          uVar10 = 0x7fffffff;
        }
        iVar4 = fseek(*(FILE **)(arg1 + 0x18), uVar10, 0);
        if (iVar4 != 0) {
          *(uint32_t *)(arg1 + 0x90) = 1;
          fseek(*(FILE **)(arg1 + 0x18), (ulong) * (uint *)(arg1 + 0x20), 2);
        }
        goto LAB_005ab5f8;
      }
      puVar6 = (uint32_t *)(uVar11 + *(long *)(arg1 + 0x30));
      puVar1 = *(uint32_t **)(arg1 + 0x38);
      if (puVar6 < puVar1) {
        *(uint32_t **)(arg1 + 0x28) = puVar6;
      } else {
        *(uint32_t **)(arg1 + 0x28) = puVar1;
        *(uint32_t *)(arg1 + 0x90) = 1;
        puVar6 = puVar1;
      }
    } else {
    LAB_005ab5f8:
      puVar6 = *(uint32_t **)(arg1 + 0x28);
    }
    if (puVar6 == (uint32_t *)0x0) {
      sVar8 = fread(&local_58, 6, 1, *(FILE **)(arg1 + 0x18));
      if (sVar8 != 1)
        goto LAB_005ab4cc;
    } else if (*(ulong *)(arg1 + 0x38) < (long)puVar6 + 6U) {
    LAB_005ab4cc:
      *(uint32_t *)(arg1 + 0x90) = 1;
    } else {
      local_58 = *puVar6;
      local_54 = *(uint16_t *)(puVar6 + 1);
      *(ulong *)(arg1 + 0x28) = (long)puVar6 + 6U;
    }
    iVar4 = get32(arg1);
    iVar5 = get32(arg1);
    if ((iVar5 == -1) && (iVar4 == -1)) {
      *(uint32_t *)(arg1 + 0x94) = 0x24;
      *(uint32_t *)(arg1 + 0x36c) = 0xffffffff;
    } else {
      *(uint *)(arg1 + 0x60) = uVar2;
      if (iVar5 != 0) {
        iVar4 = -2;
      }
      *(uint32_t *)(arg1 + 0x6c) = 0xffffffff;
      *(int *)(arg1 + 0x36c) = iVar4;
      *(int *)(arg1 + 0x70) = iVar4;
      *(uint *)(arg1 + 0x68) = uVar9;
      *(uint *)(arg1 + 100) = local_48[0];
    }
  }
  if (arg1[0x44] == (stb_vorbis)0x0) {
    *(uint32_t *)(arg1 + 0x90) = 0;
    if (*(long *)(arg1 + 0x28) == 0) {
      uVar9 = (uint)uVar12 + *(int *)(arg1 + 0x20);
      uVar11 = (ulong)uVar9;
      if ((uVar12 >> 0x1f != 0) || (uVar9 < (uint)uVar12)) {
        *(uint32_t *)(arg1 + 0x90) = 1;
        uVar11 = 0x7fffffff;
      }
      iVar4 = fseek(*(FILE **)(arg1 + 0x18), uVar11, 0);
      if (iVar4 != 0) {
        *(uint32_t *)(arg1 + 0x90) = 1;
        fseek(*(FILE **)(arg1 + 0x18), (ulong) * (uint *)(arg1 + 0x20), 2);
      }
      iVar4 = *(int *)(arg1 + 0x36c);
    } else if (uVar12 + *(long *)(arg1 + 0x30) < *(ulong *)(arg1 + 0x38)) {
      *(ulong *)(arg1 + 0x28) = uVar12 + *(long *)(arg1 + 0x30);
      iVar4 = *(int *)(arg1 + 0x36c);
    } else {
      *(ulong *)(arg1 + 0x28) = *(ulong *)(arg1 + 0x38);
      *(uint32_t *)(arg1 + 0x90) = 1;
    }
  }
LAB_005ab2bc:
  if (iVar4 == -1) {
    iVar4 = 0;
  }
  return iVar4;
}

/* ======================================================================
 * vorbis_analyze_page  (Ghidra `vorbis_analyze_page` @ 005ab770)
 * Signature: uint8_t __stdcall vorbis_analyze_page(stb_vorbis * arg1, ProbedPage * arg2)
 * Calls: `fgetc`, `fread`, `fseek`, `ftell`, `ilog`, `memcpy`
 * Called by: `vorbis_seek_base`
 */
/* vorbis_analyze_page(stb_vorbis*, ProbedPage*) [clone .constprop.27] */

uint32_t vorbis_analyze_page(stb_vorbis *arg1, ProbedPage *arg2)

{
  uint8_t auVar1[16];
  ulong *puVar2;
  byte *pbVar3;
  uint8_t auVar4[14];
  uint8_t auVar5[15];
  uint8_t auVar6[15];
  uint8_t auVar7[15];
  uint8_t auVar8[14];
  uint8_t auVar9[13];
  uint8_t auVar10[13];
  uint8_t auVar11[13];
  uint uVar12;
  uint8_t auVar13[15];
  uint8_t auVar14[15];
  uint8_t auVar15[15];
  uint8_t auVar16[15];
  uint8_t auVar17[15];
  unkuint9 Var18;
  uint8_t auVar19[11];
  uint8_t auVar20[13];
  uint8_t auVar21[14];
  uint8_t auVar22[13];
  uint8_t auVar23[15];
  uint8_t auVar24[15];
  uint6 uVar25;
  int iVar26;
  uint uVar27;
  size_t sVar28;
  byte bVar29;
  long lVar30;
  uint uVar31;
  long lVar32;
  uint32_t uVar33;
  uint uVar34;
  ulong *__src;
  ulong __off;
  ulong uVar35;
  bool bVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  uint uVar40;
  byte local_258[256];
  stb_vorbis asStack_158[256];
  uint64_t local_58;
  uint64_t local_50;
  ulong local_48;
  uint16_t local_40;
  byte local_3e;

  iVar26 = 0;
  if (arg1[0x44] == (stb_vorbis)0x0) {
    if (*(long *)(arg1 + 0x28) == 0) {
      lVar30 = ftell(*(FILE **)(arg1 + 0x18));
      iVar26 = (int)lVar30 - *(int *)(arg1 + 0x20);
    } else {
      iVar26 = (int)*(long *)(arg1 + 0x28) - *(int *)(arg1 + 0x30);
    }
  }
  *(int *)arg2 = iVar26;
  puVar2 = *(ulong **)(arg1 + 0x28);
  if (puVar2 == (ulong *)0x0) {
    sVar28 = fread(&local_58, 0x1b, 1, *(FILE **)(arg1 + 0x18));
    if (sVar28 != 1) {
      *(uint32_t *)(arg1 + 0x90) = 1;
    }
    __src = *(ulong **)(arg1 + 0x28);
  LAB_005abbed:
    uVar31 = (uint)local_3e;
    if (__src != (ulong *)0x0)
      goto LAB_005ab7d4;
    sVar28 = fread(local_258, (long)(int)uVar31, 1, *(FILE **)(arg1 + 0x18));
    if (sVar28 != 1) {
      *(uint32_t *)(arg1 + 0x90) = 1;
    }
    uVar31 = (uint)local_3e;
    bVar29 = local_3e;
  } else {
    __src = (ulong *)((long)puVar2 + 0x1b);
    if (__src <= *(ulong **)(arg1 + 0x38)) {
      local_58 = *puVar2;
      local_50 = puVar2[1];
      local_48 = puVar2[2];
      local_40 = (short)puVar2[3];
      local_3e = *(byte *)((long)puVar2 + 0x1a);
      *(ulong **)(arg1 + 0x28) = __src;
      goto LAB_005abbed;
    }
    *(uint32_t *)(arg1 + 0x90) = 1;
    uVar31 = (uint)local_3e;
    __src = puVar2;
  LAB_005ab7d4:
    bVar29 = local_3e;
    uVar35 = (long)__src + (long)(int)uVar31;
    if (*(ulong *)(arg1 + 0x38) < uVar35) {
      *(uint32_t *)(arg1 + 0x90) = 1;
    } else {
      memcpy(local_258, __src, (long)(int)uVar31);
      *(ulong *)(arg1 + 0x28) = uVar35;
    }
  }
  if (uVar31 == 0) {
    iVar26 = 0;
  } else {
    uVar34 = uVar31 >> 4;
    uVar27 = uVar34 << 4;
    if ((uVar34 == 0) || (uVar31 < 0x10)) {
      iVar26 = 0;
      uVar27 = 0;
    } else {
      iVar26 = 0;
      iVar37 = 0;
      iVar38 = 0;
      iVar39 = 0;
      lVar30 = 0;
      do {
        lVar32 = lVar30 + 1;
        auVar1 = *(uint8_t (*)[16])(local_258 + lVar30 * 0x10);
        uVar40 = CONCAT13(0, CONCAT12(auVar1[9], (ushort)auVar1[8]));
        auVar5[0xd] = 0;
        auVar5._0_13_ = auVar1._0_13_;
        auVar5[0xe] = auVar1[7];
        auVar6[0xc] = auVar1[6];
        auVar6._0_12_ = auVar1._0_12_;
        auVar6._13_2_ = auVar5._13_2_;
        auVar7[0xb] = 0;
        auVar7._0_11_ = auVar1._0_11_;
        auVar7._12_3_ = auVar6._12_3_;
        uVar12 = auVar7._11_4_;
        auVar13[10] = auVar1[5];
        auVar13._0_10_ = auVar1._0_10_;
        auVar13._11_4_ = uVar12;
        auVar14[9] = 0;
        auVar14._0_9_ = auVar1._0_9_;
        auVar14._10_5_ = auVar13._10_5_;
        auVar15[8] = auVar1[4];
        auVar15._0_8_ = auVar1._0_8_;
        auVar15._9_6_ = auVar14._9_6_;
        auVar17._7_8_ = 0;
        auVar17._0_7_ = auVar15._8_7_;
        Var18 = CONCAT81(SUB158(auVar17 << 0x40, 7), auVar1[3]);
        auVar23._9_6_ = 0;
        auVar23._0_9_ = Var18;
        auVar19._1_10_ = SUB1510(auVar23 << 0x30, 5);
        auVar19[0] = auVar1[2];
        auVar24._11_4_ = 0;
        auVar24._0_11_ = auVar19;
        auVar20._1_12_ = SUB1512(auVar24 << 0x20, 3);
        auVar20[0] = auVar1[1];
        auVar16[1] = 0;
        auVar16[0] = auVar1[0];
        auVar16._2_13_ = auVar20;
        auVar4._10_2_ = 0;
        auVar4._0_10_ = auVar16._0_10_;
        auVar4._12_2_ = (short)Var18;
        uVar25 = CONCAT42(auVar4._10_4_, auVar19._0_2_);
        auVar21._6_8_ = 0;
        auVar21._0_6_ = uVar25;
        auVar8._4_2_ = auVar20._0_2_;
        auVar8._0_4_ = auVar16._0_4_;
        auVar8._6_8_ = SUB148(auVar21 << 0x40, 6);
        auVar9[0xc] = auVar1[0xb];
        auVar9._0_12_ = ZEXT112(auVar1[0xc]) << 0x40;
        auVar10._10_3_ = auVar9._10_3_;
        auVar10._0_10_ = (unkuint10)auVar1[10] << 0x40;
        auVar22._5_8_ = 0;
        auVar22._0_5_ = auVar10._8_5_;
        auVar11[4] = auVar1[9];
        auVar11._0_4_ = uVar40;
        auVar11[5] = 0;
        auVar11._6_7_ = SUB137(auVar22 << 0x40, 6);
        iVar26 = iVar26 + (auVar16._0_4_ & 0xffff) + (uint)auVar15._8_2_ + (uVar40 & 0xffff) +
                 (uint)auVar1[0xc];
        iVar37 = iVar37 + auVar8._4_4_ + (uint)auVar13._10_2_ + auVar11._4_4_ + (uint)auVar1[0xd];
        iVar38 = iVar38 + (int)uVar25 + (uVar12 >> 8 & 0xffff) + auVar10._8_4_ + (uint)auVar1[0xe];
        iVar39 = iVar39 + (auVar4._10_4_ >> 0x10) + (uVar12 >> 0x18) +
                 (uint)(uint3)(auVar9._10_3_ >> 0x10) + (uint)auVar1[0xf];
        lVar30 = lVar32;
      } while ((uint)lVar32 < uVar34);
      iVar26 = iVar26 + iVar38 + iVar37 + iVar39;
      if (uVar31 == uVar27)
        goto LAB_005ab8b1;
    }
    do {
      lVar30 = (long)(int)uVar27;
      uVar27 = uVar27 + 1;
      iVar26 = iVar26 + (uint)local_258[lVar30];
    } while ((int)uVar27 < (int)uVar31);
  }
LAB_005ab8b1:
  uVar27 = *(uint *)arg2;
  uVar35 = (ulong)uVar27;
  *(uint *)(arg2 + 4) = uVar27 + 0x1b + (uint)bVar29 + iVar26;
  iVar26 = (uint)local_58._6_1_ + (uint)local_58._7_1_ * 0x100 + (uint)(byte)local_50 * 0x10000 +
           (uint)local_50._1_1_ * 0x10000;
  *(int *)(arg2 + 0x10) = iVar26;
  if ((local_58 & 0x40000000000) == 0) {
    if (uVar31 == 0) {
    LAB_005abd36:
      iVar37 = 0;
    } else {
      iVar37 = 0;
      iVar26 = 0;
      bVar36 = (bool)(local_58._5_1_ & 1 ^ 1);
      do {
        if (bVar36 != false) {
          if (local_258[iVar26] != 0) {
            pbVar3 = *(byte **)(arg1 + 0x28);
            if (pbVar3 == (byte *)0x0) {
              uVar31 = fgetc(*(FILE **)(arg1 + 0x18));
              uVar27 = uVar31 & 0xff;
              if (uVar31 != 0xffffffff)
                goto LAB_005aba5b;
              *(uint32_t *)(arg1 + 0x90) = 1;
              uVar27 = 0;
            } else if (pbVar3 < *(byte **)(arg1 + 0x38)) {
              bVar29 = *pbVar3;
              *(byte **)(arg1 + 0x28) = pbVar3 + 1;
              uVar27 = (uint)bVar29;
            LAB_005aba5b:
              if ((uVar27 & 1) != 0)
                goto LAB_005aba63;
              uVar27 = uVar27 >> 1;
            } else {
              *(uint32_t *)(arg1 + 0x90) = 1;
              uVar27 = 0;
            }
            uVar31 = *(int *)(arg1 + 0x1e8) - 1;
            if (uVar31 < 0x4000) {
              if (uVar31 < 0x10) {
                bVar29 = ilog(int)::log2_4[(int)uVar31];
              } else if (uVar31 < 0x200) {
                bVar29 = ilog(int)::log2_4[(int)uVar31 >> 5] + 5;
              } else {
                bVar29 = ilog(int)::log2_4[(int)uVar31 >> 10] + 10;
              }
            LAB_005ab950:
              uVar34 = (1 << (bVar29 & 0x1f)) - 1U & uVar27;
            } else {
              if (uVar31 < 0x1000000) {
                if (uVar31 < 0x80000) {
                  bVar29 = ilog(int)::log2_4[(int)uVar31 >> 0xf] + 0xf;
                } else {
                  bVar29 = ilog(int)::log2_4[(int)uVar31 >> 0x14] + 0x14;
                }
                goto LAB_005ab950;
              }
              if (uVar31 < 0x20000000) {
                bVar29 = ilog(int)::log2_4[(int)uVar31 >> 0x19] + 0x19;
                goto LAB_005ab950;
              }
              uVar34 = 0;
              if (-1 < (int)uVar31) {
                bVar29 = ilog(int)::log2_4[(int)uVar31 >> 0x1e] + 0x1e;
                goto LAB_005ab950;
              }
            }
            if ((int)uVar34 < *(int *)(arg1 + 0x1e8)) {
              lVar32 = (long)iVar37;
              lVar30 = *(long *)(arg1 + 0x28);
              iVar37 = iVar37 + 1;
              asStack_158[lVar32] = arg1[(long)(int)uVar34 * 6 + 0x1ec];
              bVar29 = local_258[iVar26];
              uVar31 = bVar29 - 1;
              goto joined_r0x005ab996;
            }
          }
        LAB_005aba63:
          uVar31 = *(uint *)arg2;
          if (arg1[0x44] != (stb_vorbis)0x0) {
            return 0;
          }
          *(uint32_t *)(arg1 + 0x90) = 0;
          if (*(long *)(arg1 + 0x28) != 0) {
            if (*(ulong *)(arg1 + 0x38) <= (ulong)uVar31 + *(long *)(arg1 + 0x30)) {
              *(ulong *)(arg1 + 0x28) = *(ulong *)(arg1 + 0x38);
              *(uint32_t *)(arg1 + 0x90) = 1;
              return 0;
            }
            *(ulong *)(arg1 + 0x28) = (ulong)uVar31 + *(long *)(arg1 + 0x30);
            return 0;
          }
          uVar35 = (ulong)(uVar31 + *(int *)(arg1 + 0x20));
          if (((int)uVar31 < 0) || (uVar31 + *(int *)(arg1 + 0x20) < uVar31)) {
            *(uint32_t *)(arg1 + 0x90) = 1;
            uVar35 = 0x7fffffff;
          }
          uVar33 = 0;
          iVar26 = fseek(*(FILE **)(arg1 + 0x18), uVar35, 0);
          if (iVar26 == 0) {
            return 0;
          }
          goto LAB_005abe33;
        }
        bVar29 = local_258[iVar26];
        lVar30 = *(long *)(arg1 + 0x28);
        uVar31 = (uint)bVar29;
      joined_r0x005ab996:
        if (lVar30 == 0) {
          lVar30 = ftell(*(FILE **)(arg1 + 0x18));
          fseek(*(FILE **)(arg1 + 0x18), lVar30 + (int)uVar31, 0);
          bVar29 = local_258[iVar26];
        } else {
          *(long *)(arg1 + 0x28) = lVar30 + (int)uVar31;
          if (*(ulong *)(arg1 + 0x38) <= (ulong)(lVar30 + (int)uVar31)) {
            *(uint32_t *)(arg1 + 0x90) = 1;
          }
        }
        bVar36 = bVar29 != 0xff;
        iVar26 = iVar26 + 1;
      } while (iVar26 < (int)(uint)local_3e);
      if (iVar37 < 2) {
        uVar35 = (ulong) * (uint *)arg2;
        iVar26 = *(int *)(arg2 + 0x10);
        goto LAB_005abd36;
      }
      iVar38 = iVar37 + -2;
      iVar26 = *(int *)(arg2 + 0x10);
      uVar35 = (ulong) * (uint *)arg2;
      iVar37 = *(int *)(arg1 + (ulong)(byte)asStack_158[iVar37 + -1] * 4 + 0x98);
      if (0 < iVar38) {
        do {
          if (asStack_158[iVar38] == (stb_vorbis)0x1) {
            if (asStack_158[iVar38 + 1] == (stb_vorbis)0x1) {
              iVar37 = iVar37 + (*(int *)(arg1 + 0xa4) >> 1);
            } else {
              iVar37 = iVar37 + (*(int *)(arg1 + 0xa4) - *(int *)(arg1 + 0xa0) >> 2) +
                       (*(int *)(arg1 + 0xa0) >> 1);
            }
          } else {
            iVar37 = iVar37 + (*(int *)(arg1 + 0xa0) >> 1);
          }
          iVar38 = iVar38 + -1;
        } while (iVar38 != 0);
      }
    }
    *(int *)(arg2 + 0xc) = iVar26 - iVar37;
    if (arg1[0x44] != (stb_vorbis)0x0) {
      return 1;
    }
    *(uint32_t *)(arg1 + 0x90) = 0;
    if (*(long *)(arg1 + 0x28) != 0) {
    LAB_005abd02:
      if (*(ulong *)(arg1 + 0x38) <= uVar35 + *(long *)(arg1 + 0x30)) {
        *(ulong *)(arg1 + 0x28) = *(ulong *)(arg1 + 0x38);
        *(uint32_t *)(arg1 + 0x90) = 1;
        return 1;
      }
      *(ulong *)(arg1 + 0x28) = uVar35 + *(long *)(arg1 + 0x30);
      return 1;
    }
    uVar31 = (uint)uVar35 + *(int *)(arg1 + 0x20);
    __off = (ulong)uVar31;
    if ((uVar35 >> 0x1f == 0) && ((uint)uVar35 <= uVar31))
      goto LAB_005abd7f;
  } else {
    *(uint32_t *)(arg2 + 0xc) = 0xffffffff;
    if (arg1[0x44] != (stb_vorbis)0x0) {
      return 1;
    }
    *(uint32_t *)(arg1 + 0x90) = 0;
    if (*(long *)(arg1 + 0x28) != 0)
      goto LAB_005abd02;
    __off = (ulong)(uVar27 + *(int *)(arg1 + 0x20));
    if ((-1 < (int)uVar27) && (uVar27 <= uVar27 + *(int *)(arg1 + 0x20)))
      goto LAB_005abd7f;
  }
  *(uint32_t *)(arg1 + 0x90) = 1;
  __off = 0x7fffffff;
LAB_005abd7f:
  uVar33 = 1;
  iVar26 = fseek(*(FILE **)(arg1 + 0x18), __off, 0);
  if (iVar26 != 0) {
  LAB_005abe33:
    *(uint32_t *)(arg1 + 0x90) = 1;
    fseek(*(FILE **)(arg1 + 0x18), (ulong) * (uint *)(arg1 + 0x20), 2);
  }
  return uVar33;
}

/* ======================================================================
 * codebook_decode_start  (Ghidra `codebook_decode_start` @ 005abe90)
 * Signature: uint8_t __stdcall codebook_decode_start(stb_vorbis * arg1, Codebook * arg2, int arg3)
 * Calls: `codebook_decode_scalar_raw`, `fgetc`, `next_segment`
 * Called by: `vorbis_decode_packet_rest`
 */
/* codebook_decode_start(stb_vorbis*, Codebook*, int) [clone .isra.13] */

ulong codebook_decode_start(stb_vorbis *arg1, Codebook *arg2, int arg3)

{
  byte bVar1;
  byte *pbVar2;
  stb_vorbis sVar3;
  uint uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;

  if (arg2[0x19] == (Codebook)0x0) {
    *(uint32_t *)(arg1 + 0x94) = 0x15;
    uVar5 = 0xffffffff;
  } else {
    if (*(int *)(arg1 + 0x6f0) < 10) {
      if (*(int *)(arg1 + 0x6f0) == 0) {
        *(uint32_t *)(arg1 + 0x6ec) = 0;
      }
      do {
        sVar3 = arg1[0x6dc];
        if (*(int *)(arg1 + 0x6e4) == 0) {
          if (sVar3 == (stb_vorbis)0x0) {
            iVar6 = next_segment(arg1);
            if (iVar6 == 0)
              goto LAB_005abec3;
            sVar3 = arg1[0x6dc];
          }
        } else if (sVar3 == (stb_vorbis)0x0)
          goto LAB_005abec3;
        *(int *)(arg1 + 0x6f4) = *(int *)(arg1 + 0x6f4) + 1;
        arg1[0x6dc] = (stb_vorbis)((char)sVar3 + -1);
        pbVar2 = *(byte **)(arg1 + 0x28);
        if (pbVar2 == (byte *)0x0) {
          uVar8 = fgetc(*(FILE **)(arg1 + 0x18));
          if (uVar8 == 0xffffffff)
            goto LAB_005abfb8;
          iVar6 = *(int *)(arg1 + 0x6f0);
          iVar7 = (uVar8 & 0xff) << ((byte)iVar6 & 0x1f);
        } else if (pbVar2 < *(byte **)(arg1 + 0x38)) {
          bVar1 = *pbVar2;
          iVar6 = *(int *)(arg1 + 0x6f0);
          *(byte **)(arg1 + 0x28) = pbVar2 + 1;
          iVar7 = (uint)bVar1 << ((byte)iVar6 & 0x1f);
        } else {
        LAB_005abfb8:
          *(uint32_t *)(arg1 + 0x90) = 1;
          iVar6 = *(int *)(arg1 + 0x6f0);
          iVar7 = 0;
        }
        uVar8 = iVar7 + *(int *)(arg1 + 0x6ec);
        *(int *)(arg1 + 0x6f0) = iVar6 + 8;
        *(uint *)(arg1 + 0x6ec) = uVar8;
      } while (iVar6 + 8 < 0x19);
    } else {
    LAB_005abec3:
      uVar8 = *(uint *)(arg1 + 0x6ec);
    }
    uVar4 = (uint) * (short *)(arg2 + (ulong)(uVar8 & 0x3ff) * 2 + 0x30);
    if ((int)uVar4 < 0) {
      uVar5 = codebook_decode_scalar_raw(arg1, arg2);
      if (-1 < (int)uVar5) {
        return uVar5;
      }
    } else {
      bVar1 = *(byte *)(*(long *)(arg2 + 8) + (long)(int)uVar4);
      *(uint *)(arg1 + 0x6ec) = uVar8 >> (bVar1 & 0x1f);
      iVar6 = *(int *)(arg1 + 0x6f0) - (uint)bVar1;
      *(int *)(arg1 + 0x6f0) = iVar6;
      if (-1 < iVar6) {
        return (ulong)uVar4;
      }
      *(uint32_t *)(arg1 + 0x6f0) = 0;
      uVar5 = 0xffffffff;
    }
    if ((arg1[0x6dc] != (stb_vorbis)0x0) || (*(int *)(arg1 + 0x6e4) == 0)) {
      *(uint32_t *)(arg1 + 0x94) = 0x15;
      return uVar5;
    }
  }
  return uVar5;
}

/* ======================================================================
 * vorbis_decode_packet_rest  (Ghidra `vorbis_decode_packet_rest` @ 005ac060)
 * Signature: uint8_t __stdcall vorbis_decode_packet_rest(stb_vorbis * arg1, int * arg2, Mode * arg3, int arg4, int arg5, int arg6, int arg7, int * arg8)
 * Calls: `codebook_decode_deinterleave_repeat`, `codebook_decode_scalar_raw`, `codebook_decode_start`, `fgetc`, `get_bits`, `ilog`, `imdct_step3_inner_r_loop`, `imdct_step3_iter0_loop`, `memcpy`, `memset` (+1 more)
 * Called by: `stb_vorbis_decode_frame_pushdata`, `stb_vorbis_get_frame_float_part_25`, `stb_vorbis_open_file_section`, `stb_vorbis_open_file_section_constprop_33`, `stb_vorbis_open_memory`, `stb_vorbis_open_memory_constprop_31`, `stb_vorbis_seek_start`, `vorbis_seek_frame_from_page`
 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* vorbis_decode_packet_rest(stb_vorbis*, int*, Mode*, int, int, int, int, int*) [clone .isra.14] */

uint64_t vorbis_decode_packet_rest(stb_vorbis *arg1, int *arg2, Mode *arg3, int arg4, int arg5,
                                   int arg6, int arg7, int *arg8)

{
  float *pfVar1;
  float *pfVar2;
  long lVar3;
  float **ppfVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  ushort uVar8;
  short sVar9;
  uint32_t uVar10;
  uint16_t *puVar11;
  byte *pbVar12;
  short *psVar13;
  uint uVar14;
  stb_vorbis sVar15;
  uint16_t uVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  ushort *puVar23;
  long lVar24;
  float *pfVar25;
  float *pfVar26;
  float *pfVar27;
  float *pfVar28;
  ulong uVar29;
  uint uVar30;
  uint uVar31;
  long lVar32;
  float *pfVar33;
  float *pfVar34;
  short sVar35;
  long *plVar36;
  char *pcVar37;
  ulong uVar38;
  long lVar39;
  float *pfVar40;
  ulong uVar41;
  int iVar42;
  int iVar43;
  byte *pbVar44;
  int *piVar45;
  int iVar46;
  float *pfVar47;
  int iVar48;
  float *pfVar49;
  uint uVar50;
  long lVar51;
  uint uVar52;
  float *pfVar53;
  Codebook *pCVar54;
  long lVar55;
  float *pfVar56;
  uint uVar57;
  uint uVar58;
  int iVar59;
  int iVar60;
  int iVar61;
  int iVar62;
  uint uVar63;
  bool bVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  uint32_t in_stack_0000000c;
  long local_4b10;
  stb_vorbis *local_4b08;
  long local_4b00;
  long local_4ae8;
  long local_4ae0;
  long local_4ad0;
  int *local_4ac8;
  ushort *local_4aa0;
  uint local_4a90;
  int local_4a8c;
  stb_vorbis *local_4a80;
  float local_49e8;
  int local_49e4;
  float *local_49e0;
  long local_49d8[2048];
  int local_9d8[256];
  int local_5d8[256];
  char local_1d8[256];
  float *local_d8;
  long local_d0;
  int local_58[4];
  int local_48[6];

  uVar31 = *(uint *)(arg1 + (ulong)(byte)*arg3 * 4 + 0x98);
  puVar23 = (ushort *)((ulong)(byte)arg3[1] * 0x30 + *(long *)(arg1 + 0x1e0));
  iVar17 = *(int *)(arg1 + 4);
  local_49e4 = arg5;
  if (0 < iVar17) {
    local_9d8[0] = 0;
    uVar38 = (ulong) * (byte *)((long)puVar23 +
                                (long)(int)(uint) * (byte *)(*(long *)(puVar23 + 4) + 2) + 0x11);
    if (*(short *)(arg1 + uVar38 * 2 + 0xbc) != 0) {
      local_4ad0 = 0;
      do {
        lVar32 = *(long *)(arg1 + 0x140);
        iVar17 = get_bits(arg1, 1);
        if (iVar17 == 0) {
        LAB_005ac126:
          local_9d8[local_4ad0] = 1;
        LAB_005ac138:
          iVar17 = *(int *)(arg1 + 4);
          if (iVar17 <= (int)local_4ad0 + 1)
            goto LAB_005ac5db;
        } else {
          puVar11 = *(uint16_t **)(arg1 + local_4ad0 * 8 + 0x4f8);
          pbVar44 = (byte *)(uVar38 * 0x63c + lVar32);
          uVar58 = *(uint *)(vorbis_decode_packet_rest(stb_vorbis *, int *, Mode *, int, int, int,
                                                       int, int *)::range_list +
                             (long)(int)(pbVar44[0x634] - 1) * 4);
          if (uVar58 < 0x4000) {
            if (uVar58 < 0x10) {
              iVar17 = (char)ilog(int)::log2_4[(int)uVar58] + -1;
            } else {
              if (uVar58 < 0x200) {
                iVar17 = (char)ilog(int)::log2_4[(int)uVar58 >> 5] + 4;
                goto LAB_005ac21a;
              }
              iVar17 = (char)ilog(int)::log2_4[(int)uVar58 >> 10] + 9;
            }
          LAB_005acbe6:
            uVar16 = get_bits(arg1, iVar17);
            *puVar11 = uVar16;
          } else if (uVar58 < 0x1000000) {
            if (0x7ffff < uVar58) {
              iVar17 = (char)ilog(int)::log2_4[(int)uVar58 >> 0x14] + 0x13;
              goto LAB_005acbe6;
            }
            iVar17 = (char)ilog(int)::log2_4[(int)uVar58 >> 0xf] + 0xe;
          LAB_005ac21a:
            uVar16 = get_bits(arg1, iVar17);
            *puVar11 = uVar16;
          } else {
            if (uVar58 < 0x20000000) {
              iVar17 = (char)ilog(int)::log2_4[(int)uVar58 >> 0x19] + 0x18;
              goto LAB_005ac21a;
            }
            iVar18 = -1;
            if (-1 < (int)uVar58) {
              iVar18 = (char)ilog(int)::log2_4[(int)uVar58 >> 0x1e] + 0x1d;
            }
            iVar17 = -1;
            uVar16 = get_bits(arg1, iVar18);
            *puVar11 = uVar16;
            if (-1 < (int)uVar58) {
              iVar17 = (char)ilog(int)::log2_4[(int)uVar58 >> 0x1e] + 0x1d;
            }
          }
          uVar16 = get_bits(arg1, iVar17);
          puVar11[1] = uVar16;
          if (*pbVar44 != 0) {
            local_4b00 = 0;
            iVar17 = 2;
            do {
              uVar38 = (ulong)pbVar44[local_4b00 + 1];
              uVar57 = 0;
              bVar5 = pbVar44[uVar38 + 0x31];
              bVar6 = pbVar44[uVar38 + 0x21];
              if (bVar5 != 0) {
                pCVar54 =
                    (Codebook *)((ulong)pbVar44[uVar38 + 0x41] * 0x848 + *(long *)(arg1 + 0xb0));
                if (*(int *)(arg1 + 0x6f0) < 10) {
                  if (*(int *)(arg1 + 0x6f0) == 0) {
                    *(uint32_t *)(arg1 + 0x6ec) = 0;
                  }
                  do {
                    sVar15 = arg1[0x6dc];
                    if (*(int *)(arg1 + 0x6e4) == 0) {
                      if (sVar15 == (stb_vorbis)0x0) {
                        iVar18 = next_segment(arg1);
                        if (iVar18 == 0)
                          goto LAB_005ac2b7;
                        sVar15 = arg1[0x6dc];
                      }
                    } else if (sVar15 == (stb_vorbis)0x0)
                      goto LAB_005ac2b7;
                    pbVar12 = *(byte **)(arg1 + 0x28);
                    *(int *)(arg1 + 0x6f4) = *(int *)(arg1 + 0x6f4) + 1;
                    arg1[0x6dc] = (stb_vorbis)((char)sVar15 + -1);
                    if (pbVar12 == (byte *)0x0) {
                      uVar57 = fgetc(*(FILE **)(arg1 + 0x18));
                      if (uVar57 == 0xffffffff)
                        goto LAB_005acb31;
                      iVar18 = *(int *)(arg1 + 0x6f0);
                      iVar20 = (uVar57 & 0xff) << ((byte)iVar18 & 0x1f);
                    } else if (pbVar12 < *(byte **)(arg1 + 0x38)) {
                      bVar7 = *pbVar12;
                      iVar18 = *(int *)(arg1 + 0x6f0);
                      *(byte **)(arg1 + 0x28) = pbVar12 + 1;
                      iVar20 = (uint)bVar7 << ((byte)iVar18 & 0x1f);
                    } else {
                    LAB_005acb31:
                      *(uint32_t *)(arg1 + 0x90) = 1;
                      iVar18 = *(int *)(arg1 + 0x6f0);
                      iVar20 = 0;
                    }
                    uVar63 = iVar20 + *(int *)(arg1 + 0x6ec);
                    *(int *)(arg1 + 0x6f0) = iVar18 + 8;
                    *(uint *)(arg1 + 0x6ec) = uVar63;
                  } while (iVar18 + 8 < 0x19);
                } else {
                LAB_005ac2b7:
                  uVar63 = *(uint *)(arg1 + 0x6ec);
                }
                uVar57 = (uint) * (short *)(pCVar54 + (ulong)(uVar63 & 0x3ff) * 2 + 0x30);
                if (*(short *)(pCVar54 + (ulong)(uVar63 & 0x3ff) * 2 + 0x30) < 0) {
                  uVar57 = codebook_decode_scalar_raw(arg1, pCVar54);
                } else {
                  bVar7 = *(byte *)(*(long *)(pCVar54 + 8) + (long)(int)uVar57);
                  *(uint *)(arg1 + 0x6ec) = uVar63 >> (bVar7 & 0x1f);
                  iVar18 = *(int *)(arg1 + 0x6f0) - (uint)bVar7;
                  *(int *)(arg1 + 0x6f0) = iVar18;
                  if (iVar18 < 0) {
                    *(uint32_t *)(arg1 + 0x6f0) = 0;
                    uVar57 = 0xffffffff;
                  }
                }
                if (pCVar54[0x1b] != (Codebook)0x0) {
                  uVar57 = *(uint *)(*(long *)(pCVar54 + 0x838) + (long)(int)uVar57 * 4);
                }
              }
              if (bVar6 != 0) {
                uVar63 = bVar6 - 1;
                lVar55 = 0;
                lVar32 = (ulong)uVar63 * 2 + 2;
                do {
                  while (true) {
                    uVar19 = (1 << (bVar5 & 0x1f)) - 1U & uVar57;
                    uVar57 = (int)uVar57 >> (bVar5 & 0x1f);
                    if (-1 < *(short *)(pbVar44 + ((long)(int)uVar19 + 0x28 + uVar38 * 8) * 2 + 2))
                      break;
                    *(uint16_t *)((long)puVar11 + lVar55 + (long)iVar17 * 2) = 0;
                    lVar55 = lVar55 + 2;
                    if (lVar55 == lVar32)
                      goto LAB_005ac437;
                  }
                  pCVar54 =
                      (Codebook *)((long)(int)*(
                                       short *)(pbVar44 +
                                                ((long)(int)uVar19 + 0x28 + uVar38 * 8) * 2 + 2) *
                                       0x848 +
                                   *(long *)(arg1 + 0xb0));
                  if (*(int *)(arg1 + 0x6f0) < 10) {
                    if (*(int *)(arg1 + 0x6f0) == 0) {
                      *(uint32_t *)(arg1 + 0x6ec) = 0;
                    }
                    do {
                      sVar15 = arg1[0x6dc];
                      if (*(int *)(arg1 + 0x6e4) == 0) {
                        if (sVar15 == (stb_vorbis)0x0) {
                          iVar18 = next_segment(arg1);
                          if (iVar18 == 0)
                            goto LAB_005ac388;
                          sVar15 = arg1[0x6dc];
                        }
                      } else if (sVar15 == (stb_vorbis)0x0)
                        goto LAB_005ac388;
                      pbVar12 = *(byte **)(arg1 + 0x28);
                      *(int *)(arg1 + 0x6f4) = *(int *)(arg1 + 0x6f4) + 1;
                      arg1[0x6dc] = (stb_vorbis)((char)sVar15 + -1);
                      if (pbVar12 == (byte *)0x0) {
                        uVar19 = fgetc(*(FILE **)(arg1 + 0x18));
                        if (uVar19 == 0xffffffff)
                          goto LAB_005ac9f8;
                        iVar18 = *(int *)(arg1 + 0x6f0);
                        iVar20 = (uVar19 & 0xff) << ((byte)iVar18 & 0x1f);
                      } else if (pbVar12 < *(byte **)(arg1 + 0x38)) {
                        bVar6 = *pbVar12;
                        iVar18 = *(int *)(arg1 + 0x6f0);
                        *(byte **)(arg1 + 0x28) = pbVar12 + 1;
                        iVar20 = (uint)bVar6 << ((byte)iVar18 & 0x1f);
                      } else {
                      LAB_005ac9f8:
                        *(uint32_t *)(arg1 + 0x90) = 1;
                        iVar18 = *(int *)(arg1 + 0x6f0);
                        iVar20 = 0;
                      }
                      *(int *)(arg1 + 0x6f0) = iVar18 + 8;
                      uVar19 = *(int *)(arg1 + 0x6ec) + iVar20;
                      *(uint *)(arg1 + 0x6ec) = uVar19;
                    } while (iVar18 + 8 < 0x19);
                  } else {
                  LAB_005ac388:
                    uVar19 = *(uint *)(arg1 + 0x6ec);
                  }
                  iVar18 = (int)*(short *)(pCVar54 + (ulong)(uVar19 & 0x3ff) * 2 + 0x30);
                  if (iVar18 < 0) {
                    iVar18 = codebook_decode_scalar_raw(arg1, pCVar54);
                  } else {
                    bVar6 = *(byte *)(*(long *)(pCVar54 + 8) + (long)iVar18);
                    *(uint *)(arg1 + 0x6ec) = uVar19 >> (bVar6 & 0x1f);
                    iVar20 = *(int *)(arg1 + 0x6f0) - (uint)bVar6;
                    *(int *)(arg1 + 0x6f0) = iVar20;
                    if (iVar20 < 0) {
                      *(uint32_t *)(arg1 + 0x6f0) = 0;
                      iVar18 = -1;
                    }
                  }
                  if (pCVar54[0x1b] != (Codebook)0x0) {
                    iVar18 = *(int *)(*(long *)(pCVar54 + 0x838) + (long)iVar18 * 4);
                  }
                  *(short *)((long)puVar11 + lVar55 + (long)iVar17 * 2) = (short)iVar18;
                  lVar55 = lVar55 + 2;
                } while (lVar55 != lVar32);
              LAB_005ac437:
                iVar17 = iVar17 + 1 + uVar63;
              }
              iVar18 = (int)local_4b00 + 1;
              local_4b00 = local_4b00 + 1;
            } while (iVar18 < (int)(uint)*pbVar44);
          }
          if (*(int *)(arg1 + 0x6f0) == -1)
            goto LAB_005ac126;
          iVar17 = *(int *)(pbVar44 + 0x638);
          local_1d8[1] = 1;
          local_1d8[0] = '\x01';
          if (2 < iVar17) {
            lVar32 = 0;
            do {
              while (true) {
                uVar38 = (ulong)pbVar44[lVar32 * 2 + 0x444];
                uVar41 = (ulong)pbVar44[lVar32 * 2 + 0x445];
                uVar57 = (int)(short)puVar11[uVar41] - (int)(short)puVar11[uVar38];
                iVar20 = (int)((((int)uVar57 >> 0x1f ^ uVar57) - ((int)uVar57 >> 0x1f)) *
                               ((uint) * (ushort *)(pbVar44 + lVar32 * 2 + 0x156) -
                                (uint) * (ushort *)(pbVar44 + uVar38 * 2 + 0x152))) /
                         (int)((uint) * (ushort *)(pbVar44 + uVar41 * 2 + 0x152) -
                               (uint) * (ushort *)(pbVar44 + uVar38 * 2 + 0x152));
                iVar18 = -iVar20;
                if (-1 < (int)uVar57) {
                  iVar18 = iVar20;
                }
                iVar18 = (short)puVar11[uVar38] + iVar18;
                uVar8 = puVar11[lVar32 + 2];
                uVar57 = (uint)(short)uVar8;
                iVar46 = uVar58 - iVar18;
                iVar20 = iVar46;
                if (iVar18 <= iVar46) {
                  iVar20 = iVar18;
                }
                sVar35 = (short)iVar18;
                iVar59 = (int)lVar32;
                if (uVar57 != 0)
                  break;
                local_1d8[lVar32 + 2] = '\0';
                puVar11[lVar32 + 2] = sVar35;
                iVar17 = *(int *)(pbVar44 + 0x638);
                lVar32 = lVar32 + 1;
                if (iVar17 <= iVar59 + 3)
                  goto LAB_005ac595;
              }
              local_1d8[uVar41] = '\x01';
              local_1d8[uVar38] = '\x01';
              local_1d8[lVar32 + 2] = '\x01';
              if ((int)uVar57 < iVar20 * 2) {
                if ((uVar57 & 1) == 0) {
                  puVar11[lVar32 + 2] = sVar35 + (short)((int)uVar57 >> 1);
                  iVar17 = *(int *)(pbVar44 + 0x638);
                } else {
                  puVar11[lVar32 + 2] = sVar35 - (short)((int)(uVar57 + 1) >> 1);
                  iVar17 = *(int *)(pbVar44 + 0x638);
                }
              } else if (iVar46 <= iVar18) {
                puVar11[lVar32 + 2] = sVar35 + ~uVar8 + (short)iVar46;
                iVar17 = *(int *)(pbVar44 + 0x638);
              }
              lVar32 = lVar32 + 1;
            } while (iVar59 + 3 < iVar17);
          }
        LAB_005ac595:
          if (iVar17 < 1)
            goto LAB_005ac138;
          lVar32 = 0;
          do {
            if (local_1d8[lVar32] == '\0') {
              puVar11[lVar32] = 0xffff;
              iVar17 = *(int *)(pbVar44 + 0x638);
            }
            iVar18 = (int)lVar32;
            lVar32 = lVar32 + 1;
          } while (iVar18 + 1 < iVar17);
          iVar17 = *(int *)(arg1 + 4);
          if (iVar17 <= (int)local_4ad0 + 1)
            goto LAB_005ac5db;
        }
        lVar32 = *(long *)(puVar23 + 4);
        local_9d8[local_4ad0 + 1] = 0;
        uVar38 = (ulong) *
                 (byte *)((long)puVar23 +
                          (long)(int)(uint) * (byte *)((local_4ad0 + 1) * 3 + lVar32 + 2) + 0x11);
        local_4ad0 = local_4ad0 + 1;
      } while (*(short *)(arg1 + uVar38 * 2 + 0xbc) != 0);
    }
    *(uint32_t *)(arg1 + 0x94) = 0x15;
    return 0;
  }
LAB_005ac5db:
  local_4ac8 = local_9d8;
  memcpy(local_5d8, local_4ac8, (long)iVar17 * 4);
  uVar8 = *puVar23;
  if (uVar8 != 0) {
    lVar32 = *(long *)(puVar23 + 4);
    lVar55 = 0;
    do {
      bVar5 = *(byte *)(lVar32 + lVar55);
      bVar6 = *(byte *)(lVar32 + 1 + lVar55);
      if ((local_9d8[bVar5] == 0) || (local_9d8[bVar6] == 0)) {
        local_9d8[bVar6] = 0;
        local_9d8[bVar5] = 0;
      }
      lVar55 = lVar55 + 3;
    } while (lVar55 != (ulong)(uVar8 - 1) * 3 + 3);
  }
  uVar58 = (int)uVar31 >> 1;
  if ((char)puVar23[8] != '\0') {
    local_4a90 = 0;
    local_4aa0 = puVar23;
    do {
      iVar17 = *(int *)(arg1 + 4);
      if (iVar17 < 1) {
        bVar64 = true;
        iVar18 = 0;
      } else {
        lVar32 = 0;
        iVar20 = 0;
        iVar18 = 0;
        do {
          while (*(byte *)(*(long *)(puVar23 + 4) + 2 + lVar32) == local_4a90) {
            if (local_9d8[iVar20] == 0) {
              pfVar25 = *(float **)(arg1 + (long)iVar20 * 8 + 0x370);
              local_1d8[iVar18] = '\0';
              (&local_d8)[iVar18] = pfVar25;
            } else {
              local_1d8[iVar18] = '\x01';
              (&local_d8)[iVar18] = (float *)0x0;
            }
            iVar20 = iVar20 + 1;
            iVar18 = iVar18 + 1;
            lVar32 = lVar32 + 3;
            if (iVar17 <= iVar20)
              goto LAB_005ac72d;
          }
          iVar20 = iVar20 + 1;
          lVar32 = lVar32 + 3;
        } while (iVar20 < iVar17);
      LAB_005ac72d:
        bVar64 = iVar18 != 1;
      }
      uVar10 = *(uint32_t *)(arg1 + 0x8c);
      sVar35 = *(short *)(arg1 + (ulong)(byte)local_4aa0[0x10] * 2 + 0x14c);
      piVar45 = (int *)((ulong)(byte)local_4aa0[0x10] * 0x20 + *(long *)(arg1 + 0x1d0));
      iVar20 = *(int *)((ulong) * (byte *)((long)piVar45 + 0xd) * 0x848 + *(long *)(arg1 + 0xb0));
      uVar57 = (uint)(piVar45[1] - *piVar45) / (uint)piVar45[2];
      if (0 < iVar17) {
        plVar36 = local_49d8 + iVar17;
        lVar32 = 0;
        do {
          local_49d8[lVar32] = (long)plVar36;
          lVar32 = lVar32 + 1;
          plVar36 = (long *)((long)plVar36 + (long)(int)(uVar57 << 3));
        } while ((int)lVar32 < iVar17);
      }
      if (iVar18 != 0) {
        lVar32 = 0;
        lVar55 = (ulong)(iVar18 - 1) + 1;
        do {
          while (local_1d8[lVar32] == '\0') {
            ppfVar4 = &local_d8 + lVar32;
            lVar32 = lVar32 + 1;
            memset(*ppfVar4, 0, (long)(int)uVar58 << 2);
            if (lVar32 == lVar55)
              goto LAB_005ac819;
          }
          lVar32 = lVar32 + 1;
        } while (lVar32 != lVar55);
      }
    LAB_005ac819:
      if ((bVar64) && (sVar35 == 2)) {
        if (iVar18 != 0) {
          if (local_1d8[0] != '\0') {
            pcVar37 = local_1d8;
            iVar17 = 0;
            do {
              pcVar37 = pcVar37 + 1;
              iVar17 = iVar17 + 1;
              if (iVar17 == iVar18)
                goto LAB_005ac870;
            } while (*pcVar37 != '\0');
          }
          iVar17 = 0;
          do {
            if (iVar18 == 2) {
              if (0 < (int)uVar57) {
                iVar59 = piVar45[2];
                local_4ae8 = 0;
                iVar46 = 0;
                do {
                  iVar60 = *piVar45;
                  if (iVar17 == 0) {
                    pCVar54 = (Codebook *)((ulong) * (byte *)((long)piVar45 + 0xd) * 0x848 +
                                           *(long *)(arg1 + 0xb0));
                    if (*(int *)(arg1 + 0x6f0) < 10) {
                      if (*(int *)(arg1 + 0x6f0) == 0) {
                        *(uint32_t *)(arg1 + 0x6ec) = 0;
                      }
                      do {
                        sVar15 = arg1[0x6dc];
                        if (*(int *)(arg1 + 0x6e4) == 0) {
                          if (sVar15 == (stb_vorbis)0x0) {
                            iVar21 = next_segment(arg1);
                            if (iVar21 == 0)
                              goto LAB_005ad7d7;
                            sVar15 = arg1[0x6dc];
                          }
                        } else if (sVar15 == (stb_vorbis)0x0)
                          goto LAB_005ad7d7;
                        pbVar44 = *(byte **)(arg1 + 0x28);
                        *(int *)(arg1 + 0x6f4) = *(int *)(arg1 + 0x6f4) + 1;
                        arg1[0x6dc] = (stb_vorbis)((char)sVar15 + -1);
                        if (pbVar44 == (byte *)0x0) {
                          uVar63 = fgetc(*(FILE **)(arg1 + 0x18));
                          if (uVar63 == 0xffffffff)
                            goto LAB_005add36;
                          iVar21 = *(int *)(arg1 + 0x6f0);
                          iVar61 = (uVar63 & 0xff) << ((byte)iVar21 & 0x1f);
                        } else if (pbVar44 < *(byte **)(arg1 + 0x38)) {
                          bVar5 = *pbVar44;
                          iVar21 = *(int *)(arg1 + 0x6f0);
                          *(byte **)(arg1 + 0x28) = pbVar44 + 1;
                          iVar61 = (uint)bVar5 << ((byte)iVar21 & 0x1f);
                        } else {
                        LAB_005add36:
                          *(uint32_t *)(arg1 + 0x90) = 1;
                          iVar21 = *(int *)(arg1 + 0x6f0);
                          iVar61 = 0;
                        }
                        *(int *)(arg1 + 0x6f0) = iVar21 + 8;
                        uVar63 = *(int *)(arg1 + 0x6ec) + iVar61;
                        *(uint *)(arg1 + 0x6ec) = uVar63;
                      } while (iVar21 + 8 < 0x19);
                    } else {
                    LAB_005ad7d7:
                      uVar63 = *(uint *)(arg1 + 0x6ec);
                    }
                    iVar21 = (int)*(short *)(pCVar54 + (ulong)(uVar63 & 0x3ff) * 2 + 0x30);
                    if (iVar21 < 0) {
                      iVar21 = codebook_decode_scalar_raw(arg1, pCVar54);
                    } else {
                      bVar5 = *(byte *)(*(long *)(pCVar54 + 8) + (long)iVar21);
                      *(uint *)(arg1 + 0x6ec) = uVar63 >> (bVar5 & 0x1f);
                      iVar61 = *(int *)(arg1 + 0x6f0) - (uint)bVar5;
                      *(int *)(arg1 + 0x6f0) = iVar61;
                      if (iVar61 < 0) {
                        *(uint32_t *)(arg1 + 0x6f0) = 0;
                        iVar21 = -1;
                      }
                    }
                    if (pCVar54[0x1b] != (Codebook)0x0) {
                      iVar21 = *(int *)(*(long *)(pCVar54 + 0x838) + (long)iVar21 * 4);
                    }
                    if (iVar21 == -1)
                      goto LAB_005ac870;
                    *(uint64_t *)(local_49d8[0] + local_4ae8) =
                        *(uint64_t *)(*(long *)(piVar45 + 4) + (long)iVar21 * 8);
                  }
                  if ((iVar46 < (int)uVar57) && (0 < iVar20)) {
                    local_4b10 = 0;
                    uVar63 = iVar60 + iVar59 * iVar46;
                    iVar59 = (int)uVar63 >> 1;
                    uVar63 = uVar63 & 1;
                    do {
                      iVar60 = piVar45[2];
                      sVar35 = *(short *)((ulong) *
                                              (byte *)(*(long *)(local_49d8[0] + local_4ae8) +
                                                       local_4b10) *
                                              0x10 +
                                          *(long *)(piVar45 + 6) + (long)iVar17 * 2);
                      if (sVar35 < 0) {
                        uVar63 = iVar46 * iVar60 + *piVar45 + iVar60;
                        iVar59 = (int)uVar63 >> 1;
                        uVar63 = uVar63 & 1;
                      } else {
                        pCVar54 = (Codebook *)((long)(int)sVar35 * 0x848 + *(long *)(arg1 + 0xb0));
                        iVar21 = *(int *)pCVar54;
                        if (pCVar54[0x19] == (Codebook)0x0) {
                        LAB_005ad902:
                          *(uint32_t *)(arg1 + 0x94) = 0x15;
                          goto LAB_005ac870;
                        }
                        for (; 0 < iVar60; iVar60 = iVar60 - iVar21) {
                          if (*(int *)(arg1 + 0x6f0) < 10) {
                            if (*(int *)(arg1 + 0x6f0) == 0) {
                              *(uint32_t *)(arg1 + 0x6ec) = 0;
                            }
                            do {
                              sVar15 = arg1[0x6dc];
                              if (*(int *)(arg1 + 0x6e4) == 0) {
                                if (sVar15 == (stb_vorbis)0x0) {
                                  iVar61 = next_segment(arg1);
                                  if (iVar61 == 0)
                                    goto LAB_005ad9e5;
                                  sVar15 = arg1[0x6dc];
                                }
                              } else if (sVar15 == (stb_vorbis)0x0)
                                goto LAB_005ad9e5;
                              pbVar44 = *(byte **)(arg1 + 0x28);
                              *(int *)(arg1 + 0x6f4) = *(int *)(arg1 + 0x6f4) + 1;
                              arg1[0x6dc] = (stb_vorbis)((char)sVar15 + -1);
                              if (pbVar44 == (byte *)0x0) {
                                uVar19 = fgetc(*(FILE **)(arg1 + 0x18));
                                if (uVar19 == 0xffffffff)
                                  goto LAB_005adbe9;
                                iVar61 = *(int *)(arg1 + 0x6f0);
                                iVar62 = (uVar19 & 0xff) << ((byte)iVar61 & 0x1f);
                              } else if (pbVar44 < *(byte **)(arg1 + 0x38)) {
                                bVar5 = *pbVar44;
                                iVar61 = *(int *)(arg1 + 0x6f0);
                                *(byte **)(arg1 + 0x28) = pbVar44 + 1;
                                iVar62 = (uint)bVar5 << ((byte)iVar61 & 0x1f);
                              } else {
                              LAB_005adbe9:
                                *(uint32_t *)(arg1 + 0x90) = 1;
                                iVar61 = *(int *)(arg1 + 0x6f0);
                                iVar62 = 0;
                              }
                              *(int *)(arg1 + 0x6f0) = iVar61 + 8;
                              uVar19 = *(int *)(arg1 + 0x6ec) + iVar62;
                              *(uint *)(arg1 + 0x6ec) = uVar19;
                            } while (iVar61 + 8 < 0x19);
                          } else {
                          LAB_005ad9e5:
                            uVar19 = *(uint *)(arg1 + 0x6ec);
                          }
                          iVar61 = (int)*(short *)(pCVar54 + (ulong)(uVar19 & 0x3ff) * 2 + 0x30);
                          if (iVar61 < 0) {
                            iVar61 = codebook_decode_scalar_raw(arg1, pCVar54);
                            if (iVar61 < 0)
                              goto LAB_005adb44;
                          } else {
                            bVar5 = *(byte *)(*(long *)(pCVar54 + 8) + (long)iVar61);
                            *(uint *)(arg1 + 0x6ec) = uVar19 >> (bVar5 & 0x1f);
                            iVar62 = *(int *)(arg1 + 0x6f0) - (uint)bVar5;
                            *(int *)(arg1 + 0x6f0) = iVar62;
                            if (iVar62 < 0) {
                              *(uint32_t *)(arg1 + 0x6f0) = 0;
                            LAB_005adb44:
                              if ((arg1[0x6dc] != (stb_vorbis)0x0) || (*(int *)(arg1 + 0x6e4) == 0))
                                goto LAB_005ad902;
                              goto LAB_005ac870;
                            }
                          }
                          if ((int)(uVar58 * 2) < (int)(uVar63 + iVar59 * 2 + iVar21)) {
                            iVar21 = uVar63 + (uVar58 - iVar59) * 2;
                          }
                          iVar61 = *(int *)pCVar54 * iVar61;
                          if (pCVar54[0x1a] == (Codebook)0x0) {
                            bVar64 = uVar63 == 1;
                            iVar62 = 1;
                            if (bVar64) {
                              lVar32 = (long)iVar59;
                              iVar59 = iVar59 + 1;
                              pfVar25 = (float *)(local_d0 + lVar32 * 4);
                              *pfVar25 = *pfVar25 +
                                         *(float *)(*(long *)(pCVar54 + 0x20) + (long)iVar61 * 4);
                              iVar62 = 2;
                            }
                            uVar19 = (uint)bVar64;
                            if (iVar62 < iVar21) {
                              lVar24 = (long)iVar59 * 4;
                              lVar32 = 0;
                              lVar55 = ((long)(int)(uint)bVar64 + (long)iVar61) * 4;
                              uVar63 = uVar19;
                              do {
                                uVar19 = uVar63 + 2;
                                iVar59 = iVar59 + 1;
                                *(float *)((long)local_d8 + lVar32 + lVar24) =
                                    *(float *)((long)local_d8 + lVar32 + lVar24) +
                                    *(float *)(*(long *)(pCVar54 + 0x20) + lVar55);
                                pfVar25 = (float *)(*(long *)(pCVar54 + 0x20) + 4 + lVar55);
                                iVar62 = uVar63 + 3;
                                lVar55 = lVar55 + 8;
                                *(float *)(lVar24 + local_d0 + lVar32) =
                                    *(float *)(lVar24 + local_d0 + lVar32) + *pfVar25;
                                lVar32 = lVar32 + 4;
                                uVar63 = uVar19;
                              } while (iVar62 < iVar21);
                            }
                            uVar63 = 0;
                            if ((int)uVar19 < iVar21) {
                              uVar63 = 1;
                              local_d8[iVar59] =
                                  local_d8[iVar59] + *(float *)(*(long *)(pCVar54 + 0x20) +
                                                                (long)(int)(uVar19 + iVar61) * 4);
                            }
                          } else if (0 < iVar21) {
                            lVar32 = 0;
                            fVar72 = 0.0;
                            do {
                              fVar72 = fVar72 + *(float *)(*(long *)(pCVar54 + 0x20) + lVar32 +
                                                           (long)iVar61 * 4);
                              (&local_d8)[(int)uVar63][iVar59] =
                                  (&local_d8)[(int)uVar63][iVar59] + fVar72;
                              if (uVar63 == 1) {
                                iVar59 = iVar59 + 1;
                              }
                              uVar63 = (uint)(uVar63 != 1);
                              lVar32 = lVar32 + 4;
                            } while (lVar32 != (ulong)(iVar21 - 1) * 4 + 4);
                          }
                        }
                      }
                      iVar46 = iVar46 + 1;
                      iVar60 = (int)local_4b10 + 1;
                      local_4b10 = local_4b10 + 1;
                    } while (iVar60 < iVar20 && iVar46 < (int)uVar57);
                  }
                  local_4ae8 = local_4ae8 + 8;
                  if ((int)uVar57 <= iVar46)
                    break;
                  iVar59 = piVar45[2];
                } while (true);
              }
            } else if (0 < (int)uVar57) {
              iVar46 = piVar45[2];
              lVar32 = 0;
              iVar59 = 0;
              do {
                iVar46 = iVar46 * iVar59 + *piVar45;
                local_58[0] = iVar46 % iVar18;
                local_48[0] = iVar46 / iVar18;
                if (iVar17 == 0) {
                  pCVar54 = (Codebook *)((ulong) * (byte *)((long)piVar45 + 0xd) * 0x848 +
                                         *(long *)(arg1 + 0xb0));
                  if (*(int *)(arg1 + 0x6f0) < 10) {
                    if (*(int *)(arg1 + 0x6f0) == 0) {
                      *(uint32_t *)(arg1 + 0x6ec) = 0;
                    }
                    do {
                      sVar15 = arg1[0x6dc];
                      if (*(int *)(arg1 + 0x6e4) == 0) {
                        if (sVar15 == (stb_vorbis)0x0) {
                          iVar46 = next_segment(arg1);
                          if (iVar46 == 0)
                            goto LAB_005ad35a;
                          sVar15 = arg1[0x6dc];
                        }
                      } else if (sVar15 == (stb_vorbis)0x0)
                        goto LAB_005ad35a;
                      pbVar44 = *(byte **)(arg1 + 0x28);
                      *(int *)(arg1 + 0x6f4) = *(int *)(arg1 + 0x6f4) + 1;
                      arg1[0x6dc] = (stb_vorbis)((char)sVar15 + -1);
                      if (pbVar44 == (byte *)0x0) {
                        uVar63 = fgetc(*(FILE **)(arg1 + 0x18));
                        if (uVar63 == 0xffffffff)
                          goto LAB_005ade3c;
                        iVar46 = *(int *)(arg1 + 0x6f0);
                        iVar60 = (uVar63 & 0xff) << ((byte)iVar46 & 0x1f);
                      } else if (pbVar44 < *(byte **)(arg1 + 0x38)) {
                        bVar5 = *pbVar44;
                        iVar46 = *(int *)(arg1 + 0x6f0);
                        *(byte **)(arg1 + 0x28) = pbVar44 + 1;
                        iVar60 = (uint)bVar5 << ((byte)iVar46 & 0x1f);
                      } else {
                      LAB_005ade3c:
                        *(uint32_t *)(arg1 + 0x90) = 1;
                        iVar46 = *(int *)(arg1 + 0x6f0);
                        iVar60 = 0;
                      }
                      *(int *)(arg1 + 0x6f0) = iVar46 + 8;
                      uVar63 = *(int *)(arg1 + 0x6ec) + iVar60;
                      *(uint *)(arg1 + 0x6ec) = uVar63;
                    } while (iVar46 + 8 < 0x19);
                  } else {
                  LAB_005ad35a:
                    uVar63 = *(uint *)(arg1 + 0x6ec);
                  }
                  iVar46 = (int)*(short *)(pCVar54 + (ulong)(uVar63 & 0x3ff) * 2 + 0x30);
                  if (iVar46 < 0) {
                    iVar46 = codebook_decode_scalar_raw(arg1, pCVar54);
                  } else {
                    bVar5 = *(byte *)(*(long *)(pCVar54 + 8) + (long)iVar46);
                    *(uint *)(arg1 + 0x6ec) = uVar63 >> (bVar5 & 0x1f);
                    iVar60 = *(int *)(arg1 + 0x6f0) - (uint)bVar5;
                    *(int *)(arg1 + 0x6f0) = iVar60;
                    if (iVar60 < 0) {
                      *(uint32_t *)(arg1 + 0x6f0) = 0;
                      iVar46 = -1;
                    }
                  }
                  if (pCVar54[0x1b] != (Codebook)0x0) {
                    iVar46 = *(int *)(*(long *)(pCVar54 + 0x838) + (long)iVar46 * 4);
                  }
                  if (iVar46 == -1)
                    goto LAB_005ac870;
                  *(uint64_t *)(local_49d8[0] + lVar32) =
                      *(uint64_t *)(*(long *)(piVar45 + 4) + (long)iVar46 * 8);
                }
                lVar55 = local_49d8[0];
                if ((iVar59 < (int)uVar57) && (0 < iVar20)) {
                  lVar24 = 0;
                  do {
                    iVar46 = piVar45[2];
                    iVar60 = (int)*(
                        short *)((ulong) * (byte *)(*(long *)(lVar55 + lVar32) + lVar24) * 0x10 +
                                 *(long *)(piVar45 + 6) + (long)iVar17 * 2);
                    if (iVar60 < 0) {
                      iVar46 = *piVar45 + iVar46 + iVar46 * iVar59;
                      local_58[0] = iVar46 % iVar18;
                      local_48[0] = iVar46 / iVar18;
                    } else {
                      iVar46 = codebook_decode_deinterleave_repeat(
                          arg1, (Codebook *)((long)iVar60 * 0x848 + *(long *)(arg1 + 0xb0)),
                          &local_d8, iVar18, local_58, local_48, uVar58, iVar46);
                      if (iVar46 == 0)
                        goto LAB_005ac870;
                    }
                    iVar46 = (int)lVar24;
                    iVar59 = iVar59 + 1;
                    lVar24 = lVar24 + 1;
                  } while (iVar46 + 1 < iVar20 && iVar59 < (int)uVar57);
                }
                lVar32 = lVar32 + 8;
                if ((int)uVar57 <= iVar59)
                  break;
                iVar46 = piVar45[2];
              } while (true);
            }
            iVar17 = iVar17 + 1;
          } while (iVar17 != 8);
        }
      } else {
        iVar17 = 0;
        lVar32 = (ulong)(iVar18 - 1) + 1;
        do {
          local_4ae8 = 0;
          iVar46 = 0;
          if (0 < (int)uVar57) {
            do {
              if ((iVar17 == 0) && (iVar18 != 0)) {
                lVar55 = 0;
                do {
                  if (local_1d8[lVar55] == '\0') {
                    pCVar54 = (Codebook *)((ulong) * (byte *)((long)piVar45 + 0xd) * 0x848 +
                                           *(long *)(arg1 + 0xb0));
                    if (*(int *)(arg1 + 0x6f0) < 10) {
                      if (*(int *)(arg1 + 0x6f0) == 0) {
                        *(uint32_t *)(arg1 + 0x6ec) = 0;
                      }
                      do {
                        sVar15 = arg1[0x6dc];
                        if (*(int *)(arg1 + 0x6e4) == 0) {
                          if (sVar15 == (stb_vorbis)0x0) {
                            iVar59 = next_segment(arg1);
                            if (iVar59 == 0)
                              goto LAB_005ace42;
                            sVar15 = arg1[0x6dc];
                          }
                        } else if (sVar15 == (stb_vorbis)0x0)
                          goto LAB_005ace42;
                        pbVar44 = *(byte **)(arg1 + 0x28);
                        *(int *)(arg1 + 0x6f4) = *(int *)(arg1 + 0x6f4) + 1;
                        arg1[0x6dc] = (stb_vorbis)((char)sVar15 + -1);
                        if (pbVar44 == (byte *)0x0) {
                          uVar63 = fgetc(*(FILE **)(arg1 + 0x18));
                          if (uVar63 == 0xffffffff)
                            goto LAB_005acf78;
                          iVar59 = *(int *)(arg1 + 0x6f0);
                          iVar60 = (uVar63 & 0xff) << ((byte)iVar59 & 0x1f);
                        } else if (pbVar44 < *(byte **)(arg1 + 0x38)) {
                          bVar5 = *pbVar44;
                          iVar59 = *(int *)(arg1 + 0x6f0);
                          *(byte **)(arg1 + 0x28) = pbVar44 + 1;
                          iVar60 = (uint)bVar5 << ((byte)iVar59 & 0x1f);
                        } else {
                        LAB_005acf78:
                          *(uint32_t *)(arg1 + 0x90) = 1;
                          iVar59 = *(int *)(arg1 + 0x6f0);
                          iVar60 = 0;
                        }
                        *(int *)(arg1 + 0x6f0) = iVar59 + 8;
                        uVar63 = *(int *)(arg1 + 0x6ec) + iVar60;
                        *(uint *)(arg1 + 0x6ec) = uVar63;
                      } while (iVar59 + 8 < 0x19);
                    } else {
                    LAB_005ace42:
                      uVar63 = *(uint *)(arg1 + 0x6ec);
                    }
                    iVar59 = (int)*(short *)(pCVar54 + (ulong)(uVar63 & 0x3ff) * 2 + 0x30);
                    if (iVar59 < 0) {
                      iVar59 = codebook_decode_scalar_raw(arg1, pCVar54);
                    } else {
                      bVar5 = *(byte *)(*(long *)(pCVar54 + 8) + (long)iVar59);
                      *(uint *)(arg1 + 0x6ec) = uVar63 >> (bVar5 & 0x1f);
                      iVar60 = *(int *)(arg1 + 0x6f0) - (uint)bVar5;
                      *(int *)(arg1 + 0x6f0) = iVar60;
                      if (iVar60 < 0) {
                        *(uint32_t *)(arg1 + 0x6f0) = 0;
                        iVar59 = -1;
                      }
                    }
                    if (pCVar54[0x1b] != (Codebook)0x0) {
                      iVar59 = *(int *)(*(long *)(pCVar54 + 0x838) + (long)iVar59 * 4);
                    }
                    if (iVar59 == -1)
                      goto LAB_005ac870;
                    *(uint64_t *)(local_49d8[lVar55] + local_4ae8) =
                        *(uint64_t *)(*(long *)(piVar45 + 4) + (long)iVar59 * 8);
                  }
                  lVar55 = lVar55 + 1;
                } while (lVar55 != lVar32);
              }
              if ((iVar46 < (int)uVar57) && (local_4ae0 = 0, 0 < iVar20)) {
                do {
                  if (iVar18 != 0) {
                    lVar55 = 0;
                    do {
                      if ((local_1d8[lVar55] == '\0') &&
                          (sVar9 =
                               *(short *)((ulong) *
                                              (byte *)(*(long *)(local_49d8[lVar55] + local_4ae8) +
                                                       local_4ae0) *
                                              0x10 +
                                          *(long *)(piVar45 + 6) + (long)iVar17 * 2),
                           -1 < sVar9)) {
                        iVar59 = piVar45[2];
                        pfVar25 = (&local_d8)[lVar55];
                        pCVar54 = (Codebook *)((long)(int)sVar9 * 0x848 + *(long *)(arg1 + 0xb0));
                        iVar60 = iVar46 * iVar59 + *piVar45;
                        if (sVar35 == 0) {
                          iVar21 = iVar59 / *(int *)pCVar54;
                          if (0 < iVar21) {
                            pfVar25 = pfVar25 + iVar60;
                            iVar61 = 0;
                            pfVar56 = pfVar25;
                            do {
                              iVar62 = codebook_decode_start(arg1, pCVar54, (int)pfVar25);
                              if (iVar62 < 0)
                                goto LAB_005ac870;
                              uVar63 = *(uint *)pCVar54;
                              pfVar25 = (float *)(ulong)uVar63;
                              uVar19 = (iVar59 - iVar60) - iVar61;
                              if ((int)uVar63 <= (int)uVar19) {
                                uVar19 = uVar63;
                              }
                              if (0 < (int)uVar19) {
                                fVar72 = 0.0;
                                pfVar25 = (float *)0x0;
                                pfVar33 = pfVar56;
                                do {
                                  fVar65 =
                                      *(float *)((long)pfVar25 + (long)(int)(iVar62 * uVar63) * 4 +
                                                 *(long *)(pCVar54 + 0x20)) +
                                      fVar72;
                                  *pfVar33 = *pfVar33 + fVar65;
                                  if (pCVar54[0x1a] != (Codebook)0x0) {
                                    fVar72 = fVar65;
                                  }
                                  pfVar25 = pfVar25 + 1;
                                  pfVar33 = pfVar33 + iVar21;
                                } while (pfVar25 != (float *)((ulong)(uVar19 - 1) * 4 + 4));
                              }
                              iVar61 = iVar61 + 1;
                              pfVar56 = pfVar56 + 1;
                            } while (iVar61 < iVar21);
                          }
                        } else {
                          iVar21 = 0;
                          iVar61 = iVar21;
                          if (0 < iVar59) {
                            do {
                              iVar62 = codebook_decode_start(arg1, pCVar54, iVar21);
                              if (iVar62 < 0)
                                goto LAB_005ac870;
                              iVar21 = *(int *)pCVar54;
                              iVar43 = iVar59 - iVar61;
                              if (iVar21 < iVar59 - iVar61) {
                                iVar43 = iVar21;
                              }
                              if (pCVar54[0x1a] == (Codebook)0x0) {
                                if (0 < iVar43) {
                                  lVar24 = 0;
                                  do {
                                    *(float *)((long)pfVar25 + lVar24 + (long)iVar60 * 4) =
                                        *(float *)((long)pfVar25 + lVar24 + (long)iVar60 * 4) +
                                        *(float *)(*(long *)(pCVar54 + 0x20) + lVar24 +
                                                   (long)(iVar62 * iVar21) * 4);
                                    lVar24 = lVar24 + 4;
                                  } while (lVar24 != (ulong)(iVar43 - 1) * 4 + 4);
                                LAB_005ad25f:
                                  iVar21 = *(int *)pCVar54;
                                }
                              } else if (0 < iVar43) {
                                fVar72 = 0.0;
                                lVar24 = 0;
                                do {
                                  fVar72 = fVar72 + *(float *)(*(long *)(pCVar54 + 0x20) + lVar24 +
                                                               (long)(iVar62 * iVar21) * 4);
                                  *(float *)((long)pfVar25 + lVar24 + (long)iVar60 * 4) =
                                      *(float *)((long)pfVar25 + lVar24 + (long)iVar60 * 4) +
                                      fVar72;
                                  lVar24 = lVar24 + 4;
                                  fVar72 = fVar72 + *(float *)(pCVar54 + 0x10);
                                } while (lVar24 != (ulong)(iVar43 - 1) * 4 + 4);
                                goto LAB_005ad25f;
                              }
                              iVar61 = iVar61 + iVar21;
                              iVar60 = iVar60 + iVar21;
                            } while (iVar61 < iVar59);
                          }
                        }
                      }
                      lVar55 = lVar55 + 1;
                    } while (lVar55 != lVar32);
                  }
                  iVar46 = iVar46 + 1;
                  iVar59 = (int)local_4ae0 + 1;
                  local_4ae0 = local_4ae0 + 1;
                } while (iVar59 < iVar20 && iVar46 < (int)uVar57);
              }
              local_4ae8 = local_4ae8 + 8;
            } while (iVar46 < (int)uVar57);
          }
          iVar17 = iVar17 + 1;
        } while (iVar17 != 8);
      }
    LAB_005ac870:
      local_4a90 = local_4a90 + 1;
      local_4aa0 = (ushort *)((long)local_4aa0 + 1);
      *(uint32_t *)(arg1 + 0x8c) = uVar10;
    } while ((int)local_4a90 < (int)(uint)(byte)puVar23[8]);
    uVar8 = *puVar23;
  }
  uVar57 = uVar8 - 1;
  if (uVar57 != 0xffffffff) {
    lVar32 = (long)(int)uVar57 * 3;
    do {
      lVar55 = *(long *)(arg1 + (ulong) * (byte *)(lVar32 + *(long *)(puVar23 + 4)) * 8 + 0x370);
      pfVar25 =
          *(float **)(arg1 + (ulong)((byte *)(lVar32 + *(long *)(puVar23 + 4)))[1] * 8 + 0x370);
      if (0 < (int)uVar58) {
        lVar24 = 0;
        do {
          fVar72 = *(float *)(lVar55 + lVar24 * 4);
          fVar65 = *pfVar25;
          fVar66 = fVar72;
          if (0.0 < fVar72) {
            if (fVar65 <= 0.0) {
              fVar66 = fVar72 + fVar65;
            } else {
              fVar72 = fVar72 - fVar65;
            }
          } else if (fVar65 <= 0.0) {
            fVar66 = fVar72 - fVar65;
          } else {
            fVar72 = fVar65 + fVar72;
          }
          *(float *)(lVar55 + lVar24 * 4) = fVar66;
          lVar24 = lVar24 + 1;
          *pfVar25 = fVar72;
          pfVar25 = pfVar25 + 1;
        } while ((int)lVar24 < (int)uVar58);
      }
      lVar32 = lVar32 + -3;
    } while (lVar32 != ((long)(int)uVar57 - (ulong)uVar57) * 3 + -3);
  }
  if (0 < *(int *)(arg1 + 4)) {
    lVar32 = (long)(int)uVar58;
    local_4b08 = arg1 + 0x370;
    local_4b10 = 0;
    do {
      if (local_5d8[local_4b10] == 0) {
        psVar13 = *(short **)(local_4b08 + 0x188);
        lVar55 = *(long *)local_4b08;
        uVar38 = (ulong) *
                 (byte *)((long)puVar23 +
                          (ulong) * (byte *)(local_4b10 * 3 + *(long *)(puVar23 + 4) + 2) + 0x11);
        if (*(short *)(arg1 + uVar38 * 2 + 0xbc) == 0) {
          *(uint32_t *)(arg1 + 0x94) = 0x15;
        } else {
          lVar24 = uVar38 * 0x63c + *(long *)(arg1 + 0x140);
          iVar18 = (int)*psVar13 * (uint) * (byte *)(lVar24 + 0x634);
          iVar17 = *(int *)(lVar24 + 0x638);
          if (iVar17 < 2) {
            uVar57 = 0;
          } else {
            lVar51 = 0;
            uVar57 = 0;
            do {
              uVar38 = (ulong) * (byte *)(lVar24 + 0x347 + lVar51);
              sVar35 = psVar13[uVar38];
              if (-1 < sVar35) {
                uVar8 = *(ushort *)(lVar24 + 0x152 + uVar38 * 2);
                uVar30 = (uint)uVar8;
                iVar20 = (int)sVar35 * (uint) * (byte *)(lVar24 + 0x634);
                iVar17 = uVar30 - uVar57;
                uVar50 = iVar20 - iVar18;
                uVar63 = (int)uVar50 / iVar17;
                uVar19 = uVar63 - 1;
                if (-1 < (int)uVar50) {
                  uVar19 = uVar63 + 1;
                }
                pfVar25 = (float *)(lVar55 + (long)(int)uVar57 * 4);
                uVar52 = uVar58;
                if (uVar30 == uVar58 || (int)(uint)uVar8 < (int)uVar58) {
                  uVar52 = uVar30;
                }
                *pfVar25 = *pfVar25 * *(float *)(inverse_db_table + (long)iVar18 * 4);
                if ((int)(uVar57 + 1) < (int)uVar52) {
                  iVar46 = 0;
                  lVar3 = lVar55 + (long)(int)(uVar57 + 1) * 4;
                  lVar39 = 0;
                  do {
                    iVar59 = ((((int)uVar50 >> 0x1f ^ uVar50) - ((int)uVar50 >> 0x1f)) -
                              (((int)uVar63 >> 0x1f ^ uVar63) - ((int)uVar63 >> 0x1f)) * iVar17) +
                             iVar46;
                    uVar14 = uVar63;
                    if (iVar17 <= iVar59) {
                      uVar14 = uVar19;
                    }
                    iVar18 = iVar18 + uVar14;
                    iVar46 = iVar59 - iVar17;
                    if (iVar59 < iVar17) {
                      iVar46 = iVar59;
                    }
                    *(float *)(lVar3 + lVar39) = *(float *)(lVar3 + lVar39) *
                                                 *(float *)(inverse_db_table + (long)iVar18 * 4);
                    lVar39 = lVar39 + 4;
                  } while (lVar39 != (ulong)((-2 - uVar57) + uVar52) * 4 + 4);
                }
                iVar17 = *(int *)(lVar24 + 0x638);
                iVar18 = iVar20;
                uVar57 = uVar30;
              }
              iVar20 = (int)lVar51;
              lVar51 = lVar51 + 1;
            } while (iVar20 + 2 < iVar17);
          }
          if ((int)uVar57 < (int)uVar58) {
            fVar72 = *(float *)(inverse_db_table + (long)iVar18 * 4);
            uVar19 = ~uVar57 + uVar58 + 1;
            lVar24 = lVar55 + (long)(int)uVar57 * 4;
            uVar63 = -(((uint)lVar24 & 0xf) >> 2) & 3;
            if (uVar19 < uVar63) {
              uVar63 = uVar19;
            }
            if (uVar63 != 0) {
              lVar51 = 0;
              do {
                uVar57 = uVar57 + 1;
                *(float *)(lVar24 + lVar51 * 4) = *(float *)(lVar24 + lVar51 * 4) * fVar72;
                lVar51 = lVar51 + 1;
              } while ((uint)lVar51 < uVar63);
              if (uVar19 == uVar63)
                goto LAB_005acd2f;
            }
            uVar50 = uVar19 - uVar63 >> 2;
            if (uVar50 != 0) {
              lVar24 = lVar24 + (ulong)uVar63 * 4;
              lVar51 = 0;
              uVar30 = 0;
              do {
                pfVar25 = (float *)(lVar24 + lVar51);
                fVar65 = pfVar25[1];
                fVar66 = pfVar25[2];
                fVar68 = pfVar25[3];
                uVar30 = uVar30 + 1;
                pfVar56 = (float *)(lVar24 + lVar51);
                *pfVar56 = *pfVar25 * fVar72;
                pfVar56[1] = fVar65 * fVar72;
                pfVar56[2] = fVar66 * fVar72;
                pfVar56[3] = fVar68 * fVar72;
                lVar51 = lVar51 + 0x10;
              } while (uVar30 < uVar50);
              uVar57 = uVar57 + uVar50 * 4;
              if (uVar50 * 4 - (uVar19 - uVar63) == 0)
                goto LAB_005acd2f;
            }
            pfVar25 = (float *)(lVar55 + (long)(int)uVar57 * 4);
            do {
              uVar57 = uVar57 + 1;
              *pfVar25 = *pfVar25 * fVar72;
              pfVar25 = pfVar25 + 1;
            } while ((int)uVar57 < (int)uVar58);
          }
        }
      } else {
        memset(*(void **)local_4b08, 0, lVar32 * 4);
      }
    LAB_005acd2f:
      local_4b08 = local_4b08 + 8;
      iVar17 = (int)local_4b10 + 1;
      local_4b10 = local_4b10 + 1;
    } while (iVar17 < *(int *)(arg1 + 4));
    if (0 < *(int *)(arg1 + 4)) {
      uVar10 = *(uint32_t *)(arg1 + 0x8c);
      iVar18 = (int)uVar31 >> 2;
      iVar17 = (int)uVar31 >> 3;
      uVar38 = lVar32 * 4 - 0x20;
      iVar20 = uVar58 - 1;
      iVar46 = (int)uVar31 >> 4;
      iVar59 = -iVar46;
      iVar60 = (int)uVar31 >> 5;
      local_49e8 = (float)(iVar20 + iVar17 * -3);
      local_4a90 = 0;
      pfVar56 = (float *)((long)local_49d8 + (lVar32 + -4) * 4);
      pfVar33 = (float *)((long)local_49d8 + (lVar32 + -8) * 4);
      pfVar25 = (float *)((long)local_49d8 + (long)(int)(uVar58 - 2) * 4);
      local_49e0 = (float *)((long)local_49d8 + (long)iVar18 * 4);
      local_4a80 = arg1;
      do {
        uVar41 = (ulong)(byte)*arg3;
        pfVar53 = *(float **)(local_4a80 + 0x370);
        pfVar49 = pfVar53 + lVar32;
        pfVar40 = *(float **)(arg1 + uVar41 * 8 + 0x580);
        pfVar26 = pfVar40;
        pfVar28 = pfVar53;
        pfVar27 = pfVar25;
        if (pfVar53 != pfVar49) {
          do {
            fVar72 = *pfVar26;
            fVar65 = pfVar26[1];
            fVar66 = *pfVar28;
            fVar68 = pfVar28[2];
            pfVar28 = pfVar28 + 4;
            pfVar27[1] = fVar72 * fVar66 - fVar65 * fVar68;
            *pfVar27 = fVar68 * fVar72 + fVar65 * fVar66;
            pfVar27 = pfVar27 + -2;
            pfVar26 = pfVar26 + 2;
          } while (pfVar49 != pfVar28);
          uVar29 = (ulong)((long)pfVar49 - (long)(pfVar53 + 4)) >> 4;
          pfVar27 = (float *)((long)local_49d8 + uVar29 * -8 + (long)(int)(uVar58 - 2) * 4 + -8);
          pfVar26 = pfVar40 + uVar29 * 2 + 2;
        }
        if (local_49d8 <= pfVar27) {
          pfVar28 = pfVar53 + lVar32 + -3;
          do {
            pfVar27[1] = pfVar26[1] * *pfVar28 - pfVar28[2] * *pfVar26;
            pfVar34 = pfVar28 + 2;
            fVar72 = *pfVar28;
            pfVar28 = pfVar28 + -4;
            fVar65 = *pfVar26;
            pfVar47 = pfVar26 + 1;
            pfVar26 = pfVar26 + 2;
            *pfVar27 = (float)((uint)*pfVar34 ^ DAT_005be6f0 /* R:u32=2147483648 */) * *pfVar47 -
                       fVar72 * fVar65;
            pfVar27 = pfVar27 + -2;
          } while (local_49d8 <= pfVar27);
        }
        pfVar27 = pfVar40 + lVar32 + -8;
        if (!CARRY8((ulong)pfVar40, uVar38)) {
          pfVar47 = pfVar53 + iVar18;
          pfVar26 = pfVar53;
          pfVar28 = (float *)local_49d8;
          pfVar34 = local_49e0;
          do {
            fVar72 = *pfVar34;
            fVar65 = *pfVar28;
            fVar68 = fVar72 - fVar65;
            fVar66 = pfVar34[1] - pfVar28[1];
            pfVar47[1] = pfVar34[1] + pfVar28[1];
            *pfVar47 = fVar65 + fVar72;
            pfVar26[1] = pfVar27[4] * fVar66 - pfVar27[5] * fVar68;
            *pfVar26 = fVar66 * pfVar27[5] + fVar68 * pfVar27[4];
            pfVar1 = pfVar34 + 2;
            fVar72 = pfVar34[3];
            fVar65 = pfVar28[3];
            pfVar34 = pfVar34 + 4;
            pfVar2 = pfVar28 + 2;
            pfVar28 = pfVar28 + 4;
            fVar68 = *pfVar1 - *pfVar2;
            fVar66 = fVar72 - fVar65;
            pfVar47[2] = *pfVar2 + *pfVar1;
            pfVar47[3] = fVar72 + fVar65;
            pfVar47 = pfVar47 + 4;
            pfVar26[3] = *pfVar27 * fVar66 - pfVar27[1] * fVar68;
            pfVar1 = pfVar27 + 1;
            fVar72 = *pfVar27;
            pfVar27 = pfVar27 + -8;
            pfVar26[2] = fVar66 * *pfVar1 + fVar68 * fVar72;
            pfVar26 = pfVar26 + 4;
          } while (pfVar40 <= pfVar27);
        }
        if (uVar31 < 0x4000) {
          if (uVar31 < 0x10) {
            iVar21 = (char)ilog(int)::log2_4[(int)uVar31] + -7;
            iVar61 = (char)ilog(int)::log2_4[(int)uVar31] + -4 >> 1;
          } else if (uVar31 < 0x200) {
            iVar21 = (char)ilog(int)::log2_4[iVar60] + -2;
            iVar61 = (char)ilog(int)::log2_4[iVar60] + 1 >> 1;
          } else {
            iVar21 = (char)ilog(int)::log2_4[(int)uVar31 >> 10] + 3;
            iVar61 = (char)ilog(int)::log2_4[(int)uVar31 >> 10] + 6 >> 1;
          }
        } else if (uVar31 < 0x1000000) {
          if (uVar31 < 0x80000) {
            iVar21 = (char)ilog(int)::log2_4[(int)uVar31 >> 0xf] + 8;
            iVar61 = (char)ilog(int)::log2_4[(int)uVar31 >> 0xf] + 0xb >> 1;
          } else {
            iVar21 = (char)ilog(int)::log2_4[(int)uVar31 >> 0x14] + 0xd;
            iVar61 = (char)ilog(int)::log2_4[(int)uVar31 >> 0x14] + 0x10 >> 1;
          }
        } else if (uVar31 < 0x20000000) {
          iVar21 = (char)ilog(int)::log2_4[(int)uVar31 >> 0x19] + 0x12;
          iVar61 = (char)ilog(int)::log2_4[(int)uVar31 >> 0x19] + 0x15 >> 1;
        } else {
          iVar21 = -7;
          iVar61 = -2;
          if (-1 < (int)uVar31) {
            iVar21 = (char)ilog(int)::log2_4[(int)uVar31 >> 0x1e] + 0x17;
            iVar61 = (char)ilog(int)::log2_4[(int)uVar31 >> 0x1e] + 0x1a >> 1;
          }
        }
        imdct_step3_iter0_loop(iVar46, pfVar53, iVar20, -iVar17, pfVar40);
        imdct_step3_iter0_loop(iVar46, pfVar53, iVar20 - iVar18, -iVar17, pfVar40);
        imdct_step3_inner_r_loop(iVar60, pfVar53, iVar20, iVar59, pfVar40, 0x10);
        imdct_step3_inner_r_loop(iVar60, pfVar53, iVar20 - iVar17, iVar59, pfVar40, 0x10);
        imdct_step3_inner_r_loop(iVar60, pfVar53, iVar20 + iVar17 * -2, iVar59, pfVar40, 0x10);
        imdct_step3_inner_r_loop(iVar60, pfVar53, (int)local_49e8, iVar59, pfVar40, 0x10);
        local_4b08._0_4_ = 2;
        while ((int)local_4b08 < iVar61) {
          while (true) {
            local_4b08._0_4_ = (int)local_4b08 + 1;
            iVar62 = 1 << ((byte)local_4b08 & 0x1f);
            if (iVar62 < 1)
              break;
            iVar42 = 0;
            iVar22 = (int)uVar31 >> ((byte)local_4b08 + 1 & 0x1f);
            iVar43 = iVar20;
            do {
              iVar42 = iVar42 + 1;
              imdct_step3_inner_r_loop((int)uVar31 >> ((byte)local_4b08 + 3 & 0x1f), pfVar53,
                                       iVar43, -(iVar22 >> 1), pfVar40,
                                       1 << ((byte)local_4b08 + 2 & 0x1f));
              iVar43 = iVar43 - iVar22;
            } while (iVar42 != iVar62);
            if (iVar61 <= (int)local_4b08)
              goto LAB_005aec25;
          }
        }
      LAB_005aec25:
        iVar62 = 2;
        if (1 < iVar61) {
          iVar62 = iVar61;
        }
        pfVar27 = pfVar53 + iVar20;
        while (iVar62 < iVar21) {
          iVar61 = iVar62 + 1;
          iVar43 = (int)uVar31 >> ((char)iVar62 + 6U & 0x1f);
          local_4b10._0_1_ = (byte)iVar61;
          iVar22 = 1 << ((byte)local_4b10 & 0x1f);
          iVar62 = iVar61;
          if (0 < iVar43) {
            iVar61 = (int)uVar31 >> ((byte)local_4b10 + 1 & 0x1f);
            iVar42 = 1 << ((byte)local_4b10 + 2 & 0x1f);
            pfVar26 = pfVar40;
            pfVar28 = pfVar27;
            do {
              fVar72 = *pfVar26;
              fVar65 = pfVar26[1];
              fVar66 = pfVar26[iVar42];
              fVar68 = pfVar26[(long)iVar42 + 1];
              fVar80 = pfVar26[iVar42 * 2];
              fVar70 = pfVar26[(long)(iVar42 * 2) + 1];
              fVar69 = pfVar26[iVar42 * 3];
              fVar71 = pfVar26[(long)(iVar42 * 3) + 1];
              if (0 < iVar22) {
                pfVar34 = pfVar28 + -(iVar61 >> 1);
                pfVar47 = pfVar28;
                iVar48 = iVar22;
                do {
                  fVar67 = *pfVar47 - *pfVar34;
                  fVar76 = pfVar47[-1] - pfVar34[-1];
                  *pfVar47 = *pfVar47 + *pfVar34;
                  pfVar47[-1] = pfVar47[-1] + pfVar34[-1];
                  pfVar34[-1] = fVar67 * fVar65 + fVar76 * fVar72;
                  *pfVar34 = fVar67 * fVar72 - fVar76 * fVar65;
                  fVar67 = pfVar47[-2] - pfVar34[-2];
                  fVar76 = pfVar47[-3] - pfVar34[-3];
                  pfVar47[-2] = pfVar47[-2] + pfVar34[-2];
                  pfVar47[-3] = pfVar47[-3] + pfVar34[-3];
                  pfVar34[-3] = fVar67 * fVar68 + fVar76 * fVar66;
                  pfVar34[-2] = fVar67 * fVar66 - fVar76 * fVar68;
                  fVar67 = pfVar47[-4] - pfVar34[-4];
                  fVar76 = pfVar47[-5] - pfVar34[-5];
                  pfVar47[-4] = pfVar47[-4] + pfVar34[-4];
                  pfVar47[-5] = pfVar47[-5] + pfVar34[-5];
                  pfVar34[-5] = fVar67 * fVar70 + fVar76 * fVar80;
                  pfVar34[-4] = fVar67 * fVar80 - fVar76 * fVar70;
                  fVar67 = pfVar47[-6] - pfVar34[-6];
                  fVar76 = pfVar47[-7] - pfVar34[-7];
                  pfVar47[-6] = pfVar47[-6] + pfVar34[-6];
                  pfVar47[-7] = pfVar47[-7] + pfVar34[-7];
                  pfVar47 = pfVar47 + -(long)iVar61;
                  pfVar34[-7] = fVar67 * fVar71 + fVar76 * fVar69;
                  pfVar34[-6] = fVar67 * fVar69 - fVar76 * fVar71;
                  pfVar34 = pfVar34 + -(long)iVar61;
                  iVar48 = iVar48 + -1;
                } while (iVar48 != 0);
              }
              pfVar26 = pfVar26 + iVar42 * 4;
              pfVar28 = pfVar28 + -8;
              iVar43 = iVar43 + -1;
            } while (iVar43 != 0);
          }
        }
        fVar72 = pfVar40[iVar17];
        pfVar26 = pfVar27 + -(long)(iVar60 << 4);
        if (CARRY8((long)(iVar60 << 4) * -4, (ulong)pfVar27)) {
          do {
            fVar70 = pfVar27[-1] - pfVar27[-9];
            fVar75 = pfVar27[-9] + pfVar27[-1];
            fVar71 = *pfVar27 - pfVar27[-8];
            fVar65 = pfVar27[-3] - pfVar27[-0xb];
            fVar80 = pfVar27[-8] + *pfVar27;
            fVar76 = pfVar27[-0xb] + pfVar27[-3];
            fVar66 = pfVar27[-2] - pfVar27[-10];
            fVar67 = pfVar27[-10] + pfVar27[-2];
            fVar73 = pfVar27[-0xc] - pfVar27[-4];
            fVar82 = pfVar27[-4] + pfVar27[-0xc];
            fVar78 = pfVar27[-5] - pfVar27[-0xd];
            fVar77 = pfVar27[-0xd] + pfVar27[-5];
            fVar69 = (fVar65 + fVar66) * fVar72;
            fVar65 = (fVar65 - fVar66) * fVar72;
            fVar66 = pfVar27[-0xe] - pfVar27[-6];
            fVar68 = pfVar27[-7] - pfVar27[-0xf];
            fVar83 = pfVar27[-6] + pfVar27[-0xe];
            fVar74 = pfVar27[-7] + pfVar27[-0xf];
            fVar79 = fVar80 - fVar82;
            fVar82 = fVar82 + fVar80;
            fVar80 = (fVar68 + fVar66) * fVar72;
            fVar81 = fVar83 + fVar67;
            fVar68 = (fVar66 - fVar68) * fVar72;
            fVar67 = fVar67 - fVar83;
            fVar66 = fVar76 + fVar74;
            fVar76 = fVar76 - fVar74;
            *pfVar27 = fVar81 + fVar82;
            pfVar27[-2] = fVar82 - fVar81;
            pfVar27[-4] = fVar76 + fVar79;
            pfVar27[-6] = fVar79 - fVar76;
            fVar76 = fVar75 + fVar77;
            fVar75 = fVar75 - fVar77;
            pfVar27[-1] = fVar66 + fVar76;
            pfVar27[-3] = fVar76 - fVar66;
            pfVar27[-5] = fVar75 - fVar67;
            pfVar27[-7] = fVar67 + fVar75;
            fVar67 = fVar80 + fVar69;
            fVar66 = fVar71 + fVar78;
            fVar69 = fVar69 - fVar80;
            fVar71 = fVar71 - fVar78;
            pfVar27[-8] = fVar67 + fVar66;
            pfVar27[-10] = fVar66 - fVar67;
            fVar66 = fVar65 + fVar68;
            fVar65 = fVar65 - fVar68;
            fVar68 = fVar70 + fVar73;
            fVar70 = fVar70 - fVar73;
            pfVar27[-0xc] = fVar65 + fVar71;
            pfVar27[-0xe] = fVar71 - fVar65;
            pfVar27[-9] = fVar66 + fVar68;
            pfVar27[-0xb] = fVar68 - fVar66;
            pfVar27[-0xd] = fVar70 - fVar69;
            pfVar27[-0xf] = fVar69 + fVar70;
            pfVar27 = pfVar27 + -0x10;
          } while (pfVar26 < pfVar27);
        }
        uVar57 = DAT_005be6f0 /* R:u32=2147483648 */;
        puVar23 = *(ushort **)(arg1 + uVar41 * 8 + 0x5c0);
        pfVar26 = pfVar56;
        for (pfVar27 = &local_49e8 + iVar18; local_49d8 <= pfVar27; pfVar27 = pfVar27 + -4) {
          uVar29 = (ulong)*puVar23;
          pfVar26[3] = pfVar53[uVar29];
          pfVar26[2] = pfVar53[uVar29 + 1];
          pfVar27[3] = pfVar53[uVar29 + 2];
          pfVar27[2] = pfVar53[uVar29 + 3];
          uVar29 = (ulong)puVar23[1];
          puVar23 = puVar23 + 2;
          pfVar26[1] = pfVar53[uVar29];
          *pfVar26 = pfVar53[uVar29 + 1];
          pfVar26 = pfVar26 + -4;
          pfVar27[1] = pfVar53[uVar29 + 2];
          *pfVar27 = pfVar53[uVar29 + 3];
        }
        pfVar27 = *(float **)(arg1 + uVar41 * 8 + 0x5a0);
        pfVar26 = (float *)local_49d8;
        pfVar40 = pfVar56;
        if (local_49d8 < pfVar56) {
          do {
            fVar72 = *pfVar26 - pfVar40[2];
            fVar80 = pfVar40[3] + pfVar26[1];
            fVar68 = *pfVar26 + pfVar40[2];
            fVar66 = pfVar26[1] - pfVar40[3];
            fVar65 = fVar80 * *pfVar27 + fVar72 * pfVar27[1];
            fVar72 = pfVar27[1] * fVar80 - *pfVar27 * fVar72;
            *pfVar26 = fVar65 + fVar68;
            pfVar26[1] = fVar72 + fVar66;
            pfVar40[2] = fVar68 - fVar65;
            pfVar40[3] = fVar72 - fVar66;
            fVar72 = pfVar26[2] - *pfVar40;
            fVar80 = pfVar40[1] + pfVar26[3];
            pfVar28 = pfVar27 + 3;
            pfVar34 = pfVar27 + 2;
            fVar68 = pfVar26[2] + *pfVar40;
            fVar66 = pfVar26[3] - pfVar40[1];
            pfVar27 = pfVar27 + 4;
            fVar65 = fVar80 * *pfVar34 + fVar72 * *pfVar28;
            fVar72 = *pfVar28 * fVar80 - *pfVar34 * fVar72;
            pfVar26[2] = fVar65 + fVar68;
            pfVar26[3] = fVar72 + fVar66;
            pfVar26 = pfVar26 + 4;
            *pfVar40 = fVar68 - fVar65;
            pfVar40[1] = fVar72 - fVar66;
            pfVar40 = pfVar40 + -4;
          } while (pfVar26 < pfVar40);
        }
        if (local_49d8 <= pfVar33) {
          pfVar40 = (float *)(*(long *)(arg1 + uVar41 * 8 + 0x590) + uVar38);
          pfVar28 = pfVar53 + lVar32 + -4;
          pfVar26 = pfVar53 + (long)(int)uVar31 + -4;
          pfVar27 = pfVar33;
          do {
            fVar65 = pfVar40[7] * pfVar27[6] - pfVar40[6] * pfVar27[7];
            fVar72 = (float)((uint)pfVar27[6] ^ uVar57) * pfVar40[6] - pfVar40[7] * pfVar27[7];
            *pfVar53 = fVar65;
            pfVar28[3] = (float)((uint)fVar65 ^ uVar57);
            *pfVar49 = fVar72;
            pfVar26[3] = fVar72;
            fVar65 = pfVar40[5] * pfVar27[4] - pfVar40[4] * pfVar27[5];
            fVar72 = (float)((uint)pfVar27[4] ^ uVar57) * pfVar40[4] - pfVar40[5] * pfVar27[5];
            pfVar53[1] = fVar65;
            pfVar28[2] = (float)((uint)fVar65 ^ uVar57);
            pfVar49[1] = fVar72;
            pfVar26[2] = fVar72;
            fVar65 = pfVar40[3] * pfVar27[2] - pfVar40[2] * pfVar27[3];
            fVar72 = (float)((uint)pfVar27[2] ^ uVar57) * pfVar40[2] - pfVar40[3] * pfVar27[3];
            pfVar53[2] = fVar65;
            pfVar28[1] = (float)((uint)fVar65 ^ uVar57);
            pfVar49[2] = fVar72;
            pfVar26[1] = fVar72;
            pfVar34 = pfVar40 + 1;
            fVar72 = *pfVar40;
            pfVar40 = pfVar40 + -8;
            fVar65 = *pfVar27;
            pfVar47 = pfVar27 + 1;
            pfVar27 = pfVar27 + -8;
            fVar66 = *pfVar34 * fVar65 - fVar72 * *pfVar47;
            fVar72 = (float)((uint)fVar65 ^ uVar57) * fVar72 - *pfVar34 * *pfVar47;
            pfVar53[3] = fVar66;
            pfVar53 = pfVar53 + 4;
            *pfVar28 = (float)((uint)fVar66 ^ uVar57);
            pfVar28 = pfVar28 + -4;
            pfVar49[3] = fVar72;
            pfVar49 = pfVar49 + 4;
            *pfVar26 = fVar72;
            pfVar26 = pfVar26 + -4;
          } while (local_49d8 <= pfVar27);
        }
        local_4a90 = local_4a90 + 1;
        local_4a80 = local_4a80 + 8;
        *(uint32_t *)(arg1 + 0x8c) = uVar10;
      } while ((int)local_4a90 < *(int *)(arg1 + 4));
    }
  }
LAB_005ae487:
  sVar15 = arg1[0x6dc];
LAB_005ae48e:
  if (sVar15 != (stb_vorbis)0x0)
    goto LAB_005ae4b1;
  iVar17 = *(int *)(arg1 + 0x6e4);
  while ((iVar17 == 0 && (iVar17 = next_segment(arg1), iVar17 != 0))) {
    sVar15 = arg1[0x6dc];
  LAB_005ae4b1:
    do {
      uVar38 = *(ulong *)(arg1 + 0x28);
      sVar15 = (stb_vorbis)((char)sVar15 + -1);
      *(int *)(arg1 + 0x6f4) = *(int *)(arg1 + 0x6f4) + 1;
      arg1[0x6dc] = sVar15;
      if (uVar38 == 0) {
        iVar17 = fgetc(*(FILE **)(arg1 + 0x18));
        if (iVar17 == -1) {
          *(uint32_t *)(arg1 + 0x90) = 1;
        }
        goto LAB_005ae487;
      }
      if (uVar38 < *(ulong *)(arg1 + 0x38)) {
        *(ulong *)(arg1 + 0x28) = uVar38 + 1;
        goto LAB_005ae48e;
      }
      *(uint32_t *)(arg1 + 0x90) = 1;
    } while (sVar15 != (stb_vorbis)0x0);
    iVar17 = *(int *)(arg1 + 0x6e4);
  }
  local_4a8c = arg4;
  if (arg1[0x6dd] == (stb_vorbis)0x0) {
    if (*(int *)(arg1 + 0x700) != 0) {
      local_4a8c = arg4 + *(int *)(arg1 + 0x700);
      *(int *)CONCAT44(in_stack_0000000c, arg7) = local_4a8c;
      *(uint32_t *)(arg1 + 0x700) = 0;
    }
    iVar17 = *(int *)(arg1 + 0x57c);
  } else {
    *(uint32_t *)(arg1 + 0x57c) = 1;
    arg1[0x6dd] = (stb_vorbis)0x0;
    *(uint *)(arg1 + 0x578) = -uVar58;
    *(uint *)(arg1 + 0x700) = uVar31 - arg6;
    iVar17 = 1;
  }
  if (*(int *)(arg1 + 0x6e8) == *(int *)(arg1 + 0x6f8)) {
    if (iVar17 == 0) {
      iVar17 = *(int *)(arg1 + 0x6fc);
    } else {
      iVar17 = *(int *)(arg1 + 0x6fc);
      if (((byte)arg1[0x6db] & 4) != 0) {
        uVar57 = *(uint *)(arg1 + 0x578);
        uVar31 = (arg6 - uVar31) + iVar17;
        if (uVar31 < arg6 + uVar57) {
          iVar17 = 0;
          if (uVar57 <= uVar31) {
            iVar17 = uVar31 - uVar57;
          }
          *arg2 = iVar17 + local_4a8c;
          *(int *)(arg1 + 0x578) = *(int *)(arg1 + 0x578) + iVar17 + local_4a8c;
          return 1;
        }
      }
    }
    *(uint32_t *)(arg1 + 0x57c) = 1;
    iVar17 = iVar17 + (local_4a8c - uVar58);
  } else {
    if (iVar17 == 0)
      goto LAB_005ae567;
    iVar17 = *(int *)(arg1 + 0x578);
  }
  *(int *)(arg1 + 0x578) = iVar17 + (local_49e4 - local_4a8c);
LAB_005ae567:
  *arg2 = arg6;
  return 1;
}

/* ======================================================================
 * stb_vorbis_get_frame_float_part_25  (Ghidra `stb_vorbis_get_frame_float.part.25` @ 005af180)
 * Signature: uint8_t stb_vorbis_get_frame_float.part.25(void)
 * Calls: `vorbis_decode_initial`, `vorbis_decode_packet_rest`, `vorbis_finish_frame`
 * Called by: `stb_vorbis_decode_filename`, `stb_vorbis_decode_memory`, `stb_vorbis_get_frame_float`, `stb_vorbis_get_frame_short`, `stb_vorbis_get_frame_short_interleaved`, `stb_vorbis_get_samples_float`, `stb_vorbis_get_samples_float_interleaved`, `stb_vorbis_get_samples_short`, `stb_vorbis_get_samples_short_interleaved`, `vorbis_seek_frame_from_page`
 */
uint64_t stb_vorbis_get_frame_float_part_25(stb_vorbis *arg1, uint *arg2, long *arg3)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  uint64_t uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  int *in_stack_ffffffffffffff90;
  int local_58[3];
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c[3];

  iVar3 = vorbis_decode_initial(arg1, local_58, &local_40, &local_48, local_3c, &local_44);
  if ((iVar3 == 0) ||
      (iVar3 = vorbis_decode_packet_rest(
           arg1, &local_4c, (Mode *)(arg1 + (long)local_44 * 6 + 0x1ec), local_58[0], local_48,
           local_3c[0], (int)local_58, in_stack_ffffffffffffff90),
       iVar3 == 0)) {
    *(uint32_t *)(arg1 + 0x760) = 0;
    *(uint32_t *)(arg1 + 0x75c) = 0;
    return 0;
  }
  uVar4 = vorbis_finish_frame(arg1, local_4c, local_58[0], local_48);
  uVar1 = *(uint *)(arg1 + 4);
  if (0 < (int)uVar1) {
    lVar8 = (long)local_58[0] * 4;
    uVar5 = -(int)(((long)arg1 << 0x3c) >> 0x3f);
    if (uVar1 < uVar5) {
      uVar5 = uVar1;
    }
    if (uVar5 == 0) {
      iVar3 = 0;
    } else {
      *(long *)(arg1 + 0x3f0) = lVar8 + *(long *)(arg1 + 0x370);
      if (uVar1 == uVar5)
        goto LAB_005af305;
      iVar3 = 1;
    }
    uVar9 = uVar1 - uVar5 >> 1;
    if (uVar9 != 0) {
      lVar6 = 0;
      uVar7 = 0;
      do {
        lVar2 = *(long *)(arg1 + lVar6 + (ulong)uVar5 * 8 + 0x370 + 8);
        uVar7 = uVar7 + 1;
        *(long *)(arg1 + lVar6 + (ulong)uVar5 * 8 + 0x3f0) =
            *(long *)(arg1 + lVar6 + (ulong)uVar5 * 8 + 0x370) + lVar8;
        *(long *)(arg1 + lVar6 + (ulong)uVar5 * 8 + 0x3f0 + 8) = lVar2 + lVar8;
        lVar6 = lVar6 + 0x10;
      } while (uVar7 < uVar9);
      iVar3 = iVar3 + uVar9 * 2;
      if (uVar1 - uVar5 == uVar9 * 2)
        goto LAB_005af305;
    }
    do {
      lVar6 = (long)iVar3;
      iVar3 = iVar3 + 1;
      *(long *)(arg1 + lVar6 * 8 + 0x3f0) = *(long *)(arg1 + lVar6 * 8 + 0x370) + lVar8;
    } while (iVar3 < (int)uVar1);
  }
LAB_005af305:
  *(int *)(arg1 + 0x75c) = local_58[0];
  *(int *)(arg1 + 0x760) = local_58[0] + (int)uVar4;
  if (arg2 != (uint *)0x0) {
    *arg2 = uVar1;
  }
  if (arg3 == (long *)0x0) {
    return uVar4;
  }
  *arg3 = (long)(arg1 + 0x3f0);
  return uVar4;
}

/* ======================================================================
 * vorbis_seek_frame_from_page  (Ghidra `vorbis_seek_frame_from_page` @ 005af350)
 * Signature: uint8_t __stdcall vorbis_seek_frame_from_page(stb_vorbis * arg1, uint arg2, uint arg3, uint arg4, int arg5)
 * Calls: `fgetc`, `fseek`, `maybe_start_packet`, `next_segment`, `stb_vorbis_get_frame_float_part_25`, `vorbis_decode_initial`, `vorbis_decode_packet_rest`, `vorbis_finish_frame`
 * Called by: `vorbis_seek_base`
 */
/* vorbis_seek_frame_from_page(stb_vorbis*, unsigned int, unsigned int, unsigned int, int) */

uint64_t vorbis_seek_frame_from_page(stb_vorbis *arg1, uint arg2, uint arg3, uint arg4, int arg5)

{
  stb_vorbis sVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  int *in_stack_ffffffffffffff60;
  int local_8c;
  int local_88[4];
  int local_78[4];
  int local_68[4];
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c[3];

  if (arg1[0x44] == (stb_vorbis)0x0) {
    *(uint32_t *)(arg1 + 0x90) = 0;
    if (*(long *)(arg1 + 0x28) == 0) {
      uVar4 = (ulong)(arg2 + *(int *)(arg1 + 0x20));
      if (((int)arg2 < 0) || (arg2 + *(int *)(arg1 + 0x20) < arg2)) {
        *(uint32_t *)(arg1 + 0x90) = 1;
        uVar4 = 0x7fffffff;
      }
      iVar6 = fseek(*(FILE **)(arg1 + 0x18), uVar4, 0);
      if (iVar6 != 0) {
        *(uint32_t *)(arg1 + 0x90) = 1;
        fseek(*(FILE **)(arg1 + 0x18), (ulong) * (uint *)(arg1 + 0x20), 2);
      }
    } else {
      uVar4 = (ulong)arg2 + *(long *)(arg1 + 0x30);
      if (uVar4 < *(ulong *)(arg1 + 0x38)) {
        *(ulong *)(arg1 + 0x28) = uVar4;
      } else {
        *(ulong *)(arg1 + 0x28) = *(ulong *)(arg1 + 0x38);
        *(uint32_t *)(arg1 + 0x90) = 1;
      }
    }
  }
  *(uint32_t *)(arg1 + 0x6e0) = 0xffffffff;
  iVar6 = 0;
  while (iVar2 = vorbis_decode_initial(arg1, local_88, local_78, local_68, &local_58, &local_54),
         iVar2 != 0) {
    iVar2 = local_88[0];
    if (iVar6 == 0) {
      iVar2 = local_78[0];
    }
    if (arg4 < (local_68[0] + arg3) - iVar2) {
      local_8c = local_78[0] - local_88[0];
      if (arg4 <= local_8c + arg3) {
        iVar6 = iVar6 + -1;
        local_8c = -1;
      }
      if (arg1[0x44] == (stb_vorbis)0x0) {
        *(uint32_t *)(arg1 + 0x90) = 0;
        if (*(long *)(arg1 + 0x28) == 0) {
          uVar4 = (ulong)(arg2 + *(int *)(arg1 + 0x20));
          if (((int)arg2 < 0) || (arg2 + *(int *)(arg1 + 0x20) < arg2)) {
            *(uint32_t *)(arg1 + 0x90) = 1;
            uVar4 = 0x7fffffff;
          }
          iVar2 = fseek(*(FILE **)(arg1 + 0x18), uVar4, 0);
          if (iVar2 != 0) {
            *(uint32_t *)(arg1 + 0x90) = 1;
            fseek(*(FILE **)(arg1 + 0x18), (ulong) * (uint *)(arg1 + 0x20), 2);
          }
        } else {
          uVar4 = (ulong)arg2 + *(long *)(arg1 + 0x30);
          if (uVar4 < *(ulong *)(arg1 + 0x38)) {
            *(ulong *)(arg1 + 0x28) = uVar4;
          } else {
            *(ulong *)(arg1 + 0x28) = *(ulong *)(arg1 + 0x38);
            *(uint32_t *)(arg1 + 0x90) = 1;
          }
        }
      }
      *(uint32_t *)(arg1 + 0x6e0) = 0xffffffff;
      if (0 < iVar6) {
        iVar2 = 0;
        do {
          maybe_start_packet(arg1);
        LAB_005af568:
          sVar1 = arg1[0x6dc];
        LAB_005af56f:
          if (sVar1 != (stb_vorbis)0x0)
            goto LAB_005af592;
          iVar3 = *(int *)(arg1 + 0x6e4);
          while ((iVar3 == 0 && (iVar3 = next_segment(arg1), iVar3 != 0))) {
            sVar1 = arg1[0x6dc];
          LAB_005af592:
            do {
              uVar4 = *(ulong *)(arg1 + 0x28);
              sVar1 = (stb_vorbis)((char)sVar1 + -1);
              *(int *)(arg1 + 0x6f4) = *(int *)(arg1 + 0x6f4) + 1;
              arg1[0x6dc] = sVar1;
              if (uVar4 == 0) {
                iVar3 = fgetc(*(FILE **)(arg1 + 0x18));
                if (iVar3 == -1) {
                  *(uint32_t *)(arg1 + 0x90) = 1;
                }
                goto LAB_005af568;
              }
              if (uVar4 < *(ulong *)(arg1 + 0x38)) {
                *(ulong *)(arg1 + 0x28) = uVar4 + 1;
                goto LAB_005af56f;
              }
              *(uint32_t *)(arg1 + 0x90) = 1;
            } while (sVar1 != (stb_vorbis)0x0);
            iVar3 = *(int *)(arg1 + 0x6e4);
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 != iVar6);
      }
      if (local_8c < 0) {
        *(uint32_t *)(arg1 + 0x4f0) = 0;
        iVar6 = vorbis_decode_initial(arg1, &local_48, &local_40, &local_4c, local_3c, &local_44);
        if ((iVar6 != 0) &&
            (iVar6 = vorbis_decode_packet_rest(
                 arg1, &local_50, (Mode *)(arg1 + (long)local_44 * 6 + 0x1ec), local_48, local_4c,
                 local_3c[0], (int)&local_48, in_stack_ffffffffffffff60),
             iVar6 != 0)) {
          vorbis_finish_frame(arg1, local_50, local_48, local_4c);
        }
      } else {
        iVar2 = 0;
        *(int *)(arg1 + 0x700) = local_8c;
        iVar6 = *(int *)(arg1 + 4);
        iVar3 = *(int *)(arg1 + 0xa0) >> 1;
        if (0 < iVar6) {
          do {
            if (0 < iVar3) {
              lVar5 = 0;
              do {
                *(uint32_t *)(*(long *)(arg1 + (long)iVar2 * 8 + 0x470) + lVar5) = 0;
                lVar5 = lVar5 + 4;
              } while (lVar5 != (ulong)(iVar3 - 1) * 4 + 4);
              iVar6 = *(int *)(arg1 + 4);
            }
            iVar2 = iVar2 + 1;
          } while (iVar2 < iVar6);
        }
        arg3 = arg3 + local_8c;
        *(int *)(arg1 + 0x4f0) = iVar3;
      }
      if (arg5 == 0) {
        return 0;
      }
      if (arg4 == arg3) {
        return 0;
      }
      if (arg1[0x44] == (stb_vorbis)0x0) {
        stb_vorbis_get_frame_float_part_25(arg1, &local_50, 0);
      } else {
        *(uint32_t *)(arg1 + 0x94) = 2;
      }
      *(uint *)(arg1 + 0x75c) = *(int *)(arg1 + 0x75c) + (arg4 - arg3);
      return 0;
    }
  LAB_005af40c:
    sVar1 = arg1[0x6dc];
  LAB_005af413:
    if (sVar1 != (stb_vorbis)0x0)
      goto LAB_005af434;
    iVar3 = *(int *)(arg1 + 0x6e4);
    while ((iVar3 == 0 && (iVar3 = next_segment(arg1), iVar3 != 0))) {
      sVar1 = arg1[0x6dc];
    LAB_005af434:
      do {
        uVar4 = *(ulong *)(arg1 + 0x28);
        sVar1 = (stb_vorbis)((char)sVar1 + -1);
        *(int *)(arg1 + 0x6f4) = *(int *)(arg1 + 0x6f4) + 1;
        arg1[0x6dc] = sVar1;
        if (uVar4 == 0) {
          iVar3 = fgetc(*(FILE **)(arg1 + 0x18));
          if (iVar3 == -1) {
            *(uint32_t *)(arg1 + 0x90) = 1;
          }
          goto LAB_005af40c;
        }
        if (uVar4 < *(ulong *)(arg1 + 0x38)) {
          *(ulong *)(arg1 + 0x28) = uVar4 + 1;
          goto LAB_005af413;
        }
        *(uint32_t *)(arg1 + 0x90) = 1;
      } while (sVar1 != (stb_vorbis)0x0);
      iVar3 = *(int *)(arg1 + 0x6e4);
    }
    if (*(int *)(arg1 + 0x90) != 0)
      break;
    iVar6 = iVar6 + 1;
    arg3 = (arg3 - iVar2) + local_68[0];
  }
  *(uint32_t *)(arg1 + 0x94) = 0x25;
  return 0;
}

/* ======================================================================
 * vorbis_seek_base  (Ghidra `vorbis_seek_base` @ 005af840)
 * Signature: uint8_t __stdcall vorbis_seek_base(stb_vorbis * arg1, uint arg2, int arg3)
 * Calls: `fseek`, `vorbis_analyze_page`, `vorbis_find_page`, `vorbis_seek_frame_from_page`
 * Called by: `stb_vorbis_seek`, `stb_vorbis_seek_frame`
 */
/* vorbis_seek_base(stb_vorbis*, unsigned int, int) [clone .part.26] */

void vorbis_seek_base(stb_vorbis *arg1, uint arg2, int arg3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulong __off;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint local_68;
  uint local_64;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_48;

  local_64 = *(uint *)(arg1 + 0x60);
  uVar5 = *(uint *)(arg1 + 0x5c);
  local_68 = *(uint *)(arg1 + 0x70);
  uVar6 = *(uint *)(arg1 + 0x50);
  uVar8 = *(uint *)(arg1 + 0x68);
  uVar1 = local_68 - 1;
  if (arg2 < local_68) {
    uVar1 = arg2;
  }
  if (uVar1 < uVar5) {
    vorbis_seek_frame_from_page(arg1, *(uint *)(arg1 + 0x4c), 0, uVar1, arg3);
    return;
  }
  if (uVar6 < local_64) {
    if ((local_68 != 0xffffffff) && (iVar9 = 0, uVar5 != 0xffffffff)) {
      do {
        uVar4 = uVar8 - 4000;
        if (uVar8 <= uVar6 + 4000) {
          uVar4 = uVar8;
        }
        uVar7 =
            (int)(((float)(uVar4 - uVar6) / (float)(local_68 - uVar5)) * (float)(uVar1 - uVar5)) +
            uVar6;
        uVar2 = uVar7;
        if ((3 < iVar9) && (uVar2 = (uVar4 - uVar6 >> 1) + uVar6, iVar9 < 8)) {
          if (uVar7 < uVar2) {
            uVar2 = uVar7 + (uVar2 - uVar7 >> 1);
          } else {
            uVar2 = (uVar7 - uVar2 >> 1) + uVar2;
          }
        }
        iVar9 = iVar9 + 1;
        if (arg1[0x44] == (stb_vorbis)0x0) {
          *(uint32_t *)(arg1 + 0x90) = 0;
          if (*(long *)(arg1 + 0x28) == 0) {
            __off = (ulong)(uVar2 + *(int *)(arg1 + 0x20));
            if (((int)uVar2 < 0) || (uVar2 + *(int *)(arg1 + 0x20) < uVar2)) {
              *(uint32_t *)(arg1 + 0x90) = 1;
              __off = 0x7fffffff;
            }
            iVar3 = fseek(*(FILE **)(arg1 + 0x18), __off, 0);
            if (iVar3 != 0) {
              *(uint32_t *)(arg1 + 0x90) = 1;
              fseek(*(FILE **)(arg1 + 0x18), (ulong) * (uint *)(arg1 + 0x20), 2);
            }
          } else if ((ulong)uVar2 + *(long *)(arg1 + 0x30) < *(ulong *)(arg1 + 0x38)) {
            *(ulong *)(arg1 + 0x28) = (ulong)uVar2 + *(long *)(arg1 + 0x30);
          } else {
            *(ulong *)(arg1 + 0x28) = *(ulong *)(arg1 + 0x38);
            *(uint32_t *)(arg1 + 0x90) = 1;
          }
        }
        iVar3 = vorbis_find_page(arg1, (uint *)0x0, (uint *)0x0);
        if ((iVar3 == 0) ||
            (iVar3 = vorbis_analyze_page(arg1, (ProbedPage *)&local_58), iVar3 == 0))
          break;
        local_50 = uVar2;
        if (local_58 == local_64) {
          local_68 = local_48;
          uVar4 = uVar5;
          uVar7 = uVar6;
          uVar8 = uVar2;
        LAB_005af8bf:
          uVar5 = uVar4;
          uVar6 = uVar7;
          if (local_64 <= uVar7) {
          LAB_005af9e4:
            if (uVar5 <= uVar1)
              goto LAB_005af9ea;
            break;
          }
        } else {
          uVar4 = local_48;
          uVar7 = local_54;
          if (local_48 <= uVar1)
            goto LAB_005af8bf;
          local_64 = local_58;
          local_68 = local_48;
          uVar8 = uVar2;
          if (local_58 <= uVar6)
            goto LAB_005af9e4;
        }
        if ((local_68 == 0xffffffff) || (uVar5 == 0xffffffff))
          break;
      } while (true);
    }
  } else {
  LAB_005af9ea:
    if (uVar1 < local_68) {
      vorbis_seek_frame_from_page(arg1, local_64, uVar5, uVar1, arg3);
      return;
    }
  }
  *(uint32_t *)(arg1 + 0x94) = 0x25;
  return;
}

/* ======================================================================
 * stb_vorbis_close  (Ghidra `stb_vorbis_close` @ 005aff70)
 * Signature: uint8_t stb_vorbis_close(void)
 * Calls: `free`, `vorbis_deinit`
 * Called by: `AudioFile__AudioFile`
 */
void stb_vorbis_close(stb_vorbis *arg1)

{
  if (arg1 != (stb_vorbis *)0x0) {
    vorbis_deinit(arg1);
    if (*(long *)(arg1 + 0x78) == 0) {
      free(arg1);
      return;
    }
  }
  return;
}

/* ======================================================================
 * stb_vorbis_get_sample_offset  (Ghidra `stb_vorbis_get_sample_offset` @ 005affa0)
 * Signature: uint8_t stb_vorbis_get_sample_offset(void)
 * Calls: (none)
 * Called by: (none)
 */
uint32_t stb_vorbis_get_sample_offset(long arg1)

{
  uint32_t uVar1;

  uVar1 = 0xffffffff;
  if (*(int *)(arg1 + 0x57c) != 0) {
    uVar1 = *(uint32_t *)(arg1 + 0x578);
  }
  return uVar1;
}

/* ======================================================================
 * stb_vorbis_get_info  (Ghidra `stb_vorbis_get_info` @ 005affc0)
 * Signature: uint8_t stb_vorbis_get_info(void)
 * Calls: (none)
 * Called by: (none)
 */
uint32_t *stb_vorbis_get_info(uint32_t *arg1, uint32_t *arg2)

{
  arg1[1] = arg2[1];
  *arg1 = *arg2;
  arg1[2] = arg2[2];
  arg1[3] = arg2[4];
  arg1[4] = arg2[3];
  arg1[5] = (int)arg2[0x29] >> 1;
  return arg1;
}

/* ======================================================================
 * stb_vorbis_get_error  (Ghidra `stb_vorbis_get_error` @ 005afff0)
 * Signature: uint8_t stb_vorbis_get_error(void)
 * Calls: (none)
 * Called by: (none)
 */
uint32_t stb_vorbis_get_error(long arg1)

{
  uint32_t uVar1;

  uVar1 = *(uint32_t *)(arg1 + 0x94);
  *(uint32_t *)(arg1 + 0x94) = 0;
  return uVar1;
}

/* ======================================================================
 * stb_vorbis_flush_pushdata  (Ghidra `stb_vorbis_flush_pushdata` @ 005b0010)
 * Signature: uint8_t stb_vorbis_flush_pushdata(void)
 * Calls: (none)
 * Called by: (none)
 */
void stb_vorbis_flush_pushdata(long arg1)

{
  *(uint32_t *)(arg1 + 0x4f0) = 0;
  *(uint32_t *)(arg1 + 0x708) = 0;
  *(uint32_t *)(arg1 + 0x700) = 0;
  *(uint32_t *)(arg1 + 0x57c) = 0;
  *(uint8_t *)(arg1 + 0x6dd) = 0;
  *(uint32_t *)(arg1 + 0x704) = 0;
  *(uint32_t *)(arg1 + 0x75c) = 0;
  *(uint32_t *)(arg1 + 0x760) = 0;
  return;
}

/* ======================================================================
 * stb_vorbis_decode_frame_pushdata  (Ghidra `stb_vorbis_decode_frame_pushdata` @ 005b0060)
 * Signature: uint8_t stb_vorbis_decode_frame_pushdata(void)
 * Calls: `fgetc`, `is_whole_packet_present`, `memcmp`, `next_segment`, `vorbis_decode_initial`, `vorbis_decode_packet_rest`, `vorbis_finish_frame`
 * Called by: (none)
 */
ulong stb_vorbis_decode_frame_pushdata(stb_vorbis *arg1, char *arg2, uint arg3, uint *arg4,
                                       long *arg5, uint32_t *arg6)

{
  uint8_t auVar1[16];
  byte bVar2;
  stb_vorbis sVar3;
  long lVar4;
  uint8_t auVar5[14];
  uint8_t auVar6[12];
  unkuint10 Var7;
  uint8_t auVar8[12];
  uint8_t auVar9[13];
  uint8_t auVar10[11];
  uint8_t auVar11[15];
  uint8_t auVar12[14];
  uint8_t auVar13[13];
  uint8_t auVar14[15];
  uint8_t auVar15[13];
  uint8_t auVar16[15];
  uint8_t auVar17[15];
  uint8_t auVar18[13];
  uint8_t auVar19[15];
  uint8_t auVar20[15];
  uint8_t auVar21[13];
  uint6 uVar22;
  uint uVar23;
  uint32_t uVar24;
  long lVar25;
  uint uVar26;
  uint uVar27;
  int iVar28;
  ulong uVar29;
  int iVar30;
  byte *pbVar31;
  uint8_t (*pauVar32)[16];
  uint uVar33;
  long lVar34;
  uint uVar35;
  int iVar36;
  int iVar37;
  char *__s1;
  int iVar38;
  ulong uVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  uint8_t auVar43[16];
  ushort uVar44;
  int *in_stack_ffffffffffffff60;
  int local_58[3];
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c[3];

  uVar29 = (ulong)arg3;
  if (arg1[0x44] == (stb_vorbis)0x0) {
    *(uint32_t *)(arg1 + 0x94) = 2;
    return 0;
  }
  if (*(int *)(arg1 + 0x708) < 0) {
    *(char **)(arg1 + 0x28) = arg2;
    *(uint32_t *)(arg1 + 0x94) = 0;
    *(char **)(arg1 + 0x38) = arg2 + (int)arg3;
    iVar38 = is_whole_packet_present(arg1, 0);
    if (iVar38 != 0) {
      iVar38 = vorbis_decode_initial(arg1, local_58, &local_40, &local_48, local_3c, &local_44);
      if ((iVar38 == 0) ||
          (iVar38 = vorbis_decode_packet_rest(
               arg1, &local_4c, (Mode *)(arg1 + (long)local_44 * 6 + 0x1ec), local_58[0], local_48,
               local_3c[0], (int)local_58, in_stack_ffffffffffffff60),
           iVar38 == 0)) {
        if (*(int *)(arg1 + 0x94) == 0x23) {
          *(uint32_t *)(arg1 + 0x94) = 0;
          do {
            sVar3 = arg1[0x6dc];
            if (sVar3 == (stb_vorbis)0x0) {
              if ((*(int *)(arg1 + 0x6e4) != 0) || (iVar38 = next_segment(arg1), iVar38 == 0))
                goto LAB_005b0780;
              sVar3 = arg1[0x6dc];
            }
            *(int *)(arg1 + 0x6f4) = *(int *)(arg1 + 0x6f4) + 1;
            arg1[0x6dc] = (stb_vorbis)((char)sVar3 + -1);
            uVar29 = *(ulong *)(arg1 + 0x28);
            if (uVar29 == 0) {
              iVar38 = fgetc(*(FILE **)(arg1 + 0x18));
              if (iVar38 == -1) {
                *(uint32_t *)(arg1 + 0x90) = 1;
                iVar38 = 1;
              } else {
                iVar38 = *(int *)(arg1 + 0x90);
              }
            } else {
              if (*(ulong *)(arg1 + 0x38) <= uVar29)
                goto LAB_005b0758;
              *(ulong *)(arg1 + 0x28) = uVar29 + 1;
              iVar38 = *(int *)(arg1 + 0x90);
            }
            *(uint32_t *)(arg1 + 0x6f0) = 0;
          } while (iVar38 == 0);
        } else {
          if ((*(int *)(arg1 + 0x94) != 0x20) || (*(int *)(arg1 + 0x4f0) != 0)) {
            *(uint32_t *)(arg1 + 0x4f0) = 0;
            *(uint32_t *)(arg1 + 0x708) = 0;
            *(uint32_t *)(arg1 + 0x700) = 0;
            *(uint32_t *)(arg1 + 0x57c) = 0;
            arg1[0x6dd] = (stb_vorbis)0x0;
            *(uint32_t *)(arg1 + 0x704) = 0;
            *(uint32_t *)(arg1 + 0x75c) = 0;
            *(uint32_t *)(arg1 + 0x760) = 0;
            *arg6 = 0;
            return 1;
          }
          *(uint32_t *)(arg1 + 0x94) = 0;
          do {
            sVar3 = arg1[0x6dc];
            if (sVar3 == (stb_vorbis)0x0) {
              if ((*(int *)(arg1 + 0x6e4) != 0) || (iVar38 = next_segment(arg1), iVar38 == 0))
                goto LAB_005b0780;
              sVar3 = arg1[0x6dc];
            }
            *(int *)(arg1 + 0x6f4) = *(int *)(arg1 + 0x6f4) + 1;
            arg1[0x6dc] = (stb_vorbis)((char)sVar3 + -1);
            uVar29 = *(ulong *)(arg1 + 0x28);
            if (uVar29 == 0) {
              iVar38 = fgetc(*(FILE **)(arg1 + 0x18));
              if (iVar38 == -1) {
                *(uint32_t *)(arg1 + 0x90) = 1;
                iVar38 = 1;
              } else {
                iVar38 = *(int *)(arg1 + 0x90);
              }
            } else {
              if (*(ulong *)(arg1 + 0x38) <= uVar29)
                goto LAB_005b0758;
              *(ulong *)(arg1 + 0x28) = uVar29 + 1;
              iVar38 = *(int *)(arg1 + 0x90);
            }
            *(uint32_t *)(arg1 + 0x6f0) = 0;
          } while (iVar38 == 0);
        }
        goto LAB_005b076c;
      }
      uVar24 = vorbis_finish_frame(arg1, local_4c, local_58[0], local_48);
      uVar27 = *(uint *)(arg1 + 4);
      if (0 < (int)uVar27) {
        lVar25 = (long)local_58[0] * 4;
        uVar35 = -(int)(((long)arg1 << 0x3c) >> 0x3f);
        if (uVar27 < uVar35) {
          uVar35 = uVar27;
        }
        if (uVar35 == 0) {
          iVar38 = 0;
        } else {
          *(long *)(arg1 + 0x3f0) = lVar25 + *(long *)(arg1 + 0x370);
          if (uVar27 == uVar35)
            goto LAB_005b06c0;
          iVar38 = 1;
        }
        uVar23 = uVar27 - uVar35 >> 1;
        if (uVar23 != 0) {
          lVar34 = 0;
          uVar33 = 0;
          do {
            lVar4 = *(long *)(arg1 + lVar34 + (ulong)uVar35 * 8 + 0x370 + 8);
            uVar33 = uVar33 + 1;
            *(long *)(arg1 + lVar34 + (ulong)uVar35 * 8 + 0x3f0) =
                *(long *)(arg1 + lVar34 + (ulong)uVar35 * 8 + 0x370) + lVar25;
            *(long *)(arg1 + lVar34 + (ulong)uVar35 * 8 + 0x3f0 + 8) = lVar4 + lVar25;
            lVar34 = lVar34 + 0x10;
          } while (uVar33 < uVar23);
          iVar38 = iVar38 + uVar23 * 2;
          if (uVar27 - uVar35 == uVar23 * 2)
            goto LAB_005b06c0;
        }
        do {
          lVar34 = (long)iVar38;
          iVar38 = iVar38 + 1;
          *(long *)(arg1 + lVar34 * 8 + 0x3f0) = *(long *)(arg1 + lVar34 * 8 + 0x370) + lVar25;
        } while (iVar38 < (int)uVar27);
      }
    LAB_005b06c0:
      if (arg4 != (uint *)0x0) {
        *arg4 = uVar27;
      }
      *arg6 = uVar24;
      *arg5 = (long)(arg1 + 0x3f0);
      return (ulong)(uint)((int)*(uint64_t *)(arg1 + 0x28) - (int)arg2);
    }
    *arg6 = 0;
  } else {
    *arg6 = 0;
    iVar38 = *(int *)(arg1 + 0x708);
    if (0 < iVar38) {
      lVar25 = 0;
      do {
        *(uint32_t *)(arg1 + lVar25 + 0x718) = 0;
        lVar25 = lVar25 + 0x14;
      } while (lVar25 != ((ulong)(iVar38 - 1) * 5 + 5) * 4);
      if (3 < iVar38)
        goto LAB_005b00fe;
    }
    if (3 < (int)arg3) {
      arg3 = arg3 - 3;
      uVar29 = (ulong)arg3;
      uVar39 = 0;
      __s1 = arg2;
      do {
        if ((*__s1 == 'O') && (iVar36 = memcmp(__s1, ogg_page_header, 4), iVar36 == 0)) {
          iVar36 = (int)uVar39 + 0x1a;
          if (iVar36 < (int)arg3) {
            uVar27 = (uint)(byte)__s1[0x1a];
            iVar37 = (int)uVar39 + 0x1b;
            if ((int)(uVar27 + iVar37) < (int)arg3) {
              iVar28 = uVar27 + 0x1b;
              if (__s1[0x1a] != 0) {
                uVar35 = -(int)__s1 - 0x1bU & 0xf;
                if (uVar27 < uVar35) {
                  uVar35 = uVar27;
                }
                if (uVar35 == 0) {
                  uVar23 = 0;
                } else {
                  pbVar31 = (byte *)(__s1 + 0x1b);
                  uVar23 = 0;
                  do {
                    bVar2 = *pbVar31;
                    uVar23 = uVar23 + 1;
                    pbVar31 = pbVar31 + 1;
                    iVar28 = iVar28 + (uint)bVar2;
                  } while (uVar23 < uVar35);
                  if (uVar27 == uVar35)
                    goto LAB_005b0392;
                }
                uVar33 = uVar27 - uVar35 >> 4;
                if (uVar33 != 0) {
                  iVar30 = 0;
                  iVar40 = 0;
                  iVar41 = 0;
                  iVar42 = 0;
                  pauVar32 = (uint8_t (*)[16])(__s1 + (ulong)uVar35 + 0x1b);
                  uVar26 = 0;
                  do {
                    auVar1 = *pauVar32;
                    uVar26 = uVar26 + 1;
                    pauVar32 = pauVar32 + 1;
                    auVar11[0xd] = 0;
                    auVar11._0_13_ = auVar1._0_13_;
                    auVar11[0xe] = auVar1[7];
                    auVar14[0xc] = auVar1[6];
                    auVar14._0_12_ = auVar1._0_12_;
                    auVar14._13_2_ = auVar11._13_2_;
                    auVar16[0xb] = 0;
                    auVar16._0_11_ = auVar1._0_11_;
                    auVar16._12_3_ = auVar14._12_3_;
                    auVar17[10] = auVar1[5];
                    auVar17._0_10_ = auVar1._0_10_;
                    auVar17._11_4_ = auVar16._11_4_;
                    auVar19[9] = 0;
                    auVar19._0_9_ = auVar1._0_9_;
                    auVar19._10_5_ = auVar17._10_5_;
                    auVar20[8] = auVar1[4];
                    auVar20._0_8_ = auVar1._0_8_;
                    auVar20._9_6_ = auVar19._9_6_;
                    Var7 = CONCAT91((unkuint9)auVar20._8_7_ << 8, auVar1[3]);
                    auVar10[10] = 0;
                    auVar10._0_10_ = Var7;
                    auVar6._1_11_ = auVar10 << 8;
                    auVar6[0] = auVar1[2];
                    auVar9[0xc] = 0;
                    auVar9._0_12_ = auVar6;
                    auVar5._1_13_ = auVar9 << 8;
                    auVar5[0] = auVar1[1];
                    auVar43._0_2_ = CONCAT11(0, auVar1[0]);
                    auVar43._2_14_ = auVar5;
                    uVar44 = (ushort)Var7;
                    auVar12._10_2_ = 0;
                    auVar12._0_10_ = auVar43._0_10_;
                    auVar12._12_2_ = uVar44;
                    uVar22 = CONCAT42(auVar12._10_4_, auVar6._0_2_);
                    auVar8._2_10_ = (unkuint10)uVar22 << 0x10;
                    auVar8._0_2_ = auVar5._0_2_;
                    auVar13[0xc] = auVar1[0xb];
                    auVar13._0_12_ = ZEXT112(auVar1[0xc]) << 0x40;
                    auVar15._10_3_ = auVar13._10_3_;
                    auVar15._0_10_ = (unkuint10)auVar1[10] << 0x40;
                    auVar21._5_8_ = 0;
                    auVar21._0_5_ = auVar15._8_5_;
                    auVar18._6_7_ = SUB137(auVar21 << 0x40, 6);
                    auVar18._0_6_ = (uint6)auVar1[9] << 0x20;
                    iVar30 = iVar30 + (uint)auVar43._0_2_ + (uint)auVar20._8_2_ + (uint)auVar1[8] +
                             (uint)auVar1[0xc];
                    iVar40 = iVar40 + auVar8._0_4_ + (uint)auVar17._10_2_ + auVar18._4_4_ +
                             (uint)auVar1[0xd];
                    iVar41 = iVar41 + (int)uVar22 + (uint)auVar14._12_2_ + auVar15._8_4_ +
                             (uint)auVar1[0xe];
                    iVar42 = iVar42 + (uint)uVar44 + (uint)auVar1[7] + (uint)auVar1[0xb] +
                             (uint)auVar1[0xf];
                  } while (uVar26 < uVar33);
                  uVar23 = uVar23 + uVar33 * 0x10;
                  iVar28 = iVar28 + iVar30 + iVar41 + iVar40 + iVar42;
                  if (uVar27 - uVar35 == uVar33 * 0x10)
                    goto LAB_005b0392;
                }
                lVar25 = 0;
                do {
                  lVar34 = lVar25 + uVar39 + 0x1b + (long)(int)uVar23;
                  lVar25 = lVar25 + 1;
                  iVar28 = iVar28 + (uint)(byte)arg2[lVar34];
                } while ((int)(uVar23 + (int)lVar25) < (int)uVar27);
              }
            LAB_005b0392:
              lVar25 = 0;
              uVar27 = 0;
              do {
                pbVar31 = (byte *)(__s1 + lVar25);
                lVar25 = lVar25 + 1;
                uVar27 = (&crc_table)[(byte)((byte)(uVar27 >> 0x18) ^ *pbVar31)] ^ uVar27 << 8;
              } while (lVar25 != 0x16);
              uVar27 = uVar27 << 8 ^ (&crc_table)[uVar27 >> 0x18];
              uVar27 = uVar27 << 8 ^ (&crc_table)[uVar27 >> 0x18];
              uVar35 = uVar27 << 8 ^ (&crc_table)[uVar27 >> 0x18];
              uVar27 = (&crc_table)[uVar35 >> 0x18];
              iVar30 = iVar38 + 1;
              lVar25 = (long)iVar38;
              *(int *)(arg1 + 0x708) = iVar30;
              *(int *)(arg1 + lVar25 * 0x14 + 0x710) = iVar28 + -0x1a;
              *(uint *)(arg1 + lVar25 * 0x14 + 0x714) = uVar27 ^ uVar35 << 8;
              *(uint *)(arg1 + lVar25 * 0x14 + 0x70c) =
                  (uint)(byte)__s1[0x19] * 0x1000000 + (uint)(byte)__s1[0x16] +
                  (uint)(byte)__s1[0x17] * 0x100 + (uint)(byte)__s1[0x18] * 0x10000;
              if (arg2[(long)(int)((uint)(byte)__s1[0x1a] + iVar37) + -1] == -1) {
                *(uint32_t *)(arg1 + lVar25 * 0x14 + 0x71c) = 0xffffffff;
              } else {
                *(uint *)(arg1 + lVar25 * 0x14 + 0x71c) =
                    (uint)(byte)__s1[9] * 0x1000000 + (uint)(byte)__s1[6] +
                    (uint)(byte)__s1[7] * 0x100 + (uint)(byte)__s1[8] * 0x10000;
              }
              *(int *)(arg1 + lVar25 * 0x14 + 0x718) = iVar36;
              iVar38 = iVar30;
              if (iVar30 != 4)
                goto LAB_005b0220;
              iVar38 = 4;
              break;
            }
          }
          uVar29 = uVar39 & 0xffffffff;
          break;
        }
      LAB_005b0220:
        uVar39 = uVar39 + 1;
        __s1 = __s1 + 1;
      } while ((int)uVar39 < (int)arg3);
    LAB_005b00fe:
      iVar36 = 0;
      while (true) {
        while (true) {
          if (iVar38 <= iVar36) {
            return uVar29;
          }
          lVar34 = (long)iVar36;
          lVar25 = lVar34 * 0x14;
          iVar37 = *(int *)(arg1 + lVar25 + 0x718);
          iVar28 = *(int *)(arg1 + lVar25 + 0x710);
          uVar27 = *(uint *)(arg1 + lVar25 + 0x714);
          iVar30 = (int)uVar29 - iVar37;
          if (iVar28 < iVar30) {
            iVar30 = iVar28;
          }
          if (0 < iVar30) {
            lVar25 = 0;
            do {
              lVar4 = lVar25 + iVar37;
              lVar25 = lVar25 + 1;
              uVar27 = (&crc_table)[(byte)((byte)(uVar27 >> 0x18) ^ arg2[lVar4])] ^ uVar27 << 8;
            } while ((int)lVar25 < iVar30);
          }
          *(int *)(arg1 + lVar34 * 0x14 + 0x710) = iVar28 - iVar30;
          *(uint *)(arg1 + lVar34 * 0x14 + 0x714) = uVar27;
          if (iVar28 - iVar30 == 0)
            break;
          iVar36 = iVar36 + 1;
        }
        if (uVar27 == *(uint *)(arg1 + lVar34 * 0x14 + 0x70c))
          break;
        iVar38 = iVar38 + -1;
        *(int *)(arg1 + 0x708) = iVar38;
        lVar25 = (long)iVar38 * 0x14;
        *(uint64_t *)(arg1 + lVar34 * 0x14 + 0x70c) = *(uint64_t *)(arg1 + lVar25 + 0x70c);
        *(uint64_t *)(arg1 + lVar34 * 0x14 + 0x714) = *(uint64_t *)(arg1 + lVar25 + 0x714);
        *(uint32_t *)(arg1 + lVar34 * 0x14 + 0x71c) = *(uint32_t *)(arg1 + lVar25 + 0x71c);
      }
      *(uint32_t *)(arg1 + 0x708) = 0xffffffff;
      *(uint32_t *)(arg1 + 0x4f0) = 0;
      *(uint32_t *)(arg1 + 0x6e0) = 0xffffffff;
      iVar38 = *(int *)(arg1 + lVar34 * 0x14 + 0x71c);
      *(int *)(arg1 + 0x578) = iVar38;
      *(uint *)(arg1 + 0x57c) = (uint)(iVar38 != -1);
      return (ulong)(uint)(iVar30 + iVar37);
    }
  }
  return 0;
LAB_005b0780:
  *(uint32_t *)(arg1 + 0x6f0) = 0;
  goto LAB_005b076c;
LAB_005b0758:
  *(uint32_t *)(arg1 + 0x90) = 1;
  *(uint32_t *)(arg1 + 0x6f0) = 0;
LAB_005b076c:
  *arg6 = 0;
  return (ulong)(uint)((int)*(uint64_t *)(arg1 + 0x28) - (int)arg2);
}

/* ======================================================================
 * stb_vorbis_get_file_offset  (Ghidra `stb_vorbis_get_file_offset` @ 005b08a0)
 * Signature: uint8_t stb_vorbis_get_file_offset(void)
 * Calls: `ftell`
 * Called by: `start_decoder`
 */
int stb_vorbis_get_file_offset(long arg1)

{
  int iVar1;
  long lVar2;

  iVar1 = 0;
  if (*(char *)(arg1 + 0x44) == '\0') {
    if (*(long *)(arg1 + 0x28) == 0) {
      lVar2 = ftell(*(FILE **)(arg1 + 0x18));
      return (int)lVar2 - *(int *)(arg1 + 0x20);
    }
    iVar1 = (int)*(long *)(arg1 + 0x28) - *(int *)(arg1 + 0x30);
  }
  return iVar1;
}

/* ======================================================================
 * stb_vorbis_open_memory_constprop_31  (Ghidra `stb_vorbis_open_memory.constprop.31` @ 005b24c0)
 * Signature: uint8_t stb_vorbis_open_memory.constprop.31(void)
 * Calls: `malloc`, `start_decoder`, `start_page`, `vorbis_decode_initial`, `vorbis_decode_packet_rest`, `vorbis_deinit`, `vorbis_finish_frame`
 * Called by: `stb_vorbis_decode_memory`
 */
stb_vorbis *stb_vorbis_open_memory_constprop_31(long arg1, int arg2, uint32_t *arg3)

{
  int iVar1;
  long lVar2;
  stb_vorbis *psVar3;
  stb_vorbis *psVar4;
  stb_vorbis *psVar5;
  byte bVar6;
  int *in_stack_fffffffffffff860;
  stb_vorbis local_798[8];
  int local_790;
  long local_770;
  long local_768;
  long local_760;
  int local_758;
  long local_720;
  int local_710;
  int local_70c;
  uint32_t local_704;
  byte local_bd;
  uint32_t local_90;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;

  bVar6 = 0;
  if (arg1 == 0) {
    return (stb_vorbis *)0x0;
  }
  psVar3 = local_798;
  for (lVar2 = 0xed; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(uint64_t *)psVar3 = 0;
    psVar3 = psVar3 + 8;
  }
  local_90 = 0xffffffff;
  local_760 = arg2 + arg1;
  local_770 = arg1;
  local_768 = arg1;
  local_758 = arg2;
  iVar1 = start_page(local_798);
  if (iVar1 != 0) {
    if ((((local_bd & 2) == 0) || ((local_bd & 4) != 0)) || ((local_bd & 1) != 0)) {
      local_704 = 0x22;
    } else {
      iVar1 = start_decoder(local_798);
      if (iVar1 != 0) {
        local_790 = local_790 + 0x768;
        if (local_720 == 0) {
          psVar3 = malloc(0x768);
        } else {
          if (local_70c < local_710 + 0x768)
            goto LAB_005b2532;
          lVar2 = (long)local_710;
          local_710 = local_710 + 0x768;
          psVar3 = (stb_vorbis *)(lVar2 + local_720);
        }
        if (psVar3 != (stb_vorbis *)0x0) {
          psVar4 = local_798;
          psVar5 = psVar3;
          for (lVar2 = 0xed; lVar2 != 0; lVar2 = lVar2 + -1) {
            *(uint64_t *)psVar5 = *(uint64_t *)psVar4;
            psVar4 = psVar4 + (ulong)bVar6 * -0x10 + 8;
            psVar5 = psVar5 + (ulong)bVar6 * -0x10 + 8;
          }
          iVar1 =
              vorbis_decode_initial(psVar3, &local_28, &local_20, &local_2c, &local_1c, &local_24);
          if (iVar1 == 0) {
            return psVar3;
          }
          iVar1 = vorbis_decode_packet_rest(
              psVar3, &local_30, (Mode *)(psVar3 + (long)local_24 * 6 + 0x1ec), local_28, local_2c,
              local_1c, (int)&local_28, in_stack_fffffffffffff860);
          if (iVar1 == 0) {
            return psVar3;
          }
          vorbis_finish_frame(psVar3, local_30, local_28, local_2c);
          return psVar3;
        }
      }
    }
  }
LAB_005b2532:
  if (arg3 != (uint32_t *)0x0) {
    *arg3 = local_704;
  }
  vorbis_deinit(local_798);
  return (stb_vorbis *)0x0;
}

/* ======================================================================
 * stb_vorbis_open_pushdata  (Ghidra `stb_vorbis_open_pushdata` @ 005b26a0)
 * Signature: uint8_t stb_vorbis_open_pushdata(void)
 * Calls: `malloc`, `start_decoder`, `start_page`, `vorbis_deinit`
 * Called by: (none)
 */
uint64_t *stb_vorbis_open_pushdata(long arg1, int arg2, int *arg3, uint32_t *arg4, long *arg5)

{
  uint uVar1;
  int iVar2;
  uint64_t *puVar3;
  long lVar4;
  stb_vorbis *psVar5;
  uint64_t *puVar6;
  byte bVar7;
  stb_vorbis asStack_798[8];
  int local_790;
  long local_770;
  long local_760;
  uint8_t local_754;
  long local_720;
  uint64_t local_718;
  int local_710;
  uint local_70c;
  int local_708;
  uint32_t local_704;
  byte local_bd;
  uint32_t local_90;

  bVar7 = 0;
  psVar5 = asStack_798;
  for (lVar4 = 0xed; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(uint64_t *)psVar5 = 0;
    psVar5 = (stb_vorbis *)((long)psVar5 + 8);
  }
  if (arg5 != (long *)0x0) {
    local_720 = *arg5;
    uVar1 = (int)arg5[1] + 3;
    local_70c = uVar1 & 0xfffffffc;
    local_718._4_4_ = (uint32_t)((ulong)arg5[1] >> 0x20);
    local_718 = CONCAT44(local_718._4_4_, uVar1) & 0xfffffffffffffffc;
  }
  local_90 = 0xffffffff;
  local_760 = arg2 + arg1;
  local_754 = 1;
  local_770 = arg1;
  iVar2 = start_page(asStack_798);
  if (iVar2 == 0) {
  LAB_005b2744:
    if (local_708 == 0) {
      *arg4 = local_704;
    } else {
      *arg4 = 1;
    }
    return (uint64_t *)0x0;
  }
  if ((((local_bd & 2) == 0) || ((local_bd & 4) != 0)) || ((local_bd & 1) != 0)) {
    local_704 = 0x22;
    goto LAB_005b2744;
  }
  iVar2 = start_decoder(asStack_798);
  if (iVar2 == 0)
    goto LAB_005b2744;
  local_790 = local_790 + 0x768;
  if (local_720 == 0) {
    puVar3 = malloc(0x768);
  } else {
    if ((int)local_70c < local_710 + 0x768)
      goto LAB_005b2820;
    lVar4 = (long)local_710;
    local_710 = local_710 + 0x768;
    puVar3 = (uint64_t *)(lVar4 + local_720);
  }
  if (puVar3 != (uint64_t *)0x0) {
    psVar5 = asStack_798;
    puVar6 = puVar3;
    for (lVar4 = 0xed; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar6 = *(uint64_t *)psVar5;
      psVar5 = (stb_vorbis *)((long)psVar5 + ((ulong)bVar7 * -2 + 1) * 8);
      puVar6 = puVar6 + (ulong)bVar7 * -2 + 1;
    }
    *arg3 = (int)puVar3[5] - (int)arg1;
    *arg4 = 0;
    return puVar3;
  }
LAB_005b2820:
  vorbis_deinit(asStack_798);
  return (uint64_t *)0x0;
}

/* ======================================================================
 * stb_vorbis_open_file_section_constprop_33  (Ghidra `stb_vorbis_open_file_section.constprop.33` @ 005b2830)
 * Signature: uint8_t stb_vorbis_open_file_section.constprop.33(void)
 * Calls: `ftell`, `malloc`, `start_decoder`, `start_page`, `vorbis_decode_initial`, `vorbis_decode_packet_rest`, `vorbis_deinit`, `vorbis_finish_frame`
 * Called by: `stb_vorbis_decode_filename`
 */
stb_vorbis *stb_vorbis_open_file_section_constprop_33(FILE *arg1, uint32_t *arg2, uint32_t arg3)

{
  int iVar1;
  long lVar2;
  stb_vorbis *psVar3;
  stb_vorbis *psVar4;
  stb_vorbis *psVar5;
  byte bVar6;
  int *in_stack_fffffffffffff860;
  stb_vorbis local_798[8];
  int local_790;
  FILE *local_780;
  uint32_t local_778;
  uint32_t local_774;
  uint32_t local_758;
  long local_720;
  int local_710;
  int local_70c;
  uint32_t local_704;
  byte local_bd;
  uint32_t local_90;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;

  bVar6 = 0;
  psVar3 = local_798;
  for (lVar2 = 0xed; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(uint64_t *)psVar3 = 0;
    psVar3 = psVar3 + 8;
  }
  local_90 = 0xffffffff;
  local_780 = arg1;
  lVar2 = ftell(arg1);
  local_778 = (uint32_t)lVar2;
  local_774 = 1;
  local_758 = arg3;
  iVar1 = start_page(local_798);
  if (iVar1 != 0) {
    if ((((local_bd & 2) == 0) || ((local_bd & 4) != 0)) || ((local_bd & 1) != 0)) {
      local_704 = 0x22;
    } else {
      iVar1 = start_decoder(local_798);
      if (iVar1 != 0) {
        local_790 = local_790 + 0x768;
        if (local_720 == 0) {
          psVar3 = malloc(0x768);
        } else {
          if (local_70c < local_710 + 0x768)
            goto LAB_005b28a0;
          lVar2 = (long)local_710;
          local_710 = local_710 + 0x768;
          psVar3 = (stb_vorbis *)(lVar2 + local_720);
        }
        if (psVar3 != (stb_vorbis *)0x0) {
          psVar4 = local_798;
          psVar5 = psVar3;
          for (lVar2 = 0xed; lVar2 != 0; lVar2 = lVar2 + -1) {
            *(uint64_t *)psVar5 = *(uint64_t *)psVar4;
            psVar4 = psVar4 + (ulong)bVar6 * -0x10 + 8;
            psVar5 = psVar5 + (ulong)bVar6 * -0x10 + 8;
          }
          iVar1 =
              vorbis_decode_initial(psVar3, &local_28, &local_20, &local_2c, &local_1c, &local_24);
          if (iVar1 == 0) {
            return psVar3;
          }
          iVar1 = vorbis_decode_packet_rest(
              psVar3, &local_30, (Mode *)(psVar3 + (long)local_24 * 6 + 0x1ec), local_28, local_2c,
              local_1c, (int)&local_28, in_stack_fffffffffffff860);
          if (iVar1 == 0) {
            return psVar3;
          }
          vorbis_finish_frame(psVar3, local_30, local_28, local_2c);
          return psVar3;
        }
      }
    }
  }
LAB_005b28a0:
  if (arg2 != (uint32_t *)0x0) {
    *arg2 = local_704;
  }
  vorbis_deinit(local_798);
  return (stb_vorbis *)0x0;
}

/* ======================================================================
 * stb_vorbis_seek_frame  (Ghidra `stb_vorbis_seek_frame` @ 005b2a10)
 * Signature: uint8_t stb_vorbis_seek_frame(void)
 * Calls: `stb_vorbis_stream_length_in_samples_part_24`, `vorbis_seek_base`
 * Called by: (none)
 */
uint64_t stb_vorbis_seek_frame(stb_vorbis *arg1, uint arg2)

{
  int iVar1;

  if (arg1[0x44] != (stb_vorbis)0x0) {
    *(uint32_t *)(arg1 + 0x94) = 2;
    return 0;
  }
  if ((*(int *)(arg1 + 0x60) == 0) &&
      (iVar1 = stb_vorbis_stream_length_in_samples_part_24(), iVar1 == 0)) {
    *(uint32_t *)(arg1 + 0x94) = 0x24;
    return 0;
  }
  vorbis_seek_base(arg1, arg2, 0);
  return 0;
}

/* ======================================================================
 * stb_vorbis_seek  (Ghidra `stb_vorbis_seek` @ 005b2a70)
 * Signature: uint8_t stb_vorbis_seek(void)
 * Calls: `stb_vorbis_stream_length_in_samples_part_24`, `vorbis_seek_base`
 * Called by: (none)
 */
uint64_t stb_vorbis_seek(stb_vorbis *arg1, uint arg2)

{
  int iVar1;

  if (arg1[0x44] != (stb_vorbis)0x0) {
    *(uint32_t *)(arg1 + 0x94) = 2;
    return 0;
  }
  if ((*(int *)(arg1 + 0x60) == 0) &&
      (iVar1 = stb_vorbis_stream_length_in_samples_part_24(), iVar1 == 0)) {
    *(uint32_t *)(arg1 + 0x94) = 0x24;
    return 0;
  }
  vorbis_seek_base(arg1, arg2, 1);
  return 0;
}

/* ======================================================================
 * stb_vorbis_seek_start  (Ghidra `stb_vorbis_seek_start` @ 005b2ad0)
 * Signature: uint8_t stb_vorbis_seek_start(void)
 * Calls: `fseek`, `vorbis_decode_initial`, `vorbis_decode_packet_rest`, `vorbis_finish_frame`
 * Called by: (none)
 */
void stb_vorbis_seek_start(stb_vorbis *arg1)

{
  uint uVar1;
  int iVar2;
  ulong __off;
  int *in_stack_ffffffffffffffd0;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;

  if (arg1[0x44] == (stb_vorbis)0x0) {
    uVar1 = *(uint *)(arg1 + 0x48);
    *(uint32_t *)(arg1 + 0x90) = 0;
    if (*(long *)(arg1 + 0x28) == 0) {
      __off = (ulong)(uVar1 + *(int *)(arg1 + 0x20));
      if (((int)uVar1 < 0) || (uVar1 + *(int *)(arg1 + 0x20) < uVar1)) {
        *(uint32_t *)(arg1 + 0x90) = 1;
        __off = 0x7fffffff;
      }
      iVar2 = fseek(*(FILE **)(arg1 + 0x18), __off, 0);
      if (iVar2 != 0) {
        *(uint32_t *)(arg1 + 0x90) = 1;
        fseek(*(FILE **)(arg1 + 0x18), (ulong) * (uint *)(arg1 + 0x20), 2);
      }
    } else if ((ulong)uVar1 + *(long *)(arg1 + 0x30) < *(ulong *)(arg1 + 0x38)) {
      *(ulong *)(arg1 + 0x28) = (ulong)uVar1 + *(long *)(arg1 + 0x30);
    } else {
      *(ulong *)(arg1 + 0x28) = *(ulong *)(arg1 + 0x38);
      *(uint32_t *)(arg1 + 0x90) = 1;
    }
    *(uint32_t *)(arg1 + 0x4f0) = 0;
    arg1[0x6dd] = (stb_vorbis)0x1;
    *(uint32_t *)(arg1 + 0x6e0) = 0xffffffff;
    iVar2 = vorbis_decode_initial(arg1, &local_18, &local_10, &local_1c, &local_c, &local_14);
    if (iVar2 != 0) {
      iVar2 = vorbis_decode_packet_rest(
          arg1, &local_20, (Mode *)(arg1 + (long)local_14 * 6 + 0x1ec), local_18, local_1c, local_c,
          (int)&local_18, in_stack_ffffffffffffffd0);
      if (iVar2 != 0) {
        vorbis_finish_frame(arg1, local_20, local_18, local_1c);
        return;
      }
    }
  } else {
    *(uint32_t *)(arg1 + 0x94) = 2;
  }
  return;
}

/* ======================================================================
 * stb_vorbis_stream_length_in_samples  (Ghidra `stb_vorbis_stream_length_in_samples` @ 005b2c30)
 * Signature: uint8_t stb_vorbis_stream_length_in_samples(void)
 * Calls: `stb_vorbis_stream_length_in_samples_part_24`
 * Called by: (none)
 */
uint64_t stb_vorbis_stream_length_in_samples(long arg1)

{
  uint64_t uVar1;

  if (*(char *)(arg1 + 0x44) != '\0') {
    *(uint32_t *)(arg1 + 0x94) = 2;
    return 0;
  }
  uVar1 = stb_vorbis_stream_length_in_samples_part_24();
  return uVar1;
}

/* ======================================================================
 * stb_vorbis_stream_length_in_seconds  (Ghidra `stb_vorbis_stream_length_in_seconds` @ 005b2c50)
 * Signature: uint8_t stb_vorbis_stream_length_in_seconds(void)
 * Calls: `stb_vorbis_stream_length_in_samples_part_24`
 * Called by: (none)
 */
float stb_vorbis_stream_length_in_seconds(uint *arg1)

{
  uint uVar1;

  if ((char)arg1[0x11] != '\0') {
    arg1[0x25] = 2;
    return 0.0 / (float)*arg1;
  }
  uVar1 = stb_vorbis_stream_length_in_samples_part_24();
  return (float)uVar1 / (float)*arg1;
}

/* ======================================================================
 * stb_vorbis_get_frame_float  (Ghidra `stb_vorbis_get_frame_float` @ 005b2ca0)
 * Signature: uint8_t stb_vorbis_get_frame_float(void)
 * Calls: `stb_vorbis_get_frame_float_part_25`
 * Called by: (none)
 */
uint64_t stb_vorbis_get_frame_float(long arg1)

{
  uint64_t uVar1;

  if (*(char *)(arg1 + 0x44) != '\0') {
    *(uint32_t *)(arg1 + 0x94) = 2;
    return 0;
  }
  uVar1 = stb_vorbis_get_frame_float_part_25();
  return uVar1;
}

/* ======================================================================
 * stb_vorbis_open_file_section  (Ghidra `stb_vorbis_open_file_section` @ 005b2cc0)
 * Signature: uint8_t stb_vorbis_open_file_section(void)
 * Calls: `ftell`, `malloc`, `start_decoder`, `start_page`, `vorbis_decode_initial`, `vorbis_decode_packet_rest`, `vorbis_deinit`, `vorbis_finish_frame`
 * Called by: `stb_vorbis_open_file`, `stb_vorbis_open_filename`
 */
stb_vorbis *stb_vorbis_open_file_section(FILE *arg1, uint32_t arg2, uint32_t *arg3, long *arg4,
                                         uint32_t arg5)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  stb_vorbis *psVar4;
  stb_vorbis *psVar5;
  stb_vorbis *psVar6;
  byte bVar7;
  int *in_stack_fffffffffffff850;
  stb_vorbis local_7a8[8];
  int local_7a0;
  FILE *local_790;
  uint32_t local_788;
  uint32_t local_784;
  uint32_t local_768;
  long local_730;
  uint64_t local_728;
  int local_720;
  uint local_71c;
  uint32_t local_714;
  byte local_cd;
  uint32_t local_a0;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c[3];

  bVar7 = 0;
  psVar4 = local_7a8;
  for (lVar3 = 0xed; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(uint64_t *)psVar4 = 0;
    psVar4 = psVar4 + 8;
  }
  if (arg4 != (long *)0x0) {
    local_730 = *arg4;
    uVar1 = (int)arg4[1] + 3;
    local_71c = uVar1 & 0xfffffffc;
    local_728._4_4_ = (uint32_t)((ulong)arg4[1] >> 0x20);
    local_728 = CONCAT44(local_728._4_4_, uVar1) & 0xfffffffffffffffc;
  }
  local_a0 = 0xffffffff;
  local_790 = arg1;
  lVar3 = ftell(arg1);
  local_788 = (uint32_t)lVar3;
  local_784 = arg2;
  local_768 = arg5;
  iVar2 = start_page(local_7a8);
  if (iVar2 != 0) {
    if ((((local_cd & 2) == 0) || ((local_cd & 4) != 0)) || ((local_cd & 1) != 0)) {
      local_714 = 0x22;
    } else {
      iVar2 = start_decoder(local_7a8);
      if (iVar2 != 0) {
        local_7a0 = local_7a0 + 0x768;
        if (local_730 == 0) {
          psVar4 = malloc(0x768);
        } else {
          if ((int)local_71c < local_720 + 0x768)
            goto LAB_005b2d65;
          lVar3 = (long)local_720;
          local_720 = local_720 + 0x768;
          psVar4 = (stb_vorbis *)(lVar3 + local_730);
        }
        if (psVar4 != (stb_vorbis *)0x0) {
          psVar5 = local_7a8;
          psVar6 = psVar4;
          for (lVar3 = 0xed; lVar3 != 0; lVar3 = lVar3 + -1) {
            *(uint64_t *)psVar6 = *(uint64_t *)psVar5;
            psVar5 = psVar5 + (ulong)bVar7 * -0x10 + 8;
            psVar6 = psVar6 + (ulong)bVar7 * -0x10 + 8;
          }
          iVar2 =
              vorbis_decode_initial(psVar4, &local_38, &local_30, &local_3c, local_2c, &local_34);
          if (iVar2 == 0) {
            return psVar4;
          }
          iVar2 = vorbis_decode_packet_rest(
              psVar4, &local_40, (Mode *)(psVar4 + (long)local_34 * 6 + 0x1ec), local_38, local_3c,
              local_2c[0], (int)&local_38, in_stack_fffffffffffff850);
          if (iVar2 == 0) {
            return psVar4;
          }
          vorbis_finish_frame(psVar4, local_40, local_38, local_3c);
          return psVar4;
        }
      }
    }
  }
LAB_005b2d65:
  if (arg3 != (uint32_t *)0x0) {
    *arg3 = local_714;
  }
  vorbis_deinit(local_7a8);
  return (stb_vorbis *)0x0;
}

/* ======================================================================
 * stb_vorbis_open_file  (Ghidra `stb_vorbis_open_file` @ 005b2ec0)
 * Signature: uint8_t stb_vorbis_open_file(void)
 * Calls: `fseek`, `ftell`, `stb_vorbis_open_file_section`
 * Called by: (none)
 */
void stb_vorbis_open_file(FILE *arg1, uint32_t arg2, uint64_t arg3, uint64_t arg4)

{
  ulong uVar1;
  long lVar2;

  uVar1 = ftell(arg1);
  fseek(arg1, 0, 2);
  lVar2 = ftell(arg1);
  fseek(arg1, uVar1 & 0xffffffff, 0);
  stb_vorbis_open_file_section(arg1, arg2, arg3, arg4, (int)lVar2 - (int)uVar1);
  return;
}

/* ======================================================================
 * stb_vorbis_open_filename  (Ghidra `stb_vorbis_open_filename` @ 005b2f60)
 * Signature: uint8_t stb_vorbis_open_filename(void)
 * Calls: `fopen`, `fseek`, `ftell`, `stb_vorbis_open_file_section`
 * Called by: (none)
 */
uint64_t stb_vorbis_open_filename(char *arg1, uint32_t *arg2, uint64_t arg3)

{
  FILE *__stream;
  ulong uVar1;
  long lVar2;
  uint64_t uVar3;

  __stream = fopen(arg1, "rb");
  if (__stream != (FILE *)0x0) {
    uVar1 = ftell(__stream);
    fseek(__stream, 0, 2);
    lVar2 = ftell(__stream);
    fseek(__stream, uVar1 & 0xffffffff, 0);
    uVar3 = stb_vorbis_open_file_section(__stream, 1, arg2, arg3, (int)lVar2 - (int)uVar1);
    return uVar3;
  }
  if (arg2 != (uint32_t *)0x0) {
    *arg2 = 6;
  }
  return 0;
}

/* ======================================================================
 * stb_vorbis_open_memory  (Ghidra `stb_vorbis_open_memory` @ 005b3030)
 * Signature: uint8_t stb_vorbis_open_memory(void)
 * Calls: `malloc`, `start_decoder`, `start_page`, `vorbis_decode_initial`, `vorbis_decode_packet_rest`, `vorbis_deinit`, `vorbis_finish_frame`
 * Called by: (none)
 */
stb_vorbis *stb_vorbis_open_memory(long arg1, int arg2, uint32_t *arg3, long *arg4)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  stb_vorbis *psVar4;
  stb_vorbis *psVar5;
  stb_vorbis *psVar6;
  byte bVar7;
  int *in_stack_fffffffffffff860;
  stb_vorbis local_798[8];
  int local_790;
  long local_770;
  long local_768;
  long local_760;
  int local_758;
  long local_720;
  uint64_t local_718;
  int local_710;
  uint local_70c;
  uint32_t local_704;
  byte local_bd;
  uint32_t local_90;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;

  bVar7 = 0;
  if (arg1 == 0) {
    return (stb_vorbis *)0x0;
  }
  psVar4 = local_798;
  for (lVar3 = 0xed; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(uint64_t *)psVar4 = 0;
    psVar4 = psVar4 + 8;
  }
  if (arg4 != (long *)0x0) {
    local_720 = *arg4;
    uVar1 = (int)arg4[1] + 3;
    local_70c = uVar1 & 0xfffffffc;
    local_718._4_4_ = (uint32_t)((ulong)arg4[1] >> 0x20);
    local_718 = CONCAT44(local_718._4_4_, uVar1) & 0xfffffffffffffffc;
  }
  local_90 = 0xffffffff;
  local_760 = arg2 + arg1;
  local_770 = arg1;
  local_768 = arg1;
  local_758 = arg2;
  iVar2 = start_page(local_798);
  if (iVar2 != 0) {
    if ((((local_bd & 2) == 0) || ((local_bd & 4) != 0)) || ((local_bd & 1) != 0)) {
      local_704 = 0x22;
    } else {
      iVar2 = start_decoder(local_798);
      if (iVar2 != 0) {
        local_790 = local_790 + 0x768;
        if (local_720 == 0) {
          psVar4 = malloc(0x768);
        } else {
          if ((int)local_70c < local_710 + 0x768)
            goto LAB_005b30d9;
          lVar3 = (long)local_710;
          local_710 = local_710 + 0x768;
          psVar4 = (stb_vorbis *)(lVar3 + local_720);
        }
        if (psVar4 != (stb_vorbis *)0x0) {
          psVar5 = local_798;
          psVar6 = psVar4;
          for (lVar3 = 0xed; lVar3 != 0; lVar3 = lVar3 + -1) {
            *(uint64_t *)psVar6 = *(uint64_t *)psVar5;
            psVar5 = psVar5 + (ulong)bVar7 * -0x10 + 8;
            psVar6 = psVar6 + (ulong)bVar7 * -0x10 + 8;
          }
          iVar2 =
              vorbis_decode_initial(psVar4, &local_28, &local_20, &local_2c, &local_1c, &local_24);
          if (iVar2 == 0) {
            return psVar4;
          }
          iVar2 = vorbis_decode_packet_rest(
              psVar4, &local_30, (Mode *)(psVar4 + (long)local_24 * 6 + 0x1ec), local_28, local_2c,
              local_1c, (int)&local_28, in_stack_fffffffffffff860);
          if (iVar2 == 0) {
            return psVar4;
          }
          vorbis_finish_frame(psVar4, local_30, local_28, local_2c);
          return psVar4;
        }
      }
    }
  }
LAB_005b30d9:
  if (arg3 != (uint32_t *)0x0) {
    *arg3 = local_704;
  }
  vorbis_deinit(local_798);
  return (stb_vorbis *)0x0;
}

/* ======================================================================
 * stb_vorbis_get_frame_short  (Ghidra `stb_vorbis_get_frame_short` @ 005b3240)
 * Signature: uint8_t stb_vorbis_get_frame_short(void)
 * Calls: `convert_samples_short`, `stb_vorbis_get_frame_float_part_25`
 * Called by: (none)
 */
int stb_vorbis_get_frame_short(long arg1, int arg2, short **arg3, int arg4)

{
  int iVar1;
  float **local_30[2];

  if (*(char *)(arg1 + 0x44) == '\0') {
    iVar1 = stb_vorbis_get_frame_float_part_25(arg1, 0, local_30);
  } else {
    *(uint32_t *)(arg1 + 0x94) = 2;
    iVar1 = 0;
  }
  if (iVar1 <= arg4) {
    arg4 = iVar1;
  }
  if (arg4 != 0) {
    convert_samples_short(arg2, arg3, 0, *(int *)(arg1 + 4), local_30[0], 0, arg4);
  }
  return arg4;
}

/* ======================================================================
 * stb_vorbis_get_frame_short_interleaved  (Ghidra `stb_vorbis_get_frame_short_interleaved` @ 005b32e0)
 * Signature: uint8_t stb_vorbis_get_frame_short_interleaved(void)
 * Calls: `convert_channels_short_interleaved`, `convert_samples_short`, `stb_vorbis_get_frame_float_part_25`
 * Called by: (none)
 */
ulong stb_vorbis_get_frame_short_interleaved(long arg1, int arg2, short *arg3, ulong arg4)

{
  uint uVar1;
  ulong uVar2;
  short *local_30;
  float **local_28;
  float **local_20;

  local_30 = arg3;
  if (arg2 == 1) {
    if (*(char *)(arg1 + 0x44) == '\0') {
      uVar1 = stb_vorbis_get_frame_float_part_25(arg1, 0, &local_20);
      arg4 = arg4 & 0xffffffff;
    } else {
      *(uint32_t *)(arg1 + 0x94) = 2;
      uVar1 = 0;
    }
    uVar2 = arg4 & 0xffffffff;
    if ((int)uVar1 <= (int)arg4) {
      uVar2 = (ulong)uVar1;
    }
    if ((int)uVar2 != 0) {
      convert_samples_short(1, &local_30, 0, *(int *)(arg1 + 4), local_20, 0, (int)uVar2);
    }
  } else if (*(char *)(arg1 + 0x44) == '\0') {
    uVar1 = stb_vorbis_get_frame_float_part_25(arg1, 0, &local_28);
    uVar2 = (ulong)uVar1;
    if (uVar1 != 0) {
      if ((int)arg4 < (int)(arg2 * uVar1)) {
        uVar2 = (long)(int)arg4 / (long)arg2 & 0xffffffff;
      }
      convert_channels_short_interleaved(arg2, local_30, *(int *)(arg1 + 4), local_28, 0,
                                         (int)uVar2);
    }
  } else {
    *(uint32_t *)(arg1 + 0x94) = 2;
    uVar2 = 0;
  }
  return uVar2;
}

/* ======================================================================
 * stb_vorbis_get_samples_short_interleaved  (Ghidra `stb_vorbis_get_samples_short_interleaved` @ 005b33f0)
 * Signature: uint8_t stb_vorbis_get_samples_short_interleaved(void)
 * Calls: `convert_channels_short_interleaved`, `stb_vorbis_get_frame_float_part_25`
 * Called by: (none)
 */
int stb_vorbis_get_samples_short_interleaved(long arg1, int arg2, short *arg3, int arg4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint8_t local_40[16];

  arg4 = arg4 / arg2;
  iVar3 = 0;
  if (0 < arg4) {
    while (true) {
      iVar2 = *(int *)(arg1 + 0x75c);
      iVar4 = *(int *)(arg1 + 0x760) - iVar2;
      iVar1 = iVar3 + iVar4;
      if (arg4 <= iVar3 + iVar4) {
        iVar4 = arg4 - iVar3;
        iVar1 = arg4;
      }
      iVar3 = iVar1;
      if (iVar4 != 0) {
        convert_channels_short_interleaved(arg2, arg3, *(int *)(arg1 + 4), (float **)(arg1 + 0x370),
                                           iVar2, iVar4);
        iVar2 = *(int *)(arg1 + 0x75c);
      }
      *(int *)(arg1 + 0x75c) = iVar4 + iVar2;
      arg3 = arg3 + iVar4 * arg2;
      if (arg4 == iVar3) {
        return iVar3;
      }
      if (*(char *)(arg1 + 0x44) != '\0')
        break;
      iVar2 = stb_vorbis_get_frame_float_part_25(arg1, 0, local_40);
      if (iVar2 == 0) {
        return iVar3;
      }
      if (arg4 <= iVar3) {
        return iVar3;
      }
    }
    *(uint32_t *)(arg1 + 0x94) = 2;
  }
  return iVar3;
}

/* ======================================================================
 * stb_vorbis_get_samples_short  (Ghidra `stb_vorbis_get_samples_short` @ 005b34f0)
 * Signature: uint8_t stb_vorbis_get_samples_short(void)
 * Calls: `convert_samples_short`, `stb_vorbis_get_frame_float_part_25`
 * Called by: (none)
 */
int stb_vorbis_get_samples_short(long arg1, int arg2, short **arg3, int arg4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint8_t local_40[16];

  iVar3 = 0;
  if (0 < arg4) {
    iVar2 = 0;
    while (true) {
      iVar1 = *(int *)(arg1 + 0x75c);
      iVar4 = *(int *)(arg1 + 0x760) - iVar1;
      iVar3 = iVar2 + iVar4;
      if (arg4 <= iVar2 + iVar4) {
        iVar4 = arg4 - iVar2;
        iVar3 = arg4;
      }
      if (iVar4 != 0) {
        convert_samples_short(arg2, arg3, iVar2, *(int *)(arg1 + 4), (float **)(arg1 + 0x370),
                              iVar1, iVar4);
        iVar1 = *(int *)(arg1 + 0x75c);
      }
      *(int *)(arg1 + 0x75c) = iVar4 + iVar1;
      if (arg4 == iVar3) {
        return iVar3;
      }
      if (*(char *)(arg1 + 0x44) != '\0')
        break;
      iVar2 = stb_vorbis_get_frame_float_part_25(arg1, 0, local_40);
      if (iVar2 == 0) {
        return iVar3;
      }
      iVar2 = iVar3;
      if (arg4 <= iVar3) {
        return iVar3;
      }
    }
    *(uint32_t *)(arg1 + 0x94) = 2;
  }
  return iVar3;
}

/* ======================================================================
 * stb_vorbis_decode_filename  (Ghidra `stb_vorbis_decode_filename` @ 005b35c0)
 * Signature: uint8_t stb_vorbis_decode_filename(void)
 * Calls: `convert_channels_short_interleaved`, `convert_samples_short`, `fopen`, `free`, `fseek`, `ftell`, `malloc`, `realloc`, `stb_vorbis_get_frame_float_part_25`, `stb_vorbis_open_file_section_constprop_33` (+1 more)
 * Called by: (none)
 */
int stb_vorbis_decode_filename(char *arg1, int *arg2, uint64_t *arg3)

{
  int iVar1;
  int iVar2;
  FILE *__stream;
  ulong uVar3;
  long lVar4;
  stb_vorbis *__ptr;
  void *__ptr_00;
  void *pvVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_68;
  short *local_58;
  float **local_50;
  float **local_48;
  uint8_t local_3c[12];

  __stream = fopen(arg1, "rb");
  local_68 = -1;
  if (__stream != (FILE *)0x0) {
    uVar3 = ftell(__stream);
    fseek(__stream, 0, 2);
    lVar4 = ftell(__stream);
    fseek(__stream, uVar3 & 0xffffffff, 0);
    __ptr = (stb_vorbis *)stb_vorbis_open_file_section_constprop_33(__stream, local_3c,
                                                                    (int)lVar4 - (int)uVar3);
    if (__ptr != (stb_vorbis *)0x0) {
      iVar7 = *(int *)(__ptr + 4);
      *arg2 = iVar7;
      iVar7 = iVar7 * 0x1000;
      __ptr_00 = malloc((long)iVar7 * 2);
      if (__ptr_00 != (void *)0x0) {
        iVar2 = *(int *)(__ptr + 4);
        iVar8 = 0;
        local_68 = 0;
        iVar9 = iVar7;
        do {
          local_58 = (short *)((long)__ptr_00 + (long)iVar8 * 2);
          iVar6 = iVar9 - iVar8;
          if (iVar2 == 1) {
            if (__ptr[0x44] == (stb_vorbis)0x0) {
              iVar2 = stb_vorbis_get_frame_float_part_25(__ptr, 0, &local_48);
            } else {
              *(uint32_t *)(__ptr + 0x94) = 2;
              iVar2 = 0;
            }
            iVar1 = iVar6;
            if (iVar2 <= iVar6) {
              iVar1 = iVar2;
            }
            if (iVar1 == 0)
              goto LAB_005b36ab;
            convert_samples_short(1, &local_58, 0, *(int *)(__ptr + 4), local_48, 0, iVar1);
          } else {
            if (__ptr[0x44] != (stb_vorbis)0x0) {
              *(uint32_t *)(__ptr + 0x94) = 2;
            LAB_005b36ab:
              *arg3 = __ptr_00;
              return local_68;
            }
            iVar1 = stb_vorbis_get_frame_float_part_25(__ptr, 0, &local_50);
            if (iVar1 == 0)
              goto LAB_005b36ab;
            if (iVar6 < iVar1 * iVar2) {
              iVar1 = iVar6 / iVar2;
            }
            convert_channels_short_interleaved(iVar2, local_58, *(int *)(__ptr + 4), local_50, 0,
                                               iVar1);
          }
          if (iVar1 == 0)
            goto LAB_005b36ab;
          iVar2 = *(int *)(__ptr + 4);
          local_68 = local_68 + iVar1;
          iVar8 = iVar8 + iVar1 * iVar2;
          if (iVar9 < iVar7 + iVar8) {
            iVar9 = iVar9 * 2;
            pvVar5 = realloc(__ptr_00, (long)iVar9 * 2);
            if (pvVar5 == (void *)0x0) {
              free(__ptr_00);
              break;
            }
            iVar2 = *(int *)(__ptr + 4);
            __ptr_00 = pvVar5;
          }
        } while (true);
      }
      vorbis_deinit(__ptr);
      local_68 = -2;
      if (*(long *)(__ptr + 0x78) == 0) {
        free(__ptr);
      }
    }
  }
  return local_68;
}

/* ======================================================================
 * stb_vorbis_decode_memory  (Ghidra `stb_vorbis_decode_memory` @ 005b3810)
 * Signature: uint8_t stb_vorbis_decode_memory(void)
 * Calls: `convert_channels_short_interleaved`, `convert_samples_short`, `free`, `malloc`, `realloc`, `stb_vorbis_get_frame_float_part_25`, `stb_vorbis_open_memory_constprop_31`, `vorbis_deinit`
 * Called by: `AudioFile__AudioFile`
 */
int stb_vorbis_decode_memory(uint64_t arg1, uint64_t arg2, int *arg3, uint64_t *arg4,
                             uint64_t *arg5)

{
  int iVar1;
  int iVar2;
  stb_vorbis *__ptr;
  void *__ptr_00;
  void *pvVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_68;
  short *local_58;
  float **local_50;
  float **local_48;
  uint8_t local_3c[12];

  __ptr = (stb_vorbis *)stb_vorbis_open_memory_constprop_31(arg1, arg2, local_3c);
  *arg5 = __ptr;
  if (__ptr == (stb_vorbis *)0x0) {
    local_68 = -1;
  } else {
    iVar5 = *(int *)(__ptr + 4);
    *arg3 = iVar5;
    iVar5 = iVar5 * 0x1000;
    __ptr_00 = malloc((long)iVar5 * 2);
    if (__ptr_00 != (void *)0x0) {
      iVar2 = *(int *)(__ptr + 4);
      iVar6 = 0;
      local_68 = 0;
      iVar7 = iVar5;
      do {
        local_58 = (short *)((long)__ptr_00 + (long)iVar6 * 2);
        iVar4 = iVar7 - iVar6;
        if (iVar2 == 1) {
          if (__ptr[0x44] == (stb_vorbis)0x0) {
            iVar2 = stb_vorbis_get_frame_float_part_25(__ptr, 0, &local_48);
          } else {
            *(uint32_t *)(__ptr + 0x94) = 2;
            iVar2 = 0;
          }
          iVar1 = iVar4;
          if (iVar2 <= iVar4) {
            iVar1 = iVar2;
          }
          if (iVar1 == 0)
            goto LAB_005b38ab;
          convert_samples_short(1, &local_58, 0, *(int *)(__ptr + 4), local_48, 0, iVar1);
        } else {
          if (__ptr[0x44] != (stb_vorbis)0x0) {
            *(uint32_t *)(__ptr + 0x94) = 2;
          LAB_005b38ab:
            *arg4 = __ptr_00;
            return local_68;
          }
          iVar1 = stb_vorbis_get_frame_float_part_25(__ptr, 0, &local_50);
          if (iVar1 == 0)
            goto LAB_005b38ab;
          if (iVar4 < iVar1 * iVar2) {
            iVar1 = iVar4 / iVar2;
          }
          convert_channels_short_interleaved(iVar2, local_58, *(int *)(__ptr + 4), local_50, 0,
                                             iVar1);
        }
        if (iVar1 == 0)
          goto LAB_005b38ab;
        iVar2 = *(int *)(__ptr + 4);
        local_68 = local_68 + iVar1;
        iVar6 = iVar6 + iVar1 * iVar2;
        if (iVar7 < iVar5 + iVar6) {
          iVar7 = iVar7 * 2;
          pvVar3 = realloc(__ptr_00, (long)iVar7 * 2);
          if (pvVar3 == (void *)0x0) {
            free(__ptr_00);
            break;
          }
          iVar2 = *(int *)(__ptr + 4);
          __ptr_00 = pvVar3;
        }
      } while (true);
    }
    vorbis_deinit(__ptr);
    local_68 = -2;
    if (*(long *)(__ptr + 0x78) == 0) {
      free(__ptr);
    }
  }
  return local_68;
}

/* ======================================================================
 * stb_vorbis_get_samples_float_interleaved  (Ghidra `stb_vorbis_get_samples_float_interleaved` @ 005b3a20)
 * Signature: uint8_t stb_vorbis_get_samples_float_interleaved(void)
 * Calls: `stb_vorbis_get_frame_float_part_25`
 * Called by: (none)
 */
int stb_vorbis_get_samples_float_interleaved(long arg1, uint arg2, uint32_t *arg3, int arg4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  uint32_t *puVar7;
  uint64_t *puVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int local_50;
  uint8_t local_40[16];

  arg4 = arg4 / (int)arg2;
  local_50 = 0;
  uVar14 = *(uint *)(arg1 + 4);
  if ((int)arg2 <= (int)*(uint *)(arg1 + 4)) {
    uVar14 = arg2;
  }
  if (arg4 < 1) {
    return 0;
  }
  do {
    iVar4 = *(int *)(arg1 + 0x75c);
    iVar13 = *(int *)(arg1 + 0x760) - iVar4;
    iVar9 = local_50 + iVar13;
    if (arg4 <= local_50 + iVar13) {
      iVar13 = arg4 - local_50;
      iVar9 = arg4;
    }
    local_50 = iVar9;
    iVar9 = 0;
    if (0 < iVar13) {
      do {
        lVar5 = 0;
        uVar12 = 0;
        if (0 < (int)uVar14) {
          do {
            arg3[lVar5] = *(uint32_t *)(*(long *)(arg1 + 0x370 + lVar5 * 8) +
                                        (long)(*(int *)(arg1 + 0x75c) + iVar9) * 4);
            lVar5 = lVar5 + 1;
          } while ((int)lVar5 < (int)uVar14);
          arg3 = arg3 + (ulong)(uVar14 - 1) + 1;
          uVar12 = uVar14;
        }
        if ((int)uVar12 < (int)arg2) {
          uVar1 = arg2 + 1 + ~uVar12;
          uVar10 = -(((uint)arg3 & 0xf) >> 2) & 3;
          if (uVar1 < uVar10) {
            uVar10 = uVar1;
          }
          puVar7 = arg3;
          uVar3 = uVar12;
          if (uVar10 == 0) {
          LAB_005b3b4c:
            uVar11 = uVar1 - uVar10 >> 2;
            uVar2 = uVar11 * 4;
            if (uVar11 != 0) {
              puVar8 = (uint64_t *)(arg3 + uVar10);
              uVar6 = 0;
              do {
                uVar6 = uVar6 + 1;
                *puVar8 = 0;
                puVar8[1] = 0;
                puVar8 = puVar8 + 2;
              } while (uVar6 < uVar11);
              uVar3 = uVar3 + uVar2;
              puVar7 = puVar7 + uVar2;
              if (uVar1 - uVar10 == uVar2)
                goto LAB_005b3ba2;
            }
            do {
              uVar3 = uVar3 + 1;
              *puVar7 = 0;
              puVar7 = puVar7 + 1;
            } while ((int)uVar3 < (int)arg2);
          } else {
            do {
              uVar3 = uVar3 + 1;
              *puVar7 = 0;
              puVar7 = puVar7 + 1;
            } while (uVar3 - uVar12 < uVar10);
            if (uVar1 != uVar10)
              goto LAB_005b3b4c;
          }
        LAB_005b3ba2:
          arg3 = arg3 + (ulong)(~uVar12 + arg2) + 1;
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 != iVar13);
      iVar4 = *(int *)(arg1 + 0x75c);
    }
    *(int *)(arg1 + 0x75c) = iVar4 + iVar13;
    if (arg4 == local_50) {
      return local_50;
    }
    if (*(char *)(arg1 + 0x44) != '\0') {
      *(uint32_t *)(arg1 + 0x94) = 2;
      return local_50;
    }
    iVar4 = stb_vorbis_get_frame_float_part_25(arg1, 0, local_40);
    if (iVar4 == 0) {
      return local_50;
    }
    if (arg4 <= local_50) {
      return local_50;
    }
  } while (true);
}

/* ======================================================================
 * stb_vorbis_get_samples_float  (Ghidra `stb_vorbis_get_samples_float` @ 005b3c20)
 * Signature: uint8_t stb_vorbis_get_samples_float(void)
 * Calls: `memcpy`, `memset`, `stb_vorbis_get_frame_float_part_25`
 * Called by: (none)
 */
int stb_vorbis_get_samples_float(long arg1, int arg2, long arg3, int arg4)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  int local_68;
  int local_64;
  uint8_t local_40[16];

  local_68 = 0;
  iVar7 = *(int *)(arg1 + 4);
  if (arg2 <= *(int *)(arg1 + 4)) {
    iVar7 = arg2;
  }
  if (0 < arg4) {
    local_64 = 0;
    while (true) {
      iVar3 = *(int *)(arg1 + 0x75c);
      iVar6 = *(int *)(arg1 + 0x760) - iVar3;
      local_68 = local_64 + iVar6;
      if (arg4 <= local_68) {
        iVar6 = arg4 - local_64;
        local_68 = arg4;
      }
      if (iVar6 != 0) {
        iVar4 = 0;
        if (0 < iVar7) {
          lVar5 = 0;
          while (true) {
            lVar2 = lVar5 * 8;
            lVar5 = lVar5 + 1;
            memcpy((void *)((long)local_64 * 4 + *(long *)(arg3 + lVar2)),
                   (void *)(arg1 + 0x370 + (long)iVar3 * 8), (long)iVar6 << 2);
            iVar4 = iVar7;
            if (iVar7 <= (int)lVar5)
              break;
            iVar3 = *(int *)(arg1 + 0x75c);
          }
        }
        if (iVar4 < arg2) {
          lVar5 = 0;
          do {
            plVar1 = (long *)(arg3 + (long)iVar4 * 8 + lVar5);
            lVar5 = lVar5 + 8;
            memset((void *)((long)local_64 * 4 + *plVar1), 0, (long)iVar6 * 4);
          } while (lVar5 != (ulong)(uint)((arg2 + -1) - iVar4) * 8 + 8);
        }
        iVar3 = *(int *)(arg1 + 0x75c);
      }
      *(int *)(arg1 + 0x75c) = iVar6 + iVar3;
      if (arg4 == local_68) {
        return local_68;
      }
      if (*(char *)(arg1 + 0x44) != '\0')
        break;
      iVar3 = stb_vorbis_get_frame_float_part_25(arg1, 0, local_40);
      if (iVar3 == 0) {
        return local_68;
      }
      local_64 = local_68;
      if (arg4 <= local_68) {
        return local_68;
      }
    }
    *(uint32_t *)(arg1 + 0x94) = 2;
  }
  return local_68;
}
