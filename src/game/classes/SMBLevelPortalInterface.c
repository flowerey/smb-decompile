/* src/game/classes/SMBLevelPortalInterface.c — 25 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "SMBLevelPortalInterface.h"

/* ======================================================================
 * SMBLevelPortalInterface__DecrementSelection  (Ghidra `DecrementSelection` @ 00505710)
 * Signature: uint8_t __thiscall DecrementSelection(SMBLevelPortalInterface * self)
 * Class: SMBLevelPortalInterface
 * Calls: `FlashLibraryInstance__GotoAndStop`
 * Called by: (none)
 */
/* SMBLevelPortalInterface__DecrementSelection() */

void __thiscall SMBLevelPortalInterface__DecrementSelection(SMBLevelPortalInterface *self)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  uint32_t *puVar4;

  if ((*(int *)(self + 0x6c) != 0) && ((*(ushort *)(self + 0x36) & 0xfff0) != 0x10)) {
    uVar2 = *(uint *)(self + 0x68);
    FlashLibraryInstance__GotoAndStop(
        *(FlashLibraryInstance **)(*(long *)(self + 0x58) + 0x20 + (ulong)uVar2 * 0x28), 2);
    lVar3 = (ulong)uVar2 * 0x28 + *(long *)(self + 0x58);
    lVar1 = *(long *)(lVar3 + 0x10);
    if (lVar1 != 0) {
      *(uint32_t *)(lVar1 + 0x20) = *(uint32_t *)(lVar3 + 8);
    }
    uVar2 = *(int *)(self + 0x68) - 1;
    *(uint *)(self + 0x68) = uVar2;
    if ((int)uVar2 < 0) {
      *(int *)(self + 0x68) = *(int *)(self + 0x70) + -1;
      (**(code **)(*(long *)self + 0x60))(self);
      uVar2 = *(uint *)(self + 0x68);
    }
    FlashLibraryInstance__GotoAndStop(
        *(FlashLibraryInstance **)(*(long *)(self + 0x58) + 0x20 + (ulong)uVar2 * 0x28), 1);
    puVar4 = (uint32_t *)((ulong)uVar2 * 0x28 + *(long *)(self + 0x58));
    lVar1 = *(long *)(puVar4 + 4);
    if (lVar1 != 0) {
      *(uint32_t *)(lVar1 + 0x20) = *puVar4;
    }
  }
  return;
}

/* ======================================================================
 * SMBLevelPortalInterface__IncrementSelection  (Ghidra `IncrementSelection` @ 00505720)
 * Signature: uint8_t __thiscall IncrementSelection(SMBLevelPortalInterface * self)
 * Class: SMBLevelPortalInterface
 * Calls: `FlashLibraryInstance__GotoAndStop`
 * Called by: (none)
 */
/* SMBLevelPortalInterface__IncrementSelection() */

void __thiscall SMBLevelPortalInterface__IncrementSelection(SMBLevelPortalInterface *self)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  uint32_t *puVar5;

  if (*(int *)(self + 0x6c) == 0) {
    return;
  }
  if ((*(ushort *)(self + 0x36) & 0xfff0) == 0x10) {
    return;
  }
  uVar2 = *(uint *)(self + 0x68);
  FlashLibraryInstance__GotoAndStop(
      *(FlashLibraryInstance **)(*(long *)(self + 0x58) + 0x20 + (ulong)uVar2 * 0x28), 2);
  lVar4 = (ulong)uVar2 * 0x28 + *(long *)(self + 0x58);
  lVar1 = *(long *)(lVar4 + 0x10);
  if (lVar1 != 0) {
    *(uint32_t *)(lVar1 + 0x20) = *(uint32_t *)(lVar4 + 8);
  }
  uVar2 = *(uint *)(self + 0x68);
  uVar3 = (ulong)uVar2;
  if ((int)uVar2 < *(int *)(self + 0x6c) + -1) {
    uVar2 = uVar2 + 1;
    uVar3 = (ulong)uVar2;
    *(uint *)(self + 0x68) = uVar2;
    if ((int)uVar2 < *(int *)(self + 0x70))
      goto LAB_00510208;
  } else if ((int)uVar2 < *(int *)(self + 0x70))
    goto LAB_00510208;
  *(uint32_t *)(self + 0x68) = 0;
  (**(code **)(*(long *)self + 0x58))(self);
  uVar3 = (ulong) * (uint *)(self + 0x68);
LAB_00510208:
  FlashLibraryInstance__GotoAndStop(
      *(FlashLibraryInstance **)(*(long *)(self + 0x58) + 0x20 + uVar3 * 0x28), 1);
  puVar5 = (uint32_t *)(uVar3 * 0x28 + *(long *)(self + 0x58));
  lVar1 = *(long *)(puVar5 + 4);
  if (lVar1 != 0) {
    *(uint32_t *)(lVar1 + 0x20) = *puVar5;
  }
  return;
}

/* ======================================================================
 * SMBLevelPortalInterface__DeactivationFinished  (Ghidra `DeactivationFinished` @ 00505730)
 * Signature: uint8_t __thiscall DeactivationFinished(SMBLevelPortalInterface * self)
 * Class: SMBLevelPortalInterface
 * Calls: (none)
 * Called by: (none)
 */
/* SMBLevelPortalInterface__DeactivationFinished() */

void __thiscall SMBLevelPortalInterface__DeactivationFinished(SMBLevelPortalInterface *self)

{
  *(ushort *)(self + 0x34) = *(ushort *)(self + 0x34) & 0xfc00;
  *(uint32_t *)(self + 0x30) = 4;
  return;
}

/* ======================================================================
 * SMBLevelPortalInterface__DeActivate  (Ghidra `DeActivate` @ 00505740)
 * Signature: uint8_t __thiscall DeActivate(SMBLevelPortalInterface * self)
 * Class: SMBLevelPortalInterface
 * Calls: `SMBSelectionMenu__DeActivate`
 * Called by: (none)
 */
/* SMBLevelPortalInterface__DeActivate() */

void __thiscall SMBLevelPortalInterface__DeActivate(SMBLevelPortalInterface *self)

{
  SMBSelectionMenu__DeActivate((SMBSelectionMenu *)self);
  *(ushort *)(self + 0x34) = *(ushort *)(self + 0x34) & 0xfc00;
  return;
}

/* ======================================================================
 * SMBLevelPortalInterface__SMBLevelPortalInterface  (Ghidra `~SMBLevelPortalInterface` @ 00505ba0)
 * Signature: uint8_t __thiscall ~SMBLevelPortalInterface(SMBLevelPortalInterface * self)
 * Class: SMBLevelPortalInterface
 * Calls: `FlashLibraryInstance__FlashLibraryInstance__00572bd0`, `SMBLevelPortalInterface__SMBLevelPortalInterface__005061b0`, `SMBSelectionMenu__SMBSelectionMenu__005100b0`
 * Called by: (none)
 */
/* SMBLevelPortalInterface__SMBLevelPortalInterface__005061b0() */

void __thiscall
SMBLevelPortalInterface__SMBLevelPortalInterface__005061b0(SMBLevelPortalInterface *self)

{
  SMBLevelPortalInterface *pSVar1;
  SMBLevelPortalInterface *pSVar2;
  SMBLevelPortalInterface *pSVar3;
  SMBLevelPortalInterface *pSVar4;

  *(uint8_t ***)self = &PTR__SMBLevelPortalInterface_005c88d0;
  *(uint64_t *)(self + 8) = 0;
  SMBLevelChapterPortalInterface = 0;
  if (*(long **)(self + 0x3648) != (long *)0x0) {
    /* try { // try from 00505bda to 00505ea5 has its CatchHandler @ 00506031 */
    (**(code **)(**(long **)(self + 0x3648) + 8))();
  }
  *(uint64_t *)(self + 0x3648) = 0;
  if (*(long **)(self + 0x3650) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x3650) + 8))();
  }
  *(uint64_t *)(self + 0x3650) = 0;
  if (*(long **)(self + 0x3658) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x3658) + 8))();
  }
  *(uint64_t *)(self + 0x3658) = 0;
  if (*(long **)(self + 0x3660) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x3660) + 8))();
  }
  *(uint64_t *)(self + 0x3660) = 0;
  if (*(long **)(self + 0x3668) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x3668) + 8))();
  }
  *(uint64_t *)(self + 0x3668) = 0;
  if (*(long **)(self + 0x3670) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x3670) + 8))();
  }
  *(uint64_t *)(self + 0x3670) = 0;
  if (*(long **)(self + 0x3678) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x3678) + 8))();
  }
  *(uint64_t *)(self + 0x3678) = 0;
  if (*(long **)(self + 0x3680) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x3680) + 8))();
  }
  *(uint64_t *)(self + 0x3680) = 0;
  if (*(long **)(self + 0x3688) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x3688) + 8))();
  }
  *(uint64_t *)(self + 0x3688) = 0;
  if (*(long **)(self + 0x3690) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x3690) + 8))();
  }
  *(uint64_t *)(self + 0x3690) = 0;
  if (*(long **)(self + 0x3698) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x3698) + 8))();
  }
  *(uint64_t *)(self + 0x3698) = 0;
  if (*(long **)(self + 0x36a0) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x36a0) + 8))();
  }
  *(uint64_t *)(self + 0x36a0) = 0;
  if (*(long **)(self + 0x36a8) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x36a8) + 8))();
  }
  *(uint64_t *)(self + 0x36a8) = 0;
  if (*(long **)(self + 14000) != (long *)0x0) {
    (**(code **)(**(long **)(self + 14000) + 8))();
  }
  *(uint64_t *)(self + 14000) = 0;
  if (*(long **)(self + 0x36b8) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x36b8) + 8))();
  }
  *(uint64_t *)(self + 0x36b8) = 0;
  if (*(long **)(self + 0x36c0) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x36c0) + 8))();
  }
  *(uint64_t *)(self + 0x36c0) = 0;
  if (*(long **)(self + 0x36c8) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x36c8) + 8))();
  }
  *(uint64_t *)(self + 0x36c8) = 0;
  if (*(long **)(self + 0x36d0) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x36d0) + 8))();
  }
  *(uint64_t *)(self + 0x36d0) = 0;
  if (*(long **)(self + 0x36d8) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x36d8) + 8))();
  }
  *(uint64_t *)(self + 0x36d8) = 0;
  if (*(long **)(self + 0x36e0) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x36e0) + 8))();
  }
  *(uint64_t *)(self + 0x36e0) = 0;
  if (*(long **)(self + 0x3748) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x3748) + 8))();
  }
  *(uint64_t *)(self + 0x3748) = 0;
  if (*(long **)(self + 0x3750) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x3750) + 8))();
  }
  *(uint64_t *)(self + 0x3750) = 0;
  if (*(long **)(self + 0x3758) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x3758) + 8))();
  }
  *(uint64_t *)(self + 0x3758) = 0;
  if (*(long **)(self + 0x3760) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x3760) + 8))();
  }
  pSVar3 = self + 0x3648;
  pSVar4 = self + 0x2900;
  *(uint64_t *)(self + 0x3760) = 0;
  pSVar2 = pSVar3;
  do {
    if (*(long **)(self + (long)(pSVar2 + (0x33a8 - (long)pSVar3))) != (long *)0x0) {
      /* try { // try from 00505ee3 to 00505ee5 has its CatchHandler @ 0050618c */
      (**(code **)(**(long **)(self + (long)(pSVar2 + (0x33a8 - (long)pSVar3))) + 8))();
    }
    *(uint64_t *)(self + (long)(pSVar2 + (0x33a8 - (long)pSVar3))) = 0;
    pSVar1 = pSVar2 + -0x2a8;
    /* try { // try from 00505efd to 00505f01 has its CatchHandler @ 0050617b */
    FlashLibraryInstance__FlashLibraryInstance__00572bd0((FlashLibraryInstance *)(pSVar2 + -0xb8));
    /* try { // try from 00505f09 to 00505f0d has its CatchHandler @ 0050616a */
    FlashLibraryInstance__FlashLibraryInstance__00572bd0((FlashLibraryInstance *)(pSVar2 + -0x158));
    /* try { // try from 00505f15 to 00505f19 has its CatchHandler @ 00506159 */
    FlashLibraryInstance__FlashLibraryInstance__00572bd0((FlashLibraryInstance *)(pSVar2 + -0x1f8));
    /* try { // try from 00505f1e to 00505f22 has its CatchHandler @ 00506151 */
    FlashLibraryInstance__FlashLibraryInstance__00572bd0((FlashLibraryInstance *)(pSVar2 + -0x298));
    pSVar2 = pSVar1;
  } while (pSVar4 != pSVar1);
  pSVar3 = pSVar4;
  do {
    if (*(long **)(self + (long)(pSVar3 + (0x2660 - (long)pSVar4))) != (long *)0x0) {
      /* try { // try from 00505f53 to 00505f55 has its CatchHandler @ 00506136 */
      (**(code **)(**(long **)(self + (long)(pSVar3 + (0x2660 - (long)pSVar4))) + 8))();
    }
    *(uint64_t *)(self + (long)(pSVar3 + (0x2660 - (long)pSVar4))) = 0;
    pSVar2 = pSVar3 + -0x2a8;
    /* try { // try from 00505f6d to 00505f71 has its CatchHandler @ 00506125 */
    FlashLibraryInstance__FlashLibraryInstance__00572bd0((FlashLibraryInstance *)(pSVar3 + -0xb8));
    /* try { // try from 00505f79 to 00505f7d has its CatchHandler @ 00506114 */
    FlashLibraryInstance__FlashLibraryInstance__00572bd0((FlashLibraryInstance *)(pSVar3 + -0x158));
    /* try { // try from 00505f85 to 00505f89 has its CatchHandler @ 005060e8 */
    FlashLibraryInstance__FlashLibraryInstance__00572bd0((FlashLibraryInstance *)(pSVar3 + -0x1f8));
    /* try { // try from 00505f8e to 00505f92 has its CatchHandler @ 005060e3 */
    FlashLibraryInstance__FlashLibraryInstance__00572bd0((FlashLibraryInstance *)(pSVar3 + -0x298));
    pSVar3 = pSVar2;
  } while (self + 0x1bb8 != pSVar2);
  pSVar3 = self + 0x1bb0;
  pSVar4 = pSVar3;
  do {
    if (*(long **)(self + (long)(pSVar4 + (0x1910 - (long)pSVar3))) != (long *)0x0) {
      /* try { // try from 00505fd3 to 00505fd5 has its CatchHandler @ 005060f9 */
      (**(code **)(**(long **)(self + (long)(pSVar4 + (0x1910 - (long)pSVar3))) + 8))();
    }
    *(uint64_t *)(self + (long)(pSVar4 + (0x1910 - (long)pSVar3))) = 0;
    pSVar2 = pSVar4 + -0x2a8;
    /* try { // try from 00505fed to 00505ff1 has its CatchHandler @ 005060d2 */
    FlashLibraryInstance__FlashLibraryInstance__00572bd0((FlashLibraryInstance *)(pSVar4 + -0xb8));
    /* try { // try from 00505ff9 to 00505ffd has its CatchHandler @ 005060c1 */
    FlashLibraryInstance__FlashLibraryInstance__00572bd0((FlashLibraryInstance *)(pSVar4 + -0x158));
    /* try { // try from 00506005 to 00506009 has its CatchHandler @ 005060b0 */
    FlashLibraryInstance__FlashLibraryInstance__00572bd0((FlashLibraryInstance *)(pSVar4 + -0x1f8));
    /* try { // try from 0050600e to 00506012 has its CatchHandler @ 0050609d */
    FlashLibraryInstance__FlashLibraryInstance__00572bd0((FlashLibraryInstance *)(pSVar4 + -0x298));
    pSVar4 = pSVar2;
  } while (self + 0x120 != pSVar2);
  SMBSelectionMenu__SMBSelectionMenu__005100b0((SMBSelectionMenu *)self);
  return;
}

/* ======================================================================
 * SMBLevelPortalInterface__SMBLevelPortalInterface__005061b0  (Ghidra `~SMBLevelPortalInterface` @ 005061b0)
 * Signature: uint8_t __thiscall ~SMBLevelPortalInterface(SMBLevelPortalInterface * self)
 * Class: SMBLevelPortalInterface
 * Calls: `operator_delete`
 * Called by: `SMBLevelPortalInterface__SMBLevelPortalInterface`
 */
/* SMBLevelPortalInterface__SMBLevelPortalInterface__005061b0() */

void __thiscall
SMBLevelPortalInterface__SMBLevelPortalInterface__005061b0(SMBLevelPortalInterface *self)

{
  SMBLevelPortalInterface__dtor(self);
  operator_delete(self);
  return;
}

/* ======================================================================
 * SMBLevelPortalInterface__SMBLevelPortalInterface__005084f0  (Ghidra `SMBLevelPortalInterface` @ 005084f0)
 * Signature: uint8_t __thiscall SMBLevelPortalInterface(SMBLevelPortalInterface * self)
 * Class: SMBLevelPortalInterface
 * Calls: `FlashLibraryInstance__FlashLibraryInstance__00573610`, `SMBSelectionMenu__SMBSelectionMenu__00510270`, `SQLDatabase__SQLDatabase`, `operator_new`
 * Called by: `SMBLevelPortal__SMBLevelPortal__00509490`
 */
/* SMBLevelPortalInterface__SMBLevelPortalInterface__005084f0() */

void __thiscall
SMBLevelPortalInterface__SMBLevelPortalInterface__005084f0(SMBLevelPortalInterface *self)

{
  SQLDatabase *this_00;

  SMBSelectionMenu__SMBSelectionMenu__00510270((SMBSelectionMenu *)self);
  *(uint8_t ***)self = &PTR__SMBLevelPortalInterface_005c88d0;
  *(uint32_t *)(self + 0x120) = 0xffffffff;
  *(uint64_t *)(self + 0x128) = 0;
  /* try { // try from 00508538 to 0050853c has its CatchHandler @ 00508faf */
  FlashLibraryInstance__FlashLibraryInstance__00573610((FlashLibraryInstance *)(self + 0x130));
  /* try { // try from 00508547 to 0050854b has its CatchHandler @ 005092eb */
  FlashLibraryInstance__FlashLibraryInstance__00573610((FlashLibraryInstance *)(self + 0x1d0));
  /* try { // try from 00508556 to 0050855a has its CatchHandler @ 005092e0 */
  FlashLibraryInstance__FlashLibraryInstance__00573610((FlashLibraryInstance *)(self + 0x270));
  /* try { // try from 00508562 to 00508566 has its CatchHandler @ 005092d5 */
  FlashLibraryInstance__FlashLibraryInstance__00573610((FlashLibraryInstance *)(self + 0x310));
  *(uint32_t *)(self + 0x3b0) = 1;
  *(uint32_t *)(self + 0x3b4) = 1;
  *(uint32_t *)(self + 0x3b8) = 0x40a00000;
  *(uint32_t *)(self + 0x3bc) = 0x40a00000;
  *(uint32_t *)(self + 0x3c0) = 1;
  *(uint32_t *)(self + 0x3c8) = 0xffffffff;
  *(uint64_t *)(self + 0x3d0) = 0;
  /* try { // try from 005085b8 to 005085bc has its CatchHandler @ 005092ca */
  FlashLibraryInstance__FlashLibraryInstance__00573610((FlashLibraryInstance *)(self + 0x3d8));
  /* try { // try from 005085c7 to 005085cb has its CatchHandler @ 005092bf */
  FlashLibraryInstance__FlashLibraryInstance__00573610((FlashLibraryInstance *)(self + 0x478));
  /* try { // try from 005085d6 to 005085da has its CatchHandler @ 005092b4 */
  FlashLibraryInstance__FlashLibraryInstance__00573610((FlashLibraryInstance *)(self + 0x518));
  /* try { // try from 005085e2 to 005085e6 has its CatchHandler @ 005092a9 */
  FlashLibraryInstance__FlashLibraryInstance__00573610((FlashLibraryInstance *)(self + 0x5b8));
  *(uint32_t *)(self + 0x658) = 1;
  *(uint32_t *)(self + 0x65c) = 1;
  *(uint32_t *)(self + 0x660) = 0x40a00000;
  *(uint32_t *)(self + 0x664) = 0x40a00000;
  *(uint32_t *)(self + 0x668) = 1;
  *(uint32_t *)(self + 0x670) = 0xffffffff;
  *(uint64_t *)(self + 0x678) = 0;
  /* try { // try from 00508638 to 0050863c has its CatchHandler @ 0050929e */
  FlashLibraryInstance__FlashLibraryInstance__00573610((FlashLibraryInstance *)(self + 0x680));
  /* try { // try from 00508647 to 0050864b has its CatchHandler @ 00509293 */
  FlashLibraryInstance__FlashLibraryInstance__00573610((FlashLibraryInstance *)(self + 0x720));
  /* try { // try from 00508656 to 0050865a has its CatchHandler @ 00509288 */
  FlashLibraryInstance__FlashLibraryInstance__00573610((FlashLibraryInstance *)(self + 0x7c0));
  /* try { // try from 00508662 to 00508666 has its CatchHandler @ 0050927d */
  FlashLibraryInstance__FlashLibraryInstance__00573610((FlashLibraryInstance *)(self + 0x860));
  *(uint32_t *)(self + 0x900) = 1;
  *(uint32_t *)(self + 0x904) = 1;
  *(uint32_t *)(self + 0x908) = 0x40a00000;
  *(uint32_t *)(self + 0x90c) = 0x40a00000;
  *(uint32_t *)(self + 0x910) = 1;
  *(uint32_t *)(self + 0x918) = 0xffffffff;
  *(uint64_t *)(self + 0x920) = 0;
  /* try { // try from 005086b8 to 005086bc has its CatchHandler @ 00509272 */
  FlashLibraryInstance__FlashLibraryInstance__00573610((FlashLibraryInstance *)(self + 0x928));
  /* try { // try from 005086c7 to 005086cb has its CatchHandler @ 00509267 */
  FlashLibraryInstance__FlashLibraryInstance__00573610((FlashLibraryInstance *)(self + 0x9c8));
  /* try { // try from 005086d6 to 005086da has its CatchHandler @ 0050925c */
  FlashLibraryInstance__FlashLibraryInstance__00573610((FlashLibraryInstance *)(self + 0xa68));
  /* try { // try from 005086e2 to 005086e6 has its CatchHandler @ 00509251 */
  FlashLibraryInstance__FlashLibraryInstance__00573610((FlashLibraryInstance *)(self + 0xb08));
  *(uint32_t *)(self + 0xba8) = 1;
  *(uint32_t *)(self + 0xbac) = 1;
  *(uint32_t *)(self + 0xbb0) = 0x40a00000;
  *(uint32_t *)(self + 0xbb4) = 0x40a00000;
  *(uint32_t *)(self + 3000) = 1;
  *(uint32_t *)(self + 0xbc0) = 0xffffffff;
  *(uint64_t *)(self + 0xbc8) = 0;
  /* try { // try from 00508738 to 0050873c has its CatchHandler @ 00509246 */
  FlashLibraryInstance__FlashLibraryInstance__00573610((FlashLibraryInstance *)(self + 0xbd0));
  /* try { // try from 00508747 to 0050874b has its CatchHandler @ 0050923b */
  FlashLibraryInstance__FlashLibraryInstance__00573610((FlashLibraryInstance *)(self + 0xc70));
  /* try { // try from 00508756 to 0050875a has its CatchHandler @ 00509230 */
  FlashLibraryInstance__FlashLibraryInstance__00573610((FlashLibraryInstance *)(self + 0xd10));
  /* try { // try from 00508762 to 00508766 has its CatchHandler @ 00509225 */
  FlashLibraryInstance__FlashLibraryInstance__00573610((FlashLibraryInstance *)(self + 0xdb0));
  *(uint32_t *)(self + 0xe50) = 1;
  *(uint32_t *)(self + 0xe54) = 1;
  *(uint32_t *)(self + 0xe58) = 0x40a00000;
  *(uint32_t *)(self + 0xe5c) = 0x40a00000;
  *(uint32_t *)(self + 0xe60) = 1;
  *(uint32_t *)(self + 0xe68) = 0xffffffff;
  *(uint64_t *)(self + 0xe70) = 0;
  /* try { // try from 005087b8 to 005087bc has its CatchHandler @ 0050921a */
  FlashLibraryInstance__FlashLibraryInstance__00573610((FlashLibraryInstance *)(self + 0xe78));
  /* try { // try from 005087c7 to 005087cb has its CatchHandler @ 00509212 */
  FlashLibraryInstance__FlashLibraryInstance__00573610((FlashLibraryInstance *)(self + 0xf18));
  /* try { // try from 005087d6 to 005087da has its CatchHandler @ 0050920a */
  FlashLibraryInstance__FlashLibraryInstance__00573610((FlashLibraryInstance *)(self + 0xfb8));
  /* try { // try from 005087e2 to 005087e6 has its CatchHandler @ 005091ff */
  FlashLibraryInstance__FlashLibraryInstance__00573610((FlashLibraryInstance *)(self + 0x1058));
  *(uint32_t *)(self + 0x10f8) = 1;
  *(uint32_t *)(self + 0x10fc) = 1;
  *(uint32_t *)(self + 0x1100) = 0x40a00000;
  *(uint32_t *)(self + 0x1104) = 0x40a00000;
  *(uint32_t *)(self + 0x1108) = 1;
  *(uint32_t *)(self + 0x1110) = 0xffffffff;
  *(uint64_t *)(self + 0x1118) = 0;
  /* try { // try from 00508838 to 0050883c has its CatchHandler @ 005091f4 */
  FlashLibraryInstance__FlashLibraryInstance__00573610((FlashLibraryInstance *)(self + 0x1120));
  /* try { // try from 00508847 to 0050884b has its CatchHandler @ 005091ec */
  FlashLibraryInstance__FlashLibraryInstance__00573610((FlashLibraryInstance *)(self + 0x11c0));
  /* try { // try from 00508856 to 0050885a has its CatchHandler @ 005091e4 */
  FlashLibraryInstance__FlashLibraryInstance__00573610((FlashLibraryInstance *)(self + 0x1260));
  /* try { // try from 00508862 to 00508866 has its CatchHandler @ 005091dc */
  FlashLibraryInstance__FlashLibraryInstance__00573610((FlashLibraryInstance *)(self + 0x1300));
  *(uint32_t *)(self + 0x13a0) = 1;
  *(uint32_t *)(self + 0x13a4) = 1;
  *(uint32_t *)(self + 0x13a8) = 0x40a00000;
  *(uint32_t *)(self + 0x13ac) = 0x40a00000;
  *(uint32_t *)(self + 0x13b0) = 1;
  *(uint32_t *)(self + 0x13b8) = 0xffffffff;
  *(uint64_t *)(self + 0x13c0) = 0;
  /* try { // try from 005088b8 to 005088bc has its CatchHandler @ 005091d1 */
  FlashLibraryInstance__FlashLibraryInstance__00573610((FlashLibraryInstance *)(self + 0x13c8));
  /* try { // try from 005088c7 to 005088cb has its CatchHandler @ 005091c9 */
  FlashLibraryInstance__FlashLibraryInstance__00573610((FlashLibraryInstance *)(self + 0x1468));
  /* try { // try from 005088d6 to 005088da has its CatchHandler @ 005091c1 */
  FlashLibraryInstance__FlashLibraryInstance__00573610((FlashLibraryInstance *)(self + 0x1508));
  /* try { // try from 005088e2 to 005088e6 has its CatchHandler @ 00509180 */
  FlashLibraryInstance__FlashLibraryInstance__00573610((FlashLibraryInstance *)(self + 0x15a8));
  *(uint32_t *)(self + 0x1648) = 1;
  *(uint32_t *)(self + 0x164c) = 1;
  *(uint32_t *)(self + 0x1650) = 0x40a00000;
  *(uint32_t *)(self + 0x1654) = 0x40a00000;
  *(uint32_t *)(self + 0x1658) = 1;
  *(uint32_t *)(self + 0x1660) = 0xffffffff;
  *(uint64_t *)(self + 0x1668) = 0;
  /* try { // try from 00508938 to 0050893c has its CatchHandler @ 00509175 */
  FlashLibraryInstance__FlashLibraryInstance__00573610((FlashLibraryInstance *)(self + 0x1670));
  /* try { // try from 00508947 to 0050894b has its CatchHandler @ 005093f0 */
  FlashLibraryInstance__FlashLibraryInstance__00573610((FlashLibraryInstance *)(self + 0x1710));
  /* try { // try from 00508956 to 0050895a has its CatchHandler @ 005093e5 */
  FlashLibraryInstance__FlashLibraryInstance__00573610((FlashLibraryInstance *)(self + 0x17b0));
  /* try { // try from 00508962 to 00508966 has its CatchHandler @ 005093da */
  FlashLibraryInstance__FlashLibraryInstance__00573610((FlashLibraryInstance *)(self + 0x1850));
  *(uint32_t *)(self + 0x18f0) = 1;
  *(uint32_t *)(self + 0x18f4) = 1;
  *(uint32_t *)(self + 0x18f8) = 0x40a00000;
  *(uint32_t *)(self + 0x18fc) = 0x40a00000;
  *(uint32_t *)(self + 0x1900) = 1;
  *(uint32_t *)(self + 0x1908) = 0xffffffff;
  *(uint64_t *)(self + 0x1910) = 0;
  /* try { // try from 005089b8 to 005089bc has its CatchHandler @ 005093d2 */
  FlashLibraryInstance__FlashLibraryInstance__00573610((FlashLibraryInstance *)(self + 0x1918));
  /* try { // try from 005089c7 to 005089cb has its CatchHandler @ 005093ca */
  FlashLibraryInstance__FlashLibraryInstance__00573610((FlashLibraryInstance *)(self + 0x19b8));
  /* try { // try from 005089d6 to 005089da has its CatchHandler @ 005093c2 */
  FlashLibraryInstance__FlashLibraryInstance__00573610((FlashLibraryInstance *)(self + 0x1a58));
  /* try { // try from 005089e2 to 005089e6 has its CatchHandler @ 005093ba */
  FlashLibraryInstance__FlashLibraryInstance__00573610((FlashLibraryInstance *)(self + 0x1af8));
  *(uint32_t *)(self + 0x1b98) = 1;
  *(uint32_t *)(self + 0x1b9c) = 1;
  *(uint32_t *)(self + 0x1ba0) = 0x40a00000;
  *(uint32_t *)(self + 0x1ba4) = 0x40a00000;
  *(uint32_t *)(self + 0x1ba8) = 1;
  *(uint64_t *)(self + 0x1bb0) = 0;
  *(uint32_t *)(self + 0x1bb8) = 0xffffffff;
  *(uint64_t *)(self + 0x1bc0) = 0;
  /* try { // try from 00508a4a to 00508a4e has its CatchHandler @ 005093af */
  FlashLibraryInstance__FlashLibraryInstance__00573610((FlashLibraryInstance *)(self + 0x1bc8));
  /* try { // try from 00508a59 to 00508a5d has its CatchHandler @ 005093a7 */
  FlashLibraryInstance__FlashLibraryInstance__00573610((FlashLibraryInstance *)(self + 0x1c68));
  /* try { // try from 00508a68 to 00508a6c has its CatchHandler @ 0050939f */
  FlashLibraryInstance__FlashLibraryInstance__00573610((FlashLibraryInstance *)(self + 0x1d08));
  /* try { // try from 00508a74 to 00508a78 has its CatchHandler @ 00509397 */
  FlashLibraryInstance__FlashLibraryInstance__00573610((FlashLibraryInstance *)(self + 0x1da8));
  *(uint32_t *)(self + 0x1e48) = 1;
  *(uint32_t *)(self + 0x1e4c) = 1;
  *(uint32_t *)(self + 0x1e50) = 0x40a00000;
  *(uint32_t *)(self + 0x1e54) = 0x40a00000;
  *(uint32_t *)(self + 0x1e58) = 1;
  *(uint32_t *)(self + 0x1e60) = 0xffffffff;
  *(uint64_t *)(self + 0x1e68) = 0;
  /* try { // try from 00508aca to 00508ace has its CatchHandler @ 0050938c */
  FlashLibraryInstance__FlashLibraryInstance__00573610((FlashLibraryInstance *)(self + 0x1e70));
  /* try { // try from 00508ad9 to 00508add has its CatchHandler @ 00509384 */
  FlashLibraryInstance__FlashLibraryInstance__00573610((FlashLibraryInstance *)(self + 0x1f10));
  /* try { // try from 00508ae8 to 00508aec has its CatchHandler @ 0050937c */
  FlashLibraryInstance__FlashLibraryInstance__00573610((FlashLibraryInstance *)(self + 0x1fb0));
  /* try { // try from 00508af4 to 00508af8 has its CatchHandler @ 0050933e */
  FlashLibraryInstance__FlashLibraryInstance__00573610((FlashLibraryInstance *)(self + 0x2050));
  *(uint32_t *)(self + 0x20f0) = 1;
  *(uint32_t *)(self + 0x20f4) = 1;
  *(uint32_t *)(self + 0x20f8) = 0x40a00000;
  *(uint32_t *)(self + 0x20fc) = 0x40a00000;
  *(uint32_t *)(self + 0x2100) = 1;
  *(uint32_t *)(self + 0x2108) = 0xffffffff;
  *(uint64_t *)(self + 0x2110) = 0;
  /* try { // try from 00508b4a to 00508b4e has its CatchHandler @ 005092f6 */
  FlashLibraryInstance__FlashLibraryInstance__00573610((FlashLibraryInstance *)(self + 0x2118));
  /* try { // try from 00508b59 to 00508b5d has its CatchHandler @ 00509445 */
  FlashLibraryInstance__FlashLibraryInstance__00573610((FlashLibraryInstance *)(self + 0x21b8));
  /* try { // try from 00508b68 to 00508b6c has its CatchHandler @ 0050943a */
  FlashLibraryInstance__FlashLibraryInstance__00573610((FlashLibraryInstance *)(self + 0x2258));
  /* try { // try from 00508b74 to 00508b78 has its CatchHandler @ 0050942f */
  FlashLibraryInstance__FlashLibraryInstance__00573610((FlashLibraryInstance *)(self + 0x22f8));
  *(uint32_t *)(self + 0x2398) = 1;
  *(uint32_t *)(self + 0x239c) = 1;
  *(uint32_t *)(self + 0x23a0) = 0x40a00000;
  *(uint32_t *)(self + 0x23a4) = 0x40a00000;
  *(uint32_t *)(self + 0x23a8) = 1;
  *(uint32_t *)(self + 0x23b0) = 0xffffffff;
  *(uint64_t *)(self + 0x23b8) = 0;
  /* try { // try from 00508bca to 00508bce has its CatchHandler @ 00509424 */
  FlashLibraryInstance__FlashLibraryInstance__00573610((FlashLibraryInstance *)(self + 0x23c0));
  /* try { // try from 00508bd9 to 00508bdd has its CatchHandler @ 00509419 */
  FlashLibraryInstance__FlashLibraryInstance__00573610((FlashLibraryInstance *)(self + 0x2460));
  /* try { // try from 00508be8 to 00508bec has its CatchHandler @ 0050940e */
  FlashLibraryInstance__FlashLibraryInstance__00573610((FlashLibraryInstance *)(self + 0x2500));
  /* try { // try from 00508bf4 to 00508bf8 has its CatchHandler @ 00509403 */
  FlashLibraryInstance__FlashLibraryInstance__00573610((FlashLibraryInstance *)(self + 0x25a0));
  *(uint32_t *)(self + 0x2640) = 1;
  *(uint32_t *)(self + 0x2644) = 1;
  *(uint32_t *)(self + 0x2648) = 0x40a00000;
  *(uint32_t *)(self + 0x264c) = 0x40a00000;
  *(uint32_t *)(self + 0x2650) = 1;
  *(uint32_t *)(self + 0x2658) = 0xffffffff;
  *(uint64_t *)(self + 0x2660) = 0;
  /* try { // try from 00508c4a to 00508c4e has its CatchHandler @ 005093fb */
  FlashLibraryInstance__FlashLibraryInstance__00573610((FlashLibraryInstance *)(self + 0x2668));
  /* try { // try from 00508c59 to 00508c5d has its CatchHandler @ 0050946a */
  FlashLibraryInstance__FlashLibraryInstance__00573610((FlashLibraryInstance *)(self + 0x2708));
  /* try { // try from 00508c68 to 00508c6c has its CatchHandler @ 00509462 */
  FlashLibraryInstance__FlashLibraryInstance__00573610((FlashLibraryInstance *)(self + 0x27a8));
  /* try { // try from 00508c74 to 00508c78 has its CatchHandler @ 0050945a */
  FlashLibraryInstance__FlashLibraryInstance__00573610((FlashLibraryInstance *)(self + 0x2848));
  *(uint32_t *)(self + 0x28e8) = 1;
  *(uint32_t *)(self + 0x28ec) = 1;
  *(uint32_t *)(self + 0x28f0) = 0x40a00000;
  *(uint32_t *)(self + 0x28f4) = 0x40a00000;
  *(uint32_t *)(self + 0x28f8) = 1;
  *(uint32_t *)(self + 0x2900) = 0xffffffff;
  *(uint64_t *)(self + 0x2908) = 0;
  /* try { // try from 00508cd1 to 00508cd5 has its CatchHandler @ 00509450 */
  FlashLibraryInstance__FlashLibraryInstance__00573610((FlashLibraryInstance *)(self + 0x2910));
  /* try { // try from 00508ce0 to 00508ce4 has its CatchHandler @ 0050947c */
  FlashLibraryInstance__FlashLibraryInstance__00573610((FlashLibraryInstance *)(self + 0x29b0));
  /* try { // try from 00508cef to 00508cf3 has its CatchHandler @ 00509472 */
  FlashLibraryInstance__FlashLibraryInstance__00573610((FlashLibraryInstance *)(self + 0x2a50));
  /* try { // try from 00508cfb to 00508cff has its CatchHandler @ 00509486 */
  FlashLibraryInstance__FlashLibraryInstance__00573610((FlashLibraryInstance *)(self + 0x2af0));
  *(uint32_t *)(self + 0x2b90) = 1;
  *(uint32_t *)(self + 0x2b94) = 1;
  *(uint32_t *)(self + 0x2b98) = 0x40a00000;
  *(uint32_t *)(self + 0x2b9c) = 0x40a00000;
  *(uint32_t *)(self + 0x2ba0) = 1;
  *(uint32_t *)(self + 0x2ba8) = 0xffffffff;
  *(uint64_t *)(self + 0x2bb0) = 0;
  /* try { // try from 00508d51 to 00508d55 has its CatchHandler @ 0050916a */
  FlashLibraryInstance__FlashLibraryInstance__00573610((FlashLibraryInstance *)(self + 0x2bb8));
  /* try { // try from 00508d60 to 00508d64 has its CatchHandler @ 0050912f */
  FlashLibraryInstance__FlashLibraryInstance__00573610((FlashLibraryInstance *)(self + 0x2c58));
  /* try { // try from 00508d6f to 00508d73 has its CatchHandler @ 00509128 */
  FlashLibraryInstance__FlashLibraryInstance__00573610((FlashLibraryInstance *)(self + 0x2cf8));
  /* try { // try from 00508d7b to 00508d7f has its CatchHandler @ 00509121 */
  FlashLibraryInstance__FlashLibraryInstance__00573610((FlashLibraryInstance *)(self + 0x2d98));
  *(uint32_t *)(self + 0x2e38) = 1;
  *(uint32_t *)(self + 0x2e3c) = 1;
  *(uint32_t *)(self + 0x2e40) = 0x40a00000;
  *(uint32_t *)(self + 0x2e44) = 0x40a00000;
  *(uint32_t *)(self + 0x2e48) = 1;
  *(uint32_t *)(self + 0x2e50) = 0xffffffff;
  *(uint64_t *)(self + 0x2e58) = 0;
  /* try { // try from 00508dd1 to 00508dd5 has its CatchHandler @ 00509117 */
  FlashLibraryInstance__FlashLibraryInstance__00573610((FlashLibraryInstance *)(self + 0x2e60));
  /* try { // try from 00508de0 to 00508de4 has its CatchHandler @ 00509110 */
  FlashLibraryInstance__FlashLibraryInstance__00573610((FlashLibraryInstance *)(self + 0x2f00));
  /* try { // try from 00508def to 00508df3 has its CatchHandler @ 00509109 */
  FlashLibraryInstance__FlashLibraryInstance__00573610((FlashLibraryInstance *)(self + 0x2fa0));
  /* try { // try from 00508dfb to 00508dff has its CatchHandler @ 005090ab */
  FlashLibraryInstance__FlashLibraryInstance__00573610((FlashLibraryInstance *)(self + 0x3040));
  *(uint32_t *)(self + 0x30e0) = 1;
  *(uint32_t *)(self + 0x30e4) = 1;
  *(uint32_t *)(self + 0x30e8) = 0x40a00000;
  *(uint32_t *)(self + 0x30ec) = 0x40a00000;
  *(uint32_t *)(self + 0x30f0) = 1;
  *(uint32_t *)(self + 0x30f8) = 0xffffffff;
  *(uint64_t *)(self + 0x3100) = 0;
  /* try { // try from 00508e51 to 00508e55 has its CatchHandler @ 00509067 */
  FlashLibraryInstance__FlashLibraryInstance__00573610((FlashLibraryInstance *)(self + 0x3108));
  /* try { // try from 00508e60 to 00508e64 has its CatchHandler @ 00509151 */
  FlashLibraryInstance__FlashLibraryInstance__00573610((FlashLibraryInstance *)(self + 0x31a8));
  /* try { // try from 00508e6f to 00508e73 has its CatchHandler @ 00509147 */
  FlashLibraryInstance__FlashLibraryInstance__00573610((FlashLibraryInstance *)(self + 0x3248));
  /* try { // try from 00508e7b to 00508e7f has its CatchHandler @ 0050913d */
  FlashLibraryInstance__FlashLibraryInstance__00573610((FlashLibraryInstance *)(self + 0x32e8));
  *(uint32_t *)(self + 0x3388) = 1;
  *(uint32_t *)(self + 0x338c) = 1;
  *(uint32_t *)(self + 0x3390) = 0x40a00000;
  *(uint32_t *)(self + 0x3394) = 0x40a00000;
  *(uint32_t *)(self + 0x3398) = 1;
  *(uint32_t *)(self + 0x33a0) = 0xffffffff;
  *(uint64_t *)(self + 0x33a8) = 0;
  /* try { // try from 00508ed1 to 00508ed5 has its CatchHandler @ 00509136 */
  FlashLibraryInstance__FlashLibraryInstance__00573610((FlashLibraryInstance *)(self + 0x33b0));
  /* try { // try from 00508ee0 to 00508ee4 has its CatchHandler @ 0050915f */
  FlashLibraryInstance__FlashLibraryInstance__00573610((FlashLibraryInstance *)(self + 0x3450));
  /* try { // try from 00508eef to 00508ef3 has its CatchHandler @ 00509158 */
  FlashLibraryInstance__FlashLibraryInstance__00573610((FlashLibraryInstance *)(self + 0x34f0));
  /* try { // try from 00508efb to 00508eff has its CatchHandler @ 00509163 */
  FlashLibraryInstance__FlashLibraryInstance__00573610((FlashLibraryInstance *)(self + 0x3590));
  SMBLevelChapterPortalInterface = self;
  *(uint *)(self + 0x34) = *(uint *)(self + 0x34) & 0xfff003ff;
  *(uint32_t *)(self + 0x3630) = 1;
  *(uint32_t *)(self + 0x3634) = 1;
  *(uint32_t *)(self + 0x3638) = 0x40a00000;
  *(uint32_t *)(self + 0x363c) = 0x40a00000;
  *(uint32_t *)(self + 0x3640) = 1;
  *(uint64_t *)(self + 0x36f8) = 0;
  *(uint32_t *)(self + 0x3700) = 0;
  *(uint32_t *)(self + 0x3704) = 0;
  *(uint32_t *)(self + 0x3768) = 0;
  *(uint32_t *)(self + 0x376c) = 0;
  *(uint32_t *)(self + 0x3770) = 0;
  *(uint32_t *)(self + 0x7c) = 0;
  /* try { // try from 00508f89 to 00508f8d has its CatchHandler @ 00509062 */
  this_00 = operator_new(0x90);
  /* try { // try from 00508f94 to 00508f98 has its CatchHandler @ 00509006 */
  SQLDatabase__SQLDatabase(this_00);
  pPortalConnection = this_00;
  return;
}

/* ======================================================================
 * SMBLevelPortalInterface__DoSearch  (Ghidra `DoSearch` @ 005099a0)
 * Signature: uint8_t __thiscall DoSearch(SMBLevelPortalInterface * self)
 * Class: SMBLevelPortalInterface
 * Calls: `ConvertWCHARtoTCHAR`, `FlashEditableTextField__GetText`, `Sprint`, `memcpy`, `operator_delete`, `std__string_string`, `strlen`
 * Called by: (none)
 */
/* WARNING: Removing unreachable block (ram,0x00509acf) */
/* SMBLevelPortalInterface__DoSearch() */

void __thiscall SMBLevelPortalInterface__DoSearch(SMBLevelPortalInterface *self)

{
  int *piVar1;
  int iVar2;
  char *__dest;
  char *__src;
  uint64_t *puVar3;
  size_t sVar4;
  bool bVar5;
  long local_38[2];
  char *local_28;
  allocator local_1a[10];

  puVar3 = (uint64_t *)FlashEditableTextField__GetText(
      *(FlashEditableTextField **)(*(long *)(self + 0x36f0) + 0x50));
  local_28 = (char *)0x0;
  ConvertWCHARtoTCHAR(*puVar3, &local_28);
  std__string_string((string *)local_38, local_28, local_1a);
  if (*(int *)(self + 0x376c) == 3) {
    Sprint("SELECT smb_editor_levelinfo.* FROM smb_editor_levelinfo JOIN smb_editor_author "
           "\t\t\t\t\t\t\t\t\t\t\t  ON author_name LIKE \'%%%s%%\' WHERE "
           "smb_editor_levelinfo.author_id = smb_editor_author.author_id \t\t\t\t\t\t\t\t\t\t\t  "
           "UNION SELECT smb_editor_levelinfo.* FROM smb_editor_levelinfo WHERE levelname LIKE "
           "\'%%%s%%\' OR level_id = \'%s\'",
           strLargeString, local_28, local_28, local_28, *(uint32_t *)(self + 0x3768));
  } else if (*(int *)(self + 0x376c) == 1) {
    /* try { // try from 00509a69 to 00509a94 has its CatchHandler @ 00509abc */
    Sprint("SELECT * FROM smb_editor_chapterinfo WHERE chaptername LIKE \'%%%s%%\' LIMIT %i, 10",
           strLargeString, local_28, *(uint32_t *)(self + 0x3768));
  }
  __src = strLargeString;
  sVar4 = strlen(strLargeString);
  __dest = strPortalUploadQuery;
  bVar5 = __src != strPortalUploadQuery;
  *(char **)(self + 0x36f8) = strPortalUploadQuery;
  if (bVar5) {
    memcpy(__dest, __src, (long)(int)sVar4 + 1);
  }
  operator_delete(local_28);
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
 * SMBLevelPortalInterface__IsInSearchMode  (Ghidra `IsInSearchMode` @ 00509ae0)
 * Signature: uint8_t __thiscall IsInSearchMode(SMBLevelPortalInterface * self)
 * Class: SMBLevelPortalInterface
 * Calls: `FlashEditableTextField__GetText`
 * Called by: (none)
 */
/* SMBLevelPortalInterface__IsInSearchMode() */

bool __thiscall SMBLevelPortalInterface__IsInSearchMode(SMBLevelPortalInterface *self)

{
  long *plVar1;

  plVar1 = (long *)FlashEditableTextField__GetText(
      *(FlashEditableTextField **)(*(long *)(self + 0x36f0) + 0x50));
  return *(long *)(*plVar1 + -0x18) != 0;
}

/* ======================================================================
 * SMBLevelPortalInterface__Render  (Ghidra `Render` @ 00509d60)
 * Signature: uint8_t __thiscall Render(SMBLevelPortalInterface * self)
 * Class: SMBLevelPortalInterface
 * Calls: `Camera__SetCameraMatricies`, `Camera__SetOrthoProjection`, `FlashLibraryInstance__GotoAndStop`, `FlashLibraryInstance__Render`, `RenderRating`, `SMBSelectionMenu__Render`, `TWindow__getAspectRatio`
 * Called by: (none)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SMBLevelPortalInterface__Render() */

void __thiscall SMBLevelPortalInterface__Render(SMBLevelPortalInterface *self)

{
  int iVar1;
  long lVar2;
  TWindow *this_00;
  float fVar3;

  SMBSelectionMenu__Render((SMBSelectionMenu *)self);
  if ((*(ushort *)(self + 0x34) & 0x3ff) != 1) {
    return;
  }
  iVar1 = *(int *)(self + 0x376c);
  if (((iVar1 == 3) || (iVar1 == 1)) || (iVar1 == 2)) {
    Camera__SetOrthoProjection(*(Camera **)(SuperMeatBoy + 0x38), _DAT_005c0c9c /* R:240.0f */,
                               DAT_005c0c98 /* R:-240.0f */, DAT_005c0c94 /* R:-426.5f */,
                               DAT_005c0c90 /* R:426.5f */, DAT_005c07a4 /* R:-1.0f */,
                               DAT_005be894 /* R:1.0f */);
    Camera__SetCameraMatricies(*(Camera **)(SuperMeatBoy + 0x38), 2);
    if (*(int *)(self + 0x120) != -1) {
      FlashLibraryInstance__GotoAndStop((FlashLibraryInstance *)(self + 0x130),
                                        *(int *)(self + 0x3b0));
      FlashLibraryInstance__Render((FlashLibraryInstance *)(self + 0x130));
      FlashLibraryInstance__GotoAndStop((FlashLibraryInstance *)(self + 0x1d0),
                                        *(int *)(self + 0x3b4) + 1);
      FlashLibraryInstance__Render((FlashLibraryInstance *)(self + 0x1d0));
      RenderRating((FlashLibraryInstance *)(self + 0x310), *(float *)(self + 0x3b8));
      RenderRating((FlashLibraryInstance *)(self + 0x270), *(float *)(self + 0x3bc));
    }
    if (*(int *)(self + 0x3c8) != -1) {
      FlashLibraryInstance__GotoAndStop((FlashLibraryInstance *)(self + 0x3d8),
                                        *(int *)(self + 0x658));
      FlashLibraryInstance__Render((FlashLibraryInstance *)(self + 0x3d8));
      FlashLibraryInstance__GotoAndStop((FlashLibraryInstance *)(self + 0x478),
                                        *(int *)(self + 0x65c) + 1);
      FlashLibraryInstance__Render((FlashLibraryInstance *)(self + 0x478));
      RenderRating((FlashLibraryInstance *)(self + 0x5b8), *(float *)(self + 0x660));
      RenderRating((FlashLibraryInstance *)(self + 0x518), *(float *)(self + 0x664));
    }
    if (*(int *)(self + 0x670) != -1) {
      FlashLibraryInstance__GotoAndStop((FlashLibraryInstance *)(self + 0x680),
                                        *(int *)(self + 0x900));
      FlashLibraryInstance__Render((FlashLibraryInstance *)(self + 0x680));
      FlashLibraryInstance__GotoAndStop((FlashLibraryInstance *)(self + 0x720),
                                        *(int *)(self + 0x904) + 1);
      FlashLibraryInstance__Render((FlashLibraryInstance *)(self + 0x720));
      RenderRating((FlashLibraryInstance *)(self + 0x860), *(float *)(self + 0x908));
      RenderRating((FlashLibraryInstance *)(self + 0x7c0), *(float *)(self + 0x90c));
    }
    if (*(int *)(self + 0x918) != -1) {
      FlashLibraryInstance__GotoAndStop((FlashLibraryInstance *)(self + 0x928),
                                        *(int *)(self + 0xba8));
      FlashLibraryInstance__Render((FlashLibraryInstance *)(self + 0x928));
      FlashLibraryInstance__GotoAndStop((FlashLibraryInstance *)(self + 0x9c8),
                                        *(int *)(self + 0xbac) + 1);
      FlashLibraryInstance__Render((FlashLibraryInstance *)(self + 0x9c8));
      RenderRating((FlashLibraryInstance *)(self + 0xb08), *(float *)(self + 0xbb0));
      RenderRating((FlashLibraryInstance *)(self + 0xa68), *(float *)(self + 0xbb4));
    }
    if (*(int *)(self + 0xbc0) != -1) {
      FlashLibraryInstance__GotoAndStop((FlashLibraryInstance *)(self + 0xbd0),
                                        *(int *)(self + 0xe50));
      FlashLibraryInstance__Render((FlashLibraryInstance *)(self + 0xbd0));
      FlashLibraryInstance__GotoAndStop((FlashLibraryInstance *)(self + 0xc70),
                                        *(int *)(self + 0xe54) + 1);
      FlashLibraryInstance__Render((FlashLibraryInstance *)(self + 0xc70));
      RenderRating((FlashLibraryInstance *)(self + 0xdb0), *(float *)(self + 0xe58));
      RenderRating((FlashLibraryInstance *)(self + 0xd10), *(float *)(self + 0xe5c));
    }
    if (*(int *)(self + 0xe68) != -1) {
      FlashLibraryInstance__GotoAndStop((FlashLibraryInstance *)(self + 0xe78),
                                        *(int *)(self + 0x10f8));
      FlashLibraryInstance__Render((FlashLibraryInstance *)(self + 0xe78));
      FlashLibraryInstance__GotoAndStop((FlashLibraryInstance *)(self + 0xf18),
                                        *(int *)(self + 0x10fc) + 1);
      FlashLibraryInstance__Render((FlashLibraryInstance *)(self + 0xf18));
      RenderRating((FlashLibraryInstance *)(self + 0x1058), *(float *)(self + 0x1100));
      RenderRating((FlashLibraryInstance *)(self + 0xfb8), *(float *)(self + 0x1104));
    }
    if (*(int *)(self + 0x1110) != -1) {
      FlashLibraryInstance__GotoAndStop((FlashLibraryInstance *)(self + 0x1120),
                                        *(int *)(self + 0x13a0));
      FlashLibraryInstance__Render((FlashLibraryInstance *)(self + 0x1120));
      FlashLibraryInstance__GotoAndStop((FlashLibraryInstance *)(self + 0x11c0),
                                        *(int *)(self + 0x13a4) + 1);
      FlashLibraryInstance__Render((FlashLibraryInstance *)(self + 0x11c0));
      RenderRating((FlashLibraryInstance *)(self + 0x1300), *(float *)(self + 0x13a8));
      RenderRating((FlashLibraryInstance *)(self + 0x1260), *(float *)(self + 0x13ac));
    }
    if (*(int *)(self + 0x13b8) != -1) {
      FlashLibraryInstance__GotoAndStop((FlashLibraryInstance *)(self + 0x13c8),
                                        *(int *)(self + 0x1648));
      FlashLibraryInstance__Render((FlashLibraryInstance *)(self + 0x13c8));
      FlashLibraryInstance__GotoAndStop((FlashLibraryInstance *)(self + 0x1468),
                                        *(int *)(self + 0x164c) + 1);
      FlashLibraryInstance__Render((FlashLibraryInstance *)(self + 0x1468));
      RenderRating((FlashLibraryInstance *)(self + 0x15a8), *(float *)(self + 0x1650));
      RenderRating((FlashLibraryInstance *)(self + 0x1508), *(float *)(self + 0x1654));
    }
    if (*(int *)(self + 0x1660) != -1) {
      FlashLibraryInstance__GotoAndStop((FlashLibraryInstance *)(self + 0x1670),
                                        *(int *)(self + 0x18f0));
      FlashLibraryInstance__Render((FlashLibraryInstance *)(self + 0x1670));
      FlashLibraryInstance__GotoAndStop((FlashLibraryInstance *)(self + 0x1710),
                                        *(int *)(self + 0x18f4) + 1);
      FlashLibraryInstance__Render((FlashLibraryInstance *)(self + 0x1710));
      RenderRating((FlashLibraryInstance *)(self + 0x1850), *(float *)(self + 0x18f8));
      RenderRating((FlashLibraryInstance *)(self + 0x17b0), *(float *)(self + 0x18fc));
    }
    if (*(int *)(self + 0x1908) != -1) {
      FlashLibraryInstance__GotoAndStop((FlashLibraryInstance *)(self + 0x1918),
                                        *(int *)(self + 0x1b98));
      FlashLibraryInstance__Render((FlashLibraryInstance *)(self + 0x1918));
      FlashLibraryInstance__GotoAndStop((FlashLibraryInstance *)(self + 0x19b8),
                                        *(int *)(self + 0x1b9c) + 1);
      FlashLibraryInstance__Render((FlashLibraryInstance *)(self + 0x19b8));
      RenderRating((FlashLibraryInstance *)(self + 0x1af8), *(float *)(self + 0x1ba0));
      RenderRating((FlashLibraryInstance *)(self + 0x1a58), *(float *)(self + 0x1ba4));
    }
  } else if (iVar1 == 0) {
    Camera__SetOrthoProjection(*(Camera **)(SuperMeatBoy + 0x38), _DAT_005c0c9c /* R:240.0f */,
                               DAT_005c0c98 /* R:-240.0f */, DAT_005c0c94 /* R:-426.5f */,
                               DAT_005c0c90 /* R:426.5f */, DAT_005c07a4 /* R:-1.0f */,
                               DAT_005be894 /* R:1.0f */);
    Camera__SetCameraMatricies(*(Camera **)(SuperMeatBoy + 0x38), 2);
    if (*(int *)(self + 0x2900) != -1) {
      FlashLibraryInstance__GotoAndStop((FlashLibraryInstance *)(self + 0x29b0),
                                        *(int *)(self + 0x2b94) + 1);
      FlashLibraryInstance__Render((FlashLibraryInstance *)(self + 0x29b0));
      RenderRating((FlashLibraryInstance *)(self + 0x2af0), *(float *)(self + 0x2b98));
      RenderRating((FlashLibraryInstance *)(self + 0x2a50), *(float *)(self + 0x2b9c));
    }
    if (*(int *)(self + 0x2ba8) != -1) {
      FlashLibraryInstance__GotoAndStop((FlashLibraryInstance *)(self + 0x2c58),
                                        *(int *)(self + 0x2e3c) + 1);
      FlashLibraryInstance__Render((FlashLibraryInstance *)(self + 0x2c58));
      RenderRating((FlashLibraryInstance *)(self + 0x2d98), *(float *)(self + 0x2e40));
      RenderRating((FlashLibraryInstance *)(self + 0x2cf8), *(float *)(self + 0x2e44));
    }
    if (*(int *)(self + 0x2e50) != -1) {
      FlashLibraryInstance__GotoAndStop((FlashLibraryInstance *)(self + 0x2f00),
                                        *(int *)(self + 0x30e4) + 1);
      FlashLibraryInstance__Render((FlashLibraryInstance *)(self + 0x2f00));
      RenderRating((FlashLibraryInstance *)(self + 0x3040), *(float *)(self + 0x30e8));
      RenderRating((FlashLibraryInstance *)(self + 0x2fa0), *(float *)(self + 0x30ec));
    }
    if (*(int *)(self + 0x30f8) != -1) {
      FlashLibraryInstance__GotoAndStop((FlashLibraryInstance *)(self + 0x31a8),
                                        *(int *)(self + 0x338c) + 1);
      FlashLibraryInstance__Render((FlashLibraryInstance *)(self + 0x31a8));
      RenderRating((FlashLibraryInstance *)(self + 0x32e8), *(float *)(self + 0x3390));
      RenderRating((FlashLibraryInstance *)(self + 0x3248), *(float *)(self + 0x3394));
    }
    if (*(int *)(self + 0x33a0) != -1) {
      FlashLibraryInstance__GotoAndStop((FlashLibraryInstance *)(self + 0x3450),
                                        *(int *)(self + 0x3634) + 1);
      FlashLibraryInstance__Render((FlashLibraryInstance *)(self + 0x3450));
      RenderRating((FlashLibraryInstance *)(self + 0x3590), *(float *)(self + 0x3638));
      RenderRating((FlashLibraryInstance *)(self + 0x34f0), *(float *)(self + 0x363c));
    }
    if (*(int *)(self + 0x1bb8) != -1) {
      FlashLibraryInstance__GotoAndStop((FlashLibraryInstance *)(self + 0x1c68),
                                        *(int *)(self + 0x1e4c) + 1);
      FlashLibraryInstance__Render((FlashLibraryInstance *)(self + 0x1c68));
    }
    if (*(int *)(self + 0x1e60) != -1) {
      FlashLibraryInstance__GotoAndStop((FlashLibraryInstance *)(self + 0x1f10),
                                        *(int *)(self + 0x20f4) + 1);
      FlashLibraryInstance__Render((FlashLibraryInstance *)(self + 0x1f10));
    }
    if (*(int *)(self + 0x2108) != -1) {
      FlashLibraryInstance__GotoAndStop((FlashLibraryInstance *)(self + 0x21b8),
                                        *(int *)(self + 0x239c) + 1);
      FlashLibraryInstance__Render((FlashLibraryInstance *)(self + 0x21b8));
    }
    if (*(int *)(self + 0x23b0) != -1) {
      FlashLibraryInstance__GotoAndStop((FlashLibraryInstance *)(self + 0x2460),
                                        *(int *)(self + 0x2644) + 1);
      FlashLibraryInstance__Render((FlashLibraryInstance *)(self + 0x2460));
    }
    if (*(int *)(self + 0x2658) != -1) {
      FlashLibraryInstance__GotoAndStop((FlashLibraryInstance *)(self + 0x2708),
                                        *(int *)(self + 0x28ec) + 1);
      FlashLibraryInstance__Render((FlashLibraryInstance *)(self + 0x2708));
    }
    (**(code **)(**(long **)(self + 0x3758) + 0x10))();
  }
  if (*(int *)(self + 0x3770) == 1) {
    (**(code **)(**(long **)(self + 0x3748) + 0x10))();
  }
  this_00 = Window;
  lVar2 = Mouse;
  *(float *)(*(long *)(self + 0x3750) + 0x30) =
      DAT_005c0c90 /* R:426.5f */ * *(float *)(Mouse + 0xc) + _DAT_005bff44 /* R:5.0f */;
  *(float *)(*(long *)(self + 0x3750) + 0x34) =
      DAT_005c0c98 /* R:-240.0f */ * *(float *)(lVar2 + 0x10) - _DAT_005bf840 /* R:15.0f */;
  fVar3 = (float)TWindow__getAspectRatio(this_00);
  if (fVar3 != DAT_005c4894 /* R:1.7777777910232544f */) {
    *(float *)(*(long *)(self + 0x3750) + 0x34) =
        ((float)*(ushort *)(Window + 8) / (float)*(ushort *)(Window + 10)) *
        *(float *)(*(long *)(self + 0x3750) + 0x34);
  }
  /* WARNING: Could not recover jumptable at 0x0050a309. Too many branches */
  /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(self + 0x3750) + 0x10))();
  return;
}

/* ======================================================================
 * SMBLevelPortalInterface__SetSelectedLine  (Ghidra `SetSelectedLine` @ 0050a600)
 * Signature: uint8_t __thiscall SetSelectedLine(SMBLevelPortalInterface * self, PortalInterfaceElement * arg1)
 * Class: SMBLevelPortalInterface
 * Calls: (none)
 * Called by: (none)
 */
/* SMBLevelPortalInterface__SetSelectedLine(SMBLevelPortalInterface__PortalInterfaceElement) */

void __thiscall SMBLevelPortalInterface__SetSelectedLine(SMBLevelPortalInterface *self,
                                                         PortalInterfaceElement *arg1)

{
  *(PortalInterfaceElement **)(self + 0x1bb0) = arg1;
  return;
}

/* ======================================================================
 * SMBLevelPortalInterface__GetSelectedLine  (Ghidra `GetSelectedLine` @ 0050a610)
 * Signature: uint8_t __thiscall GetSelectedLine(SMBLevelPortalInterface * self)
 * Class: SMBLevelPortalInterface
 * Calls: (none)
 * Called by: (none)
 */
/* SMBLevelPortalInterface__GetSelectedLine() */

uint64_t __thiscall SMBLevelPortalInterface__GetSelectedLine(SMBLevelPortalInterface *self)

{
  return *(uint64_t *)(self + 0x1bb0);
}

/* ======================================================================
 * SMBLevelPortalInterface__FillList  (Ghidra `FillList` @ 0050a980)
 * Signature: uint8_t __thiscall FillList(SMBLevelPortalInterface * self)
 * Class: SMBLevelPortalInterface
 * Calls: `EditorButton__SetUnSelected`, `FillPortalInterfaceElement`, `SQLQuery__ReleaseResults`, `SQLResultSet__NextRow`, `SetAuthorText`
 * Called by: (none)
 */
/* SMBLevelPortalInterface__FillList() */

void __thiscall SMBLevelPortalInterface__FillList(SMBLevelPortalInterface *self)

{
  EditorButton *pEVar1;
  int iVar2;
  int iVar3;
  long lVar4;

  iVar3 = *(int *)(self + 0x376c);
  if (((iVar3 == 1) || (iVar3 == 3)) || (iVar3 == 2)) {
    iVar3 = 0;
    if (sqlQuery._16_8_ != 0) {
      iVar2 = SQLResultSet__NextRow((SQLResultSet *)sqlQuery._16_8_);
      iVar3 = 0;
      if (iVar2 == 1) {
        iVar3 = 1;
        FillPortalInterfaceElement((SQLQuery *)sqlQuery, (PortalInterfaceElement *)(self + 0x120),
                                   *(FlashTextField **)(self + 0xd0),
                                   (uint)(*(int *)(self + 0x376c) == 3), 0);
        iVar2 = SQLResultSet__NextRow((SQLResultSet *)sqlQuery._16_8_);
        if (iVar2 == 1) {
          iVar3 = 2;
          FillPortalInterfaceElement((SQLQuery *)sqlQuery, (PortalInterfaceElement *)(self + 0x3c8),
                                     *(FlashTextField **)(self + 0xd8),
                                     (uint)(*(int *)(self + 0x376c) == 3), 0);
          iVar2 = SQLResultSet__NextRow((SQLResultSet *)sqlQuery._16_8_);
          if (iVar2 == 1) {
            iVar3 = 3;
            FillPortalInterfaceElement(
                (SQLQuery *)sqlQuery, (PortalInterfaceElement *)(self + 0x670),
                *(FlashTextField **)(self + 0xe0), (uint)(*(int *)(self + 0x376c) == 3), 0);
            iVar2 = SQLResultSet__NextRow((SQLResultSet *)sqlQuery._16_8_);
            if (iVar2 == 1) {
              iVar3 = 4;
              FillPortalInterfaceElement(
                  (SQLQuery *)sqlQuery, (PortalInterfaceElement *)(self + 0x918),
                  *(FlashTextField **)(self + 0xe8), (uint)(*(int *)(self + 0x376c) == 3), 0);
              iVar2 = SQLResultSet__NextRow((SQLResultSet *)sqlQuery._16_8_);
              if (iVar2 == 1) {
                iVar3 = 5;
                FillPortalInterfaceElement(
                    (SQLQuery *)sqlQuery, (PortalInterfaceElement *)(self + 0xbc0),
                    *(FlashTextField **)(self + 0xf0), (uint)(*(int *)(self + 0x376c) == 3), 0);
                iVar2 = SQLResultSet__NextRow((SQLResultSet *)sqlQuery._16_8_);
                if (iVar2 == 1) {
                  iVar3 = 6;
                  FillPortalInterfaceElement(
                      (SQLQuery *)sqlQuery, (PortalInterfaceElement *)(self + 0xe68),
                      *(FlashTextField **)(self + 0xf8), (uint)(*(int *)(self + 0x376c) == 3), 0);
                  iVar2 = SQLResultSet__NextRow((SQLResultSet *)sqlQuery._16_8_);
                  if (iVar2 == 1) {
                    iVar3 = 7;
                    FillPortalInterfaceElement((SQLQuery *)sqlQuery,
                                               (PortalInterfaceElement *)(self + 0x1110),
                                               *(FlashTextField **)(self + 0x100),
                                               (uint)(*(int *)(self + 0x376c) == 3), 0);
                    iVar2 = SQLResultSet__NextRow((SQLResultSet *)sqlQuery._16_8_);
                    if (iVar2 == 1) {
                      iVar3 = 8;
                      FillPortalInterfaceElement((SQLQuery *)sqlQuery,
                                                 (PortalInterfaceElement *)(self + 0x13b8),
                                                 *(FlashTextField **)(self + 0x108),
                                                 (uint)(*(int *)(self + 0x376c) == 3), 0);
                      iVar2 = SQLResultSet__NextRow((SQLResultSet *)sqlQuery._16_8_);
                      if (iVar2 == 1) {
                        iVar3 = 9;
                        FillPortalInterfaceElement((SQLQuery *)sqlQuery,
                                                   (PortalInterfaceElement *)(self + 0x1660),
                                                   *(FlashTextField **)(self + 0x110),
                                                   (uint)(*(int *)(self + 0x376c) == 3), 0);
                        iVar2 = SQLResultSet__NextRow((SQLResultSet *)sqlQuery._16_8_);
                        if (iVar2 == 1) {
                          FillPortalInterfaceElement((SQLQuery *)sqlQuery,
                                                     (PortalInterfaceElement *)(self + 0x1908),
                                                     *(FlashTextField **)(self + 0x118),
                                                     (uint)(*(int *)(self + 0x376c) == 3), 0);
                          SQLResultSet__NextRow((SQLResultSet *)sqlQuery._16_8_);
                          goto LAB_0050a9f2;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    do {
      lVar4 = (long)iVar3;
      iVar3 = iVar3 + 1;
      FlashTextField__SetText(*(char **)(self + lVar4 * 8 + 0xd0), "");
      *(uint32_t *)(self + lVar4 * 0x2a8 + 0x120) = 0xffffffff;
      EditorButton__SetUnSelected(*(EditorButton **)(self + lVar4 * 0x2a8 + 0x128));
    } while (iVar3 < 10);
  LAB_0050a9f2:
    SQLQuery__ReleaseResults((SQLQuery *)sqlQuery);
    return;
  }
  if (iVar3 != 0) {
    return;
  }
  FlashTextField__SetText(*(char **)(self + 0xd0), "");
  FlashTextField__SetText(*(char **)(self + 0xd8), "");
  FlashTextField__SetText(*(char **)(self + 0xe0), "");
  FlashTextField__SetText(*(char **)(self + 0xe8), "");
  FlashTextField__SetText(*(char **)(self + 0xf0), "");
  FlashTextField__SetText(*(char **)(self + 0xf8), "");
  FlashTextField__SetText(*(char **)(self + 0x100), "");
  FlashTextField__SetText(*(char **)(self + 0x108), "");
  FlashTextField__SetText(*(char **)(self + 0x110), "");
  FlashTextField__SetText(*(char **)(self + 0x118), "");
  iVar3 = 0;
  if (sqlQuery._16_8_ == 0) {
  LAB_0050aaf0:
    do {
      iVar2 = iVar3 + 1;
      pEVar1 = *(EditorButton **)(self + (long)iVar3 * 0x2a8 + 0x2908);
      *(uint32_t *)(self + (long)iVar3 * 0x2a8 + 0x2900) = 0xffffffff;
      EditorButton__SetUnSelected(pEVar1);
      iVar3 = iVar2;
    } while (iVar2 < 5);
  } else {
    iVar2 = SQLResultSet__NextRow((SQLResultSet *)sqlQuery._16_8_);
    iVar3 = 0;
    if (iVar2 != 1)
      goto LAB_0050aaf0;
    iVar3 = 1;
    FillPortalInterfaceElement((SQLQuery *)sqlQuery, (PortalInterfaceElement *)(self + 0x2900),
                               *(FlashTextField **)(self + 0xf8), 1, 0);
    SetAuthorText(*(FlashAnimationLibrary **)(self + 8), 6, (SQLQuery *)sqlQuery);
    iVar2 = SQLResultSet__NextRow((SQLResultSet *)sqlQuery._16_8_);
    if (iVar2 != 1)
      goto LAB_0050aaf0;
    iVar3 = 2;
    FillPortalInterfaceElement((SQLQuery *)sqlQuery, (PortalInterfaceElement *)(self + 0x2ba8),
                               *(FlashTextField **)(self + 0x100), 1, 0);
    SetAuthorText(*(FlashAnimationLibrary **)(self + 8), 7, (SQLQuery *)sqlQuery);
    iVar2 = SQLResultSet__NextRow((SQLResultSet *)sqlQuery._16_8_);
    if (iVar2 != 1)
      goto LAB_0050aaf0;
    iVar3 = 3;
    FillPortalInterfaceElement((SQLQuery *)sqlQuery, (PortalInterfaceElement *)(self + 0x2e50),
                               *(FlashTextField **)(self + 0x108), 1, 0);
    SetAuthorText(*(FlashAnimationLibrary **)(self + 8), 8, (SQLQuery *)sqlQuery);
    iVar2 = SQLResultSet__NextRow((SQLResultSet *)sqlQuery._16_8_);
    if (iVar2 != 1)
      goto LAB_0050aaf0;
    iVar3 = 4;
    FillPortalInterfaceElement((SQLQuery *)sqlQuery, (PortalInterfaceElement *)(self + 0x30f8),
                               *(FlashTextField **)(self + 0x110), 1, 0);
    SetAuthorText(*(FlashAnimationLibrary **)(self + 8), 9, (SQLQuery *)sqlQuery);
    iVar2 = SQLResultSet__NextRow((SQLResultSet *)sqlQuery._16_8_);
    if (iVar2 != 1)
      goto LAB_0050aaf0;
    FillPortalInterfaceElement((SQLQuery *)sqlQuery, (PortalInterfaceElement *)(self + 0x33a0),
                               *(FlashTextField **)(self + 0x118), 1, 0);
    SetAuthorText(*(FlashAnimationLibrary **)(self + 8), 10, (SQLQuery *)sqlQuery);
    SQLResultSet__NextRow((SQLResultSet *)sqlQuery._16_8_);
  }
  iVar3 = 0;
  if (sqlQuery2._16_8_ != 0) {
    iVar2 = SQLResultSet__NextRow((SQLResultSet *)sqlQuery2._16_8_);
    iVar3 = 0;
    if (iVar2 == 1) {
      iVar3 = 1;
      FillPortalInterfaceElement((SQLQuery *)sqlQuery2, (PortalInterfaceElement *)(self + 0x1bb8),
                                 *(FlashTextField **)(self + 0xd0), 0, 0);
      SetAuthorText(*(FlashAnimationLibrary **)(self + 8), 1, (SQLQuery *)sqlQuery2);
      iVar2 = SQLResultSet__NextRow((SQLResultSet *)sqlQuery2._16_8_);
      if (iVar2 == 1) {
        iVar3 = 2;
        FillPortalInterfaceElement((SQLQuery *)sqlQuery2, (PortalInterfaceElement *)(self + 0x1e60),
                                   *(FlashTextField **)(self + 0xd8), 0, 0);
        SetAuthorText(*(FlashAnimationLibrary **)(self + 8), 2, (SQLQuery *)sqlQuery2);
        iVar2 = SQLResultSet__NextRow((SQLResultSet *)sqlQuery2._16_8_);
        if (iVar2 == 1) {
          iVar3 = 3;
          FillPortalInterfaceElement((SQLQuery *)sqlQuery2,
                                     (PortalInterfaceElement *)(self + 0x2108),
                                     *(FlashTextField **)(self + 0xe0), 0, 0);
          SetAuthorText(*(FlashAnimationLibrary **)(self + 8), 3, (SQLQuery *)sqlQuery2);
          iVar2 = SQLResultSet__NextRow((SQLResultSet *)sqlQuery2._16_8_);
          if (iVar2 == 1) {
            iVar3 = 4;
            FillPortalInterfaceElement((SQLQuery *)sqlQuery2,
                                       (PortalInterfaceElement *)(self + 0x23b0),
                                       *(FlashTextField **)(self + 0xe8), 0, 0);
            SetAuthorText(*(FlashAnimationLibrary **)(self + 8), 4, (SQLQuery *)sqlQuery2);
            iVar2 = SQLResultSet__NextRow((SQLResultSet *)sqlQuery2._16_8_);
            if (iVar2 == 1) {
              FillPortalInterfaceElement((SQLQuery *)sqlQuery2,
                                         (PortalInterfaceElement *)(self + 0x2658),
                                         *(FlashTextField **)(self + 0xf0), 0, 0);
              SetAuthorText(*(FlashAnimationLibrary **)(self + 8), 5, (SQLQuery *)sqlQuery2);
              SQLResultSet__NextRow((SQLResultSet *)sqlQuery2._16_8_);
              goto LAB_0050ab6b;
            }
          }
        }
      }
    }
  }
  do {
    iVar2 = iVar3 + 1;
    pEVar1 = *(EditorButton **)(self + (long)iVar3 * 0x2a8 + 0x1bc0);
    *(uint32_t *)(self + (long)iVar3 * 0x2a8 + 0x1bb8) = 0xffffffff;
    EditorButton__SetUnSelected(pEVar1);
    iVar3 = iVar2;
  } while (iVar2 < 5);
LAB_0050ab6b:
  SQLQuery__ReleaseResults((SQLQuery *)sqlQuery2);
  SQLQuery__ReleaseResults((SQLQuery *)sqlQuery);
  return;
}

/* ======================================================================
 * SMBLevelPortalInterface__Update  (Ghidra `Update` @ 0050b0e0)
 * Signature: uint8_t __thiscall Update(SMBLevelPortalInterface * self)
 * Class: SMBLevelPortalInterface
 * Calls: `SMBSelectionMenu__Update`, `SQLDatabase__IsProcessingQueries`
 * Called by: (none)
 */
/* SMBLevelPortalInterface__Update() */

void __thiscall SMBLevelPortalInterface__Update(SMBLevelPortalInterface *self)

{
  int iVar1;

  SMBSelectionMenu__Update();
  if ((*(ushort *)(self + 0x34) & 0x3ff) != 0) {
    iVar1 = *(int *)(self + 0x376c);
    if (((((iVar1 == 1) || (iVar1 == 3)) || (iVar1 == 0)) || (iVar1 == 2)) &&
        ((*(int *)(self + 0x3770) == 1 &&
          (iVar1 = SQLDatabase__IsProcessingQueries(pPortalConnection), iVar1 == 0)))) {
      *(uint32_t *)(self + 0x3770) = 0;
      FillList(self);
    }
    if (*(int *)(self + 0x3770) != 1) {
      iVar1 = *(int *)(self + 0x376c);
      if (((iVar1 == 1) || (iVar1 == 3)) || (iVar1 == 2)) {
        if (*(int *)(self + 0x120) != -1) {
          (**(code **)(**(long **)(self + 0x128) + 0x48))();
        }
        if (*(int *)(self + 0x3c8) != -1) {
          (**(code **)(**(long **)(self + 0x3d0) + 0x48))();
        }
        if (*(int *)(self + 0x670) != -1) {
          (**(code **)(**(long **)(self + 0x678) + 0x48))();
        }
        if (*(int *)(self + 0x918) != -1) {
          (**(code **)(**(long **)(self + 0x920) + 0x48))();
        }
        if (*(int *)(self + 0xbc0) != -1) {
          (**(code **)(**(long **)(self + 0xbc8) + 0x48))();
        }
        if (*(int *)(self + 0xe68) != -1) {
          (**(code **)(**(long **)(self + 0xe70) + 0x48))();
        }
        if (*(int *)(self + 0x1110) != -1) {
          (**(code **)(**(long **)(self + 0x1118) + 0x48))();
        }
        if (*(int *)(self + 0x13b8) != -1) {
          (**(code **)(**(long **)(self + 0x13c0) + 0x48))();
        }
        if (*(int *)(self + 0x1660) != -1) {
          (**(code **)(**(long **)(self + 0x1668) + 0x48))();
        }
        if (*(int *)(self + 0x1908) != -1) {
          (**(code **)(**(long **)(self + 0x1910) + 0x48))();
        }
        (**(code **)(**(long **)(self + 0x3648) + 0x48))();
        (**(code **)(**(long **)(self + 0x3650) + 0x48))();
        (**(code **)(**(long **)(self + 0x3658) + 0x48))();
        (**(code **)(**(long **)(self + 0x3690) + 0x48))();
        (**(code **)(**(long **)(self + 0x3698) + 0x48))();
        (**(code **)(**(long **)(self + 0x36a0) + 0x48))();
        (**(code **)(**(long **)(self + 0x36a8) + 0x48))();
        (**(code **)(**(long **)(self + 14000) + 0x48))();
        (**(code **)(**(long **)(self + 0x36b8) + 0x48))();
        (**(code **)(**(long **)(self + 0x36c0) + 0x48))();
        (**(code **)(**(long **)(self + 0x36c8) + 0x48))();
        (**(code **)(**(long **)(self + 0x36d0) + 0x48))();
        (**(code **)(**(long **)(self + 0x36e0) + 0x48))();
        (**(code **)(**(long **)(self + 0x36d8) + 0x48))();
        (**(code **)(**(long **)(self + 0x36e8) + 0x48))();
        (**(code **)(**(long **)(self + 0x36f0) + 0x48))();
        iVar1 = *(int *)(self + 0x376c);
        if (iVar1 == 3) {
          /* WARNING: Could not recover jumptable at 0x0050b51f. Too many branches */
          /* WARNING: Treating indirect jump as call */
          (**(code **)(**(long **)(self + 0x3690) + 0x38))();
          return;
        }
        if (iVar1 == 1) {
          /* WARNING: Could not recover jumptable at 0x0050b537. Too many branches */
          /* WARNING: Treating indirect jump as call */
          (**(code **)(**(long **)(self + 0x3698) + 0x38))();
          return;
        }
        if (iVar1 == 2) {
          /* WARNING: Could not recover jumptable at 0x0050b467. Too many branches */
          /* WARNING: Treating indirect jump as call */
          (**(code **)(**(long **)(self + 0x36a0) + 0x38))();
          return;
        }
      } else {
        if (iVar1 == 4) {
          (**(code **)(**(long **)(self + 0x3678) + 0x48))();
          (**(code **)(**(long **)(self + 0x3680) + 0x48))();
          (**(code **)(**(long **)(self + 0x3688) + 0x48))();
          (**(code **)(**(long **)(self + 0x3708) + 0x48))();
          (**(code **)(**(long **)(self + 0x3710) + 0x48))();
          (**(code **)(**(long **)(self + 0x3718) + 0x48))();
          (**(code **)(**(long **)(self + 0x3720) + 0x48))();
          /* WARNING: Could not recover jumptable at 0x0050b50a. Too many branches */
          /* WARNING: Treating indirect jump as call */
          (**(code **)(**(long **)(self + 0x3728) + 0x48))();
          return;
        }
        if (iVar1 == 0) {
          (**(code **)(**(long **)(self + 0x3660) + 0x48))();
          (**(code **)(**(long **)(self + 0x3668) + 0x48))();
          (**(code **)(**(long **)(self + 0x3670) + 0x48))();
          if (*(int *)(self + 0x1bb8) != -1) {
            (**(code **)(**(long **)(self + 0x1bc0) + 0x48))();
          }
          if (*(int *)(self + 0x2900) != -1) {
            (**(code **)(**(long **)(self + 0x2908) + 0x48))();
          }
          if (*(int *)(self + 0x1e60) != -1) {
            (**(code **)(**(long **)(self + 0x1e68) + 0x48))();
          }
          if (*(int *)(self + 0x2ba8) != -1) {
            (**(code **)(**(long **)(self + 0x2bb0) + 0x48))();
          }
          if (*(int *)(self + 0x2108) != -1) {
            (**(code **)(**(long **)(self + 0x2110) + 0x48))();
          }
          if (*(int *)(self + 0x2e50) != -1) {
            (**(code **)(**(long **)(self + 0x2e58) + 0x48))();
          }
          if (*(int *)(self + 0x23b0) != -1) {
            (**(code **)(**(long **)(self + 0x23b8) + 0x48))();
          }
          if (*(int *)(self + 0x30f8) != -1) {
            (**(code **)(**(long **)(self + 0x3100) + 0x48))();
          }
          if (*(int *)(self + 0x2658) != -1) {
            (**(code **)(**(long **)(self + 0x2660) + 0x48))();
          }
          if (*(int *)(self + 0x33a0) != -1) {
            /* WARNING: Could not recover jumptable at 0x0050b259. Too many branches */
            /* WARNING: Treating indirect jump as call */
            (**(code **)(**(long **)(self + 0x33a8) + 0x48))();
            return;
          }
        }
      }
    }
  }
  return;
}

/* ======================================================================
 * SMBLevelPortalInterface__GetOrderingOrder  (Ghidra `GetOrderingOrder` @ 0050b540)
 * Signature: uint8_t __thiscall GetOrderingOrder(SMBLevelPortalInterface * self)
 * Class: SMBLevelPortalInterface
 * Calls: (none)
 * Called by: (none)
 */
/* SMBLevelPortalInterface__GetOrderingOrder() */

uint64_t __thiscall SMBLevelPortalInterface__GetOrderingOrder(SMBLevelPortalInterface *self)

{
  return *(uint64_t *)(GetOrderingOrder()::strOrderingString + (long)*(int *)(self + 0x3700) * 8);
}

/* ======================================================================
 * SMBLevelPortalInterface__GetOrderingParam  (Ghidra `GetOrderingParam` @ 0050b550)
 * Signature: uint8_t __thiscall GetOrderingParam(SMBLevelPortalInterface * self)
 * Class: SMBLevelPortalInterface
 * Calls: (none)
 * Called by: (none)
 */
/* SMBLevelPortalInterface__GetOrderingParam() */

uint64_t __thiscall SMBLevelPortalInterface__GetOrderingParam(SMBLevelPortalInterface *self)

{
  if (*(int *)(self + 0x376c) != 3) {
    return *(uint64_t *)(GetOrderingParam()::strOrderingParamString +
                         (long)*(int *)(self + 0x3704) * 8);
  }
  return *(uint64_t *)(GetOrderingParam()::strOrderingParamString +
                       (long)*(int *)(self + 0x3704) * 8);
}

/* ======================================================================
 * SMBLevelPortalInterface__GetList  (Ghidra `GetList` @ 0050b580)
 * Signature: uint8_t __thiscall GetList(SMBLevelPortalInterface * self)
 * Class: SMBLevelPortalInterface
 * Calls: `EditorButton__SetUnSelected`, `FlashEditableTextField__GetText`, `SQLDatabase__ExecuteQuery`, `Sprint`, `strlen`
 * Called by: `SMBEditorButtonOrderSwitch`, `SMBLevelPortalBigLevelButtonPress`, `SMBLevelPortalChapterButtonPress`, `SMBLevelPortalFeaturedPress`, `SMBLevelPortalLevelButtonPress`, `SMBLevelPortalNextButtonPress`, `SMBLevelPortalPrevButtonPress`, `SMBLevelPortalRecommendedButtonPress`, `SMBLevelPortalSearchPress`
 */
/* SMBLevelPortalInterface__GetList() */

void __thiscall SMBLevelPortalInterface__GetList(SMBLevelPortalInterface *self)

{
  int iVar1;
  long *plVar2;
  size_t sVar3;

  *(uint32_t *)(self + 0x3770) = 1;
  FlashTextField__SetText(*(char **)(self + 0xd0), "");
  *(uint32_t *)(self + 0x120) = 0xffffffff;
  EditorButton__SetUnSelected(*(EditorButton **)(self + 0x128));
  FlashTextField__SetText(*(char **)(self + 0xd8), "");
  *(uint32_t *)(self + 0x3c8) = 0xffffffff;
  EditorButton__SetUnSelected(*(EditorButton **)(self + 0x3d0));
  FlashTextField__SetText(*(char **)(self + 0xe0), "");
  *(uint32_t *)(self + 0x670) = 0xffffffff;
  EditorButton__SetUnSelected(*(EditorButton **)(self + 0x678));
  FlashTextField__SetText(*(char **)(self + 0xe8), "");
  *(uint32_t *)(self + 0x918) = 0xffffffff;
  EditorButton__SetUnSelected(*(EditorButton **)(self + 0x920));
  FlashTextField__SetText(*(char **)(self + 0xf0), "");
  *(uint32_t *)(self + 0xbc0) = 0xffffffff;
  EditorButton__SetUnSelected(*(EditorButton **)(self + 0xbc8));
  FlashTextField__SetText(*(char **)(self + 0xf8), "");
  *(uint32_t *)(self + 0xe68) = 0xffffffff;
  EditorButton__SetUnSelected(*(EditorButton **)(self + 0xe70));
  FlashTextField__SetText(*(char **)(self + 0x100), "");
  *(uint32_t *)(self + 0x1110) = 0xffffffff;
  EditorButton__SetUnSelected(*(EditorButton **)(self + 0x1118));
  FlashTextField__SetText(*(char **)(self + 0x108), "");
  *(uint32_t *)(self + 0x13b8) = 0xffffffff;
  EditorButton__SetUnSelected(*(EditorButton **)(self + 0x13c0));
  FlashTextField__SetText(*(char **)(self + 0x110), "");
  *(uint32_t *)(self + 0x1660) = 0xffffffff;
  EditorButton__SetUnSelected(*(EditorButton **)(self + 0x1668));
  FlashTextField__SetText(*(char **)(self + 0x118), "");
  *(uint32_t *)(self + 0x1908) = 0xffffffff;
  EditorButton__SetUnSelected(*(EditorButton **)(self + 0x1910));
  iVar1 = *(int *)(self + 0x376c);
  if (((iVar1 != 1) && (iVar1 != 3)) && (iVar1 != 2)) {
    if (iVar1 == 0) {
      FlashTextField__SetText(*(char **)(self + 0xd0), "");
      FlashTextField__SetText(*(char **)(self + 0xd8), "");
      FlashTextField__SetText(*(char **)(self + 0xe0), "");
      FlashTextField__SetText(*(char **)(self + 0xe8), "");
      FlashTextField__SetText(*(char **)(self + 0xf0), "");
      FlashTextField__SetText(*(char **)(self + 0xf8), "");
      FlashTextField__SetText(*(char **)(self + 0x100), "");
      FlashTextField__SetText(*(char **)(self + 0x108), "");
      FlashTextField__SetText(*(char **)(self + 0x110), "");
      FlashTextField__SetText(*(char **)(self + 0x118), "");
      sqlQuery._8_8_ = s_SELECT_smb_editor_author_author__005c85d8;
      sqlQuery._24_4_ = 0x143;
      SQLDatabase__ExecuteQuery(pPortalConnection, (SQLQuery *)sqlQuery, 0);
      sqlQuery2._8_8_ = s_SELECT_smb_editor_author_author__005c8720;
      sqlQuery2._24_4_ = 0x152;
      SQLDatabase__ExecuteQuery(pPortalConnection, (SQLQuery *)sqlQuery2, 0);
      return;
    }
    return;
  }
  plVar2 = (long *)FlashEditableTextField__GetText(
      *(FlashEditableTextField **)(*(long *)(self + 0x36f0) + 0x50));
  if (*(long *)(*plVar2 + -0x18) == 0) {
    iVar1 = *(int *)(self + 0x376c);
    if (iVar1 == 3) {
      Sprint(
          "SELECT *, times_died / times_played AS difficulty, raw_fun_ratings / num_fun_ratings AS "
          "fun_rating FROM smb_editor_levelinfo ORDER BY %s %s LIMIT %i, 10",
          strPortalUploadQuery,
          *(uint64_t *)(GetOrderingParam()::strOrderingParamString +
                        (long)*(int *)(self + 0x3704) * 8),
          *(uint64_t *)(GetOrderingOrder()::strOrderingString + (long)*(int *)(self + 0x3700) * 8),
          *(uint32_t *)(self + 0x3768));
    } else if (iVar1 == 1) {
      Sprint(
          "SELECT * FROM smb_editor_chapterinfo ORDER BY %s %s LIMIT %i, 10", strPortalUploadQuery,
          *(uint64_t *)(GetOrderingParam()::strOrderingParamString +
                        (long)*(int *)(self + 0x3704) * 8),
          *(uint64_t *)(GetOrderingOrder()::strOrderingString + (long)*(int *)(self + 0x3700) * 8),
          *(uint32_t *)(self + 0x3768));
    } else if (iVar1 == 2) {
      Sprint("SELECT smb_editor_chapterinfo.* FROM smb_editor_chapterinfo INNER JOIN "
             "smb_editor_recommendedchapters ON\t\t\t\t\t\t\t\t\t   "
             "smb_editor_recommendedchapters.chapter_id = smb_editor_chapterinfo.chapter_id ORDER "
             "BY RAND() LIMIT %i, 10",
             strPortalUploadQuery, *(uint32_t *)(self + 0x3768));
    }
  } else {
    DoSearch(self);
  }
  sqlQuery._8_8_ = strPortalUploadQuery;
  sVar3 = strlen(strPortalUploadQuery);
  sqlQuery._24_4_ = (uint32_t)sVar3;
  SQLDatabase__ExecuteQuery(pPortalConnection, (SQLQuery *)sqlQuery, 0);
  return;
}

/* ======================================================================
 * SMBLevelPortalInterface__SetOrdering  (Ghidra `SetOrdering` @ 0050b980)
 * Signature: uint8_t __thiscall SetOrdering(SMBLevelPortalInterface * self, tagPortalOrderingParam arg1)
 * Class: SMBLevelPortalInterface
 * Calls: (none)
 * Called by: (none)
 */
/* SMBLevelPortalInterface__SetOrdering(tagPortalOrderingParam) */

void __thiscall SMBLevelPortalInterface__SetOrdering(SMBLevelPortalInterface *self, int arg2)

{
  int iVar1;

  iVar1 = *(int *)(self + 0x3704);
  *(uint32_t *)(self + 0x3768) = 0;
  if (iVar1 == arg2) {
    *(uint *)(self + 0x3700) = (uint)(*(int *)(self + 0x3700) == 0);
  } else {
    *(int *)(self + 0x3704) = arg2;
    *(uint32_t *)(self + 0x3700) = 0;
    iVar1 = arg2;
  }
  if (iVar1 == 0) {
    *(uint32_t *)(self + 0x3700) = 0;
    return;
  }
  GetList(self);
  return;
}

/* ======================================================================
 * SMBLevelPortalInterface__Activate  (Ghidra `Activate` @ 0050b9e0)
 * Signature: uint8_t __thiscall Activate(SMBLevelPortalInterface * self)
 * Class: SMBLevelPortalInterface
 * Calls: `Joystick__AddButtonCallback`, `SMBMenuEnterWorld`, `SMBSelectionMenu__Activate`, `TKeyboard__AddKeyCallback`, `TPlayer__GetJoystick`
 * Called by: (none)
 */
/* SMBLevelPortalInterface__Activate() */

void __thiscall SMBLevelPortalInterface__Activate(SMBLevelPortalInterface *self)

{
  int iVar1;
  Joystick *pJVar2;

  SMBSelectionMenu__Activate((SMBSelectionMenu *)self);
  pJVar2 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddButtonCallback(pJVar2, 1, SMBMenuEnterWorld, self);
  if (Keyboard != (TKeyboard *)0x0) {
    TKeyboard__AddKeyCallback(Keyboard, 0x23, SMBMenuEnterWorld, self);
  }
  iVar1 = *(int *)(self + 0x376c);
  if (((iVar1 == 1) || (iVar1 == 3)) || (iVar1 == 0)) {
    GetList(self);
  }
  *(ushort *)(self + 0x34) = *(ushort *)(self + 0x34) & 0xfc00 | 1;
  return;
}

/* ======================================================================
 * SMBLevelPortalInterface__NextPage  (Ghidra `NextPage` @ 0050bb30)
 * Signature: uint8_t __thiscall NextPage(SMBLevelPortalInterface * self)
 * Class: SMBLevelPortalInterface
 * Calls: (none)
 * Called by: (none)
 */
/* SMBLevelPortalInterface__NextPage() */

void __thiscall SMBLevelPortalInterface__NextPage(SMBLevelPortalInterface *self)

{
  *(int *)(self + 0x3768) = *(int *)(self + 0x3768) + 10;
  GetList(self);
  return;
}

/* ======================================================================
 * SMBLevelPortalInterface__PrevPage  (Ghidra `PrevPage` @ 0050bb40)
 * Signature: uint8_t __thiscall PrevPage(SMBLevelPortalInterface * self)
 * Class: SMBLevelPortalInterface
 * Calls: (none)
 * Called by: (none)
 */
/* SMBLevelPortalInterface__PrevPage() */

void __thiscall SMBLevelPortalInterface__PrevPage(SMBLevelPortalInterface *self)

{
  int iVar1;

  iVar1 = 0;
  if (9 < *(int *)(self + 0x3768)) {
    iVar1 = *(int *)(self + 0x3768) + -10;
  }
  *(int *)(self + 0x3768) = iVar1;
  GetList(self);
  return;
}

/* ======================================================================
 * SMBLevelPortalInterface__GetDisplayMode  (Ghidra `GetDisplayMode` @ 0050bb60)
 * Signature: uint8_t __thiscall GetDisplayMode(SMBLevelPortalInterface * self)
 * Class: SMBLevelPortalInterface
 * Calls: (none)
 * Called by: (none)
 */
/* SMBLevelPortalInterface__GetDisplayMode() */

uint32_t __thiscall SMBLevelPortalInterface__GetDisplayMode(SMBLevelPortalInterface *self)

{
  return *(uint32_t *)(self + 0x376c);
}

/* ======================================================================
 * SMBLevelPortalInterface__SetDisplayMode  (Ghidra `SetDisplayMode` @ 0050bb70)
 * Signature: uint8_t __thiscall SetDisplayMode(SMBLevelPortalInterface * self, tagPortalDisplayMode arg1)
 * Class: SMBLevelPortalInterface
 * Calls: `FlashLibraryInstance__GotoAndStop`, `GetRandomINT`
 * Called by: `SMBLevelPortalBigLevelButtonPress`, `SMBLevelPortalChapterButtonPress`, `SMBLevelPortalFeaturedPress`, `SMBLevelPortalLevelButtonPress`, `SMBLevelPortalRecommendedButtonPress`, `SMBLevelPortalUnknownPress`
 */
/* SMBLevelPortalInterface__SetDisplayMode(tagPortalDisplayMode) */

void __thiscall SMBLevelPortalInterface__SetDisplayMode(SMBLevelPortalInterface *self, int arg2)

{
  *(int *)(self + 0x376c) = arg2;
  *(uint32_t *)(self + 0x3768) = 0;
  if (((arg2 == 3) || (arg2 == 1)) || (arg2 == 2)) {
    *(uint64_t *)(self + 0x28) = *(uint64_t *)(self + 0x3730);
    if (*(int *)(self + 0x3704) != 0) {
      *(uint32_t *)(self + 0x3704) = 0;
    }
    *(uint32_t *)(self + 0x3700) = 0;
    return;
  }
  if (arg2 == 0) {
    *(uint64_t *)(self + 0x28) = *(uint64_t *)(self + 0x3738);
    iWebButtonFrame = GetRandomINT(1, 10);
    FlashLibraryInstance__GotoAndStop(*(FlashLibraryInstance **)(self + 0x3758), iWebButtonFrame);
    return;
  }
  if (arg2 != 4) {
    *(uint64_t *)(self + 0x28) = *(uint64_t *)(self + 0x3730);
    return;
  }
  *(uint64_t *)(self + 0x28) = *(uint64_t *)(self + 0x3740);
  return;
}

/* ======================================================================
 * SMBLevelPortalInterface__Initialize  (Ghidra `Initialize` @ 0050bc20)
 * Signature: uint8_t __thiscall Initialize(SMBLevelPortalInterface * self)
 * Class: SMBLevelPortalInterface
 * Calls: `AddEditorButton`, `AddPostLineRenderItem`, `EditorButton__SetButtonProps`, `EditorTextField__SetTextField`, `FlashAnimationLibrary__GetClipIndex`, `FlashAnimationLibrary__GetLibraryEntry`, `FlashAnimationLibrary__GetMovieClip__005731d0`, `FlashAnimationLibrary__GetTextField`, `FlashAnimationLibrary__GetUITextField`, `FlashMovieClip__FindInstance` (+17 more)
 * Called by: (none)
 */
/* SMBLevelPortalInterface__Initialize() */

void __thiscall SMBLevelPortalInterface__Initialize(SMBLevelPortalInterface *self)

{
  FlashAnimationLibrary *this_00;
  int iVar1;
  uint64_t uVar2;
  FlashMovieClip *pFVar3;
  long *plVar4;
  long *plVar5;
  EditorButton *pEVar6;
  FlashLibraryInstance *pFVar7;
  FlashMovieClip *pFVar8;
  long *plVar9;
  uint64_t uVar10;
  FlashEditableTextField *pFVar11;
  long lVar12;
  uint64_t uVar13;
  long lVar14;
  int iVar15;
  SMBLevelPortalInterface *local_a8;
  SMBLevelPortalInterface *local_a0;
  uint8_t local_88[32];
  char *local_68;
  char *local_60;
  uint8_t *local_58;
  uint32_t local_50;
  char local_48[24];

  this_00 = PortalInterfaceLibrary;
  PortalInterfaceLibrary[0x8c] = (FlashAnimationLibrary)0x1;
  *(FlashAnimationLibrary **)(self + 8) = this_00;
  uVar2 = FlashAnimationLibrary__GetMovieClip__005731d0(this_00, "portal");
  *(uint64_t *)(self + 0x28) = uVar2;
  *(uint64_t *)(self + 0x3730) = uVar2;
  uVar2 = FlashAnimationLibrary__GetMovieClip__005731d0(*(FlashAnimationLibrary **)(self + 8),
                                                        "unknown");
  *(uint64_t *)(self + 0x3740) = uVar2;
  uVar2 = FlashAnimationLibrary__GetMovieClip__005731d0(*(FlashAnimationLibrary **)(self + 8),
                                                        "featured");
  *(uint64_t *)(self + 0x3738) = uVar2;
  uVar2 = FlashAnimationLibrary__GetMovieClip__005731d0(*(FlashAnimationLibrary **)(self + 8),
                                                        "loadchapterload");
  *(uint64_t *)(self + 0x20) = uVar2;
  uVar2 = FlashAnimationLibrary__GetMovieClip__005731d0(*(FlashAnimationLibrary **)(self + 8),
                                                        "loadin");
  *(uint64_t *)(self + 0x10) = uVar2;
  uVar2 = FlashAnimationLibrary__GetMovieClip__005731d0(*(FlashAnimationLibrary **)(self + 8),
                                                        "loadout");
  *(uint64_t *)(self + 0x18) = uVar2;
  uVar2 = FlashAnimationLibrary__GetMovieClip__005731d0(*(FlashAnimationLibrary **)(self + 8),
                                                        "loading");
  *(uint64_t *)(self + 0x3748) = uVar2;
  uVar2 = FlashAnimationLibrary__GetMovieClip__005731d0(*(FlashAnimationLibrary **)(self + 8),
                                                        "cursor");
  *(uint64_t *)(self + 0x3750) = uVar2;
  Sprint("portalname%i", local_48, 1);
  uVar2 = FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8), local_48);
  *(uint64_t *)(self + 0xd0) = uVar2;
  Sprint("portalnumber%i", local_48, 1);
  uVar2 = FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8), local_48);
  *(uint64_t *)(self + 0x80) = uVar2;
  Sprint("portalname%i", local_48, 2);
  uVar2 = FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8), local_48);
  *(uint64_t *)(self + 0xd8) = uVar2;
  Sprint("portalnumber%i", local_48, 2);
  uVar2 = FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8), local_48);
  *(uint64_t *)(self + 0x88) = uVar2;
  Sprint("portalname%i", local_48, 3);
  uVar2 = FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8), local_48);
  *(uint64_t *)(self + 0xe0) = uVar2;
  Sprint("portalnumber%i", local_48, 3);
  uVar2 = FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8), local_48);
  *(uint64_t *)(self + 0x90) = uVar2;
  Sprint("portalname%i", local_48, 4);
  uVar2 = FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8), local_48);
  *(uint64_t *)(self + 0xe8) = uVar2;
  Sprint("portalnumber%i", local_48, 4);
  uVar2 = FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8), local_48);
  *(uint64_t *)(self + 0x98) = uVar2;
  Sprint("portalname%i", local_48, 5);
  uVar2 = FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8), local_48);
  *(uint64_t *)(self + 0xf0) = uVar2;
  Sprint("portalnumber%i", local_48, 5);
  uVar2 = FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8), local_48);
  *(uint64_t *)(self + 0xa0) = uVar2;
  Sprint("portalname%i", local_48, 6);
  uVar2 = FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8), local_48);
  *(uint64_t *)(self + 0xf8) = uVar2;
  Sprint("portalnumber%i", local_48, 6);
  uVar2 = FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8), local_48);
  *(uint64_t *)(self + 0xa8) = uVar2;
  Sprint("portalname%i", local_48, 7);
  uVar2 = FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8), local_48);
  *(uint64_t *)(self + 0x100) = uVar2;
  Sprint("portalnumber%i", local_48, 7);
  uVar2 = FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8), local_48);
  *(uint64_t *)(self + 0xb0) = uVar2;
  Sprint("portalname%i", local_48, 8);
  uVar2 = FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8), local_48);
  *(uint64_t *)(self + 0x108) = uVar2;
  Sprint("portalnumber%i", local_48, 8);
  uVar2 = FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8), local_48);
  *(uint64_t *)(self + 0xb8) = uVar2;
  Sprint("portalname%i", local_48, 9);
  uVar2 = FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8), local_48);
  *(uint64_t *)(self + 0x110) = uVar2;
  Sprint("portalnumber%i", local_48, 9);
  uVar2 = FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8), local_48);
  *(uint64_t *)(self + 0xc0) = uVar2;
  Sprint("portalname%i", local_48, 10);
  uVar2 = FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8), local_48);
  *(uint64_t *)(self + 0x118) = uVar2;
  Sprint("portalnumber%i", local_48, 10);
  uVar2 = FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8), local_48);
  *(uint64_t *)(self + 200) = uVar2;
  FlashTextField__SetText(*(wchar_t **)(self + 0xd0), &DAT_005c6634 /* R:0.0f */);
  FlashTextField__SetText(*(wchar_t **)(self + 0x80), &DAT_005c6634 /* R:0.0f */);
  FlashTextField__SetText(*(wchar_t **)(self + 0xd8), &DAT_005c6634 /* R:0.0f */);
  FlashTextField__SetText(*(wchar_t **)(self + 0x88), &DAT_005c6634 /* R:0.0f */);
  FlashTextField__SetText(*(wchar_t **)(self + 0xe0), &DAT_005c6634 /* R:0.0f */);
  FlashTextField__SetText(*(wchar_t **)(self + 0x90), &DAT_005c6634 /* R:0.0f */);
  FlashTextField__SetText(*(wchar_t **)(self + 0xe8), &DAT_005c6634 /* R:0.0f */);
  FlashTextField__SetText(*(wchar_t **)(self + 0x98), &DAT_005c6634 /* R:0.0f */);
  FlashTextField__SetText(*(wchar_t **)(self + 0xf0), &DAT_005c6634 /* R:0.0f */);
  FlashTextField__SetText(*(wchar_t **)(self + 0xa0), &DAT_005c6634 /* R:0.0f */);
  FlashTextField__SetText(*(wchar_t **)(self + 0xf8), &DAT_005c6634 /* R:0.0f */);
  FlashTextField__SetText(*(wchar_t **)(self + 0xa8), &DAT_005c6634 /* R:0.0f */);
  FlashTextField__SetText(*(wchar_t **)(self + 0x100), &DAT_005c6634 /* R:0.0f */);
  FlashTextField__SetText(*(wchar_t **)(self + 0xb0), &DAT_005c6634 /* R:0.0f */);
  FlashTextField__SetText(*(wchar_t **)(self + 0x108), &DAT_005c6634 /* R:0.0f */);
  FlashTextField__SetText(*(wchar_t **)(self + 0xb8), &DAT_005c6634 /* R:0.0f */);
  FlashTextField__SetText(*(wchar_t **)(self + 0x110), &DAT_005c6634 /* R:0.0f */);
  FlashTextField__SetText(*(wchar_t **)(self + 0xc0), &DAT_005c6634 /* R:0.0f */);
  FlashTextField__SetText(*(wchar_t **)(self + 0x118), &DAT_005c6634 /* R:0.0f */);
  FlashTextField__SetText(*(wchar_t **)(self + 200), &DAT_005c6634 /* R:0.0f */);
  pFVar3 = (FlashMovieClip *)FlashAnimationLibrary__GetLibraryEntry(
      *(FlashAnimationLibrary **)(self + 8), *(int *)(*(long *)(self + 0x28) + 0x20));
  plVar4 = (long *)FlashAnimationLibrary__GetMovieClip__005731d0(
      *(FlashAnimationLibrary **)(self + 8), "difficultybar");
  plVar5 = (long *)FlashAnimationLibrary__GetMovieClip__005731d0(
      *(FlashAnimationLibrary **)(self + 8), "fun");
  iVar1 = 0;
  local_a8 = self;
  do {
    iVar15 = iVar1 + 1;
    Sprint("line%i", local_48, iVar15);
    lVar14 = (long)iVar1 * 0x2a8;
    pEVar6 = (EditorButton *)AddEditorButton(pFVar3, *(uint64_t *)(self + 8), local_48);
    *(EditorButton **)(local_a8 + 0x128) = pEVar6;
    EditorButton__SetButtonProps(pEVar6, SMBLevelPortalLevelPress, self + lVar14 + 0x120,
                                 (_func_void_void_ptr *)0x0, (void *)0x0,
                                 (_func_void_void_ptr *)0x0, (void *)0x0);
    pFVar7 = (FlashLibraryInstance *)FlashAnimationLibrary__GetMovieClip__005731d0(
        *(FlashAnimationLibrary **)(self + 8), local_48);
    pFVar8 = (FlashMovieClip *)FlashAnimationLibrary__GetLibraryEntry(
        *(FlashAnimationLibrary **)(self + 8), *(int *)(pFVar7 + 0x20));
    AddPostLineRenderItem("icon2", pFVar7, pFVar8, pFVar3, *(FlashAnimationLibrary **)(self + 8),
                          (FlashLibraryInstance *)(self + lVar14 + 0x130));
    AddPostLineRenderItem("icon1", pFVar7, pFVar8, pFVar3, *(FlashAnimationLibrary **)(self + 8),
                          (FlashLibraryInstance *)(self + lVar14 + 0x1d0));
    AddPostLineRenderItem("difficultybar", pFVar7, pFVar8, pFVar3,
                          *(FlashAnimationLibrary **)(self + 8),
                          (FlashLibraryInstance *)(self + lVar14 + 0x310));
    iVar1 = 0;
    AddPostLineRenderItem("fun", pFVar7, pFVar8, pFVar3, *(FlashAnimationLibrary **)(self + 8),
                          (FlashLibraryInstance *)(self + lVar14 + 0x270));
    plVar9 = (long *)FlashAnimationLibrary__GetMovieClip__005731d0(
        *(FlashAnimationLibrary **)(self + 8), "difficultybar");
    while (lVar14 = FlashMovieClip__FindInstance(pFVar8, (int)plVar9[4], iVar1, (int *)0x0, 0),
           lVar14 != 0) {
      *(uint32_t *)(lVar14 + 0x20) = 0xffffffff;
      iVar1 = iVar1 + 1;
    }
    iVar1 = 0;
    (**(code **)(*plVar9 + 8))(plVar9);
    plVar9 = (long *)FlashAnimationLibrary__GetMovieClip__005731d0(
        *(FlashAnimationLibrary **)(self + 8), "fun");
    while (lVar14 = FlashMovieClip__FindInstance(pFVar8, (int)plVar9[4], iVar1, (int *)0x0, 0),
           lVar14 != 0) {
      *(uint32_t *)(lVar14 + 0x20) = 0xffffffff;
      iVar1 = iVar1 + 1;
    }
    iVar1 = 0;
    (**(code **)(*plVar9 + 8))(plVar9);
    plVar9 = (long *)FlashAnimationLibrary__GetMovieClip__005731d0(
        *(FlashAnimationLibrary **)(self + 8), "icon2");
    while (lVar14 = FlashMovieClip__FindInstance(pFVar8, (int)plVar9[4], iVar1, (int *)0x0, 0),
           lVar14 != 0) {
      *(uint32_t *)(lVar14 + 0x20) = 0xffffffff;
      iVar1 = iVar1 + 1;
    }
    iVar1 = 0;
    (**(code **)(*plVar9 + 8))(plVar9);
    plVar9 = (long *)FlashAnimationLibrary__GetMovieClip__005731d0(
        *(FlashAnimationLibrary **)(self + 8), "icon1");
    while (lVar14 = FlashMovieClip__FindInstance(pFVar8, (int)plVar9[4], iVar1, (int *)0x0, 0),
           lVar14 != 0) {
      *(uint32_t *)(lVar14 + 0x20) = 0xffffffff;
      iVar1 = iVar1 + 1;
    }
    (**(code **)(*plVar9 + 8))(plVar9);
    local_a8 = local_a8 + 0x2a8;
    iVar1 = iVar15;
  } while (iVar15 != 10);
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))(plVar5);
  }
  uVar2 = *(uint64_t *)(self + 8);
  uVar10 = AddEditorButton(pFVar3, uVar2, "featuredbutton");
  *(uint64_t *)(self + 0x3648) = uVar10;
  uVar10 = AddEditorButton(pFVar3, uVar2, "levelbutton");
  *(uint64_t *)(self + 0x3650) = uVar10;
  uVar2 = AddEditorButton(pFVar3, uVar2, "unknownbutton");
  *(uint64_t *)(self + 0x3658) = uVar2;
  EditorButton__SetButtonProps(*(EditorButton **)(self + 0x3650), SMBLevelPortalBigLevelButtonPress,
                               (void *)0x0, (_func_void_void_ptr *)0x0, (void *)0x0,
                               (_func_void_void_ptr *)0x0, (void *)0x0);
  EditorButton__SetButtonProps(*(EditorButton **)(self + 0x3658), SMBLevelPortalUnknownPress,
                               (void *)0x0, (_func_void_void_ptr *)0x0, (void *)0x0,
                               (_func_void_void_ptr *)0x0, (void *)0x0);
  EditorButton__SetButtonProps(*(EditorButton **)(self + 0x3648), SMBLevelPortalFeaturedPress,
                               (void *)0x0, (_func_void_void_ptr *)0x0, (void *)0x0,
                               (_func_void_void_ptr *)0x0, (void *)0x0);
  pEVar6 = (EditorButton *)AddEditorButton(pFVar3, *(uint64_t *)(self + 8), "levelportal");
  *(EditorButton **)(self + 0x3690) = pEVar6;
  EditorButton__SetButtonProps(pEVar6, SMBLevelPortalLevelButtonPress, (void *)0x0,
                               (_func_void_void_ptr *)0x0, (void *)0x0, (_func_void_void_ptr *)0x0,
                               (void *)0x0);
  pEVar6 = (EditorButton *)AddEditorButton(pFVar3, *(uint64_t *)(self + 8), "chapterportal");
  *(EditorButton **)(self + 0x3698) = pEVar6;
  EditorButton__SetButtonProps(pEVar6, SMBLevelPortalChapterButtonPress, (void *)0x0,
                               (_func_void_void_ptr *)0x0, (void *)0x0, (_func_void_void_ptr *)0x0,
                               (void *)0x0);
  FlashAnimationLibrary__SetTextFieldText(*(char **)(self + 8), "recommendedtxt", "Recommended");
  pEVar6 = (EditorButton *)AddEditorButton(pFVar3, *(uint64_t *)(self + 8), "recommended");
  *(EditorButton **)(self + 0x36a0) = pEVar6;
  EditorButton__SetButtonProps(pEVar6, SMBLevelPortalRecommendedButtonPress, (void *)0x0,
                               (_func_void_void_ptr *)0x0, (void *)0x0, (_func_void_void_ptr *)0x0,
                               (void *)0x0);
  uVar2 = AddEditorButton(pFVar3, *(uint64_t *)(self + 8), "num");
  *(uint64_t *)(self + 0x36a8) = uVar2;
  pEVar6 = (EditorButton *)AddEditorButton(pFVar3, *(uint64_t *)(self + 8), "name");
  *(EditorButton **)(self + 14000) = pEVar6;
  EditorButton__SetButtonProps(pEVar6, SMBEditorButtonOrderSwitch, (void *)0x1,
                               (_func_void_void_ptr *)0x0, (void *)0x0, (_func_void_void_ptr *)0x0,
                               (void *)0x0);
  pEVar6 = (EditorButton *)AddEditorButton(pFVar3, *(uint64_t *)(self + 8), "difficulty");
  *(EditorButton **)(self + 0x36b8) = pEVar6;
  EditorButton__SetButtonProps(pEVar6, SMBEditorButtonOrderSwitch, (void *)0x3,
                               (_func_void_void_ptr *)0x0, (void *)0x0, (_func_void_void_ptr *)0x0,
                               (void *)0x0);
  pEVar6 = (EditorButton *)AddEditorButton(pFVar3, *(uint64_t *)(self + 8), "funfactor");
  *(EditorButton **)(self + 0x36c0) = pEVar6;
  EditorButton__SetButtonProps(pEVar6, SMBEditorButtonOrderSwitch, (void *)0x2,
                               (_func_void_void_ptr *)0x0, (void *)0x0, (_func_void_void_ptr *)0x0,
                               (void *)0x0);
  uVar2 = AddEditorButton(pFVar3, *(uint64_t *)(self + 8), "tileset");
  *(uint64_t *)(self + 0x36c8) = uVar2;
  uVar2 = AddEditorButton(pFVar3, *(uint64_t *)(self + 8), "char");
  *(uint64_t *)(self + 0x36d0) = uVar2;
  pEVar6 = (EditorButton *)AddEditorButton(pFVar3, *(uint64_t *)(self + 8), "arrowleft");
  *(EditorButton **)(self + 0x36d8) = pEVar6;
  EditorButton__SetButtonProps(pEVar6, SMBLevelPortalPrevButtonPress, (void *)0x0,
                               (_func_void_void_ptr *)0x0, (void *)0x0, (_func_void_void_ptr *)0x0,
                               (void *)0x0);
  pEVar6 = (EditorButton *)AddEditorButton(pFVar3, *(uint64_t *)(self + 8), "arrowright");
  *(EditorButton **)(self + 0x36e0) = pEVar6;
  EditorButton__SetButtonProps(pEVar6, SMBLevelPortalNextButtonPress, (void *)0x0,
                               (_func_void_void_ptr *)0x0, (void *)0x0, (_func_void_void_ptr *)0x0,
                               (void *)0x0);
  FlashAnimationLibrary__SetTextFieldText(*(char **)(self + 8), "next",
                                          &DAT_005c7bfc /* R:"Next" */);
  FlashAnimationLibrary__SetTextFieldText(*(char **)(self + 8), "previous", "Previous");
  pEVar6 = (EditorButton *)AddEditorButton(pFVar3, *(uint64_t *)(self + 8),
                                           &DAT_005c7af3 /* R:u32=1392537447 */);
  *(EditorButton **)(self + 0x36e8) = pEVar6;
  EditorButton__SetButtonProps(pEVar6, SMBLevelPortalSearchPress, (void *)0x0,
                               (_func_void_void_ptr *)0x0, (void *)0x0, (_func_void_void_ptr *)0x0,
                               (void *)0x0);
  uVar2 = AddEditorButton(pFVar3, *(uint64_t *)(self + 8), "textfield1");
  *(uint64_t *)(self + 0x36f0) = uVar2;
  pFVar11 = (FlashEditableTextField *)FlashAnimationLibrary__GetUITextField(
      *(FlashAnimationLibrary **)(self + 8), 1);
  EditorTextField__SetTextField(*(EditorTextField **)(self + 0x36f0), pFVar11);
  pFVar3 = (FlashMovieClip *)FlashAnimationLibrary__GetLibraryEntry(
      *(FlashAnimationLibrary **)(self + 8), *(int *)(*(long *)(self + 0x3738) + 0x20));
  uVar2 = *(uint64_t *)(self + 8);
  uVar10 = AddEditorButton(pFVar3, uVar2, "featuredbutton");
  *(uint64_t *)(self + 0x3660) = uVar10;
  uVar10 = AddEditorButton(pFVar3, uVar2, "levelbutton");
  *(uint64_t *)(self + 0x3668) = uVar10;
  uVar2 = AddEditorButton(pFVar3, uVar2, "unknownbutton");
  *(uint64_t *)(self + 0x3670) = uVar2;
  iVar1 = FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 8), "icons");
  lVar14 = FlashMovieClip__FindInstance(pFVar3, iVar1, 0, (int *)0x0, 0);
  lVar12 =
      FlashAnimationLibrary__GetMovieClip__005731d0(*(FlashAnimationLibrary **)(self + 8), "icons");
  *(long *)(self + 0x3758) = lVar12;
  *(uint64_t *)(lVar12 + 8) = *(uint64_t *)(lVar14 + 8);
  *(uint64_t *)(lVar12 + 0x10) = *(uint64_t *)(lVar14 + 0x10);
  *(uint64_t *)(lVar12 + 0x18) = *(uint64_t *)(lVar14 + 0x18);
  *(uint32_t *)(lVar12 + 0x20) = *(uint32_t *)(lVar14 + 0x20);
  *(uint32_t *)(lVar12 + 0x24) = *(uint32_t *)(lVar14 + 0x24);
  *(uint64_t *)(lVar12 + 0x28) = *(uint64_t *)(lVar14 + 0x28);
  *(uint32_t *)(lVar12 + 0x30) = *(uint32_t *)(lVar14 + 0x30);
  *(uint32_t *)(lVar12 + 0x34) = *(uint32_t *)(lVar14 + 0x34);
  *(uint32_t *)(lVar12 + 0x38) = *(uint32_t *)(lVar14 + 0x38);
  *(uint32_t *)(lVar12 + 0x3c) = *(uint32_t *)(lVar14 + 0x3c);
  Vector2__operator_assign((Vector2 *)(lVar12 + 0x40), (Vector2 *)(lVar14 + 0x40));
  Vector2__operator_assign((Vector2 *)(lVar12 + 0x48), (Vector2 *)(lVar14 + 0x48));
  Vector2__operator_assign((Vector2 *)(lVar12 + 0x50), (Vector2 *)(lVar14 + 0x50));
  *(uint32_t *)(lVar12 + 0x58) = *(uint32_t *)(lVar14 + 0x58);
  *(uint32_t *)(lVar12 + 0x5c) = *(uint32_t *)(lVar14 + 0x5c);
  *(uint32_t *)(lVar12 + 0x60) = *(uint32_t *)(lVar14 + 0x60);
  *(uint64_t *)(lVar12 + 100) = *(uint64_t *)(lVar14 + 100);
  *(uint64_t *)(lVar12 + 0x6c) = *(uint64_t *)(lVar14 + 0x6c);
  *(uint64_t *)(lVar12 + 0x74) = *(uint64_t *)(lVar14 + 0x74);
  *(uint64_t *)(lVar12 + 0x7c) = *(uint64_t *)(lVar14 + 0x7c);
  *(uint32_t *)(lVar12 + 0x84) = *(uint32_t *)(lVar14 + 0x84);
  *(uint64_t *)(lVar12 + 0x88) = *(uint64_t *)(lVar14 + 0x88);
  *(uint64_t *)(lVar12 + 0x90) = *(uint64_t *)(lVar14 + 0x90);
  *(uint32_t *)(lVar12 + 0x98) = *(uint32_t *)(lVar14 + 0x98);
  *(uint32_t *)(lVar12 + 0x9c) = *(uint32_t *)(lVar14 + 0x9c);
  *(uint32_t *)(lVar14 + 0x20) = 0xffffffff;
  EditorButton__SetButtonProps(*(EditorButton **)(self + 0x3668), SMBLevelPortalBigLevelButtonPress,
                               (void *)0x0, (_func_void_void_ptr *)0x0, (void *)0x0,
                               (_func_void_void_ptr *)0x0, (void *)0x0);
  EditorButton__SetButtonProps(*(EditorButton **)(self + 0x3670), SMBLevelPortalUnknownPress,
                               (void *)0x0, (_func_void_void_ptr *)0x0, (void *)0x0,
                               (_func_void_void_ptr *)0x0, (void *)0x0);
  EditorButton__SetButtonProps(*(EditorButton **)(self + 0x3660), SMBLevelPortalFeaturedPress,
                               (void *)0x0, (_func_void_void_ptr *)0x0, (void *)0x0,
                               (_func_void_void_ptr *)0x0, (void *)0x0);
  pEVar6 = (EditorButton *)AddEditorButton(pFVar3, *(uint64_t *)(self + 8), "webbutton");
  *(EditorButton **)(self + 0x3760) = pEVar6;
  EditorButton__SetButtonProps(pEVar6, SMBLevelPortalWebButtonPress, (void *)0x0,
                               (_func_void_void_ptr *)0x0, (void *)0x0, (_func_void_void_ptr *)0x0,
                               (void *)0x0);
  iVar1 = 0;
  local_a8 = self;
  do {
    iVar15 = iVar1 + 1;
    Sprint("chapterbar%i", local_48, iVar15);
    lVar14 = (long)iVar1 * 0x2a8;
    pEVar6 = (EditorButton *)AddEditorButton(pFVar3, *(uint64_t *)(self + 8), local_48);
    *(EditorButton **)(local_a8 + 0x1bc0) = pEVar6;
    EditorButton__SetButtonProps(pEVar6, SMBLevelPortalLevelPress, self + lVar14 + 0x1bb8,
                                 (_func_void_void_ptr *)0x0, (void *)0x0,
                                 (_func_void_void_ptr *)0x0, (void *)0x0);
    pFVar7 = (FlashLibraryInstance *)FlashAnimationLibrary__GetMovieClip__005731d0(
        *(FlashAnimationLibrary **)(self + 8), local_48);
    pFVar8 = (FlashMovieClip *)FlashAnimationLibrary__GetLibraryEntry(
        *(FlashAnimationLibrary **)(self + 8), *(int *)(pFVar7 + 0x20));
    AddPostLineRenderItem("icon1", pFVar7, pFVar8, pFVar3, *(FlashAnimationLibrary **)(self + 8),
                          (FlashLibraryInstance *)(self + lVar14 + 0x1c68));
    AddPostLineRenderItem("difficultybar", pFVar7, pFVar8, pFVar3,
                          *(FlashAnimationLibrary **)(self + 8),
                          (FlashLibraryInstance *)(self + lVar14 + 0x1da8));
    iVar1 = 0;
    AddPostLineRenderItem("fun", pFVar7, pFVar8, pFVar3, *(FlashAnimationLibrary **)(self + 8),
                          (FlashLibraryInstance *)(self + lVar14 + 0x1d08));
    plVar4 = (long *)FlashAnimationLibrary__GetMovieClip__005731d0(
        *(FlashAnimationLibrary **)(self + 8), "difficultybar");
    while (lVar14 = FlashMovieClip__FindInstance(pFVar8, (int)plVar4[4], iVar1, (int *)0x0, 0),
           lVar14 != 0) {
      *(uint32_t *)(lVar14 + 0x20) = 0xffffffff;
      iVar1 = iVar1 + 1;
    }
    iVar1 = 0;
    (**(code **)(*plVar4 + 8))(plVar4);
    plVar4 = (long *)FlashAnimationLibrary__GetMovieClip__005731d0(
        *(FlashAnimationLibrary **)(self + 8), "fun");
    while (lVar14 = FlashMovieClip__FindInstance(pFVar8, (int)plVar4[4], iVar1, (int *)0x0, 0),
           lVar14 != 0) {
      *(uint32_t *)(lVar14 + 0x20) = 0xffffffff;
      iVar1 = iVar1 + 1;
    }
    iVar1 = 0;
    (**(code **)(*plVar4 + 8))(plVar4);
    plVar4 = (long *)FlashAnimationLibrary__GetMovieClip__005731d0(
        *(FlashAnimationLibrary **)(self + 8), "icon1");
    while (lVar14 = FlashMovieClip__FindInstance(pFVar8, (int)plVar4[4], iVar1, (int *)0x0, 0),
           lVar14 != 0) {
      *(uint32_t *)(lVar14 + 0x20) = 0xffffffff;
      iVar1 = iVar1 + 1;
    }
    (**(code **)(*plVar4 + 8))(plVar4);
    local_a8 = local_a8 + 0x2a8;
    iVar1 = iVar15;
  } while (iVar15 != 5);
  iVar1 = 0;
  local_a0 = self;
  do {
    iVar15 = iVar1 + 1;
    Sprint("levelbar%i", local_48, iVar15);
    lVar14 = (long)iVar1 * 0x2a8;
    pEVar6 = (EditorButton *)AddEditorButton(pFVar3, *(uint64_t *)(self + 8), local_48);
    *(EditorButton **)(local_a0 + 0x2908) = pEVar6;
    EditorButton__SetButtonProps(pEVar6, SMBLevelPortalLevelPress, self + lVar14 + 0x2900,
                                 (_func_void_void_ptr *)0x0, (void *)0x0,
                                 (_func_void_void_ptr *)0x0, (void *)0x0);
    pFVar7 = (FlashLibraryInstance *)FlashAnimationLibrary__GetMovieClip__005731d0(
        *(FlashAnimationLibrary **)(self + 8), local_48);
    pFVar8 = (FlashMovieClip *)FlashAnimationLibrary__GetLibraryEntry(
        *(FlashAnimationLibrary **)(self + 8), *(int *)(pFVar7 + 0x20));
    AddPostLineRenderItem("icon1", pFVar7, pFVar8, pFVar3, *(FlashAnimationLibrary **)(self + 8),
                          (FlashLibraryInstance *)(self + lVar14 + 0x29b0));
    AddPostLineRenderItem("difficultybar", pFVar7, pFVar8, pFVar3,
                          *(FlashAnimationLibrary **)(self + 8),
                          (FlashLibraryInstance *)(self + lVar14 + 0x2af0));
    iVar1 = 0;
    AddPostLineRenderItem("fun", pFVar7, pFVar8, pFVar3, *(FlashAnimationLibrary **)(self + 8),
                          (FlashLibraryInstance *)(self + lVar14 + 0x2a50));
    plVar4 = (long *)FlashAnimationLibrary__GetMovieClip__005731d0(
        *(FlashAnimationLibrary **)(self + 8), "difficultybar");
    while (lVar14 = FlashMovieClip__FindInstance(pFVar8, (int)plVar4[4], iVar1, (int *)0x0, 0),
           lVar14 != 0) {
      *(uint32_t *)(lVar14 + 0x20) = 0xffffffff;
      iVar1 = iVar1 + 1;
    }
    iVar1 = 0;
    (**(code **)(*plVar4 + 8))(plVar4);
    plVar4 = (long *)FlashAnimationLibrary__GetMovieClip__005731d0(
        *(FlashAnimationLibrary **)(self + 8), "fun");
    while (lVar14 = FlashMovieClip__FindInstance(pFVar8, (int)plVar4[4], iVar1, (int *)0x0, 0),
           lVar14 != 0) {
      *(uint32_t *)(lVar14 + 0x20) = 0xffffffff;
      iVar1 = iVar1 + 1;
    }
    iVar1 = 0;
    (**(code **)(*plVar4 + 8))(plVar4);
    plVar4 = (long *)FlashAnimationLibrary__GetMovieClip__005731d0(
        *(FlashAnimationLibrary **)(self + 8), "icon1");
    while (lVar14 = FlashMovieClip__FindInstance(pFVar8, (int)plVar4[4], iVar1, (int *)0x0, 0),
           lVar14 != 0) {
      *(uint32_t *)(lVar14 + 0x20) = 0xffffffff;
      iVar1 = iVar1 + 1;
    }
    (**(code **)(*plVar4 + 8))(plVar4);
    local_a0 = local_a0 + 0x2a8;
    iVar1 = iVar15;
  } while (iVar15 != 5);
  uVar10 = FlashAnimationLibrary__GetLibraryEntry(*(FlashAnimationLibrary **)(self + 8),
                                                  *(int *)(*(long *)(self + 0x3740) + 0x20));
  uVar2 = *(uint64_t *)(self + 8);
  uVar13 = AddEditorButton(uVar10, uVar2, "featuredbutton");
  *(uint64_t *)(self + 0x3678) = uVar13;
  uVar13 = AddEditorButton(uVar10, uVar2, "levelbutton");
  *(uint64_t *)(self + 0x3680) = uVar13;
  uVar2 = AddEditorButton(uVar10, uVar2, "unknownbutton");
  *(uint64_t *)(self + 0x3688) = uVar2;
  EditorButton__SetButtonProps(*(EditorButton **)(self + 0x3680), SMBLevelPortalBigLevelButtonPress,
                               (void *)0x0, (_func_void_void_ptr *)0x0, (void *)0x0,
                               (_func_void_void_ptr *)0x0, (void *)0x0);
  EditorButton__SetButtonProps(*(EditorButton **)(self + 0x3688), SMBLevelPortalUnknownPress,
                               (void *)0x0, (_func_void_void_ptr *)0x0, (void *)0x0,
                               (_func_void_void_ptr *)0x0, (void *)0x0);
  EditorButton__SetButtonProps(*(EditorButton **)(self + 0x3678), SMBLevelPortalFeaturedPress,
                               (void *)0x0, (_func_void_void_ptr *)0x0, (void *)0x0,
                               (_func_void_void_ptr *)0x0, (void *)0x0);
  Sprint("difbar%i", local_88, 1);
  pEVar6 = (EditorButton *)AddEditorButton(uVar10, *(uint64_t *)(self + 8), local_88);
  *(EditorButton **)(self + 0x3708) = pEVar6;
  EditorButton__SetButtonProps(pEVar6, SMBLevelPortalUnknownDifficultyPress, (void *)0x0,
                               (_func_void_void_ptr *)0x0, (void *)0x0, (_func_void_void_ptr *)0x0,
                               (void *)0x0);
  Sprint("difbar%i", local_88, 2);
  pEVar6 = (EditorButton *)AddEditorButton(uVar10, *(uint64_t *)(self + 8), local_88);
  *(EditorButton **)(self + 0x3710) = pEVar6;
  EditorButton__SetButtonProps(pEVar6, SMBLevelPortalUnknownDifficultyPress, (void *)0x1,
                               (_func_void_void_ptr *)0x0, (void *)0x0, (_func_void_void_ptr *)0x0,
                               (void *)0x0);
  Sprint("difbar%i", local_88, 3);
  pEVar6 = (EditorButton *)AddEditorButton(uVar10, *(uint64_t *)(self + 8), local_88);
  *(EditorButton **)(self + 0x3718) = pEVar6;
  EditorButton__SetButtonProps(pEVar6, SMBLevelPortalUnknownDifficultyPress, (void *)0x2,
                               (_func_void_void_ptr *)0x0, (void *)0x0, (_func_void_void_ptr *)0x0,
                               (void *)0x0);
  Sprint("difbar%i", local_88, 4);
  pEVar6 = (EditorButton *)AddEditorButton(uVar10, *(uint64_t *)(self + 8), local_88);
  *(EditorButton **)(self + 0x3720) = pEVar6;
  EditorButton__SetButtonProps(pEVar6, SMBLevelPortalUnknownDifficultyPress, (void *)0x3,
                               (_func_void_void_ptr *)0x0, (void *)0x0, (_func_void_void_ptr *)0x0,
                               (void *)0x0);
  Sprint("difbar%i", local_88, 5);
  pEVar6 = (EditorButton *)AddEditorButton(uVar10, *(uint64_t *)(self + 8), local_88);
  *(EditorButton **)(self + 0x3728) = pEVar6;
  EditorButton__SetButtonProps(pEVar6, SMBLevelPortalUnknownDifficultyPress, (void *)0x4,
                               (_func_void_void_ptr *)0x0, (void *)0x0, (_func_void_void_ptr *)0x0,
                               (void *)0x0);
  FlashAnimationLibrary__SetTextFieldText(*(char **)(self + 8), "difficulty1",
                                          "I\'m Too young to die");
  FlashAnimationLibrary__SetTextFieldText(*(char **)(self + 8), "difficulty2",
                                          "Hey, not too rough");
  FlashAnimationLibrary__SetTextFieldText(*(char **)(self + 8), "difficulty3", "Hurt me plenty");
  FlashAnimationLibrary__SetTextFieldText(*(char **)(self + 8), "difficulty4", "Ultra-Violence");
  FlashAnimationLibrary__SetTextFieldText(*(char **)(self + 8), "difficulty5", "Nightmare!");
  *(ushort *)(self + 0x34) = *(ushort *)(self + 0x34) & 0xfc00 | 1;
  (**(code **)(*(long *)self + 0x38))(self);
  *(ushort *)(self + 0x34) = *(ushort *)(self + 0x34) & 0xfc00;
  local_58 = strPortalIP;
  local_68 = "smb_editor_user";
  local_60 = "editor";
  local_50 = 1;
  SQLDatabase__Connect(pPortalConnection, (SQLDatabaseConnection *)&local_68);
  SQLDatabase__ChooseDatabase(pPortalConnection, "smb_editor");
  SetDisplayMode(self, 0);
  return;
}

/* ======================================================================
 * SMBLevelPortalInterface__PortalInterfaceElement_PortalInterfaceElement  (Ghidra `~PortalInterfaceElement` @ 0050d2c0)
 * Signature: uint8_t __thiscall ~PortalInterfaceElement(PortalInterfaceElement * self)
 * Class: SMBLevelPortalInterface
 * Calls: `FlashLibraryInstance__FlashLibraryInstance__00572bd0`
 * Called by: (none)
 */
/* SMBLevelPortalInterface__PortalInterfaceElement_PortalInterfaceElement() */

void __thiscall
SMBLevelPortalInterface__PortalInterfaceElement_PortalInterfaceElement(PortalInterfaceElement *self)

{
  if (*(long **)(self + 8) != (long *)0x0) {
    /* try { // try from 0050d2d4 to 0050d2d6 has its CatchHandler @ 0050d311 */
    (**(code **)(**(long **)(self + 8) + 8))();
  }
  *(uint64_t *)(self + 8) = 0;
  /* try { // try from 0050d2e6 to 0050d2ea has its CatchHandler @ 0050d372 */
  FlashLibraryInstance__FlashLibraryInstance__00572bd0((FlashLibraryInstance *)(self + 0x1f0));
  /* try { // try from 0050d2f2 to 0050d2f6 has its CatchHandler @ 0050d370 */
  FlashLibraryInstance__FlashLibraryInstance__00572bd0((FlashLibraryInstance *)(self + 0x150));
  /* try { // try from 0050d2fe to 0050d302 has its CatchHandler @ 0050d36e */
  FlashLibraryInstance__FlashLibraryInstance__00572bd0((FlashLibraryInstance *)(self + 0xb0));
  FlashLibraryInstance__FlashLibraryInstance__00572bd0((FlashLibraryInstance *)(self + 0x10));
  return;
}
