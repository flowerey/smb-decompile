/* src/game/classes/TAudioInstance.c — 6 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "TAudioInstance.h"

/* ======================================================================
 * TAudioInstance__TAudioInstance  (Ghidra `TAudioInstance` @ 0057a1d0)
 * Signature: uint8_t __thiscall TAudioInstance(TAudioInstance * self)
 * Class: TAudioInstance
 * Calls: (none)
 * Called by: `EditorFormChapterUpload__EditorFormChapterUpload__004b8ec0`, `GLOBAL_sub_I_SMBMenu`, `GLOBAL_sub_I_pEscapeMusic`, `GSMBMenu__GSMBMenu__004d8690`, `SMBChapter__SMBChapter__00495700`
 */
/* TAudioInstance__TAudioInstance() */

void __thiscall TAudioInstance__TAudioInstance(TAudioInstance *self)

{
  *(uint64_t *)self = 0;
  *(uint32_t *)(self + 8) = 100;
  *(uint64_t *)(self + 0x10) = 0;
  *(uint32_t *)(self + 0x18) = 0;
  *(uint32_t *)(self + 0x1c) = 0;
  *(uint32_t *)(self + 0x20) = 0;
  return;
}

/* ======================================================================
 * TAudioInstance__TAudioInstance__0057a200  (Ghidra `~TAudioInstance` @ 0057a200)
 * Signature: uint8_t __thiscall ~TAudioInstance(TAudioInstance * self)
 * Class: TAudioInstance
 * Calls: (none)
 * Called by: `EditorFormChapterUpload__EditorFormChapterUpload`, `EditorFormChapterUpload__EditorFormChapterUpload__004b71a0`, `GLOBAL_sub_I_SMBMenu`, `GLOBAL_sub_I_pEscapeMusic`, `GSMBMenu__GSMBMenu`, `SMBChapter__SMBChapter`
 */
/* TAudioInstance__TAudioInstance__0057a200() */

void __thiscall TAudioInstance__TAudioInstance__0057a200(TAudioInstance *self)

{
  *(uint64_t *)self = 0;
  *(uint64_t *)(self + 0x10) = 0;
  *(uint32_t *)(self + 0x18) = 0;
  return;
}

/* ======================================================================
 * TAudioInstance__Play  (Ghidra `Play` @ 0057a220)
 * Signature: uint8_t __stdcall Play(void)
 * Class: TAudioInstance
 * Calls: (none)
 * Called by: (none)
 */
/* TAudioInstance__Play() */

void TAudioInstance__Play(void)

{
  return;
}

/* ======================================================================
 * TAudioInstance__SetVolume  (Ghidra `SetVolume` @ 0057a230)
 * Signature: uint8_t __thiscall SetVolume(TAudioInstance * self, uint arg1)
 * Class: TAudioInstance
 * Calls: `audSetVolume`
 * Called by: `AudioEffectFade__Update`, `FlashSoundLibrary__Play`, `SMBChapter__ResetChapterMusic`
 */
/* TAudioInstance__SetVolume(unsigned int) */

void __thiscall TAudioInstance__SetVolume(TAudioInstance *self,uint arg1)

{
  if ((*(long *)self != 0) && (*(uint *)(self + 8) = arg1, *(int *)(self + 0x20) == 0)) {
    audSetVolume();
    return;
  }
  return;
}

/* ======================================================================
 * TAudioInstance__Stop  (Ghidra `Stop` @ 0057a250)
 * Signature: uint8_t __thiscall Stop(TAudioInstance * self)
 * Class: TAudioInstance
 * Calls: `audStopCue`
 * Called by: `EditorButton_ChapterLevelMusicPress`, `EditorForm_ChapterUploadFormCancel`, `FinalBoss__FinalBoss`, `FinalBoss__Update`, `GSMBMenu__HideChapterEnd`, `GSMBMenu__HideTitleMenu`, `GSMBMenu__HideWorldMap`, `GSMBMenu__TransitionInChapter`, `SMBChapterEndIdleFinished`, `SMBChapterEndInFinished` (+13 more)
 */
/* TAudioInstance__Stop() */

void __thiscall TAudioInstance__Stop(TAudioInstance *self)

{
  uint64_t *puVar1;
  ushort *puVar2;
  ushort uVar3;
  ushort uVar4;
  short sVar5;
  uint uVar6;
  ushort uVar7;
  long *plVar8;
  long lVar9;
  uint uVar10;
  bool bVar11;
  
  if ((*(int *)(self + 0x18) != 1) || (*(long *)self == 0)) {
    return;
  }
  if (pMusicInstances._40_2_ == 0) {
LAB_0057a2a1:
    audStopCue();
    return;
  }
  uVar4 = 0;
  plVar8 = (long *)pMusicInstances._56_8_;
  if (self == *(TAudioInstance **)pMusicInstances._56_8_) {
    uVar10 = 1;
    uVar6 = 0;
  }
  else {
    do {
      uVar4 = uVar4 + 1;
      if (uVar4 == pMusicInstances._40_2_) goto LAB_0057a2a1;
      plVar8 = plVar8 + 1;
    } while (self != (TAudioInstance *)*plVar8);
    uVar6 = (uint)uVar4;
    uVar10 = uVar6 + 1;
  }
  if ((uVar10 < (ushort)pMusicInstances._40_2_) &&
     ((int)uVar6 < (int)((ushort)pMusicInstances._40_2_ - 1))) {
    lVar9 = (long)(int)uVar6 << 3;
    uVar10 = uVar6;
    do {
      puVar1 = (uint64_t *)(pMusicInstances._56_8_ + lVar9);
      lVar9 = lVar9 + 8;
      uVar10 = uVar10 + 1;
      *puVar1 = *(uint64_t *)(pMusicInstances._56_8_ + lVar9);
    } while ((int)uVar10 < (int)((ushort)pMusicInstances._40_2_ - 1));
  }
  if ((pMusicInstances._48_4_ == 1) && (pMusicInstances._42_2_ != 0)) {
    uVar7 = 0;
    uVar4 = pMusicInstances._42_2_;
    do {
      puVar2 = (ushort *)(pMusicInstances._64_8_ + (ulong)uVar7 * 2);
      uVar3 = *puVar2;
      if (uVar3 == uVar6) {
        *puVar2 = 0xffff;
        uVar4 = pMusicInstances._42_2_;
      }
      else if ((uVar6 < uVar3) && ((ushort)(uVar3 - 1) < 0xfffe)) {
        *puVar2 = uVar3 - 1;
        uVar4 = pMusicInstances._42_2_;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar4);
  }
  sVar5 = pMusicInstances._40_2_ + -1;
  bVar11 = pMusicInstances._40_2_ != 0;
  pMusicInstances._40_2_ = 0;
  if (bVar11) {
    pMusicInstances._40_2_ = sVar5;
  }
  audStopCue();
  return;
}

/* ======================================================================
 * TAudioInstance__IsPlaying  (Ghidra `IsPlaying` @ 0057a3c0)
 * Signature: uint8_t __thiscall IsPlaying(TAudioInstance * self)
 * Class: TAudioInstance
 * Calls: (none)
 * Called by: `EditorButton_ChapterLevelMusicPress`, `EditorForm_ChapterUploadFormCancel`, `FinalBoss__FinalBoss`, `GSMBMenu__ShowStartMenu`, `GSMBMenu__ShowTitleMenu`, `GSMBMenu__TransitionInTitleFromGame`, `GSMBMenu__TransitionInTitleFromWorld`, `SMBChapter__PlayChapterMusic`, `SMBGameToTitleTransFinished`, `SMBWorldToTitleTransFinished`
 */
/* TAudioInstance__IsPlaying() */

uint32_t __thiscall TAudioInstance__IsPlaying(TAudioInstance *self)

{
  return *(uint32_t *)(self + 0x18);
}
