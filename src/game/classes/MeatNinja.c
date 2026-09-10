/* src/game/classes/MeatNinja.c — 16 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "MeatNinja.h"

/* ======================================================================
 * MeatNinja__RecordSpecial  (Ghidra `RecordSpecial` @ 00480e60)
 * Signature: uint8_t __thiscall RecordSpecial(MeatNinja * self)
 * Class: MeatNinja
 * Calls: (none)
 * Called by: (none)
 */
/* MeatNinja__RecordSpecial() */

void __thiscall MeatNinja__RecordSpecial(MeatNinja *self)

{
  long lVar1;

  lVar1 = *(long *)(self + 0x7e0);
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 3) = *(byte *)(lVar1 + 3) & 0xbf | (byte)((*(uint *)(self + 0xaa4) & 1) << 6);
  }
  return;
}

/* ======================================================================
 * MeatNinja__Reset  (Ghidra `Reset` @ 00480e90)
 * Signature: uint8_t __thiscall Reset(MeatNinja * self)
 * Class: MeatNinja
 * Calls: `MeatBoyCharactor__Reset`
 * Called by: (none)
 */
/* MeatNinja__Reset() */

void __thiscall MeatNinja__Reset(MeatNinja *self)

{
  MeatBoyCharactor__Reset((MeatBoyCharactor *)self);
  *(uint32_t *)(self + 0xa54) = 7;
  *(uint32_t *)(self + 0xaa4) = 0;
  *(uint32_t *)(self + 0xaa8) = 1;
  *(uint32_t *)(self + 0xaa0) = 9999;
  *(uint32_t *)(self + 0xab0) = 0;
  return;
}

/* ======================================================================
 * MeatNinja__WallJump  (Ghidra `WallJump` @ 00480ed0)
 * Signature: uint8_t __thiscall WallJump(MeatNinja * self)
 * Class: MeatNinja
 * Calls: `GetRandomINT`, `MeatBoyCharactor__AddEffect__0047af00`
 * Called by: (none)
 */
/* MeatNinja__WallJump() */

void __thiscall MeatNinja__WallJump(MeatNinja *self)

{
  ushort uVar1;
  long lVar2;
  MeatNinja MVar3;
  int iVar4;
  uint32_t uVar5;
  uint32_t *puVar6;
  MeatNinja MVar7;
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
    self[0x7db] = (MeatNinja)((byte)self[0x7db] | 8);
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
  MVar3 = (MeatNinja)((byte)self[0x7d8] & 0xfe | bVar9);
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
  self[0x7d8] = (MeatNinja)((byte)MVar3 & 0xfb);
  self[0x7d9] = (MeatNinja)((byte)MVar7 | 0x20);
  return;
}

/* ======================================================================
 * MeatNinja__WallHit  (Ghidra `WallHit` @ 00480ee0)
 * Signature: uint8_t __thiscall WallHit(MeatNinja * self, tagTileCollisionType arg1)
 * Class: MeatNinja
 * Calls: `GetRandomINT`, `MeatBoyCharactor__AddEffect__0047af00`
 * Called by: (none)
 */
/* MeatNinja__WallHit(tagTileCollisionType) */

void __thiscall MeatNinja__WallHit(MeatNinja *self, int arg2)

{
  MeatNinja MVar1;
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

  MVar1 = self[0x7d8];
  if (((byte)MVar1 & 4) == 0) {
    if (*(int *)(self + 0x7d4) == 9)
      goto LAB_0047440b;
    if (arg2 == 4) {
      uStack_48 = 0x3f800000;
      uStack_44 = 0x3f800000;
      uStack_58 = 0x3f800000;
      uStack_54 = 0x3f800000;
      if (((byte)self[0x7d9] & 0x40) == 0) {
        MeatBoyCharactor__AddEffect__0047af00((MeatBoyCharactor *)self, 2, &uStack_58, &uStack_48);
        iVar4 = *(int *)(self + 0x7d4);
        goto LAB_004743cd;
      }
    } else {
      uStack_28 = 0xbf800000;
      uStack_24 = 0x3f800000;
      uStack_38 = 0xbf800000;
      uStack_34 = 0x3f800000;
      if (((byte)self[0x7d9] & 0x40) == 0) {
        MeatBoyCharactor__AddEffect__0047af00((MeatBoyCharactor *)self, 2, &uStack_38, &uStack_28);
        goto LAB_004743c7;
      }
    }
  LAB_004743d2:
    lVar3 = *(long *)(self + 0xf8);
    self[0x7db] = (MeatNinja)((byte)self[0x7db] | 8);
    uVar5 = 0;
    uVar2 = *(ushort *)(lVar3 + 0x348);
    if (uVar2 != 0) {
      uVar5 = GetRandomINT(0, uVar2 - 1);
    }
    *(uint32_t *)(lVar3 + 0x370) = uVar5;
    *(uint32_t *)(self + 0xa4c) = uVar5;
    *(uint32_t *)(self + 0xa50) = 0;
  } else {
  LAB_004743c7:
    iVar4 = *(int *)(self + 0x7d4);
  LAB_004743cd:
    if (iVar4 != 9)
      goto LAB_004743d2;
  }
  MVar1 = self[0x7d8];
LAB_0047440b:
  *(uint32_t *)(self + 0x7d4) = 9;
  self[0x7d8] = (MeatNinja)((byte)MVar1 | 4);
  return;
}

/* ======================================================================
 * MeatNinja__CreateClones  (Ghidra `CreateClones` @ 00480ef0)
 * Signature: uint8_t __thiscall CreateClones(MeatNinja * self)
 * Class: MeatNinja
 * Calls: `FlashAnimationLibrary__GetMovieClip__005731d0`, `MeatBoyCharactor__CreateClones`
 * Called by: (none)
 */
/* MeatNinja__CreateClones() */

void __thiscall MeatNinja__CreateClones(MeatNinja *self)

{
  uint64_t uVar1;

  uVar1 = FlashAnimationLibrary__GetMovieClip__005731d0(
      (FlashAnimationLibrary *)**(uint64_t **)(self + 0xf8), "meatpoof");
  *(uint64_t *)(self + 0xa98) = uVar1;
  MeatBoyCharactor__CreateClones((MeatBoyCharactor *)self);
  return;
}

/* ======================================================================
 * MeatNinja__MeatNinja__00480f20  (Ghidra `~MeatNinja` @ 00480f20)
 * Signature: uint8_t __thiscall ~MeatNinja(MeatNinja * self)
 * Class: MeatNinja
 * Calls: `MeatBoyCharactor__MeatBoyCharactor__00476510`, `MeatNinja__MeatNinja__00480f80`
 * Called by: (none)
 */
/* MeatNinja__MeatNinja__00480f80() */

void __thiscall MeatNinja__MeatNinja__00480f80(MeatNinja *self)

{
  *(uint8_t ***)self = &PTR__MeatNinja_005c0d10;
  if ((*(int *)(self + 0xa40) == 0) && (*(long **)(self + 0xa98) != (long *)0x0)) {
    /* try { // try from 00480f48 to 00480f4a has its CatchHandler @ 00480f58 */
    (**(code **)(**(long **)(self + 0xa98) + 8))();
  }
  MeatBoyCharactor__MeatBoyCharactor__00476510((MeatBoyCharactor *)self);
  return;
}

/* ======================================================================
 * MeatNinja__MeatNinja__00480f80  (Ghidra `~MeatNinja` @ 00480f80)
 * Signature: uint8_t __thiscall ~MeatNinja(MeatNinja * self)
 * Class: MeatNinja
 * Calls: `operator_delete`
 * Called by: `MeatNinja__MeatNinja__00480f20`
 */
/* MeatNinja__MeatNinja__00480f80() */

void __thiscall MeatNinja__MeatNinja__00480f80(MeatNinja *self)

{
  MeatNinja__dtor(self);
  operator_delete(self);
  return;
}

/* ======================================================================
 * MeatNinja__RenderClones  (Ghidra `RenderClones` @ 00480ff0)
 * Signature: uint8_t __thiscall RenderClones(MeatNinja * self)
 * Class: MeatNinja
 * Calls: `FlashAnimationLibrary__DisableFlags`, `FlashAnimationLibrary__EnableFlags`, `FlashLibraryInstance__IsPlaying`, `MeatBoyCharFoundation__Render`
 * Called by: (none)
 */
/* MeatNinja__RenderClones() */

void __thiscall MeatNinja__RenderClones(MeatNinja *self)

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
        if (*(int *)(self + 0xaa4) == 0) {
          MeatBoyCharFoundation__Render(*(MeatBoyCharFoundation **)(self + 0xf8), pMVar1,
                                        (FlashLibraryInstance *)0x0);
          if (*(int *)(pMVar1 + 0xac4) != 1)
            goto LAB_00481051;
        LAB_004810cf:
          *(uint32_t *)(*(long *)(pMVar1 + 0xa98) + 0x58) = *(uint32_t *)(pMVar1 + 0xab8);
          *(uint32_t *)(*(long *)(pMVar1 + 0xa98) + 0x30) = *(uint32_t *)(pMVar1 + 0xabc);
          *(uint32_t *)(*(long *)(pMVar1 + 0xa98) + 0x34) = *(uint32_t *)(pMVar1 + 0xac0);
          (**(code **)(**(long **)(pMVar1 + 0xa98) + 0x10))();
          *(uint32_t *)(pMVar1 + 0xab8) =
              *(uint32_t *)(*(FlashLibraryInstance **)(pMVar1 + 0xa98) + 0x58);
          iVar2 = FlashLibraryInstance__IsPlaying(*(FlashLibraryInstance **)(pMVar1 + 0xa98));
          if (iVar2 != 0)
            goto LAB_00481051;
          *(uint32_t *)(pMVar1 + 0xac4) = 0;
          if (*(int *)(pMVar1 + 0xad4) == 1)
            goto LAB_00481140;
        LAB_0048105e:
          iVar2 = *(int *)(pMVar1 + 0xae4);
        } else {
          if (*(int *)(pMVar1 + 0xac4) == 1)
            goto LAB_004810cf;
        LAB_00481051:
          if (*(int *)(pMVar1 + 0xad4) != 1)
            goto LAB_0048105e;
        LAB_00481140:
          *(uint32_t *)(*(long *)(pMVar1 + 0xa98) + 0x58) = *(uint32_t *)(pMVar1 + 0xac8);
          *(uint32_t *)(*(long *)(pMVar1 + 0xa98) + 0x30) = *(uint32_t *)(pMVar1 + 0xacc);
          *(uint32_t *)(*(long *)(pMVar1 + 0xa98) + 0x34) = *(uint32_t *)(pMVar1 + 0xad0);
          (**(code **)(**(long **)(pMVar1 + 0xa98) + 0x10))();
          *(uint32_t *)(pMVar1 + 0xac8) =
              *(uint32_t *)(*(FlashLibraryInstance **)(pMVar1 + 0xa98) + 0x58);
          iVar2 = FlashLibraryInstance__IsPlaying(*(FlashLibraryInstance **)(pMVar1 + 0xa98));
          if (iVar2 != 0)
            goto LAB_0048105e;
          iVar2 = *(int *)(pMVar1 + 0xae4);
          *(uint32_t *)(pMVar1 + 0xad4) = 0;
        }
        if (iVar2 == 1) {
          *(uint32_t *)(*(long *)(pMVar1 + 0xa98) + 0x58) = *(uint32_t *)(pMVar1 + 0xad8);
          *(uint32_t *)(*(long *)(pMVar1 + 0xa98) + 0x30) = *(uint32_t *)(pMVar1 + 0xadc);
          *(uint32_t *)(*(long *)(pMVar1 + 0xa98) + 0x34) = *(uint32_t *)(pMVar1 + 0xae0);
          (**(code **)(**(long **)(pMVar1 + 0xa98) + 0x10))();
          *(uint32_t *)(pMVar1 + 0xad8) =
              *(uint32_t *)(*(FlashLibraryInstance **)(pMVar1 + 0xa98) + 0x58);
          iVar2 = FlashLibraryInstance__IsPlaying(*(FlashLibraryInstance **)(pMVar1 + 0xa98));
          if (iVar2 == 0) {
            *(uint32_t *)(pMVar1 + 0xae4) = 0;
          }
        }
        lVar3 = *(long *)(self + 0xa38);
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(lVar3 + 0x34));
    }
  }
  return;
}

/* ======================================================================
 * MeatNinja__Render  (Ghidra `Render` @ 00481260)
 * Signature: uint8_t __thiscall Render(MeatNinja * self)
 * Class: MeatNinja
 * Calls: `FlashLibraryInstance__IsPlaying`, `MeatBoyCharactor__Render`
 * Called by: (none)
 */
/* MeatNinja__Render() */

void __thiscall MeatNinja__Render(MeatNinja *self)

{
  int iVar1;

  if (*(int *)(self + 0xaa4) == 0) {
    MeatBoyCharactor__Render((MeatBoyCharactor *)self);
  }
  if (*(int *)(self + 0xac4) == 1) {
    *(uint32_t *)(*(long *)(self + 0xa98) + 0x58) = *(uint32_t *)(self + 0xab8);
    *(uint32_t *)(*(long *)(self + 0xa98) + 0x30) = *(uint32_t *)(self + 0xabc);
    *(uint32_t *)(*(long *)(self + 0xa98) + 0x34) = *(uint32_t *)(self + 0xac0);
    (**(code **)(**(long **)(self + 0xa98) + 0x10))();
    *(uint32_t *)(self + 0xab8) = *(uint32_t *)(*(FlashLibraryInstance **)(self + 0xa98) + 0x58);
    iVar1 = FlashLibraryInstance__IsPlaying(*(FlashLibraryInstance **)(self + 0xa98));
    if (iVar1 == 0) {
      *(uint32_t *)(self + 0xac4) = 0;
    }
  }
  if (*(int *)(self + 0xad4) == 1) {
    *(uint32_t *)(*(long *)(self + 0xa98) + 0x58) = *(uint32_t *)(self + 0xac8);
    *(uint32_t *)(*(long *)(self + 0xa98) + 0x30) = *(uint32_t *)(self + 0xacc);
    *(uint32_t *)(*(long *)(self + 0xa98) + 0x34) = *(uint32_t *)(self + 0xad0);
    (**(code **)(**(long **)(self + 0xa98) + 0x10))();
    *(uint32_t *)(self + 0xac8) = *(uint32_t *)(*(FlashLibraryInstance **)(self + 0xa98) + 0x58);
    iVar1 = FlashLibraryInstance__IsPlaying(*(FlashLibraryInstance **)(self + 0xa98));
    if (iVar1 == 0) {
      *(uint32_t *)(self + 0xad4) = 0;
    }
  }
  if (*(int *)(self + 0xae4) == 1) {
    *(uint32_t *)(*(long *)(self + 0xa98) + 0x58) = *(uint32_t *)(self + 0xad8);
    *(uint32_t *)(*(long *)(self + 0xa98) + 0x30) = *(uint32_t *)(self + 0xadc);
    *(uint32_t *)(*(long *)(self + 0xa98) + 0x34) = *(uint32_t *)(self + 0xae0);
    (**(code **)(**(long **)(self + 0xa98) + 0x10))();
    *(uint32_t *)(self + 0xad8) = *(uint32_t *)(*(FlashLibraryInstance **)(self + 0xa98) + 0x58);
    iVar1 = FlashLibraryInstance__IsPlaying(*(FlashLibraryInstance **)(self + 0xa98));
    if (iVar1 == 0) {
      *(uint32_t *)(self + 0xae4) = 0;
      return;
    }
  }
  return;
}

/* ======================================================================
 * MeatNinja__ProcessSpecial  (Ghidra `ProcessSpecial` @ 004813f0)
 * Signature: uint8_t __thiscall ProcessSpecial(MeatNinja * self)
 * Class: MeatNinja
 * Calls: `Vector2__operator_assign`
 * Called by: (none)
 */
/* MeatNinja__ProcessSpecial() */

void __thiscall MeatNinja__ProcessSpecial(MeatNinja *self)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;

  uVar1 = *(uint *)(self + 0xaa4);
  uVar2 = *(byte *)(*(long *)(self + 0x7e0) + 3) >> 6 & 1;
  *(uint *)(self + 0xaa4) = uVar2;
  if (uVar1 == uVar2) {
    return;
  }
  *(uint32_t *)(self + 0xab0) = 0x3e4ccccd;
  if (*(int *)(self + 0xac4) == 0) {
    iVar3 = 0;
  } else if (*(int *)(self + 0xad4) == 0) {
    iVar3 = 1;
  } else {
    iVar3 = 2;
    if (*(int *)(self + 0xae4) != 0) {
      return;
    }
  }
  lVar4 = (long)iVar3 + 0xab;
  *(uint32_t *)(self + lVar4 * 0x10 + 8) = 0;
  Vector2__operator_assign((Vector2 *)(self + lVar4 * 0x10 + 0xc), (Vector2 *)(self + 0xa0));
  *(uint32_t *)(self + lVar4 * 0x10 + 0x14) = 1;
  return;
}

/* ======================================================================
 * MeatNinja__CanDie  (Ghidra `CanDie` @ 00481490)
 * Signature: uint8_t __thiscall CanDie(MeatNinja * self)
 * Class: MeatNinja
 * Calls: `Vector2__operator_assign`
 * Called by: (none)
 */
/* MeatNinja__CanDie() */

bool __thiscall MeatNinja__CanDie(MeatNinja *self)

{
  int iVar1;
  long lVar2;
  bool bVar3;

  bVar3 = false;
  if ((*(int *)(self + 0xaa4) == 0) && (bVar3 = true, *(int *)(self + 0xaa0) < 5)) {
    *(uint32_t *)(self + 0xaa4) = 1;
    *(uint32_t *)(self + 0xaac) = 1;
    *(uint32_t *)(self + 0xab0) = 0x3e4ccccd;
    *(uint32_t *)(self + 0xab4) = 0;
    if (*(int *)(self + 0xac4) == 0) {
      iVar1 = 0;
    } else if (*(int *)(self + 0xad4) == 0) {
      iVar1 = 1;
    } else {
      iVar1 = 2;
      if (*(int *)(self + 0xae4) != 0) {
        return false;
      }
    }
    lVar2 = (long)iVar1 + 0xab;
    *(uint32_t *)(self + lVar2 * 0x10 + 8) = 0;
    Vector2__operator_assign((Vector2 *)(self + lVar2 * 0x10 + 0xc), (Vector2 *)(self + 0xa0));
    *(uint32_t *)(self + lVar2 * 0x10 + 0x14) = 1;
    bVar3 = *(int *)(self + 0xaa4) == 0;
  }
  return bVar3;
}

/* ======================================================================
 * MeatNinja__Update  (Ghidra `Update` @ 00481580)
 * Signature: uint8_t __thiscall Update(MeatNinja * self)
 * Class: MeatNinja
 * Calls: `MeatBoyCharactor__ProcessReplayFrame`, `MeatBoyCharactor__Update`, `Vector2__operator_assign`
 * Called by: (none)
 */
/* MeatNinja__Update() */

void __thiscall MeatNinja__Update(MeatNinja *self)

{
  float fVar1;
  int iVar2;
  long lVar3;
  float fVar4;

  MeatBoyCharactor__ProcessReplayFrame((MeatBoyCharactor *)self);
  *(int *)(self + 0xaa0) = *(int *)(self + 0xaa0) + 1;
  fVar1 = DAT_005c0e00 /* R:-0.5f */;
  fVar4 = *(float *)(self + 0xab0) - fOneFrameTimeStep;
  *(float *)(self + 0xab0) = fVar4;
  if (fVar4 < fVar1) {
    *(uint32_t *)(self + 0xab0) = 0;
    *(uint32_t *)(self + 0xaa4) = 0;
    *(uint32_t *)(self + 0xaa8) = 1;
    goto LAB_004815e0;
  }
  if (0.0 <= fVar4)
    goto LAB_004815e0;
  if (*(int *)(self + 0xaa4) == 1) {
    if (*(int *)(self + 0xac4) == 0) {
      iVar2 = 0;
    } else if (*(int *)(self + 0xad4) == 0) {
      iVar2 = 1;
    } else {
      iVar2 = 2;
      if (*(int *)(self + 0xae4) != 0)
        goto LAB_00481611;
    }
    lVar3 = (long)iVar2 + 0xab;
    *(uint32_t *)(self + lVar3 * 0x10 + 8) = 0;
    Vector2__operator_assign((Vector2 *)(self + lVar3 * 0x10 + 0xc), (Vector2 *)(self + 0xa0));
    *(uint32_t *)(self + lVar3 * 0x10 + 0x14) = 1;
  }
LAB_00481611:
  *(uint32_t *)(self + 0xaa4) = 0;
  *(uint32_t *)(self + 0xaac) = 1;
LAB_004815e0:
  self[0x7d8] = (MeatNinja)((byte)self[0x7d8] | 0x40);
  MeatBoyCharactor__Update((MeatBoyCharactor *)self);
  return;
}

/* ======================================================================
 * MeatNinja__MeatNinja__004816a0  (Ghidra `MeatNinja` @ 004816a0)
 * Signature: uint8_t __thiscall MeatNinja(MeatNinja * self)
 * Class: MeatNinja
 * Calls: `FormatResourcePath`, `MeatBoyCharactor__MeatBoyCharactor__0047b350`, `MeatNinja__MeatNinja__00481750`
 * Called by: (none)
 */
/* MeatNinja__MeatNinja__00481750() */

void __thiscall MeatNinja__MeatNinja__00481750(MeatNinja *self)

{
  uint64_t uVar1;

  uVar1 = FormatResourcePath("/Animations/meatninja.am", &strCharPath);
  MeatBoyCharactor__MeatBoyCharactor__0047b350((MeatBoyCharactor *)self, uVar1, 7);
  *(uint8_t ***)self = &PTR__MeatNinja_005c0d10;
  *(uint32_t *)(self + 0xac4) = 0;
  *(uint32_t *)(self + 0xab8) = 0;
  *(uint32_t *)(self + 0xabc) = 0;
  *(uint32_t *)(self + 0xac0) = 0;
  *(uint32_t *)(self + 0xac8) = 0;
  *(uint32_t *)(self + 0xacc) = 0;
  *(uint32_t *)(self + 0xad0) = 0;
  *(uint32_t *)(self + 0xad4) = 0;
  *(uint32_t *)(self + 0xad8) = 0;
  *(uint32_t *)(self + 0xadc) = 0;
  *(uint32_t *)(self + 0xae0) = 0;
  *(uint32_t *)(self + 0xae4) = 0;
  *(uint32_t *)(self + 0xa54) = 7;
  *(uint32_t *)(self + 0xaa4) = 0;
  *(uint32_t *)(self + 0xaa8) = 1;
  *(uint32_t *)(self + 0xaa0) = 9999;
  *(uint32_t *)(self + 0xab0) = 0;
  return;
}

/* ======================================================================
 * MeatNinja__MeatNinja__00481750  (Ghidra `MeatNinja` @ 00481750)
 * Signature: uint8_t __thiscall MeatNinja(MeatNinja * self, MeatBoyCharactor * arg1, int arg2)
 * Class: MeatNinja
 * Calls: `MeatBoyCharactor__Clone`, `MeatBoyCharactor__MeatBoyCharactor__0047b350`
 * Called by: `GSMBCharactor__CreateCharactor`, `GSMBCharactor__CreateCharactor__0049c600`, `MeatNinja__MeatNinja`, `MeatNinja__MeatNinja__004816a0`
 */
/* MeatNinja__MeatNinja__00481750(MeatBoyCharactor*, int) */

void __thiscall MeatNinja__MeatNinja__00481750(MeatNinja *self, MeatBoyCharactor *arg1, int arg2)

{
  MeatBoyCharactor__MeatBoyCharactor__0047b350((MeatBoyCharactor *)self);
  *(uint8_t ***)self = &PTR__MeatNinja_005c0d10;
  *(uint32_t *)(self + 0xab8) = 0;
  *(uint32_t *)(self + 0xabc) = 0;
  *(uint32_t *)(self + 0xac0) = 0;
  *(uint32_t *)(self + 0xac4) = 0;
  *(uint32_t *)(self + 0xac8) = 0;
  *(uint32_t *)(self + 0xacc) = 0;
  *(uint32_t *)(self + 0xad0) = 0;
  *(uint32_t *)(self + 0xad4) = 0;
  *(uint32_t *)(self + 0xad8) = 0;
  *(uint32_t *)(self + 0xadc) = 0;
  *(uint32_t *)(self + 0xae0) = 0;
  *(uint32_t *)(self + 0xae4) = 0;
  /* try { // try from 004817fa to 004817fe has its CatchHandler @ 00481852 */
  MeatBoyCharactor__Clone((MeatBoyCharactor *)self, arg1, arg2);
  *(uint32_t *)(self + 0xa54) = 7;
  *(uint32_t *)(self + 0xaa4) = 0;
  *(uint32_t *)(self + 0xaa8) = 1;
  *(uint32_t *)(self + 0xaa0) = 9999;
  *(uint32_t *)(self + 0xab0) = 0;
  *(uint64_t *)(self + 0xa98) = *(uint64_t *)(arg1 + 0xa98);
  return;
}

/* ======================================================================
 * MeatNinja__AddExplosion  (Ghidra `AddExplosion` @ 00481870)
 * Signature: uint8_t __thiscall AddExplosion(MeatNinja * self)
 * Class: MeatNinja
 * Calls: `Vector2__operator_assign`
 * Called by: (none)
 */
/* MeatNinja__AddExplosion() */

void __thiscall MeatNinja__AddExplosion(MeatNinja *self)

{
  int iVar1;
  long lVar2;

  if (*(int *)(self + 0xac4) == 0) {
    iVar1 = 0;
  } else if (*(int *)(self + 0xad4) == 0) {
    iVar1 = 1;
  } else {
    iVar1 = 2;
    if (*(int *)(self + 0xae4) != 0) {
      return;
    }
  }
  lVar2 = (long)iVar1 + 0xab;
  *(uint32_t *)(self + lVar2 * 0x10 + 8) = 0;
  Vector2__operator_assign((Vector2 *)(self + lVar2 * 0x10 + 0xc), (Vector2 *)(self + 0xa0));
  *(uint32_t *)(self + lVar2 * 0x10 + 0x14) = 1;
  return;
}

/* ======================================================================
 * MeatNinja__RenderExplosions  (Ghidra `RenderExplosions` @ 004818f0)
 * Signature: uint8_t __thiscall RenderExplosions(MeatNinja * self)
 * Class: MeatNinja
 * Calls: `FlashLibraryInstance__IsPlaying`
 * Called by: (none)
 */
/* MeatNinja__RenderExplosions() */

void __thiscall MeatNinja__RenderExplosions(MeatNinja *self)

{
  int iVar1;

  if (*(int *)(self + 0xac4) == 1) {
    *(uint32_t *)(*(long *)(self + 0xa98) + 0x58) = *(uint32_t *)(self + 0xab8);
    *(uint32_t *)(*(long *)(self + 0xa98) + 0x30) = *(uint32_t *)(self + 0xabc);
    *(uint32_t *)(*(long *)(self + 0xa98) + 0x34) = *(uint32_t *)(self + 0xac0);
    (**(code **)(**(long **)(self + 0xa98) + 0x10))();
    *(uint32_t *)(self + 0xab8) = *(uint32_t *)(*(FlashLibraryInstance **)(self + 0xa98) + 0x58);
    iVar1 = FlashLibraryInstance__IsPlaying(*(FlashLibraryInstance **)(self + 0xa98));
    if (iVar1 == 0) {
      *(uint32_t *)(self + 0xac4) = 0;
    }
  }
  if (*(int *)(self + 0xad4) == 1) {
    *(uint32_t *)(*(long *)(self + 0xa98) + 0x58) = *(uint32_t *)(self + 0xac8);
    *(uint32_t *)(*(long *)(self + 0xa98) + 0x30) = *(uint32_t *)(self + 0xacc);
    *(uint32_t *)(*(long *)(self + 0xa98) + 0x34) = *(uint32_t *)(self + 0xad0);
    (**(code **)(**(long **)(self + 0xa98) + 0x10))();
    *(uint32_t *)(self + 0xac8) = *(uint32_t *)(*(FlashLibraryInstance **)(self + 0xa98) + 0x58);
    iVar1 = FlashLibraryInstance__IsPlaying(*(FlashLibraryInstance **)(self + 0xa98));
    if (iVar1 == 0) {
      *(uint32_t *)(self + 0xad4) = 0;
    }
  }
  if (*(int *)(self + 0xae4) == 1) {
    *(uint32_t *)(*(long *)(self + 0xa98) + 0x58) = *(uint32_t *)(self + 0xad8);
    *(uint32_t *)(*(long *)(self + 0xa98) + 0x30) = *(uint32_t *)(self + 0xadc);
    *(uint32_t *)(*(long *)(self + 0xa98) + 0x34) = *(uint32_t *)(self + 0xae0);
    (**(code **)(**(long **)(self + 0xa98) + 0x10))();
    *(uint32_t *)(self + 0xad8) = *(uint32_t *)(*(FlashLibraryInstance **)(self + 0xa98) + 0x58);
    iVar1 = FlashLibraryInstance__IsPlaying(*(FlashLibraryInstance **)(self + 0xa98));
    if (iVar1 == 0) {
      *(uint32_t *)(self + 0xae4) = 0;
      return;
    }
  }
  return;
}
