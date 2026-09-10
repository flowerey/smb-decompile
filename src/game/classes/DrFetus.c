/* src/game/classes/DrFetus.c — 21 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "DrFetus.h"

/* ======================================================================
 * DrFetus__RecordSpecial  (Ghidra `RecordSpecial` @ 00465ba0)
 * Signature: uint8_t __thiscall RecordSpecial(DrFetus * self)
 * Class: DrFetus
 * Calls: (none)
 * Called by: (none)
 */
/* DrFetus__RecordSpecial() */

void __thiscall DrFetus__RecordSpecial(DrFetus *self)

{
  long lVar1;
  
  lVar1 = *(long *)(self + 0x7e0);
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 3) = *(byte *)(lVar1 + 3) & 0xbf | (byte)((*(uint *)(self + 0xab8) & 1) << 6);
  }
  return;
}

/* ======================================================================
 * DrFetus__CanDie  (Ghidra `CanDie` @ 00465bd0)
 * Signature: uint8_t __stdcall CanDie(void)
 * Class: DrFetus
 * Calls: (none)
 * Called by: (none)
 */
/* DrFetus__CanDie() */

uint64_t DrFetus__CanDie(void)

{
  return 0;
}

/* ======================================================================
 * DrFetus__WallJump  (Ghidra `WallJump` @ 00465be0)
 * Signature: uint8_t __thiscall WallJump(DrFetus * self)
 * Class: DrFetus
 * Calls: `GetRandomINT`, `MeatBoyCharactor__AddEffect__0047af00`
 * Called by: (none)
 */
/* DrFetus__WallJump() */

void __thiscall DrFetus__WallJump(DrFetus *self)

{
  ushort uVar1;
  long lVar2;
  DrFetus DVar3;
  int iVar4;
  uint32_t uVar5;
  uint32_t *puVar6;
  DrFetus DVar7;
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
    self[0x7db] = (DrFetus)((byte)self[0x7db] | 8);
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
  DVar3 = (DrFetus)((byte)self[0x7d8] & 0xfe | bVar9);
  self[0x7d8] = DVar3;
  if (bVar9) {
    DVar7 = self[0x7d9];
    uStack_38 = 0xbf800000;
    uStack_34 = 0x3f800000;
    uStack_28 = 0xbf800000;
    uStack_24 = 0x3f800000;
    if (((byte)DVar7 & 0x40) != 0) goto LAB_00474591;
    puVar6 = &uStack_38;
    puVar8 = &uStack_28;
  }
  else {
    DVar7 = self[0x7d9];
    uStack_58 = 0x3f800000;
    uStack_54 = 0x3f800000;
    uStack_48 = 0x3f800000;
    uStack_44 = 0x3f800000;
    if (((byte)DVar7 & 0x40) != 0) goto LAB_00474591;
    puVar8 = &uStack_48;
  }
  MeatBoyCharactor__AddEffect__0047af00((MeatBoyCharactor *)self,3,puVar8,puVar6);
  DVar3 = self[0x7d8];
  DVar7 = self[0x7d9];
LAB_00474591:
  self[0x7d8] = (DrFetus)((byte)DVar3 & 0xfb);
  self[0x7d9] = (DrFetus)((byte)DVar7 | 0x20);
  return;
}

/* ======================================================================
 * DrFetus__WallHit  (Ghidra `WallHit` @ 00465bf0)
 * Signature: uint8_t __thiscall WallHit(DrFetus * self, tagTileCollisionType arg1)
 * Class: DrFetus
 * Calls: `GetRandomINT`, `MeatBoyCharactor__AddEffect__0047af00`
 * Called by: (none)
 */
/* DrFetus__WallHit(tagTileCollisionType) */

void __thiscall DrFetus__WallHit(DrFetus *self,int arg2)

{
  DrFetus DVar1;
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
  
  DVar1 = self[0x7d8];
  if (((byte)DVar1 & 4) == 0) {
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
    self[0x7db] = (DrFetus)((byte)self[0x7db] | 8);
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
  DVar1 = self[0x7d8];
LAB_0047440b:
  *(uint32_t *)(self + 0x7d4) = 9;
  self[0x7d8] = (DrFetus)((byte)DVar1 | 4);
  return;
}

/* ======================================================================
 * DrFetus__CreateClones  (Ghidra `CreateClones` @ 00465c00)
 * Signature: uint8_t __thiscall CreateClones(DrFetus * self)
 * Class: DrFetus
 * Calls: `FlashAnimationLibrary__GetMovieClip__005731d0`, `MeatBoyCharactor__CreateClones`
 * Called by: (none)
 */
/* DrFetus__CreateClones() */

void __thiscall DrFetus__CreateClones(DrFetus *self)

{
  uint64_t uVar1;
  
  uVar1 = FlashAnimationLibrary__GetMovieClip__005731d0
                    ((FlashAnimationLibrary *)**(uint64_t **)(self + 0xf8),"shoot");
  *(uint64_t *)(self + 0xa98) = uVar1;
  uVar1 = FlashAnimationLibrary__GetMovieClip__005731d0
                    ((FlashAnimationLibrary *)**(uint64_t **)(self + 0xf8),"missile");
  *(uint64_t *)(self + 0xaa0) = uVar1;
  uVar1 = FlashAnimationLibrary__GetMovieClip__005731d0
                    ((FlashAnimationLibrary *)**(uint64_t **)(self + 0xf8),"explosion");
  *(uint64_t *)(self + 0xaa8) = uVar1;
  MeatBoyCharactor__CreateClones((MeatBoyCharactor *)self);
  return;
}

/* ======================================================================
 * DrFetus__DrFetus__00465c60  (Ghidra `~DrFetus` @ 00465c60)
 * Signature: uint8_t __thiscall ~DrFetus(DrFetus * self)
 * Class: DrFetus
 * Calls: `DrFetus__DrFetus__00465d40`, `MeatBoyCharactor__MeatBoyCharactor__00476510`, `SceneObject2D__SceneObject2D__0059b220`
 * Called by: (none)
 */
/* DrFetus__DrFetus__00465d40() */

void __thiscall DrFetus__DrFetus__00465d40(DrFetus *self)

{
  DrFetus *pDVar1;
  DrFetus *pDVar2;
  
  *(uint8_t ***)self = &PTR__DrFetus_005bf610;
  if (*(int *)(self + 0xa40) == 0) {
    if (*(long **)(self + 0xa98) != (long *)0x0) {
                    /* try { // try from 00465c8d to 00465cb5 has its CatchHandler @ 00465cf7 */
      (**(code **)(**(long **)(self + 0xa98) + 8))();
    }
    if (*(long **)(self + 0xaa0) != (long *)0x0) {
      (**(code **)(**(long **)(self + 0xaa0) + 8))();
    }
    if (*(long **)(self + 0xaa8) != (long *)0x0) {
      (**(code **)(**(long **)(self + 0xaa8) + 8))();
    }
  }
  pDVar2 = self + 0x14c0;
  do {
    pDVar1 = pDVar2 + -0x100;
                    /* try { // try from 00465cdb to 00465cdf has its CatchHandler @ 00465d21 */
    SceneObject2D__SceneObject2D__0059b220((SceneObject2D *)(pDVar2 + -0xf8));
    pDVar2 = pDVar1;
  } while (self + 0xac0 != pDVar1);
  MeatBoyCharactor__MeatBoyCharactor__00476510((MeatBoyCharactor *)self);
  return;
}

/* ======================================================================
 * DrFetus__DrFetus__00465d40  (Ghidra `~DrFetus` @ 00465d40)
 * Signature: uint8_t __thiscall ~DrFetus(DrFetus * self)
 * Class: DrFetus
 * Calls: `operator_delete`
 * Called by: `DrFetus__DrFetus__00465c60`
 */
/* DrFetus__DrFetus__00465d40() */

void __thiscall DrFetus__DrFetus__00465d40(DrFetus *self)

{
  DrFetus__dtor(self);
  operator_delete(self);
  return;
}

/* ======================================================================
 * DrFetus__Reset  (Ghidra `Reset` @ 00465d60)
 * Signature: uint8_t __thiscall Reset(DrFetus * self)
 * Class: DrFetus
 * Calls: `MeatBoyCharactor__Reset`
 * Called by: (none)
 */
/* DrFetus__Reset() */

void __thiscall DrFetus__Reset(DrFetus *self)

{
  long lVar1;
  int iVar2;
  
  *(uint32_t *)(self + 0xab0) = 0;
  MeatBoyCharactor__Reset((MeatBoyCharactor *)self);
  *(uint32_t *)(self + 0xac0) = 2;
  *(uint32_t *)(self + 0xbc0) = 2;
  *(uint32_t *)(self + 0xcc0) = 2;
  *(uint32_t *)(self + 0xdc0) = 2;
  *(uint32_t *)(self + 0xec0) = 2;
  *(uint32_t *)(self + 0xfc0) = 2;
  *(uint32_t *)(self + 0x10c0) = 2;
  *(uint32_t *)(self + 0x11c0) = 2;
  *(uint32_t *)(self + 0x12c0) = 2;
  *(uint32_t *)(self + 0x13c0) = 2;
  if ((*(int *)(self + 0xa40) == 0) && (0 < *(int *)(*(long *)(self + 0xa38) + 0x34))) {
    iVar2 = 0;
    do {
      lVar1 = (long)iVar2;
      iVar2 = iVar2 + 1;
      lVar1 = *(long *)(*(long *)(self + 0x7f0) + lVar1 * 8);
      *(uint32_t *)(lVar1 + 0xac0) = 2;
      *(uint32_t *)(lVar1 + 0xbc0) = 2;
      *(uint32_t *)(lVar1 + 0xcc0) = 2;
      *(uint32_t *)(lVar1 + 0xdc0) = 2;
      *(uint32_t *)(lVar1 + 0xec0) = 2;
      *(uint32_t *)(lVar1 + 0xfc0) = 2;
      *(uint32_t *)(lVar1 + 0x10c0) = 2;
      *(uint32_t *)(lVar1 + 0x11c0) = 2;
      *(uint32_t *)(lVar1 + 0x12c0) = 2;
      *(uint32_t *)(lVar1 + 0x13c0) = 2;
    } while (iVar2 < *(int *)(*(long *)(self + 0xa38) + 0x34));
  }
  return;
}

/* ======================================================================
 * DrFetus__ProcessSpecial  (Ghidra `ProcessSpecial` @ 00465e90)
 * Signature: uint8_t __thiscall ProcessSpecial(DrFetus * self)
 * Class: DrFetus
 * Calls: `Vector2__operator_assign`
 * Called by: (none)
 */
/* DrFetus__ProcessSpecial() */

void __thiscall DrFetus__ProcessSpecial(DrFetus *self)

{
  DrFetus *pDVar1;
  uint uVar2;
  int iVar3;
  uint32_t local_38;
  uint32_t local_34;
  uint32_t local_28;
  uint32_t local_24;
  
  iVar3 = *(int *)(self + 0xab8);
  uVar2 = *(byte *)(*(long *)(self + 0x7e0) + 3) >> 6 & 1;
  *(uint *)(self + 0xab8) = uVar2;
  if ((iVar3 != 0) || ((char)uVar2 == '\0')) {
    return;
  }
  if (*(int *)(self + 0xac0) == 2) {
    iVar3 = 0;
  }
  else if (*(int *)(self + 0xbc0) == 2) {
    iVar3 = 1;
  }
  else if (*(int *)(self + 0xcc0) == 2) {
    iVar3 = 2;
  }
  else if (*(int *)(self + 0xdc0) == 2) {
    iVar3 = 3;
  }
  else if (*(int *)(self + 0xec0) == 2) {
    iVar3 = 4;
  }
  else if (*(int *)(self + 0xfc0) == 2) {
    iVar3 = 5;
  }
  else if (*(int *)(self + 0x10c0) == 2) {
    iVar3 = 6;
  }
  else if (*(int *)(self + 0x11c0) == 2) {
    iVar3 = 7;
  }
  else if (*(int *)(self + 0x12c0) == 2) {
    iVar3 = 8;
  }
  else {
    iVar3 = 9;
    if (*(int *)(self + 0x13c0) != 2) goto LAB_00465f4b;
  }
  pDVar1 = self + (long)iVar3 * 0x100 + 0xac0;
  *(uint32_t *)(pDVar1 + 0xa4) = 1;
  Vector2__operator_assign((Vector2 *)(pDVar1 + 0xa8),(Vector2 *)(self + 0xa0));
  if (((byte)self[0x7d8] & 1) == 0) {
    local_38 = 0x43fa0000;
    local_34 = 0;
    Vector2__operator_assign((Vector2 *)(pDVar1 + 0xc0),(Vector2 *)&local_38);
  }
  else {
    local_28 = 0xc3fa0000;
    local_24 = 0;
    Vector2__operator_assign((Vector2 *)(pDVar1 + 0xc0),(Vector2 *)&local_28);
  }
  *(uint32_t *)pDVar1 = 0;
LAB_00465f4b:
  *(uint32_t *)(self + 0xab4) = 0;
  *(uint32_t *)(*(long *)(self + 0xa98) + 0x58) = 0;
  *(uint32_t *)(self + 0xab8) = 0;
  return;
}

/* ======================================================================
 * DrFetus__DrFetus__00466250  (Ghidra `DrFetus` @ 00466250)
 * Signature: uint8_t __thiscall DrFetus(DrFetus * self)
 * Class: DrFetus
 * Calls: `CriticalSection__CriticalSection`, `DrFetus__DrFetus__00466f80`, `FormatResourcePath`, `MeatBoyCharactor__MeatBoyCharactor__0047b350`
 * Called by: (none)
 */
/* DrFetus__DrFetus__00466f80() */

void __thiscall DrFetus__DrFetus__00466f80(DrFetus *self)

{
  uint64_t uVar1;
  
  uVar1 = FormatResourcePath("/Animations/drfetus.am",&strCharPath);
  MeatBoyCharactor__MeatBoyCharactor__0047b350((MeatBoyCharactor *)self,uVar1,4);
  *(uint8_t ***)self = &PTR__DrFetus_005bf610;
  *(uint32_t *)(self + 0xac0) = 2;
  *(uint64_t *)(self + 0xb10) = 0;
  *(uint32_t *)(self + 0xb18) = 1;
  *(uint8_t ***)(self + 0xac8) = &PTR__SceneObject2D_005dd3d0;
                    /* try { // try from 004662ba to 004662be has its CatchHandler @ 00466ecf */
  CriticalSection__CriticalSection((CriticalSection *)(self + 0xb20));
  uVar1 = vDefaultStart2D;
  *(uint32_t *)(self + 0xb48) = 0;
  *(uint32_t *)(self + 0xb4c) = 0;
  *(uint32_t *)(self + 0xb50) = 0x3f800000;
  *(uint32_t *)(self + 0xb54) = 0;
  *(uint32_t *)(self + 0xb58) = 0;
  *(uint32_t *)(self + 0xb5c) = 0;
  *(uint32_t *)(self + 0xb60) = 0;
  *(uint32_t *)(self + 0xb64) = 1;
  *(uint64_t *)(self + 0xb68) = uVar1;
  *(uint64_t *)(self + 0xb70) = uVar1;
  *(uint32_t *)(self + 0xb78) = 0;
  *(uint32_t *)(self + 0xb7c) = 0;
  *(uint32_t *)(self + 0xb80) = 0;
  *(uint32_t *)(self + 0xb84) = 0;
  *(uint32_t *)(self + 0xb90) = 0;
  *(uint32_t *)(self + 0xb94) = 0;
  *(uint32_t *)(self + 0xb98) = 0x3f800000;
  *(uint32_t *)(self + 0xb9c) = 0x3f800000;
  *(uint32_t *)(self + 0xba0) = 0;
  *(uint32_t *)(self + 0xba4) = 0;
  *(uint32_t *)(self + 0xba8) = 0;
  *(uint32_t *)(self + 0xbac) = 0;
  *(uint32_t *)(self + 0xbb0) = 0;
  *(uint32_t *)(self + 0xbb4) = 0;
  *(uint32_t *)(self + 3000) = 0;
  *(uint32_t *)(self + 0xbc0) = 2;
  *(uint64_t *)(self + 0xc10) = 0;
  *(uint32_t *)(self + 0xc18) = 1;
  *(uint8_t ***)(self + 0xbc8) = &PTR__SceneObject2D_005dd3d0;
                    /* try { // try from 004663f2 to 004663f6 has its CatchHandler @ 00466f6f */
  CriticalSection__CriticalSection((CriticalSection *)(self + 0xc20));
  uVar1 = vDefaultStart2D;
  *(uint32_t *)(self + 0xc48) = 0;
  *(uint32_t *)(self + 0xc4c) = 0;
  *(uint32_t *)(self + 0xc50) = 0x3f800000;
  *(uint32_t *)(self + 0xc54) = 0;
  *(uint32_t *)(self + 0xc58) = 0;
  *(uint32_t *)(self + 0xc5c) = 0;
  *(uint32_t *)(self + 0xc60) = 0;
  *(uint32_t *)(self + 0xc64) = 1;
  *(uint64_t *)(self + 0xc68) = uVar1;
  *(uint64_t *)(self + 0xc70) = uVar1;
  *(uint32_t *)(self + 0xc78) = 0;
  *(uint32_t *)(self + 0xc7c) = 0;
  *(uint32_t *)(self + 0xc80) = 0;
  *(uint32_t *)(self + 0xc84) = 0;
  *(uint32_t *)(self + 0xc90) = 0;
  *(uint32_t *)(self + 0xc94) = 0;
  *(uint32_t *)(self + 0xc98) = 0x3f800000;
  *(uint32_t *)(self + 0xc9c) = 0x3f800000;
  *(uint32_t *)(self + 0xca0) = 0;
  *(uint32_t *)(self + 0xca4) = 0;
  *(uint32_t *)(self + 0xca8) = 0;
  *(uint32_t *)(self + 0xcac) = 0;
  *(uint32_t *)(self + 0xcb0) = 0;
  *(uint32_t *)(self + 0xcb4) = 0;
  *(uint32_t *)(self + 0xcb8) = 0;
  *(uint32_t *)(self + 0xcc0) = 2;
  *(uint64_t *)(self + 0xd10) = 0;
  *(uint32_t *)(self + 0xd18) = 1;
  *(uint8_t ***)(self + 0xcc8) = &PTR__SceneObject2D_005dd3d0;
                    /* try { // try from 0046652a to 0046652e has its CatchHandler @ 00466f65 */
  CriticalSection__CriticalSection((CriticalSection *)(self + 0xd20));
  uVar1 = vDefaultStart2D;
  *(uint32_t *)(self + 0xd48) = 0;
  *(uint32_t *)(self + 0xd4c) = 0;
  *(uint32_t *)(self + 0xd50) = 0x3f800000;
  *(uint32_t *)(self + 0xd54) = 0;
  *(uint32_t *)(self + 0xd58) = 0;
  *(uint32_t *)(self + 0xd5c) = 0;
  *(uint32_t *)(self + 0xd60) = 0;
  *(uint32_t *)(self + 0xd64) = 1;
  *(uint64_t *)(self + 0xd68) = uVar1;
  *(uint64_t *)(self + 0xd70) = uVar1;
  *(uint32_t *)(self + 0xd78) = 0;
  *(uint32_t *)(self + 0xd7c) = 0;
  *(uint32_t *)(self + 0xd80) = 0;
  *(uint32_t *)(self + 0xd84) = 0;
  *(uint32_t *)(self + 0xd90) = 0;
  *(uint32_t *)(self + 0xd94) = 0;
  *(uint32_t *)(self + 0xd98) = 0x3f800000;
  *(uint32_t *)(self + 0xd9c) = 0x3f800000;
  *(uint32_t *)(self + 0xda0) = 0;
  *(uint32_t *)(self + 0xda4) = 0;
  *(uint32_t *)(self + 0xda8) = 0;
  *(uint32_t *)(self + 0xdac) = 0;
  *(uint32_t *)(self + 0xdb0) = 0;
  *(uint32_t *)(self + 0xdb4) = 0;
  *(uint32_t *)(self + 0xdb8) = 0;
  *(uint32_t *)(self + 0xdc0) = 2;
  *(uint64_t *)(self + 0xe10) = 0;
  *(uint32_t *)(self + 0xe18) = 1;
  *(uint8_t ***)(self + 0xdc8) = &PTR__SceneObject2D_005dd3d0;
                    /* try { // try from 00466662 to 00466666 has its CatchHandler @ 00466f5b */
  CriticalSection__CriticalSection((CriticalSection *)(self + 0xe20));
  uVar1 = vDefaultStart2D;
  *(uint32_t *)(self + 0xe48) = 0;
  *(uint32_t *)(self + 0xe4c) = 0;
  *(uint32_t *)(self + 0xe50) = 0x3f800000;
  *(uint32_t *)(self + 0xe54) = 0;
  *(uint32_t *)(self + 0xe58) = 0;
  *(uint32_t *)(self + 0xe5c) = 0;
  *(uint32_t *)(self + 0xe60) = 0;
  *(uint32_t *)(self + 0xe64) = 1;
  *(uint64_t *)(self + 0xe68) = uVar1;
  *(uint64_t *)(self + 0xe70) = uVar1;
  *(uint32_t *)(self + 0xe78) = 0;
  *(uint32_t *)(self + 0xe7c) = 0;
  *(uint32_t *)(self + 0xe80) = 0;
  *(uint32_t *)(self + 0xe84) = 0;
  *(uint32_t *)(self + 0xe90) = 0;
  *(uint32_t *)(self + 0xe94) = 0;
  *(uint32_t *)(self + 0xe98) = 0x3f800000;
  *(uint32_t *)(self + 0xe9c) = 0x3f800000;
  *(uint32_t *)(self + 0xea0) = 0;
  *(uint32_t *)(self + 0xea4) = 0;
  *(uint32_t *)(self + 0xea8) = 0;
  *(uint32_t *)(self + 0xeac) = 0;
  *(uint32_t *)(self + 0xeb0) = 0;
  *(uint32_t *)(self + 0xeb4) = 0;
  *(uint32_t *)(self + 0xeb8) = 0;
  *(uint32_t *)(self + 0xec0) = 2;
  *(uint64_t *)(self + 0xf10) = 0;
  *(uint32_t *)(self + 0xf18) = 1;
  *(uint8_t ***)(self + 0xec8) = &PTR__SceneObject2D_005dd3d0;
                    /* try { // try from 0046679a to 0046679e has its CatchHandler @ 00466f51 */
  CriticalSection__CriticalSection((CriticalSection *)(self + 0xf20));
  uVar1 = vDefaultStart2D;
  *(uint32_t *)(self + 0xf48) = 0;
  *(uint32_t *)(self + 0xf4c) = 0;
  *(uint32_t *)(self + 0xf50) = 0x3f800000;
  *(uint32_t *)(self + 0xf54) = 0;
  *(uint32_t *)(self + 0xf58) = 0;
  *(uint32_t *)(self + 0xf5c) = 0;
  *(uint32_t *)(self + 0xf60) = 0;
  *(uint32_t *)(self + 0xf64) = 1;
  *(uint64_t *)(self + 0xf68) = uVar1;
  *(uint64_t *)(self + 0xf70) = uVar1;
  *(uint32_t *)(self + 0xf78) = 0;
  *(uint32_t *)(self + 0xf7c) = 0;
  *(uint32_t *)(self + 0xf80) = 0;
  *(uint32_t *)(self + 0xf84) = 0;
  *(uint32_t *)(self + 0xf90) = 0;
  *(uint32_t *)(self + 0xf94) = 0;
  *(uint32_t *)(self + 0xf98) = 0x3f800000;
  *(uint32_t *)(self + 0xf9c) = 0x3f800000;
  *(uint32_t *)(self + 4000) = 0;
  *(uint32_t *)(self + 0xfa4) = 0;
  *(uint32_t *)(self + 0xfa8) = 0;
  *(uint32_t *)(self + 0xfac) = 0;
  *(uint32_t *)(self + 0xfb0) = 0;
  *(uint32_t *)(self + 0xfb4) = 0;
  *(uint32_t *)(self + 0xfb8) = 0;
  *(uint32_t *)(self + 0xfc0) = 2;
  *(uint64_t *)(self + 0x1010) = 0;
  *(uint32_t *)(self + 0x1018) = 1;
  *(uint8_t ***)(self + 0xfc8) = &PTR__SceneObject2D_005dd3d0;
                    /* try { // try from 004668d2 to 004668d6 has its CatchHandler @ 00466f4a */
  CriticalSection__CriticalSection((CriticalSection *)(self + 0x1020));
  uVar1 = vDefaultStart2D;
  *(uint32_t *)(self + 0x1048) = 0;
  *(uint32_t *)(self + 0x104c) = 0;
  *(uint32_t *)(self + 0x1050) = 0x3f800000;
  *(uint32_t *)(self + 0x1054) = 0;
  *(uint32_t *)(self + 0x1058) = 0;
  *(uint32_t *)(self + 0x105c) = 0;
  *(uint32_t *)(self + 0x1060) = 0;
  *(uint32_t *)(self + 0x1064) = 1;
  *(uint64_t *)(self + 0x1068) = uVar1;
  *(uint64_t *)(self + 0x1070) = uVar1;
  *(uint32_t *)(self + 0x1078) = 0;
  *(uint32_t *)(self + 0x107c) = 0;
  *(uint32_t *)(self + 0x1080) = 0;
  *(uint32_t *)(self + 0x1084) = 0;
  *(uint32_t *)(self + 0x1090) = 0;
  *(uint32_t *)(self + 0x1094) = 0;
  *(uint32_t *)(self + 0x1098) = 0x3f800000;
  *(uint32_t *)(self + 0x109c) = 0x3f800000;
  *(uint32_t *)(self + 0x10a0) = 0;
  *(uint32_t *)(self + 0x10a4) = 0;
  *(uint32_t *)(self + 0x10a8) = 0;
  *(uint32_t *)(self + 0x10ac) = 0;
  *(uint32_t *)(self + 0x10b0) = 0;
  *(uint32_t *)(self + 0x10b4) = 0;
  *(uint32_t *)(self + 0x10b8) = 0;
  *(uint32_t *)(self + 0x10c0) = 2;
  *(uint64_t *)(self + 0x1110) = 0;
  *(uint32_t *)(self + 0x1118) = 1;
  *(uint8_t ***)(self + 0x10c8) = &PTR__SceneObject2D_005dd3d0;
                    /* try { // try from 00466a0a to 00466a0e has its CatchHandler @ 00466f43 */
  CriticalSection__CriticalSection((CriticalSection *)(self + 0x1120));
  uVar1 = vDefaultStart2D;
  *(uint32_t *)(self + 0x1148) = 0;
  *(uint32_t *)(self + 0x114c) = 0;
  *(uint32_t *)(self + 0x1150) = 0x3f800000;
  *(uint32_t *)(self + 0x1154) = 0;
  *(uint32_t *)(self + 0x1158) = 0;
  *(uint32_t *)(self + 0x115c) = 0;
  *(uint32_t *)(self + 0x1160) = 0;
  *(uint32_t *)(self + 0x1164) = 1;
  *(uint64_t *)(self + 0x1168) = uVar1;
  *(uint64_t *)(self + 0x1170) = uVar1;
  *(uint32_t *)(self + 0x1178) = 0;
  *(uint32_t *)(self + 0x117c) = 0;
  *(uint32_t *)(self + 0x1180) = 0;
  *(uint32_t *)(self + 0x1184) = 0;
  *(uint32_t *)(self + 0x1190) = 0;
  *(uint32_t *)(self + 0x1194) = 0;
  *(uint32_t *)(self + 0x1198) = 0x3f800000;
  *(uint32_t *)(self + 0x119c) = 0x3f800000;
  *(uint32_t *)(self + 0x11a0) = 0;
  *(uint32_t *)(self + 0x11a4) = 0;
  *(uint32_t *)(self + 0x11a8) = 0;
  *(uint32_t *)(self + 0x11ac) = 0;
  *(uint32_t *)(self + 0x11b0) = 0;
  *(uint32_t *)(self + 0x11b4) = 0;
  *(uint32_t *)(self + 0x11b8) = 0;
  *(uint32_t *)(self + 0x11c0) = 2;
  *(uint64_t *)(self + 0x1210) = 0;
  *(uint32_t *)(self + 0x1218) = 1;
  *(uint8_t ***)(self + 0x11c8) = &PTR__SceneObject2D_005dd3d0;
                    /* try { // try from 00466b42 to 00466b46 has its CatchHandler @ 00466f3c */
  CriticalSection__CriticalSection((CriticalSection *)(self + 0x1220));
  uVar1 = vDefaultStart2D;
  *(uint32_t *)(self + 0x1248) = 0;
  *(uint32_t *)(self + 0x124c) = 0;
  *(uint32_t *)(self + 0x1250) = 0x3f800000;
  *(uint32_t *)(self + 0x1254) = 0;
  *(uint32_t *)(self + 0x1258) = 0;
  *(uint32_t *)(self + 0x125c) = 0;
  *(uint32_t *)(self + 0x1260) = 0;
  *(uint32_t *)(self + 0x1264) = 1;
  *(uint64_t *)(self + 0x1268) = uVar1;
  *(uint64_t *)(self + 0x1270) = uVar1;
  *(uint32_t *)(self + 0x1278) = 0;
  *(uint32_t *)(self + 0x127c) = 0;
  *(uint32_t *)(self + 0x1280) = 0;
  *(uint32_t *)(self + 0x1284) = 0;
  *(uint32_t *)(self + 0x1290) = 0;
  *(uint32_t *)(self + 0x1294) = 0;
  *(uint32_t *)(self + 0x1298) = 0x3f800000;
  *(uint32_t *)(self + 0x129c) = 0x3f800000;
  *(uint32_t *)(self + 0x12a0) = 0;
  *(uint32_t *)(self + 0x12a4) = 0;
  *(uint32_t *)(self + 0x12a8) = 0;
  *(uint32_t *)(self + 0x12ac) = 0;
  *(uint32_t *)(self + 0x12b0) = 0;
  *(uint32_t *)(self + 0x12b4) = 0;
  *(uint32_t *)(self + 0x12b8) = 0;
  *(uint32_t *)(self + 0x12c0) = 2;
  *(uint64_t *)(self + 0x1310) = 0;
  *(uint32_t *)(self + 0x1318) = 1;
  *(uint8_t ***)(self + 0x12c8) = &PTR__SceneObject2D_005dd3d0;
                    /* try { // try from 00466c7a to 00466c7e has its CatchHandler @ 00466f35 */
  CriticalSection__CriticalSection((CriticalSection *)(self + 0x1320));
  uVar1 = vDefaultStart2D;
  *(uint32_t *)(self + 0x1348) = 0;
  *(uint32_t *)(self + 0x134c) = 0;
  *(uint32_t *)(self + 0x1350) = 0x3f800000;
  *(uint32_t *)(self + 0x1354) = 0;
  *(uint32_t *)(self + 0x1358) = 0;
  *(uint32_t *)(self + 0x135c) = 0;
  *(uint32_t *)(self + 0x1360) = 0;
  *(uint32_t *)(self + 0x1364) = 1;
  *(uint64_t *)(self + 0x1368) = uVar1;
  *(uint64_t *)(self + 0x1370) = uVar1;
  *(uint32_t *)(self + 0x1378) = 0;
  *(uint32_t *)(self + 0x137c) = 0;
  *(uint32_t *)(self + 0x1380) = 0;
  *(uint32_t *)(self + 0x1384) = 0;
  *(uint32_t *)(self + 0x1390) = 0;
  *(uint32_t *)(self + 0x1394) = 0;
  *(uint32_t *)(self + 0x1398) = 0x3f800000;
  *(uint32_t *)(self + 0x139c) = 0x3f800000;
  *(uint32_t *)(self + 0x13a0) = 0;
  *(uint32_t *)(self + 0x13a4) = 0;
  *(uint32_t *)(self + 0x13a8) = 0;
  *(uint32_t *)(self + 0x13ac) = 0;
  *(uint32_t *)(self + 0x13b0) = 0;
  *(uint32_t *)(self + 0x13b4) = 0;
  *(uint32_t *)(self + 0x13b8) = 0;
  *(uint32_t *)(self + 0x13c0) = 2;
  *(uint64_t *)(self + 0x1410) = 0;
  *(uint32_t *)(self + 0x1418) = 1;
  *(uint8_t ***)(self + 0x13c8) = &PTR__SceneObject2D_005dd3d0;
                    /* try { // try from 00466db2 to 00466db6 has its CatchHandler @ 00466f31 */
  CriticalSection__CriticalSection((CriticalSection *)(self + 0x1420));
  uVar1 = vDefaultStart2D;
  *(uint32_t *)(self + 0x1448) = 0;
  *(uint32_t *)(self + 0x144c) = 0;
  *(uint32_t *)(self + 0x1450) = 0x3f800000;
  *(uint32_t *)(self + 0x1454) = 0;
  *(uint32_t *)(self + 0x1458) = 0;
  *(uint32_t *)(self + 0x145c) = 0;
  *(uint32_t *)(self + 0x1460) = 0;
  *(uint32_t *)(self + 0x1464) = 1;
  *(uint64_t *)(self + 0x1468) = uVar1;
  *(uint64_t *)(self + 0x1470) = uVar1;
  *(uint32_t *)(self + 0x1478) = 0;
  *(uint32_t *)(self + 0x147c) = 0;
  *(uint32_t *)(self + 0x1480) = 0;
  *(uint32_t *)(self + 0x1484) = 0;
  *(uint32_t *)(self + 0x1490) = 0;
  *(uint32_t *)(self + 0x1494) = 0;
  *(uint32_t *)(self + 0x1498) = 0x3f800000;
  *(uint32_t *)(self + 0x149c) = 0x3f800000;
  *(uint32_t *)(self + 0x14a0) = 0;
  *(uint32_t *)(self + 0x14a4) = 0;
  *(uint32_t *)(self + 0x14a8) = 0;
  *(uint32_t *)(self + 0x14ac) = 0;
  *(uint32_t *)(self + 0x14b0) = 0;
  *(uint32_t *)(self + 0x14b4) = 0;
  *(uint32_t *)(self + 0x14b8) = 0;
  *(uint32_t *)(self + 0xa54) = 4;
  *(uint32_t *)(self + 0xab0) = 0;
  return;
}

/* ======================================================================
 * DrFetus__DrFetus__00466f80  (Ghidra `DrFetus` @ 00466f80)
 * Signature: uint8_t __thiscall DrFetus(DrFetus * self, MeatBoyCharactor * arg1, int arg2)
 * Class: DrFetus
 * Calls: `CriticalSection__CriticalSection`, `MeatBoyCharactor__Clone`, `MeatBoyCharactor__MeatBoyCharactor__0047b350`
 * Called by: `DrFetus__DrFetus`, `DrFetus__DrFetus__00466250`, `GSMBCharactor__CreateCharactor`, `GSMBCharactor__CreateCharactor__0049c600`
 */
/* DrFetus__DrFetus__00466f80(MeatBoyCharactor*, int) */

void __thiscall DrFetus__DrFetus__00466f80(DrFetus *self,MeatBoyCharactor *arg1,int arg2)

{
  uint64_t uVar1;
  
  MeatBoyCharactor__MeatBoyCharactor__0047b350((MeatBoyCharactor *)self);
  *(uint8_t ***)self = &PTR__DrFetus_005bf610;
  *(uint32_t *)(self + 0xac0) = 2;
  *(uint64_t *)(self + 0xb10) = 0;
  *(uint32_t *)(self + 0xb18) = 1;
  *(uint8_t ***)(self + 0xac8) = &PTR__SceneObject2D_005dd3d0;
                    /* try { // try from 00466fda to 00466fde has its CatchHandler @ 00467c24 */
  CriticalSection__CriticalSection((CriticalSection *)(self + 0xb20));
  uVar1 = vDefaultStart2D;
  *(uint32_t *)(self + 0xb48) = 0;
  *(uint32_t *)(self + 0xb4c) = 0;
  *(uint32_t *)(self + 0xb50) = 0x3f800000;
  *(uint32_t *)(self + 0xb54) = 0;
  *(uint32_t *)(self + 0xb58) = 0;
  *(uint32_t *)(self + 0xb5c) = 0;
  *(uint32_t *)(self + 0xb60) = 0;
  *(uint32_t *)(self + 0xb64) = 1;
  *(uint64_t *)(self + 0xb68) = uVar1;
  *(uint64_t *)(self + 0xb70) = uVar1;
  *(uint32_t *)(self + 0xb78) = 0;
  *(uint32_t *)(self + 0xb7c) = 0;
  *(uint32_t *)(self + 0xb80) = 0;
  *(uint32_t *)(self + 0xb84) = 0;
  *(uint32_t *)(self + 0xb90) = 0;
  *(uint32_t *)(self + 0xb94) = 0;
  *(uint32_t *)(self + 0xb98) = 0x3f800000;
  *(uint32_t *)(self + 0xb9c) = 0x3f800000;
  *(uint32_t *)(self + 0xba0) = 0;
  *(uint32_t *)(self + 0xba4) = 0;
  *(uint32_t *)(self + 0xba8) = 0;
  *(uint32_t *)(self + 0xbac) = 0;
  *(uint32_t *)(self + 0xbb0) = 0;
  *(uint32_t *)(self + 0xbb4) = 0;
  *(uint32_t *)(self + 3000) = 0;
  *(uint32_t *)(self + 0xbc0) = 2;
  *(uint64_t *)(self + 0xc10) = 0;
  *(uint32_t *)(self + 0xc18) = 1;
  *(uint8_t ***)(self + 0xbc8) = &PTR__SceneObject2D_005dd3d0;
                    /* try { // try from 00467112 to 00467116 has its CatchHandler @ 00467ce8 */
  CriticalSection__CriticalSection((CriticalSection *)(self + 0xc20));
  uVar1 = vDefaultStart2D;
  *(uint32_t *)(self + 0xc48) = 0;
  *(uint32_t *)(self + 0xc4c) = 0;
  *(uint32_t *)(self + 0xc50) = 0x3f800000;
  *(uint32_t *)(self + 0xc54) = 0;
  *(uint32_t *)(self + 0xc58) = 0;
  *(uint32_t *)(self + 0xc5c) = 0;
  *(uint32_t *)(self + 0xc60) = 0;
  *(uint32_t *)(self + 0xc64) = 1;
  *(uint64_t *)(self + 0xc68) = uVar1;
  *(uint64_t *)(self + 0xc70) = uVar1;
  *(uint32_t *)(self + 0xc78) = 0;
  *(uint32_t *)(self + 0xc7c) = 0;
  *(uint32_t *)(self + 0xc80) = 0;
  *(uint32_t *)(self + 0xc84) = 0;
  *(uint32_t *)(self + 0xc90) = 0;
  *(uint32_t *)(self + 0xc94) = 0;
  *(uint32_t *)(self + 0xc98) = 0x3f800000;
  *(uint32_t *)(self + 0xc9c) = 0x3f800000;
  *(uint32_t *)(self + 0xca0) = 0;
  *(uint32_t *)(self + 0xca4) = 0;
  *(uint32_t *)(self + 0xca8) = 0;
  *(uint32_t *)(self + 0xcac) = 0;
  *(uint32_t *)(self + 0xcb0) = 0;
  *(uint32_t *)(self + 0xcb4) = 0;
  *(uint32_t *)(self + 0xcb8) = 0;
  *(uint32_t *)(self + 0xcc0) = 2;
  *(uint64_t *)(self + 0xd10) = 0;
  *(uint32_t *)(self + 0xd18) = 1;
  *(uint8_t ***)(self + 0xcc8) = &PTR__SceneObject2D_005dd3d0;
                    /* try { // try from 0046724a to 0046724e has its CatchHandler @ 00467cde */
  CriticalSection__CriticalSection((CriticalSection *)(self + 0xd20));
  uVar1 = vDefaultStart2D;
  *(uint32_t *)(self + 0xd48) = 0;
  *(uint32_t *)(self + 0xd4c) = 0;
  *(uint32_t *)(self + 0xd50) = 0x3f800000;
  *(uint32_t *)(self + 0xd54) = 0;
  *(uint32_t *)(self + 0xd58) = 0;
  *(uint32_t *)(self + 0xd5c) = 0;
  *(uint32_t *)(self + 0xd60) = 0;
  *(uint32_t *)(self + 0xd64) = 1;
  *(uint64_t *)(self + 0xd68) = uVar1;
  *(uint64_t *)(self + 0xd70) = uVar1;
  *(uint32_t *)(self + 0xd78) = 0;
  *(uint32_t *)(self + 0xd7c) = 0;
  *(uint32_t *)(self + 0xd80) = 0;
  *(uint32_t *)(self + 0xd84) = 0;
  *(uint32_t *)(self + 0xd90) = 0;
  *(uint32_t *)(self + 0xd94) = 0;
  *(uint32_t *)(self + 0xd98) = 0x3f800000;
  *(uint32_t *)(self + 0xd9c) = 0x3f800000;
  *(uint32_t *)(self + 0xda0) = 0;
  *(uint32_t *)(self + 0xda4) = 0;
  *(uint32_t *)(self + 0xda8) = 0;
  *(uint32_t *)(self + 0xdac) = 0;
  *(uint32_t *)(self + 0xdb0) = 0;
  *(uint32_t *)(self + 0xdb4) = 0;
  *(uint32_t *)(self + 0xdb8) = 0;
  *(uint32_t *)(self + 0xdc0) = 2;
  *(uint64_t *)(self + 0xe10) = 0;
  *(uint32_t *)(self + 0xe18) = 1;
  *(uint8_t ***)(self + 0xdc8) = &PTR__SceneObject2D_005dd3d0;
                    /* try { // try from 00467382 to 00467386 has its CatchHandler @ 00467cd4 */
  CriticalSection__CriticalSection((CriticalSection *)(self + 0xe20));
  uVar1 = vDefaultStart2D;
  *(uint32_t *)(self + 0xe48) = 0;
  *(uint32_t *)(self + 0xe4c) = 0;
  *(uint32_t *)(self + 0xe50) = 0x3f800000;
  *(uint32_t *)(self + 0xe54) = 0;
  *(uint32_t *)(self + 0xe58) = 0;
  *(uint32_t *)(self + 0xe5c) = 0;
  *(uint32_t *)(self + 0xe60) = 0;
  *(uint32_t *)(self + 0xe64) = 1;
  *(uint64_t *)(self + 0xe68) = uVar1;
  *(uint64_t *)(self + 0xe70) = uVar1;
  *(uint32_t *)(self + 0xe78) = 0;
  *(uint32_t *)(self + 0xe7c) = 0;
  *(uint32_t *)(self + 0xe80) = 0;
  *(uint32_t *)(self + 0xe84) = 0;
  *(uint32_t *)(self + 0xe90) = 0;
  *(uint32_t *)(self + 0xe94) = 0;
  *(uint32_t *)(self + 0xe98) = 0x3f800000;
  *(uint32_t *)(self + 0xe9c) = 0x3f800000;
  *(uint32_t *)(self + 0xea0) = 0;
  *(uint32_t *)(self + 0xea4) = 0;
  *(uint32_t *)(self + 0xea8) = 0;
  *(uint32_t *)(self + 0xeac) = 0;
  *(uint32_t *)(self + 0xeb0) = 0;
  *(uint32_t *)(self + 0xeb4) = 0;
  *(uint32_t *)(self + 0xeb8) = 0;
  *(uint32_t *)(self + 0xec0) = 2;
  *(uint64_t *)(self + 0xf10) = 0;
  *(uint32_t *)(self + 0xf18) = 1;
  *(uint8_t ***)(self + 0xec8) = &PTR__SceneObject2D_005dd3d0;
                    /* try { // try from 004674ba to 004674be has its CatchHandler @ 00467cca */
  CriticalSection__CriticalSection((CriticalSection *)(self + 0xf20));
  uVar1 = vDefaultStart2D;
  *(uint32_t *)(self + 0xf48) = 0;
  *(uint32_t *)(self + 0xf4c) = 0;
  *(uint32_t *)(self + 0xf50) = 0x3f800000;
  *(uint32_t *)(self + 0xf54) = 0;
  *(uint32_t *)(self + 0xf58) = 0;
  *(uint32_t *)(self + 0xf5c) = 0;
  *(uint32_t *)(self + 0xf60) = 0;
  *(uint32_t *)(self + 0xf64) = 1;
  *(uint64_t *)(self + 0xf68) = uVar1;
  *(uint64_t *)(self + 0xf70) = uVar1;
  *(uint32_t *)(self + 0xf78) = 0;
  *(uint32_t *)(self + 0xf7c) = 0;
  *(uint32_t *)(self + 0xf80) = 0;
  *(uint32_t *)(self + 0xf84) = 0;
  *(uint32_t *)(self + 0xf90) = 0;
  *(uint32_t *)(self + 0xf94) = 0;
  *(uint32_t *)(self + 0xf98) = 0x3f800000;
  *(uint32_t *)(self + 0xf9c) = 0x3f800000;
  *(uint32_t *)(self + 4000) = 0;
  *(uint32_t *)(self + 0xfa4) = 0;
  *(uint32_t *)(self + 0xfa8) = 0;
  *(uint32_t *)(self + 0xfac) = 0;
  *(uint32_t *)(self + 0xfb0) = 0;
  *(uint32_t *)(self + 0xfb4) = 0;
  *(uint32_t *)(self + 0xfb8) = 0;
  *(uint32_t *)(self + 0xfc0) = 2;
  *(uint64_t *)(self + 0x1010) = 0;
  *(uint32_t *)(self + 0x1018) = 1;
  *(uint8_t ***)(self + 0xfc8) = &PTR__SceneObject2D_005dd3d0;
                    /* try { // try from 004675f2 to 004675f6 has its CatchHandler @ 00467cc0 */
  CriticalSection__CriticalSection((CriticalSection *)(self + 0x1020));
  uVar1 = vDefaultStart2D;
  *(uint32_t *)(self + 0x1048) = 0;
  *(uint32_t *)(self + 0x104c) = 0;
  *(uint32_t *)(self + 0x1050) = 0x3f800000;
  *(uint32_t *)(self + 0x1054) = 0;
  *(uint32_t *)(self + 0x1058) = 0;
  *(uint32_t *)(self + 0x105c) = 0;
  *(uint32_t *)(self + 0x1060) = 0;
  *(uint32_t *)(self + 0x1064) = 1;
  *(uint64_t *)(self + 0x1068) = uVar1;
  *(uint64_t *)(self + 0x1070) = uVar1;
  *(uint32_t *)(self + 0x1078) = 0;
  *(uint32_t *)(self + 0x107c) = 0;
  *(uint32_t *)(self + 0x1080) = 0;
  *(uint32_t *)(self + 0x1084) = 0;
  *(uint32_t *)(self + 0x1090) = 0;
  *(uint32_t *)(self + 0x1094) = 0;
  *(uint32_t *)(self + 0x1098) = 0x3f800000;
  *(uint32_t *)(self + 0x109c) = 0x3f800000;
  *(uint32_t *)(self + 0x10a0) = 0;
  *(uint32_t *)(self + 0x10a4) = 0;
  *(uint32_t *)(self + 0x10a8) = 0;
  *(uint32_t *)(self + 0x10ac) = 0;
  *(uint32_t *)(self + 0x10b0) = 0;
  *(uint32_t *)(self + 0x10b4) = 0;
  *(uint32_t *)(self + 0x10b8) = 0;
  *(uint32_t *)(self + 0x10c0) = 2;
  *(uint64_t *)(self + 0x1110) = 0;
  *(uint32_t *)(self + 0x1118) = 1;
  *(uint8_t ***)(self + 0x10c8) = &PTR__SceneObject2D_005dd3d0;
                    /* try { // try from 0046772a to 0046772e has its CatchHandler @ 00467cb6 */
  CriticalSection__CriticalSection((CriticalSection *)(self + 0x1120));
  uVar1 = vDefaultStart2D;
  *(uint32_t *)(self + 0x1148) = 0;
  *(uint32_t *)(self + 0x114c) = 0;
  *(uint32_t *)(self + 0x1150) = 0x3f800000;
  *(uint32_t *)(self + 0x1154) = 0;
  *(uint32_t *)(self + 0x1158) = 0;
  *(uint32_t *)(self + 0x115c) = 0;
  *(uint32_t *)(self + 0x1160) = 0;
  *(uint32_t *)(self + 0x1164) = 1;
  *(uint64_t *)(self + 0x1168) = uVar1;
  *(uint64_t *)(self + 0x1170) = uVar1;
  *(uint32_t *)(self + 0x1178) = 0;
  *(uint32_t *)(self + 0x117c) = 0;
  *(uint32_t *)(self + 0x1180) = 0;
  *(uint32_t *)(self + 0x1184) = 0;
  *(uint32_t *)(self + 0x1190) = 0;
  *(uint32_t *)(self + 0x1194) = 0;
  *(uint32_t *)(self + 0x1198) = 0x3f800000;
  *(uint32_t *)(self + 0x119c) = 0x3f800000;
  *(uint32_t *)(self + 0x11a0) = 0;
  *(uint32_t *)(self + 0x11a4) = 0;
  *(uint32_t *)(self + 0x11a8) = 0;
  *(uint32_t *)(self + 0x11ac) = 0;
  *(uint32_t *)(self + 0x11b0) = 0;
  *(uint32_t *)(self + 0x11b4) = 0;
  *(uint32_t *)(self + 0x11b8) = 0;
  *(uint32_t *)(self + 0x11c0) = 2;
  *(uint64_t *)(self + 0x1210) = 0;
  *(uint32_t *)(self + 0x1218) = 1;
  *(uint8_t ***)(self + 0x11c8) = &PTR__SceneObject2D_005dd3d0;
                    /* try { // try from 00467862 to 00467866 has its CatchHandler @ 00467cac */
  CriticalSection__CriticalSection((CriticalSection *)(self + 0x1220));
  uVar1 = vDefaultStart2D;
  *(uint32_t *)(self + 0x1248) = 0;
  *(uint32_t *)(self + 0x124c) = 0;
  *(uint32_t *)(self + 0x1250) = 0x3f800000;
  *(uint32_t *)(self + 0x1254) = 0;
  *(uint32_t *)(self + 0x1258) = 0;
  *(uint32_t *)(self + 0x125c) = 0;
  *(uint32_t *)(self + 0x1260) = 0;
  *(uint32_t *)(self + 0x1264) = 1;
  *(uint64_t *)(self + 0x1268) = uVar1;
  *(uint64_t *)(self + 0x1270) = uVar1;
  *(uint32_t *)(self + 0x1278) = 0;
  *(uint32_t *)(self + 0x127c) = 0;
  *(uint32_t *)(self + 0x1280) = 0;
  *(uint32_t *)(self + 0x1284) = 0;
  *(uint32_t *)(self + 0x1290) = 0;
  *(uint32_t *)(self + 0x1294) = 0;
  *(uint32_t *)(self + 0x1298) = 0x3f800000;
  *(uint32_t *)(self + 0x129c) = 0x3f800000;
  *(uint32_t *)(self + 0x12a0) = 0;
  *(uint32_t *)(self + 0x12a4) = 0;
  *(uint32_t *)(self + 0x12a8) = 0;
  *(uint32_t *)(self + 0x12ac) = 0;
  *(uint32_t *)(self + 0x12b0) = 0;
  *(uint32_t *)(self + 0x12b4) = 0;
  *(uint32_t *)(self + 0x12b8) = 0;
  *(uint32_t *)(self + 0x12c0) = 2;
  *(uint64_t *)(self + 0x1310) = 0;
  *(uint32_t *)(self + 0x1318) = 1;
  *(uint8_t ***)(self + 0x12c8) = &PTR__SceneObject2D_005dd3d0;
                    /* try { // try from 0046799a to 0046799e has its CatchHandler @ 00467ca5 */
  CriticalSection__CriticalSection((CriticalSection *)(self + 0x1320));
  uVar1 = vDefaultStart2D;
  *(uint32_t *)(self + 0x1348) = 0;
  *(uint32_t *)(self + 0x134c) = 0;
  *(uint32_t *)(self + 0x1350) = 0x3f800000;
  *(uint32_t *)(self + 0x1354) = 0;
  *(uint32_t *)(self + 0x1358) = 0;
  *(uint32_t *)(self + 0x135c) = 0;
  *(uint32_t *)(self + 0x1360) = 0;
  *(uint32_t *)(self + 0x1364) = 1;
  *(uint64_t *)(self + 0x1368) = uVar1;
  *(uint64_t *)(self + 0x1370) = uVar1;
  *(uint32_t *)(self + 0x1378) = 0;
  *(uint32_t *)(self + 0x137c) = 0;
  *(uint32_t *)(self + 0x1380) = 0;
  *(uint32_t *)(self + 0x1384) = 0;
  *(uint32_t *)(self + 0x1390) = 0;
  *(uint32_t *)(self + 0x1394) = 0;
  *(uint32_t *)(self + 0x1398) = 0x3f800000;
  *(uint32_t *)(self + 0x139c) = 0x3f800000;
  *(uint32_t *)(self + 0x13a0) = 0;
  *(uint32_t *)(self + 0x13a4) = 0;
  *(uint32_t *)(self + 0x13a8) = 0;
  *(uint32_t *)(self + 0x13ac) = 0;
  *(uint32_t *)(self + 0x13b0) = 0;
  *(uint32_t *)(self + 0x13b4) = 0;
  *(uint32_t *)(self + 0x13b8) = 0;
  *(uint32_t *)(self + 0x13c0) = 2;
  *(uint64_t *)(self + 0x1410) = 0;
  *(uint32_t *)(self + 0x1418) = 1;
  *(uint8_t ***)(self + 0x13c8) = &PTR__SceneObject2D_005dd3d0;
                    /* try { // try from 00467ad2 to 00467ad6 has its CatchHandler @ 00467ca1 */
  CriticalSection__CriticalSection((CriticalSection *)(self + 0x1420));
  uVar1 = vDefaultStart2D;
  *(uint32_t *)(self + 0x1448) = 0;
  *(uint32_t *)(self + 0x144c) = 0;
  *(uint32_t *)(self + 0x1450) = 0x3f800000;
  *(uint32_t *)(self + 0x1454) = 0;
  *(uint32_t *)(self + 0x1458) = 0;
  *(uint32_t *)(self + 0x145c) = 0;
  *(uint32_t *)(self + 0x1460) = 0;
  *(uint32_t *)(self + 0x1464) = 1;
  *(uint64_t *)(self + 0x1468) = uVar1;
  *(uint64_t *)(self + 0x1470) = uVar1;
  *(uint32_t *)(self + 0x1478) = 0;
  *(uint32_t *)(self + 0x147c) = 0;
  *(uint32_t *)(self + 0x1480) = 0;
  *(uint32_t *)(self + 0x1484) = 0;
  *(uint32_t *)(self + 0x1490) = 0;
  *(uint32_t *)(self + 0x1494) = 0;
  *(uint32_t *)(self + 0x1498) = 0x3f800000;
  *(uint32_t *)(self + 0x149c) = 0x3f800000;
  *(uint32_t *)(self + 0x14a0) = 0;
  *(uint32_t *)(self + 0x14a4) = 0;
  *(uint32_t *)(self + 0x14a8) = 0;
  *(uint32_t *)(self + 0x14ac) = 0;
  *(uint32_t *)(self + 0x14b0) = 0;
  *(uint32_t *)(self + 0x14b4) = 0;
  *(uint32_t *)(self + 0x14b8) = 0;
                    /* try { // try from 00467bdb to 00467bdf has its CatchHandler @ 00467c7f */
  MeatBoyCharactor__Clone((MeatBoyCharactor *)self,arg1,arg2);
  *(uint32_t *)(self + 0xab0) = 0;
  *(uint64_t *)(self + 0xa98) = *(uint64_t *)(arg1 + 0xa98);
  *(uint64_t *)(self + 0xaa0) = *(uint64_t *)(arg1 + 0xaa0);
  *(uint64_t *)(self + 0xaa8) = *(uint64_t *)(arg1 + 0xaa8);
  return;
}

/* ======================================================================
 * DrFetus__AddShot  (Ghidra `AddShot` @ 00467d00)
 * Signature: uint8_t __thiscall AddShot(DrFetus * self)
 * Class: DrFetus
 * Calls: `Vector2__operator_assign`
 * Called by: (none)
 */
/* DrFetus__AddShot() */

void __thiscall DrFetus__AddShot(DrFetus *self)

{
  DrFetus *pDVar1;
  int iVar2;
  uint32_t local_38;
  uint32_t local_34;
  uint32_t local_28;
  uint32_t local_24;
  
  if (*(int *)(self + 0xac0) == 2) {
    iVar2 = 0;
  }
  else if (*(int *)(self + 0xbc0) == 2) {
    iVar2 = 1;
  }
  else if (*(int *)(self + 0xcc0) == 2) {
    iVar2 = 2;
  }
  else if (*(int *)(self + 0xdc0) == 2) {
    iVar2 = 3;
  }
  else if (*(int *)(self + 0xec0) == 2) {
    iVar2 = 4;
  }
  else if (*(int *)(self + 0xfc0) == 2) {
    iVar2 = 5;
  }
  else if (*(int *)(self + 0x10c0) == 2) {
    iVar2 = 6;
  }
  else if (*(int *)(self + 0x11c0) == 2) {
    iVar2 = 7;
  }
  else if (*(int *)(self + 0x12c0) == 2) {
    iVar2 = 8;
  }
  else {
    iVar2 = 9;
    if (*(int *)(self + 0x13c0) != 2) {
      return;
    }
  }
  pDVar1 = self + (long)iVar2 * 0x100 + 0xac0;
  *(uint32_t *)(pDVar1 + 0xa4) = 1;
  Vector2__operator_assign((Vector2 *)(pDVar1 + 0xa8),(Vector2 *)(self + 0xa0));
  if (((byte)self[0x7d8] & 1) == 0) {
    local_28 = 0x43fa0000;
    local_24 = 0;
    Vector2__operator_assign((Vector2 *)(pDVar1 + 0xc0),(Vector2 *)&local_28);
  }
  else {
    local_38 = 0xc3fa0000;
    local_34 = 0;
    Vector2__operator_assign((Vector2 *)(pDVar1 + 0xc0),(Vector2 *)&local_38);
  }
  *(uint32_t *)pDVar1 = 0;
  return;
}

/* ======================================================================
 * DrFetus__UpdateShots  (Ghidra `UpdateShots` @ 00467ea0)
 * Signature: uint8_t __thiscall UpdateShots(DrFetus * self)
 * Class: DrFetus
 * Calls: `Apply2DPhysics`, `GSuperMeatBoy__getChar`, `TileLevel__GetGridBlockFromPos`, `Vector2__operator_assign`, `Vector2__operator_div_assign__005be2c0`, `Vector2__operator_minus__005be180`, `Vector2__operator_mul__005be200`
 * Called by: (none)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DrFetus__UpdateShots() */

void __thiscall DrFetus__UpdateShots(DrFetus *self)

{
  DrFetus *pDVar1;
  long lVar2;
  char *pcVar3;
  int iVar4;
  DrFetus *pDVar5;
  long lVar6;
  float fVar7;
  double dVar8;
  Vector2 local_78 [16];
  uint64_t local_68;
  Vector2 local_58 [16];
  Vector2 local_48 [16];
  uint64_t local_38;
  
  iVar4 = 0;
  pDVar5 = self;
LAB_00467ed3:
  do {
    if (*(int *)(pDVar5 + 0xac0) == 0) {
      lVar6 = (long)iVar4;
      pDVar1 = (DrFetus *)GSuperMeatBoy__getChar(SuperMeatBoy,1);
      if (pDVar1 == self) {
        pDVar1 = self + lVar6 * 0x100 + 0xac8;
        local_38 = *(uint64_t *)(pDVar1 + 0xb8);
        fVar7 = (float)Vector2__Length((Vector2 *)&local_38);
        if (DAT_005bf760 /* R:0.0f */ < fVar7) {
          Vector2__operator_div_assign__005be2c0((Vector2 *)&local_38,fVar7);
        }
        fVar7 = local_38._4_4_;
      }
      else {
        pDVar1 = self + lVar6 * 0x100 + 0xac8;
        lVar2 = GSuperMeatBoy__getChar(SuperMeatBoy,1);
        Vector2__operator_minus__005be180(local_78,(Vector2 *)(lVar2 + 0xa0));
        fVar7 = (float)Vector2__Length(local_78);
        if (0.0 < fVar7) {
          Vector2__operator_div_assign__005be2c0(local_78,fVar7);
        }
        local_68 = *(uint64_t *)(pDVar1 + 0xb8);
        fVar7 = (float)Vector2__Length((Vector2 *)&local_68);
        if (0.0 < fVar7) {
          Vector2__operator_div_assign__005be2c0((Vector2 *)&local_68,fVar7);
        }
        fVar7 = (float)Vector2__Dot(local_78,(Vector2 *)&local_68);
        Vector2__operator_mul__005be200(local_58,DAT_005bf764 /* R:750.0f */);
        Vector2__operator_mul__005be200(local_48,(float)((uint)(fVar7 - DAT_005be894 /* R:1.0f */) & DAT_005be880 /* R:u32=2147483647 */) +
                                    DAT_005be894 /* R:1.0f */);
        Vector2__operator_assign((Vector2 *)(pDVar1 + 0xec),local_48);
        fVar7 = local_68._4_4_;
      }
      dVar8 = (double)__atan2_finite((double)fVar7);
      dVar8 = dVar8 - _DAT_005bf768 /* R:u32=1610612736 */;
      *(uint32_t *)(pDVar1 + 0x9c) = 1;
      *(float *)(pDVar1 + 0xd8) = (float)dVar8;
      Apply2DPhysics((SceneObject2D *)pDVar1,fOneFrameTimeStep);
      pcVar3 = (char *)TileLevel__GetGridBlockFromPos
                                 (*(TileLevel **)(SuperMeatBoy + 0x40),self + lVar6 * 0x100 + 0xb68,
                                  0);
      if (*pcVar3 != '\0') {
        iVar4 = iVar4 + 1;
        *(uint32_t *)(pDVar5 + 0xac0) = 1;
        *(uint32_t *)(pDVar5 + 0xac4) = 0;
        pDVar5 = pDVar5 + 0x100;
        if (iVar4 == 10) {
          return;
        }
        goto LAB_00467ed3;
      }
    }
    iVar4 = iVar4 + 1;
    pDVar5 = pDVar5 + 0x100;
    if (iVar4 == 10) {
      return;
    }
  } while( true );
}

/* ======================================================================
 * DrFetus__Update  (Ghidra `Update` @ 00468100)
 * Signature: uint8_t __thiscall Update(DrFetus * self)
 * Class: DrFetus
 * Calls: `FlashLibraryInstance__IsPlaying`, `MeatBoyCharactor__ProcessReplayFrame`, `MeatBoyCharactor__Update`
 * Called by: (none)
 */
/* DrFetus__Update() */

void __thiscall DrFetus__Update(DrFetus *self)

{
  int iVar1;
  
  MeatBoyCharactor__ProcessReplayFrame((MeatBoyCharactor *)self);
  *(uint32_t *)(self + 0x8ac) = *(uint32_t *)(self + 0x8a8);
  *(uint32_t *)(*(long *)(self + 0xa98) + 0x58) = *(uint32_t *)(self + 0xab4);
  if (*(int *)(self + 0xab0) == 1) {
    iVar1 = FlashLibraryInstance__IsPlaying(*(FlashLibraryInstance **)(self + 0xa98));
    if (iVar1 == 0) {
      *(uint32_t *)(self + 0xab0) = 0;
    }
  }
  MeatBoyCharactor__Update((MeatBoyCharactor *)self);
  UpdateShots(self);
  return;
}

/* ======================================================================
 * DrFetus__ShootOnlyUpdate  (Ghidra `ShootOnlyUpdate` @ 00468160)
 * Signature: uint8_t __thiscall ShootOnlyUpdate(DrFetus * self)
 * Class: DrFetus
 * Calls: (none)
 * Called by: (none)
 */
/* DrFetus__ShootOnlyUpdate() */

void __thiscall DrFetus__ShootOnlyUpdate(DrFetus *self)

{
  long lVar1;
  int iVar2;
  
  if (0 < *(int *)(*(long *)(self + 0xa38) + 0x34)) {
    iVar2 = 0;
    do {
      lVar1 = (long)iVar2;
      iVar2 = iVar2 + 1;
      UpdateShots(*(DrFetus **)(*(long *)(self + 0x7f0) + lVar1 * 8));
    } while (iVar2 < *(int *)(*(long *)(self + 0xa38) + 0x34));
  }
  return;
}

/* ======================================================================
 * DrFetus__RenderShots  (Ghidra `RenderShots` @ 004681b0)
 * Signature: uint8_t __thiscall RenderShots(DrFetus * self)
 * Class: DrFetus
 * Calls: `FlashLibraryInstance__IsPlaying`
 * Called by: (none)
 */
/* DrFetus__RenderShots() */

void __thiscall DrFetus__RenderShots(DrFetus *self)

{
  int iVar1;
  FlashLibraryInstance *pFVar2;
  
  if (*(int *)(self + 0xac0) != 2) {
    if (*(int *)(self + 0xac0) == 0) {
      pFVar2 = *(FlashLibraryInstance **)(self + 0xaa0);
    }
    else {
      pFVar2 = *(FlashLibraryInstance **)(self + 0xaa8);
    }
    if (pFVar2 != (FlashLibraryInstance *)0x0) {
      *(uint32_t *)(pFVar2 + 0x30) = *(uint32_t *)(self + 0xb68);
      *(uint32_t *)(pFVar2 + 0x34) = *(uint32_t *)(self + 0xb6c);
      *(uint32_t *)(pFVar2 + 0x58) = *(uint32_t *)(self + 0xac4);
      *(uint32_t *)(pFVar2 + 0x48) = *(uint32_t *)(self + 0xba0);
      *(uint32_t *)(pFVar2 + 0x4c) = *(uint32_t *)(self + 0xba0);
      (**(code **)(*(long *)pFVar2 + 0x10))(pFVar2);
      if (*(int *)(self + 0xac0) == 1) {
        iVar1 = FlashLibraryInstance__IsPlaying(pFVar2);
        if (iVar1 == 0) {
          *(uint32_t *)(self + 0xac0) = 2;
        }
      }
      *(uint32_t *)(self + 0xac4) = *(uint32_t *)(pFVar2 + 0x58);
    }
  }
  if (*(int *)(self + 0xbc0) != 2) {
    if (*(int *)(self + 0xbc0) == 0) {
      pFVar2 = *(FlashLibraryInstance **)(self + 0xaa0);
    }
    else {
      pFVar2 = *(FlashLibraryInstance **)(self + 0xaa8);
    }
    if (pFVar2 != (FlashLibraryInstance *)0x0) {
      *(uint32_t *)(pFVar2 + 0x30) = *(uint32_t *)(self + 0xc68);
      *(uint32_t *)(pFVar2 + 0x34) = *(uint32_t *)(self + 0xc6c);
      *(uint32_t *)(pFVar2 + 0x58) = *(uint32_t *)(self + 0xbc4);
      *(uint32_t *)(pFVar2 + 0x48) = *(uint32_t *)(self + 0xca0);
      *(uint32_t *)(pFVar2 + 0x4c) = *(uint32_t *)(self + 0xca0);
      (**(code **)(*(long *)pFVar2 + 0x10))(pFVar2);
      if (*(int *)(self + 0xbc0) == 1) {
        iVar1 = FlashLibraryInstance__IsPlaying(pFVar2);
        if (iVar1 == 0) {
          *(uint32_t *)(self + 0xbc0) = 2;
        }
      }
      *(uint32_t *)(self + 0xbc4) = *(uint32_t *)(pFVar2 + 0x58);
    }
  }
  if (*(int *)(self + 0xcc0) != 2) {
    if (*(int *)(self + 0xcc0) == 0) {
      pFVar2 = *(FlashLibraryInstance **)(self + 0xaa0);
    }
    else {
      pFVar2 = *(FlashLibraryInstance **)(self + 0xaa8);
    }
    if (pFVar2 != (FlashLibraryInstance *)0x0) {
      *(uint32_t *)(pFVar2 + 0x30) = *(uint32_t *)(self + 0xd68);
      *(uint32_t *)(pFVar2 + 0x34) = *(uint32_t *)(self + 0xd6c);
      *(uint32_t *)(pFVar2 + 0x58) = *(uint32_t *)(self + 0xcc4);
      *(uint32_t *)(pFVar2 + 0x48) = *(uint32_t *)(self + 0xda0);
      *(uint32_t *)(pFVar2 + 0x4c) = *(uint32_t *)(self + 0xda0);
      (**(code **)(*(long *)pFVar2 + 0x10))(pFVar2);
      if (*(int *)(self + 0xcc0) == 1) {
        iVar1 = FlashLibraryInstance__IsPlaying(pFVar2);
        if (iVar1 == 0) {
          *(uint32_t *)(self + 0xcc0) = 2;
        }
      }
      *(uint32_t *)(self + 0xcc4) = *(uint32_t *)(pFVar2 + 0x58);
    }
  }
  if (*(int *)(self + 0xdc0) != 2) {
    if (*(int *)(self + 0xdc0) == 0) {
      pFVar2 = *(FlashLibraryInstance **)(self + 0xaa0);
    }
    else {
      pFVar2 = *(FlashLibraryInstance **)(self + 0xaa8);
    }
    if (pFVar2 != (FlashLibraryInstance *)0x0) {
      *(uint32_t *)(pFVar2 + 0x30) = *(uint32_t *)(self + 0xe68);
      *(uint32_t *)(pFVar2 + 0x34) = *(uint32_t *)(self + 0xe6c);
      *(uint32_t *)(pFVar2 + 0x58) = *(uint32_t *)(self + 0xdc4);
      *(uint32_t *)(pFVar2 + 0x48) = *(uint32_t *)(self + 0xea0);
      *(uint32_t *)(pFVar2 + 0x4c) = *(uint32_t *)(self + 0xea0);
      (**(code **)(*(long *)pFVar2 + 0x10))(pFVar2);
      if (*(int *)(self + 0xdc0) == 1) {
        iVar1 = FlashLibraryInstance__IsPlaying(pFVar2);
        if (iVar1 == 0) {
          *(uint32_t *)(self + 0xdc0) = 2;
        }
      }
      *(uint32_t *)(self + 0xdc4) = *(uint32_t *)(pFVar2 + 0x58);
    }
  }
  if (*(int *)(self + 0xec0) != 2) {
    if (*(int *)(self + 0xec0) == 0) {
      pFVar2 = *(FlashLibraryInstance **)(self + 0xaa0);
    }
    else {
      pFVar2 = *(FlashLibraryInstance **)(self + 0xaa8);
    }
    if (pFVar2 != (FlashLibraryInstance *)0x0) {
      *(uint32_t *)(pFVar2 + 0x30) = *(uint32_t *)(self + 0xf68);
      *(uint32_t *)(pFVar2 + 0x34) = *(uint32_t *)(self + 0xf6c);
      *(uint32_t *)(pFVar2 + 0x58) = *(uint32_t *)(self + 0xec4);
      *(uint32_t *)(pFVar2 + 0x48) = *(uint32_t *)(self + 4000);
      *(uint32_t *)(pFVar2 + 0x4c) = *(uint32_t *)(self + 4000);
      (**(code **)(*(long *)pFVar2 + 0x10))(pFVar2);
      if (*(int *)(self + 0xec0) == 1) {
        iVar1 = FlashLibraryInstance__IsPlaying(pFVar2);
        if (iVar1 == 0) {
          *(uint32_t *)(self + 0xec0) = 2;
        }
      }
      *(uint32_t *)(self + 0xec4) = *(uint32_t *)(pFVar2 + 0x58);
    }
  }
  if (*(int *)(self + 0xfc0) != 2) {
    if (*(int *)(self + 0xfc0) == 0) {
      pFVar2 = *(FlashLibraryInstance **)(self + 0xaa0);
    }
    else {
      pFVar2 = *(FlashLibraryInstance **)(self + 0xaa8);
    }
    if (pFVar2 != (FlashLibraryInstance *)0x0) {
      *(uint32_t *)(pFVar2 + 0x30) = *(uint32_t *)(self + 0x1068);
      *(uint32_t *)(pFVar2 + 0x34) = *(uint32_t *)(self + 0x106c);
      *(uint32_t *)(pFVar2 + 0x58) = *(uint32_t *)(self + 0xfc4);
      *(uint32_t *)(pFVar2 + 0x48) = *(uint32_t *)(self + 0x10a0);
      *(uint32_t *)(pFVar2 + 0x4c) = *(uint32_t *)(self + 0x10a0);
      (**(code **)(*(long *)pFVar2 + 0x10))(pFVar2);
      if (*(int *)(self + 0xfc0) == 1) {
        iVar1 = FlashLibraryInstance__IsPlaying(pFVar2);
        if (iVar1 == 0) {
          *(uint32_t *)(self + 0xfc0) = 2;
        }
      }
      *(uint32_t *)(self + 0xfc4) = *(uint32_t *)(pFVar2 + 0x58);
    }
  }
  if (*(int *)(self + 0x10c0) != 2) {
    if (*(int *)(self + 0x10c0) == 0) {
      pFVar2 = *(FlashLibraryInstance **)(self + 0xaa0);
    }
    else {
      pFVar2 = *(FlashLibraryInstance **)(self + 0xaa8);
    }
    if (pFVar2 != (FlashLibraryInstance *)0x0) {
      *(uint32_t *)(pFVar2 + 0x30) = *(uint32_t *)(self + 0x1168);
      *(uint32_t *)(pFVar2 + 0x34) = *(uint32_t *)(self + 0x116c);
      *(uint32_t *)(pFVar2 + 0x58) = *(uint32_t *)(self + 0x10c4);
      *(uint32_t *)(pFVar2 + 0x48) = *(uint32_t *)(self + 0x11a0);
      *(uint32_t *)(pFVar2 + 0x4c) = *(uint32_t *)(self + 0x11a0);
      (**(code **)(*(long *)pFVar2 + 0x10))(pFVar2);
      if (*(int *)(self + 0x10c0) == 1) {
        iVar1 = FlashLibraryInstance__IsPlaying(pFVar2);
        if (iVar1 == 0) {
          *(uint32_t *)(self + 0x10c0) = 2;
        }
      }
      *(uint32_t *)(self + 0x10c4) = *(uint32_t *)(pFVar2 + 0x58);
    }
  }
  if (*(int *)(self + 0x11c0) != 2) {
    if (*(int *)(self + 0x11c0) == 0) {
      pFVar2 = *(FlashLibraryInstance **)(self + 0xaa0);
    }
    else {
      pFVar2 = *(FlashLibraryInstance **)(self + 0xaa8);
    }
    if (pFVar2 != (FlashLibraryInstance *)0x0) {
      *(uint32_t *)(pFVar2 + 0x30) = *(uint32_t *)(self + 0x1268);
      *(uint32_t *)(pFVar2 + 0x34) = *(uint32_t *)(self + 0x126c);
      *(uint32_t *)(pFVar2 + 0x58) = *(uint32_t *)(self + 0x11c4);
      *(uint32_t *)(pFVar2 + 0x48) = *(uint32_t *)(self + 0x12a0);
      *(uint32_t *)(pFVar2 + 0x4c) = *(uint32_t *)(self + 0x12a0);
      (**(code **)(*(long *)pFVar2 + 0x10))(pFVar2);
      if (*(int *)(self + 0x11c0) == 1) {
        iVar1 = FlashLibraryInstance__IsPlaying(pFVar2);
        if (iVar1 == 0) {
          *(uint32_t *)(self + 0x11c0) = 2;
        }
      }
      *(uint32_t *)(self + 0x11c4) = *(uint32_t *)(pFVar2 + 0x58);
    }
  }
  if (*(int *)(self + 0x12c0) != 2) {
    if (*(int *)(self + 0x12c0) == 0) {
      pFVar2 = *(FlashLibraryInstance **)(self + 0xaa0);
    }
    else {
      pFVar2 = *(FlashLibraryInstance **)(self + 0xaa8);
    }
    if (pFVar2 != (FlashLibraryInstance *)0x0) {
      *(uint32_t *)(pFVar2 + 0x30) = *(uint32_t *)(self + 0x1368);
      *(uint32_t *)(pFVar2 + 0x34) = *(uint32_t *)(self + 0x136c);
      *(uint32_t *)(pFVar2 + 0x58) = *(uint32_t *)(self + 0x12c4);
      *(uint32_t *)(pFVar2 + 0x48) = *(uint32_t *)(self + 0x13a0);
      *(uint32_t *)(pFVar2 + 0x4c) = *(uint32_t *)(self + 0x13a0);
      (**(code **)(*(long *)pFVar2 + 0x10))(pFVar2);
      if (*(int *)(self + 0x12c0) == 1) {
        iVar1 = FlashLibraryInstance__IsPlaying(pFVar2);
        if (iVar1 == 0) {
          *(uint32_t *)(self + 0x12c0) = 2;
        }
      }
      *(uint32_t *)(self + 0x12c4) = *(uint32_t *)(pFVar2 + 0x58);
    }
  }
  if (*(int *)(self + 0x13c0) != 2) {
    if (*(int *)(self + 0x13c0) == 0) {
      pFVar2 = *(FlashLibraryInstance **)(self + 0xaa0);
    }
    else {
      pFVar2 = *(FlashLibraryInstance **)(self + 0xaa8);
    }
    if (pFVar2 != (FlashLibraryInstance *)0x0) {
      *(uint32_t *)(pFVar2 + 0x30) = *(uint32_t *)(self + 0x1468);
      *(uint32_t *)(pFVar2 + 0x34) = *(uint32_t *)(self + 0x146c);
      *(uint32_t *)(pFVar2 + 0x58) = *(uint32_t *)(self + 0x13c4);
      *(uint32_t *)(pFVar2 + 0x48) = *(uint32_t *)(self + 0x14a0);
      *(uint32_t *)(pFVar2 + 0x4c) = *(uint32_t *)(self + 0x14a0);
      (**(code **)(*(long *)pFVar2 + 0x10))(pFVar2);
      if (*(int *)(self + 0x13c0) == 1) {
        iVar1 = FlashLibraryInstance__IsPlaying(pFVar2);
        if (iVar1 == 0) {
          *(uint32_t *)(self + 0x13c0) = 2;
        }
      }
      *(uint32_t *)(self + 0x13c4) = *(uint32_t *)(pFVar2 + 0x58);
    }
  }
  return;
}

/* ======================================================================
 * DrFetus__RenderClones  (Ghidra `RenderClones` @ 004687e0)
 * Signature: uint8_t __thiscall RenderClones(DrFetus * self)
 * Class: DrFetus
 * Calls: `FlashAnimationLibrary__EnableFlags`, `MeatBoyCharFoundation__Render`
 * Called by: (none)
 */
/* DrFetus__RenderClones() */

void __thiscall DrFetus__RenderClones(DrFetus *self)

{
  DrFetus *this_00;
  long lVar1;
  int iVar2;
  
  if (*(int *)(self + 0xa40) == 0) {
    FlashAnimationLibrary__EnableFlags((FlashAnimationLibrary *)**(uint64_t **)(self + 0xf8),1);
    if (*(int *)(*(long *)(self + 0xa38) + 0x2c8) == 0) {
      FlashAnimationLibrary__EnableFlags((FlashAnimationLibrary *)**(uint64_t **)(self + 0xf8),1);
      if (0 < *(int *)(*(long *)(self + 0xa38) + 0x34)) {
        iVar2 = 0;
        do {
          lVar1 = (long)iVar2;
          iVar2 = iVar2 + 1;
          this_00 = *(DrFetus **)(*(long *)(self + 0x7f0) + lVar1 * 8);
          MeatBoyCharFoundation__Render
                    (*(MeatBoyCharFoundation **)(self + 0xf8),(MeatBoyCharactor *)this_00,
                     (FlashLibraryInstance *)0x0);
          RenderShots(this_00);
        } while (iVar2 < *(int *)(*(long *)(self + 0xa38) + 0x34));
        return;
      }
    }
  }
  return;
}

/* ======================================================================
 * DrFetus__Render  (Ghidra `Render` @ 00468890)
 * Signature: uint8_t __thiscall Render(DrFetus * self)
 * Class: DrFetus
 * Calls: `MeatBoyCharFoundation__Render`, `MeatBoyCharactor__Render`
 * Called by: (none)
 */
/* DrFetus__Render() */

void __thiscall DrFetus__Render(DrFetus *self)

{
  if (*(int *)(self + 0xab0) != 1) {
    MeatBoyCharactor__Render((MeatBoyCharactor *)self);
    RenderShots(self);
    return;
  }
  (**(code **)(*(long *)self + 0x50))();
  *(uint32_t *)(*(long *)(self + 0xa98) + 0x58) = *(uint32_t *)(self + 0xab4);
  MeatBoyCharFoundation__Render
            (*(MeatBoyCharFoundation **)(self + 0xf8),(MeatBoyCharactor *)self,
             *(FlashLibraryInstance **)(self + 0xa98));
  *(uint32_t *)(self + 0xab4) = *(uint32_t *)(*(long *)(self + 0xa98) + 0x58);
  RenderShots(self);
  return;
}

/* ======================================================================
 * DrFetus__ResetShots  (Ghidra `ResetShots` @ 00468900)
 * Signature: uint8_t __thiscall ResetShots(DrFetus * self)
 * Class: DrFetus
 * Calls: (none)
 * Called by: (none)
 */
/* DrFetus__ResetShots() */

void __thiscall DrFetus__ResetShots(DrFetus *self)

{
  *(uint32_t *)(self + 0xac0) = 2;
  *(uint32_t *)(self + 0xbc0) = 2;
  *(uint32_t *)(self + 0xcc0) = 2;
  *(uint32_t *)(self + 0xdc0) = 2;
  *(uint32_t *)(self + 0xec0) = 2;
  *(uint32_t *)(self + 0xfc0) = 2;
  *(uint32_t *)(self + 0x10c0) = 2;
  *(uint32_t *)(self + 0x11c0) = 2;
  *(uint32_t *)(self + 0x12c0) = 2;
  *(uint32_t *)(self + 0x13c0) = 2;
  return;
}

/* ======================================================================
 * DrFetus__GetClonePosition  (Ghidra `GetClonePosition` @ 00468970)
 * Signature: uint8_t __thiscall GetClonePosition(DrFetus * self)
 * Class: DrFetus
 * Calls: (none)
 * Called by: `FinalBoss__Update`
 */
/* DrFetus__GetClonePosition() */

long __thiscall DrFetus__GetClonePosition(DrFetus *self)

{
  return **(long **)(self + 0x7f0) + 0xa0;
}

/* ======================================================================
 * DrFetus__IsBoundsHittingShot  (Ghidra `IsBoundsHittingShot` @ 00468990)
 * Signature: uint8_t __thiscall IsBoundsHittingShot(DrFetus * self, Bounds * arg1)
 * Class: DrFetus
 * Calls: `IsBoundsTouchingBounds`, `Vector2__operator_assign`
 * Called by: `FinalBoss__IsCollidingWithBounds`
 */
/* DrFetus__IsBoundsHittingShot(Bounds const*) */

uint64_t __thiscall DrFetus__IsBoundsHittingShot(DrFetus *self,Bounds *arg1)

{
  long lVar1;
  int iVar2;
  Bounds local_28 [4];
  uint32_t local_24;
  uint32_t local_20;
  uint32_t local_1c;
  
  lVar1 = **(long **)(self + 0x7f0);
  local_28[0] = (Bounds)0x11;
  local_24 = 0x3f800000;
  local_20 = 0;
  local_1c = 0;
  if (*(int *)(lVar1 + 0xac0) != 2) {
    Vector2__operator_assign((Vector2 *)&local_20,(Vector2 *)(lVar1 + 0xb68));
    local_24 = 0x41200000;
    iVar2 = IsBoundsTouchingBounds(local_28,arg1);
    if (iVar2 == 1) {
      return 1;
    }
  }
  if (*(int *)(lVar1 + 0xbc0) != 2) {
    Vector2__operator_assign((Vector2 *)&local_20,(Vector2 *)(lVar1 + 0xc68));
    local_24 = 0x41200000;
    iVar2 = IsBoundsTouchingBounds(local_28,arg1);
    if (iVar2 == 1) {
      return 1;
    }
  }
  if (*(int *)(lVar1 + 0xcc0) != 2) {
    Vector2__operator_assign((Vector2 *)&local_20,(Vector2 *)(lVar1 + 0xd68));
    local_24 = 0x41200000;
    iVar2 = IsBoundsTouchingBounds(local_28,arg1);
    if (iVar2 == 1) {
      return 1;
    }
  }
  if (*(int *)(lVar1 + 0xdc0) != 2) {
    Vector2__operator_assign((Vector2 *)&local_20,(Vector2 *)(lVar1 + 0xe68));
    local_24 = 0x41200000;
    iVar2 = IsBoundsTouchingBounds(local_28,arg1);
    if (iVar2 == 1) {
      return 1;
    }
  }
  if (*(int *)(lVar1 + 0xec0) != 2) {
    Vector2__operator_assign((Vector2 *)&local_20,(Vector2 *)(lVar1 + 0xf68));
    local_24 = 0x41200000;
    iVar2 = IsBoundsTouchingBounds(local_28,arg1);
    if (iVar2 == 1) {
      return 1;
    }
  }
  if (*(int *)(lVar1 + 0xfc0) != 2) {
    Vector2__operator_assign((Vector2 *)&local_20,(Vector2 *)(lVar1 + 0x1068));
    local_24 = 0x41200000;
    iVar2 = IsBoundsTouchingBounds(local_28,arg1);
    if (iVar2 == 1) {
      return 1;
    }
  }
  if (*(int *)(lVar1 + 0x10c0) != 2) {
    Vector2__operator_assign((Vector2 *)&local_20,(Vector2 *)(lVar1 + 0x1168));
    local_24 = 0x41200000;
    iVar2 = IsBoundsTouchingBounds(local_28,arg1);
    if (iVar2 == 1) {
      return 1;
    }
  }
  if (*(int *)(lVar1 + 0x11c0) != 2) {
    Vector2__operator_assign((Vector2 *)&local_20,(Vector2 *)(lVar1 + 0x1268));
    local_24 = 0x41200000;
    iVar2 = IsBoundsTouchingBounds(local_28,arg1);
    if (iVar2 == 1) {
      return 1;
    }
  }
  if (*(int *)(lVar1 + 0x12c0) != 2) {
    Vector2__operator_assign((Vector2 *)&local_20,(Vector2 *)(lVar1 + 0x1368));
    local_24 = 0x41200000;
    iVar2 = IsBoundsTouchingBounds(local_28,arg1);
    if (iVar2 == 1) {
      return 1;
    }
  }
  if (*(int *)(lVar1 + 0x13c0) != 2) {
    Vector2__operator_assign((Vector2 *)&local_20,(Vector2 *)(lVar1 + 0x1468));
    local_24 = 0x41200000;
    iVar2 = IsBoundsTouchingBounds(local_28,arg1);
    if (iVar2 == 1) {
      return 1;
    }
  }
  return 0;
}
