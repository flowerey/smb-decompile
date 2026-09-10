/* src/game/classes/TAudioCue.c — 4 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "TAudioCue.h"

/* ======================================================================
 * TAudioCue__TAudioCue  (Ghidra `TAudioCue` @ 0057aaf0)
 * Signature: uint8_t __thiscall TAudioCue(TAudioCue * self)
 * Class: TAudioCue
 * Calls: (none)
 * Called by: (none)
 */
/* TAudioCue__TAudioCue() */

void __thiscall TAudioCue__TAudioCue(TAudioCue *self)

{
  *(uint32_t *)(self + 8) = 100;
  *(uint32_t *)(self + 0xc) = 0xffffffff;
  *(uint8_t **)(self + 0x10) = &DAT_008184c8 /* R:0.00016803004837129265f */;
  *(uint32_t *)(self + 0x18) = 0;
  *(uint64_t *)(self + 0x20) = 0;
  *(uint32_t *)(self + 0x28) = 0;
  *(uint32_t *)(self + 0x2c) = 0;
  return;
}

/* ======================================================================
 * TAudioCue__TAudioCue__0057ab30  (Ghidra `~TAudioCue` @ 0057ab30)
 * Signature: uint8_t __thiscall ~TAudioCue(TAudioCue * self)
 * Class: TAudioCue
 * Calls: `DestroyCachedCue`
 * Called by: `EditorButton_ChapterLevelMusicPress`, `EditorForm_ChapterUploadFormCancel`, `FinalBoss__FinalBoss`, `FlashSoundLibrary__FlashSoundLibrary__00575090`, `GSMBMenu__GSMBMenu`, `SMBChapter__LoadInternetsChapterMusic`, `SMBChapter__UnloadChapter`
 */
/* WARNING: Removing unreachable block (ram,0x0057aba6) */
/* TAudioCue__TAudioCue__0057ab30() */

void __thiscall TAudioCue__TAudioCue__0057ab30(TAudioCue *self)

{
  allocator *paVar1;
  int *piVar2;
  int iVar3;

  if (*(uint *)(self + 0xc) != 0xffffffff) {
    /* try { // try from 0057ab45 to 0057ab51 has its CatchHandler @ 0057ab8b */
    Loader__Wait(*(uint *)(self + 0xc), 1);
  }
  DestroyCachedCue((void **)self);
  paVar1 = (allocator *)(*(long *)(self + 0x10) + -0x18);
  if (paVar1 != (allocator *)&std__string_Rep_S_empty_rep_storage) {
    LOCK();
    piVar2 = (int *)(*(long *)(self + 0x10) + -8);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 < 1) {
      std__string_Rep_M_destroy(paVar1);
    }
  }
  return;
}

/* ======================================================================
 * TAudioCue__Play  (Ghidra `Play` @ 0057abc0)
 * Signature: uint8_t __thiscall Play(TAudioCue * self, uint arg1, uint arg2, TAudioInstance * arg3)
 * Class: TAudioCue
 * Calls: `AutoLockSection__AutoLockSection`, `AutoLockSection__AutoLockSection__005b59d0`, `audPlayCue`, `free`, `malloc`, `memcpy`, `operator_new`
 * Called by: `EditorButton_ChapterLevelMusicPress`, `FinalBoss__SetToPhaseTwo`, `FlashSoundLibrary__Play`, `GSMBMenu__ShowChapterEnd`, `GSMBMenu__ShowStartMenu`, `GSMBMenu__ShowTitleMenu`, `GSMBMenu__ShowWorldMap`, `GSMBMenu__TransitionInTitleFromGame`, `GSMBMenu__TransitionInTitleFromWorld`, `SMBChapter__PlayChapterMenuMusic` (+3 more)
 */
/* TAudioCue__Play(unsigned int, unsigned int, TAudioInstance*) */

TAudioInstance *__thiscall TAudioCue__Play(TAudioCue *self, uint arg1, uint arg2,
                                           TAudioInstance *arg3)

{
  ushort uVar1;
  uint64_t uVar2;
  long lVar3;
  short sVar4;
  short sVar5;
  ushort uVar6;
  void *pvVar7;
  uint32_t *puVar8;
  void *pvVar9;
  void *pvVar10;
  ulong uVar11;
  ulong uVar12;
  short *psVar13;
  ushort *puVar14;
  uint64_t *puVar15;
  bool bVar16;
  byte bVar17;
  AutoLockSection local_48[24];

  bVar17 = 0;
  if (*(uint *)(self + 0xc) != 0xffffffff) {
    Loader__Wait(*(uint *)(self + 0xc), 1);
  }
  if ((arg3 != (TAudioInstance *)0x0) || ((arg2 & 1) == 0))
    goto LAB_0057ac09;
  arg3 = operator_new(0x28);
  *(uint64_t *)arg3 = 0;
  lVar3 = Audio;
  *(uint32_t *)(arg3 + 8) = 100;
  *(uint64_t *)(arg3 + 0x10) = 0;
  *(uint32_t *)(arg3 + 0x18) = 0;
  *(uint32_t *)(arg3 + 0x1c) = 0;
  *(uint32_t *)(arg3 + 0x20) = 0;
  AutoLockSection__AutoLockSection(local_48, (CriticalSection *)TAudioSection);
  if (*(int *)(lVar3 + 0x48) == -0x5eef3582) {
    uVar6 = *(ushort *)(lVar3 + 0x28);
    if (*(ushort *)(lVar3 + 0x2a) <= uVar6) {
      uVar6 = *(ushort *)(lVar3 + 0x2a) + *(short *)(lVar3 + 0x34);
      uVar11 = (ulong) * (byte *)(lVar3 + 0x2c);
      pvVar7 = (void *)0x0;
      pvVar9 = *(void **)(lVar3 + 0x38);
      *(ushort *)(lVar3 + 0x2a) = uVar6;
      uVar12 = (ulong)uVar6 * 0x10;
      pvVar10 = malloc(uVar11 + 0x10 + uVar12);
      if (pvVar10 != (void *)0x0) {
        pvVar7 =
            (void *)((long)pvVar10 + 0x10U + (uVar11 - ((long)pvVar10 + 0x10U) % uVar11) % uVar11);
        *(ulong *)((long)pvVar7 + -0x10) = uVar12;
        *(void **)((long)pvVar7 + -8) = pvVar10;
        if (pvVar9 != (void *)0x0) {
          uVar11 = *(ulong *)((long)pvVar9 + -0x10);
          if (uVar12 <= *(ulong *)((long)pvVar9 + -0x10)) {
            uVar11 = uVar12;
          }
          memcpy(pvVar7, pvVar9, uVar11);
          free(*(void **)((long)pvVar9 + -8));
        }
      }
      pvVar9 = *(void **)(lVar3 + 0x40);
      *(void **)(lVar3 + 0x38) = pvVar7;
      if (pvVar9 != (void *)0x0) {
        uVar11 = (ulong) * (byte *)(lVar3 + 0x2c);
        pvVar7 = (void *)0x0;
        uVar12 = (ulong) * (ushort *)(lVar3 + 0x2a) * 2;
        pvVar10 = malloc(uVar11 + 0x10 + uVar12);
        if (pvVar10 != (void *)0x0) {
          pvVar7 = (void *)((long)pvVar10 + 0x10U +
                            (uVar11 - ((long)pvVar10 + 0x10U) % uVar11) % uVar11);
          *(ulong *)((long)pvVar7 + -0x10) = uVar12;
          *(void **)((long)pvVar7 + -8) = pvVar10;
          uVar11 = *(ulong *)((long)pvVar9 + -0x10);
          if (uVar12 <= *(ulong *)((long)pvVar9 + -0x10)) {
            uVar11 = uVar12;
          }
          memcpy(pvVar7, pvVar9, uVar11);
          free(*(void **)((long)pvVar9 + -8));
        }
        uVar6 = *(ushort *)(lVar3 + 0x28);
        uVar1 = *(ushort *)(lVar3 + 0x2a);
        *(void **)(lVar3 + 0x40) = pvVar7;
        if (uVar1 <= uVar6)
          goto LAB_0057adc9;
        while (true) {
          uVar12 = (ulong)uVar6;
          uVar6 = uVar6 + 1;
          *(uint16_t *)((long)pvVar7 + uVar12 * 2) = 0xffff;
          if (uVar1 <= uVar6)
            break;
          pvVar7 = *(void **)(lVar3 + 0x40);
        }
      }
      uVar6 = *(ushort *)(lVar3 + 0x28);
    }
  } else {
    uVar12 = (ulong) * (byte *)(lVar3 + 0x2c);
    *(uint32_t *)(lVar3 + 0x30) = 0;
    pvVar7 = malloc(uVar12 + 0x60);
    puVar15 = (uint64_t *)0x0;
    if (pvVar7 != (void *)0x0) {
      puVar15 =
          (uint64_t *)((long)pvVar7 + 0x10U + (uVar12 - ((long)pvVar7 + 0x10U) % uVar12) % uVar12);
      puVar15[-2] = 0x50;
      puVar15[-1] = pvVar7;
    }
    bVar16 = ((ulong)puVar15 & 1) != 0;
    *(uint64_t **)(lVar3 + 0x38) = puVar15;
    uVar12 = 0x50;
    if (bVar16) {
      *(uint8_t *)puVar15 = 0;
      uVar12 = 0x4f;
      puVar15 = (uint64_t *)((long)puVar15 + 1);
    }
    if (((ulong)puVar15 & 2) != 0) {
      *(uint16_t *)puVar15 = 0;
      uVar12 = (ulong)((int)uVar12 - 2);
      puVar15 = (uint64_t *)((long)puVar15 + 2);
    }
    if (((ulong)puVar15 & 4) != 0) {
      *(uint32_t *)puVar15 = 0;
      uVar12 = (ulong)((int)uVar12 - 4);
      puVar15 = (uint64_t *)((long)puVar15 + 4);
    }
    for (uVar11 = uVar12 >> 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *puVar15 = 0;
      puVar15 = puVar15 + (ulong)bVar17 * -2 + 1;
    }
    if ((uVar12 & 4) != 0) {
      *(uint32_t *)puVar15 = 0;
      puVar15 = (uint64_t *)((long)puVar15 + 4);
    }
    if ((uVar12 & 2) != 0) {
      *(uint16_t *)puVar15 = 0;
      puVar15 = (uint64_t *)((long)puVar15 + 2);
    }
    if (bVar16) {
      *(uint8_t *)puVar15 = 0;
    }
    *(uint16_t *)(lVar3 + 0x28) = 0;
    *(uint16_t *)(lVar3 + 0x2a) = 5;
    uVar6 = 0;
    *(uint32_t *)(lVar3 + 0x48) = 0xa110ca7e;
    *(uint16_t *)(lVar3 + 0x34) = 5;
  }
LAB_0057adc9:
  if ((*(int *)(lVar3 + 0x30) == 1) && (*(short *)(lVar3 + 0x2a) != 0)) {
    puVar14 = *(ushort **)(lVar3 + 0x40);
    sVar5 = 1;
    uVar1 = *puVar14;
    while (uVar1 != 0xffff) {
      puVar14 = puVar14 + 1;
      if (sVar5 == *(short *)(lVar3 + 0x2a))
        goto LAB_0057add4;
      sVar5 = sVar5 + 1;
      uVar1 = *puVar14;
    }
    *puVar14 = uVar6;
    uVar6 = *(ushort *)(lVar3 + 0x28);
  }
LAB_0057add4:
  puVar8 = (uint32_t *)((ulong)uVar6 * 0x10 + *(long *)(lVar3 + 0x38));
  *puVar8 = 1;
  *(TAudioInstance **)(puVar8 + 2) = arg3;
  *(short *)(lVar3 + 0x28) = *(short *)(lVar3 + 0x28) + 1;
  AutoLockSection__AutoLockSection__005b59d0(local_48);
LAB_0057ac09:
  audPlayCue(*(uint64_t *)self, arg1, arg3);
  uVar2 = pMusicInstances._56_8_;
  if (((byte)self[0x18] & 5) != 0) {
    if (pMusicInstances._72_4_ == -0x5eef3582) {
      if ((ushort)pMusicInstances._42_2_ <= (ushort)pMusicInstances._40_2_) {
        pMusicInstances._42_2_ = pMusicInstances._42_2_ + pMusicInstances._52_2_;
        uVar11 = (ulong)pMusicInstances[0x2c];
        pvVar7 = (void *)0x0;
        uVar12 = (ulong)(ushort)pMusicInstances._42_2_ * 8;
        pvVar9 = malloc(uVar11 + 0x10 + uVar12);
        if (pvVar9 != (void *)0x0) {
          pvVar7 =
              (void *)((long)pvVar9 + 0x10U + (uVar11 - ((long)pvVar9 + 0x10U) % uVar11) % uVar11);
          *(ulong *)((long)pvVar7 + -0x10) = uVar12;
          *(void **)((long)pvVar7 + -8) = pvVar9;
          if (uVar2 != 0) {
            uVar11 = *(ulong *)(uVar2 + -0x10);
            if (uVar12 < uVar11 || uVar12 - uVar11 == 0) {
              uVar11 = uVar12;
            }
            memcpy(pvVar7, (void *)uVar2, uVar11);
            free(*(void **)(uVar2 + -8));
          }
        }
        uVar2 = pMusicInstances._64_8_;
        uVar6 = pMusicInstances._42_2_;
        pMusicInstances._56_8_ = pvVar7;
        if (pMusicInstances._64_8_ != 0) {
          uVar11 = (ulong)pMusicInstances[0x2c];
          uVar12 = (ulong)(ushort)pMusicInstances._42_2_ * 2;
          pvVar9 = malloc(uVar11 + 0x10 + uVar12);
          pvVar7 = (void *)0x0;
          uVar1 = pMusicInstances._40_2_;
          if (pvVar9 != (void *)0x0) {
            pvVar7 = (void *)((long)pvVar9 + 0x10U +
                              (uVar11 - ((long)pvVar9 + 0x10U) % uVar11) % uVar11);
            *(void **)((long)pvVar7 + -8) = pvVar9;
            *(ulong *)((long)pvVar7 + -0x10) = uVar12;
            uVar11 = *(ulong *)(uVar2 + -0x10);
            if (uVar12 <= *(ulong *)(uVar2 + -0x10)) {
              uVar11 = uVar12;
            }
            memcpy(pvVar7, (void *)uVar2, uVar11);
            free(*(void **)(uVar2 + -8));
            uVar1 = pMusicInstances._40_2_;
            uVar6 = pMusicInstances._42_2_;
          }
          for (; pMusicInstances._64_8_ = pvVar7, uVar1 < uVar6; uVar1 = uVar1 + 1) {
            *(uint16_t *)(pMusicInstances._64_8_ + (ulong)uVar1 * 2) = 0xffff;
            pvVar7 = (void *)pMusicInstances._64_8_;
          }
        }
      }
      if ((pMusicInstances._48_4_ == 1) && (pMusicInstances._42_2_ != 0)) {
        sVar4 = 1;
        sVar5 = *(short *)pMusicInstances._64_8_;
        psVar13 = (short *)pMusicInstances._64_8_;
        while (sVar5 != -1) {
          psVar13 = psVar13 + 1;
          if (sVar4 == pMusicInstances._42_2_)
            goto LAB_0057acfe;
          sVar4 = sVar4 + 1;
          sVar5 = *psVar13;
        }
        *psVar13 = pMusicInstances._40_2_;
      }
    } else {
      uVar12 = (ulong)pMusicInstances[0x2c];
      pMusicInstances._48_4_ = 0;
      pvVar7 = malloc(uVar12 + 0x38);
      puVar15 = (uint64_t *)0x0;
      if (pvVar7 != (void *)0x0) {
        puVar15 = (uint64_t *)((long)pvVar7 + 0x10U +
                               (uVar12 - ((long)pvVar7 + 0x10U) % uVar12) % uVar12);
        puVar15[-2] = 0x28;
        puVar15[-1] = pvVar7;
      }
      pMusicInstances._56_8_ = puVar15;
      *puVar15 = 0;
      puVar15[1] = 0;
      puVar15[2] = 0;
      puVar15[3] = 0;
      puVar15[4] = 0;
      pMusicInstances._40_2_ = 0;
      pMusicInstances._42_2_ = 5;
      pMusicInstances._72_4_ = 0xa110ca7e;
      pMusicInstances._52_2_ = 5;
    }
  LAB_0057acfe:
    *(TAudioInstance **)(pMusicInstances._56_8_ + (ulong)(ushort)pMusicInstances._40_2_ * 8) = arg3;
    pMusicInstances._40_2_ = pMusicInstances._40_2_ + 1;
    if (bOverrideMusicVolume == 1) {
      *(uint32_t *)(arg3 + 0x20) = 1;
    }
  }
  return arg3;
}

/* ======================================================================
 * TAudioCue__IsMusic  (Ghidra `IsMusic` @ 0057b270)
 * Signature: uint8_t __thiscall IsMusic(TAudioCue * self)
 * Class: TAudioCue
 * Calls: (none)
 * Called by: `FlashSoundLibrary__Play`
 */
/* TAudioCue__IsMusic() */

bool __thiscall TAudioCue__IsMusic(TAudioCue *self)

{
  return (*(uint *)(self + 0x18) & 1) != 0 || (*(uint *)(self + 0x18) & 4) != 0;
}
