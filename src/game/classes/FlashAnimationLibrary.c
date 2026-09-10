/* src/game/classes/FlashAnimationLibrary.c — 15 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "FlashAnimationLibrary.h"

/* ======================================================================
 * FlashAnimationLibrary__GetDotIndex  (Ghidra `GetDotIndex` @ 00572dc0)
 * Signature: uint8_t __thiscall GetDotIndex(FlashAnimationLibrary * self, char * arg1, int * arg2)
 * Class: FlashAnimationLibrary
 * Calls: `operator_new`, `strcmp`
 * Called by: (none)
 */
/* FlashAnimationLibrary__GetDotIndex(char const*, int&) */

void __thiscall
FlashAnimationLibrary__GetDotIndex(FlashAnimationLibrary *self,char *arg1,int *arg2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  uint64_t *puVar4;
  uint8_t **ppuVar5;
  ulong uVar6;
  
  *arg2 = -1;
  iVar1 = *(int *)(self + 0x60);
  if (0 < iVar1) {
    lVar2 = *(long *)(self + 0x78);
    uVar6 = 0;
    do {
      iVar3 = strcmp(arg1,*(char **)(lVar2 + uVar6 * 8));
      if (iVar3 == 0) {
        puVar4 = operator_new(0xa0);
        puVar4[2] = 0;
        puVar4[1] = 0;
        puVar4[3] = 0;
        *puVar4 = &PTR__FlashLibraryInstance_005dbb50;
        *(uint32_t *)((long)puVar4 + 0x24) = 1;
        *(uint32_t *)(puVar4 + 6) = 0;
        *(uint32_t *)((long)puVar4 + 0x34) = 0;
        *(uint32_t *)(puVar4 + 7) = 0;
        *(uint32_t *)((long)puVar4 + 0x3c) = 0;
        *(uint32_t *)(puVar4 + 8) = 0x3f800000;
        *(uint32_t *)((long)puVar4 + 0x44) = 0x3f800000;
        *(uint32_t *)(puVar4 + 9) = 0;
        *(uint32_t *)((long)puVar4 + 0x4c) = 0;
        *(uint32_t *)(puVar4 + 10) = 0;
        *(uint32_t *)((long)puVar4 + 0x54) = 0;
        *(uint32_t *)(puVar4 + 0xb) = 0;
        *(uint32_t *)((long)puVar4 + 0x5c) = 0;
        *(uint32_t *)(puVar4 + 0xc) = 0x3f800000;
        *(uint32_t *)((long)puVar4 + 100) = 0;
        *(uint32_t *)(puVar4 + 0xd) = 0;
        *(uint32_t *)((long)puVar4 + 0x6c) = 0;
        *(uint32_t *)(puVar4 + 0xe) = 0;
        *(uint32_t *)((long)puVar4 + 0x74) = 0x3f800000;
        *(uint32_t *)(puVar4 + 0xf) = 0x3f800000;
        *(uint32_t *)((long)puVar4 + 0x7c) = 0x3f800000;
        *(uint32_t *)(puVar4 + 0x10) = 0x3f800000;
        *(uint32_t *)((long)puVar4 + 0x84) = 0;
        puVar4[0x11] = 0;
        puVar4[0x12] = 0;
        *(uint32_t *)((long)puVar4 + 0x9c) = 1;
        *(int *)(puVar4 + 4) = (int)uVar6;
        puVar4[5] = self;
        lVar2 = *(long *)(*(long *)(self + 0x48) + (uVar6 & 0xffff) * 8);
        if (*(int *)(lVar2 + 0x10) == 1) {
          *arg2 = -1;
          if ((((0 < *(int *)(lVar2 + 0x2c)) && (0 < **(int **)(lVar2 + 0x30))) &&
              (lVar2 = *(long *)(*(int **)(lVar2 + 0x30) + 2), 0 < *(int *)(lVar2 + 0x18))) &&
             (lVar2 = *(long *)(*(long *)(self + 0x48) +
                               (ulong)*(ushort *)(*(long *)(lVar2 + 0x20) + 0x20) * 8), lVar2 != 0))
          {
            *arg2 = *(int *)(lVar2 + 0x1c);
          }
          ppuVar5 = (uint8_t **)*puVar4;
        }
        else {
          ppuVar5 = &PTR__FlashLibraryInstance_005dbb50;
        }
                    /* WARNING: Could not recover jumptable at 0x00572f39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)ppuVar5[1])();
        return;
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < iVar1);
  }
  return;
}

/* ======================================================================
 * FlashAnimationLibrary__EnableFlags  (Ghidra `EnableFlags` @ 00572fb0)
 * Signature: uint8_t __thiscall EnableFlags(FlashAnimationLibrary * self, uint arg1)
 * Class: FlashAnimationLibrary
 * Calls: (none)
 * Called by: `AlienHominid__RenderClones`, `CommanderVideo__RenderClones`, `DrFetus__RenderClones`, `GSMBCutSceneManager__Render`, `GSMBCutSceneManager__RenderLoadingOverlay`, `GSMBCutSceneManager__RenderSavingOverlay`, `GooBall__RenderClones`, `HeadCrab__RenderClones`, `Jill__RenderClones`, `Machinarium__RenderClones` (+10 more)
 */
/* FlashAnimationLibrary__EnableFlags(unsigned int) */

void __thiscall FlashAnimationLibrary__EnableFlags(FlashAnimationLibrary *self,uint arg1)

{
  *(uint *)self = *(uint *)self | arg1;
  return;
}

/* ======================================================================
 * FlashAnimationLibrary__DisableFlags  (Ghidra `DisableFlags` @ 00572fc0)
 * Signature: uint8_t __thiscall DisableFlags(FlashAnimationLibrary * self, uint arg1)
 * Class: FlashAnimationLibrary
 * Calls: (none)
 * Called by: `AlienHominid__RenderClones`, `CommanderVideo__RenderClones`, `GSMBCutSceneManager__Render`, `GSMBCutSceneManager__RenderLoadingOverlay`, `GSMBCutSceneManager__RenderSavingOverlay`, `GooBall__RenderClones`, `HeadCrab__RenderClones`, `Jill__RenderClones`, `Machinarium__RenderClones`, `MeatBoyCharactor__RenderClones` (+9 more)
 */
/* FlashAnimationLibrary__DisableFlags(unsigned int) */

void __thiscall FlashAnimationLibrary__DisableFlags(FlashAnimationLibrary *self,uint arg1)

{
  *(uint *)self = *(uint *)self & ~arg1;
  return;
}

/* ======================================================================
 * FlashAnimationLibrary__IsDotIndex  (Ghidra `IsDotIndex` @ 00572fd0)
 * Signature: uint8_t __thiscall IsDotIndex(FlashAnimationLibrary * self, int arg1)
 * Class: FlashAnimationLibrary
 * Calls: (none)
 * Called by: (none)
 */
/* FlashAnimationLibrary__IsDotIndex(int) */

bool __thiscall FlashAnimationLibrary__IsDotIndex(FlashAnimationLibrary *self,int arg1)

{
  bool bVar1;
  
  bVar1 = true;
  if (*(int *)(self + 0xa8) != arg1) {
    bVar1 = arg1 == *(int *)(self + 0xac);
  }
  return bVar1;
}

/* ======================================================================
 * FlashAnimationLibrary__SetSymbolTexture  (Ghidra `SetSymbolTexture` @ 00572ff0)
 * Signature: uint8_t __thiscall SetSymbolTexture(FlashAnimationLibrary * self, int arg1)
 * Class: FlashAnimationLibrary
 * Calls: `IndexTexture__SetTexture`, `TGraphics__SetSamplerState`
 * Called by: (none)
 */
/* FlashAnimationLibrary__SetSymbolTexture(int) */

uint32_t __thiscall
FlashAnimationLibrary__SetSymbolTexture(FlashAnimationLibrary *self,int arg1)

{
  uint32_t uVar1;
  uint64_t *puVar2;
  int iVar3;
  
  if ((arg1 == *(int *)(self + 0xa8)) || (arg1 == *(int *)(self + 0xac))) {
    puVar2 = *(uint64_t **)(self + 8);
    iVar3 = 1;
  }
  else {
    puVar2 = *(uint64_t **)(self + 8);
    iVar3 = 0;
  }
  uVar1 = IndexTexture__SetTexture((IndexTexture *)*puVar2,0xff,arg1,iVar3);
  TGraphics__SetSamplerState(Graphics,(uchar)uVar1,'\x04',2);
  TGraphics__SetSamplerState(Graphics,(uchar)uVar1,'\x03',2);
  return uVar1;
}

/* ======================================================================
 * FlashAnimationLibrary__GetMovieClip  (Ghidra `GetMovieClip` @ 00573070)
 * Signature: uint8_t __thiscall GetMovieClip(FlashAnimationLibrary * self, char * arg1)
 * Class: FlashAnimationLibrary
 * Calls: `FlashAnimationLibrary__GetMovieClip__005731d0`, `operator_new`, `strcmp`
 * Called by: (none)
 */
/* FlashAnimationLibrary__GetMovieClip__005731d0(char const*) */

uint64_t * __thiscall
FlashAnimationLibrary__GetMovieClip__005731d0(FlashAnimationLibrary *self,char *arg1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  uint64_t *puVar4;
  long lVar5;
  
  puVar4 = (uint64_t *)0x0;
  iVar1 = *(int *)(self + 0x60);
  if (0 < iVar1) {
    lVar2 = *(long *)(self + 0x78);
    lVar5 = 0;
    while( true ) {
      iVar3 = strcmp(arg1,*(char **)(lVar2 + lVar5 * 8));
      if (iVar3 == 0) break;
      lVar5 = lVar5 + 1;
      if (iVar1 <= (int)lVar5) {
        return (uint64_t *)0x0;
      }
    }
    puVar4 = operator_new(0xa0);
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    *puVar4 = &PTR__FlashLibraryInstance_005dbb50;
    *(uint32_t *)((long)puVar4 + 0x24) = 1;
    *(uint32_t *)(puVar4 + 6) = 0;
    *(uint32_t *)((long)puVar4 + 0x34) = 0;
    *(uint32_t *)(puVar4 + 7) = 0;
    *(uint32_t *)((long)puVar4 + 0x3c) = 0;
    *(uint32_t *)(puVar4 + 8) = 0x3f800000;
    *(uint32_t *)((long)puVar4 + 0x44) = 0x3f800000;
    *(uint32_t *)(puVar4 + 9) = 0;
    *(uint32_t *)((long)puVar4 + 0x4c) = 0;
    *(uint32_t *)(puVar4 + 10) = 0;
    *(uint32_t *)((long)puVar4 + 0x54) = 0;
    *(uint32_t *)(puVar4 + 0xb) = 0;
    *(uint32_t *)((long)puVar4 + 0x5c) = 0;
    *(uint32_t *)(puVar4 + 0xc) = 0x3f800000;
    *(uint32_t *)((long)puVar4 + 100) = 0;
    *(uint32_t *)(puVar4 + 0xd) = 0;
    *(uint32_t *)((long)puVar4 + 0x6c) = 0;
    *(uint32_t *)(puVar4 + 0xe) = 0;
    *(uint32_t *)((long)puVar4 + 0x74) = 0x3f800000;
    *(uint32_t *)(puVar4 + 0xf) = 0x3f800000;
    *(uint32_t *)((long)puVar4 + 0x7c) = 0x3f800000;
    *(uint32_t *)(puVar4 + 0x10) = 0x3f800000;
    *(uint32_t *)((long)puVar4 + 0x84) = 0;
    puVar4[0x11] = 0;
    puVar4[0x12] = 0;
    *(uint32_t *)((long)puVar4 + 0x9c) = 1;
    *(int *)(puVar4 + 4) = (int)lVar5;
    puVar4[5] = self;
  }
  return puVar4;
}

/* ======================================================================
 * FlashAnimationLibrary__GetMovieClip__005731d0  (Ghidra `GetMovieClip` @ 005731d0)
 * Signature: uint8_t __thiscall GetMovieClip(FlashAnimationLibrary * self, int arg1)
 * Class: FlashAnimationLibrary
 * Calls: `operator_new`
 * Called by: `AddEditorButton`, `AlienHominid__CreateClones`, `CommanderVideo__CreateClones`, `DrFetus__CreateClones`, `EditorFormChapterUpload__EditorFormChapterUpload__004b8ec0`, `EditorForm__EditorForm__004b8350`, `FactoryBoss__FactoryBoss__00468ff0`, `FinalBoss__Update`, `FlashAnimationLibrary__GetMovieClip`, `ForestBoss__ForestBoss__0046a890` (+51 more)
 */
/* FlashAnimationLibrary__GetMovieClip__005731d0(int) */

uint64_t * __thiscall FlashAnimationLibrary__GetMovieClip__005731d0(FlashAnimationLibrary *self,int arg1)

{
  uint64_t *puVar1;
  
  puVar1 = (uint64_t *)0x0;
  if (arg1 <= *(int *)(self + 0x60)) {
    puVar1 = operator_new(0xa0);
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *puVar1 = &PTR__FlashLibraryInstance_005dbb50;
    *(uint32_t *)((long)puVar1 + 0x24) = 1;
    *(uint32_t *)(puVar1 + 6) = 0;
    *(uint32_t *)((long)puVar1 + 0x34) = 0;
    *(uint32_t *)(puVar1 + 7) = 0;
    *(uint32_t *)((long)puVar1 + 0x3c) = 0;
    *(uint32_t *)(puVar1 + 8) = 0x3f800000;
    *(uint32_t *)((long)puVar1 + 0x44) = 0x3f800000;
    *(uint32_t *)(puVar1 + 9) = 0;
    *(uint32_t *)((long)puVar1 + 0x4c) = 0;
    *(uint32_t *)(puVar1 + 10) = 0;
    *(uint32_t *)((long)puVar1 + 0x54) = 0;
    *(uint32_t *)(puVar1 + 0xb) = 0;
    *(uint32_t *)((long)puVar1 + 0x5c) = 0;
    *(uint32_t *)(puVar1 + 0xc) = 0x3f800000;
    *(uint32_t *)((long)puVar1 + 100) = 0;
    *(uint32_t *)(puVar1 + 0xd) = 0;
    *(uint32_t *)((long)puVar1 + 0x6c) = 0;
    *(uint32_t *)(puVar1 + 0xe) = 0;
    *(uint32_t *)((long)puVar1 + 0x74) = 0x3f800000;
    *(uint32_t *)(puVar1 + 0xf) = 0x3f800000;
    *(uint32_t *)((long)puVar1 + 0x7c) = 0x3f800000;
    *(uint32_t *)(puVar1 + 0x10) = 0x3f800000;
    *(uint32_t *)((long)puVar1 + 0x84) = 0;
    puVar1[0x11] = 0;
    puVar1[0x12] = 0;
    *(uint32_t *)((long)puVar1 + 0x9c) = 1;
    *(int *)(puVar1 + 4) = arg1;
    puVar1[5] = self;
  }
  return puVar1;
}

/* ======================================================================
 * FlashAnimationLibrary__GetClipIndex  (Ghidra `GetClipIndex` @ 005732f0)
 * Signature: uint8_t __thiscall GetClipIndex(FlashAnimationLibrary * self, char * arg1)
 * Class: FlashAnimationLibrary
 * Calls: `strcmp`
 * Called by: `AddPostLineRenderItem`, `DetermineMenuButtons`, `FillObjectInformationArray`, `ForestBoss__ForestBoss__0046a890`, `GMeatHUD__GMeatHUD__004800c0`, `GSMBMenu__GSMBMenu__004d8690`, `GSMBMenu__LoadChapterMenu`, `GSMBMenu__LoadCharacterMenu`, `LoadWorldMenu`, `SMBCharSwitch__Initialize` (+9 more)
 */
/* FlashAnimationLibrary__GetClipIndex(char const*) */

ulong __thiscall FlashAnimationLibrary__GetClipIndex(FlashAnimationLibrary *self,char *arg1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar5 = 0xffffffff;
  iVar1 = *(int *)(self + 0x60);
  if (0 < iVar1) {
    lVar2 = *(long *)(self + 0x78);
    uVar4 = 0;
    while( true ) {
      uVar5 = uVar4 & 0xffffffff;
      iVar3 = strcmp(arg1,*(char **)(lVar2 + uVar4 * 8));
      if (iVar3 == 0) break;
      uVar4 = uVar4 + 1;
      if (iVar1 <= (int)uVar4) {
        return 0xffffffff;
      }
    }
  }
  return uVar5;
}

/* ======================================================================
 * FlashAnimationLibrary__GetTextField  (Ghidra `GetTextField` @ 00573350)
 * Signature: uint8_t __thiscall GetTextField(FlashAnimationLibrary * self, char * arg1)
 * Class: FlashAnimationLibrary
 * Calls: `strlen`
 * Called by: `GMeatHUD__GMeatHUD__004800c0`, `GMeatHUD__Update`, `GSMBCutSceneManager__GSMBCutSceneManager__0049d5e0`, `GSMBMenu__GSMBMenu__004d8690`, `GSMBMenu__LoadChapterEnd`, `GSMBMenu__LoadChapterMenu`, `GSMBMenu__LoadCharacterMenu`, `GSMBMenu__SetBossPadState`, `GSMBMenu__SetCharSilouetteText`, `GSMBMenu__SetPauseHelpAndOptionsMenuText` (+30 more)
 */
/* WARNING: Removing unreachable block (ram,0x00573475) */
/* FlashAnimationLibrary__GetTextField(char const*) */

uint64_t __thiscall FlashAnimationLibrary__GetTextField(FlashAnimationLibrary *self,char *arg1)

{
  int *piVar1;
  char *__s;
  int iVar2;
  uint64_t uVar3;
  int iVar4;
  long lVar5;
  uint8_t *local_38 [3];
  
  lVar5 = 0;
  local_38[0] = &DAT_008184c8 /* R:0.00016803004837129265f */;
  do {
    strlen(arg1);
                    /* try { // try from 0057337f to 005733e9 has its CatchHandler @ 00573460 */
    std__string_assign((char *)local_38,(ulong)arg1);
    __s = *(char **)((long)&GetTextField(char_const*)::strAlignment + lVar5);
    strlen(__s);
    std__string_append((char *)local_38,(ulong)__s);
    std__string_append((char *)local_38,0x5db9d0);
    if (0 < *(int *)(self + 100)) {
      iVar4 = 0;
      do {
        iVar2 = std__string_compare((char *)local_38);
        if (iVar2 == 0) {
          uVar3 = *(uint64_t *)
                   (*(long *)(self + 0x48) +
                   (ulong)(ushort)((short)iVar4 + *(short *)(self + 0x60)) * 8);
          goto LAB_005733fd;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(self + 100));
    }
    lVar5 = lVar5 + 8;
  } while (lVar5 != 0x20);
  uVar3 = 0;
LAB_005733fd:
  if ((allocator *)(local_38[0] + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage) {
    LOCK();
    piVar1 = (int *)(local_38[0] + -8);
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 < 1) {
      std__string_Rep_M_destroy((allocator *)(local_38[0] + -0x18));
    }
  }
  return uVar3;
}

/* ======================================================================
 * FlashAnimationLibrary__GetClipNameByIndex  (Ghidra `GetClipNameByIndex` @ 00573480)
 * Signature: uint8_t __thiscall GetClipNameByIndex(FlashAnimationLibrary * self, int arg1)
 * Class: FlashAnimationLibrary
 * Calls: (none)
 * Called by: `SMBPalette__SMBPalette__004f3ca0`
 */
/* FlashAnimationLibrary__GetClipNameByIndex(int) */

uint64_t __thiscall
FlashAnimationLibrary__GetClipNameByIndex(FlashAnimationLibrary *self,int arg1)

{
  return *(uint64_t *)(*(long *)(self + 0x78) + (long)arg1 * 8);
}

/* ======================================================================
 * FlashAnimationLibrary__GetLibraryEntry  (Ghidra `GetLibraryEntry` @ 00573490)
 * Signature: uint8_t __thiscall GetLibraryEntry(FlashAnimationLibrary * self, int arg1)
 * Class: FlashAnimationLibrary
 * Calls: (none)
 * Called by: `BloodyTiles__Render`, `DetermineMenuButtons`, `EditorFormChapterUpload__EditorFormChapterUpload__004b8ec0`, `EditorForm__EditorForm__004b8350`, `ForestBoss__OnDeath`, `GMeatHUD__GMeatHUD__004800c0`, `GSMBMenu__GSMBMenu__004d8690`, `GSMBMenu__LoadChapterMenu`, `GSMBMenu__LoadCharacterMenu`, `LoadWorldMenu` (+9 more)
 */
/* FlashAnimationLibrary__GetLibraryEntry(int) */

uint64_t __thiscall
FlashAnimationLibrary__GetLibraryEntry(FlashAnimationLibrary *self,int arg1)

{
  return *(uint64_t *)(*(long *)(self + 0x48) + (ulong)(ushort)arg1 * 8);
}

/* ======================================================================
 * FlashAnimationLibrary__GetUITextField  (Ghidra `GetUITextField` @ 005734a0)
 * Signature: uint8_t __thiscall GetUITextField(FlashAnimationLibrary * self, uint arg1)
 * Class: FlashAnimationLibrary
 * Calls: `Sprint`, `strcmp`
 * Called by: `EditorFormChapterUpload__EditorFormChapterUpload__004b8ec0`, `EditorForm__EditorForm__004b8350`, `SMBEditor__SMBEditor__004ad010`, `SMBLevelPortalInterface__Initialize`
 */
/* FlashAnimationLibrary__GetUITextField(unsigned int) */

uint64_t __thiscall
FlashAnimationLibrary__GetUITextField(FlashAnimationLibrary *self,uint arg1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  uint64_t uVar4;
  ulong uVar5;
  char acStack_48 [32];
  
  Sprint("textfield%i",acStack_48,arg1);
  iVar1 = *(int *)(self + 0x60);
  uVar4 = 0;
  if (0 < iVar1) {
    lVar2 = *(long *)(self + 0x78);
    uVar5 = 0;
    while( true ) {
      iVar3 = strcmp(acStack_48,*(char **)(lVar2 + uVar5 * 8));
      if (iVar3 == 0) break;
      uVar5 = uVar5 + 1;
      if (iVar1 <= (int)uVar5) {
        return 0;
      }
    }
    uVar4 = *(uint64_t *)(*(long *)(self + 0x48) + (uVar5 & 0xffff) * 8);
  }
  return uVar4;
}

/* ======================================================================
 * FlashAnimationLibrary__GetEditablTextFieldText  (Ghidra `GetEditablTextFieldText` @ 00573520)
 * Signature: uint8_t __thiscall GetEditablTextFieldText(FlashAnimationLibrary * self, uint arg1, wstring * * arg2)
 * Class: FlashAnimationLibrary
 * Calls: `ConvertWCHARtoTCHAR`, `Sprint`, `std__wstring_wstring__008257a0`, `strcmp`
 * Called by: `EditorFormChapterUpload__LoadLevelLibrary`, `EditorFormChapterUpload__UploadChapter`
 */
/* FlashAnimationLibrary__GetEditablTextFieldText(unsigned int, std__wstring_wstring__008257a0 const**) */

uint64_t __thiscall
FlashAnimationLibrary__GetEditablTextFieldText
          (FlashAnimationLibrary *self,uint arg1,wstring **arg2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  char acStack_68 [40];
  uint64_t local_40 [2];
  
  Sprint("textfield%i",acStack_68,arg1);
  iVar1 = *(int *)(self + 0x60);
  local_40[0] = 0;
  if (0 < iVar1) {
    lVar2 = *(long *)(self + 0x78);
    uVar4 = 0;
    while( true ) {
      iVar3 = strcmp(acStack_68,*(char **)(lVar2 + uVar4 * 8));
      if (iVar3 == 0) break;
      uVar4 = uVar4 + 1;
      if (iVar1 <= (int)uVar4) {
        return 0;
      }
    }
    lVar2 = *(long *)(*(long *)(*(long *)(self + 0x48) + (uVar4 & 0xffff) * 8) + 0x40);
    if (arg2 != (wstring **)0x0) {
      *arg2 = (wstring *)(lVar2 + 0x40);
    }
    local_40[0] = 0;
    ConvertWCHARtoTCHAR(*(uint64_t *)(lVar2 + 0x40),local_40);
  }
  return local_40[0];
}

/* ======================================================================
 * FlashAnimationLibrary__FlashAnimationLibrary  (Ghidra `~FlashAnimationLibrary` @ 00575270)
 * Signature: uint8_t __thiscall ~FlashAnimationLibrary(FlashAnimationLibrary * self)
 * Class: FlashAnimationLibrary
 * Calls: `CreateAnimationLibResourceLoader`, `CriticalSection__CriticalSection__005b71d0`, `DestroyAnimationLibResources`, `FlashSoundLibrary__FlashSoundLibrary__00575090`, `IndexTexture__IndexTexture__005a1170`, `TResourceCreator__RemoveResourceCreationFunction`, `TResourceCreator__RemoveResourceDestroyFunction`, `free`, `operator_delete`
 * Called by: `FinalBoss__FinalBoss`, `FinalBoss__PlayCredits`, `GMeatHUD__GMeatHUD`, `GMeatHUD__KillIntro`, `GMeatHUD__Update`, `GSMBCutSceneManager__GSMBCutSceneManager`, `GSMBInstructions__GSMBInstructions__004c2c40`, `GSMBMenu__GSMBMenu`, `GSMBMenu__LoadChapterEnd`, `GSMBMenu__UnloadChapterMenu` (+24 more)
 */
/* WARNING: Removing unreachable block (ram,0x0057564f) */
/* FlashAnimationLibrary__FlashAnimationLibrary() */

void __thiscall FlashAnimationLibrary__FlashAnimationLibrary(FlashAnimationLibrary *self)

{
  allocator *paVar1;
  int iVar2;
  IndexTexture *this_00;
  long lVar3;
  long lVar4;
  long *plVar5;
  ushort uVar6;
  uint64_t *puVar7;
  int iVar8;
  uint uVar9;
  uint64_t *puVar10;
  ulong uVar11;
  long lVar12;
  int iVar13;
  int *piVar14;
  long local_68;
  int local_54;
  
                    /* try { // try from 0057528c to 00575457 has its CatchHandler @ 0057550a */
  Loader__Wait(*(uint *)(self + 0x84),1);
  puVar7 = *(uint64_t **)(self + 8);
  this_00 = (IndexTexture *)*puVar7;
  if (this_00 != (IndexTexture *)0x0) {
    IndexTexture__IndexTexture__005a1170(this_00);
    operator_delete(this_00);
    puVar7 = *(uint64_t **)(self + 8);
  }
  *puVar7 = 0;
  if (0 < *(int *)(self + 0x60)) {
    local_54 = 0;
    do {
      lVar3 = *(long *)(*(long *)(self + 0x48) + (ulong)(ushort)local_54 * 8);
      iVar2 = *(int *)(lVar3 + 0x2c);
      if (iVar2 < 1) {
        lVar12 = *(long *)(lVar3 + 0x30);
      }
      else {
        lVar12 = *(long *)(lVar3 + 0x30);
        local_68 = 0;
        do {
          piVar14 = (int *)(local_68 + lVar12);
          iVar8 = *piVar14;
          if (0 < iVar8) {
            lVar12 = 0;
            iVar13 = 0;
            do {
              lVar4 = *(long *)(piVar14 + 2);
              puVar7 = *(uint64_t **)(lVar12 + lVar4 + 0x20);
              if (puVar7 != (uint64_t *)0x0) {
                puVar10 = puVar7 + puVar7[-1] * 0x14;
                while (puVar10 != puVar7) {
                  puVar10 = puVar10 + -0x14;
                  (**(code **)*puVar10)(puVar10);
                  puVar7 = *(uint64_t **)(lVar12 + lVar4 + 0x20);
                }
                operator_delete__(puVar10 + -1);
                iVar8 = *piVar14;
              }
              iVar13 = iVar13 + 1;
              lVar12 = lVar12 + 0x28;
            } while (iVar13 < iVar8);
            lVar12 = *(long *)(lVar3 + 0x30);
            piVar14 = (int *)(local_68 + lVar12);
          }
          if (*(long *)(piVar14 + 2) != 0) {
            operator_delete__((void *)(*(long *)(piVar14 + 2) + -8));
            lVar12 = *(long *)(lVar3 + 0x30);
          }
          local_68 = local_68 + 0x10;
        } while (local_68 != ((ulong)(iVar2 - 1) + 1) * 0x10);
      }
      if (lVar12 != 0) {
        operator_delete__((void *)(lVar12 + -8));
      }
      local_54 = local_54 + 1;
    } while (local_54 < *(int *)(self + 0x60));
  }
  uVar6 = *(ushort *)(self + 0x38);
  if (uVar6 != 0) {
    uVar11 = 0;
    do {
      plVar5 = *(long **)(*(long *)(self + 0x48) + (uVar11 & 0xffff) * 8);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
        uVar6 = *(ushort *)(self + 0x38);
      }
      uVar9 = (int)uVar11 + 1;
      uVar11 = (ulong)uVar9;
    } while ((int)uVar9 < (int)(uint)uVar6);
  }
  if (*(int *)(self + 0x58) == -0x5eef3582) {
    *(uint32_t *)(self + 0x58) = 0;
    free(*(void **)(*(long *)(self + 0x48) + -8));
    if (*(int *)(self + 0x40) == 1) {
      free(*(void **)(*(long *)(self + 0x50) + -8));
    }
    *(uint32_t *)(self + 0x58) = 0;
    *(uint16_t *)(self + 0x3a) = 0;
    *(uint16_t *)(self + 0x38) = 0;
    *(uint64_t *)(self + 0x48) = 0;
    *(uint64_t *)(self + 0x50) = 0;
  }
  if (*(void **)(self + 0x78) != (void *)0x0) {
    operator_delete__(*(void **)(self + 0x78));
  }
  if (*(void **)(self + 0x70) != (void *)0x0) {
    operator_delete__(*(void **)(self + 0x70));
  }
  TResourceCreator__RemoveResourceCreationFunction
            ((TResourceCreator *)ResourceCreator,CreateAnimationLibResourceLoader,self);
  TResourceCreator__RemoveResourceDestroyFunction
            ((TResourceCreator *)ResourceCreator,DestroyAnimationLibResources,self);
  if (*(void **)(self + 8) != (void *)0x0) {
    operator_delete__(*(void **)(self + 8));
  }
                    /* try { // try from 0057546d to 00575471 has its CatchHandler @ 00575647 */
  FlashSoundLibrary__FlashSoundLibrary__00575090((FlashSoundLibrary *)(self + 0x90));
  paVar1 = (allocator *)(*(long *)(self + 0x68) + -0x18);
  if (paVar1 != (allocator *)&std__string_Rep_S_empty_rep_storage) {
    LOCK();
    piVar14 = (int *)(*(long *)(self + 0x68) + -8);
    iVar2 = *piVar14;
    *piVar14 = *piVar14 + -1;
    UNLOCK();
    if (iVar2 < 1) {
      std__string_Rep_M_destroy(paVar1);
    }
  }
  if (*(int *)(self + 0x58) == -0x5eef3582) {
    *(uint32_t *)(self + 0x58) = 0;
    free(*(void **)(*(long *)(self + 0x48) + -8));
    if (*(int *)(self + 0x40) == 1) {
      free(*(void **)(*(long *)(self + 0x50) + -8));
    }
    *(uint32_t *)(self + 0x58) = 0;
    *(uint16_t *)(self + 0x3a) = 0;
    *(uint16_t *)(self + 0x38) = 0;
    *(uint64_t *)(self + 0x48) = 0;
    *(uint64_t *)(self + 0x50) = 0;
  }
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)(self + 0x10));
  return;
}

/* ======================================================================
 * FlashAnimationLibrary__FlashAnimationLibrary__00576680  (Ghidra `FlashAnimationLibrary` @ 00576680)
 * Signature: uint8_t __thiscall FlashAnimationLibrary(FlashAnimationLibrary * self, char * arg1)
 * Class: FlashAnimationLibrary
 * Calls: `CreateAnimationLibResourceLoader`, `CreateAnimationLibResources`, `CriticalSection__CriticalSection`, `DestroyAnimationLibResources`, `File__File`, `File__File__005b7a70`, `File__GetFilePos`, `File__Read`, `File__ReadVariable`, `File__Seek` (+16 more)
 * Called by: `FactoryBoss__FactoryBoss__00468ff0`, `ForestBoss__ForestBoss__0046a890`, `GMeatHUD__GMeatHUD__004800c0`, `GMeatHUD__Update`, `GSMBCutSceneManager__GSMBCutSceneManager__0049d5e0`, `GSMBInstructions__GSMBInstructions`, `GSMBMenu__GSMBMenu__004d8690`, `GSMBMenu__LoadChapterEnd`, `GSMBMenu__LoadChapterMenu`, `GSMBMenu__LoadCharacterMenu` (+26 more)
 */
/* WARNING: Removing unreachable block (ram,0x005784e1) */
/* WARNING: Removing unreachable block (ram,0x00577a40) */
/* WARNING: Type propagation algorithm not settling */
/* FlashAnimationLibrary__FlashAnimationLibrary__00576680(char const*) */

void __thiscall
FlashAnimationLibrary__FlashAnimationLibrary__00576680(FlashAnimationLibrary *self,char *arg1)

{
  allocator *paVar1;
  FlashSoundLibrary *this_00;
  char cVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  void *pvVar9;
  long lVar10;
  FlashEditableTextField *this_01;
  FontEmitter *pFVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  void *pvVar15;
  void *pvVar16;
  ulong uVar17;
  ulong uVar18;
  ushort uVar19;
  int iVar20;
  uint64_t *puVar21;
  uint64_t *puVar22;
  int *piVar23;
  long *plVar24;
  ushort *puVar25;
  short sVar26;
  int iVar27;
  long lVar28;
  uint *puVar29;
  uint *puVar30;
  int iVar31;
  long lVar32;
  char *pcVar33;
  long lVar34;
  long lVar35;
  int iVar36;
  float *pfVar37;
  int iVar38;
  float fVar39;
  float fVar40;
  long local_320;
  long local_318;
  int local_308;
  long local_2f8;
  float local_2f0;
  int local_2ec;
  uint32_t local_2d8;
  ushort uStack_2d4;
  ushort auStack_2d2 [125];
  ushort local_1d8;
  ushort uStack_1d6;
  ushort uStack_1d4;
  ushort uStack_1d2;
  uint64_t local_1d0;
  char *local_158;
  uint8_t *local_150;
  uint32_t local_148;
  uint64_t local_140;
  uint32_t local_138;
  uint32_t local_134;
  uint32_t local_130;
  uint32_t local_12c;
  uint32_t local_128;
  uint32_t local_124;
  uint8_t *local_120;
  File local_118 [48];
  code *local_e8;
  FlashAnimationLibrary *local_e0;
  uint32_t local_d8;
  uint32_t local_d4;
  Vector2 local_c8 [4];
  uint8_t local_c4 [12];
  int local_b8 [4];
  int local_a8 [4];
  uint32_t local_98 [4];
  int local_88 [4];
  float local_78 [4];
  uint local_68 [2];
  uint8_t local_60 [4];
  uint local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  uint32_t local_44;
  allocator local_3f;
  allocator local_3e [14];
  
  *(uint32_t *)self = 1;
  CriticalSection__CriticalSection((CriticalSection *)(self + 0x10));
  *(uint16_t *)(self + 0x3a) = 0;
  *(uint16_t *)(self + 0x38) = 0;
  *(uint16_t *)(self + 0x44) = 1;
  *(uint64_t *)(self + 0x48) = 0;
  *(uint64_t *)(self + 0x50) = 0;
  *(uint32_t *)(self + 0x58) = 0;
  self[0x3c] = (FlashAnimationLibrary)0x4;
  *(uint32_t *)(self + 0x40) = 0;
  *(uint8_t **)(self + 0x68) = &DAT_008184c8 /* R:0.00016803004837129265f */;
  self[0x8c] = (FlashAnimationLibrary)0x0;
  self[0x8d] = (FlashAnimationLibrary)0x0;
  *(uint64_t *)(self + 0x90) = 0;
  *(uint32_t *)(self + 0x98) = 0;
  *(uint32_t *)(self + 0x9c) = 0xffffffff;
  *(uint64_t *)(self + 0xa0) = 0;
                    /* try { // try from 0057672c to 00576730 has its CatchHandler @ 00577e55 */
  System_GetTimeInMS();
  local_148 = 2;
  local_140 = 0;
  local_138 = 0;
  local_134 = 1;
  local_130 = 1;
  local_12c = 0;
  local_128 = 0;
  local_124 = 0;
  local_120 = &DAT_005c04cf /* R:7.374579797039071e-39f */;
  local_150 = &DAT_005c328c /* R:u32=1811964530 */;
  local_158 = arg1;
                    /* try { // try from 005767af to 005767d3 has its CatchHandler @ 00577e4e */
  pvVar9 = operator_new__(0x10);
  *(void **)(self + 8) = pvVar9;
  strlen(arg1);
  std__string_assign((char *)(self + 0x68),(ulong)arg1);
  local_d8 = Loader__GenerateLoadCallerID();
  *(uint32_t *)(self + 0x84) = local_d8;
  *(uint32_t *)(self + 0x88) = local_d8;
  local_d4 = 0;
  local_e8 = CreateAnimationLibResources;
  local_e0 = self;
                    /* try { // try from 00576810 to 0057684d has its CatchHandler @ 00577e49 */
  Loader__AddLoader((LoaderFuncCreate *)&local_e8);
  TResourceCreator__AddResourceCreationFunction
            ((TResourceCreator *)ResourceCreator,CreateAnimationLibResourceLoader,self);
  TResourceCreator__AddResourceDestroyFunction
            ((TResourceCreator *)ResourceCreator,DestroyAnimationLibResources,self);
  File__File(local_118,(tagFileCreation *)&local_158);
  local_b8[0] = 0;
                    /* try { // try from 0057686e to 00576963 has its CatchHandler @ 00577e41 */
  File__ReadVariable(local_118,local_b8,4);
  if (local_b8[0] + 0xb9cecfd0U < 2) {
    File__ReadVariable(local_118,local_a8,4);
  }
  else {
    local_a8[0] = local_b8[0];
    local_b8[0] = 0;
  }
  File__ReadVariable(local_118,self + 0x80,4);
  local_98[0] = 0;
  *(uint32_t *)(self + 100) = 0;
  if (local_b8[0] == 0x46313031) {
                    /* try { // try from 00577e02 to 00577e30 has its CatchHandler @ 00577e41 */
    File__ReadVariable(local_118,local_98,4);
    *(uint32_t *)(self + 100) = local_98[0];
  }
  sVar26 = (short)local_a8[0];
  *(int *)(self + 0x60) = local_a8[0] >> 0x10;
  pvVar9 = operator_new__((long)(int)sVar26);
  *(void **)(self + 0x70) = pvVar9;
  pvVar9 = operator_new__((long)(*(int *)(self + 0x60) + *(int *)(self + 100)) * 8);
  *(void **)(self + 0x78) = pvVar9;
  File__Read(local_118,*(void **)(self + 0x70),(int)sVar26);
  iVar31 = *(int *)(self + 0x60);
  if (iVar31 < 1) {
    iVar36 = 0;
  }
  else {
    local_320 = 0;
    iVar38 = 0;
    iVar36 = 0;
    do {
      lVar32 = (long)iVar36;
      std__string_string((string *)&local_2d8,(char *)(lVar32 + *(long *)(self + 0x70)),&local_3f);
                    /* try { // try from 00576973 to 0057698b has its CatchHandler @ 00577d9e */
      lVar10 = std__string_find((char *)&local_2d8,0x5db9c4,0);
      if (lVar10 == -1) {
                    /* try { // try from 00578216 to 0057821a has its CatchHandler @ 00577d9e */
        this_01 = operator_new(0x40);
        *(uint8_t ***)this_01 = &PTR__FlashMovieClip_005dbb90;
        *(uint32_t *)(this_01 + 0x18) = 0;
        *(uint32_t *)(this_01 + 0x1c) = 1;
        *(uint32_t *)(this_01 + 0x20) = 0;
        *(uint32_t *)(this_01 + 0x24) = 0;
        *(uint32_t *)(this_01 + 0x28) = 0;
        *(uint32_t *)(this_01 + 0x2c) = 0;
        *(uint64_t *)(this_01 + 0x30) = 0;
        *(uint32_t *)(this_01 + 0x10) = 1;
        *(FlashAnimationLibrary **)(this_01 + 8) = self;
        *(FlashAnimationLibrary **)(this_01 + 0x38) = self;
        if (*(int *)(self + 0x58) == -0x5eef3582) {
          uVar6 = *(ushort *)(self + 0x38);
          if (*(ushort *)(self + 0x3a) <= uVar6) {
            uVar6 = *(ushort *)(self + 0x3a) + *(short *)(self + 0x44);
            uVar18 = (ulong)(byte)self[0x3c];
            pvVar9 = *(void **)(self + 0x48);
            pvVar16 = (void *)0x0;
            *(ushort *)(self + 0x3a) = uVar6;
            uVar17 = (ulong)uVar6 * 8;
            pvVar15 = malloc(uVar18 + 0x10 + uVar17);
            if (pvVar15 != (void *)0x0) {
              pvVar16 = (void *)((long)pvVar15 + 0x10U +
                                (uVar18 - ((long)pvVar15 + 0x10U) % uVar18) % uVar18);
              *(ulong *)((long)pvVar16 + -0x10) = uVar17;
              *(void **)((long)pvVar16 + -8) = pvVar15;
              if (pvVar9 != (void *)0x0) {
                uVar18 = *(ulong *)((long)pvVar9 + -0x10);
                if (uVar17 <= *(ulong *)((long)pvVar9 + -0x10)) {
                  uVar18 = uVar17;
                }
                memcpy(pvVar16,pvVar9,uVar18);
                free(*(void **)((long)pvVar9 + -8));
              }
            }
            pvVar9 = *(void **)(self + 0x50);
            *(void **)(self + 0x48) = pvVar16;
            if (pvVar9 != (void *)0x0) {
              uVar19 = *(ushort *)(self + 0x3a);
              uVar18 = (ulong)(byte)self[0x3c];
              uVar17 = (ulong)uVar19 * 2;
              pvVar16 = malloc(uVar18 + 0x10 + uVar17);
              pvVar15 = (void *)0x0;
              if (pvVar16 != (void *)0x0) {
                pvVar15 = (void *)((long)pvVar16 + 0x10U +
                                  (uVar18 - ((long)pvVar16 + 0x10U) % uVar18) % uVar18);
                *(ulong *)((long)pvVar15 + -0x10) = uVar17;
                *(void **)((long)pvVar15 + -8) = pvVar16;
                uVar18 = *(ulong *)((long)pvVar9 + -0x10);
                if (uVar17 <= *(ulong *)((long)pvVar9 + -0x10)) {
                  uVar18 = uVar17;
                }
                memcpy(pvVar15,pvVar9,uVar18);
                free(*(void **)((long)pvVar9 + -8));
                uVar19 = *(ushort *)(self + 0x3a);
              }
              uVar6 = *(ushort *)(self + 0x38);
              *(void **)(self + 0x50) = pvVar15;
              if (uVar19 <= uVar6) goto LAB_00578305;
              while( true ) {
                uVar17 = (ulong)uVar6;
                uVar6 = uVar6 + 1;
                *(uint16_t *)((long)pvVar15 + uVar17 * 2) = 0xffff;
                if (uVar19 <= uVar6) break;
                pvVar15 = *(void **)(self + 0x50);
              }
            }
            uVar6 = *(ushort *)(self + 0x38);
          }
        }
        else {
          uVar17 = (ulong)(byte)self[0x3c];
          *(uint32_t *)(self + 0x40) = 0;
          pvVar9 = malloc(uVar17 + 0x38);
          puVar21 = (uint64_t *)0x0;
          if (pvVar9 != (void *)0x0) {
            puVar21 = (uint64_t *)
                      ((uVar17 - ((long)pvVar9 + 0x10U) % uVar17) % uVar17 + (long)pvVar9 + 0x10U);
            puVar21[-1] = pvVar9;
            puVar21[-2] = 0x28;
          }
          *(uint64_t **)(self + 0x48) = puVar21;
          uVar6 = 0;
          *puVar21 = 0;
          puVar21[1] = 0;
          puVar21[2] = 0;
          puVar21[3] = 0;
          puVar21[4] = 0;
          *(uint16_t *)(self + 0x38) = 0;
          *(uint16_t *)(self + 0x3a) = 5;
          *(uint32_t *)(self + 0x58) = 0xa110ca7e;
          *(uint16_t *)(self + 0x44) = 5;
        }
LAB_00578305:
        if ((*(int *)(self + 0x40) == 1) && (*(short *)(self + 0x3a) != 0)) {
          puVar25 = *(ushort **)(self + 0x50);
          sVar26 = 1;
          uVar19 = *puVar25;
          while (uVar19 != 0xffff) {
            puVar25 = puVar25 + 1;
            if (sVar26 == *(short *)(self + 0x3a)) goto LAB_00576a49;
            sVar26 = sVar26 + 1;
            uVar19 = *puVar25;
          }
          goto LAB_00577ed4;
        }
      }
      else {
        this_01 = operator_new(0x50);
                    /* try { // try from 00576992 to 00576996 has its CatchHandler @ 005781fe */
        FlashEditableTextField__FlashEditableTextField__00576550(this_01);
        *(FlashAnimationLibrary **)(this_01 + 8) = self;
        *(FlashAnimationLibrary **)(this_01 + 0x38) = self;
        if (*(int *)(self + 0x58) == -0x5eef3582) {
          uVar6 = *(ushort *)(self + 0x38);
          if (*(ushort *)(self + 0x3a) <= uVar6) {
            uVar6 = *(ushort *)(self + 0x3a) + *(short *)(self + 0x44);
            uVar18 = (ulong)(byte)self[0x3c];
            pvVar9 = *(void **)(self + 0x48);
            pvVar16 = (void *)0x0;
            *(ushort *)(self + 0x3a) = uVar6;
            uVar17 = (ulong)uVar6 * 8;
            pvVar15 = malloc(uVar18 + 0x10 + uVar17);
            if (pvVar15 != (void *)0x0) {
              pvVar16 = (void *)((long)pvVar15 + 0x10U +
                                (uVar18 - ((long)pvVar15 + 0x10U) % uVar18) % uVar18);
              *(ulong *)((long)pvVar16 + -0x10) = uVar17;
              *(void **)((long)pvVar16 + -8) = pvVar15;
              if (pvVar9 != (void *)0x0) {
                uVar18 = *(ulong *)((long)pvVar9 + -0x10);
                if (uVar17 <= *(ulong *)((long)pvVar9 + -0x10)) {
                  uVar18 = uVar17;
                }
                memcpy(pvVar16,pvVar9,uVar18);
                free(*(void **)((long)pvVar9 + -8));
              }
            }
            pvVar9 = *(void **)(self + 0x50);
            *(void **)(self + 0x48) = pvVar16;
            if (pvVar9 != (void *)0x0) {
              uVar19 = *(ushort *)(self + 0x3a);
              uVar18 = (ulong)(byte)self[0x3c];
              uVar17 = (ulong)uVar19 * 2;
              pvVar16 = malloc(uVar18 + 0x10 + uVar17);
              pvVar15 = (void *)0x0;
              if (pvVar16 != (void *)0x0) {
                pvVar15 = (void *)((long)pvVar16 + 0x10U +
                                  (uVar18 - ((long)pvVar16 + 0x10U) % uVar18) % uVar18);
                *(ulong *)((long)pvVar15 + -0x10) = uVar17;
                *(void **)((long)pvVar15 + -8) = pvVar16;
                uVar18 = *(ulong *)((long)pvVar9 + -0x10);
                if (uVar17 <= *(ulong *)((long)pvVar9 + -0x10)) {
                  uVar18 = uVar17;
                }
                memcpy(pvVar15,pvVar9,uVar18);
                free(*(void **)((long)pvVar9 + -8));
                uVar19 = *(ushort *)(self + 0x3a);
              }
              uVar6 = *(ushort *)(self + 0x38);
              *(void **)(self + 0x50) = pvVar15;
              if (uVar19 <= uVar6) goto LAB_00576a3e;
              while( true ) {
                uVar17 = (ulong)uVar6;
                uVar6 = uVar6 + 1;
                *(uint16_t *)((long)pvVar15 + uVar17 * 2) = 0xffff;
                if (uVar19 <= uVar6) break;
                pvVar15 = *(void **)(self + 0x50);
              }
            }
            uVar6 = *(ushort *)(self + 0x38);
          }
        }
        else {
          uVar17 = (ulong)(byte)self[0x3c];
          *(uint32_t *)(self + 0x40) = 0;
          pvVar9 = malloc(uVar17 + 0x38);
          puVar21 = (uint64_t *)0x0;
          if (pvVar9 != (void *)0x0) {
            puVar21 = (uint64_t *)
                      ((uVar17 - ((long)pvVar9 + 0x10U) % uVar17) % uVar17 + (long)pvVar9 + 0x10U);
            puVar21[-1] = pvVar9;
            puVar21[-2] = 0x28;
          }
          *(uint64_t **)(self + 0x48) = puVar21;
          uVar6 = 0;
          *puVar21 = 0;
          puVar21[1] = 0;
          puVar21[2] = 0;
          puVar21[3] = 0;
          puVar21[4] = 0;
          *(uint16_t *)(self + 0x38) = 0;
          *(uint16_t *)(self + 0x3a) = 5;
          *(uint32_t *)(self + 0x58) = 0xa110ca7e;
          *(uint16_t *)(self + 0x44) = 5;
        }
LAB_00576a3e:
        if ((*(int *)(self + 0x40) == 1) && (*(short *)(self + 0x3a) != 0)) {
          puVar25 = *(ushort **)(self + 0x50);
          sVar26 = 1;
          uVar19 = *puVar25;
          while (uVar19 != 0xffff) {
            puVar25 = puVar25 + 1;
            if (sVar26 == *(short *)(self + 0x3a)) goto LAB_00576a49;
            sVar26 = sVar26 + 1;
            uVar19 = *puVar25;
          }
LAB_00577ed4:
          *puVar25 = uVar6;
          uVar6 = *(ushort *)(self + 0x38);
        }
      }
LAB_00576a49:
      *(FlashEditableTextField **)(*(long *)(self + 0x48) + (ulong)uVar6 * 8) = this_01;
      *(short *)(self + 0x38) = *(short *)(self + 0x38) + 1;
      *(long *)(*(long *)(self + 0x78) + local_320) = lVar32 + *(long *)(self + 0x70);
      pcVar33 = (char *)(lVar32 + *(long *)(self + 0x70));
      do {
        cVar2 = *pcVar33;
        iVar36 = iVar36 + 1;
        pcVar33 = pcVar33 + 1;
      } while (cVar2 != '\0');
      lVar10 = CONCAT26(auStack_2d2[0],
                        CONCAT24(uStack_2d4,CONCAT22(local_2d8._2_2_,(ushort)local_2d8)));
      paVar1 = (allocator *)(lVar10 + -0x18);
      if (paVar1 != (allocator *)&std__string_Rep_S_empty_rep_storage) {
        LOCK();
        piVar23 = (int *)(lVar10 + -8);
        iVar31 = *piVar23;
        *piVar23 = *piVar23 + -1;
        UNLOCK();
        if (iVar31 < 1) {
          std__string_Rep_M_destroy(paVar1);
        }
      }
      iVar38 = iVar38 + 1;
      iVar31 = *(int *)(self + 0x60);
      local_320 = local_320 + 8;
    } while (iVar38 < iVar31);
  }
  if (0 < *(int *)(self + 100)) {
    iVar38 = 0;
    do {
      lVar32 = (long)iVar36;
      lVar10 = *(long *)(self + 0x70);
      *(char **)(*(long *)(self + 0x78) + (long)(iVar31 + iVar38) * 8) = (char *)(lVar32 + lVar10);
                    /* try { // try from 00576aee to 00576af2 has its CatchHandler @ 00577e41 */
      std__string_string((string *)&local_2d8,(char *)(lVar32 + lVar10),local_3e);
                    /* try { // try from 00576b02 to 00576b1a has its CatchHandler @ 00577ad2 */
      lVar10 = std__string_find((char *)&local_2d8,0x5db9ce,0);
      if (lVar10 == -1) {
                    /* try { // try from 00577a5d to 00577a71 has its CatchHandler @ 00577ad2 */
        lVar10 = std__string_find((char *)&local_2d8,0x5db9d6,0);
        if (lVar10 == -1) {
                    /* try { // try from 00577af0 to 00577af4 has its CatchHandler @ 00577ad2 */
          puVar21 = operator_new(0x28);
          *puVar21 = &PTR__FlashTextField_005dbc10;
          _local_1d8 = 0;
          local_1d0 = _DEFAULT_UI_FONT;
                    /* try { // try from 00577b1f to 00577b23 has its CatchHandler @ 00577ee6 */
          pFVar11 = operator_new(0xa0);
                    /* try { // try from 00577b32 to 00577b36 has its CatchHandler @ 00577ee1 */
          FontEmitter__FontEmitter__005861d0(pFVar11,(FontEmitterCreation *)&local_1d8);
          puVar21[3] = pFVar11;
          *(uint32_t *)(pFVar11 + 0x5c) = 0;
          *(uint32_t *)(puVar21 + 4) = 1;
          *(uint32_t *)(puVar21 + 2) = 2;
        }
        else {
          puVar21 = operator_new(0x28);
          *puVar21 = &PTR__FlashTextField_005dbc10;
          _local_1d8 = 0;
          local_1d0 = _DEFAULT_UI_FONT;
                    /* try { // try from 00577a9c to 00577aa0 has its CatchHandler @ 00577adf */
          pFVar11 = operator_new(0xa0);
                    /* try { // try from 00577aaf to 00577ab3 has its CatchHandler @ 00577ada */
          FontEmitter__FontEmitter__005861d0(pFVar11,(FontEmitterCreation *)&local_1d8);
          puVar21[3] = pFVar11;
          *(uint32_t *)(pFVar11 + 0x5c) = 2;
          *(uint32_t *)(puVar21 + 4) = 1;
          *(uint32_t *)(puVar21 + 2) = 2;
        }
      }
      else {
        puVar21 = operator_new(0x28);
        *puVar21 = &PTR__FlashTextField_005dbc10;
        _local_1d8 = 0;
        local_1d0 = _DEFAULT_UI_FONT;
                    /* try { // try from 00576b45 to 00576b49 has its CatchHandler @ 00577927 */
        pFVar11 = operator_new(0xa0);
                    /* try { // try from 00576b58 to 00576b5c has its CatchHandler @ 005778a7 */
        FontEmitter__FontEmitter__005861d0(pFVar11,(FontEmitterCreation *)&local_1d8);
        puVar21[3] = pFVar11;
        *(uint32_t *)(pFVar11 + 0x5c) = 1;
        *(uint32_t *)(puVar21 + 4) = 1;
        *(uint32_t *)(puVar21 + 2) = 2;
      }
      puVar21[1] = self;
      if (*(int *)(self + 0x58) == -0x5eef3582) {
        uVar6 = *(ushort *)(self + 0x38);
        if (*(ushort *)(self + 0x3a) <= uVar6) {
          uVar6 = *(ushort *)(self + 0x3a) + *(short *)(self + 0x44);
          uVar18 = (ulong)(byte)self[0x3c];
          pvVar9 = *(void **)(self + 0x48);
          pvVar16 = (void *)0x0;
          *(ushort *)(self + 0x3a) = uVar6;
          uVar17 = (ulong)uVar6 * 8;
          pvVar15 = malloc(uVar18 + 0x10 + uVar17);
          if (pvVar15 != (void *)0x0) {
            pvVar16 = (void *)((long)pvVar15 + 0x10U +
                              (uVar18 - ((long)pvVar15 + 0x10U) % uVar18) % uVar18);
            *(ulong *)((long)pvVar16 + -0x10) = uVar17;
            *(void **)((long)pvVar16 + -8) = pvVar15;
            if (pvVar9 != (void *)0x0) {
              uVar18 = *(ulong *)((long)pvVar9 + -0x10);
              if (uVar17 <= *(ulong *)((long)pvVar9 + -0x10)) {
                uVar18 = uVar17;
              }
              memcpy(pvVar16,pvVar9,uVar18);
              free(*(void **)((long)pvVar9 + -8));
            }
          }
          pvVar9 = *(void **)(self + 0x50);
          *(void **)(self + 0x48) = pvVar16;
          if (pvVar9 != (void *)0x0) {
            uVar19 = *(ushort *)(self + 0x3a);
            uVar18 = (ulong)(byte)self[0x3c];
            uVar17 = (ulong)uVar19 * 2;
            pvVar16 = malloc(uVar18 + 0x10 + uVar17);
            pvVar15 = (void *)0x0;
            if (pvVar16 != (void *)0x0) {
              pvVar15 = (void *)((long)pvVar16 + 0x10U +
                                (uVar18 - ((long)pvVar16 + 0x10U) % uVar18) % uVar18);
              *(ulong *)((long)pvVar15 + -0x10) = uVar17;
              *(void **)((long)pvVar15 + -8) = pvVar16;
              uVar18 = *(ulong *)((long)pvVar9 + -0x10);
              if (uVar17 <= *(ulong *)((long)pvVar9 + -0x10)) {
                uVar18 = uVar17;
              }
              memcpy(pvVar15,pvVar9,uVar18);
              free(*(void **)((long)pvVar9 + -8));
              uVar19 = *(ushort *)(self + 0x3a);
            }
            uVar6 = *(ushort *)(self + 0x38);
            *(void **)(self + 0x50) = pvVar15;
            if (uVar19 <= uVar6) goto LAB_00576c19;
            while( true ) {
              uVar17 = (ulong)uVar6;
              uVar6 = uVar6 + 1;
              *(uint16_t *)((long)pvVar15 + uVar17 * 2) = 0xffff;
              if (uVar19 <= uVar6) break;
              pvVar15 = *(void **)(self + 0x50);
            }
          }
          uVar6 = *(ushort *)(self + 0x38);
        }
      }
      else {
        uVar17 = (ulong)(byte)self[0x3c];
        *(uint32_t *)(self + 0x40) = 0;
        pvVar9 = malloc(uVar17 + 0x38);
        puVar22 = (uint64_t *)0x0;
        if (pvVar9 != (void *)0x0) {
          puVar22 = (uint64_t *)
                    ((uVar17 - ((long)pvVar9 + 0x10U) % uVar17) % uVar17 + (long)pvVar9 + 0x10U);
          puVar22[-1] = pvVar9;
          puVar22[-2] = 0x28;
        }
        *(uint64_t **)(self + 0x48) = puVar22;
        uVar6 = 0;
        *puVar22 = 0;
        puVar22[1] = 0;
        puVar22[2] = 0;
        puVar22[3] = 0;
        puVar22[4] = 0;
        *(uint16_t *)(self + 0x38) = 0;
        *(uint16_t *)(self + 0x3a) = 5;
        *(uint32_t *)(self + 0x58) = 0xa110ca7e;
        *(uint16_t *)(self + 0x44) = 5;
      }
LAB_00576c19:
      if ((*(int *)(self + 0x40) == 1) && (*(short *)(self + 0x3a) != 0)) {
        puVar25 = *(ushort **)(self + 0x50);
        sVar26 = 1;
        uVar19 = *puVar25;
        while (uVar19 != 0xffff) {
          puVar25 = puVar25 + 1;
          if (sVar26 == *(short *)(self + 0x3a)) goto LAB_00576c24;
          sVar26 = sVar26 + 1;
          uVar19 = *puVar25;
        }
        *puVar25 = uVar6;
        uVar6 = *(ushort *)(self + 0x38);
      }
LAB_00576c24:
      *(uint64_t **)(*(long *)(self + 0x48) + (ulong)uVar6 * 8) = puVar21;
      *(short *)(self + 0x38) = *(short *)(self + 0x38) + 1;
      *(long *)(*(long *)(self + 0x78) + (long)(*(int *)(self + 0x60) + iVar38) * 8) =
           lVar32 + *(long *)(self + 0x70);
      pcVar33 = (char *)(lVar32 + *(long *)(self + 0x70));
      do {
        cVar2 = *pcVar33;
        iVar36 = iVar36 + 1;
        pcVar33 = pcVar33 + 1;
      } while (cVar2 != '\0');
      lVar10 = CONCAT26(auStack_2d2[0],
                        CONCAT24(uStack_2d4,CONCAT22(local_2d8._2_2_,(ushort)local_2d8)));
      paVar1 = (allocator *)(lVar10 + -0x18);
      if (paVar1 != (allocator *)&std__string_Rep_S_empty_rep_storage) {
        LOCK();
        piVar23 = (int *)(lVar10 + -8);
        iVar31 = *piVar23;
        *piVar23 = *piVar23 + -1;
        UNLOCK();
        if (iVar31 < 1) {
          std__string_Rep_M_destroy(paVar1);
        }
      }
      iVar38 = iVar38 + 1;
      iVar31 = *(int *)(self + 0x60);
    } while (iVar38 < *(int *)(self + 100));
  }
  if (0 < iVar31) {
    local_2ec = 0;
    do {
                    /* try { // try from 00576cc7 to 00576fdc has its CatchHandler @ 00577e41 */
      File__ReadVariable(local_118,&local_5c,4);
      File__ReadVariable(local_118,local_68,4);
      File__ReadVariable(local_118,local_60,4);
      lVar10 = *(long *)(*(long *)(self + 0x48) + (ulong)(ushort)local_2ec * 8);
      iVar31 = (int)local_5c >> 1;
      *(uint *)(lVar10 + 0x18) = local_5c & 1;
      lVar32 = (long)iVar31;
      *(int *)(lVar10 + 0x2c) = iVar31;
      plVar12 = operator_new__(lVar32 * 0x10 + 8);
      *plVar12 = lVar32;
      if (lVar32 != 0) {
        lVar32 = lVar32 + -2;
        plVar13 = plVar12 + 1;
        do {
          lVar32 = lVar32 + -1;
          *(uint32_t *)plVar13 = 0;
          plVar13[1] = 0;
          plVar13 = plVar13 + 2;
        } while (lVar32 != -2);
      }
      *(long **)(lVar10 + 0x30) = plVar12 + 1;
      if (iVar31 < 1) {
        local_2f0 = 0.0;
      }
      else {
        lVar32 = ((ulong)(iVar31 - 1) + 1) * 0x10;
        lVar34 = 0;
        do {
          local_58 = 0.0;
          File__ReadVariable(local_118,&local_58,4);
          *(float *)(*(long *)(lVar10 + 0x30) + lVar34) = local_58;
          lVar28 = (long)(int)local_58;
          plVar12 = operator_new__(lVar28 * 0x28 + 8);
          *plVar12 = lVar28;
          if (lVar28 != 0) {
            lVar28 = lVar28 + -2;
            plVar13 = plVar12 + 1;
            do {
              lVar28 = lVar28 + -1;
              *(uint32_t *)plVar13 = 0;
              *(uint32_t *)((long)plVar13 + 4) = 0;
              *(uint32_t *)(plVar13 + 1) = 0;
              *(uint32_t *)((long)plVar13 + 0xc) = 0xffffffff;
              *(uint32_t *)(plVar13 + 3) = 0;
              plVar13[4] = 0;
              plVar13 = plVar13 + 5;
            } while (lVar28 != -2);
          }
          *(long **)(*(long *)(lVar10 + 0x30) + 8 + lVar34) = plVar12 + 1;
          lVar34 = lVar34 + 0x10;
        } while (lVar34 != lVar32);
        local_2f8 = 0;
        local_2f0 = 0.0;
        do {
          piVar23 = (int *)(local_2f8 + *(long *)(lVar10 + 0x30));
          if (*piVar23 < 1) {
            fVar39 = 0.0;
            if (0.0 <= local_2f0) {
              fVar39 = local_2f0;
            }
          }
          else {
            local_318 = 0;
            local_308 = 0;
            fVar39 = 0.0;
            do {
              local_50 = -NAN;
              local_4c = -NAN;
              local_48 = -NAN;
              lVar34 = *(long *)(piVar23 + 2);
              File__ReadVariable(local_118,&local_54,4);
              File__ReadVariable(local_118,local_78,4);
              File__ReadVariable(local_118,&local_58,4);
              if (local_b8[0] != 0) {
                File__ReadVariable(local_118,&local_50,4);
                File__ReadVariable(local_118,&local_4c,4);
                File__ReadVariable(local_118,&local_48,4);
              }
              fVar40 = local_58;
              pfVar37 = (float *)(lVar34 + local_318);
              *pfVar37 = local_58;
              pfVar37[1] = fVar39;
              lVar34 = (long)(int)local_78[0];
              pfVar37[2] = local_54;
              pfVar37[6] = local_78[0];
              pfVar37[5] = local_48;
              pfVar37[3] = local_50;
              pfVar37[4] = local_4c;
              plVar13 = operator_new__(lVar34 * 0xa0 + 8);
              *plVar13 = lVar34;
              plVar12 = plVar13 + 1;
              if (lVar34 != 0) {
                lVar34 = lVar34 + -2;
                plVar24 = plVar12;
                do {
                  lVar34 = lVar34 + -1;
                  plVar24[1] = 0;
                  plVar24[2] = 0;
                  plVar24[3] = 0;
                  *plVar24 = (long)&PTR__FlashLibraryInstance_005dbb50;
                  *(uint32_t *)(plVar24 + 4) = 0xffffffff;
                  *(uint32_t *)((long)plVar24 + 0x24) = 1;
                  plVar24[5] = 0;
                  *(uint32_t *)((long)plVar13 + (long)plVar24 + (0x38 - (long)plVar12)) = 0;
                  *(uint32_t *)((long)plVar13 + (long)plVar24 + (0x3c - (long)plVar12)) = 0;
                  *(uint32_t *)((long)plVar13 + (long)plVar24 + (0x40 - (long)plVar12)) = 0;
                  *(uint32_t *)((long)plVar13 + (long)plVar24 + (0x44 - (long)plVar12)) = 0;
                  *(uint32_t *)((long)plVar13 + (long)plVar24 + (0x48 - (long)plVar12)) =
                       0x3f800000;
                  *(uint32_t *)((long)plVar13 + (long)plVar24 + (0x4c - (long)plVar12)) =
                       0x3f800000;
                  *(uint32_t *)((long)plVar13 + (long)plVar24 + (0x50 - (long)plVar12)) = 0;
                  *(uint32_t *)((long)plVar13 + (long)plVar24 + (0x54 - (long)plVar12)) = 0;
                  *(uint32_t *)((long)plVar13 + (long)plVar24 + (0x58 - (long)plVar12)) = 0;
                  *(uint32_t *)((long)plVar13 + (long)plVar24 + (0x5c - (long)plVar12)) = 0;
                  *(uint32_t *)(plVar24 + 0xb) = 0;
                  *(uint32_t *)((long)plVar24 + 0x5c) = 0;
                  *(uint32_t *)(plVar24 + 0xc) = 0x3f800000;
                  *(uint32_t *)((long)plVar13 + (long)plVar24 + (0x6c - (long)plVar12)) = 0;
                  *(uint32_t *)((long)plVar13 + (long)plVar24 + (0x70 - (long)plVar12)) = 0;
                  *(uint32_t *)((long)plVar13 + (long)plVar24 + (0x74 - (long)plVar12)) = 0;
                  *(uint32_t *)((long)plVar13 + (long)plVar24 + (0x78 - (long)plVar12)) = 0;
                  *(uint32_t *)((long)plVar13 + (long)plVar24 + (0x7c - (long)plVar12)) =
                       0x3f800000;
                  *(uint32_t *)((long)plVar13 + (long)plVar24 + (0x80 - (long)plVar12)) =
                       0x3f800000;
                  *(uint32_t *)((long)plVar13 + (long)plVar24 + (0x84 - (long)plVar12)) =
                       0x3f800000;
                  *(uint32_t *)((long)plVar13 + (long)plVar24 + (0x88 - (long)plVar12)) =
                       0x3f800000;
                  *(uint32_t *)((long)plVar24 + 0x84) = 0;
                  plVar24[0x11] = 0;
                  plVar24[0x12] = 0;
                  *(uint32_t *)((long)plVar24 + 0x9c) = 1;
                  plVar24 = plVar24 + 0x14;
                } while (lVar34 != -2);
              }
              *(long **)(pfVar37 + 8) = plVar12;
              if (0 < (int)local_78[0]) {
                lVar34 = 0;
                iVar31 = 0;
                do {
                  local_2d8._0_2_ = 0;
                  local_2d8._2_2_ = 0;
                  uStack_2d4 = 0;
                  auStack_2d2[0] = 0;
                  _local_1d8 = 0;
                  lVar28 = lVar34 + *(long *)(pfVar37 + 8);
                    /* try { // try from 005771ac to 005773e8 has its CatchHandler @ 00577f3c */
                  File__ReadVariable(local_118,(void *)(lVar28 + 0x20),4);
                  File__ReadVariable(local_118,(void *)(lVar28 + 0x30),4);
                  File__ReadVariable(local_118,(void *)(lVar28 + 0x34),4);
                  File__ReadVariable(local_118,(void *)(lVar28 + 0x40),4);
                  File__ReadVariable(local_118,(void *)(lVar28 + 0x44),4);
                  File__ReadVariable(local_118,(void *)(lVar28 + 0x48),4);
                  File__ReadVariable(local_118,(void *)(lVar28 + 0x4c),4);
                  File__ReadVariable(local_118,(void *)(lVar28 + 0x50),4);
                  File__ReadVariable(local_118,(void *)(lVar28 + 0x54),4);
                  File__ReadVariable(local_118,&local_2d8,2);
                  File__ReadVariable(local_118,&local_1d8,2);
                  File__ReadVariable(local_118,(void *)((long)&local_2d8 + 2),2);
                  File__ReadVariable(local_118,&uStack_1d6,2);
                  File__ReadVariable(local_118,&uStack_2d4,2);
                  File__ReadVariable(local_118,&uStack_1d4,2);
                  File__ReadVariable(local_118,auStack_2d2,2);
                  File__ReadVariable(local_118,&uStack_1d2,2);
                  fVar5 = DAT_005c4890 /* R:0.003921568859368563f */;
                  *(float *)(lVar28 + 100) = (float)(ushort)local_2d8 * DAT_005c4890 /* R:0.003921568859368563f */;
                  *(float *)(lVar28 + 0x68) = (float)local_2d8._2_2_ * fVar5;
                  *(float *)(lVar28 + 0x6c) = (float)uStack_2d4 * fVar5;
                  fVar4 = DAT_005c07b0 /* R:0.009999999776482582f */;
                  *(float *)(lVar28 + 0x70) = (float)auStack_2d2[0] * fVar5;
                  *(float *)(lVar28 + 0x74) = (float)local_1d8 * fVar4;
                  *(float *)(lVar28 + 0x78) = (float)uStack_1d6 * fVar4;
                  *(float *)(lVar28 + 0x7c) = (float)uStack_1d4 * fVar4;
                  *(float *)(lVar28 + 0x80) = (float)uStack_1d2 * fVar4;
                  File__ReadVariable(local_118,&local_44,4);
                  iVar31 = iVar31 + 1;
                  lVar34 = lVar34 + 0xa0;
                  *(uint64_t *)(lVar28 + 0x88) = 0;
                  *(uint64_t *)(lVar28 + 0x90) = 0;
                  *(FlashAnimationLibrary **)(lVar28 + 0x28) = self;
                  *(uint32_t *)(lVar28 + 0x84) = local_44;
                } while (iVar31 < (int)local_78[0]);
              }
              fVar39 = fVar39 + fVar40;
              local_308 = local_308 + 1;
              local_318 = local_318 + 0x28;
              iVar31 = *piVar23;
            } while (local_308 < iVar31);
            if (local_2f0 <= fVar39) {
              local_2f0 = fVar39;
            }
            fVar39 = local_2f0;
            if (0 < iVar31) {
              fVar40 = 0.0;
              lVar34 = 0;
              iVar36 = 1;
              do {
                while (pfVar37 = (float *)(lVar34 + *(long *)(piVar23 + 2)), (int)pfVar37[6] < 1) {
                  lVar34 = lVar34 + 0x28;
                  fVar40 = fVar40 + *pfVar37;
                  bVar3 = iVar31 <= iVar36;
                  iVar36 = iVar36 + 1;
                  if (bVar3) goto LAB_0057753d;
                }
                lVar34 = lVar34 + 0x28;
                lVar28 = 0;
                iVar38 = 0;
                do {
                  lVar35 = lVar28 + *(long *)(pfVar37 + 8);
                  if (iVar36 < iVar31) {
                    iVar31 = *(int *)(*(long *)(piVar23 + 2) + lVar34 + 0x18);
                    if (iVar31 < 1) {
LAB_005774f1:
                      *(uint64_t *)(lVar35 + 0x88) = 0;
                      goto LAB_005774fc;
                    }
                    lVar14 = *(long *)(*(long *)(piVar23 + 2) + lVar34 + 0x20);
                    iVar20 = 0;
                    iVar27 = *(int *)(lVar14 + 0x20);
                    while (*(int *)(lVar35 + 0x20) != iVar27) {
                      iVar20 = iVar20 + 1;
                      if (iVar20 == iVar31) goto LAB_005774f1;
                      iVar27 = *(int *)(lVar14 + 0xc0);
                      lVar14 = lVar14 + 0xa0;
                    }
                    *(long *)(lVar35 + 0x88) = lVar14;
                    if (lVar14 == 0) goto LAB_005774fc;
                    *(long *)(lVar14 + 0x90) = lVar35;
                    lVar14 = *(long *)(lVar35 + 0x90);
                    if (lVar14 != 0) goto LAB_0057750c;
LAB_00577f17:
                    *(float *)(lVar35 + 0x5c) = fVar40;
                  }
                  else {
LAB_005774fc:
                    lVar14 = *(long *)(lVar35 + 0x90);
                    if (lVar14 == 0) goto LAB_00577f17;
LAB_0057750c:
                    *(uint32_t *)(lVar35 + 0x5c) = *(uint32_t *)(lVar14 + 0x5c);
                  }
                  iVar38 = iVar38 + 1;
                  lVar28 = lVar28 + 0xa0;
                  iVar31 = *piVar23;
                } while (iVar38 < (int)pfVar37[6]);
                fVar40 = fVar40 + *pfVar37;
                bVar3 = iVar36 < iVar31;
                iVar36 = iVar36 + 1;
              } while (bVar3);
            }
          }
LAB_0057753d:
          local_2f0 = fVar39;
          local_2f8 = local_2f8 + 0x10;
        } while (local_2f8 != lVar32);
      }
      local_2ec = local_2ec + 1;
      *(float *)(lVar10 + 0x20) = local_2f0;
    } while (local_2ec < *(int *)(self + 0x60));
  }
                    /* try { // try from 00577b9a to 00577bd6 has its CatchHandler @ 00577e41 */
  File__ReadVariable(local_118,local_88,4);
  if (0 < local_88[0]) {
    iVar31 = 0;
    do {
      File__ReadVariable(local_118,local_68,4);
                    /* try { // try from 00577bec to 00577c07 has its CatchHandler @ 005781f9 */
      File__ReadVariable(local_118,local_c8,4);
      File__ReadVariable(local_118,local_c4,4);
      uVar8 = local_68[0];
      if ((local_68[0] & 1) == 0) {
                    /* try { // try from 00577f5a to 00577f8d has its CatchHandler @ 005781f9 */
        puVar21 = operator_new(0x20);
        *puVar21 = &PTR__FlashSymbol_005dbbd0;
        *(uint32_t *)(puVar21 + 2) = 0;
        iVar36 = *(int *)(self + 0x60);
        puVar21[1] = self;
        *(int *)((long)puVar21 + 0x1c) = ((int)uVar8 >> 1) - iVar36;
        Vector2__operator_assign((Vector2 *)((long)puVar21 + 0x14),local_c8);
        if (*(int *)(self + 0x58) == -0x5eef3582) {
          uVar6 = *(ushort *)(self + 0x38);
          if (*(ushort *)(self + 0x3a) <= uVar6) {
            uVar6 = *(ushort *)(self + 0x3a) + *(short *)(self + 0x44);
            uVar18 = (ulong)(byte)self[0x3c];
            pvVar15 = *(void **)(self + 0x48);
            pvVar9 = (void *)0x0;
            *(ushort *)(self + 0x3a) = uVar6;
            uVar17 = (ulong)uVar6 * 8;
            pvVar16 = malloc(uVar18 + 0x10 + uVar17);
            if (pvVar16 != (void *)0x0) {
              pvVar9 = (void *)((long)pvVar16 + 0x10U +
                               (uVar18 - ((long)pvVar16 + 0x10U) % uVar18) % uVar18);
              *(ulong *)((long)pvVar9 + -0x10) = uVar17;
              *(void **)((long)pvVar9 + -8) = pvVar16;
              if (pvVar15 != (void *)0x0) {
                uVar18 = *(ulong *)((long)pvVar15 + -0x10);
                if (uVar17 <= *(ulong *)((long)pvVar15 + -0x10)) {
                  uVar18 = uVar17;
                }
                memcpy(pvVar9,pvVar15,uVar18);
                free(*(void **)((long)pvVar15 + -8));
              }
            }
            pvVar15 = *(void **)(self + 0x50);
            *(void **)(self + 0x48) = pvVar9;
            if (pvVar15 != (void *)0x0) {
              uVar19 = *(ushort *)(self + 0x3a);
              uVar18 = (ulong)(byte)self[0x3c];
              uVar17 = (ulong)uVar19 * 2;
              pvVar16 = malloc(uVar18 + 0x10 + uVar17);
              pvVar9 = (void *)0x0;
              if (pvVar16 != (void *)0x0) {
                pvVar9 = (void *)((long)pvVar16 + 0x10U +
                                 (uVar18 - ((long)pvVar16 + 0x10U) % uVar18) % uVar18);
                *(ulong *)((long)pvVar9 + -0x10) = uVar17;
                *(void **)((long)pvVar9 + -8) = pvVar16;
                uVar18 = *(ulong *)((long)pvVar15 + -0x10);
                if (uVar17 <= *(ulong *)((long)pvVar15 + -0x10)) {
                  uVar18 = uVar17;
                }
                memcpy(pvVar9,pvVar15,uVar18);
                free(*(void **)((long)pvVar15 + -8));
                uVar19 = *(ushort *)(self + 0x3a);
              }
              uVar6 = *(ushort *)(self + 0x38);
              *(void **)(self + 0x50) = pvVar9;
              if (uVar19 <= uVar6) goto LAB_0057802d;
              while( true ) {
                uVar17 = (ulong)uVar6;
                uVar6 = uVar6 + 1;
                *(uint16_t *)((long)pvVar9 + uVar17 * 2) = 0xffff;
                if (uVar19 <= uVar6) break;
                pvVar9 = *(void **)(self + 0x50);
              }
            }
            uVar6 = *(ushort *)(self + 0x38);
          }
        }
        else {
          uVar17 = (ulong)(byte)self[0x3c];
          *(uint32_t *)(self + 0x40) = 0;
          pvVar9 = malloc(uVar17 + 0x38);
          puVar22 = (uint64_t *)0x0;
          if (pvVar9 != (void *)0x0) {
            puVar22 = (uint64_t *)
                      ((uVar17 - ((long)pvVar9 + 0x10U) % uVar17) % uVar17 + (long)pvVar9 + 0x10U);
            puVar22[-1] = pvVar9;
            puVar22[-2] = 0x28;
          }
          *(uint64_t **)(self + 0x48) = puVar22;
          uVar6 = 0;
          *puVar22 = 0;
          puVar22[1] = 0;
          puVar22[2] = 0;
          puVar22[3] = 0;
          puVar22[4] = 0;
          *(uint16_t *)(self + 0x38) = 0;
          *(uint16_t *)(self + 0x3a) = 5;
          *(uint32_t *)(self + 0x58) = 0xa110ca7e;
          *(uint16_t *)(self + 0x44) = 5;
        }
LAB_0057802d:
        if ((*(int *)(self + 0x40) == 1) && (*(short *)(self + 0x3a) != 0)) {
          puVar25 = *(ushort **)(self + 0x50);
          sVar26 = 0;
          uVar19 = *puVar25;
          while (uVar19 != 0xffff) {
            puVar25 = puVar25 + 1;
            sVar26 = sVar26 + 1;
            if (sVar26 == *(short *)(self + 0x3a)) goto LAB_00578038;
            uVar19 = *puVar25;
          }
          *puVar25 = uVar6;
          uVar6 = *(ushort *)(self + 0x38);
        }
LAB_00578038:
        *(uint64_t **)(*(long *)(self + 0x48) + (ulong)uVar6 * 8) = puVar21;
        *(short *)(self + 0x38) = *(short *)(self + 0x38) + 1;
      }
      iVar31 = iVar31 + 1;
    } while (iVar31 < local_88[0]);
  }
  if (local_b8[0] != 0) {
    local_68[0] = 0;
                    /* try { // try from 00577c57 to 00577d7e has its CatchHandler @ 00577e41 */
    File__ReadVariable(local_118,local_68,4);
    this_00 = (FlashSoundLibrary *)(self + 0x90);
    FlashSoundLibrary__Initialize(this_00,local_68[0],self);
    iVar31 = File__GetFilePos(local_118);
    if (0 < (int)local_68[0]) {
      iVar36 = 0;
      do {
        File__Read(local_118,&local_2d8,0x100);
        puVar30 = &local_2d8;
        do {
          puVar29 = puVar30;
          uVar7 = *puVar29 + 0xfefefeff & ~*puVar29;
          uVar8 = uVar7 & 0x80808080;
          puVar30 = puVar29 + 1;
        } while (uVar8 == 0);
        if ((uVar7 & 0x8080) == 0) {
          puVar30 = (uint *)((long)puVar29 + 6);
          uVar8 = uVar8 >> 0x10;
        }
        iVar27 = (((int)puVar30 + -3) - (uint)CARRY1((byte)uVar8,(byte)uVar8)) - (int)&local_2d8;
        iVar38 = 0;
        if (0 < iVar27) {
          iVar38 = iVar27 + -1;
        }
        *(int *)(self + 0x9c) = *(int *)(self + 0x9c) + 1;
        if (*(char *)((long)&local_2d8 + (long)iVar38) == '0') {
          memcpy(&local_1d8,&local_2d8,(long)iVar27);
          *(uint8_t *)((long)&local_2d8 + (long)iVar38) = 0;
                    /* try { // try from 0057851c to 0057855c has its CatchHandler @ 00577e41 */
          Sprint(&DAT_005db9de /* R:"%s%i" */,&local_1d8,&local_2d8,0);
          iVar38 = 0;
          while (iVar20 = FlashSoundLibrary__AddSound(this_00,(char *)&local_1d8), iVar20 == 1) {
            iVar38 = iVar38 + 1;
            Sprint(&DAT_005db9de /* R:"%s%i" */,&local_1d8,&local_2d8,iVar38);
          }
        }
        else {
          FlashSoundLibrary__AddSound(this_00,(char *)&local_2d8);
        }
        iVar31 = iVar31 + 1 + iVar27;
        File__Seek(local_118,iVar31);
        iVar36 = iVar36 + 1;
      } while (iVar36 < (int)local_68[0]);
    }
  }
  GetDotIndex(self,"dot",(int *)(self + 0xa8));
  GetDotIndex(self,"dot1",(int *)(self + 0xac));
  Loader__Wait(*(uint *)(self + 0x84),0);
  System_GetTimeInMS();
                    /* try { // try from 00577d87 to 00577d8b has its CatchHandler @ 00577e49 */
  File__File__005b7a70(local_118);
  return;
}
