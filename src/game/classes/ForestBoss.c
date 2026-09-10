/* src/game/classes/ForestBoss.c — 11 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "ForestBoss.h"

/* ======================================================================
 * ForestBoss__GetPosition  (Ghidra `GetPosition` @ 0046a020)
 * Signature: uint8_t __stdcall GetPosition(void)
 * Class: ForestBoss
 * Calls: (none)
 * Called by: (none)
 */
/* ForestBoss__GetPosition() */

void ForestBoss__GetPosition(void)

{
  long in_RSI;
  uint64_t *in_RDI;

  *in_RDI = *(uint64_t *)(in_RSI + 0x1bc);
  return;
}

/* ======================================================================
 * ForestBoss__Reset  (Ghidra `Reset` @ 0046a030)
 * Signature: uint8_t __thiscall Reset(ForestBoss * self)
 * Class: ForestBoss
 * Calls: `FlashLibraryInstance__Reset`, `SMBBoss__Reset`, `Vector2__operator_assign`
 * Called by: (none)
 */
/* ForestBoss__Reset() */

void __thiscall ForestBoss__Reset(ForestBoss *self)

{
  uint uVar1;

  *(uint32_t *)(self + 0x1a8) = 0;
  Vector2__operator_assign((Vector2 *)(self + 0x1ac), (Vector2 *)(self + 0x28));
  Vector2__operator_assign((Vector2 *)(self + 0x1b4), (Vector2 *)(self + 0x48));
  uVar1 = DAT_005be880 /* R:u32=2147483647 */;
  *(uint32_t *)(*(long *)(self + 400) + 0x20) = *(uint32_t *)(self + 0x170);
  *(uint32_t *)(*(long *)(self + 0x198) + 0x20) = *(uint32_t *)(self + 0x174);
  *(uint32_t *)(*(long *)(self + 400) + 0x30) = *(uint32_t *)(self + 0x28);
  *(uint32_t *)(*(long *)(self + 400) + 0x34) = *(uint32_t *)(self + 0x2c);
  *(uint *)(*(long *)(self + 400) + 0x40) = *(uint *)(*(long *)(self + 400) + 0x40) & uVar1;
  Vector2__operator_assign((Vector2 *)(self + 0x1bc), (Vector2 *)(self + 0x1ac));
  *(FlashLibraryInstance **)(self + 0x1a0) = *(FlashLibraryInstance **)(self + 400);
  FlashLibraryInstance__Reset(*(FlashLibraryInstance **)(self + 400));
  *(ushort *)(self + 0x1d2) = *(ushort *)(self + 0x1d2) & 1;
  *(uint32_t *)(self + 0x1cc) = 0x3a6bedfa;
  uVar1 = *(uint *)(self + 0x1d0);
  *(uint32_t *)(self + 0x1d4) = 0;
  *(uint *)(self + 0x1d0) = uVar1 & 0xfffe0003;
  self[0x1d0] = (ForestBoss)((byte)(uVar1 & 0xfffe0003) & 1);
  SMBBoss__Reset((SMBBoss *)self);
  return;
}

/* ======================================================================
 * ForestBoss__GetCameraFocus  (Ghidra `GetCameraFocus` @ 0046a130)
 * Signature: uint8_t __thiscall GetCameraFocus(ForestBoss * self, FPUVector * arg1)
 * Class: ForestBoss
 * Calls: `GSuperMeatBoy__getChar`, `MeatBoyCharactor__getRenderPos`
 * Called by: (none)
 */
/* ForestBoss__GetCameraFocus(FPUVector*) */

void __thiscall ForestBoss__GetCameraFocus(ForestBoss *self, FPUVector *arg1)

{
  uint32_t uVar1;
  MeatBoyCharactor *this_00;
  uint32_t *puVar2;

  this_00 = (MeatBoyCharactor *)GSuperMeatBoy__getChar(SuperMeatBoy, 1);
  puVar2 = (uint32_t *)MeatBoyCharactor__getRenderPos(this_00);
  *(uint32_t *)arg1 = *puVar2;
  uVar1 = *(uint32_t *)(self + 0xcc);
  *(uint32_t *)(arg1 + 8) = 0;
  *(uint32_t *)(arg1 + 4) = uVar1;
  return;
}

/* ======================================================================
 * ForestBoss__ForestBoss  (Ghidra `~ForestBoss` @ 0046a180)
 * Signature: uint8_t __thiscall ~ForestBoss(ForestBoss * self)
 * Class: ForestBoss
 * Calls: `ForestBoss__ForestBoss__0046a1f0`, `SMBBoss__SMBBoss__0048d920`
 * Called by: (none)
 */
/* ForestBoss__ForestBoss__0046a1f0() */

void __thiscall ForestBoss__ForestBoss__0046a1f0(ForestBoss *self)

{
  *(uint8_t ***)self = &PTR__ForestBoss_005bfb50;
  if (*(long **)(self + 400) != (long *)0x0) {
    /* try { // try from 0046a19e to 0046a1c4 has its CatchHandler @ 0046a1d2 */
    (**(code **)(**(long **)(self + 400) + 8))();
  }
  if (*(long **)(self + 0x198) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x198) + 8))();
  }
  if (*(long **)(self + 0x188) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x188) + 8))();
  }
  SMBBoss__SMBBoss__0048d920((SMBBoss *)self);
  return;
}

/* ======================================================================
 * ForestBoss__ForestBoss__0046a1f0  (Ghidra `~ForestBoss` @ 0046a1f0)
 * Signature: uint8_t __thiscall ~ForestBoss(ForestBoss * self)
 * Class: ForestBoss
 * Calls: `operator_delete`
 * Called by: `ForestBoss__ForestBoss`
 */
/* ForestBoss__ForestBoss__0046a1f0() */

void __thiscall ForestBoss__ForestBoss__0046a1f0(ForestBoss *self)

{
  ForestBoss__dtor(self);
  operator_delete(self);
  return;
}

/* ======================================================================
 * ForestBoss__IsCollidingWithBounds  (Ghidra `IsCollidingWithBounds` @ 0046a210)
 * Signature: uint8_t __thiscall IsCollidingWithBounds(ForestBoss * self, Bounds * arg1)
 * Class: ForestBoss
 * Calls: `FlashLibraryInstance__IsBoundsTouchingInstance__00574660`
 * Called by: (none)
 */
/* ForestBoss__IsCollidingWithBounds(Bounds const*) */

uint64_t __thiscall ForestBoss__IsCollidingWithBounds(ForestBoss *self, Bounds *arg1)

{
  uint64_t uVar1;

  if (*(int *)(self + 0x1d4) != 3) {
    uVar1 = FlashLibraryInstance__IsBoundsTouchingInstance__00574660(
        *(FlashLibraryInstance **)(self + 0x1a0), arg1);
    return uVar1;
  }
  return 0;
}

/* ======================================================================
 * ForestBoss__OnDeath  (Ghidra `OnDeath` @ 0046a230)
 * Signature: uint8_t __thiscall OnDeath(ForestBoss * self)
 * Class: ForestBoss
 * Calls: `FlashAnimationLibrary__GetLibraryEntry`, `FlashLibraryEntry__GetDuration`, `FlashLibraryInstance__Reset`, `GSuperMeatBoy__getChar`, `MeatBoyCharactor__RemoveControls`, `ScreenFlashManager__SetFade`
 * Called by: (none)
 */
/* ForestBoss__OnDeath() */

void __thiscall ForestBoss__OnDeath(ForestBoss *self)

{
  FlashLibraryEntry *this_00;
  MeatBoyCharactor *this_01;
  float fVar1;

  if (*(int *)(self + 0x1d4) != 3) {
    *(uint32_t *)(self + 0x1d4) = 3;
    FlashLibraryInstance__Reset(*(FlashLibraryInstance **)(self + 0x188));
    this_00 = (FlashLibraryEntry *)FlashAnimationLibrary__GetLibraryEntry(
        *(FlashAnimationLibrary **)(self + 0x20), *(int *)(*(long *)(self + 0x188) + 0x20));
    fVar1 = (float)FlashLibraryEntry__GetDuration(this_00);
    ScreenFlashManager__SetFade((ScreenFlashManager *)&ScreenFlash, fVar1,
                                (ColorTemplate *)::cWhite);
    this_01 = (MeatBoyCharactor *)GSuperMeatBoy__getChar(SuperMeatBoy, 1);
    MeatBoyCharactor__RemoveControls(this_01);
    return;
  }
  return;
}

/* ======================================================================
 * ForestBoss__Render  (Ghidra `Render` @ 0046a2b0)
 * Signature: uint8_t __thiscall Render(ForestBoss * self)
 * Class: ForestBoss
 * Calls: `FlashLibraryInstance__IsPlaying`, `FlashLibraryInstance__Reset`, `SMBCamera__ScreenShake`, `Vector2__operator_assign`
 * Called by: (none)
 */
/* ForestBoss__Render() */

void __thiscall ForestBoss__Render(ForestBoss *self)

{
  long lVar1;
  long lVar2;
  int iVar3;
  short sVar4;
  uint uVar5;

  if (((byte)self[0x1d0] & 1) == 0) {
    if (*(int *)(self + 0x1d4) == 0) {
      sVar4 = (short)((int)(*(uint *)(self + 0x1d0) << 0xf) >> 0x11);
      if (sVar4 < 1) {
        lVar1 = *(long *)(self + 400);
        lVar2 = *(long *)(self + 0x1a0);
        if ((*(ushort *)(self + 0x1d2) & 0xfffe) == 0) {
          if (lVar1 == lVar2) {
            *(uint32_t *)(lVar1 + 0x20) = *(uint32_t *)(self + 0x170);
          } else {
            *(uint32_t *)(lVar2 + 0x20) = *(uint32_t *)(self + 0x174);
          }
        } else if (lVar1 == lVar2) {
          *(uint32_t *)(lVar1 + 0x20) = *(uint32_t *)(self + 0x180);
        } else {
          *(uint32_t *)(lVar2 + 0x20) = *(uint32_t *)(self + 0x184);
        }
      } else {
        uVar5 = ((ushort)((short)(sVar4 * 2 + -2) >> 1) & 0x7fff) << 2;
        *(uint *)(self + 0x1d0) = *(uint *)(self + 0x1d0) & 0xfffe0003 | uVar5;
        *(ushort *)(self + 0x1d2) = (ushort)(uVar5 >> 0x10) | 2;
        if (*(long *)(self + 400) == *(long *)(self + 0x1a0)) {
          *(uint32_t *)(*(long *)(self + 400) + 0x20) = *(uint32_t *)(self + 0x178);
        } else {
          *(uint32_t *)(*(long *)(self + 0x1a0) + 0x20) = *(uint32_t *)(self + 0x17c);
        }
      }
      (**(code **)(**(long **)(self + 0x1a0) + 0x10))();
      iVar3 = FlashLibraryInstance__IsPlaying(*(FlashLibraryInstance **)(self + 0x1a0));
      if (iVar3 == 0) {
        lVar1 = *(long *)(self + 0x1a0);
        lVar2 = *(long *)(self + 400);
        if (lVar1 == lVar2) {
          lVar2 = *(long *)(self + 0x198);
          *(long *)(self + 0x1a0) = lVar2;
          *(uint32_t *)(lVar2 + 0x30) = *(uint32_t *)(lVar1 + 0x30);
          *(uint32_t *)(lVar2 + 0x34) = *(uint32_t *)(lVar1 + 0x34);
          *(uint32_t *)(lVar2 + 0x38) = *(uint32_t *)(lVar1 + 0x38);
          *(uint32_t *)(lVar2 + 0x3c) = *(uint32_t *)(lVar1 + 0x3c);
          Vector2__operator_assign((Vector2 *)(*(long *)(self + 0x1a0) + 0x40),
                                   (Vector2 *)(*(long *)(self + 400) + 0x40));
          Vector2__operator_assign((Vector2 *)(*(long *)(self + 0x1a0) + 0x48),
                                   (Vector2 *)(*(long *)(self + 400) + 0x48));
        } else {
          lVar1 = *(long *)(self + 0x198);
          *(long *)(self + 0x1a0) = lVar2;
          *(uint32_t *)(lVar2 + 0x30) = *(uint32_t *)(lVar1 + 0x30);
          *(uint32_t *)(lVar2 + 0x34) = *(uint32_t *)(lVar1 + 0x34);
          *(uint32_t *)(lVar2 + 0x38) = *(uint32_t *)(lVar1 + 0x38);
          *(uint32_t *)(lVar2 + 0x3c) = *(uint32_t *)(lVar1 + 0x3c);
          Vector2__operator_assign((Vector2 *)(*(long *)(self + 0x1a0) + 0x40),
                                   (Vector2 *)(*(long *)(self + 0x198) + 0x40));
          Vector2__operator_assign((Vector2 *)(*(long *)(self + 0x1a0) + 0x48),
                                   (Vector2 *)(*(long *)(self + 0x198) + 0x48));
        }
        FlashLibraryInstance__Reset(*(FlashLibraryInstance **)(self + 0x1a0));
        SMBCamera__ScreenShake(*(SMBCamera **)(SuperMeatBoy + 0x38), DAT_005be894 /* R:1.0f */,
                               DAT_005bfba0 /* R:0.20000000298023224f */);
        return;
      }
    } else if (*(int *)(self + 0x1d4) == 3) {
      *(uint32_t *)(*(long *)(self + 0x188) + 0x30) = *(uint32_t *)(self + 0x1bc);
      *(uint32_t *)(*(long *)(self + 0x188) + 0x34) = *(uint32_t *)(self + 0x1c0);
      Vector2__operator_assign((Vector2 *)(*(long *)(self + 0x188) + 0x40),
                               (Vector2 *)(self + 0x1c4));
      /* WARNING: Could not recover jumptable at 0x0046a446. Too many branches */
      /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(self + 0x188) + 0x10))();
      return;
    }
  }
  return;
}

/* ======================================================================
 * ForestBoss__Update  (Ghidra `Update` @ 0046a5a0)
 * Signature: uint8_t __thiscall Update(ForestBoss * self)
 * Class: ForestBoss
 * Calls: `FlashLibraryInstance__IsPlaying`, `GSuperMeatBoy__getChar`, `SMBAnimal__GetAnimalAIState`, `SMBAnimal__SetAIState`, `SMBAnimal__SetState`, `SMBAnimal__SetWayPoint`, `SMBAnimals__GetAnimal`, `SMBAnimals__GetNumAnimals`, `SMBCamera__ScreenShake`, `SMBChapter__PlayBossOutro` (+3 more)
 * Called by: (none)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ForestBoss__Update() */

void __thiscall ForestBoss__Update(ForestBoss *self)

{
  float fVar1;
  float fVar2;
  ForestBoss FVar3;
  int iVar4;
  long lVar5;
  SMBAnimal *pSVar6;
  int iVar7;
  ForestBoss *pFVar8;
  int iVar9;
  Vector2 local_48[16];
  uint32_t local_38;
  uint32_t local_34;

  if (((byte)self[0x1d0] & 1) == 0) {
    if (*(int *)(self + 0x1d4) == 3) {
      iVar4 = FlashLibraryInstance__IsPlaying(*(FlashLibraryInstance **)(self + 0x188));
      if ((iVar4 == 0) && (self[0x1d0] = (ForestBoss)((byte)self[0x1d0] | 1),
                           *(int *)(SuperMeatBoy + 0x3a4) == 0)) {
        SMBChapter__PlayBossOutro((SMBChapter *)(SuperMeatBoy + 0x90), SMBForestBossOutroFinished,
                                  0);
      }
    } else {
      if ((*(int *)(self + 0x1d4) == 0) &&
          (lVar5 = GSuperMeatBoy__getChar(SuperMeatBoy, 1), *(int *)(lVar5 + 0x7d4) != 0x10)) {
        local_38 = 0x43480000;
        local_34 = 0;
        Vector2__operator_mul__005be200(local_48, fOneFrameTimeStep);
        Vector2__operator_plus_assign((Vector2 *)(self + 0x1bc), local_48);
        *(uint32_t *)(*(long *)(self + 0x1a0) + 0x30) = *(uint32_t *)(self + 0x1bc);
        *(uint32_t *)(*(long *)(self + 0x1a0) + 0x34) = *(uint32_t *)(self + 0x1c0);
      }
      lVar5 = GSuperMeatBoy__getChar(SuperMeatBoy, 1);
      fVar1 = *(float *)(lVar5 + 0xa0);
      FVar3 = self[0x1d0];
      fVar2 = *(float *)(self + 0x48);
      if (fVar2 < fVar1) {
        FVar3 = (ForestBoss)((byte)FVar3 | 2);
        self[0x1d0] = FVar3;
      }
      if ((((byte)FVar3 & 2) != 0) &&
          (fVar2 < *(float *)(self + 0x1bc) || fVar2 == *(float *)(self + 0x1bc))) {
        (**(code **)(*(long *)self + 0x20))(self);
      }
      iVar9 = 3;
      iVar4 = SMBAnimals__GetNumAnimals(*(SMBAnimals **)(GSuperMeatBoy__pLevelPalette + 0x41e8));
      pFVar8 = self;
      do {
        if ((*(int *)(pFVar8 + 0x78) != 0) &&
            (*(float *)(pFVar8 + 0x68) <= fVar1 && fVar1 != *(float *)(pFVar8 + 0x68))) {
          if (0 < iVar4) {
            iVar7 = 0;
            do {
              pSVar6 = (SMBAnimal *)SMBAnimals__GetAnimal(
                  *(SMBAnimals **)(GSuperMeatBoy__pLevelPalette + 0x41e8), iVar7);
              fVar2 = *(float *)(pSVar6 + 0xa0);
              if ((*(float *)(pFVar8 + 0x68) <= fVar2 && fVar2 != *(float *)(pFVar8 + 0x68)) &&
                  (fVar2 < DAT_005bfba4 /* R:999999.0f */)) {
                SMBAnimal__SetState(pSVar6);
                SMBAnimal__SetWayPoint(pSVar6, 0, (Vector2 *)(pSVar6 + 0xa0));
              }
              iVar7 = iVar7 + 1;
            } while (iVar7 != iVar4);
          }
          *(uint32_t *)(pFVar8 + 0x78) = 0;
        }
        pFVar8 = pFVar8 + 0x20;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      if (0 < iVar4) {
        iVar9 = 0;
        do {
          while (true) {
            pSVar6 = (SMBAnimal *)SMBAnimals__GetAnimal(
                *(SMBAnimals **)(GSuperMeatBoy__pLevelPalette + 0x41e8), iVar9);
            iVar7 = SMBAnimal__GetAnimalAIState(pSVar6);
            if ((iVar7 == 5) &&
                (iVar7 = (**(code **)(*(long *)self + 0x28))(self, *(uint64_t *)(pSVar6 + 0x48)),
                 iVar7 == 1))
              break;
            iVar9 = iVar9 + 1;
            if (iVar9 == iVar4) {
              return;
            }
          }
          iVar9 = iVar9 + 1;
          SMBAnimal__SetState(pSVar6, 5);
          SMBAnimal__SetAIState(pSVar6, 3);
          SMBCamera__ScreenShake(*(SMBCamera **)(SuperMeatBoy + 0x38), DAT_005be894 /* R:1.0f */,
                                 _DAT_005bfba8 /* R:0.10000000149011612f */);
          *(uint *)(self + 0x1d0) = *(uint *)(self + 0x1d0) & 0xfffe0003 | 0xf0;
        } while (iVar9 != iVar4);
      }
    }
  }
  return;
}

/* ======================================================================
 * ForestBoss__ForestBoss__0046a890  (Ghidra `ForestBoss` @ 0046a890)
 * Signature: uint8_t __thiscall ForestBoss(ForestBoss * self)
 * Class: ForestBoss
 * Calls: `FlashAnimationLibrary__FlashAnimationLibrary__00576680`, `FlashAnimationLibrary__GetClipIndex`, `FlashAnimationLibrary__GetMovieClip__005731d0`, `FormatResourcePath`, `SMBBoss__SMBBoss__0048d980`, `SMBChapter__ThreadLoadBossOutro`, `operator_new`
 * Called by: `CreateSMBBoss`
 */
/* WARNING: Removing unreachable block (ram,0x0046aa7f) */
/* ForestBoss__ForestBoss__0046a890() */

void __thiscall ForestBoss__ForestBoss__0046a890(ForestBoss *self)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  uint32_t uVar4;
  char *pcVar5;
  FlashAnimationLibrary *this_00;
  uint64_t uVar6;
  uint8_t *local_28[2];

  SMBBoss__SMBBoss__0048d980((SMBBoss *)self);
  self[0x1d0] = (ForestBoss)((byte)self[0x1d0] & 0xfe);
  *(ushort *)(self + 0x1d2) = *(ushort *)(self + 0x1d2) & 1;
  *(uint8_t ***)self = &PTR__ForestBoss_005bfb50;
  *(uint32_t *)(self + 0x1a8) = 0;
  *(uint32_t *)(self + 0x1bc) = 0;
  *(uint32_t *)(self + 0x1c0) = 0;
  *(uint32_t *)(self + 0x1c4) = 0x3f800000;
  *(uint32_t *)(self + 0x1c8) = 0x3f800000;
  *(uint32_t *)(self + 0x1cc) = 0x3a5ed289;
  *(uint32_t *)(self + 0x1d4) = 0;
  local_28[0] = &DAT_008184c8 /* R:0.00016803004837129265f */;
  /* try { // try from 0046a90c to 0046a91d has its CatchHandler @ 0046aa7a */
  pcVar5 = (char *)FormatResourcePath("/Bosses/forestboss.am", local_28);
  this_00 = operator_new(0xb0);
  /* try { // try from 0046a927 to 0046a92b has its CatchHandler @ 0046aa54 */
  FlashAnimationLibrary__FlashAnimationLibrary__00576680(this_00, pcVar5);
  *(FlashAnimationLibrary **)(self + 0x20) = this_00;
  /* try { // try from 0046a938 to 0046aa17 has its CatchHandler @ 0046aa7a */
  uVar4 = FlashAnimationLibrary__GetClipIndex(this_00, "step1");
  *(uint32_t *)(self + 0x170) = uVar4;
  uVar4 = FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 0x20), "step2");
  *(uint32_t *)(self + 0x174) = uVar4;
  uVar4 =
      FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 0x20), "step1flash");
  *(uint32_t *)(self + 0x178) = uVar4;
  uVar4 =
      FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 0x20), "step2flash");
  *(uint32_t *)(self + 0x17c) = uVar4;
  uVar4 =
      FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 0x20), "stepbloody1");
  *(uint32_t *)(self + 0x180) = uVar4;
  uVar4 =
      FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 0x20), "stepbloody2");
  *(uint32_t *)(self + 0x184) = uVar4;
  uVar6 = FlashAnimationLibrary__GetMovieClip__005731d0(*(FlashAnimationLibrary **)(self + 0x20),
                                                        "death");
  *(uint64_t *)(self + 0x188) = uVar6;
  uVar6 = FlashAnimationLibrary__GetMovieClip__005731d0(*(FlashAnimationLibrary **)(self + 0x20),
                                                        "step1");
  *(uint64_t *)(self + 400) = uVar6;
  uVar6 = FlashAnimationLibrary__GetMovieClip__005731d0(*(FlashAnimationLibrary **)(self + 0x20),
                                                        "step2");
  self[0x1d0] = (ForestBoss)((byte)self[0x1d0] & 0xfd);
  *(uint64_t *)(self + 0x198) = uVar6;
  lVar3 = SuperMeatBoy;
  *(uint64_t *)(self + 0x1a0) = *(uint64_t *)(self + 400);
  if (*(int *)(lVar3 + 0x3a4) == 0) {
    SMBChapter__ThreadLoadBossOutro();
  }
  if ((allocator *)(local_28[0] + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage) {
    LOCK();
    piVar1 = (int *)(local_28[0] + -8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 < 1) {
      std__string_Rep_M_destroy((allocator *)(local_28[0] + -0x18));
    }
  }
  return;
}

/* ======================================================================
 * ForestBoss__Hit  (Ghidra `Hit` @ 0046aa90)
 * Signature: uint8_t __stdcall Hit(void)
 * Class: ForestBoss
 * Calls: (none)
 * Called by: (none)
 */
/* ForestBoss__Hit() */

void ForestBoss__Hit(void)

{
  return;
}
