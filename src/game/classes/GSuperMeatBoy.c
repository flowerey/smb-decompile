/* src/game/classes/GSuperMeatBoy.c — 43 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "GSuperMeatBoy.h"

/* ======================================================================
 * GSuperMeatBoy__GSuperMeatBoy  (Ghidra `~GSuperMeatBoy` @ 00512110)
 * Signature: uint8_t __thiscall ~GSuperMeatBoy(GSuperMeatBoy * self)
 * Class: GSuperMeatBoy
 * Calls: `GSuperMeatBoy__GSuperMeatBoy__00512440`
 * Called by: (none)
 */
/* non-virtual thunk to GSuperMeatBoy__GSuperMeatBoy__00512440() */

void __thiscall GSuperMeatBoy__GSuperMeatBoy__00512440(GSuperMeatBoy *self)

{
  GSuperMeatBoy__dtor(self + -0x20);
  return;
}

/* ======================================================================
 * GSuperMeatBoy__GSuperMeatBoy__00512120  (Ghidra `~GSuperMeatBoy` @ 00512120)
 * Signature: uint8_t __thiscall ~GSuperMeatBoy(GSuperMeatBoy * self)
 * Class: GSuperMeatBoy
 * Calls: `BaseResource__Release`, `BloodyTiles__BloodyTiles__00463670`, `GSMBCharactor__GSMBCharactor__0049bec0`, `GSMBInstructions__GSMBInstructions__004c2c40`, `GSuperMeatBoy__GSuperMeatBoy__00512440`, `GameRegistry__GameRegistry__005b6a60`, `ResetSMBGraphicsDependentFactors`, `SMBCamera__SMBCamera__0048df60`, `SMBChapter__SMBChapter`, `SMBEditor__SMBEditor` (+6 more)
 * Called by: (none)
 */
/* GSuperMeatBoy__GSuperMeatBoy__00512440() */

void __thiscall GSuperMeatBoy__GSuperMeatBoy__00512440(GSuperMeatBoy *self)

{
  TileLevel *this_00;
  SMBCamera *this_01;
  TileLevelLightMap *this_02;
  GSMBCharactor *this_03;
  SMBEditor *pSVar1;
  GSMBInstructions *pGVar2;
  SMBReplay *pSVar3;
  GameRegistry *this_04;
  BaseResource *this_05;
  long *plVar4;
  
  *(uint8_t ***)self = &PTR__GSuperMeatBoy_005c9350;
  this_04 = SMBRegistry;
  *(uint8_t ***)(self + 0x20) = &PTR__GSuperMeatBoy_005c9390;
  if (this_04 != (GameRegistry *)0x0) {
                    /* try { // try from 00512147 to 005123a9 has its CatchHandler @ 005123e1 */
    GameRegistry__GameRegistry__005b6a60(this_04);
    operator_delete(this_04);
  }
  pSVar1 = SuperMeatBoyEditor;
  if (SuperMeatBoyEditor != (SMBEditor *)0x0) {
    SMBEditor__SMBEditor(SuperMeatBoyEditor);
    operator_delete(pSVar1);
  }
  this_00 = *(TileLevel **)(self + 0x40);
  SuperMeatBoyEditor = (SMBEditor *)0x0;
  if (this_00 != (TileLevel *)0x0) {
    TileLevel__TileLevel__0058d9f0(this_00);
    operator_delete(this_00);
  }
  this_05 = pLevelPalette;
  *(uint64_t *)(self + 0x40) = 0;
  if (this_05 != (BaseResource *)0x0) {
    BaseResource__Release(this_05,0);
    pLevelPalette = (BaseResource *)0x0;
  }
  this_01 = *(SMBCamera **)(self + 0x38);
  if (this_01 != (SMBCamera *)0x0) {
    SMBCamera__SMBCamera__0048df60(this_01);
    operator_delete(this_01);
  }
  this_03 = SMBCharactor;
  *(uint64_t *)(self + 0x38) = 0;
  if (this_03 != (GSMBCharactor *)0x0) {
    GSMBCharactor__GSMBCharactor__0049bec0(this_03);
    operator_delete(this_03);
  }
  SMBCharactor = (GSMBCharactor *)0x0;
  if (pLastLayer != (long *)0x0) {
    (**(code **)(*pLastLayer + 8))();
  }
  pLastLayer = (long *)0x0;
  if (pLightLayer != (long *)0x0) {
    (**(code **)(*pLightLayer + 8))();
  }
  this_02 = *(TileLevelLightMap **)(self + 0x390);
  pLightLayer = (long *)0x0;
  if (this_02 != (TileLevelLightMap *)0x0) {
    TileLevelLightMap__TileLevelLightMap__0046f6e0(this_02);
    operator_delete(this_02);
  }
  plVar4 = pBossLayer;
  *(uint64_t *)(self + 0x390) = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  pBossLayer = (long *)0x0;
  if (pAnimalLayer != (long *)0x0) {
    (**(code **)(*pAnimalLayer + 8))();
  }
  pAnimalLayer = (long *)0x0;
  if (*(long **)(self + 0x88) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x88) + 8))();
  }
  plVar4 = pFirstLayer;
  *(uint64_t *)(self + 0x88) = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  pFirstLayer = (long *)0x0;
  if (pResolutionLayer != (long *)0x0) {
    (**(code **)(*pResolutionLayer + 8))();
  }
  pResolutionLayer = (long *)0x0;
  if (SMBHUD != (long *)0x0) {
    (**(code **)(*SMBHUD + 8))();
  }
  SMBHUD = (long *)0x0;
  if (SMBMenu != (long *)0x0) {
    (**(code **)(*SMBMenu + 8))();
  }
  pGVar2 = SMBInstructions;
  SMBMenu = (long *)0x0;
  if (SMBInstructions != (GSMBInstructions *)0x0) {
    GSMBInstructions__GSMBInstructions__004c2c40(SMBInstructions);
    operator_delete(pGVar2);
  }
  SMBInstructions = (GSMBInstructions *)0x0;
  if (SMBCutSceneManager != (long *)0x0) {
    (**(code **)(*SMBCutSceneManager + 8))();
  }
  pSVar3 = pReplay;
  SMBCutSceneManager = (long *)0x0;
  if (pReplay != (SMBReplay *)0x0) {
    SMBReplay__SMBReplay__0050da30(pReplay);
    operator_delete(pSVar3);
  }
  pReplay = (SMBReplay *)0x0;
  TResourceCreator__RemoveResourceCreationFunction
            ((TResourceCreator *)ResourceCreator,ResetSMBGraphicsDependentFactors,(void *)0x0);
                    /* try { // try from 005123b1 to 005123b5 has its CatchHandler @ 00512426 */
  SMBPaletteBackgroundLoader__SMBPaletteBackgroundLoader__004f2ad0
            ((SMBPaletteBackgroundLoader *)(self + 0x3b0));
                    /* try { // try from 005123bd to 005123c1 has its CatchHandler @ 00512421 */
  SMBChapter__SMBChapter((SMBChapter *)(self + 0x90));
                    /* try { // try from 005123c6 to 005123ca has its CatchHandler @ 0051241f */
  BloodyTiles__BloodyTiles__00463670((BloodyTiles *)(self + 0x50));
  *(uint8_t ***)(self + 0x20) = &PTR__Game_005dcbb0;
  *(uint8_t ***)self = &PTR__RenderLayerObject_005be670;
  return;
}

/* ======================================================================
 * GSuperMeatBoy__GSuperMeatBoy__00512430  (Ghidra `~GSuperMeatBoy` @ 00512430)
 * Signature: uint8_t __thiscall ~GSuperMeatBoy(GSuperMeatBoy * self)
 * Class: GSuperMeatBoy
 * Calls: `GSuperMeatBoy__GSuperMeatBoy__00512440`
 * Called by: (none)
 */
/* non-virtual thunk to GSuperMeatBoy__GSuperMeatBoy__00512440() */

void __thiscall GSuperMeatBoy__GSuperMeatBoy__00512440(GSuperMeatBoy *self)

{
  GSuperMeatBoy__dtor(self + -0x20);
  return;
}

/* ======================================================================
 * GSuperMeatBoy__GSuperMeatBoy__00512440  (Ghidra `~GSuperMeatBoy` @ 00512440)
 * Signature: uint8_t __thiscall ~GSuperMeatBoy(GSuperMeatBoy * self)
 * Class: GSuperMeatBoy
 * Calls: `operator_delete`
 * Called by: `GSuperMeatBoy__GSuperMeatBoy`, `GSuperMeatBoy__GSuperMeatBoy__00512120`, `GSuperMeatBoy__GSuperMeatBoy__00512430`
 */
/* GSuperMeatBoy__GSuperMeatBoy__00512440() */

void __thiscall GSuperMeatBoy__GSuperMeatBoy__00512440(GSuperMeatBoy *self)

{
  GSuperMeatBoy__dtor(self);
  operator_delete(self);
  return;
}

/* ======================================================================
 * GSuperMeatBoy__Render  (Ghidra `Render` @ 005126b0)
 * Signature: uint8_t __thiscall Render(GSuperMeatBoy * self)
 * Class: GSuperMeatBoy
 * Calls: `GSuperMeatBoy__Render__005126c0`, `Render`
 * Called by: (none)
 */
/* non-virtual thunk to GSuperMeatBoy__Render__005126c0() */

void __thiscall GSuperMeatBoy__Render__005126c0(GSuperMeatBoy *self)

{
  Render(self + -0x20);
  return;
}

/* ======================================================================
 * GSuperMeatBoy__Render__005126c0  (Ghidra `Render` @ 005126c0)
 * Signature: uint8_t __thiscall Render(GSuperMeatBoy * self)
 * Class: GSuperMeatBoy
 * Calls: `GSMBCharactor__Render`, `TGraphics__SetRenderState`
 * Called by: `GSuperMeatBoy__Render`
 */
/* GSuperMeatBoy__Render__005126c0() */

void __thiscall GSuperMeatBoy__Render__005126c0(GSuperMeatBoy *self)

{
  if (*(int *)(self + 0x2c) != 2) {
    TGraphics__SetRenderState(Graphics,'\b',1);
    TGraphics__SetRenderState(Graphics,'\x05',4);
    TGraphics__SetRenderState(Graphics,'\x06',5);
    GSMBCharactor__Render(SMBCharactor);
    return;
  }
  return;
}

/* ======================================================================
 * GSuperMeatBoy__GSuperMeatBoy__00514290  (Ghidra `GSuperMeatBoy` @ 00514290)
 * Signature: uint8_t __thiscall GSuperMeatBoy(GSuperMeatBoy * self, char * arg1)
 * Class: GSuperMeatBoy
 * Calls: `BloodyTiles__BloodyTiles__004636a0`, `ExplodeString`, `ExplodeStringData__ExplodeStringData`, `SMBChapter__SMBChapter__00495700`, `SMBPaletteBackgroundLoader__SMBPaletteBackgroundLoader`, `StringToInt`, `std__string_string`, `strlen`
 * Called by: `main`
 */
/* WARNING: Removing unreachable block (ram,0x0051468b) */
/* GSuperMeatBoy__GSuperMeatBoy__00514290(char const*) */

void __thiscall GSuperMeatBoy__GSuperMeatBoy__00514290(GSuperMeatBoy *self,char *arg1)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  uint local_58 [2];
  long local_50;
  long local_48;
  allocator local_3a [10];
  
  *(uint64_t *)(self + 8) = 0;
  *(uint64_t *)(self + 0x10) = 0;
  *(uint64_t *)(self + 0x18) = 0;
  *(uint32_t *)(self + 0x28) = 0;
  *(uint8_t ***)self = &PTR__GSuperMeatBoy_005c9350;
  *(uint8_t ***)(self + 0x20) = &PTR__GSuperMeatBoy_005c9390;
  *(uint32_t *)(self + 0x2c) = 0;
  *(uint64_t *)(self + 0x40) = 0;
                    /* try { // try from 005142e8 to 005142ec has its CatchHandler @ 00514668 */
  BloodyTiles__BloodyTiles__004636a0((BloodyTiles *)(self + 0x50));
                    /* try { // try from 005142f7 to 005142fb has its CatchHandler @ 00514602 */
  SMBChapter__SMBChapter__00495700((SMBChapter *)(self + 0x90));
  *(uint64_t *)(self + 0x388) = 0;
  *(uint32_t *)(self + 0x398) = 0;
  *(uint32_t *)(self + 0x3a0) = 0;
  *(uint32_t *)(self + 0x3a4) = 0;
  self[0x3a8] = (GSuperMeatBoy)0x0;
  self[0x3ab] = (GSuperMeatBoy)0x0;
                    /* try { // try from 0051433d to 00514341 has its CatchHandler @ 00514686 */
  SMBPaletteBackgroundLoader__SMBPaletteBackgroundLoader
            ((SMBPaletteBackgroundLoader *)(self + 0x3b0));
                    /* try { // try from 00514351 to 00514355 has its CatchHandler @ 00514628 */
  std__string_assign((char *)&strStartingPalette,0x5c2ba3);
  if (arg1 != (char *)0x0) {
    local_58[0] = 0;
    local_50 = 0;
                    /* try { // try from 0051437a to 00514390 has its CatchHandler @ 00514681 */
    ExplodeString(0x20,arg1,local_58);
    std__string_string((string *)&local_48,arg1,local_3a);
    if (local_58[0] == 0) {
      iVar3 = std__string_compare((char *)&local_48);
      if (iVar3 == 0) {
        *(uint32_t *)(self + 0x3a4) = 1;
      }
      else {
        iVar3 = std__string_compare((char *)&local_48);
        if (iVar3 == 0) {
          bBossEditMode = 1;
        }
        else {
          iVar3 = std__string_compare((char *)&local_48);
          if (iVar3 == 0) {
            bShowMargins = 1;
          }
          else {
            iVar3 = std__string_compare((char *)&local_48);
            if (iVar3 == 0) {
              bShowHud = 0;
            }
          }
        }
      }
    }
    else {
      uVar5 = 0;
      do {
        uVar4 = (uint)uVar5;
        pcVar2 = *(char **)(local_50 + uVar5 * 8);
        strlen(pcVar2);
                    /* try { // try from 005143be to 005143fe has its CatchHandler @ 0051466a */
        std__string_assign((char *)&local_48,(ulong)pcVar2);
        iVar3 = std__string_compare((char *)&local_48);
        if (iVar3 == 0) {
          *(uint32_t *)(self + 0x3a4) = 1;
        }
        else {
          iVar3 = std__string_compare((char *)&local_48);
          if (iVar3 == 0) {
            uVar4 = uVar4 + 1;
            if (local_58[0] <= uVar4) break;
            iVar3 = StringToInt(*(uint64_t *)(local_50 + (ulong)uVar4 * 8));
            defaultChar = iVar3 + -1;
          }
          else {
                    /* try { // try from 0051444a to 005145ea has its CatchHandler @ 0051466a */
            iVar3 = std__string_compare((char *)&local_48);
            if (iVar3 == 0) {
              uVar4 = uVar4 + 1;
              if (local_58[0] <= uVar4) break;
              pcVar2 = *(char **)(local_50 + (ulong)uVar4 * 8);
              strlen(pcVar2);
              std__string_assign((char *)&strStartingPalette,(ulong)pcVar2);
            }
            else {
              iVar3 = std__string_compare((char *)&local_48);
              if (iVar3 == 0) {
                uVar4 = uVar4 + 1;
                if (local_58[0] <= uVar4) break;
                defaultChapterName = StringToInt(*(uint64_t *)(local_50 + (ulong)uVar4 * 8));
              }
              else {
                iVar3 = std__string_compare((char *)&local_48);
                if (iVar3 == 0) {
                  uVar4 = uVar4 + 1;
                  bBossEditMode = 1;
                  if (local_58[0] <= uVar4) break;
                  iAutoCreateBossIndex = StringToInt(*(uint64_t *)(local_50 + (ulong)uVar4 * 8));
                }
                else {
                  iVar3 = std__string_compare((char *)&local_48);
                  if (iVar3 == 0) {
                    bShowMargins = 1;
                  }
                  else {
                    iVar3 = std__string_compare((char *)&local_48);
                    if (iVar3 == 0) {
                      bShowHud = 0;
                    }
                  }
                }
              }
            }
          }
        }
        uVar5 = (ulong)(uVar4 + 1);
      } while (uVar4 + 1 < local_58[0]);
    }
    if ((allocator *)(local_48 + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage) {
      LOCK();
      piVar1 = (int *)(local_48 + -8);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 < 1) {
        std__string_Rep_M_destroy((allocator *)(local_48 + -0x18));
      }
    }
                    /* try { // try from 00514424 to 00514428 has its CatchHandler @ 00514628 */
    ExplodeStringData__ExplodeStringData((ExplodeStringData *)local_58);
  }
  SuperMeatBoy = self;
  return;
}

/* ======================================================================
 * GSuperMeatBoy__MarkAllLevelsInvisible  (Ghidra `MarkAllLevelsInvisible` @ 00514c90)
 * Signature: uint8_t __thiscall MarkAllLevelsInvisible(GSuperMeatBoy * self)
 * Class: GSuperMeatBoy
 * Calls: `TileLevel__getLevelLayer`
 * Called by: `GSMBCutSceneManager__PlayCutScene`, `SMBChapter__DestroyBossOutro`
 */
/* GSuperMeatBoy__MarkAllLevelsInvisible() */

void __thiscall GSuperMeatBoy__MarkAllLevelsInvisible(GSuperMeatBoy *self)

{
  long lVar1;
  
  if (pBossLayer != 0) {
    *(uint32_t *)(pBossLayer + 0x414) = 0;
  }
  if (SMBHUD != 0) {
    *(uint32_t *)(SMBHUD + 0x414) = 0;
  }
  if (SMBMenu != 0) {
    *(uint32_t *)(SMBMenu + 0x414) = 0;
  }
  if (pAnimalLayer != 0) {
    *(uint32_t *)(pAnimalLayer + 0x414) = 0;
  }
  if (*(TileLevel **)(self + 0x40) != (TileLevel *)0x0) {
    lVar1 = TileLevel__getLevelLayer(*(TileLevel **)(self + 0x40),0);
    if (lVar1 != 0) {
      *(uint32_t *)(lVar1 + 0x414) = 0;
    }
    lVar1 = TileLevel__getLevelLayer(*(TileLevel **)(self + 0x40),2);
    if (lVar1 != 0) {
      *(uint32_t *)(lVar1 + 0x414) = 0;
    }
    lVar1 = TileLevel__getLevelLayer(*(TileLevel **)(self + 0x40),3);
    if (lVar1 != 0) {
      *(uint32_t *)(lVar1 + 0x414) = 0;
    }
    lVar1 = TileLevel__getLevelLayer(*(TileLevel **)(self + 0x40),4);
    if (lVar1 != 0) {
      *(uint32_t *)(lVar1 + 0x414) = 0;
    }
    lVar1 = TileLevel__getLevelLayer(*(TileLevel **)(self + 0x40),5);
    if (lVar1 != 0) {
      *(uint32_t *)(lVar1 + 0x414) = 0;
    }
    lVar1 = TileLevel__getLevelLayer(*(TileLevel **)(self + 0x40),1);
    if (lVar1 != 0) {
      *(uint32_t *)(lVar1 + 0x414) = 0;
    }
    lVar1 = TileLevel__getLevelLayer(*(TileLevel **)(self + 0x40),6);
    if (lVar1 != 0) {
      *(uint32_t *)(lVar1 + 0x414) = 0;
    }
    lVar1 = TileLevel__getLevelLayer(*(TileLevel **)(self + 0x40),7);
    if (lVar1 != 0) {
      *(uint32_t *)(lVar1 + 0x414) = 0;
    }
  }
  return;
}

/* ======================================================================
 * GSuperMeatBoy__MarkAllLevelsVisible  (Ghidra `MarkAllLevelsVisible` @ 00514de0)
 * Signature: uint8_t __thiscall MarkAllLevelsVisible(GSuperMeatBoy * self)
 * Class: GSuperMeatBoy
 * Calls: `TileLevel__getLevelLayer`
 * Called by: `GSMBCutSceneManager__CancelCutScene`, `GSMBCutSceneManager__ForceShutdown`, `GSMBCutSceneManager__IsCutSceneFinished`, `GSMBCutSceneManager__PlayCutScene`, `GSMBMenu__ShowStartMenu`
 */
/* GSuperMeatBoy__MarkAllLevelsVisible() */

void __thiscall GSuperMeatBoy__MarkAllLevelsVisible(GSuperMeatBoy *self)

{
  long lVar1;
  
  if (pBossLayer != 0) {
    *(uint32_t *)(pBossLayer + 0x414) = 1;
  }
  if (SMBHUD != 0) {
    *(uint32_t *)(SMBHUD + 0x414) = 1;
  }
  if (SMBMenu != 0) {
    *(uint32_t *)(SMBMenu + 0x414) = 1;
  }
  if (pAnimalLayer != 0) {
    *(uint32_t *)(pAnimalLayer + 0x414) = 1;
  }
  if (*(TileLevel **)(self + 0x40) != (TileLevel *)0x0) {
    lVar1 = TileLevel__getLevelLayer(*(TileLevel **)(self + 0x40),0);
    if (lVar1 != 0) {
      *(uint32_t *)(lVar1 + 0x414) = 1;
    }
    lVar1 = TileLevel__getLevelLayer(*(TileLevel **)(self + 0x40),2);
    if (lVar1 != 0) {
      *(uint32_t *)(lVar1 + 0x414) = 1;
    }
    lVar1 = TileLevel__getLevelLayer(*(TileLevel **)(self + 0x40),3);
    if (lVar1 != 0) {
      *(uint32_t *)(lVar1 + 0x414) = 1;
    }
    lVar1 = TileLevel__getLevelLayer(*(TileLevel **)(self + 0x40),4);
    if (lVar1 != 0) {
      *(uint32_t *)(lVar1 + 0x414) = 1;
    }
    lVar1 = TileLevel__getLevelLayer(*(TileLevel **)(self + 0x40),5);
    if (lVar1 != 0) {
      *(uint32_t *)(lVar1 + 0x414) = 1;
    }
    lVar1 = TileLevel__getLevelLayer(*(TileLevel **)(self + 0x40),1);
    if (lVar1 != 0) {
      *(uint32_t *)(lVar1 + 0x414) = 1;
    }
    lVar1 = TileLevel__getLevelLayer(*(TileLevel **)(self + 0x40),6);
    if (lVar1 != 0) {
      *(uint32_t *)(lVar1 + 0x414) = 1;
    }
    lVar1 = TileLevel__getLevelLayer(*(TileLevel **)(self + 0x40),7);
    if (lVar1 != 0) {
      *(uint32_t *)(lVar1 + 0x414) = 1;
    }
  }
  return;
}

/* ======================================================================
 * GSuperMeatBoy__SetTilePalette  (Ghidra `SetTilePalette` @ 00514f30)
 * Signature: uint8_t __thiscall SetTilePalette(GSuperMeatBoy * self, char * arg1)
 * Class: GSuperMeatBoy
 * Calls: `BaseResource__Release`, `SMBPaletteBackgroundLoader__GetPalette`, `SMBPaletteBackgroundLoader__NullPalette`, `SMBPalette__Activate`, `SMBPalette__SMBPalette__004f3ca0`
 * Called by: `EditorForm_LoadFormOk`, `EndBackToTitleFromReplay`, `SMBEditor__LoadLevel`, `SMBEditor__NewLevel`, `SetTilePalette`
 */
/* GSuperMeatBoy__SetTilePalette(char const*) */

void __thiscall GSuperMeatBoy__SetTilePalette(GSuperMeatBoy *self,char *arg1)

{
  int iVar1;
  SMBPalette *this_00;
  
  if (arg1 == (char *)0x0) {
    if (pLevelPalette != (SMBPalette *)0x0) {
      BaseResource__Release((BaseResource *)pLevelPalette,0);
      pLevelPalette = (SMBPalette *)0x0;
    }
    SMBPaletteBackgroundLoader__NullPalette((SMBPaletteBackgroundLoader *)(self + 0x3b0));
    return;
  }
  if (pLevelPalette == (SMBPalette *)0x0) {
    iVar1 = SMBPaletteBackgroundLoader__IsRequestedPaletteLoading((char *)(self + 0x3b0));
    if (iVar1 == 1) goto LAB_00515035;
    this_00 = BaseResource__operator_new(0x43d8,0);
                    /* try { // try from 00515029 to 0051502d has its CatchHandler @ 00515057 */
    SMBPalette__SMBPalette__004f3ca0(this_00,arg1);
  }
  else {
    iVar1 = std__string_compare((char *)(pLevelPalette + 0x18));
    if (iVar1 == 0) {
      return;
    }
    iVar1 = SMBPaletteBackgroundLoader__IsRequestedPaletteLoading((char *)(self + 0x3b0));
    if (iVar1 == 1) {
      BaseResource__Release((BaseResource *)pLevelPalette,0);
LAB_00515035:
      pLevelPalette =
           (SMBPalette *)
           SMBPaletteBackgroundLoader__GetPalette((SMBPaletteBackgroundLoader *)(self + 0x3b0));
      SMBPalette__Activate(pLevelPalette,1);
      return;
    }
    BaseResource__Release((BaseResource *)pLevelPalette,0);
    this_00 = BaseResource__operator_new(0x43d8,0);
                    /* try { // try from 00514fae to 00514fb2 has its CatchHandler @ 0051506c */
    SMBPalette__SMBPalette__004f3ca0(this_00,arg1);
  }
  pLevelPalette = this_00;
  SMBPalette__Activate(this_00,0);
  return;
}

/* ======================================================================
 * GSuperMeatBoy__PlaceBossLayer  (Ghidra `PlaceBossLayer` @ 00515090)
 * Signature: uint8_t __thiscall PlaceBossLayer(GSuperMeatBoy * self)
 * Class: GSuperMeatBoy
 * Calls: `TileLevel__getLevelLayer`
 * Called by: (none)
 */
/* GSuperMeatBoy__PlaceBossLayer() */

void __thiscall GSuperMeatBoy__PlaceBossLayer(GSuperMeatBoy *self)

{
  RenderLayer *pRVar1;
  
  if ((CurrentSMBBoss != 0) &&
     ((*(int *)(CurrentSMBBoss + 0x16c) == 4 || (*(int *)(CurrentSMBBoss + 0x16c) == 3)))) {
    pRVar1 = (RenderLayer *)TileLevel__getLevelLayer(*(TileLevel **)(self + 0x40),0);
    RenderLayers__InsertLayerBefore(pBossLayer,pRVar1);
    return;
  }
  RenderLayers__InsertLayerAfter(pBossLayer,pLightLayer);
  return;
}

/* ======================================================================
 * GSuperMeatBoy__SetCurrentLevel  (Ghidra `SetCurrentLevel` @ 005150f0)
 * Signature: uint8_t __thiscall SetCurrentLevel(GSuperMeatBoy * self, TileLevel * arg1)
 * Class: GSuperMeatBoy
 * Calls: `AnimationManager__RemoveAllCallbacks`, `AutoLockSection__AutoLockSection`, `AutoLockSection__AutoLockSection__005b59d0`, `BloodyTiles__Reset`, `GMeatHUD__ResetTimer`, `GSMBMenu__IsInReplayMode`, `LoadDeferredCharactor`, `MeatBoyCharactor__ResetLevelDeaths`, `MeatBoyCharactor__SwitchToRegularMode`, `RenderLayer__InsertObjectBefore` (+17 more)
 * Called by: `EditorForm_LoadFormOk`, `GSMBMenu__LoadSelectedLevel`, `SMBChapterLoadWarpZone`, `SMBChapter__LoadWarpZone`, `SMBChapter__PlayBossOutro`, `SMBEditor__LoadLevel`, `SMBEditor__NewLevel`
 */
/* GSuperMeatBoy__SetCurrentLevel(TileLevel*) */

void __thiscall GSuperMeatBoy__SetCurrentLevel(GSuperMeatBoy *self,TileLevel *arg1)

{
  TileLevel *this_00;
  long lVar1;
  SMBPalette *pSVar2;
  int iVar3;
  RenderLayer *pRVar4;
  RenderLayer *pRVar5;
  long lVar6;
  SMBPalette *pSVar7;
  AutoLockSection aAStack_38 [24];
  
  AutoLockSection__AutoLockSection(aAStack_38,(CriticalSection *)RenderLayers__MasterRenderSection);
  if (*(void **)(self + 0x40) != (void *)0x0) {
                    /* try { // try from 00515120 to 005153e5 has its CatchHandler @ 005154bd */
    TResourceCreator__RemoveResourceCreationFunction
              ((TResourceCreator *)ResourceCreator,ResetLightAndLayerAssets,*(void **)(self + 0x40))
    ;
    AnimationManager__RemoveAllCallbacks();
    this_00 = *(TileLevel **)(self + 0x40);
    if (this_00 != (TileLevel *)0x0) {
      TileLevel__TileLevel__0058d9f0(this_00);
      operator_delete(this_00);
    }
  }
  *(TileLevel **)(self + 0x40) = arg1;
  pSVar2 = pLevelPalette;
  if (arg1 == (TileLevel *)0x0) {
    AutoLockSection__AutoLockSection__005b59d0(aAStack_38);
  }
  else {
    pSVar7 = (SMBPalette *)0x0;
    if (pLevelPalette != (SMBPalette *)0x0) {
      pSVar7 = pLevelPalette + 0x10;
    }
    *(SMBPalette **)(arg1 + 0x40) = pSVar7;
    *(uint64_t *)(pSVar2 + 0x28) = *(uint64_t *)(self + 0x40);
    *(uint64_t *)(*(long *)(self + 0x40) + 0x48) = *(uint64_t *)(self + 0x38);
    TileLevel__BuildTileStreams(*(TileLevel **)(self + 0x40));
    TileLevel__BuildSetPieceStreams();
    TileLevelLightMap__RegenerateLights(*(TileLevelLightMap **)(SuperMeatBoy + 0x390));
    SMBPalette__FindAnimatedObstacles(pLevelPalette);
    SMBPalette__MarkCollision(pLevelPalette,1);
    if (*(int *)(self + 0x3a4) == 0) {
      SMBPalette__ResetObstacles(pLevelPalette);
      iVar3 = *(int *)(self + 0x39c);
    }
    else {
      iVar3 = *(int *)(self + 0x39c);
    }
    if (iVar3 == 1) {
      LoadDeferredCharactor((int)self);
    }
    GMeatHUD__ResetTimer(SMBHUD);
    RenderLayers__RemoveLayer(pLightLayer);
    RenderLayers__RemoveLayer(pBossLayer);
    RenderLayers__RemoveLayer(pAnimalLayer);
    RenderLayers__RemoveLayer(pLastLayer);
    RenderLayers__RemoveLayer((RenderLayer *)SMBHUD);
    TileLevel__AddLevelLayers
              (*(TileLevel **)(self + 0x40),*(RenderLayer **)(self + 0x88),
               *(RenderLayer **)(self + 0x88));
    pRVar4 = (RenderLayer *)TileLevel__getLevelLayer(*(TileLevel **)(self + 0x40),0);
    pRVar5 = (RenderLayer *)TileLevel__getLevelLayer(*(TileLevel **)(self + 0x40),1);
    RenderLayer__InsertObjectBefore
              (pRVar4,(RenderLayerObject *)(self + 0x50),*(RenderLayerObject **)(pRVar4 + 8));
    RenderLayers__InsertLayerAfter(pLightLayer,pRVar5);
    RenderLayers__InsertLayerAfter(pAnimalLayer,pRVar5);
                    /* try { // try from 0051541f to 005154a0 has its CatchHandler @ 005154bd */
    if (((*(int *)(self + 0x2c) == 0) && (*(int *)(self + 0x3a4) == 0)) &&
       (iVar3 = RenderLayers__IsLayerValid(SMBCutSceneManager), iVar3 == 1)) {
      RenderLayers__InsertLayerBefore((RenderLayer *)SMBHUD,SMBCutSceneManager);
      RenderLayers__InsertLayerBefore(pLastLayer,SMBCutSceneManager);
    }
    else {
      RenderLayers__AddLayer((RenderLayer *)SMBHUD);
      RenderLayers__AddLayer(pLastLayer);
    }
    if ((CurrentSMBBoss == 0) ||
       ((*(int *)(CurrentSMBBoss + 0x16c) != 4 && (*(int *)(CurrentSMBBoss + 0x16c) != 3)))) {
      RenderLayers__InsertLayerAfter(pBossLayer,pLightLayer);
    }
    else {
      pRVar4 = (RenderLayer *)TileLevel__getLevelLayer(*(TileLevel **)(self + 0x40),0);
      RenderLayers__InsertLayerBefore(pBossLayer,pRVar4);
    }
    TileLevelLightMap__GenerateFacesFromLevel
              (*(TileLevelLightMap **)(self + 0x390),*(TileLevel **)(self + 0x40));
    *(uint64_t *)(*(long *)(self + 0x390) + 0x2a8) = *(uint64_t *)(self + 0x38);
    SMBCamera__Reset(*(SMBCamera **)(self + 0x38));
    (**(code **)(**(long **)(self + 0x48) + 0x68))();
    (**(code **)(**(long **)(self + 0x48) + 0x70))();
    SMBAnimals__Reset(*(SMBAnimals **)(pLevelPalette + 0x41e8));
    ResetSMBBoss();
    BloodyTiles__Reset((BloodyTiles *)(self + 0x50));
    lVar6 = TileLevel__getLevelLayer(*(TileLevel **)(self + 0x40),0);
    *(uint32_t *)(*(long *)(self + 0x88) + 0x410) = *(uint32_t *)(lVar6 + 0x410);
    lVar1 = *(long *)(self + 0x88);
    *(uint64_t *)(lVar1 + 0x400) = *(uint64_t *)(lVar6 + 0x400);
    *(uint64_t *)(lVar1 + 0x408) = *(uint64_t *)(lVar6 + 0x408);
    pRVar4 = pAnimalLayer;
    *(uint32_t *)(pAnimalLayer + 0x410) = *(uint32_t *)(lVar6 + 0x410);
    *(uint64_t *)(pRVar4 + 0x400) = *(uint64_t *)(lVar6 + 0x400);
    *(uint64_t *)(pRVar4 + 0x408) = *(uint64_t *)(lVar6 + 0x408);
    TResourceCreator__AddResourceCreationFunction
              ((TResourceCreator *)ResourceCreator,ResetLightAndLayerAssets,*(void **)(self + 0x40))
    ;
    iVar3 = GSMBMenu__IsInReplayMode(SMBMenu);
    if (iVar3 == 0) {
      MeatBoyCharactor__SwitchToRegularMode(*(MeatBoyCharactor **)(self + 0x48));
      MeatBoyCharactor__ResetLevelDeaths(*(MeatBoyCharactor **)(self + 0x48));
    }
    bNeedToWriteData = 1;
    AutoLockSection__AutoLockSection__005b59d0(aAStack_38);
  }
  return;
}

/* ======================================================================
 * GSuperMeatBoy__ShowCurrentReplay  (Ghidra `ShowCurrentReplay` @ 005154d0)
 * Signature: uint8_t __thiscall ShowCurrentReplay(GSuperMeatBoy * self, int arg1)
 * Class: GSuperMeatBoy
 * Calls: `BackToTitleFromReplay`, `BloodyTiles__Reset`, `DecrementCurrentInternetsRating`, `GMeatHUD__ShowReplayHUD`, `GSMBMenu__IsInReplayMode`, `IncrementCurrentInternetsRating`, `Joystick__AddButtonCallback`, `Joystick__AddPOVCallback`, `MeatBoyCharactor__SwitchToReplayMode`, `ReplayLevel` (+12 more)
 * Called by: `DrFetusCaptureFinished`, `GSMBMenu__TransitionOutGameFromMenu`, `RestartReplay`, `ShowCurrentReplay`, `ViewReplay`
 */
/* GSuperMeatBoy__ShowCurrentReplay(int) */

void __thiscall GSuperMeatBoy__ShowCurrentReplay(GSuperMeatBoy *self,int arg1)

{
  uint64_t *puVar1;
  int iVar2;
  Joystick *pJVar3;
  uint32_t local_18 [2];
  uint64_t local_10;
  
  if ((arg1 != 0) || ((*(int *)(self + 0x3a4) != 1 && (bCurrLevelTransitioning != 1)))) {
    bCurrLevelTransitioning = 0;
    if (Keyboard != (TKeyboard *)0x0) {
      TKeyboard__AddKeyCallback(Keyboard,0x6f,0,0);
      TKeyboard__AddKeyCallback(Keyboard,0x43,0,0);
    }
    pJVar3 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
    Joystick__AddButtonCallback(pJVar3,3,0,0);
    (**(code **)(**(long **)(SuperMeatBoy + 0x48) + 0x68))();
    SMBPalette__ResetObstacles(pLevelPalette);
    BloodyTiles__Reset((BloodyTiles *)(SuperMeatBoy + 0x50));
    TileLevel__ResetLevel(*(TileLevel **)(SuperMeatBoy + 0x40));
    SMBCamera__Reset(*(SMBCamera **)(SuperMeatBoy + 0x38));
    SMBAnimals__Reset(*(SMBAnimals **)(pLevelPalette + 0x41e8));
    puVar1 = (uint64_t *)(SuperMeatBoy + 0x48);
    *(uint32_t *)(SuperMeatBoy + 0x2c) = 0;
    MeatBoyCharactor__SwitchToReplayMode((MeatBoyCharactor *)*puVar1);
    GMeatHUD__ShowReplayHUD(SMBHUD);
    local_18[0] = 9;
    local_10 = TPlayer__GetProfile((TPlayer *)Players__Player);
    BroadcastString__SetBroadcastString((BroadcastStringCreate *)local_18);
    iVar2 = GSMBMenu__IsInReplayMode(SMBMenu);
    if (iVar2 == 0) {
      pJVar3 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
      Joystick__AddButtonCallback(pJVar3,0,TransitionToNextLevel,0);
      pJVar3 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
      Joystick__AddButtonCallback(pJVar3,1,ShowMenuPress,0);
      if (*(int *)(self + 0x290) != 9) {
        if (self[0x3a9] == (GSuperMeatBoy)0x1) {
          pJVar3 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
          Joystick__AddButtonCallback(pJVar3,2,ShowReplayAlreadySaved,0);
          if (Keyboard != (TKeyboard *)0x0) {
            TKeyboard__AddKeyCallback(Keyboard,0x43,ShowReplayAlreadySaved,0);
            TKeyboard__AddKeyCallback(Keyboard,0x6f,ShowReplayAlreadySaved,0);
          }
        }
        else {
          pJVar3 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
          Joystick__AddButtonCallback(pJVar3,2,ShowSaveReplayInterface,0);
          if (Keyboard != (TKeyboard *)0x0) {
            TKeyboard__AddKeyCallback(Keyboard,0x43,ShowSaveReplayInterface,0);
            TKeyboard__AddKeyCallback(Keyboard,0x6f,ShowSaveReplayInterface,0);
          }
        }
      }
      pJVar3 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
      Joystick__AddPOVCallback(pJVar3,3,DecrementCurrentInternetsRating,0);
      pJVar3 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
      Joystick__AddPOVCallback(pJVar3,1,IncrementCurrentInternetsRating,0);
      if (Keyboard != (TKeyboard *)0x0) {
        TKeyboard__AddKeyCallback(Keyboard,0x41,DecrementCurrentInternetsRating,0);
        TKeyboard__AddKeyCallback(Keyboard,0x6d,IncrementCurrentInternetsRating,0);
      }
      pJVar3 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
      Joystick__AddButtonCallback(pJVar3,3,ReplayLevel,0);
      if (Keyboard != (TKeyboard *)0x0) {
        TKeyboard__AddKeyCallback(Keyboard,0x83,ReplayLevel,0);
        TKeyboard__AddKeyCallback(Keyboard,0x76,TransitionToNextLevel,0);
        TKeyboard__AddKeyCallback(Keyboard,0x6c,TransitionToNextLevel,0);
        TKeyboard__AddKeyCallback(Keyboard,0x23,ShowMenuPress,0);
      }
    }
    else {
      pJVar3 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
      Joystick__AddButtonCallback(pJVar3,1,BackToTitleFromReplay,0);
      pJVar3 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
      Joystick__AddButtonCallback(pJVar3,0,RestartReplay,0);
      if (Keyboard != (TKeyboard *)0x0) {
        TKeyboard__AddKeyCallback(Keyboard,0x23,BackToTitleFromReplay,0);
        TKeyboard__AddKeyCallback(Keyboard,0x76,RestartReplay,0);
        TKeyboard__AddKeyCallback(Keyboard,0x6c,RestartReplay,0);
        return;
      }
    }
  }
  return;
}

/* ======================================================================
 * GSuperMeatBoy__BeatLevel  (Ghidra `BeatLevel` @ 00515a70)
 * Signature: uint8_t __thiscall BeatLevel(GSuperMeatBoy * self, int arg1)
 * Class: GSuperMeatBoy
 * Calls: `ConvertLevelToLeaderboardID`, `GMeatHUD__FreezeTimer`, `GMeatHUD__ShowEndLevelHud`, `GSMBChapterData__SaveLevelData`, `GSMBCutSceneManager__CancelCutScene`, `GSMBInstructions__ForceClosePage`, `Joystick__AddButtonCallback`, `MeatBoyCharactor__MakeShocked`, `MeatBoyCharactor__RemoveControls`, `SMBCamera__EndLevelZoomIn` (+10 more)
 * Called by: `SMBPalette__ActivateEnd`, `SMBPalette__ObstacleCollision`
 */
/* GSuperMeatBoy__BeatLevel(int) */

void __thiscall GSuperMeatBoy__BeatLevel(GSuperMeatBoy *self,int arg1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  Joystick *pJVar4;
  
  lVar1 = pLastLayer;
  if ((*(int *)(self + 0x3a4) != 1) && (bCurrLevelTransitioning != 1)) {
    self[0x3aa] = (GSuperMeatBoy)0x1;
    *(uint32_t *)(lVar1 + 0x41c) = 0x40000000;
    self[0x3a8] = (GSuperMeatBoy)0x1;
    *(uint32_t *)(self + 0x2c) = 8;
    GSMBInstructions__ForceClosePage(SMBInstructions);
    GSMBCutSceneManager__CancelCutScene(SMBCutSceneManager);
    if (arg1 == 0) {
      MeatBoyCharactor__RemoveControls(*(MeatBoyCharactor **)(self + 0x48));
      if (*(int *)(*(long *)(*(long *)(self + 0x48) + 0xa38) + 0x2c8) == 1) {
        if (Keyboard != (TKeyboard *)0x0) {
          TKeyboard__AddKeyCallback(Keyboard,0x76,ViewReplay,0);
          TKeyboard__AddKeyCallback(Keyboard,0x6c,ViewReplay,0);
          TKeyboard__AddKeyCallback(Keyboard,0x6f,ViewReplay,0);
          TKeyboard__AddKeyCallback(Keyboard,0x43,ViewReplay,0);
          TKeyboard__AddKeyCallback(Keyboard,0x1b,ViewReplay,0);
          TKeyboard__AddKeyCallback(Keyboard,10,TransitionToNextLevel,0);
          TKeyboard__AddKeyCallback(Keyboard,0x71,ShowMenuPress,0);
        }
        if ((*(int *)(self + 0x294) == 0) || (*(int *)(self + 0x294) == 1)) {
          pJVar4 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
          Joystick__AddButtonCallback(pJVar4,0,ViewReplay,0);
        }
        else {
          pJVar4 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
          Joystick__AddButtonCallback(pJVar4,0,TransitionToNextLevel,0);
        }
        pJVar4 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
        Joystick__AddButtonCallback(pJVar4,3,0,0);
        pJVar4 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
        Joystick__AddButtonCallback(pJVar4,1,0,0);
        self[0x3a9] = (GSuperMeatBoy)0x0;
      }
      GMeatHUD__FreezeTimer(SMBHUD,1);
    }
    else {
      GMeatHUD__FreezeTimer(SMBHUD,1);
      if (arg1 == 1) {
        iVar2 = ConvertLevelToLeaderboardID();
        if (iVar2 != -1) {
          iVar3 = System_IsTrialMode();
          if (((iVar3 == 0) && (*(int *)(self + 0x290) != 9)) &&
             ((*(int *)(self + 0x294) == 1 || (*(int *)(self + 0x294) == 0)))) {
            WriteLevelCompleteLeaderboard(iVar2,*(float *)(SMBHUD + 0x418));
          }
        }
        SMBChapter__ActivateWarpZone((SMBChapter *)(self + 0x90),(WarpZone *)0x0,1);
        return;
      }
    }
    if (*(int *)(*(long *)(*(long *)(self + 0x48) + 0xa38) + 0x2c8) == 1) {
      GMeatHUD__ShowEndLevelHud(SMBHUD);
      SMBCamera__EndLevelZoomIn(*(SMBCamera **)(self + 0x38));
      MeatBoyCharactor__MakeShocked(*(MeatBoyCharactor **)(self + 0x48));
      SMBLevelPortal__SetLevelDeaths(SuperMeatBoyPortal,*(int *)(*(long *)(self + 0x48) + 0x7f8));
      iVar2 = ConvertLevelToLeaderboardID();
      if (iVar2 != -1) {
        iVar3 = System_IsTrialMode();
        if (((iVar3 == 0) && (*(int *)(self + 0x290) != 9)) &&
           ((*(int *)(self + 0x294) == 1 || (*(int *)(self + 0x294) == 0)))) {
          WriteLevelCompleteLeaderboard(iVar2,*(float *)(SMBHUD + 0x418));
        }
      }
      if (bNeedToWriteData == 1) {
        bNeedToWriteData = 0;
        SMBCurrLevelData._0_4_ = *(uint32_t *)(SMBHUD + 0x418);
        GSMBChapterData__SaveLevelData(SMBChapterData,(SMBLevelData *)SMBCurrLevelData);
        SMBChapter__GetCurrChapterIndex((SMBChapter *)(self + 0x90));
        return;
      }
    }
    else {
      bNeedToWriteData = 0;
    }
  }
  return;
}

/* ======================================================================
 * GSuperMeatBoy__ShowChapterMap  (Ghidra `ShowChapterMap` @ 00515dc0)
 * Signature: uint8_t __stdcall ShowChapterMap(void)
 * Class: GSuperMeatBoy
 * Calls: `GSMBMenu__ShowChapterMap`
 * Called by: (none)
 */
/* GSuperMeatBoy__ShowChapterMap() */

void GSuperMeatBoy__ShowChapterMap(void)

{
  GSMBMenu__ShowChapterMap(SMBMenu,0);
  return;
}

/* ======================================================================
 * GSuperMeatBoy__ShowWorldMap  (Ghidra `ShowWorldMap` @ 00515dd0)
 * Signature: uint8_t __stdcall ShowWorldMap(void)
 * Class: GSuperMeatBoy
 * Calls: `GSMBMenu__ShowWorldMap`
 * Called by: (none)
 */
/* GSuperMeatBoy__ShowWorldMap() */

void GSuperMeatBoy__ShowWorldMap(void)

{
  GSMBMenu__ShowWorldMap(SMBMenu,0);
  return;
}

/* ======================================================================
 * GSuperMeatBoy__GetCameraFocus  (Ghidra `GetCameraFocus` @ 00515de0)
 * Signature: uint8_t __thiscall GetCameraFocus(GSuperMeatBoy * self, FPUVector * arg1)
 * Class: GSuperMeatBoy
 * Calls: `MeatBoyCharactor__getRenderPos`
 * Called by: `SMBCamera__Update`
 */
/* GSuperMeatBoy__GetCameraFocus(FPUVector*) */

void __thiscall GSuperMeatBoy__GetCameraFocus(GSuperMeatBoy *self,FPUVector *arg1)

{
  uint32_t uVar1;
  uint32_t *puVar2;
  long lVar3;
  
  if (CurrentSMBBoss != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00515e00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*CurrentSMBBoss + 0x38))();
    return;
  }
  if (*(MeatBoyCharactor **)(self + 0x48) != (MeatBoyCharactor *)0x0) {
    puVar2 = (uint32_t *)MeatBoyCharactor__getRenderPos(*(MeatBoyCharactor **)(self + 0x48));
    *(uint32_t *)arg1 = *puVar2;
    lVar3 = MeatBoyCharactor__getRenderPos(*(MeatBoyCharactor **)(self + 0x48));
    uVar1 = *(uint32_t *)(lVar3 + 4);
    *(uint32_t *)(arg1 + 8) = 0;
    *(uint32_t *)(arg1 + 4) = uVar1;
    return;
  }
  *(uint32_t *)arg1 = 0;
  *(uint32_t *)(arg1 + 4) = 0;
  *(uint32_t *)(arg1 + 8) = 0;
  return;
}

/* ======================================================================
 * GSuperMeatBoy__ShowGame  (Ghidra `ShowGame` @ 00515e70)
 * Signature: uint8_t __thiscall ShowGame(GSuperMeatBoy * self)
 * Class: GSuperMeatBoy
 * Calls: `GMeatHUD__ShowInGameHud`, `GSMBMenu__GetCurrReplayInfo`, `GSMBMenu__IsInReplayMode`, `Joystick__AddButtonCallback`, `LoadDeferredCharactor`, `MeatBoyCharactor__RestoreControls`, `SMBChapter__LoadNextLevel`, `SMBChapter__PlayChapterMusic__00491ea0`, `SMBEditor__LoadLevel`, `ShowMenuPress` (+6 more)
 * Called by: (none)
 */
/* GSuperMeatBoy__ShowGame() */

void __thiscall GSuperMeatBoy__ShowGame(GSuperMeatBoy *self)

{
  int iVar1;
  RenderLayer *pRVar2;
  Joystick *pJVar3;
  long local_38;
  uint64_t local_30;
  uint32_t local_28;
  
  bIsGamePauseable = 1;
  RenderLayers__AddLayer(*(RenderLayer **)(self + 0x88));
  iVar1 = GSMBMenu__IsInReplayMode(SMBMenu);
  if (iVar1 == 1) {
    local_38 = GSMBMenu__GetCurrReplayInfo(SMBMenu);
    if (((*(int *)(local_38 + 0x10) != *(int *)(self + 0x398)) ||
        (DeferLoadCharactor(tagSuperMeatBoyCharactor)::bFirstCharLoad == 1)) ||
       (*(long *)(self + 0x48) == 0)) {
      *(int *)(self + 0x398) = *(int *)(local_38 + 0x10);
      *(uint32_t *)(self + 0x39c) = 1;
      DeferLoadCharactor(tagSuperMeatBoyCharactor)::bFirstCharLoad = 0;
    }
    local_30 = 0;
    local_28 = 0;
    SMBEditor__LoadLevel(SuperMeatBoyEditor,(TileLevelLoad *)&local_38);
  }
  else if (*(long *)(self + 0x40) == 0) {
    if (self[0x3ab] == (GSuperMeatBoy)0x0) {
      SMBChapter__LoadNextLevel((SMBChapter *)(self + 0x90));
    }
  }
  else {
    RenderLayers__RemoveLayer(pLightLayer);
    RenderLayers__RemoveLayer(pBossLayer);
    RenderLayers__RemoveLayer(pAnimalLayer);
    RenderLayers__RemoveLayer(pLastLayer);
    RenderLayers__RemoveLayer(SMBHUD);
    TileLevel__AddLevelLayers
              (*(TileLevel **)(self + 0x40),*(RenderLayer **)(self + 0x88),
               *(RenderLayer **)(self + 0x88));
    TileLevel__getLevelLayer(*(TileLevel **)(self + 0x40),0);
    pRVar2 = (RenderLayer *)TileLevel__getLevelLayer(*(TileLevel **)(self + 0x40),1);
    RenderLayers__InsertLayerAfter(pLightLayer,pRVar2);
    RenderLayers__InsertLayerAfter(pAnimalLayer,pRVar2);
    RenderLayers__AddLayer(SMBHUD);
    RenderLayers__AddLayer(pLastLayer);
    if ((CurrentSMBBoss != 0) &&
       ((*(int *)(CurrentSMBBoss + 0x16c) == 4 || (*(int *)(CurrentSMBBoss + 0x16c) == 3)))) {
      pRVar2 = (RenderLayer *)TileLevel__getLevelLayer(*(TileLevel **)(self + 0x40),0);
      RenderLayers__InsertLayerBefore(pBossLayer,pRVar2);
      iVar1 = *(int *)(self + 0x39c);
      goto joined_r0x00515f95;
    }
    RenderLayers__InsertLayerAfter(pBossLayer,pLightLayer);
  }
  iVar1 = *(int *)(self + 0x39c);
joined_r0x00515f95:
  if (iVar1 == 1) {
    LoadDeferredCharactor((int)self);
  }
  MeatBoyCharactor__RestoreControls(*(MeatBoyCharactor **)(self + 0x48));
  if (Keyboard != (TKeyboard *)0x0) {
    TKeyboard__AddKeyCallback(Keyboard,0x13,ShowMenuPress,0);
    TKeyboard__AddKeyCallback(Keyboard,0x61,ShowPauseMenuPress,0);
    TKeyboard__AddKeyCallback(Keyboard,0x23,ShowPauseMenuPress,0);
  }
  pJVar3 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddButtonCallback(pJVar3,7,ShowPauseMenuPress,0);
  GMeatHUD__ShowInGameHud((GMeatHUD *)SMBHUD);
  SMBChapter__PlayChapterMusic__00491ea0((SMBChapter *)(self + 0x90));
  TAudio__EnableDirectionalAudio(Audio);
  if (self[0x3ab] == (GSuperMeatBoy)0x0) {
    *(uint32_t *)(*(long *)(self + 0x40) + 0x22b0) = 1;
  }
  return;
}

/* ======================================================================
 * GSuperMeatBoy__HideChapterMap  (Ghidra `HideChapterMap` @ 00516140)
 * Signature: uint8_t __stdcall HideChapterMap(void)
 * Class: GSuperMeatBoy
 * Calls: `GSMBMenu__HideChapterMap`
 * Called by: (none)
 */
/* GSuperMeatBoy__HideChapterMap() */

void GSuperMeatBoy__HideChapterMap(void)

{
  GSMBMenu__HideChapterMap(SMBMenu);
  return;
}

/* ======================================================================
 * GSuperMeatBoy__HideWorldMap  (Ghidra `HideWorldMap` @ 00516150)
 * Signature: uint8_t __stdcall HideWorldMap(void)
 * Class: GSuperMeatBoy
 * Calls: `GSMBMenu__HideWorldMap`
 * Called by: (none)
 */
/* GSuperMeatBoy__HideWorldMap() */

void GSuperMeatBoy__HideWorldMap(void)

{
  GSMBMenu__HideWorldMap(SMBMenu);
  return;
}

/* ======================================================================
 * GSuperMeatBoy__HideGame  (Ghidra `HideGame` @ 00516160)
 * Signature: uint8_t __thiscall HideGame(GSuperMeatBoy * self)
 * Class: GSuperMeatBoy
 * Calls: `Joystick__AddButtonCallback`, `MeatBoyCharactor__RemoveControls`, `SMBChapter__StopChapterMusic`, `SyncEvent__SyncEvent`, `SyncEvent__SyncEvent__005b8100`, `TAudio__DisableDirectionalAudio`, `TKeyboard__AddKeyCallback`, `TPlayer__GetJoystick`, `TPlayer__GetProfile`, `TileLevel__RemoveLevelLayers`
 * Called by: (none)
 */
/* GSuperMeatBoy__HideGame() */

void __thiscall GSuperMeatBoy__HideGame(GSuperMeatBoy *self)

{
  Joystick *pJVar1;
  uint64_t local_78;
  SyncEvent local_70 [104];
  
  RenderLayers__RemoveLayer(*(RenderLayer **)(self + 0x88));
  RenderLayers__RemoveLayer(pLightLayer);
  RenderLayers__RemoveLayer(pLastLayer);
  RenderLayers__RemoveLayer(pBossLayer);
  RenderLayers__RemoveLayer(pAnimalLayer);
  RenderLayers__RemoveLayer(SMBHUD);
  TileLevel__RemoveLevelLayers(*(TileLevel **)(self + 0x40));
  if (*(MeatBoyCharactor **)(self + 0x48) != (MeatBoyCharactor *)0x0) {
    MeatBoyCharactor__RemoveControls(*(MeatBoyCharactor **)(self + 0x48));
  }
  if (Keyboard != (TKeyboard *)0x0) {
    TKeyboard__AddKeyCallback(Keyboard,0x13,0,0);
    TKeyboard__AddKeyCallback(Keyboard,0x61,0,0);
    TKeyboard__AddKeyCallback(Keyboard,0x23,0,0);
  }
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddButtonCallback(pJVar1,7,0,0);
  SMBChapter__StopChapterMusic((SMBChapter *)(self + 0x90));
  TAudio__DisableDirectionalAudio(Audio);
  bIsGamePauseable = 0;
  SyncEvent__SyncEvent(local_70);
                    /* try { // try from 00516257 to 00516267 has its CatchHandler @ 00516278 */
  local_78 = TPlayer__GetProfile((TPlayer *)Players__Player);
  Leaderboards__LeaveLeaderboardSession((LeaderboardJoinParam *)&local_78);
  SyncEvent__SyncEvent__005b8100(local_70);
  return;
}

/* ======================================================================
 * GSuperMeatBoy__HideIntroPlayer  (Ghidra `HideIntroPlayer` @ 00516290)
 * Signature: uint8_t __stdcall HideIntroPlayer(void)
 * Class: GSuperMeatBoy
 * Calls: `GMeatHUD__HideIntroPlayer`
 * Called by: (none)
 */
/* GSuperMeatBoy__HideIntroPlayer() */

void GSuperMeatBoy__HideIntroPlayer(void)

{
  GMeatHUD__HideIntroPlayer();
  return;
}

/* ======================================================================
 * GSuperMeatBoy__SwitchGameMode  (Ghidra `SwitchGameMode` @ 005162a0)
 * Signature: uint8_t __thiscall SwitchGameMode(GSuperMeatBoy * self, SMB_GameState arg1)
 * Class: GSuperMeatBoy
 * Calls: `DestroySMBBoss`, `GMeatHUD__ShowIntro`, `GSMBCharactor__DestroyCharactor__0049cbf0`, `GSMBMenu__IsInReplayMode`, `GSMBMenu__ShowChapterMap`, `GSMBMenu__ShowStartMenu`, `GSMBMenu__ShowTitleMenu`, `GSMBMenu__ShowWorldMap`, `SetTilePalette`, `TileLevelLightMap__DestroyLightsAndMaps` (+2 more)
 * Called by: `EndBackToTitleFromReplay`, `EnterTitleMenu`, `GSMBMenu__HideChapterEnd`, `GSMBMenu__LoadSelectedLevel`, `GSMBMenu__StartGame`, `GSMBMenu__TransitionInTitleFromGame`, `GSMBMenu__TransitionInWorld`, `GSMBMenu__TransitionOutMenuFromGame`, `GSMBMenu__Update`, `SMBChapterEndIdleFinished` (+15 more)
 */
/* GSuperMeatBoy__SwitchGameMode(SMB_GameState) */

void __thiscall GSuperMeatBoy__SwitchGameMode(GSuperMeatBoy *self,int arg2)

{
  uint uVar1;
  TileLevel *this_00;
  int iVar2;
  
  RenderLayers__RemoveLayer(SMBCutSceneManager);
  RenderLayers__RemoveLayer(pResolutionLayer);
  iVar2 = *(int *)(self + 0x2c);
  *(int *)(self + 0x30) = iVar2;
  if ((((arg2 == 0xc) || (arg2 == 9)) && ((iVar2 == 8 || ((iVar2 == 0 || (iVar2 == 0xf))))))
     || (arg2 == 10)) {
    DestroySMBBoss();
    this_00 = *(TileLevel **)(self + 0x40);
    if (this_00 != (TileLevel *)0x0) {
      TileLevel__TileLevel__0058d9f0(this_00);
      operator_delete(this_00);
    }
    *(uint64_t *)(self + 0x40) = 0;
    SetTilePalette((char *)self);
    GSMBCharactor__DestroyCharactor__0049cbf0(SMBCharactor,*(MeatBoyCharactor **)(self + 0x48));
    TileLevelLightMap__DestroyLightsAndMaps(*(TileLevelLightMap **)(self + 0x390));
    *(uint64_t *)(self + 0x48) = 0;
  }
  if (arg2 == 0) {
    iVar2 = GSMBMenu__IsInReplayMode(SMBMenu);
    if (iVar2 != 1) {
      *(uint32_t *)(Engine + 0x2c) = 1;
      uVar1 = *(uint *)(self + 0x2c);
      goto joined_r0x00516386;
    }
    *(uint32_t *)(Engine + 0x2c) = 0;
  }
  uVar1 = *(uint *)(self + 0x2c);
joined_r0x00516386:
  if (uVar1 < 0xe) {
                    /* WARNING: Could not recover jumptable at 0x005162f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(&DAT_005c9200 /* R:7.474795058013725e-39f */ + (ulong)*(uint *)(self + 0x2c) * 8))();
    return;
  }
  switch(arg2) {
  case 0:
    ShowGame(self);
    break;
  case 3:
    GMeatHUD__ShowIntro(SMBHUD);
    break;
  case 9:
    GSMBMenu__ShowChapterMap(SMBMenu,0);
    break;
  case 10:
    GSMBMenu__ShowWorldMap(SMBMenu,0);
    break;
  case 0xc:
    AnimationManager__PauseAnimations(0);
    GSMBMenu__ShowTitleMenu(SMBMenu,0);
    break;
  case 0xd:
    bProcessProfileSignOut = 0;
    GSMBMenu__ShowStartMenu(SMBMenu,0);
  }
  RenderLayers__AddLayer(SMBCutSceneManager);
  RenderLayers__AddLayer(pResolutionLayer);
  *(int *)(self + 0x2c) = arg2;
  return;
}

/* ======================================================================
 * GSuperMeatBoy__Pause  (Ghidra `Pause` @ 00516520)
 * Signature: uint8_t __thiscall Pause(GSuperMeatBoy * self, int arg1, int arg2)
 * Class: GSuperMeatBoy
 * Calls: `GSuperMeatBoy__Pause__00516530`
 * Called by: (none)
 */
/* non-virtual thunk to GSuperMeatBoy__Pause__00516530(int, int) */

void __thiscall GSuperMeatBoy__Pause__00516530(GSuperMeatBoy *self,int arg1,int arg2)

{
  Pause(self + -0x20,arg1,arg2);
  return;
}

/* ======================================================================
 * GSuperMeatBoy__Pause__00516530  (Ghidra `Pause` @ 00516530)
 * Signature: uint8_t __thiscall Pause(GSuperMeatBoy * self, int arg1, int arg2)
 * Class: GSuperMeatBoy
 * Calls: `DebugMsg`, `TAudio__Mute`, `TAudio__UnMute`
 * Called by: `GSuperMeatBoy__Pause`
 */
/* GSuperMeatBoy__Pause__00516530(int, int) */

void __thiscall GSuperMeatBoy__Pause__00516530(GSuperMeatBoy *self,int arg1,int arg2)

{
  uint32_t uVar1;
  
  if (arg2 == 1) {
    if (arg1 == 1) {
      if (*(int *)(self + 0x2c) != 2) {
        *(int *)(self + 0x30) = *(int *)(self + 0x2c);
        *(uint32_t *)(self + 0x2c) = 2;
        goto LAB_005165d3;
      }
    }
    else if ((arg1 == 0) && (*(int *)(self + 0x2c) == 2)) {
      uVar1 = *(uint32_t *)(self + 0x30);
      *(uint32_t *)(self + 0x30) = 2;
      *(uint32_t *)(self + 0x2c) = uVar1;
      goto LAB_005165a1;
    }
  }
  else {
    DebugMsg("Pausing..............");
    if (arg1 == 1) {
      if (*(int *)(self + 0x2c) != 2) {
        SwitchGameMode(self,2);
LAB_005165d3:
        TAudio__Mute();
        return;
      }
    }
    else if ((arg1 == 0) && (*(int *)(self + 0x2c) == 2)) {
      SwitchGameMode(self,*(uint32_t *)(self + 0x30));
LAB_005165a1:
      TAudio__UnMute();
      return;
    }
  }
  return;
}

/* ======================================================================
 * GSuperMeatBoy__Update  (Ghidra `Update` @ 00516680)
 * Signature: uint8_t __thiscall Update(GSuperMeatBoy * self)
 * Class: GSuperMeatBoy
 * Calls: `GSuperMeatBoy__Update__00516690`, `Update`
 * Called by: (none)
 */
/* non-virtual thunk to GSuperMeatBoy__Update__00516690() */

void __thiscall GSuperMeatBoy__Update__00516690(GSuperMeatBoy *self)

{
  Update(self + -0x20);
  return;
}

/* ======================================================================
 * GSuperMeatBoy__Update__00516690  (Ghidra `Update` @ 00516690)
 * Signature: uint8_t __thiscall Update(GSuperMeatBoy * self)
 * Class: GSuperMeatBoy
 * Calls: `Camera__SetCameraMatricies`, `CreateMessage`, `DestroySMBBoss`, `ForceClose`, `GMeatHUD__Update`, `GSMBCharactor__DestroyCharactor__0049cbf0`, `GSMBCutSceneManager__ForceShutdown`, `GSMBCutSceneManager__IsRendering`, `GSMBCutSceneManager__Update`, `GSMBMenu__PopupTransitioning` (+34 more)
 * Called by: `GSuperMeatBoy__Update`
 */
/* GSuperMeatBoy__Update__00516690() */

void __thiscall GSuperMeatBoy__Update__00516690(GSuperMeatBoy *self)

{
  TileLevel *this_00;
  SMBEditor *this_01;
  SMBPalette *this_02;
  long lVar1;
  int iVar2;
  Joystick *pJVar3;
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
  
  iVar2 = LoadingRenderThreadActive();
  this_02 = pLevelPalette;
  this_01 = SuperMeatBoyEditor;
  if (iVar2 == 1) {
    return;
  }
  if (*(int *)(self + 0x3a4) == 1) {
    if (Update()::bFirstDevmodeRun == 1) {
      if (*(int *)(SuperMeatBoy + 0x2c) == 1) {
        *(uint32_t *)(SuperMeatBoy + 0x2c) = 0;
        SMBPalette__FindAnimatedObstacles(this_02);
        SMBEditor__DeActivate();
        GLOBALSFXVOLUME = GLOBALDEFAULTSFXVOLUME;
      }
      else if (*(int *)(SuperMeatBoy + 0x2c) != 5) {
        *(uint32_t *)(SuperMeatBoy + 0x2c) = 1;
        SMBEditor__Activate(this_01);
        GLOBALSFXVOLUME = 0;
      }
    }
    Update()::bFirstDevmodeRun = 0;
  }
  if ((bProcessProfileSignOut == 1) &&
     (((((iVar2 = *(int *)(self + 0x2c), iVar2 == 9 || (iVar2 == 0)) || (iVar2 == 10)) ||
       (((iVar2 == 0xc || (iVar2 == 0xf)) || (iVar2 == 0xd)))) &&
      (iVar2 = LoadingRenderThreadActive(), iVar2 == 0)))) {
    iVar2 = GSMBCutSceneManager__IsRendering(SMBCutSceneManager);
    lVar1 = SuperMeatBoy;
    if (iVar2 != 0) {
      GSMBCutSceneManager__ForceShutdown(SMBCutSceneManager);
      return;
    }
    bProcessProfileSignOut = 0;
    bProcessDisconnect = 0;
    if (*(int *)(self + 0x2c) == 0xf) {
      GSMBMenu__HidePauseMenu((int)SMBMenu);
      pJVar3 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
      Joystick__RestoreCallbacks
                (pJVar3,(InputCallback **)&pPrePauseButtonCallbacks,
                 (InputCallback **)&pPrePausePOVCallbacks);
      if (Keyboard != (TKeyboard *)0x0) {
        TKeyboard__RestoreCallbacks(Keyboard,(InputCallback **)&pPrePauseKeyboardCallbacks);
      }
      *(uint32_t *)(lVar1 + 0x2c) = prePauseGameState;
      AnimationManager__PauseAnimations(0);
      TAudio__SetMusicVolume(Audio,GLOBALMUSICVOLUME);
    }
    pJVar3 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
    Joystick__Reset(pJVar3);
    pJVar3 = (Joystick *)TPlayer__GetJoystick((TPlayer *)(Players__Player + 0x18));
    Joystick__Reset(pJVar3);
    pJVar3 = (Joystick *)TPlayer__GetJoystick((TPlayer *)(Players__Player + 0x30));
    Joystick__Reset(pJVar3);
    pJVar3 = (Joystick *)TPlayer__GetJoystick((TPlayer *)(Players__Player + 0x48));
    Joystick__Reset(pJVar3);
    if (bJustPurchased < 2) {
      ForceClose();
      Players__InitializePlayers();
      if (bJustPurchased == 0) {
        GSMBMenu__ResetForSignout(SMBMenu);
      }
      else {
        GSMBMenu__ResetForPurchase(SMBMenu);
      }
      iVar2 = *(int *)(self + 0x2c);
      if ((iVar2 == 2) || (iVar2 == 0)) {
        DestroySMBBoss();
        this_00 = *(TileLevel **)(self + 0x40);
        if (this_00 != (TileLevel *)0x0) {
          TileLevel__TileLevel__0058d9f0(this_00);
          operator_delete(this_00);
        }
        *(uint64_t *)(self + 0x40) = 0;
        SetTilePalette((char *)self);
        GSMBCharactor__DestroyCharactor__0049cbf0(SMBCharactor,*(MeatBoyCharactor **)(self + 0x48));
        TileLevelLightMap__DestroyLightsAndMaps(*(TileLevelLightMap **)(self + 0x390));
        *(uint64_t *)(self + 0x48) = 0;
        iVar2 = *(int *)(self + 0x2c);
      }
      if (iVar2 == 0xd) {
        GSMBMenu__RestoreStartGameControls(SMBMenu,0);
      }
      else {
        SwitchGameMode(self,0xd);
      }
    }
    bJustPurchased = 0;
    return;
  }
  iVar2 = GSMBCutSceneManager__IsRendering(SMBCutSceneManager);
  if ((((iVar2 == 0) && (bProcessDisconnect == 1)) && (bProcessProfileSignOut == 0)) &&
     (((iVar2 = *(int *)(self + 0x2c), iVar2 == 9 || (iVar2 == 0)) ||
      ((iVar2 == 10 || ((iVar2 == 0xf || (iVar2 == 0xc)))))))) {
    if (SMBMenu != (GSMBMenu *)0x0) {
      GSMBMenu__ProcessDisconnect(SMBMenu);
    }
    bProcessDisconnect = 0;
    iVar2 = System_IsTrialMode();
    if ((iVar2 == 0) && ((*(int *)(self + 0x2c) == 0xf || (*(int *)(self + 0x2c) == 0)))) {
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
      local_88[0] = 0xe;
      local_70 = GetLocalizedText(4);
      local_60 = UserAlertCloseCurrent;
      local_80 = GetLocalizedText(0x3c);
      local_78 = GetLocalizedText(0xc0);
      CreateMessage(local_88);
    }
  }
  if ((((bProcessStorageChange == 1) &&
       (iVar2 = GSMBCutSceneManager__IsRendering(SMBCutSceneManager), iVar2 == 0)) &&
      (iVar2 = LoadingRenderThreadActive(), iVar2 == 0)) &&
     (iVar2 = GSMBMenu__PopupTransitioning(SMBMenu), iVar2 == 0)) {
    GSMBMenu__ProcessStorageChange(SMBMenu);
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
    local_80 = GetLocalizedText(0x5b);
    local_78 = GetLocalizedText(0x5a);
    local_88[0] = 0x1e;
    local_60 = Game_StorageRemovedOK;
    local_70 = GetLocalizedText(0x44);
    local_58 = Game_StorageRemovedCancel;
    local_68 = GetLocalizedText(0x2d);
    CreateMessage(local_88);
    bProcessStorageChange = 0;
    return;
  }
  GSMBCutSceneManager__Update(SMBCutSceneManager);
  iVar2 = *(int *)(self + 0x2c);
  if (((iVar2 == 2) || (iVar2 == 0xf)) || (*(int *)(self + 0x3a0) == 1)) {
    GSMBMenu__Update(SMBMenu);
    return;
  }
  if (iVar2 == 0) {
    if ((bShowMeatNinjaMessage == 1) && (bLevelReady == 1)) {
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
      local_80 = GetLocalizedText(0x7d);
      local_78 = GetLocalizedText(0x7c);
      local_88[0] = 0xe;
      local_70 = GetLocalizedText(4);
      local_60 = UserAlertCloseCurrent;
      CreateMessage(local_88);
      bShowMeatNinjaMessage = 0;
    }
    GSMBMenu__Update(SMBMenu);
    if (*(int *)(self + 0x39c) == 1) {
      LoadDeferredCharactor((int)self);
      if (*(long **)(self + 0x48) != (long *)0x0) {
        (**(code **)(**(long **)(self + 0x48) + 0x70))();
      }
    }
    if (pLevelPalette != (SMBPalette *)0x0) {
      SMBPalette__Update(pLevelPalette);
    }
    GSetPieceWayPoints__Update(SetPieceWayPoints);
    (**(code **)(**(long **)(self + 0x48) + 0x40))();
    SMBAnimals__UpdateAnimals(*(SMBAnimals **)(pLevelPalette + 0x41e8));
    UpdateSMBBoss();
    GMeatHUD__Update(SMBHUD);
    if ((*(int *)(self + 0x3a4) == 1) && (Keyboard != (TKeyboard *)0x0)) {
      TKeyboard__AddKeyCallback(Keyboard,0x29,ShowEffectProps,0);
    }
    iLoadCounter = iLoadCounter + 1;
    goto LAB_005169c2;
  }
  if (iVar2 != 8) {
    if (iVar2 == 1) {
      SMBEditor__Update(SuperMeatBoyEditor);
      goto LAB_005169c2;
    }
    if (((1 < iVar2 - 9U) && (iVar2 != 0xc)) && (iVar2 != 0xd)) goto LAB_005169c2;
    GSMBMenu__Update(SMBMenu);
  }
  GMeatHUD__Update(SMBHUD);
LAB_005169c2:
  Camera__SetCameraMatricies(*(Camera **)(self + 0x38),1);
  return;
}

/* ======================================================================
 * GSuperMeatBoy__Initialize  (Ghidra `Initialize` @ 00516f50)
 * Signature: uint8_t __thiscall Initialize(GSuperMeatBoy * self)
 * Class: GSuperMeatBoy
 * Calls: `GSuperMeatBoy__Initialize__00516f60`
 * Called by: (none)
 */
/* non-virtual thunk to GSuperMeatBoy__Initialize__00516f60() */

void __thiscall GSuperMeatBoy__Initialize__00516f60(GSuperMeatBoy *self)

{
  Initialize(self + -0x20);
  return;
}

/* ======================================================================
 * GSuperMeatBoy__Initialize__00516f60  (Ghidra `Initialize` @ 00516f60)
 * Signature: uint8_t __thiscall Initialize(GSuperMeatBoy * self)
 * Class: GSuperMeatBoy
 * Calls: `Achievements__Achievements`, `CreateUserProfile`, `DisableLoadingRenderThread`, `FillLeaderboardDatabase`, `GMeatHUD__GMeatHUD__004800c0`, `GMeatHUD__WaitForLogosToFinish`, `GSMBCharactor__CreateCharactor__0049c600`, `GSMBCharactor__GSMBCharactor`, `GSMBCutSceneManager__GSMBCutSceneManager__0049d5e0`, `GSMBInstructions__GSMBInstructions` (+30 more)
 * Called by: `GSuperMeatBoy__Initialize`
 */
/* WARNING: Removing unreachable block (ram,0x00517545) */
/* WARNING: Removing unreachable block (ram,0x005174e7) */
/* WARNING: Removing unreachable block (ram,0x00517501) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GSuperMeatBoy__Initialize__00516f60() */

void __thiscall GSuperMeatBoy__Initialize__00516f60(GSuperMeatBoy *self)

{
  char cVar1;
  uint uVar2;
  Achievements *this_00;
  GameRegistry *this_01;
  GSMBCutSceneManager *this_02;
  SMBReplay *this_03;
  GSMBCharactor *this_04;
  TileLevelLightMap *this_05;
  RenderLayer *pRVar3;
  SMBCamera *this_06;
  SMBEditor *this_07;
  GMeatHUD *this_08;
  GSMBMenu *this_09;
  GSMBInstructions *this_10;
  SMBLevelPortal *this_11;
  long *plVar4;
  uint64_t *puVar5;
  uint64_t uVar6;
  
  CreateUserProfile(0);
  CreateUserProfile(1);
  CreateUserProfile(2);
  CreateUserProfile(3);
  LoadControlConfig();
  TGraphics__ForceAspectRatio(Graphics,1);
  GLOBALMUSICVOLUME = GLOBALDEFAULTMUSICVOLUME;
  GLOBALSFXVOLUME = GLOBALDEFAULTSFXVOLUME;
  uTmpGlobalMusicVolume = GLOBALDEFAULTMUSICVOLUME;
  FillLeaderboardDatabase();
  Leaderboards__JoinLeaderboardSession((LeaderboardJoinParam *)0x0);
  Leaderboards__RegisterLeaderBoardIDDB((LeaderBoardIDEntry *)pLeaderboards,0xfa);
  Leaderboards__RegisterLeaderBoardPropDB((LeaderBoardPropertyEntry *)pLeaderboardProps,8);
  Achievements__pAchievementDatabase = pAchievementsDB;
  Achievements__iNumAchievements = 0x30;
  cVar1 = SteamAPI_IsSteamRunning();
  if (cVar1 != '\0') {
    plVar4 = (long *)SteamUser();
    cVar1 = (**(code **)(*plVar4 + 8))(plVar4);
    if (cVar1 != '\0') {
      puVar5 = (uint64_t *)SteamUserStats();
      (**(code **)*puVar5)(puVar5);
    }
  }
  this_00 = operator_new(0x28);
                    /* try { // try from 0051701e to 00517022 has its CatchHandler @ 0051752e */
  Achievements__Achievements(this_00);
  this_01 = operator_new(0x20);
                    /* try { // try from 00517038 to 0051703c has its CatchHandler @ 00517543 */
  GameRegistry__GameRegistry__005b6430(this_01,1);
  SMBRegistry = this_01;
  this_02 = operator_new(0x498);
                    /* try { // try from 00517059 to 0051705d has its CatchHandler @ 00517574 */
  GSMBCutSceneManager__GSMBCutSceneManager__0049d5e0(this_02,1);
  SMBCutSceneManager = this_02;
  if ((Keyboard != (TKeyboard *)0x0) &&
     (TKeyboard__AddKeyCallback(Keyboard,0x61,PauseGame,0), *(int *)(self + 0x3a4) == 1)) {
    TKeyboard__AddKeyCallback(Keyboard,0x25,ShowEditor,0);
    TKeyboard__AddKeyCallback(Keyboard,0x27,ShowPlayerProps,0);
    TKeyboard__AddKeyCallback(Keyboard,0x28,ShowPlayerAnimProps,0);
    TKeyboard__AddKeyCallback(Keyboard,0x29,ShowEffectProps,0);
    TKeyboard__AddKeyCallback(Keyboard,0x38,SwitchCharacter,self + 0x48);
    TKeyboard__AddKeyCallback(Keyboard,0x5f,ShowMenuPress,0);
  }
  this_03 = operator_new(0x2e0);
                    /* try { // try from 0051709f to 005170a3 has its CatchHandler @ 00517556 */
  SMBReplay__SMBReplay(this_03);
  pReplay = this_03;
  this_04 = operator_new(0x50);
                    /* try { // try from 005170bb to 005170bf has its CatchHandler @ 00517554 */
  GSMBCharactor__GSMBCharactor(this_04);
  this_05 = operator_new(0x2b0);
                    /* try { // try from 005170d0 to 005170d4 has its CatchHandler @ 00517552 */
  TileLevelLightMap__TileLevelLightMap(this_05);
  *(TileLevelLightMap **)(self + 0x390) = this_05;
  if (*(int *)(self + 0x3a4) == 1) {
    uVar6 = GSMBCharactor__CreateCharactor__0049c600(SMBCharactor,defaultChar,0);
    *(uint64_t *)(self + 0x48) = uVar6;
  }
  else {
    *(uint64_t *)(self + 0x48) = 0;
  }
                    /* try { // try from 005170fe to 00517102 has its CatchHandler @ 00517586 */
  pRVar3 = operator_new(0x418);
                    /* try { // try from 00517109 to 0051710d has its CatchHandler @ 00517582 */
  RenderLayer__RenderLayer__00597d50(pRVar3);
  *(RenderLayer **)(self + 0x88) = pRVar3;
                    /* try { // try from 0051711b to 00517129 has its CatchHandler @ 00517586 */
  RenderLayer__AddObject(pRVar3,(RenderLayerObject *)self);
  pRVar3 = operator_new(0x418);
                    /* try { // try from 00517130 to 00517134 has its CatchHandler @ 00517576 */
  RenderLayer__RenderLayer__00597d50(pRVar3);
  *(uint8_t ***)pRVar3 = &PTR__RenderSetupLayer_005c93f0;
  pFirstLayer = pRVar3;
                    /* try { // try from 00517148 to 0051714c has its CatchHandler @ 00517586 */
  pRVar3 = operator_new(0x418);
                    /* try { // try from 00517153 to 00517157 has its CatchHandler @ 005175a5 */
  RenderLayer__RenderLayer__00597d50(pRVar3);
  *(uint8_t ***)pRVar3 = &PTR__LightLayer_005c9430;
  pLightLayer = pRVar3;
                    /* try { // try from 0051716b to 0051716f has its CatchHandler @ 00517586 */
  pRVar3 = operator_new(0x418);
                    /* try { // try from 00517176 to 0051717a has its CatchHandler @ 0051759c */
  RenderLayer__RenderLayer__00597d50(pRVar3);
  *(uint8_t ***)pRVar3 = &PTR__BossLayer_005c9470;
  pBossLayer = pRVar3;
                    /* try { // try from 0051718e to 00517192 has its CatchHandler @ 00517586 */
  pRVar3 = operator_new(0x418);
                    /* try { // try from 00517199 to 0051719d has its CatchHandler @ 00517597 */
  RenderLayer__RenderLayer__00597d50(pRVar3);
  *(uint8_t ***)pRVar3 = &PTR__AnimalLayer_005c94b0;
  pAnimalLayer = pRVar3;
                    /* try { // try from 005171b1 to 005171b5 has its CatchHandler @ 00517586 */
  pRVar3 = operator_new(0x418);
                    /* try { // try from 005171bc to 005171c0 has its CatchHandler @ 00517592 */
  RenderLayer__RenderLayer__00597d50(pRVar3);
  *(uint8_t ***)pRVar3 = &PTR__ResolutionLayer_005c94f0;
  pResolutionLayer = pRVar3;
                    /* try { // try from 005171d6 to 005171f0 has its CatchHandler @ 00517586 */
  RenderLayers__AddLayer(pFirstLayer);
  RenderLayers__AddLayer(*(RenderLayer **)(self + 0x88));
  this_06 = operator_new(0x11c8);
                    /* try { // try from 005171f7 to 005171fb has its CatchHandler @ 00517562 */
  SMBCamera__SMBCamera(this_06);
  vLastEyePos._8_8_ = _UNK_005c1908;
  vLastEyePos._0_8_ = _DAT_005c1900 /* R:0.0f */;
  *(SMBCamera **)(self + 0x38) = this_06;
                    /* try { // try from 00517213 to 00517217 has its CatchHandler @ 00517586 */
  this_07 = operator_new(0x118);
                    /* try { // try from 0051721e to 00517222 has its CatchHandler @ 00517572 */
  SMBEditor__SMBEditor__004ad010(this_07);
  uVar2 = 0;
  if (bBossEditMode != 0) {
    uVar2 = (uint)(*(int *)(self + 0x3a4) != 0);
  }
  *(uint *)(SuperMeatBoyEditor + 0x110) = uVar2;
                    /* try { // try from 0051724e to 00517252 has its CatchHandler @ 00517586 */
  this_08 = operator_new(0x4b8);
                    /* try { // try from 00517259 to 0051725d has its CatchHandler @ 00517566 */
  GMeatHUD__GMeatHUD__004800c0(this_08);
                    /* try { // try from 00517263 to 00517267 has its CatchHandler @ 00517586 */
  this_09 = operator_new(0x1848);
                    /* try { // try from 0051726e to 00517272 has its CatchHandler @ 00517564 */
  GSMBMenu__GSMBMenu__004d8690(this_09);
                    /* try { // try from 00517278 to 0051727c has its CatchHandler @ 00517586 */
  this_10 = operator_new(0x40);
                    /* try { // try from 00517283 to 00517287 has its CatchHandler @ 00517584 */
  GSMBInstructions__GSMBInstructions(this_10);
                    /* try { // try from 0051728d to 00517291 has its CatchHandler @ 00517586 */
  pRVar3 = operator_new(0x420);
                    /* try { // try from 00517298 to 0051729c has its CatchHandler @ 00517541 */
  RenderLayer__RenderLayer__00597d50(pRVar3);
  *(uint8_t ***)pRVar3 = &PTR__LastLayer_005c9530;
  uVar6 = ::cBlack;
  *(uint32_t *)(pRVar3 + 0x418) = 0;
  *(uint32_t *)(pRVar3 + 0x41c) = 0;
  *(uint32_t *)(pRVar3 + 0x410) = 0x3f800000;
  pLastLayer = pRVar3;
  *(uint64_t *)(pRVar3 + 0x400) = uVar6;
  *(uint64_t *)(pRVar3 + 0x408) = DAT_0081c838 /* R:1.1917718337838846e-38f */;
  if (*(int *)(self + 0x3a4) == 1) {
                    /* try { // try from 00517418 to 00517443 has its CatchHandler @ 00517586 */
    SMBEditor__NewLevel(SuperMeatBoyEditor,0x32,0x32,strStartingPalette);
    TGraphics__ForceAspectRatio(Graphics,0);
  }
  else {
                    /* try { // try from 005172fe to 0051730c has its CatchHandler @ 00517586 */
    TGraphics__ForceAspectRatio(Graphics,1);
  }
  this_11 = operator_new(0x78);
                    /* try { // try from 00517313 to 00517317 has its CatchHandler @ 00517510 */
  SMBLevelPortal__SMBLevelPortal__00509490(this_11);
                    /* try { // try from 00517324 to 005173c9 has its CatchHandler @ 00517586 */
  TResourceCreator__AddResourceCreationFunction
            ((TResourceCreator *)ResourceCreator,ResetSMBGraphicsDependentFactors,(void *)0x0);
  if (Keyboard != (TKeyboard *)0x0) {
    TKeyboard__AddKeyCallback(Keyboard,0x45,MuteAudio,0);
  }
  if (*(int *)(self + 0x3a4) == 0) {
    SwitchGameMode(self,3);
  }
  else {
    SwitchGameMode(self,0);
  }
  GScreenMargins__EnableMargins(ScreenMargins,bShowMargins);
  if (*(int *)(self + 0x3a4) == 0) {
    Loader__WaitAll();
    GMeatHUD__WaitForLogosToFinish();
    System_CheckTrialMask();
    DisableLoadingRenderThread();
  }
  bGameOfficiallyStarted = 1;
  return;
}

/* ======================================================================
 * GSuperMeatBoy__ShowPauseMenu  (Ghidra `ShowPauseMenu` @ 005175c0)
 * Signature: uint8_t __thiscall ShowPauseMenu(GSuperMeatBoy * self)
 * Class: GSuperMeatBoy
 * Calls: `GSMBMenu__ShowPauseMenu`, `Joystick__BackupCallbacks`, `TAudio__SetMusicVolume`, `TKeyboard__BackupCallbacks`, `TPlayer__GetJoystick`
 * Called by: (none)
 */
/* GSuperMeatBoy__ShowPauseMenu() */

void __thiscall GSuperMeatBoy__ShowPauseMenu(GSuperMeatBoy *self)

{
  Joystick *this_00;
  
  this_00 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__BackupCallbacks
            (this_00,(InputCallback **)&pPrePauseButtonCallbacks,
             (InputCallback **)&pPrePausePOVCallbacks);
  if (Keyboard != (TKeyboard *)0x0) {
    TKeyboard__BackupCallbacks(Keyboard,(InputCallback **)&pPrePauseKeyboardCallbacks);
  }
  GSMBMenu__ShowPauseMenu(SMBMenu,0);
  prePauseGameState = *(uint32_t *)(self + 0x2c);
  *(uint32_t *)(self + 0x2c) = 0xf;
  AnimationManager__PauseAnimations(1);
  TAudio__SetMusicVolume(Audio,GLOBALMUSICVOLUME / 3);
  return;
}

/* ======================================================================
 * GSuperMeatBoy__ShowIntroPlayer  (Ghidra `ShowIntroPlayer` @ 005176b0)
 * Signature: uint8_t __stdcall ShowIntroPlayer(void)
 * Class: GSuperMeatBoy
 * Calls: `GMeatHUD__ShowIntro`
 * Called by: (none)
 */
/* GSuperMeatBoy__ShowIntroPlayer() */

void GSuperMeatBoy__ShowIntroPlayer(void)

{
  GMeatHUD__ShowIntro(SMBHUD);
  return;
}

/* ======================================================================
 * GSuperMeatBoy__ShowTitleMenu  (Ghidra `ShowTitleMenu` @ 005176c0)
 * Signature: uint8_t __stdcall ShowTitleMenu(void)
 * Class: GSuperMeatBoy
 * Calls: `GSMBMenu__ShowTitleMenu`
 * Called by: (none)
 */
/* GSuperMeatBoy__ShowTitleMenu() */

void GSuperMeatBoy__ShowTitleMenu(void)

{
  AnimationManager__PauseAnimations(0);
  GSMBMenu__ShowTitleMenu(SMBMenu,0);
  return;
}

/* ======================================================================
 * GSuperMeatBoy__HideTitleMenu  (Ghidra `HideTitleMenu` @ 005176e0)
 * Signature: uint8_t __stdcall HideTitleMenu(void)
 * Class: GSuperMeatBoy
 * Calls: `GSMBMenu__HideTitleMenu`
 * Called by: (none)
 */
/* GSuperMeatBoy__HideTitleMenu() */

void GSuperMeatBoy__HideTitleMenu(void)

{
  GSMBMenu__HideTitleMenu(SMBMenu);
  return;
}

/* ======================================================================
 * GSuperMeatBoy__ShowStartMenu  (Ghidra `ShowStartMenu` @ 005176f0)
 * Signature: uint8_t __stdcall ShowStartMenu(void)
 * Class: GSuperMeatBoy
 * Calls: `GSMBMenu__ShowStartMenu`
 * Called by: (none)
 */
/* GSuperMeatBoy__ShowStartMenu() */

void GSuperMeatBoy__ShowStartMenu(void)

{
  bProcessProfileSignOut = 0;
  GSMBMenu__ShowStartMenu(SMBMenu,0);
  return;
}

/* ======================================================================
 * GSuperMeatBoy__HideStartMenu  (Ghidra `HideStartMenu` @ 00517710)
 * Signature: uint8_t __stdcall HideStartMenu(void)
 * Class: GSuperMeatBoy
 * Calls: `GSMBMenu__HideStartMenu`
 * Called by: (none)
 */
/* GSuperMeatBoy__HideStartMenu() */

void GSuperMeatBoy__HideStartMenu(void)

{
  GSMBMenu__HideStartMenu(SMBMenu);
  return;
}

/* ======================================================================
 * GSuperMeatBoy__LoadNextLevel  (Ghidra `LoadNextLevel` @ 00517720)
 * Signature: uint8_t __thiscall LoadNextLevel(GSuperMeatBoy * self)
 * Class: GSuperMeatBoy
 * Calls: `SMBChapter__LoadNextLevel`
 * Called by: (none)
 */
/* GSuperMeatBoy__LoadNextLevel() */

void __thiscall GSuperMeatBoy__LoadNextLevel(GSuperMeatBoy *self)

{
  SMBChapter__LoadNextLevel((SMBChapter *)(self + 0x90));
  return;
}

/* ======================================================================
 * GSuperMeatBoy__ActivateWarpZone  (Ghidra `ActivateWarpZone` @ 00517730)
 * Signature: uint8_t __thiscall ActivateWarpZone(GSuperMeatBoy * self)
 * Class: GSuperMeatBoy
 * Calls: `SMBChapter__ActivateWarpZone`
 * Called by: `SMBPalette__ObstacleCollision`
 */
/* GSuperMeatBoy__ActivateWarpZone() */

void __thiscall GSuperMeatBoy__ActivateWarpZone(GSuperMeatBoy *self)

{
  SMBChapter__ActivateWarpZone((SMBChapter *)(self + 0x90),(WarpZone *)0x0,0);
  return;
}

/* ======================================================================
 * GSuperMeatBoy__DeferLoadCharactor  (Ghidra `DeferLoadCharactor` @ 00517740)
 * Signature: uint8_t __thiscall DeferLoadCharactor(GSuperMeatBoy * self, tagSuperMeatBoyCharactor arg1)
 * Class: GSuperMeatBoy
 * Calls: (none)
 * Called by: `EditorForm_CharFormOk`, `GSMBMenu__SelectCharacter`, `GSMBMenu__Update`, `SMBChapterLoadWarpZone`, `SMBChapter__LoadNextLevel`, `SMBChapter__LoadWarpZone`, `SMBChapter__PlayBossIntro`, `SMBChapter__PlayBossOutro`, `SMBCharSwitchMoveSelect`, `SMBCharSwitch__LoadSelectedCharacter` (+2 more)
 */
/* GSuperMeatBoy__DeferLoadCharactor(tagSuperMeatBoyCharactor) */

void __thiscall GSuperMeatBoy__DeferLoadCharactor(GSuperMeatBoy *self,int arg2)

{
  if (((*(int *)(self + 0x398) == arg2) &&
      (DeferLoadCharactor(tagSuperMeatBoyCharactor)::bFirstCharLoad != 1)) &&
     (*(long *)(self + 0x48) != 0)) {
    return;
  }
  *(int *)(self + 0x398) = arg2;
  *(uint32_t *)(self + 0x39c) = 1;
  DeferLoadCharactor(tagSuperMeatBoyCharactor)::bFirstCharLoad = 0;
  return;
}

/* ======================================================================
 * GSuperMeatBoy__LoadDeferredCharactor  (Ghidra `LoadDeferredCharactor` @ 00517780)
 * Signature: uint8_t __thiscall LoadDeferredCharactor(GSuperMeatBoy * self, int arg1)
 * Class: GSuperMeatBoy
 * Calls: `AutoLockSection__AutoLockSection`, `AutoLockSection__AutoLockSection__005b59d0`, `BloodyTiles__Reset`, `GSMBCharactor__CreateCharactor__0049c600`, `GSMBCharactor__DestroyCharactor__0049cbf0`, `Loader__WaitAll`, `ResetSMBBoss`, `SMBAnimals__Reset`, `SMBPalette__ResetObstacles`, `SMBReplay__ResetAll` (+1 more)
 * Called by: `LoadDeferredCharactor`, `SMBChapter__PlayBossIntro`, `SMBChapter__PlayBossOutro`
 */
/* GSuperMeatBoy__LoadDeferredCharactor(int) */

void __thiscall GSuperMeatBoy__LoadDeferredCharactor(GSuperMeatBoy *self,int arg1)

{
  uint64_t uVar1;
  AutoLockSection aAStack_28 [24];
  
  AutoLockSection__AutoLockSection(aAStack_28,(CriticalSection *)RenderLayers__MasterRenderSection);
  if (*(MeatBoyCharactor **)(self + 0x48) != (MeatBoyCharactor *)0x0) {
                    /* try { // try from 005177a8 to 00517840 has its CatchHandler @ 0051786f */
    GSMBCharactor__DestroyCharactor__0049cbf0(SMBCharactor,*(MeatBoyCharactor **)(self + 0x48));
    *(uint64_t *)(self + 0x48) = 0;
  }
  uVar1 = GSMBCharactor__CreateCharactor__0049c600(SMBCharactor,*(uint32_t *)(self + 0x398),0);
  *(uint64_t *)(self + 0x48) = uVar1;
  Loader__WaitAll();
  if (arg1 != 1) {
    if (*(int *)(self + 0x398) == 7) {
      bShowMeatNinjaMessage = 1;
    }
    ResetSMBBoss();
    if (*(long *)(self + 0x40) != 0) {
      SMBAnimals__Reset(*(SMBAnimals **)(pLevelPalette + 0x41e8));
      TileLevel__ResetLevel(*(TileLevel **)(self + 0x40));
      if (pLevelPalette != (SMBPalette *)0x0) {
        SMBPalette__ResetObstacles(pLevelPalette);
      }
      BloodyTiles__Reset((BloodyTiles *)(self + 0x50));
      (**(code **)(**(long **)(self + 0x48) + 0x68))();
      if (pReplay != (SMBReplay *)0x0) {
        SMBReplay__ResetAll(pReplay);
      }
    }
  }
  *(uint32_t *)(self + 0x39c) = 0;
  AutoLockSection__AutoLockSection__005b59d0(aAStack_28);
  return;
}

/* ======================================================================
 * GSuperMeatBoy__Freeze  (Ghidra `Freeze` @ 00517890)
 * Signature: uint8_t __thiscall Freeze(GSuperMeatBoy * self, int arg1)
 * Class: GSuperMeatBoy
 * Calls: (none)
 * Called by: `FinalBoss__Update`, `GSMBMenu__HideChapterEnd`, `GSMBMenu__TransitionInMenuFromGame`, `GSMBMenu__TransitionOutGameFromMenu`, `GSMBMenu__TransitionOutMenuFromGame`, `SMBChapterEndIdleFinished`, `SMBChapterLoadWarpZone`, `SMBChapter__ActivateWarpZone`, `SMBChapter__ActivateWarpZoneFromMenu`, `SMBChapter__FinishedWarpOutro` (+12 more)
 */
/* GSuperMeatBoy__Freeze(int) */

void __thiscall GSuperMeatBoy__Freeze(GSuperMeatBoy *self,int arg1)

{
  *(int *)(self + 0x3a0) = arg1;
  return;
}

/* ======================================================================
 * GSuperMeatBoy__DestroyGameResources  (Ghidra `DestroyGameResources` @ 005178a0)
 * Signature: uint8_t __thiscall DestroyGameResources(GSuperMeatBoy * self)
 * Class: GSuperMeatBoy
 * Calls: `DestroySMBBoss`, `GSMBCharactor__DestroyCharactor__0049cbf0`, `SetTilePalette`, `TileLevelLightMap__DestroyLightsAndMaps`, `TileLevel__TileLevel__0058d9f0`, `operator_delete`
 * Called by: (none)
 */
/* GSuperMeatBoy__DestroyGameResources() */

void __thiscall GSuperMeatBoy__DestroyGameResources(GSuperMeatBoy *self)

{
  TileLevel *this_00;
  
  DestroySMBBoss();
  this_00 = *(TileLevel **)(self + 0x40);
  if (this_00 != (TileLevel *)0x0) {
    TileLevel__TileLevel__0058d9f0(this_00);
    operator_delete(this_00);
  }
  *(uint64_t *)(self + 0x40) = 0;
  SetTilePalette((char *)self);
  GSMBCharactor__DestroyCharactor__0049cbf0(SMBCharactor,*(MeatBoyCharactor **)(self + 0x48));
  TileLevelLightMap__DestroyLightsAndMaps(*(TileLevelLightMap **)(self + 0x390));
  *(uint64_t *)(self + 0x48) = 0;
  return;
}

/* ======================================================================
 * GSuperMeatBoy__RestoreInstructionsControls  (Ghidra `RestoreInstructionsControls` @ 00517920)
 * Signature: uint8_t __stdcall RestoreInstructionsControls(void)
 * Class: GSuperMeatBoy
 * Calls: `Joystick__AddButtonCallback`, `ShowInstructionsPage`, `TKeyboard__AddKeyCallback`, `TPlayer__GetJoystick`
 * Called by: (none)
 */
/* GSuperMeatBoy__RestoreInstructionsControls() */

void GSuperMeatBoy__RestoreInstructionsControls(void)

{
  Joystick *pJVar1;
  
  if ((((iCurrentLevel <= *(int *)(SMBInstructions + 0x30)) && (*(int *)(SuperMeatBoy + 0x294) == 0)
       ) && ((*(int *)(SuperMeatBoy + 0x290) == 1 || (*(int *)(SuperMeatBoy + 0x290) == 8)))) &&
     (iCurrentLevel < 4)) {
    if (Keyboard != (TKeyboard *)0x0) {
      TKeyboard__AddKeyCallback(Keyboard,0x1b,ShowInstructionsPage,0);
    }
    pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
    Joystick__AddButtonCallback(pJVar1,1,ShowInstructionsPage,0);
    return;
  }
  return;
}

/* ======================================================================
 * GSuperMeatBoy__RemoveInstructionsControls  (Ghidra `RemoveInstructionsControls` @ 005179b0)
 * Signature: uint8_t __stdcall RemoveInstructionsControls(void)
 * Class: GSuperMeatBoy
 * Calls: `Joystick__AddButtonCallback`, `TKeyboard__AddKeyCallback`, `TPlayer__GetJoystick`
 * Called by: (none)
 */
/* GSuperMeatBoy__RemoveInstructionsControls() */

void GSuperMeatBoy__RemoveInstructionsControls(void)

{
  Joystick *pJVar1;
  
  if (Keyboard != (TKeyboard *)0x0) {
    TKeyboard__AddKeyCallback(Keyboard,0x1b,0,0);
  }
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddButtonCallback(pJVar1,1,0,0);
  return;
}
