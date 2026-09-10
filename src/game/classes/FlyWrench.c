/* src/game/classes/FlyWrench.c — 13 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "FlyWrench.h"

/* ======================================================================
 * FlyWrench__CanJump  (Ghidra `CanJump` @ 00469de0)
 * Signature: uint8_t __thiscall CanJump(FlyWrench * self)
 * Class: FlyWrench
 * Calls: (none)
 * Called by: (none)
 */
/* FlyWrench__CanJump() */

bool __thiscall FlyWrench__CanJump(FlyWrench *self)

{
  if (((byte)self[0x7d8] & 0xa0) != 0xa0) {
    return false;
  }
  return *(int *)(self + 0xa94) < 3;
}

/* ======================================================================
 * FlyWrench__CanWallJump  (Ghidra `CanWallJump` @ 00469e10)
 * Signature: uint8_t __stdcall CanWallJump(void)
 * Class: FlyWrench
 * Calls: (none)
 * Called by: (none)
 */
/* FlyWrench__CanWallJump() */

uint64_t FlyWrench__CanWallJump(void)

{
  return 0;
}

/* ======================================================================
 * FlyWrench__GroundHit  (Ghidra `GroundHit` @ 00469e20)
 * Signature: uint8_t __thiscall GroundHit(FlyWrench * self)
 * Class: FlyWrench
 * Calls: (none)
 * Called by: (none)
 */
/* FlyWrench__GroundHit() */

void __thiscall FlyWrench__GroundHit(FlyWrench *self)

{
  *(uint32_t *)(self + 0xa94) = 0;
  *(uint32_t *)(self + 0x8b0) = *(uint32_t *)(self + 0xa98);
  return;
}

/* ======================================================================
 * FlyWrench__Death  (Ghidra `Death` @ 00469e40)
 * Signature: uint8_t __thiscall Death(FlyWrench * self)
 * Class: FlyWrench
 * Calls: `GSMBChapterData__AddDeath`
 * Called by: (none)
 */
/* FlyWrench__Death() */

void __thiscall FlyWrench__Death(FlyWrench *self)

{
  if ((*(int *)(self + 0xa40) == 0) && (*(int *)(*(long *)(self + 0xa38) + 0x2c8) == 1)) {
    GSMBChapterData__AddDeath(SMBChapterData);
    return;
  }
  return;
}

/* ======================================================================
 * FlyWrench__Reset  (Ghidra `Reset` @ 00469e50)
 * Signature: uint8_t __thiscall Reset(FlyWrench * self)
 * Class: FlyWrench
 * Calls: `BoundingSquare__Change`, `FlashLibraryInstance__Reset`, `GMeatHUD__FreezeTimer`, `GMeatHUD__ResetTimer`, `GSMBMenu__IsInReplayMode`, `GSMBMenu__ShowMoveOnMessage`, `GetRandomINT`, `ResetSMBBoss`, `SMBAnimals__Reset`, `SMBCamera__Reset` (+10 more)
 * Called by: (none)
 */
/* FlyWrench__Reset() */

void __thiscall FlyWrench__Reset(FlyWrench *self)

{
  Vector2 *pVVar1;
  ushort uVar2;
  GMeatHUD *this_00;
  long lVar3;
  FlyWrench FVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  FlashLibraryInstance *this_01;
  Vector2 aVStack_d0[8];
  Vector2 aVStack_c8[8];
  Vector2 aVStack_c0[8];
  Vector2 aVStack_b8[8];
  uint32_t uStack_b0;
  uint64_t uStack_a8;
  uint64_t uStack_a0;
  uint64_t uStack_98;
  uint64_t uStack_90;
  uint32_t uStack_88;
  uint32_t uStack_84;
  Vector2 aVStack_80[8];
  Vector2 aVStack_78[8];
  Vector2 aVStack_70[8];
  Vector2 aVStack_68[8];
  uint32_t uStack_60;
  uint32_t uStack_58;
  uint32_t uStack_54;
  uint64_t uStack_50;
  uint64_t uStack_48;
  uint64_t uStack_40;
  uint32_t uStack_38;
  uint32_t uStack_34;
  uint32_t uStack_28;
  uint32_t uStack_24;

  lVar7 = SuperMeatBoy;
  if (((byte)self[0x7db] & 0x10) != 0) {
    pVVar1 = (Vector2 *)(self + 0xa0);
    *(uint32_t *)(self + 0xbc) = 0;
    *(uint32_t *)(self + 0xb8) = 0;
    Vector2__operator_assign(pVVar1, (Vector2 *)(*(long *)(lVar7 + 0x40) + 0x22a8));
    Vector2__operator_assign((Vector2 *)(self + 0x868), pVVar1);
    uStack_38 = *(uint32_t *)(self + 0x8d0);
    uStack_34 = uStack_38;
    BoundingSquare__Change((BoundingSquare *)(self + 0x740), (Vector2 *)&uStack_38, 0.0, pVVar1);
    *(uint64_t *)(self + 0x818) = 0;
    *(uint64_t *)(self + 0x820) = 0;
    *(uint64_t *)(self + 0x828) = 0;
    *(uint64_t *)(self + 0x830) = 0;
    *(uint32_t *)(self + 0x838) = 0;
    *(uint32_t *)(self + 0x83c) = 0;
    uStack_b0 = 1;
    Vector2__operator_assign((Vector2 *)(self + 0x840), aVStack_d0);
    Vector2__operator_assign((Vector2 *)(self + 0x848), aVStack_c8);
    Vector2__operator_assign((Vector2 *)(self + 0x850), aVStack_c0);
    Vector2__operator_assign((Vector2 *)(self + 0x858), aVStack_b8);
    *(uint32_t *)(self + 0x860) = uStack_b0;
    return;
  }
  if ((*(int *)(self + 0xa40) == 0) && (((byte)self[0x7d9] & 1) != 0)) {
    uStack_50 =
        (FlyWrench *)(CONCAT17((char)SMBCurrLevelData._4_4_, (uint7) * (uint *)(SMBHUD + 0x418)) &
                      0x1ffffffffffffff);
    uStack_48 = *(uint64_t *)(SuperMeatBoyEditor + 0x100);
    uStack_40 = CONCAT44(uStack_40._4_4_, *(uint32_t *)(Engine + 8));
    uStack_58 = *(uint32_t *)(self + 0xa0);
    uStack_50 =
        (FlyWrench *)CONCAT35(CONCAT21(uStack_50._6_2_, (char)*(uint32_t *)(self + 0x7f8) + '\x01'),
                              CONCAT14((char)*(uint32_t *)(self + 0xa54), (uint32_t)uStack_50));
    uStack_54 = uStack_58;
    ShowMonitorMessage((SMBMonitorMessage *)&uStack_58);
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
  uStack_28 = *(uint32_t *)(self + 0x8d0);
  uStack_24 = uStack_28;
  BoundingSquare__Change((BoundingSquare *)(self + 0x740), (Vector2 *)&uStack_28, 0.0, pVVar1);
  *(uint64_t *)(self + 0x818) = 0;
  *(uint64_t *)(self + 0x820) = 0;
  *(uint64_t *)(self + 0x828) = 0;
  *(uint64_t *)(self + 0x830) = 0;
  *(uint32_t *)(self + 0x838) = 0;
  *(uint32_t *)(self + 0x83c) = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  uStack_60 = 1;
  Vector2__operator_assign((Vector2 *)(self + 0x840), aVStack_80);
  Vector2__operator_assign((Vector2 *)(self + 0x848), aVStack_78);
  Vector2__operator_assign((Vector2 *)(self + 0x850), aVStack_70);
  Vector2__operator_assign((Vector2 *)(self + 0x858), aVStack_68);
  this_00 = SMBHUD;
  *(uint32_t *)(self + 0x860) = uStack_60;
  GMeatHUD__ResetTimer(this_00);
  FVar4 = (FlyWrench)((byte)self[0x7d9] & 0xbf);
  self[0x7d9] = FVar4;
  if (*(int *)(self + 0xa40) == 0) {
    if (*(int *)(*(long *)(self + 0xa38) + 0x2c8) == 1) {
      SMBCamera__Reset(*(SMBCamera **)(SuperMeatBoy + 0x38));
      TileLevel__ResetLevel(*(TileLevel **)(SuperMeatBoy + 0x40));
      SMBPalette__ResetObstacles(GSuperMeatBoy__pLevelPalette);
      SMBAnimals__Reset(*(SMBAnimals **)(GSuperMeatBoy__pLevelPalette + 0x41e8));
      ResetSMBBoss();
      FVar4 = self[0x7d9];
      if (*(int *)(self + 0xa40) != 0)
        goto LAB_00474ba3;
    }
    if (((byte)FVar4 & 1) != 0) {
      ScreenFlashManager__SetFlash((ScreenFlashManager *)&ScreenFlash,
                                   DAT_005c07b0 /* R:0.009999999776482582f */,
                                   DAT_005be6e8 /* R:0.25f */, (ColorTemplate *)::cBlack);
      if (*(int *)(self + 0x7d4) == 0x10) {
        uVar6 = *(uint *)(self + 0xa4c);
      } else {
        lVar7 = *(long *)(self + 0xf8);
        self[0x7db] = (FlyWrench)((byte)self[0x7db] | 8);
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
    uStack_50 = self + 0x7f8;
    uStack_58 = 0;
    uStack_48 = CONCAT44(uStack_48._4_4_, 4);
    uStack_40 = TPlayer__GetProfile((TPlayer *)Players__Player);
    BroadcastString__SetBroadcastStringParam((BroadcastStringParam *)&uStack_58);
    iVar5 = GSMBMenu__IsInReplayMode(SMBMenu);
    if (iVar5 == 0) {
      SMBReplay__EndReplay(*(SMBReplay **)(self + 0xa38));
    }
    self[0x7d8] = (FlyWrench)((byte)self[0x7d8] & 0x47 | 0x80);
    iVar5 = GSMBMenu__IsInReplayMode(SMBMenu);
    if (iVar5 == 0) {
      SMBReplay__StartNewReplay(*(SMBReplay **)(self + 0xa38));
    }
    FVar4 = self[0x7d9];
  }
LAB_00474ba3:
  self[0x7d9] = (FlyWrench)((byte)FVar4 & 0xfe);
  return;
}

/* ======================================================================
 * FlyWrench__Render  (Ghidra `Render` @ 00469e60)
 * Signature: uint8_t __thiscall Render(FlyWrench * self)
 * Class: FlyWrench
 * Calls: `AutoLockSection__AutoLockSection`, `AutoLockSection__AutoLockSection__005b59d0`, `MeatBoyCharFoundation__Render`
 * Called by: (none)
 */
/* FlyWrench__Render() */

void __thiscall FlyWrench__Render(FlyWrench *self)

{
  AutoLockSection aAStack_18[16];

  AutoLockSection__AutoLockSection(aAStack_18, (CriticalSection *)(self + 0x880));
  (**(code **)(*(long *)self + 0x50))(self);
  if (*(int *)(*(long *)(self + 0xa38) + 0x2c8) != 1) {
    AutoLockSection__AutoLockSection__005b59d0(aAStack_18);
    return;
  }
  MeatBoyCharFoundation__Render(*(MeatBoyCharactor **)(self + 0xf8), (FlashLibraryInstance *)self);
  AutoLockSection__AutoLockSection__005b59d0(aAStack_18);
  return;
}

/* ======================================================================
 * FlyWrench__Update  (Ghidra `Update` @ 00469e70)
 * Signature: uint8_t __thiscall Update(FlyWrench * self)
 * Class: FlyWrench
 * Calls: `MeatBoyCharactor__ProcessReplayFrame`, `MeatBoyCharactor__Update`
 * Called by: (none)
 */
/* FlyWrench__Update() */

void __thiscall FlyWrench__Update(FlyWrench *self)

{
  MeatBoyCharactor__ProcessReplayFrame((MeatBoyCharactor *)self);
  MeatBoyCharactor__Update((MeatBoyCharactor *)self);
  return;
}

/* ======================================================================
 * FlyWrench__WallJump  (Ghidra `WallJump` @ 00469e90)
 * Signature: uint8_t __thiscall WallJump(FlyWrench * self)
 * Class: FlyWrench
 * Calls: `GetRandomINT`, `MeatBoyCharactor__AddEffect__0047af00`
 * Called by: (none)
 */
/* FlyWrench__WallJump() */

void __thiscall FlyWrench__WallJump(FlyWrench *self)

{
  ushort uVar1;
  long lVar2;
  FlyWrench FVar3;
  int iVar4;
  uint32_t uVar5;
  uint32_t *puVar6;
  FlyWrench FVar7;
  uint32_t *puVar8;
  bool bVar9;
  uint32_t uStack_58;
  uint32_t uStack_54;
  uint32_t uStack_48;
  uint32_t uStack_44;
  uint32_t uStack_38;
  uint32_t uStack_34;
  uint32_t uStack_28;
  uint32_t uStack_24;

  puVar6 = &uStack_58;
  iVar4 = (**(code **)(*(long *)self + 0xb0))();
  if (iVar4 == 0) {
    return;
  }
  *(uint32_t *)(self + 0xbc) = *(uint32_t *)(self + 0x8b4);
  *(float *)(self + 0xb8) =
      *(float *)(self + 0x808) * *(float *)(self + 0x8b8) + *(float *)(self + 0xb8);
  if (*(int *)(self + 0x7d4) != 6) {
    lVar2 = *(long *)(self + 0xf8);
    self[0x7db] = (FlyWrench)((byte)self[0x7db] | 8);
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
  FVar3 = (FlyWrench)((byte)self[0x7d8] & 0xfe | bVar9);
  self[0x7d8] = FVar3;
  if (bVar9) {
    FVar7 = self[0x7d9];
    uStack_38 = 0xbf800000;
    uStack_34 = 0x3f800000;
    uStack_28 = 0xbf800000;
    uStack_24 = 0x3f800000;
    if (((byte)FVar7 & 0x40) != 0)
      goto LAB_00474591;
    puVar6 = &uStack_38;
    puVar8 = &uStack_28;
  } else {
    FVar7 = self[0x7d9];
    uStack_58 = 0x3f800000;
    uStack_54 = 0x3f800000;
    uStack_48 = 0x3f800000;
    uStack_44 = 0x3f800000;
    if (((byte)FVar7 & 0x40) != 0)
      goto LAB_00474591;
    puVar8 = &uStack_48;
  }
  MeatBoyCharactor__AddEffect__0047af00((MeatBoyCharactor *)self, 3, puVar8, puVar6);
  FVar3 = self[0x7d8];
  FVar7 = self[0x7d9];
LAB_00474591:
  self[0x7d8] = (FlyWrench)((byte)FVar3 & 0xfb);
  self[0x7d9] = (FlyWrench)((byte)FVar7 | 0x20);
  return;
}

/* ======================================================================
 * FlyWrench__FlyWrench__00469ee0  (Ghidra `~FlyWrench` @ 00469ee0)
 * Signature: uint8_t __thiscall ~FlyWrench(FlyWrench * self)
 * Class: FlyWrench
 * Calls: `FlyWrench__FlyWrench__00469f40`, `MeatBoyCharactor__MeatBoyCharactor__00476510`
 * Called by: (none)
 */
/* FlyWrench__FlyWrench__00469f40() */

void __thiscall FlyWrench__FlyWrench__00469f40(FlyWrench *self)

{
  *(uint8_t ***)self = &PTR__FlyWrench_005bf9b0;
  MeatBoyCharactor__MeatBoyCharactor__00476510((MeatBoyCharactor *)self);
  return;
}

/* ======================================================================
 * FlyWrench__Jump  (Ghidra `Jump` @ 00469ef0)
 * Signature: uint8_t __thiscall Jump(FlyWrench * self)
 * Class: FlyWrench
 * Calls: `MeatBoyCharactor__Jump`
 * Called by: (none)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FlyWrench__Jump() */

void __thiscall FlyWrench__Jump(FlyWrench *self)

{
  float fVar1;
  int iVar2;

  MeatBoyCharactor__Jump((MeatBoyCharactor *)self);
  iVar2 = (**(code **)(*(long *)self + 0xa8))(self);
  fVar1 = _DAT_005bfaa0 /* R:0.6000000238418579f */;
  if (iVar2 != 1) {
    return;
  }
  *(int *)(self + 0xa94) = *(int *)(self + 0xa94) + 1;
  *(float *)(self + 0x8b0) = fVar1 * *(float *)(self + 0x8b0);
  return;
}

/* ======================================================================
 * FlyWrench__FlyWrench__00469f40  (Ghidra `~FlyWrench` @ 00469f40)
 * Signature: uint8_t __thiscall ~FlyWrench(FlyWrench * self)
 * Class: FlyWrench
 * Calls: `MeatBoyCharactor__MeatBoyCharactor__00476510`, `operator_delete`
 * Called by: `FlyWrench__FlyWrench__00469ee0`
 */
/* FlyWrench__FlyWrench__00469f40() */

void __thiscall FlyWrench__FlyWrench__00469f40(FlyWrench *self)

{
  *(uint8_t ***)self = &PTR__FlyWrench_005bf9b0;
  MeatBoyCharactor__MeatBoyCharactor__00476510((MeatBoyCharactor *)self);
  operator_delete(self);
  return;
}

/* ======================================================================
 * FlyWrench__FlyWrench__00469f60  (Ghidra `FlyWrench` @ 00469f60)
 * Signature: uint8_t __thiscall FlyWrench(FlyWrench * self)
 * Class: FlyWrench
 * Calls: `FlyWrench__FlyWrench__00469fb0`, `FormatResourcePath`, `MeatBoyCharactor__MeatBoyCharactor__0047b350`
 * Called by: (none)
 */
/* FlyWrench__FlyWrench__00469fb0() */

void __thiscall FlyWrench__FlyWrench__00469fb0(FlyWrench *self)

{
  uint64_t uVar1;

  uVar1 = FormatResourcePath("/Animations/flywrench.am", &strCharPath);
  MeatBoyCharactor__MeatBoyCharactor__0047b350((MeatBoyCharactor *)self, uVar1, 0x10);
  *(uint8_t ***)self = &PTR__FlyWrench_005bf9b0;
  *(uint32_t *)(self + 0xa94) = 0;
  *(uint32_t *)(self + 0xa54) = 0x10;
  *(uint32_t *)(self + 0xa98) = *(uint32_t *)(self + 0x8b0);
  return;
}

/* ======================================================================
 * FlyWrench__FlyWrench__00469fb0  (Ghidra `FlyWrench` @ 00469fb0)
 * Signature: uint8_t __thiscall FlyWrench(FlyWrench * self, MeatBoyCharactor * arg1, int arg2)
 * Class: FlyWrench
 * Calls: `MeatBoyCharactor__Clone`, `MeatBoyCharactor__MeatBoyCharactor__0047b350`
 * Called by: `FlyWrench__FlyWrench`, `FlyWrench__FlyWrench__00469f60`, `GSMBCharactor__CreateCharactor`, `GSMBCharactor__CreateCharactor__0049c600`
 */
/* FlyWrench__FlyWrench__00469fb0(MeatBoyCharactor*, int) */

void __thiscall FlyWrench__FlyWrench__00469fb0(FlyWrench *self, MeatBoyCharactor *arg1, int arg2)

{
  MeatBoyCharactor__MeatBoyCharactor__0047b350((MeatBoyCharactor *)self);
  *(uint8_t ***)self = &PTR__FlyWrench_005bf9b0;
  *(uint32_t *)(self + 0xa98) = *(uint32_t *)(arg1 + 0xa98);
  /* try { // try from 00469fed to 00469ff1 has its CatchHandler @ 0046a005 */
  MeatBoyCharactor__Clone((MeatBoyCharactor *)self, arg1, arg2);
  return;
}
