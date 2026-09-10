/* src/game/classes/SyncEvent.c — 6 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "SyncEvent.h"

/* ======================================================================
 * SyncEvent__SyncEvent  (Ghidra `SyncEvent` @ 005b8080)
 * Signature: uint8_t __thiscall SyncEvent(SyncEvent * self)
 * Class: SyncEvent
 * Calls: `pthread_cond_init`, `pthread_mutex_destroy`, `pthread_mutex_init`
 * Called by: `AudioFile__AudioFile`, `GLOBAL_sub_I_SMBChapterData`, `GLOBAL_sub_I_SMBMenu`, `GLOBAL_sub_I_dwDefaultTimeBetweenFrames`, `GLOBAL_sub_I_dwFrameStartTime`, `GLOBAL_sub_I_iCurrentLevel`, `GLOBAL_sub_I_pEscapeMusic`, `GSMBMenu__LoadSelectedLevel`, `GSuperMeatBoy__HideGame`, `LoaderAlloc` (+3 more)
 */
/* SyncEvent__SyncEvent() */

void __thiscall SyncEvent__SyncEvent(SyncEvent *self)

{
  int iVar1;
  
  *(uint32_t *)self = 0;
  *(uint32_t *)(self + 0x60) = 0;
  iVar1 = pthread_mutex_init((pthread_mutex_t *)(self + 8),(pthread_mutexattr_t *)0x0);
  if (iVar1 != 0) {
    return;
  }
  iVar1 = pthread_cond_init((pthread_cond_t *)(self + 0x30),(pthread_condattr_t *)0x0);
  if (iVar1 == 0) {
    *(uint32_t *)self = 1;
    return;
  }
  pthread_mutex_destroy((pthread_mutex_t *)(self + 8));
  return;
}

/* ======================================================================
 * SyncEvent__SyncEvent__005b8100  (Ghidra `~SyncEvent` @ 005b8100)
 * Signature: uint8_t __thiscall ~SyncEvent(SyncEvent * self)
 * Class: SyncEvent
 * Calls: `pthread_cond_destroy`, `pthread_mutex_destroy`
 * Called by: `AudioFile__AudioFile__005a75c0`, `GLOBAL_sub_I_SMBChapterData`, `GLOBAL_sub_I_SMBMenu`, `GLOBAL_sub_I_dwDefaultTimeBetweenFrames`, `GLOBAL_sub_I_dwFrameStartTime`, `GLOBAL_sub_I_iCurrentLevel`, `GLOBAL_sub_I_pEscapeMusic`, `GSMBMenu__LoadSelectedLevel`, `GSuperMeatBoy__HideGame`, `SMBInternetChapterSel__SMBInternetChapterSel` (+3 more)
 */
/* SyncEvent__SyncEvent__005b8100() */

void __thiscall SyncEvent__SyncEvent__005b8100(SyncEvent *self)

{
  if (*(int *)self == 0) {
    return;
  }
  pthread_cond_destroy((pthread_cond_t *)(self + 0x30));
  pthread_mutex_destroy((pthread_mutex_t *)(self + 8));
  return;
}

/* ======================================================================
 * SyncEvent__Wait  (Ghidra `Wait` @ 005b8130)
 * Signature: uint8_t __thiscall Wait(SyncEvent * self)
 * Class: SyncEvent
 * Calls: `pthread_cond_wait`, `pthread_mutex_lock`, `pthread_mutex_unlock`
 * Called by: `AudioFile__AudioFile__005a75c0`, `AudioFile__GetStreamingData`, `AudioFile__ResetStream`, `AudioStreamingFunc`, `DisableLoadingRenderThread`, `FinalBoss__Update`, `GSMBChapterData__ResetData`, `GSMBChapterData__SaveData`, `IsRequestedPaletteLoading`, `Load` (+10 more)
 */
/* SyncEvent__Wait() */

void __thiscall SyncEvent__Wait(SyncEvent *self)

{
  pthread_mutex_t *__mutex;
  
  if (*(int *)self == 0) {
    return;
  }
  __mutex = (pthread_mutex_t *)(self + 8);
  pthread_mutex_lock(__mutex);
  if (*(int *)(self + 0x60) == 0) {
    do {
      pthread_cond_wait((pthread_cond_t *)(self + 0x30),__mutex);
    } while (*(int *)(self + 0x60) == 0);
  }
  pthread_mutex_unlock(__mutex);
  return;
}

/* ======================================================================
 * SyncEvent__CheckStatus  (Ghidra `CheckStatus` @ 005b81b0)
 * Signature: uint8_t __thiscall CheckStatus(SyncEvent * self)
 * Class: SyncEvent
 * Calls: `pthread_mutex_lock`, `pthread_mutex_unlock`
 * Called by: `GSMBChapterData__ResetData`, `SMBInternetChapterSel__Update`, `SMBLeaderBoardMenu__Update`
 */
/* SyncEvent__CheckStatus() */

uint32_t __thiscall SyncEvent__CheckStatus(SyncEvent *self)

{
  uint32_t uVar1;
  
  uVar1 = 1;
  if (*(int *)self != 0) {
    pthread_mutex_lock((pthread_mutex_t *)(self + 8));
    uVar1 = *(uint32_t *)(self + 0x60);
    pthread_mutex_unlock((pthread_mutex_t *)(self + 8));
  }
  return uVar1;
}

/* ======================================================================
 * SyncEvent__Set  (Ghidra `Set` @ 005b8200)
 * Signature: uint8_t __thiscall Set(SyncEvent * self)
 * Class: SyncEvent
 * Calls: `pthread_cond_broadcast`, `pthread_mutex_lock`, `pthread_mutex_unlock`
 * Called by: `AudioFile__AudioFile`, `AudioFile__AudioFile__005a75c0`, `AudioFile__GetStreamingData`, `AudioStreamingFunc`, `GSMBChapterData__GSMBChapterData`, `Load`, `LoadBossIntro`, `LoadBossOutro`, `Loader__LoaderThreadFunc`, `SMBBGLoaderThread` (+8 more)
 */
/* SyncEvent__Set() */

void __thiscall SyncEvent__Set(SyncEvent *self)

{
  if (*(int *)self == 0) {
    return;
  }
  pthread_mutex_lock((pthread_mutex_t *)(self + 8));
  *(uint32_t *)(self + 0x60) = 1;
  pthread_cond_broadcast((pthread_cond_t *)(self + 0x30));
  pthread_mutex_unlock((pthread_mutex_t *)(self + 8));
  return;
}

/* ======================================================================
 * SyncEvent__Reset  (Ghidra `Reset` @ 005b8270)
 * Signature: uint8_t __thiscall Reset(SyncEvent * self)
 * Class: SyncEvent
 * Calls: `pthread_mutex_lock`, `pthread_mutex_unlock`
 * Called by: `AudioFile__AudioFile`, `AudioFile__AudioFile__005a75c0`, `AudioFile__GetStreamingData`, `AudioStreamingFunc`, `DisableLoadingRenderThread`, `FinalBoss__SetToPhaseTwo`, `GSMBChapterData__SaveData`, `SMBChapter__ThreadLoadBossIntro`, `SMBChapter__ThreadLoadBossOutro`, `SMBReplay__WriteReplayData` (+1 more)
 */
/* SyncEvent__Reset() */

void __thiscall SyncEvent__Reset(SyncEvent *self)

{
  if (*(int *)self == 0) {
    return;
  }
  pthread_mutex_lock((pthread_mutex_t *)(self + 8));
  *(uint32_t *)(self + 0x60) = 0;
  pthread_mutex_unlock((pthread_mutex_t *)(self + 8));
  return;
}
