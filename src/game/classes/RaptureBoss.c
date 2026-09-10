/* src/game/classes/RaptureBoss.c — 24 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "RaptureBoss.h"

/* ======================================================================
 * RaptureBoss__GetPosition  (Ghidra `GetPosition` @ 00483ac0)
 * Signature: uint8_t __thiscall GetPosition(RaptureBoss * self)
 * Class: RaptureBoss
 * Calls: (none)
 * Called by: (none)
 */
/* RaptureBoss__GetPosition() */

RaptureBoss *__thiscall RaptureBoss__GetPosition(RaptureBoss *self)

{
  *(uint32_t *)self = 0;
  *(uint32_t *)(self + 4) = 0;
  return self;
}

/* ======================================================================
 * RaptureBoss__GetCameraFocus  (Ghidra `GetCameraFocus` @ 00483ad0)
 * Signature: uint8_t __thiscall GetCameraFocus(RaptureBoss * self, FPUVector * arg1)
 * Class: RaptureBoss
 * Calls: `GSuperMeatBoy__getChar`, `MeatBoyCharactor__getRenderPos`
 * Called by: (none)
 */
/* RaptureBoss__GetCameraFocus(FPUVector*) */

void __thiscall RaptureBoss__GetCameraFocus(RaptureBoss *self, FPUVector *arg1)

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
 * RaptureBoss__OnDeath  (Ghidra `OnDeath` @ 00483b20)
 * Signature: uint8_t __thiscall OnDeath(RaptureBoss * self)
 * Class: RaptureBoss
 * Calls: `GSuperMeatBoy__getChar`, `MeatBoyCharactor__RemoveControls`, `ScreenFlashManager__SetFade`
 * Called by: (none)
 */
/* RaptureBoss__OnDeath() */

void __thiscall RaptureBoss__OnDeath(RaptureBoss *self)

{
  MeatBoyCharactor *this_00;

  if ((char)self[0x1db] < '\0') {
    return;
  }
  ScreenFlashManager__SetFade((ScreenFlashManager *)&ScreenFlash,
                              DAT_005bff40 /* R:6.199999809265137f */, (ColorTemplate *)::cWhite);
  this_00 = (MeatBoyCharactor *)GSuperMeatBoy__getChar(SuperMeatBoy, 1);
  MeatBoyCharactor__RemoveControls(this_00);
  self[0x1db] = (RaptureBoss)((byte)self[0x1db] | 0x80);
  return;
}

/* ======================================================================
 * RaptureBoss__Reset  (Ghidra `Reset` @ 00483be0)
 * Signature: uint8_t __thiscall Reset(RaptureBoss * self)
 * Class: RaptureBoss
 * Calls: `GSuperMeatBoy__getChar`, `MeatBoyCharactor__RestoreControls`, `SMBBoss__Reset`, `Vector2__operator_assign`
 * Called by: (none)
 */
/* RaptureBoss__Reset() */

void __thiscall RaptureBoss__Reset(RaptureBoss *self)

{
  long lVar1;
  long lVar2;
  MeatBoyCharactor *this_00;
  int iVar3;
  int iVar4;
  uint32_t local_48;
  uint32_t local_44;
  uint32_t local_38;
  uint32_t local_34;

  iVar4 = 0;
  do {
    iVar3 = 0;
    lVar1 = (long)iVar4 * 0x1b0;
    *(ushort *)(self + lVar1 + 900) = *(ushort *)(self + lVar1 + 900) & 0xf000;
    *(uint32_t *)(self + lVar1 + 0x2d8) = 0;
    *(uint *)(self + lVar1 + 900) = *(uint *)(self + lVar1 + 900) & 0xff000fff;
    *(uint32_t *)(self + lVar1 + 0x27c) = 1;
    local_38 = 0;
    local_34 = 0xc47a0000;
    Vector2__operator_assign((Vector2 *)(self + lVar1 + 0x280), (Vector2 *)&local_38);
    self[lVar1 + 0x387] = (RaptureBoss)((byte)self[lVar1 + 0x387] & 0x80);
    *(uint32_t *)(self + lVar1 + 0x388) = 0;
    do {
      lVar2 = (long)iVar3;
      iVar3 = iVar3 + 1;
      local_48 = 0;
      local_44 = 0xc47a0000;
      Vector2__operator_assign((Vector2 *)(self + lVar2 * 8 + lVar1 + 0x2dc), (Vector2 *)&local_48);
    } while (iVar3 != 0x15);
    iVar4 = iVar4 + 1;
  } while (iVar4 != 3);
  *(uint *)(self + 0x1d8) = *(uint *)(self + 0x1d8) & 0xc0000000;
  lVar1 = 0;
  do {
    *(uint32_t *)(self + lVar1 + 0x8d0) = 0;
    lVar1 = lVar1 + 0x1c;
  } while (lVar1 != 0x348);
  lVar1 = 0;
  do {
    *(uint64_t *)(self + lVar1 + 0x6f0) = 0;
    lVar1 = lVar1 + 0x18;
  } while (lVar1 != 0x1e0);
  self[0x1db] = (RaptureBoss)((byte)self[0x1db] & 0xbf);
  self[0x387] = (RaptureBoss)((byte)self[0x387] | 0x80);
  self[0x537] = (RaptureBoss)((byte)self[0x537] | 0x80);
  self[0x6e7] = (RaptureBoss)((byte)self[0x6e7] | 0x80);
  SMBBoss__Reset((SMBBoss *)self);
  self[0x1db] = (RaptureBoss)((byte)self[0x1db] & 0x3f);
  this_00 = (MeatBoyCharactor *)GSuperMeatBoy__getChar(SuperMeatBoy, 1);
  MeatBoyCharactor__RestoreControls(this_00);
  return;
}

/* ======================================================================
 * RaptureBoss__RaptureBoss  (Ghidra `~RaptureBoss` @ 00483d50)
 * Signature: uint8_t __thiscall ~RaptureBoss(RaptureBoss * self)
 * Class: RaptureBoss
 * Calls: `RaptureBoss__RaptureBoss__00483ed0`, `SMBBoss__SMBBoss__0048d920`, `SceneObject2D__SceneObject2D__0059b220`
 * Called by: (none)
 */
/* RaptureBoss__RaptureBoss__00483ed0() */

void __thiscall RaptureBoss__RaptureBoss__00483ed0(RaptureBoss *self)

{
  SceneObject2D *this_00;

  *(uint8_t ***)self = &PTR__RaptureBoss_005c1390;
  if (*(long **)(self + 0x170) != (long *)0x0) {
    /* try { // try from 00483d73 to 00483e4d has its CatchHandler @ 00483e86 */
    (**(code **)(**(long **)(self + 0x170) + 8))();
  }
  if (*(long **)(self + 0x178) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x178) + 8))();
  }
  if (*(long **)(self + 0x180) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x180) + 8))();
  }
  if (*(long **)(self + 0x188) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x188) + 8))();
  }
  if (*(long **)(self + 400) != (long *)0x0) {
    (**(code **)(**(long **)(self + 400) + 8))();
  }
  if (*(long **)(self + 0x198) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x198) + 8))();
  }
  if (*(long **)(self + 0x1a0) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x1a0) + 8))();
  }
  if (*(long **)(self + 0x1b8) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x1b8) + 8))();
  }
  if (*(long **)(self + 0x1c0) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x1c0) + 8))();
  }
  if (*(long **)(self + 0x1a8) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x1a8) + 8))();
  }
  if (*(long **)(self + 0x1b0) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x1b0) + 8))();
  }
  if (*(long **)(self + 0x1d0) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x1d0) + 8))();
  }
  if (*(long **)(self + 0x1c8) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x1c8) + 8))();
  }
  this_00 = (SceneObject2D *)(self + 0x6f0);
  do {
    this_00 = this_00 + -0x1b0;
    /* try { // try from 00483e6a to 00483e6e has its CatchHandler @ 00483eb0 */
    SceneObject2D__SceneObject2D__0059b220(this_00);
  } while ((SceneObject2D *)(self + 0x1e0) != this_00);
  SMBBoss__SMBBoss__0048d920((SMBBoss *)self);
  return;
}

/* ======================================================================
 * RaptureBoss__RaptureBoss__00483ed0  (Ghidra `~RaptureBoss` @ 00483ed0)
 * Signature: uint8_t __thiscall ~RaptureBoss(RaptureBoss * self)
 * Class: RaptureBoss
 * Calls: `operator_delete`
 * Called by: `RaptureBoss__RaptureBoss`
 */
/* RaptureBoss__RaptureBoss__00483ed0() */

void __thiscall RaptureBoss__RaptureBoss__00483ed0(RaptureBoss *self)

{
  RaptureBoss__dtor(self);
  operator_delete(self);
  return;
}

/* ======================================================================
 * RaptureBoss__RaptureBoss__00483ef0  (Ghidra `RaptureBoss` @ 00483ef0)
 * Signature: uint8_t __thiscall RaptureBoss(RaptureBoss * self)
 * Class: RaptureBoss
 * Calls: `CriticalSection__CriticalSection`, `FlashAnimationLibrary__FlashAnimationLibrary__00576680`, `FlashAnimationLibrary__GetMovieClip__005731d0`, `FormatResourcePath`, `GSuperMeatBoy__getChar`, `MeatBoyCharactor__RestoreControls`, `SMBBoss__Reset`, `SMBBoss__SMBBoss__0048d980`, `SMBChapter__ThreadLoadBossOutro`, `Sprint` (+2 more)
 * Called by: `CreateSMBBoss`
 */
/* WARNING: Removing unreachable block (ram,0x0048469e) */
/* RaptureBoss__RaptureBoss__00483ef0() */

void __thiscall RaptureBoss__RaptureBoss__00483ef0(RaptureBoss *self)

{
  int *piVar1;
  GSuperMeatBoy *pGVar2;
  char *pcVar3;
  FlashAnimationLibrary *this_00;
  uint64_t uVar4;
  long lVar5;
  MeatBoyCharactor *this_01;
  int iVar6;
  int iVar7;
  char local_78[32];
  uint8_t *local_58[2];
  uint32_t local_48;
  uint32_t local_44;
  uint32_t local_38;
  uint32_t local_34;

  SMBBoss__SMBBoss__0048d980((SMBBoss *)self);
  *(uint8_t ***)self = &PTR__RaptureBoss_005c1390;
  *(uint64_t *)(self + 0x228) = 0;
  *(uint32_t *)(self + 0x230) = 1;
  *(uint8_t ***)(self + 0x1e0) = &PTR__SceneObject2D_005dd3d0;
  /* try { // try from 00483f3a to 00483f3e has its CatchHandler @ 00484612 */
  CriticalSection__CriticalSection((CriticalSection *)(self + 0x238));
  uVar4 = vDefaultStart2D;
  *(uint32_t *)(self + 0x260) = 0;
  *(uint32_t *)(self + 0x264) = 0;
  *(uint32_t *)(self + 0x268) = 0x3f800000;
  *(uint32_t *)(self + 0x26c) = 0;
  *(uint32_t *)(self + 0x270) = 0;
  *(uint32_t *)(self + 0x274) = 0;
  *(uint32_t *)(self + 0x278) = 0;
  *(uint32_t *)(self + 0x27c) = 1;
  *(uint64_t *)(self + 0x280) = uVar4;
  *(uint64_t *)(self + 0x288) = uVar4;
  *(uint32_t *)(self + 0x290) = 0;
  *(uint32_t *)(self + 0x294) = 0;
  *(uint32_t *)(self + 0x298) = 0;
  *(uint32_t *)(self + 0x29c) = 0;
  *(uint32_t *)(self + 0x2a8) = 0;
  *(uint32_t *)(self + 0x2ac) = 0;
  *(uint32_t *)(self + 0x2b0) = 0x3f800000;
  *(uint32_t *)(self + 0x2b4) = 0x3f800000;
  *(uint32_t *)(self + 0x2b8) = 0;
  *(uint32_t *)(self + 700) = 0;
  *(uint32_t *)(self + 0x2c0) = 0;
  *(uint32_t *)(self + 0x2c4) = 0;
  *(uint32_t *)(self + 0x2c8) = 0;
  *(uint32_t *)(self + 0x2cc) = 0;
  *(uint32_t *)(self + 0x2d0) = 0;
  *(uint64_t *)(self + 0x3d8) = 0;
  *(uint32_t *)(self + 0x3e0) = 1;
  *(uint8_t ***)(self + 0x390) = &PTR__SceneObject2D_005dd3d0;
  /* try { // try from 00484068 to 0048406c has its CatchHandler @ 004846ea */
  CriticalSection__CriticalSection((CriticalSection *)(self + 1000));
  uVar4 = vDefaultStart2D;
  *(uint32_t *)(self + 0x410) = 0;
  *(uint32_t *)(self + 0x414) = 0;
  *(uint32_t *)(self + 0x418) = 0x3f800000;
  *(uint32_t *)(self + 0x41c) = 0;
  *(uint32_t *)(self + 0x420) = 0;
  *(uint32_t *)(self + 0x424) = 0;
  *(uint32_t *)(self + 0x428) = 0;
  *(uint32_t *)(self + 0x42c) = 1;
  *(uint64_t *)(self + 0x430) = uVar4;
  *(uint64_t *)(self + 0x438) = uVar4;
  *(uint32_t *)(self + 0x440) = 0;
  *(uint32_t *)(self + 0x444) = 0;
  *(uint32_t *)(self + 0x448) = 0;
  *(uint32_t *)(self + 0x44c) = 0;
  *(uint32_t *)(self + 0x458) = 0;
  *(uint32_t *)(self + 0x45c) = 0;
  *(uint32_t *)(self + 0x460) = 0x3f800000;
  *(uint32_t *)(self + 0x464) = 0x3f800000;
  *(uint32_t *)(self + 0x468) = 0;
  *(uint32_t *)(self + 0x46c) = 0;
  *(uint32_t *)(self + 0x470) = 0;
  *(uint32_t *)(self + 0x474) = 0;
  *(uint32_t *)(self + 0x478) = 0;
  *(uint32_t *)(self + 0x47c) = 0;
  *(uint32_t *)(self + 0x480) = 0;
  *(uint64_t *)(self + 0x588) = 0;
  *(uint32_t *)(self + 0x590) = 1;
  *(uint8_t ***)(self + 0x540) = &PTR__SceneObject2D_005dd3d0;
  /* try { // try from 00484196 to 0048419a has its CatchHandler @ 004846e3 */
  CriticalSection__CriticalSection((CriticalSection *)(self + 0x598));
  uVar4 = vDefaultStart2D;
  *(uint32_t *)(self + 0x5c0) = 0;
  *(uint32_t *)(self + 0x5c4) = 0;
  *(uint32_t *)(self + 0x5c8) = 0x3f800000;
  *(uint32_t *)(self + 0x5cc) = 0;
  *(uint32_t *)(self + 0x5d0) = 0;
  *(uint32_t *)(self + 0x5d4) = 0;
  *(uint32_t *)(self + 0x5d8) = 0;
  *(uint32_t *)(self + 0x5dc) = 1;
  *(uint64_t *)(self + 0x5e0) = uVar4;
  *(uint64_t *)(self + 0x5e8) = uVar4;
  *(uint32_t *)(self + 0x5f0) = 0;
  *(uint32_t *)(self + 0x5f4) = 0;
  *(uint32_t *)(self + 0x5f8) = 0;
  *(uint32_t *)(self + 0x5fc) = 0;
  *(uint32_t *)(self + 0x608) = 0;
  *(uint32_t *)(self + 0x60c) = 0;
  *(uint32_t *)(self + 0x610) = 0x3f800000;
  *(uint32_t *)(self + 0x614) = 0x3f800000;
  *(uint32_t *)(self + 0x618) = 0;
  *(uint32_t *)(self + 0x61c) = 0;
  *(uint32_t *)(self + 0x620) = 0;
  *(uint32_t *)(self + 0x624) = 0;
  *(uint32_t *)(self + 0x628) = 0;
  *(uint32_t *)(self + 0x62c) = 0;
  *(uint32_t *)(self + 0x630) = 0;
  local_58[0] = &DAT_008184c8 /* R:0.00016803004837129265f */;
  /* try { // try from 004842a9 to 004842ba has its CatchHandler @ 004846de */
  pcVar3 = (char *)FormatResourcePath("/Bosses/boss5.am", local_58);
  this_00 = operator_new(0xb0);
  /* try { // try from 004842c4 to 004842c8 has its CatchHandler @ 004846a9 */
  FlashAnimationLibrary__FlashAnimationLibrary__00576680(this_00, pcVar3);
  *(FlashAnimationLibrary **)(self + 0x20) = this_00;
  /* try { // try from 004842db to 004845f2 has its CatchHandler @ 004846de */
  Sprint("maggotbody%i", local_78, 0);
  uVar4 = FlashAnimationLibrary__GetMovieClip__005731d0(*(FlashAnimationLibrary **)(self + 0x20),
                                                        local_78);
  *(uint64_t *)(self + 0x170) = uVar4;
  Sprint("maggotbody%i", local_78, 1);
  uVar4 = FlashAnimationLibrary__GetMovieClip__005731d0(*(FlashAnimationLibrary **)(self + 0x20),
                                                        local_78);
  *(uint64_t *)(self + 0x178) = uVar4;
  Sprint("maggotbody%i", local_78, 2);
  uVar4 = FlashAnimationLibrary__GetMovieClip__005731d0(*(FlashAnimationLibrary **)(self + 0x20),
                                                        local_78);
  *(uint64_t *)(self + 0x180) = uVar4;
  Sprint("maggotbody%i", local_78, 3);
  uVar4 = FlashAnimationLibrary__GetMovieClip__005731d0(*(FlashAnimationLibrary **)(self + 0x20),
                                                        local_78);
  *(uint64_t *)(self + 0x188) = uVar4;
  Sprint("maggotbody%i", local_78, 4);
  uVar4 = FlashAnimationLibrary__GetMovieClip__005731d0(*(FlashAnimationLibrary **)(self + 0x20),
                                                        local_78);
  *(uint64_t *)(self + 400) = uVar4;
  Sprint("maggotbody%i", local_78, 5);
  uVar4 = FlashAnimationLibrary__GetMovieClip__005731d0(*(FlashAnimationLibrary **)(self + 0x20),
                                                        local_78);
  *(uint64_t *)(self + 0x198) = uVar4;
  Sprint("maggotbody%i", local_78, 6);
  uVar4 = FlashAnimationLibrary__GetMovieClip__005731d0(*(FlashAnimationLibrary **)(self + 0x20),
                                                        local_78);
  *(uint64_t *)(self + 0x1a0) = uVar4;
  uVar4 = FlashAnimationLibrary__GetMovieClip__005731d0(*(FlashAnimationLibrary **)(self + 0x20),
                                                        "attack1");
  *(uint64_t *)(self + 0x1b8) = uVar4;
  uVar4 = FlashAnimationLibrary__GetMovieClip__005731d0(*(FlashAnimationLibrary **)(self + 0x20),
                                                        "enterground");
  *(uint64_t *)(self + 0x1c0) = uVar4;
  uVar4 = FlashAnimationLibrary__GetMovieClip__005731d0(*(FlashAnimationLibrary **)(self + 0x20),
                                                        "burst");
  *(uint64_t *)(self + 0x1a8) = uVar4;
  uVar4 = FlashAnimationLibrary__GetMovieClip__005731d0(*(FlashAnimationLibrary **)(self + 0x20),
                                                        "burst12");
  *(uint64_t *)(self + 0x1b0) = uVar4;
  uVar4 = FlashAnimationLibrary__GetMovieClip__005731d0(*(FlashAnimationLibrary **)(self + 0x20),
                                                        "maggotbullet");
  *(uint64_t *)(self + 0x1d0) = uVar4;
  uVar4 = FlashAnimationLibrary__GetMovieClip__005731d0(*(FlashAnimationLibrary **)(self + 0x20),
                                                        "death");
  *(uint64_t *)(self + 0x1c8) = uVar4;
  iVar7 = 0;
  do {
    lVar5 = (long)iVar7 * 0x1b0;
    *(ushort *)(self + lVar5 + 900) = *(ushort *)(self + lVar5 + 900) & 0xf000;
    *(uint32_t *)(self + lVar5 + 0x2d8) = 0;
    *(uint *)(self + lVar5 + 900) = *(uint *)(self + lVar5 + 900) & 0xff000fff;
    *(uint32_t *)(self + lVar5 + 0x27c) = 1;
    local_38 = 0;
    local_34 = 0xc47a0000;
    Vector2__operator_assign((Vector2 *)(self + lVar5 + 0x280), (Vector2 *)&local_38);
    self[lVar5 + 0x387] = (RaptureBoss)((byte)self[lVar5 + 0x387] & 0x80);
    *(uint32_t *)(self + lVar5 + 0x388) = 0;
    iVar6 = 0;
    do {
      local_48 = 0;
      local_44 = 0xc47a0000;
      Vector2__operator_assign((Vector2 *)(self + (long)iVar6 * 8 + lVar5 + 0x2dc),
                               (Vector2 *)&local_48);
      iVar6 = iVar6 + 1;
    } while (iVar6 != 0x15);
    iVar7 = iVar7 + 1;
  } while (iVar7 != 3);
  *(uint *)(self + 0x1d8) = *(uint *)(self + 0x1d8) & 0xc0000000;
  lVar5 = 0;
  do {
    *(uint32_t *)(self + lVar5 + 0x8d0) = 0;
    lVar5 = lVar5 + 0x1c;
  } while (lVar5 != 0x348);
  lVar5 = 0;
  do {
    *(uint64_t *)(self + lVar5 + 0x6f0) = 0;
    lVar5 = lVar5 + 0x18;
  } while (lVar5 != 0x1e0);
  self[0x1db] = (RaptureBoss)((byte)self[0x1db] & 0xbf);
  self[0x387] = (RaptureBoss)((byte)self[0x387] | 0x80);
  self[0x537] = (RaptureBoss)((byte)self[0x537] | 0x80);
  self[0x6e7] = (RaptureBoss)((byte)self[0x6e7] | 0x80);
  SMBBoss__Reset((SMBBoss *)self);
  self[0x1db] = (RaptureBoss)((byte)self[0x1db] & 0x3f);
  this_01 = (MeatBoyCharactor *)GSuperMeatBoy__getChar(SuperMeatBoy, 1);
  MeatBoyCharactor__RestoreControls(this_01);
  pGVar2 = SuperMeatBoy;
  *(uint32_t *)(self + 0x16c) = 3;
  if (*(int *)(pGVar2 + 0x3a4) == 0) {
    SMBChapter__ThreadLoadBossOutro();
  }
  if ((allocator *)(local_58[0] + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage) {
    LOCK();
    piVar1 = (int *)(local_58[0] + -8);
    iVar7 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar7 < 1) {
      std__string_Rep_M_destroy((allocator *)(local_58[0] + -0x18));
    }
  }
  return;
}

/* ======================================================================
 * RaptureBoss__AddMaggotEffect  (Ghidra `AddMaggotEffect` @ 00484720)
 * Signature: uint8_t __thiscall AddMaggotEffect(RaptureBoss * self, FlashLibraryInstance * arg1, Vector2 * arg2)
 * Class: RaptureBoss
 * Calls: `Vector2__operator_assign`
 * Called by: (none)
 */
/* RaptureBoss__AddMaggotEffect(FlashLibraryInstance*, Vector2 const&) */

void __thiscall RaptureBoss__AddMaggotEffect(RaptureBoss *self, FlashLibraryInstance *arg1,
                                             Vector2 *arg2)

{
  int iVar1;
  long lVar2;
  RaptureBoss *pRVar3;

  if (*(long *)(self + 0x6f0) == 0) {
    iVar1 = 0;
  } else {
    pRVar3 = self + 0x708;
    iVar1 = 1;
    while (*(long *)pRVar3 != 0) {
      iVar1 = iVar1 + 1;
      pRVar3 = pRVar3 + 0x18;
      if (iVar1 == 0x14) {
        return;
      }
    }
  }
  lVar2 = (long)iVar1 * 0x18;
  *(FlashLibraryInstance **)(self + lVar2 + 0x6f0) = arg1;
  Vector2__operator_assign((Vector2 *)(self + lVar2 + 0x6f8), arg2);
  *(uint32_t *)(self + lVar2 + 0x700) = 0;
  return;
}

/* ======================================================================
 * RaptureBoss__RenderMaggotEffects  (Ghidra `RenderMaggotEffects` @ 004847a0)
 * Signature: uint8_t __thiscall RenderMaggotEffects(RaptureBoss * self)
 * Class: RaptureBoss
 * Calls: `FlashLibraryInstance__IsPlaying`
 * Called by: (none)
 */
/* RaptureBoss__RenderMaggotEffects() */

void __thiscall RaptureBoss__RenderMaggotEffects(RaptureBoss *self)

{
  int iVar1;
  RaptureBoss *pRVar2;
  int iVar3;

  iVar3 = 0x14;
  pRVar2 = self + 0x6f0;
  do {
    if (*(long *)pRVar2 != 0) {
      *(uint32_t *)(*(long *)pRVar2 + 0x58) = *(uint32_t *)(pRVar2 + 0x10);
      *(uint32_t *)(*(long *)pRVar2 + 0x30) = *(uint32_t *)(pRVar2 + 8);
      *(uint32_t *)(*(long *)pRVar2 + 0x34) = *(uint32_t *)(pRVar2 + 0xc);
      (**(code **)(**(long **)pRVar2 + 0x10))();
      *(uint32_t *)(pRVar2 + 0x10) = *(uint32_t *)(*(FlashLibraryInstance **)pRVar2 + 0x58);
      iVar1 = FlashLibraryInstance__IsPlaying(*(FlashLibraryInstance **)pRVar2);
      if (iVar1 == 0) {
        *(long *)pRVar2 = 0;
      }
    }
    pRVar2 = pRVar2 + 0x18;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}

/* ======================================================================
 * RaptureBoss__UpdateMaggot  (Ghidra `UpdateMaggot` @ 00484810)
 * Signature: uint8_t __thiscall UpdateMaggot(RaptureBoss * self, Maggot * arg1)
 * Class: RaptureBoss
 * Calls: `Apply2DPhysics`, `GSuperMeatBoy__getChar`, `GetRandomINT`, `SMBPalette__ObstacleCollision`, `Vector2__operator_assign`, `Vector2__operator_div_assign__005be2c0`, `Vector2__operator_minus__005be180`, `Vector2__operator_mul__005be200`, `sincos`
 * Called by: (none)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RaptureBoss__UpdateMaggot(RaptureBoss__Maggot) */

void __thiscall RaptureBoss__UpdateMaggot(RaptureBoss *self, Maggot *arg1)

{
  GSuperMeatBoy *this_00;
  ushort uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  RaptureBoss *pRVar6;
  float fVar7;
  float fVar8;
  double dVar9;
  double local_98;
  double local_90;
  Bounds local_88[4];
  uint32_t local_84;
  uint32_t local_80;
  uint32_t local_7c;
  uint32_t local_78;
  uint32_t local_74;
  Vector2 local_68[16];
  Vector2 local_58[16];
  uint32_t local_48;
  uint32_t local_44;
  uint32_t local_38;
  uint32_t local_34;

  fVar7 = fOneFrameTimeStep;
  iVar2 = *(int *)(arg1 + 0xf8);
  fVar8 = *(float *)(arg1 + 0x1a8) - fOneFrameTimeStep;
  *(float *)(arg1 + 0x1a8) = fVar8;
  this_00 = SuperMeatBoy;
  if (iVar2 == 0) {
    iVar2 = 0;
    GetRandomINT(0, 100);
    *(ushort *)(arg1 + 0x1a4) = *(ushort *)(arg1 + 0x1a4) & 0xf000;
    *(uint *)(arg1 + 0x1a4) = *(uint *)(arg1 + 0x1a4) & 0xff000fff;
    *(uint32_t *)(arg1 + 0xf8) = 0;
    *(uint32_t *)(arg1 + 0x9c) = 1;
    local_38 = 0;
    local_34 = 0xc47a0000;
    Vector2__operator_assign((Vector2 *)(arg1 + 0xa0), (Vector2 *)&local_38);
    arg1[0x1a7] = (Maggot)((byte)arg1[0x1a7] & 0x80);
    *(uint32_t *)(arg1 + 0x1a8) = 0;
    do {
      lVar4 = (long)iVar2;
      iVar2 = iVar2 + 1;
      local_48 = 0;
      local_44 = 0xc47a0000;
      Vector2__operator_assign((Vector2 *)(arg1 + lVar4 * 8 + 0xfc), (Vector2 *)&local_48);
    } while (iVar2 != 0x15);
    if ((char)arg1[0x1a7] < '\0') {
      iVar2 = GetRandomINT(0x5dc, 0x708);
      *(float *)(arg1 + 0x1a8) = (float)iVar2 * DAT_005c01d0 /* R:0.0010000000474974513f */;
    } else {
      iVar2 = GetRandomINT(500, 0x4b0);
      *(float *)(arg1 + 0x1a8) = (float)iVar2 * DAT_005c01d0 /* R:0.0010000000474974513f */;
    }
    *(uint32_t *)(arg1 + 0xf8) = 3;
    iVar2 = GetRandomINT(0xffffffe2, 0x1e);
    lVar4 = GSuperMeatBoy__getChar(SuperMeatBoy, 1);
    fVar7 = (float)iVar2 + *(float *)(lVar4 + 0xa0);
    *(float *)(arg1 + 0xa0) = fVar7;
    *(uint32_t *)(arg1 + 0xa4) = *(uint32_t *)(self + 0x2c);
    if (*(float *)(self + 0xa8) <= fVar7) {
      fVar7 = *(float *)(self + 0xa8);
    }
    if (fVar7 <= *(float *)(self + 0x88)) {
      fVar7 = *(float *)(self + 0x88);
    }
    *(ushort *)(arg1 + 0x1a4) = *(ushort *)(arg1 + 0x1a4) & 0xf000 | 1;
    *(uint32_t *)(arg1 + 0xbc) = 0;
    *(uint32_t *)(arg1 + 0xb8) = 0;
    *(uint32_t *)(arg1 + 0xf0) = 0;
    *(uint32_t *)(arg1 + 0xec) = 0;
    *(uint32_t *)(arg1 + 0x1ac) = 0;
    *(float *)(arg1 + 0xa0) = fVar7;
    *(uint *)(arg1 + 0x1a4) = *(uint *)(arg1 + 0x1a4) & 0xff000fff | 0x1000;
  } else {
    if (iVar2 == 3) {
      if (0.0 <= fVar8) {
        return;
      }
      iVar2 = GetRandomINT(0, 100);
      if ((((((0x32 < iVar2) && (iVar2 = *(int *)(self + 0x2d8), iVar2 != 1)) && (iVar2 != 10)) &&
            (((iVar2 != 0xc && (iVar2 = *(int *)(self + 0x488), iVar2 != 10)) &&
              ((iVar2 != 1 &&
                ((iVar2 != 0xc && (iVar2 = *(int *)(self + 0x638), iVar2 != 10)))))))) &&
           (iVar2 != 1)) &&
          (iVar2 != 0xc)) {
        *(uint32_t *)(arg1 + 0xf8) = 1;
        return;
      }
      *(uint32_t *)(arg1 + 0xf8) = 4;
      return;
    }
    if (iVar2 == 8) {
      *(float *)(arg1 + 0xa4) = DAT_005c13fc /* R:20.0f */ + *(float *)(self + 0x2c);
      lVar4 = GSuperMeatBoy__getChar(this_00, 1);
      fVar7 = *(float *)(arg1 + 0xa0);
      if (fVar7 < *(float *)(lVar4 + 0xa0)) {
        fVar7 = fVar7 - DAT_005c1400 /* R:100.0f */;
        *(uint32_t *)(arg1 + 0xb8) = 0x43fa0000;
        *(float *)(arg1 + 0xa0) = fVar7;
      } else {
        fVar7 = fVar7 + DAT_005c1400 /* R:100.0f */;
        *(uint32_t *)(arg1 + 0xb8) = 0xc3fa0000;
        *(float *)(arg1 + 0xa0) = fVar7;
      }
      if (*(float *)(self + 0xa8) <= fVar7) {
        fVar7 = *(float *)(self + 0xa8);
      }
      if (fVar7 <= *(float *)(self + 0x88)) {
        fVar7 = *(float *)(self + 0x88);
      }
      *(float *)(arg1 + 0xa0) = fVar7;
      Apply2DPhysics((SceneObject2D *)arg1, fOneFrameTimeStep);
      Vector2__operator_assign(
          (Vector2 *)(arg1 + (long)((short)(*(short *)(arg1 + 0x1a4) << 4) >> 4) * 8 + 0xfc),
          (Vector2 *)(arg1 + 0xa0));
      *(uint32_t *)(arg1 + 0xf8) = 7;
    } else if (iVar2 == 7) {
      Apply2DPhysics((SceneObject2D *)arg1, fVar7);
      Vector2__operator_assign(
          (Vector2 *)(arg1 + (long)((short)(*(short *)(arg1 + 0x1a4) << 4) >> 4) * 8 + 0xfc),
          (Vector2 *)(arg1 + 0xa0));
      fVar7 = *(float *)(arg1 + 0xa0);
      if ((*(float *)(self + 0xa8) <= fVar7 && fVar7 != *(float *)(self + 0xa8)) ||
          (fVar7 < *(float *)(self + 0x88))) {
        *(uint32_t *)(arg1 + 0xf8) = 9;
      }
    } else if (iVar2 == 9) {
      *(float *)(arg1 + 0xf0) = *(float *)(arg1 + 0xf0) - DAT_005c01c4 /* R:1000.0f */;
      Apply2DPhysics((SceneObject2D *)arg1, fVar7);
      Vector2__operator_assign(
          (Vector2 *)(arg1 + (long)((short)(*(short *)(arg1 + 0x1a4) << 4) >> 4) * 8 + 0xfc),
          (Vector2 *)(arg1 + 0xa0));
    } else if (iVar2 == 10) {
      *(uint32_t *)(arg1 + 0xbc) = 0x447a0000;
      Apply2DPhysics((SceneObject2D *)arg1, fVar7);
      Vector2__operator_assign(
          (Vector2 *)(arg1 + (long)((short)(*(short *)(arg1 + 0x1a4) << 4) >> 4) * 8 + 0xfc),
          (Vector2 *)(arg1 + 0xa0));
      *(uint32_t *)(arg1 + 0xf8) = 0xb;
      if ((*(uint *)(self + 0x1d8) & 0x3fffffff) != 0) {
        local_74 = *(uint32_t *)(self + 0xcc);
        local_78 = *(uint32_t *)(arg1 + 0xa0);
        iVar2 = 6;
        fVar7 = 0.0;
        do {
          pRVar6 = self + 0x8ec;
          iVar3 = 1;
          if (*(int *)(self + 0x8d0) == 0) {
            iVar3 = 0;
          } else {
            while (*(int *)pRVar6 != 0) {
              iVar3 = iVar3 + 1;
              pRVar6 = pRVar6 + 0x1c;
              if (iVar3 == 0x1e)
                goto LAB_00484c00;
            }
          }
          pRVar6 = self + (long)iVar3 * 0x1c + 0x8d0;
          sincos((double)fVar7, &local_90, &local_98);
          dVar9 = _DAT_005c1410 /* R:0.0f */ * local_98;
          *(float *)(pRVar6 + 0x10) = (float)(local_90 * _DAT_005c1410 /* R:0.0f */);
          *(float *)(pRVar6 + 0xc) = (float)dVar9;
          Vector2__operator_assign((Vector2 *)(pRVar6 + 4), (Vector2 *)&local_78);
          *(uint32_t *)pRVar6 = 1;
          iVar2 = iVar2 + -1;
          *(uint32_t *)(pRVar6 + 0x18) = 0;
          *(float *)(pRVar6 + 0x14) = fVar7;
          fVar7 = fVar7 + DAT_005c1404 /* R:0.6283185482025146f */;
        } while (iVar2 != 0);
      }
    } else {
      if (1 < iVar2 - 0xbU) {
        return;
      }
      lVar4 = GSuperMeatBoy__getChar(SuperMeatBoy, 1);
      Vector2__operator_minus__005be180(local_68, (Vector2 *)(lVar4 + 0xa0));
      fVar7 = (float)Vector2__Length(local_68);
      if (DAT_005bf760 /* R:0.0f */ < fVar7) {
        Vector2__operator_div_assign__005be2c0(local_68, fVar7);
      }
      Vector2__operator_mul__005be200(local_58, DAT_005be5e0 /* R:500.0f */);
      Vector2__operator_assign((Vector2 *)(arg1 + 0xec), local_58);
      *(float *)(arg1 + 0xf0) = *(float *)(arg1 + 0xf0) - DAT_005c01c4 /* R:1000.0f */;
      Apply2DPhysics((SceneObject2D *)arg1, fOneFrameTimeStep);
      Vector2__operator_assign(
          (Vector2 *)(arg1 + (long)((short)(*(short *)(arg1 + 0x1a4) << 4) >> 4) * 8 + 0xfc),
          (Vector2 *)(arg1 + 0xa0));
      local_84 = 0x41a00000;
      local_80 = 0;
      local_7c = 0;
      local_88[0] = (Bounds)0x11;
      Vector2__operator_assign((Vector2 *)&local_80, (Vector2 *)(arg1 + 0xa0));
      if ((*(int *)(arg1 + 0xf8) == 0xb) &&
          (((fVar7 = *(float *)(arg1 + 0xa0),
             fVar7 < *(float *)(self + 0x88) ||
                 (*(float *)(self + 0xa8) <= fVar7 && fVar7 != *(float *)(self + 0xa8))) &&
            (iVar2 = SMBPalette__ObstacleCollision(GSuperMeatBoy__pLevelPalette,
                                                   (SceneObject2D *)arg1, local_88),
             iVar2 == 1)))) {
        *(uint32_t *)(arg1 + 0xf8) = 5;
        *(uint32_t *)(arg1 + 0x1ac) = 0;
        uVar5 = *(uint *)(self + 0x1d8) + 1 & 0x3fffffff;
        *(uint *)(self + 0x1d8) = *(uint *)(self + 0x1d8) & 0xc0000000 | uVar5;
        if (uVar5 == 3) {
          (**(code **)(*(long *)self + 0x20))(self);
        }
      }
    }
  LAB_00484c00:
    uVar1 = (short)((((short)((uint) * (uint32_t *)(arg1 + 0x1a4) >> 8) >> 4) + 1) * 0x10) >> 4;
    *(ushort *)(arg1 + 0x1a4) = *(ushort *)(arg1 + 0x1a4) & 0xf000 |
                                (short)(*(ushort *)(arg1 + 0x1a4) * 0x10 + 0x10) >> 4 & 0xfffU;
    uVar5 = *(uint *)(arg1 + 0x1a4);
    *(uint *)(arg1 + 0x1a4) = uVar5 & 0xff000fff | (uVar1 & 0xfff) << 0xc;
    if (0x15 < (uVar1 & 0xfff)) {
      *(uint *)(arg1 + 0x1a4) = uVar5 & 0xff000fff | 0x15000;
    }
  }
  if ((*(ushort *)(arg1 + 0x1a4) & 0xfff) != 0x15) {
    return;
  }
  *(ushort *)(arg1 + 0x1a4) = *(ushort *)(arg1 + 0x1a4) & 0xf000;
  return;
}

/* ======================================================================
 * RaptureBoss__Update  (Ghidra `Update` @ 00485000)
 * Signature: uint8_t __thiscall Update(RaptureBoss * self)
 * Class: RaptureBoss
 * Calls: `SMBChapter__PlayBossOutro`, `SMBRaptureBossOutroFinished`, `TileLevel__IsPositionWithinGrid`, `Vector2__operator_mul__005be200`, `Vector2__operator_plus_assign`
 * Called by: (none)
 */
/* RaptureBoss__Update() */

void __thiscall RaptureBoss__Update(RaptureBoss *self)

{
  RaptureBoss RVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  RaptureBoss *pRVar5;
  Vector2 aVStack_38[24];

  RVar1 = self[0x1db];
  if (((byte)RVar1 & 0x40) == 0) {
    if ((char)RVar1 < '\0') {
      lVar3 = 0;
      iVar4 = 0;
      do {
        if (*(long *)(self + lVar3 + 0x6f0) != 0) {
          iVar4 = iVar4 + 1;
        }
        lVar3 = lVar3 + 0x18;
      } while (lVar3 != 0x1e0);
      if (iVar4 == 0) {
        self[0x1db] = (RaptureBoss)((byte)RVar1 | 0x40);
        if (*(int *)(SuperMeatBoy + 0x3a4) != 0) {
          return;
        }
        SMBChapter__PlayBossOutro((SMBChapter *)(SuperMeatBoy + 0x90), SMBRaptureBossOutroFinished,
                                  0);
        return;
      }
    }
    if (*(int *)(self + 0x2d8) != 6) {
      UpdateMaggot(self, (Maggot *)(self + 0x1e0));
    }
    if (*(int *)(self + 0x488) != 6) {
      UpdateMaggot(self, (Maggot *)(self + 0x390));
    }
    if (*(int *)(self + 0x638) != 6) {
      UpdateMaggot(self, (Maggot *)(self + 0x540));
    }
    pRVar5 = self + 0x8d0;
    iVar4 = 0;
    do {
      while (*(int *)pRVar5 == 1) {
        Vector2__operator_mul__005be200(aVStack_38, fOneFrameTimeStep);
        Vector2__operator_plus_assign((Vector2 *)(self + (long)iVar4 * 0x1c + 0x8d4), aVStack_38);
        iVar2 = TileLevel__IsPositionWithinGrid(*(TileLevel **)(SuperMeatBoy + 0x40),
                                                (Vector2 *)(self + (long)iVar4 * 0x1c + 0x8d4));
        if (iVar2 != 0)
          break;
        iVar4 = iVar4 + 1;
        *(int *)pRVar5 = 0;
        pRVar5 = pRVar5 + 0x1c;
        if (iVar4 == 0x1e) {
          return;
        }
      }
      iVar4 = iVar4 + 1;
      pRVar5 = pRVar5 + 0x1c;
    } while (iVar4 != 0x1e);
  }
  return;
}

/* ======================================================================
 * RaptureBoss__ShootMaggots  (Ghidra `ShootMaggots` @ 00485180)
 * Signature: uint8_t __thiscall ShootMaggots(RaptureBoss * self, Vector2 * arg1)
 * Class: RaptureBoss
 * Calls: `Vector2__operator_assign`, `sincos`
 * Called by: (none)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RaptureBoss__ShootMaggots(Vector2 const&) */

void __thiscall RaptureBoss__ShootMaggots(RaptureBoss *self, Vector2 *arg1)

{
  int iVar1;
  RaptureBoss *pRVar2;
  int iVar3;
  float fVar4;
  double dVar5;
  double local_38;
  double local_30[2];

  fVar4 = 0.0;
  iVar3 = 6;
  do {
    pRVar2 = self + 0x8ec;
    iVar1 = 1;
    if (*(int *)(self + 0x8d0) == 0) {
      iVar1 = 0;
    } else {
      while (*(int *)pRVar2 != 0) {
        iVar1 = iVar1 + 1;
        pRVar2 = pRVar2 + 0x1c;
        if (iVar1 == 0x1e) {
          return;
        }
      }
    }
    pRVar2 = self + (long)iVar1 * 0x1c + 0x8d0;
    sincos((double)fVar4, local_30, &local_38);
    dVar5 = _DAT_005c1410 /* R:0.0f */ * local_38;
    *(float *)(pRVar2 + 0x10) = (float)(local_30[0] * _DAT_005c1410 /* R:0.0f */);
    *(float *)(pRVar2 + 0xc) = (float)dVar5;
    Vector2__operator_assign((Vector2 *)(pRVar2 + 4), arg1);
    *(uint32_t *)pRVar2 = 1;
    iVar3 = iVar3 + -1;
    *(uint32_t *)(pRVar2 + 0x18) = 0;
    *(float *)(pRVar2 + 0x14) = fVar4;
    fVar4 = fVar4 + DAT_005c1404 /* R:0.6283185482025146f */;
  } while (iVar3 != 0);
  return;
}

/* ======================================================================
 * RaptureBoss__UpdateMaggotShots  (Ghidra `UpdateMaggotShots` @ 00485290)
 * Signature: uint8_t __thiscall UpdateMaggotShots(RaptureBoss * self)
 * Class: RaptureBoss
 * Calls: `TileLevel__IsPositionWithinGrid`, `Vector2__operator_mul__005be200`, `Vector2__operator_plus_assign`
 * Called by: (none)
 */
/* RaptureBoss__UpdateMaggotShots() */

void __thiscall RaptureBoss__UpdateMaggotShots(RaptureBoss *self)

{
  int iVar1;
  int iVar2;
  RaptureBoss *pRVar3;
  Vector2 aVStack_38[24];

  pRVar3 = self + 0x8d0;
  iVar2 = 0;
  do {
    if (*(int *)pRVar3 == 1) {
      Vector2__operator_mul__005be200(aVStack_38, fOneFrameTimeStep);
      Vector2__operator_plus_assign((Vector2 *)(self + (long)iVar2 * 0x1c + 0x8d4), aVStack_38);
      iVar1 = TileLevel__IsPositionWithinGrid(*(TileLevel **)(SuperMeatBoy + 0x40),
                                              (Vector2 *)(self + (long)iVar2 * 0x1c + 0x8d4));
      if (iVar1 == 0) {
        *(int *)pRVar3 = 0;
      }
    }
    pRVar3 = pRVar3 + 0x1c;
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0x1e);
  return;
}

/* ======================================================================
 * RaptureBoss__MaggotBulletCollision  (Ghidra `MaggotBulletCollision` @ 00485340)
 * Signature: uint8_t __thiscall MaggotBulletCollision(RaptureBoss * self, Bounds * arg1)
 * Class: RaptureBoss
 * Calls: `IsBoundsTouchingBounds`, `Vector2__operator_assign`
 * Called by: (none)
 */
/* RaptureBoss__MaggotBulletCollision(Bounds const*) */

uint64_t __thiscall RaptureBoss__MaggotBulletCollision(RaptureBoss *self, Bounds *arg1)

{
  int iVar1;
  int iVar2;
  RaptureBoss *pRVar3;
  Bounds local_38[4];
  uint32_t local_34;
  uint32_t local_30;
  uint32_t local_2c;

  pRVar3 = self + 0x8d0;
  iVar2 = 0;
  local_34 = 0x41200000;
  local_30 = 0;
  local_2c = 0;
  local_38[0] = (Bounds)0x11;
  do {
    if (*(int *)pRVar3 == 1) {
      Vector2__operator_assign((Vector2 *)&local_30,
                               (Vector2 *)(self + (long)iVar2 * 0x1c + 0x8d4));
      iVar1 = IsBoundsTouchingBounds(local_38, arg1);
      if (iVar1 == 1) {
        return 1;
      }
    }
    iVar2 = iVar2 + 1;
    pRVar3 = pRVar3 + 0x1c;
  } while (iVar2 != 0x1e);
  return 0;
}

/* ======================================================================
 * RaptureBoss__RenderMaggotShots  (Ghidra `RenderMaggotShots` @ 004853f0)
 * Signature: uint8_t __thiscall RenderMaggotShots(RaptureBoss * self)
 * Class: RaptureBoss
 * Calls: (none)
 * Called by: (none)
 */
/* RaptureBoss__RenderMaggotShots() */

void __thiscall RaptureBoss__RenderMaggotShots(RaptureBoss *self)

{
  RaptureBoss *pRVar1;

  pRVar1 = self + 0x8e8;
  do {
    while (*(int *)(pRVar1 + -0x18) != 1) {
      pRVar1 = pRVar1 + 0x1c;
      if (pRVar1 == self + 0xc30) {
        return;
      }
    }
    *(uint32_t *)(*(long *)(self + 0x1d0) + 0x58) = *(uint32_t *)pRVar1;
    *(uint32_t *)(*(long *)(self + 0x1d0) + 0x30) = *(uint32_t *)(pRVar1 + -0x14);
    *(uint32_t *)(*(long *)(self + 0x1d0) + 0x34) = *(uint32_t *)(pRVar1 + -0x10);
    *(uint32_t *)(*(long *)(self + 0x1d0) + 0x48) = *(uint32_t *)(pRVar1 + -4);
    *(uint32_t *)(*(long *)(self + 0x1d0) + 0x4c) = *(uint32_t *)(pRVar1 + -4);
    if (*(float *)(pRVar1 + -4) <= DAT_005c1408 /* R:1.5707963705062866f */) {
      *(uint32_t *)(*(long *)(self + 0x1d0) + 0x44) = 0x3f800000;
    } else {
      *(uint32_t *)(*(long *)(self + 0x1d0) + 0x44) = 0xbf800000;
    }
    (**(code **)(**(long **)(self + 0x1d0) + 0x10))();
    *(uint32_t *)pRVar1 = *(uint32_t *)(*(long *)(self + 0x1d0) + 0x58);
    pRVar1 = pRVar1 + 0x1c;
  } while (pRVar1 != self + 0xc30);
  return;
}

/* ======================================================================
 * RaptureBoss__RenderMaggot  (Ghidra `RenderMaggot` @ 004854c0)
 * Signature: uint8_t __thiscall RenderMaggot(RaptureBoss * self, Maggot * arg1)
 * Class: RaptureBoss
 * Calls: `FlashLibraryInstance__IsPlaying`, `GetRandomINT`, `SMBCamera__ScreenShake`, `Vector2__operator_assign`
 * Called by: (none)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RaptureBoss__RenderMaggot(RaptureBoss__Maggot) */

void __thiscall RaptureBoss__RenderMaggot(RaptureBoss *self, Maggot *arg1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  RaptureBoss *pRVar10;
  int iVar11;
  long lVar12;
  float fVar13;
  uint32_t local_78;
  uint32_t local_74;
  uint32_t local_68;
  uint32_t local_64;
  uint32_t local_58;
  uint32_t local_54;
  uint32_t local_48;
  uint32_t local_44;

  iVar7 = *(int *)(arg1 + 0xf8);
  if ((((iVar7 - 10U < 3) || (iVar7 == 5)) || (iVar7 == 7)) || ((iVar7 == 8 || (iVar7 == 9)))) {
    iVar11 = 6;
    bVar2 = false;
    iVar4 = ((short)(*(short *)(arg1 + 0x1a4) << 4) >> 4) + -1;
    iVar7 = 0x14;
    if (-1 < iVar4) {
      iVar7 = iVar4;
    }
    lVar8 = 0;
    iVar4 = 0;
  LAB_00485520:
    do {
      if (*(uint *)(pBallIndices + lVar8 + 0x18) <= (uint)((*(int *)(arg1 + 0x1a4) << 8) >> 0x14)) {
        iVar5 = iVar7 - *(uint *)(pBallIndices + lVar8 + 0x18);
        iVar6 = iVar5 + 0x15;
        if (-1 < iVar5) {
          iVar6 = iVar5;
        }
        lVar12 = (long)iVar6;
        if ((*(float *)(self + 0x2c) <= *(float *)(arg1 + lVar12 * 8 + 0x100) &&
             *(float *)(arg1 + lVar12 * 8 + 0x100) != *(float *)(self + 0x2c)) ||
            (*(int *)(arg1 + 0xf8) == 5)) {
          iVar4 = iVar4 + 1;
          *(uint32_t *)(*(long *)(self + lVar8 * 2 + 0x1a0) + 0x30) =
              *(uint32_t *)(arg1 + (lVar12 + 0x1e) * 8 + 0xc);
          *(uint32_t *)(*(long *)(self + lVar8 * 2 + 0x1a0) + 0x34) =
              *(uint32_t *)(arg1 + (lVar12 + 0x1e) * 8 + 0x10);
          if (iVar11 == 0) {
            if (0.0 < *(float *)(arg1 + 0xb8)) {
              local_78 = 0xbf800000;
              local_74 = 0x3f800000;
              Vector2__operator_assign((Vector2 *)(*(long *)(self + 0x170) + 0x40),
                                       (Vector2 *)&local_78);
            } else {
              local_68 = 0x3f800000;
              local_64 = 0x3f800000;
              Vector2__operator_assign((Vector2 *)(*(long *)(self + 0x170) + 0x40),
                                       (Vector2 *)&local_68);
            }
          }
          if (*(int *)(arg1 + 0xf8) == 5) {
            iVar6 = (int)((char)((char)arg1[0x1a7] * '\x02') >> 1);
            if (iVar6 == iVar11) {
              fVar13 = *(float *)(arg1 + 0x1a8) - fOneFrameTimeStep;
              *(float *)(arg1 + 0x1a8) = fVar13;
              if (0.0 <= fVar13)
                goto LAB_00485658;
              if (*(long *)(self + 0x6f0) == 0) {
                iVar6 = 0;
              LAB_004857fc:
                lVar9 = (long)iVar6 * 0x18;
                *(uint64_t *)(self + lVar9 + 0x6f0) = *(uint64_t *)(self + 0x1c8);
                Vector2__operator_assign((Vector2 *)(self + lVar9 + 0x6f8),
                                         (Vector2 *)(arg1 + lVar12 * 8 + 0xfc));
                *(uint32_t *)(self + lVar9 + 0x700) = 0;
              } else {
                pRVar10 = self + 0x708;
                iVar6 = 1;
                do {
                  if (*(long *)pRVar10 == 0)
                    goto LAB_004857fc;
                  iVar6 = iVar6 + 1;
                  pRVar10 = pRVar10 + 0x18;
                } while (iVar6 != 0x14);
              }
              SMBCamera__ScreenShake(*(SMBCamera **)(SuperMeatBoy + 0x38),
                                     _DAT_005bff44 /* R:5.0f */, DAT_005be894 /* R:1.0f */);
              *(uint32_t *)(arg1 + 0x1a8) = 0x3ecccccd;
              bVar2 = true;
              iVar6 = (int)((char)((char)arg1[0x1a7] * '\x02') >> 1);
            }
            if (iVar11 < iVar6) {
              lVar8 = lVar8 + -4;
              iVar11 = iVar11 + -1;
              if (lVar8 == -0x1c)
                break;
              goto LAB_00485520;
            }
          }
        LAB_00485658:
          (**(code **)(**(long **)(self + lVar8 * 2 + 0x1a0) + 0x10))();
        } else if (iVar11 == 0) {
          bVar1 = true;
          bVar3 = true;
          if (bVar2)
            goto LAB_00485685;
          goto LAB_00485581;
        }
      }
      lVar8 = lVar8 + -4;
      iVar11 = iVar11 + -1;
    } while (lVar8 != -0x1c);
    bVar1 = false;
    bVar3 = false;
    if (bVar2) {
    LAB_00485685:
      bVar1 = bVar3;
      arg1[0x1a7] =
          (Maggot)((byte)arg1[0x1a7] & 0x80 | (byte)((char)arg1[0x1a7] * '\x02' + 2U) >> 1);
    }
  LAB_00485581:
    if ((iVar4 == 0) && (*(int *)(arg1 + 0xf8) == 0xc)) {
      *(uint32_t *)(arg1 + 0xf8) = 0;
    }
    if ((bVar1) && ((*(int *)(arg1 + 0xf8) == 9 || (*(int *)(arg1 + 0xf8) == 0xb)))) {
      local_54 = *(uint32_t *)(self + 0x4c);
      local_58 = *(uint32_t *)(arg1 + 0xa0);
      if (*(long *)(self + 0x6f0) == 0) {
        iVar7 = 0;
      LAB_00485968:
        lVar8 = (long)iVar7 * 0x18;
        *(uint64_t *)(self + lVar8 + 0x6f0) = *(uint64_t *)(self + 0x1c0);
        Vector2__operator_assign((Vector2 *)(self + lVar8 + 0x6f8), (Vector2 *)&local_58);
        *(uint32_t *)(self + lVar8 + 0x700) = 0;
      } else {
        pRVar10 = self + 0x708;
        iVar7 = 1;
        do {
          if (*(long *)pRVar10 == 0)
            goto LAB_00485968;
          iVar7 = iVar7 + 1;
          pRVar10 = pRVar10 + 0x18;
        } while (iVar7 != 0x14);
      }
      SMBCamera__ScreenShake(*(SMBCamera **)(SuperMeatBoy + 0x38), _DAT_005bff44 /* R:5.0f */,
                             DAT_005be894 /* R:1.0f */);
      *(uint32_t *)(arg1 + 0xf8) = 0xc;
    LAB_00485934:
      SMBCamera__ScreenShake(*(SMBCamera **)(SuperMeatBoy + 0x38), _DAT_005bff44 /* R:5.0f */,
                             DAT_005be894 /* R:1.0f */);
      return;
    }
  } else if (iVar7 == 4) {
    *(uint32_t *)(*(long *)(self + 0x1b8) + 0x58) = *(uint32_t *)(arg1 + 0x1ac);
    *(uint32_t *)(*(long *)(self + 0x1b8) + 0x30) = *(uint32_t *)(arg1 + 0xa0);
    *(uint32_t *)(*(long *)(self + 0x1b8) + 0x34) = *(uint32_t *)(arg1 + 0xa4);
    *(uint32_t *)(*(long *)(self + 0x1b8) + 0x60) = 0x40000000;
    (**(code **)(**(long **)(self + 0x1b8) + 0x10))();
    *(uint32_t *)(arg1 + 0x1ac) = *(uint32_t *)(*(long *)(self + 0x1b8) + 0x58);
    iVar7 = FlashLibraryInstance__IsPlaying(*(FlashLibraryInstance **)(self + 0x1b8));
    if (iVar7 == 0) {
      *(uint32_t *)(arg1 + 0xf8) = 0;
    }
  } else if (iVar7 == 1) {
    *(uint32_t *)(*(long *)(self + 0x1a8) + 0x58) = *(uint32_t *)(arg1 + 0x1ac);
    *(uint32_t *)(*(long *)(self + 0x1a8) + 0x30) = *(uint32_t *)(arg1 + 0xa0);
    *(uint32_t *)(*(long *)(self + 0x1a8) + 0x34) = *(uint32_t *)(arg1 + 0xa4);
    *(uint32_t *)(*(long *)(self + 0x1a8) + 0x60) = 0x40000000;
    (**(code **)(**(long **)(self + 0x1a8) + 0x10))();
    *(uint32_t *)(arg1 + 0x1ac) = *(uint32_t *)(*(long *)(self + 0x1a8) + 0x58);
    iVar7 = FlashLibraryInstance__IsPlaying(*(FlashLibraryInstance **)(self + 0x1a8));
    if (iVar7 == 0) {
      local_44 = *(uint32_t *)(self + 0x4c);
      local_48 = *(uint32_t *)(arg1 + 0xa0);
      if (*(long *)(self + 0x6f0) == 0) {
        iVar7 = 0;
      LAB_00485a74:
        lVar8 = (long)iVar7 * 0x18;
        *(uint64_t *)(self + lVar8 + 0x6f0) = *(uint64_t *)(self + 0x1b0);
        Vector2__operator_assign((Vector2 *)(self + lVar8 + 0x6f8), (Vector2 *)&local_48);
        *(uint32_t *)(self + lVar8 + 0x700) = 0;
      } else {
        pRVar10 = self + 0x708;
        iVar7 = 1;
        do {
          if (*(long *)pRVar10 == 0)
            goto LAB_00485a74;
          iVar7 = iVar7 + 1;
          pRVar10 = pRVar10 + 0x18;
        } while (iVar7 != 0x14);
      }
      if (((*(uint *)(self + 0x1d8) & 0x3fffffff) == 0) ||
          (iVar7 = GetRandomINT(0, 100), iVar7 < 0x32)) {
        *(uint32_t *)(arg1 + 0xf8) = 10;
      } else {
        *(uint32_t *)(arg1 + 0xf8) = 8;
      }
      goto LAB_00485934;
    }
  }
  return;
}

/* ======================================================================
 * RaptureBoss__Render  (Ghidra `Render` @ 00485ab0)
 * Signature: uint8_t __thiscall Render(RaptureBoss * self)
 * Class: RaptureBoss
 * Calls: `FlashLibraryInstance__IsPlaying`, `RegisterAudioPosition`, `TAudio__DisableDirectionalAudio`, `TAudio__EnableDirectionalAudio`
 * Called by: (none)
 */
/* RaptureBoss__Render() */

void __thiscall RaptureBoss__Render(RaptureBoss *self)

{
  int iVar1;
  RaptureBoss *pRVar2;
  int iVar3;

  if (((byte)self[0x1db] & 0x40) != 0) {
    return;
  }
  RegisterAudioPosition((FPUVector *)0xffffffff);
  TAudio__DisableDirectionalAudio(Audio);
  if (*(int *)(self + 0x2d8) != 6) {
    RenderMaggot(self, (Maggot *)(self + 0x1e0));
  }
  if (*(int *)(self + 0x488) != 6) {
    RenderMaggot(self, (Maggot *)(self + 0x390));
  }
  if (*(int *)(self + 0x638) != 6) {
    RenderMaggot(self, (Maggot *)(self + 0x540));
  }
  pRVar2 = self + 0x6f0;
  iVar3 = 0x14;
  do {
    if (*(long *)pRVar2 != 0) {
      *(uint32_t *)(*(long *)pRVar2 + 0x58) = *(uint32_t *)(pRVar2 + 0x10);
      *(uint32_t *)(*(long *)pRVar2 + 0x30) = *(uint32_t *)(pRVar2 + 8);
      *(uint32_t *)(*(long *)pRVar2 + 0x34) = *(uint32_t *)(pRVar2 + 0xc);
      (**(code **)(**(long **)pRVar2 + 0x10))();
      *(uint32_t *)(pRVar2 + 0x10) = *(uint32_t *)(*(FlashLibraryInstance **)pRVar2 + 0x58);
      iVar1 = FlashLibraryInstance__IsPlaying(*(FlashLibraryInstance **)pRVar2);
      if (iVar1 == 0) {
        *(long *)pRVar2 = 0;
      }
    }
    pRVar2 = pRVar2 + 0x18;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  RenderMaggotShots(self);
  RegisterAudioPosition((FPUVector *)0x0);
  TAudio__EnableDirectionalAudio(Audio);
  return;
}

/* ======================================================================
 * RaptureBoss__ResetMaggot  (Ghidra `ResetMaggot` @ 00485bb0)
 * Signature: uint8_t __thiscall ResetMaggot(RaptureBoss * self, Maggot * arg1)
 * Class: RaptureBoss
 * Calls: `Vector2__operator_assign`
 * Called by: (none)
 */
/* RaptureBoss__ResetMaggot(RaptureBoss__Maggot) */

void __thiscall RaptureBoss__ResetMaggot(RaptureBoss *self, Maggot *arg1)

{
  long lVar1;
  int iVar2;
  uint32_t local_38;
  uint32_t local_34;
  uint32_t local_28;
  uint32_t local_24;

  iVar2 = 0;
  *(ushort *)(arg1 + 0x1a4) = *(ushort *)(arg1 + 0x1a4) & 0xf000;
  *(uint32_t *)(arg1 + 0xf8) = 0;
  *(uint *)(arg1 + 0x1a4) = *(uint *)(arg1 + 0x1a4) & 0xff000fff;
  *(uint32_t *)(arg1 + 0x9c) = 1;
  local_38 = 0;
  local_34 = 0xc47a0000;
  Vector2__operator_assign((Vector2 *)(arg1 + 0xa0), (Vector2 *)&local_38);
  arg1[0x1a7] = (Maggot)((byte)arg1[0x1a7] & 0x80);
  *(uint32_t *)(arg1 + 0x1a8) = 0;
  do {
    lVar1 = (long)iVar2;
    iVar2 = iVar2 + 1;
    local_28 = 0;
    local_24 = 0xc47a0000;
    Vector2__operator_assign((Vector2 *)(arg1 + lVar1 * 8 + 0xfc), (Vector2 *)&local_28);
  } while (iVar2 != 0x15);
  return;
}

/* ======================================================================
 * RaptureBoss__ResetMaggots  (Ghidra `ResetMaggots` @ 00485c50)
 * Signature: uint8_t __thiscall ResetMaggots(RaptureBoss * self)
 * Class: RaptureBoss
 * Calls: `Vector2__operator_assign`
 * Called by: (none)
 */
/* RaptureBoss__ResetMaggots() */

void __thiscall RaptureBoss__ResetMaggots(RaptureBoss *self)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  uint32_t local_48;
  uint32_t local_44;
  uint32_t local_38;
  uint32_t local_34;

  iVar4 = 0;
  do {
    iVar3 = 0;
    lVar1 = (long)iVar4 * 0x1b0;
    *(ushort *)(self + lVar1 + 900) = *(ushort *)(self + lVar1 + 900) & 0xf000;
    *(uint32_t *)(self + lVar1 + 0x2d8) = 0;
    *(uint *)(self + lVar1 + 900) = *(uint *)(self + lVar1 + 900) & 0xff000fff;
    *(uint32_t *)(self + lVar1 + 0x27c) = 1;
    local_48 = 0;
    local_44 = 0xc47a0000;
    Vector2__operator_assign((Vector2 *)(self + lVar1 + 0x280), (Vector2 *)&local_48);
    self[lVar1 + 0x387] = (RaptureBoss)((byte)self[lVar1 + 0x387] & 0x80);
    *(uint32_t *)(self + lVar1 + 0x388) = 0;
    do {
      lVar2 = (long)iVar3;
      iVar3 = iVar3 + 1;
      local_38 = 0;
      local_34 = 0xc47a0000;
      Vector2__operator_assign((Vector2 *)(self + lVar2 * 8 + lVar1 + 0x2dc), (Vector2 *)&local_38);
    } while (iVar3 != 0x15);
    iVar4 = iVar4 + 1;
  } while (iVar4 != 3);
  *(uint *)(self + 0x1d8) = *(uint *)(self + 0x1d8) & 0xc0000000;
  lVar1 = 0;
  do {
    *(uint32_t *)(self + lVar1 + 0x8d0) = 0;
    lVar1 = lVar1 + 0x1c;
  } while (lVar1 != 0x348);
  lVar1 = 0;
  do {
    *(uint64_t *)(self + lVar1 + 0x6f0) = 0;
    lVar1 = lVar1 + 0x18;
  } while (lVar1 != 0x1e0);
  self[0x1db] = (RaptureBoss)((byte)self[0x1db] & 0xbf);
  return;
}

/* ======================================================================
 * RaptureBoss__IsBoundsTouchingMaggot  (Ghidra `IsBoundsTouchingMaggot` @ 00485d70)
 * Signature: uint8_t __thiscall IsBoundsTouchingMaggot(RaptureBoss * self, Maggot * arg1, Bounds * arg2)
 * Class: RaptureBoss
 * Calls: `FlashLibraryInstance__IsBoundsTouchingInstance__00574660`
 * Called by: (none)
 */
/* RaptureBoss__IsBoundsTouchingMaggot(RaptureBoss__Maggot, Bounds const*) */

bool __thiscall RaptureBoss__IsBoundsTouchingMaggot(RaptureBoss *self, Maggot *arg1, Bounds *arg2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;

  iVar4 = *(int *)(arg1 + 0xf8);
  if (iVar4 == 4) {
    *(uint32_t *)(*(long *)(self + 0x1b8) + 0x58) = *(uint32_t *)(arg1 + 0x1ac);
    *(uint32_t *)(*(long *)(self + 0x1b8) + 0x30) = *(uint32_t *)(arg1 + 0xa0);
    *(uint32_t *)(*(long *)(self + 0x1b8) + 0x34) = *(uint32_t *)(arg1 + 0xa4);
    iVar4 = FlashLibraryInstance__IsBoundsTouchingInstance__00574660(
        *(FlashLibraryInstance **)(self + 0x1b8), arg2);
    return iVar4 == 1;
  }
  if ((iVar4 - 10U < 3) || (iVar4 == 7)) {
    iVar4 = ((short)(*(short *)(arg1 + 0x1a4) << 4) >> 4) + -1;
    if (iVar4 < 0) {
      iVar4 = 0x14;
    }
    iVar1 = *(int *)(arg1 + 0x1a4);
    if (0x13fffff < (uint)(iVar1 << 8)) {
      iVar2 = iVar4 + -0x14;
      if (iVar4 + -0x14 < 0) {
        iVar2 = iVar4 + 1;
      }
      lVar3 = (long)iVar2 + 0x1e;
      if (*(float *)(self + 0x2c) <= *(float *)(arg1 + lVar3 * 8 + 0x10) &&
          *(float *)(arg1 + lVar3 * 8 + 0x10) != *(float *)(self + 0x2c)) {
        *(uint32_t *)(*(long *)(self + 0x1a0) + 0x30) = *(uint32_t *)(arg1 + lVar3 * 8 + 0xc);
        *(uint32_t *)(*(long *)(self + 0x1a0) + 0x34) = *(uint32_t *)(arg1 + lVar3 * 8 + 0x10);
        iVar1 = FlashLibraryInstance__IsBoundsTouchingInstance__00574660(
            *(FlashLibraryInstance **)(self + 0x1a0), arg2);
        if (iVar1 == 1) {
          return true;
        }
        iVar1 = *(int *)(arg1 + 0x1a4);
      }
    }
    if (0x11fffff < (uint)(iVar1 << 8)) {
      iVar2 = iVar4 + -0x12;
      if (iVar4 + -0x12 < 0) {
        iVar2 = iVar4 + 3;
      }
      lVar3 = (long)iVar2 + 0x1e;
      if (*(float *)(self + 0x2c) <= *(float *)(arg1 + lVar3 * 8 + 0x10) &&
          *(float *)(arg1 + lVar3 * 8 + 0x10) != *(float *)(self + 0x2c)) {
        *(uint32_t *)(*(long *)(self + 0x198) + 0x30) = *(uint32_t *)(arg1 + lVar3 * 8 + 0xc);
        *(uint32_t *)(*(long *)(self + 0x198) + 0x34) = *(uint32_t *)(arg1 + lVar3 * 8 + 0x10);
        iVar1 = FlashLibraryInstance__IsBoundsTouchingInstance__00574660(
            *(FlashLibraryInstance **)(self + 0x198), arg2);
        if (iVar1 == 1) {
          return true;
        }
        iVar1 = *(int *)(arg1 + 0x1a4);
      }
    }
    if (0xefffff < (uint)(iVar1 << 8)) {
      iVar2 = iVar4 + -0xf;
      if (iVar4 + -0xf < 0) {
        iVar2 = iVar4 + 6;
      }
      lVar3 = (long)iVar2 + 0x1e;
      if (*(float *)(self + 0x2c) <= *(float *)(arg1 + lVar3 * 8 + 0x10) &&
          *(float *)(arg1 + lVar3 * 8 + 0x10) != *(float *)(self + 0x2c)) {
        *(uint32_t *)(*(long *)(self + 400) + 0x30) = *(uint32_t *)(arg1 + lVar3 * 8 + 0xc);
        *(uint32_t *)(*(long *)(self + 400) + 0x34) = *(uint32_t *)(arg1 + lVar3 * 8 + 0x10);
        iVar1 = FlashLibraryInstance__IsBoundsTouchingInstance__00574660(
            *(FlashLibraryInstance **)(self + 400), arg2);
        if (iVar1 == 1) {
          return true;
        }
        iVar1 = *(int *)(arg1 + 0x1a4);
      }
    }
    if (0xbfffff < (uint)(iVar1 << 8)) {
      iVar2 = iVar4 + -0xc;
      if (iVar4 + -0xc < 0) {
        iVar2 = iVar4 + 9;
      }
      lVar3 = (long)iVar2 + 0x1e;
      if (*(float *)(self + 0x2c) <= *(float *)(arg1 + lVar3 * 8 + 0x10) &&
          *(float *)(arg1 + lVar3 * 8 + 0x10) != *(float *)(self + 0x2c)) {
        *(uint32_t *)(*(long *)(self + 0x188) + 0x30) = *(uint32_t *)(arg1 + lVar3 * 8 + 0xc);
        *(uint32_t *)(*(long *)(self + 0x188) + 0x34) = *(uint32_t *)(arg1 + lVar3 * 8 + 0x10);
        iVar1 = FlashLibraryInstance__IsBoundsTouchingInstance__00574660(
            *(FlashLibraryInstance **)(self + 0x188), arg2);
        if (iVar1 == 1) {
          return true;
        }
        iVar1 = *(int *)(arg1 + 0x1a4);
      }
    }
    if (0x7fffff < (uint)(iVar1 << 8)) {
      iVar2 = iVar4 + -8;
      if (iVar4 + -8 < 0) {
        iVar2 = iVar4 + 0xd;
      }
      lVar3 = (long)iVar2 + 0x1e;
      if (*(float *)(self + 0x2c) <= *(float *)(arg1 + lVar3 * 8 + 0x10) &&
          *(float *)(arg1 + lVar3 * 8 + 0x10) != *(float *)(self + 0x2c)) {
        *(uint32_t *)(*(long *)(self + 0x180) + 0x30) = *(uint32_t *)(arg1 + lVar3 * 8 + 0xc);
        *(uint32_t *)(*(long *)(self + 0x180) + 0x34) = *(uint32_t *)(arg1 + lVar3 * 8 + 0x10);
        iVar1 = FlashLibraryInstance__IsBoundsTouchingInstance__00574660(
            *(FlashLibraryInstance **)(self + 0x180), arg2);
        if (iVar1 == 1) {
          return true;
        }
        iVar1 = *(int *)(arg1 + 0x1a4);
      }
    }
    if (0x3fffff < (uint)(iVar1 << 8)) {
      iVar1 = iVar4 + -4;
      if (iVar4 + -4 < 0) {
        iVar1 = iVar4 + 0x11;
      }
      lVar3 = (long)iVar1 + 0x1e;
      if (*(float *)(self + 0x2c) <= *(float *)(arg1 + lVar3 * 8 + 0x10) &&
          *(float *)(arg1 + lVar3 * 8 + 0x10) != *(float *)(self + 0x2c)) {
        *(uint32_t *)(*(long *)(self + 0x178) + 0x30) = *(uint32_t *)(arg1 + lVar3 * 8 + 0xc);
        *(uint32_t *)(*(long *)(self + 0x178) + 0x34) = *(uint32_t *)(arg1 + lVar3 * 8 + 0x10);
        iVar1 = FlashLibraryInstance__IsBoundsTouchingInstance__00574660(
            *(FlashLibraryInstance **)(self + 0x178), arg2);
        if (iVar1 == 1) {
          return true;
        }
      }
    }
    iVar1 = iVar4 + 0x15;
    if (-1 < iVar4) {
      iVar1 = iVar4;
    }
    lVar3 = (long)iVar1 + 0x1e;
    if (*(float *)(self + 0x2c) <= *(float *)(arg1 + lVar3 * 8 + 0x10) &&
        *(float *)(arg1 + lVar3 * 8 + 0x10) != *(float *)(self + 0x2c)) {
      *(uint32_t *)(*(long *)(self + 0x170) + 0x30) = *(uint32_t *)(arg1 + lVar3 * 8 + 0xc);
      *(uint32_t *)(*(long *)(self + 0x170) + 0x34) = *(uint32_t *)(arg1 + lVar3 * 8 + 0x10);
      iVar4 = FlashLibraryInstance__IsBoundsTouchingInstance__00574660(
          *(FlashLibraryInstance **)(self + 0x170), arg2);
      if (iVar4 == 1) {
        return true;
      }
    }
  }
  return false;
}

/* ======================================================================
 * RaptureBoss__MaggotCollisionCheck  (Ghidra `MaggotCollisionCheck` @ 004861a0)
 * Signature: uint8_t __thiscall MaggotCollisionCheck(RaptureBoss * self, Bounds * arg1)
 * Class: RaptureBoss
 * Calls: (none)
 * Called by: (none)
 */
/* RaptureBoss__MaggotCollisionCheck(Bounds const*) */

bool __thiscall RaptureBoss__MaggotCollisionCheck(RaptureBoss *self, Bounds *arg1)

{
  int iVar1;
  bool bVar2;

  bVar2 = true;
  iVar1 = IsBoundsTouchingMaggot(self, (Maggot *)(self + 0x1e0), arg1);
  if (iVar1 != 1) {
    iVar1 = IsBoundsTouchingMaggot(self, (Maggot *)(self + 0x390), arg1);
    if (iVar1 != 1) {
      iVar1 = IsBoundsTouchingMaggot(self, (Maggot *)(self + 0x540), arg1);
      bVar2 = iVar1 == 1;
    }
  }
  return bVar2;
}

/* ======================================================================
 * RaptureBoss__IsCollidingWithBounds  (Ghidra `IsCollidingWithBounds` @ 00486220)
 * Signature: uint8_t __thiscall IsCollidingWithBounds(RaptureBoss * self, Bounds * arg1)
 * Class: RaptureBoss
 * Calls: `IsBoundsTouchingBounds`, `Vector2__operator_assign`
 * Called by: (none)
 */
/* RaptureBoss__IsCollidingWithBounds(Bounds const*) */

uint64_t __thiscall RaptureBoss__IsCollidingWithBounds(RaptureBoss *self, Bounds *arg1)

{
  int iVar1;
  int iVar2;
  RaptureBoss *pRVar3;
  Bounds local_38[4];
  uint32_t local_34;
  uint32_t local_30;
  uint32_t local_2c;

  iVar1 = IsBoundsTouchingMaggot(self, (Maggot *)(self + 0x1e0), arg1);
  if (((iVar1 != 1) &&
       (iVar1 = IsBoundsTouchingMaggot(self, (Maggot *)(self + 0x390), arg1), iVar1 != 1)) &&
      (iVar1 = IsBoundsTouchingMaggot(self, (Maggot *)(self + 0x540), arg1), iVar1 != 1)) {
    local_34 = 0x41200000;
    local_30 = 0;
    pRVar3 = self + 0x8d0;
    local_2c = 0;
    local_38[0] = (Bounds)0x11;
    iVar1 = 0;
    do {
      if (*(int *)pRVar3 == 1) {
        Vector2__operator_assign((Vector2 *)&local_30,
                                 (Vector2 *)(self + (long)iVar1 * 0x1c + 0x8d4));
        iVar2 = IsBoundsTouchingBounds(local_38, arg1);
        if (iVar2 == 1) {
          return 1;
        }
      }
      iVar1 = iVar1 + 1;
      pRVar3 = pRVar3 + 0x1c;
    } while (iVar1 != 0x1e);
    return 0;
  }
  return 1;
}

/* ======================================================================
 * RaptureBoss__Hit  (Ghidra `Hit` @ 00486330)
 * Signature: uint8_t __stdcall Hit(void)
 * Class: RaptureBoss
 * Calls: (none)
 * Called by: (none)
 */
/* RaptureBoss__Hit() */

void RaptureBoss__Hit(void)

{
  return;
}

/* ======================================================================
 * RaptureBoss__Maggot_Maggot  (Ghidra `~Maggot` @ 00486340)
 * Signature: uint8_t __thiscall ~Maggot(Maggot * self)
 * Class: RaptureBoss
 * Calls: `CriticalSection__CriticalSection__005b71d0`, `free`
 * Called by: (none)
 */
/* RaptureBoss__Maggot_Maggot() */

void __thiscall RaptureBoss__Maggot_Maggot(Maggot *self)

{
  *(uint8_t ***)self = &PTR__SceneObject2D_005dd3d0;
  if (*(long *)(self + 0x48) != 0) {
    free(*(void **)(*(long *)(self + 0x48) + -8));
  }
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)(self + 0x58));
  *(uint8_t ***)self = &PTR__SceneObject_005bf710;
  return;
}
