/* src/game/classes/FactoryBoss.c — 10 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "FactoryBoss.h"

/* ======================================================================
 * FactoryBoss__OnDeath  (Ghidra `OnDeath` @ 00468c50)
 * Signature: uint8_t __stdcall OnDeath(void)
 * Class: FactoryBoss
 * Calls: (none)
 * Called by: (none)
 */
/* FactoryBoss__OnDeath() */

void FactoryBoss__OnDeath(void)

{
  return;
}

/* ======================================================================
 * FactoryBoss__GetPosition  (Ghidra `GetPosition` @ 00468c60)
 * Signature: uint8_t __thiscall GetPosition(FactoryBoss * self)
 * Class: FactoryBoss
 * Calls: (none)
 * Called by: (none)
 */
/* FactoryBoss__GetPosition() */

FactoryBoss *__thiscall FactoryBoss__GetPosition(FactoryBoss *self)

{
  *(uint32_t *)self = 0;
  *(uint32_t *)(self + 4) = 0;
  return self;
}

/* ======================================================================
 * FactoryBoss__Reset  (Ghidra `Reset` @ 00468cb0)
 * Signature: uint8_t __thiscall Reset(FactoryBoss * self)
 * Class: FactoryBoss
 * Calls: `GSuperMeatBoy__getChar`, `MeatBoyCharactor__RestoreControls`, `MeatBoyCharactor__SwitchToReplayMode`, `SMBBoss__Reset`
 * Called by: (none)
 */
/* FactoryBoss__Reset() */

void __thiscall FactoryBoss__Reset(FactoryBoss *self)

{
  MeatBoyCharactor *this_00;

  *(uint *)(self + 0x184) = *(uint *)(self + 0x184) & 0x80000000;
  *(uint32_t *)(self + 0x178) = 0;
  SMBBoss__Reset((SMBBoss *)self);
  this_00 = (MeatBoyCharactor *)GSuperMeatBoy__getChar(SuperMeatBoy, 1);
  MeatBoyCharactor__RestoreControls(this_00);
  (**(code **)(**(long **)(self + 0x188) + 0x68))();
  MeatBoyCharactor__SwitchToReplayMode(*(MeatBoyCharactor **)(self + 0x188));
  self[0x187] = (FactoryBoss)((byte)self[0x187] & 0x7f);
  return;
}

/* ======================================================================
 * FactoryBoss__GetCameraFocus  (Ghidra `GetCameraFocus` @ 00468d10)
 * Signature: uint8_t __thiscall GetCameraFocus(FactoryBoss * self, FPUVector * arg1)
 * Class: FactoryBoss
 * Calls: `GSuperMeatBoy__getChar`, `MeatBoyCharactor__getRenderPos`
 * Called by: (none)
 */
/* FactoryBoss__GetCameraFocus(FPUVector*) */

void __thiscall FactoryBoss__GetCameraFocus(FactoryBoss *self, FPUVector *arg1)

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
 * FactoryBoss__FactoryBoss  (Ghidra `~FactoryBoss` @ 00468d60)
 * Signature: uint8_t __thiscall ~FactoryBoss(FactoryBoss * self)
 * Class: FactoryBoss
 * Calls: `FactoryBoss__FactoryBoss__00468f70`, `GSMBCharactor__DestroyCharactor__0049cbf0`, `SMBBoss__SMBBoss__0048d920`, `SMBReplay__SMBReplay__0050da30`, `operator_delete`
 * Called by: (none)
 */
/* FactoryBoss__FactoryBoss__00468f70() */

void __thiscall FactoryBoss__FactoryBoss__00468f70(FactoryBoss *self)

{
  SMBReplay *this_00;

  *(uint8_t ***)self = &PTR__FactoryBoss_005bf7f0;
  if (*(long **)(self + 0x170) != (long *)0x0) {
    /* try { // try from 00468d87 to 00468db0 has its CatchHandler @ 00468dcf */
    (**(code **)(**(long **)(self + 0x170) + 8))();
  }
  GSMBCharactor__DestroyCharactor__0049cbf0(SMBCharactor, *(MeatBoyCharactor **)(self + 0x188));
  this_00 = *(SMBReplay **)(self + 400);
  if (this_00 != (SMBReplay *)0x0) {
    SMBReplay__SMBReplay__0050da30(this_00);
    operator_delete(this_00);
  }
  SMBBoss__SMBBoss__0048d920((SMBBoss *)self);
  return;
}

/* ======================================================================
 * FactoryBoss__Render  (Ghidra `Render` @ 00468df0)
 * Signature: uint8_t __thiscall Render(FactoryBoss * self)
 * Class: FactoryBoss
 * Calls: (none)
 * Called by: (none)
 */
/* FactoryBoss__Render() */

void __thiscall FactoryBoss__Render(FactoryBoss *self)

{
  uint uVar1;

  uVar1 = DAT_005be6f0 /* R:u32=2147483648 */;
  if ((char)self[0x187] < '\0') {
    return;
  }
  *(float *)(*(long *)(self + 0x170) + 0x34) =
      *(float *)(*(long *)(self + 0x40) + 0x28) - *(float *)(self + 0x180);
  *(uint *)(*(long *)(self + 0x170) + 0x30) = *(uint *)(self + 0x17c) ^ uVar1;
  (**(code **)(**(long **)(self + 0x170) + 0x10))();
  *(uint32_t *)(*(long *)(self + 0x170) + 0x30) = *(uint32_t *)(self + 0x17c);
  (**(code **)(**(long **)(self + 0x170) + 0x10))();
  *(float *)(self + 0x178) = *(float *)(self + 0x178) + fOneFrameTimeStep;
  return;
}

/* ======================================================================
 * FactoryBoss__Update  (Ghidra `Update` @ 00468ef0)
 * Signature: uint8_t __thiscall Update(FactoryBoss * self)
 * Class: FactoryBoss
 * Calls: `GSuperMeatBoy__getChar`, `SMBBoss__WayPointCollision__0048da90`, `SMBChapter__PlayBossOutro`, `SMBFactoryBossOutroFinished`
 * Called by: (none)
 */
/* FactoryBoss__Update() */

void __thiscall FactoryBoss__Update(FactoryBoss *self)

{
  int iVar1;
  long lVar2;

  if (-1 < (char)self[0x187]) {
    lVar2 = GSuperMeatBoy__getChar(SuperMeatBoy, 1);
    iVar1 = SMBBoss__WayPointCollision__0048da90((SMBBoss *)self, 9, (Vector2 *)(lVar2 + 0xa0));
    if (iVar1 != 1) {
      /* WARNING: Could not recover jumptable at 0x00468f39. Too many branches */
      /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(self + 0x188) + 0x40))();
      return;
    }
    self[0x187] = (FactoryBoss)((byte)self[0x187] | 0x80);
    if (*(int *)(SuperMeatBoy + 0x3a4) == 0) {
      SMBChapter__PlayBossOutro((SMBChapter *)(SuperMeatBoy + 0x90), SMBFactoryBossOutroFinished,
                                0);
      return;
    }
  }
  return;
}

/* ======================================================================
 * FactoryBoss__FactoryBoss__00468f70  (Ghidra `~FactoryBoss` @ 00468f70)
 * Signature: uint8_t __thiscall ~FactoryBoss(FactoryBoss * self)
 * Class: FactoryBoss
 * Calls: `GSMBCharactor__DestroyCharactor__0049cbf0`, `SMBBoss__SMBBoss__0048d920`, `SMBReplay__SMBReplay__0050da30`, `operator_delete`
 * Called by: `FactoryBoss__FactoryBoss`
 */
/* FactoryBoss__FactoryBoss__00468f70() */

void __thiscall FactoryBoss__FactoryBoss__00468f70(FactoryBoss *self)

{
  SMBReplay *this_00;

  *(uint8_t ***)self = &PTR__FactoryBoss_005bf7f0;
  if (*(long **)(self + 0x170) != (long *)0x0) {
    /* try { // try from 00468f8f to 00468fb8 has its CatchHandler @ 00468fd7 */
    (**(code **)(**(long **)(self + 0x170) + 8))();
  }
  GSMBCharactor__DestroyCharactor__0049cbf0(SMBCharactor, *(MeatBoyCharactor **)(self + 0x188));
  this_00 = *(SMBReplay **)(self + 400);
  if (this_00 != (SMBReplay *)0x0) {
    SMBReplay__SMBReplay__0050da30(this_00);
    operator_delete(this_00);
  }
  SMBBoss__SMBBoss__0048d920((SMBBoss *)self);
  operator_delete(self);
  return;
}

/* ======================================================================
 * FactoryBoss__FactoryBoss__00468ff0  (Ghidra `FactoryBoss` @ 00468ff0)
 * Signature: uint8_t __thiscall FactoryBoss(FactoryBoss * self)
 * Class: FactoryBoss
 * Calls: `FlashAnimationLibrary__FlashAnimationLibrary__00576680`, `FlashAnimationLibrary__GetMovieClip__005731d0`, `FlashLibraryInstance__GetInstanceBounds`, `FormatResourcePath`, `GSMBCharactor__CreateCharactor__0049c600`, `SMBBoss__SMBBoss__0048d980`, `SMBChapter__ThreadLoadBossOutro`, `SMBReplay__ResetAll`, `SMBReplay__SMBReplay`, `operator_new`
 * Called by: `CreateSMBBoss`
 */
/* WARNING: Removing unreachable block (ram,0x0046918d) */
/* FactoryBoss__FactoryBoss__00468ff0() */

void __thiscall FactoryBoss__FactoryBoss__00468ff0(FactoryBoss *self)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  FlashAnimationLibrary *this_00;
  FlashLibraryInstance *this_01;
  uint64_t uVar4;
  SMBReplay *this_02;
  uint8_t *local_38[2];
  Vector2 local_28[16];

  SMBBoss__SMBBoss__0048d980((SMBBoss *)self);
  *(uint8_t ***)self = &PTR__FactoryBoss_005bf7f0;
  local_38[0] = &DAT_008184c8 /* R:0.00016803004837129265f */;
  /* try { // try from 0046901a to 0046902b has its CatchHandler @ 00469170 */
  pcVar3 = (char *)FormatResourcePath("/Bosses/boss3.am", local_38);
  this_00 = operator_new(0xb0);
  /* try { // try from 00469035 to 00469039 has its CatchHandler @ 004691ac */
  FlashAnimationLibrary__FlashAnimationLibrary__00576680(this_00, pcVar3);
  *(FlashAnimationLibrary **)(self + 0x20) = this_00;
  /* try { // try from 00469046 to 0046904a has its CatchHandler @ 00469170 */
  this_01 =
      (FlashLibraryInstance *)FlashAnimationLibrary__GetMovieClip__005731d0(this_00, "saltboss");
  *(FlashLibraryInstance **)(self + 0x170) = this_01;
  *(uint32_t *)(self + 0x178) = 0;
  /* try { // try from 00469072 to 004690a7 has its CatchHandler @ 004691aa */
  FlashLibraryInstance__GetInstanceBounds(this_01, (float *)(self + 0x17c), (float *)(self + 0x180),
                                          local_28);
  *(uint *)(self + 0x184) = *(uint *)(self + 0x184) & 0x80000000;
  uVar4 = GSMBCharactor__CreateCharactor__0049c600(SMBCharactor, 5, 1);
  *(uint64_t *)(self + 0x188) = uVar4;
  this_02 = operator_new(0x2e0);
  /* try { // try from 004690ae to 004690b2 has its CatchHandler @ 0046919a */
  SMBReplay__SMBReplay(this_02);
  *(SMBReplay **)(self + 400) = this_02;
  /* try { // try from 004690cc to 0046914b has its CatchHandler @ 00469198 */
  FormatResourcePath("/Bosses/brownie.rpl", local_38);
  *(uint64_t *)(*(long *)(self + 0x188) + 0xa38) = *(uint64_t *)(self + 400);
  SMBReplay__ResetAll(*(SMBReplay **)(self + 400));
  SMBReplay__LoadReplayData(*(SMBReplayFileCreate **)(self + 400));
  if (*(int *)(SuperMeatBoy + 0x3a4) == 0) {
    SMBChapter__ThreadLoadBossOutro();
  }
  self[0x187] = (FactoryBoss)((byte)self[0x187] & 0x7f);
  if ((allocator *)(local_38[0] + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage) {
    LOCK();
    piVar1 = (int *)(local_38[0] + -8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 < 1) {
      std__string_Rep_M_destroy((allocator *)(local_38[0] + -0x18));
    }
  }
  return;
}

/* ======================================================================
 * FactoryBoss__Hit  (Ghidra `Hit` @ 004691c0)
 * Signature: uint8_t __stdcall Hit(void)
 * Class: FactoryBoss
 * Calls: (none)
 * Called by: (none)
 */
/* FactoryBoss__Hit() */

void FactoryBoss__Hit(void)

{
  return;
}
