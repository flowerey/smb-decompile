/* src/engine/core_04.c — 78 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "core_04.h"

/* ======================================================================
 * RightPress  (Ghidra `RightPress` @ 00469db0)
 * Signature: uint8_t __stdcall RightPress(tagButtonProps * arg1, void * arg2)
 * Calls: (none)
 * Called by: (none)
 */
/* FlyWrench__RightPress(tagButtonProps const*, void*) */

void FlyWrench__RightPress(tagButtonProps *arg1,void *arg2)

{
  arg1[0x7d8] = (tagButtonProps)((byte)arg1[0x7d8] & 0xf7 | (*(int *)arg2 - 1U < 2) << 3);
  return;
}

/* ======================================================================
 * RightPress__00473d90  (Ghidra `RightPress` @ 00473d90)
 * Signature: uint8_t __stdcall RightPress(tagButtonProps * arg1, void * arg2)
 * Calls: (none)
 * Called by: (none)
 */
/* MeatBoyCharactor__RightPress(tagButtonProps const*, void*) */

void MeatBoyCharactor__RightPress(tagButtonProps *arg1,void *arg2)

{
  tagButtonProps tVar1;
  
  tVar1 = arg1[0x7d8];
  if ((((byte)tVar1 & 4) != 0) && (*(uint *)((long)arg2 + 4) < 0xfb)) {
    arg1[0x7d8] = (tagButtonProps)((byte)tVar1 & 0xf7);
    return;
  }
  arg1[0x7d8] = (tagButtonProps)((byte)tVar1 & 0xf7 | (*(int *)arg2 - 1U < 2) << 3);
  return;
}

/* ======================================================================
 * Render  (Ghidra `Render` @ 0047a2c0)
 * Signature: uint8_t __stdcall Render(MeatBoyCharactor * arg1, FlashLibraryInstance * arg2)
 * Calls: `FlashLibraryInstance__IsPlaying`, `FlashLibraryInstance__Reset`, `GetRandomINT`, `MeatBoyCharFoundation__Render`, `MeatBoyCharactor__RenderEffects`, `RegisterAudioPosition`, `Vector2__operator_assign`, `Vector2__operator_mul_assign__005be220`, `Vector2__operator_plus__005be140`
 * Called by: `CommanderVideo__Render`, `GSuperMeatBoy__Render`, `Render__005b9970`, `SMBEditor__Render`, `SMBPopupMenu__Render__00502110`, `TEngine__EngineRun`, `TEngine__Render`
 */
/* MeatBoyCharFoundation__Render(MeatBoyCharactor*, FlashLibraryInstance*) [clone .constprop.59] */

void MeatBoyCharFoundation__Render(MeatBoyCharactor *arg1,FlashLibraryInstance *arg2)

{
  long lVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  uint32_t uVar5;
  FlashLibraryInstance *pFVar6;
  byte bVar7;
  float local_9c;
  Matrix4x4 local_78 [64];
  float local_38;
  uint local_34;
  Vector2 local_28 [16];
  
  lVar1 = (long)*(int *)(arg2 + 0x7d4) * 0x58;
  if (*(uint *)(arg2 + 0xa4c) == 0xffffffff) {
    pFVar6 = *(FlashLibraryInstance **)
              (*(long *)(arg1 + lVar1 + 0x40) + (ulong)*(ushort *)(arg1 + lVar1 + 0x58) * 8);
  }
  else {
    pFVar6 = *(FlashLibraryInstance **)
              (*(long *)(arg1 + lVar1 + 0x40) + (ulong)(*(uint *)(arg2 + 0xa4c) & 0xffff) * 8)
    ;
  }
  *(uint32_t *)(pFVar6 + 0x58) = *(uint32_t *)(arg2 + 0xa50);
  if (*(int *)(arg2 + 0x7d4) == 0x10) {
    *(uint8_t *)(*(long *)arg1 + 0x8d) = 1;
  }
  else {
    *(uint8_t *)(*(long *)arg1 + 0x8d) = 0;
  }
  iVar3 = *(int *)(arg2 + 0x7d4);
  if (iVar3 == 0xe) {
    iVar3 = FlashLibraryInstance__IsPlaying(pFVar6);
    if (iVar3 == 0) {
      if (*(int *)(arg2 + 0xa40) != 0) {
        return;
      }
      arg2[0x7db] = (FlashLibraryInstance)((byte)arg2[0x7db] | 0x80);
    }
LAB_0047a610:
    iVar3 = *(int *)(arg2 + 0x7d4);
LAB_0047a338:
    uVar4 = *(uint *)(arg2 + 0xa4c);
    uVar5 = *(uint32_t *)(arg2 + 0xa50);
  }
  else {
    if (iVar3 != 0x10) goto LAB_0047a338;
    iVar3 = FlashLibraryInstance__IsPlaying(pFVar6);
    if (iVar3 != 0) goto LAB_0047a610;
    if (*(int *)(arg2 + 0x7d4) == 0) {
      uVar4 = *(uint *)(arg2 + 0xa4c);
      uVar5 = *(uint32_t *)(arg2 + 0xa50);
    }
    else {
      lVar1 = *(long *)(arg2 + 0xf8);
      arg2[0x7db] = (FlashLibraryInstance)((byte)arg2[0x7db] | 8);
      uVar4 = 0;
      if (*(short *)(lVar1 + 0x30) != 0) {
        uVar4 = GetRandomINT(0);
      }
      *(uint *)(lVar1 + 0x58) = uVar4;
      uVar5 = 0;
      *(uint *)(arg2 + 0xa4c) = uVar4;
      *(uint32_t *)(arg2 + 0xa50) = 0;
    }
    *(uint32_t *)(arg2 + 0x7d4) = 0;
    iVar3 = 0;
  }
  lVar1 = (long)iVar3 * 0x58;
  if (uVar4 == 0xffffffff) {
    pFVar6 = *(FlashLibraryInstance **)
              (*(long *)(arg1 + lVar1 + 0x40) + (ulong)*(ushort *)(arg1 + lVar1 + 0x58) * 8);
  }
  else {
    pFVar6 = *(FlashLibraryInstance **)
              (*(long *)(arg1 + lVar1 + 0x40) + (ulong)(uVar4 & 0xffff) * 8);
  }
  *(uint32_t *)(pFVar6 + 0x58) = uVar5;
  bVar7 = (byte)arg2[0x7d8] & 1;
  if (((byte)arg2[0x7d8] & 1) == 0) {
    iVar3 = *(int *)(arg2 + 0x7d4);
    local_38 = DAT_005c07a4 /* R:-1.0f */;
    if (iVar3 != 10) goto LAB_0047a3a2;
LAB_0047a5c4:
    if (bVar7 == 0) {
      local_38 = 1.0;
      goto LAB_0047a3a2;
    }
    local_38 = -1.0;
    local_9c = -1.0;
  }
  else {
    iVar3 = *(int *)(arg2 + 0x7d4);
    local_38 = DAT_005be894 /* R:1.0f */;
    if (iVar3 == 10) goto LAB_0047a5c4;
LAB_0047a3a2:
    if (iVar3 - 0x12U < 2) {
      local_38 = (float)((uint)local_38 ^ DAT_005be6f0 /* R:u32=2147483648 */);
    }
    local_9c = local_38;
    if (iVar3 - 0x14U < 2) {
      if (bVar7 == 0) {
        local_9c = DAT_005c07a4 /* R:-1.0f */;
        if ((*(ushort *)(arg2 + 0x7da) & 0x7ff) == 1) {
          local_9c = 1.0;
        }
      }
      else {
        local_9c = 1.0;
        if ((*(ushort *)(arg2 + 0x7da) & 0x7ff) == 0) {
          local_9c = DAT_005c07a4 /* R:-1.0f */;
        }
      }
    }
  }
  local_34 = 0x3f800000;
  if (((((byte)arg2[0x7d9] & 2) == 0) || (iVar3 == 0x15)) || (iVar3 == 0x14)) {
    *(uint32_t *)(arg2 + 0xd8) = 0;
    Vector2__operator_mul_assign__005be220((Vector2 *)&local_38,(Vector2 *)(arg2 + (long)iVar3 * 8 + 0x8d4));
  }
  else if ((*(ushort *)(arg2 + 0x7da) & 0x7ff) == 0) {
    Matrix4x4__ConvertToRotationMatrix(local_78,DAT_005c07ac /* R:0.7853981852531433f */);
    Matrix4x4__TransformVector2
              ((Vector2 *)&local_38,
               (Vector2 *)(arg2 + (long)*(int *)(arg2 + 0x7d4) * 8 + 0x8d4),local_78,1);
    *(uint32_t *)(arg2 + 0xd8) = 0xbf490fdb;
  }
  else {
    Matrix4x4__ConvertToRotationMatrix(local_78,DAT_005c07a8 /* R:-0.7853981852531433f */);
    Matrix4x4__TransformVector2
              ((Vector2 *)&local_38,
               (Vector2 *)(arg2 + (long)*(int *)(arg2 + 0x7d4) * 8 + 0x8d4),local_78,1);
    *(uint32_t *)(arg2 + 0xd8) = 0x3f490fdb;
  }
  if (0.0 < *(float *)(arg2 + 0x8c4)) {
    local_34 = local_34 ^ DAT_005be6f0 /* R:u32=2147483648 */;
  }
  Vector2__operator_plus__005be140(local_28,(Vector2 *)(arg2 + 0x868));
  Vector2__operator_assign((Vector2 *)(pFVar6 + 0x30),local_28);
  Vector2__operator_assign((Vector2 *)(pFVar6 + 0x40),(Vector2 *)(arg2 + 0xd0));
  *(float *)(pFVar6 + 0x40) = local_9c * *(float *)(pFVar6 + 0x40);
  if (*(float *)(arg2 + 0x8c4) <= 0.0) {
    *(uint32_t *)(pFVar6 + 0x44) = *(uint32_t *)(arg2 + 0xd4);
  }
  else {
    *(uint *)(pFVar6 + 0x44) = *(uint *)(arg2 + 0xd4) ^ DAT_005be6f0 /* R:u32=2147483648 */;
  }
  *(uint32_t *)(pFVar6 + 0x48) = *(uint32_t *)(arg2 + 0xd8);
  *(uint32_t *)(pFVar6 + 0x4c) = *(uint32_t *)(arg2 + 0xd8);
  RegisterAudioPosition((FPUVector *)(arg2 + 0x870));
  (**(code **)(*(long *)pFVar6 + 0x10))(pFVar6);
  *(uint32_t *)(arg2 + 0xa50) = *(uint32_t *)(pFVar6 + 0x58);
  iVar3 = *(int *)(arg2 + 0x7d4);
  if (iVar3 == 10) {
    iVar3 = FlashLibraryInstance__IsPlaying(pFVar6);
    if (iVar3 == 0) {
      FlashLibraryInstance__Reset(pFVar6);
      iVar3 = 5 - (uint)(((byte)arg2[0x7d8] & 0x40) == 0);
      if (*(int *)(arg2 + 0x7d4) != iVar3) {
        arg2[0x7db] = (FlashLibraryInstance)((byte)arg2[0x7db] | 8);
        uVar5 = 0;
        lVar1 = *(long *)(arg2 + 0xf8) + (long)iVar3 * 0x58;
        uVar2 = *(ushort *)(lVar1 + 0x30);
        if (uVar2 != 0) {
          uVar5 = GetRandomINT(0,uVar2 - 1);
        }
        *(uint32_t *)(lVar1 + 0x58) = uVar5;
        *(uint32_t *)(arg2 + 0xa4c) = uVar5;
        *(uint32_t *)(arg2 + 0xa50) = 0;
      }
      *(int *)(arg2 + 0x7d4) = iVar3;
      goto LAB_0047a518;
    }
    iVar3 = *(int *)(arg2 + 0x7d4);
  }
  if (iVar3 - 0xbU < 2) {
    iVar3 = FlashLibraryInstance__IsPlaying(pFVar6);
    if (iVar3 != 0) {
      iVar3 = *(int *)(arg2 + 0x7d4);
      goto LAB_0047a4ed;
    }
    FlashLibraryInstance__Reset(pFVar6);
    if (0.0 < *(float *)(arg2 + 0xbc)) {
LAB_0047a803:
      if (*(int *)(arg2 + 0x7d4) != 6) {
        lVar1 = *(long *)(arg2 + 0xf8);
        arg2[0x7db] = (FlashLibraryInstance)((byte)arg2[0x7db] | 8);
        uVar5 = 0;
        uVar2 = *(ushort *)(lVar1 + 0x240);
        if (uVar2 != 0) {
          uVar5 = GetRandomINT(0,uVar2 - 1);
        }
        *(uint32_t *)(lVar1 + 0x268) = uVar5;
        *(uint32_t *)(arg2 + 0xa4c) = uVar5;
        *(uint32_t *)(arg2 + 0xa50) = 0;
      }
      *(uint32_t *)(arg2 + 0x7d4) = 6;
      goto LAB_0047a518;
    }
LAB_0047aa00:
    iVar3 = *(int *)(arg2 + 0x7d4);
  }
  else {
LAB_0047a4ed:
    if (iVar3 != 7) {
LAB_0047a4f6:
      if (iVar3 == 0xb) {
        iVar3 = FlashLibraryInstance__IsPlaying(pFVar6);
        if (iVar3 == 0) goto LAB_0047a803;
        iVar3 = *(int *)(arg2 + 0x7d4);
      }
      if (iVar3 == 0xc) {
        iVar3 = FlashLibraryInstance__IsPlaying(pFVar6);
        if (iVar3 == 0) goto LAB_0047aa00;
        iVar3 = *(int *)(arg2 + 0x7d4);
      }
      if ((iVar3 == 0xf) && (iVar3 = FlashLibraryInstance__IsPlaying(pFVar6), iVar3 == 0)) {
        if (*(int *)(arg2 + 0x7d4) != 0) {
          lVar1 = *(long *)(arg2 + 0xf8);
          arg2[0x7db] = (FlashLibraryInstance)((byte)arg2[0x7db] | 8);
          uVar5 = 0;
          uVar2 = *(ushort *)(lVar1 + 0x30);
          if (uVar2 != 0) {
            uVar5 = GetRandomINT(0,uVar2 - 1);
          }
          *(uint32_t *)(lVar1 + 0x58) = uVar5;
          *(uint32_t *)(arg2 + 0xa4c) = uVar5;
          *(uint32_t *)(arg2 + 0xa50) = 0;
        }
        *(uint32_t *)(arg2 + 0x7d4) = 0;
      }
      goto LAB_0047a518;
    }
    iVar3 = FlashLibraryInstance__IsPlaying(pFVar6);
    if (iVar3 != 0) {
      iVar3 = *(int *)(arg2 + 0x7d4);
      goto LAB_0047a4f6;
    }
    FlashLibraryInstance__Reset(pFVar6);
    iVar3 = *(int *)(arg2 + 0x7d4);
  }
  if (iVar3 != 8) {
    lVar1 = *(long *)(arg2 + 0xf8);
    arg2[0x7db] = (FlashLibraryInstance)((byte)arg2[0x7db] | 8);
    uVar5 = 0;
    uVar2 = *(ushort *)(lVar1 + 0x2f0);
    if (uVar2 != 0) {
      uVar5 = GetRandomINT(0,uVar2 - 1);
    }
    *(uint32_t *)(lVar1 + 0x318) = uVar5;
    *(uint32_t *)(arg2 + 0xa4c) = uVar5;
    *(uint32_t *)(arg2 + 0xa50) = 0;
  }
  *(uint32_t *)(arg2 + 0x7d4) = 8;
LAB_0047a518:
  MeatBoyCharactor__RenderEffects((MeatBoyCharactor *)arg2);
  return;
}

/* ======================================================================
 * MaggotScreenShake  (Ghidra `MaggotScreenShake` @ 00484700)
 * Signature: uint8_t MaggotScreenShake(void)
 * Calls: `SMBCamera__ScreenShake`
 * Called by: (none)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* MaggotScreenShake() */

void MaggotScreenShake(void)

{
  SMBCamera__ScreenShake(*(SMBCamera **)(SuperMeatBoy + 0x38),_DAT_005bff44 /* R:5.0f */,DAT_005be894 /* R:1.0f */);
  return;
}

/* ======================================================================
 * PreloadPalette  (Ghidra `PreloadPalette` @ 00494b40)
 * Signature: uint8_t __stdcall PreloadPalette(int arg1, int arg2)
 * Calls: `GSMBMenu__GetLevelDataByIndex`, `GetLevelInfo`, `std__string_string`, `strlen`
 * Called by: (none)
 */
/* WARNING: Removing unreachable block (ram,0x00494e2b) */
/* WARNING: Removing unreachable block (ram,0x00494e03) */
/* WARNING: Removing unreachable block (ram,0x00494e1d) */
/* SMBChapter__PreloadPalette(int, int) */

void SMBChapter__PreloadPalette(int arg1,int arg2)

{
  int *piVar1;
  int iVar2;
  char *__s;
  int iVar3;
  int iVar4;
  uint32_t in_register_0000003c;
  SMBChapter *this;
  long local_78 [2];
  uint32_t local_68;
  long local_58;
  uchar *local_50;
  uint local_48 [4];
  uint8_t *local_38;
  allocator local_2c [12];
  
  this = (SMBChapter *)CONCAT44(in_register_0000003c,arg1);
  local_38 = &DAT_008184c8 /* R:0.00016803004837129265f */;
  if (*(int *)(this + 0x200) == 9) {
    local_58 = 0;
    local_50 = (uchar *)0x0;
    local_48[0] = 0;
    if (arg2 == 1) {
      GSMBMenu__GetLevelDataByIndex(SMBMenu,0,&local_50,local_48);
    }
    else {
      iVar4 = iCurrentLevel + 1;
      if (0x13 < iVar4) {
        iVar4 = 0;
      }
                    /* try { // try from 00494cd0 to 00494d7f has its CatchHandler @ 00494e18 */
      GSMBMenu__GetLevelDataByIndex(SMBMenu,iVar4,&local_50,local_48);
    }
    if ((local_48[0] == 0) || (local_50 == (uchar *)0x0)) {
      if ((allocator *)(local_38 + -0x18) == (allocator *)&std__string_Rep_S_empty_rep_storage)
      {
        return;
      }
      LOCK();
      piVar1 = (int *)(local_38 + -8);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (0 < iVar4) {
        return;
      }
      std__string_Rep_M_destroy((allocator *)(local_38 + -0x18));
      return;
    }
    TileLevel__GetPaletteFromLevelFile((TileLevelLoad *)&local_58,(string *)&local_38);
    SMBPaletteBackgroundLoader__Load((char *)(SuperMeatBoy + 0x3b0),(int)local_38);
  }
  else {
                    /* try { // try from 00494b89 to 00494b8d has its CatchHandler @ 00494ddb */
    std__string_string((string *)&local_58,"Levels/",local_2c);
    iVar4 = iCurrentLevel;
    iVar3 = 0;
    if (arg2 != 1) {
      iVar2 = GetNumberOfLevels(this);
      iVar3 = iVar4 + 1;
      if (iVar2 <= iVar4 + 1) {
        iVar3 = 0;
      }
    }
    __s = (char *)GetLevelInfo(this,iVar3,0xb);
    strlen(__s);
                    /* try { // try from 00494bde to 00494bf4 has its CatchHandler @ 00494e0e */
    std__string_append((char *)&local_58,(ulong)__s);
    std__string_append((char *)&local_58,0x5c1d1c);
    local_78[1] = 0;
    local_68 = 0;
    local_78[0] = local_58;
                    /* try { // try from 00494c1a to 00494c39 has its CatchHandler @ 00494df3 */
    TileLevel__GetPaletteFromLevelFile((TileLevelLoad *)local_78,(string *)&local_38);
    SMBPaletteBackgroundLoader__Load((char *)(SuperMeatBoy + 0x3b0),(int)local_38);
    if ((allocator *)(local_58 + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage) {
      LOCK();
      piVar1 = (int *)(local_58 + -8);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 < 1) {
        std__string_Rep_M_destroy((allocator *)(local_58 + -0x18));
      }
    }
  }
  if ((allocator *)(local_38 + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage) {
    LOCK();
    piVar1 = (int *)(local_38 + -8);
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 < 1) {
      std__string_Rep_M_destroy((allocator *)(local_38 + -0x18));
    }
  }
  return;
}

/* ======================================================================
 * RemoveByElement  (Ghidra `RemoveByElement` @ 0049f2a0)
 * Signature: uint8_t __stdcall RemoveByElement(TileLevelSetPiece * * arg1, int arg2)
 * Calls: (none)
 * Called by: `PlaceSetPiece`
 */
/* ResizeableArray<TileLevelSetPiece*>::RemoveByElement(TileLevelSetPiece* const&, int) [clone
   .constprop.186] */

void ResizeableArray<TileLevelSetPiece*>::RemoveByElement(TileLevelSetPiece **arg1,int arg2)

{
  ushort uVar1;
  short sVar2;
  uint uVar3;
  ushort uVar4;
  TileLevelSetPiece *pTVar5;
  long lVar6;
  uint uVar7;
  uint32_t in_register_00000034;
  TileLevelSetPiece *pTVar8;
  ushort uVar9;
  
  uVar4 = *(ushort *)(arg1 + 5);
  if (uVar4 == 0) {
    return;
  }
  pTVar8 = arg1[7];
  uVar9 = 0;
  pTVar5 = pTVar8;
  if (*(long *)pTVar8 == *(long *)CONCAT44(in_register_00000034,arg2)) {
    uVar7 = 1;
    uVar3 = 0;
  }
  else {
    do {
      uVar9 = uVar9 + 1;
      if (uVar9 == uVar4) {
        return;
      }
      pTVar5 = pTVar5 + 8;
    } while (*(long *)pTVar5 != *(long *)CONCAT44(in_register_00000034,arg2));
    uVar3 = (uint)uVar9;
    uVar7 = uVar3 + 1;
  }
  if ((uVar7 < uVar4) && ((int)uVar3 < (int)(uVar4 - 1))) {
    lVar6 = (long)(int)uVar3 << 3;
    uVar7 = uVar3;
    while( true ) {
      pTVar5 = pTVar8 + lVar6;
      lVar6 = lVar6 + 8;
      uVar7 = uVar7 + 1;
      *(uint64_t *)pTVar5 = *(uint64_t *)(pTVar8 + lVar6);
      uVar4 = *(ushort *)(arg1 + 5);
      if ((int)(uVar4 - 1) <= (int)uVar7) break;
      pTVar8 = arg1[7];
    }
  }
  if ((*(int *)(arg1 + 6) != 1) || (uVar9 = *(ushort *)((long)arg1 + 0x2a), uVar9 == 0)) {
    sVar2 = 0;
    if (uVar4 != 0) {
      sVar2 = uVar4 - 1;
    }
    *(short *)(arg1 + 5) = sVar2;
    return;
  }
  uVar4 = 0;
  do {
    while( true ) {
      pTVar8 = arg1[8] + (ulong)uVar4 * 2;
      uVar1 = *(ushort *)pTVar8;
      if (uVar1 != uVar3) break;
      *(ushort *)pTVar8 = 0xffff;
      uVar9 = *(ushort *)((long)arg1 + 0x2a);
      uVar4 = uVar4 + 1;
      if (uVar9 <= uVar4) goto LAB_0049f396;
    }
    if ((uVar3 < uVar1) && ((ushort)(uVar1 - 1) < 0xfffe)) {
      *(ushort *)pTVar8 = uVar1 - 1;
      uVar9 = *(ushort *)((long)arg1 + 0x2a);
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < uVar9);
LAB_0049f396:
  sVar2 = 0;
  if (*(short *)(arg1 + 5) != 0) {
    sVar2 = *(short *)(arg1 + 5) + -1;
  }
  *(short *)(arg1 + 5) = sVar2;
  return;
}

/* ======================================================================
 * PlaceLight  (Ghidra `PlaceLight` @ 004a6570)
 * Signature: uint8_t __stdcall PlaceLight(tagButtonProps * arg1, void * arg2)
 * Calls: `EditorButton__IsMouseOverButton`, `IsFlashFormActive`, `SMBEditorForms__IsFormActive`, `TileLevelLightMap__CreateLight`, `TileLevelLightMap__DestroyLight`
 * Called by: `SMBEditor__SetToLightingMode`
 */
/* PlaceLight(tagButtonProps const*, void*) */

void PlaceLight(tagButtonProps *arg1,void *arg2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  Light *pLVar4;
  uint64_t uVar5;
  uint uVar6;
  uint64_t local_68;
  uint64_t local_60;
  uint64_t local_58;
  uint64_t local_50;
  uint64_t local_48;
  uint32_t local_40;
  Light *local_38 [3];
  
  uVar1 = SMBEditorForms__IsFormActive();
  uVar2 = IsFlashFormActive();
  if (pEditorButtons._40_2_ != 0) {
    uVar6 = 0;
    do {
      iVar3 = EditorButton__IsMouseOverButton
                        (*(EditorButton **)(pEditorButtons._56_8_ + (ulong)(uVar6 & 0xffff) * 8));
      if (iVar3 == 1) {
        if ((uVar1 | uVar2 | 1) != 0) {
          return;
        }
        goto LAB_004a6600;
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < (int)(uint)(ushort)pEditorButtons._40_2_);
  }
  FlashAnimationLibrary__SetTextFieldText(pEditorLib,"hotkey",&DAT_005ca3d2 /* R:u32=1931804704 */);
  if (uVar1 == 0 && uVar2 == 0) {
LAB_004a6600:
    local_38[0] = pSelectedLight;
    if (pSelectedLight == (Light *)0x0) {
      local_38[0] = *(Light **)(SuperMeatBoyEditor + 200);
    }
    if ((*(int *)arg1 == 1) && (local_38[0] != (Light *)0x0)) {
      pLVar4 = pSelectedLight;
      if (pSelectedLight == (Light *)0x0) {
        pLVar4 = *(Light **)(SuperMeatBoyEditor + 200);
      }
      local_68 = *(uint64_t *)pLVar4;
      local_60 = *(uint64_t *)(pLVar4 + 8);
      local_58 = *(uint64_t *)(pLVar4 + 0x10);
      local_50 = *(uint64_t *)(pLVar4 + 0x18);
      local_48 = *(uint64_t *)(pLVar4 + 0x20);
      local_40 = *(uint32_t *)(pLVar4 + 0x28);
      TileLevelLightMap__DestroyLight(*(TileLevelLightMap **)(SuperMeatBoy + 0x390),local_38);
      TileLevelLightMap__CreateLight
                (*(TileLevelLightMap **)(SuperMeatBoy + 0x390),(Light *)&local_68);
      uVar5 = TileLevelLightMap__CreateLight
                        (*(TileLevelLightMap **)(SuperMeatBoy + 0x390),(Light *)&local_68);
      *(uint64_t *)(SuperMeatBoyEditor + 200) = uVar5;
      return;
    }
  }
  return;
}

/* ======================================================================
 * PlaceAnimal  (Ghidra `PlaceAnimal` @ 004a6960)
 * Signature: uint8_t __stdcall PlaceAnimal(tagButtonProps * arg1, void * arg2)
 * Calls: `Camera__ScreenToWorld`, `EditorButton__IsMouseOverButton`, `IsFlashFormActive`, `SMBAnimals__CreateAnimal`, `SMBEditorForms__IsFormActive`
 * Called by: `SMBEditor__SetToAnimalMode`
 */
/* PlaceAnimal(tagButtonProps const*, void*) */

void PlaceAnimal(tagButtonProps *arg1,void *arg2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint32_t local_68;
  uint32_t local_64;
  uint32_t local_60;
  uint32_t local_5c;
  uint32_t local_58;
  uint32_t local_54;
  uint32_t local_50;
  uint32_t local_48;
  uint32_t local_44;
  uint32_t local_40;
  uint32_t local_3c;
  uint32_t local_38;
  uint32_t local_34;
  
  uVar1 = SMBEditorForms__IsFormActive();
  uVar2 = IsFlashFormActive();
  if (pEditorButtons._40_2_ != 0) {
    uVar4 = 0;
    do {
      iVar3 = EditorButton__IsMouseOverButton
                        (*(EditorButton **)(pEditorButtons._56_8_ + (ulong)(uVar4 & 0xffff) * 8));
      if (iVar3 == 1) {
        if ((uVar1 | uVar2 | 1) != 0) {
          return;
        }
        goto LAB_004a69f0;
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < (int)(uint)(ushort)pEditorButtons._40_2_);
  }
  FlashAnimationLibrary__SetTextFieldText(pEditorLib,"hotkey",&DAT_005ca3d2 /* R:u32=1931804704 */);
  if (uVar1 == 0 && uVar2 == 0) {
LAB_004a69f0:
    if (*(int *)arg1 == 1) {
      local_38 = *(uint32_t *)(Mouse + 0xc);
      local_34 = *(uint32_t *)(Mouse + 0x10);
      local_48 = 0;
      local_44 = 0;
      local_40 = 0;
      local_3c = 0;
      Camera__ScreenToWorld
                (*(Camera **)(SuperMeatBoy + 0x38),(FPUVector *)&local_48,(Vector2 *)&local_38,0.0);
      local_58 = 0xc4098000;
      local_5c = 0;
      local_68 = iAnimalIDX;
      local_54 = 0;
      local_50 = 0;
      local_64 = local_48;
      local_60 = local_44;
      SMBAnimals__CreateAnimal
                (*(SMBAnimals **)(GSuperMeatBoy__pLevelPalette + 0x41e8),
                 (SMBAnimalCreate *)&local_68);
      return;
    }
  }
  return;
}

/* ======================================================================
 * ReCenterCamera  (Ghidra `ReCenterCamera` @ 004a7870)
 * Signature: uint8_t __stdcall ReCenterCamera(tagButtonProps * arg1, void * arg2)
 * Calls: `EditorButton__IsMouseOverButton`, `IsFlashFormActive`, `SMBEditorForms__IsFormActive`
 * Called by: `SMBEditor__SetToCameraMode`
 */
/* ReCenterCamera(tagButtonProps const*, void*) */

void ReCenterCamera(tagButtonProps *arg1,void *arg2)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  iVar4 = SMBEditorForms__IsFormActive();
  iVar5 = IsFlashFormActive();
  if (pEditorButtons._40_2_ != 0) {
    uVar7 = 0;
    do {
      iVar6 = EditorButton__IsMouseOverButton
                        (*(EditorButton **)(pEditorButtons._56_8_ + (ulong)(uVar7 & 0xffff) * 8));
      if (iVar6 == 1) {
        bVar3 = true;
        goto LAB_004a78ea;
      }
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < (int)(uint)(ushort)pEditorButtons._40_2_);
  }
  FlashAnimationLibrary__SetTextFieldText(pEditorLib,"hotkey",&DAT_005ca3d2 /* R:u32=1931804704 */);
  bVar3 = false;
LAB_004a78ea:
  lVar2 = SuperMeatBoy;
  if ((iVar4 == 0 && iVar5 == 0) && !bVar3) {
    lVar1 = *(long *)(SuperMeatBoy + 0x38);
    *(uint32_t *)(lVar1 + 0x1d4) = 1;
    *(uint32_t *)(lVar1 + 0x100) = 0;
    *(uint32_t *)(lVar1 + 0x104) = 0;
    *(uint32_t *)(lVar1 + 0x108) = 0xc4480000;
    *(uint32_t *)(lVar1 + 0x10c) = 0;
    lVar2 = *(long *)(lVar2 + 0x38);
    *(uint32_t *)(lVar2 + 0x1d4) = 1;
    *(uint32_t *)(lVar2 + 0x118) = 0;
    *(uint32_t *)(lVar2 + 0x11c) = 0;
    *(uint32_t *)(lVar2 + 0x110) = *(uint32_t *)(lVar2 + 0x100);
    *(uint32_t *)(lVar2 + 0x114) = *(uint32_t *)(lVar2 + 0x104);
  }
  return;
}

/* ======================================================================
 * PlaceCameraItems  (Ghidra `PlaceCameraItems` @ 004a7970)
 * Signature: uint8_t __stdcall PlaceCameraItems(tagButtonProps * arg1, void * arg2)
 * Calls: `Camera__ScreenToWorld`, `EditorButton__IsMouseOverButton`, `FPUVector__FPUVector`, `IsFlashFormActive`, `SMBCamera__AddWayPoint`, `SMBEditorForms__IsFormActive`, `TileLevel__SnapPositionToCenter`, `Vector2__operator_assign`
 * Called by: `SMBEditor__SetToCameraMode`
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlaceCameraItems(tagButtonProps const*, void*) */

void PlaceCameraItems(tagButtonProps *arg1,void *arg2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  uint32_t local_e8;
  uint32_t local_e4;
  uint32_t local_e0;
  uint32_t local_dc;
  uint32_t local_d8;
  uint64_t local_d0;
  uint64_t local_c8;
  uint32_t local_b8;
  uint32_t local_b4;
  uint32_t local_b0;
  uint32_t local_ac;
  float local_a8;
  float local_a4;
  uint32_t local_a0;
  uint32_t local_9c;
  uint32_t local_98;
  uint32_t local_94;
  uint32_t local_90;
  uint32_t local_8c;
  uint32_t local_88;
  uint32_t local_84;
  uint32_t local_78;
  uint32_t local_74;
  float local_68;
  float local_64;
  float local_58;
  float local_54;
  uint32_t local_48;
  uint32_t local_44;
  uint32_t local_38;
  uint32_t local_34;
  
  uVar1 = SMBEditorForms__IsFormActive();
  uVar2 = IsFlashFormActive();
  if (pEditorButtons._40_2_ != 0) {
    uVar4 = 0;
    do {
      iVar3 = EditorButton__IsMouseOverButton
                        (*(EditorButton **)(pEditorButtons._56_8_ + (ulong)(uVar4 & 0xffff) * 8));
      if (iVar3 == 1) {
        if ((uVar1 | uVar2 | 1) != 0) {
          return;
        }
        goto LAB_004a7a08;
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < (int)(uint)(ushort)pEditorButtons._40_2_);
  }
  FlashAnimationLibrary__SetTextFieldText(pEditorLib,"hotkey",&DAT_005ca3d2 /* R:u32=1931804704 */);
  if (uVar1 == 0 && uVar2 == 0) {
LAB_004a7a08:
    if ((PlaceCameraItems(tagButtonProps_const*,void*)::vStartWorldPos == '\0') &&
       (iVar3 = __cxa_guard_acquire(&PlaceCameraItems(tagButtonProps_const*,void*)::vStartWorldPos),
       iVar3 != 0)) {
      PlaceCameraItems(tagButtonProps_const*,void*)::vStartWorldPos = 0.0;
      DAT_0081a9b4 /* R:0.0f */ = 0.0;
      _DAT_0081a9b8 /* R:2.8586488672226268e-42f */ = 0;
      _DAT_0081a9bc /* R:2.2958888052482446e-39f */ = 0;
      __cxa_guard_release(&PlaceCameraItems(tagButtonProps_const*,void*)::vStartWorldPos);
      __cxa_atexit(FPUVector__FPUVector,
                   &PlaceCameraItems(tagButtonProps_const*,void*)::vStartWorldPos,&__dso_handle);
    }
    local_88 = *(uint32_t *)(Mouse + 0xc);
    local_84 = *(uint32_t *)(Mouse + 0x10);
    bVar5 = *(int *)(Keyboard + 0x334) == 2;
    if (*(int *)arg1 == 1) {
      Camera__ScreenToWorld
                (*(Camera **)(SuperMeatBoy + 0x38),
                 (FPUVector *)&PlaceCameraItems(tagButtonProps_const*,void*)::vStartWorldPos,
                 (Vector2 *)&local_88,0.0);
      if (bVar5) {
        Vector2__operator_assign((Vector2 *)(*(long *)(SuperMeatBoy + 0x40) + 0x22bc),
                           (Vector2 *)&PlaceCameraItems(tagButtonProps_const*,void*)::vStartWorldPos
                          );
        Vector2__operator_assign((Vector2 *)(*(long *)(SuperMeatBoy + 0x40) + 0x22b4),
                           (Vector2 *)&PlaceCameraItems(tagButtonProps_const*,void*)::vStartWorldPos
                          );
      }
      else {
        local_b8 = 0;
        local_b4 = 0;
        local_b0 = 0;
        local_ac = 0;
        Camera__ScreenToWorld
                  (*(Camera **)(SuperMeatBoy + 0x38),(FPUVector *)&local_b8,(Vector2 *)&local_88,0.0
                  );
        local_e0 = 0xc3fa0000;
        local_d0 = 0;
        local_78 = local_b8;
        local_e8 = 0;
        local_e4 = 0;
        local_c8 = 0;
        local_dc = 0;
        local_74 = local_b4;
        local_d8 = 0;
        TileLevel__SnapPositionToCenter
                  (*(TileLevel **)(SuperMeatBoy + 0x40),(Vector2 *)&local_78,DAT_005be894 /* R:1.0f */);
        local_e8 = local_78;
        local_e4 = local_74;
        SMBCamera__AddWayPoint(*(SMBCamera **)(SuperMeatBoy + 0x38),(SMBCameraWayPoint *)&local_e8);
      }
    }
    else if (*(int *)arg1 == 2) {
      if (!bVar5) {
        local_98 = 0;
        local_94 = 0;
        local_90 = 0;
        local_8c = 0;
        local_38 = local_88;
        local_34 = local_84;
        Camera__ScreenToWorld
                  (*(Camera **)(SuperMeatBoy + 0x38),(FPUVector *)&local_98,(Vector2 *)&local_38,0.0
                  );
        return;
      }
      local_a8 = 0.0;
      local_a4 = 0.0;
      local_a0 = 0;
      local_9c = 0;
      local_48 = local_88;
      local_44 = local_84;
      Camera__ScreenToWorld
                (*(Camera **)(SuperMeatBoy + 0x38),(FPUVector *)&local_a8,(Vector2 *)&local_48,0.0);
      local_58 = local_a8;
      if (PlaceCameraItems(tagButtonProps_const*,void*)::vStartWorldPos <= local_a8) {
        local_58 = PlaceCameraItems(tagButtonProps_const*,void*)::vStartWorldPos;
      }
      local_68 = PlaceCameraItems(tagButtonProps_const*,void*)::vStartWorldPos;
      if (PlaceCameraItems(tagButtonProps_const*,void*)::vStartWorldPos <= local_a8) {
        local_68 = local_a8;
      }
      local_64 = DAT_0081a9b4 /* R:0.0f */;
      local_54 = local_a4;
      if (DAT_0081a9b4 /* R:0.0f */ <= local_a4) {
        local_64 = local_a4;
        local_54 = DAT_0081a9b4 /* R:0.0f */;
      }
      Vector2__operator_assign((Vector2 *)(*(long *)(SuperMeatBoy + 0x40) + 0x22bc),(Vector2 *)&local_68);
      Vector2__operator_assign((Vector2 *)(*(long *)(SuperMeatBoy + 0x40) + 0x22b4),(Vector2 *)&local_58);
    }
  }
  return;
}

/* ======================================================================
 * PasteSelectedTiles  (Ghidra `PasteSelectedTiles` @ 004a8830)
 * Signature: uint8_t __stdcall PasteSelectedTiles(tagButtonProps * arg1, void * arg2)
 * Calls: `Camera__ScreenToWorld`, `EditorButton__IsMouseOverButton`, `IsFlashFormActive`, `SMBEditorForms__IsFormActive`, `TileLevel__GetGridBlock`, `TileLevel__GetGridIndex__0058dd90`, `TileLevel__PlaceTile`, `Vector2__operator_div_assign__005be2c0`, `Vector2__operator_eq`, `Vector2__operator_minus__005be180` (+1 more)
 * Called by: `SMBEditor__SetToTileMode`, `SMBEditor__Update`
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PasteSelectedTiles(tagButtonProps const*, void*) */

void PasteSelectedTiles(tagButtonProps *arg1,void *arg2)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint32_t uVar7;
  long lVar8;
  uint uVar9;
  float local_12c;
  Matrix4x4 local_128 [64];
  Matrix4x4 local_e8 [64];
  uint32_t local_a8;
  uint32_t local_a4;
  uint32_t local_a0;
  uint32_t local_9c;
  uint32_t local_98;
  uint32_t local_94;
  uint32_t local_88;
  uint32_t local_84;
  Vector2 local_78 [16];
  Vector2 local_68 [16];
  Vector2 local_58 [16];
  uint64_t local_48;
  uint32_t local_38;
  int local_30;
  int local_2c [3];
  
  uVar4 = SMBEditorForms__IsFormActive();
  uVar5 = IsFlashFormActive();
  if (pEditorButtons._40_2_ != 0) {
    uVar9 = 0;
    do {
      iVar6 = EditorButton__IsMouseOverButton
                        (*(EditorButton **)(pEditorButtons._56_8_ + (ulong)(uVar9 & 0xffff) * 8));
      if (iVar6 == 1) {
        if ((uVar4 | uVar5 | 1) != 0) {
          return;
        }
        goto LAB_004a88c8;
      }
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < (int)(uint)(ushort)pEditorButtons._40_2_);
  }
  FlashAnimationLibrary__SetTextFieldText(pEditorLib,"hotkey",&DAT_005ca3d2 /* R:u32=1931804704 */);
  if (uVar4 == 0 && uVar5 == 0) {
LAB_004a88c8:
    if (*(int *)arg1 == 1) {
      uVar4 = (uint)(ushort)pCopiedBlocks._40_2_;
      local_98 = 0;
      local_94 = 0;
      if (pCopiedBlocks._40_2_ != 0) {
        uVar5 = 0;
        do {
          uVar4 = uVar5 & 0xffff;
          uVar5 = uVar5 + 1;
          Vector2__operator_plus_assign((Vector2 *)&local_98,
                              (Vector2 *)(pCopiedBlocks._56_8_ + (ulong)uVar4 * 0xc));
          uVar4 = (uint)(ushort)pCopiedBlocks._40_2_;
        } while ((int)uVar5 < (int)uVar4);
      }
      Vector2__operator_div_assign__005be2c0((Vector2 *)&local_98,(float)uVar4);
      local_a8 = 0;
      local_a4 = 0;
      local_a0 = 0;
      local_88 = *(uint32_t *)(Mouse + 0xc);
      local_84 = *(uint32_t *)(Mouse + 0x10);
      local_9c = 0;
      Camera__ScreenToWorld
                (*(Camera **)(SuperMeatBoy + 0x38),(FPUVector *)&local_a8,(Vector2 *)&local_88,0.0);
      Matrix4x4__Transformation2DRot
                (local_128,(Vector2 *)(vTileScale + (long)iSelectedScale * 8),
                 (float *)(fTileRotations + (long)iSelectedRotation * 4),(Vector2 *)&local_a8);
      Vector2__operator_minus__005be180(local_78);
      Matrix4x4__Transformation2DRot(local_e8,(Vector2 *)0x0,(float *)0x0,local_78);
      Matrix4x4__Multiply(local_128,local_e8,local_128);
      if (pCopiedBlocks._40_2_ != 0) {
        uVar4 = 0;
        do {
          lVar8 = (ulong)(uVar4 & 0xffff) * 0xc;
          local_38 = *(uint32_t *)(pCopiedBlocks._56_8_ + 8 + lVar8);
          bVar2 = (byte)((uint)local_38 >> 8);
          local_48 = *(uint64_t *)(vTileScale + (ulong)(bVar2 >> 6) * 8);
          local_12c = *(float *)(fTileRotations + (ulong)(bVar2 >> 4 & 3) * 4);
          if ((iSelectedScale == 3) || (iSelectedScale == 1)) {
            uVar7 = 0xbf800000;
            if (DAT_005be894 /* R:1.0f */ != (float)local_48) {
              uVar7 = 0x3f800000;
            }
            local_48._4_4_ = (float)((ulong)local_48 >> 0x20);
            local_48 = CONCAT44(local_48._4_4_,uVar7);
            local_12c = (float)((uint)local_12c ^ DAT_005be6f0 /* R:u32=2147483648 */);
          }
          if (iSelectedScale - 2U < 2) {
            uVar7 = 0xbf800000;
            if (DAT_005be894 /* R:1.0f */ != local_48._4_4_) {
              uVar7 = 0x3f800000;
            }
            local_48 = CONCAT44(uVar7,(float)local_48);
            local_12c = (float)((uint)local_12c ^ DAT_005be6f0 /* R:u32=2147483648 */);
          }
          iVar6 = Vector2__operator_eq((Vector2 *)&local_48,(Vector2 *)vTileScale);
          bVar2 = 0;
          if (iVar6 == 0) {
            iVar6 = Vector2__operator_eq((Vector2 *)&local_48,(Vector2 *)(vTileScale + 8));
            bVar2 = 1;
            if (iVar6 == 0) {
              iVar6 = Vector2__operator_eq((Vector2 *)&local_48,(Vector2 *)(vTileScale + 0x10));
              bVar2 = 2;
              if (iVar6 == 0) {
                iVar6 = Vector2__operator_eq((Vector2 *)&local_48,(Vector2 *)(vTileScale + 0x18));
                bVar2 = ~-(iVar6 == 0) & 3;
              }
            }
          }
          if (local_12c == _DAT_005c489c /* R:-3.1415927410125732f */) {
LAB_004a8b5f:
            cVar3 = '\x02';
          }
          else {
            cVar3 = '\0';
            if ((local_12c != 0.0) && (cVar3 = '\x01', local_12c != DAT_005c1408 /* R:1.5707963705062866f */)) {
              if (local_12c == DAT_005c4898 /* R:3.1415927410125732f */) goto LAB_004a8b5f;
              cVar3 = (local_12c == DAT_005c48a0 /* R:-1.5707963705062866f */) * '\x03';
            }
          }
          bVar1 = local_38._1_1_ & 0xf;
          uVar4 = uVar4 + 1;
          local_38._0_2_ =
               CONCAT11(bVar1 | bVar2 << 6 | (cVar3 + (char)iSelectedRotation & 3U) << 4,
                        (uint8_t)local_38);
          Matrix4x4__TransformVector2
                    (local_58,(Vector2 *)(pCopiedBlocks._56_8_ + lVar8),local_128,1);
          TileLevel__GetGridIndex__0058dd90
                    (*(TileLevel **)(SuperMeatBoy + 0x40),local_58,local_68,&local_30,local_2c);
          TileLevel__GetGridBlock
                    (*(TileLevel **)(SuperMeatBoy + 0x40),local_30,local_2c[0],
                     *(uint32_t *)(SuperMeatBoyEditor + 0xd0));
          TileLevel__PlaceTile
                    (*(TileLevel **)(SuperMeatBoy + 0x40),local_30,local_2c[0],&local_38,
                     *(uint32_t *)(SuperMeatBoyEditor + 0xd0));
          if ((int)(uint)(ushort)pCopiedBlocks._40_2_ <= (int)uVar4) {
            return;
          }
        } while( true );
      }
    }
  }
  return;
}

/* ======================================================================
 * PasteSelectedPieces  (Ghidra `PasteSelectedPieces` @ 004a8cd0)
 * Signature: uint8_t __stdcall PasteSelectedPieces(tagButtonProps * arg1, void * arg2)
 * Calls: `AutoLockSection__AutoLockSection`, `AutoLockSection__AutoLockSection__005b59d0`, `Camera__ScreenToWorld`, `EditorButton__IsMouseOverButton`, `IsFlashFormActive`, `SMBEditorForms__IsFormActive`, `TileLevelSetPiece__TileLevelSetPiece__0058d560`, `TileLevelSetPiece__TileLevelSetPiece__0058d640`, `TileLevel__PlaceSetPiece`, `strcmp`
 * Called by: `SMBEditor__EditSetPieces`, `SMBEditor__SetToAnimationMode`, `SMBEditor__SetToObstacleMode`, `SMBEditor__SetToParalaxMode`, `SMBEditor__SetToSetPieceMode`
 */
/* PasteSelectedPieces(tagButtonProps const*, void*) */

void PasteSelectedPieces(tagButtonProps *arg1,void *arg2)

{
  uint32_t uVar1;
  uint32_t uVar2;
  char *__s1;
  uint32_t *puVar3;
  uint64_t *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint64_t *puVar8;
  uint8_t **ppuVar9;
  long lVar10;
  uint64_t *puVar11;
  uint uVar12;
  TileLevelSetPiece aTStack_c8 [32];
  byte local_a8;
  float local_a4;
  float local_a0;
  uint32_t local_84;
  uint32_t local_80;
  uint32_t local_7c;
  uint32_t local_78;
  uint32_t local_74;
  uint32_t local_70;
  float local_58;
  float local_54;
  uint32_t local_50;
  uint32_t local_4c;
  AutoLockSection local_48 [16];
  uint32_t local_38;
  uint32_t local_34;
  
  uVar5 = SMBEditorForms__IsFormActive();
  uVar6 = IsFlashFormActive();
  if (pEditorButtons._40_2_ != 0) {
    uVar12 = 0;
    do {
      iVar7 = EditorButton__IsMouseOverButton
                        (*(EditorButton **)(pEditorButtons._56_8_ + (ulong)(uVar12 & 0xffff) * 8));
      if (iVar7 == 1) {
        if ((uVar5 | uVar6 | 1) != 0) {
          return;
        }
        goto LAB_004a8d62;
      }
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < (int)(uint)(ushort)pEditorButtons._40_2_);
  }
  FlashAnimationLibrary__SetTextFieldText(pEditorLib,"hotkey",&DAT_005ca3d2 /* R:u32=1931804704 */);
  if (uVar5 == 0 && uVar6 == 0) {
LAB_004a8d62:
    if (bSetPieceWayPointMode != 1) {
      AutoLockSection__AutoLockSection
                (local_48,(CriticalSection *)RenderLayers__MasterRenderSection);
      if (*(int *)arg1 == 1) {
        bRenderCopiedElements = 1;
        uVar1 = *(uint32_t *)(Mouse + 0xc);
        uVar2 = *(uint32_t *)(Mouse + 0x10);
        if (pCopiedSetPieces._40_2_ != 0) {
          uVar5 = 0;
          do {
            local_58 = 0.0;
            local_54 = 0.0;
            local_50 = 0;
            local_4c = 0;
            lVar10 = (ulong)(uVar5 & 0xffff) * 0x68;
            local_38 = uVar1;
            local_34 = uVar2;
                    /* try { // try from 004a8e2c to 004a8e42 has its CatchHandler @ 004a9149 */
            Camera__ScreenToWorld
                      (*(Camera **)(SuperMeatBoy + 0x38),(FPUVector *)&local_58,(Vector2 *)&local_38
                       ,*(float *)(pCopiedSetPieces._56_8_ + 0x2c + lVar10));
            TileLevelSetPiece__TileLevelSetPiece__0058d640
                      (aTStack_c8,(TileLevelSetPiece *)(pCopiedSetPieces._56_8_ + lVar10));
            local_a0 = (local_a0 + local_54) - DAT_00819f44 /* R:0.0f */;
            local_a4 = (local_a4 + local_58) - vXYCOM;
            puVar11 = pCurrentObjectArray;
            if ((0 < iNumObjectArrayEntries) &&
               ((uint)local_a8 != *(uint *)(pCurrentObjectArray + 2))) {
              puVar4 = pCurrentObjectArray + 3;
              do {
                puVar8 = puVar4;
                puVar11 = pCurrentObjectArray;
                if (puVar8 == pCurrentObjectArray + 3 + (ulong)(iNumObjectArrayEntries - 1) * 3)
                break;
                puVar4 = puVar8 + 3;
                puVar11 = puVar8;
              } while ((uint)local_a8 != *(uint *)(puVar8 + 2));
            }
            __s1 = (char *)*puVar11;
            iVar7 = strcmp(__s1,objectFormDefaults);
            if (iVar7 == 0) {
              iVar7 = 0;
LAB_004a90d0:
              ppuVar9 = &objectFormDefaults + (long)iVar7 * 3;
            }
            else {
              iVar7 = strcmp(__s1,PTR_s_quake_00816018);
              if (iVar7 == 0) {
                iVar7 = 1;
                goto LAB_004a90d0;
              }
              iVar7 = strcmp(__s1,PTR_s_smoke_00816030);
              if (iVar7 == 0) {
                iVar7 = 2;
                goto LAB_004a90d0;
              }
              iVar7 = strcmp(__s1,PTR_s_shooter1_00816048);
              if (iVar7 == 0) {
                iVar7 = 3;
                goto LAB_004a90d0;
              }
              iVar7 = strcmp(__s1,PTR_s_shooter2_00816060);
              if (iVar7 == 0) {
                iVar7 = 4;
                goto LAB_004a90d0;
              }
              iVar7 = strcmp(__s1,PTR_s_cannon_00816078);
              if (iVar7 == 0) {
                iVar7 = 5;
                goto LAB_004a90d0;
              }
              iVar7 = strcmp(__s1,PTR_s_buttholeidle_00816090);
              if (iVar7 == 0) {
                iVar7 = 6;
                goto LAB_004a90d0;
              }
              iVar7 = strcmp(__s1,PTR_s_turret1idle_008160a8);
              if (iVar7 == 0) {
                iVar7 = 7;
                goto LAB_004a90d0;
              }
              iVar7 = strcmp(__s1,PTR_s_lazeroff_005c6e3d_6_008160c0);
              if (iVar7 == 0) {
                iVar7 = 8;
                goto LAB_004a90d0;
              }
              iVar7 = strcmp(__s1,PTR_s_hominglazeron_008160d8);
              if (iVar7 == 0) {
                iVar7 = 9;
                goto LAB_004a90d0;
              }
              iVar7 = strcmp(__s1,PTR_DAT_008160f0 /* R:8.464432671175376e-39f */);
              if (iVar7 == 0) {
                iVar7 = 10;
                goto LAB_004a90d0;
              }
              iVar7 = strcmp(__s1,PTR_s_switchidle_00816108);
              if (iVar7 == 0) {
                iVar7 = 0xb;
                goto LAB_004a90d0;
              }
              iVar7 = strcmp(__s1,PTR_DAT_00816120 /* R:8.46699704736509e-39f */);
              if (iVar7 == 0) {
                iVar7 = 0xc;
                goto LAB_004a90d0;
              }
              iVar7 = strcmp(__s1,PTR_s_launcher2shoot_00816138);
              if (iVar7 == 0) {
                iVar7 = 0xd;
                goto LAB_004a90d0;
              }
              iVar7 = strcmp(__s1,PTR_DAT_00816150 /* R:8.467023672035912e-39f */);
              if (iVar7 == 0) {
                iVar7 = 0xe;
                goto LAB_004a90d0;
              }
              iVar7 = strcmp(__s1,PTR_s_defaultform_00816168);
              ppuVar9 = &PTR_s_defaultform_00816168;
              if (iVar7 == 0) {
                iVar7 = 0xf;
                goto LAB_004a90d0;
              }
            }
            puVar3 = (uint32_t *)ppuVar9[2];
            if (puVar3 != (uint32_t *)0x0) {
              local_7c = puVar3[2];
              local_78 = puVar3[3];
              local_74 = puVar3[4];
              local_70 = puVar3[5];
              local_80 = *puVar3;
              local_84 = puVar3[1];
            }
                    /* try { // try from 004a9092 to 004a9096 has its CatchHandler @ 004a9161 */
            TileLevel__PlaceSetPiece
                      (*(TileLevel **)(SuperMeatBoy + 0x40),aTStack_c8,
                       *(uint32_t *)(SuperMeatBoyEditor + 0xd0));
                    /* try { // try from 004a909a to 004a909e has its CatchHandler @ 004a9149 */
            TileLevelSetPiece__TileLevelSetPiece__0058d560(aTStack_c8);
            uVar5 = uVar5 + 1;
          } while ((int)uVar5 < (int)(uint)(ushort)pCopiedSetPieces._40_2_);
        }
      }
      AutoLockSection__AutoLockSection__005b59d0(local_48);
      return;
    }
  }
  return;
}

/* ======================================================================
 * RemoveSetPieces  (Ghidra `RemoveSetPieces` @ 004a9170)
 * Signature: uint8_t __stdcall RemoveSetPieces(tagButtonProps * arg1, void * arg2)
 * Calls: `AutoLockSection__AutoLockSection`, `AutoLockSection__AutoLockSection__005b59d0`, `EditorButton__IsMouseOverButton`, `GSetPieceWayPoints__ClearWayPointGroup`, `GSetPieceWayPoints__GetWayPointGroup`, `IsFlashFormActive`, `SMBEditorForms__IsFormActive`, `SetPieceWayPointGroup__RemoveWayPoint__0059cad0`, `TileLevel__RemoveSetPiece`, `Vector2__operator_assign`
 * Called by: `SMBEditor__SetToAnimationMode`, `SMBEditor__SetToObstacleMode`, `SMBEditor__SetToParalaxMode`, `SMBEditor__SetToSetPieceMode`
 */
/* RemoveSetPieces(tagButtonProps const*, void*) */

void RemoveSetPieces(tagButtonProps *arg1,void *arg2)

{
  ushort uVar1;
  bool bVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  SetPieceWayPointGroup *this;
  long lVar7;
  uint uVar8;
  AutoLockSection aAStack_58 [16];
  uint32_t local_48;
  uint32_t local_44;
  uint32_t local_38;
  uint32_t local_34;
  
  iVar4 = SMBEditorForms__IsFormActive();
  iVar5 = IsFlashFormActive();
  if (pEditorButtons._40_2_ != 0) {
    uVar8 = 0;
    do {
      iVar6 = EditorButton__IsMouseOverButton
                        (*(EditorButton **)(pEditorButtons._56_8_ + (ulong)(uVar8 & 0xffff) * 8));
      if (iVar6 == 1) {
        bVar2 = true;
        goto LAB_004a91ea;
      }
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < (int)(uint)(ushort)pEditorButtons._40_2_);
  }
  FlashAnimationLibrary__SetTextFieldText(pEditorLib,"hotkey",&DAT_005ca3d2 /* R:u32=1931804704 */);
  bVar2 = false;
LAB_004a91ea:
  if ((iVar4 == 0 && iVar5 == 0) && !bVar2) {
    if ((*(int *)arg1 == 1) && (bSetPieceWayPointMode == 1)) {
      this = (SetPieceWayPointGroup *)
             GSetPieceWayPoints__GetWayPointGroup
                       (SetPieceWayPoints,
                        (TileLevelSetPiece *)**(uint64_t **)(SuperMeatBoyEditor + 0xa8));
      if (this != (SetPieceWayPointGroup *)0x0) {
        SetPieceWayPointGroup__RemoveWayPoint__0059cad0(this,pCurrentSetPieceWayPoint);
      }
      pCurrentSetPieceWayPoint = (SetPieceWayPoint *)0x0;
    }
    else {
      AutoLockSection__AutoLockSection
                (aAStack_58,(CriticalSection *)RenderLayers__MasterRenderSection);
      lVar3 = SuperMeatBoyEditor;
      if (*(int *)arg1 == 1) {
        if (*(short *)(SuperMeatBoyEditor + 0x98) != 0) {
          uVar8 = 0;
          do {
                    /* try { // try from 004a92a6 to 004a9323 has its CatchHandler @ 004a935d */
            GSetPieceWayPoints__ClearWayPointGroup
                      (SetPieceWayPoints,
                       *(TileLevelSetPiece **)
                        (*(long *)(lVar3 + 0xa8) + (ulong)(uVar8 & 0xffff) * 8));
            TileLevel__RemoveSetPiece
                      (*(TileLevel **)(SuperMeatBoy + 0x40),
                       *(TileLevelSetPiece **)
                        (*(long *)(lVar3 + 0xa8) + (ulong)(uVar8 & 0xffff) * 8));
            uVar8 = uVar8 + 1;
          } while ((int)uVar8 < (int)(uint)*(ushort *)(lVar3 + 0x98));
        }
        *(uint16_t *)(lVar3 + 0x98) = 0;
        if ((*(int *)(lVar3 + 0xa0) == 1) && (uVar1 = *(ushort *)(lVar3 + 0x9a), uVar1 != 0)) {
          lVar7 = 0;
          do {
            *(uint16_t *)(*(long *)(lVar3 + 0xb0) + lVar7) = 0xffff;
            lVar7 = lVar7 + 2;
          } while (lVar7 != (ulong)(uVar1 - 1 & 0xffff) * 2 + 2);
        }
        local_48 = 0x4cbebc20;
        local_44 = 0x4cbebc20;
        Vector2__operator_assign((Vector2 *)&vSelectionPoint1,(Vector2 *)&local_48);
        local_38 = 0x4cbebc20;
        local_34 = 0x4cbebc20;
        Vector2__operator_assign((Vector2 *)&vSelectionPoint2,(Vector2 *)&local_38);
      }
      AutoLockSection__AutoLockSection__005b59d0(aAStack_58);
    }
  }
  return;
}

/* ======================================================================
 * ResetSetPieceSelection  (Ghidra `ResetSetPieceSelection` @ 004a9370)
 * Signature: uint8_t __stdcall ResetSetPieceSelection(tagButtonProps * arg1, void * arg2)
 * Calls: `EditorButton__IsMouseOverButton`, `IsFlashFormActive`, `SMBEditorForms__IsFormActive`
 * Called by: `CancelPastePiecesRendering`, `SMBEditor__SetToAnimationMode`, `SMBEditor__SetToObstacleMode`, `SMBEditor__SetToParalaxMode`, `SMBEditor__SetToSetPieceMode`
 */
/* ResetSetPieceSelection(tagButtonProps const*, void*) */

void ResetSetPieceSelection(tagButtonProps *arg1,void *arg2)

{
  int *piVar1;
  ushort uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  
  uVar4 = SMBEditorForms__IsFormActive();
  uVar5 = IsFlashFormActive();
  if (pEditorButtons._40_2_ != 0) {
    uVar8 = 0;
    do {
      iVar6 = EditorButton__IsMouseOverButton
                        (*(EditorButton **)(pEditorButtons._56_8_ + (ulong)(uVar8 & 0xffff) * 8));
      if (iVar6 == 1) {
        if ((uVar4 | uVar5 | 1) != 0) {
          return;
        }
        goto LAB_004a9408;
      }
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < (int)(uint)(ushort)pEditorButtons._40_2_);
  }
  FlashAnimationLibrary__SetTextFieldText(pEditorLib,"hotkey",&DAT_005ca3d2 /* R:u32=1931804704 */);
  if (uVar4 == 0 && uVar5 == 0) {
LAB_004a9408:
    lVar3 = SuperMeatBoyEditor;
    if (((bSetPieceWayPointMode != 1) &&
        (((arg1 == (tagButtonProps *)0x0 || (*(int *)arg1 == 1)) &&
         (piVar1 = (int *)(SuperMeatBoyEditor + 0xa0),
         *(uint16_t *)(SuperMeatBoyEditor + 0x98) = 0, *piVar1 == 1)))) &&
       (uVar2 = *(ushort *)(lVar3 + 0x9a), uVar2 != 0)) {
      lVar7 = 0;
      do {
        *(uint16_t *)(*(long *)(lVar3 + 0xb0) + lVar7) = 0xffff;
        lVar7 = lVar7 + 2;
      } while (lVar7 != (ulong)(uVar2 - 1 & 0xffff) * 2 + 2);
    }
  }
  return;
}

/* ======================================================================
 * ResetCurrSelection  (Ghidra `ResetCurrSelection` @ 004a9490)
 * Signature: uint8_t ResetCurrSelection(void)
 * Calls: `memset`
 * Called by: (none)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ResetCurrSelection() */

void ResetCurrSelection(void)

{
  memset(pCurrSelectionIDX,0,(long)iNumIDX << 2);
  return;
}

/* ======================================================================
 * ResetSelection  (Ghidra `ResetSelection` @ 004a94b0)
 * Signature: uint8_t ResetSelection(void)
 * Calls: `memset`
 * Called by: (none)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ResetSelection() */

void ResetSelection(void)

{
  memset(pSelectionIDX,0,(long)iNumIDX << 2);
  return;
}

/* ======================================================================
 * ResetIDXArrays  (Ghidra `ResetIDXArrays` @ 004a94d0)
 * Signature: uint8_t ResetIDXArrays(void)
 * Calls: `memset`
 * Called by: (none)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ResetIDXArrays() */

void ResetIDXArrays(void)

{
  memset(pSelectionIDX,0,(long)iNumIDX << 2);
  memset(pCurrSelectionIDX,0,(long)iNumIDX << 2);
  return;
}

/* ======================================================================
 * MergeCurrSelections  (Ghidra `MergeCurrSelections` @ 004a95d0)
 * Signature: uint8_t MergeCurrSelections(void)
 * Calls: `memset`
 * Called by: (none)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* MergeCurrSelections() */

void MergeCurrSelections(void)

{
  uint *puVar1;
  long lVar2;
  int iVar3;
  uint *puVar4;
  
  if (0 < iNumIDX) {
    lVar2 = 0;
    iVar3 = 0;
    do {
      puVar4 = (uint *)(lVar2 + pSelectionIDX);
      iVar3 = iVar3 + 1;
      puVar1 = (uint *)((long)pCurrSelectionIDX + lVar2);
      lVar2 = lVar2 + 4;
      *puVar4 = *puVar4 | *puVar1;
    } while (iVar3 < iNumIDX);
  }
  memset(pCurrSelectionIDX,0,(long)iNumIDX << 2);
  return;
}

/* ======================================================================
 * PlaceTile  (Ghidra `PlaceTile` @ 004a9620)
 * Signature: uint8_t __stdcall PlaceTile(tagButtonProps * arg1, void * arg2)
 * Calls: `Camera__ScreenToWorld`, `EditorButton__IsMouseOverButton`, `IsFlashFormActive`, `SMBEditorForms__IsFormActive`, `TileLevel__GetGridIndex__0058dd90`, `TileLevel__PlaceTile`
 * Called by: (none)
 */
/* PlaceTile(tagButtonProps const*, void*) */

void PlaceTile(tagButtonProps *arg1,void *arg2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint32_t local_58;
  uint32_t local_54;
  uint32_t local_50;
  uint32_t local_4c;
  Vector2 local_48 [16];
  uint32_t local_38;
  uint32_t local_34;
  uint32_t local_28 [2];
  int local_20;
  int local_1c;
  
  if ((*(int *)arg1 == 1) || ((*(int *)arg1 == 2 && (10000 < *(uint *)(arg1 + 4))))) {
    iVar2 = SMBEditorForms__IsFormActive();
    iVar3 = IsFlashFormActive();
    if (pEditorButtons._40_2_ != 0) {
      uVar5 = 0;
      do {
        iVar4 = EditorButton__IsMouseOverButton
                          (*(EditorButton **)(pEditorButtons._56_8_ + (ulong)(uVar5 & 0xffff) * 8));
        if (iVar4 == 1) {
          bVar1 = true;
          goto LAB_004a96a2;
        }
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < (int)(uint)(ushort)pEditorButtons._40_2_);
    }
    FlashAnimationLibrary__SetTextFieldText(pEditorLib,"hotkey",&DAT_005ca3d2 /* R:u32=1931804704 */);
    bVar1 = false;
LAB_004a96a2:
    if (((iVar2 == 0 && iVar3 == 0) && !bVar1) && (*(int *)(SuperMeatBoy + 0x2c) == 1)) {
      local_38 = *(uint32_t *)(Mouse + 0xc);
      local_34 = *(uint32_t *)(Mouse + 0x10);
      local_58 = 0;
      local_54 = 0;
      local_50 = 0;
      local_4c = 0;
      Camera__ScreenToWorld
                (*(Camera **)(SuperMeatBoy + 0x38),(FPUVector *)&local_58,(Vector2 *)&local_38,0.0);
      TileLevel__GetGridIndex__0058dd90
                (*(TileLevel **)(SuperMeatBoy + 0x40),(Vector2 *)&local_58,local_48,&local_20,
                 &local_1c);
      local_28[0] = *SuperMeatBoyEditor;
      TileLevel__PlaceTile(*(TileLevel **)(SuperMeatBoy + 0x40),local_20,local_1c,local_28,0);
    }
  }
  return;
}

/* ======================================================================
 * RemoveTile  (Ghidra `RemoveTile` @ 004a9770)
 * Signature: uint8_t __stdcall RemoveTile(tagButtonProps * arg1, void * arg2)
 * Calls: `Camera__ScreenToWorld`, `EditorButton__IsMouseOverButton`, `IsFlashFormActive`, `SMBEditorForms__IsFormActive`, `TileLevel__GetGridIndex__0058dd90`, `TileLevel__PlaceTile`
 * Called by: (none)
 */
/* RemoveTile(tagButtonProps const*, void*) */

void RemoveTile(tagButtonProps *arg1,void *arg2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint32_t local_58;
  uint32_t local_54;
  uint32_t local_50;
  uint32_t local_4c;
  Vector2 local_48 [16];
  uint32_t local_38;
  uint32_t local_34;
  uint32_t local_28 [2];
  int local_20;
  int local_1c;
  
  if ((*(int *)arg1 == 1) || ((*(int *)arg1 == 2 && (500 < *(uint *)(arg1 + 4))))) {
    iVar2 = SMBEditorForms__IsFormActive();
    iVar3 = IsFlashFormActive();
    if (pEditorButtons._40_2_ != 0) {
      uVar5 = 0;
      do {
        iVar4 = EditorButton__IsMouseOverButton
                          (*(EditorButton **)(pEditorButtons._56_8_ + (ulong)(uVar5 & 0xffff) * 8));
        if (iVar4 == 1) {
          bVar1 = true;
          goto LAB_004a97f2;
        }
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < (int)(uint)(ushort)pEditorButtons._40_2_);
    }
    FlashAnimationLibrary__SetTextFieldText(pEditorLib,"hotkey",&DAT_005ca3d2 /* R:u32=1931804704 */);
    bVar1 = false;
LAB_004a97f2:
    if (((iVar2 == 0 && iVar3 == 0) && !bVar1) && (*(int *)(SuperMeatBoy + 0x2c) == 1)) {
      local_38 = *(uint32_t *)(Mouse + 0xc);
      local_34 = *(uint32_t *)(Mouse + 0x10);
      local_58 = 0;
      local_54 = 0;
      local_50 = 0;
      local_4c = 0;
      Camera__ScreenToWorld
                (*(Camera **)(SuperMeatBoy + 0x38),(FPUVector *)&local_58,(Vector2 *)&local_38,0.0);
      TileLevel__GetGridIndex__0058dd90
                (*(TileLevel **)(SuperMeatBoy + 0x40),(Vector2 *)&local_58,local_48,&local_20,
                 &local_1c);
      local_28[0] = 0;
      TileLevel__PlaceTile(*(TileLevel **)(SuperMeatBoy + 0x40),local_20,local_1c,local_28,0);
    }
  }
  return;
}

/* ======================================================================
 * RunCommandOnSelection  (Ghidra `RunCommandOnSelection` @ 004a98c0)
 * Signature: uint8_t __stdcall RunCommandOnSelection(_func_void_GRIDBLOCK_ptr_int_int * arg1)
 * Calls: `TileLevel__GetGridBlock`
 * Called by: `ChangeBlockID`, `CopySelected`, `DeleteSelected`, `FillSelected`, `SMBEditor__Update`
 */
/* RunCommandOnSelection(void (*)(GRIDBLOCK&, int, int)) */

void RunCommandOnSelection(_func_void_GRIDBLOCK_ptr_int_int *arg1)

{
  int iVar1;
  float fVar2;
  long lVar3;
  GRIDBLOCK *pGVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  TileLevel *pTVar8;
  ulong uVar9;
  float fVar10;
  
  fVar2 = DAT_005be6e8 /* R:0.25f */;
  pTVar8 = *(TileLevel **)(SuperMeatBoy + 0x40);
  if (*(ushort *)(pTVar8 + 0x38) != 0) {
    uVar5 = *(ushort *)(pTVar8 + 0x3a);
    uVar9 = 0;
    uVar7 = (uint)*(ushort *)(pTVar8 + 0x38);
    do {
      iVar1 = (int)uVar9;
      if (uVar5 != 0) {
        fVar10 = (float)uVar7 * fVar2;
        lVar3 = (long)fVar10;
        if ((float)lVar3 < fVar10) {
          lVar3 = lVar3 + 1;
        }
        iVar6 = 0;
        while( true ) {
          if ((*(uint *)(pSelectionIDX + ((long)((int)lVar3 * iVar6) + (uVar9 >> 2)) * 4) &
              1 << ((byte)uVar9 & 0x1f)) != 0) {
            pGVar4 = (GRIDBLOCK *)
                     TileLevel__GetGridBlock
                               (pTVar8,uVar9 & 0xffffffff,iVar6,
                                *(uint32_t *)(SuperMeatBoyEditor + 0xd0));
            (*arg1)(pGVar4,iVar1,iVar6);
            pTVar8 = *(TileLevel **)(SuperMeatBoy + 0x40);
            uVar5 = *(ushort *)(pTVar8 + 0x3a);
            uVar7 = (uint)*(ushort *)(pTVar8 + 0x38);
          }
          iVar6 = iVar6 + 1;
          if ((int)(uint)uVar5 <= iVar6) break;
          fVar10 = (float)uVar7 * fVar2;
          lVar3 = (long)fVar10;
          if ((float)lVar3 < fVar10) {
            lVar3 = lVar3 + 1;
          }
        }
      }
      uVar9 = uVar9 + 1;
    } while (iVar1 + 1 < (int)uVar7);
  }
  return;
}

/* ======================================================================
 * NudgeSetPiece  (Ghidra `NudgeSetPiece` @ 004aa3e0)
 * Signature: uint8_t NudgeSetPiece(void)
 * Calls: `TKeyboard__GetExclusiveState`
 * Called by: `SMBEditor__EditSetPieces`
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* NudgeSetPiece() */

void NudgeSetPiece(void)

{
  long lVar1;
  float *pfVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  float fVar7;
  ulong uVar8;
  float local_24;
  float local_20;
  float local_1c;
  
  iVar4 = TKeyboard__GetExclusiveState(Keyboard,0x6b);
  if (iVar4 == 2) {
    return;
  }
  iVar4 = TKeyboard__GetExclusiveState(Keyboard,0x40);
  if (iVar4 == 2) {
    return;
  }
  iVar4 = TKeyboard__GetExclusiveState(Keyboard,0x43);
  if (iVar4 == 2) {
LAB_004aa580:
    local_24 = _DAT_005bfd00 /* R:10.0f */;
  }
  else {
    iVar4 = TKeyboard__GetExclusiveState(Keyboard,0x43);
    local_24 = DAT_005be894 /* R:1.0f */;
    if (iVar4 == 2) goto LAB_004aa580;
  }
  iVar4 = TKeyboard__GetExclusiveState(Keyboard,0x7f);
  if ((iVar4 == 1) ||
     ((iVar4 = TKeyboard__GetExclusiveState(Keyboard,0x7f), iVar4 == 2 &&
      (0x32 < *(uint *)(Keyboard + 0x608))))) {
    local_1c = DAT_005be894 /* R:1.0f */;
    fVar7 = 0.0;
  }
  else {
    fVar7 = -1.0;
    local_1c = 0.0;
  }
  iVar4 = TKeyboard__GetExclusiveState(Keyboard,0x1f);
  if ((iVar4 == 2) ||
     ((iVar4 = TKeyboard__GetExclusiveState(Keyboard,0x1f), iVar4 == 2 &&
      (0x32 < *(uint *)(Keyboard + 0x188))))) {
    local_1c = fVar7;
  }
  iVar4 = TKeyboard__GetExclusiveState(Keyboard,0x6d);
  if (iVar4 != 2) {
    fVar7 = -1.0;
    iVar4 = TKeyboard__GetExclusiveState(Keyboard,0x6d);
    local_20 = 0.0;
    if ((iVar4 != 2) || (*(uint *)(Keyboard + 0x530) < 0x33)) goto LAB_004aa4e0;
  }
  fVar7 = 0.0;
  local_20 = DAT_005be894 /* R:1.0f */;
LAB_004aa4e0:
  iVar4 = TKeyboard__GetExclusiveState(Keyboard,0x41);
  if ((iVar4 == 2) ||
     ((iVar4 = TKeyboard__GetExclusiveState(Keyboard,0x41), iVar4 == 2 &&
      (0x32 < *(uint *)(Keyboard + 800))))) {
    local_20 = fVar7;
  }
  lVar3 = SuperMeatBoyEditor;
  pfVar2 = pCurrentSetPieceWayPoint;
  if (bSetPieceWayPointMode == 1) {
    if (pCurrentSetPieceWayPoint != (float *)0x0) {
      *pCurrentSetPieceWayPoint = local_20 * local_24 + *pCurrentSetPieceWayPoint;
      pfVar2[1] = local_1c * local_24 + pfVar2[1];
    }
  }
  else if (*(short *)(SuperMeatBoyEditor + 0x98) != 0) {
    uVar6 = 0;
    do {
      uVar8 = uVar6 & 0xffff;
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulong)uVar5;
      lVar1 = *(long *)(*(long *)(lVar3 + 0xa8) + uVar8 * 8);
      *(float *)(lVar1 + 0x28) = *(float *)(lVar1 + 0x28) + local_1c * local_24;
      *(float *)(lVar1 + 0x24) = *(float *)(lVar1 + 0x24) + local_20 * local_24;
    } while ((int)uVar5 < (int)(uint)*(ushort *)(lVar3 + 0x98));
  }
  return;
}

/* ======================================================================
 * RemoveCursorLight  (Ghidra `RemoveCursorLight` @ 004ab270)
 * Signature: uint8_t RemoveCursorLight(void)
 * Calls: `TileLevelLightMap__DestroyLight`
 * Called by: (none)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* RemoveCursorLight() */

void RemoveCursorLight(void)

{
  Light *local_18 [3];
  
  if ((pSelectedLight == 0) &&
     (local_18[0] = *(Light **)(SuperMeatBoyEditor + 200), local_18[0] != (Light *)0x0)) {
    TileLevelLightMap__DestroyLight(*(TileLevelLightMap **)(SuperMeatBoy + 0x390),local_18);
    pSelectedLight = 0;
    return;
  }
  pSelectedLight = 0;
  return;
}

/* ======================================================================
 * PlaceSetPiece  (Ghidra `PlaceSetPiece` @ 004b1a80)
 * Signature: uint8_t __stdcall PlaceSetPiece(tagButtonProps * arg1, void * arg2)
 * Calls: `Camera__ScreenToWorld`, `Camera__WorldToScreen`, `EditorButton__IsMouseOverButton`, `GSetPieceWayPoints__CreateNewWayPointGroup`, `GSetPieceWayPoints__GetWayPointGroup`, `GetObjectFormDefaults`, `IsEditorFunctionAllowed`, `IsFlashFormActive`, `RemoveByElement`, `SMBEditorForms__IsFormActive` (+10 more)
 * Called by: `CancelPastePiecesRendering`, `SMBEditor__SetToAnimationMode`, `SMBEditor__SetToObstacleMode`, `SMBEditor__SetToParalaxMode`, `SMBEditor__SetToSetPieceMode`
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlaceSetPiece(tagButtonProps const*, void*) */

void PlaceSetPiece(tagButtonProps *arg1,void *arg2)

{
  SMBEditor *pSVar1;
  byte bVar2;
  TileLevelSetPiece TVar3;
  int iVar4;
  Camera *this;
  TileLevelSetPiece *pTVar5;
  uint64_t uVar6;
  SMBEditor *pSVar7;
  ushort uVar8;
  short sVar9;
  ushort uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  void *pvVar14;
  long lVar15;
  SetPieceWayPointGroup *this_00;
  void *pvVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  void *pvVar20;
  ushort uVar21;
  short sVar22;
  long *plVar23;
  long *plVar24;
  uint64_t *puVar25;
  ushort *puVar26;
  ulong uVar27;
  TileLevelSetPiece *pTVar28;
  short *psVar29;
  TileLevel *pTVar30;
  ulong uVar31;
  TileLevelSetPiece *pTVar32;
  uint uVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  TileLevelSetPiece local_198 [32];
  byte local_178;
  uint32_t local_154;
  uint32_t local_150;
  uint32_t local_14c;
  uint32_t local_148;
  uint32_t local_144;
  uint32_t local_140;
  uint32_t local_128;
  uint32_t local_124;
  uint32_t local_120;
  uint32_t local_11c;
  float local_118;
  float local_114;
  uint32_t local_110;
  uint32_t local_10c;
  float local_108;
  float local_104;
  uint32_t local_100;
  uint32_t local_fc;
  uint32_t local_f8;
  uint32_t local_f4;
  uint32_t local_f0;
  uint32_t local_ec;
  uint32_t local_e8;
  uint32_t local_e4;
  uint32_t local_e0;
  uint32_t local_dc;
  uint32_t local_d8;
  uint32_t local_d4;
  TileLevelSetPiece *local_c8 [2];
  float local_b8;
  float local_b4;
  float local_a8;
  float local_a4;
  float local_98;
  float local_94;
  float local_88;
  float local_84;
  float local_78;
  uint local_74;
  float local_68;
  float local_64;
  float local_58;
  float local_54;
  long local_48;
  uint32_t local_3c [3];
  
  uVar11 = SMBEditorForms__IsFormActive();
  uVar12 = IsFlashFormActive();
  if (pEditorButtons._40_2_ != 0) {
    uVar31 = 0;
    do {
      iVar13 = EditorButton__IsMouseOverButton
                         (*(EditorButton **)(pEditorButtons._56_8_ + (uVar31 & 0xffff) * 8));
      if (iVar13 == 1) {
        if ((uVar11 | uVar12 | 1) != 0) {
          return;
        }
        goto LAB_004b1b28;
      }
      uVar33 = (int)uVar31 + 1;
      uVar31 = (ulong)uVar33;
    } while ((int)uVar33 < (int)(uint)(ushort)pEditorButtons._40_2_);
  }
  FlashAnimationLibrary__SetTextFieldText(pEditorLib,"hotkey",&DAT_005ca3d2 /* R:u32=1931804704 */);
  if (uVar11 == 0 && uVar12 == 0) {
LAB_004b1b28:
    iVar13 = *(int *)arg1;
    if (bSetPieceWayPointMode == 1) {
      if (iVar13 == 1) {
        pTVar5 = (TileLevelSetPiece *)**(uint64_t **)(SuperMeatBoyEditor + 0xa8);
        this_00 = (SetPieceWayPointGroup *)
                  GSetPieceWayPoints__GetWayPointGroup(SetPieceWayPoints,pTVar5);
        if ((((*(int *)(Keyboard + 0x334) != 2) && (*(int *)(Keyboard + 0x544) != 2)) &&
            (*(int *)(Keyboard + 0x310) != 2)) && (*(int *)(Keyboard + 0x514) != 2)) {
          if (this_00 == (SetPieceWayPointGroup *)0x0) {
            this_00 = (SetPieceWayPointGroup *)
                      GSetPieceWayPoints__CreateNewWayPointGroup(SetPieceWayPoints,pTVar5,1);
          }
          SetPieceWayPointGroup__AddWayPoint__0059c660
                    (this_00,(FPUVector *)(SuperMeatBoyEditor + 0x2c),
                     (Vector2 *)(SuperMeatBoyEditor + 0x3c),*(float *)(SuperMeatBoyEditor + 0x44),
                     0.0);
          return;
        }
        if (this_00 == (SetPieceWayPointGroup *)0x0) {
          return;
        }
        pCurrentSetPieceWayPoint = SetPieceWayPointGroup__GetClickedWayPoint(this_00);
        return;
      }
    }
    else if (iVar13 == 1) {
      if (((*(int *)(Keyboard + 0x334) != 2) && (*(int *)(Keyboard + 0x544) != 2)) &&
         ((*(int *)(Keyboard + 0x310) != 2 && (*(int *)(Keyboard + 0x514) != 2)))) {
        TileLevelSetPiece__TileLevelSetPiece__0058d640
                  (local_198,(TileLevelSetPiece *)(SuperMeatBoyEditor + 8));
        lVar15 = GetObjectFormDefaults((uint)local_178);
        if (*(long *)(lVar15 + 0x10) != 0) {
          local_14c = *(uint32_t *)(*(long *)(lVar15 + 0x10) + 8);
          local_148 = *(uint32_t *)(*(long *)(lVar15 + 0x10) + 0xc);
          local_144 = *(uint32_t *)(*(long *)(lVar15 + 0x10) + 0x10);
          local_140 = *(uint32_t *)(*(long *)(lVar15 + 0x10) + 0x14);
          local_150 = **(uint32_t **)(lVar15 + 0x10);
          local_154 = *(uint32_t *)(*(long *)(lVar15 + 0x10) + 4);
        }
                    /* try { // try from 004b1eb6 to 004b1ebf has its CatchHandler @ 004b2bb9 */
        TileLevel__PlaceSetPiece
                  (*(TileLevel **)(SuperMeatBoy + 0x40),local_198,
                   *(uint32_t *)(SuperMeatBoyEditor + 0xd0));
        iVar13 = IsEditorFunctionAllowed();
        pSVar7 = SuperMeatBoyEditor;
        if ((((iVar13 != 0) && (bSetPieceWayPointMode != 1)) &&
            (pSVar1 = SuperMeatBoyEditor + 0xa0, *(uint16_t *)(SuperMeatBoyEditor + 0x98) = 0,
            *(int *)pSVar1 == 1)) && (uVar10 = *(ushort *)(pSVar7 + 0x9a), uVar10 != 0)) {
          lVar15 = 0;
          do {
            *(uint16_t *)(*(long *)(pSVar7 + 0xb0) + lVar15) = 0xffff;
            lVar15 = lVar15 + 2;
          } while (lVar15 != (ulong)(uVar10 - 1 & 0xffff) * 2 + 2);
        }
        TileLevelSetPiece__TileLevelSetPiece__0058d560(local_198);
        return;
      }
      local_d8 = *(uint32_t *)(Mouse + 0xc);
      local_d4 = *(uint32_t *)(Mouse + 0x10);
      local_128 = 0;
      local_124 = 0;
      local_120 = 0;
      local_11c = 0;
      Camera__ScreenToWorld
                (*(Camera **)(SuperMeatBoy + 0x38),(FPUVector *)&local_128,(Vector2 *)&local_d8,0.0)
      ;
      local_c8[0] = (TileLevelSetPiece *)0x0;
      vSelectionPoint1 = local_128;
      DAT_0081a974 /* R:2.2958888052482446e-39f */ = local_124;
      pTVar30 = *(TileLevel **)(SuperMeatBoy + 0x40);
      this = *(Camera **)(SuperMeatBoy + 0x38);
      iVar13 = *(int *)(pTVar30 + 0x68);
      pTVar5 = *(TileLevelSetPiece **)(pTVar30 + 0x60);
      lVar15 = TileLevel__getLevelLayer(pTVar30,*(uint32_t *)(SuperMeatBoyEditor + 0xd0));
      if (0 < iVar13) {
        pTVar32 = pTVar5 + 0x30;
        pTVar28 = pTVar5;
        fVar36 = DAT_005c17f0 /* R:100000000.0f */;
        do {
          if (*(long *)(pTVar28 + 0x60) != 0) {
            iVar13 = iVar13 + -1;
            iVar4 = *(int *)(SuperMeatBoyEditor + 0xc0);
            TVar3 = pTVar28[0x21];
            if ((((byte)TVar3 & 2) == 0) && (lVar15 == *(long *)(pTVar28 + 0x18))) {
              if (iVar4 == 4) {
                if (((byte)TVar3 & 0x30) == 0x10) goto LAB_004b253a;
              }
              else if (iVar4 == 5) {
                if (((byte)TVar3 & 0x30) == 0x30) goto LAB_004b253a;
              }
              else if (iVar4 == 2) {
                if (((byte)TVar3 & 1) == 0) {
LAB_004b253a:
                  local_118 = 0.0;
                  local_114 = 0.0;
                  local_110 = 0;
                  local_10c = 0;
                  local_108 = 0.0;
                  local_104 = 0.0;
                  local_100 = 0;
                  local_fc = 0;
                  local_b8 = 0.0;
                  local_b4 = 0.0;
                  local_a8 = 0.0;
                  local_a4 = 0.0;
                  local_3c[0] = 0;
                  (**(code **)(*GSuperMeatBoy__pLevelPalette + 0x58))
                            (GSuperMeatBoy__pLevelPalette,pTVar28,&local_a8,local_3c,&local_b8);
                  local_110 = *(uint32_t *)(pTVar32 + -4);
                  local_10c = *(uint32_t *)pTVar32;
                  local_108 = *(float *)(pTVar28 + 0x34) * local_a8 + local_b8;
                  local_104 = *(float *)(pTVar5 + (long)(pTVar28 + (0x38 - (long)pTVar5))) *
                              local_a4 + local_b4;
                  local_118 = *(float *)(pTVar32 + -0xc) - local_108;
                  local_108 = local_108 + *(float *)(pTVar32 + -0xc);
                  local_114 = *(float *)(pTVar32 + -8) - local_104;
                  local_104 = local_104 + *(float *)(pTVar32 + -8);
                  local_100 = local_110;
                  local_fc = local_10c;
                  Camera__WorldToScreen(this,(Vector2 *)&local_98,(FPUVector *)&local_118);
                  Camera__WorldToScreen(this,(Vector2 *)&local_88,(FPUVector *)&local_108);
                  fVar34 = *(float *)(pTVar5 + (long)(pTVar28 + (0x2c - (long)pTVar5)));
                  if ((((fVar34 < fVar36) &&
                       (*(float *)(this + 0x108) <= fVar34 && fVar34 != *(float *)(this + 0x108)))
                      && (local_98 < *(float *)(Mouse + 0xc))) &&
                     (((fVar35 = (float)(*(uint *)(Mouse + 0x10) ^ DAT_005be6f0 /* R:u32=2147483648 */), local_94 < fVar35
                       && (*(float *)(Mouse + 0xc) < local_88)) && (fVar35 < local_84)))) {
                    fVar36 = fVar34;
                    local_c8[0] = pTVar28;
                  }
                }
              }
              else if ((iVar4 == 1) && (((byte)TVar3 & 1) != 0)) goto LAB_004b253a;
            }
          }
          pTVar28 = pTVar28 + 0x68;
          pTVar32 = pTVar32 + 0x68;
        } while (0 < iVar13);
      }
      if (local_c8[0] == (TileLevelSetPiece *)0x0) {
        return;
      }
      if ((*(int *)(Keyboard + 0x310) != 2) && (*(int *)(Keyboard + 0x514) != 2)) {
        SMBEditor__AddToSelectedPieces(SuperMeatBoyEditor,local_c8[0]);
        return;
      }
      ResizeableArray<TileLevelSetPiece*>::RemoveByElement
                ((TileLevelSetPiece **)(SuperMeatBoyEditor + 0x70),(int)local_c8);
      return;
    }
    if (iVar13 == 2) {
      if (((*(int *)(Keyboard + 0x334) == 2) || (*(int *)(Keyboard + 0x544) == 2)) ||
         ((*(int *)(Keyboard + 0x310) == 2 || (*(int *)(Keyboard + 0x514) == 2)))) {
        fVar36 = *(float *)(Mouse + 0xc);
        uVar11 = *(uint *)(Mouse + 0x10);
        local_f8 = 0;
        local_f4 = 0;
        local_f0 = 0;
        local_ec = 0;
        local_78 = fVar36;
        local_74 = uVar11;
        Camera__ScreenToWorld
                  (*(Camera **)(SuperMeatBoy + 0x38),(FPUVector *)&local_f8,(Vector2 *)&local_78,0.0
                  );
        local_e0 = 0;
        vSelectionPoint2 = local_f8;
        local_dc = 0;
        _DAT_0081a97c /* R:0.0f */ = local_f4;
        local_e8 = vSelectionPoint1;
        local_e4 = DAT_0081a974 /* R:2.2958888052482446e-39f */;
        Camera__WorldToScreen
                  (*(Camera **)(SuperMeatBoy + 0x38),(Vector2 *)&local_68,(FPUVector *)&local_e8);
        pTempSetSelection._40_2_ = 0;
        pTVar30 = *(TileLevel **)(SuperMeatBoy + 0x40);
        iVar13 = *(int *)(pTVar30 + 0x68);
        lVar15 = *(long *)(pTVar30 + 0x60);
        if ((pTempSetSelection._48_4_ == 1) && (pTempSetSelection._42_2_ != 0)) {
          uVar10 = pTempSetSelection._42_2_ - 1;
          lVar18 = 0;
          do {
            *(uint16_t *)(pTempSetSelection._64_8_ + lVar18) = 0xffff;
            lVar18 = lVar18 + 2;
          } while (lVar18 != (ulong)uVar10 * 2 + 2);
          pTVar30 = *(TileLevel **)(SuperMeatBoy + 0x40);
        }
        lVar18 = TileLevel__getLevelLayer(pTVar30,*(uint32_t *)(SuperMeatBoyEditor + 0xd0));
        if (0 < iVar13) {
          fVar34 = (float)(uVar11 ^ DAT_005be6f0 /* R:u32=2147483648 */);
          do {
            if (*(long *)(lVar15 + 0x60) != 0) {
              iVar13 = iVar13 + -1;
              iVar4 = *(int *)(SuperMeatBoyEditor + 0xc0);
              bVar2 = *(byte *)(lVar15 + 0x21);
              if (((bVar2 & 2) == 0) && (lVar18 == *(long *)(lVar15 + 0x18))) {
                if (iVar4 == 4) {
                  if ((bVar2 & 0x30) == 0x10) goto LAB_004b2400;
                }
                else if (iVar4 == 5) {
                  if ((bVar2 & 0x30) == 0x30) goto LAB_004b2400;
                }
                else if (iVar4 == 2) {
                  if ((bVar2 & 1) == 0) {
LAB_004b2400:
                    Camera__WorldToScreen
                              (*(Camera **)(SuperMeatBoy + 0x38),(Vector2 *)&local_58,
                               (FPUVector *)(lVar15 + 0x24));
                    uVar6 = pTempSetSelection._56_8_;
                    if ((((local_68 < local_58) && (local_58 < fVar36)) ||
                        ((fVar36 < local_58 && (local_58 < local_68)))) &&
                       (((local_64 < local_54 && (local_54 < fVar34)) ||
                        (((float)(DAT_005be6f0 /* R:u32=2147483648 */ ^ uVar11) < local_54 && (local_54 < local_64)))))) {
                      if ((*(int *)(Keyboard + 0x334) == 2) || (*(int *)(Keyboard + 0x544) == 2)) {
                        if (pTempSetSelection._40_2_ == 0) {
LAB_004b28f0:
                          if (pTempSetSelection._72_4_ == -0x5eef3582) {
                            if ((ushort)pTempSetSelection._42_2_ <= (ushort)pTempSetSelection._40_2_
                               ) {
                              pTempSetSelection._42_2_ =
                                   pTempSetSelection._42_2_ + pTempSetSelection._52_2_;
                              uVar17 = (ulong)pTempSetSelection[0x2c];
                              pvVar14 = (void *)0x0;
                              uVar31 = (ulong)(ushort)pTempSetSelection._42_2_ * 8;
                              pvVar20 = malloc(uVar17 + 0x10 + uVar31);
                              if (pvVar20 != (void *)0x0) {
                                pvVar14 = (void *)((long)pvVar20 + 0x10U +
                                                  (uVar17 - ((long)pvVar20 + 0x10U) % uVar17) %
                                                  uVar17);
                                *(ulong *)((long)pvVar14 + -0x10) = uVar31;
                                *(void **)((long)pvVar14 + -8) = pvVar20;
                                if (uVar6 != 0) {
                                  uVar17 = *(ulong *)(uVar6 + -0x10);
                                  if (uVar31 <= *(ulong *)(uVar6 + -0x10)) {
                                    uVar17 = uVar31;
                                  }
                                  memcpy(pvVar14,(void *)uVar6,uVar17);
                                  free(*(void **)(uVar6 + -8));
                                }
                              }
                              uVar6 = pTempSetSelection._64_8_;
                              uVar10 = pTempSetSelection._42_2_;
                              pTempSetSelection._56_8_ = pvVar14;
                              if (pTempSetSelection._64_8_ != 0) {
                                uVar17 = (ulong)pTempSetSelection[0x2c];
                                uVar31 = (ulong)(ushort)pTempSetSelection._42_2_ * 2;
                                pvVar20 = malloc(uVar17 + 0x10 + uVar31);
                                pvVar14 = (void *)0x0;
                                uVar21 = pTempSetSelection._40_2_;
                                if (pvVar20 != (void *)0x0) {
                                  pvVar14 = (void *)((long)pvVar20 + 0x10U +
                                                    (uVar17 - ((long)pvVar20 + 0x10U) % uVar17) %
                                                    uVar17);
                                  *(ulong *)((long)pvVar14 + -0x10) = uVar31;
                                  *(void **)((long)pvVar14 + -8) = pvVar20;
                                  uVar17 = *(ulong *)(uVar6 + -0x10);
                                  if (uVar31 <= *(ulong *)(uVar6 + -0x10)) {
                                    uVar17 = uVar31;
                                  }
                                  memcpy(pvVar14,(void *)uVar6,uVar17);
                                  free(*(void **)(uVar6 + -8));
                                  uVar21 = pTempSetSelection._40_2_;
                                  uVar10 = pTempSetSelection._42_2_;
                                }
                                for (; pTempSetSelection._64_8_ = pvVar14, uVar21 < uVar10;
                                    uVar21 = uVar21 + 1) {
                                  *(uint16_t *)(pTempSetSelection._64_8_ + (ulong)uVar21 * 2) =
                                       0xffff;
                                  pvVar14 = (void *)pTempSetSelection._64_8_;
                                }
                              }
                            }
                          }
                          else {
                            uVar31 = (ulong)pTempSetSelection[0x2c];
                            pTempSetSelection._48_4_ = 0;
                            pvVar14 = malloc(uVar31 + 0x38);
                            puVar25 = (uint64_t *)0x0;
                            if (pvVar14 != (void *)0x0) {
                              puVar25 = (uint64_t *)
                                        ((uVar31 - ((long)pvVar14 + 0x10U) % uVar31) % uVar31 +
                                        (long)pvVar14 + 0x10U);
                              puVar25[-1] = pvVar14;
                              puVar25[-2] = 0x28;
                            }
                            pTempSetSelection._56_8_ = puVar25;
                            *puVar25 = 0;
                            puVar25[1] = 0;
                            puVar25[2] = 0;
                            puVar25[3] = 0;
                            puVar25[4] = 0;
                            pTempSetSelection._40_2_ = 0;
                            pTempSetSelection._42_2_ = 5;
                            pTempSetSelection._72_4_ = 0xa110ca7e;
                            pTempSetSelection._52_2_ = 5;
                          }
                          if ((pTempSetSelection._48_4_ == 1) && (pTempSetSelection._42_2_ != 0)) {
                            sVar22 = 1;
                            sVar9 = *(short *)pTempSetSelection._64_8_;
                            psVar29 = (short *)pTempSetSelection._64_8_;
                            while (sVar9 != -1) {
                              psVar29 = psVar29 + 1;
                              if (sVar22 == pTempSetSelection._42_2_) goto LAB_004b29ae;
                              sVar22 = sVar22 + 1;
                              sVar9 = *psVar29;
                            }
                            *psVar29 = pTempSetSelection._40_2_;
                          }
LAB_004b29ae:
                          *(long *)(pTempSetSelection._56_8_ +
                                   (ulong)(ushort)pTempSetSelection._40_2_ * 8) = lVar15;
                          pTempSetSelection._40_2_ = pTempSetSelection._40_2_ + 1;
                        }
                        else {
                          sVar9 = 0;
                          lVar19 = *(long *)pTempSetSelection._56_8_;
                          plVar23 = (long *)pTempSetSelection._56_8_;
                          while (lVar15 != lVar19) {
                            sVar9 = sVar9 + 1;
                            if (sVar9 == pTempSetSelection._40_2_) goto LAB_004b28f0;
                            plVar23 = plVar23 + 1;
                            lVar19 = *plVar23;
                          }
                          if (((pTempSetSelection._48_4_ == 1) &&
                              ((ushort)pTempSetSelection._42_2_ != 0)) &&
                             (sVar9 != *(short *)pTempSetSelection._64_8_)) {
                            lVar19 = 0;
                            do {
                              if (lVar19 == (ulong)((ushort)pTempSetSelection._42_2_ - 1) * 2)
                              break;
                              lVar19 = lVar19 + 2;
                            } while (sVar9 != *(short *)(pTempSetSelection._64_8_ + lVar19));
                          }
                        }
                      }
                      else {
                        local_48 = lVar15;
                        ResizeableArray<TileLevelSetPiece*>::RemoveByElement
                                  ((TileLevelSetPiece **)(SuperMeatBoyEditor + 0x70),(int)&local_48)
                        ;
                      }
                    }
                  }
                }
                else if ((iVar4 == 1) && ((bVar2 & 1) != 0)) goto LAB_004b2400;
              }
            }
            lVar15 = lVar15 + 0x68;
          } while (0 < iVar13);
        }
      }
    }
    else if (iVar13 == 3) {
      uVar31 = 0;
      uVar10 = pTempSetSelection._40_2_;
      if (pTempSetSelection._40_2_ != 0) {
        do {
          pSVar7 = SuperMeatBoyEditor;
          uVar21 = *(ushort *)(SuperMeatBoyEditor + 0x98);
          plVar23 = (long *)(pTempSetSelection._56_8_ + (uVar31 & 0xffff) * 8);
          if (uVar21 == 0) {
LAB_004b1bbd:
            if (*(int *)(SuperMeatBoyEditor + 0xb8) == -0x5eef3582) {
              if (*(ushort *)(SuperMeatBoyEditor + 0x9a) <= uVar21) {
                uVar10 = *(ushort *)(SuperMeatBoyEditor + 0x9a) +
                         *(short *)(SuperMeatBoyEditor + 0xa4);
                uVar27 = (ulong)(byte)SuperMeatBoyEditor[0x9c];
                pvVar14 = (void *)0x0;
                pvVar20 = *(void **)(SuperMeatBoyEditor + 0xa8);
                *(ushort *)(SuperMeatBoyEditor + 0x9a) = uVar10;
                uVar17 = (ulong)uVar10 * 8;
                pvVar16 = malloc(uVar27 + 0x10 + uVar17);
                if (pvVar16 != (void *)0x0) {
                  pvVar14 = (void *)((long)pvVar16 + 0x10U +
                                    (uVar27 - ((long)pvVar16 + 0x10U) % uVar27) % uVar27);
                  *(ulong *)((long)pvVar14 + -0x10) = uVar17;
                  *(void **)((long)pvVar14 + -8) = pvVar16;
                  if (pvVar20 != (void *)0x0) {
                    uVar27 = *(ulong *)((long)pvVar20 + -0x10);
                    if (uVar17 <= *(ulong *)((long)pvVar20 + -0x10)) {
                      uVar27 = uVar17;
                    }
                    memcpy(pvVar14,pvVar20,uVar27);
                    free(*(void **)((long)pvVar20 + -8));
                  }
                }
                pvVar20 = *(void **)(pSVar7 + 0xb0);
                *(void **)(pSVar7 + 0xa8) = pvVar14;
                if (pvVar20 != (void *)0x0) {
                  uVar10 = *(ushort *)(pSVar7 + 0x9a);
                  uVar27 = (ulong)(byte)pSVar7[0x9c];
                  pvVar14 = (void *)0x0;
                  uVar17 = (ulong)uVar10 * 2;
                  pvVar16 = malloc(uVar27 + 0x10 + uVar17);
                  if (pvVar16 != (void *)0x0) {
                    pvVar14 = (void *)((long)pvVar16 + 0x10U +
                                      (uVar27 - ((long)pvVar16 + 0x10U) % uVar27) % uVar27);
                    *(ulong *)((long)pvVar14 + -0x10) = uVar17;
                    *(void **)((long)pvVar14 + -8) = pvVar16;
                    uVar27 = *(ulong *)((long)pvVar20 + -0x10);
                    if (uVar17 <= *(ulong *)((long)pvVar20 + -0x10)) {
                      uVar27 = uVar17;
                    }
                    memcpy(pvVar14,pvVar20,uVar27);
                    free(*(void **)((long)pvVar20 + -8));
                    uVar10 = *(ushort *)(pSVar7 + 0x9a);
                  }
                  uVar21 = *(ushort *)(pSVar7 + 0x98);
                  *(void **)(pSVar7 + 0xb0) = pvVar14;
                  if (uVar10 <= uVar21) goto LAB_004b1c6d;
                  while( true ) {
                    uVar17 = (ulong)uVar21;
                    uVar21 = uVar21 + 1;
                    *(uint16_t *)((long)pvVar14 + uVar17 * 2) = 0xffff;
                    if (uVar10 <= uVar21) break;
                    pvVar14 = *(void **)(pSVar7 + 0xb0);
                  }
                }
                uVar21 = *(ushort *)(pSVar7 + 0x98);
              }
            }
            else {
              uVar17 = (ulong)(byte)SuperMeatBoyEditor[0x9c];
              *(uint32_t *)(SuperMeatBoyEditor + 0xa0) = 0;
              pvVar14 = malloc(uVar17 + 0x38);
              puVar25 = (uint64_t *)0x0;
              if (pvVar14 != (void *)0x0) {
                puVar25 = (uint64_t *)
                          ((uVar17 - ((long)pvVar14 + 0x10U) % uVar17) % uVar17 +
                          (long)pvVar14 + 0x10U);
                puVar25[-2] = 0x28;
                puVar25[-1] = pvVar14;
              }
              *(uint64_t **)(pSVar7 + 0xa8) = puVar25;
              uVar21 = 0;
              *puVar25 = 0;
              puVar25[1] = 0;
              puVar25[2] = 0;
              puVar25[3] = 0;
              puVar25[4] = 0;
              *(uint16_t *)(pSVar7 + 0x98) = 0;
              *(uint16_t *)(pSVar7 + 0x9a) = 5;
              *(uint32_t *)(pSVar7 + 0xb8) = 0xa110ca7e;
              *(uint16_t *)(pSVar7 + 0xa4) = 5;
            }
LAB_004b1c6d:
            if ((*(int *)(pSVar7 + 0xa0) == 1) && (*(short *)(pSVar7 + 0x9a) != 0)) {
              puVar26 = *(ushort **)(pSVar7 + 0xb0);
              sVar9 = 1;
              uVar10 = *puVar26;
              while (uVar10 != 0xffff) {
                puVar26 = puVar26 + 1;
                if (sVar9 == *(short *)(pSVar7 + 0x9a)) goto LAB_004b1c7a;
                sVar9 = sVar9 + 1;
                uVar10 = *puVar26;
              }
              *puVar26 = uVar21;
              uVar21 = *(ushort *)(pSVar7 + 0x98);
            }
LAB_004b1c7a:
            *(long *)(*(long *)(pSVar7 + 0xa8) + (ulong)uVar21 * 8) = *plVar23;
            *(short *)(pSVar7 + 0x98) = *(short *)(pSVar7 + 0x98) + 1;
            uVar10 = pTempSetSelection._40_2_;
          }
          else {
            plVar24 = *(long **)(SuperMeatBoyEditor + 0xa8);
            uVar8 = 0;
            lVar15 = *plVar24;
            while (lVar15 != *plVar23) {
              uVar8 = uVar8 + 1;
              if (uVar8 == uVar21) goto LAB_004b1bbd;
              plVar24 = plVar24 + 1;
              lVar15 = *plVar24;
            }
            if (((*(int *)(SuperMeatBoyEditor + 0xa0) == 1) &&
                (*(ushort *)(SuperMeatBoyEditor + 0x9a) != 0)) &&
               (uVar8 != **(ushort **)(SuperMeatBoyEditor + 0xb0))) {
              lVar15 = 0;
              do {
                if (lVar15 == (ulong)(*(ushort *)(SuperMeatBoyEditor + 0x9a) - 1) * 2) break;
                lVar15 = lVar15 + 2;
              } while (uVar8 != *(ushort *)((long)*(ushort **)(SuperMeatBoyEditor + 0xb0) + lVar15))
              ;
            }
          }
          uVar11 = (int)uVar31 + 1;
          uVar31 = (ulong)uVar11;
        } while ((int)uVar11 < (int)(uint)uVar10);
      }
      pTempSetSelection._40_2_ = 0;
      if ((pTempSetSelection._48_4_ == 1) && (pTempSetSelection._42_2_ != 0)) {
        uVar10 = pTempSetSelection._42_2_ - 1;
        lVar15 = 0;
        do {
          *(uint16_t *)(pTempSetSelection._64_8_ + lVar15) = 0xffff;
          lVar15 = lVar15 + 2;
        } while (lVar15 != (ulong)uVar10 * 2 + 2);
      }
    }
  }
  return;
}

/* ======================================================================
 * QuickSave  (Ghidra `QuickSave` @ 004b5530)
 * Signature: uint8_t __stdcall QuickSave(tagButtonProps * arg1, void * arg2)
 * Calls: `SMBEditor__SaveLevel`, `UIForm__Activate`
 * Called by: `SMBEditor__Activate`
 */
/* QuickSave(tagButtonProps const*, void*) */

void QuickSave(tagButtonProps *arg1,void *arg2)

{
  if (*(long *)(*(char **)(SuperMeatBoyEditor + 0x100) + -0x18) == 0) {
    UIForm__Activate(SMBEditorForms__SMB_SAVE_LEVEL);
    return;
  }
  SMBEditor__SaveLevel(SuperMeatBoyEditor,*(char **)(SuperMeatBoyEditor + 0x100),1);
  return;
}

/* ======================================================================
 * RenderLoadingScreenFunc  (Ghidra `RenderLoadingScreenFunc` @ 004d6ea0)
 * Signature: uint8_t RenderLoadingScreenFunc(void)
 * Calls: `GSMBMenu__RenderLoadingScreen`
 * Called by: `GSMBMenu__TransitionOutGameFromMenu`, `GSMBMenu__TransitionOutMenuFromGame`, `GSMBMenu__TransitionOutReloadChapter`, `SMBMenuInMenuFromGame`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* RenderLoadingScreenFunc() */

void RenderLoadingScreenFunc(void)

{
  GSMBMenu__RenderLoadingScreen(SMBMenu);
  return;
}

/* ======================================================================
 * RenderSetPiece  (Ghidra `RenderSetPiece` @ 004dd820)
 * Signature: uint8_t __stdcall RenderSetPiece(TileLevelSetPiece * arg1, int arg2)
 * Calls: `BoundingSquare__BoundingSquare`, `Camera__SetCameraMatricies`, `GSMBChapterData__GetCurrentLevelData`, `GSMBMenu__IsInReplayMode`, `GetRandomINT`, `IndexTexture__GetTextureWAndH`, `IndexTexture__SetTexture`, `IsBoundsTouchingBounds`, `RegisterAudioPosition`, `SMBPalette__RenderSetPiece` (+29 more)
 * Called by: `RenderSetPiece__004dee20`, `SMBPalette__RenderSetPiece`
 */
/* SMBPalette__RenderSetPiece(TileLevelSetPiece*, int) [clone .part.118] */

void SMBPalette__RenderSetPiece(TileLevelSetPiece *arg1,int arg2)

{
  byte *pbVar1;
  uchar uVar2;
  uint32_t uVar3;
  long *plVar4;
  VertexBuffer *this;
  byte bVar5;
  byte bVar6;
  uint8_t uVar7;
  uint32_t uVar8;
  uint uVar9;
  int iVar10;
  Matrix4x4 *pMVar11;
  uint64_t uVar12;
  long lVar13;
  ulong uVar14;
  uint32_t in_register_00000034;
  long lVar15;
  uint uVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float local_2a0;
  float local_29c;
  BoundingSquare local_298 [160];
  Matrix4x4 local_1f8 [64];
  uint64_t local_1b8;
  uint64_t local_1b0;
  float local_1a8;
  float local_1a4;
  uint32_t local_198;
  uint32_t local_194;
  uint32_t local_190;
  uint32_t local_18c;
  uint32_t local_188;
  uint32_t local_184;
  float local_180;
  float local_17c;
  uint32_t local_178;
  float local_174;
  uint32_t local_170;
  uint32_t local_16c;
  float local_168 [3];
  uint32_t local_15c;
  float local_158;
  float local_154;
  uint32_t local_150;
  uint32_t local_14c;
  float local_148 [3];
  float local_13c;
  uint32_t local_138;
  uint32_t local_134;
  uint32_t local_130;
  uint32_t local_12c;
  uint32_t local_128;
  float local_124;
  float local_118;
  float local_114;
  uint32_t local_108;
  uint32_t local_104;
  uint32_t local_f8;
  uint32_t local_f4;
  uint32_t local_e8;
  uint32_t local_e4;
  uint32_t local_d8;
  uint32_t local_d4;
  float local_c8;
  uint local_c4;
  Vector2 local_b8 [16];
  Vector2 local_a8 [16];
  uint32_t local_98;
  uint32_t local_94;
  Vector2 local_88 [16];
  Vector2 local_78 [16];
  Vector2 local_68 [16];
  Vector2 local_58 [16];
  uint64_t local_48;
  float local_3c [3];
  
  lVar15 = CONCAT44(in_register_00000034,arg2);
  TGraphics__SetRenderState(Graphics,'\x03',0);
  TGraphics__SetRenderState(Graphics,'\a',0);
  TGraphics__SetRenderState(Graphics,'\x01',7);
  Camera__SetCameraMatricies(*(Camera **)(SuperMeatBoy + 0x38),1);
  bVar5 = *(byte *)(lVar15 + 0x21);
  if ((bVar5 & 2) != 0) {
    if (*(int *)(arg1 + 0x50) == 0) {
      return;
    }
    TGraphics__SetRenderState(Graphics,'\x01',7);
    TGraphics__SetRenderState(Graphics,'\b',1);
    TGraphics__SetRenderState(Graphics,'\x05',1);
    TGraphics__SetRenderState(Graphics,'\x06',0);
    (**(code **)(**(long **)(*(long *)(arg1 + 0x40) + (ulong)*(byte *)(lVar15 + 0x20) * 8) + 0x10
                ))();
    TGraphics__SetRenderState(Graphics,'\x01',3);
    TGraphics__SetRenderState(Graphics,'\x05',4);
    TGraphics__SetRenderState(Graphics,'\x06',5);
    return;
  }
  if ((bVar5 & 1) != 0) {
    if (*(int *)(arg1 + 0x54) == 0) {
      return;
    }
    if (SystemCaps._4_4_ == 4) {
      return;
    }
    if (SystemCaps._4_4_ == 8) {
      return;
    }
    TGraphics__SetRenderState(Graphics,'\x01',1);
    uVar9 = 0;
    if (0 < *(int *)(arg1 + 0x54)) {
      uVar9 = *(int *)(arg1 + 0x54) - 1;
    }
    uVar16 = (uint)*(byte *)(lVar15 + 0x20);
    if ((int)uVar9 <= (int)(uint)*(byte *)(lVar15 + 0x20)) {
      uVar16 = uVar9;
    }
    lVar17 = (long)(int)uVar16;
    lVar13 = *(long *)(*(long *)(*(long *)(arg1 + 0x38) + lVar17 * 8) + 0x118);
    local_148[1] = ((float)*(ushort *)(lVar13 + 0x10) / (float)*(ushort *)(lVar13 + 0xc)) *
                   *(float *)(lVar15 + 0x38);
    local_148[0] = DAT_005c1400 /* R:100.0f */ * *(float *)(lVar15 + 0x34);
    Vector2__operator_mul__005be200(local_58,DAT_005c01c4 /* R:1000.0f */);
    lVar13 = *(long *)(*(long *)(arg1 + 0x38) + lVar17 * 8);
    *(uint32_t *)(lVar13 + 0xbc) = 1;
    Vector2__operator_assign((Vector2 *)(lVar13 + 0xf0),local_58);
    TGraphics__ResetTexCoordGen(Graphics);
    TGraphics__AddTextureCoordGen(Graphics,0,2,8,0xffffffff);
    TGraphics__SetRenderState(Graphics,'\b',1);
    TGraphics__SetRenderState(Graphics,'\x05',4);
    TGraphics__SetRenderState(Graphics,'\x06',5);
    local_198 = 0x3f800000;
    local_194 = 0x3f800000;
    local_190 = 0x3f800000;
    local_18c = 0;
    bVar5 = *(byte *)(lVar15 + 0x21) >> 2;
    bVar6 = bVar5 & 3;
    if (bVar6 != 1) {
      if (bVar6 == 2) {
        local_194 = 0xbf800000;
        goto LAB_004ddaa1;
      }
      if ((bVar5 & 3) == 0) goto LAB_004ddaa1;
      local_194 = 0xbf800000;
    }
    local_198 = 0xbf800000;
LAB_004ddaa1:
    sincosf(DAT_005be6e4 /* R:0.5f */ * *(float *)(lVar15 + 0x3c),&local_29c,&local_2a0);
    local_180 = local_29c;
    local_188 = 0;
    local_184 = 0;
    local_17c = local_2a0;
    pMVar11 = (Matrix4x4 *)TGraphics__GetMatrix(Graphics,0);
    Matrix4x4__Transformation3D
              (pMVar11,(FPUVector *)&local_198,(TQuaternion *)&local_188,
               (FPUVector *)(lVar15 + 0x24));
    TGraphics__PushMatrix(Graphics,0);
    fVar21 = DAT_005be894 /* R:1.0f */;
    local_178 = 0;
    local_168[1] = 100.0;
    local_170 = 0;
    local_16c = 0;
    local_174 = DAT_005c72c4 /* R:-101.0f */ * *(float *)(*(long *)(*(long *)(arg1 + 0x38) + lVar17 * 8) + 0xf4);
    local_15c = 0;
    local_168[0] = DAT_005be894 /* R:1.0f */;
    local_168[2] = DAT_005be894 /* R:1.0f */;
    pMVar11 = (Matrix4x4 *)TGraphics__GetMatrix(Graphics,0);
    Matrix4x4__Transformation3D
              (pMVar11,(FPUVector *)local_168,(TQuaternion *)0x0,(FPUVector *)&local_178);
    TGraphics__PushMatrix(Graphics,0);
    local_128 = 0;
    lVar13 = *(long *)(*(long *)(*(long *)(arg1 + 0x38) + lVar17 * 8) + 0x118);
    local_114 = (float)*(ushort *)(lVar13 + 0x10);
    local_124 = (local_114 - DAT_005c0068 /* R:2.0f */) / local_114;
    local_114 = fVar21 / local_114;
    local_118 = fVar21 / (float)*(ushort *)(lVar13 + 0xc);
    Matrix4x4__Transformation2DRot
              (local_1f8,(Vector2 *)&local_118,(float *)0x0,(Vector2 *)&local_128);
    uVar12 = Matrix4x4__TexCoordinateMatrix(local_1f8);
    TGraphics__SetTextCoordMatrix(Graphics,8,uVar12);
    pbVar1 = (byte *)(*(long *)(*(long *)(arg1 + 0x38) + lVar17 * 8) + 0x120);
    *pbVar1 = *pbVar1 | 4;
    TGraphics__DisableMasterPixelStage(Graphics);
    Sprite__SetupRender(*(Sprite **)(*(long *)(arg1 + 0x38) + lVar17 * 8));
    uVar2 = *(uchar *)(*(long *)(*(long *)(arg1 + 0x38) + lVar17 * 8) + 0x121);
    TGraphics__SetSamplerState(Graphics,uVar2,'\0',2);
    TGraphics__SetSamplerState(Graphics,uVar2,'\x01',2);
    TGraphics__SetSamplerState(Graphics,uVar2,'\x04',2);
    TGraphics__SetSamplerState(Graphics,uVar2,'\x03',2);
    TGraphics__ResetPixelStages(Graphics);
    uVar8 = SamplerRegisterToSource(uVar2);
    TGraphics__AddPixelStage(Graphics,uVar8,1,2,0,4,0,0xffffffff);
    TGraphics__AddPixelStage(Graphics,0x15,0,2,0,5,3,0xffffffff);
    lVar13 = *(long *)(lVar15 + 0x18);
    local_1a4 = (float)(*(uint *)(lVar15 + 0x2c) & DAT_005be880 /* R:u32=2147483647 */);
    local_1b8 = ::cRed;
    local_1a8 = DAT_005c72c8 /* R:0.0020000000949949026f */;
    fVar21 = DAT_005c72c8 /* R:0.0020000000949949026f */ * local_1a4;
    local_1b0 = DAT_0081bfe8 /* R:1.6815581571897805e-44f */;
    if ((lVar13 == 0) && (*(int *)(SuperMeatBoy + 0x2c) == 1)) {
      lVar13 = TileLevel__getLevelLayer
                         (*(TileLevel **)(SuperMeatBoy + 0x40),
                          *(uint32_t *)(SuperMeatBoyEditor + 0xd0));
      local_1b8 = *(uint64_t *)(lVar13 + 0x400);
      fVar22 = *(float *)(lVar13 + 0x410);
      local_1b0 = *(uint64_t *)(lVar13 + 0x408);
    }
    else {
      local_1b8 = *(uint64_t *)(lVar13 + 0x400);
      fVar22 = *(float *)(lVar13 + 0x410);
      local_1b0 = *(uint64_t *)(lVar13 + 0x408);
    }
    TGraphics__SetPixelOutputParams(Graphics,fVar22,fVar21,0.0,0.0);
    TGraphics__SetPixelColorConstant(Graphics,1,lVar13 + 0x400);
    TGraphics__SetFogParameters(Graphics,(FogParams *)&local_1b8);
    Sprite__RenderOnly(*(Sprite **)(*(long *)(arg1 + 0x38) + lVar17 * 8));
    TGraphics__PopMatrix(Graphics);
    TGraphics__SetSamplerState(Graphics,uVar2,'\0',0);
    TGraphics__SetSamplerState(Graphics,uVar2,'\x01',2);
    TGraphics__SetSamplerState(Graphics,uVar2,'\x04',2);
    TGraphics__SetSamplerState(Graphics,uVar2,'\x03',2);
    local_108 = 0x42c80000;
    local_104 = 0x3f800000;
    Matrix4x4__ConvertToScalingMatrix(local_1f8,(Vector2 *)&local_108);
    uVar12 = Matrix4x4__TexCoordinateMatrix(local_1f8);
    TGraphics__SetTextCoordMatrix(Graphics,8,uVar12);
    Sprite__RenderOnly(*(Sprite **)(*(long *)(arg1 + 0x38) + lVar17 * 8));
    TGraphics__ResetTexCoordGen(Graphics);
    TGraphics__PopMatrix(Graphics);
    TGraphics__ResetPixelStages(Graphics);
    TGraphics__EnableMasterPixelStage(Graphics);
    TGraphics__SetSamplerState(Graphics,uVar2,'\0',2);
    TGraphics__SetSamplerState(Graphics,uVar2,'\x01',2);
    return;
  }
  if ((bVar5 & 0x10) == 0) {
    if (*(long *)(arg1 + 0x70) == 0) {
      return;
    }
    if (SystemCaps._4_4_ == 8) {
      return;
    }
    TGraphics__SetRenderState(Graphics,'\x01',7);
    IndexTexture__GetTextureWAndH
              (*(IndexTexture **)(arg1 + 0x70),(uint)*(byte *)(lVar15 + 0x20),(float *)&local_48,
               local_3c);
    bVar5 = *(byte *)(lVar15 + 0x21) >> 2;
    bVar6 = bVar5 & 3;
    local_158 = DAT_005c07a4 /* R:-1.0f */;
    local_154 = DAT_005be894 /* R:1.0f */;
    if (((bVar6 != 1) && (local_158 = DAT_005be894 /* R:1.0f */, local_154 = DAT_005c07a4 /* R:-1.0f */, bVar6 != 2)) &&
       (local_158 = DAT_005be894 /* R:1.0f */, local_154 = DAT_005be894 /* R:1.0f */, (bVar5 & 3) != 0)) {
      local_158 = DAT_005c07a4 /* R:-1.0f */;
      local_154 = DAT_005c07a4 /* R:-1.0f */;
    }
    local_150 = 0x3f800000;
    local_14c = 0;
    local_154 = local_3c[0] * *(float *)(lVar15 + 0x38) * local_154;
    local_158 = (float)local_48 * *(float *)(lVar15 + 0x34) * local_158;
    sincosf(DAT_005be6e4 /* R:0.5f */ * *(float *)(lVar15 + 0x3c),&local_29c,&local_2a0);
    local_148[0] = 0.0;
    local_148[1] = 0.0;
    local_148[2] = local_29c;
    local_13c = local_2a0;
    pMVar11 = (Matrix4x4 *)TGraphics__GetMatrix(Graphics,0);
    Matrix4x4__Transformation3D
              (pMVar11,(FPUVector *)&local_158,(TQuaternion *)local_148,(FPUVector *)(lVar15 + 0x24)
              );
    uVar7 = IndexTexture__SetTexture
                      (*(IndexTexture **)(arg1 + 0x70),0xff,(uint)*(byte *)(lVar15 + 0x20),0);
    TGraphics__SetRenderState(Graphics,'\b',1);
    TGraphics__SetRenderState(Graphics,'\x05',4);
    TGraphics__SetRenderState(Graphics,'\x06',5);
    TGraphics__ResetPixelStages(Graphics);
    uVar8 = SamplerRegisterToSource(uVar7);
    TGraphics__AddPixelStage(Graphics,uVar8,1,0,0,0,1,0xffffffff);
    TGraphics__Draw(Graphics,CGR__pSingleQuadStream,(IndexBuffer *)0x0);
    TGraphics__ResetPixelStages(Graphics);
    goto LAB_004de621;
  }
  if (((uint)*(byte *)(lVar15 + 0x20) == *(uint *)(arg1 + 0x42b4)) &&
     (*(int *)(SuperMeatBoy + 0x3a4) == 0)) {
    iVar10 = GSMBMenu__IsInReplayMode(SMBMenu);
    if ((iVar10 == 0) &&
       (lVar13 = GSMBChapterData__GetCurrentLevelData(SMBChapterData,0xffffffff,0xb),
       (*(byte *)(lVar13 + 4) & 1) != 0)) {
      return;
    }
    bVar5 = *(byte *)(lVar15 + 0x21);
  }
  if ((bVar5 & 0x20) == 0) {
    plVar18 = *(long **)(arg1 + 0x80);
  }
  else {
    plVar18 = *(long **)(arg1 + 0x90);
  }
  if (plVar18 == (long *)0x0) {
    return;
  }
  bVar6 = *(byte *)(lVar15 + 0x20);
  if ((uint)bVar6 == *(uint *)(arg1 + 0x425c)) {
    if (*(short *)(arg1 + 0x68) == 1) {
      local_e8 = 0x3f800000;
      local_e4 = 0x3f800000;
      bVar6 = bVar5 >> 2 & 3;
      if (bVar6 != 1) {
        if (bVar6 == 2) {
          local_e4 = 0xbf800000;
          goto LAB_004deb60;
        }
        if ((bVar5 >> 2 & 3) == 0) goto LAB_004deb60;
        local_e4 = 0xbf800000;
      }
      local_e8 = 0xbf800000;
LAB_004deb60:
      lVar13 = *(long *)(arg1 + 0x100);
      *(uint32_t *)(lVar13 + 0x30) = *(uint32_t *)(lVar15 + 0x24);
      *(uint32_t *)(lVar13 + 0x34) = *(uint32_t *)(lVar15 + 0x28);
      *(uint32_t *)(lVar13 + 0x38) = *(uint32_t *)(lVar15 + 0x2c);
      *(uint32_t *)(lVar13 + 0x3c) = *(uint32_t *)(lVar15 + 0x30);
      Vector2__operator_mul__005be200(local_68,(Vector2 *)(lVar15 + 0x34));
      Vector2__operator_assign((Vector2 *)(*(long *)(arg1 + 0x100) + 0x40),local_68);
      *(uint32_t *)(*(long *)(arg1 + 0x100) + 0x48) = *(uint32_t *)(lVar15 + 0x3c);
      *(uint32_t *)(*(long *)(arg1 + 0x100) + 0x4c) = *(uint32_t *)(lVar15 + 0x3c);
      (**(code **)(**(long **)(arg1 + 0x100) + 0x10))();
      return;
    }
    if (*(int *)(arg1 + 0x1a80) == 1) {
      (**(code **)(**(long **)(arg1 + 0xf8) + 0x10))();
      return;
    }
  }
  if (((*(int *)(SuperMeatBoy + 0x294) < 2) && (*(int *)(SuperMeatBoy + 0x290) != 9)) &&
     (((uint)bVar6 == *(uint *)(arg1 + 0x425c) && (*(int *)(arg1 + 0x1a80) == 0)))) {
    local_d8 = 0x3f800000;
    local_d4 = 0x3f800000;
    bVar6 = bVar5 >> 2 & 3;
    if (bVar6 != 1) {
      if (bVar6 == 2) {
        local_d4 = 0xbf800000;
        goto LAB_004de6c7;
      }
      if ((bVar5 >> 2 & 3) == 0) goto LAB_004de6c7;
      local_d4 = 0xbf800000;
    }
    local_d8 = 0xbf800000;
LAB_004de6c7:
    lVar13 = *(long *)(arg1 + 0x41f8);
    *(uint32_t *)(lVar13 + 0x30) = *(uint32_t *)(lVar15 + 0x24);
    *(uint32_t *)(lVar13 + 0x34) = *(uint32_t *)(lVar15 + 0x28);
    *(uint32_t *)(lVar13 + 0x38) = *(uint32_t *)(lVar15 + 0x2c);
    *(uint32_t *)(lVar13 + 0x3c) = *(uint32_t *)(lVar15 + 0x30);
    Vector2__operator_mul__005be200(local_78,(Vector2 *)(lVar15 + 0x34));
    Vector2__operator_assign((Vector2 *)(*(long *)(arg1 + 0x41f8) + 0x40),local_78);
    *(uint32_t *)(*(long *)(arg1 + 0x41f8) + 0x48) = *(uint32_t *)(lVar15 + 0x3c);
    *(uint32_t *)(*(long *)(arg1 + 0x41f8) + 0x4c) = *(uint32_t *)(lVar15 + 0x3c);
    (**(code **)(**(long **)(arg1 + 0x41f8) + 0x10))();
    return;
  }
  uVar9 = (uint)bVar6;
  uVar16 = (uint)bVar6;
  if (((((uVar9 == *(uint *)(arg1 + 0x4390)) || (uVar9 == *(uint *)(arg1 + 0x438c))) ||
       (uVar9 == *(uint *)(arg1 + 0x4394))) ||
      ((uVar9 == *(uint *)(arg1 + 0x43a0) ||
       (uVar9 = (uint)bVar6, uVar9 == *(uint *)(arg1 + 0x439c))))) ||
     (uVar9 == *(uint *)(arg1 + 0x43a4))) {
    if (*(ushort *)(arg1 + 0x4008) != 0) {
      plVar4 = *(long **)(arg1 + 0x4018);
      uVar9 = 0;
      if (lVar15 == *plVar4) {
        uVar14 = 0;
        plVar19 = plVar4;
      }
      else {
        do {
          uVar9 = uVar9 + 1;
          if ((int)(uint)*(ushort *)(arg1 + 0x4008) <= (int)uVar9) goto LAB_004de12a;
          uVar14 = (ulong)(uVar9 & 0xffff);
          plVar19 = plVar4 + uVar14 * 5;
        } while (lVar15 != plVar4[uVar14 * 5]);
      }
      iVar10 = *(int *)((long)plVar19 + 0xc);
      if (iVar10 == 2) {
        fVar21 = *(float *)(lVar15 + 0x44) * *(float *)(arg1 + 0x4398);
        if (fVar21 < *(float *)(lVar15 + 0x40) || fVar21 == *(float *)(lVar15 + 0x40)) {
          *(uint32_t *)((long)plVar19 + 0xc) = 1;
          *(uint32_t *)(lVar15 + 0x40) = 0;
          *(uint32_t *)(plVar19 + 1) = 0;
          if ((int)plVar19[2] == 0) {
            *(char *)(lVar15 + 0x20) = (char)*(uint32_t *)(arg1 + 0x438c);
            iVar10 = *(int *)((long)plVar19 + 0xc);
          }
          else {
            if ((int)plVar19[2] == 1) {
              *(char *)(lVar15 + 0x20) = (char)*(uint32_t *)(arg1 + 0x439c);
            }
            iVar10 = *(int *)((long)plVar19 + 0xc);
          }
          goto LAB_004de899;
        }
      }
      else {
LAB_004de899:
        if ((1 < iVar10 - 1U) && ((int)plVar19[2] != 1)) goto LAB_004de12a;
      }
      lVar13 = *(long *)(*(long *)(arg1 + 0x4068) + uVar14 * 8);
      if (lVar13 != 0) {
        this = *(VertexBuffer **)(lVar13 + 0x20);
        VertexBuffer__Lock(this,(void **)&local_48,1,0);
        Vector2__operator_minus__005be180((Vector2 *)&local_c8,(Vector2 *)(plVar19 + 4));
        fVar21 = (float)Vector2__Length((Vector2 *)&local_c8);
        if (DAT_005bf760 /* R:0.0f */ < fVar21) {
          Vector2__operator_div_assign__005be2c0((Vector2 *)&local_c8,fVar21);
        }
        fVar21 = DAT_005c72c0 /* R:1.5f */;
        if ((int)plVar19[2] != 1) {
          fVar21 = DAT_005c17f4 /* R:2.5f */;
        }
        uVar8 = 0x64ffffff;
        fVar22 = DAT_005be894 /* R:1.0f */;
        if (*(int *)((long)plVar19 + 0xc) == 1) {
          iVar10 = GetRandomINT(0,100);
          uVar8 = 0xe1ffffff;
          fVar22 = (float)iVar10 * DAT_005c07b0 /* R:0.009999999776482582f */ + fVar21;
        }
        fVar20 = (float)(local_c4 ^ DAT_005be6f0 /* R:u32=2147483648 */) * fVar22;
        fVar22 = fVar22 * local_c8;
        *(float *)CONCAT44(local_48._4_4_,(float)local_48) = *(float *)(plVar19 + 3) + fVar20;
        *(float *)(CONCAT44(local_48._4_4_,(float)local_48) + 4) =
             *(float *)((long)plVar19 + 0x1c) + fVar22;
        lVar13 = CONCAT44(local_48._4_4_,(float)local_48);
        *(uint32_t *)(lVar13 + 8) = 0xffffff;
        *(float *)(lVar13 + 0xc) = *(float *)(plVar19 + 4) + fVar20;
        fVar21 = *(float *)((long)plVar19 + 0x24);
        *(uint32_t *)(lVar13 + 0x14) = 0xffffff;
        *(float *)(lVar13 + 0x10) = fVar21 + fVar22;
        *(int *)(lVar13 + 0x18) = (int)plVar19[3];
        uVar3 = *(uint32_t *)((long)plVar19 + 0x1c);
        *(uint32_t *)(lVar13 + 0x20) = uVar8;
        *(uint32_t *)(lVar13 + 0x1c) = uVar3;
        *(int *)(lVar13 + 0x24) = (int)plVar19[4];
        uVar3 = *(uint32_t *)((long)plVar19 + 0x24);
        *(uint32_t *)(lVar13 + 0x2c) = uVar8;
        *(uint32_t *)(lVar13 + 0x28) = uVar3;
        *(float *)(lVar13 + 0x30) = *(float *)(plVar19 + 3) - fVar20;
        fVar21 = *(float *)((long)plVar19 + 0x1c);
        *(uint32_t *)(lVar13 + 0x38) = 0xffffff;
        *(float *)(lVar13 + 0x34) = fVar21 - fVar22;
        *(float *)(lVar13 + 0x3c) = *(float *)(plVar19 + 4) - fVar20;
        *(float *)(lVar13 + 0x40) = *(float *)((long)plVar19 + 0x24) - fVar22;
        *(uint32_t *)(lVar13 + 0x44) = 0xffffff;
        VertexBuffer__Unlock(this);
        pMVar11 = (Matrix4x4 *)TGraphics__GetMatrix(Graphics,0);
        Matrix4x4__Identity(pMVar11);
        TGraphics__ResetPixelStages(Graphics);
        TGraphics__AddPixelStage(Graphics,4,0,1,0,3,3,0xffffffff);
        iVar10 = *(int *)((long)plVar19 + 0x14);
        if ((int)plVar19[2] == 0) {
          if (iVar10 == 0) {
            local_138 = 0x3f800000;
            local_134 = 0x3e4ccccd;
            local_130 = 0x3e4ccccd;
            local_12c = 0x3f800000;
            TGraphics__SetPixelColorConstant(Graphics,0,&local_138);
            iVar10 = *(int *)((long)plVar19 + 0x14);
          }
          else if (iVar10 == 1) {
            TGraphics__SetPixelColorConstant(Graphics,0,&::cRed);
            iVar10 = *(int *)((long)plVar19 + 0x14);
          }
          uVar9 = 0;
          if (iVar10 + 1U < 2) {
            uVar9 = iVar10 + 1U;
          }
          *(uint *)((long)plVar19 + 0x14) = uVar9;
        }
        else {
          if (iVar10 == 0) {
            TGraphics__SetPixelColorConstant(Graphics,0,&::cRed);
            iVar10 = *(int *)((long)plVar19 + 0x14);
          }
          else if (iVar10 == 1) {
            TGraphics__SetPixelColorConstant(Graphics,0,::cYellow);
            iVar10 = *(int *)((long)plVar19 + 0x14);
          }
          else if (iVar10 == 2) {
            TGraphics__SetPixelColorConstant(Graphics,0,&::cWhite);
            iVar10 = *(int *)((long)plVar19 + 0x14);
          }
          uVar9 = 0;
          if (iVar10 + 1U < 3) {
            uVar9 = iVar10 + 1U;
          }
          *(uint *)((long)plVar19 + 0x14) = uVar9;
        }
        TGraphics__Draw(Graphics,*(VertexStream **)(*(long *)(arg1 + 0x4068) + uVar14 * 8),
                        (IndexBuffer *)0x0);
      }
    }
  }
  else if (*(int *)(SuperMeatBoy + 0x2c) != 1) {
    if (*(uint *)(arg1 + 0x4080) != 0xffffffff) {
      if (uVar9 == *(uint *)(arg1 + 0x4080)) {
        return;
      }
      if (*(uint *)(arg1 + 0x4084) != 0xffffffff) {
        if (uVar9 == *(uint *)(arg1 + 0x4084)) {
          return;
        }
        if (*(uint *)(arg1 + 0x4088) != 0xffffffff) {
          if (uVar9 == *(uint *)(arg1 + 0x4088)) {
            return;
          }
          if (*(uint *)(arg1 + 0x408c) != 0xffffffff) {
            if (uVar9 == *(uint *)(arg1 + 0x408c)) {
              return;
            }
            if (*(uint *)(arg1 + 0x4090) != 0xffffffff) {
              if (uVar9 == *(uint *)(arg1 + 0x4090)) {
                return;
              }
              if (*(uint *)(arg1 + 0x4094) != 0xffffffff) {
                if (uVar9 == *(uint *)(arg1 + 0x4094)) {
                  return;
                }
                if (*(uint *)(arg1 + 0x4098) != 0xffffffff) {
                  if (uVar16 == *(uint *)(arg1 + 0x4098)) {
                    return;
                  }
                  if (*(uint *)(arg1 + 0x409c) != 0xffffffff) {
                    if (uVar16 == *(uint *)(arg1 + 0x409c)) {
                      return;
                    }
                    if (*(uint *)(arg1 + 0x40a0) != 0xffffffff) {
                      if (uVar16 == *(uint *)(arg1 + 0x40a0)) {
                        return;
                      }
                      if ((*(uint *)(arg1 + 0x40a4) != 0xffffffff) &&
                         (uVar16 == *(uint *)(arg1 + 0x40a4))) {
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    if (uVar16 == *(uint *)(arg1 + 0x42c0)) {
      return;
    }
    if (uVar16 == *(uint *)(arg1 + 0x43c8)) {
      return;
    }
    if (uVar16 == *(uint *)(arg1 + 0x43cc)) {
      return;
    }
    if (uVar16 == *(uint *)(arg1 + 0x43d0)) {
      return;
    }
  }
LAB_004de12a:
  TGraphics__SetRenderState(Graphics,'\x01',7);
  local_f8 = 0x3f800000;
  local_f4 = 0x3f800000;
  fVar21 = *(float *)(lVar15 + 0x40);
  bVar5 = *(byte *)(lVar15 + 0x21) >> 2;
  bVar6 = bVar5 & 3;
  if (bVar6 == 1) {
LAB_004de182:
    local_f8 = 0xbf800000;
  }
  else if (bVar6 == 2) {
    local_f4 = 0xbf800000;
  }
  else if ((bVar5 & 3) != 0) {
    local_f4 = 0xbf800000;
    goto LAB_004de182;
  }
  (**(code **)(*(long *)arg1 + 0x58))(arg1,lVar15,local_b8,&local_48,local_a8);
  local_98 = *(uint32_t *)(lVar15 + 0x24);
  local_94 = *(uint32_t *)(lVar15 + 0x28);
  Vector2__operator_plus_assign((Vector2 *)&local_98,local_a8);
  Vector2__operator_mul_assign__005be220(local_b8,DAT_005be6e4 /* R:0.5f */);
  BoundingSquare__BoundingSquare(local_298,(Vector2 *)&local_98,(float)local_48,local_b8);
  *(uint32_t *)(plVar18 + 6) = *(uint32_t *)(lVar15 + 0x24);
  *(uint32_t *)((long)plVar18 + 0x34) = *(uint32_t *)(lVar15 + 0x28);
  *(uint32_t *)(plVar18 + 7) = *(uint32_t *)(lVar15 + 0x2c);
  *(uint32_t *)((long)plVar18 + 0x3c) = *(uint32_t *)(lVar15 + 0x30);
  Vector2__operator_mul__005be200(local_88,(Vector2 *)(lVar15 + 0x34));
  Vector2__operator_assign((Vector2 *)(plVar18 + 8),local_88);
  *(uint32_t *)(plVar18 + 9) = *(uint32_t *)(lVar15 + 0x3c);
  *(uint32_t *)((long)plVar18 + 0x4c) = *(uint32_t *)(lVar15 + 0x3c);
  *(uint *)(plVar18 + 4) = (uint)*(byte *)(lVar15 + 0x20);
  fVar22 = *(float *)(lVar15 + 0x48) + fVar21;
  *(float *)(plVar18 + 0xb) = fVar22;
  *(uint32_t *)(plVar18 + 0xc) = *(uint32_t *)(lVar15 + 0x44);
  bVar5 = *(byte *)(lVar15 + 0x20);
  if (((((uint)bVar5 == *(uint *)(pPalProps + 0x3c)) || ((uint)bVar5 == *(uint *)(pPalProps + 0x38))
       ) || (uVar9 = (uint)bVar5, uVar9 == *(uint *)(pPalProps + 0x44))) ||
     ((uVar9 == *(uint *)(pPalProps + 0x34) || (uVar9 == *(uint *)(pPalProps + 0x40))))) {
    *(uint32_t *)(plVar18 + 0xc) = 0x3f800000;
    *(float *)(plVar18 + 0xb) = fVar21;
    fVar22 = fVar21;
  }
  if (SystemCaps._4_4_ == 8) {
    if ((*(byte *)(lVar15 + 0x21) & 0x20) != 0) goto LAB_004dec42;
LAB_004deaff:
    *(float *)(plVar18 + 0xb) = fOneFrameTimeStep * *(float *)(lVar15 + 0x44) + fVar22;
  }
  else {
    if ((*(byte *)(lVar15 + 0x21) & 0x20) != 0) {
LAB_004dec42:
      iVar10 = IsBoundsTouchingBounds
                         ((Bounds *)(*(long *)(SuperMeatBoy + 0x38) + 0x140),(Bounds *)local_298);
      if (iVar10 != 1) {
        fVar22 = *(float *)(plVar18 + 0xb);
        goto LAB_004deaff;
      }
    }
    RegisterAudioPosition((FPUVector *)(lVar15 + 0x24));
    (**(code **)(*plVar18 + 0x10))(plVar18);
  }
  if (*(int *)(SuperMeatBoy + 0x2c) == 2) {
    *(float *)(lVar15 + 0x40) = fVar21;
  }
  else {
    bVar5 = *(byte *)(lVar15 + 0x20);
    if ((((uint)bVar5 == *(uint *)(pPalProps + 0x3c)) ||
        ((uint)bVar5 == *(uint *)(pPalProps + 0x38))) ||
       ((uVar9 = (uint)bVar5, uVar9 == *(uint *)(pPalProps + 0x44) ||
        ((uVar9 == *(uint *)(pPalProps + 0x34) || (uVar9 == *(uint *)(pPalProps + 0x40))))))) {
      *(int *)(lVar15 + 0x40) = (int)plVar18[0xb];
    }
    else {
      *(float *)(lVar15 + 0x40) = *(float *)(plVar18 + 0xb) - *(float *)(lVar15 + 0x48);
    }
  }
LAB_004de621:
  TGraphics__SetRenderState(Graphics,'\a',1);
  return;
}

/* ======================================================================
 * RenderSetPiece__004dee20  (Ghidra `RenderSetPiece` @ 004dee20)
 * Signature: uint8_t __stdcall RenderSetPiece(TileLevelSetPiece * arg1, int arg2)
 * Calls: `RenderSetPiece`, `SMBPalette__RenderSetPiece`
 * Called by: (none)
 */
/* SMBPalette__RenderSetPiece(TileLevelSetPiece*, int) */

void SMBPalette__RenderSetPiece(TileLevelSetPiece *arg1,int arg2)

{
  if (*(int *)(SuperMeatBoy + 0x2c) != 2) {
    RenderSetPiece(arg1,arg2);
    return;
  }
  return;
}

/* ======================================================================
 * RenderRating  (Ghidra `RenderRating` @ 00509b10)
 * Signature: uint8_t __stdcall RenderRating(FlashLibraryInstance * arg1, float arg2)
 * Calls: `FlashLibraryInstance__GetInstanceBounds`, `FlashLibraryInstance__GotoAndStop`, `TGraphics__AddPixelStage`, `TGraphics__Draw`, `TGraphics__GetMatrix`, `TGraphics__ResetPixelStages`, `TGraphics__ResetTexCoordGen`, `TGraphics__SetPixelColorConstant`, `TGraphics__SetRenderState`
 * Called by: `SMBLevelPortalInterface__Render`
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RenderRating(FlashLibraryInstance*, float) */

void RenderRating(FlashLibraryInstance *arg1,float arg2)

{
  Matrix4x4 *pMVar1;
  float fVar2;
  float fVar3;
  uint32_t local_48;
  uint32_t local_44;
  uint32_t local_40;
  uint32_t local_3c;
  Vector2 local_38 [16];
  float local_28;
  uint32_t local_24;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  if (arg2 <= 0.0) {
    arg2 = 0.0;
  }
  FlashLibraryInstance__GetInstanceBounds(arg1,&local_c,&local_10,local_38);
  if (_DAT_005bff44 /* R:5.0f */ <= arg2) {
    arg2 = _DAT_005bff44 /* R:5.0f */;
  }
  local_10 = local_10 * DAT_005be6e4 /* R:0.5f */;
  fVar3 = DAT_005be6e4 /* R:0.5f */ * local_c;
  fVar2 = arg2 * DAT_005bfba0 /* R:0.20000000298023224f */;
  local_c = fVar2 * fVar3;
  TGraphics__SetRenderState(Graphics,'\f',0);
  TGraphics__SetRenderState(Graphics,'\x03',1);
  TGraphics__SetRenderState(Graphics,'\x01',7);
  local_24 = *(uint32_t *)(arg1 + 0x34);
  local_18 = local_c;
  local_14 = local_10;
  local_28 = (fVar2 + DAT_005c07a4 /* R:-1.0f */) * fVar3 + *(float *)(arg1 + 0x30);
  pMVar1 = (Matrix4x4 *)TGraphics__GetMatrix(Graphics,0);
  Matrix4x4__Transformation2DRot(pMVar1,(Vector2 *)&local_18,(float *)0x0,(Vector2 *)&local_28);
  TGraphics__ResetPixelStages(Graphics);
  TGraphics__ResetTexCoordGen(Graphics);
  TGraphics__AddPixelStage(Graphics,1,0,0,0,0,1,0xffffffff);
  local_44 = 0;
  local_48 = 0x3f800000;
  local_3c = 0x3f800000;
  local_40 = 0;
  TGraphics__SetPixelColorConstant(Graphics,0,&local_48);
  TGraphics__Draw(Graphics,CGR__pSingleQuadStream,(IndexBuffer *)0x0);
  TGraphics__SetRenderState(Graphics,'\f',1);
  TGraphics__SetRenderState(Graphics,'\x03',1);
  TGraphics__SetRenderState(Graphics,'\x01',2);
  FlashLibraryInstance__GotoAndStop(arg1,1);
  (**(code **)(*(long *)arg1 + 0x10))(arg1);
  TGraphics__SetRenderState(Graphics,'\f',1);
  TGraphics__SetRenderState(Graphics,'\x03',0);
  TGraphics__SetRenderState(Graphics,'\x01',7);
  return;
}

/* ======================================================================
 * ResetLightAndLayerAssets  (Ghidra `ResetLightAndLayerAssets` @ 00512090)
 * Signature: uint8_t __stdcall ResetLightAndLayerAssets(void * arg1)
 * Calls: `TileLevel__BuildSetPieceStreams`, `TileLevel__BuildTileStreams`
 * Called by: `GSuperMeatBoy__SetCurrentLevel`
 */
/* ResetLightAndLayerAssets(void*) */

void ResetLightAndLayerAssets(void *arg1)

{
  if (*(TileLevel **)(SuperMeatBoy + 0x40) != (TileLevel *)0x0) {
    TileLevel__BuildTileStreams(*(TileLevel **)(SuperMeatBoy + 0x40));
    TileLevel__BuildSetPieceStreams();
    return;
  }
  return;
}

/* ======================================================================
 * MuteAudio  (Ghidra `MuteAudio` @ 00512620)
 * Signature: uint8_t __stdcall MuteAudio(tagButtonProps * arg1, void * arg2)
 * Calls: `TAudio__Mute`, `TAudio__UnMute`
 * Called by: `GSuperMeatBoy__Initialize__00516f60`
 */
/* MuteAudio(tagButtonProps const*, void*) */

void MuteAudio(tagButtonProps *arg1,void *arg2)

{
  if (*(int *)arg1 != 1) {
    return;
  }
  if (MuteAudio(tagButtonProps_const*,void*)::bMuted == 0) {
    TAudio__Mute();
  }
  else {
    TAudio__UnMute();
  }
  MuteAudio(tagButtonProps_const*,void*)::bMuted =
       (uint)(MuteAudio(tagButtonProps_const*,void*)::bMuted == 0);
  return;
}

/* ======================================================================
 * MallocBridge  (Ghidra `MallocBridge` @ 00519800)
 * Signature: uint8_t MallocBridge(void)
 * Calls: (none)
 * Called by: `MOJOSHADER_assemble`, `MOJOSHADER_parse`, `MOJOSHADER_preprocess`, `MallocBridge__0052b780`, `MallocBridge__00539080`, `emit_ARB1_DEF`, `emit_ARB1_DEFB`, `emit_ARB1_DEFI`, `emit_ARB1_LABEL`, `emit_ARB1_RET` (+27 more)
 */
void MallocBridge(uint64_t arg1,uint32_t *arg2)

{
  long lVar1;
  
  lVar1 = (**(code **)(arg2 + 2))(arg1,*(uint64_t *)(arg2 + 6));
  if (lVar1 != 0) {
    return;
  }
  arg2[1] = 1;
  *arg2 = 1;
  return;
}

/* ======================================================================
 * MallocBridge__0052b780  (Ghidra `MallocBridge` @ 0052b780)
 * Signature: uint8_t MallocBridge(void)
 * Calls: `MallocBridge`
 * Called by: (none)
 */
void MallocBridge(uint64_t arg1,uint32_t *arg2)

{
  long lVar1;
  
  lVar1 = (**(code **)(arg2 + 2))(arg1,*(uint64_t *)(arg2 + 6));
  if (lVar1 != 0) {
    return;
  }
  arg2[1] = 1;
  *arg2 = 1;
  return;
}

/* ======================================================================
 * MallocBridge__00539080  (Ghidra `MallocBridge` @ 00539080)
 * Signature: uint8_t MallocBridge(void)
 * Calls: `MallocBridge`
 * Called by: (none)
 */
void MallocBridge(uint64_t arg1,long arg2)

{
  long lVar1;
  
  lVar1 = (**(code **)(arg2 + 0x960))(arg1,*(uint64_t *)(arg2 + 0x970));
  if (lVar1 != 0) {
    return;
  }
  *(uint32_t *)(arg2 + 4) = 1;
  return;
}

/* ======================================================================
 * OpenGLLockVertexBuffer  (Ghidra `OpenGLLockVertexBuffer` @ 0055e3d0)
 * Signature: uint8_t __stdcall OpenGLLockVertexBuffer(tagGLVertexBuffer * arg1, void * * arg2, uint arg3, ulong arg4)
 * Calls: (none)
 * Called by: (none)
 */
/* OpenGLLockVertexBuffer(tagGLVertexBuffer*, void**, unsigned int, unsigned long) */

void OpenGLLockVertexBuffer(tagGLVertexBuffer *arg1,void **arg2,uint arg3,ulong arg4)

{
  void *pvVar1;
  
  if (*(int *)(arg1 + 4) == 0) {
    (*pglfn_glBindBufferARB)(*(uint32_t *)arg1,*(uint32_t *)(arg1 + 8));
    if ((arg3 & 1) == 0) {
      if ((arg3 & 2) != 0) {
        pvVar1 = (void *)(*pglfn_glMapBufferARB)(*(uint32_t *)arg1,0x88ba);
        *arg2 = pvVar1;
      }
    }
    else {
      (*pglfn_glBufferDataARB)(*(uint32_t *)arg1,*(uint32_t *)(arg1 + 0x18),0,0x88e4);
      pvVar1 = (void *)(*pglfn_glMapBufferARB)(*(uint32_t *)arg1,0x88b9);
      *arg2 = pvVar1;
    }
  }
  else {
    *arg2 = *(void **)(arg1 + 0x10);
  }
  return;
}

/* ======================================================================
 * OpenGLUnLockVertexBuffer  (Ghidra `OpenGLUnLockVertexBuffer` @ 0055e470)
 * Signature: uint8_t __stdcall OpenGLUnLockVertexBuffer(tagGLVertexBuffer * arg1)
 * Calls: (none)
 * Called by: (none)
 */
/* OpenGLUnLockVertexBuffer(tagGLVertexBuffer*) */

void OpenGLUnLockVertexBuffer(tagGLVertexBuffer *arg1)

{
  if (*(int *)(arg1 + 4) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0055e489. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pglfn_glUnmapBufferARB)(*(uint32_t *)arg1);
  return;
}

/* ======================================================================
 * OpenGLDestroyVertexBuffer  (Ghidra `OpenGLDestroyVertexBuffer` @ 0055e490)
 * Signature: uint8_t __stdcall OpenGLDestroyVertexBuffer(tagGLVertexBuffer * arg1)
 * Calls: `operator_delete`
 * Called by: `gfxDestroyIndexBuffer`, `gfxDestroyVertexBuffer`, `gfxReallocIndexBuffer`, `gfxReallocVertexBuffer`
 */
/* OpenGLDestroyVertexBuffer(tagGLVertexBuffer*) */

void OpenGLDestroyVertexBuffer(tagGLVertexBuffer *arg1)

{
  if (*(int *)(arg1 + 4) != 0) {
    if (*(void **)(arg1 + 0x10) != (void *)0x0) {
      operator_delete__(*(void **)(arg1 + 0x10));
    }
    operator_delete(arg1);
    return;
  }
  (*pglfn_glDeleteBuffersARB)(1,arg1 + 8);
  operator_delete(arg1);
  return;
}

/* ======================================================================
 * RunSDLEventQueue  (Ghidra `RunSDLEventQueue` @ 00571350)
 * Signature: uint8_t RunSDLEventQueue(void)
 * Calls: `SDL_PollEvent`
 * Called by: `TEngine__Run`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* RunSDLEventQueue() */

uint32_t RunSDLEventQueue(void)

{
  int iVar1;
  uint32_t uVar2;
  int local_58 [18];
  
  uVar2 = 1;
  while( true ) {
    iVar1 = SDL_PollEvent(local_58);
    if (iVar1 == 0) break;
    if (local_58[0] == 0x100) {
      uVar2 = 0;
    }
  }
  return uVar2;
}

/* ======================================================================
 * Render__005719b0  (Ghidra `Render` @ 005719b0)
 * Signature: uint8_t __stdcall Render(float arg1, ColorTemplate * arg2, ColorTemplate * arg3, FlashLibraryInstance * arg4)
 * Calls: `FontEmitter__SetFontSizeActualPixels`, `TGraphics__GetMatrix`, `TGraphics__PopMatrix`, `TGraphics__PushMatrix`
 * Called by: (none)
 */
/* FlashTextField__Render(float, ColorTemplate<float> const&, ColorTemplate<float> const&,
   FlashLibraryInstance*) */

float FlashTextField__Render
                (float arg1,ColorTemplate *arg2,ColorTemplate *arg3,
                FlashLibraryInstance *arg4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  long lVar4;
  Matrix4x4 *pMVar5;
  long in_RCX;
  float fVar6;
  float fVar7;
  float fVar8;
  uint32_t local_48;
  uint32_t local_44;
  uint32_t local_38;
  uint32_t local_34;
  
  if (*(int *)(arg2 + 0x20) != 0) {
    local_38 = *(uint32_t *)(in_RCX + 0x30);
    local_34 = *(uint32_t *)(in_RCX + 0x34);
    local_48 = 0x3f800000;
    local_44 = 0x3f800000;
    pMVar5 = (Matrix4x4 *)TGraphics__GetMatrix(Graphics,0);
    Matrix4x4__Transformation2DRot(pMVar5,(Vector2 *)&local_48,(float *)0x0,(Vector2 *)&local_38);
    TGraphics__PushMatrix(Graphics,0);
    lVar4 = *(long *)(arg2 + 0x18);
    fVar8 = *(float *)(arg4 + 4) * (float)::cBlack._4_4_;
    fVar7 = *(float *)(arg4 + 8) * (float)::cBlack._8_4_;
    fVar6 = *(float *)(arg4 + 0xc) * (float)::cBlack._12_4_;
    fVar1 = *(float *)(arg3 + 4);
    fVar2 = *(float *)(arg3 + 8);
    fVar3 = *(float *)(arg3 + 0xc);
    *(float *)(lVar4 + 0x3c) = *(float *)arg4 * (float)::cBlack._0_4_ + *(float *)arg3;
    *(float *)(lVar4 + 0x40) = fVar8 + fVar1;
    *(float *)(lVar4 + 0x44) = fVar7 + fVar2;
    *(float *)(lVar4 + 0x48) = fVar6 + fVar3;
    FontEmitter__SetFontSizeActualPixels
              (*(FontEmitter **)(arg2 + 0x18),*(float *)(in_RCX + 0x40));
    (**(code **)(**(long **)(arg2 + 0x18) + 0x10))();
    arg1 = (float)TGraphics__PopMatrix(Graphics);
  }
  return arg1;
}

/* ======================================================================
 * Render__00571c10  (Ghidra `Render` @ 00571c10)
 * Signature: uint8_t __stdcall Render(float arg1, ColorTemplate * arg2, ColorTemplate * arg3, FlashLibraryInstance * arg4)
 * Calls: `IndexTexture__SetTexture`, `SamplerRegisterToSource`, `TGraphics__AddPixelStage`, `TGraphics__Draw`, `TGraphics__GetMatrix`, `TGraphics__PopMatrix`, `TGraphics__PushMatrix`, `TGraphics__ResetPixelStages`, `TGraphics__SetPixelColorConstant`, `TGraphics__SetRenderState` (+1 more)
 * Called by: (none)
 */
/* FlashSymbol__Render(float, ColorTemplate<float> const&, ColorTemplate<float> const&,
   FlashLibraryInstance*) */

void FlashSymbol__Render(float arg1,ColorTemplate *arg2,ColorTemplate *arg3,
                        FlashLibraryInstance *arg4)

{
  int iVar1;
  long lVar2;
  uchar uVar3;
  uint32_t uVar4;
  Matrix4x4 *pMVar5;
  
  TGraphics__ResetPixelStages(Graphics);
  if (*(float *)(arg4 + 0xc) == 0.0) {
    return;
  }
  TGraphics__PushMatrix(Graphics,0);
  TGraphics__SetRenderState(Graphics,'\a',0);
  lVar2 = *(long *)(arg2 + 8);
  iVar1 = *(int *)(arg2 + 0x1c);
  if ((iVar1 == *(int *)(lVar2 + 0xa8)) || (iVar1 == *(int *)(lVar2 + 0xac))) {
    uVar3 = IndexTexture__SetTexture((IndexTexture *)**(uint64_t **)(lVar2 + 8),0xff,iVar1,1);
  }
  else {
    uVar3 = IndexTexture__SetTexture((IndexTexture *)**(uint64_t **)(lVar2 + 8),0xff,iVar1,0);
  }
  TGraphics__SetSamplerState(Graphics,uVar3,'\x04',2);
  TGraphics__SetSamplerState(Graphics,uVar3,'\x03',2);
  uVar4 = SamplerRegisterToSource(uVar3);
  TGraphics__AddPixelStage(Graphics,uVar4,1,1,0,3,0,0xffffffff);
  TGraphics__SetPixelColorConstant(Graphics,0,arg4);
  TGraphics__AddPixelStage(Graphics,0x15,0,3,0,1,3,0xffffffff);
  TGraphics__SetPixelColorConstant(Graphics,2,arg3);
  TGraphics__SetSamplerState(Graphics,uVar3,'\x03',2);
  TGraphics__SetSamplerState(Graphics,uVar3,'\x04',2);
  pMVar5 = (Matrix4x4 *)TGraphics__GetMatrix(Graphics,0);
  Matrix4x4__ConvertToScalingMatrix(pMVar5,(Vector2 *)(arg2 + 0x14));
  TGraphics__Draw(Graphics,CGR__pSingleQuadStream,(IndexBuffer *)0x0);
  TGraphics__ResetPixelStages(Graphics);
  TGraphics__PopMatrix(Graphics);
  return;
}

/* ======================================================================
 * RemoveCallback  (Ghidra `RemoveCallback` @ 00572860)
 * Signature: uint8_t __stdcall RemoveCallback(FlashLibraryInstance * arg1)
 * Calls: `AutoLockSection__AutoLockSection`, `AutoLockSection__AutoLockSection__005b59d0`
 * Called by: (none)
 */
/* AnimationManager__RemoveCallback(FlashLibraryInstance const*) */

void AnimationManager__RemoveCallback(FlashLibraryInstance *arg1)

{
  uint64_t *puVar1;
  ushort *puVar2;
  ushort uVar3;
  uint64_t uVar4;
  uint uVar5;
  ushort uVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  ushort uVar10;
  AutoLockSection aAStack_18 [16];
  
  AutoLockSection__AutoLockSection(aAStack_18,(CriticalSection *)AnimationCallbackSection);
  uVar8 = (uint)(ushort)pAnimCallbacks._40_2_;
  if (pAnimCallbacks._40_2_ != 0) {
    uVar5 = 0;
    do {
      while (*(FlashLibraryInstance **)
              (pAnimCallbacks._56_8_ + 0x10 + (ulong)(uVar5 & 0xffff) * 0x28) == arg1) {
        if ((uVar5 + 1 < (uVar8 & 0xffff)) && ((int)uVar5 < (int)((uVar8 & 0xffff) - 1))) {
          lVar7 = (long)(int)uVar5 * 0x28;
          uVar9 = uVar5;
          do {
            uVar4 = pAnimCallbacks._56_8_;
            puVar1 = (uint64_t *)(pAnimCallbacks._56_8_ + lVar7);
            lVar7 = lVar7 + 0x28;
            uVar9 = uVar9 + 1;
            *puVar1 = *(uint64_t *)(pAnimCallbacks._56_8_ + lVar7);
            puVar1[1] = *(uint64_t *)(uVar4 + 8 + lVar7);
            puVar1[2] = *(uint64_t *)(uVar4 + 0x10 + lVar7);
            puVar1[3] = *(uint64_t *)(uVar4 + 0x18 + lVar7);
            puVar1[4] = *(uint64_t *)(uVar4 + 0x20 + lVar7);
            uVar8 = (uint)(ushort)pAnimCallbacks._40_2_;
          } while ((int)uVar9 < (int)(uVar8 - 1));
        }
        if ((pAnimCallbacks._48_4_ == 1) && (pAnimCallbacks._42_2_ != 0)) {
          uVar6 = 0;
          uVar10 = pAnimCallbacks._42_2_;
          do {
            while( true ) {
              puVar2 = (ushort *)(pAnimCallbacks._64_8_ + (ulong)uVar6 * 2);
              uVar3 = *puVar2;
              if (uVar5 != uVar3) break;
              *puVar2 = 0xffff;
              uVar6 = uVar6 + 1;
              uVar10 = pAnimCallbacks._42_2_;
              if ((ushort)pAnimCallbacks._42_2_ <= uVar6) goto LAB_005729d5;
            }
            if ((uVar5 < uVar3) && ((ushort)(uVar3 - 1) < 0xfffe)) {
              *puVar2 = uVar3 - 1;
              uVar10 = pAnimCallbacks._42_2_;
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 < uVar10);
LAB_005729d5:
          uVar8 = (uint)(ushort)pAnimCallbacks._40_2_;
        }
        uVar9 = 0;
        if ((short)uVar8 != 0) {
          uVar8 = uVar8 - 1;
          uVar9 = uVar8 & 0xffff;
        }
        pAnimCallbacks._40_2_ = (uint16_t)uVar8;
        if ((int)uVar5 < 2) {
          uVar5 = 1;
        }
        if ((int)uVar9 <= (int)uVar5) goto LAB_00572960;
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < (int)(uVar8 & 0xffff));
  }
LAB_00572960:
  AutoLockSection__AutoLockSection__005b59d0(aAStack_18);
  return;
}

/* ======================================================================
 * RemoveCallback__005729f0  (Ghidra `RemoveCallback` @ 005729f0)
 * Signature: uint8_t __stdcall RemoveCallback(float * arg1)
 * Calls: `AutoLockSection__AutoLockSection`, `AutoLockSection__AutoLockSection__005b59d0`
 * Called by: (none)
 */
/* AnimationManager__RemoveCallback(float const*) */

void AnimationManager__RemoveCallback(float *arg1)

{
  uint64_t *puVar1;
  ushort *puVar2;
  ushort uVar3;
  uint64_t uVar4;
  uint uVar5;
  ushort uVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  ushort uVar10;
  AutoLockSection aAStack_18 [16];
  
  AutoLockSection__AutoLockSection(aAStack_18,(CriticalSection *)AnimationCallbackSection);
  uVar8 = (uint)(ushort)pAnimCallbacks._40_2_;
  if (pAnimCallbacks._40_2_ != 0) {
    uVar5 = 0;
    do {
      while (*(float **)(pAnimCallbacks._56_8_ + 0x20 + (ulong)(uVar5 & 0xffff) * 0x28) == arg1)
      {
        if ((uVar5 + 1 < (uVar8 & 0xffff)) && ((int)uVar5 < (int)((uVar8 & 0xffff) - 1))) {
          lVar7 = (long)(int)uVar5 * 0x28;
          uVar9 = uVar5;
          do {
            uVar4 = pAnimCallbacks._56_8_;
            puVar1 = (uint64_t *)(pAnimCallbacks._56_8_ + lVar7);
            lVar7 = lVar7 + 0x28;
            uVar9 = uVar9 + 1;
            *puVar1 = *(uint64_t *)(pAnimCallbacks._56_8_ + lVar7);
            puVar1[1] = *(uint64_t *)(uVar4 + 8 + lVar7);
            puVar1[2] = *(uint64_t *)(uVar4 + 0x10 + lVar7);
            puVar1[3] = *(uint64_t *)(uVar4 + 0x18 + lVar7);
            puVar1[4] = *(uint64_t *)(uVar4 + 0x20 + lVar7);
            uVar8 = (uint)(ushort)pAnimCallbacks._40_2_;
          } while ((int)uVar9 < (int)(uVar8 - 1));
        }
        if ((pAnimCallbacks._48_4_ == 1) && (pAnimCallbacks._42_2_ != 0)) {
          uVar6 = 0;
          uVar10 = pAnimCallbacks._42_2_;
          do {
            while( true ) {
              puVar2 = (ushort *)(pAnimCallbacks._64_8_ + (ulong)uVar6 * 2);
              uVar3 = *puVar2;
              if (uVar5 != uVar3) break;
              *puVar2 = 0xffff;
              uVar6 = uVar6 + 1;
              uVar10 = pAnimCallbacks._42_2_;
              if ((ushort)pAnimCallbacks._42_2_ <= uVar6) goto LAB_00572b65;
            }
            if ((uVar5 < uVar3) && ((ushort)(uVar3 - 1) < 0xfffe)) {
              *puVar2 = uVar3 - 1;
              uVar10 = pAnimCallbacks._42_2_;
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 < uVar10);
LAB_00572b65:
          uVar8 = (uint)(ushort)pAnimCallbacks._40_2_;
        }
        uVar9 = 0;
        if ((short)uVar8 != 0) {
          uVar8 = uVar8 - 1;
          uVar9 = uVar8 & 0xffff;
        }
        pAnimCallbacks._40_2_ = (uint16_t)uVar8;
        if ((int)uVar5 < 2) {
          uVar5 = 1;
        }
        if ((int)uVar9 <= (int)uVar5) goto LAB_00572af0;
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < (int)(uVar8 & 0xffff));
  }
LAB_00572af0:
  AutoLockSection__AutoLockSection__005b59d0(aAStack_18);
  return;
}

/* ======================================================================
 * PauseAnimations  (Ghidra `PauseAnimations` @ 00572d60)
 * Signature: uint8_t __stdcall PauseAnimations(int arg1)
 * Calls: (none)
 * Called by: (none)
 */
/* AnimationManager__PauseAnimations(int) */

void AnimationManager__PauseAnimations(int arg1)

{
  bGlobalAnimationPause = arg1;
  return;
}

/* ======================================================================
 * RegisterAudioPosition  (Ghidra `RegisterAudioPosition` @ 00573600)
 * Signature: uint8_t __stdcall RegisterAudioPosition(FPUVector * arg1)
 * Calls: (none)
 * Called by: `GMeatHUD__Render`, `GSMBCutSceneManager__Render`, `GSMBCutSceneManager__RenderLoadingOverlay`, `GSMBCutSceneManager__RenderSavingOverlay`, `GSMBMenu__Render`, `GSMBMenu__RenderTitleScreenForIntro`, `HellBoss__Render`, `HospitalBoss__Render`, `MeatBoyCharFoundation__Render`, `MeatBoyCharactor__RenderEffects` (+8 more)
 */
/* RegisterAudioPosition(FPUVector const*) */

void RegisterAudioPosition(FPUVector *arg1)

{
  pAudioPosition = arg1;
  return;
}

/* ======================================================================
 * Render__00575d50  (Ghidra `Render` @ 00575d50)
 * Signature: uint8_t __stdcall Render(float arg1, ColorTemplate * arg2, ColorTemplate * arg3, FlashLibraryInstance * arg4)
 * Calls: `FlashSoundLibrary__Play`
 * Called by: (none)
 */
/* FlashTimeline__Render(float, ColorTemplate<float> const&, ColorTemplate<float> const&,
   FlashLibraryInstance*) */

void FlashTimeline__Render
               (float arg1,ColorTemplate *arg2,ColorTemplate *arg3,
               FlashLibraryInstance *arg4)

{
  int iVar1;
  byte *pbVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  long lVar8;
  float *pfVar9;
  float *pfVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_44;
  
  *(uint32_t *)(arg2 + 4) = 1;
  if (*(int *)arg2 == 1) {
    fVar12 = *(float *)(arg2 + 8);
    if (fVar12 <= arg1) {
      fVar13 = arg1 / fVar12;
      fVar14 = fVar13;
      if ((float)((uint)fVar13 & DAT_005be880 /* R:u32=2147483647 */) < DAT_005dbd0c /* R:8388608.0f */) {
        fVar14 = (float)(int)fVar13 -
                 (float)((uint)DAT_005be894 /* R:1.0f */ & -(uint)(fVar13 < (float)(int)fVar13));
      }
      arg1 = (fVar13 - fVar14) * fVar12;
    }
  }
  else if (*(float *)(arg2 + 8) <= arg1) {
    *(uint32_t *)(arg2 + 4) = 0;
    arg1 = *(float *)(arg2 + 8) - DAT_005be894 /* R:1.0f */ / *(float *)(*(long *)(arg2 + 0x20) + 0x80);
  }
  iVar6 = *(int *)(arg2 + 0x14);
  if (iVar6 < 1) {
    return;
  }
  lVar11 = 0;
LAB_00575dc0:
  do {
    piVar7 = (int *)(lVar11 * 0x10 + *(long *)(arg2 + 0x18));
    iVar1 = *piVar7;
    iVar4 = (int)lVar11;
    if (0 < iVar1) {
      pfVar9 = *(float **)(piVar7 + 2);
      fVar12 = 0.0;
      iVar5 = 0;
      pfVar10 = pfVar9;
      do {
        bVar3 = fVar12 <= arg1;
        fVar12 = *pfVar10 + fVar12;
        if ((bVar3) && (arg1 <= fVar12)) {
          if (pfVar10 != (float *)0x0) {
            pbVar2 = *(byte **)(arg2 + 0x20);
            if ((((*pbVar2 & 1) == 0) || (pfVar10[3] == -NAN)) ||
               ((bGlobalAnimationPause != 0 && (pbVar2[0x8c] != 1)))) goto LAB_00575ed0;
            iVar6 = 0;
            fVar12 = 0.0;
            goto LAB_00575e83;
          }
          break;
        }
        iVar5 = iVar5 + 1;
        pfVar10 = pfVar10 + 10;
      } while (iVar5 != iVar1);
    }
    lVar11 = lVar11 + 1;
    if (iVar6 <= iVar4 + 1) {
      return;
    }
  } while( true );
  while( true ) {
    iVar6 = iVar6 + 1;
    pfVar9 = pfVar9 + 10;
    if (iVar6 == iVar1) break;
LAB_00575e83:
    bVar3 = fVar12 <= arg1 - fOneFrameTimeStepVSync;
    fVar12 = *pfVar9 + fVar12;
    if ((bVar3) && (arg1 - fOneFrameTimeStepVSync <= fVar12)) {
      if (pfVar9 == pfVar10) goto LAB_00575ed0;
      break;
    }
  }
  FlashSoundLibrary__Play
            ((FlashSoundLibrary *)(pbVar2 + 0x90),(int)pfVar10[3],(int)pfVar10[4],(int)pfVar10[5],
             pAudioPosition);
LAB_00575ed0:
  local_44 = 0.0;
  if (pfVar10[2] == 1.4013e-45) {
    fVar12 = pfVar10[6];
    local_44 = (arg1 - pfVar10[1]) / *pfVar10;
  }
  else {
    fVar12 = pfVar10[6];
  }
  iVar6 = 0;
  lVar8 = 0;
  if ((int)fVar12 < 1) {
    iVar6 = *(int *)(arg2 + 0x14);
    lVar11 = lVar11 + 1;
    if (iVar6 <= iVar4 + 1) {
      return;
    }
  }
  else {
    do {
      iVar6 = iVar6 + 1;
      FlashLibraryInstance__TimelineRender
                (arg1,local_44,(ColorTemplate *)(*(long *)(pfVar10 + 8) + lVar8),arg3,arg4)
      ;
      lVar8 = lVar8 + 0xa0;
    } while (iVar6 < (int)pfVar10[6]);
    lVar11 = lVar11 + 1;
    iVar6 = *(int *)(arg2 + 0x14);
    if (iVar6 <= iVar4 + 1) {
      return;
    }
  }
  goto LAB_00575dc0;
}

/* ======================================================================
 * Render__00576030  (Ghidra `Render` @ 00576030)
 * Signature: uint8_t __stdcall Render(float arg1, ColorTemplate * arg2, ColorTemplate * arg3, FlashLibraryInstance * arg4)
 * Calls: `TGraphics__PopMatrix`, `TGraphics__PushMatrix`
 * Called by: (none)
 */
/* FlashMovieClip__Render(float, ColorTemplate<float> const&, ColorTemplate<float> const&,
   FlashLibraryInstance*) */

void FlashMovieClip__Render
               (float arg1,ColorTemplate *arg2,ColorTemplate *arg3,
               FlashLibraryInstance *arg4)

{
  TGraphics__PushMatrix(Graphics,0);
  FlashTimeline__Render(arg1,arg2 + 0x18,arg3,arg4);
  TGraphics__PopMatrix(Graphics);
  return;
}

/* ======================================================================
 * MakeValidResolution  (Ghidra `MakeValidResolution` @ 00581f50)
 * Signature: uint8_t __stdcall MakeValidResolution(ushort * arg1, ushort * arg2)
 * Calls: `SDL_GetDesktopDisplayMode`, `SDL_GetDisplayMode`, `SDL_GetNumDisplayModes`
 * Called by: `TEngine__TEngine`
 */
/* MakeValidResolution(unsigned short&, unsigned short&) */

void MakeValidResolution(ushort *arg1,ushort *arg2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint8_t local_78 [4];
  uint local_74;
  uint local_70;
  uint8_t local_58 [4];
  uint local_54;
  uint local_50;
  
  uVar1 = *arg2;
  uVar2 = *arg1;
  uVar5 = (uint)uVar2;
  SDL_GetDesktopDisplayMode(0,local_78);
  iVar3 = SDL_GetNumDisplayModes(0);
  iVar10 = uVar5 * uVar1;
  if (iVar3 < 1) {
    iVar9 = 100000000;
  }
  else {
    iVar6 = 0;
    iVar9 = 100000000;
    do {
      iVar4 = SDL_GetDisplayMode(0,iVar6,local_58);
      if (((iVar4 != -1) && (local_54 <= local_74)) && (local_50 <= local_70)) {
        if ((uVar1 == local_50) && (uVar5 == local_54)) goto LAB_00582212;
        uVar7 = iVar10 - local_50 * local_54;
        uVar8 = (int)uVar7 >> 0x1f;
        iVar4 = (uVar7 ^ uVar8) - uVar8;
        if (iVar4 < iVar9) {
          *arg1 = (ushort)local_54;
          *arg2 = (ushort)local_50;
          iVar9 = iVar4;
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 != iVar3);
  }
  if ((0x27f < local_74) && (0x1df < local_70)) {
    if ((uVar1 == 0x1e0) && (uVar5 == 0x280)) goto LAB_00582212;
    uVar7 = (int)(iVar10 - 0x4b000U) >> 0x1f;
    iVar3 = (iVar10 - 0x4b000U ^ uVar7) - uVar7;
    if (iVar3 < iVar9) {
      *arg1 = 0x280;
      *arg2 = 0x1e0;
      iVar9 = iVar3;
    }
  }
  if ((799 < local_74) && (599 < local_70)) {
    if ((uVar1 == 600) && (uVar5 == 800)) goto LAB_00582212;
    uVar7 = (int)(iVar10 - 480000U) >> 0x1f;
    iVar3 = (iVar10 - 480000U ^ uVar7) - uVar7;
    if (iVar3 < iVar9) {
      *arg1 = 800;
      *arg2 = 600;
      iVar9 = iVar3;
    }
  }
  if ((0x3ff < local_74) && (0x2ff < local_70)) {
    if ((uVar1 == 0x300) && (uVar5 == 0x400)) goto LAB_00582212;
    uVar7 = (int)(iVar10 - 0xc0000U) >> 0x1f;
    iVar3 = (iVar10 - 0xc0000U ^ uVar7) - uVar7;
    if (iVar3 < iVar9) {
      *arg1 = 0x400;
      *arg2 = 0x300;
      iVar9 = iVar3;
    }
  }
  if ((0x47f < local_74) && (0x2ff < local_70)) {
    if ((uVar1 == 0x300) && (uVar5 == 0x480)) goto LAB_00582212;
    uVar7 = (int)(iVar10 - 0xd8000U) >> 0x1f;
    iVar3 = (iVar10 - 0xd8000U ^ uVar7) - uVar7;
    if (iVar3 < iVar9) {
      *arg1 = 0x480;
      *arg2 = 0x300;
      iVar9 = iVar3;
    }
  }
  if ((0x4ff < local_74) && (0x2cf < local_70)) {
    if ((uVar1 == 0x2d0) && (uVar5 == 0x500)) goto LAB_00582212;
    uVar7 = (int)(iVar10 - 0xe1000U) >> 0x1f;
    iVar3 = (iVar10 - 0xe1000U ^ uVar7) - uVar7;
    if (iVar3 < iVar9) {
      *arg1 = 0x500;
      *arg2 = 0x2d0;
      iVar9 = iVar3;
    }
  }
  if ((0x59f < local_74) && (899 < local_70)) {
    if ((uVar1 == 900) && (uVar5 == 0x5a0)) goto LAB_00582212;
    uVar7 = (int)(iVar10 - 0x13c680U) >> 0x1f;
    iVar3 = (iVar10 - 0x13c680U ^ uVar7) - uVar7;
    if (iVar3 < iVar9) {
      *arg1 = 0x5a0;
      *arg2 = 900;
      iVar9 = iVar3;
    }
  }
  if (local_74 < 0x780) {
    return;
  }
  if (0x437 < local_70) {
    if ((uVar1 == 0x438) && (uVar5 == 0x780)) goto LAB_00582212;
    uVar7 = (int)(iVar10 - 0x1fa400U) >> 0x1f;
    iVar3 = (iVar10 - 0x1fa400U ^ uVar7) - uVar7;
    if (iVar3 < iVar9) {
      *arg1 = 0x780;
      *arg2 = 0x438;
      iVar9 = iVar3;
    }
  }
  if (local_74 < 0x780) {
    return;
  }
  if (local_70 < 0x4b0) {
    return;
  }
  if ((uVar1 != 0x4b0) || (uVar5 != 0x780)) {
    uVar5 = (int)(iVar10 - 0x232800U) >> 0x1f;
    if (iVar9 <= (int)((iVar10 - 0x232800U ^ uVar5) - uVar5)) {
      return;
    }
    *arg1 = 0x780;
    *arg2 = 0x4b0;
    return;
  }
LAB_00582212:
  *arg1 = uVar2;
  *arg2 = uVar1;
  return;
}

/* ======================================================================
 * LoadingRenderThreadActive  (Ghidra `LoadingRenderThreadActive` @ 00584600)
 * Signature: uint8_t LoadingRenderThreadActive(void)
 * Calls: (none)
 * Called by: `GSMBCutSceneManager__IsRendering`, `GSuperMeatBoy__Update__00516690`, `SMBCamera__Update`
 */
uint32_t LoadingRenderThreadActive(void)

{
  return bLoadThreadRunning;
}

/* ======================================================================
 * RestoreKeyboardCallbacks  (Ghidra `RestoreKeyboardCallbacks` @ 0058c5e0)
 * Signature: uint8_t RestoreKeyboardCallbacks(void)
 * Calls: (none)
 * Called by: `UITextField__ClickOff`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* RestoreKeyboardCallbacks() */

void RestoreKeyboardCallbacks(void)

{
  uint16_t uVar1;
  uint32_t uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  bool bVar8;
  
  puVar7 = (uint64_t *)(Keyboard + 0xc18);
  if (puVar7 != &pBackupKeys) {
    bVar8 = ((ulong)puVar7 & 1) != 0;
    puVar6 = &pBackupKeys;
    uVar3 = 0x1000;
    if (bVar8) {
      puVar7 = (uint64_t *)(Keyboard + 0xc19);
      puVar6 = (uint64_t *)((long)&pBackupKeys + 1);
      *(uint8_t *)(Keyboard + 0xc18) = (uint8_t)pBackupKeys;
      uVar3 = 0xfff;
    }
    if (((ulong)puVar7 & 2) != 0) {
      uVar1 = *(uint16_t *)puVar6;
      uVar3 = uVar3 - 2;
      puVar6 = (uint64_t *)((long)puVar6 + 2);
      *(uint16_t *)puVar7 = uVar1;
      puVar7 = (uint64_t *)((long)puVar7 + 2);
    }
    if (((ulong)puVar7 & 4) != 0) {
      uVar2 = *(uint32_t *)puVar6;
      uVar3 = uVar3 - 4;
      puVar6 = (uint64_t *)((long)puVar6 + 4);
      *(uint32_t *)puVar7 = uVar2;
      puVar7 = (uint64_t *)((long)puVar7 + 4);
    }
    for (uVar4 = (ulong)(uVar3 >> 3); uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    if ((uVar3 & 4) == 0) {
      lVar5 = 0;
    }
    else {
      *(uint32_t *)puVar7 = *(uint32_t *)puVar6;
      lVar5 = 4;
    }
    if ((uVar3 & 2) != 0) {
      *(uint16_t *)((long)puVar7 + lVar5) = *(uint16_t *)((long)puVar6 + lVar5);
      lVar5 = lVar5 + 2;
    }
    if (bVar8) {
      *(uint8_t *)((long)puVar7 + lVar5) = *(uint8_t *)((long)puVar6 + lVar5);
      puVar7 = &pBackupKeys;
      for (lVar5 = 0x200; lVar5 != 0; lVar5 = lVar5 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      return;
    }
  }
  puVar7 = &pBackupKeys;
  for (lVar5 = 0x200; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  return;
}

/* ======================================================================
 * LoaderAlloc  (Ghidra `LoaderAlloc` @ 005922d0)
 * Signature: uint8_t LoaderAlloc(void)
 * Calls: `AutoLockSection__AutoLockSection`, `AutoLockSection__AutoLockSection__005b59d0`, `SyncEvent__SyncEvent`, `free`, `malloc`, `memcpy`, `operator_new`
 * Called by: (none)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* LoaderAlloc() */

void * LoaderAlloc(void)

{
  short sVar1;
  ushort uVar2;
  uint64_t uVar3;
  void *pvVar4;
  void *pvVar5;
  short *psVar6;
  void *pvVar7;
  short sVar8;
  ulong uVar9;
  ulong uVar10;
  uint64_t *puVar11;
  ushort uVar12;
  bool bVar13;
  AutoLockSection aAStack_48 [24];
  
  AutoLockSection__AutoLockSection(aAStack_48,(CriticalSection *)LoaderAllocSection);
                    /* try { // try from 00592304 to 00592308 has its CatchHandler @ 0059261c */
  pvVar4 = operator_new(0x98);
  *(uint64_t *)((long)pvVar4 + 8) = 0;
  *(uint64_t *)((long)pvVar4 + 0x10) = 0;
                    /* try { // try from 00592320 to 00592324 has its CatchHandler @ 0059262f */
  SyncEvent__SyncEvent((SyncEvent *)((long)pvVar4 + 0x18));
  bVar13 = pLoaderFuncs._72_4_ == -0x5eef3582;
  *(uint64_t *)((long)pvVar4 + 0x80) = 0;
  *(uint32_t *)((long)pvVar4 + 0x88) = 0xffffffff;
  *(uint32_t *)((long)pvVar4 + 0x8c) = 0;
  *(uint32_t *)((long)pvVar4 + 0x90) = 0;
  uVar3 = pLoaderFuncs._56_8_;
  if (bVar13) {
    if ((ushort)pLoaderFuncs._42_2_ <= (ushort)pLoaderFuncs._40_2_) {
      pLoaderFuncs._42_2_ = pLoaderFuncs._42_2_ + pLoaderFuncs._52_2_;
      uVar9 = (ulong)pLoaderFuncs[0x2c];
      pvVar5 = (void *)0x0;
      uVar10 = (ulong)(ushort)pLoaderFuncs._42_2_ * 8;
      pvVar7 = malloc(uVar9 + 0x10 + uVar10);
      if (pvVar7 != (void *)0x0) {
        pvVar5 = (void *)((long)pvVar7 + 0x10U + (uVar9 - ((long)pvVar7 + 0x10U) % uVar9) % uVar9);
        *(ulong *)((long)pvVar5 + -0x10) = uVar10;
        *(void **)((long)pvVar5 + -8) = pvVar7;
        if (uVar3 != 0) {
          uVar9 = *(ulong *)(uVar3 + -0x10);
          if (uVar10 < uVar9 || uVar10 - uVar9 == 0) {
            uVar9 = uVar10;
          }
          memcpy(pvVar5,(void *)uVar3,uVar9);
          free(*(void **)(uVar3 + -8));
        }
      }
      uVar3 = pLoaderFuncs._64_8_;
      uVar12 = pLoaderFuncs._42_2_;
      pLoaderFuncs._56_8_ = pvVar5;
      if (pLoaderFuncs._64_8_ != 0) {
        uVar9 = (ulong)pLoaderFuncs[0x2c];
        uVar10 = (ulong)(ushort)pLoaderFuncs._42_2_ * 2;
        pvVar7 = malloc(uVar9 + 0x10 + uVar10);
        pvVar5 = (void *)0x0;
        uVar2 = pLoaderFuncs._40_2_;
        if (pvVar7 != (void *)0x0) {
          pvVar5 = (void *)((long)pvVar7 + 0x10U + (uVar9 - ((long)pvVar7 + 0x10U) % uVar9) % uVar9)
          ;
          *(void **)((long)pvVar5 + -8) = pvVar7;
          *(ulong *)((long)pvVar5 + -0x10) = uVar10;
          uVar9 = *(ulong *)(uVar3 + -0x10);
          if (uVar10 <= *(ulong *)(uVar3 + -0x10)) {
            uVar9 = uVar10;
          }
          memcpy(pvVar5,(void *)uVar3,uVar9);
          free(*(void **)(uVar3 + -8));
          uVar2 = pLoaderFuncs._40_2_;
          uVar12 = pLoaderFuncs._42_2_;
        }
        for (; pLoaderFuncs._64_8_ = pvVar5, uVar2 < uVar12; uVar2 = uVar2 + 1) {
          *(uint16_t *)(pLoaderFuncs._64_8_ + (ulong)uVar2 * 2) = 0xffff;
          pvVar5 = (void *)pLoaderFuncs._64_8_;
        }
      }
    }
    if ((pLoaderFuncs._48_4_ == 1) && (pLoaderFuncs._42_2_ != 0)) {
      sVar8 = 0;
      sVar1 = *(short *)pLoaderFuncs._64_8_;
      psVar6 = (short *)pLoaderFuncs._64_8_;
      while (sVar1 != -1) {
        psVar6 = psVar6 + 1;
        sVar8 = sVar8 + 1;
        if (sVar8 == pLoaderFuncs._42_2_) goto LAB_005923fd;
        sVar1 = *psVar6;
      }
      *psVar6 = pLoaderFuncs._40_2_;
    }
  }
  else {
    uVar10 = (ulong)pLoaderFuncs[0x2c];
    pLoaderFuncs._48_4_ = 0;
    pvVar5 = malloc(uVar10 + 0x38);
    puVar11 = (uint64_t *)0x0;
    if (pvVar5 != (void *)0x0) {
      puVar11 = (uint64_t *)
                ((long)pvVar5 + 0x10U + (uVar10 - ((long)pvVar5 + 0x10U) % uVar10) % uVar10);
      puVar11[-2] = 0x28;
      puVar11[-1] = pvVar5;
    }
    pLoaderFuncs._56_8_ = puVar11;
    *puVar11 = 0;
    puVar11[1] = 0;
    puVar11[2] = 0;
    puVar11[3] = 0;
    puVar11[4] = 0;
    pLoaderFuncs._40_2_ = 0;
    pLoaderFuncs._42_2_ = 5;
    pLoaderFuncs._72_4_ = 0xa110ca7e;
    pLoaderFuncs._52_2_ = 5;
  }
LAB_005923fd:
  *(void **)(pLoaderFuncs._56_8_ + (ulong)(ushort)pLoaderFuncs._40_2_ * 8) = pvVar4;
  pLoaderFuncs._40_2_ = pLoaderFuncs._40_2_ + 1;
  AutoLockSection__AutoLockSection__005b59d0(aAStack_48);
  return pvVar4;
}

/* ======================================================================
 * LoaderFree  (Ghidra `LoaderFree` @ 00592640)
 * Signature: uint8_t __stdcall LoaderFree(LoaderFuncBlock * arg1)
 * Calls: `AutoLockSection__AutoLockSection`, `AutoLockSection__AutoLockSection__005b59d0`
 * Called by: (none)
 */
/* LoaderFree(Loader__LoaderFuncBlock) */

void LoaderFree(LoaderFuncBlock *arg1)

{
  AutoLockSection aAStack_18 [16];
  
  AutoLockSection__AutoLockSection(aAStack_18,(CriticalSection *)LoaderAllocSection);
  *(uint32_t *)(arg1 + 0x90) = 1;
  AutoLockSection__AutoLockSection__005b59d0(aAStack_18);
  return;
}

/* ======================================================================
 * MakeSize  (Ghidra `MakeSize` @ 005928f0)
 * Signature: uint8_t __stdcall MakeSize(ushort arg1)
 * Calls: `free`, `malloc`, `memcpy`
 * Called by: (none)
 */
/* ResizeableArray_VertexElement__MakeSize(unsigned short) [clone .part.44] */

void ResizeableArray_VertexElement__MakeSize(ushort arg1)

{
  void *__src;
  ushort uVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  void *__dest;
  undefined6 in_register_0000003a;
  long lVar5;
  ushort uVar6;
  
  lVar5 = CONCAT62(in_register_0000003a,arg1);
  __dest = (void *)0x0;
  uVar6 = *(ushort *)(lVar5 + 0x2a);
  uVar3 = (ulong)*(byte *)(lVar5 + 0x2c);
  __src = *(void **)(lVar5 + 0x40);
  uVar4 = (ulong)uVar6 * 2;
  pvVar2 = malloc(uVar3 + 0x10 + uVar4);
  if (pvVar2 != (void *)0x0) {
    __dest = (void *)((long)pvVar2 + 0x10U + (uVar3 - ((long)pvVar2 + 0x10U) % uVar3) % uVar3);
    *(ulong *)((long)__dest + -0x10) = uVar4;
    *(void **)((long)__dest + -8) = pvVar2;
    if (__src != (void *)0x0) {
      uVar3 = *(ulong *)((long)__src + -0x10);
      if (uVar4 <= *(ulong *)((long)__src + -0x10)) {
        uVar3 = uVar4;
      }
      memcpy(__dest,__src,uVar3);
      free(*(void **)((long)__src + -8));
    }
    uVar6 = *(ushort *)(lVar5 + 0x2a);
  }
  uVar1 = *(ushort *)(lVar5 + 0x28);
  *(void **)(lVar5 + 0x40) = __dest;
  if (uVar1 < uVar6) {
    while( true ) {
      uVar4 = (ulong)uVar1;
      uVar1 = uVar1 + 1;
      *(uint16_t *)((long)__dest + uVar4 * 2) = 0xffff;
      if (uVar6 <= uVar1) break;
      __dest = *(void **)(lVar5 + 0x40);
    }
  }
  return;
}

/* ======================================================================
 * Reset2DPhysics  (Ghidra `Reset2DPhysics` @ 00595ce0)
 * Signature: uint8_t __stdcall Reset2DPhysics(Physics2D * arg1)
 * Calls: `Vector2__operator_assign`
 * Called by: `SMBPalette__FindAnimatedObstacles`, `SMBPalette__ResetObstacles`, `SMBPalette__SpawnDemonSpawn`
 */
/* Reset2DPhysics(Physics2D&) */

void Reset2DPhysics(Physics2D *arg1)

{
  uint32_t local_58;
  uint32_t local_54;
  uint32_t local_48;
  uint32_t local_44;
  uint32_t local_38;
  uint32_t local_34;
  uint32_t local_28;
  uint32_t local_24;
  
  local_58 = 0;
  local_54 = 0;
  Vector2__operator_assign((Vector2 *)(arg1 + 0x48),(Vector2 *)&local_58);
  local_48 = 0;
  local_44 = 0;
  Vector2__operator_assign((Vector2 *)(arg1 + 0x60),(Vector2 *)&local_48);
  local_38 = 0;
  local_34 = 0;
  Vector2__operator_assign((Vector2 *)(arg1 + 0x50),(Vector2 *)&local_38);
  local_28 = 0;
  local_24 = 0;
  Vector2__operator_assign((Vector2 *)(arg1 + 0x94),(Vector2 *)&local_28);
  return;
}

/* ======================================================================
 * RemoveCharFromString  (Ghidra `RemoveCharFromString` @ 00596150)
 * Signature: uint8_t __stdcall RemoveCharFromString(string * arg1, char arg2)
 * Calls: `free`, `malloc`, `std__string_string__00825640`
 * Called by: (none)
 */
/* RemoveCharFromString(std__string_string__00825640&, char) */

void RemoveCharFromString(string *arg1,char arg2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  uint *__ptr;
  long lVar5;
  int iVar6;
  ulong uVar7;
  uint *puVar8;
  
  lVar4 = std__string_find((char)arg1,(ulong)(uint)(int)arg2);
  if (lVar4 == -1) {
    return;
  }
  lVar4 = *(long *)arg1;
  iVar2 = *(int *)(lVar4 + -0x18);
  __ptr = malloc((long)iVar2);
  uVar7 = 0;
  if (0 < iVar2) {
    lVar5 = 0;
    do {
      cVar1 = *(char *)(lVar4 + lVar5);
      if (arg2 != cVar1) {
        iVar6 = (int)uVar7;
        uVar7 = (ulong)(iVar6 + 1);
        *(char *)((long)__ptr + (long)iVar6) = cVar1;
      }
      lVar5 = lVar5 + 1;
    } while ((int)lVar5 < iVar2);
    uVar7 = (ulong)(int)uVar7;
  }
  *(uint8_t *)((long)__ptr + uVar7) = 0;
  puVar8 = __ptr;
  do {
    uVar3 = *puVar8;
    puVar8 = puVar8 + 1;
  } while ((uVar3 + 0xfefefeff & ~uVar3 & 0x80808080) == 0);
  std__string_assign((char *)arg1,(ulong)__ptr);
  free(__ptr);
  return;
}

/* ======================================================================
 * RemoveLayer  (Ghidra `RemoveLayer` @ 00598790)
 * Signature: uint8_t __stdcall RemoveLayer(RenderLayer * arg1)
 * Calls: `AutoLockSection__AutoLockSection`, `AutoLockSection__AutoLockSection__005b59d0`
 * Called by: `InsertLayerAfter`, `InsertLayerBefore`, `RenderLayers__RemoveAllLayers`, `SwapLayers`
 */
/* RenderLayers__RemoveLayer(RenderLayer*) */

void RenderLayers__RemoveLayer(RenderLayer *arg1)

{
  RenderLayer *pRVar1;
  RenderLayer *pRVar2;
  AutoLockSection aAStack_18 [16];
  
  AutoLockSection__AutoLockSection(aAStack_18,(CriticalSection *)_RENDERLAYER_SECTION);
  if (pHeadLayer != (RenderLayer *)0x0) {
    pRVar2 = pHeadLayer;
    if (pHeadLayer == arg1) {
      pHeadLayer = *(RenderLayer **)(pHeadLayer + 0x3c8);
    }
    else {
      do {
        pRVar2 = *(RenderLayer **)(pRVar2 + 0x3c8);
        if (pRVar2 == (RenderLayer *)0x0) goto LAB_005987d1;
      } while (arg1 != pRVar2);
    }
    pRVar1 = *(RenderLayer **)(pRVar2 + 0x3d0);
    if (pRVar2 == pLastLayer) {
      pLastLayer = pRVar1;
    }
    if (pRVar1 != (RenderLayer *)0x0) {
      *(uint64_t *)(pRVar1 + 0x3c8) = *(uint64_t *)(pRVar2 + 0x3c8);
    }
    if (*(long *)(pRVar2 + 0x3c8) != 0) {
      *(uint64_t *)(*(long *)(pRVar2 + 0x3c8) + 0x3d0) = *(uint64_t *)(pRVar2 + 0x3d0);
    }
    *(uint64_t *)(pRVar2 + 0x3d0) = 0;
    *(uint64_t *)(pRVar2 + 0x3c8) = 0;
    AutoLockSection__AutoLockSection__005b59d0(aAStack_18);
    return;
  }
LAB_005987d1:
  AutoLockSection__AutoLockSection__005b59d0(aAStack_18);
  return;
}

/* ======================================================================
 * RegisterLeaderBoardIDDB  (Ghidra `RegisterLeaderBoardIDDB` @ 005b6a80)
 * Signature: uint8_t __stdcall RegisterLeaderBoardIDDB(LeaderBoardIDEntry * arg1, uint arg2)
 * Calls: (none)
 * Called by: (none)
 */
/* Leaderboards__RegisterLeaderBoardIDDB(LeaderBoardIDEntry*, unsigned int) */

void Leaderboards__RegisterLeaderBoardIDDB(LeaderBoardIDEntry *arg1,uint arg2)

{
  pLBIDs = arg1;
  uNumLBIDs = arg2;
  return;
}

/* ======================================================================
 * RegisterLeaderBoardPropDB  (Ghidra `RegisterLeaderBoardPropDB` @ 005b6a90)
 * Signature: uint8_t __stdcall RegisterLeaderBoardPropDB(LeaderBoardPropertyEntry * arg1, uint arg2)
 * Calls: (none)
 * Called by: (none)
 */
/* Leaderboards__RegisterLeaderBoardPropDB(LeaderBoardPropertyEntry*, unsigned int) */

void Leaderboards__RegisterLeaderBoardPropDB(LeaderBoardPropertyEntry *arg1,uint arg2)

{
  pLBProps = arg1;
  uNumLBProps = arg2;
  return;
}

/* ======================================================================
 * ReadLn  (Ghidra `ReadLn` @ 005b7c70)
 * Signature: uint8_t __stdcall ReadLn(char * arg1, uint arg2)
 * Calls: `DebugMsg`
 * Called by: (none)
 */
/* File__ReadLn(char*, unsigned int) */

uint64_t File__ReadLn(char *arg1,uint arg2)

{
  DebugMsg("ReadLn not implemented");
  return 0;
}

/* ======================================================================
 * ReadDirectory  (Ghidra `ReadDirectory` @ 005b7c90)
 * Signature: uint8_t __stdcall ReadDirectory(char * arg1, FileList * * arg2)
 * Calls: `glob`, `globfree`, `malloc`, `memcpy`, `strlen`, `strrchr`
 * Called by: (none)
 */
/* File__ReadDirectory(char const*, FileList**) */

void File__ReadDirectory(char *arg1,FileList **arg2)

{
  uint64_t *puVar1;
  char **ppcVar2;
  int iVar3;
  char *pcVar4;
  size_t sVar5;
  FileList *pFVar6;
  long lVar7;
  int iVar8;
  FileList *__s;
  glob_t *pgVar9;
  long lVar10;
  FileList *__dest;
  byte bVar11;
  FileList *local_98;
  glob_t local_88;
  
  bVar11 = 0;
  iVar8 = 0;
  *arg2 = (FileList *)0x0;
  pcVar4 = strrchr(arg1,0x2f);
  if (pcVar4 != (char *)0x0) {
    iVar8 = ((int)pcVar4 + 1) - (int)arg1;
  }
  pgVar9 = &local_88;
  for (lVar7 = 9; lVar7 != 0; lVar7 = lVar7 + -1) {
    pgVar9->gl_pathc = 0;
    pgVar9 = (glob_t *)((long)pgVar9 + (ulong)bVar11 * -0x10 + 8);
  }
  iVar3 = glob(arg1,0,(__errfunc *)0x0,&local_88);
  ppcVar2 = local_88.gl_pathv;
  if (iVar3 == 0) {
    if ((int)local_88.gl_pathc < 1) {
      pFVar6 = malloc((ulong)((int)local_88.gl_pathc * 0x10 + 0x10));
      *(int *)pFVar6 = (int)local_88.gl_pathc;
    }
    else {
      lVar7 = (ulong)((int)local_88.gl_pathc - 1) * 8 + 8;
      iVar3 = 0;
      lVar10 = 0;
      do {
        puVar1 = (uint64_t *)((long)ppcVar2 + lVar10);
        lVar10 = lVar10 + 8;
        sVar5 = strlen((char *)*puVar1);
        iVar3 = iVar3 + (int)sVar5 + (1 - iVar8);
      } while (lVar10 != lVar7);
      pFVar6 = malloc((ulong)(uint)(((int)local_88.gl_pathc + 1) * 0x10 + iVar3));
      __dest = pFVar6 + (long)(int)local_88.gl_pathc * 0x10 + 0x10;
      lVar10 = 0;
      *(int *)pFVar6 = (int)local_88.gl_pathc;
      do {
        __s = (FileList *)((long)iVar8 + *(long *)((long)local_88.gl_pathv + lVar10));
        *(uint32_t *)(pFVar6 + lVar10 * 2 + 0x18) = 0xffffffff;
        *(FileList **)(pFVar6 + lVar10 * 2 + 0x10) = __dest;
        sVar5 = strlen((char *)__s);
        sVar5 = (size_t)((int)sVar5 + 1);
        if (__s != __dest) {
          memcpy(__dest,__s,sVar5);
        }
        __dest = __dest + sVar5;
        lVar10 = lVar10 + 8;
      } while (lVar10 != lVar7);
    }
    local_98 = pFVar6 + 0x10;
    *(FileList **)(pFVar6 + 8) = local_98;
    *arg2 = pFVar6;
  }
  globfree(&local_88);
  return;
}

/* ======================================================================
 * ResumeWorkerThread  (Ghidra `ResumeWorkerThread` @ 005b8800)
 * Signature: uint8_t __stdcall ResumeWorkerThread(THREADHANDLESTRUCT * arg1)
 * Calls: (none)
 * Called by: (none)
 */
/* ResumeWorkerThread(THREADHANDLESTRUCT*) */

void ResumeWorkerThread(THREADHANDLESTRUCT *arg1)

{
  return;
}

/* ======================================================================
 * OpenFile  (Ghidra `OpenFile` @ 005b8e10)
 * Signature: uint8_t __stdcall OpenFile(tagFileCreation * arg1, int * arg2)
 * Calls: `CriticalSection__Lock`, `File__File`, `File__File__005b7a70`, `operator_delete`, `operator_new`, `std__string_string`, `strlen`
 * Called by: (none)
 */
/* WARNING: Removing unreachable block (ram,0x005b8f33) */
/* UnixUserProfile__OpenFile(tagFileCreation const*, int*) */

File * UnixUserProfile__OpenFile(tagFileCreation *arg1,int *arg2)

{
  int *piVar1;
  int iVar2;
  char *__s;
  File *this;
  File *pFVar3;
  long local_68;
  uint64_t local_60;
  uint64_t local_58;
  long local_50;
  uint64_t local_48;
  uint64_t local_40;
  uint64_t local_38;
  uint64_t local_30;
  long local_28;
  allocator local_1a [10];
  
  CriticalSection__Lock((CriticalSection *)(arg1 + 0x28),1);
  std__string_string((string *)&local_28,GUserDataPath,local_1a);
  __s = *(char **)arg2;
  strlen(__s);
                    /* try { // try from 005b8e53 to 005b8e57 has its CatchHandler @ 005b8f1e */
  std__string_append((char *)&local_28,(ulong)__s);
  local_60 = *(uint64_t *)(arg2 + 2);
  local_58 = *(uint64_t *)(arg2 + 4);
  local_50 = *(long *)(arg2 + 6);
  local_48 = *(uint64_t *)(arg2 + 8);
  local_40 = *(uint64_t *)(arg2 + 10);
  local_38 = *(uint64_t *)(arg2 + 0xc);
  local_30 = *(uint64_t *)(arg2 + 0xe);
  local_68 = local_28;
                    /* try { // try from 005b8ea5 to 005b8ea9 has its CatchHandler @ 005b8f4e */
  this = operator_new(0x30);
                    /* try { // try from 005b8eb3 to 005b8eb7 has its CatchHandler @ 005b8f3e */
  File__File(this,(tagFileCreation *)&local_68);
  pFVar3 = this;
  if ((*(int *)this == -1) && (local_50 == 0)) {
                    /* try { // try from 005b8eeb to 005b8eef has its CatchHandler @ 005b8f4e */
    File__File__005b7a70(this);
    pFVar3 = (File *)0x0;
    operator_delete(this);
  }
  if ((allocator *)(local_28 + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage) {
    LOCK();
    piVar1 = (int *)(local_28 + -8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 < 1) {
      std__string_Rep_M_destroy((allocator *)(local_28 + -0x18));
    }
  }
  return pFVar3;
}

/* ======================================================================
 * MessageActive  (Ghidra `MessageActive` @ 005b9860)
 * Signature: uint8_t MessageActive(void)
 * Calls: (none)
 * Called by: `Game_JoystickUnplugged`, `Game_OverlayShowing`, `ShowPauseMenuPress`, `TEngine__Update`
 */
bool MessageActive(void)

{
  return UserAlert__currInterrupt != 0;
}

/* ======================================================================
 * RegisterMessageBoxRenderUpdate  (Ghidra `RegisterMessageBoxRenderUpdate` @ 005b98f0)
 * Signature: uint8_t RegisterMessageBoxRenderUpdate(void)
 * Calls: (none)
 * Called by: `GMeatHUD__GMeatHUD__004800c0`, `GMeatHUD__RestoreMessageBoxFunctions`, `Game_DisableMessage`, `Game_ForceCloseMessage`, `SMBMoveOn__Activate`, `SMBUpsellMenu__Activate`
 */
void RegisterMessageBoxRenderUpdate(uint64_t arg1,uint64_t arg2)

{
  UserAlert__fnMessageBoxRender = arg1;
  UserAlert__fnMessageBoxUpdate = arg2;
  return;
}

/* ======================================================================
 * Render__005b9970  (Ghidra `Render` @ 005b9970)
 * Signature: uint8_t Render(void)
 * Calls: `Game_DisableMessage`, `Render`
 * Called by: (none)
 */
void Render(void)

{
  if ((UserAlert__currInterrupt != 0) && (UserAlert__fnMessageBoxRender != (code *)0x0)) {
    (*UserAlert__fnMessageBoxRender)(0,DAT_00824be8 /* R:4.0283126953945516e-41f */);
    if (DAT_00824be8 /* R:4.0283126953945516e-41f */ == 3) {
      UserAlert__currInterrupt = 0;
      Game_DisableMessage(1);
      if (DAT_00824ba8 /* R:8.396019878848574e-39f */ != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005b99d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*DAT_00824ba8 /* R:8.396019878848574e-39f */)(DAT_00824be0 /* R:7.763193492359487e-43f */);
        return;
      }
    }
  }
  return;
}

/* ======================================================================
 * RunOKFunction  (Ghidra `RunOKFunction` @ 005b99e0)
 * Signature: uint8_t RunOKFunction(void)
 * Calls: (none)
 * Called by: `GameUserAlert_OkPress`
 */
void RunOKFunction(void)

{
  if ((DAT_00824bc0 /* R:1.1880522271401808e-38f */ != (code *)0x0) && (DAT_00824be8 /* R:4.0283126953945516e-41f */ == 2)) {
                    /* WARNING: Could not recover jumptable at 0x005b9a07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_00824bc0 /* R:1.1880522271401808e-38f */)(DAT_00824bd0 /* R:4.0242489298480097e-41f */);
    return;
  }
  return;
}

/* ======================================================================
 * RunCancelFunction  (Ghidra `RunCancelFunction` @ 005b9a10)
 * Signature: uint8_t RunCancelFunction(void)
 * Calls: (none)
 * Called by: `GameUserAlert_CancelPress`, `SMBUpsellContinue`, `SMBUpsellMenu__CloseUpsell`
 */
void RunCancelFunction(void)

{
  if ((DAT_00824bc8 /* R:3.363116314379561e-44f */ != (code *)0x0) && (DAT_00824be8 /* R:4.0283126953945516e-41f */ == 2)) {
                    /* WARNING: Could not recover jumptable at 0x005b9a37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_00824bc8 /* R:3.363116314379561e-44f */)(DAT_00824bd8 /* R:6.931405144711704e-39f */);
    return;
  }
  return;
}

/* ======================================================================
 * OnUserStatsReceived  (Ghidra `OnUserStatsReceived` @ 005ba090)
 * Signature: uint8_t __stdcall OnUserStatsReceived(UserStatsReceived_t * arg1)
 * Calls: `SteamAPI_IsSteamRunning`, `SteamUserStats`
 * Called by: `Achievements__Achievements`
 */
/* Achievements__OnUserStatsReceived(UserStatsReceived_t*) */

void Achievements__OnUserStatsReceived(UserStatsReceived_t *arg1)

{
  char cVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  if (0 < iNumAchievements) {
    lVar4 = 0;
    iVar3 = 0;
    do {
      while (cVar1 = SteamAPI_IsSteamRunning(), cVar1 != '\0') {
        plVar2 = (long *)SteamUserStats();
        lVar5 = lVar4 + pAchievementDatabase;
        iVar3 = iVar3 + 1;
        lVar4 = lVar4 + 0x18;
        (**(code **)(*plVar2 + 0x30))(plVar2,*(uint64_t *)(lVar5 + 8),lVar5 + 0x10);
        if (iNumAchievements <= iVar3) {
          return;
        }
      }
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 0x18;
    } while (iVar3 < iNumAchievements);
  }
  return;
}

/* ======================================================================
 * Run  (Ghidra `Run` @ 005ba1f0)
 * Signature: uint8_t __stdcall Run(void * arg1)
 * Calls: (none)
 * Called by: (none)
 */
/* CCallback<Achievements, UserStatsReceived_t, false__Run(void*) */

void CCallback<Achievements,UserStatsReceived_t,false__Run(void *arg1)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  
  UNRECOVERED_JUMPTABLE = *(code **)((long)arg1 + 0x18);
  plVar1 = (long *)(*(long *)((long)arg1 + 0x10) + *(long *)((long)arg1 + 0x20));
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar1 + -1);
  }
                    /* WARNING: Could not recover jumptable at 0x005ba20b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1);
  return;
}

/* ======================================================================
 * Run__005ba210  (Ghidra `Run` @ 005ba210)
 * Signature: uint8_t __stdcall Run(void * arg1, bool arg2, ulonglong arg3)
 * Calls: (none)
 * Called by: (none)
 */
/* CCallback<Achievements, UserStatsReceived_t, false__Run(void*, bool, unsigned long long) */

void CCallback<Achievements,UserStatsReceived_t,false__Run
               (void *arg1,bool arg2,ulonglong arg3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  
  UNRECOVERED_JUMPTABLE = *(code **)((long)arg1 + 0x18);
  plVar1 = (long *)(*(long *)((long)arg1 + 0x10) + *(long *)((long)arg1 + 0x20));
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar1 + -1);
  }
                    /* WARNING: Could not recover jumptable at 0x005ba22b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1);
  return;
}

/* ======================================================================
 * RegisterBroadcastStringDB  (Ghidra `RegisterBroadcastStringDB` @ 005ba240)
 * Signature: uint8_t __stdcall RegisterBroadcastStringDB(BroadcastStringDatabase * arg1, int arg2)
 * Calls: (none)
 * Called by: (none)
 */
/* BroadcastString__RegisterBroadcastStringDB(BroadcastStringDatabase*, int) */

void BroadcastString__RegisterBroadcastStringDB(BroadcastStringDatabase *arg1,int arg2)

{
  return;
}

/* ======================================================================
 * RegisterBroadcastStringParamDB  (Ghidra `RegisterBroadcastStringParamDB` @ 005ba250)
 * Signature: uint8_t __stdcall RegisterBroadcastStringParamDB(BroadcastStringParamDatabase * arg1, int arg2)
 * Calls: (none)
 * Called by: (none)
 */
/* BroadcastString__RegisterBroadcastStringParamDB(BroadcastStringParamDatabase*, int) */

void BroadcastString__RegisterBroadcastStringParamDB
               (BroadcastStringParamDatabase *arg1,int arg2)

{
  return;
}

/* ======================================================================
 * Run__005bad80  (Ghidra `Run` @ 005bad80)
 * Signature: uint8_t __thiscall Run(CCallResult<SteamLeaderBoards,LeaderboardScoreUploaded_t> * this, void * arg1)
 * Calls: (none)
 * Called by: (none)
 */
/* CCallResult<SteamLeaderBoards, LeaderboardScoreUploaded_t__Run(void*) */

void __thiscall
CCallResult<SteamLeaderBoards,LeaderboardScoreUploaded_t__Run
          (CCallResult<SteamLeaderBoards,LeaderboardScoreUploaded_t> *this,void *arg1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 0x20);
  *(uint64_t *)(this + 0x10) = 0;
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(this + 0x18) + *(long *)(this + 0x28)) + -1);
  }
                    /* WARNING: Could not recover jumptable at 0x005bada7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*(long *)(this + 0x18) + *(long *)(this + 0x28),arg1,0);
  return;
}

/* ======================================================================
 * Run__005badc0  (Ghidra `Run` @ 005badc0)
 * Signature: uint8_t __thiscall Run(CCallResult<SteamLeaderBoards,LeaderboardScoresDownloaded_t> * this, void * arg1)
 * Calls: (none)
 * Called by: (none)
 */
/* CCallResult<SteamLeaderBoards, LeaderboardScoresDownloaded_t__Run(void*) */

void __thiscall
CCallResult<SteamLeaderBoards,LeaderboardScoresDownloaded_t__Run
          (CCallResult<SteamLeaderBoards,LeaderboardScoresDownloaded_t> *this,void *arg1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 0x20);
  *(uint64_t *)(this + 0x10) = 0;
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(this + 0x18) + *(long *)(this + 0x28)) + -1);
  }
                    /* WARNING: Could not recover jumptable at 0x005bade7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*(long *)(this + 0x18) + *(long *)(this + 0x28),arg1,0);
  return;
}

/* ======================================================================
 * Run__005bae00  (Ghidra `Run` @ 005bae00)
 * Signature: uint8_t __thiscall Run(CCallResult<SteamLeaderBoards,LeaderboardFindResult_t> * this, void * arg1)
 * Calls: (none)
 * Called by: (none)
 */
/* CCallResult<SteamLeaderBoards, LeaderboardFindResult_t__Run(void*) */

void __thiscall
CCallResult<SteamLeaderBoards,LeaderboardFindResult_t__Run
          (CCallResult<SteamLeaderBoards,LeaderboardFindResult_t> *this,void *arg1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 0x20);
  *(uint64_t *)(this + 0x10) = 0;
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(this + 0x18) + *(long *)(this + 0x28)) + -1);
  }
                    /* WARNING: Could not recover jumptable at 0x005bae27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*(long *)(this + 0x18) + *(long *)(this + 0x28),arg1,0);
  return;
}

/* ======================================================================
 * Mat4x4MinorDeterminant  (Ghidra `Mat4x4MinorDeterminant` @ 005bb3f0)
 * Signature: uint8_t __stdcall Mat4x4MinorDeterminant(FPUVector * arg1, FPUVector * arg2, FPUVector * arg3)
 * Calls: (none)
 * Called by: (none)
 */
/* Mat4x4MinorDeterminant(FPUVector const&, FPUVector const&, FPUVector const&) */

float Mat4x4MinorDeterminant(FPUVector *arg1,FPUVector *arg2,FPUVector *arg3)

{
  return (*(float *)(arg1 + 8) * *(float *)arg2 - *(float *)(arg2 + 8) * *(float *)arg1)
         * *(float *)(arg3 + 4) +
         (*(float *)(arg2 + 8) * *(float *)(arg1 + 4) -
         *(float *)(arg2 + 4) * *(float *)(arg1 + 8)) * *(float *)arg3 +
         (*(float *)arg1 * *(float *)(arg2 + 4) - *(float *)(arg1 + 4) * *(float *)arg2)
         * *(float *)(arg3 + 8);
}

/* ======================================================================
 * Multiply  (Ghidra `Multiply` @ 005bbb90)
 * Signature: uint8_t __stdcall Multiply(Matrix4x4 * arg1, Matrix4x4 * arg2, Matrix4x4 * arg3)
 * Calls: (none)
 * Called by: `Matrix4x4__operator_mul`, `Matrix4x4__operator_mul_assign__005bc070`, `Transformation3D`
 */
/* Matrix4x4__Multiply(Matrix4x4*, Matrix4x4 const*, Matrix4x4 const*) */

Matrix4x4 * Matrix4x4__Multiply(Matrix4x4 *arg1,Matrix4x4 *arg2,Matrix4x4 *arg3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  
  fVar1 = *(float *)(arg3 + 8);
  fVar2 = *(float *)(arg3 + 0xc);
  fVar3 = *(float *)(arg3 + 0x10);
  fVar4 = *(float *)(arg3 + 0x14);
  fVar5 = *(float *)(arg3 + 0x18);
  fVar6 = *(float *)(arg3 + 0x1c);
  fVar7 = *(float *)(arg3 + 0x20);
  fVar8 = *(float *)(arg3 + 0x24);
  fVar9 = *(float *)(arg3 + 0x28);
  fVar10 = *(float *)(arg3 + 0x2c);
  fVar11 = *(float *)(arg3 + 0x30);
  fVar12 = *(float *)(arg3 + 0x34);
  fVar13 = *(float *)(arg3 + 0x38);
  fVar14 = *(float *)(arg3 + 0x3c);
  fVar15 = *(float *)arg2;
  fVar16 = *(float *)arg3;
  fVar17 = *(float *)(arg2 + 0x10);
  fVar18 = *(float *)(arg3 + 4);
  fVar19 = *(float *)(arg2 + 0x20);
  fVar20 = *(float *)(arg2 + 0x30);
  fVar21 = *(float *)(arg2 + 0xc);
  fVar22 = *(float *)(arg2 + 0x1c);
  fVar23 = *(float *)(arg2 + 0x2c);
  fVar24 = *(float *)(arg2 + 0x3c);
  fVar25 = *(float *)(arg2 + 4);
  fVar26 = *(float *)(arg2 + 0x14);
  fVar27 = *(float *)(arg2 + 0x24);
  fVar28 = *(float *)(arg2 + 0x34);
  fVar29 = *(float *)(arg2 + 8);
  fVar30 = *(float *)(arg2 + 0x18);
  fVar31 = *(float *)(arg2 + 0x28);
  fVar32 = *(float *)(arg2 + 0x38);
  *(float *)arg1 = fVar18 * fVar17 + fVar16 * fVar15 + fVar1 * fVar19 + fVar2 * fVar20;
  *(float *)(arg1 + 0x10) = fVar4 * fVar17 + fVar3 * fVar15 + fVar5 * fVar19 + fVar6 * fVar20;
  *(float *)(arg1 + 0x20) = fVar8 * fVar17 + fVar7 * fVar15 + fVar9 * fVar19 + fVar10 * fVar20;
  *(float *)(arg1 + 0x30) = fVar17 * fVar12 + fVar15 * fVar11 + fVar19 * fVar13 + fVar20 * fVar14
  ;
  *(float *)(arg1 + 4) = fVar26 * fVar18 + fVar25 * fVar16 + fVar1 * fVar27 + fVar2 * fVar28;
  *(float *)(arg1 + 0x14) = fVar4 * fVar26 + fVar3 * fVar25 + fVar5 * fVar27 + fVar6 * fVar28;
  *(float *)(arg1 + 0x24) = fVar8 * fVar26 + fVar7 * fVar25 + fVar9 * fVar27 + fVar10 * fVar28;
  *(float *)(arg1 + 0x34) = fVar26 * fVar12 + fVar25 * fVar11 + fVar27 * fVar13 + fVar28 * fVar14
  ;
  *(float *)(arg1 + 8) = fVar30 * fVar18 + fVar29 * fVar16 + fVar1 * fVar31 + fVar2 * fVar32;
  *(float *)(arg1 + 0x18) = fVar4 * fVar30 + fVar3 * fVar29 + fVar5 * fVar31 + fVar6 * fVar32;
  *(float *)(arg1 + 0x28) = fVar8 * fVar30 + fVar7 * fVar29 + fVar9 * fVar31 + fVar10 * fVar32;
  *(float *)(arg1 + 0x38) = fVar30 * fVar12 + fVar29 * fVar11 + fVar31 * fVar13 + fVar32 * fVar14
  ;
  *(float *)(arg1 + 0xc) = fVar18 * fVar22 + fVar16 * fVar21 + fVar23 * fVar1 + fVar24 * fVar2;
  *(float *)(arg1 + 0x1c) = fVar22 * fVar4 + fVar21 * fVar3 + fVar23 * fVar5 + fVar24 * fVar6;
  *(float *)(arg1 + 0x2c) = fVar22 * fVar8 + fVar21 * fVar7 + fVar23 * fVar9 + fVar24 * fVar10;
  *(float *)(arg1 + 0x3c) = fVar22 * fVar12 + fVar21 * fVar11 + fVar23 * fVar13 + fVar24 * fVar14
  ;
  return arg1;
}

/* ======================================================================
 * Perpendicular  (Ghidra `Perpendicular` @ 005be020)
 * Signature: uint8_t __stdcall Perpendicular(Vector2 * arg1, Vector2 * arg2, int arg3)
 * Calls: (none)
 * Called by: (none)
 */
/* Vector2__Perpendicular(Vector2*, Vector2 const*, int) */

Vector2 * Vector2__Perpendicular(Vector2 *arg1,Vector2 *arg2,int arg3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = DAT_005be6f0 /* R:u32=2147483648 */;
  uVar1 = *(uint *)arg2;
  uVar2 = *(uint *)(arg2 + 4);
  if (arg3 != 1) {
    *(uint *)(arg1 + 4) = uVar1;
    *(uint *)arg1 = uVar2 ^ uVar3;
    return arg1;
  }
  *(uint *)arg1 = uVar2;
  *(uint *)(arg1 + 4) = uVar1 ^ DAT_005be6f0 /* R:u32=2147483648 */;
  return arg1;
}

/* ======================================================================
 * Normalize  (Ghidra `Normalize` @ 005be0b0)
 * Signature: uint8_t __stdcall Normalize(Vector2 * arg1, Vector2 * arg2)
 * Calls: (none)
 * Called by: (none)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Vector2__Normalize(Vector2*, Vector2 const*) */

Vector2 * Vector2__Normalize(Vector2 *arg1,Vector2 *arg2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint8_t auVar4 [16];
  
  fVar1 = *(float *)arg2;
  fVar2 = *(float *)(arg2 + 4) * *(float *)(arg2 + 4) + fVar1 * fVar1;
  auVar4 = rsqrtss(ZEXT416((uint)(fVar1 * fVar1)),ZEXT416((uint)fVar2));
  fVar3 = auVar4._0_4_;
  fVar2 = (fVar2 * fVar3 * fVar3 + _DAT_005dedb4 /* R:-3.0f */) * fVar3 * DAT_005c0e00 /* R:-0.5f */;
  *(float *)arg1 = fVar1 * fVar2;
  *(float *)(arg1 + 4) = fVar2 * *(float *)(arg2 + 4);
  return arg1;
}
