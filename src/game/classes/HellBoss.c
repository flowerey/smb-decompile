/* src/game/classes/HellBoss.c — 22 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "HellBoss.h"

/* ======================================================================
 * HellBoss__GetPosition  (Ghidra `GetPosition` @ 0046b160)
 * Signature: uint8_t __thiscall GetPosition(HellBoss * self)
 * Class: HellBoss
 * Calls: (none)
 * Called by: (none)
 */
/* HellBoss__GetPosition() */

HellBoss *__thiscall HellBoss__GetPosition(HellBoss *self)

{
  *(uint32_t *)self = 0;
  *(uint32_t *)(self + 4) = 0;
  return self;
}

/* ======================================================================
 * HellBoss__GetCameraFocus  (Ghidra `GetCameraFocus` @ 0046b170)
 * Signature: uint8_t __thiscall GetCameraFocus(HellBoss * self, FPUVector * arg1)
 * Class: HellBoss
 * Calls: `GSuperMeatBoy__getChar`, `MeatBoyCharactor__getRenderPos`
 * Called by: (none)
 */
/* HellBoss__GetCameraFocus(FPUVector*) */

void __thiscall HellBoss__GetCameraFocus(HellBoss *self, FPUVector *arg1)

{
  uint32_t uVar1;
  MeatBoyCharactor *pMVar2;
  uint32_t *puVar3;
  long lVar4;

  pMVar2 = (MeatBoyCharactor *)GSuperMeatBoy__getChar(SuperMeatBoy, 1);
  puVar3 = (uint32_t *)MeatBoyCharactor__getRenderPos(pMVar2);
  *(uint32_t *)arg1 = *puVar3;
  pMVar2 = (MeatBoyCharactor *)GSuperMeatBoy__getChar(SuperMeatBoy, 1);
  lVar4 = MeatBoyCharactor__getRenderPos(pMVar2);
  uVar1 = *(uint32_t *)(lVar4 + 4);
  *(uint32_t *)(arg1 + 8) = 0;
  *(uint32_t *)(arg1 + 4) = uVar1;
  return;
}

/* ======================================================================
 * HellBoss__OnDeath  (Ghidra `OnDeath` @ 0046b1c0)
 * Signature: uint8_t __thiscall OnDeath(HellBoss * self)
 * Class: HellBoss
 * Calls: `FlashLibraryInstance__Reset`, `GSuperMeatBoy__getChar`, `MeatBoyCharactor__RemoveControls`, `ScreenFlashManager__SetFade`
 * Called by: (none)
 */
/* HellBoss__OnDeath() */

void __thiscall HellBoss__OnDeath(HellBoss *self)

{
  float fVar1;
  MeatBoyCharactor *this_00;

  if (*(int *)(self + 0x194) != 1) {
    this_00 = (MeatBoyCharactor *)GSuperMeatBoy__getChar(SuperMeatBoy, 1);
    MeatBoyCharactor__RemoveControls(this_00);
    fVar1 = DAT_005bff40 /* R:6.199999809265137f */;
    *(uint32_t *)(self + 0x194) = 1;
    ScreenFlashManager__SetFade((ScreenFlashManager *)&ScreenFlash, fVar1,
                                (ColorTemplate *)::cWhite);
    FlashLibraryInstance__Reset(*(FlashLibraryInstance **)(self + 0x188));
    *(uint32_t *)(self + 0x198) = 2;
  }
  return;
}

/* ======================================================================
 * HellBoss__IsCollidingWithBounds  (Ghidra `IsCollidingWithBounds` @ 0046b290)
 * Signature: uint8_t __thiscall IsCollidingWithBounds(HellBoss * self, Bounds * arg1)
 * Class: HellBoss
 * Calls: `FlashLibraryInstance__IsBoundsTouchingInstance__00574660`
 * Called by: (none)
 */
/* HellBoss__IsCollidingWithBounds(Bounds const*) */

bool __thiscall HellBoss__IsCollidingWithBounds(HellBoss *self, Bounds *arg1)

{
  int iVar1;
  HellBoss *pHVar2;
  bool bVar3;

  if (*(int *)(self + 0x198) != 0) {
    return false;
  }
  iVar1 = *(int *)(self + 0x448);
  pHVar2 = self + 0x2b0;
  if (iVar1 != 2) {
    if (iVar1 < 3) {
      pHVar2 = self + 0x228;
      if (iVar1 == 1)
        goto LAB_0046b2e0;
    } else {
      pHVar2 = self + 0x338;
      if ((iVar1 == 3) || (pHVar2 = self + 0x3c0, iVar1 == 4))
        goto LAB_0046b2e0;
    }
    pHVar2 = self + 0x1a0;
  }
LAB_0046b2e0:
  bVar3 = false;
  if ((*(FlashLibraryInstance **)(pHVar2 + ((long)*(int *)(pHVar2 + 4) + 2 +
                                            (long)*(int *)(self + 0x44c) * 5) *
                                               8) != (FlashLibraryInstance *)0x0) &&
      (iVar1 = FlashLibraryInstance__IsBoundsTouchingInstance__00574660(
           *(FlashLibraryInstance **)(pHVar2 + ((long)*(int *)(pHVar2 + 4) + 2 +
                                                (long)*(int *)(self + 0x44c) * 5) *
                                                   8),
           arg1),
       iVar1 != 0)) {
    bVar3 = *(long *)(self + 400) == 0;
  }
  return bVar3;
}

/* ======================================================================
 * HellBoss__HellBoss  (Ghidra `~HellBoss` @ 0046b350)
 * Signature: uint8_t __thiscall ~HellBoss(HellBoss * self)
 * Class: HellBoss
 * Calls: `HellBoss__HellBoss__0046b5b0`, `SMBBoss__SMBBoss__0048d920`
 * Called by: (none)
 */
/* HellBoss__HellBoss__0046b5b0() */

void __thiscall HellBoss__HellBoss__0046b5b0(HellBoss *self)

{
  int iVar1;
  HellBoss *pHVar2;
  int iVar3;
  int iVar4;

  iVar4 = 0;
  iVar1 = *(int *)(self + 0x1a0);
  *(uint8_t ***)self = &PTR__HellBoss_005bfef0;
  do {
    if (0 < iVar1) {
      iVar3 = 0;
      pHVar2 = self + (long)iVar4 * 0x28 + 0x1b0;
      do {
        if (*(long **)pHVar2 != (long *)0x0) {
          /* try { // try from 0046b393 to 0046b57e has its CatchHandler @ 0046b59a */
          (**(code **)(**(long **)pHVar2 + 8))();
        }
        *(long *)pHVar2 = 0;
        iVar1 = *(int *)(self + 0x1a0);
        iVar3 = iVar3 + 1;
        pHVar2 = pHVar2 + 8;
      } while (iVar3 < iVar1);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != 3);
  iVar1 = *(int *)(self + 0x228);
  iVar4 = 0;
  do {
    if (0 < iVar1) {
      iVar3 = 0;
      pHVar2 = self + (long)iVar4 * 0x28 + 0x238;
      do {
        if (*(long **)pHVar2 != (long *)0x0) {
          (**(code **)(**(long **)pHVar2 + 8))();
        }
        *(long *)pHVar2 = 0;
        iVar1 = *(int *)(self + 0x228);
        iVar3 = iVar3 + 1;
        pHVar2 = pHVar2 + 8;
      } while (iVar3 < iVar1);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != 3);
  iVar1 = *(int *)(self + 0x2b0);
  iVar4 = 0;
  do {
    if (0 < iVar1) {
      iVar3 = 0;
      pHVar2 = self + (long)iVar4 * 0x28 + 0x2c0;
      do {
        if (*(long **)pHVar2 != (long *)0x0) {
          (**(code **)(**(long **)pHVar2 + 8))();
        }
        *(long *)pHVar2 = 0;
        iVar1 = *(int *)(self + 0x2b0);
        iVar3 = iVar3 + 1;
        pHVar2 = pHVar2 + 8;
      } while (iVar3 < iVar1);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != 3);
  iVar1 = *(int *)(self + 0x3c0);
  iVar4 = 0;
  do {
    if (0 < iVar1) {
      iVar3 = 0;
      pHVar2 = self + (long)iVar4 * 0x28 + 0x3d0;
      do {
        if (*(long **)pHVar2 != (long *)0x0) {
          (**(code **)(**(long **)pHVar2 + 8))();
        }
        *(long *)pHVar2 = 0;
        iVar1 = *(int *)(self + 0x3c0);
        iVar3 = iVar3 + 1;
        pHVar2 = pHVar2 + 8;
      } while (iVar3 < iVar1);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != 3);
  iVar1 = *(int *)(self + 0x338);
  iVar4 = 0;
  do {
    if (0 < iVar1) {
      iVar3 = 0;
      pHVar2 = self + (long)iVar4 * 0x28 + 0x348;
      do {
        if (*(long **)pHVar2 != (long *)0x0) {
          (**(code **)(**(long **)pHVar2 + 8))();
        }
        *(long *)pHVar2 = 0;
        iVar1 = *(int *)(self + 0x338);
        iVar3 = iVar3 + 1;
        pHVar2 = pHVar2 + 8;
      } while (iVar3 < iVar1);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != 3);
  if (*(long **)(self + 0x170) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x170) + 8))();
  }
  *(uint64_t *)(self + 0x170) = 0;
  if (*(long **)(self + 0x178) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x178) + 8))();
  }
  *(uint64_t *)(self + 0x178) = 0;
  if (*(long **)(self + 0x180) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x180) + 8))();
  }
  *(uint64_t *)(self + 0x180) = 0;
  if (*(long **)(self + 0x188) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x188) + 8))();
  }
  *(uint64_t *)(self + 0x188) = 0;
  SMBBoss__SMBBoss__0048d920((SMBBoss *)self);
  return;
}

/* ======================================================================
 * HellBoss__HellBoss__0046b5b0  (Ghidra `~HellBoss` @ 0046b5b0)
 * Signature: uint8_t __thiscall ~HellBoss(HellBoss * self)
 * Class: HellBoss
 * Calls: `operator_delete`
 * Called by: `HellBoss__HellBoss`
 */
/* HellBoss__HellBoss__0046b5b0() */

void __thiscall HellBoss__HellBoss__0046b5b0(HellBoss *self)

{
  HellBoss__dtor(self);
  operator_delete(self);
  return;
}

/* ======================================================================
 * HellBoss__Reset  (Ghidra `Reset` @ 0046b5d0)
 * Signature: uint8_t __thiscall Reset(HellBoss * self)
 * Class: HellBoss
 * Calls: `FlashLibraryInstance__Reset`, `GSuperMeatBoy__getChar`, `MeatBoyCharactor__RestoreControls`, `SMBAnimals__RemoveAnimals`, `SMBBoss__Reset`
 * Called by: (none)
 */
/* HellBoss__Reset() */

void __thiscall HellBoss__Reset(HellBoss *self)

{
  int iVar1;
  MeatBoyCharactor *this_00;
  int iVar2;
  HellBoss *pHVar3;
  int iVar4;

  iVar4 = 0;
  iVar1 = *(int *)(self + 0x1a0);
  *(uint32_t *)(self + 400) = 0;
  *(uint32_t *)(self + 0x194) = 0;
  *(uint32_t *)(self + 0x1a4) = 0;
  do {
    if (0 < iVar1) {
      iVar2 = 0;
      pHVar3 = self + (long)iVar4 * 0x28 + 0x1b0;
      do {
        if (*(FlashLibraryInstance **)pHVar3 != (FlashLibraryInstance *)0x0) {
          FlashLibraryInstance__Reset(*(FlashLibraryInstance **)pHVar3);
          iVar1 = *(int *)(self + 0x1a0);
        }
        iVar2 = iVar2 + 1;
        pHVar3 = pHVar3 + 8;
      } while (iVar2 < iVar1);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != 3);
  iVar1 = *(int *)(self + 0x338);
  *(uint32_t *)(self + 0x33c) = 0;
  iVar4 = 0;
  do {
    if (0 < iVar1) {
      iVar2 = 0;
      pHVar3 = self + (long)iVar4 * 0x28 + 0x348;
      do {
        if (*(FlashLibraryInstance **)pHVar3 != (FlashLibraryInstance *)0x0) {
          FlashLibraryInstance__Reset(*(FlashLibraryInstance **)pHVar3);
          iVar1 = *(int *)(self + 0x338);
        }
        iVar2 = iVar2 + 1;
        pHVar3 = pHVar3 + 8;
      } while (iVar2 < iVar1);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != 3);
  iVar1 = *(int *)(self + 0x3c0);
  *(uint32_t *)(self + 0x3c4) = 0;
  iVar4 = 0;
  do {
    if (0 < iVar1) {
      iVar2 = 0;
      pHVar3 = self + (long)iVar4 * 0x28 + 0x3d0;
      do {
        if (*(FlashLibraryInstance **)pHVar3 != (FlashLibraryInstance *)0x0) {
          FlashLibraryInstance__Reset(*(FlashLibraryInstance **)pHVar3);
          iVar1 = *(int *)(self + 0x3c0);
        }
        iVar2 = iVar2 + 1;
        pHVar3 = pHVar3 + 8;
      } while (iVar2 < iVar1);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != 3);
  iVar1 = *(int *)(self + 0x228);
  *(uint32_t *)(self + 0x22c) = 0;
  iVar4 = 0;
  do {
    if (0 < iVar1) {
      iVar2 = 0;
      pHVar3 = self + (long)iVar4 * 0x28 + 0x238;
      do {
        if (*(FlashLibraryInstance **)pHVar3 != (FlashLibraryInstance *)0x0) {
          FlashLibraryInstance__Reset(*(FlashLibraryInstance **)pHVar3);
          iVar1 = *(int *)(self + 0x228);
        }
        iVar2 = iVar2 + 1;
        pHVar3 = pHVar3 + 8;
      } while (iVar2 < iVar1);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != 3);
  iVar1 = *(int *)(self + 0x2b0);
  *(uint32_t *)(self + 0x2b4) = 0;
  iVar4 = 0;
  do {
    if (0 < iVar1) {
      iVar2 = 0;
      pHVar3 = self + (long)iVar4 * 0x28 + 0x2c0;
      do {
        if (*(FlashLibraryInstance **)pHVar3 != (FlashLibraryInstance *)0x0) {
          FlashLibraryInstance__Reset(*(FlashLibraryInstance **)pHVar3);
          iVar1 = *(int *)(self + 0x2b0);
        }
        iVar2 = iVar2 + 1;
        pHVar3 = pHVar3 + 8;
      } while (iVar2 < iVar1);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != 3);
  *(uint32_t *)(self + 0x198) = 1;
  *(uint32_t *)(self + 0x490) = 0x40000000;
  *(uint32_t *)(self + 0x44c) = 0;
  FlashLibraryInstance__Reset(*(FlashLibraryInstance **)(self + 0x170));
  FlashLibraryInstance__Reset(*(FlashLibraryInstance **)(self + 0x178));
  FlashLibraryInstance__Reset(*(FlashLibraryInstance **)(self + 0x180));
  *(uint32_t *)(self + 0x450) = 1;
  *(uint32_t *)(self + 0x454) = 2;
  *(uint32_t *)(self + 0x458) = 4;
  *(uint32_t *)(self + 0x45c) = 3;
  *(uint32_t *)(self + 0x460) = 0;
  *(uint32_t *)(self + 0x464) = 1;
  *(uint32_t *)(self + 0x468) = 4;
  *(uint32_t *)(self + 0x46c) = 3;
  *(uint32_t *)(self + 0x470) = 0;
  *(uint32_t *)(self + 0x474) = 0;
  *(uint32_t *)(self + 0x478) = 4;
  *(uint32_t *)(self + 0x48c) = 0;
  SMBBoss__Reset((SMBBoss *)self);
  this_00 = (MeatBoyCharactor *)GSuperMeatBoy__getChar(SuperMeatBoy, 1);
  MeatBoyCharactor__RestoreControls(this_00);
  SMBAnimals__RemoveAnimals(*(SMBAnimals **)(GSuperMeatBoy__pLevelPalette + 0x41e8));
  return;
}

/* ======================================================================
 * HellBoss__HellAttack_RenderAttack  (Ghidra `RenderAttack` @ 0046b940)
 * Signature: uint8_t __thiscall RenderAttack(HellAttack * self, int arg1, Vector2 * arg2)
 * Class: HellBoss
 * Calls: `FlashLibraryInstance__IsPlaying`, `FlashLibraryInstance__Reset`, `SMBCamera__ScreenShake`
 * Called by: (none)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HellBoss__HellAttack_RenderAttack(int, Vector2 const&) */

uint64_t __thiscall HellBoss__HellAttack_RenderAttack(HellAttack *self, int arg1, Vector2 *arg2)

{
  FlashLibraryInstance *this_00;
  int iVar1;
  uint64_t uVar2;

  this_00 = *(FlashLibraryInstance **)(self + ((long)*(int *)(self + 4) + 2 + (long)arg1 * 5) * 8);
  if (this_00 == (FlashLibraryInstance *)0x0) {
    *(uint32_t *)(self + 4) = 0;
    uVar2 = 0;
  } else {
    uVar2 = 1;
    *(uint32_t *)(this_00 + 0x30) = *(uint32_t *)arg2;
    *(uint32_t *)(this_00 + 0x34) = *(uint32_t *)(arg2 + 4);
    (**(code **)(*(long *)this_00 + 0x10))(this_00);
    iVar1 = FlashLibraryInstance__IsPlaying(this_00);
    if (iVar1 == 0) {
      FlashLibraryInstance__Reset(this_00);
      iVar1 = *(int *)(self + 4);
      *(int *)(self + 4) = iVar1 + 1;
      if (iVar1 + 1 == *(int *)self) {
        *(uint32_t *)(self + 4) = 0;
        uVar2 = 0;
      } else {
        SMBCamera__ScreenShake(*(SMBCamera **)(SuperMeatBoy + 0x38), _DAT_005bff44 /* R:5.0f */,
                               *(float *)(self + 8));
      }
    }
  }
  return uVar2;
}

/* ======================================================================
 * HellBoss__HellAttack_ResetAllAttacks  (Ghidra `ResetAllAttacks` @ 0046ba10)
 * Signature: uint8_t __thiscall ResetAllAttacks(HellAttack * self)
 * Class: HellBoss
 * Calls: `FlashLibraryInstance__Reset`
 * Called by: (none)
 */
/* HellBoss__HellAttack_ResetAllAttacks() */

void __thiscall HellBoss__HellAttack_ResetAllAttacks(HellAttack *self)

{
  int iVar1;
  int iVar2;
  HellAttack *pHVar3;
  int iVar4;

  iVar4 = 0;
  iVar1 = *(int *)self;
  *(uint32_t *)(self + 4) = 0;
  do {
    if (0 < iVar1) {
      iVar2 = 0;
      pHVar3 = self + (long)iVar4 * 0x28 + 0x10;
      do {
        if (*(FlashLibraryInstance **)pHVar3 != (FlashLibraryInstance *)0x0) {
          FlashLibraryInstance__Reset(*(FlashLibraryInstance **)pHVar3);
          iVar1 = *(int *)self;
        }
        iVar2 = iVar2 + 1;
        pHVar3 = pHVar3 + 8;
      } while (iVar2 < iVar1);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != 3);
  return;
}

/* ======================================================================
 * HellBoss__HellAttack_IsTouchingAttack  (Ghidra `IsTouchingAttack` @ 0046ba80)
 * Signature: uint8_t __thiscall IsTouchingAttack(HellAttack * self, int arg1, Bounds * arg2)
 * Class: HellBoss
 * Calls: `FlashLibraryInstance__IsBoundsTouchingInstance__00574660`
 * Called by: (none)
 */
/* HellBoss__HellAttack_IsTouchingAttack(int, Bounds const*) */

uint64_t __thiscall HellBoss__HellAttack_IsTouchingAttack(HellAttack *self, int arg1, Bounds *arg2)

{
  uint64_t uVar1;

  if (*(FlashLibraryInstance **)(self + ((long)*(int *)(self + 4) + 2 + (long)arg1 * 5) * 8) !=
      (FlashLibraryInstance *)0x0) {
    uVar1 = FlashLibraryInstance__IsBoundsTouchingInstance__00574660(
        *(FlashLibraryInstance **)(self + ((long)*(int *)(self + 4) + 2 + (long)arg1 * 5) * 8),
        arg2);
    return uVar1;
  }
  return 0;
}

/* ======================================================================
 * HellBoss__HellBoss__0046bab0  (Ghidra `HellBoss` @ 0046bab0)
 * Signature: uint8_t __thiscall HellBoss(HellBoss * self)
 * Class: HellBoss
 * Calls: `FlashAnimationLibrary__FlashAnimationLibrary__00576680`, `FlashAnimationLibrary__GetMovieClip__005731d0`, `FormatResourcePath`, `SMBBoss__SMBBoss__0048d980`, `SMBChapter__ThreadLoadBossOutro`, `Sprint`, `operator_new`
 * Called by: `CreateSMBBoss`
 */
/* WARNING: Removing unreachable block (ram,0x0046c4ff) */
/* HellBoss__HellBoss__0046bab0() */

void __thiscall HellBoss__HellBoss__0046bab0(HellBoss *self)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  FlashAnimationLibrary *pFVar5;
  uint64_t uVar6;
  char acStack_48[32];
  uint8_t *local_28[2];

  SMBBoss__SMBBoss__0048d980((SMBBoss *)self);
  *(uint8_t ***)self = &PTR__HellBoss_005bfef0;
  *(uint32_t *)(self + 0x1a0) = 0;
  *(uint32_t *)(self + 0x1a4) = 0;
  *(uint32_t *)(self + 0x1a8) = 0x3f800000;
  *(uint32_t *)(self + 0x228) = 0;
  *(uint32_t *)(self + 0x22c) = 0;
  *(uint32_t *)(self + 0x230) = 0x3f800000;
  *(uint32_t *)(self + 0x2b0) = 0;
  *(uint32_t *)(self + 0x2b4) = 0;
  *(uint32_t *)(self + 0x2b8) = 0x3f800000;
  *(uint32_t *)(self + 0x338) = 0;
  *(uint32_t *)(self + 0x33c) = 0;
  *(uint32_t *)(self + 0x340) = 0x3f800000;
  *(uint32_t *)(self + 0x3c0) = 0;
  *(uint32_t *)(self + 0x3c4) = 0;
  *(uint32_t *)(self + 0x3c8) = 0x3f800000;
  local_28[0] = &DAT_008184c8 /* R:0.00016803004837129265f */;
  /* try { // try from 0046bb70 to 0046bb81 has its CatchHandler @ 0046c4ae */
  pcVar4 = (char *)FormatResourcePath("/Bosses/boss4.am", local_28);
  pFVar5 = operator_new(0xb0);
  /* try { // try from 0046bb8b to 0046bb8f has its CatchHandler @ 0046c4ef */
  FlashAnimationLibrary__FlashAnimationLibrary__00576680(pFVar5, pcVar4);
  *(FlashAnimationLibrary **)(self + 0x20) = pFVar5;
  /* try { // try from 0046bb9c to 0046c41a has its CatchHandler @ 0046c4ae */
  uVar6 = FlashAnimationLibrary__GetMovieClip__005731d0(pFVar5, "idle1");
  *(uint64_t *)(self + 0x170) = uVar6;
  uVar6 = FlashAnimationLibrary__GetMovieClip__005731d0(*(FlashAnimationLibrary **)(self + 0x20),
                                                        "idle2");
  *(uint64_t *)(self + 0x178) = uVar6;
  uVar6 = FlashAnimationLibrary__GetMovieClip__005731d0(*(FlashAnimationLibrary **)(self + 0x20),
                                                        "idle3");
  *(uint64_t *)(self + 0x180) = uVar6;
  *(uint32_t *)(self + 0x1a4) = 0;
  *(uint32_t *)(self + 0x1a0) = 5;
  pFVar5 = *(FlashAnimationLibrary **)(self + 0x20);
  Sprint("%s%iv%i", acStack_48, "attack1", 1, 1);
  uVar6 = FlashAnimationLibrary__GetMovieClip__005731d0(pFVar5, acStack_48);
  *(uint64_t *)(self + 0x1b0) = uVar6;
  Sprint("%s%iv%i", acStack_48, "attack1", 2, 1);
  uVar6 = FlashAnimationLibrary__GetMovieClip__005731d0(pFVar5, acStack_48);
  *(uint64_t *)(self + 0x1b8) = uVar6;
  Sprint("%s%iv%i", acStack_48, "attack1", 3, 1);
  uVar6 = FlashAnimationLibrary__GetMovieClip__005731d0(pFVar5, acStack_48);
  *(uint64_t *)(self + 0x1c0) = uVar6;
  Sprint("%s%iv%i", acStack_48, "attack1", 4, 1);
  uVar6 = FlashAnimationLibrary__GetMovieClip__005731d0(pFVar5, acStack_48);
  *(uint64_t *)(self + 0x1c8) = uVar6;
  Sprint("%s%iv%i", acStack_48, "attack1", 5, 1);
  uVar6 = FlashAnimationLibrary__GetMovieClip__005731d0(pFVar5, acStack_48);
  *(uint64_t *)(self + 0x1d0) = uVar6;
  Sprint("%s%iv%i", acStack_48, "attack1", 1, 2);
  uVar6 = FlashAnimationLibrary__GetMovieClip__005731d0(pFVar5, acStack_48);
  *(uint64_t *)(self + 0x1d8) = uVar6;
  Sprint("%s%iv%i", acStack_48, "attack1", 2, 2);
  uVar6 = FlashAnimationLibrary__GetMovieClip__005731d0(pFVar5, acStack_48);
  *(uint64_t *)(self + 0x1e0) = uVar6;
  Sprint("%s%iv%i", acStack_48, "attack1", 3, 2);
  uVar6 = FlashAnimationLibrary__GetMovieClip__005731d0(pFVar5, acStack_48);
  *(uint64_t *)(self + 0x1e8) = uVar6;
  Sprint("%s%iv%i", acStack_48, "attack1", 4, 2);
  uVar6 = FlashAnimationLibrary__GetMovieClip__005731d0(pFVar5, acStack_48);
  *(uint64_t *)(self + 0x1f0) = uVar6;
  Sprint("%s%iv%i", acStack_48, "attack1", 5, 2);
  uVar6 = FlashAnimationLibrary__GetMovieClip__005731d0(pFVar5, acStack_48);
  *(uint64_t *)(self + 0x1f8) = uVar6;
  Sprint("%s%iv%i", acStack_48, "attack1", 1, 3);
  uVar6 = FlashAnimationLibrary__GetMovieClip__005731d0(pFVar5, acStack_48);
  *(uint64_t *)(self + 0x200) = uVar6;
  Sprint("%s%iv%i", acStack_48, "attack1", 2, 3);
  uVar6 = FlashAnimationLibrary__GetMovieClip__005731d0(pFVar5, acStack_48);
  *(uint64_t *)(self + 0x208) = uVar6;
  Sprint("%s%iv%i", acStack_48, "attack1", 3, 3);
  uVar6 = FlashAnimationLibrary__GetMovieClip__005731d0(pFVar5, acStack_48);
  *(uint64_t *)(self + 0x210) = uVar6;
  Sprint("%s%iv%i", acStack_48, "attack1", 4, 3);
  uVar6 = FlashAnimationLibrary__GetMovieClip__005731d0(pFVar5, acStack_48);
  *(uint64_t *)(self + 0x218) = uVar6;
  Sprint("%s%iv%i", acStack_48, "attack1", 5, 3);
  uVar6 = FlashAnimationLibrary__GetMovieClip__005731d0(pFVar5, acStack_48);
  *(uint64_t *)(self + 0x220) = uVar6;
  *(uint32_t *)(self + 0x22c) = 0;
  *(uint32_t *)(self + 0x228) = 2;
  pFVar5 = *(FlashAnimationLibrary **)(self + 0x20);
  Sprint("%s%iv%i", acStack_48, "attack2", 1, 1);
  uVar6 = FlashAnimationLibrary__GetMovieClip__005731d0(pFVar5, acStack_48);
  *(uint64_t *)(self + 0x238) = uVar6;
  Sprint("%s%iv%i", acStack_48, "attack2", 2, 1);
  uVar6 = FlashAnimationLibrary__GetMovieClip__005731d0(pFVar5, acStack_48);
  *(uint64_t *)(self + 0x240) = uVar6;
  Sprint("%s%iv%i", acStack_48, "attack2", 1, 2);
  uVar6 = FlashAnimationLibrary__GetMovieClip__005731d0(pFVar5, acStack_48);
  *(uint64_t *)(self + 0x260) = uVar6;
  Sprint("%s%iv%i", acStack_48, "attack2", 2, 2);
  uVar6 = FlashAnimationLibrary__GetMovieClip__005731d0(pFVar5, acStack_48);
  *(uint64_t *)(self + 0x268) = uVar6;
  Sprint("%s%iv%i", acStack_48, "attack2", 1, 3);
  uVar6 = FlashAnimationLibrary__GetMovieClip__005731d0(pFVar5, acStack_48);
  *(uint64_t *)(self + 0x288) = uVar6;
  Sprint("%s%iv%i", acStack_48, "attack2", 2, 3);
  uVar6 = FlashAnimationLibrary__GetMovieClip__005731d0(pFVar5, acStack_48);
  *(uint64_t *)(self + 0x290) = uVar6;
  *(uint32_t *)(self + 0x2b4) = 0;
  *(uint32_t *)(self + 0x2b0) = 2;
  pFVar5 = *(FlashAnimationLibrary **)(self + 0x20);
  Sprint("%s%iv%i", acStack_48, "attack3", 1, 1);
  uVar6 = FlashAnimationLibrary__GetMovieClip__005731d0(pFVar5, acStack_48);
  *(uint64_t *)(self + 0x2c0) = uVar6;
  Sprint("%s%iv%i", acStack_48, "attack3", 2, 1);
  uVar6 = FlashAnimationLibrary__GetMovieClip__005731d0(pFVar5, acStack_48);
  *(uint64_t *)(self + 0x2c8) = uVar6;
  Sprint("%s%iv%i", acStack_48, "attack3", 1, 2);
  uVar6 = FlashAnimationLibrary__GetMovieClip__005731d0(pFVar5, acStack_48);
  *(uint64_t *)(self + 0x2e8) = uVar6;
  Sprint("%s%iv%i", acStack_48, "attack3", 2, 2);
  uVar6 = FlashAnimationLibrary__GetMovieClip__005731d0(pFVar5, acStack_48);
  *(uint64_t *)(self + 0x2f0) = uVar6;
  Sprint("%s%iv%i", acStack_48, "attack3", 1, 3);
  uVar6 = FlashAnimationLibrary__GetMovieClip__005731d0(pFVar5, acStack_48);
  *(uint64_t *)(self + 0x310) = uVar6;
  Sprint("%s%iv%i", acStack_48, "attack3", 2, 3);
  uVar6 = FlashAnimationLibrary__GetMovieClip__005731d0(pFVar5, acStack_48);
  *(uint64_t *)(self + 0x318) = uVar6;
  *(uint32_t *)(self + 0x33c) = 0;
  *(uint32_t *)(self + 0x338) = 2;
  pFVar5 = *(FlashAnimationLibrary **)(self + 0x20);
  Sprint("%s%iv%i", acStack_48, "attack4", 1, 1);
  uVar6 = FlashAnimationLibrary__GetMovieClip__005731d0(pFVar5, acStack_48);
  *(uint64_t *)(self + 0x348) = uVar6;
  Sprint("%s%iv%i", acStack_48, "attack4", 2, 1);
  uVar6 = FlashAnimationLibrary__GetMovieClip__005731d0(pFVar5, acStack_48);
  *(uint64_t *)(self + 0x350) = uVar6;
  Sprint("%s%iv%i", acStack_48, "attack4", 1, 2);
  uVar6 = FlashAnimationLibrary__GetMovieClip__005731d0(pFVar5, acStack_48);
  *(uint64_t *)(self + 0x370) = uVar6;
  Sprint("%s%iv%i", acStack_48, "attack4", 2, 2);
  uVar6 = FlashAnimationLibrary__GetMovieClip__005731d0(pFVar5, acStack_48);
  *(uint64_t *)(self + 0x378) = uVar6;
  Sprint("%s%iv%i", acStack_48, "attack4", 1, 3);
  uVar6 = FlashAnimationLibrary__GetMovieClip__005731d0(pFVar5, acStack_48);
  *(uint64_t *)(self + 0x398) = uVar6;
  Sprint("%s%iv%i", acStack_48, "attack4", 2, 3);
  uVar6 = FlashAnimationLibrary__GetMovieClip__005731d0(pFVar5, acStack_48);
  *(uint64_t *)(self + 0x3a0) = uVar6;
  *(uint32_t *)(self + 0x340) = 0x40c00000;
  *(uint32_t *)(self + 0x3c4) = 0;
  *(uint32_t *)(self + 0x3c0) = 2;
  pFVar5 = *(FlashAnimationLibrary **)(self + 0x20);
  Sprint("%s%iv%i", acStack_48, "attack5", 1, 1);
  uVar6 = FlashAnimationLibrary__GetMovieClip__005731d0(pFVar5, acStack_48);
  *(uint64_t *)(self + 0x3d0) = uVar6;
  Sprint("%s%iv%i", acStack_48, "attack5", 2, 1);
  uVar6 = FlashAnimationLibrary__GetMovieClip__005731d0(pFVar5, acStack_48);
  *(uint64_t *)(self + 0x3d8) = uVar6;
  Sprint("%s%iv%i", acStack_48, "attack5", 1, 2);
  uVar6 = FlashAnimationLibrary__GetMovieClip__005731d0(pFVar5, acStack_48);
  *(uint64_t *)(self + 0x3f8) = uVar6;
  Sprint("%s%iv%i", acStack_48, "attack5", 2, 2);
  uVar6 = FlashAnimationLibrary__GetMovieClip__005731d0(pFVar5, acStack_48);
  *(uint64_t *)(self + 0x400) = uVar6;
  Sprint("%s%iv%i", acStack_48, "attack5", 1, 3);
  uVar6 = FlashAnimationLibrary__GetMovieClip__005731d0(pFVar5, acStack_48);
  *(uint64_t *)(self + 0x420) = uVar6;
  Sprint("%s%iv%i", acStack_48, "attack5", 2, 3);
  uVar6 = FlashAnimationLibrary__GetMovieClip__005731d0(pFVar5, acStack_48);
  lVar3 = SuperMeatBoy;
  *(uint64_t *)(self + 0x188) = uVar6;
  *(uint64_t *)(self + 0x428) = 0;
  *(uint32_t *)(self + 0x16c) = 4;
  *(uint32_t *)(self + 0x198) = 1;
  *(uint32_t *)(self + 0x490) = 0x40000000;
  *(uint32_t *)(self + 0x194) = 0;
  if (*(int *)(lVar3 + 0x3a4) == 0) {
    SMBChapter__ThreadLoadBossOutro();
  }
  *(uint32_t *)(self + 0x450) = 1;
  *(uint32_t *)(self + 0x454) = 2;
  *(uint32_t *)(self + 0x458) = 4;
  *(uint32_t *)(self + 0x45c) = 3;
  *(uint32_t *)(self + 0x460) = 0;
  *(uint32_t *)(self + 0x464) = 1;
  *(uint32_t *)(self + 0x468) = 4;
  *(uint32_t *)(self + 0x46c) = 3;
  *(uint32_t *)(self + 0x470) = 0;
  *(uint32_t *)(self + 0x474) = 0;
  *(uint32_t *)(self + 0x478) = 4;
  *(uint32_t *)(self + 0x48c) = 0;
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
 * HellBoss__DestroyHellBossAttack  (Ghidra `DestroyHellBossAttack` @ 0046c510)
 * Signature: uint8_t __thiscall DestroyHellBossAttack(HellBoss * self, HellAttack * arg1)
 * Class: HellBoss
 * Calls: (none)
 * Called by: (none)
 */
/* HellBoss__DestroyHellBossAttack(HellBoss__HellAttack) */

void __thiscall HellBoss__DestroyHellBossAttack(HellBoss *self, HellAttack *arg1)

{
  int iVar1;
  HellAttack *pHVar2;
  int iVar3;
  int iVar4;

  iVar4 = 0;
  iVar1 = *(int *)arg1;
  do {
    if (0 < iVar1) {
      iVar3 = 0;
      pHVar2 = arg1 + (long)iVar4 * 0x28 + 0x10;
      do {
        if (*(long **)pHVar2 != (long *)0x0) {
          (**(code **)(**(long **)pHVar2 + 8))();
          iVar1 = *(int *)arg1;
        }
        iVar3 = iVar3 + 1;
        *(long *)pHVar2 = 0;
        pHVar2 = pHVar2 + 8;
      } while (iVar3 < iVar1);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != 3);
  return;
}

/* ======================================================================
 * HellBoss__SpawnMeatBoys  (Ghidra `SpawnMeatBoys` @ 0046c580)
 * Signature: uint8_t __thiscall SpawnMeatBoys(HellBoss * self)
 * Class: HellBoss
 * Calls: `GetRandomINT`, `SMBAnimals__CreateAnimal`
 * Called by: (none)
 */
/* HellBoss__SpawnMeatBoys() */

void __thiscall HellBoss__SpawnMeatBoys(HellBoss *self)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint32_t local_38;
  float local_34;
  float local_30;
  uint32_t local_2c;
  uint32_t local_28;
  uint32_t local_24;
  uint32_t local_20;

  iVar2 = GetRandomINT(*(int *)(self + 0x44c) + 2, *(int *)(self + 0x44c) + 3);
  if (0 < iVar2) {
    iVar4 = 0;
    do {
      local_34 = 0.0;
      local_30 = 0.0;
      local_2c = 0;
      local_28 = 0xc4098000;
      local_24 = 0;
      local_20 = 0;
      iVar4 = iVar4 + 1;
      local_38 = 0x13;
      iVar3 = GetRandomINT((int)*(float *)(self + 0x48), (int)*(float *)(self + 0xa8));
      local_34 = (float)iVar3;
      fVar1 = *(float *)(self + 0x4c);
      local_30 = fVar1;
      iVar3 = GetRandomINT(10, 0x1e);
      local_30 = (float)iVar3 + fVar1;
      SMBAnimals__CreateAnimal(*(SMBAnimals **)(GSuperMeatBoy__pLevelPalette + 0x41e8),
                               (SMBAnimalCreate *)&local_38);
    } while (iVar4 != iVar2);
  }
  return;
}

/* ======================================================================
 * HellBoss__DetermineNextAction  (Ghidra `DetermineNextAction` @ 0046c670)
 * Signature: uint8_t __thiscall DetermineNextAction(HellBoss * self)
 * Class: HellBoss
 * Calls: `FlashLibraryInstance__Reset`, `GetRandomINT`, `HellBoss__DetermineNextAction__0046ca80`
 * Called by: (none)
 */
/* HellBoss__DetermineNextAction__0046ca80() [clone .part.8] */

void __thiscall HellBoss__DetermineNextAction__0046ca80(HellBoss *self)

{
  uint32_t uVar1;
  int iVar2;
  int iVar3;
  HellBoss *pHVar4;
  int iVar5;

  iVar5 = 0;
  GetRandomINT(0, 100);
  uVar1 = *(uint32_t *)(self + (long)*(int *)(self + 0x48c) * 4 + 0x450);
  *(int *)(self + 0x48c) = *(int *)(self + 0x48c) + 1;
  iVar2 = *(int *)(self + 0x1a0);
  *(uint32_t *)(self + 0x1a4) = 0;
  *(uint32_t *)(self + 0x448) = uVar1;
  do {
    if (0 < iVar2) {
      iVar3 = 0;
      pHVar4 = self + (long)iVar5 * 0x28 + 0x1b0;
      do {
        if (*(FlashLibraryInstance **)pHVar4 != (FlashLibraryInstance *)0x0) {
          FlashLibraryInstance__Reset(*(FlashLibraryInstance **)pHVar4);
          iVar2 = *(int *)(self + 0x1a0);
        }
        iVar3 = iVar3 + 1;
        pHVar4 = pHVar4 + 8;
      } while (iVar3 < iVar2);
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 != 3);
  iVar2 = *(int *)(self + 0x338);
  *(uint32_t *)(self + 0x33c) = 0;
  iVar5 = 0;
  do {
    if (0 < iVar2) {
      iVar3 = 0;
      pHVar4 = self + (long)iVar5 * 0x28 + 0x348;
      do {
        if (*(FlashLibraryInstance **)pHVar4 != (FlashLibraryInstance *)0x0) {
          FlashLibraryInstance__Reset(*(FlashLibraryInstance **)pHVar4);
          iVar2 = *(int *)(self + 0x338);
        }
        iVar3 = iVar3 + 1;
        pHVar4 = pHVar4 + 8;
      } while (iVar3 < iVar2);
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 != 3);
  iVar2 = *(int *)(self + 0x3c0);
  *(uint32_t *)(self + 0x3c4) = 0;
  iVar5 = 0;
  do {
    if (0 < iVar2) {
      iVar3 = 0;
      pHVar4 = self + (long)iVar5 * 0x28 + 0x3d0;
      do {
        if (*(FlashLibraryInstance **)pHVar4 != (FlashLibraryInstance *)0x0) {
          FlashLibraryInstance__Reset(*(FlashLibraryInstance **)pHVar4);
          iVar2 = *(int *)(self + 0x3c0);
        }
        iVar3 = iVar3 + 1;
        pHVar4 = pHVar4 + 8;
      } while (iVar3 < iVar2);
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 != 3);
  iVar2 = *(int *)(self + 0x228);
  *(uint32_t *)(self + 0x22c) = 0;
  iVar5 = 0;
  do {
    if (0 < iVar2) {
      iVar3 = 0;
      pHVar4 = self + (long)iVar5 * 0x28 + 0x238;
      do {
        if (*(FlashLibraryInstance **)pHVar4 != (FlashLibraryInstance *)0x0) {
          FlashLibraryInstance__Reset(*(FlashLibraryInstance **)pHVar4);
          iVar2 = *(int *)(self + 0x228);
        }
        iVar3 = iVar3 + 1;
        pHVar4 = pHVar4 + 8;
      } while (iVar3 < iVar2);
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 != 3);
  iVar2 = *(int *)(self + 0x2b0);
  *(uint32_t *)(self + 0x2b4) = 0;
  iVar5 = 0;
  do {
    if (0 < iVar2) {
      iVar3 = 0;
      pHVar4 = self + (long)iVar5 * 0x28 + 0x2c0;
      do {
        if (*(FlashLibraryInstance **)pHVar4 != (FlashLibraryInstance *)0x0) {
          FlashLibraryInstance__Reset(*(FlashLibraryInstance **)pHVar4);
          iVar2 = *(int *)(self + 0x2b0);
        }
        iVar3 = iVar3 + 1;
        pHVar4 = pHVar4 + 8;
      } while (iVar3 < iVar2);
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 != 3);
  if (*(int *)(self + 0x448) == 3) {
    SpawnMeatBoys(self);
  }
  *(uint32_t *)(self + 0x198) = 0;
  return;
}

/* ======================================================================
 * HellBoss__Update  (Ghidra `Update` @ 0046c890)
 * Signature: uint8_t __thiscall Update(HellBoss * self)
 * Class: HellBoss
 * Calls: `FlashLibraryInstance__IsPlaying`, `SMBAnimal__SetAIState`, `SMBAnimal__SetState`, `SMBAnimals__GetAnimal`, `SMBAnimals__GetNumAnimals`, `SMBAnimals__RemoveAnimals`, `SMBChapter__PlayBossOutro`, `SMBHellBossOutroFinished`
 * Called by: (none)
 */
/* HellBoss__Update() */

void __thiscall HellBoss__Update(HellBoss *self)

{
  long lVar1;
  int iVar2;
  int iVar3;
  SMBAnimal *pSVar4;
  int iVar5;
  float fVar6;

  if (*(int *)(self + 400) != 1) {
    if (*(int *)(self + 0x198) == 2) {
      iVar2 = FlashLibraryInstance__IsPlaying(*(FlashLibraryInstance **)(self + 0x188));
      lVar1 = GSuperMeatBoy__pLevelPalette;
      if (iVar2 == 0) {
        *(uint32_t *)(self + 400) = 1;
        SMBAnimals__RemoveAnimals(*(SMBAnimals **)(lVar1 + 0x41e8));
        if (*(int *)(SuperMeatBoy + 0x3a4) == 0) {
          SMBChapter__PlayBossOutro((SMBChapter *)(SuperMeatBoy + 0x90), SMBHellBossOutroFinished,
                                    0);
          return;
        }
      }
    } else {
      fVar6 = *(float *)(self + 0x490);
      if ((*(int *)(self + 0x198) == 1) && (fVar6 <= 0.0)) {
        DetermineNextAction(self);
        fVar6 = *(float *)(self + 0x490);
      }
      lVar1 = GSuperMeatBoy__pLevelPalette;
      *(float *)(self + 0x490) = fVar6 - fOneFrameTimeStep;
      iVar2 = SMBAnimals__GetNumAnimals(*(SMBAnimals **)(lVar1 + 0x41e8));
      if (0 < iVar2) {
        iVar5 = 0;
        do {
          while (true) {
            pSVar4 = (SMBAnimal *)SMBAnimals__GetAnimal(
                *(SMBAnimals **)(GSuperMeatBoy__pLevelPalette + 0x41e8), iVar5);
            iVar3 = (**(code **)(*(long *)self + 0x28))(self, *(uint64_t *)(pSVar4 + 0x48));
            if (iVar3 != 1)
              break;
            iVar5 = iVar5 + 1;
            SMBAnimal__SetState(pSVar4, 5);
            SMBAnimal__SetAIState(pSVar4, 3);
            if (iVar5 == iVar2) {
              return;
            }
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 != iVar2);
      }
    }
  }
  return;
}

/* ======================================================================
 * HellBoss__FillAttackSequenceArray  (Ghidra `FillAttackSequenceArray` @ 0046ca00)
 * Signature: uint8_t __thiscall FillAttackSequenceArray(HellBoss * self)
 * Class: HellBoss
 * Calls: (none)
 * Called by: (none)
 */
/* HellBoss__FillAttackSequenceArray() */

void __thiscall HellBoss__FillAttackSequenceArray(HellBoss *self)

{
  *(uint32_t *)(self + 0x450) = 1;
  *(uint32_t *)(self + 0x454) = 2;
  *(uint32_t *)(self + 0x458) = 4;
  *(uint32_t *)(self + 0x45c) = 3;
  *(uint32_t *)(self + 0x460) = 0;
  *(uint32_t *)(self + 0x464) = 1;
  *(uint32_t *)(self + 0x468) = 4;
  *(uint32_t *)(self + 0x46c) = 3;
  *(uint32_t *)(self + 0x470) = 0;
  *(uint32_t *)(self + 0x474) = 0;
  *(uint32_t *)(self + 0x478) = 4;
  *(uint32_t *)(self + 0x48c) = 0;
  return;
}

/* ======================================================================
 * HellBoss__DetermineNextAction__0046ca80  (Ghidra `DetermineNextAction` @ 0046ca80)
 * Signature: uint8_t __thiscall DetermineNextAction(HellBoss * self)
 * Class: HellBoss
 * Calls: (none)
 * Called by: `HellBoss__DetermineNextAction`
 */
/* HellBoss__DetermineNextAction__0046ca80() */

void __thiscall HellBoss__DetermineNextAction__0046ca80(HellBoss *self)

{
  if (*(int *)(self + 0x198) != 1) {
    if (*(int *)(self + 0x198) == 0) {
      *(uint32_t *)(self + 0x198) = 1;
      *(uint32_t *)(self + 0x490) = 0;
    }
    return;
  }
  DetermineNextAction(self);
  return;
}

/* ======================================================================
 * HellBoss__IncrementHurtState  (Ghidra `IncrementHurtState` @ 0046cab0)
 * Signature: uint8_t __thiscall IncrementHurtState(HellBoss * self)
 * Class: HellBoss
 * Calls: (none)
 * Called by: (none)
 */
/* HellBoss__IncrementHurtState() */

void __thiscall HellBoss__IncrementHurtState(HellBoss *self)

{
  int iVar1;

  iVar1 = *(int *)(self + 0x44c);
  if (iVar1 == 0) {
    *(uint32_t *)(self + 0x44c) = 1;
    return;
  }
  if (iVar1 != 1) {
    if (iVar1 != 2) {
      return;
    }
    *(uint32_t *)(self + 0x44c) = 0;
    /* WARNING: Could not recover jumptable at 0x0046cb01. Too many branches */
    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)self + 0x20))();
    return;
  }
  *(uint32_t *)(self + 0x44c) = 2;
  return;
}

/* ======================================================================
 * HellBoss__Hit  (Ghidra `Hit` @ 0046cb10)
 * Signature: uint8_t __stdcall Hit(void)
 * Class: HellBoss
 * Calls: (none)
 * Called by: (none)
 */
/* HellBoss__Hit() */

void HellBoss__Hit(void)

{
  return;
}

/* ======================================================================
 * HellBoss__RenderAttack  (Ghidra `RenderAttack` @ 0046cb20)
 * Signature: uint8_t __thiscall RenderAttack(HellBoss * self, tagHellBossAttackType arg1)
 * Class: HellBoss
 * Calls: `FlashLibraryInstance__IsPlaying`, `FlashLibraryInstance__Reset`, `SMBCamera__ScreenShake`
 * Called by: (none)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HellBoss__RenderAttack(tagHellBossAttackType) */

void __thiscall HellBoss__RenderAttack(HellBoss *self, int arg2)

{
  FlashLibraryInstance *this_00;
  int iVar1;
  HellBoss *pHVar2;

  pHVar2 = self + 0x2b0;
  if (arg2 != 2) {
    if (arg2 < 3) {
      pHVar2 = self + 0x228;
      if (arg2 == 1)
        goto LAB_0046cb60;
    } else {
      pHVar2 = self + 0x338;
      if ((arg2 == 3) || (pHVar2 = self + 0x3c0, arg2 == 4))
        goto LAB_0046cb60;
    }
    pHVar2 = self + 0x1a0;
  }
LAB_0046cb60:
  if (pHVar2 != (HellBoss *)0x0) {
    this_00 = *(FlashLibraryInstance **)(pHVar2 + ((long)*(int *)(pHVar2 + 4) + 2 +
                                                   (long)*(int *)(self + 0x44c) * 5) *
                                                      8);
    if (this_00 != (FlashLibraryInstance *)0x0) {
      *(uint32_t *)(this_00 + 0x30) = *(uint32_t *)(self + 0x28);
      *(uint32_t *)(this_00 + 0x34) = *(uint32_t *)(self + 0x2c);
      (**(code **)(*(long *)this_00 + 0x10))(this_00);
      iVar1 = FlashLibraryInstance__IsPlaying(this_00);
      if (iVar1 != 0) {
        return;
      }
      FlashLibraryInstance__Reset(this_00);
      iVar1 = *(int *)(pHVar2 + 4);
      *(int *)(pHVar2 + 4) = iVar1 + 1;
      if (iVar1 + 1 != *(int *)pHVar2) {
        SMBCamera__ScreenShake(*(SMBCamera **)(SuperMeatBoy + 0x38), _DAT_005bff44 /* R:5.0f */,
                               *(float *)(pHVar2 + 8));
        return;
      }
    }
    *(int *)(pHVar2 + 4) = 0;
    if (*(int *)(self + 0x448) == 4) {
      iVar1 = *(int *)(self + 0x44c);
      if (iVar1 == 0) {
        *(uint32_t *)(self + 0x44c) = 1;
      } else if (iVar1 == 1) {
        *(uint32_t *)(self + 0x44c) = 2;
      } else if (iVar1 == 2) {
        *(uint32_t *)(self + 0x44c) = 0;
        (**(code **)(*(long *)self + 0x20))(self);
      }
    }
    if (*(int *)(self + 0x198) == 1) {
      DetermineNextAction(self);
      return;
    }
    if (*(int *)(self + 0x198) == 0) {
      *(uint32_t *)(self + 0x198) = 1;
      *(uint32_t *)(self + 0x490) = 0;
    }
  }
  return;
}

/* ======================================================================
 * HellBoss__Render  (Ghidra `Render` @ 0046ccd0)
 * Signature: uint8_t __thiscall Render(HellBoss * self)
 * Class: HellBoss
 * Calls: `RegisterAudioPosition`, `TAudio__DisableDirectionalAudio`, `TAudio__EnableDirectionalAudio`
 * Called by: (none)
 */
/* HellBoss__Render() */

void __thiscall HellBoss__Render(HellBoss *self)

{
  int iVar1;

  if (*(int *)(self + 400) != 1) {
    RegisterAudioPosition((FPUVector *)0xffffffff);
    TAudio__DisableDirectionalAudio(Audio);
    iVar1 = *(int *)(self + 0x198);
    if (iVar1 == 1) {
      *(uint32_t *)(*(long *)(self + (long)*(int *)(self + 0x44c) * 8 + 0x170) + 0x30) =
          *(uint32_t *)(self + 0x28);
      *(uint32_t *)(*(long *)(self + (long)*(int *)(self + 0x44c) * 8 + 0x170) + 0x34) =
          *(uint32_t *)(self + 0x2c);
      (**(code **)(**(long **)(self + (long)*(int *)(self + 0x44c) * 8 + 0x170) + 0x10))();
    } else if (iVar1 == 0) {
      RenderAttack(self, *(uint32_t *)(self + 0x448));
    } else if (iVar1 == 2) {
      (**(code **)(**(long **)(self + 0x188) + 0x10))();
    }
    RegisterAudioPosition((FPUVector *)0x0);
    TAudio__EnableDirectionalAudio(Audio);
    return;
  }
  return;
}

/* ======================================================================
 * HellBoss__ResetAttacks  (Ghidra `ResetAttacks` @ 0046cda0)
 * Signature: uint8_t __thiscall ResetAttacks(HellBoss * self)
 * Class: HellBoss
 * Calls: `FlashLibraryInstance__Reset`
 * Called by: (none)
 */
/* HellBoss__ResetAttacks() */

void __thiscall HellBoss__ResetAttacks(HellBoss *self)

{
  int iVar1;
  int iVar2;
  HellBoss *pHVar3;
  int iVar4;

  iVar4 = 0;
  iVar1 = *(int *)(self + 0x1a0);
  *(uint32_t *)(self + 0x1a4) = 0;
  do {
    if (0 < iVar1) {
      iVar2 = 0;
      pHVar3 = self + (long)iVar4 * 0x28 + 0x1b0;
      do {
        if (*(FlashLibraryInstance **)pHVar3 != (FlashLibraryInstance *)0x0) {
          FlashLibraryInstance__Reset(*(FlashLibraryInstance **)pHVar3);
          iVar1 = *(int *)(self + 0x1a0);
        }
        iVar2 = iVar2 + 1;
        pHVar3 = pHVar3 + 8;
      } while (iVar2 < iVar1);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != 3);
  iVar1 = *(int *)(self + 0x338);
  *(uint32_t *)(self + 0x33c) = 0;
  iVar4 = 0;
  do {
    if (0 < iVar1) {
      iVar2 = 0;
      pHVar3 = self + (long)iVar4 * 0x28 + 0x348;
      do {
        if (*(FlashLibraryInstance **)pHVar3 != (FlashLibraryInstance *)0x0) {
          FlashLibraryInstance__Reset(*(FlashLibraryInstance **)pHVar3);
          iVar1 = *(int *)(self + 0x338);
        }
        iVar2 = iVar2 + 1;
        pHVar3 = pHVar3 + 8;
      } while (iVar2 < iVar1);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != 3);
  iVar1 = *(int *)(self + 0x3c0);
  *(uint32_t *)(self + 0x3c4) = 0;
  iVar4 = 0;
  do {
    if (0 < iVar1) {
      iVar2 = 0;
      pHVar3 = self + (long)iVar4 * 0x28 + 0x3d0;
      do {
        if (*(FlashLibraryInstance **)pHVar3 != (FlashLibraryInstance *)0x0) {
          FlashLibraryInstance__Reset(*(FlashLibraryInstance **)pHVar3);
          iVar1 = *(int *)(self + 0x3c0);
        }
        iVar2 = iVar2 + 1;
        pHVar3 = pHVar3 + 8;
      } while (iVar2 < iVar1);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != 3);
  iVar1 = *(int *)(self + 0x228);
  *(uint32_t *)(self + 0x22c) = 0;
  iVar4 = 0;
  do {
    if (0 < iVar1) {
      iVar2 = 0;
      pHVar3 = self + (long)iVar4 * 0x28 + 0x238;
      do {
        if (*(FlashLibraryInstance **)pHVar3 != (FlashLibraryInstance *)0x0) {
          FlashLibraryInstance__Reset(*(FlashLibraryInstance **)pHVar3);
          iVar1 = *(int *)(self + 0x228);
        }
        iVar2 = iVar2 + 1;
        pHVar3 = pHVar3 + 8;
      } while (iVar2 < iVar1);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != 3);
  iVar1 = *(int *)(self + 0x2b0);
  *(uint32_t *)(self + 0x2b4) = 0;
  iVar4 = 0;
  do {
    if (0 < iVar1) {
      iVar2 = 0;
      pHVar3 = self + (long)iVar4 * 0x28 + 0x2c0;
      do {
        if (*(FlashLibraryInstance **)pHVar3 != (FlashLibraryInstance *)0x0) {
          FlashLibraryInstance__Reset(*(FlashLibraryInstance **)pHVar3);
          iVar1 = *(int *)(self + 0x2b0);
        }
        iVar2 = iVar2 + 1;
        pHVar3 = pHVar3 + 8;
      } while (iVar2 < iVar1);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != 3);
  return;
}
