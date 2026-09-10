/* src/game/classes/AnimationManager.c — 2 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "AnimationManager.h"

/* ======================================================================
 * AnimationManager__UpdateCallbacks  (Ghidra `UpdateCallbacks` @ 00572640)
 * Signature: uint8_t __stdcall UpdateCallbacks(void)
 * Class: AnimationManager
 * Calls: `AutoLockSection__AutoLockSection`, `AutoLockSection__AutoLockSection__005b59d0`
 * Called by: `TEngine__Update`
 */
/* AnimationManager__UpdateCallbacks() */

void AnimationManager__UpdateCallbacks(void)

{
  uint64_t *puVar1;
  ushort *puVar2;
  ushort uVar3;
  long lVar4;
  uint64_t uVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  ushort uVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  int iVar13;
  ulong uVar14;
  ushort uVar15;
  float fVar16;
  float fVar17;
  AutoLockSection local_28 [24];
  
  AutoLockSection__AutoLockSection(local_28,(CriticalSection *)AnimationCallbackSection);
  uVar8 = (uint)(ushort)pAnimCallbacks._40_2_;
  if (pAnimCallbacks._40_2_ != 0) {
    uVar12 = 0;
    do {
      puVar1 = (uint64_t *)(pAnimCallbacks._56_8_ + (uVar12 & 0xffff) * 0x28);
      uVar11 = (uint)uVar12;
      if (((float *)puVar1[4] == (float *)0x0) || (*(float *)puVar1[4] < *(float *)(puVar1 + 3))) {
        lVar7 = puVar1[2];
        if (lVar7 != 0) {
          if (*(int *)(lVar7 + 0x20) != -1) {
            lVar4 = *(long *)(*(long *)(*(long *)(lVar7 + 0x28) + 0x48) +
                             (ulong)(ushort)*(int *)(lVar7 + 0x20) * 8);
            if (*(int *)(lVar4 + 0x10) == 1) {
              iVar13 = *(int *)(lVar4 + 0x18);
              fVar16 = *(float *)(lVar7 + 0x58);
              fVar17 = *(float *)(lVar4 + 0x20);
            }
            else {
              fVar16 = *(float *)(lVar7 + 0x58);
              iVar13 = 0;
              fVar17 = 0.0;
            }
            if ((fVar16 <= fVar17) || (iVar13 != 0)) goto LAB_005727b0;
          }
          goto LAB_005726a1;
        }
LAB_005727b0:
        uVar12 = (ulong)(uVar11 + 1);
        uVar6 = uVar8 & 0xffff;
      }
      else {
        lVar7 = puVar1[2];
LAB_005726a1:
                    /* try { // try from 005726a5 to 005726a6 has its CatchHandler @ 0057283d */
        (*(code *)*puVar1)(lVar7,puVar1[1]);
        uVar10 = (uint)(ushort)pAnimCallbacks._40_2_;
        if ((uVar11 + 1 < uVar10) && ((int)uVar11 < (int)(uVar10 - 1))) {
          lVar7 = (long)(int)uVar11 * 0x28;
          uVar14 = uVar12;
          do {
            uVar5 = pAnimCallbacks._56_8_;
            uVar8 = (int)uVar14 + 1;
            uVar14 = (ulong)uVar8;
            puVar1 = (uint64_t *)(pAnimCallbacks._56_8_ + lVar7);
            lVar7 = lVar7 + 0x28;
            *puVar1 = *(uint64_t *)(pAnimCallbacks._56_8_ + lVar7);
            puVar1[1] = *(uint64_t *)(uVar5 + 8 + lVar7);
            puVar1[2] = *(uint64_t *)(uVar5 + 0x10 + lVar7);
            puVar1[3] = *(uint64_t *)(uVar5 + 0x18 + lVar7);
            puVar1[4] = *(uint64_t *)(uVar5 + 0x20 + lVar7);
            uVar10 = (uint)(ushort)pAnimCallbacks._40_2_;
          } while ((int)uVar8 < (int)(uVar10 - 1));
        }
        if (pAnimCallbacks._48_4_ == 1) {
          if (pAnimCallbacks._42_2_ != 0) {
            uVar9 = 0;
            uVar15 = pAnimCallbacks._42_2_;
            do {
              while( true ) {
                puVar2 = (ushort *)(pAnimCallbacks._64_8_ + (ulong)uVar9 * 2);
                uVar3 = *puVar2;
                if (uVar11 != uVar3) break;
                *puVar2 = 0xffff;
                uVar9 = uVar9 + 1;
                uVar15 = pAnimCallbacks._42_2_;
                if ((ushort)pAnimCallbacks._42_2_ <= uVar9) goto LAB_00572831;
              }
              if ((uVar11 < uVar3) && ((ushort)(uVar3 - 1) < 0xfffe)) {
                *puVar2 = uVar3 - 1;
                uVar15 = pAnimCallbacks._42_2_;
              }
              uVar9 = uVar9 + 1;
            } while (uVar9 < uVar15);
LAB_00572831:
            uVar10 = (uint)(ushort)pAnimCallbacks._40_2_;
          }
        }
        uVar6 = 0;
        uVar8 = 0;
        if ((short)uVar10 != 0) {
          uVar8 = uVar10 - 1;
          uVar6 = uVar8 & 0xffff;
        }
        pAnimCallbacks._40_2_ = (uint16_t)uVar8;
        if ((int)uVar11 < 2) {
          uVar12 = 1;
        }
      }
    } while ((int)uVar12 < (int)uVar6);
  }
  AutoLockSection__AutoLockSection__005b59d0(local_28);
  return;
}

/* ======================================================================
 * AnimationManager__RemoveAllCallbacks  (Ghidra `RemoveAllCallbacks` @ 00572c20)
 * Signature: uint8_t __stdcall RemoveAllCallbacks(void)
 * Class: AnimationManager
 * Calls: `AutoLockSection__AutoLockSection`, `AutoLockSection__AutoLockSection__005b59d0`
 * Called by: `GSuperMeatBoy__SetCurrentLevel`, `SMBPalette__SMBPalette`
 */
/* AnimationManager__RemoveAllCallbacks() */

void AnimationManager__RemoveAllCallbacks(void)

{
  uint64_t *puVar1;
  ushort *puVar2;
  uint64_t uVar3;
  long lVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  ushort uVar8;
  int iVar9;
  AutoLockSection aAStack_18 [24];
  
  AutoLockSection__AutoLockSection(aAStack_18,(CriticalSection *)AnimationCallbackSection);
  uVar7 = (uint)(ushort)pAnimCallbacks._40_2_;
  if (pAnimCallbacks._40_2_ != 0) {
    do {
      if ((1 < (ushort)uVar7) && (1 < (uVar7 & 0xffff))) {
        lVar4 = 0;
        iVar9 = 0;
        do {
          uVar3 = pAnimCallbacks._56_8_;
          iVar9 = iVar9 + 1;
          puVar1 = (uint64_t *)(pAnimCallbacks._56_8_ + lVar4);
          lVar4 = lVar4 + 0x28;
          *puVar1 = *(uint64_t *)(pAnimCallbacks._56_8_ + lVar4);
          puVar1[1] = *(uint64_t *)(uVar3 + 8 + lVar4);
          puVar1[2] = *(uint64_t *)(uVar3 + 0x10 + lVar4);
          puVar1[3] = *(uint64_t *)(uVar3 + 0x18 + lVar4);
          puVar1[4] = *(uint64_t *)(uVar3 + 0x20 + lVar4);
          uVar7 = (uint)(ushort)pAnimCallbacks._40_2_;
        } while (iVar9 < (int)(uVar7 - 1));
      }
      if ((pAnimCallbacks._48_4_ == 1) && (pAnimCallbacks._42_2_ != 0)) {
        uVar6 = 0;
        uVar8 = pAnimCallbacks._42_2_;
        do {
          while( true ) {
            puVar2 = (ushort *)(pAnimCallbacks._64_8_ + (ulong)uVar6 * 2);
            if (*puVar2 != 0) break;
            *puVar2 = 0xffff;
            uVar6 = uVar6 + 1;
            uVar8 = pAnimCallbacks._42_2_;
            if ((ushort)pAnimCallbacks._42_2_ <= uVar6) goto LAB_00572d35;
          }
          uVar5 = *puVar2 - 1;
          if (uVar5 < 0xfffe) {
            *puVar2 = uVar5;
            uVar8 = pAnimCallbacks._42_2_;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar8);
LAB_00572d35:
        uVar7 = (uint)(ushort)pAnimCallbacks._40_2_;
      }
      else {
        pAnimCallbacks._40_2_ = (uint16_t)uVar7;
      }
      if (pAnimCallbacks._40_2_ == 0) {
        pAnimCallbacks._40_2_ = 0;
        goto LAB_00572d4e;
      }
      uVar7 = uVar7 - 1;
      pAnimCallbacks._40_2_ = (uint16_t)uVar7;
    } while (pAnimCallbacks._40_2_ != 0);
    pAnimCallbacks._40_2_ = 0;
  }
LAB_00572d4e:
  AutoLockSection__AutoLockSection__005b59d0(aAStack_18);
  return;
}
