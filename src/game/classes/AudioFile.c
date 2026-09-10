/* src/game/classes/AudioFile.c — 9 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "AudioFile.h"

/* ======================================================================
 * AudioFile__AudioFile  (Ghidra `AudioFile` @ 005a6e60)
 * Signature: uint8_t __thiscall AudioFile(AudioFile * self, AudioFileCreation * arg1)
 * Class: AudioFile
 * Calls: `AudioStreamingFunc`, `CreateWorkerThread`, `File__File`, `File__File__005b7a70`, `File__GetFilePos`, `File__Read`, `File__ReadVariable`, `File__Reset`, `File__Seek`, `SyncEvent__Reset` (+8 more)
 * Called by: `audCreateCue`
 */
/* AudioFile__AudioFile(AudioFileCreation const*) */

void __thiscall AudioFile__AudioFile(AudioFile *self, AudioFileCreation *arg1)

{
  long lVar1;
  uint uVar2;
  TAudio *this_00;
  uint32_t uVar3;
  uint uVar4;
  int iVar5;
  File *pFVar6;
  void *pvVar7;
  uint64_t uVar8;
  uint uVar9;
  uint64_t local_b8;
  uint8_t *local_b0;
  uint32_t local_a8;
  uint64_t local_a0;
  uint32_t local_98;
  uint32_t local_94;
  uint32_t local_90;
  uint32_t local_8c;
  uint32_t local_88;
  uint32_t local_84;
  uint8_t *local_80;
  code *local_78;
  AudioFile *local_70;
  uint32_t local_68;
  int *local_60;
  uint32_t local_58;
  uint32_t uStack_54;
  int local_48[4];
  int local_38[6];

  *(uint64_t *)(self + 8) = 0;
  *(uint32_t *)(self + 0x10) = 0;
  *(uint32_t *)(self + 0x2c) = 0;
  uVar3 = *(uint32_t *)(arg1 + 8);
  *(uint32_t *)(self + 0x34) = 0;
  *(uint32_t *)(self + 0x38) = 0;
  *(uint32_t *)(self + 0x3c) = 0;
  *(uint64_t *)(self + 0x40) = 0;
  *(uint32_t *)(self + 0x30) = uVar3;
  *(uint32_t *)(self + 0x48) = 0;
  *(uint64_t *)(self + 0x50) = 0;
  *(uint32_t *)(self + 0x58) = 0;
  *(uint64_t *)(self + 0x60) = 0;
  *(uint32_t *)(self + 0x68) = 0;
  SyncEvent__SyncEvent((SyncEvent *)(self + 0x70));
  /* try { // try from 005a6ee7 to 005a6eeb has its CatchHandler @ 005a75bb */
  SyncEvent__SyncEvent((SyncEvent *)(self + 0xd8));
  *(uint64_t *)(self + 0x158) = 0;
  local_b8 = *(uint64_t *)arg1;
  local_a8 = 2;
  local_a0 = 0;
  local_98 = 0;
  local_94 = 1;
  local_90 = 1;
  local_8c = 0;
  local_88 = 0;
  local_84 = 0;
  local_80 = &DAT_005c04cf /* R:7.374579797039071e-39f */;
  local_b0 = &DAT_005c328c /* R:u32=1811964530 */;
  /* try { // try from 005a6f57 to 005a6f5b has its CatchHandler @ 005a75b6 */
  pFVar6 = operator_new(0x30);
  /* try { // try from 005a6f65 to 005a6f69 has its CatchHandler @ 005a7593 */
  File__File(pFVar6, (tagFileCreation *)&local_b8);
  *(File **)(self + 0x150) = pFVar6;
  local_48[0] = 0;
  /* try { // try from 005a6f86 to 005a758d has its CatchHandler @ 005a75b6 */
  File__Read(pFVar6, local_48, 4);
  File__Reset(*(File **)(self + 0x150));
  SyncEvent__Set((SyncEvent *)(self + 0xd8));
  SyncEvent__Reset((SyncEvent *)(self + 0x70));
  if (local_48[0] == 0x46464952) {
    *(uint32_t *)self = 0;
    iVar5 = 0;
  } else {
    if (local_48[0] == 0x5367674f) {
      uVar9 = *(uint *)(self + 0x30);
      *(uint32_t *)self = 1;
      iVar5 = 1;
      this_00 = Audio;
      goto joined_r0x005a7119;
    }
    *(uint32_t *)self = 2;
    iVar5 = 2;
  }
  uVar9 = *(uint *)(self + 0x30);
  this_00 = Audio;
joined_r0x005a7119:
  Audio = this_00;
  if ((uVar9 & 8) != 0) {
    local_58 = 0;
    uVar9 = 0;
    do {
      pFVar6 = *(File **)(self + 0x150);
      if (*(uint *)(pFVar6 + 4) <= uVar9) {
      LAB_005a717b:
        File__Reset(pFVar6);
        uVar9 = 0;
        while (true) {
          if (*(uint *)(*(File **)(self + 0x150) + 4) <= uVar9) {
            return;
          }
          local_38[0] = 0;
          File__Read(*(File **)(self + 0x150), local_38, 4);
          if (local_38[0] == 0x61746164)
            break;
          uVar9 = uVar9 + 2;
          File__Seek(*(File **)(self + 0x150), uVar9);
        }
        File__ReadVariable(*(File **)(self + 0x150), self + 0x10, 4);
        uVar3 = File__GetFilePos(*(File **)(self + 0x150));
        *(uint32_t *)(self + 0x148) = uVar3;
        return;
      }
      local_38[0] = 0;
      File__Read(pFVar6, local_38, 4);
      if (local_38[0] == 0x20746d66) {
        File__ReadVariable(*(File **)(self + 0x150), &local_58, 4);
        File__ReadVariable(*(File **)(self + 0x150), self + 0x14, 2);
        File__ReadVariable(*(File **)(self + 0x150), self + 0x16, 2);
        File__ReadVariable(*(File **)(self + 0x150), self + 0x18, 4);
        File__ReadVariable(*(File **)(self + 0x150), self + 0x1c, 4);
        File__ReadVariable(*(File **)(self + 0x150), self + 0x20, 2);
        File__ReadVariable(*(File **)(self + 0x150), self + 0x22, 2);
        File__ReadVariable(*(File **)(self + 0x150), self + 0x24, 2);
        File__Reset(*(File **)(self + 0x150));
        pFVar6 = *(File **)(self + 0x150);
        goto LAB_005a717b;
      }
      uVar9 = uVar9 + 2;
      File__Seek(*(File **)(self + 0x150), uVar9);
    } while (true);
  }
  if (iVar5 == 1) {
    pvVar7 = operator_new__((ulong) * (uint *)(*(long *)(self + 0x150) + 4));
    File__Read(*(File **)(self + 0x150), pvVar7, *(uint *)(*(File **)(self + 0x150) + 4));
    local_38[0] = 0;
    iVar5 = stb_vorbis_decode_memory(pvVar7, *(uint32_t *)(*(long *)(self + 0x150) + 4), local_38,
                                     &local_58, &local_60);
    *(uint16_t *)(self + 0x24) = 0;
    *(uint16_t *)(self + 0x22) = 0x10;
    *(int *)(self + 0x10) = iVar5 * local_38[0] * 2;
    *(ulong *)(self + 8) = CONCAT44(uStack_54, local_58);
    uVar9 = local_60[1];
    *(short *)(self + 0x16) = (short)uVar9;
    iVar5 = *local_60;
    uVar9 = (uVar9 & 0xffff) * 2;
    *(uint *)(self + 0x30) = *(uint *)(self + 0x30) & 0xfffffffe;
    *(uint16_t *)(self + 0x14) = 1;
    *(short *)(self + 0x20) = (short)uVar9;
    *(int *)(self + 0x18) = iVar5;
    *(uint *)(self + 0x1c) = (uVar9 & 0xfffe) * iVar5;
    stb_vorbis_close();
    pFVar6 = *(File **)(self + 0x150);
    if (pFVar6 != (File *)0x0) {
      File__File__005b7a70(pFVar6);
      operator_delete(pFVar6);
    }
    operator_delete(pvVar7);
  } else if (iVar5 == 0) {
    local_58 = 0;
    uVar9 = 0;
    while (pFVar6 = *(File **)(self + 0x150), uVar9 < *(uint *)(pFVar6 + 4)) {
      local_38[0] = 0;
      File__Read(pFVar6, local_38, 4);
      if (local_38[0] == 0x20746d66) {
        File__ReadVariable(*(File **)(self + 0x150), &local_58, 4);
        File__ReadVariable(*(File **)(self + 0x150), self + 0x14, 2);
        File__ReadVariable(*(File **)(self + 0x150), self + 0x16, 2);
        File__ReadVariable(*(File **)(self + 0x150), self + 0x18, 4);
        File__ReadVariable(*(File **)(self + 0x150), self + 0x1c, 4);
        File__ReadVariable(*(File **)(self + 0x150), self + 0x20, 2);
        File__ReadVariable(*(File **)(self + 0x150), self + 0x22, 2);
        File__ReadVariable(*(File **)(self + 0x150), self + 0x24, 2);
        File__Reset(*(File **)(self + 0x150));
        pFVar6 = *(File **)(self + 0x150);
        break;
      }
      uVar9 = uVar9 + 2;
      File__Seek(*(File **)(self + 0x150), uVar9);
    }
    File__Reset(pFVar6);
    uVar9 = 0;
    while (uVar9 < *(uint *)(*(File **)(self + 0x150) + 4)) {
      local_38[0] = 0;
      File__Read(*(File **)(self + 0x150), local_38, 4);
      if (local_38[0] == 0x61746164) {
        File__ReadVariable(*(File **)(self + 0x150), self + 0x10, 4);
        if (((byte)self[0x30] & 1) != 0) {
          uVar3 = File__GetFilePos(*(File **)(self + 0x150));
          *(uint32_t *)(self + 0x34) = uVar3;
          pvVar7 = (void *)audAlloc(0x4b000);
          *(void **)(self + 8) = pvVar7;
          uVar4 = File__Read(*(File **)(self + 0x150), pvVar7, 0x4b000);
          lVar1 = *(long *)(self + 8);
          *(uint32_t *)(self + 0x2c) = 1;
          local_68 = 2;
          uVar9 = 0x19000;
          if (uVar4 < 0x19001) {
            uVar9 = uVar4;
          }
          local_78 = AudioStreamingFunc;
          *(long *)(self + 0x40) = lVar1;
          *(uint *)(self + 0x48) = uVar9;
          *(long *)(self + 0x50) = lVar1 + 0x19000;
          uVar2 = uVar4 - 0x19000;
          if (0x19000 < uVar4 - 0x19000) {
            uVar2 = 0x19000;
          }
          uVar4 = uVar4 - 0x32000;
          *(uint *)(self + 0x58) = uVar2;
          if (0x19000 < uVar4) {
            uVar4 = 0x19000;
          }
          *(uint *)(self + 0x38) = *(int *)(self + 0x38) + uVar9;
          *(long *)(self + 0x60) = lVar1 + 0x32000;
          *(uint *)(self + 0x68) = uVar4;
          local_70 = self;
          uVar8 = CreateWorkerThread((tagThreadCreate *)&local_78);
          *(uint64_t *)(self + 0x140) = uVar8;
          return;
        }
        pvVar7 = (void *)audAlloc(*(uint32_t *)(self + 0x10));
        *(void **)(self + 8) = pvVar7;
        File__Read(*(File **)(self + 0x150), pvVar7, *(uint *)(self + 0x10));
        goto LAB_005a70d5;
      }
      uVar9 = uVar9 + 2;
      File__Seek(*(File **)(self + 0x150), uVar9);
    }
  } else {
    *(uint *)(self + 0x30) = uVar9 & 0xfffffffe;
    TAudio__DecodeConsoleADPCMData(this_00, self, (uchar **)(self + 8),
                                   (TWAVEFORMATEX *)(self + 0x14), (uint *)(self + 0x34),
                                   (uint *)(self + 0x10));
  LAB_005a70d5:
    if ((((byte)self[0x30] & 0x10) == 0) &&
        (pFVar6 = *(File **)(self + 0x150), pFVar6 != (File *)0x0)) {
      File__File__005b7a70(pFVar6);
      operator_delete(pFVar6);
      return;
    }
  }
  return;
}

/* ======================================================================
 * AudioFile__AudioFile__005a75c0  (Ghidra `~AudioFile` @ 005a75c0)
 * Signature: uint8_t __thiscall ~AudioFile(AudioFile * self)
 * Class: AudioFile
 * Calls: `CloseThread`, `File__File__005b7a70`, `SyncEvent__Reset`, `SyncEvent__Set`, `SyncEvent__SyncEvent__005b8100`, `SyncEvent__Wait`, `audFree`, `operator_delete`
 * Called by: `OpenALCueBufferInfo__OpenALCueBufferInfo__0053e0b0`, `OpenALCueBufferInfo__Release`, `OpenALCue__OpenALCue__0053e1e0`, `audCreateCue`, `audDestroyCue`, `audDestroyDevice`
 */
/* AudioFile__AudioFile__005a75c0() */

void __thiscall AudioFile__AudioFile__005a75c0(AudioFile *self)

{
  SyncEvent *this_00;
  File *pFVar1;

  this_00 = (SyncEvent *)(self + 0xd8);
  if (*(long *)(self + 8) != 0) {
    if (((byte)self[0x30] & 1) == 0) {
      /* try { // try from 005a75f6 to 005a761d has its CatchHandler @ 005a76be */
      SyncEvent__Wait(this_00);
      audFree(*(uint64_t *)(self + 8));
    } else {
      /* try { // try from 005a7660 to 005a76b0 has its CatchHandler @ 005a76be */
      SyncEvent__Wait(this_00);
      SyncEvent__Reset(this_00);
      *(uint32_t *)(self + 0x2c) = 0;
      SyncEvent__Set((SyncEvent *)(self + 0x70));
      SyncEvent__Wait(this_00);
      CloseThread(*(THREADHANDLESTRUCT **)(self + 0x140));
      audFree(*(uint64_t *)(self + 8));
      pFVar1 = *(File **)(self + 0x150);
      if (pFVar1 != (File *)0x0) {
        File__File__005b7a70(pFVar1);
        operator_delete(pFVar1);
      }
    }
  }
  if ((((byte)self[0x30] & 0x10) != 0) &&
      (pFVar1 = *(File **)(self + 0x150), pFVar1 != (File *)0x0)) {
    File__File__005b7a70(pFVar1);
    operator_delete(pFVar1);
  }
  if (*(void **)(self + 0x158) != (void *)0x0) {
    operator_delete(*(void **)(self + 0x158));
  }
  /* try { // try from 005a763a to 005a763e has its CatchHandler @ 005a76d9 */
  SyncEvent__SyncEvent__005b8100(this_00);
  SyncEvent__SyncEvent__005b8100((SyncEvent *)(self + 0x70));
  return;
}

/* ======================================================================
 * AudioFile__CloseFile  (Ghidra `CloseFile` @ 005a76e0)
 * Signature: uint8_t __stdcall CloseFile(void)
 * Class: AudioFile
 * Calls: (none)
 * Called by: (none)
 */
/* AudioFile__CloseFile() */

void AudioFile__CloseFile(void)

{
  return;
}

/* ======================================================================
 * AudioFile__ReadFileToTag  (Ghidra `ReadFileToTag` @ 005a76f0)
 * Signature: uint8_t __thiscall ReadFileToTag(AudioFile * self, uint arg1, uint * arg2)
 * Class: AudioFile
 * Calls: `File__Read`, `File__ReadVariable`, `File__Seek`
 * Called by: (none)
 */
/* AudioFile__ReadFileToTag(unsigned int, unsigned int&) */

uint64_t __thiscall AudioFile__ReadFileToTag(AudioFile *self, uint arg1, uint *arg2)

{
  uint64_t uVar1;
  uint uVar2;
  File *this_00;
  uint local_2c[3];

  uVar1 = 0;
  this_00 = *(File **)(self + 0x150);
  if (*(int *)(this_00 + 4) != 0) {
    uVar2 = 0;
    while (true) {
      local_2c[0] = 0;
      File__Read(this_00, local_2c, 4);
      if (local_2c[0] == arg1)
        break;
      uVar2 = uVar2 + 2;
      File__Seek(*(File **)(self + 0x150), uVar2);
      this_00 = *(File **)(self + 0x150);
      if (*(uint *)(this_00 + 4) <= uVar2) {
        return 0;
      }
    }
    File__ReadVariable(*(File **)(self + 0x150), arg2, 4);
    uVar1 = 1;
  }
  return uVar1;
}

/* ======================================================================
 * AudioFile__GetWaveFormat  (Ghidra `GetWaveFormat` @ 005a7790)
 * Signature: uint8_t __thiscall GetWaveFormat(AudioFile * self, TWAVEFORMATEX * arg1)
 * Class: AudioFile
 * Calls: (none)
 * Called by: `audCreateCue`
 */
/* AudioFile__GetWaveFormat(TWAVEFORMATEX*) */

uint64_t __thiscall AudioFile__GetWaveFormat(AudioFile *self, TWAVEFORMATEX *arg1)

{
  *(uint64_t *)arg1 = *(uint64_t *)(self + 0x14);
  *(uint64_t *)(arg1 + 8) = *(uint64_t *)(self + 0x1c);
  *(uint16_t *)(arg1 + 0x10) = *(uint16_t *)(self + 0x24);
  return 1;
}

/* ======================================================================
 * AudioFile__CopyWavData  (Ghidra `CopyWavData` @ 005a77b0)
 * Signature: uint8_t __thiscall CopyWavData(AudioFile * self, uchar * * arg1, uint * arg2)
 * Class: AudioFile
 * Calls: `audAlloc`, `memcpy`
 * Called by: `audCreateCue`
 */
/* AudioFile__CopyWavData(unsigned char**, unsigned int&) */

void __thiscall AudioFile__CopyWavData(AudioFile *self, uchar **arg1, uint *arg2)

{
  uchar *__dest;
  uint uVar1;

  __dest = (uchar *)audAlloc(*(uint32_t *)(self + 0x10));
  *arg1 = __dest;
  uVar1 = *(uint *)(self + 0x10);
  if (__dest != *(uchar **)(self + 8)) {
    memcpy(__dest, *(uchar **)(self + 8), (ulong)uVar1);
    uVar1 = *(uint *)(self + 0x10);
  }
  *arg2 = uVar1;
  return;
}

/* ======================================================================
 * AudioFile__GetStreamingData  (Ghidra `GetStreamingData` @ 005a7810)
 * Signature: uint8_t __thiscall GetStreamingData(AudioFile * self, AudioStreamData * arg1)
 * Class: AudioFile
 * Calls: `SyncEvent__Reset`, `SyncEvent__Set`, `SyncEvent__Wait`
 * Called by: `audPlayCue`, `audUpdateDevice`
 */
/* AudioFile__GetStreamingData(AudioStreamData&) */

void __thiscall AudioFile__GetStreamingData(AudioFile *self, AudioStreamData *arg1)

{
  int iVar1;

  SyncEvent__Wait((SyncEvent *)(self + 0xd8));
  SyncEvent__Reset((SyncEvent *)(self + 0xd8));
  iVar1 = *(int *)(self + 0x3c);
  *(uint64_t *)arg1 = *(uint64_t *)(self + ((long)iVar1 + 4) * 0x10);
  *(uint32_t *)(arg1 + 8) = *(uint32_t *)(self + ((long)iVar1 + 4) * 0x10 + 8);
  iVar1 = *(int *)(self + 0x3c) + 1;
  if (iVar1 < 3) {
    if (iVar1 < 0) {
      iVar1 = 2;
    }
  } else {
    iVar1 = 0;
  }
  *(int *)(self + 0x3c) = iVar1;
  SyncEvent__Set((SyncEvent *)(self + 0x70));
  return;
}

/* ======================================================================
 * AudioFile__ResetStream  (Ghidra `ResetStream` @ 005a78a0)
 * Signature: uint8_t __thiscall ResetStream(AudioFile * self)
 * Class: AudioFile
 * Calls: `File__Read`, `File__Seek`, `SyncEvent__Wait`
 * Called by: `audPlayCue`
 */
/* AudioFile__ResetStream() */

void __thiscall AudioFile__ResetStream(AudioFile *self)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;

  SyncEvent__Wait((SyncEvent *)(self + 0xd8));
  *(uint32_t *)(self + 0x38) = 0;
  *(uint32_t *)(self + 0x3c) = 0;
  File__Seek(*(File **)(self + 0x150), *(int *)(self + 0x34));
  uVar3 = File__Read(*(File **)(self + 0x150), *(void **)(self + 8), 0x4b000);
  lVar1 = *(long *)(self + 8);
  uVar4 = 0x19000;
  if (uVar3 < 0x19001) {
    uVar4 = uVar3;
  }
  *(long *)(self + 0x40) = lVar1;
  *(uint *)(self + 0x48) = uVar4;
  *(long *)(self + 0x50) = lVar1 + 0x19000;
  uVar2 = uVar3 - 0x19000;
  if (0x19000 < uVar3 - 0x19000) {
    uVar2 = 0x19000;
  }
  uVar3 = uVar3 - 0x32000;
  *(uint *)(self + 0x58) = uVar2;
  *(long *)(self + 0x60) = lVar1 + 0x32000;
  if (0x19000 < uVar3) {
    uVar3 = 0x19000;
  }
  *(uint *)(self + 0x38) = *(int *)(self + 0x38) + uVar4;
  *(uint *)(self + 0x68) = uVar3;
  return;
}

/* ======================================================================
 * AudioFile__ManuallyFillStreamBuffer  (Ghidra `ManuallyFillStreamBuffer` @ 005a7940)
 * Signature: uint8_t __thiscall ManuallyFillStreamBuffer(AudioFile * self)
 * Class: AudioFile
 * Calls: `File__Read`, `File__Seek`
 * Called by: (none)
 */
/* AudioFile__ManuallyFillStreamBuffer() */

void __thiscall AudioFile__ManuallyFillStreamBuffer(AudioFile *self)

{
  int iVar1;
  uint uVar2;
  uint uVar3;

  File__Seek(*(File **)(self + 0x150), *(int *)(self + 0x38) + *(int *)(self + 0x34));
  uVar3 = *(int *)(self + 0x10) - *(int *)(self + 0x38);
  if (0x19000 < uVar3) {
    uVar3 = 0x19000;
  }
  uVar2 = File__Read(*(File **)(self + 0x150),
                     *(void **)(self + ((long)*(int *)(self + 0x3c) + 4) * 0x10), uVar3);
  uVar3 = 0x19000;
  if (uVar2 < 0x19001) {
    uVar3 = uVar2;
  }
  *(uint *)(self + ((long)*(int *)(self + 0x3c) + 4) * 0x10 + 8) = uVar3;
  iVar1 = *(int *)(self + 0x38);
  *(uint *)(self + 0x38) = iVar1 + 0x19000U;
  if ((((byte)self[0x30] & 4) != 0) && (*(uint *)(self + 0x10) <= iVar1 + 0x19000U)) {
    *(uint32_t *)(self + 0x38) = 0;
  }
  return;
}
