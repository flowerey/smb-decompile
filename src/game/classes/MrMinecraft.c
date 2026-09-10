/* src/game/classes/MrMinecraft.c — 16 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "MrMinecraft.h"

/* ======================================================================
 * MrMinecraft__Jump  (Ghidra `Jump` @ 00481a90)
 * Signature: uint8_t __thiscall Jump(MrMinecraft * self)
 * Class: MrMinecraft
 * Calls: `GetRandomINT`, `MeatBoyCharactor__AddEffect__0047af00`
 * Called by: (none)
 */
/* MrMinecraft__Jump() */

void __thiscall MrMinecraft__Jump(MrMinecraft *self)

{
  ushort uVar1;
  long lVar2;
  MrMinecraft MVar3;
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
  self[0x7d8] = (MrMinecraft)((byte)self[0x7d8] | 2);
  if (*(int *)(self + 0x7d4) != 6) {
    lVar2 = *(long *)(self + 0xf8);
    self[0x7db] = (MrMinecraft)((byte)self[0x7db] | 8);
    uVar5 = 0;
    uVar1 = *(ushort *)(lVar2 + 0x240);
    if (uVar1 != 0) {
      uVar5 = GetRandomINT(0, uVar1 - 1);
    }
    *(uint32_t *)(lVar2 + 0x268) = uVar5;
    *(uint32_t *)(self + 0xa4c) = uVar5;
    *(uint32_t *)(self + 0xa50) = 0;
  }
  MVar3 = self[0x7d9];
  *(uint32_t *)(self + 0x7d4) = 6;
  uStack_38 = 0x3f800000;
  uStack_34 = 0x3f800000;
  uStack_28 = 0x3f800000;
  uStack_24 = 0x3f800000;
  if (((byte)MVar3 & 0x40) == 0) {
    MeatBoyCharactor__AddEffect__0047af00((MeatBoyCharactor *)self, 1, &uStack_28, &uStack_38);
    MVar3 = self[0x7d9];
  }
  *(uint32_t *)(self + 0x800) = 0;
  self[0x7d9] = (MrMinecraft)((byte)MVar3 | 0x20);
  *(uint32_t *)(self + 0xbc) = *(uint32_t *)(self + 0x8b0);
  *(uint32_t *)(self + 0x804) = *(uint32_t *)(self + 0xa4);
  return;
}

/* ======================================================================
 * MrMinecraft__GroundHit  (Ghidra `GroundHit` @ 00481aa0)
 * Signature: uint8_t __thiscall GroundHit(MrMinecraft * self)
 * Class: MrMinecraft
 * Calls: `FlashLibraryInstance__Reset`, `GetRandomINT`, `MeatBoyCharactor__AddEffect__0047af00`
 * Called by: (none)
 */
/* MrMinecraft__GroundHit() */

void __thiscall MrMinecraft__GroundHit(MrMinecraft *self)

{
  ushort uVar1;
  long lVar2;
  MrMinecraft MVar3;
  uint uVar4;
  FlashLibraryInstance *this_00;
  uint32_t uStack_38;
  uint32_t uStack_34;
  uint32_t uStack_28;
  uint32_t uStack_24;

  if (*(int *)(self + 0x7d4) == 0xf) {
    uVar4 = *(uint *)(self + 0xa4c);
  } else {
    lVar2 = *(long *)(self + 0xf8);
    self[0x7db] = (MrMinecraft)((byte)self[0x7db] | 8);
    uVar4 = 0;
    uVar1 = *(ushort *)(lVar2 + 0x558);
    if (uVar1 != 0) {
      uVar4 = GetRandomINT(0, uVar1 - 1);
    }
    *(uint *)(lVar2 + 0x580) = uVar4;
    *(uint *)(self + 0xa4c) = uVar4;
    *(uint32_t *)(self + 0xa50) = 0;
  }
  *(uint32_t *)(self + 0x7d4) = 0xf;
  lVar2 = *(long *)(self + 0xf8);
  if (uVar4 == 0xffffffff) {
    this_00 = *(FlashLibraryInstance **)(*(long *)(lVar2 + 0x568) +
                                         (ulong) * (ushort *)(lVar2 + 0x580) * 8);
  } else {
    this_00 = *(FlashLibraryInstance **)(*(long *)(lVar2 + 0x568) + (ulong)(uVar4 & 0xffff) * 8);
  }
  FlashLibraryInstance__Reset(this_00);
  MVar3 = self[0x7d9];
  uStack_28 = 0x3f800000;
  uStack_24 = 0x3f800000;
  uStack_38 = 0x3f800000;
  uStack_34 = 0x3f800000;
  if (((byte)MVar3 & 0x40) == 0) {
    MeatBoyCharactor__AddEffect__0047af00((MeatBoyCharactor *)self, 0, &uStack_38, &uStack_28);
    MVar3 = self[0x7d9];
  }
  if (((byte)self[0x7d8] & 0x18) == 0) {
    *(uint32_t *)(self + 0xb8) = 0;
  }
  self[0x7d9] = (MrMinecraft)((byte)MVar3 & 0xdf);
  return;
}

/* ======================================================================
 * MrMinecraft__CanJump  (Ghidra `CanJump` @ 00481ab0)
 * Signature: uint8_t __thiscall CanJump(MrMinecraft * self)
 * Class: MrMinecraft
 * Calls: (none)
 * Called by: (none)
 */
/* MrMinecraft__CanJump() */

bool __thiscall MrMinecraft__CanJump(MrMinecraft *self)

{
  return ((byte)self[0x7d8] & 0xa2) == 0xa0;
}

/* ======================================================================
 * MrMinecraft__WallJump  (Ghidra `WallJump` @ 00481ac0)
 * Signature: uint8_t __thiscall WallJump(MrMinecraft * self)
 * Class: MrMinecraft
 * Calls: `GetRandomINT`, `MeatBoyCharactor__AddEffect__0047af00`
 * Called by: (none)
 */
/* MrMinecraft__WallJump() */

void __thiscall MrMinecraft__WallJump(MrMinecraft *self)

{
  ushort uVar1;
  long lVar2;
  MrMinecraft MVar3;
  int iVar4;
  uint32_t uVar5;
  uint32_t *puVar6;
  MrMinecraft MVar7;
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
    self[0x7db] = (MrMinecraft)((byte)self[0x7db] | 8);
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
  MVar3 = (MrMinecraft)((byte)self[0x7d8] & 0xfe | bVar9);
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
  self[0x7d8] = (MrMinecraft)((byte)MVar3 & 0xfb);
  self[0x7d9] = (MrMinecraft)((byte)MVar7 | 0x20);
  return;
}

/* ======================================================================
 * MrMinecraft__WallHit  (Ghidra `WallHit` @ 00481ad0)
 * Signature: uint8_t __thiscall WallHit(MrMinecraft * self, tagTileCollisionType arg1)
 * Class: MrMinecraft
 * Calls: `GetRandomINT`, `MeatBoyCharactor__AddEffect__0047af00`
 * Called by: (none)
 */
/* MrMinecraft__WallHit(tagTileCollisionType) */

void __thiscall MrMinecraft__WallHit(MrMinecraft *self, int arg2)

{
  MrMinecraft MVar1;
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
    self[0x7db] = (MrMinecraft)((byte)self[0x7db] | 8);
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
  self[0x7d8] = (MrMinecraft)((byte)MVar1 | 4);
  return;
}

/* ======================================================================
 * MrMinecraft__CreateClones  (Ghidra `CreateClones` @ 00481af0)
 * Signature: uint8_t __thiscall CreateClones(MrMinecraft * self)
 * Class: MrMinecraft
 * Calls: `FlashAnimationLibrary__GetMovieClip__005731d0`, `MeatBoyCharactor__CreateClones`
 * Called by: (none)
 */
/* MrMinecraft__CreateClones() */

void __thiscall MrMinecraft__CreateClones(MrMinecraft *self)

{
  uint64_t uVar1;

  uVar1 = FlashAnimationLibrary__GetMovieClip__005731d0(
      (FlashAnimationLibrary *)**(uint64_t **)(self + 0xf8), "hack");
  *(uint64_t *)(self + 0xaf8) = uVar1;
  MeatBoyCharactor__CreateClones((MeatBoyCharactor *)self);
  return;
}

/* ======================================================================
 * MrMinecraft__Render  (Ghidra `Render` @ 00481b20)
 * Signature: uint8_t __thiscall Render(MrMinecraft * self)
 * Class: MrMinecraft
 * Calls: `FlashLibraryInstance__IsPlaying`, `MeatBoyCharFoundation__Render`, `MeatBoyCharactor__Render`
 * Called by: (none)
 */
/* MrMinecraft__Render() */

void __thiscall MrMinecraft__Render(MrMinecraft *self)

{
  int iVar1;

  if (*(int *)(self + 0xaec) != 1) {
    MeatBoyCharactor__Render((MeatBoyCharactor *)self);
    return;
  }
  *(uint32_t *)(*(long *)(self + 0xaf8) + 0x58) = *(uint32_t *)(self + 0xaf0);
  MeatBoyCharFoundation__Render(*(MeatBoyCharFoundation **)(self + 0xf8), (MeatBoyCharactor *)self,
                                *(FlashLibraryInstance **)(self + 0xaf8));
  *(uint32_t *)(self + 0xaf0) = *(uint32_t *)(*(FlashLibraryInstance **)(self + 0xaf8) + 0x58);
  iVar1 = FlashLibraryInstance__IsPlaying(*(FlashLibraryInstance **)(self + 0xaf8));
  if (iVar1 == 0) {
    *(uint32_t *)(self + 0xaec) = 0;
    *(uint32_t *)(self + 0xaf0) = 0;
  }
  return;
}

/* ======================================================================
 * MrMinecraft__RenderClones  (Ghidra `RenderClones` @ 00481b90)
 * Signature: uint8_t __thiscall RenderClones(MrMinecraft * self)
 * Class: MrMinecraft
 * Calls: `FlashAnimationLibrary__DisableFlags`, `FlashAnimationLibrary__EnableFlags`, `MeatBoyCharFoundation__Render`
 * Called by: (none)
 */
/* MrMinecraft__RenderClones() */

void __thiscall MrMinecraft__RenderClones(MrMinecraft *self)

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
 * MrMinecraft__MrMinecraft__00481c50  (Ghidra `MrMinecraft` @ 00481c50)
 * Signature: uint8_t __thiscall MrMinecraft(MrMinecraft * self)
 * Class: MrMinecraft
 * Calls: `CriticalSection__CriticalSection`, `FormatResourcePath`, `MeatBoyCharactor__MeatBoyCharactor__0047b350`, `MrMinecraft__MrMinecraft__00482810`
 * Called by: (none)
 */
/* MrMinecraft__MrMinecraft__00482810() */

void __thiscall MrMinecraft__MrMinecraft__00482810(MrMinecraft *self)

{
  uint64_t uVar1;

  uVar1 = FormatResourcePath("/Animations/mrmine.am", &strCharPath);
  MeatBoyCharactor__MeatBoyCharactor__0047b350((MeatBoyCharactor *)self, uVar1, 0xe);
  *(uint8_t ***)self = &PTR__MrMinecraft_005c0e70;
  /* try { // try from 00481c85 to 00481c89 has its CatchHandler @ 00481cfa */
  CriticalSection__CriticalSection((CriticalSection *)(self + 0xa98));
  *(uint16_t *)(self + 0xac2) = 0;
  *(uint16_t *)(self + 0xac0) = 0;
  *(uint16_t *)(self + 0xacc) = 1;
  *(uint64_t *)(self + 0xad0) = 0;
  *(uint64_t *)(self + 0xad8) = 0;
  *(uint32_t *)(self + 0xae0) = 0;
  self[0xac4] = (MrMinecraft)0x4;
  *(uint32_t *)(self + 0xac8) = 0;
  *(uint32_t *)(self + 0xa54) = 0xe;
  *(uint32_t *)(self + 0xae8) = 0;
  *(uint32_t *)(self + 0xaec) = 0;
  return;
}

/* ======================================================================
 * MrMinecraft__ResetBlocks  (Ghidra `ResetBlocks` @ 00481d20)
 * Signature: uint8_t __thiscall ResetBlocks(MrMinecraft * self)
 * Class: MrMinecraft
 * Calls: `TileLevelLightMap__RegenerateLights`, `TileLevel__BuildTileStreams`
 * Called by: (none)
 */
/* MrMinecraft__ResetBlocks() */

void __thiscall MrMinecraft__ResetBlocks(MrMinecraft *self)

{
  TileLevel *this_00;
  uint32_t *puVar1;
  bool bVar2;
  uint64_t *puVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  ushort uVar7;

  this_00 = *(TileLevel **)(SuperMeatBoy + 0x40);
  if (this_00 != (TileLevel *)0x0) {
    uVar7 = *(ushort *)(self + 0xac0);
    if (uVar7 != 0) {
      uVar6 = 0;
      bVar2 = false;
      do {
        puVar3 = (uint64_t *)((uVar6 & 0xffff) * 0x10 + *(long *)(self + 0xad0));
        puVar1 = (uint32_t *)*puVar3;
        if (puVar1 != (uint32_t *)0x0) {
          bVar2 = true;
          *puVar1 = *(uint32_t *)(puVar3 + 1);
          uVar7 = *(ushort *)(self + 0xac0);
        }
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulong)uVar5;
      } while ((int)uVar5 < (int)(uint)uVar7);
      if (bVar2) {
        TileLevel__BuildTileStreams(this_00);
        TileLevelLightMap__RegenerateLights(*(TileLevelLightMap **)(SuperMeatBoy + 0x390));
      }
    }
  }
  *(uint16_t *)(self + 0xac0) = 0;
  if ((*(int *)(self + 0xac8) == 1) && (uVar7 = *(ushort *)(self + 0xac2), uVar7 != 0)) {
    lVar4 = 0;
    do {
      *(uint16_t *)(*(long *)(self + 0xad8) + lVar4) = 0xffff;
      lVar4 = lVar4 + 2;
    } while (lVar4 != (ulong)(uVar7 - 1 & 0xffff) * 2 + 2);
    return;
  }
  return;
}

/* ======================================================================
 * MrMinecraft__Reset  (Ghidra `Reset` @ 00481df0)
 * Signature: uint8_t __thiscall Reset(MrMinecraft * self)
 * Class: MrMinecraft
 * Calls: `MeatBoyCharactor__Reset`
 * Called by: (none)
 */
/* MrMinecraft__Reset() */

void __thiscall MrMinecraft__Reset(MrMinecraft *self)

{
  ResetBlocks(self);
  MeatBoyCharactor__Reset((MeatBoyCharactor *)self);
  return;
}

/* ======================================================================
 * MrMinecraft__ManipulateBlock  (Ghidra `ManipulateBlock` @ 00481e10)
 * Signature: uint8_t __thiscall ManipulateBlock(MrMinecraft * self, Vector2 * arg1)
 * Class: MrMinecraft
 * Calls: `GetRandomINT`, `SMBPalette__MarkCollision`, `TileLevelLightMap__RegenerateLights`, `TileLevel__BuildTileStreams`, `TileLevel__GetGridBlockFromPos`, `free`, `malloc`, `memcpy`
 * Called by: (none)
 */
/* MrMinecraft__ManipulateBlock(Vector2 const&) */

void __thiscall MrMinecraft__ManipulateBlock(MrMinecraft *self, Vector2 *arg1)

{
  uint32_t uVar1;
  TileLevel *this_00;
  char *pcVar2;
  void *pvVar3;
  char cVar4;
  ushort uVar5;
  ushort uVar6;
  short sVar7;
  char *pcVar8;
  void *pvVar9;
  void *pvVar10;
  ushort *puVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  uint64_t *puVar15;
  bool bVar16;
  byte bVar17;

  bVar17 = 0;
  this_00 = *(TileLevel **)(SuperMeatBoy + 0x40);
  pcVar8 = (char *)TileLevel__GetGridBlockFromPos(this_00, arg1, 0);
  uVar1 = *(uint32_t *)pcVar8;
  uVar6 = *(ushort *)(self + 0xac0);
  if (*pcVar8 == '\0') {
    if (uVar6 == 0) {
    LAB_00481fc5:
      if (*(int *)(self + 0xae0) == -0x5eef3582) {
        if (*(ushort *)(self + 0xac2) <= uVar6) {
          uVar6 = *(ushort *)(self + 0xac2) + *(short *)(self + 0xacc);
          uVar12 = (ulong)(byte)self[0xac4];
          pvVar9 = (void *)0x0;
          pvVar3 = *(void **)(self + 0xad0);
          *(ushort *)(self + 0xac2) = uVar6;
          uVar13 = (ulong)uVar6 * 0x10;
          pvVar10 = malloc(uVar12 + 0x10 + uVar13);
          if (pvVar10 != (void *)0x0) {
            pvVar9 = (void *)((long)pvVar10 + 0x10U +
                              (uVar12 - ((long)pvVar10 + 0x10U) % uVar12) % uVar12);
            *(ulong *)((long)pvVar9 + -0x10) = uVar13;
            *(void **)((long)pvVar9 + -8) = pvVar10;
            if (pvVar3 != (void *)0x0) {
              uVar12 = *(ulong *)((long)pvVar3 + -0x10);
              if (uVar13 <= *(ulong *)((long)pvVar3 + -0x10)) {
                uVar12 = uVar13;
              }
              memcpy(pvVar9, pvVar3, uVar12);
              free(*(void **)((long)pvVar3 + -8));
            }
          }
          pvVar3 = *(void **)(self + 0xad8);
          *(void **)(self + 0xad0) = pvVar9;
          if (pvVar3 != (void *)0x0) {
            uVar5 = *(ushort *)(self + 0xac2);
            uVar12 = (ulong)(byte)self[0xac4];
            pvVar9 = (void *)0x0;
            uVar13 = (ulong)uVar5 * 2;
            pvVar10 = malloc(uVar12 + 0x10 + uVar13);
            if (pvVar10 != (void *)0x0) {
              pvVar9 = (void *)((long)pvVar10 + 0x10U +
                                (uVar12 - ((long)pvVar10 + 0x10U) % uVar12) % uVar12);
              *(ulong *)((long)pvVar9 + -0x10) = uVar13;
              *(void **)((long)pvVar9 + -8) = pvVar10;
              uVar12 = *(ulong *)((long)pvVar3 + -0x10);
              if (uVar13 <= *(ulong *)((long)pvVar3 + -0x10)) {
                uVar12 = uVar13;
              }
              memcpy(pvVar9, pvVar3, uVar12);
              free(*(void **)((long)pvVar3 + -8));
              uVar5 = *(ushort *)(self + 0xac2);
            }
            uVar6 = *(ushort *)(self + 0xac0);
            *(void **)(self + 0xad8) = pvVar9;
            if (uVar5 <= uVar6)
              goto LAB_00482097;
            while (true) {
              uVar13 = (ulong)uVar6;
              uVar6 = uVar6 + 1;
              *(uint16_t *)((long)pvVar9 + uVar13 * 2) = 0xffff;
              if (uVar5 <= uVar6)
                break;
              pvVar9 = *(void **)(self + 0xad8);
            }
          }
          uVar6 = *(ushort *)(self + 0xac0);
        }
      } else {
        uVar13 = (ulong)(byte)self[0xac4];
        *(uint32_t *)(self + 0xac8) = 0;
        pvVar9 = malloc(uVar13 + 0x60);
        puVar15 = (uint64_t *)0x0;
        if (pvVar9 != (void *)0x0) {
          puVar15 = (uint64_t *)((long)pvVar9 + 0x10U +
                                 (uVar13 - ((long)pvVar9 + 0x10U) % uVar13) % uVar13);
          puVar15[-2] = 0x50;
          puVar15[-1] = pvVar9;
        }
        bVar16 = ((ulong)puVar15 & 1) != 0;
        *(uint64_t **)(self + 0xad0) = puVar15;
        uVar13 = 0x50;
        if (bVar16) {
          *(uint8_t *)puVar15 = 0;
          uVar13 = 0x4f;
          puVar15 = (uint64_t *)((long)puVar15 + 1);
        }
        if (((ulong)puVar15 & 2) != 0) {
          *(uint16_t *)puVar15 = 0;
          uVar13 = (ulong)((int)uVar13 - 2);
          puVar15 = (uint64_t *)((long)puVar15 + 2);
        }
        if (((ulong)puVar15 & 4) != 0) {
          *(uint32_t *)puVar15 = 0;
          uVar13 = (ulong)((int)uVar13 - 4);
          puVar15 = (uint64_t *)((long)puVar15 + 4);
        }
        for (uVar12 = uVar13 >> 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *puVar15 = 0;
          puVar15 = puVar15 + (ulong)bVar17 * -2 + 1;
        }
        if ((uVar13 & 4) != 0) {
          *(uint32_t *)puVar15 = 0;
          puVar15 = (uint64_t *)((long)puVar15 + 4);
        }
        if ((uVar13 & 2) != 0) {
          *(uint16_t *)puVar15 = 0;
          puVar15 = (uint64_t *)((long)puVar15 + 2);
        }
        if (bVar16) {
          *(uint8_t *)puVar15 = 0;
        }
        *(uint16_t *)(self + 0xac0) = 0;
        *(uint16_t *)(self + 0xac2) = 5;
        uVar6 = 0;
        *(uint32_t *)(self + 0xae0) = 0xa110ca7e;
        *(uint16_t *)(self + 0xacc) = 5;
      }
    LAB_00482097:
      if ((*(int *)(self + 0xac8) == 1) && (*(short *)(self + 0xac2) != 0)) {
        puVar11 = *(ushort **)(self + 0xad8);
        sVar7 = 1;
        uVar5 = *puVar11;
        while (uVar5 != 0xffff) {
          puVar11 = puVar11 + 1;
          if (sVar7 == *(short *)(self + 0xac2))
            goto LAB_004820a4;
          sVar7 = sVar7 + 1;
          uVar5 = *puVar11;
        }
        *puVar11 = uVar6;
        uVar6 = *(ushort *)(self + 0xac0);
      }
    LAB_004820a4:
      puVar15 = (uint64_t *)((ulong)uVar6 * 0x10 + *(long *)(self + 0xad0));
      *puVar15 = pcVar8;
      *(uint32_t *)(puVar15 + 1) = uVar1;
      *(short *)(self + 0xac0) = *(short *)(self + 0xac0) + 1;
    } else {
      puVar15 = *(uint64_t **)(self + 0xad0);
      uVar5 = 0;
      pcVar2 = (char *)*puVar15;
      while (pcVar8 != pcVar2) {
        uVar5 = uVar5 + 1;
        if (uVar5 == uVar6)
          goto LAB_00481fc5;
        puVar15 = puVar15 + 2;
        pcVar2 = (char *)*puVar15;
      }
      if (((*(int *)(self + 0xac8) == 1) && (*(ushort *)(self + 0xac2) != 0)) &&
          (uVar5 != **(ushort **)(self + 0xad8))) {
        lVar14 = 0;
        do {
          if (lVar14 == (ulong)(*(ushort *)(self + 0xac2) - 1) * 2)
            break;
          lVar14 = lVar14 + 2;
        } while (uVar5 != *(ushort *)((long)*(ushort **)(self + 0xad8) + lVar14));
      }
    }
    cVar4 = GetRandomINT(1);
    *pcVar8 = cVar4;
    goto LAB_004820e8;
  }
  if (uVar6 == 0) {
  LAB_00481e7d:
    if (*(int *)(self + 0xae0) == -0x5eef3582) {
      if (*(ushort *)(self + 0xac2) <= uVar6) {
        uVar6 = *(ushort *)(self + 0xac2) + *(short *)(self + 0xacc);
        uVar12 = (ulong)(byte)self[0xac4];
        pvVar9 = (void *)0x0;
        pvVar3 = *(void **)(self + 0xad0);
        *(ushort *)(self + 0xac2) = uVar6;
        uVar13 = (ulong)uVar6 * 0x10;
        pvVar10 = malloc(uVar12 + 0x10 + uVar13);
        if (pvVar10 != (void *)0x0) {
          pvVar9 = (void *)((long)pvVar10 + 0x10U +
                            (uVar12 - ((long)pvVar10 + 0x10U) % uVar12) % uVar12);
          *(ulong *)((long)pvVar9 + -0x10) = uVar13;
          *(void **)((long)pvVar9 + -8) = pvVar10;
          if (pvVar3 != (void *)0x0) {
            uVar12 = *(ulong *)((long)pvVar3 + -0x10);
            if (uVar13 <= *(ulong *)((long)pvVar3 + -0x10)) {
              uVar12 = uVar13;
            }
            memcpy(pvVar9, pvVar3, uVar12);
            free(*(void **)((long)pvVar3 + -8));
          }
        }
        pvVar3 = *(void **)(self + 0xad8);
        *(void **)(self + 0xad0) = pvVar9;
        if (pvVar3 != (void *)0x0) {
          uVar5 = *(ushort *)(self + 0xac2);
          uVar12 = (ulong)(byte)self[0xac4];
          pvVar9 = (void *)0x0;
          uVar13 = (ulong)uVar5 * 2;
          pvVar10 = malloc(uVar12 + 0x10 + uVar13);
          if (pvVar10 != (void *)0x0) {
            pvVar9 = (void *)((long)pvVar10 + 0x10U +
                              (uVar12 - ((long)pvVar10 + 0x10U) % uVar12) % uVar12);
            *(ulong *)((long)pvVar9 + -0x10) = uVar13;
            *(void **)((long)pvVar9 + -8) = pvVar10;
            uVar12 = *(ulong *)((long)pvVar3 + -0x10);
            if (uVar13 <= *(ulong *)((long)pvVar3 + -0x10)) {
              uVar12 = uVar13;
            }
            memcpy(pvVar9, pvVar3, uVar12);
            free(*(void **)((long)pvVar3 + -8));
            uVar5 = *(ushort *)(self + 0xac2);
          }
          uVar6 = *(ushort *)(self + 0xac0);
          *(void **)(self + 0xad8) = pvVar9;
          if (uVar5 <= uVar6)
            goto LAB_00481f59;
          while (true) {
            uVar13 = (ulong)uVar6;
            uVar6 = uVar6 + 1;
            *(uint16_t *)((long)pvVar9 + uVar13 * 2) = 0xffff;
            if (uVar5 <= uVar6)
              break;
            pvVar9 = *(void **)(self + 0xad8);
          }
        }
        uVar6 = *(ushort *)(self + 0xac0);
      }
    } else {
      uVar13 = (ulong)(byte)self[0xac4];
      *(uint32_t *)(self + 0xac8) = 0;
      pvVar9 = malloc(uVar13 + 0x60);
      puVar15 = (uint64_t *)0x0;
      if (pvVar9 != (void *)0x0) {
        puVar15 = (uint64_t *)((long)pvVar9 + 0x10U +
                               (uVar13 - ((long)pvVar9 + 0x10U) % uVar13) % uVar13);
        puVar15[-2] = 0x50;
        puVar15[-1] = pvVar9;
      }
      bVar16 = ((ulong)puVar15 & 1) != 0;
      *(uint64_t **)(self + 0xad0) = puVar15;
      uVar13 = 0x50;
      if (bVar16) {
        *(uint8_t *)puVar15 = 0;
        uVar13 = 0x4f;
        puVar15 = (uint64_t *)((long)puVar15 + 1);
      }
      if (((ulong)puVar15 & 2) != 0) {
        *(uint16_t *)puVar15 = 0;
        uVar13 = (ulong)((int)uVar13 - 2);
        puVar15 = (uint64_t *)((long)puVar15 + 2);
      }
      if (((ulong)puVar15 & 4) != 0) {
        *(uint32_t *)puVar15 = 0;
        uVar13 = (ulong)((int)uVar13 - 4);
        puVar15 = (uint64_t *)((long)puVar15 + 4);
      }
      for (uVar12 = uVar13 >> 3; uVar12 != 0; uVar12 = uVar12 - 1) {
        *puVar15 = 0;
        puVar15 = puVar15 + (ulong)bVar17 * -2 + 1;
      }
      if ((uVar13 & 4) != 0) {
        *(uint32_t *)puVar15 = 0;
        puVar15 = (uint64_t *)((long)puVar15 + 4);
      }
      if ((uVar13 & 2) != 0) {
        *(uint16_t *)puVar15 = 0;
        puVar15 = (uint64_t *)((long)puVar15 + 2);
      }
      if (bVar16) {
        *(uint8_t *)puVar15 = 0;
      }
      *(uint16_t *)(self + 0xac0) = 0;
      *(uint16_t *)(self + 0xac2) = 5;
      uVar6 = 0;
      *(uint32_t *)(self + 0xae0) = 0xa110ca7e;
      *(uint16_t *)(self + 0xacc) = 5;
    }
  LAB_00481f59:
    if ((*(int *)(self + 0xac8) == 1) && (*(short *)(self + 0xac2) != 0)) {
      puVar11 = *(ushort **)(self + 0xad8);
      sVar7 = 0;
      uVar5 = *puVar11;
      while (uVar5 != 0xffff) {
        puVar11 = puVar11 + 1;
        sVar7 = sVar7 + 1;
        if (sVar7 == *(short *)(self + 0xac2))
          goto LAB_00481f66;
        uVar5 = *puVar11;
      }
      *puVar11 = uVar6;
      uVar6 = *(ushort *)(self + 0xac0);
    }
  LAB_00481f66:
    puVar15 = (uint64_t *)((ulong)uVar6 * 0x10 + *(long *)(self + 0xad0));
    *puVar15 = pcVar8;
    *(uint32_t *)(puVar15 + 1) = uVar1;
    *(short *)(self + 0xac0) = *(short *)(self + 0xac0) + 1;
  } else {
    puVar15 = *(uint64_t **)(self + 0xad0);
    uVar5 = 0;
    pcVar2 = (char *)*puVar15;
    while (pcVar8 != pcVar2) {
      uVar5 = uVar5 + 1;
      if (uVar5 == uVar6)
        goto LAB_00481e7d;
      puVar15 = puVar15 + 2;
      pcVar2 = (char *)*puVar15;
    }
    if (((*(int *)(self + 0xac8) == 1) && (*(ushort *)(self + 0xac2) != 0)) &&
        (uVar5 != **(ushort **)(self + 0xad8))) {
      lVar14 = 0;
      do {
        if (lVar14 == (ulong)(*(ushort *)(self + 0xac2) - 1) * 2)
          break;
        lVar14 = lVar14 + 2;
      } while (uVar5 != *(ushort *)((long)*(ushort **)(self + 0xad8) + lVar14));
    }
  }
  *pcVar8 = '\0';
LAB_004820e8:
  SMBPalette__MarkCollision(GSuperMeatBoy__pLevelPalette, 0);
  TileLevel__BuildTileStreams(this_00);
  TileLevelLightMap__RegenerateLights(*(TileLevelLightMap **)(SuperMeatBoy + 0x390));
  return;
}

/* ======================================================================
 * MrMinecraft__Update  (Ghidra `Update` @ 00482620)
 * Signature: uint8_t __thiscall Update(MrMinecraft * self)
 * Class: MrMinecraft
 * Calls: `MeatBoyCharactor__ProcessReplayFrame`, `MeatBoyCharactor__Update`, `TPlayer__GetJoystick`
 * Called by: (none)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MrMinecraft__Update() */

void __thiscall MrMinecraft__Update(MrMinecraft *self)

{
  uint64_t uVar1;
  bool bVar2;
  float fVar3;
  long lVar4;
  uint64_t local_18;

  MeatBoyCharactor__ProcessReplayFrame((MeatBoyCharactor *)self);
  fVar3 = _DAT_005c0f60 /* R:1.100000023841858f */;
  if (*(int *)(self + 0xae8) != 1) {
    MeatBoyCharactor__Update((MeatBoyCharactor *)self);
    return;
  }
  uVar1 = *(uint64_t *)(self + 0xa0);
  if (Keyboard == 0) {
  LAB_00482675:
    local_18 = uVar1;
    lVar4 = TPlayer__GetJoystick((TPlayer *)Players__Player);
    fVar3 = _DAT_005c0f60 /* R:1.100000023841858f */;
    if (*(int *)(lVar4 + 0xbc) == 2) {
      *(uint32_t *)(self + 0xae8) = 0;
      bVar2 = true;
      local_18 = CONCAT44(fVar3 * TileLevel__fLevelGridWH + local_18._4_4_, (float)local_18);
    } else {
      lVar4 = TPlayer__GetJoystick((TPlayer *)Players__Player);
      fVar3 = _DAT_005c0f60 /* R:1.100000023841858f */;
      bVar2 = false;
      if (*(int *)(lVar4 + 0xd4) == 2) {
        *(uint32_t *)(self + 0xae8) = 0;
        bVar2 = true;
        local_18 = CONCAT44(local_18._4_4_ - fVar3 * TileLevel__fLevelGridWH, (float)local_18);
      }
    }
  } else {
    local_18._0_4_ = (float)uVar1;
    local_18._4_4_ = (float)((ulong)uVar1 >> 0x20);
    if (*(int *)(Keyboard + 0x604) == 2) {
      *(uint32_t *)(self + 0xae8) = 0;
      local_18._4_4_ = fVar3 * TileLevel__fLevelGridWH + local_18._4_4_;
    } else {
      if (*(int *)(Keyboard + 0x184) != 2)
        goto LAB_00482675;
      *(uint32_t *)(self + 0xae8) = 0;
      local_18._4_4_ = local_18._4_4_ - fVar3 * TileLevel__fLevelGridWH;
    }
    bVar2 = true;
  }
  fVar3 = _DAT_005c0f60 /* R:1.100000023841858f */;
  if ((((byte)self[0x7d8] & 0x1a) != 2) && (!bVar2)) {
    if (((byte)self[0x7d8] & 1) == 0) {
      *(uint32_t *)(self + 0xae8) = 0;
      local_18 = CONCAT44(local_18._4_4_, fVar3 * TileLevel__fLevelGridWH + (float)local_18);
    } else {
      *(uint32_t *)(self + 0xae8) = 0;
      local_18 = CONCAT44(local_18._4_4_, (float)local_18 - fVar3 * TileLevel__fLevelGridWH);
    }
  }
  ManipulateBlock(self, (Vector2 *)&local_18);
  *(uint32_t *)(self + 0xae8) = 0;
  *(uint32_t *)(self + 0xaec) = 1;
  MeatBoyCharactor__Update((MeatBoyCharactor *)self);
  return;
}

/* ======================================================================
 * MrMinecraft__MrMinecraft__00482810  (Ghidra `MrMinecraft` @ 00482810)
 * Signature: uint8_t __thiscall MrMinecraft(MrMinecraft * self, MeatBoyCharactor * arg1, int arg2)
 * Class: MrMinecraft
 * Calls: `CriticalSection__CriticalSection`, `MeatBoyCharactor__Clone`, `MeatBoyCharactor__MeatBoyCharactor__0047b350`
 * Called by: `GSMBCharactor__CreateCharactor`, `GSMBCharactor__CreateCharactor__0049c600`, `MrMinecraft__MrMinecraft`, `MrMinecraft__MrMinecraft__00481c50`
 */
/* MrMinecraft__MrMinecraft__00482810(MeatBoyCharactor*, int) */

void __thiscall MrMinecraft__MrMinecraft__00482810(MrMinecraft *self, MeatBoyCharactor *arg1,
                                                   int arg2)

{
  MeatBoyCharactor__MeatBoyCharactor__0047b350((MeatBoyCharactor *)self);
  *(uint8_t ***)self = &PTR__MrMinecraft_005c0e70;
  /* try { // try from 00482848 to 0048284c has its CatchHandler @ 004828e2 */
  CriticalSection__CriticalSection((CriticalSection *)(self + 0xa98));
  *(uint16_t *)(self + 0xac2) = 0;
  *(uint16_t *)(self + 0xac0) = 0;
  *(uint16_t *)(self + 0xacc) = 1;
  *(uint64_t *)(self + 0xad0) = 0;
  *(uint64_t *)(self + 0xad8) = 0;
  *(uint32_t *)(self + 0xae0) = 0;
  self[0xac4] = (MrMinecraft)0x4;
  *(uint32_t *)(self + 0xac8) = 0;
  /* try { // try from 004828a2 to 004828a6 has its CatchHandler @ 004828f5 */
  MeatBoyCharactor__Clone((MeatBoyCharactor *)self, arg1, arg2);
  *(uint32_t *)(self + 0xae8) = 0;
  *(uint32_t *)(self + 0xaec) = 0;
  *(uint64_t *)(self + 0xaf8) = *(uint64_t *)(arg1 + 0xaf8);
  return;
}

/* ======================================================================
 * MrMinecraft__MrMinecraft__00482910  (Ghidra `~MrMinecraft` @ 00482910)
 * Signature: uint8_t __thiscall ~MrMinecraft(MrMinecraft * self)
 * Class: MrMinecraft
 * Calls: `CriticalSection__CriticalSection__005b71d0`, `MeatBoyCharactor__MeatBoyCharactor__00476510`, `MrMinecraft__MrMinecraft__00482a20`, `free`
 * Called by: (none)
 */
/* MrMinecraft__MrMinecraft__00482a20() */

void __thiscall MrMinecraft__MrMinecraft__00482a20(MrMinecraft *self)

{
  *(uint8_t ***)self = &PTR__MrMinecraft_005c0e70;
  if (*(int *)(self + 0xa40) == 0) {
    if (*(long **)(self + 0xaf8) != (long *)0x0) {
      /* try { // try from 00482938 to 00482942 has its CatchHandler @ 004829e2 */
      (**(code **)(**(long **)(self + 0xaf8) + 8))();
    }
    ResetBlocks(self);
  }
  if (*(int *)(self + 0xae0) == -0x5eef3582) {
    *(uint32_t *)(self + 0xae0) = 0;
    free(*(void **)(*(long *)(self + 0xad0) + -8));
    if (*(int *)(self + 0xac8) == 1) {
      free(*(void **)(*(long *)(self + 0xad8) + -8));
    }
    *(uint32_t *)(self + 0xae0) = 0;
    *(uint16_t *)(self + 0xac2) = 0;
    *(uint16_t *)(self + 0xac0) = 0;
    *(uint64_t *)(self + 0xad0) = 0;
    *(uint64_t *)(self + 0xad8) = 0;
  }
  /* try { // try from 00482956 to 0048295a has its CatchHandler @ 00482a12 */
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)(self + 0xa98));
  MeatBoyCharactor__MeatBoyCharactor__00476510((MeatBoyCharactor *)self);
  return;
}

/* ======================================================================
 * MrMinecraft__MrMinecraft__00482a20  (Ghidra `~MrMinecraft` @ 00482a20)
 * Signature: uint8_t __thiscall ~MrMinecraft(MrMinecraft * self)
 * Class: MrMinecraft
 * Calls: `operator_delete`
 * Called by: `MrMinecraft__MrMinecraft__00482910`
 */
/* MrMinecraft__MrMinecraft__00482a20() */

void __thiscall MrMinecraft__MrMinecraft__00482a20(MrMinecraft *self)

{
  MrMinecraft__dtor(self);
  operator_delete(self);
  return;
}
