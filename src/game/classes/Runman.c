/* src/game/classes/Runman.c — 14 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "Runman.h"

/* ======================================================================
 * Runman__Reset  (Ghidra `Reset` @ 00486350)
 * Signature: uint8_t __thiscall Reset(Runman * self)
 * Class: Runman
 * Calls: `BoundingSquare__Change`, `FlashLibraryInstance__Reset`, `GMeatHUD__FreezeTimer`, `GMeatHUD__ResetTimer`, `GSMBMenu__IsInReplayMode`, `GSMBMenu__ShowMoveOnMessage`, `GetRandomINT`, `ResetSMBBoss`, `SMBAnimals__Reset`, `SMBCamera__Reset` (+10 more)
 * Called by: (none)
 */
/* Runman__Reset() */

void __thiscall Runman__Reset(Runman *self)

{
  Vector2 *pVVar1;
  ushort uVar2;
  GMeatHUD *this_00;
  long lVar3;
  Runman RVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  FlashLibraryInstance *this_01;
  Vector2 aVStack_d0 [8];
  Vector2 aVStack_c8 [8];
  Vector2 aVStack_c0 [8];
  Vector2 aVStack_b8 [8];
  uint32_t uStack_b0;
  uint64_t uStack_a8;
  uint64_t uStack_a0;
  uint64_t uStack_98;
  uint64_t uStack_90;
  uint32_t uStack_88;
  uint32_t uStack_84;
  Vector2 aVStack_80 [8];
  Vector2 aVStack_78 [8];
  Vector2 aVStack_70 [8];
  Vector2 aVStack_68 [8];
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
    Vector2__operator_assign(pVVar1,(Vector2 *)(*(long *)(lVar7 + 0x40) + 0x22a8));
    Vector2__operator_assign((Vector2 *)(self + 0x868),pVVar1);
    uStack_38 = *(uint32_t *)(self + 0x8d0);
    uStack_34 = uStack_38;
    BoundingSquare__Change((BoundingSquare *)(self + 0x740),(Vector2 *)&uStack_38,0.0,pVVar1);
    *(uint64_t *)(self + 0x818) = 0;
    *(uint64_t *)(self + 0x820) = 0;
    *(uint64_t *)(self + 0x828) = 0;
    *(uint64_t *)(self + 0x830) = 0;
    *(uint32_t *)(self + 0x838) = 0;
    *(uint32_t *)(self + 0x83c) = 0;
    uStack_b0 = 1;
    Vector2__operator_assign((Vector2 *)(self + 0x840),aVStack_d0);
    Vector2__operator_assign((Vector2 *)(self + 0x848),aVStack_c8);
    Vector2__operator_assign((Vector2 *)(self + 0x850),aVStack_c0);
    Vector2__operator_assign((Vector2 *)(self + 0x858),aVStack_b8);
    *(uint32_t *)(self + 0x860) = uStack_b0;
    return;
  }
  if ((*(int *)(self + 0xa40) == 0) && (((byte)self[0x7d9] & 1) != 0)) {
    uStack_50 = (Runman *)
                (CONCAT17((char)SMBCurrLevelData._4_4_,(uint7)*(uint *)(SMBHUD + 0x418)) &
                0x1ffffffffffffff);
    uStack_48 = *(uint64_t *)(SuperMeatBoyEditor + 0x100);
    uStack_40 = CONCAT44(uStack_40._4_4_,*(uint32_t *)(Engine + 8));
    uStack_58 = *(uint32_t *)(self + 0xa0);
    uStack_50 = (Runman *)
                CONCAT35(CONCAT21(uStack_50._6_2_,(char)*(uint32_t *)(self + 0x7f8) + '\x01'),
                         CONCAT14((char)*(uint32_t *)(self + 0xa54),(uint32_t)uStack_50));
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
  Vector2__operator_assign(pVVar1,(Vector2 *)(*(long *)(lVar3 + 0x40) + 0x22a8));
  *(uint32_t *)(self + 0xf0) = 0;
  *(uint32_t *)(self + 0xec) = 0;
  Vector2__operator_assign((Vector2 *)(self + 0x868),pVVar1);
  uStack_28 = *(uint32_t *)(self + 0x8d0);
  uStack_24 = uStack_28;
  BoundingSquare__Change((BoundingSquare *)(self + 0x740),(Vector2 *)&uStack_28,0.0,pVVar1);
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
  Vector2__operator_assign((Vector2 *)(self + 0x840),aVStack_80);
  Vector2__operator_assign((Vector2 *)(self + 0x848),aVStack_78);
  Vector2__operator_assign((Vector2 *)(self + 0x850),aVStack_70);
  Vector2__operator_assign((Vector2 *)(self + 0x858),aVStack_68);
  this_00 = SMBHUD;
  *(uint32_t *)(self + 0x860) = uStack_60;
  GMeatHUD__ResetTimer(this_00);
  RVar4 = (Runman)((byte)self[0x7d9] & 0xbf);
  self[0x7d9] = RVar4;
  if (*(int *)(self + 0xa40) == 0) {
    if (*(int *)(*(long *)(self + 0xa38) + 0x2c8) == 1) {
      SMBCamera__Reset(*(SMBCamera **)(SuperMeatBoy + 0x38));
      TileLevel__ResetLevel(*(TileLevel **)(SuperMeatBoy + 0x40));
      SMBPalette__ResetObstacles(GSuperMeatBoy__pLevelPalette);
      SMBAnimals__Reset(*(SMBAnimals **)(GSuperMeatBoy__pLevelPalette + 0x41e8));
      ResetSMBBoss();
      RVar4 = self[0x7d9];
      if (*(int *)(self + 0xa40) != 0) goto LAB_00474ba3;
    }
    if (((byte)RVar4 & 1) != 0) {
      ScreenFlashManager__SetFlash
                ((ScreenFlashManager *)&ScreenFlash,DAT_005c07b0 /* R:0.009999999776482582f */,DAT_005be6e8 /* R:0.25f */,
                 (ColorTemplate *)::cBlack);
      if (*(int *)(self + 0x7d4) == 0x10) {
        uVar6 = *(uint *)(self + 0xa4c);
      }
      else {
        lVar7 = *(long *)(self + 0xf8);
        self[0x7db] = (Runman)((byte)self[0x7db] | 8);
        uVar6 = 0;
        uVar2 = *(ushort *)(lVar7 + 0x5b0);
        if (uVar2 != 0) {
          uVar6 = GetRandomINT(0,uVar2 - 1);
        }
        *(uint *)(lVar7 + 0x5d8) = uVar6;
        *(uint *)(self + 0xa4c) = uVar6;
        *(uint32_t *)(self + 0xa50) = 0;
      }
      *(uint32_t *)(self + 0x7d4) = 0x10;
      lVar7 = *(long *)(self + 0xf8);
      if (uVar6 == 0xffffffff) {
        this_01 = *(FlashLibraryInstance **)
                   (*(long *)(lVar7 + 0x5c0) + (ulong)*(ushort *)(lVar7 + 0x5d8) * 8);
      }
      else {
        this_01 = *(FlashLibraryInstance **)(*(long *)(lVar7 + 0x5c0) + (ulong)(uVar6 & 0xffff) * 8)
        ;
      }
      FlashLibraryInstance__Reset(this_01);
      GMeatHUD__ResetTimer(SMBHUD);
      GMeatHUD__FreezeTimer(SMBHUD,1);
      iVar5 = *(int *)(self + 0x7f8);
      *(int *)(self + 0x7f8) = iVar5 + 1;
      if (iVar5 + 1 == 0x14) {
        GSMBMenu__ShowMoveOnMessage(SMBMenu);
      }
      iVar5 = *(int *)(SuperMeatBoy + 0x294);
      if (((1 < iVar5) && (iVar5 != 10)) && (iVar5 != 3)) {
        if (*(uint *)(self + 0x7f8) < 3) {
          SMBChapter__ShowLivesScreen((SMBChapter *)(SuperMeatBoy + 0x90),*(uint *)(self + 0x7f8));
        }
        else {
          SMBChapter__ShowGameOverScreen((SMBChapter *)(SuperMeatBoy + 0x90));
        }
      }
    }
    uStack_50 = self + 0x7f8;
    uStack_58 = 0;
    uStack_48 = CONCAT44(uStack_48._4_4_,4);
    uStack_40 = TPlayer__GetProfile((TPlayer *)Players__Player);
    BroadcastString__SetBroadcastStringParam((BroadcastStringParam *)&uStack_58);
    iVar5 = GSMBMenu__IsInReplayMode(SMBMenu);
    if (iVar5 == 0) {
      SMBReplay__EndReplay(*(SMBReplay **)(self + 0xa38));
    }
    self[0x7d8] = (Runman)((byte)self[0x7d8] & 0x47 | 0x80);
    iVar5 = GSMBMenu__IsInReplayMode(SMBMenu);
    if (iVar5 == 0) {
      SMBReplay__StartNewReplay(*(SMBReplay **)(self + 0xa38));
    }
    RVar4 = self[0x7d9];
  }
LAB_00474ba3:
  self[0x7d9] = (Runman)((byte)RVar4 & 0xfe);
  return;
}

/* ======================================================================
 * Runman__Jump  (Ghidra `Jump` @ 00486360)
 * Signature: uint8_t __thiscall Jump(Runman * self)
 * Class: Runman
 * Calls: `GetRandomINT`, `MeatBoyCharactor__AddEffect__0047af00`
 * Called by: (none)
 */
/* Runman__Jump() */

void __thiscall Runman__Jump(Runman *self)

{
  ushort uVar1;
  long lVar2;
  Runman RVar3;
  int iVar4;
  uint32_t uVar5;
  uint32_t uStack_38;
  uint32_t uStack_34;
  uint32_t uStack_28;
  uint32_t uStack_24;
  
  iVar4 = (**(code **)(*(long *)self + 0xa8))();
  if (iVar4 == 0) {
    return;
  }
  self[0x7d8] = (Runman)((byte)self[0x7d8] | 2);
  if (*(int *)(self + 0x7d4) != 6) {
    lVar2 = *(long *)(self + 0xf8);
    self[0x7db] = (Runman)((byte)self[0x7db] | 8);
    uVar5 = 0;
    uVar1 = *(ushort *)(lVar2 + 0x240);
    if (uVar1 != 0) {
      uVar5 = GetRandomINT(0,uVar1 - 1);
    }
    *(uint32_t *)(lVar2 + 0x268) = uVar5;
    *(uint32_t *)(self + 0xa4c) = uVar5;
    *(uint32_t *)(self + 0xa50) = 0;
  }
  RVar3 = self[0x7d9];
  *(uint32_t *)(self + 0x7d4) = 6;
  uStack_38 = 0x3f800000;
  uStack_34 = 0x3f800000;
  uStack_28 = 0x3f800000;
  uStack_24 = 0x3f800000;
  if (((byte)RVar3 & 0x40) == 0) {
    MeatBoyCharactor__AddEffect__0047af00((MeatBoyCharactor *)self,1,&uStack_28,&uStack_38);
    RVar3 = self[0x7d9];
  }
  *(uint32_t *)(self + 0x800) = 0;
  self[0x7d9] = (Runman)((byte)RVar3 | 0x20);
  *(uint32_t *)(self + 0xbc) = *(uint32_t *)(self + 0x8b0);
  *(uint32_t *)(self + 0x804) = *(uint32_t *)(self + 0xa4);
  return;
}

/* ======================================================================
 * Runman__GroundHit  (Ghidra `GroundHit` @ 00486370)
 * Signature: uint8_t __thiscall GroundHit(Runman * self)
 * Class: Runman
 * Calls: `FlashLibraryInstance__Reset`, `GetRandomINT`, `MeatBoyCharactor__AddEffect__0047af00`
 * Called by: (none)
 */
/* Runman__GroundHit() */

void __thiscall Runman__GroundHit(Runman *self)

{
  ushort uVar1;
  long lVar2;
  Runman RVar3;
  uint uVar4;
  FlashLibraryInstance *this_00;
  uint32_t uStack_38;
  uint32_t uStack_34;
  uint32_t uStack_28;
  uint32_t uStack_24;
  
  if (*(int *)(self + 0x7d4) == 0xf) {
    uVar4 = *(uint *)(self + 0xa4c);
  }
  else {
    lVar2 = *(long *)(self + 0xf8);
    self[0x7db] = (Runman)((byte)self[0x7db] | 8);
    uVar4 = 0;
    uVar1 = *(ushort *)(lVar2 + 0x558);
    if (uVar1 != 0) {
      uVar4 = GetRandomINT(0,uVar1 - 1);
    }
    *(uint *)(lVar2 + 0x580) = uVar4;
    *(uint *)(self + 0xa4c) = uVar4;
    *(uint32_t *)(self + 0xa50) = 0;
  }
  *(uint32_t *)(self + 0x7d4) = 0xf;
  lVar2 = *(long *)(self + 0xf8);
  if (uVar4 == 0xffffffff) {
    this_00 = *(FlashLibraryInstance **)
               (*(long *)(lVar2 + 0x568) + (ulong)*(ushort *)(lVar2 + 0x580) * 8);
  }
  else {
    this_00 = *(FlashLibraryInstance **)(*(long *)(lVar2 + 0x568) + (ulong)(uVar4 & 0xffff) * 8);
  }
  FlashLibraryInstance__Reset(this_00);
  RVar3 = self[0x7d9];
  uStack_28 = 0x3f800000;
  uStack_24 = 0x3f800000;
  uStack_38 = 0x3f800000;
  uStack_34 = 0x3f800000;
  if (((byte)RVar3 & 0x40) == 0) {
    MeatBoyCharactor__AddEffect__0047af00((MeatBoyCharactor *)self,0,&uStack_38,&uStack_28);
    RVar3 = self[0x7d9];
  }
  if (((byte)self[0x7d8] & 0x18) == 0) {
    *(uint32_t *)(self + 0xb8) = 0;
  }
  self[0x7d9] = (Runman)((byte)RVar3 & 0xdf);
  return;
}

/* ======================================================================
 * Runman__CanJump  (Ghidra `CanJump` @ 00486380)
 * Signature: uint8_t __thiscall CanJump(Runman * self)
 * Class: Runman
 * Calls: (none)
 * Called by: (none)
 */
/* Runman__CanJump() */

bool __thiscall Runman__CanJump(Runman *self)

{
  return ((byte)self[0x7d8] & 0xa2) == 0xa0;
}

/* ======================================================================
 * Runman__Render  (Ghidra `Render` @ 00486390)
 * Signature: uint8_t __thiscall Render(Runman * self)
 * Class: Runman
 * Calls: `MeatBoyCharactor__Render`
 * Called by: (none)
 */
/* Runman__Render() */

void __thiscall Runman__Render(Runman *self)

{
  if (*(long **)(self + 0xa98) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0xa98) + 0x10))();
  }
  MeatBoyCharactor__Render((MeatBoyCharactor *)self);
  return;
}

/* ======================================================================
 * Runman__Update  (Ghidra `Update` @ 004863b0)
 * Signature: uint8_t __thiscall Update(Runman * self)
 * Class: Runman
 * Calls: `MeatBoyCharactor__ProcessReplayFrame`, `MeatBoyCharactor__Update`, `RibbonEmitter__AddRibbonPoint`, `Vector2__operator_assign`
 * Called by: (none)
 */
/* Runman__Update() */

void __thiscall Runman__Update(Runman *self)

{
  RibbonEmitter *this_00;
  Runman RVar1;
  int iVar2;
  
  MeatBoyCharactor__ProcessReplayFrame((MeatBoyCharactor *)self);
  iVar2 = (((int)*(uint *)(self + 0xa94) >> 2) + *(int *)(Engine + 4)) * 4 >> 2;
  *(uint *)(self + 0xa94) = *(uint *)(self + 0xa94) & 3 | iVar2 * 4;
  if (1000 < iVar2) {
    RVar1 = self[0xa94];
    if (((byte)RVar1 & 2) != 0) {
      Vector2__operator_assign((Vector2 *)(self + 0xaa0),(Vector2 *)(self + 0xa0));
      RVar1 = self[0xa94];
    }
    self[0xa94] = (Runman)((byte)RVar1 & 0xfd | 1);
    *(uint *)(self + 0xa94) = *(uint *)(self + 0xa94) & 3;
  }
  if (((byte)self[0xa94] & 2) != 0) {
    self[0x7d8] = (Runman)((byte)self[0x7d8] | 0x40);
  }
  this_00 = *(RibbonEmitter **)(self + 0xa98);
  if (this_00 != (RibbonEmitter *)0x0) {
    if (((byte)self[0x7d8] & 0x40) == 0) {
      RibbonEmitter__AddRibbonPoint(this_00,(Vector2 *)(self + 0xaa0));
    }
    else {
      RibbonEmitter__AddRibbonPoint(this_00,(Vector2 *)(self + 0xa0));
    }
    (**(code **)(**(long **)(self + 0xa98) + 0x18))();
  }
  MeatBoyCharactor__Update((MeatBoyCharactor *)self);
  return;
}

/* ======================================================================
 * Runman__WallJump  (Ghidra `WallJump` @ 00486490)
 * Signature: uint8_t __thiscall WallJump(Runman * self)
 * Class: Runman
 * Calls: `GetRandomINT`, `MeatBoyCharactor__AddEffect__0047af00`
 * Called by: (none)
 */
/* Runman__WallJump() */

void __thiscall Runman__WallJump(Runman *self)

{
  ushort uVar1;
  long lVar2;
  Runman RVar3;
  int iVar4;
  uint32_t uVar5;
  uint32_t *puVar6;
  Runman RVar7;
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
    self[0x7db] = (Runman)((byte)self[0x7db] | 8);
    uVar5 = 0;
    uVar1 = *(ushort *)(lVar2 + 0x240);
    if (uVar1 != 0) {
      uVar5 = GetRandomINT(0,uVar1 - 1);
    }
    *(uint32_t *)(lVar2 + 0x268) = uVar5;
    *(uint32_t *)(self + 0xa4c) = uVar5;
    *(uint32_t *)(self + 0xa50) = 0;
  }
  *(uint32_t *)(self + 0x7d4) = 6;
  bVar9 = ((byte)self[0x7d8] & 1) == 0;
  RVar3 = (Runman)((byte)self[0x7d8] & 0xfe | bVar9);
  self[0x7d8] = RVar3;
  if (bVar9) {
    RVar7 = self[0x7d9];
    uStack_38 = 0xbf800000;
    uStack_34 = 0x3f800000;
    uStack_28 = 0xbf800000;
    uStack_24 = 0x3f800000;
    if (((byte)RVar7 & 0x40) != 0) goto LAB_00474591;
    puVar6 = &uStack_38;
    puVar8 = &uStack_28;
  }
  else {
    RVar7 = self[0x7d9];
    uStack_58 = 0x3f800000;
    uStack_54 = 0x3f800000;
    uStack_48 = 0x3f800000;
    uStack_44 = 0x3f800000;
    if (((byte)RVar7 & 0x40) != 0) goto LAB_00474591;
    puVar8 = &uStack_48;
  }
  MeatBoyCharactor__AddEffect__0047af00((MeatBoyCharactor *)self,3,puVar8,puVar6);
  RVar3 = self[0x7d8];
  RVar7 = self[0x7d9];
LAB_00474591:
  self[0x7d8] = (Runman)((byte)RVar3 & 0xfb);
  self[0x7d9] = (Runman)((byte)RVar7 | 0x20);
  return;
}

/* ======================================================================
 * Runman__WallHit  (Ghidra `WallHit` @ 004864a0)
 * Signature: uint8_t __thiscall WallHit(Runman * self, tagTileCollisionType arg1)
 * Class: Runman
 * Calls: `GetRandomINT`, `MeatBoyCharactor__AddEffect__0047af00`
 * Called by: (none)
 */
/* Runman__WallHit(tagTileCollisionType) */

void __thiscall Runman__WallHit(Runman *self,int arg2)

{
  Runman RVar1;
  ushort uVar2;
  long lVar3;
  int iVar4;
  uint32_t uVar5;
  uint32_t uStack_58;
  uint32_t uStack_54;
  uint32_t uStack_48;
  uint32_t uStack_44;
  uint32_t uStack_38;
  uint32_t uStack_34;
  uint32_t uStack_28;
  uint32_t uStack_24;
  
  RVar1 = self[0x7d8];
  if (((byte)RVar1 & 4) == 0) {
    if (*(int *)(self + 0x7d4) == 9) goto LAB_0047440b;
    if (arg2 == 4) {
      uStack_48 = 0x3f800000;
      uStack_44 = 0x3f800000;
      uStack_58 = 0x3f800000;
      uStack_54 = 0x3f800000;
      if (((byte)self[0x7d9] & 0x40) == 0) {
        MeatBoyCharactor__AddEffect__0047af00((MeatBoyCharactor *)self,2,&uStack_58,&uStack_48);
        iVar4 = *(int *)(self + 0x7d4);
        goto LAB_004743cd;
      }
    }
    else {
      uStack_28 = 0xbf800000;
      uStack_24 = 0x3f800000;
      uStack_38 = 0xbf800000;
      uStack_34 = 0x3f800000;
      if (((byte)self[0x7d9] & 0x40) == 0) {
        MeatBoyCharactor__AddEffect__0047af00((MeatBoyCharactor *)self,2,&uStack_38,&uStack_28);
        goto LAB_004743c7;
      }
    }
LAB_004743d2:
    lVar3 = *(long *)(self + 0xf8);
    self[0x7db] = (Runman)((byte)self[0x7db] | 8);
    uVar5 = 0;
    uVar2 = *(ushort *)(lVar3 + 0x348);
    if (uVar2 != 0) {
      uVar5 = GetRandomINT(0,uVar2 - 1);
    }
    *(uint32_t *)(lVar3 + 0x370) = uVar5;
    *(uint32_t *)(self + 0xa4c) = uVar5;
    *(uint32_t *)(self + 0xa50) = 0;
  }
  else {
LAB_004743c7:
    iVar4 = *(int *)(self + 0x7d4);
LAB_004743cd:
    if (iVar4 != 9) goto LAB_004743d2;
  }
  RVar1 = self[0x7d8];
LAB_0047440b:
  *(uint32_t *)(self + 0x7d4) = 9;
  self[0x7d8] = (Runman)((byte)RVar1 | 4);
  return;
}

/* ======================================================================
 * Runman__CreateClones  (Ghidra `CreateClones` @ 004864c0)
 * Signature: uint8_t __thiscall CreateClones(Runman * self)
 * Class: Runman
 * Calls: `GSMBCharactor__CreateCharactor__0049c600`
 * Called by: (none)
 */
/* Runman__CreateClones() */

void __thiscall Runman__CreateClones(Runman *self)

{
  long lVar1;
  uint64_t uVar2;
  long lVar3;
  int iVar4;
  
  iVar4 = 0;
  do {
    lVar1 = *(long *)(self + 0x7f0);
    uVar2 = GSMBCharactor__CreateCharactor__0049c600(SMBCharactor,(MeatBoyCharactor *)self,iVar4);
    lVar3 = (long)iVar4;
    iVar4 = iVar4 + 1;
    *(uint64_t *)(lVar1 + lVar3 * 8) = uVar2;
  } while (iVar4 != 0x28);
  return;
}

/* ======================================================================
 * Runman__Runman__004864d0  (Ghidra `~Runman` @ 004864d0)
 * Signature: uint8_t __thiscall ~Runman(Runman * self)
 * Class: Runman
 * Calls: `MeatBoyCharactor__MeatBoyCharactor__00476510`, `Runman__Runman__00486690`
 * Called by: (none)
 */
/* Runman__Runman__00486690() */

void __thiscall Runman__Runman__00486690(Runman *self)

{
  *(uint8_t ***)self = &PTR__Runman_005c1470;
  if ((*(int *)(self + 0xa40) == 0) && (*(long **)(self + 0xa98) != (long *)0x0)) {
                    /* try { // try from 004864f8 to 004864fa has its CatchHandler @ 00486508 */
    (**(code **)(**(long **)(self + 0xa98) + 8))();
  }
  MeatBoyCharactor__MeatBoyCharactor__00476510((MeatBoyCharactor *)self);
  return;
}

/* ======================================================================
 * Runman__RenderClones  (Ghidra `RenderClones` @ 004865d0)
 * Signature: uint8_t __thiscall RenderClones(Runman * self)
 * Class: Runman
 * Calls: `FlashAnimationLibrary__DisableFlags`, `FlashAnimationLibrary__EnableFlags`, `MeatBoyCharFoundation__Render`
 * Called by: (none)
 */
/* Runman__RenderClones() */

void __thiscall Runman__RenderClones(Runman *self)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  if (*(int *)(self + 0xa40) == 0) {
    FlashAnimationLibrary__EnableFlags((FlashAnimationLibrary *)**(uint64_t **)(self + 0xf8),1);
    lVar1 = *(long *)(self + 0xa38);
    if ((*(int *)(lVar1 + 0x2c8) == 0) && (0 < *(int *)(lVar1 + 0x34))) {
      iVar2 = 0;
      do {
        lVar3 = (long)iVar2;
        if ((*(int *)(lVar1 + 0x3c) == iVar2) &&
           (iVar2 == *(int *)(*(long *)(*(long *)(self + 0x7f0) + lVar3 * 8) + 0xa90))) {
          FlashAnimationLibrary__EnableFlags
                    ((FlashAnimationLibrary *)**(uint64_t **)(self + 0xf8),1);
        }
        else {
          FlashAnimationLibrary__DisableFlags
                    ((FlashAnimationLibrary *)**(uint64_t **)(self + 0xf8),1);
        }
        iVar2 = iVar2 + 1;
        MeatBoyCharFoundation__Render
                  (*(MeatBoyCharFoundation **)(self + 0xf8),
                   *(MeatBoyCharactor **)(*(long *)(self + 0x7f0) + lVar3 * 8),
                   (FlashLibraryInstance *)0x0);
        lVar1 = *(long *)(self + 0xa38);
      } while (iVar2 < *(int *)(lVar1 + 0x34));
    }
  }
  return;
}

/* ======================================================================
 * Runman__Runman__00486690  (Ghidra `~Runman` @ 00486690)
 * Signature: uint8_t __thiscall ~Runman(Runman * self)
 * Class: Runman
 * Calls: `MeatBoyCharactor__MeatBoyCharactor__00476510`, `operator_delete`
 * Called by: `Runman__Runman__004864d0`
 */
/* Runman__Runman__00486690() */

void __thiscall Runman__Runman__00486690(Runman *self)

{
  *(uint8_t ***)self = &PTR__Runman_005c1470;
  if ((*(int *)(self + 0xa40) == 0) && (*(long **)(self + 0xa98) != (long *)0x0)) {
                    /* try { // try from 004866b8 to 004866ba has its CatchHandler @ 004866d0 */
    (**(code **)(**(long **)(self + 0xa98) + 8))();
  }
  MeatBoyCharactor__MeatBoyCharactor__00476510((MeatBoyCharactor *)self);
  operator_delete(self);
  return;
}

/* ======================================================================
 * Runman__Runman__004866f0  (Ghidra `Runman` @ 004866f0)
 * Signature: uint8_t __thiscall Runman(Runman * self)
 * Class: Runman
 * Calls: `FormatResourcePath`, `MeatBoyCharactor__MeatBoyCharactor__0047b350`, `RibbonEmitter__RibbonEmitter__0059ac20`, `Runman__Runman__00486800`, `operator_new`
 * Called by: (none)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Runman__Runman__00486800() */

void __thiscall Runman__Runman__00486800(Runman *self)

{
  uint64_t uVar1;
  RibbonEmitter *this_00;
  uint32_t local_48;
  uint32_t local_44;
  uint32_t local_40;
  uint32_t local_3c;
  uint32_t local_38;
  uint32_t local_34;
  uint32_t local_30;
  uint32_t local_2c;
  uint32_t local_28;
  uint32_t local_24;
  uint32_t local_20;
  
  uVar1 = FormatResourcePath("/Animations/runman.am",&strCharPath);
  MeatBoyCharactor__MeatBoyCharactor__0047b350((MeatBoyCharactor *)self,uVar1,0xc);
  *(uint8_t ***)self = &PTR__Runman_005c1470;
  *(uint32_t *)(self + 0xa54) = 0xc;
  *(uint32_t *)(self + 0xaa4) = 0;
  *(uint32_t *)(self + 0xaa0) = 0;
  local_34 = 0x3e800000;
  local_24 = 0;
  local_48 = 0x41000000;
  local_44 = 0x40000000;
  local_20 = 0x14;
  self[0xa94] = (Runman)((byte)self[0xa94] & 0xfd | 1);
  *(uint *)(self + 0xa94) = *(uint *)(self + 0xa94) & 3;
  local_3c = _DAT_00819704 /* R:0.0f */;
  local_40 = ::cRed;
  local_38 = _DAT_00819708 /* R:2.2420775429197073e-44f */;
  local_30 = ::cRed;
  local_2c = _DAT_00819704 /* R:0.0f */;
  local_28 = _DAT_00819708 /* R:2.2420775429197073e-44f */;
                    /* try { // try from 004867ae to 004867b2 has its CatchHandler @ 004867d1 */
  this_00 = operator_new(0x70);
                    /* try { // try from 004867be to 004867c2 has its CatchHandler @ 004867e4 */
  RibbonEmitter__RibbonEmitter__0059ac20(this_00,(RibbonEmitterCreation *)&local_48);
  *(RibbonEmitter **)(self + 0xa98) = this_00;
  return;
}

/* ======================================================================
 * Runman__Runman__00486800  (Ghidra `Runman` @ 00486800)
 * Signature: uint8_t __thiscall Runman(Runman * self, MeatBoyCharactor * arg1, int arg2)
 * Class: Runman
 * Calls: `MeatBoyCharactor__Clone`, `MeatBoyCharactor__MeatBoyCharactor__0047b350`
 * Called by: `GSMBCharactor__CreateCharactor`, `GSMBCharactor__CreateCharactor__0049c600`, `Runman__Runman`, `Runman__Runman__004866f0`
 */
/* Runman__Runman__00486800(MeatBoyCharactor*, int) */

void __thiscall Runman__Runman__00486800(Runman *self,MeatBoyCharactor *arg1,int arg2)

{
  MeatBoyCharactor__MeatBoyCharactor__0047b350((MeatBoyCharactor *)self);
  *(uint8_t ***)self = &PTR__Runman_005c1470;
                    /* try { // try from 00486831 to 00486835 has its CatchHandler @ 00486882 */
  MeatBoyCharactor__Clone((MeatBoyCharactor *)self,arg1,arg2);
  *(uint32_t *)(self + 0xaa4) = 0;
  *(uint32_t *)(self + 0xaa0) = 0;
  *(uint64_t *)(self + 0xa98) = 0;
  self[0xa94] = (Runman)((byte)self[0xa94] & 0xfd | 1);
  *(uint *)(self + 0xa94) = *(uint *)(self + 0xa94) & 3;
  return;
}
