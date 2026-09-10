/* src/game/classes/AlienHominid.c — 16 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "AlienHominid.h"

/* ======================================================================
 * AlienHominid__RecordSpecial  (Ghidra `RecordSpecial` @ 004612d0)
 * Signature: uint8_t __thiscall RecordSpecial(AlienHominid * self)
 * Class: AlienHominid
 * Calls: (none)
 * Called by: (none)
 */
/* AlienHominid__RecordSpecial() */

void __thiscall AlienHominid__RecordSpecial(AlienHominid *self)

{
  long lVar1;
  
  lVar1 = *(long *)(self + 0x7e0);
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 3) = *(byte *)(lVar1 + 3) & 0xbf | (byte)((*(uint *)(self + 0xab0) & 1) << 6);
  }
  return;
}

/* ======================================================================
 * AlienHominid__Reset  (Ghidra `Reset` @ 00461300)
 * Signature: uint8_t __thiscall Reset(AlienHominid * self)
 * Class: AlienHominid
 * Calls: `MeatBoyCharactor__Reset`
 * Called by: (none)
 */
/* AlienHominid__Reset() */

void __thiscall AlienHominid__Reset(AlienHominid *self)

{
  *(uint32_t *)(self + 0xab0) = 0;
  MeatBoyCharactor__Reset((MeatBoyCharactor *)self);
  return;
}

/* ======================================================================
 * AlienHominid__Update  (Ghidra `Update` @ 00461310)
 * Signature: uint8_t __thiscall Update(AlienHominid * self)
 * Class: AlienHominid
 * Calls: `FlashLibraryInstance__IsPlaying`, `MeatBoyCharactor__ProcessReplayFrame`, `MeatBoyCharactor__Update`, `TileLevel__GetGridBlockFromPos`
 * Called by: (none)
 */
/* AlienHominid__Update() */

void __thiscall AlienHominid__Update(AlienHominid *self)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  
  *(uint32_t *)(self + 0x8a8) = *(uint32_t *)(self + 0x8ac);
  MeatBoyCharactor__ProcessReplayFrame((MeatBoyCharactor *)self);
  *(uint32_t *)(*(long *)(self + 0xa98) + 0x58) = *(uint32_t *)(self + 0xab4);
  if (*(int *)(self + 0xab0) == 1) {
    iVar2 = FlashLibraryInstance__IsPlaying(*(FlashLibraryInstance **)(self + 0xa98));
    if (iVar2 == 0) {
      *(uint32_t *)(self + 0xab0) = 0;
    }
  }
  MeatBoyCharactor__Update((MeatBoyCharactor *)self);
  lVar1 = SuperMeatBoy;
  if (*(int *)(self + 0xab8) == 0) {
    *(float *)(self + 0xac0) = *(float *)(self + 0xac0) - DAT_005be5e0 /* R:500.0f */ * fOneFrameTimeStep;
    pcVar3 = (char *)TileLevel__GetGridBlockFromPos(*(TileLevel **)(lVar1 + 0x40),self + 0xabc,0);
    if (*pcVar3 != '\0') {
      *(uint32_t *)(self + 0xab8) = 1;
      *(uint32_t *)(self + 0xac4) = 0;
    }
  }
  lVar1 = SuperMeatBoy;
  if (*(int *)(self + 0xac8) == 0) {
    *(float *)(self + 0xad0) = *(float *)(self + 0xad0) - DAT_005be5e0 /* R:500.0f */ * fOneFrameTimeStep;
    pcVar3 = (char *)TileLevel__GetGridBlockFromPos(*(TileLevel **)(lVar1 + 0x40),self + 0xacc,0);
    if (*pcVar3 != '\0') {
      *(uint32_t *)(self + 0xac8) = 1;
      *(uint32_t *)(self + 0xad4) = 0;
    }
  }
  lVar1 = SuperMeatBoy;
  if (*(int *)(self + 0xad8) == 0) {
    *(float *)(self + 0xae0) = *(float *)(self + 0xae0) - DAT_005be5e0 /* R:500.0f */ * fOneFrameTimeStep;
    pcVar3 = (char *)TileLevel__GetGridBlockFromPos(*(TileLevel **)(lVar1 + 0x40),self + 0xadc,0);
    if (*pcVar3 != '\0') {
      *(uint32_t *)(self + 0xad8) = 1;
      *(uint32_t *)(self + 0xae4) = 0;
    }
  }
  lVar1 = SuperMeatBoy;
  if (*(int *)(self + 0xae8) == 0) {
    *(float *)(self + 0xaf0) = *(float *)(self + 0xaf0) - DAT_005be5e0 /* R:500.0f */ * fOneFrameTimeStep;
    pcVar3 = (char *)TileLevel__GetGridBlockFromPos(*(TileLevel **)(lVar1 + 0x40),self + 0xaec,0);
    if (*pcVar3 != '\0') {
      *(uint32_t *)(self + 0xae8) = 1;
      *(uint32_t *)(self + 0xaf4) = 0;
    }
  }
  lVar1 = SuperMeatBoy;
  if (*(int *)(self + 0xaf8) == 0) {
    *(float *)(self + 0xb00) = *(float *)(self + 0xb00) - DAT_005be5e0 /* R:500.0f */ * fOneFrameTimeStep;
    pcVar3 = (char *)TileLevel__GetGridBlockFromPos(*(TileLevel **)(lVar1 + 0x40),self + 0xafc,0);
    if (*pcVar3 != '\0') {
      *(uint32_t *)(self + 0xaf8) = 1;
      *(uint32_t *)(self + 0xb04) = 0;
    }
  }
  lVar1 = SuperMeatBoy;
  if (*(int *)(self + 0xb08) == 0) {
    *(float *)(self + 0xb10) = *(float *)(self + 0xb10) - DAT_005be5e0 /* R:500.0f */ * fOneFrameTimeStep;
    pcVar3 = (char *)TileLevel__GetGridBlockFromPos(*(TileLevel **)(lVar1 + 0x40),self + 0xb0c,0);
    if (*pcVar3 != '\0') {
      *(uint32_t *)(self + 0xb08) = 1;
      *(uint32_t *)(self + 0xb14) = 0;
    }
  }
  lVar1 = SuperMeatBoy;
  if (*(int *)(self + 0xb18) == 0) {
    *(float *)(self + 0xb20) = *(float *)(self + 0xb20) - DAT_005be5e0 /* R:500.0f */ * fOneFrameTimeStep;
    pcVar3 = (char *)TileLevel__GetGridBlockFromPos(*(TileLevel **)(lVar1 + 0x40),self + 0xb1c,0);
    if (*pcVar3 != '\0') {
      *(uint32_t *)(self + 0xb18) = 1;
      *(uint32_t *)(self + 0xb24) = 0;
    }
  }
  lVar1 = SuperMeatBoy;
  if (*(int *)(self + 0xb28) == 0) {
    *(float *)(self + 0xb30) = *(float *)(self + 0xb30) - DAT_005be5e0 /* R:500.0f */ * fOneFrameTimeStep;
    pcVar3 = (char *)TileLevel__GetGridBlockFromPos(*(TileLevel **)(lVar1 + 0x40),self + 0xb2c,0);
    if (*pcVar3 != '\0') {
      *(uint32_t *)(self + 0xb28) = 1;
      *(uint32_t *)(self + 0xb34) = 0;
    }
  }
  lVar1 = SuperMeatBoy;
  if (*(int *)(self + 0xb38) == 0) {
    *(float *)(self + 0xb40) = *(float *)(self + 0xb40) - DAT_005be5e0 /* R:500.0f */ * fOneFrameTimeStep;
    pcVar3 = (char *)TileLevel__GetGridBlockFromPos(*(TileLevel **)(lVar1 + 0x40),self + 0xb3c,0);
    if (*pcVar3 != '\0') {
      *(uint32_t *)(self + 0xb38) = 1;
      *(uint32_t *)(self + 0xb44) = 0;
    }
  }
  lVar1 = SuperMeatBoy;
  if (*(int *)(self + 0xb48) == 0) {
    *(float *)(self + 0xb50) = *(float *)(self + 0xb50) - DAT_005be5e0 /* R:500.0f */ * fOneFrameTimeStep;
    pcVar3 = (char *)TileLevel__GetGridBlockFromPos(*(TileLevel **)(lVar1 + 0x40),self + 0xb4c,0);
    if (*pcVar3 != '\0') {
      *(uint32_t *)(self + 0xb48) = 1;
      *(uint32_t *)(self + 0xb54) = 0;
      return;
    }
  }
  return;
}

/* ======================================================================
 * AlienHominid__Death  (Ghidra `Death` @ 004617d0)
 * Signature: uint8_t __thiscall Death(AlienHominid * self)
 * Class: AlienHominid
 * Calls: `MeatBoyCharactor__Death`
 * Called by: (none)
 */
/* AlienHominid__Death() */

void __thiscall AlienHominid__Death(AlienHominid *self)

{
  MeatBoyCharactor__Death((MeatBoyCharactor *)self);
  *(uint32_t *)(self + 0xab0) = 0;
  return;
}

/* ======================================================================
 * AlienHominid__WallJump  (Ghidra `WallJump` @ 004617f0)
 * Signature: uint8_t __thiscall WallJump(AlienHominid * self)
 * Class: AlienHominid
 * Calls: `GetRandomINT`, `MeatBoyCharactor__AddEffect__0047af00`
 * Called by: (none)
 */
/* AlienHominid__WallJump() */

void __thiscall AlienHominid__WallJump(AlienHominid *self)

{
  ushort uVar1;
  long lVar2;
  AlienHominid AVar3;
  int iVar4;
  uint32_t uVar5;
  uint32_t *puVar6;
  AlienHominid AVar7;
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
    self[0x7db] = (AlienHominid)((byte)self[0x7db] | 8);
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
  AVar3 = (AlienHominid)((byte)self[0x7d8] & 0xfe | bVar9);
  self[0x7d8] = AVar3;
  if (bVar9) {
    AVar7 = self[0x7d9];
    uStack_38 = 0xbf800000;
    uStack_34 = 0x3f800000;
    uStack_28 = 0xbf800000;
    uStack_24 = 0x3f800000;
    if (((byte)AVar7 & 0x40) != 0) goto LAB_00474591;
    puVar6 = &uStack_38;
    puVar8 = &uStack_28;
  }
  else {
    AVar7 = self[0x7d9];
    uStack_58 = 0x3f800000;
    uStack_54 = 0x3f800000;
    uStack_48 = 0x3f800000;
    uStack_44 = 0x3f800000;
    if (((byte)AVar7 & 0x40) != 0) goto LAB_00474591;
    puVar8 = &uStack_48;
  }
  MeatBoyCharactor__AddEffect__0047af00((MeatBoyCharactor *)self,3,puVar8,puVar6);
  AVar3 = self[0x7d8];
  AVar7 = self[0x7d9];
LAB_00474591:
  self[0x7d8] = (AlienHominid)((byte)AVar3 & 0xfb);
  self[0x7d9] = (AlienHominid)((byte)AVar7 | 0x20);
  return;
}

/* ======================================================================
 * AlienHominid__WallHit  (Ghidra `WallHit` @ 00461800)
 * Signature: uint8_t __thiscall WallHit(AlienHominid * self, tagTileCollisionType arg1)
 * Class: AlienHominid
 * Calls: `GetRandomINT`, `MeatBoyCharactor__AddEffect__0047af00`
 * Called by: (none)
 */
/* AlienHominid__WallHit(tagTileCollisionType) */

void __thiscall AlienHominid__WallHit(AlienHominid *self,int arg2)

{
  AlienHominid AVar1;
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
  
  AVar1 = self[0x7d8];
  if (((byte)AVar1 & 4) == 0) {
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
    self[0x7db] = (AlienHominid)((byte)self[0x7db] | 8);
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
  AVar1 = self[0x7d8];
LAB_0047440b:
  *(uint32_t *)(self + 0x7d4) = 9;
  self[0x7d8] = (AlienHominid)((byte)AVar1 | 4);
  return;
}

/* ======================================================================
 * AlienHominid__CreateClones  (Ghidra `CreateClones` @ 00461810)
 * Signature: uint8_t __thiscall CreateClones(AlienHominid * self)
 * Class: AlienHominid
 * Calls: `FlashAnimationLibrary__GetMovieClip__005731d0`, `MeatBoyCharactor__CreateClones`
 * Called by: (none)
 */
/* AlienHominid__CreateClones() */

void __thiscall AlienHominid__CreateClones(AlienHominid *self)

{
  uint64_t uVar1;
  
  uVar1 = FlashAnimationLibrary__GetMovieClip__005731d0
                    ((FlashAnimationLibrary *)**(uint64_t **)(self + 0xf8),"shoot");
  *(uint64_t *)(self + 0xa98) = uVar1;
  uVar1 = FlashAnimationLibrary__GetMovieClip__005731d0
                    ((FlashAnimationLibrary *)**(uint64_t **)(self + 0xf8),"bullet");
  *(uint64_t *)(self + 0xaa0) = uVar1;
  uVar1 = FlashAnimationLibrary__GetMovieClip__005731d0
                    ((FlashAnimationLibrary *)**(uint64_t **)(self + 0xf8),"bulletbreak");
  *(uint64_t *)(self + 0xaa8) = uVar1;
  MeatBoyCharactor__CreateClones((MeatBoyCharactor *)self);
  return;
}

/* ======================================================================
 * AlienHominid__AlienHominid__00461870  (Ghidra `~AlienHominid` @ 00461870)
 * Signature: uint8_t __thiscall ~AlienHominid(AlienHominid * self)
 * Class: AlienHominid
 * Calls: `AlienHominid__AlienHominid__004618f0`, `MeatBoyCharactor__MeatBoyCharactor__00476510`
 * Called by: (none)
 */
/* AlienHominid__AlienHominid__004618f0() */

void __thiscall AlienHominid__AlienHominid__004618f0(AlienHominid *self)

{
  *(uint8_t ***)self = &PTR__AlienHominid_005be4f0;
  if (*(int *)(self + 0xa40) == 0) {
    if (*(long **)(self + 0xa98) != (long *)0x0) {
                    /* try { // try from 00461898 to 004618be has its CatchHandler @ 004618cc */
      (**(code **)(**(long **)(self + 0xa98) + 8))();
    }
    if (*(long **)(self + 0xaa0) != (long *)0x0) {
      (**(code **)(**(long **)(self + 0xaa0) + 8))();
    }
    if (*(long **)(self + 0xaa8) != (long *)0x0) {
      (**(code **)(**(long **)(self + 0xaa8) + 8))();
    }
  }
  MeatBoyCharactor__MeatBoyCharactor__00476510((MeatBoyCharactor *)self);
  return;
}

/* ======================================================================
 * AlienHominid__AlienHominid__004618f0  (Ghidra `~AlienHominid` @ 004618f0)
 * Signature: uint8_t __thiscall ~AlienHominid(AlienHominid * self)
 * Class: AlienHominid
 * Calls: `operator_delete`
 * Called by: `AlienHominid__AlienHominid__00461870`
 */
/* AlienHominid__AlienHominid__004618f0() */

void __thiscall AlienHominid__AlienHominid__004618f0(AlienHominid *self)

{
  AlienHominid__dtor(self);
  operator_delete(self);
  return;
}

/* ======================================================================
 * AlienHominid__RenderClones  (Ghidra `RenderClones` @ 00461ac0)
 * Signature: uint8_t __thiscall RenderClones(AlienHominid * self)
 * Class: AlienHominid
 * Calls: `FlashAnimationLibrary__DisableFlags`, `FlashAnimationLibrary__EnableFlags`, `FlashLibraryInstance__IsPlaying`, `MeatBoyCharFoundation__Render`
 * Called by: (none)
 */
/* AlienHominid__RenderClones() */

void __thiscall AlienHominid__RenderClones(AlienHominid *self)

{
  MeatBoyCharactor *pMVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  FlashLibraryInstance *pFVar5;
  
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
        if (*(int *)(pMVar1 + 0xab0) == 1) {
          *(uint32_t *)(*(long *)(self + 0xa98) + 0x58) = *(uint32_t *)(pMVar1 + 0xab4);
          MeatBoyCharFoundation__Render
                    (*(MeatBoyCharFoundation **)(self + 0xf8),pMVar1,
                     *(FlashLibraryInstance **)(self + 0xa98));
          *(uint32_t *)(pMVar1 + 0xab4) = *(uint32_t *)(*(long *)(self + 0xa98) + 0x58);
        }
        else {
          MeatBoyCharFoundation__Render
                    (*(MeatBoyCharFoundation **)(self + 0xf8),pMVar1,(FlashLibraryInstance *)0x0);
        }
        if (*(int *)(pMVar1 + 0xab8) != 2) {
          if (*(int *)(pMVar1 + 0xab8) == 0) {
            pFVar5 = *(FlashLibraryInstance **)(pMVar1 + 0xaa0);
          }
          else {
            pFVar5 = *(FlashLibraryInstance **)(pMVar1 + 0xaa8);
          }
          if (pFVar5 != (FlashLibraryInstance *)0x0) {
            *(uint32_t *)(pFVar5 + 0x30) = *(uint32_t *)(pMVar1 + 0xabc);
            *(uint32_t *)(pFVar5 + 0x34) = *(uint32_t *)(pMVar1 + 0xac0);
            *(uint32_t *)(pFVar5 + 0x58) = *(uint32_t *)(pMVar1 + 0xac4);
            (**(code **)(*(long *)pFVar5 + 0x10))(pFVar5);
            if (*(int *)(pMVar1 + 0xab8) == 1) {
              iVar2 = FlashLibraryInstance__IsPlaying(pFVar5);
              if (iVar2 == 0) {
                *(uint32_t *)(pMVar1 + 0xab8) = 2;
              }
            }
            *(uint32_t *)(pMVar1 + 0xac4) = *(uint32_t *)(pFVar5 + 0x58);
          }
        }
        if (*(int *)(pMVar1 + 0xac8) != 2) {
          if (*(int *)(pMVar1 + 0xac8) == 0) {
            pFVar5 = *(FlashLibraryInstance **)(pMVar1 + 0xaa0);
          }
          else {
            pFVar5 = *(FlashLibraryInstance **)(pMVar1 + 0xaa8);
          }
          if (pFVar5 != (FlashLibraryInstance *)0x0) {
            *(uint32_t *)(pFVar5 + 0x30) = *(uint32_t *)(pMVar1 + 0xacc);
            *(uint32_t *)(pFVar5 + 0x34) = *(uint32_t *)(pMVar1 + 0xad0);
            *(uint32_t *)(pFVar5 + 0x58) = *(uint32_t *)(pMVar1 + 0xad4);
            (**(code **)(*(long *)pFVar5 + 0x10))(pFVar5);
            if (*(int *)(pMVar1 + 0xac8) == 1) {
              iVar2 = FlashLibraryInstance__IsPlaying(pFVar5);
              if (iVar2 == 0) {
                *(uint32_t *)(pMVar1 + 0xac8) = 2;
              }
            }
            *(uint32_t *)(pMVar1 + 0xad4) = *(uint32_t *)(pFVar5 + 0x58);
          }
        }
        if (*(int *)(pMVar1 + 0xad8) != 2) {
          if (*(int *)(pMVar1 + 0xad8) == 0) {
            pFVar5 = *(FlashLibraryInstance **)(pMVar1 + 0xaa0);
          }
          else {
            pFVar5 = *(FlashLibraryInstance **)(pMVar1 + 0xaa8);
          }
          if (pFVar5 != (FlashLibraryInstance *)0x0) {
            *(uint32_t *)(pFVar5 + 0x30) = *(uint32_t *)(pMVar1 + 0xadc);
            *(uint32_t *)(pFVar5 + 0x34) = *(uint32_t *)(pMVar1 + 0xae0);
            *(uint32_t *)(pFVar5 + 0x58) = *(uint32_t *)(pMVar1 + 0xae4);
            (**(code **)(*(long *)pFVar5 + 0x10))(pFVar5);
            if (*(int *)(pMVar1 + 0xad8) == 1) {
              iVar2 = FlashLibraryInstance__IsPlaying(pFVar5);
              if (iVar2 == 0) {
                *(uint32_t *)(pMVar1 + 0xad8) = 2;
              }
            }
            *(uint32_t *)(pMVar1 + 0xae4) = *(uint32_t *)(pFVar5 + 0x58);
          }
        }
        if (*(int *)(pMVar1 + 0xae8) != 2) {
          if (*(int *)(pMVar1 + 0xae8) == 0) {
            pFVar5 = *(FlashLibraryInstance **)(pMVar1 + 0xaa0);
          }
          else {
            pFVar5 = *(FlashLibraryInstance **)(pMVar1 + 0xaa8);
          }
          if (pFVar5 != (FlashLibraryInstance *)0x0) {
            *(uint32_t *)(pFVar5 + 0x30) = *(uint32_t *)(pMVar1 + 0xaec);
            *(uint32_t *)(pFVar5 + 0x34) = *(uint32_t *)(pMVar1 + 0xaf0);
            *(uint32_t *)(pFVar5 + 0x58) = *(uint32_t *)(pMVar1 + 0xaf4);
            (**(code **)(*(long *)pFVar5 + 0x10))(pFVar5);
            if (*(int *)(pMVar1 + 0xae8) == 1) {
              iVar2 = FlashLibraryInstance__IsPlaying(pFVar5);
              if (iVar2 == 0) {
                *(uint32_t *)(pMVar1 + 0xae8) = 2;
              }
            }
            *(uint32_t *)(pMVar1 + 0xaf4) = *(uint32_t *)(pFVar5 + 0x58);
          }
        }
        if (*(int *)(pMVar1 + 0xaf8) != 2) {
          if (*(int *)(pMVar1 + 0xaf8) == 0) {
            pFVar5 = *(FlashLibraryInstance **)(pMVar1 + 0xaa0);
          }
          else {
            pFVar5 = *(FlashLibraryInstance **)(pMVar1 + 0xaa8);
          }
          if (pFVar5 != (FlashLibraryInstance *)0x0) {
            *(uint32_t *)(pFVar5 + 0x30) = *(uint32_t *)(pMVar1 + 0xafc);
            *(uint32_t *)(pFVar5 + 0x34) = *(uint32_t *)(pMVar1 + 0xb00);
            *(uint32_t *)(pFVar5 + 0x58) = *(uint32_t *)(pMVar1 + 0xb04);
            (**(code **)(*(long *)pFVar5 + 0x10))(pFVar5);
            if (*(int *)(pMVar1 + 0xaf8) == 1) {
              iVar2 = FlashLibraryInstance__IsPlaying(pFVar5);
              if (iVar2 == 0) {
                *(uint32_t *)(pMVar1 + 0xaf8) = 2;
              }
            }
            *(uint32_t *)(pMVar1 + 0xb04) = *(uint32_t *)(pFVar5 + 0x58);
          }
        }
        if (*(int *)(pMVar1 + 0xb08) != 2) {
          if (*(int *)(pMVar1 + 0xb08) == 0) {
            pFVar5 = *(FlashLibraryInstance **)(pMVar1 + 0xaa0);
          }
          else {
            pFVar5 = *(FlashLibraryInstance **)(pMVar1 + 0xaa8);
          }
          if (pFVar5 != (FlashLibraryInstance *)0x0) {
            *(uint32_t *)(pFVar5 + 0x30) = *(uint32_t *)(pMVar1 + 0xb0c);
            *(uint32_t *)(pFVar5 + 0x34) = *(uint32_t *)(pMVar1 + 0xb10);
            *(uint32_t *)(pFVar5 + 0x58) = *(uint32_t *)(pMVar1 + 0xb14);
            (**(code **)(*(long *)pFVar5 + 0x10))(pFVar5);
            if (*(int *)(pMVar1 + 0xb08) == 1) {
              iVar2 = FlashLibraryInstance__IsPlaying(pFVar5);
              if (iVar2 == 0) {
                *(uint32_t *)(pMVar1 + 0xb08) = 2;
              }
            }
            *(uint32_t *)(pMVar1 + 0xb14) = *(uint32_t *)(pFVar5 + 0x58);
          }
        }
        if (*(int *)(pMVar1 + 0xb18) != 2) {
          if (*(int *)(pMVar1 + 0xb18) == 0) {
            pFVar5 = *(FlashLibraryInstance **)(pMVar1 + 0xaa0);
          }
          else {
            pFVar5 = *(FlashLibraryInstance **)(pMVar1 + 0xaa8);
          }
          if (pFVar5 != (FlashLibraryInstance *)0x0) {
            *(uint32_t *)(pFVar5 + 0x30) = *(uint32_t *)(pMVar1 + 0xb1c);
            *(uint32_t *)(pFVar5 + 0x34) = *(uint32_t *)(pMVar1 + 0xb20);
            *(uint32_t *)(pFVar5 + 0x58) = *(uint32_t *)(pMVar1 + 0xb24);
            (**(code **)(*(long *)pFVar5 + 0x10))(pFVar5);
            if (*(int *)(pMVar1 + 0xb18) == 1) {
              iVar2 = FlashLibraryInstance__IsPlaying(pFVar5);
              if (iVar2 == 0) {
                *(uint32_t *)(pMVar1 + 0xb18) = 2;
              }
            }
            *(uint32_t *)(pMVar1 + 0xb24) = *(uint32_t *)(pFVar5 + 0x58);
          }
        }
        if (*(int *)(pMVar1 + 0xb28) != 2) {
          if (*(int *)(pMVar1 + 0xb28) == 0) {
            pFVar5 = *(FlashLibraryInstance **)(pMVar1 + 0xaa0);
          }
          else {
            pFVar5 = *(FlashLibraryInstance **)(pMVar1 + 0xaa8);
          }
          if (pFVar5 != (FlashLibraryInstance *)0x0) {
            *(uint32_t *)(pFVar5 + 0x30) = *(uint32_t *)(pMVar1 + 0xb2c);
            *(uint32_t *)(pFVar5 + 0x34) = *(uint32_t *)(pMVar1 + 0xb30);
            *(uint32_t *)(pFVar5 + 0x58) = *(uint32_t *)(pMVar1 + 0xb34);
            (**(code **)(*(long *)pFVar5 + 0x10))(pFVar5);
            if (*(int *)(pMVar1 + 0xb28) == 1) {
              iVar2 = FlashLibraryInstance__IsPlaying(pFVar5);
              if (iVar2 == 0) {
                *(uint32_t *)(pMVar1 + 0xb28) = 2;
              }
            }
            *(uint32_t *)(pMVar1 + 0xb34) = *(uint32_t *)(pFVar5 + 0x58);
          }
        }
        if (*(int *)(pMVar1 + 0xb38) != 2) {
          if (*(int *)(pMVar1 + 0xb38) == 0) {
            pFVar5 = *(FlashLibraryInstance **)(pMVar1 + 0xaa0);
          }
          else {
            pFVar5 = *(FlashLibraryInstance **)(pMVar1 + 0xaa8);
          }
          if (pFVar5 != (FlashLibraryInstance *)0x0) {
            *(uint32_t *)(pFVar5 + 0x30) = *(uint32_t *)(pMVar1 + 0xb3c);
            *(uint32_t *)(pFVar5 + 0x34) = *(uint32_t *)(pMVar1 + 0xb40);
            *(uint32_t *)(pFVar5 + 0x58) = *(uint32_t *)(pMVar1 + 0xb44);
            (**(code **)(*(long *)pFVar5 + 0x10))(pFVar5);
            if (*(int *)(pMVar1 + 0xb38) == 1) {
              iVar2 = FlashLibraryInstance__IsPlaying(pFVar5);
              if (iVar2 == 0) {
                *(uint32_t *)(pMVar1 + 0xb38) = 2;
              }
            }
            *(uint32_t *)(pMVar1 + 0xb44) = *(uint32_t *)(pFVar5 + 0x58);
          }
        }
        if (*(int *)(pMVar1 + 0xb48) != 2) {
          if (*(int *)(pMVar1 + 0xb48) == 0) {
            pFVar5 = *(FlashLibraryInstance **)(pMVar1 + 0xaa0);
          }
          else {
            pFVar5 = *(FlashLibraryInstance **)(pMVar1 + 0xaa8);
          }
          if (pFVar5 != (FlashLibraryInstance *)0x0) {
            *(uint32_t *)(pFVar5 + 0x30) = *(uint32_t *)(pMVar1 + 0xb4c);
            *(uint32_t *)(pFVar5 + 0x34) = *(uint32_t *)(pMVar1 + 0xb50);
            *(uint32_t *)(pFVar5 + 0x58) = *(uint32_t *)(pMVar1 + 0xb54);
            (**(code **)(*(long *)pFVar5 + 0x10))(pFVar5);
            if (*(int *)(pMVar1 + 0xb48) == 1) {
              iVar2 = FlashLibraryInstance__IsPlaying(pFVar5);
              if (iVar2 == 0) {
                *(uint32_t *)(pMVar1 + 0xb48) = 2;
              }
            }
            *(uint32_t *)(pMVar1 + 0xb54) = *(uint32_t *)(pFVar5 + 0x58);
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
 * AlienHominid__Render  (Ghidra `Render` @ 00462190)
 * Signature: uint8_t __thiscall Render(AlienHominid * self)
 * Class: AlienHominid
 * Calls: `FlashLibraryInstance__IsPlaying`, `MeatBoyCharFoundation__Render`, `MeatBoyCharactor__Render`
 * Called by: (none)
 */
/* AlienHominid__Render() */

void __thiscall AlienHominid__Render(AlienHominid *self)

{
  int iVar1;
  FlashLibraryInstance *pFVar2;
  
  if (*(int *)(self + 0xab0) == 1) {
    (**(code **)(*(long *)self + 0x50))();
    *(uint32_t *)(*(long *)(self + 0xa98) + 0x58) = *(uint32_t *)(self + 0xab4);
    MeatBoyCharFoundation__Render
              (*(MeatBoyCharFoundation **)(self + 0xf8),(MeatBoyCharactor *)self,
               *(FlashLibraryInstance **)(self + 0xa98));
    *(uint32_t *)(self + 0xab4) = *(uint32_t *)(*(long *)(self + 0xa98) + 0x58);
  }
  else {
    MeatBoyCharactor__Render((MeatBoyCharactor *)self);
  }
  if (*(int *)(self + 0xab8) != 2) {
    if (*(int *)(self + 0xab8) == 0) {
      pFVar2 = *(FlashLibraryInstance **)(self + 0xaa0);
    }
    else {
      pFVar2 = *(FlashLibraryInstance **)(self + 0xaa8);
    }
    if (pFVar2 != (FlashLibraryInstance *)0x0) {
      *(uint32_t *)(pFVar2 + 0x30) = *(uint32_t *)(self + 0xabc);
      *(uint32_t *)(pFVar2 + 0x34) = *(uint32_t *)(self + 0xac0);
      *(uint32_t *)(pFVar2 + 0x58) = *(uint32_t *)(self + 0xac4);
      (**(code **)(*(long *)pFVar2 + 0x10))(pFVar2);
      if (*(int *)(self + 0xab8) == 1) {
        iVar1 = FlashLibraryInstance__IsPlaying(pFVar2);
        if (iVar1 == 0) {
          *(uint32_t *)(self + 0xab8) = 2;
        }
      }
      *(uint32_t *)(self + 0xac4) = *(uint32_t *)(pFVar2 + 0x58);
    }
  }
  if (*(int *)(self + 0xac8) != 2) {
    if (*(int *)(self + 0xac8) == 0) {
      pFVar2 = *(FlashLibraryInstance **)(self + 0xaa0);
    }
    else {
      pFVar2 = *(FlashLibraryInstance **)(self + 0xaa8);
    }
    if (pFVar2 != (FlashLibraryInstance *)0x0) {
      *(uint32_t *)(pFVar2 + 0x30) = *(uint32_t *)(self + 0xacc);
      *(uint32_t *)(pFVar2 + 0x34) = *(uint32_t *)(self + 0xad0);
      *(uint32_t *)(pFVar2 + 0x58) = *(uint32_t *)(self + 0xad4);
      (**(code **)(*(long *)pFVar2 + 0x10))(pFVar2);
      if (*(int *)(self + 0xac8) == 1) {
        iVar1 = FlashLibraryInstance__IsPlaying(pFVar2);
        if (iVar1 == 0) {
          *(uint32_t *)(self + 0xac8) = 2;
        }
      }
      *(uint32_t *)(self + 0xad4) = *(uint32_t *)(pFVar2 + 0x58);
    }
  }
  if (*(int *)(self + 0xad8) != 2) {
    if (*(int *)(self + 0xad8) == 0) {
      pFVar2 = *(FlashLibraryInstance **)(self + 0xaa0);
    }
    else {
      pFVar2 = *(FlashLibraryInstance **)(self + 0xaa8);
    }
    if (pFVar2 != (FlashLibraryInstance *)0x0) {
      *(uint32_t *)(pFVar2 + 0x30) = *(uint32_t *)(self + 0xadc);
      *(uint32_t *)(pFVar2 + 0x34) = *(uint32_t *)(self + 0xae0);
      *(uint32_t *)(pFVar2 + 0x58) = *(uint32_t *)(self + 0xae4);
      (**(code **)(*(long *)pFVar2 + 0x10))(pFVar2);
      if (*(int *)(self + 0xad8) == 1) {
        iVar1 = FlashLibraryInstance__IsPlaying(pFVar2);
        if (iVar1 == 0) {
          *(uint32_t *)(self + 0xad8) = 2;
        }
      }
      *(uint32_t *)(self + 0xae4) = *(uint32_t *)(pFVar2 + 0x58);
    }
  }
  if (*(int *)(self + 0xae8) != 2) {
    if (*(int *)(self + 0xae8) == 0) {
      pFVar2 = *(FlashLibraryInstance **)(self + 0xaa0);
    }
    else {
      pFVar2 = *(FlashLibraryInstance **)(self + 0xaa8);
    }
    if (pFVar2 != (FlashLibraryInstance *)0x0) {
      *(uint32_t *)(pFVar2 + 0x30) = *(uint32_t *)(self + 0xaec);
      *(uint32_t *)(pFVar2 + 0x34) = *(uint32_t *)(self + 0xaf0);
      *(uint32_t *)(pFVar2 + 0x58) = *(uint32_t *)(self + 0xaf4);
      (**(code **)(*(long *)pFVar2 + 0x10))(pFVar2);
      if (*(int *)(self + 0xae8) == 1) {
        iVar1 = FlashLibraryInstance__IsPlaying(pFVar2);
        if (iVar1 == 0) {
          *(uint32_t *)(self + 0xae8) = 2;
        }
      }
      *(uint32_t *)(self + 0xaf4) = *(uint32_t *)(pFVar2 + 0x58);
    }
  }
  if (*(int *)(self + 0xaf8) != 2) {
    if (*(int *)(self + 0xaf8) == 0) {
      pFVar2 = *(FlashLibraryInstance **)(self + 0xaa0);
    }
    else {
      pFVar2 = *(FlashLibraryInstance **)(self + 0xaa8);
    }
    if (pFVar2 != (FlashLibraryInstance *)0x0) {
      *(uint32_t *)(pFVar2 + 0x30) = *(uint32_t *)(self + 0xafc);
      *(uint32_t *)(pFVar2 + 0x34) = *(uint32_t *)(self + 0xb00);
      *(uint32_t *)(pFVar2 + 0x58) = *(uint32_t *)(self + 0xb04);
      (**(code **)(*(long *)pFVar2 + 0x10))(pFVar2);
      if (*(int *)(self + 0xaf8) == 1) {
        iVar1 = FlashLibraryInstance__IsPlaying(pFVar2);
        if (iVar1 == 0) {
          *(uint32_t *)(self + 0xaf8) = 2;
        }
      }
      *(uint32_t *)(self + 0xb04) = *(uint32_t *)(pFVar2 + 0x58);
    }
  }
  if (*(int *)(self + 0xb08) != 2) {
    if (*(int *)(self + 0xb08) == 0) {
      pFVar2 = *(FlashLibraryInstance **)(self + 0xaa0);
    }
    else {
      pFVar2 = *(FlashLibraryInstance **)(self + 0xaa8);
    }
    if (pFVar2 != (FlashLibraryInstance *)0x0) {
      *(uint32_t *)(pFVar2 + 0x30) = *(uint32_t *)(self + 0xb0c);
      *(uint32_t *)(pFVar2 + 0x34) = *(uint32_t *)(self + 0xb10);
      *(uint32_t *)(pFVar2 + 0x58) = *(uint32_t *)(self + 0xb14);
      (**(code **)(*(long *)pFVar2 + 0x10))(pFVar2);
      if (*(int *)(self + 0xb08) == 1) {
        iVar1 = FlashLibraryInstance__IsPlaying(pFVar2);
        if (iVar1 == 0) {
          *(uint32_t *)(self + 0xb08) = 2;
        }
      }
      *(uint32_t *)(self + 0xb14) = *(uint32_t *)(pFVar2 + 0x58);
    }
  }
  if (*(int *)(self + 0xb18) != 2) {
    if (*(int *)(self + 0xb18) == 0) {
      pFVar2 = *(FlashLibraryInstance **)(self + 0xaa0);
    }
    else {
      pFVar2 = *(FlashLibraryInstance **)(self + 0xaa8);
    }
    if (pFVar2 != (FlashLibraryInstance *)0x0) {
      *(uint32_t *)(pFVar2 + 0x30) = *(uint32_t *)(self + 0xb1c);
      *(uint32_t *)(pFVar2 + 0x34) = *(uint32_t *)(self + 0xb20);
      *(uint32_t *)(pFVar2 + 0x58) = *(uint32_t *)(self + 0xb24);
      (**(code **)(*(long *)pFVar2 + 0x10))(pFVar2);
      if (*(int *)(self + 0xb18) == 1) {
        iVar1 = FlashLibraryInstance__IsPlaying(pFVar2);
        if (iVar1 == 0) {
          *(uint32_t *)(self + 0xb18) = 2;
        }
      }
      *(uint32_t *)(self + 0xb24) = *(uint32_t *)(pFVar2 + 0x58);
    }
  }
  if (*(int *)(self + 0xb28) != 2) {
    if (*(int *)(self + 0xb28) == 0) {
      pFVar2 = *(FlashLibraryInstance **)(self + 0xaa0);
    }
    else {
      pFVar2 = *(FlashLibraryInstance **)(self + 0xaa8);
    }
    if (pFVar2 != (FlashLibraryInstance *)0x0) {
      *(uint32_t *)(pFVar2 + 0x30) = *(uint32_t *)(self + 0xb2c);
      *(uint32_t *)(pFVar2 + 0x34) = *(uint32_t *)(self + 0xb30);
      *(uint32_t *)(pFVar2 + 0x58) = *(uint32_t *)(self + 0xb34);
      (**(code **)(*(long *)pFVar2 + 0x10))(pFVar2);
      if (*(int *)(self + 0xb28) == 1) {
        iVar1 = FlashLibraryInstance__IsPlaying(pFVar2);
        if (iVar1 == 0) {
          *(uint32_t *)(self + 0xb28) = 2;
        }
      }
      *(uint32_t *)(self + 0xb34) = *(uint32_t *)(pFVar2 + 0x58);
    }
  }
  if (*(int *)(self + 0xb38) != 2) {
    if (*(int *)(self + 0xb38) == 0) {
      pFVar2 = *(FlashLibraryInstance **)(self + 0xaa0);
    }
    else {
      pFVar2 = *(FlashLibraryInstance **)(self + 0xaa8);
    }
    if (pFVar2 != (FlashLibraryInstance *)0x0) {
      *(uint32_t *)(pFVar2 + 0x30) = *(uint32_t *)(self + 0xb3c);
      *(uint32_t *)(pFVar2 + 0x34) = *(uint32_t *)(self + 0xb40);
      *(uint32_t *)(pFVar2 + 0x58) = *(uint32_t *)(self + 0xb44);
      (**(code **)(*(long *)pFVar2 + 0x10))(pFVar2);
      if (*(int *)(self + 0xb38) == 1) {
        iVar1 = FlashLibraryInstance__IsPlaying(pFVar2);
        if (iVar1 == 0) {
          *(uint32_t *)(self + 0xb38) = 2;
        }
      }
      *(uint32_t *)(self + 0xb44) = *(uint32_t *)(pFVar2 + 0x58);
    }
  }
  if (*(int *)(self + 0xb48) != 2) {
    if (*(int *)(self + 0xb48) == 0) {
      pFVar2 = *(FlashLibraryInstance **)(self + 0xaa0);
    }
    else {
      pFVar2 = *(FlashLibraryInstance **)(self + 0xaa8);
    }
    if (pFVar2 != (FlashLibraryInstance *)0x0) {
      *(uint32_t *)(pFVar2 + 0x30) = *(uint32_t *)(self + 0xb4c);
      *(uint32_t *)(pFVar2 + 0x34) = *(uint32_t *)(self + 0xb50);
      *(uint32_t *)(pFVar2 + 0x58) = *(uint32_t *)(self + 0xb54);
      (**(code **)(*(long *)pFVar2 + 0x10))(pFVar2);
      if (*(int *)(self + 0xb48) == 1) {
        iVar1 = FlashLibraryInstance__IsPlaying(pFVar2);
        if (iVar1 == 0) {
          *(uint32_t *)(self + 0xb48) = 2;
        }
      }
      *(uint32_t *)(self + 0xb54) = *(uint32_t *)(pFVar2 + 0x58);
    }
  }
  return;
}

/* ======================================================================
 * AlienHominid__ProcessSpecial  (Ghidra `ProcessSpecial` @ 00462760)
 * Signature: uint8_t __thiscall ProcessSpecial(AlienHominid * self)
 * Class: AlienHominid
 * Calls: `Vector2__operator_assign`
 * Called by: (none)
 */
/* AlienHominid__ProcessSpecial() */

void __thiscall AlienHominid__ProcessSpecial(AlienHominid *self)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)(self + 0xab0);
  uVar1 = *(byte *)(*(long *)(self + 0x7e0) + 3) >> 6 & 1;
  *(uint *)(self + 0xab0) = uVar1;
  if ((iVar2 != 0) || (uVar1 != 1)) {
    return;
  }
  if (*(int *)(self + 0xab8) == 2) {
    iVar2 = 0;
  }
  else if (*(int *)(self + 0xac8) == 2) {
    iVar2 = 1;
  }
  else if (*(int *)(self + 0xad8) == 2) {
    iVar2 = 2;
  }
  else if (*(int *)(self + 0xae8) == 2) {
    iVar2 = 3;
  }
  else if (*(int *)(self + 0xaf8) == 2) {
    iVar2 = 4;
  }
  else if (*(int *)(self + 0xb08) == 2) {
    iVar2 = 5;
  }
  else if (*(int *)(self + 0xb18) == 2) {
    iVar2 = 6;
  }
  else if (*(int *)(self + 0xb28) == 2) {
    iVar2 = 7;
  }
  else if (*(int *)(self + 0xb38) == 2) {
    iVar2 = 8;
  }
  else {
    iVar2 = 9;
    if (*(int *)(self + 0xb48) != 2) goto LAB_0046282f;
  }
  Vector2__operator_assign((Vector2 *)(self + ((long)iVar2 + 0xab) * 0x10 + 0xc),(Vector2 *)(self + 0xa0))
  ;
  *(uint32_t *)(self + ((long)iVar2 + 0xab) * 0x10 + 8) = 0;
LAB_0046282f:
  *(uint32_t *)(self + 0xab4) = 0;
  return;
}

/* ======================================================================
 * AlienHominid__AlienHominid__004628b0  (Ghidra `AlienHominid` @ 004628b0)
 * Signature: uint8_t __thiscall AlienHominid(AlienHominid * self)
 * Class: AlienHominid
 * Calls: `AlienHominid__AlienHominid__00462960`, `FormatResourcePath`, `MeatBoyCharactor__MeatBoyCharactor__0047b350`
 * Called by: (none)
 */
/* AlienHominid__AlienHominid__00462960() */

void __thiscall AlienHominid__AlienHominid__00462960(AlienHominid *self)

{
  uint64_t uVar1;
  
  uVar1 = FormatResourcePath("/Animations/ah.am",&strCharPath);
  MeatBoyCharactor__MeatBoyCharactor__0047b350((MeatBoyCharactor *)self,uVar1,0x1b);
  *(uint8_t ***)self = &PTR__AlienHominid_005be4f0;
  *(uint32_t *)(self + 0xab8) = 2;
  *(uint32_t *)(self + 0xac8) = 2;
  *(uint32_t *)(self + 0xad8) = 2;
  *(uint32_t *)(self + 0xae8) = 2;
  *(uint32_t *)(self + 0xaf8) = 2;
  *(uint32_t *)(self + 0xb08) = 2;
  *(uint32_t *)(self + 0xb18) = 2;
  *(uint32_t *)(self + 0xb28) = 2;
  *(uint32_t *)(self + 0xb38) = 2;
  *(uint32_t *)(self + 0xb48) = 2;
  *(uint32_t *)(self + 0xa54) = 0x1b;
  *(uint32_t *)(self + 0xab0) = 0;
  return;
}

/* ======================================================================
 * AlienHominid__AlienHominid__00462960  (Ghidra `AlienHominid` @ 00462960)
 * Signature: uint8_t __thiscall AlienHominid(AlienHominid * self, MeatBoyCharactor * arg1, int arg2)
 * Class: AlienHominid
 * Calls: `MeatBoyCharactor__Clone`, `MeatBoyCharactor__MeatBoyCharactor__0047b350`
 * Called by: `AlienHominid__AlienHominid`, `AlienHominid__AlienHominid__004628b0`, `GSMBCharactor__CreateCharactor`, `GSMBCharactor__CreateCharactor__0049c600`
 */
/* AlienHominid__AlienHominid__00462960(MeatBoyCharactor*, int) */

void __thiscall AlienHominid__AlienHominid__00462960(AlienHominid *self,MeatBoyCharactor *arg1,int arg2)

{
  MeatBoyCharactor__MeatBoyCharactor__0047b350((MeatBoyCharactor *)self);
  *(uint8_t ***)self = &PTR__AlienHominid_005be4f0;
  *(uint32_t *)(self + 0xab8) = 2;
  *(uint32_t *)(self + 0xac8) = 2;
  *(uint32_t *)(self + 0xad8) = 2;
  *(uint32_t *)(self + 0xae8) = 2;
  *(uint32_t *)(self + 0xaf8) = 2;
  *(uint32_t *)(self + 0xb08) = 2;
  *(uint32_t *)(self + 0xb18) = 2;
  *(uint32_t *)(self + 0xb28) = 2;
  *(uint32_t *)(self + 0xb38) = 2;
  *(uint32_t *)(self + 0xb48) = 2;
                    /* try { // try from 004629f5 to 004629f9 has its CatchHandler @ 00462a41 */
  MeatBoyCharactor__Clone((MeatBoyCharactor *)self,arg1,arg2);
  *(uint32_t *)(self + 0xab0) = 0;
  *(uint64_t *)(self + 0xa98) = *(uint64_t *)(arg1 + 0xa98);
  *(uint64_t *)(self + 0xaa0) = *(uint64_t *)(arg1 + 0xaa0);
  *(uint64_t *)(self + 0xaa8) = *(uint64_t *)(arg1 + 0xaa8);
  return;
}

/* ======================================================================
 * AlienHominid__AddShot  (Ghidra `AddShot` @ 00462a60)
 * Signature: uint8_t __thiscall AddShot(AlienHominid * self)
 * Class: AlienHominid
 * Calls: `Vector2__operator_assign`
 * Called by: (none)
 */
/* AlienHominid__AddShot() */

void __thiscall AlienHominid__AddShot(AlienHominid *self)

{
  int iVar1;
  
  if (*(int *)(self + 0xab8) == 2) {
    iVar1 = 0;
  }
  else if (*(int *)(self + 0xac8) == 2) {
    iVar1 = 1;
  }
  else if (*(int *)(self + 0xad8) == 2) {
    iVar1 = 2;
  }
  else if (*(int *)(self + 0xae8) == 2) {
    iVar1 = 3;
  }
  else if (*(int *)(self + 0xaf8) == 2) {
    iVar1 = 4;
  }
  else if (*(int *)(self + 0xb08) == 2) {
    iVar1 = 5;
  }
  else if (*(int *)(self + 0xb18) == 2) {
    iVar1 = 6;
  }
  else if (*(int *)(self + 0xb28) == 2) {
    iVar1 = 7;
  }
  else if (*(int *)(self + 0xb38) == 2) {
    iVar1 = 8;
  }
  else {
    iVar1 = 9;
    if (*(int *)(self + 0xb48) != 2) {
      return;
    }
  }
  Vector2__operator_assign((Vector2 *)(self + ((long)iVar1 + 0xab) * 0x10 + 0xc),(Vector2 *)(self + 0xa0))
  ;
  *(uint32_t *)(self + ((long)iVar1 + 0xab) * 0x10 + 8) = 0;
  return;
}

/* ======================================================================
 * AlienHominid__RenderShots  (Ghidra `RenderShots` @ 00462b90)
 * Signature: uint8_t __thiscall RenderShots(AlienHominid * self)
 * Class: AlienHominid
 * Calls: `FlashLibraryInstance__IsPlaying`
 * Called by: (none)
 */
/* AlienHominid__RenderShots() */

void __thiscall AlienHominid__RenderShots(AlienHominid *self)

{
  int iVar1;
  FlashLibraryInstance *pFVar2;
  
  if (*(int *)(self + 0xab8) != 2) {
    if (*(int *)(self + 0xab8) == 0) {
      pFVar2 = *(FlashLibraryInstance **)(self + 0xaa0);
    }
    else {
      pFVar2 = *(FlashLibraryInstance **)(self + 0xaa8);
    }
    if (pFVar2 != (FlashLibraryInstance *)0x0) {
      *(uint32_t *)(pFVar2 + 0x30) = *(uint32_t *)(self + 0xabc);
      *(uint32_t *)(pFVar2 + 0x34) = *(uint32_t *)(self + 0xac0);
      *(uint32_t *)(pFVar2 + 0x58) = *(uint32_t *)(self + 0xac4);
      (**(code **)(*(long *)pFVar2 + 0x10))(pFVar2);
      if (*(int *)(self + 0xab8) == 1) {
        iVar1 = FlashLibraryInstance__IsPlaying(pFVar2);
        if (iVar1 == 0) {
          *(uint32_t *)(self + 0xab8) = 2;
        }
      }
      *(uint32_t *)(self + 0xac4) = *(uint32_t *)(pFVar2 + 0x58);
    }
  }
  if (*(int *)(self + 0xac8) != 2) {
    if (*(int *)(self + 0xac8) == 0) {
      pFVar2 = *(FlashLibraryInstance **)(self + 0xaa0);
    }
    else {
      pFVar2 = *(FlashLibraryInstance **)(self + 0xaa8);
    }
    if (pFVar2 != (FlashLibraryInstance *)0x0) {
      *(uint32_t *)(pFVar2 + 0x30) = *(uint32_t *)(self + 0xacc);
      *(uint32_t *)(pFVar2 + 0x34) = *(uint32_t *)(self + 0xad0);
      *(uint32_t *)(pFVar2 + 0x58) = *(uint32_t *)(self + 0xad4);
      (**(code **)(*(long *)pFVar2 + 0x10))(pFVar2);
      if (*(int *)(self + 0xac8) == 1) {
        iVar1 = FlashLibraryInstance__IsPlaying(pFVar2);
        if (iVar1 == 0) {
          *(uint32_t *)(self + 0xac8) = 2;
        }
      }
      *(uint32_t *)(self + 0xad4) = *(uint32_t *)(pFVar2 + 0x58);
    }
  }
  if (*(int *)(self + 0xad8) != 2) {
    if (*(int *)(self + 0xad8) == 0) {
      pFVar2 = *(FlashLibraryInstance **)(self + 0xaa0);
    }
    else {
      pFVar2 = *(FlashLibraryInstance **)(self + 0xaa8);
    }
    if (pFVar2 != (FlashLibraryInstance *)0x0) {
      *(uint32_t *)(pFVar2 + 0x30) = *(uint32_t *)(self + 0xadc);
      *(uint32_t *)(pFVar2 + 0x34) = *(uint32_t *)(self + 0xae0);
      *(uint32_t *)(pFVar2 + 0x58) = *(uint32_t *)(self + 0xae4);
      (**(code **)(*(long *)pFVar2 + 0x10))(pFVar2);
      if (*(int *)(self + 0xad8) == 1) {
        iVar1 = FlashLibraryInstance__IsPlaying(pFVar2);
        if (iVar1 == 0) {
          *(uint32_t *)(self + 0xad8) = 2;
        }
      }
      *(uint32_t *)(self + 0xae4) = *(uint32_t *)(pFVar2 + 0x58);
    }
  }
  if (*(int *)(self + 0xae8) != 2) {
    if (*(int *)(self + 0xae8) == 0) {
      pFVar2 = *(FlashLibraryInstance **)(self + 0xaa0);
    }
    else {
      pFVar2 = *(FlashLibraryInstance **)(self + 0xaa8);
    }
    if (pFVar2 != (FlashLibraryInstance *)0x0) {
      *(uint32_t *)(pFVar2 + 0x30) = *(uint32_t *)(self + 0xaec);
      *(uint32_t *)(pFVar2 + 0x34) = *(uint32_t *)(self + 0xaf0);
      *(uint32_t *)(pFVar2 + 0x58) = *(uint32_t *)(self + 0xaf4);
      (**(code **)(*(long *)pFVar2 + 0x10))(pFVar2);
      if (*(int *)(self + 0xae8) == 1) {
        iVar1 = FlashLibraryInstance__IsPlaying(pFVar2);
        if (iVar1 == 0) {
          *(uint32_t *)(self + 0xae8) = 2;
        }
      }
      *(uint32_t *)(self + 0xaf4) = *(uint32_t *)(pFVar2 + 0x58);
    }
  }
  if (*(int *)(self + 0xaf8) != 2) {
    if (*(int *)(self + 0xaf8) == 0) {
      pFVar2 = *(FlashLibraryInstance **)(self + 0xaa0);
    }
    else {
      pFVar2 = *(FlashLibraryInstance **)(self + 0xaa8);
    }
    if (pFVar2 != (FlashLibraryInstance *)0x0) {
      *(uint32_t *)(pFVar2 + 0x30) = *(uint32_t *)(self + 0xafc);
      *(uint32_t *)(pFVar2 + 0x34) = *(uint32_t *)(self + 0xb00);
      *(uint32_t *)(pFVar2 + 0x58) = *(uint32_t *)(self + 0xb04);
      (**(code **)(*(long *)pFVar2 + 0x10))(pFVar2);
      if (*(int *)(self + 0xaf8) == 1) {
        iVar1 = FlashLibraryInstance__IsPlaying(pFVar2);
        if (iVar1 == 0) {
          *(uint32_t *)(self + 0xaf8) = 2;
        }
      }
      *(uint32_t *)(self + 0xb04) = *(uint32_t *)(pFVar2 + 0x58);
    }
  }
  if (*(int *)(self + 0xb08) != 2) {
    if (*(int *)(self + 0xb08) == 0) {
      pFVar2 = *(FlashLibraryInstance **)(self + 0xaa0);
    }
    else {
      pFVar2 = *(FlashLibraryInstance **)(self + 0xaa8);
    }
    if (pFVar2 != (FlashLibraryInstance *)0x0) {
      *(uint32_t *)(pFVar2 + 0x30) = *(uint32_t *)(self + 0xb0c);
      *(uint32_t *)(pFVar2 + 0x34) = *(uint32_t *)(self + 0xb10);
      *(uint32_t *)(pFVar2 + 0x58) = *(uint32_t *)(self + 0xb14);
      (**(code **)(*(long *)pFVar2 + 0x10))(pFVar2);
      if (*(int *)(self + 0xb08) == 1) {
        iVar1 = FlashLibraryInstance__IsPlaying(pFVar2);
        if (iVar1 == 0) {
          *(uint32_t *)(self + 0xb08) = 2;
        }
      }
      *(uint32_t *)(self + 0xb14) = *(uint32_t *)(pFVar2 + 0x58);
    }
  }
  if (*(int *)(self + 0xb18) != 2) {
    if (*(int *)(self + 0xb18) == 0) {
      pFVar2 = *(FlashLibraryInstance **)(self + 0xaa0);
    }
    else {
      pFVar2 = *(FlashLibraryInstance **)(self + 0xaa8);
    }
    if (pFVar2 != (FlashLibraryInstance *)0x0) {
      *(uint32_t *)(pFVar2 + 0x30) = *(uint32_t *)(self + 0xb1c);
      *(uint32_t *)(pFVar2 + 0x34) = *(uint32_t *)(self + 0xb20);
      *(uint32_t *)(pFVar2 + 0x58) = *(uint32_t *)(self + 0xb24);
      (**(code **)(*(long *)pFVar2 + 0x10))(pFVar2);
      if (*(int *)(self + 0xb18) == 1) {
        iVar1 = FlashLibraryInstance__IsPlaying(pFVar2);
        if (iVar1 == 0) {
          *(uint32_t *)(self + 0xb18) = 2;
        }
      }
      *(uint32_t *)(self + 0xb24) = *(uint32_t *)(pFVar2 + 0x58);
    }
  }
  if (*(int *)(self + 0xb28) != 2) {
    if (*(int *)(self + 0xb28) == 0) {
      pFVar2 = *(FlashLibraryInstance **)(self + 0xaa0);
    }
    else {
      pFVar2 = *(FlashLibraryInstance **)(self + 0xaa8);
    }
    if (pFVar2 != (FlashLibraryInstance *)0x0) {
      *(uint32_t *)(pFVar2 + 0x30) = *(uint32_t *)(self + 0xb2c);
      *(uint32_t *)(pFVar2 + 0x34) = *(uint32_t *)(self + 0xb30);
      *(uint32_t *)(pFVar2 + 0x58) = *(uint32_t *)(self + 0xb34);
      (**(code **)(*(long *)pFVar2 + 0x10))(pFVar2);
      if (*(int *)(self + 0xb28) == 1) {
        iVar1 = FlashLibraryInstance__IsPlaying(pFVar2);
        if (iVar1 == 0) {
          *(uint32_t *)(self + 0xb28) = 2;
        }
      }
      *(uint32_t *)(self + 0xb34) = *(uint32_t *)(pFVar2 + 0x58);
    }
  }
  if (*(int *)(self + 0xb38) != 2) {
    if (*(int *)(self + 0xb38) == 0) {
      pFVar2 = *(FlashLibraryInstance **)(self + 0xaa0);
    }
    else {
      pFVar2 = *(FlashLibraryInstance **)(self + 0xaa8);
    }
    if (pFVar2 != (FlashLibraryInstance *)0x0) {
      *(uint32_t *)(pFVar2 + 0x30) = *(uint32_t *)(self + 0xb3c);
      *(uint32_t *)(pFVar2 + 0x34) = *(uint32_t *)(self + 0xb40);
      *(uint32_t *)(pFVar2 + 0x58) = *(uint32_t *)(self + 0xb44);
      (**(code **)(*(long *)pFVar2 + 0x10))(pFVar2);
      if (*(int *)(self + 0xb38) == 1) {
        iVar1 = FlashLibraryInstance__IsPlaying(pFVar2);
        if (iVar1 == 0) {
          *(uint32_t *)(self + 0xb38) = 2;
        }
      }
      *(uint32_t *)(self + 0xb44) = *(uint32_t *)(pFVar2 + 0x58);
    }
  }
  if (*(int *)(self + 0xb48) != 2) {
    if (*(int *)(self + 0xb48) == 0) {
      pFVar2 = *(FlashLibraryInstance **)(self + 0xaa0);
    }
    else {
      pFVar2 = *(FlashLibraryInstance **)(self + 0xaa8);
    }
    if (pFVar2 != (FlashLibraryInstance *)0x0) {
      *(uint32_t *)(pFVar2 + 0x30) = *(uint32_t *)(self + 0xb4c);
      *(uint32_t *)(pFVar2 + 0x34) = *(uint32_t *)(self + 0xb50);
      *(uint32_t *)(pFVar2 + 0x58) = *(uint32_t *)(self + 0xb54);
      (**(code **)(*(long *)pFVar2 + 0x10))(pFVar2);
      if (*(int *)(self + 0xb48) == 1) {
        iVar1 = FlashLibraryInstance__IsPlaying(pFVar2);
        if (iVar1 == 0) {
          *(uint32_t *)(self + 0xb48) = 2;
        }
      }
      *(uint32_t *)(self + 0xb54) = *(uint32_t *)(pFVar2 + 0x58);
    }
  }
  return;
}
