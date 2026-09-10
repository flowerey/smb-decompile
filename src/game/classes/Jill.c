/* src/game/classes/Jill.c — 14 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "Jill.h"

/* ======================================================================
 * Jill__ProcessSpecial  (Ghidra `ProcessSpecial` @ 0046dd00)
 * Signature: uint8_t __thiscall ProcessSpecial(Jill * self)
 * Class: Jill
 * Calls: (none)
 * Called by: (none)
 */
/* Jill__ProcessSpecial() */

void __thiscall Jill__ProcessSpecial(Jill *self)

{
  *(uint *)(self + 0xaa0) = *(byte *)(*(long *)(self + 0x7e0) + 3) >> 6 & 1;
  return;
}

/* ======================================================================
 * Jill__RecordSpecial  (Ghidra `RecordSpecial` @ 0046dd20)
 * Signature: uint8_t __thiscall RecordSpecial(Jill * self)
 * Class: Jill
 * Calls: (none)
 * Called by: (none)
 */
/* Jill__RecordSpecial() */

void __thiscall Jill__RecordSpecial(Jill *self)

{
  long lVar1;
  
  lVar1 = *(long *)(self + 0x7e0);
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 3) = *(byte *)(lVar1 + 3) & 0xbf | (byte)((*(uint *)(self + 0xaa0) & 1) << 6);
  }
  return;
}

/* ======================================================================
 * Jill__Death  (Ghidra `Death` @ 0046dd50)
 * Signature: uint8_t __thiscall Death(Jill * self)
 * Class: Jill
 * Calls: `MeatBoyCharactor__Death`
 * Called by: (none)
 */
/* Jill__Death() */

void __thiscall Jill__Death(Jill *self)

{
  *(uint32_t *)(self + 0xaa0) = 0;
  MeatBoyCharactor__Death((MeatBoyCharactor *)self);
  return;
}

/* ======================================================================
 * Jill__Reset  (Ghidra `Reset` @ 0046dd60)
 * Signature: uint8_t __thiscall Reset(Jill * self)
 * Class: Jill
 * Calls: `MeatBoyCharactor__Reset`
 * Called by: (none)
 */
/* Jill__Reset() */

void __thiscall Jill__Reset(Jill *self)

{
  *(uint32_t *)(self + 0xaa0) = 0;
  MeatBoyCharactor__Reset((MeatBoyCharactor *)self);
  return;
}

/* ======================================================================
 * Jill__Update  (Ghidra `Update` @ 0046dd70)
 * Signature: uint8_t __thiscall Update(Jill * self)
 * Class: Jill
 * Calls: `MeatBoyCharactor__ProcessReplayFrame`, `MeatBoyCharactor__Update`, `RibbonEmitter__AddRibbonPoint`
 * Called by: (none)
 */
/* Jill__Update() */

void __thiscall Jill__Update(Jill *self)

{
  MeatBoyCharactor__ProcessReplayFrame((MeatBoyCharactor *)self);
  if (*(int *)(self + 0xa40) != 0) goto LAB_0046ddb6;
  if (((byte)self[0x7d8] & 2) == 0) {
LAB_0046dd8c:
    *(uint32_t *)(self + 0xaa0) = 0;
  }
  else {
    if (DAT_005bf760 /* R:0.0f */ <= *(float *)(self + 0xbc)) {
      *(uint32_t *)(self + 0xaa0) = 0;
    }
    if (*(float *)(self + 0xbc) < DAT_005c01c0 /* R:-100.0f */) goto LAB_0046dd8c;
  }
  RibbonEmitter__AddRibbonPoint(*(RibbonEmitter **)(self + 0xaa8),(Vector2 *)(self + 0xa0));
  (**(code **)(**(long **)(self + 0xaa8) + 0x18))();
LAB_0046ddb6:
  MeatBoyCharactor__Update((MeatBoyCharactor *)self);
  return;
}

/* ======================================================================
 * Jill__WallJump  (Ghidra `WallJump` @ 0046ddf0)
 * Signature: uint8_t __thiscall WallJump(Jill * self)
 * Class: Jill
 * Calls: `GetRandomINT`, `MeatBoyCharactor__AddEffect__0047af00`
 * Called by: (none)
 */
/* Jill__WallJump() */

void __thiscall Jill__WallJump(Jill *self)

{
  ushort uVar1;
  long lVar2;
  Jill JVar3;
  int iVar4;
  uint32_t uVar5;
  uint32_t *puVar6;
  Jill JVar7;
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
    self[0x7db] = (Jill)((byte)self[0x7db] | 8);
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
  JVar3 = (Jill)((byte)self[0x7d8] & 0xfe | bVar9);
  self[0x7d8] = JVar3;
  if (bVar9) {
    JVar7 = self[0x7d9];
    uStack_38 = 0xbf800000;
    uStack_34 = 0x3f800000;
    uStack_28 = 0xbf800000;
    uStack_24 = 0x3f800000;
    if (((byte)JVar7 & 0x40) != 0) goto LAB_00474591;
    puVar6 = &uStack_38;
    puVar8 = &uStack_28;
  }
  else {
    JVar7 = self[0x7d9];
    uStack_58 = 0x3f800000;
    uStack_54 = 0x3f800000;
    uStack_48 = 0x3f800000;
    uStack_44 = 0x3f800000;
    if (((byte)JVar7 & 0x40) != 0) goto LAB_00474591;
    puVar8 = &uStack_48;
  }
  MeatBoyCharactor__AddEffect__0047af00((MeatBoyCharactor *)self,3,puVar8,puVar6);
  JVar3 = self[0x7d8];
  JVar7 = self[0x7d9];
LAB_00474591:
  self[0x7d8] = (Jill)((byte)JVar3 & 0xfb);
  self[0x7d9] = (Jill)((byte)JVar7 | 0x20);
  return;
}

/* ======================================================================
 * Jill__WallHit  (Ghidra `WallHit` @ 0046de00)
 * Signature: uint8_t __thiscall WallHit(Jill * self, tagTileCollisionType arg1)
 * Class: Jill
 * Calls: `GetRandomINT`, `MeatBoyCharactor__AddEffect__0047af00`
 * Called by: (none)
 */
/* Jill__WallHit(tagTileCollisionType) */

void __thiscall Jill__WallHit(Jill *self,int arg2)

{
  Jill JVar1;
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
  
  JVar1 = self[0x7d8];
  if (((byte)JVar1 & 4) == 0) {
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
    self[0x7db] = (Jill)((byte)self[0x7db] | 8);
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
  JVar1 = self[0x7d8];
LAB_0047440b:
  *(uint32_t *)(self + 0x7d4) = 9;
  self[0x7d8] = (Jill)((byte)JVar1 | 4);
  return;
}

/* ======================================================================
 * Jill__CreateClones  (Ghidra `CreateClones` @ 0046de70)
 * Signature: uint8_t __thiscall CreateClones(Jill * self)
 * Class: Jill
 * Calls: `FlashAnimationLibrary__GetMovieClip__005731d0`, `MeatBoyCharactor__CreateClones`
 * Called by: (none)
 */
/* Jill__CreateClones() */

void __thiscall Jill__CreateClones(Jill *self)

{
  uint64_t uVar1;
  
  uVar1 = FlashAnimationLibrary__GetMovieClip__005731d0
                    ((FlashAnimationLibrary *)**(uint64_t **)(self + 0xf8),"slowfall");
  *(uint64_t *)(self + 0xa98) = uVar1;
  MeatBoyCharactor__CreateClones((MeatBoyCharactor *)self);
  return;
}

/* ======================================================================
 * Jill__Jill__0046dea0  (Ghidra `~Jill` @ 0046dea0)
 * Signature: uint8_t __thiscall ~Jill(Jill * self)
 * Class: Jill
 * Calls: `Jill__Jill__0046e0a0`, `MeatBoyCharactor__MeatBoyCharactor__00476510`
 * Called by: (none)
 */
/* Jill__Jill__0046e0a0() */

void __thiscall Jill__Jill__0046e0a0(Jill *self)

{
  *(uint8_t ***)self = &PTR__Jill_005c00d0;
  if (*(int *)(self + 0xa40) == 0) {
    if (*(long **)(self + 0xa98) != (long *)0x0) {
                    /* try { // try from 0046dec8 to 0046dedc has its CatchHandler @ 0046deea */
      (**(code **)(**(long **)(self + 0xa98) + 8))();
    }
    if (*(long **)(self + 0xaa8) != (long *)0x0) {
      (**(code **)(**(long **)(self + 0xaa8) + 8))();
    }
  }
  MeatBoyCharactor__MeatBoyCharactor__00476510((MeatBoyCharactor *)self);
  return;
}

/* ======================================================================
 * Jill__Render  (Ghidra `Render` @ 0046df10)
 * Signature: uint8_t __thiscall Render(Jill * self)
 * Class: Jill
 * Calls: `MeatBoyCharFoundation__Render`, `MeatBoyCharactor__Render`
 * Called by: (none)
 */
/* Jill__Render() */

void __thiscall Jill__Render(Jill *self)

{
  if ((*(int *)(self + 0xaa0) == 1) && (*(int *)(self + 0x7d4) != 0xe)) {
    (**(code **)(*(long *)self + 0x50))();
    if (*(int *)(self + 0xa40) == 0) {
      (**(code **)(**(long **)(self + 0xaa8) + 0x10))();
    }
    MeatBoyCharFoundation__Render
              (*(MeatBoyCharFoundation **)(self + 0xf8),(MeatBoyCharactor *)self,
               *(FlashLibraryInstance **)(self + 0xa98));
    return;
  }
  if (*(int *)(self + 0xa40) != 0) {
    MeatBoyCharactor__Render((MeatBoyCharactor *)self);
    return;
  }
  (**(code **)(**(long **)(self + 0xaa8) + 0x10))();
  MeatBoyCharactor__Render((MeatBoyCharactor *)self);
  return;
}

/* ======================================================================
 * Jill__RenderClones  (Ghidra `RenderClones` @ 0046df90)
 * Signature: uint8_t __thiscall RenderClones(Jill * self)
 * Class: Jill
 * Calls: `FlashAnimationLibrary__DisableFlags`, `FlashAnimationLibrary__EnableFlags`, `MeatBoyCharFoundation__Render`
 * Called by: (none)
 */
/* Jill__RenderClones() */

void __thiscall Jill__RenderClones(Jill *self)

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
        if (*(int *)(pMVar1 + 0xaa0) == 1) {
          MeatBoyCharFoundation__Render
                    (*(MeatBoyCharFoundation **)(self + 0xf8),pMVar1,
                     *(FlashLibraryInstance **)(self + 0xa98));
        }
        else {
          MeatBoyCharFoundation__Render
                    (*(MeatBoyCharFoundation **)(self + 0xf8),pMVar1,(FlashLibraryInstance *)0x0);
        }
        lVar2 = *(long *)(self + 0xa38);
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(lVar2 + 0x34));
    }
  }
  return;
}

/* ======================================================================
 * Jill__Jill__0046e0a0  (Ghidra `~Jill` @ 0046e0a0)
 * Signature: uint8_t __thiscall ~Jill(Jill * self)
 * Class: Jill
 * Calls: `MeatBoyCharactor__MeatBoyCharactor__00476510`, `operator_delete`
 * Called by: `Jill__Jill__0046dea0`
 */
/* Jill__Jill__0046e0a0() */

void __thiscall Jill__Jill__0046e0a0(Jill *self)

{
  *(uint8_t ***)self = &PTR__Jill_005c00d0;
  if (*(int *)(self + 0xa40) == 0) {
    if (*(long **)(self + 0xa98) != (long *)0x0) {
                    /* try { // try from 0046e0ca to 0046e0de has its CatchHandler @ 0046e0f4 */
      (**(code **)(**(long **)(self + 0xa98) + 8))();
    }
    if (*(long **)(self + 0xaa8) != (long *)0x0) {
      (**(code **)(**(long **)(self + 0xaa8) + 8))();
    }
  }
  MeatBoyCharactor__MeatBoyCharactor__00476510((MeatBoyCharactor *)self);
  operator_delete(self);
  return;
}

/* ======================================================================
 * Jill__Jill__0046e110  (Ghidra `Jill` @ 0046e110)
 * Signature: uint8_t __thiscall Jill(Jill * self)
 * Class: Jill
 * Calls: `FormatResourcePath`, `Jill__Jill__0046e1e0`, `MeatBoyCharactor__MeatBoyCharactor__0047b350`, `RibbonEmitter__RibbonEmitter__0059ac20`, `operator_new`
 * Called by: (none)
 */
/* Jill__Jill__0046e1e0() */

void __thiscall Jill__Jill__0046e1e0(Jill *self)

{
  uint64_t uVar1;
  RibbonEmitter *this_00;
  uint32_t local_48;
  uint32_t local_44;
  uint64_t local_40;
  uint64_t local_38;
  uint64_t local_30;
  uint64_t local_28;
  uint32_t local_20;
  
  uVar1 = FormatResourcePath("/Animations/jill.am",&strCharPath);
  MeatBoyCharactor__MeatBoyCharactor__0047b350((MeatBoyCharactor *)self,uVar1,0x12);
  *(uint8_t ***)self = &PTR__Jill_005c00d0;
  local_38 = DAT_00818e58 /* R:2.0739217272007293e-43f */;
  local_40 = ::cBlack;
  *(uint32_t *)(self + 0xa54) = 0x12;
  *(uint32_t *)(self + 0xaa0) = 0;
  local_44 = 0;
  local_30 = local_40;
  local_28 = local_38;
  local_48 = 0x40000000;
  local_20 = 10;
                    /* try { // try from 0046e192 to 0046e196 has its CatchHandler @ 0046e1b5 */
  this_00 = operator_new(0x70);
                    /* try { // try from 0046e1a2 to 0046e1a6 has its CatchHandler @ 0046e1c8 */
  RibbonEmitter__RibbonEmitter__0059ac20(this_00,(RibbonEmitterCreation *)&local_48);
  *(RibbonEmitter **)(self + 0xaa8) = this_00;
  return;
}

/* ======================================================================
 * Jill__Jill__0046e1e0  (Ghidra `Jill` @ 0046e1e0)
 * Signature: uint8_t __thiscall Jill(Jill * self, MeatBoyCharactor * arg1, int arg2)
 * Class: Jill
 * Calls: `MeatBoyCharactor__Clone`, `MeatBoyCharactor__MeatBoyCharactor__0047b350`
 * Called by: `GSMBCharactor__CreateCharactor`, `GSMBCharactor__CreateCharactor__0049c600`, `Jill__Jill`, `Jill__Jill__0046e110`
 */
/* Jill__Jill__0046e1e0(MeatBoyCharactor*, int) */

void __thiscall Jill__Jill__0046e1e0(Jill *self,MeatBoyCharactor *arg1,int arg2)

{
  MeatBoyCharactor__MeatBoyCharactor__0047b350((MeatBoyCharactor *)self);
  *(uint8_t ***)self = &PTR__Jill_005c00d0;
                    /* try { // try from 0046e212 to 0046e216 has its CatchHandler @ 0046e242 */
  MeatBoyCharactor__Clone((MeatBoyCharactor *)self,arg1,arg2);
  *(uint32_t *)(self + 0xaa0) = 0;
  *(uint64_t *)(self + 0xa98) = *(uint64_t *)(arg1 + 0xa98);
  return;
}
