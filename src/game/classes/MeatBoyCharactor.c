/* src/game/classes/MeatBoyCharactor.c — 39 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "MeatBoyCharactor.h"

/* ======================================================================
 * MeatBoyCharactor__Initialize  (Ghidra `Initialize` @ 00473cd0)
 * Signature: uint8_t __thiscall Initialize(MeatBoyCharactor * self)
 * Class: MeatBoyCharactor
 * Calls: (none)
 * Called by: (none)
 */
/* MeatBoyCharactor__Initialize() */

void __thiscall MeatBoyCharactor__Initialize(MeatBoyCharactor *self)

{
  /* WARNING: Could not recover jumptable at 0x00473cd7. Too many branches */
  /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)self + 0x60))();
  return;
}

/* ======================================================================
 * MeatBoyCharactor__CanWallJump  (Ghidra `CanWallJump` @ 00473de0)
 * Signature: uint8_t __thiscall CanWallJump(MeatBoyCharactor * self)
 * Class: MeatBoyCharactor
 * Calls: (none)
 * Called by: (none)
 */
/* MeatBoyCharactor__CanWallJump() */

bool __thiscall MeatBoyCharactor__CanWallJump(MeatBoyCharactor *self)

{
  return ((byte)self[0x7d8] & 0xa4) == 0xa4;
}

/* ======================================================================
 * MeatBoyCharactor__CanJump  (Ghidra `CanJump` @ 00473e00)
 * Signature: uint8_t __thiscall CanJump(MeatBoyCharactor * self)
 * Class: MeatBoyCharactor
 * Calls: (none)
 * Called by: (none)
 */
/* MeatBoyCharactor__CanJump() */

bool __thiscall MeatBoyCharactor__CanJump(MeatBoyCharactor *self)

{
  return ((byte)self[0x7d8] & 0xa2) == 0xa0;
}

/* ======================================================================
 * MeatBoyCharactor__DoMovement  (Ghidra `DoMovement` @ 00473e20)
 * Signature: uint8_t __thiscall DoMovement(MeatBoyCharactor * self)
 * Class: MeatBoyCharactor
 * Calls: (none)
 * Called by: (none)
 */
/* MeatBoyCharactor__DoMovement() */

void __thiscall MeatBoyCharactor__DoMovement(MeatBoyCharactor *self)

{
  if (((byte)self[0x7d8] & 0x40) == 0) {
    *(uint32_t *)(self + 0x80c) = *(uint32_t *)(self + 0x8ac);
    return;
  }
  *(uint32_t *)(self + 0x80c) = *(uint32_t *)(self + 0x8a8);
  return;
}

/* ======================================================================
 * MeatBoyCharactor__CanDie  (Ghidra `CanDie` @ 00473e50)
 * Signature: uint8_t __stdcall CanDie(void)
 * Class: MeatBoyCharactor
 * Calls: (none)
 * Called by: (none)
 */
/* MeatBoyCharactor__CanDie() */

uint64_t MeatBoyCharactor__CanDie(void)

{
  return 1;
}

/* ======================================================================
 * MeatBoyCharactor__RecordSpecial  (Ghidra `RecordSpecial` @ 00473e60)
 * Signature: uint8_t __stdcall RecordSpecial(void)
 * Class: MeatBoyCharactor
 * Calls: (none)
 * Called by: (none)
 */
/* MeatBoyCharactor__RecordSpecial() */

void MeatBoyCharactor__RecordSpecial(void)

{
  return;
}

/* ======================================================================
 * MeatBoyCharactor__ProcessSpecial  (Ghidra `ProcessSpecial` @ 00473e70)
 * Signature: uint8_t __stdcall ProcessSpecial(void)
 * Class: MeatBoyCharactor
 * Calls: (none)
 * Called by: (none)
 */
/* MeatBoyCharactor__ProcessSpecial() */

void MeatBoyCharactor__ProcessSpecial(void)

{
  return;
}

/* ======================================================================
 * MeatBoyCharactor__OffScreen  (Ghidra `OffScreen` @ 00473e80)
 * Signature: uint8_t __stdcall OffScreen(void)
 * Class: MeatBoyCharactor
 * Calls: (none)
 * Called by: (none)
 */
/* MeatBoyCharactor__OffScreen() */

void MeatBoyCharactor__OffScreen(void)

{
  return;
}

/* ======================================================================
 * MeatBoyCharactor__CreateClones  (Ghidra `CreateClones` @ 00473e90)
 * Signature: uint8_t __thiscall CreateClones(MeatBoyCharactor * self)
 * Class: MeatBoyCharactor
 * Calls: `GSMBCharactor__CreateCharactor__0049c600`
 * Called by: `AlienHominid__CreateClones`, `CommanderVideo__CreateClones`, `DrFetus__CreateClones`, `Jill__CreateClones`, `Machinarium__CreateClones`, `MeatNinja__CreateClones`, `MrMinecraft__CreateClones`, `Naija__CreateClones`, `Ogmo__CreateClones`, `TheKid__CreateClones` (+2 more)
 */
/* MeatBoyCharactor__CreateClones() */

void __thiscall MeatBoyCharactor__CreateClones(MeatBoyCharactor *self)

{
  long lVar1;
  uint64_t uVar2;
  long lVar3;
  int iVar4;

  iVar4 = 0;
  do {
    lVar1 = *(long *)(self + 0x7f0);
    uVar2 = GSMBCharactor__CreateCharactor__0049c600(SMBCharactor, self, iVar4);
    lVar3 = (long)iVar4;
    iVar4 = iVar4 + 1;
    *(uint64_t *)(lVar1 + lVar3 * 8) = uVar2;
  } while (iVar4 != 0x28);
  return;
}

/* ======================================================================
 * MeatBoyCharactor__Death  (Ghidra `Death` @ 00473ed0)
 * Signature: uint8_t __thiscall Death(MeatBoyCharactor * self)
 * Class: MeatBoyCharactor
 * Calls: `GSMBChapterData__AddDeath`
 * Called by: `AlienHominid__Death`, `CommanderVideo__Death`, `DefaultMeatBoy__Death`, `Jill__Death`, `Machinarium__Death`, `Naija__Death`, `Ogmo__Death`, `SprintMeatBoy__Death`, `TheKid__Death`, `VVVVVV__Death`
 */
/* MeatBoyCharactor__Death() */

void __thiscall MeatBoyCharactor__Death(MeatBoyCharactor *self)

{
  if ((*(int *)(self + 0xa40) == 0) && (*(int *)(*(long *)(self + 0xa38) + 0x2c8) == 1)) {
    GSMBChapterData__AddDeath(SMBChapterData);
    return;
  }
  return;
}

/* ======================================================================
 * MeatBoyCharactor__AddEffect  (Ghidra `AddEffect` @ 00473f00)
 * Signature: uint8_t __thiscall AddEffect(MeatBoyCharactor * self, tagSuperMeatBoyEffects arg1, Vector2 * arg2, Vector2 * arg3)
 * Class: MeatBoyCharactor
 * Calls: `MeatBoyCharactor__AddEffect__0047af00`, `Vector2__operator_assign`
 * Called by: (none)
 */
/* MeatBoyCharactor__AddEffect__0047af00(tagSuperMeatBoyEffects, Vector2 const&, Vector2 const&) [clone
   .part.37] [clone .constprop.63] */

void __thiscall MeatBoyCharactor__AddEffect__0047af00(MeatBoyCharactor *self, int arg2, float *arg3,
                                                      float *arg4)

{
  byte *pbVar1;
  float fVar2;
  ushort *puVar3;
  MeatBoyCharactor *pMVar4;
  int iVar5;
  long lVar6;
  float fVar7;
  Matrix4x4 aMStack_78[64];
  float local_38;
  float local_34;
  float local_30;
  uint32_t local_2c;
  float local_28;
  float local_24;

  fVar7 = DAT_005c07a4 /* R:-1.0f */;
  puVar3 = *(ushort **)(self + 0x7e0);
  if ((puVar3 != (ushort *)0x0) && (*(int *)(self + 0xa40) == 0)) {
    *puVar3 = *puVar3 & 0xf87f | (ushort)((arg2 + 1U & 0xf) << 7);
    if (fVar7 == *arg3) {
      pbVar1 = (byte *)(*(long *)(self + 0x7e0) + 1);
      *pbVar1 = *pbVar1 | 8;
    } else {
      pbVar1 = (byte *)(*(long *)(self + 0x7e0) + 1);
      *pbVar1 = *pbVar1 & 0xf7;
    }
    if (fVar7 == *arg4) {
      pbVar1 = (byte *)(*(long *)(self + 0x7e0) + 1);
      *pbVar1 = *pbVar1 | 0x10;
    } else {
      pbVar1 = (byte *)(*(long *)(self + 0x7e0) + 1);
      *pbVar1 = *pbVar1 & 0xef;
    }
  }
  pMVar4 = self + 0x100;
  iVar5 = 0;
  do {
    if (*(long *)pMVar4 == 0) {
      lVar6 = (long)arg2;
      pMVar4 = self + (long)iVar5 * 0x28 + 0x100;
      *(uint64_t *)pMVar4 = *(uint64_t *)(*(long *)(self + 0xf8) + 0x848 + lVar6 * 8);
      local_2c = 0;
      if (((byte)self[0x7d9] & 2) == 0) {
        *(uint32_t *)(self + 0xd8) = 0;
        lVar6 = lVar6 + 0x98;
        local_34 = arg3[1] * *(float *)(self + lVar6 * 0x10 + 0x18);
        local_38 = *arg3 * *(float *)(self + lVar6 * 0x10 + 0x14);
        local_30 = *(float *)(self + lVar6 * 0x10 + 0x1c);
      } else {
        lVar6 = lVar6 + 0x98;
        local_30 = *(float *)(self + lVar6 * 0x10 + 0x1c);
        local_38 = *(float *)(self + lVar6 * 0x10 + 0x14) * *arg3;
        local_34 = *(float *)(self + lVar6 * 0x10 + 0x18) * arg3[1];
        local_2c = *(uint32_t *)(self + lVar6 * 0x10 + 0x20);
        fVar7 = DAT_005c07a8 /* R:-0.7853981852531433f */;
        if ((*(ushort *)(self + 0x7da) & 0x7ff) != 0) {
          fVar7 = DAT_005c07ac /* R:0.7853981852531433f */;
        }
        Matrix4x4__ConvertToRotationMatrix(aMStack_78, fVar7);
        Matrix4x4__TransformVector3((FPUVector *)&local_38, (FPUVector *)&local_38, aMStack_78, 1);
      }
      fVar7 = *(float *)(self + 0xa0);
      *(float *)(pMVar4 + 0xc) = fVar7;
      fVar2 = *(float *)(self + 0xa4);
      *(uint32_t *)(pMVar4 + 0x14) = 0;
      *(float *)(pMVar4 + 0xc) = fVar7 + local_38;
      *(float *)(pMVar4 + 0x10) = fVar2 + local_34;
      local_24 = arg4[1] * local_30;
      local_28 = local_30 * *arg4;
      Vector2__operator_assign((Vector2 *)(pMVar4 + 0x1c), (Vector2 *)&local_28);
      if (((byte)self[0x7d9] & 2) == 0) {
        *(uint32_t *)(pMVar4 + 0x24) = 0;
      } else if ((*(ushort *)(self + 0x7da) & 0x7ff) == 0) {
        *(uint32_t *)(pMVar4 + 0x24) = 0xbf490fdb;
      } else {
        *(uint32_t *)(pMVar4 + 0x24) = 0x3f490fdb;
      }
      *(uint32_t *)(pMVar4 + 8) = 0;
      return;
    }
    iVar5 = iVar5 + 1;
    pMVar4 = pMVar4 + 0x28;
  } while (iVar5 != 0x28);
  return;
}

/* ======================================================================
 * MeatBoyCharactor__SpawnMovementEffect  (Ghidra `SpawnMovementEffect` @ 004741a0)
 * Signature: uint8_t __thiscall SpawnMovementEffect(MeatBoyCharactor * self)
 * Class: MeatBoyCharactor
 * Calls: (none)
 * Called by: (none)
 */
/* MeatBoyCharactor__SpawnMovementEffect() */

void __thiscall MeatBoyCharactor__SpawnMovementEffect(MeatBoyCharactor *self)

{
  float fVar1;
  MeatBoyCharactor MVar2;
  bool bVar3;
  float fVar4;
  uint32_t local_88;
  uint32_t local_84;
  uint32_t local_78;
  uint32_t local_74;
  uint32_t local_68;
  uint32_t local_64;
  uint32_t local_58;
  uint32_t local_54;
  uint32_t local_48;
  uint32_t local_44;
  uint32_t local_38;
  uint32_t local_34;
  uint32_t local_28;
  uint32_t local_24;
  uint32_t local_18;
  uint32_t local_14;

  MVar2 = self[0x7d8];
  fVar4 = fOneFrameTimeStep + *(float *)(self + 0x810);
  *(float *)(self + 0x810) = fVar4;
  if (((byte)MVar2 & 0x40) == 0) {
    fVar1 = *(float *)(self + 0xa2c);
  } else {
    fVar1 = *(float *)(self + 0xa28);
  }
  bVar3 = fVar1 <= fVar4;
  if (bVar3) {
    *(uint32_t *)(self + 0x810) = 0;
  }
  if (((byte)MVar2 & 0x10) == 0) {
    if ((((byte)MVar2 & 8) != 0) && (self[0x7d8] = (MeatBoyCharactor)((byte)MVar2 & 0xfe), bVar3)) {
      if (((byte)MVar2 & 0x40) == 0) {
        local_18 = 0xbf800000;
        local_14 = 0x3f800000;
        local_28 = 0xbf800000;
        local_24 = 0x3f800000;
        if (((byte)self[0x7d9] & 0x40) == 0) {
          AddEffect(self, 5, &local_28, &local_18);
        }
      } else {
        local_38 = 0xbf800000;
        local_34 = 0x3f800000;
        local_48 = 0xbf800000;
        local_44 = 0x3f800000;
        if (((byte)self[0x7d9] & 0x40) == 0) {
          AddEffect(self, 6, &local_48, &local_38);
        }
      }
    }
  } else {
    self[0x7d8] = (MeatBoyCharactor)((byte)MVar2 | 1);
    if (bVar3) {
      if (((byte)MVar2 & 0x40) == 0) {
        local_58 = 0x3f800000;
        local_54 = 0x3f800000;
        local_68 = 0x3f800000;
        local_64 = 0x3f800000;
        if (((byte)self[0x7d9] & 0x40) == 0) {
          AddEffect(self, 5, &local_68, &local_58);
        }
      } else {
        local_78 = 0x3f800000;
        local_74 = 0x3f800000;
        local_88 = 0x3f800000;
        local_84 = 0x3f800000;
        if (((byte)self[0x7d9] & 0x40) == 0) {
          AddEffect(self, 6, &local_88, &local_78);
        }
      }
    }
  }
  return;
}

/* ======================================================================
 * MeatBoyCharactor__WallHit  (Ghidra `WallHit` @ 00474360)
 * Signature: uint8_t __thiscall WallHit(MeatBoyCharactor * self, tagTileCollisionType arg1)
 * Class: MeatBoyCharactor
 * Calls: `GetRandomINT`
 * Called by: `WallHit`, `WallHit__00469ea0`, `WallHit__00473840`, `WallHit__00483540`, `WallHit__00518640`
 */
/* MeatBoyCharactor__WallHit(tagTileCollisionType) */

void __thiscall MeatBoyCharactor__WallHit(MeatBoyCharactor *self, int arg2)

{
  MeatBoyCharactor MVar1;
  ushort uVar2;
  long lVar3;
  int iVar4;
  uint32_t uVar5;
  uint32_t local_58;
  uint32_t local_54;
  uint32_t local_48;
  uint32_t local_44;
  uint32_t local_38;
  uint32_t local_34;
  uint32_t local_28;
  uint32_t local_24;

  MVar1 = self[0x7d8];
  if (((byte)MVar1 & 4) == 0) {
    if (*(int *)(self + 0x7d4) == 9)
      goto LAB_0047440b;
    if (arg2 == 4) {
      local_48 = 0x3f800000;
      local_44 = 0x3f800000;
      local_58 = 0x3f800000;
      local_54 = 0x3f800000;
      if (((byte)self[0x7d9] & 0x40) == 0) {
        AddEffect(self, 2, &local_58, &local_48);
        iVar4 = *(int *)(self + 0x7d4);
        goto LAB_004743cd;
      }
    } else {
      local_28 = 0xbf800000;
      local_24 = 0x3f800000;
      local_38 = 0xbf800000;
      local_34 = 0x3f800000;
      if (((byte)self[0x7d9] & 0x40) == 0) {
        AddEffect(self, 2, &local_38, &local_28);
        goto LAB_004743c7;
      }
    }
  LAB_004743d2:
    lVar3 = *(long *)(self + 0xf8);
    self[0x7db] = (MeatBoyCharactor)((byte)self[0x7db] | 8);
    uVar5 = 0;
    uVar2 = *(ushort *)(lVar3 + 0x348);
    if (uVar2 != 0) {
      uVar5 = GetRandomINT(0, uVar2 - 1);
    }
    *(uint32_t *)(lVar3 + 0x370) = uVar5;
    *(uint32_t *)(self + 0xa4c) = uVar5;
    *(uint32_t *)(self + 0xa50) = 0;
  } else {
  LAB_004743c7:
    iVar4 = *(int *)(self + 0x7d4);
  LAB_004743cd:
    if (iVar4 != 9)
      goto LAB_004743d2;
  }
  MVar1 = self[0x7d8];
LAB_0047440b:
  *(uint32_t *)(self + 0x7d4) = 9;
  self[0x7d8] = (MeatBoyCharactor)((byte)MVar1 | 4);
  return;
}

/* ======================================================================
 * MeatBoyCharactor__WallJump  (Ghidra `WallJump` @ 00474490)
 * Signature: uint8_t __thiscall WallJump(MeatBoyCharactor * self)
 * Class: MeatBoyCharactor
 * Calls: `GetRandomINT`
 * Called by: (none)
 */
/* MeatBoyCharactor__WallJump() */

void __thiscall MeatBoyCharactor__WallJump(MeatBoyCharactor *self)

{
  ushort uVar1;
  long lVar2;
  MeatBoyCharactor MVar3;
  int iVar4;
  uint32_t uVar5;
  uint32_t *puVar6;
  MeatBoyCharactor MVar7;
  uint32_t *puVar8;
  bool bVar9;
  uint32_t local_58;
  uint32_t local_54;
  uint32_t local_48;
  uint32_t local_44;
  uint32_t local_38;
  uint32_t local_34;
  uint32_t local_28;
  uint32_t local_24;

  puVar6 = &local_58;
  iVar4 = (**(code **)(*(long *)self + 0xb0))();
  if (iVar4 == 0) {
    return;
  }
  *(uint32_t *)(self + 0xbc) = *(uint32_t *)(self + 0x8b4);
  *(float *)(self + 0xb8) =
      *(float *)(self + 0x808) * *(float *)(self + 0x8b8) + *(float *)(self + 0xb8);
  if (*(int *)(self + 0x7d4) != 6) {
    lVar2 = *(long *)(self + 0xf8);
    self[0x7db] = (MeatBoyCharactor)((byte)self[0x7db] | 8);
    uVar5 = 0;
    uVar1 = *(ushort *)(lVar2 + 0x240);
    if (uVar1 != 0) {
      uVar5 = GetRandomINT(0, uVar1 - 1);
    }
    *(uint32_t *)(lVar2 + 0x268) = uVar5;
    *(uint32_t *)(self + 0xa4c) = uVar5;
    *(uint32_t *)(self + 0xa50) = 0;
  }
  *(uint32_t *)(self + 0x7d4) = 6;
  bVar9 = ((byte)self[0x7d8] & 1) == 0;
  MVar3 = (MeatBoyCharactor)((byte)self[0x7d8] & 0xfe | bVar9);
  self[0x7d8] = MVar3;
  if (bVar9) {
    MVar7 = self[0x7d9];
    local_38 = 0xbf800000;
    local_34 = 0x3f800000;
    local_28 = 0xbf800000;
    local_24 = 0x3f800000;
    if (((byte)MVar7 & 0x40) != 0)
      goto LAB_00474591;
    puVar6 = &local_38;
    puVar8 = &local_28;
  } else {
    MVar7 = self[0x7d9];
    local_58 = 0x3f800000;
    local_54 = 0x3f800000;
    local_48 = 0x3f800000;
    local_44 = 0x3f800000;
    if (((byte)MVar7 & 0x40) != 0)
      goto LAB_00474591;
    puVar8 = &local_48;
  }
  AddEffect(self, 3, puVar8, puVar6);
  MVar3 = self[0x7d8];
  MVar7 = self[0x7d9];
LAB_00474591:
  self[0x7d8] = (MeatBoyCharactor)((byte)MVar3 & 0xfb);
  self[0x7d9] = (MeatBoyCharactor)((byte)MVar7 | 0x20);
  return;
}

/* ======================================================================
 * MeatBoyCharactor__ForceAppear  (Ghidra `ForceAppear` @ 00474600)
 * Signature: uint8_t __thiscall ForceAppear(MeatBoyCharactor * self)
 * Class: MeatBoyCharactor
 * Calls: `FlashLibraryInstance__Reset`, `GMeatHUD__FreezeTimer`, `GMeatHUD__ResetTimer`, `GetRandomINT`
 * Called by: (none)
 */
/* MeatBoyCharactor__ForceAppear() */

void __thiscall MeatBoyCharactor__ForceAppear(MeatBoyCharactor *self)

{
  ushort uVar1;
  long lVar2;
  uint uVar3;
  FlashLibraryInstance *this_00;

  if (*(int *)(self + 0x7d4) == 0x10) {
    uVar3 = *(uint *)(self + 0xa4c);
  } else {
    lVar2 = *(long *)(self + 0xf8);
    self[0x7db] = (MeatBoyCharactor)((byte)self[0x7db] | 8);
    uVar3 = 0;
    uVar1 = *(ushort *)(lVar2 + 0x5b0);
    if (uVar1 != 0) {
      uVar3 = GetRandomINT(0, uVar1 - 1);
    }
    *(uint *)(lVar2 + 0x5d8) = uVar3;
    *(uint *)(self + 0xa4c) = uVar3;
    *(uint32_t *)(self + 0xa50) = 0;
  }
  *(uint32_t *)(self + 0x7d4) = 0x10;
  lVar2 = *(long *)(self + 0xf8);
  if (uVar3 == 0xffffffff) {
    this_00 = *(FlashLibraryInstance **)(*(long *)(lVar2 + 0x5c0) +
                                         (ulong) * (ushort *)(lVar2 + 0x5d8) * 8);
  } else {
    this_00 = *(FlashLibraryInstance **)(*(long *)(lVar2 + 0x5c0) + (ulong)(uVar3 & 0xffff) * 8);
  }
  FlashLibraryInstance__Reset(this_00);
  GMeatHUD__ResetTimer(SMBHUD);
  GMeatHUD__FreezeTimer(SMBHUD, 1);
  return;
}

/* ======================================================================
 * MeatBoyCharactor__GroundHit  (Ghidra `GroundHit` @ 004746e0)
 * Signature: uint8_t __thiscall GroundHit(MeatBoyCharactor * self)
 * Class: MeatBoyCharactor
 * Calls: `FlashLibraryInstance__Reset`, `GetRandomINT`
 * Called by: (none)
 */
/* MeatBoyCharactor__GroundHit() */

void __thiscall MeatBoyCharactor__GroundHit(MeatBoyCharactor *self)

{
  ushort uVar1;
  long lVar2;
  MeatBoyCharactor MVar3;
  uint uVar4;
  FlashLibraryInstance *this_00;
  uint32_t local_38;
  uint32_t local_34;
  uint32_t local_28;
  uint32_t local_24;

  if (*(int *)(self + 0x7d4) == 0xf) {
    uVar4 = *(uint *)(self + 0xa4c);
  } else {
    lVar2 = *(long *)(self + 0xf8);
    self[0x7db] = (MeatBoyCharactor)((byte)self[0x7db] | 8);
    uVar4 = 0;
    uVar1 = *(ushort *)(lVar2 + 0x558);
    if (uVar1 != 0) {
      uVar4 = GetRandomINT(0, uVar1 - 1);
    }
    *(uint *)(lVar2 + 0x580) = uVar4;
    *(uint *)(self + 0xa4c) = uVar4;
    *(uint32_t *)(self + 0xa50) = 0;
  }
  *(uint32_t *)(self + 0x7d4) = 0xf;
  lVar2 = *(long *)(self + 0xf8);
  if (uVar4 == 0xffffffff) {
    this_00 = *(FlashLibraryInstance **)(*(long *)(lVar2 + 0x568) +
                                         (ulong) * (ushort *)(lVar2 + 0x580) * 8);
  } else {
    this_00 = *(FlashLibraryInstance **)(*(long *)(lVar2 + 0x568) + (ulong)(uVar4 & 0xffff) * 8);
  }
  FlashLibraryInstance__Reset(this_00);
  MVar3 = self[0x7d9];
  local_28 = 0x3f800000;
  local_24 = 0x3f800000;
  local_38 = 0x3f800000;
  local_34 = 0x3f800000;
  if (((byte)MVar3 & 0x40) == 0) {
    AddEffect(self, 0, &local_38, &local_28);
    MVar3 = self[0x7d9];
  }
  if (((byte)self[0x7d8] & 0x18) == 0) {
    *(uint32_t *)(self + 0xb8) = 0;
  }
  self[0x7d9] = (MeatBoyCharactor)((byte)MVar3 & 0xdf);
  return;
}

/* ======================================================================
 * MeatBoyCharactor__Jump  (Ghidra `Jump` @ 00474800)
 * Signature: uint8_t __thiscall Jump(MeatBoyCharactor * self)
 * Class: MeatBoyCharactor
 * Calls: `GetRandomINT`
 * Called by: `FlyWrench__Jump`, `Machinarium__Jump`, `Ogmo__Jump`, `TheKid__Jump`
 */
/* MeatBoyCharactor__Jump() */

void __thiscall MeatBoyCharactor__Jump(MeatBoyCharactor *self)

{
  ushort uVar1;
  long lVar2;
  MeatBoyCharactor MVar3;
  int iVar4;
  uint32_t uVar5;
  uint32_t local_38;
  uint32_t local_34;
  uint32_t local_28;
  uint32_t local_24;

  iVar4 = (**(code **)(*(long *)self + 0xa8))();
  if (iVar4 == 0) {
    return;
  }
  self[0x7d8] = (MeatBoyCharactor)((byte)self[0x7d8] | 2);
  if (*(int *)(self + 0x7d4) != 6) {
    lVar2 = *(long *)(self + 0xf8);
    self[0x7db] = (MeatBoyCharactor)((byte)self[0x7db] | 8);
    uVar5 = 0;
    uVar1 = *(ushort *)(lVar2 + 0x240);
    if (uVar1 != 0) {
      uVar5 = GetRandomINT(0, uVar1 - 1);
    }
    *(uint32_t *)(lVar2 + 0x268) = uVar5;
    *(uint32_t *)(self + 0xa4c) = uVar5;
    *(uint32_t *)(self + 0xa50) = 0;
  }
  MVar3 = self[0x7d9];
  *(uint32_t *)(self + 0x7d4) = 6;
  local_38 = 0x3f800000;
  local_34 = 0x3f800000;
  local_28 = 0x3f800000;
  local_24 = 0x3f800000;
  if (((byte)MVar3 & 0x40) == 0) {
    AddEffect(self, 1, &local_28, &local_38);
    MVar3 = self[0x7d9];
  }
  *(uint32_t *)(self + 0x800) = 0;
  self[0x7d9] = (MeatBoyCharactor)((byte)MVar3 | 0x20);
  *(uint32_t *)(self + 0xbc) = *(uint32_t *)(self + 0x8b0);
  *(uint32_t *)(self + 0x804) = *(uint32_t *)(self + 0xa4);
  return;
}

/* ======================================================================
 * MeatBoyCharactor__Reset  (Ghidra `Reset` @ 00474920)
 * Signature: uint8_t __thiscall Reset(MeatBoyCharactor * self)
 * Class: MeatBoyCharactor
 * Calls: `BoundingSquare__Change`, `FlashLibraryInstance__Reset`, `GMeatHUD__FreezeTimer`, `GMeatHUD__ResetTimer`, `GSMBMenu__IsInReplayMode`, `GSMBMenu__ShowMoveOnMessage`, `GetRandomINT`, `ResetSMBBoss`, `SMBAnimals__Reset`, `SMBCamera__Reset` (+10 more)
 * Called by: `AlienHominid__Reset`, `CommanderVideo__Reset`, `DrFetus__Reset`, `GooBall__Reset`, `HeadCrab__Reset`, `Jill__Reset`, `MeatNinja__Reset`, `MrMinecraft__Reset`, `Naija__Reset`, `TheKid__Reset` (+2 more)
 */
/* MeatBoyCharactor__Reset() */

void __thiscall MeatBoyCharactor__Reset(MeatBoyCharactor *self)

{
  Vector2 *pVVar1;
  ushort uVar2;
  GMeatHUD *this_00;
  long lVar3;
  MeatBoyCharactor MVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  FlashLibraryInstance *this_01;
  Vector2 local_d0[8];
  Vector2 local_c8[8];
  Vector2 local_c0[8];
  Vector2 local_b8[8];
  uint32_t local_b0;
  uint64_t local_a8;
  uint64_t local_a0;
  uint64_t local_98;
  uint64_t local_90;
  uint32_t local_88;
  uint32_t local_84;
  Vector2 local_80[8];
  Vector2 local_78[8];
  Vector2 local_70[8];
  Vector2 local_68[8];
  uint32_t local_60;
  uint32_t local_58;
  uint32_t local_54;
  uint64_t local_50;
  uint64_t local_48;
  uint64_t local_40;
  uint32_t local_38;
  uint32_t local_34;
  uint32_t local_28;
  uint32_t local_24;

  lVar7 = SuperMeatBoy;
  if (((byte)self[0x7db] & 0x10) != 0) {
    pVVar1 = (Vector2 *)(self + 0xa0);
    *(uint32_t *)(self + 0xbc) = 0;
    *(uint32_t *)(self + 0xb8) = 0;
    Vector2__operator_assign(pVVar1, (Vector2 *)(*(long *)(lVar7 + 0x40) + 0x22a8));
    Vector2__operator_assign((Vector2 *)(self + 0x868), pVVar1);
    local_38 = *(uint32_t *)(self + 0x8d0);
    local_34 = local_38;
    BoundingSquare__Change((BoundingSquare *)(self + 0x740), (Vector2 *)&local_38, 0.0, pVVar1);
    *(uint64_t *)(self + 0x818) = 0;
    *(uint64_t *)(self + 0x820) = 0;
    *(uint64_t *)(self + 0x828) = 0;
    *(uint64_t *)(self + 0x830) = 0;
    *(uint32_t *)(self + 0x838) = 0;
    *(uint32_t *)(self + 0x83c) = 0;
    local_b0 = 1;
    Vector2__operator_assign((Vector2 *)(self + 0x840), local_d0);
    Vector2__operator_assign((Vector2 *)(self + 0x848), local_c8);
    Vector2__operator_assign((Vector2 *)(self + 0x850), local_c0);
    Vector2__operator_assign((Vector2 *)(self + 0x858), local_b8);
    *(uint32_t *)(self + 0x860) = local_b0;
    return;
  }
  if ((*(int *)(self + 0xa40) == 0) && (((byte)self[0x7d9] & 1) != 0)) {
    local_50 = (MeatBoyCharactor *)(CONCAT17((char)SMBCurrLevelData._4_4_,
                                             (uint7) * (uint *)(SMBHUD + 0x418)) &
                                    0x1ffffffffffffff);
    local_48 = *(uint64_t *)(SuperMeatBoyEditor + 0x100);
    local_40 = CONCAT44(local_40._4_4_, *(uint32_t *)(Engine + 8));
    local_58 = *(uint32_t *)(self + 0xa0);
    local_50 = (MeatBoyCharactor *)CONCAT35(
        CONCAT21(local_50._6_2_, (char)*(uint32_t *)(self + 0x7f8) + '\x01'),
        CONCAT14((char)*(uint32_t *)(self + 0xa54), (uint32_t)local_50));
    local_54 = local_58;
    ShowMonitorMessage((SMBMonitorMessage *)&local_58);
  }
  lVar7 = 0;
  do {
    *(uint64_t *)(self + lVar7 + 0x100) = 0;
    lVar3 = SuperMeatBoy;
    lVar7 = lVar7 + 0x28;
  } while (lVar7 != 0x640);
  pVVar1 = (Vector2 *)(self + 0xa0);
  *(uint32_t *)(self + 0xbc) = 0;
  *(uint32_t *)(self + 0xb8) = 0;
  Vector2__operator_assign(pVVar1, (Vector2 *)(*(long *)(lVar3 + 0x40) + 0x22a8));
  *(uint32_t *)(self + 0xf0) = 0;
  *(uint32_t *)(self + 0xec) = 0;
  Vector2__operator_assign((Vector2 *)(self + 0x868), pVVar1);
  local_28 = *(uint32_t *)(self + 0x8d0);
  local_24 = local_28;
  BoundingSquare__Change((BoundingSquare *)(self + 0x740), (Vector2 *)&local_28, 0.0, pVVar1);
  *(uint64_t *)(self + 0x818) = 0;
  *(uint64_t *)(self + 0x820) = 0;
  *(uint64_t *)(self + 0x828) = 0;
  *(uint64_t *)(self + 0x830) = 0;
  *(uint32_t *)(self + 0x838) = 0;
  *(uint32_t *)(self + 0x83c) = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_84 = 0;
  local_60 = 1;
  Vector2__operator_assign((Vector2 *)(self + 0x840), local_80);
  Vector2__operator_assign((Vector2 *)(self + 0x848), local_78);
  Vector2__operator_assign((Vector2 *)(self + 0x850), local_70);
  Vector2__operator_assign((Vector2 *)(self + 0x858), local_68);
  this_00 = SMBHUD;
  *(uint32_t *)(self + 0x860) = local_60;
  GMeatHUD__ResetTimer(this_00);
  MVar4 = (MeatBoyCharactor)((byte)self[0x7d9] & 0xbf);
  self[0x7d9] = MVar4;
  if (*(int *)(self + 0xa40) == 0) {
    if (*(int *)(*(long *)(self + 0xa38) + 0x2c8) == 1) {
      SMBCamera__Reset(*(SMBCamera **)(SuperMeatBoy + 0x38));
      TileLevel__ResetLevel(*(TileLevel **)(SuperMeatBoy + 0x40));
      SMBPalette__ResetObstacles(GSuperMeatBoy__pLevelPalette);
      SMBAnimals__Reset(*(SMBAnimals **)(GSuperMeatBoy__pLevelPalette + 0x41e8));
      ResetSMBBoss();
      MVar4 = self[0x7d9];
      if (*(int *)(self + 0xa40) != 0)
        goto LAB_00474ba3;
    }
    if (((byte)MVar4 & 1) != 0) {
      ScreenFlashManager__SetFlash((ScreenFlashManager *)&ScreenFlash,
                                   DAT_005c07b0 /* R:0.009999999776482582f */,
                                   DAT_005be6e8 /* R:0.25f */, (ColorTemplate *)::cBlack);
      if (*(int *)(self + 0x7d4) == 0x10) {
        uVar6 = *(uint *)(self + 0xa4c);
      } else {
        lVar7 = *(long *)(self + 0xf8);
        self[0x7db] = (MeatBoyCharactor)((byte)self[0x7db] | 8);
        uVar6 = 0;
        uVar2 = *(ushort *)(lVar7 + 0x5b0);
        if (uVar2 != 0) {
          uVar6 = GetRandomINT(0, uVar2 - 1);
        }
        *(uint *)(lVar7 + 0x5d8) = uVar6;
        *(uint *)(self + 0xa4c) = uVar6;
        *(uint32_t *)(self + 0xa50) = 0;
      }
      *(uint32_t *)(self + 0x7d4) = 0x10;
      lVar7 = *(long *)(self + 0xf8);
      if (uVar6 == 0xffffffff) {
        this_01 = *(FlashLibraryInstance **)(*(long *)(lVar7 + 0x5c0) +
                                             (ulong) * (ushort *)(lVar7 + 0x5d8) * 8);
      } else {
        this_01 =
            *(FlashLibraryInstance **)(*(long *)(lVar7 + 0x5c0) + (ulong)(uVar6 & 0xffff) * 8);
      }
      FlashLibraryInstance__Reset(this_01);
      GMeatHUD__ResetTimer(SMBHUD);
      GMeatHUD__FreezeTimer(SMBHUD, 1);
      iVar5 = *(int *)(self + 0x7f8);
      *(int *)(self + 0x7f8) = iVar5 + 1;
      if (iVar5 + 1 == 0x14) {
        GSMBMenu__ShowMoveOnMessage(SMBMenu);
      }
      iVar5 = *(int *)(SuperMeatBoy + 0x294);
      if (((1 < iVar5) && (iVar5 != 10)) && (iVar5 != 3)) {
        if (*(uint *)(self + 0x7f8) < 3) {
          SMBChapter__ShowLivesScreen((SMBChapter *)(SuperMeatBoy + 0x90), *(uint *)(self + 0x7f8));
        } else {
          SMBChapter__ShowGameOverScreen((SMBChapter *)(SuperMeatBoy + 0x90));
        }
      }
    }
    local_50 = self + 0x7f8;
    local_58 = 0;
    local_48 = CONCAT44(local_48._4_4_, 4);
    local_40 = TPlayer__GetProfile((TPlayer *)Players__Player);
    BroadcastString__SetBroadcastStringParam((BroadcastStringParam *)&local_58);
    iVar5 = GSMBMenu__IsInReplayMode(SMBMenu);
    if (iVar5 == 0) {
      SMBReplay__EndReplay(*(SMBReplay **)(self + 0xa38));
    }
    self[0x7d8] = (MeatBoyCharactor)((byte)self[0x7d8] & 0x47 | 0x80);
    iVar5 = GSMBMenu__IsInReplayMode(SMBMenu);
    if (iVar5 == 0) {
      SMBReplay__StartNewReplay(*(SMBReplay **)(self + 0xa38));
    }
    MVar4 = self[0x7d9];
  }
LAB_00474ba3:
  self[0x7d9] = (MeatBoyCharactor)((byte)MVar4 & 0xfe);
  return;
}

/* ======================================================================
 * MeatBoyCharactor__MeatBoyCharactor  (Ghidra `~MeatBoyCharactor` @ 004763b0)
 * Signature: uint8_t __thiscall ~MeatBoyCharactor(MeatBoyCharactor * self)
 * Class: MeatBoyCharactor
 * Calls: `CriticalSection__CriticalSection__005b71d0`, `MeatBoyCharFoundation__MeatBoyCharFoundation__004750a0`, `MeatBoyCharactor__MeatBoyCharactor__00476510`, `SceneObject2D__SceneObject2D__0059b220`, `TAudio__RemoveInstanceByPosition`, `operator_delete`
 * Called by: (none)
 */
/* WARNING: Removing unreachable block (ram,0x004764f7) */
/* MeatBoyCharactor__MeatBoyCharactor__00476510() */

void __thiscall MeatBoyCharactor__MeatBoyCharactor__00476510(MeatBoyCharactor *self)

{
  allocator *paVar1;
  int *piVar2;
  void *pvVar3;
  MeatBoyCharFoundation *this_00;
  int iVar4;
  long lVar5;
  MeatBoyCharactor *pMVar6;

  *(uint8_t ***)self = &PTR__MeatBoyCharactor_005c05f0;
  if (*(int *)(self + 0xa40) == 0) {
    pvVar3 = *(void **)(self + 0x7f0);
    if (pvVar3 != (void *)0x0) {
      lVar5 = 0;
      do {
        if (*(long **)((long)pvVar3 + lVar5) != (long *)0x0) {
          /* try { // try from 004763ed to 00476461 has its CatchHandler @ 004764a1 */
          (**(code **)(**(long **)((long)pvVar3 + lVar5) + 8))();
        }
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0x140);
      operator_delete(pvVar3);
    }
    this_00 = *(MeatBoyCharFoundation **)(self + 0xf8);
    if (this_00 != (MeatBoyCharFoundation *)0x0) {
      MeatBoyCharFoundation__MeatBoyCharFoundation__004750a0(this_00);
      operator_delete(this_00);
    }
    *(uint64_t *)(self + 0xa38) = 0;
  }
  pMVar6 = self + 0x100;
  iVar4 = 0;
  do {
    if (*(long *)pMVar6 != 0) {
      TAudio__RemoveInstanceByPosition(Audio, (FPUVector *)(self + (long)iVar4 * 0x28 + 0x10c));
    }
    iVar4 = iVar4 + 1;
    pMVar6 = pMVar6 + 0x28;
  } while (iVar4 != 0x28);
  paVar1 = (allocator *)(*(long *)(self + 0xa58) + -0x18);
  if (paVar1 != (allocator *)&std__string_Rep_S_empty_rep_storage) {
    LOCK();
    piVar2 = (int *)(*(long *)(self + 0xa58) + -8);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 < 1) {
      std__string_Rep_M_destroy(paVar1);
    }
  }
  /* try { // try from 0047648b to 0047648f has its CatchHandler @ 004764ce */
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)(self + 0x880));
  SceneObject2D__SceneObject2D__0059b220((SceneObject2D *)self);
  return;
}

/* ======================================================================
 * MeatBoyCharactor__MeatBoyCharactor__00476510  (Ghidra `~MeatBoyCharactor` @ 00476510)
 * Signature: uint8_t __thiscall ~MeatBoyCharactor(MeatBoyCharactor * self)
 * Class: MeatBoyCharactor
 * Calls: `operator_delete`
 * Called by: `AlienHominid__AlienHominid__00461870`, `BandageGirl__BandageGirl`, `BandageGirl__BandageGirl__00465370`, `Brownie__Brownie`, `Brownie__Brownie__00465390`, `CommanderVideo__CommanderVideo`, `DefaultMeatBoy__DefaultMeatBoy__004651c0`, `DefaultMeatBoy__DefaultMeatBoy__00465430`, `DrFetus__DrFetus__00465c60`, `FlyWrench__FlyWrench__00469ee0` (+37 more)
 */
/* MeatBoyCharactor__MeatBoyCharactor__00476510() */

void __thiscall MeatBoyCharactor__MeatBoyCharactor__00476510(MeatBoyCharactor *self)

{
  MeatBoyCharactor__dtor(self);
  operator_delete(self);
  return;
}

/* ======================================================================
 * MeatBoyCharactor__MeatBoyCharactor__00476530  (Ghidra `MeatBoyCharactor` @ 00476530)
 * Signature: uint8_t __thiscall MeatBoyCharactor(MeatBoyCharactor * self)
 * Class: MeatBoyCharactor
 * Calls: `BoundingSquare__BoundingSquare`, `CriticalSection__CriticalSection`, `MeatBoyCharactor__MeatBoyCharactor__0047b350`
 * Called by: (none)
 */
/* MeatBoyCharactor__MeatBoyCharactor__0047b350() */

void __thiscall MeatBoyCharactor__MeatBoyCharactor__0047b350(MeatBoyCharactor *self)

{
  MeatBoyCharactor *pMVar1;
  ushort uVar2;
  uint64_t uVar3;
  MeatBoyCharactor *pMVar4;
  long lVar5;
  uint32_t local_28;
  uint32_t local_24;
  uint32_t local_18;
  uint32_t local_14;

  *(uint64_t *)(self + 0x48) = 0;
  *(uint32_t *)(self + 0x50) = 1;
  *(uint8_t ***)self = &PTR__SceneObject2D_005dd3d0;
  /* try { // try from 00476552 to 00476556 has its CatchHandler @ 00476956 */
  CriticalSection__CriticalSection((CriticalSection *)(self + 0x58));
  uVar3 = vDefaultStart2D;
  pMVar1 = self + 0x10c;
  *(uint32_t *)(self + 0x80) = 0;
  *(uint32_t *)(self + 0x84) = 0;
  *(uint32_t *)(self + 0x88) = 0x3f800000;
  *(uint64_t *)(self + 0xa0) = uVar3;
  *(uint64_t *)(self + 0xa8) = uVar3;
  *(uint32_t *)(self + 0x8c) = 0;
  *(uint32_t *)(self + 0x90) = 0;
  *(uint32_t *)(self + 0x94) = 0;
  *(uint32_t *)(self + 0x98) = 0;
  *(uint32_t *)(self + 0x9c) = 1;
  *(uint32_t *)(self + 0xb0) = 0;
  *(uint32_t *)(self + 0xb4) = 0;
  *(uint32_t *)(self + 0xb8) = 0;
  *(uint32_t *)(self + 0xbc) = 0;
  *(uint32_t *)(self + 200) = 0;
  *(uint32_t *)(self + 0xcc) = 0;
  *(uint32_t *)(self + 0xd0) = 0x3f800000;
  *(uint32_t *)(self + 0xd4) = 0x3f800000;
  *(uint32_t *)(self + 0xd8) = 0;
  *(uint32_t *)(self + 0xdc) = 0;
  *(uint32_t *)(self + 0xe0) = 0;
  *(uint32_t *)(self + 0xe4) = 0;
  *(uint32_t *)(self + 0xe8) = 0;
  *(uint32_t *)(self + 0xec) = 0;
  *(uint32_t *)(self + 0xf0) = 0;
  *(uint8_t ***)self = &PTR__MeatBoyCharactor_005c05f0;
  *(uint64_t *)(self + 0xf8) = 0;
  pMVar4 = pMVar1;
  do {
    *(uint64_t *)(pMVar4 + -0xc) = 0;
    *(uint32_t *)(pMVar4 + -4) = 0;
    lVar5 = (long)pMVar4 - (long)(self + 0x100);
    *(uint32_t *)(pMVar1 + lVar5 + -0xc) = 0;
    *(uint32_t *)(pMVar1 + lVar5 + -8) = 0;
    *(uint32_t *)(pMVar1 + lVar5 + -4) = 0;
    *(uint32_t *)(pMVar1 + lVar5) = 0;
    *(uint32_t *)(self + lVar5 + 0x110) = 0x3f800000;
    *(uint32_t *)(self + lVar5 + 0x114) = 0x3f800000;
    *(uint32_t *)(pMVar4 + 0x18) = 0;
    pMVar4 = pMVar4 + 0x28;
  } while (pMVar4 != self + 0x74c);
  local_18 = 0x3f000000;
  local_14 = 0x3f000000;
  local_28 = 0;
  local_24 = 0;
  /* try { // try from 00476710 to 00476830 has its CatchHandler @ 00476965 */
  BoundingSquare__BoundingSquare((BoundingSquare *)(self + 0x740), (Vector2 *)&local_28, 0.0,
                                 (Vector2 *)&local_18);
  uVar2 = *(ushort *)(self + 0x7da);
  self[0x7d9] = (MeatBoyCharactor)((byte)self[0x7d9] & 0xb4);
  *(uint32_t *)(self + 0x7d4) = 0;
  self[0x7d8] = (MeatBoyCharactor)0x81;
  *(uint32_t *)(self + 0x7e8) = 0;
  *(uint32_t *)(self + 0x7f8) = 0;
  *(uint32_t *)(self + 0x7fc) = 0;
  *(uint32_t *)(self + 0x800) = 0;
  *(uint32_t *)(self + 0x804) = 0;
  *(uint32_t *)(self + 0x808) = 0x3f800000;
  *(ushort *)(self + 0x7da) = uVar2 & 0xf800 | 5;
  *(uint32_t *)(self + 0x80c) = 0;
  *(uint32_t *)(self + 0x810) = 0;
  *(uint64_t *)(self + 0x818) = 0;
  self[0x7db] = (MeatBoyCharactor)((byte)((uVar2 & 0xf800) >> 8) & 0x1f);
  *(uint64_t *)(self + 0x820) = 0;
  *(uint64_t *)(self + 0x828) = 0;
  *(uint64_t *)(self + 0x830) = 0;
  *(uint32_t *)(self + 0x838) = 0;
  *(uint32_t *)(self + 0x83c) = 0;
  *(uint32_t *)(self + 0x860) = 1;
  *(uint32_t *)(self + 0x868) = 0;
  *(uint32_t *)(self + 0x86c) = 0;
  *(uint32_t *)(self + 0x870) = 0;
  *(uint32_t *)(self + 0x874) = 0;
  *(uint32_t *)(self + 0x878) = 0;
  *(uint32_t *)(self + 0x87c) = 0;
  CriticalSection__CriticalSection((CriticalSection *)(self + 0x880));
  *(uint64_t *)(self + 0x994) = 0;
  *(uint64_t *)(self + 0x99c) = 0;
  *(uint64_t *)(self + 0x9a4) = 0;
  *(uint64_t *)(self + 0x9ac) = 0;
  *(uint64_t *)(self + 0x9b4) = 0;
  *(uint64_t *)(self + 0x9bc) = 0;
  *(uint64_t *)(self + 0x9c4) = 0;
  *(uint64_t *)(self + 0x9cc) = 0;
  *(uint64_t *)(self + 0x9d4) = 0;
  *(uint64_t *)(self + 0x9dc) = 0;
  *(uint64_t *)(self + 0x9e4) = 0;
  *(uint64_t *)(self + 0x9ec) = 0;
  *(uint64_t *)(self + 0x9f4) = 0;
  *(uint64_t *)(self + 0x9fc) = 0;
  *(uint64_t *)(self + 0xa04) = 0;
  *(uint64_t *)(self + 0xa0c) = 0;
  *(uint64_t *)(self + 0xa14) = 0;
  *(uint64_t *)(self + 0xa1c) = 0;
  *(uint32_t *)(self + 0xa40) = 1;
  *(uint32_t *)(self + 0xa44) = 0;
  *(uint32_t *)(self + 0xa48) = 0;
  *(uint32_t *)(self + 0xa4c) = 0;
  *(uint32_t *)(self + 0xa50) = 0;
  *(uint8_t **)(self + 0xa58) = &DAT_008184c8 /* R:0.00016803004837129265f */;
  *(uint8_t (*)[16])(self + 0xa60) = (uint8_t[16])0x0;
  *(uint8_t (*)[16])(self + 0xa70) = (uint8_t[16])0x0;
  *(uint8_t (*)[16])(self + 0xa80) = (uint8_t[16])0x0;
  return;
}

/* ======================================================================
 * MeatBoyCharactor__Clone  (Ghidra `Clone` @ 00476980)
 * Signature: uint8_t __thiscall Clone(MeatBoyCharactor * self, MeatBoyCharactor * arg1, int arg2)
 * Class: MeatBoyCharactor
 * Calls: `BoundingSquare__BoundingSquare`, `Matrix4x4__operator_assign`, `Vector2__operator_assign`, `malloc`
 * Called by: `AlienHominid__AlienHominid__00462960`, `BandageGirl__BandageGirl__004658c0`, `Brownie__Brownie__00465960`, `CommanderVideo__CommanderVideo__00464d60`, `DefaultMeatBoy__DefaultMeatBoy__00465540`, `DrFetus__DrFetus__00466f80`, `FlyWrench__FlyWrench__00469fb0`, `GooBall__GooBall__0046ad80`, `HeadCrab__HeadCrab__0046b0e0`, `Jill__Jill__0046e1e0` (+16 more)
 */
/* MeatBoyCharactor__Clone(MeatBoyCharactor*, int) */

void __thiscall MeatBoyCharactor__Clone(MeatBoyCharactor *self, MeatBoyCharactor *arg1, int arg2)

{
  uint64_t uVar1;
  void *pvVar2;
  BoundingSquare *this_00;
  MeatBoyCharactor *this_01;
  MeatBoyCharactor *pMVar3;
  uint32_t local_108;
  Matrix4x4 local_104[64];
  Matrix4x4 local_c4[64];
  Vector2 local_84[8];
  Vector2 local_7c[20];
  uint32_t local_68;
  uint32_t local_64;
  uint32_t local_58;
  uint32_t local_54;
  uint32_t local_48;
  uint32_t local_44;
  uint32_t local_38;
  uint32_t local_34;

  *(uint32_t *)(self + 0xa40) = 1;
  *(int *)(self + 0xa90) = arg2;
  *(uint64_t *)(self + 0xa38) = *(uint64_t *)(arg1 + 0xa38);
  *(uint64_t *)(self + 0xf8) = *(uint64_t *)(arg1 + 0xf8);
  *(uint32_t *)(self + 0x8a8) = *(uint32_t *)(arg1 + 0x8a8);
  *(uint32_t *)(self + 0x8ac) = *(uint32_t *)(arg1 + 0x8ac);
  *(uint32_t *)(self + 0x8b0) = *(uint32_t *)(arg1 + 0x8b0);
  *(uint32_t *)(self + 0x8b4) = *(uint32_t *)(arg1 + 0x8b4);
  *(uint32_t *)(self + 0x8b8) = *(uint32_t *)(arg1 + 0x8b8);
  *(uint32_t *)(self + 0x8bc) = *(uint32_t *)(arg1 + 0x8bc);
  *(uint32_t *)(self + 0x8c0) = *(uint32_t *)(arg1 + 0x8c0);
  *(uint32_t *)(self + 0x8c4) = *(uint32_t *)(arg1 + 0x8c4);
  *(uint32_t *)(self + 0x8c8) = *(uint32_t *)(arg1 + 0x8c8);
  *(uint32_t *)(self + 0x8cc) = *(uint32_t *)(arg1 + 0x8cc);
  *(uint32_t *)(self + 0x8d0) = *(uint32_t *)(arg1 + 0x8d0);
  this_01 = self + 0x8d4;
  do {
    pMVar3 = this_01 + 8;
    Vector2__operator_assign((Vector2 *)this_01, (Vector2 *)(this_01 + ((long)arg1 - (long)self)));
    this_01 = pMVar3;
  } while (pMVar3 != self + 0x994);
  if ((self + 0x9a4 < arg1 + 0x994) || (arg1 + 0x9a4 < pMVar3)) {
    uVar1 = *(uint64_t *)(arg1 + 0x99c);
    *(uint64_t *)(self + 0x994) = *(uint64_t *)(arg1 + 0x994);
    *(uint64_t *)(self + 0x99c) = uVar1;
    uVar1 = *(uint64_t *)(arg1 + 0x9ac);
    *(uint64_t *)(self + 0x9a4) = *(uint64_t *)(arg1 + 0x9a4);
    *(uint64_t *)(self + 0x9ac) = uVar1;
    uVar1 = *(uint64_t *)(arg1 + 0x9bc);
    *(uint64_t *)(self + 0x9b4) = *(uint64_t *)(arg1 + 0x9b4);
    *(uint64_t *)(self + 0x9bc) = uVar1;
    uVar1 = *(uint64_t *)(arg1 + 0x9cc);
    *(uint64_t *)(self + 0x9c4) = *(uint64_t *)(arg1 + 0x9c4);
    *(uint64_t *)(self + 0x9cc) = uVar1;
    uVar1 = *(uint64_t *)(arg1 + 0x9dc);
    *(uint64_t *)(self + 0x9d4) = *(uint64_t *)(arg1 + 0x9d4);
    *(uint64_t *)(self + 0x9dc) = uVar1;
    uVar1 = *(uint64_t *)(arg1 + 0x9ec);
    *(uint64_t *)(self + 0x9e4) = *(uint64_t *)(arg1 + 0x9e4);
    *(uint64_t *)(self + 0x9ec) = uVar1;
    uVar1 = *(uint64_t *)(arg1 + 0x9fc);
    *(uint64_t *)(self + 0x9f4) = *(uint64_t *)(arg1 + 0x9f4);
    *(uint64_t *)(self + 0x9fc) = uVar1;
    uVar1 = *(uint64_t *)(arg1 + 0xa0c);
    *(uint64_t *)(self + 0xa04) = *(uint64_t *)(arg1 + 0xa04);
    *(uint64_t *)(self + 0xa0c) = uVar1;
    uVar1 = *(uint64_t *)(arg1 + 0xa1c);
    *(uint64_t *)(self + 0xa14) = *(uint64_t *)(arg1 + 0xa14);
    *(uint64_t *)(self + 0xa1c) = uVar1;
  } else {
    *(uint32_t *)(self + 0x994) = *(uint32_t *)(arg1 + 0x994);
    *(uint32_t *)(self + 0x998) = *(uint32_t *)(arg1 + 0x998);
    *(uint32_t *)(self + 0x99c) = *(uint32_t *)(arg1 + 0x99c);
    *(uint32_t *)(self + 0x9a0) = *(uint32_t *)(arg1 + 0x9a0);
    *(uint32_t *)(self + 0x9a4) = *(uint32_t *)(arg1 + 0x9a4);
    *(uint32_t *)(self + 0x9a8) = *(uint32_t *)(arg1 + 0x9a8);
    *(uint32_t *)(self + 0x9ac) = *(uint32_t *)(arg1 + 0x9ac);
    *(uint32_t *)(self + 0x9b0) = *(uint32_t *)(arg1 + 0x9b0);
    *(uint32_t *)(self + 0x9b4) = *(uint32_t *)(arg1 + 0x9b4);
    *(uint32_t *)(self + 0x9b8) = *(uint32_t *)(arg1 + 0x9b8);
    *(uint32_t *)(self + 0x9bc) = *(uint32_t *)(arg1 + 0x9bc);
    *(uint32_t *)(self + 0x9c0) = *(uint32_t *)(arg1 + 0x9c0);
    *(uint32_t *)(self + 0x9c4) = *(uint32_t *)(arg1 + 0x9c4);
    *(uint32_t *)(self + 0x9c8) = *(uint32_t *)(arg1 + 0x9c8);
    *(uint32_t *)(self + 0x9cc) = *(uint32_t *)(arg1 + 0x9cc);
    *(uint32_t *)(self + 0x9d0) = *(uint32_t *)(arg1 + 0x9d0);
    *(uint32_t *)(self + 0x9d4) = *(uint32_t *)(arg1 + 0x9d4);
    *(uint32_t *)(self + 0x9d8) = *(uint32_t *)(arg1 + 0x9d8);
    *(uint32_t *)(self + 0x9dc) = *(uint32_t *)(arg1 + 0x9dc);
    *(uint32_t *)(self + 0x9e0) = *(uint32_t *)(arg1 + 0x9e0);
    *(uint32_t *)(self + 0x9e4) = *(uint32_t *)(arg1 + 0x9e4);
    *(uint32_t *)(self + 0x9e8) = *(uint32_t *)(arg1 + 0x9e8);
    *(uint32_t *)(self + 0x9ec) = *(uint32_t *)(arg1 + 0x9ec);
    *(uint32_t *)(self + 0x9f0) = *(uint32_t *)(arg1 + 0x9f0);
    *(uint32_t *)(self + 0x9f4) = *(uint32_t *)(arg1 + 0x9f4);
    *(uint32_t *)(self + 0x9f8) = *(uint32_t *)(arg1 + 0x9f8);
    *(uint32_t *)(self + 0x9fc) = *(uint32_t *)(arg1 + 0x9fc);
    *(uint32_t *)(self + 0xa00) = *(uint32_t *)(arg1 + 0xa00);
    *(uint32_t *)(self + 0xa04) = *(uint32_t *)(arg1 + 0xa04);
    *(uint32_t *)(self + 0xa08) = *(uint32_t *)(arg1 + 0xa08);
    *(uint32_t *)(self + 0xa0c) = *(uint32_t *)(arg1 + 0xa0c);
    *(uint32_t *)(self + 0xa10) = *(uint32_t *)(arg1 + 0xa10);
    *(uint32_t *)(self + 0xa14) = *(uint32_t *)(arg1 + 0xa14);
    *(uint32_t *)(self + 0xa18) = *(uint32_t *)(arg1 + 0xa18);
    *(uint32_t *)(self + 0xa1c) = *(uint32_t *)(arg1 + 0xa1c);
    *(uint32_t *)(self + 0xa20) = *(uint32_t *)(arg1 + 0xa20);
  }
  local_68 = 0;
  local_64 = 0;
  *(uint32_t *)(self + 0xa24) = *(uint32_t *)(arg1 + 0xa24);
  *(uint32_t *)(self + 0xa28) = *(uint32_t *)(arg1 + 0xa28);
  *(uint32_t *)(self + 0xa2c) = *(uint32_t *)(arg1 + 0xa2c);
  *(uint32_t *)(self + 0xa30) = *(uint32_t *)(arg1 + 0xa30);
  this_00 = (BoundingSquare *)0x0;
  *(uint32_t *)(self + 0xa34) = *(uint32_t *)(arg1 + 0xa34);
  local_58 = *(uint32_t *)(self + 0x8cc);
  local_54 = local_58;
  pvVar2 = malloc(0xb4);
  if (pvVar2 != (void *)0x0) {
    this_00 = (BoundingSquare *)((long)pvVar2 + 0x10 + (ulong)(-(int)((long)pvVar2 + 0x10) & 0xf));
    *(uint64_t *)(this_00 + -0x10) = 0x94;
    *(void **)(this_00 + -8) = pvVar2;
  }
  /* try { // try from 00476c4d to 00476c51 has its CatchHandler @ 00476ed1 */
  BoundingSquare__BoundingSquare(this_00, (Vector2 *)&local_68, 0.0, (Vector2 *)&local_58);
  *(BoundingSquare **)(self + 0x48) = this_00;
  *(uint32_t *)(self + 0xd4) = *(uint32_t *)(self + 0x8c8);
  *(uint32_t *)(self + 0xd0) = *(uint32_t *)(self + 0x8c8);
  local_48 = 0;
  local_38 = *(uint32_t *)(self + 0x8d0);
  local_44 = 0;
  local_34 = local_38;
  BoundingSquare__BoundingSquare((BoundingSquare *)&local_108, (Vector2 *)&local_48, 0.0,
                                 (Vector2 *)&local_38);
  *(uint32_t *)(self + 0x740) = local_108;
  Matrix4x4__operator_assign((Matrix4x4 *)(self + 0x744), local_104);
  Matrix4x4__operator_assign((Matrix4x4 *)(self + 0x784), local_c4);
  Vector2__operator_assign((Vector2 *)(self + 0x7c4), local_84);
  Vector2__operator_assign((Vector2 *)(self + 0x7cc), local_7c);
  return;
}

/* ======================================================================
 * MeatBoyCharactor__SetState  (Ghidra `SetState` @ 00476fe0)
 * Signature: uint8_t __thiscall SetState(MeatBoyCharactor * self, tagSuperMeatBoyState arg1)
 * Class: MeatBoyCharactor
 * Calls: `GetRandomINT`
 * Called by: `Tim__RestoreFrame`
 */
/* MeatBoyCharactor__SetState(tagSuperMeatBoyState) */

void __thiscall MeatBoyCharactor__SetState(MeatBoyCharactor *self, int arg2)

{
  long lVar1;
  ushort uVar2;
  uint32_t uVar3;

  if (arg2 != *(int *)(self + 0x7d4)) {
    self[0x7db] = (MeatBoyCharactor)((byte)self[0x7db] | 8);
    uVar3 = 0;
    lVar1 = *(long *)(self + 0xf8) + (long)arg2 * 0x58;
    uVar2 = *(ushort *)(lVar1 + 0x30);
    if (uVar2 != 0) {
      uVar3 = GetRandomINT(0, uVar2 - 1);
    }
    *(uint32_t *)(lVar1 + 0x58) = uVar3;
    *(uint32_t *)(self + 0xa4c) = uVar3;
    *(uint32_t *)(self + 0xa50) = 0;
  }
  *(int *)(self + 0x7d4) = arg2;
  return;
}

/* ======================================================================
 * MeatBoyCharactor__Update  (Ghidra `Update` @ 00477070)
 * Signature: uint8_t __thiscall Update(MeatBoyCharactor * self)
 * Class: MeatBoyCharactor
 * Calls: `Apply2DPhysics`, `AutoLockSection__AutoLockSection`, `AutoLockSection__AutoLockSection__005b59d0`, `BloodyTiles__AddBloodyTile`, `BoundingSquare__Change`, `FlashLibraryInstance__IsPlaying`, `FlashLibraryInstance__Reset`, `GMeatHUD__FreezeTimer`, `GetRandomINT`, `GetTriangleOrientation` (+31 more)
 * Called by: `AlienHominid__Update`, `BandageGirl__Update`, `Brownie__Update`, `CommanderVideo__Update`, `DefaultMeatBoy__Update`, `DrFetus__Update`, `FlyWrench__Update`, `GooBall__Update`, `HeadCrab__Update`, `Jill__Update` (+16 more)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MeatBoyCharactor__Update() */

void __thiscall MeatBoyCharactor__Update(MeatBoyCharactor *self)

{
  Vector2 *pVVar1;
  TAudio *this_00;
  MeatBoyCharactor MVar2;
  byte bVar3;
  MeatBoyCharactor MVar4;
  int iVar5;
  int iVar6;
  uint32_t uVar7;
  int iVar8;
  uint uVar9;
  GRIDBLOCK *pGVar10;
  GRIDBLOCK *pGVar11;
  long lVar12;
  ushort uVar13;
  uint64_t *puVar14;
  uint64_t uVar15;
  BoundingSquare *pBVar16;
  SMBReplay *pSVar17;
  FlashLibraryInstance *pFVar18;
  byte bVar19;
  ushort uVar20;
  bool bVar21;
  byte bVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float local_310;
  byte local_30c;
  BoundingSquare local_2f8[80];
  uint32_t local_2a8;
  uint32_t local_298;
  uint64_t local_258;
  uint64_t uStack_250;
  uint64_t local_248;
  GRIDBLOCK *pGStack_240;
  int local_238;
  int local_234;
  uint32_t local_210;
  AutoLockSection local_208[16];
  uint32_t local_1f8;
  uint32_t local_1f4;
  Vector2 local_1e8[16];
  uint64_t local_1d8;
  Vector2 local_1c8[16];
  Vector2 local_1b8[16];
  Vector2 local_1a8[16];
  Vector2 local_198[16];
  Vector2 local_188[16];
  Vector2 local_178[16];
  Vector2 local_168[16];
  Vector2 local_158[16];
  Vector2 local_148[16];
  Vector2 local_138[16];
  uint64_t local_128[2];
  uint32_t local_118;
  uint32_t local_114;
  uint32_t local_108;
  uint32_t local_104;
  float local_f8;
  uint32_t local_f4;
  float local_e8;
  uint32_t local_e4;
  float local_d8[4];
  float local_c8[4];
  Vector2 local_b8[16];
  Vector2 local_a8[16];
  float local_98;
  uint32_t local_94;
  Vector2 local_88[16];
  Vector2 local_78[16];
  Vector2 local_68[16];
  Vector2 local_58[16];
  int local_48[3];
  int local_3c[3];

  bVar22 = 0;
  AutoLockSection__AutoLockSection(local_208, (CriticalSection *)(self + 0x880));
  self[0x7db] = (MeatBoyCharactor)((byte)self[0x7db] & 0xf7);
  /* try { // try from 004770ab to 004770af has its CatchHandler @ 00479545 */
  SMBPalette__EnableFlags(GSuperMeatBoy__pLevelPalette, 0x3f);
  if ((char)self[0x7db] < '\0') {
    self[0x7db] = (MeatBoyCharactor)((byte)self[0x7db] & 0x7f);
    /* try { // try from 004777cf to 004778ac has its CatchHandler @ 00479545 */
    (**(code **)(*(long *)self + 0x68))(self);
  }
  self[0x7d9] = (MeatBoyCharactor)((byte)self[0x7d9] & 0x7f | ((byte)self[0x7d9] >> 6) << 7);
  if (*(int *)(self + 0x7d4) == 0xe) {
  LAB_004775c1:
    *(uint64_t *)(self + 0x7e0) = 0;
  } else if (*(int *)(self + 0x7d4) == 0x10) {
    lVar12 = *(long *)(self + 0xf8);
    if (*(uint *)(self + 0xa4c) == 0xffffffff) {
      pFVar18 = *(FlashLibraryInstance **)(*(long *)(lVar12 + 0x5c0) +
                                           (ulong) * (ushort *)(lVar12 + 0x5d8) * 8);
    } else {
      pFVar18 = *(FlashLibraryInstance **)(*(long *)(lVar12 + 0x5c0) +
                                           (ulong)(*(uint *)(self + 0xa4c) & 0xffff) * 8);
    }
    /* try { // try from 004775b4 to 00477796 has its CatchHandler @ 00479545 */
    iVar5 = FlashLibraryInstance__IsPlaying(pFVar18);
    if (iVar5 != 0)
      goto LAB_004775c1;
    /* try { // try from 00478450 to 004784a6 has its CatchHandler @ 00479545 */
    GMeatHUD__FreezeTimer(SMBHUD, 0);
    if (*(int *)(self + 0x7d4) != 0) {
      lVar12 = *(long *)(self + 0xf8);
      self[0x7db] = (MeatBoyCharactor)((byte)self[0x7db] | 8);
      uVar7 = 0;
      uVar13 = *(ushort *)(lVar12 + 0x30);
      if (uVar13 != 0) {
        /* try { // try from 00478fe8 to 00478fec has its CatchHandler @ 00479545 */
        uVar7 = GetRandomINT(0, uVar13 - 1);
      }
      *(uint32_t *)(lVar12 + 0x58) = uVar7;
      *(uint32_t *)(self + 0xa4c) = uVar7;
      *(uint32_t *)(self + 0xa50) = 0;
    }
    *(uint32_t *)(self + 0x7d4) = 0;
    uVar15 = SMBReplay__StartReplayFrame(*(SMBReplay **)(self + 0xa38));
    *(uint64_t *)(self + 0x7e0) = uVar15;
  } else {
    if (*(int *)(self + 0xa40) == 1)
      goto LAB_00477797;
    if (*(int *)(self + 0xa40) == 0) {
      uVar15 = SMBReplay__StartReplayFrame(*(SMBReplay **)(self + 0xa38));
      *(uint64_t *)(self + 0x7e0) = uVar15;
      if (*(int *)(self + 0xa40) == 0) {
        pSVar17 = *(SMBReplay **)(self + 0xa38);
        if ((*(int *)(pSVar17 + 0x2c8) == 0) && (0 < *(int *)(pSVar17 + 0x34))) {
          iVar5 = 0;
          do {
            lVar12 = *(long *)(*(long *)(self + 0x7f0) + (long)iVar5 * 8);
            *(byte *)(lVar12 + 0x7db) = *(byte *)(lVar12 + 0x7db) & 0xdf | (byte)self[0x7db] & 0x20;
            (**(code **)(**(long **)(*(long *)(self + 0x7f0) + (long)iVar5 * 8) + 0x40))();
            pSVar17 = *(SMBReplay **)(self + 0xa38);
            iVar5 = iVar5 + 1;
          } while (iVar5 < *(int *)(pSVar17 + 0x34));
          if (*(int *)(self + 0xa40) != 0)
            goto LAB_00477113;
        }
        MVar2 = self[0x7d8];
        if (((byte)MVar2 & 0x40) != 0) {
          SMBReplay__RegisterInput(pSVar17, 1);
          MVar2 = self[0x7d8];
        }
        if (((byte)MVar2 & 0x20) != 0) {
          SMBReplay__RegisterInput(*(SMBReplay **)(self + 0xa38), 2);
        }
        if (*(int *)(self + 0xa40) == 0) {
          (**(code **)(*(long *)self + 0xb8))(self);
          *(float *)(self + 0x7fc) = *(float *)(self + 0x7fc) + *(float *)(Engine + 0x38);
          if ((*(int *)(self + 0xa40) == 0) && (*(int *)(*(long *)(self + 0xa38) + 0x2c8) == 0))
            goto LAB_00477797;
        }
      }
    } else {
      *(uint64_t *)(self + 0x7e0) = 0;
    }
  LAB_00477113:
    if (((byte)self[0x7db] & 0x40) != 0)
      goto LAB_00477797;
    uVar7 = 0xbf800000;
    local_30c = (byte)self[0x7d8] & 1;
    if (((byte)self[0x7d8] & 1) != 0) {
      uVar7 = 0x3f800000;
    }
    bVar21 = Update()::vRight == '\0';
    *(uint32_t *)(self + 0x808) = uVar7;
    if ((bVar21) && (iVar5 = __cxa_guard_acquire(&Update()::vRight), iVar5 != 0)) {
      Update()::vRight._0_4_ = 0x3f800000;
      Update()::vRight._4_4_ = 0;
      __cxa_guard_release(&Update()::vRight);
      __cxa_atexit(Vector2__Vector2, &Update()::vRight, &__dso_handle);
    }
    if ((Update()::vDiagonalUp == '\0') &&
        (iVar5 = __cxa_guard_acquire(&Update()::vDiagonalUp), iVar5 != 0)) {
      Update()::vDiagonalUp = 0x3f800000;
      _DAT_008190c4 /* R:0.0f */ = 0x3f800000;
      __cxa_guard_release(&Update()::vDiagonalUp);
      __cxa_atexit(Vector2__Vector2, &Update()::vDiagonalUp, &__dso_handle);
    }
    puVar14 = (uint64_t *)(*(long *)(SuperMeatBoy + 0x38) + 0x140);
    pBVar16 = local_2f8;
    for (lVar12 = 0x12; lVar12 != 0; lVar12 = lVar12 + -1) {
      *(uint64_t *)pBVar16 = *puVar14;
      puVar14 = puVar14 + (ulong)bVar22 * -2 + 1;
      pBVar16 = pBVar16 + ((ulong)bVar22 * -2 + 1) * 8;
    }
    *(uint32_t *)pBVar16 = *(uint32_t *)puVar14;
    local_1f8 = local_2a8;
    local_1f4 = local_298;
    /* try { // try from 004771ae to 004771e3 has its CatchHandler @ 00479555 */
    Vector2__operator_mul__005be200(local_1e8, DAT_005c07b4 /* R:1.149999976158142f */);
    BoundingSquare__Change(local_2f8, local_1e8, 0.0, (Vector2 *)&local_1f8);
    pVVar1 = (Vector2 *)(self + 0xa0);
    iVar5 = IsPointWithinBoundingSquare(local_2f8, pVVar1);
    if (((iVar5 == 0) && (*(int *)(self + 0xa40) == 0)) &&
        (*(int *)(*(long *)(self + 0xa38) + 0x2c8) == 1)) {
      self[0x7d9] = (MeatBoyCharactor)((byte)self[0x7d9] | 1);
      /* try { // try from 0047852c to 0047854a has its CatchHandler @ 00479555 */
      (**(code **)(*(long *)self + 0xe0))(self);
      (**(code **)(*(long *)self + 0x68))(self);
      TileLevel__ResetLevel(*(TileLevel **)(SuperMeatBoy + 0x40));
      goto LAB_00477797;
    }
    local_1d8 = CONCAT44(Update()::vRight._4_4_, (uint32_t)Update()::vRight);
    lVar12 = *(long *)(self + 0x830);
    MVar2 = self[0x7d9];
    self[0x7d9] = (MeatBoyCharactor)((byte)MVar2 & 0xf5);
    bVar22 = (byte)MVar2 >> 1 & 1;
    uVar13 = *(ushort *)(self + 0x7da) & 0xf800 | 5;
    *(ushort *)(self + 0x7da) = uVar13;
    MVar2 = self[0x7d8];
    local_48[0] = 5;
    bVar19 = (byte)MVar2 >> 1 & 1;
    if ((lVar12 == 0) || ((*(byte *)(lVar12 + 2) & 0xc) != 8)) {
      lVar12 = *(long *)(self + 0x828);
      if ((lVar12 != 0) && ((*(byte *)(lVar12 + 2) & 0xc) == 8)) {
        bVar3 = IsOnTrianglePart(lVar12, self + 0x850, *(uint32_t *)(self + 0x83c), local_48);
        goto LAB_004784cd;
      }
      lVar12 = *(long *)(self + 0x818);
      if ((lVar12 == 0) || ((*(byte *)(lVar12 + 2) & 0xc) != 8)) {
        lVar12 = *(long *)(self + 0x820);
        if ((lVar12 != 0) && ((*(byte *)(lVar12 + 2) & 0xc) == 8)) {
          bVar3 = IsOnTrianglePart(lVar12, self + 0x848, *(uint32_t *)(self + 0x838), local_48);
          goto LAB_004789d0;
        }
        uVar20 = 5;
        bVar3 = 0;
        goto LAB_004772f2;
      }
      bVar3 = IsOnTrianglePart(lVar12, self + 0x840, *(uint32_t *)(self + 0x838), local_48);
    LAB_004789d0:
      self[0x7d9] = (MeatBoyCharactor)((byte)self[0x7d9] & 0xfd | (bVar3 & 1) * '\x02');
      if ((bVar3 & 1) == 0) {
        MVar2 = self[0x7d8];
        uVar13 = *(ushort *)(self + 0x7da);
        uVar20 = (short)((short)local_48[0] << 5) >> 5;
        goto LAB_0047730c;
      }
      local_1d8 = CONCAT44(_DAT_008190c4 /* R:0.0f */ ^ DAT_005be6f0 /* R:u32=2147483648 */,
                           Update()::vDiagonalUp);
      uVar20 = (short)((short)local_48[0] << 5) >> 5;
      MVar2 = self[0x7d8];
      *(ushort *)(self + 0x7da) = *(ushort *)(self + 0x7da) & 0xf800 | uVar20 & 0x7ff;
    } else {
      /* try { // try from 004784c8 to 004784cc has its CatchHandler @ 00479382 */
      bVar3 = IsOnTrianglePart(lVar12, self + 0x858, *(uint32_t *)(self + 0x83c), local_48);
    LAB_004784cd:
      MVar4 = (MeatBoyCharactor)((byte)self[0x7d9] & 0xfd | (bVar3 & 1) * '\x02');
      self[0x7d9] = MVar4;
      if ((bVar3 & 1) != 0) {
        /* try { // try from 00478ce7 to 00478ceb has its CatchHandler @ 00479382 */
        Vector2__operator_assign((Vector2 *)&local_1d8, (Vector2 *)&Update()::vDiagonalUp);
        MVar4 = self[0x7d9];
      }
      MVar2 = self[0x7d8];
      uVar13 = *(ushort *)(self + 0x7da);
      self[0x7d9] = (MeatBoyCharactor)((byte)MVar4 | 8);
      bVar3 = (byte)MVar4 & 2;
      uVar20 = (short)((short)local_48[0] << 5) >> 5;
    LAB_004772f2:
      uVar13 = uVar13 & 0xf800 | uVar20 & 0x7ff;
      *(ushort *)(self + 0x7da) = uVar13;
      if (bVar3 == 0) {
      LAB_0047730c:
        *(ushort *)(self + 0x7da) = uVar13 & 0xf800 | 5;
      }
    }
    if (((byte)MVar2 & 1) != 0) {
      local_1d8 = CONCAT44(local_1d8._4_4_, (uint)local_1d8 ^ DAT_005be6f0 /* R:u32=2147483648 */);
    }
    pBVar16 = (BoundingSquare *)(self + 0x740);
    /* try { // try from 00477351 to 00477583 has its CatchHandler @ 00479382 */
    iVar5 = SMBPalette__ApplyObstacleForces((SceneObject2D *)GSuperMeatBoy__pLevelPalette,
                                            (Bounds *)self);
    if (iVar5 == 0) {
      MVar2 = self[0x7d9];
      bVar21 = ((byte)MVar2 & 0x10) != 0;
    } else {
      bVar21 = true;
      MVar2 = self[0x7d9];
    }
    MVar4 = (MeatBoyCharactor)((byte)MVar2 & 0xef | bVar21 << 4);
    self[0x7d9] = MVar4;
    if (0.0 < *(float *)(self + 0xf0)) {
      MVar4 = (MeatBoyCharactor)((byte)MVar2 & 0xcf | bVar21 << 4);
      self[0x7d9] = MVar4;
    }
    fVar25 = *(float *)(self + 0x80c);
    local_310 = _DAT_005c0074 /* R:30.0f */ * fVar25;
    fVar23 = DAT_005c07b8 /* R:60.0f */ * fOneFrameTimeStep;
    if (((byte)MVar4 & 0x10) != 0) {
      local_310 = (float)(*(uint *)(self + 0xec) & DAT_005be880 /* R:u32=2147483647 */) *
                      fOneFrameTimeStep +
                  local_310;
    }
    if ((*(ushort *)(self + 0x7da) & 0x7ff) == 0) {
      if (*(float *)(self + 0xb8) <= 0.0 && *(float *)(self + 0xb8) != 0.0) {
      LAB_004781f2:
        if (((byte)MVar4 & 2) != 0) {
          local_310 = local_310 * *(float *)(self + 0xa30);
        }
      }
    } else if (((*(ushort *)(self + 0x7da) & 0x7ff) == 1) && (0.0 < *(float *)(self + 0xb8)))
      goto LAB_004781f2;
    MVar2 = self[0x7d8];
    if (((byte)MVar2 & 2) == 0) {
      iVar5 = 5 - (uint)(((byte)MVar2 & 0x40) == 0);
      /* try { // try from 004779b1 to 004779fa has its CatchHandler @ 00479382 */
      (**(code **)(*(long *)self + 0xc0))(self);
      if (((byte)self[0x7d8] & 0x10) == 0) {
        if (((byte)self[0x7d8] & 8) == 0) {
          if ((*(int *)(self + 0x7d4) != 0xf) && (*(int *)(self + 0x7d4) != 10)) {
            if (((byte)self[0x7d9] & 0x10) == 0) {
              *(uint32_t *)(self + 0xb8) = 0;
            } else {
              fVar25 = (float)Vector2__Dot((Vector2 *)(self + 0xb8), (Vector2 *)(self + 0xec));
              if (fVar25 <= 0.0) {
                *(uint32_t *)(self + 0xb8) = 0;
              }
            }
            if (uVar20 == 0) {
              if (((byte)self[0x7d8] & 1) == 0) {
              LAB_00479145:
                SetState(self, 0x15);
              } else {
              LAB_004788fd:
                /* try { // try from 00478905 to 00478a8e has its CatchHandler @ 00479382 */
                SetState(self, 0x14);
              }
            } else {
              if (uVar20 == 1) {
                if (((byte)self[0x7d8] & 1) != 0)
                  goto LAB_00479145;
                goto LAB_004788fd;
              }
              if (*(int *)(self + 0x7d4) != 0) {
                lVar12 = *(long *)(self + 0xf8);
                self[0x7db] = (MeatBoyCharactor)((byte)self[0x7db] | 8);
                uVar7 = 0;
                uVar13 = *(ushort *)(lVar12 + 0x30);
                if (uVar13 != 0) {
                  /* try { // try from 00479306 to 0047931c has its CatchHandler @ 00479382 */
                  uVar7 = GetRandomINT(0, uVar13 - 1);
                }
                *(uint32_t *)(lVar12 + 0x58) = uVar7;
                *(uint32_t *)(self + 0xa4c) = uVar7;
                *(uint32_t *)(self + 0xa50) = 0;
              }
              *(uint32_t *)(self + 0x7d4) = 0;
            }
          }
        } else {
          if (*(float *)(self + 0xb8) <= 0.0 && *(float *)(self + 0xb8) != 0.0) {
            fVar25 = *(float *)(self + 0xa34);
            Vector2__operator_mul__005be200(local_178, *(float *)(self + 0x80c));
            /* try { // try from 00478f95 to 00478f99 has its CatchHandler @ 004793a2 */
            Vector2__operator_mul__005be200(local_168, fVar25);
            /* try { // try from 00478fb0 to 00478fc8 has its CatchHandler @ 0047939d */
            Vector2__operator_mul__005be200(local_158, fVar23);
            Vector2__operator_plus_assign((Vector2 *)(self + 0xb8), local_158);
          } else {
            Vector2__operator_mul__005be200(local_148, *(float *)(self + 0x80c));
            /* try { // try from 00477a11 to 00477a29 has its CatchHandler @ 0047937e */
            Vector2__operator_mul__005be200(local_138, fVar23);
            Vector2__operator_plus_assign((Vector2 *)(self + 0xb8), local_138);
          }
          if (*(int *)(self + 0x7d4) != 10) {
            if (*(int *)(self + 0x7d4) != iVar5) {
              self[0x7db] = (MeatBoyCharactor)((byte)self[0x7db] | 8);
              lVar12 = *(long *)(self + 0xf8) + (long)iVar5 * 0x58;
              uVar7 = 0;
              uVar13 = *(ushort *)(lVar12 + 0x30);
              if (uVar13 != 0) {
                uVar7 = GetRandomINT(0, uVar13 - 1);
              }
              *(uint32_t *)(lVar12 + 0x58) = uVar7;
              *(uint32_t *)(self + 0xa4c) = uVar7;
              *(uint32_t *)(self + 0xa50) = 0;
            }
            *(int *)(self + 0x7d4) = iVar5;
          }
          self[0x7d8] = (MeatBoyCharactor)((byte)self[0x7d8] & 0xfe);
        }
      } else {
        if (*(float *)(self + 0xb8) <= 0.0) {
          /* try { // try from 00478c8a to 00478c8e has its CatchHandler @ 00479382 */
          Vector2__operator_mul__005be200(local_198, *(float *)(self + 0x80c));
          /* try { // try from 00478ca5 to 00478cbd has its CatchHandler @ 00479366 */
          Vector2__operator_mul__005be200(local_188, fVar23);
          Vector2__operator_plus_assign((Vector2 *)(self + 0xb8), local_188);
        } else {
          fVar25 = *(float *)(self + 0xa34);
          Vector2__operator_mul__005be200(local_1c8, *(float *)(self + 0x80c));
          /* try { // try from 004783a5 to 004783a9 has its CatchHandler @ 00479535 */
          Vector2__operator_mul__005be200(local_1b8, fVar25);
          /* try { // try from 004783c0 to 004783d8 has its CatchHandler @ 0047952e */
          Vector2__operator_mul__005be200(local_1a8, fVar23);
          Vector2__operator_plus_assign((Vector2 *)(self + 0xb8), local_1a8);
        }
        if (*(int *)(self + 0x7d4) != 10) {
          if (*(int *)(self + 0x7d4) != iVar5) {
            self[0x7db] = (MeatBoyCharactor)((byte)self[0x7db] | 8);
            lVar12 = *(long *)(self + 0xf8) + (long)iVar5 * 0x58;
            uVar7 = 0;
            uVar13 = *(ushort *)(lVar12 + 0x30);
            if (uVar13 != 0) {
              /* try { // try from 00479074 to 00479078 has its CatchHandler @ 00479382 */
              uVar7 = GetRandomINT(0, uVar13 - 1);
            }
            *(uint32_t *)(lVar12 + 0x58) = uVar7;
            *(uint32_t *)(self + 0xa4c) = uVar7;
            *(uint32_t *)(self + 0xa50) = 0;
          }
          *(int *)(self + 0x7d4) = iVar5;
        }
        self[0x7d8] = (MeatBoyCharactor)((byte)self[0x7d8] | 1);
      }
    } else {
      if (((byte)MVar4 & 0x20) != 0) {
        fVar24 = (float)((uint)(*(float *)(self + 0xa4) - *(float *)(self + 0x804)) &
                         DAT_005be880 /* R:u32=2147483647 */);
        if (fVar24 <= *(float *)(self + 0x800)) {
          fVar24 = *(float *)(self + 0x800);
        }
        *(float *)(self + 0x800) = fVar24;
        if (((((byte)MVar2 & 0x20) == 0) && (0.0 < *(float *)(self + 0xbc))) &&
            (TileLevel__fLevelGridWH <= fVar24)) {
          *(uint32_t *)(self + 0xbc) = 0;
        }
      }
      if (((byte)MVar2 & 0x10) == 0) {
        if (((byte)MVar2 & 8) != 0) {
          fVar24 = *(float *)(self + 0xb8);
          if (fVar24 < 0.0) {
            *(float *)(self + 0xb8) = fVar25 * *(float *)(self + 0xa34) * fVar23 + fVar24;
          } else {
            *(float *)(self + 0xb8) = fVar25 * fVar23 + fVar24;
          }
          if (((byte)MVar2 & 1) != 0) {
            if (*(float *)(self + 0xbc) <= 0.0 && *(float *)(self + 0xbc) != 0.0) {
              if (*(int *)(self + 0x7d4) == 0xc) {
                uVar9 = *(uint *)(self + 0xa4c);
              } else {
                lVar12 = *(long *)(self + 0xf8);
                self[0x7db] = (MeatBoyCharactor)((byte)self[0x7db] | 8);
                uVar9 = 0;
                uVar13 = *(ushort *)(lVar12 + 0x450);
                if (uVar13 != 0) {
                  uVar9 = GetRandomINT(0, uVar13 - 1);
                }
                *(uint *)(lVar12 + 0x478) = uVar9;
                *(uint *)(self + 0xa4c) = uVar9;
                *(uint32_t *)(self + 0xa50) = 0;
              }
              *(uint32_t *)(self + 0x7d4) = 0xc;
              iVar5 = 0xc;
            } else {
              if (*(int *)(self + 0x7d4) == 0xb) {
                uVar9 = *(uint *)(self + 0xa4c);
              } else {
                lVar12 = *(long *)(self + 0xf8);
                self[0x7db] = (MeatBoyCharactor)((byte)self[0x7db] | 8);
                uVar9 = 0;
                uVar13 = *(ushort *)(lVar12 + 0x3f8);
                if (uVar13 != 0) {
                  uVar9 = GetRandomINT(0, uVar13 - 1);
                }
                *(uint *)(lVar12 + 0x420) = uVar9;
                *(uint *)(self + 0xa4c) = uVar9;
                *(uint32_t *)(self + 0xa50) = 0;
              }
              *(uint32_t *)(self + 0x7d4) = 0xb;
              iVar5 = 0xb;
            }
            lVar12 = *(long *)(self + 0xf8) + (long)iVar5 * 0x58;
            if (uVar9 == 0xffffffff) {
              pFVar18 = *(FlashLibraryInstance **)(*(long *)(lVar12 + 0x40) +
                                                   (ulong) * (ushort *)(lVar12 + 0x58) * 8);
            } else {
              pFVar18 = *(FlashLibraryInstance **)(*(long *)(lVar12 + 0x40) +
                                                   (ulong)(uVar9 & 0xffff) * 8);
            }
            FlashLibraryInstance__Reset(pFVar18);
            MVar2 = self[0x7d8];
          }
          self[0x7d8] = (MeatBoyCharactor)((byte)MVar2 & 0xfe);
        }
      } else {
        fVar24 = *(float *)(self + 0xb8);
        if (fVar24 <= 0.0) {
          *(float *)(self + 0xb8) = fVar24 - fVar25 * fVar23;
        } else {
          *(float *)(self + 0xb8) = (float)((uint)fVar25 ^ DAT_005be6f0 /* R:u32=2147483648 */) *
                                        fVar23 * *(float *)(self + 0xa34) +
                                    fVar24;
        }
        if (((byte)MVar2 & 1) == 0) {
          if (*(float *)(self + 0xbc) <= 0.0 && *(float *)(self + 0xbc) != 0.0) {
            if (*(int *)(self + 0x7d4) == 0xc) {
              uVar9 = *(uint *)(self + 0xa4c);
            } else {
              lVar12 = *(long *)(self + 0xf8);
              self[0x7db] = (MeatBoyCharactor)((byte)self[0x7db] | 8);
              uVar9 = 0;
              uVar13 = *(ushort *)(lVar12 + 0x450);
              if (uVar13 != 0) {
                /* try { // try from 00479284 to 004792b7 has its CatchHandler @ 00479382 */
                uVar9 = GetRandomINT(0, uVar13 - 1);
              }
              *(uint *)(lVar12 + 0x478) = uVar9;
              *(uint *)(self + 0xa4c) = uVar9;
              *(uint32_t *)(self + 0xa50) = 0;
            }
            *(uint32_t *)(self + 0x7d4) = 0xc;
            iVar5 = 0xc;
          } else {
            if (*(int *)(self + 0x7d4) == 0xb) {
              uVar9 = *(uint *)(self + 0xa4c);
            } else {
              lVar12 = *(long *)(self + 0xf8);
              self[0x7db] = (MeatBoyCharactor)((byte)self[0x7db] | 8);
              uVar9 = 0;
              uVar13 = *(ushort *)(lVar12 + 0x3f8);
              if (uVar13 != 0) {
                /* try { // try from 0047912e to 004791f3 has its CatchHandler @ 00479382 */
                uVar9 = GetRandomINT(0, uVar13 - 1);
              }
              *(uint *)(lVar12 + 0x420) = uVar9;
              *(uint *)(self + 0xa4c) = uVar9;
              *(uint32_t *)(self + 0xa50) = 0;
            }
            *(uint32_t *)(self + 0x7d4) = 0xb;
            iVar5 = 0xb;
          }
          lVar12 = *(long *)(self + 0xf8) + (long)iVar5 * 0x58;
          if (uVar9 == 0xffffffff) {
            pFVar18 = *(FlashLibraryInstance **)(*(long *)(lVar12 + 0x40) +
                                                 (ulong) * (ushort *)(lVar12 + 0x58) * 8);
          } else {
            pFVar18 =
                *(FlashLibraryInstance **)(*(long *)(lVar12 + 0x40) + (ulong)(uVar9 & 0xffff) * 8);
          }
          /* try { // try from 0047833a to 0047838e has its CatchHandler @ 00479382 */
          FlashLibraryInstance__Reset(pFVar18);
          MVar2 = self[0x7d8];
        }
        self[0x7d8] = (MeatBoyCharactor)((byte)MVar2 | 1);
      }
      (**(code **)(*(long *)self + 0xa0))(self);
    }
    /* try { // try from 00477a9e to 00477aa3 has its CatchHandler @ 00479382 */
    (**(code **)(*(long *)self + 0x98))(self);
    fVar25 = (float)(DAT_005be6f0 /* R:u32=2147483648 */ ^ (uint)local_310);
    if ((float)(DAT_005be6f0 /* R:u32=2147483648 */ ^ (uint)local_310) <= *(float *)(self + 0xb8)) {
      fVar25 = *(float *)(self + 0xb8);
    }
    if (local_310 <= fVar25) {
      fVar25 = local_310;
    }
    *(float *)(self + 0xb8) = fVar25;
    if ((*(ushort *)(self + 0x7d8) & 0x202) == 0x200) {
      *(float *)(self + 0xbc) =
          (float)((uint)fVar25 & DAT_005be880 /* R:u32=2147483647 */) * local_1d8._4_4_;
    }
    MVar2 = self[0x7d8];
    if (local_30c != ((byte)MVar2 & 1)) {
      if (((byte)MVar2 & 2) == 0) {
        if (*(int *)(self + 0x7d4) == 10) {
          uVar9 = *(uint *)(self + 0xa4c);
        } else {
          lVar12 = *(long *)(self + 0xf8);
          self[0x7db] = (MeatBoyCharactor)((byte)self[0x7db] | 8);
          uVar9 = 0;
          uVar13 = *(ushort *)(lVar12 + 0x3a0);
          if (uVar13 != 0) {
            /* try { // try from 00478e33 to 00478f7e has its CatchHandler @ 00479382 */
            uVar9 = GetRandomINT(0, uVar13 - 1);
          }
          *(uint *)(lVar12 + 0x3c8) = uVar9;
          *(uint *)(self + 0xa4c) = uVar9;
          *(uint32_t *)(self + 0xa50) = 0;
        }
        *(uint32_t *)(self + 0x7d4) = 10;
        lVar12 = *(long *)(self + 0xf8);
        if (uVar9 == 0xffffffff) {
          pFVar18 = *(FlashLibraryInstance **)(*(long *)(lVar12 + 0x3b0) +
                                               (ulong) * (ushort *)(lVar12 + 0x3c8) * 8);
        } else {
          pFVar18 =
              *(FlashLibraryInstance **)(*(long *)(lVar12 + 0x3b0) + (ulong)(uVar9 & 0xffff) * 8);
        }
      } else {
        if (((byte)MVar2 & 6) != 2)
          goto LAB_00477b03;
        if (*(float *)(self + 0xbc) <= 0.0) {
          if (*(int *)(self + 0x7d4) == 0xc) {
            uVar9 = *(uint *)(self + 0xa4c);
          } else {
            lVar12 = *(long *)(self + 0xf8);
            self[0x7db] = (MeatBoyCharactor)((byte)self[0x7db] | 8);
            uVar9 = 0;
            uVar13 = *(ushort *)(lVar12 + 0x450);
            if (uVar13 != 0) {
              uVar9 = GetRandomINT(0, uVar13 - 1);
            }
            *(uint *)(lVar12 + 0x478) = uVar9;
            *(uint *)(self + 0xa4c) = uVar9;
            *(uint32_t *)(self + 0xa50) = 0;
          }
          *(uint32_t *)(self + 0x7d4) = 0xc;
          iVar5 = 0xc;
        } else {
          if (*(int *)(self + 0x7d4) == 0xb) {
            uVar9 = *(uint *)(self + 0xa4c);
          } else {
            lVar12 = *(long *)(self + 0xf8);
            self[0x7db] = (MeatBoyCharactor)((byte)self[0x7db] | 8);
            uVar9 = 0;
            uVar13 = *(ushort *)(lVar12 + 0x3f8);
            if (uVar13 != 0) {
              /* try { // try from 004790ff to 00479103 has its CatchHandler @ 00479382 */
              uVar9 = GetRandomINT(0, uVar13 - 1);
            }
            *(uint *)(lVar12 + 0x420) = uVar9;
            *(uint *)(self + 0xa4c) = uVar9;
            *(uint32_t *)(self + 0xa50) = 0;
          }
          *(uint32_t *)(self + 0x7d4) = 0xb;
          iVar5 = 0xb;
        }
        lVar12 = *(long *)(self + 0xf8) + (long)iVar5 * 0x58;
        if (uVar9 == 0xffffffff) {
          pFVar18 = *(FlashLibraryInstance **)(*(long *)(lVar12 + 0x40) +
                                               (ulong) * (ushort *)(lVar12 + 0x58) * 8);
        } else {
          pFVar18 =
              *(FlashLibraryInstance **)(*(long *)(lVar12 + 0x40) + (ulong)(uVar9 & 0xffff) * 8);
        }
      }
      /* try { // try from 00478716 to 0047871a has its CatchHandler @ 00479382 */
      FlashLibraryInstance__Reset(pFVar18);
    }
  LAB_00477b03:
    *(uint32_t *)(self + 0x94) = *(uint32_t *)(self + 0x8c0);
    *(uint32_t *)(self + 0xd4) = *(uint32_t *)(self + 0x8c8);
    *(uint32_t *)(self + 0xd0) = *(uint32_t *)(self + 0x8c8);
    local_128[0] = *(uint64_t *)(self + 0xec);
    if (((((byte)self[0x7d9] & 2) == 0) && (bVar22 != 0)) && (((byte)self[0x7d8] & 0x20) == 0)) {
      *(uint32_t *)(self + 0xbc) = 0;
    }
    /* try { // try from 00477b5c to 00477bf9 has its CatchHandler @ 00479380 */
    Apply2DPhysics((SceneObject2D *)self, fOneFrameTimeStep);
    TileLevel__TileCollision(*(TileLevel **)(SuperMeatBoy + 0x40), (SceneObject2D *)self,
                             (TileCollisionInfo *)(self + 0x818));
    local_118 = *(uint32_t *)(self + 0x8cc);
    local_114 = local_118;
    BoundingSquare__Change(*(BoundingSquare **)(self + 0x48), (Vector2 *)&local_118, 0.0, pVVar1);
    local_108 = *(uint32_t *)(self + 0x8d0);
    local_104 = local_108;
    BoundingSquare__Change(pBVar16, (Vector2 *)&local_108, 0.0, pVVar1);
    iVar5 = SMBPalette__ObstacleCollision(GSuperMeatBoy__pLevelPalette, (SceneObject2D *)self,
                                          (Bounds *)pBVar16);
    /* try { // try from 00478564 to 00478579 has its CatchHandler @ 00479380 */
    if (((((iVar5 == 1) || (iVar5 = SMBAnimals__AnimalCollision(
                                *(SMBAnimals **)(GSuperMeatBoy__pLevelPalette + 0x41e8),
                                (SceneObject2D *)self, (Bounds *)pBVar16),
                            iVar5 == 1)) ||
          (iVar5 = SMBBossCollision(pBVar16), iVar5 == 1)) &&
         ((iVar5 = (**(code **)(*(long *)self + 0xe8))(self),
           iVar5 == 1 && (_SMB_GLOBAL_INVINCIBLE == 0)))) &&
        ((*(int *)(self + 0xa40) == 0 ||
          ((*(int *)(self + 0xa40) == 1 &&
            (*(int *)(self + 0xa90) != *(int *)(*(long *)(self + 0xa38) + 0x3c))))))) {
      if (*(int *)(self + 0x7d4) == 0xe) {
        uVar9 = *(uint *)(self + 0xa4c);
      } else {
        lVar12 = *(long *)(self + 0xf8);
        self[0x7db] = (MeatBoyCharactor)((byte)self[0x7db] | 8);
        uVar9 = 0;
        uVar13 = *(ushort *)(lVar12 + 0x500);
        if (uVar13 != 0) {
          /* try { // try from 00478fd6 to 00478fda has its CatchHandler @ 00479380 */
          uVar9 = GetRandomINT(0, uVar13 - 1);
        }
        *(uint *)(lVar12 + 0x528) = uVar9;
        *(uint *)(self + 0xa4c) = uVar9;
        *(uint32_t *)(self + 0xa50) = 0;
      }
      *(uint32_t *)(self + 0x7d4) = 0xe;
      lVar12 = *(long *)(self + 0xf8);
      if (uVar9 == 0xffffffff) {
        pFVar18 = *(FlashLibraryInstance **)(*(long *)(lVar12 + 0x510) +
                                             (ulong) * (ushort *)(lVar12 + 0x528) * 8);
      } else {
        pFVar18 =
            *(FlashLibraryInstance **)(*(long *)(lVar12 + 0x510) + (ulong)(uVar9 & 0xffff) * 8);
      }
      /* try { // try from 00478857 to 00478887 has its CatchHandler @ 00479380 */
      FlashLibraryInstance__Reset(pFVar18);
      (**(code **)(*(long *)self + 0xe0))(self);
      SMBCamera__ScreenShake(*(SMBCamera **)(SuperMeatBoy + 0x38), DAT_005c0068 /* R:2.0f */,
                             DAT_005be6e4 /* R:0.5f */);
      self[0x7d9] = (MeatBoyCharactor)((byte)self[0x7d9] | 1);
    }
    local_258 = 0;
    uStack_250 = 0;
    local_248 = 0;
    pGStack_240 = (GRIDBLOCK *)0x0;
    local_238 = 0;
    local_234 = 0;
    local_210 = 1;
    /* try { // try from 00477c69 to 00477e86 has its CatchHandler @ 00479386 */
    bVar3 = SMBPalette__PlatformCollision(GSuperMeatBoy__pLevelPalette, (SceneObject2D *)self,
                                          (TileCollisionInfo *)&local_258,
                                          (TileCollisionInfo *)(self + 0x818));
    MVar2 = self[0x7d9];
    self[0x7d9] = (MeatBoyCharactor)((byte)MVar2 & 0xbf | (bVar3 & 1) << 6);
    if (((byte)self[0x7d8] & 4) == 0) {
      *(float *)(self + 0xf0) = *(float *)(self + 0xf0) + *(float *)(self + 0x8c4);
    } else {
      *(float *)(self + 0xf0) =
          (DAT_005be894 /* R:1.0f */ - *(float *)(self + 0x8bc)) * *(float *)(self + 0x8c4) +
          *(float *)(self + 0xf0);
    }
    if (((byte)MVar2 & 0x80) == 0 && (bVar3 & 1) == 0) {
      if (*(long *)(self + 0x820) != 0) {
        BloodyTiles__AddBloodyTile((BloodyTiles *)(SuperMeatBoy + 0x50), *(long *)(self + 0x820),
                                   *(uint32_t *)(self + 0x838), self + 0x848,
                                   (int)((short)(*(short *)(self + 0x7da) << 5) >> 5),
                                   *(uint64_t *)(*(long *)(self + 0xf8) + 0x880));
      }
      if (*(long *)(self + 0x818) != 0) {
        BloodyTiles__AddBloodyTile((BloodyTiles *)(SuperMeatBoy + 0x50), *(long *)(self + 0x818),
                                   *(uint32_t *)(self + 0x838), self + 0x840,
                                   (int)((short)(*(short *)(self + 0x7da) << 5) >> 5),
                                   *(uint64_t *)(*(long *)(self + 0xf8) + 0x880));
      }
      if (*(long *)(self + 0x830) != 0) {
        BloodyTiles__AddBloodyTile((BloodyTiles *)(SuperMeatBoy + 0x50), *(long *)(self + 0x830),
                                   *(uint32_t *)(self + 0x83c), self + 0x858,
                                   (int)((short)(*(short *)(self + 0x7da) << 5) >> 5),
                                   *(uint64_t *)(*(long *)(self + 0xf8) + 0x880));
      }
      if (*(long *)(self + 0x828) != 0) {
        BloodyTiles__AddBloodyTile((BloodyTiles *)(SuperMeatBoy + 0x50), *(long *)(self + 0x828),
                                   *(uint32_t *)(self + 0x83c), self + 0x850,
                                   (int)((short)(*(short *)(self + 0x7da) << 5) >> 5),
                                   *(uint64_t *)(*(long *)(self + 0xf8) + 0x880));
      }
    }
    if (*(int *)(self + 0xa40) == 1) {
      /* try { // try from 004788a1 to 004788b1 has its CatchHandler @ 00479386 */
      SMBPalette__SetReplayIndex(GSuperMeatBoy__pLevelPalette, *(int *)(self + 0xa90));
      SMBPalette__ReplayUpdate(GSuperMeatBoy__pLevelPalette);
    }
    if (local_238 != 0) {
      *(int *)(self + 0x838) = local_238;
      *(uint64_t *)(self + 0x818) = local_258;
      *(uint64_t *)(self + 0x820) = uStack_250;
    }
    if (local_234 == 0) {
      pGVar10 = *(GRIDBLOCK **)(self + 0x830);
    } else {
      *(int *)(self + 0x83c) = local_234;
      *(uint64_t *)(self + 0x828) = local_248;
      *(GRIDBLOCK **)(self + 0x830) = pGStack_240;
      pGVar10 = pGStack_240;
    }
    if (pGVar10 == (GRIDBLOCK *)0x0) {
      bVar21 = true;
    } else {
      iVar5 = SMBPalette__ApplyTredmillForce(GSuperMeatBoy__pLevelPalette, pGVar10,
                                             (SceneObject2D *)self);
      bVar21 = iVar5 == 0;
    }
    if ((bVar21) && (*(GRIDBLOCK **)(self + 0x828) != (GRIDBLOCK *)0x0)) {
      /* try { // try from 00478605 to 0047864d has its CatchHandler @ 00479386 */
      SMBPalette__ApplyTredmillForce(GSuperMeatBoy__pLevelPalette, *(GRIDBLOCK **)(self + 0x828),
                                     (SceneObject2D *)self);
    }
    if (*(GRIDBLOCK **)(self + 0x820) == (GRIDBLOCK *)0x0) {
      bVar21 = true;
    } else {
      iVar5 = SMBPalette__ApplyTredmillForce(GSuperMeatBoy__pLevelPalette,
                                             *(GRIDBLOCK **)(self + 0x820), (SceneObject2D *)self);
      bVar21 = iVar5 == 0;
    }
    if ((bVar21) && (*(GRIDBLOCK **)(self + 0x818) != (GRIDBLOCK *)0x0)) {
      SMBPalette__ApplyTredmillForce(GSuperMeatBoy__pLevelPalette, *(GRIDBLOCK **)(self + 0x818),
                                     (SceneObject2D *)self);
    }
    if (((byte)GSuperMeatBoy__pLevelPalette_0x60 & 4) != 0) {
      SMBCamera__SetCameraPosition2D(*(SMBCamera **)(SuperMeatBoy + 0x38), pVVar1);
      Vector2__operator_assign((Vector2 *)(self + 0x868), pVVar1);
    }
    iVar5 = *(int *)(self + 0x7d4);
    if (iVar5 == 0xe)
      goto LAB_004775cc;
    MVar2 = self[0x7d8];
    bVar3 = (byte)MVar2 & 2;
    if ((((byte)MVar2 & 2) == 0) || (bVar19 == 0))
      goto LAB_004780b8;
    lVar12 = *(long *)(self + 0x820);
    if (*(float *)(self + 0x8c4) <= 0.0) {
      if ((((lVar12 == 0) || ((*(byte *)(lVar12 + 2) & 0xc) == 8)) &&
           ((*(long *)(self + 0x818) == 0 ||
             ((*(byte *)(*(long *)(self + 0x818) + 2) & 0xc) == 8)))) ||
          (*(int *)(self + 0x838) != 2))
        goto LAB_00477f12;
    LAB_00478699:
      bVar3 = 0;
      self[0x7d8] = (MeatBoyCharactor)((byte)MVar2 & 0xf9);
    } else {
      if ((((lVar12 != 0) && ((*(byte *)(lVar12 + 2) & 0xc) != 8)) ||
           ((*(long *)(self + 0x818) != 0 &&
             ((*(byte *)(*(long *)(self + 0x818) + 2) & 0xc) != 8)))) &&
          (*(int *)(self + 0x838) == 1))
        goto LAB_00478699;
    LAB_00477f12:
      if (((byte)self[0x7d9] & 2) != 0)
        goto LAB_00478699;
      if ((((*(float *)(self + 0xbc) <= 0.0 && *(float *)(self + 0xbc) != 0.0) &&
            (iVar5 != 0x13)) &&
           (iVar5 != 8)) &&
          (iVar5 != 9)) {
        if (iVar5 != 7) {
          lVar12 = *(long *)(self + 0xf8);
          self[0x7db] = (MeatBoyCharactor)((byte)self[0x7db] | 8);
          uVar7 = 0;
          uVar13 = *(ushort *)(lVar12 + 0x298);
          if (uVar13 != 0) {
            /* try { // try from 0047911c to 00479120 has its CatchHandler @ 00479386 */
            uVar7 = GetRandomINT(0, uVar13 - 1);
          }
          *(uint32_t *)(lVar12 + 0x2c0) = uVar7;
          *(uint32_t *)(self + 0xa4c) = uVar7;
          *(uint32_t *)(self + 0xa50) = 0;
        }
        *(uint32_t *)(self + 0x7d4) = 7;
      }
      local_f8 = DAT_005be894 /* R:1.0f */ + *(float *)(self + 0x8cc);
      local_f4 = 0;
      local_e4 = 0;
      local_e8 = local_f8;
      /* try { // try from 00477f7a to 00478091 has its CatchHandler @ 00479384 */
      Vector2__operator_plus__005be140(local_b8, pVVar1);
      iVar5 =
          SMBPalette__PlatformWallJump(GSuperMeatBoy__pLevelPalette, local_b8, (Vector2 *)local_c8);
      Vector2__operator_minus__005be180(local_a8, pVVar1);
      iVar6 =
          SMBPalette__PlatformWallJump(GSuperMeatBoy__pLevelPalette, local_a8, (Vector2 *)local_d8);
      bVar21 = iVar6 == 1;
      if ((bVar21) || (iVar5 == 1)) {
        if (*(int *)(self + 0x7d4) != 9) {
          lVar12 = *(long *)(self + 0xf8);
          self[0x7db] = (MeatBoyCharactor)((byte)self[0x7db] | 8);
          uVar7 = 0;
          uVar13 = *(ushort *)(lVar12 + 0x348);
          if (uVar13 != 0) {
            /* try { // try from 00479272 to 00479276 has its CatchHandler @ 00479384 */
            uVar7 = GetRandomINT(0, uVar13 - 1);
          }
          *(uint32_t *)(lVar12 + 0x370) = uVar7;
          *(uint32_t *)(self + 0xa4c) = uVar7;
          *(uint32_t *)(self + 0xa50) = 0;
        }
        *(uint32_t *)(self + 0x7d4) = 9;
        /* try { // try from 00478d53 to 00478d58 has its CatchHandler @ 00479384 */
        (**(code **)(*(long *)self + 200))(self, (-(uint)!bVar21 & 0xfffffffc) + 8);
        if (bVar21) {
          MVar2 = self[0x7d8];
          fVar25 = DAT_005be6e4 /* R:0.5f */ * TileLevel__fLevelGridWH;
          self[0x7d8] = (MeatBoyCharactor)((byte)MVar2 | 1);
          bVar3 = (byte)MVar2 & 2;
          *(float *)(self + 0xa0) = local_d8[0] + *(float *)(self + 0x8cc) +
                                    _DAT_005bfba8 /* R:0.10000000149011612f */ + fVar25;
        } else {
          fVar25 = DAT_005be6e4 /* R:0.5f */ * TileLevel__fLevelGridWH;
          bVar3 = (byte)self[0x7d8] & 2;
          self[0x7d8] = (MeatBoyCharactor)((byte)self[0x7d8] & 0xfe);
          *(float *)(self + 0xa0) = ((local_c8[0] - fVar25) - *(float *)(self + 0x8cc)) -
                                    _DAT_005bfba8 /* R:0.10000000149011612f */;
        }
        goto LAB_004780b8;
      }
      if (((byte)self[0x7d9] & 2) == 0) {
        pGVar10 = *(GRIDBLOCK **)(self + 0x830);
        if (*(GRIDBLOCK **)(self + 0x828) == (GRIDBLOCK *)0x0) {
          if (pGVar10 == (GRIDBLOCK *)0x0)
            goto LAB_00478ab0;
        LAB_00478016:
          iVar5 = GetTriangleOrientation(pGVar10, (Vector2 *)(self + 0x858));
          iVar6 = 0;
        } else {
          if (pGVar10 != (GRIDBLOCK *)0x0)
            goto LAB_00478016;
          /* try { // try from 004792da to 004792de has its CatchHandler @ 00479384 */
          iVar6 = GetTriangleOrientation(*(GRIDBLOCK **)(self + 0x828), (Vector2 *)(self + 0x850));
          iVar5 = 0;
        }
        if ((*(long *)(self + 0x828) == 0) ||
            (((iVar5 == 2 || (uVar15 = 4, *(int *)(self + 0x83c) != 4)) &&
              ((iVar5 == 3 || (uVar15 = 8, *(int *)(self + 0x83c) != 8)))))) {
          if (*(long *)(self + 0x830) == 0) {
          LAB_00479357:
            MVar2 = self[0x7d8];
          LAB_0047935e:
            bVar3 = (byte)MVar2 & 2;
            goto LAB_004780b8;
          }
          if (((iVar6 == 2) || (uVar15 = 4, *(int *)(self + 0x83c) != 4)) &&
              ((iVar6 == 3 || (uVar15 = 8, *(int *)(self + 0x83c) != 8))))
            goto LAB_00478c63;
        }
        (**(code **)(*(long *)self + 200))(self, uVar15);
        MVar2 = self[0x7d8];
        if (*(int *)(self + 0x83c) == 8) {
          bVar3 = (byte)MVar2 & 2;
          self[0x7d8] = (MeatBoyCharactor)((byte)MVar2 & 0xfe);
        } else {
          self[0x7d8] = (MeatBoyCharactor)((byte)MVar2 | 1);
          bVar3 = (byte)MVar2 & 2;
        }
      } else {
        if ((*(long *)(self + 0x828) == 0) && (*(long *)(self + 0x830) == 0)) {
        LAB_00478ab0:
          local_98 = DAT_005be894 /* R:1.0f */ + *(float *)(self + 0x8cc);
          local_94 = 0;
          /* try { // try from 00478ae7 to 00478c62 has its CatchHandler @ 00479529 */
          Vector2__operator_minus__005be180(local_68, pVVar1);
          TileLevel__GetGridIndex__0058dd90(*(TileLevel **)(SuperMeatBoy + 0x40), local_68,
                                            local_88, local_48, local_3c);
          pGVar10 = (GRIDBLOCK *)TileLevel__GetGridBlock(*(TileLevel **)(SuperMeatBoy + 0x40),
                                                         local_48[0], local_3c[0], 0);
          Vector2__operator_plus__005be140(local_58, pVVar1);
          TileLevel__GetGridIndex__0058dd90(*(TileLevel **)(SuperMeatBoy + 0x40), local_58,
                                            local_78, local_48, local_3c);
          pGVar11 = (GRIDBLOCK *)TileLevel__GetGridBlock(*(TileLevel **)(SuperMeatBoy + 0x40),
                                                         local_48[0], local_3c[0], 0);
          iVar5 = GetTriangleOrientation(pGVar10, local_88);
          iVar6 = GetTriangleOrientation(pGVar11, local_78);
          iVar8 = SMBPalette__IsBlockCollidable((GRIDBLOCK *)GSuperMeatBoy__pLevelPalette,
                                                (SceneObject2D *)pGVar10);
          bVar21 = false;
          if (((((iVar8 == 1) && (((byte)pGVar10[3] & 1) != 0)) && (*pGVar10 != (GRIDBLOCK)0x0)) &&
               (((byte)pGVar10[2] & 0xc) != 0xc)) &&
              (((iVar5 == 1 || (iVar5 == 3)) || (iVar5 == 5)))) {
            self[0x7d8] = (MeatBoyCharactor)((byte)self[0x7d8] | 1);
            if (((byte)self[0x7d9] & 0xc0) == 0) {
              BloodyTiles__AddBloodyTile((BloodyTiles *)(SuperMeatBoy + 0x50), pGVar10, 4, local_88,
                                         iVar5, *(uint64_t *)(*(long *)(self + 0xf8) + 0x880));
            }
            SMBPalette__BreakyCollide(GSuperMeatBoy__pLevelPalette, pGVar10);
            SMBPalette__ApplyTredmillForce(GSuperMeatBoy__pLevelPalette, pGVar10,
                                           (SceneObject2D *)self);
            (**(code **)(*(long *)self + 200))(self, 4);
            bVar21 = true;
          }
          iVar5 = SMBPalette__IsBlockCollidable((GRIDBLOCK *)GSuperMeatBoy__pLevelPalette,
                                                (SceneObject2D *)pGVar11);
          if (((iVar5 != 1) || (((byte)pGVar11[3] & 2) == 0)) ||
              (((*pGVar11 == (GRIDBLOCK)0x0 || (((byte)pGVar11[2] & 0xc) == 0xc)) ||
                (((iVar6 != 0 && (iVar6 != 2)) && (iVar6 != 5)))))) {
            if (bVar21)
              goto LAB_0047944f;
            MVar2 = (MeatBoyCharactor)((byte)self[0x7d8] & 0xfb);
            self[0x7d8] = MVar2;
            if (((0.0 < *(float *)(self + 0xbc)) && (*(int *)(self + 0x7d4) != 6)) &&
                (*(int *)(self + 0x7d4) != 0x12)) {
              SetState(self, 6);
              goto LAB_00478c63;
            }
            if (((*(float *)(self + 0xbc) < 0.0) &&
                 (iVar5 = *(int *)(self + 0x7d4), iVar5 != 0x13)) &&
                ((iVar5 != 8 && (iVar5 != 7)))) {
              /* try { // try from 00479352 to 00479356 has its CatchHandler @ 00479529 */
              SetState(self, 7);
              goto LAB_00479357;
            }
            goto LAB_0047935e;
          }
          self[0x7d8] = (MeatBoyCharactor)((byte)self[0x7d8] & 0xfe);
          if (((byte)self[0x7d9] & 0xc0) == 0) {
            /* try { // try from 00479418 to 0047951b has its CatchHandler @ 00479529 */
            BloodyTiles__AddBloodyTile((BloodyTiles *)(SuperMeatBoy + 0x50), pGVar11, 8, local_78,
                                       iVar6, *(uint64_t *)(*(long *)(self + 0xf8) + 0x880));
          }
          SMBPalette__BreakyCollide(GSuperMeatBoy__pLevelPalette, pGVar11);
          SMBPalette__ApplyTredmillForce(GSuperMeatBoy__pLevelPalette, pGVar11,
                                         (SceneObject2D *)self);
          (**(code **)(*(long *)self + 200))(self, 8);
        LAB_0047944f:
          self[0x7d8] = (MeatBoyCharactor)((byte)self[0x7d8] | 4);
          SetState(self, 9);
        }
      LAB_00478c63:
        bVar3 = (byte)self[0x7d8] & 2;
      }
    }
  LAB_004780b8:
    /* try { // try from 004780d4 to 004780d9 has its CatchHandler @ 00479386 */
    if ((((bVar3 == 0) && (bVar19 != 0)) || ((bVar22 == 0 && (((byte)self[0x7d9] & 2) != 0)))) &&
        ((**(code **)(*(long *)self + 0xd0))(self), (*(ushort *)(self + 0x7d8) & 0x218) == 0x200)) {
      if (((byte)self[0x7d9] & 0x10) == 0) {
        *(uint32_t *)(self + 0xb8) = 0;
      } else {
        /* try { // try from 004790c8 to 004790cc has its CatchHandler @ 00479386 */
        fVar25 = (float)Vector2__Dot((Vector2 *)(self + 0xb8), (Vector2 *)local_128);
        if (fVar25 <= 0.0) {
          *(uint32_t *)(self + 0xb8) = 0;
        }
      }
    }
    if (((*(long *)(self + 0x820) == 0) && (*(long *)(self + 0x818) == 0)) &&
        (((byte)self[0x7d9] & 2) == 0)) {
      self[0x7d8] = (MeatBoyCharactor)((byte)self[0x7d8] | 2);
    }
    iVar5 = *(int *)(self + 0x7d4);
    if (((((iVar5 != 9) && (iVar5 != 7)) &&
          ((iVar5 != 0xf && ((iVar5 != 0x13 && (*(long *)(self + 0x820) == 0)))))) &&
         (*(long *)(self + 0x818) == 0)) &&
        ((*(float *)(self + 0xbc) <= 0.0 && *(float *)(self + 0xbc) != 0.0 &&
          (((byte)self[0x7d9] & 2) == 0)))) {
      if (iVar5 != 8) {
        lVar12 = *(long *)(self + 0xf8);
        self[0x7db] = (MeatBoyCharactor)((byte)self[0x7db] | 8);
        uVar7 = 0;
        uVar13 = *(ushort *)(lVar12 + 0x2f0);
        if (uVar13 != 0) {
          /* try { // try from 00478e21 to 00478e25 has its CatchHandler @ 00479386 */
          uVar7 = GetRandomINT(0, uVar13 - 1);
        }
        *(uint32_t *)(lVar12 + 0x318) = uVar7;
        *(uint32_t *)(self + 0xa4c) = uVar7;
        *(uint32_t *)(self + 0xa50) = 0;
      }
      *(uint32_t *)(self + 0x7d4) = 8;
      self[0x7d8] = (MeatBoyCharactor)((byte)self[0x7d8] & 0xfb | 2);
    }
  }
LAB_004775cc:
  if (*(int *)(self + 0xa40) == 1) {
    /* try { // try from 0047821f to 00478259 has its CatchHandler @ 00479545 */
    SMBPalette__UnSetReplayIndex(GSuperMeatBoy__pLevelPalette);
  }
  lVar12 = *(long *)(self + 0x7e0);
  if ((lVar12 != 0) && (*(int *)(self + 0xa40) == 0)) {
    if (((byte)self[0x7d9] & 1) != 0) {
      self[0x7db] = (MeatBoyCharactor)((byte)self[0x7db] | 8);
    }
    *(byte *)(lVar12 + 1) = *(byte *)(lVar12 + 1) & 0xdf | ((byte)self[0x7d8] & 1) << 5;
    *(byte *)(*(long *)(self + 0x7e0) + 1) =
        *(byte *)(*(long *)(self + 0x7e0) + 1) & 0xbf | ((byte)self[0x7d9] & 2) << 5;
    **(uint **)(self + 0x7e0) = **(uint **)(self + 0x7e0) & 0xfffc7fff | ((byte)self[0x7da] & 7)
                                                                             << 0xf;
    **(byte **)(self + 0x7e0) =
        **(byte **)(self + 0x7e0) & 0x83 | (byte)((*(uint *)(self + 0x7d4) & 0x1f) << 2);
    *(byte *)(*(long *)(self + 0x7e0) + 2) =
        *(byte *)(*(long *)(self + 0x7e0) + 2) & 0xe3 | (byte)((*(uint *)(self + 0xa4c) & 7) << 2);
    Vector2__operator_assign((Vector2 *)(*(long *)(self + 0x7e0) + 4), (Vector2 *)(self + 0xa0));
    *(byte *)(*(long *)(self + 0x7e0) + 3) =
        *(byte *)(*(long *)(self + 0x7e0) + 3) & 0xfb | (byte)self[0x7d8] & 4;
    *(byte *)(*(long *)(self + 0x7e0) + 3) =
        *(byte *)(*(long *)(self + 0x7e0) + 3) & 0xfd | (byte)self[0x7d8] & 2;
    (**(code **)(*(long *)self + 0x30))(self);
    SMBReplay__EndReplayFrame(*(SMBReplay **)(self + 0xa38), (byte)self[0x7db] >> 3 & 1);
  }
  self[0x7d9] = (MeatBoyCharactor)((byte)self[0x7d9] & 0xef);
  self[0x7d8] = (MeatBoyCharactor)((byte)self[0x7d8] & 0x27 | 0x80);
  Vector2__operator_assign((Vector2 *)(self + 0x868), (Vector2 *)(self + 0xa0));
  this_00 = Audio;
  *(uint32_t *)(self + 0x878) = 0;
  *(uint32_t *)(self + 0x87c) = 0;
  *(uint32_t *)(self + 0x870) = *(uint32_t *)(self + 0xa0);
  *(uint32_t *)(self + 0x874) = *(uint32_t *)(self + 0xa4);
  TAudio__SetMicrophonePosition(this_00, (FPUVector *)(self + 0x870));
  TAudio__SetMicrophoneListeningRange(Audio, DAT_005c07bc /* R:400.0f */);
LAB_00477797:
  AutoLockSection__AutoLockSection__005b59d0(local_208);
  return;
}

/* ======================================================================
 * MeatBoyCharactor__ProcessReplayFrame  (Ghidra `ProcessReplayFrame` @ 004795b0)
 * Signature: uint8_t __thiscall ProcessReplayFrame(MeatBoyCharactor * self)
 * Class: MeatBoyCharactor
 * Calls: `Apply2DPhysics`, `GetRandomINT`, `SMBPalette__ActivateEnd`, `SMBReplay__GetReplayFrame`, `TileLevel__TileCollision`, `Vector2__operator_assign`, `Vector2__operator_minus__005be180`, `Vector2__operator_mul__005be200`, `Vector2__operator_plus__005be140`
 * Called by: `AlienHominid__Update`, `BandageGirl__Update`, `Brownie__Update`, `CommanderVideo__Update`, `DefaultMeatBoy__Update`, `DrFetus__Update`, `FlyWrench__Update`, `GooBall__Update`, `HeadCrab__Update`, `Jill__Update` (+16 more)
 */
/* MeatBoyCharactor__ProcessReplayFrame() */

void __thiscall MeatBoyCharactor__ProcessReplayFrame(MeatBoyCharactor *self)

{
  MeatBoyCharactor MVar1;
  ushort uVar2;
  int iVar3;
  uint32_t uVar4;
  uint *puVar5;
  long lVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  int iVar10;
  uint uVar11;
  float fVar12;
  uint32_t local_88;
  uint32_t local_84;
  uint32_t local_78;
  uint32_t local_74;
  Vector2 local_68[16];
  Vector2 local_58[16];
  Vector2 local_48[16];
  Vector2 local_38[8];
  int local_30[4];

  if (((*(int *)(self + 0x7d4) != 0xe) && (*(int *)(self + 0x7d4) != 0x10)) &&
      (*(int *)(self + 0xa40) == 1)) {
    iVar10 = *(int *)(self + 0xa48);
    puVar5 =
        (uint *)SMBReplay__GetReplayFrame(*(SMBReplay **)(self + 0xa38), *(int *)(self + 0xa90),
                                          (int *)(self + 0xa44), (int *)(self + 0xa48));
    local_30[1] = 0;
    local_30[0] = iVar10 + 1;
    lVar6 = SMBReplay__GetReplayFrame(*(SMBReplay **)(self + 0xa38), *(int *)(self + 0xa90),
                                      local_30 + 1, local_30);
    if (puVar5 == (uint *)0x0) {
      if ((*(int *)(self + 0xa90) == *(int *)(*(long *)(self + 0xa38) + 0x3c)) &&
          (*(int *)(SuperMeatBoy + 0x294) != 10)) {
        SMBPalette__ActivateEnd(GSuperMeatBoy__pLevelPalette, -1);
      }
    } else if (puVar5 == *(uint **)(self + 0x7e0)) {
      if (lVar6 != 0) {
        if (((byte)self[0x7db] & 0x20) == 0) {
          Vector2__operator_minus__005be180(local_68, (Vector2 *)(puVar5 + 1));
          fVar12 = (float)Vector2__LengthSq(local_68);
          if (DAT_005c07c0 /* R:10000.0f */ <= fVar12) {
            Vector2__operator_assign((Vector2 *)(self + 0xa0), (Vector2 *)(puVar5 + 1));
          } else {
            fVar12 = (float)(*(int *)(self + 0xa44) + -1) /
                     (float)(*(ushort *)((long)puVar5 + 2) >> 5 & 0xf);
            Vector2__operator_mul__005be200(local_38, fVar12);
            Vector2__operator_mul__005be200(local_48, DAT_005be894 /* R:1.0f */ - fVar12);
            Vector2__operator_plus__005be140(local_58, local_48);
            Vector2__operator_assign((Vector2 *)(self + 0xa0), local_58);
            Vector2__operator_assign((Vector2 *)(self + 0x868), (Vector2 *)(self + 0xa0));
          }
        } else {
          fVar12 = (float)(*(int *)(self + 0xa44) + -1) /
                   (float)(*(ushort *)((long)puVar5 + 2) >> 5 & 0xf);
          *(float *)(self + 0xa0) = *(float *)(lVar6 + 4) * fVar12 +
                                    (DAT_005be894 /* R:1.0f */ - fVar12) * (float)puVar5[1];
          Vector2__operator_assign((Vector2 *)(self + 0x868), (Vector2 *)(self + 0xa0));
          *(float *)(self + 0xf0) = *(float *)(self + 0xf0) + *(float *)(self + 0x8c4);
          Apply2DPhysics((SceneObject2D *)self, fOneFrameTimeStep);
          Vector2__operator_assign((Vector2 *)(self + 0xb8), (Vector2 *)(self + 0xc0));
          TileLevel__TileCollision(*(TileLevel **)(SuperMeatBoy + 0x40), (SceneObject2D *)self,
                                   (TileCollisionInfo *)(self + 0x818));
        }
      }
    } else {
      *(uint **)(self + 0x7e0) = puVar5;
      *(ushort *)(self + 0x7da) = *(ushort *)(self + 0x7da) & 0xf800 | (ushort)(*puVar5 >> 0xf) & 7;
      self[0x7d9] =
          (MeatBoyCharactor)((byte)self[0x7d9] & 0xfd | *(byte *)((long)puVar5 + 1) >> 5 & 2);
      MVar1 = self[0x7d8];
      bVar7 = *(byte *)((long)puVar5 + 1) >> 5 & 1;
      self[0x7d8] = (MeatBoyCharactor)((byte)MVar1 & 0xfe | bVar7);
      bVar8 = *(byte *)((long)puVar5 + 3) & 4;
      self[0x7d8] = (MeatBoyCharactor)((byte)MVar1 & 0xfa | bVar7 | bVar8);
      bVar9 = *(byte *)((long)puVar5 + 3) & 2;
      self[0x7d8] = (MeatBoyCharactor)((byte)MVar1 & 0xf8 | bVar7 | bVar8 | bVar9);
      self[0x7d8] = (MeatBoyCharactor)((byte)MVar1 & 0xb8 | bVar7 | bVar8 | bVar9 |
                                       *(byte *)((long)puVar5 + 3) & 0x40);
      uVar11 = (byte)((byte)*puVar5 >> 2) & 0x1f;
      if (uVar11 != *(uint *)(self + 0x7d4)) {
        self[0x7db] = (MeatBoyCharactor)((byte)self[0x7db] | 8);
        lVar6 = *(long *)(self + 0xf8) + (long)(int)uVar11 * 0x58;
        uVar4 = 0;
        uVar2 = *(ushort *)(lVar6 + 0x30);
        if (uVar2 != 0) {
          uVar4 = GetRandomINT(0, uVar2 - 1);
        }
        *(uint32_t *)(lVar6 + 0x58) = uVar4;
        *(uint32_t *)(self + 0xa4c) = uVar4;
        *(uint32_t *)(self + 0xa50) = 0;
      }
      *(uint *)(self + 0x7d4) = uVar11;
      if (((byte)self[0x7db] & 0x20) == 0) {
        Vector2__operator_assign((Vector2 *)(self + 0xa0), (Vector2 *)(puVar5 + 1));
        Vector2__operator_assign((Vector2 *)(self + 0x868), (Vector2 *)(self + 0xa0));
      } else {
        *(uint *)(self + 0xa0) = puVar5[1];
        Vector2__operator_assign((Vector2 *)(self + 0x868), (Vector2 *)(self + 0xa0));
      }
      *(uint *)(self + 0xa4c) = *(byte *)((long)puVar5 + 2) >> 2 & 7;
      if ((*puVar5 & 0x780) != 0) {
        local_88 = 0x3f800000;
        local_84 = 0x3f800000;
        local_78 = 0x3f800000;
        local_74 = 0x3f800000;
        bVar7 = *(byte *)((long)puVar5 + 1);
        if ((bVar7 & 8) != 0) {
          local_88 = 0xbf800000;
          bVar7 = *(byte *)((long)puVar5 + 1);
        }
        if ((bVar7 & 0x10) != 0) {
          local_78 = 0xbf800000;
        }
        iVar3 = ((ushort)((ushort)*puVar5 >> 7) & 0xf) - 1;
        iVar10 = 0;
        if (iVar3 != -1) {
          iVar10 = iVar3;
        }
        if (((byte)self[0x7d9] & 0x40) == 0) {
          AddEffect(self, iVar10, &local_88, &local_78);
        }
      }
      (**(code **)(*(long *)self + 0x38))(self);
    }
  }
  return;
}

/* ======================================================================
 * MeatBoyCharactor__RenderEffects  (Ghidra `RenderEffects` @ 00479a60)
 * Signature: uint8_t __thiscall RenderEffects(MeatBoyCharactor * self)
 * Class: MeatBoyCharactor
 * Calls: `FlashLibraryInstance__IsPlaying`, `RegisterAudioPosition`, `Vector2__operator_assign`
 * Called by: `MeatBoyCharFoundation__Render`, `Render`
 */
/* MeatBoyCharactor__RenderEffects() */

void __thiscall MeatBoyCharactor__RenderEffects(MeatBoyCharactor *self)

{
  int iVar1;
  MeatBoyCharactor *pMVar2;
  int iVar3;

  iVar3 = 0;
  pMVar2 = self + 0x100;
  do {
    RegisterAudioPosition((FPUVector *)(self + 0x870));
    if (*(long *)pMVar2 != 0) {
      *(uint32_t *)(*(long *)pMVar2 + 0x58) = *(uint32_t *)(pMVar2 + 8);
      *(uint32_t *)(*(long *)pMVar2 + 0x30) = *(uint32_t *)(pMVar2 + 0xc);
      *(uint32_t *)(*(long *)pMVar2 + 0x34) = *(uint32_t *)(pMVar2 + 0x10);
      *(uint32_t *)(*(long *)pMVar2 + 0x48) = *(uint32_t *)(pMVar2 + 0x24);
      *(uint32_t *)(*(long *)pMVar2 + 0x4c) = *(uint32_t *)(pMVar2 + 0x24);
      Vector2__operator_assign((Vector2 *)(*(long *)pMVar2 + 0x40),
                               (Vector2 *)(self + (long)iVar3 * 0x28 + 0x11c));
      (**(code **)(**(long **)pMVar2 + 0x10))();
      *(uint32_t *)(pMVar2 + 8) = *(uint32_t *)(*(FlashLibraryInstance **)pMVar2 + 0x58);
      iVar1 = FlashLibraryInstance__IsPlaying(*(FlashLibraryInstance **)pMVar2);
      if (iVar1 == 0) {
        *(long *)pMVar2 = 0;
      }
    }
    iVar3 = iVar3 + 1;
    pMVar2 = pMVar2 + 0x28;
  } while (iVar3 != 0x28);
  return;
}

/* ======================================================================
 * MeatBoyCharactor__RenderClones  (Ghidra `RenderClones` @ 0047aa90)
 * Signature: uint8_t __thiscall RenderClones(MeatBoyCharactor * self)
 * Class: MeatBoyCharactor
 * Calls: `FlashAnimationLibrary__DisableFlags`, `FlashAnimationLibrary__EnableFlags`, `MeatBoyCharFoundation__Render`
 * Called by: (none)
 */
/* MeatBoyCharactor__RenderClones() */

void __thiscall MeatBoyCharactor__RenderClones(MeatBoyCharactor *self)

{
  long lVar1;
  int iVar2;
  long lVar3;

  if (*(int *)(self + 0xa40) == 0) {
    FlashAnimationLibrary__EnableFlags((FlashAnimationLibrary *)**(uint64_t **)(self + 0xf8), 1);
    lVar1 = *(long *)(self + 0xa38);
    if ((*(int *)(lVar1 + 0x2c8) == 0) && (0 < *(int *)(lVar1 + 0x34))) {
      iVar2 = 0;
      do {
        lVar3 = (long)iVar2;
        if ((*(int *)(lVar1 + 0x3c) == iVar2) &&
            (iVar2 == *(int *)(*(long *)(*(long *)(self + 0x7f0) + lVar3 * 8) + 0xa90))) {
          FlashAnimationLibrary__EnableFlags((FlashAnimationLibrary *)**(uint64_t **)(self + 0xf8),
                                             1);
        } else {
          FlashAnimationLibrary__DisableFlags((FlashAnimationLibrary *)**(uint64_t **)(self + 0xf8),
                                              1);
        }
        iVar2 = iVar2 + 1;
        MeatBoyCharFoundation__Render(
            *(MeatBoyCharactor **)(self + 0xf8),
            *(FlashLibraryInstance **)(*(long *)(self + 0x7f0) + lVar3 * 8));
        lVar1 = *(long *)(self + 0xa38);
      } while (iVar2 < *(int *)(lVar1 + 0x34));
    }
  }
  return;
}

/* ======================================================================
 * MeatBoyCharactor__Render  (Ghidra `Render` @ 0047ab60)
 * Signature: uint8_t __thiscall Render(MeatBoyCharactor * self)
 * Class: MeatBoyCharactor
 * Calls: `AutoLockSection__AutoLockSection`, `AutoLockSection__AutoLockSection__005b59d0`, `MeatBoyCharFoundation__Render`
 * Called by: `AlienHominid__Render`, `CommanderVideo__Render`, `DefaultMeatBoy__Render`, `DrFetus__Render`, `Jill__Render`, `Machinarium__Render`, `MeatNinja__Render`, `MrMinecraft__Render`, `Naija__Render`, `Ogmo__Render` (+5 more)
 */
/* MeatBoyCharactor__Render() */

void __thiscall MeatBoyCharactor__Render(MeatBoyCharactor *self)

{
  AutoLockSection aAStack_18[16];

  AutoLockSection__AutoLockSection(aAStack_18, (CriticalSection *)(self + 0x880));
  /* try { // try from 0047ab7d to 0047ab7f has its CatchHandler @ 0047abbd */
  (**(code **)(*(long *)self + 0x50))(self);
  if (*(int *)(*(long *)(self + 0xa38) + 0x2c8) != 1) {
    AutoLockSection__AutoLockSection__005b59d0(aAStack_18);
    return;
  }
  /* try { // try from 0047abaa to 0047abae has its CatchHandler @ 0047abbd */
  MeatBoyCharFoundation__Render(*(MeatBoyCharactor **)(self + 0xf8), (FlashLibraryInstance *)self);
  AutoLockSection__AutoLockSection__005b59d0(aAStack_18);
  return;
}

/* ======================================================================
 * MeatBoyCharactor__WritePropertiesToFile  (Ghidra `WritePropertiesToFile` @ 0047abd0)
 * Signature: uint8_t __thiscall WritePropertiesToFile(MeatBoyCharactor * self)
 * Class: MeatBoyCharactor
 * Calls: `File__File`, `File__File__005b7a70`, `File__Write`, `File__WriteArray`
 * Called by: `DeactivateAnimProps`, `DeactivateEffectProps`, `DeactivatePlayerProps`
 */
/* MeatBoyCharactor__WritePropertiesToFile() */

void __thiscall MeatBoyCharactor__WritePropertiesToFile(MeatBoyCharactor *self)

{
  int iVar1;
  uint64_t local_88;
  uint8_t *local_80;
  uint32_t local_78;
  uint64_t local_70;
  uint32_t local_68;
  uint32_t local_64;
  uint32_t local_60;
  uint32_t local_5c;
  uint32_t local_58;
  uint32_t local_54;
  uint8_t *local_50;
  File local_48[56];

  local_88 = *(uint64_t *)(self + 0xa58);
  local_78 = 2;
  local_70 = 0;
  local_68 = 0;
  local_64 = 1;
  local_60 = 1;
  local_5c = 0;
  local_58 = 0;
  local_54 = 0;
  local_50 = &DAT_005c04cf /* R:7.374579797039071e-39f */;
  local_80 = &DAT_005c04d3 /* R:3.984248865183858e-39f */;
  File__File(local_48, (tagFileCreation *)&local_88);
  /* try { // try from 0047ac53 to 0047aed7 has its CatchHandler @ 0047aee9 */
  File__Write(local_48, &iCharPropsFileVer, 4);
  File__Write(local_48, self + 0x8a8, 4);
  File__Write(local_48, self + 0x8ac, 4);
  File__Write(local_48, self + 0x8b0, 4);
  File__Write(local_48, self + 0x8b4, 4);
  File__Write(local_48, self + 0x8b8, 4);
  File__Write(local_48, self + 0x8bc, 4);
  File__Write(local_48, self + 0x8c0, 4);
  File__Write(local_48, self + 0x8c4, 4);
  File__Write(local_48, self + 0x8c8, 4);
  File__Write(local_48, self + 0x8cc, 4);
  File__Write(local_48, self + 0x8d0, 4);
  iVar1 = 0;
  do {
    File__WriteArray(local_48, (uchar *)(self + (long)iVar1 * 8 + 0x8d4), 2, 4);
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x18);
  File__WriteArray(local_48, (uchar *)(self + 0x994), 3, 4);
  File__WriteArray(local_48, (uchar *)(self + 0x9a4), 3, 4);
  File__WriteArray(local_48, (uchar *)(self + 0x9b4), 3, 4);
  File__WriteArray(local_48, (uchar *)(self + 0x9c4), 3, 4);
  File__WriteArray(local_48, (uchar *)(self + 0x9d4), 3, 4);
  File__WriteArray(local_48, (uchar *)(self + 0x9e4), 3, 4);
  File__WriteArray(local_48, (uchar *)(self + 0x9f4), 3, 4);
  File__WriteArray(local_48, (uchar *)(self + 0xa04), 3, 4);
  File__WriteArray(local_48, (uchar *)(self + 0xa14), 3, 4);
  File__Write(local_48, self + 0xa2c, 4);
  File__Write(local_48, self + 0xa24, 4);
  File__Write(local_48, self + 0xa28, 4);
  File__Write(local_48, self + 0xa30, 4);
  File__Write(local_48, self + 0xa34, 4);
  File__File__005b7a70(local_48);
  return;
}

/* ======================================================================
 * MeatBoyCharactor__AddEffect__0047af00  (Ghidra `AddEffect` @ 0047af00)
 * Signature: uint8_t __thiscall AddEffect(MeatBoyCharactor * self, tagSuperMeatBoyEffects arg1, Vector2 * arg2, Vector2 * arg3)
 * Class: MeatBoyCharactor
 * Calls: `Vector2__operator_assign`
 * Called by: `AlienHominid__WallHit`, `AlienHominid__WallJump`, `CommanderVideo__WallJump`, `DrFetus__WallHit`, `DrFetus__WallJump`, `FlyWrench__WallJump`, `GooBall__WallHit`, `GooBall__WallJump`, `HeadCrab__WallHit`, `HeadCrab__WallJump` (+26 more)
 */
/* MeatBoyCharactor__AddEffect__0047af00(tagSuperMeatBoyEffects, Vector2 const&, Vector2 const&) */

void __thiscall MeatBoyCharactor__AddEffect__0047af00(MeatBoyCharactor *self, int arg2, float *arg3,
                                                      float *arg4)

{
  byte *pbVar1;
  float fVar2;
  ushort *puVar3;
  MeatBoyCharactor *pMVar4;
  int iVar5;
  long lVar6;
  float fVar7;
  Matrix4x4 aMStack_78[64];
  float local_38;
  float local_34;
  float local_30;
  uint32_t local_2c;
  float local_28;
  float local_24;

  fVar7 = DAT_005c07a4 /* R:-1.0f */;
  if (((byte)self[0x7d9] & 0x40) == 0) {
    puVar3 = *(ushort **)(self + 0x7e0);
    if ((puVar3 != (ushort *)0x0) && (*(int *)(self + 0xa40) == 0)) {
      *puVar3 = *puVar3 & 0xf87f | (ushort)((arg2 + 1U & 0xf) << 7);
      if (fVar7 == *arg3) {
        pbVar1 = (byte *)(*(long *)(self + 0x7e0) + 1);
        *pbVar1 = *pbVar1 | 8;
        lVar6 = *(long *)(self + 0x7e0);
        fVar2 = *arg4;
      } else {
        pbVar1 = (byte *)(*(long *)(self + 0x7e0) + 1);
        *pbVar1 = *pbVar1 & 0xf7;
        lVar6 = *(long *)(self + 0x7e0);
        fVar2 = *arg4;
      }
      if (fVar7 == fVar2) {
        *(byte *)(lVar6 + 1) = *(byte *)(lVar6 + 1) | 0x10;
      } else {
        *(byte *)(lVar6 + 1) = *(byte *)(lVar6 + 1) & 0xef;
      }
    }
    pMVar4 = self + 0x100;
    iVar5 = 0;
    do {
      if (*(long *)pMVar4 == 0) {
        lVar6 = (long)arg2;
        pMVar4 = self + (long)iVar5 * 0x28 + 0x100;
        *(uint64_t *)pMVar4 = *(uint64_t *)(*(long *)(self + 0xf8) + 0x848 + lVar6 * 8);
        local_2c = 0;
        if (((byte)self[0x7d9] & 2) == 0) {
          *(uint32_t *)(self + 0xd8) = 0;
          lVar6 = lVar6 + 0x98;
          local_34 = arg3[1] * *(float *)(self + lVar6 * 0x10 + 0x18);
          local_38 = *arg3 * *(float *)(self + lVar6 * 0x10 + 0x14);
          local_30 = *(float *)(self + lVar6 * 0x10 + 0x1c);
        } else {
          lVar6 = lVar6 + 0x98;
          local_30 = *(float *)(self + lVar6 * 0x10 + 0x1c);
          local_38 = *(float *)(self + lVar6 * 0x10 + 0x14) * *arg3;
          local_34 = *(float *)(self + lVar6 * 0x10 + 0x18) * arg3[1];
          local_2c = *(uint32_t *)(self + lVar6 * 0x10 + 0x20);
          fVar7 = DAT_005c07a8 /* R:-0.7853981852531433f */;
          if ((*(ushort *)(self + 0x7da) & 0x7ff) != 0) {
            fVar7 = DAT_005c07ac /* R:0.7853981852531433f */;
          }
          Matrix4x4__ConvertToRotationMatrix(aMStack_78, fVar7);
          Matrix4x4__TransformVector3((FPUVector *)&local_38, (FPUVector *)&local_38, aMStack_78,
                                      1);
        }
        fVar7 = *(float *)(self + 0xa0);
        *(float *)(pMVar4 + 0xc) = fVar7;
        fVar2 = *(float *)(self + 0xa4);
        *(uint32_t *)(pMVar4 + 0x14) = 0;
        *(float *)(pMVar4 + 0xc) = fVar7 + local_38;
        *(float *)(pMVar4 + 0x10) = fVar2 + local_34;
        local_24 = arg4[1] * local_30;
        local_28 = local_30 * *arg4;
        Vector2__operator_assign((Vector2 *)(pMVar4 + 0x1c), (Vector2 *)&local_28);
        if (((byte)self[0x7d9] & 2) == 0) {
          *(uint32_t *)(pMVar4 + 0x24) = 0;
        } else {
          if ((*(ushort *)(self + 0x7da) & 0x7ff) == 0) {
            *(uint32_t *)(pMVar4 + 0x24) = 0xbf490fdb;
            *(uint32_t *)(pMVar4 + 8) = 0;
            return;
          }
          *(uint32_t *)(pMVar4 + 0x24) = 0x3f490fdb;
        }
        *(uint32_t *)(pMVar4 + 8) = 0;
        return;
      }
      iVar5 = iVar5 + 1;
      pMVar4 = pMVar4 + 0x28;
    } while (iVar5 != 0x28);
  }
  return;
}

/* ======================================================================
 * MeatBoyCharactor__RestoreControls  (Ghidra `RestoreControls` @ 0047b1c0)
 * Signature: uint8_t __thiscall RestoreControls(MeatBoyCharactor * self)
 * Class: MeatBoyCharactor
 * Calls: `CharJump`, `CharMoveLeft`, `CharMoveRight`, `CharSpecial`, `GSMBMenu__IsInReplayMode`, `Joystick__AddButtonCallback`, `Joystick__AddPOVCallback`, `TKeyboard__AddKeyCallback`, `TPlayer__GetJoystick`
 * Called by: `EndLevelTransitionIn`, `FactoryBoss__Reset`, `FinalBoss__Reset`, `FinalBoss__SetToPhaseTwo`, `GSuperMeatBoy__ShowGame`, `HellBoss__Reset`, `HospitalBoss__Reset`, `RaptureBoss__RaptureBoss__00483ef0`, `RaptureBoss__Reset`, `SMBBoss__Reset` (+1 more)
 */
/* MeatBoyCharactor__RestoreControls() */

void __thiscall MeatBoyCharactor__RestoreControls(MeatBoyCharactor *self)

{
  Joystick *pJVar1;
  long lVar2;
  uint32_t uVar3;
  int iVar4;

  if ((SMBMenu != (GSMBMenu *)0x0) && (iVar4 = GSMBMenu__IsInReplayMode(SMBMenu), iVar4 == 1)) {
    return;
  }
  if (Keyboard != (TKeyboard *)0x0) {
    TKeyboard__AddKeyCallback(Keyboard, keyJump, CharJump, self);
    TKeyboard__AddKeyCallback(Keyboard, keySpecial, CharSpecial, self);
    TKeyboard__AddKeyCallback(Keyboard, keyLeft, CharMoveLeft, self);
    TKeyboard__AddKeyCallback(Keyboard, keyRight, CharMoveRight, self);
  }
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddButtonCallback(pJVar1, 3, 0, 0);
  uVar3 = buttonJump;
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddButtonCallback(pJVar1, uVar3, CharJump, self);
  uVar3 = buttonSpecial;
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddButtonCallback(pJVar1, uVar3, CharSpecial, self);
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddPOVCallback(pJVar1, 3, CharMoveLeft, self);
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddPOVCallback(pJVar1, 1, CharMoveRight, self);
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddButtonCallback(pJVar1, 10, CharSpecial, self);
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddButtonCallback(pJVar1, 0xb, CharSpecial, self);
  uVar3 = bUseLeftJoyAsPOV;
  lVar2 = TPlayer__GetJoystick((TPlayer *)Players__Player);
  *(uint32_t *)(lVar2 + 0xfc) = uVar3;
  return;
}

/* ======================================================================
 * MeatBoyCharactor__MeatBoyCharactor__0047b350  (Ghidra `MeatBoyCharactor` @ 0047b350)
 * Signature: uint8_t __thiscall MeatBoyCharactor(MeatBoyCharactor * self, char * arg1, tagSuperMeatBoyCharactor arg2)
 * Class: MeatBoyCharactor
 * Calls: `BoundingSquare__BoundingSquare`, `CriticalSection__CriticalSection`, `CriticalSection__CriticalSection__005b71d0`, `File__File`, `File__File__005b7a70`, `File__Read`, `File__ReadArray`, `File__ReadVariable`, `File__Write`, `FlashAnimationLibrary__FlashAnimationLibrary__00576680` (+13 more)
 * Called by: `AlienHominid__AlienHominid__004628b0`, `AlienHominid__AlienHominid__00462960`, `BandageGirl__BandageGirl__00465880`, `BandageGirl__BandageGirl__004658c0`, `Brownie__Brownie__00465920`, `Brownie__Brownie__00465960`, `CommanderVideo__CommanderVideo__00464c70`, `CommanderVideo__CommanderVideo__00464d60`, `DefaultMeatBoy__DefaultMeatBoy__004654a0`, `DefaultMeatBoy__DefaultMeatBoy__00465540` (+43 more)
 */
/* WARNING: Removing unreachable block (ram,0x0047d5ff) */
/* WARNING: Removing unreachable block (ram,0x0047d6aa) */
/* WARNING: Removing unreachable block (ram,0x0047dc34) */
/* WARNING: Removing unreachable block (ram,0x0047dc89) */
/* WARNING: Removing unreachable block (ram,0x0047dc9a) */
/* WARNING: Removing unreachable block (ram,0x0047d6bf) */
/* WARNING: Removing unreachable block (ram,0x0047dbbc) */
/* WARNING: Removing unreachable block (ram,0x0047dc11) */
/* WARNING: Removing unreachable block (ram,0x0047dc22) */
/* WARNING: Removing unreachable block (ram,0x0047d6dd) */
/* WARNING: Removing unreachable block (ram,0x0047db44) */
/* WARNING: Removing unreachable block (ram,0x0047db99) */
/* WARNING: Removing unreachable block (ram,0x0047dbaa) */
/* WARNING: Removing unreachable block (ram,0x0047d6fb) */
/* WARNING: Removing unreachable block (ram,0x0047dacc) */
/* WARNING: Removing unreachable block (ram,0x0047db21) */
/* WARNING: Removing unreachable block (ram,0x0047db32) */
/* WARNING: Removing unreachable block (ram,0x0047d719) */
/* WARNING: Removing unreachable block (ram,0x0047da54) */
/* WARNING: Removing unreachable block (ram,0x0047daa9) */
/* WARNING: Removing unreachable block (ram,0x0047daba) */
/* WARNING: Removing unreachable block (ram,0x0047d737) */
/* WARNING: Removing unreachable block (ram,0x0047d9dc) */
/* WARNING: Removing unreachable block (ram,0x0047da31) */
/* WARNING: Removing unreachable block (ram,0x0047da42) */
/* WARNING: Removing unreachable block (ram,0x0047d755) */
/* WARNING: Removing unreachable block (ram,0x0047d964) */
/* WARNING: Removing unreachable block (ram,0x0047d9b9) */
/* WARNING: Removing unreachable block (ram,0x0047d9ca) */
/* WARNING: Removing unreachable block (ram,0x0047d773) */
/* WARNING: Removing unreachable block (ram,0x0047d8ec) */
/* WARNING: Removing unreachable block (ram,0x0047d941) */
/* WARNING: Removing unreachable block (ram,0x0047d952) */
/* WARNING: Removing unreachable block (ram,0x0047d791) */
/* WARNING: Removing unreachable block (ram,0x0047d7af) */
/* WARNING: Removing unreachable block (ram,0x0047d804) */
/* WARNING: Removing unreachable block (ram,0x0047d64f) */
/* WARNING: Removing unreachable block (ram,0x0047d615) */
/* WARNING: Removing unreachable block (ram,0x0047d68b) */
/* MeatBoyCharactor__MeatBoyCharactor__0047b350(char const*, tagSuperMeatBoyCharactor) */

void __thiscall MeatBoyCharactor__MeatBoyCharactor__0047b350(MeatBoyCharactor *self, char *arg1,
                                                             uint32_t arg3)

{
  int *piVar1;
  long lVar2;
  MeatBoyCharactor *pMVar3;
  short sVar4;
  int iVar5;
  uint8_t *puVar6;
  char *__s;
  SMBReplay *this_00;
  uint uVar7;
  ushort uVar8;
  ushort uVar9;
  MeatBoyCharactor *pMVar10;
  uint64_t *puVar11;
  FlashAnimationLibrary *this_01;
  long lVar12;
  void *pvVar13;
  string *this_02;
  void *pvVar14;
  ushort *puVar15;
  uint64_t uVar16;
  void *pvVar17;
  ulong uVar18;
  short sVar19;
  long lVar20;
  uint64_t *puVar21;
  ulong uVar22;
  CriticalSection *this_03;
  long lVar23;
  BoundingSquare *this_04;
  int iVar24;
  MeatBoyCharactor *pMVar25;
  bool bVar26;
  byte bVar27;
  uint32_t local_298;
  Matrix4x4 local_294[64];
  Matrix4x4 local_254[64];
  Vector2 local_214[8];
  Vector2 local_20c[20];
  char *local_1f8;
  uint8_t *local_1f0;
  uint32_t local_1e8;
  uint64_t local_1e0;
  uint32_t local_1d8;
  uint32_t local_1d4;
  uint32_t local_1d0;
  uint32_t local_1cc;
  uint32_t local_1c8;
  uint32_t local_1c4;
  uint8_t *local_1c0;
  uint64_t local_178;
  uint8_t *local_170;
  uint32_t local_168;
  uint64_t local_160;
  uint32_t local_158;
  uint32_t local_154;
  uint32_t local_150;
  uint32_t local_14c;
  uint32_t local_148;
  uint32_t local_144;
  uint8_t *local_140;
  char *local_138[6];
  uint32_t local_108;
  uint32_t local_104;
  uint32_t local_f8;
  uint32_t local_f4;
  long local_e8[2];
  long local_d8[2];
  uint8_t *local_c8[2];
  uint32_t local_b8;
  uint32_t local_b4;
  uint32_t local_a8;
  uint32_t local_a4;
  uint32_t local_98;
  uint32_t local_94;
  uint32_t local_88;
  uint32_t local_84;
  uint32_t local_78;
  uint32_t local_74;
  uint32_t local_68;
  uint32_t local_64;
  uint32_t local_58;
  uint32_t local_54;
  int local_48[2];
  allocator local_3f;
  allocator local_3e[14];

  bVar27 = 0;
  *(uint64_t *)(self + 0x48) = 0;
  *(uint32_t *)(self + 0x50) = 1;
  *(uint8_t ***)self = &PTR__SceneObject2D_005dd3d0;
  /* try { // try from 0047b383 to 0047b387 has its CatchHandler @ 0047d622 */
  CriticalSection__CriticalSection((CriticalSection *)(self + 0x58));
  uVar16 = vDefaultStart2D;
  pMVar3 = self + 0x10c;
  *(uint32_t *)(self + 0x80) = 0;
  *(uint32_t *)(self + 0x84) = 0;
  *(uint32_t *)(self + 0x88) = 0x3f800000;
  *(uint64_t *)(self + 0xa0) = uVar16;
  *(uint64_t *)(self + 0xa8) = uVar16;
  *(uint32_t *)(self + 0x8c) = 0;
  *(uint32_t *)(self + 0x90) = 0;
  *(uint32_t *)(self + 0x94) = 0;
  *(uint32_t *)(self + 0x98) = 0;
  *(uint32_t *)(self + 0x9c) = 1;
  *(uint32_t *)(self + 0xb0) = 0;
  *(uint32_t *)(self + 0xb4) = 0;
  *(uint32_t *)(self + 0xb8) = 0;
  *(uint32_t *)(self + 0xbc) = 0;
  *(uint32_t *)(self + 200) = 0;
  *(uint32_t *)(self + 0xcc) = 0;
  *(uint32_t *)(self + 0xd0) = 0x3f800000;
  *(uint32_t *)(self + 0xd4) = 0x3f800000;
  *(uint32_t *)(self + 0xd8) = 0;
  *(uint32_t *)(self + 0xdc) = 0;
  *(uint32_t *)(self + 0xe0) = 0;
  *(uint32_t *)(self + 0xe4) = 0;
  *(uint32_t *)(self + 0xe8) = 0;
  *(uint32_t *)(self + 0xec) = 0;
  *(uint32_t *)(self + 0xf0) = 0;
  *(uint8_t ***)self = &PTR__MeatBoyCharactor_005c05f0;
  *(uint64_t *)(self + 0xf8) = 0;
  pMVar10 = pMVar3;
  do {
    *(uint64_t *)(pMVar10 + -0xc) = 0;
    *(uint32_t *)(pMVar10 + -4) = 0;
    lVar20 = (long)pMVar10 - (long)(self + 0x100);
    *(uint32_t *)(pMVar3 + lVar20 + -0xc) = 0;
    *(uint32_t *)(pMVar3 + lVar20 + -8) = 0;
    *(uint32_t *)(pMVar3 + lVar20 + -4) = 0;
    *(uint32_t *)(pMVar3 + lVar20) = 0;
    *(uint32_t *)(self + lVar20 + 0x110) = 0x3f800000;
    *(uint32_t *)(self + lVar20 + 0x114) = 0x3f800000;
    *(uint32_t *)(pMVar10 + 0x18) = 0;
    pMVar10 = pMVar10 + 0x28;
  } while (pMVar10 != self + 0x74c);
  local_f8 = 0x3f000000;
  local_f4 = 0x3f000000;
  local_108 = 0;
  local_104 = 0;
  /* try { // try from 0047b58b to 0047b58f has its CatchHandler @ 0047d620 */
  BoundingSquare__BoundingSquare((BoundingSquare *)(self + 0x740), (Vector2 *)&local_108, 0.0,
                                 (Vector2 *)&local_f8);
  uVar8 = *(ushort *)(self + 0x7da);
  self[0x7d9] = (MeatBoyCharactor)((byte)self[0x7d9] & 0x80);
  *(uint32_t *)(self + 0x7d4) = 0;
  self[0x7d8] = (MeatBoyCharactor)0x81;
  *(uint32_t *)(self + 0x7e8) = 0;
  *(uint32_t *)(self + 0x7f8) = 0;
  *(uint32_t *)(self + 0x7fc) = 0;
  *(uint32_t *)(self + 0x800) = 0;
  *(uint32_t *)(self + 0x804) = 0;
  *(uint32_t *)(self + 0x808) = 0x3f800000;
  *(ushort *)(self + 0x7da) = uVar8 & 0xf800 | 5;
  *(uint32_t *)(self + 0x80c) = 0;
  *(uint32_t *)(self + 0x810) = 0;
  *(uint64_t *)(self + 0x818) = 0;
  self[0x7db] = (MeatBoyCharactor)((byte)((uVar8 & 0xf800) >> 8) & 0x1f);
  *(uint64_t *)(self + 0x820) = 0;
  *(uint64_t *)(self + 0x828) = 0;
  *(uint64_t *)(self + 0x830) = 0;
  *(uint32_t *)(self + 0x838) = 0;
  *(uint32_t *)(self + 0x83c) = 0;
  *(uint32_t *)(self + 0x860) = 1;
  *(uint32_t *)(self + 0x868) = 0;
  *(uint32_t *)(self + 0x86c) = 0;
  *(uint32_t *)(self + 0x870) = 0;
  *(uint32_t *)(self + 0x874) = 0;
  *(uint32_t *)(self + 0x878) = 0;
  *(uint32_t *)(self + 0x87c) = 0;
  /* try { // try from 0047b6e2 to 0047b6e6 has its CatchHandler @ 0047d60d */
  CriticalSection__CriticalSection((CriticalSection *)(self + 0x880));
  *(uint64_t *)(self + 0x994) = 0;
  *(uint64_t *)(self + 0x99c) = 0;
  *(uint64_t *)(self + 0x9a4) = 0;
  *(uint64_t *)(self + 0x9ac) = 0;
  *(uint64_t *)(self + 0x9b4) = 0;
  *(uint8_t (*)[16])(self + 0xa60) = (uint8_t[16])0x0;
  *(uint64_t *)(self + 0x9bc) = 0;
  *(uint64_t *)(self + 0x9c4) = 0;
  *(uint8_t (*)[16])(self + 0xa70) = (uint8_t[16])0x0;
  *(uint8_t (*)[16])(self + 0xa80) = (uint8_t[16])0x0;
  *(uint64_t *)(self + 0x9cc) = 0;
  *(uint64_t *)(self + 0x9d4) = 0;
  *(uint64_t *)(self + 0x9dc) = 0;
  *(uint64_t *)(self + 0x9e4) = 0;
  *(uint64_t *)(self + 0x9ec) = 0;
  *(uint64_t *)(self + 0x9f4) = 0;
  *(uint64_t *)(self + 0x9fc) = 0;
  *(uint64_t *)(self + 0xa04) = 0;
  *(uint64_t *)(self + 0xa0c) = 0;
  *(uint64_t *)(self + 0xa14) = 0;
  *(uint64_t *)(self + 0xa1c) = 0;
  *(uint32_t *)(self + 0xa40) = 0;
  *(uint32_t *)(self + 0xa44) = 0;
  *(uint32_t *)(self + 0xa48) = 0;
  *(uint32_t *)(self + 0xa4c) = 0;
  *(uint32_t *)(self + 0xa50) = 0;
  *(uint32_t *)(self + 0xa54) = arg3;
  *(uint8_t **)(self + 0xa58) = &DAT_008184c8 /* R:0.00016803004837129265f */;
  /* try { // try from 0047b836 to 0047b83a has its CatchHandler @ 0047d88a */
  puVar11 = operator_new(0x890);
  this_03 = (CriticalSection *)(puVar11 + 1);
  lVar20 = 0x17;
  do {
    /* try { // try from 0047b853 to 0047b857 has its CatchHandler @ 0047d842 */
    CriticalSection__CriticalSection(this_03);
    lVar20 = lVar20 + -1;
    *(uint16_t *)(this_03 + 0x2a) = 0;
    *(uint16_t *)(this_03 + 0x28) = 0;
    *(uint16_t *)(this_03 + 0x34) = 1;
    *(uint64_t *)(this_03 + 0x38) = 0;
    *(uint64_t *)(this_03 + 0x40) = 0;
    *(uint32_t *)(this_03 + 0x48) = 0;
    this_03[0x2c] = (CriticalSection)0x4;
    *(uint32_t *)(this_03 + 0x30) = 0;
    *(uint32_t *)(this_03 + 0x50) = 0;
    this_03 = this_03 + 0x58;
  } while (lVar20 != -1);
  *(uint64_t **)(self + 0xf8) = puVar11;
  /* try { // try from 0047b8ae to 0047b8b2 has its CatchHandler @ 0047d88a */
  this_01 = operator_new(0xb0);
  /* try { // try from 0047b8bc to 0047b8c0 has its CatchHandler @ 0047d827 */
  FlashAnimationLibrary__FlashAnimationLibrary__00576680(this_01, arg1);
  *puVar11 = this_01;
  lVar20 = 0;
  this_01[0x8d] = (FlashAnimationLibrary)0x1;
  do {
    if ((&MeatBoyCharFoundation__Initialize(
            MeatBoyCharFoundationCreate_const *)::strClipNames)[lVar20] != (char *)0x0) {
      /* try { // try from 0047b8e5 to 0047bae9 has its CatchHandler @ 0047d88a */
      lVar12 = FlashAnimationLibrary__GetMovieClip__005731d0(
          (FlashAnimationLibrary *)*puVar11,
          (&MeatBoyCharFoundation__Initialize(
              MeatBoyCharFoundationCreate_const *)::strClipNames)[lVar20]);
      if (lVar12 == 0) {
        std__string_string((string *)local_138, "Could not find Clip: ", &local_3f);
        __s = (&MeatBoyCharFoundation__Initialize(
            MeatBoyCharFoundationCreate_const *)::strClipNames)[lVar20];
        strlen(__s);
        /* try { // try from 0047bb08 to 0047bb19 has its CatchHandler @ 0047d632 */
        std__string_append((char *)local_138, (ulong)__s);
        Error__ThrowFatalError(local_138[0]);
        if ((allocator *)(local_138[0] + -0x18) !=
            (allocator *)&std__string_Rep_S_empty_rep_storage) {
          LOCK();
          piVar1 = (int *)(local_138[0] + -8);
          iVar24 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar24 < 1) {
            std__string_Rep_M_destroy((allocator *)(local_138[0] + -0x18));
          }
        }
      } else {
        lVar23 = (long)(int)lVar20;
        lVar2 = lVar23 * 0x58;
        if (*(int *)(puVar11 + lVar23 * 0xb + 10) == -0x5eef3582) {
          uVar8 = *(ushort *)(puVar11 + lVar23 * 0xb + 6);
          uVar9 = *(ushort *)((long)puVar11 + lVar2 + 0x32);
          if (uVar9 <= uVar8) {
            uVar9 = uVar9 + *(short *)((long)puVar11 + lVar2 + 0x3c);
            uVar18 = (ulong) * (byte *)((long)puVar11 + lVar2 + 0x34);
            pvVar13 = (void *)0x0;
            pvVar17 = (void *)puVar11[lVar23 * 0xb + 8];
            *(ushort *)((long)puVar11 + lVar2 + 0x32) = uVar9;
            uVar22 = (ulong)uVar9 * 8;
            pvVar14 = malloc(uVar18 + 0x10 + uVar22);
            if (pvVar14 != (void *)0x0) {
              pvVar13 = (void *)((long)pvVar14 + 0x10U +
                                 (uVar18 - ((long)pvVar14 + 0x10U) % uVar18) % uVar18);
              *(ulong *)((long)pvVar13 + -0x10) = uVar22;
              *(void **)((long)pvVar13 + -8) = pvVar14;
              if (pvVar17 != (void *)0x0) {
                uVar18 = *(ulong *)((long)pvVar17 + -0x10);
                if (uVar22 <= *(ulong *)((long)pvVar17 + -0x10)) {
                  uVar18 = uVar22;
                }
                memcpy(pvVar13, pvVar17, uVar18);
                free(*(void **)((long)pvVar17 + -8));
              }
            }
            pvVar17 = (void *)puVar11[lVar23 * 0xb + 9];
            puVar11[lVar23 * 0xb + 8] = pvVar13;
            if (pvVar17 != (void *)0x0) {
              uVar9 = *(ushort *)((long)puVar11 + lVar2 + 0x32);
              uVar18 = (ulong) * (byte *)((long)puVar11 + lVar2 + 0x34);
              pvVar13 = (void *)0x0;
              uVar22 = (ulong)uVar9 * 2;
              pvVar14 = malloc(uVar18 + 0x10 + uVar22);
              if (pvVar14 != (void *)0x0) {
                pvVar13 = (void *)((long)pvVar14 + 0x10U +
                                   (uVar18 - ((long)pvVar14 + 0x10U) % uVar18) % uVar18);
                *(ulong *)((long)pvVar13 + -0x10) = uVar22;
                *(void **)((long)pvVar13 + -8) = pvVar14;
                uVar18 = *(ulong *)((long)pvVar17 + -0x10);
                if (uVar22 <= *(ulong *)((long)pvVar17 + -0x10)) {
                  uVar18 = uVar22;
                }
                memcpy(pvVar13, pvVar17, uVar18);
                free(*(void **)((long)pvVar17 + -8));
                uVar9 = *(ushort *)((long)puVar11 + lVar2 + 0x32);
              }
              uVar8 = *(ushort *)(puVar11 + lVar23 * 0xb + 6);
              puVar11[lVar23 * 0xb + 9] = pvVar13;
              if (uVar9 <= uVar8)
                goto LAB_0047b99e;
              while (true) {
                uVar22 = (ulong)uVar8;
                uVar8 = uVar8 + 1;
                *(uint16_t *)((long)pvVar13 + uVar22 * 2) = 0xffff;
                if (uVar9 <= uVar8)
                  break;
                pvVar13 = (void *)puVar11[lVar23 * 0xb + 9];
              }
            }
            uVar8 = *(ushort *)(puVar11 + lVar23 * 0xb + 6);
          }
        } else {
          uVar22 = (ulong) * (byte *)((long)puVar11 + lVar2 + 0x34);
          *(uint32_t *)(puVar11 + lVar23 * 0xb + 7) = 0;
          pvVar13 = malloc(uVar22 + 0x38);
          puVar21 = (uint64_t *)0x0;
          if (pvVar13 != (void *)0x0) {
            puVar21 = (uint64_t *)((uVar22 - ((long)pvVar13 + 0x10U) % uVar22) % uVar22 +
                                   (long)pvVar13 + 0x10U);
            puVar21[-2] = 0x28;
            puVar21[-1] = pvVar13;
          }
          puVar11[lVar23 * 0xb + 8] = puVar21;
          uVar8 = 0;
          *puVar21 = 0;
          puVar21[1] = 0;
          puVar21[2] = 0;
          puVar21[3] = 0;
          puVar21[4] = 0;
          *(uint16_t *)(puVar11 + lVar23 * 0xb + 6) = 0;
          *(uint16_t *)((long)puVar11 + lVar2 + 0x32) = 5;
          *(uint32_t *)(puVar11 + lVar23 * 0xb + 10) = 0xa110ca7e;
          *(uint16_t *)((long)puVar11 + lVar2 + 0x3c) = 5;
        }
      LAB_0047b99e:
        if ((*(int *)(puVar11 + lVar23 * 0xb + 7) == 1) &&
            (sVar4 = *(short *)((long)puVar11 + lVar2 + 0x32), sVar4 != 0)) {
          puVar15 = (ushort *)puVar11[lVar23 * 0xb + 9];
          sVar19 = 0;
          uVar9 = *puVar15;
          while (uVar9 != 0xffff) {
            puVar15 = puVar15 + 1;
            sVar19 = sVar19 + 1;
            if (sVar19 == sVar4)
              goto LAB_0047b9a8;
            uVar9 = *puVar15;
          }
          *puVar15 = uVar8;
          uVar8 = *(ushort *)(puVar11 + lVar23 * 0xb + 6);
        }
      LAB_0047b9a8:
        *(long *)(puVar11[lVar23 * 0xb + 8] + (ulong)uVar8 * 8) = lVar12;
        puVar6 = (&MeatBoyCharFoundation__Initialize(
            MeatBoyCharFoundationCreate_const *)::strClipNames)[lVar20];
        iVar24 = 1;
        *(short *)(puVar11 + lVar23 * 0xb + 6) = *(short *)(puVar11 + lVar23 * 0xb + 6) + 1;
        while (true) {
          Sprint("%s_alt%i", &local_1f8, puVar6, iVar24);
          lVar12 = FlashAnimationLibrary__GetMovieClip__005731d0((FlashAnimationLibrary *)*puVar11,
                                                                 (char *)&local_1f8);
          if (lVar12 == 0)
            break;
          if (*(int *)(puVar11 + lVar23 * 0xb + 10) == -0x5eef3582) {
            uVar9 = *(ushort *)(puVar11 + lVar23 * 0xb + 6);
            uVar8 = *(ushort *)((long)puVar11 + lVar2 + 0x32);
            if (uVar9 < uVar8)
              goto LAB_0047baa4;
            uVar8 = uVar8 + *(short *)((long)puVar11 + lVar2 + 0x3c);
            uVar18 = (ulong) * (byte *)((long)puVar11 + lVar2 + 0x34);
            pvVar17 = (void *)puVar11[lVar23 * 0xb + 8];
            *(ushort *)((long)puVar11 + lVar2 + 0x32) = uVar8;
            uVar22 = (ulong)uVar8 * 8;
            pvVar14 = malloc(uVar18 + 0x10 + uVar22);
            pvVar13 = (void *)0x0;
            if (pvVar14 != (void *)0x0) {
              pvVar13 = (void *)((long)pvVar14 + 0x10U +
                                 (uVar18 - ((long)pvVar14 + 0x10U) % uVar18) % uVar18);
              *(ulong *)((long)pvVar13 + -0x10) = uVar22;
              *(void **)((long)pvVar13 + -8) = pvVar14;
              if (pvVar17 != (void *)0x0) {
                uVar18 = *(ulong *)((long)pvVar17 + -0x10);
                if (uVar22 <= *(ulong *)((long)pvVar17 + -0x10)) {
                  uVar18 = uVar22;
                }
                memcpy(pvVar13, pvVar17, uVar18);
                free(*(void **)((long)pvVar17 + -8));
              }
            }
            puVar11[lVar23 * 0xb + 8] = pvVar13;
            pvVar13 = (void *)puVar11[lVar23 * 0xb + 9];
            if (pvVar13 != (void *)0x0) {
              uVar8 = *(ushort *)((long)puVar11 + lVar2 + 0x32);
              uVar18 = (ulong) * (byte *)((long)puVar11 + lVar2 + 0x34);
              uVar22 = (ulong)uVar8 * 2;
              pvVar14 = malloc(uVar18 + 0x10 + uVar22);
              pvVar17 = (void *)0x0;
              if (pvVar14 != (void *)0x0) {
                pvVar17 = (void *)((long)pvVar14 + 0x10U +
                                   (uVar18 - ((long)pvVar14 + 0x10U) % uVar18) % uVar18);
                *(void **)((long)pvVar17 + -8) = pvVar14;
                *(ulong *)((long)pvVar17 + -0x10) = uVar22;
                uVar18 = *(ulong *)((long)pvVar13 + -0x10);
                if (uVar22 <= *(ulong *)((long)pvVar13 + -0x10)) {
                  uVar18 = uVar22;
                }
                memcpy(pvVar17, pvVar13, uVar18);
                free(*(void **)((long)pvVar13 + -8));
                uVar8 = *(ushort *)((long)puVar11 + lVar2 + 0x32);
              }
              uVar9 = *(ushort *)(puVar11 + lVar23 * 0xb + 6);
              puVar11[lVar23 * 0xb + 9] = pvVar17;
              if (uVar8 <= uVar9)
                goto LAB_0047baa4;
              while (true) {
                uVar22 = (ulong)uVar9;
                uVar9 = uVar9 + 1;
                *(uint16_t *)((long)pvVar17 + uVar22 * 2) = 0xffff;
                if (uVar8 <= uVar9)
                  break;
                pvVar17 = (void *)puVar11[lVar23 * 0xb + 9];
              }
            }
            iVar5 = *(int *)(puVar11 + lVar23 * 0xb + 7);
            uVar9 = *(ushort *)(puVar11 + lVar23 * 0xb + 6);
          } else {
            uVar22 = (ulong) * (byte *)((long)puVar11 + lVar2 + 0x34);
            *(uint32_t *)(puVar11 + lVar23 * 0xb + 7) = 0;
            pvVar13 = malloc(uVar22 + 0x38);
            puVar21 = (uint64_t *)0x0;
            if (pvVar13 != (void *)0x0) {
              puVar21 = (uint64_t *)((long)pvVar13 + 0x10U +
                                     (uVar22 - ((long)pvVar13 + 0x10U) % uVar22) % uVar22);
              puVar21[-2] = 0x28;
              puVar21[-1] = pvVar13;
            }
            puVar11[lVar23 * 0xb + 8] = puVar21;
            uVar9 = 0;
            *puVar21 = 0;
            puVar21[1] = 0;
            puVar21[2] = 0;
            puVar21[3] = 0;
            puVar21[4] = 0;
            *(uint16_t *)(puVar11 + lVar23 * 0xb + 6) = 0;
            *(uint16_t *)((long)puVar11 + lVar2 + 0x32) = 5;
            *(uint32_t *)(puVar11 + lVar23 * 0xb + 10) = 0xa110ca7e;
            *(uint16_t *)((long)puVar11 + lVar2 + 0x3c) = 5;
          LAB_0047baa4:
            iVar5 = *(int *)(puVar11 + lVar23 * 0xb + 7);
          }
          if ((iVar5 == 1) && (sVar4 = *(short *)((long)puVar11 + lVar2 + 0x32), sVar4 != 0)) {
            puVar15 = (ushort *)puVar11[lVar23 * 0xb + 9];
            sVar19 = 0;
            uVar8 = *puVar15;
            while (uVar8 != 0xffff) {
              puVar15 = puVar15 + 1;
              sVar19 = sVar19 + 1;
              if (sVar19 == sVar4)
                goto LAB_0047baae;
              uVar8 = *puVar15;
            }
            *puVar15 = uVar9;
            uVar9 = *(ushort *)(puVar11 + lVar23 * 0xb + 6);
          }
        LAB_0047baae:
          iVar24 = iVar24 + 1;
          *(long *)(puVar11[lVar23 * 0xb + 8] + (ulong)uVar9 * 8) = lVar12;
          *(short *)(puVar11 + lVar23 * 0xb + 6) = *(short *)(puVar11 + lVar23 * 0xb + 6) + 1;
        }
      }
    }
    lVar20 = lVar20 + 1;
  } while (lVar20 != 0x18);
  /* try { // try from 0047bb86 to 0047bd2b has its CatchHandler @ 0047d88a */
  lVar20 = FlashAnimationLibrary__GetMovieClip__005731d0((FlashAnimationLibrary *)*puVar11,
                                                         "land splat");
  puVar11[0x109] = lVar20;
  if (lVar20 == 0) {
    /* try { // try from 0047cf44 to 0047cf48 has its CatchHandler @ 0047d88a */
    std__string_string((string *)local_138, "Could not find Clip: ", local_3e);
    /* try { // try from 0047cf56 to 0047cf67 has its CatchHandler @ 0047d8d1 */
    std__string_append((char *)local_138, 0x5c046c);
    Error__ThrowFatalError(local_138[0]);
    if ((allocator *)(local_138[0] + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage) {
      LOCK();
      piVar1 = (int *)(local_138[0] + -8);
      iVar24 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar24 < 1) {
        std__string_Rep_M_destroy((allocator *)(local_138[0] + -0x18));
      }
    }
  }
  lVar20 = FlashAnimationLibrary__GetMovieClip__005731d0((FlashAnimationLibrary *)*puVar11,
                                                         "Jumping blood1");
  puVar11[0x10a] = lVar20;
  if (lVar20 == 0) {
    /* try { // try from 0047cfc0 to 0047cfc4 has its CatchHandler @ 0047d88a */
    std__string_string((string *)local_138, "Could not find Clip: ", local_3e);
    /* try { // try from 0047cfd2 to 0047cfe3 has its CatchHandler @ 0047d8d1 */
    std__string_append((char *)local_138, 0x5c0477);
    Error__ThrowFatalError(local_138[0]);
    if ((allocator *)(local_138[0] + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage) {
      LOCK();
      piVar1 = (int *)(local_138[0] + -8);
      iVar24 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar24 < 1) {
        std__string_Rep_M_destroy((allocator *)(local_138[0] + -0x18));
      }
    }
  }
  lVar20 =
      FlashAnimationLibrary__GetMovieClip__005731d0((FlashAnimationLibrary *)*puVar11, "wall land");
  puVar11[0x10b] = lVar20;
  if (lVar20 == 0) {
    /* try { // try from 0047d040 to 0047d044 has its CatchHandler @ 0047d88a */
    std__string_string((string *)local_138, "Could not find Clip: ", local_3e);
    /* try { // try from 0047d052 to 0047d063 has its CatchHandler @ 0047d8d1 */
    std__string_append((char *)local_138, 0x5c0486);
    Error__ThrowFatalError(local_138[0]);
    if ((allocator *)(local_138[0] + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage) {
      LOCK();
      piVar1 = (int *)(local_138[0] + -8);
      iVar24 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar24 < 1) {
        std__string_Rep_M_destroy((allocator *)(local_138[0] + -0x18));
      }
    }
  }
  lVar20 = FlashAnimationLibrary__GetMovieClip__005731d0((FlashAnimationLibrary *)*puVar11,
                                                         "wall blood poof");
  puVar11[0x10c] = lVar20;
  if (lVar20 == 0) {
    /* try { // try from 0047d0c0 to 0047d0c4 has its CatchHandler @ 0047d88a */
    std__string_string((string *)local_138, "Could not find Clip: ", local_3e);
    /* try { // try from 0047d0d2 to 0047d0e3 has its CatchHandler @ 0047d8d1 */
    std__string_append((char *)local_138, 0x5c0490);
    Error__ThrowFatalError(local_138[0]);
    if ((allocator *)(local_138[0] + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage) {
      LOCK();
      piVar1 = (int *)(local_138[0] + -8);
      iVar24 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar24 < 1) {
        std__string_Rep_M_destroy((allocator *)(local_138[0] + -0x18));
      }
    }
  }
  lVar20 = FlashAnimationLibrary__GetMovieClip__005731d0((FlashAnimationLibrary *)*puVar11,
                                                         "Bloodgush4");
  puVar11[0x10d] = lVar20;
  if (lVar20 == 0) {
    /* try { // try from 0047d140 to 0047d144 has its CatchHandler @ 0047d88a */
    std__string_string((string *)local_138, "Could not find Clip: ", local_3e);
    /* try { // try from 0047d152 to 0047d163 has its CatchHandler @ 0047d8d1 */
    std__string_append((char *)local_138, 0x5c04a0);
    Error__ThrowFatalError(local_138[0]);
    if ((allocator *)(local_138[0] + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage) {
      LOCK();
      piVar1 = (int *)(local_138[0] + -8);
      iVar24 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar24 < 1) {
        std__string_Rep_M_destroy((allocator *)(local_138[0] + -0x18));
      }
    }
  }
  lVar20 = FlashAnimationLibrary__GetMovieClip__005731d0((FlashAnimationLibrary *)*puVar11,
                                                         "blood gush 3");
  puVar11[0x10e] = lVar20;
  if (lVar20 == 0) {
    /* try { // try from 0047d1c0 to 0047d1c4 has its CatchHandler @ 0047d88a */
    std__string_string((string *)local_138, "Could not find Clip: ", local_3e);
    /* try { // try from 0047d1d2 to 0047d1e3 has its CatchHandler @ 0047d8d1 */
    std__string_append((char *)local_138, 0x5c04ab);
    Error__ThrowFatalError(local_138[0]);
    if ((allocator *)(local_138[0] + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage) {
      LOCK();
      piVar1 = (int *)(local_138[0] + -8);
      iVar24 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar24 < 1) {
        std__string_Rep_M_destroy((allocator *)(local_138[0] + -0x18));
      }
    }
  }
  lVar20 = FlashAnimationLibrary__GetMovieClip__005731d0((FlashAnimationLibrary *)*puVar11,
                                                         "bloodgush1");
  puVar11[0x10f] = lVar20;
  if (lVar20 == 0) {
    /* try { // try from 0047d240 to 0047d244 has its CatchHandler @ 0047d88a */
    std__string_string((string *)local_138, "Could not find Clip: ", local_3e);
    /* try { // try from 0047d252 to 0047d263 has its CatchHandler @ 0047d8d1 */
    std__string_append((char *)local_138, 0x5c04b8);
    Error__ThrowFatalError(local_138[0]);
    if ((allocator *)(local_138[0] + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage) {
      LOCK();
      piVar1 = (int *)(local_138[0] + -8);
      iVar24 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar24 < 1) {
        std__string_Rep_M_destroy((allocator *)(local_138[0] + -0x18));
      }
    }
  }
  lVar20 =
      FlashAnimationLibrary__GetMovieClip__005731d0((FlashAnimationLibrary *)*puVar11, "splat");
  puVar11[0x110] = lVar20;
  if (lVar20 == 0) {
    /* try { // try from 0047d2c0 to 0047d2c4 has its CatchHandler @ 0047d88a */
    std__string_string((string *)local_138, "Could not find Clip: ", local_3e);
    /* try { // try from 0047d2d2 to 0047d2e3 has its CatchHandler @ 0047d8d1 */
    std__string_append((char *)local_138, 0x5c0471);
    Error__ThrowFatalError(local_138[0]);
    if ((allocator *)(local_138[0] + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage) {
      LOCK();
      piVar1 = (int *)(local_138[0] + -8);
      iVar24 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar24 < 1) {
        std__string_Rep_M_destroy((allocator *)(local_138[0] + -0x18));
      }
    }
  }
  lVar20 = FlashAnimationLibrary__GetMovieClip__005731d0((FlashAnimationLibrary *)*puVar11,
                                                         "slide blood");
  puVar11[0x111] = lVar20;
  if (lVar20 == 0) {
    /* try { // try from 0047d340 to 0047d344 has its CatchHandler @ 0047d88a */
    std__string_string((string *)local_138, "Could not find Clip: ", local_3e);
    /* try { // try from 0047d352 to 0047d363 has its CatchHandler @ 0047d8d1 */
    std__string_append((char *)local_138, 0x5c04c3);
    Error__ThrowFatalError(local_138[0]);
    if ((allocator *)(local_138[0] + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage) {
      LOCK();
      piVar1 = (int *)(local_138[0] + -8);
      iVar24 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar24 < 1) {
        std__string_Rep_M_destroy((allocator *)(local_138[0] + -0x18));
      }
    }
  }
  this_00 = GSuperMeatBoy__pReplay;
  *(SMBReplay **)(self + 0xa38) = GSuperMeatBoy__pReplay;
  SMBReplay__ResetAll(this_00);
  pvVar13 = operator_new(0x140);
  *(void **)(self + 0x7f0) = pvVar13;
  this_02 = (string *)std__string_rfind((char)**(uint64_t **)(self + 0xf8) + 'h', 0x2f);
  iVar24 = std__string_rfind((char)**(uint64_t **)(self + 0xf8) + 'h', 0x2e);
  uVar22 = (ulong)((int)this_02 + 1);
  if (*(ulong *)(*(long *)(**(long **)(self + 0xf8) + 0x68) + -0x18) < uVar22) {
    /* try { // try from 0047d8cc to 0047d908 has its CatchHandler @ 0047d88a */
    uVar16 = std__throw_out_of_range("basic_string__substr");
    /* catch() { ... } // from try @ 0047cf56 with catch @ 0047d8d1
                       catch() { ... } // from try @ 0047cfd2 with catch @ 0047d8d1
                       catch() { ... } // from try @ 0047d052 with catch @ 0047d8d1
                       catch() { ... } // from try @ 0047d0d2 with catch @ 0047d8d1
                       catch() { ... } // from try @ 0047d152 with catch @ 0047d8d1
                       catch() { ... } // from try @ 0047d1d2 with catch @ 0047d8d1
                       catch() { ... } // from try @ 0047d252 with catch @ 0047d8d1
                       catch() { ... } // from try @ 0047d2d2 with catch @ 0047d8d1
                       catch() { ... } // from try @ 0047d352 with catch @ 0047d8d1
                       catch() { ... } // from try @ 0047d7d9 with catch @ 0047d8d1
                       catch() { ... } // from try @ 0047d916 with catch @ 0047d8d1
                       catch() { ... } // from try @ 0047d98e with catch @ 0047d8d1
                       catch() { ... } // from try @ 0047da06 with catch @ 0047d8d1
                       catch() { ... } // from try @ 0047da7e with catch @ 0047d8d1
                       catch() { ... } // from try @ 0047daf6 with catch @ 0047d8d1
                       catch() { ... } // from try @ 0047db6e with catch @ 0047d8d1
                       catch() { ... } // from try @ 0047dbe6 with catch @ 0047d8d1
                       catch() { ... } // from try @ 0047dc5e with catch @ 0047d8d1 */
    std__string_string(this_02);
    std__string_string((string *)(self + 0xa58));
    CriticalSection__CriticalSection__005b71d0((CriticalSection *)(self + 0x880));
    SceneObject2D__SceneObject2D__0059b220((SceneObject2D *)self);
    /* WARNING: Subroutine does not return */
    _Unwind_Resume(uVar16);
  }
  std__string_string((string *)local_e8, (string *)(**(long **)(self + 0xf8) + 0x68), uVar22,
                     (long)((iVar24 - (int)this_02) + -1));
  local_c8[0] = &DAT_008184c8 /* R:0.00016803004837129265f */;
  /* try { // try from 0047bd50 to 0047bd80 has its CatchHandler @ 0047d8aa */
  std__string_reserve((ulong)local_c8);
  std__string_append((char *)local_c8, 0x5c04ec);
  std__string_append((string *)local_c8);
  /* try { // try from 0047bd91 to 0047bd95 has its CatchHandler @ 0047d89a */
  std__string_string((string *)local_d8, (string *)local_c8);
  /* try { // try from 0047bda8 to 0047bdac has its CatchHandler @ 0047d5c3 */
  std__string_append((char *)local_d8, 0x5c050c);
  /* try { // try from 0047bdc0 to 0047bdc4 has its CatchHandler @ 0047d5ed */
  std__string_assign((string *)(self + 0xa58));
  if ((allocator *)(local_d8[0] + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage) {
    LOCK();
    piVar1 = (int *)(local_d8[0] + -8);
    iVar24 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar24 < 1) {
      std__string_Rep_M_destroy((allocator *)(local_d8[0] + -0x18));
    }
  }
  if ((allocator *)(local_c8[0] + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage) {
    LOCK();
    piVar1 = (int *)(local_c8[0] + -8);
    iVar24 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar24 < 1) {
      std__string_Rep_M_destroy((allocator *)(local_c8[0] + -0x18));
    }
  }
  /* try { // try from 0047be01 to 0047be05 has its CatchHandler @ 0047d567 */
  iVar24 = File__Exists(*(char **)(self + 0xa58), 0);
  if (iVar24 == 0) {
    local_1e8 = 2;
    local_1e0 = 0;
    local_1d8 = 0;
    local_1d4 = 1;
    local_1d0 = 1;
    local_1cc = 0;
    local_1c8 = 0;
    local_1c4 = 0;
    local_1c0 = &DAT_005c04cf /* R:7.374579797039071e-39f */;
    local_1f0 = &DAT_005c328c /* R:u32=1811964530 */;
    local_1f8 = "CharProps/meatboyanim.props";
    /* try { // try from 0047be9b to 0047be9f has its CatchHandler @ 0047d562 */
    File__File((File *)&local_178, (tagFileCreation *)&local_1f8);
    uVar7 = local_178._4_4_;
    pvVar13 = malloc((ulong)local_178._4_4_);
    /* try { // try from 0047bebe to 0047bef6 has its CatchHandler @ 0047d55a */
    File__Read((File *)&local_178, pvVar13, uVar7);
    local_1f8 = *(char **)(self + 0xa58);
    local_1f0 = &DAT_005c0513 /* R:u32=1996513911 */;
    File__File((File *)local_138, (tagFileCreation *)&local_1f8);
    /* try { // try from 0047bf04 to 0047bf08 has its CatchHandler @ 0047d4ce */
    File__Write((File *)local_138, pvVar13, local_178._4_4_);
    free(pvVar13);
    /* try { // try from 0047bf14 to 0047bf18 has its CatchHandler @ 0047d55a */
    File__File__005b7a70((File *)local_138);
    /* try { // try from 0047bf21 to 0047bf25 has its CatchHandler @ 0047d562 */
    File__File__005b7a70((File *)&local_178);
  }
  /* try { // try from 0047bf30 to 0047bff5 has its CatchHandler @ 0047d567 */
  iVar24 = File__Exists(*(char **)(self + 0xa58), 0);
  if (iVar24 != 1) {
    *(uint32_t *)(self + 0x8ac) = 0x41200000;
    *(uint32_t *)(self + 0x8a8) = 0x41a00000;
    iVar24 = 0;
    *(uint32_t *)(self + 0x8b0) = 0x43fa0000;
    *(uint32_t *)(self + 0x8b4) = 0x443b8000;
    *(uint32_t *)(self + 0x8b8) = 0x43960000;
    *(uint32_t *)(self + 0x8c4) = 0xc47a0000;
    *(uint32_t *)(self + 0x8c0) = 0x3a83126f;
    *(uint32_t *)(self + 0x8bc) = 0;
    *(uint32_t *)(self + 0x8c8) = 0x3f99999a;
    *(uint32_t *)(self + 0x8d0) = 0x40c00000;
    *(uint32_t *)(self + 0x8cc) = 0x40c00000;
    do {
      local_98 = 0;
      local_94 = 0;
      Vector2__operator_assign((Vector2 *)(self + (long)iVar24 * 8 + 0x8d4), (Vector2 *)&local_98);
      iVar24 = iVar24 + 1;
    } while (iVar24 != 0x18);
    *(uint32_t *)(self + 0x994) = 0;
    *(uint32_t *)(self + 0x998) = 0;
    *(uint32_t *)(self + 0x99c) = 0x3f800000;
    *(uint32_t *)(self + 0x9a0) = 0;
    *(uint32_t *)(self + 0x9a4) = 0;
    *(uint32_t *)(self + 0x9a8) = 0;
    *(uint32_t *)(self + 0x9ac) = 0x3f800000;
    *(uint32_t *)(self + 0x9b0) = 0;
    *(uint32_t *)(self + 0x9b4) = 0;
    *(uint32_t *)(self + 0x9b8) = 0;
    *(uint32_t *)(self + 0x9bc) = 0x3f800000;
    *(uint32_t *)(self + 0x9c0) = 0;
    *(uint32_t *)(self + 0x9c4) = 0;
    *(uint32_t *)(self + 0x9c8) = 0;
    *(uint32_t *)(self + 0x9cc) = 0x3f800000;
    *(uint32_t *)(self + 0x9d0) = 0;
    *(uint32_t *)(self + 0x9d4) = 0;
    *(uint32_t *)(self + 0x9d8) = 0;
    *(uint32_t *)(self + 0x9dc) = 0x3f800000;
    *(uint32_t *)(self + 0x9e0) = 0;
    *(uint32_t *)(self + 0x9e4) = 0;
    *(uint32_t *)(self + 0x9e8) = 0;
    *(uint32_t *)(self + 0x9ec) = 0x3f800000;
    *(uint32_t *)(self + 0x9f0) = 0;
    *(uint32_t *)(self + 0x9f4) = 0;
    *(uint32_t *)(self + 0x9f8) = 0;
    *(uint32_t *)(self + 0x9fc) = 0x3f800000;
    *(uint32_t *)(self + 0xa00) = 0;
    *(uint32_t *)(self + 0xa04) = 0;
    *(uint32_t *)(self + 0xa08) = 0;
    *(uint32_t *)(self + 0xa0c) = 0x3f800000;
    *(uint32_t *)(self + 0xa10) = 0;
    *(uint32_t *)(self + 0xa14) = 0;
    *(uint32_t *)(self + 0xa18) = 0;
    *(uint32_t *)(self + 0xa1c) = 0x3f800000;
    *(uint32_t *)(self + 0xa20) = 0;
    *(uint32_t *)(self + 0xa2c) = 0x3f000000;
    *(uint32_t *)(self + 0xa24) = 0x3f000000;
    *(uint32_t *)(self + 0xa28) = 0x3f000000;
    *(uint32_t *)(self + 0xa30) = 0x3f266666;
    *(uint32_t *)(self + 0xa34) = 0x3f000000;
    goto LAB_0047c1ea;
  }
  pMVar3 = self + 0x8d4;
  local_178 = *(uint64_t *)(self + 0xa58);
  local_168 = 2;
  local_160 = 0;
  local_158 = 0;
  uVar22 = 0xc0;
  bVar26 = ((ulong)pMVar3 & 1) != 0;
  local_154 = 1;
  local_150 = 1;
  local_14c = 0;
  local_148 = 0;
  local_144 = 0;
  local_140 = &DAT_005c04cf /* R:7.374579797039071e-39f */;
  local_170 = &DAT_005c328c /* R:u32=1811964530 */;
  pMVar10 = pMVar3;
  if (bVar26) {
    self[0x8d4] = (MeatBoyCharactor)0x0;
    pMVar10 = self + 0x8d5;
    uVar22 = 0xbf;
  }
  if (((ulong)pMVar10 & 2) != 0) {
    *(uint16_t *)pMVar10 = 0;
    uVar22 = (ulong)((int)uVar22 - 2);
    pMVar10 = pMVar10 + 2;
  }
  if (((ulong)pMVar10 & 4) != 0) {
    *(uint32_t *)pMVar10 = 0;
    uVar22 = (ulong)((int)uVar22 - 4);
    pMVar10 = pMVar10 + 4;
  }
  for (uVar18 = uVar22 >> 3; uVar18 != 0; uVar18 = uVar18 - 1) {
    *(uint64_t *)pMVar10 = 0;
    pMVar10 = pMVar10 + (ulong)bVar27 * -0x10 + 8;
  }
  if ((uVar22 & 4) != 0) {
    *(uint32_t *)pMVar10 = 0;
    pMVar10 = pMVar10 + 4;
  }
  if ((uVar22 & 2) != 0) {
    *(uint16_t *)pMVar10 = 0;
    pMVar10 = pMVar10 + 2;
  }
  if (bVar26) {
    *pMVar10 = (MeatBoyCharactor)0x0;
  }
  pMVar10 = self + 0x994;
  uVar22 = 0x90;
  bVar26 = ((ulong)pMVar10 & 1) != 0;
  pMVar25 = pMVar10;
  if (bVar26) {
    self[0x994] = (MeatBoyCharactor)0x0;
    pMVar25 = self + 0x995;
    uVar22 = 0x8f;
  }
  if (((ulong)pMVar25 & 2) != 0) {
    *(uint16_t *)pMVar25 = 0;
    uVar22 = (ulong)((int)uVar22 - 2);
    pMVar25 = pMVar25 + 2;
  }
  if (((ulong)pMVar25 & 4) != 0) {
    *(uint32_t *)pMVar25 = 0;
    uVar22 = (ulong)((int)uVar22 - 4);
    pMVar25 = pMVar25 + 4;
  }
  for (uVar18 = uVar22 >> 3; uVar18 != 0; uVar18 = uVar18 - 1) {
    *(uint64_t *)pMVar25 = 0;
    pMVar25 = pMVar25 + (ulong)bVar27 * -0x10 + 8;
  }
  if ((uVar22 & 4) != 0) {
    *(uint32_t *)pMVar25 = 0;
    pMVar25 = pMVar25 + 4;
  }
  if ((uVar22 & 2) != 0) {
    *(uint16_t *)pMVar25 = 0;
    pMVar25 = pMVar25 + 2;
  }
  if (bVar26) {
    *pMVar25 = (MeatBoyCharactor)0x0;
  }
  /* try { // try from 0047c885 to 0047c889 has its CatchHandler @ 0047d49c */
  File__File((File *)local_138, (tagFileCreation *)&local_178);
  local_48[0] = 0;
  /* try { // try from 0047c8a5 to 0047cc06 has its CatchHandler @ 0047d547 */
  File__ReadVariable((File *)local_138, local_48, 4);
  File__ReadVariable((File *)local_138, self + 0x8a8, 4);
  File__ReadVariable((File *)local_138, self + 0x8ac, 4);
  File__ReadVariable((File *)local_138, self + 0x8b0, 4);
  File__ReadVariable((File *)local_138, self + 0x8b4, 4);
  File__ReadVariable((File *)local_138, self + 0x8b8, 4);
  File__ReadVariable((File *)local_138, self + 0x8bc, 4);
  File__ReadVariable((File *)local_138, self + 0x8c0, 4);
  File__ReadVariable((File *)local_138, self + 0x8c4, 4);
  File__ReadVariable((File *)local_138, self + 0x8c8, 4);
  File__ReadVariable((File *)local_138, self + 0x8cc, 4);
  File__ReadVariable((File *)local_138, self + 0x8d0, 4);
  if (local_48[0] < 5) {
    File__ReadArray((File *)local_138, (uchar *)pMVar3, 2, 4);
    File__ReadArray((File *)local_138, (uchar *)(self + 0x8dc), 2, 4);
    File__ReadArray((File *)local_138, (uchar *)(self + 0x8e4), 2, 4);
    File__ReadArray((File *)local_138, (uchar *)(self + 0x8ec), 2, 4);
    File__ReadArray((File *)local_138, (uchar *)(self + 0x8f4), 2, 4);
    File__ReadArray((File *)local_138, (uchar *)(self + 0x8fc), 2, 4);
    File__ReadArray((File *)local_138, (uchar *)(self + 0x904), 2, 4);
    File__ReadArray((File *)local_138, (uchar *)(self + 0x90c), 2, 4);
    File__ReadArray((File *)local_138, (uchar *)(self + 0x914), 2, 4);
    File__ReadArray((File *)local_138, (uchar *)(self + 0x91c), 2, 4);
    File__ReadArray((File *)local_138, (uchar *)(self + 0x924), 2, 4);
    File__ReadArray((File *)local_138, (uchar *)(self + 0x92c), 2, 4);
    File__ReadArray((File *)local_138, (uchar *)(self + 0x934), 2, 4);
    File__ReadArray((File *)local_138, (uchar *)(self + 0x93c), 2, 4);
    File__ReadArray((File *)local_138, (uchar *)(self + 0x944), 2, 4);
    File__ReadArray((File *)local_138, (uchar *)(self + 0x94c), 2, 4);
    File__ReadArray((File *)local_138, (uchar *)pMVar10, 3, 4);
    File__ReadArray((File *)local_138, (uchar *)(self + 0x9a4), 3, 4);
    File__ReadArray((File *)local_138, (uchar *)(self + 0x9b4), 3, 4);
    File__ReadArray((File *)local_138, (uchar *)(self + 0x9c4), 3, 4);
    File__ReadArray((File *)local_138, (uchar *)(self + 0x9d4), 3, 4);
    File__ReadArray((File *)local_138, (uchar *)(self + 0x9e4), 3, 4);
    File__ReadArray((File *)local_138, (uchar *)(self + 0x9f4), 3, 4);
    File__ReadArray((File *)local_138, (uchar *)(self + 0xa04), 3, 4);
    if (local_48[0] == 1) {
      *(uint32_t *)(self + 0xa2c) = 0x3f000000;
      *(uint32_t *)(self + 0xa24) = 0x3f000000;
      *(uint32_t *)(self + 0xa28) = 0x3f000000;
      *(uint32_t *)(self + 0xa30) = 0x3f266666;
      *(uint32_t *)(self + 0xa34) = 0x40000000;
    } else if (local_48[0] == 2) {
      *(uint32_t *)(self + 0xa30) = 0x3f266666;
      *(uint32_t *)(self + 0xa34) = 0x40000000;
      *(uint32_t *)(self + 0xa2c) = *(uint32_t *)(self + 0xa14);
      *(uint32_t *)(self + 0xa24) = *(uint32_t *)(self + 0xa18);
      *(uint32_t *)(self + 0xa28) = *(uint32_t *)(self + 0xa1c);
    } else if (local_48[0] == 3) {
      /* try { // try from 0047d4fb to 0047d529 has its CatchHandler @ 0047d547 */
      File__ReadVariable((File *)local_138, self + 0xa2c, 4);
      File__ReadVariable((File *)local_138, self + 0xa24, 4);
      File__ReadVariable((File *)local_138, self + 0xa28, 4);
      *(uint32_t *)(self + 0xa30) = 0x3f266666;
      *(uint32_t *)(self + 0xa34) = 0x40000000;
    } else if (local_48[0] == 4)
      goto LAB_0047cd57;
  } else {
    iVar24 = 0;
    if (local_48[0] == 5) {
      do {
        File__ReadArray((File *)local_138, (uchar *)(self + (long)iVar24 * 8 + 0x8d4), 2, 4);
        iVar24 = iVar24 + 1;
      } while (iVar24 != 0x16);
      File__ReadArray((File *)local_138, (uchar *)pMVar10, 3, 4);
      File__ReadArray((File *)local_138, (uchar *)(self + 0x9a4), 3, 4);
      File__ReadArray((File *)local_138, (uchar *)(self + 0x9b4), 3, 4);
      File__ReadArray((File *)local_138, (uchar *)(self + 0x9c4), 3, 4);
      File__ReadArray((File *)local_138, (uchar *)(self + 0x9d4), 3, 4);
      File__ReadArray((File *)local_138, (uchar *)(self + 0x9e4), 3, 4);
      File__ReadArray((File *)local_138, (uchar *)(self + 0x9f4), 3, 4);
      File__ReadArray((File *)local_138, (uchar *)(self + 0xa04), 3, 4);
      File__ReadArray((File *)local_138, (uchar *)(self + 0xa14), 3, 4);
      local_b8 = 0;
      local_b4 = 0;
      Vector2__operator_assign((Vector2 *)(self + 0x984), (Vector2 *)&local_b8);
      local_a8 = 0;
      local_a4 = 0;
      Vector2__operator_assign((Vector2 *)(self + 0x98c), (Vector2 *)&local_a8);
    } else {
      do {
        /* try { // try from 0047cc63 to 0047cf26 has its CatchHandler @ 0047d547 */
        File__ReadArray((File *)local_138, (uchar *)(self + (long)iVar24 * 8 + 0x8d4), 2, 4);
        iVar24 = iVar24 + 1;
      } while (iVar24 != 0x18);
      File__ReadArray((File *)local_138, (uchar *)pMVar10, 3, 4);
      File__ReadArray((File *)local_138, (uchar *)(self + 0x9a4), 3, 4);
      File__ReadArray((File *)local_138, (uchar *)(self + 0x9b4), 3, 4);
      File__ReadArray((File *)local_138, (uchar *)(self + 0x9c4), 3, 4);
      File__ReadArray((File *)local_138, (uchar *)(self + 0x9d4), 3, 4);
      File__ReadArray((File *)local_138, (uchar *)(self + 0x9e4), 3, 4);
      File__ReadArray((File *)local_138, (uchar *)(self + 0x9f4), 3, 4);
      File__ReadArray((File *)local_138, (uchar *)(self + 0xa04), 3, 4);
      File__ReadArray((File *)local_138, (uchar *)(self + 0xa14), 3, 4);
    }
  LAB_0047cd57:
    File__ReadVariable((File *)local_138, self + 0xa2c, 4);
    File__ReadVariable((File *)local_138, self + 0xa24, 4);
    File__ReadVariable((File *)local_138, self + 0xa28, 4);
    File__ReadVariable((File *)local_138, self + 0xa30, 4);
    File__ReadVariable((File *)local_138, self + 0xa34, 4);
  }
  /* try { // try from 0047cc35 to 0047cc39 has its CatchHandler @ 0047d49c */
  File__File__005b7a70((File *)local_138);
LAB_0047c1ea:
  local_78 = *(uint32_t *)(self + 0x8cc);
  local_88 = 0;
  local_84 = 0;
  this_04 = (BoundingSquare *)0x0;
  local_74 = local_78;
  pvVar13 = malloc(0xb4);
  if (pvVar13 != (void *)0x0) {
    this_04 =
        (BoundingSquare *)((long)pvVar13 + 0x10 + (ulong)(-(int)((long)pvVar13 + 0x10) & 0xf));
    *(uint64_t *)(this_04 + -0x10) = 0x94;
    *(void **)(this_04 + -8) = pvVar13;
  }
  /* try { // try from 0047c259 to 0047c25d has its CatchHandler @ 0047d696 */
  BoundingSquare__BoundingSquare(this_04, (Vector2 *)&local_88, 0.0, (Vector2 *)&local_78);
  *(BoundingSquare **)(self + 0x48) = this_04;
  local_68 = 0;
  *(uint32_t *)(self + 0xd4) = *(uint32_t *)(self + 0x8c8);
  *(uint32_t *)(self + 0xd0) = *(uint32_t *)(self + 0x8c8);
  local_58 = *(uint32_t *)(self + 0x8d0);
  local_64 = 0;
  local_54 = local_58;
  /* try { // try from 0047c2bf to 0047c320 has its CatchHandler @ 0047d686 */
  BoundingSquare__BoundingSquare((BoundingSquare *)&local_298, (Vector2 *)&local_68, 0.0,
                                 (Vector2 *)&local_58);
  *(uint32_t *)(self + 0x740) = local_298;
  Matrix4x4__operator_assign((Matrix4x4 *)(self + 0x744), local_294);
  Matrix4x4__operator_assign((Matrix4x4 *)(self + 0x784), local_254);
  Vector2__operator_assign((Vector2 *)(self + 0x7c4), local_214);
  Vector2__operator_assign((Vector2 *)(self + 0x7cc), local_20c);
  /* try { // try from 0047c324 to 0047c328 has its CatchHandler @ 0047d567 */
  RestoreControls(self);
  if ((allocator *)(local_e8[0] + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage) {
    LOCK();
    piVar1 = (int *)(local_e8[0] + -8);
    iVar24 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar24 < 1) {
      std__string_Rep_M_destroy((allocator *)(local_e8[0] + -0x18));
    }
  }
  return;
}

/* ======================================================================
 * MeatBoyCharactor__RemoveControls  (Ghidra `RemoveControls` @ 0047dcb0)
 * Signature: uint8_t __thiscall RemoveControls(MeatBoyCharactor * self)
 * Class: MeatBoyCharactor
 * Calls: `Joystick__AddButtonCallback`, `Joystick__AddPOVCallback`, `TKeyboard__AddKeyCallback`, `TPlayer__GetJoystick`
 * Called by: `ForestBoss__OnDeath`, `GSMBCharactor__DestroyCharactor`, `GSuperMeatBoy__BeatLevel`, `GSuperMeatBoy__HideGame`, `HellBoss__OnDeath`, `HospitalBoss__OnDeath`, `RaptureBoss__OnDeath`
 */
/* MeatBoyCharactor__RemoveControls() */

void __thiscall MeatBoyCharactor__RemoveControls(MeatBoyCharactor *self)

{
  uint32_t uVar1;
  Joystick *pJVar2;
  long lVar3;

  if (Keyboard != (TKeyboard *)0x0) {
    TKeyboard__AddKeyCallback(Keyboard, keyJump, 0, 0);
    TKeyboard__AddKeyCallback(Keyboard, keySpecial, 0, 0);
    TKeyboard__AddKeyCallback(Keyboard, keyLeft, 0, 0);
    TKeyboard__AddKeyCallback(Keyboard, keyRight, 0, 0);
  }
  pJVar2 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddButtonCallback(pJVar2, 3, 0, 0);
  pJVar2 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddPOVCallback(pJVar2, 3, 0, 0);
  pJVar2 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddPOVCallback(pJVar2, 1, 0, 0);
  uVar1 = buttonJump;
  pJVar2 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddButtonCallback(pJVar2, uVar1, 0, 0);
  uVar1 = buttonSpecial;
  pJVar2 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddButtonCallback(pJVar2, uVar1, 0, 0);
  pJVar2 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddButtonCallback(pJVar2, 10, 0, 0);
  pJVar2 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddButtonCallback(pJVar2, 0xb, 0, 0);
  uVar1 = bUseLeftJoyAsPOV;
  lVar3 = TPlayer__GetJoystick((TPlayer *)Players__Player);
  *(uint32_t *)(lVar3 + 0xfc) = uVar1;
  self[0x7d8] = (MeatBoyCharactor)((byte)self[0x7d8] & 7 | 0x80);
  return;
}

/* ======================================================================
 * MeatBoyCharactor__ResetReplays  (Ghidra `ResetReplays` @ 0047de10)
 * Signature: uint8_t __thiscall ResetReplays(MeatBoyCharactor * self)
 * Class: MeatBoyCharactor
 * Calls: `SMBReplay__ResetAll`
 * Called by: (none)
 */
/* MeatBoyCharactor__ResetReplays() */

void __thiscall MeatBoyCharactor__ResetReplays(MeatBoyCharactor *self)

{
  SMBReplay__ResetAll(*(SMBReplay **)(self + 0xa38));
  return;
}

/* ======================================================================
 * MeatBoyCharactor__SwitchToReplayMode  (Ghidra `SwitchToReplayMode` @ 0047de20)
 * Signature: uint8_t __thiscall SwitchToReplayMode(MeatBoyCharactor * self)
 * Class: MeatBoyCharactor
 * Calls: `AutoLockSection__AutoLockSection`, `AutoLockSection__AutoLockSection__005b59d0`, `FlashLibraryInstance__Reset`, `GetRandomINT`, `SMBPalette__SetToReplayMode`, `SMBReplay__SetReplayMode`
 * Called by: `FactoryBoss__Reset`, `FinalBoss__Reset`, `GSuperMeatBoy__ShowCurrentReplay`, `ShowCurrentReplay`
 */
/* MeatBoyCharactor__SwitchToReplayMode() */

void __thiscall MeatBoyCharactor__SwitchToReplayMode(MeatBoyCharactor *self)

{
  ushort uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  uint32_t uVar5;
  long lVar6;
  FlashLibraryInstance *this_00;
  int iVar7;
  AutoLockSection aAStack_38[16];

  AutoLockSection__AutoLockSection(aAStack_38,
                                   (CriticalSection *)RenderLayers__MasterRenderSection);
  /* try { // try from 0047de45 to 0047e01e has its CatchHandler @ 0047e034 */
  SMBReplay__SetReplayMode(*(SMBReplay **)(self + 0xa38), 0);
  iVar7 = 0;
  do {
    lVar6 = (long)iVar7;
    (**(code **)(**(long **)(*(long *)(self + 0x7f0) + lVar6 * 8) + 0x68))();
    *(uint64_t *)(*(long *)(*(long *)(self + 0x7f0) + lVar6 * 8) + 0xa38) =
        *(uint64_t *)(self + 0xa38);
    lVar3 = *(long *)(*(long *)(self + 0x7f0) + lVar6 * 8);
    if (iVar7 < *(int *)(*(long *)(self + 0xa38) + 0x34)) {
      if (*(int *)(lVar3 + 0x7d4) != 0x10) {
        lVar4 = *(long *)(lVar3 + 0xf8);
        *(byte *)(lVar3 + 0x7db) = *(byte *)(lVar3 + 0x7db) | 8;
        uVar5 = 0;
        uVar1 = *(ushort *)(lVar4 + 0x5b0);
        if (uVar1 != 0) {
          uVar5 = GetRandomINT(0, uVar1 - 1);
        }
        *(uint32_t *)(lVar4 + 0x5d8) = uVar5;
        *(uint32_t *)(lVar3 + 0xa4c) = uVar5;
        *(uint32_t *)(lVar3 + 0xa50) = 0;
      }
      *(uint32_t *)(lVar3 + 0x7d4) = 0x10;
      lVar3 = *(long *)(self + 0xf8);
      uVar2 = *(uint *)(*(long *)(*(long *)(self + 0x7f0) + lVar6 * 8) + 0xa4c);
      if (uVar2 == 0xffffffff) {
        this_00 = *(FlashLibraryInstance **)(*(long *)(lVar3 + 0x5c0) +
                                             (ulong) * (ushort *)(lVar3 + 0x5d8) * 8);
      } else {
        this_00 =
            *(FlashLibraryInstance **)(*(long *)(lVar3 + 0x5c0) + (ulong)(uVar2 & 0xffff) * 8);
      }
      FlashLibraryInstance__Reset(this_00);
    } else {
      if (*(int *)(lVar3 + 0x7d4) != 0xe) {
        lVar4 = *(long *)(lVar3 + 0xf8);
        *(byte *)(lVar3 + 0x7db) = *(byte *)(lVar3 + 0x7db) | 8;
        uVar5 = 0;
        uVar1 = *(ushort *)(lVar4 + 0x500);
        if (uVar1 != 0) {
          uVar5 = GetRandomINT(0, uVar1 - 1);
        }
        *(uint32_t *)(lVar4 + 0x528) = uVar5;
        *(uint32_t *)(lVar3 + 0xa4c) = uVar5;
        *(uint32_t *)(lVar3 + 0xa50) = 0;
      }
      *(uint32_t *)(lVar3 + 0x7d4) = 0xe;
    }
    iVar7 = iVar7 + 1;
    *(uint32_t *)(*(long *)(*(long *)(self + 0x7f0) + lVar6 * 8) + 0xa44) = 0;
    *(uint32_t *)(*(long *)(*(long *)(self + 0x7f0) + lVar6 * 8) + 0xa48) = 0;
  } while (iVar7 != 0x28);
  if (((byte)self[0x7db] & 0x10) == 0) {
    SMBPalette__SetToReplayMode(GSuperMeatBoy__pLevelPalette,
                                *(int *)(*(long *)(self + 0xa38) + 0x34));
  }
  AutoLockSection__AutoLockSection__005b59d0(aAStack_38);
  return;
}

/* ======================================================================
 * MeatBoyCharactor__SwitchToRegularMode  (Ghidra `SwitchToRegularMode` @ 0047e050)
 * Signature: uint8_t __thiscall SwitchToRegularMode(MeatBoyCharactor * self)
 * Class: MeatBoyCharactor
 * Calls: `AutoLockSection__AutoLockSection`, `AutoLockSection__AutoLockSection__005b59d0`, `SMBPalette__SetToNormalMode`, `SMBReplay__ResetAll`, `SMBReplay__SetReplayMode`, `SMBReplay__StartNewReplay`
 * Called by: `GSuperMeatBoy__SetCurrentLevel`
 */
/* MeatBoyCharactor__SwitchToRegularMode() */

void __thiscall MeatBoyCharactor__SwitchToRegularMode(MeatBoyCharactor *self)

{
  AutoLockSection aAStack_18[16];

  AutoLockSection__AutoLockSection(aAStack_18,
                                   (CriticalSection *)RenderLayers__MasterRenderSection);
  /* try { // try from 0047e06c to 0047e099 has its CatchHandler @ 0047e0a8 */
  SMBReplay__ResetAll(*(SMBReplay **)(self + 0xa38));
  SMBReplay__SetReplayMode(*(SMBReplay **)(self + 0xa38), 1);
  SMBReplay__StartNewReplay(*(SMBReplay **)(self + 0xa38));
  SMBPalette__SetToNormalMode(GSuperMeatBoy__pLevelPalette);
  AutoLockSection__AutoLockSection__005b59d0(aAStack_18);
  return;
}

/* ======================================================================
 * MeatBoyCharactor__ResetLevelDeaths  (Ghidra `ResetLevelDeaths` @ 0047e100)
 * Signature: uint8_t __thiscall ResetLevelDeaths(MeatBoyCharactor * self)
 * Class: MeatBoyCharactor
 * Calls: `SMBLevelPortal__ResetLevelStats`, `TPlayer__GetProfile`
 * Called by: `GSuperMeatBoy__SetCurrentLevel`
 */
/* MeatBoyCharactor__ResetLevelDeaths() */

void __thiscall MeatBoyCharactor__ResetLevelDeaths(MeatBoyCharactor *self)

{
  uint32_t local_28[2];
  MeatBoyCharactor *local_20;
  uint32_t local_18;
  uint64_t local_10;

  *(uint32_t *)(self + 0x7f8) = 0;
  *(uint32_t *)(self + 0x7fc) = 0;
  local_20 = self + 0x7f8;
  local_28[0] = 0;
  local_18 = 4;
  local_10 = TPlayer__GetProfile((TPlayer *)Players__Player);
  BroadcastString__SetBroadcastStringParam((BroadcastStringParam *)local_28);
  if (SuperMeatBoyPortal != (SMBLevelPortal *)0x0) {
    SMBLevelPortal__ResetLevelStats(SuperMeatBoyPortal);
  }
  return;
}

/* ======================================================================
 * MeatBoyCharactor__GetGroundSplatInstance  (Ghidra `GetGroundSplatInstance` @ 0047e160)
 * Signature: uint8_t __thiscall GetGroundSplatInstance(MeatBoyCharactor * self)
 * Class: MeatBoyCharactor
 * Calls: (none)
 * Called by: `SMBBloodExplosion__Update`
 */
/* MeatBoyCharactor__GetGroundSplatInstance() */

uint64_t __thiscall MeatBoyCharactor__GetGroundSplatInstance(MeatBoyCharactor *self)

{
  return *(uint64_t *)(*(long *)(self + 0xf8) + 0x880);
}

/* ======================================================================
 * MeatBoyCharactor__MakeShocked  (Ghidra `MakeShocked` @ 0047e170)
 * Signature: uint8_t __thiscall MakeShocked(MeatBoyCharactor * self)
 * Class: MeatBoyCharactor
 * Calls: `GetRandomINT`
 * Called by: `GSuperMeatBoy__BeatLevel`
 */
/* MeatBoyCharactor__MakeShocked() */

void __thiscall MeatBoyCharactor__MakeShocked(MeatBoyCharactor *self)

{
  ushort uVar1;
  long lVar2;
  uint32_t uVar3;

  if (*(int *)(self + 0x7d4) != 0x16) {
    lVar2 = *(long *)(self + 0xf8);
    self[0x7db] = (MeatBoyCharactor)((byte)self[0x7db] | 8);
    uVar3 = 0;
    uVar1 = *(ushort *)(lVar2 + 0x7c0);
    if (uVar1 != 0) {
      uVar3 = GetRandomINT(0, uVar1 - 1);
    }
    *(uint32_t *)(lVar2 + 0x7e8) = uVar3;
    *(uint32_t *)(self + 0xa4c) = uVar3;
    *(uint32_t *)(self + 0xa50) = 0;
  }
  *(uint32_t *)(self + 0x7d4) = 0x16;
  return;
}
