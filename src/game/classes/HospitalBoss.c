/* src/game/classes/HospitalBoss.c — 12 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "HospitalBoss.h"

/* ======================================================================
 * HospitalBoss__GetCameraFocus  (Ghidra `GetCameraFocus` @ 0046cf80)
 * Signature: uint8_t __thiscall GetCameraFocus(HospitalBoss * self, FPUVector * arg1)
 * Class: HospitalBoss
 * Calls: (none)
 * Called by: (none)
 */
/* HospitalBoss__GetCameraFocus(FPUVector*) */

void __thiscall HospitalBoss__GetCameraFocus(HospitalBoss *self, FPUVector *arg1)

{
  float fVar1;
  float fVar2;

  fVar2 = DAT_005c0060 /* R:350.0f */;
  *(uint32_t *)arg1 = *(uint32_t *)(*(long *)(self + 0x1b8) + 0x30);
  fVar1 = *(float *)(*(long *)(self + 0x1b8) + 0x34);
  *(uint32_t *)(arg1 + 8) = 0;
  *(float *)(arg1 + 4) = fVar2 + fVar1;
  return;
}

/* ======================================================================
 * HospitalBoss__GetPosition  (Ghidra `GetPosition` @ 0046cfb0)
 * Signature: uint8_t __thiscall GetPosition(HospitalBoss * self)
 * Class: HospitalBoss
 * Calls: (none)
 * Called by: (none)
 */
/* HospitalBoss__GetPosition() */

HospitalBoss *__thiscall HospitalBoss__GetPosition(HospitalBoss *self)

{
  *(uint32_t *)self = 0;
  *(uint32_t *)(self + 4) = 0;
  return self;
}

/* ======================================================================
 * HospitalBoss__IsCollidingWithBounds  (Ghidra `IsCollidingWithBounds` @ 0046cfc0)
 * Signature: uint8_t __thiscall IsCollidingWithBounds(HospitalBoss * self, Bounds * arg1)
 * Class: HospitalBoss
 * Calls: `FlashLibraryInstance__IsBoundsTouchingInstance__00574660`
 * Called by: (none)
 */
/* HospitalBoss__IsCollidingWithBounds(Bounds const*) */

bool __thiscall HospitalBoss__IsCollidingWithBounds(HospitalBoss *self, Bounds *arg1)

{
  int iVar1;
  bool bVar2;

  if (*(FlashLibraryInstance **)(self + 0x1b0) != (FlashLibraryInstance *)0x0) {
    iVar1 = FlashLibraryInstance__IsBoundsTouchingInstance__00574660(
        *(FlashLibraryInstance **)(self + 0x1b0), arg1);
    if (iVar1 != 0)
      goto LAB_0046cfe9;
  }
  iVar1 = FlashLibraryInstance__IsBoundsTouchingInstance__00574660(
      *(FlashLibraryInstance **)(self + 0x1b8), arg1);
  if (iVar1 == 0) {
    return false;
  }
LAB_0046cfe9:
  bVar2 = false;
  if (*(int *)(self + 0x1f8) == 0) {
    bVar2 = *(int *)(self + 500) == 0;
  }
  return bVar2;
}

/* ======================================================================
 * HospitalBoss__HospitalBoss  (Ghidra `~HospitalBoss` @ 0046d040)
 * Signature: uint8_t __thiscall ~HospitalBoss(HospitalBoss * self)
 * Class: HospitalBoss
 * Calls: `HospitalBoss__HospitalBoss__0046d120`, `SMBBoss__SMBBoss__0048d920`
 * Called by: (none)
 */
/* HospitalBoss__HospitalBoss__0046d120() */

void __thiscall HospitalBoss__HospitalBoss__0046d120(HospitalBoss *self)

{
  *(uint8_t ***)self = &PTR__HospitalBoss_005c0010;
  if (*(long **)(self + 0x1b8) != (long *)0x0) {
    /* try { // try from 0046d05e to 0046d0f0 has its CatchHandler @ 0046d0fe */
    (**(code **)(**(long **)(self + 0x1b8) + 8))();
  }
  if (*(long **)(self + 0x1c0) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x1c0) + 8))();
  }
  if (*(long **)(self + 0x170) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x170) + 8))();
  }
  if (*(long **)(self + 0x1a8) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x1a8) + 8))();
  }
  if (*(long **)(self + 0x180) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x180) + 8))();
  }
  if (*(long **)(self + 0x188) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x188) + 8))();
  }
  if (*(long **)(self + 0x198) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x198) + 8))();
  }
  if (*(long **)(self + 400) != (long *)0x0) {
    (**(code **)(**(long **)(self + 400) + 8))();
  }
  if (*(long **)(self + 0x178) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x178) + 8))();
  }
  SMBBoss__SMBBoss__0048d920((SMBBoss *)self);
  return;
}

/* ======================================================================
 * HospitalBoss__HospitalBoss__0046d120  (Ghidra `~HospitalBoss` @ 0046d120)
 * Signature: uint8_t __thiscall ~HospitalBoss(HospitalBoss * self)
 * Class: HospitalBoss
 * Calls: `operator_delete`
 * Called by: `HospitalBoss__HospitalBoss`
 */
/* HospitalBoss__HospitalBoss__0046d120() */

void __thiscall HospitalBoss__HospitalBoss__0046d120(HospitalBoss *self)

{
  HospitalBoss__dtor(self);
  operator_delete(self);
  return;
}

/* ======================================================================
 * HospitalBoss__Render  (Ghidra `Render` @ 0046d140)
 * Signature: uint8_t __thiscall Render(HospitalBoss * self)
 * Class: HospitalBoss
 * Calls: `FlashLibraryInstance__IsPlaying`, `FlashLibraryInstance__Reset`, `RegisterAudioPosition`, `SMBCamera__ScreenShake`, `TAudio__DisableDirectionalAudio`, `TAudio__EnableDirectionalAudio`
 * Called by: (none)
 */
/* HospitalBoss__Render() */

void __thiscall HospitalBoss__Render(HospitalBoss *self)

{
  int iVar1;
  bool bVar2;

  if (*(int *)(self + 500) == 1) {
    return;
  }
  RegisterAudioPosition((FPUVector *)0xffffffff);
  TAudio__DisableDirectionalAudio(Audio);
  (**(code **)(**(long **)(self + 0x1b0) + 0x10))();
  RegisterAudioPosition((FPUVector *)0x0);
  TAudio__EnableDirectionalAudio(Audio);
  if (*(float *)(self + 0x1c8) <= DAT_005be894 /* R:1.0f */ &&
      DAT_005be894 /* R:1.0f */ != *(float *)(self + 0x1c8)) {
    SMBCamera__ScreenShake(*(SMBCamera **)(SuperMeatBoy + 0x38), DAT_005c0068 /* R:2.0f */,
                           DAT_005c0064 /* R:6.0f */);
    if (*(int *)(self + 0x1fc) != 1)
      goto LAB_0046d1ae;
    bVar2 = false;
  } else {
    if (*(int *)(self + 0x1fc) != 1)
      goto LAB_0046d1ae;
    bVar2 = *(int *)(self + 0x1d4) == -1;
  }
  *(uint32_t *)(*(long *)(self + 0x1c0) + 0x30) = *(uint32_t *)(*(long *)(self + 0x1b8) + 0x30);
  *(uint32_t *)(*(long *)(self + 0x1c0) + 0x34) = *(uint32_t *)(*(long *)(self + 0x1b8) + 0x34);
  (**(code **)(**(long **)(self + 0x1c0) + 0x10))();
  iVar1 = FlashLibraryInstance__IsPlaying(*(FlashLibraryInstance **)(self + 0x1c0));
  if ((iVar1 != 0) || (bVar2)) {
    iVar1 = FlashLibraryInstance__IsPlaying(*(FlashLibraryInstance **)(self + 0x1c0));
    if (iVar1 == 0) {
      *(uint32_t *)(self + 0x1fc) = 0;
    }
  } else {
    FlashLibraryInstance__Reset(*(FlashLibraryInstance **)(self + 0x1c0));
  }
LAB_0046d1ae:
  /* WARNING: Could not recover jumptable at 0x0046d1ca. Too many branches */
  /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(self + 0x1b8) + 0x10))();
  return;
}

/* ======================================================================
 * HospitalBoss__OnDeath  (Ghidra `OnDeath` @ 0046d2b0)
 * Signature: uint8_t __thiscall OnDeath(HospitalBoss * self)
 * Class: HospitalBoss
 * Calls: `GSuperMeatBoy__getChar`, `MeatBoyCharactor__RemoveControls`, `SMBChapter__ThreadLoadBossOutro`
 * Called by: (none)
 */
/* HospitalBoss__OnDeath() */

void __thiscall HospitalBoss__OnDeath(HospitalBoss *self)

{
  MeatBoyCharactor *this_00;

  if (*(int *)(self + 0x1f8) != 1) {
    *(uint32_t *)(self + 0x1e8) = 0xffffffff;
    this_00 = (MeatBoyCharactor *)GSuperMeatBoy__getChar(SuperMeatBoy, 1);
    MeatBoyCharactor__RemoveControls(this_00);
    *(uint32_t *)(self + 0x1f8) = 1;
    *(uint32_t *)(*(long *)(self + 0x1b0) + 0x60) = 0x40000000;
    SMBChapter__ThreadLoadBossOutro();
    return;
  }
  return;
}

/* ======================================================================
 * HospitalBoss__HospitalBoss__0046d390  (Ghidra `HospitalBoss` @ 0046d390)
 * Signature: uint8_t __thiscall HospitalBoss(HospitalBoss * self)
 * Class: HospitalBoss
 * Calls: `FlashAnimationLibrary__FlashAnimationLibrary__00576680`, `FlashAnimationLibrary__GetMovieClip__005731d0`, `FormatResourcePath`, `SMBBoss__SMBBoss__0048d980`, `SMBChapter__ThreadLoadBossOutro`, `operator_new`
 * Called by: `CreateSMBBoss`
 */
/* WARNING: Removing unreachable block (ram,0x0046d583) */
/* HospitalBoss__HospitalBoss__0046d390() */

void __thiscall HospitalBoss__HospitalBoss__0046d390(HospitalBoss *self)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  FlashAnimationLibrary *this_00;
  uint64_t uVar5;
  uint8_t *local_28[2];

  SMBBoss__SMBBoss__0048d980((SMBBoss *)self);
  *(uint8_t ***)self = &PTR__HospitalBoss_005c0010;
  *(uint32_t *)(self + 0x1c8) = 0x3f800000;
  *(uint32_t *)(self + 0x1cc) = 0;
  *(uint32_t *)(self + 0x1d0) = 0;
  *(uint32_t *)(self + 0x1d4) = 0xffffffff;
  *(uint32_t *)(self + 0x1e8) = 0xffffffff;
  *(uint32_t *)(self + 500) = 0;
  *(uint32_t *)(self + 0x1f8) = 0;
  *(uint32_t *)(self + 0x1fc) = 0;
  *(uint32_t *)(self + 0x200) = 1;
  local_28[0] = &DAT_008184c8 /* R:0.00016803004837129265f */;
  /* try { // try from 0046d411 to 0046d422 has its CatchHandler @ 0046d57e */
  pcVar4 = (char *)FormatResourcePath("/Bosses/boss2.am", local_28);
  this_00 = operator_new(0xb0);
  /* try { // try from 0046d42c to 0046d430 has its CatchHandler @ 0046d558 */
  FlashAnimationLibrary__FlashAnimationLibrary__00576680(this_00, pcVar4);
  *(FlashAnimationLibrary **)(self + 0x20) = this_00;
  /* try { // try from 0046d43d to 0046d50d has its CatchHandler @ 0046d57e */
  uVar5 = FlashAnimationLibrary__GetMovieClip__005731d0(this_00, "bloodpool");
  *(uint64_t *)(self + 0x1b8) = uVar5;
  uVar5 = FlashAnimationLibrary__GetMovieClip__005731d0(*(FlashAnimationLibrary **)(self + 0x20),
                                                        "bloodpool2");
  *(uint64_t *)(self + 0x1c0) = uVar5;
  uVar5 = FlashAnimationLibrary__GetMovieClip__005731d0(*(FlashAnimationLibrary **)(self + 0x20),
                                                        "bossidle1");
  *(uint64_t *)(self + 0x170) = uVar5;
  uVar5 = FlashAnimationLibrary__GetMovieClip__005731d0(*(FlashAnimationLibrary **)(self + 0x20),
                                                        "bossdeath");
  *(uint64_t *)(self + 0x1a8) = uVar5;
  uVar5 = FlashAnimationLibrary__GetMovieClip__005731d0(*(FlashAnimationLibrary **)(self + 0x20),
                                                        "bossjump");
  *(uint64_t *)(self + 0x180) = uVar5;
  uVar5 = FlashAnimationLibrary__GetMovieClip__005731d0(*(FlashAnimationLibrary **)(self + 0x20),
                                                        "bossjump2");
  *(uint64_t *)(self + 0x188) = uVar5;
  uVar5 = FlashAnimationLibrary__GetMovieClip__005731d0(*(FlashAnimationLibrary **)(self + 0x20),
                                                        "bosscharge");
  *(uint64_t *)(self + 0x198) = uVar5;
  uVar5 = FlashAnimationLibrary__GetMovieClip__005731d0(*(FlashAnimationLibrary **)(self + 0x20),
                                                        "bossappear");
  *(uint64_t *)(self + 400) = uVar5;
  uVar5 = FlashAnimationLibrary__GetMovieClip__005731d0(*(FlashAnimationLibrary **)(self + 0x20),
                                                        "bossdive");
  lVar3 = SuperMeatBoy;
  *(uint64_t *)(self + 0x178) = uVar5;
  if (*(int *)(lVar3 + 0x3a4) == 0) {
    SMBChapter__ThreadLoadBossOutro();
  }
  *(uint64_t *)(self + 0x1b0) = *(uint64_t *)(self + 0x170);
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
 * HospitalBoss__ChangeAction  (Ghidra `ChangeAction` @ 0046d590)
 * Signature: uint8_t __thiscall ChangeAction(HospitalBoss * self, tagHospitalBossState arg1)
 * Class: HospitalBoss
 * Calls: `FlashLibraryInstance__Reset`, `GetRandomINT`, `ScreenFlashManager__SetFade`
 * Called by: (none)
 */
/* HospitalBoss__ChangeAction(tagHospitalBossState) */

void __thiscall HospitalBoss__ChangeAction(HospitalBoss *self, int arg2)

{
  int iVar1;
  FlashLibraryInstance *this_00;

  if (arg2 == 5) {
    *(uint32_t *)(self + 0x200) = 5;
    *(uint32_t *)(*(long *)(self + 0x198) + 0x30) = *(uint32_t *)(self + 0x128);
    *(uint32_t *)(*(long *)(self + 0x198) + 0x40) = 0x3f800000;
    this_00 = *(FlashLibraryInstance **)(self + 0x198);
  } else if (arg2 == 0) {
    this_00 = *(FlashLibraryInstance **)(self + 0x170);
    *(uint32_t *)(self + 0x200) = 0;
  } else if (arg2 == 7) {
    this_00 = *(FlashLibraryInstance **)(self + 0x1a8);
    *(uint32_t *)(self + 0x200) = 7;
    ScreenFlashManager__SetFade((ScreenFlashManager *)&ScreenFlash,
                                DAT_005bff40 /* R:6.199999809265137f */, (ColorTemplate *)::cWhite);
  } else if (arg2 == 2) {
    *(uint32_t *)(self + 0x200) = 2;
    this_00 = *(FlashLibraryInstance **)(self + 0x180);
  } else if (arg2 == 3) {
    *(uint32_t *)(self + 0x200) = 3;
    iVar1 = GetRandomINT(0, 10);
    if (iVar1 < 6) {
      *(uint32_t *)(*(long *)(self + 0x188) + 0x30) = *(uint32_t *)(self + 0x148);
      *(uint32_t *)(*(long *)(self + 0x188) + 0x40) = 0xbf800000;
    } else {
      *(uint *)(*(long *)(self + 0x188) + 0x30) =
          *(uint *)(self + 0x148) ^ DAT_005be6f0 /* R:u32=2147483648 */;
      *(uint32_t *)(*(long *)(self + 0x188) + 0x40) = 0x3f800000;
    }
    this_00 = *(FlashLibraryInstance **)(self + 0x188);
  } else if (arg2 == 4) {
    *(uint32_t *)(self + 0x200) = 4;
    this_00 = *(FlashLibraryInstance **)(self + 400);
  } else {
    if (arg2 != 1)
      goto LAB_0046d61d;
    *(uint32_t *)(self + 0x200) = 1;
    this_00 = *(FlashLibraryInstance **)(self + 0x178);
  }
  if (this_00 != (FlashLibraryInstance *)0x0) {
    FlashLibraryInstance__Reset(this_00);
    if (*(long *)(self + 0x1b0) != 0) {
      *(uint32_t *)(*(long *)(self + 0x1b0) + 0x60) = 0x3f800000;
      *(uint32_t *)(this_00 + 0x34) = *(uint32_t *)(*(long *)(self + 0x1b0) + 0x34);
    }
    *(FlashLibraryInstance **)(self + 0x1b0) = this_00;
    return;
  }
LAB_0046d61d:
  *(uint64_t *)(self + 0x1b0) = 0;
  return;
}

/* ======================================================================
 * HospitalBoss__Reset  (Ghidra `Reset` @ 0046d760)
 * Signature: uint8_t __thiscall Reset(HospitalBoss * self)
 * Class: HospitalBoss
 * Calls: `GSuperMeatBoy__getChar`, `MeatBoyCharactor__RestoreControls`, `SMBBoss__Reset`, `Vector2__operator_assign`
 * Called by: (none)
 */
/* HospitalBoss__Reset() */

void __thiscall HospitalBoss__Reset(HospitalBoss *self)

{
  MeatBoyCharactor *this_00;

  *(uint32_t *)(self + 0x1c8) = 0x3f800000;
  *(uint32_t *)(self + 0x1cc) = 0;
  *(uint32_t *)(self + 0x1d0) = 0;
  *(uint32_t *)(self + 0x1d4) = 0xffffffff;
  *(uint32_t *)(self + 0x1e8) = 0xffffffff;
  Vector2__operator_assign((Vector2 *)(self + 0x1e0), (Vector2 *)(self + 0x28));
  *(uint64_t *)(self + 0x1b0) = 0;
  uSwitchResetCount = 0;
  ChangeAction(self, 1);
  *(uint32_t *)(*(long *)(self + 0x1b0) + 0x60) = 0x3f800000;
  *(uint32_t *)(self + 0x1f8) = 0;
  *(uint32_t *)(self + 500) = 0;
  *(uint32_t *)(self + 0x1fc) = 0;
  SMBBoss__Reset((SMBBoss *)self);
  this_00 = (MeatBoyCharactor *)GSuperMeatBoy__getChar(SuperMeatBoy, 1);
  MeatBoyCharactor__RestoreControls(this_00);
  return;
}

/* ======================================================================
 * HospitalBoss__Update  (Ghidra `Update` @ 0046d820)
 * Signature: uint8_t __thiscall Update(HospitalBoss * self)
 * Class: HospitalBoss
 * Calls: `FlashLibraryInstance__IsPlaying`, `FlashLibraryInstance__Reset`, `GSuperMeatBoy__getChar`, `GetRandomINT`, `SMBBoss__WayPointCollision__0048da90`, `SMBChapter__PlayBossOutro`, `SMBHospitalBossOutroFinished`, `Vector2__operator_assign`, `Vector2__operator_mul__005be200`, `Vector2__operator_plus__005be140`
 * Called by: (none)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HospitalBoss__Update() */

void __thiscall HospitalBoss__Update(HospitalBoss *self)

{
  uint32_t uVar1;
  float fVar2;
  GSuperMeatBoy *pGVar3;
  int iVar4;
  long lVar5;
  float fVar6;
  Vector2 local_38[4];
  float local_34;
  Vector2 local_28[16];
  Vector2 local_18[16];

  if (*(int *)(self + 500) == 1) {
    return;
  }
  if ((*(int *)(self + 0x200) == 7) &&
      (iVar4 = FlashLibraryInstance__IsPlaying(*(FlashLibraryInstance **)(self + 0x1a8)),
       pGVar3 = SuperMeatBoy, iVar4 == 0)) {
    *(uint32_t *)(self + 500) = 1;
    if (*(int *)(pGVar3 + 0x3a4) != 0) {
      return;
    }
    SMBChapter__PlayBossOutro((SMBChapter *)(pGVar3 + 0x90), SMBHospitalBossOutroFinished, 0);
    return;
  }
  fVar6 = *(float *)(self + 0x1c8);
  Vector2__operator_mul__005be200(local_18, fVar6);
  fVar2 = DAT_005be894 /* R:1.0f */;
  Vector2__operator_mul__005be200(local_28, DAT_005be894 /* R:1.0f */ - fVar6);
  Vector2__operator_plus__005be140(local_38, local_28);
  fVar6 = local_34 + _DAT_005c0074 /* R:30.0f */;
  local_34 = local_34 - DAT_005c0070 /* R:49.0f */;
  *(uint32_t *)(*(long *)(self + 0x1b8) + 0x30) = 0;
  *(float *)(*(long *)(self + 0x1b8) + 0x34) = local_34;
  *(float *)(*(long *)(self + 0x1b0) + 0x34) = fVar6;
  if ((*(int *)(self + 0x1d4) == -1) ||
      (iVar4 = FlashLibraryInstance__IsPlaying(*(FlashLibraryInstance **)(self + 0x1b0)),
       iVar4 != 0)) {
    fVar6 = DAT_005c006c /* R:0.0024999999441206455f */ + *(float *)(self + 0x1c8);
    *(float *)(self + 0x1c8) = fVar6;
    if (fVar6 <= fVar2) {
      if (fVar6 != fVar2)
        goto LAB_0046dacb;
    } else {
      *(float *)(self + 0x1c8) = fVar2;
      *(uint32_t *)(self + 0x1cc) = *(uint32_t *)(self + 0x1d0);
    }
    if (*(int *)(self + 0x1d4) != -1)
      goto LAB_0046d95b;
    iVar4 = FlashLibraryInstance__IsPlaying(*(FlashLibraryInstance **)(self + 0x1b0));
    if (iVar4 == 0) {
      if (*(int *)(self + 0x1f8) == 1) {
        ChangeAction(self, 7);
        return;
      }
      iVar4 = GetRandomINT(0, 1);
      if (iVar4 == 0) {
        ChangeAction(self, 2);
      } else if (iVar4 == 1) {
        ChangeAction(self, 3);
      }
      goto LAB_0046d95b;
    }
    fVar6 = *(float *)(self + 0x1c8);
  } else {
    uVar1 = *(uint32_t *)(self + 0x1d4);
    *(uint32_t *)(self + 0x1d4) = 0xffffffff;
    *(uint32_t *)(self + 0x1d0) = uVar1;
    *(uint32_t *)(self + 0x1c8) = 0x3b23d70a;
    fVar6 = 0.0025;
  }
LAB_0046dacb:
  if ((fVar6 < fVar2) &&
      (iVar4 = FlashLibraryInstance__IsPlaying(*(FlashLibraryInstance **)(self + 0x1b0)),
       iVar4 == 0)) {
    ChangeAction(self, 5);
  }
LAB_0046d95b:
  uSwitchResetCount = uSwitchResetCount + 1;
  lVar5 = GSuperMeatBoy__getChar(SuperMeatBoy, 1);
  if (((*(byte *)(lVar5 + 0x7d9) & 1) == 0) && (0x78 < uSwitchResetCount)) {
    lVar5 = GSuperMeatBoy__getChar(SuperMeatBoy, 1);
    iVar4 = SMBBoss__WayPointCollision__0048da90((SMBBoss *)self, 3, *(Bounds **)(lVar5 + 0x48));
    if ((iVar4 == 1) && (*(long *)(self + 0x1d0) == -0x100000000)) {
      *(uint32_t *)(self + 0x1d4) = 1;
      fVar2 = DAT_005c0070 /* R:49.0f */;
      *(uint32_t *)(self + 0x1e0) = *(uint32_t *)(*(long *)(self + 0x1b8) + 0x30);
      fVar6 = *(float *)(*(long *)(self + 0x1b8) + 0x34);
      *(uint32_t *)(self + 0x1e8) = 1;
      *(uint32_t *)(self + 0x1fc) = 1;
      *(float *)(self + 0x1e4) = fVar2 + fVar6;
      FlashLibraryInstance__Reset(*(FlashLibraryInstance **)(self + 0x1c0));
    } else {
      lVar5 = GSuperMeatBoy__getChar(SuperMeatBoy, 1);
      iVar4 = SMBBoss__WayPointCollision__0048da90((SMBBoss *)self, 4, *(Bounds **)(lVar5 + 0x48));
      if ((iVar4 == 1) && (*(long *)(self + 0x1d0) == -0xffffffff)) {
        *(uint32_t *)(self + 0x1d4) = 2;
        fVar2 = DAT_005c0070 /* R:49.0f */;
        *(uint32_t *)(self + 0x1e0) = *(uint32_t *)(*(long *)(self + 0x1b8) + 0x30);
        fVar6 = *(float *)(*(long *)(self + 0x1b8) + 0x34);
        *(uint32_t *)(self + 0x1e8) = 2;
        *(uint32_t *)(self + 0x1fc) = 1;
        *(float *)(self + 0x1e4) = fVar2 + fVar6;
        FlashLibraryInstance__Reset(*(FlashLibraryInstance **)(self + 0x1c0));
      } else {
        lVar5 = GSuperMeatBoy__getChar(SuperMeatBoy, 1);
        iVar4 =
            SMBBoss__WayPointCollision__0048da90((SMBBoss *)self, 5, *(Bounds **)(lVar5 + 0x48));
        if (iVar4 == 1) {
          *(uint32_t *)(self + 0x1e8) = 3;
        }
      }
    }
    lVar5 = GSuperMeatBoy__getChar(SuperMeatBoy, 1);
    iVar4 = SMBBoss__WayPointCollision__0048da90((SMBBoss *)self, 6, *(Bounds **)(lVar5 + 0x48));
    if (((iVar4 == 1) && (*(int *)(self + 0x200) != 7)) && (*(int *)(self + 0x1e8) == 3)) {
      lVar5 = GSuperMeatBoy__getChar(SuperMeatBoy, 1);
      *(uint32_t *)(lVar5 + 0x9c) = 1;
      Vector2__operator_assign((Vector2 *)(lVar5 + 0xa0), (Vector2 *)(self + 0xe8));
      (**(code **)(*(long *)self + 0x20))(self);
    }
  }
  return;
}

/* ======================================================================
 * HospitalBoss__Hit  (Ghidra `Hit` @ 0046dcf0)
 * Signature: uint8_t __stdcall Hit(void)
 * Class: HospitalBoss
 * Calls: (none)
 * Called by: (none)
 */
/* HospitalBoss__Hit() */

void HospitalBoss__Hit(void)

{
  return;
}
