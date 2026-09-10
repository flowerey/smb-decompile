/* src/game/classes/GSMBMenu.c — 136 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "GSMBMenu.h"

/* ======================================================================
 * GSMBMenu__UnloadWorldMenu  (Ghidra `UnloadWorldMenu` @ 004c7790)
 * Signature: uint8_t __thiscall UnloadWorldMenu(GSMBMenu * self)
 * Class: GSMBMenu
 * Calls: `FlashAnimationLibrary__FlashAnimationLibrary`, `GSMBMenu__UnloadWorldMenu__004cd4a0`, `operator_delete`
 * Called by: (none)
 */
/* GSMBMenu__UnloadWorldMenu__004cd4a0() [clone .part.45] */

void __thiscall GSMBMenu__UnloadWorldMenu__004cd4a0(GSMBMenu *self)

{
  FlashAnimationLibrary *this_00;
  
  if (*(long **)(self + 0x4d0) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x4d0) + 8))();
  }
  *(uint64_t *)(self + 0x4d0) = 0;
  if (*(long **)(self + 0x4d8) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x4d8) + 8))();
  }
  *(uint64_t *)(self + 0x4d8) = 0;
  if (*(long **)(self + 0x430) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x430) + 8))();
  }
  this_00 = *(FlashAnimationLibrary **)(self + 0x428);
  *(uint64_t *)(self + 0x430) = 0;
  if (this_00 != (FlashAnimationLibrary *)0x0) {
    FlashAnimationLibrary__FlashAnimationLibrary(this_00);
    operator_delete(this_00);
  }
  *(uint64_t *)(self + 0x428) = 0;
  return;
}

/* ======================================================================
 * GSMBMenu__ShowLeaderboardMenu  (Ghidra `ShowLeaderboardMenu` @ 004c7b20)
 * Signature: uint8_t __thiscall ShowLeaderboardMenu(GSMBMenu * self)
 * Class: GSMBMenu
 * Calls: `CreateMessage`, `GSMBMenu__ShowLeaderboardMenu__004d6eb0`, `GetLocalizedText`, `System_IsOnline`, `System_IsUserOnline`, `TPlayer__GetProfile`, `UserAlertCloseCurrent`
 * Called by: (none)
 */
/* GSMBMenu__ShowLeaderboardMenu__004d6eb0() [clone .part.63] */

void __thiscall GSMBMenu__ShowLeaderboardMenu__004d6eb0(GSMBMenu *self)

{
  int iVar1;
  long lVar2;
  uint32_t local_78 [2];
  uint64_t local_70;
  uint64_t local_68;
  uint64_t local_60;
  uint64_t local_58;
  code *local_50;
  uint64_t local_48;
  uint64_t local_40;
  uint64_t local_38;
  uint64_t local_30;
  uint64_t local_28;
  uint64_t local_20;
  uint64_t local_18;
  uint64_t local_10;
  
  iVar1 = System_IsOnline();
  if (iVar1 == 1) {
    lVar2 = TPlayer__GetProfile((TPlayer *)Players__Player);
    iVar1 = System_IsUserOnline(*(uint32_t *)(lVar2 + 0x14));
    if (iVar1 == 1) {
      *(GSMBMenu **)(self + 0x17e8) = self + 0xd10;
      (**(code **)(*(long *)(self + 0xd10) + 0x20))();
      return;
    }
  }
  local_78[0] = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = (code *)0x0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  local_60 = GetLocalizedText(4);
  local_70 = GetLocalizedText(0x3c);
  local_68 = GetLocalizedText(0x3b);
  local_78[0] = 0xe;
  local_50 = UserAlertCloseCurrent;
  CreateMessage(local_78);
  return;
}

/* ======================================================================
 * GSMBMenu__PlayCodeSound  (Ghidra `PlayCodeSound` @ 004c8a80)
 * Signature: uint8_t __thiscall PlayCodeSound(GSMBMenu * self)
 * Class: GSMBMenu
 * Calls: `FlashLibraryInstance__IsPlaying`, `FlashLibraryInstance__Reset`, `GSMBChapterData__IsChapterUnlocked`, `TInput__HasCodeBeenEntered`, `TPlayer__GetProfile`
 * Called by: (none)
 */
/* GSMBMenu__PlayCodeSound() */

void __thiscall GSMBMenu__PlayCodeSound(GSMBMenu *self)

{
  int iVar1;
  UserProfile *pUVar2;
  uint32_t local_18;
  uint32_t local_14;
  
  if ((*(long *)(self + 0x680) != 0) && ((char)self[0x1843] < '\0')) {
    iVar1 = TInput__HasCodeBeenEntered(Input,(tagCheatCode *)playAsBrownie);
    if (((iVar1 == 1) && (iVar1 = GSMBChapterData__IsChapterUnlocked(SMBChapterData,4), iVar1 == 1))
       || ((iVar1 = TInput__HasCodeBeenEntered(Input,(tagCheatCode *)playAsTofuBoy), iVar1 == 1 ||
           (iVar1 = TInput__HasCodeBeenEntered(Input,(tagCheatCode *)playAsWOG), iVar1 == 1)))) {
      self[0x1843] = (GSMBMenu)((byte)self[0x1843] | 0x40);
    }
    iVar1 = TInput__HasCodeBeenEntered(Input,(tagCheatCode *)playAsTofuBoy);
    if (iVar1 == 1) {
      local_18 = 1;
      local_14 = 0x28;
      pUVar2 = (UserProfile *)TPlayer__GetProfile((TPlayer *)Players__Player);
      Achievements__AwardAchievement(pUVar2,(AchievementAward *)&local_18);
    }
    if (((byte)self[0x1843] & 0x40) != 0) {
      (**(code **)(**(long **)(self + 0x680) + 0x10))();
      iVar1 = FlashLibraryInstance__IsPlaying(*(FlashLibraryInstance **)(self + 0x680));
      if (iVar1 == 0) {
        self[0x1843] = (GSMBMenu)((byte)self[0x1843] & 0x7f);
        FlashLibraryInstance__Reset(*(FlashLibraryInstance **)(self + 0x680));
        self[0x1843] = (GSMBMenu)((byte)self[0x1843] & 0xbf);
      }
    }
  }
  return;
}

/* ======================================================================
 * GSMBMenu__PlayBossIntro  (Ghidra `PlayBossIntro` @ 004c8bc0)
 * Signature: uint8_t __thiscall PlayBossIntro(GSMBMenu * self)
 * Class: GSMBMenu
 * Calls: `SMBChapter__PlayBossIntro`, `SMBMenuBossIntroFinished`
 * Called by: (none)
 */
/* GSMBMenu__PlayBossIntro() */

void __thiscall GSMBMenu__PlayBossIntro(GSMBMenu *self)

{
  SMBChapter__PlayBossIntro((SMBChapter *)(SuperMeatBoy + 0x90),SMBMenuBossIntroFinished,0);
  *(uint32_t *)(self + 0x420) = 10;
  *(uint32_t *)(self + 0xd00) = 99;
  *(uint64_t *)(self + 0xce0) = *(uint64_t *)(self + 0xce8);
  return;
}

/* ======================================================================
 * GSMBMenu__SetCharSilouetteText  (Ghidra `SetCharSilouetteText` @ 004c8c10)
 * Signature: uint8_t __thiscall SetCharSilouetteText(GSMBMenu * self)
 * Class: GSMBMenu
 * Calls: `FlashAnimationLibrary__GetTextField`, `GetLocalizedText`
 * Called by: `SMBMenuMoveLeftChar`, `SMBMenuMoveRightChar`
 */
/* GSMBMenu__SetCharSilouetteText() */

void __thiscall GSMBMenu__SetCharSilouetteText(GSMBMenu *self)

{
  long lVar1;
  uint uVar2;
  wchar_t *pwVar3;
  uint64_t uVar4;
  
  pwVar3 = (wchar_t *)
           FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 0x658),"charname")
  ;
  if (pwVar3 != (wchar_t *)0x0) {
    lVar1 = *(long *)(self + 0xbf8) + (ulong)*(ushort *)(self + 0xd08) * 0x2c;
    if (*(int *)(lVar1 + 0x14) == 1) {
      uVar4 = GetLocalizedText(*(uint *)(lVar1 + 0x24));
      FlashTextField__SetText(pwVar3,uVar4);
    }
    else {
      FlashTextField__SetText(pwVar3,&DAT_005c6634 /* R:0.0f */);
    }
  }
  pwVar3 = (wchar_t *)
           FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 0x658),"chargame")
  ;
  if (pwVar3 != (wchar_t *)0x0) {
    lVar1 = *(long *)(self + 0xbf8) + (ulong)*(ushort *)(self + 0xd08) * 0x2c;
    uVar2 = *(uint *)(lVar1 + 0x28);
    if ((uVar2 == 0xffffffff) || (*(int *)(lVar1 + 0x14) != 1)) {
      FlashTextField__SetText(pwVar3,&DAT_005c6634 /* R:0.0f */);
    }
    else {
      uVar4 = GetLocalizedText(uVar2);
      FlashTextField__SetText(pwVar3,uVar4);
    }
  }
  pwVar3 = (wchar_t *)
           FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 0x658),"charpro");
  if (pwVar3 != (wchar_t *)0x0) {
    lVar1 = *(long *)(self + 0xbf8) + (ulong)*(ushort *)(self + 0xd08) * 0x2c;
    if (*(int *)(lVar1 + 0x14) == 1) {
      uVar4 = GetLocalizedText(*(uint *)(lVar1 + 0x1c));
      FlashTextField__SetText(pwVar3,uVar4);
    }
    else {
      FlashTextField__SetText(pwVar3,&DAT_005c6634 /* R:0.0f */);
    }
  }
  pwVar3 = (wchar_t *)
           FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 0x658),"charcon");
  if (pwVar3 != (wchar_t *)0x0) {
    lVar1 = *(long *)(self + 0xbf8) + (ulong)*(ushort *)(self + 0xd08) * 0x2c;
    if (*(int *)(lVar1 + 0x14) != 1) {
      FlashTextField__SetText(pwVar3,&DAT_005c6634 /* R:0.0f */);
      return;
    }
    uVar4 = GetLocalizedText(*(uint *)(lVar1 + 0x20));
    FlashTextField__SetText(pwVar3,uVar4);
    return;
  }
  return;
}

/* ======================================================================
 * GSMBMenu__LoadCharacterMenu  (Ghidra `LoadCharacterMenu` @ 004c8df0)
 * Signature: uint8_t __thiscall LoadCharacterMenu(GSMBMenu * self)
 * Class: GSMBMenu
 * Calls: `FlashAnimationLibrary__FlashAnimationLibrary__00576680`, `FlashAnimationLibrary__GetClipIndex`, `FlashAnimationLibrary__GetLibraryEntry`, `FlashAnimationLibrary__GetMovieClip__005731d0`, `FlashAnimationLibrary__GetTextField`, `FlashMovieClip__FindInstance`, `FormatResourcePath`, `GSMBChapterData__IsCharacterUnlocked`, `GSMBChapterData__IsCharacterUnlockedWithBandages`, `Sprint` (+4 more)
 * Called by: (none)
 */
/* WARNING: Removing unreachable block (ram,0x004c9a52) */
/* GSMBMenu__LoadCharacterMenu() */

void __thiscall GSMBMenu__LoadCharacterMenu(GSMBMenu *self)

{
  int *piVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint32_t uVar8;
  void *pvVar9;
  ushort *puVar10;
  void *pvVar11;
  char *pcVar12;
  FlashAnimationLibrary *pFVar13;
  uint64_t uVar14;
  FlashMovieClip *pFVar15;
  ulong uVar16;
  void *pvVar17;
  short sVar18;
  ushort uVar19;
  ulong uVar20;
  int iVar21;
  uint64_t *puVar22;
  int iVar23;
  bool bVar24;
  byte bVar25;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  char local_58 [16];
  uint8_t *local_48 [3];
  
  bVar25 = 0;
  local_48[0] = &DAT_008184c8 /* R:0.00016803004837129265f */;
  if (*(long *)(self + 0x660) == 0) {
    pcVar12 = (char *)FormatResourcePath("/Menus/chartrans.am",local_48);
    pFVar13 = operator_new(0xb0);
                    /* try { // try from 004c9606 to 004c960a has its CatchHandler @ 004c99fe */
    FlashAnimationLibrary__FlashAnimationLibrary__00576680(pFVar13,pcVar12);
    *(FlashAnimationLibrary **)(self + 0x660) = pFVar13;
                    /* try { // try from 004c961a to 004c9657 has its CatchHandler @ 004c9a44 */
    uVar14 = FlashAnimationLibrary__GetMovieClip__005731d0(pFVar13,"curtiantransin");
    *(uint64_t *)(self + 0x668) = uVar14;
    uVar14 = FlashAnimationLibrary__GetMovieClip__005731d0
                       (*(FlashAnimationLibrary **)(self + 0x660),"curtiantransout");
    *(uint64_t *)(self + 0x670) = uVar14;
    pcVar12 = (char *)FormatResourcePath("/Menus/charactermenu.am",local_48);
    pFVar13 = operator_new(0xb0);
                    /* try { // try from 004c9661 to 004c9665 has its CatchHandler @ 004c9a49 */
    FlashAnimationLibrary__FlashAnimationLibrary__00576680(pFVar13,pcVar12);
    *(FlashAnimationLibrary **)(self + 0x658) = pFVar13;
                    /* try { // try from 004c9675 to 004c99f1 has its CatchHandler @ 004c9a44 */
    uVar14 = FlashAnimationLibrary__GetMovieClip__005731d0(pFVar13,"characterselect");
    *(uint64_t *)(self + 0x678) = uVar14;
    uVar14 = FlashAnimationLibrary__GetMovieClip__005731d0
                       (*(FlashAnimationLibrary **)(self + 0x658),"codesound");
    *(uint64_t *)(self + 0x680) = uVar14;
    uVar14 = FlashAnimationLibrary__GetMovieClip__005731d0
                       (*(FlashAnimationLibrary **)(self + 0x658),"selecticon");
    *(uint64_t *)(self + 0x688) = uVar14;
    uVar8 = FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 0x658),"rowidle")
    ;
    *(uint32_t *)(self + 0x768) = uVar8;
    uVar8 = FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 0x658),"rowleft")
    ;
    *(uint32_t *)(self + 0x760) = uVar8;
    uVar8 = FlashAnimationLibrary__GetClipIndex
                      (*(FlashAnimationLibrary **)(self + 0x658),"rowright");
    *(uint32_t *)(self + 0x764) = uVar8;
    uVar14 = FlashAnimationLibrary__GetTextField
                       (*(FlashAnimationLibrary **)(self + 0x658),"charactertext");
    *(uint64_t *)(self + 0x750) = uVar14;
    iVar21 = FlashAnimationLibrary__GetClipIndex
                       (*(FlashAnimationLibrary **)(self + 0x658),"placeholder1");
    iVar3 = FlashAnimationLibrary__GetClipIndex
                      (*(FlashAnimationLibrary **)(self + 0x658),"placeholder3");
    iVar23 = FlashAnimationLibrary__GetClipIndex
                       (*(FlashAnimationLibrary **)(self + 0x658),"placeholder2");
    iVar4 = FlashAnimationLibrary__GetClipIndex
                      (*(FlashAnimationLibrary **)(self + 0x658),"placeholder4");
    pFVar15 = (FlashMovieClip *)
              FlashAnimationLibrary__GetLibraryEntry
                        (*(FlashAnimationLibrary **)(self + 0x658),
                         *(int *)(*(long *)(self + 0x678) + 0x20));
    uVar14 = FlashMovieClip__FindInstance(pFVar15,*(int *)(self + 0x768),0,(int *)0x0,0);
    *(uint64_t *)(self + 0x748) = uVar14;
    pFVar15 = (FlashMovieClip *)
              FlashAnimationLibrary__GetLibraryEntry
                        (*(FlashAnimationLibrary **)(self + 0x658),*(int *)(self + 0x768));
    uVar14 = FlashMovieClip__FindInstance(pFVar15,iVar21,0,(int *)0x0,0);
    *(uint64_t *)(self + 0x720) = uVar14;
    uVar14 = FlashMovieClip__FindInstance(pFVar15,iVar3,0,(int *)0x0,0);
    *(uint64_t *)(self + 0x728) = uVar14;
    uVar14 = FlashMovieClip__FindInstance(pFVar15,iVar23,0,(int *)0x0,0);
    *(uint64_t *)(self + 0x730) = uVar14;
    uVar14 = FlashMovieClip__FindInstance(pFVar15,iVar4,0,(int *)0x0,0);
    *(uint64_t *)(self + 0x738) = uVar14;
    pFVar15 = (FlashMovieClip *)
              FlashAnimationLibrary__GetLibraryEntry
                        (*(FlashAnimationLibrary **)(self + 0x658),*(int *)(self + 0x764));
    uVar14 = FlashMovieClip__FindInstance(pFVar15,iVar21,0,(int *)0x0,0);
    *(uint64_t *)(self + 0x690) = uVar14;
    uVar14 = FlashMovieClip__FindInstance(pFVar15,iVar3,0,(int *)0x0,0);
    *(uint64_t *)(self + 0x698) = uVar14;
    uVar14 = FlashMovieClip__FindInstance(pFVar15,iVar23,0,(int *)0x0,0);
    *(uint64_t *)(self + 0x6a0) = uVar14;
    uVar14 = FlashMovieClip__FindInstance(pFVar15,iVar4,0,(int *)0x0,0);
    *(uint64_t *)(self + 0x6a8) = uVar14;
    uVar14 = FlashMovieClip__FindInstance(pFVar15,iVar21,0,(int *)0x0,1);
    *(uint64_t *)(self + 0x6b0) = uVar14;
    uVar14 = FlashMovieClip__FindInstance(pFVar15,iVar3,0,(int *)0x0,1);
    *(uint64_t *)(self + 0x6b8) = uVar14;
    uVar14 = FlashMovieClip__FindInstance(pFVar15,iVar23,0,(int *)0x0,1);
    *(uint64_t *)(self + 0x6c0) = uVar14;
    uVar14 = FlashMovieClip__FindInstance(pFVar15,iVar4,0,(int *)0x0,1);
    *(uint64_t *)(self + 0x6c8) = uVar14;
    pFVar15 = (FlashMovieClip *)
              FlashAnimationLibrary__GetLibraryEntry
                        (*(FlashAnimationLibrary **)(self + 0x658),*(int *)(self + 0x760));
    uVar14 = FlashMovieClip__FindInstance(pFVar15,iVar21,0,(int *)0x0,0);
    *(uint64_t *)(self + 0x6d8) = uVar14;
    uVar14 = FlashMovieClip__FindInstance(pFVar15,iVar3,0,(int *)0x0,0);
    *(uint64_t *)(self + 0x6e0) = uVar14;
    uVar14 = FlashMovieClip__FindInstance(pFVar15,iVar23,0,(int *)0x0,0);
    *(uint64_t *)(self + 0x6e8) = uVar14;
    uVar14 = FlashMovieClip__FindInstance(pFVar15,iVar4,0,(int *)0x0,0);
    *(uint64_t *)(self + 0x6f0) = uVar14;
    uVar14 = FlashMovieClip__FindInstance(pFVar15,iVar21,0,(int *)0x0,1);
    *(uint64_t *)(self + 0x6f8) = uVar14;
    uVar14 = FlashMovieClip__FindInstance(pFVar15,iVar3,0,(int *)0x0,1);
    *(uint64_t *)(self + 0x700) = uVar14;
    uVar14 = FlashMovieClip__FindInstance(pFVar15,iVar23,0,(int *)0x0,1);
    *(uint64_t *)(self + 0x708) = uVar14;
    uVar14 = FlashMovieClip__FindInstance(pFVar15,iVar4,0,(int *)0x0,1);
    *(uint64_t *)(self + 0x710) = uVar14;
    uVar14 = FlashAnimationLibrary__GetTextField
                       (*(FlashAnimationLibrary **)(self + 0x658),"bandagenumber");
    *(uint64_t *)(self + 0x758) = uVar14;
  }
  iVar21 = 1;
  do {
    iVar23 = iVar21 + -1;
                    /* try { // try from 004c8e33 to 004c95fc has its CatchHandler @ 004c9a44 */
    iVar3 = GSMBChapterData__IsCharacterUnlocked(SMBChapterData,iVar23);
    if ((iVar3 == 1) ||
       (iVar3 = GSMBChapterData__IsCharacterUnlockedWithBandages(SMBChapterData,iVar23), iVar3 == 1)
       ) {
      Sprint("%i-on",local_58,iVar21);
      iVar3 = FlashAnimationLibrary__GetClipIndex
                        (*(FlashAnimationLibrary **)(self + 0x658),local_58);
      Sprint("%i-off",local_58,iVar21);
      iVar4 = FlashAnimationLibrary__GetClipIndex
                        (*(FlashAnimationLibrary **)(self + 0x658),local_58);
      Sprint("%i-locked",local_58,iVar21);
      iVar5 = FlashAnimationLibrary__GetClipIndex
                        (*(FlashAnimationLibrary **)(self + 0x658),local_58);
      Sprint("%i-blocked",local_58,iVar21);
      iVar6 = FlashAnimationLibrary__GetClipIndex
                        (*(FlashAnimationLibrary **)(self + 0x658),local_58);
      iVar7 = GSMBChapterData__IsCharacterUnlocked(SMBChapterData,iVar23);
      switch(iVar23) {
      case 0:
        local_68 = 0x96;
        local_64 = 0x86;
        local_60 = -1;
        local_5c = 0x107;
        break;
      case 1:
        local_68 = 0x99;
        local_64 = 0x89;
        local_60 = -1;
        local_5c = 0x109;
        break;
      case 2:
        local_68 = 0x97;
        local_64 = 0x87;
        local_60 = -1;
        local_5c = 0x108;
        break;
      case 3:
        local_68 = 0x98;
        local_64 = 0x88;
        local_60 = -1;
        local_5c = 0x10a;
        break;
      case 7:
        local_68 = 0x9a;
        local_64 = 0x8a;
        local_60 = 0x11c;
        local_5c = 0x10b;
        break;
      case 10:
        local_68 = 0xea;
        local_64 = 0xe9;
        local_60 = 0x133;
        local_5c = 0x132;
        break;
      case 0xb:
        local_68 = 0x9b;
        local_64 = 0x8b;
        local_60 = 0x11d;
        local_5c = 0x10c;
        break;
      case 0xc:
        local_68 = 0xec;
        local_64 = 0xeb;
        local_60 = 0x135;
        local_5c = 0x134;
        break;
      case 0xe:
        local_68 = 0xee;
        local_64 = 0xed;
        local_60 = 0x137;
        local_5c = 0x136;
        break;
      case 0x10:
        local_68 = 0x9c;
        local_64 = 0x8c;
        local_60 = 0x120;
        local_5c = 0x10d;
        break;
      case 0x12:
        local_68 = 0x9e;
        local_64 = 0x8e;
        local_60 = 0x125;
        local_5c = 0x10f;
        break;
      case 0x13:
        local_68 = 0xf0;
        local_64 = 0xef;
        local_60 = 0x139;
        local_5c = 0x138;
        break;
      case 0x15:
        local_68 = 0xe8;
        local_64 = 0xe7;
        local_60 = 0x131;
        local_5c = 0x130;
        break;
      case 0x16:
        local_68 = 0x9d;
        local_64 = 0x8d;
        local_60 = 0x124;
        local_5c = 0x10e;
        break;
      case 0x17:
        local_68 = 0xe4;
        local_64 = 0xe3;
        local_60 = 0x12d;
        local_5c = 300;
        break;
      case 0x18:
        local_68 = 0x93;
        local_64 = 0x83;
        local_60 = 0x11a;
        local_5c = 0x104;
        break;
      case 0x1b:
        local_68 = 0xa0;
        local_64 = 0x90;
        local_60 = 0x11f;
        local_5c = 0x113;
      }
      if (*(int *)(self + 0xc08) == -0x5eef3582) {
        uVar2 = *(ushort *)(self + 0xbe8);
        if (*(ushort *)(self + 0xbea) <= uVar2) {
          uVar2 = *(ushort *)(self + 0xbea) + *(short *)(self + 0xbf4);
          uVar20 = (ulong)(byte)self[0xbec];
          pvVar9 = *(void **)(self + 0xbf8);
          *(ushort *)(self + 0xbea) = uVar2;
          uVar16 = (ulong)uVar2 * 0x2c;
          pvVar11 = malloc(uVar20 + 0x10 + uVar16);
          pvVar17 = (void *)0x0;
          if (pvVar11 != (void *)0x0) {
            pvVar17 = (void *)((long)pvVar11 + 0x10U +
                              (uVar20 - ((long)pvVar11 + 0x10U) % uVar20) % uVar20);
            *(ulong *)((long)pvVar17 + -0x10) = uVar16;
            *(void **)((long)pvVar17 + -8) = pvVar11;
            if (pvVar9 != (void *)0x0) {
              uVar20 = *(ulong *)((long)pvVar9 + -0x10);
              if (uVar16 <= *(ulong *)((long)pvVar9 + -0x10)) {
                uVar20 = uVar16;
              }
              memcpy(pvVar17,pvVar9,uVar20);
              free(*(void **)((long)pvVar9 + -8));
            }
          }
          pvVar9 = *(void **)(self + 0xc00);
          *(void **)(self + 0xbf8) = pvVar17;
          if (pvVar9 != (void *)0x0) {
            uVar19 = *(ushort *)(self + 0xbea);
            uVar16 = (ulong)(byte)self[0xbec];
            uVar20 = (ulong)uVar19 * 2;
            pvVar17 = malloc(uVar16 + 0x10 + uVar20);
            pvVar11 = (void *)0x0;
            if (pvVar17 != (void *)0x0) {
              pvVar11 = (void *)((long)pvVar17 + 0x10U +
                                (uVar16 - ((long)pvVar17 + 0x10U) % uVar16) % uVar16);
              *(void **)((long)pvVar11 + -8) = pvVar17;
              *(ulong *)((long)pvVar11 + -0x10) = uVar20;
              uVar16 = *(ulong *)((long)pvVar9 + -0x10);
              if (uVar20 <= *(ulong *)((long)pvVar9 + -0x10)) {
                uVar16 = uVar20;
              }
              memcpy(pvVar11,pvVar9,uVar16);
              free(*(void **)((long)pvVar9 + -8));
              uVar19 = *(ushort *)(self + 0xbea);
            }
            uVar2 = *(ushort *)(self + 0xbe8);
            *(void **)(self + 0xc00) = pvVar11;
            if (uVar19 <= uVar2) goto LAB_004c9039;
            while( true ) {
              uVar20 = (ulong)uVar2;
              uVar2 = uVar2 + 1;
              *(uint16_t *)((long)pvVar11 + uVar20 * 2) = 0xffff;
              if (uVar19 <= uVar2) break;
              pvVar11 = *(void **)(self + 0xc00);
            }
          }
          uVar2 = *(ushort *)(self + 0xbe8);
        }
      }
      else {
        uVar20 = (ulong)(byte)self[0xbec];
        *(uint32_t *)(self + 0xbf0) = 0;
        pvVar9 = malloc(uVar20 + 0xec);
        puVar22 = (uint64_t *)0x0;
        if (pvVar9 != (void *)0x0) {
          puVar22 = (uint64_t *)
                    ((long)pvVar9 + 0x10U + (uVar20 - ((long)pvVar9 + 0x10U) % uVar20) % uVar20);
          puVar22[-2] = 0xdc;
          puVar22[-1] = pvVar9;
        }
        bVar24 = ((ulong)puVar22 & 1) != 0;
        *(uint64_t **)(self + 0xbf8) = puVar22;
        uVar20 = 0xdc;
        if (bVar24) {
          *(uint8_t *)puVar22 = 0;
          puVar22 = (uint64_t *)((long)puVar22 + 1);
          uVar20 = 0xdb;
        }
        if (((ulong)puVar22 & 2) != 0) {
          *(uint16_t *)puVar22 = 0;
          uVar20 = (ulong)((int)uVar20 - 2);
          puVar22 = (uint64_t *)((long)puVar22 + 2);
        }
        if (((ulong)puVar22 & 4) != 0) {
          *(uint32_t *)puVar22 = 0;
          uVar20 = (ulong)((int)uVar20 - 4);
          puVar22 = (uint64_t *)((long)puVar22 + 4);
        }
        for (uVar16 = uVar20 >> 3; uVar16 != 0; uVar16 = uVar16 - 1) {
          *puVar22 = 0;
          puVar22 = puVar22 + (ulong)bVar25 * -2 + 1;
        }
        if ((uVar20 & 4) != 0) {
          *(uint32_t *)puVar22 = 0;
          puVar22 = (uint64_t *)((long)puVar22 + 4);
        }
        if ((uVar20 & 2) != 0) {
          *(uint16_t *)puVar22 = 0;
          puVar22 = (uint64_t *)((long)puVar22 + 2);
        }
        if (bVar24) {
          *(uint8_t *)puVar22 = 0;
        }
        *(uint16_t *)(self + 0xbe8) = 0;
        *(uint16_t *)(self + 0xbea) = 5;
        uVar2 = 0;
        *(uint32_t *)(self + 0xc08) = 0xa110ca7e;
        *(uint16_t *)(self + 0xbf4) = 5;
      }
LAB_004c9039:
      if ((*(int *)(self + 0xbf0) == 1) && (*(short *)(self + 0xbea) != 0)) {
        puVar10 = *(ushort **)(self + 0xc00);
        sVar18 = 0;
        uVar19 = *puVar10;
        while (uVar19 != 0xffff) {
          puVar10 = puVar10 + 1;
          sVar18 = sVar18 + 1;
          if (sVar18 == *(short *)(self + 0xbea)) goto LAB_004c9046;
          uVar19 = *puVar10;
        }
        *puVar10 = uVar2;
        uVar2 = *(ushort *)(self + 0xbe8);
      }
LAB_004c9046:
      piVar1 = (int *)(*(long *)(self + 0xbf8) + (ulong)uVar2 * 0x2c);
      piVar1[3] = iVar5;
      *piVar1 = iVar23;
      piVar1[1] = iVar3;
      piVar1[2] = iVar4;
      piVar1[5] = iVar7;
      piVar1[4] = iVar6;
      piVar1[6] = 1;
      piVar1[7] = local_64;
      piVar1[8] = local_68;
      piVar1[9] = local_5c;
      piVar1[10] = local_60;
      *(short *)(self + 0xbe8) = *(short *)(self + 0xbe8) + 1;
    }
    iVar21 = iVar21 + 1;
    if (iVar21 == 0x1f) {
      *(uint32_t *)(self + 0xd08) = 0;
      SetCharSilouetteText(self);
      self[0x1843] = (GSMBMenu)((byte)self[0x1843] | 0x80);
      if ((allocator *)(local_48[0] + -0x18) !=
          (allocator *)&std__string_Rep_S_empty_rep_storage) {
        LOCK();
        piVar1 = (int *)(local_48[0] + -8);
        iVar21 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar21 < 1) {
          std__string_Rep_M_destroy((allocator *)(local_48[0] + -0x18));
        }
      }
      return;
    }
  } while( true );
}

/* ======================================================================
 * GSMBMenu__UnloadCharacterMenu  (Ghidra `UnloadCharacterMenu` @ 004c9ba0)
 * Signature: uint8_t __thiscall UnloadCharacterMenu(GSMBMenu * self)
 * Class: GSMBMenu
 * Calls: (none)
 * Called by: (none)
 */
/* GSMBMenu__UnloadCharacterMenu() */

void __thiscall GSMBMenu__UnloadCharacterMenu(GSMBMenu *self)

{
  ushort uVar1;
  long lVar2;
  
  *(uint16_t *)(self + 0xbe8) = 0;
  if ((*(int *)(self + 0xbf0) == 1) && (uVar1 = *(ushort *)(self + 0xbea), uVar1 != 0)) {
    lVar2 = 0;
    do {
      *(uint16_t *)(*(long *)(self + 0xc00) + lVar2) = 0xffff;
      lVar2 = lVar2 + 2;
    } while (lVar2 != (ulong)(uVar1 - 1 & 0xffff) * 2 + 2);
    return;
  }
  return;
}

/* ======================================================================
 * GSMBMenu__TransitionInWorld  (Ghidra `TransitionInWorld` @ 004c9bf0)
 * Signature: uint8_t __thiscall TransitionInWorld(GSMBMenu * self)
 * Class: GSMBMenu
 * Calls: `GSMBCutSceneManager__PlayCutScene`, `GSuperMeatBoy__SwitchGameMode`, `SMBMenuEndMenuTransition`
 * Called by: (none)
 */
/* GSMBMenu__TransitionInWorld() */

void __thiscall GSMBMenu__TransitionInWorld(GSMBMenu *self)

{
  uint32_t local_58;
  uint32_t local_54;
  uint32_t local_50;
  uint64_t local_48;
  code *local_40;
  uint64_t local_38;
  uint64_t local_30;
  uint64_t local_28;
  uint32_t local_20;
  uint32_t local_1c;
  uint32_t local_18;
  
  local_48 = *(uint64_t *)(self + 0x628);
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 1;
  local_58 = 0x44200000;
  local_54 = 0x43f00000;
  local_50 = 1;
  local_40 = SMBMenuEndMenuTransition;
  local_18 = 0;
  GSMBCutSceneManager__PlayCutScene(SMBCutSceneManager,(SMBCutScene *)&local_58);
  GSuperMeatBoy__SwitchGameMode(SuperMeatBoy,10);
  return;
}

/* ======================================================================
 * GSMBMenu__TransitionOutWorld  (Ghidra `TransitionOutWorld` @ 004c9c80)
 * Signature: uint8_t __thiscall TransitionOutWorld(GSMBMenu * self)
 * Class: GSMBMenu
 * Calls: `GSMBCutSceneManager__PlayCutScene`, `SMBMenuInChapterTrans`
 * Called by: (none)
 */
/* GSMBMenu__TransitionOutWorld() */

void __thiscall GSMBMenu__TransitionOutWorld(GSMBMenu *self)

{
  uint32_t local_58;
  uint32_t local_54;
  uint32_t local_50;
  uint64_t local_48;
  code *local_40;
  uint64_t local_38;
  uint64_t local_30;
  uint64_t local_28;
  uint32_t local_20;
  uint32_t local_1c;
  uint32_t local_18;
  
  if (bMenuTransitioning != 1) {
    local_48 = *(uint64_t *)(self + 0x620);
    bMenuTransitioning = 1;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_1c = 1;
    local_58 = 0x44200000;
    local_54 = 0x43f00000;
    local_50 = 1;
    local_40 = SMBMenuInChapterTrans;
    local_18 = 0;
    GSMBCutSceneManager__PlayCutScene(SMBCutSceneManager,(SMBCutScene *)&local_58);
  }
  return;
}

/* ======================================================================
 * GSMBMenu__TransitionOutChapter  (Ghidra `TransitionOutChapter` @ 004c9d10)
 * Signature: uint8_t __thiscall TransitionOutChapter(GSMBMenu * self)
 * Class: GSMBMenu
 * Calls: `GSMBCutSceneManager__PlayCutScene`, `SMBMenuInWorldTrans`
 * Called by: (none)
 */
/* GSMBMenu__TransitionOutChapter() */

void __thiscall GSMBMenu__TransitionOutChapter(GSMBMenu *self)

{
  uint32_t local_58;
  uint32_t local_54;
  uint32_t local_50;
  uint64_t local_48;
  code *local_40;
  uint64_t local_38;
  uint64_t local_30;
  uint64_t local_28;
  uint32_t local_20;
  uint32_t local_1c;
  uint32_t local_18;
  
  if (bMenuTransitioning != 1) {
    local_48 = *(uint64_t *)(self + 0x620);
    bMenuTransitioning = 1;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_1c = 1;
    local_58 = 0x44200000;
    local_54 = 0x43f00000;
    local_50 = 1;
    local_40 = SMBMenuInWorldTrans;
    local_18 = 0;
    GSMBCutSceneManager__PlayCutScene(SMBCutSceneManager,(SMBCutScene *)&local_58);
  }
  return;
}

/* ======================================================================
 * GSMBMenu__ProcessDisconnect  (Ghidra `ProcessDisconnect` @ 004c9e10)
 * Signature: uint8_t __thiscall ProcessDisconnect(GSMBMenu * self)
 * Class: GSMBMenu
 * Calls: `SMBInternetChapterSel__CloseDueToConnectionLoss`, `SMBLeaderBoardMenu__CloseDueToConnectionLoss`
 * Called by: `GSuperMeatBoy__Update__00516690`
 */
/* GSMBMenu__ProcessDisconnect() */

void __thiscall GSMBMenu__ProcessDisconnect(GSMBMenu *self)

{
  SMBLeaderBoardMenu__CloseDueToConnectionLoss((SMBLeaderBoardMenu *)(self + 0xd10));
  SMBInternetChapterSel__CloseDueToConnectionLoss((SMBInternetChapterSel *)(self + 0x1448));
  return;
}

/* ======================================================================
 * GSMBMenu__UnloadChapterMenu  (Ghidra `UnloadChapterMenu` @ 004c9e30)
 * Signature: uint8_t __thiscall UnloadChapterMenu(GSMBMenu * self)
 * Class: GSMBMenu
 * Calls: `FlashAnimationLibrary__FlashAnimationLibrary`, `operator_delete`
 * Called by: (none)
 */
/* GSMBMenu__UnloadChapterMenu() */

void __thiscall GSMBMenu__UnloadChapterMenu(GSMBMenu *self)

{
  ushort uVar1;
  FlashAnimationLibrary *pFVar2;
  int iVar3;
  long lVar4;
  
  if (*(long **)(self + 0x4e0) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x4e0) + 8))();
  }
  *(uint64_t *)(self + 0x4e0) = 0;
  if (*(long **)(self + 0x4e8) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x4e8) + 8))();
  }
  *(uint64_t *)(self + 0x4e8) = 0;
  if (*(long **)(self + 0x4f0) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x4f0) + 8))();
  }
  *(uint64_t *)(self + 0x4f0) = 0;
  if (*(long **)(self + 0x5c8) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x5c8) + 8))();
  }
  *(uint64_t *)(self + 0x5c8) = 0;
  if (*(long **)(self + 0x5c0) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x5c0) + 8))();
  }
  *(uint64_t *)(self + 0x5c0) = 0;
  if (*(long **)(self + 0x5d0) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x5d0) + 8))();
  }
  *(uint64_t *)(self + 0x5d0) = 0;
  if (*(long **)(self + 0x5d8) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x5d8) + 8))();
  }
  *(uint64_t *)(self + 0x5d8) = 0;
  if (*(long **)(self + 0x5e0) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x5e0) + 8))();
  }
  *(uint64_t *)(self + 0x5e0) = 0;
  if (*(long **)(self + 0x500) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x500) + 8))();
  }
  if (*(long **)(self + 0x508) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x508) + 8))();
  }
  pFVar2 = *(FlashAnimationLibrary **)(self + 0x4f8);
  if (pFVar2 != (FlashAnimationLibrary *)0x0) {
    FlashAnimationLibrary__FlashAnimationLibrary(pFVar2);
    operator_delete(pFVar2);
  }
  if (*(long **)(self + 0x510) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x510) + 8))();
  }
  iVar3 = bBossJustDefeated;
  *(uint64_t *)(self + 0x510) = 0;
  if (iVar3 == 0) {
    if (*(long **)(self + 0x1168) != (long *)0x0) {
      (**(code **)(**(long **)(self + 0x1168) + 8))();
    }
    *(uint64_t *)(self + 0x1168) = 0;
    if (*(long **)(self + 0x1170) != (long *)0x0) {
      (**(code **)(**(long **)(self + 0x1170) + 8))();
    }
    *(uint64_t *)(self + 0x1170) = 0;
    if (*(long **)(self + 0x1178) != (long *)0x0) {
      (**(code **)(**(long **)(self + 0x1178) + 8))();
    }
    pFVar2 = *(FlashAnimationLibrary **)(self + 0x1160);
    *(uint64_t *)(self + 0x1178) = 0;
    if (pFVar2 != (FlashAnimationLibrary *)0x0) {
      FlashAnimationLibrary__FlashAnimationLibrary(pFVar2);
      operator_delete(pFVar2);
    }
    *(uint64_t *)(self + 0x1160) = 0;
  }
  *(uint64_t *)(self + 0x4f8) = 0;
  *(uint64_t *)(self + 0x500) = 0;
  *(uint64_t *)(self + 0x508) = 0;
  *(uint32_t *)(self + 0x418) = 0;
  *(uint16_t *)(self + 0xcb8) = 0;
  if ((*(int *)(self + 0xcc0) == 1) && (uVar1 = *(ushort *)(self + 0xcba), uVar1 != 0)) {
    lVar4 = 0;
    do {
      *(uint16_t *)(*(long *)(self + 0xcd0) + lVar4) = 0xffff;
      lVar4 = lVar4 + 2;
    } while (lVar4 != (ulong)(uVar1 - 1 & 0xffff) * 2 + 2);
  }
  *(uint16_t *)(self + 0xc38) = 0;
  if ((*(int *)(self + 0xc40) == 1) && (uVar1 = *(ushort *)(self + 0xc3a), uVar1 != 0)) {
    lVar4 = 0;
    do {
      *(uint16_t *)(*(long *)(self + 0xc50) + lVar4) = 0xffff;
      lVar4 = lVar4 + 2;
    } while (lVar4 != (ulong)(uVar1 - 1 & 0xffff) * 2 + 2);
  }
  *(uint16_t *)(self + 0xbe8) = 0;
  if ((*(int *)(self + 0xbf0) == 1) && (uVar1 = *(ushort *)(self + 0xbea), uVar1 != 0)) {
    lVar4 = 0;
    do {
      *(uint16_t *)(*(long *)(self + 0xc00) + lVar4) = 0xffff;
      lVar4 = lVar4 + 2;
    } while (lVar4 != (ulong)(uVar1 - 1 & 0xffff) * 2 + 2);
    return;
  }
  return;
}

/* ======================================================================
 * GSMBMenu__LoadChapterMenu  (Ghidra `LoadChapterMenu` @ 004ca140)
 * Signature: uint8_t __thiscall LoadChapterMenu(GSMBMenu * self, tagChapterName arg1)
 * Class: GSMBMenu
 * Calls: `AutoLockSection__AutoLockSection`, `AutoLockSection__AutoLockSection__005b59d0`, `FlashAnimationLibrary__FlashAnimationLibrary__00576680`, `FlashAnimationLibrary__GetClipIndex`, `FlashAnimationLibrary__GetLibraryEntry`, `FlashAnimationLibrary__GetMovieClip__005731d0`, `FlashAnimationLibrary__GetTextField`, `FlashLibraryInstance__GotoAndStop`, `FlashMovieClip__FindInstance`, `FormatResourcePath` (+9 more)
 * Called by: `SMBChapter__PlayBossOutro`, `SMBChapter__PlayWarpOutro`, `SMBChapter__ShowGameOverScreen`
 */
/* WARNING: Removing unreachable block (ram,0x004cc942) */
/* GSMBMenu__LoadChapterMenu(tagChapterName) */

void __thiscall GSMBMenu__LoadChapterMenu(GSMBMenu *self,int arg2)

{
  int *piVar1;
  uint16_t *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  ushort uVar10;
  uint32_t uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint64_t uVar17;
  wchar_t *pwVar18;
  long lVar19;
  FlashMovieClip *this_00;
  FlashMovieClip *this_01;
  long lVar20;
  long lVar21;
  void *pvVar22;
  ushort *puVar23;
  long lVar24;
  char *pcVar25;
  void *pvVar26;
  FlashAnimationLibrary *pFVar27;
  ulong uVar28;
  ulong uVar29;
  short *psVar30;
  long lVar31;
  uint uVar32;
  uint64_t *puVar33;
  uint64_t *puVar34;
  long lVar35;
  void *pvVar36;
  ushort uVar37;
  int iVar38;
  bool bVar39;
  bool bVar40;
  byte bVar41;
  long local_b0;
  int local_a8;
  int local_84;
  char local_78 [32];
  AutoLockSection local_58 [16];
  uint8_t *local_48 [3];
  
  bVar41 = 0;
  AutoLockSection__AutoLockSection(local_58,(CriticalSection *)SMBMenuSection);
  if (arg2 == *(int *)(self + 0x418)) goto LAB_004caa98;
                    /* try { // try from 004ca177 to 004ca1d8 has its CatchHandler @ 004cc939 */
  UnloadChapterMenu(self);
  SMBChapter__DestroyBossIntro((SMBChapter *)(SuperMeatBoy + 0x90));
  if (arg2 == 7) {
                    /* try { // try from 004cc063 to 004cc097 has its CatchHandler @ 004cc939 */
    uVar17 = FlashAnimationLibrary__GetMovieClip__005731d0(*(FlashAnimationLibrary **)(self + 0x4c8),"idle2");
    *(uint64_t *)(self + 0x4e0) = uVar17;
    uVar17 = FlashAnimationLibrary__GetMovieClip__005731d0
                       (*(FlashAnimationLibrary **)(self + 0x4c8),"levelselect2");
    *(uint64_t *)(self + 0x4e8) = uVar17;
    uVar17 = FlashAnimationLibrary__GetMovieClip__005731d0
                       (*(FlashAnimationLibrary **)(self + 0x4c8),"fallstart2");
  }
  else {
    uVar17 = FlashAnimationLibrary__GetMovieClip__005731d0(*(FlashAnimationLibrary **)(self + 0x4c8),"idle");
    *(uint64_t *)(self + 0x4e0) = uVar17;
    uVar17 = FlashAnimationLibrary__GetMovieClip__005731d0
                       (*(FlashAnimationLibrary **)(self + 0x4c8),"levelselect");
    *(uint64_t *)(self + 0x4e8) = uVar17;
    uVar17 = FlashAnimationLibrary__GetMovieClip__005731d0
                       (*(FlashAnimationLibrary **)(self + 0x4c8),"fallstart");
  }
  *(uint64_t *)(self + 0x4f0) = uVar17;
  lVar19 = *(long *)(self + 0x4e0);
  local_48[0] = &DAT_008184c8 /* R:0.00016803004837129265f */;
  *(uint32_t *)(lVar19 + 0x30) = 0;
  *(uint32_t *)(lVar19 + 0x34) = 0;
  *(uint32_t *)(lVar19 + 0x38) = 0;
  *(uint32_t *)(lVar19 + 0x3c) = 0;
  *(uint32_t *)(self + 0x4a8) = 0x3f800000;
  *(long *)(self + 0x480) = lVar19 + 0x30;
  *(uint32_t *)(self + 0x488) = 0;
  *(uint32_t *)(self + 0x48c) = 0;
  *(uint32_t *)(self + 0x4b0) = 0x3e800000;
  *(uint32_t *)(self + 0x490) = 0;
  *(uint32_t *)(self + 0x4bc) = 0;
  *(uint32_t *)(self + 0x4c0) = 0;
  *(uint32_t *)(self + 0x494) = 0;
  *(uint32_t *)(self + 0x4c4) = 1;
  *(uint32_t *)(self + 0x498) = 0;
  *(uint32_t *)(self + 0x424) = 0;
  *(uint32_t *)(self + 0x4b8) = 0;
  *(uint32_t *)(self + 0x49c) = 0;
  iVar12 = *(int *)(self + 0x41c);
  *(uint32_t *)(self + 0x4a0) = 0;
  *(uint32_t *)(self + 0x4a4) = 0;
  *(uint32_t *)(self + 0x4ac) = 0;
  *(uint32_t *)(self + 0x4b4) = 0;
  *(int *)(self + 0x418) = iVar12;
  switch(iVar12) {
  default:
    goto joined_r0x004cc33a;
  case 1:
    *(uint32_t *)(self + 0x424) = 1;
    pcVar25 = (char *)FormatResourcePath("/Menus/levelmenu.am",local_48);
    pFVar27 = operator_new(0xb0);
                    /* try { // try from 004cc45b to 004cc45f has its CatchHandler @ 004cc956 */
    FlashAnimationLibrary__FlashAnimationLibrary__00576680(pFVar27,pcVar25);
    *(FlashAnimationLibrary **)(self + 0x4f8) = pFVar27;
                    /* try { // try from 004cc46c to 004cc49e has its CatchHandler @ 004cc934 */
    uVar17 = GetLocalizedText(0xfb);
    break;
  case 2:
    *(uint32_t *)(self + 0x424) = 2;
    pcVar25 = (char *)FormatResourcePath("/Menus/hlevelmenu.am",local_48);
    pFVar27 = operator_new(0xb0);
                    /* try { // try from 004cc40e to 004cc412 has its CatchHandler @ 004cc8f5 */
    FlashAnimationLibrary__FlashAnimationLibrary__00576680(pFVar27,pcVar25);
    *(FlashAnimationLibrary **)(self + 0x4f8) = pFVar27;
                    /* try { // try from 004cc41f to 004cc451 has its CatchHandler @ 004cc934 */
    uVar17 = GetLocalizedText(0xfc);
    break;
  case 3:
    *(uint32_t *)(self + 0x424) = 3;
    pcVar25 = (char *)FormatResourcePath("/Menus/flevelmenu.am",local_48);
    pFVar27 = operator_new(0xb0);
                    /* try { // try from 004cc3c1 to 004cc3c5 has its CatchHandler @ 004cc922 */
    FlashAnimationLibrary__FlashAnimationLibrary__00576680(pFVar27,pcVar25);
    *(FlashAnimationLibrary **)(self + 0x4f8) = pFVar27;
                    /* try { // try from 004cc3d2 to 004cc404 has its CatchHandler @ 004cc934 */
    uVar17 = GetLocalizedText(0xfd);
    break;
  case 4:
    *(uint32_t *)(self + 0x424) = 4;
    pcVar25 = (char *)FormatResourcePath("/Menus/helllevelmenu.am",local_48);
    pFVar27 = operator_new(0xb0);
                    /* try { // try from 004cc377 to 004cc37b has its CatchHandler @ 004cc924 */
    FlashAnimationLibrary__FlashAnimationLibrary__00576680(pFVar27,pcVar25);
    *(FlashAnimationLibrary **)(self + 0x4f8) = pFVar27;
                    /* try { // try from 004cc388 to 004cc3b7 has its CatchHandler @ 004cc934 */
    uVar17 = GetLocalizedText(0xfe);
    break;
  case 5:
    *(uint32_t *)(self + 0x424) = 5;
    pcVar25 = (char *)FormatResourcePath("/Menus/rlevelmenu.am",local_48);
    pFVar27 = operator_new(0xb0);
                    /* try { // try from 004cc2f7 to 004cc2fb has its CatchHandler @ 004cc926 */
    FlashAnimationLibrary__FlashAnimationLibrary__00576680(pFVar27,pcVar25);
    *(FlashAnimationLibrary **)(self + 0x4f8) = pFVar27;
                    /* try { // try from 004cc308 to 004cc36d has its CatchHandler @ 004cc934 */
    uVar17 = GetLocalizedText(0xff);
    break;
  case 6:
    *(uint32_t *)(self + 0x424) = 6;
    pcVar25 = (char *)FormatResourcePath("/Menus/elevelmenu.am",local_48);
    pFVar27 = operator_new(0xb0);
                    /* try { // try from 004cc58f to 004cc593 has its CatchHandler @ 004cc932 */
    FlashAnimationLibrary__FlashAnimationLibrary__00576680(pFVar27,pcVar25);
    *(FlashAnimationLibrary **)(self + 0x4f8) = pFVar27;
                    /* try { // try from 004cc5a0 to 004cc5a4 has its CatchHandler @ 004cc934 */
    uVar17 = GetLocalizedText(0x100);
    break;
  case 7:
    *(uint32_t *)(self + 0x424) = 7;
    pcVar25 = (char *)FormatResourcePath("/Menus/blevelmenu.am",local_48);
    pFVar27 = operator_new(0xb0);
                    /* try { // try from 004cc542 to 004cc546 has its CatchHandler @ 004cc950 */
    FlashAnimationLibrary__FlashAnimationLibrary__00576680(pFVar27,pcVar25);
    *(FlashAnimationLibrary **)(self + 0x4f8) = pFVar27;
                    /* try { // try from 004cc553 to 004cc585 has its CatchHandler @ 004cc934 */
    uVar17 = GetLocalizedText(0x101);
    break;
  case 8:
    *(uint32_t *)(self + 0x424) = 8;
    pcVar25 = (char *)FormatResourcePath("/Menus/demomenu.am",local_48);
    pFVar27 = operator_new(0xb0);
                    /* try { // try from 004cc4f5 to 004cc4f9 has its CatchHandler @ 004cc952 */
    FlashAnimationLibrary__FlashAnimationLibrary__00576680(pFVar27,pcVar25);
    *(FlashAnimationLibrary **)(self + 0x4f8) = pFVar27;
                    /* try { // try from 004cc506 to 004cc538 has its CatchHandler @ 004cc934 */
    uVar17 = GetLocalizedText(0x103);
    break;
  case 9:
    *(uint32_t *)(self + 0x424) = 1;
    pcVar25 = (char *)FormatResourcePath("/Menus/internets2menu.am",local_48);
    pFVar27 = operator_new(0xb0);
                    /* try { // try from 004cc4a8 to 004cc4ac has its CatchHandler @ 004cc954 */
    FlashAnimationLibrary__FlashAnimationLibrary__00576680(pFVar27,pcVar25);
    *(FlashAnimationLibrary **)(self + 0x4f8) = pFVar27;
                    /* try { // try from 004cc4b9 to 004cc4eb has its CatchHandler @ 004cc934 */
    uVar17 = GetLocalizedText(0x13a);
  }
  pwVar18 = (wchar_t *)
            FlashAnimationLibrary__GetTextField
                      (*(FlashAnimationLibrary **)(self + 0x4f8),"chaptername");
  FlashTextField__SetText(pwVar18,uVar17);
  iVar12 = *(int *)(self + 0x41c);
joined_r0x004cc33a:
  if ((iVar12 == 9) && (LoadedPortalChapter != 0)) {
    uVar17 = *(uint64_t *)(LoadedPortalChapter + 0xa0);
    pcVar25 = (char *)FlashAnimationLibrary__GetTextField
                                (*(FlashAnimationLibrary **)(self + 0x4f8),"chaptername");
    FlashTextField__SetText(pcVar25,uVar17);
  }
                    /* try { // try from 004ca2d5 to 004caa52 has its CatchHandler @ 004cc934 */
  uVar17 = GetLocalizedText(10);
  pwVar18 = (wchar_t *)
            FlashAnimationLibrary__GetTextField
                      (*(FlashAnimationLibrary **)(self + 0x4f8),"backtext");
  FlashTextField__SetText(pwVar18,uVar17);
  pwVar18 = (wchar_t *)
            FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 0x4f8),"select");
  if (pwVar18 != (wchar_t *)0x0) {
    uVar17 = GetLocalizedText(0xb7);
    FlashTextField__SetText(pwVar18,uVar17);
  }
  if ((*(int *)(self + 0x41c) == 8) &&
     (pwVar18 = (wchar_t *)
                FlashAnimationLibrary__GetTextField
                          (*(FlashAnimationLibrary **)(self + 0x4f8),"demo"),
     pwVar18 != (wchar_t *)0x0)) {
    GetLocalizedText(0x16);
    uVar17 = GetLocalizedText(0x48);
    FlashTextField__SetText(pwVar18,&DAT_005c6618 /* R:5.184804318001823e-44f */,uVar17);
  }
  uVar17 = FlashAnimationLibrary__GetTextField
                     (*(FlashAnimationLibrary **)(self + 0x4f8),"leadertext");
  *(uint64_t *)(self + 0x518) = uVar17;
  uVar17 = FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 0x4f8),"darktext")
  ;
  *(uint64_t *)(self + 0x528) = uVar17;
  uVar17 = FlashAnimationLibrary__GetTextField
                     (*(FlashAnimationLibrary **)(self + 0x4f8),"levelname");
  *(uint64_t *)(self + 0x530) = uVar17;
  uVar17 = FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 0x4f8),"besttime")
  ;
  *(uint64_t *)(self + 0x540) = uVar17;
  uVar17 = FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 0x4f8),"partime");
  *(uint64_t *)(self + 0x538) = uVar17;
  uVar17 = FlashAnimationLibrary__GetTextField
                     (*(FlashAnimationLibrary **)(self + 0x4f8),"levelgrade");
  *(uint64_t *)(self + 0x548) = uVar17;
  uVar17 = FlashAnimationLibrary__GetTextField
                     (*(FlashAnimationLibrary **)(self + 0x4f8),"bandagetext");
  *(uint64_t *)(self + 0x550) = uVar17;
  uVar17 = FlashAnimationLibrary__GetTextField
                     (*(FlashAnimationLibrary **)(self + 0x4f8),"completetext");
  *(uint64_t *)(self + 0x560) = uVar17;
  uVar17 = FlashAnimationLibrary__GetTextField
                     (*(FlashAnimationLibrary **)(self + 0x4f8),"chpercent");
  *(uint64_t *)(self + 0x558) = uVar17;
  uVar17 = FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 0x4f8),"unlock");
  *(uint64_t *)(self + 0x520) = uVar17;
  uVar17 = FlashAnimationLibrary__GetMovieClip__005731d0
                     (*(FlashAnimationLibrary **)(self + 0x4f8),"levelmenu");
  *(uint64_t *)(self + 0x500) = uVar17;
  uVar17 = FlashAnimationLibrary__GetMovieClip__005731d0
                     (*(FlashAnimationLibrary **)(self + 0x4f8),"levelmenualt");
  *(uint64_t *)(self + 0x508) = uVar17;
  uVar17 = FlashAnimationLibrary__GetMovieClip__005731d0(*(FlashAnimationLibrary **)(self + 0x4f8),"levela");
  *(uint64_t *)(self + 0x5c8) = uVar17;
  uVar17 = FlashAnimationLibrary__GetMovieClip__005731d0(*(FlashAnimationLibrary **)(self + 0x4f8),"levelb");
  *(uint64_t *)(self + 0x5c0) = uVar17;
  uVar17 = FlashAnimationLibrary__GetMovieClip__005731d0
                     (*(FlashAnimationLibrary **)(self + 0x4f8),"levelbandaid");
  *(uint64_t *)(self + 0x5d0) = uVar17;
  uVar17 = FlashAnimationLibrary__GetMovieClip__005731d0
                     (*(FlashAnimationLibrary **)(self + 0x4f8),"levelload");
  *(uint64_t *)(self + 0x5d8) = uVar17;
  uVar17 = FlashAnimationLibrary__GetMovieClip__005731d0
                     (*(FlashAnimationLibrary **)(self + 0x4f8),"leveldisabled");
  *(uint64_t *)(self + 0x5e0) = uVar17;
  lVar19 = FlashAnimationLibrary__GetMovieClip__005731d0
                     (*(FlashAnimationLibrary **)(self + 0x4f8),"menupopup");
  *(long *)(self + 0x510) = lVar19;
  if (lVar19 != 0) {
    *(uint32_t *)(lVar19 + 0x58) = 0x41f00000;
  }
  this_00 = (FlashMovieClip *)
            FlashAnimationLibrary__GetLibraryEntry
                      (*(FlashAnimationLibrary **)(self + 0x4f8),
                       *(int *)(*(long *)(self + 0x500) + 0x20));
  this_01 = (FlashMovieClip *)
            FlashAnimationLibrary__GetLibraryEntry
                      (*(FlashAnimationLibrary **)(self + 0x4f8),
                       *(int *)(*(long *)(self + 0x508) + 0x20));
  uVar11 = FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 0x4f8),"dwbutton")
  ;
  *(uint32_t *)(self + 0x568) = uVar11;
  iVar12 = FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 0x4f8),"dwbutton")
  ;
  *(int *)(self + 0x56c) = iVar12;
  uVar17 = FlashMovieClip__FindInstance(this_00,iVar12,0,(int *)0x0,0);
  *(uint64_t *)(self + 0x580) = uVar17;
  uVar17 = FlashMovieClip__FindInstance(this_01,*(int *)(self + 0x56c),0,(int *)0x0,0);
  *(uint64_t *)(self + 0x588) = uVar17;
  iVar12 = FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 0x4f8),"buttony");
  *(int *)(self + 0x570) = iVar12;
  uVar17 = FlashMovieClip__FindInstance(this_00,iVar12,0,(int *)0x0,0);
  *(uint64_t *)(self + 0x590) = uVar17;
  uVar17 = FlashMovieClip__FindInstance(this_01,*(int *)(self + 0x570),0,(int *)0x0,0);
  *(uint64_t *)(self + 0x598) = uVar17;
  uVar11 = FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 0x4f8),"flagx");
  *(uint32_t *)(self + 0x578) = uVar11;
  iVar12 = FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 0x4f8),"clockx");
  *(int *)(self + 0x574) = iVar12;
  uVar17 = FlashMovieClip__FindInstance(this_00,iVar12,0,(int *)0x0,0);
  *(uint64_t *)(self + 0x5a0) = uVar17;
  uVar17 = FlashMovieClip__FindInstance(this_01,*(int *)(self + 0x574),0,(int *)0x0,0);
  *(uint64_t *)(self + 0x5a8) = uVar17;
  uVar17 = FlashMovieClip__FindInstance(this_00,*(int *)(self + 0x578),0,(int *)0x0,0);
  *(uint64_t *)(self + 0x5b0) = uVar17;
  uVar17 = FlashMovieClip__FindInstance(this_01,*(int *)(self + 0x578),0,(int *)0x0,0);
  *(uint64_t *)(self + 0x5b8) = uVar17;
  iVar12 = FlashAnimationLibrary__GetClipIndex
                     (*(FlashAnimationLibrary **)(self + 0x4f8),"hudbandaid");
  uVar17 = FlashMovieClip__FindInstance(this_00,iVar12,0,(int *)0x0,0);
  *(uint64_t *)(self + 0x5e8) = uVar17;
  uVar17 = FlashMovieClip__FindInstance(this_01,iVar12,0,(int *)0x0,0);
  *(uint64_t *)(self + 0x5f0) = uVar17;
  local_b0 = 0;
  local_a8 = 0;
  iVar38 = 1;
  iVar12 = 1;
  while (lVar19 = SMBChapter__GetLevelInfo((SMBChapter *)(SuperMeatBoy + 0x90),iVar12 + -1,0),
        lVar19 != 0) {
    if (*(int *)(self + 0x41c) == 9) {
      lVar20 = 0;
      if (*(int *)(self + 0x418) == 8) goto LAB_004ca970;
LAB_004ca744:
      Sprint("%i-%i",local_78,*(uint32_t *)(self + 0x424));
    }
    else {
      lVar20 = SMBChapter__GetLevelInfo((SMBChapter *)(SuperMeatBoy + 0x90),iVar38 + -1,1);
      if (*(int *)(self + 0x418) != 8) goto LAB_004ca744;
LAB_004ca970:
      Sprint(&DAT_005c619f /* R:"1-%i" */,local_78,iVar12);
    }
    iVar13 = FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 0x4f8),local_78)
    ;
    lVar21 = FlashMovieClip__FindInstance(this_00,iVar13,0,(int *)0x0,0);
    iVar12 = iVar12 + 1;
    if (*(int *)(self + 0x418) == 8) {
      Sprint(&DAT_005c619f /* R:"1-%i" */,local_78,iVar38);
    }
    else {
      Sprint("%i-%i",local_78,*(uint32_t *)(self + 0x424));
    }
    if (lVar20 != 0) {
      iVar13 = FlashAnimationLibrary__GetClipIndex
                         (*(FlashAnimationLibrary **)(self + 0x4f8),local_78);
      local_b0 = FlashMovieClip__FindInstance(this_01,iVar13,0,(int *)0x0,0);
      iVar38 = iVar38 + 1;
    }
    if (lVar21 == 0) break;
    if ((local_b0 != 0) || (lVar20 == 0)) {
      if (*(int *)(self + 0xcd8) == -0x5eef3582) {
        uVar10 = *(ushort *)(self + 0xcb8);
        if (*(ushort *)(self + 0xcba) <= uVar10) {
          uVar10 = *(ushort *)(self + 0xcba) + *(short *)(self + 0xcc4);
          uVar29 = (ulong)(byte)self[0xcbc];
          pvVar22 = *(void **)(self + 0xcc8);
          *(ushort *)(self + 0xcba) = uVar10;
          uVar28 = (ulong)uVar10 * 0x58;
          pvVar26 = malloc(uVar29 + 0x10 + uVar28);
          pvVar36 = (void *)0x0;
          if (pvVar26 != (void *)0x0) {
            pvVar36 = (void *)((long)pvVar26 + 0x10U +
                              (uVar29 - ((long)pvVar26 + 0x10U) % uVar29) % uVar29);
            *(ulong *)((long)pvVar36 + -0x10) = uVar28;
            *(void **)((long)pvVar36 + -8) = pvVar26;
            if (pvVar22 != (void *)0x0) {
              uVar29 = *(ulong *)((long)pvVar22 + -0x10);
              if (uVar28 <= *(ulong *)((long)pvVar22 + -0x10)) {
                uVar29 = uVar28;
              }
              memcpy(pvVar36,pvVar22,uVar29);
              free(*(void **)((long)pvVar22 + -8));
            }
          }
          *(void **)(self + 0xcc8) = pvVar36;
          pvVar22 = *(void **)(self + 0xcd0);
          if (pvVar22 != (void *)0x0) {
            uVar37 = *(ushort *)(self + 0xcba);
            uVar28 = (ulong)(byte)self[0xcbc];
            uVar29 = (ulong)uVar37 * 2;
            pvVar36 = malloc(uVar28 + 0x10 + uVar29);
            pvVar26 = (void *)0x0;
            if (pvVar36 != (void *)0x0) {
              pvVar26 = (void *)((long)pvVar36 + 0x10U +
                                (uVar28 - ((long)pvVar36 + 0x10U) % uVar28) % uVar28);
              *(void **)((long)pvVar26 + -8) = pvVar36;
              *(ulong *)((long)pvVar26 + -0x10) = uVar29;
              uVar28 = *(ulong *)((long)pvVar22 + -0x10);
              if (uVar29 <= *(ulong *)((long)pvVar22 + -0x10)) {
                uVar28 = uVar29;
              }
              memcpy(pvVar26,pvVar22,uVar28);
              free(*(void **)((long)pvVar22 + -8));
              uVar37 = *(ushort *)(self + 0xcba);
            }
            uVar10 = *(ushort *)(self + 0xcb8);
            *(void **)(self + 0xcd0) = pvVar26;
            if (uVar37 <= uVar10) goto LAB_004ca8e8;
            while( true ) {
              uVar29 = (ulong)uVar10;
              uVar10 = uVar10 + 1;
              *(uint16_t *)((long)pvVar26 + uVar29 * 2) = 0xffff;
              if (uVar37 <= uVar10) break;
              pvVar26 = *(void **)(self + 0xcd0);
            }
          }
          uVar10 = *(ushort *)(self + 0xcb8);
        }
      }
      else {
        uVar29 = (ulong)(byte)self[0xcbc];
        *(uint32_t *)(self + 0xcc0) = 0;
        pvVar22 = malloc(uVar29 + 0x1c8);
        puVar33 = (uint64_t *)0x0;
        if (pvVar22 != (void *)0x0) {
          puVar33 = (uint64_t *)
                    ((long)pvVar22 + 0x10U + (uVar29 - ((long)pvVar22 + 0x10U) % uVar29) % uVar29);
          puVar33[-2] = 0x1b8;
          puVar33[-1] = pvVar22;
        }
        bVar39 = ((ulong)puVar33 & 1) != 0;
        *(uint64_t **)(self + 0xcc8) = puVar33;
        uVar29 = 0x1b8;
        if (bVar39) {
          *(uint8_t *)puVar33 = 0;
          puVar33 = (uint64_t *)((long)puVar33 + 1);
          uVar29 = 0x1b7;
        }
        if (((ulong)puVar33 & 2) != 0) {
          *(uint16_t *)puVar33 = 0;
          uVar29 = (ulong)((int)uVar29 - 2);
          puVar33 = (uint64_t *)((long)puVar33 + 2);
        }
        if (((ulong)puVar33 & 4) != 0) {
          *(uint32_t *)puVar33 = 0;
          uVar29 = (ulong)((int)uVar29 - 4);
          puVar33 = (uint64_t *)((long)puVar33 + 4);
        }
        for (uVar28 = uVar29 >> 3; uVar28 != 0; uVar28 = uVar28 - 1) {
          *puVar33 = 0;
          puVar33 = puVar33 + (ulong)bVar41 * -2 + 1;
        }
        if ((uVar29 & 4) != 0) {
          *(uint32_t *)puVar33 = 0;
          puVar33 = (uint64_t *)((long)puVar33 + 4);
        }
        if ((uVar29 & 2) != 0) {
          *(uint16_t *)puVar33 = 0;
          puVar33 = (uint64_t *)((long)puVar33 + 2);
        }
        if (bVar39) {
          *(uint8_t *)puVar33 = 0;
        }
        *(uint16_t *)(self + 0xcb8) = 0;
        *(uint16_t *)(self + 0xcba) = 5;
        uVar10 = 0;
        *(uint32_t *)(self + 0xcd8) = 0xa110ca7e;
        *(uint16_t *)(self + 0xcc4) = 5;
      }
LAB_004ca8e8:
      if ((*(int *)(self + 0xcc0) == 1) && (*(short *)(self + 0xcba) != 0)) {
        puVar23 = *(ushort **)(self + 0xcd0);
        sVar9 = 1;
        uVar37 = *puVar23;
        while (uVar37 != 0xffff) {
          puVar23 = puVar23 + 1;
          if (sVar9 == *(short *)(self + 0xcba)) goto LAB_004ca8f5;
          sVar9 = sVar9 + 1;
          uVar37 = *puVar23;
        }
        *puVar23 = uVar10;
        uVar10 = *(ushort *)(self + 0xcb8);
      }
LAB_004ca8f5:
      puVar2 = (uint16_t *)(*(long *)(self + 0xcc8) + (ulong)uVar10 * 0x58);
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) & 0xc0;
      *puVar2 = 0xffff;
      *(long *)(puVar2 + 4) = lVar21;
      *(long *)(puVar2 + 8) = local_b0;
      *(short *)(self + 0xcb8) = *(short *)(self + 0xcb8) + 1;
      local_a8 = local_a8 + (uint)(*(int *)(lVar19 + 0x44) != -1);
      if (lVar20 != 0) {
        local_a8 = local_a8 + (uint)(*(int *)(lVar20 + 0x44) != -1);
      }
    }
  }
  if (local_a8 != 0) {
    iVar12 = 0;
    do {
      if (*(int *)(self + 0xcd8) == -0x5eef3582) {
        uVar10 = *(ushort *)(self + 0xcb8);
        if (uVar10 < *(ushort *)(self + 0xcba)) goto LAB_004cabb2;
        uVar10 = *(ushort *)(self + 0xcba) + *(short *)(self + 0xcc4);
        uVar28 = (ulong)(byte)self[0xcbc];
        pvVar22 = (void *)0x0;
        pvVar26 = *(void **)(self + 0xcc8);
        *(ushort *)(self + 0xcba) = uVar10;
        uVar29 = (ulong)uVar10 * 0x58;
        pvVar36 = malloc(uVar28 + 0x10 + uVar29);
        if (pvVar36 != (void *)0x0) {
          pvVar22 = (void *)((long)pvVar36 + 0x10U +
                            (uVar28 - ((long)pvVar36 + 0x10U) % uVar28) % uVar28);
          *(ulong *)((long)pvVar22 + -0x10) = uVar29;
          *(void **)((long)pvVar22 + -8) = pvVar36;
          if (pvVar26 != (void *)0x0) {
            uVar28 = *(ulong *)((long)pvVar26 + -0x10);
            if (uVar29 <= *(ulong *)((long)pvVar26 + -0x10)) {
              uVar28 = uVar29;
            }
            memcpy(pvVar22,pvVar26,uVar28);
            free(*(void **)((long)pvVar26 + -8));
          }
        }
        pvVar26 = *(void **)(self + 0xcd0);
        *(void **)(self + 0xcc8) = pvVar22;
        if (pvVar26 != (void *)0x0) {
          uVar37 = *(ushort *)(self + 0xcba);
          uVar28 = (ulong)(byte)self[0xcbc];
          pvVar22 = (void *)0x0;
          uVar29 = (ulong)uVar37 * 2;
          pvVar36 = malloc(uVar28 + 0x10 + uVar29);
          if (pvVar36 != (void *)0x0) {
            pvVar22 = (void *)((long)pvVar36 + 0x10U +
                              (uVar28 - ((long)pvVar36 + 0x10U) % uVar28) % uVar28);
            *(ulong *)((long)pvVar22 + -0x10) = uVar29;
            *(void **)((long)pvVar22 + -8) = pvVar36;
            uVar28 = *(ulong *)((long)pvVar26 + -0x10);
            if (uVar29 <= *(ulong *)((long)pvVar26 + -0x10)) {
              uVar28 = uVar29;
            }
            memcpy(pvVar22,pvVar26,uVar28);
            free(*(void **)((long)pvVar26 + -8));
            uVar37 = *(ushort *)(self + 0xcba);
          }
          uVar10 = *(ushort *)(self + 0xcb8);
          *(void **)(self + 0xcd0) = pvVar22;
          if (uVar37 <= uVar10) goto LAB_004cabb2;
          while( true ) {
            uVar29 = (ulong)uVar10;
            uVar10 = uVar10 + 1;
            *(uint16_t *)((long)pvVar22 + uVar29 * 2) = 0xffff;
            if (uVar37 <= uVar10) break;
            pvVar22 = *(void **)(self + 0xcd0);
          }
        }
        iVar38 = *(int *)(self + 0xcc0);
        uVar10 = *(ushort *)(self + 0xcb8);
      }
      else {
        uVar29 = (ulong)(byte)self[0xcbc];
        *(uint32_t *)(self + 0xcc0) = 0;
        pvVar22 = malloc(uVar29 + 0x1c8);
        puVar33 = (uint64_t *)0x0;
        if (pvVar22 != (void *)0x0) {
          puVar33 = (uint64_t *)
                    ((uVar29 - ((long)pvVar22 + 0x10U) % uVar29) % uVar29 + (long)pvVar22 + 0x10U);
          puVar33[-2] = 0x1b8;
          puVar33[-1] = pvVar22;
        }
        bVar39 = ((ulong)puVar33 & 1) != 0;
        *(uint64_t **)(self + 0xcc8) = puVar33;
        uVar29 = 0x1b8;
        if (bVar39) {
          *(uint8_t *)puVar33 = 0;
          puVar33 = (uint64_t *)((long)puVar33 + 1);
          uVar29 = 0x1b7;
        }
        if (((ulong)puVar33 & 2) != 0) {
          *(uint16_t *)puVar33 = 0;
          uVar29 = (ulong)((int)uVar29 - 2);
          puVar33 = (uint64_t *)((long)puVar33 + 2);
        }
        if (((ulong)puVar33 & 4) != 0) {
          *(uint32_t *)puVar33 = 0;
          uVar29 = (ulong)((int)uVar29 - 4);
          puVar33 = (uint64_t *)((long)puVar33 + 4);
        }
        for (uVar28 = uVar29 >> 3; uVar28 != 0; uVar28 = uVar28 - 1) {
          *puVar33 = 0;
          puVar33 = puVar33 + (ulong)bVar41 * -2 + 1;
        }
        if ((uVar29 & 4) != 0) {
          *(uint32_t *)puVar33 = 0;
          puVar33 = (uint64_t *)((long)puVar33 + 4);
        }
        if ((uVar29 & 2) != 0) {
          *(uint16_t *)puVar33 = 0;
          puVar33 = (uint64_t *)((long)puVar33 + 2);
        }
        if (bVar39) {
          *(uint8_t *)puVar33 = 0;
        }
        *(uint16_t *)(self + 0xcb8) = 0;
        *(uint16_t *)(self + 0xcba) = 5;
        uVar10 = 0;
        *(uint32_t *)(self + 0xcd8) = 0xa110ca7e;
        *(uint16_t *)(self + 0xcc4) = 5;
LAB_004cabb2:
        iVar38 = *(int *)(self + 0xcc0);
      }
      if ((iVar38 == 1) && (*(short *)(self + 0xcba) != 0)) {
        puVar23 = *(ushort **)(self + 0xcd0);
        sVar9 = 0;
        uVar37 = *puVar23;
        while (uVar37 != 0xffff) {
          puVar23 = puVar23 + 1;
          sVar9 = sVar9 + 1;
          if (sVar9 == *(short *)(self + 0xcba)) goto LAB_004cabbf;
          uVar37 = *puVar23;
        }
        *puVar23 = uVar10;
        uVar10 = *(ushort *)(self + 0xcb8);
      }
LAB_004cabbf:
      puVar2 = (uint16_t *)(*(long *)(self + 0xcc8) + (ulong)uVar10 * 0x58);
      *puVar2 = 0xffff;
      *(uint64_t *)(puVar2 + 4) = 0;
      *(uint64_t *)(puVar2 + 8) = 0;
      *(uint64_t *)(puVar2 + 0xc) = 0;
      *(uint64_t *)(puVar2 + 0x10) = 0;
      *(uint64_t *)(puVar2 + 0x14) = 0;
      *(uint64_t *)(puVar2 + 0x18) = 0;
      *(uint64_t *)(puVar2 + 0x1c) = 0;
      *(uint64_t *)(puVar2 + 0x20) = 0;
      *(uint64_t *)(puVar2 + 0x24) = 0;
      *(uint64_t *)(puVar2 + 0x28) = 0;
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) & 0xc3 | 3;
      sVar9 = *(short *)(self + 0xcb8);
      *(ushort *)(self + 0xcb8) = sVar9 + 1U;
      if (*(int *)(self + 0xc58) == -0x5eef3582) {
        uVar32 = (uint)*(ushort *)(self + 0xc38);
        if (*(ushort *)(self + 0xc3a) <= *(ushort *)(self + 0xc38)) {
          uVar10 = *(ushort *)(self + 0xc3a) + *(short *)(self + 0xc44);
          uVar29 = (ulong)(byte)self[0xc3c];
          pvVar22 = (void *)0x0;
          pvVar26 = *(void **)(self + 0xc48);
          *(ushort *)(self + 0xc3a) = uVar10;
          uVar28 = (ulong)uVar10 * 0x18;
          pvVar36 = malloc(uVar29 + 0x10 + uVar28);
          if (pvVar36 != (void *)0x0) {
            pvVar22 = (void *)((long)pvVar36 + 0x10U +
                              (uVar29 - ((long)pvVar36 + 0x10U) % uVar29) % uVar29);
            *(ulong *)((long)pvVar22 + -0x10) = uVar28;
            *(void **)((long)pvVar22 + -8) = pvVar36;
            if (pvVar26 != (void *)0x0) {
              uVar29 = *(ulong *)((long)pvVar26 + -0x10);
              if (uVar28 <= *(ulong *)((long)pvVar26 + -0x10)) {
                uVar29 = uVar28;
              }
              memcpy(pvVar22,pvVar26,uVar29);
              free(*(void **)((long)pvVar26 + -8));
            }
          }
          pvVar26 = *(void **)(self + 0xc50);
          *(void **)(self + 0xc48) = pvVar22;
          if (pvVar26 != (void *)0x0) {
            uVar10 = *(ushort *)(self + 0xc3a);
            uVar28 = (ulong)(byte)self[0xc3c];
            pvVar22 = (void *)0x0;
            uVar29 = (ulong)uVar10 * 2;
            pvVar36 = malloc(uVar28 + 0x10 + uVar29);
            if (pvVar36 != (void *)0x0) {
              pvVar22 = (void *)((long)pvVar36 + 0x10U +
                                (uVar28 - ((long)pvVar36 + 0x10U) % uVar28) % uVar28);
              *(ulong *)((long)pvVar22 + -0x10) = uVar29;
              *(void **)((long)pvVar22 + -8) = pvVar36;
              uVar28 = *(ulong *)((long)pvVar26 + -0x10);
              if (uVar29 <= *(ulong *)((long)pvVar26 + -0x10)) {
                uVar28 = uVar29;
              }
              memcpy(pvVar22,pvVar26,uVar28);
              free(*(void **)((long)pvVar26 + -8));
              uVar10 = *(ushort *)(self + 0xc3a);
            }
            uVar32 = (uint)*(ushort *)(self + 0xc38);
            *(void **)(self + 0xc50) = pvVar22;
            if (uVar10 <= *(ushort *)(self + 0xc38)) goto LAB_004cad31;
            while( true ) {
              uVar14 = uVar32 & 0xffff;
              uVar32 = uVar32 + 1;
              *(uint16_t *)((long)pvVar22 + (ulong)uVar14 * 2) = 0xffff;
              if (uVar10 <= (ushort)uVar32) break;
              pvVar22 = *(void **)(self + 0xc50);
            }
          }
          uVar32 = (uint)*(ushort *)(self + 0xc38);
        }
      }
      else {
        uVar29 = (ulong)(byte)self[0xc3c];
        *(uint32_t *)(self + 0xc40) = 0;
        pvVar22 = malloc(uVar29 + 0x88);
        puVar33 = (uint64_t *)0x0;
        if (pvVar22 != (void *)0x0) {
          puVar33 = (uint64_t *)
                    ((uVar29 - ((long)pvVar22 + 0x10U) % uVar29) % uVar29 + (long)pvVar22 + 0x10U);
          puVar33[-2] = 0x78;
          puVar33[-1] = pvVar22;
        }
        *(uint64_t **)(self + 0xc48) = puVar33;
        uVar29 = 0x78;
        bVar40 = false;
        iVar38 = 0x78;
        bVar39 = false;
        if (((ulong)puVar33 & 1) == 0) {
          puVar34 = puVar33;
          if (((ulong)puVar33 & 2) == 0) goto LAB_004caccf;
LAB_004cbb70:
          *(uint16_t *)puVar34 = 0;
          puVar34 = (uint64_t *)((long)puVar34 + 2);
          uVar32 = iVar38 - 2;
          uVar29 = (ulong)uVar32;
          bVar40 = bVar39;
        }
        else {
          puVar34 = (uint64_t *)((long)puVar33 + 1);
          *(uint8_t *)puVar33 = 0;
          uVar29 = 0x77;
          bVar40 = true;
          iVar38 = 0x77;
          bVar39 = true;
          if (((ulong)puVar34 & 2) != 0) goto LAB_004cbb70;
LAB_004caccf:
          uVar32 = (uint)uVar29;
        }
        if (((ulong)puVar34 & 4) != 0) {
          *(uint32_t *)puVar34 = 0;
          uVar29 = (ulong)(uVar32 - 4);
          puVar34 = (uint64_t *)((long)puVar34 + 4);
        }
        for (uVar28 = uVar29 >> 3; uVar28 != 0; uVar28 = uVar28 - 1) {
          *puVar34 = 0;
          puVar34 = puVar34 + (ulong)bVar41 * -2 + 1;
        }
        if ((uVar29 & 4) != 0) {
          *(uint32_t *)puVar34 = 0;
          puVar34 = (uint64_t *)((long)puVar34 + 4);
        }
        if ((uVar29 & 2) != 0) {
          *(uint16_t *)puVar34 = 0;
          puVar34 = (uint64_t *)((long)puVar34 + 2);
        }
        if (bVar40) {
          *(uint8_t *)puVar34 = 0;
        }
        *(uint16_t *)(self + 0xc38) = 0;
        *(uint16_t *)(self + 0xc3a) = 5;
        uVar32 = 0;
        *(uint32_t *)(self + 0xc58) = 0xa110ca7e;
        *(uint16_t *)(self + 0xc44) = 5;
      }
LAB_004cad31:
      if ((*(int *)(self + 0xc40) == 1) && (*(short *)(self + 0xc3a) != 0)) {
        psVar30 = *(short **)(self + 0xc50);
        sVar8 = 1;
        sVar7 = *psVar30;
        while (sVar7 != -1) {
          psVar30 = psVar30 + 1;
          if (sVar8 == *(short *)(self + 0xc3a)) goto LAB_004cad3e;
          sVar8 = sVar8 + 1;
          sVar7 = *psVar30;
        }
        *psVar30 = (short)uVar32;
        uVar32 = (uint)*(ushort *)(self + 0xc38);
      }
LAB_004cad3e:
      iVar12 = iVar12 + 1;
      puVar33 = (uint64_t *)(*(long *)(self + 0xc48) + (ulong)uVar32 * 0x18);
      *puVar33 = 0;
      puVar33[1] = 0;
      *(uint *)(puVar33 + 2) = (uint)(ushort)(sVar9 + 1U);
      *(short *)(self + 0xc38) = *(short *)(self + 0xc38) + 1;
    } while (iVar12 != local_a8);
  }
  lVar19 = SuperMeatBoy;
                    /* try { // try from 004cb16b to 004cc058 has its CatchHandler @ 004cc934 */
  iVar12 = FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 0x4f8),"bosspad");
  iVar38 = FlashAnimationLibrary__GetClipIndex
                     (*(FlashAnimationLibrary **)(self + 0x4f8),"glitchpad");
  iVar13 = FlashAnimationLibrary__GetClipIndex
                     (*(FlashAnimationLibrary **)(self + 0x4f8),"glitchline");
  uVar17 = FlashMovieClip__FindInstance(this_00,iVar12,0,(int *)0x0,0);
  *(uint64_t *)(self + 0x770) = uVar17;
  uVar17 = FlashMovieClip__FindInstance(this_01,iVar12,0,(int *)0x0,0);
  *(uint64_t *)(self + 0x788) = uVar17;
  uVar17 = FlashAnimationLibrary__GetMovieClip__005731d0
                     (*(FlashAnimationLibrary **)(self + 0x4f8),"bossbreak");
  *(uint64_t *)(self + 0x778) = uVar17;
  uVar17 = FlashAnimationLibrary__GetMovieClip__005731d0(*(FlashAnimationLibrary **)(self + 0x4f8),"bossbeat")
  ;
  *(uint64_t *)(self + 0x780) = uVar17;
  if (*(FlashLibraryInstance **)(self + 0x770) != (FlashLibraryInstance *)0x0) {
    FlashLibraryInstance__GotoAndStop(*(FlashLibraryInstance **)(self + 0x770),1);
  }
  if (*(FlashLibraryInstance **)(self + 0x788) != (FlashLibraryInstance *)0x0) {
    FlashLibraryInstance__GotoAndStop(*(FlashLibraryInstance **)(self + 0x788),1);
  }
  uVar17 = FlashMovieClip__FindInstance(this_00,iVar38,0,(int *)0x0,0);
  *(uint64_t *)(self + 0x790) = uVar17;
  lVar20 = FlashMovieClip__FindInstance(this_00,iVar13,0,(int *)0x0,0);
  *(long *)(self + 0x798) = lVar20;
  if (*(long *)(self + 0x790) != 0) {
    *(uint32_t *)(*(long *)(self + 0x790) + 0x24) = 0;
    FlashLibraryInstance__GotoAndStop(*(FlashLibraryInstance **)(self + 0x790),1);
    lVar20 = *(long *)(self + 0x798);
  }
  if (lVar20 == 0) {
    *(uint64_t *)(self + 0xce8) = 0;
    *(uint64_t *)(self + 0xcf8) = 0;
    local_84 = 0;
  }
  else {
    *(uint32_t *)(lVar20 + 0x24) = 0;
    *(uint64_t *)(self + 0xce8) = 0;
    *(uint64_t *)(self + 0xcf8) = 0;
    local_84 = 0;
    if ((*(long *)(self + 0x798) != 0) && (*(long *)(self + 0x790) != 0)) {
      if (*(int *)(self + 0xcd8) == -0x5eef3582) {
        uVar10 = *(ushort *)(self + 0xcb8);
        if (*(ushort *)(self + 0xcba) <= uVar10) {
          uVar10 = *(ushort *)(self + 0xcba) + *(short *)(self + 0xcc4);
          uVar28 = (ulong)(byte)self[0xcbc];
          pvVar22 = (void *)0x0;
          pvVar26 = *(void **)(self + 0xcc8);
          *(ushort *)(self + 0xcba) = uVar10;
          uVar29 = (ulong)uVar10 * 0x58;
          pvVar36 = malloc(uVar28 + 0x10 + uVar29);
          if (pvVar36 != (void *)0x0) {
            pvVar22 = (void *)((long)pvVar36 + 0x10U +
                              (uVar28 - ((long)pvVar36 + 0x10U) % uVar28) % uVar28);
            *(ulong *)((long)pvVar22 + -0x10) = uVar29;
            *(void **)((long)pvVar22 + -8) = pvVar36;
            if (pvVar26 != (void *)0x0) {
              uVar28 = *(ulong *)((long)pvVar26 + -0x10);
              if (uVar29 <= *(ulong *)((long)pvVar26 + -0x10)) {
                uVar28 = uVar29;
              }
              memcpy(pvVar22,pvVar26,uVar28);
              free(*(void **)((long)pvVar26 + -8));
            }
          }
          pvVar26 = *(void **)(self + 0xcd0);
          *(void **)(self + 0xcc8) = pvVar22;
          if (pvVar26 != (void *)0x0) {
            uVar37 = *(ushort *)(self + 0xcba);
            uVar28 = (ulong)(byte)self[0xcbc];
            uVar29 = (ulong)uVar37 * 2;
            pvVar36 = malloc(uVar28 + 0x10 + uVar29);
            pvVar22 = (void *)0x0;
            if (pvVar36 != (void *)0x0) {
              pvVar22 = (void *)((long)pvVar36 + 0x10U +
                                (uVar28 - ((long)pvVar36 + 0x10U) % uVar28) % uVar28);
              *(void **)((long)pvVar22 + -8) = pvVar36;
              *(ulong *)((long)pvVar22 + -0x10) = uVar29;
              uVar28 = *(ulong *)((long)pvVar26 + -0x10);
              if (uVar29 <= *(ulong *)((long)pvVar26 + -0x10)) {
                uVar28 = uVar29;
              }
              memcpy(pvVar22,pvVar26,uVar28);
              free(*(void **)((long)pvVar26 + -8));
              uVar37 = *(ushort *)(self + 0xcba);
            }
            uVar10 = *(ushort *)(self + 0xcb8);
            *(void **)(self + 0xcd0) = pvVar22;
            if (uVar37 <= uVar10) goto LAB_004cb3d6;
            while( true ) {
              uVar29 = (ulong)uVar10;
              uVar10 = uVar10 + 1;
              *(uint16_t *)((long)pvVar22 + uVar29 * 2) = 0xffff;
              if (uVar37 <= uVar10) break;
              pvVar22 = *(void **)(self + 0xcd0);
            }
          }
          uVar10 = *(ushort *)(self + 0xcb8);
        }
      }
      else {
        uVar29 = (ulong)(byte)self[0xcbc];
        *(uint32_t *)(self + 0xcc0) = 0;
        pvVar22 = malloc(uVar29 + 0x1c8);
        puVar33 = (uint64_t *)0x0;
        if (pvVar22 != (void *)0x0) {
          puVar33 = (uint64_t *)
                    ((uVar29 - ((long)pvVar22 + 0x10U) % uVar29) % uVar29 + (long)pvVar22 + 0x10U);
          puVar33[-2] = 0x1b8;
          puVar33[-1] = pvVar22;
        }
        *(uint64_t **)(self + 0xcc8) = puVar33;
        uVar29 = 0x1b8;
        bVar39 = ((ulong)puVar33 & 1) != 0;
        if (bVar39) {
          *(uint8_t *)puVar33 = 0;
          uVar29 = 0x1b7;
          puVar33 = (uint64_t *)((long)puVar33 + 1);
        }
        if (((ulong)puVar33 & 2) != 0) {
          *(uint16_t *)puVar33 = 0;
          uVar29 = (ulong)((int)uVar29 - 2);
          puVar33 = (uint64_t *)((long)puVar33 + 2);
        }
        if (((ulong)puVar33 & 4) != 0) {
          *(uint32_t *)puVar33 = 0;
          uVar29 = (ulong)((int)uVar29 - 4);
          puVar33 = (uint64_t *)((long)puVar33 + 4);
        }
        for (uVar28 = uVar29 >> 3; uVar28 != 0; uVar28 = uVar28 - 1) {
          *puVar33 = 0;
          puVar33 = puVar33 + (ulong)bVar41 * -2 + 1;
        }
        if ((uVar29 & 4) != 0) {
          *(uint32_t *)puVar33 = 0;
          puVar33 = (uint64_t *)((long)puVar33 + 4);
        }
        if ((uVar29 & 2) != 0) {
          *(uint16_t *)puVar33 = 0;
          puVar33 = (uint64_t *)((long)puVar33 + 2);
        }
        if (bVar39) {
          *(uint8_t *)puVar33 = 0;
        }
        *(uint16_t *)(self + 0xcb8) = 0;
        *(uint16_t *)(self + 0xcba) = 5;
        uVar10 = 0;
        *(uint32_t *)(self + 0xcd8) = 0xa110ca7e;
        *(uint16_t *)(self + 0xcc4) = 5;
      }
LAB_004cb3d6:
      if ((*(int *)(self + 0xcc0) == 1) && (*(short *)(self + 0xcba) != 0)) {
        puVar23 = *(ushort **)(self + 0xcd0);
        sVar9 = 1;
        uVar37 = *puVar23;
        while (uVar37 != 0xffff) {
          puVar23 = puVar23 + 1;
          if (sVar9 == *(short *)(self + 0xcba)) goto LAB_004cb3e3;
          sVar9 = sVar9 + 1;
          uVar37 = *puVar23;
        }
        *puVar23 = uVar10;
        uVar10 = *(ushort *)(self + 0xcb8);
      }
LAB_004cb3e3:
      puVar2 = (uint16_t *)(*(long *)(self + 0xcc8) + (ulong)uVar10 * 0x58);
      *puVar2 = 0xffff;
      *(uint64_t *)(puVar2 + 4) = 0;
      *(uint64_t *)(puVar2 + 8) = 0;
      *(uint64_t *)(puVar2 + 0xc) = 0;
      *(uint64_t *)(puVar2 + 0x10) = 0;
      *(uint64_t *)(puVar2 + 0x14) = 0;
      *(uint64_t *)(puVar2 + 0x18) = 0;
      *(uint64_t *)(puVar2 + 0x1c) = 0;
      *(uint64_t *)(puVar2 + 0x20) = 0;
      *(uint64_t *)(puVar2 + 0x24) = 0;
      *(uint64_t *)(puVar2 + 0x28) = 0;
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) & 0xc0 | 0x10;
      *(short *)(self + 0xcb8) = *(short *)(self + 0xcb8) + 1;
      local_84 = 1;
    }
  }
  bVar39 = iVar12 != -1;
  if ((bVar39) && (*(int *)(lVar19 + 0x2fc) == 1)) {
    if (*(int *)(self + 0xcd8) == -0x5eef3582) {
      uVar10 = *(ushort *)(self + 0xcb8);
      if (*(ushort *)(self + 0xcba) <= uVar10) {
        uVar10 = *(ushort *)(self + 0xcba) + *(short *)(self + 0xcc4);
        uVar28 = (ulong)(byte)self[0xcbc];
        pvVar36 = (void *)0x0;
        pvVar22 = *(void **)(self + 0xcc8);
        *(ushort *)(self + 0xcba) = uVar10;
        uVar29 = (ulong)uVar10 * 0x58;
        pvVar26 = malloc(uVar28 + 0x10 + uVar29);
        if (pvVar26 != (void *)0x0) {
          pvVar36 = (void *)((long)pvVar26 + 0x10U +
                            (uVar28 - ((long)pvVar26 + 0x10U) % uVar28) % uVar28);
          *(ulong *)((long)pvVar36 + -0x10) = uVar29;
          *(void **)((long)pvVar36 + -8) = pvVar26;
          if (pvVar22 != (void *)0x0) {
            uVar28 = *(ulong *)((long)pvVar22 + -0x10);
            if (uVar29 <= *(ulong *)((long)pvVar22 + -0x10)) {
              uVar28 = uVar29;
            }
            memcpy(pvVar36,pvVar22,uVar28);
            free(*(void **)((long)pvVar22 + -8));
          }
        }
        pvVar22 = *(void **)(self + 0xcd0);
        *(void **)(self + 0xcc8) = pvVar36;
        if (pvVar22 != (void *)0x0) {
          uVar37 = *(ushort *)(self + 0xcba);
          uVar28 = (ulong)(byte)self[0xcbc];
          uVar29 = (ulong)uVar37 * 2;
          pvVar36 = malloc(uVar28 + 0x10 + uVar29);
          pvVar26 = (void *)0x0;
          if (pvVar36 != (void *)0x0) {
            pvVar26 = (void *)((long)pvVar36 + 0x10U +
                              (uVar28 - ((long)pvVar36 + 0x10U) % uVar28) % uVar28);
            *(void **)((long)pvVar26 + -8) = pvVar36;
            *(ulong *)((long)pvVar26 + -0x10) = uVar29;
            uVar28 = *(ulong *)((long)pvVar22 + -0x10);
            if (uVar29 <= *(ulong *)((long)pvVar22 + -0x10)) {
              uVar28 = uVar29;
            }
            memcpy(pvVar26,pvVar22,uVar28);
            free(*(void **)((long)pvVar22 + -8));
            uVar37 = *(ushort *)(self + 0xcba);
          }
          uVar10 = *(ushort *)(self + 0xcb8);
          *(void **)(self + 0xcd0) = pvVar26;
          if (uVar37 <= uVar10) goto LAB_004cbf30;
          while( true ) {
            uVar29 = (ulong)uVar10;
            uVar10 = uVar10 + 1;
            *(uint16_t *)((long)pvVar26 + uVar29 * 2) = 0xffff;
            if (uVar37 <= uVar10) break;
            pvVar26 = *(void **)(self + 0xcd0);
          }
        }
        uVar10 = *(ushort *)(self + 0xcb8);
      }
    }
    else {
      uVar29 = (ulong)(byte)self[0xcbc];
      *(uint32_t *)(self + 0xcc0) = 0;
      pvVar22 = malloc(uVar29 + 0x1c8);
      puVar33 = (uint64_t *)0x0;
      if (pvVar22 != (void *)0x0) {
        puVar33 = (uint64_t *)
                  ((uVar29 - ((long)pvVar22 + 0x10U) % uVar29) % uVar29 + (long)pvVar22 + 0x10U);
        puVar33[-2] = 0x1b8;
        puVar33[-1] = pvVar22;
      }
      *(uint64_t **)(self + 0xcc8) = puVar33;
      uVar29 = 0x1b8;
      bVar40 = ((ulong)puVar33 & 1) != 0;
      if (bVar40) {
        *(uint8_t *)puVar33 = 0;
        uVar29 = 0x1b7;
        puVar33 = (uint64_t *)((long)puVar33 + 1);
      }
      if (((ulong)puVar33 & 2) != 0) {
        *(uint16_t *)puVar33 = 0;
        uVar29 = (ulong)((int)uVar29 - 2);
        puVar33 = (uint64_t *)((long)puVar33 + 2);
      }
      if (((ulong)puVar33 & 4) != 0) {
        *(uint32_t *)puVar33 = 0;
        uVar29 = (ulong)((int)uVar29 - 4);
        puVar33 = (uint64_t *)((long)puVar33 + 4);
      }
      for (uVar28 = uVar29 >> 3; uVar28 != 0; uVar28 = uVar28 - 1) {
        *puVar33 = 0;
        puVar33 = puVar33 + (ulong)bVar41 * -2 + 1;
      }
      if ((uVar29 & 4) != 0) {
        *(uint32_t *)puVar33 = 0;
        puVar33 = (uint64_t *)((long)puVar33 + 4);
      }
      if ((uVar29 & 2) != 0) {
        *(uint16_t *)puVar33 = 0;
        puVar33 = (uint64_t *)((long)puVar33 + 2);
      }
      if (bVar40) {
        *(uint8_t *)puVar33 = 0;
      }
      *(uint16_t *)(self + 0xcb8) = 0;
      *(uint16_t *)(self + 0xcba) = 5;
      uVar10 = 0;
      *(uint32_t *)(self + 0xcd8) = 0xa110ca7e;
      *(uint16_t *)(self + 0xcc4) = 5;
    }
LAB_004cbf30:
    if ((*(int *)(self + 0xcc0) == 1) && (*(short *)(self + 0xcba) != 0)) {
      puVar23 = *(ushort **)(self + 0xcd0);
      sVar9 = 0;
      uVar37 = *puVar23;
      while (uVar37 != 0xffff) {
        puVar23 = puVar23 + 1;
        sVar9 = sVar9 + 1;
        if (sVar9 == *(short *)(self + 0xcba)) goto LAB_004cbf3d;
        uVar37 = *puVar23;
      }
      *puVar23 = uVar10;
      uVar10 = *(ushort *)(self + 0xcb8);
    }
LAB_004cbf3d:
    puVar2 = (uint16_t *)(*(long *)(self + 0xcc8) + (ulong)uVar10 * 0x58);
    *puVar2 = 0xffff;
    *(uint64_t *)(puVar2 + 4) = 0;
    *(uint64_t *)(puVar2 + 8) = 0;
    *(uint64_t *)(puVar2 + 0xc) = 0;
    *(uint64_t *)(puVar2 + 0x10) = 0;
    *(uint64_t *)(puVar2 + 0x14) = 0;
    *(uint64_t *)(puVar2 + 0x18) = 0;
    *(uint64_t *)(puVar2 + 0x1c) = 0;
    *(uint64_t *)(puVar2 + 0x20) = 0;
    *(uint64_t *)(puVar2 + 0x24) = 0;
    *(uint64_t *)(puVar2 + 0x28) = 0;
    *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) & 0xc0 | 0xc;
    lVar20 = *(long *)(self + 0xcc8);
    uVar10 = *(short *)(self + 0xcb8) + 1;
    *(ushort *)(self + 0xcb8) = uVar10;
    *(ulong *)(self + 0xce8) = lVar20 + ((ulong)uVar10 - 1) * 0x58;
  }
  else {
    uVar10 = *(ushort *)(self + 0xcb8);
    lVar20 = *(long *)(self + 0xcc8);
  }
  if (local_84 == 1) {
    *(ulong *)(self + 0xcf8) = lVar20 + (ulong)(ushort)(uVar10 - 2) * 0x58;
  }
  *(long *)(self + 0xce0) = lVar20;
  local_a8 = (uint)uVar10 - local_a8;
  if (bVar39) {
    local_a8 = local_a8 + -1 + (uint)(*(int *)(lVar19 + 0x2fc) != 1);
  }
  uVar32 = local_a8 - local_84;
  if (0 < (int)uVar32) {
    uVar29 = 0;
    do {
      while( true ) {
        iVar13 = (int)uVar29;
        lVar19 = SMBChapter__GetLevelInfo((SMBChapter *)(SuperMeatBoy + 0x90),uVar29,0,1);
        if (*(int *)(self + 0x41c) == 9) {
          lVar20 = 0;
        }
        else {
          lVar20 = SMBChapter__GetLevelInfo((SMBChapter *)(SuperMeatBoy + 0x90),uVar29,1,0);
        }
        lVar21 = (uVar29 & 0xffff) * 0x58;
        *(short *)(*(long *)(self + 0xcc8) + (uVar29 & 0xffff) * 0x58) = (short)uVar29;
        *(uint64_t *)(*(long *)(self + 0xcc8) + 0x18 + lVar21) = 0;
        *(uint64_t *)(*(long *)(self + 0xcc8) + 0x20 + lVar21) = 0;
        *(uint64_t *)(*(long *)(self + 0xcc8) + 0x28 + lVar21) = 0;
        *(uint64_t *)(*(long *)(self + 0xcc8) + 0x30 + lVar21) = 0;
        *(uint64_t *)(*(long *)(self + 0xcc8) + 0x38 + lVar21) = 0;
        *(uint64_t *)(*(long *)(self + 0xcc8) + 0x40 + lVar21) = 0;
        *(uint64_t *)(*(long *)(self + 0xcc8) + 0x48 + lVar21) = 0;
        *(uint64_t *)(*(long *)(self + 0xcc8) + 0x50 + lVar21) = 0;
        if (iVar13 != 0) {
          lVar35 = (ulong)(iVar13 - 1U & 0xffff) * 0x58;
          lVar24 = *(long *)(self + 0xcc8) + lVar35;
          lVar31 = *(long *)(self + 0xcc8) + lVar21;
          fVar3 = *(float *)(*(long *)(lVar31 + 8) + 0x30);
          fVar4 = *(float *)(*(long *)(lVar31 + 8) + 0x34);
          fVar5 = *(float *)(*(long *)(lVar24 + 8) + 0x30);
          fVar6 = *(float *)(*(long *)(lVar24 + 8) + 0x34);
          if ((float)((uint)(fVar3 - fVar5) & DAT_005be880 /* R:u32=2147483647 */) <=
              (float)((uint)(fVar4 - fVar6) & DAT_005be880 /* R:u32=2147483647 */)) {
            if (fVar6 < fVar4) {
              *(long *)(lVar31 + 0x20) = lVar24;
              *(long *)(lVar24 + 0x18) = lVar31;
            }
            else {
              *(long *)(lVar31 + 0x18) = lVar24;
              *(long *)(lVar24 + 0x20) = lVar31;
            }
          }
          else if (fVar3 <= fVar5) {
            *(long *)(lVar31 + 0x30) = lVar24;
            *(long *)(lVar24 + 0x28) = lVar31;
          }
          else {
            *(long *)(lVar31 + 0x28) = lVar24;
            *(long *)(lVar24 + 0x30) = lVar31;
          }
          if (lVar20 != 0) {
            lVar35 = lVar35 + *(long *)(self + 0xcc8);
            lVar24 = *(long *)(self + 0xcc8) + lVar21;
            fVar3 = *(float *)(*(long *)(lVar24 + 0x10) + 0x30);
            fVar4 = *(float *)(*(long *)(lVar24 + 0x10) + 0x34);
            fVar5 = *(float *)(*(long *)(lVar35 + 0x10) + 0x30);
            fVar6 = *(float *)(*(long *)(lVar35 + 0x10) + 0x34);
            if ((float)((uint)(fVar3 - fVar5) & DAT_005be880 /* R:u32=2147483647 */) <=
                (float)((uint)(fVar4 - fVar6) & DAT_005be880 /* R:u32=2147483647 */)) {
              if (fVar6 < fVar4) {
                *(long *)(lVar24 + 0x40) = lVar35;
                *(long *)(lVar35 + 0x38) = lVar24;
              }
              else {
                *(long *)(lVar24 + 0x38) = lVar35;
                *(long *)(lVar35 + 0x40) = lVar24;
              }
            }
            else if (fVar3 <= fVar5) {
              *(long *)(lVar24 + 0x50) = lVar35;
              *(long *)(lVar35 + 0x48) = lVar24;
            }
            else {
              *(long *)(lVar24 + 0x48) = lVar35;
              *(long *)(lVar35 + 0x50) = lVar24;
            }
          }
        }
        if (*(int *)(lVar19 + 0x44) != -1) {
          iVar15 = *(int *)(lVar19 + 0x44) + -1;
          puVar2 = (uint16_t *)
                   (*(long *)(self + 0xcc8) + (ulong)((uVar32 & 0xffff) + iVar15 & 0xffff) * 0x58);
          *puVar2 = (short)iVar15;
          Sprint("warp%i",local_78,*(uint32_t *)(lVar19 + 0x44));
          iVar15 = FlashAnimationLibrary__GetClipIndex
                             (*(FlashAnimationLibrary **)(self + 0x4f8),local_78);
          Sprint("warp%iline",local_78,*(uint32_t *)(lVar19 + 0x44));
          iVar16 = FlashAnimationLibrary__GetClipIndex
                             (*(FlashAnimationLibrary **)(self + 0x4f8),local_78);
          uVar17 = FlashMovieClip__FindInstance(this_00,iVar15,0,(int *)0x0,0);
          *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 3;
          *(uint64_t *)(puVar2 + 4) = uVar17;
          *(uint64_t *)(puVar2 + 8) = 0;
          uVar14 = *(uint *)(lVar19 + 0x44);
          lVar19 = *(long *)(self + 0xc48);
          uVar17 = FlashMovieClip__FindInstance(this_00,iVar16,0,(int *)0x0,0);
          puVar33 = (uint64_t *)(lVar19 + (ulong)((uVar14 & 0xffff) - 1 & 0xffff) * 0x18);
          puVar33[1] = uVar17;
          *puVar33 = *(uint64_t *)(puVar2 + 4);
          lVar19 = *(long *)(self + 0xcc8) + lVar21;
          fVar3 = *(float *)(*(long *)(puVar2 + 4) + 0x30);
          fVar4 = *(float *)(*(long *)(puVar2 + 4) + 0x34);
          fVar5 = *(float *)(*(long *)(lVar19 + 8) + 0x30);
          fVar6 = *(float *)(*(long *)(lVar19 + 8) + 0x34);
          if ((float)((uint)(fVar3 - fVar5) & DAT_005be880 /* R:u32=2147483647 */) <=
              (float)((uint)(fVar4 - fVar6) & DAT_005be880 /* R:u32=2147483647 */)) {
            if (fVar6 < fVar4) {
              *(long *)(puVar2 + 0x10) = lVar19;
              *(uint16_t **)(lVar19 + 0x18) = puVar2;
            }
            else {
              *(long *)(puVar2 + 0xc) = lVar19;
              *(uint16_t **)(lVar19 + 0x20) = puVar2;
            }
          }
          else if (fVar3 <= fVar5) {
            *(long *)(puVar2 + 0x18) = lVar19;
            *(uint16_t **)(lVar19 + 0x28) = puVar2;
          }
          else {
            *(long *)(puVar2 + 0x14) = lVar19;
            *(uint16_t **)(lVar19 + 0x30) = puVar2;
          }
        }
        if ((lVar20 != 0) && (*(int *)(lVar20 + 0x44) != -1)) break;
LAB_004cb920:
        uVar29 = (ulong)(iVar13 + 1U);
        if (iVar13 + 1U == uVar32) goto LAB_004cb9c8;
      }
      iVar15 = *(int *)(lVar20 + 0x44) + -1;
      puVar2 = (uint16_t *)
               (*(long *)(self + 0xcc8) + (ulong)((uVar32 & 0xffff) + iVar15 & 0xffff) * 0x58);
      *puVar2 = (short)iVar15;
      Sprint("warp%i",local_78,*(uint32_t *)(lVar20 + 0x44));
      iVar15 = FlashAnimationLibrary__GetClipIndex
                         (*(FlashAnimationLibrary **)(self + 0x4f8),local_78);
      Sprint("warp%iline",local_78,*(uint32_t *)(lVar20 + 0x44));
      iVar16 = FlashAnimationLibrary__GetClipIndex
                         (*(FlashAnimationLibrary **)(self + 0x4f8),local_78);
      uVar17 = FlashMovieClip__FindInstance(this_01,iVar15,0,(int *)0x0,0);
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 3;
      *(uint64_t *)(puVar2 + 8) = uVar17;
      *(uint64_t *)(puVar2 + 4) = 0;
      iVar15 = *(int *)(lVar20 + 0x44);
      lVar19 = *(long *)(self + 0xc48);
      uVar17 = FlashMovieClip__FindInstance(this_01,iVar16,0,(int *)0x0,0);
      puVar33 = (uint64_t *)(lVar19 + (ulong)(iVar15 - 1U & 0xffff) * 0x18);
      puVar33[1] = uVar17;
      *puVar33 = *(uint64_t *)(puVar2 + 8);
      lVar21 = lVar21 + *(long *)(self + 0xcc8);
      fVar3 = *(float *)(*(long *)(puVar2 + 8) + 0x30);
      fVar4 = *(float *)(*(long *)(puVar2 + 8) + 0x34);
      fVar5 = *(float *)(*(long *)(lVar21 + 0x10) + 0x30);
      fVar6 = *(float *)(*(long *)(lVar21 + 0x10) + 0x34);
      if ((float)((uint)(fVar4 - fVar6) & DAT_005be880 /* R:u32=2147483647 */) <
          (float)((uint)(fVar3 - fVar5) & DAT_005be880 /* R:u32=2147483647 */)) {
        if (fVar3 <= fVar5) {
          *(long *)(puVar2 + 0x28) = lVar21;
          *(uint16_t **)(lVar21 + 0x48) = puVar2;
        }
        else {
          *(long *)(puVar2 + 0x24) = lVar21;
          *(uint16_t **)(lVar21 + 0x50) = puVar2;
        }
        goto LAB_004cb920;
      }
      if (fVar6 < fVar4) {
        *(long *)(puVar2 + 0x20) = lVar21;
        *(uint16_t **)(lVar21 + 0x38) = puVar2;
        goto LAB_004cb920;
      }
      uVar29 = (ulong)(iVar13 + 1U);
      *(long *)(puVar2 + 0x1c) = lVar21;
      *(uint16_t **)(lVar21 + 0x40) = puVar2;
    } while (iVar13 + 1U != uVar32);
LAB_004cb9c8:
    uVar10 = *(ushort *)(self + 0xcb8);
  }
  if ((bVar39) && (2 < *(int *)(self + 0x418) - 7U)) {
    lVar19 = *(long *)(self + 0xcc8);
    lVar20 = FlashMovieClip__FindInstance(this_00,iVar12,0,(int *)0x0,0);
    puVar2 = (uint16_t *)(lVar19 + (ulong)(ushort)(uVar10 - 1) * 0x58);
    *(long *)(puVar2 + 4) = lVar20;
    *puVar2 = 99;
    lVar21 = (ulong)((uVar32 & 0xffff) - 1 & 0xffff) * 0x58;
    lVar19 = *(long *)(self + 0xcc8) + lVar21;
    fVar3 = *(float *)(*(long *)(lVar19 + 8) + 0x30);
    fVar4 = *(float *)(*(long *)(lVar19 + 8) + 0x34);
    if ((float)((uint)(*(float *)(lVar20 + 0x30) - fVar3) & DAT_005be880 /* R:u32=2147483647 */) <=
        (float)((uint)(*(float *)(lVar20 + 0x34) - fVar4) & DAT_005be880 /* R:u32=2147483647 */)) {
      if (fVar4 < *(float *)(lVar20 + 0x34)) {
        *(long *)(puVar2 + 0x10) = lVar19;
        *(uint16_t **)(lVar19 + 0x18) = puVar2;
      }
      else {
        *(long *)(puVar2 + 0xc) = lVar19;
        *(uint16_t **)(lVar19 + 0x20) = puVar2;
      }
    }
    else if (*(float *)(lVar20 + 0x30) <= fVar3) {
      *(long *)(puVar2 + 0x18) = lVar19;
      *(uint16_t **)(lVar19 + 0x28) = puVar2;
    }
    else {
      *(long *)(puVar2 + 0x14) = lVar19;
      *(uint16_t **)(lVar19 + 0x30) = puVar2;
    }
    if (*(int *)(self + 0x418) == 6) {
      lVar19 = FlashMovieClip__FindInstance(this_01,iVar12,0,(int *)0x0,0);
      *(long *)(puVar2 + 8) = lVar19;
      *puVar2 = 99;
      lVar21 = lVar21 + *(long *)(self + 0xcc8);
      fVar3 = *(float *)(*(long *)(lVar21 + 0x10) + 0x30);
      fVar4 = *(float *)(*(long *)(lVar21 + 0x10) + 0x34);
      if ((float)((uint)(*(float *)(lVar19 + 0x30) - fVar3) & DAT_005be880 /* R:u32=2147483647 */) <=
          (float)((uint)(*(float *)(lVar19 + 0x34) - fVar4) & DAT_005be880 /* R:u32=2147483647 */)) {
        if (fVar4 < *(float *)(lVar19 + 0x34)) {
          *(long *)(puVar2 + 0x20) = lVar21;
          *(uint16_t **)(lVar21 + 0x38) = puVar2;
        }
        else {
          *(long *)(puVar2 + 0x1c) = lVar21;
          *(uint16_t **)(lVar21 + 0x40) = puVar2;
        }
      }
      else if (*(float *)(lVar19 + 0x30) <= fVar3) {
        *(long *)(puVar2 + 0x28) = lVar21;
        *(uint16_t **)(lVar21 + 0x48) = puVar2;
      }
      else {
        *(long *)(puVar2 + 0x24) = lVar21;
        *(uint16_t **)(lVar21 + 0x50) = puVar2;
      }
    }
  }
  if (local_84 == 1) {
    lVar19 = *(long *)(self + 0xcc8);
                    /* try { // try from 004cc0b4 to 004cc2ed has its CatchHandler @ 004cc934 */
    lVar20 = FlashMovieClip__FindInstance(this_00,iVar38,0,(int *)0x0,0);
    uVar32 = DAT_005be880 /* R:u32=2147483647 */;
    puVar2 = (uint16_t *)(lVar19 + (ulong)(ushort)(uVar10 - 2) * 0x58);
    *(long *)(puVar2 + 4) = lVar20;
    *puVar2 = 0x62;
    lVar19 = *(long *)(self + 0xcc8);
    fVar3 = *(float *)(*(long *)(lVar19 + 8) + 0x30);
    fVar4 = *(float *)(*(long *)(lVar19 + 8) + 0x34);
    if ((float)((uint)(*(float *)(lVar20 + 0x30) - fVar3) & uVar32) <=
        (float)((uint)(*(float *)(lVar20 + 0x34) - fVar4) & uVar32)) {
      if (fVar4 < *(float *)(lVar20 + 0x34)) {
        *(long *)(puVar2 + 0x10) = lVar19;
        *(uint16_t **)(lVar19 + 0x18) = puVar2;
      }
      else {
        *(long *)(puVar2 + 0xc) = lVar19;
        *(uint16_t **)(lVar19 + 0x20) = puVar2;
      }
    }
    else if (*(float *)(lVar20 + 0x30) <= fVar3) {
      *(long *)(puVar2 + 0x18) = lVar19;
      *(uint16_t **)(lVar19 + 0x28) = puVar2;
    }
    else {
      *(long *)(puVar2 + 0x14) = lVar19;
      *(uint16_t **)(lVar19 + 0x30) = puVar2;
    }
  }
  LoadCharacterMenu(self);
  if ((allocator *)(local_48[0] + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage) {
    LOCK();
    piVar1 = (int *)(local_48[0] + -8);
    iVar12 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar12 < 1) {
      std__string_Rep_M_destroy((allocator *)(local_48[0] + -0x18));
    }
  }
LAB_004caa98:
                    /* try { // try from 004caaa6 to 004caaaa has its CatchHandler @ 004cc939 */
  SMBChapter__LoadWarpLibrary((SMBChapter *)(SuperMeatBoy + 0x90));
  AutoLockSection__AutoLockSection__005b59d0(local_58);
  return;
}

/* ======================================================================
 * GSMBMenu__TransitionInChapter  (Ghidra `TransitionInChapter` @ 004cc970)
 * Signature: uint8_t __thiscall TransitionInChapter(GSMBMenu * self)
 * Class: GSMBMenu
 * Calls: `DisableLoadingRenderThread`, `Joystick__AddButtonCallback`, `Joystick__AddPOVCallback`, `Loader__WaitAll`, `SMBChapter__PlayChapterIntro`, `SMBMenuChapterIntroFinished`, `TAudioInstance__Stop`, `TKeyboard__AddKeyCallback`, `TPlayer__GetJoystick`
 * Called by: `SMBMenuInChapterTrans`
 */
/* GSMBMenu__TransitionInChapter() */

void __thiscall GSMBMenu__TransitionInChapter(GSMBMenu *self)

{
  Joystick *pJVar1;
  
  SMBChapter__PlayChapterIntro((SMBChapter *)(SuperMeatBoy + 0x90),SMBMenuChapterIntroFinished);
  TAudioInstance__Stop((TAudioInstance *)(self + 0xc68));
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddButtonCallback(pJVar1,0,0,0);
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddPOVCallback(pJVar1,3,0,0);
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddPOVCallback(pJVar1,1,0,0);
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddPOVCallback(pJVar1,0,0,0);
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddPOVCallback(pJVar1,2,0,0);
  if (Keyboard != (TKeyboard *)0x0) {
    TKeyboard__AddKeyCallback(Keyboard,0x76,0,0);
    TKeyboard__AddKeyCallback(Keyboard,0x6c,0,0);
    TKeyboard__AddKeyCallback(Keyboard,0x71,0,0);
    TKeyboard__AddKeyCallback(Keyboard,0x41,0,0);
    TKeyboard__AddKeyCallback(Keyboard,0x6d,0,0);
    TKeyboard__AddKeyCallback(Keyboard,0x7f,0,0);
    TKeyboard__AddKeyCallback(Keyboard,0x1f,0,0);
  }
  LoadChapterMenu(self,*(uint32_t *)(SuperMeatBoy + 0x290));
  Loader__WaitAll();
  DisableLoadingRenderThread();
  *(uint32_t *)(self + 0xd04) = 6;
  return;
}

/* ======================================================================
 * GSMBMenu__SetWorldMenuStats  (Ghidra `SetWorldMenuStats` @ 004ccaf0)
 * Signature: uint8_t __thiscall SetWorldMenuStats(GSMBMenu * self)
 * Class: GSMBMenu
 * Calls: `FlashAnimationLibrary__GetTextField`, `GSMBChapterData__GetChapterStats`, `GSMBChapterData__GetLevelPercentage`, `GetLocalizedText`, `TPlayer__GetProfile`
 * Called by: (none)
 */
/* GSMBMenu__SetWorldMenuStats() */

void __thiscall GSMBMenu__SetWorldMenuStats(GSMBMenu *self)

{
  long lVar1;
  wchar_t *pwVar2;
  uint64_t uVar3;
  ulong uVar4;
  float fVar5;
  uint32_t local_58 [2];
  uint32_t *local_50;
  uint32_t local_48;
  uint64_t local_40;
  uint32_t local_38 [2];
  uint64_t local_30;
  
  uAdjustedWorldMenuChapter = *(int *)(self + 0x41c);
  if (uAdjustedWorldMenuChapter == 8) {
    uAdjustedWorldMenuChapter = 1;
  }
  else if (uAdjustedWorldMenuChapter == 9) {
    uAdjustedWorldMenuChapter = 8;
  }
  local_58[0] = 2;
  local_48 = 4;
  local_50 = &uAdjustedWorldMenuChapter;
  local_40 = TPlayer__GetProfile((TPlayer *)Players__Player);
  BroadcastString__SetBroadcastStringParam((BroadcastStringParam *)local_58);
  local_38[0] = 3;
  local_30 = TPlayer__GetProfile((TPlayer *)Players__Player);
  BroadcastString__SetBroadcastString((BroadcastStringCreate *)local_38);
  lVar1 = GSMBChapterData__GetChapterStats(SMBChapterData,*(uint32_t *)(self + 0x41c));
  fVar5 = (float)GSMBChapterData__GetLevelPercentage(SMBChapterData,*(uint32_t *)(self + 0x41c));
  uVar4 = (ulong)fVar5;
  if ((float)(long)uVar4 < fVar5) {
    uVar4 = uVar4 + 1;
  }
  pwVar2 = (wchar_t *)
           FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 0x428),"percent");
  if (pwVar2 != (wchar_t *)0x0) {
    uVar3 = GetLocalizedText(0x18);
    FlashTextField__SetText(pwVar2,L"%s: %i%s",uVar3,uVar4 & 0xffffffff,&DAT_005c6630 /* R:5.184804318001823e-44f */);
  }
  pwVar2 = (wchar_t *)
           FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 0x428),"bandaids")
  ;
  if (pwVar2 != (wchar_t *)0x0) {
    FlashTextField__SetText(pwVar2,&DAT_005c6660 /* R:5.184804318001823e-44f */,(ulong)*(byte *)(lVar1 + 2));
  }
  return;
}

/* ======================================================================
 * GSMBMenu__UnloadWorldMenu__004cd4a0  (Ghidra `UnloadWorldMenu` @ 004cd4a0)
 * Signature: uint8_t __thiscall UnloadWorldMenu(GSMBMenu * self)
 * Class: GSMBMenu
 * Calls: (none)
 * Called by: `GSMBMenu__UnloadWorldMenu`
 */
/* GSMBMenu__UnloadWorldMenu__004cd4a0() */

void __thiscall GSMBMenu__UnloadWorldMenu__004cd4a0(GSMBMenu *self)

{
  if (hChapterLoadThreadHandle != 0) {
    return;
  }
  UnloadWorldMenu(self);
  return;
}

/* ======================================================================
 * GSMBMenu__AddChapterMessage  (Ghidra `AddChapterMessage` @ 004cd4c0)
 * Signature: uint8_t __thiscall AddChapterMessage(GSMBMenu * self, wchar_t * arg1)
 * Class: GSMBMenu
 * Calls: `free`, `malloc`, `memcpy`
 * Called by: `GSMBChapterData__SaveLevelData`
 */
/* GSMBMenu__AddChapterMessage(wchar_t const*) */

void __thiscall GSMBMenu__AddChapterMessage(GSMBMenu *self,wchar_t *arg1)

{
  void *pvVar1;
  void *pvVar2;
  wchar_t *pwVar3;
  ushort *puVar4;
  void *pvVar5;
  ulong uVar6;
  short sVar7;
  ushort uVar8;
  uint uVar9;
  ulong uVar10;
  uint64_t *puVar11;
  ushort uVar12;
  bool bVar13;
  byte bVar14;
  
  bVar14 = 0;
  if (*(int *)(self + 0x1838) == -0x5eef3582) {
    uVar12 = *(ushort *)(self + 0x1818);
    if (*(ushort *)(self + 0x181a) <= uVar12) {
      uVar12 = *(ushort *)(self + 0x181a) + *(short *)(self + 0x1824);
      uVar6 = (ulong)(byte)self[0x181c];
      pvVar2 = (void *)0x0;
      pvVar1 = *(void **)(self + 0x1828);
      *(ushort *)(self + 0x181a) = uVar12;
      uVar10 = (ulong)uVar12 * 0x80;
      pvVar5 = malloc(uVar6 + 0x10 + uVar10);
      if (pvVar5 != (void *)0x0) {
        pvVar2 = (void *)((long)pvVar5 + 0x10U + (uVar6 - ((long)pvVar5 + 0x10U) % uVar6) % uVar6);
        *(ulong *)((long)pvVar2 + -0x10) = uVar10;
        *(void **)((long)pvVar2 + -8) = pvVar5;
        if (pvVar1 != (void *)0x0) {
          uVar6 = *(ulong *)((long)pvVar1 + -0x10);
          if (uVar10 <= *(ulong *)((long)pvVar1 + -0x10)) {
            uVar6 = uVar10;
          }
          memcpy(pvVar2,pvVar1,uVar6);
          free(*(void **)((long)pvVar1 + -8));
        }
      }
      pvVar1 = *(void **)(self + 0x1830);
      *(void **)(self + 0x1828) = pvVar2;
      if (pvVar1 != (void *)0x0) {
        uVar8 = *(ushort *)(self + 0x181a);
        uVar6 = (ulong)(byte)self[0x181c];
        pvVar2 = (void *)0x0;
        uVar10 = (ulong)uVar8 * 2;
        pvVar5 = malloc(uVar6 + 0x10 + uVar10);
        if (pvVar5 != (void *)0x0) {
          pvVar2 = (void *)((long)pvVar5 + 0x10U + (uVar6 - ((long)pvVar5 + 0x10U) % uVar6) % uVar6)
          ;
          *(void **)((long)pvVar2 + -8) = pvVar5;
          *(ulong *)((long)pvVar2 + -0x10) = uVar10;
          uVar6 = *(ulong *)((long)pvVar1 + -0x10);
          if (uVar10 <= *(ulong *)((long)pvVar1 + -0x10)) {
            uVar6 = uVar10;
          }
          memcpy(pvVar2,pvVar1,uVar6);
          free(*(void **)((long)pvVar1 + -8));
          uVar8 = *(ushort *)(self + 0x181a);
        }
        uVar12 = *(ushort *)(self + 0x1818);
        *(void **)(self + 0x1830) = pvVar2;
        if (uVar8 <= uVar12) goto LAB_004cd5ac;
        while( true ) {
          uVar10 = (ulong)uVar12;
          uVar12 = uVar12 + 1;
          *(uint16_t *)((long)pvVar2 + uVar10 * 2) = 0xffff;
          if (uVar8 <= uVar12) break;
          pvVar2 = *(void **)(self + 0x1830);
        }
      }
      uVar12 = *(ushort *)(self + 0x1818);
    }
  }
  else {
    uVar10 = (ulong)(byte)self[0x181c];
    *(uint32_t *)(self + 0x1820) = 0;
    pvVar2 = malloc(uVar10 + 0x290);
    puVar11 = (uint64_t *)0x0;
    if (pvVar2 != (void *)0x0) {
      puVar11 = (uint64_t *)
                ((long)pvVar2 + 0x10U + (uVar10 - ((long)pvVar2 + 0x10U) % uVar10) % uVar10);
      puVar11[-2] = 0x280;
      puVar11[-1] = pvVar2;
    }
    bVar13 = ((ulong)puVar11 & 1) != 0;
    *(uint64_t **)(self + 0x1828) = puVar11;
    uVar10 = 0x280;
    if (bVar13) {
      *(uint8_t *)puVar11 = 0;
      uVar10 = 0x27f;
      puVar11 = (uint64_t *)((long)puVar11 + 1);
    }
    if (((ulong)puVar11 & 2) != 0) {
      *(uint16_t *)puVar11 = 0;
      uVar10 = (ulong)((int)uVar10 - 2);
      puVar11 = (uint64_t *)((long)puVar11 + 2);
    }
    if (((ulong)puVar11 & 4) != 0) {
      *(uint32_t *)puVar11 = 0;
      uVar10 = (ulong)((int)uVar10 - 4);
      puVar11 = (uint64_t *)((long)puVar11 + 4);
    }
    for (uVar6 = uVar10 >> 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar11 = 0;
      puVar11 = puVar11 + (ulong)bVar14 * -2 + 1;
    }
    if ((uVar10 & 4) != 0) {
      *(uint32_t *)puVar11 = 0;
      puVar11 = (uint64_t *)((long)puVar11 + 4);
    }
    if ((uVar10 & 2) != 0) {
      *(uint16_t *)puVar11 = 0;
      puVar11 = (uint64_t *)((long)puVar11 + 2);
    }
    if (bVar13) {
      *(uint8_t *)puVar11 = 0;
    }
    *(uint16_t *)(self + 0x1818) = 0;
    *(uint16_t *)(self + 0x181a) = 5;
    uVar12 = 0;
    *(uint32_t *)(self + 0x1838) = 0xa110ca7e;
    *(uint16_t *)(self + 0x1824) = 5;
  }
LAB_004cd5ac:
  if ((*(int *)(self + 0x1820) == 1) && (*(short *)(self + 0x181a) != 0)) {
    puVar4 = *(ushort **)(self + 0x1830);
    sVar7 = 0;
    uVar8 = *puVar4;
    while (uVar8 != 0xffff) {
      puVar4 = puVar4 + 1;
      sVar7 = sVar7 + 1;
      if (sVar7 == *(short *)(self + 0x181a)) goto LAB_004cd5b9;
      uVar8 = *puVar4;
    }
    *puVar4 = uVar12;
    uVar12 = *(ushort *)(self + 0x1818);
  }
LAB_004cd5b9:
  uVar10 = 0x80;
  *(ushort *)(self + 0x1818) = uVar12 + 1;
  puVar11 = (uint64_t *)(((ulong)(ushort)(uVar12 + 1) - 1) * 0x80 + *(long *)(self + 0x1828));
  bVar13 = ((ulong)puVar11 & 1) != 0;
  if (bVar13) {
    *(uint8_t *)puVar11 = 0;
    uVar10 = 0x7f;
    puVar11 = (uint64_t *)((long)puVar11 + 1);
  }
  uVar9 = (uint)uVar10;
  if (((ulong)puVar11 & 2) != 0) {
    *(uint16_t *)puVar11 = 0;
    puVar11 = (uint64_t *)((long)puVar11 + 2);
    uVar9 = uVar9 - 2;
    uVar10 = (ulong)uVar9;
  }
  if (((ulong)puVar11 & 4) != 0) {
    *(uint32_t *)puVar11 = 0;
    uVar10 = (ulong)(uVar9 - 4);
    puVar11 = (uint64_t *)((long)puVar11 + 4);
  }
  for (uVar6 = uVar10 >> 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *puVar11 = 0;
    puVar11 = puVar11 + (ulong)bVar14 * -2 + 1;
  }
  if ((uVar10 & 4) != 0) {
    *(uint32_t *)puVar11 = 0;
    puVar11 = (uint64_t *)((long)puVar11 + 4);
  }
  if ((uVar10 & 2) != 0) {
    *(uint16_t *)puVar11 = 0;
    puVar11 = (uint64_t *)((long)puVar11 + 2);
  }
  if (bVar13) {
    *(uint8_t *)puVar11 = 0;
  }
  pwVar3 = (wchar_t *)(((ulong)*(ushort *)(self + 0x1818) - 1) * 0x80 + *(long *)(self + 0x1828));
  if (pwVar3 != arg1) {
    *(uint64_t *)pwVar3 = *(uint64_t *)arg1;
    *(uint64_t *)(pwVar3 + 2) = *(uint64_t *)(arg1 + 2);
    *(uint64_t *)(pwVar3 + 4) = *(uint64_t *)(arg1 + 4);
    *(uint64_t *)(pwVar3 + 6) = *(uint64_t *)(arg1 + 6);
    *(uint64_t *)(pwVar3 + 8) = *(uint64_t *)(arg1 + 8);
    *(uint64_t *)(pwVar3 + 10) = *(uint64_t *)(arg1 + 10);
    *(uint64_t *)(pwVar3 + 0xc) = *(uint64_t *)(arg1 + 0xc);
    *(uint64_t *)(pwVar3 + 0xe) = *(uint64_t *)(arg1 + 0xe);
    *(uint64_t *)(pwVar3 + 0x10) = *(uint64_t *)(arg1 + 0x10);
    *(uint64_t *)(pwVar3 + 0x12) = *(uint64_t *)(arg1 + 0x12);
    *(uint64_t *)(pwVar3 + 0x14) = *(uint64_t *)(arg1 + 0x14);
    *(uint64_t *)(pwVar3 + 0x16) = *(uint64_t *)(arg1 + 0x16);
    *(uint64_t *)(pwVar3 + 0x18) = *(uint64_t *)(arg1 + 0x18);
    *(uint64_t *)(pwVar3 + 0x1a) = *(uint64_t *)(arg1 + 0x1a);
    *(uint64_t *)(pwVar3 + 0x1c) = *(uint64_t *)(arg1 + 0x1c);
    *(uint64_t *)(pwVar3 + 0x1e) = *(uint64_t *)(arg1 + 0x1e);
  }
  pwVar3[0x1f] = L'\0';
  return;
}

/* ======================================================================
 * GSMBMenu__ShowStartMenu  (Ghidra `ShowStartMenu` @ 004cd990)
 * Signature: uint8_t __thiscall ShowStartMenu(GSMBMenu * self, int arg1)
 * Class: GSMBMenu
 * Calls: `CreateMessage`, `FlashLibraryInstance__Reset`, `GSuperMeatBoy__MarkAllLevelsVisible`, `GetLocalizedText`, `Joystick__AddButtonCallback`, `SMBMenu_StartMenuStart`, `SprintW`, `System_CheckTrialMask`, `System_LastUserSignedIn`, `TAudioCue__Play` (+4 more)
 * Called by: `GSuperMeatBoy__ShowStartMenu`, `GSuperMeatBoy__SwitchGameMode`
 */
/* GSMBMenu__ShowStartMenu(int) */

void __thiscall GSMBMenu__ShowStartMenu(GSMBMenu *self,int arg1)

{
  uint64_t uVar1;
  int iVar2;
  Joystick *pJVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint32_t local_98 [2];
  uint64_t local_90;
  uint64_t local_88;
  uint64_t local_80;
  uint64_t local_78;
  code *local_70;
  uint64_t local_68;
  uint64_t local_60;
  uint64_t local_58;
  uint64_t local_50;
  uint64_t local_48;
  uint64_t local_40;
  uint64_t local_38;
  uint64_t local_30;
  
  System_CheckTrialMask();
  if (arg1 == 0) {
    *(uint32_t *)(self + 0xd04) = 0xb;
    RenderLayers__AddLayer((RenderLayer *)self);
    GSuperMeatBoy__MarkAllLevelsVisible(SuperMeatBoy);
  }
  if (Keyboard != (TKeyboard *)0x0) {
    TKeyboard__AddKeyCallback(Keyboard,0x76,SMBMenu_StartMenuStart,0);
    TKeyboard__AddKeyCallback(Keyboard,0x6c,SMBMenu_StartMenuStart,0);
  }
  Players__Game_ReinitializePlayers();
  pJVar3 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddButtonCallback(pJVar3,0,SMBMenu_StartMenuStart,0);
  pJVar3 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddButtonCallback(pJVar3,7,SMBMenu_StartMenuStart,0);
  pJVar3 = (Joystick *)TPlayer__GetJoystick((TPlayer *)(Players__Player + 0x18));
  Joystick__AddButtonCallback(pJVar3,0,SMBMenu_StartMenuStart,0);
  pJVar3 = (Joystick *)TPlayer__GetJoystick((TPlayer *)(Players__Player + 0x18));
  Joystick__AddButtonCallback(pJVar3,7,SMBMenu_StartMenuStart,0);
  pJVar3 = (Joystick *)TPlayer__GetJoystick((TPlayer *)(Players__Player + 0x30));
  Joystick__AddButtonCallback(pJVar3,0,SMBMenu_StartMenuStart,0);
  pJVar3 = (Joystick *)TPlayer__GetJoystick((TPlayer *)(Players__Player + 0x30));
  Joystick__AddButtonCallback(pJVar3,7,SMBMenu_StartMenuStart,0);
  pJVar3 = (Joystick *)TPlayer__GetJoystick((TPlayer *)(Players__Player + 0x48));
  Joystick__AddButtonCallback(pJVar3,0,SMBMenu_StartMenuStart,0);
  pJVar3 = (Joystick *)TPlayer__GetJoystick((TPlayer *)(Players__Player + 0x48));
  Joystick__AddButtonCallback(pJVar3,7,SMBMenu_StartMenuStart,0);
  if (Keyboard != (TKeyboard *)0x0) {
    TKeyboard__AddKeyCallback(Keyboard,0x76,SMBMenu_StartMenuStart,0);
    TKeyboard__AddKeyCallback(Keyboard,0x6c,SMBMenu_StartMenuStart,0);
  }
  if (*(long *)(self + 0x838) != 0) {
    *(uint32_t *)(*(long *)(self + 0x838) + 0x20) = *(uint32_t *)(self + 0x828);
  }
  if (*(long *)(self + 0x858) != 0) {
    *(uint32_t *)(*(long *)(self + 0x858) + 0x20) = *(uint32_t *)(self + 0x848);
  }
  if (*(long *)(self + 0x878) != 0) {
    *(uint32_t *)(*(long *)(self + 0x878) + 0x20) = *(uint32_t *)(self + 0x868);
  }
  if (*(long *)(self + 0x898) != 0) {
    *(uint32_t *)(*(long *)(self + 0x898) + 0x20) = *(uint32_t *)(self + 0x888);
  }
  if (*(long *)(self + 0x8b8) != 0) {
    *(uint32_t *)(*(long *)(self + 0x8b8) + 0x20) = *(uint32_t *)(self + 0x8a8);
  }
  if (*(long *)(self + 0x8d8) != 0) {
    *(uint32_t *)(*(long *)(self + 0x8d8) + 0x20) = *(uint32_t *)(self + 0x8c8);
  }
  if (*(long *)(self + 0x8f8) != 0) {
    *(uint32_t *)(*(long *)(self + 0x8f8) + 0x20) = *(uint32_t *)(self + 0x8e8);
  }
  if (*(long *)(self + 0x918) != 0) {
    *(uint32_t *)(*(long *)(self + 0x918) + 0x20) = *(uint32_t *)(self + 0x908);
  }
  if (*(long *)(self + 0x938) != 0) {
    *(uint32_t *)(*(long *)(self + 0x938) + 0x20) = *(uint32_t *)(self + 0x928);
  }
  if (*(long *)(self + 0x958) != 0) {
    *(uint32_t *)(*(long *)(self + 0x958) + 0x20) = *(uint32_t *)(self + 0x948);
  }
  if (*(long *)(self + 0x978) != 0) {
    *(uint32_t *)(*(long *)(self + 0x978) + 0x20) = *(uint32_t *)(self + 0x968);
  }
  if (*(long *)(self + 0x998) != 0) {
    *(uint32_t *)(*(long *)(self + 0x998) + 0x20) = *(uint32_t *)(self + 0x988);
  }
  if (*(long *)(self + 0x9b8) != 0) {
    *(uint32_t *)(*(long *)(self + 0x9b8) + 0x20) = *(uint32_t *)(self + 0x9a8);
  }
  if (*(long *)(self + 0x9d8) != 0) {
    *(uint32_t *)(*(long *)(self + 0x9d8) + 0x20) = *(uint32_t *)(self + 0x9c8);
  }
  if (*(long *)(self + 0x9f8) != 0) {
    *(uint32_t *)(*(long *)(self + 0x9f8) + 0x20) = *(uint32_t *)(self + 0x9e8);
  }
  if (*(long *)(self + 0xa18) != 0) {
    *(uint32_t *)(*(long *)(self + 0xa18) + 0x20) = *(uint32_t *)(self + 0xa08);
  }
  if (*(long *)(self + 0xa38) != 0) {
    *(uint32_t *)(*(long *)(self + 0xa38) + 0x20) = *(uint32_t *)(self + 0xa28);
  }
  if (*(long *)(self + 0xa58) != 0) {
    *(uint32_t *)(*(long *)(self + 0xa58) + 0x20) = *(uint32_t *)(self + 0xa48);
  }
  if (*(long *)(self + 0xa78) != 0) {
    *(uint32_t *)(*(long *)(self + 0xa78) + 0x20) = *(uint32_t *)(self + 0xa68);
  }
  if (*(long *)(self + 0xa98) != 0) {
    *(uint32_t *)(*(long *)(self + 0xa98) + 0x20) = *(uint32_t *)(self + 0xa88);
  }
  if (*(long *)(self + 0xab8) != 0) {
    *(uint32_t *)(*(long *)(self + 0xab8) + 0x20) = *(uint32_t *)(self + 0xaa8);
  }
  if (*(long *)(self + 0xad8) != 0) {
    *(uint32_t *)(*(long *)(self + 0xad8) + 0x20) = *(uint32_t *)(self + 0xac8);
  }
  if (*(long *)(self + 0xaf8) != 0) {
    *(uint32_t *)(*(long *)(self + 0xaf8) + 0x20) = *(uint32_t *)(self + 0xae8);
  }
  if (*(long *)(self + 0xb18) != 0) {
    *(uint32_t *)(*(long *)(self + 0xb18) + 0x20) = *(uint32_t *)(self + 0xb08);
  }
  if (*(long *)(self + 0xb38) != 0) {
    *(uint32_t *)(*(long *)(self + 0xb38) + 0x20) = *(uint32_t *)(self + 0xb28);
  }
  if (*(long *)(self + 0xb58) != 0) {
    *(uint32_t *)(*(long *)(self + 0xb58) + 0x20) = *(uint32_t *)(self + 0xb48);
  }
  if (*(long *)(self + 0xb78) != 0) {
    *(uint32_t *)(*(long *)(self + 0xb78) + 0x20) = *(uint32_t *)(self + 0xb68);
  }
  if (*(long *)(self + 0xb98) != 0) {
    *(uint32_t *)(*(long *)(self + 0xb98) + 0x20) = *(uint32_t *)(self + 0xb88);
  }
  *(uint32_t *)(self + 0x820) = 0;
  *(uint32_t *)(self + 0x81c) = 0;
  *(uint32_t *)(self + 0x818) = 0;
  if (((byte)self[0x1843] & 0x3f) == 1) {
    local_90 = 0;
    local_88 = 0;
    local_80 = 0;
    local_78 = 0;
    local_70 = (code *)0x0;
    local_68 = 0;
    local_60 = 0;
    local_58 = 0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_98[0] = 0xe;
    uVar4 = System_LastUserSignedIn();
    uVar1 = strLargeStringW;
    uVar5 = GetLocalizedText(0xb3);
    SprintW(uVar5,uVar1,uVar4);
    local_88 = strLargeStringW;
    local_90 = GetLocalizedText(0xc9);
    local_80 = GetLocalizedText(4);
    local_70 = UserAlertCloseCurrent;
    CreateMessage(local_98);
    self[0x1843] = (GSMBMenu)((byte)self[0x1843] & 0xc0);
  }
  *(uint32_t *)(*(long *)(self + 0x838) + 0x20) = *(uint32_t *)(self + 0x82c);
  if (arg1 == 0) {
    FlashLibraryInstance__Reset(*(FlashLibraryInstance **)(self + 0x7e8));
    FlashLibraryInstance__Reset(*(FlashLibraryInstance **)(self + 0x7f0));
    FlashLibraryInstance__Reset(*(FlashLibraryInstance **)(self + 0x808));
    FlashLibraryInstance__Reset(*(FlashLibraryInstance **)(self + 0x7f8));
    iVar2 = TAudioInstance__IsPlaying((TAudioInstance *)titleMusicInstance);
    if (iVar2 == 0) {
      TAudioCue__Play(pTitleMenuMusic,GLOBALMUSICVOLUME,0,(TAudioInstance *)titleMusicInstance);
      return;
    }
  }
  return;
}

/* ======================================================================
 * GSMBMenu__HideStartMenu  (Ghidra `HideStartMenu` @ 004cdf20)
 * Signature: uint8_t __thiscall HideStartMenu(GSMBMenu * self)
 * Class: GSMBMenu
 * Calls: `Joystick__AddButtonCallback`, `TKeyboard__AddKeyCallback`, `TPlayer__GetJoystick`
 * Called by: `GSuperMeatBoy__HideStartMenu`
 */
/* GSMBMenu__HideStartMenu() */

void __thiscall GSMBMenu__HideStartMenu(GSMBMenu *self)

{
  Joystick *pJVar1;
  
  *(uint32_t *)(self + 0xd04) = 0xc;
  if (Keyboard != (TKeyboard *)0x0) {
    TKeyboard__AddKeyCallback(Keyboard,0x76,0,0);
    TKeyboard__AddKeyCallback(Keyboard,0x6c,0,0);
  }
  RenderLayers__RemoveLayer((RenderLayer *)self);
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddButtonCallback(pJVar1,0,0,0);
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddButtonCallback(pJVar1,7,0,0);
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)(Players__Player + 0x18));
  Joystick__AddButtonCallback(pJVar1,0,0,0);
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)(Players__Player + 0x18));
  Joystick__AddButtonCallback(pJVar1,7,0,0);
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)(Players__Player + 0x30));
  Joystick__AddButtonCallback(pJVar1,0,0,0);
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)(Players__Player + 0x30));
  Joystick__AddButtonCallback(pJVar1,7,0,0);
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)(Players__Player + 0x48));
  Joystick__AddButtonCallback(pJVar1,0,0,0);
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)(Players__Player + 0x48));
  Joystick__AddButtonCallback(pJVar1,7,0,0);
  return;
}

/* ======================================================================
 * GSMBMenu__SetTitleMenuText  (Ghidra `SetTitleMenuText` @ 004ce040)
 * Signature: uint8_t __thiscall SetTitleMenuText(GSMBMenu * self)
 * Class: GSMBMenu
 * Calls: `FlashAnimationLibrary__GetTextField`, `GetLocalizedText`, `System_IsTrialMode`
 * Called by: `SMBMenu_ClickBackFromHelpOption`
 */
/* GSMBMenu__SetTitleMenuText() */

void __thiscall GSMBMenu__SetTitleMenuText(GSMBMenu *self)

{
  int iVar1;
  uint64_t uVar2;
  wchar_t *pwVar3;
  
  uVar2 = GetLocalizedText(0x47);
  if (*(wchar_t **)(self + 0x840) != (wchar_t *)0x0) {
    FlashTextField__SetText(*(wchar_t **)(self + 0x840),uVar2);
  }
  uVar2 = GetLocalizedText(0x1d);
  if (*(wchar_t **)(self + 0x860) != (wchar_t *)0x0) {
    FlashTextField__SetText(*(wchar_t **)(self + 0x860),uVar2);
  }
  uVar2 = GetLocalizedText(0x1e);
  if (*(wchar_t **)(self + 0x8a0) != (wchar_t *)0x0) {
    FlashTextField__SetText(*(wchar_t **)(self + 0x8a0),uVar2);
  }
  uVar2 = GetLocalizedText(0x1f);
  if (*(wchar_t **)(self + 0x880) != (wchar_t *)0x0) {
    FlashTextField__SetText(*(wchar_t **)(self + 0x880),uVar2);
  }
  uVar2 = GetLocalizedText(0x21);
  if (*(wchar_t **)(self + 0x8c0) != (wchar_t *)0x0) {
    FlashTextField__SetText(*(wchar_t **)(self + 0x8c0),uVar2);
  }
  uVar2 = GetLocalizedText(0x5c);
  if (*(wchar_t **)(self + 0x900) != (wchar_t *)0x0) {
    FlashTextField__SetText(*(wchar_t **)(self + 0x900),uVar2);
  }
  iVar1 = System_IsTrialMode();
  if (iVar1 == 1) {
    *(uint32_t *)(*(long *)(self + 0x8f8) + 0x34) = *(uint32_t *)(self + 0x8f0);
    uVar2 = GetLocalizedText(0x48);
    if (*(wchar_t **)(self + 0x8e0) != (wchar_t *)0x0) {
      FlashTextField__SetText(*(wchar_t **)(self + 0x8e0),uVar2);
    }
  }
  else {
    *(uint32_t *)(*(long *)(self + 0x8f8) + 0x34) = *(uint32_t *)(self + 0x8d0);
    if (*(wchar_t **)(self + 0x8e0) != (wchar_t *)0x0) {
      FlashTextField__SetText(*(wchar_t **)(self + 0x8e0),&DAT_005c6634 /* R:0.0f */);
    }
  }
  pwVar3 = (wchar_t *)
           FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 0x7e0),"cancel");
  if (pwVar3 != (wchar_t *)0x0) {
    FlashTextField__SetText(pwVar3,&DAT_005c6634 /* R:0.0f */);
  }
  pwVar3 = (wchar_t *)
           FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 0x7e0),"select");
  if (pwVar3 != (wchar_t *)0x0) {
    uVar2 = GetLocalizedText(0xb7);
    FlashTextField__SetText(pwVar3,uVar2);
  }
  *(uint32_t *)(*(long *)(self + 0xba8) + 0x20) = 0xffffffff;
  return;
}

/* ======================================================================
 * GSMBMenu__ShowTitleMenu  (Ghidra `ShowTitleMenu` @ 004ce1f0)
 * Signature: uint8_t __thiscall ShowTitleMenu(GSMBMenu * self, int arg1)
 * Class: GSMBMenu
 * Calls: `FlashLibraryInstance__Reset`, `Joystick__AddButtonCallback`, `Joystick__AddPOVCallback`, `SMBMenu_ClickTitleOption`, `SMBMenu_DecrementTitleOption`, `SMBMenu_IncrementTitleOption`, `System_CheckTrialMask`, `TAudioCue__Play`, `TAudioInstance__IsPlaying`, `TKeyboard__AddKeyCallback` (+2 more)
 * Called by: `GSuperMeatBoy__ShowTitleMenu`, `GSuperMeatBoy__SwitchGameMode`, `SMBMenu_ClickBackFromHelpOption`
 */
/* GSMBMenu__ShowTitleMenu(int) */

void __thiscall GSMBMenu__ShowTitleMenu(GSMBMenu *self,int arg1)

{
  Joystick *pJVar1;
  int iVar2;
  uint32_t local_28 [2];
  uint64_t local_20;
  
  System_CheckTrialMask();
  bMenuTransitioning = 0;
  if (arg1 == 0) {
    *(uint32_t *)(self + 0xd04) = 0xf;
    RenderLayers__AddLayer((RenderLayer *)self);
    *(uint16_t *)(self + 0x1840) = 0;
  }
  if (Keyboard != (TKeyboard *)0x0) {
    TKeyboard__AddKeyCallback(Keyboard,0x76,SMBMenu_ClickTitleOption,0);
    TKeyboard__AddKeyCallback(Keyboard,0x6c,SMBMenu_ClickTitleOption,0);
    TKeyboard__AddKeyCallback(Keyboard,0x1f,SMBMenu_IncrementTitleOption,0);
    TKeyboard__AddKeyCallback(Keyboard,0x7f,SMBMenu_DecrementTitleOption,0);
  }
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddButtonCallback(pJVar1,0,SMBMenu_ClickTitleOption,0);
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddPOVCallback(pJVar1,2,SMBMenu_IncrementTitleOption,0);
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddPOVCallback(pJVar1,0,SMBMenu_DecrementTitleOption,0);
  if (arg1 != 0) {
    return;
  }
  FlashLibraryInstance__Reset(*(FlashLibraryInstance **)(self + 0x810));
  iVar2 = TAudioInstance__IsPlaying((TAudioInstance *)titleMusicInstance);
  if (iVar2 == 0) {
    TAudioCue__Play(pTitleMenuMusic,GLOBALMUSICVOLUME,0,(TAudioInstance *)titleMusicInstance);
  }
  SetTitleMenuText(self);
  local_28[0] = 1;
  local_20 = TPlayer__GetProfile((TPlayer *)Players__Player);
  BroadcastString__SetBroadcastString((BroadcastStringCreate *)local_28);
  return;
}

/* ======================================================================
 * GSMBMenu__SetTitleHelpAndOptionsMenuText  (Ghidra `SetTitleHelpAndOptionsMenuText` @ 004ce370)
 * Signature: uint8_t __thiscall SetTitleHelpAndOptionsMenuText(GSMBMenu * self)
 * Class: GSMBMenu
 * Calls: `FlashAnimationLibrary__GetTextField`, `GetLocalizedText`
 * Called by: (none)
 */
/* GSMBMenu__SetTitleHelpAndOptionsMenuText() */

void __thiscall GSMBMenu__SetTitleHelpAndOptionsMenuText(GSMBMenu *self)

{
  uint64_t uVar1;
  wchar_t *pwVar2;
  
  FlashTextField__SetText(*(wchar_t **)(self + 0x840),&DAT_005c6634 /* R:0.0f */);
  *(uint32_t *)(*(long *)(self + 0x838) + 0x34) = *(uint32_t *)(self + 0x830);
  FlashTextField__SetText(*(wchar_t **)(self + 0x860),&DAT_005c6634 /* R:0.0f */);
  *(uint32_t *)(*(long *)(self + 0x858) + 0x34) = *(uint32_t *)(self + 0x850);
  FlashTextField__SetText(*(wchar_t **)(self + 0x880),&DAT_005c6634 /* R:0.0f */);
  *(uint32_t *)(*(long *)(self + 0x878) + 0x34) = *(uint32_t *)(self + 0x870);
  FlashTextField__SetText(*(wchar_t **)(self + 0x8a0),&DAT_005c6634 /* R:0.0f */);
  *(uint32_t *)(*(long *)(self + 0x898) + 0x34) = *(uint32_t *)(self + 0x890);
  FlashTextField__SetText(*(wchar_t **)(self + 0x8c0),&DAT_005c6634 /* R:0.0f */);
  *(uint32_t *)(*(long *)(self + 0x8b8) + 0x34) = *(uint32_t *)(self + 0x8b0);
  FlashTextField__SetText(*(wchar_t **)(self + 0x8e0),&DAT_005c6634 /* R:0.0f */);
  *(uint32_t *)(*(long *)(self + 0x8d8) + 0x34) = *(uint32_t *)(self + 0x8d0);
  FlashTextField__SetText(*(wchar_t **)(self + 0x900),&DAT_005c6634 /* R:0.0f */);
  *(uint32_t *)(*(long *)(self + 0x8f8) + 0x34) = *(uint32_t *)(self + 0x8f0);
  uVar1 = GetLocalizedText(0x22);
  if (*(wchar_t **)(self + 0xa00) != (wchar_t *)0x0) {
    FlashTextField__SetText(*(wchar_t **)(self + 0xa00),uVar1);
  }
  uVar1 = GetLocalizedText(0xb6);
  if (*(wchar_t **)(self + 0xa20) != (wchar_t *)0x0) {
    FlashTextField__SetText(*(wchar_t **)(self + 0xa20),uVar1);
  }
  uVar1 = GetLocalizedText(0x23);
  if (*(wchar_t **)(self + 0xa60) != (wchar_t *)0x0) {
    FlashTextField__SetText(*(wchar_t **)(self + 0xa60),uVar1);
  }
  uVar1 = GetLocalizedText(0x26);
  if (*(wchar_t **)(self + 0xa40) != (wchar_t *)0x0) {
    FlashTextField__SetText(*(wchar_t **)(self + 0xa40),uVar1);
  }
  uVar1 = GetLocalizedText(10);
  if (*(wchar_t **)(self + 0xa80) != (wchar_t *)0x0) {
    FlashTextField__SetText(*(wchar_t **)(self + 0xa80),uVar1);
  }
  pwVar2 = (wchar_t *)
           FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 0x7e0),"cancel");
  if (pwVar2 != (wchar_t *)0x0) {
    uVar1 = GetLocalizedText(10);
    FlashTextField__SetText(pwVar2,uVar1);
  }
  pwVar2 = (wchar_t *)
           FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 0x7e0),"select");
  if (pwVar2 != (wchar_t *)0x0) {
    uVar1 = GetLocalizedText(0xb7);
    FlashTextField__SetText(pwVar2,uVar1);
  }
  *(uint32_t *)(*(long *)(self + 0xba8) + 0x20) = *(uint32_t *)(self + 3000);
  return;
}

/* ======================================================================
 * GSMBMenu__SetPauseMenuText  (Ghidra `SetPauseMenuText` @ 004ce590)
 * Signature: uint8_t __thiscall SetPauseMenuText(GSMBMenu * self)
 * Class: GSMBMenu
 * Calls: `FlashAnimationLibrary__GetTextField`, `GetLocalizedText`, `System_IsTrialMode`
 * Called by: `SMBMenu_ClickBackFromHelpOption`
 */
/* GSMBMenu__SetPauseMenuText() */

void __thiscall GSMBMenu__SetPauseMenuText(GSMBMenu *self)

{
  int iVar1;
  uint64_t uVar2;
  wchar_t *pwVar3;
  
  uVar2 = GetLocalizedText(0xb4);
  if (*(wchar_t **)(self + 0x920) != (wchar_t *)0x0) {
    FlashTextField__SetText(*(wchar_t **)(self + 0x920),uVar2);
  }
  uVar2 = GetLocalizedText(0x28);
  if (*(wchar_t **)(self + 0x960) != (wchar_t *)0x0) {
    FlashTextField__SetText(*(wchar_t **)(self + 0x960),uVar2);
  }
  uVar2 = GetLocalizedText(0x1d);
  if (*(wchar_t **)(self + 0x9a0) != (wchar_t *)0x0) {
    FlashTextField__SetText(*(wchar_t **)(self + 0x9a0),uVar2);
  }
  uVar2 = GetLocalizedText(0x21);
  if (*(wchar_t **)(self + 0x9c0) != (wchar_t *)0x0) {
    FlashTextField__SetText(*(wchar_t **)(self + 0x9c0),uVar2);
  }
  uVar2 = GetLocalizedText(0x5c);
  if (*(wchar_t **)(self + 0x9e0) != (wchar_t *)0x0) {
    FlashTextField__SetText(*(wchar_t **)(self + 0x9e0),uVar2);
  }
  uVar2 = GetLocalizedText(0xde);
  if (*(wchar_t **)(self + 0x940) != (wchar_t *)0x0) {
    FlashTextField__SetText(*(wchar_t **)(self + 0x940),uVar2);
  }
  iVar1 = System_IsTrialMode();
  if (iVar1 == 0) {
    FlashTextField__SetText(*(wchar_t **)(self + 0x980),&DAT_005c6634 /* R:0.0f */);
    *(uint32_t *)(*(long *)(self + 0x978) + 0x34) = *(uint32_t *)(self + 0x950);
    *(uint32_t *)(*(long *)(self + 0x998) + 0x34) = *(uint32_t *)(self + 0x970);
    *(uint32_t *)(*(long *)(self + 0x9b8) + 0x34) = *(uint32_t *)(self + 0x990);
    *(uint32_t *)(*(long *)(self + 0x9d8) + 0x34) = *(uint32_t *)(self + 0x9b0);
  }
  else {
    uVar2 = GetLocalizedText(0x48);
    FlashTextField__SetText(*(wchar_t **)(self + 0x980),uVar2);
    *(uint32_t *)(*(long *)(self + 0x918) + 0x34) = *(uint32_t *)(self + 0x910);
    *(uint32_t *)(*(long *)(self + 0x938) + 0x34) = *(uint32_t *)(self + 0x930);
    *(uint32_t *)(*(long *)(self + 0x958) + 0x34) = *(uint32_t *)(self + 0x950);
    *(uint32_t *)(*(long *)(self + 0x978) + 0x34) = *(uint32_t *)(self + 0x970);
    *(uint32_t *)(*(long *)(self + 0x998) + 0x34) = *(uint32_t *)(self + 0x990);
    *(uint32_t *)(*(long *)(self + 0x9b8) + 0x34) = *(uint32_t *)(self + 0x9b0);
    *(uint32_t *)(*(long *)(self + 0x9d8) + 0x34) = *(uint32_t *)(self + 0x9d0);
  }
  pwVar3 = (wchar_t *)
           FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 0x7a0),"cancel");
  if (pwVar3 != (wchar_t *)0x0) {
    uVar2 = GetLocalizedText(10);
    FlashTextField__SetText(pwVar3,uVar2);
  }
  pwVar3 = (wchar_t *)
           FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 0x7a0),"select");
  if (pwVar3 != (wchar_t *)0x0) {
    uVar2 = GetLocalizedText(0xb7);
    FlashTextField__SetText(pwVar3,uVar2);
    return;
  }
  return;
}

/* ======================================================================
 * GSMBMenu__SetReplayPauseMenuText  (Ghidra `SetReplayPauseMenuText` @ 004ce7d0)
 * Signature: uint8_t __thiscall SetReplayPauseMenuText(GSMBMenu * self)
 * Class: GSMBMenu
 * Calls: `FlashAnimationLibrary__GetTextField`, `GetLocalizedText`
 * Called by: `SMBMenu_ClickBackFromHelpOption`
 */
/* GSMBMenu__SetReplayPauseMenuText() */

void __thiscall GSMBMenu__SetReplayPauseMenuText(GSMBMenu *self)

{
  uint64_t uVar1;
  wchar_t *pwVar2;
  
  FlashTextField__SetText(*(wchar_t **)(self + 0x920),&DAT_005c6634 /* R:0.0f */);
  *(uint32_t *)(*(long *)(self + 0x918) + 0x34) = *(uint32_t *)(self + 0x910);
  FlashTextField__SetText(*(wchar_t **)(self + 0x940),&DAT_005c6634 /* R:0.0f */);
  *(uint32_t *)(*(long *)(self + 0x938) + 0x34) = *(uint32_t *)(self + 0x930);
  FlashTextField__SetText(*(wchar_t **)(self + 0x960),&DAT_005c6634 /* R:0.0f */);
  *(uint32_t *)(*(long *)(self + 0x958) + 0x34) = *(uint32_t *)(self + 0x950);
  FlashTextField__SetText(*(wchar_t **)(self + 0x980),&DAT_005c6634 /* R:0.0f */);
  *(uint32_t *)(*(long *)(self + 0x978) + 0x34) = *(uint32_t *)(self + 0x970);
  FlashTextField__SetText(*(wchar_t **)(self + 0x9a0),&DAT_005c6634 /* R:0.0f */);
  *(uint32_t *)(*(long *)(self + 0x998) + 0x34) = *(uint32_t *)(self + 0x990);
  FlashTextField__SetText(*(wchar_t **)(self + 0x9c0),&DAT_005c6634 /* R:0.0f */);
  *(uint32_t *)(*(long *)(self + 0x9b8) + 0x34) = *(uint32_t *)(self + 0x9b0);
  FlashTextField__SetText(*(wchar_t **)(self + 0x9e0),&DAT_005c6634 /* R:0.0f */);
  *(uint32_t *)(*(long *)(self + 0x9d8) + 0x34) = *(uint32_t *)(self + 0x9d0);
  uVar1 = GetLocalizedText(0xb4);
  if (*(wchar_t **)(self + 0xb40) != (wchar_t *)0x0) {
    FlashTextField__SetText(*(wchar_t **)(self + 0xb40),uVar1);
  }
  uVar1 = GetLocalizedText(0x1d);
  if (*(wchar_t **)(self + 0xb60) != (wchar_t *)0x0) {
    FlashTextField__SetText(*(wchar_t **)(self + 0xb60),uVar1);
  }
  uVar1 = GetLocalizedText(0x21);
  if (*(wchar_t **)(self + 0xb80) != (wchar_t *)0x0) {
    FlashTextField__SetText(*(wchar_t **)(self + 0xb80),uVar1);
  }
  uVar1 = GetLocalizedText(0x49);
  if (*(wchar_t **)(self + 0xba0) != (wchar_t *)0x0) {
    FlashTextField__SetText(*(wchar_t **)(self + 0xba0),uVar1);
  }
  *(uint32_t *)(*(long *)(self + 0xb38) + 0x34) = *(uint32_t *)(self + 0xb30);
  *(uint32_t *)(*(long *)(self + 0xb58) + 0x34) = *(uint32_t *)(self + 0xb50);
  *(uint32_t *)(*(long *)(self + 0xb78) + 0x34) = *(uint32_t *)(self + 0xb70);
  *(uint32_t *)(*(long *)(self + 0xb98) + 0x34) = *(uint32_t *)(self + 0xb90);
  pwVar2 = (wchar_t *)
           FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 0x7a0),"cancel");
  if (pwVar2 != (wchar_t *)0x0) {
    uVar1 = GetLocalizedText(10);
    FlashTextField__SetText(pwVar2,uVar1);
  }
  pwVar2 = (wchar_t *)
           FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 0x7a0),"select");
  if (pwVar2 != (wchar_t *)0x0) {
    uVar1 = GetLocalizedText(0xb7);
    FlashTextField__SetText(pwVar2,uVar1);
    return;
  }
  return;
}

/* ======================================================================
 * GSMBMenu__ShowPauseMenu  (Ghidra `ShowPauseMenu` @ 004cea00)
 * Signature: uint8_t __thiscall ShowPauseMenu(GSMBMenu * self, int arg1)
 * Class: GSMBMenu
 * Calls: `FlashLibraryInstance__Reset`, `GSMBCutSceneManager__CancelCutScene`, `Joystick__AddButtonCallback`, `Joystick__AddPOVCallback`, `SMBMenu_ClickPauseOption`, `SMBMenu_ClickReplayPauseOption`, `SMBMenu_DecrementPauseOption`, `SMBMenu_DecrementReplayPauseOption`, `SMBMenu_IncrementPauseOption`, `SMBMenu_IncrementReplayPauseOption` (+3 more)
 * Called by: `GSuperMeatBoy__ShowPauseMenu`, `SMBMenu_ClickBackFromHelpOption`, `ShowPauseMenu`, `ShowPauseMenuPress`
 */
/* GSMBMenu__ShowPauseMenu(int) */

void __thiscall GSMBMenu__ShowPauseMenu(GSMBMenu *self,int arg1)

{
  Joystick *pJVar1;
  code *pcVar2;
  
  *(uint32_t *)(self + 0xd04) = 0x11;
  FlashLibraryInstance__Reset(*(FlashLibraryInstance **)(self + 2000));
  FlashLibraryInstance__Reset(*(FlashLibraryInstance **)(self + 0x7d8));
  FlashLibraryInstance__Reset(*(FlashLibraryInstance **)(self + 0x7b0));
  FlashLibraryInstance__Reset(*(FlashLibraryInstance **)(self + 0x7a8));
  if (arg1 == 0) {
    RenderLayers__InsertLayerBefore((RenderLayer *)self,SMBCutSceneManager);
    *(uint32_t *)(self + 0x81c) = 0;
    if (*(long *)(self + 0x918) != 0) {
      *(uint32_t *)(*(long *)(self + 0x918) + 0x20) = *(uint32_t *)(self + 0x908);
    }
    if (*(long *)(self + 0x938) != 0) {
      *(uint32_t *)(*(long *)(self + 0x938) + 0x20) = *(uint32_t *)(self + 0x928);
    }
    if (*(long *)(self + 0x958) != 0) {
      *(uint32_t *)(*(long *)(self + 0x958) + 0x20) = *(uint32_t *)(self + 0x948);
    }
    if (*(long *)(self + 0x978) != 0) {
      *(uint32_t *)(*(long *)(self + 0x978) + 0x20) = *(uint32_t *)(self + 0x968);
    }
    if (*(long *)(self + 0x998) != 0) {
      *(uint32_t *)(*(long *)(self + 0x998) + 0x20) = *(uint32_t *)(self + 0x988);
    }
    if (*(long *)(self + 0x9b8) != 0) {
      *(uint32_t *)(*(long *)(self + 0x9b8) + 0x20) = *(uint32_t *)(self + 0x9a8);
    }
    if (*(long *)(self + 0x9d8) != 0) {
      *(uint32_t *)(*(long *)(self + 0x9d8) + 0x20) = *(uint32_t *)(self + 0x9c8);
    }
    if (*(short *)(self + 0x1840) == 0) {
      SetPauseMenuText(self);
      *(uint32_t *)(*(long *)(self + 0x918) + 0x20) = *(uint32_t *)(self + 0x90c);
    }
    else {
      SetReplayPauseMenuText(self);
      *(uint32_t *)(*(long *)(self + 0xb38) + 0x20) = *(uint32_t *)(self + 0xb2c);
    }
  }
  if (*(short *)(self + 0x1840) == 0) {
    if (Keyboard != (TKeyboard *)0x0) {
      TKeyboard__AddKeyCallback(Keyboard,0x76,SMBMenu_ClickPauseOption,0);
      TKeyboard__AddKeyCallback(Keyboard,0x6c,SMBMenu_ClickPauseOption,0);
      TKeyboard__AddKeyCallback(Keyboard,0x1f,SMBMenu_IncrementPauseOption,0);
      TKeyboard__AddKeyCallback(Keyboard,0x7f,SMBMenu_DecrementPauseOption,0);
      TKeyboard__AddKeyCallback(Keyboard,0x61,ShowPauseMenuPress,0);
      TKeyboard__AddKeyCallback(Keyboard,0x23,ShowPauseMenuPress,0);
    }
    pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
    Joystick__AddButtonCallback(pJVar1,0,SMBMenu_ClickPauseOption,0);
    pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
    Joystick__AddPOVCallback(pJVar1,2,SMBMenu_IncrementPauseOption,0);
    pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
    pcVar2 = SMBMenu_DecrementPauseOption;
  }
  else {
    if (Keyboard != (TKeyboard *)0x0) {
      TKeyboard__AddKeyCallback(Keyboard,0x76,SMBMenu_ClickReplayPauseOption,0);
      TKeyboard__AddKeyCallback(Keyboard,0x6c,SMBMenu_ClickReplayPauseOption,0);
      TKeyboard__AddKeyCallback(Keyboard,0x1f,SMBMenu_IncrementReplayPauseOption,0);
      TKeyboard__AddKeyCallback(Keyboard,0x7f,SMBMenu_DecrementReplayPauseOption,0);
      TKeyboard__AddKeyCallback(Keyboard,0x61,ShowPauseMenuPress,0);
      TKeyboard__AddKeyCallback(Keyboard,0x23,ShowPauseMenuPress,0);
    }
    pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
    Joystick__AddButtonCallback(pJVar1,0,SMBMenu_ClickReplayPauseOption,0);
    pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
    Joystick__AddPOVCallback(pJVar1,2,SMBMenu_IncrementReplayPauseOption,0);
    pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
    pcVar2 = SMBMenu_DecrementReplayPauseOption;
  }
  Joystick__AddPOVCallback(pJVar1,0,pcVar2,0);
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddButtonCallback(pJVar1,7,ShowPauseMenuPress,0);
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddButtonCallback(pJVar1,1,ShowPauseMenuPress,0);
  GSMBCutSceneManager__CancelCutScene((GSMBCutSceneManager *)SMBCutSceneManager);
  return;
}

/* ======================================================================
 * GSMBMenu__SetPauseHelpAndOptionsMenuText  (Ghidra `SetPauseHelpAndOptionsMenuText` @ 004ceff0)
 * Signature: uint8_t __thiscall SetPauseHelpAndOptionsMenuText(GSMBMenu * self)
 * Class: GSMBMenu
 * Calls: `FlashAnimationLibrary__GetTextField`, `GetLocalizedText`
 * Called by: (none)
 */
/* GSMBMenu__SetPauseHelpAndOptionsMenuText() */

void __thiscall GSMBMenu__SetPauseHelpAndOptionsMenuText(GSMBMenu *self)

{
  uint64_t uVar1;
  wchar_t *pwVar2;
  
  FlashTextField__SetText(*(wchar_t **)(self + 0x920),&DAT_005c6634 /* R:0.0f */);
  *(uint32_t *)(*(long *)(self + 0x918) + 0x34) = *(uint32_t *)(self + 0x910);
  FlashTextField__SetText(*(wchar_t **)(self + 0x940),&DAT_005c6634 /* R:0.0f */);
  *(uint32_t *)(*(long *)(self + 0x938) + 0x34) = *(uint32_t *)(self + 0x930);
  FlashTextField__SetText(*(wchar_t **)(self + 0x960),&DAT_005c6634 /* R:0.0f */);
  *(uint32_t *)(*(long *)(self + 0x958) + 0x34) = *(uint32_t *)(self + 0x950);
  FlashTextField__SetText(*(wchar_t **)(self + 0x980),&DAT_005c6634 /* R:0.0f */);
  *(uint32_t *)(*(long *)(self + 0x978) + 0x34) = *(uint32_t *)(self + 0x970);
  FlashTextField__SetText(*(wchar_t **)(self + 0x9a0),&DAT_005c6634 /* R:0.0f */);
  *(uint32_t *)(*(long *)(self + 0x998) + 0x34) = *(uint32_t *)(self + 0x990);
  FlashTextField__SetText(*(wchar_t **)(self + 0x9c0),&DAT_005c6634 /* R:0.0f */);
  *(uint32_t *)(*(long *)(self + 0x9b8) + 0x34) = *(uint32_t *)(self + 0x9b0);
  FlashTextField__SetText(*(wchar_t **)(self + 0x9e0),&DAT_005c6634 /* R:0.0f */);
  *(uint32_t *)(*(long *)(self + 0x9d8) + 0x34) = *(uint32_t *)(self + 0x9d0);
  uVar1 = GetLocalizedText(0x22);
  if (*(wchar_t **)(self + 0xaa0) != (wchar_t *)0x0) {
    FlashTextField__SetText(*(wchar_t **)(self + 0xaa0),uVar1);
  }
  uVar1 = GetLocalizedText(0xb6);
  if (*(wchar_t **)(self + 0xac0) != (wchar_t *)0x0) {
    FlashTextField__SetText(*(wchar_t **)(self + 0xac0),uVar1);
  }
  uVar1 = GetLocalizedText(0x23);
  if (*(wchar_t **)(self + 0xb00) != (wchar_t *)0x0) {
    FlashTextField__SetText(*(wchar_t **)(self + 0xb00),uVar1);
  }
  uVar1 = GetLocalizedText(0x26);
  if (*(wchar_t **)(self + 0xae0) != (wchar_t *)0x0) {
    FlashTextField__SetText(*(wchar_t **)(self + 0xae0),uVar1);
  }
  uVar1 = GetLocalizedText(10);
  if (*(wchar_t **)(self + 0xb20) != (wchar_t *)0x0) {
    FlashTextField__SetText(*(wchar_t **)(self + 0xb20),uVar1);
  }
  pwVar2 = (wchar_t *)
           FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 0x7a0),"cancel");
  if (pwVar2 != (wchar_t *)0x0) {
    uVar1 = GetLocalizedText(10);
    FlashTextField__SetText(pwVar2,uVar1);
  }
  pwVar2 = (wchar_t *)
           FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 0x7a0),"select");
  if (pwVar2 != (wchar_t *)0x0) {
    uVar1 = GetLocalizedText(0xb7);
    FlashTextField__SetText(pwVar2,uVar1);
    return;
  }
  return;
}

/* ======================================================================
 * GSMBMenu__HideTitleMenu  (Ghidra `HideTitleMenu` @ 004cf200)
 * Signature: uint8_t __thiscall HideTitleMenu(GSMBMenu * self)
 * Class: GSMBMenu
 * Calls: `Joystick__AddButtonCallback`, `Joystick__AddPOVCallback`, `TAudioInstance__Stop`, `TKeyboard__AddKeyCallback`, `TPlayer__GetJoystick`
 * Called by: `GSuperMeatBoy__HideTitleMenu`
 */
/* GSMBMenu__HideTitleMenu() */

void __thiscall GSMBMenu__HideTitleMenu(GSMBMenu *self)

{
  int iVar1;
  Joystick *pJVar2;
  
  iVar1 = *(int *)(self + 0xd04);
  *(uint32_t *)(self + 0xd04) = 0;
  if (Keyboard != (TKeyboard *)0x0) {
    TKeyboard__AddKeyCallback(Keyboard,0x76,0,0);
    TKeyboard__AddKeyCallback(Keyboard,0x6c,0,0);
    TKeyboard__AddKeyCallback(Keyboard,0x7f,0,0);
    TKeyboard__AddKeyCallback(Keyboard,0x1f,0,0);
  }
  pJVar2 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddButtonCallback(pJVar2,0,0,0);
  pJVar2 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddPOVCallback(pJVar2,0,0,0);
  pJVar2 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddPOVCallback(pJVar2,2,0,0);
  if ((iVar1 != 0x10) && (*(short *)(self + 0x1840) == 0)) {
    TAudioInstance__Stop((TAudioInstance *)titleMusicInstance);
    return;
  }
  return;
}

/* ======================================================================
 * GSMBMenu__TransitionInTitleFromWorld  (Ghidra `TransitionInTitleFromWorld` @ 004cf2f0)
 * Signature: uint8_t __thiscall TransitionInTitleFromWorld(GSMBMenu * self)
 * Class: GSMBMenu
 * Calls: `FlashLibraryInstance__Reset`, `TAudioCue__Play`, `TAudioInstance__IsPlaying`
 * Called by: `EndBackToTitleFromReplay`
 */
/* GSMBMenu__TransitionInTitleFromWorld() */

void __thiscall GSMBMenu__TransitionInTitleFromWorld(GSMBMenu *self)

{
  int iVar1;
  
  *(uint32_t *)(self + 0xd04) = 0x10;
  FlashLibraryInstance__Reset(*(FlashLibraryInstance **)(self + 0x7f8));
  iVar1 = TAudioInstance__IsPlaying((TAudioInstance *)titleMusicInstance);
  if (iVar1 != 0) {
    return;
  }
  TAudioCue__Play(pTitleMenuMusic,GLOBALMUSICVOLUME,0,(TAudioInstance *)titleMusicInstance);
  return;
}

/* ======================================================================
 * GSMBMenu__TransitionInTitleFromGame  (Ghidra `TransitionInTitleFromGame` @ 004cf340)
 * Signature: uint8_t __thiscall TransitionInTitleFromGame(GSMBMenu * self)
 * Class: GSMBMenu
 * Calls: `FlashLibraryInstance__Reset`, `GSuperMeatBoy__SwitchGameMode`, `TAudioCue__Play`, `TAudioInstance__IsPlaying`
 * Called by: (none)
 */
/* GSMBMenu__TransitionInTitleFromGame() */

void __thiscall GSMBMenu__TransitionInTitleFromGame(GSMBMenu *self)

{
  int iVar1;
  
  GSuperMeatBoy__SwitchGameMode(SuperMeatBoy,0xc);
  *(uint32_t *)(self + 0xd04) = 0x10;
  FlashLibraryInstance__Reset(*(FlashLibraryInstance **)(self + 0x7f8));
  iVar1 = TAudioInstance__IsPlaying((TAudioInstance *)titleMusicInstance);
  if (iVar1 != 0) {
    return;
  }
  TAudioCue__Play(pTitleMenuMusic,GLOBALMUSICVOLUME,0,(TAudioInstance *)titleMusicInstance);
  return;
}

/* ======================================================================
 * GSMBMenu__SetBossPadState  (Ghidra `SetBossPadState` @ 004cf3a0)
 * Signature: uint8_t __thiscall SetBossPadState(GSMBMenu * self)
 * Class: GSMBMenu
 * Calls: `FlashAnimationLibrary__GetTextField`, `FlashLibraryInstance__GotoAndStop`, `GSMBChapterData__GetBossTileNumbers`, `GSMBChapterData__IsAltBossDefeated`, `GSMBChapterData__IsAltBossUnlocked`, `GSMBChapterData__IsBossDefeated`, `GSMBChapterData__IsBossUnlocked`
 * Called by: (none)
 */
/* GSMBMenu__SetBossPadState() */

void __thiscall GSMBMenu__SetBossPadState(GSMBMenu *self)

{
  int iVar1;
  wchar_t *pwVar2;
  FlashLibraryInstance *this_00;
  bool bVar3;
  uint local_20;
  uint local_1c [3];
  
  if (((*(int *)(self + 0x420) == 1) &&
      (this_00 = *(FlashLibraryInstance **)(self + 0x788), this_00 != (FlashLibraryInstance *)0x0))
     || (this_00 = *(FlashLibraryInstance **)(self + 0x770),
        *(FlashLibraryInstance **)(self + 0x770) != (FlashLibraryInstance *)0x0)) {
    bVar3 = bBossJustUnlocked == 1;
    *(uint32_t *)(this_00 + 0x24) = 1;
    if (bVar3) {
      *(uint32_t *)(self + 0xd04) = 0x16;
      FlashLibraryInstance__GotoAndStop(this_00,1);
    }
    else if (bBossJustDefeated == 1) {
      *(uint32_t *)(self + 0xd04) = 0x17;
      FlashLibraryInstance__GotoAndStop(this_00,2);
    }
    else {
      if ((*(int *)(self + 0x418) == 6) && (*(int *)(self + 0x420) == 1)) {
        iVar1 = GSMBChapterData__IsAltBossUnlocked(SMBChapterData);
        if (iVar1 == 1) {
          iVar1 = GSMBChapterData__IsAltBossDefeated(SMBChapterData);
          if (iVar1 == 1) {
            FlashLibraryInstance__GotoAndStop(this_00,3);
          }
          else {
            FlashLibraryInstance__GotoAndStop(this_00,2);
          }
          *(byte *)(*(long *)(self + 0xce8) + 2) = *(byte *)(*(long *)(self + 0xce8) + 2) | 8;
        }
        else {
          FlashLibraryInstance__GotoAndStop(this_00,1);
          *(byte *)(*(long *)(self + 0xce8) + 2) = *(byte *)(*(long *)(self + 0xce8) + 2) & 0xf7;
        }
        GSMBChapterData__GetBossTileNumbers(SMBChapterData,(int *)local_1c,(int *)&local_20,1);
      }
      else {
        iVar1 = GSMBChapterData__IsBossUnlocked(SMBChapterData);
        if (iVar1 == 1) {
          iVar1 = GSMBChapterData__IsBossDefeated(SMBChapterData);
          if (iVar1 == 1) {
            FlashLibraryInstance__GotoAndStop(this_00,3);
          }
          else {
            FlashLibraryInstance__GotoAndStop(this_00,2);
          }
          *(byte *)(*(long *)(self + 0xce8) + 2) = *(byte *)(*(long *)(self + 0xce8) + 2) | 8;
        }
        else {
          FlashLibraryInstance__GotoAndStop(this_00,1);
          *(byte *)(*(long *)(self + 0xce8) + 2) = *(byte *)(*(long *)(self + 0xce8) + 2) & 0xf7;
        }
        GSMBChapterData__GetBossTileNumbers(SMBChapterData,(int *)local_1c,(int *)&local_20,0);
      }
      pwVar2 = (wchar_t *)
               FlashAnimationLibrary__GetTextField
                         (*(FlashAnimationLibrary **)(self + 0x4f8),"bossnumbertext");
      if (pwVar2 != (wchar_t *)0x0) {
        FlashTextField__SetText(pwVar2,&DAT_005c6660 /* R:5.184804318001823e-44f */,(ulong)local_20);
      }
      pwVar2 = (wchar_t *)
               FlashAnimationLibrary__GetTextField
                         (*(FlashAnimationLibrary **)(self + 0x4f8),"bosstotaltext");
      if (pwVar2 != (wchar_t *)0x0) {
        FlashTextField__SetText(pwVar2,&DAT_005c6660 /* R:5.184804318001823e-44f */,(ulong)local_1c[0]);
      }
    }
  }
  return;
}

/* ======================================================================
 * GSMBMenu__RenderUnlocks  (Ghidra `RenderUnlocks` @ 004cf5d0)
 * Signature: uint8_t __stdcall RenderUnlocks(void)
 * Class: GSMBMenu
 * Calls: `GMeatHUD__RenderUnlocks`, `SMBMenuUnlocksFinished`
 * Called by: (none)
 */
/* GSMBMenu__RenderUnlocks() */

void GSMBMenu__RenderUnlocks(void)

{
  bRenderingUnlocks = 1;
  GMeatHUD__RenderUnlocks(SMBHUD,SMBMenuUnlocksFinished);
  return;
}

/* ======================================================================
 * GSMBMenu__UnlocksFinished  (Ghidra `UnlocksFinished` @ 004cf5f0)
 * Signature: uint8_t __thiscall UnlocksFinished(GSMBMenu * self, int arg1)
 * Class: GSMBMenu
 * Calls: `SMBChapter__ResetChapterMusic`
 * Called by: (none)
 */
/* GSMBMenu__UnlocksFinished(int) */

void __thiscall GSMBMenu__UnlocksFinished(GSMBMenu *self,int arg1)

{
  bRenderingUnlocks = 0;
  if (arg1 != 0) {
    return;
  }
  bMenuTransitioning = 0;
  SMBChapter__ResetChapterMusic((SMBChapter *)(SuperMeatBoy + 0x90));
  return;
}

/* ======================================================================
 * GSMBMenu__HideCharMenu  (Ghidra `HideCharMenu` @ 004cf620)
 * Signature: uint8_t __stdcall HideCharMenu(void)
 * Class: GSMBMenu
 * Calls: `Joystick__AddButtonCallback`, `Joystick__AddPOVCallback`, `TKeyboard__AddKeyCallback`, `TPlayer__GetJoystick`
 * Called by: `SMBMenuSelectChar`
 */
/* GSMBMenu__HideCharMenu() */

void GSMBMenu__HideCharMenu(void)

{
  Joystick *pJVar1;
  
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddPOVCallback(pJVar1,3,0,0);
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddPOVCallback(pJVar1,1,0,0);
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddButtonCallback(pJVar1,0,0,0);
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddPOVCallback(pJVar1,0,0,0);
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddPOVCallback(pJVar1,2,0,0);
  if (Keyboard != (TKeyboard *)0x0) {
    TKeyboard__AddKeyCallback(Keyboard,0x41,0,0);
    TKeyboard__AddKeyCallback(Keyboard,0x6d,0,0);
    TKeyboard__AddKeyCallback(Keyboard,0x76,0,0);
    TKeyboard__AddKeyCallback(Keyboard,0x6c,0,0);
    return;
  }
  return;
}

/* ======================================================================
 * GSMBMenu__RemoveControls  (Ghidra `RemoveControls` @ 004cf770)
 * Signature: uint8_t __stdcall RemoveControls(void)
 * Class: GSMBMenu
 * Calls: `Joystick__AddButtonCallback`, `Joystick__AddPOVCallback`, `TKeyboard__AddKeyCallback`, `TPlayer__GetJoystick`
 * Called by: `SMBInternetChapterSel__LoadSelectedChapterFile`, `SMBInternetChapterSel__Update`, `SMBInternetsSelectChapter`, `SMBMenuChapterSelect`, `SMBMenuEnterWorld`, `SMBMenuTransitionInCharMenu`, `SMBMenu_ClickBackFromHelpOption`, `SMBWorldMapBackPress`
 */
/* GSMBMenu__RemoveControls() */

void GSMBMenu__RemoveControls(void)

{
  Joystick *pJVar1;
  
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddPOVCallback(pJVar1,0,0,0);
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddPOVCallback(pJVar1,2,0,0);
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddPOVCallback(pJVar1,3,0,0);
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddPOVCallback(pJVar1,1,0,0);
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddButtonCallback(pJVar1,0,0,0);
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddButtonCallback(pJVar1,2,0,0);
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddButtonCallback(pJVar1,1,0,0);
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddButtonCallback(pJVar1,3,0,0);
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddButtonCallback(pJVar1,7,0,0);
  if (Keyboard != (TKeyboard *)0x0) {
    TKeyboard__AddKeyCallback(Keyboard,0x7f,0,0);
    TKeyboard__AddKeyCallback(Keyboard,0x1f,0,0);
    TKeyboard__AddKeyCallback(Keyboard,0x41,0,0);
    TKeyboard__AddKeyCallback(Keyboard,0x6d,0,0);
    TKeyboard__AddKeyCallback(Keyboard,0x76,0,0);
    TKeyboard__AddKeyCallback(Keyboard,0x6c,0,0);
    TKeyboard__AddKeyCallback(Keyboard,0x43,0,0);
    TKeyboard__AddKeyCallback(Keyboard,0x6f,0,0);
    TKeyboard__AddKeyCallback(Keyboard,0x1b,0,0);
    TKeyboard__AddKeyCallback(Keyboard,0x71,0,0);
    TKeyboard__AddKeyCallback(Keyboard,0x23,0,0);
    TKeyboard__AddKeyCallback(Keyboard,0x83,0,0);
    return;
  }
  return;
}

/* ======================================================================
 * GSMBMenu__RestoreControls  (Ghidra `RestoreControls` @ 004cf980)
 * Signature: uint8_t __stdcall RestoreControls(void)
 * Class: GSMBMenu
 * Calls: `Joystick__AddButtonCallback`, `Joystick__AddPOVCallback`, `SMBChapterMenuUpsell`, `SMBMenuEnterWorld`, `SMBMenuLevelLightDarkToggle`, `SMBMenuLevelSelect`, `SMBMenuMoveDownLevel`, `SMBMenuMoveLeftLevel`, `SMBMenuMoveRightLevel`, `SMBMenuMoveUpLevel` (+3 more)
 * Called by: (none)
 */
/* GSMBMenu__RestoreControls() */

void GSMBMenu__RestoreControls(void)

{
  Joystick *pJVar1;
  
  if (bBossJustDefeated == 1) {
    RemoveControls();
    return;
  }
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddPOVCallback(pJVar1,0,SMBMenuMoveUpLevel,0);
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddPOVCallback(pJVar1,2,SMBMenuMoveDownLevel,0);
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddPOVCallback(pJVar1,3,SMBMenuMoveLeftLevel,0);
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddPOVCallback(pJVar1,1,SMBMenuMoveRightLevel,0);
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddButtonCallback(pJVar1,0,SMBMenuLevelSelect,0);
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddButtonCallback(pJVar1,2,SMBMenuLevelLightDarkToggle,0);
  if (*(int *)(SuperMeatBoy + 0x290) == 8) {
    pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
    Joystick__AddButtonCallback(pJVar1,7,SMBChapterMenuUpsell,0);
  }
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddButtonCallback(pJVar1,1,SMBMenuEnterWorld,0);
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddButtonCallback(pJVar1,3,SMBMenuShowLeaderBoard,0);
  if (Keyboard != (TKeyboard *)0x0) {
    TKeyboard__AddKeyCallback(Keyboard,0x7f,SMBMenuMoveUpLevel,0);
    TKeyboard__AddKeyCallback(Keyboard,0x1f,SMBMenuMoveDownLevel,0);
    TKeyboard__AddKeyCallback(Keyboard,0x41,SMBMenuMoveLeftLevel,0);
    TKeyboard__AddKeyCallback(Keyboard,0x6d,SMBMenuMoveRightLevel,0);
    TKeyboard__AddKeyCallback(Keyboard,0x76,SMBMenuLevelSelect,0);
    TKeyboard__AddKeyCallback(Keyboard,0x6c,SMBMenuLevelSelect,0);
    TKeyboard__AddKeyCallback(Keyboard,0x43,SMBMenuLevelLightDarkToggle,0);
    TKeyboard__AddKeyCallback(Keyboard,0x6f,SMBMenuLevelLightDarkToggle,0);
    TKeyboard__AddKeyCallback(Keyboard,0x71,SMBMenuLevelSelect,0);
    TKeyboard__AddKeyCallback(Keyboard,0x1b,SMBMenuLevelLightDarkToggle,0);
    TKeyboard__AddKeyCallback(Keyboard,0x23,SMBMenuEnterWorld,0);
    TKeyboard__AddKeyCallback(Keyboard,0x83,SMBMenuShowLeaderBoard,0);
    return;
  }
  return;
}

/* ======================================================================
 * GSMBMenu__TransitionOutGameToTitle  (Ghidra `TransitionOutGameToTitle` @ 004cfc00)
 * Signature: uint8_t __thiscall TransitionOutGameToTitle(GSMBMenu * self)
 * Class: GSMBMenu
 * Calls: `GSMBCutSceneManager__PlayCutScene`, `SMBGameToTitleTransFinished`
 * Called by: `ShowTitleMenuPress`
 */
/* GSMBMenu__TransitionOutGameToTitle() */

void __thiscall GSMBMenu__TransitionOutGameToTitle(GSMBMenu *self)

{
  uint32_t local_58;
  uint32_t local_54;
  uint32_t local_50;
  uint64_t local_48;
  code *local_40;
  uint64_t local_38;
  uint64_t local_30;
  uint64_t local_28;
  uint32_t local_20;
  uint32_t local_1c;
  uint32_t local_18;
  
  local_48 = *(uint64_t *)(self + 0x620);
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 1;
  local_58 = 0x44200000;
  local_54 = 0x43f00000;
  local_50 = 1;
  local_40 = SMBGameToTitleTransFinished;
  local_18 = 0;
  GSMBCutSceneManager__PlayCutScene(SMBCutSceneManager,(SMBCutScene *)&local_58);
  RemoveControls();
  return;
}

/* ======================================================================
 * GSMBMenu__TransitionOutWorldToTitle  (Ghidra `TransitionOutWorldToTitle` @ 004cfc90)
 * Signature: uint8_t __thiscall TransitionOutWorldToTitle(GSMBMenu * self)
 * Class: GSMBMenu
 * Calls: `GSMBCutSceneManager__PlayCutScene`, `SMBWorldToTitleTransFinished`
 * Called by: (none)
 */
/* GSMBMenu__TransitionOutWorldToTitle() */

void __thiscall GSMBMenu__TransitionOutWorldToTitle(GSMBMenu *self)

{
  uint32_t local_58;
  uint32_t local_54;
  uint32_t local_50;
  uint64_t local_48;
  code *local_40;
  uint64_t local_38;
  uint64_t local_30;
  uint64_t local_28;
  uint32_t local_20;
  uint32_t local_1c;
  uint32_t local_18;
  
  local_48 = *(uint64_t *)(self + 0x620);
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 1;
  local_58 = 0x44200000;
  local_54 = 0x43f00000;
  local_50 = 1;
  local_40 = SMBWorldToTitleTransFinished;
  local_18 = 0;
  GSMBCutSceneManager__PlayCutScene(SMBCutSceneManager,(SMBCutScene *)&local_58);
  RemoveControls();
  return;
}

/* ======================================================================
 * GSMBMenu__Render  (Ghidra `Render` @ 004cff10)
 * Signature: uint8_t __thiscall Render(GSMBMenu * self)
 * Class: GSMBMenu
 * Calls: `AutoLockSection__AutoLockSection`, `AutoLockSection__AutoLockSection__005b59d0`, `Camera__SetCameraMatricies`, `Camera__SetOrthoProjection`, `FlashLibraryInstance__GotoAndStop`, `FlashLibraryInstance__IsPlaying`, `FlashLibraryInstance__Reset`, `GSMBChapterData__GetCurrentLevelData`, `GSMBChapterData__GetLevelPercentage`, `GSMBChapterData__GetNumBandagesInChapter` (+14 more)
 * Called by: (none)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GSMBMenu__Render() */

void __thiscall GSMBMenu__Render(GSMBMenu *self)

{
  byte *pbVar1;
  uint64_t uVar2;
  byte bVar3;
  ushort uVar4;
  uint32_t uVar5;
  uint32_t uVar6;
  uint32_t uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  float *pfVar12;
  uint64_t uVar13;
  float *pfVar14;
  uint uVar15;
  uint32_t uVar16;
  long lVar17;
  uint uVar18;
  ulong uVar19;
  FlashLibraryInstance *pFVar20;
  long *plVar21;
  long lVar22;
  long lVar23;
  SMBChapter *pSVar24;
  float fVar25;
  float fVar26;
  AutoLockSection local_48 [24];
  
  AutoLockSection__AutoLockSection(local_48,(CriticalSection *)SMBMenuSection);
                    /* try { // try from 004cff37 to 004d03bc has its CatchHandler @ 004d14db */
  TAudio__DisableDirectionalAudio(Audio);
  RegisterAudioPosition((FPUVector *)0xffffffff);
  iVar9 = *(int *)(self + 0xd04);
  if (((((iVar9 != 7) && (iVar9 != 1)) && (iVar9 != 10)) && ((iVar9 != 6 && (iVar9 != 2)))) &&
     ((iVar9 != 0x14 && ((iVar9 != 0x17 && (iVar9 != 0x16)))))) {
    if ((iVar9 == 8) || ((iVar9 == 3 || (iVar9 == 0x15)))) {
                    /* try { // try from 004d043b to 004d13b0 has its CatchHandler @ 004d14db */
      TGraphics__SetRenderState(Graphics,'\x05',4);
      TGraphics__SetRenderState(Graphics,'\x06',5);
      Camera__SetOrthoProjection
                (*(Camera **)(SuperMeatBoy + 0x38),_DAT_005c0c9c /* R:240.0f */,DAT_005c0c98 /* R:-240.0f */,DAT_005c0c94 /* R:-426.5f */,
                 DAT_005c0c90 /* R:426.5f */,DAT_005c07a4 /* R:-1.0f */,DAT_005be894 /* R:1.0f */);
      Camera__SetCameraMatricies(*(Camera **)(SuperMeatBoy + 0x38),2);
      pFVar20 = *(FlashLibraryInstance **)(self + 0x438);
      if (pFVar20 != (FlashLibraryInstance *)0x0) {
        iVar9 = GSMBChapterData__IsChapterUnlocked(SMBChapterData,1);
        if (iVar9 == 1) {
          FlashLibraryInstance__GotoAndStop(pFVar20,1);
        }
        else {
          FlashLibraryInstance__GotoAndStop(pFVar20,2);
        }
      }
      pFVar20 = *(FlashLibraryInstance **)(self + 0x440);
      if (pFVar20 != (FlashLibraryInstance *)0x0) {
        iVar9 = GSMBChapterData__IsChapterUnlocked(SMBChapterData,2);
        if (iVar9 == 1) {
          FlashLibraryInstance__GotoAndStop(pFVar20,1);
        }
        else {
          FlashLibraryInstance__GotoAndStop(pFVar20,2);
        }
      }
      pFVar20 = *(FlashLibraryInstance **)(self + 0x448);
      if (pFVar20 != (FlashLibraryInstance *)0x0) {
        iVar9 = GSMBChapterData__IsChapterUnlocked(SMBChapterData,3);
        if (iVar9 == 1) {
          FlashLibraryInstance__GotoAndStop(pFVar20,1);
        }
        else {
          FlashLibraryInstance__GotoAndStop(pFVar20,2);
        }
      }
      pFVar20 = *(FlashLibraryInstance **)(self + 0x450);
      if (pFVar20 != (FlashLibraryInstance *)0x0) {
        iVar9 = GSMBChapterData__IsChapterUnlocked(SMBChapterData,4);
        if (iVar9 == 1) {
          FlashLibraryInstance__GotoAndStop(pFVar20,1);
        }
        else {
          FlashLibraryInstance__GotoAndStop(pFVar20,2);
        }
      }
      pFVar20 = *(FlashLibraryInstance **)(self + 0x458);
      if (pFVar20 != (FlashLibraryInstance *)0x0) {
        iVar9 = GSMBChapterData__IsChapterUnlocked(SMBChapterData,5);
        if (iVar9 == 1) {
          FlashLibraryInstance__GotoAndStop(pFVar20,1);
        }
        else {
          FlashLibraryInstance__GotoAndStop(pFVar20,2);
        }
      }
      pFVar20 = *(FlashLibraryInstance **)(self + 0x460);
      if (pFVar20 != (FlashLibraryInstance *)0x0) {
        iVar9 = GSMBChapterData__IsChapterUnlocked(SMBChapterData,6);
        if (iVar9 == 1) {
          FlashLibraryInstance__GotoAndStop(pFVar20,1);
        }
        else {
          FlashLibraryInstance__GotoAndStop(pFVar20,2);
        }
      }
      pFVar20 = *(FlashLibraryInstance **)(self + 0x468);
      if (pFVar20 != (FlashLibraryInstance *)0x0) {
        iVar9 = GSMBChapterData__IsChapterUnlocked(SMBChapterData,7);
        if (iVar9 == 1) {
          FlashLibraryInstance__GotoAndStop(pFVar20,1);
        }
        else {
          FlashLibraryInstance__GotoAndStop(pFVar20,2);
        }
      }
      pFVar20 = *(FlashLibraryInstance **)(self + 0x470);
      if (pFVar20 != (FlashLibraryInstance *)0x0) {
        iVar9 = GSMBChapterData__IsChapterUnlocked(SMBChapterData,9);
        if (iVar9 == 1) {
          FlashLibraryInstance__GotoAndStop(pFVar20,1);
        }
        else {
          FlashLibraryInstance__GotoAndStop(pFVar20,2);
        }
      }
      SwitchOutMenuButtons
                (*(FlashAnimationLibrary **)(self + 0x428),*(FlashLibraryInstance **)(self + 0x430))
      ;
      (**(code **)(**(long **)(self + 0x430) + 0x10))();
      if ((*(int *)(self + 0xd04) == 0x15) || (*(int *)(self + 0xd04) == 3)) {
        (**(code **)(**(long **)(self + 0x4d0) + 0x10))();
      }
      else if (bMenuTransitioning == 0) {
        (**(code **)(**(long **)(self + 0x4d8) + 0x10))();
      }
      goto LAB_004d0398;
    }
    if (1 < iVar9 - 4U) {
      if (iVar9 - 0x11U < 3) {
        TGraphics__SetRenderState(Graphics,'\x05',4);
        TGraphics__SetRenderState(Graphics,'\x06',5);
        Camera__SetOrthoProjection
                  (*(Camera **)(SuperMeatBoy + 0x38),_DAT_005c0c9c /* R:240.0f */,DAT_005c0c98 /* R:-240.0f */,DAT_005c0c94 /* R:-426.5f */,
                   DAT_005c0c90 /* R:426.5f */,DAT_005c07a4 /* R:-1.0f */,DAT_005be894 /* R:1.0f */);
        Camera__SetCameraMatricies(*(Camera **)(SuperMeatBoy + 0x38),2);
        SwitchOutMenuButtons
                  (*(FlashAnimationLibrary **)(*(FlashLibraryInstance **)(self + 0x7a8) + 0x28),
                   *(FlashLibraryInstance **)(self + 0x7a8));
        iVar9 = *(int *)(self + 0xd04);
        if (iVar9 == 0x11) {
          (**(code **)(**(long **)(self + 0x7a8) + 0x10))();
          (**(code **)(**(long **)(self + 0x7b0) + 0x10))();
          iVar9 = FlashLibraryInstance__IsPlaying(*(FlashLibraryInstance **)(self + 0x7b0));
          if (iVar9 == 0) {
            lVar17 = *(long *)(self + 0x7b0);
            iVar9 = GetRandomINT(0,4);
            *(uint32_t *)(lVar17 + 0x20) = *(uint32_t *)(self + (long)iVar9 * 4 + 0x7b8);
            FlashLibraryInstance__Reset(*(FlashLibraryInstance **)(self + 0x7b0));
          }
        }
        else if (iVar9 == 0x12) {
          (**(code **)(**(long **)(self + 2000) + 0x10))();
        }
        else if (iVar9 == 0x13) {
          (**(code **)(**(long **)(self + 0x7d8) + 0x10))();
        }
      }
      else if ((((iVar9 == 0xc) || (iVar9 == 0xf)) || (iVar9 == 0xd)) ||
              ((iVar9 == 0xb || (iVar9 == 0x10)))) {
        TGraphics__SetRenderState(Graphics,'\x05',4);
        TGraphics__SetRenderState(Graphics,'\x06',5);
        Camera__SetOrthoProjection
                  (*(Camera **)(SuperMeatBoy + 0x38),_DAT_005c0c9c /* R:240.0f */,DAT_005c0c98 /* R:-240.0f */,DAT_005c0c94 /* R:-426.5f */,
                   DAT_005c0c90 /* R:426.5f */,DAT_005c07a4 /* R:-1.0f */,DAT_005be894 /* R:1.0f */);
        Camera__SetCameraMatricies(*(Camera **)(SuperMeatBoy + 0x38),2);
        SwitchOutMenuButtons
                  (*(FlashAnimationLibrary **)(*(FlashLibraryInstance **)(self + 0x7e8) + 0x28),
                   *(FlashLibraryInstance **)(self + 0x7e8));
        iVar9 = *(int *)(self + 0xd04);
        if (iVar9 == 0xb) {
          (**(code **)(**(long **)(self + 0x800) + 0x10))();
        }
        else if (iVar9 == 0xc) {
          (**(code **)(**(long **)(self + 0x808) + 0x10))();
        }
        else if (iVar9 == 0xd) {
          (**(code **)(**(long **)(self + 0x810) + 0x10))();
        }
        else if (iVar9 == 0xf) {
          (**(code **)(**(long **)(self + 0x7e8) + 0x10))();
        }
        else if (iVar9 == 0x10) {
          (**(code **)(**(long **)(self + 0x7f8) + 0x10))();
        }
      }
      goto LAB_004d0398;
    }
    Camera__SetOrthoProjection
              (*(Camera **)(SuperMeatBoy + 0x38),_DAT_005c0c9c /* R:240.0f */,DAT_005c0c98 /* R:-240.0f */,DAT_005c0c94 /* R:-426.5f */,
               DAT_005c0c90 /* R:426.5f */,DAT_005c07a4 /* R:-1.0f */,DAT_005be894 /* R:1.0f */);
    Camera__SetCameraMatricies();
    if (currCharMoveState == 2) {
      uVar8 = *(uint *)(self + 0xd08);
      lVar17 = 0;
      iVar9 = uVar8 + 1;
      uVar18 = *(ushort *)(self + 0xbe8) - 1;
      if (iVar9 <= (int)uVar18) {
        if (iVar9 < 0) {
          lVar17 = (ulong)(uVar18 & 0xffff) * 0x2c;
        }
        else {
          lVar17 = (ulong)(ushort)iVar9 * 0x2c;
        }
      }
      uVar15 = uVar8 - 1;
      lVar23 = 0;
      if ((int)uVar15 <= (int)uVar18) {
        if ((int)uVar15 < 0) {
          lVar23 = (ulong)(uVar18 & 0xffff) * 0x2c;
        }
        else {
          lVar23 = ((ulong)uVar15 & 0xffff) * 0x2c;
        }
      }
      lVar11 = *(long *)(self + 0xbf8);
      if (*(int *)(self + 0xd04) == 5) {
        uVar16 = *(uint32_t *)(lVar11 + 4 + (ulong)(uVar8 & 0xffff) * 0x2c);
      }
      else {
        lVar22 = lVar11 + (ulong)(uVar8 & 0xffff) * 0x2c;
        uVar16 = *(uint32_t *)(lVar22 + 0xc);
        if (*(int *)(lVar22 + 0x14) == 1) {
          uVar16 = *(uint32_t *)(lVar22 + 8);
        }
      }
      lVar17 = lVar17 + lVar11;
      uVar5 = *(uint32_t *)(lVar17 + 0xc);
      if (*(int *)(lVar17 + 0x14) == 1) {
        uVar5 = *(uint32_t *)(lVar17 + 8);
      }
      lVar11 = lVar11 + lVar23;
      uVar6 = *(uint32_t *)(lVar11 + 0xc);
      if (*(int *)(lVar11 + 0x14) == 1) {
        uVar6 = *(uint32_t *)(lVar11 + 8);
      }
      *(uint32_t *)(*(long *)(self + 0x728) + 0x20) = uVar6;
      *(uint32_t *)(*(long *)(self + 0x720) + 0x20) = uVar5;
      *(uint32_t *)(*(long *)(self + 0x730) + 0x20) = uVar16;
      *(uint32_t *)(*(long *)(self + 0x738) + 0x20) = 0xffffffff;
    }
    else if (currCharMoveState == 1) {
      uVar4 = *(ushort *)(self + 0xbe8);
      uVar8 = *(uint *)(self + 0xd08);
      iVar9 = uVar8 - 1;
      uVar18 = uVar4 - 1;
      if ((int)uVar18 < iVar9) {
        lVar17 = 0;
        uVar15 = 0xffffffff;
        uVar8 = 1;
      }
      else if (iVar9 < 0) {
        uVar15 = uVar4 - 2;
        uVar8 = (uint)uVar4;
        lVar17 = (ulong)(uVar18 & 0xffff) * 0x2c;
      }
      else {
        uVar15 = uVar8 - 2;
        lVar17 = (ulong)(ushort)iVar9 * 0x2c;
      }
      lVar23 = 0;
      if ((int)uVar8 <= (int)uVar18) {
        if ((int)uVar8 < 0) {
          lVar23 = (ulong)(uVar18 & 0xffff) * 0x2c;
        }
        else {
          lVar23 = (ulong)(uVar8 & 0xffff) * 0x2c;
        }
      }
      lVar11 = 0;
      if ((int)uVar15 <= (int)uVar18) {
        if ((int)uVar15 < 0) {
          lVar11 = (ulong)(uVar18 & 0xffff) * 0x2c;
        }
        else {
          lVar11 = (ulong)(uVar15 & 0xffff) * 0x2c;
        }
      }
      lVar22 = *(long *)(self + 0xbf8);
      lVar17 = lVar17 + lVar22;
      uVar16 = *(uint32_t *)(lVar17 + 0xc);
      if (*(int *)(lVar17 + 0x14) == 1) {
        uVar16 = *(uint32_t *)(lVar17 + 8);
      }
      lVar23 = lVar23 + lVar22;
      uVar5 = *(uint32_t *)(lVar23 + 0xc);
      if (*(int *)(lVar23 + 0x14) == 1) {
        uVar5 = *(uint32_t *)(lVar23 + 8);
      }
      lVar11 = lVar11 + lVar22;
      uVar6 = *(uint32_t *)(lVar11 + 0xc);
      if (*(int *)(lVar11 + 0x14) == 1) {
        uVar6 = *(uint32_t *)(lVar11 + 8);
      }
      if ((int)uVar18 < (int)uVar8) {
        uVar15 = 1;
      }
      else {
        uVar15 = (uint)uVar4;
        if (-1 < (int)uVar8) {
          uVar15 = uVar8 + 1;
        }
      }
      lVar17 = 0;
      if ((int)uVar15 <= (int)uVar18) {
        if ((int)uVar15 < 0) {
          lVar17 = (ulong)(uVar18 & 0xffff) * 0x2c;
        }
        else {
          lVar17 = (ulong)(uVar15 & 0xffff) * 0x2c;
        }
      }
      lVar22 = lVar22 + lVar17;
      uVar7 = *(uint32_t *)(lVar22 + 0xc);
      if (*(int *)(lVar22 + 0x14) == 1) {
        uVar7 = *(uint32_t *)(lVar22 + 8);
      }
      *(uint32_t *)(*(long *)(self + 0x698) + 0x20) = uVar6;
      *(uint32_t *)(*(long *)(self + 0x690) + 0x20) = uVar5;
      *(uint32_t *)(*(long *)(self + 0x6a0) + 0x20) = uVar16;
      *(uint32_t *)(*(long *)(self + 0x6a8) + 0x20) = uVar7;
      *(uint32_t *)(*(long *)(self + 0x6b8) + 0x20) = uVar6;
      *(uint32_t *)(*(long *)(self + 0x6b0) + 0x20) = uVar5;
      *(uint32_t *)(*(long *)(self + 0x6c0) + 0x20) = uVar16;
      *(uint32_t *)(*(long *)(self + 0x6c8) + 0x20) = uVar7;
    }
    else if (currCharMoveState == 0) {
      uVar4 = *(ushort *)(self + 0xbe8);
      uVar8 = (uint)uVar4;
      uVar18 = *(uint *)(self + 0xd08);
      iVar9 = uVar18 + 1;
      uVar15 = uVar4 - 1;
      if ((int)uVar15 < iVar9) {
        lVar17 = 0;
        uVar18 = 0xffffffff;
        uVar8 = 1;
      }
      else if (iVar9 < 0) {
        uVar18 = uVar4 - 2;
        lVar17 = (ulong)(uVar15 & 0xffff) * 0x2c;
      }
      else {
        uVar8 = uVar18 + 2;
        lVar17 = (ulong)(ushort)iVar9 * 0x2c;
      }
      lVar23 = 0;
      if ((int)uVar8 <= (int)uVar15) {
        if ((int)uVar8 < 0) {
          lVar23 = (ulong)(uVar15 & 0xffff) * 0x2c;
        }
        else {
          lVar23 = (ulong)(uVar8 & 0xffff) * 0x2c;
        }
      }
      lVar11 = 0;
      if ((int)uVar18 <= (int)uVar15) {
        if ((int)uVar18 < 0) {
          lVar11 = (ulong)(uVar15 & 0xffff) * 0x2c;
        }
        else {
          lVar11 = (ulong)(uVar18 & 0xffff) * 0x2c;
        }
      }
      lVar22 = *(long *)(self + 0xbf8);
      lVar17 = lVar17 + lVar22;
      uVar16 = *(uint32_t *)(lVar17 + 0xc);
      if (*(int *)(lVar17 + 0x14) == 1) {
        uVar16 = *(uint32_t *)(lVar17 + 8);
      }
      lVar23 = lVar23 + lVar22;
      uVar5 = *(uint32_t *)(lVar23 + 0xc);
      if (*(int *)(lVar23 + 0x14) == 1) {
        uVar5 = *(uint32_t *)(lVar23 + 8);
      }
      lVar11 = lVar11 + lVar22;
      uVar6 = *(uint32_t *)(lVar11 + 0xc);
      if (*(int *)(lVar11 + 0x14) == 1) {
        uVar6 = *(uint32_t *)(lVar11 + 8);
      }
      if ((int)uVar15 < (int)uVar18) {
LAB_004d02a8:
        lVar17 = (ulong)(uVar15 & 0xffff) * 0x2c;
      }
      else {
        if ((int)uVar18 < 0) {
          uVar18 = uVar15;
        }
        uVar18 = uVar18 - 1;
        if ((int)uVar15 < (int)uVar18) {
          lVar17 = 0;
        }
        else {
          if ((int)uVar18 < 0) goto LAB_004d02a8;
          lVar17 = (ulong)(uVar18 & 0xffff) * 0x2c;
        }
      }
      lVar22 = lVar22 + lVar17;
      uVar7 = *(uint32_t *)(lVar22 + 0xc);
      if (*(int *)(lVar22 + 0x14) == 1) {
        uVar7 = *(uint32_t *)(lVar22 + 8);
      }
      *(uint32_t *)(*(long *)(self + 0x6e0) + 0x20) = uVar6;
      *(uint32_t *)(*(long *)(self + 0x6d8) + 0x20) = uVar5;
      *(uint32_t *)(*(long *)(self + 0x6e8) + 0x20) = uVar16;
      *(uint32_t *)(*(long *)(self + 0x6f0) + 0x20) = uVar7;
      *(uint32_t *)(*(long *)(self + 0x700) + 0x20) = uVar6;
      *(uint32_t *)(*(long *)(self + 0x6f8) + 0x20) = uVar5;
      *(uint32_t *)(*(long *)(self + 0x708) + 0x20) = uVar16;
      *(uint32_t *)(*(long *)(self + 0x710) + 0x20) = uVar7;
    }
    PlayCodeSound(self);
    SwitchOutMenuButtons
              (*(FlashAnimationLibrary **)(*(FlashLibraryInstance **)(self + 0x688) + 0x28),
               *(FlashLibraryInstance **)(self + 0x688));
    (**(code **)(**(long **)(self + 0x678) + 0x10))();
    iVar9 = FlashLibraryInstance__IsPlaying(*(FlashLibraryInstance **)(self + 0x678));
    if (iVar9 == 0) {
      if (*(int *)(*(long *)(self + 0x748) + 0x20) != *(int *)(self + 0x768)) {
        *(int *)(*(long *)(self + 0x748) + 0x20) = *(int *)(self + 0x768);
        currCharMoveState = 2;
        *(uint32_t *)(*(long *)(self + 0x678) + 0x58) = 0;
        FlashLibraryInstance__Reset(*(FlashLibraryInstance **)(self + 0x678));
      }
    }
    (**(code **)(**(long **)(self + 0x670) + 0x10))();
    goto LAB_004d0398;
  }
  if ((*(long *)(self + 0x500) == 0) || (*(long *)(self + 0x508) == 0)) goto LAB_004d0398;
  TGraphics__SetRenderState(Graphics,'\x05',4);
  TGraphics__SetRenderState(Graphics,'\x06',5);
  Camera__SetOrthoProjection
            (*(Camera **)(SuperMeatBoy + 0x38),_DAT_005c0c9c /* R:240.0f */,DAT_005c0c98 /* R:-240.0f */,DAT_005c0c94 /* R:-426.5f */,DAT_005c0c90 /* R:426.5f */,
             DAT_005c07a4 /* R:-1.0f */,DAT_005be894 /* R:1.0f */);
  Camera__SetCameraMatricies(*(Camera **)(SuperMeatBoy + 0x38),2);
  uVar8 = (uint)*(ushort *)(self + 0xcb8);
  pSVar24 = (SMBChapter *)(SuperMeatBoy + 0x90);
  if (*(ushort *)(self + 0xcb8) != 0) {
    uVar19 = 0;
    do {
      while( true ) {
        lVar23 = (uVar19 & 0xffff) * 0x58;
        lVar17 = *(long *)(self + 0xcc8) + lVar23;
        bVar3 = *(byte *)(lVar17 + 2);
        if ((((bVar3 & 1) != 0) || ((bVar3 & 4) != 0)) || ((bVar3 & 0x10) != 0)) break;
        lVar17 = SMBChapter__GetLevelInfo(pSVar24,uVar19,0,0);
        if (lVar17 != 0) {
          lVar11 = SMBChapter__GetLevelInfo(pSVar24,uVar19,*(uint32_t *)(self + 0x420),0);
          pfVar14 = (float *)GSMBChapterData__GetCurrentLevelData
                                       (SMBChapterData,uVar19,*(uint32_t *)(self + 0x420));
          pfVar12 = (float *)GSMBChapterData__GetCurrentLevelData(SMBChapterData,uVar19,0);
          if (*(int *)(lVar11 + 0x44) != -1) {
            plVar21 = (long *)(*(long *)(self + 0xc48) +
                              (ulong)(*(int *)(lVar11 + 0x44) - 1U & 0xffff) * 0x18);
            lVar11 = plVar21[1];
            if (((uint)pfVar14[1] & 8) == 0) {
              if (lVar11 != 0) {
                *(uint32_t *)(lVar11 + 0x24) = 0;
              }
              *(uint32_t *)(*plVar21 + 0x24) = 0;
              pbVar1 = (byte *)(*(long *)(self + 0xcc8) +
                                (ulong)((int)plVar21[2] - 1U & 0xffff) * 0x58 + 2);
              *pbVar1 = *pbVar1 & 0xfd;
            }
            else {
              if (lVar11 != 0) {
                *(uint32_t *)(lVar11 + 0x24) = 1;
              }
              *(uint32_t *)(*plVar21 + 0x24) = 1;
              pbVar1 = (byte *)(*(long *)(self + 0xcc8) +
                                (ulong)((int)plVar21[2] - 1U & 0xffff) * 0x58 + 2);
              *pbVar1 = *pbVar1 | 2;
            }
          }
          if (DAT_005c17f0 /* R:100000000.0f */ < *pfVar14 || DAT_005c17f0 /* R:100000000.0f */ == *pfVar14) {
            if (*(int *)(self + 0x420) == 0) {
              FlashLibraryInstance__GotoAndStop
                        (*(FlashLibraryInstance **)(*(long *)(self + 0xcc8) + 8 + lVar23),1);
            }
            else if (*(int *)(self + 0x420) == 1) {
              pFVar20 = *(FlashLibraryInstance **)(*(long *)(self + 0xcc8) + 0x10 + lVar23);
              if ((*pfVar12 < *(float *)(lVar17 + 0x40) || *pfVar12 == *(float *)(lVar17 + 0x40)) ||
                 (bAutoUnlock != 0)) {
                FlashLibraryInstance__GotoAndStop(pFVar20,1);
              }
              else {
                FlashLibraryInstance__GotoAndStop(pFVar20,3);
              }
            }
          }
          else if (*(int *)(self + 0x420) == 0) {
            FlashLibraryInstance__GotoAndStop
                      (*(FlashLibraryInstance **)(*(long *)(self + 0xcc8) + 8 + lVar23),2);
          }
          else {
            FlashLibraryInstance__GotoAndStop
                      (*(FlashLibraryInstance **)(*(long *)(self + 0xcc8) + 0x10 + lVar23),2);
          }
        }
LAB_004d0128:
        uVar8 = (uint)*(ushort *)(self + 0xcb8);
LAB_004d012f:
        uVar18 = (int)uVar19 + 1;
        uVar19 = (ulong)uVar18;
        if ((int)uVar8 <= (int)uVar18) goto LAB_004d06c0;
      }
      if ((bVar3 & 2) == 0) goto LAB_004d012f;
      if (*(int *)(self + 0x420) == 0) {
        plVar21 = *(long **)(lVar17 + 8);
        if (plVar21 != (long *)0x0) goto LAB_004d017f;
        goto LAB_004d012f;
      }
      plVar21 = *(long **)(lVar17 + 0x10);
      if (plVar21 != (long *)0x0) {
LAB_004d017f:
        (**(code **)(*plVar21 + 0x10))();
        goto LAB_004d0128;
      }
      uVar18 = (int)uVar19 + 1;
      uVar19 = (ulong)uVar18;
    } while ((int)uVar18 < (int)uVar8);
  }
LAB_004d06c0:
  if (*(long *)(self + 0x550) != 0) {
    uVar8 = GSMBChapterData__GetNumBandagesInChapter(SMBChapterData,0);
    uVar18 = GSMBChapterData__GetNumCollectedBandages(SMBChapterData);
    uVar13 = GetLocalizedText(0x17);
    FlashTextField__SetText
              (*(wchar_t **)(self + 0x550),L"%s: %i/%i",uVar13,(ulong)uVar18,(ulong)uVar8);
  }
  if (*(long *)(self + 0x558) != 0) {
    fVar25 = (float)GSMBChapterData__GetLevelPercentage(SMBChapterData,0);
    uVar19 = (ulong)fVar25;
    if ((float)(long)uVar19 < fVar25) {
      uVar19 = uVar19 + 1;
    }
    uVar13 = GetLocalizedText(0x18);
    FlashTextField__SetText
              (*(wchar_t **)(self + 0x558),L"%s: %i%s",uVar13,uVar19 & 0xffffffff,&DAT_005c6630 /* R:5.184804318001823e-44f */);
  }
  if (*(int *)(self + 0x420) == 0) {
    pFVar20 = *(FlashLibraryInstance **)(self + 0x500);
  }
  else {
    pFVar20 = *(FlashLibraryInstance **)(self + 0x508);
  }
  SwitchOutMenuButtons(*(FlashAnimationLibrary **)(self + 0x4f8),pFVar20);
  if (*(int *)(self + 0x420) == 0) {
    (**(code **)(**(long **)(self + 0x500) + 0x10))();
  }
  else {
    (**(code **)(**(long **)(self + 0x508) + 0x10))();
  }
  if (*(int *)(self + 0x418) == 9) {
    uVar8 = 0x14;
LAB_004d07c0:
    uVar19 = 0;
    do {
      lVar17 = (uVar19 & 0xffff) * 0x58;
      bVar3 = *(byte *)(*(long *)(self + 0xcc8) + 2 + lVar17);
      if (((bVar3 & 4) == 0) && ((bVar3 & 0x11) == 0)) {
        pfVar14 = (float *)GSMBChapterData__GetCurrentLevelData
                                     (SMBChapterData,uVar19,*(uint32_t *)(self + 0x420));
        if ((*(int *)(self + 0x41c) == 9) &&
           ((((LoadedPortalChapter == 0 ||
              (lVar23 = *(long *)(LoadedPortalChapter + (long)(int)uVar19 * 8), lVar23 == 0)) ||
             (*(long *)(lVar23 + 8) == 0)) || (*(int *)(lVar23 + 0x10) == 0)))) {
          lVar17 = *(long *)(*(long *)(self + 0xcc8) + 8 + lVar17);
          lVar23 = *(long *)(self + 0x5e0);
          *(uint32_t *)(lVar23 + 0x30) = *(uint32_t *)(lVar17 + 0x30);
          *(uint32_t *)(lVar23 + 0x34) = *(uint32_t *)(lVar17 + 0x34);
          *(uint32_t *)(lVar23 + 0x38) = *(uint32_t *)(lVar17 + 0x38);
          *(uint32_t *)(lVar23 + 0x3c) = *(uint32_t *)(lVar17 + 0x3c);
          *(uint32_t *)(*(long *)(self + 0x5e0) + 0x58) =
               *(uint32_t *)(*(long *)(self + 0x500) + 0x58);
          (**(code **)(**(long **)(self + 0x5e0) + 0x10))();
        }
        else {
          if (((uint)pfVar14[1] & 1) != 0) {
            if (*(int *)(self + 0x420) == 0) {
              lVar23 = *(long *)(*(long *)(self + 0xcc8) + 8 + lVar17);
            }
            else {
              lVar23 = *(long *)(*(long *)(self + 0xcc8) + 0x10 + lVar17);
            }
            lVar11 = *(long *)(self + 0x5d0);
            *(uint32_t *)(lVar11 + 0x30) = *(uint32_t *)(lVar23 + 0x30);
            *(uint32_t *)(lVar11 + 0x34) = *(uint32_t *)(lVar23 + 0x34);
            *(uint32_t *)(lVar11 + 0x38) = *(uint32_t *)(lVar23 + 0x38);
            *(uint32_t *)(lVar11 + 0x3c) = *(uint32_t *)(lVar23 + 0x3c);
            (**(code **)(**(long **)(self + 0x5d0) + 0x10))();
          }
          lVar23 = SMBChapter__GetLevelInfo(pSVar24,uVar19,*(uint32_t *)(self + 0x420),0);
          if (*pfVar14 <= *(float *)(lVar23 + 0x40) && *(float *)(lVar23 + 0x40) != *pfVar14) {
            if (*(int *)(self + 0x420) == 0) {
              lVar17 = *(long *)(*(long *)(self + 0xcc8) + 8 + lVar17);
              lVar23 = *(long *)(self + 0x5c8);
              *(uint32_t *)(lVar23 + 0x30) = *(uint32_t *)(lVar17 + 0x30);
              *(uint32_t *)(lVar23 + 0x34) = *(uint32_t *)(lVar17 + 0x34);
              *(uint32_t *)(lVar23 + 0x38) = *(uint32_t *)(lVar17 + 0x38);
              *(uint32_t *)(lVar23 + 0x3c) = *(uint32_t *)(lVar17 + 0x3c);
              *(uint32_t *)(*(long *)(self + 0x5c8) + 0x58) =
                   *(uint32_t *)(*(long *)(self + 0x500) + 0x58);
            }
            else {
              lVar17 = *(long *)(*(long *)(self + 0xcc8) + 0x10 + lVar17);
              lVar23 = *(long *)(self + 0x5c8);
              *(uint32_t *)(lVar23 + 0x30) = *(uint32_t *)(lVar17 + 0x30);
              *(uint32_t *)(lVar23 + 0x34) = *(uint32_t *)(lVar17 + 0x34);
              *(uint32_t *)(lVar23 + 0x38) = *(uint32_t *)(lVar17 + 0x38);
              *(uint32_t *)(lVar23 + 0x3c) = *(uint32_t *)(lVar17 + 0x3c);
              *(uint32_t *)(*(long *)(self + 0x5c8) + 0x58) =
                   *(uint32_t *)(*(long *)(self + 0x508) + 0x58);
            }
            (**(code **)(**(long **)(self + 0x5c8) + 0x10))();
          }
        }
      }
      uVar18 = (int)uVar19 + 1;
      uVar19 = (ulong)uVar18;
    } while ((int)uVar18 < (int)uVar8);
  }
  else {
    uVar8 = (uint)*(ushort *)(self + 0xcb8);
    if (*(ushort *)(self + 0xcb8) != 0) goto LAB_004d07c0;
  }
  iVar9 = GSMBChapterData__IsGlitchDefeated(SMBChapterData);
  if (((iVar9 == 1) && (lVar17 = *(long *)(self + 0x790), lVar17 != 0)) &&
     (*(int *)(self + 0x420) == 0)) {
    lVar23 = *(long *)(self + 0x5c8);
    *(uint32_t *)(lVar23 + 0x30) = *(uint32_t *)(lVar17 + 0x30);
    *(uint32_t *)(lVar23 + 0x34) = *(uint32_t *)(lVar17 + 0x34);
    *(uint32_t *)(lVar23 + 0x38) = *(uint32_t *)(lVar17 + 0x38);
    *(uint32_t *)(lVar23 + 0x3c) = *(uint32_t *)(lVar17 + 0x3c);
    *(uint32_t *)(*(long *)(self + 0x5c8) + 0x58) =
         *(uint32_t *)(*(long *)(self + 0x500) + 0x58);
    (**(code **)(**(long **)(self + 0x5c8) + 0x10))();
  }
  iVar9 = *(int *)(self + 0xd04);
  if (iVar9 == 2) {
    lVar17 = *(long *)(*(long *)(self + 0xce0) + 8);
    if ((lVar17 != 0) || (lVar17 = *(long *)(*(long *)(self + 0xce0) + 0x10), lVar17 != 0)) {
      lVar23 = *(long *)(self + 0x4f0);
      fVar25 = (float)*(uint64_t *)(lVar17 + 0x38) + _DAT_0081bf28 /* R:2.2420775429197073e-44f */;
      fVar26 = (float)((ulong)*(uint64_t *)(lVar17 + 0x38) >> 0x20) + _DAT_0081bf2c /* R:0.0f */;
      *(ulong *)(lVar23 + 0x30) =
           CONCAT44((float)((ulong)*(uint64_t *)(lVar17 + 0x30) >> 0x20) + _DAT_0081bf24 /* R:0.0f */,
                    (float)*(uint64_t *)(lVar17 + 0x30) + vChapterMenuMeatBoyOffset);
      *(ulong *)(lVar23 + 0x38) = CONCAT44(fVar26,fVar25);
    }
    (**(code **)(**(long **)(self + 0x4f0) + 0x10))();
    iVar9 = FlashLibraryInstance__IsPlaying(*(FlashLibraryInstance **)(self + 0x4f0));
    if (iVar9 != 0) goto LAB_004d0a2a;
LAB_004d0c66:
    *(uint32_t *)(self + 0xd04) = 1;
  }
  else {
    if ((((iVar9 == 6) || (iVar9 == 1)) || (iVar9 == 0x14)) || ((iVar9 == 0x17 || (iVar9 == 0x16))))
    {
      (**(code **)(**(long **)(self + 0x4e0) + 0x10))();
    }
    else {
      lVar17 = *(long *)(self + 0x4e8);
      uVar13 = *(uint64_t *)(*(long *)(*(long *)(self + 0xce0) + 8) + 0x30);
      uVar2 = *(uint64_t *)(*(long *)(*(long *)(self + 0xce0) + 8) + 0x38);
      fVar25 = (float)uVar2 + _DAT_0081bf28 /* R:2.2420775429197073e-44f */;
      fVar26 = (float)((ulong)uVar2 >> 0x20) + _DAT_0081bf2c /* R:0.0f */;
      *(ulong *)(lVar17 + 0x30) =
           CONCAT44((float)((ulong)uVar13 >> 0x20) + _DAT_0081bf24 /* R:0.0f */,
                    (float)uVar13 + vChapterMenuMeatBoyOffset);
      *(ulong *)(lVar17 + 0x38) = CONCAT44(fVar26,fVar25);
      (**(code **)(**(long **)(self + 0x4e8) + 0x10))();
    }
LAB_004d0a2a:
    if (*(int *)(self + 0xd04) == 0x17) {
      if (bMenuTransitioning == 0) {
        pFVar20 = *(FlashLibraryInstance **)(self + 0x770);
        if ((*(int *)(self + 0x420) == 1) &&
           (*(FlashLibraryInstance **)(self + 0x788) != (FlashLibraryInstance *)0x0)) {
          pFVar20 = *(FlashLibraryInstance **)(self + 0x788);
        }
        lVar17 = *(long *)(self + 0x780);
        *(uint32_t *)(lVar17 + 0x30) = *(uint32_t *)(pFVar20 + 0x30);
        *(uint32_t *)(lVar17 + 0x34) = *(uint32_t *)(pFVar20 + 0x34);
        *(uint32_t *)(lVar17 + 0x38) = *(uint32_t *)(pFVar20 + 0x38);
        *(uint32_t *)(lVar17 + 0x3c) = *(uint32_t *)(pFVar20 + 0x3c);
        Vector2__operator_assign((Vector2 *)(*(long *)(self + 0x780) + 0x40),(Vector2 *)(pFVar20 + 0x40));
        *(uint32_t *)(pFVar20 + 0x24) = 0;
        (**(code **)(**(long **)(self + 0x780) + 0x10))();
        iVar9 = FlashLibraryInstance__IsPlaying(*(FlashLibraryInstance **)(self + 0x780));
        if (iVar9 == 0) {
          *(uint32_t *)(pFVar20 + 0x24) = 1;
          FlashLibraryInstance__GotoAndStop(pFVar20,3);
          *(uint32_t *)(self + 0xd04) = 1;
          iVar9 = *(int *)(self + 0x41c) + 1;
          while (iVar10 = GSMBChapterData__IsChapterUnlocked(), iVar10 == 0) {
            iVar10 = iVar9 + 1;
            if ((iVar10 == 0) || (iVar10 == 8)) {
              iVar10 = iVar9 + 2;
            }
            iVar9 = 1;
            if (iVar10 < 10) {
              iVar9 = iVar10;
            }
          }
          *(int *)(self + 0x41c) = iVar9;
          SMBMenuEnterWorld((tagButtonProps *)0x0,(void *)0x0);
          bBossJustDefeated = 0;
        }
      }
    }
    else if ((*(int *)(self + 0xd04) == 0x16) && (bMenuTransitioning == 0)) {
      pFVar20 = *(FlashLibraryInstance **)(self + 0x770);
      if ((*(int *)(self + 0x420) == 1) &&
         (*(FlashLibraryInstance **)(self + 0x788) != (FlashLibraryInstance *)0x0)) {
        pFVar20 = *(FlashLibraryInstance **)(self + 0x788);
      }
      lVar17 = *(long *)(self + 0x778);
      *(uint32_t *)(lVar17 + 0x30) = *(uint32_t *)(pFVar20 + 0x30);
      *(uint32_t *)(lVar17 + 0x34) = *(uint32_t *)(pFVar20 + 0x34);
      *(uint32_t *)(lVar17 + 0x38) = *(uint32_t *)(pFVar20 + 0x38);
      *(uint32_t *)(lVar17 + 0x3c) = *(uint32_t *)(pFVar20 + 0x3c);
      Vector2__operator_assign((Vector2 *)(*(long *)(self + 0x778) + 0x40),(Vector2 *)(pFVar20 + 0x40));
      *(uint32_t *)(pFVar20 + 0x24) = 0;
      (**(code **)(**(long **)(self + 0x778) + 0x10))();
      iVar9 = FlashLibraryInstance__IsPlaying(*(FlashLibraryInstance **)(self + 0x778));
      if (iVar9 == 0) {
        *(uint32_t *)(pFVar20 + 0x24) = 1;
        bBossJustUnlocked = 0;
        FlashLibraryInstance__GotoAndStop(pFVar20,2);
        goto LAB_004d0c66;
      }
    }
  }
  if (*(long **)(self + 0x510) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x510) + 0x10))();
  }
  if (*(int *)(self + 0x418) == 9) {
    SMBLevelPortal__Render(SuperMeatBoyPortal);
  }
LAB_004d0398:
  if (*(long **)(self + 0x17e8) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x17e8) + 0x40))();
  }
  TAudio__EnableDirectionalAudio(Audio);
  RegisterAudioPosition((FPUVector *)0x0);
  AutoLockSection__AutoLockSection__005b59d0(local_48);
  return;
}

/* ======================================================================
 * GSMBMenu__ShowCharMenu  (Ghidra `ShowCharMenu` @ 004d14f0)
 * Signature: uint8_t __thiscall ShowCharMenu(GSMBMenu * self, int arg1)
 * Class: GSMBMenu
 * Calls: `FlashLibraryInstance__Reset`, `GSMBChapterData__GetTotalNumBandagesCollected`, `Joystick__AddButtonCallback`, `Joystick__AddPOVCallback`, `SMBMenuMoveLeftChar`, `SMBMenuMoveRightChar`, `SMBMenuSelectChar`, `TInput__RegisterCode`, `TKeyboard__AddKeyCallback`, `TPlayer__GetJoystick`
 * Called by: (none)
 */
/* GSMBMenu__ShowCharMenu(int) */

void __thiscall GSMBMenu__ShowCharMenu(GSMBMenu *self,int arg1)

{
  ushort uVar1;
  uint uVar2;
  Joystick *pJVar3;
  long lVar4;
  
  RemoveControls();
  pJVar3 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddPOVCallback(pJVar3,3,SMBMenuMoveRightChar,0);
  pJVar3 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddPOVCallback(pJVar3,1,SMBMenuMoveLeftChar,0);
  pJVar3 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddButtonCallback(pJVar3,0,SMBMenuSelectChar,0);
  if (Keyboard != (TKeyboard *)0x0) {
    TKeyboard__AddKeyCallback(Keyboard,0x41,SMBMenuMoveRightChar,0);
    TKeyboard__AddKeyCallback(Keyboard,0x6d,SMBMenuMoveLeftChar,0);
    TKeyboard__AddKeyCallback(Keyboard,0x76,SMBMenuSelectChar,0);
    TKeyboard__AddKeyCallback(Keyboard,0x6c,SMBMenuSelectChar,0);
  }
  TInput__RegisterCode(Input,(tagCheatCode *)playAsBrownie);
  TInput__RegisterCode(Input,(tagCheatCode *)playAsDrFetus);
  TInput__RegisterCode(Input,(tagCheatCode *)playAsTofuBoy);
  TInput__RegisterCode(Input,(tagCheatCode *)playAsWOG);
  TInput__RegisterCode(Input,(tagCheatCode *)playAsTim);
  *(uint32_t *)(self + 0xd04) = 4;
  if (arg1 == 0) {
    FlashLibraryInstance__Reset(*(FlashLibraryInstance **)(self + 0x670));
  }
  if (*(long *)(self + 0x758) != 0) {
    uVar2 = GSMBChapterData__GetTotalNumBandagesCollected(SMBChapterData);
    FlashTextField__SetText(*(char **)(self + 0x758),&DAT_005c8bf9 /* R:u32=1996515621 */,(ulong)uVar2);
  }
  *(uint16_t *)(self + 0x1818) = 0;
  if ((*(int *)(self + 0x1820) == 1) && (uVar1 = *(ushort *)(self + 0x181a), uVar1 != 0)) {
    lVar4 = 0;
    do {
      *(uint16_t *)(*(long *)(self + 0x1830) + lVar4) = 0xffff;
      lVar4 = lVar4 + 2;
    } while (lVar4 != (ulong)(uVar1 - 1 & 0xffff) * 2 + 2);
    return;
  }
  return;
}

/* ======================================================================
 * GSMBMenu__HideChapterMap  (Ghidra `HideChapterMap` @ 004d16d0)
 * Signature: uint8_t __thiscall HideChapterMap(GSMBMenu * self)
 * Class: GSMBMenu
 * Calls: `SMBChapter__StopChapterMenuMusic`
 * Called by: `GSuperMeatBoy__HideChapterMap`
 */
/* GSMBMenu__HideChapterMap() */

void __thiscall GSMBMenu__HideChapterMap(GSMBMenu *self)

{
  UnloadChapterMenu(SMBMenu);
  RenderLayers__RemoveLayer((RenderLayer *)self);
  RemoveControls();
  *(uint32_t *)(self + 0xd04) = 0;
  SMBChapter__StopChapterMenuMusic((SMBChapter *)(SuperMeatBoy + 0x90));
  return;
}

/* ======================================================================
 * GSMBMenu__RestoreWorldMapControls  (Ghidra `RestoreWorldMapControls` @ 004d1c80)
 * Signature: uint8_t __stdcall RestoreWorldMapControls(void)
 * Class: GSMBMenu
 * Calls: `Joystick__AddButtonCallback`, `Joystick__AddPOVCallback`, `SMBMenuChapterSelect`, `SMBMenuLoadNextWorld`, `SMBMenuLoadPrevWorld`, `SMBWorldMapBackPress`, `TKeyboard__AddKeyCallback`, `TPlayer__GetJoystick`
 * Called by: `SMBMenuWorldNextTransEnd`
 */
/* GSMBMenu__RestoreWorldMapControls() */

void GSMBMenu__RestoreWorldMapControls(void)

{
  Joystick *pJVar1;
  
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddButtonCallback(pJVar1,0,SMBMenuChapterSelect,0);
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddButtonCallback(pJVar1,1,SMBWorldMapBackPress,0);
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddPOVCallback(pJVar1,3,SMBMenuLoadPrevWorld,0);
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddPOVCallback(pJVar1,1,SMBMenuLoadNextWorld,0);
  if (Keyboard != (TKeyboard *)0x0) {
    TKeyboard__AddKeyCallback(Keyboard,0x76,SMBMenuChapterSelect,0);
    TKeyboard__AddKeyCallback(Keyboard,0x6c,SMBMenuChapterSelect,0);
    TKeyboard__AddKeyCallback(Keyboard,0x71,SMBMenuChapterSelect,0);
    TKeyboard__AddKeyCallback(Keyboard,0x41,SMBMenuLoadPrevWorld,0);
    TKeyboard__AddKeyCallback(Keyboard,0x6d,SMBMenuLoadNextWorld,0);
    TKeyboard__AddKeyCallback(Keyboard,0x23,SMBWorldMapBackPress,0);
    return;
  }
  return;
}

/* ======================================================================
 * GSMBMenu__ShowWorldMap  (Ghidra `ShowWorldMap` @ 004d1dd0)
 * Signature: uint8_t __thiscall ShowWorldMap(GSMBMenu * self, int arg1)
 * Class: GSMBMenu
 * Calls: `LoadWorldMenu`, `TAudioCue__Play`
 * Called by: `GSuperMeatBoy__ShowWorldMap`, `GSuperMeatBoy__SwitchGameMode`
 */
/* GSMBMenu__ShowWorldMap(int) */

void __thiscall GSMBMenu__ShowWorldMap(GSMBMenu *self,int arg1)

{
  if (arg1 == 0) {
    bBossJustDefeated = 0;
    bBossJustUnlocked = 0;
    if (*(long *)(self + 0x428) == 0) {
      LoadWorldMenu(self,*(uint32_t *)(self + 0x41c),0);
    }
    RenderLayers__AddLayer((RenderLayer *)self);
    TAudioCue__Play(*(TAudioCue **)(self + 0xc60),GLOBALMUSICVOLUME,0,
                    (TAudioInstance *)(self + 0xc68));
    SetWorldMenuStats(self);
  }
  RestoreWorldMapControls();
  *(uint32_t *)(self + 0xd04) = 3;
  return;
}

/* ======================================================================
 * GSMBMenu__RemoveWorldMapControls  (Ghidra `RemoveWorldMapControls` @ 004d1e50)
 * Signature: uint8_t __stdcall RemoveWorldMapControls(void)
 * Class: GSMBMenu
 * Calls: `Joystick__AddButtonCallback`, `Joystick__AddPOVCallback`, `TKeyboard__AddKeyCallback`, `TPlayer__GetJoystick`
 * Called by: `SMBMenuLoadNextWorld`, `SMBMenuLoadPrevWorld`
 */
/* GSMBMenu__RemoveWorldMapControls() */

void GSMBMenu__RemoveWorldMapControls(void)

{
  Joystick *pJVar1;
  
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddButtonCallback(pJVar1,0,0,0);
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddButtonCallback(pJVar1,1,0,0);
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddPOVCallback(pJVar1,3,0,0);
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddPOVCallback(pJVar1,1,0,0);
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddPOVCallback(pJVar1,0,0,0);
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddPOVCallback(pJVar1,2,0,0);
  if (Keyboard != (TKeyboard *)0x0) {
    TKeyboard__AddKeyCallback(Keyboard,0x76,0,0);
    TKeyboard__AddKeyCallback(Keyboard,0x6c,0,0);
    TKeyboard__AddKeyCallback(Keyboard,0x71,0,0);
    TKeyboard__AddKeyCallback(Keyboard,0x41,0,0);
    TKeyboard__AddKeyCallback(Keyboard,0x6d,0,0);
    TKeyboard__AddKeyCallback(Keyboard,0x23,0,0);
    return;
  }
  return;
}

/* ======================================================================
 * GSMBMenu__HideWorldMap  (Ghidra `HideWorldMap` @ 004d1f90)
 * Signature: uint8_t __thiscall HideWorldMap(GSMBMenu * self)
 * Class: GSMBMenu
 * Calls: `TAudioInstance__Stop`
 * Called by: `GSuperMeatBoy__HideWorldMap`
 */
/* GSMBMenu__HideWorldMap() */

void __thiscall GSMBMenu__HideWorldMap(GSMBMenu *self)

{
  if (hChapterLoadThreadHandle == 0) {
    UnloadWorldMenu(self);
  }
  RenderLayers__RemoveLayer((RenderLayer *)self);
  TAudioInstance__Stop((TAudioInstance *)(self + 0xc68));
  RemoveWorldMapControls();
  *(uint32_t *)(self + 0xd04) = 0;
  return;
}

/* ======================================================================
 * GSMBMenu__GetCurrLevelName  (Ghidra `GetCurrLevelName` @ 004d2020)
 * Signature: uint8_t __thiscall GetCurrLevelName(GSMBMenu * self)
 * Class: GSMBMenu
 * Calls: `SMBChapter__GetLevelInfo`, `Sprint`, `StringToInt`, `memcpy`, `strlen`
 * Called by: `SMBLeaderBoardMenu__ReadData`
 */
/* GSMBMenu__GetCurrLevelName() */

uint64_t __thiscall GSMBMenu__GetCurrLevelName(GSMBMenu *self)

{
  ulong __n;
  char cVar1;
  int iVar2;
  bool bVar3;
  uint32_t uVar4;
  long lVar5;
  char *pcVar6;
  size_t sVar7;
  char *__dest;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  
  lVar5 = SMBChapter__GetLevelInfo
                    ((SMBChapter *)(SuperMeatBoy + 0x90),*(uint32_t *)(self + 0xd00),
                     *(uint32_t *)(self + 0x420),0);
  iVar2 = *(int *)(self + 0xd00);
  uVar4 = *(uint32_t *)(self + 0x424);
  iVar9 = iVar2 + 1;
  if (*(int *)(self + 0x418) == 8) {
    iVar9 = -1;
    uVar4 = 0xffffffff;
    if ((iVar2 != 0x62) && (iVar2 != 99)) {
      pcVar6 = (char *)SMBChapter__GetLevelInfo
                                 ((SMBChapter *)(SuperMeatBoy + 0x90),iVar2,
                                  *(uint32_t *)(self + 0x420),0);
      sVar7 = strlen(pcVar6);
      __n = sVar7 + 1;
      __dest = operator_new__(__n);
      if (pcVar6 != __dest) {
        memcpy(__dest,pcVar6,__n);
      }
      uVar10 = 0;
      if (0 < (int)__n) {
        pcVar6 = __dest;
        uVar8 = 1;
        do {
          cVar1 = *pcVar6;
          if (cVar1 == '-') {
            *pcVar6 = '\0';
            uVar10 = (ulong)uVar8;
          }
          else if ((cVar1 == '.') || (cVar1 == 'x')) {
            *pcVar6 = '\0';
          }
          pcVar6 = pcVar6 + 1;
          bVar3 = (int)uVar8 < (int)__n;
          uVar8 = uVar8 + 1;
        } while (bVar3);
        uVar10 = (ulong)(int)uVar10;
      }
      uVar4 = 9;
      if ((*__dest != 'i') && (uVar4 = 7, *__dest != 'b')) {
        uVar4 = StringToInt(__dest);
      }
      iVar9 = StringToInt(__dest + uVar10);
      operator_delete__(__dest);
    }
  }
  if (*(int *)(self + 0x420) == 0) {
    if (*(int *)(self + 0x418) == 9) {
      Sprint("I-%i %s",strLargeString,iVar9,lVar5 + 0x20);
    }
    else {
      Sprint("%i-%i %s",strLargeString,uVar4,iVar9,lVar5 + 0x20);
    }
  }
  else {
    Sprint("%i-%ix %s",strLargeString,uVar4,iVar9,lVar5 + 0x20);
  }
  return strLargeString;
}

/* ======================================================================
 * GSMBMenu__SetLevelDisplay  (Ghidra `SetLevelDisplay` @ 004d2210)
 * Signature: uint8_t __thiscall SetLevelDisplay(GSMBMenu * self)
 * Class: GSMBMenu
 * Calls: `FlashLibraryInstance__GotoAndStop`, `GSMBChapterData__GetCurrentLevelData`, `GetLocalizedText`, `SMBChapter__GetLevelInfo`
 * Called by: (none)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GSMBMenu__SetLevelDisplay() */

void __thiscall GSMBMenu__SetLevelDisplay(GSMBMenu *self)

{
  byte bVar1;
  bool bVar2;
  ushort uVar3;
  long lVar4;
  float *pfVar5;
  uint64_t uVar6;
  uint uVar7;
  int iVar8;
  FlashLibraryInstance *pFVar9;
  float fVar10;
  
  uVar3 = (*(ushort **)(self + 0xce0))[1];
  if (((uVar3 & 4) != 0) || (*(int *)(self + 0xd00) == 99)) {
    FlashTextField__SetText(*(char **)(self + 0x530),SuperMeatBoy + 0x2d8);
    FlashLibraryInstance__GotoAndStop(*(FlashLibraryInstance **)(self + 0x5e8),2);
    if (*(FlashLibraryInstance **)(self + 0x5f0) != (FlashLibraryInstance *)0x0) {
      FlashLibraryInstance__GotoAndStop(*(FlashLibraryInstance **)(self + 0x5f0),2);
    }
    FlashTextField__SetText(*(wchar_t **)(self + 0x528),&DAT_005c6634 /* R:0.0f */);
    FlashTextField__SetText(*(wchar_t **)(self + 0x518),&DAT_005c6634 /* R:0.0f */);
    if (*(long *)(self + 0x580) != 0) {
      *(uint32_t *)(*(long *)(self + 0x580) + 0x20) = 0xffffffff;
    }
    if (*(long *)(self + 0x588) != 0) {
      *(uint32_t *)(*(long *)(self + 0x588) + 0x20) = 0xffffffff;
    }
    if (*(long *)(self + 0x590) != 0) {
      *(uint32_t *)(*(long *)(self + 0x590) + 0x20) = 0xffffffff;
    }
    if (*(long *)(self + 0x598) != 0) {
      *(uint32_t *)(*(long *)(self + 0x598) + 0x20) = 0xffffffff;
    }
    if (*(long *)(self + 0x5a0) != 0) {
      *(uint32_t *)(*(long *)(self + 0x5a0) + 0x20) = 0xffffffff;
    }
    if (*(long *)(self + 0x5a8) != 0) {
      *(uint32_t *)(*(long *)(self + 0x5a8) + 0x20) = 0xffffffff;
    }
    if (*(long *)(self + 0x5b0) != 0) {
      *(uint32_t *)(*(long *)(self + 0x5b0) + 0x20) = 0xffffffff;
    }
    if (*(long *)(self + 0x5b8) != 0) {
      *(uint32_t *)(*(long *)(self + 0x5b8) + 0x20) = 0xffffffff;
    }
    FlashTextField__SetText(*(wchar_t **)(self + 0x548),&DAT_005c6634 /* R:0.0f */);
    *(uint32_t *)(*(long *)(self + 0x540) + 0x20) = 0;
    *(uint32_t *)(*(long *)(self + 0x538) + 0x20) = 0;
    return;
  }
  if ((uVar3 & 0x11) != 0) {
    if ((uVar3 & 0x10) == 0) {
      FlashTextField__SetText
                (*(char **)(self + 0x530),
                 (ulong)**(ushort **)(self + 0xce0) * 0xb8 + *(long *)(SuperMeatBoy + 0x278) + 0x48)
      ;
    }
    else {
      FlashTextField__SetText(*(char **)(self + 0x530),*(long *)(SuperMeatBoy + 0x278) + 0x328);
    }
    iVar8 = 0;
    if ((*(byte *)(*(short **)(self + 0xce0) + 1) & 0x10) == 0) {
      lVar4 = GSMBChapterData__GetCurrentLevelData(SMBChapterData,0,**(short **)(self + 0xce0) + 2);
      bVar1 = *(byte *)(lVar4 + 4);
      lVar4 = GSMBChapterData__GetCurrentLevelData(SMBChapterData,1,**(short **)(self + 0xce0) + 2);
      uVar7 = (uint)((bVar1 & 1) != 0);
      if ((*(byte *)(lVar4 + 4) & 1) != 0) {
        uVar7 = uVar7 + 1;
      }
      lVar4 = GSMBChapterData__GetCurrentLevelData(SMBChapterData,2,**(short **)(self + 0xce0) + 2);
      iVar8 = (uVar7 + 1) - (uint)((*(uint *)(lVar4 + 4) & 1) == 0);
    }
    if (*(int *)(self + 0x420) == 0) {
      pFVar9 = *(FlashLibraryInstance **)(self + 0x5e8);
    }
    else {
      pFVar9 = *(FlashLibraryInstance **)(self + 0x5f0);
    }
    if (iVar8 == 0) {
      FlashLibraryInstance__GotoAndStop(pFVar9,2);
    }
    else if (iVar8 == 1) {
      FlashLibraryInstance__GotoAndStop(pFVar9,1);
    }
    else {
      FlashLibraryInstance__GotoAndStop(pFVar9,3);
    }
    FlashTextField__SetText(*(wchar_t **)(self + 0x528),&DAT_005c6634 /* R:0.0f */);
    FlashTextField__SetText(*(wchar_t **)(self + 0x518),&DAT_005c6634 /* R:0.0f */);
    FlashTextField__SetText(*(wchar_t **)(self + 0x548),&DAT_005c6634 /* R:0.0f */);
    *(uint32_t *)(*(long *)(self + 0x540) + 0x20) = 0;
    *(uint32_t *)(*(long *)(self + 0x538) + 0x20) = 0;
    if (*(long *)(self + 0x580) != 0) {
      *(uint32_t *)(*(long *)(self + 0x580) + 0x20) = 0xffffffff;
    }
    if (*(long *)(self + 0x588) != 0) {
      *(uint32_t *)(*(long *)(self + 0x588) + 0x20) = 0xffffffff;
    }
    if (*(long *)(self + 0x590) != 0) {
      *(uint32_t *)(*(long *)(self + 0x590) + 0x20) = 0xffffffff;
    }
    if (*(long *)(self + 0x598) != 0) {
      *(uint32_t *)(*(long *)(self + 0x598) + 0x20) = 0xffffffff;
    }
    if (*(long *)(self + 0x5a0) != 0) {
      *(uint32_t *)(*(long *)(self + 0x5a0) + 0x20) = 0xffffffff;
    }
    if (*(long *)(self + 0x5a8) != 0) {
      *(uint32_t *)(*(long *)(self + 0x5a8) + 0x20) = 0xffffffff;
    }
    if (*(long *)(self + 0x5b0) != 0) {
      *(uint32_t *)(*(long *)(self + 0x5b0) + 0x20) = 0xffffffff;
    }
    if (*(long *)(self + 0x5b8) != 0) {
      *(uint32_t *)(*(long *)(self + 0x5b8) + 0x20) = 0xffffffff;
      return;
    }
    return;
  }
  if ((*(int *)(self + 0x418) == 9) && (LoadedPortalChapter == 0)) {
    *(uint32_t *)(*(long *)(self + 0x538) + 0x20) = 0;
    *(uint32_t *)(*(long *)(self + 0x540) + 0x20) = 0;
    FlashTextField__SetText(*(wchar_t **)(self + 0x548),&DAT_005c6634 /* R:0.0f */);
    FlashLibraryInstance__GotoAndStop(*(FlashLibraryInstance **)(self + 0x5e8),2);
  }
  else {
    lVar4 = SMBChapter__GetLevelInfo
                      ((SMBChapter *)(SuperMeatBoy + 0x90),*(int *)(self + 0xd00),
                       *(uint32_t *)(self + 0x420),0);
    pfVar5 = (float *)GSMBChapterData__GetCurrentLevelData
                                (SMBChapterData,*(uint32_t *)(self + 0xd00),0xb);
    *(uint32_t *)(*(long *)(self + 0x538) + 0x20) = 1;
    *(uint32_t *)(*(long *)(self + 0x540) + 0x20) = 1;
    if (*(long *)(self + 0x590) != 0) {
      *(uint32_t *)(*(long *)(self + 0x590) + 0x20) = *(uint32_t *)(self + 0x570);
    }
    if (*(long *)(self + 0x598) != 0) {
      *(uint32_t *)(*(long *)(self + 0x598) + 0x20) = *(uint32_t *)(self + 0x570);
    }
    if (*(long *)(self + 0x5a0) != 0) {
      *(uint32_t *)(*(long *)(self + 0x5a0) + 0x20) = *(uint32_t *)(self + 0x574);
    }
    if (*(long *)(self + 0x5a8) != 0) {
      *(uint32_t *)(*(long *)(self + 0x5a8) + 0x20) = *(uint32_t *)(self + 0x574);
    }
    if (*(long *)(self + 0x5b0) != 0) {
      *(uint32_t *)(*(long *)(self + 0x5b0) + 0x20) = *(uint32_t *)(self + 0x578);
    }
    if (*(long *)(self + 0x5b8) != 0) {
      *(uint32_t *)(*(long *)(self + 0x5b8) + 0x20) = *(uint32_t *)(self + 0x578);
    }
    uVar6 = GetLocalizedText(0x1d);
    FlashTextField__SetText(*(wchar_t **)(self + 0x518),uVar6);
    uVar6 = GetCurrLevelName(self);
    FlashTextField__SetText(*(char **)(self + 0x530),uVar6);
    fVar10 = *pfVar5;
    if (DAT_005c01c4 /* R:1000.0f */ < fVar10) {
      uVar6 = GetLocalizedText(0x4a);
      FlashTextField__SetText(*(wchar_t **)(self + 0x540),uVar6);
    }
    else {
      if (_DAT_005c6bf0 /* R:999.989990234375f */ <= fVar10) {
        fVar10 = _DAT_005c6bf0 /* R:999.989990234375f */;
      }
      FlashTextField__SetText(*(wchar_t **)(self + 0x540),(double)fVar10,&DAT_005c07c4 /* R:5.184804318001823e-44f */);
    }
    FlashTextField__SetText
              (*(wchar_t **)(self + 0x538),(double)*(float *)(lVar4 + 0x40),&DAT_005c07c4 /* R:5.184804318001823e-44f */);
    bVar2 = *(float *)(lVar4 + 0x40) < *pfVar5;
    if (bVar2) {
      FlashTextField__SetText(*(wchar_t **)(self + 0x548),&DAT_005c6634 /* R:0.0f */);
    }
    else {
      FlashTextField__SetText(*(wchar_t **)(self + 0x548),&DAT_005c6638 /* R:9.10844001811131e-44f */);
    }
    if (*(int *)(SuperMeatBoy + 0x290) != 9) {
      if (bVar2) {
        if (*(int *)(self + 0x420) == 0) {
          FlashTextField__SetText(*(wchar_t **)(self + 0x528),&DAT_005c6634 /* R:0.0f */);
          *(uint32_t *)(*(long *)(self + 0x580) + 0x20) = 0xffffffff;
        }
        else {
LAB_004d2898:
          uVar6 = GetLocalizedText(0x2a);
          FlashTextField__SetText(*(wchar_t **)(self + 0x528),uVar6);
        }
      }
      else {
        if (*(int *)(self + 0x420) != 0) goto LAB_004d2898;
        uVar6 = GetLocalizedText(0x2b);
        FlashTextField__SetText(*(wchar_t **)(self + 0x528),uVar6);
        *(uint32_t *)(*(long *)(self + 0x580) + 0x20) = *(uint32_t *)(self + 0x568);
      }
      *(uint32_t *)(*(long *)(self + 0x588) + 0x20) = *(uint32_t *)(self + 0x568);
    }
    if (((uint)pfVar5[1] & 1) != 0) {
      if (*(int *)(self + 0x420) == 0) {
        pFVar9 = *(FlashLibraryInstance **)(self + 0x5e8);
      }
      else {
        pFVar9 = *(FlashLibraryInstance **)(self + 0x5f0);
      }
      FlashLibraryInstance__GotoAndStop(pFVar9,1);
      return;
    }
    if (*(int *)(self + 0x420) == 0) {
      pFVar9 = *(FlashLibraryInstance **)(self + 0x5e8);
      goto LAB_004d27f5;
    }
  }
  pFVar9 = *(FlashLibraryInstance **)(self + 0x5f0);
LAB_004d27f5:
  FlashLibraryInstance__GotoAndStop(pFVar9,2);
  return;
}

/* ======================================================================
 * GSMBMenu__MoveToRightLevel  (Ghidra `MoveToRightLevel` @ 004d2910)
 * Signature: uint8_t __stdcall MoveToRightLevel(void)
 * Class: GSMBMenu
 * Calls: `SetupMenuIconTween`
 * Called by: `SMBMenuMoveRightLevel`
 */
/* GSMBMenu__MoveToRightLevel() */

void GSMBMenu__MoveToRightLevel(void)

{
  short *psVar1;
  long lVar2;
  long in_RAX;
  long in_RDX;
  GSMBMenu *in_RDI;
  uint64_t local_28;
  uint64_t local_20;
  uint64_t local_18;
  uint64_t local_10;
  
  if (((*(int *)(in_RDI + 0xd04) != 1) || (bMenuTransitioning == 1)) ||
     (*(int *)(in_RDI + 0x4c4) != 0)) {
    return;
  }
  if (*(int *)(in_RDI + 0x420) == 0) {
    psVar1 = *(short **)(*(long *)(in_RDI + 0xce0) + 0x30);
    if (psVar1 != (short *)0x0) {
      if (*(int *)(in_RDI + 0x418) == 9) {
        if (LoadedPortalChapter != 0) {
          lVar2 = *(long *)(LoadedPortalChapter + (long)*psVar1 * 8);
          if (lVar2 == 0) {
            return;
          }
          in_RAX = *(long *)(lVar2 + 8);
        }
        if (in_RAX == 0) {
          return;
        }
      }
      if ((*(byte *)(psVar1 + 1) & 3) == 1) {
        return;
      }
      if ((*(byte *)(psVar1 + 1) & 0xc) == 4) {
        return;
      }
      lVar2 = *(long *)(*(long *)(in_RDI + 0xce0) + 8);
      local_28 = *(uint64_t *)(lVar2 + 0x30);
      local_20 = *(uint64_t *)(lVar2 + 0x38);
      if ((*(byte *)(psVar1 + 1) & 1) == 0) {
        *(int *)(in_RDI + 0xd00) = (int)*psVar1;
      }
      *(short **)(in_RDI + 0xce0) = psVar1;
      SetupMenuIconTween((FPUVector *)&local_28,(FPUVector *)(*(long *)(psVar1 + 4) + 0x30),
                         (Basic *)(in_RDI + 0x478));
    }
  }
  else if (*(int *)(in_RDI + 0x420) == 1) {
    psVar1 = *(short **)(*(long *)(in_RDI + 0xce0) + 0x50);
    if (psVar1 != (short *)0x0) {
      if (*(int *)(in_RDI + 0x418) == 9) {
        if (LoadedPortalChapter != 0) {
          lVar2 = *(long *)(LoadedPortalChapter + (long)*psVar1 * 8);
          if (lVar2 == 0) {
            return;
          }
          in_RDX = *(long *)(lVar2 + 8);
        }
        if (in_RDX == 0) {
          return;
        }
      }
      if ((*(byte *)(psVar1 + 1) & 3) == 1) {
        return;
      }
      if ((*(byte *)(psVar1 + 1) & 0xc) == 4) {
        return;
      }
      lVar2 = *(long *)(*(long *)(in_RDI + 0xce0) + 0x10);
      local_18 = *(uint64_t *)(lVar2 + 0x30);
      local_10 = *(uint64_t *)(lVar2 + 0x38);
      if ((*(byte *)(psVar1 + 1) & 1) == 0) {
        *(int *)(in_RDI + 0xd00) = (int)*psVar1;
      }
      *(short **)(in_RDI + 0xce0) = psVar1;
      SetupMenuIconTween((FPUVector *)&local_18,(FPUVector *)(*(long *)(psVar1 + 8) + 0x30),
                         (Basic *)(in_RDI + 0x478));
    }
  }
  SetLevelDisplay(in_RDI);
  return;
}

/* ======================================================================
 * GSMBMenu__MoveToLeftLevel  (Ghidra `MoveToLeftLevel` @ 004d2b00)
 * Signature: uint8_t __stdcall MoveToLeftLevel(void)
 * Class: GSMBMenu
 * Calls: `SetupMenuIconTween`
 * Called by: `SMBMenuMoveLeftLevel`
 */
/* GSMBMenu__MoveToLeftLevel() */

void GSMBMenu__MoveToLeftLevel(void)

{
  byte bVar1;
  short *psVar2;
  long lVar3;
  long in_RAX;
  long in_RDX;
  GSMBMenu *in_RDI;
  uint64_t local_28;
  uint64_t local_20;
  uint64_t local_18;
  uint64_t local_10;
  
  if (((*(int *)(in_RDI + 0xd04) != 1) || (bMenuTransitioning == 1)) ||
     (*(int *)(in_RDI + 0x4c4) != 0)) {
    return;
  }
  if (*(int *)(in_RDI + 0x420) == 0) {
    psVar2 = *(short **)(*(long *)(in_RDI + 0xce0) + 0x28);
    if (psVar2 != (short *)0x0) {
      if (*(int *)(in_RDI + 0x418) == 9) {
        if (LoadedPortalChapter != 0) {
          lVar3 = *(long *)(LoadedPortalChapter + (long)*psVar2 * 8);
          if (lVar3 == 0) {
            return;
          }
          in_RAX = *(long *)(lVar3 + 8);
        }
        if (in_RAX == 0) {
          return;
        }
      }
      bVar1 = *(byte *)(psVar2 + 1);
      if ((bVar1 & 3) == 1) {
        return;
      }
      if ((bVar1 & 0xc) == 4) {
        return;
      }
      if ((bVar1 & 0x30) == 0x10) {
        return;
      }
      lVar3 = *(long *)(*(long *)(in_RDI + 0xce0) + 8);
      local_28 = *(uint64_t *)(lVar3 + 0x30);
      local_20 = *(uint64_t *)(lVar3 + 0x38);
      if ((*(byte *)(psVar2 + 1) & 1) == 0) {
        *(int *)(in_RDI + 0xd00) = (int)*psVar2;
      }
      *(short **)(in_RDI + 0xce0) = psVar2;
      SetupMenuIconTween((FPUVector *)&local_28,(FPUVector *)(*(long *)(psVar2 + 4) + 0x30),
                         (Basic *)(in_RDI + 0x478));
    }
  }
  else if (*(int *)(in_RDI + 0x420) == 1) {
    psVar2 = *(short **)(*(long *)(in_RDI + 0xce0) + 0x48);
    if (psVar2 != (short *)0x0) {
      if (*(int *)(in_RDI + 0x418) == 9) {
        if (LoadedPortalChapter != 0) {
          lVar3 = *(long *)(LoadedPortalChapter + (long)*psVar2 * 8);
          if (lVar3 == 0) {
            return;
          }
          in_RDX = *(long *)(lVar3 + 8);
        }
        if (in_RDX == 0) {
          return;
        }
      }
      bVar1 = *(byte *)(psVar2 + 1);
      if ((bVar1 & 3) == 1) {
        return;
      }
      if ((bVar1 & 0xc) == 4) {
        return;
      }
      if ((bVar1 & 0x30) == 0x10) {
        return;
      }
      lVar3 = *(long *)(*(long *)(in_RDI + 0xce0) + 0x10);
      local_18 = *(uint64_t *)(lVar3 + 0x30);
      local_10 = *(uint64_t *)(lVar3 + 0x38);
      if ((*(byte *)(psVar2 + 1) & 1) == 0) {
        *(int *)(in_RDI + 0xd00) = (int)*psVar2;
      }
      *(short **)(in_RDI + 0xce0) = psVar2;
      SetupMenuIconTween((FPUVector *)&local_18,(FPUVector *)(*(long *)(psVar2 + 8) + 0x30),
                         (Basic *)(in_RDI + 0x478));
    }
  }
  SetLevelDisplay(in_RDI);
  return;
}

/* ======================================================================
 * GSMBMenu__MoveToDownLevel  (Ghidra `MoveToDownLevel` @ 004d2d20)
 * Signature: uint8_t __stdcall MoveToDownLevel(void)
 * Class: GSMBMenu
 * Calls: `SetupMenuIconTween`
 * Called by: `SMBMenuMoveDownLevel`
 */
/* GSMBMenu__MoveToDownLevel() */

void GSMBMenu__MoveToDownLevel(void)

{
  short *psVar1;
  long lVar2;
  long in_RAX;
  long in_RDX;
  GSMBMenu *in_RDI;
  uint64_t local_28;
  uint64_t local_20;
  uint64_t local_18;
  uint64_t local_10;
  
  if (((*(int *)(in_RDI + 0xd04) != 1) || (bMenuTransitioning == 1)) ||
     (*(int *)(in_RDI + 0x4c4) != 0)) {
    return;
  }
  if (*(int *)(in_RDI + 0x420) == 0) {
    psVar1 = *(short **)(*(long *)(in_RDI + 0xce0) + 0x20);
    if (psVar1 != (short *)0x0) {
      if (*(int *)(in_RDI + 0x418) == 9) {
        if (LoadedPortalChapter != 0) {
          lVar2 = *(long *)(LoadedPortalChapter + (long)*psVar1 * 8);
          if (lVar2 == 0) {
            return;
          }
          in_RAX = *(long *)(lVar2 + 8);
        }
        if (in_RAX == 0) {
          return;
        }
      }
      if ((*(byte *)(psVar1 + 1) & 3) == 1) {
        return;
      }
      if ((*(byte *)(psVar1 + 1) & 0xc) == 4) {
        return;
      }
      lVar2 = *(long *)(*(long *)(in_RDI + 0xce0) + 8);
      local_28 = *(uint64_t *)(lVar2 + 0x30);
      local_20 = *(uint64_t *)(lVar2 + 0x38);
      if ((*(byte *)(psVar1 + 1) & 1) == 0) {
        *(int *)(in_RDI + 0xd00) = (int)*psVar1;
      }
      *(short **)(in_RDI + 0xce0) = psVar1;
      SetupMenuIconTween((FPUVector *)&local_28,(FPUVector *)(*(long *)(psVar1 + 4) + 0x30),
                         (Basic *)(in_RDI + 0x478));
    }
  }
  else if (*(int *)(in_RDI + 0x420) == 1) {
    psVar1 = *(short **)(*(long *)(in_RDI + 0xce0) + 0x40);
    if (psVar1 != (short *)0x0) {
      if (*(int *)(in_RDI + 0x418) == 9) {
        if (LoadedPortalChapter != 0) {
          lVar2 = *(long *)(LoadedPortalChapter + (long)*psVar1 * 8);
          if (lVar2 == 0) {
            return;
          }
          in_RDX = *(long *)(lVar2 + 8);
        }
        if (in_RDX == 0) {
          return;
        }
      }
      if ((*(byte *)(psVar1 + 1) & 3) == 1) {
        return;
      }
      if ((*(byte *)(psVar1 + 1) & 0xc) == 4) {
        return;
      }
      lVar2 = *(long *)(*(long *)(in_RDI + 0xce0) + 0x10);
      local_18 = *(uint64_t *)(lVar2 + 0x30);
      local_10 = *(uint64_t *)(lVar2 + 0x38);
      if ((*(byte *)(psVar1 + 1) & 1) == 0) {
        *(int *)(in_RDI + 0xd00) = (int)*psVar1;
      }
      *(short **)(in_RDI + 0xce0) = psVar1;
      SetupMenuIconTween((FPUVector *)&local_18,(FPUVector *)(*(long *)(psVar1 + 8) + 0x30),
                         (Basic *)(in_RDI + 0x478));
    }
  }
  SetLevelDisplay(in_RDI);
  return;
}

/* ======================================================================
 * GSMBMenu__MoveToUpLevel  (Ghidra `MoveToUpLevel` @ 004d2f10)
 * Signature: uint8_t __stdcall MoveToUpLevel(void)
 * Class: GSMBMenu
 * Calls: `SetupMenuIconTween`
 * Called by: `SMBMenuMoveUpLevel`
 */
/* GSMBMenu__MoveToUpLevel() */

void GSMBMenu__MoveToUpLevel(void)

{
  short *psVar1;
  long lVar2;
  long in_RAX;
  long in_RDX;
  GSMBMenu *in_RDI;
  uint64_t local_28;
  uint64_t local_20;
  uint64_t local_18;
  uint64_t local_10;
  
  if (((*(int *)(in_RDI + 0xd04) != 1) || (bMenuTransitioning == 1)) ||
     (*(int *)(in_RDI + 0x4c4) != 0)) {
    return;
  }
  if (*(int *)(in_RDI + 0x420) == 0) {
    psVar1 = *(short **)(*(long *)(in_RDI + 0xce0) + 0x18);
    if (psVar1 != (short *)0x0) {
      if (*(int *)(in_RDI + 0x418) == 9) {
        if (LoadedPortalChapter != 0) {
          lVar2 = *(long *)(LoadedPortalChapter + (long)*psVar1 * 8);
          if (lVar2 == 0) {
            return;
          }
          in_RAX = *(long *)(lVar2 + 8);
        }
        if (in_RAX == 0) {
          return;
        }
      }
      if ((*(byte *)(psVar1 + 1) & 3) == 1) {
        return;
      }
      if ((*(byte *)(psVar1 + 1) & 0xc) == 4) {
        return;
      }
      lVar2 = *(long *)(*(long *)(in_RDI + 0xce0) + 8);
      local_28 = *(uint64_t *)(lVar2 + 0x30);
      local_20 = *(uint64_t *)(lVar2 + 0x38);
      if ((*(byte *)(psVar1 + 1) & 1) == 0) {
        *(int *)(in_RDI + 0xd00) = (int)*psVar1;
      }
      *(short **)(in_RDI + 0xce0) = psVar1;
      SetupMenuIconTween((FPUVector *)&local_28,(FPUVector *)(*(long *)(psVar1 + 4) + 0x30),
                         (Basic *)(in_RDI + 0x478));
    }
  }
  else if (*(int *)(in_RDI + 0x420) == 1) {
    psVar1 = *(short **)(*(long *)(in_RDI + 0xce0) + 0x38);
    if (psVar1 != (short *)0x0) {
      if (*(int *)(in_RDI + 0x418) == 9) {
        if (LoadedPortalChapter != 0) {
          lVar2 = *(long *)(LoadedPortalChapter + (long)*psVar1 * 8);
          if (lVar2 == 0) {
            return;
          }
          in_RDX = *(long *)(lVar2 + 8);
        }
        if (in_RDX == 0) {
          return;
        }
      }
      if ((*(byte *)(psVar1 + 1) & 3) == 1) {
        return;
      }
      if ((*(byte *)(psVar1 + 1) & 0xc) == 4) {
        return;
      }
      lVar2 = *(long *)(*(long *)(in_RDI + 0xce0) + 0x10);
      local_18 = *(uint64_t *)(lVar2 + 0x30);
      local_10 = *(uint64_t *)(lVar2 + 0x38);
      if ((*(byte *)(psVar1 + 1) & 1) == 0) {
        *(int *)(in_RDI + 0xd00) = (int)*psVar1;
      }
      *(short **)(in_RDI + 0xce0) = psVar1;
      SetupMenuIconTween((FPUVector *)&local_18,(FPUVector *)(*(long *)(psVar1 + 8) + 0x30),
                         (Basic *)(in_RDI + 0x478));
    }
  }
  SetLevelDisplay(in_RDI);
  return;
}

/* ======================================================================
 * GSMBMenu__ShowChapterMap  (Ghidra `ShowChapterMap` @ 004d3100)
 * Signature: uint8_t __thiscall ShowChapterMap(GSMBMenu * self, int arg1)
 * Class: GSMBMenu
 * Calls: `FlashLibraryInstance__Reset`, `GMeatHUD__RenderUnlocks`, `GSMBChapterData__IsGlitchUnlocked`, `GSMBChapterData__SetLevelType`, `SMBChapter__PlayChapterMenuMusic`, `SMBChapter__SetLevelType`, `SMBChapter__ThreadLoadBossIntro`, `SMBLevelPortal__InitializeInterface`, `SMBLevelPortal__IsChapterLoaded`, `SMBMenuUnlocksFinished` (+2 more)
 * Called by: `GSuperMeatBoy__ShowChapterMap`, `GSuperMeatBoy__SwitchGameMode`
 */
/* GSMBMenu__ShowChapterMap(int) */

void __thiscall GSMBMenu__ShowChapterMap(GSMBMenu *self,int arg1)

{
  Basic *pBVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  FPUVector *pFVar5;
  uint32_t local_78 [2];
  uint32_t *local_70;
  uint32_t local_68;
  uint64_t local_60;
  uint32_t local_58 [2];
  uint64_t local_50;
  uint64_t local_48;
  uint64_t local_40;
  uint64_t local_38;
  uint64_t uStack_30;
  uint64_t local_28;
  uint64_t local_20;
  
  RestoreControls();
  if (arg1 != 1) {
    uAdjustedWorldMenuChapter = *(int *)(self + 0x41c);
    if (uAdjustedWorldMenuChapter == 8) {
      uAdjustedWorldMenuChapter = 1;
    }
    else if (uAdjustedWorldMenuChapter == 9) {
      uAdjustedWorldMenuChapter = 8;
    }
    local_78[0] = 2;
    local_68 = 4;
    local_70 = &uAdjustedWorldMenuChapter;
    pBVar1 = (Basic *)(self + 0x478);
    local_60 = TPlayer__GetProfile((TPlayer *)Players__Player);
    BroadcastString__SetBroadcastStringParam((BroadcastStringParam *)local_78);
    lVar2 = *(long *)(self + 0xce0);
    LoadChapterMenu(self,*(uint32_t *)(SuperMeatBoy + 0x290));
    SMBChapter__SetLevelType((SMBChapter *)(SuperMeatBoy + 0x90),*(uint32_t *)(self + 0x420));
    GSMBChapterData__SetLevelType(SMBChapterData,*(uint32_t *)(self + 0x420));
    if ((*(uint *)(self + 0xd00) != 99) && (*(long *)(self + 0xcf0) == 0)) {
      lVar3 = *(long *)(self + 0xcc8) + (ulong)(*(uint *)(self + 0xd00) & 0xffff) * 0x58;
      *(long *)(self + 0xce0) = lVar3;
      pFVar5 = (FPUVector *)(*(long *)(lVar3 + 8) + 0x30);
      SetupMenuIconTween(pFVar5,pFVar5,pBVar1);
      SetLevelDisplay(self);
    }
    local_58[0] = 2;
    local_50 = TPlayer__GetProfile((TPlayer *)Players__Player);
    BroadcastString__SetBroadcastString((BroadcastStringCreate *)local_58);
    SMBChapter__SetLevelType((SMBChapter *)(SuperMeatBoy + 0x90),*(uint32_t *)(self + 0x420));
    SMBChapter__PreloadPalette((int)SuperMeatBoy + 0x90,1);
    SMBChapter__ThreadLoadBossIntro();
    RenderLayers__AddLayer((RenderLayer *)self);
    *(uint *)(self + 0xd04) = (bTransitionFromWorldToChapter != 1) + 1;
    if (*(FlashLibraryInstance **)(self + 0x780) != (FlashLibraryInstance *)0x0) {
      FlashLibraryInstance__Reset(*(FlashLibraryInstance **)(self + 0x780));
    }
    if (*(FlashLibraryInstance **)(self + 0x778) != (FlashLibraryInstance *)0x0) {
      FlashLibraryInstance__Reset(*(FlashLibraryInstance **)(self + 0x778));
    }
    bTransitionFromWorldToChapter = 0;
    FlashLibraryInstance__Reset(*(FlashLibraryInstance **)(self + 0x4f0));
    if ((*(long *)(self + 0x790) != 0) && (*(long *)(self + 0x798) != 0)) {
      iVar4 = GSMBChapterData__IsGlitchUnlocked(SMBChapterData);
      if (iVar4 == 1) {
        *(uint32_t *)(*(long *)(self + 0x790) + 0x24) = 1;
        *(uint32_t *)(*(long *)(self + 0x798) + 0x24) = 1;
        *(byte *)(*(long *)(self + 0xcf8) + 2) = *(byte *)(*(long *)(self + 0xcf8) + 2) | 0x20;
      }
      else {
        *(uint32_t *)(*(long *)(self + 0x790) + 0x24) = 0;
        *(uint32_t *)(*(long *)(self + 0x798) + 0x24) = 0;
        *(byte *)(*(long *)(self + 0xcf8) + 2) = *(byte *)(*(long *)(self + 0xcf8) + 2) & 0xdf;
      }
    }
    if (*(int *)(self + 0x420) == 10) {
      if (*(short *)(SuperMeatBoy + 0x376) == 0) {
        SMBChapter__SetLevelType((SMBChapter *)(SuperMeatBoy + 0x90),0);
        GSMBChapterData__SetLevelType(SMBChapterData,0);
        *(uint32_t *)(self + 0x420) = 0;
      }
      else {
        SMBChapter__SetLevelType((SMBChapter *)(SuperMeatBoy + 0x90),1);
        GSMBChapterData__SetLevelType(SMBChapterData,1);
        *(uint32_t *)(self + 0x420) = 1;
      }
    }
    SetBossPadState(self);
    if (((*(long *)(self + 0xce0) == 0) || ((*(byte *)(*(long *)(self + 0xce0) + 2) & 4) == 0)) &&
       (*(uint *)(self + 0xd00) != 99)) {
      lVar2 = *(long *)(self + 0xcf0);
      if (lVar2 == 0) {
        lVar2 = *(long *)(self + 0xcc8) + (ulong)(*(uint *)(self + 0xd00) & 0xffff) * 0x58;
        lVar3 = *(long *)(lVar2 + 8);
        local_28 = *(uint64_t *)(lVar3 + 0x30);
        local_20 = *(uint64_t *)(lVar3 + 0x38);
        SetupMenuIconTween((FPUVector *)&local_28,(FPUVector *)(*(long *)(lVar2 + 8) + 0x30),pBVar1)
        ;
      }
      else {
        *(long *)(self + 0xce0) = lVar2;
        if (*(int *)(self + 0x420) == 0) {
          local_38 = *(uint64_t *)(*(long *)(lVar2 + 8) + 0x30);
          uStack_30 = *(uint64_t *)(*(long *)(lVar2 + 8) + 0x38);
          SetupMenuIconTween((FPUVector *)&local_38,(FPUVector *)(*(long *)(lVar2 + 8) + 0x30),
                             pBVar1);
        }
        else {
          lVar2 = *(long *)(lVar2 + 0x10);
          local_38 = *(uint64_t *)(lVar2 + 0x30);
          uStack_30 = *(uint64_t *)(lVar2 + 0x38);
          SetupMenuIconTween((FPUVector *)&local_38,(FPUVector *)(lVar2 + 0x30),pBVar1);
        }
      }
    }
    else {
      *(long *)(self + 0xce0) = lVar2;
      local_48 = *(uint64_t *)(*(long *)(lVar2 + 8) + 0x30);
      local_40 = *(uint64_t *)(*(long *)(lVar2 + 8) + 0x38);
      SetupMenuIconTween((FPUVector *)&local_48,(FPUVector *)(*(long *)(lVar2 + 8) + 0x30),pBVar1);
    }
    iVar4 = bShowingIntroEnd;
    *(uint64_t *)(self + 0xcf0) = 0;
    if (iVar4 == 0) {
      SMBChapter__PlayChapterMenuMusic((SMBChapter *)(SuperMeatBoy + 0x90));
    }
    SetLevelDisplay(self);
    bRenderingUnlocks = 1;
    GMeatHUD__RenderUnlocks(SMBHUD,SMBMenuUnlocksFinished);
    if (*(int *)(self + 0x418) == 9) {
      iVar4 = SMBLevelPortal__IsChapterLoaded();
      if (iVar4 == 0) {
        SMBLevelPortal__InitializeInterface(SuperMeatBoyPortal);
      }
    }
  }
  return;
}

/* ======================================================================
 * GSMBMenu__ExtractChapterAndLevelFromSelectedLevel  (Ghidra `ExtractChapterAndLevelFromSelectedLevel` @ 004d35e0)
 * Signature: uint8_t __thiscall ExtractChapterAndLevelFromSelectedLevel(GSMBMenu * self, int * arg1, int * arg2, char * arg3)
 * Class: GSMBMenu
 * Calls: `SMBChapter__GetLevelInfo`, `StringToInt`, `memcpy`, `strlen`
 * Called by: `ConvertLevelToLeaderboardID`, `GMeatHUD__SetInGameHudLevelName`, `SMBChapter__LoadNextLevel`
 */
/* GSMBMenu__ExtractChapterAndLevelFromSelectedLevel(int&, int&, char const*) */

void __thiscall
GSMBMenu__ExtractChapterAndLevelFromSelectedLevel
          (GSMBMenu *self,int *arg1,int *arg2,char *arg3)

{
  ulong __n;
  char cVar1;
  int iVar2;
  char *pcVar3;
  size_t sVar4;
  char *__dest;
  ulong uVar5;
  ulong uVar6;
  
  iVar2 = *(int *)(self + 0xd00);
  if ((iVar2 != 0x62) && (iVar2 != 99)) {
    pcVar3 = (char *)SMBChapter__GetLevelInfo
                               ((SMBChapter *)(SuperMeatBoy + 0x90),iVar2,
                                *(uint32_t *)(self + 0x420),0);
    if (arg3 != (char *)0x0) {
      pcVar3 = arg3;
    }
    sVar4 = strlen(pcVar3);
    __n = sVar4 + 1;
    __dest = operator_new__(__n);
    if (pcVar3 != __dest) {
      memcpy(__dest,pcVar3,__n);
    }
    uVar6 = 0;
    if (0 < (int)__n) {
      uVar5 = 1;
      pcVar3 = __dest;
      do {
        cVar1 = *pcVar3;
        iVar2 = (int)uVar5;
        if (cVar1 == '-') {
          *pcVar3 = '\0';
          uVar6 = uVar5;
        }
        else if ((cVar1 == '.') || (cVar1 == 'x')) {
          *pcVar3 = '\0';
        }
        pcVar3 = pcVar3 + 1;
        uVar5 = (ulong)(iVar2 + 1);
      } while (iVar2 < (int)__n);
      uVar6 = (ulong)(int)uVar6;
    }
    if (*__dest == 'i') {
      *arg1 = 9;
    }
    else if (*__dest == 'b') {
      *arg1 = 7;
    }
    else {
      iVar2 = StringToInt(__dest);
      *arg1 = iVar2;
    }
    iVar2 = StringToInt(__dest + uVar6);
    *arg2 = iVar2;
    operator_delete__(__dest);
    return;
  }
  *arg1 = -1;
  *arg2 = -1;
  return;
}

/* ======================================================================
 * GSMBMenu__SetSelectedLevel  (Ghidra `SetSelectedLevel` @ 004d3720)
 * Signature: uint8_t __thiscall SetSelectedLevel(GSMBMenu * self, int arg1, int arg2)
 * Class: GSMBMenu
 * Calls: `SetupMenuIconTween`
 * Called by: `SMBChapter__FinishedWarpOutro`, `SMBChapter__LoadNextLevel`, `SMBGameOverScreenFinished`, `SMBWarpOutroFinished`, `TransitionToNextLevel`
 */
/* GSMBMenu__SetSelectedLevel(int, int) */

void __thiscall GSMBMenu__SetSelectedLevel(GSMBMenu *self,int arg1,int arg2)

{
  long lVar1;
  FPUVector *pFVar2;
  
  *(int *)(self + 0xd00) = arg1;
  if (arg2 != 0) {
    return;
  }
  lVar1 = *(long *)(self + 0xcc8) + (ulong)(ushort)arg1 * 0x58;
  *(long *)(self + 0xce0) = lVar1;
  pFVar2 = (FPUVector *)(*(long *)(lVar1 + 8) + 0x30);
  SetupMenuIconTween(pFVar2,pFVar2,(Basic *)(self + 0x478));
  SetLevelDisplay(self);
  return;
}

/* ======================================================================
 * GSMBMenu__EnterSelectedLevel  (Ghidra `EnterSelectedLevel` @ 004d3770)
 * Signature: uint8_t __thiscall EnterSelectedLevel(GSMBMenu * self)
 * Class: GSMBMenu
 * Calls: `AutoLockSection__AutoLockSection`, `AutoLockSection__AutoLockSection__005b59d0`, `FlashLibraryInstance__Reset`, `GSMBChapterData__GetCurrentLevelData`, `SMBChapter__ActivateWarpZoneFromMenu`, `SMBChapter__GetLevelInfo`, `SMBChapter__SetCurrentLevel`, `SMBChapter__StopChapterMenuMusic`
 * Called by: `SMBMenuLevelSelect`
 */
/* GSMBMenu__EnterSelectedLevel() */

void __thiscall GSMBMenu__EnterSelectedLevel(GSMBMenu *self)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  float *pfVar4;
  long unaff_RBP;
  int unaff_R12D;
  AutoLockSection aAStack_28 [16];
  
  AutoLockSection__AutoLockSection(aAStack_28,(CriticalSection *)SMBMenuSection);
  if (((*(int *)(self + 0xd04) != 7) && (bBossJustDefeated != 1)) && (*(int *)(self + 0xd04) != 2))
  {
    iVar2 = *(int *)(self + 0xd00);
    iCurrentLevel = iVar2;
    if (*(int *)(self + 0x41c) == 9) {
      if (LoadedPortalChapter != 0) {
        lVar3 = *(long *)(LoadedPortalChapter + (long)iVar2 * 8);
        if (lVar3 == 0) goto LAB_004d381a;
        unaff_RBP = *(long *)(lVar3 + 8);
        unaff_R12D = *(int *)(lVar3 + 0x10);
      }
      if ((unaff_RBP == 0) || (unaff_R12D == 0)) goto LAB_004d381a;
    }
    *(uint64_t *)(self + 0xcf0) = 0;
    lVar3 = SuperMeatBoy;
    bVar1 = *(byte *)(*(long *)(self + 0xce0) + 2);
    if ((bVar1 & 0x11) == 0) {
      if ((bVar1 & 4) == 0) {
        if ((*(int *)(self + 0x420) == 1) && (bAutoUnlock == 0)) {
          lVar3 = SMBChapter__GetLevelInfo((SMBChapter *)(SuperMeatBoy + 0x90),iVar2,0,0);
          pfVar4 = (float *)GSMBChapterData__GetCurrentLevelData
                                      (SMBChapterData,*(uint32_t *)(self + 0xd00),0);
          if (*(float *)(lVar3 + 0x40) <= *pfVar4) goto LAB_004d381a;
        }
        if (*(int *)(self + 0x4c4) != 0) goto LAB_004d381a;
      }
      *(uint32_t *)(self + 0xd04) = 7;
                    /* try { // try from 004d380d to 004d3819 has its CatchHandler @ 004d3939 */
      FlashLibraryInstance__Reset(*(FlashLibraryInstance **)(self + 0x4e8));
    }
    else {
      *(long *)(self + 0xcf0) = *(long *)(self + 0xce0);
                    /* try { // try from 004d3885 to 004d3925 has its CatchHandler @ 004d3939 */
      SMBChapter__SetCurrentLevel((SMBChapter *)(lVar3 + 0x90),iVar2);
      if ((*(byte *)(*(short **)(self + 0xce0) + 1) & 0x10) == 0) {
        SMBChapter__ActivateWarpZoneFromMenu
                  ((SMBChapter *)(SuperMeatBoy + 0x90),(int)**(short **)(self + 0xce0));
      }
      else {
        SMBChapter__ActivateWarpZoneFromMenu((SMBChapter *)(SuperMeatBoy + 0x90),4);
      }
      SMBChapter__StopChapterMenuMusic((SMBChapter *)(SuperMeatBoy + 0x90));
    }
    RemoveControls();
  }
LAB_004d381a:
  AutoLockSection__AutoLockSection__005b59d0(aAStack_28);
  return;
}

/* ======================================================================
 * GSMBMenu__EnterSelectedChapter  (Ghidra `EnterSelectedChapter` @ 004d39b0)
 * Signature: uint8_t __thiscall EnterSelectedChapter(GSMBMenu * self)
 * Class: GSMBMenu
 * Calls: `AutoLockSection__AutoLockSection`, `AutoLockSection__AutoLockSection__005b59d0`, `FlashLibraryInstance__Reset`, `SMBChapter__LoadChapter`
 * Called by: (none)
 */
/* GSMBMenu__EnterSelectedChapter() */

void __thiscall GSMBMenu__EnterSelectedChapter(GSMBMenu *self)

{
  AutoLockSection aAStack_18 [16];
  
  AutoLockSection__AutoLockSection(aAStack_18,(CriticalSection *)SMBMenuSection);
                    /* try { // try from 004d39d9 to 004d3a19 has its CatchHandler @ 004d3a28 */
  SMBChapter__LoadChapter((SMBChapter *)(SuperMeatBoy + 0x90),*(uint32_t *)(self + 0x41c));
  *(uint32_t *)(self + 0xd00) = 0;
  *(uint32_t *)(self + 0x420) = 0;
  *(uint32_t *)(self + 0xd04) = 8;
  iCurrentLevel = 0;
  FlashLibraryInstance__Reset(*(FlashLibraryInstance **)(self + 0x4d8));
  RemoveControls();
  AutoLockSection__AutoLockSection__005b59d0(aAStack_18);
  return;
}

/* ======================================================================
 * GSMBMenu__LoadReplayFromManager  (Ghidra `LoadReplayFromManager` @ 004d3a40)
 * Signature: uint8_t __thiscall LoadReplayFromManager(GSMBMenu * self)
 * Class: GSMBMenu
 * Calls: `GSMBCutSceneManager__PlayCutScene`, `SMBMenuInGameFromMenu`
 * Called by: `SMBReplayManager__DeactivationFinished`
 */
/* GSMBMenu__LoadReplayFromManager() */

void __thiscall GSMBMenu__LoadReplayFromManager(GSMBMenu *self)

{
  uint32_t local_58;
  uint32_t local_54;
  uint32_t local_50;
  uint64_t local_48;
  code *local_40;
  uint64_t local_38;
  uint64_t local_30;
  uint64_t local_28;
  uint32_t local_20;
  uint32_t local_1c;
  uint32_t local_18;
  
  *(uint16_t *)(self + 0x1840) = 1;
  RemoveControls();
  local_48 = *(uint64_t *)(self + 0x610);
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 1;
  local_58 = 0x44200000;
  local_54 = 0x43f00000;
  local_50 = 1;
  local_40 = SMBMenuInGameFromMenu;
  local_18 = 0;
  GSMBCutSceneManager__PlayCutScene(SMBCutSceneManager,(SMBCutScene *)&local_58);
  bMenuTransitioning = 1;
  return;
}

/* ======================================================================
 * GSMBMenu__IsInReplayMode  (Ghidra `IsInReplayMode` @ 004d3ae0)
 * Signature: uint8_t __thiscall IsInReplayMode(GSMBMenu * self)
 * Class: GSMBMenu
 * Calls: (none)
 * Called by: `EditorForm_LoadFormOk`, `FlyWrench__Reset`, `GMeatHUD__Render`, `GMeatHUD__SetInGameHudLevelName`, `GMeatHUD__ShowReplayHUD`, `GSMBChapterData__DetermineGlitchOccurance`, `GSuperMeatBoy__SetCurrentLevel`, `GSuperMeatBoy__ShowCurrentReplay`, `GSuperMeatBoy__ShowGame`, `GSuperMeatBoy__SwitchGameMode` (+15 more)
 */
/* GSMBMenu__IsInReplayMode() */

uint16_t __thiscall GSMBMenu__IsInReplayMode(GSMBMenu *self)

{
  return *(uint16_t *)(self + 0x1840);
}

/* ======================================================================
 * GSMBMenu__GetCurrReplayInfo  (Ghidra `GetCurrReplayInfo` @ 004d3af0)
 * Signature: uint8_t __thiscall GetCurrReplayInfo(GSMBMenu * self)
 * Class: GSMBMenu
 * Calls: `SMBReplayManager__GetSelectedReplayInfo`
 * Called by: `GSuperMeatBoy__ShowGame`
 */
/* GSMBMenu__GetCurrReplayInfo() */

void __thiscall GSMBMenu__GetCurrReplayInfo(GSMBMenu *self)

{
  SMBReplayManager__GetSelectedReplayInfo((SMBReplayManager *)(self + 0x1308));
  return;
}

/* ======================================================================
 * GSMBMenu__LoadSelectedLevel  (Ghidra `LoadSelectedLevel` @ 004d3b00)
 * Signature: uint8_t __thiscall LoadSelectedLevel(GSMBMenu * self)
 * Class: GSMBMenu
 * Calls: `GSuperMeatBoy__SetCurrentLevel`, `GSuperMeatBoy__SwitchGameMode`, `SMBChapter__LoadBossLevel`, `SMBChapter__PlayChapterMusic__00491ea0`, `SMBChapter__SetCurrentLevel`, `SMBChapter__StopChapterMenuMusic`, `SyncEvent__SyncEvent`, `SyncEvent__SyncEvent__005b8100`, `TPlayer__GetProfile`
 * Called by: `SMBMenuBossIntroFinished`
 */
/* GSMBMenu__LoadSelectedLevel() */

void __thiscall GSMBMenu__LoadSelectedLevel(GSMBMenu *self)

{
  byte bVar1;
  int iVar2;
  GSuperMeatBoy *pGVar3;
  GSuperMeatBoy GVar4;
  uint64_t local_88;
  SyncEvent local_80 [104];
  uint32_t local_18 [2];
  uint64_t local_10;
  
  pGVar3 = SuperMeatBoy;
  if (*(short *)(self + 0x1840) == 0) {
    iVar2 = *(int *)(self + 0xd00);
    bVar1 = *(byte *)(*(long *)(self + 0xce0) + 2);
    *(uint32_t *)(SuperMeatBoy + 0x370) = 1;
    *(uint16_t *)(pGVar3 + 0x374) = 1;
    GVar4 = (GSuperMeatBoy)(bVar1 >> 2 & 1);
    pGVar3[0x3ab] = GVar4;
    if (GVar4 == (GSuperMeatBoy)0x0) {
      GSuperMeatBoy__SwitchGameMode(pGVar3,0);
      SMBChapter__SetCurrentLevel((SMBChapter *)(SuperMeatBoy + 0x90),iVar2);
      pGVar3 = SuperMeatBoy;
      *(uint32_t *)(SuperMeatBoy + 0x370) = 0;
      *(uint16_t *)(pGVar3 + 0x374) = 0;
      SMBChapter__StopChapterMenuMusic((SMBChapter *)(pGVar3 + 0x90));
      SMBChapter__PlayChapterMusic__00491ea0((SMBChapter *)(SuperMeatBoy + 0x90));
    }
    else {
      GSuperMeatBoy__SetCurrentLevel(pGVar3,(TileLevel *)0x0);
      if (*(int *)(SuperMeatBoy + 0x2c) != 0) {
        GSuperMeatBoy__SwitchGameMode(SuperMeatBoy,0);
      }
      SMBChapter__LoadBossLevel((SMBChapter *)(SuperMeatBoy + 0x90));
      local_18[0] = 6;
      SuperMeatBoy[0x3ab] = (GSuperMeatBoy)0x0;
      local_10 = TPlayer__GetProfile((TPlayer *)Players__Player);
      BroadcastString__SetBroadcastString((BroadcastStringCreate *)local_18);
      pGVar3 = SuperMeatBoy;
      *(uint32_t *)(SuperMeatBoy + 0x370) = 0;
      *(uint16_t *)(pGVar3 + 0x374) = 0;
      SMBChapter__StopChapterMenuMusic((SMBChapter *)(pGVar3 + 0x90));
    }
    SyncEvent__SyncEvent(local_80);
                    /* try { // try from 004d3bb6 to 004d3bc6 has its CatchHandler @ 004d3c88 */
    local_88 = TPlayer__GetProfile((TPlayer *)Players__Player);
    Leaderboards__JoinLeaderboardSession((LeaderboardJoinParam *)&local_88);
    SyncEvent__SyncEvent__005b8100(local_80);
    return;
  }
  GSuperMeatBoy__SwitchGameMode(SuperMeatBoy,0);
  return;
}

/* ======================================================================
 * GSMBMenu__IsOnBossLevel  (Ghidra `IsOnBossLevel` @ 004d3d10)
 * Signature: uint8_t __thiscall IsOnBossLevel(GSMBMenu * self)
 * Class: GSMBMenu
 * Calls: (none)
 * Called by: `GMeatHUD__SetInGameHudLevelName`
 */
/* GSMBMenu__IsOnBossLevel() */

byte __thiscall GSMBMenu__IsOnBossLevel(GSMBMenu *self)

{
  byte bVar1;
  
  bVar1 = 0;
  if (*(long *)(self + 0xce0) != 0) {
    bVar1 = *(byte *)(*(long *)(self + 0xce0) + 2) >> 2 & 1;
  }
  return bVar1;
}

/* ======================================================================
 * GSMBMenu__LightDarkStartChange  (Ghidra `LightDarkStartChange` @ 004d3e10)
 * Signature: uint8_t __thiscall LightDarkStartChange(GSMBMenu * self)
 * Class: GSMBMenu
 * Calls: `GSMBCutSceneManager__PlayCutScene`, `SMBMenuTransitionPart2`
 * Called by: `SMBMenuLevelLightDarkToggle`
 */
/* GSMBMenu__LightDarkStartChange() */

void __thiscall GSMBMenu__LightDarkStartChange(GSMBMenu *self)

{
  uint32_t local_58;
  uint32_t local_54;
  uint32_t local_50;
  uint64_t local_48;
  code *local_40;
  GSMBMenu *local_38;
  uint64_t local_30;
  uint64_t local_28;
  uint32_t local_20;
  uint32_t local_1c;
  uint32_t local_18;
  
  if (((((*(byte *)(*(long *)(self + 0xce0) + 2) & 5) == 0) && (*(int *)(self + 0x418) != 9)) &&
      ((*(byte *)(*(long *)(self + 0xce0) + 2) & 0x10) == 0)) && (*(int *)(self + 0x4c4) != 1)) {
    local_48 = *(uint64_t *)(self + 0x600);
    bMenuTransitioning = 1;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_1c = 1;
    local_58 = 0x44200000;
    local_54 = 0x43f00000;
    local_50 = 1;
    local_40 = SMBMenuTransitionPart2;
    local_18 = 0;
    local_38 = self;
    GSMBCutSceneManager__PlayCutScene(SMBCutSceneManager,(SMBCutScene *)&local_58);
  }
  return;
}

/* ======================================================================
 * GSMBMenu__TransitionInMenuFromGame  (Ghidra `TransitionInMenuFromGame` @ 004d3f10)
 * Signature: uint8_t __thiscall TransitionInMenuFromGame(GSMBMenu * self)
 * Class: GSMBMenu
 * Calls: `GSMBCutSceneManager__PlayCutScene`, `GSuperMeatBoy__Freeze`, `SMBMenuInMenuFromGame`
 * Called by: `ShowMenuPress`
 */
/* GSMBMenu__TransitionInMenuFromGame() */

void __thiscall GSMBMenu__TransitionInMenuFromGame(GSMBMenu *self)

{
  uint32_t local_58;
  uint32_t local_54;
  uint32_t local_50;
  uint64_t local_48;
  code *local_40;
  uint64_t local_38;
  uint64_t local_30;
  uint64_t local_28;
  uint32_t local_20;
  uint32_t local_1c;
  uint32_t local_18;
  
  local_48 = *(uint64_t *)(self + 0x610);
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 1;
  local_58 = 0x44200000;
  local_54 = 0x43f00000;
  local_50 = 1;
  local_40 = SMBMenuInMenuFromGame;
  local_18 = 0;
  GSMBCutSceneManager__PlayCutScene(SMBCutSceneManager,(SMBCutScene *)&local_58);
  GSuperMeatBoy__Freeze(SuperMeatBoy,1);
  bMenuTransitioning = 1;
  return;
}

/* ======================================================================
 * GSMBMenu__TransitionOutMenuFromGame  (Ghidra `TransitionOutMenuFromGame` @ 004d3fb0)
 * Signature: uint8_t __thiscall TransitionOutMenuFromGame(GSMBMenu * self)
 * Class: GSMBMenu
 * Calls: `DisableLoadingRenderThread`, `EnableLoadingRenderThread`, `GSMBCutSceneManager__PlayCutScene`, `GSuperMeatBoy__Freeze`, `GSuperMeatBoy__SwitchGameMode`, `Loader__WaitAll`, `RenderLoadingScreenFunc`, `SMBMenuEndMenuTransition`
 * Called by: (none)
 */
/* GSMBMenu__TransitionOutMenuFromGame() */

void __thiscall GSMBMenu__TransitionOutMenuFromGame(GSMBMenu *self)

{
  uint32_t local_58;
  uint32_t local_54;
  uint32_t local_50;
  uint64_t local_48;
  code *local_40;
  uint64_t local_38;
  uint64_t local_30;
  uint64_t local_28;
  uint32_t local_20;
  uint32_t local_1c;
  uint32_t local_18;
  
  local_48 = *(uint64_t *)(self + 0x618);
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 1;
  local_58 = 0x44200000;
  local_54 = 0x43f00000;
  local_50 = 1;
  local_40 = SMBMenuEndMenuTransition;
  local_18 = 0;
  GSMBCutSceneManager__PlayCutScene(SMBCutSceneManager,(SMBCutScene *)&local_58);
  EnableLoadingRenderThread(RenderLoadingScreenFunc);
  GSuperMeatBoy__SwitchGameMode(SuperMeatBoy);
  Loader__WaitAll();
  DisableLoadingRenderThread();
  GSuperMeatBoy__Freeze(SuperMeatBoy,0);
  return;
}

/* ======================================================================
 * GSMBMenu__TransitionInGameFromMenu  (Ghidra `TransitionInGameFromMenu` @ 004d4060)
 * Signature: uint8_t __thiscall TransitionInGameFromMenu(GSMBMenu * self)
 * Class: GSMBMenu
 * Calls: `GSMBCutSceneManager__PlayCutScene`, `SMBMenuInGameFromMenu`
 * Called by: `SMBLevelPortalLevelPress`
 */
/* GSMBMenu__TransitionInGameFromMenu() */

void __thiscall GSMBMenu__TransitionInGameFromMenu(GSMBMenu *self)

{
  uint32_t local_58;
  uint32_t local_54;
  uint32_t local_50;
  uint64_t local_48;
  code *local_40;
  uint64_t local_38;
  uint64_t local_30;
  uint64_t local_28;
  uint32_t local_20;
  uint32_t local_1c;
  uint32_t local_18;
  
  local_48 = *(uint64_t *)(self + 0x610);
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 1;
  local_58 = 0x44200000;
  local_54 = 0x43f00000;
  local_50 = 1;
  local_40 = SMBMenuInGameFromMenu;
  local_18 = 0;
  GSMBCutSceneManager__PlayCutScene(SMBCutSceneManager,(SMBCutScene *)&local_58);
  bMenuTransitioning = 1;
  return;
}

/* ======================================================================
 * GSMBMenu__TransitionInReloadChapter  (Ghidra `TransitionInReloadChapter` @ 004d40f0)
 * Signature: uint8_t __thiscall TransitionInReloadChapter(GSMBMenu * self)
 * Class: GSMBMenu
 * Calls: `GSMBCutSceneManager__PlayCutScene`, `SMBMenuInChapterReload`, `SetupMenuIconTween`
 * Called by: `SMBLevelPortalLevelPress`, `SMBLevelPortalUnknownDifficultyPress`
 */
/* GSMBMenu__TransitionInReloadChapter() */

void __thiscall GSMBMenu__TransitionInReloadChapter(GSMBMenu *self)

{
  FPUVector *pFVar1;
  uint32_t local_58;
  uint32_t local_54;
  uint32_t local_50;
  uint64_t local_48;
  code *local_40;
  uint64_t local_38;
  uint64_t local_30;
  uint64_t local_28;
  uint32_t local_20;
  uint32_t local_1c;
  uint32_t local_18;
  
  local_48 = *(uint64_t *)(self + 0x610);
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 1;
  local_58 = 0x44200000;
  local_54 = 0x43f00000;
  local_50 = 1;
  local_40 = SMBMenuInChapterReload;
  local_18 = 0;
  GSMBCutSceneManager__PlayCutScene(SMBCutSceneManager,(SMBCutScene *)&local_58);
  *(uint32_t *)(self + 0xd00) = 0;
  bMenuTransitioning = 1;
  *(long *)(self + 0xce0) = *(long *)(self + 0xcc8);
  pFVar1 = (FPUVector *)(*(long *)(*(long *)(self + 0xcc8) + 8) + 0x30);
  SetupMenuIconTween(pFVar1,pFVar1,(Basic *)(self + 0x478));
  return;
}

/* ======================================================================
 * GSMBMenu__TransitionOutReloadChapter  (Ghidra `TransitionOutReloadChapter` @ 004d41b0)
 * Signature: uint8_t __thiscall TransitionOutReloadChapter(GSMBMenu * self)
 * Class: GSMBMenu
 * Calls: `DisableLoadingRenderThread`, `EnableLoadingRenderThread`, `GSMBCutSceneManager__PlayCutScene`, `RenderLoadingScreenFunc`, `SMBLevelPortal__LoadSelectedChapter`
 * Called by: `SMBMenuInChapterReload`
 */
/* GSMBMenu__TransitionOutReloadChapter() */

void __thiscall GSMBMenu__TransitionOutReloadChapter(GSMBMenu *self)

{
  uint32_t local_58;
  uint32_t local_54;
  uint32_t local_50;
  uint64_t local_48;
  uint64_t local_40;
  uint64_t local_38;
  uint64_t local_30;
  uint64_t local_28;
  uint32_t local_20;
  uint32_t local_1c;
  uint32_t local_18;
  
  local_48 = *(uint64_t *)(self + 0x618);
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 1;
  local_58 = 0x44200000;
  local_54 = 0x43f00000;
  local_50 = 1;
  local_18 = 0;
  EnableLoadingRenderThread(RenderLoadingScreenFunc);
  SMBLevelPortal__LoadSelectedChapter(SuperMeatBoyPortal);
  DisableLoadingRenderThread();
  GSMBCutSceneManager__PlayCutScene(SMBCutSceneManager,(SMBCutScene *)&local_58);
  RestoreControls();
  bMenuTransitioning = 0;
  if (LoadedPortalChapter != 0) {
    FlashAnimationLibrary__SetTextFieldText
              (*(char **)(self + 0x4f8),"chaptername",*(uint64_t *)(LoadedPortalChapter + 0xa0));
  }
  SetLevelDisplay(self);
  return;
}

/* ======================================================================
 * GSMBMenu__TransitionOutGameFromMenu  (Ghidra `TransitionOutGameFromMenu` @ 004d42a0)
 * Signature: uint8_t __thiscall TransitionOutGameFromMenu(GSMBMenu * self)
 * Class: GSMBMenu
 * Calls: `DisableLoadingRenderThread`, `EnableLoadingRenderThread`, `GSMBCutSceneManager__PlayCutScene`, `GSuperMeatBoy__Freeze`, `GSuperMeatBoy__ShowCurrentReplay`, `Loader__WaitAll`, `RenderLoadingScreenFunc`, `SMBMenuGameTransitionOut`, `SMBReplayManager__LoadSelectedReplayData`
 * Called by: `SMBMenuInGameFromMenu`
 */
/* GSMBMenu__TransitionOutGameFromMenu() */

void __thiscall GSMBMenu__TransitionOutGameFromMenu(GSMBMenu *self)

{
  uint32_t local_58;
  uint32_t local_54;
  uint32_t local_50;
  uint64_t local_48;
  code *local_40;
  uint64_t local_38;
  uint64_t local_30;
  uint64_t local_28;
  uint32_t local_20;
  uint32_t local_1c;
  uint32_t local_18;
  
  local_48 = *(uint64_t *)(self + 0x618);
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 1;
  local_58 = 0x44200000;
  local_54 = 0x43f00000;
  local_50 = 1;
  local_40 = SMBMenuGameTransitionOut;
  local_18 = 0;
  EnableLoadingRenderThread(RenderLoadingScreenFunc);
  LoadSelectedLevel(self);
  Loader__WaitAll();
  if (*(short *)(SMBMenu + 0x1840) == 1) {
    RenderLayers__RemoveLayer((RenderLayer *)self);
    SMBReplayManager__LoadSelectedReplayData((SMBReplayManager *)(self + 0x1308));
    GSuperMeatBoy__ShowCurrentReplay(SuperMeatBoy,0);
  }
  DisableLoadingRenderThread();
  GSMBCutSceneManager__PlayCutScene(SMBCutSceneManager,(SMBCutScene *)&local_58);
  GSuperMeatBoy__Freeze(SuperMeatBoy,0);
  return;
}

/* ======================================================================
 * GSMBMenu__MoveToNextChar  (Ghidra `MoveToNextChar` @ 004d43a0)
 * Signature: uint8_t __thiscall MoveToNextChar(GSMBMenu * self)
 * Class: GSMBMenu
 * Calls: (none)
 * Called by: (none)
 */
/* GSMBMenu__MoveToNextChar() */

void __thiscall GSMBMenu__MoveToNextChar(GSMBMenu *self)

{
  int iVar1;
  
  if (currCharMoveState == 2) {
    iVar1 = *(int *)(self + 0xd08) + 1;
    if ((int)(*(ushort *)(self + 0xbe8) - 1) < iVar1) {
      iVar1 = 0;
    }
    else if (iVar1 < 0) {
      iVar1 = *(ushort *)(self + 0xbe8) - 1;
    }
    *(int *)(self + 0xd08) = iVar1;
    currCharMoveState = 1;
    *(uint32_t *)(*(long *)(self + 0x748) + 0x20) = *(uint32_t *)(self + 0x764);
    *(uint32_t *)(*(long *)(self + 0x678) + 0x58) = 0;
    SetCharSilouetteText(self);
    return;
  }
  return;
}

/* ======================================================================
 * GSMBMenu__MoveToPrevChar  (Ghidra `MoveToPrevChar` @ 004d4410)
 * Signature: uint8_t __thiscall MoveToPrevChar(GSMBMenu * self)
 * Class: GSMBMenu
 * Calls: (none)
 * Called by: (none)
 */
/* GSMBMenu__MoveToPrevChar() */

void __thiscall GSMBMenu__MoveToPrevChar(GSMBMenu *self)

{
  int iVar1;
  
  if (currCharMoveState == 2) {
    iVar1 = *(int *)(self + 0xd08) + -1;
    if ((int)(*(ushort *)(self + 0xbe8) - 1) < iVar1) {
      iVar1 = 0;
    }
    else if (iVar1 < 0) {
      iVar1 = *(ushort *)(self + 0xbe8) - 1;
    }
    *(int *)(self + 0xd08) = iVar1;
    currCharMoveState = 0;
    *(uint32_t *)(*(long *)(self + 0x748) + 0x20) = *(uint32_t *)(self + 0x760);
    *(uint32_t *)(*(long *)(self + 0x678) + 0x58) = 0;
    SetCharSilouetteText(self);
    return;
  }
  return;
}

/* ======================================================================
 * GSMBMenu__PlayCharacterOn  (Ghidra `PlayCharacterOn` @ 004d4480)
 * Signature: uint8_t __thiscall PlayCharacterOn(GSMBMenu * self)
 * Class: GSMBMenu
 * Calls: (none)
 * Called by: (none)
 */
/* GSMBMenu__PlayCharacterOn() */

void __thiscall GSMBMenu__PlayCharacterOn(GSMBMenu *self)

{
  if (*(int *)(*(long *)(self + 0xbf8) + (ulong)*(ushort *)(self + 0xd08) * 0x2c + 0x14) != 1) {
    return;
  }
  *(uint32_t *)(self + 0xd04) = 5;
  *(uint32_t *)(*(long *)(self + 0x678) + 0x58) = 0;
  HideCharMenu();
  return;
}

/* ======================================================================
 * GSMBMenu__SelectCharacter  (Ghidra `SelectCharacter` @ 004d44d0)
 * Signature: uint8_t __thiscall SelectCharacter(GSMBMenu * self)
 * Class: GSMBMenu
 * Calls: `GSMBChapterData__IsChapterUnlocked`, `GSMBCutSceneManager__PlayCutScene`, `GSuperMeatBoy__DeferLoadCharactor`, `SMBMenuInGameFromMenu`, `TInput__HasCodeBeenEntered`, `TInput__UnregisterCode`
 * Called by: (none)
 */
/* GSMBMenu__SelectCharacter() */

void __thiscall GSMBMenu__SelectCharacter(GSMBMenu *self)

{
  int iVar1;
  uint32_t uVar2;
  uint32_t local_68;
  uint32_t local_64;
  uint32_t local_60;
  uint64_t local_58;
  code *local_50;
  uint64_t local_48;
  uint64_t local_40;
  uint64_t local_38;
  uint32_t local_30;
  uint32_t local_2c;
  uint32_t local_28;
  
  local_58 = *(uint64_t *)(self + 0x610);
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_2c = 1;
  local_68 = 0x44200000;
  local_64 = 0x43f00000;
  local_60 = 1;
  local_50 = SMBMenuInGameFromMenu;
  local_28 = 0;
  GSMBCutSceneManager__PlayCutScene(SMBCutSceneManager,(SMBCutScene *)&local_68);
  bMenuTransitioning = 1;
  uVar2 = *(uint32_t *)(*(long *)(self + 0xbf8) + (ulong)*(ushort *)(self + 0xd08) * 0x2c);
  TInput__HasCodeBeenEntered(Input,(tagCheatCode *)playAsDrFetus);
  iVar1 = TInput__HasCodeBeenEntered(Input,(tagCheatCode *)playAsBrownie);
  if ((iVar1 == 1) && (iVar1 = GSMBChapterData__IsChapterUnlocked(SMBChapterData,4), iVar1 == 1)) {
    uVar2 = 5;
  }
  else {
    iVar1 = TInput__HasCodeBeenEntered(Input,(tagCheatCode *)playAsTofuBoy);
    if (iVar1 == 1) {
      uVar2 = 0x14;
    }
    else {
      iVar1 = TInput__HasCodeBeenEntered(Input,(tagCheatCode *)playAsWOG);
      if (iVar1 == 1) {
        uVar2 = 0xd;
      }
      else {
        iVar1 = TInput__HasCodeBeenEntered(Input,(tagCheatCode *)playAsTim);
        if (iVar1 == 1) {
          uVar2 = 0x1d;
        }
      }
    }
  }
  HideCharMenu();
  TInput__UnregisterCode(Input,(tagCheatCode *)playAsBrownie);
  TInput__UnregisterCode(Input,(tagCheatCode *)playAsDrFetus);
  TInput__UnregisterCode(Input,(tagCheatCode *)playAsTofuBoy);
  TInput__UnregisterCode(Input,(tagCheatCode *)playAsWOG);
  TInput__UnregisterCode(Input,(tagCheatCode *)playAsTim);
  GSuperMeatBoy__DeferLoadCharactor(SuperMeatBoy,uVar2);
  return;
}

/* ======================================================================
 * GSMBMenu__GetNextChapter  (Ghidra `GetNextChapter` @ 004d46b0)
 * Signature: uint8_t __thiscall GetNextChapter(GSMBMenu * self, int arg1)
 * Class: GSMBMenu
 * Calls: `GSMBChapterData__IsChapterUnlocked`
 * Called by: (none)
 */
/* GSMBMenu__GetNextChapter(int) */

int __thiscall GSMBMenu__GetNextChapter(GSMBMenu *self,int arg1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(self + 0x41c) + -1;
  if (arg1 == 1) {
    iVar2 = *(int *)(self + 0x41c) + 1;
    while (iVar1 = GSMBChapterData__IsChapterUnlocked(SMBChapterData,iVar2), iVar1 == 0) {
      iVar1 = iVar2 + 1;
      if ((iVar1 == 0) || (iVar1 == 8)) {
        iVar1 = iVar2 + 2;
      }
      iVar2 = 1;
      if (iVar1 < 10) {
        iVar2 = iVar1;
      }
    }
  }
  else {
    while (iVar1 = GSMBChapterData__IsChapterUnlocked(SMBChapterData,iVar2), iVar1 == 0) {
      if (iVar2 == 0) {
        iVar2 = 9;
      }
      else {
        iVar2 = iVar2 + -1;
        if (iVar2 == 8) {
          iVar2 = 7;
        }
      }
    }
  }
  return iVar2;
}

/* ======================================================================
 * GSMBMenu__TransitionInNextWorldMap  (Ghidra `TransitionInNextWorldMap` @ 004d4750)
 * Signature: uint8_t __thiscall TransitionInNextWorldMap(GSMBMenu * self, int arg1)
 * Class: GSMBMenu
 * Calls: `GSMBChapterData__IsChapterUnlocked`, `GSMBCutSceneManager__PlayCutScene`, `SMBMenuTransitionWorldLeftIn`, `SMBMenuTransitionWorldRightIn`, `System_IsTrialMode`
 * Called by: `SMBMenuLoadNextWorld`, `SMBMenuLoadPrevWorld`
 */
/* GSMBMenu__TransitionInNextWorldMap(int) */

void __thiscall GSMBMenu__TransitionInNextWorldMap(GSMBMenu *self,int arg1)

{
  int iVar1;
  int iVar2;
  uint32_t local_78;
  uint32_t local_74;
  uint32_t local_70;
  uint64_t local_68;
  code *local_60;
  uint64_t local_58;
  uint64_t local_50;
  uint64_t local_48;
  uint32_t local_40;
  uint32_t local_3c;
  uint32_t local_38;
  
  iVar1 = System_IsTrialMode();
  if (iVar1 != 1) {
    iVar1 = *(int *)(self + 0x41c) + -1;
    if (arg1 == 1) {
      iVar1 = *(int *)(self + 0x41c) + 1;
      while (iVar2 = GSMBChapterData__IsChapterUnlocked(SMBChapterData,iVar1), iVar2 == 0) {
        iVar2 = iVar1 + 1;
        if ((iVar2 == 0) || (iVar2 == 8)) {
          iVar2 = iVar1 + 2;
        }
        iVar1 = 1;
        if (iVar2 < 10) {
          iVar1 = iVar2;
        }
      }
    }
    else {
      while (iVar2 = GSMBChapterData__IsChapterUnlocked(SMBChapterData,iVar1), iVar2 == 0) {
        if (iVar1 == 0) {
          iVar1 = 9;
        }
        else {
          iVar1 = iVar1 + -1;
          if (iVar1 == 8) {
            iVar1 = 7;
          }
        }
      }
    }
    if (*(int *)(self + 0x41c) != iVar1) {
      bMenuTransitioning = 1;
      if (arg1 == 1) {
        local_68 = *(uint64_t *)(self + 0x640);
        local_58 = 0;
        local_50 = 0;
        local_48 = 0;
        local_40 = 0;
        local_3c = 1;
        local_78 = 0x44200000;
        local_74 = 0x43f00000;
        local_70 = 1;
        local_60 = SMBMenuTransitionWorldRightIn;
        local_38 = 0;
        GSMBCutSceneManager__PlayCutScene(SMBCutSceneManager,(SMBCutScene *)&local_78);
        return;
      }
      local_68 = *(uint64_t *)(self + 0x630);
      local_58 = 0;
      local_50 = 0;
      local_48 = 0;
      local_40 = 0;
      local_3c = 1;
      local_78 = 0x44200000;
      local_74 = 0x43f00000;
      local_70 = 1;
      local_60 = SMBMenuTransitionWorldLeftIn;
      local_38 = 0;
      GSMBCutSceneManager__PlayCutScene(SMBCutSceneManager,(SMBCutScene *)&local_78);
      return;
    }
  }
  RestoreWorldMapControls();
  return;
}

/* ======================================================================
 * GSMBMenu__TransitionOutNextWorldMap  (Ghidra `TransitionOutNextWorldMap` @ 004d49e0)
 * Signature: uint8_t __thiscall TransitionOutNextWorldMap(GSMBMenu * self, int arg1)
 * Class: GSMBMenu
 * Calls: `GSMBCutSceneManager__PlayCutScene`, `SMBMenuWorldNextTransEnd`
 * Called by: (none)
 */
/* GSMBMenu__TransitionOutNextWorldMap(int) */

void __thiscall GSMBMenu__TransitionOutNextWorldMap(GSMBMenu *self,int arg1)

{
  uint32_t local_58;
  uint32_t local_54;
  uint32_t local_50;
  uint64_t local_48;
  code *local_40;
  uint64_t local_38;
  uint64_t local_30;
  uint64_t local_28;
  uint32_t local_20;
  uint32_t local_1c;
  uint32_t local_18;
  
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 1;
  local_58 = 0x44200000;
  local_54 = 0x43f00000;
  local_50 = 1;
  if (arg1 == 1) {
    local_48 = *(uint64_t *)(self + 0x648);
  }
  else {
    local_48 = *(uint64_t *)(self + 0x638);
  }
  local_40 = SMBMenuWorldNextTransEnd;
  local_18 = 0;
  GSMBCutSceneManager__PlayCutScene(SMBCutSceneManager,(SMBCutScene *)&local_58);
  return;
}

/* ======================================================================
 * GSMBMenu__StartGame  (Ghidra `StartGame` @ 004d4a70)
 * Signature: uint8_t __thiscall StartGame(GSMBMenu * self)
 * Class: GSMBMenu
 * Calls: `CreateRemoteFolder`, `GSMBChapterData__UnlockChapter`, `GSMBCutSceneManager__PlayCutScene`, `GSuperMeatBoy__SwitchGameMode`, `SMBInternetChapterSel__SetRemoteFolder`, `TPlayer__GetProfile`, `operator_delete`
 * Called by: (none)
 */
/* GSMBMenu__StartGame() */

void __thiscall GSMBMenu__StartGame(GSMBMenu *self)

{
  ushort uVar1;
  uint64_t *puVar2;
  RemoteFolder *pRVar3;
  long lVar4;
  uint32_t local_78;
  uint32_t local_74;
  uint32_t local_70;
  uint64_t local_68;
  uint64_t local_60;
  uint64_t local_58;
  uint64_t local_50;
  uint64_t local_48;
  uint32_t local_40;
  uint32_t local_3c;
  uint32_t local_38;
  uint64_t local_28;
  uint32_t local_20;
  uint64_t local_18;
  
  puVar2 = *(uint64_t **)(self + 0x1158);
  if (puVar2 != (uint64_t *)0x0) {
    *puVar2 = &PTR___cxa_pure_virtual_005c6b30;
    operator_delete(puVar2);
  }
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_18 = TPlayer__GetProfile((TPlayer *)Players__Player);
  local_20 = 0;
  pRVar3 = (RemoteFolder *)CreateRemoteFolder(&local_28);
  *(RemoteFolder **)(self + 0x1158) = pRVar3;
  SMBInternetChapterSel__SetRemoteFolder((SMBInternetChapterSel *)(self + 0x1448),pRVar3);
  GSuperMeatBoy__SwitchGameMode(SuperMeatBoy,10);
  GSMBChapterData__UnlockChapter(SMBChapterData,1);
  GSMBChapterData__UnlockChapter(SMBChapterData,9);
  *(uint64_t *)(self + 0xcf0) = 0;
  *(uint16_t *)(self + 0x1818) = 0;
  if ((*(int *)(self + 0x1820) == 1) && (uVar1 = *(ushort *)(self + 0x181a), uVar1 != 0)) {
    lVar4 = 0;
    do {
      *(uint16_t *)(*(long *)(self + 0x1830) + lVar4) = 0xffff;
      lVar4 = lVar4 + 2;
    } while (lVar4 != (ulong)(uVar1 - 1 & 0xffff) * 2 + 2);
  }
  local_68 = *(uint64_t *)(self + 0x628);
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_3c = 1;
  local_78 = 0x44200000;
  local_74 = 0x43f00000;
  local_70 = 1;
  local_38 = 0;
  GSMBCutSceneManager__PlayCutScene(SMBCutSceneManager,(SMBCutScene *)&local_78);
  return;
}

/* ======================================================================
 * GSMBMenu__Update  (Ghidra `Update` @ 004d4bf0)
 * Signature: uint8_t __thiscall Update(GSMBMenu * self)
 * Class: GSMBMenu
 * Calls: `AutoLockSection__AutoLockSection`, `AutoLockSection__AutoLockSection__005b59d0`, `EnterTitleMenu`, `FlashLibraryInstance__IsPlaying`, `FlashLibraryInstance__Reset`, `GSMBCutSceneManager__PlayCutScene`, `GSuperMeatBoy__DeferLoadCharactor`, `GSuperMeatBoy__SwitchGameMode`, `SMBChapter__AllowCharSelect`, `SMBChapter__PlayBossIntro` (+11 more)
 * Called by: `GSuperMeatBoy__Update__00516690`
 */
/* GSMBMenu__Update() */

void __thiscall GSMBMenu__Update(GSMBMenu *self)

{
  SMBUpsellMenu *this_00;
  uint64_t *puVar1;
  ushort *puVar2;
  uint32_t *puVar3;
  long lVar4;
  GSuperMeatBoy *pGVar5;
  float fVar6;
  short sVar7;
  int iVar8;
  GSMBMenu *pGVar9;
  long lVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  float fVar14;
  uint32_t local_78;
  uint32_t local_74;
  uint32_t local_70;
  uint64_t local_68;
  code *local_60;
  uint64_t local_58;
  uint64_t local_50;
  uint64_t local_48;
  uint32_t local_40;
  uint32_t local_3c;
  uint32_t local_38;
  AutoLockSection local_28 [12];
  uint32_t local_1c [3];
  
  AutoLockSection__AutoLockSection(local_28,(CriticalSection *)SMBMenuSection);
  if (bEnterTitleMenu == 1) {
    EnterTitleMenu();
    goto LAB_004d4d48;
  }
  if (*(long **)(self + 0x17e8) == (long *)0x0) {
LAB_004d4c3c:
    iVar8 = *(int *)(self + 0xd04);
  }
  else {
                    /* try { // try from 004d4c24 to 004d4d2d has its CatchHandler @ 004d540f */
    (**(code **)(**(long **)(self + 0x17e8) + 0x38))();
    iVar8 = SMBPopupMenu__ShouldDelete(*(SMBPopupMenu **)(self + 0x17e8));
    if (iVar8 != 1) goto LAB_004d4c3c;
    iVar8 = *(int *)(self + 0xd04);
    *(uint64_t *)(self + 0x17e8) = 0;
  }
  if ((iVar8 == 5) &&
     (iVar8 = FlashLibraryInstance__IsPlaying(*(FlashLibraryInstance **)(self + 0x678)), iVar8 == 0)
     ) {
    SelectCharacter(self);
    *(uint32_t *)(self + 0xd04) = 4;
  }
  if ((self[0x1842] == (GSMBMenu)0x1) && (*(int *)(self + 0xd04) == 2)) {
    this_00 = (SMBUpsellMenu *)(self + 0x1600);
                    /* try { // try from 004d4d79 to 004d53ff has its CatchHandler @ 004d540f */
    SMBUpsellMenu__SetUpsellAchievementMode(this_00,0);
    SMBUpsellMenu__SetUpsellNotExitMode(this_00,(uint)(byte)self[0x1842]);
    SMBUpsellMenu__SetUpsellOutroMode(this_00,(uint)(byte)self[0x1842]);
    SMBUpsellMenu__Activate(this_00);
    self[0x1842] = (GSMBMenu)0x0;
    goto LAB_004d4d48;
  }
  if ((bMenuTransitioning == 1) || (iVar8 = *(int *)(self + 0xd04), iVar8 == 0x15))
  goto LAB_004d4d48;
  if ((iVar8 == 7) || ((((iVar8 == 1 || (iVar8 == 2)) || (iVar8 == 0x17)) || (iVar8 == 0x16)))) {
    if (*(int *)(self + 0x418) == 9) {
      SMBLevelPortal__Update(SuperMeatBoyPortal);
    }
    fVar6 = fOneFrameTimeStep;
    if (*(int *)(self + 0x4b8) == 1) {
      if ((*(int *)(self + 0x4c0) == 0) &&
         (fVar14 = *(float *)(self + 0x4ac) + fOneFrameTimeStep, *(float *)(self + 0x4ac) = fVar14,
         *(float *)(self + 0x4b4) <= fVar14)) {
        *(uint32_t *)(self + 0x4b8) = 0;
        *(uint32_t *)(self + 0x4ac) = 0;
        goto LAB_004d4ca3;
      }
    }
    else if (*(int *)(self + 0x4b8) == 0) {
LAB_004d4ca3:
      if (*(int *)(self + 0x4c0) == 0) {
        fVar14 = *(float *)(self + 0x4ac);
        *(float *)(self + 0x4ac) = fVar6 + fVar14;
        if (fVar6 + fVar14 < *(float *)(self + 0x4b0)) {
          (*(code *)**(uint64_t **)(self + 0x478))(self + 0x478);
        }
        else {
          pGVar9 = self + 0x498;
          if (*(int *)(self + 0x4bc) != 0) {
            pGVar9 = self + 0x488;
          }
          puVar3 = *(uint32_t **)(self + 0x480);
          *puVar3 = *(uint32_t *)pGVar9;
          puVar3[1] = *(uint32_t *)(pGVar9 + 4);
          puVar3[2] = *(uint32_t *)(pGVar9 + 8);
          puVar3[3] = *(uint32_t *)(pGVar9 + 0xc);
          *(uint32_t *)(self + 0x4c4) = 0;
        }
      }
    }
    if (*(short *)(self + 0x1818) == 0) {
      if (*(long *)(self + 0x510) == 0) goto LAB_004d4ef0;
    }
    else if (*(FlashLibraryInstance **)(self + 0x510) == (FlashLibraryInstance *)0x0) {
LAB_004d4ef0:
      *(uint16_t *)(self + 0x1818) = 0;
      if ((*(int *)(self + 0x1820) == 1) && (uVar12 = *(ushort *)(self + 0x181a), uVar12 != 0)) {
        lVar10 = 0;
        do {
          *(uint16_t *)(*(long *)(self + 0x1830) + lVar10) = 0xffff;
          lVar10 = lVar10 + 2;
        } while (lVar10 != (ulong)(uVar12 - 1 & 0xffff) * 2 + 2);
      }
    }
    else {
      iVar8 = FlashLibraryInstance__IsPlaying(*(FlashLibraryInstance **)(self + 0x510));
      if (iVar8 == 0) {
        FlashTextField__SetText(*(wchar_t **)(self + 0x520));
        uVar12 = *(ushort *)(self + 0x1818);
        if (1 < uVar12) {
          lVar10 = 0;
          iVar8 = 0;
          do {
            lVar4 = *(long *)(self + 0x1828);
            iVar8 = iVar8 + 1;
            puVar1 = (uint64_t *)(lVar4 + lVar10);
            lVar10 = lVar10 + 0x80;
            *puVar1 = *(uint64_t *)(lVar4 + lVar10);
            puVar1[1] = *(uint64_t *)(lVar4 + 8 + lVar10);
            puVar1[2] = *(uint64_t *)(lVar4 + 0x10 + lVar10);
            puVar1[3] = *(uint64_t *)(lVar4 + 0x18 + lVar10);
            puVar1[4] = *(uint64_t *)(lVar4 + 0x20 + lVar10);
            puVar1[5] = *(uint64_t *)(lVar4 + 0x28 + lVar10);
            puVar1[6] = *(uint64_t *)(lVar4 + 0x30 + lVar10);
            puVar1[7] = *(uint64_t *)(lVar4 + 0x38 + lVar10);
            puVar1[8] = *(uint64_t *)(lVar4 + 0x40 + lVar10);
            puVar1[9] = *(uint64_t *)(lVar4 + 0x48 + lVar10);
            puVar1[10] = *(uint64_t *)(lVar4 + 0x50 + lVar10);
            puVar1[0xb] = *(uint64_t *)(lVar4 + 0x58 + lVar10);
            puVar1[0xc] = *(uint64_t *)(lVar4 + 0x60 + lVar10);
            puVar1[0xd] = *(uint64_t *)(lVar4 + 0x68 + lVar10);
            puVar1[0xe] = *(uint64_t *)(lVar4 + 0x70 + lVar10);
            puVar1[0xf] = *(uint64_t *)(lVar4 + 0x78 + lVar10);
            uVar12 = *(ushort *)(self + 0x1818);
          } while (iVar8 < (int)(uVar12 - 1));
        }
        if ((*(int *)(self + 0x1820) == 1) && (uVar13 = *(ushort *)(self + 0x181a), uVar13 != 0)) {
          uVar12 = 0;
          do {
            puVar2 = (ushort *)(*(long *)(self + 0x1830) + (ulong)uVar12 * 2);
            if (*puVar2 == 0) {
              *puVar2 = 0xffff;
              uVar13 = *(ushort *)(self + 0x181a);
            }
            else {
              uVar11 = *puVar2 - 1;
              if (uVar11 < 0xfffe) {
                *puVar2 = uVar11;
                uVar13 = *(ushort *)(self + 0x181a);
              }
            }
            uVar12 = uVar12 + 1;
          } while (uVar12 < uVar13);
          uVar12 = *(ushort *)(self + 0x1818);
        }
        sVar7 = 0;
        if (uVar12 != 0) {
          sVar7 = uVar12 - 1;
        }
        *(short *)(self + 0x1818) = sVar7;
        FlashLibraryInstance__Reset(*(FlashLibraryInstance **)(self + 0x510));
      }
    }
    if ((*(int *)(self + 0xd04) == 7) &&
       (iVar8 = FlashLibraryInstance__IsPlaying(*(FlashLibraryInstance **)(self + 0x4e8)),
       iVar8 == 0)) {
      if ((*(byte *)(*(long *)(self + 0xce0) + 2) & 4) == 0) {
        iVar8 = SMBChapter__AllowCharSelect
                          ((SMBChapter *)(SuperMeatBoy + 0x90),(tagSuperMeatBoyCharactor *)local_1c)
        ;
        local_58 = 0;
        local_50 = 0;
        local_48 = 0;
        local_40 = 0;
        local_3c = 1;
        local_78 = 0x44200000;
        local_74 = 0x43f00000;
        local_70 = 1;
        if ((*(uint *)(SMBChapterData + 0x1d68) < 2) || (iVar8 != 1)) {
          local_68 = *(uint64_t *)(self + 0x610);
          local_60 = SMBMenuInGameFromMenu;
          local_38 = 0;
          GSMBCutSceneManager__PlayCutScene(SMBCutSceneManager,(SMBCutScene *)&local_78);
          bMenuTransitioning = 1;
          GSuperMeatBoy__DeferLoadCharactor(SuperMeatBoy,local_1c[0]);
        }
        else {
          local_68 = *(uint64_t *)(self + 0x668);
          local_60 = SMBMenuTransitionInCharMenu;
          local_38 = 0;
          GSMBCutSceneManager__PlayCutScene(SMBCutSceneManager,(SMBCutScene *)&local_78);
          *(uint32_t *)(self + 0xd04) = 10;
        }
      }
      else {
        SMBChapter__PlayBossIntro((SMBChapter *)(SuperMeatBoy + 0x90),SMBMenuBossIntroFinished,0);
        pGVar9 = SMBMenu;
        *(uint32_t *)(self + 0x420) = 10;
        *(uint32_t *)(self + 0xd00) = 99;
        *(uint64_t *)(self + 0xce0) = *(uint64_t *)(self + 0xce8);
        UnloadChapterMenu(pGVar9);
        RenderLayers__RemoveLayer((RenderLayer *)self);
        RemoveControls();
        pGVar5 = SuperMeatBoy;
        *(uint32_t *)(self + 0xd04) = 0;
        SMBChapter__StopChapterMenuMusic((SMBChapter *)(pGVar5 + 0x90));
      }
    }
    goto LAB_004d4d48;
  }
  if (iVar8 == 8) {
    iVar8 = FlashLibraryInstance__IsPlaying(*(FlashLibraryInstance **)(self + 0x4d8));
    if ((iVar8 == 0) && (bMenuTransitioning == 0)) {
      local_68 = *(uint64_t *)(self + 0x620);
      bMenuTransitioning = 1;
      local_58 = 0;
      local_50 = 0;
      local_48 = 0;
      local_40 = 0;
      local_3c = 1;
      local_78 = 0x44200000;
      local_74 = 0x43f00000;
      local_70 = 1;
      local_60 = SMBMenuInChapterTrans;
      local_38 = 0;
      GSMBCutSceneManager__PlayCutScene(SMBCutSceneManager,(SMBCutScene *)&local_78);
    }
    goto LAB_004d4d48;
  }
  if (iVar8 == 3) goto LAB_004d4d48;
  if (iVar8 == 0xc) {
    iVar8 = FlashLibraryInstance__IsPlaying(*(FlashLibraryInstance **)(self + 0x808));
    if (iVar8 == 0) {
      ShowTitleMenu(self,0);
    }
    goto LAB_004d4d48;
  }
  if (iVar8 == 0xf) {
LAB_004d5150:
    if (iVar8 != 0xd) goto LAB_004d4d48;
  }
  else if (iVar8 != 0xd) {
    if (iVar8 != 0xb) {
      if (iVar8 == 0x10) {
        iVar8 = FlashLibraryInstance__IsPlaying(*(FlashLibraryInstance **)(self + 0x7f8));
        if (iVar8 == 0) {
          GSuperMeatBoy__SwitchGameMode(SuperMeatBoy,0xc);
        }
      }
      else if (iVar8 - 0x11U < 3) {
        if (iVar8 == 0x12) {
          iVar8 = FlashLibraryInstance__IsPlaying(*(FlashLibraryInstance **)(self + 2000));
          if (iVar8 == 0) {
            FlashLibraryInstance__Reset(*(FlashLibraryInstance **)(self + 2000));
            *(uint32_t *)(self + 0xd04) = 0x11;
          }
        }
        else if ((iVar8 == 0x13) &&
                (iVar8 = FlashLibraryInstance__IsPlaying(*(FlashLibraryInstance **)(self + 0x7d8)),
                iVar8 == 0)) {
          FlashLibraryInstance__Reset(*(FlashLibraryInstance **)(self + 0x7d8));
          *(uint32_t *)(self + 0xd04) = 0;
          RenderLayers__RemoveLayer((RenderLayer *)self);
        }
      }
      goto LAB_004d4d48;
    }
    goto LAB_004d5150;
  }
  iVar8 = FlashLibraryInstance__IsPlaying(*(FlashLibraryInstance **)(self + 0x810));
  if (iVar8 == 0) {
    StartGame(self);
  }
LAB_004d4d48:
  AutoLockSection__AutoLockSection__005b59d0(local_28);
  return;
}

/* ======================================================================
 * GSMBMenu__ShowExitMessage  (Ghidra `ShowExitMessage` @ 004d5430)
 * Signature: uint8_t __stdcall ShowExitMessage(void)
 * Class: GSMBMenu
 * Calls: `CreateMessage`, `GetLocalizedText`, `SMBMenuExitGameFromMsg`, `UserAlertCloseCurrent`
 * Called by: (none)
 */
/* GSMBMenu__ShowExitMessage() */

void GSMBMenu__ShowExitMessage(void)

{
  uint32_t local_78 [2];
  uint64_t local_70;
  uint64_t local_68;
  uint64_t local_60;
  uint64_t local_58;
  code *local_50;
  code *local_48;
  uint64_t local_40;
  uint64_t local_38;
  uint64_t local_30;
  uint64_t local_28;
  uint64_t local_20;
  uint64_t local_18;
  uint64_t local_10;
  
  local_78[0] = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = (code *)0x0;
  local_48 = (code *)0x0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  local_70 = GetLocalizedText(0xb8);
  local_68 = GetLocalizedText(0xb9);
  local_78[0] = 0x1e;
  local_60 = GetLocalizedText(4);
  local_58 = GetLocalizedText(5);
  local_50 = SMBMenuExitGameFromMsg;
  local_48 = UserAlertCloseCurrent;
  CreateMessage(local_78);
  return;
}

/* ======================================================================
 * GSMBMenu__IncrementTitleOption  (Ghidra `IncrementTitleOption` @ 004d5520)
 * Signature: uint8_t __thiscall IncrementTitleOption(GSMBMenu * self)
 * Class: GSMBMenu
 * Calls: `System_IsTrialMode`
 * Called by: (none)
 */
/* GSMBMenu__IncrementTitleOption() */

void __thiscall GSMBMenu__IncrementTitleOption(GSMBMenu *self)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(self + 0xd04) != 0xf) {
    return;
  }
  iVar1 = *(int *)(self + 0x818);
  iVar3 = iVar1 + 1;
  *(int *)(self + 0x818) = iVar3;
  if (iVar3 == 5) {
    iVar2 = System_IsTrialMode();
    iVar3 = *(int *)(self + 0x818);
    if (iVar2 == 0) {
      iVar3 = iVar3 + 1;
      *(int *)(self + 0x818) = iVar3;
    }
  }
  if (iVar3 == 7) {
    *(uint32_t *)(self + 0x818) = 0;
  }
  *(uint32_t *)(*(long *)(self + (long)iVar1 * 0x20 + 0x838) + 0x20) =
       *(uint32_t *)(self + ((long)iVar1 + 0x41) * 0x20 + 8);
  *(uint32_t *)(*(long *)(self + (long)*(int *)(self + 0x818) * 0x20 + 0x838) + 0x20) =
       *(uint32_t *)(self + ((long)*(int *)(self + 0x818) + 0x41) * 0x20 + 0xc);
  return;
}

/* ======================================================================
 * GSMBMenu__DecrementTitleOption  (Ghidra `DecrementTitleOption` @ 004d55e0)
 * Signature: uint8_t __thiscall DecrementTitleOption(GSMBMenu * self)
 * Class: GSMBMenu
 * Calls: `System_IsTrialMode`
 * Called by: (none)
 */
/* GSMBMenu__DecrementTitleOption() */

void __thiscall GSMBMenu__DecrementTitleOption(GSMBMenu *self)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(self + 0xd04) != 0xf) {
    return;
  }
  iVar1 = *(int *)(self + 0x818);
  iVar3 = iVar1 + -1;
  *(int *)(self + 0x818) = iVar3;
  if (iVar3 == 5) {
    iVar2 = System_IsTrialMode();
    iVar3 = *(int *)(self + 0x818);
    if (iVar2 == 0) {
      iVar3 = iVar3 + -1;
      *(int *)(self + 0x818) = iVar3;
    }
  }
  if (iVar3 == -1) {
    *(uint32_t *)(self + 0x818) = 6;
  }
  *(uint32_t *)(*(long *)(self + (long)iVar1 * 0x20 + 0x838) + 0x20) =
       *(uint32_t *)(self + ((long)iVar1 + 0x41) * 0x20 + 8);
  *(uint32_t *)(*(long *)(self + (long)*(int *)(self + 0x818) * 0x20 + 0x838) + 0x20) =
       *(uint32_t *)(self + ((long)*(int *)(self + 0x818) + 0x41) * 0x20 + 0xc);
  return;
}

/* ======================================================================
 * GSMBMenu__GoBackToTitleFromPause  (Ghidra `GoBackToTitleFromPause` @ 004d56a0)
 * Signature: uint8_t __stdcall GoBackToTitleFromPause(void)
 * Class: GSMBMenu
 * Calls: `ShowTitleMenuPress`
 * Called by: (none)
 */
/* GSMBMenu__GoBackToTitleFromPause() */

void GSMBMenu__GoBackToTitleFromPause(void)

{
  GSuperMeatBoy__HidePauseMenu((int)SuperMeatBoy);
  ShowTitleMenuPress((tagButtonProps *)0x0,(void *)0x0);
  return;
}

/* ======================================================================
 * GSMBMenu__GoBackToMapFromPause  (Ghidra `GoBackToMapFromPause` @ 004d56c0)
 * Signature: uint8_t __stdcall GoBackToMapFromPause(void)
 * Class: GSMBMenu
 * Calls: `ShowMenuPress`
 * Called by: (none)
 */
/* GSMBMenu__GoBackToMapFromPause() */

void GSMBMenu__GoBackToMapFromPause(void)

{
  GSuperMeatBoy__HidePauseMenu((int)SuperMeatBoy);
  ShowMenuPress((tagButtonProps *)0x0,(void *)0x0);
  return;
}

/* ======================================================================
 * GSMBMenu__IncrementReplayOption  (Ghidra `IncrementReplayOption` @ 004d56e0)
 * Signature: uint8_t __thiscall IncrementReplayOption(GSMBMenu * self)
 * Class: GSMBMenu
 * Calls: (none)
 * Called by: (none)
 */
/* GSMBMenu__IncrementReplayOption() */

void __thiscall GSMBMenu__IncrementReplayOption(GSMBMenu *self)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(self + 0x81c);
  iVar2 = 0;
  if (iVar1 + 1 != 4) {
    iVar2 = iVar1 + 1;
  }
  *(int *)(self + 0x81c) = iVar2;
  *(uint32_t *)(*(long *)(self + (long)iVar1 * 0x20 + 0xb38) + 0x20) =
       *(uint32_t *)(self + ((long)iVar1 + 0x59) * 0x20 + 8);
  *(uint32_t *)(*(long *)(self + (long)*(int *)(self + 0x81c) * 0x20 + 0xb38) + 0x20) =
       *(uint32_t *)(self + ((long)*(int *)(self + 0x81c) + 0x59) * 0x20 + 0xc);
  return;
}

/* ======================================================================
 * GSMBMenu__DecrementReplayOption  (Ghidra `DecrementReplayOption` @ 004d5740)
 * Signature: uint8_t __thiscall DecrementReplayOption(GSMBMenu * self)
 * Class: GSMBMenu
 * Calls: (none)
 * Called by: (none)
 */
/* GSMBMenu__DecrementReplayOption() */

void __thiscall GSMBMenu__DecrementReplayOption(GSMBMenu *self)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(self + 0x81c);
  iVar2 = 3;
  if (iVar1 + -1 != -1) {
    iVar2 = iVar1 + -1;
  }
  *(int *)(self + 0x81c) = iVar2;
  *(uint32_t *)(*(long *)(self + (long)iVar1 * 0x20 + 0xb38) + 0x20) =
       *(uint32_t *)(self + ((long)iVar1 + 0x59) * 0x20 + 8);
  *(uint32_t *)(*(long *)(self + (long)*(int *)(self + 0x81c) * 0x20 + 0xb38) + 0x20) =
       *(uint32_t *)(self + ((long)*(int *)(self + 0x81c) + 0x59) * 0x20 + 0xc);
  return;
}

/* ======================================================================
 * GSMBMenu__IncrementPauseOption  (Ghidra `IncrementPauseOption` @ 004d57a0)
 * Signature: uint8_t __thiscall IncrementPauseOption(GSMBMenu * self)
 * Class: GSMBMenu
 * Calls: `System_IsTrialMode`
 * Called by: (none)
 */
/* GSMBMenu__IncrementPauseOption() */

void __thiscall GSMBMenu__IncrementPauseOption(GSMBMenu *self)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(self + 0x81c);
  iVar3 = iVar1 + 1;
  *(int *)(self + 0x81c) = iVar3;
  if (iVar3 == 3) {
    iVar2 = System_IsTrialMode();
    iVar3 = *(int *)(self + 0x81c);
    if (iVar2 == 0) {
      iVar3 = iVar3 + 1;
      *(int *)(self + 0x81c) = iVar3;
    }
  }
  if (iVar3 == 7) {
    *(uint32_t *)(self + 0x81c) = 0;
  }
  *(uint32_t *)(*(long *)(self + (long)iVar1 * 0x20 + 0x918) + 0x20) =
       *(uint32_t *)(self + ((long)iVar1 + 0x48) * 0x20 + 8);
  *(uint32_t *)(*(long *)(self + (long)*(int *)(self + 0x81c) * 0x20 + 0x918) + 0x20) =
       *(uint32_t *)(self + ((long)*(int *)(self + 0x81c) + 0x48) * 0x20 + 0xc);
  return;
}

/* ======================================================================
 * GSMBMenu__DecrementPauseOption  (Ghidra `DecrementPauseOption` @ 004d5840)
 * Signature: uint8_t __thiscall DecrementPauseOption(GSMBMenu * self)
 * Class: GSMBMenu
 * Calls: `System_IsTrialMode`
 * Called by: (none)
 */
/* GSMBMenu__DecrementPauseOption() */

void __thiscall GSMBMenu__DecrementPauseOption(GSMBMenu *self)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(self + 0x81c);
  iVar3 = iVar1 + -1;
  *(int *)(self + 0x81c) = iVar3;
  if (iVar3 == 3) {
    iVar2 = System_IsTrialMode();
    iVar3 = *(int *)(self + 0x81c);
    if (iVar2 == 0) {
      iVar3 = iVar3 + -1;
      *(int *)(self + 0x81c) = iVar3;
    }
  }
  if (iVar3 == -1) {
    *(uint32_t *)(self + 0x81c) = 6;
  }
  *(uint32_t *)(*(long *)(self + (long)iVar1 * 0x20 + 0x918) + 0x20) =
       *(uint32_t *)(self + ((long)iVar1 + 0x48) * 0x20 + 8);
  *(uint32_t *)(*(long *)(self + (long)*(int *)(self + 0x81c) * 0x20 + 0x918) + 0x20) =
       *(uint32_t *)(self + ((long)*(int *)(self + 0x81c) + 0x48) * 0x20 + 0xc);
  return;
}

/* ======================================================================
 * GSMBMenu__ShowTitleHelpAndOptions  (Ghidra `ShowTitleHelpAndOptions` @ 004d58e0)
 * Signature: uint8_t __thiscall ShowTitleHelpAndOptions(GSMBMenu * self)
 * Class: GSMBMenu
 * Calls: `Joystick__AddButtonCallback`, `Joystick__AddPOVCallback`, `SMBMenu_ClickBackFromHelpOption`, `SMBMenu_ClickTitleHelpOption`, `SMBMenu_DecrementTitleHelpOption`, `SMBMenu_IncrementTitleHelpOption`, `TKeyboard__AddKeyCallback`, `TPlayer__GetJoystick`
 * Called by: (none)
 */
/* GSMBMenu__ShowTitleHelpAndOptions() */

void __thiscall GSMBMenu__ShowTitleHelpAndOptions(GSMBMenu *self)

{
  Joystick *pJVar1;
  
  RemoveControls();
  if (Keyboard != (TKeyboard *)0x0) {
    TKeyboard__AddKeyCallback(Keyboard,0x76,SMBMenu_ClickTitleHelpOption,0);
    TKeyboard__AddKeyCallback(Keyboard,0x6c,SMBMenu_ClickTitleHelpOption,0);
    TKeyboard__AddKeyCallback(Keyboard,0x1f,SMBMenu_IncrementTitleHelpOption,0);
    TKeyboard__AddKeyCallback(Keyboard,0x7f,SMBMenu_DecrementTitleHelpOption,0);
    TKeyboard__AddKeyCallback(Keyboard,0x23,SMBMenu_ClickBackFromHelpOption,0);
  }
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddButtonCallback(pJVar1,0,SMBMenu_ClickTitleHelpOption,0);
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddButtonCallback(pJVar1,1,SMBMenu_ClickBackFromHelpOption,0);
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddPOVCallback(pJVar1,2,SMBMenu_IncrementTitleHelpOption,0);
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddPOVCallback(pJVar1,0,SMBMenu_DecrementTitleHelpOption,0);
  SetTitleHelpAndOptionsMenuText(self);
  *(uint32_t *)(self + 0x820) = 0;
  *(uint32_t *)(*(long *)(self + 0x9f8) + 0x20) = *(uint32_t *)(self + 0x9ec);
  *(uint32_t *)(*(long *)(self + (long)*(int *)(self + 0x818) * 0x20 + 0x838) + 0x20) =
       *(uint32_t *)(self + ((long)*(int *)(self + 0x818) + 0x41) * 0x20 + 8);
  return;
}

/* ======================================================================
 * GSMBMenu__ClickTitleOption  (Ghidra `ClickTitleOption` @ 004d5a30)
 * Signature: uint8_t __thiscall ClickTitleOption(GSMBMenu * self)
 * Class: GSMBMenu
 * Calls: `CreateMessage`, `GetLocalizedText`, `SMBMenuExitGameFromMsg`, `SMBReplayManager__SetManageOnlyMode`, `SMBUpsellMenu__Activate`, `SMBUpsellMenu__SetUpsellAchievementMode`, `SMBUpsellMenu__SetUpsellNotExitMode`, `SMBUpsellMenu__SetUpsellOutroMode`, `System_IsTrialMode`, `System_PurchaseFullGame` (+2 more)
 * Called by: `SMBMenu_ClickTitleOption`
 */
/* GSMBMenu__ClickTitleOption() */

void __thiscall GSMBMenu__ClickTitleOption(GSMBMenu *self)

{
  SMBReplayManager *this_00;
  SMBUpsellMenu *this_01;
  int iVar1;
  long lVar2;
  uint32_t local_88 [2];
  uint64_t local_80;
  uint64_t local_78;
  uint64_t local_70;
  uint64_t local_68;
  code *local_60;
  code *local_58;
  uint64_t local_50;
  uint64_t local_48;
  uint64_t local_40;
  uint64_t local_38;
  uint64_t local_30;
  uint64_t local_28;
  uint64_t local_20;
  
  if (*(int *)(self + 0xd04) == 0xf) {
    iVar1 = *(int *)(self + 0x818);
    if (iVar1 == 0) {
      *(uint32_t *)(self + 0xd04) = 0xd;
    }
    else if (iVar1 == 1) {
      ShowLeaderboardMenu(self);
    }
    else if (iVar1 == 4) {
      ShowTitleHelpAndOptions(self);
    }
    else {
      if (iVar1 == 3) {
        iVar1 = System_IsTrialMode();
        if (iVar1 == 0) {
          this_00 = (SMBReplayManager *)(self + 0x1308);
          SMBReplayManager__SetManageOnlyMode(this_00,0);
          *(SMBReplayManager **)(self + 0x17e8) = this_00;
          (**(code **)(*(long *)(self + 0x1308) + 0x20))(this_00);
          if (*(int *)(SuperMeatBoy + 0x2c) != 0) {
            return;
          }
          RenderLayers__AddLayer(SMBMenu);
          *(uint32_t *)(self + 0xd04) = 0;
          return;
        }
      }
      else {
        if (iVar1 == 2) {
          *(GSMBMenu **)(self + 0x17e8) = self + 0x13f0;
          (**(code **)(*(long *)(self + 0x13f0) + 0x20))();
          return;
        }
        if (iVar1 == 5) {
          lVar2 = TPlayer__GetProfile((TPlayer *)Players__Player);
          System_PurchaseFullGame(*(uint32_t *)(lVar2 + 0x14));
          return;
        }
        if (iVar1 != 6) {
          return;
        }
        iVar1 = System_IsTrialMode();
        if (iVar1 != 1) {
          local_88[0] = 0;
          local_80 = 0;
          local_78 = 0;
          local_70 = 0;
          local_68 = 0;
          local_60 = (code *)0x0;
          local_58 = (code *)0x0;
          local_50 = 0;
          local_48 = 0;
          local_40 = 0;
          local_38 = 0;
          local_30 = 0;
          local_28 = 0;
          local_20 = 0;
          local_80 = GetLocalizedText(0xb8);
          local_78 = GetLocalizedText(0xb9);
          local_88[0] = 0x1e;
          local_70 = GetLocalizedText(4);
          local_68 = GetLocalizedText(5);
          local_60 = SMBMenuExitGameFromMsg;
          local_58 = UserAlertCloseCurrent;
          CreateMessage(local_88);
          return;
        }
      }
      this_01 = (SMBUpsellMenu *)(self + 0x1600);
      SMBUpsellMenu__SetUpsellAchievementMode(this_01,0);
      SMBUpsellMenu__SetUpsellNotExitMode(this_01,(uint)(byte)self[0x1842]);
      SMBUpsellMenu__SetUpsellOutroMode(this_01,(uint)(byte)self[0x1842]);
      SMBUpsellMenu__Activate(this_01);
    }
  }
  return;
}

/* ======================================================================
 * GSMBMenu__HideTitleHelpAndOptions  (Ghidra `HideTitleHelpAndOptions` @ 004d5cb0)
 * Signature: uint8_t __thiscall HideTitleHelpAndOptions(GSMBMenu * self)
 * Class: GSMBMenu
 * Calls: (none)
 * Called by: (none)
 */
/* GSMBMenu__HideTitleHelpAndOptions() */

void __thiscall GSMBMenu__HideTitleHelpAndOptions(GSMBMenu *self)

{
  RemoveControls();
  ShowTitleMenu(self,1);
  SetTitleMenuText(self);
  *(uint32_t *)(*(long *)(self + (long)*(int *)(self + 0x820) * 0x20 + 0x9f8) + 0x20) =
       *(uint32_t *)(self + ((long)*(int *)(self + 0x820) + 0x4f) * 0x20 + 8);
  *(uint32_t *)(*(long *)(self + (long)*(int *)(self + 0x818) * 0x20 + 0x838) + 0x20) =
       *(uint32_t *)(self + ((long)*(int *)(self + 0x818) + 0x41) * 0x20 + 0xc);
  return;
}

/* ======================================================================
 * GSMBMenu__ShowPauseHelpAndOptions  (Ghidra `ShowPauseHelpAndOptions` @ 004d5d20)
 * Signature: uint8_t __thiscall ShowPauseHelpAndOptions(GSMBMenu * self)
 * Class: GSMBMenu
 * Calls: `Joystick__AddButtonCallback`, `Joystick__AddPOVCallback`, `SMBMenu_ClickBackFromHelpOption`, `SMBMenu_ClickTitleHelpOption`, `SMBMenu_DecrementPauseHelpOption`, `SMBMenu_IncrementPauseHelpOption`, `TKeyboard__AddKeyCallback`, `TPlayer__GetJoystick`
 * Called by: `SMBMenu_ClickReplayPauseOption`
 */
/* GSMBMenu__ShowPauseHelpAndOptions() */

void __thiscall GSMBMenu__ShowPauseHelpAndOptions(GSMBMenu *self)

{
  Joystick *pJVar1;
  
  RemoveControls();
  if (Keyboard != (TKeyboard *)0x0) {
    TKeyboard__AddKeyCallback(Keyboard,0x76,SMBMenu_ClickTitleHelpOption,0);
    TKeyboard__AddKeyCallback(Keyboard,0x6c,SMBMenu_ClickTitleHelpOption,0);
    TKeyboard__AddKeyCallback(Keyboard,0x1f,SMBMenu_IncrementPauseHelpOption,0);
    TKeyboard__AddKeyCallback(Keyboard,0x7f,SMBMenu_DecrementPauseHelpOption,0);
    TKeyboard__AddKeyCallback(Keyboard,0x23,SMBMenu_ClickBackFromHelpOption,0);
  }
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddButtonCallback(pJVar1,0,SMBMenu_ClickTitleHelpOption,0);
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddButtonCallback(pJVar1,1,SMBMenu_ClickBackFromHelpOption,0);
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddPOVCallback(pJVar1,2,SMBMenu_IncrementPauseHelpOption,0);
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddPOVCallback(pJVar1,0,SMBMenu_DecrementPauseHelpOption,0);
  SetPauseHelpAndOptionsMenuText(self);
  *(uint32_t *)(self + 0x820) = 0;
  *(uint32_t *)(*(long *)(self + 0xa98) + 0x20) = *(uint32_t *)(self + 0xa8c);
  *(uint32_t *)(*(long *)(self + (long)*(int *)(self + 0x81c) * 0x20 + 0x918) + 0x20) =
       *(uint32_t *)(self + ((long)*(int *)(self + 0x81c) + 0x48) * 0x20 + 8);
  return;
}

/* ======================================================================
 * GSMBMenu__ClickReplayPauseOption  (Ghidra `ClickReplayPauseOption` @ 004d5e70)
 * Signature: uint8_t __thiscall ClickReplayPauseOption(GSMBMenu * self)
 * Class: GSMBMenu
 * Calls: `CreateMessage`, `GetLocalizedText`, `SMBMenuToTitleFromGame`, `SMBUpsellMenu__Activate`, `SMBUpsellMenu__SetUpsellAchievementMode`, `SMBUpsellMenu__SetUpsellNotExitMode`, `SMBUpsellMenu__SetUpsellOutroMode`, `System_IsTrialMode`, `UserAlertCloseCurrent`
 * Called by: (none)
 */
/* GSMBMenu__ClickReplayPauseOption() */

void __thiscall GSMBMenu__ClickReplayPauseOption(GSMBMenu *self)

{
  SMBUpsellMenu *this_00;
  int iVar1;
  uint32_t local_88 [2];
  uint64_t local_80;
  uint64_t local_78;
  uint64_t local_70;
  uint64_t local_68;
  code *local_60;
  code *local_58;
  uint64_t local_50;
  uint64_t local_48;
  uint64_t local_40;
  uint64_t local_38;
  uint64_t local_30;
  uint64_t local_28;
  uint64_t local_20;
  
  iVar1 = *(int *)(self + 0x81c);
  if (iVar1 == 0) {
    GSuperMeatBoy__HidePauseMenu((int)SuperMeatBoy);
  }
  else if (iVar1 == 1) {
    iVar1 = System_IsTrialMode();
    if (iVar1 == 0) {
      if ((((1 < *(int *)(self + 0xd00) - 0x62U) && (*(long *)(self + 0xce0) != 0)) &&
          ((*(byte *)(*(long *)(self + 0xce0) + 2) & 5) == 0)) ||
         ((*(int *)(self + 0xd04) == 0xf || (*(int *)(self + 0xd04) == 0x11)))) {
        ShowLeaderboardMenu(self);
      }
    }
    else {
      this_00 = (SMBUpsellMenu *)(self + 0x1600);
      SMBUpsellMenu__SetUpsellAchievementMode(this_00,0);
      SMBUpsellMenu__SetUpsellNotExitMode(this_00,(uint)(byte)self[0x1842]);
      SMBUpsellMenu__SetUpsellOutroMode(this_00,(uint)(byte)self[0x1842]);
      SMBUpsellMenu__Activate(this_00);
    }
  }
  else if (iVar1 == 2) {
    ShowPauseHelpAndOptions(self);
  }
  else if (iVar1 == 3) {
    local_88[0] = 0;
    local_80 = 0;
    local_78 = 0;
    local_70 = 0;
    local_68 = 0;
    local_60 = (code *)0x0;
    local_58 = (code *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_80 = GetLocalizedText(0xbc);
    local_78 = GetLocalizedText(0xbd);
    local_88[0] = 0x1e;
    local_70 = GetLocalizedText(4);
    local_68 = GetLocalizedText(5);
    local_60 = SMBMenuToTitleFromGame;
    local_58 = UserAlertCloseCurrent;
    CreateMessage(local_88);
  }
  return;
}

/* ======================================================================
 * GSMBMenu__ClickPauseOption  (Ghidra `ClickPauseOption` @ 004d6070)
 * Signature: uint8_t __thiscall ClickPauseOption(GSMBMenu * self)
 * Class: GSMBMenu
 * Calls: `CreateMessage`, `GetLocalizedText`, `SMBMenuToMapFromGame`, `SMBMenuToTitleFromGame`, `System_PurchaseFullGame`, `TPlayer__GetProfile`, `UserAlertCloseCurrent`
 * Called by: `SMBMenu_ClickPauseOption`
 */
/* GSMBMenu__ClickPauseOption() */

void __thiscall GSMBMenu__ClickPauseOption(GSMBMenu *self)

{
  int iVar1;
  long lVar2;
  uint32_t local_78 [2];
  uint64_t local_70;
  uint64_t local_68;
  uint64_t local_60;
  uint64_t local_58;
  code *local_50;
  code *local_48;
  uint64_t local_40;
  uint64_t local_38;
  uint64_t local_30;
  uint64_t local_28;
  uint64_t local_20;
  uint64_t local_18;
  uint64_t local_10;
  
  iVar1 = *(int *)(self + 0x81c);
  if (iVar1 != 0) {
    if (iVar1 == 2) {
      local_78[0] = 0;
      local_70 = 0;
      local_68 = 0;
      local_60 = 0;
      local_58 = 0;
      local_50 = (code *)0x0;
      local_48 = (code *)0x0;
      local_40 = 0;
      local_38 = 0;
      local_30 = 0;
      local_28 = 0;
      local_20 = 0;
      local_18 = 0;
      local_10 = 0;
      local_70 = GetLocalizedText(0xba);
      local_68 = GetLocalizedText(0xbb);
      local_78[0] = 0x1e;
      local_60 = GetLocalizedText(4);
      local_58 = GetLocalizedText(5);
      local_50 = SMBMenuToMapFromGame;
      local_48 = UserAlertCloseCurrent;
      CreateMessage(local_78);
    }
    else if (iVar1 == 4) {
      if ((((1 < *(int *)(self + 0xd00) - 0x62U) && (*(long *)(self + 0xce0) != 0)) &&
          ((*(byte *)(*(long *)(self + 0xce0) + 2) & 5) == 0)) ||
         ((*(int *)(self + 0xd04) == 0xf || (*(int *)(self + 0xd04) == 0x11)))) {
        ShowLeaderboardMenu(self);
      }
    }
    else if (iVar1 == 5) {
      ShowPauseHelpAndOptions(self);
    }
    else if (iVar1 == 6) {
      local_78[0] = 0;
      local_70 = 0;
      local_68 = 0;
      local_60 = 0;
      local_58 = 0;
      local_50 = (code *)0x0;
      local_48 = (code *)0x0;
      local_40 = 0;
      local_38 = 0;
      local_30 = 0;
      local_28 = 0;
      local_20 = 0;
      local_18 = 0;
      local_10 = 0;
      local_70 = GetLocalizedText(0xbc);
      local_68 = GetLocalizedText(0xbd);
      local_78[0] = 0x1e;
      local_60 = GetLocalizedText(4);
      local_58 = GetLocalizedText(5);
      local_50 = SMBMenuToTitleFromGame;
      local_48 = UserAlertCloseCurrent;
      CreateMessage(local_78);
    }
    else if (iVar1 == 3) {
      lVar2 = TPlayer__GetProfile((TPlayer *)Players__Player);
      System_PurchaseFullGame(*(uint32_t *)(lVar2 + 0x14));
    }
    else if (iVar1 == 1) {
      *(GSMBMenu **)(self + 0x17e8) = self + 0x1720;
      (**(code **)(*(long *)(self + 0x1720) + 0x20))(self + 0x1720);
    }
    return;
  }
  GSuperMeatBoy__HidePauseMenu((int)SuperMeatBoy);
  return;
}

/* ======================================================================
 * GSMBMenu__HidePauseHelpAndOptions  (Ghidra `HidePauseHelpAndOptions` @ 004d6570)
 * Signature: uint8_t __thiscall HidePauseHelpAndOptions(GSMBMenu * self)
 * Class: GSMBMenu
 * Calls: `ShowPauseMenu`
 * Called by: (none)
 */
/* GSMBMenu__HidePauseHelpAndOptions() */

void __thiscall GSMBMenu__HidePauseHelpAndOptions(GSMBMenu *self)

{
  RemoveControls();
  ShowPauseMenu((int)self);
  if (*(short *)(self + 0x1840) != 0) {
    SetReplayPauseMenuText(self);
    *(uint32_t *)(*(long *)(self + (long)*(int *)(self + 0x820) * 0x20 + 0xa98) + 0x20) =
         *(uint32_t *)(self + ((long)*(int *)(self + 0x820) + 0x54) * 0x20 + 8);
    *(uint32_t *)(*(long *)(self + (long)*(int *)(self + 0x81c) * 0x20 + 0xb38) + 0x20) =
         *(uint32_t *)(self + ((long)*(int *)(self + 0x81c) + 0x59) * 0x20 + 0xc);
    return;
  }
  SetPauseMenuText(self);
  *(uint32_t *)(*(long *)(self + (long)*(int *)(self + 0x820) * 0x20 + 0xa98) + 0x20) =
       *(uint32_t *)(self + ((long)*(int *)(self + 0x820) + 0x54) * 0x20 + 8);
  *(uint32_t *)(*(long *)(self + (long)*(int *)(self + 0x81c) * 0x20 + 0x918) + 0x20) =
       *(uint32_t *)(self + ((long)*(int *)(self + 0x81c) + 0x48) * 0x20 + 0xc);
  return;
}

/* ======================================================================
 * GSMBMenu__ClickHelpOption  (Ghidra `ClickHelpOption` @ 004d6640)
 * Signature: uint8_t __thiscall ClickHelpOption(GSMBMenu * self)
 * Class: GSMBMenu
 * Calls: `ShowPauseMenu`
 * Called by: `SMBMenu_ClickTitleHelpOption`
 */
/* GSMBMenu__ClickHelpOption() */

void __thiscall GSMBMenu__ClickHelpOption(GSMBMenu *self)

{
  int iVar1;
  
  iVar1 = *(int *)(self + 0x820);
  if (iVar1 == 0) {
    *(GSMBMenu **)(self + 0x17e8) = self + 0x11d8;
                    /* WARNING: Could not recover jumptable at 0x004d6692. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(self + 0x11d8) + 0x20))();
    return;
  }
  if (iVar1 == 1) {
    *(GSMBMenu **)(self + 0x17e8) = self + 0x16b8;
                    /* WARNING: Could not recover jumptable at 0x004d672a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(self + 0x16b8) + 0x20))();
    return;
  }
  if (iVar1 == 3) {
    *(GSMBMenu **)(self + 0x17e8) = self + 0x1180;
                    /* WARNING: Could not recover jumptable at 0x004d674a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(self + 0x1180) + 0x20))();
    return;
  }
  if (iVar1 != 2) {
    if (iVar1 != 4) {
      return;
    }
    if (*(int *)(self + 0xd04) != 0x11) {
      RemoveControls();
      ShowTitleMenu(self,1);
      SetTitleMenuText(self);
      *(uint32_t *)(*(long *)(self + (long)*(int *)(self + 0x820) * 0x20 + 0x9f8) + 0x20) =
           *(uint32_t *)(self + ((long)*(int *)(self + 0x820) + 0x4f) * 0x20 + 8);
      *(uint32_t *)(*(long *)(self + (long)*(int *)(self + 0x818) * 0x20 + 0x838) + 0x20) =
           *(uint32_t *)(self + ((long)*(int *)(self + 0x818) + 0x41) * 0x20 + 0xc);
      return;
    }
    RemoveControls();
    ShowPauseMenu((int)self);
    if (*(short *)(self + 0x1840) != 0) {
      SetReplayPauseMenuText(self);
      *(uint32_t *)(*(long *)(self + (long)*(int *)(self + 0x820) * 0x20 + 0xa98) + 0x20) =
           *(uint32_t *)(self + ((long)*(int *)(self + 0x820) + 0x54) * 0x20 + 8);
      *(uint32_t *)(*(long *)(self + (long)*(int *)(self + 0x81c) * 0x20 + 0xb38) + 0x20) =
           *(uint32_t *)(self + ((long)*(int *)(self + 0x81c) + 0x59) * 0x20 + 0xc);
      return;
    }
    SetPauseMenuText(self);
    *(uint32_t *)(*(long *)(self + (long)*(int *)(self + 0x820) * 0x20 + 0xa98) + 0x20) =
         *(uint32_t *)(self + ((long)*(int *)(self + 0x820) + 0x54) * 0x20 + 8);
    *(uint32_t *)(*(long *)(self + (long)*(int *)(self + 0x81c) * 0x20 + 0x918) + 0x20) =
         *(uint32_t *)(self + ((long)*(int *)(self + 0x81c) + 0x48) * 0x20 + 0xc);
    return;
  }
  *(GSMBMenu **)(self + 0x17e8) = self + 0x1230;
                    /* WARNING: Could not recover jumptable at 0x004d676a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(self + 0x1230) + 0x20))();
  return;
}

/* ======================================================================
 * GSMBMenu__BackFromHelpAndOptions  (Ghidra `BackFromHelpAndOptions` @ 004d6850)
 * Signature: uint8_t __thiscall BackFromHelpAndOptions(GSMBMenu * self)
 * Class: GSMBMenu
 * Calls: `ShowPauseMenu`
 * Called by: (none)
 */
/* GSMBMenu__BackFromHelpAndOptions() */

void __thiscall GSMBMenu__BackFromHelpAndOptions(GSMBMenu *self)

{
  if (*(int *)(self + 0xd04) != 0x11) {
    RemoveControls();
    ShowTitleMenu(self,1);
    SetTitleMenuText(self);
    *(uint32_t *)(*(long *)(self + (long)*(int *)(self + 0x820) * 0x20 + 0x9f8) + 0x20) =
         *(uint32_t *)(self + ((long)*(int *)(self + 0x820) + 0x4f) * 0x20 + 8);
    *(uint32_t *)(*(long *)(self + (long)*(int *)(self + 0x818) * 0x20 + 0x838) + 0x20) =
         *(uint32_t *)(self + ((long)*(int *)(self + 0x818) + 0x41) * 0x20 + 0xc);
    return;
  }
  RemoveControls();
  ShowPauseMenu((int)self);
  if (*(short *)(self + 0x1840) != 0) {
    SetReplayPauseMenuText(self);
    *(uint32_t *)(*(long *)(self + (long)*(int *)(self + 0x820) * 0x20 + 0xa98) + 0x20) =
         *(uint32_t *)(self + ((long)*(int *)(self + 0x820) + 0x54) * 0x20 + 8);
    *(uint32_t *)(*(long *)(self + (long)*(int *)(self + 0x81c) * 0x20 + 0xb38) + 0x20) =
         *(uint32_t *)(self + ((long)*(int *)(self + 0x81c) + 0x59) * 0x20 + 0xc);
    return;
  }
  SetPauseMenuText(self);
  *(uint32_t *)(*(long *)(self + (long)*(int *)(self + 0x820) * 0x20 + 0xa98) + 0x20) =
       *(uint32_t *)(self + ((long)*(int *)(self + 0x820) + 0x54) * 0x20 + 8);
  *(uint32_t *)(*(long *)(self + (long)*(int *)(self + 0x81c) * 0x20 + 0x918) + 0x20) =
       *(uint32_t *)(self + ((long)*(int *)(self + 0x81c) + 0x48) * 0x20 + 0xc);
  return;
}

/* ======================================================================
 * GSMBMenu__ShowBackToTitleMessage  (Ghidra `ShowBackToTitleMessage` @ 004d6990)
 * Signature: uint8_t __stdcall ShowBackToTitleMessage(void)
 * Class: GSMBMenu
 * Calls: `CreateMessage`, `GetLocalizedText`, `SMBMenuToTitleFromGame`, `UserAlertCloseCurrent`
 * Called by: (none)
 */
/* GSMBMenu__ShowBackToTitleMessage() */

void GSMBMenu__ShowBackToTitleMessage(void)

{
  uint32_t local_78 [2];
  uint64_t local_70;
  uint64_t local_68;
  uint64_t local_60;
  uint64_t local_58;
  code *local_50;
  code *local_48;
  uint64_t local_40;
  uint64_t local_38;
  uint64_t local_30;
  uint64_t local_28;
  uint64_t local_20;
  uint64_t local_18;
  uint64_t local_10;
  
  local_78[0] = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = (code *)0x0;
  local_48 = (code *)0x0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  local_70 = GetLocalizedText(0xbc);
  local_68 = GetLocalizedText(0xbd);
  local_78[0] = 0x1e;
  local_60 = GetLocalizedText(4);
  local_58 = GetLocalizedText(5);
  local_50 = SMBMenuToTitleFromGame;
  local_48 = UserAlertCloseCurrent;
  CreateMessage(local_78);
  return;
}

/* ======================================================================
 * GSMBMenu__ShowBackToMapMessage  (Ghidra `ShowBackToMapMessage` @ 004d6a80)
 * Signature: uint8_t __stdcall ShowBackToMapMessage(void)
 * Class: GSMBMenu
 * Calls: `CreateMessage`, `GetLocalizedText`, `SMBMenuToMapFromGame`, `UserAlertCloseCurrent`
 * Called by: (none)
 */
/* GSMBMenu__ShowBackToMapMessage() */

void GSMBMenu__ShowBackToMapMessage(void)

{
  uint32_t local_78 [2];
  uint64_t local_70;
  uint64_t local_68;
  uint64_t local_60;
  uint64_t local_58;
  code *local_50;
  code *local_48;
  uint64_t local_40;
  uint64_t local_38;
  uint64_t local_30;
  uint64_t local_28;
  uint64_t local_20;
  uint64_t local_18;
  uint64_t local_10;
  
  local_78[0] = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = (code *)0x0;
  local_48 = (code *)0x0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  local_70 = GetLocalizedText(0xba);
  local_68 = GetLocalizedText(0xbb);
  local_78[0] = 0x1e;
  local_60 = GetLocalizedText(4);
  local_58 = GetLocalizedText(5);
  local_50 = SMBMenuToMapFromGame;
  local_48 = UserAlertCloseCurrent;
  CreateMessage(local_78);
  return;
}

/* ======================================================================
 * GSMBMenu__IncrementHelpOption  (Ghidra `IncrementHelpOption` @ 004d6b70)
 * Signature: uint8_t __thiscall IncrementHelpOption(GSMBMenu * self)
 * Class: GSMBMenu
 * Calls: (none)
 * Called by: (none)
 */
/* GSMBMenu__IncrementHelpOption() */

void __thiscall GSMBMenu__IncrementHelpOption(GSMBMenu *self)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(self + 0x820);
  iVar2 = 0;
  if (iVar1 + 1 != 5) {
    iVar2 = iVar1 + 1;
  }
  *(int *)(self + 0x820) = iVar2;
  *(uint32_t *)(*(long *)(self + (long)iVar1 * 0x20 + 0x9f8) + 0x20) =
       *(uint32_t *)(self + ((long)iVar1 + 0x4f) * 0x20 + 8);
  *(uint32_t *)(*(long *)(self + (long)*(int *)(self + 0x820) * 0x20 + 0x9f8) + 0x20) =
       *(uint32_t *)(self + ((long)*(int *)(self + 0x820) + 0x4f) * 0x20 + 0xc);
  return;
}

/* ======================================================================
 * GSMBMenu__DecrementHelpOption  (Ghidra `DecrementHelpOption` @ 004d6bd0)
 * Signature: uint8_t __thiscall DecrementHelpOption(GSMBMenu * self)
 * Class: GSMBMenu
 * Calls: (none)
 * Called by: (none)
 */
/* GSMBMenu__DecrementHelpOption() */

void __thiscall GSMBMenu__DecrementHelpOption(GSMBMenu *self)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(self + 0x820);
  iVar2 = 4;
  if (iVar1 + -1 != -1) {
    iVar2 = iVar1 + -1;
  }
  *(int *)(self + 0x820) = iVar2;
  *(uint32_t *)(*(long *)(self + (long)iVar1 * 0x20 + 0x9f8) + 0x20) =
       *(uint32_t *)(self + ((long)iVar1 + 0x4f) * 0x20 + 8);
  *(uint32_t *)(*(long *)(self + (long)*(int *)(self + 0x820) * 0x20 + 0x9f8) + 0x20) =
       *(uint32_t *)(self + ((long)*(int *)(self + 0x820) + 0x4f) * 0x20 + 0xc);
  return;
}

/* ======================================================================
 * GSMBMenu__IncrementPauseHelpOption  (Ghidra `IncrementPauseHelpOption` @ 004d6c30)
 * Signature: uint8_t __thiscall IncrementPauseHelpOption(GSMBMenu * self)
 * Class: GSMBMenu
 * Calls: (none)
 * Called by: (none)
 */
/* GSMBMenu__IncrementPauseHelpOption() */

void __thiscall GSMBMenu__IncrementPauseHelpOption(GSMBMenu *self)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(self + 0x820);
  iVar2 = 0;
  if (iVar1 + 1 != 5) {
    iVar2 = iVar1 + 1;
  }
  *(int *)(self + 0x820) = iVar2;
  *(uint32_t *)(*(long *)(self + (long)iVar1 * 0x20 + 0xa98) + 0x20) =
       *(uint32_t *)(self + ((long)iVar1 + 0x54) * 0x20 + 8);
  *(uint32_t *)(*(long *)(self + (long)*(int *)(self + 0x820) * 0x20 + 0xa98) + 0x20) =
       *(uint32_t *)(self + ((long)*(int *)(self + 0x820) + 0x54) * 0x20 + 0xc);
  return;
}

/* ======================================================================
 * GSMBMenu__DecrementPauseHelpOption  (Ghidra `DecrementPauseHelpOption` @ 004d6c90)
 * Signature: uint8_t __thiscall DecrementPauseHelpOption(GSMBMenu * self)
 * Class: GSMBMenu
 * Calls: (none)
 * Called by: (none)
 */
/* GSMBMenu__DecrementPauseHelpOption() */

void __thiscall GSMBMenu__DecrementPauseHelpOption(GSMBMenu *self)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(self + 0x820);
  iVar2 = 4;
  if (iVar1 + -1 != -1) {
    iVar2 = iVar1 + -1;
  }
  *(int *)(self + 0x820) = iVar2;
  *(uint32_t *)(*(long *)(self + (long)iVar1 * 0x20 + 0xa98) + 0x20) =
       *(uint32_t *)(self + ((long)iVar1 + 0x54) * 0x20 + 8);
  *(uint32_t *)(*(long *)(self + (long)*(int *)(self + 0x820) * 0x20 + 0xa98) + 0x20) =
       *(uint32_t *)(self + ((long)*(int *)(self + 0x820) + 0x54) * 0x20 + 0xc);
  return;
}

/* ======================================================================
 * GSMBMenu__RenderLoadingScreen  (Ghidra `RenderLoadingScreen` @ 004d6cf0)
 * Signature: uint8_t __thiscall RenderLoadingScreen(GSMBMenu * self)
 * Class: GSMBMenu
 * Calls: `GSMBCutSceneManager__RenderLoadingOverlay`, `TAudio__DisableDirectionalAudio`, `TAudio__EnableDirectionalAudio`, `TGraphics__AutoSetViewport`, `TGraphics__Clear`, `TGraphics__ForceAspectRatio`, `TGraphics__GetMatrix`, `TGraphics__SetMatrix`, `TGraphics__SetPerspectiveProjectionMode`, `TGraphics__SetRenderState`
 * Called by: `ChapterLoadingScreenFunc`, `RenderLoadingScreenFunc`
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GSMBMenu__RenderLoadingScreen() */

void __thiscall GSMBMenu__RenderLoadingScreen(GSMBMenu *self)

{
  Matrix4x4 *pMVar1;
  Matrix4x4 aMStack_48 [64];
  
  TGraphics__ForceAspectRatio(Graphics,0);
  TGraphics__AutoSetViewport();
  TGraphics__Clear(Graphics,(ColorTemplate *)::cNullColor,1);
  TGraphics__ForceAspectRatio(Graphics,1);
  TGraphics__AutoSetViewport();
  TGraphics__SetRenderState(Graphics,'\x03',0);
  TGraphics__SetRenderState(Graphics,'\x01',7);
  TGraphics__SetRenderState(Graphics,'\b',1);
  TGraphics__SetRenderState(Graphics,'\x05',4);
  TGraphics__SetRenderState(Graphics,'\x06',5);
  TGraphics__SetRenderState(Graphics,'\n',7);
  TGraphics__SetRenderState(Graphics,'\t',0);
  Matrix4x4__ConvertToOrthoMatrix
            (aMStack_48,_DAT_005c0c9c /* R:240.0f */,DAT_005c0c98 /* R:-240.0f */,DAT_005c0c94 /* R:-426.5f */,DAT_005c0c90 /* R:426.5f */,DAT_005c07a4 /* R:-1.0f */,
             DAT_005be894 /* R:1.0f */);
  TGraphics__SetMatrix(Graphics,3,aMStack_48);
  TGraphics__SetPerspectiveProjectionMode(Graphics,0);
  pMVar1 = (Matrix4x4 *)TGraphics__GetMatrix(Graphics,2);
  Matrix4x4__Identity(pMVar1);
  pMVar1 = (Matrix4x4 *)TGraphics__GetMatrix(Graphics,0);
  Matrix4x4__Identity(pMVar1);
  TAudio__DisableDirectionalAudio(Audio);
  (**(code **)(**(long **)(self + 0x650) + 0x10))();
  TAudio__EnableDirectionalAudio(Audio);
  GSMBCutSceneManager__RenderLoadingOverlay(SMBCutSceneManager);
  return;
}

/* ======================================================================
 * GSMBMenu__ShowLeaderboardMenu__004d6eb0  (Ghidra `ShowLeaderboardMenu` @ 004d6eb0)
 * Signature: uint8_t __thiscall ShowLeaderboardMenu(GSMBMenu * self)
 * Class: GSMBMenu
 * Calls: (none)
 * Called by: `GSMBMenu__ShowLeaderboardMenu`, `SMBMenuShowLeaderBoard`, `SMBMenu_ClickReplayPauseOption`
 */
/* GSMBMenu__ShowLeaderboardMenu__004d6eb0() */

void __thiscall GSMBMenu__ShowLeaderboardMenu__004d6eb0(GSMBMenu *self)

{
  if ((((*(int *)(self + 0xd00) - 0x62U < 2) || (*(long *)(self + 0xce0) == 0)) ||
      ((*(byte *)(*(long *)(self + 0xce0) + 2) & 5) != 0)) &&
     ((*(int *)(self + 0xd04) != 0xf && (*(int *)(self + 0xd04) != 0x11)))) {
    return;
  }
  ShowLeaderboardMenu(self);
  return;
}

/* ======================================================================
 * GSMBMenu__SetMenuTransitioning  (Ghidra `SetMenuTransitioning` @ 004d6ef0)
 * Signature: uint8_t __thiscall SetMenuTransitioning(GSMBMenu * self, int arg1)
 * Class: GSMBMenu
 * Calls: (none)
 * Called by: (none)
 */
/* GSMBMenu__SetMenuTransitioning(int) */

void __thiscall GSMBMenu__SetMenuTransitioning(GSMBMenu *self,int arg1)

{
  bMenuTransitioning = arg1;
  return;
}

/* ======================================================================
 * GSMBMenu__SwitchIconToCurrWarp  (Ghidra `SwitchIconToCurrWarp` @ 004d6f20)
 * Signature: uint8_t __thiscall SwitchIconToCurrWarp(GSMBMenu * self)
 * Class: GSMBMenu
 * Calls: (none)
 * Called by: `SMBChapterLoadWarpZone`, `SMBChapter__LoadWarpZone`
 */
/* GSMBMenu__SwitchIconToCurrWarp() */

void __thiscall GSMBMenu__SwitchIconToCurrWarp(GSMBMenu *self)

{
  long lVar1;
  long lVar2;
  
  if (*(uint *)(self + 0xd00) == 0x62) {
    *(uint64_t *)(self + 0xcf0) = *(uint64_t *)(self + 0xcf8);
    return;
  }
  *(uint64_t *)(self + 0xcf0) = 0;
  lVar1 = *(long *)(self + 0xcc8) + (ulong)(*(uint *)(self + 0xd00) & 0xffff) * 0x58;
  if (*(int *)(self + 0x420) == 0) {
    lVar2 = *(long *)(lVar1 + 0x18);
    if ((((lVar2 != 0) && ((*(byte *)(lVar2 + 2) & 1) != 0)) ||
        ((lVar2 = *(long *)(lVar1 + 0x20), lVar2 != 0 && ((*(byte *)(lVar2 + 2) & 1) != 0)))) ||
       ((lVar2 = *(long *)(lVar1 + 0x28), lVar2 != 0 && ((*(byte *)(lVar2 + 2) & 1) != 0)))) {
LAB_004d6f6b:
      *(long *)(self + 0xcf0) = lVar2;
      return;
    }
    lVar1 = *(long *)(lVar1 + 0x30);
    if (lVar1 == 0) {
      return;
    }
  }
  else {
    lVar2 = *(long *)(lVar1 + 0x38);
    if ((((lVar2 != 0) && ((*(byte *)(lVar2 + 2) & 1) != 0)) ||
        ((lVar2 = *(long *)(lVar1 + 0x40), lVar2 != 0 && ((*(byte *)(lVar2 + 2) & 1) != 0)))) ||
       ((lVar2 = *(long *)(lVar1 + 0x48), lVar2 != 0 && ((*(byte *)(lVar2 + 2) & 1) != 0))))
    goto LAB_004d6f6b;
    lVar1 = *(long *)(lVar1 + 0x50);
    if (lVar1 == 0) {
      return;
    }
  }
  if ((*(byte *)(lVar1 + 2) & 1) == 0) {
    return;
  }
  *(long *)(self + 0xcf0) = lVar1;
  return;
}

/* ======================================================================
 * GSMBMenu__CheckChapterLoadingStatus  (Ghidra `CheckChapterLoadingStatus` @ 004d7010)
 * Signature: uint8_t __stdcall CheckChapterLoadingStatus(void)
 * Class: GSMBMenu
 * Calls: (none)
 * Called by: `SMBInternetChapterSel__Update`
 */
/* GSMBMenu__CheckChapterLoadingStatus() */

bool GSMBMenu__CheckChapterLoadingStatus(void)

{
  bool bVar1;
  
  bVar1 = false;
  if (pCurrInternetsChapter != 0) {
    bVar1 = *(int *)(pCurrInternetsChapter + 0x60) == 1;
  }
  return bVar1;
}

/* ======================================================================
 * GSMBMenu__ValidateAndLoadChapter  (Ghidra `ValidateAndLoadChapter` @ 004d7030)
 * Signature: uint8_t __thiscall ValidateAndLoadChapter(GSMBMenu * self)
 * Class: GSMBMenu
 * Calls: `AutoLockSection__AutoLockSection`, `AutoLockSection__AutoLockSection__005b59d0`, `DisableMessage`, `FlashLibraryInstance__Reset`, `SMBChapter__LoadChapter`, `SMBChapter__VerifyChapterFileData`
 * Called by: `SMBInternetChapterSel__LoadSelectedChapterFile`, `SMBInternetChapterSel__Update`, `SMBInternetsSelectChapter`
 */
/* GSMBMenu__ValidateAndLoadChapter() */

uint64_t __thiscall GSMBMenu__ValidateAndLoadChapter(GSMBMenu *self)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  uint64_t uVar4;
  AutoLockSection aAStack_18 [16];
  
  DisableMessage(1);
  if (*(long *)(pCurrInternetsChapter + 0x30) != 0) {
    (**(code **)(**(long **)(self + 0x1158) + 8))();
  }
  lVar2 = pCurrInternetsChapter;
  piVar1 = (int *)(pCurrInternetsChapter + 0x60);
  *(uint64_t *)(pCurrInternetsChapter + 0x30) = 0;
  if (*piVar1 != 2) {
    uVar4 = 0;
    if (*piVar1 == 1) {
      iVar3 = SMBChapter__VerifyChapterFileData
                        ((SMBChapter *)(SuperMeatBoy + 0x90),*(uchar **)(lVar2 + 0x20),0x19000);
      lVar2 = SMBMenu;
      if (iVar3 != 1) {
        *(uint32_t *)(pCurrInternetsChapter + 0x2c) = 0;
        return 0;
      }
      AutoLockSection__AutoLockSection(aAStack_18,(CriticalSection *)SMBMenuSection);
                    /* try { // try from 004d7108 to 004d7148 has its CatchHandler @ 004d7169 */
      SMBChapter__LoadChapter((SMBChapter *)(SuperMeatBoy + 0x90),*(uint32_t *)(lVar2 + 0x41c));
      *(uint32_t *)(lVar2 + 0xd00) = 0;
      *(uint32_t *)(lVar2 + 0x420) = 0;
      *(uint32_t *)(lVar2 + 0xd04) = 8;
      iCurrentLevel = 0;
      FlashLibraryInstance__Reset(*(FlashLibraryInstance **)(lVar2 + 0x4d8));
      RemoveControls();
      uVar4 = 1;
      AutoLockSection__AutoLockSection__005b59d0(aAStack_18);
      *(uint32_t *)(pCurrInternetsChapter + 0x2c) = 1;
    }
    return uVar4;
  }
  *(uint32_t *)(lVar2 + 0x2c) = 3;
  return 3;
}

/* ======================================================================
 * GSMBMenu__GetChapterFileData  (Ghidra `GetChapterFileData` @ 004d7180)
 * Signature: uint8_t __thiscall GetChapterFileData(GSMBMenu * self, uchar * * arg1, uint * arg2)
 * Class: GSMBMenu
 * Calls: (none)
 * Called by: (none)
 */
/* GSMBMenu__GetChapterFileData(unsigned char**, unsigned int&) */

void __thiscall GSMBMenu__GetChapterFileData(GSMBMenu *self,uchar **arg1,uint *arg2)

{
  *arg1 = *(uchar **)(pCurrInternetsChapter + 0x20);
  *arg2 = *(uint *)(pCurrInternetsChapter + 0x28);
  return;
}

/* ======================================================================
 * GSMBMenu__LoadInternetsChapter  (Ghidra `LoadInternetsChapter` @ 004d71d0)
 * Signature: uint8_t __stdcall LoadInternetsChapter(void)
 * Class: GSMBMenu
 * Calls: (none)
 * Called by: `SMBInternetChapterSel__LoadSelectedChapterFile`, `SMBInternetsSelectChapter`
 */
/* GSMBMenu__LoadInternetsChapter() */

uint64_t GSMBMenu__LoadInternetsChapter(void)

{
  return 0;
}

/* ======================================================================
 * GSMBMenu__LoadInternetsLevels  (Ghidra `LoadInternetsLevels` @ 004d71e0)
 * Signature: uint8_t __stdcall LoadInternetsLevels(void)
 * Class: GSMBMenu
 * Calls: (none)
 * Called by: (none)
 */
/* GSMBMenu__LoadInternetsLevels() */

void GSMBMenu__LoadInternetsLevels(void)

{
  return;
}

/* ======================================================================
 * GSMBMenu__GetLevelDataByIndex  (Ghidra `GetLevelDataByIndex` @ 004d71f0)
 * Signature: uint8_t __thiscall GetLevelDataByIndex(GSMBMenu * self, int arg1, uchar * * arg2, uint * arg3)
 * Class: GSMBMenu
 * Calls: (none)
 * Called by: `PreloadPalette`, `SMBChapterPlayWarpIntro`, `SMBChapter__LoadCurrentLevel`, `SMBChapter__LoadNextLevel`, `SMBChapter__PlayWarpIntro`
 */
/* GSMBMenu__GetLevelDataByIndex(int, unsigned char**, unsigned int*) */

void __thiscall
GSMBMenu__GetLevelDataByIndex(GSMBMenu *self,int arg1,uchar **arg2,uint *arg3)

{
  long lVar1;
  
  if (LoadedPortalChapter != 0) {
    lVar1 = *(long *)(LoadedPortalChapter + (long)arg1 * 8);
    if (lVar1 != 0) {
      *arg2 = *(uchar **)(lVar1 + 8);
      *arg3 = *(uint *)(*(long *)(LoadedPortalChapter + (long)arg1 * 8) + 0x10);
      return;
    }
    *arg2 = (uchar *)0x0;
    *arg3 = 0;
  }
  return;
}

/* ======================================================================
 * GSMBMenu__RenderTitleScreenForIntro  (Ghidra `RenderTitleScreenForIntro` @ 004d7230)
 * Signature: uint8_t __thiscall RenderTitleScreenForIntro(GSMBMenu * self)
 * Class: GSMBMenu
 * Calls: `AutoLockSection__AutoLockSection`, `AutoLockSection__AutoLockSection__005b59d0`, `Camera__SetCameraMatricies`, `Camera__SetOrthoProjection`, `RegisterAudioPosition`, `TAudio__DisableDirectionalAudio`, `TAudio__EnableDirectionalAudio`, `TGraphics__SetRenderState`
 * Called by: `GMeatHUD__Render`
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GSMBMenu__RenderTitleScreenForIntro() */

void __thiscall GSMBMenu__RenderTitleScreenForIntro(GSMBMenu *self)

{
  AutoLockSection aAStack_18 [16];
  
  AutoLockSection__AutoLockSection(aAStack_18,(CriticalSection *)SMBMenuSection);
                    /* try { // try from 004d724c to 004d7309 has its CatchHandler @ 004d7318 */
  TAudio__DisableDirectionalAudio(Audio);
  RegisterAudioPosition((FPUVector *)0xffffffff);
  TGraphics__SetRenderState(Graphics,'\x05',4);
  TGraphics__SetRenderState(Graphics,'\x06',5);
  Camera__SetOrthoProjection
            (*(Camera **)(SuperMeatBoy + 0x38),_DAT_005c0c9c /* R:240.0f */,DAT_005c0c98 /* R:-240.0f */,DAT_005c0c94 /* R:-426.5f */,DAT_005c0c90 /* R:426.5f */,
             DAT_005c07a4 /* R:-1.0f */,DAT_005be894 /* R:1.0f */);
  Camera__SetCameraMatricies(*(Camera **)(SuperMeatBoy + 0x38),2);
  *(uint32_t *)(*(long *)(self + 0x800) + 0x58) = 0;
  (**(code **)(**(long **)(self + 0x800) + 0x10))();
  TAudio__EnableDirectionalAudio(Audio);
  RegisterAudioPosition((FPUVector *)0x0);
  AutoLockSection__AutoLockSection__005b59d0(aAStack_18);
  return;
}

/* ======================================================================
 * GSMBMenu__ProcessStorageChange  (Ghidra `ProcessStorageChange` @ 004d7360)
 * Signature: uint8_t __thiscall ProcessStorageChange(GSMBMenu * self)
 * Class: GSMBMenu
 * Calls: `SMBReplayManager__DisconnectedStorage`
 * Called by: `GSuperMeatBoy__Update__00516690`
 */
/* GSMBMenu__ProcessStorageChange() */

void __thiscall GSMBMenu__ProcessStorageChange(GSMBMenu *self)

{
  SMBReplayManager__DisconnectedStorage((SMBReplayManager *)(self + 0x1308));
  return;
}

/* ======================================================================
 * GSMBMenu__ResetForSignout  (Ghidra `ResetForSignout` @ 004d7370)
 * Signature: uint8_t __thiscall ResetForSignout(GSMBMenu * self)
 * Class: GSMBMenu
 * Calls: `GSMBChapterData__ResetData`, `SMBChapter__Reset`, `System_IsTrialMode`
 * Called by: `GSuperMeatBoy__Update__00516690`
 */
/* GSMBMenu__ResetForSignout() */

void __thiscall GSMBMenu__ResetForSignout(GSMBMenu *self)

{
  int iVar1;
  uint32_t uVar2;
  
  *(uint64_t *)(self + 0x17e8) = 0;
  *(uint32_t *)(self + 0xd00) = 0;
  self[0x1843] = (GSMBMenu)((byte)self[0x1843] & 0xc0 | 1);
  SMBChapter__Reset((SMBChapter *)(SuperMeatBoy + 0x90));
  GSMBChapterData__ResetData(SMBChapterData);
  iVar1 = System_IsTrialMode();
  uVar2 = 8;
  if (iVar1 != 1) {
    uVar2 = 1;
  }
  bMenuTransitioning = 0;
  *(uint32_t *)(self + 0x41c) = uVar2;
  return;
}

/* ======================================================================
 * GSMBMenu__RestoreStartGameControls  (Ghidra `RestoreStartGameControls` @ 004d73f0)
 * Signature: uint8_t __thiscall RestoreStartGameControls(GSMBMenu * self, int arg1)
 * Class: GSMBMenu
 * Calls: `Joystick__AddButtonCallback`, `SMBMenu_StartMenuStart`, `TKeyboard__AddKeyCallback`, `TPlayer__GetJoystick`
 * Called by: `GSuperMeatBoy__Update__00516690`
 */
/* GSMBMenu__RestoreStartGameControls(int) */

void __thiscall GSMBMenu__RestoreStartGameControls(GSMBMenu *self,int arg1)

{
  Joystick *pJVar1;
  
  if (arg1 == 1) {
    Players__Game_ReinitializePlayers();
  }
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddButtonCallback(pJVar1,0,SMBMenu_StartMenuStart,0);
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddButtonCallback(pJVar1,7,SMBMenu_StartMenuStart,0);
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)(Players__Player + 0x18));
  Joystick__AddButtonCallback(pJVar1,0,SMBMenu_StartMenuStart,0);
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)(Players__Player + 0x18));
  Joystick__AddButtonCallback(pJVar1,7,SMBMenu_StartMenuStart,0);
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)(Players__Player + 0x30));
  Joystick__AddButtonCallback(pJVar1,0,SMBMenu_StartMenuStart,0);
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)(Players__Player + 0x30));
  Joystick__AddButtonCallback(pJVar1,7,SMBMenu_StartMenuStart,0);
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)(Players__Player + 0x48));
  Joystick__AddButtonCallback(pJVar1,0,SMBMenu_StartMenuStart,0);
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)(Players__Player + 0x48));
  Joystick__AddButtonCallback(pJVar1,7,SMBMenu_StartMenuStart,0);
  if (Keyboard != (TKeyboard *)0x0) {
    TKeyboard__AddKeyCallback(Keyboard,0x76,SMBMenu_StartMenuStart,0);
    TKeyboard__AddKeyCallback(Keyboard,0x6c,SMBMenu_StartMenuStart,0);
    return;
  }
  return;
}

/* ======================================================================
 * GSMBMenu__ResetForPurchase  (Ghidra `ResetForPurchase` @ 004d7540)
 * Signature: uint8_t __thiscall ResetForPurchase(GSMBMenu * self)
 * Class: GSMBMenu
 * Calls: `GSMBChapterData__ResetData`, `SMBChapter__Reset`
 * Called by: `GSuperMeatBoy__Update__00516690`
 */
/* GSMBMenu__ResetForPurchase() */

void __thiscall GSMBMenu__ResetForPurchase(GSMBMenu *self)

{
  self[0x1843] = (GSMBMenu)((byte)self[0x1843] & 0xc0);
  *(uint64_t *)(self + 0x17e8) = 0;
  *(uint32_t *)(self + 0xd00) = 0;
  SMBChapter__Reset((SMBChapter *)(SuperMeatBoy + 0x90));
  GSMBChapterData__ResetData(SMBChapterData);
  *(uint32_t *)(self + 0x41c) = 1;
  bMenuTransitioning = 0;
  return;
}

/* ======================================================================
 * GSMBMenu__LoadChapterEnd  (Ghidra `LoadChapterEnd` @ 004d75a0)
 * Signature: uint8_t __thiscall LoadChapterEnd(GSMBMenu * self)
 * Class: GSMBMenu
 * Calls: `FlashAnimationLibrary__FlashAnimationLibrary`, `FlashAnimationLibrary__FlashAnimationLibrary__00576680`, `FlashAnimationLibrary__GetMovieClip__005731d0`, `FlashAnimationLibrary__GetTextField`, `FormatResourcePath`, `GSMBChapterData__GetChapterStats`, `GSMBChapterData__GetNumBandagesInChapter`, `GSMBChapterData__GetNumDarkWorldLevels`, `GSMBChapterData__GetNumLightWorldLevels`, `GSMBChapterData__GetNumWarpsInChapter` (+3 more)
 * Called by: `SMBChapter__PlayBossOutro`
 */
/* WARNING: Removing unreachable block (ram,0x004d7949) */
/* GSMBMenu__LoadChapterEnd() */

void __thiscall GSMBMenu__LoadChapterEnd(GSMBMenu *self)

{
  int *piVar1;
  int iVar2;
  GSMBChapterData *pGVar3;
  uint uVar4;
  char *pcVar5;
  FlashAnimationLibrary *pFVar6;
  uint64_t uVar7;
  byte *pbVar8;
  wchar_t *pwVar9;
  uint8_t *local_28 [2];
  
  if (*(long **)(self + 0x1170) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x1170) + 8))();
  }
  *(uint64_t *)(self + 0x1170) = 0;
  if (*(long **)(self + 0x1178) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x1178) + 8))();
  }
  *(uint64_t *)(self + 0x1178) = 0;
  if (*(long **)(self + 0x1168) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x1168) + 8))();
  }
  pFVar6 = *(FlashAnimationLibrary **)(self + 0x1160);
  *(uint64_t *)(self + 0x1168) = 0;
  if (pFVar6 != (FlashAnimationLibrary *)0x0) {
    FlashAnimationLibrary__FlashAnimationLibrary(pFVar6);
    operator_delete(pFVar6);
  }
  *(uint64_t *)(self + 0x1160) = 0;
  local_28[0] = &DAT_008184c8 /* R:0.00016803004837129265f */;
                    /* try { // try from 004d7639 to 004d764a has its CatchHandler @ 004d7944 */
  pcVar5 = (char *)FormatResourcePath("/Menus/chapterend.am",local_28);
  pFVar6 = operator_new(0xb0);
                    /* try { // try from 004d7654 to 004d7658 has its CatchHandler @ 004d7929 */
  FlashAnimationLibrary__FlashAnimationLibrary__00576680(pFVar6,pcVar5);
  *(FlashAnimationLibrary **)(self + 0x1160) = pFVar6;
                    /* try { // try from 004d7668 to 004d78ec has its CatchHandler @ 004d7944 */
  uVar7 = FlashAnimationLibrary__GetMovieClip__005731d0(pFVar6,"idle");
  *(uint64_t *)(self + 0x1168) = uVar7;
  uVar7 = FlashAnimationLibrary__GetMovieClip__005731d0(*(FlashAnimationLibrary **)(self + 0x1160),"out");
  *(uint64_t *)(self + 0x1178) = uVar7;
  uVar7 = FlashAnimationLibrary__GetMovieClip__005731d0(*(FlashAnimationLibrary **)(self + 0x1160),"in");
  pGVar3 = SMBChapterData;
  *(uint64_t *)(self + 0x1170) = uVar7;
  pbVar8 = (byte *)GSMBChapterData__GetChapterStats(pGVar3,*(uint32_t *)(self + 0x41c));
  pwVar9 = (wchar_t *)
           FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 0x1160),"light");
  if (pwVar9 != (wchar_t *)0x0) {
    uVar7 = GetLocalizedText(0x2a);
    FlashTextField__SetText(pwVar9,&DAT_005c6644 /* R:5.184804318001823e-44f */,uVar7);
  }
  pwVar9 = (wchar_t *)
           FlashAnimationLibrary__GetTextField
                     (*(FlashAnimationLibrary **)(self + 0x1160),"lightnumber");
  if (pwVar9 != (wchar_t *)0x0) {
    uVar4 = GSMBChapterData__GetNumLightWorldLevels(SMBChapterData,*(uint32_t *)(self + 0x41c));
    FlashTextField__SetText(pwVar9,&DAT_005c6654 /* R:5.184804318001823e-44f */,(ulong)*pbVar8,(ulong)uVar4);
  }
  pwVar9 = (wchar_t *)
           FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 0x1160),"dark");
  if (pwVar9 != (wchar_t *)0x0) {
    uVar7 = GetLocalizedText(0x2b);
    FlashTextField__SetText(pwVar9,&DAT_005c6644 /* R:5.184804318001823e-44f */,uVar7);
  }
  pwVar9 = (wchar_t *)
           FlashAnimationLibrary__GetTextField
                     (*(FlashAnimationLibrary **)(self + 0x1160),"darknumber");
  if (pwVar9 != (wchar_t *)0x0) {
    uVar4 = GSMBChapterData__GetNumDarkWorldLevels(SMBChapterData,*(uint32_t *)(self + 0x41c));
    FlashTextField__SetText(pwVar9,&DAT_005c6654 /* R:5.184804318001823e-44f */,(ulong)pbVar8[1],(ulong)uVar4);
  }
  pwVar9 = (wchar_t *)
           FlashAnimationLibrary__GetTextField
                     (*(FlashAnimationLibrary **)(self + 0x1160),"bandages");
  if (pwVar9 != (wchar_t *)0x0) {
    uVar7 = GetLocalizedText(0x17);
    FlashTextField__SetText(pwVar9,&DAT_005c6644 /* R:5.184804318001823e-44f */,uVar7);
  }
  pwVar9 = (wchar_t *)
           FlashAnimationLibrary__GetTextField
                     (*(FlashAnimationLibrary **)(self + 0x1160),"bandagenumber");
  if (pwVar9 != (wchar_t *)0x0) {
    uVar4 = GSMBChapterData__GetNumBandagesInChapter(SMBChapterData,*(uint32_t *)(self + 0x41c));
    FlashTextField__SetText(pwVar9,&DAT_005c6654 /* R:5.184804318001823e-44f */,(ulong)pbVar8[2],(ulong)uVar4);
  }
  pwVar9 = (wchar_t *)
           FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 0x1160),"warps");
  if (pwVar9 != (wchar_t *)0x0) {
    uVar7 = GetLocalizedText(0x4b);
    FlashTextField__SetText(pwVar9,&DAT_005c6644 /* R:5.184804318001823e-44f */,uVar7);
  }
  pwVar9 = (wchar_t *)
           FlashAnimationLibrary__GetTextField
                     (*(FlashAnimationLibrary **)(self + 0x1160),"warpnumber");
  if (pwVar9 != (wchar_t *)0x0) {
    uVar4 = GSMBChapterData__GetNumWarpsInChapter(SMBChapterData,*(uint32_t *)(self + 0x41c));
    FlashTextField__SetText(pwVar9,&DAT_005c6654 /* R:5.184804318001823e-44f */,(ulong)pbVar8[6],(ulong)uVar4);
  }
  pwVar9 = (wchar_t *)
           FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 0x1160),"chapter")
  ;
  if (pwVar9 != (wchar_t *)0x0) {
    uVar7 = GetLocalizedText(0x2c);
    FlashTextField__SetText(pwVar9,uVar7);
  }
  pwVar9 = (wchar_t *)
           FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(self + 0x1160),"ok");
  if (pwVar9 != (wchar_t *)0x0) {
    uVar7 = GetLocalizedText(0x2d);
    FlashTextField__SetText(pwVar9,uVar7);
  }
  if ((allocator *)(local_28[0] + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage) {
    LOCK();
    piVar1 = (int *)(local_28[0] + -8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 < 1) {
      std__string_Rep_M_destroy((allocator *)(local_28[0] + -0x18));
    }
  }
  return;
}

/* ======================================================================
 * GSMBMenu__ShowChapterEnd  (Ghidra `ShowChapterEnd` @ 004d7960)
 * Signature: uint8_t __thiscall ShowChapterEnd(GSMBMenu * self)
 * Class: GSMBMenu
 * Calls: `GSMBCutSceneManager__PlayCutScene`, `SMBChapterEndInFinished`, `TAudioCue__Play`
 * Called by: `SMBCreditsFinished`, `SMBFactoryBossOutroFinished`, `SMBForestBossOutroFinished`, `SMBHellBossOutroFinished`, `SMBHospitalBossOutroFinished`, `SMBRaptureBossOutroFinished`
 */
/* GSMBMenu__ShowChapterEnd() */

void __thiscall GSMBMenu__ShowChapterEnd(GSMBMenu *self)

{
  uint32_t local_58;
  uint32_t local_54;
  uint32_t local_50;
  uint64_t local_48;
  code *local_40;
  uint64_t local_38;
  uint64_t local_30;
  uint64_t local_28;
  uint32_t local_20;
  uint32_t local_1c;
  uint32_t local_18;
  
  local_48 = *(uint64_t *)(self + 0x1170);
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 1;
  local_38 = *(uint64_t *)(self + 0x1168);
  local_54 = 0x43f00000;
  local_58 = 0x44200000;
  local_50 = 1;
  local_40 = SMBChapterEndInFinished;
  local_18 = 0;
  GSMBCutSceneManager__PlayCutScene(SMBCutSceneManager,(SMBCutScene *)&local_58);
  bMenuTransitioning = 1;
  TAudioCue__Play(pTitleMenuMusic,GLOBALMUSICVOLUME,0,(TAudioInstance *)titleMusicInstance);
  return;
}

/* ======================================================================
 * GSMBMenu__HideChapterEnd  (Ghidra `HideChapterEnd` @ 004d7a00)
 * Signature: uint8_t __thiscall HideChapterEnd(GSMBMenu * self)
 * Class: GSMBMenu
 * Calls: `GSMBCutSceneManager__PlayCutScene`, `GSuperMeatBoy__Freeze`, `GSuperMeatBoy__SwitchGameMode`, `SMBMenuTransitionFinished`, `TAudioInstance__Stop`
 * Called by: (none)
 */
/* GSMBMenu__HideChapterEnd() */

void __thiscall GSMBMenu__HideChapterEnd(GSMBMenu *self)

{
  uint32_t local_58;
  uint32_t local_54;
  uint32_t local_50;
  uint64_t local_48;
  code *local_40;
  uint64_t local_38;
  uint64_t local_30;
  uint64_t local_28;
  uint32_t local_20;
  uint32_t local_1c;
  uint32_t local_18;
  
  TAudioInstance__Stop((TAudioInstance *)titleMusicInstance);
  GSuperMeatBoy__SwitchGameMode(SuperMeatBoy,9);
  local_48 = *(uint64_t *)(self + 0x1178);
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 1;
  local_54 = 0x43f00000;
  local_58 = 0x44200000;
  local_50 = 1;
  local_40 = SMBMenuTransitionFinished;
  local_18 = 0;
  GSMBCutSceneManager__PlayCutScene(SMBCutSceneManager,(SMBCutScene *)&local_58);
  GSuperMeatBoy__Freeze(SuperMeatBoy,0);
  return;
}

/* ======================================================================
 * GSMBMenu__ShowCreditsMenu  (Ghidra `ShowCreditsMenu` @ 004d7ab0)
 * Signature: uint8_t __thiscall ShowCreditsMenu(GSMBMenu * self)
 * Class: GSMBMenu
 * Calls: (none)
 * Called by: (none)
 */
/* GSMBMenu__ShowCreditsMenu() */

void __thiscall GSMBMenu__ShowCreditsMenu(GSMBMenu *self)

{
  *(GSMBMenu **)(self + 0x17e8) = self + 0x1180;
                    /* WARNING: Could not recover jumptable at 0x004d7acc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(self + 0x1180) + 0x20))();
  return;
}

/* ======================================================================
 * GSMBMenu__ShowSettingsMenu  (Ghidra `ShowSettingsMenu` @ 004d7ad0)
 * Signature: uint8_t __thiscall ShowSettingsMenu(GSMBMenu * self)
 * Class: GSMBMenu
 * Calls: (none)
 * Called by: (none)
 */
/* GSMBMenu__ShowSettingsMenu() */

void __thiscall GSMBMenu__ShowSettingsMenu(GSMBMenu *self)

{
  *(GSMBMenu **)(self + 0x17e8) = self + 0x1230;
                    /* WARNING: Could not recover jumptable at 0x004d7aec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(self + 0x1230) + 0x20))();
  return;
}

/* ======================================================================
 * GSMBMenu__ShowInternetsSelection  (Ghidra `ShowInternetsSelection` @ 004d7af0)
 * Signature: uint8_t __thiscall ShowInternetsSelection(GSMBMenu * self)
 * Class: GSMBMenu
 * Calls: `CreateMessage`, `GetLocalizedText`, `System_IsUserOnline`, `TPlayer__GetProfile`, `UserAlertCloseCurrent`
 * Called by: (none)
 */
/* GSMBMenu__ShowInternetsSelection() */

void __thiscall GSMBMenu__ShowInternetsSelection(GSMBMenu *self)

{
  int iVar1;
  long lVar2;
  uint32_t local_78 [2];
  uint64_t local_70;
  uint64_t local_68;
  uint64_t local_60;
  uint64_t local_58;
  code *local_50;
  uint64_t local_48;
  uint64_t local_40;
  uint64_t local_38;
  uint64_t local_30;
  uint64_t local_28;
  uint64_t local_20;
  uint64_t local_18;
  uint64_t local_10;
  
  lVar2 = TPlayer__GetProfile((TPlayer *)Players__Player);
  iVar1 = System_IsUserOnline(*(uint32_t *)(lVar2 + 0x14));
  if (iVar1 != 0) {
    *(GSMBMenu **)(self + 0x17e8) = self + 0x1448;
    (**(code **)(*(long *)(self + 0x1448) + 0x20))();
    return;
  }
  local_78[0] = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = (code *)0x0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  local_70 = GetLocalizedText(0x3e);
  local_68 = GetLocalizedText(0x40);
  local_78[0] = 0xe;
  local_60 = GetLocalizedText(4);
  local_50 = UserAlertCloseCurrent;
  CreateMessage(local_78);
  return;
}

/* ======================================================================
 * GSMBMenu__ShowReplayMenu  (Ghidra `ShowReplayMenu` @ 004d7c00)
 * Signature: uint8_t __thiscall ShowReplayMenu(GSMBMenu * self, int arg1)
 * Class: GSMBMenu
 * Calls: `SMBReplayManager__SetManageOnlyMode`
 * Called by: `ShowReplayInterface`
 */
/* GSMBMenu__ShowReplayMenu(int) */

void __thiscall GSMBMenu__ShowReplayMenu(GSMBMenu *self,int arg1)

{
  SMBReplayManager *this_00;
  
  this_00 = (SMBReplayManager *)(self + 0x1308);
  SMBReplayManager__SetManageOnlyMode(this_00,arg1);
  *(SMBReplayManager **)(self + 0x17e8) = this_00;
  (**(code **)(*(long *)(self + 0x1308) + 0x20))(this_00);
  if (*(int *)(SuperMeatBoy + 0x2c) == 0) {
    RenderLayers__AddLayer(SMBMenu);
    *(uint32_t *)(self + 0xd04) = 0;
  }
  return;
}

/* ======================================================================
 * GSMBMenu__ShowUpsell  (Ghidra `ShowUpsell` @ 004d7c70)
 * Signature: uint8_t __thiscall ShowUpsell(GSMBMenu * self)
 * Class: GSMBMenu
 * Calls: `SMBUpsellMenu__Activate`, `SMBUpsellMenu__SetUpsellAchievementMode`, `SMBUpsellMenu__SetUpsellNotExitMode`, `SMBUpsellMenu__SetUpsellOutroMode`
 * Called by: (none)
 */
/* GSMBMenu__ShowUpsell() */

void __thiscall GSMBMenu__ShowUpsell(GSMBMenu *self)

{
  SMBUpsellMenu *this_00;
  
  this_00 = (SMBUpsellMenu *)(self + 0x1600);
  SMBUpsellMenu__SetUpsellAchievementMode(this_00,0);
  SMBUpsellMenu__SetUpsellNotExitMode(this_00,(uint)(byte)self[0x1842]);
  SMBUpsellMenu__SetUpsellOutroMode(this_00,(uint)(byte)self[0x1842]);
  SMBUpsellMenu__Activate(this_00);
  return;
}

/* ======================================================================
 * GSMBMenu__ShowStatsMenu  (Ghidra `ShowStatsMenu` @ 004d7cf0)
 * Signature: uint8_t __thiscall ShowStatsMenu(GSMBMenu * self)
 * Class: GSMBMenu
 * Calls: (none)
 * Called by: (none)
 */
/* GSMBMenu__ShowStatsMenu() */

void __thiscall GSMBMenu__ShowStatsMenu(GSMBMenu *self)

{
  *(GSMBMenu **)(self + 0x17e8) = self + 0x13f0;
                    /* WARNING: Could not recover jumptable at 0x004d7d0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(self + 0x13f0) + 0x20))();
  return;
}

/* ======================================================================
 * GSMBMenu__ShowHowToPlayMenu  (Ghidra `ShowHowToPlayMenu` @ 004d7d10)
 * Signature: uint8_t __thiscall ShowHowToPlayMenu(GSMBMenu * self)
 * Class: GSMBMenu
 * Calls: (none)
 * Called by: (none)
 */
/* GSMBMenu__ShowHowToPlayMenu() */

void __thiscall GSMBMenu__ShowHowToPlayMenu(GSMBMenu *self)

{
  *(GSMBMenu **)(self + 0x17e8) = self + 0x11d8;
                    /* WARNING: Could not recover jumptable at 0x004d7d2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(self + 0x11d8) + 0x20))();
  return;
}

/* ======================================================================
 * GSMBMenu__ShowControlsMenu  (Ghidra `ShowControlsMenu` @ 004d7d30)
 * Signature: uint8_t __thiscall ShowControlsMenu(GSMBMenu * self)
 * Class: GSMBMenu
 * Calls: (none)
 * Called by: (none)
 */
/* GSMBMenu__ShowControlsMenu() */

void __thiscall GSMBMenu__ShowControlsMenu(GSMBMenu *self)

{
  *(GSMBMenu **)(self + 0x17e8) = self + 0x16b8;
                    /* WARNING: Could not recover jumptable at 0x004d7d4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(self + 0x16b8) + 0x20))();
  return;
}

/* ======================================================================
 * GSMBMenu__ShowCharSwitch  (Ghidra `ShowCharSwitch` @ 004d7d50)
 * Signature: uint8_t __thiscall ShowCharSwitch(GSMBMenu * self)
 * Class: GSMBMenu
 * Calls: (none)
 * Called by: (none)
 */
/* GSMBMenu__ShowCharSwitch() */

void __thiscall GSMBMenu__ShowCharSwitch(GSMBMenu *self)

{
  *(GSMBMenu **)(self + 0x17e8) = self + 0x1720;
                    /* WARNING: Could not recover jumptable at 0x004d7d6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(self + 0x1720) + 0x20))();
  return;
}

/* ======================================================================
 * GSMBMenu__IsReplayManagerOpen  (Ghidra `IsReplayManagerOpen` @ 004d7d70)
 * Signature: uint8_t __thiscall IsReplayManagerOpen(GSMBMenu * self)
 * Class: GSMBMenu
 * Calls: (none)
 * Called by: `Game_OverlayShowing`
 */
/* GSMBMenu__IsReplayManagerOpen() */

bool __thiscall GSMBMenu__IsReplayManagerOpen(GSMBMenu *self)

{
  return *(GSMBMenu **)(self + 0x17e8) == self + 0x1308;
}

/* ======================================================================
 * GSMBMenu__ShowBossDefeat  (Ghidra `ShowBossDefeat` @ 004d7d90)
 * Signature: uint8_t __stdcall ShowBossDefeat(void)
 * Class: GSMBMenu
 * Calls: (none)
 * Called by: `GSMBChapterData__MarkAltBossAsDefeated`, `GSMBChapterData__MarkBossAsDefeated`
 */
/* GSMBMenu__ShowBossDefeat() */

void GSMBMenu__ShowBossDefeat(void)

{
  bBossJustDefeated = 1;
  return;
}

/* ======================================================================
 * GSMBMenu__ShowBossUnlock  (Ghidra `ShowBossUnlock` @ 004d7da0)
 * Signature: uint8_t __stdcall ShowBossUnlock(void)
 * Class: GSMBMenu
 * Calls: (none)
 * Called by: `GSMBChapterData__SaveLevelData`
 */
/* GSMBMenu__ShowBossUnlock() */

void GSMBMenu__ShowBossUnlock(void)

{
  bBossJustUnlocked = 1;
  return;
}

/* ======================================================================
 * GSMBMenu__ShowMoveOnMessage  (Ghidra `ShowMoveOnMessage` @ 004d7db0)
 * Signature: uint8_t __thiscall ShowMoveOnMessage(GSMBMenu * self)
 * Class: GSMBMenu
 * Calls: (none)
 * Called by: `FlyWrench__Reset`, `Machinarium__Reset`, `MeatBoyCharactor__Reset`, `Ogmo__Reset`, `Runman__Reset`
 */
/* GSMBMenu__ShowMoveOnMessage() */

void __thiscall GSMBMenu__ShowMoveOnMessage(GSMBMenu *self)

{
  if (*(int *)(SuperMeatBoy + 0x290) != 8) {
    return;
  }
  *(GSMBMenu **)(self + 0x17e8) = self + 0x1790;
                    /* WARNING: Could not recover jumptable at 0x004d7de4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(self + 0x1790) + 0x20))(self + 0x1790);
  return;
}

/* ======================================================================
 * GSMBMenu__PromptUpsell  (Ghidra `PromptUpsell` @ 004d7df0)
 * Signature: uint8_t __thiscall PromptUpsell(GSMBMenu * self)
 * Class: GSMBMenu
 * Calls: (none)
 * Called by: `TransitionToNextLevel`
 */
/* GSMBMenu__PromptUpsell() */

void __thiscall GSMBMenu__PromptUpsell(GSMBMenu *self)

{
  self[0x1842] = (GSMBMenu)0x1;
  return;
}

/* ======================================================================
 * GSMBMenu__PopupTransitioning  (Ghidra `PopupTransitioning` @ 004d7e00)
 * Signature: uint8_t __thiscall PopupTransitioning(GSMBMenu * self)
 * Class: GSMBMenu
 * Calls: (none)
 * Called by: `GSuperMeatBoy__Update__00516690`
 */
/* GSMBMenu__PopupTransitioning() */

bool __thiscall GSMBMenu__PopupTransitioning(GSMBMenu *self)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = false;
  if (*(long *)(self + 0x17e8) != 0) {
    iVar1 = *(int *)(*(long *)(self + 0x17e8) + 0x30);
    bVar2 = true;
    if (iVar1 != 1) {
      bVar2 = iVar1 == 2;
    }
  }
  return bVar2;
}

/* ======================================================================
 * GSMBMenu__GSMBMenu  (Ghidra `~GSMBMenu` @ 004d7e30)
 * Signature: uint8_t __thiscall ~GSMBMenu(GSMBMenu * self)
 * Class: GSMBMenu
 * Calls: `CloseThread`, `CreateSMBMenuResources`, `CriticalSection__CriticalSection__005b71d0`, `DestroySMBMenuResources`, `FlashAnimationLibrary__FlashAnimationLibrary`, `GSMBMenu__GSMBMenu__004d8670`, `RenderLayer__RenderLayer__005988e0`, `SMBCharSwitch__SMBCharSwitch__00503fa0`, `SMBControlsMenu__SMBControlsMenu__00503fe0`, `SMBCreditMenu__SMBCreditMenu__00503f40` (+14 more)
 * Called by: (none)
 */
/* GSMBMenu__GSMBMenu__004d8670() */

void __thiscall GSMBMenu__GSMBMenu__004d8670(GSMBMenu *self)

{
  int iVar1;
  FlashAnimationLibrary *pFVar2;
  TAudioCue *pTVar3;
  void *pvVar4;
  uint64_t *puVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  
  *(uint8_t ***)self = &PTR__GSMBMenu_005c6a70;
                    /* try { // try from 004d7e50 to 004d80f2 has its CatchHandler @ 004d862c */
  TResourceCreator__RemoveResourceCreationFunction
            ((TResourceCreator *)ResourceCreator,CreateSMBMenuResources,(void *)0x0);
  TResourceCreator__RemoveResourceDestroyFunction
            ((TResourceCreator *)ResourceCreator,DestroySMBMenuResources,(void *)0x0);
  UnloadChapterMenu(self);
  if (hChapterLoadThreadHandle == 0) {
                    /* try { // try from 004d82b3 to 004d82b7 has its CatchHandler @ 004d862c */
    UnloadWorldMenu(self);
  }
  if (hLevelLoadThread != (THREADHANDLESTRUCT *)0x0) {
    CloseThread(hLevelLoadThread);
    hLevelLoadThread = (THREADHANDLESTRUCT *)0x0;
  }
  if (*(long **)(self + 0x4d0) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x4d0) + 8))();
  }
  if (*(long **)(self + 0x4d8) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x4d8) + 8))();
  }
  if (*(long **)(self + 0x4e0) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x4e0) + 8))();
  }
  if (*(long **)(self + 0x4e8) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x4e8) + 8))();
  }
  if (*(long **)(self + 0x4f0) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x4f0) + 8))();
  }
  pFVar2 = *(FlashAnimationLibrary **)(self + 0x4c8);
  if (pFVar2 != (FlashAnimationLibrary *)0x0) {
    FlashAnimationLibrary__FlashAnimationLibrary(pFVar2);
    operator_delete(pFVar2);
  }
  if (*(long **)(self + 0x7a8) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x7a8) + 8))();
  }
  pFVar2 = *(FlashAnimationLibrary **)(self + 0x7a0);
  if (pFVar2 != (FlashAnimationLibrary *)0x0) {
    FlashAnimationLibrary__FlashAnimationLibrary(pFVar2);
    operator_delete(pFVar2);
  }
  if (*(long **)(self + 0x7b0) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x7b0) + 8))();
  }
  if (*(long **)(self + 0x7e8) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x7e8) + 8))();
  }
  if (*(long **)(self + 0x7f0) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x7f0) + 8))();
  }
  if (*(long **)(self + 0x7f8) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x7f8) + 8))();
  }
  if (*(long **)(self + 0x800) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x800) + 8))();
  }
  if (*(long **)(self + 0x808) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x808) + 8))();
  }
  if (*(long **)(self + 0x810) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x810) + 8))();
  }
  pFVar2 = *(FlashAnimationLibrary **)(self + 0x7e0);
  if (pFVar2 != (FlashAnimationLibrary *)0x0) {
    FlashAnimationLibrary__FlashAnimationLibrary(pFVar2);
    operator_delete(pFVar2);
  }
  if (*(long **)(self + 0x600) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x600) + 8))();
  }
  if (*(long **)(self + 0x608) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x608) + 8))();
  }
  if (*(long **)(self + 0x610) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x610) + 8))();
  }
  if (*(long **)(self + 0x618) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x618) + 8))();
  }
  if (*(long **)(self + 0x650) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x650) + 8))();
  }
  if (*(long **)(self + 0x620) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x620) + 8))();
  }
  if (*(long **)(self + 0x628) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x628) + 8))();
  }
  if (*(long **)(self + 0x640) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x640) + 8))();
  }
  if (*(long **)(self + 0x648) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x648) + 8))();
  }
  if (*(long **)(self + 0x630) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x630) + 8))();
  }
  if (*(long **)(self + 0x638) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x638) + 8))();
  }
  pFVar2 = *(FlashAnimationLibrary **)(self + 0x5f8);
  if (pFVar2 != (FlashAnimationLibrary *)0x0) {
    FlashAnimationLibrary__FlashAnimationLibrary(pFVar2);
    operator_delete(pFVar2);
  }
  pTVar3 = *(TAudioCue **)(self + 0xc60);
  if (pTVar3 != (TAudioCue *)0x0) {
    TAudioCue__TAudioCue__0057ab30(pTVar3);
    operator_delete(pTVar3);
  }
  pTVar3 = pTitleMenuMusic;
  *(uint64_t *)(self + 0xc60) = 0;
  if (pTVar3 != (TAudioCue *)0x0) {
    TAudioCue__TAudioCue__0057ab30(pTVar3);
    operator_delete(pTVar3);
  }
  pTitleMenuMusic = (TAudioCue *)0x0;
  if (pInternetsChapters._40_2_ != 0) {
    uVar7 = 0;
    do {
      lVar8 = (uVar7 & 0xffff) * 8;
      puVar5 = (uint64_t *)(pInternetsChapters._56_8_ + lVar8);
      pvVar4 = (void *)*puVar5;
      if (pvVar4 != (void *)0x0) {
        if (*(void **)((long)pvVar4 + 0x20) != (void *)0x0) {
          free(*(void **)((long)pvVar4 + 0x20));
          *(uint64_t *)((long)pvVar4 + 0x20) = 0;
        }
        if (*(void **)((long)pvVar4 + 0x70) != (void *)0x0) {
          free(*(void **)((long)pvVar4 + 0x70));
          *(uint64_t *)((long)pvVar4 + 0x70) = 0;
        }
        operator_delete(pvVar4);
        puVar5 = (uint64_t *)(pInternetsChapters._56_8_ + lVar8);
      }
      *puVar5 = 0;
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulong)uVar6;
    } while ((int)uVar6 < (int)(uint)(ushort)pInternetsChapters._40_2_);
  }
  if (pInternetsChapters._72_4_ == -0x5eef3582) {
    pInternetsChapters._72_4_ = 0;
    free(*(void **)(pInternetsChapters._56_8_ + -8));
    if (pInternetsChapters._48_4_ == 1) {
      free(*(void **)(pInternetsChapters._64_8_ + -8));
    }
    iVar1 = *(int *)(self + 0x1838);
    pInternetsChapters._72_4_ = 0;
    pInternetsChapters._42_2_ = 0;
    pInternetsChapters._40_2_ = 0;
    pInternetsChapters._56_8_ = 0;
    pInternetsChapters._64_8_ = 0;
  }
  else {
    iVar1 = *(int *)(self + 0x1838);
  }
  if (iVar1 == -0x5eef3582) {
    *(uint32_t *)(self + 0x1838) = 0;
    free(*(void **)(*(long *)(self + 0x1828) + -8));
    if (*(int *)(self + 0x1820) == 1) {
      free(*(void **)(*(long *)(self + 0x1830) + -8));
    }
    *(uint32_t *)(self + 0x1838) = 0;
    *(uint16_t *)(self + 0x181a) = 0;
    *(uint16_t *)(self + 0x1818) = 0;
    *(uint64_t *)(self + 0x1828) = 0;
    *(uint64_t *)(self + 0x1830) = 0;
  }
                    /* try { // try from 004d81ae to 004d81b2 has its CatchHandler @ 004d8510 */
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)(self + 0x17f0));
                    /* try { // try from 004d81ba to 004d81be has its CatchHandler @ 004d865d */
  SMBMoveOn__SMBMoveOn__00503fc0((SMBMoveOn *)(self + 0x1790));
                    /* try { // try from 004d81c6 to 004d81ca has its CatchHandler @ 004d85fa */
  SMBCharSwitch__SMBCharSwitch__00503fa0((SMBCharSwitch *)(self + 0x1720));
                    /* try { // try from 004d81d2 to 004d81d6 has its CatchHandler @ 004d85f2 */
  SMBControlsMenu__SMBControlsMenu__00503fe0((SMBControlsMenu *)(self + 0x16b8));
                    /* try { // try from 004d81de to 004d81e2 has its CatchHandler @ 004d85ea */
  SMBUpsellMenu__SMBUpsellMenu__00504d00((SMBUpsellMenu *)(self + 0x1600));
                    /* try { // try from 004d81ea to 004d81ee has its CatchHandler @ 004d85e2 */
  SMBInternetChapterSel__SMBInternetChapterSel__004c35f0((SMBInternetChapterSel *)(self + 0x1448));
                    /* try { // try from 004d81f6 to 004d81fa has its CatchHandler @ 004d861a */
  SMBStatisticsMenu__SMBStatisticsMenu__00503f80((SMBStatisticsMenu *)(self + 0x13f0));
                    /* try { // try from 004d8202 to 004d8206 has its CatchHandler @ 004d8612 */
  SMBReplayManager__SMBReplayManager__0050f030((SMBReplayManager *)(self + 0x1308));
                    /* try { // try from 004d820e to 004d8212 has its CatchHandler @ 004d860a */
  SMBSettingsMenu__SMBSettingsMenu__00510980((SMBSettingsMenu *)(self + 0x1230));
                    /* try { // try from 004d821a to 004d821e has its CatchHandler @ 004d8602 */
  SMBHowToPlayMenu__SMBHowToPlayMenu__00503f60((SMBHowToPlayMenu *)(self + 0x11d8));
                    /* try { // try from 004d8226 to 004d822a has its CatchHandler @ 004d8655 */
  SMBCreditMenu__SMBCreditMenu__00503f40((SMBCreditMenu *)(self + 0x1180));
                    /* try { // try from 004d8232 to 004d8236 has its CatchHandler @ 004d8648 */
  SMBLeaderBoardMenu__SMBLeaderBoardMenu__004c44c0((SMBLeaderBoardMenu *)(self + 0xd10));
  if (*(int *)(self + 0xcd8) == -0x5eef3582) {
    *(uint32_t *)(self + 0xcd8) = 0;
    free(*(void **)(*(long *)(self + 0xcc8) + -8));
    if (*(int *)(self + 0xcc0) == 1) {
      free(*(void **)(*(long *)(self + 0xcd0) + -8));
    }
    *(uint32_t *)(self + 0xcd8) = 0;
    *(uint16_t *)(self + 0xcba) = 0;
    *(uint16_t *)(self + 0xcb8) = 0;
    *(uint64_t *)(self + 0xcc8) = 0;
    *(uint64_t *)(self + 0xcd0) = 0;
  }
                    /* try { // try from 004d824e to 004d8252 has its CatchHandler @ 004d8640 */
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)(self + 0xc90));
                    /* try { // try from 004d825a to 004d825e has its CatchHandler @ 004d8627 */
  TAudioInstance__TAudioInstance__0057a200((TAudioInstance *)(self + 0xc68));
  if (*(int *)(self + 0xc58) == -0x5eef3582) {
    *(uint32_t *)(self + 0xc58) = 0;
    free(*(void **)(*(long *)(self + 0xc48) + -8));
    if (*(int *)(self + 0xc40) == 1) {
      free(*(void **)(*(long *)(self + 0xc50) + -8));
    }
    *(uint32_t *)(self + 0xc58) = 0;
    *(uint16_t *)(self + 0xc3a) = 0;
    *(uint16_t *)(self + 0xc38) = 0;
    *(uint64_t *)(self + 0xc48) = 0;
    *(uint64_t *)(self + 0xc50) = 0;
  }
                    /* try { // try from 004d8276 to 004d827a has its CatchHandler @ 004d8622 */
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)(self + 0xc10));
  if (*(int *)(self + 0xc08) == -0x5eef3582) {
    *(uint32_t *)(self + 0xc08) = 0;
    free(*(void **)(*(long *)(self + 0xbf8) + -8));
    if (*(int *)(self + 0xbf0) == 1) {
      free(*(void **)(*(long *)(self + 0xc00) + -8));
    }
    *(uint32_t *)(self + 0xc08) = 0;
    *(uint16_t *)(self + 0xbea) = 0;
    *(uint16_t *)(self + 0xbe8) = 0;
    *(uint64_t *)(self + 0xbf8) = 0;
    *(uint64_t *)(self + 0xc00) = 0;
  }
                    /* try { // try from 004d828e to 004d8292 has its CatchHandler @ 004d8665 */
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)(self + 0xbc0));
  *(uint8_t ***)(self + 0x478) = &PTR_Calculate_005c6ab0;
  RenderLayer__RenderLayer__005988e0((RenderLayer *)self);
  return;
}

/* ======================================================================
 * GSMBMenu__GSMBMenu__004d8670  (Ghidra `~GSMBMenu` @ 004d8670)
 * Signature: uint8_t __thiscall ~GSMBMenu(GSMBMenu * self)
 * Class: GSMBMenu
 * Calls: `operator_delete`
 * Called by: `GSMBMenu__GSMBMenu`
 */
/* GSMBMenu__GSMBMenu__004d8670() */

void __thiscall GSMBMenu__GSMBMenu__004d8670(GSMBMenu *self)

{
  GSMBMenu__dtor(self);
  operator_delete(self);
  return;
}

/* ======================================================================
 * GSMBMenu__GSMBMenu__004d8690  (Ghidra `GSMBMenu` @ 004d8690)
 * Signature: uint8_t __thiscall GSMBMenu(GSMBMenu * self)
 * Class: GSMBMenu
 * Calls: `CreateSMBMenuResources`, `CriticalSection__CriticalSection`, `DestroySMBMenuResources`, `FlashAnimationLibrary__FlashAnimationLibrary__00576680`, `FlashAnimationLibrary__GetClipIndex`, `FlashAnimationLibrary__GetLibraryEntry`, `FlashAnimationLibrary__GetMovieClip__005731d0`, `FlashAnimationLibrary__GetTextField`, `FlashMovieClip__FindInstance`, `FormatResourcePath` (+29 more)
 * Called by: `GSuperMeatBoy__Initialize__00516f60`
 */
/* WARNING: Removing unreachable block (ram,0x004d9ea0) */
/* GSMBMenu__GSMBMenu__004d8690() */

void __thiscall GSMBMenu__GSMBMenu__004d8690(GSMBMenu *self)

{
  int *piVar1;
  MenuSelection *pMVar2;
  MenuSelection *pMVar3;
  uint32_t uVar4;
  int iVar5;
  char *pcVar6;
  FlashAnimationLibrary *pFVar7;
  uint64_t uVar8;
  wchar_t *pwVar9;
  FlashLibraryEntry *pFVar10;
  FlashMovieClip *this_00;
  long lVar11;
  uint32_t local_88 [2];
  char *local_80;
  uint32_t local_78;
  uint32_t local_74;
  uint32_t local_68 [2];
  char *local_60;
  uint32_t local_58;
  uint32_t local_54;
  uint8_t *local_48 [3];
  
  pMVar2 = (MenuSelection *)(self + 0x828);
  pMVar3 = (MenuSelection *)(self + 0x908);
  RenderLayer__RenderLayer__00597d50((RenderLayer *)self);
  *(uint8_t ***)self = &PTR__GSMBMenu_005c6a70;
  *(uint32_t *)(self + 0x418) = 0;
  *(uint32_t *)(self + 0x41c) = 0;
  *(uint32_t *)(self + 0x420) = 0;
  *(uint32_t *)(self + 0x424) = 1;
  *(uint64_t *)(self + 0x428) = 0;
  *(uint64_t *)(self + 0x430) = 0;
  *(uint32_t *)(self + 0x488) = 0;
  *(uint32_t *)(self + 0x48c) = 0;
  *(uint32_t *)(self + 0x490) = 0;
  *(uint32_t *)(self + 0x494) = 0;
  *(uint32_t *)(self + 0x498) = 0;
  *(uint32_t *)(self + 0x49c) = 0;
  *(uint32_t *)(self + 0x4a0) = 0;
  *(uint32_t *)(self + 0x4a4) = 0;
  *(uint32_t *)(self + 0x4bc) = 0;
  *(uint32_t *)(self + 0x4c0) = 0;
  *(uint32_t *)(self + 0x4c4) = 1;
  *(uint8_t ***)(self + 0x478) = &PTR_Calculate_005c6af0;
  *(uint64_t *)(self + 0x4c8) = 0;
  *(uint64_t *)(self + 0x4d0) = 0;
  *(uint64_t *)(self + 0x4d8) = 0;
  *(uint64_t *)(self + 0x4e0) = 0;
  *(uint64_t *)(self + 0x4e8) = 0;
  *(uint64_t *)(self + 0x4f0) = 0;
  *(uint64_t *)(self + 0x4f8) = 0;
  *(uint64_t *)(self + 0x500) = 0;
  *(uint64_t *)(self + 0x508) = 0;
  *(uint64_t *)(self + 0x510) = 0;
  *(uint64_t *)(self + 0x5c0) = 0;
  *(uint64_t *)(self + 0x5c8) = 0;
  *(uint64_t *)(self + 0x5d0) = 0;
  *(uint64_t *)(self + 0x5d8) = 0;
  *(uint64_t *)(self + 0x5e0) = 0;
  *(uint64_t *)(self + 0x658) = 0;
  *(uint64_t *)(self + 0x660) = 0;
  *(uint64_t *)(self + 0x668) = 0;
  *(uint64_t *)(self + 0x670) = 0;
  *(uint64_t *)(self + 0x678) = 0;
  *(uint64_t *)(self + 0x7a0) = 0;
  *(uint64_t *)(self + 0x7a8) = 0;
  *(uint64_t *)(self + 2000) = 0;
  *(uint64_t *)(self + 0x7d8) = 0;
  *(uint64_t *)(self + 0x7e0) = 0;
  *(uint64_t *)(self + 0x7e8) = 0;
  *(uint64_t *)(self + 0x7f0) = 0;
  *(uint64_t *)(self + 0x7f8) = 0;
  *(uint32_t *)(self + 0x818) = 0;
  *(uint32_t *)(self + 0x81c) = 0;
  *(uint32_t *)(self + 0x820) = 0;
  *(uint32_t *)(self + 0x828) = 0xffffffff;
  *(uint32_t *)(self + 0x82c) = 0xffffffff;
  *(uint32_t *)(self + 0x830) = 0;
  *(uint64_t *)(self + 0x838) = 0;
  *(uint64_t *)(self + 0x840) = 0;
  *(uint32_t *)(self + 0x848) = 0xffffffff;
  *(uint32_t *)(self + 0x84c) = 0xffffffff;
  *(uint32_t *)(self + 0x850) = 0;
  *(uint64_t *)(self + 0x858) = 0;
  *(uint64_t *)(self + 0x860) = 0;
  *(uint32_t *)(self + 0x868) = 0xffffffff;
  *(uint32_t *)(self + 0x86c) = 0xffffffff;
  *(uint32_t *)(self + 0x870) = 0;
  *(uint64_t *)(self + 0x878) = 0;
  *(uint64_t *)(self + 0x880) = 0;
  *(uint32_t *)(self + 0x888) = 0xffffffff;
  *(uint32_t *)(self + 0x88c) = 0xffffffff;
  *(uint32_t *)(self + 0x890) = 0;
  *(uint64_t *)(self + 0x898) = 0;
  *(uint64_t *)(self + 0x8a0) = 0;
  *(uint32_t *)(self + 0x8a8) = 0xffffffff;
  *(uint32_t *)(self + 0x8ac) = 0xffffffff;
  *(uint32_t *)(self + 0x8b0) = 0;
  *(uint64_t *)(self + 0x8b8) = 0;
  *(uint64_t *)(self + 0x8c0) = 0;
  *(uint32_t *)(self + 0x8c8) = 0xffffffff;
  *(uint32_t *)(self + 0x8cc) = 0xffffffff;
  *(uint32_t *)(self + 0x8d0) = 0;
  *(uint64_t *)(self + 0x8d8) = 0;
  *(uint64_t *)(self + 0x8e0) = 0;
  *(uint32_t *)(self + 0x8e8) = 0xffffffff;
  *(uint32_t *)(self + 0x8ec) = 0xffffffff;
  *(uint32_t *)(self + 0x8f0) = 0;
  *(uint64_t *)(self + 0x8f8) = 0;
  *(uint64_t *)(self + 0x900) = 0;
  *(uint32_t *)(self + 0x908) = 0xffffffff;
  *(uint32_t *)(self + 0x90c) = 0xffffffff;
  *(uint32_t *)(self + 0x910) = 0;
  *(uint64_t *)(self + 0x918) = 0;
  *(uint64_t *)(self + 0x920) = 0;
  *(uint32_t *)(self + 0x928) = 0xffffffff;
  *(uint32_t *)(self + 0x92c) = 0xffffffff;
  *(uint32_t *)(self + 0x930) = 0;
  *(uint64_t *)(self + 0x938) = 0;
  *(uint64_t *)(self + 0x940) = 0;
  *(uint32_t *)(self + 0x948) = 0xffffffff;
  *(uint32_t *)(self + 0x94c) = 0xffffffff;
  *(uint32_t *)(self + 0x950) = 0;
  *(uint64_t *)(self + 0x958) = 0;
  *(uint64_t *)(self + 0x960) = 0;
  *(uint32_t *)(self + 0x968) = 0xffffffff;
  *(uint32_t *)(self + 0x96c) = 0xffffffff;
  *(uint32_t *)(self + 0x970) = 0;
  *(uint64_t *)(self + 0x978) = 0;
  *(uint64_t *)(self + 0x980) = 0;
  *(uint32_t *)(self + 0x988) = 0xffffffff;
  *(uint32_t *)(self + 0x98c) = 0xffffffff;
  *(uint32_t *)(self + 0x990) = 0;
  *(uint64_t *)(self + 0x998) = 0;
  *(uint64_t *)(self + 0x9a0) = 0;
  *(uint32_t *)(self + 0x9a8) = 0xffffffff;
  *(uint32_t *)(self + 0x9ac) = 0xffffffff;
  *(uint32_t *)(self + 0x9b0) = 0;
  *(uint64_t *)(self + 0x9b8) = 0;
  *(uint64_t *)(self + 0x9c0) = 0;
  *(uint32_t *)(self + 0x9c8) = 0xffffffff;
  *(uint32_t *)(self + 0x9cc) = 0xffffffff;
  *(uint32_t *)(self + 0x9d0) = 0;
  *(uint64_t *)(self + 0x9d8) = 0;
  *(uint64_t *)(self + 0x9e0) = 0;
  *(uint32_t *)(self + 0x9e8) = 0xffffffff;
  *(uint32_t *)(self + 0x9ec) = 0xffffffff;
  *(uint32_t *)(self + 0x9f0) = 0;
  *(uint64_t *)(self + 0x9f8) = 0;
  *(uint64_t *)(self + 0xa00) = 0;
  *(uint32_t *)(self + 0xa08) = 0xffffffff;
  *(uint32_t *)(self + 0xa0c) = 0xffffffff;
  *(uint32_t *)(self + 0xa10) = 0;
  *(uint64_t *)(self + 0xa18) = 0;
  *(uint64_t *)(self + 0xa20) = 0;
  *(uint32_t *)(self + 0xa28) = 0xffffffff;
  *(uint32_t *)(self + 0xa2c) = 0xffffffff;
  *(uint32_t *)(self + 0xa30) = 0;
  *(uint64_t *)(self + 0xa38) = 0;
  *(uint64_t *)(self + 0xa40) = 0;
  *(uint32_t *)(self + 0xa48) = 0xffffffff;
  *(uint32_t *)(self + 0xa4c) = 0xffffffff;
  *(uint32_t *)(self + 0xa50) = 0;
  *(uint64_t *)(self + 0xa58) = 0;
  *(uint64_t *)(self + 0xa60) = 0;
  *(uint32_t *)(self + 0xa68) = 0xffffffff;
  *(uint32_t *)(self + 0xa6c) = 0xffffffff;
  *(uint32_t *)(self + 0xa70) = 0;
  *(uint64_t *)(self + 0xa78) = 0;
  *(uint64_t *)(self + 0xa80) = 0;
  *(uint32_t *)(self + 0xa88) = 0xffffffff;
  *(uint32_t *)(self + 0xa8c) = 0xffffffff;
  *(uint32_t *)(self + 0xa90) = 0;
  *(uint64_t *)(self + 0xa98) = 0;
  *(uint64_t *)(self + 0xaa0) = 0;
  *(uint32_t *)(self + 0xaa8) = 0xffffffff;
  *(uint32_t *)(self + 0xaac) = 0xffffffff;
  *(uint32_t *)(self + 0xab0) = 0;
  *(uint64_t *)(self + 0xab8) = 0;
  *(uint64_t *)(self + 0xac0) = 0;
  *(uint32_t *)(self + 0xac8) = 0xffffffff;
  *(uint32_t *)(self + 0xacc) = 0xffffffff;
  *(uint32_t *)(self + 0xad0) = 0;
  *(uint64_t *)(self + 0xad8) = 0;
  *(uint64_t *)(self + 0xae0) = 0;
  *(uint32_t *)(self + 0xae8) = 0xffffffff;
  *(uint32_t *)(self + 0xaec) = 0xffffffff;
  *(uint32_t *)(self + 0xaf0) = 0;
  *(uint64_t *)(self + 0xaf8) = 0;
  *(uint64_t *)(self + 0xb00) = 0;
  *(uint32_t *)(self + 0xb08) = 0xffffffff;
  *(uint32_t *)(self + 0xb0c) = 0xffffffff;
  *(uint32_t *)(self + 0xb10) = 0;
  *(uint64_t *)(self + 0xb18) = 0;
  *(uint64_t *)(self + 0xb20) = 0;
  *(uint32_t *)(self + 0xb28) = 0xffffffff;
  *(uint32_t *)(self + 0xb2c) = 0xffffffff;
  *(uint32_t *)(self + 0xb30) = 0;
  *(uint64_t *)(self + 0xb38) = 0;
  *(uint64_t *)(self + 0xb40) = 0;
  *(uint32_t *)(self + 0xb48) = 0xffffffff;
  *(uint32_t *)(self + 0xb4c) = 0xffffffff;
  *(uint32_t *)(self + 0xb50) = 0;
  *(uint64_t *)(self + 0xb58) = 0;
  *(uint64_t *)(self + 0xb60) = 0;
  *(uint32_t *)(self + 0xb68) = 0xffffffff;
  *(uint32_t *)(self + 0xb6c) = 0xffffffff;
  *(uint32_t *)(self + 0xb70) = 0;
  *(uint64_t *)(self + 0xb78) = 0;
  *(uint64_t *)(self + 0xb80) = 0;
  *(uint32_t *)(self + 0xb88) = 0xffffffff;
  *(uint32_t *)(self + 0xb8c) = 0xffffffff;
  *(uint32_t *)(self + 0xb90) = 0;
  *(uint64_t *)(self + 0xb98) = 0;
  *(uint64_t *)(self + 0xba0) = 0;
                    /* try { // try from 004d8e86 to 004d8e8a has its CatchHandler @ 004d9d93 */
  CriticalSection__CriticalSection((CriticalSection *)(self + 0xbc0));
  *(uint16_t *)(self + 0xbea) = 0;
  *(uint16_t *)(self + 0xbe8) = 0;
  *(uint16_t *)(self + 0xbf4) = 1;
  *(uint64_t *)(self + 0xbf8) = 0;
  *(uint64_t *)(self + 0xc00) = 0;
  *(uint32_t *)(self + 0xc08) = 0;
  self[0xbec] = (GSMBMenu)0x4;
  *(uint32_t *)(self + 0xbf0) = 0;
                    /* try { // try from 004d8ee6 to 004d8eea has its CatchHandler @ 004d9f45 */
  CriticalSection__CriticalSection((CriticalSection *)(self + 0xc10));
  *(uint16_t *)(self + 0xc3a) = 0;
  *(uint16_t *)(self + 0xc38) = 0;
  *(uint16_t *)(self + 0xc44) = 1;
  *(uint64_t *)(self + 0xc48) = 0;
  *(uint64_t *)(self + 0xc50) = 0;
  *(uint32_t *)(self + 0xc58) = 0;
  self[0xc3c] = (GSMBMenu)0x4;
  *(uint32_t *)(self + 0xc40) = 0;
                    /* try { // try from 004d8f46 to 004d8f4a has its CatchHandler @ 004d9f3d */
  TAudioInstance__TAudioInstance((TAudioInstance *)(self + 0xc68));
                    /* try { // try from 004d8f5a to 004d8f5e has its CatchHandler @ 004d9f35 */
  CriticalSection__CriticalSection((CriticalSection *)(self + 0xc90));
  *(uint16_t *)(self + 0xcba) = 0;
  *(uint16_t *)(self + 0xcb8) = 0;
  *(uint16_t *)(self + 0xcc4) = 1;
  *(uint64_t *)(self + 0xcc8) = 0;
  *(uint64_t *)(self + 0xcd0) = 0;
  *(uint32_t *)(self + 0xcd8) = 0;
  self[0xcbc] = (GSMBMenu)0x4;
  *(uint32_t *)(self + 0xcc0) = 0;
  *(uint64_t *)(self + 0xce0) = 0;
  *(uint64_t *)(self + 0xcf0) = 0;
  *(uint32_t *)(self + 0xd00) = 0;
  *(uint32_t *)(self + 0xd04) = 0;
  *(uint32_t *)(self + 0xd08) = 0;
                    /* try { // try from 004d8fee to 004d8ff2 has its CatchHandler @ 004d9f2d */
  SMBLeaderBoardMenu__SMBLeaderBoardMenu__004c4ca0((SMBLeaderBoardMenu *)(self + 0xd10));
  *(uint64_t *)(self + 0x1158) = 0;
  *(uint64_t *)(self + 0x1160) = 0;
  *(uint64_t *)(self + 0x1168) = 0;
  *(uint64_t *)(self + 0x1170) = 0;
  *(uint64_t *)(self + 0x1178) = 0;
                    /* try { // try from 004d9039 to 004d903d has its CatchHandler @ 004d9f25 */
  SMBCreditMenu__SMBCreditMenu__00504890((SMBCreditMenu *)(self + 0x1180));
                    /* try { // try from 004d904d to 004d9051 has its CatchHandler @ 004d9f1d */
  SMBHowToPlayMenu__SMBHowToPlayMenu__00504900((SMBHowToPlayMenu *)(self + 0x11d8));
                    /* try { // try from 004d9061 to 004d9065 has its CatchHandler @ 004d9f15 */
  SMBSettingsMenu__SMBSettingsMenu__00511330((SMBSettingsMenu *)(self + 0x1230));
                    /* try { // try from 004d9075 to 004d9079 has its CatchHandler @ 004d9f0d */
  SMBReplayManager__SMBReplayManager__0050f090((SMBReplayManager *)(self + 0x1308));
                    /* try { // try from 004d9089 to 004d908d has its CatchHandler @ 004d9f05 */
  SMBStatisticsMenu__SMBStatisticsMenu__005049f0((SMBStatisticsMenu *)(self + 0x13f0));
                    /* try { // try from 004d909d to 004d90a1 has its CatchHandler @ 004d9efd */
  SMBInternetChapterSel__SMBInternetChapterSel__004c36f0((SMBInternetChapterSel *)(self + 0x1448));
                    /* try { // try from 004d90b1 to 004d90b5 has its CatchHandler @ 004d9ef5 */
  SMBUpsellMenu__SMBUpsellMenu((SMBUpsellMenu *)(self + 0x1600));
                    /* try { // try from 004d90c5 to 004d90c9 has its CatchHandler @ 004d9eed */
  SMBControlsMenu__SMBControlsMenu__00504970((SMBControlsMenu *)(self + 0x16b8));
                    /* try { // try from 004d90d9 to 004d90dd has its CatchHandler @ 004d9ee5 */
  SMBCharSwitch__SMBCharSwitch__00505080((SMBCharSwitch *)(self + 0x1720));
                    /* try { // try from 004d90e8 to 004d90ec has its CatchHandler @ 004d9edd */
  SMBMoveOn__SMBMoveOn__00505470((SMBMoveOn *)(self + 0x1790));
  *(uint64_t *)(self + 0x17e8) = 0;
                    /* try { // try from 004d9107 to 004d910b has its CatchHandler @ 004d9ed5 */
  CriticalSection__CriticalSection((CriticalSection *)(self + 0x17f0));
  self[0x1843] = (GSMBMenu)0x0;
  *(uint16_t *)(self + 0x181a) = 0;
  *(uint16_t *)(self + 0x1818) = 0;
  *(uint16_t *)(self + 0x1824) = 1;
  *(uint64_t *)(self + 0x1828) = 0;
  *(uint64_t *)(self + 0x1830) = 0;
  *(uint32_t *)(self + 0x1838) = 0;
  self[0x181c] = (GSMBMenu)0x4;
  *(uint32_t *)(self + 0x1820) = 0;
  *(uint16_t *)(self + 0x1840) = 0;
  self[0x1842] = (GSMBMenu)0x0;
  playAsDrFetus._0_4_ = 4;
  playAsDrFetus._8_4_ = 4;
  playAsDrFetus._16_4_ = 4;
  playAsDrFetus._24_4_ = 1;
  playAsDrFetus._32_4_ = 1;
  playAsDrFetus._40_4_ = 1;
  playAsDrFetus._48_4_ = 2;
  playAsDrFetus._80_4_ = 7;
  playAsDrFetus._84_4_ = 2000;
  playAsBrownie._0_4_ = 5;
  playAsBrownie._8_4_ = 5;
  playAsBrownie._16_4_ = 5;
  playAsBrownie._24_4_ = 1;
  playAsBrownie._32_4_ = 1;
  playAsBrownie._40_4_ = 1;
  playAsBrownie._48_4_ = 2;
  playAsBrownie._80_4_ = 7;
  playAsBrownie._84_4_ = 2000;
  playAsTofuBoy._0_4_ = 0x61;
  playAsTofuBoy._8_4_ = 0x20;
  playAsTofuBoy._16_4_ = 0x7a;
  playAsTofuBoy._24_4_ = 10;
  playAsTofuBoy._32_4_ = 0x61;
  playAsTofuBoy._40_4_ = 0x36;
  playAsTofuBoy._48_4_ = 0x38;
  playAsTofuBoy._56_4_ = 0x3e;
  playAsTofuBoy._64_4_ = 0x20;
  playAsTofuBoy._80_4_ = 9;
  playAsTofuBoy._84_4_ = 0x9c4;
  playAsTofuBoy._92_4_ = 1;
  playAsWOG._0_4_ = 0x12;
  playAsWOG._8_4_ = 10;
  playAsWOG._16_4_ = 0x3e;
  playAsWOG._24_4_ = 0x3e;
  playAsWOG._32_4_ = 0x34;
  playAsWOG._40_4_ = 0x5f;
  playAsWOG._48_4_ = 0x5f;
  playAsWOG._80_4_ = 7;
  playAsWOG._84_4_ = 0x9c4;
  playAsWOG._92_4_ = 1;
  playAsTim._0_4_ = 0x5f;
  playAsTim._8_4_ = 0x7c;
  playAsTim._16_4_ = 0x7a;
  playAsTim._24_4_ = 10;
  playAsTim._32_4_ = 0x7a;
  playAsTim._40_4_ = 0x38;
  playAsTim._48_4_ = 0x45;
  playAsTim._56_4_ = 0x20;
  playAsTim._80_4_ = 8;
  playAsTim._84_4_ = 0x9c4;
  playAsTim._92_4_ = 1;
                    /* try { // try from 004d9379 to 004d93f0 has its CatchHandler @ 004d9ec9 */
  TResourceCreator__AddResourceCreationFunction
            ((TResourceCreator *)ResourceCreator,CreateSMBMenuResources,(void *)0x0);
  TResourceCreator__AddResourceDestroyFunction
            ((TResourceCreator *)ResourceCreator,DestroySMBMenuResources,(void *)0x0);
  SMBCreditMenu__Initialize((SMBCreditMenu *)(self + 0x1180));
  SMBHowToPlayMenu__Initialize((SMBHowToPlayMenu *)(self + 0x11d8));
  SMBSettingsMenu__Initialize((SMBSettingsMenu *)(self + 0x1230));
  SMBReplayManager__Initialize((SMBReplayManager *)(self + 0x1308));
  SMBStatisticsMenu__Initialize((SMBStatisticsMenu *)(self + 0x13f0));
  SMBInternetChapterSel__Initialize((SMBInternetChapterSel *)(self + 0x1448));
  SMBUpsellMenu__Initialize((SMBUpsellMenu *)(self + 0x1600));
  SMBControlsMenu__Initialize((SMBControlsMenu *)(self + 0x16b8));
  SMBCharSwitch__Initialize((SMBCharSwitch *)(self + 0x1720));
  SMBMoveOn__Initialize((SMBMoveOn *)(self + 0x1790));
  local_48[0] = &DAT_008184c8 /* R:0.00016803004837129265f */;
                    /* try { // try from 004d940a to 004d941b has its CatchHandler @ 004d9ec4 */
  pcVar6 = (char *)FormatResourcePath("/Menus/menumeatboy.am",local_48);
  pFVar7 = operator_new(0xb0);
                    /* try { // try from 004d9425 to 004d9429 has its CatchHandler @ 004d9ec2 */
  FlashAnimationLibrary__FlashAnimationLibrary__00576680(pFVar7,pcVar6);
  *(FlashAnimationLibrary **)(self + 0x4c8) = pFVar7;
                    /* try { // try from 004d9436 to 004d9459 has its CatchHandler @ 004d9ec4 */
  SMBLeaderBoardMenu__Initialize((SMBLeaderBoardMenu *)(self + 0xd10));
  pcVar6 = (char *)FormatResourcePath("/Menus/menutrans.am",local_48);
  pFVar7 = operator_new(0xb0);
                    /* try { // try from 004d9463 to 004d9467 has its CatchHandler @ 004d9ebe */
  FlashAnimationLibrary__FlashAnimationLibrary__00576680(pFVar7,pcVar6);
  *(FlashAnimationLibrary **)(self + 0x5f8) = pFVar7;
                    /* try { // try from 004d9477 to 004d9591 has its CatchHandler @ 004d9ec4 */
  uVar8 = FlashAnimationLibrary__GetMovieClip__005731d0(pFVar7,"menutransin");
  *(uint64_t *)(self + 0x600) = uVar8;
  uVar8 = FlashAnimationLibrary__GetMovieClip__005731d0
                    (*(FlashAnimationLibrary **)(self + 0x5f8),"menutransout");
  *(uint64_t *)(self + 0x608) = uVar8;
  uVar8 = FlashAnimationLibrary__GetMovieClip__005731d0
                    (*(FlashAnimationLibrary **)(self + 0x5f8),"gametransin");
  *(uint64_t *)(self + 0x610) = uVar8;
  uVar8 = FlashAnimationLibrary__GetMovieClip__005731d0
                    (*(FlashAnimationLibrary **)(self + 0x5f8),"gametransout");
  *(uint64_t *)(self + 0x618) = uVar8;
  uVar8 = FlashAnimationLibrary__GetMovieClip__005731d0
                    (*(FlashAnimationLibrary **)(self + 0x5f8),"gametranload");
  *(uint64_t *)(self + 0x650) = uVar8;
  uVar8 = FlashAnimationLibrary__GetMovieClip__005731d0
                    (*(FlashAnimationLibrary **)(self + 0x5f8),"worldtrans1");
  *(uint64_t *)(self + 0x620) = uVar8;
  uVar8 = FlashAnimationLibrary__GetMovieClip__005731d0
                    (*(FlashAnimationLibrary **)(self + 0x5f8),"worldtrans2");
  *(uint64_t *)(self + 0x628) = uVar8;
  uVar8 = FlashAnimationLibrary__GetMovieClip__005731d0
                    (*(FlashAnimationLibrary **)(self + 0x5f8),"worldright1");
  *(uint64_t *)(self + 0x640) = uVar8;
  uVar8 = FlashAnimationLibrary__GetMovieClip__005731d0
                    (*(FlashAnimationLibrary **)(self + 0x5f8),"worldright2");
  *(uint64_t *)(self + 0x648) = uVar8;
  uVar8 = FlashAnimationLibrary__GetMovieClip__005731d0
                    (*(FlashAnimationLibrary **)(self + 0x5f8),"worldleft1");
  *(uint64_t *)(self + 0x630) = uVar8;
  uVar8 = FlashAnimationLibrary__GetMovieClip__005731d0
                    (*(FlashAnimationLibrary **)(self + 0x5f8),"worldleft2");
  *(uint64_t *)(self + 0x638) = uVar8;
  pcVar6 = (char *)FormatResourcePath("/Menus/pausemenu.am",local_48);
  pFVar7 = operator_new(0xb0);
                    /* try { // try from 004d959b to 004d959f has its CatchHandler @ 004d9eae */
  FlashAnimationLibrary__FlashAnimationLibrary__00576680(pFVar7,pcVar6);
  *(FlashAnimationLibrary **)(self + 0x7a0) = pFVar7;
                    /* try { // try from 004d95af to 004d98a7 has its CatchHandler @ 004d9ec4 */
  uVar8 = FlashAnimationLibrary__GetMovieClip__005731d0(pFVar7,"idle1");
  *(uint64_t *)(self + 0x7a8) = uVar8;
  uVar8 = FlashAnimationLibrary__GetMovieClip__005731d0(*(FlashAnimationLibrary **)(self + 0x7a0),"pausein");
  *(uint64_t *)(self + 2000) = uVar8;
  uVar8 = FlashAnimationLibrary__GetMovieClip__005731d0(*(FlashAnimationLibrary **)(self + 0x7a0),"pauseout");
  *(uint64_t *)(self + 0x7d8) = uVar8;
  uVar4 = FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 0x7a0),"overlay1");
  *(uint32_t *)(self + 0x7b8) = uVar4;
  uVar4 = FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 0x7a0),"overlay2");
  *(uint32_t *)(self + 0x7bc) = uVar4;
  uVar4 = FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 0x7a0),"overlay3");
  *(uint32_t *)(self + 0x7c0) = uVar4;
  uVar4 = FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 0x7a0),"overlay5");
  *(uint32_t *)(self + 0x7c4) = uVar4;
  uVar4 = FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 0x7a0),"overlay6");
  *(uint32_t *)(self + 0x7c8) = uVar4;
  uVar8 = FlashAnimationLibrary__GetMovieClip__005731d0(*(FlashAnimationLibrary **)(self + 0x7a0),"overlay1");
  *(uint64_t *)(self + 0x7b0) = uVar8;
  uVar8 = GetLocalizedText(0x15);
  pwVar9 = (wchar_t *)
           FlashAnimationLibrary__GetTextField
                     (*(FlashAnimationLibrary **)(self + 0x7a0),"pausetext");
  FlashTextField__SetText(pwVar9,uVar8);
  *(uint8_t *)(*(long *)(self + 0x7a0) + 0x8c) = 1;
  pFVar10 = (FlashLibraryEntry *)
            FlashAnimationLibrary__GetLibraryEntry
                      (*(FlashAnimationLibrary **)(self + 0x7a0),
                       *(int *)(*(long *)(self + 0x7a8) + 0x20));
  SetMenuProperties(0,*(FlashAnimationLibrary **)(self + 0x7a0),pFVar10,pMVar3,
                    (MenuEntryProps *)pauseMenuProps);
  SetMenuProperties(2,*(FlashAnimationLibrary **)(self + 0x7a0),pFVar10,pMVar3,
                    (MenuEntryProps *)pauseMenuProps);
  SetMenuProperties(1,*(FlashAnimationLibrary **)(self + 0x7a0),pFVar10,pMVar3,
                    (MenuEntryProps *)pauseMenuProps);
  SetMenuProperties(5,*(FlashAnimationLibrary **)(self + 0x7a0),pFVar10,pMVar3,
                    (MenuEntryProps *)pauseMenuProps);
  SetMenuProperties(4,*(FlashAnimationLibrary **)(self + 0x7a0),pFVar10,pMVar3,
                    (MenuEntryProps *)pauseMenuProps);
  SetMenuProperties(6,*(FlashAnimationLibrary **)(self + 0x7a0),pFVar10,pMVar3,
                    (MenuEntryProps *)pauseMenuProps);
  SetMenuProperties(3,*(FlashAnimationLibrary **)(self + 0x7a0),pFVar10,pMVar3,
                    (MenuEntryProps *)pauseMenuProps);
  *(uint32_t *)(*(long *)(self + 0x918) + 0x20) = *(uint32_t *)(self + 0x90c);
  *(uint64_t *)(self + 0xb40) = *(uint64_t *)(self + 0x920);
  *(uint64_t *)(self + 0xb28) = *(uint64_t *)(self + 0x908);
  *(uint64_t *)(self + 0xb48) = *(uint64_t *)(self + 0x928);
  *(uint64_t *)(self + 0xb30) = *(uint64_t *)(self + 0x910);
  *(uint64_t *)(self + 0xb50) = *(uint64_t *)(self + 0x930);
  *(long *)(self + 0xb38) = *(long *)(self + 0x918);
  *(uint64_t *)(self + 0xb58) = *(uint64_t *)(self + 0x938);
  *(uint64_t *)(self + 0xb60) = *(uint64_t *)(self + 0x940);
  *(uint64_t *)(self + 0xb68) = *(uint64_t *)(self + 0x948);
  *(uint64_t *)(self + 0xb70) = *(uint64_t *)(self + 0x950);
  *(uint64_t *)(self + 0xb78) = *(uint64_t *)(self + 0x958);
  *(uint64_t *)(self + 0xb80) = *(uint64_t *)(self + 0x960);
  *(uint64_t *)(self + 0xb88) = *(uint64_t *)(self + 0x968);
  *(uint64_t *)(self + 0xb90) = *(uint64_t *)(self + 0x970);
  *(uint64_t *)(self + 0xb98) = *(uint64_t *)(self + 0x978);
  *(uint64_t *)(self + 0xba0) = *(uint64_t *)(self + 0x980);
  *(uint32_t *)(*(long *)(self + 0x918) + 0x20) = *(uint32_t *)(self + 0x90c);
  pcVar6 = (char *)FormatResourcePath("/Menus/titlescreen.am",local_48);
  pFVar7 = operator_new(0xb0);
                    /* try { // try from 004d98b1 to 004d98b5 has its CatchHandler @ 004d9e8d */
  FlashAnimationLibrary__FlashAnimationLibrary__00576680(pFVar7,pcVar6);
  *(FlashAnimationLibrary **)(self + 0x7e0) = pFVar7;
                    /* try { // try from 004d98c5 to 004d9cd2 has its CatchHandler @ 004d9ec4 */
  uVar8 = FlashAnimationLibrary__GetMovieClip__005731d0(pFVar7,"mainmenu1");
  *(uint64_t *)(self + 0x7e8) = uVar8;
  uVar8 = FlashAnimationLibrary__GetMovieClip__005731d0(*(FlashAnimationLibrary **)(self + 0x7e0),"mainmenu1")
  ;
  *(uint64_t *)(self + 0x7f0) = uVar8;
  uVar8 = FlashAnimationLibrary__GetMovieClip__005731d0(*(FlashAnimationLibrary **)(self + 0x7e0),"titleback")
  ;
  *(uint64_t *)(self + 0x7f8) = uVar8;
  uVar8 = FlashAnimationLibrary__GetMovieClip__005731d0(*(FlashAnimationLibrary **)(self + 0x7e0),"start");
  *(uint64_t *)(self + 0x800) = uVar8;
  uVar8 = FlashAnimationLibrary__GetMovieClip__005731d0(*(FlashAnimationLibrary **)(self + 0x7e0),"startout");
  *(uint64_t *)(self + 0x808) = uVar8;
  uVar8 = FlashAnimationLibrary__GetMovieClip__005731d0(*(FlashAnimationLibrary **)(self + 0x7e0),"titleout");
  *(uint64_t *)(self + 0x810) = uVar8;
  pwVar9 = (wchar_t *)
           FlashAnimationLibrary__GetTextField
                     (*(FlashAnimationLibrary **)(self + 0x7e0),"startbutton");
  if (pwVar9 != (wchar_t *)0x0) {
    uVar8 = GetLocalizedText(0x16);
    FlashTextField__SetText(pwVar9,uVar8);
  }
  this_00 = (FlashMovieClip *)
            FlashAnimationLibrary__GetLibraryEntry
                      (*(FlashAnimationLibrary **)(self + 0x7e0),
                       *(int *)(*(long *)(self + 0x7e8) + 0x20));
  SetMenuProperties(0,*(FlashAnimationLibrary **)(self + 0x7e0),(FlashLibraryEntry *)this_00,pMVar2,
                    (MenuEntryProps *)titleMenuProps);
  SetMenuProperties(1,*(FlashAnimationLibrary **)(self + 0x7e0),(FlashLibraryEntry *)this_00,pMVar2,
                    (MenuEntryProps *)titleMenuProps);
  SetMenuProperties(4,*(FlashAnimationLibrary **)(self + 0x7e0),(FlashLibraryEntry *)this_00,pMVar2,
                    (MenuEntryProps *)titleMenuProps);
  SetMenuProperties(6,*(FlashAnimationLibrary **)(self + 0x7e0),(FlashLibraryEntry *)this_00,pMVar2,
                    (MenuEntryProps *)titleMenuProps);
  SetMenuProperties(2,*(FlashAnimationLibrary **)(self + 0x7e0),(FlashLibraryEntry *)this_00,pMVar2,
                    (MenuEntryProps *)titleMenuProps);
  SetMenuProperties(3,*(FlashAnimationLibrary **)(self + 0x7e0),(FlashLibraryEntry *)this_00,pMVar2,
                    (MenuEntryProps *)titleMenuProps);
  SetMenuProperties(5,*(FlashAnimationLibrary **)(self + 0x7e0),(FlashLibraryEntry *)this_00,pMVar2,
                    (MenuEntryProps *)titleMenuProps);
  *(uint32_t *)(*(long *)(self + 0x838) + 0x20) = *(uint32_t *)(self + 0x82c);
  *(uint64_t *)(self + 0xa00) = *(uint64_t *)(self + 0x840);
  *(uint64_t *)(self + 0x9f0) = *(uint64_t *)(self + 0x830);
  *(uint64_t *)(self + 0x9e8) = *(uint64_t *)(self + 0x828);
  *(uint64_t *)(self + 0xa08) = *(uint64_t *)(self + 0x848);
  *(long *)(self + 0x9f8) = *(long *)(self + 0x838);
  *(uint64_t *)(self + 0xa10) = *(uint64_t *)(self + 0x850);
  *(uint64_t *)(self + 0xa18) = *(uint64_t *)(self + 0x858);
  *(uint64_t *)(self + 0xa20) = *(uint64_t *)(self + 0x860);
  *(uint64_t *)(self + 0xa48) = *(uint64_t *)(self + 0x888);
  *(uint64_t *)(self + 0xa50) = *(uint64_t *)(self + 0x890);
  *(uint64_t *)(self + 0xa58) = *(uint64_t *)(self + 0x898);
  *(uint64_t *)(self + 0xa60) = *(uint64_t *)(self + 0x8a0);
  *(uint64_t *)(self + 0xa28) = *(uint64_t *)(self + 0x868);
  *(uint64_t *)(self + 0xa30) = *(uint64_t *)(self + 0x870);
  *(uint64_t *)(self + 0xa38) = *(uint64_t *)(self + 0x878);
  *(uint64_t *)(self + 0xa40) = *(uint64_t *)(self + 0x880);
  *(uint64_t *)(self + 0xa68) = *(uint64_t *)(self + 0x8a8);
  *(uint64_t *)(self + 0xa70) = *(uint64_t *)(self + 0x8b0);
  *(uint64_t *)(self + 0xa78) = *(uint64_t *)(self + 0x8b8);
  *(uint64_t *)(self + 0xa80) = *(uint64_t *)(self + 0x8c0);
  *(int *)(*(long *)(self + 0x838) + 0x20) = (int)((ulong)*(uint64_t *)(self + 0x828) >> 0x20);
  *(uint64_t *)(self + 0xa88) = *(uint64_t *)(self + 0x908);
  *(uint64_t *)(self + 0xa90) = *(uint64_t *)(self + 0x910);
  *(uint64_t *)(self + 0xa98) = *(uint64_t *)(self + 0x918);
  *(uint64_t *)(self + 0xaa0) = *(uint64_t *)(self + 0x920);
  *(uint64_t *)(self + 0xaa8) = *(uint64_t *)(self + 0x928);
  *(uint64_t *)(self + 0xab0) = *(uint64_t *)(self + 0x930);
  *(uint64_t *)(self + 0xab8) = *(uint64_t *)(self + 0x938);
  *(uint64_t *)(self + 0xac0) = *(uint64_t *)(self + 0x940);
  *(uint64_t *)(self + 0xae8) = *(uint64_t *)(self + 0x968);
  *(uint64_t *)(self + 0xaf0) = *(uint64_t *)(self + 0x970);
  *(uint64_t *)(self + 0xaf8) = *(uint64_t *)(self + 0x978);
  *(uint64_t *)(self + 0xb00) = *(uint64_t *)(self + 0x980);
  *(uint64_t *)(self + 0xac8) = *(uint64_t *)(self + 0x948);
  *(uint64_t *)(self + 0xad0) = *(uint64_t *)(self + 0x950);
  *(uint64_t *)(self + 0xad8) = *(uint64_t *)(self + 0x958);
  *(uint64_t *)(self + 0xae0) = *(uint64_t *)(self + 0x960);
  *(uint64_t *)(self + 0xb08) = *(uint64_t *)(self + 0x988);
  *(uint64_t *)(self + 0xb10) = *(uint64_t *)(self + 0x990);
  *(uint64_t *)(self + 0xb18) = *(uint64_t *)(self + 0x998);
  *(uint64_t *)(self + 0xb20) = *(uint64_t *)(self + 0x9a0);
  *(uint32_t *)(*(long *)(self + 0x9f8) + 0x20) = *(uint32_t *)(self + 0x9ec);
  iVar5 = FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 0x7e0),"buttonb");
  lVar11 = FlashMovieClip__FindInstance(this_00,iVar5,0,(int *)0x0,0);
  *(long *)(self + 0xba8) = lVar11;
  local_78 = 0;
  local_74 = 0;
  local_80 = "audio/smbworldloop.wav";
  local_88[0] = 5;
  *(uint32_t *)(self + 3000) = *(uint32_t *)(lVar11 + 0x20);
                    /* try { // try from 004d9d18 to 004d9d5d has its CatchHandler @ 004d9dda */
  uVar8 = TAudioCue__Create((TAudioCueCreation *)local_88);
  *(uint64_t *)(self + 0xc60) = uVar8;
  local_58 = 0;
  local_54 = 0;
  local_60 = "audio/smbtitleloop.wav";
  local_68[0] = 5;
  pTitleMenuMusic = TAudioCue__Create((TAudioCueCreation *)local_68);
  SMBMenu = self;
  if ((allocator *)(local_48[0] + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage) {
    LOCK();
    piVar1 = (int *)(local_48[0] + -8);
    iVar5 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar5 < 1) {
      std__string_Rep_M_destroy((allocator *)(local_48[0] + -0x18));
    }
  }
  return;
}
