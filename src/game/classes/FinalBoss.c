/* src/game/classes/FinalBoss.c — 13 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "FinalBoss.h"

/* ======================================================================
 * FinalBoss__Render  (Ghidra `Render` @ 004691d0)
 * Signature: uint8_t __stdcall Render(void)
 * Class: FinalBoss
 * Calls: (none)
 * Called by: (none)
 */
/* FinalBoss__Render() */

void FinalBoss__Render(void)

{
  return;
}

/* ======================================================================
 * FinalBoss__OnDeath  (Ghidra `OnDeath` @ 004691e0)
 * Signature: uint8_t __stdcall OnDeath(void)
 * Class: FinalBoss
 * Calls: (none)
 * Called by: (none)
 */
/* FinalBoss__OnDeath() */

void FinalBoss__OnDeath(void)

{
  return;
}

/* ======================================================================
 * FinalBoss__GetPosition  (Ghidra `GetPosition` @ 004691f0)
 * Signature: uint8_t __thiscall GetPosition(FinalBoss * self)
 * Class: FinalBoss
 * Calls: (none)
 * Called by: (none)
 */
/* FinalBoss__GetPosition() */

FinalBoss * __thiscall FinalBoss__GetPosition(FinalBoss *self)

{
  *(uint32_t *)self = 0;
  *(uint32_t *)(self + 4) = 0;
  return self;
}

/* ======================================================================
 * FinalBoss__GetCameraFocus  (Ghidra `GetCameraFocus` @ 00469200)
 * Signature: uint8_t __thiscall GetCameraFocus(FinalBoss * self, FPUVector * arg1)
 * Class: FinalBoss
 * Calls: `GSuperMeatBoy__getChar`, `MeatBoyCharactor__getRenderPos`
 * Called by: (none)
 */
/* FinalBoss__GetCameraFocus(FPUVector*) */

void __thiscall FinalBoss__GetCameraFocus(FinalBoss *self,FPUVector *arg1)

{
  uint32_t uVar1;
  MeatBoyCharactor *pMVar2;
  uint32_t *puVar3;
  long lVar4;
  
  pMVar2 = (MeatBoyCharactor *)GSuperMeatBoy__getChar(SuperMeatBoy,1);
  puVar3 = (uint32_t *)MeatBoyCharactor__getRenderPos(pMVar2);
  *(uint32_t *)arg1 = *puVar3;
  pMVar2 = (MeatBoyCharactor *)GSuperMeatBoy__getChar(SuperMeatBoy,1);
  lVar4 = MeatBoyCharactor__getRenderPos(pMVar2);
  uVar1 = *(uint32_t *)(lVar4 + 4);
  *(uint32_t *)(arg1 + 8) = 0;
  *(uint32_t *)(arg1 + 4) = uVar1;
  return;
}

/* ======================================================================
 * FinalBoss__FinalBoss  (Ghidra `~FinalBoss` @ 00469250)
 * Signature: uint8_t __thiscall ~FinalBoss(FinalBoss * self)
 * Class: FinalBoss
 * Calls: `FinalBoss__FinalBoss__00469370`, `FlashAnimationLibrary__FlashAnimationLibrary`, `GSMBCharactor__DestroyCharactor__0049cbf0`, `SMBBoss__SMBBoss__0048d920`, `SMBCreditRoll__SMBCreditRoll__0049d150`, `SMBReplay__SMBReplay__0050da30`, `TAudioCue__TAudioCue__0057ab30`, `TAudioInstance__IsPlaying`, `TAudioInstance__Stop`, `operator_delete`
 * Called by: (none)
 */
/* FinalBoss__FinalBoss__00469370() */

void __thiscall FinalBoss__FinalBoss__00469370(FinalBoss *self)

{
  FlashAnimationLibrary *this_00;
  SMBCreditRoll *this_01;
  SMBReplay *this_02;
  TAudioCue *pTVar1;
  int iVar2;
  
  *(uint8_t ***)self = &PTR__FinalBoss_005bf8f0;
  if (*(long **)(self + 400) != (long *)0x0) {
                    /* try { // try from 0046926f to 00469325 has its CatchHandler @ 0046935c */
    (**(code **)(**(long **)(self + 400) + 8))();
  }
  this_00 = *(FlashAnimationLibrary **)(self + 0x188);
  *(uint64_t *)(self + 400) = 0;
  if (this_00 != (FlashAnimationLibrary *)0x0) {
    FlashAnimationLibrary__FlashAnimationLibrary(this_00);
    operator_delete(this_00);
  }
  this_01 = *(SMBCreditRoll **)(self + 0x198);
  *(uint64_t *)(self + 0x188) = 0;
  if (this_01 != (SMBCreditRoll *)0x0) {
    SMBCreditRoll__SMBCreditRoll__0049d150(this_01);
    operator_delete(this_01);
  }
  *(uint64_t *)(self + 0x198) = 0;
  if (((byte)self[0x173] & 0x40) != 0) {
    GSMBCharactor__DestroyCharactor__0049cbf0(SMBCharactor,*(MeatBoyCharactor **)(self + 0x178));
    this_02 = *(SMBReplay **)(self + 0x180);
    if (this_02 != (SMBReplay *)0x0) {
      SMBReplay__SMBReplay__0050da30(this_02);
      operator_delete(this_02);
    }
    iVar2 = TAudioInstance__IsPlaying((TAudioInstance *)escapeMusic);
    if (iVar2 == 1) {
                    /* try { // try from 00469355 to 00469359 has its CatchHandler @ 0046935c */
      TAudioInstance__Stop((TAudioInstance *)escapeMusic);
    }
    pTVar1 = pEscapeMusic;
    if (pEscapeMusic != (TAudioCue *)0x0) {
      TAudioCue__TAudioCue__0057ab30(pEscapeMusic);
      operator_delete(pTVar1);
    }
    pEscapeMusic = (TAudioCue *)0x0;
  }
  SMBBoss__SMBBoss__0048d920((SMBBoss *)self);
  return;
}

/* ======================================================================
 * FinalBoss__FinalBoss__00469370  (Ghidra `~FinalBoss` @ 00469370)
 * Signature: uint8_t __thiscall ~FinalBoss(FinalBoss * self)
 * Class: FinalBoss
 * Calls: `operator_delete`
 * Called by: `FinalBoss__FinalBoss`
 */
/* FinalBoss__FinalBoss__00469370() */

void __thiscall FinalBoss__FinalBoss__00469370(FinalBoss *self)

{
  FinalBoss__dtor(self);
  operator_delete(self);
  return;
}

/* ======================================================================
 * FinalBoss__IsCollidingWithBounds  (Ghidra `IsCollidingWithBounds` @ 004693f0)
 * Signature: uint8_t __thiscall IsCollidingWithBounds(FinalBoss * self, Bounds * arg1)
 * Class: FinalBoss
 * Calls: `DrFetus__IsBoundsHittingShot`
 * Called by: (none)
 */
/* FinalBoss__IsCollidingWithBounds(Bounds const*) */

uint64_t __thiscall FinalBoss__IsCollidingWithBounds(FinalBoss *self,Bounds *arg1)

{
  uint64_t uVar1;
  
  if (((byte)self[0x173] & 0x40) == 0) {
    return 0;
  }
  uVar1 = DrFetus__IsBoundsHittingShot(*(DrFetus **)(self + 0x178),arg1);
  return uVar1;
}

/* ======================================================================
 * FinalBoss__Reset  (Ghidra `Reset` @ 00469410)
 * Signature: uint8_t __thiscall Reset(FinalBoss * self)
 * Class: FinalBoss
 * Calls: `GSuperMeatBoy__getChar`, `MeatBoyCharactor__RestoreControls`, `MeatBoyCharactor__SwitchToReplayMode`, `SMBBoss__Reset`, `Vector2__operator_assign`
 * Called by: (none)
 */
/* FinalBoss__Reset() */

void __thiscall FinalBoss__Reset(FinalBoss *self)

{
  long lVar1;
  MeatBoyCharactor *this_00;
  
  if (((byte)self[0x173] & 0x40) == 0) {
    return;
  }
  *(uint *)(self + 0x170) = *(uint *)(self + 0x170) & 0xc0000000;
  SMBBoss__Reset((SMBBoss *)self);
  this_00 = (MeatBoyCharactor *)GSuperMeatBoy__getChar(SuperMeatBoy,1);
  MeatBoyCharactor__RestoreControls(this_00);
  (**(code **)(**(long **)(self + 0x178) + 0x68))();
  MeatBoyCharactor__SwitchToReplayMode(*(MeatBoyCharactor **)(self + 0x178));
  lVar1 = *(long *)(self + 0x178);
  *(uint32_t *)(lVar1 + 0x9c) = 1;
  Vector2__operator_assign((Vector2 *)(lVar1 + 0xa0),(Vector2 *)(self + 0x28));
  *(byte *)(*(long *)(self + 0x178) + 0x7db) = *(byte *)(*(long *)(self + 0x178) + 0x7db) & 0xdf;
  self[0x173] = (FinalBoss)((byte)self[0x173] & 0x7f);
  return;
}

/* ======================================================================
 * FinalBoss__FinalBoss__00469560  (Ghidra `FinalBoss` @ 00469560)
 * Signature: uint8_t __thiscall FinalBoss(FinalBoss * self)
 * Class: FinalBoss
 * Calls: `FormatResourcePath`, `GSMBCharactor__CreateCharactor__0049c600`, `SMBBoss__SMBBoss__0048d980`, `SMBChapter__ThreadLoadBossOutro`, `SMBReplay__ResetAll`, `SMBReplay__SMBReplay`, `operator_new`
 * Called by: `CreateSMBBoss`
 */
/* WARNING: Removing unreachable block (ram,0x004696fa) */
/* FinalBoss__FinalBoss__00469560() */

void __thiscall FinalBoss__FinalBoss__00469560(FinalBoss *self)

{
  int *piVar1;
  int iVar2;
  GSMBCharactor *pGVar3;
  uint64_t uVar4;
  SMBReplay *this_00;
  uint32_t local_48 [2];
  char *local_40;
  uint32_t local_38;
  uint32_t local_34;
  uint8_t *local_28 [3];
  
  SMBBoss__SMBBoss__0048d980((SMBBoss *)self);
  *(uint *)(self + 0x170) = *(uint *)(self + 0x170) & 0xc0000000;
  *(uint8_t ***)self = &PTR__FinalBoss_005bf8f0;
  pGVar3 = SMBCharactor;
  *(uint64_t *)(self + 0x188) = 0;
  *(uint64_t *)(self + 400) = 0;
  *(uint64_t *)(self + 0x198) = 0;
  local_28[0] = &DAT_008184c8 /* R:0.00016803004837129265f */;
                    /* try { // try from 004695ba to 004695cf has its CatchHandler @ 0046971e */
  uVar4 = GSMBCharactor__CreateCharactor__0049c600(pGVar3,4,1);
  *(uint64_t *)(self + 0x178) = uVar4;
  this_00 = operator_new(0x2e0);
                    /* try { // try from 004695d6 to 004695da has its CatchHandler @ 00469705 */
  SMBReplay__SMBReplay(this_00);
  *(SMBReplay **)(self + 0x180) = this_00;
                    /* try { // try from 004695f7 to 00469695 has its CatchHandler @ 004696d8 */
  FormatResourcePath("/Bosses/drfetus.rpl",local_28);
  *(uint64_t *)(*(long *)(self + 0x178) + 0xa38) = *(uint64_t *)(self + 0x180);
  SMBReplay__ResetAll(*(SMBReplay **)(self + 0x180));
  SMBReplay__LoadReplayData(*(SMBReplayFileCreate **)(self + 0x180));
  if (*(int *)(SuperMeatBoy + 0x3a4) == 0) {
    SMBChapter__ThreadLoadBossOutro();
  }
  local_38 = 0;
  local_34 = 0;
  local_40 = "audio/escape.wav";
  local_48[0] = 5;
  self[0x173] = (FinalBoss)((byte)self[0x173] & 0x7f | 0x40);
  pEscapeMusic = TAudioCue__Create((TAudioCueCreation *)local_48);
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
 * FinalBoss__PlayCredits  (Ghidra `PlayCredits` @ 00469870)
 * Signature: uint8_t __thiscall PlayCredits(FinalBoss * self)
 * Class: FinalBoss
 * Calls: `FlashAnimationLibrary__FlashAnimationLibrary`, `SMBCreditRoll__StartCredits`, `SMBCreditsFinished`, `operator_delete`
 * Called by: (none)
 */
/* FinalBoss__PlayCredits() */

void __thiscall FinalBoss__PlayCredits(FinalBoss *self)

{
  FlashAnimationLibrary *this_00;
  
  if (*(long **)(self + 400) != (long *)0x0) {
    (**(code **)(**(long **)(self + 400) + 8))();
  }
  this_00 = *(FlashAnimationLibrary **)(self + 0x188);
  *(uint64_t *)(self + 400) = 0;
  if (this_00 != (FlashAnimationLibrary *)0x0) {
    FlashAnimationLibrary__FlashAnimationLibrary(this_00);
    operator_delete(this_00);
  }
  *(uint64_t *)(self + 0x188) = 0;
  SMBCreditRoll__StartCredits(*(SMBCreditRoll **)(self + 0x198),SMBCreditsFinished);
  return;
}

/* ======================================================================
 * FinalBoss__Hit  (Ghidra `Hit` @ 004698f0)
 * Signature: uint8_t __stdcall Hit(void)
 * Class: FinalBoss
 * Calls: (none)
 * Called by: (none)
 */
/* FinalBoss__Hit() */

void FinalBoss__Hit(void)

{
  return;
}

/* ======================================================================
 * FinalBoss__SetToPhaseTwo  (Ghidra `SetToPhaseTwo` @ 00469900)
 * Signature: uint8_t __thiscall SetToPhaseTwo(FinalBoss * self)
 * Class: FinalBoss
 * Calls: `GSMBCharactor__DestroyCharactor__0049cbf0`, `GSuperMeatBoy__getChar`, `MeatBoyCharactor__RestoreControls`, `SMBReplay__SMBReplay__0050da30`, `SyncEvent__Reset`, `TAudioCue__Play`, `ThreadLoadEnding`, `operator_delete`
 * Called by: `SMBFinalBossOutroFinished`
 */
/* FinalBoss__SetToPhaseTwo() */

void __thiscall FinalBoss__SetToPhaseTwo(FinalBoss *self)

{
  SMBReplay *this_00;
  MeatBoyCharactor *this_01;
  
  self[0x173] = (FinalBoss)((byte)self[0x173] & 0xbf);
  GSMBCharactor__DestroyCharactor__0049cbf0(SMBCharactor,*(MeatBoyCharactor **)(self + 0x178));
  this_00 = *(SMBReplay **)(self + 0x180);
  if (this_00 != (SMBReplay *)0x0) {
    SMBReplay__SMBReplay__0050da30(this_00);
    operator_delete(this_00);
  }
  *(uint64_t *)(self + 0x178) = 0;
  SyncEvent__Reset((SyncEvent *)endLibLoaded);
  ThreadLoadEnding(self + 0x188);
  hEndingLoadThread = 0;
  this_01 = (MeatBoyCharactor *)GSuperMeatBoy__getChar(SuperMeatBoy,1);
  MeatBoyCharactor__RestoreControls(this_01);
  self[0x173] = (FinalBoss)((byte)self[0x173] & 0x7f);
  TAudioCue__Play(pEscapeMusic,GLOBALMUSICVOLUME,0,(TAudioInstance *)escapeMusic);
  return;
}

/* ======================================================================
 * FinalBoss__Update  (Ghidra `Update` @ 00469a30)
 * Signature: uint8_t __thiscall Update(FinalBoss * self)
 * Class: FinalBoss
 * Calls: `CloseThread`, `DisableLoadingRenderThread`, `DrFetus__GetClonePosition`, `FlashAnimationLibrary__GetMovieClip__005731d0`, `GSMBCutSceneManager__PlayCutScene`, `GSuperMeatBoy__Freeze`, `GSuperMeatBoy__getChar`, `Loader__WaitAll`, `SMBChapter__DestroyBossOutro`, `SMBChapter__PlayBossOutro` (+9 more)
 * Called by: (none)
 */
/* FinalBoss__Update() */

void __thiscall FinalBoss__Update(FinalBoss *self)

{
  float fVar1;
  float *pfVar2;
  UserProfile *pUVar3;
  uint64_t uVar4;
  SMBCreditRoll *this_00;
  long lVar5;
  uint32_t local_88;
  uint32_t local_84;
  uint32_t local_80;
  uint64_t local_78;
  code *local_70;
  FinalBoss *local_68;
  code *local_60;
  uint64_t local_58;
  uint32_t local_50;
  uint32_t local_4c;
  uint32_t local_48;
  uint64_t local_38;
  uint64_t local_30;
  uint32_t local_28;
  
  if (-1 < (char)self[0x173]) {
    if (((byte)self[0x173] & 0x40) == 0) {
      fVar1 = *(float *)(self + 200);
      lVar5 = GSuperMeatBoy__getChar(SuperMeatBoy,1);
      if (*(float *)(lVar5 + 0xa0) <= fVar1 && fVar1 != *(float *)(lVar5 + 0xa0)) {
        fVar1 = *(float *)(self + 0xac);
        lVar5 = GSuperMeatBoy__getChar(SuperMeatBoy,1);
        if (fVar1 < *(float *)(lVar5 + 0xa4)) {
          self[0x173] = (FinalBoss)((byte)self[0x173] | 0x80);
          if (*(short *)(SuperMeatBoy + 0x376) == 0) {
            local_38._4_4_ = 0x12;
          }
          else {
            local_38._4_4_ = 0x13;
          }
          local_38 = (char *)CONCAT44(local_38._4_4_,1);
          pUVar3 = (UserProfile *)TPlayer__GetProfile((TPlayer *)Players__Player);
          Achievements__AwardAchievement(pUVar3,(AchievementAward *)&local_38);
          SyncEvent__Wait((SyncEvent *)endLibLoaded);
          if (hEndingLoadThread != (THREADHANDLESTRUCT *)0x0) {
            CloseThread(hEndingLoadThread);
            hEndingLoadThread = (THREADHANDLESTRUCT *)0x0;
          }
          uVar4 = FlashAnimationLibrary__GetMovieClip__005731d0(*(FlashAnimationLibrary **)(self + 0x188),0);
          *(uint64_t *)(self + 400) = uVar4;
          TAudioInstance__Stop((TAudioInstance *)escapeMusic);
          local_78 = *(uint64_t *)(self + 400);
          local_58 = 0;
          local_48 = 1;
          local_88 = 0x44200000;
          local_84 = 0x43f00000;
          local_80 = 1;
          local_70 = SMBFinalBossPhaseTwoFinished;
          local_60 = SMBFinalBossIntroSkip;
          local_50 = 1;
          local_4c = 0;
          local_68 = self;
          GSMBCutSceneManager__PlayCutScene(SMBCutSceneManager,(SMBCutScene *)&local_88);
          if (*(short *)(SuperMeatBoy + 0x376) == 0) {
            this_00 = operator_new(0x10);
                    /* try { // try from 00469c37 to 00469c3b has its CatchHandler @ 00469d67 */
            SMBCreditRoll__SMBCreditRoll(this_00,1);
          }
          else {
            this_00 = operator_new(0x10);
                    /* try { // try from 00469d5d to 00469d61 has its CatchHandler @ 00469d7a */
            SMBCreditRoll__SMBCreditRoll(this_00,0);
          }
          *(SMBCreditRoll **)(self + 0x198) = this_00;
          Loader__WaitAll();
          DisableLoadingRenderThread();
          return;
        }
      }
    }
    else {
      fVar1 = *(float *)(self + 0x128);
      pfVar2 = (float *)DrFetus__GetClonePosition(*(DrFetus **)(self + 0x178));
      if (fVar1 < *pfVar2) {
        fVar1 = *(float *)(self + 0x14c);
        lVar5 = DrFetus__GetClonePosition(*(DrFetus **)(self + 0x178));
        if (*(float *)(lVar5 + 4) <= fVar1 && fVar1 != *(float *)(lVar5 + 4)) {
          self[0x173] = (FinalBoss)((byte)self[0x173] | 0x80);
          if (*(int *)(SuperMeatBoy + 0x3a4) == 0) {
            SMBChapter__PlayBossOutro
                      ((SMBChapter *)(SuperMeatBoy + 0x90),SMBFinalBossOutroFinished,0);
            return;
          }
          SMBChapter__DestroyBossOutro((SMBChapter *)(SuperMeatBoy + 0x90),0);
          local_30 = 0;
          local_28 = 0;
          local_38 = "boss62";
          if (*(short *)(SuperMeatBoy + 0x376) != 0) {
            local_38 = "boss62x";
          }
          SMBEditor__LoadLevel(SuperMeatBoyEditor,(TileLevelLoad *)&local_38);
          GSuperMeatBoy__Freeze(SuperMeatBoy,0);
          SetToPhaseTwo(CurrentSMBBoss);
          return;
        }
      }
      fVar1 = *(float *)(self + 0x128);
      pfVar2 = (float *)DrFetus__GetClonePosition(*(DrFetus **)(self + 0x178));
      if (fVar1 < *pfVar2) {
        *(byte *)(*(long *)(self + 0x178) + 0x7db) =
             *(byte *)(*(long *)(self + 0x178) + 0x7db) | 0x20;
      }
      (**(code **)(**(long **)(self + 0x178) + 0x40))();
    }
  }
  return;
}
