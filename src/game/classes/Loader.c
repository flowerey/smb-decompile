/* src/game/classes/Loader.c — 7 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "Loader.h"

/* ======================================================================
 * Loader__InitializeLoader  (Ghidra `InitializeLoader` @ 00592670)
 * Signature: uint8_t __stdcall InitializeLoader(void)
 * Class: Loader
 * Calls: (none)
 * Called by: `TEngine__TEngine`
 */
/* Loader__InitializeLoader() */

void Loader__InitializeLoader(void)

{
  pCurrNet = 0;
  return;
}

/* ======================================================================
 * Loader__DestroyLoader  (Ghidra `DestroyLoader` @ 00592680)
 * Signature: uint8_t __stdcall DestroyLoader(void)
 * Class: Loader
 * Calls: `free`
 * Called by: `TEngine__TEngine__00583e20`
 */
/* Loader__DestroyLoader() */

void Loader__DestroyLoader(void)

{
  if (pLoaderFuncs._72_4_ != -0x5eef3582) {
    return;
  }
  pLoaderFuncs._72_4_ = 0;
  free(*(void **)(pLoaderFuncs._56_8_ + -8));
  if (pLoaderFuncs._48_4_ == 1) {
    free(*(void **)(pLoaderFuncs._64_8_ + -8));
  }
  pLoaderFuncs._72_4_ = 0;
  pLoaderFuncs._42_2_ = 0;
  pLoaderFuncs._40_2_ = 0;
  pLoaderFuncs._56_8_ = 0;
  pLoaderFuncs._64_8_ = 0;
  return;
}

/* ======================================================================
 * Loader__LoaderThreadFunc  (Ghidra `LoaderThreadFunc` @ 00592710)
 * Signature: uint8_t __thiscall LoaderThreadFunc(Loader * self, void * arg1)
 * Class: Loader
 * Calls: `AutoLockSection__AutoLockSection`, `AutoLockSection__AutoLockSection__005b59d0`, `SyncEvent__Set`
 * Called by: (none)
 */
/* Loader__LoaderThreadFunc(void*) */

uint64_t __thiscall Loader__LoaderThreadFunc(Loader *self, void *arg1)

{
  AutoLockSection aAStack_18[16];

  (**(code **)(self + 8))(*(uint64_t *)(self + 0x10));
  SyncEvent__Set((SyncEvent *)(self + 0x18));
  AutoLockSection__AutoLockSection(aAStack_18, (CriticalSection *)LoaderAllocSection);
  *(uint32_t *)(self + 0x90) = 1;
  AutoLockSection__AutoLockSection__005b59d0(aAStack_18);
  return 0;
}

/* ======================================================================
 * Loader__GenerateLoadCallerID  (Ghidra `GenerateLoadCallerID` @ 00592750)
 * Signature: uint8_t __stdcall GenerateLoadCallerID(void)
 * Class: Loader
 * Calls: (none)
 * Called by: `Create`, `FlashAnimationLibrary__FlashAnimationLibrary__00576680`
 */
/* Loader__GenerateLoadCallerID() */

void Loader__GenerateLoadCallerID(void)

{
  GenerateLoadCallerID()::__MasterLoadCallerID = GenerateLoadCallerID()::__MasterLoadCallerID + 1;
  return;
}

/* ======================================================================
 * Loader__Update  (Ghidra `Update` @ 00592770)
 * Signature: uint8_t __stdcall Update(void)
 * Class: Loader
 * Calls: (none)
 * Called by: `TEngine__Update`
 */
/* Loader__Update() */

void Loader__Update(void)

{
  return;
}

/* ======================================================================
 * Loader__WaitAll  (Ghidra `WaitAll` @ 00592790)
 * Signature: uint8_t __stdcall WaitAll(void)
 * Class: Loader
 * Calls: (none)
 * Called by: `FinalBoss__Update`, `GSMBMenu__TransitionInChapter`, `GSMBMenu__TransitionOutGameFromMenu`, `GSMBMenu__TransitionOutMenuFromGame`, `GSuperMeatBoy__Initialize__00516f60`, `GSuperMeatBoy__LoadDeferredCharactor`, `LoadDeferredCharactor`, `ResourcePool__ReleaseAll`, `SMBChapterPlayWarpIntro`, `SMBChapter__ActivateWarpZone` (+10 more)
 */
/* Loader__WaitAll() */

uint64_t Loader__WaitAll(void)

{
  return 1;
}

/* ======================================================================
 * Loader__WithdrawLoadNet  (Ghidra `WithdrawLoadNet` @ 005927c0)
 * Signature: uint8_t __stdcall WithdrawLoadNet(void)
 * Class: Loader
 * Calls: (none)
 * Called by: (none)
 */
/* Loader__WithdrawLoadNet() */

void Loader__WithdrawLoadNet(void)

{
  pCurrNet = 0;
  return;
}
