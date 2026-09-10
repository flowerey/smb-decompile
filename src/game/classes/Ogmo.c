/* src/game/classes/Ogmo.c — 16 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "Ogmo.h"

/* ======================================================================
 * Ogmo__RecordSpecial  (Ghidra `RecordSpecial` @ 00483460)
 * Signature: uint8_t __thiscall RecordSpecial(Ogmo * self)
 * Class: Ogmo
 * Calls: (none)
 * Called by: (none)
 */
/* Ogmo__RecordSpecial() */

void __thiscall Ogmo__RecordSpecial(Ogmo *self)

{
  long lVar1;
  
  lVar1 = *(long *)(self + 0x7e0);
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 3) = *(byte *)(lVar1 + 3) & 0xbf | (byte)((*(uint *)(self + 0xaa0) & 1) << 6);
  }
  return;
}

/* ======================================================================
 * Ogmo__CanJump  (Ghidra `CanJump` @ 00483490)
 * Signature: uint8_t __thiscall CanJump(Ogmo * self)
 * Class: Ogmo
 * Calls: (none)
 * Called by: (none)
 */
/* Ogmo__CanJump() */

bool __thiscall Ogmo__CanJump(Ogmo *self)

{
  if (((byte)self[0x7d8] & 0xa0) != 0xa0) {
    return false;
  }
  return *(int *)(self + 0xa94) < 2;
}

/* ======================================================================
 * Ogmo__GroundHit  (Ghidra `GroundHit` @ 004834c0)
 * Signature: uint8_t __thiscall GroundHit(Ogmo * self)
 * Class: Ogmo
 * Calls: (none)
 * Called by: (none)
 */
/* Ogmo__GroundHit() */

void __thiscall Ogmo__GroundHit(Ogmo *self)

{
  *(uint32_t *)(self + 0xa94) = 0;
  *(uint32_t *)(self + 0xaa0) = 0;
  return;
}

/* ======================================================================
 * Ogmo__Death  (Ghidra `Death` @ 004834e0)
 * Signature: uint8_t __thiscall Death(Ogmo * self)
 * Class: Ogmo
 * Calls: `MeatBoyCharactor__Death`
 * Called by: (none)
 */
/* Ogmo__Death() */

void __thiscall Ogmo__Death(Ogmo *self)

{
  MeatBoyCharactor__Death((MeatBoyCharactor *)self);
  *(uint32_t *)(self + 0xaa0) = 0;
  return;
}

/* ======================================================================
 * Ogmo__Reset  (Ghidra `Reset` @ 00483500)
 * Signature: uint8_t __thiscall Reset(Ogmo * self)
 * Class: Ogmo
 * Calls: `BoundingSquare__Change`, `FlashLibraryInstance__Reset`, `GMeatHUD__FreezeTimer`, `GMeatHUD__ResetTimer`, `GSMBMenu__IsInReplayMode`, `GSMBMenu__ShowMoveOnMessage`, `GetRandomINT`, `ResetSMBBoss`, `SMBAnimals__Reset`, `SMBCamera__Reset` (+10 more)
 * Called by: (none)
 */
/* Ogmo__Reset() */

void __thiscall Ogmo__Reset(Ogmo *self)

{
  Vector2 *pVVar1;
  ushort uVar2;
  GMeatHUD *this_00;
  long lVar3;
  Ogmo OVar4;
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
    uStack_50 = (Ogmo *)(CONCAT17((char)SMBCurrLevelData._4_4_,(uint7)*(uint *)(SMBHUD + 0x418)) &
                        0x1ffffffffffffff);
    uStack_48 = *(uint64_t *)(SuperMeatBoyEditor + 0x100);
    uStack_40 = CONCAT44(uStack_40._4_4_,*(uint32_t *)(Engine + 8));
    uStack_58 = *(uint32_t *)(self + 0xa0);
    uStack_50 = (Ogmo *)CONCAT35(CONCAT21(uStack_50._6_2_,
                                          (char)*(uint32_t *)(self + 0x7f8) + '\x01'),
                                 CONCAT14((char)*(uint32_t *)(self + 0xa54),(uint32_t)uStack_50)
                                );
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
  OVar4 = (Ogmo)((byte)self[0x7d9] & 0xbf);
  self[0x7d9] = OVar4;
  if (*(int *)(self + 0xa40) == 0) {
    if (*(int *)(*(long *)(self + 0xa38) + 0x2c8) == 1) {
      SMBCamera__Reset(*(SMBCamera **)(SuperMeatBoy + 0x38));
      TileLevel__ResetLevel(*(TileLevel **)(SuperMeatBoy + 0x40));
      SMBPalette__ResetObstacles(GSuperMeatBoy__pLevelPalette);
      SMBAnimals__Reset(*(SMBAnimals **)(GSuperMeatBoy__pLevelPalette + 0x41e8));
      ResetSMBBoss();
      OVar4 = self[0x7d9];
      if (*(int *)(self + 0xa40) != 0) goto LAB_00474ba3;
    }
    if (((byte)OVar4 & 1) != 0) {
      ScreenFlashManager__SetFlash
                ((ScreenFlashManager *)&ScreenFlash,DAT_005c07b0 /* R:0.009999999776482582f */,DAT_005be6e8 /* R:0.25f */,
                 (ColorTemplate *)::cBlack);
      if (*(int *)(self + 0x7d4) == 0x10) {
        uVar6 = *(uint *)(self + 0xa4c);
      }
      else {
        lVar7 = *(long *)(self + 0xf8);
        self[0x7db] = (Ogmo)((byte)self[0x7db] | 8);
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
    self[0x7d8] = (Ogmo)((byte)self[0x7d8] & 0x47 | 0x80);
    iVar5 = GSMBMenu__IsInReplayMode(SMBMenu);
    if (iVar5 == 0) {
      SMBReplay__StartNewReplay(*(SMBReplay **)(self + 0xa38));
    }
    OVar4 = self[0x7d9];
  }
LAB_00474ba3:
  self[0x7d9] = (Ogmo)((byte)OVar4 & 0xfe);
  return;
}

/* ======================================================================
 * Ogmo__Update  (Ghidra `Update` @ 00483510)
 * Signature: uint8_t __thiscall Update(Ogmo * self)
 * Class: Ogmo
 * Calls: `MeatBoyCharactor__ProcessReplayFrame`, `MeatBoyCharactor__Update`
 * Called by: (none)
 */
/* Ogmo__Update() */

void __thiscall Ogmo__Update(Ogmo *self)

{
  MeatBoyCharactor__ProcessReplayFrame((MeatBoyCharactor *)self);
  MeatBoyCharactor__Update((MeatBoyCharactor *)self);
  return;
}

/* ======================================================================
 * Ogmo__WallJump  (Ghidra `WallJump` @ 00483530)
 * Signature: uint8_t __thiscall WallJump(Ogmo * self)
 * Class: Ogmo
 * Calls: `GetRandomINT`, `MeatBoyCharactor__AddEffect__0047af00`
 * Called by: (none)
 */
/* Ogmo__WallJump() */

void __thiscall Ogmo__WallJump(Ogmo *self)

{
  ushort uVar1;
  long lVar2;
  Ogmo OVar3;
  int iVar4;
  uint32_t uVar5;
  uint32_t *puVar6;
  Ogmo OVar7;
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
    self[0x7db] = (Ogmo)((byte)self[0x7db] | 8);
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
  OVar3 = (Ogmo)((byte)self[0x7d8] & 0xfe | bVar9);
  self[0x7d8] = OVar3;
  if (bVar9) {
    OVar7 = self[0x7d9];
    uStack_38 = 0xbf800000;
    uStack_34 = 0x3f800000;
    uStack_28 = 0xbf800000;
    uStack_24 = 0x3f800000;
    if (((byte)OVar7 & 0x40) != 0) goto LAB_00474591;
    puVar6 = &uStack_38;
    puVar8 = &uStack_28;
  }
  else {
    OVar7 = self[0x7d9];
    uStack_58 = 0x3f800000;
    uStack_54 = 0x3f800000;
    uStack_48 = 0x3f800000;
    uStack_44 = 0x3f800000;
    if (((byte)OVar7 & 0x40) != 0) goto LAB_00474591;
    puVar8 = &uStack_48;
  }
  MeatBoyCharactor__AddEffect__0047af00((MeatBoyCharactor *)self,3,puVar8,puVar6);
  OVar3 = self[0x7d8];
  OVar7 = self[0x7d9];
LAB_00474591:
  self[0x7d8] = (Ogmo)((byte)OVar3 & 0xfb);
  self[0x7d9] = (Ogmo)((byte)OVar7 | 0x20);
  return;
}

/* ======================================================================
 * Ogmo__CreateClones  (Ghidra `CreateClones` @ 00483570)
 * Signature: uint8_t __thiscall CreateClones(Ogmo * self)
 * Class: Ogmo
 * Calls: `FlashAnimationLibrary__GetMovieClip__005731d0`, `MeatBoyCharactor__CreateClones`
 * Called by: (none)
 */
/* Ogmo__CreateClones() */

void __thiscall Ogmo__CreateClones(Ogmo *self)

{
  uint64_t uVar1;
  
  uVar1 = FlashAnimationLibrary__GetMovieClip__005731d0
                    ((FlashAnimationLibrary *)**(uint64_t **)(self + 0xf8),"doublejump");
  *(uint64_t *)(self + 0xa98) = uVar1;
  MeatBoyCharactor__CreateClones((MeatBoyCharactor *)self);
  return;
}

/* ======================================================================
 * Ogmo__Ogmo__004835a0  (Ghidra `~Ogmo` @ 004835a0)
 * Signature: uint8_t __thiscall ~Ogmo(Ogmo * self)
 * Class: Ogmo
 * Calls: `MeatBoyCharactor__MeatBoyCharactor__00476510`, `Ogmo__Ogmo__00483850`
 * Called by: (none)
 */
/* Ogmo__Ogmo__00483850() */

void __thiscall Ogmo__Ogmo__00483850(Ogmo *self)

{
  *(uint8_t ***)self = &PTR__Ogmo_005c1130;
  if ((*(int *)(self + 0xa40) == 0) && (*(long **)(self + 0xa98) != (long *)0x0)) {
                    /* try { // try from 004835c8 to 004835ca has its CatchHandler @ 004835d8 */
    (**(code **)(**(long **)(self + 0xa98) + 8))();
  }
  MeatBoyCharactor__MeatBoyCharactor__00476510((MeatBoyCharactor *)self);
  return;
}

/* ======================================================================
 * Ogmo__ProcessSpecial  (Ghidra `ProcessSpecial` @ 00483600)
 * Signature: uint8_t __thiscall ProcessSpecial(Ogmo * self)
 * Class: Ogmo
 * Calls: (none)
 * Called by: (none)
 */
/* Ogmo__ProcessSpecial() */

void __thiscall Ogmo__ProcessSpecial(Ogmo *self)

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
 * Ogmo__Jump  (Ghidra `Jump` @ 00483640)
 * Signature: uint8_t __thiscall Jump(Ogmo * self)
 * Class: Ogmo
 * Calls: `MeatBoyCharactor__Jump`
 * Called by: (none)
 */
/* Ogmo__Jump() */

void __thiscall Ogmo__Jump(Ogmo *self)

{
  int iVar1;
  
  MeatBoyCharactor__Jump((MeatBoyCharactor *)self);
  iVar1 = (**(code **)(*(long *)self + 0xa8))(self);
  if ((iVar1 == 1) &&
     (iVar1 = *(int *)(self + 0xa94), *(int *)(self + 0xa94) = iVar1 + 1, iVar1 + 1 == 2)) {
    *(uint32_t *)(self + 0xaa4) = 0;
    *(uint32_t *)(self + 0xaa0) = 1;
    return;
  }
  return;
}

/* ======================================================================
 * Ogmo__Render  (Ghidra `Render` @ 00483690)
 * Signature: uint8_t __thiscall Render(Ogmo * self)
 * Class: Ogmo
 * Calls: `FlashLibraryInstance__IsPlaying`, `MeatBoyCharFoundation__Render`, `MeatBoyCharactor__Render`
 * Called by: (none)
 */
/* Ogmo__Render() */

void __thiscall Ogmo__Render(Ogmo *self)

{
  int iVar1;
  
  if (*(int *)(self + 0xaa0) != 1) {
    MeatBoyCharactor__Render((MeatBoyCharactor *)self);
    return;
  }
  (**(code **)(*(long *)self + 0x50))();
  *(uint32_t *)(*(long *)(self + 0xa98) + 0x58) = *(uint32_t *)(self + 0xaa4);
  MeatBoyCharFoundation__Render
            (*(MeatBoyCharFoundation **)(self + 0xf8),(MeatBoyCharactor *)self,
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
 * Ogmo__RenderClones  (Ghidra `RenderClones` @ 00483710)
 * Signature: uint8_t __thiscall RenderClones(Ogmo * self)
 * Class: Ogmo
 * Calls: `FlashAnimationLibrary__DisableFlags`, `FlashAnimationLibrary__EnableFlags`, `FlashLibraryInstance__IsPlaying`, `MeatBoyCharFoundation__Render`
 * Called by: (none)
 */
/* Ogmo__RenderClones() */

void __thiscall Ogmo__RenderClones(Ogmo *self)

{
  MeatBoyCharactor *pMVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  
  if (*(int *)(self + 0xa40) == 0) {
    FlashAnimationLibrary__EnableFlags((FlashAnimationLibrary *)**(uint64_t **)(self + 0xf8),1);
    lVar3 = *(long *)(self + 0xa38);
    if ((*(int *)(lVar3 + 0x2c8) == 0) && (0 < *(int *)(lVar3 + 0x34))) {
      iVar4 = 0;
      do {
        if ((*(int *)(lVar3 + 0x3c) == iVar4) &&
           (iVar4 == *(int *)(*(long *)(*(long *)(self + 0x7f0) + (long)iVar4 * 8) + 0xa90))) {
          FlashAnimationLibrary__EnableFlags
                    ((FlashAnimationLibrary *)**(uint64_t **)(self + 0xf8),1);
        }
        else {
          FlashAnimationLibrary__DisableFlags
                    ((FlashAnimationLibrary *)**(uint64_t **)(self + 0xf8),1);
        }
        pMVar1 = *(MeatBoyCharactor **)(*(long *)(self + 0x7f0) + (long)iVar4 * 8);
        if (*(int *)(pMVar1 + 0xaa0) == 1) {
          *(uint32_t *)(*(long *)(pMVar1 + 0xa98) + 0x58) = *(uint32_t *)(pMVar1 + 0xaa4);
          MeatBoyCharFoundation__Render
                    (*(MeatBoyCharFoundation **)(pMVar1 + 0xf8),pMVar1,
                     *(FlashLibraryInstance **)(pMVar1 + 0xa98));
          *(uint32_t *)(pMVar1 + 0xaa4) =
               *(uint32_t *)(*(FlashLibraryInstance **)(pMVar1 + 0xa98) + 0x58);
          iVar2 = FlashLibraryInstance__IsPlaying(*(FlashLibraryInstance **)(pMVar1 + 0xa98));
          if (iVar2 == 0) {
            *(uint32_t *)(pMVar1 + 0xaa0) = 0;
            *(uint32_t *)(pMVar1 + 0xaa4) = 0;
          }
        }
        else {
          MeatBoyCharFoundation__Render
                    (*(MeatBoyCharFoundation **)(self + 0xf8),pMVar1,(FlashLibraryInstance *)0x0);
        }
        lVar3 = *(long *)(self + 0xa38);
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(lVar3 + 0x34));
    }
  }
  return;
}

/* ======================================================================
 * Ogmo__Ogmo__00483850  (Ghidra `~Ogmo` @ 00483850)
 * Signature: uint8_t __thiscall ~Ogmo(Ogmo * self)
 * Class: Ogmo
 * Calls: `MeatBoyCharactor__MeatBoyCharactor__00476510`, `operator_delete`
 * Called by: `Ogmo__Ogmo__004835a0`
 */
/* Ogmo__Ogmo__00483850() */

void __thiscall Ogmo__Ogmo__00483850(Ogmo *self)

{
  *(uint8_t ***)self = &PTR__Ogmo_005c1130;
  if ((*(int *)(self + 0xa40) == 0) && (*(long **)(self + 0xa98) != (long *)0x0)) {
                    /* try { // try from 00483878 to 0048387a has its CatchHandler @ 00483890 */
    (**(code **)(**(long **)(self + 0xa98) + 8))();
  }
  MeatBoyCharactor__MeatBoyCharactor__00476510((MeatBoyCharactor *)self);
  operator_delete(self);
  return;
}

/* ======================================================================
 * Ogmo__Ogmo__004838b0  (Ghidra `Ogmo` @ 004838b0)
 * Signature: uint8_t __thiscall Ogmo(Ogmo * self)
 * Class: Ogmo
 * Calls: `FormatResourcePath`, `MeatBoyCharactor__MeatBoyCharactor__0047b350`, `Ogmo__Ogmo__00483910`
 * Called by: (none)
 */
/* Ogmo__Ogmo__00483910() */

void __thiscall Ogmo__Ogmo__00483910(Ogmo *self)

{
  uint64_t uVar1;
  
  uVar1 = FormatResourcePath("/Animations/ogmo.am",&strCharPath);
  MeatBoyCharactor__MeatBoyCharactor__0047b350((MeatBoyCharactor *)self,uVar1,0x18);
  *(uint8_t ***)self = &PTR__Ogmo_005c1130;
  *(uint32_t *)(self + 0xa94) = 0;
  *(uint32_t *)(self + 0xaa0) = 0;
  *(uint32_t *)(self + 0xaa4) = 0;
  *(uint32_t *)(self + 0xa54) = 0x18;
  return;
}

/* ======================================================================
 * Ogmo__Ogmo__00483910  (Ghidra `Ogmo` @ 00483910)
 * Signature: uint8_t __thiscall Ogmo(Ogmo * self, MeatBoyCharactor * arg1, int arg2)
 * Class: Ogmo
 * Calls: `MeatBoyCharactor__Clone`, `MeatBoyCharactor__MeatBoyCharactor__0047b350`
 * Called by: `GSMBCharactor__CreateCharactor`, `GSMBCharactor__CreateCharactor__0049c600`, `Ogmo__Ogmo`, `Ogmo__Ogmo__004838b0`
 */
/* Ogmo__Ogmo__00483910(MeatBoyCharactor*, int) */

void __thiscall Ogmo__Ogmo__00483910(Ogmo *self,MeatBoyCharactor *arg1,int arg2)

{
  MeatBoyCharactor__MeatBoyCharactor__0047b350((MeatBoyCharactor *)self);
  *(uint8_t ***)self = &PTR__Ogmo_005c1130;
  *(uint32_t *)(self + 0xaa0) = 0;
  *(uint32_t *)(self + 0xaa4) = 0;
                    /* try { // try from 00483956 to 0048395a has its CatchHandler @ 0048397c */
  MeatBoyCharactor__Clone((MeatBoyCharactor *)self,arg1,arg2);
  *(uint64_t *)(self + 0xa98) = *(uint64_t *)(arg1 + 0xa98);
  return;
}
