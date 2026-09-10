/* src/engine/core_03.c — 78 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "core_03.h"

/* ======================================================================
 * IsBloodOnTile  (Ghidra `IsBloodOnTile` @ 00463850)
 * Signature: uint8_t __stdcall IsBloodOnTile(GRIDBLOCK * arg1, Vector2 * arg2, tagTileCollisionType arg3, int * arg4, int arg5, int arg6)
 * Calls: `TileLevel__GetGridIndex__0058dd90`
 * Called by: `BloodyTiles__AddBloodyTile`
 */
/* BloodyTiles__IsBloodOnTile(GRIDBLOCK const*, Vector2 const&, tagTileCollisionType, int&, int,
   int) */

bool BloodyTiles__IsBloodOnTile(long arg1, uint64_t arg2, Vector2 *arg3, int arg4, int *arg5,
                                int arg6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  Vector2 aVStack_38[8];
  int local_30;
  int local_2c[3];

  iVar2 = TileLevel__GetGridIndex__0058dd90(*(TileLevel **)(SuperMeatBoy + 0x40), arg3, aVStack_38,
                                            &local_30, local_2c);
  iVar1 = *(int *)(*(long *)(arg1 + 0x20) + (long)iVar2 * 4);
  *arg5 = iVar1;
  if (iVar2 == -1) {
    return false;
  }
  lVar6 = (long)iVar1 * 0x88 + *(long *)(arg1 + 0x28);
  if (arg4 == 4) {
    uVar9 = 0xb;
    uVar8 = 9;
    uVar7 = 7;
    uVar5 = 5;
    uVar3 = 1;
  } else if (arg4 == 8) {
    uVar9 = 10;
    uVar8 = 0xb;
    uVar7 = 6;
    uVar5 = 7;
    uVar3 = 2;
  } else if (arg4 == 1) {
    uVar9 = 0xe;
    uVar8 = 0xd;
    uVar7 = 6;
    uVar5 = 5;
    uVar3 = 4;
  } else {
    bVar10 = arg4 == 2;
    uVar9 = 10;
    uVar8 = 9;
    uVar7 = (uint)bVar10 * 8 + 6;
    uVar5 = (uint)bVar10 * 8 + 5;
    uVar3 = (uint)bVar10 << 3;
  }
  uVar4 = uVar3;
  if (arg6 == 2) {
    uVar4 = uVar5;
    if ((arg4 != 4) && (uVar4 = uVar3, arg4 == 1)) {
      uVar4 = uVar5;
    }
  } else if (arg6 == 3) {
    if ((arg4 == 8) || (arg4 == 1)) {
      uVar4 = uVar7;
    }
  } else if (arg6 == 0) {
    if ((arg4 == 4) || (arg4 == 2)) {
      uVar4 = uVar8;
    }
  } else if ((arg6 == 1) && ((arg4 == 8 || (arg4 == 2)))) {
    uVar4 = uVar9;
  }
  uVar7 = *(uint *)(lVar6 + 0x80);
  bVar10 = (uVar4 & uVar7) == 0;
  if (bVar10) {
    *(uint *)(lVar6 + 0x80) = uVar4 | uVar7;
  }
  return !bVar10;
}

/* ======================================================================
 * JumpPress  (Ghidra `JumpPress` @ 00464010)
 * Signature: uint8_t __stdcall JumpPress(tagButtonProps * arg1, void * arg2)
 * Calls: (none)
 * Called by: (none)
 */
/* CommanderVideo__JumpPress(tagButtonProps const*, void*) */

void CommanderVideo__JumpPress(tagButtonProps *arg1, void *arg2)

{
  int iVar1;

  if (((byte)arg1[0x7d8] & 2) == 0) {
    if (*(int *)arg2 == 1) {
      *(uint32_t *)(arg1 + 0xaa4) = 1;
      MeatBoyCharactor__JumpPress(arg1, arg2);
      return;
    }
  } else {
    iVar1 = *(int *)arg2;
    if (iVar1 == 1) {
      if (((byte)arg1[0x7d8] & 4) == 0) {
        iVar1 = *(int *)(arg1 + 0xaa4);
        *(uint32_t *)(arg1 + 0xa98) = 0x3f000000;
        *(uint32_t *)(arg1 + 0xaa4) = 0;
        *(uint *)(arg1 + 0xa94) = (uint)(iVar1 != 0);
      }
    } else if (iVar1 == 3) {
      *(uint32_t *)(arg1 + 0xa98) = 0;
      *(uint32_t *)(arg1 + 0xa94) = 0;
    } else if (((iVar1 == 2) && (0.0 < *(float *)(arg1 + 0xaa0))) &&
               (*(float *)(arg1 + 0xbc) <= 0.0)) {
      iVar1 = *(int *)(arg1 + 0xaa4);
      *(uint32_t *)(arg1 + 0xa98) = 0x3f000000;
      *(uint32_t *)(arg1 + 0xad4) = 0;
      *(uint32_t *)(arg1 + 0xaa4) = 0;
      *(uint *)(arg1 + 0xa94) = (uint)(iVar1 != 0);
    }
  }
  MeatBoyCharactor__JumpPress(arg1, arg2);
  return;
}

/* ======================================================================
 * IsCollidingWithBounds  (Ghidra `IsCollidingWithBounds` @ 00468c70)
 * Signature: uint8_t __stdcall IsCollidingWithBounds(Bounds * arg1)
 * Calls: `GSuperMeatBoy__getChar`
 * Called by: (none)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FactoryBoss__IsCollidingWithBounds(Bounds const*) */

bool FactoryBoss__IsCollidingWithBounds(Bounds *arg1)

{
  long lVar1;

  lVar1 = GSuperMeatBoy__getChar(SuperMeatBoy, 1);
  return _DAT_005bf840 /* R:15.0f */ + *(float *)(lVar1 + 0xa4) <
         *(float *)(*(long *)(arg1 + 0x40) + 0x28);
}

/* ======================================================================
 * LeftPress  (Ghidra `LeftPress` @ 00469d80)
 * Signature: uint8_t __stdcall LeftPress(tagButtonProps * arg1, void * arg2)
 * Calls: (none)
 * Called by: (none)
 */
/* FlyWrench__LeftPress(tagButtonProps const*, void*) */

void FlyWrench__LeftPress(tagButtonProps *arg1, void *arg2)

{
  arg1[0x7d8] = (tagButtonProps)((byte)arg1[0x7d8] & 0xef | (*(int *)arg2 - 1U < 2) << 4);
  return;
}

/* ======================================================================
 * JumpPress__00469ed0  (Ghidra `JumpPress` @ 00469ed0)
 * Signature: uint8_t __stdcall JumpPress(tagButtonProps * arg1, void * arg2)
 * Calls: (none)
 * Called by: (none)
 */
/* FlyWrench__JumpPress(tagButtonProps const*, void*) */

void FlyWrench__JumpPress(tagButtonProps *arg1, void *arg2)

{
  if (*(int *)arg2 == 1) {
    arg1[0x7d8] = (tagButtonProps)((byte)arg1[0x7d8] | 0xa0);
    return;
  }
  if (*(int *)arg2 != 2) {
    arg1[0x7d8] = (tagButtonProps)((byte)arg1[0x7d8] & 0xdf | 0x80);
    return;
  }
  arg1[0x7d8] = (tagButtonProps)((byte)arg1[0x7d8] & 0x7f | 0x20);
  return;
}

/* ======================================================================
 * GetRandomAttack  (Ghidra `GetRandomAttack` @ 0046c9f0)
 * Signature: uint8_t GetRandomAttack(void)
 * Calls: `GetRandomINT`
 * Called by: (none)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* GetRandomAttack() */

void GetRandomAttack(void)

{
  GetRandomINT(0, 3);
  return;
}

/* ======================================================================
 * JumpPress__0046de10  (Ghidra `JumpPress` @ 0046de10)
 * Signature: uint8_t __stdcall JumpPress(tagButtonProps * arg1, void * arg2)
 * Calls: (none)
 * Called by: (none)
 */
/* Jill__JumpPress(tagButtonProps const*, void*) */

void Jill__JumpPress(tagButtonProps *arg1, void *arg2)

{
  if ((((byte)arg1[0x7d8] & 2) == 0) ||
      (0.0 < *(float *)(arg1 + 0xbc) || *(float *)(arg1 + 0xbc) == 0.0)) {
    *(uint32_t *)(arg1 + 0xaa0) = 0;
  } else if (*(int *)arg2 == 1) {
    *(uint32_t *)(arg1 + 0xbc) = 0xc1200000;
    *(uint32_t *)(arg1 + 0xaa0) = 1;
  } else if (*(int *)arg2 == 2) {
    *(uint32_t *)(arg1 + 0xaa0) = 1;
  }
  MeatBoyCharactor__JumpPress(arg1, arg2);
  return;
}

/* ======================================================================
 * JumpPress__00473860  (Ghidra `JumpPress` @ 00473860)
 * Signature: uint8_t __stdcall JumpPress(tagButtonProps * arg1, void * arg2)
 * Calls: (none)
 * Called by: (none)
 */
/* Machinarium__JumpPress(tagButtonProps const*, void*) */

void Machinarium__JumpPress(tagButtonProps *arg1, void *arg2)

{
  if (*(int *)arg2 == 1) {
    arg1[0x7d8] = (tagButtonProps)((byte)arg1[0x7d8] | 0xa0);
    return;
  }
  if (*(int *)arg2 != 2) {
    arg1[0x7d8] = (tagButtonProps)((byte)arg1[0x7d8] & 0xdf | 0x80);
    return;
  }
  arg1[0x7d8] = (tagButtonProps)((byte)arg1[0x7d8] & 0x7f | 0x20);
  return;
}

/* ======================================================================
 * JumpPress__00473d00  (Ghidra `JumpPress` @ 00473d00)
 * Signature: uint8_t __stdcall JumpPress(tagButtonProps * arg1, void * arg2)
 * Calls: (none)
 * Called by: (none)
 */
/* MeatBoyCharactor__JumpPress(tagButtonProps const*, void*) */

void MeatBoyCharactor__JumpPress(tagButtonProps *arg1, void *arg2)

{
  if (*(int *)arg2 == 1) {
    arg1[0x7d8] = (tagButtonProps)((byte)arg1[0x7d8] | 0xa0);
    return;
  }
  if (*(int *)arg2 != 2) {
    arg1[0x7d8] = (tagButtonProps)((byte)arg1[0x7d8] & 0xdf | 0x80);
    return;
  }
  arg1[0x7d8] = (tagButtonProps)((byte)arg1[0x7d8] & 0x7f | 0x20);
  return;
}

/* ======================================================================
 * LeftPress__00473d40  (Ghidra `LeftPress` @ 00473d40)
 * Signature: uint8_t __stdcall LeftPress(tagButtonProps * arg1, void * arg2)
 * Calls: (none)
 * Called by: (none)
 */
/* MeatBoyCharactor__LeftPress(tagButtonProps const*, void*) */

void MeatBoyCharactor__LeftPress(tagButtonProps *arg1, void *arg2)

{
  tagButtonProps tVar1;

  tVar1 = arg1[0x7d8];
  if ((((byte)tVar1 & 4) != 0) && (*(uint *)((long)arg2 + 4) < 0xfb)) {
    arg1[0x7d8] = (tagButtonProps)((byte)tVar1 & 0xef);
    return;
  }
  arg1[0x7d8] = (tagButtonProps)((byte)tVar1 & 0xef | (*(int *)arg2 - 1U < 2) << 4);
  return;
}

/* ======================================================================
 * IsOnTrianglePart  (Ghidra `IsOnTrianglePart` @ 00476ef0)
 * Signature: uint8_t __stdcall IsOnTrianglePart(GRIDBLOCK * arg1, Vector2 * arg2, tagTileCollisionType arg3, int * arg4)
 * Calls: `GetTriangleOrientation`, `Vector2__Vector2`
 * Called by: `MeatBoyCharactor__Update`
 */
/* IsOnTrianglePart(GRIDBLOCK*, Vector2 const&, tagTileCollisionType, int&) */

bool IsOnTrianglePart(GRIDBLOCK *arg1, Vector2 *arg2, int arg3, uint *arg4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;

  if ((IsOnTrianglePart(GRIDBLOCK *, Vector2_const &, tagTileCollisionType, int &)::vDiagonalUp ==
       '\0') &&
      (iVar3 = __cxa_guard_acquire(&IsOnTrianglePart(GRIDBLOCK *, Vector2_const &,
                                                     tagTileCollisionType, int &)::vDiagonalUp),
       iVar3 != 0)) {
    IsOnTrianglePart(GRIDBLOCK *, Vector2_const &, tagTileCollisionType, int &)::vDiagonalUp._0_4_ =
        0x3f800000;
    IsOnTrianglePart(GRIDBLOCK *, Vector2_const &, tagTileCollisionType, int &)::vDiagonalUp._4_4_ =
        0x3f800000;
    __cxa_guard_release(
        &IsOnTrianglePart(GRIDBLOCK *, Vector2_const &, tagTileCollisionType, int &)::vDiagonalUp);
    __cxa_atexit(
        Vector2__Vector2,
        &IsOnTrianglePart(GRIDBLOCK *, Vector2_const &, tagTileCollisionType, int &)::vDiagonalUp,
        &__dso_handle);
  }
  uVar2 = GetTriangleOrientation(arg1, arg2);
  *arg4 = uVar2;
  bVar1 = false;
  if (arg3 != 1) {
    if (uVar2 == 0) {
      if (arg3 == 4) {
        return true;
      }
    } else if ((uVar2 == 1) && (arg3 == 8)) {
      return true;
    }
    bVar1 = arg3 == 2 && uVar2 < 2;
  }
  return bVar1;
}

/* ======================================================================
 * JumpPress__00481ae0  (Ghidra `JumpPress` @ 00481ae0)
 * Signature: uint8_t __stdcall JumpPress(tagButtonProps * arg1, void * arg2)
 * Calls: (none)
 * Called by: (none)
 */
/* MrMinecraft__JumpPress(tagButtonProps const*, void*) */

void MrMinecraft__JumpPress(tagButtonProps *arg1, void *arg2)

{
  if (*(int *)arg2 == 1) {
    arg1[0x7d8] = (tagButtonProps)((byte)arg1[0x7d8] | 0xa0);
    return;
  }
  if (*(int *)arg2 != 2) {
    arg1[0x7d8] = (tagButtonProps)((byte)arg1[0x7d8] & 0xdf | 0x80);
    return;
  }
  arg1[0x7d8] = (tagButtonProps)((byte)arg1[0x7d8] & 0x7f | 0x20);
  return;
}

/* ======================================================================
 * JumpPress__00482e80  (Ghidra `JumpPress` @ 00482e80)
 * Signature: uint8_t __stdcall JumpPress(tagButtonProps * arg1, void * arg2)
 * Calls: (none)
 * Called by: (none)
 */
/* Naija__JumpPress(tagButtonProps const*, void*) */

void Naija__JumpPress(tagButtonProps *arg1, void *arg2)

{
  if (*(int *)arg2 == 1) {
    arg1[0x7d8] = (tagButtonProps)((byte)arg1[0x7d8] | 0xa0);
    return;
  }
  if (*(int *)arg2 != 2) {
    arg1[0x7d8] = (tagButtonProps)((byte)arg1[0x7d8] & 0xdf | 0x80);
    return;
  }
  arg1[0x7d8] = (tagButtonProps)((byte)arg1[0x7d8] & 0x7f | 0x20);
  return;
}

/* ======================================================================
 * JumpPress__00483560  (Ghidra `JumpPress` @ 00483560)
 * Signature: uint8_t __stdcall JumpPress(tagButtonProps * arg1, void * arg2)
 * Calls: (none)
 * Called by: (none)
 */
/* Ogmo__JumpPress(tagButtonProps const*, void*) */

void Ogmo__JumpPress(tagButtonProps *arg1, void *arg2)

{
  if (*(int *)arg2 == 1) {
    arg1[0x7d8] = (tagButtonProps)((byte)arg1[0x7d8] | 0xa0);
    return;
  }
  if (*(int *)arg2 != 2) {
    arg1[0x7d8] = (tagButtonProps)((byte)arg1[0x7d8] & 0xdf | 0x80);
    return;
  }
  arg1[0x7d8] = (tagButtonProps)((byte)arg1[0x7d8] & 0x7f | 0x20);
  return;
}

/* ======================================================================
 * JumpPress__004864b0  (Ghidra `JumpPress` @ 004864b0)
 * Signature: uint8_t __stdcall JumpPress(tagButtonProps * arg1, void * arg2)
 * Calls: (none)
 * Called by: (none)
 */
/* Runman__JumpPress(tagButtonProps const*, void*) */

void Runman__JumpPress(tagButtonProps *arg1, void *arg2)

{
  if (*(int *)arg2 == 1) {
    arg1[0x7d8] = (tagButtonProps)((byte)arg1[0x7d8] | 0xa0);
    return;
  }
  if (*(int *)arg2 != 2) {
    arg1[0x7d8] = (tagButtonProps)((byte)arg1[0x7d8] & 0xdf | 0x80);
    return;
  }
  arg1[0x7d8] = (tagButtonProps)((byte)arg1[0x7d8] & 0x7f | 0x20);
  return;
}

/* ======================================================================
 * IsStickableTile  (Ghidra `IsStickableTile` @ 00486ff0)
 * Signature: uint8_t __stdcall IsStickableTile(float arg1, Vector2 * arg2, tagTileCollisionType arg3, TileCollisionInfo * arg4)
 * Calls: `TileLevel__GetGridBlock`, `TileLevel__GetGridIndex__0058dd90`
 * Called by: `SMBAnimalGroundEnemyUpdate`
 */
/* IsStickableTile(float, Vector2 const&, tagTileCollisionType, TileCollisionInfo const&) */

bool IsStickableTile(float arg1, Vector2 *arg2, int arg3, long *arg4)

{
  long lVar1;
  uint *puVar2;
  Vector2 local_38[24];
  int local_20;
  int local_1c[3];

  TileLevel__GetGridIndex__0058dd90(*(TileLevel **)(SuperMeatBoy + 0x40), arg2, local_38, &local_20,
                                    local_1c);
  if (arg3 == 2) {
    if (arg1 <= 0.0) {
      if (0.0 <= arg1) {
        return true;
      }
      if ((arg4[3] != 0) && ((*(byte *)(arg4[3] + 2) & 0xc) != 0)) {
        return false;
      }
      lVar1 = arg4[2];
    joined_r0x004871e9:
      if ((lVar1 != 0) && ((*(byte *)(lVar1 + 2) & 0xc) != 0)) {
        return false;
      }
      local_1c[0] = local_1c[0] + -1;
      local_20 = local_20 + -1;
      goto LAB_0048709c;
    }
    if ((arg4[3] != 0) && ((*(byte *)(arg4[3] + 2) & 0xc) != 0)) {
      return false;
    }
    lVar1 = arg4[2];
  joined_r0x00487084:
    if ((lVar1 != 0) && ((*(byte *)(lVar1 + 2) & 0xc) != 0)) {
      return false;
    }
    local_1c[0] = local_1c[0] + -1;
    local_20 = local_20 + 1;
    goto LAB_0048709c;
  }
  if (arg3 == 1) {
    if (0.0 < arg1) {
      if ((arg4[3] != 0) && ((*(byte *)(arg4[3] + 2) & 0xc) != 0)) {
        return false;
      }
      lVar1 = arg4[2];
      goto joined_r0x004870f0;
    }
    if (0.0 <= arg1) {
      return true;
    }
    if ((arg4[3] != 0) && ((*(byte *)(arg4[3] + 2) & 0xc) != 0)) {
      return false;
    }
    lVar1 = arg4[2];
  } else {
    if (arg3 == 4) {
      if (0.0 < arg1) {
        if ((arg4[1] != 0) && ((*(byte *)(arg4[1] + 2) & 0xc) != 0)) {
          return false;
        }
        lVar1 = *arg4;
        goto joined_r0x004871e9;
      }
      if (0.0 <= arg1) {
        return true;
      }
      if ((arg4[1] != 0) && ((*(byte *)(arg4[1] + 2) & 0xc) != 0)) {
        return false;
      }
      lVar1 = *arg4;
    joined_r0x004870f0:
      if ((lVar1 != 0) && ((*(byte *)(lVar1 + 2) & 0xc) != 0)) {
        return false;
      }
      local_1c[0] = local_1c[0] + 1;
      local_20 = local_20 + -1;
      goto LAB_0048709c;
    }
    if (arg3 != 8) {
      return true;
    }
    if (arg1 <= 0.0) {
      if (0.0 <= arg1) {
        return true;
      }
      if ((arg4[1] != 0) && ((*(byte *)(arg4[1] + 2) & 0xc) != 0)) {
        return false;
      }
      lVar1 = *arg4;
      goto joined_r0x00487084;
    }
    if ((arg4[1] != 0) && ((*(byte *)(arg4[1] + 2) & 0xc) != 0)) {
      return false;
    }
    lVar1 = *arg4;
  }
  if ((lVar1 != 0) && ((*(byte *)(lVar1 + 2) & 0xc) != 0)) {
    return false;
  }
  local_1c[0] = local_1c[0] + 1;
  local_20 = local_20 + 1;
LAB_0048709c:
  puVar2 = (uint *)TileLevel__GetGridBlock(*(TileLevel **)(SuperMeatBoy + 0x40), local_20,
                                           local_1c[0], 0);
  return (*puVar2 >> 0x10 & 0xc) == 0;
}

/* ======================================================================
 * IsAnimalVisible  (Ghidra `IsAnimalVisible` @ 00488220)
 * Signature: uint8_t __stdcall IsAnimalVisible(SMBAnimal * arg1)
 * Calls: `IsPointWithinBoundingSquare`
 * Called by: (none)
 */
/* IsAnimalVisible(SMBAnimal*) */

void IsAnimalVisible(SMBAnimal *arg1)

{
  IsPointWithinBoundingSquare((BoundingSquare *)(*(long *)(SuperMeatBoy + 0x38) + 0x140),
                              (Vector2 *)(arg1 + 0xa0));
  return;
}

/* ======================================================================
 * LoadMusicCueFromBlockVariable  (Ghidra `LoadMusicCueFromBlockVariable` @ 0048f9f0)
 * Signature: uint8_t __stdcall LoadMusicCueFromBlockVariable(TAudioCue * * arg1, PropertyVariable * arg2)
 * Calls: `std__string_string`, `strlen`
 * Called by: (none)
 */
/* WARNING: Removing unreachable block (ram,0x0048fab4) */
/* LoadMusicCueFromBlockVariable(TAudioCue**, PropertyBlock__PropertyVariable) */

void LoadMusicCueFromBlockVariable(TAudioCue **arg1, PropertyVariable *arg2)

{
  int *piVar1;
  int iVar2;
  TAudioCue *pTVar3;
  uint32_t local_48[2];
  long local_40;
  uint32_t local_38;
  uint32_t local_34;
  long local_28;
  allocator local_1a[10];

  *arg1 = (TAudioCue *)0x0;
  std__string_string((string *)&local_28, "audio/", local_1a);
  if (arg2 != (PropertyVariable *)0x0) {
    strlen((char *)(arg2 + 0x20));
    /* try { // try from 0048fa33 to 0048fa60 has its CatchHandler @ 0048fa9f */
    std__string_append((char *)&local_28, (ulong)(arg2 + 0x20));
    local_38 = 0;
    local_34 = 0;
    local_48[0] = 5;
    local_40 = local_28;
    pTVar3 = (TAudioCue *)TAudioCue__Create((TAudioCueCreation *)local_48);
    *arg1 = pTVar3;
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
  return;
}

/* ======================================================================
 * GetPrevID  (Ghidra `GetPrevID` @ 004a2500)
 * Signature: uint8_t __stdcall GetPrevID(int arg1, int arg2)
 * Calls: (none)
 * Called by: `SMBEditor__EditSetPieces`
 */
/* GetPrevID(int, int) */

int GetPrevID(int arg1, int arg2)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;

  if (*(int *)(SuperMeatBoyEditor + 0xc0) == 5) {
    if ((0 < iNumObjectArrayEntries) &&
        (lVar2 = 1, lVar5 = pCurrentObjectArray, arg1 != *(int *)(pCurrentObjectArray + 0x10))) {
      while (lVar4 = lVar2, (int)lVar4 < iNumObjectArrayEntries) {
        piVar1 = (int *)(lVar5 + 0x28);
        lVar5 = lVar5 + 0x18;
        lVar2 = lVar4 + 1;
        if (arg1 == *piVar1) {
          return *(int *)(pCurrentObjectArray + 0x10 + (lVar4 * 3 + -3) * 8);
        }
      }
    }
    return *(int *)(pCurrentObjectArray + 0x10 + ((long)iNumObjectArrayEntries * 3 + -3) * 8);
  }
  iVar3 = arg1 + -1;
  if (arg2 + -1 < iVar3) {
    return 0;
  }
  if (iVar3 < 0) {
    iVar3 = arg2 + -1;
  }
  return iVar3;
}

/* ======================================================================
 * IsFlashFormActive  (Ghidra `IsFlashFormActive` @ 004a62d0)
 * Signature: uint8_t IsFlashFormActive(void)
 * Calls: (none)
 * Called by: `CancelPastePiecesRendering`, `ChangeBlockID`, `CopySelected`, `DeSelectTile`, `DeleteSelected`, `DeleteSelectedAnimal`, `EditorButton_SetAnimalMode`, `EditorButton_SetCameraMode`, `EditorButton_SetLightMode`, `EditorButton_SetTileMode` (+28 more)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IsFlashFormActive() */

bool IsFlashFormActive(void)

{
  bool bVar1;

  bVar1 = true;
  if ((((((*(int *)(pEditorAnimalPropsForm + 0xa8) != 1) &&
          (*(int *)(pEditorObjectPropsForm + 0xa8) != 1)) &&
         (*(int *)(pEditorNewLevelForm + 0xa8) != 1)) &&
        ((*(int *)(pEditorLayerPropsForm + 0xa8) != 1 &&
          (*(int *)(pEditorSaveForm + 0xa8) != 1)))) &&
       ((*(int *)(pEditorLoadForm + 0xa8) != 1 &&
         ((*(int *)(pEditorLightPropsForm + 0xa8) != 1 &&
           (*(int *)(pEditorUploadForm + 0xa8) != 1)))))) &&
      ((*(int *)(pEditorCharForm + 0xa8) != 1 && (*(int *)(pEditorCameraPropsForm + 0xa8) != 1)))) {
    bVar1 = *(int *)(pEditorChapterUploadForm + 0xa8) == 1;
  }
  return bVar1;
}

/* ======================================================================
 * IsEditorFunctionAllowed  (Ghidra `IsEditorFunctionAllowed` @ 004a63a0)
 * Signature: uint8_t IsEditorFunctionAllowed(void)
 * Calls: `EditorButton__IsMouseOverButton`, `IsFlashFormActive`, `SMBEditorForms__IsFormActive`
 * Called by: `PlaceSetPiece`, `SMBEditor__Update`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IsEditorFunctionAllowed() */

bool IsEditorFunctionAllowed(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;

  uVar1 = SMBEditorForms__IsFormActive();
  uVar2 = IsFlashFormActive();
  if (pEditorButtons._40_2_ != 0) {
    uVar4 = 0;
    do {
      iVar3 = EditorButton__IsMouseOverButton(
          *(EditorButton **)(pEditorButtons._56_8_ + (ulong)(uVar4 & 0xffff) * 8));
      if (iVar3 == 1) {
        return (uVar1 | uVar2 | 1) == 0;
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < (int)(uint)(ushort)pEditorButtons._40_2_);
  }
  FlashAnimationLibrary__SetTextFieldText(pEditorLib, "hotkey",
                                          &DAT_005ca3d2 /* R:u32=1931804704 */);
  return uVar1 == 0 && uVar2 == 0;
}

/* ======================================================================
 * GrabBlock  (Ghidra `GrabBlock` @ 004a86e0)
 * Signature: uint8_t __stdcall GrabBlock(tagButtonProps * arg1, void * arg2)
 * Calls: `Camera__ScreenToWorld`, `EditorButton__IsMouseOverButton`, `IsFlashFormActive`, `SMBEditorForms__IsFormActive`, `TileLevel__GetGridBlock`, `TileLevel__GetGridIndex__0058dd90`
 * Called by: `SMBEditor__SetToTileMode`
 */
/* GrabBlock(tagButtonProps const*, void*) */

void GrabBlock(tagButtonProps *arg1, void *arg2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint32_t *puVar4;
  uint uVar5;
  uint32_t local_68;
  uint32_t local_64;
  uint32_t local_60;
  uint32_t local_5c;
  uint32_t local_58;
  uint32_t local_54;
  Vector2 local_48[24];
  int local_30;
  int local_2c[3];

  uVar1 = SMBEditorForms__IsFormActive();
  uVar2 = IsFlashFormActive();
  if (pEditorButtons._40_2_ != 0) {
    uVar5 = 0;
    do {
      iVar3 = EditorButton__IsMouseOverButton(
          *(EditorButton **)(pEditorButtons._56_8_ + (ulong)(uVar5 & 0xffff) * 8));
      if (iVar3 == 1) {
        if ((uVar1 | uVar2 | 1) != 0) {
          return;
        }
        goto LAB_004a874c;
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < (int)(uint)(ushort)pEditorButtons._40_2_);
  }
  FlashAnimationLibrary__SetTextFieldText(pEditorLib, "hotkey",
                                          &DAT_005ca3d2 /* R:u32=1931804704 */);
  if (uVar1 == 0 && uVar2 == 0) {
  LAB_004a874c:
    if (*(int *)arg1 == 1) {
      local_58 = *(uint32_t *)(Mouse + 0xc);
      local_54 = *(uint32_t *)(Mouse + 0x10);
      local_68 = 0;
      local_64 = 0;
      local_60 = 0;
      local_5c = 0;
      Camera__ScreenToWorld(*(Camera **)(SuperMeatBoy + 0x38), (FPUVector *)&local_68,
                            (Vector2 *)&local_58, 0.0);
      TileLevel__GetGridIndex__0058dd90(*(TileLevel **)(SuperMeatBoy + 0x40), (Vector2 *)&local_68,
                                        local_48, &local_30, local_2c);
      puVar4 = (uint32_t *)TileLevel__GetGridBlock(*(TileLevel **)(SuperMeatBoy + 0x40), local_30,
                                                   local_2c[0], SuperMeatBoyEditor[0x34]);
      if ((char)*puVar4 != '\0') {
        *SuperMeatBoyEditor = *puVar4;
        return;
      }
    }
  }
  return;
}

/* ======================================================================
 * LightPropertiesActivate  (Ghidra `LightPropertiesActivate` @ 004bbb50)
 * Signature: uint8_t __stdcall LightPropertiesActivate(void * arg1)
 * Calls: `SMBEditor__getCurrLight`, `UIDropDown__SetSelected__005a30a0`
 * Called by: `SMBEditorForms__Initialize`
 */
/* LightPropertiesActivate(void*) */

void LightPropertiesActivate(void *arg1)

{
  float fVar1;
  long lVar2;

  lVar2 = SMBEditor__getCurrLight(SuperMeatBoyEditor);
  fVar1 = DAT_005be898 /* R:255.0f */;
  if (lVar2 != 0) {
    UITextField__SetDynamicText(
        pSMBLIGHTPROPRed, &DAT_005c6660 /* R:5.184804318001823e-44f */,
        (ulong)(uint)(int)(*(float *)(lVar2 + 0x10) * DAT_005be898 /* R:255.0f */));
    UITextField__SetDynamicText(pSMBLIGHTPROPGreen, &DAT_005c6660 /* R:5.184804318001823e-44f */,
                                (ulong)(uint)(int)(*(float *)(lVar2 + 0x14) * fVar1));
    UITextField__SetDynamicText(pSMBLIGHTPROPBlue, &DAT_005c6660 /* R:5.184804318001823e-44f */,
                                (ulong)(uint)(int)(fVar1 * *(float *)(lVar2 + 0x18)));
    UIDropDown__SetSelected__005a30a0(pSMBLIGHTPROPType, *(int *)(lVar2 + 0x28) + -1);
    return;
  }
  return;
}

/* ======================================================================
 * LayerPropertiesActivate  (Ghidra `LayerPropertiesActivate` @ 004bbc10)
 * Signature: uint8_t __stdcall LayerPropertiesActivate(void * arg1)
 * Calls: `TileLevel__getLevelLayer`
 * Called by: `SMBEditorForms__Initialize`
 */
/* LayerPropertiesActivate(void*) */

void LayerPropertiesActivate(void *arg1)

{
  long lVar1;

  lVar1 = TileLevel__getLevelLayer(*(TileLevel **)(SuperMeatBoy + 0x40),
                                   *(uint32_t *)(SuperMeatBoyEditor + 0xd0));
  UITextField__SetDynamicText(
      pSMBLAYERPROPRed, &DAT_005c6660 /* R:5.184804318001823e-44f */,
      (ulong)(uint)(int)(DAT_005be898 /* R:255.0f */ * *(float *)(lVar1 + 0x400)));
  UITextField__SetDynamicText(
      pSMBLAYERPROPGreen, &DAT_005c6660 /* R:5.184804318001823e-44f */,
      (ulong)(uint)(int)(DAT_005be898 /* R:255.0f */ * *(float *)(lVar1 + 0x404)));
  UITextField__SetDynamicText(
      pSMBLAYERPROPBlue, &DAT_005c6660 /* R:5.184804318001823e-44f */,
      (ulong)(uint)(int)(DAT_005be898 /* R:255.0f */ * *(float *)(lVar1 + 0x408)));
  UITextField__SetDynamicText(
      pSMBLAYERPROPAlpha, &DAT_005c6660 /* R:5.184804318001823e-44f */,
      (ulong)(uint)(int)(DAT_005be898 /* R:255.0f */ * *(float *)(lVar1 + 0x40c)));
  UITextField__SetDynamicText(pSMBLAYERPROPLerp, (double)*(float *)(lVar1 + 0x410),
                              &DAT_005c48d0 /* R:5.184804318001823e-44f */);
  return;
}

/* ======================================================================
 * IsWarpIcon  (Ghidra `IsWarpIcon` @ 004d6f00)
 * Signature: uint8_t __stdcall IsWarpIcon(LevelIcon * arg1)
 * Calls: (none)
 * Called by: (none)
 */
/* IsWarpIcon(GSMBMenu__LevelIcon const*) */

bool IsWarpIcon(LevelIcon *arg1)

{
  bool bVar1;

  bVar1 = false;
  if (arg1 != (LevelIcon *)0x0) {
    bVar1 = ((byte)arg1[2] & 1) != 0;
  }
  return bVar1;
}

/* ======================================================================
 * GetTriangleOrientation  (Ghidra `GetTriangleOrientation` @ 004dafe0)
 * Signature: uint8_t __stdcall GetTriangleOrientation(GRIDBLOCK * arg1, Vector2 * arg2)
 * Calls: (none)
 * Called by: `BloodyTiles__AddBloodyTile`, `GetTriangleOrientation__004e5980`, `IsOnTrianglePart`, `MeatBoyCharactor__Update`, `SMBBloodExplosion__Update`, `SMBPalette__GetCollisionMask`, `SMBPalette__MarkCollisionOnBlock`
 */
/* GetTriangleOrientation(GRIDBLOCK const&, Vector2 const&) [clone .part.72] */

bool GetTriangleOrientation(GRIDBLOCK *arg1, Vector2 *arg2)

{
  byte bVar1;
  Matrix4x4 aMStack_88[64];
  uint local_48;
  float local_44;
  uint32_t local_38;
  uint32_t local_34;
  float local_28;
  float local_24;
  float local_18[4];

  local_18[0] = 0.0;
  local_44 = DAT_005be6e4 /* R:0.5f */ * TileLevel__fLevelGridWH;
  local_48 = DAT_005be6f0 /* R:u32=2147483648 */ ^ (uint)local_44;
  bVar1 = (byte)arg1[1] >> 4 & 3;
  if (bVar1 == 2) {
    local_18[0] = 3.1415927;
  } else if (bVar1 == 3) {
    local_18[0] = -1.5707964;
  } else if (bVar1 == 1) {
    local_18[0] = 1.5707964;
  }
  bVar1 = (byte)arg1[1] >> 6;
  local_38 = 0x3f800000;
  local_34 = 0x3f800000;
  if (bVar1 != 2) {
    if (bVar1 != 3) {
      if (bVar1 == 1) {
        local_38 = 0xbf800000;
      }
      goto LAB_004db063;
    }
    local_38 = 0xbf800000;
  }
  local_34 = 0xbf800000;
LAB_004db063:
  Matrix4x4__Transformation2DRot(aMStack_88, (Vector2 *)&local_38, local_18, arg2);
  Matrix4x4__TransformVector2((Vector2 *)&local_28, (Vector2 *)&local_48, aMStack_88, 1);
  if (local_24 < *(float *)(arg2 + 4)) {
    return *(float *)arg2 <= local_28 && local_28 != *(float *)arg2;
  }
  return (bool)((*(float *)arg2 <= local_28 && local_28 != *(float *)arg2) + '\x02');
}

/* ======================================================================
 * IsSwitch  (Ghidra `IsSwitch` @ 004df720)
 * Signature: uint8_t __stdcall IsSwitch(int arg1)
 * Calls: (none)
 * Called by: `SMBPalette__FindAnimatedObstacles`
 */
/* IsSwitch(int) */

bool IsSwitch(int arg1)

{
  bool bVar1;

  bVar1 = true;
  if ((((*(int *)(pPalProps + 0x3c) != arg1) && (*(int *)(pPalProps + 0x38) != arg1)) &&
       (*(int *)(pPalProps + 0x44) != arg1)) &&
      (*(int *)(pPalProps + 0x34) != arg1)) {
    bVar1 = arg1 == *(int *)(pPalProps + 0x40);
  }
  return bVar1;
}

/* ======================================================================
 * IsBreakableBlock  (Ghidra `IsBreakableBlock` @ 004df790)
 * Signature: uint8_t IsBreakableBlock(void)
 * Calls: (none)
 * Called by: `BloodyTiles__AddBloodyTile`
 */
bool IsBreakableBlock(int arg1)

{
  bool bVar1;

  bVar1 = true;
  if (((*(int *)(pPalProps + 4) != arg1) && (*(int *)(pPalProps + 0xc) != arg1)) &&
      (*(int *)(pPalProps + 0x28) != arg1)) {
    bVar1 = arg1 == *(int *)(pPalProps + 0x50);
  }
  return bVar1;
}

/* ======================================================================
 * IsBreakyBlock  (Ghidra `IsBreakyBlock` @ 004df7c0)
 * Signature: uint8_t __stdcall IsBreakyBlock(int arg1)
 * Calls: (none)
 * Called by: (none)
 */
/* IsBreakyBlock(int) */

bool IsBreakyBlock(int arg1)

{
  bool bVar1;

  bVar1 = true;
  if (*(int *)(pPalProps + 4) != arg1) {
    bVar1 = arg1 == *(int *)(pPalProps + 0x50);
  }
  return bVar1;
}

/* ======================================================================
 * IsLockBlock  (Ghidra `IsLockBlock` @ 004df7e0)
 * Signature: uint8_t __stdcall IsLockBlock(int arg1)
 * Calls: (none)
 * Called by: (none)
 */
/* IsLockBlock(int) */

bool IsLockBlock(int arg1)

{
  return *(int *)(pPalProps + 0xc) == arg1;
}

/* ======================================================================
 * IsSwitchBlock  (Ghidra `IsSwitchBlock` @ 004df800)
 * Signature: uint8_t __stdcall IsSwitchBlock(int arg1)
 * Calls: (none)
 * Called by: (none)
 */
/* IsSwitchBlock(int) */

bool IsSwitchBlock(int arg1)

{
  return *(int *)(pPalProps + 0x28) == arg1;
}

/* ======================================================================
 * IsMissileBlock  (Ghidra `IsMissileBlock` @ 004df820)
 * Signature: uint8_t __stdcall IsMissileBlock(int arg1)
 * Calls: (none)
 * Called by: (none)
 */
/* IsMissileBlock(int) */

bool IsMissileBlock(int arg1)

{
  return *(int *)(pPalProps + 0x50) == arg1;
}

/* ======================================================================
 * IsWayPointRotateable  (Ghidra `IsWayPointRotateable` @ 004e2020)
 * Signature: uint8_t IsWayPointRotateable(void)
 * Calls: (none)
 * Called by: `SetPieceWayPointGroup__Reset`, `SetPieceWayPointGroup__UpdateParent`
 */
bool IsWayPointRotateable(long arg1)

{
  byte bVar1;
  bool bVar2;

  bVar1 = *(byte *)(arg1 + 0x20);
  bVar2 = false;
  if (((uint)bVar1 != *(uint *)(pPalProps + 0xd0)) &&
      ((uint)bVar1 != *(uint *)(pPalProps + 0xd8))) {
    bVar2 = (uint)bVar1 != *(uint *)(pPalProps + 0xd4);
  }
  return bVar2;
}

/* ======================================================================
 * IsObstalceAllowedAnywhere  (Ghidra `IsObstalceAllowedAnywhere` @ 004e5620)
 * Signature: uint8_t __stdcall IsObstalceAllowedAnywhere(int arg1, SMBPaletteProps * arg2)
 * Calls: (none)
 * Called by: (none)
 */
/* IsObstalceAllowedAnywhere(int, SMBPaletteProps*) */

bool IsObstalceAllowedAnywhere(int arg1, SMBPaletteProps *arg2)

{
  bool bVar1;

  bVar1 = true;
  if (*(int *)(arg2 + 0x170) != arg1) {
    bVar1 = arg1 == *(int *)(arg2 + 0x16c);
  }
  return bVar1;
}

/* ======================================================================
 * IsObstacleLayer  (Ghidra `IsObstacleLayer` @ 004e5640)
 * Signature: uint8_t __stdcall IsObstacleLayer(RenderLayer * arg1)
 * Calls: `TileLevel__getLevelLayer`
 * Called by: (none)
 */
/* IsObstacleLayer(RenderLayer*) */

bool IsObstacleLayer(RenderLayer *arg1)

{
  TileLevel *pTVar1;
  RenderLayer *pRVar2;
  bool bVar3;

  bVar3 = false;
  pTVar1 = *(TileLevel **)(SuperMeatBoy + 0x40);
  pRVar2 = (RenderLayer *)TileLevel__getLevelLayer(pTVar1, 2);
  if (pRVar2 != arg1) {
    pRVar2 = (RenderLayer *)TileLevel__getLevelLayer(pTVar1, 4);
    if (arg1 != pRVar2) {
      pRVar2 = (RenderLayer *)TileLevel__getLevelLayer(pTVar1, 5);
      bVar3 = arg1 != pRVar2;
    }
  }
  return bVar3;
}

/* ======================================================================
 * GetTriangleOrientation__004e5980  (Ghidra `GetTriangleOrientation` @ 004e5980)
 * Signature: uint8_t __stdcall GetTriangleOrientation(GRIDBLOCK * arg1, Vector2 * arg2)
 * Calls: `GetTriangleOrientation`
 * Called by: (none)
 */
/* GetTriangleOrientation(GRIDBLOCK const&, Vector2 const&) */

uint64_t GetTriangleOrientation(GRIDBLOCK *arg1, Vector2 *arg2)

{
  uint64_t uVar1;

  if (((byte)arg1[2] & 0xc) != 8) {
    return 5;
  }
  uVar1 = GetTriangleOrientation(arg1, arg2);
  return uVar1;
}

/* ======================================================================
 * IsLaserHittingObject  (Ghidra `IsLaserHittingObject` @ 004e8cb0)
 * Signature: uint8_t __stdcall IsLaserHittingObject(SceneObject2D * arg1, Bounds * arg2, SMBLaser * arg3)
 * Calls: `Vector2__operator_assign`, `Vector2__operator_minus__005be180`, `Vector2__operator_plus__005be140`
 * Called by: `SMBPalette__ObstacleCollision`
 */
/* IsLaserHittingObject(SceneObject2D*, Bounds*, SMBLaser*) */

bool IsLaserHittingObject(SceneObject2D *arg1, Bounds *arg2, SMBLaser *arg3)

{
  Vector2 *pVVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float local_190;
  float local_18c;
  uint64_t local_188[2];
  uint64_t local_178[2];
  Vector2 local_168[16];
  Vector2 local_158[16];
  uint64_t local_148;
  uint64_t local_138;
  Vector2 local_128[16];
  Vector2 local_118[16];
  Vector2 local_108[16];
  Vector2 local_f8[16];
  Vector2 local_e8[16];
  float local_d8;
  uint32_t local_d4;
  Vector2 local_c8[16];
  Vector2 local_b8[16];
  float local_a8;
  uint32_t local_a4;
  Vector2 local_98[16];
  Vector2 local_88[16];
  uint32_t local_78;
  float local_74;
  Vector2 local_68[16];
  Vector2 local_58[16];
  uint32_t local_48;
  float local_44;
  Vector2 local_38[16];
  Vector2 local_28[16];

  if (((byte)*arg2 & 0xf) == 0) {
    local_18c = *(float *)(arg2 + 0x8c);
    local_190 = *(float *)(arg2 + 0x90);
  } else {
    local_190 = 0.0;
    local_18c = 0.0;
    if (((byte)*arg2 & 0xf) == 1) {
      local_190 = *(float *)(arg2 + 4);
      local_18c = local_190;
    }
  }
  pVVar1 = (Vector2 *)(arg1 + 0xa0);
  Vector2__operator_minus__005be180((Vector2 *)local_188, (Vector2 *)(arg3 + 0x20));
  local_178[0] = local_188[0];
  Vector2__Perpendicular((Vector2 *)local_188, (Vector2 *)local_188, 1);
  fVar3 = (float)Vector2__Length((Vector2 *)local_188);
  Vector2__operator_minus__005be180(local_158, pVVar1);
  Vector2__operator_assign(local_168, local_158);
  fVar4 = (float)Vector2__Length(local_168);
  bVar2 = false;
  if (fVar4 <= fVar3) {
    local_148 = *(uint64_t *)(arg1 + 0xa8);
    local_138 = *(uint64_t *)(arg1 + 0xa0);
    Vector2__operator_minus__005be180(local_128, (Vector2 *)&local_138);
    fVar3 = (float)Vector2__Dot(local_128, (Vector2 *)local_178);
    bVar2 = false;
    if (0.0 <= fVar3) {
      if (*(float *)(arg1 + 0xb8) <= 0.0) {
        if (*(float *)(arg1 + 0xb8) < 0.0) {
          local_138 = CONCAT44(local_138._4_4_, (float)local_138 - local_18c);
          local_148 = CONCAT44(local_148._4_4_, (float)local_148 - local_18c);
        }
      } else {
        local_138 = CONCAT44(local_138._4_4_, local_18c + (float)local_138);
        local_148 = CONCAT44(local_148._4_4_, local_18c + (float)local_148);
      }
      Vector2__operator_minus__005be180(local_118, (Vector2 *)&local_148);
      Vector2__operator_assign(local_168, local_118);
      fVar3 = (float)Vector2__Dot((Vector2 *)local_188, local_168);
      Vector2__operator_minus__005be180(local_108, (Vector2 *)&local_138);
      Vector2__operator_assign(local_168, local_108);
      fVar4 = (float)Vector2__Dot((Vector2 *)local_188, local_168);
      if (((fVar3 <= 0.0) || (bVar2 = true, 0.0 <= fVar4)) &&
          ((0.0 <= fVar3 || (bVar2 = true, fVar4 <= 0.0)))) {
        Vector2__operator_assign((Vector2 *)&local_138, pVVar1);
        Vector2__operator_assign((Vector2 *)&local_148, (Vector2 *)(arg1 + 0xa8));
        if (*(float *)(arg1 + 0xbc) <= 0.0) {
          if (*(float *)(arg1 + 0xbc) < 0.0) {
            local_138 = CONCAT44(local_138._4_4_ - local_190, (float)local_138);
            local_148 = CONCAT44(local_148._4_4_ - local_190, (float)local_148);
          }
        } else {
          local_138 = CONCAT44(local_190 + local_138._4_4_, (float)local_138);
          local_148 = CONCAT44(local_190 + local_148._4_4_, (float)local_148);
        }
        Vector2__operator_minus__005be180(local_f8, (Vector2 *)&local_148);
        Vector2__operator_assign(local_168, local_f8);
        fVar3 = (float)Vector2__Dot((Vector2 *)local_188, local_168);
        Vector2__operator_minus__005be180(local_e8, (Vector2 *)&local_138);
        Vector2__operator_assign(local_168, local_e8);
        fVar4 = (float)Vector2__Dot((Vector2 *)local_188, local_168);
        if (((fVar3 <= 0.0) || (bVar2 = true, 0.0 <= fVar4)) &&
            ((0.0 <= fVar3 || (bVar2 = true, fVar4 <= 0.0)))) {
          Vector2__operator_assign((Vector2 *)&local_148, pVVar1);
          local_d4 = 0;
          local_d8 = local_18c;
          Vector2__operator_plus__005be140(local_c8, (Vector2 *)&local_148);
          Vector2__operator_minus__005be180(local_b8, local_c8);
          Vector2__operator_assign(local_168, local_b8);
          fVar3 = (float)Vector2__Dot((Vector2 *)local_188, local_168);
          local_a4 = 0;
          local_a8 = local_18c;
          Vector2__operator_minus__005be180(local_98, (Vector2 *)&local_148);
          Vector2__operator_minus__005be180(local_88, local_98);
          Vector2__operator_assign(local_168, local_88);
          fVar4 = (float)Vector2__Dot((Vector2 *)local_188, local_168);
          if (((fVar3 <= 0.0) || (bVar2 = true, 0.0 <= fVar4)) &&
              ((0.0 <= fVar3 || (bVar2 = true, fVar4 <= 0.0)))) {
            local_78 = 0;
            local_74 = local_190;
            Vector2__operator_plus__005be140(local_68, (Vector2 *)&local_148);
            Vector2__operator_minus__005be180(local_58, local_68);
            Vector2__operator_assign(local_168, local_58);
            fVar3 = (float)Vector2__Dot((Vector2 *)local_188, local_168);
            local_48 = 0;
            local_44 = local_190;
            Vector2__operator_minus__005be180(local_38, (Vector2 *)&local_148);
            Vector2__operator_minus__005be180(local_28, local_38);
            Vector2__operator_assign(local_168, local_28);
            fVar4 = (float)Vector2__Dot((Vector2 *)local_188, local_168);
            if (((fVar3 <= 0.0) || (bVar2 = true, 0.0 <= fVar4)) &&
                (bVar2 = 0.0 < fVar4, 0.0 <= fVar3)) {
              bVar2 = false;
            }
          }
        }
      }
    }
  }
  return bVar2;
}

/* ======================================================================
 * IsBlockCollidable  (Ghidra `IsBlockCollidable` @ 004f06c0)
 * Signature: uint8_t __stdcall IsBlockCollidable(GRIDBLOCK * arg1, SceneObject2D * arg2)
 * Calls: (none)
 * Called by: (none)
 */
/* SMBPalette__IsBlockCollidable(GRIDBLOCK*, SceneObject2D*) */

bool SMBPalette__IsBlockCollidable(GRIDBLOCK *arg1, SceneObject2D *arg2)

{
  uint uVar1;
  int iVar2;
  SceneObject2D *pSVar3;
  int *piVar4;
  bool bVar5;
  long *plVar6;
  uint uVar7;
  short sVar8;

  uVar1 = *(uint *)(arg1 + 0x4278);
  uVar7 = (byte)arg2[1] & 0xf;
  if ((uVar7 == uVar1) || (bVar5 = true, *arg2 == (SceneObject2D)0x0)) {
    iVar2 = *(int *)(arg1 + 0x1a70);
    bVar5 = false;
    if ((iVar2 == -1) || (iVar2 == *(int *)(arg1 + 0x1a74))) {
      if ((uVar7 == uVar1) && (bVar5 = false, *(short *)(arg1 + 0x3e78) != 0)) {
        sVar8 = 0;
        pSVar3 = *(SceneObject2D **)(*(int **)(arg1 + 0x3e88) + 2);
        piVar4 = *(int **)(arg1 + 0x3e88);
        while (true) {
          if (arg2 == pSVar3) {
            if (*piVar4 == 0) {
              return true;
            }
            return *piVar4 == 1;
          }
          sVar8 = sVar8 + 1;
          if (sVar8 == *(short *)(arg1 + 0x3e78))
            break;
          pSVar3 = *(SceneObject2D **)(piVar4 + 0xe);
          piVar4 = piVar4 + 0xc;
        }
        return false;
      }
    } else if (uVar7 == uVar1) {
      if (*(short *)(arg1 + (long)iVar2 * 0x50 + 0x31f8) != 0) {
        plVar6 = *(long **)(arg1 + (long)iVar2 * 0x50 + 0x3208);
        sVar8 = 0;
        pSVar3 = (SceneObject2D *)*plVar6;
        while (arg2 != pSVar3) {
          plVar6 = plVar6 + 2;
          sVar8 = sVar8 + 1;
          if (sVar8 == *(short *)(arg1 + (long)iVar2 * 0x50 + 0x31f8)) {
            return false;
          }
          pSVar3 = (SceneObject2D *)*plVar6;
        }
        bVar5 = true;
        if ((int)plVar6[1] != 0) {
          return (int)plVar6[1] == 1;
        }
      }
    }
  }
  return bVar5;
}

/* ======================================================================
 * IsRequestedPaletteLoading  (Ghidra `IsRequestedPaletteLoading` @ 004f2bb0)
 * Signature: uint8_t __stdcall IsRequestedPaletteLoading(char * arg1)
 * Calls: `BaseResource__Release`, `GSMBMenu__IsInReplayMode`, `SyncEvent__Wait`
 * Called by: (none)
 */
/* SMBPaletteBackgroundLoader__IsRequestedPaletteLoading(char const*) */

uint64_t SMBPaletteBackgroundLoader__IsRequestedPaletteLoading(char *arg1)

{
  int iVar1;
  uint64_t uVar2;

  uVar2 = 0;
  iVar1 = GSMBMenu__IsInReplayMode(SMBMenu);
  if ((iVar1 == 0) && (*(int *)(SuperMeatBoy + 0x3a4) != 1)) {
    uVar2 = 1;
    iVar1 = std__string_compare(arg1 + 0x70);
    if (iVar1 != 0) {
      uVar2 = 0;
      SyncEvent__Wait((SyncEvent *)arg1);
      if (*(BaseResource **)(arg1 + 0x68) != (BaseResource *)0x0) {
        BaseResource__Release(*(BaseResource **)(arg1 + 0x68), 0);
        arg1[0x68] = '\0';
        arg1[0x69] = '\0';
        arg1[0x6a] = '\0';
        arg1[0x6b] = '\0';
        arg1[0x6c] = '\0';
        arg1[0x6d] = '\0';
        arg1[0x6e] = '\0';
        arg1[0x6f] = '\0';
      }
    }
  }
  return uVar2;
}

/* ======================================================================
 * Load  (Ghidra `Load` @ 004f7cc0)
 * Signature: uint8_t __stdcall Load(char * arg1, int arg2)
 * Calls: `BaseResource__Release`, `CloseThread`, `SMBPalette__SMBPalette__004f3ca0`, `SyncEvent__Set`, `SyncEvent__Wait`, `strlen`
 * Called by: (none)
 */
/* SMBPaletteBackgroundLoader__Load(char const*, int) */

void SMBPaletteBackgroundLoader__Load(char *arg1, int arg2)

{
  int iVar1;
  SMBPalette *this;
  uint32_t in_register_00000034;
  char *__s;

  __s = (char *)CONCAT44(in_register_00000034, arg2);
  if (*(int *)(SuperMeatBoy + 0x3a4) != 1) {
    iVar1 = std__string_compare(arg1 + 0x70);
    if ((iVar1 != 0) &&
        ((*(long *)(arg1 + 0x68) == 0 ||
          (iVar1 = std__string_compare((char *)(*(long *)(arg1 + 0x68) + 0x18)), iVar1 != 0)))) {
      if (*(long *)(arg1 + 0x78) != 0) {
        SyncEvent__Wait((SyncEvent *)arg1);
        CloseThread(*(THREADHANDLESTRUCT **)(arg1 + 0x78));
        arg1[0x78] = '\0';
        arg1[0x79] = '\0';
        arg1[0x7a] = '\0';
        arg1[0x7b] = '\0';
        arg1[0x7c] = '\0';
        arg1[0x7d] = '\0';
        arg1[0x7e] = '\0';
        arg1[0x7f] = '\0';
      }
      strlen(__s);
      std__string_assign(arg1 + 0x70, (ulong)__s);
      if (*(BaseResource **)(arg1 + 0x68) != (BaseResource *)0x0) {
        BaseResource__Release(*(BaseResource **)(arg1 + 0x68), 0);
        arg1[0x68] = '\0';
        arg1[0x69] = '\0';
        arg1[0x6a] = '\0';
        arg1[0x6b] = '\0';
        arg1[0x6c] = '\0';
        arg1[0x6d] = '\0';
        arg1[0x6e] = '\0';
        arg1[0x6f] = '\0';
      }
      this = BaseResource__operator_new(0x43d8, 0);
      /* try { // try from 004f7d93 to 004f7d97 has its CatchHandler @ 004f7db1 */
      SMBPalette__SMBPalette__004f3ca0(this, __s);
      *(SMBPalette **)(arg1 + 0x68) = this;
      SyncEvent__Set((SyncEvent *)arg1);
      arg1[0x78] = '\0';
      arg1[0x79] = '\0';
      arg1[0x7a] = '\0';
      arg1[0x7b] = '\0';
      arg1[0x7c] = '\0';
      arg1[0x7d] = '\0';
      arg1[0x7e] = '\0';
      arg1[0x7f] = '\0';
    }
  }
  return;
}

/* ======================================================================
 * IncrementCurrentInternetsRating  (Ghidra `IncrementCurrentInternetsRating` @ 00512670)
 * Signature: uint8_t __stdcall IncrementCurrentInternetsRating(tagButtonProps * arg1, void * arg2)
 * Calls: `SMBLevelPortal__IncrementCurrentRating`
 * Called by: `GSuperMeatBoy__ShowCurrentReplay`, `ShowCurrentReplay`
 */
/* IncrementCurrentInternetsRating(tagButtonProps const*, void*) */

void IncrementCurrentInternetsRating(tagButtonProps *arg1, void *arg2)

{
  if ((arg1 != (tagButtonProps *)0x0) && (*(int *)arg1 != 1)) {
    return;
  }
  SMBLevelPortal__IncrementCurrentRating(SuperMeatBoyPortal);
  return;
}

/* ======================================================================
 * LoadDeferredCharactor  (Ghidra `LoadDeferredCharactor` @ 00512f20)
 * Signature: uint8_t __stdcall LoadDeferredCharactor(int arg1)
 * Calls: `AutoLockSection__AutoLockSection`, `AutoLockSection__AutoLockSection__005b59d0`, `BloodyTiles__Reset`, `GSMBCharactor__CreateCharactor__0049c600`, `GSMBCharactor__DestroyCharactor__0049cbf0`, `GSuperMeatBoy__LoadDeferredCharactor`, `Loader__WaitAll`, `ResetSMBBoss`, `SMBAnimals__Reset`, `SMBPalette__ResetObstacles` (+2 more)
 * Called by: `GSuperMeatBoy__SetCurrentLevel`, `GSuperMeatBoy__ShowGame`, `GSuperMeatBoy__Update__00516690`
 */
/* GSuperMeatBoy__LoadDeferredCharactor(int) [clone .constprop.83] */

void GSuperMeatBoy__LoadDeferredCharactor(int arg1)

{
  uint64_t uVar1;
  uint32_t in_register_0000003c;
  long lVar2;
  AutoLockSection aAStack_18[16];

  lVar2 = CONCAT44(in_register_0000003c, arg1);
  AutoLockSection__AutoLockSection(aAStack_18,
                                   (CriticalSection *)RenderLayers__MasterRenderSection);
  if (*(MeatBoyCharactor **)(lVar2 + 0x48) != (MeatBoyCharactor *)0x0) {
    /* try { // try from 00512f45 to 00512fd4 has its CatchHandler @ 00512fff */
    GSMBCharactor__DestroyCharactor__0049cbf0(SMBCharactor, *(MeatBoyCharactor **)(lVar2 + 0x48));
    *(uint64_t *)(lVar2 + 0x48) = 0;
  }
  uVar1 = GSMBCharactor__CreateCharactor__0049c600(SMBCharactor, *(uint32_t *)(lVar2 + 0x398), 0);
  *(uint64_t *)(lVar2 + 0x48) = uVar1;
  Loader__WaitAll();
  if (*(int *)(lVar2 + 0x398) == 7) {
    bShowMeatNinjaMessage = 1;
  }
  ResetSMBBoss();
  if (*(long *)(lVar2 + 0x40) != 0) {
    SMBAnimals__Reset(*(SMBAnimals **)(pLevelPalette + 0x41e8));
    TileLevel__ResetLevel(*(TileLevel **)(lVar2 + 0x40));
    if (pLevelPalette != (SMBPalette *)0x0) {
      SMBPalette__ResetObstacles(pLevelPalette);
    }
    BloodyTiles__Reset((BloodyTiles *)(lVar2 + 0x50));
    (**(code **)(**(long **)(lVar2 + 0x48) + 0x68))();
    if (pReplay != (SMBReplay *)0x0) {
      SMBReplay__ResetAll(pReplay);
    }
  }
  *(uint32_t *)(lVar2 + 0x39c) = 0;
  AutoLockSection__AutoLockSection__005b59d0(aAStack_18);
  return;
}

/* ======================================================================
 * LoadControlConfig  (Ghidra `LoadControlConfig` @ 00514700)
 * Signature: uint8_t LoadControlConfig(void)
 * Calls: `FormatStringToKeyboardKey`, `PropertiesFile__FindPropertyBlock`, `PropertiesFile__FindPropertyVariable`, `PropertiesFile__PropertiesFile`, `PropertiesFile__PropertiesFile__005975b0`, `StringToInt`, `std__string_string`, `strlen`
 * Called by: `GSuperMeatBoy__Initialize__00516f60`
 */
/* WARNING: Removing unreachable block (ram,0x00514c28) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* LoadControlConfig() */

void LoadControlConfig(void)

{
  int *piVar1;
  bool bVar2;
  uint8_t *puVar3;
  int iVar4;
  long lVar5;
  PropertyVariable *pPVar6;
  PropertyVariable *pPVar7;
  bool bVar8;
  byte bVar9;
  PropertiesFile aPStack_f8[80];
  char *local_a8[2];
  PropertyBlock *local_98[2];
  PropertyVariable *local_88[2];
  PropertyVariable *local_78[2];
  PropertyVariable *local_68[2];
  PropertyBlock *local_58[2];
  PropertyVariable *local_48[2];
  PropertyVariable *local_38[2];
  PropertyVariable *local_28;
  allocator local_1a[10];

  bVar9 = 0;
  std__string_string((string *)local_a8, "buttonmap.cfg", local_1a);
  puVar3 = GUserDataPath;
  strlen(GUserDataPath);
  /* try { // try from 0051473a to 005147be has its CatchHandler @ 00514c06 */
  std__string_assign((char *)local_a8, (ulong)puVar3);
  std__string_append((char *)local_a8, 0x5c8e27);
  iVar4 = File__Exists(local_a8[0], 0);
  if (iVar4 == 0) {
    std__string_assign((char *)local_a8, 0x5c8e27);
  }
  iVar4 = File__Exists(local_a8[0], 0);
  if (iVar4 == 1) {
    PropertiesFile__PropertiesFile__005975b0(aPStack_f8, local_a8[0], 0);
    /* try { // try from 005147ce to 00514b12 has its CatchHandler @ 00514c1b */
    PropertiesFile__FindPropertyBlock(aPStack_f8, local_98, "gamepad", 0);
    if (local_98[0] == (PropertyBlock *)0x0) {
      bVar2 = false;
    } else {
      local_88[0] = (PropertyVariable *)0x0;
      local_78[0] = (PropertyVariable *)0x0;
      local_68[0] = (PropertyVariable *)0x0;
      PropertiesFile__FindPropertyVariable(aPStack_f8, local_88, local_98[0], "jump");
      PropertiesFile__FindPropertyVariable(aPStack_f8, local_78, local_98[0], "special");
      PropertiesFile__FindPropertyVariable(aPStack_f8, local_68, local_98[0], "useanalog");
      if (local_88[0] == (PropertyVariable *)0x0) {
        bVar2 = true;
      } else {
        if ((local_78[0] == (PropertyVariable *)0x0) ||
            (bVar2 = false, local_68[0] == (PropertyVariable *)0x0)) {
          bVar2 = true;
        }
        pPVar6 = local_88[0] + 0x20;
        iVar4 = StringToInt(pPVar6);
        if (iVar4 < 2) {
          buttonJump = 0;
        } else {
          iVar4 = StringToInt(pPVar6);
          iVar4 = iVar4 + -1;
          buttonJump = 0;
          if ((-1 < iVar4) && (buttonJump = 0xb, iVar4 < 0xc)) {
            buttonJump = iVar4;
          }
        }
      }
      if (local_78[0] != (PropertyVariable *)0x0) {
        pPVar6 = local_78[0] + 0x20;
        iVar4 = StringToInt(pPVar6);
        if (iVar4 < 2) {
          buttonSpecial = 0;
        } else {
          iVar4 = StringToInt(pPVar6);
          iVar4 = iVar4 + -1;
          buttonSpecial = 0;
          if ((-1 < iVar4) && (buttonSpecial = 0xb, iVar4 < 0xc)) {
            buttonSpecial = iVar4;
          }
        }
      }
      if (local_68[0] != (PropertyVariable *)0x0) {
        bVar8 = local_68[0] + 0x20 == (PropertyVariable *)0x0;
        lVar5 = 5;
        pPVar6 = local_68[0] + 0x20;
        pPVar7 = (PropertyVariable *)&DAT_005c8e4f /* R:"true" */;
        do {
          if (lVar5 == 0)
            break;
          lVar5 = lVar5 + -1;
          bVar8 = *pPVar6 == *pPVar7;
          pPVar6 = pPVar6 + (ulong)bVar9 * -2 + 1;
          pPVar7 = pPVar7 + (ulong)bVar9 * -2 + 1;
        } while (bVar8);
        bUseLeftJoyAsPOV = (uint)bVar8;
      }
    }
    PropertiesFile__FindPropertyBlock(aPStack_f8, local_58, "keyboard", 0);
    if (local_58[0] != (PropertyBlock *)0x0) {
      local_68[0] = (PropertyVariable *)0x0;
      local_78[0] = (PropertyVariable *)0x0;
      local_88[0] = (PropertyVariable *)0x0;
      local_48[0] = (PropertyVariable *)0x0;
      local_38[0] = (PropertyVariable *)0x0;
      local_28 = (PropertyVariable *)0x0;
      PropertiesFile__FindPropertyVariable(aPStack_f8, local_68, local_58[0], "up");
      PropertiesFile__FindPropertyVariable(aPStack_f8, local_78, local_58[0], "down");
      PropertiesFile__FindPropertyVariable(aPStack_f8, local_88, local_58[0], "right");
      PropertiesFile__FindPropertyVariable(aPStack_f8, local_48, local_58[0], "left");
      PropertiesFile__FindPropertyVariable(aPStack_f8, local_38, local_58[0], "jump");
      PropertiesFile__FindPropertyVariable(aPStack_f8, &local_28, local_58[0], "special");
      if ((((local_38[0] == (PropertyVariable *)0x0) || (local_28 == (PropertyVariable *)0x0)) ||
           (local_68[0] == (PropertyVariable *)0x0)) ||
          (((local_78[0] == (PropertyVariable *)0x0 || (local_88[0] == (PropertyVariable *)0x0)) ||
            ((local_48[0] == (PropertyVariable *)0x0 || (bVar2)))))) {
        keyUp = 0x7f;
        keyDown = 0x1f;
        keyRight = 0x6d;
        keyLeft = 0x41;
        keySpecial = 0x43;
        keyJump = 0x76;
        buttonJump = 0;
        buttonSpecial = 1;
        /* try { // try from 00514ba5 to 00514ba9 has its CatchHandler @ 00514c1b */
        Error__ThrowNonFatalError(
            "The Button Config File is Invalid\nCopy buttonmap.cfg.bak in the install directory "
            "and rename it to buttonmap.cfg\nControls are now being set to Defaults");
      } else {
        keyUp = FormatStringToKeyboardKey((char *)(local_68[0] + 0x20));
        if (local_78[0] != (PropertyVariable *)0x0) {
          keyDown = FormatStringToKeyboardKey((char *)(local_78[0] + 0x20));
        }
        if (local_88[0] != (PropertyVariable *)0x0) {
          keyRight = FormatStringToKeyboardKey((char *)(local_88[0] + 0x20));
        }
        if (local_48[0] != (PropertyVariable *)0x0) {
          keyLeft = FormatStringToKeyboardKey((char *)(local_48[0] + 0x20));
        }
        if (local_38[0] != (PropertyVariable *)0x0) {
          keyJump = FormatStringToKeyboardKey((char *)(local_38[0] + 0x20));
        }
        if (local_28 != (PropertyVariable *)0x0) {
          keySpecial = FormatStringToKeyboardKey((char *)(local_28 + 0x20));
        }
      }
    }
    /* try { // try from 00514b1c to 00514b20 has its CatchHandler @ 00514c06 */
    PropertiesFile__PropertiesFile(aPStack_f8);
  }
  if ((allocator *)(local_a8[0] + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage) {
    LOCK();
    piVar1 = (int *)(local_a8[0] + -8);
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 < 1) {
      std__string_Rep_M_destroy((allocator *)(local_a8[0] + -0x18));
    }
  }
  return;
}

/* ======================================================================
 * JumpPress__00518660  (Ghidra `JumpPress` @ 00518660)
 * Signature: uint8_t __stdcall JumpPress(tagButtonProps * arg1, void * arg2)
 * Calls: (none)
 * Called by: (none)
 */
/* TheKid__JumpPress(tagButtonProps const*, void*) */

void TheKid__JumpPress(tagButtonProps *arg1, void *arg2)

{
  if (*(int *)arg2 == 1) {
    arg1[0x7d8] = (tagButtonProps)((byte)arg1[0x7d8] | 0xa0);
    return;
  }
  if (*(int *)arg2 != 2) {
    arg1[0x7d8] = (tagButtonProps)((byte)arg1[0x7d8] & 0xdf | 0x80);
    return;
  }
  arg1[0x7d8] = (tagButtonProps)((byte)arg1[0x7d8] & 0x7f | 0x20);
  return;
}

/* ======================================================================
 * JumpPress__005193e0  (Ghidra `JumpPress` @ 005193e0)
 * Signature: uint8_t __stdcall JumpPress(tagButtonProps * arg1, void * arg2)
 * Calls: (none)
 * Called by: (none)
 */
/* VVVVVV__JumpPress(tagButtonProps const*, void*) */

void VVVVVV__JumpPress(tagButtonProps *arg1, void *arg2)

{
  if (*(int *)arg2 == 1) {
    arg1[0x7d8] = (tagButtonProps)((byte)arg1[0x7d8] | 0xa0);
    return;
  }
  if (*(int *)arg2 != 2) {
    arg1[0x7d8] = (tagButtonProps)((byte)arg1[0x7d8] & 0xdf | 0x80);
    return;
  }
  arg1[0x7d8] = (tagButtonProps)((byte)arg1[0x7d8] & 0x7f | 0x20);
  return;
}

/* ======================================================================
 * IsEntryTouchingBounds  (Ghidra `IsEntryTouchingBounds` @ 00571410)
 * Signature: uint8_t __stdcall IsEntryTouchingBounds(float arg1, Bounds * arg2, tagInstanceBoundsType arg3, Matrix4x4 * arg4)
 * Calls: (none)
 * Called by: (none)
 */
/* FlashTextField__IsEntryTouchingBounds(float, Bounds const*, tagInstanceBoundsType, Matrix4x4*) */

uint64_t FlashTextField__IsEntryTouchingBounds(void)

{
  return 0;
}

/* ======================================================================
 * IsEntryTouchingBounds__00571480  (Ghidra `IsEntryTouchingBounds` @ 00571480)
 * Signature: uint8_t __stdcall IsEntryTouchingBounds(float arg1, Bounds * arg2, tagInstanceBoundsType arg3, Matrix4x4 * arg4)
 * Calls: `BoundingSquare__BoundingSquare`, `DrawBoundingShape`, `IsBoundsTouchingBounds`
 * Called by: (none)
 */
/* FlashSymbol__IsEntryTouchingBounds(float, Bounds const*, tagInstanceBoundsType, Matrix4x4*) */

uint64_t FlashSymbol__IsEntryTouchingBounds(long arg2, Bounds *param_2_00, int arg3,
                                            Matrix4x4 *arg4)

{
  uint64_t uVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  BoundingSquare local_1d8[160];
  BoundingSquare local_138[160];
  Bounds local_98[4];
  uint local_94;
  uint64_t local_90;
  float local_88;
  float local_84;
  uint64_t local_78[2];
  float local_68;
  float local_64;
  Vector2 local_58[16];
  Vector2 local_48[4];
  float local_44;
  uint local_38;
  uint local_34;
  uint local_28;
  uint local_24;

  if (arg3 == 1) {
    Matrix4x4__Get2DScale((Vector2 *)&local_88, arg4);
    Matrix4x4__Get2DPos((Vector2 *)local_78, arg4);
    fVar2 = *(float *)(arg2 + 0x18);
    if (*(float *)(arg2 + 0x18) <= *(float *)(arg2 + 0x14)) {
      fVar2 = *(float *)(arg2 + 0x14);
    }
    if (local_84 <= local_88) {
      local_84 = local_88;
    }
    local_98[0] = (Bounds)0x11;
    local_90 = local_78[0];
    local_94 = (uint)(fVar2 * local_84) & DAT_005be880 /* R:u32=2147483647 */;
    if (bDrawInstanceBounds == 1) {
      DrawBoundingShape(local_98, (ColorTemplate *)::cRed);
    }
    uVar1 = IsBoundsTouchingBounds(local_98, param_2_00);
  } else {
    uVar1 = 0;
    if (arg3 == 2) {
      Matrix4x4__Get2DPos(local_58, arg4);
      Matrix4x4__Get2DSkew(local_48, arg4);
      Matrix4x4__Get2DScale((Vector2 *)&local_68, arg4);
      uVar4 = (uint)(local_68 * *(float *)(arg2 + 0x14) * DAT_005be6e4 /* R:0.5f */) &
              DAT_005be880 /* R:u32=2147483647 */;
      uVar3 = (uint)(local_64 * *(float *)(arg2 + 0x18) * DAT_005be6e4 /* R:0.5f */) &
              DAT_005be880 /* R:u32=2147483647 */;
      local_38 = uVar4;
      local_34 = uVar3;
      BoundingSquare__BoundingSquare(local_1d8, local_58,
                                     (float)((uint)local_44 ^ DAT_005be6f0 /* R:u32=2147483648 */),
                                     (Vector2 *)&local_38);
      if (bDrawInstanceBounds == 1) {
        local_28 = uVar4;
        local_24 = uVar3;
        BoundingSquare__BoundingSquare(local_138, local_58, local_44, (Vector2 *)&local_28);
        DrawBoundingShape((Bounds *)local_138, (ColorTemplate *)::cOrange);
      }
      uVar1 = IsBoundsTouchingBounds((Bounds *)local_1d8, param_2_00);
    }
  }
  return uVar1;
}

/* ======================================================================
 * IsEntryTouchingBounds__00574ec0  (Ghidra `IsEntryTouchingBounds` @ 00574ec0)
 * Signature: uint8_t __stdcall IsEntryTouchingBounds(float arg1, Bounds * arg2, tagInstanceBoundsType arg3, Matrix4x4 * arg4)
 * Calls: `FlashTimeline__IsEntryTouchingBounds`
 * Called by: (none)
 */
/* FlashMovieClip__IsEntryTouchingBounds(float, Bounds const*, tagInstanceBoundsType, Matrix4x4*) */

void FlashMovieClip__IsEntryTouchingBounds(long arg2)

{
  FlashTimeline__IsEntryTouchingBounds((FlashTimeline *)(arg2 + 0x18));
  return;
}

/* ======================================================================
 * IsPointWithinBoundingSquare  (Ghidra `IsPointWithinBoundingSquare` @ 0057e500)
 * Signature: uint8_t __stdcall IsPointWithinBoundingSquare(BoundingSquare * arg1, Vector2 * arg2)
 * Calls: `ClosestPointToBoundingSquare`, `Vector2__operator_minus__005be180`
 * Called by: `IsAnimalVisible`, `MeatBoyCharactor__Update`, `SMBAnimal__Update`, `SMBBoss__WayPointCollision__0048da90`, `SMBPalette__PlatformDeath`, `SelectAnimal`
 */
/* IsPointWithinBoundingSquare(BoundingSquare const*, Vector2 const&) */

bool IsPointWithinBoundingSquare(BoundingSquare *arg1, Vector2 *arg2)

{
  float fVar1;
  Vector2 aVStack_28[16];
  Vector2 local_18[16];

  ClosestPointToBoundingSquare(arg2, arg1, aVStack_28);
  Vector2__operator_minus__005be180(local_18, aVStack_28);
  fVar1 = (float)Vector2__LengthSq(local_18);
  return fVar1 < DAT_005dbd04 /* R:9.999999747378752e-05f */;
}

/* ======================================================================
 * IsPointWithinBoundingCircle  (Ghidra `IsPointWithinBoundingCircle` @ 0057e550)
 * Signature: uint8_t __stdcall IsPointWithinBoundingCircle(BoundingCircle * arg1, Vector2 * arg2)
 * Calls: (none)
 * Called by: (none)
 */
/* IsPointWithinBoundingCircle(BoundingCircle const*, Vector2 const&) */

uint64_t IsPointWithinBoundingCircle(BoundingCircle *arg1, Vector2 *arg2)

{
  return 0;
}

/* ======================================================================
 * IsPointWithinBoundingCube  (Ghidra `IsPointWithinBoundingCube` @ 0057e560)
 * Signature: uint8_t __stdcall IsPointWithinBoundingCube(BoundingBox * arg1, FPUVector * arg2)
 * Calls: `ClosestPointToBoundingBox`
 * Called by: (none)
 */
/* IsPointWithinBoundingCube(BoundingBox const*, FPUVector const&) */

bool IsPointWithinBoundingCube(BoundingBox *arg1, FPUVector *arg2)

{
  float local_18;
  float local_14;
  float local_10;
  float local_c;

  local_18 = 0.0;
  local_14 = 0.0;
  local_10 = 0.0;
  local_c = 0.0;
  ClosestPointToBoundingBox(arg2, arg1, (FPUVector *)&local_18);
  return (local_14 - *(float *)(arg2 + 4)) * (local_14 - *(float *)(arg2 + 4)) +
             (local_18 - *(float *)arg2) * (local_18 - *(float *)arg2) +
             (local_10 - *(float *)(arg2 + 8)) * (local_10 - *(float *)(arg2 + 8)) +
             (local_c - *(float *)(arg2 + 0xc)) * (local_c - *(float *)(arg2 + 0xc)) <
         DAT_005dbd04 /* R:9.999999747378752e-05f */;
}

/* ======================================================================
 * IsSquareTouchingSquare  (Ghidra `IsSquareTouchingSquare` @ 0057e750)
 * Signature: uint8_t __stdcall IsSquareTouchingSquare(BoundingSquare * arg1, BoundingSquare * arg2, float * arg3, float * arg4)
 * Calls: `ClosestPointToBoundingSquareDistSq`, `Vector2__operator_minus__005be180`
 * Called by: (none)
 */
/* IsSquareTouchingSquare(BoundingSquare const*, BoundingSquare const*, float&, float&) */

bool IsSquareTouchingSquare(BoundingSquare *arg1, BoundingSquare *arg2, float *arg3, float *arg4)

{
  float fVar1;
  Vector2 aVStack_58[16];
  Vector2 local_48[16];
  Vector2 local_38[24];

  Matrix4x4__Get2DPos(aVStack_58, (Matrix4x4 *)(arg1 + 0x44));
  Matrix4x4__Get2DPos(local_48, (Matrix4x4 *)(arg2 + 0x44));
  Vector2__operator_minus__005be180(local_38, aVStack_58);
  fVar1 = (float)ClosestPointToBoundingSquareDistSq(aVStack_58, arg2);
  *arg3 = fVar1;
  fVar1 = (float)ClosestPointToBoundingSquareDistSq(local_48, arg1);
  *arg4 = fVar1;
  fVar1 = (float)Vector2__LengthSq(local_38);
  return *arg4 + *arg3 <= fVar1;
}

/* ======================================================================
 * IsSquareTouchingCircle  (Ghidra `IsSquareTouchingCircle` @ 0057e800)
 * Signature: uint8_t __stdcall IsSquareTouchingCircle(BoundingSquare * arg1, BoundingCircle * arg2)
 * Calls: `ClosestPointToBoundingSquare`, `Vector2__operator_minus__005be180`
 * Called by: (none)
 */
/* IsSquareTouchingCircle(BoundingSquare const*, BoundingCircle const*) */

bool IsSquareTouchingCircle(BoundingSquare *arg1, BoundingCircle *arg2)

{
  float fVar1;
  Vector2 aVStack_38[16];
  Vector2 local_28[24];

  ClosestPointToBoundingSquare((Vector2 *)(arg2 + 8), arg1, aVStack_38);
  Vector2__operator_minus__005be180(local_28, aVStack_38);
  fVar1 = (float)Vector2__LengthSq(local_28);
  return fVar1 <= *(float *)(arg2 + 4) * *(float *)(arg2 + 4);
}

/* ======================================================================
 * IsPointWithinBoundingSphere  (Ghidra `IsPointWithinBoundingSphere` @ 0057ea00)
 * Signature: uint8_t __stdcall IsPointWithinBoundingSphere(BoundingSphere * arg1, FPUVector * arg2)
 * Calls: (none)
 * Called by: (none)
 */
/* IsPointWithinBoundingSphere(BoundingSphere const*, FPUVector const&) */

uint64_t IsPointWithinBoundingSphere(BoundingSphere *arg1, FPUVector *arg2)

{
  return 0;
}

/* ======================================================================
 * IsCircleTouchingCircle  (Ghidra `IsCircleTouchingCircle` @ 0057ea10)
 * Signature: uint8_t __stdcall IsCircleTouchingCircle(BoundingCircle * arg1, BoundingCircle * arg2)
 * Calls: `Vector2__operator_minus__005be180`
 * Called by: (none)
 */
/* IsCircleTouchingCircle(BoundingCircle const*, BoundingCircle const*) */

bool IsCircleTouchingCircle(BoundingCircle *arg1, BoundingCircle *arg2)

{
  float fVar1;
  Vector2 aVStack_28[24];

  Vector2__operator_minus__005be180(aVStack_28, (Vector2 *)(arg1 + 8));
  fVar1 = (float)Vector2__LengthSq(aVStack_28);
  return fVar1 <=
         *(float *)(arg2 + 4) * *(float *)(arg2 + 4) + *(float *)(arg1 + 4) * *(float *)(arg1 + 4);
}

/* ======================================================================
 * IsVector3WithinBounds  (Ghidra `IsVector3WithinBounds` @ 0057ea60)
 * Signature: uint8_t __stdcall IsVector3WithinBounds(Bounds * arg1, FPUVector * arg2)
 * Calls: `ClosestPointToBoundingBox`
 * Called by: (none)
 */
/* IsVector3WithinBounds(Bounds const*, FPUVector const&) */

bool IsVector3WithinBounds(Bounds *arg1, FPUVector *arg2)

{
  BoundingBox *pBVar1;
  BoundingBox *pBVar2;
  BoundingBox *pBVar3;
  BoundingBox *pBVar4;
  BoundingBox *pBVar5;
  BoundingBox *pBVar6;
  BoundingBox *pBVar7;
  BoundingBox *pBVar8;
  bool bVar9;
  int iVar10;
  byte bVar11;
  ushort uVar12;
  ushort uVar13;
  ushort uVar14;
  ushort local_fe;
  ushort local_fa;
  ushort local_d0;
  ushort local_ce;
  ushort local_cc;
  ushort local_ca;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;

  bVar11 = (byte)*arg1 & 0xf;
  if (bVar11 == 2) {
    local_c8 = 0.0;
    local_c4 = 0.0;
    local_c0 = 0.0;
    local_bc = 0.0;
    ClosestPointToBoundingBox(arg2, (BoundingBox *)arg1, (FPUVector *)&local_c8);
    bVar9 = (local_c4 - *(float *)(arg2 + 4)) * (local_c4 - *(float *)(arg2 + 4)) +
                (local_c8 - *(float *)arg2) * (local_c8 - *(float *)arg2) +
                (local_c0 - *(float *)(arg2 + 8)) * (local_c0 - *(float *)(arg2 + 8)) +
                (local_bc - *(float *)(arg2 + 0xc)) * (local_bc - *(float *)(arg2 + 0xc)) <
            DAT_005dbd04 /* R:9.999999747378752e-05f */;
  } else {
    bVar9 = false;
    if (((bVar11 != 3) && (bVar11 == 5)) && (uVar12 = *(ushort *)(arg1 + 0x30), uVar12 != 0)) {
      local_ce = 0;
      do {
        pBVar1 = *(BoundingBox **)(*(long *)(arg1 + 0x40) + (ulong)local_ce * 8);
        bVar11 = (byte)*pBVar1 & 0xf;
        if (bVar11 == 2) {
          local_b8 = 0.0;
          local_b4 = 0.0;
          local_b0 = 0.0;
          local_ac = 0.0;
          ClosestPointToBoundingBox(arg2, pBVar1, (FPUVector *)&local_b8);
          if ((local_b4 - *(float *)(arg2 + 4)) * (local_b4 - *(float *)(arg2 + 4)) +
                  (local_b8 - *(float *)arg2) * (local_b8 - *(float *)arg2) +
                  (local_b0 - *(float *)(arg2 + 8)) * (local_b0 - *(float *)(arg2 + 8)) +
                  (local_ac - *(float *)(arg2 + 0xc)) * (local_ac - *(float *)(arg2 + 0xc)) <
              DAT_005dbd04 /* R:9.999999747378752e-05f */) {
            return true;
          }
        LAB_0057f434:
          uVar12 = *(ushort *)(arg1 + 0x30);
        } else if (((bVar11 != 3) && (bVar11 == 5)) &&
                   (uVar13 = *(ushort *)(pBVar1 + 0x30), uVar13 != 0)) {
          local_cc = 0;
          do {
            pBVar2 = *(BoundingBox **)(*(long *)(pBVar1 + 0x40) + (ulong)local_cc * 8);
            bVar11 = (byte)*pBVar2 & 0xf;
            if (bVar11 == 2) {
              local_a8 = 0.0;
              local_a4 = 0.0;
              local_a0 = 0.0;
              local_9c = 0.0;
              ClosestPointToBoundingBox(arg2, pBVar2, (FPUVector *)&local_a8);
              if ((local_a4 - *(float *)(arg2 + 4)) * (local_a4 - *(float *)(arg2 + 4)) +
                      (local_a8 - *(float *)arg2) * (local_a8 - *(float *)arg2) +
                      (local_a0 - *(float *)(arg2 + 8)) * (local_a0 - *(float *)(arg2 + 8)) +
                      (local_9c - *(float *)(arg2 + 0xc)) * (local_9c - *(float *)(arg2 + 0xc)) <
                  DAT_005dbd04 /* R:9.999999747378752e-05f */) {
                return true;
              }
              uVar13 = *(ushort *)(pBVar1 + 0x30);
            } else if (((bVar11 != 3) && (bVar11 == 5)) &&
                       (uVar12 = *(ushort *)(pBVar2 + 0x30), uVar12 != 0)) {
              local_ca = 0;
              do {
                while (true) {
                  pBVar3 = *(BoundingBox **)(*(long *)(pBVar2 + 0x40) + (ulong)local_ca * 8);
                  bVar11 = (byte)*pBVar3 & 0xf;
                  if (bVar11 != 2)
                    break;
                  local_98 = 0.0;
                  local_94 = 0.0;
                  local_90 = 0.0;
                  local_8c = 0.0;
                  ClosestPointToBoundingBox(arg2, pBVar3, (FPUVector *)&local_98);
                  if ((local_94 - *(float *)(arg2 + 4)) * (local_94 - *(float *)(arg2 + 4)) +
                          (local_98 - *(float *)arg2) * (local_98 - *(float *)arg2) +
                          (local_90 - *(float *)(arg2 + 8)) * (local_90 - *(float *)(arg2 + 8)) +
                          (local_8c - *(float *)(arg2 + 0xc)) *
                              (local_8c - *(float *)(arg2 + 0xc)) <
                      DAT_005dbd04 /* R:9.999999747378752e-05f */) {
                    return true;
                  }
                  uVar12 = *(ushort *)(pBVar2 + 0x30);
                LAB_0057ee29:
                  local_ca = local_ca + 1;
                  if (uVar12 <= local_ca)
                    goto LAB_0057ee3a;
                }
                if (((bVar11 != 3) && (bVar11 == 5)) &&
                    (uVar13 = *(ushort *)(pBVar3 + 0x30), uVar13 != 0)) {
                  local_d0 = 0;
                  do {
                    while (true) {
                      pBVar4 = *(BoundingBox **)(*(long *)(pBVar3 + 0x40) + (ulong)local_d0 * 8);
                      bVar11 = (byte)*pBVar4 & 0xf;
                      if (bVar11 != 2)
                        break;
                      local_88 = 0.0;
                      local_84 = 0.0;
                      local_80 = 0.0;
                      local_7c = 0.0;
                      ClosestPointToBoundingBox(arg2, pBVar4, (FPUVector *)&local_88);
                      if ((local_84 - *(float *)(arg2 + 4)) * (local_84 - *(float *)(arg2 + 4)) +
                              (local_88 - *(float *)arg2) * (local_88 - *(float *)arg2) +
                              (local_80 - *(float *)(arg2 + 8)) *
                                  (local_80 - *(float *)(arg2 + 8)) +
                              (local_7c - *(float *)(arg2 + 0xc)) *
                                  (local_7c - *(float *)(arg2 + 0xc)) <
                          DAT_005dbd04 /* R:9.999999747378752e-05f */) {
                        return true;
                      }
                      uVar13 = *(ushort *)(pBVar3 + 0x30);
                    LAB_0057ee0f:
                      local_d0 = local_d0 + 1;
                      if (uVar13 <= local_d0)
                        goto LAB_0057ee20;
                    }
                    if (((bVar11 != 3) && (bVar11 == 5)) &&
                        (uVar12 = *(ushort *)(pBVar4 + 0x30), uVar12 != 0)) {
                      local_fa = 0;
                      do {
                        while (true) {
                          pBVar5 =
                              *(BoundingBox **)(*(long *)(pBVar4 + 0x40) + (ulong)local_fa * 8);
                          bVar11 = (byte)*pBVar5 & 0xf;
                          if (bVar11 != 2)
                            break;
                          local_78 = 0.0;
                          local_74 = 0.0;
                          local_70 = 0.0;
                          local_6c = 0.0;
                          ClosestPointToBoundingBox(arg2, pBVar5, (FPUVector *)&local_78);
                          if ((local_74 - *(float *)(arg2 + 4)) *
                                      (local_74 - *(float *)(arg2 + 4)) +
                                  (local_78 - *(float *)arg2) * (local_78 - *(float *)arg2) +
                                  (local_70 - *(float *)(arg2 + 8)) *
                                      (local_70 - *(float *)(arg2 + 8)) +
                                  (local_6c - *(float *)(arg2 + 0xc)) *
                                      (local_6c - *(float *)(arg2 + 0xc)) <
                              DAT_005dbd04 /* R:9.999999747378752e-05f */) {
                            return true;
                          }
                          uVar12 = *(ushort *)(pBVar4 + 0x30);
                        LAB_0057edf5:
                          local_fa = local_fa + 1;
                          if (uVar12 <= local_fa)
                            goto LAB_0057ee06;
                        }
                        if (((bVar11 != 3) && (bVar11 == 5)) &&
                            (uVar13 = *(ushort *)(pBVar5 + 0x30), uVar13 != 0)) {
                          local_fe = 0;
                          do {
                            while (true) {
                              pBVar6 =
                                  *(BoundingBox **)(*(long *)(pBVar5 + 0x40) + (ulong)local_fe * 8);
                              bVar11 = (byte)*pBVar6 & 0xf;
                              if (bVar11 != 2)
                                break;
                              local_68 = 0.0;
                              local_64 = 0.0;
                              local_60 = 0.0;
                              local_5c = 0.0;
                              ClosestPointToBoundingBox(arg2, pBVar6, (FPUVector *)&local_68);
                              if ((local_64 - *(float *)(arg2 + 4)) *
                                          (local_64 - *(float *)(arg2 + 4)) +
                                      (local_68 - *(float *)arg2) * (local_68 - *(float *)arg2) +
                                      (local_60 - *(float *)(arg2 + 8)) *
                                          (local_60 - *(float *)(arg2 + 8)) +
                                      (local_5c - *(float *)(arg2 + 0xc)) *
                                          (local_5c - *(float *)(arg2 + 0xc)) <
                                  DAT_005dbd04 /* R:9.999999747378752e-05f */) {
                                return true;
                              }
                              uVar13 = *(ushort *)(pBVar5 + 0x30);
                            LAB_0057eddb:
                              local_fe = local_fe + 1;
                              if (uVar13 <= local_fe)
                                goto LAB_0057edec;
                            }
                            if (((bVar11 != 3) && (bVar11 == 5)) &&
                                (uVar12 = *(ushort *)(pBVar6 + 0x30), uVar12 != 0)) {
                              uVar13 = 0;
                              do {
                                while (true) {
                                  pBVar7 = *(BoundingBox **)(*(long *)(pBVar6 + 0x40) +
                                                             (ulong)uVar13 * 8);
                                  bVar11 = (byte)*pBVar7 & 0xf;
                                  if (bVar11 != 2)
                                    break;
                                  local_58 = 0.0;
                                  local_54 = 0.0;
                                  local_50 = 0.0;
                                  local_4c = 0.0;
                                  ClosestPointToBoundingBox(arg2, pBVar7, (FPUVector *)&local_58);
                                  if ((local_54 - *(float *)(arg2 + 4)) *
                                              (local_54 - *(float *)(arg2 + 4)) +
                                          (local_58 - *(float *)arg2) *
                                              (local_58 - *(float *)arg2) +
                                          (local_50 - *(float *)(arg2 + 8)) *
                                              (local_50 - *(float *)(arg2 + 8)) +
                                          (local_4c - *(float *)(arg2 + 0xc)) *
                                              (local_4c - *(float *)(arg2 + 0xc)) <
                                      DAT_005dbd04 /* R:9.999999747378752e-05f */) {
                                    return true;
                                  }
                                  uVar12 = *(ushort *)(pBVar6 + 0x30);
                                LAB_0057edc5:
                                  uVar13 = uVar13 + 1;
                                  if (uVar12 <= uVar13)
                                    goto LAB_0057edd3;
                                }
                                if (((bVar11 != 3) && (bVar11 == 5)) &&
                                    (uVar14 = *(ushort *)(pBVar7 + 0x30), uVar14 != 0)) {
                                  uVar12 = 0;
                                  do {
                                    while (true) {
                                      pBVar8 = *(BoundingBox **)(*(long *)(pBVar7 + 0x40) +
                                                                 (ulong)uVar12 * 8);
                                      bVar11 = (byte)*pBVar8 & 0xf;
                                      if (bVar11 != 2)
                                        break;
                                      local_48 = 0.0;
                                      local_44 = 0.0;
                                      local_40 = 0.0;
                                      local_3c = 0.0;
                                      ClosestPointToBoundingBox(arg2, pBVar8,
                                                                (FPUVector *)&local_48);
                                      if ((local_44 - *(float *)(arg2 + 4)) *
                                                  (local_44 - *(float *)(arg2 + 4)) +
                                              (local_48 - *(float *)arg2) *
                                                  (local_48 - *(float *)arg2) +
                                              (local_40 - *(float *)(arg2 + 8)) *
                                                  (local_40 - *(float *)(arg2 + 8)) +
                                              (local_3c - *(float *)(arg2 + 0xc)) *
                                                  (local_3c - *(float *)(arg2 + 0xc)) <
                                          DAT_005dbd04 /* R:9.999999747378752e-05f */) {
                                        return true;
                                      }
                                      uVar14 = *(ushort *)(pBVar7 + 0x30);
                                    LAB_0057ed28:
                                      uVar12 = uVar12 + 1;
                                      if (uVar14 <= uVar12)
                                        goto LAB_0057edc0;
                                    }
                                    if (((bVar11 == 3) || (bVar11 != 5)) ||
                                        (*(short *)(pBVar8 + 0x30) == 0))
                                      goto LAB_0057ed28;
                                    uVar14 = 0;
                                    do {
                                      iVar10 = IsVector3WithinBounds(
                                          *(Bounds **)(*(long *)(pBVar8 + 0x40) +
                                                       (ulong)uVar14 * 8),
                                          arg2);
                                      if (iVar10 == 1) {
                                        return true;
                                      }
                                      uVar14 = uVar14 + 1;
                                    } while (uVar14 < *(ushort *)(pBVar8 + 0x30));
                                    uVar14 = *(ushort *)(pBVar7 + 0x30);
                                    uVar12 = uVar12 + 1;
                                  } while (uVar12 < uVar14);
                                LAB_0057edc0:
                                  uVar12 = *(ushort *)(pBVar6 + 0x30);
                                  goto LAB_0057edc5;
                                }
                                uVar13 = uVar13 + 1;
                              } while (uVar13 < uVar12);
                            LAB_0057edd3:
                              uVar13 = *(ushort *)(pBVar5 + 0x30);
                              goto LAB_0057eddb;
                            }
                            local_fe = local_fe + 1;
                          } while (local_fe < uVar13);
                        LAB_0057edec:
                          uVar12 = *(ushort *)(pBVar4 + 0x30);
                          goto LAB_0057edf5;
                        }
                        local_fa = local_fa + 1;
                      } while (local_fa < uVar12);
                    LAB_0057ee06:
                      uVar13 = *(ushort *)(pBVar3 + 0x30);
                      goto LAB_0057ee0f;
                    }
                    local_d0 = local_d0 + 1;
                  } while (local_d0 < uVar13);
                LAB_0057ee20:
                  uVar12 = *(ushort *)(pBVar2 + 0x30);
                  goto LAB_0057ee29;
                }
                local_ca = local_ca + 1;
              } while (local_ca < uVar12);
            LAB_0057ee3a:
              uVar13 = *(ushort *)(pBVar1 + 0x30);
            }
            local_cc = local_cc + 1;
          } while (local_cc < uVar13);
          goto LAB_0057f434;
        }
        local_ce = local_ce + 1;
      } while (local_ce < uVar12);
      bVar9 = false;
    }
  }
  return bVar9;
}

/* ======================================================================
 * IsBoxTouchingBox  (Ghidra `IsBoxTouchingBox` @ 0057f450)
 * Signature: uint8_t __stdcall IsBoxTouchingBox(BoundingBox * arg1, BoundingBox * arg2)
 * Calls: `Matrix4x4__operator_index__005baf30`
 * Called by: `IsBoundsTouchingBounds`
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IsBoxTouchingBox(BoundingBox const*, BoundingBox const*) */

bool IsBoxTouchingBox(BoundingBox *arg1, BoundingBox *arg2)

{
  Matrix4x4 *this;
  Matrix4x4 *this_00;
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  bool bVar5;
  float *pfVar6;
  float *pfVar7;
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

  this = (Matrix4x4 *)(arg2 + 100);
  this_00 = (Matrix4x4 *)(arg1 + 100);
  fVar28 = *(float *)(arg2 + 0x74) - *(float *)(arg1 + 0x74);
  fVar30 = *(float *)(arg2 + 0x70) - *(float *)(arg1 + 0x70);
  fVar8 = *(float *)(arg2 + 0x78) - *(float *)(arg1 + 0x78);
  pfVar6 = (float *)Matrix4x4__operator_index__005baf30(this_00, 2);
  fVar26 = pfVar6[1] * fVar28 + *pfVar6 * fVar30 + pfVar6[2] * fVar8;
  pfVar6 = (float *)Matrix4x4__operator_index__005baf30(this_00, 1);
  fVar27 = pfVar6[1] * fVar28 + *pfVar6 * fVar30 + pfVar6[2] * fVar8;
  pfVar6 = (float *)Matrix4x4__operator_index__005baf30(this_00, 0);
  fVar29 = fVar28 * pfVar6[1] + fVar30 * *pfVar6 + fVar8 * pfVar6[2];
  pfVar6 = (float *)Matrix4x4__operator_index__005baf30(this, 0);
  pfVar7 = (float *)Matrix4x4__operator_index__005baf30(this_00, 0);
  fVar9 = *pfVar6 * *pfVar7 + pfVar6[2] * pfVar7[2] + pfVar6[1] * pfVar7[1] + pfVar6[3] * pfVar7[3];
  fVar10 = (float)((uint)fVar9 & DAT_005be880 /* R:u32=2147483647 */) +
           _DAT_005dbe50 /* R:1.0000000116860974e-07f */;
  pfVar6 = (float *)Matrix4x4__operator_index__005baf30(this, 1);
  pfVar7 = (float *)Matrix4x4__operator_index__005baf30(this_00, 0);
  fVar11 =
      pfVar6[1] * pfVar7[1] + *pfVar7 * *pfVar6 + pfVar6[2] * pfVar7[2] + pfVar6[3] * pfVar7[3];
  fVar12 = (float)((uint)fVar11 & DAT_005be880 /* R:u32=2147483647 */) +
           _DAT_005dbe50 /* R:1.0000000116860974e-07f */;
  pfVar6 = (float *)Matrix4x4__operator_index__005baf30(this, 2);
  pfVar7 = (float *)Matrix4x4__operator_index__005baf30(this_00, 0);
  fVar13 =
      pfVar6[1] * pfVar7[1] + *pfVar7 * *pfVar6 + pfVar6[2] * pfVar7[2] + pfVar6[3] * pfVar7[3];
  fVar14 = (float)((uint)fVar13 & DAT_005be880 /* R:u32=2147483647 */) +
           _DAT_005dbe50 /* R:1.0000000116860974e-07f */;
  pfVar6 = (float *)Matrix4x4__operator_index__005baf30(this, 0);
  pfVar7 = (float *)Matrix4x4__operator_index__005baf30(this_00, 1);
  fVar15 =
      pfVar6[1] * pfVar7[1] + *pfVar6 * *pfVar7 + pfVar6[2] * pfVar7[2] + pfVar6[3] * pfVar7[3];
  fVar16 = (float)((uint)fVar15 & DAT_005be880 /* R:u32=2147483647 */) +
           _DAT_005dbe50 /* R:1.0000000116860974e-07f */;
  pfVar6 = (float *)Matrix4x4__operator_index__005baf30(this, 1);
  pfVar7 = (float *)Matrix4x4__operator_index__005baf30(this_00, 1);
  fVar17 =
      pfVar6[1] * pfVar7[1] + *pfVar7 * *pfVar6 + pfVar6[2] * pfVar7[2] + pfVar6[3] * pfVar7[3];
  fVar18 = (float)((uint)fVar17 & DAT_005be880 /* R:u32=2147483647 */) +
           _DAT_005dbe50 /* R:1.0000000116860974e-07f */;
  pfVar6 = (float *)Matrix4x4__operator_index__005baf30(this, 2);
  pfVar7 = (float *)Matrix4x4__operator_index__005baf30(this_00, 1);
  fVar19 =
      pfVar6[1] * pfVar7[1] + *pfVar6 * *pfVar7 + pfVar6[2] * pfVar7[2] + pfVar6[3] * pfVar7[3];
  fVar20 = (float)((uint)fVar19 & DAT_005be880 /* R:u32=2147483647 */) +
           _DAT_005dbe50 /* R:1.0000000116860974e-07f */;
  pfVar6 = (float *)Matrix4x4__operator_index__005baf30(this, 0);
  pfVar7 = (float *)Matrix4x4__operator_index__005baf30(this_00, 2);
  fVar21 =
      pfVar6[1] * pfVar7[1] + *pfVar6 * *pfVar7 + pfVar6[2] * pfVar7[2] + pfVar6[3] * pfVar7[3];
  fVar22 = (float)((uint)fVar21 & DAT_005be880 /* R:u32=2147483647 */) +
           _DAT_005dbe50 /* R:1.0000000116860974e-07f */;
  pfVar6 = (float *)Matrix4x4__operator_index__005baf30(this, 1);
  pfVar7 = (float *)Matrix4x4__operator_index__005baf30(this_00, 2);
  fVar23 =
      pfVar6[1] * pfVar7[1] + *pfVar6 * *pfVar7 + pfVar6[2] * pfVar7[2] + pfVar6[3] * pfVar7[3];
  fVar24 = (float)((uint)fVar23 & DAT_005be880 /* R:u32=2147483647 */) +
           _DAT_005dbe50 /* R:1.0000000116860974e-07f */;
  pfVar6 = (float *)Matrix4x4__operator_index__005baf30(this, 2);
  pfVar7 = (float *)Matrix4x4__operator_index__005baf30(this_00, 2);
  fVar8 = *(float *)(arg2 + 4);
  fVar28 = *(float *)(arg2 + 8);
  fVar30 = *(float *)(arg2 + 0xc);
  bVar5 = false;
  bVar4 = false;
  fVar25 =
      pfVar6[1] * pfVar7[1] + *pfVar6 * *pfVar7 + pfVar6[2] * pfVar7[2] + pfVar6[3] * pfVar7[3];
  fVar31 = (float)((uint)fVar25 & DAT_005be880 /* R:u32=2147483647 */) +
           _DAT_005dbe50 /* R:1.0000000116860974e-07f */;
  if ((((float)((uint)fVar29 & DAT_005be880 /* R:u32=2147483647 */) <=
        fVar10 * fVar8 + fVar12 * fVar28 + *(float *)(arg1 + 4) + fVar14 * fVar30) &&
       ((float)((uint)fVar27 & DAT_005be880 /* R:u32=2147483647 */) <=
        fVar16 * fVar8 + fVar18 * fVar28 + *(float *)(arg1 + 8) + fVar20 * fVar30)) &&
      ((float)((uint)fVar26 & DAT_005be880 /* R:u32=2147483647 */) <=
       fVar22 * fVar8 + fVar24 * fVar28 + *(float *)(arg1 + 0xc) + fVar30 * fVar31)) {
    fVar1 = *(float *)(arg1 + 4);
    fVar2 = *(float *)(arg1 + 8);
    fVar3 = *(float *)(arg1 + 0xc);
    bVar5 = bVar4;
    if ((((float)((uint)(fVar15 * fVar27 + fVar9 * fVar29 + fVar21 * fVar26) &
                  DAT_005be880 /* R:u32=2147483647 */) <=
          fVar10 * fVar1 + fVar16 * fVar2 + fVar8 + fVar22 * fVar3) &&
         ((float)((uint)(fVar17 * fVar27 + fVar11 * fVar29 + fVar23 * fVar26) &
                  DAT_005be880 /* R:u32=2147483647 */) <=
          fVar12 * fVar1 + fVar18 * fVar2 + fVar28 + fVar24 * fVar3)) &&
        ((float)((uint)(fVar19 * fVar27 + fVar13 * fVar29 + fVar26 * fVar25) &
                 DAT_005be880 /* R:u32=2147483647 */) <=
         fVar14 * fVar1 + fVar20 * fVar2 + fVar30 + fVar3 * fVar31)) {
      if ((float)((uint)(fVar15 * fVar26 - fVar21 * fVar27) &
                  DAT_005be880 /* R:u32=2147483647 */) <=
          fVar16 * fVar3 + fVar22 * fVar2 + fVar14 * fVar28 + fVar12 * fVar30) {
        if ((float)((uint)(fVar17 * fVar26 - fVar23 * fVar27) &
                    DAT_005be880 /* R:u32=2147483647 */) <=
            fVar18 * fVar3 + fVar24 * fVar2 + fVar14 * fVar8 + fVar10 * fVar30) {
          if ((((float)((uint)(fVar19 * fVar26 - fVar27 * fVar25) &
                        DAT_005be880 /* R:u32=2147483647 */) <=
                fVar20 * fVar3 + fVar31 * fVar2 + fVar12 * fVar8 + fVar10 * fVar28) &&
               ((float)((uint)(fVar21 * fVar29 - fVar9 * fVar26) &
                        DAT_005be880 /* R:u32=2147483647 */) <=
                fVar10 * fVar3 + fVar22 * fVar1 + fVar20 * fVar28 + fVar18 * fVar30)) &&
              (((float)((uint)(fVar23 * fVar29 - fVar11 * fVar26) &
                        DAT_005be880 /* R:u32=2147483647 */) <=
                    fVar12 * fVar3 + fVar24 * fVar1 + fVar20 * fVar8 + fVar16 * fVar30 &&
                ((((float)((uint)(fVar29 * fVar25 - fVar26 * fVar13) &
                           DAT_005be880 /* R:u32=2147483647 */) <=
                       fVar3 * fVar14 + fVar31 * fVar1 + fVar18 * fVar8 + fVar16 * fVar28 &&
                   ((float)((uint)(fVar9 * fVar27 - fVar15 * fVar29) &
                            DAT_005be880 /* R:u32=2147483647 */) <=
                    fVar10 * fVar2 + fVar16 * fVar1 + fVar31 * fVar28 + fVar24 * fVar30)) &&
                  ((float)((uint)(fVar11 * fVar27 - fVar17 * fVar29) &
                           DAT_005be880 /* R:u32=2147483647 */) <=
                   fVar12 * fVar2 + fVar18 * fVar1 + fVar31 * fVar8 + fVar30 * fVar22)))))) {
            bVar5 = (float)((uint)(fVar27 * fVar13 - fVar29 * fVar19) &
                            DAT_005be880 /* R:u32=2147483647 */) <=
                    fVar2 * fVar14 + fVar1 * fVar20 + fVar8 * fVar24 + fVar28 * fVar22;
          }
        }
      }
    }
  }
  return bVar5;
}

/* ======================================================================
 * IsBoundsTouchingBounds  (Ghidra `IsBoundsTouchingBounds` @ 00580090)
 * Signature: uint8_t __stdcall IsBoundsTouchingBounds(Bounds * arg1, Bounds * arg2)
 * Calls: `ClosestPointToBoundingSquare`, `ClosestPointToBoundingSquareDistSq`, `IsBoxTouchingBox`, `Vector2__operator_minus__005be180`
 * Called by: `DrFetus__IsBoundsHittingShot`, `IsEntryTouchingBounds__00571480`, `RaptureBoss__IsCollidingWithBounds`, `RaptureBoss__MaggotBulletCollision`, `RenderSetPiece`, `SMBAnimals__AnimalCollision`, `SMBBoss__WayPointCollision`, `SMBPalette__DemonBulletCollision`, `SMBPalette__ObstacleCollision`
 */
/* IsBoundsTouchingBounds(Bounds const*, Bounds const*) */

ulong IsBoundsTouchingBounds(Bounds *arg1, Bounds *arg2)

{
  byte bVar1;
  Bounds BVar2;
  int iVar3;
  ulong uVar4;
  ushort uVar5;
  Bounds *pBVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  Vector2 local_a8[16];
  Vector2 local_98[16];
  Vector2 local_88[16];
  Vector2 local_78[16];
  Vector2 local_68[16];
  Vector2 local_58[16];
  Vector2 local_48[16];
  Vector2 local_38[24];

  bVar1 = (byte)*arg1 & 0xf;
  if (((byte)*arg1 & 0xf) == 0) {
    BVar2 = *arg2;
    if (((byte)BVar2 & 0xf) == 0) {
      Matrix4x4__Get2DPos(local_a8, (Matrix4x4 *)(arg1 + 0x44));
      Matrix4x4__Get2DPos(local_98, (Matrix4x4 *)(arg2 + 0x44));
      Vector2__operator_minus__005be180(local_88, local_a8);
      fVar9 = (float)ClosestPointToBoundingSquareDistSq(local_a8, (BoundingSquare *)arg2);
      fVar7 = (float)ClosestPointToBoundingSquareDistSq(local_98, (BoundingSquare *)arg1);
      fVar8 = (float)Vector2__LengthSq(local_88);
      return (ulong)(fVar7 + fVar9 <= fVar8);
    }
    if (((byte)BVar2 & 0xf) == 1) {
      ClosestPointToBoundingSquare((Vector2 *)(arg2 + 8), (BoundingSquare *)arg1, local_78);
      Vector2__operator_minus__005be180(local_68, local_78);
      fVar9 = (float)Vector2__LengthSq(local_68);
      return (ulong)(fVar9 <= *(float *)(arg2 + 4) * *(float *)(arg2 + 4));
    }
  LAB_00580179:
    bVar1 = (byte)BVar2 & 0xf;
  } else {
    if (bVar1 != 1) {
      if (bVar1 == 2) {
        BVar2 = *arg2;
        if (((byte)BVar2 & 0xf) == 2) {
          uVar4 = IsBoxTouchingBox((BoundingBox *)arg1, (BoundingBox *)arg2);
          return uVar4;
        }
      } else {
        pBVar6 = arg1;
        if (bVar1 == 5)
          goto LAB_0058018b;
        BVar2 = *arg2;
      }
      goto LAB_00580179;
    }
    bVar1 = (byte)*arg2 & 0xf;
    if (((byte)*arg2 & 0xf) == 0) {
      ClosestPointToBoundingSquare((Vector2 *)(arg1 + 8), (BoundingSquare *)arg2, local_58);
      Vector2__operator_minus__005be180(local_48, local_58);
      fVar9 = (float)Vector2__LengthSq(local_48);
      return (ulong)(fVar9 <= *(float *)(arg1 + 4) * *(float *)(arg1 + 4));
    }
    if (bVar1 == 1) {
      Vector2__operator_minus__005be180(local_38, (Vector2 *)(arg1 + 8));
      fVar9 = (float)Vector2__LengthSq(local_38);
      return (ulong)(fVar9 <= *(float *)(arg2 + 4) * *(float *)(arg2 + 4) +
                                  *(float *)(arg1 + 4) * *(float *)(arg1 + 4));
    }
  }
  pBVar6 = arg2;
  arg2 = arg1;
  if (bVar1 != 5) {
    return 0;
  }
LAB_0058018b:
  if (*(short *)(pBVar6 + 0x30) == 0) {
    return 0;
  }
  uVar5 = 0;
  do {
    uVar4 = (ulong)uVar5;
    iVar3 = IsBoundsTouchingBounds(arg2, *(Bounds **)(*(long *)(pBVar6 + 0x40) + uVar4 * 8));
    if (iVar3 == 0) {
      if ((**(byte **)(*(long *)(pBVar6 + 0x40) + uVar4 * 8) & 0xf0) == 0) {
        return 0;
      }
    } else if ((iVar3 == 1) && (**(byte **)(*(long *)(pBVar6 + 0x40) + uVar4 * 8) >> 4 == 1)) {
      return 1;
    }
    uVar5 = uVar5 + 1;
    if (*(ushort *)(pBVar6 + 0x30) <= uVar5) {
      return 0;
    }
  } while (true);
}

/* ======================================================================
 * InitializeCGR  (Ghidra `InitializeCGR` @ 00581260)
 * Signature: uint8_t InitializeCGR(void)
 * Calls: `BaseResource__Release`, `VertexStream__VertexStream__005a6980`
 * Called by: `TEngine__TEngine`
 */
void InitializeCGR(void)

{
  VertexStream *pVVar1;
  uint32_t local_148;
  uint32_t local_144;
  uint64_t local_140;
  uint32_t local_138;
  uint32_t local_134;
  uint64_t local_130;
  uint32_t local_128;
  uint32_t local_124;
  uint64_t local_120;
  uint32_t local_118;
  uint32_t local_114;
  uint32_t local_110;
  uint32_t local_10c;
  uint8_t local_108[2];
  uint16_t local_106;
  uint32_t local_104;
  uint32_t local_100;
  uint8_t local_fc;
  uint8_t local_f8;
  uint16_t local_f6;
  uint32_t local_f4;
  uint32_t local_f0;
  uint8_t local_ec;
  uint8_t local_e8;
  uint8_t local_d8[2];
  uint16_t local_d6;
  uint32_t local_d4;
  uint32_t local_d0;
  uint8_t local_cc;
  uint8_t local_c8;
  uint16_t local_c6;
  uint32_t local_c4;
  uint32_t local_c0;
  uint8_t local_bc;
  uint8_t local_b8;
  uint8_t local_a8[2];
  uint16_t local_a6;
  uint32_t local_a4;
  uint32_t local_a0;
  uint8_t local_9c;
  uint8_t local_98;
  uint16_t local_96;
  uint32_t local_94;
  uint32_t local_90;
  uint8_t local_8c;
  uint8_t local_88;
  uint64_t local_78;
  uint16_t local_70;
  uint32_t local_6c;
  uint32_t *local_68;
  uint32_t local_60;
  uint32_t local_5c;
  uint32_t local_58;
  uint8_t local_48[2];
  uint16_t local_46;
  uint32_t local_44;
  uint32_t local_40;
  uint8_t local_3c;
  uint8_t local_38;
  uint8_t *local_28;
  uint16_t local_20;
  uint32_t local_1c;
  BaseResource *local_10;

  local_68 = &local_148;
  local_140 = 0;
  local_148 = 0xbf800000;
  local_144 = 0x3f800000;
  local_138 = 0x3f800000;
  local_134 = 0x3f800000;
  local_130 = 0x3f800000;
  local_128 = 0xbf800000;
  local_124 = 0xbf800000;
  local_120 = 0x3f80000000000000;
  local_118 = 0x3f800000;
  local_114 = 0xbf800000;
  local_110 = 0x3f800000;
  local_10c = 0x3f800000;
  local_6c = 5;
  local_60 = 0;
  local_5c = 1;
  local_58 = 0;
  local_78 = 0x40;
  local_70 = 0x10;
  local_10 = (BaseResource *)VertexBuffer__Create((tagVertexBufferCreation *)&local_78);
  local_28 = local_108;
  local_108[0] = 0;
  local_106 = 0;
  local_104 = 0;
  local_100 = 1;
  local_fc = 0;
  local_f8 = 0;
  local_f6 = 8;
  local_f4 = 1;
  local_f0 = 1;
  local_ec = 0;
  local_e8 = 0xff;
  local_1c = 0;
  local_20 = 3;
  CGR__pPos2TexDecl = VertexDeclaration__Create((tagVertexDeclarationCreation *)&local_28);
  local_28 = local_d8;
  local_d8[0] = 0;
  local_d6 = 0;
  local_d4 = 0;
  local_d0 = 2;
  local_cc = 0;
  local_c8 = 0;
  local_c6 = 0xc;
  local_c4 = 1;
  local_c0 = 1;
  local_bc = 0;
  local_b8 = 0xff;
  local_20 = 3;
  CGR__pPos3TexDecl = VertexDeclaration__Create((tagVertexDeclarationCreation *)&local_28);
  pVVar1 = BaseResource__operator_new(0xa8, 1);
  /* try { // try from 0058149a to 0058149e has its CatchHandler @ 005815ba */
  VertexStream__VertexStream__005a6980(pVVar1, 1, 2, 4, 2, &local_10, CGR__pPos2TexDecl);
  CGR__pSingleQuadStream = pVVar1;
  BaseResource__Release(local_10, 0);
  local_28 = local_a8;
  local_a8[0] = 0;
  local_a6 = 0;
  local_a4 = 0;
  local_a0 = 1;
  local_9c = 0;
  local_98 = 0;
  local_96 = 8;
  local_94 = 3;
  local_90 = 4;
  local_8c = 0;
  local_88 = 0xff;
  local_20 = 3;
  CGR__pPos2ColorDecl = VertexDeclaration__Create((tagVertexDeclarationCreation *)&local_28);
  local_28 = local_48;
  local_48[0] = 0;
  local_46 = 0;
  local_44 = 0;
  local_40 = 1;
  local_3c = 0;
  local_38 = 0xff;
  local_20 = 2;
  CGR__pPos2Decl = VertexDeclaration__Create((tagVertexDeclarationCreation *)&local_28);
  return;
}

/* ======================================================================
 * GraphicsBenchmark  (Ghidra `GraphicsBenchmark` @ 00582340)
 * Signature: uint8_t GraphicsBenchmark(void)
 * Calls: `BaseResource__Release`, `GetRandomINT`, `SamplerRegisterToSource`, `System_GetTimeInMS`, `TGraphics__AddPixelStage`, `TGraphics__BeginScene`, `TGraphics__BindRenderTarget`, `TGraphics__Clear`, `TGraphics__DeleteMasterPixelStage`, `TGraphics__Draw` (+12 more)
 * Called by: `TEngine__TEngine`
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* GraphicsBenchmark() */

float GraphicsBenchmark(void)

{
  BaseResource *pBVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint32_t uVar6;
  BaseResource *this;
  BaseResource *this_00;
  Matrix4x4 *pMVar7;
  int iVar8;
  Texture *pTVar9;
  uchar uVar10;
  BaseResource *pBVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float local_94;
  uint64_t local_88;
  uint64_t local_80;
  uint32_t local_78;
  uint32_t local_74;
  uint32_t local_70;
  uint16_t local_6c;
  uint32_t local_68;
  uint32_t local_64;
  uint8_t local_60;
  uint32_t local_5c;
  uint32_t local_58;
  float local_48;
  float local_44;
  float local_40;
  uint32_t local_3c;

  iVar12 = 10;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_6c = 0;
  local_60 = 1;
  local_5c = 0;
  local_58 = 0;
  local_74 = 0x800;
  local_70 = 0x800;
  local_68 = 1;
  local_64 = 0x10;
  this = (BaseResource *)Texture__Create((tagTextureCreation *)&local_88);
  this_00 = (BaseResource *)Texture__Create((tagTextureCreation *)&local_88);
  local_94 = 0.0;
  do {
    iVar2 = System_GetTimeInMS();
    iVar8 = 0;
    TGraphics__BeginScene();
    TGraphics__RenderToBackBuffer(Graphics);
    TGraphics__ResetPixelStages(Graphics);
    TGraphics__DeleteMasterPixelStage(Graphics);
    TGraphics__ResetTexCoordGen(Graphics);
    pBVar1 = this;
    pBVar11 = this_00;
    do {
      pTVar9 = (Texture *)pBVar1;
      TGraphics__BindRenderTarget(Graphics, pTVar9);
      iVar3 = GetRandomINT(0, 500);
      iVar4 = GetRandomINT(0, 500);
      iVar5 = GetRandomINT(0, 500);
      local_3c = 0x3f800000;
      local_48 = (float)iVar5 * DAT_005c72c8 /* R:0.0020000000949949026f */;
      local_44 = (float)iVar4 * DAT_005c72c8 /* R:0.0020000000949949026f */;
      local_40 = (float)iVar3 * DAT_005c72c8 /* R:0.0020000000949949026f */;
      TGraphics__Clear(Graphics, (ColorTemplate *)&local_48, 1);
      uVar10 = (uchar)iVar8;
      TGraphics__SetTexture(Graphics, uVar10, (Texture *)pBVar11);
      TGraphics__SetRenderState(Graphics, '\a', 0);
      TGraphics__SetRenderState(Graphics, '\b', 1);
      TGraphics__SetRenderState(Graphics, '\x03', 1);
      TGraphics__SetRenderState(Graphics, '\x01', 7);
      TGraphics__ResetPixelStages(Graphics);
      uVar6 = SamplerRegisterToSource(iVar8);
      TGraphics__AddPixelStage(Graphics, uVar6, 1, 0, 0, 1, 1, 0xffffffff);
      TGraphics__SetSamplerState(Graphics, uVar10, '\x04', 2);
      TGraphics__SetSamplerState(Graphics, uVar10, '\x03', 2);
      iVar3 = GetRandomINT(1, 6);
      fVar13 = (float)iVar3;
      fVar14 = (float)((uint)fVar13 ^ DAT_005be6f0 /* R:u32=2147483648 */);
      pMVar7 = (Matrix4x4 *)TGraphics__GetMatrix(Graphics);
      Matrix4x4__ConvertToOrthoMatrix(pMVar7, fVar13, fVar14, fVar14, fVar13,
                                      DAT_005c07a4 /* R:-1.0f */, DAT_005be894 /* R:1.0f */);
      pMVar7 = (Matrix4x4 *)TGraphics__GetMatrix(Graphics);
      Matrix4x4__Identity(pMVar7);
      TGraphics__SetPerspectiveProjectionMode(Graphics, 0);
      pMVar7 = (Matrix4x4 *)TGraphics__GetMatrix(Graphics, 2);
      Matrix4x4__Identity(pMVar7);
      TGraphics__Draw(Graphics, CGR__pSingleQuadStream, (IndexBuffer *)0x0);
      TGraphics__UnBindRenderTarget(Graphics);
      iVar8 = iVar8 + 1;
      pBVar1 = pBVar11;
      pBVar11 = (BaseResource *)pTVar9;
    } while (iVar8 != 8);
    TGraphics__RenderToBackBuffer(Graphics);
    TGraphics__Clear(Graphics, (ColorTemplate *)cNullColor, 1);
    TGraphics__SetTexture(Graphics, '\0', pTVar9);
    TGraphics__SetRenderState(Graphics, '\a', 0);
    TGraphics__SetRenderState(Graphics, '\b', 1);
    TGraphics__SetRenderState(Graphics, '\x03', 1);
    TGraphics__SetRenderState(Graphics, '\x01', 7);
    TGraphics__SetTexture(Graphics, '\x01', (Texture *)0x0);
    TGraphics__SetTexture(Graphics, '\x02', (Texture *)0x0);
    TGraphics__SetTexture(Graphics, '\x03', (Texture *)0x0);
    TGraphics__SetTexture(Graphics, '\x04', (Texture *)0x0);
    TGraphics__SetTexture(Graphics, '\x05', (Texture *)0x0);
    TGraphics__SetTexture(Graphics, '\x06', (Texture *)0x0);
    TGraphics__SetTexture(Graphics, '\a', (Texture *)0x0);
    TGraphics__ResetPixelStages(Graphics);
    uVar6 = SamplerRegisterToSource(0);
    TGraphics__AddPixelStage(Graphics, uVar6, 1, 1, 0, 3, 3, 0xffffffff);
    TGraphics__SetPixelColorConstant(Graphics, 0, cNullColor);
    pMVar7 = (Matrix4x4 *)TGraphics__GetMatrix(Graphics);
    Matrix4x4__ConvertToOrthoMatrix(pMVar7, DAT_005be894 /* R:1.0f */, DAT_005c07a4 /* R:-1.0f */,
                                    DAT_005c07a4 /* R:-1.0f */, DAT_005be894 /* R:1.0f */,
                                    DAT_005c07a4 /* R:-1.0f */, DAT_005be894 /* R:1.0f */);
    pMVar7 = (Matrix4x4 *)TGraphics__GetMatrix(Graphics);
    Matrix4x4__Identity(pMVar7);
    TGraphics__SetPerspectiveProjectionMode(Graphics, 0);
    pMVar7 = (Matrix4x4 *)TGraphics__GetMatrix(Graphics, 2);
    Matrix4x4__Identity(pMVar7);
    TGraphics__Draw(Graphics, CGR__pSingleQuadStream, (IndexBuffer *)0x0);
    TGraphics__EndScene();
    TGraphics__Present();
    iVar8 = System_GetTimeInMS();
    iVar12 = iVar12 + -1;
    local_94 = (float)(uint)(iVar8 - iVar2) * _DAT_005bfba8 /* R:0.10000000149011612f */ + local_94;
  } while (iVar12 != 0);
  BaseResource__Release(this_00, 0);
  BaseResource__Release(this, 0);
  return local_94;
}

/* ======================================================================
 * IsSetPiece  (Ghidra `IsSetPiece` @ 0058d5a0)
 * Signature: uint8_t __stdcall IsSetPiece(TileLevelSetPiece * arg1)
 * Calls: (none)
 * Called by: (none)
 */
/* IsSetPiece(TileLevelSetPiece*) */

bool IsSetPiece(TileLevelSetPiece *arg1)

{
  TileLevelSetPiece TVar1;
  bool bVar2;

  TVar1 = arg1[0x21];
  bVar2 = false;
  if ((((((byte)TVar1 & 0x10) == 0) && (((byte)TVar1 & 2) == 0)) && (((byte)TVar1 & 0x20) == 0)) &&
      (bVar2 = false, ((byte)TVar1 & 0x40) == 0)) {
    bVar2 = ((byte)TVar1 & 1) == 0;
  }
  return bVar2;
}

/* ======================================================================
 * InsertLayerAfter  (Ghidra `InsertLayerAfter` @ 00598ed0)
 * Signature: uint8_t __stdcall InsertLayerAfter(RenderLayer * arg1, RenderLayer * arg2)
 * Calls: `AutoLockSection__AutoLockSection`, `AutoLockSection__AutoLockSection__005b59d0`, `RemoveLayer`
 * Called by: (none)
 */
/* RenderLayers__InsertLayerAfter(RenderLayer*, RenderLayer*) */

void RenderLayers__InsertLayerAfter(RenderLayer *arg1, RenderLayer *arg2)

{
  long lVar1;
  bool bVar2;
  AutoLockSection aAStack_28[24];

  RemoveLayer(arg1);
  AutoLockSection__AutoLockSection(aAStack_28, (CriticalSection *)_RENDERLAYER_SECTION);
  if (arg2 == (RenderLayer *)0x0) {
    if (pHeadLayer != (RenderLayer *)0x0) {
      *(RenderLayer **)(pHeadLayer + 0x3d0) = arg1;
    }
    bVar2 = pLastLayer != (RenderLayer *)0x0;
    *(RenderLayer **)(arg1 + 0x3c8) = pHeadLayer;
    pHeadLayer = arg1;
    *(uint64_t *)(arg1 + 0x3d0) = 0;
    if (bVar2)
      goto LAB_00598f23;
  } else {
    lVar1 = *(long *)(arg2 + 0x3c8);
    *(RenderLayer **)(arg2 + 0x3c8) = arg1;
    *(RenderLayer **)(arg1 + 0x3d0) = arg2;
    *(long *)(arg1 + 0x3c8) = lVar1;
    if (lVar1 != 0) {
      *(RenderLayer **)(lVar1 + 0x3d0) = arg1;
      goto LAB_00598f23;
    }
  }
  pLastLayer = arg1;
LAB_00598f23:
  AutoLockSection__AutoLockSection__005b59d0(aAStack_28);
  return;
}

/* ======================================================================
 * InsertLayerBefore  (Ghidra `InsertLayerBefore` @ 00598f90)
 * Signature: uint8_t __stdcall InsertLayerBefore(RenderLayer * arg1, RenderLayer * arg2)
 * Calls: `AutoLockSection__AutoLockSection`, `AutoLockSection__AutoLockSection__005b59d0`, `RemoveLayer`
 * Called by: (none)
 */
/* RenderLayers__InsertLayerBefore(RenderLayer*, RenderLayer*) */

void RenderLayers__InsertLayerBefore(RenderLayer *arg1, RenderLayer *arg2)

{
  long lVar1;
  bool bVar2;
  AutoLockSection aAStack_28[24];

  RemoveLayer(arg1);
  AutoLockSection__AutoLockSection(aAStack_28, (CriticalSection *)_RENDERLAYER_SECTION);
  if (arg2 == (RenderLayer *)0x0) {
    if (pLastLayer != (RenderLayer *)0x0) {
      *(RenderLayer **)(pLastLayer + 0x3c8) = arg1;
    }
    bVar2 = pHeadLayer != (RenderLayer *)0x0;
    *(RenderLayer **)(arg1 + 0x3d0) = pLastLayer;
    pLastLayer = arg1;
    *(uint64_t *)(arg1 + 0x3c8) = 0;
    if (bVar2)
      goto LAB_00598fe3;
  } else {
    lVar1 = *(long *)(arg2 + 0x3d0);
    *(RenderLayer **)(arg2 + 0x3d0) = arg1;
    *(RenderLayer **)(arg1 + 0x3c8) = arg2;
    *(long *)(arg1 + 0x3d0) = lVar1;
    if (lVar1 != 0) {
      *(RenderLayer **)(lVar1 + 0x3c8) = arg1;
      goto LAB_00598fe3;
    }
  }
  pHeadLayer = arg1;
LAB_00598fe3:
  AutoLockSection__AutoLockSection__005b59d0(aAStack_28);
  return;
}

/* ======================================================================
 * IsLayerValid  (Ghidra `IsLayerValid` @ 00599080)
 * Signature: uint8_t __stdcall IsLayerValid(RenderLayer * arg1)
 * Calls: (none)
 * Called by: (none)
 */
/* RenderLayers__IsLayerValid(RenderLayer*) */

uint64_t RenderLayers__IsLayerValid(RenderLayer *arg1)

{
  uint64_t uVar1;
  RenderLayer *pRVar2;

  uVar1 = 0;
  if (pHeadLayer != (RenderLayer *)0x0) {
    pRVar2 = pHeadLayer;
    if (pHeadLayer == arg1) {
      return 1;
    }
    do {
      pRVar2 = *(RenderLayer **)(pRVar2 + 0x3c8);
      if (pRVar2 == (RenderLayer *)0x0) {
        return 0;
      }
    } while (arg1 != pRVar2);
    uVar1 = 1;
  }
  return uVar1;
}

/* ======================================================================
 * IsObjectManaged  (Ghidra `IsObjectManaged` @ 0059ba60)
 * Signature: uint8_t __stdcall IsObjectManaged(SceneObject * arg1)
 * Calls: (none)
 * Called by: (none)
 */
/* TSceneObjectManager__IsObjectManaged(SceneObject const*) */

uint64_t TSceneObjectManager__IsObjectManaged(SceneObject *arg1)

{
  return 0;
}

/* ======================================================================
 * GetUIMessageBoxesActive  (Ghidra `GetUIMessageBoxesActive` @ 005a4840)
 * Signature: uint8_t GetUIMessageBoxesActive(void)
 * Calls: (none)
 * Called by: `SMBEditorForms__IsFormActive`
 */
uint32_t GetUIMessageBoxesActive(void)

{
  return iUIMessageBoxesActive;
}

/* ======================================================================
 * IncreaseScroll  (Ghidra `IncreaseScroll` @ 005a5380)
 * Signature: uint8_t __stdcall IncreaseScroll(void * arg1)
 * Calls: (none)
 * Called by: `UIScrollBar__UIScrollBar__005a5900`
 */
/* IncreaseScroll(void*) */

void IncreaseScroll(void *arg1)

{
  float fVar1;

  fVar1 = DAT_005c72d4 /* R:0.05000000074505806f */ + *(float *)arg1;
  if (DAT_005be894 /* R:1.0f */ <= DAT_005c72d4 /* R:0.05000000074505806f */ + *(float *)arg1) {
    fVar1 = DAT_005be894 /* R:1.0f */;
  }
  *(float *)arg1 = fVar1;
  return;
}

/* ======================================================================
 * LoadLocalizationDatabase  (Ghidra `LoadLocalizationDatabase` @ 005b6cb0)
 * Signature: uint8_t __stdcall LoadLocalizationDatabase(char * arg1)
 * Calls: `File__File`, `File__File__005b7a70`, `File__Read`, `System_GetLanguage`, `free`, `malloc`
 * Called by: `TEngine__TEngine`
 */
/* LoadLocalizationDatabase(char const*) */

void LoadLocalizationDatabase(char *arg1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  void *__ptr;
  long lVar4;
  void *pvVar5;
  short sVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  ulong uVar13;
  int iVar14;
  int iVar15;
  bool bVar16;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b0;
  char *local_a8;
  uint8_t *local_a0;
  uint32_t local_98;
  uint64_t local_90;
  uint32_t local_88;
  uint32_t local_84;
  uint32_t local_80;
  uint32_t local_7c;
  uint32_t local_78;
  uint32_t local_74;
  uint8_t *local_70;
  File local_68[4];
  uint local_64;

  local_98 = 2;
  local_90 = 0;
  local_88 = 0;
  local_84 = 1;
  local_80 = 1;
  local_7c = 0;
  local_78 = 0;
  local_74 = 0;
  local_70 = &DAT_005c04cf /* R:7.374579797039071e-39f */;
  local_a0 = &DAT_005c328c /* R:u32=1811964530 */;
  local_a8 = arg1;
  iVar3 = File__Exists(arg1, 0);
  if (iVar3 != 1) {
    return;
  }
  File__File(local_68, (tagFileCreation *)&local_a8);
  uVar2 = local_64;
  __ptr = malloc((ulong)local_64);
  /* try { // try from 005b6d67 to 005b6d70 has its CatchHandler @ 005b6f72 */
  File__Read(local_68, __ptr, uVar2);
  iVar3 = System_GetLanguage();
  local_c4 = 1;
  iVar15 = 0;
  local_c0 = 0;
  do {
    if (local_64 >> 1 == 0) {
      local_bc = 0;
    } else {
      lVar4 = 0;
      local_b0 = 0;
      iVar10 = 1;
      iVar11 = 0;
      local_bc = 0;
      iVar9 = 1;
      do {
        sVar6 = *(short *)((long)__ptr + lVar4 * 2);
        if ((sVar6 == 9) || ((sVar6 == 10 && (*(short *)((long)__ptr + lVar4 * 2 + -2) == 0xd)))) {
          bVar16 = iVar11 == iVar3;
          iVar11 = iVar11 + 1;
          if (bVar16) {
            iVar14 = ((int)lVar4 - iVar10) + (uint)(sVar6 == 9);
            if (iVar15 == 1) {
              lVar7 = (long)local_bc;
              pLocalizedStrings[lVar7] = (void *)((long)pLocalizedDatabase + (long)local_b0 * 4);
              uVar13 = 0;
              if (0 < iVar14 + -1) {
                lVar8 = 0;
                do {
                  uVar1 = *(ushort *)((long)__ptr + lVar8 * 2 + (long)iVar10 * 2);
                  if (uVar1 != 0x22) {
                    iVar12 = (int)uVar13;
                    uVar13 = (ulong)(iVar12 + 1);
                    *(uint *)(pLocalizedStrings[lVar7] + (long)iVar12 * 4) = (uint)uVar1;
                  }
                  lVar8 = lVar8 + 1;
                } while ((int)lVar8 < iVar14 + -1);
                uVar13 = (long)(int)uVar13 << 2;
              }
              local_b0 = local_b0 + iVar14;
              *(uint32_t *)(pLocalizedStrings[lVar7] + uVar13) = 0;
              iTotalNumLocStrings = iTotalNumLocStrings + 1;
              sVar6 = *(short *)((long)__ptr + lVar4 * 2);
            } else {
              local_c0 = local_c0 + 1 + iVar14;
            }
          }
          iVar10 = iVar9;
          if ((sVar6 == 10) && (*(short *)((long)__ptr + lVar4 * 2 + -2) == 0xd)) {
            local_bc = local_bc + 1;
            iVar11 = 0;
          }
        }
        lVar4 = lVar4 + 1;
        bVar16 = iVar9 < (int)(local_64 >> 1);
        iVar9 = iVar9 + 1;
      } while (bVar16);
    }
    if (iVar15 == 0) {
      pvVar5 = malloc((long)local_c0 << 2);
      pLocalizedDatabase = pvVar5;
      pLocalizedStrings = malloc((long)local_bc << 3);
      *pLocalizedStrings = pvVar5;
    } else if (local_c4 == 2) {
      free(__ptr);
      File__File__005b7a70(local_68);
      return;
    }
    iVar15 = iVar15 + 1;
    local_c4 = local_c4 + 1;
  } while (true);
}

/* ======================================================================
 * IsAudioFile  (Ghidra `IsAudioFile` @ 005b76a0)
 * Signature: uint8_t __stdcall IsAudioFile(char * arg1)
 * Calls: `strlen`
 * Called by: (none)
 */
/* IsAudioFile(char const*) */

bool IsAudioFile(char *arg1)

{
  char cVar1;
  char cVar2;
  size_t sVar3;
  long lVar4;
  char *pcVar5;
  long lVar6;
  char *pcVar7;
  bool bVar8;
  byte bVar9;

  bVar9 = 0;
  sVar3 = strlen(arg1);
  lVar6 = 0;
  if (3 < (int)sVar3) {
    lVar6 = (long)((int)sVar3 + -4);
  }
  bVar8 = arg1 + lVar6 == (char *)0x0;
  lVar4 = 5;
  pcVar5 = ".wav";
  pcVar7 = arg1 + lVar6;
  do {
    if (lVar4 == 0) {
      return bVar8;
    }
    lVar4 = lVar4 + -1;
    cVar2 = *pcVar7;
    cVar1 = *pcVar5;
    bVar8 = true;
    pcVar5 = pcVar5 + (ulong)bVar9 * -2 + 1;
    pcVar7 = pcVar7 + (ulong)bVar9 * -2 + 1;
  } while (cVar1 == cVar2);
  return false;
}

/* ======================================================================
 * IsMultiCore  (Ghidra `IsMultiCore` @ 005b89d0)
 * Signature: uint8_t IsMultiCore(void)
 * Calls: `sysconf`
 * Called by: (none)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IsMultiCore() */

uint IsMultiCore(void)

{
  long lVar1;

  if (IsMultiCore()::checked == '\0') {
    lVar1 = sysconf(0x54);
    IsMultiCore()::checked = '\x01';
    IsMultiCore()::retval = (uint)(1 < lVar1);
  }
  return IsMultiCore()::retval;
}

/* ======================================================================
 * IsSufficientSpace  (Ghidra `IsSufficientSpace` @ 005b8ab0)
 * Signature: uint8_t __stdcall IsSufficientSpace(uint arg1, tagFileClass arg2)
 * Calls: (none)
 * Called by: (none)
 */
/* UnixUserProfile__IsSufficientSpace(unsigned int, tagFileClass) */

uint64_t UnixUserProfile__IsSufficientSpace(void)

{
  return 1;
}

/* ======================================================================
 * InitializeUserAlert  (Ghidra `InitializeUserAlert` @ 005b98c0)
 * Signature: uint8_t InitializeUserAlert(void)
 * Calls: (none)
 * Called by: `TEngine__TEngine`
 */
void InitializeUserAlert(void)

{
  long lVar1;
  uint64_t *puVar2;

  UserAlert__fnMessageBoxRender = 0;
  UserAlert__fnMessageBoxUpdate = 0;
  puVar2 = (uint64_t *)&UserAlert__currInterrupt;
  for (lVar1 = 0x14a; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}

/* ======================================================================
 * InitializeUserProfiles  (Ghidra `InitializeUserProfiles` @ 005b9b50)
 * Signature: uint8_t InitializeUserProfiles(void)
 * Calls: (none)
 * Called by: `TEngine__TEngine`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* InitializeUserProfiles() */

void InitializeUserProfiles(void)

{
  UserProfiles = 0;
  DAT_00824c28 /* R:2.8376293902577546e-42f */ = 0;
  DAT_00824c30 /* R:4.0442874978878545e-41f */ = 0;
  DAT_00824c38 /* R:8.089505457956021e-39f */ = 0;
  return;
}

/* ======================================================================
 * Identity  (Ghidra `Identity` @ 005bb250)
 * Signature: uint8_t __stdcall Identity(Matrix4x4 * arg1)
 * Calls: (none)
 * Called by: (none)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matrix4x4__Identity(Matrix4x4*) */

Matrix4x4 *Matrix4x4__Identity(Matrix4x4 *arg1)

{
  uint64_t uVar1;

  *(ulong *)arg1 = (ulong)DAT_005ded90 /* R:1.0f */;
  *(uint64_t *)(arg1 + 8) = 0;
  uVar1 = _UNK_005c1918;
  *(uint64_t *)(arg1 + 0x10) = _DAT_005c1910 /* R:0.0f */;
  *(uint64_t *)(arg1 + 0x18) = uVar1;
  uVar1 = _UNK_005deda8;
  *(uint64_t *)(arg1 + 0x20) = _DAT_005deda0 /* R:0.0f */;
  *(uint64_t *)(arg1 + 0x28) = uVar1;
  uVar1 = _UNK_005c48c8;
  *(uint64_t *)(arg1 + 0x30) = _DAT_005c48c0 /* R:0.0f */;
  *(uint64_t *)(arg1 + 0x38) = uVar1;
  return arg1;
}

/* ======================================================================
 * Inverse  (Ghidra `Inverse` @ 005bb450)
 * Signature: uint8_t __stdcall Inverse(Matrix4x4 * arg1, Matrix4x4 * arg2)
 * Calls: `Determinant`
 * Called by: (none)
 */
/* Matrix4x4__Inverse(Matrix4x4*, Matrix4x4 const*) */

Matrix4x4 *Matrix4x4__Inverse(Matrix4x4 *arg1, Matrix4x4 *arg2)

{
  uint uVar1;
  float fVar2;

  fVar2 = (float)Determinant(arg2);
  if (fVar2 != DAT_005bf760 /* R:0.0f */) {
    fVar2 = DAT_005be894 /* R:1.0f */ / fVar2;
    *(float *)arg1 = ((*(float *)(arg2 + 0x34) * *(float *)(arg2 + 0x18) -
                       *(float *)(arg2 + 0x38) * *(float *)(arg2 + 0x14)) *
                          *(float *)(arg2 + 0x2c) +
                      (*(float *)(arg2 + 0x24) * *(float *)(arg2 + 0x38) -
                       *(float *)(arg2 + 0x34) * *(float *)(arg2 + 0x28)) *
                          *(float *)(arg2 + 0x1c) +
                      (*(float *)(arg2 + 0x28) * *(float *)(arg2 + 0x14) -
                       *(float *)(arg2 + 0x18) * *(float *)(arg2 + 0x24)) *
                          *(float *)(arg2 + 0x3c)) *
                     fVar2;
    uVar1 = DAT_005be6f0 /* R:u32=2147483648 */;
    *(float *)(arg1 + 4) = (float)((uint)((*(float *)(arg2 + 0x34) * *(float *)(arg2 + 8) -
                                           *(float *)(arg2 + 0x38) * *(float *)(arg2 + 4)) *
                                              *(float *)(arg2 + 0x2c) +
                                          (*(float *)(arg2 + 0x24) * *(float *)(arg2 + 0x38) -
                                           *(float *)(arg2 + 0x34) * *(float *)(arg2 + 0x28)) *
                                              *(float *)(arg2 + 0xc) +
                                          (*(float *)(arg2 + 0x28) * *(float *)(arg2 + 4) -
                                           *(float *)(arg2 + 8) * *(float *)(arg2 + 0x24)) *
                                              *(float *)(arg2 + 0x3c)) ^
                                   DAT_005be6f0 /* R:u32=2147483648 */) *
                           fVar2;
    *(float *)(arg1 + 8) = ((*(float *)(arg2 + 0x34) * *(float *)(arg2 + 8) -
                             *(float *)(arg2 + 0x38) * *(float *)(arg2 + 4)) *
                                *(float *)(arg2 + 0x1c) +
                            (*(float *)(arg2 + 0x14) * *(float *)(arg2 + 0x38) -
                             *(float *)(arg2 + 0x34) * *(float *)(arg2 + 0x18)) *
                                *(float *)(arg2 + 0xc) +
                            (*(float *)(arg2 + 0x18) * *(float *)(arg2 + 4) -
                             *(float *)(arg2 + 8) * *(float *)(arg2 + 0x14)) *
                                *(float *)(arg2 + 0x3c)) *
                           fVar2;
    *(float *)(arg1 + 0xc) = (float)((uint)((*(float *)(arg2 + 0x24) * *(float *)(arg2 + 8) -
                                             *(float *)(arg2 + 0x28) * *(float *)(arg2 + 4)) *
                                                *(float *)(arg2 + 0x1c) +
                                            (*(float *)(arg2 + 0x14) * *(float *)(arg2 + 0x28) -
                                             *(float *)(arg2 + 0x24) * *(float *)(arg2 + 0x18)) *
                                                *(float *)(arg2 + 0xc) +
                                            (*(float *)(arg2 + 0x18) * *(float *)(arg2 + 4) -
                                             *(float *)(arg2 + 8) * *(float *)(arg2 + 0x14)) *
                                                *(float *)(arg2 + 0x2c)) ^
                                     uVar1) *
                             fVar2;
    *(float *)(arg1 + 0x10) = (float)((uint)((*(float *)(arg2 + 0x30) * *(float *)(arg2 + 0x18) -
                                              *(float *)(arg2 + 0x38) * *(float *)(arg2 + 0x10)) *
                                                 *(float *)(arg2 + 0x2c) +
                                             (*(float *)(arg2 + 0x20) * *(float *)(arg2 + 0x38) -
                                              *(float *)(arg2 + 0x30) * *(float *)(arg2 + 0x28)) *
                                                 *(float *)(arg2 + 0x1c) +
                                             (*(float *)(arg2 + 0x28) * *(float *)(arg2 + 0x10) -
                                              *(float *)(arg2 + 0x18) * *(float *)(arg2 + 0x20)) *
                                                 *(float *)(arg2 + 0x3c)) ^
                                      uVar1) *
                              fVar2;
    *(float *)(arg1 + 0x14) = ((*(float *)(arg2 + 0x30) * *(float *)(arg2 + 8) -
                                *(float *)(arg2 + 0x38) * *(float *)arg2) *
                                   *(float *)(arg2 + 0x2c) +
                               (*(float *)(arg2 + 0x20) * *(float *)(arg2 + 0x38) -
                                *(float *)(arg2 + 0x30) * *(float *)(arg2 + 0x28)) *
                                   *(float *)(arg2 + 0xc) +
                               (*(float *)(arg2 + 0x28) * *(float *)arg2 -
                                *(float *)(arg2 + 8) * *(float *)(arg2 + 0x20)) *
                                   *(float *)(arg2 + 0x3c)) *
                              fVar2;
    *(float *)(arg1 + 0x18) = (float)((uint)((*(float *)(arg2 + 0x30) * *(float *)(arg2 + 8) -
                                              *(float *)(arg2 + 0x38) * *(float *)arg2) *
                                                 *(float *)(arg2 + 0x1c) +
                                             (*(float *)(arg2 + 0x10) * *(float *)(arg2 + 0x38) -
                                              *(float *)(arg2 + 0x30) * *(float *)(arg2 + 0x18)) *
                                                 *(float *)(arg2 + 0xc) +
                                             (*(float *)(arg2 + 0x18) * *(float *)arg2 -
                                              *(float *)(arg2 + 8) * *(float *)(arg2 + 0x10)) *
                                                 *(float *)(arg2 + 0x3c)) ^
                                      uVar1) *
                              fVar2;
    *(float *)(arg1 + 0x1c) = ((*(float *)(arg2 + 0x20) * *(float *)(arg2 + 8) -
                                *(float *)(arg2 + 0x28) * *(float *)arg2) *
                                   *(float *)(arg2 + 0x1c) +
                               (*(float *)(arg2 + 0x10) * *(float *)(arg2 + 0x28) -
                                *(float *)(arg2 + 0x20) * *(float *)(arg2 + 0x18)) *
                                   *(float *)(arg2 + 0xc) +
                               (*(float *)(arg2 + 0x18) * *(float *)arg2 -
                                *(float *)(arg2 + 8) * *(float *)(arg2 + 0x10)) *
                                   *(float *)(arg2 + 0x2c)) *
                              fVar2;
    *(float *)(arg1 + 0x20) = ((*(float *)(arg2 + 0x30) * *(float *)(arg2 + 0x14) -
                                *(float *)(arg2 + 0x34) * *(float *)(arg2 + 0x10)) *
                                   *(float *)(arg2 + 0x2c) +
                               (*(float *)(arg2 + 0x20) * *(float *)(arg2 + 0x34) -
                                *(float *)(arg2 + 0x30) * *(float *)(arg2 + 0x24)) *
                                   *(float *)(arg2 + 0x1c) +
                               (*(float *)(arg2 + 0x24) * *(float *)(arg2 + 0x10) -
                                *(float *)(arg2 + 0x14) * *(float *)(arg2 + 0x20)) *
                                   *(float *)(arg2 + 0x3c)) *
                              fVar2;
    *(float *)(arg1 + 0x24) = (float)((uint)((*(float *)(arg2 + 0x30) * *(float *)(arg2 + 4) -
                                              *(float *)(arg2 + 0x34) * *(float *)arg2) *
                                                 *(float *)(arg2 + 0x2c) +
                                             (*(float *)(arg2 + 0x20) * *(float *)(arg2 + 0x34) -
                                              *(float *)(arg2 + 0x30) * *(float *)(arg2 + 0x24)) *
                                                 *(float *)(arg2 + 0xc) +
                                             (*(float *)(arg2 + 0x24) * *(float *)arg2 -
                                              *(float *)(arg2 + 4) * *(float *)(arg2 + 0x20)) *
                                                 *(float *)(arg2 + 0x3c)) ^
                                      uVar1) *
                              fVar2;
    *(float *)(arg1 + 0x28) = ((*(float *)(arg2 + 0x30) * *(float *)(arg2 + 4) -
                                *(float *)(arg2 + 0x34) * *(float *)arg2) *
                                   *(float *)(arg2 + 0x1c) +
                               (*(float *)(arg2 + 0x10) * *(float *)(arg2 + 0x34) -
                                *(float *)(arg2 + 0x30) * *(float *)(arg2 + 0x14)) *
                                   *(float *)(arg2 + 0xc) +
                               (*(float *)(arg2 + 0x14) * *(float *)arg2 -
                                *(float *)(arg2 + 4) * *(float *)(arg2 + 0x10)) *
                                   *(float *)(arg2 + 0x3c)) *
                              fVar2;
    *(float *)(arg1 + 0x2c) = (float)((uint)((*(float *)(arg2 + 0x20) * *(float *)(arg2 + 4) -
                                              *(float *)(arg2 + 0x24) * *(float *)arg2) *
                                                 *(float *)(arg2 + 0x1c) +
                                             (*(float *)(arg2 + 0x10) * *(float *)(arg2 + 0x24) -
                                              *(float *)(arg2 + 0x20) * *(float *)(arg2 + 0x14)) *
                                                 *(float *)(arg2 + 0xc) +
                                             (*(float *)(arg2 + 0x14) * *(float *)arg2 -
                                              *(float *)(arg2 + 4) * *(float *)(arg2 + 0x10)) *
                                                 *(float *)(arg2 + 0x2c)) ^
                                      uVar1) *
                              fVar2;
    *(float *)(arg1 + 0x30) = (float)((uint)((*(float *)(arg2 + 0x30) * *(float *)(arg2 + 0x14) -
                                              *(float *)(arg2 + 0x34) * *(float *)(arg2 + 0x10)) *
                                                 *(float *)(arg2 + 0x28) +
                                             (*(float *)(arg2 + 0x20) * *(float *)(arg2 + 0x34) -
                                              *(float *)(arg2 + 0x30) * *(float *)(arg2 + 0x24)) *
                                                 *(float *)(arg2 + 0x18) +
                                             (*(float *)(arg2 + 0x24) * *(float *)(arg2 + 0x10) -
                                              *(float *)(arg2 + 0x14) * *(float *)(arg2 + 0x20)) *
                                                 *(float *)(arg2 + 0x38)) ^
                                      uVar1) *
                              fVar2;
    *(float *)(arg1 + 0x34) = ((*(float *)(arg2 + 0x30) * *(float *)(arg2 + 4) -
                                *(float *)(arg2 + 0x34) * *(float *)arg2) *
                                   *(float *)(arg2 + 0x28) +
                               (*(float *)(arg2 + 0x20) * *(float *)(arg2 + 0x34) -
                                *(float *)(arg2 + 0x30) * *(float *)(arg2 + 0x24)) *
                                   *(float *)(arg2 + 8) +
                               (*(float *)(arg2 + 0x24) * *(float *)arg2 -
                                *(float *)(arg2 + 4) * *(float *)(arg2 + 0x20)) *
                                   *(float *)(arg2 + 0x38)) *
                              fVar2;
    *(float *)(arg1 + 0x38) = (float)((uint)((*(float *)(arg2 + 0x30) * *(float *)(arg2 + 4) -
                                              *(float *)(arg2 + 0x34) * *(float *)arg2) *
                                                 *(float *)(arg2 + 0x18) +
                                             (*(float *)(arg2 + 0x10) * *(float *)(arg2 + 0x34) -
                                              *(float *)(arg2 + 0x30) * *(float *)(arg2 + 0x14)) *
                                                 *(float *)(arg2 + 8) +
                                             (*(float *)(arg2 + 0x14) * *(float *)arg2 -
                                              *(float *)(arg2 + 4) * *(float *)(arg2 + 0x10)) *
                                                 *(float *)(arg2 + 0x38)) ^
                                      uVar1) *
                              fVar2;
    *(float *)(arg1 + 0x3c) = ((*(float *)(arg2 + 0x20) * *(float *)(arg2 + 4) -
                                *(float *)(arg2 + 0x24) * *(float *)arg2) *
                                   *(float *)(arg2 + 0x18) +
                               (*(float *)(arg2 + 0x10) * *(float *)(arg2 + 0x24) -
                                *(float *)(arg2 + 0x20) * *(float *)(arg2 + 0x14)) *
                                   *(float *)(arg2 + 8) +
                               (*(float *)(arg2 + 0x14) * *(float *)arg2 -
                                *(float *)(arg2 + 4) * *(float *)(arg2 + 0x10)) *
                                   *(float *)(arg2 + 0x28)) *
                              fVar2;
    return arg1;
  }
  return (Matrix4x4 *)0x0;
}

/* ======================================================================
 * GetRandomINT  (Ghidra `GetRandomINT` @ 005bd150)
 * Signature: uint8_t GetRandomINT(void)
 * Calls: `random`
 * Called by: `AlienHominid__WallHit`, `AlienHominid__WallJump`, `CommanderVideo__WallJump`, `CreateTileLightMapResources`, `DrFetus__WallHit`, `DrFetus__WallJump`, `FlashSoundLibrary__Play`, `FlyWrench__Reset`, `FlyWrench__WallJump`, `GMeatHUD__GMeatHUD__004800c0` (+90 more)
 */
int GetRandomINT(int arg1, int arg2)

{
  long lVar1;

  lVar1 = random();
  return arg1 + (int)(lVar1 % (long)((arg2 + 1) - arg1));
}

/* ======================================================================
 * Length  (Ghidra `Length` @ 005be070)
 * Signature: uint8_t __stdcall Length(Vector2 * arg1)
 * Calls: (none)
 * Called by: (none)
 */
/* Vector2__Length(Vector2 const*) */

float Vector2__Length(Vector2 *arg1)

{
  return SQRT(*(float *)(arg1 + 4) * *(float *)(arg1 + 4) + *(float *)arg1 * *(float *)arg1);
}

/* ======================================================================
 * LengthSq  (Ghidra `LengthSq` @ 005be090)
 * Signature: uint8_t __stdcall LengthSq(Vector2 * arg1)
 * Calls: (none)
 * Called by: (none)
 */
/* Vector2__LengthSq(Vector2 const*) */

float Vector2__LengthSq(Vector2 *arg1)

{
  return *(float *)(arg1 + 4) * *(float *)(arg1 + 4) + *(float *)arg1 * *(float *)arg1;
}
