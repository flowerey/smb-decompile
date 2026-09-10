/* src/game/classes/GooBall.c — 11 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "GooBall.h"

/* ======================================================================
 * GooBall__Reset  (Ghidra `Reset` @ 0046aae0)
 * Signature: uint8_t __thiscall Reset(GooBall * self)
 * Class: GooBall
 * Calls: `MeatBoyCharactor__Reset`
 * Called by: (none)
 */
/* GooBall__Reset() */

void __thiscall GooBall__Reset(GooBall *self)

{
  *(uint32_t *)(self + 0xaa8) = 0;
  *(uint32_t *)(self + 0x8c4) = *(uint32_t *)(self + 0xaa4);
  MeatBoyCharactor__Reset((MeatBoyCharactor *)self);
  return;
}

/* ======================================================================
 * GooBall__Render  (Ghidra `Render` @ 0046ab00)
 * Signature: uint8_t __thiscall Render(GooBall * self)
 * Class: GooBall
 * Calls: `AutoLockSection__AutoLockSection`, `AutoLockSection__AutoLockSection__005b59d0`, `MeatBoyCharFoundation__Render`
 * Called by: (none)
 */
/* GooBall__Render() */

void __thiscall GooBall__Render(GooBall *self)

{
  AutoLockSection aAStack_18[16];

  AutoLockSection__AutoLockSection(aAStack_18, (CriticalSection *)(self + 0x880));
  (**(code **)(*(long *)self + 0x50))(self);
  if (*(int *)(*(long *)(self + 0xa38) + 0x2c8) != 1) {
    AutoLockSection__AutoLockSection__005b59d0(aAStack_18);
    return;
  }
  MeatBoyCharFoundation__Render(*(MeatBoyCharactor **)(self + 0xf8), (FlashLibraryInstance *)self);
  AutoLockSection__AutoLockSection__005b59d0(aAStack_18);
  return;
}

/* ======================================================================
 * GooBall__WallJump  (Ghidra `WallJump` @ 0046ab10)
 * Signature: uint8_t __thiscall WallJump(GooBall * self)
 * Class: GooBall
 * Calls: `GetRandomINT`, `MeatBoyCharactor__AddEffect__0047af00`
 * Called by: (none)
 */
/* GooBall__WallJump() */

void __thiscall GooBall__WallJump(GooBall *self)

{
  ushort uVar1;
  long lVar2;
  GooBall GVar3;
  int iVar4;
  uint32_t uVar5;
  uint32_t *puVar6;
  GooBall GVar7;
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
    self[0x7db] = (GooBall)((byte)self[0x7db] | 8);
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
  GVar3 = (GooBall)((byte)self[0x7d8] & 0xfe | bVar9);
  self[0x7d8] = GVar3;
  if (bVar9) {
    GVar7 = self[0x7d9];
    uStack_38 = 0xbf800000;
    uStack_34 = 0x3f800000;
    uStack_28 = 0xbf800000;
    uStack_24 = 0x3f800000;
    if (((byte)GVar7 & 0x40) != 0)
      goto LAB_00474591;
    puVar6 = &uStack_38;
    puVar8 = &uStack_28;
  } else {
    GVar7 = self[0x7d9];
    uStack_58 = 0x3f800000;
    uStack_54 = 0x3f800000;
    uStack_48 = 0x3f800000;
    uStack_44 = 0x3f800000;
    if (((byte)GVar7 & 0x40) != 0)
      goto LAB_00474591;
    puVar8 = &uStack_48;
  }
  MeatBoyCharactor__AddEffect__0047af00((MeatBoyCharactor *)self, 3, puVar8, puVar6);
  GVar3 = self[0x7d8];
  GVar7 = self[0x7d9];
LAB_00474591:
  self[0x7d8] = (GooBall)((byte)GVar3 & 0xfb);
  self[0x7d9] = (GooBall)((byte)GVar7 | 0x20);
  return;
}

/* ======================================================================
 * GooBall__WallHit  (Ghidra `WallHit` @ 0046ab20)
 * Signature: uint8_t __thiscall WallHit(GooBall * self, tagTileCollisionType arg1)
 * Class: GooBall
 * Calls: `GetRandomINT`, `MeatBoyCharactor__AddEffect__0047af00`
 * Called by: (none)
 */
/* GooBall__WallHit(tagTileCollisionType) */

void __thiscall GooBall__WallHit(GooBall *self, int arg2)

{
  GooBall GVar1;
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

  GVar1 = self[0x7d8];
  if (((byte)GVar1 & 4) == 0) {
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
    self[0x7db] = (GooBall)((byte)self[0x7db] | 8);
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
  GVar1 = self[0x7d8];
LAB_0047440b:
  *(uint32_t *)(self + 0x7d4) = 9;
  self[0x7d8] = (GooBall)((byte)GVar1 | 4);
  return;
}

/* ======================================================================
 * GooBall__CreateClones  (Ghidra `CreateClones` @ 0046ab30)
 * Signature: uint8_t __thiscall CreateClones(GooBall * self)
 * Class: GooBall
 * Calls: `GSMBCharactor__CreateCharactor__0049c600`
 * Called by: (none)
 */
/* GooBall__CreateClones() */

void __thiscall GooBall__CreateClones(GooBall *self)

{
  long lVar1;
  uint64_t uVar2;
  long lVar3;
  int iVar4;

  iVar4 = 0;
  do {
    lVar1 = *(long *)(self + 0x7f0);
    uVar2 = GSMBCharactor__CreateCharactor__0049c600(SMBCharactor, (MeatBoyCharactor *)self, iVar4);
    lVar3 = (long)iVar4;
    iVar4 = iVar4 + 1;
    *(uint64_t *)(lVar1 + lVar3 * 8) = uVar2;
  } while (iVar4 != 0x28);
  return;
}

/* ======================================================================
 * GooBall__GooBall__0046ab40  (Ghidra `~GooBall` @ 0046ab40)
 * Signature: uint8_t __thiscall ~GooBall(GooBall * self)
 * Class: GooBall
 * Calls: `GooBall__GooBall__0046ad00`, `MeatBoyCharactor__MeatBoyCharactor__00476510`
 * Called by: (none)
 */
/* GooBall__GooBall__0046ad00() */

void __thiscall GooBall__GooBall__0046ad00(GooBall *self)

{
  *(uint8_t ***)self = &PTR__GooBall_005bfc10;
  MeatBoyCharactor__MeatBoyCharactor__00476510((MeatBoyCharactor *)self);
  return;
}

/* ======================================================================
 * GooBall__Update  (Ghidra `Update` @ 0046ab50)
 * Signature: uint8_t __thiscall Update(GooBall * self)
 * Class: GooBall
 * Calls: `MeatBoyCharactor__ProcessReplayFrame`, `MeatBoyCharactor__Update`
 * Called by: (none)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GooBall__Update() */

void __thiscall GooBall__Update(GooBall *self)

{
  float fVar1;

  MeatBoyCharactor__ProcessReplayFrame((MeatBoyCharactor *)self);
  *(uint32_t *)(self + 0x8a8) = *(uint32_t *)(self + 0x8ac);
  if (*(long *)(self + 0x838) == 0) {
    *(uint32_t *)(self + 0xaac) = 0;
    *(uint32_t *)(self + 0x8c4) = *(uint32_t *)(self + 0xaa4);
  }
  MeatBoyCharactor__Update((MeatBoyCharactor *)self);
  if (*(int *)(self + 0xaa8) == 1) {
    if (*(int *)(self + 0x838) == 1) {
      *(uint32_t *)(self + 0xbc) = 0x41200000;
      *(uint32_t *)(self + 0x8c4) = 0;
      *(uint32_t *)(self + 0xaac) = 1;
    }
    fVar1 = _DAT_005bfd00 /* R:10.0f */;
    if (*(int *)(self + 0x83c) == 4) {
      *(uint32_t *)(self + 0xbc) = 0;
      fVar1 = *(float *)(self + 0xb8) - _DAT_005bfd00 /* R:10.0f */;
      *(uint32_t *)(self + 0xaac) = 1;
      *(float *)(self + 0xb8) = fVar1;
      return;
    }
    if (*(int *)(self + 0x83c) == 8) {
      *(uint32_t *)(self + 0xbc) = 0;
      *(uint32_t *)(self + 0xaac) = 1;
      *(float *)(self + 0xb8) = fVar1 + *(float *)(self + 0xb8);
      return;
    }
  }
  return;
}

/* ======================================================================
 * GooBall__RenderClones  (Ghidra `RenderClones` @ 0046ac40)
 * Signature: uint8_t __thiscall RenderClones(GooBall * self)
 * Class: GooBall
 * Calls: `FlashAnimationLibrary__DisableFlags`, `FlashAnimationLibrary__EnableFlags`, `MeatBoyCharFoundation__Render`
 * Called by: (none)
 */
/* GooBall__RenderClones() */

void __thiscall GooBall__RenderClones(GooBall *self)

{
  long lVar1;
  int iVar2;
  long lVar3;

  if (*(int *)(self + 0xa40) == 0) {
    FlashAnimationLibrary__EnableFlags((FlashAnimationLibrary *)**(uint64_t **)(self + 0xf8), 1);
    lVar1 = *(long *)(self + 0xa38);
    if ((*(int *)(lVar1 + 0x2c8) == 0) && (0 < *(int *)(lVar1 + 0x34))) {
      iVar2 = 0;
      do {
        lVar3 = (long)iVar2;
        if ((*(int *)(lVar1 + 0x3c) == iVar2) &&
            (iVar2 == *(int *)(*(long *)(*(long *)(self + 0x7f0) + lVar3 * 8) + 0xa90))) {
          FlashAnimationLibrary__EnableFlags((FlashAnimationLibrary *)**(uint64_t **)(self + 0xf8),
                                             1);
        } else {
          FlashAnimationLibrary__DisableFlags((FlashAnimationLibrary *)**(uint64_t **)(self + 0xf8),
                                              1);
        }
        iVar2 = iVar2 + 1;
        MeatBoyCharFoundation__Render(*(MeatBoyCharFoundation **)(self + 0xf8),
                                      *(MeatBoyCharactor **)(*(long *)(self + 0x7f0) + lVar3 * 8),
                                      (FlashLibraryInstance *)0x0);
        lVar1 = *(long *)(self + 0xa38);
      } while (iVar2 < *(int *)(lVar1 + 0x34));
    }
  }
  return;
}

/* ======================================================================
 * GooBall__GooBall__0046ad00  (Ghidra `~GooBall` @ 0046ad00)
 * Signature: uint8_t __thiscall ~GooBall(GooBall * self)
 * Class: GooBall
 * Calls: `MeatBoyCharactor__MeatBoyCharactor__00476510`, `operator_delete`
 * Called by: `GooBall__GooBall__0046ab40`
 */
/* GooBall__GooBall__0046ad00() */

void __thiscall GooBall__GooBall__0046ad00(GooBall *self)

{
  *(uint8_t ***)self = &PTR__GooBall_005bfc10;
  MeatBoyCharactor__MeatBoyCharactor__00476510((MeatBoyCharactor *)self);
  operator_delete(self);
  return;
}

/* ======================================================================
 * GooBall__GooBall__0046ad20  (Ghidra `GooBall` @ 0046ad20)
 * Signature: uint8_t __thiscall GooBall(GooBall * self)
 * Class: GooBall
 * Calls: `FormatResourcePath`, `GooBall__GooBall__0046ad80`, `MeatBoyCharactor__MeatBoyCharactor__0047b350`
 * Called by: (none)
 */
/* GooBall__GooBall__0046ad80() */

void __thiscall GooBall__GooBall__0046ad80(GooBall *self)

{
  uint64_t uVar1;

  uVar1 = FormatResourcePath("/Animations/wog.am", &strCharPath);
  MeatBoyCharactor__MeatBoyCharactor__0047b350((MeatBoyCharactor *)self, uVar1, 0xd);
  *(uint8_t ***)self = &PTR__GooBall_005bfc10;
  *(uint32_t *)(self + 0xaa8) = 0;
  *(uint32_t *)(self + 0xa54) = 0xd;
  *(uint32_t *)(self + 0xaac) = 0;
  *(uint32_t *)(self + 0xaa4) = *(uint32_t *)(self + 0x8c4);
  return;
}

/* ======================================================================
 * GooBall__GooBall__0046ad80  (Ghidra `GooBall` @ 0046ad80)
 * Signature: uint8_t __thiscall GooBall(GooBall * self, MeatBoyCharactor * arg1, int arg2)
 * Class: GooBall
 * Calls: `MeatBoyCharactor__Clone`, `MeatBoyCharactor__MeatBoyCharactor__0047b350`
 * Called by: `GSMBCharactor__CreateCharactor`, `GSMBCharactor__CreateCharactor__0049c600`, `GooBall__GooBall`, `GooBall__GooBall__0046ad20`
 */
/* GooBall__GooBall__0046ad80(MeatBoyCharactor*, int) */

void __thiscall GooBall__GooBall__0046ad80(GooBall *self, MeatBoyCharactor *arg1, int arg2)

{
  MeatBoyCharactor__MeatBoyCharactor__0047b350((MeatBoyCharactor *)self);
  *(uint8_t ***)self = &PTR__GooBall_005bfc10;
  /* try { // try from 0046adb1 to 0046adb5 has its CatchHandler @ 0046ade9 */
  MeatBoyCharactor__Clone((MeatBoyCharactor *)self, arg1, arg2);
  *(uint32_t *)(self + 0xaa8) = 0;
  *(uint32_t *)(self + 0xaac) = 0;
  *(uint32_t *)(self + 0xaa4) = *(uint32_t *)(self + 0x8c4);
  return;
}
