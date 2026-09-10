/* src/game/classes/Tim.c — 16 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "Tim.h"

/* ======================================================================
 * Tim__RecordSpecial  (Ghidra `RecordSpecial` @ 00518a50)
 * Signature: uint8_t __thiscall RecordSpecial(Tim * self)
 * Class: Tim
 * Calls: (none)
 * Called by: (none)
 */
/* Tim__RecordSpecial() */

void __thiscall Tim__RecordSpecial(Tim *self)

{
  *(byte *)(*(long *)(self + 0x7e0) + 3) =
       *(byte *)(*(long *)(self + 0x7e0) + 3) & 0xbf | ((byte)self[0x10e4] & 1) << 6;
  if (((byte)self[0x10e4] & 1) != 0) {
    self[0x7db] = (Tim)((byte)self[0x7db] | 8);
  }
  return;
}

/* ======================================================================
 * Tim__ProcessSpecial  (Ghidra `ProcessSpecial` @ 00518a90)
 * Signature: uint8_t __thiscall ProcessSpecial(Tim * self)
 * Class: Tim
 * Calls: (none)
 * Called by: (none)
 */
/* Tim__ProcessSpecial() */

void __thiscall Tim__ProcessSpecial(Tim *self)

{
  self[0x10e4] = (Tim)((byte)self[0x10e4] & 0xfe | *(byte *)(*(long *)(self + 0x7e0) + 3) >> 6 & 1);
  return;
}

/* ======================================================================
 * Tim__Reset  (Ghidra `Reset` @ 00518ac0)
 * Signature: uint8_t __thiscall Reset(Tim * self)
 * Class: Tim
 * Calls: `MeatBoyCharactor__Reset`
 * Called by: (none)
 */
/* Tim__Reset() */

void __thiscall Tim__Reset(Tim *self)

{
  MeatBoyCharactor__Reset((MeatBoyCharactor *)self);
  self[0x10e0] = (Tim)0x0;
  self[0x10e1] = (Tim)0x0;
  self[0x10e2] = (Tim)0x0;
  self[0x10e3] = (Tim)0x0;
  *(uint *)(self + 0x10e4) = *(uint *)(self + 0x10e4) & 1;
  self[0x10e4] = (Tim)0x0;
  *(uint32_t *)(self + 0xbc) = 0;
  *(uint32_t *)(self + 0xb8) = 0;
  *(uint32_t *)(self + 0xf0) = 0;
  *(uint32_t *)(self + 0xec) = 0;
  return;
}

/* ======================================================================
 * Tim__WallJump  (Ghidra `WallJump` @ 00518b20)
 * Signature: uint8_t __thiscall WallJump(Tim * self)
 * Class: Tim
 * Calls: `GetRandomINT`, `MeatBoyCharactor__AddEffect__0047af00`
 * Called by: (none)
 */
/* Tim__WallJump() */

void __thiscall Tim__WallJump(Tim *self)

{
  ushort uVar1;
  long lVar2;
  Tim TVar3;
  int iVar4;
  uint32_t uVar5;
  uint32_t *puVar6;
  Tim TVar7;
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
    self[0x7db] = (Tim)((byte)self[0x7db] | 8);
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
  TVar3 = (Tim)((byte)self[0x7d8] & 0xfe | bVar9);
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
  self[0x7d8] = (Tim)((byte)TVar3 & 0xfb);
  self[0x7d9] = (Tim)((byte)TVar7 | 0x20);
  return;
}

/* ======================================================================
 * Tim__WallHit  (Ghidra `WallHit` @ 00518b30)
 * Signature: uint8_t __thiscall WallHit(Tim * self, tagTileCollisionType arg1)
 * Class: Tim
 * Calls: `GetRandomINT`, `MeatBoyCharactor__AddEffect__0047af00`
 * Called by: (none)
 */
/* Tim__WallHit(tagTileCollisionType) */

void __thiscall Tim__WallHit(Tim *self,int arg2)

{
  Tim TVar1;
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
  
  TVar1 = self[0x7d8];
  if (((byte)TVar1 & 4) == 0) {
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
    self[0x7db] = (Tim)((byte)self[0x7db] | 8);
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
  TVar1 = self[0x7d8];
LAB_0047440b:
  *(uint32_t *)(self + 0x7d4) = 9;
  self[0x7d8] = (Tim)((byte)TVar1 | 4);
  return;
}

/* ======================================================================
 * Tim__CreateClones  (Ghidra `CreateClones` @ 00518b40)
 * Signature: uint8_t __thiscall CreateClones(Tim * self)
 * Class: Tim
 * Calls: `FlashAnimationLibrary__GetMovieClip__005731d0`, `MeatBoyCharactor__CreateClones`
 * Called by: (none)
 */
/* Tim__CreateClones() */

void __thiscall Tim__CreateClones(Tim *self)

{
  uint64_t uVar1;
  
  uVar1 = FlashAnimationLibrary__GetMovieClip__005731d0
                    ((FlashAnimationLibrary *)**(uint64_t **)(self + 0xf8),"glow");
  *(uint64_t *)(self + 0xa98) = uVar1;
  MeatBoyCharactor__CreateClones((MeatBoyCharactor *)self);
  return;
}

/* ======================================================================
 * Tim__Tim__00518b70  (Ghidra `~Tim` @ 00518b70)
 * Signature: uint8_t __thiscall ~Tim(Tim * self)
 * Class: Tim
 * Calls: `MeatBoyCharactor__MeatBoyCharactor__00476510`, `Tim__Tim__00518bd0`
 * Called by: (none)
 */
/* Tim__Tim__00518bd0() */

void __thiscall Tim__Tim__00518bd0(Tim *self)

{
  *(uint8_t ***)self = &PTR__Tim_005c9810;
  if ((*(int *)(self + 0xa40) == 0) && (*(long **)(self + 0xa98) != (long *)0x0)) {
                    /* try { // try from 00518b98 to 00518b9a has its CatchHandler @ 00518ba8 */
    (**(code **)(**(long **)(self + 0xa98) + 8))();
  }
  MeatBoyCharactor__MeatBoyCharactor__00476510((MeatBoyCharactor *)self);
  return;
}

/* ======================================================================
 * Tim__Tim__00518bd0  (Ghidra `~Tim` @ 00518bd0)
 * Signature: uint8_t __thiscall ~Tim(Tim * self)
 * Class: Tim
 * Calls: `operator_delete`
 * Called by: `Tim__Tim__00518b70`
 */
/* Tim__Tim__00518bd0() */

void __thiscall Tim__Tim__00518bd0(Tim *self)

{
  Tim__dtor(self);
  operator_delete(self);
  return;
}

/* ======================================================================
 * Tim__Render  (Ghidra `Render` @ 00518bf0)
 * Signature: uint8_t __thiscall Render(Tim * self)
 * Class: Tim
 * Calls: `FlashAnimationLibrary__DisableFlags`, `FlashAnimationLibrary__EnableFlags`, `MeatBoyCharactor__Render`
 * Called by: (none)
 */
/* Tim__Render() */

void __thiscall Tim__Render(Tim *self)

{
  MeatBoyCharactor__Render((MeatBoyCharactor *)self);
  if (((byte)self[0x10e4] & 1) == 0) {
    return;
  }
  *(uint32_t *)(*(long *)(self + 0xa98) + 0x30) = *(uint32_t *)(self + 0xa0);
  *(uint32_t *)(*(long *)(self + 0xa98) + 0x34) = *(uint32_t *)(self + 0xa4);
  FlashAnimationLibrary__DisableFlags((FlashAnimationLibrary *)**(uint64_t **)(self + 0xf8),1);
  (**(code **)(**(long **)(self + 0xa98) + 0x10))();
  FlashAnimationLibrary__EnableFlags((FlashAnimationLibrary *)**(uint64_t **)(self + 0xf8),1);
  return;
}

/* ======================================================================
 * Tim__RenderClones  (Ghidra `RenderClones` @ 00518c60)
 * Signature: uint8_t __thiscall RenderClones(Tim * self)
 * Class: Tim
 * Calls: `FlashAnimationLibrary__DisableFlags`, `FlashAnimationLibrary__EnableFlags`, `MeatBoyCharFoundation__Render`
 * Called by: (none)
 */
/* Tim__RenderClones() */

void __thiscall Tim__RenderClones(Tim *self)

{
  MeatBoyCharactor *pMVar1;
  long lVar2;
  int iVar3;
  
  if (*(int *)(self + 0xa40) == 0) {
    FlashAnimationLibrary__EnableFlags((FlashAnimationLibrary *)**(uint64_t **)(self + 0xf8),1);
    lVar2 = *(long *)(self + 0xa38);
    if ((*(int *)(lVar2 + 0x2c8) == 0) && (0 < *(int *)(lVar2 + 0x34))) {
      iVar3 = 0;
      do {
        if ((*(int *)(lVar2 + 0x3c) == iVar3) &&
           (iVar3 == *(int *)(*(long *)(*(long *)(self + 0x7f0) + (long)iVar3 * 8) + 0xa90))) {
          FlashAnimationLibrary__EnableFlags
                    ((FlashAnimationLibrary *)**(uint64_t **)(self + 0xf8),1);
        }
        else {
          FlashAnimationLibrary__DisableFlags
                    ((FlashAnimationLibrary *)**(uint64_t **)(self + 0xf8),1);
        }
        pMVar1 = *(MeatBoyCharactor **)(*(long *)(self + 0x7f0) + (long)iVar3 * 8);
        MeatBoyCharFoundation__Render
                  (*(MeatBoyCharFoundation **)(self + 0xf8),pMVar1,(FlashLibraryInstance *)0x0);
        if (((byte)pMVar1[0x10e4] & 1) != 0) {
          FlashAnimationLibrary__DisableFlags
                    ((FlashAnimationLibrary *)**(uint64_t **)(self + 0xf8),1);
          *(uint32_t *)(*(long *)(pMVar1 + 0xa98) + 0x58) = *(uint32_t *)(self + 0x10ec);
          *(uint32_t *)(*(long *)(pMVar1 + 0xa98) + 0x30) = *(uint32_t *)(pMVar1 + 0xa0);
          *(uint32_t *)(*(long *)(pMVar1 + 0xa98) + 0x34) = *(uint32_t *)(pMVar1 + 0xa4);
          (**(code **)(**(long **)(pMVar1 + 0xa98) + 0x10))();
          *(uint32_t *)(self + 0x10ec) = *(uint32_t *)(*(long *)(pMVar1 + 0xa98) + 0x58);
          FlashAnimationLibrary__EnableFlags
                    ((FlashAnimationLibrary *)**(uint64_t **)(self + 0xf8),1);
        }
        lVar2 = *(long *)(self + 0xa38);
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(lVar2 + 0x34));
    }
  }
  return;
}

/* ======================================================================
 * Tim__Tim__00518e90  (Ghidra `Tim` @ 00518e90)
 * Signature: uint8_t __thiscall Tim(Tim * self)
 * Class: Tim
 * Calls: `FormatResourcePath`, `MeatBoyCharactor__MeatBoyCharactor__0047b350`, `Tim__Tim__00518f20`
 * Called by: (none)
 */
/* Tim__Tim__00518f20() */

void __thiscall Tim__Tim__00518f20(Tim *self)

{
  uint64_t uVar1;
  
  uVar1 = FormatResourcePath("/Animations/Tim.am",&strCharPath);
  MeatBoyCharactor__MeatBoyCharactor__0047b350((MeatBoyCharactor *)self,uVar1,0x1d);
  *(uint8_t ***)self = &PTR__Tim_005c9810;
  *(uint32_t *)(self + 0xa54) = 0x1d;
  self[0x10e0] = (Tim)0x0;
  self[0x10e1] = (Tim)0x0;
  self[0x10e2] = (Tim)0x0;
  self[0x10e3] = (Tim)0x0;
  *(uint *)(self + 0x10e4) = *(uint *)(self + 0x10e4) & 1;
  self[0x10e4] = (Tim)0x0;
  *(uint32_t *)(self + 0xbc) = 0;
  *(uint32_t *)(self + 0xb8) = 0;
  *(uint32_t *)(self + 0xf0) = 0;
  *(uint32_t *)(self + 0xec) = 0;
  *(uint32_t *)(self + 0x10e8) = *(uint32_t *)(self + 0x8c4);
  return;
}

/* ======================================================================
 * Tim__Tim__00518f20  (Ghidra `Tim` @ 00518f20)
 * Signature: uint8_t __thiscall Tim(Tim * self, MeatBoyCharactor * arg1, int arg2)
 * Class: Tim
 * Calls: `MeatBoyCharactor__Clone`, `MeatBoyCharactor__MeatBoyCharactor__0047b350`
 * Called by: `GSMBCharactor__CreateCharactor__0049c600`, `Tim__Tim`, `Tim__Tim__00518e90`
 */
/* Tim__Tim__00518f20(MeatBoyCharactor*, int) */

void __thiscall Tim__Tim__00518f20(Tim *self,MeatBoyCharactor *arg1,int arg2)

{
  MeatBoyCharactor__MeatBoyCharactor__0047b350((MeatBoyCharactor *)self);
  *(uint8_t ***)self = &PTR__Tim_005c9810;
                    /* try { // try from 00518f51 to 00518f55 has its CatchHandler @ 00518fdd */
  MeatBoyCharactor__Clone((MeatBoyCharactor *)self,arg1,arg2);
  self[0x10e0] = (Tim)0x0;
  self[0x10e1] = (Tim)0x0;
  self[0x10e2] = (Tim)0x0;
  self[0x10e3] = (Tim)0x0;
  *(uint32_t *)(self + 0xbc) = 0;
  *(uint32_t *)(self + 0xb8) = 0;
  *(uint32_t *)(self + 0xf0) = 0;
  *(uint *)(self + 0x10e4) = *(uint *)(self + 0x10e4) & 1;
  self[0x10e4] = (Tim)0x0;
  *(uint32_t *)(self + 0xec) = 0;
  *(uint32_t *)(self + 0x10e8) = *(uint32_t *)(self + 0x8c4);
  *(uint64_t *)(self + 0xa98) = *(uint64_t *)(arg1 + 0xa98);
  return;
}

/* ======================================================================
 * Tim__AddFrame  (Ghidra `AddFrame` @ 00518ff0)
 * Signature: uint8_t __thiscall AddFrame(Tim * self)
 * Class: Tim
 * Calls: `Vector2__operator_assign`
 * Called by: (none)
 */
/* Tim__AddFrame() */

void __thiscall Tim__AddFrame(Tim *self)

{
  Tim TVar1;
  Tim TVar2;
  long lVar3;
  
  Vector2__operator_assign((Vector2 *)(self + ((long)(char)self[0x10e0] + 0xaa) * 0x10),
                     (Vector2 *)(self + 0xa0));
  TVar2 = self[0x10e0];
  lVar3 = (long)(char)TVar2 + 0xaa;
  *(uint32_t *)(self + lVar3 * 0x10 + 8) = *(uint32_t *)(self + 0x7d4);
  *(uint *)(self + lVar3 * 0x10 + 0xc) =
       *(uint *)(self + lVar3 * 0x10 + 0xc) & 0x80000000 | *(uint *)(self + 0xa4c) & 0x7fffffff;
  self[lVar3 * 0x10 + 0xf] = (Tim)((byte)self[lVar3 * 0x10 + 0xf] & 0x7f | (char)self[0x7d8] << 7);
  TVar2 = (Tim)((char)TVar2 + '\x01');
  TVar1 = (Tim)0x0;
  if (TVar2 != (Tim)0x64) {
    TVar1 = TVar2;
  }
  self[0x10e0] = TVar1;
  TVar2 = SUB41((int)(char)self[0x10e2] + 1U,0);
  if (100 < (int)(char)self[0x10e2] + 1U) {
    TVar2 = (Tim)0x64;
  }
  self[0x10e2] = TVar2;
  return;
}

/* ======================================================================
 * Tim__RestoreFrame  (Ghidra `RestoreFrame` @ 005190a0)
 * Signature: uint8_t __thiscall RestoreFrame(Tim * self)
 * Class: Tim
 * Calls: `MeatBoyCharactor__SetState`, `Vector2__operator_assign`
 * Called by: (none)
 */
/* Tim__RestoreFrame() */

void __thiscall Tim__RestoreFrame(Tim *self)

{
  Vector2 *this_00;
  Tim TVar1;
  
  this_00 = (Vector2 *)(self + 0xa0);
  Vector2__operator_assign(this_00,(Vector2 *)(self + ((long)(char)self[0x10e3] + 0xaa) * 0x10));
  MeatBoyCharactor__SetState
            ((MeatBoyCharactor *)self,
             *(uint32_t *)(self + ((long)(char)self[0x10e3] + 0xaa) * 0x10 + 8));
  *(int *)(self + 0xa4c) = *(int *)(self + ((long)(char)self[0x10e3] + 0xaa) * 0x10 + 0xc) * 2 >> 1;
  self[0x7d8] = (Tim)((byte)self[0x7d8] & 0xfe |
                     (byte)self[((long)(char)self[0x10e3] + 0xaa) * 0x10 + 0xf] >> 7);
  Vector2__operator_assign((Vector2 *)(self + 0xa8),this_00);
  Vector2__operator_assign((Vector2 *)(self + 0x868),this_00);
  if (('\0' < (char)self[0x10e2]) &&
     (TVar1 = (Tim)((char)self[0x10e2] + -1), self[0x10e2] = TVar1, TVar1 != (Tim)0x0)) {
    TVar1 = (Tim)0x63;
    if (-1 < (char)((char)self[0x10e3] + -1)) {
      TVar1 = (Tim)((char)self[0x10e3] + -1);
    }
    self[0x10e3] = TVar1;
  }
  return;
}

/* ======================================================================
 * Tim__Update  (Ghidra `Update` @ 00519180)
 * Signature: uint8_t __thiscall Update(Tim * self)
 * Class: Tim
 * Calls: `MeatBoyCharactor__ProcessReplayFrame`, `MeatBoyCharactor__Update`, `Vector2__operator_assign`
 * Called by: (none)
 */
/* Tim__Update() */

void __thiscall Tim__Update(Tim *self)

{
  Tim TVar1;
  Tim TVar2;
  long lVar3;
  
  MeatBoyCharactor__ProcessReplayFrame((MeatBoyCharactor *)self);
  *(uint32_t *)(self + 0x8a8) = *(uint32_t *)(self + 0x8ac);
  if (*(int *)(self + 0xa40) != 0) {
    MeatBoyCharactor__Update((MeatBoyCharactor *)self);
    return;
  }
  if ((((byte)self[0x10e4] & 1) != 0) && (*(int *)(self + 0x7d4) != 0xe)) {
    *(uint32_t *)(self + 0x8c4) = 0;
    MeatBoyCharactor__Update((MeatBoyCharactor *)self);
    RestoreFrame(self);
    return;
  }
  *(uint32_t *)(self + 0x8c4) = *(uint32_t *)(self + 0x10e8);
  MeatBoyCharactor__Update((MeatBoyCharactor *)self);
  if (*(int *)(self + 0x7d4) != 0xe) {
    Vector2__operator_assign((Vector2 *)(self + ((long)(char)self[0x10e0] + 0xaa) * 0x10),
                       (Vector2 *)(self + 0xa0));
    TVar2 = self[0x10e0];
    lVar3 = (long)(char)TVar2 + 0xaa;
    *(uint32_t *)(self + lVar3 * 0x10 + 8) = *(uint32_t *)(self + 0x7d4);
    *(uint *)(self + lVar3 * 0x10 + 0xc) =
         *(uint *)(self + lVar3 * 0x10 + 0xc) & 0x80000000 | *(uint *)(self + 0xa4c) & 0x7fffffff;
    self[lVar3 * 0x10 + 0xf] = (Tim)((byte)self[lVar3 * 0x10 + 0xf] & 0x7f | (char)self[0x7d8] << 7)
    ;
    TVar2 = (Tim)((char)TVar2 + '\x01');
    TVar1 = (Tim)0x0;
    if (TVar2 != (Tim)0x64) {
      TVar1 = TVar2;
    }
    self[0x10e0] = TVar1;
    TVar2 = SUB41((int)(char)self[0x10e2] + 1U,0);
    if (100 < (int)(char)self[0x10e2] + 1U) {
      TVar2 = (Tim)0x64;
    }
    self[0x10e2] = TVar2;
  }
  return;
}

/* ======================================================================
 * Tim__ResetFrames  (Ghidra `ResetFrames` @ 005192b0)
 * Signature: uint8_t __thiscall ResetFrames(Tim * self)
 * Class: Tim
 * Calls: (none)
 * Called by: (none)
 */
/* Tim__ResetFrames() */

void __thiscall Tim__ResetFrames(Tim *self)

{
  self[0x10e0] = (Tim)0x0;
  self[0x10e1] = (Tim)0x0;
  self[0x10e2] = (Tim)0x0;
  self[0x10e3] = (Tim)0x0;
  *(uint *)(self + 0x10e4) = *(uint *)(self + 0x10e4) & 1;
  self[0x10e4] = (Tim)0x0;
  *(uint32_t *)(self + 0xbc) = 0;
  *(uint32_t *)(self + 0xb8) = 0;
  *(uint32_t *)(self + 0xf0) = 0;
  *(uint32_t *)(self + 0xec) = 0;
  return;
}
