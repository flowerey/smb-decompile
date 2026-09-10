/* src/game/classes/SMBReplay.c — 13 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "SMBReplay.h"

/* ======================================================================
 * SMBReplay__SMBReplay  (Ghidra `SMBReplay` @ 0050d980)
 * Signature: uint8_t __thiscall SMBReplay(SMBReplay * self)
 * Class: SMBReplay
 * Calls: `malloc`, `memset`
 * Called by: `FactoryBoss__FactoryBoss__00468ff0`, `FinalBoss__FinalBoss__00469560`, `GSuperMeatBoy__Initialize__00516f60`
 */
/* SMBReplay__SMBReplay() */

void __thiscall SMBReplay__SMBReplay(SMBReplay *self)

{
  SMBReplay *pSVar1;
  void *__s;
  long lVar2;
  long lVar3;
  
  pSVar1 = self + 0x48;
  *(uint32_t *)(self + 0x18) = 0;
  *(uint32_t *)(self + 0x1c) = 0;
  *(uint32_t *)(self + 0x30) = 0x10;
  *(uint32_t *)(self + 0x34) = 0;
  *(uint32_t *)(self + 0x38) = 0;
  *(uint32_t *)(self + 0x3c) = 0;
  do {
    *(uint32_t *)pSVar1 = 0;
    *(uint64_t *)(pSVar1 + 8) = 0;
    pSVar1 = pSVar1 + 0x10;
  } while (pSVar1 != self + 0x2c8);
  *(uint32_t *)(self + 0x2c8) = 1;
  __s = malloc(0xfd200);
  *(void **)(self + 0x20) = __s;
  memset(__s,0,0xfd200);
  lVar3 = *(long *)(self + 0x20);
  lVar2 = 0;
  do {
    *(long *)(self + lVar2 + 0x50) = lVar3;
    lVar2 = lVar2 + 0x10;
    lVar3 = lVar3 + 0x6540;
  } while (lVar2 != 0x280);
  return;
}

/* ======================================================================
 * SMBReplay__SMBReplay__0050da30  (Ghidra `~SMBReplay` @ 0050da30)
 * Signature: uint8_t __thiscall ~SMBReplay(SMBReplay * self)
 * Class: SMBReplay
 * Calls: `free`
 * Called by: `FactoryBoss__FactoryBoss`, `FactoryBoss__FactoryBoss__00468f70`, `FinalBoss__FinalBoss`, `FinalBoss__SetToPhaseTwo`, `GSuperMeatBoy__GSuperMeatBoy__00512120`
 */
/* SMBReplay__SMBReplay__0050da30() */

void __thiscall SMBReplay__SMBReplay__0050da30(SMBReplay *self)

{
  free(*(void **)(self + 0x20));
  return;
}

/* ======================================================================
 * SMBReplay__RegisterInput  (Ghidra `RegisterInput` @ 0050da40)
 * Signature: uint8_t __thiscall RegisterInput(SMBReplay * self, tagSMBReplayButton arg1)
 * Class: SMBReplay
 * Calls: (none)
 * Called by: `MeatBoyCharactor__Update`
 */
/* SMBReplay__RegisterInput(tagSMBReplayButton) */

void __thiscall SMBReplay__RegisterInput(SMBReplay *self,byte arg2)

{
  self[0x2cc] = (SMBReplay)((byte)self[0x2cc] & 0xfc | (arg2 | (byte)self[0x2cc]) & 3);
  return;
}

/* ======================================================================
 * SMBReplay__StartReplayFrame  (Ghidra `StartReplayFrame` @ 0050da60)
 * Signature: uint8_t __thiscall StartReplayFrame(SMBReplay * self)
 * Class: SMBReplay
 * Calls: (none)
 * Called by: `MeatBoyCharactor__Update`
 */
/* SMBReplay__StartReplayFrame() */

SMBReplay * __thiscall SMBReplay__StartReplayFrame(SMBReplay *self)

{
  ushort uVar1;
  uint uVar2;
  
  self[0x2cc] = (SMBReplay)((byte)self[0x2cc] & 0x80);
  uVar1 = *(ushort *)(self + 0x2cc);
  *(ushort *)(self + 0x2cc) = uVar1 & 0xf87f;
  self[0x2cd] = (SMBReplay)((byte)((uVar1 & 0xf87f) >> 8) & 0x87);
  uVar2 = *(uint *)(self + 0x2cc);
  *(uint *)(self + 0x2cc) = uVar2 & 0xfffc7fff;
  self[0x2ce] = (SMBReplay)((byte)((uVar2 & 0xfffc7fff) >> 0x10) & 0xe3);
  *(ushort *)(self + 0x2ce) = *(ushort *)(self + 0x2ce) & 0xfe1f;
  self[0x2cf] = (SMBReplay)0x0;
  *(uint32_t *)(self + 0x2d4) = 0;
  *(uint32_t *)(self + 0x2d0) = 0;
  return self + 0x2cc;
}

/* ======================================================================
 * SMBReplay__EndReplayFrame  (Ghidra `EndReplayFrame` @ 0050dae0)
 * Signature: uint8_t __thiscall EndReplayFrame(SMBReplay * self, int arg1)
 * Class: SMBReplay
 * Calls: `Vector2__operator_assign`
 * Called by: `MeatBoyCharactor__Update`
 */
/* SMBReplay__EndReplayFrame(int) */

void __thiscall SMBReplay__EndReplayFrame(SMBReplay *self,int arg1)

{
  uint *puVar1;
  long lVar2;
  SMBReplay SVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  
  if (*(int *)(self + ((long)*(int *)(self + 0x38) + 4) * 0x10 + 8) < 0x870) {
    if ((((4 < *(int *)(self + 0x2d8)) || (arg1 == 1)) ||
        ((*(ushort *)(self + 0x2cc) & 0x780) != 0)) ||
       (iVar6 = *(int *)(self + 0x2d8) + 1, ((byte)self[0x2cf] & 0x40) != 0)) {
      SVar3 = self[0x2cc];
      puVar1 = (uint *)(*(long *)(self + ((long)*(int *)(self + 0x38) + 4) * 0x10 + 0x10) +
                       (long)*(int *)(self + 0x18) * 0xc);
      uVar5 = *puVar1;
      *(byte *)puVar1 = (byte)uVar5 & 0xfc | (byte)SVar3 & 3;
      *(byte *)puVar1 = (byte)uVar5 & 0x80 | (byte)SVar3 & 3 | (byte)self[0x2cc] & 0x7c;
      *(ushort *)puVar1 = (ushort)*puVar1 & 0xf87f | *(ushort *)(self + 0x2cc) & 0x780;
      bVar4 = *(byte *)((long)puVar1 + 1);
      bVar7 = (byte)self[0x2cd] & 8;
      *(byte *)((long)puVar1 + 1) = bVar4 & 0xf7 | bVar7;
      bVar8 = (byte)self[0x2cd] & 0x10;
      *(byte *)((long)puVar1 + 1) = bVar4 & 0xe7 | bVar7 | bVar8;
      SVar3 = self[0x2cd];
      *(byte *)((long)puVar1 + 1) = bVar4 & 199 | bVar7 | bVar8 | (byte)SVar3 & 0x20;
      *(byte *)((long)puVar1 + 1) =
           bVar4 & 0x87 | bVar7 | bVar8 | (byte)SVar3 & 0x20 | (byte)self[0x2cd] & 0x40;
      *puVar1 = *puVar1 & 0xfffc7fff | *(uint *)(self + 0x2cc) & 0x38000;
      *(byte *)((long)puVar1 + 2) = *(byte *)((long)puVar1 + 2) & 0xe3 | (byte)self[0x2ce] & 0x1c;
      *(ushort *)((long)puVar1 + 2) =
           *(ushort *)((long)puVar1 + 2) & 0xfe1f | *(ushort *)(self + 0x2ce) & 0x1e0;
      bVar4 = *(byte *)((long)puVar1 + 3);
      bVar7 = (byte)self[0x2cf] & 2;
      *(byte *)((long)puVar1 + 3) = bVar4 & 0xfd | bVar7;
      bVar8 = (byte)self[0x2cf] & 4;
      *(byte *)((long)puVar1 + 3) = bVar4 & 0xf9 | bVar7 | bVar8;
      bVar9 = (byte)self[0x2cf] & 0x38;
      *(byte *)((long)puVar1 + 3) = bVar4 & 0xc1 | bVar7 | bVar8 | bVar9;
      SVar3 = self[0x2cf];
      *(byte *)((long)puVar1 + 3) = bVar4 & 0x81 | bVar7 | bVar8 | bVar9 | (byte)SVar3 & 0x40;
      *(byte *)((long)puVar1 + 3) =
           bVar4 & 1 | bVar7 | bVar8 | bVar9 | (byte)SVar3 & 0x40 | (byte)self[0x2cf] & 0x80;
      Vector2__operator_assign((Vector2 *)(puVar1 + 1),(Vector2 *)(self + 0x2d0));
      iVar6 = *(int *)(self + 0x38);
      *(int *)(self + ((long)iVar6 + 4) * 0x10 + 8) =
           *(int *)(self + ((long)iVar6 + 4) * 0x10 + 8) + 1;
      if (arg1 == 1) {
        lVar2 = *(long *)(self + ((long)iVar6 + 4) * 0x10 + 0x10) +
                (long)*(int *)(self + 0x18) * 0xc;
        *(ushort *)(lVar2 + 2) = *(ushort *)(lVar2 + 2) & 0xfe1f | 0xa0;
        iVar6 = *(int *)(self + 0x18);
      }
      else {
        iVar6 = *(int *)(self + 0x18);
      }
      if (0 < iVar6) {
        lVar2 = *(long *)(self + ((long)*(int *)(self + 0x38) + 4) * 0x10 + 0x10) +
                ((long)iVar6 * 3 + -3) * 4;
        *(ushort *)(lVar2 + 2) = *(ushort *)(lVar2 + 2) & 0xfe1f | ((byte)self[0x2d8] & 0xf) << 5;
        iVar6 = *(int *)(self + 0x18);
      }
      *(int *)(self + 0x18) = iVar6 + 1;
      iVar6 = 1;
    }
    *(int *)(self + 0x2d8) = iVar6;
  }
  return;
}

/* ======================================================================
 * SMBReplay__StartNewReplay  (Ghidra `StartNewReplay` @ 0050dd40)
 * Signature: uint8_t __thiscall StartNewReplay(SMBReplay * self)
 * Class: SMBReplay
 * Calls: (none)
 * Called by: `FlyWrench__Reset`, `Machinarium__Reset`, `MeatBoyCharactor__Reset`, `MeatBoyCharactor__SwitchToRegularMode`, `Ogmo__Reset`, `Runman__Reset`
 */
/* SMBReplay__StartNewReplay() */

void __thiscall SMBReplay__StartNewReplay(SMBReplay *self)

{
  if (*(int *)(self + 0x2c8) != 1) {
    return;
  }
  *(uint32_t *)(self + 0x2d8) = 0;
  *(uint32_t *)(self + 0x18) = 0;
  *(uint32_t *)(self + 0x1c) = 0;
  *(uint32_t *)(self + ((long)*(int *)(self + 0x38) + 4) * 0x10 + 8) = 0;
  return;
}

/* ======================================================================
 * SMBReplay__EndReplay  (Ghidra `EndReplay` @ 0050dd80)
 * Signature: uint8_t __thiscall EndReplay(SMBReplay * self)
 * Class: SMBReplay
 * Calls: (none)
 * Called by: `FlyWrench__Reset`, `Machinarium__Reset`, `MeatBoyCharactor__Reset`, `Ogmo__Reset`, `Runman__Reset`
 */
/* SMBReplay__EndReplay() */

void __thiscall SMBReplay__EndReplay(SMBReplay *self)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((*(int *)(self + 0x2c8) == 1) &&
     (iVar2 = *(int *)(self + 0x38), *(int *)(self + ((long)iVar2 + 4) * 0x10 + 8) < 0x870)) {
    iVar1 = iVar2 + 1;
    *(int *)(self + 0x38) = iVar1;
    iVar3 = *(int *)(self + 0x34);
    if (*(int *)(self + 0x34) <= iVar1) {
      iVar3 = iVar1;
    }
    *(int *)(self + 0x34) = iVar3;
    if (iVar1 < 0x28) {
      if (iVar1 < 0) {
        *(uint32_t *)(self + 0x38) = 0x27;
        iVar2 = 0x26;
      }
      else if (iVar1 < 2) {
        iVar2 = 0;
      }
    }
    else {
      *(uint32_t *)(self + 0x38) = 0;
      iVar2 = 0;
    }
    *(int *)(self + 0x3c) = iVar2;
    *(uint32_t *)(self + 0x18) = 0;
    return;
  }
  return;
}

/* ======================================================================
 * SMBReplay__SetReplayMode  (Ghidra `SetReplayMode` @ 0050de00)
 * Signature: uint8_t __thiscall SetReplayMode(SMBReplay * self, SMBReplayMode arg1)
 * Class: SMBReplay
 * Calls: (none)
 * Called by: `MeatBoyCharactor__SwitchToRegularMode`, `MeatBoyCharactor__SwitchToReplayMode`
 */
/* SMBReplay__SetReplayMode(SMBReplayMode) */

void __thiscall SMBReplay__SetReplayMode(SMBReplay *self,int arg2)

{
  if (arg2 != 1) {
    *(uint32_t *)(Engine + 0x2c) = 0;
    *(int *)(self + 0x2c8) = arg2;
    *(uint32_t *)(self + 0x1c) = 0;
    return;
  }
  *(uint32_t *)(Engine + 0x2c) = 1;
  *(uint32_t *)(self + 0x2c8) = 1;
  *(uint32_t *)(self + 0x1c) = 0;
  return;
}

/* ======================================================================
 * SMBReplay__GetReplayFrameByIndex  (Ghidra `GetReplayFrameByIndex` @ 0050de40)
 * Signature: uint8_t __thiscall GetReplayFrameByIndex(SMBReplay * self, int arg1, SMBReplayFrame * arg2, int arg3)
 * Class: SMBReplay
 * Calls: `Vector2__operator_assign`
 * Called by: (none)
 */
/* SMBReplay__GetReplayFrameByIndex(int, SMBReplayFrame&, int) */

void __thiscall
SMBReplay__GetReplayFrameByIndex(SMBReplay *self,int arg1,SMBReplayFrame *arg2,int arg3)

{
  uint *puVar1;
  SMBReplayFrame SVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  
  SVar2 = *arg2;
  puVar1 = (uint *)(*(long *)(self + ((long)arg1 + 4) * 0x10 + 0x10) + (long)arg3 * 0xc);
  bVar3 = (byte)*puVar1 & 3;
  *arg2 = (SMBReplayFrame)((byte)SVar2 & 0xfc | bVar3);
  *arg2 = (SMBReplayFrame)((byte)SVar2 & 0x80 | bVar3 | (byte)*puVar1 & 0x7c);
  *(ushort *)arg2 = *(ushort *)arg2 & 0xf87f | (ushort)*puVar1 & 0x780;
  SVar2 = arg2[1];
  bVar3 = *(byte *)((long)puVar1 + 1) & 8;
  arg2[1] = (SMBReplayFrame)((byte)SVar2 & 0xf7 | bVar3);
  bVar4 = *(byte *)((long)puVar1 + 1) & 0x10;
  arg2[1] = (SMBReplayFrame)((byte)SVar2 & 0xe7 | bVar3 | bVar4);
  bVar5 = *(byte *)((long)puVar1 + 1) & 0x20;
  arg2[1] = (SMBReplayFrame)((byte)SVar2 & 199 | bVar3 | bVar4 | bVar5);
  arg2[1] = (SMBReplayFrame)
               ((byte)SVar2 & 0x87 | bVar3 | bVar4 | bVar5 | *(byte *)((long)puVar1 + 1) & 0x40);
  *(uint *)arg2 = *(uint *)arg2 & 0xfffc7fff | *puVar1 & 0x38000;
  arg2[2] = (SMBReplayFrame)((byte)arg2[2] & 0xe3 | *(byte *)((long)puVar1 + 2) & 0x1c);
  *(ushort *)(arg2 + 2) =
       *(ushort *)(arg2 + 2) & 0xfe1f | *(ushort *)((long)puVar1 + 2) & 0x1e0;
  SVar2 = arg2[3];
  bVar3 = *(byte *)((long)puVar1 + 3) & 2;
  arg2[3] = (SMBReplayFrame)((byte)SVar2 & 0xfd | bVar3);
  bVar4 = *(byte *)((long)puVar1 + 3) & 4;
  arg2[3] = (SMBReplayFrame)((byte)SVar2 & 0xf9 | bVar3 | bVar4);
  bVar5 = *(byte *)((long)puVar1 + 3) & 0x38;
  arg2[3] = (SMBReplayFrame)((byte)SVar2 & 0xc1 | bVar3 | bVar4 | bVar5);
  bVar6 = *(byte *)((long)puVar1 + 3) & 0x40;
  arg2[3] = (SMBReplayFrame)((byte)SVar2 & 0x81 | bVar3 | bVar4 | bVar5 | bVar6);
  arg2[3] = (SMBReplayFrame)
               ((byte)SVar2 & 1 | bVar3 | bVar4 | bVar5 | bVar6 | *(byte *)((long)puVar1 + 3) & 0x80
               );
  Vector2__operator_assign((Vector2 *)(arg2 + 4),(Vector2 *)(puVar1 + 1));
  return;
}

/* ======================================================================
 * SMBReplay__GetReplayFrame  (Ghidra `GetReplayFrame` @ 0050df80)
 * Signature: uint8_t __thiscall GetReplayFrame(SMBReplay * self, int arg1, int * arg2, int * arg3)
 * Class: SMBReplay
 * Calls: (none)
 * Called by: `MeatBoyCharactor__ProcessReplayFrame`
 */
/* SMBReplay__GetReplayFrame(int, int&, int&) */

long __thiscall SMBReplay__GetReplayFrame(SMBReplay *self,int arg1,int *arg2,int *arg3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = *arg2;
  if ((int)(*(ushort *)
             (*(long *)(self + ((long)arg1 + 4) * 0x10 + 0x10) + (long)*arg3 * 0xc + 2) >> 5 &
           0xf) <= iVar3) {
    *arg2 = 0;
    *arg3 = *arg3 + 1;
    iVar3 = *arg2;
  }
  lVar2 = (long)arg1 + 4;
  lVar1 = 0;
  *arg2 = iVar3 + 1;
  if ((*arg3 < *(int *)(self + lVar2 * 0x10 + 8)) &&
     (lVar1 = *(long *)(self + lVar2 * 0x10 + 0x10) + (long)*arg3 * 0xc,
     (*(ushort *)(lVar1 + 2) & 0x1e0) == 0)) {
    lVar1 = 0;
  }
  return lVar1;
}

/* ======================================================================
 * SMBReplay__WriteReplayData  (Ghidra `WriteReplayData` @ 0050e000)
 * Signature: uint8_t __thiscall WriteReplayData(SMBReplay * self)
 * Class: SMBReplay
 * Calls: `CloseThread`, `CreateWorkerThread`, `GSMBCutSceneManager__ShowSavingMessage`, `GSuperMeatBoy__getChar`, `SyncEvent__Reset`, `SyncEvent__Wait`, `TPlayer__GetProfile`, `WriteReplayDataThread`, `free`, `malloc` (+4 more)
 * Called by: `ShowSaveReplayInterface`
 */
/* WARNING: Removing unreachable block (ram,0x0050e2fd) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SMBReplay__WriteReplayData() */

uint64_t __thiscall SMBReplay__WriteReplayData(SMBReplay *self)

{
  SMBReplay *pSVar1;
  SMBReplay *pSVar2;
  SMBReplay *pSVar3;
  SMBReplay *pSVar4;
  allocator *paVar5;
  int *piVar6;
  uint uVar7;
  GSuperMeatBoy *this_00;
  int iVar8;
  string *psVar9;
  string *psVar10;
  void *pvVar11;
  long lVar12;
  SMBReplay *pSVar13;
  long *plVar14;
  uint64_t uVar15;
  uint uVar16;
  void *pvVar17;
  uint uVar18;
  bool bVar19;
  uint8_t auVar20 [16];
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  code *local_38;
  string *local_30;
  uint32_t local_28;
  
  psVar9 = operator_new(0x2a0);
  *(uint8_t **)psVar9 = &DAT_008184c8 /* R:0.00016803004837129265f */;
  psVar10 = psVar9 + 0x10;
  do {
    *(uint32_t *)psVar10 = 0;
    *(uint64_t *)(psVar10 + 8) = 0;
    psVar10 = psVar10 + 0x10;
  } while (psVar10 != psVar9 + 0x290);
  pvVar11 = malloc(0xfd200);
  *(void **)(psVar9 + 0x290) = pvVar11;
  memset(pvVar11,0,0xfd200);
  pvVar11 = *(void **)(psVar9 + 0x290);
  lVar12 = 0;
  pvVar17 = pvVar11;
  do {
    *(void **)(psVar9 + lVar12 + 0x18) = pvVar17;
    pvVar17 = (void *)((long)pvVar17 + 0x6540);
    *(uint32_t *)(psVar9 + lVar12 + 0x10) = *(uint32_t *)(self + lVar12 + 0x48);
    lVar12 = lVar12 + 0x10;
  } while (lVar12 != 0x280);
  if (*(void **)(self + 0x20) != pvVar11) {
    memcpy(pvVar11,*(void **)(self + 0x20),0xfd200);
  }
  *(uint32_t *)(psVar9 + 0x29c) = 0x28;
  this_00 = SuperMeatBoy;
  *(uint32_t *)(psVar9 + 0xc) = *(uint32_t *)(self + 0x34);
  lVar12 = GSuperMeatBoy__getChar(this_00,1);
  *(uint32_t *)(psVar9 + 8) = *(uint32_t *)(lVar12 + 0xa54);
  std__string_assign(psVar9);
  bVar19 = hReplayWriteDataThread != (THREADHANDLESTRUCT *)0x0;
  *(uint32_t *)(psVar9 + 0x298) = *(uint32_t *)(self + 0x3c);
  if (bVar19) {
    SyncEvent__Wait((SyncEvent *)writeReplayEvent);
    CloseThread(hReplayWriteDataThread);
    hReplayWriteDataThread = (THREADHANDLESTRUCT *)0x0;
  }
  uVar7 = *(uint *)(self + 0x34);
  iVar21 = 0x18;
  if (0 < (int)uVar7) {
    uVar18 = uVar7 - 1 >> 2;
    iVar8 = uVar18 * 4;
    if ((uVar7 < 7) || (uVar18 == 0)) {
      iVar8 = 0;
      iVar21 = 0x18;
    }
    else {
      iVar21 = 0;
      iVar22 = 0;
      iVar23 = 0;
      iVar24 = 0;
      uVar16 = 0;
      pSVar13 = self;
      do {
        pSVar1 = pSVar13 + 0x58;
        uVar16 = uVar16 + 1;
        pSVar2 = pSVar13 + 0x48;
        pSVar3 = pSVar13 + 0x78;
        pSVar4 = pSVar13 + 0x68;
        pSVar13 = pSVar13 + 0x40;
        auVar20._4_4_ = *(int *)pSVar1;
        auVar20._0_4_ = *(int *)pSVar2;
        auVar20._8_4_ = *(uint32_t *)pSVar4;
        auVar20._12_4_ = *(int *)pSVar3;
        iVar21 = iVar21 + *(int *)pSVar2 * _DAT_005c89f0 /* R:1.6815581571897805e-44f */ + _DAT_005c5d50 /* R:5.605193857299268e-45f */;
        iVar22 = iVar22 + *(int *)pSVar1 * _UNK_005c89f4 + _UNK_005c5d54;
        iVar23 = iVar23 + (int)((auVar20._8_8_ & 0xffffffff) * (ulong)_UNK_005c89f8) + _UNK_005c5d58
        ;
        iVar24 = iVar24 + *(int *)pSVar3 * _UNK_005c89fc + _UNK_005c5d5c;
      } while (uVar16 < uVar18);
      iVar21 = iVar21 + iVar23 + iVar22 + iVar24 + 0x18;
      if (iVar8 - uVar7 == 0) goto LAB_0050e236;
    }
    do {
      lVar12 = (long)iVar8;
      iVar8 = iVar8 + 1;
      iVar21 = iVar21 + 4 + *(int *)(self + (lVar12 + 4) * 0x10 + 8) * 0xc;
    } while (iVar8 < (int)uVar7);
  }
LAB_0050e236:
  plVar14 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
  iVar21 = (**(code **)(*plVar14 + 0xb0))(plVar14,iVar21,1);
  if (iVar21 == 1) {
    local_28 = 2;
    local_38 = WriteReplayDataThread;
    local_30 = psVar9;
    SyncEvent__Reset((SyncEvent *)writeReplayEvent);
    hReplayWriteDataThread = (THREADHANDLESTRUCT *)CreateWorkerThread((tagThreadCreate *)&local_38);
    GSMBCutSceneManager__ShowSavingMessage(SMBCutSceneManager);
    uVar15 = 1;
  }
  else {
    free(*(void **)(psVar9 + 0x290));
    paVar5 = (allocator *)(*(long *)psVar9 + -0x18);
    if (paVar5 != (allocator *)&std__string_Rep_S_empty_rep_storage) {
      LOCK();
      piVar6 = (int *)(*(long *)psVar9 + -8);
      iVar21 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar21 < 1) {
        std__string_Rep_M_destroy(paVar5);
      }
    }
    operator_delete(psVar9);
    uVar15 = 0;
  }
  return uVar15;
}

/* ======================================================================
 * SMBReplay__GetReplayFileHeader  (Ghidra `GetReplayFileHeader` @ 0050e610)
 * Signature: uint8_t __thiscall GetReplayFileHeader(SMBReplay * self, SMBReplayFileCreate * arg1, int arg2, File * arg3, File * arg4, SystemFileTime * arg5)
 * Class: SMBReplay
 * Calls: `File__GetFileDate`, `File__Read`, `File__ReadVariable`, `TPlayer__GetProfile`
 * Called by: `GetReplayFileHeader`, `SMBReplayManager__LoadFileList`
 */
/* SMBReplay__GetReplayFileHeader(SMBReplayFileCreate*, int, File*, File*, SystemFileTime*) */

void __thiscall
SMBReplay__GetReplayFileHeader
          (SMBReplay *self,SMBReplayFileCreate *arg1,int arg2,File *arg3,File *arg4,
          SystemFileTime *arg5)

{
  long *plVar1;
  bool bVar2;
  uint64_t local_68;
  uint8_t *local_60;
  uint32_t local_58;
  uint64_t local_50;
  uint32_t local_48;
  uint32_t local_44;
  uint32_t local_40;
  uint32_t local_3c;
  uint32_t local_38;
  uint32_t local_34;
  uint8_t *local_30;
  
  bVar2 = arg3 == (File *)0x0;
  if (arg2 == 0 && bVar2) {
    local_68 = *(uint64_t *)arg1;
    local_58 = 2;
    local_50 = 0;
    local_48 = 0;
    local_44 = 1;
    local_40 = 1;
    local_3c = 0;
    local_38 = 0;
    local_30 = &DAT_005c04cf /* R:7.374579797039071e-39f */;
    local_60 = &DAT_005c328c /* R:u32=1811964530 */;
    local_34 = 1;
    plVar1 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
    arg4 = (File *)(**(code **)(*plVar1 + 0x40))(plVar1,&local_68,0);
    if (arg4 == (File *)0x0) {
      plVar1 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
      (**(code **)(*plVar1 + 0x58))(plVar1,0,1);
      arg1[0x19] = (SMBReplayFileCreate)0x0;
      arg1[0x18] = (SMBReplayFileCreate)0x0;
      *(uint64_t *)arg5 = 0;
      *(uint32_t *)(arg5 + 8) = 0;
      return;
    }
    if (arg5 != (SystemFileTime *)0x0) {
      File__GetFileDate(arg4,arg5);
    }
  }
  else if (!bVar2) {
    File__Read(arg3,arg1 + 8,0x10);
    File__Read(arg3,arg1 + 0x19,1);
    File__Read(arg3,arg1 + 0x18,1);
    File__ReadVariable(arg3,arg1 + 0x1a,2);
    File__ReadVariable(arg3,arg1 + 0x1c,4);
    return;
  }
  plVar1 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
  (**(code **)(*plVar1 + 0x48))(plVar1,arg4,arg1 + 8,0x10);
  plVar1 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
  (**(code **)(*plVar1 + 0x48))(plVar1,arg4,arg1 + 0x19,1);
  plVar1 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
  (**(code **)(*plVar1 + 0x48))(plVar1,arg4,arg1 + 0x18,1);
  plVar1 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
  (**(code **)(*plVar1 + 0x48))(plVar1,arg4,arg1 + 0x1a,2);
  plVar1 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
  (**(code **)(*plVar1 + 0x48))(plVar1,arg4,arg1 + 0x1c,4);
  if (arg2 == 0 && bVar2) {
    plVar1 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
    (**(code **)(*plVar1 + 0x58))(plVar1,arg4,1);
  }
  return;
}

/* ======================================================================
 * SMBReplay__ResetAll  (Ghidra `ResetAll` @ 0050e870)
 * Signature: uint8_t __thiscall ResetAll(SMBReplay * self)
 * Class: SMBReplay
 * Calls: `memset`
 * Called by: `FactoryBoss__FactoryBoss__00468ff0`, `FinalBoss__FinalBoss__00469560`, `GSuperMeatBoy__LoadDeferredCharactor`, `LoadDeferredCharactor`, `MeatBoyCharactor__MeatBoyCharactor__0047b350`, `MeatBoyCharactor__ResetReplays`, `MeatBoyCharactor__SwitchToRegularMode`
 */
/* SMBReplay__ResetAll() */

void __thiscall SMBReplay__ResetAll(SMBReplay *self)

{
  long lVar1;
  
  *(uint32_t *)(self + 0x38) = 0;
  *(uint32_t *)(self + 0x1c) = 0;
  lVar1 = 0;
  *(uint32_t *)(self + 0x18) = 0;
  *(uint32_t *)(self + 0x34) = 0;
  *(uint32_t *)(self + 0x3c) = 0;
  do {
    *(uint32_t *)(self + lVar1 + 0x48) = 0;
    lVar1 = lVar1 + 0x10;
  } while (lVar1 != 0x280);
  memset(*(void **)(self + 0x20),0,0xfd200);
  return;
}
