/* src/game/classes/TAudio.c — 20 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "TAudio.h"

/* ======================================================================
 * TAudio__Update  (Ghidra `Update` @ 005787e0)
 * Signature: uint8_t __thiscall Update(TAudio * self)
 * Class: TAudio
 * Calls: `AutoLockSection__AutoLockSection`, `AutoLockSection__AutoLockSection__005b59d0`, `audDestroyInstance`, `audSetVolume`, `audStopCue`, `audUpdateDevice`, `operator_delete`
 * Called by: `TEngine__Update`
 */
/* TAudio__Update() */

void __thiscall TAudio__Update(TAudio *self)

{
  uint64_t *puVar1;
  ushort *puVar2;
  ushort uVar3;
  long *plVar4;
  float *pfVar5;
  short sVar6;
  int iVar7;
  long lVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar13;
  uint64_t *puVar14;
  uint uVar15;
  ulong uVar16;
  ushort uVar17;
  ushort uVar18;
  long lVar19;
  bool bVar20;
  AutoLockSection aAStack_38[24];
  ulong uVar12;

  AutoLockSection__AutoLockSection(aAStack_38, (CriticalSection *)TAudioSection);
  /* try { // try from 005787fa to 00578960 has its CatchHandler @ 00578d74 */
  audUpdateDevice();
  if (*(short *)(self + 0x90) != 0) {
    uVar16 = 0;
    do {
      while (true) {
        uVar12 = uVar16 & 0xffff;
        (**(code **)**(uint64_t **)(*(long *)(self + 0xa0) + uVar12 * 8))();
        iVar7 = (**(code **)(**(long **)(*(long *)(self + 0xa0) + uVar12 * 8) + 8))();
        uVar11 = (uint)uVar16;
        if (iVar7 == 1)
          break;
      LAB_00578818:
        uVar16 = (ulong)(uVar11 + 1);
        if ((int)(uint) * (ushort *)(self + 0x90) <= (int)(uVar11 + 1))
          goto LAB_005788ff;
      }
      lVar19 = *(long *)(self + 0xa0);
      puVar14 = *(uint64_t **)(lVar19 + uVar12 * 8);
      if ((*(byte *)(puVar14 + 1) & 1) == 0)
        goto LAB_00578818;
      uVar17 = *(ushort *)(self + 0x90);
      if ((uVar11 + 1 < (uint)uVar17) && ((int)uVar11 < (int)(uVar17 - 1))) {
        lVar8 = (long)(int)uVar11 << 3;
        uVar12 = uVar16;
        while (true) {
          puVar1 = (uint64_t *)(lVar19 + lVar8);
          lVar8 = lVar8 + 8;
          uVar10 = (int)uVar12 + 1;
          uVar12 = (ulong)uVar10;
          *puVar1 = *(uint64_t *)(lVar19 + lVar8);
          uVar17 = *(ushort *)(self + 0x90);
          if ((int)(uVar17 - 1) <= (int)uVar10)
            break;
          lVar19 = *(long *)(self + 0xa0);
        }
      }
      if ((*(int *)(self + 0x98) == 1) && (uVar18 = *(ushort *)(self + 0x92), uVar18 != 0)) {
        uVar17 = 0;
        do {
          while (true) {
            puVar2 = (ushort *)(*(long *)(self + 0xa8) + (ulong)uVar17 * 2);
            uVar3 = *puVar2;
            if (uVar11 != uVar3)
              break;
            *puVar2 = 0xffff;
            uVar18 = *(ushort *)(self + 0x92);
            uVar17 = uVar17 + 1;
            if (uVar18 <= uVar17)
              goto LAB_005789ea;
          }
          if ((uVar11 < uVar3) && ((ushort)(uVar3 - 1) < 0xfffe)) {
            *puVar2 = uVar3 - 1;
            uVar18 = *(ushort *)(self + 0x92);
          }
          uVar17 = uVar17 + 1;
        } while (uVar17 < uVar18);
      LAB_005789ea:
        uVar17 = *(ushort *)(self + 0x90);
      }
      sVar6 = uVar17 - 1;
      if (uVar17 == 0) {
        sVar6 = 0;
      }
      *(short *)(self + 0x90) = sVar6;
      *puVar14 = &PTR___cxa_pure_virtual_005dbd30;
      operator_delete(puVar14);
      if ((int)uVar11 < 2) {
        uVar16 = 1;
      }
    } while ((int)uVar16 < (int)(uint) * (ushort *)(self + 0x90));
  }
LAB_005788ff:
  uVar17 = *(ushort *)(self + 0x28);
  while (true) {
    uVar11 = (uint)uVar17;
    uVar10 = (uint)uVar17;
    if (uVar10 == 0)
      break;
    pbVar13 = *(byte **)(self + 0x38);
    uVar15 = 0;
    if (**(long **)(pbVar13 + 8) == 0) {
      lVar19 = 0;
      uVar15 = 0;
      pbVar9 = pbVar13;
    } else {
      do {
        uVar15 = uVar15 + 1;
        if ((int)uVar10 <= (int)uVar15) {
          uVar10 = 0;
          goto LAB_00578a60;
        }
        lVar19 = (ulong)(ushort)uVar15 * 0x10;
        pbVar9 = pbVar13 + lVar19;
      } while (**(long **)(pbVar13 + lVar19 + 8) != 0);
    }
    if ((*pbVar9 & 1) != 0) {
      audDestroyInstance();
      plVar4 = *(long **)(*(long *)(self + 0x38) + 8 + lVar19);
      if (*plVar4 != 0) {
        audStopCue(plVar4);
        *plVar4 = 0;
        if (pMusicInstances._40_2_ != 0) {
          uVar17 = 0;
          puVar14 = (uint64_t *)pMusicInstances._56_8_;
          if (plVar4 == *(long **)pMusicInstances._56_8_) {
            uVar11 = 1;
            uVar10 = 0;
          } else {
            do {
              uVar17 = uVar17 + 1;
              if (uVar17 == pMusicInstances._40_2_)
                goto LAB_00578b15;
              puVar14 = puVar14 + 1;
            } while (plVar4 != (long *)*puVar14);
            uVar10 = (uint)uVar17;
            uVar11 = uVar10 + 1;
          }
          if ((uVar11 < (ushort)pMusicInstances._40_2_) &&
              ((int)uVar10 < (int)((ushort)pMusicInstances._40_2_ - 1))) {
            lVar8 = (long)(int)uVar10 << 3;
            uVar11 = uVar10;
            do {
              puVar14 = (uint64_t *)(pMusicInstances._56_8_ + lVar8);
              lVar8 = lVar8 + 8;
              uVar11 = uVar11 + 1;
              *puVar14 = *(uint64_t *)(pMusicInstances._56_8_ + lVar8);
            } while ((int)uVar11 < (int)((ushort)pMusicInstances._40_2_ - 1));
          }
          if ((pMusicInstances._48_4_ == 1) && (pMusicInstances._42_2_ != 0)) {
            uVar18 = 0;
            uVar17 = pMusicInstances._42_2_;
            do {
              puVar2 = (ushort *)(pMusicInstances._64_8_ + (ulong)uVar18 * 2);
              uVar3 = *puVar2;
              if (uVar3 == uVar10) {
                *puVar2 = 0xffff;
                uVar17 = pMusicInstances._42_2_;
              } else if ((uVar10 < uVar3) && ((ushort)(uVar3 - 1) < 0xfffe)) {
                *puVar2 = uVar3 - 1;
                uVar17 = pMusicInstances._42_2_;
              }
              uVar18 = uVar18 + 1;
            } while (uVar18 < uVar17);
          }
          sVar6 = pMusicInstances._40_2_ + -1;
          bVar20 = pMusicInstances._40_2_ != 0;
          pMusicInstances._40_2_ = 0;
          if (bVar20) {
            pMusicInstances._40_2_ = sVar6;
          }
        }
      }
    LAB_00578b15:
      *plVar4 = 0;
      plVar4[2] = 0;
      *(uint32_t *)(plVar4 + 3) = 0;
      operator_delete(plVar4);
      *(uint64_t *)(*(long *)(self + 0x38) + 8 + lVar19) = 0;
      uVar17 = *(ushort *)(self + 0x28);
      uVar10 = (uint)uVar17;
    }
    if ((uVar15 + 1 < uVar10) && ((int)uVar15 < (int)(uVar10 - 1))) {
      lVar19 = (long)(int)uVar15 << 4;
      uVar11 = uVar15;
      do {
        lVar8 = *(long *)(self + 0x38);
        uVar11 = uVar11 + 1;
        puVar14 = (uint64_t *)(lVar8 + lVar19);
        lVar19 = lVar19 + 0x10;
        *puVar14 = *(uint64_t *)(lVar8 + lVar19);
        puVar14[1] = *(uint64_t *)(lVar8 + 8 + lVar19);
        uVar17 = *(ushort *)(self + 0x28);
      } while ((int)uVar11 < (int)(uVar17 - 1));
    }
    if ((*(int *)(self + 0x30) == 1) && (uVar18 = *(ushort *)(self + 0x2a), uVar18 != 0)) {
      uVar17 = 0;
      do {
        puVar2 = (ushort *)(*(long *)(self + 0x40) + (ulong)uVar17 * 2);
        uVar3 = *puVar2;
        if (uVar15 == uVar3) {
          *puVar2 = 0xffff;
          uVar18 = *(ushort *)(self + 0x2a);
        } else if ((uVar15 < uVar3) && ((ushort)(uVar3 - 1) < 0xfffe)) {
          *puVar2 = uVar3 - 1;
          uVar18 = *(ushort *)(self + 0x2a);
        }
        uVar17 = uVar17 + 1;
      } while (uVar17 < uVar18);
      uVar17 = *(ushort *)(self + 0x28);
    }
    uVar17 = (uVar17 - 1) + (ushort)(uVar17 == 0);
    *(ushort *)(self + 0x28) = uVar17;
  }
LAB_0057890e:
  uVar11 = (uint)(ushort)pMusicInstances._40_2_;
  if (pMusicInstances._40_2_ != 0) {
    uVar10 = 0;
    do {
      while (plVar4 = *(long **)(pMusicInstances._56_8_ + (ulong)(uVar10 & 0xffff) * 8),
             plVar4 != (long *)0x0) {
        if (bOverrideMusicVolume == 1) {
          audSetVolume(plVar4, 0);
        } else {
          if ((*plVar4 == 0) || ((int)plVar4[4] != 0))
            break;
          /* try { // try from 00578a00 to 00578c31 has its CatchHandler @ 00578d74 */
          audSetVolume(plVar4, (int)plVar4[1]);
        }
        uVar11 = (uint)(ushort)pMusicInstances._40_2_;
        uVar10 = uVar10 + 1;
        if ((int)uVar11 <= (int)uVar10)
          goto LAB_00578972;
      }
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < (int)uVar11);
  }
LAB_00578972:
  AutoLockSection__AutoLockSection__005b59d0(aAStack_38);
  return;
LAB_00578a60:
  plVar4 = *(long **)(pbVar13 + (ulong)(uVar10 & 0xffff) * 0x10 + 8);
  if (plVar4 != (long *)0x0) {
    if ((*(int *)((long)plVar4 + 0x1c) == 0) &&
        (pfVar5 = (float *)plVar4[2], pfVar5 != (float *)0x0)) {
      if (((*plVar4 != 0) && (*(int *)(self + 100) == 1)) && (pfVar5 != (float *)0xffffffff)) {
        uVar11 = *(uint *)(plVar4 + 1);
        uVar15 =
            (uint)((DAT_005be894 /* R:1.0f */ -
                    ((*(float *)(self + 0x54) - pfVar5[1]) * (*(float *)(self + 0x54) - pfVar5[1]) +
                     (*(float *)(self + 0x50) - *pfVar5) * (*(float *)(self + 0x50) - *pfVar5) +
                     (*(float *)(self + 0x58) - pfVar5[2]) * (*(float *)(self + 0x58) - pfVar5[2]) +
                     (*(float *)(self + 0x5c) - pfVar5[3]) *
                         (*(float *)(self + 0x5c) - pfVar5[3])) /
                        *(float *)(self + 0x60)) *
                   (float)uVar11);
        if ((int)uVar15 < 0) {
          uVar15 = 0;
        }
        if (uVar15 <= uVar11) {
          uVar11 = uVar15;
        }
        audSetVolume(plVar4, uVar11);
      LAB_00578a8b:
        uVar11 = (uint) * (ushort *)(self + 0x28);
      }
    } else if ((*plVar4 != 0) && (*(int *)((long)plVar4 + 0x1c) == 1)) {
      audSetVolume(plVar4, (int)plVar4[1]);
      goto LAB_00578a8b;
    }
  }
  uVar10 = uVar10 + 1;
  if ((int)uVar11 <= (int)uVar10)
    goto LAB_0057890e;
  pbVar13 = *(byte **)(self + 0x38);
  goto LAB_00578a60;
}

/* ======================================================================
 * TAudio__SetMusicVolume  (Ghidra `SetMusicVolume` @ 00578d90)
 * Signature: uint8_t __thiscall SetMusicVolume(TAudio * self, uint arg1)
 * Class: TAudio
 * Calls: `audSetVolume`
 * Called by: `EnterTitleMenu`, `GMeatHUD__RenderUnlocks`, `GMeatHUD__Update`, `GSuperMeatBoy__ShowPauseMenu`, `GSuperMeatBoy__Update__00516690`, `HidePauseMenu__00517640`, `SMBSettingsDecrementMusicVolume`, `SMBSettingsIncrementMusicVolume`, `SMBSettingsRestoreDefaults`, `ShowPauseMenuPress`
 */
/* TAudio__SetMusicVolume(unsigned int) */

void __thiscall TAudio__SetMusicVolume(TAudio *self, uint arg1)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;

  uVar2 = (uint)(ushort)pMusicInstances._40_2_;
  if (pMusicInstances._40_2_ == 0) {
    return;
  }
  uVar3 = 0;
  do {
    while (plVar1 = *(long **)(pMusicInstances._56_8_ + (ulong)(uVar3 & 0xffff) * 8),
           plVar1 == (long *)0x0) {
    LAB_00578dba:
      uVar3 = uVar3 + 1;
      if ((int)uVar2 <= (int)uVar3) {
        return;
      }
    }
    if (bOverrideMusicVolume != 0) {
      *(uint *)(plVar1 + 1) = arg1;
    LAB_00578db3:
      uVar2 = (uint)(ushort)pMusicInstances._40_2_;
      goto LAB_00578dba;
    }
    if (*plVar1 == 0)
      goto LAB_00578dba;
    *(uint *)(plVar1 + 1) = arg1;
    if ((int)plVar1[4] != 0)
      goto LAB_00578db3;
    uVar3 = uVar3 + 1;
    audSetVolume(plVar1, arg1);
    uVar2 = (uint)(ushort)pMusicInstances._40_2_;
    if ((int)uVar2 <= (int)uVar3) {
      return;
    }
  } while (true);
}

/* ======================================================================
 * TAudio__DestroyManagedInstances  (Ghidra `DestroyManagedInstances` @ 00578e20)
 * Signature: uint8_t __thiscall DestroyManagedInstances(TAudio * self, int arg1)
 * Class: TAudio
 * Calls: `AutoLockSection__AutoLockSection`, `AutoLockSection__AutoLockSection__005b59d0`, `audDestroyInstance`, `audStopCue`, `operator_delete`
 * Called by: `SMBChapter__DestroyChapterIntro`, `SMBPalette__SMBPalette`, `TileLevel__TileLevel__0058d9f0`
 */
/* TAudio__DestroyManagedInstances(int) */

void __thiscall TAudio__DestroyManagedInstances(TAudio *self, int arg1)

{
  byte *pbVar1;
  ushort *puVar2;
  ushort uVar3;
  ushort uVar4;
  short sVar5;
  uint uVar6;
  long lVar7;
  uint64_t *puVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  uint uVar12;
  ushort uVar13;
  bool bVar14;
  AutoLockSection aAStack_48[24];

  AutoLockSection__AutoLockSection(aAStack_48, (CriticalSection *)TAudioSection);
  uVar12 = (uint) * (ushort *)(self + 0x28);
  if (*(ushort *)(self + 0x28) != 0) {
    do {
      if (arg1 == 0) {
        plVar11 = *(long **)(*(long *)(self + 0x38) + 8);
        uVar10 = 0;
        lVar7 = 0;
      } else {
        if (arg1 != 1)
          break;
        uVar10 = 0;
        while (true) {
          lVar7 = (uVar10 & 0xffff) * 0x10;
          pbVar1 = (byte *)(*(long *)(self + 0x38) + lVar7);
          plVar11 = *(long **)(pbVar1 + 8);
          if (((((*pbVar1 & 1) != 0) && (plVar11 != (long *)0x0)) &&
               (*(int *)((long)plVar11 + 0x1c) == 0)) &&
              (plVar11[2] != 0xffffffff))
            break;
          uVar6 = (int)uVar10 + 1;
          uVar10 = (ulong)uVar6;
          if ((int)uVar12 <= (int)uVar6)
            goto LAB_00578f70;
        }
      }
      /* try { // try from 00578e72 to 00578e85 has its CatchHandler @ 00579145 */
      audDestroyInstance(plVar11);
      if (*plVar11 != 0) {
        audStopCue(plVar11);
        *plVar11 = 0;
        if (pMusicInstances._40_2_ != 0) {
          uVar4 = 0;
          puVar8 = (uint64_t *)pMusicInstances._56_8_;
          if (plVar11 == *(long **)pMusicInstances._56_8_) {
            uVar12 = 1;
            uVar6 = 0;
          } else {
            do {
              uVar4 = uVar4 + 1;
              if (uVar4 == pMusicInstances._40_2_)
                goto LAB_00578ec5;
              puVar8 = puVar8 + 1;
            } while ((long *)*puVar8 != plVar11);
            uVar6 = (uint)uVar4;
            uVar12 = uVar6 + 1;
          }
          if ((uVar12 < (ushort)pMusicInstances._40_2_) &&
              ((int)uVar6 < (int)((ushort)pMusicInstances._40_2_ - 1))) {
            lVar9 = (long)(int)uVar6 << 3;
            uVar12 = uVar6;
            do {
              puVar8 = (uint64_t *)(pMusicInstances._56_8_ + lVar9);
              lVar9 = lVar9 + 8;
              uVar12 = uVar12 + 1;
              *puVar8 = *(uint64_t *)(pMusicInstances._56_8_ + lVar9);
            } while ((int)uVar12 < (int)((ushort)pMusicInstances._40_2_ - 1));
          }
          if ((pMusicInstances._48_4_ == 1) && (pMusicInstances._42_2_ != 0)) {
            uVar13 = 0;
            uVar4 = pMusicInstances._42_2_;
            do {
              while (true) {
                puVar2 = (ushort *)(pMusicInstances._64_8_ + (ulong)uVar13 * 2);
                uVar3 = *puVar2;
                if (uVar3 != uVar6)
                  break;
                *puVar2 = 0xffff;
                uVar13 = uVar13 + 1;
                uVar4 = pMusicInstances._42_2_;
                if ((ushort)pMusicInstances._42_2_ <= uVar13)
                  goto LAB_00579037;
              }
              if ((uVar6 < uVar3) && ((ushort)(uVar3 - 1) < 0xfffe)) {
                *puVar2 = uVar3 - 1;
                uVar4 = pMusicInstances._42_2_;
              }
              uVar13 = uVar13 + 1;
            } while (uVar13 < uVar4);
          }
        LAB_00579037:
          sVar5 = pMusicInstances._40_2_ + -1;
          bVar14 = pMusicInstances._40_2_ != 0;
          pMusicInstances._40_2_ = 0;
          if (bVar14) {
            pMusicInstances._40_2_ = sVar5;
          }
        }
      }
    LAB_00578ec5:
      *plVar11 = 0;
      plVar11[2] = 0;
      *(uint32_t *)(plVar11 + 3) = 0;
      operator_delete(plVar11);
      uVar12 = (uint)uVar10;
      *(uint64_t *)(*(long *)(self + 0x38) + 8 + lVar7) = 0;
      uVar4 = *(ushort *)(self + 0x28);
      if ((uVar12 + 1 < (uint)uVar4) && ((int)uVar12 < (int)(uVar4 - 1))) {
        lVar7 = (long)(int)uVar12 << 4;
        do {
          lVar9 = *(long *)(self + 0x38);
          uVar6 = (int)uVar10 + 1;
          uVar10 = (ulong)uVar6;
          puVar8 = (uint64_t *)(lVar9 + lVar7);
          lVar7 = lVar7 + 0x10;
          *puVar8 = *(uint64_t *)(lVar9 + lVar7);
          puVar8[1] = *(uint64_t *)(lVar9 + 8 + lVar7);
          uVar4 = *(ushort *)(self + 0x28);
        } while ((int)uVar6 < (int)(uVar4 - 1));
      }
      if ((*(int *)(self + 0x30) == 1) && (uVar13 = *(ushort *)(self + 0x2a), uVar13 != 0)) {
        uVar4 = 0;
        do {
          while (true) {
            puVar2 = (ushort *)(*(long *)(self + 0x40) + (ulong)uVar4 * 2);
            uVar3 = *puVar2;
            if (uVar12 != uVar3)
              break;
            *puVar2 = 0xffff;
            uVar13 = *(ushort *)(self + 0x2a);
            uVar4 = uVar4 + 1;
            if (uVar13 <= uVar4)
              goto LAB_005790af;
          }
          if ((uVar12 < uVar3) && ((ushort)(uVar3 - 1) < 0xfffe)) {
            *puVar2 = uVar3 - 1;
            uVar13 = *(ushort *)(self + 0x2a);
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar13);
      LAB_005790af:
        uVar4 = *(ushort *)(self + 0x28);
      }
      uVar13 = 0;
      if (uVar4 != 0) {
        uVar13 = uVar4 - 1;
      }
      uVar12 = (uint)uVar13;
      *(ushort *)(self + 0x28) = uVar13;
    } while (uVar12 != 0);
  }
LAB_00578f70:
  AutoLockSection__AutoLockSection__005b59d0(aAStack_48);
  return;
}

/* ======================================================================
 * TAudio__RemoveInstanceByPosition  (Ghidra `RemoveInstanceByPosition` @ 00579160)
 * Signature: uint8_t __thiscall RemoveInstanceByPosition(TAudio * self, FPUVector * arg1)
 * Class: TAudio
 * Calls: `AutoLockSection__AutoLockSection`, `AutoLockSection__AutoLockSection__005b59d0`, `audDestroyInstance`, `audStopCue`, `operator_delete`
 * Called by: `FlashLibraryInstance__FlashLibraryInstance`, `FlashLibraryInstance__FlashLibraryInstance__00572bd0`, `MeatBoyCharactor__MeatBoyCharactor`, `SMBPalette__ResetObstacles`, `TileLevel__ResetLevel`
 */
/* TAudio__RemoveInstanceByPosition(FPUVector const*) */

void __thiscall TAudio__RemoveInstanceByPosition(TAudio *self, FPUVector *arg1)

{
  ushort *puVar1;
  ushort uVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  uint uVar6;
  ushort uVar7;
  short sVar8;
  uint uVar9;
  byte *pbVar10;
  uint64_t *puVar11;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  ushort uVar15;
  ulong uVar16;
  bool bVar17;
  AutoLockSection aAStack_38[16];

  AutoLockSection__AutoLockSection(aAStack_38, (CriticalSection *)TAudioSection);
  uVar7 = *(ushort *)(self + 0x28);
  do {
    if (uVar7 == 0)
      break;
    uVar13 = 0;
    bVar17 = false;
    do {
      uVar16 = uVar13 & 0xffffffff;
      pbVar10 = (byte *)((uVar13 & 0xffff) * 0x10 + *(long *)(self + 0x38));
      plVar4 = *(long **)(pbVar10 + 8);
      uVar6 = (uint)uVar13;
      if ((plVar4 == (long *)0x0) || ((FPUVector *)plVar4[2] != arg1)) {
        uVar14 = (uint)uVar7;
      } else {
        if ((*pbVar10 & 1) != 0) {
          /* try { // try from 005791f0 to 00579203 has its CatchHandler @ 00579435 */
          audDestroyInstance(plVar4);
          if (*plVar4 != 0) {
            audStopCue(plVar4);
            *plVar4 = 0;
            if (pMusicInstances._40_2_ != 0) {
              uVar7 = 0;
              puVar11 = (uint64_t *)pMusicInstances._56_8_;
              if (plVar4 == *(long **)pMusicInstances._56_8_) {
                uVar14 = 1;
                uVar9 = 0;
              } else {
                do {
                  uVar7 = uVar7 + 1;
                  if (uVar7 == pMusicInstances._40_2_)
                    goto LAB_00579245;
                  puVar11 = puVar11 + 1;
                } while (plVar4 != (long *)*puVar11);
                uVar9 = (uint)uVar7;
                uVar14 = uVar9 + 1;
              }
              if ((uVar14 < (ushort)pMusicInstances._40_2_) &&
                  ((int)uVar9 < (int)((ushort)pMusicInstances._40_2_ - 1))) {
                lVar12 = (long)(int)uVar9 << 3;
                uVar14 = uVar9;
                do {
                  puVar11 = (uint64_t *)(pMusicInstances._56_8_ + lVar12);
                  lVar12 = lVar12 + 8;
                  uVar14 = uVar14 + 1;
                  *puVar11 = *(uint64_t *)(pMusicInstances._56_8_ + lVar12);
                } while ((int)uVar14 < (int)((ushort)pMusicInstances._40_2_ - 1));
              }
              if ((pMusicInstances._48_4_ == 1) && (pMusicInstances._42_2_ != 0)) {
                uVar15 = 0;
                uVar7 = pMusicInstances._42_2_;
                do {
                  puVar1 = (ushort *)(pMusicInstances._64_8_ + (ulong)uVar15 * 2);
                  uVar2 = *puVar1;
                  if (uVar2 == uVar9) {
                    *puVar1 = 0xffff;
                    uVar7 = pMusicInstances._42_2_;
                  } else if ((uVar9 < uVar2) && ((ushort)(uVar2 - 1) < 0xfffe)) {
                    *puVar1 = uVar2 - 1;
                    uVar7 = pMusicInstances._42_2_;
                  }
                  uVar15 = uVar15 + 1;
                } while (uVar15 < uVar7);
              }
              sVar8 = pMusicInstances._40_2_ + -1;
              bVar17 = pMusicInstances._40_2_ != 0;
              pMusicInstances._40_2_ = 0;
              if (bVar17) {
                pMusicInstances._40_2_ = sVar8;
              }
            }
          }
        LAB_00579245:
          *plVar4 = 0;
          plVar4[2] = 0;
          *(uint32_t *)(plVar4 + 3) = 0;
          operator_delete(plVar4);
          uVar7 = *(ushort *)(self + 0x28);
        }
        if ((uVar6 + 1 < (uint)uVar7) && ((int)uVar6 < (int)(uVar7 - 1))) {
          lVar12 = uVar13 << 4;
          do {
            lVar5 = *(long *)(self + 0x38);
            uVar14 = (int)uVar16 + 1;
            uVar16 = (ulong)uVar14;
            puVar11 = (uint64_t *)(lVar5 + lVar12);
            lVar12 = lVar12 + 0x10;
            *puVar11 = *(uint64_t *)(lVar5 + lVar12);
            puVar11[1] = *(uint64_t *)(lVar5 + 8 + lVar12);
            uVar7 = *(ushort *)(self + 0x28);
          } while ((int)uVar14 < (int)(uVar7 - 1));
          iVar3 = *(int *)(self + 0x30);
        } else {
          iVar3 = *(int *)(self + 0x30);
        }
        if ((iVar3 == 1) && (uVar15 = *(ushort *)(self + 0x2a), uVar15 != 0)) {
          uVar7 = 0;
          do {
            while (true) {
              puVar1 = (ushort *)(*(long *)(self + 0x40) + (ulong)uVar7 * 2);
              uVar2 = *puVar1;
              if (uVar6 != uVar2)
                break;
              *puVar1 = 0xffff;
              uVar15 = *(ushort *)(self + 0x2a);
              uVar7 = uVar7 + 1;
              if (uVar15 <= uVar7)
                goto LAB_00579347;
            }
            if ((uVar6 < uVar2) && ((ushort)(uVar2 - 1) < 0xfffe)) {
              *puVar1 = uVar2 - 1;
              uVar15 = *(ushort *)(self + 0x2a);
            }
            uVar7 = uVar7 + 1;
          } while (uVar7 < uVar15);
        LAB_00579347:
          uVar7 = *(ushort *)(self + 0x28);
        }
        uVar14 = 0;
        if (uVar7 != 0) {
          uVar7 = uVar7 - 1;
          uVar14 = (uint)uVar7;
        }
        *(ushort *)(self + 0x28) = uVar7;
        bVar17 = true;
      }
      uVar13 = uVar13 + 1;
    } while ((int)(uVar6 + 1) < (int)uVar14);
  } while (bVar17);
  AutoLockSection__AutoLockSection__005b59d0(aAStack_38);
  return;
}

/* ======================================================================
 * TAudio__RemoveInstanceByLibraryID  (Ghidra `RemoveInstanceByLibraryID` @ 00579450)
 * Signature: uint8_t __thiscall RemoveInstanceByLibraryID(TAudio * self, uint arg1)
 * Class: TAudio
 * Calls: `AutoLockSection__AutoLockSection`, `AutoLockSection__AutoLockSection__005b59d0`, `audDestroyInstance`, `audStopCue`, `operator_delete`
 * Called by: `FlashSoundLibrary__FlashSoundLibrary__00575090`
 */
/* TAudio__RemoveInstanceByLibraryID(unsigned int) */

void __thiscall TAudio__RemoveInstanceByLibraryID(TAudio *self, uint arg1)

{
  ushort *puVar1;
  ushort uVar2;
  long *plVar3;
  long lVar4;
  uint uVar5;
  ushort uVar6;
  short sVar7;
  uint uVar8;
  byte *pbVar9;
  uint64_t *puVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  ushort uVar14;
  ulong uVar15;
  bool bVar16;
  AutoLockSection aAStack_38[16];

  AutoLockSection__AutoLockSection(aAStack_38, (CriticalSection *)TAudioSection);
  uVar6 = *(ushort *)(self + 0x28);
  do {
    if (uVar6 == 0)
      break;
    uVar12 = 0;
    bVar16 = false;
    do {
      uVar15 = uVar12 & 0xffffffff;
      pbVar9 = (byte *)((uVar12 & 0xffff) * 0x10 + *(long *)(self + 0x38));
      plVar3 = *(long **)(pbVar9 + 8);
      uVar5 = (uint)uVar12;
      if ((plVar3 == (long *)0x0) || (*(uint *)((long)plVar3 + 0x24) != arg1)) {
        uVar13 = (uint)uVar6;
      } else {
        if ((*pbVar9 & 1) != 0) {
          /* try { // try from 005794e0 to 005794f3 has its CatchHandler @ 00579718 */
          audDestroyInstance(plVar3);
          if (*plVar3 != 0) {
            audStopCue(plVar3);
            *plVar3 = 0;
            if (pMusicInstances._40_2_ != 0) {
              uVar6 = 0;
              puVar10 = (uint64_t *)pMusicInstances._56_8_;
              if (plVar3 == *(long **)pMusicInstances._56_8_) {
                uVar13 = 1;
                uVar8 = 0;
              } else {
                do {
                  uVar6 = uVar6 + 1;
                  if (uVar6 == pMusicInstances._40_2_)
                    goto LAB_00579535;
                  puVar10 = puVar10 + 1;
                } while (plVar3 != (long *)*puVar10);
                uVar8 = (uint)uVar6;
                uVar13 = uVar8 + 1;
              }
              if ((uVar13 < (ushort)pMusicInstances._40_2_) &&
                  ((int)uVar8 < (int)((ushort)pMusicInstances._40_2_ - 1))) {
                lVar11 = (long)(int)uVar8 << 3;
                uVar13 = uVar8;
                do {
                  puVar10 = (uint64_t *)(pMusicInstances._56_8_ + lVar11);
                  lVar11 = lVar11 + 8;
                  uVar13 = uVar13 + 1;
                  *puVar10 = *(uint64_t *)(pMusicInstances._56_8_ + lVar11);
                } while ((int)uVar13 < (int)((ushort)pMusicInstances._40_2_ - 1));
              }
              if ((pMusicInstances._48_4_ == 1) && (pMusicInstances._42_2_ != 0)) {
                uVar14 = 0;
                uVar6 = pMusicInstances._42_2_;
                do {
                  puVar1 = (ushort *)(pMusicInstances._64_8_ + (ulong)uVar14 * 2);
                  uVar2 = *puVar1;
                  if (uVar2 == uVar8) {
                    *puVar1 = 0xffff;
                    uVar6 = pMusicInstances._42_2_;
                  } else if ((uVar8 < uVar2) && ((ushort)(uVar2 - 1) < 0xfffe)) {
                    *puVar1 = uVar2 - 1;
                    uVar6 = pMusicInstances._42_2_;
                  }
                  uVar14 = uVar14 + 1;
                } while (uVar14 < uVar6);
              }
              sVar7 = pMusicInstances._40_2_ + -1;
              bVar16 = pMusicInstances._40_2_ != 0;
              pMusicInstances._40_2_ = 0;
              if (bVar16) {
                pMusicInstances._40_2_ = sVar7;
              }
            }
          }
        LAB_00579535:
          *plVar3 = 0;
          plVar3[2] = 0;
          *(uint32_t *)(plVar3 + 3) = 0;
          operator_delete(plVar3);
          uVar6 = *(ushort *)(self + 0x28);
        }
        if ((uVar5 + 1 < (uint)uVar6) && ((int)uVar5 < (int)(uVar6 - 1))) {
          lVar11 = uVar12 << 4;
          do {
            lVar4 = *(long *)(self + 0x38);
            uVar13 = (int)uVar15 + 1;
            uVar15 = (ulong)uVar13;
            puVar10 = (uint64_t *)(lVar4 + lVar11);
            lVar11 = lVar11 + 0x10;
            *puVar10 = *(uint64_t *)(lVar4 + lVar11);
            puVar10[1] = *(uint64_t *)(lVar4 + 8 + lVar11);
            uVar6 = *(ushort *)(self + 0x28);
          } while ((int)uVar13 < (int)(uVar6 - 1));
        }
        if ((*(int *)(self + 0x30) == 1) && (uVar14 = *(ushort *)(self + 0x2a), uVar14 != 0)) {
          uVar6 = 0;
          do {
            while (true) {
              puVar1 = (ushort *)(*(long *)(self + 0x40) + (ulong)uVar6 * 2);
              uVar2 = *puVar1;
              if (uVar5 != uVar2)
                break;
              *puVar1 = 0xffff;
              uVar14 = *(ushort *)(self + 0x2a);
              uVar6 = uVar6 + 1;
              if (uVar14 <= uVar6)
                goto LAB_00579624;
            }
            if ((uVar5 < uVar2) && ((ushort)(uVar2 - 1) < 0xfffe)) {
              *puVar1 = uVar2 - 1;
              uVar14 = *(ushort *)(self + 0x2a);
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 < uVar14);
        LAB_00579624:
          uVar6 = *(ushort *)(self + 0x28);
        }
        uVar13 = 0;
        if (uVar6 != 0) {
          uVar6 = uVar6 - 1;
          uVar13 = (uint)uVar6;
        }
        *(ushort *)(self + 0x28) = uVar6;
        bVar16 = true;
      }
      uVar12 = uVar12 + 1;
    } while ((int)(uVar5 + 1) < (int)uVar13);
  } while (bVar16);
  AutoLockSection__AutoLockSection__005b59d0(aAStack_38);
  return;
}

/* ======================================================================
 * TAudio__ManageEffect  (Ghidra `ManageEffect` @ 00579730)
 * Signature: uint8_t __thiscall ManageEffect(TAudio * self, AudioEffectBase * arg1)
 * Class: TAudio
 * Calls: `AutoLockSection__AutoLockSection`, `AutoLockSection__AutoLockSection__005b59d0`, `free`, `malloc`, `memcpy`
 * Called by: `SMBChapter__CrossFadeChapterMusic`
 */
/* TAudio__ManageEffect(AudioEffectBase*) */

void __thiscall TAudio__ManageEffect(TAudio *self, AudioEffectBase *arg1)

{
  void *pvVar1;
  ushort uVar2;
  void *pvVar3;
  ushort *puVar4;
  void *pvVar5;
  ulong uVar6;
  short sVar7;
  ushort uVar8;
  ulong uVar9;
  uint64_t *puVar10;
  AutoLockSection local_48[24];

  AutoLockSection__AutoLockSection(local_48, (CriticalSection *)TAudioSection);
  if (*(int *)(self + 0xb0) == -0x5eef3582) {
    uVar2 = *(ushort *)(self + 0x90);
    if (*(ushort *)(self + 0x92) <= uVar2) {
      uVar2 = *(ushort *)(self + 0x92) + *(short *)(self + 0x9c);
      uVar9 = (ulong)(byte)self[0x94];
      pvVar3 = (void *)0x0;
      pvVar1 = *(void **)(self + 0xa0);
      *(ushort *)(self + 0x92) = uVar2;
      uVar6 = (ulong)uVar2 * 8;
      pvVar5 = malloc(uVar9 + 0x10 + uVar6);
      if (pvVar5 != (void *)0x0) {
        pvVar3 = (void *)((long)pvVar5 + 0x10U + (uVar9 - ((long)pvVar5 + 0x10U) % uVar9) % uVar9);
        *(ulong *)((long)pvVar3 + -0x10) = uVar6;
        *(void **)((long)pvVar3 + -8) = pvVar5;
        if (pvVar1 != (void *)0x0) {
          uVar9 = *(ulong *)((long)pvVar1 + -0x10);
          if (uVar6 < uVar9 || uVar6 - uVar9 == 0) {
            uVar9 = uVar6;
          }
          memcpy(pvVar3, pvVar1, uVar9);
          free(*(void **)((long)pvVar1 + -8));
        }
      }
      pvVar1 = *(void **)(self + 0xa8);
      *(void **)(self + 0xa0) = pvVar3;
      if (pvVar1 != (void *)0x0) {
        uVar8 = *(ushort *)(self + 0x92);
        uVar9 = (ulong)(byte)self[0x94];
        pvVar3 = (void *)0x0;
        uVar6 = (ulong)uVar8 * 2;
        pvVar5 = malloc(uVar9 + 0x10 + uVar6);
        if (pvVar5 != (void *)0x0) {
          pvVar3 =
              (void *)((long)pvVar5 + 0x10U + (uVar9 - ((long)pvVar5 + 0x10U) % uVar9) % uVar9);
          *(void **)((long)pvVar3 + -8) = pvVar5;
          *(ulong *)((long)pvVar3 + -0x10) = uVar6;
          uVar9 = *(ulong *)((long)pvVar1 + -0x10);
          if (uVar6 <= *(ulong *)((long)pvVar1 + -0x10)) {
            uVar9 = uVar6;
          }
          memcpy(pvVar3, pvVar1, uVar9);
          free(*(void **)((long)pvVar1 + -8));
          uVar8 = *(ushort *)(self + 0x92);
        }
        uVar2 = *(ushort *)(self + 0x90);
        *(void **)(self + 0xa8) = pvVar3;
        if (uVar8 <= uVar2)
          goto LAB_00579818;
        while (true) {
          uVar6 = (ulong)uVar2;
          uVar2 = uVar2 + 1;
          *(uint16_t *)((long)pvVar3 + uVar6 * 2) = 0xffff;
          if (uVar8 <= uVar2)
            break;
          pvVar3 = *(void **)(self + 0xa8);
        }
      }
      uVar2 = *(ushort *)(self + 0x90);
    }
  } else {
    uVar6 = (ulong)(byte)self[0x94];
    *(uint32_t *)(self + 0x98) = 0;
    pvVar3 = malloc(uVar6 + 0x38);
    puVar10 = (uint64_t *)0x0;
    if (pvVar3 != (void *)0x0) {
      puVar10 =
          (uint64_t *)((long)pvVar3 + 0x10U + (uVar6 - ((long)pvVar3 + 0x10U) % uVar6) % uVar6);
      puVar10[-2] = 0x28;
      puVar10[-1] = pvVar3;
    }
    *(uint64_t **)(self + 0xa0) = puVar10;
    *puVar10 = 0;
    puVar10[1] = 0;
    puVar10[2] = 0;
    puVar10[3] = 0;
    puVar10[4] = 0;
    uVar2 = 0;
    *(uint16_t *)(self + 0x90) = 0;
    *(uint16_t *)(self + 0x92) = 5;
    *(uint32_t *)(self + 0xb0) = 0xa110ca7e;
    *(uint16_t *)(self + 0x9c) = 5;
  }
LAB_00579818:
  if ((*(int *)(self + 0x98) == 1) && (*(short *)(self + 0x92) != 0)) {
    puVar4 = *(ushort **)(self + 0xa8);
    sVar7 = 0;
    uVar8 = *puVar4;
    while (uVar8 != 0xffff) {
      puVar4 = puVar4 + 1;
      sVar7 = sVar7 + 1;
      if (sVar7 == *(short *)(self + 0x92))
        goto LAB_00579821;
      uVar8 = *puVar4;
    }
    *puVar4 = uVar2;
    uVar2 = *(ushort *)(self + 0x90);
  }
LAB_00579821:
  *(AudioEffectBase **)(*(long *)(self + 0xa0) + (ulong)uVar2 * 8) = arg1;
  *(short *)(self + 0x90) = *(short *)(self + 0x90) + 1;
  AutoLockSection__AutoLockSection__005b59d0(local_48);
  return;
}

/* ======================================================================
 * TAudio__EnableDirectionalAudio  (Ghidra `EnableDirectionalAudio` @ 00579a30)
 * Signature: uint8_t __thiscall EnableDirectionalAudio(TAudio * self)
 * Class: TAudio
 * Calls: (none)
 * Called by: `GMeatHUD__Render`, `GSMBCutSceneManager__Render`, `GSMBCutSceneManager__RenderLoadingOverlay`, `GSMBCutSceneManager__RenderSavingOverlay`, `GSMBMenu__Render`, `GSMBMenu__RenderLoadingScreen`, `GSMBMenu__RenderTitleScreenForIntro`, `GSuperMeatBoy__ShowGame`, `HellBoss__Render`, `HospitalBoss__Render` (+4 more)
 */
/* TAudio__EnableDirectionalAudio() */

void __thiscall TAudio__EnableDirectionalAudio(TAudio *self)

{
  *(uint32_t *)(self + 100) = 1;
  return;
}

/* ======================================================================
 * TAudio__DisableDirectionalAudio  (Ghidra `DisableDirectionalAudio` @ 00579a40)
 * Signature: uint8_t __thiscall DisableDirectionalAudio(TAudio * self)
 * Class: TAudio
 * Calls: (none)
 * Called by: `GMeatHUD__Render`, `GSMBCutSceneManager__Render`, `GSMBCutSceneManager__RenderLoadingOverlay`, `GSMBCutSceneManager__RenderSavingOverlay`, `GSMBMenu__Render`, `GSMBMenu__RenderLoadingScreen`, `GSMBMenu__RenderTitleScreenForIntro`, `GSuperMeatBoy__HideGame`, `HellBoss__Render`, `HospitalBoss__Render` (+4 more)
 */
/* TAudio__DisableDirectionalAudio() */

void __thiscall TAudio__DisableDirectionalAudio(TAudio *self)

{
  *(uint32_t *)(self + 100) = 0;
  return;
}

/* ======================================================================
 * TAudio__Mute  (Ghidra `Mute` @ 00579a50)
 * Signature: uint8_t __stdcall Mute(void)
 * Class: TAudio
 * Calls: `AutoLockSection__AutoLockSection`, `AutoLockSection__AutoLockSection__005b59d0`, `alGetSourcefv`, `alSourcef`
 * Called by: `GSuperMeatBoy__Pause__00516530`, `MuteAudio`
 */
/* TAudio__Mute() */

void TAudio__Mute(void)

{
  int *piVar1;
  int iVar2;
  AutoLockSection aAStack_28[24];

  iVar2 = 0;
  piVar1 = &pVoices;
  AutoLockSection__AutoLockSection(aAStack_28, (CriticalSection *)XAudioSection);
  do {
    while (*piVar1 != 0) {
      alGetSourcefv(*piVar1, 0x100a,
                    &DAT_0081ced8 /* R:2.8586488672226268e-42f */ + (long)iVar2 * 8);
      alSourcef(0, *piVar1, 0x100a);
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 8;
      if (iVar2 == 200)
        goto LAB_0053f44b;
    }
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 8;
  } while (iVar2 != 200);
LAB_0053f44b:
  AutoLockSection__AutoLockSection__005b59d0(aAStack_28);
  return;
}

/* ======================================================================
 * TAudio__UnMute  (Ghidra `UnMute` @ 00579a60)
 * Signature: uint8_t __stdcall UnMute(void)
 * Class: TAudio
 * Calls: `AutoLockSection__AutoLockSection`, `AutoLockSection__AutoLockSection__005b59d0`, `alSourcef`
 * Called by: `GSuperMeatBoy__Pause__00516530`, `MuteAudio`
 */
/* TAudio__UnMute() */

void TAudio__UnMute(void)

{
  int *piVar1;
  AutoLockSection aAStack_18[16];

  piVar1 = &pVoices;
  AutoLockSection__AutoLockSection(aAStack_18, (CriticalSection *)XAudioSection);
  do {
    while (*piVar1 != 0) {
      alSourcef(piVar1[6], *piVar1, 0x100a);
      piVar1 = piVar1 + 8;
      if (piVar1 == (int *)XAudioSection)
        goto LAB_0053f4bf;
    }
    piVar1 = piVar1 + 8;
  } while (piVar1 != (int *)XAudioSection);
LAB_0053f4bf:
  AutoLockSection__AutoLockSection__005b59d0(aAStack_18);
  return;
}

/* ======================================================================
 * TAudio__CreateManagedInstance  (Ghidra `CreateManagedInstance` @ 00579a70)
 * Signature: uint8_t __stdcall CreateManagedInstance(void)
 * Class: TAudio
 * Calls: `operator_new`
 * Called by: (none)
 */
/* TAudio__CreateManagedInstance() */

void TAudio__CreateManagedInstance(void)

{
  uint64_t *puVar1;

  puVar1 = operator_new(0x28);
  *puVar1 = 0;
  *(uint32_t *)(puVar1 + 1) = 100;
  puVar1[2] = 0;
  *(uint32_t *)(puVar1 + 3) = 0;
  *(uint32_t *)((long)puVar1 + 0x1c) = 0;
  *(uint32_t *)(puVar1 + 4) = 0;
  return;
}

/* ======================================================================
 * TAudio__DestroyManagedInstance  (Ghidra `DestroyManagedInstance` @ 00579ab0)
 * Signature: uint8_t __thiscall DestroyManagedInstance(TAudio * self, TAudioInstance * arg1)
 * Class: TAudio
 * Calls: `audStopCue`, `operator_delete`
 * Called by: (none)
 */
/* TAudio__DestroyManagedInstance(TAudioInstance*) */

void __thiscall TAudio__DestroyManagedInstance(TAudio *self, TAudioInstance *arg1)

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

  if (*(long *)arg1 != 0) {
    audStopCue(arg1);
    *(uint64_t *)arg1 = 0;
    if (pMusicInstances._40_2_ != 0) {
      uVar4 = 0;
      plVar8 = (long *)pMusicInstances._56_8_;
      if (*(TAudioInstance **)pMusicInstances._56_8_ == arg1) {
        uVar10 = 1;
        uVar6 = 0;
      } else {
        do {
          uVar4 = uVar4 + 1;
          if (uVar4 == pMusicInstances._40_2_)
            goto LAB_00579b01;
          plVar8 = plVar8 + 1;
        } while ((TAudioInstance *)*plVar8 != arg1);
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
          } else if ((uVar6 < uVar3) && ((ushort)(uVar3 - 1) < 0xfffe)) {
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
    }
  }
LAB_00579b01:
  *(uint64_t *)arg1 = 0;
  *(uint64_t *)(arg1 + 0x10) = 0;
  *(uint32_t *)(arg1 + 0x18) = 0;
  operator_delete(arg1);
  return;
}

/* ======================================================================
 * TAudio__ManageInstance  (Ghidra `ManageInstance` @ 00579c10)
 * Signature: uint8_t __thiscall ManageInstance(TAudio * self, TAudioInstance * arg1, uint arg2)
 * Class: TAudio
 * Calls: `AutoLockSection__AutoLockSection`, `AutoLockSection__AutoLockSection__005b59d0`, `free`, `malloc`, `memcpy`
 * Called by: (none)
 */
/* TAudio__ManageInstance(TAudioInstance*, unsigned int) */

void __thiscall TAudio__ManageInstance(TAudio *self, TAudioInstance *arg1, uint arg2)

{
  int iVar1;
  void *pvVar2;
  short sVar3;
  void *pvVar4;
  uint *puVar5;
  void *pvVar6;
  ulong uVar7;
  ushort uVar8;
  ulong uVar9;
  ushort *puVar10;
  uint64_t *puVar11;
  ushort uVar12;
  bool bVar13;
  byte bVar14;
  AutoLockSection local_48[24];

  bVar14 = 0;
  AutoLockSection__AutoLockSection(local_48, (CriticalSection *)TAudioSection);
  if (*(int *)(self + 0x48) == -0x5eef3582) {
    uVar12 = *(ushort *)(self + 0x28);
    if (*(ushort *)(self + 0x2a) <= uVar12) {
      uVar12 = *(ushort *)(self + 0x2a) + *(short *)(self + 0x34);
      uVar9 = (ulong)(byte)self[0x2c];
      pvVar4 = (void *)0x0;
      pvVar2 = *(void **)(self + 0x38);
      *(ushort *)(self + 0x2a) = uVar12;
      uVar7 = (ulong)uVar12 * 0x10;
      pvVar6 = malloc(uVar9 + 0x10 + uVar7);
      if (pvVar6 != (void *)0x0) {
        pvVar4 = (void *)((long)pvVar6 + 0x10U + (uVar9 - ((long)pvVar6 + 0x10U) % uVar9) % uVar9);
        *(ulong *)((long)pvVar4 + -0x10) = uVar7;
        *(void **)((long)pvVar4 + -8) = pvVar6;
        if (pvVar2 != (void *)0x0) {
          uVar9 = *(ulong *)((long)pvVar2 + -0x10);
          if (uVar7 <= *(ulong *)((long)pvVar2 + -0x10)) {
            uVar9 = uVar7;
          }
          memcpy(pvVar4, pvVar2, uVar9);
          free(*(void **)((long)pvVar2 + -8));
        }
      }
      pvVar2 = *(void **)(self + 0x40);
      *(void **)(self + 0x38) = pvVar4;
      if (pvVar2 != (void *)0x0) {
        uVar8 = *(ushort *)(self + 0x2a);
        uVar7 = (ulong)(byte)self[0x2c];
        pvVar4 = (void *)0x0;
        uVar9 = (ulong)uVar8 * 2;
        pvVar6 = malloc(uVar7 + 0x10 + uVar9);
        if (pvVar6 != (void *)0x0) {
          pvVar4 =
              (void *)((long)pvVar6 + 0x10U + (uVar7 - ((long)pvVar6 + 0x10U) % uVar7) % uVar7);
          *(ulong *)((long)pvVar4 + -0x10) = uVar9;
          *(void **)((long)pvVar4 + -8) = pvVar6;
          uVar7 = *(ulong *)((long)pvVar2 + -0x10);
          if (uVar9 <= *(ulong *)((long)pvVar2 + -0x10)) {
            uVar7 = uVar9;
          }
          memcpy(pvVar4, pvVar2, uVar7);
          free(*(void **)((long)pvVar2 + -8));
          uVar8 = *(ushort *)(self + 0x2a);
        }
        uVar12 = *(ushort *)(self + 0x28);
        *(void **)(self + 0x40) = pvVar4;
        if (uVar8 <= uVar12)
          goto LAB_00579d04;
        while (true) {
          uVar9 = (ulong)uVar12;
          uVar12 = uVar12 + 1;
          *(uint16_t *)((long)pvVar4 + uVar9 * 2) = 0xffff;
          if (uVar8 <= uVar12)
            break;
          pvVar4 = *(void **)(self + 0x40);
        }
      }
      iVar1 = *(int *)(self + 0x30);
      uVar12 = *(ushort *)(self + 0x28);
      goto joined_r0x00579ea7;
    }
  } else {
    uVar9 = (ulong)(byte)self[0x2c];
    *(uint32_t *)(self + 0x30) = 0;
    pvVar4 = malloc(uVar9 + 0x60);
    puVar11 = (uint64_t *)0x0;
    if (pvVar4 != (void *)0x0) {
      puVar11 =
          (uint64_t *)((long)pvVar4 + 0x10U + (uVar9 - ((long)pvVar4 + 0x10U) % uVar9) % uVar9);
      puVar11[-2] = 0x50;
      puVar11[-1] = pvVar4;
    }
    bVar13 = ((ulong)puVar11 & 1) != 0;
    *(uint64_t **)(self + 0x38) = puVar11;
    uVar9 = 0x50;
    if (bVar13) {
      *(uint8_t *)puVar11 = 0;
      uVar9 = 0x4f;
      puVar11 = (uint64_t *)((long)puVar11 + 1);
    }
    if (((ulong)puVar11 & 2) != 0) {
      *(uint16_t *)puVar11 = 0;
      uVar9 = (ulong)((int)uVar9 - 2);
      puVar11 = (uint64_t *)((long)puVar11 + 2);
    }
    if (((ulong)puVar11 & 4) != 0) {
      *(uint32_t *)puVar11 = 0;
      uVar9 = (ulong)((int)uVar9 - 4);
      puVar11 = (uint64_t *)((long)puVar11 + 4);
    }
    for (uVar7 = uVar9 >> 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar11 = 0;
      puVar11 = puVar11 + (ulong)bVar14 * -2 + 1;
    }
    if ((uVar9 & 4) != 0) {
      *(uint32_t *)puVar11 = 0;
      puVar11 = (uint64_t *)((long)puVar11 + 4);
    }
    if ((uVar9 & 2) != 0) {
      *(uint16_t *)puVar11 = 0;
      puVar11 = (uint64_t *)((long)puVar11 + 2);
    }
    if (bVar13) {
      *(uint8_t *)puVar11 = 0;
    }
    *(uint16_t *)(self + 0x28) = 0;
    *(uint16_t *)(self + 0x2a) = 5;
    uVar12 = 0;
    *(uint32_t *)(self + 0x48) = 0xa110ca7e;
    *(uint16_t *)(self + 0x34) = 5;
  }
LAB_00579d04:
  iVar1 = *(int *)(self + 0x30);
joined_r0x00579ea7:
  if ((iVar1 == 1) && (*(short *)(self + 0x2a) != 0)) {
    puVar10 = *(ushort **)(self + 0x40);
    sVar3 = 1;
    uVar8 = *puVar10;
    while (uVar8 != 0xffff) {
      puVar10 = puVar10 + 1;
      if (sVar3 == *(short *)(self + 0x2a))
        goto LAB_00579d0e;
      sVar3 = sVar3 + 1;
      uVar8 = *puVar10;
    }
    *puVar10 = uVar12;
    uVar12 = *(ushort *)(self + 0x28);
  }
LAB_00579d0e:
  puVar5 = (uint *)((ulong)uVar12 * 0x10 + *(long *)(self + 0x38));
  *puVar5 = arg2;
  *(TAudioInstance **)(puVar5 + 2) = arg1;
  *(short *)(self + 0x28) = *(short *)(self + 0x28) + 1;
  AutoLockSection__AutoLockSection__005b59d0(local_48);
  return;
}

/* ======================================================================
 * TAudio__SetMicrophonePosition  (Ghidra `SetMicrophonePosition` @ 00579f60)
 * Signature: uint8_t __thiscall SetMicrophonePosition(TAudio * self, FPUVector * arg1)
 * Class: TAudio
 * Calls: (none)
 * Called by: `MeatBoyCharactor__Update`
 */
/* TAudio__SetMicrophonePosition(FPUVector const&) */

void __thiscall TAudio__SetMicrophonePosition(TAudio *self, FPUVector *arg1)

{
  *(uint32_t *)(self + 0x50) = *(uint32_t *)arg1;
  *(uint32_t *)(self + 0x54) = *(uint32_t *)(arg1 + 4);
  *(uint32_t *)(self + 0x58) = *(uint32_t *)(arg1 + 8);
  *(uint32_t *)(self + 0x5c) = *(uint32_t *)(arg1 + 0xc);
  return;
}

/* ======================================================================
 * TAudio__SetMicrophoneListeningRange  (Ghidra `SetMicrophoneListeningRange` @ 00579f80)
 * Signature: uint8_t __thiscall SetMicrophoneListeningRange(TAudio * self, float arg1)
 * Class: TAudio
 * Calls: (none)
 * Called by: `MeatBoyCharactor__Update`
 */
/* TAudio__SetMicrophoneListeningRange(float) */

void __thiscall TAudio__SetMicrophoneListeningRange(TAudio *self, float arg1)

{
  *(float *)(self + 0x60) = arg1 * arg1;
  return;
}

/* ======================================================================
 * TAudio__InvalidateInstance  (Ghidra `InvalidateInstance` @ 00579f90)
 * Signature: uint8_t __thiscall InvalidateInstance(TAudio * self, TAudioInstance * arg1)
 * Class: TAudio
 * Calls: `AutoLockSection__AutoLockSection`, `AutoLockSection__AutoLockSection__005b59d0`, `operator_delete`
 * Called by: `audDestroyCue`, `audStopCue`, `audUpdateDevice`
 */
/* TAudio__InvalidateInstance(TAudioInstance*) */

void __thiscall TAudio__InvalidateInstance(TAudio *self, TAudioInstance *arg1)

{
  ushort *puVar1;
  ushort uVar2;
  long *plVar3;
  uint64_t *puVar4;
  short sVar5;
  ushort uVar6;
  int iVar7;
  long lVar8;
  uint uVar9;
  ushort uVar10;
  uint uVar11;
  ulong uVar12;
  AutoLockSection aAStack_38[16];

  AutoLockSection__AutoLockSection(aAStack_38, (CriticalSection *)TAudioSection);
  if (arg1 != (TAudioInstance *)0x0) {
    sVar5 = *(short *)(self + 0x90);
    while (sVar5 != 0) {
      uVar12 = 0;
      while (true) {
        plVar3 = *(long **)(*(long *)(self + 0xa0) + (uVar12 & 0xffff) * 8);
        /* try { // try from 0057a03d to 0057a03f has its CatchHandler @ 0057a157 */
        iVar7 = (**(code **)(*plVar3 + 0x10))(plVar3, arg1);
        uVar9 = (uint)uVar12;
        if (iVar7 == 1)
          break;
        uVar12 = (ulong)(uVar9 + 1);
        if ((int)(uint) * (ushort *)(self + 0x90) <= (int)(uVar9 + 1))
          goto LAB_00579fc0;
      }
      puVar4 = *(uint64_t **)(*(long *)(self + 0xa0) + (uVar12 & 0xffff) * 8);
      if ((*(byte *)(puVar4 + 1) & 1) != 0) {
        *puVar4 = &PTR___cxa_pure_virtual_005dbd30;
        operator_delete(puVar4);
      }
      uVar6 = *(ushort *)(self + 0x90);
      if ((uVar9 + 1 < (uint)uVar6) && ((int)uVar9 < (int)(uVar6 - 1))) {
        lVar8 = (long)(int)uVar9 << 3;
        do {
          uVar11 = (int)uVar12 + 1;
          uVar12 = (ulong)uVar11;
          puVar4 = (uint64_t *)(*(long *)(self + 0xa0) + lVar8);
          lVar8 = lVar8 + 8;
          *puVar4 = *(uint64_t *)(*(long *)(self + 0xa0) + lVar8);
          uVar6 = *(ushort *)(self + 0x90);
        } while ((int)uVar11 < (int)(uVar6 - 1));
      }
      if ((*(int *)(self + 0x98) == 1) && (uVar10 = *(ushort *)(self + 0x92), uVar10 != 0)) {
        uVar6 = 0;
        do {
          puVar1 = (ushort *)(*(long *)(self + 0xa8) + (ulong)uVar6 * 2);
          uVar2 = *puVar1;
          if (uVar9 == uVar2) {
            *puVar1 = 0xffff;
            uVar10 = *(ushort *)(self + 0x92);
          } else if ((uVar9 < uVar2) && ((ushort)(uVar2 - 1) < 0xfffe)) {
            *puVar1 = uVar2 - 1;
            uVar10 = *(ushort *)(self + 0x92);
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar10);
        uVar6 = *(ushort *)(self + 0x90);
      }
      sVar5 = 0;
      if (uVar6 != 0) {
        sVar5 = uVar6 - 1;
      }
      *(short *)(self + 0x90) = sVar5;
    }
  LAB_00579fc0:
    uVar6 = *(ushort *)(self + 0x28);
    if (uVar6 != 0) {
      uVar9 = 0;
      do {
        while (arg1 !=
               *(TAudioInstance **)((ulong)(uVar9 & 0xffff) * 0x10 + *(long *)(self + 0x38) + 8)) {
          uVar9 = uVar9 + 1;
          if ((int)(uint)uVar6 <= (int)uVar9)
            goto LAB_0057a008;
        }
        *(uint64_t *)arg1 = 0;
        uVar6 = *(ushort *)(self + 0x28);
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < (int)(uint)uVar6);
    }
  }
LAB_0057a008:
  AutoLockSection__AutoLockSection__005b59d0(aAStack_38);
  return;
}

/* ======================================================================
 * TAudio__DecodeConsoleADPCMData  (Ghidra `DecodeConsoleADPCMData` @ 0057a170)
 * Signature: uint8_t __thiscall DecodeConsoleADPCMData(TAudio * self, AudioFile * arg1, uchar * * arg2, TWAVEFORMATEX * arg3, uint * arg4, uint * arg5)
 * Class: TAudio
 * Calls: `audDecodeConsoleADPCM`
 * Called by: `AudioFile__AudioFile`
 */
/* TAudio__DecodeConsoleADPCMData(AudioFile*, unsigned char**, TWAVEFORMATEX*, unsigned int&,
   unsigned int&) */

void __thiscall TAudio__DecodeConsoleADPCMData(TAudio *self, AudioFile *arg1, uchar **arg2,
                                               TWAVEFORMATEX *arg3, uint *arg4, uint *arg5)

{
  audDecodeConsoleADPCM(arg1, arg2, arg3, arg4, arg5);
  return;
}

/* ======================================================================
 * TAudio__OverrideMusicVolume  (Ghidra `OverrideMusicVolume` @ 0057a190)
 * Signature: uint8_t __thiscall OverrideMusicVolume(TAudio * self, int arg1)
 * Class: TAudio
 * Calls: (none)
 * Called by: (none)
 */
/* TAudio__OverrideMusicVolume(int) */

void __thiscall TAudio__OverrideMusicVolume(TAudio *self, int arg1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;

  bOverrideMusicVolume = arg1;
  if (pMusicInstances._40_2_ != 0) {
    uVar2 = 0;
    do {
      uVar3 = uVar2 & 0xffff;
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulong)uVar1;
      *(int *)(*(long *)(pMusicInstances._56_8_ + uVar3 * 8) + 0x20) = arg1;
    } while ((int)uVar1 < (int)(uint)(ushort)pMusicInstances._40_2_);
  }
  return;
}

/* ======================================================================
 * TAudio__TAudio  (Ghidra `~TAudio` @ 0057b490)
 * Signature: uint8_t __thiscall ~TAudio(TAudio * self)
 * Class: TAudio
 * Calls: `CriticalSection__CriticalSection__005b71d0`, `audDestroyDevice`, `free`
 * Called by: `TEngine__TEngine__00583e20`
 */
/* TAudio__TAudio() */

void __thiscall TAudio__TAudio(TAudio *self)

{
  /* try { // try from 0057b498 to 0057b49c has its CatchHandler @ 0057b5a7 */
  audDestroyDevice();
  if (*(int *)(self + 0xb0) == -0x5eef3582) {
    *(uint32_t *)(self + 0xb0) = 0;
    free(*(void **)(*(long *)(self + 0xa0) + -8));
    if (*(int *)(self + 0x98) == 1) {
      free(*(void **)(*(long *)(self + 0xa8) + -8));
    }
    *(uint32_t *)(self + 0xb0) = 0;
    *(uint16_t *)(self + 0x92) = 0;
    *(uint16_t *)(self + 0x90) = 0;
    *(uint64_t *)(self + 0xa0) = 0;
    *(uint64_t *)(self + 0xa8) = 0;
  }
  /* try { // try from 0057b4ad to 0057b4b1 has its CatchHandler @ 0057b5d4 */
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)(self + 0x68));
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
 * TAudio__TAudio__0057b5e0  (Ghidra `TAudio` @ 0057b5e0)
 * Signature: uint8_t __thiscall TAudio(TAudio * self)
 * Class: TAudio
 * Calls: `CriticalSection__CriticalSection`, `audCreateDevice`, `free`, `malloc`, `memcpy`
 * Called by: `TEngine__TEngine`
 */
/* TAudio__TAudio__0057b5e0() */

void __thiscall TAudio__TAudio__0057b5e0(TAudio *self)

{
  ushort uVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  ulong uVar5;
  ushort uVar6;
  size_t __n;
  ulong uVar7;
  uint64_t *puVar8;
  bool bVar9;
  byte bVar10;

  bVar10 = 0;
  CriticalSection__CriticalSection((CriticalSection *)self);
  *(uint16_t *)(self + 0x2a) = 0;
  *(uint16_t *)(self + 0x28) = 0;
  *(uint16_t *)(self + 0x34) = 1;
  *(uint64_t *)(self + 0x38) = 0;
  *(uint64_t *)(self + 0x40) = 0;
  *(uint32_t *)(self + 0x48) = 0;
  self[0x2c] = (TAudio)0x4;
  *(uint32_t *)(self + 0x30) = 0;
  *(uint32_t *)(self + 0x50) = 0;
  *(uint32_t *)(self + 0x54) = 0;
  *(uint32_t *)(self + 0x58) = 0;
  *(uint32_t *)(self + 0x5c) = 0;
  *(uint32_t *)(self + 0x60) = 0;
  *(uint32_t *)(self + 100) = 0;
  /* try { // try from 0057b66f to 0057b673 has its CatchHandler @ 0057b96d */
  CriticalSection__CriticalSection((CriticalSection *)(self + 0x68));
  *(uint16_t *)(self + 0x92) = 0;
  *(uint16_t *)(self + 0x90) = 0;
  *(uint16_t *)(self + 0x9c) = 1;
  *(uint64_t *)(self + 0xa0) = 0;
  *(uint64_t *)(self + 0xa8) = 0;
  *(uint32_t *)(self + 0xb0) = 0;
  self[0x94] = (TAudio)0x4;
  *(uint32_t *)(self + 0x98) = 0;
  *(uint32_t *)(self + 0x30) = 0;
  if (*(int *)(self + 0x48) == -0x5eef3582) {
    if (*(ushort *)(self + 0x2a) < 5) {
      uVar7 = (ulong)(byte)self[0x2c];
      *(uint16_t *)(self + 0x2a) = 5;
      pvVar2 = *(void **)(self + 0x38);
      pvVar3 = malloc(uVar7 + 0x60);
      if (pvVar3 == (void *)0x0) {
        *(uint64_t *)(self + 0x38) = 0;
      } else {
        pvVar4 = (void *)((long)pvVar3 + 0x10U + (uVar7 - ((long)pvVar3 + 0x10U) % uVar7) % uVar7);
        *(uint64_t *)((long)pvVar4 + -0x10) = 0x50;
        *(void **)((long)pvVar4 + -8) = pvVar3;
        if (pvVar2 != (void *)0x0) {
          __n = 0x50;
          if (*(ulong *)((long)pvVar2 + -0x10) < 0x51) {
            __n = *(ulong *)((long)pvVar2 + -0x10);
          }
          memcpy(pvVar4, pvVar2, __n);
          free(*(void **)((long)pvVar2 + -8));
        }
        *(void **)(self + 0x38) = pvVar4;
        if (*(int *)(self + 0x30) == 1) {
          uVar6 = *(ushort *)(self + 0x2a);
          uVar5 = (ulong)(byte)self[0x2c];
          pvVar2 = (void *)0x0;
          pvVar3 = *(void **)(self + 0x40);
          uVar7 = (ulong)uVar6 * 2;
          pvVar4 = malloc(uVar5 + 0x10 + uVar7);
          if (pvVar4 != (void *)0x0) {
            pvVar2 =
                (void *)((long)pvVar4 + 0x10U + (uVar5 - ((long)pvVar4 + 0x10U) % uVar5) % uVar5);
            *(ulong *)((long)pvVar2 + -0x10) = uVar7;
            *(void **)((long)pvVar2 + -8) = pvVar4;
            if (pvVar3 != (void *)0x0) {
              uVar5 = *(ulong *)((long)pvVar3 + -0x10);
              if (uVar7 <= *(ulong *)((long)pvVar3 + -0x10)) {
                uVar5 = uVar7;
              }
              memcpy(pvVar2, pvVar3, uVar5);
              free(*(void **)((long)pvVar3 + -8));
            }
            uVar6 = *(ushort *)(self + 0x2a);
          }
          uVar1 = *(ushort *)(self + 0x28);
          *(void **)(self + 0x40) = pvVar2;
          if (uVar1 < uVar6) {
            while (true) {
              uVar7 = (ulong)uVar1;
              uVar1 = uVar1 + 1;
              *(uint16_t *)((long)pvVar2 + uVar7 * 2) = 0xffff;
              if (uVar6 <= uVar1)
                break;
              pvVar2 = *(void **)(self + 0x40);
            }
          }
        }
      }
    }
  } else {
    uVar7 = (ulong)(byte)self[0x2c];
    pvVar2 = malloc(uVar7 + 0x60);
    puVar8 = (uint64_t *)0x0;
    if (pvVar2 != (void *)0x0) {
      puVar8 =
          (uint64_t *)((long)pvVar2 + 0x10U + (uVar7 - ((long)pvVar2 + 0x10U) % uVar7) % uVar7);
      puVar8[-2] = 0x50;
      puVar8[-1] = pvVar2;
    }
    bVar9 = ((ulong)puVar8 & 1) != 0;
    *(uint64_t **)(self + 0x38) = puVar8;
    uVar7 = 0x50;
    if (bVar9) {
      *(uint8_t *)puVar8 = 0;
      uVar7 = 0x4f;
      puVar8 = (uint64_t *)((long)puVar8 + 1);
    }
    if (((ulong)puVar8 & 2) != 0) {
      *(uint16_t *)puVar8 = 0;
      uVar7 = (ulong)((int)uVar7 - 2);
      puVar8 = (uint64_t *)((long)puVar8 + 2);
    }
    if (((ulong)puVar8 & 4) != 0) {
      *(uint32_t *)puVar8 = 0;
      uVar7 = (ulong)((int)uVar7 - 4);
      puVar8 = (uint64_t *)((long)puVar8 + 4);
    }
    for (uVar5 = uVar7 >> 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar8 = 0;
      puVar8 = puVar8 + (ulong)bVar10 * -2 + 1;
    }
    if ((uVar7 & 4) != 0) {
      *(uint32_t *)puVar8 = 0;
      puVar8 = (uint64_t *)((long)puVar8 + 4);
    }
    if ((uVar7 & 2) != 0) {
      *(uint16_t *)puVar8 = 0;
      puVar8 = (uint64_t *)((long)puVar8 + 2);
    }
    if (bVar9) {
      *(uint8_t *)puVar8 = 0;
    }
    *(uint16_t *)(self + 0x28) = 0;
    *(uint16_t *)(self + 0x2a) = 5;
    *(uint32_t *)(self + 0x48) = 0xa110ca7e;
    *(uint16_t *)(self + 0x34) = 5;
  }
  /* try { // try from 0057b76f to 0057b773 has its CatchHandler @ 0057b980 */
  audCreateDevice();
  Audio = self;
  return;
}
