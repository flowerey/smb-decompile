/* src/game/classes/Machinarium.c — 16 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "Machinarium.h"

/* ======================================================================
 * Machinarium__RecordSpecial  (Ghidra `RecordSpecial` @ 004736c0)
 * Signature: uint8_t __thiscall RecordSpecial(Machinarium * self)
 * Class: Machinarium
 * Calls: (none)
 * Called by: (none)
 */
/* Machinarium__RecordSpecial() */

void __thiscall Machinarium__RecordSpecial(Machinarium *self)

{
  long lVar1;

  lVar1 = *(long *)(self + 0x7e0);
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 3) = *(byte *)(lVar1 + 3) & 0xbf | (byte)((*(uint *)(self + 0xaa0) & 1) << 6);
  }
  return;
}

/* ======================================================================
 * Machinarium__CanJump  (Ghidra `CanJump` @ 004736f0)
 * Signature: uint8_t __thiscall CanJump(Machinarium * self)
 * Class: Machinarium
 * Calls: (none)
 * Called by: (none)
 */
/* Machinarium__CanJump() */

bool __thiscall Machinarium__CanJump(Machinarium *self)

{
  if (((byte)self[0x7d8] & 0xa0) != 0xa0) {
    return false;
  }
  return *(int *)(self + 0xa94) < 2;
}

/* ======================================================================
 * Machinarium__GroundHit  (Ghidra `GroundHit` @ 00473720)
 * Signature: uint8_t __thiscall GroundHit(Machinarium * self)
 * Class: Machinarium
 * Calls: (none)
 * Called by: (none)
 */
/* Machinarium__GroundHit() */

void __thiscall Machinarium__GroundHit(Machinarium *self)

{
  *(uint32_t *)(self + 0xa94) = 0;
  *(uint32_t *)(self + 0xaa0) = 0;
  return;
}

/* ======================================================================
 * Machinarium__Reset  (Ghidra `Reset` @ 00473740)
 * Signature: uint8_t __thiscall Reset(Machinarium * self)
 * Class: Machinarium
 * Calls: `BoundingSquare__Change`, `FlashLibraryInstance__Reset`, `GMeatHUD__FreezeTimer`, `GMeatHUD__ResetTimer`, `GSMBMenu__IsInReplayMode`, `GSMBMenu__ShowMoveOnMessage`, `GetRandomINT`, `ResetSMBBoss`, `SMBAnimals__Reset`, `SMBCamera__Reset` (+10 more)
 * Called by: (none)
 */
/* Machinarium__Reset() */

void __thiscall Machinarium__Reset(Machinarium *self)

{
  Vector2 *pVVar1;
  ushort uVar2;
  GMeatHUD *this_00;
  long lVar3;
  Machinarium MVar4;
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
        (Machinarium *)(CONCAT17((char)SMBCurrLevelData._4_4_, (uint7) * (uint *)(SMBHUD + 0x418)) &
                        0x1ffffffffffffff);
    uStack_48 = *(uint64_t *)(SuperMeatBoyEditor + 0x100);
    uStack_40 = CONCAT44(uStack_40._4_4_, *(uint32_t *)(Engine + 8));
    uStack_58 = *(uint32_t *)(self + 0xa0);
    uStack_50 = (Machinarium *)CONCAT35(
        CONCAT21(uStack_50._6_2_, (char)*(uint32_t *)(self + 0x7f8) + '\x01'),
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
  MVar4 = (Machinarium)((byte)self[0x7d9] & 0xbf);
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
        self[0x7db] = (Machinarium)((byte)self[0x7db] | 8);
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
    self[0x7d8] = (Machinarium)((byte)self[0x7d8] & 0x47 | 0x80);
    iVar5 = GSMBMenu__IsInReplayMode(SMBMenu);
    if (iVar5 == 0) {
      SMBReplay__StartNewReplay(*(SMBReplay **)(self + 0xa38));
    }
    MVar4 = self[0x7d9];
  }
LAB_00474ba3:
  self[0x7d9] = (Machinarium)((byte)MVar4 & 0xfe);
  return;
}

/* ======================================================================
 * Machinarium__Jump  (Ghidra `Jump` @ 00473750)
 * Signature: uint8_t __thiscall Jump(Machinarium * self)
 * Class: Machinarium
 * Calls: `MeatBoyCharactor__Jump`
 * Called by: (none)
 */
/* Machinarium__Jump() */

void __thiscall Machinarium__Jump(Machinarium *self)

{
  uint32_t uVar1;
  int iVar2;

  uVar1 = *(uint32_t *)(self + 0xbc);
  MeatBoyCharactor__Jump((MeatBoyCharactor *)self);
  iVar2 = (**(code **)(*(long *)self + 0xa8))(self);
  if ((iVar2 == 1) &&
      (iVar2 = *(int *)(self + 0xa94), *(int *)(self + 0xa94) = iVar2 + 1, iVar2 + 1 == 2)) {
    *(uint32_t *)(self + 0xbc) = uVar1;
    *(uint32_t *)(self + 0xaa4) = 0;
    *(uint32_t *)(self + 0xaa0) = 1;
    return;
  }
  return;
}

/* ======================================================================
 * Machinarium__Death  (Ghidra `Death` @ 004737d0)
 * Signature: uint8_t __thiscall Death(Machinarium * self)
 * Class: Machinarium
 * Calls: `MeatBoyCharactor__Death`
 * Called by: (none)
 */
/* Machinarium__Death() */

void __thiscall Machinarium__Death(Machinarium *self)

{
  MeatBoyCharactor__Death((MeatBoyCharactor *)self);
  *(uint32_t *)(self + 0xaa0) = 0;
  return;
}

/* ======================================================================
 * Machinarium__Update  (Ghidra `Update` @ 004737f0)
 * Signature: uint8_t __thiscall Update(Machinarium * self)
 * Class: Machinarium
 * Calls: `MeatBoyCharactor__ProcessReplayFrame`, `MeatBoyCharactor__Update`
 * Called by: (none)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Machinarium__Update() */

void __thiscall Machinarium__Update(Machinarium *self)

{
  float fVar1;

  MeatBoyCharactor__ProcessReplayFrame((MeatBoyCharactor *)self);
  fVar1 = _DAT_005c0320 /* R:800.0f */;
  if (*(int *)(self + 0xaa0) == 1) {
    self[0x7d9] = (Machinarium)((byte)self[0x7d9] | 0x10);
    *(float *)(self + 0xf0) = fVar1 + *(float *)(self + 0xf0);
  }
  MeatBoyCharactor__Update((MeatBoyCharactor *)self);
  return;
}

/* ======================================================================
 * Machinarium__WallJump  (Ghidra `WallJump` @ 00473830)
 * Signature: uint8_t __thiscall WallJump(Machinarium * self)
 * Class: Machinarium
 * Calls: `GetRandomINT`, `MeatBoyCharactor__AddEffect__0047af00`
 * Called by: (none)
 */
/* Machinarium__WallJump() */

void __thiscall Machinarium__WallJump(Machinarium *self)

{
  ushort uVar1;
  long lVar2;
  Machinarium MVar3;
  int iVar4;
  uint32_t uVar5;
  uint32_t *puVar6;
  Machinarium MVar7;
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
    self[0x7db] = (Machinarium)((byte)self[0x7db] | 8);
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
  MVar3 = (Machinarium)((byte)self[0x7d8] & 0xfe | bVar9);
  self[0x7d8] = MVar3;
  if (bVar9) {
    MVar7 = self[0x7d9];
    uStack_38 = 0xbf800000;
    uStack_34 = 0x3f800000;
    uStack_28 = 0xbf800000;
    uStack_24 = 0x3f800000;
    if (((byte)MVar7 & 0x40) != 0)
      goto LAB_00474591;
    puVar6 = &uStack_38;
    puVar8 = &uStack_28;
  } else {
    MVar7 = self[0x7d9];
    uStack_58 = 0x3f800000;
    uStack_54 = 0x3f800000;
    uStack_48 = 0x3f800000;
    uStack_44 = 0x3f800000;
    if (((byte)MVar7 & 0x40) != 0)
      goto LAB_00474591;
    puVar8 = &uStack_48;
  }
  MeatBoyCharactor__AddEffect__0047af00((MeatBoyCharactor *)self, 3, puVar8, puVar6);
  MVar3 = self[0x7d8];
  MVar7 = self[0x7d9];
LAB_00474591:
  self[0x7d8] = (Machinarium)((byte)MVar3 & 0xfb);
  self[0x7d9] = (Machinarium)((byte)MVar7 | 0x20);
  return;
}

/* ======================================================================
 * Machinarium__CreateClones  (Ghidra `CreateClones` @ 00473870)
 * Signature: uint8_t __thiscall CreateClones(Machinarium * self)
 * Class: Machinarium
 * Calls: `FlashAnimationLibrary__GetMovieClip__005731d0`, `MeatBoyCharactor__CreateClones`
 * Called by: (none)
 */
/* Machinarium__CreateClones() */

void __thiscall Machinarium__CreateClones(Machinarium *self)

{
  uint64_t uVar1;

  uVar1 = FlashAnimationLibrary__GetMovieClip__005731d0(
      (FlashAnimationLibrary *)**(uint64_t **)(self + 0xf8), "kickjump");
  *(uint64_t *)(self + 0xa98) = uVar1;
  MeatBoyCharactor__CreateClones((MeatBoyCharactor *)self);
  return;
}

/* ======================================================================
 * Machinarium__Machinarium__004738a0  (Ghidra `~Machinarium` @ 004738a0)
 * Signature: uint8_t __thiscall ~Machinarium(Machinarium * self)
 * Class: Machinarium
 * Calls: `Machinarium__Machinarium__00473b00`, `MeatBoyCharactor__MeatBoyCharactor__00476510`
 * Called by: (none)
 */
/* Machinarium__Machinarium__00473b00() */

void __thiscall Machinarium__Machinarium__00473b00(Machinarium *self)

{
  *(uint8_t ***)self = &PTR__Machinarium_005c0230;
  if ((*(int *)(self + 0xa40) == 0) && (*(long **)(self + 0xa98) != (long *)0x0)) {
    /* try { // try from 004738c8 to 004738ca has its CatchHandler @ 004738d8 */
    (**(code **)(**(long **)(self + 0xa98) + 8))();
  }
  MeatBoyCharactor__MeatBoyCharactor__00476510((MeatBoyCharactor *)self);
  return;
}

/* ======================================================================
 * Machinarium__ProcessSpecial  (Ghidra `ProcessSpecial` @ 00473900)
 * Signature: uint8_t __thiscall ProcessSpecial(Machinarium * self)
 * Class: Machinarium
 * Calls: (none)
 * Called by: (none)
 */
/* Machinarium__ProcessSpecial() */

void __thiscall Machinarium__ProcessSpecial(Machinarium *self)

{
  int iVar1;
  uint uVar2;

  iVar1 = *(int *)(self + 0xaa0);
  uVar2 = *(byte *)(*(long *)(self + 0x7e0) + 3) >> 6 & 1;
  *(uint *)(self + 0xaa0) = uVar2;
  if ((iVar1 == 0) && (uVar2 == 1)) {
    *(uint32_t *)(self + 0xaa4) = 0;
    return;
  }
  return;
}

/* ======================================================================
 * Machinarium__Render  (Ghidra `Render` @ 00473940)
 * Signature: uint8_t __thiscall Render(Machinarium * self)
 * Class: Machinarium
 * Calls: `FlashLibraryInstance__IsPlaying`, `MeatBoyCharFoundation__Render`, `MeatBoyCharactor__Render`
 * Called by: (none)
 */
/* Machinarium__Render() */

void __thiscall Machinarium__Render(Machinarium *self)

{
  int iVar1;

  (**(code **)(*(long *)self + 0x50))();
  if (*(int *)(self + 0xaa0) != 1) {
    MeatBoyCharactor__Render((MeatBoyCharactor *)self);
    return;
  }
  *(uint32_t *)(*(long *)(self + 0xa98) + 0x58) = *(uint32_t *)(self + 0xaa4);
  MeatBoyCharFoundation__Render(*(MeatBoyCharFoundation **)(self + 0xf8), (MeatBoyCharactor *)self,
                                *(FlashLibraryInstance **)(self + 0xa98));
  *(uint32_t *)(self + 0xaa4) = *(uint32_t *)(*(FlashLibraryInstance **)(self + 0xa98) + 0x58);
  iVar1 = FlashLibraryInstance__IsPlaying(*(FlashLibraryInstance **)(self + 0xa98));
  if (iVar1 == 0) {
    *(uint32_t *)(self + 0xaa0) = 0;
    *(uint32_t *)(self + 0xaa4) = 0;
  }
  return;
}

/* ======================================================================
 * Machinarium__RenderClones  (Ghidra `RenderClones` @ 004739c0)
 * Signature: uint8_t __thiscall RenderClones(Machinarium * self)
 * Class: Machinarium
 * Calls: `FlashAnimationLibrary__DisableFlags`, `FlashAnimationLibrary__EnableFlags`, `FlashLibraryInstance__IsPlaying`, `MeatBoyCharFoundation__Render`
 * Called by: (none)
 */
/* Machinarium__RenderClones() */

void __thiscall Machinarium__RenderClones(Machinarium *self)

{
  MeatBoyCharactor *pMVar1;
  int iVar2;
  long lVar3;
  int iVar4;

  if (*(int *)(self + 0xa40) == 0) {
    FlashAnimationLibrary__EnableFlags((FlashAnimationLibrary *)**(uint64_t **)(self + 0xf8), 1);
    lVar3 = *(long *)(self + 0xa38);
    if ((*(int *)(lVar3 + 0x2c8) == 0) && (0 < *(int *)(lVar3 + 0x34))) {
      iVar4 = 0;
      do {
        if ((*(int *)(lVar3 + 0x3c) == iVar4) &&
            (iVar4 == *(int *)(*(long *)(*(long *)(self + 0x7f0) + (long)iVar4 * 8) + 0xa90))) {
          FlashAnimationLibrary__EnableFlags((FlashAnimationLibrary *)**(uint64_t **)(self + 0xf8),
                                             1);
        } else {
          FlashAnimationLibrary__DisableFlags((FlashAnimationLibrary *)**(uint64_t **)(self + 0xf8),
                                              1);
        }
        pMVar1 = *(MeatBoyCharactor **)(*(long *)(self + 0x7f0) + (long)iVar4 * 8);
        if (*(int *)(pMVar1 + 0xaa0) == 1) {
          *(uint32_t *)(*(long *)(pMVar1 + 0xa98) + 0x58) = *(uint32_t *)(pMVar1 + 0xaa4);
          MeatBoyCharFoundation__Render(*(MeatBoyCharFoundation **)(pMVar1 + 0xf8), pMVar1,
                                        *(FlashLibraryInstance **)(pMVar1 + 0xa98));
          *(uint32_t *)(pMVar1 + 0xaa4) =
              *(uint32_t *)(*(FlashLibraryInstance **)(pMVar1 + 0xa98) + 0x58);
          iVar2 = FlashLibraryInstance__IsPlaying(*(FlashLibraryInstance **)(pMVar1 + 0xa98));
          if (iVar2 == 0) {
            *(uint32_t *)(pMVar1 + 0xaa0) = 0;
            *(uint32_t *)(pMVar1 + 0xaa4) = 0;
          }
        } else {
          MeatBoyCharFoundation__Render(*(MeatBoyCharFoundation **)(self + 0xf8), pMVar1,
                                        (FlashLibraryInstance *)0x0);
        }
        lVar3 = *(long *)(self + 0xa38);
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(lVar3 + 0x34));
    }
  }
  return;
}

/* ======================================================================
 * Machinarium__Machinarium__00473b00  (Ghidra `~Machinarium` @ 00473b00)
 * Signature: uint8_t __thiscall ~Machinarium(Machinarium * self)
 * Class: Machinarium
 * Calls: `MeatBoyCharactor__MeatBoyCharactor__00476510`, `operator_delete`
 * Called by: `Machinarium__Machinarium__004738a0`
 */
/* Machinarium__Machinarium__00473b00() */

void __thiscall Machinarium__Machinarium__00473b00(Machinarium *self)

{
  *(uint8_t ***)self = &PTR__Machinarium_005c0230;
  if ((*(int *)(self + 0xa40) == 0) && (*(long **)(self + 0xa98) != (long *)0x0)) {
    /* try { // try from 00473b28 to 00473b2a has its CatchHandler @ 00473b40 */
    (**(code **)(**(long **)(self + 0xa98) + 8))();
  }
  MeatBoyCharactor__MeatBoyCharactor__00476510((MeatBoyCharactor *)self);
  operator_delete(self);
  return;
}

/* ======================================================================
 * Machinarium__Machinarium__00473b60  (Ghidra `Machinarium` @ 00473b60)
 * Signature: uint8_t __thiscall Machinarium(Machinarium * self)
 * Class: Machinarium
 * Calls: `FormatResourcePath`, `Machinarium__Machinarium__00473bc0`, `MeatBoyCharactor__MeatBoyCharactor__0047b350`
 * Called by: (none)
 */
/* Machinarium__Machinarium__00473bc0() */

void __thiscall Machinarium__Machinarium__00473bc0(Machinarium *self)

{
  uint64_t uVar1;

  uVar1 = FormatResourcePath("/Animations/mech.am", &strCharPath);
  MeatBoyCharactor__MeatBoyCharactor__0047b350((MeatBoyCharactor *)self, uVar1, 0x15);
  *(uint8_t ***)self = &PTR__Machinarium_005c0230;
  *(uint32_t *)(self + 0xa94) = 0;
  *(uint32_t *)(self + 0xaa0) = 0;
  *(uint32_t *)(self + 0xaa4) = 0;
  *(uint32_t *)(self + 0xa54) = 0x15;
  return;
}

/* ======================================================================
 * Machinarium__Machinarium__00473bc0  (Ghidra `Machinarium` @ 00473bc0)
 * Signature: uint8_t __thiscall Machinarium(Machinarium * self, MeatBoyCharactor * arg1, int arg2)
 * Class: Machinarium
 * Calls: `MeatBoyCharactor__Clone`, `MeatBoyCharactor__MeatBoyCharactor__0047b350`
 * Called by: `GSMBCharactor__CreateCharactor`, `GSMBCharactor__CreateCharactor__0049c600`, `Machinarium__Machinarium`, `Machinarium__Machinarium__00473b60`
 */
/* Machinarium__Machinarium__00473bc0(MeatBoyCharactor*, int) */

void __thiscall Machinarium__Machinarium__00473bc0(Machinarium *self, MeatBoyCharactor *arg1,
                                                   int arg2)

{
  MeatBoyCharactor__MeatBoyCharactor__0047b350((MeatBoyCharactor *)self);
  *(uint8_t ***)self = &PTR__Machinarium_005c0230;
  *(uint32_t *)(self + 0xaa0) = 0;
  *(uint32_t *)(self + 0xaa4) = 0;
  /* try { // try from 00473c06 to 00473c0a has its CatchHandler @ 00473c2c */
  MeatBoyCharactor__Clone((MeatBoyCharactor *)self, arg1, arg2);
  *(uint64_t *)(self + 0xa98) = *(uint64_t *)(arg1 + 0xa98);
  return;
}
