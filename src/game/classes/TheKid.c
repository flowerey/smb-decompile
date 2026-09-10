/* src/game/classes/TheKid.c — 14 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "TheKid.h"

/* ======================================================================
 * TheKid__CanJump  (Ghidra `CanJump` @ 00518580)
 * Signature: uint8_t __thiscall CanJump(TheKid * self)
 * Class: TheKid
 * Calls: (none)
 * Called by: (none)
 */
/* TheKid__CanJump() */

bool __thiscall TheKid__CanJump(TheKid *self)

{
  if (((byte)self[0x7d8] & 0xa0) != 0xa0) {
    return false;
  }
  return *(int *)(self + 0xa94) < 2;
}

/* ======================================================================
 * TheKid__GroundHit  (Ghidra `GroundHit` @ 005185b0)
 * Signature: uint8_t __thiscall GroundHit(TheKid * self)
 * Class: TheKid
 * Calls: (none)
 * Called by: (none)
 */
/* TheKid__GroundHit() */

void __thiscall TheKid__GroundHit(TheKid *self)

{
  *(uint32_t *)(self + 0xa94) = 0;
  *(uint32_t *)(self + 0xaa0) = 0;
  return;
}

/* ======================================================================
 * TheKid__Death  (Ghidra `Death` @ 005185d0)
 * Signature: uint8_t __thiscall Death(TheKid * self)
 * Class: TheKid
 * Calls: `MeatBoyCharactor__Death`
 * Called by: (none)
 */
/* TheKid__Death() */

void __thiscall TheKid__Death(TheKid *self)

{
  MeatBoyCharactor__Death((MeatBoyCharactor *)self);
  *(uint32_t *)(self + 0xaa0) = 0;
  *(uint32_t *)(self + 0xa94) = 0;
  return;
}

/* ======================================================================
 * TheKid__Reset  (Ghidra `Reset` @ 005185f0)
 * Signature: uint8_t __thiscall Reset(TheKid * self)
 * Class: TheKid
 * Calls: `MeatBoyCharactor__Reset`
 * Called by: (none)
 */
/* TheKid__Reset() */

void __thiscall TheKid__Reset(TheKid *self)

{
  MeatBoyCharactor__Reset((MeatBoyCharactor *)self);
  *(uint32_t *)(self + 0xaa0) = 0;
  *(uint32_t *)(self + 0xa94) = 0;
  return;
}

/* ======================================================================
 * TheKid__Update  (Ghidra `Update` @ 00518610)
 * Signature: uint8_t __thiscall Update(TheKid * self)
 * Class: TheKid
 * Calls: `MeatBoyCharactor__ProcessReplayFrame`, `MeatBoyCharactor__Update`
 * Called by: (none)
 */
/* TheKid__Update() */

void __thiscall TheKid__Update(TheKid *self)

{
  MeatBoyCharactor__ProcessReplayFrame((MeatBoyCharactor *)self);
  MeatBoyCharactor__Update((MeatBoyCharactor *)self);
  return;
}

/* ======================================================================
 * TheKid__WallJump  (Ghidra `WallJump` @ 00518630)
 * Signature: uint8_t __thiscall WallJump(TheKid * self)
 * Class: TheKid
 * Calls: `GetRandomINT`, `MeatBoyCharactor__AddEffect__0047af00`
 * Called by: (none)
 */
/* TheKid__WallJump() */

void __thiscall TheKid__WallJump(TheKid *self)

{
  ushort uVar1;
  long lVar2;
  TheKid TVar3;
  int iVar4;
  uint32_t uVar5;
  uint32_t *puVar6;
  TheKid TVar7;
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
    self[0x7db] = (TheKid)((byte)self[0x7db] | 8);
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
  TVar3 = (TheKid)((byte)self[0x7d8] & 0xfe | bVar9);
  self[0x7d8] = TVar3;
  if (bVar9) {
    TVar7 = self[0x7d9];
    uStack_38 = 0xbf800000;
    uStack_34 = 0x3f800000;
    uStack_28 = 0xbf800000;
    uStack_24 = 0x3f800000;
    if (((byte)TVar7 & 0x40) != 0) goto LAB_00474591;
    puVar6 = &uStack_38;
    puVar8 = &uStack_28;
  }
  else {
    TVar7 = self[0x7d9];
    uStack_58 = 0x3f800000;
    uStack_54 = 0x3f800000;
    uStack_48 = 0x3f800000;
    uStack_44 = 0x3f800000;
    if (((byte)TVar7 & 0x40) != 0) goto LAB_00474591;
    puVar8 = &uStack_48;
  }
  MeatBoyCharactor__AddEffect__0047af00((MeatBoyCharactor *)self,3,puVar8,puVar6);
  TVar3 = self[0x7d8];
  TVar7 = self[0x7d9];
LAB_00474591:
  self[0x7d8] = (TheKid)((byte)TVar3 & 0xfb);
  self[0x7d9] = (TheKid)((byte)TVar7 | 0x20);
  return;
}

/* ======================================================================
 * TheKid__CreateClones  (Ghidra `CreateClones` @ 00518670)
 * Signature: uint8_t __thiscall CreateClones(TheKid * self)
 * Class: TheKid
 * Calls: `FlashAnimationLibrary__GetMovieClip__005731d0`, `MeatBoyCharactor__CreateClones`
 * Called by: (none)
 */
/* TheKid__CreateClones() */

void __thiscall TheKid__CreateClones(TheKid *self)

{
  uint64_t uVar1;
  
  uVar1 = FlashAnimationLibrary__GetMovieClip__005731d0
                    ((FlashAnimationLibrary *)**(uint64_t **)(self + 0xf8),"jump");
  *(uint64_t *)(self + 0xa98) = uVar1;
  MeatBoyCharactor__CreateClones((MeatBoyCharactor *)self);
  return;
}

/* ======================================================================
 * TheKid__TheKid__005186a0  (Ghidra `~TheKid` @ 005186a0)
 * Signature: uint8_t __thiscall ~TheKid(TheKid * self)
 * Class: TheKid
 * Calls: `MeatBoyCharactor__MeatBoyCharactor__00476510`, `TheKid__TheKid__00518910`
 * Called by: (none)
 */
/* TheKid__TheKid__00518910() */

void __thiscall TheKid__TheKid__00518910(TheKid *self)

{
  *(uint8_t ***)self = &PTR__TheKid_005c96d0;
  if ((*(int *)(self + 0xa40) == 0) && (*(long **)(self + 0xa98) != (long *)0x0)) {
                    /* try { // try from 005186c8 to 005186ca has its CatchHandler @ 005186d8 */
    (**(code **)(**(long **)(self + 0xa98) + 8))();
  }
  MeatBoyCharactor__MeatBoyCharactor__00476510((MeatBoyCharactor *)self);
  return;
}

/* ======================================================================
 * TheKid__Jump  (Ghidra `Jump` @ 00518700)
 * Signature: uint8_t __thiscall Jump(TheKid * self)
 * Class: TheKid
 * Calls: `MeatBoyCharactor__Jump`
 * Called by: (none)
 */
/* TheKid__Jump() */

void __thiscall TheKid__Jump(TheKid *self)

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
 * TheKid__Render  (Ghidra `Render` @ 00518750)
 * Signature: uint8_t __thiscall Render(TheKid * self)
 * Class: TheKid
 * Calls: `FlashLibraryInstance__IsPlaying`, `MeatBoyCharFoundation__Render`, `MeatBoyCharactor__Render`
 * Called by: (none)
 */
/* TheKid__Render() */

void __thiscall TheKid__Render(TheKid *self)

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
 * TheKid__RenderClones  (Ghidra `RenderClones` @ 005187d0)
 * Signature: uint8_t __thiscall RenderClones(TheKid * self)
 * Class: TheKid
 * Calls: `FlashAnimationLibrary__DisableFlags`, `FlashAnimationLibrary__EnableFlags`, `FlashLibraryInstance__IsPlaying`, `MeatBoyCharFoundation__Render`
 * Called by: (none)
 */
/* TheKid__RenderClones() */

void __thiscall TheKid__RenderClones(TheKid *self)

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
 * TheKid__TheKid__00518910  (Ghidra `~TheKid` @ 00518910)
 * Signature: uint8_t __thiscall ~TheKid(TheKid * self)
 * Class: TheKid
 * Calls: `MeatBoyCharactor__MeatBoyCharactor__00476510`, `operator_delete`
 * Called by: `TheKid__TheKid__005186a0`
 */
/* TheKid__TheKid__00518910() */

void __thiscall TheKid__TheKid__00518910(TheKid *self)

{
  *(uint8_t ***)self = &PTR__TheKid_005c96d0;
  if ((*(int *)(self + 0xa40) == 0) && (*(long **)(self + 0xa98) != (long *)0x0)) {
                    /* try { // try from 00518938 to 0051893a has its CatchHandler @ 00518950 */
    (**(code **)(**(long **)(self + 0xa98) + 8))();
  }
  MeatBoyCharactor__MeatBoyCharactor__00476510((MeatBoyCharactor *)self);
  operator_delete(self);
  return;
}

/* ======================================================================
 * TheKid__TheKid__00518970  (Ghidra `TheKid` @ 00518970)
 * Signature: uint8_t __thiscall TheKid(TheKid * self)
 * Class: TheKid
 * Calls: `FormatResourcePath`, `MeatBoyCharactor__MeatBoyCharactor__0047b350`, `TheKid__TheKid__005189d0`
 * Called by: (none)
 */
/* TheKid__TheKid__005189d0() */

void __thiscall TheKid__TheKid__005189d0(TheKid *self)

{
  uint64_t uVar1;
  
  uVar1 = FormatResourcePath("/Animations/kid.am",&strCharPath);
  MeatBoyCharactor__MeatBoyCharactor__0047b350((MeatBoyCharactor *)self,uVar1,0x16);
  *(uint8_t ***)self = &PTR__TheKid_005c96d0;
  *(uint32_t *)(self + 0xa94) = 0;
  *(uint32_t *)(self + 0xaa0) = 0;
  *(uint32_t *)(self + 0xaa4) = 0;
  *(uint32_t *)(self + 0xa54) = 0x16;
  return;
}

/* ======================================================================
 * TheKid__TheKid__005189d0  (Ghidra `TheKid` @ 005189d0)
 * Signature: uint8_t __thiscall TheKid(TheKid * self, MeatBoyCharactor * arg1, int arg2)
 * Class: TheKid
 * Calls: `MeatBoyCharactor__Clone`, `MeatBoyCharactor__MeatBoyCharactor__0047b350`
 * Called by: `GSMBCharactor__CreateCharactor`, `GSMBCharactor__CreateCharactor__0049c600`, `TheKid__TheKid`, `TheKid__TheKid__00518970`
 */
/* TheKid__TheKid__005189d0(MeatBoyCharactor*, int) */

void __thiscall TheKid__TheKid__005189d0(TheKid *self,MeatBoyCharactor *arg1,int arg2)

{
  MeatBoyCharactor__MeatBoyCharactor__0047b350((MeatBoyCharactor *)self);
  *(uint8_t ***)self = &PTR__TheKid_005c96d0;
  *(uint32_t *)(self + 0xaa0) = 0;
  *(uint32_t *)(self + 0xaa4) = 0;
                    /* try { // try from 00518a16 to 00518a1a has its CatchHandler @ 00518a3c */
  MeatBoyCharactor__Clone((MeatBoyCharactor *)self,arg1,arg2);
  *(uint64_t *)(self + 0xa98) = *(uint64_t *)(arg1 + 0xa98);
  return;
}
