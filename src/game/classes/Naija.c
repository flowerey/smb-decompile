/* src/game/classes/Naija.c — 15 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "Naija.h"

/* ======================================================================
 * Naija__Reset  (Ghidra `Reset` @ 00482ac0)
 * Signature: uint8_t __thiscall Reset(Naija * self)
 * Class: Naija
 * Calls: `MeatBoyCharactor__Reset`, `Vector2__operator_assign`
 * Called by: (none)
 */
/* Naija__Reset() */

void __thiscall Naija__Reset(Naija *self)

{
  uint32_t local_18;
  uint32_t local_14;
  
  MeatBoyCharactor__Reset((MeatBoyCharactor *)self);
  self[0x7d8] = (Naija)((byte)self[0x7d8] & 0xfe);
  *(uint32_t *)(self + 0xa94) = 0;
  *(uint32_t *)(self + 0xaa0) = 0;
  *(uint32_t *)(self + 0xad4) = 1;
  *(uint32_t *)(self + 0xaa4) = 0;
  *(uint32_t *)(self + 0xaa8) = 0;
  *(uint32_t *)(self + 0xac8) = 0;
  *(uint32_t *)(self + 0xacc) = 0;
  local_18 = 0;
  local_14 = 0;
  Vector2__operator_assign((Vector2 *)(self + 0xaac),(Vector2 *)&local_18);
  if (*(long **)(self + 0xad8) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0xad8) + 0x20))();
  }
  return;
}

/* ======================================================================
 * Naija__Death  (Ghidra `Death` @ 00482b50)
 * Signature: uint8_t __thiscall Death(Naija * self)
 * Class: Naija
 * Calls: `MeatBoyCharactor__Death`, `Vector2__operator_assign`
 * Called by: (none)
 */
/* Naija__Death() */

void __thiscall Naija__Death(Naija *self)

{
  uint32_t local_18;
  uint32_t local_14;
  
  self[0x7d8] = (Naija)((byte)self[0x7d8] & 0xfe);
  *(uint32_t *)(self + 0xa94) = 0;
  *(uint32_t *)(self + 0xaa0) = 0;
  *(uint32_t *)(self + 0xad4) = 1;
  *(uint32_t *)(self + 0xaa4) = 0;
  *(uint32_t *)(self + 0xaa8) = 0;
  *(uint32_t *)(self + 0xac8) = 0;
  *(uint32_t *)(self + 0xacc) = 0;
  local_18 = 0;
  local_14 = 0;
  Vector2__operator_assign((Vector2 *)(self + 0xaac),(Vector2 *)&local_18);
  if (*(long **)(self + 0xad8) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0xad8) + 0x20))();
  }
  MeatBoyCharactor__Death((MeatBoyCharactor *)self);
  return;
}

/* ======================================================================
 * Naija__Jump  (Ghidra `Jump` @ 00482bf0)
 * Signature: uint8_t __thiscall Jump(Naija * self)
 * Class: Naija
 * Calls: `GetRandomINT`, `MeatBoyCharactor__AddEffect__0047af00`
 * Called by: (none)
 */
/* Naija__Jump() */

void __thiscall Naija__Jump(Naija *self)

{
  ushort uVar1;
  long lVar2;
  Naija NVar3;
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
  self[0x7d8] = (Naija)((byte)self[0x7d8] | 2);
  if (*(int *)(self + 0x7d4) != 6) {
    lVar2 = *(long *)(self + 0xf8);
    self[0x7db] = (Naija)((byte)self[0x7db] | 8);
    uVar5 = 0;
    uVar1 = *(ushort *)(lVar2 + 0x240);
    if (uVar1 != 0) {
      uVar5 = GetRandomINT(0,uVar1 - 1);
    }
    *(uint32_t *)(lVar2 + 0x268) = uVar5;
    *(uint32_t *)(self + 0xa4c) = uVar5;
    *(uint32_t *)(self + 0xa50) = 0;
  }
  NVar3 = self[0x7d9];
  *(uint32_t *)(self + 0x7d4) = 6;
  uStack_38 = 0x3f800000;
  uStack_34 = 0x3f800000;
  uStack_28 = 0x3f800000;
  uStack_24 = 0x3f800000;
  if (((byte)NVar3 & 0x40) == 0) {
    MeatBoyCharactor__AddEffect__0047af00((MeatBoyCharactor *)self,1,&uStack_28,&uStack_38);
    NVar3 = self[0x7d9];
  }
  *(uint32_t *)(self + 0x800) = 0;
  self[0x7d9] = (Naija)((byte)NVar3 | 0x20);
  *(uint32_t *)(self + 0xbc) = *(uint32_t *)(self + 0x8b0);
  *(uint32_t *)(self + 0x804) = *(uint32_t *)(self + 0xa4);
  return;
}

/* ======================================================================
 * Naija__GroundHit  (Ghidra `GroundHit` @ 00482c00)
 * Signature: uint8_t __thiscall GroundHit(Naija * self)
 * Class: Naija
 * Calls: `FlashLibraryInstance__Reset`, `GetRandomINT`, `MeatBoyCharactor__AddEffect__0047af00`
 * Called by: (none)
 */
/* Naija__GroundHit() */

void __thiscall Naija__GroundHit(Naija *self)

{
  ushort uVar1;
  long lVar2;
  Naija NVar3;
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
    self[0x7db] = (Naija)((byte)self[0x7db] | 8);
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
  NVar3 = self[0x7d9];
  uStack_28 = 0x3f800000;
  uStack_24 = 0x3f800000;
  uStack_38 = 0x3f800000;
  uStack_34 = 0x3f800000;
  if (((byte)NVar3 & 0x40) == 0) {
    MeatBoyCharactor__AddEffect__0047af00((MeatBoyCharactor *)self,0,&uStack_38,&uStack_28);
    NVar3 = self[0x7d9];
  }
  if (((byte)self[0x7d8] & 0x18) == 0) {
    *(uint32_t *)(self + 0xb8) = 0;
  }
  self[0x7d9] = (Naija)((byte)NVar3 & 0xdf);
  return;
}

/* ======================================================================
 * Naija__CanJump  (Ghidra `CanJump` @ 00482c10)
 * Signature: uint8_t __thiscall CanJump(Naija * self)
 * Class: Naija
 * Calls: (none)
 * Called by: (none)
 */
/* Naija__CanJump() */

bool __thiscall Naija__CanJump(Naija *self)

{
  return ((byte)self[0x7d8] & 0xa2) == 0xa0;
}

/* ======================================================================
 * Naija__Update  (Ghidra `Update` @ 00482c20)
 * Signature: uint8_t __thiscall Update(Naija * self)
 * Class: Naija
 * Calls: `MeatBoyCharactor__ProcessReplayFrame`, `MeatBoyCharactor__Update`, `RibbonEmitter__AddRibbonPoint`, `Vector2__operator_assign`
 * Called by: (none)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Naija__Update() */

void __thiscall Naija__Update(Naija *self)

{
  RibbonEmitter *this_00;
  long lVar1;
  float fVar2;
  float fVar3;
  
  MeatBoyCharactor__ProcessReplayFrame((MeatBoyCharactor *)self);
  if ((*(int *)(self + 0xa94) == 1) && (((byte)self[0x7d8] & 2) != 0)) {
    fVar3 = *(float *)(self + 0xaa0);
    *(float *)(self + 0x8c4) = _DAT_005bfba8 /* R:0.10000000149011612f */ * *(float *)(self + 0xa98);
    *(float *)(self + 0x8ac) = DAT_005be6e4 /* R:0.5f */ * *(float *)(self + 0xa9c);
  }
  else {
    fVar3 = *(float *)(self + 0xaa0);
    *(uint32_t *)(self + 0xa94) = 0;
    *(uint32_t *)(self + 0x8c4) = *(uint32_t *)(self + 0xa98);
    *(uint32_t *)(self + 0x8ac) = *(uint32_t *)(self + 0xa9c);
  }
  if (fVar3 <= 0.0) {
    *(uint32_t *)(self + 0xaa4) = 0;
  }
  else {
    fVar2 = DAT_005c10c4 /* R:-25000.0f */;
    if (((byte)self[0x7d8] & 1) == 0) {
      fVar2 = DAT_005c10c0 /* R:25000.0f */;
    }
    self[0x7d9] = (Naija)((byte)self[0x7d9] | 0x10);
    lVar1 = Engine;
    *(float *)(self + 0xec) = fVar2 + *(float *)(self + 0xec);
    *(float *)(self + 0xf0) = _DAT_005c10c8 /* R:7000.0f */ + *(float *)(self + 0xf0);
    fVar3 = fVar3 - *(float *)(lVar1 + 0x38);
    *(float *)(self + 0xaa0) = fVar3;
    if (fVar3 < 0.0) {
      if (0.0 < *(float *)(self + 0xbc)) {
        *(float *)(self + 0xbc) = *(float *)(self + 0xbc) * _DAT_005bfba8 /* R:0.10000000149011612f */;
      }
      Vector2__operator_assign((Vector2 *)(self + 0xaac),(Vector2 *)(self + 0xa0));
    }
    *(uint32_t *)(self + 0xad4) = 0;
    *(uint32_t *)(self + 0xaa4) = 1;
  }
  MeatBoyCharactor__Update((MeatBoyCharactor *)self);
  if (*(long *)(self + 0x838) != 0) {
    if (*(int *)(self + 0xad4) == 0) {
      Vector2__operator_assign((Vector2 *)(self + 0xaac),(Vector2 *)(self + 0xa0));
    }
    *(uint32_t *)(self + 0xad4) = 1;
  }
  this_00 = *(RibbonEmitter **)(self + 0xad8);
  if (this_00 == (RibbonEmitter *)0x0) {
    return;
  }
  if ((*(int *)(self + 0xaa4) == 1) || (*(int *)(self + 0xad4) == 0)) {
    RibbonEmitter__AddRibbonPoint(this_00,(Vector2 *)(self + 0xa0));
    *(uint32_t *)(self + 0xaa8) = 1;
  }
  else {
    *(uint32_t *)(self + 0xaa8) = 0;
    RibbonEmitter__AddRibbonPoint(this_00,(Vector2 *)(self + 0xaac));
  }
                    /* WARNING: Could not recover jumptable at 0x00482d5b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(self + 0xad8) + 0x18))();
  return;
}

/* ======================================================================
 * Naija__WallJump  (Ghidra `WallJump` @ 00482e60)
 * Signature: uint8_t __thiscall WallJump(Naija * self)
 * Class: Naija
 * Calls: `GetRandomINT`, `MeatBoyCharactor__AddEffect__0047af00`
 * Called by: (none)
 */
/* Naija__WallJump() */

void __thiscall Naija__WallJump(Naija *self)

{
  ushort uVar1;
  long lVar2;
  Naija NVar3;
  int iVar4;
  uint32_t uVar5;
  uint32_t *puVar6;
  Naija NVar7;
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
    self[0x7db] = (Naija)((byte)self[0x7db] | 8);
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
  NVar3 = (Naija)((byte)self[0x7d8] & 0xfe | bVar9);
  self[0x7d8] = NVar3;
  if (bVar9) {
    NVar7 = self[0x7d9];
    uStack_38 = 0xbf800000;
    uStack_34 = 0x3f800000;
    uStack_28 = 0xbf800000;
    uStack_24 = 0x3f800000;
    if (((byte)NVar7 & 0x40) != 0) goto LAB_00474591;
    puVar6 = &uStack_38;
    puVar8 = &uStack_28;
  }
  else {
    NVar7 = self[0x7d9];
    uStack_58 = 0x3f800000;
    uStack_54 = 0x3f800000;
    uStack_48 = 0x3f800000;
    uStack_44 = 0x3f800000;
    if (((byte)NVar7 & 0x40) != 0) goto LAB_00474591;
    puVar8 = &uStack_48;
  }
  MeatBoyCharactor__AddEffect__0047af00((MeatBoyCharactor *)self,3,puVar8,puVar6);
  NVar3 = self[0x7d8];
  NVar7 = self[0x7d9];
LAB_00474591:
  self[0x7d8] = (Naija)((byte)NVar3 & 0xfb);
  self[0x7d9] = (Naija)((byte)NVar7 | 0x20);
  return;
}

/* ======================================================================
 * Naija__WallHit  (Ghidra `WallHit` @ 00482e70)
 * Signature: uint8_t __thiscall WallHit(Naija * self, tagTileCollisionType arg1)
 * Class: Naija
 * Calls: `GetRandomINT`, `MeatBoyCharactor__AddEffect__0047af00`
 * Called by: (none)
 */
/* Naija__WallHit(tagTileCollisionType) */

void __thiscall Naija__WallHit(Naija *self,int arg2)

{
  Naija NVar1;
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
  
  NVar1 = self[0x7d8];
  if (((byte)NVar1 & 4) == 0) {
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
    self[0x7db] = (Naija)((byte)self[0x7db] | 8);
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
  NVar1 = self[0x7d8];
LAB_0047440b:
  *(uint32_t *)(self + 0x7d4) = 9;
  self[0x7d8] = (Naija)((byte)NVar1 | 4);
  return;
}

/* ======================================================================
 * Naija__CreateClones  (Ghidra `CreateClones` @ 00482e90)
 * Signature: uint8_t __thiscall CreateClones(Naija * self)
 * Class: Naija
 * Calls: `FlashAnimationLibrary__GetMovieClip__005731d0`, `MeatBoyCharactor__CreateClones`
 * Called by: (none)
 */
/* Naija__CreateClones() */

void __thiscall Naija__CreateClones(Naija *self)

{
  uint64_t uVar1;
  
  uVar1 = FlashAnimationLibrary__GetMovieClip__005731d0
                    ((FlashAnimationLibrary *)**(uint64_t **)(self + 0xf8),"attack");
  *(uint64_t *)(self + 0xac0) = uVar1;
  uVar1 = FlashAnimationLibrary__GetMovieClip__005731d0
                    ((FlashAnimationLibrary *)**(uint64_t **)(self + 0xf8),"charge");
  *(uint64_t *)(self + 0xab8) = uVar1;
  MeatBoyCharactor__CreateClones((MeatBoyCharactor *)self);
  return;
}

/* ======================================================================
 * Naija__Naija__00482ee0  (Ghidra `~Naija` @ 00482ee0)
 * Signature: uint8_t __thiscall ~Naija(Naija * self)
 * Class: Naija
 * Calls: `MeatBoyCharactor__MeatBoyCharactor__00476510`, `Naija__Naija__00483180`
 * Called by: (none)
 */
/* Naija__Naija__00483180() */

void __thiscall Naija__Naija__00483180(Naija *self)

{
  *(uint8_t ***)self = &PTR__Naija_005c0fd0;
  if ((*(int *)(self + 0xa40) == 0) && (*(long **)(self + 0xad8) != (long *)0x0)) {
                    /* try { // try from 00482f08 to 00482f0a has its CatchHandler @ 00482f18 */
    (**(code **)(**(long **)(self + 0xad8) + 8))();
  }
  MeatBoyCharactor__MeatBoyCharactor__00476510((MeatBoyCharactor *)self);
  return;
}

/* ======================================================================
 * Naija__Render  (Ghidra `Render` @ 00483000)
 * Signature: uint8_t __thiscall Render(Naija * self)
 * Class: Naija
 * Calls: `FlashLibraryInstance__IsPlaying`, `MeatBoyCharFoundation__Render`, `MeatBoyCharactor__Render`
 * Called by: (none)
 */
/* Naija__Render() */

void __thiscall Naija__Render(Naija *self)

{
  int iVar1;
  
  if (*(long **)(self + 0xad8) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0xad8) + 0x10))();
  }
  if (*(int *)(self + 0xa94) == 1) {
    *(uint32_t *)(*(long *)(self + 0xab8) + 0x58) = *(uint32_t *)(self + 0xac8);
    MeatBoyCharFoundation__Render
              (*(MeatBoyCharFoundation **)(self + 0xf8),(MeatBoyCharactor *)self,
               *(FlashLibraryInstance **)(self + 0xab8));
    *(uint32_t *)(self + 0xac8) = *(uint32_t *)(*(FlashLibraryInstance **)(self + 0xab8) + 0x58)
    ;
    iVar1 = FlashLibraryInstance__IsPlaying(*(FlashLibraryInstance **)(self + 0xab8));
    if (iVar1 == 0) {
      *(uint32_t *)(self + 0xac8) = 0;
      return;
    }
  }
  else {
    if (*(int *)(self + 0xaa8) != 1) {
      MeatBoyCharactor__Render((MeatBoyCharactor *)self);
      return;
    }
    *(uint32_t *)(*(long *)(self + 0xac0) + 0x58) = *(uint32_t *)(self + 0xacc);
    MeatBoyCharFoundation__Render
              (*(MeatBoyCharFoundation **)(self + 0xf8),(MeatBoyCharactor *)self,
               *(FlashLibraryInstance **)(self + 0xac0));
    *(uint32_t *)(self + 0xacc) = *(uint32_t *)(*(long *)(self + 0xac0) + 0x58);
  }
  return;
}

/* ======================================================================
 * Naija__RenderClones  (Ghidra `RenderClones` @ 004830c0)
 * Signature: uint8_t __thiscall RenderClones(Naija * self)
 * Class: Naija
 * Calls: `FlashAnimationLibrary__DisableFlags`, `FlashAnimationLibrary__EnableFlags`, `MeatBoyCharFoundation__Render`
 * Called by: (none)
 */
/* Naija__RenderClones() */

void __thiscall Naija__RenderClones(Naija *self)

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
 * Naija__Naija__00483180  (Ghidra `~Naija` @ 00483180)
 * Signature: uint8_t __thiscall ~Naija(Naija * self)
 * Class: Naija
 * Calls: `MeatBoyCharactor__MeatBoyCharactor__00476510`, `operator_delete`
 * Called by: `Naija__Naija__00482ee0`
 */
/* Naija__Naija__00483180() */

void __thiscall Naija__Naija__00483180(Naija *self)

{
  *(uint8_t ***)self = &PTR__Naija_005c0fd0;
  if ((*(int *)(self + 0xa40) == 0) && (*(long **)(self + 0xad8) != (long *)0x0)) {
                    /* try { // try from 004831aa to 004831ac has its CatchHandler @ 004831c2 */
    (**(code **)(**(long **)(self + 0xad8) + 8))();
  }
  MeatBoyCharactor__MeatBoyCharactor__00476510((MeatBoyCharactor *)self);
  operator_delete(self);
  return;
}

/* ======================================================================
 * Naija__Naija__004831e0  (Ghidra `Naija` @ 004831e0)
 * Signature: uint8_t __thiscall Naija(Naija * self)
 * Class: Naija
 * Calls: `FormatResourcePath`, `MeatBoyCharactor__MeatBoyCharactor__0047b350`, `Naija__Naija__00483350`, `RibbonEmitter__RibbonEmitter__0059ac20`, `Vector2__operator_assign`, `operator_new`
 * Called by: (none)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Naija__Naija__00483350() */

void __thiscall Naija__Naija__00483350(Naija *self)

{
  uint64_t uVar1;
  RibbonEmitter *this_00;
  uint32_t local_58;
  uint32_t local_54;
  uint32_t local_50;
  uint32_t local_4c;
  uint32_t local_48;
  uint32_t local_44;
  uint32_t local_40;
  uint32_t local_3c;
  uint32_t local_38;
  uint32_t local_34;
  uint32_t local_30;
  uint32_t local_28;
  uint32_t local_24;
  
  uVar1 = FormatResourcePath("/Animations/naija.am",&strCharPath);
  MeatBoyCharactor__MeatBoyCharactor__0047b350((MeatBoyCharactor *)self,uVar1,10);
  self[0x7d8] = (Naija)((byte)self[0x7d8] & 0xfe);
  *(uint8_t ***)self = &PTR__Naija_005c0fd0;
  *(uint32_t *)(self + 0xa54) = 10;
  *(uint32_t *)(self + 0xa94) = 0;
  *(uint32_t *)(self + 0xaa0) = 0;
  *(uint32_t *)(self + 0xa98) = *(uint32_t *)(self + 0x8c4);
  *(uint32_t *)(self + 0xad4) = 1;
  *(uint32_t *)(self + 0xaa4) = 0;
  *(uint32_t *)(self + 0xaa8) = 0;
  *(uint32_t *)(self + 0xac8) = 0;
  *(uint32_t *)(self + 0xa9c) = *(uint32_t *)(self + 0x8ac);
  *(uint32_t *)(self + 0xacc) = 0;
  local_28 = 0;
  local_24 = 0;
                    /* try { // try from 0048329a to 0048329e has its CatchHandler @ 00483319 */
  Vector2__operator_assign((Vector2 *)(self + 0xaac),(Vector2 *)&local_28);
  local_44 = 0x3e800000;
  local_34 = 0;
  local_58 = 0x41000000;
  local_4c = _DAT_00819504 /* R:2.2958888052482446e-39f */;
  local_48 = _DAT_00819508 /* R:1.1895499349388512e-38f */;
  local_50 = ::cOrange;
  local_40 = ::cOrange;
  local_3c = _DAT_00819504 /* R:2.2958888052482446e-39f */;
  local_38 = _DAT_00819508 /* R:1.1895499349388512e-38f */;
  local_54 = 0x40000000;
  local_30 = 0x14;
                    /* try { // try from 004832f6 to 004832fa has its CatchHandler @ 00483340 */
  this_00 = operator_new(0x70);
                    /* try { // try from 00483306 to 0048330a has its CatchHandler @ 0048332c */
  RibbonEmitter__RibbonEmitter__0059ac20(this_00,(RibbonEmitterCreation *)&local_58);
  *(RibbonEmitter **)(self + 0xad8) = this_00;
  return;
}

/* ======================================================================
 * Naija__Naija__00483350  (Ghidra `Naija` @ 00483350)
 * Signature: uint8_t __thiscall Naija(Naija * self, MeatBoyCharactor * arg1, int arg2)
 * Class: Naija
 * Calls: `MeatBoyCharactor__Clone`, `MeatBoyCharactor__MeatBoyCharactor__0047b350`, `Vector2__operator_assign`
 * Called by: `GSMBCharactor__CreateCharactor`, `GSMBCharactor__CreateCharactor__0049c600`, `Naija__Naija`, `Naija__Naija__004831e0`
 */
/* Naija__Naija__00483350(MeatBoyCharactor*, int) */

void __thiscall Naija__Naija__00483350(Naija *self,MeatBoyCharactor *arg1,int arg2)

{
  uint32_t local_28;
  uint32_t local_24;
  
  MeatBoyCharactor__MeatBoyCharactor__0047b350((MeatBoyCharactor *)self);
  *(uint8_t ***)self = &PTR__Naija_005c0fd0;
                    /* try { // try from 00483381 to 00483413 has its CatchHandler @ 00483444 */
  MeatBoyCharactor__Clone((MeatBoyCharactor *)self,arg1,arg2);
  self[0x7d8] = (Naija)((byte)self[0x7d8] & 0xfe);
  *(uint32_t *)(self + 0xa94) = 0;
  *(uint32_t *)(self + 0xaa0) = 0;
  *(uint32_t *)(self + 0xad4) = 1;
  *(uint32_t *)(self + 0xaa4) = 0;
  *(uint32_t *)(self + 0xa98) = *(uint32_t *)(self + 0x8c4);
  *(uint32_t *)(self + 0xaa8) = 0;
  *(uint64_t *)(self + 0xad8) = 0;
  *(uint32_t *)(self + 0xac8) = 0;
  *(uint32_t *)(self + 0xacc) = 0;
  *(uint32_t *)(self + 0xa9c) = *(uint32_t *)(self + 0x8ac);
  local_28 = 0;
  local_24 = 0;
  Vector2__operator_assign((Vector2 *)(self + 0xaac),(Vector2 *)&local_28);
  *(uint64_t *)(self + 0xac0) = *(uint64_t *)(arg1 + 0xac0);
  *(uint64_t *)(self + 0xab8) = *(uint64_t *)(arg1 + 0xab8);
  return;
}
