/* src/game/classes/VVVVVV.c — 15 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "VVVVVV.h"

/* ======================================================================
 * VVVVVV__Jump  (Ghidra `Jump` @ 00519300)
 * Signature: uint8_t __thiscall Jump(VVVVVV * self)
 * Class: VVVVVV
 * Calls: `GetRandomINT`, `MeatBoyCharactor__AddEffect__0047af00`
 * Called by: (none)
 */
/* VVVVVV__Jump() */

void __thiscall VVVVVV__Jump(VVVVVV *self)

{
  ushort uVar1;
  long lVar2;
  VVVVVV VVar3;
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
  self[0x7d8] = (VVVVVV)((byte)self[0x7d8] | 2);
  if (*(int *)(self + 0x7d4) != 6) {
    lVar2 = *(long *)(self + 0xf8);
    self[0x7db] = (VVVVVV)((byte)self[0x7db] | 8);
    uVar5 = 0;
    uVar1 = *(ushort *)(lVar2 + 0x240);
    if (uVar1 != 0) {
      uVar5 = GetRandomINT(0,uVar1 - 1);
    }
    *(uint32_t *)(lVar2 + 0x268) = uVar5;
    *(uint32_t *)(self + 0xa4c) = uVar5;
    *(uint32_t *)(self + 0xa50) = 0;
  }
  VVar3 = self[0x7d9];
  *(uint32_t *)(self + 0x7d4) = 6;
  uStack_38 = 0x3f800000;
  uStack_34 = 0x3f800000;
  uStack_28 = 0x3f800000;
  uStack_24 = 0x3f800000;
  if (((byte)VVar3 & 0x40) == 0) {
    MeatBoyCharactor__AddEffect__0047af00((MeatBoyCharactor *)self,1,&uStack_28,&uStack_38);
    VVar3 = self[0x7d9];
  }
  *(uint32_t *)(self + 0x800) = 0;
  self[0x7d9] = (VVVVVV)((byte)VVar3 | 0x20);
  *(uint32_t *)(self + 0xbc) = *(uint32_t *)(self + 0x8b0);
  *(uint32_t *)(self + 0x804) = *(uint32_t *)(self + 0xa4);
  return;
}

/* ======================================================================
 * VVVVVV__GroundHit  (Ghidra `GroundHit` @ 00519310)
 * Signature: uint8_t __thiscall GroundHit(VVVVVV * self)
 * Class: VVVVVV
 * Calls: `FlashLibraryInstance__Reset`, `GetRandomINT`, `MeatBoyCharactor__AddEffect__0047af00`
 * Called by: (none)
 */
/* VVVVVV__GroundHit() */

void __thiscall VVVVVV__GroundHit(VVVVVV *self)

{
  ushort uVar1;
  long lVar2;
  VVVVVV VVar3;
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
    self[0x7db] = (VVVVVV)((byte)self[0x7db] | 8);
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
  VVar3 = self[0x7d9];
  uStack_28 = 0x3f800000;
  uStack_24 = 0x3f800000;
  uStack_38 = 0x3f800000;
  uStack_34 = 0x3f800000;
  if (((byte)VVar3 & 0x40) == 0) {
    MeatBoyCharactor__AddEffect__0047af00((MeatBoyCharactor *)self,0,&uStack_38,&uStack_28);
    VVar3 = self[0x7d9];
  }
  if (((byte)self[0x7d8] & 0x18) == 0) {
    *(uint32_t *)(self + 0xb8) = 0;
  }
  self[0x7d9] = (VVVVVV)((byte)VVar3 & 0xdf);
  return;
}

/* ======================================================================
 * VVVVVV__CanJump  (Ghidra `CanJump` @ 00519320)
 * Signature: uint8_t __thiscall CanJump(VVVVVV * self)
 * Class: VVVVVV
 * Calls: (none)
 * Called by: (none)
 */
/* VVVVVV__CanJump() */

bool __thiscall VVVVVV__CanJump(VVVVVV *self)

{
  return ((byte)self[0x7d8] & 0xa2) == 0xa0;
}

/* ======================================================================
 * VVVVVV__Render  (Ghidra `Render` @ 00519330)
 * Signature: uint8_t __thiscall Render(VVVVVV * self)
 * Class: VVVVVV
 * Calls: `MeatBoyCharactor__Render`
 * Called by: (none)
 */
/* VVVVVV__Render() */

void __thiscall VVVVVV__Render(VVVVVV *self)

{
  *(uint32_t *)(*(long *)(self + 0xaa0) + 0x30) = *(uint32_t *)(self + 0xa0);
  *(uint32_t *)(*(long *)(self + 0xaa0) + 0x34) = *(uint32_t *)(self + 0xa4);
  *(uint32_t *)(*(long *)(self + 0xaa8) + 0x30) = *(uint32_t *)(self + 0xa0);
  *(uint32_t *)(*(long *)(self + 0xaa8) + 0x34) = *(uint32_t *)(self + 0xa4);
  (**(code **)(**(long **)(self + 0xaa0) + 0x10))();
  (**(code **)(**(long **)(self + 0xaa8) + 0x10))();
  MeatBoyCharactor__Render((MeatBoyCharactor *)self);
  return;
}

/* ======================================================================
 * VVVVVV__Update  (Ghidra `Update` @ 005193a0)
 * Signature: uint8_t __thiscall Update(VVVVVV * self)
 * Class: VVVVVV
 * Calls: `MeatBoyCharactor__ProcessReplayFrame`, `MeatBoyCharactor__Update`
 * Called by: (none)
 */
/* VVVVVV__Update() */

void __thiscall VVVVVV__Update(VVVVVV *self)

{
  MeatBoyCharactor__ProcessReplayFrame((MeatBoyCharactor *)self);
  MeatBoyCharactor__Update((MeatBoyCharactor *)self);
  return;
}

/* ======================================================================
 * VVVVVV__WallJump  (Ghidra `WallJump` @ 005193c0)
 * Signature: uint8_t __thiscall WallJump(VVVVVV * self)
 * Class: VVVVVV
 * Calls: `GetRandomINT`, `MeatBoyCharactor__AddEffect__0047af00`
 * Called by: (none)
 */
/* VVVVVV__WallJump() */

void __thiscall VVVVVV__WallJump(VVVVVV *self)

{
  ushort uVar1;
  long lVar2;
  VVVVVV VVar3;
  int iVar4;
  uint32_t uVar5;
  uint32_t *puVar6;
  VVVVVV VVar7;
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
    self[0x7db] = (VVVVVV)((byte)self[0x7db] | 8);
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
  VVar3 = (VVVVVV)((byte)self[0x7d8] & 0xfe | bVar9);
  self[0x7d8] = VVar3;
  if (bVar9) {
    VVar7 = self[0x7d9];
    uStack_38 = 0xbf800000;
    uStack_34 = 0x3f800000;
    uStack_28 = 0xbf800000;
    uStack_24 = 0x3f800000;
    if (((byte)VVar7 & 0x40) != 0) goto LAB_00474591;
    puVar6 = &uStack_38;
    puVar8 = &uStack_28;
  }
  else {
    VVar7 = self[0x7d9];
    uStack_58 = 0x3f800000;
    uStack_54 = 0x3f800000;
    uStack_48 = 0x3f800000;
    uStack_44 = 0x3f800000;
    if (((byte)VVar7 & 0x40) != 0) goto LAB_00474591;
    puVar8 = &uStack_48;
  }
  MeatBoyCharactor__AddEffect__0047af00((MeatBoyCharactor *)self,3,puVar8,puVar6);
  VVar3 = self[0x7d8];
  VVar7 = self[0x7d9];
LAB_00474591:
  self[0x7d8] = (VVVVVV)((byte)VVar3 & 0xfb);
  self[0x7d9] = (VVVVVV)((byte)VVar7 | 0x20);
  return;
}

/* ======================================================================
 * VVVVVV__WallHit  (Ghidra `WallHit` @ 005193d0)
 * Signature: uint8_t __thiscall WallHit(VVVVVV * self, tagTileCollisionType arg1)
 * Class: VVVVVV
 * Calls: `GetRandomINT`, `MeatBoyCharactor__AddEffect__0047af00`
 * Called by: (none)
 */
/* VVVVVV__WallHit(tagTileCollisionType) */

void __thiscall VVVVVV__WallHit(VVVVVV *self,int arg2)

{
  VVVVVV VVar1;
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
  
  VVar1 = self[0x7d8];
  if (((byte)VVar1 & 4) == 0) {
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
    self[0x7db] = (VVVVVV)((byte)self[0x7db] | 8);
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
  VVar1 = self[0x7d8];
LAB_0047440b:
  *(uint32_t *)(self + 0x7d4) = 9;
  self[0x7d8] = (VVVVVV)((byte)VVar1 | 4);
  return;
}

/* ======================================================================
 * VVVVVV__CreateClones  (Ghidra `CreateClones` @ 005193f0)
 * Signature: uint8_t __thiscall CreateClones(VVVVVV * self)
 * Class: VVVVVV
 * Calls: `FlashAnimationLibrary__GetMovieClip__005731d0`, `MeatBoyCharactor__CreateClones`
 * Called by: (none)
 */
/* VVVVVV__CreateClones() */

void __thiscall VVVVVV__CreateClones(VVVVVV *self)

{
  uint64_t uVar1;
  
  uVar1 = FlashAnimationLibrary__GetMovieClip__005731d0
                    ((FlashAnimationLibrary *)**(uint64_t **)(self + 0xf8),"up");
  *(uint64_t *)(self + 0xaa0) = uVar1;
  uVar1 = FlashAnimationLibrary__GetMovieClip__005731d0
                    ((FlashAnimationLibrary *)**(uint64_t **)(self + 0xf8),"down");
  *(uint64_t *)(self + 0xaa8) = uVar1;
  *(uint32_t *)(*(long *)(self + 0xaa0) + 0x58) = 0x461c3f9a;
  *(uint32_t *)(*(long *)(self + 0xaa8) + 0x58) = 0x461c3f9a;
  MeatBoyCharactor__CreateClones((MeatBoyCharactor *)self);
  return;
}

/* ======================================================================
 * VVVVVV__VVVVVV__00519450  (Ghidra `~VVVVVV` @ 00519450)
 * Signature: uint8_t __thiscall ~VVVVVV(VVVVVV * self)
 * Class: VVVVVV
 * Calls: `MeatBoyCharactor__MeatBoyCharactor__00476510`, `VVVVVV__VVVVVV__00519520`
 * Called by: (none)
 */
/* VVVVVV__VVVVVV__00519520() */

void __thiscall VVVVVV__VVVVVV__00519520(VVVVVV *self)

{
  *(uint8_t ***)self = &PTR__VVVVVV_005c9950;
  MeatBoyCharactor__MeatBoyCharactor__00476510((MeatBoyCharactor *)self);
  return;
}

/* ======================================================================
 * VVVVVV__RenderClones  (Ghidra `RenderClones` @ 00519460)
 * Signature: uint8_t __thiscall RenderClones(VVVVVV * self)
 * Class: VVVVVV
 * Calls: `FlashAnimationLibrary__DisableFlags`, `FlashAnimationLibrary__EnableFlags`, `MeatBoyCharFoundation__Render`
 * Called by: (none)
 */
/* VVVVVV__RenderClones() */

void __thiscall VVVVVV__RenderClones(VVVVVV *self)

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
 * VVVVVV__VVVVVV__00519520  (Ghidra `~VVVVVV` @ 00519520)
 * Signature: uint8_t __thiscall ~VVVVVV(VVVVVV * self)
 * Class: VVVVVV
 * Calls: `MeatBoyCharactor__MeatBoyCharactor__00476510`, `operator_delete`
 * Called by: `VVVVVV__VVVVVV__00519450`
 */
/* VVVVVV__VVVVVV__00519520() */

void __thiscall VVVVVV__VVVVVV__00519520(VVVVVV *self)

{
  *(uint8_t ***)self = &PTR__VVVVVV_005c9950;
  MeatBoyCharactor__MeatBoyCharactor__00476510((MeatBoyCharactor *)self);
  operator_delete(self);
  return;
}

/* ======================================================================
 * VVVVVV__Death  (Ghidra `Death` @ 00519540)
 * Signature: uint8_t __thiscall Death(VVVVVV * self)
 * Class: VVVVVV
 * Calls: `FlashLibraryInstance__Reset`, `MeatBoyCharactor__Death`
 * Called by: (none)
 */
/* VVVVVV__Death() */

void __thiscall VVVVVV__Death(VVVVVV *self)

{
  MeatBoyCharactor__Death((MeatBoyCharactor *)self);
  *(uint32_t *)(self + 0x8c4) = *(uint32_t *)(self + 0xa94);
  *(uint32_t *)(self + 0x8b0) = *(uint32_t *)(self + 0xa98);
  *(uint32_t *)(self + 0x8b4) = *(uint32_t *)(self + 0xa9c);
  FlashLibraryInstance__Reset(*(FlashLibraryInstance **)(self + 0xaa8));
  return;
}

/* ======================================================================
 * VVVVVV__Reset  (Ghidra `Reset` @ 00519580)
 * Signature: uint8_t __thiscall Reset(VVVVVV * self)
 * Class: VVVVVV
 * Calls: `FlashLibraryInstance__Reset`, `MeatBoyCharactor__Reset`
 * Called by: (none)
 */
/* VVVVVV__Reset() */

void __thiscall VVVVVV__Reset(VVVVVV *self)

{
  MeatBoyCharactor__Reset((MeatBoyCharactor *)self);
  *(uint32_t *)(self + 0x8c4) = *(uint32_t *)(self + 0xa94);
  *(uint32_t *)(self + 0x8b0) = *(uint32_t *)(self + 0xa98);
  *(uint32_t *)(self + 0x8b4) = *(uint32_t *)(self + 0xa9c);
  FlashLibraryInstance__Reset(*(FlashLibraryInstance **)(self + 0xaa8));
  return;
}

/* ======================================================================
 * VVVVVV__VVVVVV__00519670  (Ghidra `VVVVVV` @ 00519670)
 * Signature: uint8_t __thiscall VVVVVV(VVVVVV * self)
 * Class: VVVVVV
 * Calls: `FormatResourcePath`, `MeatBoyCharactor__MeatBoyCharactor__0047b350`, `VVVVVV__VVVVVV__005196d0`
 * Called by: (none)
 */
/* VVVVVV__VVVVVV__005196d0() */

void __thiscall VVVVVV__VVVVVV__005196d0(VVVVVV *self)

{
  uint64_t uVar1;
  
  uVar1 = FormatResourcePath("/Animations/vvvvvv.am",&strCharPath);
  MeatBoyCharactor__MeatBoyCharactor__0047b350((MeatBoyCharactor *)self,uVar1,0x13);
  *(uint8_t ***)self = &PTR__VVVVVV_005c9950;
  *(uint32_t *)(self + 0xa54) = 0x13;
  *(uint32_t *)(self + 0xa94) = *(uint32_t *)(self + 0x8c4);
  *(uint32_t *)(self + 0xa98) = *(uint32_t *)(self + 0x8b0);
  *(uint32_t *)(self + 0xa9c) = *(uint32_t *)(self + 0x8b4);
  return;
}

/* ======================================================================
 * VVVVVV__VVVVVV__005196d0  (Ghidra `VVVVVV` @ 005196d0)
 * Signature: uint8_t __thiscall VVVVVV(VVVVVV * self, MeatBoyCharactor * arg1, int arg2)
 * Class: VVVVVV
 * Calls: `MeatBoyCharactor__Clone`, `MeatBoyCharactor__MeatBoyCharactor__0047b350`
 * Called by: `GSMBCharactor__CreateCharactor`, `GSMBCharactor__CreateCharactor__0049c600`, `VVVVVV__VVVVVV`, `VVVVVV__VVVVVV__00519670`
 */
/* VVVVVV__VVVVVV__005196d0(MeatBoyCharactor*, int) */

void __thiscall VVVVVV__VVVVVV__005196d0(VVVVVV *self,MeatBoyCharactor *arg1,int arg2)

{
  MeatBoyCharactor__MeatBoyCharactor__0047b350((MeatBoyCharactor *)self);
  *(uint8_t ***)self = &PTR__VVVVVV_005c9950;
                    /* try { // try from 00519701 to 00519705 has its CatchHandler @ 00519759 */
  MeatBoyCharactor__Clone((MeatBoyCharactor *)self,arg1,arg2);
  *(uint32_t *)(self + 0xa94) = *(uint32_t *)(self + 0x8c4);
  *(uint32_t *)(self + 0xa98) = *(uint32_t *)(self + 0x8b0);
  *(uint32_t *)(self + 0xa9c) = *(uint32_t *)(self + 0x8b4);
  *(uint64_t *)(self + 0xaa0) = *(uint64_t *)(arg1 + 0xaa0);
  *(uint64_t *)(self + 0xaa8) = *(uint64_t *)(arg1 + 0xaa8);
  return;
}
