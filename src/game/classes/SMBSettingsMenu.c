/* src/game/classes/SMBSettingsMenu.c — 20 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "SMBSettingsMenu.h"

/* ======================================================================
 * SMBSettingsMenu__Render  (Ghidra `Render` @ 005104a0)
 * Signature: uint8_t __thiscall Render(SMBSettingsMenu * self)
 * Class: SMBSettingsMenu
 * Calls: `SMBSelectionMenu__Render`
 * Called by: (none)
 */
/* SMBSettingsMenu__Render() */

void __thiscall SMBSettingsMenu__Render(SMBSettingsMenu *self)

{
  uint *puVar1;
  uint8_t *puVar2;

  puVar1 = (uint *)(pScreenResolutions._56_8_ + (ulong)iSelectedResolutionIndex * 8);
  FlashTextField__SetText(*(char **)(self + 0xb8), &DAT_005c8bf4 /* R:"%i x %i" */, (ulong)*puVar1,
                          (ulong)puVar1[1]);
  if (*(wchar_t **)(self + 200) != (wchar_t *)0x0) {
    puVar2 = &DAT_005c8bd8 /* R:1.1070257868166055e-43f */;
    if (bSelectedResFullScreen != 1) {
      puVar2 = &DAT_005c8be4 /* R:1.1070257868166055e-43f */;
    }
    FlashTextField__SetText(*(wchar_t **)(self + 200), puVar2);
  }
  SMBSelectionMenu__Render((SMBSelectionMenu *)self);
  return;
}

/* ======================================================================
 * SMBSettingsMenu__Update  (Ghidra `Update` @ 00510500)
 * Signature: uint8_t __thiscall Update(SMBSettingsMenu * self)
 * Class: SMBSettingsMenu
 * Calls: `SMBSelectionMenu__Update`
 * Called by: (none)
 */
/* SMBSettingsMenu__Update() */

void __thiscall SMBSettingsMenu__Update(SMBSettingsMenu *self)

{
  SMBSelectionMenu__Update();
  FlashTextField__SetText(*(wchar_t **)(self + 0x98), &DAT_005c6660 /* R:5.184804318001823e-44f */,
                          (ulong)GLOBALSFXVOLUME);
  FlashTextField__SetText(*(wchar_t **)(self + 0x90), &DAT_005c6660 /* R:5.184804318001823e-44f */,
                          (ulong)GLOBALMUSICVOLUME);
  return;
}

/* ======================================================================
 * SMBSettingsMenu__DeactivationFinished  (Ghidra `DeactivationFinished` @ 00510540)
 * Signature: uint8_t __thiscall DeactivationFinished(SMBSettingsMenu * self)
 * Class: SMBSettingsMenu
 * Calls: (none)
 * Called by: (none)
 */
/* SMBSettingsMenu__DeactivationFinished() */

void __thiscall SMBSettingsMenu__DeactivationFinished(SMBSettingsMenu *self)

{
  *(ushort *)(self + 0x34) = *(ushort *)(self + 0x34) & 0xfc00;
  *(uint32_t *)(self + 0x30) = 4;
  return;
}

/* ======================================================================
 * SMBSettingsMenu__SMBSettingsMenu  (Ghidra `~SMBSettingsMenu` @ 00510550)
 * Signature: uint8_t __thiscall ~SMBSettingsMenu(SMBSettingsMenu * self)
 * Class: SMBSettingsMenu
 * Calls: `SMBSelectionMenu__SMBSelectionMenu__005100b0`, `SMBSettingsMenu__SMBSettingsMenu__00510980`
 * Called by: (none)
 */
/* SMBSettingsMenu__SMBSettingsMenu__00510980() */

void __thiscall SMBSettingsMenu__SMBSettingsMenu__00510980(SMBSettingsMenu *self)

{
  *(uint8_t ***)self = &PTR__SMBSettingsMenu_005c8cb0;
  SMBSelectionMenu__SMBSelectionMenu__005100b0((SMBSelectionMenu *)self);
  return;
}

/* ======================================================================
 * SMBSettingsMenu__DeActivate  (Ghidra `DeActivate` @ 00510600)
 * Signature: uint8_t __thiscall DeActivate(SMBSettingsMenu * self)
 * Class: SMBSettingsMenu
 * Calls: `Joystick__AddButtonCallback`, `Joystick__AddPOVCallback`, `SMBSelectionMenu__DeActivate`, `TKeyboard__AddKeyCallback`, `TPlayer__GetJoystick`, `TPlayer__GetProfile`
 * Called by: (none)
 */
/* SMBSettingsMenu__DeActivate() */

void __thiscall SMBSettingsMenu__DeActivate(SMBSettingsMenu *self)

{
  Joystick *pJVar1;
  long *plVar2;
  uint32_t local_18[2];
  uint32_t *local_10;

  if (*(int *)(self + 0xd0) != 1) {
    pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
    Joystick__AddButtonCallback(pJVar1, 0, 0, 0);
    pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
    Joystick__AddPOVCallback(pJVar1, 3, 0, 0);
    pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
    Joystick__AddPOVCallback(pJVar1, 1, 0, 0);
    if (Keyboard != (TKeyboard *)0x0) {
      TKeyboard__AddKeyCallback(Keyboard, 0x41, 0, 0);
      TKeyboard__AddKeyCallback(Keyboard, 0x6d, 0, 0);
      TKeyboard__AddKeyCallback(Keyboard, 0x76, 0, 0);
      TKeyboard__AddKeyCallback(Keyboard, 0x6c, 0, 0);
    }
    SMBSelectionMenu__DeActivate((SMBSelectionMenu *)self);
    local_18[0] = 2;
    local_10 = operator_new__(0x10);
    local_10[1] = GLOBALMUSICVOLUME;
    *local_10 = 0;
    local_10[3] = GLOBALSFXVOLUME;
    local_10[2] = 1;
    plVar2 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
    (**(code **)(*plVar2 + 0x98))(plVar2, local_18);
    if (local_10 != (uint32_t *)0x0) {
      operator_delete__(local_10);
    }
    *(uint32_t *)(self + 0xd0) = 0;
  }
  return;
}

/* ======================================================================
 * SMBSettingsMenu__SMBSettingsMenu__00510980  (Ghidra `~SMBSettingsMenu` @ 00510980)
 * Signature: uint8_t __thiscall ~SMBSettingsMenu(SMBSettingsMenu * self)
 * Class: SMBSettingsMenu
 * Calls: `SMBSelectionMenu__SMBSelectionMenu__005100b0`, `operator_delete`
 * Called by: `GSMBMenu__GSMBMenu`, `SMBSettingsMenu__SMBSettingsMenu`
 */
/* SMBSettingsMenu__SMBSettingsMenu__00510980() */

void __thiscall SMBSettingsMenu__SMBSettingsMenu__00510980(SMBSettingsMenu *self)

{
  *(uint8_t ***)self = &PTR__SMBSettingsMenu_005c8cb0;
  SMBSelectionMenu__SMBSelectionMenu__005100b0((SMBSelectionMenu *)self);
  operator_delete(self);
  return;
}

/* ======================================================================
 * SMBSettingsMenu__Initialize  (Ghidra `Initialize` @ 005109a0)
 * Signature: uint8_t __thiscall Initialize(SMBSettingsMenu * self)
 * Class: SMBSettingsMenu
 * Calls: `FlashAnimationLibrary__GetTextField`, `GetLocalizedText`, `SDL_GetDesktopDisplayMode`, `SDL_GetDisplayMode`, `SDL_GetNumDisplayModes`, `SMBSelectionMenu__InitializeMenuRows`, `free`, `malloc`, `memcpy`
 * Called by: `GSMBMenu__GSMBMenu__004d8690`
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SMBSettingsMenu__Initialize() */

void __thiscall SMBSettingsMenu__Initialize(SMBSettingsMenu *self)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  uint64_t uVar9;
  long lVar10;
  long lVar11;
  wchar_t *pwVar12;
  void *pvVar13;
  void *pvVar14;
  ushort uVar15;
  ulong uVar16;
  ushort uVar17;
  uint64_t *puVar18;
  ushort *puVar19;
  short *psVar20;
  int iVar21;
  long lVar22;
  uint8_t *puVar23;
  ulong uVar24;
  uint8_t local_78[4];
  uint local_74;
  uint local_70;
  uint8_t local_58[4];
  uint local_54;
  uint local_50;

  (**(code **)(*(long *)self + 0x10))(self, 0, "settingsidle");
  uVar9 = FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8), "music");
  *(uint64_t *)(self + 0x80) = uVar9;
  uVar9 = FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8), "musicnumber");
  *(uint64_t *)(self + 0x90) = uVar9;
  uVar9 = FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8), "sound");
  *(uint64_t *)(self + 0x88) = uVar9;
  uVar9 = FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8), "soundnumber");
  *(uint64_t *)(self + 0x98) = uVar9;
  uVar9 = GetLocalizedText(0x4c);
  FlashTextField__SetText(*(wchar_t **)(self + 0x80), uVar9);
  uVar9 = GetLocalizedText(0x4d);
  FlashTextField__SetText(*(wchar_t **)(self + 0x88), uVar9);
  SDL_GetDesktopDisplayMode(0, local_78);
  iVar7 = SDL_GetNumDisplayModes(0);
  if (0 < iVar7) {
    iVar21 = 0;
  LAB_00510a84:
    iVar8 = SDL_GetDisplayMode(0, iVar21, local_58);
    uVar3 = local_50;
    uVar2 = local_54;
    uVar9 = pScreenResolutions._56_8_;
    if (((iVar8 != -1) && (local_54 <= local_74)) && (local_50 <= local_70)) {
      if (pScreenResolutions._40_2_ != 0) {
        lVar22 = 0;
        do {
          if ((local_50 == *(uint *)(pScreenResolutions._56_8_ + 4 + lVar22 * 8)) &&
              (local_54 == *(uint *)(pScreenResolutions._56_8_ + lVar22 * 8))) {
            if ((pScreenResolutions._48_4_ != 1) ||
                (((ushort)pScreenResolutions._42_2_ == 0 ||
                  (*(short *)pScreenResolutions._64_8_ == (short)lVar22))))
              goto LAB_00510a78;
            lVar10 = 0;
            goto LAB_00510b2e;
          }
          lVar22 = lVar22 + 1;
        } while ((ushort)lVar22 < (ushort)pScreenResolutions._40_2_);
      }
      if (pScreenResolutions._72_4_ == -0x5eef3582) {
        if ((ushort)pScreenResolutions._42_2_ <= (ushort)pScreenResolutions._40_2_) {
          pScreenResolutions._42_2_ = pScreenResolutions._42_2_ + pScreenResolutions._52_2_;
          uVar16 = (ulong)pScreenResolutions[0x2c];
          pvVar13 = (void *)0x0;
          uVar24 = (ulong)(ushort)pScreenResolutions._42_2_ * 8;
          pvVar14 = malloc(uVar16 + 0x10 + uVar24);
          if (pvVar14 != (void *)0x0) {
            pvVar13 = (void *)((long)pvVar14 + 0x10U +
                               (uVar16 - ((long)pvVar14 + 0x10U) % uVar16) % uVar16);
            *(ulong *)((long)pvVar13 + -0x10) = uVar24;
            *(void **)((long)pvVar13 + -8) = pvVar14;
            if (uVar9 != 0) {
              uVar16 = *(ulong *)(uVar9 + -0x10);
              if (uVar24 <= *(ulong *)(uVar9 + -0x10)) {
                uVar16 = uVar24;
              }
              memcpy(pvVar13, (void *)uVar9, uVar16);
              free(*(void **)(uVar9 + -8));
            }
          }
          uVar9 = pScreenResolutions._64_8_;
          uVar15 = pScreenResolutions._42_2_;
          pScreenResolutions._56_8_ = pvVar13;
          if (pScreenResolutions._64_8_ != 0) {
            uVar16 = (ulong)pScreenResolutions[0x2c];
            uVar24 = (ulong)(ushort)pScreenResolutions._42_2_ * 2;
            pvVar14 = malloc(uVar16 + 0x10 + uVar24);
            pvVar13 = (void *)0x0;
            uVar17 = pScreenResolutions._40_2_;
            if (pvVar14 != (void *)0x0) {
              pvVar13 = (void *)((long)pvVar14 + 0x10U +
                                 (uVar16 - ((long)pvVar14 + 0x10U) % uVar16) % uVar16);
              *(ulong *)((long)pvVar13 + -0x10) = uVar24;
              *(void **)((long)pvVar13 + -8) = pvVar14;
              uVar16 = *(ulong *)(uVar9 + -0x10);
              if (uVar24 <= *(ulong *)(uVar9 + -0x10)) {
                uVar16 = uVar24;
              }
              memcpy(pvVar13, (void *)uVar9, uVar16);
              free(*(void **)(uVar9 + -8));
              uVar17 = pScreenResolutions._40_2_;
              uVar15 = pScreenResolutions._42_2_;
            }
            for (; pScreenResolutions._64_8_ = pvVar13, uVar17 < uVar15; uVar17 = uVar17 + 1) {
              *(uint16_t *)(pScreenResolutions._64_8_ + (ulong)uVar17 * 2) = 0xffff;
              pvVar13 = (void *)pScreenResolutions._64_8_;
            }
          }
        }
        if ((pScreenResolutions._48_4_ == 1) && (pScreenResolutions._42_2_ != 0)) {
          sVar6 = 1;
          sVar5 = *(short *)pScreenResolutions._64_8_;
          psVar20 = (short *)pScreenResolutions._64_8_;
          while (sVar5 != -1) {
            psVar20 = psVar20 + 1;
            if (sVar6 == pScreenResolutions._42_2_)
              goto LAB_00510ee8;
            sVar6 = sVar6 + 1;
            sVar5 = *psVar20;
          }
          *psVar20 = pScreenResolutions._40_2_;
        }
      } else {
        uVar24 = (ulong)pScreenResolutions[0x2c];
        pScreenResolutions._48_4_ = 0;
        pvVar13 = malloc(uVar24 + 0x38);
        puVar18 = (uint64_t *)0x0;
        if (pvVar13 != (void *)0x0) {
          puVar18 = (uint64_t *)((uVar24 - ((long)pvVar13 + 0x10U) % uVar24) % uVar24 +
                                 (long)pvVar13 + 0x10U);
          puVar18[-2] = 0x28;
          puVar18[-1] = pvVar13;
        }
        pScreenResolutions._56_8_ = puVar18;
        *puVar18 = 0;
        puVar18[1] = 0;
        puVar18[2] = 0;
        puVar18[3] = 0;
        puVar18[4] = 0;
        pScreenResolutions._40_2_ = 0;
        pScreenResolutions._42_2_ = 5;
        pScreenResolutions._72_4_ = 0xa110ca7e;
        pScreenResolutions._52_2_ = 5;
      }
    LAB_00510ee8:
      puVar1 = (uint *)(pScreenResolutions._56_8_ + (ulong)(ushort)pScreenResolutions._40_2_ * 8);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      pScreenResolutions._40_2_ = pScreenResolutions._40_2_ + 1;
    }
    goto LAB_00510a78;
  }
LAB_00510b40:
  lVar22 = 0;
  uVar15 = pScreenResolutions._40_2_;
LAB_00510b5e:
  uVar9 = pScreenResolutions._56_8_;
  uVar2 = *(uint *)((long)&Initialize()::GSaneModes + lVar22);
  uVar3 = *(uint *)((long)&DAT_005c8d24 /* R:6.726232628759122e-43f */ + lVar22);
  if ((uVar2 <= local_74) && (uVar3 <= local_70)) {
    if (uVar15 != 0) {
      lVar10 = 0;
      do {
        if ((uVar3 == *(uint *)(pScreenResolutions._56_8_ + 4 + lVar10 * 8)) &&
            (uVar2 == *(uint *)(pScreenResolutions._56_8_ + lVar10 * 8))) {
          if ((pScreenResolutions._48_4_ != 1) ||
              (((ushort)pScreenResolutions._42_2_ == 0 ||
                (*(short *)pScreenResolutions._64_8_ == (short)lVar10))))
            goto LAB_00510b50;
          lVar11 = 0;
          goto LAB_00510bee;
        }
        lVar10 = lVar10 + 1;
      } while ((ushort)lVar10 < uVar15);
    }
    if (pScreenResolutions._72_4_ == -0x5eef3582) {
      if ((ushort)pScreenResolutions._42_2_ <= uVar15) {
        pScreenResolutions._42_2_ = pScreenResolutions._42_2_ + pScreenResolutions._52_2_;
        uVar16 = (ulong)pScreenResolutions[0x2c];
        pvVar13 = (void *)0x0;
        uVar24 = (ulong)(ushort)pScreenResolutions._42_2_ * 8;
        pvVar14 = malloc(uVar16 + 0x10 + uVar24);
        if (pvVar14 != (void *)0x0) {
          pvVar13 = (void *)((long)pvVar14 + 0x10U +
                             (uVar16 - ((long)pvVar14 + 0x10U) % uVar16) % uVar16);
          *(ulong *)((long)pvVar13 + -0x10) = uVar24;
          *(void **)((long)pvVar13 + -8) = pvVar14;
          if (uVar9 != 0) {
            uVar16 = *(ulong *)(uVar9 + -0x10);
            if (uVar24 <= *(ulong *)(uVar9 + -0x10)) {
              uVar16 = uVar24;
            }
            memcpy(pvVar13, (void *)uVar9, uVar16);
            free(*(void **)(uVar9 + -8));
          }
        }
        uVar9 = pScreenResolutions._64_8_;
        uVar17 = pScreenResolutions._42_2_;
        pScreenResolutions._56_8_ = pvVar13;
        uVar15 = pScreenResolutions._40_2_;
        if (pScreenResolutions._64_8_ != 0) {
          uVar16 = (ulong)pScreenResolutions[0x2c];
          uVar24 = (ulong)(ushort)pScreenResolutions._42_2_ * 2;
          pvVar14 = malloc(uVar16 + 0x10 + uVar24);
          pvVar13 = (void *)0x0;
          uVar4 = pScreenResolutions._40_2_;
          if (pvVar14 != (void *)0x0) {
            pvVar13 = (void *)((long)pvVar14 + 0x10U +
                               (uVar16 - ((long)pvVar14 + 0x10U) % uVar16) % uVar16);
            *(ulong *)((long)pvVar13 + -0x10) = uVar24;
            *(void **)((long)pvVar13 + -8) = pvVar14;
            uVar16 = *(ulong *)(uVar9 + -0x10);
            if (uVar24 <= *(ulong *)(uVar9 + -0x10)) {
              uVar16 = uVar24;
            }
            memcpy(pvVar13, (void *)uVar9, uVar16);
            free(*(void **)(uVar9 + -8));
            uVar4 = pScreenResolutions._40_2_;
            uVar17 = pScreenResolutions._42_2_;
          }
          for (; pScreenResolutions._64_8_ = pvVar13, uVar15 = pScreenResolutions._40_2_,
                 uVar4 < uVar17;
               uVar4 = uVar4 + 1) {
            *(uint16_t *)(pScreenResolutions._64_8_ + (ulong)uVar4 * 2) = 0xffff;
            pvVar13 = (void *)pScreenResolutions._64_8_;
          }
        }
      }
      if ((pScreenResolutions._48_4_ == 1) && (pScreenResolutions._42_2_ != 0)) {
        sVar5 = 1;
        uVar17 = *(ushort *)pScreenResolutions._64_8_;
        puVar19 = (ushort *)pScreenResolutions._64_8_;
        while (uVar17 != 0xffff) {
          puVar19 = puVar19 + 1;
          if (sVar5 == pScreenResolutions._42_2_)
            goto LAB_00510e08;
          sVar5 = sVar5 + 1;
          uVar17 = *puVar19;
        }
        *puVar19 = uVar15;
        uVar15 = pScreenResolutions._40_2_;
      }
    } else {
      uVar24 = (ulong)pScreenResolutions[0x2c];
      pScreenResolutions._48_4_ = 0;
      pvVar13 = malloc(uVar24 + 0x38);
      puVar18 = (uint64_t *)0x0;
      if (pvVar13 != (void *)0x0) {
        puVar18 = (uint64_t *)((uVar24 - ((long)pvVar13 + 0x10U) % uVar24) % uVar24 +
                               (long)pvVar13 + 0x10U);
        puVar18[-2] = 0x28;
        puVar18[-1] = pvVar13;
      }
      pScreenResolutions._56_8_ = puVar18;
      *puVar18 = 0;
      puVar18[1] = 0;
      puVar18[2] = 0;
      puVar18[3] = 0;
      puVar18[4] = 0;
      pScreenResolutions._40_2_ = 0;
      pScreenResolutions._42_2_ = 5;
      pScreenResolutions._72_4_ = 0xa110ca7e;
      pScreenResolutions._52_2_ = 5;
      uVar15 = 0;
    }
  LAB_00510e08:
    puVar1 = (uint *)(pScreenResolutions._56_8_ + (ulong)uVar15 * 8);
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    pScreenResolutions._40_2_ = pScreenResolutions._40_2_ + 1;
    uVar15 = pScreenResolutions._40_2_;
  }
  goto LAB_00510b50;
  while (lVar10 = lVar10 + 2, *(short *)(pScreenResolutions._64_8_ + lVar10) != (short)lVar22) {
  LAB_00510b2e:
    if (lVar10 == (ulong)((ushort)pScreenResolutions._42_2_ - 1) * 2)
      break;
  }
LAB_00510a78:
  iVar21 = iVar21 + 1;
  if (iVar21 == iVar7)
    goto LAB_00510b40;
  goto LAB_00510a84;
  while (lVar11 = lVar11 + 2, *(short *)(pScreenResolutions._64_8_ + lVar11) != (short)lVar10) {
  LAB_00510bee:
    if (lVar11 == (ulong)((ushort)pScreenResolutions._42_2_ - 1) * 2)
      break;
  }
LAB_00510b50:
  lVar22 = lVar22 + 8;
  if (lVar22 == 0x40)
    goto LAB_00510c00;
  goto LAB_00510b5e;
LAB_00510c00:
  _iSelectedResolutionIndex = 0;
  if (uVar15 != 0) {
    lVar22 = 0;
    do {
      puVar1 = (uint *)(pScreenResolutions._56_8_ + lVar22 * 8);
      if ((puVar1[1] == (uint) * (ushort *)(Window + 10)) &&
          (*puVar1 == (uint) * (ushort *)(Window + 8))) {
        _iSelectedResolutionIndex = (uint32_t)lVar22;
        break;
      }
      lVar22 = lVar22 + 1;
    } while ((ushort)lVar22 < uVar15);
  }
  lVar22 = FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8), "resolution");
  *(long *)(self + 0xb0) = lVar22;
  if (lVar22 != 0) {
    uVar9 = GetLocalizedText(0xf6);
    FlashTextField__SetText(*(wchar_t **)(self + 0xb0), uVar9);
  }
  uVar9 = FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8), "resnumber");
  *(uint64_t *)(self + 0xb8) = uVar9;
  lVar22 = FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8), "fullscreen");
  *(long *)(self + 0xc0) = lVar22;
  if (lVar22 != 0) {
    uVar9 = GetLocalizedText(0xf7);
    FlashTextField__SetText(*(wchar_t **)(self + 0xc0), uVar9);
  }
  pwVar12 = (wchar_t *)FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 8),
                                                           "fullscreenon");
  lVar22 = Window;
  *(wchar_t **)(self + 200) = pwVar12;
  bSelectedResFullScreen = *(int *)(lVar22 + 0xc);
  if (pwVar12 != (wchar_t *)0x0) {
    puVar23 = &DAT_005c8bd8 /* R:1.1070257868166055e-43f */;
    if (bSelectedResFullScreen != 1) {
      puVar23 = &DAT_005c8be4 /* R:1.1070257868166055e-43f */;
    }
    FlashTextField__SetText(pwVar12, puVar23);
  }
  *(uint32_t *)(self + 0x70) = 4;
  SMBSelectionMenu__InitializeMenuRows((SMBSelectionMenu *)self, 4);
  uVar9 = GetLocalizedText(0x26);
  *(uint64_t *)(self + 0x50) = uVar9;
  return;
}

/* ======================================================================
 * SMBSettingsMenu__SMBSettingsMenu__00511330  (Ghidra `SMBSettingsMenu` @ 00511330)
 * Signature: uint8_t __thiscall SMBSettingsMenu(SMBSettingsMenu * self)
 * Class: SMBSettingsMenu
 * Calls: `SMBSelectionMenu__SMBSelectionMenu__00510270`
 * Called by: `GSMBMenu__GSMBMenu__004d8690`
 */
/* SMBSettingsMenu__SMBSettingsMenu__00511330() */

void __thiscall SMBSettingsMenu__SMBSettingsMenu__00511330(SMBSettingsMenu *self)

{
  SMBSelectionMenu__SMBSelectionMenu__00510270((SMBSelectionMenu *)self);
  *(uint8_t ***)self = &PTR__SMBSettingsMenu_005c8cb0;
  *(uint32_t *)(self + 0x70) = 4;
  GLOBAL_SETTINGS_MENU = self;
  return;
}

/* ======================================================================
 * SMBSettingsMenu__SetMusicVolumeSelected  (Ghidra `SetMusicVolumeSelected` @ 00511350)
 * Signature: uint8_t __thiscall SetMusicVolumeSelected(SMBSettingsMenu * self)
 * Class: SMBSettingsMenu
 * Calls: `Joystick__AddButtonCallback`, `Joystick__AddPOVCallback`, `SMBSettingsDecrementMusicVolume`, `SMBSettingsIncrementMusicVolume`, `TKeyboard__AddKeyCallback`, `TPlayer__GetJoystick`
 * Called by: (none)
 */
/* SMBSettingsMenu__SetMusicVolumeSelected() */

void __thiscall SMBSettingsMenu__SetMusicVolumeSelected(SMBSettingsMenu *self)

{
  Joystick *pJVar1;

  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddPOVCallback(pJVar1, 3, SMBSettingsDecrementMusicVolume, self);
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddPOVCallback(pJVar1, 1, SMBSettingsIncrementMusicVolume, self);
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddButtonCallback(pJVar1, 0, 0, 0);
  if (Keyboard != (TKeyboard *)0x0) {
    TKeyboard__AddKeyCallback(Keyboard, 0x41, SMBSettingsDecrementMusicVolume, self);
    TKeyboard__AddKeyCallback(Keyboard, 0x6d, SMBSettingsIncrementMusicVolume, self);
    TKeyboard__AddKeyCallback(Keyboard, 0x76, 0, 0);
    TKeyboard__AddKeyCallback(Keyboard, 0x6c, 0, 0);
    return;
  }
  return;
}

/* ======================================================================
 * SMBSettingsMenu__SetSFXVolumeSelected  (Ghidra `SetSFXVolumeSelected` @ 00511420)
 * Signature: uint8_t __thiscall SetSFXVolumeSelected(SMBSettingsMenu * self)
 * Class: SMBSettingsMenu
 * Calls: `Joystick__AddButtonCallback`, `Joystick__AddPOVCallback`, `SMBSettingsDecrementSFXVolume`, `SMBSettingsIncrementSFXVolume`, `TKeyboard__AddKeyCallback`, `TPlayer__GetJoystick`
 * Called by: (none)
 */
/* SMBSettingsMenu__SetSFXVolumeSelected() */

void __thiscall SMBSettingsMenu__SetSFXVolumeSelected(SMBSettingsMenu *self)

{
  Joystick *pJVar1;

  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddPOVCallback(pJVar1, 3, SMBSettingsDecrementSFXVolume, self);
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddPOVCallback(pJVar1, 1, SMBSettingsIncrementSFXVolume, self);
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddButtonCallback(pJVar1, 0, 0, 0);
  if (Keyboard != (TKeyboard *)0x0) {
    TKeyboard__AddKeyCallback(Keyboard, 0x41, SMBSettingsDecrementSFXVolume, self);
    TKeyboard__AddKeyCallback(Keyboard, 0x6d, SMBSettingsIncrementSFXVolume, self);
    TKeyboard__AddKeyCallback(Keyboard, 0x76, 0, 0);
    TKeyboard__AddKeyCallback(Keyboard, 0x6c, 0, 0);
    return;
  }
  return;
}

/* ======================================================================
 * SMBSettingsMenu__SetRestoreDefaultControls  (Ghidra `SetRestoreDefaultControls` @ 005114f0)
 * Signature: uint8_t __thiscall SetRestoreDefaultControls(SMBSettingsMenu * self)
 * Class: SMBSettingsMenu
 * Calls: `Joystick__AddButtonCallback`, `Joystick__AddPOVCallback`, `SMBSettingsRestoreDefaults`, `TPlayer__GetJoystick`
 * Called by: (none)
 */
/* SMBSettingsMenu__SetRestoreDefaultControls() */

void __thiscall SMBSettingsMenu__SetRestoreDefaultControls(SMBSettingsMenu *self)

{
  Joystick *pJVar1;

  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddButtonCallback(pJVar1, 0, SMBSettingsRestoreDefaults, self);
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddPOVCallback(pJVar1, 3, 0, 0);
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddPOVCallback(pJVar1, 1, 0, 0);
  return;
}

/* ======================================================================
 * SMBSettingsMenu__SetChangeStorageDeviceControls  (Ghidra `SetChangeStorageDeviceControls` @ 00511550)
 * Signature: uint8_t __thiscall SetChangeStorageDeviceControls(SMBSettingsMenu * self)
 * Class: SMBSettingsMenu
 * Calls: `Joystick__AddButtonCallback`, `Joystick__AddPOVCallback`, `SMBSettingsChangeStorage`, `TPlayer__GetJoystick`
 * Called by: (none)
 */
/* SMBSettingsMenu__SetChangeStorageDeviceControls() */

void __thiscall SMBSettingsMenu__SetChangeStorageDeviceControls(SMBSettingsMenu *self)

{
  Joystick *pJVar1;

  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddButtonCallback(pJVar1, 0, SMBSettingsChangeStorage, self);
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddPOVCallback(pJVar1, 3, 0, 0);
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddPOVCallback(pJVar1, 1, 0, 0);
  return;
}

/* ======================================================================
 * SMBSettingsMenu__SetResolutionControls  (Ghidra `SetResolutionControls` @ 005115b0)
 * Signature: uint8_t __stdcall SetResolutionControls(void)
 * Class: SMBSettingsMenu
 * Calls: `Joystick__AddButtonCallback`, `Joystick__AddPOVCallback`, `SMBSettingsApplyWindowChanges`, `SMBSettingsDecrementResolution`, `SMBSettingsIncrementResolution`, `TKeyboard__AddKeyCallback`, `TPlayer__GetJoystick`
 * Called by: (none)
 */
/* SMBSettingsMenu__SetResolutionControls() */

void SMBSettingsMenu__SetResolutionControls(void)

{
  Joystick *pJVar1;

  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddButtonCallback(pJVar1, 0, SMBSettingsApplyWindowChanges, 0);
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddPOVCallback(pJVar1, 3, SMBSettingsDecrementResolution, 0);
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddPOVCallback(pJVar1, 1, SMBSettingsIncrementResolution, 0);
  if (Keyboard != (TKeyboard *)0x0) {
    TKeyboard__AddKeyCallback(Keyboard, 0x41, SMBSettingsDecrementResolution, 0);
    TKeyboard__AddKeyCallback(Keyboard, 0x6d, SMBSettingsIncrementResolution, 0);
    TKeyboard__AddKeyCallback(Keyboard, 0x76, SMBSettingsApplyWindowChanges, 0);
    TKeyboard__AddKeyCallback(Keyboard, 0x6c, SMBSettingsApplyWindowChanges, 0);
    return;
  }
  return;
}

/* ======================================================================
 * SMBSettingsMenu__SetFullScreenControls  (Ghidra `SetFullScreenControls` @ 00511680)
 * Signature: uint8_t __stdcall SetFullScreenControls(void)
 * Class: SMBSettingsMenu
 * Calls: `Joystick__AddButtonCallback`, `Joystick__AddPOVCallback`, `SMBSettingsApplyWindowChanges`, `SMBSettingsChangeFullScreen`, `TKeyboard__AddKeyCallback`, `TPlayer__GetJoystick`
 * Called by: (none)
 */
/* SMBSettingsMenu__SetFullScreenControls() */

void SMBSettingsMenu__SetFullScreenControls(void)

{
  Joystick *pJVar1;

  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddButtonCallback(pJVar1, 0, SMBSettingsApplyWindowChanges, 0);
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddPOVCallback(pJVar1, 3, SMBSettingsChangeFullScreen, 0);
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddPOVCallback(pJVar1, 1, SMBSettingsChangeFullScreen, 0);
  if (Keyboard != (TKeyboard *)0x0) {
    TKeyboard__AddKeyCallback(Keyboard, 0x41, SMBSettingsChangeFullScreen, 0);
    TKeyboard__AddKeyCallback(Keyboard, 0x6d, SMBSettingsChangeFullScreen, 0);
    TKeyboard__AddKeyCallback(Keyboard, 0x76, SMBSettingsApplyWindowChanges, 0);
    TKeyboard__AddKeyCallback(Keyboard, 0x6c, SMBSettingsApplyWindowChanges, 0);
    return;
  }
  return;
}

/* ======================================================================
 * SMBSettingsMenu__SetSelectionControls  (Ghidra `SetSelectionControls` @ 00511750)
 * Signature: uint8_t __thiscall SetSelectionControls(SMBSettingsMenu * self)
 * Class: SMBSettingsMenu
 * Calls: `Joystick__AddButtonCallback`, `Joystick__AddPOVCallback`, `TKeyboard__AddKeyCallback`, `TPlayer__GetJoystick`
 * Called by: `SMBReselectedDrive`
 */
/* SMBSettingsMenu__SetSelectionControls() */

void __thiscall SMBSettingsMenu__SetSelectionControls(SMBSettingsMenu *self)

{
  int iVar1;
  Joystick *pJVar2;

  pJVar2 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddPOVCallback(pJVar2, 3, 0, 0);
  pJVar2 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddPOVCallback(pJVar2, 1, 0, 0);
  pJVar2 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddButtonCallback(pJVar2, 0, 0, 0);
  if (Keyboard != (TKeyboard *)0x0) {
    TKeyboard__AddKeyCallback(Keyboard, 0x41, 0, 0);
    TKeyboard__AddKeyCallback(Keyboard, 0x6d, 0, 0);
    TKeyboard__AddKeyCallback(Keyboard, 0x76, 0, 0);
    TKeyboard__AddKeyCallback(Keyboard, 0x6c, 0, 0);
  }
  iVar1 = *(int *)(self + 0x68);
  if (iVar1 == 0) {
    SetMusicVolumeSelected(self);
    return;
  }
  if (iVar1 == 1) {
    SetSFXVolumeSelected(self);
    return;
  }
  if (iVar1 != 2) {
    if (iVar1 != 3) {
      return;
    }
    SetFullScreenControls();
    return;
  }
  SetResolutionControls();
  return;
}

/* ======================================================================
 * SMBSettingsMenu__DecrementSelection  (Ghidra `DecrementSelection` @ 00511860)
 * Signature: uint8_t __thiscall DecrementSelection(SMBSettingsMenu * self)
 * Class: SMBSettingsMenu
 * Calls: `SMBSelectionMenu__SetRowAsSelected`, `SMBSelectionMenu__SetRowAsUnselected`
 * Called by: (none)
 */
/* SMBSettingsMenu__DecrementSelection() */

void __thiscall SMBSettingsMenu__DecrementSelection(SMBSettingsMenu *self)

{
  int iVar1;

  if (*(int *)(self + 0xd0) != 1) {
    SMBSelectionMenu__SetRowAsUnselected((SMBSelectionMenu *)self, *(uint *)(self + 0x68));
    iVar1 = *(int *)(self + 0x68);
    *(int *)(self + 0x68) = iVar1 + -1;
    if (iVar1 + -1 < 0) {
      *(int *)(self + 0x68) = *(int *)(self + 0x70) + -1;
    }
    SetSelectionControls(self);
    SMBSelectionMenu__SetRowAsSelected((SMBSelectionMenu *)self, *(uint *)(self + 0x68));
    return;
  }
  return;
}

/* ======================================================================
 * SMBSettingsMenu__IncrementSelection  (Ghidra `IncrementSelection` @ 005118c0)
 * Signature: uint8_t __thiscall IncrementSelection(SMBSettingsMenu * self)
 * Class: SMBSettingsMenu
 * Calls: `SMBSelectionMenu__SetRowAsSelected`, `SMBSelectionMenu__SetRowAsUnselected`
 * Called by: (none)
 */
/* SMBSettingsMenu__IncrementSelection() */

void __thiscall SMBSettingsMenu__IncrementSelection(SMBSettingsMenu *self)

{
  int iVar1;

  if (*(int *)(self + 0xd0) != 1) {
    SMBSelectionMenu__SetRowAsUnselected((SMBSelectionMenu *)self, *(uint *)(self + 0x68));
    iVar1 = *(int *)(self + 0x68);
    *(int *)(self + 0x68) = iVar1 + 1;
    if (*(int *)(self + 0x70) <= iVar1 + 1) {
      *(uint32_t *)(self + 0x68) = 0;
    }
    SetSelectionControls(self);
    SMBSelectionMenu__SetRowAsSelected((SMBSelectionMenu *)self, *(uint *)(self + 0x68));
    return;
  }
  return;
}

/* ======================================================================
 * SMBSettingsMenu__Activate  (Ghidra `Activate` @ 00511910)
 * Signature: uint8_t __thiscall Activate(SMBSettingsMenu * self)
 * Class: SMBSettingsMenu
 * Calls: `SMBSelectionMenu__Activate`, `SMBSelectionMenu__SetRowAsSelected`, `SMBSelectionMenu__SetRowAsUnselected`
 * Called by: (none)
 */
/* SMBSettingsMenu__Activate() */

void __thiscall SMBSettingsMenu__Activate(SMBSettingsMenu *self)

{
  SMBSelectionMenu__Activate((SMBSelectionMenu *)self);
  *(uint32_t *)(self + 0x68) = 0;
  SMBSelectionMenu__SetRowAsSelected((SMBSelectionMenu *)self, 0);
  SMBSelectionMenu__SetRowAsUnselected((SMBSelectionMenu *)self, 1);
  SMBSelectionMenu__SetRowAsUnselected((SMBSelectionMenu *)self, 2);
  SMBSelectionMenu__SetRowAsUnselected((SMBSelectionMenu *)self, 3);
  SetSelectionControls(self);
  *(uint32_t *)(self + 0xd0) = 0;
  return;
}

/* ======================================================================
 * SMBSettingsMenu__ReselectDrive  (Ghidra `ReselectDrive` @ 005119c0)
 * Signature: uint8_t __thiscall ReselectDrive(SMBSettingsMenu * self)
 * Class: SMBSettingsMenu
 * Calls: `SMBReselectedDrive`, `TPlayer__GetProfile`
 * Called by: `SMBSettingsChangeStorage`
 */
/* SMBSettingsMenu__ReselectDrive() */

void __thiscall SMBSettingsMenu__ReselectDrive(SMBSettingsMenu *self)

{
  long *plVar1;

  if ((*(int *)(self + 0xd0) != 1) && (*(int *)(self + 0x30) == 3)) {
    plVar1 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
    (**(code **)(*plVar1 + 0x68))(plVar1);
    if (*(int *)(SuperMeatBoy + 0x2c) == 0xc) {
      plVar1 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
      (**(code **)(*plVar1 + 0x10))(plVar1, 0, 1, SMBReselectedDrive);
    } else {
      plVar1 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
      (**(code **)(*plVar1 + 0x10))(plVar1, 1, 1, SMBReselectedDrive);
    }
    *(uint32_t *)(self + 0xd0) = 1;
    return;
  }
  return;
}

/* ======================================================================
 * SMBSettingsMenu__EndDriveReselection  (Ghidra `EndDriveReselection` @ 00511a70)
 * Signature: uint8_t __thiscall EndDriveReselection(SMBSettingsMenu * self)
 * Class: SMBSettingsMenu
 * Calls: (none)
 * Called by: (none)
 */
/* SMBSettingsMenu__EndDriveReselection() */

void __thiscall SMBSettingsMenu__EndDriveReselection(SMBSettingsMenu *self)

{
  *(uint32_t *)(self + 0xd0) = 0;
  SetSelectionControls(self);
  return;
}
