/* src/game/classes/GSMBChapterData.c — 51 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "GSMBChapterData.h"

/* ======================================================================
 * GSMBChapterData__GSMBChapterData  (Ghidra `GSMBChapterData` @ 004963b0)
 * Signature: uint8_t __thiscall GSMBChapterData(GSMBChapterData * self)
 * Class: GSMBChapterData
 * Calls: `CriticalSection__CriticalSection`, `SyncEvent__Set`
 * Called by: `SMBChapter__SMBChapter__00495700`
 */
/* GSMBChapterData__GSMBChapterData() */

void __thiscall GSMBChapterData__GSMBChapterData(GSMBChapterData *self)

{
  GSMBChapterData *pGVar1;
  
  CriticalSection__CriticalSection((CriticalSection *)self);
  pGVar1 = self + 0xa4;
  *(uint16_t *)(self + 0x2a) = 0;
  *(uint16_t *)(self + 0x28) = 0;
  *(uint16_t *)(self + 0x34) = 1;
  *(uint64_t *)(self + 0x38) = 0;
  *(uint64_t *)(self + 0x40) = 0;
  *(uint32_t *)(self + 0x48) = 0;
  self[0x2c] = (GSMBChapterData)0x4;
  *(uint32_t *)(self + 0x30) = 0;
  *(uint32_t *)(self + 0xa0) = 0;
  do {
    *(uint32_t *)pGVar1 = 0x4cbebc20;
    *(uint32_t *)(pGVar1 + 4) = 0;
    *(uint32_t *)(pGVar1 + 8) = 0;
    pGVar1 = pGVar1 + 0xc;
  } while (pGVar1 != self + 0x1cc4);
  *(uint32_t *)(self + 0x1cc4) = 0;
  *(uint32_t *)(self + 0x1cd0) = 0;
  self[0x1cd4] = (GSMBChapterData)0x0;
  *(uint32_t *)(self + 0x1ce0) = 0;
  *(uint32_t *)(self + 0x1ce4) = 0;
  *(uint32_t *)(self + 0x1ce8) = 0;
  self[0x1cf0] = (GSMBChapterData)0x0;
  self[0x1cf1] = (GSMBChapterData)0x0;
  self[0x1cf2] = (GSMBChapterData)0x0;
  self[0x1cf3] = (GSMBChapterData)0x0;
  *(uint16_t *)(self + 0x1cf4) = 0;
  self[0x1cf6] = (GSMBChapterData)0x0;
  self[0x1cf7] = (GSMBChapterData)0x0;
  *(uint32_t *)(self + 0x1cf8) = 0;
  self[0x1cfc] = (GSMBChapterData)0x0;
  self[0x1cfd] = (GSMBChapterData)0x0;
  self[0x1cfe] = (GSMBChapterData)0x0;
  self[0x1cff] = (GSMBChapterData)0x0;
  *(uint16_t *)(self + 0x1d00) = 0;
  self[0x1d02] = (GSMBChapterData)0x0;
  self[0x1d03] = (GSMBChapterData)0x0;
  *(uint32_t *)(self + 0x1d04) = 0;
  self[0x1d08] = (GSMBChapterData)0x0;
  self[0x1d09] = (GSMBChapterData)0x0;
  self[0x1d0a] = (GSMBChapterData)0x0;
  self[0x1d0b] = (GSMBChapterData)0x0;
  *(uint16_t *)(self + 0x1d0c) = 0;
  self[0x1d0e] = (GSMBChapterData)0x0;
  self[0x1d0f] = (GSMBChapterData)0x0;
  *(uint32_t *)(self + 0x1d10) = 0;
  self[0x1d14] = (GSMBChapterData)0x0;
  self[0x1d15] = (GSMBChapterData)0x0;
  self[0x1d16] = (GSMBChapterData)0x0;
  self[0x1d17] = (GSMBChapterData)0x0;
  *(uint16_t *)(self + 0x1d18) = 0;
  self[0x1d1a] = (GSMBChapterData)0x0;
  self[0x1d1b] = (GSMBChapterData)0x0;
  *(uint32_t *)(self + 0x1d1c) = 0;
  self[0x1d20] = (GSMBChapterData)0x0;
  self[0x1d21] = (GSMBChapterData)0x0;
  self[0x1d22] = (GSMBChapterData)0x0;
  self[0x1d23] = (GSMBChapterData)0x0;
  *(uint16_t *)(self + 0x1d24) = 0;
  self[0x1d26] = (GSMBChapterData)0x0;
  self[0x1d27] = (GSMBChapterData)0x0;
  *(uint32_t *)(self + 0x1d28) = 0;
  self[0x1d2c] = (GSMBChapterData)0x0;
  self[0x1d2d] = (GSMBChapterData)0x0;
  self[0x1d2e] = (GSMBChapterData)0x0;
  self[0x1d2f] = (GSMBChapterData)0x0;
  *(uint16_t *)(self + 0x1d30) = 0;
  self[0x1d32] = (GSMBChapterData)0x0;
  self[0x1d33] = (GSMBChapterData)0x0;
  *(uint32_t *)(self + 0x1d34) = 0;
  self[0x1d38] = (GSMBChapterData)0x0;
  self[0x1d39] = (GSMBChapterData)0x0;
  self[0x1d3a] = (GSMBChapterData)0x0;
  self[0x1d3b] = (GSMBChapterData)0x0;
  *(uint16_t *)(self + 0x1d3c) = 0;
  self[0x1d3e] = (GSMBChapterData)0x0;
  self[0x1d3f] = (GSMBChapterData)0x0;
  *(uint32_t *)(self + 0x1d40) = 0;
  self[0x1d44] = (GSMBChapterData)0x0;
  self[0x1d45] = (GSMBChapterData)0x0;
  self[0x1d46] = (GSMBChapterData)0x0;
  self[0x1d47] = (GSMBChapterData)0x0;
  *(uint16_t *)(self + 0x1d48) = 0;
  self[0x1d4a] = (GSMBChapterData)0x0;
  self[0x1d4b] = (GSMBChapterData)0x0;
  *(uint32_t *)(self + 0x1d4c) = 0;
  self[0x1d50] = (GSMBChapterData)0x0;
  self[0x1d51] = (GSMBChapterData)0x0;
  self[0x1d52] = (GSMBChapterData)0x0;
  self[0x1d53] = (GSMBChapterData)0x0;
  *(uint16_t *)(self + 0x1d54) = 0;
  self[0x1d56] = (GSMBChapterData)0x0;
  self[0x1d57] = (GSMBChapterData)0x0;
  *(uint32_t *)(self + 0x1d58) = 0;
  self[0x1d5c] = (GSMBChapterData)0x0;
  self[0x1d5d] = (GSMBChapterData)0x0;
  self[0x1d5e] = (GSMBChapterData)0x0;
  self[0x1d5f] = (GSMBChapterData)0x0;
  *(uint16_t *)(self + 0x1d60) = 0;
  self[0x1d62] = (GSMBChapterData)0x0;
  self[0x1d63] = (GSMBChapterData)0x0;
  *(uint32_t *)(self + 0x1d64) = 0;
  *(uint32_t *)(self + 0x1d74) = 0;
  *(uint32_t *)(self + 0x1d78) = 0;
  *(uint32_t *)(self + 0x1d6c) = 0x101;
  *(uint32_t *)(self + 0x1d68) = 1;
                    /* try { // try from 004966f5 to 004966f9 has its CatchHandler @ 00496730 */
  SyncEvent__Set((SyncEvent *)SMBChapterSaveEvent);
  SMBChapterData = self;
  *(uint32_t *)(self + 0x1cd8) = 0xffffffff;
  *(uint32_t *)(self + 0x1cdc) = 0xffffffff;
  *(uint32_t *)(self + 0x1f10) = 0;
  bAHSteamAllowed = 1;
  return;
}

/* ======================================================================
 * GSMBChapterData__GSMBChapterData__004967a0  (Ghidra `~GSMBChapterData` @ 004967a0)
 * Signature: uint8_t __thiscall ~GSMBChapterData(GSMBChapterData * self)
 * Class: GSMBChapterData
 * Calls: `CriticalSection__CriticalSection__005b71d0`, `free`
 * Called by: `SMBChapter__SMBChapter`
 */
/* GSMBChapterData__GSMBChapterData__004967a0() */

void __thiscall GSMBChapterData__GSMBChapterData__004967a0(GSMBChapterData *self)

{
  if (*(int *)(self + 0x48) != -0x5eef3582) {
    CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
    return;
  }
  *(uint32_t *)(self + 0x48) = 0;
  free(*(void **)(*(long *)(self + 0x38) + -8));
  if (*(int *)(self + 0x30) == 1) {
    free(*(void **)(*(long *)(self + 0x40) + -8));
  }
  *(uint32_t *)(self + 0x48) = 0;
  *(uint16_t *)(self + 0x2a) = 0;
  *(uint16_t *)(self + 0x28) = 0;
  *(uint64_t *)(self + 0x38) = 0;
  *(uint64_t *)(self + 0x40) = 0;
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
  return;
}

/* ======================================================================
 * GSMBChapterData__SaveData  (Ghidra `SaveData` @ 00496820)
 * Signature: uint8_t __thiscall SaveData(GSMBChapterData * self, int arg1)
 * Class: GSMBChapterData
 * Calls: `CloseThread`, `CreateWorkerThread`, `GSMBCutSceneManager__ShowSavingMessage`, `SMBChapterDataSave`, `SyncEvent__Reset`, `SyncEvent__Wait`, `System_IsTrialMode`, `malloc`
 * Called by: `SMBChapter__PlayWarpOutro`, `SMBFactoryBossOutroFinished`, `SMBFinalBossPhaseTwoFinished`, `SMBForestBossOutroFinished`, `SMBHellBossOutroFinished`, `SMBHospitalBossOutroFinished`, `SMBProfileResave`, `SMBRaptureBossOutroFinished`, `SMBReselectedDrive`, `SaveData`
 */
/* GSMBChapterData__SaveData(int) */

void __thiscall GSMBChapterData__SaveData(GSMBChapterData *self,int arg1)

{
  uint32_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  int iVar4;
  uint32_t *puVar5;
  long lVar6;
  GSMBChapterData *pGVar7;
  GSMBChapterData *pGVar8;
  byte bVar9;
  code *local_38;
  uint32_t *local_30;
  uint32_t local_28;
  
  bVar9 = 0;
  iVar4 = System_IsTrialMode();
  if (iVar4 == 0) {
    puVar5 = malloc(0x1ca8);
    uVar1 = *(uint32_t *)(self + 0x1d68);
    puVar5[3] = 600;
    *puVar5 = uVar1;
    puVar5[1] = *(uint32_t *)(self + 0x1d6c);
    puVar5[2] = *(uint32_t *)(self + 0x1cd0);
    if (self + 0x1cf0 != (GSMBChapterData *)(puVar5 + 4)) {
      uVar2 = *(uint64_t *)(self + 0x1d60);
      *(uint64_t *)(puVar5 + 4) = *(uint64_t *)(self + 0x1cf0);
      uVar3 = *(uint64_t *)(self + 0x1cf8);
      *(uint64_t *)(puVar5 + 0x20) = uVar2;
      *(uint64_t *)(puVar5 + 6) = uVar3;
      *(uint64_t *)(puVar5 + 8) = *(uint64_t *)(self + 0x1d00);
      *(uint64_t *)(puVar5 + 10) = *(uint64_t *)(self + 0x1d08);
      *(uint64_t *)(puVar5 + 0xc) = *(uint64_t *)(self + 0x1d10);
      *(uint64_t *)(puVar5 + 0xe) = *(uint64_t *)(self + 0x1d18);
      *(uint64_t *)(puVar5 + 0x10) = *(uint64_t *)(self + 0x1d20);
      *(uint64_t *)(puVar5 + 0x12) = *(uint64_t *)(self + 0x1d28);
      *(uint64_t *)(puVar5 + 0x14) = *(uint64_t *)(self + 0x1d30);
      *(uint64_t *)(puVar5 + 0x16) = *(uint64_t *)(self + 0x1d38);
      *(uint64_t *)(puVar5 + 0x18) = *(uint64_t *)(self + 0x1d40);
      *(uint64_t *)(puVar5 + 0x1a) = *(uint64_t *)(self + 0x1d48);
      *(uint64_t *)(puVar5 + 0x1c) = *(uint64_t *)(self + 0x1d50);
      *(uint64_t *)(puVar5 + 0x1e) = *(uint64_t *)(self + 0x1d58);
    }
    if (self + 0xa4 != (GSMBChapterData *)(puVar5 + 0x22)) {
      pGVar7 = self + 0xa4;
      pGVar8 = (GSMBChapterData *)(puVar5 + 0x22);
      for (lVar6 = 900; lVar6 != 0; lVar6 = lVar6 + -1) {
        *(uint64_t *)pGVar8 = *(uint64_t *)pGVar7;
        pGVar7 = pGVar7 + (ulong)bVar9 * -0x10 + 8;
        pGVar8 = pGVar8 + (ulong)bVar9 * -0x10 + 8;
      }
    }
    if (arg1 == 1) {
      SyncEvent__Wait((SyncEvent *)SMBChapterSaveEvent);
      SyncEvent__Reset((SyncEvent *)SMBChapterSaveEvent);
      if (hSMBChapterSaveHandle != (THREADHANDLESTRUCT *)0x0) {
        CloseThread(hSMBChapterSaveHandle);
      }
      local_28 = 2;
      local_38 = SMBChapterDataSave;
      local_30 = puVar5;
      hSMBChapterSaveHandle = (THREADHANDLESTRUCT *)CreateWorkerThread((tagThreadCreate *)&local_38)
      ;
      if (hSMBChapterSaveHandle == (THREADHANDLESTRUCT *)0x0) {
        SMBChapterDataSave(puVar5);
      }
      GSMBCutSceneManager__ShowSavingMessage(SMBCutSceneManager);
    }
    else {
      SMBChapterDataSave(puVar5);
    }
  }
  return;
}

/* ======================================================================
 * GSMBChapterData__MarkAllLevelsDefeated  (Ghidra `MarkAllLevelsDefeated` @ 00496a10)
 * Signature: uint8_t __thiscall MarkAllLevelsDefeated(GSMBChapterData * self)
 * Class: GSMBChapterData
 * Calls: (none)
 * Called by: (none)
 */
/* GSMBChapterData__MarkAllLevelsDefeated() */

void __thiscall GSMBChapterData__MarkAllLevelsDefeated(GSMBChapterData *self)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  lVar2 = 0;
  do {
    *(uint32_t *)(self + lVar2 + 0xa4) = 0x40000000;
    *(uint32_t *)(self + lVar2 + 0xa8) = 10;
    lVar2 = lVar2 + 0xc;
  } while (lVar2 != 0x1c20);
  iVar3 = 1;
  iVar1 = 0;
  do {
    if (iVar1 == 6) {
      self[0x1d38] = (GSMBChapterData)0x5;
      self[0x1d39] = (GSMBChapterData)0x5;
      *(ushort *)(self + 0x1d3c) = *(ushort *)(self + 0x1d3c) | 1;
    }
    else {
      self[(long)iVar1 * 0xc + 0x1cf0] = (GSMBChapterData)0x14;
      self[(long)iVar1 * 0xc + 0x1cf1] = (GSMBChapterData)0x14;
      if ((iVar1 != 7) && (iVar1 != 9)) {
        *(ushort *)(self + (long)iVar1 * 0xc + 0x1cf4) =
             *(ushort *)(self + (long)iVar1 * 0xc + 0x1cf4) | 1;
      }
      if (iVar3 == 10) {
        return;
      }
    }
    iVar1 = iVar1 + 1;
    iVar3 = iVar3 + 1;
  } while( true );
}

/* ======================================================================
 * GSMBChapterData__IsBossUnlocked  (Ghidra `IsBossUnlocked` @ 00496ab0)
 * Signature: uint8_t __thiscall IsBossUnlocked(GSMBChapterData * self)
 * Class: GSMBChapterData
 * Calls: (none)
 * Called by: `GSMBMenu__SetBossPadState`
 */
/* GSMBChapterData__IsBossUnlocked() */

bool __thiscall GSMBChapterData__IsBossUnlocked(GSMBChapterData *self)

{
  int iVar1;
  
  iVar1 = *(int *)(self + 0x1ce0);
  if ((iVar1 != 7) && (iVar1 != 9)) {
    if (iVar1 != 6) {
      return 0x10 < (byte)self[(long)iVar1 * 0xc + 0x1cf0];
    }
    return 4 < (byte)self[0x1d38];
  }
  return false;
}

/* ======================================================================
 * GSMBChapterData__IsAltBossUnlocked  (Ghidra `IsAltBossUnlocked` @ 00496b00)
 * Signature: uint8_t __thiscall IsAltBossUnlocked(GSMBChapterData * self)
 * Class: GSMBChapterData
 * Calls: (none)
 * Called by: `GSMBMenu__SetBossPadState`
 */
/* GSMBChapterData__IsAltBossUnlocked() */

bool __thiscall GSMBChapterData__IsAltBossUnlocked(GSMBChapterData *self)

{
  if ((*(int *)(self + 0x1ce0) == 6) &&
     (0x54 < (uint)(byte)self[0x1cfd] + (uint)(byte)self[0x1cf1] + (uint)(byte)self[0x1d09] +
             (uint)(byte)self[0x1d15] + (uint)(byte)self[0x1d21] + (uint)(byte)self[0x1d2d] +
             (uint)(byte)self[0x1d39] + (uint)(byte)self[0x1d45] + (uint)(byte)self[0x1d51])) {
    return ((byte)self[0x1d3c] & 4) != 0;
  }
  return false;
}

/* ======================================================================
 * GSMBChapterData__IsBossDefeated  (Ghidra `IsBossDefeated` @ 00496b80)
 * Signature: uint8_t __thiscall IsBossDefeated(GSMBChapterData * self)
 * Class: GSMBChapterData
 * Calls: (none)
 * Called by: `GSMBMenu__SetBossPadState`
 */
/* GSMBChapterData__IsBossDefeated() */

bool __thiscall GSMBChapterData__IsBossDefeated(GSMBChapterData *self)

{
  return ((byte)self[(long)*(int *)(self + 0x1ce0) * 0xc + 0x1cf4] & 4) != 0;
}

/* ======================================================================
 * GSMBChapterData__IsAltBossDefeated  (Ghidra `IsAltBossDefeated` @ 00496ba0)
 * Signature: uint8_t __thiscall IsAltBossDefeated(GSMBChapterData * self)
 * Class: GSMBChapterData
 * Calls: (none)
 * Called by: `GSMBMenu__SetBossPadState`
 */
/* GSMBChapterData__IsAltBossDefeated() */

bool __thiscall GSMBChapterData__IsAltBossDefeated(GSMBChapterData *self)

{
  return ((byte)self[(long)*(int *)(self + 0x1ce0) * 0xc + 0x1cf4] & 8) != 0;
}

/* ======================================================================
 * GSMBChapterData__GetLevelDataByID  (Ghidra `GetLevelDataByID` @ 00496bc0)
 * Signature: uint8_t __thiscall GetLevelDataByID(GSMBChapterData * self, int arg1, SMBLevelData * * arg2)
 * Class: GSMBChapterData
 * Calls: (none)
 * Called by: (none)
 */
/* GSMBChapterData__GetLevelDataByID(int, SMBLevelData**) */

uint64_t __thiscall
GSMBChapterData__GetLevelDataByID(GSMBChapterData *self,int arg1,SMBLevelData **arg2)

{
  *arg2 = (SMBLevelData *)(self + (long)arg1 * 0xc + 0xa4);
  return 0;
}

/* ======================================================================
 * GSMBChapterData__FillLevelDataArrays  (Ghidra `FillLevelDataArrays` @ 00496be0)
 * Signature: uint8_t __thiscall FillLevelDataArrays(GSMBChapterData * self)
 * Class: GSMBChapterData
 * Calls: (none)
 * Called by: (none)
 */
/* GSMBChapterData__FillLevelDataArrays() */

void __thiscall GSMBChapterData__FillLevelDataArrays(GSMBChapterData *self)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  int iVar8;
  GSMBChapterData *pGVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  lVar1 = SuperMeatBoy;
  uVar5 = 0;
  if (*(short *)(SuperMeatBoy + 0x1c8) != 0) {
    do {
      uVar7 = uVar5 & 0xffff;
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulong)uVar4;
      *(GSMBChapterData **)(*(long *)(self + 0x38) + uVar7 * 8) =
           self + (long)*(int *)(uVar7 * 0x50 + *(long *)(lVar1 + 0x1d8) + 0x48) * 0xc + 0xa4;
    } while ((int)uVar4 < (int)(uint)*(ushort *)(lVar1 + 0x1c8));
  }
  if (*(short *)(lVar1 + 0x218) != 0) {
    uVar7 = 0;
    do {
      uVar2 = uVar7 & 0xffff;
      uVar3 = uVar5 & 0xffff;
      uVar4 = (int)uVar7 + 1;
      uVar7 = (ulong)uVar4;
      uVar5 = (ulong)((int)uVar5 + 1);
      *(GSMBChapterData **)(*(long *)(self + 0x38) + uVar3 * 8) =
           self + (long)*(int *)(uVar2 * 0x50 + *(long *)(lVar1 + 0x228) + 0x48) * 0xc + 0xa4;
    } while ((int)uVar4 < (int)(uint)*(ushort *)(lVar1 + 0x218));
  }
  if (*(short *)(lVar1 + 0x268) != 0) {
    lVar12 = 0;
    iVar8 = 0;
    pGVar9 = self;
    do {
      lVar11 = *(long *)(self + 0x38);
      uVar7 = uVar5 & 0xffff;
      *(ulong *)(pGVar9 + 0x60) = lVar11 + uVar7 * 8;
      lVar10 = lVar12 + *(long *)(lVar1 + 0x278);
      if (*(short *)(lVar10 + 0x90) != 0) {
        uVar2 = 0;
        while( true ) {
          uVar3 = uVar2 & 0xffff;
          uVar6 = (int)uVar2 + 1;
          uVar2 = (ulong)uVar6;
          uVar4 = (int)uVar5 + 1;
          uVar5 = (ulong)uVar4;
          *(GSMBChapterData **)(lVar11 + uVar7 * 8) =
               self + (long)*(int *)(uVar3 * 0x50 + *(long *)(lVar10 + 0xa0) + 0x48) * 0xc + 0xa4;
          lVar10 = lVar12 + *(long *)(lVar1 + 0x278);
          if ((int)(uint)*(ushort *)(lVar10 + 0x90) <= (int)uVar6) break;
          lVar11 = *(long *)(self + 0x38);
          uVar7 = (ulong)(ushort)uVar4;
        }
      }
      iVar8 = iVar8 + 1;
      pGVar9 = pGVar9 + 8;
      lVar12 = lVar12 + 0xb8;
    } while (iVar8 < (int)(uint)*(ushort *)(lVar1 + 0x268));
  }
  return;
}

/* ======================================================================
 * GSMBChapterData__ShowMeatNinja  (Ghidra `ShowMeatNinja` @ 00496d50)
 * Signature: uint8_t __thiscall ShowMeatNinja(GSMBChapterData * self)
 * Class: GSMBChapterData
 * Calls: `GMeatHUD__AddUnlockScreen`, `GetRandomINT`
 * Called by: (none)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GSMBChapterData__ShowMeatNinja() */

void __thiscall GSMBChapterData__ShowMeatNinja(GSMBChapterData *self)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  bool bVar5;
  float fVar6;
  
  bVar5 = (*(ushort *)(self + 0x1d00) & 0x20) != 0;
  uVar2 = (uint)bVar5;
  if ((*(ushort *)(self + 0x1d0c) & 0x20) != 0) {
    uVar2 = bVar5 + 1;
  }
  uVar1 = *(ushort *)(self + 0x1d3c);
  fVar6 = (float)(int)((((((((((((((((uint)(byte)self[0x1cfc] + (uint)(byte)self[0x1cfd] +
                                     (uint)(byte)self[0x1cff] + (uint)(byte)self[0x1cfe]) -
                                   (uint)((*(ushort *)(self + 0x1d00) & 4) == 0)) +
                                   (uint)(byte)self[0x1d08] + (uint)(byte)self[0x1d09] +
                                   (uint)(byte)self[0x1d0b] + (uint)(byte)self[0x1d0a]) -
                                 (uint)((*(ushort *)(self + 0x1d0c) & 4) == 0)) +
                                 (uint)(byte)self[0x1d14] + (uint)(byte)self[0x1d15] +
                                 (uint)(byte)self[0x1d17] + (uint)(byte)self[0x1d16]) -
                               (uint)((*(ushort *)(self + 0x1d18) & 4) == 0)) +
                               (uint)(byte)self[0x1d20] + (uint)(byte)self[0x1d21] +
                               (uint)(byte)self[0x1d23] + (uint)(byte)self[0x1d22]) -
                             (uint)((*(ushort *)(self + 0x1d24) & 4) == 0)) +
                             (uint)(byte)self[0x1d2c] + (uint)(byte)self[0x1d2d] +
                             (uint)(byte)self[0x1d2f] + (uint)(byte)self[0x1d2e]) -
                           (uint)((*(ushort *)(self + 0x1d30) & 4) == 0)) + (uint)(byte)self[0x1d38]
                           + (uint)(byte)self[0x1d39] + (uint)(byte)self[0x1d3b] +
                          (uint)(byte)self[0x1d3a]) - (uint)((uVar1 & 4) == 0)) -
                        (uint)((uVar1 & 8) == 0)) + (uint)(byte)self[0x1d44] +
                        (uint)(byte)self[0x1d45] + (uint)(byte)self[0x1d47] +
                        (uint)(byte)self[0x1d46] + 8) -
                      (uint)((*(ushort *)(self + 0x1d48) & 4) == 0)) * _DAT_005c2068 /* R:0.23980815708637238f */;
  lVar4 = (long)fVar6;
  if ((float)lVar4 < fVar6) {
    lVar4 = lVar4 + 1;
  }
  if (0x19 < (int)(((((((uVar2 - ((*(ushort *)(self + 0x1d18) & 0x20) == 0)) -
                       (uint)((*(ushort *)(self + 0x1d24) & 0x20) == 0)) -
                      (uint)((*(ushort *)(self + 0x1d30) & 0x20) == 0)) -
                     (uint)((uVar1 & 0x20) == 0)) + 5) -
                   (uint)((*(ushort *)(self + 0x1d48) & 0x20) == 0)) + (int)lVar4)) {
    iVar3 = GetRandomINT(0,2000);
    if (iVar3 == 1000) {
      GMeatHUD__AddUnlockScreen(SMBHUD,0x12);
      return;
    }
  }
  return;
}

/* ======================================================================
 * GSMBChapterData__SetCurrentLevel  (Ghidra `SetCurrentLevel` @ 00496f70)
 * Signature: uint8_t __thiscall SetCurrentLevel(GSMBChapterData * self, int arg1)
 * Class: GSMBChapterData
 * Calls: (none)
 * Called by: `SMBChapterLoadWarpZone`, `SMBChapter__LoadCurrentLevel`, `SMBChapter__LoadNextLevel`, `SMBChapter__LoadWarpZone`, `SMBChapter__Reset`, `TransitionToNextLevel`
 */
/* GSMBChapterData__SetCurrentLevel(int) */

void __thiscall GSMBChapterData__SetCurrentLevel(GSMBChapterData *self,int arg1)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(short *)(self + 0x28) != 0) {
    iVar1 = arg1;
  }
  *(int *)(self + 0x1ce8) = iVar1;
  return;
}

/* ======================================================================
 * GSMBChapterData__GetCurrentLevelData  (Ghidra `GetCurrentLevelData` @ 00496f90)
 * Signature: uint8_t __thiscall GetCurrentLevelData(GSMBChapterData * self, int arg1, tagChapterLevelType arg2)
 * Class: GSMBChapterData
 * Calls: (none)
 * Called by: `GMeatHUD__Render`, `GSMBMenu__EnterSelectedLevel`, `GSMBMenu__Render`, `GSMBMenu__SetLevelDisplay`, `RenderSetPiece`, `SMBChapter__IsNextLevelUnlocked`, `SMBLevelFinished`, `SMBPalette__ObstacleCollision`, `WriteLevelCompleteLeaderboard`
 */
/* GSMBChapterData__GetCurrentLevelData(int, tagChapterLevelType) */

long __thiscall GSMBChapterData__GetCurrentLevelData(GSMBChapterData *self,int arg1,int arg3)

{
  int iVar1;
  
  if (arg1 == -1) {
    arg1 = *(int *)(self + 0x1ce8);
  }
  if (arg3 == 0xb) {
    arg3 = *(int *)(self + 0x1ce4);
  }
  if ((*(int *)(self + 0x1ce0) == 9) && (LoadedPortalChapter != 0)) {
    return *(long *)(LoadedPortalChapter + (long)arg1 * 8) + 0x18;
  }
  switch(arg3) {
  default:
    return *(long *)(*(long *)(self + 0x50) + (long)arg1 * 8);
  case 1:
    return *(long *)(*(long *)(self + 0x58) + (long)arg1 * 8);
  case 2:
    iVar1 = 2;
    if (arg1 < 3) {
      iVar1 = arg1;
    }
    return *(long *)(*(long *)(self + 0x60) + (long)iVar1 * 8);
  case 3:
    iVar1 = 2;
    if (arg1 < 3) {
      iVar1 = arg1;
    }
    break;
  case 4:
    iVar1 = 2;
    if (arg1 < 3) {
      iVar1 = arg1;
    }
    return *(long *)(*(long *)(self + 0x70) + (long)iVar1 * 8);
  case 5:
    iVar1 = 2;
    if (arg1 < 3) {
      iVar1 = arg1;
    }
    return *(long *)(*(long *)(self + 0x78) + (long)iVar1 * 8);
  case 6:
    iVar1 = 0;
    if (arg1 < 1) {
      iVar1 = arg1;
    }
    return *(long *)(*(long *)(self + 0x80) + (long)iVar1 * 8);
  case 7:
    iVar1 = 2;
    if (arg1 < 3) {
      iVar1 = arg1;
    }
    return *(long *)(*(long *)(self + 0x88) + (long)iVar1 * 8);
  case 8:
    iVar1 = 2;
    if (arg1 < 3) {
      iVar1 = arg1;
    }
    return *(long *)(*(long *)(self + 0x90) + (long)iVar1 * 8);
  case 9:
    iVar1 = 2;
    if (arg1 < 3) {
      iVar1 = arg1;
    }
    return *(long *)(*(long *)(self + 0x98) + (long)iVar1 * 8);
  }
  return *(long *)(*(long *)(self + 0x68) + (long)iVar1 * 8);
}

/* ======================================================================
 * GSMBChapterData__GetCurrLevelDataArray  (Ghidra `GetCurrLevelDataArray` @ 00497100)
 * Signature: uint8_t __thiscall GetCurrLevelDataArray(GSMBChapterData * self)
 * Class: GSMBChapterData
 * Calls: (none)
 * Called by: (none)
 */
/* GSMBChapterData__GetCurrLevelDataArray() */

uint64_t __thiscall GSMBChapterData__GetCurrLevelDataArray(GSMBChapterData *self)

{
  switch(*(uint32_t *)(self + 0x1ce4)) {
  default:
    return *(uint64_t *)(self + 0x50);
  case 1:
    return *(uint64_t *)(self + 0x58);
  case 2:
    return *(uint64_t *)(self + 0x60);
  case 3:
    return *(uint64_t *)(self + 0x68);
  case 4:
    return *(uint64_t *)(self + 0x70);
  case 5:
    return *(uint64_t *)(self + 0x78);
  case 6:
    return *(uint64_t *)(self + 0x80);
  case 7:
    return *(uint64_t *)(self + 0x88);
  case 8:
    return *(uint64_t *)(self + 0x90);
  case 9:
    return *(uint64_t *)(self + 0x98);
  }
}

/* ======================================================================
 * GSMBChapterData__SetLevelType  (Ghidra `SetLevelType` @ 00497180)
 * Signature: uint8_t __thiscall SetLevelType(GSMBChapterData * self, tagChapterLevelType arg1)
 * Class: GSMBChapterData
 * Calls: (none)
 * Called by: `GSMBMenu__ShowChapterMap`, `SMBChapterLoadWarpZone`, `SMBChapterPlayWarpIntro`, `SMBChapter__FinishedWarpOutro`, `SMBChapter__LoadWarpZone`, `SMBChapter__PlayWarpIntro`, `SMBChapter__SetLevelType`, `SMBGameOverScreenFinished`, `SMBWarpOutroFinished`
 */
/* GSMBChapterData__SetLevelType(tagChapterLevelType) */

void __thiscall GSMBChapterData__SetLevelType(GSMBChapterData *self,uint32_t arg2)

{
  *(uint32_t *)(self + 0x1ce4) = arg2;
  return;
}

/* ======================================================================
 * GSMBChapterData__GetTotalNumBandagesCollected  (Ghidra `GetTotalNumBandagesCollected` @ 00497190)
 * Signature: uint8_t __thiscall GetTotalNumBandagesCollected(GSMBChapterData * self)
 * Class: GSMBChapterData
 * Calls: (none)
 * Called by: `GSMBMenu__ShowCharMenu`, `SMBCharSwitch__Activate`, `SMBMenuTransitionInCharMenu`
 */
/* GSMBChapterData__GetTotalNumBandagesCollected() */

int __thiscall GSMBChapterData__GetTotalNumBandagesCollected(GSMBChapterData *self)

{
  return (uint)(byte)self[0x1cfe] + (uint)(byte)self[0x1cf2] + (uint)(byte)self[0x1d0a] +
         (uint)(byte)self[0x1d16] + (uint)(byte)self[0x1d22] + (uint)(byte)self[0x1d2e] +
         (uint)(byte)self[0x1d3a] + (uint)(byte)self[0x1d46] + (uint)(byte)self[0x1d52] +
         (uint)(byte)self[0x1d5e];
}

/* ======================================================================
 * GSMBChapterData__GetNumCollectedBandages  (Ghidra `GetNumCollectedBandages` @ 004971f0)
 * Signature: uint8_t __thiscall GetNumCollectedBandages(GSMBChapterData * self)
 * Class: GSMBChapterData
 * Calls: (none)
 * Called by: `GSMBMenu__Render`
 */
/* GSMBChapterData__GetNumCollectedBandages() */

GSMBChapterData __thiscall GSMBChapterData__GetNumCollectedBandages(GSMBChapterData *self)

{
  return self[(long)*(int *)(self + 0x1ce0) * 0xc + 0x1cf2];
}

/* ======================================================================
 * GSMBChapterData__GetChapterStats  (Ghidra `GetChapterStats` @ 00497210)
 * Signature: uint8_t __thiscall GetChapterStats(GSMBChapterData * self, tagChapterName arg1)
 * Class: GSMBChapterData
 * Calls: (none)
 * Called by: `GSMBMenu__LoadChapterEnd`, `GSMBMenu__SetWorldMenuStats`
 */
/* GSMBChapterData__GetChapterStats(tagChapterName) */

GSMBChapterData * __thiscall GSMBChapterData__GetChapterStats(GSMBChapterData *self,int arg2)

{
  return self + (long)arg2 * 0xc + 0x1cf0;
}

/* ======================================================================
 * GSMBChapterData__GetNumBandagesInChapter  (Ghidra `GetNumBandagesInChapter` @ 00497220)
 * Signature: uint8_t __thiscall GetNumBandagesInChapter(GSMBChapterData * self, tagChapterName arg1)
 * Class: GSMBChapterData
 * Calls: (none)
 * Called by: `GSMBMenu__LoadChapterEnd`, `GSMBMenu__Render`
 */
/* GSMBChapterData__GetNumBandagesInChapter(tagChapterName) */

uint64_t __thiscall GSMBChapterData__GetNumBandagesInChapter(GSMBChapterData *self,int arg2)

{
  uint64_t uVar1;
  
  if (arg2 == 0) {
    arg2 = *(int *)(self + 0x1ce0);
  }
  if (((arg2 != 9) && (arg2 != 6)) && (arg2 != 7)) {
    uVar1 = 0xd;
    if (arg2 != 8) {
      uVar1 = 0x14;
    }
    return uVar1;
  }
  return 0;
}

/* ======================================================================
 * GSMBChapterData__GetNumWarpsInChapter  (Ghidra `GetNumWarpsInChapter` @ 00497260)
 * Signature: uint8_t __thiscall GetNumWarpsInChapter(GSMBChapterData * self, tagChapterName arg1)
 * Class: GSMBChapterData
 * Calls: (none)
 * Called by: `GSMBMenu__LoadChapterEnd`
 */
/* GSMBChapterData__GetNumWarpsInChapter(tagChapterName) */

long __thiscall GSMBChapterData__GetNumWarpsInChapter(uint64_t arg1,int arg2)

{
  if ((arg2 != 9) && (arg2 != 6)) {
    return (ulong)(arg2 != 7) << 2;
  }
  return 0;
}

/* ======================================================================
 * GSMBChapterData__GetLevelPercentage  (Ghidra `GetLevelPercentage` @ 00497290)
 * Signature: uint8_t __thiscall GetLevelPercentage(GSMBChapterData * self, tagChapterName arg1)
 * Class: GSMBChapterData
 * Calls: (none)
 * Called by: `GSMBMenu__Render`, `GSMBMenu__SetWorldMenuStats`
 */
/* GSMBChapterData__GetLevelPercentage(tagChapterName) */

float __thiscall GSMBChapterData__GetLevelPercentage(GSMBChapterData *self,int arg2)

{
  float fVar1;
  float fVar2;
  
  if (arg2 == 0) {
    arg2 = *(int *)(self + 0x1ce0);
  }
  fVar2 = DAT_005c2074 /* R:40.0f */;
  if (((arg2 != 7) && (fVar2 = DAT_005c2070 /* R:32.0f */, arg2 != 9)) &&
     (fVar2 = DAT_005c2078 /* R:12.0f */, arg2 != 6)) {
    fVar2 = DAT_005c206c /* R:73.0f */;
  }
  fVar1 = (float)(byte)self[(long)arg2 * 0xc + 0x1cf1] +
          (float)(byte)self[(long)arg2 * 0xc + 0x1cf0] +
          (float)(byte)self[(long)arg2 * 0xc + 0x1cf2] +
          (float)(byte)self[(long)arg2 * 0xc + 0x1cf3];
  if (((byte)self[(long)arg2 * 0xc + 0x1cf4] & 4) != 0) {
    fVar1 = fVar1 + DAT_005be894 /* R:1.0f */;
  }
  if ((arg2 == 6) && (((byte)self[0x1d3c] & 8) != 0)) {
    return ((fVar1 + DAT_005be894 /* R:1.0f */) / fVar2) * DAT_005c1400 /* R:100.0f */;
  }
  return (fVar1 / fVar2) * DAT_005c1400 /* R:100.0f */;
}

/* ======================================================================
 * GSMBChapterData__DetermineGlitchOccurance  (Ghidra `DetermineGlitchOccurance` @ 00497360)
 * Signature: uint8_t __thiscall DetermineGlitchOccurance(GSMBChapterData * self)
 * Class: GSMBChapterData
 * Calls: `GSMBMenu__IsInReplayMode`, `GetRandomINT`, `System_IsTrialMode`
 * Called by: `SMBPalette__ResetObstacles`
 */
/* GSMBChapterData__DetermineGlitchOccurance() */

bool __thiscall GSMBChapterData__DetermineGlitchOccurance(GSMBChapterData *self)

{
  int iVar1;
  bool bVar2;
  float fVar3;
  
  bVar2 = false;
  iVar1 = System_IsTrialMode();
  if (iVar1 != 1) {
    iVar1 = GSMBMenu__IsInReplayMode(SMBMenu);
    if ((iVar1 != 1) && (*(uint *)(self + 0x1ce4) < 2)) {
      iVar1 = *(int *)(self + 0x1ce0);
      bVar2 = false;
      if ((*(ushort *)(self + (long)iVar1 * 0xc + 0x1cf4) & 1) == 0) {
        if ((iVar1 == 7) || (iVar1 == 9)) {
          bVar2 = false;
        }
        else if ((*(ushort *)(self + (long)iVar1 * 0xc + 0x1cf4) & 4) != 0) {
          fVar3 = (float)GetLevelPercentage(self);
          if ((int)fVar3 == 100) {
            iVar1 = GetRandomINT(0,10);
            bVar2 = iVar1 == 5;
          }
          else {
            iVar1 = GetRandomINT(0,2000);
            bVar2 = iVar1 < (int)fVar3;
          }
        }
      }
    }
  }
  return bVar2;
}

/* ======================================================================
 * GSMBChapterData__GetNumLightWorldLevels  (Ghidra `GetNumLightWorldLevels` @ 00497430)
 * Signature: uint8_t __thiscall GetNumLightWorldLevels(GSMBChapterData * self, tagChapterName arg1)
 * Class: GSMBChapterData
 * Calls: (none)
 * Called by: `GSMBMenu__LoadChapterEnd`
 */
/* GSMBChapterData__GetNumLightWorldLevels(tagChapterName) */

uint64_t __thiscall GSMBChapterData__GetNumLightWorldLevels(GSMBChapterData *self,int arg2)

{
  uint64_t uVar1;
  
  if (arg2 == 0) {
    arg2 = *(int *)(self + 0x1ce0);
  }
  uVar1 = 0x14;
  if (((arg2 != 7) && (arg2 != 9)) && (uVar1 = 0x14, arg2 == 6)) {
    uVar1 = 5;
  }
  return uVar1;
}

/* ======================================================================
 * GSMBChapterData__GetNumDarkWorldLevels  (Ghidra `GetNumDarkWorldLevels` @ 00497460)
 * Signature: uint8_t __thiscall GetNumDarkWorldLevels(GSMBChapterData * self, tagChapterName arg1)
 * Class: GSMBChapterData
 * Calls: (none)
 * Called by: `GSMBMenu__LoadChapterEnd`
 */
/* GSMBChapterData__GetNumDarkWorldLevels(tagChapterName) */

uint64_t __thiscall GSMBChapterData__GetNumDarkWorldLevels(GSMBChapterData *self,int arg2)

{
  uint64_t uVar1;
  
  if (arg2 == 0) {
    arg2 = *(int *)(self + 0x1ce0);
  }
  uVar1 = 0x14;
  if (((arg2 != 7) && (arg2 != 9)) && (uVar1 = 0x14, arg2 == 6)) {
    uVar1 = 5;
  }
  return uVar1;
}

/* ======================================================================
 * GSMBChapterData__IsCharacterUnlocked  (Ghidra `IsCharacterUnlocked` @ 00497490)
 * Signature: uint8_t __thiscall IsCharacterUnlocked(GSMBChapterData * self, tagSuperMeatBoyCharactor arg1)
 * Class: GSMBChapterData
 * Calls: (none)
 * Called by: `GSMBMenu__LoadCharacterMenu`, `SMBChapter__PlayWarpOutro`, `SMBCharSwitchMoveLeft`, `SMBCharSwitchMoveSelect`, `SMBCharSwitchMoveUp`, `SMBCharSwitch__Activate`, `SMBCharSwitch__LoadSelectedCharacter`, `SMBCharSwitch__MoveDown`, `SMBCharSwitch__MoveLeft`, `SMBCharSwitch__MoveRight` (+4 more)
 */
/* GSMBChapterData__IsCharacterUnlocked(tagSuperMeatBoyCharactor) */

bool __thiscall GSMBChapterData__IsCharacterUnlocked(GSMBChapterData *self,byte arg2)

{
  return (*(uint *)(self + 0x1d68) & 1 << (arg2 & 0x1f)) != 0;
}

/* ======================================================================
 * GSMBChapterData__IsCharacterUnlockedWithBandages  (Ghidra `IsCharacterUnlockedWithBandages` @ 004974b0)
 * Signature: uint8_t __thiscall IsCharacterUnlockedWithBandages(GSMBChapterData * self, tagSuperMeatBoyCharactor arg1)
 * Class: GSMBChapterData
 * Calls: (none)
 * Called by: `GSMBMenu__LoadCharacterMenu`
 */
/* GSMBChapterData__IsCharacterUnlockedWithBandages(tagSuperMeatBoyCharactor) */

bool __thiscall GSMBChapterData__IsCharacterUnlockedWithBandages(uint64_t arg1,int arg2)

{
  if ((((2 < arg2 - 1U) && (arg2 != 0x13)) && (arg2 != 0x15)) && (arg2 != 0xe)) {
    if ((arg2 != 0xc) && (arg2 != 10)) {
      return arg2 == 0x17;
    }
    return true;
  }
  return true;
}

/* ======================================================================
 * GSMBChapterData__UnlockCharacter  (Ghidra `UnlockCharacter` @ 00497500)
 * Signature: uint8_t __thiscall UnlockCharacter(GSMBChapterData * self, tagSuperMeatBoyCharactor arg1)
 * Class: GSMBChapterData
 * Calls: (none)
 * Called by: `SMBChapter__PlayWarpOutro`
 */
/* GSMBChapterData__UnlockCharacter(tagSuperMeatBoyCharactor) */

void __thiscall GSMBChapterData__UnlockCharacter(GSMBChapterData *self,byte arg2)

{
  *(uint *)(self + 0x1d68) = *(uint *)(self + 0x1d68) | 1 << (arg2 & 0x1f);
  return;
}

/* ======================================================================
 * GSMBChapterData__IsChapterUnlocked  (Ghidra `IsChapterUnlocked` @ 00497510)
 * Signature: uint8_t __thiscall IsChapterUnlocked(GSMBChapterData * self, tagChapterName arg1)
 * Class: GSMBChapterData
 * Calls: (none)
 * Called by: `GSMBMenu__GetNextChapter`, `GSMBMenu__PlayCodeSound`, `GSMBMenu__Render`, `GSMBMenu__SelectCharacter`, `GSMBMenu__TransitionInNextWorldMap`, `SMBMenuTransitionWorldLeftIn`, `SMBMenuTransitionWorldRightIn`, `SetWorldPad`
 */
/* GSMBChapterData__IsChapterUnlocked(tagChapterName) */

bool __thiscall GSMBChapterData__IsChapterUnlocked(GSMBChapterData *self,int arg2)

{
  bool bVar1;
  
  bVar1 = false;
  if (arg2 != 0) {
    bVar1 = (*(uint *)(self + 0x1d6c) & 1 << ((char)arg2 - 1U & 0x1f)) != 0;
  }
  return bVar1;
}

/* ======================================================================
 * GSMBChapterData__UnlockChapter  (Ghidra `UnlockChapter` @ 00497530)
 * Signature: uint8_t __thiscall UnlockChapter(GSMBChapterData * self, tagChapterName arg1)
 * Class: GSMBChapterData
 * Calls: (none)
 * Called by: `GSMBMenu__StartGame`, `SMBFactoryBossOutroFinished`, `SMBFinalBossPhaseTwoFinished`, `SMBForestBossOutroFinished`, `SMBHellBossOutroFinished`, `SMBHospitalBossOutroFinished`, `SMBRaptureBossOutroFinished`
 */
/* GSMBChapterData__UnlockChapter(tagChapterName) */

void __thiscall GSMBChapterData__UnlockChapter(GSMBChapterData *self,char arg2)

{
  *(uint *)(self + 0x1d6c) = *(uint *)(self + 0x1d6c) | 1 << (arg2 - 1U & 0x1f);
  return;
}

/* ======================================================================
 * GSMBChapterData__MarkBossAsDefeated  (Ghidra `MarkBossAsDefeated` @ 00497550)
 * Signature: uint8_t __thiscall MarkBossAsDefeated(GSMBChapterData * self, tagChapterName arg1)
 * Class: GSMBChapterData
 * Calls: `GSMBMenu__ShowBossDefeat`
 * Called by: `SMBFactoryBossOutroFinished`, `SMBFinalBossPhaseTwoFinished`, `SMBForestBossOutroFinished`, `SMBHellBossOutroFinished`, `SMBHospitalBossOutroFinished`, `SMBRaptureBossOutroFinished`
 */
/* GSMBChapterData__MarkBossAsDefeated(tagChapterName) */

void __thiscall GSMBChapterData__MarkBossAsDefeated(GSMBChapterData *self,int arg2)

{
  GSMBMenu__ShowBossDefeat();
  *(ushort *)(self + (long)arg2 * 0xc + 0x1cf4) =
       *(ushort *)(self + (long)arg2 * 0xc + 0x1cf4) | 4;
  return;
}

/* ======================================================================
 * GSMBChapterData__MarkAltBossAsDefeated  (Ghidra `MarkAltBossAsDefeated` @ 00497590)
 * Signature: uint8_t __thiscall MarkAltBossAsDefeated(GSMBChapterData * self, tagChapterName arg1)
 * Class: GSMBChapterData
 * Calls: `GSMBMenu__ShowBossDefeat`
 * Called by: `SMBFinalBossPhaseTwoFinished`
 */
/* GSMBChapterData__MarkAltBossAsDefeated(tagChapterName) */

void __thiscall GSMBChapterData__MarkAltBossAsDefeated(GSMBChapterData *self,int arg2)

{
  GSMBMenu__ShowBossDefeat();
  *(ushort *)(self + (long)arg2 * 0xc + 0x1cf4) =
       *(ushort *)(self + (long)arg2 * 0xc + 0x1cf4) | 8;
  return;
}

/* ======================================================================
 * GSMBChapterData__ResetData  (Ghidra `ResetData` @ 004975d0)
 * Signature: uint8_t __thiscall ResetData(GSMBChapterData * self)
 * Class: GSMBChapterData
 * Calls: `CloseThread`, `SyncEvent__CheckStatus`, `SyncEvent__Wait`
 * Called by: `EnterTitleMenu`, `GSMBMenu__ResetForPurchase`, `GSMBMenu__ResetForSignout`
 */
/* GSMBChapterData__ResetData() */

void __thiscall GSMBChapterData__ResetData(GSMBChapterData *self)

{
  int iVar1;
  long lVar2;
  
  if (hSMBChapterSaveHandle != (THREADHANDLESTRUCT *)0x0) {
    iVar1 = SyncEvent__CheckStatus((SyncEvent *)SMBChapterSaveEvent);
    if (iVar1 == 0) {
      SyncEvent__Wait((SyncEvent *)SMBChapterSaveEvent);
    }
    CloseThread(hSMBChapterSaveHandle);
    hSMBChapterSaveHandle = (THREADHANDLESTRUCT *)0x0;
  }
  lVar2 = 0;
  do {
    *(uint32_t *)(self + lVar2 + 0xa4) = 0x4cbebc20;
    *(uint32_t *)(self + lVar2 + 0xa8) = 0;
    lVar2 = lVar2 + 0xc;
  } while (lVar2 != 0x1c20);
  *(uint32_t *)(self + 0x1ce8) = 0;
  *(uint32_t *)(self + 0x1ce0) = 0;
  *(uint32_t *)(self + 0x1ce4) = 0;
  *(uint32_t *)(self + 0xa0) = 0;
  *(uint32_t *)(self + 0x1cc4) = 0;
  *(uint32_t *)(self + 0x1d68) = 0;
  *(uint32_t *)(self + 0x1d6c) = 0;
  *(uint32_t *)(self + 0x1cd0) = 0;
  self[0x1cd4] = (GSMBChapterData)0x0;
  *(uint32_t *)(self + 0x1cd8) = 0xffffffff;
  *(uint32_t *)(self + 0x1cdc) = 0xffffffff;
  return;
}

/* ======================================================================
 * GSMBChapterData__ChapterLowestAchievementTime  (Ghidra `ChapterLowestAchievementTime` @ 004976b0)
 * Signature: uint8_t __thiscall ChapterLowestAchievementTime(GSMBChapterData * self, tagChapterName arg1)
 * Class: GSMBChapterData
 * Calls: `TPlayer__GetProfile`
 * Called by: (none)
 */
/* GSMBChapterData__ChapterLowestAchievementTime(tagChapterName) */

void __thiscall GSMBChapterData__ChapterLowestAchievementTime(GSMBChapterData *self,int arg2)

{
  int iVar1;
  long lVar2;
  UserProfile *pUVar3;
  long lVar4;
  float fVar5;
  uint32_t local_18;
  uint32_t local_14;
  
  if (ChapterLowestAchievementTime(tagChapterName)::pLowAchTimes == arg2) {
    iVar1 = 0;
  }
  else if (DAT_00815e94 /* R:2.802596928649634e-45f */ == arg2) {
    iVar1 = 1;
  }
  else if (DAT_00815ea8 /* R:4.203895392974451e-45f */ == arg2) {
    iVar1 = 2;
  }
  else if (DAT_00815ebc /* R:5.605193857299268e-45f */ == arg2) {
    iVar1 = 3;
  }
  else {
    iVar1 = 4;
    if (DAT_00815ed0 /* R:7.006492321624085e-45f */ != arg2) {
      return;
    }
  }
  lVar2 = (long)iVar1;
  fVar5 = 0.0;
  iVar1 = (&DAT_00815e84 /* R:0.0f */)[lVar2 * 5];
  if (iVar1 < (int)(&DAT_00815e88 /* R:5.465064010866787e-44f */)[lVar2 * 5]) {
    do {
      lVar4 = (long)iVar1;
      iVar1 = iVar1 + 1;
      fVar5 = fVar5 + *(float *)(self + lVar4 * 0xc + 0xa4);
    } while (iVar1 != (&DAT_00815e88 /* R:5.465064010866787e-44f */)[lVar2 * 5]);
  }
  if ((float)(&DAT_00815e8c /* R:245.0f */)[lVar2 * 5] <= fVar5) {
    return;
  }
  local_14 = (&DAT_00815e90 /* R:5.74532370373175e-44f */)[lVar2 * 5];
  local_18 = 1;
  pUVar3 = (UserProfile *)TPlayer__GetProfile((TPlayer *)Players__Player);
  Achievements__AwardAchievement(pUVar3,(AchievementAward *)&local_18);
  return;
}

/* ======================================================================
 * GSMBChapterData__AddDeath  (Ghidra `AddDeath` @ 00497780)
 * Signature: uint8_t __thiscall AddDeath(GSMBChapterData * self)
 * Class: GSMBChapterData
 * Calls: (none)
 * Called by: `FlyWrench__Death`, `MeatBoyCharactor__Death`
 */
/* GSMBChapterData__AddDeath() */

void __thiscall GSMBChapterData__AddDeath(GSMBChapterData *self)

{
  *(int *)(self + 0x1cd0) = *(int *)(self + 0x1cd0) + 1;
  *(uint32_t *)(self + 0x1d78) = 0;
  return;
}

/* ======================================================================
 * GSMBChapterData__ResetWarpZoneBandages  (Ghidra `ResetWarpZoneBandages` @ 004977a0)
 * Signature: uint8_t __thiscall ResetWarpZoneBandages(GSMBChapterData * self)
 * Class: GSMBChapterData
 * Calls: (none)
 * Called by: `SMBChapter__ActivateWarpZone`, `SMBChapter__ActivateWarpZoneFromMenu`
 */
/* GSMBChapterData__ResetWarpZoneBandages() */

void __thiscall GSMBChapterData__ResetWarpZoneBandages(GSMBChapterData *self)

{
  self[0x1cd4] = (GSMBChapterData)0x0;
  *(uint32_t *)(self + 0x1cd8) = 0xffffffff;
  *(uint32_t *)(self + 0x1cdc) = 0xffffffff;
  return;
}

/* ======================================================================
 * GSMBChapterData__IsGlitchUnlocked  (Ghidra `IsGlitchUnlocked` @ 004977c0)
 * Signature: uint8_t __thiscall IsGlitchUnlocked(GSMBChapterData * self)
 * Class: GSMBChapterData
 * Calls: (none)
 * Called by: `GSMBMenu__ShowChapterMap`
 */
/* GSMBChapterData__IsGlitchUnlocked() */

ushort __thiscall GSMBChapterData__IsGlitchUnlocked(GSMBChapterData *self)

{
  return *(ushort *)(self + (long)*(int *)(self + 0x1ce0) * 0xc + 0x1cf4) & 1;
}

/* ======================================================================
 * GSMBChapterData__IsGlitchDefeated  (Ghidra `IsGlitchDefeated` @ 004977e0)
 * Signature: uint8_t __thiscall IsGlitchDefeated(GSMBChapterData * self)
 * Class: GSMBChapterData
 * Calls: (none)
 * Called by: `GSMBMenu__Render`
 */
/* GSMBChapterData__IsGlitchDefeated() */

bool __thiscall GSMBChapterData__IsGlitchDefeated(GSMBChapterData *self)

{
  return ((byte)self[(long)*(int *)(self + 0x1ce0) * 0xc + 0x1cf4] & 0x20) != 0;
}

/* ======================================================================
 * GSMBChapterData__UnlockGlitchLevel  (Ghidra `UnlockGlitchLevel` @ 00497800)
 * Signature: uint8_t __thiscall UnlockGlitchLevel(GSMBChapterData * self)
 * Class: GSMBChapterData
 * Calls: (none)
 * Called by: `SMBChapter__ActivateWarpZone`, `SMBChapter__ActivateWarpZoneFromMenu`
 */
/* GSMBChapterData__UnlockGlitchLevel() */

void __thiscall GSMBChapterData__UnlockGlitchLevel(GSMBChapterData *self)

{
  *(ushort *)(self + (long)*(int *)(self + 0x1ce0) * 0xc + 0x1cf4) =
       *(ushort *)(self + (long)*(int *)(self + 0x1ce0) * 0xc + 0x1cf4) | 1;
  return;
}

/* ======================================================================
 * GSMBChapterData__CalculateOverallScore  (Ghidra `CalculateOverallScore` @ 00497820)
 * Signature: uint8_t __thiscall CalculateOverallScore(GSMBChapterData * self, uint * arg1, uint * arg2, uint * arg3)
 * Class: GSMBChapterData
 * Calls: (none)
 * Called by: `WriteToOverallLeaderboard`
 */
/* GSMBChapterData__CalculateOverallScore(unsigned int&, unsigned int&, unsigned int&) */

void __thiscall
GSMBChapterData__CalculateOverallScore
          (GSMBChapterData *self,uint *arg1,uint *arg2,uint *arg3)

{
  float fVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  *arg2 = 0;
  lVar2 = 0;
  *arg1 = 0;
  fVar1 = DAT_005c01c4 /* R:1000.0f */;
  do {
    if (((byte)self[lVar2 + 0xa8] & 2) != 0) {
      *arg1 = *arg1 + 1;
      iVar3 = (int)(long)(*(float *)(self + lVar2 + 0xa4) * fVar1);
      *arg3 = *arg3 + iVar3;
      uVar4 = 1000000 - iVar3;
      if (1000000 < uVar4) {
        uVar4 = 1000000;
      }
      *arg2 = *arg2 + uVar4;
    }
    lVar2 = lVar2 + 0xc;
  } while (lVar2 != 0x1068);
  if (((byte)self[0x1c50] & 2) != 0) {
    *arg1 = *arg1 + 1;
    iVar3 = (int)(long)(DAT_005c01c4 /* R:1000.0f */ * *(float *)(self + 0x1c4c));
    *arg3 = *arg3 + iVar3;
    uVar5 = 1000000 - iVar3;
    uVar4 = 1000000;
    if (uVar5 < 0xf4241) {
      uVar4 = uVar5;
    }
    *arg2 = *arg2 + uVar4;
  }
  if (((byte)self[0x1c5c] & 2) != 0) {
    *arg1 = *arg1 + 1;
    iVar3 = (int)(long)(DAT_005c01c4 /* R:1000.0f */ * *(float *)(self + 0x1c58));
    *arg3 = *arg3 + iVar3;
    uVar5 = 1000000 - iVar3;
    uVar4 = 1000000;
    if (uVar5 < 0xf4241) {
      uVar4 = uVar5;
    }
    *arg2 = *arg2 + uVar4;
  }
  if (((byte)self[0x1c68] & 2) != 0) {
    *arg1 = *arg1 + 1;
    iVar3 = (int)(long)(DAT_005c01c4 /* R:1000.0f */ * *(float *)(self + 0x1c64));
    *arg3 = *arg3 + iVar3;
    uVar5 = 1000000 - iVar3;
    uVar4 = 1000000;
    if (uVar5 < 0xf4241) {
      uVar4 = uVar5;
    }
    *arg2 = *arg2 + uVar4;
  }
  if (((byte)self[0x1c74] & 2) != 0) {
    *arg1 = *arg1 + 1;
    iVar3 = (int)(long)(DAT_005c01c4 /* R:1000.0f */ * *(float *)(self + 0x1c70));
    *arg3 = *arg3 + iVar3;
    uVar5 = 1000000 - iVar3;
    uVar4 = 1000000;
    if (uVar5 < 0xf4241) {
      uVar4 = uVar5;
    }
    *arg2 = *arg2 + uVar4;
  }
  if (((byte)self[0x1c80] & 2) != 0) {
    *arg1 = *arg1 + 1;
    iVar3 = (int)(long)(DAT_005c01c4 /* R:1000.0f */ * *(float *)(self + 0x1c7c));
    *arg3 = *arg3 + iVar3;
    uVar5 = 1000000 - iVar3;
    uVar4 = 1000000;
    if (uVar5 < 0xf4241) {
      uVar4 = uVar5;
    }
    *arg2 = *arg2 + uVar4;
  }
  if (((byte)self[0x1c8c] & 2) != 0) {
    *arg1 = *arg1 + 1;
    iVar3 = (int)(long)(DAT_005c01c4 /* R:1000.0f */ * *(float *)(self + 0x1c88));
    *arg3 = *arg3 + iVar3;
    uVar5 = 1000000 - iVar3;
    uVar4 = 1000000;
    if (uVar5 < 0xf4241) {
      uVar4 = uVar5;
    }
    *arg2 = *arg2 + uVar4;
  }
  if (((byte)self[0x1c98] & 2) != 0) {
    *arg1 = *arg1 + 1;
    iVar3 = (int)(long)(DAT_005c01c4 /* R:1000.0f */ * *(float *)(self + 0x1c94));
    *arg3 = *arg3 + iVar3;
    uVar5 = 1000000 - iVar3;
    uVar4 = 1000000;
    if (uVar5 < 0xf4241) {
      uVar4 = uVar5;
    }
    *arg2 = *arg2 + uVar4;
  }
  if (((byte)self[0x1ca4] & 2) != 0) {
    *arg1 = *arg1 + 1;
    iVar3 = (int)(long)(DAT_005c01c4 /* R:1000.0f */ * *(float *)(self + 0x1ca0));
    *arg3 = *arg3 + iVar3;
    uVar5 = 1000000 - iVar3;
    uVar4 = 1000000;
    if (uVar5 < 0xf4241) {
      uVar4 = uVar5;
    }
    *arg2 = *arg2 + uVar4;
  }
  if (((byte)self[0x1cb0] & 2) != 0) {
    *arg1 = *arg1 + 1;
    iVar3 = (int)(long)(DAT_005c01c4 /* R:1000.0f */ * *(float *)(self + 0x1cac));
    *arg3 = *arg3 + iVar3;
    uVar5 = 1000000 - iVar3;
    uVar4 = 1000000;
    if (uVar5 < 0xf4241) {
      uVar4 = uVar5;
    }
    *arg2 = *arg2 + uVar4;
  }
  if (((byte)self[0x1cbc] & 2) != 0) {
    *arg1 = *arg1 + 1;
    iVar3 = (int)(long)(DAT_005c01c4 /* R:1000.0f */ * *(float *)(self + 0x1cb8));
    *arg3 = *arg3 + iVar3;
    uVar5 = 1000000 - iVar3;
    uVar4 = 1000000;
    if (uVar5 < 0xf4241) {
      uVar4 = uVar5;
    }
    *arg2 = *arg2 + uVar4;
  }
  return;
}

/* ======================================================================
 * GSMBChapterData__CalculateInternetsScore  (Ghidra `CalculateInternetsScore` @ 00497c90)
 * Signature: uint8_t __thiscall CalculateInternetsScore(GSMBChapterData * self, uint * arg1, uint * arg2, uint * arg3)
 * Class: GSMBChapterData
 * Calls: (none)
 * Called by: (none)
 */
/* GSMBChapterData__CalculateInternetsScore(unsigned int&, unsigned int&, unsigned int&) */

void __thiscall
GSMBChapterData__CalculateInternetsScore
          (GSMBChapterData *self,uint *arg1,uint *arg2,uint *arg3)

{
  float fVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  
  *arg2 = 0;
  lVar2 = 0;
  *arg1 = 0;
  fVar1 = DAT_005c01c4 /* R:1000.0f */;
  do {
    if (((byte)self[lVar2 + 0x1110] & 2) != 0) {
      *arg1 = *arg1 + 1;
      iVar4 = (int)(long)(*(float *)(self + lVar2 + 0x110c) * fVar1);
      *arg3 = *arg3 + iVar4;
      uVar3 = 1000000 - iVar4;
      if (1000000 < uVar3) {
        uVar3 = 1000000;
      }
      *arg2 = *arg2 + uVar3;
    }
    lVar2 = lVar2 + 0xc;
  } while (lVar2 != 0xb40);
  return;
}

/* ======================================================================
 * GSMBChapterData__GetBossTileNumbers  (Ghidra `GetBossTileNumbers` @ 00497d00)
 * Signature: uint8_t __thiscall GetBossTileNumbers(GSMBChapterData * self, int * arg1, int * arg2, int arg3)
 * Class: GSMBChapterData
 * Calls: (none)
 * Called by: `GSMBMenu__SetBossPadState`
 */
/* GSMBChapterData__GetBossTileNumbers(int&, int&, int) */

void __thiscall
GSMBChapterData__GetBossTileNumbers(GSMBChapterData *self,int *arg1,int *arg2,int arg3)

{
  GSMBChapterData GVar1;
  int iVar2;
  
  *arg1 = 0;
  if (arg3 != 1) {
    *arg1 = (uint)(byte)self[(long)*(int *)(self + 0x1ce0) * 0xc + 0x1cf0];
    iVar2 = 5;
    if (*(int *)(self + 0x1ce0) != 6) {
      iVar2 = 0x11;
    }
    *arg2 = iVar2;
    return;
  }
  GVar1 = self[0x1cf1];
  *arg1 = (uint)(byte)GVar1;
  iVar2 = (uint)(byte)GVar1 + (uint)(byte)self[0x1cfd];
  *arg1 = iVar2;
  iVar2 = iVar2 + (uint)(byte)self[0x1d09];
  *arg1 = iVar2;
  iVar2 = iVar2 + (uint)(byte)self[0x1d15];
  *arg1 = iVar2;
  iVar2 = iVar2 + (uint)(byte)self[0x1d21];
  *arg1 = iVar2;
  iVar2 = iVar2 + (uint)(byte)self[0x1d2d];
  *arg1 = iVar2;
  iVar2 = iVar2 + (uint)(byte)self[0x1d39];
  *arg1 = iVar2;
  iVar2 = iVar2 + (uint)(byte)self[0x1d45];
  *arg1 = iVar2;
  *arg1 = iVar2 + (uint)(byte)self[0x1d51];
  iVar2 = 0x55;
  if (*(int *)(self + 0x1ce0) != 6) {
    iVar2 = 0;
  }
  *arg2 = iVar2;
  return;
}

/* ======================================================================
 * GSMBChapterData__GetTotalPercentComplete  (Ghidra `GetTotalPercentComplete` @ 00497dc0)
 * Signature: uint8_t __thiscall GetTotalPercentComplete(GSMBChapterData * self, int arg1)
 * Class: GSMBChapterData
 * Calls: (none)
 * Called by: `SMBStatisticsMenu__Activate`
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GSMBChapterData__GetTotalPercentComplete(int) */

ulong __thiscall GSMBChapterData__GetTotalPercentComplete(GSMBChapterData *self,int arg1)

{
  ushort uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  bool bVar5;
  float fVar6;
  
  bVar5 = (*(ushort *)(self + 0x1d00) & 0x20) != 0;
  uVar4 = (uint)bVar5;
  if ((*(ushort *)(self + 0x1d0c) & 0x20) != 0) {
    uVar4 = bVar5 + 1;
  }
  uVar1 = *(ushort *)(self + 0x1d3c);
  fVar6 = (float)(int)((((((((((((((((uint)(byte)self[0x1cfd] + (uint)(byte)self[0x1cfc] +
                                     (uint)(byte)self[0x1cff] + (uint)(byte)self[0x1cfe]) -
                                   (uint)((*(ushort *)(self + 0x1d00) & 4) == 0)) +
                                   (uint)(byte)self[0x1d08] + (uint)(byte)self[0x1d09] +
                                   (uint)(byte)self[0x1d0b] + (uint)(byte)self[0x1d0a] + 8) -
                                 (uint)((*(ushort *)(self + 0x1d0c) & 4) == 0)) +
                                 (uint)(byte)self[0x1d14] + (uint)(byte)self[0x1d15] +
                                 (uint)(byte)self[0x1d17] + (uint)(byte)self[0x1d16]) -
                               (uint)((*(ushort *)(self + 0x1d18) & 4) == 0)) +
                               (uint)(byte)self[0x1d20] + (uint)(byte)self[0x1d21] +
                               (uint)(byte)self[0x1d23] + (uint)(byte)self[0x1d22]) -
                             (uint)((*(ushort *)(self + 0x1d24) & 4) == 0)) +
                             (uint)(byte)self[0x1d2c] + (uint)(byte)self[0x1d2d] +
                             (uint)(byte)self[0x1d2f] + (uint)(byte)self[0x1d2e]) -
                           (uint)((*(ushort *)(self + 0x1d30) & 4) == 0)) + (uint)(byte)self[0x1d38]
                           + (uint)(byte)self[0x1d39] + (uint)(byte)self[0x1d3b] +
                          (uint)(byte)self[0x1d3a]) - (uint)((uVar1 & 4) == 0)) -
                        (uint)((uVar1 & 8) == 0)) + (uint)(byte)self[0x1d44] +
                        (uint)(byte)self[0x1d45] + (uint)(byte)self[0x1d47] +
                       (uint)(byte)self[0x1d46]) - (uint)((*(ushort *)(self + 0x1d48) & 4) == 0)) *
          _DAT_005c2068 /* R:0.23980815708637238f */;
  uVar2 = (ulong)fVar6;
  if ((float)(long)uVar2 < fVar6) {
    uVar2 = uVar2 + 1;
  }
  uVar3 = uVar2 & 0xffffffff;
  if (arg1 == 1) {
    uVar3 = (ulong)(((((((uVar4 - ((*(ushort *)(self + 0x1d18) & 0x20) == 0)) -
                        (uint)((*(ushort *)(self + 0x1d24) & 0x20) == 0)) -
                       (uint)((*(ushort *)(self + 0x1d30) & 0x20) == 0)) -
                      (uint)((uVar1 & 0x20) == 0)) + 5) -
                    (uint)((*(ushort *)(self + 0x1d48) & 0x20) == 0)) + (int)uVar2);
  }
  return uVar3;
}

/* ======================================================================
 * GSMBChapterData__GetDarkWorldPercentComplete  (Ghidra `GetDarkWorldPercentComplete` @ 00497fc0)
 * Signature: uint8_t __thiscall GetDarkWorldPercentComplete(GSMBChapterData * self)
 * Class: GSMBChapterData
 * Calls: (none)
 * Called by: `SMBStatisticsMenu__Activate`
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GSMBChapterData__GetDarkWorldPercentComplete() */

long __thiscall GSMBChapterData__GetDarkWorldPercentComplete(GSMBChapterData *self)

{
  long lVar1;
  int iVar2;
  float fVar3;
  
  iVar2 = (uint)(byte)self[0x1d45] +
          (uint)(byte)self[0x1cf1] + (uint)(byte)self[0x1cfd] + (uint)(byte)self[0x1d09] +
          (uint)(byte)self[0x1d15] + (uint)(byte)self[0x1d21] + (uint)(byte)self[0x1d2d] +
          (uint)(byte)self[0x1d39];
  lVar1 = 0;
  if (iVar2 != 0) {
    fVar3 = (float)iVar2 * _DAT_005c207c /* R:0.800000011920929f */;
    lVar1 = (long)fVar3;
    if ((float)lVar1 < fVar3) {
      lVar1 = lVar1 + 1;
    }
  }
  return lVar1;
}

/* ======================================================================
 * GSMBChapterData__GetLightWorldPercentComplete  (Ghidra `GetLightWorldPercentComplete` @ 00498030)
 * Signature: uint8_t __thiscall GetLightWorldPercentComplete(GSMBChapterData * self)
 * Class: GSMBChapterData
 * Calls: (none)
 * Called by: `SMBStatisticsMenu__Activate`
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GSMBChapterData__GetLightWorldPercentComplete() */

long __thiscall GSMBChapterData__GetLightWorldPercentComplete(GSMBChapterData *self)

{
  long lVar1;
  int iVar2;
  float fVar3;
  
  iVar2 = (uint)(byte)self[0x1d44] +
          (uint)(byte)self[0x1cf0] + (uint)(byte)self[0x1cfc] + (uint)(byte)self[0x1d08] +
          (uint)(byte)self[0x1d14] + (uint)(byte)self[0x1d20] + (uint)(byte)self[0x1d2c] +
          (uint)(byte)self[0x1d38];
  lVar1 = 0;
  if (iVar2 != 0) {
    fVar3 = (float)iVar2 * _DAT_005c207c /* R:0.800000011920929f */;
    lVar1 = (long)fVar3;
    if ((float)lVar1 < fVar3) {
      lVar1 = lVar1 + 1;
    }
  }
  return lVar1;
}

/* ======================================================================
 * GSMBChapterData__SetNumCollectedBandaids  (Ghidra `SetNumCollectedBandaids` @ 004980a0)
 * Signature: uint8_t __thiscall SetNumCollectedBandaids(GSMBChapterData * self, int arg1)
 * Class: GSMBChapterData
 * Calls: (none)
 * Called by: (none)
 */
/* GSMBChapterData__SetNumCollectedBandaids(int) */

void __thiscall GSMBChapterData__SetNumCollectedBandaids(GSMBChapterData *self,int arg1)

{
  self[0x1cfe] = SUB41(arg1,0);
  return;
}

/* ======================================================================
 * GSMBChapterData__ChapterAchievementCheck  (Ghidra `ChapterAchievementCheck` @ 004980b0)
 * Signature: uint8_t __thiscall ChapterAchievementCheck(GSMBChapterData * self, SMBLevelData * arg1)
 * Class: GSMBChapterData
 * Calls: `GMeatHUD__AddUnlockScreen`, `TPlayer__GetProfile`
 * Called by: (none)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GSMBChapterData__ChapterAchievementCheck(SMBLevelData*) */

void __thiscall
GSMBChapterData__ChapterAchievementCheck(GSMBChapterData *self,SMBLevelData *arg1)

{
  GMeatHUD *pGVar1;
  uint uVar2;
  GSMBChapterData *pGVar3;
  long lVar4;
  UserProfile *pUVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  float fVar9;
  uint32_t local_28;
  uint32_t local_24;
  
  iVar6 = *(int *)(self + 0x1ce0);
  if (iVar6 == ChapterLowestAchievementTime(tagChapterName)::pLowAchTimes) {
    iVar7 = 0;
  }
  else if (iVar6 == DAT_00815e94 /* R:2.802596928649634e-45f */) {
    iVar7 = 1;
  }
  else if (iVar6 == DAT_00815ea8 /* R:4.203895392974451e-45f */) {
    iVar7 = 2;
  }
  else if (iVar6 == DAT_00815ebc /* R:5.605193857299268e-45f */) {
    iVar7 = 3;
  }
  else {
    iVar7 = 4;
    if (iVar6 != DAT_00815ed0 /* R:7.006492321624085e-45f */) goto LAB_00498105;
  }
  lVar4 = (long)iVar7;
  fVar9 = 0.0;
  iVar7 = (&DAT_00815e84 /* R:0.0f */)[lVar4 * 5];
  if (iVar7 < (int)(&DAT_00815e88 /* R:5.465064010866787e-44f */)[lVar4 * 5]) {
    do {
      lVar8 = (long)iVar7;
      iVar7 = iVar7 + 1;
      fVar9 = fVar9 + *(float *)(self + lVar8 * 0xc + 0xa4);
    } while (iVar7 != (&DAT_00815e88 /* R:5.465064010866787e-44f */)[lVar4 * 5]);
  }
  if (fVar9 < (float)(&DAT_00815e8c /* R:245.0f */)[lVar4 * 5]) {
    local_24 = (&DAT_00815e90 /* R:5.74532370373175e-44f */)[lVar4 * 5];
    local_28 = 1;
    pUVar5 = (UserProfile *)TPlayer__GetProfile((TPlayer *)Players__Player);
    Achievements__AwardAchievement(pUVar5,(AchievementAward *)&local_28);
    iVar6 = *(int *)(self + 0x1ce0);
  }
LAB_00498105:
  if ((iVar6 == 7) && (arg1 != (SMBLevelData *)0x0)) {
    if (self[0x1d44] == (GSMBChapterData)0x14) {
      local_24 = 0x15;
      local_28 = 1;
      pUVar5 = (UserProfile *)TPlayer__GetProfile((TPlayer *)Players__Player);
      Achievements__AwardAchievement(pUVar5,(AchievementAward *)&local_28);
    }
    if (self[0x1d45] == (GSMBChapterData)0x14) {
      local_24 = 0x16;
      local_28 = 1;
      pUVar5 = (UserProfile *)TPlayer__GetProfile((TPlayer *)Players__Player);
      Achievements__AwardAchievement(pUVar5,(AchievementAward *)&local_28);
    }
  }
  iVar6 = 2;
  iVar7 = 0;
  pGVar3 = self;
  do {
    iVar7 = (iVar7 + (uint)(byte)pGVar3[0x1cfc] + (uint)(byte)pGVar3[0x1cfd] +
             (uint)(byte)pGVar3[0x1cff] + (uint)(byte)pGVar3[0x1cfe] + 1) -
            (uint)((*(ushort *)(pGVar3 + 0x1d00) & 4) == 0);
    if (iVar6 == 7) {
      iVar7 = (iVar7 + 1) - (uint)((*(ushort *)(pGVar3 + 0x1d00) & 8) == 0);
    }
    else if (iVar6 == 8) break;
    pGVar3 = pGVar3 + 0xc;
    iVar6 = iVar6 + 1;
  } while( true );
  lVar4 = (long)((float)iVar7 * _DAT_005c2068 /* R:0.23980815708637238f */);
  if ((float)lVar4 < (float)iVar7 * _DAT_005c2068 /* R:0.23980815708637238f */) {
    lVar4 = lVar4 + 1;
  }
  if ((int)lVar4 == 100) {
    local_24 = 0x14;
    local_28 = 1;
    pUVar5 = (UserProfile *)TPlayer__GetProfile((TPlayer *)Players__Player);
    Achievements__AwardAchievement(pUVar5,(AchievementAward *)&local_28);
    pGVar1 = SMBHUD;
    if ((*(uint *)(self + 0x1d68) & 0x80) == 0) {
      *(uint *)(self + 0x1d68) = *(uint *)(self + 0x1d68) | 0x80;
      GMeatHUD__AddUnlockScreen(pGVar1,0xe);
    }
  }
  uVar2 = (uint)(byte)self[0x1d53] +
          (uint)(byte)self[0x1cf3] + (uint)(byte)self[0x1cff] + (uint)(byte)self[0x1d0b] +
          (uint)(byte)self[0x1d17] + (uint)(byte)self[0x1d23] + (uint)(byte)self[0x1d2f] +
          (uint)(byte)self[0x1d3b] + (uint)(byte)self[0x1d47] + (uint)(byte)self[0x1d5f];
  if (uVar2 == 0xf) {
    local_24 = 0xf;
  }
  else if (uVar2 == 0x1e) {
    local_24 = 0x10;
  }
  else {
    if (uVar2 < 0x3c) goto LAB_00498259;
    local_24 = 0x11;
  }
  local_28 = 1;
  pUVar5 = (UserProfile *)TPlayer__GetProfile((TPlayer *)Players__Player);
  Achievements__AwardAchievement(pUVar5,(AchievementAward *)&local_28);
LAB_00498259:
  if (((arg1 != (SMBLevelData *)0x0) && (uVar2 = *(uint *)(self + 0x1ce4), uVar2 < 2)) &&
     (iVar6 = *(int *)(self + 0x1d78), iVar6 < 0x28)) {
    if ((iVar6 == 0) || (*(long *)(self + 0x1d70) != *(long *)(self + 0x1ce0))) {
      *(SMBLevelData **)(self + 0x1d80) = arg1;
      *(uint *)(self + 0x1d74) = uVar2;
      *(uint32_t *)(self + 0x1d78) = 1;
      *(uint32_t *)(self + 0x1d70) = *(uint32_t *)(self + 0x1ce0);
      return;
    }
    if (iVar6 < 1) {
LAB_00498317:
      iVar7 = iVar6 + 1;
      *(SMBLevelData **)(self + (long)iVar6 * 8 + 0x1d80) = arg1;
      *(int *)(self + 0x1d78) = iVar7;
      if (iVar7 == 0x14) {
        iVar6 = *(int *)(self + 0x1ce0);
      }
      else {
        if (iVar7 != 5) {
          return;
        }
        if (*(int *)(self + 0x1ce0) != 6) {
          return;
        }
        iVar6 = 6;
      }
      if (uVar2 == 0) {
        if (iVar6 == 2) {
          local_24 = 1;
        }
        else if (iVar6 == 3) {
          local_24 = 2;
        }
        else if (iVar6 == 4) {
          local_24 = 3;
        }
        else if (iVar6 == 5) {
          local_24 = 4;
        }
        else if (iVar6 == 6) {
          local_24 = 5;
        }
        else {
          local_24 = 6;
          if (iVar6 != 7) {
            local_24 = 0;
          }
        }
      }
      else if (iVar6 == 2) {
        local_24 = 8;
      }
      else if (iVar6 == 3) {
        local_24 = 9;
      }
      else if (iVar6 == 4) {
        local_24 = 10;
      }
      else if (iVar6 == 5) {
        local_24 = 0xb;
      }
      else if (iVar6 == 6) {
        local_24 = 0xc;
      }
      else {
        local_24 = 0xd;
        if (iVar6 != 7) {
          local_24 = 7;
        }
      }
      local_28 = 1;
      pUVar5 = (UserProfile *)TPlayer__GetProfile((TPlayer *)Players__Player);
      Achievements__AwardAchievement(pUVar5,(AchievementAward *)&local_28);
    }
    else if (*(SMBLevelData **)(self + 0x1d80) != arg1) {
      lVar4 = 0;
      do {
        if (lVar4 == (ulong)(iVar6 - 1) << 3) goto LAB_00498317;
        lVar8 = lVar4 + 0x1d88;
        lVar4 = lVar4 + 8;
      } while (*(SMBLevelData **)(self + lVar8) != arg1);
    }
  }
  return;
}

/* ======================================================================
 * GSMBChapterData__AwardBandageGet  (Ghidra `AwardBandageGet` @ 004985a0)
 * Signature: uint8_t __thiscall AwardBandageGet(GSMBChapterData * self, int arg1)
 * Class: GSMBChapterData
 * Calls: `GMeatHUD__AddUnlockScreen`, `TPlayer__GetProfile`
 * Called by: (none)
 */
/* GSMBChapterData__AwardBandageGet(int) */

void __thiscall GSMBChapterData__AwardBandageGet(GSMBChapterData *self,int arg1)

{
  int iVar1;
  UserProfile *pUVar2;
  uint32_t in_register_00000034;
  undefined7 uVar3;
  uint32_t local_18;
  uint32_t local_14;
  
  iVar1 = (uint)(byte)self[0x1cfe] + (uint)(byte)self[0x1cf2] + (uint)(byte)self[0x1d0a] +
          (uint)(byte)self[0x1d16] + (uint)(byte)self[0x1d22] + (uint)(byte)self[0x1d2e] +
          (uint)(byte)self[0x1d3a] + (uint)(byte)self[0x1d46] + (uint)(byte)self[0x1d52] +
          (uint)(byte)self[0x1d5e];
  uVar3 = (undefined7)(CONCAT44(in_register_00000034,arg1) >> 8);
  if (iVar1 == 10) {
    *(uint *)(self + 0x1d68) = *(uint *)(self + 0x1d68) | 0x800000;
    if (arg1 == 0) {
      GMeatHUD__AddUnlockScreen(SMBHUD,CONCAT71(uVar3,3));
    }
    local_14 = 0x17;
    goto LAB_0049868a;
  }
  if (iVar1 == 0x14) {
    *(uint *)(self + 0x1d6c) = *(uint *)(self + 0x1d6c) | 0x100;
    ChapterAchievementCheck(self,(SMBLevelData *)0x0);
    return;
  }
  if (iVar1 == 0x1e) {
    *(uint *)(self + 0x1d68) = *(uint *)(self + 0x1d68) | 0x200000;
    if (arg1 == 0) {
      GMeatHUD__AddUnlockScreen(SMBHUD,CONCAT71(uVar3,4));
    }
    local_14 = 0x18;
    local_18 = 1;
    pUVar2 = (UserProfile *)TPlayer__GetProfile((TPlayer *)Players__Player);
    Achievements__AwardAchievement(pUVar2,(AchievementAward *)&local_18);
    if (bAHSteamAllowed == 1) {
      *(uint *)(self + 0x1d68) = *(uint *)(self + 0x1d68) | 0x8000000;
    }
    goto LAB_004986a6;
  }
  if (iVar1 == 0x28) {
    *(uint *)(self + 0x1d68) = *(uint *)(self + 0x1d68) | 2;
    if (arg1 == 0) {
      GMeatHUD__AddUnlockScreen(SMBHUD);
    }
    goto LAB_004986a6;
  }
  if (iVar1 == 0x32) {
    *(uint *)(self + 0x1d68) = *(uint *)(self + 0x1d68) | 0x400;
    if (arg1 == 0) {
      GMeatHUD__AddUnlockScreen(SMBHUD,CONCAT71(uVar3,7));
    }
    local_14 = 0x19;
  }
  else {
    if (iVar1 == 0x3c) {
      *(uint *)(self + 0x1d68) = *(uint *)(self + 0x1d68) | 8;
joined_r0x00498799:
      if (arg1 == 0) {
        GMeatHUD__AddUnlockScreen(SMBHUD);
      }
      goto LAB_004986a6;
    }
    if (iVar1 == 0x46) {
      *(uint *)(self + 0x1d68) = *(uint *)(self + 0x1d68) | 0x1000;
      if (arg1 == 0) {
        GMeatHUD__AddUnlockScreen(SMBHUD,CONCAT71(uVar3,6));
      }
      local_14 = 0x1b;
    }
    else {
      if (iVar1 == 0x50) {
        *(uint *)(self + 0x1d68) = *(uint *)(self + 0x1d68) | 4;
        goto joined_r0x00498799;
      }
      if (iVar1 == 0x5a) {
        *(uint *)(self + 0x1d68) = *(uint *)(self + 0x1d68) | 0x80000;
        if (arg1 == 0) {
          GMeatHUD__AddUnlockScreen(SMBHUD,CONCAT71(uVar3,9));
        }
        local_14 = 0x1c;
      }
      else {
        if (iVar1 != 100) goto LAB_004986a6;
        *(uint *)(self + 0x1d68) = *(uint *)(self + 0x1d68) | 0x4000;
        if (arg1 == 0) {
          GMeatHUD__AddUnlockScreen(SMBHUD,CONCAT71(uVar3,8));
        }
        local_14 = 0x1a;
      }
    }
  }
LAB_0049868a:
  local_18 = 1;
  pUVar2 = (UserProfile *)TPlayer__GetProfile((TPlayer *)Players__Player);
  Achievements__AwardAchievement(pUVar2,(AchievementAward *)&local_18);
LAB_004986a6:
  ChapterAchievementCheck(self,(SMBLevelData *)0x0);
  return;
}

/* ======================================================================
 * GSMBChapterData__ReloadData  (Ghidra `ReloadData` @ 00498870)
 * Signature: uint8_t __thiscall ReloadData(GSMBChapterData * self)
 * Class: GSMBChapterData
 * Calls: `File__File`, `File__File__005b7a70`, `File__Read`, `File__Reset`, `File__Write`, `FixFileCase`, `System_IsTrialMode`, `TPlayer__GetProfile`, `access`, `fclose` (+9 more)
 * Called by: `SMBReselectedDrive`
 */
/* WARNING: Removing unreachable block (ram,0x0049aaf6) */
/* WARNING: Removing unreachable block (ram,0x0049aa15) */
/* WARNING: Removing unreachable block (ram,0x0049aa23) */
/* WARNING: Removing unreachable block (ram,0x0049ab08) */
/* WARNING: Removing unreachable block (ram,0x0049aa07) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GSMBChapterData__ReloadData() */

uint64_t __thiscall GSMBChapterData__ReloadData(GSMBChapterData *self)

{
  int *piVar1;
  bool bVar2;
  GSMBChapterData GVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  File *this_00;
  FILE *pFVar8;
  ulong uVar9;
  void *pvVar10;
  uint64_t uVar11;
  UserProfile *pUVar12;
  GSMBChapterData *pGVar13;
  float fVar14;
  bool bVar15;
  int iVar16;
  long lVar17;
  GSMBChapterData *pGVar18;
  int iVar19;
  uint uVar20;
  bool bVar21;
  float fVar22;
  float local_1c8;
  uint local_1c4;
  uint local_1c0;
  GSMBChapterData local_1b8;
  uint local_1a0;
  int local_19c;
  char *local_188;
  uint8_t *local_180;
  uint32_t local_178;
  uint64_t local_170;
  uint32_t local_168;
  uint32_t local_164;
  uint32_t local_160;
  uint32_t local_15c;
  uint32_t local_158;
  uint32_t local_154;
  uint8_t *local_150;
  char *local_148;
  uint8_t *local_140;
  uint32_t local_138;
  uint64_t local_130;
  uint32_t local_128;
  uint32_t local_124;
  uint32_t local_120;
  uint32_t local_11c;
  uint32_t local_118;
  uint32_t local_114;
  uint8_t *local_110;
  uint64_t local_108;
  uint8_t *local_100;
  uint32_t local_f8;
  void *local_f0;
  uint32_t local_e8;
  uint32_t local_e4;
  uint32_t local_e0;
  uint32_t local_dc;
  uint32_t local_d8;
  uint32_t local_d4;
  uint8_t *local_d0;
  uint32_t local_c8;
  uint32_t local_c4;
  char *local_98 [2];
  char *local_88 [2];
  char *local_78 [2];
  uint local_68 [4];
  float local_58 [2];
  uint32_t local_50;
  uint local_4c;
  uint local_48;
  ushort local_44;
  allocator local_42;
  allocator local_41;
  allocator local_40;
  allocator local_3f;
  uint8_t local_3e [14];
  
  FixFileCase((char *)local_98);
  mkdir(local_98[0],0x1c0);
                    /* try { // try from 004988ba to 00498c82 has its CatchHandler @ 00499b17 */
  std__string_append((char *)local_98,0x5c1f11);
  plVar6 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
  iVar4 = (**(code **)(*plVar6 + 0x20))(plVar6);
                    /* try { // try from 00499975 to 00499a43 has its CatchHandler @ 00499b17 */
  if ((iVar4 == 1) &&
     (lVar7 = TPlayer__GetProfile((TPlayer *)Players__Player), *(int *)(lVar7 + 0xc) == 1)) {
    plVar6 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
    iVar4 = (**(code **)(*plVar6 + 0x90))(plVar6);
    if ((iVar4 == 0) &&
       ((iVar4 = System_IsTrialMode(), iVar4 == 0 &&
        (pFVar8 = fopen(local_98[0],"rb"), pFVar8 != (FILE *)0x0)))) {
      fseek(pFVar8,0,2);
      uVar9 = ftell(pFVar8);
      fseek(pFVar8,0,0);
      pvVar10 = operator_new__(uVar9);
      fread(pvVar10,uVar9,1,pFVar8);
      fclose(pFVar8);
      std__string_string((string *)local_88,GUserDataPath,&local_42);
                    /* try { // try from 00499a53 to 00499a8c has its CatchHandler @ 00499b3e */
      std__string_append((char *)local_88,0x5c1f11);
      pFVar8 = fopen(local_88[0],"wb");
      if (pFVar8 != (FILE *)0x0) {
        fwrite(pvVar10,uVar9,1,pFVar8);
        fclose(pFVar8);
      }
      if (pvVar10 != (void *)0x0) {
        operator_delete__(pvVar10);
      }
      if ((allocator *)(local_88[0] + -0x18) !=
          (allocator *)&std__string_Rep_S_empty_rep_storage) {
        LOCK();
        piVar1 = (int *)(local_88[0] + -8);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 < 1) {
          std__string_Rep_M_destroy((allocator *)(local_88[0] + -0x18));
        }
      }
    }
  }
  plVar6 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
  iVar4 = (**(code **)(*plVar6 + 0x20))(plVar6);
                    /* try { // try from 00499803 to 0049985c has its CatchHandler @ 00499b17 */
  if ((((iVar4 == 1) &&
       (lVar7 = TPlayer__GetProfile((TPlayer *)Players__Player), *(int *)(lVar7 + 0xc) == 1)) &&
      (iVar4 = access(local_98[0],0), iVar4 == -1)) && (iVar4 = System_IsTrialMode(), iVar4 == 0)) {
    std__string_string((string *)local_88,GUserDataPath,&local_41);
                    /* try { // try from 0049986c to 0049990f has its CatchHandler @ 00499b2f */
    std__string_append((char *)local_88,0x5c1f11);
    pFVar8 = fopen(local_88[0],"rb");
    if (pFVar8 != (FILE *)0x0) {
      fseek(pFVar8,0,2);
      uVar9 = ftell(pFVar8);
      fseek(pFVar8,0,0);
      pvVar10 = operator_new__(uVar9);
      fread(pvVar10,uVar9,1,pFVar8);
      fclose(pFVar8);
      pFVar8 = fopen(local_98[0],"wb");
      if (pFVar8 != (FILE *)0x0) {
        fwrite(pvVar10,uVar9,1,pFVar8);
        fclose(pFVar8);
      }
      if (pvVar10 != (void *)0x0) {
        operator_delete__(pvVar10);
      }
    }
    if ((allocator *)(local_88[0] + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage)
    {
      LOCK();
      piVar1 = (int *)(local_88[0] + -8);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 < 1) {
        std__string_Rep_M_destroy((allocator *)(local_88[0] + -0x18));
      }
    }
  }
  plVar6 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
  iVar4 = (**(code **)(*plVar6 + 0x20))(plVar6);
  if ((iVar4 == 1) &&
     (lVar7 = TPlayer__GetProfile((TPlayer *)Players__Player), *(int *)(lVar7 + 0xc) == 1)) {
    plVar6 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
    iVar4 = (**(code **)(*plVar6 + 0x90))(plVar6,"savegame.dat");
    if ((iVar4 == 1) && (iVar4 = System_IsTrialMode(), iVar4 == 0)) {
      std__string_string((string *)local_88,GUserDataPath,&local_40);
                    /* try { // try from 00498c92 to 00498cb2 has its CatchHandler @ 0049aa02 */
      std__string_append((char *)local_88,0x5c1f11);
      std__string_string((string *)local_78,GUserDataPath,&local_3f);
                    /* try { // try from 00498cc5 to 00498cef has its CatchHandler @ 0049a98e */
      std__string_append((char *)local_78,0x5c1f11);
      std__string_append((char *)local_78,0x5c1f1e);
      iVar4 = File__Exists(local_78[0],0);
      if (iVar4 == 0) {
                    /* try { // try from 0049a85d to 0049a872 has its CatchHandler @ 0049a98e */
        plVar6 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
        iVar4 = (**(code **)(*plVar6 + 0x90))(plVar6,"savegame.dat");
        if (iVar4 == 1) {
          local_178 = 2;
          local_170 = 0;
          local_168 = 0;
          local_164 = 1;
          local_160 = 1;
          local_15c = 0;
          local_158 = 0;
          local_154 = 0;
          local_150 = &DAT_005c04cf /* R:7.374579797039071e-39f */;
          local_180 = &DAT_005c328c /* R:u32=1811964530 */;
          local_188 = local_88[0];
                    /* try { // try from 0049a8e9 to 0049a8ed has its CatchHandler @ 0049a9f9 */
          File__File((File *)&local_108,(tagFileCreation *)&local_188);
          uVar5 = local_108._4_4_;
          pvVar10 = malloc((ulong)local_108._4_4_);
                    /* try { // try from 0049a90f to 0049a93b has its CatchHandler @ 0049a9f4 */
          File__Read((File *)&local_108,pvVar10,uVar5);
          local_180 = &DAT_005c04d3 /* R:3.984248865183858e-39f */;
          local_188 = local_78[0];
          File__File((File *)&local_c8,(tagFileCreation *)&local_188);
                    /* try { // try from 0049a94e to 0049a952 has its CatchHandler @ 0049a9d5 */
          File__Write((File *)&local_c8,pvVar10,local_108._4_4_);
          free(pvVar10);
                    /* try { // try from 0049a963 to 0049a967 has its CatchHandler @ 0049a9f4 */
          File__File__005b7a70((File *)&local_c8);
                    /* try { // try from 0049a970 to 0049a974 has its CatchHandler @ 0049a9f9 */
          File__File__005b7a70((File *)&local_108);
        }
      }
      local_138 = 2;
      local_130 = 0;
      local_128 = 0;
      local_124 = 1;
      local_120 = 1;
      local_11c = 0;
      local_118 = 0;
      local_114 = 0;
      local_110 = &DAT_005c04cf /* R:7.374579797039071e-39f */;
      local_140 = &DAT_005c328c /* R:u32=1811964530 */;
      local_148 = "savegame.dat";
                    /* try { // try from 00498d7a to 004990bd has its CatchHandler @ 0049aa36 */
      plVar6 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
      this_00 = (File *)(**(code **)(*plVar6 + 0x40))(plVar6,&local_148,0);
      local_50 = 0;
      plVar6 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
      (**(code **)(*plVar6 + 0x48))(plVar6,this_00,&local_50,4);
      File__Reset(this_00);
      plVar6 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
      (**(code **)(*plVar6 + 0x48))(plVar6,this_00,self + 0x1d68,4);
      plVar6 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
      (**(code **)(*plVar6 + 0x48))(plVar6,this_00,self + 0x1d6c,4);
      plVar6 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
      (**(code **)(*plVar6 + 0x48))(plVar6,this_00,self + 0x1cd0,4);
      plVar6 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
      (**(code **)(*plVar6 + 0x48))(plVar6,this_00,self + 0x1cc4,4);
      iVar4 = 0;
      do {
        plVar6 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
        lVar7 = (long)iVar4;
        (**(code **)(*plVar6 + 0x48))(plVar6,this_00,self + lVar7 * 0xc + 0x1cf0,1);
        plVar6 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
        (**(code **)(*plVar6 + 0x48))(plVar6,this_00,self + lVar7 * 0xc + 0x1cf1,1);
        plVar6 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
        (**(code **)(*plVar6 + 0x48))(plVar6,this_00,self + lVar7 * 0xc + 0x1cf2,1);
        plVar6 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
        (**(code **)(*plVar6 + 0x48))(plVar6,this_00,self + lVar7 * 0xc + 0x1cf3,1);
        plVar6 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
        (**(code **)(*plVar6 + 0x48))(plVar6,this_00,self + lVar7 * 0xc + 0x1cf4,2);
        plVar6 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
        (**(code **)(*plVar6 + 0x48))(plVar6,this_00,self + lVar7 * 0xc + 0x1cf6,1);
        plVar6 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
        (**(code **)(*plVar6 + 0x48))(plVar6,this_00,self + lVar7 * 0xc + 0x1cf7,1);
        plVar6 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
        (**(code **)(*plVar6 + 0x48))(plVar6,this_00,self + lVar7 * 0xc + 0x1cf8,4);
        iVar4 = iVar4 + 1;
      } while (iVar4 != 10);
      iVar4 = 0;
      do {
        plVar6 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
        lVar7 = (long)iVar4;
        (**(code **)(*plVar6 + 0x48))(plVar6,this_00,self + lVar7 * 0xc + 0xa4,4);
        plVar6 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
        (**(code **)(*plVar6 + 0x48))(plVar6,this_00,self + lVar7 * 0xc + 0xa8,4);
        plVar6 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
        (**(code **)(*plVar6 + 0x48))(plVar6,this_00,self + lVar7 * 0xc + 0xac,4);
        iVar4 = iVar4 + 1;
      } while (iVar4 != 600);
      plVar6 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
      (**(code **)(*plVar6 + 0x58))(plVar6,this_00,0);
      pFVar8 = fopen(local_98[0],"rb");
      if (pFVar8 != (FILE *)0x0) {
        fseek(pFVar8,0,2);
        uVar9 = ftell(pFVar8);
        fseek(pFVar8,0,0);
        pvVar10 = operator_new__(uVar9);
        fread(pvVar10,uVar9,1,pFVar8);
        fclose(pFVar8);
        local_f8 = 2;
        local_e4 = 1;
        local_e0 = 1;
        local_dc = 0;
        local_d8 = 0;
        local_d4 = 0;
        local_d0 = &DAT_005c04cf /* R:7.374579797039071e-39f */;
        local_100 = &DAT_005c328c /* R:u32=1811964530 */;
        local_108 = "";
        local_e8 = (uint32_t)uVar9;
        local_f0 = pvVar10;
                    /* try { // try from 00499139 to 0049944c has its CatchHandler @ 0049aa31 */
        plVar6 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
        uVar11 = (**(code **)(*plVar6 + 0x40))(plVar6,&local_108,0);
        local_4c = 0;
        local_68[0] = 0;
        local_48 = 0;
        local_3e[0] = 0;
        local_44 = 0;
        plVar6 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
        (**(code **)(*plVar6 + 0x48))(plVar6,uVar11,&local_4c,4);
        *(uint *)(self + 0x1d68) = *(uint *)(self + 0x1d68) | local_4c;
        plVar6 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
        (**(code **)(*plVar6 + 0x48))(plVar6,uVar11,&local_4c,4);
        *(uint *)(self + 0x1d6c) = *(uint *)(self + 0x1d6c) | local_4c;
        plVar6 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
        (**(code **)(*plVar6 + 0x48))(plVar6,uVar11,local_68,4);
        if (*(uint *)(self + 0x1cd0) < local_68[0]) {
          *(uint *)(self + 0x1cd0) = local_68[0];
        }
        plVar6 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
        (**(code **)(*plVar6 + 0x48))(plVar6,uVar11,&local_48,4);
        lVar7 = 0;
        do {
          plVar6 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
          (**(code **)(*plVar6 + 0x48))(plVar6,uVar11,local_3e,1);
          plVar6 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
          (**(code **)(*plVar6 + 0x48))(plVar6,uVar11,local_3e,1);
          plVar6 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
          (**(code **)(*plVar6 + 0x48))(plVar6,uVar11,local_3e,1);
          plVar6 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
          (**(code **)(*plVar6 + 0x48))(plVar6,uVar11,local_3e,1);
          plVar6 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
          (**(code **)(*plVar6 + 0x48))(plVar6,uVar11,&local_44,2);
          *(ushort *)(self + lVar7 + 0x1cf4) = *(ushort *)(self + lVar7 + 0x1cf4) | local_44;
          plVar6 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
          (**(code **)(*plVar6 + 0x48))(plVar6,uVar11,local_3e,1);
          plVar6 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
          (**(code **)(*plVar6 + 0x48))(plVar6,uVar11,local_3e,1);
          plVar6 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
          (**(code **)(*plVar6 + 0x48))(plVar6,uVar11,&local_4c,4);
          lVar7 = lVar7 + 0xc;
        } while (lVar7 != 0x78);
        pGVar18 = self + 0xa8;
        iVar4 = 0;
        do {
          plVar6 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
          (**(code **)(*plVar6 + 0x48))(plVar6,uVar11,local_58,4);
          if (local_58[0] < *(float *)(pGVar18 + -4)) {
            *(float *)(pGVar18 + -4) = local_58[0];
          }
          plVar6 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
          (**(code **)(*plVar6 + 0x48))(plVar6,uVar11,&local_48,4);
          *(uint *)pGVar18 = *(uint *)pGVar18 | local_48;
          plVar6 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
          (**(code **)(*plVar6 + 0x48))(plVar6,uVar11,self + (long)iVar4 * 0xc + 0xac,4);
          iVar4 = iVar4 + 1;
          pGVar18 = pGVar18 + 0xc;
        } while (iVar4 != 600);
        plVar6 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
        (**(code **)(*plVar6 + 0x58))(plVar6,uVar11,0);
        if (pvVar10 != (void *)0x0) {
          operator_delete__(pvVar10);
        }
      }
      *(uint *)(self + 0x1d68) = *(uint *)(self + 0x1d68) | 1;
      *(uint *)(self + 0x1d6c) = *(uint *)(self + 0x1d6c) | 0x101;
      self[0x1cfc] = (GSMBChapterData)0x0;
      self[0x1cfd] = (GSMBChapterData)0x0;
      self[0x1cff] = (GSMBChapterData)0x0;
      self[0x1cfe] = (GSMBChapterData)0x0;
      self[0x1d02] = (GSMBChapterData)0x0;
      if (((byte)self[0x1d00] & 4) != 0) {
        *(uint *)(self + 0x1d6c) = *(uint *)(self + 0x1d6c) | 2;
      }
      self[0x1d08] = (GSMBChapterData)0x0;
      self[0x1d09] = (GSMBChapterData)0x0;
      self[0x1d0b] = (GSMBChapterData)0x0;
      self[0x1d0a] = (GSMBChapterData)0x0;
      self[0x1d0e] = (GSMBChapterData)0x0;
      if (((byte)self[0x1d0c] & 4) != 0) {
        *(uint *)(self + 0x1d6c) = *(uint *)(self + 0x1d6c) | 4;
      }
      self[0x1d14] = (GSMBChapterData)0x0;
      self[0x1d15] = (GSMBChapterData)0x0;
      self[0x1d17] = (GSMBChapterData)0x0;
      self[0x1d16] = (GSMBChapterData)0x0;
      self[0x1d1a] = (GSMBChapterData)0x0;
      if (((byte)self[0x1d18] & 4) != 0) {
        *(uint *)(self + 0x1d6c) = *(uint *)(self + 0x1d6c) | 8;
      }
      self[0x1d20] = (GSMBChapterData)0x0;
      self[0x1d21] = (GSMBChapterData)0x0;
      self[0x1d23] = (GSMBChapterData)0x0;
      self[0x1d22] = (GSMBChapterData)0x0;
      self[0x1d26] = (GSMBChapterData)0x0;
      if (((byte)self[0x1d24] & 4) != 0) {
        *(uint *)(self + 0x1d6c) = *(uint *)(self + 0x1d6c) | 0x10;
      }
      self[0x1d2c] = (GSMBChapterData)0x0;
      self[0x1d2d] = (GSMBChapterData)0x0;
      self[0x1d2f] = (GSMBChapterData)0x0;
      self[0x1d2e] = (GSMBChapterData)0x0;
      self[0x1d32] = (GSMBChapterData)0x0;
      if (((byte)self[0x1d30] & 4) != 0) {
        *(uint *)(self + 0x1d6c) = *(uint *)(self + 0x1d6c) | 0x20;
      }
      self[0x1d38] = (GSMBChapterData)0x0;
      self[0x1d39] = (GSMBChapterData)0x0;
      self[0x1d3b] = (GSMBChapterData)0x0;
      self[0x1d3a] = (GSMBChapterData)0x0;
      self[0x1d3e] = (GSMBChapterData)0x0;
      if (((byte)self[0x1d3c] & 4) != 0) {
        *(uint *)(self + 0x1d6c) = *(uint *)(self + 0x1d6c) | 0x40;
      }
      self[0x1d44] = (GSMBChapterData)0x0;
      self[0x1d45] = (GSMBChapterData)0x0;
      self[0x1d47] = (GSMBChapterData)0x0;
      self[0x1d46] = (GSMBChapterData)0x0;
      self[0x1d4a] = (GSMBChapterData)0x0;
      if (((byte)self[0x1d48] & 4) != 0) {
        *(uint *)(self + 0x1d6c) = *(uint *)(self + 0x1d6c) | 0x80;
      }
      self[0x1d50] = (GSMBChapterData)0x0;
      self[0x1d51] = (GSMBChapterData)0x0;
      self[0x1d53] = (GSMBChapterData)0x0;
      self[0x1d52] = (GSMBChapterData)0x0;
      self[0x1d56] = (GSMBChapterData)0x0;
      if (((byte)self[0x1d54] & 4) != 0) {
        *(uint *)(self + 0x1d6c) = *(uint *)(self + 0x1d6c) | 0x100;
      }
      self[0x1d5c] = (GSMBChapterData)0x0;
      self[0x1d5d] = (GSMBChapterData)0x0;
      self[0x1d5f] = (GSMBChapterData)0x0;
      self[0x1d5e] = (GSMBChapterData)0x0;
      iVar4 = 0;
      self[0x1d62] = (GSMBChapterData)0x0;
      local_19c = 1;
      pGVar18 = self;
      do {
        if (local_19c == 9) {
          local_1b8 = (GSMBChapterData)0x14;
          bVar21 = false;
          local_1c0 = 0x14;
          local_1a0 = 0;
          local_1c4 = 0x14;
        }
        else if (local_19c == 6) {
          local_1b8 = (GSMBChapterData)0x5;
          bVar21 = false;
          local_1c0 = 5;
          local_1a0 = 0;
          local_1c4 = 10;
        }
        else {
          bVar21 = local_19c != 7;
          local_1b8 = (GSMBChapterData)0x14;
          local_1c0 = 0x14;
          local_1c4 = 0x28;
          local_1a0 = ~-(uint)(local_19c - 7U < 2) & 4;
        }
        pGVar18[0x1cfc] = (GSMBChapterData)0x0;
        pGVar18[0x1cfd] = (GSMBChapterData)0x0;
        iVar16 = 0;
        pGVar18[0x1cff] = (GSMBChapterData)0x0;
        pGVar18[0x1cfe] = (GSMBChapterData)0x0;
        pGVar18[0x1d02] = (GSMBChapterData)0x0;
        do {
          lVar7 = (long)(iVar4 + iVar16) * 0xc;
          fVar22 = *(float *)(self + lVar7 + 0xa4);
          if (fVar22 == 0.0) {
            uVar5 = *(uint *)(self + lVar7 + 0xa8);
            if ((uVar5 & 1) != 0) {
              *(uint32_t *)(self + lVar7 + 0xa4) = 0x42700000;
              uVar20 = 1;
              *(uint *)(self + lVar7 + 0xa8) = uVar5 | 2;
              bVar15 = true;
              uVar5 = uVar5 & 8;
              goto joined_r0x004996ec;
            }
            if ((uVar5 & 8) != 0) {
              uVar20 = 0;
              bVar15 = false;
              *(uint *)(self + lVar7 + 0xa8) = uVar5 | 8;
              *(uint32_t *)(self + lVar7 + 0xa4) = 0x4cbebc20;
              goto LAB_0049978e;
            }
            *(uint32_t *)(self + lVar7 + 0xa8) = 0;
            uVar20 = 0;
            *(uint32_t *)(self + lVar7 + 0xa4) = 0x4cbebc20;
          }
          else {
            if (fVar22 < DAT_005c17f0 /* R:100000000.0f */) {
              uVar5 = *(uint *)(self + lVar7 + 0xa8);
              if (fVar22 <= 0.0) {
                uVar5 = uVar5 & 8;
                uVar20 = 0;
                bVar15 = false;
              }
              else {
                bVar15 = true;
                *(uint *)(self + lVar7 + 0xa8) = uVar5 | 2;
                uVar20 = uVar5 & 1;
                uVar5 = uVar5 & 8;
              }
            }
            else {
              uVar20 = 0;
              bVar15 = false;
              uVar5 = *(uint *)(self + lVar7 + 0xa8) & 8;
            }
joined_r0x004996ec:
            if (uVar5 != 0) {
LAB_0049978e:
              local_c4 = 0xe;
              local_c8 = 1;
              pUVar12 = (UserProfile *)TPlayer__GetProfile((TPlayer *)Players__Player);
              Achievements__AwardAchievement(pUVar12,(AchievementAward *)&local_c8);
              pGVar18[0x1d02] = (GSMBChapterData)((char)pGVar18[0x1d02] + '\x01');
            }
            if (bVar15) {
              if (iVar16 < (int)local_1c0) {
                GVar3 = (GSMBChapterData)((char)pGVar18[0x1cfc] + 1);
                if (local_1c0 <= (byte)pGVar18[0x1cfc]) {
                  GVar3 = local_1b8;
                }
                pGVar18[0x1cfc] = GVar3;
              }
              else {
                GVar3 = (GSMBChapterData)((char)pGVar18[0x1cfd] + 1);
                if (local_1c0 <= (byte)pGVar18[0x1cfd]) {
                  GVar3 = local_1b8;
                }
                pGVar18[0x1cfd] = GVar3;
              }
            }
          }
          if ((uVar20 != 0) && (bVar21)) {
            GVar3 = (GSMBChapterData)((char)pGVar18[0x1cfe] + 1);
            if (0x13 < (byte)pGVar18[0x1cfe]) {
              GVar3 = (GSMBChapterData)0x14;
            }
            pGVar18[0x1cfe] = GVar3;
                    /* try { // try from 0049972e to 004997bd has its CatchHandler @ 0049aa36 */
            AwardBandageGet(self,1);
          }
          iVar16 = iVar16 + 1;
        } while (iVar16 < (int)local_1c4);
        iVar4 = iVar4 + local_1c4;
        if (local_1a0 != 0) {
          local_1c4 = 0;
          bVar15 = false;
          bVar21 = false;
          pGVar13 = self + (long)iVar4 * 0xc + 0xa4;
LAB_00499c20:
          fVar14 = *(float *)(pGVar13 + 4);
          fVar22 = *(float *)pGVar13;
          if (fVar22 == 0.0) goto LAB_00499eb5;
LAB_00499c33:
          uVar5 = 0;
          bVar2 = false;
LAB_00499c3c:
          if (((uint)fVar14 & 1) != 0) {
            fVar14 = (float)((uint)fVar14 | 2);
            uVar5 = 1;
            bVar2 = true;
            *(float *)(pGVar13 + 4) = fVar14;
          }
          if (fVar22 <= 0.0) goto LAB_00499ee8;
          if (DAT_005c17f0 /* R:100000000.0f */ <= fVar22) goto LAB_00499ee8;
          *(uint *)(pGVar13 + 4) = (uint)fVar14 | 2;
LAB_00499c73:
          iVar16 = 1;
          do {
            fVar22 = DAT_005c17f0 /* R:100000000.0f */;
            pGVar13 = self + 0xf38;
            if (!bVar15) {
              pGVar13 = self + (long)(iVar4 + 1) * 0xc + 0xa4;
            }
            fVar14 = *(float *)(pGVar13 + 4);
            local_1c8 = *(float *)pGVar13;
            if (local_1c8 == 0.0) {
              if (((uint)fVar14 & 1) != 0) {
                fVar14 = (float)((uint)fVar14 | 2);
                *(float *)pGVar13 = 60.0;
                *(float *)(pGVar13 + 4) = fVar14;
                local_1c8 = 60.0;
                bVar2 = true;
                goto LAB_00499cbb;
              }
              *(float *)(pGVar13 + 4) = 0.0;
              *(float *)pGVar13 = fVar22;
              fVar14 = 0.0;
              bVar2 = false;
              local_1c8 = fVar22;
LAB_00499cdf:
              if (fVar22 <= local_1c8) goto LAB_00499f18;
              *(uint *)(pGVar13 + 4) = (uint)fVar14 | 2;
              iVar19 = iVar16 + 1;
              if (bVar2) goto LAB_00499cf6;
            }
            else {
              bVar2 = false;
LAB_00499cbb:
              if (((uint)fVar14 & 1) != 0) {
                fVar14 = (float)((uint)fVar14 | 2);
                bVar2 = true;
                *(float *)(pGVar13 + 4) = fVar14;
              }
              fVar22 = DAT_005c17f0 /* R:100000000.0f */;
              if (0.0 < local_1c8) goto LAB_00499cdf;
LAB_00499f18:
              iVar19 = iVar16;
              if (bVar2) {
LAB_00499cf6:
                uVar5 = uVar5 + 1;
                iVar19 = iVar16 + 1;
              }
            }
            fVar22 = DAT_005c17f0 /* R:100000000.0f */;
            pGVar13 = self + 0xf44;
            if (!bVar15) {
              pGVar13 = self + (long)(iVar4 + 2) * 0xc + 0xa4;
            }
            fVar14 = *(float *)(pGVar13 + 4);
            local_1c8 = *(float *)pGVar13;
            if (local_1c8 == 0.0) {
              if (((uint)fVar14 & 1) != 0) {
                fVar14 = (float)((uint)fVar14 | 2);
                *(float *)pGVar13 = 60.0;
                *(float *)(pGVar13 + 4) = fVar14;
                local_1c8 = 60.0;
                bVar2 = true;
                goto LAB_00499d3c;
              }
              *(float *)(pGVar13 + 4) = 0.0;
              *(float *)pGVar13 = fVar22;
              fVar14 = 0.0;
              bVar2 = false;
              local_1c8 = fVar22;
LAB_00499d60:
              if (fVar22 <= local_1c8) goto LAB_00499f00;
              *(uint *)(pGVar13 + 4) = (uint)fVar14 | 2;
              iVar16 = iVar19 + 1;
              if (bVar2) goto LAB_00499d77;
            }
            else {
              bVar2 = false;
LAB_00499d3c:
              if (((uint)fVar14 & 1) != 0) {
                fVar14 = (float)((uint)fVar14 | 2);
                bVar2 = true;
                *(float *)(pGVar13 + 4) = fVar14;
              }
              fVar22 = DAT_005c17f0 /* R:100000000.0f */;
              if (0.0 < local_1c8) goto LAB_00499d60;
LAB_00499f00:
              iVar16 = iVar19;
              if (bVar2) {
LAB_00499d77:
                uVar5 = uVar5 + 1;
                iVar16 = iVar19 + 1;
              }
            }
            if ((uVar5 != 0) || (iVar16 == 3)) {
              uVar20 = 2;
              if (uVar5 < 3) {
                uVar20 = uVar5;
              }
              if (uVar20 != 0) {
                uVar5 = 0;
                do {
                  GVar3 = (GSMBChapterData)((char)pGVar18[0x1cfe] + 1);
                  if (0x13 < (byte)pGVar18[0x1cfe]) {
                    GVar3 = (GSMBChapterData)0x14;
                  }
                  pGVar18[0x1cfe] = GVar3;
                    /* try { // try from 00499dca to 0049a83e has its CatchHandler @ 0049aa36 */
                  AwardBandageGet(self,1);
                  uVar5 = uVar5 + 1;
                } while (uVar5 != uVar20);
              }
              pGVar18[0x1cff] = (GSMBChapterData)((char)pGVar18[0x1cff] + '\x03');
              if (bVar15) {
                *(uint *)(self + 0xf30) = *(uint *)(self + 0xf30) | 2;
                *(uint *)(self + 0xf3c) = *(uint *)(self + 0xf3c) | 2;
                *(uint32_t *)(self + 0xf2c) = 0x40a00000;
                *(uint32_t *)(self + 0xf38) = 0x40a00000;
                *(uint *)(self + 0xf48) = *(uint *)(self + 0xf48) | 2;
                *(uint32_t *)(self + 0xf44) = 0x40a00000;
              }
              else {
                *(uint *)(self + (long)iVar4 * 0xc + 0xa8) =
                     *(uint *)(self + (long)iVar4 * 0xc + 0xa8) | 2;
                *(uint32_t *)(self + (long)iVar4 * 0xc + 0xa4) = 0x40a00000;
                lVar7 = (long)(iVar4 + 1) * 0xc;
                *(uint *)(self + lVar7 + 0xa8) = *(uint *)(self + lVar7 + 0xa8) | 2;
                *(uint32_t *)(self + lVar7 + 0xa4) = 0x40a00000;
                lVar7 = (long)(iVar4 + 2) * 0xc;
                *(uint *)(self + lVar7 + 0xa8) = *(uint *)(self + lVar7 + 0xa8) | 2;
                *(uint32_t *)(self + lVar7 + 0xa4) = 0x40a00000;
                if (!bVar21) goto LAB_00499e58;
              }
              if (local_19c == 1) {
                *(uint *)(self + 0x1d68) = *(uint *)(self + 0x1d68) | 0x800;
              }
              else if (local_19c == 2) {
                uVar5 = *(uint *)(self + 0x1d68);
                *(uint *)(self + 0x1d68) = uVar5 | 0x40000;
                if (((byte)self[0x8c4] & 8) != 0) {
                  *(uint32_t *)(self + 0x9f8) = 0x40a00000;
                  *(uint *)(self + 0x9fc) = *(uint *)(self + 0x9fc) | 2;
                  *(uint *)(self + 0x1d68) = uVar5 | 0x50000;
                  *(uint32_t *)(self + 0xa04) = 0x40a00000;
                  *(uint *)(self + 0xa08) = *(uint *)(self + 0xa08) | 2;
                  *(uint32_t *)(self + 0xa10) = 0x40a00000;
                  *(uint *)(self + 0xa14) = *(uint *)(self + 0xa14) | 2;
                }
              }
              else if (local_19c == 3) {
                *(uint *)(self + 0x1d68) = *(uint *)(self + 0x1d68) | 0x1000000;
              }
              else if (local_19c == 4) {
                *(uint *)(self + 0x1d68) = *(uint *)(self + 0x1d68) | 0x10000;
              }
              else if (local_19c == 5) {
                *(uint *)(self + 0x1d68) = *(uint *)(self + 0x1d68) | 0x400000;
              }
            }
LAB_00499e58:
            local_1c4 = local_1c4 + 1;
            iVar4 = iVar4 + 3;
            if (local_1c4 == local_1a0) break;
            bVar21 = local_1c4 == 1;
            pGVar13 = self + 0xf2c;
            bVar15 = bVar21 && local_19c == 5;
            if (bVar15) goto LAB_00499c20;
            pGVar13 = self + (long)iVar4 * 0xc + 0xa4;
            fVar22 = *(float *)pGVar13;
            fVar14 = *(float *)(pGVar13 + 4);
            if (fVar22 != 0.0) goto LAB_00499c33;
LAB_00499eb5:
            if (((uint)fVar14 & 1) != 0) {
              fVar14 = (float)((uint)fVar14 | 2);
              *(float *)pGVar13 = 60.0;
              uVar5 = 1;
              *(float *)(pGVar13 + 4) = fVar14;
              bVar2 = true;
              fVar22 = DAT_005c07b8 /* R:60.0f */;
              goto LAB_00499c3c;
            }
            uVar5 = 0;
            bVar2 = false;
            *(float *)(pGVar13 + 4) = 0.0;
            *(float *)pGVar13 = 1e+08;
LAB_00499ee8:
            if (bVar2) goto LAB_00499c73;
            iVar16 = 0;
          } while( true );
        }
        local_19c = local_19c + 1;
        pGVar18 = pGVar18 + 0xc;
      } while (local_19c != 10);
      if (ChapterLowestAchievementTime(tagChapterName)::pLowAchTimes == 1) {
        iVar4 = 0;
LAB_0049a7ca:
        lVar7 = (long)iVar4;
        fVar22 = 0.0;
        iVar4 = (&DAT_00815e84 /* R:0.0f */)[lVar7 * 5];
        if (iVar4 < (int)(&DAT_00815e88 /* R:5.465064010866787e-44f */)[lVar7 * 5]) {
          do {
            lVar17 = (long)iVar4;
            iVar4 = iVar4 + 1;
            fVar22 = fVar22 + *(float *)(self + lVar17 * 0xc + 0xa4);
          } while (iVar4 != (&DAT_00815e88 /* R:5.465064010866787e-44f */)[lVar7 * 5]);
        }
        if ((float)(&DAT_00815e8c /* R:245.0f */)[lVar7 * 5] <= fVar22) goto LAB_0049a0d0;
        local_c4 = (&DAT_00815e90 /* R:5.74532370373175e-44f */)[lVar7 * 5];
        local_c8 = 1;
        pUVar12 = (UserProfile *)TPlayer__GetProfile((TPlayer *)Players__Player);
        Achievements__AwardAchievement(pUVar12,(AchievementAward *)&local_c8);
        if (ChapterLowestAchievementTime(tagChapterName)::pLowAchTimes != 2) goto LAB_0049a0dd;
LAB_0049a84c:
        iVar4 = 0;
LAB_0049a430:
        lVar7 = (long)iVar4;
        fVar22 = 0.0;
        iVar4 = (&DAT_00815e84 /* R:0.0f */)[lVar7 * 5];
        if (iVar4 < (int)(&DAT_00815e88 /* R:5.465064010866787e-44f */)[lVar7 * 5]) {
          do {
            lVar17 = (long)iVar4;
            iVar4 = iVar4 + 1;
            fVar22 = fVar22 + *(float *)(self + lVar17 * 0xc + 0xa4);
          } while (iVar4 != (&DAT_00815e88 /* R:5.465064010866787e-44f */)[lVar7 * 5]);
        }
        if ((float)(&DAT_00815e8c /* R:245.0f */)[lVar7 * 5] <= fVar22) goto LAB_0049a116;
        local_c4 = (&DAT_00815e90 /* R:5.74532370373175e-44f */)[lVar7 * 5];
        local_c8 = 1;
        pUVar12 = (UserProfile *)TPlayer__GetProfile((TPlayer *)Players__Player);
        Achievements__AwardAchievement(pUVar12,(AchievementAward *)&local_c8);
        if (ChapterLowestAchievementTime(tagChapterName)::pLowAchTimes == 3) goto LAB_0049a4ac;
LAB_0049a123:
        if (DAT_00815e94 /* R:2.802596928649634e-45f */ == 3) {
          iVar4 = 1;
          goto LAB_0049a4ae;
        }
        if (DAT_00815ea8 /* R:4.203895392974451e-45f */ == 3) {
          iVar4 = 2;
          goto LAB_0049a4ae;
        }
        if (DAT_00815ebc /* R:5.605193857299268e-45f */ == 3) {
          iVar4 = 3;
          goto LAB_0049a4ae;
        }
        iVar4 = 4;
        if (DAT_00815ed0 /* R:7.006492321624085e-45f */ == 3) goto LAB_0049a4ae;
LAB_0049a15c:
        if (ChapterLowestAchievementTime(tagChapterName)::pLowAchTimes == 4) goto LAB_0049a52c;
LAB_0049a169:
        if (DAT_00815e94 /* R:2.802596928649634e-45f */ == 4) {
          iVar4 = 1;
          goto LAB_0049a52e;
        }
        if (DAT_00815ea8 /* R:4.203895392974451e-45f */ == 4) {
          iVar4 = 2;
          goto LAB_0049a52e;
        }
        if (DAT_00815ebc /* R:5.605193857299268e-45f */ == 4) {
          iVar4 = 3;
          goto LAB_0049a52e;
        }
        iVar4 = 4;
        if (DAT_00815ed0 /* R:7.006492321624085e-45f */ == 4) goto LAB_0049a52e;
LAB_0049a1a2:
        if (ChapterLowestAchievementTime(tagChapterName)::pLowAchTimes == 5) goto LAB_0049a5ac;
LAB_0049a1af:
        if (DAT_00815e94 /* R:2.802596928649634e-45f */ == 5) {
          iVar4 = 1;
          goto LAB_0049a5ae;
        }
        if (DAT_00815ea8 /* R:4.203895392974451e-45f */ == 5) {
          iVar4 = 2;
          goto LAB_0049a5ae;
        }
        if (DAT_00815ebc /* R:5.605193857299268e-45f */ == 5) {
          iVar4 = 3;
          goto LAB_0049a5ae;
        }
        iVar4 = 4;
        if (DAT_00815ed0 /* R:7.006492321624085e-45f */ == 5) goto LAB_0049a5ae;
LAB_0049a1e8:
        if (ChapterLowestAchievementTime(tagChapterName)::pLowAchTimes == 7) goto LAB_0049a62c;
LAB_0049a1f5:
        if (DAT_00815e94 /* R:2.802596928649634e-45f */ == 7) {
          iVar4 = 1;
        }
        else if (DAT_00815ea8 /* R:4.203895392974451e-45f */ == 7) {
          iVar4 = 2;
        }
        else if (DAT_00815ebc /* R:5.605193857299268e-45f */ == 7) {
          iVar4 = 3;
        }
        else {
          iVar4 = 4;
          if (DAT_00815ed0 /* R:7.006492321624085e-45f */ != 7) goto LAB_0049a22e;
        }
      }
      else {
        if (DAT_00815e94 /* R:2.802596928649634e-45f */ == 1) {
          iVar4 = 1;
          goto LAB_0049a7ca;
        }
        if (DAT_00815ea8 /* R:4.203895392974451e-45f */ == 1) {
          iVar4 = 2;
          goto LAB_0049a7ca;
        }
        if (DAT_00815ebc /* R:5.605193857299268e-45f */ == 1) {
          iVar4 = 3;
          goto LAB_0049a7ca;
        }
        iVar4 = 4;
        if (DAT_00815ed0 /* R:7.006492321624085e-45f */ == 1) goto LAB_0049a7ca;
LAB_0049a0d0:
        if (ChapterLowestAchievementTime(tagChapterName)::pLowAchTimes == 2) goto LAB_0049a84c;
LAB_0049a0dd:
        if (DAT_00815e94 /* R:2.802596928649634e-45f */ == 2) {
          iVar4 = 1;
          goto LAB_0049a430;
        }
        if (DAT_00815ea8 /* R:4.203895392974451e-45f */ == 2) {
          iVar4 = 2;
          goto LAB_0049a430;
        }
        if (DAT_00815ebc /* R:5.605193857299268e-45f */ == 2) {
          iVar4 = 3;
          goto LAB_0049a430;
        }
        iVar4 = 4;
        if (DAT_00815ed0 /* R:7.006492321624085e-45f */ == 2) goto LAB_0049a430;
LAB_0049a116:
        if (ChapterLowestAchievementTime(tagChapterName)::pLowAchTimes != 3) goto LAB_0049a123;
LAB_0049a4ac:
        iVar4 = 0;
LAB_0049a4ae:
        lVar7 = (long)iVar4;
        fVar22 = 0.0;
        iVar4 = (&DAT_00815e84 /* R:0.0f */)[lVar7 * 5];
        if (iVar4 < (int)(&DAT_00815e88 /* R:5.465064010866787e-44f */)[lVar7 * 5]) {
          do {
            lVar17 = (long)iVar4;
            iVar4 = iVar4 + 1;
            fVar22 = fVar22 + *(float *)(self + lVar17 * 0xc + 0xa4);
          } while (iVar4 != (&DAT_00815e88 /* R:5.465064010866787e-44f */)[lVar7 * 5]);
        }
        if ((float)(&DAT_00815e8c /* R:245.0f */)[lVar7 * 5] <= fVar22) goto LAB_0049a15c;
        local_c4 = (&DAT_00815e90 /* R:5.74532370373175e-44f */)[lVar7 * 5];
        local_c8 = 1;
        pUVar12 = (UserProfile *)TPlayer__GetProfile((TPlayer *)Players__Player);
        Achievements__AwardAchievement(pUVar12,(AchievementAward *)&local_c8);
        if (ChapterLowestAchievementTime(tagChapterName)::pLowAchTimes != 4) goto LAB_0049a169;
LAB_0049a52c:
        iVar4 = 0;
LAB_0049a52e:
        lVar7 = (long)iVar4;
        fVar22 = 0.0;
        iVar4 = (&DAT_00815e84 /* R:0.0f */)[lVar7 * 5];
        if (iVar4 < (int)(&DAT_00815e88 /* R:5.465064010866787e-44f */)[lVar7 * 5]) {
          do {
            lVar17 = (long)iVar4;
            iVar4 = iVar4 + 1;
            fVar22 = fVar22 + *(float *)(self + lVar17 * 0xc + 0xa4);
          } while (iVar4 != (&DAT_00815e88 /* R:5.465064010866787e-44f */)[lVar7 * 5]);
        }
        if ((float)(&DAT_00815e8c /* R:245.0f */)[lVar7 * 5] <= fVar22) goto LAB_0049a1a2;
        local_c4 = (&DAT_00815e90 /* R:5.74532370373175e-44f */)[lVar7 * 5];
        local_c8 = 1;
        pUVar12 = (UserProfile *)TPlayer__GetProfile((TPlayer *)Players__Player);
        Achievements__AwardAchievement(pUVar12,(AchievementAward *)&local_c8);
        if (ChapterLowestAchievementTime(tagChapterName)::pLowAchTimes != 5) goto LAB_0049a1af;
LAB_0049a5ac:
        iVar4 = 0;
LAB_0049a5ae:
        lVar7 = (long)iVar4;
        fVar22 = 0.0;
        iVar4 = (&DAT_00815e84 /* R:0.0f */)[lVar7 * 5];
        if (iVar4 < (int)(&DAT_00815e88 /* R:5.465064010866787e-44f */)[lVar7 * 5]) {
          do {
            lVar17 = (long)iVar4;
            iVar4 = iVar4 + 1;
            fVar22 = fVar22 + *(float *)(self + lVar17 * 0xc + 0xa4);
          } while (iVar4 != (&DAT_00815e88 /* R:5.465064010866787e-44f */)[lVar7 * 5]);
        }
        if ((float)(&DAT_00815e8c /* R:245.0f */)[lVar7 * 5] <= fVar22) goto LAB_0049a1e8;
        local_c4 = (&DAT_00815e90 /* R:5.74532370373175e-44f */)[lVar7 * 5];
        local_c8 = 1;
        pUVar12 = (UserProfile *)TPlayer__GetProfile((TPlayer *)Players__Player);
        Achievements__AwardAchievement(pUVar12,(AchievementAward *)&local_c8);
        if (ChapterLowestAchievementTime(tagChapterName)::pLowAchTimes != 7) goto LAB_0049a1f5;
LAB_0049a62c:
        iVar4 = 0;
      }
      lVar7 = (long)iVar4;
      fVar22 = 0.0;
      iVar4 = (&DAT_00815e84 /* R:0.0f */)[lVar7 * 5];
      if (iVar4 < (int)(&DAT_00815e88 /* R:5.465064010866787e-44f */)[lVar7 * 5]) {
        do {
          lVar17 = (long)iVar4;
          iVar4 = iVar4 + 1;
          fVar22 = fVar22 + *(float *)(self + lVar17 * 0xc + 0xa4);
        } while (iVar4 != (&DAT_00815e88 /* R:5.465064010866787e-44f */)[lVar7 * 5]);
      }
      if (fVar22 < (float)(&DAT_00815e8c /* R:245.0f */)[lVar7 * 5]) {
        local_c4 = (&DAT_00815e90 /* R:5.74532370373175e-44f */)[lVar7 * 5];
        local_c8 = 1;
        pUVar12 = (UserProfile *)TPlayer__GetProfile((TPlayer *)Players__Player);
        Achievements__AwardAchievement(pUVar12,(AchievementAward *)&local_c8);
      }
LAB_0049a22e:
      iVar16 = 2;
      iVar4 = 0;
      pGVar18 = self;
      do {
        iVar4 = ((uint)(byte)pGVar18[0x1cfe] +
                 (uint)(byte)pGVar18[0x1cfd] + iVar4 + (uint)(byte)pGVar18[0x1cfc] +
                 (uint)(byte)pGVar18[0x1cff] + 1) - (uint)((*(ushort *)(pGVar18 + 0x1d00) & 4) == 0)
        ;
        if (iVar16 == 7) {
          iVar4 = (iVar4 + 1) - (uint)((*(ushort *)(pGVar18 + 0x1d00) & 8) == 0);
        }
        else if (iVar16 == 8) goto LAB_0049a37a;
        pGVar18 = pGVar18 + 0xc;
        iVar16 = iVar16 + 1;
      } while( true );
    }
  }
  iVar4 = System_IsTrialMode();
  if (iVar4 == 0) {
    lVar7 = 0;
    do {
      *(uint32_t *)(self + lVar7 + 0xa4) = 0x4cbebc20;
      *(uint32_t *)(self + lVar7 + 0xa8) = 0;
      lVar7 = lVar7 + 0xc;
    } while (lVar7 != 0x1c20);
    *(uint32_t *)(self + 0x1d68) = 0;
    *(uint32_t *)(self + 0x1d6c) = 0;
    self[0x1cf0] = (GSMBChapterData)0x0;
    self[0x1cf1] = (GSMBChapterData)0x0;
    self[0x1cf2] = (GSMBChapterData)0x0;
    self[0x1cf3] = (GSMBChapterData)0x0;
    *(uint16_t *)(self + 0x1cf4) = 0;
    self[0x1cf6] = (GSMBChapterData)0x0;
    self[0x1cf7] = (GSMBChapterData)0x0;
    *(uint32_t *)(self + 0x1cf8) = 0;
    self[0x1cfc] = (GSMBChapterData)0x0;
    self[0x1cfd] = (GSMBChapterData)0x0;
    self[0x1cfe] = (GSMBChapterData)0x0;
    self[0x1cff] = (GSMBChapterData)0x0;
    *(uint16_t *)(self + 0x1d00) = 0;
    self[0x1d02] = (GSMBChapterData)0x0;
    self[0x1d03] = (GSMBChapterData)0x0;
    *(uint32_t *)(self + 0x1d04) = 0;
    self[0x1d08] = (GSMBChapterData)0x0;
    self[0x1d09] = (GSMBChapterData)0x0;
    self[0x1d0a] = (GSMBChapterData)0x0;
    self[0x1d0b] = (GSMBChapterData)0x0;
    *(uint16_t *)(self + 0x1d0c) = 0;
    self[0x1d0e] = (GSMBChapterData)0x0;
    self[0x1d0f] = (GSMBChapterData)0x0;
    *(uint32_t *)(self + 0x1d10) = 0;
    self[0x1d14] = (GSMBChapterData)0x0;
    self[0x1d15] = (GSMBChapterData)0x0;
    self[0x1d16] = (GSMBChapterData)0x0;
    self[0x1d17] = (GSMBChapterData)0x0;
    *(uint16_t *)(self + 0x1d18) = 0;
    self[0x1d1a] = (GSMBChapterData)0x0;
    self[0x1d1b] = (GSMBChapterData)0x0;
    *(uint32_t *)(self + 0x1d1c) = 0;
    self[0x1d20] = (GSMBChapterData)0x0;
    self[0x1d21] = (GSMBChapterData)0x0;
    self[0x1d22] = (GSMBChapterData)0x0;
    self[0x1d23] = (GSMBChapterData)0x0;
    *(uint16_t *)(self + 0x1d24) = 0;
    self[0x1d26] = (GSMBChapterData)0x0;
    self[0x1d27] = (GSMBChapterData)0x0;
    *(uint32_t *)(self + 0x1d28) = 0;
    self[0x1d2c] = (GSMBChapterData)0x0;
    self[0x1d2d] = (GSMBChapterData)0x0;
    self[0x1d2e] = (GSMBChapterData)0x0;
    self[0x1d2f] = (GSMBChapterData)0x0;
    *(uint16_t *)(self + 0x1d30) = 0;
    self[0x1d32] = (GSMBChapterData)0x0;
    self[0x1d33] = (GSMBChapterData)0x0;
    *(uint32_t *)(self + 0x1d34) = 0;
    self[0x1d38] = (GSMBChapterData)0x0;
    self[0x1d39] = (GSMBChapterData)0x0;
    self[0x1d3a] = (GSMBChapterData)0x0;
    self[0x1d3b] = (GSMBChapterData)0x0;
    *(uint16_t *)(self + 0x1d3c) = 0;
    self[0x1d3e] = (GSMBChapterData)0x0;
    self[0x1d3f] = (GSMBChapterData)0x0;
    *(uint32_t *)(self + 0x1d40) = 0;
    self[0x1d44] = (GSMBChapterData)0x0;
    self[0x1d45] = (GSMBChapterData)0x0;
    self[0x1d46] = (GSMBChapterData)0x0;
    self[0x1d47] = (GSMBChapterData)0x0;
    *(uint16_t *)(self + 0x1d48) = 0;
    self[0x1d4a] = (GSMBChapterData)0x0;
    self[0x1d4b] = (GSMBChapterData)0x0;
    *(uint32_t *)(self + 0x1d4c) = 0;
    self[0x1d50] = (GSMBChapterData)0x0;
    self[0x1d51] = (GSMBChapterData)0x0;
    self[0x1d52] = (GSMBChapterData)0x0;
    self[0x1d53] = (GSMBChapterData)0x0;
    *(uint16_t *)(self + 0x1d54) = 0;
    self[0x1d56] = (GSMBChapterData)0x0;
    self[0x1d57] = (GSMBChapterData)0x0;
    *(uint32_t *)(self + 0x1d58) = 0;
    self[0x1d5c] = (GSMBChapterData)0x0;
    self[0x1d5d] = (GSMBChapterData)0x0;
    self[0x1d5e] = (GSMBChapterData)0x0;
    self[0x1d5f] = (GSMBChapterData)0x0;
    *(uint16_t *)(self + 0x1d60) = 0;
    self[0x1d62] = (GSMBChapterData)0x0;
    self[0x1d63] = (GSMBChapterData)0x0;
    *(uint32_t *)(self + 0x1d64) = 0;
    iVar4 = System_IsTrialMode();
    if (iVar4 == 1) {
      *(uint *)(self + 0x1d6c) = *(uint *)(self + 0x1d6c) | 0x80;
    }
    else {
      *(uint *)(self + 0x1d6c) = *(uint *)(self + 0x1d6c) | 0x101;
    }
    *(uint *)(self + 0x1d68) = *(uint *)(self + 0x1d68) | 1;
    uVar11 = 0;
  }
  else {
    uVar11 = 0;
  }
LAB_00498bdd:
  if ((allocator *)(local_98[0] + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage) {
    LOCK();
    piVar1 = (int *)(local_98[0] + -8);
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 < 1) {
      std__string_Rep_M_destroy((allocator *)(local_98[0] + -0x18));
    }
  }
  return uVar11;
LAB_0049a37a:
  lVar7 = (long)((float)iVar4 * _DAT_005c2068 /* R:0.23980815708637238f */);
  if ((float)lVar7 < (float)iVar4 * _DAT_005c2068 /* R:0.23980815708637238f */) {
    lVar7 = lVar7 + 1;
  }
  if (99 < (int)lVar7) {
    *(uint *)(self + 0x1d68) = *(uint *)(self + 0x1d68) | 0x80;
  }
  ChapterAchievementCheck(self,(SMBLevelData *)0x0);
  uVar5 = *(uint *)(self + 0x1d68);
  if ((uVar5 & 0x800) != 0) {
    local_c4 = 0x1d;
    local_c8 = 1;
    pUVar12 = (UserProfile *)TPlayer__GetProfile((TPlayer *)Players__Player);
    Achievements__AwardAchievement(pUVar12,(AchievementAward *)&local_c8);
    uVar5 = *(uint *)(self + 0x1d68);
  }
  if ((uVar5 & 0x1000000) != 0) {
    local_c4 = 0x1f;
    local_c8 = 1;
    pUVar12 = (UserProfile *)TPlayer__GetProfile((TPlayer *)Players__Player);
    Achievements__AwardAchievement(pUVar12,(AchievementAward *)&local_c8);
    uVar5 = *(uint *)(self + 0x1d68);
  }
  if ((uVar5 & 0x10000) != 0) {
    local_c4 = 0x20;
    local_c8 = 1;
    pUVar12 = (UserProfile *)TPlayer__GetProfile((TPlayer *)Players__Player);
    Achievements__AwardAchievement(pUVar12,(AchievementAward *)&local_c8);
    uVar5 = *(uint *)(self + 0x1d68);
  }
  if ((uVar5 & 0x40000) != 0) {
    local_c4 = 0x1e;
    local_c8 = 1;
    pUVar12 = (UserProfile *)TPlayer__GetProfile((TPlayer *)Players__Player);
    Achievements__AwardAchievement(pUVar12,(AchievementAward *)&local_c8);
    uVar5 = *(uint *)(self + 0x1d68);
  }
  if ((uVar5 & 0x400000) != 0) {
    local_c4 = 0x21;
    local_c8 = 1;
    pUVar12 = (UserProfile *)TPlayer__GetProfile((TPlayer *)Players__Player);
    Achievements__AwardAchievement(pUVar12,(AchievementAward *)&local_c8);
  }
  if ((allocator *)(local_78[0] + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage) {
    LOCK();
    piVar1 = (int *)(local_78[0] + -8);
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 < 1) {
      std__string_Rep_M_destroy((allocator *)(local_78[0] + -0x18));
    }
  }
  if ((allocator *)(local_88[0] + -0x18) == (allocator *)&std__string_Rep_S_empty_rep_storage) {
    uVar11 = 1;
  }
  else {
    LOCK();
    piVar1 = (int *)(local_88[0] + -8);
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    uVar11 = 1;
    if (iVar4 < 1) {
      std__string_Rep_M_destroy((allocator *)(local_88[0] + -0x18));
    }
  }
  goto LAB_00498bdd;
}

/* ======================================================================
 * GSMBChapterData__LoadData  (Ghidra `LoadData` @ 0049ab20)
 * Signature: uint8_t __thiscall LoadData(GSMBChapterData * self, tagChapterName arg1)
 * Class: GSMBChapterData
 * Calls: `SMBChapter__GetTotalNumberOfLevels`, `System_IsTrialMode`, `TPlayer__GetProfile`, `free`, `malloc`, `memcpy`
 * Called by: `EnterTitleMenu`, `SMBChapter__LoadChapter`
 */
/* GSMBChapterData__LoadData(tagChapterName) */

void __thiscall GSMBChapterData__LoadData(GSMBChapterData *self,uint32_t arg2)

{
  int iVar1;
  void *pvVar2;
  long lVar3;
  ushort uVar4;
  short sVar5;
  int iVar6;
  void *pvVar7;
  void *pvVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  GSMBChapterData *pGVar13;
  ushort uVar14;
  ushort *puVar15;
  long lVar16;
  int iVar17;
  uint uVar18;
  uint64_t *puVar19;
  uint uVar20;
  
  iVar6 = 0;
  *(uint32_t *)(self + 0x1ce0) = arg2;
  lVar3 = SuperMeatBoy;
  if (*(int *)(self + 0xa0) == 0) {
    iVar17 = *(int *)(self + 0x30);
    *(uint16_t *)(self + 0x28) = 0;
  }
  else {
    iVar6 = SMBChapter__GetTotalNumberOfLevels((SMBChapter *)(SuperMeatBoy + 0x90));
    iVar17 = *(int *)(self + 0x30);
    *(uint16_t *)(self + 0x28) = 0;
  }
  if ((iVar17 == 1) && (uVar4 = *(ushort *)(self + 0x2a), uVar4 != 0)) {
    lVar11 = 0;
    do {
      *(uint16_t *)(*(long *)(self + 0x40) + lVar11) = 0xffff;
      lVar11 = lVar11 + 2;
    } while (lVar11 != (ulong)(uVar4 - 1 & 0xffff) * 2 + 2);
  }
  if (*(int *)(self + 0xa0) == 0) {
    plVar10 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
    iVar17 = (**(code **)(*plVar10 + 0x20))(plVar10);
    if ((iVar17 != 1) || (iVar17 = System_IsTrialMode(), iVar17 != 0)) {
      *(uint32_t *)(self + 0x1cec) = 1;
      iVar17 = System_IsTrialMode();
      if (iVar17 == 1) {
        *(uint *)(self + 0x1d6c) = *(uint *)(self + 0x1d6c) | 0x80;
      }
      else {
        *(uint *)(self + 0x1d6c) = *(uint *)(self + 0x1d6c) | 0x101;
      }
      *(uint *)(self + 0x1d68) = *(uint *)(self + 0x1d68) | 1;
      self[0x1cf0] = (GSMBChapterData)0x0;
      self[0x1cf1] = (GSMBChapterData)0x0;
      self[0x1cf2] = (GSMBChapterData)0x0;
      self[0x1cf3] = (GSMBChapterData)0x0;
      *(uint16_t *)(self + 0x1cf4) = 0;
      self[0x1cf6] = (GSMBChapterData)0x0;
      self[0x1cf7] = (GSMBChapterData)0x0;
      *(uint32_t *)(self + 0x1cf8) = 0;
      self[0x1cfc] = (GSMBChapterData)0x0;
      self[0x1cfd] = (GSMBChapterData)0x0;
      self[0x1cfe] = (GSMBChapterData)0x0;
      self[0x1cff] = (GSMBChapterData)0x0;
      *(uint16_t *)(self + 0x1d00) = 0;
      self[0x1d02] = (GSMBChapterData)0x0;
      self[0x1d03] = (GSMBChapterData)0x0;
      *(uint32_t *)(self + 0x1d04) = 0;
      self[0x1d08] = (GSMBChapterData)0x0;
      self[0x1d09] = (GSMBChapterData)0x0;
      self[0x1d0a] = (GSMBChapterData)0x0;
      self[0x1d0b] = (GSMBChapterData)0x0;
      *(uint16_t *)(self + 0x1d0c) = 0;
      self[0x1d0e] = (GSMBChapterData)0x0;
      self[0x1d0f] = (GSMBChapterData)0x0;
      *(uint32_t *)(self + 0x1d10) = 0;
      self[0x1d14] = (GSMBChapterData)0x0;
      self[0x1d15] = (GSMBChapterData)0x0;
      self[0x1d16] = (GSMBChapterData)0x0;
      self[0x1d17] = (GSMBChapterData)0x0;
      *(uint16_t *)(self + 0x1d18) = 0;
      self[0x1d1a] = (GSMBChapterData)0x0;
      self[0x1d1b] = (GSMBChapterData)0x0;
      *(uint32_t *)(self + 0x1d1c) = 0;
      self[0x1d20] = (GSMBChapterData)0x0;
      self[0x1d21] = (GSMBChapterData)0x0;
      self[0x1d22] = (GSMBChapterData)0x0;
      self[0x1d23] = (GSMBChapterData)0x0;
      *(uint16_t *)(self + 0x1d24) = 0;
      self[0x1d26] = (GSMBChapterData)0x0;
      self[0x1d27] = (GSMBChapterData)0x0;
      *(uint32_t *)(self + 0x1d28) = 0;
      self[0x1d2c] = (GSMBChapterData)0x0;
      self[0x1d2d] = (GSMBChapterData)0x0;
      self[0x1d2e] = (GSMBChapterData)0x0;
      self[0x1d2f] = (GSMBChapterData)0x0;
      *(uint16_t *)(self + 0x1d30) = 0;
      self[0x1d32] = (GSMBChapterData)0x0;
      self[0x1d33] = (GSMBChapterData)0x0;
      *(uint32_t *)(self + 0x1d34) = 0;
      self[0x1d38] = (GSMBChapterData)0x0;
      self[0x1d39] = (GSMBChapterData)0x0;
      self[0x1d3a] = (GSMBChapterData)0x0;
      self[0x1d3b] = (GSMBChapterData)0x0;
      *(uint16_t *)(self + 0x1d3c) = 0;
      self[0x1d3e] = (GSMBChapterData)0x0;
      self[0x1d3f] = (GSMBChapterData)0x0;
      *(uint32_t *)(self + 0x1d40) = 0;
      self[0x1d44] = (GSMBChapterData)0x0;
      self[0x1d45] = (GSMBChapterData)0x0;
      self[0x1d46] = (GSMBChapterData)0x0;
      self[0x1d47] = (GSMBChapterData)0x0;
      *(uint16_t *)(self + 0x1d48) = 0;
      self[0x1d4a] = (GSMBChapterData)0x0;
      self[0x1d4b] = (GSMBChapterData)0x0;
      *(uint32_t *)(self + 0x1d4c) = 0;
      self[0x1d50] = (GSMBChapterData)0x0;
      self[0x1d51] = (GSMBChapterData)0x0;
      *(int *)(self + 0x1cc4) = iVar6;
      self[0x1d52] = (GSMBChapterData)0x0;
      self[0x1d53] = (GSMBChapterData)0x0;
      *(uint16_t *)(self + 0x1d54) = 0;
      self[0x1d56] = (GSMBChapterData)0x0;
      self[0x1d57] = (GSMBChapterData)0x0;
      *(uint32_t *)(self + 0x1d58) = 0;
      self[0x1d5c] = (GSMBChapterData)0x0;
      self[0x1d5d] = (GSMBChapterData)0x0;
      self[0x1d5e] = (GSMBChapterData)0x0;
      self[0x1d5f] = (GSMBChapterData)0x0;
      *(uint16_t *)(self + 0x1d60) = 0;
      self[0x1d62] = (GSMBChapterData)0x0;
      self[0x1d63] = (GSMBChapterData)0x0;
      *(uint32_t *)(self + 0x1d64) = 0;
      *(uint32_t *)(self + 0xa0) = 1;
      return;
    }
    ReloadData(self);
    *(uint32_t *)(self + 0x1cec) = 0;
    *(uint32_t *)(self + 0xa0) = 1;
  }
  else {
    *(uint16_t *)(self + 0x28) = 0;
    if ((*(int *)(self + 0x30) == 1) && (uVar4 = *(ushort *)(self + 0x2a), uVar4 != 0)) {
      lVar11 = 0;
      do {
        *(uint16_t *)(*(long *)(self + 0x40) + lVar11) = 0xffff;
        lVar11 = lVar11 + 2;
      } while (lVar11 != (ulong)(uVar4 - 1 & 0xffff) * 2 + 2);
    }
    if (0 < iVar6) {
      iVar17 = 0;
      do {
        if (*(int *)(self + 0x48) == -0x5eef3582) {
          uVar4 = *(ushort *)(self + 0x28);
          if (uVar4 < *(ushort *)(self + 0x2a)) goto LAB_0049ac1b;
          uVar4 = *(ushort *)(self + 0x2a) + *(short *)(self + 0x34);
          uVar12 = (ulong)(byte)self[0x2c];
          pvVar7 = (void *)0x0;
          pvVar2 = *(void **)(self + 0x38);
          *(ushort *)(self + 0x2a) = uVar4;
          uVar9 = (ulong)uVar4 * 8;
          pvVar8 = malloc(uVar12 + 0x10 + uVar9);
          if (pvVar8 != (void *)0x0) {
            pvVar7 = (void *)((long)pvVar8 + 0x10U +
                             (uVar12 - ((long)pvVar8 + 0x10U) % uVar12) % uVar12);
            *(ulong *)((long)pvVar7 + -0x10) = uVar9;
            *(void **)((long)pvVar7 + -8) = pvVar8;
            if (pvVar2 != (void *)0x0) {
              uVar12 = *(ulong *)((long)pvVar2 + -0x10);
              if (uVar9 <= *(ulong *)((long)pvVar2 + -0x10)) {
                uVar12 = uVar9;
              }
              memcpy(pvVar7,pvVar2,uVar12);
              free(*(void **)((long)pvVar2 + -8));
            }
          }
          pvVar2 = *(void **)(self + 0x40);
          *(void **)(self + 0x38) = pvVar7;
          if (pvVar2 != (void *)0x0) {
            uVar14 = *(ushort *)(self + 0x2a);
            uVar12 = (ulong)(byte)self[0x2c];
            pvVar7 = (void *)0x0;
            uVar9 = (ulong)uVar14 * 2;
            pvVar8 = malloc(uVar12 + 0x10 + uVar9);
            if (pvVar8 != (void *)0x0) {
              pvVar7 = (void *)((long)pvVar8 + 0x10U +
                               (uVar12 - ((long)pvVar8 + 0x10U) % uVar12) % uVar12);
              *(ulong *)((long)pvVar7 + -0x10) = uVar9;
              *(void **)((long)pvVar7 + -8) = pvVar8;
              uVar12 = *(ulong *)((long)pvVar2 + -0x10);
              if (uVar9 <= *(ulong *)((long)pvVar2 + -0x10)) {
                uVar12 = uVar9;
              }
              memcpy(pvVar7,pvVar2,uVar12);
              free(*(void **)((long)pvVar2 + -8));
              uVar14 = *(ushort *)(self + 0x2a);
            }
            uVar4 = *(ushort *)(self + 0x28);
            *(void **)(self + 0x40) = pvVar7;
            if (uVar14 <= uVar4) goto LAB_0049ac1b;
            while( true ) {
              uVar9 = (ulong)uVar4;
              uVar4 = uVar4 + 1;
              *(uint16_t *)((long)pvVar7 + uVar9 * 2) = 0xffff;
              if (uVar14 <= uVar4) break;
              pvVar7 = *(void **)(self + 0x40);
            }
          }
          iVar1 = *(int *)(self + 0x30);
          uVar4 = *(ushort *)(self + 0x28);
        }
        else {
          uVar9 = (ulong)(byte)self[0x2c];
          *(uint32_t *)(self + 0x30) = 0;
          pvVar7 = malloc(uVar9 + 0x38);
          puVar19 = (uint64_t *)0x0;
          if (pvVar7 != (void *)0x0) {
            puVar19 = (uint64_t *)
                      ((long)pvVar7 + 0x10U + (uVar9 - ((long)pvVar7 + 0x10U) % uVar9) % uVar9);
            puVar19[-2] = 0x28;
            puVar19[-1] = pvVar7;
          }
          *(uint64_t **)(self + 0x38) = puVar19;
          *puVar19 = 0;
          puVar19[1] = 0;
          puVar19[2] = 0;
          puVar19[3] = 0;
          puVar19[4] = 0;
          uVar4 = 0;
          *(uint16_t *)(self + 0x28) = 0;
          *(uint16_t *)(self + 0x2a) = 5;
          *(uint32_t *)(self + 0x48) = 0xa110ca7e;
          *(uint16_t *)(self + 0x34) = 5;
LAB_0049ac1b:
          iVar1 = *(int *)(self + 0x30);
        }
        if ((iVar1 == 1) && (*(short *)(self + 0x2a) != 0)) {
          puVar15 = *(ushort **)(self + 0x40);
          sVar5 = 1;
          uVar14 = *puVar15;
          while (uVar14 != 0xffff) {
            puVar15 = puVar15 + 1;
            if (sVar5 == *(short *)(self + 0x2a)) goto LAB_0049ac25;
            sVar5 = sVar5 + 1;
            uVar14 = *puVar15;
          }
          *puVar15 = uVar4;
          uVar4 = *(ushort *)(self + 0x28);
        }
LAB_0049ac25:
        iVar17 = iVar17 + 1;
        *(uint64_t *)(*(long *)(self + 0x38) + (ulong)uVar4 * 8) = 0;
        *(short *)(self + 0x28) = *(short *)(self + 0x28) + 1;
      } while (iVar17 != iVar6);
    }
    FillLevelDataArrays(self);
    *(uint32_t *)(self + 0x1ccc) = 0;
    iVar6 = *(int *)(lVar3 + 0x94);
    iVar17 = *(int *)(lVar3 + 0x98);
    lVar11 = *(long *)(self + 0x38);
    *(long *)(self + 0x50) = lVar11;
    *(int *)(self + 0x1cc8) = iVar6 + iVar17;
    *(ulong *)(self + 0x58) = lVar11 + (ulong)*(ushort *)(lVar3 + 0x94) * 8;
    if (*(short *)(lVar3 + 0x268) != 0) {
      uVar18 = *(int *)(lVar3 + 0x94) + *(int *)(lVar3 + 0x98);
      lVar16 = 0;
      iVar6 = 0;
      pGVar13 = self;
      do {
        iVar6 = iVar6 + 1;
        *(ulong *)(pGVar13 + 0x60) = lVar11 + (ulong)(uVar18 & 0xffff) * 8;
        pGVar13 = pGVar13 + 8;
        puVar15 = (ushort *)(*(long *)(lVar3 + 0x278) + 0x90 + lVar16);
        lVar16 = lVar16 + 0xb8;
        uVar20 = (uint)*puVar15;
        *(uint *)(self + 0x1ccc) = *(int *)(self + 0x1ccc) + uVar20;
        uVar18 = uVar18 + uVar20;
      } while (iVar6 < (int)(uint)*(ushort *)(lVar3 + 0x268));
    }
  }
  return;
}

/* ======================================================================
 * GSMBChapterData__SaveWarpzoneStats  (Ghidra `SaveWarpzoneStats` @ 0049b260)
 * Signature: uint8_t __thiscall SaveWarpzoneStats(GSMBChapterData * self)
 * Class: GSMBChapterData
 * Calls: `SaveData`, `System_IsTrialMode`, `TPlayer__GetProfile`, `WriteToOverallLeaderboard`
 * Called by: `SMBChapter__LoadNextLevel`, `TransitionToNextLevel`
 */
/* GSMBChapterData__SaveWarpzoneStats() */

void __thiscall GSMBChapterData__SaveWarpzoneStats(GSMBChapterData *self)

{
  int iVar1;
  GSMBChapterData GVar2;
  UserProfile *pUVar3;
  GSMBChapterData *pGVar4;
  int iVar5;
  long *plVar6;
  uint32_t local_38;
  int local_34;
  
  if (*(int *)(self + 0x1ce4) == 6) {
    iVar5 = *(int *)(self + 0x1ce0);
    *(uint32_t *)(self + 0x1f10) = 0;
    local_38 = 1;
    *(ushort *)(self + (long)iVar5 * 0xc + 0x1cf4) =
         *(ushort *)(self + (long)iVar5 * 0xc + 0x1cf4) | 0x20;
    if (iVar5 == 2) {
      local_34 = 0x23;
    }
    else if (iVar5 == 3) {
      local_34 = 0x24;
    }
    else if (iVar5 == 4) {
      local_34 = 0x25;
    }
    else if (iVar5 == 5) {
      local_34 = 0x26;
    }
    else {
      local_34 = (uint)(iVar5 == 6) * 5 + 0x22;
    }
    pUVar3 = (UserProfile *)TPlayer__GetProfile((TPlayer *)Players__Player);
    Achievements__AwardAchievement(pUVar3,(AchievementAward *)&local_38);
    iVar5 = System_IsTrialMode();
    if (iVar5 == 0) {
      SaveData((int)self);
    }
    ChapterAchievementCheck(self,(SMBLevelData *)0x0);
  }
  else {
    switch(*(int *)(self + 0x1ce4)) {
    default:
      plVar6 = *(long **)(self + 0x50);
      break;
    case 1:
      plVar6 = *(long **)(self + 0x58);
      break;
    case 2:
      plVar6 = *(long **)(self + 0x60);
      break;
    case 3:
      plVar6 = *(long **)(self + 0x68);
      break;
    case 4:
      plVar6 = *(long **)(self + 0x70);
      break;
    case 5:
      plVar6 = *(long **)(self + 0x78);
      break;
    case 6:
      plVar6 = *(long **)(self + 0x80);
      break;
    case 7:
      plVar6 = *(long **)(self + 0x88);
      break;
    case 8:
      plVar6 = *(long **)(self + 0x90);
      break;
    case 9:
      plVar6 = *(long **)(self + 0x98);
    }
    if (*(int *)(self + 0x1f10) == 1) {
      self[(long)*(int *)(self + 0x1ce0) * 0xc + 0x1cf3] =
           (GSMBChapterData)((char)self[(long)*(int *)(self + 0x1ce0) * 0xc + 0x1cf3] + '\x03');
      *(uint *)(*plVar6 + 4) = *(uint *)(*plVar6 + 4) | 2;
      *(uint32_t *)*plVar6 = 0x40a00000;
      *(uint *)(plVar6[1] + 4) = *(uint *)(plVar6[1] + 4) | 2;
      *(uint32_t *)plVar6[1] = 0x40a00000;
      *(uint *)(plVar6[2] + 4) = *(uint *)(plVar6[2] + 4) | 2;
      *(uint32_t *)plVar6[2] = 0x40a00000;
    }
    GVar2 = self[0x1cd4];
    if (GVar2 != (GSMBChapterData)0x0) {
      iVar5 = 0;
      pGVar4 = self;
      do {
        iVar1 = *(int *)(pGVar4 + 0x1cd8);
        if (-1 < iVar1) {
          self[(long)*(int *)(self + 0x1ce0) * 0xc + 0x1cf2] =
               (GSMBChapterData)((char)self[(long)*(int *)(self + 0x1ce0) * 0xc + 0x1cf2] + '\x01');
          *(uint *)(plVar6[iVar1] + 4) = *(uint *)(plVar6[iVar1] + 4) | 1;
          *(uint32_t *)(pGVar4 + 0x1cd8) = 0xffffffff;
          AwardBandageGet(self,0);
          GVar2 = self[0x1cd4];
        }
        iVar5 = iVar5 + 1;
        pGVar4 = pGVar4 + 4;
      } while (iVar5 < (int)(uint)(byte)GVar2);
    }
    *(uint32_t *)(self + 0x1f10) = 0;
    self[0x1cd4] = (GSMBChapterData)0x0;
    *(uint32_t *)(self + 0x1cd8) = 0xffffffff;
    *(uint32_t *)(self + 0x1cdc) = 0xffffffff;
    ChapterAchievementCheck(self,(SMBLevelData *)0x0);
    iVar5 = System_IsTrialMode();
    if ((iVar5 != 1) && (*(int *)(SuperMeatBoy + 0x290) != 9)) {
      WriteToOverallLeaderboard();
    }
    iVar5 = System_IsTrialMode();
    if (iVar5 == 0) {
      SaveData((int)self);
    }
  }
  return;
}

/* ======================================================================
 * GSMBChapterData__SaveLevelData  (Ghidra `SaveLevelData` @ 0049b550)
 * Signature: uint8_t __thiscall SaveLevelData(GSMBChapterData * self, SMBLevelData * arg1)
 * Class: GSMBChapterData
 * Calls: `GMeatHUD__AddUnlockScreen`, `GSMBMenu__AddChapterMessage`, `GSMBMenu__ShowBossUnlock`, `GetLocalizedText`, `GetRandomINT`, `SaveData`, `System_IsTrialMode`, `WriteToOverallLeaderboard`
 * Called by: `GSuperMeatBoy__BeatLevel`, `SMBChapter__ActivateWarpZone`, `SMBChapter__ActivateWarpZoneFromMenu`
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GSMBChapterData__SaveLevelData(SMBLevelData&) */

void __thiscall GSMBChapterData__SaveLevelData(GSMBChapterData *self,SMBLevelData *arg1)

{
  uint *puVar1;
  float fVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  wchar_t *pwVar6;
  GSMBChapterData GVar7;
  uint uVar8;
  long *plVar9;
  long lVar10;
  SMBLevelData *pSVar11;
  long lVar12;
  bool bVar13;
  bool bVar14;
  float fVar15;
  float fVar16;
  
  if (*(int *)(arg1 + 8) == 7) {
    return;
  }
  if (*(int *)(arg1 + 8) == 0xe) {
    return;
  }
  if (*(int *)(self + 0x1ce0) == 9) {
    return;
  }
  uVar5 = *(uint *)(self + 0x1ce4);
  switch(uVar5) {
  default:
    lVar12 = *(long *)(self + 0x50);
    break;
  case 1:
    lVar12 = *(long *)(self + 0x58);
    break;
  case 2:
    lVar12 = *(long *)(self + 0x60);
    break;
  case 3:
    lVar12 = *(long *)(self + 0x68);
    break;
  case 4:
    lVar12 = *(long *)(self + 0x70);
    break;
  case 5:
    lVar12 = *(long *)(self + 0x78);
    break;
  case 6:
    lVar12 = *(long *)(self + 0x80);
    break;
  case 7:
    lVar12 = *(long *)(self + 0x88);
    break;
  case 8:
    lVar12 = *(long *)(self + 0x90);
    break;
  case 9:
    lVar12 = *(long *)(self + 0x98);
  }
  fVar15 = *(float *)arg1;
  plVar9 = (long *)(lVar12 + (long)*(int *)(self + 0x1ce8) * 8);
  pSVar11 = (SMBLevelData *)*plVar9;
  bVar13 = fVar15 < *(float *)pSVar11;
  if (bVar13) {
    *(float *)pSVar11 = fVar15;
    fVar15 = *(float *)arg1;
    plVar9 = (long *)(lVar12 + (long)*(int *)(self + 0x1ce8) * 8);
    uVar5 = *(uint *)(self + 0x1ce4);
    pSVar11 = (SMBLevelData *)*plVar9;
  }
  fVar16 = DAT_005c17f0 /* R:100000000.0f */;
  if ((fVar15 < DAT_005c17f0 /* R:100000000.0f */) && (((byte)pSVar11[4] & 2) == 0)) {
    if (uVar5 == 1) {
      if (*(int *)(self + 0x1ce0) == 6) {
        GVar7 = (GSMBChapterData)((char)self[0x1d39] + 1);
        if ((0x54 < (uint)(byte)self[0x1d45] +
                    (uint)(byte)self[0x1d21] +
                    (uint)(byte)self[0x1d15] +
                    (uint)(byte)self[0x1cfd] + (uint)(byte)self[0x1cf1] + (uint)(byte)self[0x1d09] +
                    (uint)(byte)self[0x1d2d] + (uint)(byte)self[0x1d39] + (uint)(byte)self[0x1d51])
           && (((byte)self[0x1d3c] & 4) != 0)) {
          self[0x1d39] = GVar7;
          *(uint *)(*plVar9 + 4) = *(uint *)(*plVar9 + 4) | 2;
          goto LAB_0049bbc6;
        }
        self[0x1d39] = GVar7;
        *(uint *)(*plVar9 + 4) = *(uint *)(*plVar9 + 4) | 2;
      }
      else {
        self[(long)*(int *)(self + 0x1ce0) * 0xc + 0x1cf1] =
             (GSMBChapterData)((char)self[(long)*(int *)(self + 0x1ce0) * 0xc + 0x1cf1] + '\x01');
        *(uint *)(*plVar9 + 4) = *(uint *)(*plVar9 + 4) | 2;
      }
      if ((((*(int *)(self + 0x1ce0) != 6) ||
           ((uint)(byte)self[0x1d45] +
            (uint)(byte)self[0x1cf1] + (uint)(byte)self[0x1cfd] + (uint)(byte)self[0x1d09] +
            (uint)(byte)self[0x1d15] + (uint)(byte)self[0x1d21] + (uint)(byte)self[0x1d2d] +
            (uint)(byte)self[0x1d39] + (uint)(byte)self[0x1d51] < 0x55)) ||
          (((byte)self[0x1d3c] & 4) == 0)) || ((byte)self[0x1d38] < 5)) goto LAB_0049bbc6;
      if (*(int *)(self + 0x1ce4) == 1) {
        GSMBMenu__ShowBossUnlock();
      }
      bVar13 = true;
      pwVar6 = (wchar_t *)GetLocalizedText(0x4e);
      GSMBMenu__AddChapterMessage(SMBMenu,pwVar6);
      fVar15 = *(float *)arg1;
      pSVar11 = *(SMBLevelData **)(lVar12 + (long)*(int *)(self + 0x1ce8) * 8);
      uVar5 = *(uint *)(self + 0x1ce4);
    }
    else if (uVar5 == 0) {
      iVar4 = *(int *)(self + 0x1ce0);
      if ((iVar4 == 7) || (iVar4 == 9)) {
        self[(long)iVar4 * 0xc + 0x1cf0] =
             (GSMBChapterData)((char)self[(long)iVar4 * 0xc + 0x1cf0] + '\x01');
      }
      else {
        if (iVar4 == 6) {
          lVar10 = 6;
          bVar13 = 4 < (byte)self[0x1d38];
        }
        else {
          lVar10 = (long)iVar4;
          bVar13 = 0x10 < (byte)self[lVar10 * 0xc + 0x1cf0];
        }
        GVar7 = (GSMBChapterData)((char)self[lVar10 * 0xc + 0x1cf0] + 1);
        self[lVar10 * 0xc + 0x1cf0] = GVar7;
        if (!bVar13) {
          bVar13 = 0x10 < (byte)GVar7;
          if (iVar4 == 6) {
            bVar13 = 4 < (byte)GVar7;
          }
          if (bVar13) {
            GSMBMenu__ShowBossUnlock();
            pwVar6 = (wchar_t *)GetLocalizedText(0x4e);
            GSMBMenu__AddChapterMessage(SMBMenu,pwVar6);
          }
        }
      }
      puVar1 = (uint *)(*(long *)(lVar12 + (long)*(int *)(self + 0x1ce8) * 8) + 4);
      *puVar1 = *puVar1 | 2;
LAB_0049bbc6:
      fVar15 = *(float *)arg1;
      bVar13 = true;
      pSVar11 = *(SMBLevelData **)(lVar12 + (long)*(int *)(self + 0x1ce8) * 8);
      uVar5 = *(uint *)(self + 0x1ce4);
    }
  }
  fVar2 = *(float *)pSVar11;
  if (fVar15 < *(float *)pSVar11) {
    bVar13 = true;
  }
  if (uVar5 - 2 < 4) {
    if (((byte)pSVar11[4] & 2) == 0) {
      *(uint32_t *)(self + 0x1f10) = 1;
    }
    bVar13 = false;
    bVar14 = false;
LAB_0049b658:
    uVar5 = *(uint *)(arg1 + 4);
    if ((uVar5 & 1) == 0) {
      uVar8 = *(uint *)(*(long *)(lVar12 + (long)*(int *)(self + 0x1ce8) * 8) + 4);
    }
    else {
      uVar5 = uVar5 & 0xfffffffe;
      *(uint *)(arg1 + 4) = uVar5;
      plVar9 = (long *)(lVar12 + (long)*(int *)(self + 0x1ce8) * 8);
      uVar8 = *(uint *)(*plVar9 + 4);
      if ((uVar8 & 1) == 0) {
        GVar7 = self[0x1cd4];
        *(int *)(self + (ulong)(byte)GVar7 * 4 + 0x1cd8) = *(int *)(self + 0x1ce8);
        self[0x1cd4] = (GSMBChapterData)((char)GVar7 + 1);
        uVar5 = *(uint *)(arg1 + 4);
        uVar8 = *(uint *)(*plVar9 + 4);
      }
    }
    if (uVar5 == uVar8) goto LAB_0049b836;
LAB_0049b67a:
    if (uVar5 == 0) goto LAB_0049b6cd;
    if (((uVar8 & 1) == 0) && ((uVar5 & 1) != 0)) {
      self[(long)*(int *)(self + 0x1ce0) * 0xc + 0x1cf2] =
           (GSMBChapterData)((char)self[(long)*(int *)(self + 0x1ce0) * 0xc + 0x1cf2] + '\x01');
      AwardBandageGet(self,0);
      puVar1 = (uint *)(*(long *)(lVar12 + (long)*(int *)(self + 0x1ce8) * 8) + 4);
      *puVar1 = *puVar1 | 1;
      uVar8 = *(uint *)(*(long *)(lVar12 + (long)*(int *)(self + 0x1ce8) * 8) + 4);
      uVar5 = *(uint *)(arg1 + 4);
    }
    if ((uVar8 & 8) == 0) {
      uVar8 = 0;
      if ((uVar5 & 8) != 0) {
        self[(long)*(int *)(self + 0x1ce0) * 0xc + 0x1cf6] =
             (GSMBChapterData)((char)self[(long)*(int *)(self + 0x1ce0) * 0xc + 0x1cf6] + '\x01');
        pwVar6 = (wchar_t *)GetLocalizedText(0x4f);
        GSMBMenu__AddChapterMessage(SMBMenu,pwVar6);
        puVar1 = (uint *)(*(long *)(lVar12 + (long)*(int *)(self + 0x1ce8) * 8) + 4);
        *puVar1 = *puVar1 | 8;
        uVar8 = *(uint *)(arg1 + 4) & 8;
      }
    }
    else {
      uVar8 = uVar5 & 8;
    }
    bVar13 = *(int *)(self + 0x1f10) == 0;
  }
  else {
    if (fVar15 < fVar16) {
      ChapterAchievementCheck(self,pSVar11);
      uVar5 = *(uint *)(self + 0x1ce4);
    }
    if (1 < uVar5) {
      bVar14 = true;
      goto LAB_0049b658;
    }
    uVar5 = *(uint *)(arg1 + 4);
    bVar14 = true;
    uVar8 = *(uint *)(*(long *)(lVar12 + (long)*(int *)(self + 0x1ce8) * 8) + 4);
    if (uVar5 != uVar8) goto LAB_0049b67a;
LAB_0049b836:
    uVar8 = uVar5 & 8;
  }
  if (uVar8 != 0) {
    puVar1 = (uint *)(*(long *)(lVar12 + (long)*(int *)(self + 0x1ce8) * 8) + 4);
    *puVar1 = *puVar1 | 8;
    bVar13 = *(int *)(self + 0x1f10) == 0;
  }
LAB_0049b6cd:
  if ((bVar14) && (iVar4 = System_IsTrialMode(), iVar4 == 0)) {
    bVar14 = (*(ushort *)(self + 0x1d00) & 0x20) != 0;
    uVar5 = (uint)bVar14;
    if ((*(ushort *)(self + 0x1d0c) & 0x20) != 0) {
      uVar5 = bVar14 + 1;
    }
    uVar3 = *(ushort *)(self + 0x1d3c);
    fVar16 = (float)(int)(((uint)(byte)self[0x1d46] +
                          (uint)(byte)self[0x1d47] +
                          ((((uint)(byte)self[0x1d3a] +
                            (uint)(byte)self[0x1d3b] +
                            (((uint)(byte)self[0x1d2e] +
                             (uint)(byte)self[0x1d2f] +
                             (((uint)(byte)self[0x1d22] +
                              (uint)(byte)self[0x1d23] +
                              (((uint)(byte)self[0x1d16] +
                               (uint)(byte)self[0x1d17] +
                               (((uint)(byte)self[0x1d0a] +
                                 (uint)(byte)self[0x1d0b] +
                                 (((uint)(byte)self[0x1cfc] + (uint)(byte)self[0x1cfd] +
                                   (uint)(byte)self[0x1cff] + (uint)(byte)self[0x1cfe]) -
                                 (uint)((*(ushort *)(self + 0x1d00) & 4) == 0)) +
                                 (uint)(byte)self[0x1d08] + (uint)(byte)self[0x1d09] + 8) -
                               (uint)((*(ushort *)(self + 0x1d0c) & 4) == 0)) +
                               (uint)(byte)self[0x1d14] + (uint)(byte)self[0x1d15]) -
                              (uint)((*(ushort *)(self + 0x1d18) & 4) == 0)) +
                              (uint)(byte)self[0x1d20] + (uint)(byte)self[0x1d21]) -
                             (uint)((*(ushort *)(self + 0x1d24) & 4) == 0)) +
                             (uint)(byte)self[0x1d2c] + (uint)(byte)self[0x1d2d]) -
                            (uint)((*(ushort *)(self + 0x1d30) & 4) == 0)) +
                            (uint)(byte)self[0x1d38] + (uint)(byte)self[0x1d39]) -
                           (uint)((uVar3 & 4) == 0)) - (uint)((uVar3 & 8) == 0)) +
                          (uint)(byte)self[0x1d44] + (uint)(byte)self[0x1d45]) -
                         (uint)((*(ushort *)(self + 0x1d48) & 4) == 0)) * _DAT_005c2068 /* R:0.23980815708637238f */;
    lVar10 = (long)fVar16;
    if ((float)lVar10 < fVar16) {
      lVar10 = lVar10 + 1;
    }
    if ((0x19 < (int)(((((((uVar5 - ((*(ushort *)(self + 0x1d18) & 0x20) == 0)) -
                          (uint)((*(ushort *)(self + 0x1d24) & 0x20) == 0)) -
                         (uint)((*(ushort *)(self + 0x1d30) & 0x20) == 0)) -
                        (uint)((uVar3 & 0x20) == 0)) + 5) -
                      (uint)((*(ushort *)(self + 0x1d48) & 0x20) == 0)) + (int)lVar10)) &&
       (iVar4 = GetRandomINT(0,2000), iVar4 == 1000)) {
      GMeatHUD__AddUnlockScreen(SMBHUD,0x12);
    }
  }
  if (bVar13) {
    if (fVar15 < fVar2) {
      *(uint32_t *)(*(long *)(lVar12 + (long)*(int *)(self + 0x1ce8) * 8) + 8) =
           *(uint32_t *)(arg1 + 8);
    }
    iVar4 = System_IsTrialMode();
    if ((iVar4 != 1) && (*(int *)(SuperMeatBoy + 0x290) != 9)) {
      WriteToOverallLeaderboard();
    }
    iVar4 = System_IsTrialMode();
    if (iVar4 == 0) {
      SaveData((int)self);
      return;
    }
  }
  return;
}
