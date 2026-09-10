/* src/game/classes/SMBEditor.c — 34 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "SMBEditor.h"

/* ======================================================================
 * SMBEditor__SetToLightingMode  (Ghidra `SetToLightingMode` @ 0049ee30)
 * Signature: uint8_t __thiscall SetToLightingMode(SMBEditor * self)
 * Class: SMBEditor
 * Calls: `Camera__ScreenToWorld`, `DeleteSelectedLight`, `PlaceLight`, `SMBCamera__Update`, `SMBEditor__SetToLightingMode__004b0570`, `SelectLight`, `TKeyboard__AddKeyCallback`, `TMouse__AddButtonCallback`, `TileLevelLightMap__CreateLight`
 * Called by: (none)
 */
/* SMBEditor__SetToLightingMode__004b0570() [clone .part.101] */

void __thiscall SMBEditor__SetToLightingMode__004b0570(SMBEditor *self)

{
  long *plVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  long lVar4;
  long lVar5;
  uint64_t uVar6;
  uint32_t local_68;
  uint32_t local_64;
  uint32_t local_60;
  uint32_t local_5c;
  uint32_t local_58;
  uint32_t local_54;
  uint32_t local_50;
  uint32_t local_4c;
  uint32_t local_48;
  uint32_t local_44;
  uint32_t local_40;
  uint32_t local_38;
  uint32_t local_34;
  uint32_t local_30;
  uint32_t local_2c;
  uint32_t local_28;
  uint32_t local_24;
  
  *(uint32_t *)(self + 0xc0) = 6;
  TKeyboard__AddKeyCallback(Keyboard,0x69,0,0);
  TKeyboard__AddKeyCallback(Keyboard,0x24,0,0);
  TKeyboard__AddKeyCallback(Keyboard,0x1d,DeleteSelectedLight,0);
  TKeyboard__AddKeyCallback(Keyboard,0x34,0,0);
  lVar4 = pEditorWaypointsButton;
  bSetPieceWayPointMode = 0;
  pCurrentSetPieceWayPoint = 0;
  *(uint8_t *)(pEditorWaypointsButton + 0x4b) = 1;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  *(uint32_t *)(*(long *)(lVar4 + 0x10) + 0x20) = 0xffffffff;
  lVar4 = pEditorPropertiesButton;
  plVar1 = (long *)(pEditorPropertiesButton + 0x10);
  *(uint8_t *)(pEditorPropertiesButton + 0x4b) = 0;
  *(uint32_t *)(*plVar1 + 0x20) = *(uint32_t *)(lVar4 + 0x4c);
  uVar2 = *(uint32_t *)(Mouse + 0xc);
  uVar3 = *(uint32_t *)(Mouse + 0x10);
  local_2c = 0;
  SMBCamera__Update(*(SMBCamera **)(SuperMeatBoy + 0x38));
  local_28 = uVar2;
  local_24 = uVar3;
  Camera__ScreenToWorld
            (*(Camera **)(SuperMeatBoy + 0x38),(FPUVector *)&local_38,(Vector2 *)&local_28,0.0);
  local_48 = 0x42c80000;
  local_58 = 0x3e800000;
  local_44 = 0;
  local_54 = 0x3e800000;
  local_50 = 0x3e800000;
  local_68 = local_38;
  local_4c = 0;
  local_40 = 1;
  local_64 = local_34;
  local_60 = local_30;
  local_5c = local_2c;
  uVar6 = TileLevelLightMap__CreateLight
                    (*(TileLevelLightMap **)(SuperMeatBoy + 0x390),(Light *)&local_68);
  *(uint64_t *)(self + 200) = uVar6;
  lVar4 = (&pEditorFunctionButtons)[*(int *)(self + 0xc0)];
  lVar5 = pCurrentFunctionButton;
  if (lVar4 != 0) {
    lVar5 = lVar4;
    if (pCurrentFunctionButton != 0) {
      if (lVar4 == pCurrentFunctionButton) goto LAB_0049eff7;
      *(uint8_t *)(pCurrentFunctionButton + 0x4a) = 0;
      *(uint16_t *)(pCurrentFunctionButton + 0x48) = 0;
    }
    *(uint8_t *)(lVar4 + 0x4a) = 1;
  }
LAB_0049eff7:
  pCurrentFunctionButton = lVar5;
  if (Mouse != (TMouse *)0x0) {
    TMouse__AddButtonCallback(Mouse,0,PlaceLight,0);
    TMouse__AddButtonCallback(Mouse,1,SelectLight,0);
  }
  return;
}

/* ======================================================================
 * SMBEditor__SetToAnimalMode  (Ghidra `SetToAnimalMode` @ 0049f140)
 * Signature: uint8_t __thiscall SetToAnimalMode(SMBEditor * self)
 * Class: SMBEditor
 * Calls: `DeleteSelectedAnimal`, `PlaceAnimal`, `SMBEditor__SetToAnimalMode__004b05a0`, `SelectAnimal`, `TKeyboard__AddKeyCallback`, `TMouse__AddButtonCallback`
 * Called by: (none)
 */
/* SMBEditor__SetToAnimalMode__004b05a0() [clone .part.103] */

void __thiscall SMBEditor__SetToAnimalMode__004b05a0(SMBEditor *self)

{
  long lVar1;
  TMouse *pTVar2;
  
  *(uint32_t *)(self + 0xc0) = 7;
  TKeyboard__AddKeyCallback(Keyboard,0x69,0,0);
  TKeyboard__AddKeyCallback(Keyboard,0x24,0,0);
  TKeyboard__AddKeyCallback(Keyboard,0x1d,DeleteSelectedAnimal,0);
  TKeyboard__AddKeyCallback(Keyboard,0x34,0,0);
  pTVar2 = Mouse;
  lVar1 = pEditorWaypointsButton;
  bSetPieceWayPointMode = 0;
  pCurrentSetPieceWayPoint = 0;
  *(uint8_t *)(pEditorWaypointsButton + 0x4b) = 1;
  *(uint32_t *)(*(long *)(lVar1 + 0x10) + 0x20) = 0xffffffff;
  lVar1 = pEditorPropertiesButton;
  *(uint8_t *)(pEditorPropertiesButton + 0x4b) = 0;
  *(uint32_t *)(*(long *)(lVar1 + 0x10) + 0x20) = *(uint32_t *)(lVar1 + 0x4c);
  if (pTVar2 != (TMouse *)0x0) {
    TMouse__AddButtonCallback(pTVar2,0,PlaceAnimal,0);
    TMouse__AddButtonCallback(Mouse,1,SelectAnimal,0);
  }
  lVar1 = (&pEditorFunctionButtons)[*(int *)(self + 0xc0)];
  if (lVar1 != 0) {
    if (pCurrentFunctionButton != 0) {
      if (lVar1 == pCurrentFunctionButton) {
        pCurrentFunctionButton = lVar1;
        return;
      }
      *(uint8_t *)(pCurrentFunctionButton + 0x4a) = 0;
      *(uint16_t *)(pCurrentFunctionButton + 0x48) = 0;
    }
    *(uint8_t *)(lVar1 + 0x4a) = 1;
    pCurrentFunctionButton = lVar1;
  }
  return;
}

/* ======================================================================
 * SMBEditor__SetToCameraMode  (Ghidra `SetToCameraMode` @ 004a0010)
 * Signature: uint8_t __thiscall SetToCameraMode(SMBEditor * self)
 * Class: SMBEditor
 * Calls: `DeleteCameraItem`, `PlaceCameraItems`, `ReCenterCamera`, `SMBEditor__SetToCameraMode__004af990`, `SelectCameraItems`, `TKeyboard__AddKeyCallback`, `TMouse__AddButtonCallback`, `TileLevelLightMap__DestroyLight`
 * Called by: (none)
 */
/* SMBEditor__SetToCameraMode__004af990() [clone .part.100] */

void __thiscall SMBEditor__SetToCameraMode__004af990(SMBEditor *self)

{
  long *plVar1;
  long lVar2;
  Light *local_18 [2];
  
  *(uint32_t *)(self + 0xc0) = 3;
  TKeyboard__AddKeyCallback(Keyboard,0x69,ReCenterCamera,0);
  TKeyboard__AddKeyCallback(Keyboard,0x24,0,0);
  TKeyboard__AddKeyCallback(Keyboard,0x1d,DeleteCameraItem,0);
  TKeyboard__AddKeyCallback(Keyboard,0x34,0,0);
  lVar2 = pEditorWaypointsButton;
  bSetPieceWayPointMode = 0;
  pCurrentSetPieceWayPoint = 0;
  *(uint8_t *)(pEditorWaypointsButton + 0x4b) = 1;
  *(uint32_t *)(*(long *)(lVar2 + 0x10) + 0x20) = 0xffffffff;
  lVar2 = pEditorPropertiesButton;
  plVar1 = (long *)(pEditorPropertiesButton + 0x10);
  *(uint8_t *)(pEditorPropertiesButton + 0x4b) = 0;
  *(uint32_t *)(*plVar1 + 0x20) = *(uint32_t *)(lVar2 + 0x4c);
  if (pSelectedLight == (Light *)0x0) {
    local_18[0] = *(Light **)(SuperMeatBoyEditor + 200);
    if (local_18[0] != (Light *)0x0) {
      TileLevelLightMap__DestroyLight(*(TileLevelLightMap **)(SuperMeatBoy + 0x390),local_18);
    }
  }
  else {
    local_18[0] = pSelectedLight;
  }
  pSelectedLight = (Light *)0x0;
  if (Mouse != (TMouse *)0x0) {
    TMouse__AddButtonCallback(Mouse,0,PlaceCameraItems,0);
    TMouse__AddButtonCallback(Mouse,1,SelectCameraItems,0);
  }
  lVar2 = (&pEditorFunctionButtons)[*(int *)(self + 0xc0)];
  if (lVar2 != 0) {
    if (pCurrentFunctionButton != 0) {
      if (lVar2 == pCurrentFunctionButton) {
        pCurrentFunctionButton = lVar2;
        return;
      }
      *(uint8_t *)(pCurrentFunctionButton + 0x4a) = 0;
      *(uint16_t *)(pCurrentFunctionButton + 0x48) = 0;
    }
    *(uint8_t *)(lVar2 + 0x4a) = 1;
    pCurrentFunctionButton = lVar2;
  }
  return;
}

/* ======================================================================
 * SMBEditor__SetToTileMode  (Ghidra `SetToTileMode` @ 004a3580)
 * Signature: uint8_t __thiscall SetToTileMode(SMBEditor * self)
 * Class: SMBEditor
 * Calls: `AddEditorLayerTween`, `CancelPasteTileRendering`, `ChangeBlockID`, `DeSelectTile`, `DeleteSelected`, `FillSelected`, `GrabBlock`, `PasteSelectedTiles`, `SMBEditorForms__IsFormActive`, `SMBEditor__SetToTileMode__004af960` (+5 more)
 * Called by: (none)
 */
/* SMBEditor__SetToTileMode__004af960() [clone .part.169] */

void __thiscall SMBEditor__SetToTileMode__004af960(SMBEditor *self)

{
  long lVar1;
  long lVar2;
  int iVar3;
  LevelRenderLayer *pLVar4;
  Light *local_18 [2];
  
  *(uint32_t *)(self + 0xc0) = 0;
  TKeyboard__AddKeyCallback(Keyboard,0x69,ChangeBlockID,0);
  TKeyboard__AddKeyCallback(Keyboard,0x24,FillSelected,0);
  TKeyboard__AddKeyCallback(Keyboard,0x1d,DeleteSelected,0);
  TKeyboard__AddKeyCallback(Keyboard,0x34,GrabBlock,0);
  lVar2 = pEditorWaypointsButton;
  lVar1 = SuperMeatBoyEditor;
  bSetPieceWayPointMode = 0;
  pCurrentSetPieceWayPoint = 0;
  *(uint8_t *)(pEditorWaypointsButton + 0x4b) = 1;
  *(uint32_t *)(*(long *)(lVar2 + 0x10) + 0x20) = 0xffffffff;
  lVar2 = pEditorPropertiesButton;
  *(uint8_t *)(pEditorPropertiesButton + 0x4b) = 1;
  *(uint32_t *)(*(long *)(lVar2 + 0x10) + 0x20) = 0xffffffff;
  if (pSelectedLight == (Light *)0x0) {
    local_18[0] = *(Light **)(lVar1 + 200);
    if (local_18[0] != (Light *)0x0) {
      TileLevelLightMap__DestroyLight(*(TileLevelLightMap **)(SuperMeatBoy + 0x390),local_18);
    }
  }
  else {
    local_18[0] = pSelectedLight;
  }
  pSelectedLight = (Light *)0x0;
  if (Mouse != (TMouse *)0x0) {
    if (bRenderCopiedElements == 1) {
      TMouse__AddButtonCallback(Mouse,0,PasteSelectedTiles,0);
      TMouse__AddButtonCallback(Mouse,1,CancelPasteTileRendering,0);
    }
    else {
      TMouse__AddButtonCallback(Mouse,0,SelectTile,0);
      TMouse__AddButtonCallback(Mouse,1,DeSelectTile,0);
    }
  }
  lVar1 = (&pEditorFunctionButtons)[*(int *)(self + 0xc0)];
  lVar2 = pCurrentFunctionButton;
  if (lVar1 != 0) {
    lVar2 = lVar1;
    if (pCurrentFunctionButton != 0) {
      if (lVar1 == pCurrentFunctionButton) goto LAB_004a36d2;
      *(uint8_t *)(pCurrentFunctionButton + 0x4a) = 0;
      *(uint16_t *)(pCurrentFunctionButton + 0x48) = 0;
    }
    *(uint8_t *)(lVar1 + 0x4a) = 1;
  }
LAB_004a36d2:
  pCurrentFunctionButton = lVar2;
  iVar3 = *(int *)(self + 0xd0);
  if ((((iVar3 != 2) && (iVar3 != 0)) && (iVar3 != 1)) &&
     (iVar3 = SMBEditorForms__IsFormActive(), iVar3 != 1)) {
    FlashTextField__SetText(pCurrentLayerField);
    *(uint32_t *)(SuperMeatBoyEditor + 0xd0) = 0;
    pLVar4 = (LevelRenderLayer *)TileLevel__getLevelLayer(*(TileLevel **)(SuperMeatBoy + 0x40));
    AddEditorLayerTween(pLVar4,0);
  }
  return;
}

/* ======================================================================
 * SMBEditor__SMBEditor  (Ghidra `~SMBEditor` @ 004ab640)
 * Signature: uint8_t __thiscall ~SMBEditor(SMBEditor * self)
 * Class: SMBEditor
 * Calls: `CreateSMBEditorResources`, `CriticalSection__CriticalSection__005b71d0`, `DestroySMBEditorResources`, `FlashAnimationLibrary__FlashAnimationLibrary`, `SMBEditorForms__Destroy`, `TResourceCreator__RemoveResourceCreationFunction`, `TResourceCreator__RemoveResourceDestroyFunction`, `TileLevelSetPiece__TileLevelSetPiece__0058d560`, `free`, `operator_delete`
 * Called by: `GSuperMeatBoy__GSuperMeatBoy__00512120`
 */
/* WARNING: Removing unreachable block (ram,0x004ab819) */
/* SMBEditor__SMBEditor() */

void __thiscall SMBEditor__SMBEditor(SMBEditor *self)

{
  allocator *paVar1;
  int *piVar2;
  int iVar3;
  FlashAnimationLibrary *pFVar4;
  
                    /* try { // try from 004ab649 to 004ab70b has its CatchHandler @ 004ab7eb */
  DestroySMBEditorResources(self);
  SMBEditorForms__Destroy();
  if (SMBEditorLayer != (long *)0x0) {
    (**(code **)(*SMBEditorLayer + 8))();
  }
  if (pSelectionIDX != (void *)0x0) {
    operator_delete__(pSelectionIDX);
  }
  if (pCurrSelectionIDX != (void *)0x0) {
    operator_delete__(pCurrSelectionIDX);
  }
  if (pEditorInstance != (long *)0x0) {
    (**(code **)(*pEditorInstance + 8))();
  }
  pEditorInstance = (long *)0x0;
  if (pStartPosition != (long *)0x0) {
    (**(code **)(*pStartPosition + 8))();
  }
  pFVar4 = pEditorLib;
  pStartPosition = (long *)0x0;
  if (pEditorLib != (FlashAnimationLibrary *)0x0) {
    FlashAnimationLibrary__FlashAnimationLibrary(pEditorLib);
    operator_delete(pFVar4);
  }
  pEditorLib = (FlashAnimationLibrary *)0x0;
  TResourceCreator__RemoveResourceCreationFunction
            ((TResourceCreator *)ResourceCreator,CreateSMBEditorResources,self);
  TResourceCreator__RemoveResourceDestroyFunction
            ((TResourceCreator *)ResourceCreator,DestroySMBEditorResources,self);
  paVar1 = (allocator *)(*(long *)(self + 0x100) + -0x18);
  if (paVar1 != (allocator *)&std__string_Rep_S_empty_rep_storage) {
    LOCK();
    piVar2 = (int *)(*(long *)(self + 0x100) + -8);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 < 1) {
      std__string_Rep_M_destroy(paVar1);
    }
  }
  if (*(int *)(self + 0xb8) == -0x5eef3582) {
    *(uint32_t *)(self + 0xb8) = 0;
    free(*(void **)(*(long *)(self + 0xa8) + -8));
    if (*(int *)(self + 0xa0) == 1) {
      free(*(void **)(*(long *)(self + 0xb0) + -8));
    }
    *(uint32_t *)(self + 0xb8) = 0;
    *(uint16_t *)(self + 0x9a) = 0;
    *(uint16_t *)(self + 0x98) = 0;
    *(uint64_t *)(self + 0xa8) = 0;
    *(uint64_t *)(self + 0xb0) = 0;
  }
                    /* try { // try from 004ab734 to 004ab738 has its CatchHandler @ 004ab814 */
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)(self + 0x70));
  TileLevelSetPiece__TileLevelSetPiece__0058d560((TileLevelSetPiece *)(self + 8));
  return;
}

/* ======================================================================
 * SMBEditor__SetMouseOverText  (Ghidra `SetMouseOverText` @ 004ab850)
 * Signature: uint8_t __thiscall SetMouseOverText(SMBEditor * self, char * arg1)
 * Class: SMBEditor
 * Calls: (none)
 * Called by: (none)
 */
/* SMBEditor__SetMouseOverText(char const*) */

void __thiscall SMBEditor__SetMouseOverText(SMBEditor *self,char *arg1)

{
  FlashAnimationLibrary__SetTextFieldText(pEditorLib,"hotkey",arg1);
  return;
}

/* ======================================================================
 * SMBEditor__Activate  (Ghidra `Activate` @ 004ab870)
 * Signature: uint8_t __thiscall Activate(SMBEditor * self)
 * Class: SMBEditor
 * Calls: `CreateMessage`, `GetLocalizedText`, `IsFlashFormActive`, `QuickSave`, `ResetSMBBoss`, `SMBAnimals__Reset`, `SMBPalette__ResetObstacles`, `SetLayerToActive`, `SetLayerToBack`, `SetLayerToBackGeneral1` (+13 more)
 * Called by: `GSuperMeatBoy__Update__00516690`, `ShowEditor`
 */
/* SMBEditor__Activate() */

void __thiscall SMBEditor__Activate(SMBEditor *self)

{
  SMBPalette *this_00;
  long lVar1;
  int iVar2;
  uint32_t local_78 [2];
  wchar_t *local_70;
  wchar_t *local_68;
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
  
  bUploadMode = 0;
  FlashAnimationLibrary__SetTextFieldText(pEditorLib,"f1text","Press F1 to Play");
  UIForm__Activate(SMBEditorForms__SMB_MASTER_FORM);
  lVar1 = SuperMeatBoy;
  this_00 = GSuperMeatBoy__pLevelPalette;
  *(uint32_t *)(*(long *)(SuperMeatBoy + 0x40) + 0x22b0) = 0;
  *(uint32_t *)(*(long *)(lVar1 + 0x38) + 0x11b0) = 0;
  SMBPalette__ResetObstacles(this_00);
  iVar2 = IsFlashFormActive();
  if (iVar2 != 1) {
    SetToTileMode(self);
  }
  RenderLayers__RemoveLayer(SMBEditorLayer);
  RenderLayers__AddLayer(SMBEditorLayer);
  SMBAnimals__Reset(*(SMBAnimals **)(GSuperMeatBoy__pLevelPalette + 0x41e8));
  ResetSMBBoss();
  if (Keyboard != (TKeyboard *)0x0) {
    TKeyboard__AddKeyCallback(Keyboard,3,SetLayerToForeGeneral2,pLayerButtons);
    TKeyboard__AddKeyCallback(Keyboard,2,SetLayerToFore,DAT_0081a888 /* R:1.1900611286186368e-38f */);
    TKeyboard__AddKeyCallback(Keyboard,1,SetLayerToForeGeneral1,DAT_0081a890 /* R:2.2420775429197073e-44f */);
    TKeyboard__AddKeyCallback(Keyboard,4,SetLayerToActive,DAT_0081a898 /* R:2.8306228979361305e-42f */);
    TKeyboard__AddKeyCallback(Keyboard,5,SetLayerToBackGeneral1,DAT_0081a8a0 /* R:1.1900633706961798e-38f */);
    TKeyboard__AddKeyCallback(Keyboard,6,SetLayerToBack,DAT_0081a8a8 /* R:2.2420775429197073e-44f */);
    TKeyboard__AddKeyCallback(Keyboard,7,SetLayerToBackGeneral2,DAT_0081a8b0 /* R:2.8432345841150538e-42f */);
    TKeyboard__AddKeyCallback(Keyboard,8,SetLayerToBackGeneral3,DAT_0081a8b8 /* R:1.1900656127737227e-38f */);
    TKeyboard__AddKeyCallback(Keyboard,0x26,ShowLayerProperties,0);
    TKeyboard__AddKeyCallback(Keyboard,0x2e,ShowLevelProperties,0);
    TKeyboard__AddKeyCallback(Keyboard,0x2d,QuickSave,0);
    TKeyboard__AddKeyCallback(Keyboard,0x2c,ShowObstacleAnimalProps,0);
    TKeyboard__AddKeyCallback(Keyboard,0x29,ShowWayPointProperties,0);
    TKeyboard__AddKeyCallback(Keyboard,0x2a,ShowLightProperties,0);
  }
  if (Activate()::bShowBetaMessage != 1) {
    return;
  }
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
  local_70 = L"SMB Editor Beta";
  local_68 = 
  L"The Super Meat Boy Editor is\na beta and will be probably forever \nFor usage help, hit the \"?\" button below"
  ;
  local_78[0] = 0xe;
  Activate()::bShowBetaMessage = 0;
  local_60 = GetLocalizedText(4);
  local_50 = UserAlertCloseCurrent;
  CreateMessage(local_78);
  return;
}

/* ======================================================================
 * SMBEditor__DeActivate  (Ghidra `DeActivate` @ 004abb60)
 * Signature: uint8_t __stdcall DeActivate(void)
 * Class: SMBEditor
 * Calls: `AutoLockSection__AutoLockSection`, `AutoLockSection__AutoLockSection__005b59d0`, `BloodyTiles__Reset`, `ResetSMBBoss`, `SMBAnimals__Reset`, `SMBCamera__Reset`, `SMBPalette__MarkCollision`, `TKeyboard__AddKeyCallback`, `TMouse__AddButtonCallback`, `TileLevelLightMap__DestroyLight` (+4 more)
 * Called by: `GSuperMeatBoy__Update__00516690`, `PauseGame`, `ShowEditor`
 */
/* SMBEditor__DeActivate() */

void SMBEditor__DeActivate(void)

{
  long lVar1;
  AutoLockSection local_28 [16];
  Light *local_18 [3];
  
  AutoLockSection__AutoLockSection(local_28,(CriticalSection *)editorSection);
                    /* try { // try from 004abb86 to 004abdb0 has its CatchHandler @ 004abe0a */
  FlashAnimationLibrary__SetTextFieldText(pEditorLib,"f1text","Press F1 to Devmode");
  lVar1 = SuperMeatBoy;
  *(uint32_t *)(*(long *)(SuperMeatBoy + 0x38) + 0x11b0) = 1;
  SMBCamera__Reset(*(SMBCamera **)(lVar1 + 0x38));
  UIForm__DeActivate(SMBEditorForms__SMB_MASTER_FORM);
  SMBAnimals__Reset(*(SMBAnimals **)(GSuperMeatBoy__pLevelPalette + 0x41e8));
  ResetSMBBoss();
  lVar1 = SuperMeatBoy;
  *(uint32_t *)(*(long *)(SuperMeatBoy + 0x40) + 0x22b0) = 1;
  TileLevel__BuildTileStreams(*(TileLevel **)(lVar1 + 0x40));
  TileLevel__BuildSetPieceStreams();
  SMBPalette__MarkCollision(GSuperMeatBoy__pLevelPalette,1);
  TileLevelLightMap__RegenerateLights(*(TileLevelLightMap **)(SuperMeatBoy + 0x390));
  if (pSelectedLight == (Light *)0x0) {
    local_18[0] = *(Light **)(SuperMeatBoyEditor + 200);
    if (local_18[0] != (Light *)0x0) {
                    /* try { // try from 004abe00 to 004abe04 has its CatchHandler @ 004abe0a */
      TileLevelLightMap__DestroyLight(*(TileLevelLightMap **)(SuperMeatBoy + 0x390),local_18);
    }
  }
  else {
    local_18[0] = pSelectedLight;
  }
  pSelectedLight = (Light *)0x0;
  BloodyTiles__Reset((BloodyTiles *)(SuperMeatBoy + 0x50));
  if (Keyboard != (TKeyboard *)0x0) {
    TKeyboard__AddKeyCallback(Keyboard,3,0,0);
    TKeyboard__AddKeyCallback(Keyboard,2,0,0);
    TKeyboard__AddKeyCallback(Keyboard,1,0,0);
    TKeyboard__AddKeyCallback(Keyboard,4,0,0);
    TKeyboard__AddKeyCallback(Keyboard,5,0,0);
    TKeyboard__AddKeyCallback(Keyboard,6,0,0);
    TKeyboard__AddKeyCallback(Keyboard,7,0,0);
    TKeyboard__AddKeyCallback(Keyboard,8,0,0);
    TKeyboard__AddKeyCallback(Keyboard,0x26,0,0);
    TKeyboard__AddKeyCallback(Keyboard,0x2d,0,0);
    TKeyboard__AddKeyCallback(Keyboard,0x2c,0,0);
    TKeyboard__AddKeyCallback(Keyboard,0x29,0,0);
    TKeyboard__AddKeyCallback(Keyboard,0x2e,0,0);
    TKeyboard__AddKeyCallback(Keyboard,0x2a,0,0);
  }
  if (Mouse != (TMouse *)0x0) {
    TMouse__AddButtonCallback(Mouse,0,0,0);
    TMouse__AddButtonCallback(Mouse,1,0,0);
  }
  pCurrentSetPieceWayPoint = 0;
  bSetPieceWayPointMode = 0;
  AutoLockSection__AutoLockSection__005b59d0(local_28);
  return;
}

/* ======================================================================
 * SMBEditor__EditSetPieces  (Ghidra `EditSetPieces` @ 004abe30)
 * Signature: uint8_t __thiscall EditSetPieces(SMBEditor * self)
 * Class: SMBEditor
 * Calls: `AdjustSetPieceLayering`, `CancelPastePiecesRendering`, `GetPrevID`, `NudgeSetPiece`, `PasteSelectedPieces`, `TKeyboard__GetExclusiveState`, `TMouse__AddButtonCallback`, `TileLevelSetPiece__TileLevelSetPiece__0058d560`, `TileLevelSetPiece__TileLevelSetPiece__0058d640`, `Vector2__operator_assign` (+4 more)
 * Called by: (none)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SMBEditor__EditSetPieces() */

void __thiscall SMBEditor__EditSetPieces(SMBEditor *self)

{
  uint *puVar1;
  short sVar2;
  uint64_t uVar3;
  TKeyboard *pTVar4;
  TMouse *pTVar5;
  long lVar6;
  SMBEditor SVar7;
  SMBEditor SVar8;
  short sVar9;
  uint uVar10;
  uint uVar11;
  void *pvVar12;
  void *pvVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ushort uVar17;
  int iVar18;
  uint64_t *puVar19;
  short *psVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  long lVar24;
  bool bVar25;
  byte bVar26;
  float fVar27;
  float local_c0;
  float local_bc;
  TileLevelSetPiece local_b8 [8];
  uint64_t local_b0;
  uint64_t local_a8;
  uint64_t local_a0;
  uint16_t local_98;
  uint32_t local_94;
  uint32_t local_90;
  uint32_t local_8c;
  uint32_t local_88;
  Vector2 local_84 [8];
  uint32_t local_7c;
  uint32_t local_78;
  uint32_t local_74;
  uint32_t local_70;
  uint64_t local_6c;
  uint64_t local_64;
  uint64_t local_58;
  uint32_t local_48;
  uint32_t local_44;
  
  bVar26 = 0;
  SVar8 = self[0x29];
  iVar21 = *(int *)(self + 0xc0);
  *(uint32_t *)(self + 0xd4) = 0xffffffff;
  SVar7 = (SMBEditor)((byte)SVar8 & 0xcc);
  self[0x29] = SVar7;
  pTVar5 = Mouse;
  pTVar4 = Keyboard;
  fVar27 = _DAT_005bfba8 /* R:0.10000000149011612f */;
  if (iVar21 == 1) {
    local_c0 = fParalaxZ;
    local_bc = fParalaxScale;
    iVar21 = *(int *)(GSuperMeatBoy__pLevelPalette + 0x54);
    if (*(int *)(Keyboard + 0x334) != 2) goto LAB_004abebb;
LAB_004ac018:
    *(uint32_t *)(self + 0xd4) = 2;
    if (*(float *)(pTVar5 + 8) <= 0.0) {
      if (*(float *)(pTVar5 + 8) < 0.0) {
        local_c0 = local_c0 - DAT_005c48a4 /* R:50.0f */;
      }
    }
    else {
      local_c0 = local_c0 + DAT_005c48a4 /* R:50.0f */;
    }
  }
  else {
    if (iVar21 == 4) {
      local_c0 = fAnimationZ;
      iVar21 = *(int *)(GSuperMeatBoy__pLevelPalette + 0x58);
      local_bc = fAnimationScale;
    }
    else if (iVar21 == 5) {
      local_c0 = fObstacleZ;
      iVar21 = *(int *)(GSuperMeatBoy__pLevelPalette + 0x5c);
      local_bc = fObstacleScale;
    }
    else {
      iVar21 = *(int *)(GSuperMeatBoy__pLevelPalette + 0x4c);
      local_bc = fPieceScale;
      local_c0 = fPieceZ;
      fVar27 = _DAT_005bff44 /* R:5.0f */;
    }
    if (*(int *)(Keyboard + 0x334) == 2) goto LAB_004ac018;
LAB_004abebb:
    if (*(int *)(Keyboard + 0x544) == 2) goto LAB_004ac018;
    if ((*(int *)(Keyboard + 0x310) == 2) || (*(int *)(Keyboard + 0x514) == 2)) {
      *(uint32_t *)(self + 0xd4) = 3;
      if (*(float *)(pTVar5 + 8) <= 0.0) {
        if (*(float *)(pTVar5 + 8) < 0.0) {
          local_bc = local_bc - fVar27;
        }
      }
      else {
        local_bc = fVar27 + local_bc;
      }
    }
    else if (*(int *)(Keyboard + 0x598) == 2) {
      *(uint32_t *)(self + 0xd4) = 1;
      if (*(float *)(pTVar5 + 8) <= 0.0) {
        if (*(float *)(pTVar5 + 8) < 0.0) {
          *(float *)(self + 0x44) = *(float *)(self + 0x44) - DAT_005c48a8 /* R:0.15707963705062866f */;
        }
      }
      else {
        *(float *)(self + 0x44) = DAT_005c48a8 /* R:0.15707963705062866f */ + *(float *)(self + 0x44);
      }
    }
    else if (*(int *)(Keyboard + 0x5d4) == 2) {
      *(uint32_t *)(self + 0xd4) = 0;
      if (*(float *)(pTVar5 + 8) <= 0.0) {
        if (*(float *)(pTVar5 + 8) < 0.0) {
          self[0x29] = (SMBEditor)((byte)SVar8 & 0xc0 | (char)SVar7 + 0xcU & 0xc);
        }
      }
      else {
        self[0x29] = (SMBEditor)((byte)SVar8 & 0xc0 | (char)SVar7 + 4U & 0xc);
      }
    }
    else if (bSetPieceWayPointMode == 1) {
      if (pCurrentSetPieceWayPoint != 0) {
        if (*(float *)(Mouse + 8) <= 0.0) {
          if (*(float *)(Mouse + 8) < 0.0) {
            *(float *)(pCurrentSetPieceWayPoint + 0x1c) =
                 *(float *)(pCurrentSetPieceWayPoint + 0x1c) - _DAT_005bfba8 /* R:0.10000000149011612f */;
          }
        }
        else {
          *(float *)(pCurrentSetPieceWayPoint + 0x1c) =
               _DAT_005bfba8 /* R:0.10000000149011612f */ + *(float *)(pCurrentSetPieceWayPoint + 0x1c);
        }
      }
    }
    else {
      uVar17 = *(ushort *)(self + 0x98);
      if (uVar17 == 0) {
        if (*(float *)(Mouse + 8) <= 0.0) {
          if (0.0 <= *(float *)(Mouse + 8)) goto LAB_004ac04e;
          SVar8 = (SMBEditor)GetPrevID((uint)(byte)self[0x28],iVar21);
        }
        else {
          SVar8 = self[0x28];
          if (*(int *)(SuperMeatBoyEditor + 0xc0) == 5) {
            if (0 < iNumObjectArrayEntries) {
              lVar14 = 0;
              iVar21 = 1;
              if ((uint)(byte)SVar8 != *(uint *)(pCurrentObjectArray + 0x10)) {
                lVar6 = 1;
                lVar24 = pCurrentObjectArray;
                do {
                  lVar14 = lVar6;
                  if (iNumObjectArrayEntries <= (int)lVar14) {
                    lVar14 = 0;
                    iVar21 = 1;
                    goto LAB_004acc21;
                  }
                  puVar1 = (uint *)(lVar24 + 0x28);
                  lVar24 = lVar24 + 0x18;
                  lVar6 = lVar14 + 1;
                } while ((uint)(byte)SVar8 != *puVar1);
                iVar21 = (int)lVar14 + 1;
              }
LAB_004acc21:
              if (iVar21 < iNumObjectArrayEntries) {
                SVar8 = *(SMBEditor *)(pCurrentObjectArray + 0x10 + (lVar14 * 3 + 3) * 8);
                goto LAB_004acb2e;
              }
            }
            SVar8 = *(SMBEditor *)(pCurrentObjectArray + 0x10);
          }
          else {
            iVar22 = 0;
            if ((int)((byte)SVar8 + 1) < iVar21) {
              iVar22 = (byte)SVar8 + 1;
            }
            SVar8 = SUB41(iVar22,0);
          }
        }
LAB_004acb2e:
        self[0x28] = SVar8;
        *(uint32_t *)(self + 0x48) = 0;
      }
      else {
        uVar23 = (uint)uVar17;
        if (uVar17 != 0) {
          uVar10 = 0;
          iVar21 = iVar21 + -1;
          do {
            if (0.0 < *(float *)(pTVar5 + 8)) {
              lVar14 = *(long *)(*(long *)(self + 0xa8) + (ulong)(uVar10 & 0xffff) * 8);
              iVar18 = *(byte *)(lVar14 + 0x20) + 1;
              iVar22 = 0;
              if (iVar18 <= iVar21) {
                iVar22 = iVar18;
              }
              *(char *)(lVar14 + 0x20) = (char)iVar22;
              *(uint32_t *)
               (*(long *)(*(long *)(self + 0xa8) + (ulong)(uVar10 & 0xffff) * 8) + 0x40) = 0;
              uVar23 = (uint)*(ushort *)(self + 0x98);
            }
            else if (*(float *)(pTVar5 + 8) < 0.0) {
              lVar14 = *(long *)(*(long *)(self + 0xa8) + (ulong)(uVar10 & 0xffff) * 8);
              iVar18 = *(byte *)(lVar14 + 0x20) - 1;
              iVar22 = 0;
              if ((iVar18 <= iVar21) && (iVar22 = iVar18, iVar18 == -1)) {
                iVar22 = iVar21;
              }
              *(char *)(lVar14 + 0x20) = (char)iVar22;
              *(uint32_t *)
               (*(long *)(*(long *)(self + 0xa8) + (ulong)(uVar10 & 0xffff) * 8) + 0x40) = 0;
              uVar23 = (uint)*(ushort *)(self + 0x98);
            }
            uVar10 = uVar10 + 1;
          } while ((int)uVar10 < (int)uVar23);
        }
      }
    }
  }
LAB_004ac04e:
  iVar21 = TKeyboard__GetExclusiveState(pTVar4,0x40);
  if (((iVar21 == 2) || (iVar21 = TKeyboard__GetExclusiveState(Keyboard,0x6b), iVar21 == 2)) &&
     (iVar21 = TKeyboard__GetExclusiveState(Keyboard,0x15), iVar21 == 1)) {
    pCopiedSetPieces._40_2_ = 0;
    if ((pCopiedSetPieces._48_4_ == 1) && (pCopiedSetPieces._42_2_ != 0)) {
      uVar17 = pCopiedSetPieces._42_2_ - 1;
      lVar14 = 0;
      do {
        *(uint16_t *)(pCopiedSetPieces._64_8_ + lVar14) = 0xffff;
        lVar14 = lVar14 + 2;
      } while (lVar14 != (ulong)uVar17 * 2 + 2);
    }
    if (*(short *)(self + 0x98) != 0) {
      uVar23 = 0;
      do {
        TileLevelSetPiece__TileLevelSetPiece__0058d640
                  (local_b8,*(TileLevelSetPiece **)
                             (*(long *)(self + 0xa8) + (ulong)(uVar23 & 0xffff) * 8));
        uVar3 = pCopiedSetPieces._56_8_;
        if (pCopiedSetPieces._72_4_ == -0x5eef3582) {
          uVar10 = (uint)(ushort)pCopiedSetPieces._40_2_;
          if ((ushort)pCopiedSetPieces._42_2_ <= (ushort)pCopiedSetPieces._40_2_) {
            pCopiedSetPieces._42_2_ = pCopiedSetPieces._42_2_ + pCopiedSetPieces._52_2_;
            uVar15 = (ulong)pCopiedSetPieces[0x2c];
            pvVar13 = (void *)0x0;
            uVar16 = (ulong)(ushort)pCopiedSetPieces._42_2_ * 0x68;
            pvVar12 = malloc(uVar15 + 0x10 + uVar16);
            if (pvVar12 != (void *)0x0) {
              pvVar13 = (void *)((long)pvVar12 + 0x10U +
                                (uVar15 - ((long)pvVar12 + 0x10U) % uVar15) % uVar15);
              *(ulong *)((long)pvVar13 + -0x10) = uVar16;
              *(void **)((long)pvVar13 + -8) = pvVar12;
              if (uVar3 != 0) {
                uVar15 = *(ulong *)(uVar3 + -0x10);
                if (uVar16 <= *(ulong *)(uVar3 + -0x10)) {
                  uVar15 = uVar16;
                }
                memcpy(pvVar13,(void *)uVar3,uVar15);
                free(*(void **)(uVar3 + -8));
              }
            }
            uVar3 = pCopiedSetPieces._64_8_;
            uVar17 = pCopiedSetPieces._42_2_;
            pCopiedSetPieces._56_8_ = pvVar13;
            if (pCopiedSetPieces._64_8_ != 0) {
              uVar15 = (ulong)pCopiedSetPieces[0x2c];
              psVar20 = (short *)0x0;
              uVar16 = (ulong)(ushort)pCopiedSetPieces._42_2_ * 2;
              pvVar13 = malloc(uVar15 + 0x10 + uVar16);
              if (pvVar13 != (void *)0x0) {
                psVar20 = (short *)((long)pvVar13 + 0x10U +
                                   (uVar15 - ((long)pvVar13 + 0x10U) % uVar15) % uVar15);
                *(ulong *)(psVar20 + -8) = uVar16;
                *(void **)(psVar20 + -4) = pvVar13;
                uVar15 = *(ulong *)(uVar3 + -0x10);
                if (uVar16 <= *(ulong *)(uVar3 + -0x10)) {
                  uVar15 = uVar16;
                }
                memcpy(psVar20,(void *)uVar3,uVar15);
                free(*(void **)(uVar3 + -8));
                uVar17 = pCopiedSetPieces._42_2_;
              }
              uVar10 = (uint)(ushort)pCopiedSetPieces._40_2_;
              pCopiedSetPieces._64_8_ = psVar20;
              if (uVar17 <= (ushort)pCopiedSetPieces._40_2_) goto joined_r0x004ac4a0;
              do {
                uVar11 = uVar10 & 0xffff;
                uVar10 = uVar10 + 1;
                *(uint16_t *)(pCopiedSetPieces._64_8_ + (ulong)uVar11 * 2) = 0xffff;
              } while ((ushort)uVar10 < uVar17);
            }
            uVar10 = (uint)(ushort)pCopiedSetPieces._40_2_;
          }
        }
        else {
          uVar16 = (ulong)pCopiedSetPieces[0x2c];
          pCopiedSetPieces._48_4_ = 0;
          pvVar13 = malloc(uVar16 + 0x218);
          puVar19 = (uint64_t *)0x0;
          if (pvVar13 != (void *)0x0) {
            puVar19 = (uint64_t *)
                      ((uVar16 - ((long)pvVar13 + 0x10U) % uVar16) % uVar16 + (long)pvVar13 + 0x10U)
            ;
            puVar19[-2] = 0x208;
            puVar19[-1] = pvVar13;
          }
          bVar25 = ((ulong)puVar19 & 1) != 0;
          uVar16 = 0x208;
          pCopiedSetPieces._56_8_ = puVar19;
          if (bVar25) {
            *(uint8_t *)puVar19 = 0;
            puVar19 = (uint64_t *)((long)puVar19 + 1);
            uVar16 = 0x207;
          }
          uVar10 = (uint)uVar16;
          if (((ulong)puVar19 & 2) != 0) {
            *(uint16_t *)puVar19 = 0;
            puVar19 = (uint64_t *)((long)puVar19 + 2);
            uVar10 = uVar10 - 2;
            uVar16 = (ulong)uVar10;
          }
          if (((ulong)puVar19 & 4) != 0) {
            *(uint32_t *)puVar19 = 0;
            uVar16 = (ulong)(uVar10 - 4);
            puVar19 = (uint64_t *)((long)puVar19 + 4);
          }
          for (uVar15 = uVar16 >> 3; uVar15 != 0; uVar15 = uVar15 - 1) {
            *puVar19 = 0;
            puVar19 = puVar19 + (ulong)bVar26 * -2 + 1;
          }
          if ((uVar16 & 4) != 0) {
            *(uint32_t *)puVar19 = 0;
            puVar19 = (uint64_t *)((long)puVar19 + 4);
          }
          if ((uVar16 & 2) != 0) {
            *(uint16_t *)puVar19 = 0;
            puVar19 = (uint64_t *)((long)puVar19 + 2);
          }
          if (bVar25) {
            *(uint8_t *)puVar19 = 0;
          }
          pCopiedSetPieces._40_2_ = 0;
          pCopiedSetPieces._42_2_ = 5;
          uVar10 = 0;
          pCopiedSetPieces._72_4_ = 0xa110ca7e;
          pCopiedSetPieces._52_2_ = 5;
        }
joined_r0x004ac4a0:
        if ((pCopiedSetPieces._48_4_ == 1) && (pCopiedSetPieces._42_2_ != 0)) {
          sVar9 = 1;
          sVar2 = *(short *)pCopiedSetPieces._64_8_;
          psVar20 = (short *)pCopiedSetPieces._64_8_;
          while (sVar2 != -1) {
            psVar20 = psVar20 + 1;
            if (sVar9 == pCopiedSetPieces._42_2_) goto LAB_004ac4a6;
            sVar9 = sVar9 + 1;
            sVar2 = *psVar20;
          }
          *psVar20 = (short)uVar10;
          uVar10 = (uint)(ushort)pCopiedSetPieces._40_2_;
        }
LAB_004ac4a6:
        lVar14 = pCopiedSetPieces._56_8_ + (ulong)uVar10 * 0x68;
        *(uint64_t *)(lVar14 + 8) = local_b0;
        *(uint64_t *)(lVar14 + 0x10) = local_a8;
        *(uint64_t *)(lVar14 + 0x18) = local_a0;
        *(uint16_t *)(lVar14 + 0x20) = local_98;
        *(uint32_t *)(lVar14 + 0x24) = local_94;
        *(uint32_t *)(lVar14 + 0x28) = local_90;
        *(uint32_t *)(lVar14 + 0x2c) = local_8c;
        *(uint32_t *)(lVar14 + 0x30) = local_88;
                    /* try { // try from 004ac503 to 004ac507 has its CatchHandler @ 004acc42 */
        Vector2__operator_assign((Vector2 *)(lVar14 + 0x34),local_84);
        pCopiedSetPieces._40_2_ = pCopiedSetPieces._40_2_ + 1;
        uVar23 = uVar23 + 1;
        *(uint32_t *)(lVar14 + 0x3c) = local_7c;
        *(uint32_t *)(lVar14 + 0x40) = local_78;
        *(uint32_t *)(lVar14 + 0x44) = local_74;
        *(uint32_t *)(lVar14 + 0x48) = local_70;
        *(uint64_t *)(lVar14 + 0x4c) = local_6c;
        *(uint64_t *)(lVar14 + 0x54) = local_64;
        *(uint64_t *)(lVar14 + 0x60) = local_58;
        TileLevelSetPiece__TileLevelSetPiece__0058d560(local_b8);
      } while ((int)uVar23 < (int)(uint)*(ushort *)(self + 0x98));
    }
  }
  iVar21 = TKeyboard__GetExclusiveState(Keyboard,0x40);
  if (((iVar21 == 2) || (iVar21 = TKeyboard__GetExclusiveState(Keyboard,0x6b), iVar21 == 2)) &&
     (iVar21 = TKeyboard__GetExclusiveState(Keyboard,0x80), iVar21 == 1)) {
    bRenderCopiedElements = 1;
    local_48 = 0;
    local_44 = 0;
    Vector2__operator_assign((Vector2 *)&vXYCOM,(Vector2 *)&local_48);
    uVar23 = (uint)(ushort)pCopiedSetPieces._40_2_;
    if (uVar23 != 0) {
      uVar16 = 0;
      do {
        uVar15 = uVar16 & 0xffff;
        uVar10 = (int)uVar16 + 1;
        uVar16 = (ulong)uVar10;
        lVar14 = pCopiedSetPieces._56_8_ + uVar15 * 0x68;
        vXYCOM = vXYCOM + *(float *)(lVar14 + 0x24);
        DAT_00819f44 /* R:0.0f */ = DAT_00819f44 /* R:0.0f */ + *(float *)(lVar14 + 0x28);
      } while ((int)uVar10 < (int)uVar23);
    }
    if (pCopiedSetPieces._40_2_ != 0) {
      Vector2__operator_div_assign__005be2c0((Vector2 *)&vXYCOM,(float)uVar23);
    }
    TMouse__AddButtonCallback(Mouse,0,PasteSelectedPieces,0);
    TMouse__AddButtonCallback(Mouse,1,CancelPastePiecesRendering,0);
    iVar21 = *(int *)(self + 0xc0);
    iVar22 = iVar21 + -2;
    if (iVar22 == 0) {
LAB_004ac2ae:
      lastSetPiece._8_8_ = *(uint64_t *)(self + 0x10);
      lastSetPiece._16_8_ = *(uint64_t *)(self + 0x18);
      lastSetPiece._24_8_ = *(uint64_t *)(self + 0x20);
      lastSetPiece._32_2_ = *(uint16_t *)(self + 0x28);
      lastSetPiece._36_4_ = *(uint32_t *)(self + 0x2c);
      lastSetPiece._40_4_ = *(uint32_t *)(self + 0x30);
      lastSetPiece._44_4_ = *(uint32_t *)(self + 0x34);
      lastSetPiece._48_4_ = *(uint32_t *)(self + 0x38);
      Vector2__operator_assign((Vector2 *)(lastSetPiece + 0x34),(Vector2 *)(self + 0x3c));
      lastSetPiece._60_4_ = *(uint32_t *)(self + 0x44);
      fPieceScale = local_bc;
      fPieceZ = local_c0;
      lastSetPiece._64_4_ = *(uint32_t *)(self + 0x48);
      lastSetPiece._68_4_ = *(uint32_t *)(self + 0x4c);
      lastSetPiece._72_4_ = *(uint32_t *)(self + 0x50);
      lastSetPiece._76_8_ = *(uint64_t *)(self + 0x54);
      lastSetPiece._84_8_ = *(uint64_t *)(self + 0x5c);
      lastSetPiece._96_8_ = *(uint64_t *)(self + 0x68);
      goto LAB_004ac198;
    }
  }
  else {
    iVar21 = *(int *)(self + 0xc0);
    iVar22 = iVar21 + -2;
    if (iVar21 == 2) goto LAB_004ac2ae;
  }
  if (SBORROW4(iVar21,2) == iVar22 < 0) {
    if (iVar21 == 4) {
      lastAnimation._8_8_ = *(uint64_t *)(self + 0x10);
      self[0x29] = (SMBEditor)((byte)self[0x29] | 0x10);
      lastAnimation._16_8_ = *(uint64_t *)(self + 0x18);
      lastAnimation._24_8_ = *(uint64_t *)(self + 0x20);
      lastAnimation._32_2_ = *(uint16_t *)(self + 0x28);
      lastAnimation._36_4_ = *(uint32_t *)(self + 0x2c);
      lastAnimation._40_4_ = *(uint32_t *)(self + 0x30);
      lastAnimation._44_4_ = *(uint32_t *)(self + 0x34);
      lastAnimation._48_4_ = *(uint32_t *)(self + 0x38);
      Vector2__operator_assign((Vector2 *)(lastAnimation + 0x34),(Vector2 *)(self + 0x3c));
      lastAnimation._60_4_ = *(uint32_t *)(self + 0x44);
      fAnimationScale = local_bc;
      fAnimationZ = local_c0;
      lastAnimation._64_4_ = *(uint32_t *)(self + 0x48);
      lastAnimation._68_4_ = *(uint32_t *)(self + 0x4c);
      lastAnimation._72_4_ = *(uint32_t *)(self + 0x50);
      lastAnimation._76_8_ = *(uint64_t *)(self + 0x54);
      lastAnimation._84_8_ = *(uint64_t *)(self + 0x5c);
      lastAnimation._96_8_ = *(uint64_t *)(self + 0x68);
    }
    else if (iVar21 == 5) {
      lastObstacle._8_8_ = *(uint64_t *)(self + 0x10);
      self[0x29] = (SMBEditor)((byte)self[0x29] | 0x30);
      lastObstacle._16_8_ = *(uint64_t *)(self + 0x18);
      lastObstacle._24_8_ = *(uint64_t *)(self + 0x20);
      lastObstacle._32_2_ = *(uint16_t *)(self + 0x28);
      lastObstacle._36_4_ = *(uint32_t *)(self + 0x2c);
      lastObstacle._40_4_ = *(uint32_t *)(self + 0x30);
      lastObstacle._44_4_ = *(uint32_t *)(self + 0x34);
      lastObstacle._48_4_ = *(uint32_t *)(self + 0x38);
      Vector2__operator_assign((Vector2 *)(lastObstacle + 0x34),(Vector2 *)(self + 0x3c));
      lastObstacle._60_4_ = *(uint32_t *)(self + 0x44);
      fObstacleScale = local_bc;
      fObstacleZ = local_c0;
      lastObstacle._64_4_ = *(uint32_t *)(self + 0x48);
      lastObstacle._68_4_ = *(uint32_t *)(self + 0x4c);
      lastObstacle._72_4_ = *(uint32_t *)(self + 0x50);
      lastObstacle._76_8_ = *(uint64_t *)(self + 0x54);
      lastObstacle._84_8_ = *(uint64_t *)(self + 0x5c);
      lastObstacle._96_8_ = *(uint64_t *)(self + 0x68);
    }
  }
  else if (iVar21 == 1) {
    lastParalax._8_8_ = *(uint64_t *)(self + 0x10);
    self[0x29] = (SMBEditor)((byte)self[0x29] | 1);
    lastParalax._16_8_ = *(uint64_t *)(self + 0x18);
    lastParalax._24_8_ = *(uint64_t *)(self + 0x20);
    lastParalax._32_2_ = *(uint16_t *)(self + 0x28);
    lastParalax._36_4_ = *(uint32_t *)(self + 0x2c);
    lastParalax._40_4_ = *(uint32_t *)(self + 0x30);
    lastParalax._44_4_ = *(uint32_t *)(self + 0x34);
    lastParalax._48_4_ = *(uint32_t *)(self + 0x38);
    Vector2__operator_assign((Vector2 *)(lastParalax + 0x34),(Vector2 *)(self + 0x3c));
    lastParalax._60_4_ = *(uint32_t *)(self + 0x44);
    fParalaxScale = local_bc;
    lastParalax._64_4_ = *(uint32_t *)(self + 0x48);
    fParalaxZ = local_c0;
    lastParalax._68_4_ = *(uint32_t *)(self + 0x4c);
    lastParalax._72_4_ = *(uint32_t *)(self + 0x50);
    lastParalax._76_8_ = *(uint64_t *)(self + 0x54);
    lastParalax._84_8_ = *(uint64_t *)(self + 0x5c);
    lastParalax._96_8_ = *(uint64_t *)(self + 0x68);
  }
LAB_004ac198:
  if (*(short *)(self + 0x98) != 0) {
    NudgeSetPiece();
    AdjustSetPieceLayering();
  }
  return;
}

/* ======================================================================
 * SMBEditor__SetLevelSize  (Ghidra `SetLevelSize` @ 004acf40)
 * Signature: uint8_t __thiscall SetLevelSize(SMBEditor * self, ushort arg1, ushort arg2)
 * Class: SMBEditor
 * Calls: `memset`
 * Called by: `EditorForm_LoadFormOk`
 */
/* SMBEditor__SetLevelSize(unsigned short, unsigned short) */

void __thiscall SMBEditor__SetLevelSize(SMBEditor *self,ushort arg1,ushort arg2)

{
  long lVar1;
  void *__s;
  
  if (pSelectionIDX != (void *)0x0) {
    operator_delete__(pSelectionIDX);
    if (pCurrSelectionIDX != (void *)0x0) {
      operator_delete__(pCurrSelectionIDX);
    }
  }
  lVar1 = (long)((float)arg1 * DAT_005be6e8 /* R:0.25f */);
  if ((float)lVar1 < (float)arg1 * DAT_005be6e8 /* R:0.25f */) {
    lVar1 = lVar1 + 1;
  }
  iNumIDX = (uint)arg2 * (int)lVar1;
  pSelectionIDX = operator_new__((long)iNumIDX * 4);
  __s = operator_new__((long)iNumIDX << 2);
  pCurrSelectionIDX = __s;
  memset(pSelectionIDX,0,(long)iNumIDX << 2);
  memset(__s,0,(long)iNumIDX << 2);
  return;
}

/* ======================================================================
 * SMBEditor__SMBEditor__004ad010  (Ghidra `SMBEditor` @ 004ad010)
 * Signature: uint8_t __thiscall SMBEditor(SMBEditor * self)
 * Class: SMBEditor
 * Calls: `AddEditorButton`, `CreateSMBEditorResources`, `CriticalSection__CriticalSection`, `DestroySMBEditorResources`, `EditorButton_MouseOver`, `EditorButton_SetAnimalMode`, `EditorButton_SetAnimationMode`, `EditorButton_SetCameraMode`, `EditorButton_SetLayerToActive_Click`, `EditorButton_SetLayerToBackGeneral1_Click` (+61 more)
 * Called by: `GSuperMeatBoy__Initialize__00516f60`
 */
/* WARNING: Removing unreachable block (ram,0x004af582) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SMBEditor__SMBEditor__004ad010() */

void __thiscall SMBEditor__SMBEditor__004ad010(SMBEditor *self)

{
  EditorForm *pEVar1;
  RenderLayer *this_00;
  char *pcVar2;
  FlashAnimationLibrary *pFVar3;
  uint64_t uVar4;
  long lVar5;
  EditorForm *this_01;
  char *pcVar6;
  uint64_t *puVar7;
  size_t sVar8;
  void *pvVar9;
  uint64_t uVar10;
  EditorFormChapterUpload *this_02;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  int iVar14;
  EditorForm *pEVar15;
  long *plVar16;
  int *piVar17;
  int iVar18;
  EditorForm *pEVar19;
  long *plVar20;
  bool bVar21;
  byte bVar22;
  FlashAnimationLibrary *local_428;
  char *local_420;
  char *local_418;
  char *local_410;
  char *local_408;
  char *local_400;
  uint64_t local_3f8;
  uint64_t local_3f0;
  uint8_t *local_3e8;
  char *local_3e0;
  uint64_t local_3d8;
  FlashAnimationLibrary *local_3c8;
  char *local_3c0;
  uint64_t local_3b8;
  uint64_t local_3b0;
  uint64_t local_3a8;
  uint64_t local_3a0;
  uint64_t local_398;
  uint64_t local_390;
  char *local_388;
  char *local_380;
  uint64_t local_378;
  FlashAnimationLibrary *local_368;
  char *local_360;
  char *local_358;
  char *local_350;
  char *local_348;
  uint64_t local_340;
  uint64_t local_338;
  uint64_t local_330;
  char *local_328;
  char *local_320;
  uint64_t local_318;
  FlashAnimationLibrary *local_308;
  char *local_300;
  char *local_2f8;
  uint8_t *local_2f0;
  char *local_2e8;
  uint8_t *local_2e0;
  char *local_2d8;
  char *local_2d0;
  char *local_2c8;
  char *local_2c0;
  char *local_2b8;
  FlashAnimationLibrary *local_2a8;
  char *local_2a0;
  char *local_298;
  uint64_t local_290;
  uint64_t local_288;
  uint64_t local_280;
  uint64_t local_278;
  uint64_t local_270;
  uint8_t *local_268;
  char *local_260;
  uint64_t local_258;
  FlashAnimationLibrary *local_248;
  char *local_240;
  char *local_238;
  uint8_t *local_230;
  char *local_228;
  uint8_t *local_220;
  uint64_t local_218;
  uint64_t local_210;
  uint8_t *local_208;
  char *local_200;
  uint64_t local_1f8;
  FlashAnimationLibrary *local_1e8;
  char *local_1e0;
  char *local_1d8;
  char *local_1d0;
  uint8_t *local_1c8;
  uint64_t local_1c0;
  uint64_t local_1b8;
  uint64_t local_1b0;
  uint8_t *local_1a8;
  char *local_1a0;
  uint64_t local_198;
  FlashAnimationLibrary *local_188;
  char *local_180;
  char *local_178;
  char *local_170;
  uint64_t local_168;
  uint64_t local_160;
  uint64_t local_158;
  uint64_t local_150;
  uint8_t *local_148;
  char *local_140;
  uint64_t local_138;
  FlashAnimationLibrary *local_128;
  char *local_120;
  char *local_118;
  char *local_110;
  char *local_108;
  char *local_100;
  char *local_f8;
  char *local_f0;
  uint8_t *local_e8;
  char *local_e0;
  uint64_t local_d8;
  FlashAnimationLibrary *local_c8;
  char *local_c0;
  char *local_b8;
  char *local_b0;
  char *local_a8;
  char *local_a0;
  char *local_98;
  char *local_90;
  uint8_t *local_88;
  char *local_80;
  char *local_78;
  char local_68 [32];
  uint8_t *local_48 [3];
  
  bVar22 = 0;
  *(uint32_t *)self = 0;
  TileLevelSetPiece__TileLevelSetPiece__0058d640((TileLevelSetPiece *)(self + 8));
                    /* try { // try from 004ad051 to 004ad055 has its CatchHandler @ 004af547 */
  CriticalSection__CriticalSection((CriticalSection *)(self + 0x70));
  *(uint16_t *)(self + 0x9a) = 0;
  *(uint16_t *)(self + 0x98) = 0;
  *(uint16_t *)(self + 0xa4) = 1;
  *(uint64_t *)(self + 0xa8) = 0;
  *(uint64_t *)(self + 0xb0) = 0;
  *(uint32_t *)(self + 0xb8) = 0;
  self[0x9c] = (SMBEditor)0x4;
  *(uint32_t *)(self + 0xa0) = 0;
  *(uint64_t *)(self + 200) = 0;
  *(uint32_t *)(self + 0xd4) = 0xffffffff;
  *(uint32_t *)(self + 0xf8) = 0;
  *(uint8_t **)(self + 0x100) = &DAT_008184c8 /* R:0.00016803004837129265f */;
  *(uint64_t *)(self + 0x108) = 0;
  *(uint32_t *)(self + 0x110) = 0;
  SuperMeatBoyEditor = self;
                    /* try { // try from 004ad0f2 to 004ad0f6 has its CatchHandler @ 004af4c9 */
  this_00 = operator_new(0x418);
                    /* try { // try from 004ad0fd to 004ad101 has its CatchHandler @ 004af4b9 */
  RenderLayer__RenderLayer__00597d50(this_00);
  *(uint8_t ***)this_00 = &PTR__SMBEditorRenderLayer_005c4450;
  TileLevel__fnLevelSave = SMBLevelSave;
  TileLevel__fnLevelLoad = SMBLevelLoad;
  TileLevel__fnLevelVerify = SMBLevelVerify;
  SMBEditorLayer = this_00;
  *(uint32_t *)(self + 0xd0) = 0;
                    /* try { // try from 004ad140 to 004ad168 has its CatchHandler @ 004af4c9 */
  SMBEditorForms__Initialize();
  SetLevelSize(self,0x20,0x20);
  *self = (SMBEditor)0x1;
  CreateSMBEditorResources(self);
  local_48[0] = &DAT_008184c8 /* R:0.00016803004837129265f */;
                    /* try { // try from 004ad182 to 004ad193 has its CatchHandler @ 004af4b7 */
  pcVar2 = (char *)FormatResourcePath("/Menus/editor.am",local_48);
  pFVar3 = operator_new(0xb0);
                    /* try { // try from 004ad19d to 004ad1a1 has its CatchHandler @ 004af4a7 */
  FlashAnimationLibrary__FlashAnimationLibrary__00576680(pFVar3,pcVar2);
  pEditorLib = pFVar3;
                    /* try { // try from 004ad1b1 to 004ada60 has its CatchHandler @ 004af4b7 */
  pStartPosition = FlashAnimationLibrary__GetMovieClip__005731d0(pFVar3,"startpoint");
  pEditorInstance = FlashAnimationLibrary__GetMovieClip__005731d0(pEditorLib,"editor");
  pF1Text = FlashAnimationLibrary__GetMovieClip__005731d0(pEditorLib,"f1");
  FlashAnimationLibrary__SetTextFieldText((char *)pEditorLib,"f1text","Press F1 For The Editor");
  FlashAnimationLibrary__SetTextFieldText((char *)pEditorLib,"chapter","Create CH.");
  SetEditorTextFields(pEditorLib);
  uVar4 = FlashAnimationLibrary__GetLibraryEntry(pEditorLib,*(int *)(pEditorInstance + 0x20));
  lVar5 = AddEditorButton(uVar4,pEditorLib,&DAT_005c2e70 /* R:1.0964810158725612e-38f */,1,0);
  pFVar3 = pEditorLib;
  *(code **)(lVar5 + 0x28) = EditorForm_NewFormOpen;
  *(uint64_t *)(lVar5 + 0x20) = 0;
  *(code **)(lVar5 + 0x18) = EditorButton_MouseOver;
  *(uint64_t *)(lVar5 + 0x40) = 0;
  *(uint64_t *)(lVar5 + 0x38) = 0;
  *(char **)(lVar5 + 0x30) = "Hotkey: \nCTRL + N";
  lVar5 = AddEditorButton(uVar4,pFVar3,&DAT_005c0945 /* R:"save" */,1,0);
  pFVar3 = pEditorLib;
  *(code **)(lVar5 + 0x28) = EditorForm_SaveFormOpen;
  *(uint64_t *)(lVar5 + 0x20) = 0;
  *(code **)(lVar5 + 0x18) = EditorButton_MouseOver;
  *(uint64_t *)(lVar5 + 0x40) = 0;
  *(uint64_t *)(lVar5 + 0x38) = 0;
  *(char **)(lVar5 + 0x30) = "Hotkey: \nCTRL + S";
  lVar5 = AddEditorButton(uVar4,pFVar3,"load",1,0);
  pFVar3 = pEditorLib;
  *(code **)(lVar5 + 0x28) = EditorForm_LoadFormOpen;
  *(uint64_t *)(lVar5 + 0x20) = 0;
  *(code **)(lVar5 + 0x18) = EditorButton_MouseOver;
  *(uint64_t *)(lVar5 + 0x40) = 0;
  *(uint64_t *)(lVar5 + 0x38) = 0;
  *(char **)(lVar5 + 0x30) = "Hotkey: \nCTRL + L";
  lVar5 = AddEditorButton(uVar4,pFVar3,"upload",1,0);
  pFVar3 = pEditorLib;
  *(code **)(lVar5 + 0x28) = EditorForm_UploadFormOpen;
  *(uint64_t *)(lVar5 + 0x20) = 0;
  *(uint64_t *)(lVar5 + 0x18) = 0;
  *(uint64_t *)(lVar5 + 0x40) = 0;
  *(uint64_t *)(lVar5 + 0x38) = 0;
  *(uint64_t *)(lVar5 + 0x30) = 0;
  lVar5 = AddEditorButton(uVar4,pFVar3,"chapter",1,0);
  pFVar3 = pEditorLib;
  *(code **)(lVar5 + 0x28) = EditorForm_ChapterUploadFormOpen;
  *(uint64_t *)(lVar5 + 0x20) = 0;
  *(uint64_t *)(lVar5 + 0x18) = 0;
  *(uint64_t *)(lVar5 + 0x40) = 0;
  *(uint64_t *)(lVar5 + 0x38) = 0;
  *(uint64_t *)(lVar5 + 0x30) = 0;
  lVar5 = AddEditorButton(uVar4,pFVar3,"charicon1",1,0);
  pFVar3 = pEditorLib;
  *(code **)(lVar5 + 0x28) = EditorForm_CharFormOpen;
  *(uint64_t *)(lVar5 + 0x20) = 0;
  *(uint64_t *)(lVar5 + 0x18) = 0;
  *(uint64_t *)(lVar5 + 0x40) = 0;
  *(uint64_t *)(lVar5 + 0x38) = 0;
  *(uint64_t *)(lVar5 + 0x30) = 0;
  lVar5 = AddEditorButton(uVar4,pFVar3,"tiles",1,0);
  pFVar3 = pEditorLib;
  pEditorFunctionButtons = lVar5;
  *(code **)(lVar5 + 0x28) = EditorButton_SetTileMode;
  *(uint64_t *)(lVar5 + 0x20) = 0;
  *(code **)(lVar5 + 0x18) = EditorButton_MouseOver;
  *(long *)(lVar5 + 0x40) = lVar5;
  *(uint64_t *)(lVar5 + 0x38) = 0;
  *(char **)(lVar5 + 0x30) = "Hotkey: T";
  lVar5 = AddEditorButton(uVar4,pFVar3,"objects",1,0);
  pFVar3 = pEditorLib;
  DAT_0081a848 /* R:2.2420775429197073e-44f */ = lVar5;
  *(code **)(lVar5 + 0x28) = EditorButton_SetObstacleMode;
  *(uint64_t *)(lVar5 + 0x20) = 0;
  *(code **)(lVar5 + 0x18) = EditorButton_MouseOver;
  *(long *)(lVar5 + 0x40) = lVar5;
  *(uint64_t *)(lVar5 + 0x38) = 0;
  *(uint8_t **)(lVar5 + 0x30) = &DAT_005c2ebe /* R:"Hotkey: H" */;
  lVar5 = AddEditorButton(uVar4,pFVar3,"animals",1,0);
  pFVar3 = pEditorLib;
  DAT_0081a858 /* R:1.190056644463551e-38f */ = lVar5;
  *(code **)(lVar5 + 0x28) = EditorButton_SetAnimalMode;
  *(uint64_t *)(lVar5 + 0x20) = 0;
  *(code **)(lVar5 + 0x18) = EditorButton_MouseOver;
  *(long *)(lVar5 + 0x40) = lVar5;
  *(uint64_t *)(lVar5 + 0x38) = 0;
  *(char **)(lVar5 + 0x30) = "Hotkey: N";
  lVar5 = AddEditorButton(uVar4,pFVar3,"lights",1,0);
  pFVar3 = pEditorLib;
  DAT_0081a850 /* R:2.781577451684762e-42f */ = lVar5;
  *(code **)(lVar5 + 0x28) = EditorButton_SetLightMode;
  *(uint64_t *)(lVar5 + 0x20) = 0;
  *(code **)(lVar5 + 0x18) = EditorButton_MouseOver;
  *(long *)(lVar5 + 0x40) = lVar5;
  *(uint64_t *)(lVar5 + 0x38) = 0;
  *(char **)(lVar5 + 0x30) = "Hotkey: L";
  lVar5 = AddEditorButton(uVar4,pFVar3,"aniprops",1,0);
  pFVar3 = pEditorLib;
  DAT_0081a840 /* R:1.190054402386008e-38f */ = lVar5;
  *(code **)(lVar5 + 0x28) = EditorButton_SetAnimationMode;
  *(uint64_t *)(lVar5 + 0x20) = 0;
  *(code **)(lVar5 + 0x18) = EditorButton_MouseOver;
  *(long *)(lVar5 + 0x40) = lVar5;
  *(uint64_t *)(lVar5 + 0x38) = 0;
  *(char **)(lVar5 + 0x30) = "Hotkey: Y";
  lVar5 = AddEditorButton(uVar4,pFVar3,"props",1,0);
  pFVar3 = pEditorLib;
  DAT_0081a830 /* R:5.254869241218064e-43f */ = lVar5;
  *(code **)(lVar5 + 0x28) = EditorButton_SetSetPieceMode;
  *(uint64_t *)(lVar5 + 0x20) = 0;
  *(code **)(lVar5 + 0x18) = EditorButton_MouseOver;
  *(long *)(lVar5 + 0x40) = lVar5;
  *(uint64_t *)(lVar5 + 0x38) = 0;
  *(char **)(lVar5 + 0x30) = "Hotkey: Z";
  lVar5 = AddEditorButton(uVar4,pFVar3,"camera",1,0);
  pFVar3 = pEditorLib;
  DAT_0081a838 /* R:2.766163168577189e-42f */ = lVar5;
  *(code **)(lVar5 + 0x28) = EditorButton_SetCameraMode;
  *(uint64_t *)(lVar5 + 0x20) = 0;
  *(code **)(lVar5 + 0x18) = EditorButton_MouseOver;
  *(long *)(lVar5 + 0x40) = lVar5;
  *(uint64_t *)(lVar5 + 0x38) = 0;
  *(char **)(lVar5 + 0x30) = "Hotkey: C";
  lVar5 = AddEditorButton(uVar4,pFVar3,"paralax",1,0);
  pFVar3 = pEditorLib;
  DAT_0081a828 /* R:6.363240274560421e-39f */ = lVar5;
  *(code **)(lVar5 + 0x28) = EditorButton_SetParalaxMode;
  *(uint64_t *)(lVar5 + 0x20) = 0;
  *(code **)(lVar5 + 0x18) = EditorButton_MouseOver;
  *(long *)(lVar5 + 0x40) = lVar5;
  *(uint64_t *)(lVar5 + 0x38) = 0;
  *(char **)(lVar5 + 0x30) = "Hotkey: X";
  pEditorWaypointsButton = AddEditorButton(uVar4,pFVar3,"waypoints",1,0);
  pFVar3 = pEditorLib;
  *(code **)(pEditorWaypointsButton + 0x28) = EditorForm_WaypointOpen;
  *(uint64_t *)(pEditorWaypointsButton + 0x20) = 0;
  *(code **)(pEditorWaypointsButton + 0x18) = EditorButton_MouseOver;
  *(uint64_t *)(pEditorWaypointsButton + 0x40) = 0;
  *(uint64_t *)(pEditorWaypointsButton + 0x38) = 0;
  *(char **)(pEditorWaypointsButton + 0x30) = "Hotkey: G";
  pEditorPropertiesButton = AddEditorButton(uVar4,pFVar3,"properties",1,0);
  pFVar3 = pEditorLib;
  *(code **)(pEditorPropertiesButton + 0x28) = EditorForm_ObjectPropertiesOpen;
  *(uint64_t *)(pEditorPropertiesButton + 0x20) = 0;
  *(code **)(pEditorPropertiesButton + 0x18) = EditorButton_MouseOver;
  *(uint64_t *)(pEditorPropertiesButton + 0x40) = 0;
  *(uint64_t *)(pEditorPropertiesButton + 0x38) = 0;
  *(char **)(pEditorPropertiesButton + 0x30) = "Hotkey: F8";
  lVar5 = AddEditorButton(uVar4,pFVar3,"layercolor",1,0);
  pFVar3 = pEditorLib;
  *(code **)(lVar5 + 0x28) = EditorForm_LayerPropsOpen;
  *(uint64_t *)(lVar5 + 0x20) = 0;
  *(code **)(lVar5 + 0x18) = EditorButton_MouseOver;
  *(uint64_t *)(lVar5 + 0x40) = 0;
  *(uint64_t *)(lVar5 + 0x38) = 0;
  *(char **)(lVar5 + 0x30) = "Hotkey: F2";
  lVar5 = AddEditorButton(uVar4,pFVar3,&DAT_005c741f /* R:u32=1952645183 */,1,0);
  pFVar3 = pEditorLib;
  *(code **)(lVar5 + 0x28) = EditorForm_HelpButtonPress;
  *(uint64_t *)(lVar5 + 0x20) = 0;
  *(uint64_t *)(lVar5 + 0x18) = 0;
  *(uint64_t *)(lVar5 + 0x40) = 0;
  *(uint64_t *)(lVar5 + 0x38) = 0;
  *(uint64_t *)(lVar5 + 0x30) = 0;
  lVar5 = AddEditorButton(uVar4,pFVar3,"1",1,0);
  pFVar3 = pEditorLib;
  DAT_0081a890 /* R:2.2420775429197073e-44f */ = lVar5;
  *(code **)(lVar5 + 0x28) = EditorButton_SetLayerToForeGeneral1_Click;
  *(uint64_t *)(lVar5 + 0x20) = 0;
  *(code **)(lVar5 + 0x18) = EditorButton_MouseOver;
  *(long *)(lVar5 + 0x40) = lVar5;
  *(uint64_t *)(lVar5 + 0x38) = 0;
  *(char **)(lVar5 + 0x30) = "Hotkey: 1";
  lVar5 = AddEditorButton(uVar4,pFVar3,"2",1,0);
  pFVar3 = pEditorLib;
  DAT_0081a888 /* R:1.1900611286186368e-38f */ = lVar5;
  *(code **)(lVar5 + 0x28) = EditorButton_SetLayerToFore_Click;
  *(uint64_t *)(lVar5 + 0x20) = 0;
  *(code **)(lVar5 + 0x18) = EditorButton_MouseOver;
  *(long *)(lVar5 + 0x40) = lVar5;
  *(uint64_t *)(lVar5 + 0x38) = 0;
  *(char **)(lVar5 + 0x30) = "Hotkey: 2";
  lVar5 = AddEditorButton(uVar4,pFVar3,"3",1,0);
  pFVar3 = pEditorLib;
  pLayerButtons = lVar5;
  *(code **)(lVar5 + 0x28) = EditorButton_SetLayerToForeGeneral2_Click;
  *(uint64_t *)(lVar5 + 0x20) = 0;
  *(code **)(lVar5 + 0x18) = EditorButton_MouseOver;
  *(long *)(lVar5 + 0x40) = lVar5;
  *(uint64_t *)(lVar5 + 0x38) = 0;
  *(char **)(lVar5 + 0x30) = "Hotkey: 3";
  lVar5 = AddEditorButton(uVar4,pFVar3,"4",1,0);
  pFVar3 = pEditorLib;
  DAT_0081a898 /* R:2.8306228979361305e-42f */ = lVar5;
  *(code **)(lVar5 + 0x28) = EditorButton_SetLayerToActive_Click;
  *(uint64_t *)(lVar5 + 0x20) = 0;
  *(code **)(lVar5 + 0x18) = EditorButton_MouseOver;
  *(long *)(lVar5 + 0x40) = lVar5;
  *(uint64_t *)(lVar5 + 0x38) = 0;
  *(char **)(lVar5 + 0x30) = "Hotkey: 4";
  lVar5 = AddEditorButton(uVar4,pFVar3,&DAT_005c2f54 /* R:u32=1866989621 */,1,0);
  pFVar3 = pEditorLib;
  DAT_0081a8a0 /* R:1.1900633706961798e-38f */ = lVar5;
  *(code **)(lVar5 + 0x28) = EditorButton_SetLayerToBackGeneral1_Click;
  *(uint64_t *)(lVar5 + 0x20) = 0;
  *(code **)(lVar5 + 0x18) = EditorButton_MouseOver;
  *(long *)(lVar5 + 0x40) = lVar5;
  *(uint64_t *)(lVar5 + 0x38) = 0;
  *(uint8_t **)(lVar5 + 0x30) = &DAT_005c2f4c /* R:"Hotkey: 5" */;
  lVar5 = AddEditorButton(uVar4,pFVar3,&DAT_005c2f5e /* R:u32=1866989622 */,1,0);
  pFVar3 = pEditorLib;
  DAT_0081a8a8 /* R:2.2420775429197073e-44f */ = lVar5;
  *(code **)(lVar5 + 0x28) = EditorButton_SetLayerToBack_Click;
  *(uint64_t *)(lVar5 + 0x20) = 0;
  *(code **)(lVar5 + 0x18) = EditorButton_MouseOver;
  *(long *)(lVar5 + 0x40) = lVar5;
  *(uint64_t *)(lVar5 + 0x38) = 0;
  *(uint8_t **)(lVar5 + 0x30) = &DAT_005c2f56 /* R:"Hotkey: 6" */;
  lVar5 = AddEditorButton(uVar4,pFVar3,&DAT_005c2f68 /* R:u32=1866989623 */,1,0);
  pFVar3 = pEditorLib;
  DAT_0081a8b0 /* R:2.8432345841150538e-42f */ = lVar5;
  *(code **)(lVar5 + 0x28) = EditorButton_SetLayerToBackGeneral2_Click;
  *(uint64_t *)(lVar5 + 0x20) = 0;
  *(code **)(lVar5 + 0x18) = EditorButton_MouseOver;
  *(long *)(lVar5 + 0x40) = lVar5;
  *(uint64_t *)(lVar5 + 0x38) = 0;
  *(uint8_t **)(lVar5 + 0x30) = &DAT_005c2f60 /* R:"Hotkey: 7" */;
  lVar5 = AddEditorButton(uVar4,pFVar3,&DAT_005c2f72 /* R:u32=1969422392 */,1,0);
  pFVar3 = pEditorLib;
  DAT_0081a8b8 /* R:1.1900656127737227e-38f */ = lVar5;
  *(code **)(lVar5 + 0x28) = EditorButton_SetLayerToBackGeneral3_Click;
  *(uint64_t *)(lVar5 + 0x20) = 0;
  *(code **)(lVar5 + 0x18) = EditorButton_MouseOver;
  *(long *)(lVar5 + 0x40) = lVar5;
  *(uint64_t *)(lVar5 + 0x38) = 0;
  *(uint8_t **)(lVar5 + 0x30) = &DAT_005c2f6a /* R:"Hotkey: 8" */;
  pCurrentLayerField = FlashAnimationLibrary__GetTextField(pFVar3,"currentlayer");
  pObjectInfoField = FlashAnimationLibrary__GetTextField(pEditorLib,"objectinfo");
  local_3f8 = 0;
  local_3f0 = 0;
  local_3d8 = 0;
  local_420 = "newlevel";
  local_428 = pEditorLib;
  local_3e8 = &DAT_005c2f8c /* R:128.41917419433594f */;
  local_3e0 = "Cancel";
  local_418 = "New Level";
  local_410 = "Width";
  local_408 = "Height";
  local_400 = "Palette";
                    /* try { // try from 004adad3 to 004adad7 has its CatchHandler @ 004af4a5 */
  this_01 = operator_new(0x1b0);
                    /* try { // try from 004adae3 to 004adae7 has its CatchHandler @ 004af5a5 */
  EditorForm__EditorForm__004b8350(this_01,(EditorFormCreate *)&local_428);
  pEVar15 = this_01 + 0xb8;
  *(uint8_t ***)this_01 = &PTR__EditorFormNewLevel_005c45f0;
  uVar13 = 0x50;
  iVar14 = 0x50;
  bVar21 = ((ulong)pEVar15 & 1) != 0;
  if (bVar21) {
    pEVar15 = this_01 + 0xb9;
    this_01[0xb8] = (EditorForm)0x0;
    uVar13 = 0x4f;
    iVar14 = 0x4f;
  }
  if (((ulong)pEVar15 & 2) == 0) {
    uVar12 = (uint)uVar13;
  }
  else {
    *(uint16_t *)pEVar15 = 0;
    pEVar15 = pEVar15 + 2;
    uVar12 = iVar14 - 2;
    uVar13 = (ulong)uVar12;
  }
  if (((ulong)pEVar15 & 4) != 0) {
    *(uint32_t *)pEVar15 = 0;
    uVar13 = (ulong)(uVar12 - 4);
    pEVar15 = pEVar15 + 4;
  }
  for (uVar11 = uVar13 >> 3; uVar11 != 0; uVar11 = uVar11 - 1) {
    *(uint64_t *)pEVar15 = 0;
    pEVar15 = pEVar15 + (ulong)bVar22 * -0x10 + 8;
  }
  if ((uVar13 & 4) != 0) {
    *(uint32_t *)pEVar15 = 0;
    pEVar15 = pEVar15 + 4;
  }
  if ((uVar13 & 2) != 0) {
    *(uint16_t *)pEVar15 = 0;
    pEVar15 = pEVar15 + 2;
  }
  if (bVar21) {
    *pEVar15 = (EditorForm)0x0;
  }
                    /* try { // try from 004adb53 to 004adbff has its CatchHandler @ 004af4db */
  uVar4 = FlashAnimationLibrary__GetLibraryEntry
                    (*(FlashAnimationLibrary **)(this_01 + 0x78),
                     *(int *)(*(long *)(this_01 + 8) + 0x20));
  pEVar15 = this_01;
  pEVar19 = this_01;
  iVar14 = 0;
  do {
    Sprint("ch%i%s",local_68,iVar14 + 1,"icon");
    *(int *)(pEVar15 + 0x118) = iVar14;
    *(EditorForm **)(pEVar15 + 0x110) = this_01;
    lVar5 = AddEditorButton(uVar4,*(uint64_t *)(this_01 + 0x78),local_68,0,0);
    *(long *)(pEVar19 + 0xb8) = lVar5;
    if (lVar5 == 0) break;
    *(code **)(lVar5 + 0x28) = EditorPaletteButton_Click;
    *(uint64_t *)(lVar5 + 0x20) = 0;
    *(uint64_t *)(lVar5 + 0x18) = 0;
    *(uint64_t *)(lVar5 + 0x38) = 0;
    *(uint64_t *)(lVar5 + 0x30) = 0;
    pEVar15 = pEVar15 + 0x10;
    *(EditorForm **)(lVar5 + 0x40) = this_01 + ((long)iVar14 + 0x11) * 0x10;
    pEVar1 = pEVar19 + 0xb8;
    pEVar19 = pEVar19 + 8;
    iVar14 = iVar14 + 1;
  } while (*(long *)pEVar1 != 0);
  local_3c0 = "objectprops";
  pEditorNewLevelForm = this_01;
  *(uint64_t *)(this_01 + 0x108) = *(uint64_t *)(this_01 + 0xb8);
  lVar5 = *(long *)(this_01 + 0x10);
  local_3b8 = 0;
  *(code **)(lVar5 + 0x28) = EditorForm_NewFormOk;
  *(uint64_t *)(lVar5 + 0x20) = 0;
  *(uint64_t *)(lVar5 + 0x18) = 0;
  *(uint64_t *)(lVar5 + 0x38) = 0;
  *(uint64_t *)(lVar5 + 0x30) = 0;
  *(uint64_t *)(lVar5 + 0x40) = 0;
  lVar5 = *(long *)(this_01 + 0x18);
  *(code **)(lVar5 + 0x28) = EditorForm_NewFormCancel;
  *(uint64_t *)(lVar5 + 0x20) = 0;
  *(uint64_t *)(lVar5 + 0x18) = 0;
  *(uint64_t *)(lVar5 + 0x38) = 0;
  *(uint64_t *)(lVar5 + 0x30) = 0;
  *(uint64_t *)(lVar5 + 0x40) = 0;
  local_3b0 = 0;
  local_3a8 = 0;
  local_3a0 = 0;
  local_398 = 0;
  local_390 = 0;
  local_378 = 0;
  local_3c8 = pEditorLib;
  local_388 = "Apply";
  local_380 = "Cancel";
                    /* try { // try from 004add1c to 004add20 has its CatchHandler @ 004af4ea */
  pEVar15 = operator_new(0xb8);
                    /* try { // try from 004add2f to 004add33 has its CatchHandler @ 004af4e8 */
  EditorForm__EditorForm__004b8350(pEVar15,(EditorFormCreate *)&local_3c8);
  lVar5 = *(long *)(pEVar15 + 0x10);
  local_360 = "animalprops";
  local_358 = "Animal Properties";
  pEditorObjectPropsForm = pEVar15;
  *(code **)(lVar5 + 0x28) = EditorForm_ObjectPropertiesOk;
  *(uint64_t *)(lVar5 + 0x20) = 0;
  *(uint64_t *)(lVar5 + 0x18) = 0;
  *(uint64_t *)(lVar5 + 0x38) = 0;
  *(uint64_t *)(lVar5 + 0x30) = 0;
  *(uint64_t *)(lVar5 + 0x40) = 0;
  lVar5 = *(long *)(pEVar15 + 0x18);
  *(code **)(lVar5 + 0x28) = EditorForm_ObjectPropertiesCancel;
  *(uint64_t *)(lVar5 + 0x20) = 0;
  *(uint64_t *)(lVar5 + 0x18) = 0;
  *(uint64_t *)(lVar5 + 0x38) = 0;
  *(uint64_t *)(lVar5 + 0x30) = 0;
  *(uint64_t *)(lVar5 + 0x40) = 0;
  local_340 = 0;
  local_338 = 0;
  local_330 = 0;
  local_318 = 0;
  local_328 = "Apply";
  local_368 = pEditorLib;
  local_320 = "Cancel";
  local_350 = "Init. Velocity";
  local_348 = "Gravity";
                    /* try { // try from 004ade2f to 004ade33 has its CatchHandler @ 004af512 */
  pEVar15 = operator_new(0xb8);
                    /* try { // try from 004ade42 to 004ade46 has its CatchHandler @ 004af507 */
  EditorForm__EditorForm__004b8350(pEVar15,(EditorFormCreate *)&local_368);
  lVar5 = *(long *)(pEVar15 + 0x10);
  local_300 = "layerprops";
  local_2f8 = "Layer Properties";
  pEditorAnimalPropsForm = pEVar15;
  *(code **)(lVar5 + 0x28) = EditorForm_ObjectPropertiesOk;
  *(uint64_t *)(lVar5 + 0x20) = 0;
  *(uint64_t *)(lVar5 + 0x18) = 0;
  *(uint64_t *)(lVar5 + 0x38) = 0;
  *(uint64_t *)(lVar5 + 0x30) = 0;
  *(uint64_t *)(lVar5 + 0x40) = 0;
  lVar5 = *(long *)(pEVar15 + 0x18);
  *(code **)(lVar5 + 0x28) = EditorForm_ObjectPropertiesCancel;
  *(uint64_t *)(lVar5 + 0x20) = 0;
  *(uint64_t *)(lVar5 + 0x18) = 0;
  *(uint64_t *)(lVar5 + 0x38) = 0;
  *(uint64_t *)(lVar5 + 0x30) = 0;
  *(uint64_t *)(lVar5 + 0x40) = 0;
  local_2c8 = "Apply";
  local_2c0 = "Cancel";
  local_2b8 = "Apply To All";
  local_2f0 = &DAT_005c302c /* R:9.219896495366778e-39f */;
  local_2e8 = "Green";
  local_308 = pEditorLib;
  local_2e0 = &DAT_005c3036 /* R:"Blue" */;
  local_2d8 = "Alpha";
  local_2d0 = "Amount";
                    /* try { // try from 004adf42 to 004adf46 has its CatchHandler @ 004af502 */
  pEVar15 = operator_new(0xb8);
                    /* try { // try from 004adf55 to 004adf59 has its CatchHandler @ 004af4f5 */
  EditorForm__EditorForm__004b8350(pEVar15,(EditorFormCreate *)&local_308);
  lVar5 = *(long *)(pEVar15 + 0x10);
  local_2a0 = "saveload";
  pEditorLayerPropsForm = pEVar15;
  *(code **)(lVar5 + 0x28) = EditorForm_LayerPropsOk;
  *(uint64_t *)(lVar5 + 0x20) = 0;
  *(uint64_t *)(lVar5 + 0x18) = 0;
  *(uint64_t *)(lVar5 + 0x38) = 0;
  *(uint64_t *)(lVar5 + 0x30) = 0;
  *(uint64_t *)(lVar5 + 0x40) = 0;
  lVar5 = *(long *)(pEVar15 + 0x18);
  *(code **)(lVar5 + 0x28) = EditorForm_LayerPropsCancel;
  *(uint64_t *)(lVar5 + 0x20) = 0;
  *(uint64_t *)(lVar5 + 0x18) = 0;
  *(uint64_t *)(lVar5 + 0x38) = 0;
  *(uint64_t *)(lVar5 + 0x30) = 0;
  *(uint64_t *)(lVar5 + 0x40) = 0;
  lVar5 = *(long *)(pEVar15 + 0x20);
  *(code **)(lVar5 + 0x28) = EditorForm_LayerPropsOk;
  *(uint64_t *)(lVar5 + 0x20) = 0;
  *(uint64_t *)(lVar5 + 0x18) = 0;
  *(uint64_t *)(lVar5 + 0x38) = 0;
  *(uint64_t *)(lVar5 + 0x30) = 0;
  *(uint64_t *)(lVar5 + 0x40) = 1;
  local_290 = 0;
  local_288 = 0;
  local_280 = 0;
  local_278 = 0;
  local_270 = 0;
  local_258 = 0;
  local_2a8 = pEditorLib;
  local_268 = &DAT_005c2f8c /* R:128.41917419433594f */;
  local_260 = "Cancel";
  local_298 = "Load Level";
                    /* try { // try from 004ae089 to 004ae08d has its CatchHandler @ 004af462 */
  pEVar15 = operator_new(0xb8);
                    /* try { // try from 004ae09c to 004ae0a0 has its CatchHandler @ 004af5e5 */
  EditorForm__EditorForm__004b8350(pEVar15,(EditorFormCreate *)&local_2a8);
  lVar5 = *(long *)(pEVar15 + 0x10);
  local_298 = "Save Level";
  pEditorLoadForm = pEVar15;
  *(code **)(lVar5 + 0x28) = EditorForm_LoadFormOk;
  *(uint64_t *)(lVar5 + 0x20) = 0;
  *(uint64_t *)(lVar5 + 0x18) = 0;
  *(uint64_t *)(lVar5 + 0x40) = 0;
  *(uint64_t *)(lVar5 + 0x38) = 0;
  *(uint64_t *)(lVar5 + 0x30) = 0;
  lVar5 = *(long *)(pEVar15 + 0x18);
  *(code **)(lVar5 + 0x28) = EditorForm_LoadFormCancel;
  *(uint64_t *)(lVar5 + 0x20) = 0;
  *(uint64_t *)(lVar5 + 0x18) = 0;
  *(uint64_t *)(lVar5 + 0x40) = 0;
  *(uint64_t *)(lVar5 + 0x38) = 0;
  *(uint64_t *)(lVar5 + 0x30) = 0;
                    /* try { // try from 004ae121 to 004ae125 has its CatchHandler @ 004af462 */
  pEVar15 = operator_new(0xb8);
                    /* try { // try from 004ae134 to 004ae138 has its CatchHandler @ 004af5d5 */
  EditorForm__EditorForm__004b8350(pEVar15,(EditorFormCreate *)&local_2a8);
  lVar5 = *(long *)(pEVar15 + 0x10);
  local_240 = "lightprops";
  local_238 = "Light Properties";
  pEditorSaveForm = pEVar15;
  *(code **)(lVar5 + 0x28) = EditorForm_SaveFormOk;
  *(uint64_t *)(lVar5 + 0x20) = 0;
  *(uint64_t *)(lVar5 + 0x18) = 0;
  *(uint64_t *)(lVar5 + 0x38) = 0;
  *(uint64_t *)(lVar5 + 0x30) = 0;
  *(uint64_t *)(lVar5 + 0x40) = 0;
  lVar5 = *(long *)(pEVar15 + 0x18);
  *(code **)(lVar5 + 0x28) = EditorForm_SaveFormCancel;
  *(uint64_t *)(lVar5 + 0x20) = 0;
  *(uint64_t *)(lVar5 + 0x18) = 0;
  *(uint64_t *)(lVar5 + 0x38) = 0;
  *(uint64_t *)(lVar5 + 0x30) = 0;
  *(uint64_t *)(lVar5 + 0x40) = 0;
  local_218 = 0;
  local_210 = 0;
  local_1f8 = 0;
  local_208 = &DAT_005c2f8c /* R:128.41917419433594f */;
  local_200 = "Cancel";
  local_248 = pEditorLib;
  local_230 = &DAT_005c302c /* R:9.219896495366778e-39f */;
  local_228 = "Green";
  local_220 = &DAT_005c3036 /* R:"Blue" */;
                    /* try { // try from 004ae234 to 004ae238 has its CatchHandler @ 004af5c5 */
  pEVar15 = operator_new(0xb8);
                    /* try { // try from 004ae247 to 004ae24b has its CatchHandler @ 004af5b5 */
  EditorForm__EditorForm__004b8350(pEVar15,(EditorFormCreate *)&local_248);
  lVar5 = *(long *)(pEVar15 + 0x10);
  local_1e0 = "cameraprops";
  local_1d8 = "Camera Properties";
  pEditorLightPropsForm = pEVar15;
  *(code **)(lVar5 + 0x28) = EditorForm_ObjectPropertiesOk;
  *(uint64_t *)(lVar5 + 0x20) = 0;
  *(uint64_t *)(lVar5 + 0x18) = 0;
  *(uint64_t *)(lVar5 + 0x38) = 0;
  *(uint64_t *)(lVar5 + 0x30) = 0;
  *(uint64_t *)(lVar5 + 0x40) = 0;
  lVar5 = *(long *)(pEVar15 + 0x18);
  *(code **)(lVar5 + 0x28) = EditorForm_ObjectPropertiesCancel;
  *(uint64_t *)(lVar5 + 0x20) = 0;
  *(uint64_t *)(lVar5 + 0x18) = 0;
  *(uint64_t *)(lVar5 + 0x38) = 0;
  *(uint64_t *)(lVar5 + 0x30) = 0;
  *(uint64_t *)(lVar5 + 0x40) = 0;
  local_1c0 = 0;
  local_1b8 = 0;
  local_1b0 = 0;
  local_198 = 0;
  local_1a8 = &DAT_005c2f8c /* R:128.41917419433594f */;
  local_1e8 = pEditorLib;
  local_1a0 = "Cancel";
  local_1d0 = "Start Time";
  local_1c8 = &DAT_005c30ac /* R:"Zoom" */;
                    /* try { // try from 004ae347 to 004ae34b has its CatchHandler @ 004af532 */
  pEVar15 = operator_new(0xb8);
                    /* try { // try from 004ae35a to 004ae35e has its CatchHandler @ 004af525 */
  EditorForm__EditorForm__004b8350(pEVar15,(EditorFormCreate *)&local_1e8);
  lVar5 = *(long *)(pEVar15 + 0x10);
  local_180 = "uploadform";
  local_178 = "Upload Your Level";
  pEditorCameraPropsForm = pEVar15;
  *(code **)(lVar5 + 0x28) = EditorForm_ObjectPropertiesOk;
  *(uint64_t *)(lVar5 + 0x20) = 0;
  *(uint64_t *)(lVar5 + 0x18) = 0;
  *(uint64_t *)(lVar5 + 0x38) = 0;
  *(uint64_t *)(lVar5 + 0x30) = 0;
  *(uint64_t *)(lVar5 + 0x40) = 0;
  lVar5 = *(long *)(pEVar15 + 0x18);
  *(code **)(lVar5 + 0x28) = EditorForm_ObjectPropertiesCancel;
  *(uint64_t *)(lVar5 + 0x20) = 0;
  *(uint64_t *)(lVar5 + 0x18) = 0;
  *(uint64_t *)(lVar5 + 0x38) = 0;
  *(uint64_t *)(lVar5 + 0x30) = 0;
  *(uint64_t *)(lVar5 + 0x40) = 0;
  local_168 = 0;
  local_160 = 0;
  local_158 = 0;
  local_150 = 0;
  local_138 = 0;
  local_188 = pEditorLib;
  local_148 = &DAT_005c2f8c /* R:128.41917419433594f */;
  local_140 = "Cancel";
  local_170 = "Level Name";
                    /* try { // try from 004ae45a to 004ae45e has its CatchHandler @ 004af517 */
  pEVar15 = operator_new(0xb8);
                    /* try { // try from 004ae46d to 004ae471 has its CatchHandler @ 004af597 */
  EditorForm__EditorForm__004b8350(pEVar15,(EditorFormCreate *)&local_188);
  pFVar3 = pEditorLib;
  lVar5 = *(long *)(pEVar15 + 0x10);
  local_d8 = 0;
  local_120 = "charform";
  local_118 = "Select Character";
  pEditorUploadForm = pEVar15;
  *(uint64_t *)(lVar5 + 0x20) = 0;
  *(uint64_t *)(lVar5 + 0x18) = 0;
  *(code **)(lVar5 + 0x28) = EditorForm_UploadFormOk;
  *(uint64_t *)(lVar5 + 0x40) = 0;
  *(uint64_t *)(lVar5 + 0x38) = 0;
  *(uint64_t *)(lVar5 + 0x30) = 0;
  lVar5 = *(long *)(pEVar15 + 0x18);
  local_128 = pFVar3;
  local_e8 = &DAT_005c2f8c /* R:128.41917419433594f */;
  local_e0 = "Cancel";
  local_110 = "None";
  *(uint64_t *)(lVar5 + 0x20) = 0;
  *(uint64_t *)(lVar5 + 0x18) = 0;
  *(code **)(lVar5 + 0x28) = EditorForm_UploadFormCancel;
  *(uint64_t *)(lVar5 + 0x40) = 0;
  *(uint64_t *)(lVar5 + 0x38) = 0;
  *(uint64_t *)(lVar5 + 0x30) = 0;
  local_108 = (char *)0x0;
  local_100 = (char *)0x0;
  local_f8 = (char *)0x0;
  local_f0 = (char *)0x0;
                    /* try { // try from 004ae565 to 004ae569 has its CatchHandler @ 004af592 */
  pcVar6 = operator_new(0x2a0);
  pcVar2 = pcVar6 + 0x28;
  *(uint8_t ***)pcVar6 = &PTR__EditorForm_005c4670;
  pcVar6[8] = '\0';
  pcVar6[9] = '\0';
  pcVar6[10] = '\0';
  pcVar6[0xb] = '\0';
  pcVar6[0xc] = '\0';
  pcVar6[0xd] = '\0';
  pcVar6[0xe] = '\0';
  pcVar6[0xf] = '\0';
  pcVar6[0xa8] = '\0';
  pcVar6[0xa9] = '\0';
  pcVar6[0xaa] = '\0';
  pcVar6[0xab] = '\0';
  uVar13 = 0x50;
  iVar14 = 0x50;
  bVar21 = ((ulong)pcVar2 & 1) != 0;
  pcVar6[0xac] = '\0';
  pcVar6[0xad] = '\0';
  pcVar6[0xae] = '\0';
  pcVar6[0xaf] = '\0';
  if (bVar21) {
    pcVar2 = pcVar6 + 0x29;
    pcVar6[0x28] = '\0';
    uVar13 = 0x4f;
    iVar14 = 0x4f;
  }
  if (((ulong)pcVar2 & 2) != 0) {
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    uVar13 = (ulong)(iVar14 - 2);
    pcVar2 = pcVar2 + 2;
  }
  if (((ulong)pcVar2 & 4) != 0) {
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    uVar13 = (ulong)((int)uVar13 - 4);
    pcVar2 = pcVar2 + 4;
  }
  for (uVar11 = uVar13 >> 3; uVar11 != 0; uVar11 = uVar11 - 1) {
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    pcVar2[4] = '\0';
    pcVar2[5] = '\0';
    pcVar2[6] = '\0';
    pcVar2[7] = '\0';
    pcVar2 = pcVar2 + ((ulong)bVar22 * -2 + 1) * 8;
  }
  if ((uVar13 & 4) != 0) {
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    pcVar2 = pcVar2 + 4;
  }
  if ((uVar13 & 2) != 0) {
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2 = pcVar2 + 2;
  }
  if (bVar21) {
    *pcVar2 = '\0';
  }
                    /* try { // try from 004ae5ee to 004aed0f has its CatchHandler @ 004af4ce */
  uVar4 = FlashAnimationLibrary__GetMovieClip__005731d0(pFVar3,"charform");
  *(uint64_t *)(pcVar6 + 8) = uVar4;
  puVar7 = operator_new__(0x28);
  pcVar2 = local_110;
  *(uint64_t **)(pcVar6 + 0x80) = puVar7;
  *puVar7 = 0;
  puVar7[1] = 0;
  puVar7[2] = 0;
  puVar7[3] = 0;
  puVar7[4] = 0;
  pcVar6[0x88] = '\0';
  pcVar6[0x89] = '\0';
  pcVar6[0x8a] = '\0';
  pcVar6[0x8b] = '\0';
  pcVar6[0x8c] = '\0';
  pcVar6[0x8d] = '\0';
  pcVar6[0x8e] = '\0';
  pcVar6[0x8f] = '\0';
  pcVar6[0x90] = '\0';
  pcVar6[0x91] = '\0';
  pcVar6[0x92] = '\0';
  pcVar6[0x93] = '\0';
  pcVar6[0x94] = '\0';
  pcVar6[0x95] = '\0';
  pcVar6[0x96] = '\0';
  pcVar6[0x97] = '\0';
  pcVar6[0x98] = '\0';
  pcVar6[0x99] = '\0';
  pcVar6[0x9a] = '\0';
  pcVar6[0x9b] = '\0';
  pcVar6[0x9c] = '\0';
  pcVar6[0x9d] = '\0';
  pcVar6[0x9e] = '\0';
  pcVar6[0x9f] = '\0';
  pcVar6[0xa0] = '\0';
  pcVar6[0xa1] = '\0';
  pcVar6[0xa2] = '\0';
  pcVar6[0xa3] = '\0';
  pcVar6[0xa4] = '\0';
  pcVar6[0xa5] = '\0';
  pcVar6[0xa6] = '\0';
  pcVar6[0xa7] = '\0';
  if (pcVar6 != "l") {
    builtin_strncpy(pcVar6 + 0x88,"Select Character",0x10);
  }
  pcVar6[0xa7] = '\0';
  if (local_110 != (char *)0x0) {
    Sprint("labeltext%i",local_68,1);
    FlashAnimationLibrary__SetTextFieldText((char *)local_128,local_68,pcVar2);
    sVar8 = strlen(pcVar2);
    puVar7 = *(uint64_t **)(pcVar6 + 0x80);
    uVar13 = (ulong)((int)sVar8 + 1);
    pvVar9 = operator_new__(uVar13);
    *puVar7 = pvVar9;
    if (pcVar2 != (char *)**(uint64_t **)(pcVar6 + 0x80)) {
      memcpy((char *)**(uint64_t **)(pcVar6 + 0x80),pcVar2,uVar13);
    }
  }
  pcVar2 = local_108;
  if (local_108 != (char *)0x0) {
    Sprint("labeltext%i",local_68,2);
    FlashAnimationLibrary__SetTextFieldText((char *)local_128,local_68,pcVar2);
    sVar8 = strlen(pcVar2);
    lVar5 = *(long *)(pcVar6 + 0x80);
    uVar13 = (ulong)((int)sVar8 + 1);
    pvVar9 = operator_new__(uVar13);
    *(void **)(lVar5 + 8) = pvVar9;
    if (pcVar2 != *(char **)(*(long *)(pcVar6 + 0x80) + 8)) {
      memcpy(*(char **)(*(long *)(pcVar6 + 0x80) + 8),pcVar2,uVar13);
    }
  }
  pcVar2 = local_100;
  if (local_100 != (char *)0x0) {
    Sprint("labeltext%i",local_68,3);
    FlashAnimationLibrary__SetTextFieldText((char *)local_128,local_68,pcVar2);
    sVar8 = strlen(pcVar2);
    lVar5 = *(long *)(pcVar6 + 0x80);
    uVar13 = (ulong)((int)sVar8 + 1);
    pvVar9 = operator_new__(uVar13);
    *(void **)(lVar5 + 0x10) = pvVar9;
    if (pcVar2 != *(char **)(*(long *)(pcVar6 + 0x80) + 0x10)) {
      memcpy(*(char **)(*(long *)(pcVar6 + 0x80) + 0x10),pcVar2,uVar13);
    }
  }
  pcVar2 = local_f8;
  if (local_f8 != (char *)0x0) {
    Sprint("labeltext%i",local_68,4);
    FlashAnimationLibrary__SetTextFieldText((char *)local_128,local_68,pcVar2);
    sVar8 = strlen(pcVar2);
    lVar5 = *(long *)(pcVar6 + 0x80);
    uVar13 = (ulong)((int)sVar8 + 1);
    pvVar9 = operator_new__(uVar13);
    *(void **)(lVar5 + 0x18) = pvVar9;
    if (pcVar2 != *(char **)(*(long *)(pcVar6 + 0x80) + 0x18)) {
      memcpy(*(char **)(*(long *)(pcVar6 + 0x80) + 0x18),pcVar2,uVar13);
    }
  }
  pcVar2 = local_f0;
  if (local_f0 != (char *)0x0) {
    Sprint("labeltext%i",local_68,5);
    FlashAnimationLibrary__SetTextFieldText((char *)local_128,local_68,pcVar2);
    sVar8 = strlen(pcVar2);
    lVar5 = *(long *)(pcVar6 + 0x80);
    uVar13 = (ulong)((int)sVar8 + 1);
    pvVar9 = operator_new__(uVar13);
    *(void **)(lVar5 + 0x20) = pvVar9;
    if (pcVar2 != *(char **)(*(long *)(pcVar6 + 0x80) + 0x20)) {
      memcpy(*(char **)(*(long *)(pcVar6 + 0x80) + 0x20),pcVar2,uVar13);
    }
  }
  pFVar3 = local_128;
  uVar4 = FlashAnimationLibrary__GetLibraryEntry(local_128,*(int *)(*(long *)(pcVar6 + 8) + 0x20));
  uVar10 = AddEditorButton(uVar4,pFVar3,"apply",0,0);
  *(uint64_t *)(pcVar6 + 0x10) = uVar10;
  uVar10 = AddEditorButton(uVar4,pFVar3,"cancel",0,0);
  *(uint64_t *)(pcVar6 + 0x18) = uVar10;
  uVar10 = AddEditorButton(uVar4,pFVar3,"applytoall",0,0);
  *(uint64_t *)(pcVar6 + 0x20) = uVar10;
  FlashAnimationLibrary__SetTextFieldText((char *)pFVar3,"apply",local_e8);
  FlashAnimationLibrary__SetTextFieldText((char *)pFVar3,"cancel",local_e0);
  FlashAnimationLibrary__SetTextFieldText((char *)pFVar3,"applytoall",local_d8);
  FlashAnimationLibrary__SetTextFieldText((char *)pFVar3,"formlabel",local_118);
  Sprint("textfield%i",local_68,1);
  lVar5 = AddEditorButton(uVar4,pFVar3,local_68,0,1);
  *(long *)(pcVar6 + 0x28) = lVar5;
  if (lVar5 != 0) {
    uVar10 = FlashAnimationLibrary__GetUITextField(pFVar3,1);
    *(uint64_t *)(*(long *)(pcVar6 + 0x28) + 0x50) = uVar10;
    Sprint("textfield%i",local_68,2);
    lVar5 = AddEditorButton(uVar4,pFVar3,local_68,0,1);
    *(long *)(pcVar6 + 0x30) = lVar5;
    if (lVar5 != 0) {
      uVar10 = FlashAnimationLibrary__GetUITextField(pFVar3,2);
      *(uint64_t *)(*(long *)(pcVar6 + 0x30) + 0x50) = uVar10;
      Sprint("textfield%i",local_68,3);
      lVar5 = AddEditorButton(uVar4,pFVar3,local_68,0,1);
      *(long *)(pcVar6 + 0x38) = lVar5;
      if (lVar5 != 0) {
        uVar10 = FlashAnimationLibrary__GetUITextField(pFVar3,3);
        *(uint64_t *)(*(long *)(pcVar6 + 0x38) + 0x50) = uVar10;
        Sprint("textfield%i",local_68,4);
        lVar5 = AddEditorButton(uVar4,pFVar3,local_68,0,1);
        *(long *)(pcVar6 + 0x40) = lVar5;
        if (lVar5 != 0) {
          uVar10 = FlashAnimationLibrary__GetUITextField(pFVar3,4);
          *(uint64_t *)(*(long *)(pcVar6 + 0x40) + 0x50) = uVar10;
          Sprint("textfield%i",local_68,5);
          lVar5 = AddEditorButton(uVar4,pFVar3,local_68,0,1);
          *(long *)(pcVar6 + 0x48) = lVar5;
          if (lVar5 != 0) {
            uVar10 = FlashAnimationLibrary__GetUITextField(pFVar3,5);
            *(uint64_t *)(*(long *)(pcVar6 + 0x48) + 0x50) = uVar10;
            Sprint("textfield%i",local_68,6);
            lVar5 = AddEditorButton(uVar4,pFVar3,local_68,0,1);
            *(long *)(pcVar6 + 0x50) = lVar5;
            if (lVar5 != 0) {
              uVar10 = FlashAnimationLibrary__GetUITextField(pFVar3,6);
              *(uint64_t *)(*(long *)(pcVar6 + 0x50) + 0x50) = uVar10;
              Sprint("textfield%i",local_68,7);
              lVar5 = AddEditorButton(uVar4,pFVar3,local_68,0,1);
              *(long *)(pcVar6 + 0x58) = lVar5;
              if (lVar5 != 0) {
                uVar10 = FlashAnimationLibrary__GetUITextField(pFVar3,7);
                *(uint64_t *)(*(long *)(pcVar6 + 0x58) + 0x50) = uVar10;
                Sprint("textfield%i",local_68,8);
                lVar5 = AddEditorButton(uVar4,pFVar3,local_68,0,1);
                *(long *)(pcVar6 + 0x60) = lVar5;
                if (lVar5 != 0) {
                  uVar10 = FlashAnimationLibrary__GetUITextField(pFVar3,8);
                  *(uint64_t *)(*(long *)(pcVar6 + 0x60) + 0x50) = uVar10;
                  Sprint("textfield%i",local_68,9);
                  lVar5 = AddEditorButton(uVar4,pFVar3,local_68,0,1);
                  *(long *)(pcVar6 + 0x68) = lVar5;
                  if (lVar5 != 0) {
                    uVar10 = FlashAnimationLibrary__GetUITextField(pFVar3,9);
                    *(uint64_t *)(*(long *)(pcVar6 + 0x68) + 0x50) = uVar10;
                    Sprint("textfield%i",local_68,10);
                    lVar5 = AddEditorButton(uVar4,pFVar3,local_68,0,1);
                    *(long *)(pcVar6 + 0x70) = lVar5;
                    if (lVar5 != 0) {
                      uVar4 = FlashAnimationLibrary__GetUITextField(pFVar3,10);
                      *(uint64_t *)(*(long *)(pcVar6 + 0x70) + 0x50) = uVar4;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  plVar20 = (long *)(pcVar6 + 0xb8);
  *(FlashAnimationLibrary **)(pcVar6 + 0x78) = pFVar3;
  *(uint8_t ***)pcVar6 = &PTR__EditorFormCharacter_005c4630;
  uVar13 = 0xa0;
  iVar14 = 0xa0;
  bVar21 = ((ulong)plVar20 & 1) != 0;
  plVar16 = plVar20;
  if (bVar21) {
    pcVar6[0xb8] = '\0';
    uVar13 = 0x9f;
    iVar14 = 0x9f;
    plVar16 = (long *)(pcVar6 + 0xb9);
  }
  if (((ulong)plVar16 & 2) == 0) {
    uVar12 = (uint)uVar13;
  }
  else {
    *(uint16_t *)plVar16 = 0;
    plVar16 = (long *)((long)plVar16 + 2);
    uVar12 = iVar14 - 2;
    uVar13 = (ulong)uVar12;
  }
  if (((ulong)plVar16 & 4) != 0) {
    *(uint32_t *)plVar16 = 0;
    uVar13 = (ulong)(uVar12 - 4);
    plVar16 = (long *)((long)plVar16 + 4);
  }
  for (uVar11 = uVar13 >> 3; uVar11 != 0; uVar11 = uVar11 - 1) {
    *plVar16 = 0;
    plVar16 = plVar16 + (ulong)bVar22 * -2 + 1;
  }
  if ((uVar13 & 4) != 0) {
    *(uint32_t *)plVar16 = 0;
    plVar16 = (long *)((long)plVar16 + 4);
  }
  if ((uVar13 & 2) != 0) {
    *(uint16_t *)plVar16 = 0;
    plVar16 = (long *)((long)plVar16 + 2);
  }
  if (bVar21) {
    *(char *)plVar16 = '\0';
  }
                    /* try { // try from 004aed8a to 004aeddf has its CatchHandler @ 004af537 */
  uVar4 = FlashAnimationLibrary__GetLibraryEntry
                    (*(FlashAnimationLibrary **)(pcVar6 + 0x78),
                     *(int *)(*(long *)(pcVar6 + 8) + 0x20));
  piVar17 = (int *)(pcVar6 + 0x168);
  iVar14 = 0;
  do {
    iVar18 = iVar14 + 1;
    Sprint("charicon%i",local_68,iVar18);
    *piVar17 = iVar14;
    *(char **)(piVar17 + -2) = pcVar6;
    lVar5 = AddEditorButton(uVar4,*(uint64_t *)(pcVar6 + 0x78),local_68,0,0);
    *plVar20 = lVar5;
    if (lVar5 != 0) {
      *(code **)(lVar5 + 0x28) = EditorCharButton_Click;
      *(uint64_t *)(lVar5 + 0x20) = 0;
      *(uint64_t *)(lVar5 + 0x18) = 0;
      *(uint64_t *)(lVar5 + 0x38) = 0;
      *(uint64_t *)(lVar5 + 0x30) = 0;
      *(char **)(lVar5 + 0x40) = pcVar6 + ((long)iVar14 + 0x16) * 0x10;
    }
    plVar20 = plVar20 + 1;
    piVar17 = piVar17 + 4;
    iVar14 = iVar18;
  } while (iVar18 != 0x14);
  DAT_0081a648 /* R:1.1900140449902355e-38f */ = SMBEditor()::strDefaultObjectNames;
  defaultObjectForm = "Object Properties";
  keyObjectForm._8_8_ = SMBEditor()::strKeyObjectNames;
  keyObjectForm._0_8_ = s_Key_Properties_005c3110;
  pEditorCharForm = pcVar6;
  *(uint64_t *)(pcVar6 + 0x158) = *(uint64_t *)(pcVar6 + 0xb8);
  lVar5 = *(long *)(pcVar6 + 0x10);
  keyObjectDefault._0_4_ = 0;
  _DAT_0081a650 /* R:2.2420775429197073e-44f */ = 6;
  keyObjectForm._16_4_ = 6;
  keyObjectDefault._4_4_ = 0x3f400000;
  *(code **)(lVar5 + 0x28) = EditorForm_CharFormOk;
  *(uint64_t *)(lVar5 + 0x20) = 0;
  *(uint64_t *)(lVar5 + 0x18) = 0;
  *(uint64_t *)(lVar5 + 0x40) = 0;
  *(uint64_t *)(lVar5 + 0x38) = 0;
  *(uint64_t *)(lVar5 + 0x30) = 0;
  lVar5 = *(long *)(pcVar6 + 0x18);
  keyObjectDefault._8_4_ = 0;
  keyObjectDefault._12_4_ = 0;
  keyObjectDefault._16_4_ = 0;
  keyObjectDefault._20_4_ = 0;
  shooterObjectForm._16_4_ = 6;
  *(code **)(lVar5 + 0x28) = EditorForm_CharFormCancel;
  *(uint64_t *)(lVar5 + 0x20) = 0;
  *(uint64_t *)(lVar5 + 0x18) = 0;
  *(uint64_t *)(lVar5 + 0x40) = 0;
  *(uint64_t *)(lVar5 + 0x38) = 0;
  *(uint64_t *)(lVar5 + 0x30) = 0;
  shooterObjectForm._8_8_ = SMBEditor()::strShooterObjectNames;
  shooterObjectForm._0_8_ = s_Shooter_Properties_005c311f;
  shooterObjectDefault._0_4_ = 0;
  shooterObjectDefault._4_4_ = 0x3f800000;
  shooterObjectDefault._8_4_ = 0;
  shooterObjectDefault._12_4_ = 0;
  shooterObjectDefault._16_4_ = 0;
  shooterObjectDefault._20_4_ = 0;
  fanObjectForm._16_4_ = 6;
  fanObjectForm._8_8_ = SMBEditor()::strFanObjectNames;
  fanObjectForm._0_8_ = s_Fan_Properties_005c3132;
  fanObjectDefault._0_4_ = 0;
  fanObjectDefault._4_4_ = 0x3fc00000;
  fanObjectDefault._8_4_ = 0x43b90000;
  fanObjectDefault._12_4_ = 0x43af0000;
  fanObjectDefault._16_4_ = 0;
  fanObjectDefault._20_4_ = 0;
  orbObjectForm._16_4_ = 6;
  orbObjectForm._8_8_ = SMBEditor()::strOrbObjectNames;
  orbObjectForm._0_8_ = s_Orb_Properties_005c3141;
  orbObjectDefault._0_4_ = 0;
  orbObjectDefault._4_4_ = 0x3f800000;
  orbObjectDefault._8_4_ = 0xc4e10000;
  orbObjectDefault._12_4_ = 0;
  orbObjectDefault._16_4_ = 0xaa;
  orbObjectDefault._20_4_ = 0;
  switchObjectForm._16_4_ = 6;
  switchObjectForm._8_8_ = SMBEditor()::strSwitchObjectNames;
  switchObjectForm._0_8_ = s_Switch_Properties_005c3150;
  switchObjectDefault._0_4_ = 0xbf800000;
  switchObjectDefault._4_4_ = 0x3f800000;
  switchObjectDefault._8_4_ = 0x3d75c28f;
  switchObjectDefault._12_4_ = 0x40200000;
  switchObjectDefault._16_4_ = 0;
  switchObjectDefault._20_4_ = 0;
  quakeEmitterForm._16_4_ = 6;
  quakeEmitterForm._8_8_ = SMBEditor()::strQuakeEmitterNames;
  quakeEmitterForm._0_8_ = s_Quake_Emitter_Properties_005c3162;
  quakeEmitterDefault._0_4_ = 0;
  quakeEmitterDefault._4_4_ = 0x40c00000;
  quakeEmitterDefault._8_4_ = 0x40400000;
  quakeEmitterDefault._12_4_ = 0;
  quakeEmitterDefault._16_4_ = 0;
  quakeEmitterDefault._20_4_ = 3000;
  particleEmitterForm._16_4_ = 6;
  particleEmitterForm._8_8_ = SMBEditor()::strParticleEmitterObjectNames;
  particleEmitterForm._0_8_ = s_Particle_Emitter_Properties_005c317b;
  particleEmitterDefault._0_4_ = 0x40e00000;
  particleEmitterDefault._4_4_ = 0x437a0000;
  particleEmitterDefault._8_4_ = 0x3f800000;
  particleEmitterDefault._12_4_ = 0;
  particleEmitterDefault._16_4_ = 0xfaffad;
  particleEmitterDefault._20_4_ = 8;
  smokeEmitterForm._16_4_ = 6;
  smokeEmitterForm._8_8_ = SMBEditor()::strSmokeEmitterObjectNames;
  smokeEmitterForm._0_8_ = s_Smoke_Emitter_Properties_005c3197;
  smokeEmitterDefault._0_4_ = 0;
  smokeEmitterDefault._4_4_ = 0x3da3d70a;
  smokeEmitterDefault._8_4_ = 0xc1700000;
  smokeEmitterDefault._12_4_ = 0x42700000;
  smokeEmitterDefault._16_4_ = 0xc0c0c0;
  smokeEmitterDefault._20_4_ = 0x5dc;
  laserObjectForm._16_4_ = 6;
  laserObjectForm._8_8_ = SMBEditor()::strLaserObjectNames;
  laserObjectForm._0_8_ = s_Laser_Properties_005c31b0;
  laserObjectDefault._0_4_ = 0;
  laserObjectDefault._4_4_ = 0x3f800000;
  laserObjectDefault._8_4_ = 0x3fc00000;
  laserObjectDefault._12_4_ = 0x3fc00000;
  laserObjectDefault._16_4_ = 0;
  laserObjectDefault._20_4_ = 0;
  local_c8 = pEditorLib;
  local_c0 = "chapterform";
  local_b8 = "Create Chapter";
  local_88 = &DAT_005c31dc /* R:134673520.0f */;
  local_80 = "Cancel";
  local_78 = "Upload";
  local_b0 = "Name";
  local_a8 = "Levels";
  local_a0 = "Music";
  local_98 = "Library";
  local_90 = "Search";
                    /* try { // try from 004af299 to 004af29d has its CatchHandler @ 004af58d */
  this_02 = operator_new(0x838);
                    /* try { // try from 004af2ac to 004af2b0 has its CatchHandler @ 004af57d */
  EditorFormChapterUpload__EditorFormChapterUpload__004b8ec0(this_02,(EditorFormCreate *)&local_c8);
  lVar5 = *(long *)(this_02 + 0x10);
  pEditorChapterUploadForm = this_02;
  *(code **)(lVar5 + 0x28) = EditorForm_ChapterUploadFormSearch;
  *(uint64_t *)(lVar5 + 0x20) = 0;
  *(uint64_t *)(lVar5 + 0x18) = 0;
  *(uint64_t *)(lVar5 + 0x40) = 0;
  *(uint64_t *)(lVar5 + 0x38) = 0;
  *(uint64_t *)(lVar5 + 0x30) = 0;
  lVar5 = *(long *)(this_02 + 0x18);
  *(code **)(lVar5 + 0x28) = EditorForm_ChapterUploadFormCancel;
  *(uint64_t *)(lVar5 + 0x20) = 0;
  *(uint64_t *)(lVar5 + 0x18) = 0;
  *(uint64_t *)(lVar5 + 0x40) = 0;
  *(uint64_t *)(lVar5 + 0x38) = 0;
  *(uint64_t *)(lVar5 + 0x30) = 0;
  lVar5 = *(long *)(this_02 + 0x20);
  *(code **)(lVar5 + 0x28) = EditorForm_ChapterUploadFormOk;
  *(uint64_t *)(lVar5 + 0x20) = 0;
  *(uint64_t *)(lVar5 + 0x18) = 0;
  *(uint64_t *)(lVar5 + 0x40) = 0;
  *(uint64_t *)(lVar5 + 0x38) = 0;
  *(uint64_t *)(lVar5 + 0x30) = 0;
                    /* try { // try from 004af363 to 004af37b has its CatchHandler @ 004af58d */
  TResourceCreator__AddResourceCreationFunction
            ((TResourceCreator *)ResourceCreator,CreateSMBEditorResources,self);
  TResourceCreator__AddResourceDestroyFunction
            ((TResourceCreator *)ResourceCreator,DestroySMBEditorResources,self);
  if ((allocator *)(local_48[0] + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage) {
    LOCK();
    piVar17 = (int *)(local_48[0] + -8);
    iVar14 = *piVar17;
    *piVar17 = *piVar17 + -1;
    UNLOCK();
    if (iVar14 < 1) {
      std__string_Rep_M_destroy((allocator *)(local_48[0] + -0x18));
    }
  }
  return;
}

/* ======================================================================
 * SMBEditor__SetToTileMode__004af960  (Ghidra `SetToTileMode` @ 004af960)
 * Signature: uint8_t __thiscall SetToTileMode(SMBEditor * self)
 * Class: SMBEditor
 * Calls: `IsFlashFormActive`
 * Called by: `EditorButton_SetTileMode`, `SMBEditor__SetToTileMode`
 */
/* SMBEditor__SetToTileMode__004af960() */

void __thiscall SMBEditor__SetToTileMode__004af960(SMBEditor *self)

{
  int iVar1;
  
  iVar1 = IsFlashFormActive();
  if (iVar1 != 1) {
    SetToTileMode(self);
    return;
  }
  return;
}

/* ======================================================================
 * SMBEditor__SetToCameraMode__004af990  (Ghidra `SetToCameraMode` @ 004af990)
 * Signature: uint8_t __thiscall SetToCameraMode(SMBEditor * self)
 * Class: SMBEditor
 * Calls: `IsFlashFormActive`
 * Called by: `EditorButton_SetCameraMode`, `SMBEditor__SetToCameraMode`
 */
/* SMBEditor__SetToCameraMode__004af990() */

void __thiscall SMBEditor__SetToCameraMode__004af990(SMBEditor *self)

{
  int iVar1;
  
  iVar1 = IsFlashFormActive();
  if (iVar1 != 1) {
    SetToCameraMode(self);
    return;
  }
  return;
}

/* ======================================================================
 * SMBEditor__SetToParalaxMode  (Ghidra `SetToParalaxMode` @ 004af9c0)
 * Signature: uint8_t __thiscall SetToParalaxMode(SMBEditor * self)
 * Class: SMBEditor
 * Calls: `AddEditorLayerTween`, `CancelPastePiecesRendering`, `IsFlashFormActive`, `PasteSelectedPieces`, `PlaceSetPiece`, `RemoveSetPieces`, `ResetSetPieceSelection`, `SMBEditorForms__IsFormActive`, `TKeyboard__AddKeyCallback`, `TMouse__AddButtonCallback` (+3 more)
 * Called by: `EditorButton_SetParalaxMode`
 */
/* SMBEditor__SetToParalaxMode() */

void __thiscall SMBEditor__SetToParalaxMode(SMBEditor *self)

{
  ushort uVar1;
  uint64_t uVar2;
  TMouse *pTVar3;
  int iVar4;
  LevelRenderLayer *pLVar5;
  long lVar6;
  Light *local_18 [2];
  
  iVar4 = IsFlashFormActive();
  if (iVar4 != 1) {
    if (((*(int *)(self + 0xc0) != 1) &&
        (*(uint16_t *)(self + 0x98) = 0, *(int *)(self + 0xa0) == 1)) &&
       (uVar1 = *(ushort *)(self + 0x9a), uVar1 != 0)) {
      lVar6 = 0;
      do {
        *(uint16_t *)(*(long *)(self + 0xb0) + lVar6) = 0xffff;
        lVar6 = lVar6 + 2;
      } while (lVar6 != (ulong)(uVar1 - 1 & 0xffff) * 2 + 2);
    }
    uVar2 = lastParalax._8_8_;
    *(uint32_t *)(self + 0xc0) = 1;
    *(uint64_t *)(self + 0x10) = uVar2;
    *(uint64_t *)(self + 0x18) = lastParalax._16_8_;
    *(uint64_t *)(self + 0x20) = lastParalax._24_8_;
    *(uint16_t *)(self + 0x28) = lastParalax._32_2_;
    *(uint32_t *)(self + 0x2c) = lastParalax._36_4_;
    *(uint32_t *)(self + 0x30) = lastParalax._40_4_;
    *(uint32_t *)(self + 0x34) = lastParalax._44_4_;
    *(uint32_t *)(self + 0x38) = lastParalax._48_4_;
    Vector2__operator_assign((Vector2 *)(self + 0x3c),(Vector2 *)(lastParalax + 0x34));
    lVar6 = SuperMeatBoyEditor;
    *(uint32_t *)(self + 0x44) = lastParalax._60_4_;
    *(uint32_t *)(self + 0x48) = lastParalax._64_4_;
    *(uint32_t *)(self + 0x4c) = lastParalax._68_4_;
    *(uint32_t *)(self + 0x50) = lastParalax._72_4_;
    *(uint64_t *)(self + 0x54) = lastParalax._76_8_;
    *(uint64_t *)(self + 0x5c) = lastParalax._84_8_;
    *(uint64_t *)(self + 0x68) = lastParalax._96_8_;
    if (pSelectedLight == (Light *)0x0) {
      local_18[0] = *(Light **)(lVar6 + 200);
      if (local_18[0] != (Light *)0x0) {
        TileLevelLightMap__DestroyLight(*(TileLevelLightMap **)(SuperMeatBoy + 0x390),local_18);
      }
    }
    else {
      local_18[0] = pSelectedLight;
    }
    pSelectedLight = (Light *)0x0;
    if ((2 < *(int *)(self + 0xd0) - 3U) && (iVar4 = SMBEditorForms__IsFormActive(), iVar4 != 1)) {
      FlashTextField__SetText(pCurrentLayerField,"Back Tile General");
      *(uint32_t *)(SuperMeatBoyEditor + 0xd0) = 3;
      pLVar5 = (LevelRenderLayer *)TileLevel__getLevelLayer(*(TileLevel **)(SuperMeatBoy + 0x40));
      AddEditorLayerTween(pLVar5,0);
    }
    TKeyboard__AddKeyCallback(Keyboard,0x69,0,0);
    TKeyboard__AddKeyCallback(Keyboard,0x24,0,0);
    TKeyboard__AddKeyCallback(Keyboard,0x1d,RemoveSetPieces,0);
    TKeyboard__AddKeyCallback(Keyboard,0x34,0,0);
    pTVar3 = Mouse;
    lVar6 = pEditorWaypointsButton;
    bSetPieceWayPointMode = 0;
    pCurrentSetPieceWayPoint = 0;
    *(uint8_t *)(pEditorWaypointsButton + 0x4b) = 1;
    *(uint32_t *)(*(long *)(lVar6 + 0x10) + 0x20) = 0xffffffff;
    lVar6 = pEditorPropertiesButton;
    *(uint8_t *)(pEditorPropertiesButton + 0x4b) = 1;
    *(uint32_t *)(*(long *)(lVar6 + 0x10) + 0x20) = 0xffffffff;
    if (pTVar3 != (TMouse *)0x0) {
      if (bRenderCopiedElements == 1) {
        TMouse__AddButtonCallback(pTVar3,0,PasteSelectedPieces,0);
        TMouse__AddButtonCallback(Mouse,1,CancelPastePiecesRendering,0);
      }
      else {
        TMouse__AddButtonCallback(pTVar3,0,PlaceSetPiece,0);
        TMouse__AddButtonCallback(Mouse,1,ResetSetPieceSelection,0);
      }
    }
    lVar6 = (&pEditorFunctionButtons)[*(int *)(self + 0xc0)];
    if (lVar6 != 0) {
      if (pCurrentFunctionButton != 0) {
        if (lVar6 == pCurrentFunctionButton) {
          pCurrentFunctionButton = lVar6;
          return;
        }
        *(uint8_t *)(pCurrentFunctionButton + 0x4a) = 0;
        *(uint16_t *)(pCurrentFunctionButton + 0x48) = 0;
      }
      *(uint8_t *)(lVar6 + 0x4a) = 1;
      pCurrentFunctionButton = lVar6;
    }
  }
  return;
}

/* ======================================================================
 * SMBEditor__SetToSetPieceMode  (Ghidra `SetToSetPieceMode` @ 004afd00)
 * Signature: uint8_t __thiscall SetToSetPieceMode(SMBEditor * self)
 * Class: SMBEditor
 * Calls: `CancelPastePiecesRendering`, `IsFlashFormActive`, `PasteSelectedPieces`, `PlaceSetPiece`, `RemoveSetPieces`, `ResetSetPieceSelection`, `SetPieceWayPointMode`, `TKeyboard__AddKeyCallback`, `TMouse__AddButtonCallback`, `TileLevelLightMap__DestroyLight` (+1 more)
 * Called by: `EditorButton_SetSetPieceMode`
 */
/* SMBEditor__SetToSetPieceMode() */

void __thiscall SMBEditor__SetToSetPieceMode(SMBEditor *self)

{
  ushort uVar1;
  uint64_t uVar2;
  TMouse *pTVar3;
  int iVar4;
  long lVar5;
  Light *local_18 [2];
  
  iVar4 = IsFlashFormActive();
  if (iVar4 != 1) {
    if (((*(int *)(self + 0xc0) != 2) &&
        (*(uint16_t *)(self + 0x98) = 0, *(int *)(self + 0xa0) == 1)) &&
       (uVar1 = *(ushort *)(self + 0x9a), uVar1 != 0)) {
      lVar5 = 0;
      do {
        *(uint16_t *)(*(long *)(self + 0xb0) + lVar5) = 0xffff;
        lVar5 = lVar5 + 2;
      } while (lVar5 != (ulong)(uVar1 - 1 & 0xffff) * 2 + 2);
    }
    uVar2 = lastSetPiece._8_8_;
    *(uint32_t *)(self + 0xc0) = 2;
    *(uint64_t *)(self + 0x10) = uVar2;
    *(uint64_t *)(self + 0x18) = lastSetPiece._16_8_;
    *(uint64_t *)(self + 0x20) = lastSetPiece._24_8_;
    *(uint16_t *)(self + 0x28) = lastSetPiece._32_2_;
    *(uint32_t *)(self + 0x2c) = lastSetPiece._36_4_;
    *(uint32_t *)(self + 0x30) = lastSetPiece._40_4_;
    *(uint32_t *)(self + 0x34) = lastSetPiece._44_4_;
    *(uint32_t *)(self + 0x38) = lastSetPiece._48_4_;
    Vector2__operator_assign((Vector2 *)(self + 0x3c),(Vector2 *)(lastSetPiece + 0x34));
    lVar5 = SuperMeatBoyEditor;
    *(uint32_t *)(self + 0x44) = lastSetPiece._60_4_;
    *(uint32_t *)(self + 0x48) = lastSetPiece._64_4_;
    *(uint32_t *)(self + 0x4c) = lastSetPiece._68_4_;
    *(uint32_t *)(self + 0x50) = lastSetPiece._72_4_;
    *(uint64_t *)(self + 0x54) = lastSetPiece._76_8_;
    *(uint64_t *)(self + 0x5c) = lastSetPiece._84_8_;
    *(uint64_t *)(self + 0x68) = lastSetPiece._96_8_;
    if (pSelectedLight == (Light *)0x0) {
      local_18[0] = *(Light **)(lVar5 + 200);
      if (local_18[0] != (Light *)0x0) {
        TileLevelLightMap__DestroyLight(*(TileLevelLightMap **)(SuperMeatBoy + 0x390),local_18);
      }
    }
    else {
      local_18[0] = pSelectedLight;
    }
    pSelectedLight = (Light *)0x0;
    TKeyboard__AddKeyCallback(Keyboard,0x69,0,0);
    TKeyboard__AddKeyCallback(Keyboard,0x24,0,0);
    TKeyboard__AddKeyCallback(Keyboard,0x1d,RemoveSetPieces,0);
    TKeyboard__AddKeyCallback(Keyboard,0x34,SetPieceWayPointMode,0);
    pTVar3 = Mouse;
    lVar5 = pEditorWaypointsButton;
    bSetPieceWayPointMode = 0;
    pCurrentSetPieceWayPoint = 0;
    *(uint8_t *)(pEditorWaypointsButton + 0x4b) = 0;
    *(uint32_t *)(*(long *)(lVar5 + 0x10) + 0x20) = *(uint32_t *)(lVar5 + 0x4c);
    lVar5 = pEditorPropertiesButton;
    *(uint8_t *)(pEditorPropertiesButton + 0x4b) = 1;
    *(uint32_t *)(*(long *)(lVar5 + 0x10) + 0x20) = 0xffffffff;
    if (pTVar3 != (TMouse *)0x0) {
      if (bRenderCopiedElements == 1) {
        TMouse__AddButtonCallback(pTVar3,0,PasteSelectedPieces,0);
        TMouse__AddButtonCallback(Mouse,1,CancelPastePiecesRendering,0);
      }
      else {
        TMouse__AddButtonCallback(pTVar3,0,PlaceSetPiece,0);
        TMouse__AddButtonCallback(Mouse,1,ResetSetPieceSelection,0);
      }
    }
    lVar5 = (&pEditorFunctionButtons)[*(int *)(self + 0xc0)];
    if (lVar5 != 0) {
      if (pCurrentFunctionButton != 0) {
        if (lVar5 == pCurrentFunctionButton) {
          pCurrentFunctionButton = lVar5;
          return;
        }
        *(uint8_t *)(pCurrentFunctionButton + 0x4a) = 0;
        *(uint16_t *)(pCurrentFunctionButton + 0x48) = 0;
      }
      *(uint8_t *)(lVar5 + 0x4a) = 1;
      pCurrentFunctionButton = lVar5;
    }
  }
  return;
}

/* ======================================================================
 * SMBEditor__SetToAnimationMode  (Ghidra `SetToAnimationMode` @ 004affd0)
 * Signature: uint8_t __thiscall SetToAnimationMode(SMBEditor * self)
 * Class: SMBEditor
 * Calls: `CancelPastePiecesRendering`, `IsFlashFormActive`, `PasteSelectedPieces`, `PlaceSetPiece`, `RemoveSetPieces`, `ResetSetPieceSelection`, `SetPieceWayPointMode`, `TKeyboard__AddKeyCallback`, `TMouse__AddButtonCallback`, `TileLevelLightMap__DestroyLight` (+1 more)
 * Called by: `EditorButton_SetAnimationMode`
 */
/* SMBEditor__SetToAnimationMode() */

void __thiscall SMBEditor__SetToAnimationMode(SMBEditor *self)

{
  ushort uVar1;
  uint64_t uVar2;
  TMouse *pTVar3;
  int iVar4;
  long lVar5;
  Light *local_18 [2];
  
  iVar4 = IsFlashFormActive();
  if (iVar4 != 1) {
    if (((*(int *)(self + 0xc0) != 4) &&
        (*(uint16_t *)(self + 0x98) = 0, *(int *)(self + 0xa0) == 1)) &&
       (uVar1 = *(ushort *)(self + 0x9a), uVar1 != 0)) {
      lVar5 = 0;
      do {
        *(uint16_t *)(*(long *)(self + 0xb0) + lVar5) = 0xffff;
        lVar5 = lVar5 + 2;
      } while (lVar5 != (ulong)(uVar1 - 1 & 0xffff) * 2 + 2);
    }
    uVar2 = lastAnimation._8_8_;
    *(uint32_t *)(self + 0xc0) = 4;
    *(uint64_t *)(self + 0x10) = uVar2;
    *(uint64_t *)(self + 0x18) = lastAnimation._16_8_;
    *(uint64_t *)(self + 0x20) = lastAnimation._24_8_;
    *(uint16_t *)(self + 0x28) = lastAnimation._32_2_;
    *(uint32_t *)(self + 0x2c) = lastAnimation._36_4_;
    *(uint32_t *)(self + 0x30) = lastAnimation._40_4_;
    *(uint32_t *)(self + 0x34) = lastAnimation._44_4_;
    *(uint32_t *)(self + 0x38) = lastAnimation._48_4_;
    Vector2__operator_assign((Vector2 *)(self + 0x3c),(Vector2 *)(lastAnimation + 0x34));
    lVar5 = SuperMeatBoyEditor;
    *(uint32_t *)(self + 0x44) = lastAnimation._60_4_;
    *(uint32_t *)(self + 0x48) = lastAnimation._64_4_;
    *(uint32_t *)(self + 0x4c) = lastAnimation._68_4_;
    *(uint32_t *)(self + 0x50) = lastAnimation._72_4_;
    *(uint64_t *)(self + 0x54) = lastAnimation._76_8_;
    *(uint64_t *)(self + 0x5c) = lastAnimation._84_8_;
    *(uint64_t *)(self + 0x68) = lastAnimation._96_8_;
    if (pSelectedLight == (Light *)0x0) {
      local_18[0] = *(Light **)(lVar5 + 200);
      if (local_18[0] != (Light *)0x0) {
        TileLevelLightMap__DestroyLight(*(TileLevelLightMap **)(SuperMeatBoy + 0x390),local_18);
      }
    }
    else {
      local_18[0] = pSelectedLight;
    }
    pSelectedLight = (Light *)0x0;
    TKeyboard__AddKeyCallback(Keyboard,0x69,0,0);
    TKeyboard__AddKeyCallback(Keyboard,0x24,0,0);
    TKeyboard__AddKeyCallback(Keyboard,0x1d,RemoveSetPieces,0);
    TKeyboard__AddKeyCallback(Keyboard,0x34,SetPieceWayPointMode,0);
    pTVar3 = Mouse;
    lVar5 = pEditorWaypointsButton;
    bSetPieceWayPointMode = 0;
    pCurrentSetPieceWayPoint = 0;
    *(uint8_t *)(pEditorWaypointsButton + 0x4b) = 0;
    *(uint32_t *)(*(long *)(lVar5 + 0x10) + 0x20) = *(uint32_t *)(lVar5 + 0x4c);
    lVar5 = pEditorPropertiesButton;
    *(uint8_t *)(pEditorPropertiesButton + 0x4b) = 1;
    *(uint32_t *)(*(long *)(lVar5 + 0x10) + 0x20) = 0xffffffff;
    if (pTVar3 != (TMouse *)0x0) {
      if (bRenderCopiedElements == 1) {
        TMouse__AddButtonCallback(pTVar3,0,PasteSelectedPieces,0);
        TMouse__AddButtonCallback(Mouse,1,CancelPastePiecesRendering,0);
      }
      else {
        TMouse__AddButtonCallback(pTVar3,0,PlaceSetPiece,0);
        TMouse__AddButtonCallback(Mouse,1,ResetSetPieceSelection,0);
      }
    }
    lVar5 = (&pEditorFunctionButtons)[*(int *)(self + 0xc0)];
    if (lVar5 != 0) {
      if (pCurrentFunctionButton != 0) {
        if (lVar5 == pCurrentFunctionButton) {
          pCurrentFunctionButton = lVar5;
          return;
        }
        *(uint8_t *)(pCurrentFunctionButton + 0x4a) = 0;
        *(uint16_t *)(pCurrentFunctionButton + 0x48) = 0;
      }
      *(uint8_t *)(lVar5 + 0x4a) = 1;
      pCurrentFunctionButton = lVar5;
    }
  }
  return;
}

/* ======================================================================
 * SMBEditor__SetToObstacleMode  (Ghidra `SetToObstacleMode` @ 004b02a0)
 * Signature: uint8_t __thiscall SetToObstacleMode(SMBEditor * self)
 * Class: SMBEditor
 * Calls: `CancelPastePiecesRendering`, `IsFlashFormActive`, `PasteSelectedPieces`, `PlaceSetPiece`, `RemoveSetPieces`, `ResetSetPieceSelection`, `SetPieceWayPointMode`, `TKeyboard__AddKeyCallback`, `TMouse__AddButtonCallback`, `TileLevelLightMap__DestroyLight` (+1 more)
 * Called by: `EditorButton_SetObstacleMode`
 */
/* SMBEditor__SetToObstacleMode() */

void __thiscall SMBEditor__SetToObstacleMode(SMBEditor *self)

{
  ushort uVar1;
  uint64_t uVar2;
  TMouse *pTVar3;
  int iVar4;
  long lVar5;
  Light *local_18 [2];
  
  iVar4 = IsFlashFormActive();
  if (iVar4 != 1) {
    if (((*(int *)(self + 0xc0) != 5) &&
        (*(uint16_t *)(self + 0x98) = 0, *(int *)(self + 0xa0) == 1)) &&
       (uVar1 = *(ushort *)(self + 0x9a), uVar1 != 0)) {
      lVar5 = 0;
      do {
        *(uint16_t *)(*(long *)(self + 0xb0) + lVar5) = 0xffff;
        lVar5 = lVar5 + 2;
      } while (lVar5 != (ulong)(uVar1 - 1 & 0xffff) * 2 + 2);
    }
    uVar2 = lastObstacle._8_8_;
    *(uint32_t *)(self + 0xc0) = 5;
    *(uint64_t *)(self + 0x10) = uVar2;
    *(uint64_t *)(self + 0x18) = lastObstacle._16_8_;
    *(uint64_t *)(self + 0x20) = lastObstacle._24_8_;
    *(uint16_t *)(self + 0x28) = lastObstacle._32_2_;
    *(uint32_t *)(self + 0x2c) = lastObstacle._36_4_;
    *(uint32_t *)(self + 0x30) = lastObstacle._40_4_;
    *(uint32_t *)(self + 0x34) = lastObstacle._44_4_;
    *(uint32_t *)(self + 0x38) = lastObstacle._48_4_;
    Vector2__operator_assign((Vector2 *)(self + 0x3c),(Vector2 *)(lastObstacle + 0x34));
    lVar5 = SuperMeatBoyEditor;
    *(uint32_t *)(self + 0x44) = lastObstacle._60_4_;
    *(uint32_t *)(self + 0x48) = lastObstacle._64_4_;
    *(uint32_t *)(self + 0x4c) = lastObstacle._68_4_;
    *(uint32_t *)(self + 0x50) = lastObstacle._72_4_;
    *(uint64_t *)(self + 0x54) = lastObstacle._76_8_;
    *(uint64_t *)(self + 0x5c) = lastObstacle._84_8_;
    *(uint64_t *)(self + 0x68) = lastObstacle._96_8_;
    if (pSelectedLight == (Light *)0x0) {
      local_18[0] = *(Light **)(lVar5 + 200);
      if (local_18[0] != (Light *)0x0) {
        TileLevelLightMap__DestroyLight(*(TileLevelLightMap **)(SuperMeatBoy + 0x390),local_18);
      }
    }
    else {
      local_18[0] = pSelectedLight;
    }
    pSelectedLight = (Light *)0x0;
    TKeyboard__AddKeyCallback(Keyboard,0x69,0,0);
    TKeyboard__AddKeyCallback(Keyboard,0x24,0,0);
    TKeyboard__AddKeyCallback(Keyboard,0x1d,RemoveSetPieces,0);
    TKeyboard__AddKeyCallback(Keyboard,0x34,SetPieceWayPointMode,0);
    pTVar3 = Mouse;
    lVar5 = pEditorWaypointsButton;
    bSetPieceWayPointMode = 0;
    pCurrentSetPieceWayPoint = 0;
    *(uint8_t *)(pEditorWaypointsButton + 0x4b) = 0;
    *(uint32_t *)(*(long *)(lVar5 + 0x10) + 0x20) = *(uint32_t *)(lVar5 + 0x4c);
    lVar5 = pEditorPropertiesButton;
    *(uint8_t *)(pEditorPropertiesButton + 0x4b) = 0;
    *(uint32_t *)(*(long *)(lVar5 + 0x10) + 0x20) = *(uint32_t *)(lVar5 + 0x4c);
    if (pTVar3 != (TMouse *)0x0) {
      if (bRenderCopiedElements == 1) {
        TMouse__AddButtonCallback(pTVar3,0,PasteSelectedPieces,0);
        TMouse__AddButtonCallback(Mouse,1,CancelPastePiecesRendering,0);
      }
      else {
        TMouse__AddButtonCallback(pTVar3,0,PlaceSetPiece,0);
        TMouse__AddButtonCallback(Mouse,1,ResetSetPieceSelection,0);
      }
    }
    lVar5 = (&pEditorFunctionButtons)[*(int *)(self + 0xc0)];
    if (lVar5 != 0) {
      if (pCurrentFunctionButton != 0) {
        if (lVar5 == pCurrentFunctionButton) {
          pCurrentFunctionButton = lVar5;
          return;
        }
        *(uint8_t *)(pCurrentFunctionButton + 0x4a) = 0;
        *(uint16_t *)(pCurrentFunctionButton + 0x48) = 0;
      }
      *(uint8_t *)(lVar5 + 0x4a) = 1;
      pCurrentFunctionButton = lVar5;
    }
  }
  return;
}

/* ======================================================================
 * SMBEditor__SetToLightingMode__004b0570  (Ghidra `SetToLightingMode` @ 004b0570)
 * Signature: uint8_t __thiscall SetToLightingMode(SMBEditor * self)
 * Class: SMBEditor
 * Calls: `IsFlashFormActive`
 * Called by: `EditorButton_SetLightMode`, `SMBEditor__SetToLightingMode`
 */
/* SMBEditor__SetToLightingMode__004b0570() */

void __thiscall SMBEditor__SetToLightingMode__004b0570(SMBEditor *self)

{
  int iVar1;
  
  if (*(int *)(self + 0xc0) != 6) {
    iVar1 = IsFlashFormActive();
    if (iVar1 != 1) {
      SetToLightingMode(self);
      return;
    }
  }
  return;
}

/* ======================================================================
 * SMBEditor__SetToAnimalMode__004b05a0  (Ghidra `SetToAnimalMode` @ 004b05a0)
 * Signature: uint8_t __thiscall SetToAnimalMode(SMBEditor * self)
 * Class: SMBEditor
 * Calls: `IsFlashFormActive`, `SMBAnimals__IsValidAnimal`
 * Called by: `EditorButton_SetAnimalMode`, `SMBEditor__SetToAnimalMode`
 */
/* SMBEditor__SetToAnimalMode__004b05a0() */

void __thiscall SMBEditor__SetToAnimalMode__004b05a0(SMBEditor *self)

{
  int iVar1;
  int iVar2;
  
  if ((*(int *)(self + 0xc0) != 7) && (iVar1 = IsFlashFormActive(), iVar1 != 1)) {
    iVar1 = 0;
    while (iVar2 = SMBAnimals__IsValidAnimal
                             (*(SMBAnimals **)(GSuperMeatBoy__pLevelPalette + 0x41e8),iAnimalIDX),
          iVar2 == 0) {
      if (iVar1 == 0x14) {
        return;
      }
      iAnimalIDX = iAnimalIDX + 1;
      if (iAnimalIDX < 0x14) {
        if (iAnimalIDX < 0) {
          iAnimalIDX = 0x13;
        }
      }
      else {
        iAnimalIDX = 0;
      }
      iVar1 = iVar1 + 1;
    }
    if (iVar1 != 0x14) {
      SetToAnimalMode(self);
      return;
    }
  }
  return;
}

/* ======================================================================
 * SMBEditor__SwitchEditorMode  (Ghidra `SwitchEditorMode` @ 004b0640)
 * Signature: uint8_t __thiscall SwitchEditorMode(SMBEditor * self)
 * Class: SMBEditor
 * Calls: `IsFlashFormActive`, `TKeyboard__GetExclusiveState`
 * Called by: (none)
 */
/* SMBEditor__SwitchEditorMode() */

void __thiscall SMBEditor__SwitchEditorMode(SMBEditor *self)

{
  int iVar1;
  
  if ((Keyboard != (TKeyboard *)0x0) && (Mouse != 0)) {
    iVar1 = TKeyboard__GetExclusiveState(Keyboard,0x15);
    if ((iVar1 == 1) &&
       ((iVar1 = TKeyboard__GetExclusiveState(Keyboard,0x40), iVar1 != 2 &&
        (iVar1 = TKeyboard__GetExclusiveState(Keyboard,0x6b), iVar1 != 2)))) {
      iVar1 = IsFlashFormActive();
      if (iVar1 == 1) {
        return;
      }
      SetToCameraMode(self);
      return;
    }
    iVar1 = TKeyboard__GetExclusiveState(Keyboard,0x7a);
    if (iVar1 == 1) {
      iVar1 = IsFlashFormActive();
      if (iVar1 != 1) {
        SetToTileMode(self);
        return;
      }
    }
    else {
      iVar1 = TKeyboard__GetExclusiveState(Keyboard,0x8c);
      if (iVar1 == 1) {
        SetToParalaxMode(self);
        return;
      }
      iVar1 = TKeyboard__GetExclusiveState(Keyboard,0x8f);
      if (iVar1 == 1) {
        SetToSetPieceMode(self);
        return;
      }
      iVar1 = TKeyboard__GetExclusiveState(Keyboard,0x8d);
      if (iVar1 == 1) {
        SetToAnimationMode(self);
        return;
      }
      iVar1 = TKeyboard__GetExclusiveState(Keyboard,0x36);
      if (iVar1 == 1) {
        SetToObstacleMode(self);
        return;
      }
      iVar1 = TKeyboard__GetExclusiveState(Keyboard,0x3e);
      if (iVar1 == 1) {
        if ((*(int *)(self + 0xc0) != 6) && (iVar1 = IsFlashFormActive(), iVar1 != 1)) {
          SetToLightingMode(self);
          return;
        }
      }
      else {
        iVar1 = TKeyboard__GetExclusiveState(Keyboard,0x4d);
        if (iVar1 == 1) {
          SetToAnimalMode(self);
          return;
        }
      }
    }
  }
  return;
}

/* ======================================================================
 * SMBEditor__Update  (Ghidra `Update` @ 004b0810)
 * Signature: uint8_t __thiscall Update(SMBEditor * self)
 * Class: SMBEditor
 * Calls: `Camera__ScreenToWorld`, `CancelPasteTileRendering`, `CopySelected_Selection`, `EditorButton__IsMouseOverButton`, `EditorForm__Activate`, `GSetPieceWayPoints__EditorUpdate`, `IsEditorFunctionAllowed`, `IsFlashFormActive`, `PasteSelectedTiles`, `RunCommandOnSelection` (+10 more)
 * Called by: `GSuperMeatBoy__Update__00516690`
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SMBEditor__Update() */

void __thiscall SMBEditor__Update(SMBEditor *self)

{
  uint32_t uVar1;
  uint32_t *puVar2;
  float *pfVar3;
  long lVar4;
  SMBEditor SVar5;
  ushort uVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  long lVar10;
  byte bVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  TKeyboard *pTVar15;
  float fVar16;
  bool bVar17;
  float fVar18;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  uint32_t local_38;
  uint32_t local_34;
  uint32_t local_28;
  uint32_t local_24;
  int local_20;
  int local_1c;
  
  if (Keyboard == (TKeyboard *)0x0) {
    return;
  }
  if (pCurrentVisibleForm != (long *)0x0) {
    (**(code **)(*pCurrentVisibleForm + 0x10))();
  }
  TileLevelLightMap__RegenerateLights(*(TileLevelLightMap **)(SuperMeatBoy + 0x390));
  SMBEditorForms__IsFormActive();
  if (pEditorButtons._40_2_ != 0) {
    uVar14 = 0;
    do {
      iVar7 = EditorButton__IsMouseOverButton
                        (*(EditorButton **)(pEditorButtons._56_8_ + (uVar14 & 0xffff) * 8));
      if (iVar7 == 1) goto LAB_004b0892;
      uVar13 = (int)uVar14 + 1;
      uVar14 = (ulong)uVar13;
    } while ((int)uVar13 < (int)(uint)(ushort)pEditorButtons._40_2_);
  }
  FlashAnimationLibrary__SetTextFieldText(pEditorLib,"hotkey",&DAT_005ca3d2 /* R:u32=1931804704 */);
LAB_004b0892:
  if (pEditorButtons._40_2_ != 0) {
    uVar14 = 0;
    do {
      uVar12 = uVar14 & 0xffff;
      uVar13 = (int)uVar14 + 1;
      uVar14 = (ulong)uVar13;
      (**(code **)(**(long **)(pEditorButtons._56_8_ + uVar12 * 8) + 0x48))();
    } while ((int)uVar13 < (int)(uint)(ushort)pEditorButtons._40_2_);
  }
  UpdateEditorLayerTweens();
  UpdateEditorFunctionButtonStates();
  FlashTextField__SetText
            (pObjectInfoField,"Objects: %i / 400",
             (ulong)*(uint *)(*(long *)(SuperMeatBoy + 0x40) + 0x68));
  GSetPieceWayPoints__EditorUpdate(SetPieceWayPoints);
  local_48 = 0.0;
  local_44 = 0.0;
  local_40 = 0.0;
  *(uint *)(self + 0xf8) = (uint)(*(int *)(Keyboard + 0x28c) == 2);
  local_38 = *(uint32_t *)(Mouse + 0xc);
  local_34 = *(uint32_t *)(Mouse + 0x10);
  local_3c = 0.0;
  Camera__ScreenToWorld
            (*(Camera **)(SuperMeatBoy + 0x38),(FPUVector *)&local_48,(Vector2 *)&local_38,0.0);
  if ((*(int *)(Keyboard + 0xe8) == 2) && (iVar7 = IsFlashFormActive(), iVar7 == 0)) {
    TileLevel__GetGridIndex__0058dd90
              (*(TileLevel **)(SuperMeatBoy + 0x40),(Vector2 *)&local_48,(Vector2 *)&local_28,
               &local_20,&local_1c);
    Vector2__operator_assign((Vector2 *)(*(long *)(SuperMeatBoy + 0x40) + 0x22a8),(Vector2 *)&local_28);
    Vector2__operator_assign((Vector2 *)&local_28,(Vector2 *)(*(long *)(SuperMeatBoy + 0x40) + 0x22a8));
    puVar2 = *(uint32_t **)(*(long *)(SuperMeatBoy + 0x38) + 0x1180);
    *puVar2 = local_28;
    puVar2[1] = local_24;
  }
  iVar7 = SMBEditorForms__IsFormActive();
  if (iVar7 == 0) {
    lVar10 = *(long *)(SuperMeatBoy + 0x38);
    local_4c = *(float *)(lVar10 + 0x100);
    uVar1 = *(uint32_t *)(lVar10 + 0x10c);
    local_50 = *(float *)(lVar10 + 0x104);
    local_54 = *(float *)(lVar10 + 0x108);
    iVar7 = TKeyboard__GetExclusiveState(Keyboard,0x83);
    if ((iVar7 == 2) && (iVar7 = IsFlashFormActive(), iVar7 == 0)) {
      local_50 = local_50 + _DAT_005bfd00 /* R:10.0f */;
    }
    iVar7 = TKeyboard__GetExclusiveState(Keyboard,0x71);
    if ((iVar7 == 2) && (iVar7 = IsFlashFormActive(), iVar7 == 0)) {
      local_50 = local_50 - _DAT_005bfd00 /* R:10.0f */;
    }
    iVar7 = TKeyboard__GetExclusiveState(Keyboard,10);
    if ((iVar7 == 2) && (iVar7 = IsFlashFormActive(), iVar7 == 0)) {
      local_4c = local_4c - _DAT_005bfd00 /* R:10.0f */;
    }
    iVar7 = TKeyboard__GetExclusiveState(Keyboard,0x1b);
    if ((iVar7 == 2) && (iVar7 = IsFlashFormActive(), iVar7 == 0)) {
      local_4c = local_4c + _DAT_005bfd00 /* R:10.0f */;
    }
    iVar7 = TKeyboard__GetExclusiveState(Keyboard,0x20);
    if ((iVar7 == 2) && (iVar7 = IsFlashFormActive(), iVar7 == 0)) {
      local_54 = local_54 + _DAT_005bfd00 /* R:10.0f */;
    }
    iVar7 = TKeyboard__GetExclusiveState(Keyboard,0x68);
    if ((iVar7 == 2) && (iVar7 = IsFlashFormActive(), iVar7 == 0)) {
      local_54 = local_54 - _DAT_005bfd00 /* R:10.0f */;
    }
    lVar4 = SuperMeatBoy;
    lVar10 = *(long *)(SuperMeatBoy + 0x38);
    *(float *)(lVar10 + 0x100) = local_4c;
    *(float *)(lVar10 + 0x104) = local_50;
    *(uint32_t *)(lVar10 + 0x1d4) = 1;
    *(uint32_t *)(lVar10 + 0x10c) = uVar1;
    fVar18 = 0.0;
    if (local_54 <= 0.0) {
      fVar18 = local_54;
    }
    *(float *)(lVar10 + 0x108) = fVar18;
    lVar10 = *(long *)(lVar4 + 0x38);
    *(uint32_t *)(lVar10 + 0x1d4) = 1;
    *(uint32_t *)(lVar10 + 0x118) = 0;
    *(uint32_t *)(lVar10 + 0x11c) = 0;
    *(uint32_t *)(lVar10 + 0x110) = *(uint32_t *)(lVar10 + 0x100);
    *(uint32_t *)(lVar10 + 0x114) = *(uint32_t *)(lVar10 + 0x104);
    SMBCamera__Update(*(SMBCamera **)(lVar4 + 0x38));
  }
  pfVar3 = pSelectedLight;
  iVar7 = *(int *)(self + 0xc0);
  pTVar15 = Keyboard;
  if (iVar7 == 3) goto LAB_004b0abf;
  if (iVar7 == 0) {
    bVar17 = bRenderCopiedElements == 1;
    *(uint32_t *)(self + 0xd4) = 0xffffffff;
    if (bVar17) {
      if ((*(int *)(Keyboard + 0x334) != 2) && (*(int *)(Keyboard + 0x544) != 2)) {
        if ((*(int *)(Keyboard + 0x310) == 2) || (*(int *)(Keyboard + 0x514) == 2)) {
          if (*(float *)(Mouse + 8) <= 0.0) {
            if (0.0 <= *(float *)(Mouse + 8)) goto LAB_004b0a40;
            iSelectedScale = iSelectedScale + -1;
          }
          else {
            iSelectedScale = iSelectedScale + 1;
          }
          if (iSelectedScale < 4) {
            if (iSelectedScale < 0) {
              iSelectedScale = 3;
            }
          }
          else {
            iSelectedScale = 0;
          }
        }
        else {
          if (*(float *)(Mouse + 8) <= 0.0) {
            if (0.0 <= *(float *)(Mouse + 8)) goto LAB_004b0a40;
            iSelectedRotation = iSelectedRotation + -1;
          }
          else {
            iSelectedRotation = iSelectedRotation + 1;
          }
          if (iSelectedRotation < 4) {
            if (iSelectedRotation < 0) {
              iSelectedRotation = 3;
            }
          }
          else {
            iSelectedRotation = 0;
          }
        }
      }
    }
    else if ((*(int *)(Keyboard + 0x334) == 2) || (*(int *)(Keyboard + 0x544) == 2)) {
      if (*(float *)(Mouse + 8) <= 0.0) {
        if (0.0 <= *(float *)(Mouse + 8)) goto LAB_004b0a40;
        SVar5 = self[2];
        bVar11 = ((byte)SVar5 & 0xfc) + 0xc;
      }
      else {
        SVar5 = self[2];
        bVar11 = ((byte)SVar5 & 0xfc) + 4;
      }
      self[2] = (SMBEditor)((byte)SVar5 & 0xf3 | bVar11 & 0xc);
    }
    else if ((*(int *)(Keyboard + 0x310) == 2) || (*(int *)(Keyboard + 0x514) == 2)) {
      if (*(float *)(Mouse + 8) <= 0.0) {
        if (0.0 <= *(float *)(Mouse + 8)) goto LAB_004b0a40;
        SVar5 = self[1];
        bVar11 = ((byte)SVar5 >> 4) + 3;
      }
      else {
        SVar5 = self[1];
        bVar11 = ((byte)SVar5 >> 4) + 1;
      }
      self[1] = (SMBEditor)((byte)SVar5 & 0xcf | (bVar11 & 3) << 4);
    }
    else if (*(int *)(Keyboard + 0x5d4) == 2) {
      if (*(float *)(Mouse + 8) <= 0.0) {
        if (0.0 <= *(float *)(Mouse + 8)) goto LAB_004b0a40;
        SVar5 = self[2];
        bVar11 = (char)SVar5 + 3;
      }
      else {
        SVar5 = self[2];
        bVar11 = (char)SVar5 + 1;
      }
      self[2] = (SMBEditor)((byte)SVar5 & 0xfc | bVar11 & 3);
    }
    else {
      fVar18 = *(float *)(Mouse + 8);
      if (*(int *)(Keyboard + 0x598) == 2) {
        if (fVar18 <= 0.0) {
          if (fVar18 < 0.0) {
            self[1] = (SMBEditor)((byte)self[1] & 0x3f | ((byte)self[1] & 0xc0) - 0x40);
          }
        }
        else {
          self[1] = (SMBEditor)((byte)self[1] & 0x3f | ((byte)self[1] & 0xc0) + 0x40);
        }
      }
      else if (fVar18 <= 0.0) {
        if (fVar18 < 0.0) {
          iVar8 = (byte)*self - 1;
          iVar7 = 0;
          if ((iVar8 <= *(int *)(GSuperMeatBoy__pLevelPalette + 0x48)) &&
             (iVar7 = iVar8, iVar8 == -1)) {
            iVar7 = *(int *)(GSuperMeatBoy__pLevelPalette + 0x48);
          }
          *self = SUB41(iVar7,0);
        }
      }
      else {
        SVar5 = (SMBEditor)0x0;
        if ((int)((byte)*self + 1) <= *(int *)(GSuperMeatBoy__pLevelPalette + 0x48)) {
          SVar5 = SUB41((byte)*self + 1,0);
        }
        *self = SVar5;
      }
    }
LAB_004b0a40:
    iVar7 = TKeyboard__GetExclusiveState(Keyboard,0x40);
    if ((((iVar7 == 2) || (iVar7 = TKeyboard__GetExclusiveState(Keyboard,0x6b), iVar7 == 2)) &&
        (iVar7 = TKeyboard__GetExclusiveState(Keyboard,0x15), iVar7 == 1)) &&
       (iVar7 = IsEditorFunctionAllowed(), iVar7 != 0)) {
      iSelectedScale = 0;
      iSelectedRotation = 0;
      pCopiedBlocks._40_2_ = 0;
      if ((pCopiedBlocks._48_4_ == 1) && (pCopiedBlocks._42_2_ != 0)) {
        uVar6 = pCopiedBlocks._42_2_ - 1;
        lVar10 = 0;
        do {
          *(uint16_t *)(pCopiedBlocks._64_8_ + lVar10) = 0xffff;
          lVar10 = lVar10 + 2;
        } while (lVar10 != (ulong)uVar6 * 2 + 2);
      }
      RunCommandOnSelection(CopySelected_Selection);
    }
    iVar7 = TKeyboard__GetExclusiveState(Keyboard,0x40);
    if (((iVar7 == 2) ||
        (iVar7 = TKeyboard__GetExclusiveState(Keyboard,0x6b), pTVar15 = Keyboard, iVar7 == 2)) &&
       (iVar7 = TKeyboard__GetExclusiveState(Keyboard,0x80), pTVar15 = Keyboard, iVar7 == 1)) {
      bRenderCopiedElements = 1;
      TMouse__AddButtonCallback(Mouse,0,PasteSelectedTiles,0);
      TMouse__AddButtonCallback(Mouse,1,CancelPasteTileRendering,0);
      pTVar15 = Keyboard;
    }
    goto LAB_004b0abf;
  }
  if (iVar7 != 6) {
    if (iVar7 == 7) {
      if (*(float *)(Mouse + 8) <= 0.0) {
        if (*(float *)(Mouse + 8) < 0.0) {
          iAnimalIDX = iAnimalIDX + -1;
          if (iAnimalIDX < 0x14) {
            if (iAnimalIDX < 0) {
              iAnimalIDX = 0x13;
            }
          }
          else {
            iAnimalIDX = 0;
          }
          while (iVar7 = SMBAnimals__IsValidAnimal
                                   (*(SMBAnimals **)(GSuperMeatBoy__pLevelPalette + 0x41e8),
                                    iAnimalIDX), pTVar15 = Keyboard, iVar7 == 0) {
            iAnimalIDX = iAnimalIDX + -1;
            if (iAnimalIDX < 0x14) {
              if (iAnimalIDX < 0) {
                iAnimalIDX = 0x13;
              }
            }
            else {
              iAnimalIDX = 0;
            }
          }
        }
      }
      else {
        iAnimalIDX = iAnimalIDX + 1;
        if (iAnimalIDX < 0x14) {
          if (iAnimalIDX < 0) {
            iAnimalIDX = 0x13;
          }
        }
        else {
          iAnimalIDX = 0;
        }
        while (iVar7 = SMBAnimals__IsValidAnimal
                                 (*(SMBAnimals **)(GSuperMeatBoy__pLevelPalette + 0x41e8),iAnimalIDX
                                 ), pTVar15 = Keyboard, iVar7 == 0) {
          iAnimalIDX = iAnimalIDX + 1;
          if (iAnimalIDX < 0x14) {
            if (iAnimalIDX < 0) {
              iAnimalIDX = 0x13;
            }
          }
          else {
            iAnimalIDX = 0;
          }
        }
      }
    }
    else {
      EditSetPieces(self);
      pTVar15 = Keyboard;
    }
    goto LAB_004b0abf;
  }
  if (pSelectedLight == (float *)0x0) {
    pfVar9 = *(float **)(self + 200);
    if (pfVar9 == (float *)0x0) goto LAB_004b0abf;
    if (pfVar9 == (float *)0x0) goto LAB_004b0f8d;
    *pfVar9 = local_48;
    pfVar9[1] = local_44;
    pfVar9[2] = local_40;
    pfVar9[3] = local_3c;
  }
  else {
LAB_004b0f8d:
    iVar7 = TKeyboard__GetExclusiveState(Keyboard,0x43);
    if (iVar7 == 2) {
LAB_004b1297:
      local_50 = _DAT_005bfd00 /* R:10.0f */;
    }
    else {
      iVar7 = TKeyboard__GetExclusiveState(Keyboard,0x43);
      local_50 = DAT_005be894 /* R:1.0f */;
      if (iVar7 == 2) goto LAB_004b1297;
    }
    iVar7 = TKeyboard__GetExclusiveState(Keyboard,0x7f);
    if (iVar7 == 1) {
LAB_004b0ff0:
      fVar18 = 0.0;
      local_54 = DAT_005be894 /* R:1.0f */;
    }
    else {
      fVar18 = -1.0;
      iVar7 = TKeyboard__GetExclusiveState(Keyboard,0x7f);
      local_54 = 0.0;
      if ((iVar7 == 2) && (0x32 < *(uint *)(Keyboard + 0x608))) goto LAB_004b0ff0;
    }
    iVar7 = TKeyboard__GetExclusiveState(Keyboard,0x1f);
    if ((iVar7 == 2) ||
       ((iVar7 = TKeyboard__GetExclusiveState(Keyboard,0x1f), iVar7 == 2 &&
        (0x32 < *(uint *)(Keyboard + 0x188))))) {
      local_54 = fVar18;
    }
    iVar7 = TKeyboard__GetExclusiveState(Keyboard,0x6d);
    if (iVar7 == 2) {
LAB_004b103a:
      fVar16 = 0.0;
      fVar18 = DAT_005be894 /* R:1.0f */;
    }
    else {
      fVar16 = -1.0;
      iVar7 = TKeyboard__GetExclusiveState(Keyboard,0x6d);
      fVar18 = 0.0;
      if ((iVar7 == 2) && (0x32 < *(uint *)(Keyboard + 0x530))) goto LAB_004b103a;
    }
    iVar7 = TKeyboard__GetExclusiveState(Keyboard,0x41);
    if ((iVar7 == 2) ||
       ((iVar7 = TKeyboard__GetExclusiveState(Keyboard,0x41), iVar7 == 2 &&
        (0x32 < *(uint *)(Keyboard + 800))))) {
      fVar18 = fVar16;
    }
    *pfVar3 = fVar18 * local_50 + *pfVar3;
    pfVar3[1] = local_54 * local_50 + pfVar3[1];
    pfVar9 = pfVar3;
  }
  pTVar15 = Keyboard;
  if (Keyboard == (TKeyboard *)0x0) {
LAB_004b10c5:
    fVar18 = DAT_005be894 /* R:1.0f */;
  }
  else {
    if (*(int *)(Keyboard + 0x598) == 2) {
      fVar18 = DAT_005c48b0 /* R:0.0872664600610733f */;
      if ((*(int *)(Keyboard + 0x310) != 2) &&
         (fVar18 = DAT_005c48ac /* R:0.01745329238474369f */, *(int *)(Keyboard + 0x514) == 2)) {
        fVar18 = DAT_005c48b0 /* R:0.0872664600610733f */;
      }
      if (Mouse != (TMouse *)0x0) {
        if (*(float *)(Mouse + 8) <= 0.0) {
          if (*(float *)(Mouse + 8) < 0.0) {
            pfVar9[9] = pfVar9[9] - fVar18;
          }
        }
        else {
          pfVar9[9] = fVar18 + pfVar9[9];
        }
      }
      goto LAB_004b0abf;
    }
    fVar18 = _DAT_005bfd00 /* R:10.0f */;
    if ((*(int *)(Keyboard + 0x310) != 2) && (*(int *)(Keyboard + 0x514) != 2)) goto LAB_004b10c5;
  }
  if (Mouse != (TMouse *)0x0) {
    if (*(float *)(Mouse + 8) <= 0.0) {
      if (*(float *)(Mouse + 8) < 0.0) {
        pfVar9[8] = pfVar9[8] - fVar18;
      }
    }
    else {
      pfVar9[8] = fVar18 + pfVar9[8];
    }
  }
LAB_004b0abf:
  iVar7 = TKeyboard__GetExclusiveState(pTVar15,0x71);
  if ((((iVar7 == 1) && (iVar7 = TKeyboard__GetExclusiveState(Keyboard,0x6b), iVar7 == 2)) ||
      (iVar7 = TKeyboard__GetExclusiveState(Keyboard,0x40), iVar7 == 2)) &&
     ((*(int *)(Keyboard + 0x55c) == 1 && (*(int *)(SuperMeatBoy + 0x2c) == 1)))) {
    EditorForm__Activate(pEditorSaveForm);
  }
  iVar7 = TKeyboard__GetExclusiveState(Keyboard,0x3e);
  if ((((iVar7 == 1) && (iVar7 = TKeyboard__GetExclusiveState(Keyboard,0x6b), iVar7 == 2)) ||
      (iVar7 = TKeyboard__GetExclusiveState(Keyboard,0x40), iVar7 == 2)) &&
     ((*(int *)(Keyboard + 0x2f8) == 1 && (*(int *)(SuperMeatBoy + 0x2c) == 1)))) {
    EditorForm__Activate(pEditorLoadForm);
  }
  SwitchEditorMode(self);
  return;
}

/* ======================================================================
 * SMBEditor__AddToSelectedPieces  (Ghidra `AddToSelectedPieces` @ 004b16c0)
 * Signature: uint8_t __thiscall AddToSelectedPieces(SMBEditor * self, TileLevelSetPiece * arg1)
 * Class: SMBEditor
 * Calls: `free`, `malloc`, `memcpy`
 * Called by: `PlaceSetPiece`
 */
/* SMBEditor__AddToSelectedPieces(TileLevelSetPiece*) */

void __thiscall SMBEditor__AddToSelectedPieces(SMBEditor *self,TileLevelSetPiece *arg1)

{
  TileLevelSetPiece TVar1;
  TileLevelSetPiece *pTVar2;
  void *pvVar3;
  ushort uVar4;
  ushort uVar5;
  short sVar6;
  void *pvVar7;
  void *pvVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  uint64_t *puVar12;
  ulong uVar13;
  ushort *puVar14;
  
  TVar1 = arg1[0x21];
  if (((((byte)TVar1 & 1) == 0) || (*(int *)(SuperMeatBoyEditor + 0xc0) != 1)) &&
     ((((byte)TVar1 & 0x13) != 0 || (*(int *)(SuperMeatBoyEditor + 0xc0) != 2)))) {
    if (((byte)TVar1 & 0x10) == 0) {
      return;
    }
    if ((*(int *)(SuperMeatBoyEditor + 0xc0) != 4) && (*(int *)(SuperMeatBoyEditor + 0xc0) != 5)) {
      return;
    }
  }
  uVar5 = *(ushort *)(self + 0x98);
  if (uVar5 != 0) {
    plVar10 = *(long **)(self + 0xa8);
    uVar4 = 0;
    pTVar2 = (TileLevelSetPiece *)*plVar10;
    while( true ) {
      if (pTVar2 == arg1) {
        if (*(int *)(self + 0xa0) != 1) {
          return;
        }
        if (*(ushort *)(self + 0x9a) == 0) {
          return;
        }
        if (uVar4 == **(ushort **)(self + 0xb0)) {
          return;
        }
        lVar11 = 0;
        do {
          if (lVar11 == (ulong)(*(ushort *)(self + 0x9a) - 1) * 2) {
            return;
          }
          lVar11 = lVar11 + 2;
        } while (uVar4 != *(ushort *)((long)*(ushort **)(self + 0xb0) + lVar11));
        return;
      }
      uVar4 = uVar4 + 1;
      if (uVar4 == uVar5) break;
      plVar10 = plVar10 + 1;
      pTVar2 = (TileLevelSetPiece *)*plVar10;
    }
  }
  if (*(int *)(self + 0xb8) == -0x5eef3582) {
    if (*(ushort *)(self + 0x9a) <= uVar5) {
      uVar5 = *(ushort *)(self + 0x9a) + *(short *)(self + 0xa4);
      uVar13 = (ulong)(byte)self[0x9c];
      pvVar7 = (void *)0x0;
      pvVar3 = *(void **)(self + 0xa8);
      *(ushort *)(self + 0x9a) = uVar5;
      uVar9 = (ulong)uVar5 * 8;
      pvVar8 = malloc(uVar13 + 0x10 + uVar9);
      if (pvVar8 != (void *)0x0) {
        pvVar7 = (void *)((long)pvVar8 + 0x10U + (uVar13 - ((long)pvVar8 + 0x10U) % uVar13) % uVar13
                         );
        *(ulong *)((long)pvVar7 + -0x10) = uVar9;
        *(void **)((long)pvVar7 + -8) = pvVar8;
        if (pvVar3 != (void *)0x0) {
          uVar13 = *(ulong *)((long)pvVar3 + -0x10);
          if (uVar9 < uVar13 || uVar9 - uVar13 == 0) {
            uVar13 = uVar9;
          }
          memcpy(pvVar7,pvVar3,uVar13);
          free(*(void **)((long)pvVar3 + -8));
        }
      }
      pvVar3 = *(void **)(self + 0xb0);
      *(void **)(self + 0xa8) = pvVar7;
      if (pvVar3 != (void *)0x0) {
        uVar4 = *(ushort *)(self + 0x9a);
        uVar13 = (ulong)(byte)self[0x9c];
        pvVar7 = (void *)0x0;
        uVar9 = (ulong)uVar4 * 2;
        pvVar8 = malloc(uVar13 + 0x10 + uVar9);
        if (pvVar8 != (void *)0x0) {
          pvVar7 = (void *)((long)pvVar8 + 0x10U +
                           (uVar13 - ((long)pvVar8 + 0x10U) % uVar13) % uVar13);
          *(void **)((long)pvVar7 + -8) = pvVar8;
          *(ulong *)((long)pvVar7 + -0x10) = uVar9;
          uVar13 = *(ulong *)((long)pvVar3 + -0x10);
          if (uVar9 <= *(ulong *)((long)pvVar3 + -0x10)) {
            uVar13 = uVar9;
          }
          memcpy(pvVar7,pvVar3,uVar13);
          free(*(void **)((long)pvVar3 + -8));
          uVar4 = *(ushort *)(self + 0x9a);
        }
        uVar5 = *(ushort *)(self + 0x98);
        *(void **)(self + 0xb0) = pvVar7;
        if (uVar4 <= uVar5) goto LAB_004b1881;
        while( true ) {
          uVar9 = (ulong)uVar5;
          uVar5 = uVar5 + 1;
          *(uint16_t *)((long)pvVar7 + uVar9 * 2) = 0xffff;
          if (uVar4 <= uVar5) break;
          pvVar7 = *(void **)(self + 0xb0);
        }
      }
      uVar5 = *(ushort *)(self + 0x98);
    }
  }
  else {
    uVar9 = (ulong)(byte)self[0x9c];
    *(uint32_t *)(self + 0xa0) = 0;
    pvVar7 = malloc(uVar9 + 0x38);
    puVar12 = (uint64_t *)0x0;
    if (pvVar7 != (void *)0x0) {
      puVar12 = (uint64_t *)
                ((uVar9 - ((long)pvVar7 + 0x10U) % uVar9) % uVar9 + (long)pvVar7 + 0x10U);
      puVar12[-2] = 0x28;
      puVar12[-1] = pvVar7;
    }
    *(uint64_t **)(self + 0xa8) = puVar12;
    uVar5 = 0;
    *puVar12 = 0;
    puVar12[1] = 0;
    puVar12[2] = 0;
    puVar12[3] = 0;
    puVar12[4] = 0;
    *(uint16_t *)(self + 0x98) = 0;
    *(uint16_t *)(self + 0x9a) = 5;
    *(uint32_t *)(self + 0xb8) = 0xa110ca7e;
    *(uint16_t *)(self + 0xa4) = 5;
  }
LAB_004b1881:
  if ((*(int *)(self + 0xa0) == 1) && (*(short *)(self + 0x9a) != 0)) {
    puVar14 = *(ushort **)(self + 0xb0);
    sVar6 = 1;
    uVar4 = *puVar14;
    while (uVar4 != 0xffff) {
      puVar14 = puVar14 + 1;
      if (sVar6 == *(short *)(self + 0x9a)) goto LAB_004b188e;
      sVar6 = sVar6 + 1;
      uVar4 = *puVar14;
    }
    *puVar14 = uVar5;
    uVar5 = *(ushort *)(self + 0x98);
  }
LAB_004b188e:
  *(TileLevelSetPiece **)(*(long *)(self + 0xa8) + (ulong)uVar5 * 8) = arg1;
  *(short *)(self + 0x98) = *(short *)(self + 0x98) + 1;
  return;
}

/* ======================================================================
 * SMBEditor__RenderSetPieceInfo  (Ghidra `RenderSetPieceInfo` @ 004b2c30)
 * Signature: uint8_t __thiscall RenderSetPieceInfo(SMBEditor * self)
 * Class: SMBEditor
 * Calls: `Camera__ScreenToWorld`, `GSetPieceWayPoints__EditorRender`, `GSetPieceWayPoints__GetWayPointGroup`, `TileLevel__GetGridIndex__0058dd90`, `TileLevel__SnapPositionToCenter`, `Vector2__operator_assign`
 * Called by: (none)
 */
/* SMBEditor__RenderSetPieceInfo() */

void __thiscall SMBEditor__RenderSetPieceInfo(SMBEditor *self)

{
  int iVar1;
  SetPieceWayPointGroup *pSVar2;
  float fVar3;
  float local_80;
  float local_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  uint32_t uStack_6c;
  uint32_t local_68;
  uint32_t local_64;
  uint64_t local_58;
  float local_48;
  float local_44;
  float local_38;
  float local_34;
  Vector2 local_28 [8];
  uint local_20;
  uint local_1c [3];
  
  local_68 = *(uint32_t *)(Mouse + 0xc);
  local_64 = *(uint32_t *)(Mouse + 0x10);
  iVar1 = *(int *)(self + 0xc0);
  if (iVar1 == 1) {
    local_7c = fParalaxZ;
    local_80 = fParalaxScale;
  }
  else if (iVar1 == 4) {
    local_7c = fAnimationZ;
    local_80 = fAnimationScale;
  }
  else if (iVar1 == 5) {
    local_7c = fObstacleZ;
    local_80 = fObstacleScale;
  }
  else if (iVar1 == 2) {
    local_7c = fPieceZ;
    local_80 = fPieceScale;
  }
  local_78 = 0.0;
  fStack_74 = 0.0;
  fStack_70 = 0.0;
  uStack_6c = 0;
  Camera__ScreenToWorld
            (*(Camera **)(SuperMeatBoy + 0x38),(FPUVector *)&local_78,(Vector2 *)&local_68,local_7c)
  ;
  if (*(int *)(self + 0xf8) == 1) {
    local_58 = CONCAT44(fStack_74,local_78);
    fVar3 = DAT_005be894 /* R:1.0f */;
    if ((Keyboard != 0) && (fVar3 = DAT_005be6e4 /* R:0.5f */, *(int *)(Keyboard + 0x5d4) != 2)) {
      fVar3 = DAT_005be894 /* R:1.0f */;
    }
    TileLevel__SnapPositionToCenter(*(TileLevel **)(SuperMeatBoy + 0x40),(Vector2 *)&local_58,fVar3)
    ;
    *(float *)(self + 0x34) = local_7c;
    *(uint32_t *)(self + 0x38) = 0;
    *(uint32_t *)(self + 0x2c) = (uint32_t)local_58;
    *(uint32_t *)(self + 0x30) = local_58._4_4_;
  }
  else {
    *(ulong *)(self + 0x2c) = CONCAT44(fStack_74,local_78);
    *(ulong *)(self + 0x34) = CONCAT44(uStack_6c,fStack_70);
  }
  local_48 = local_80;
  local_44 = local_80;
  Vector2__operator_assign((Vector2 *)(self + 0x3c),(Vector2 *)&local_48);
  if (bRenderCopiedElements == 0) {
    (**(code **)(*GSuperMeatBoy__pLevelPalette + 0x30))(GSuperMeatBoy__pLevelPalette,self + 8,1);
  }
  if (bSetPieceWayPointMode == 1) {
    pSVar2 = (SetPieceWayPointGroup *)
             GSetPieceWayPoints__GetWayPointGroup
                       (SetPieceWayPoints,(TileLevelSetPiece *)**(uint64_t **)(self + 0xa8));
    GSetPieceWayPoints__EditorRender(SetPieceWayPoints,pSVar2);
    if (pCurrentSetPieceWayPoint != 0) {
      FontEmitter__SetDynamicText
                (*(wchar_t **)(pRotationLabel + 0x40),
                 (double)*(float *)(pCurrentSetPieceWayPoint + 0x1c),L"Start Time: %.02f sec");
    }
  }
  else {
    FontEmitter__SetDynamicText
              (*(wchar_t **)(pRotationLabel + 0x40),(double)(DAT_005c48b4 /* R:57.2957763671875f */ * *(float *)(self + 0x44))
               ,L"Rot: %.02f deg");
  }
  local_38 = local_78;
  local_34 = fStack_74;
  TileLevel__GetGridIndex__0058dd90
            (*(TileLevel **)(SuperMeatBoy + 0x40),(Vector2 *)&local_38,local_28,(int *)&local_20,
             (int *)local_1c);
  FontEmitter__SetDynamicText
            (*(wchar_t **)(pGridCoordsLabel + 0x40),L"Grid: (%i, %i)",(ulong)local_20,
             (ulong)local_1c[0]);
  FontEmitter__SetDynamicText
            (*(wchar_t **)(pCoordinatesLabel + 0x40),(double)local_78,(double)fStack_74,
             (double)fStack_70,L"Pos: (%.02f, %.02f, %.02f)");
  FontEmitter__SetDynamicText
            (*(wchar_t **)(pScaleLabel + 0x40),(double)local_80,(double)local_80,
             L"Scale: (%.02f, %.02f)");
  return;
}

/* ======================================================================
 * SMBEditor__Render  (Ghidra `Render` @ 004b2fa0)
 * Signature: uint8_t __thiscall Render(SMBEditor * self)
 * Class: SMBEditor
 * Calls: `AutoLockSection__AutoLockSection`, `AutoLockSection__AutoLockSection__005b59d0`, `Camera__ScreenToWorld`, `Camera__SetCameraMatricies`, `Camera__SetOrthoProjection`, `Render`, `SMBAnimals__EditorRender`, `SamplerRegisterToSource`, `TGraphics__AddPixelStage`, `TGraphics__Draw` (+21 more)
 * Called by: `SMBEditorRenderLayer__Render`
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SMBEditor__Render() */

void __thiscall SMBEditor__Render(SMBEditor *self)

{
  uint32_t uVar1;
  uint32_t uVar2;
  VertexBuffer *this_00;
  VertexStream *pVVar3;
  float *pfVar4;
  TGraphics *pTVar5;
  uint8_t uVar6;
  uint32_t uVar7;
  int iVar8;
  Matrix4x4 *pMVar9;
  Vector2 *pVVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  long *plVar16;
  ulong uVar17;
  float fVar18;
  float local_3a0;
  float local_39c;
  float local_398;
  float local_394;
  float local_390;
  uint32_t local_38c;
  uint32_t local_388;
  uint32_t local_384;
  uint32_t local_380;
  uint32_t local_37c;
  float local_378;
  float local_374;
  uint32_t local_370;
  uint32_t local_36c;
  float local_368;
  float local_364;
  uint32_t local_360;
  uint32_t local_35c;
  uint32_t local_358;
  uint32_t local_354;
  uint32_t local_350;
  uint32_t local_34c;
  uint32_t local_348;
  uint32_t local_344;
  uint32_t local_340;
  uint32_t local_33c;
  float local_338;
  float local_334;
  uint32_t local_330;
  uint32_t local_32c;
  float local_328;
  float local_324;
  float local_320;
  float local_31c;
  uint32_t local_318;
  uint32_t local_314;
  float local_310;
  float local_30c;
  float local_308;
  float local_304;
  float local_300;
  float local_2fc;
  float local_2f8;
  float local_2f4;
  uint32_t local_2f0;
  uint32_t local_2ec;
  float local_2e8;
  float local_2e4;
  float local_2e0;
  float local_2dc;
  float local_2d8;
  float local_2d4;
  float local_2d0;
  float local_2cc;
  uint32_t local_2c8;
  uint32_t local_2c4;
  uint32_t local_2c0;
  uint32_t local_2bc;
  uint32_t local_2b8;
  uint32_t local_2b4;
  uint32_t local_2b0;
  uint32_t local_2ac;
  uint32_t local_2a8;
  uint32_t local_2a4;
  uint32_t local_2a0;
  uint32_t local_29c;
  uint32_t local_298;
  uint32_t local_294;
  uint32_t local_290;
  uint32_t local_28c;
  uint32_t local_288;
  uint32_t local_284;
  uint32_t local_280;
  uint32_t local_27c;
  uint32_t local_278;
  uint32_t local_274;
  uint32_t local_270;
  uint32_t local_26c;
  uint32_t local_268;
  uint32_t local_264;
  uint32_t local_260;
  uint32_t local_25c;
  float local_258;
  float local_254;
  uint32_t local_250;
  uint32_t local_24c;
  float local_248;
  float local_244;
  float local_240;
  float local_23c;
  float local_238;
  float local_234;
  float local_230;
  float local_22c;
  uint32_t local_228;
  uint32_t local_224;
  uint32_t local_220;
  uint32_t local_21c;
  uint32_t local_218;
  uint32_t local_214;
  uint32_t local_210;
  uint32_t local_20c;
  AutoLockSection local_208 [16];
  uint32_t local_1f8;
  uint32_t local_1f4;
  Vector2 local_1e8 [16];
  uint32_t local_1d8;
  uint32_t local_1d4;
  Vector2 local_1c8 [16];
  uint32_t local_1b8;
  uint32_t local_1b4;
  uint32_t local_1a8;
  uint32_t local_1a4;
  Vector2 local_198 [16];
  uint32_t local_188;
  uint32_t local_184;
  float local_178;
  float local_174;
  float local_168;
  float local_164;
  Vector2 local_158 [16];
  uint32_t local_148;
  uint32_t local_144;
  uint32_t local_138;
  uint32_t local_134;
  uint32_t local_128;
  uint32_t local_124;
  float local_118;
  float local_114;
  uint32_t local_108;
  uint32_t local_104;
  float local_f8;
  float local_f4;
  float local_e8;
  float local_e4;
  Vector2 local_d8 [16];
  uint32_t local_c8;
  uint32_t local_c4;
  float local_b8;
  float local_b4;
  Vector2 local_a8 [16];
  float local_98;
  float local_94;
  Vector2 local_88 [16];
  void *local_78 [2];
  int local_68 [4];
  uint local_58 [4];
  uint local_48 [6];
  
  if (Keyboard == 0) {
    return;
  }
  if (*(int *)(SuperMeatBoy + 0x2c) != 1) {
    Camera__SetOrthoProjection
              (*(Camera **)(SuperMeatBoy + 0x38),_DAT_005c0c9c /* R:240.0f */,DAT_005c0c98 /* R:-240.0f */,DAT_005c0c94 /* R:-426.5f */,
               DAT_005c0c90 /* R:426.5f */,DAT_005c07a4 /* R:-1.0f */,DAT_005be894 /* R:1.0f */);
    Camera__SetCameraMatricies(*(Camera **)(SuperMeatBoy + 0x38),2);
    (**(code **)(*pF1Text + 0x10))();
    return;
  }
  AutoLockSection__AutoLockSection(local_208,(CriticalSection *)editorSection);
                    /* try { // try from 004b305a to 004b30a0 has its CatchHandler @ 004b4a45 */
  Camera__SetCameraMatricies(*(Camera **)(SuperMeatBoy + 0x38),1);
  TGraphics__SetRenderState(Graphics,'\x05',4);
  TGraphics__SetRenderState(Graphics,'\x06',5);
  TGraphics__SetRenderState(Graphics,'\x01',7);
  local_398 = 0.0;
  local_394 = 0.0;
  local_390 = 0.0;
  uVar1 = *(uint32_t *)(Mouse + 0xc);
  local_38c = 0;
  uVar2 = *(uint32_t *)(Mouse + 0x10);
  local_1f8 = uVar1;
  local_1f4 = uVar2;
                    /* try { // try from 004b3117 to 004b31fd has its CatchHandler @ 004b4a55 */
  Camera__ScreenToWorld
            (*(Camera **)(SuperMeatBoy + 0x38),(FPUVector *)&local_398,(Vector2 *)&local_1f8,0.0);
  if ((Render()::vLastMouseScreen == '\0') &&
     (iVar8 = __cxa_guard_acquire(&Render()::vLastMouseScreen), iVar8 != 0)) {
    Render()::vLastMouseScreen._0_4_ = 0;
    Render()::vLastMouseScreen._4_4_ = 0;
    __cxa_guard_release(&Render()::vLastMouseScreen);
    __cxa_atexit(Vector2__Vector2,&Render()::vLastMouseScreen,&__dso_handle);
  }
  iVar8 = *(int *)(self + 0xc0);
  if (iVar8 == 0) {
                    /* try { // try from 004b3bae to 004b3c18 has its CatchHandler @ 004b4a55 */
    TGraphics__ResetPixelStages(Graphics);
    TGraphics__AddPixelStage(Graphics,5,1,1,0,3,3,0xffffffff);
    local_388 = 0x3f800000;
    local_384 = 0x3f800000;
    local_380 = 0x3f800000;
    local_37c = 0x3f800000;
    TGraphics__SetPixelColorConstant(Graphics,0,&local_388);
    if (bRenderCopiedElements == 0) {
                    /* try { // try from 004b49aa to 004b49ac has its CatchHandler @ 004b4a55 */
      (**(code **)(*GSuperMeatBoy__pLevelPalette + 0x20))
                (GSuperMeatBoy__pLevelPalette,self,&local_398);
    }
    else {
      uVar12 = 0;
      local_318 = 0;
      local_314 = 0;
      if (pCopiedBlocks._40_2_ != 0) {
        uVar17 = 0;
        do {
                    /* try { // try from 004b3c72 to 004b3cec has its CatchHandler @ 004b4a04 */
          Vector2__operator_plus_assign((Vector2 *)&local_318,
                              (Vector2 *)(pCopiedBlocks._56_8_ + (uVar17 & 0xffff) * 0xc));
          uVar12 = (uint)(ushort)pCopiedBlocks._40_2_;
          uVar13 = (int)uVar17 + 1;
          uVar17 = (ulong)uVar13;
        } while ((int)uVar13 < (int)uVar12);
      }
      Vector2__operator_div_assign__005be2c0((Vector2 *)&local_318,(float)uVar12);
      iVar14 = iSelectedRotation;
      iVar8 = iSelectedScale;
      pMVar9 = (Matrix4x4 *)TGraphics__GetMatrix(Graphics,0);
      Matrix4x4__Transformation2DRot
                (pMVar9,(Vector2 *)(vTileScale + (long)iVar8 * 8),
                 (float *)(fTileRotations + (long)iVar14 * 4),(Vector2 *)&local_398);
      TGraphics__PushMatrix(Graphics,0);
      Vector2__operator_minus__005be180(local_1e8);
                    /* try { // try from 004b3cf6 to 004b3d72 has its CatchHandler @ 004b4a02 */
      pMVar9 = (Matrix4x4 *)TGraphics__GetMatrix(Graphics);
      Matrix4x4__Transformation2DRot(pMVar9,(Vector2 *)0x0,(float *)0x0,local_1e8);
      TGraphics__PushMatrix(Graphics,0);
      if (pCopiedBlocks._40_2_ != 0) {
        uVar17 = 0;
        do {
          (**(code **)(*GSuperMeatBoy__pLevelPalette + 0x20))
                    (GSuperMeatBoy__pLevelPalette,pCopiedBlocks._56_8_ + (uVar17 & 0xffff) * 0xc + 8
                    );
          uVar12 = (int)uVar17 + 1;
          uVar17 = (ulong)uVar12;
        } while ((int)uVar12 < (int)(uint)(ushort)pCopiedBlocks._40_2_);
      }
      TGraphics__PopMatrix(Graphics);
      TGraphics__PopMatrix(Graphics);
    }
    local_b8 = local_398;
    local_b4 = local_394;
                    /* try { // try from 004b3db7 to 004b3e37 has its CatchHandler @ 004b4a55 */
    TileLevel__GetGridIndex__0058dd90
              (*(TileLevel **)(SuperMeatBoy + 0x40),(Vector2 *)&local_b8,local_a8,(int *)local_48,
               (int *)local_58);
    FontEmitter__SetDynamicText
              (*(wchar_t **)(pGridCoordsLabel + 0x40),L"Grid: (%i, %i)",(ulong)local_48[0],
               (ulong)local_58[0]);
    FontEmitter__SetDynamicText
              (*(wchar_t **)(pCoordinatesLabel + 0x40),(double)local_398,(double)local_394,
               (double)local_390,L"Pos: (%.02f, %.02f, %.02f)");
    UILabel__setText(pScaleLabel,L"Scale: (1,1)");
    UILabel__setText(pRotationLabel,L"Rot: 0 deg");
  }
  else if ((iVar8 == 6) || (iVar8 == 3)) {
    if ((iVar8 == 6) &&
       ((pVVar10 = pSelectedLight, pSelectedLight != (Vector2 *)0x0 ||
        (pVVar10 = *(Vector2 **)(self + 200), pVVar10 != (Vector2 *)0x0)))) {
      local_98 = *(float *)pVVar10;
      local_94 = *(float *)(pVVar10 + 4);
                    /* try { // try from 004b3795 to 004b3932 has its CatchHandler @ 004b4a55 */
      TileLevel__GetGridIndex__0058dd90
                (*(TileLevel **)(SuperMeatBoy + 0x40),(Vector2 *)&local_98,local_88,(int *)local_58,
                 (int *)local_48);
      FontEmitter__SetDynamicText
                (*(wchar_t **)(pGridCoordsLabel + 0x40),L"Grid: (%i, %i)",(ulong)local_58[0],
                 (ulong)local_48[0]);
      FontEmitter__SetDynamicText
                (*(wchar_t **)(pCoordinatesLabel + 0x40),(double)*(float *)pVVar10,
                 (double)*(float *)(pVVar10 + 4),(double)*(float *)(pVVar10 + 8),
                 L"Pos: (%.02f, %.02f, %.02f)");
      FontEmitter__SetDynamicText
                (*(wchar_t **)(pScaleLabel + 0x40),(double)*(float *)(pVVar10 + 0x20),
                 (double)*(float *)(pVVar10 + 0x20),L"Scale: (%.02f, %.02f)");
      FontEmitter__SetDynamicText
                (*(wchar_t **)(pRotationLabel + 0x40),
                 (double)(DAT_005c48b4 /* R:57.2957763671875f */ * *(float *)(pVVar10 + 0x24)),L"Rot: %.02f deg");
    }
  }
  else if (iVar8 != 7) {
    RenderSetPieceInfo(self);
  }
  if ((bRenderCopiedElements == 1) &&
     ((((iVar8 = *(int *)(self + 0xc0), iVar8 - 1U < 2 || (iVar8 == 4)) || (iVar8 == 5)) &&
      (pCopiedSetPieces._40_2_ != 0)))) {
    uVar17 = 0;
    do {
      local_378 = 0.0;
      local_374 = 0.0;
      local_370 = 0;
      lVar11 = (uVar17 & 0xffff) * 0x68;
      local_36c = 0;
      local_1d8 = uVar1;
      local_1d4 = uVar2;
                    /* try { // try from 004b3ee2 to 004b3ee6 has its CatchHandler @ 004b49d4 */
      Camera__ScreenToWorld
                (*(Camera **)(SuperMeatBoy + 0x38),(FPUVector *)&local_378,(Vector2 *)&local_1d8,
                 *(float *)(pCopiedSetPieces._56_8_ + 0x2c + lVar11));
      local_364 = local_374 - DAT_00819f44 /* R:0.0f */;
      local_368 = local_378 - vXYCOM;
      local_360 = 0;
      local_35c = 0;
                    /* try { // try from 004b3f28 to 004b3f70 has its CatchHandler @ 004b49d2 */
      pMVar9 = (Matrix4x4 *)TGraphics__GetMatrix(Graphics);
      Matrix4x4__Transformation3D
                (pMVar9,(FPUVector *)0x0,(TQuaternion *)0x0,(FPUVector *)&local_368);
      TGraphics__PushMatrix(Graphics,0);
      (**(code **)(*GSuperMeatBoy__pLevelPalette + 0x30))
                (GSuperMeatBoy__pLevelPalette,pCopiedSetPieces._56_8_ + lVar11,0);
      TGraphics__PopMatrix(Graphics);
      uVar12 = (int)uVar17 + 1;
      uVar17 = (ulong)uVar12;
    } while ((int)uVar12 < (int)(uint)(ushort)pCopiedSetPieces._40_2_);
  }
  TGraphics__ResetPixelStages(Graphics);
  TGraphics__AddPixelStage(Graphics,1,0,0,0,0,1,0xffffffff);
  local_358 = 0;
  local_354 = 0x3f800000;
  local_350 = 0;
  local_34c = 0x3f800000;
  TGraphics__SetPixelColorConstant(Graphics,0,&local_358);
  iVar8 = *(int *)(self + 0xc0);
  if (iVar8 == 0) {
    local_348 = 0;
    local_344 = 0;
    local_340 = 0;
    local_33c = 0;
    local_1b8 = 0xbf800000;
    local_1b4 = 0xbf800000;
                    /* try { // try from 004b4022 to 004b4053 has its CatchHandler @ 004b4a06 */
    Camera__ScreenToWorld
              (*(Camera **)(SuperMeatBoy + 0x38),(FPUVector *)&local_348,(Vector2 *)&local_1b8,0.0);
    TileLevel__GetGridIndex__0058dd90
              (*(TileLevel **)(SuperMeatBoy + 0x40),(Vector2 *)&local_348,local_1c8,(int *)local_78,
               (int *)local_48);
    local_1a8 = 0x3f800000;
    local_1a4 = 0x3f800000;
                    /* try { // try from 004b4085 to 004b40b6 has its CatchHandler @ 004b49e4 */
    Camera__ScreenToWorld
              (*(Camera **)(SuperMeatBoy + 0x38),(FPUVector *)&local_348,(Vector2 *)&local_1a8,0.0);
    TileLevel__GetGridIndex__0058dd90
              (*(TileLevel **)(SuperMeatBoy + 0x40),(Vector2 *)&local_348,local_1c8,local_68,
               (int *)local_58);
    if ((int)local_78[0] <= local_68[0]) {
      uVar17 = (ulong)(int)local_78[0];
      iVar8 = (int)local_78[0];
      iVar14 = local_68[0];
      uVar12 = local_48[0];
      do {
        if ((int)local_58[0] <= (int)uVar12) {
          uVar15 = 1 << ((byte)iVar8 & 0x1f);
          uVar13 = local_58[0];
          do {
            while( true ) {
              fVar18 = (float)*(ushort *)(*(TileLevel **)(SuperMeatBoy + 0x40) + 0x38) *
                       DAT_005be6e8 /* R:0.25f */;
              lVar11 = (long)fVar18;
              if ((float)lVar11 < fVar18) {
                lVar11 = lVar11 + 1;
              }
              lVar11 = (long)(int)((int)lVar11 * uVar13) + (uVar17 >> 2);
              if (((*(uint *)(pCurrSelectionIDX + lVar11 * 4) & uVar15) == 0) &&
                 ((*(uint *)(pSelectionIDX + lVar11 * 4) & uVar15) == 0)) break;
                    /* try { // try from 004b4171 to 004b4175 has its CatchHandler @ 004b49e2 */
              TileLevel__GetGridPos(*(TileLevel **)(SuperMeatBoy + 0x40),iVar8,uVar13,local_198);
              local_188 = 0x41a00000;
              local_184 = 0x41a00000;
                    /* try { // try from 004b4195 to 004b41c8 has its CatchHandler @ 004b49d6 */
              pMVar9 = (Matrix4x4 *)TGraphics__GetMatrix(Graphics,0);
              Matrix4x4__Transformation2DRot(pMVar9,(Vector2 *)&local_188,(float *)0x0,local_198);
              TGraphics__Draw(Graphics,pSelectionBox,(IndexBuffer *)0x0);
              uVar13 = uVar13 + 1;
              iVar14 = local_68[0];
              uVar12 = local_48[0];
              if ((int)local_48[0] < (int)uVar13) goto LAB_004b41e2;
            }
            uVar13 = uVar13 + 1;
            iVar14 = local_68[0];
          } while ((int)uVar13 <= (int)uVar12);
        }
LAB_004b41e2:
        iVar8 = iVar8 + 1;
        uVar17 = uVar17 + 1;
      } while (iVar8 <= iVar14);
    }
  }
  else if (((iVar8 - 1U < 2) || (iVar8 == 4)) || (iVar8 == 5)) {
    TGraphics__SetRenderState(Graphics,'\x01',7);
    if (*(short *)(self + 0x98) != 0) {
      uVar17 = 0;
      do {
        local_338 = 0.0;
        local_334 = 0.0;
        local_330 = 0;
        local_32c = 0;
        local_328 = 0.0;
        local_324 = 0.0;
        local_320 = 0.0;
        local_31c = 0.0;
                    /* try { // try from 004b32ab to 004b32ad has its CatchHandler @ 004b4a3e */
        (**(code **)(*GSuperMeatBoy__pLevelPalette + 0x58))
                  (GSuperMeatBoy__pLevelPalette,
                   *(uint64_t *)(*(long *)(self + 0xa8) + (uVar17 & 0xffff) * 8),&local_338,
                   local_48,&local_328);
        plVar16 = (long *)((uVar17 & 0xffff) * 8 + *(long *)(self + 0xa8));
        local_338 = local_338 * *(float *)(*plVar16 + 0x34);
        local_338 = local_338 + local_338;
        local_330 = 0x3f800000;
        local_334 = local_334 * *(float *)(*plVar16 + 0x38);
        local_334 = local_334 + local_334;
        sincosf(DAT_005be6e4 /* R:0.5f */ * *(float *)(*plVar16 + 0x3c),&local_39c,&local_3a0);
        local_318 = 0;
        local_314 = 0;
        local_310 = local_39c;
        local_30c = local_3a0;
        lVar11 = *plVar16;
        local_2fc = local_31c + *(float *)(lVar11 + 0x30);
        local_300 = local_320 + *(float *)(lVar11 + 0x2c);
        local_304 = local_324 + *(float *)(lVar11 + 0x28);
        local_308 = local_328 + *(float *)(lVar11 + 0x24);
                    /* try { // try from 004b33b3 to 004b33ec has its CatchHandler @ 004b4a39 */
        pMVar9 = (Matrix4x4 *)TGraphics__GetMatrix(Graphics,0);
        Matrix4x4__Transformation3D
                  (pMVar9,(FPUVector *)&local_338,(TQuaternion *)&local_318,(FPUVector *)&local_308)
        ;
        TGraphics__Draw(Graphics,pSelectionBox,(IndexBuffer *)0x0);
        uVar12 = (int)uVar17 + 1;
        uVar17 = (ulong)uVar12;
      } while ((int)uVar12 < (int)(uint)*(ushort *)(self + 0x98));
    }
    if (pTempSetSelection._40_2_ != 0) {
      uVar17 = 0;
      do {
        local_2f8 = 0.0;
        local_2f4 = 0.0;
        local_2f0 = 0;
        local_2ec = 0;
        local_2e8 = 0.0;
        local_2e4 = 0.0;
        local_2e0 = 0.0;
        local_2dc = 0.0;
                    /* try { // try from 004b34ab to 004b34ad has its CatchHandler @ 004b4a22 */
        (**(code **)(*GSuperMeatBoy__pLevelPalette + 0x58))
                  (GSuperMeatBoy__pLevelPalette,
                   *(uint64_t *)(pTempSetSelection._56_8_ + (uVar17 & 0xffff) * 8),&local_2f8,
                   local_48,&local_2e8);
        plVar16 = (long *)((uVar17 & 0xffff) * 8 + pTempSetSelection._56_8_);
        local_2f8 = local_2f8 * *(float *)(*plVar16 + 0x34);
        local_2f8 = local_2f8 + local_2f8;
        local_2f0 = 0x3f800000;
        local_2f4 = local_2f4 * *(float *)(*plVar16 + 0x38);
        local_2f4 = local_2f4 + local_2f4;
        sincosf(DAT_005be6e4 /* R:0.5f */ * *(float *)(*plVar16 + 0x3c),&local_39c,&local_3a0);
        local_318 = 0;
        local_314 = 0;
        local_310 = local_39c;
        local_30c = local_3a0;
        lVar11 = *plVar16;
        local_2cc = local_2dc + *(float *)(lVar11 + 0x30);
        local_2d0 = local_2e0 + *(float *)(lVar11 + 0x2c);
        local_2d4 = local_2e4 + *(float *)(lVar11 + 0x28);
        local_2d8 = local_2e8 + *(float *)(lVar11 + 0x24);
                    /* try { // try from 004b35b3 to 004b35ec has its CatchHandler @ 004b4a14 */
        pMVar9 = (Matrix4x4 *)TGraphics__GetMatrix(Graphics,0);
        Matrix4x4__Transformation3D
                  (pMVar9,(FPUVector *)&local_2f8,(TQuaternion *)&local_318,(FPUVector *)&local_2d8)
        ;
        TGraphics__Draw(Graphics,pSelectionBox,(IndexBuffer *)0x0);
        uVar12 = (int)uVar17 + 1;
        uVar17 = (ulong)uVar12;
      } while ((int)uVar12 < (int)(uint)(ushort)pTempSetSelection._40_2_);
    }
  }
  else if (iVar8 == 3) {
                    /* try { // try from 004b4650 to 004b46c0 has its CatchHandler @ 004b4a55 */
    TGraphics__ResetPixelStages(Graphics);
    TGraphics__AddPixelStage(Graphics,1,0,0,0,0,1,0xffffffff);
    local_2c8 = 0x3f800000;
    local_2c4 = 0;
    local_2c0 = 0;
    local_2bc = 0x3f800000;
    TGraphics__SetPixelColorConstant(Graphics,0,&local_2c8);
    lVar11 = *(long *)(SuperMeatBoy + 0x40);
    local_178 = *(float *)(lVar11 + 0x22bc) - *(float *)(lVar11 + 0x22b4);
    local_174 = *(float *)(lVar11 + 0x22c0) - *(float *)(lVar11 + 0x22b8);
    local_168 = local_178 * DAT_005be6e4 /* R:0.5f */;
    local_164 = local_174 * DAT_005be6e4 /* R:0.5f */;
                    /* try { // try from 004b4737 to 004b473b has its CatchHandler @ 004b49ca */
    Vector2__operator_plus__005be140(local_158,(Vector2 *)(lVar11 + 0x22b4));
                    /* try { // try from 004b4745 to 004b4811 has its CatchHandler @ 004b49b2 */
    pMVar9 = (Matrix4x4 *)TGraphics__GetMatrix(Graphics,0);
    Matrix4x4__Transformation2DRot(pMVar9,(Vector2 *)&local_178,(float *)0x0,local_158);
    TGraphics__Draw(Graphics,pSelectionBox,(IndexBuffer *)0x0);
    pVVar10 = *(Vector2 **)(*(long *)(SuperMeatBoy + 0x38) + 0x1180);
    this_00 = *(VertexBuffer **)(pWaypointStream + 0x20);
    local_78[0] = (void *)0x0;
    VertexBuffer__Lock(this_00,local_78,1,0);
    iVar8 = 0;
    for (; pVVar10 != (Vector2 *)0x0; pVVar10 = *(Vector2 **)(pVVar10 + 0x18)) {
      if (*(Vector2 **)(self + 0x108) == pVVar10) {
        local_2b8 = 0;
        local_2b4 = 0x3f800000;
        local_2b0 = 0;
        local_2ac = 0x3f800000;
                    /* try { // try from 004b4903 to 004b4992 has its CatchHandler @ 004b49b2 */
        TGraphics__SetPixelColorConstant(Graphics,0,&local_2b8);
      }
      else {
        local_2a8 = 0x3f800000;
        local_2a4 = 0;
        local_2a0 = 0;
        local_29c = 0x3f800000;
        TGraphics__SetPixelColorConstant(Graphics,0,&local_2a8);
      }
      local_148 = 0x41200000;
      local_144 = 0x41200000;
                    /* try { // try from 004b4831 to 004b485f has its CatchHandler @ 004b49f4 */
      pMVar9 = (Matrix4x4 *)TGraphics__GetMatrix(Graphics,0);
      Matrix4x4__Transformation2DRot(pMVar9,(Vector2 *)&local_148,(float *)0x0,pVVar10);
      TGraphics__Draw(Graphics,CGR__pSingleQuadStream,(IndexBuffer *)0x0);
      if (*(uint32_t **)(pVVar10 + 0x20) != (uint32_t *)0x0) {
        *(uint32_t *)((long)local_78[0] + (long)iVar8 * 8) = **(uint32_t **)(pVVar10 + 0x20);
        *(uint32_t *)((long)local_78[0] + (long)iVar8 * 8 + 4) =
             *(uint32_t *)(*(long *)(pVVar10 + 0x20) + 4);
        iVar14 = iVar8 + 1;
        iVar8 = iVar8 + 2;
        *(uint32_t *)((long)local_78[0] + (long)iVar14 * 8) = *(uint32_t *)pVVar10;
        *(uint32_t *)((long)local_78[0] + (long)iVar14 * 8 + 4) = *(uint32_t *)(pVVar10 + 4);
      }
    }
    VertexBuffer__Unlock(this_00);
    pTVar5 = Graphics;
    pVVar3 = pWaypointStream;
    *(int *)(pWaypointStream + 0x10) = iVar8 >> 1;
    *(int *)(pVVar3 + 0x14) = iVar8;
    pMVar9 = (Matrix4x4 *)TGraphics__GetMatrix(pTVar5,0);
    Matrix4x4__Identity(pMVar9);
    local_298 = 0x3f800000;
    local_294 = 0x3f800000;
    local_290 = 0;
    local_28c = 0x3f800000;
    TGraphics__SetPixelColorConstant(Graphics,0,&local_298);
    TGraphics__Draw(Graphics,pWaypointStream,(IndexBuffer *)0x0);
  }
  else if (iVar8 == 6) {
    if (pSelectedLight != (Vector2 *)0x0) {
                    /* try { // try from 004b4479 to 004b44e9 has its CatchHandler @ 004b4a55 */
      TGraphics__ResetPixelStages(Graphics);
      TGraphics__AddPixelStage(Graphics,1,0,0,0,0,1,0xffffffff);
      local_288 = 0x3f800000;
      local_284 = 0;
      local_280 = 0;
      local_27c = 0x3f800000;
      TGraphics__SetPixelColorConstant(Graphics,0,&local_288);
      pVVar10 = pSelectedLight;
      local_138 = *(uint32_t *)(pSelectedLight + 0x20);
      local_134 = local_138;
                    /* try { // try from 004b450b to 004b4539 has its CatchHandler @ 004b4a75 */
      pMVar9 = (Matrix4x4 *)TGraphics__GetMatrix(Graphics,0);
      Matrix4x4__Transformation2DRot(pMVar9,(Vector2 *)&local_138,(float *)0x0,pVVar10);
      TGraphics__Draw(Graphics,pSelectionBox,(IndexBuffer *)0x0);
    }
                    /* try { // try from 004b4548 to 004b45e9 has its CatchHandler @ 004b4a55 */
    iVar8 = TileLevelLightMap__getNumLights(*(TileLevelLightMap **)(SuperMeatBoy + 0x390));
    if (0 < iVar8) {
      iVar14 = 0;
      do {
        pVVar10 = (Vector2 *)
                  TileLevelLightMap__GetLight(*(TileLevelLightMap **)(SuperMeatBoy + 0x390),iVar14);
        TGraphics__ResetPixelStages(Graphics);
        TGraphics__AddPixelStage(Graphics,1,0,0,0,0,1,0xffffffff);
        local_278 = 0;
        local_274 = 0;
        local_270 = 0;
        local_26c = 0x3f800000;
        TGraphics__SetPixelColorConstant(Graphics,0,&local_278);
        local_128 = 0x41200000;
        local_124 = 0x41200000;
                    /* try { // try from 004b4609 to 004b4637 has its CatchHandler @ 004b4a65 */
        pMVar9 = (Matrix4x4 *)TGraphics__GetMatrix(Graphics,0);
        Matrix4x4__Transformation2DRot(pMVar9,(Vector2 *)&local_128,(float *)0x0,pVVar10);
        TGraphics__Draw(Graphics,pLightCross,(IndexBuffer *)0x0);
        iVar14 = iVar14 + 1;
      } while (iVar14 != iVar8);
    }
  }
  else if (iVar8 == 7) {
    local_118 = local_398;
    local_114 = local_394;
    SMBAnimals__EditorRender
              ((SMBAnimals *)GSuperMeatBoy__pLevelPalette_0x83d,iAnimalIDX,(Vector2 *)&local_118);
    if (pSelectedAnimal != 0) {
      TGraphics__ResetPixelStages(Graphics);
      TGraphics__AddPixelStage(Graphics,1,0,0,0,0,1,0xffffffff);
      local_268 = 0;
      local_264 = 0x3f800000;
      local_260 = 0;
      local_25c = 0x3f800000;
      TGraphics__SetPixelColorConstant(Graphics,0,&local_268);
      lVar11 = pSelectedAnimal;
      local_108 = TileLevel__fLevelGridWH;
      local_104 = TileLevel__fLevelGridWH;
                    /* try { // try from 004b3957 to 004b3989 has its CatchHandler @ 004b4a16 */
      pMVar9 = (Matrix4x4 *)TGraphics__GetMatrix(Graphics,0);
      Matrix4x4__Transformation2DRot
                (pMVar9,(Vector2 *)&local_108,(float *)0x0,(Vector2 *)(lVar11 + 0xf8));
      TGraphics__Draw(Graphics,pSelectionBox,(IndexBuffer *)0x0);
    }
  }
  if (bSetPieceWayPointMode == 1) {
    if (pCurrentSetPieceWayPoint == (float *)0x0) goto LAB_004b3623;
                    /* try { // try from 004b39a5 to 004b39e6 has its CatchHandler @ 004b4a55 */
    TGraphics__ResetPixelStages(Graphics);
    TGraphics__AddPixelStage(Graphics,1,0,0,0,0,1,0xffffffff);
    TGraphics__SetPixelColorConstant(Graphics,0,::cRed);
    local_258 = 0.0;
    local_254 = 0.0;
    local_250 = 0;
    local_24c = 0;
    local_248 = 0.0;
    local_244 = 0.0;
    local_240 = 0.0;
    local_23c = 0.0;
                    /* try { // try from 004b3a6b to 004b3a6d has its CatchHandler @ 004b4a12 */
    (**(code **)(*GSuperMeatBoy__pLevelPalette + 0x58))
              (GSuperMeatBoy__pLevelPalette,**(uint64_t **)(self + 0xa8),&local_258,local_48,
               &local_248);
    pfVar4 = pCurrentSetPieceWayPoint;
    local_250 = 0x3f800000;
    local_258 = local_258 * pCurrentSetPieceWayPoint[4] + local_258 * pCurrentSetPieceWayPoint[4];
    local_254 = local_254 * pCurrentSetPieceWayPoint[5] + local_254 * pCurrentSetPieceWayPoint[5];
    sincosf(DAT_005be6e4 /* R:0.5f */ * pCurrentSetPieceWayPoint[6],&local_39c,&local_3a0);
    local_318 = 0;
    local_314 = 0;
    local_310 = local_39c;
    local_30c = local_3a0;
    local_238 = local_248 + *pfVar4;
    local_234 = local_244 + pfVar4[1];
    local_230 = local_240 + pfVar4[2];
    local_22c = local_23c + pfVar4[3];
                    /* try { // try from 004b3b62 to 004b3b9b has its CatchHandler @ 004b49f6 */
    pMVar9 = (Matrix4x4 *)TGraphics__GetMatrix(Graphics,0);
    Matrix4x4__Transformation3D
              (pMVar9,(FPUVector *)&local_258,(TQuaternion *)&local_318,(FPUVector *)&local_238);
    TGraphics__Draw(Graphics,pSelectionBox,(IndexBuffer *)0x0);
  }
  if (((bSetPieceWayPointMode == 0) && (*(int *)(Mouse + 0x14) == 2)) &&
     ((*(int *)(Keyboard + 0x334) == 2 ||
      (((*(int *)(Keyboard + 0x544) == 2 || (*(int *)(Keyboard + 0x310) == 2)) ||
       (*(int *)(Keyboard + 0x514) == 2)))))) {
                    /* try { // try from 004b4343 to 004b43b3 has its CatchHandler @ 004b4a55 */
    TGraphics__ResetPixelStages(Graphics);
    TGraphics__AddPixelStage(Graphics,1,0,0,0,0,1,0xffffffff);
    local_228 = 0x3f800000;
    local_224 = 0x3f800000;
    local_220 = 0x3f800000;
    local_21c = 0x3f800000;
    TGraphics__SetPixelColorConstant(Graphics,0,&local_228);
    local_f8 = vSelectionPoint2 - vSelectionPoint1;
    local_f4 = DAT_0081a974 /* R:2.2958888052482446e-39f */ - _DAT_0081a97c /* R:0.0f */;
    local_e8 = local_f8 * DAT_005c0e00 /* R:-0.5f */;
    local_e4 = local_f4 * DAT_005be6e4 /* R:0.5f */;
                    /* try { // try from 004b441d to 004b4421 has its CatchHandler @ 004b49f2 */
    Vector2__operator_minus__005be180(local_d8,(Vector2 *)&vSelectionPoint1);
                    /* try { // try from 004b442b to 004b445e has its CatchHandler @ 004b49e6 */
    pMVar9 = (Matrix4x4 *)TGraphics__GetMatrix(Graphics,0);
    Matrix4x4__Transformation2DRot(pMVar9,(Vector2 *)&local_f8,(float *)0x0,local_d8);
    TGraphics__Draw(Graphics,pSelectionBox,(IndexBuffer *)0x0);
  }
LAB_004b3623:
  if ((*(int *)(self + 0xd4) != -1) && (*(int *)(self + 0xf8) == 0)) {
                    /* try { // try from 004b420d to 004b42b7 has its CatchHandler @ 004b4a55 */
    TGraphics__ResetPixelStages(Graphics);
    TGraphics__ResetTexCoordGen(Graphics);
    uVar6 = TGraphics__SetTexture
                      (Graphics,0xff,*(Texture **)(self + (long)*(int *)(self + 0xd4) * 8 + 0xd8));
    uVar7 = SamplerRegisterToSource(uVar6);
    TGraphics__AddPixelStage(Graphics,1,0,uVar7,1,3,3,0xffffffff);
    local_218 = 0x3f800000;
    local_214 = 0x3f800000;
    local_210 = 0x3f800000;
    local_20c = 0x3dcccccd;
    TGraphics__SetPixelColorConstant(Graphics,0,&local_218);
    local_c8 = 0x42200000;
    local_c4 = 0x42200000;
                    /* try { // try from 004b42d7 to 004b4307 has its CatchHandler @ 004b49cc */
    pMVar9 = (Matrix4x4 *)TGraphics__GetMatrix(Graphics,0);
    Matrix4x4__Transformation2DRot(pMVar9,(Vector2 *)&local_c8,(float *)0x0,(Vector2 *)&local_398);
    TGraphics__Draw(Graphics,CGR__pSingleQuadStream,(IndexBuffer *)0x0);
  }
  plVar16 = pStartPosition;
  Render()::vLastMouseScreen._0_4_ = uVar1;
  Render()::vLastMouseScreen._4_4_ = uVar2;
  if (*(int *)(self + 0xc0) != 3) {
    lVar11 = *(long *)(SuperMeatBoy + 0x40);
    *(uint32_t *)(pStartPosition + 6) = *(uint32_t *)(lVar11 + 0x22a8);
    *(uint32_t *)((long)plVar16 + 0x34) = *(uint32_t *)(lVar11 + 0x22ac);
                    /* try { // try from 004b368a to 004b372b has its CatchHandler @ 004b4a55 */
    (**(code **)(*plVar16 + 0x10))();
  }
  Camera__SetOrthoProjection
            (*(Camera **)(SuperMeatBoy + 0x38),_DAT_005c0c9c /* R:240.0f */,DAT_005c0c98 /* R:-240.0f */,DAT_005c0c94 /* R:-426.5f */,DAT_005c0c90 /* R:426.5f */,
             DAT_005c07a4 /* R:-1.0f */,DAT_005be894 /* R:1.0f */);
  Camera__SetCameraMatricies(*(Camera **)(SuperMeatBoy + 0x38),2);
  (**(code **)(*pEditorInstance + 0x10))();
  (**(code **)(*pF1Text + 0x10))();
  if ((pCurrentVisibleForm != 0) && (*(long **)(pCurrentVisibleForm + 8) != (long *)0x0)) {
    (**(code **)(**(long **)(pCurrentVisibleForm + 8) + 0x10))();
  }
  Camera__SetCameraMatricies(*(Camera **)(SuperMeatBoy + 0x38),1);
  AutoLockSection__AutoLockSection__005b59d0(local_208);
  return;
}

/* ======================================================================
 * SMBEditor__NewLevel  (Ghidra `NewLevel` @ 004b4aa0)
 * Signature: uint8_t __thiscall NewLevel(SMBEditor * self, ushort arg1, ushort arg2, char * arg3)
 * Class: SMBEditor
 * Calls: `AutoLockSection__AutoLockSection`, `AutoLockSection__AutoLockSection__005b59d0`, `FillObjectInformationArray`, `GSuperMeatBoy__SetCurrentLevel`, `GSuperMeatBoy__SetTilePalette`, `SMBCamera__SetStartPosition`, `TileLevelLightMap__Reset`, `TileLevel__getLevelLayer`
 * Called by: `EditorForm_NewFormOk`, `GSuperMeatBoy__Initialize__00516f60`, `SMB_NEW_LEVEL_Submit`
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SMBEditor__NewLevel(unsigned short, unsigned short, char const*) */

void __thiscall SMBEditor__NewLevel(SMBEditor *self,ushort arg1,ushort arg2,char *arg3)

{
  TileLevel *pTVar5;
  uint32_t uVar1;
  uint32_t uVar2;
  TileLevel *pTVar3;
  long lVar4;
  AutoLockSection aAStack_48 [16];
  uint32_t local_38;
  uint32_t local_34;
  
  AutoLockSection__AutoLockSection(aAStack_48,(CriticalSection *)RenderLayers__MasterRenderSection);
                    /* try { // try from 004b4acb to 004b4be2 has its CatchHandler @ 004b4bf6 */
  GSuperMeatBoy__SetTilePalette(SuperMeatBoy,arg3);
  SetLevelSize(self,arg1,arg2);
  pTVar3 = (TileLevel *)TileLevel__CreateBlankLevel(arg1,arg2);
  GSuperMeatBoy__SetCurrentLevel(SuperMeatBoy,pTVar3);
  RenderLayers__RemoveLayer(SMBEditorLayer);
  RenderLayers__AddLayer(SMBEditorLayer);
  lVar4 = TileLevel__getLevelLayer(pTVar3,5);
  uVar2 = _UNK_005c48cc;
  uVar1 = _UNK_005c48c8;
  pTVar5._0_4_ = _DAT_005c48c0 /* R:0.0f */;
  *(uint64_t *)(lVar4 + 0x400) = 0;
  *(uint32_t *)(lVar4 + 0x408) = uVar1;
  *(uint32_t *)(lVar4 + 0x40c) = uVar2;
  lVar4 = TileLevel__getLevelLayer(pTVar5._0_4_,pTVar3,5);
  *(uint32_t *)(lVar4 + 0x410) = 0x3ee66666;
  lVar4 = TileLevel__getLevelLayer(pTVar3,2);
  uVar2 = _UNK_005c48cc;
  uVar1 = _UNK_005c48c8;
  pTVar5._0_4_ = _DAT_005c48c0 /* R:0.0f */;
  *(uint64_t *)(lVar4 + 0x400) = 0;
  *(uint32_t *)(lVar4 + 0x408) = uVar1;
  *(uint32_t *)(lVar4 + 0x40c) = uVar2;
  lVar4 = TileLevel__getLevelLayer(pTVar5._0_4_,pTVar3,2);
  *(uint32_t *)(lVar4 + 0x410) = 0x3f19999a;
  std__string_assign((char *)(self + 0x100),0x5dc192);
  TileLevelLightMap__Reset(*(TileLevelLightMap **)(SuperMeatBoy + 0x390));
  local_38 = 0;
  local_34 = 0;
  SMBCamera__SetStartPosition(*(SMBCamera **)(SuperMeatBoy + 0x38),(Vector2 *)&local_38);
  FillObjectInformationArray(arg3);
  AutoLockSection__AutoLockSection__005b59d0(aAStack_48);
  return;
}

/* ======================================================================
 * SMBEditor__LoadLevel  (Ghidra `LoadLevel` @ 004b4d30)
 * Signature: uint8_t __thiscall LoadLevel(SMBEditor * self, TileLevelLoad * arg1)
 * Class: SMBEditor
 * Calls: `AutoLockSection__AutoLockSection`, `AutoLockSection__AutoLockSection__005b59d0`, `CreateSMBBoss`, `FillObjectInformationArray`, `GSMBMenu__IsInReplayMode`, `GSuperMeatBoy__SetCurrentLevel`, `GSuperMeatBoy__SetTilePalette`, `ShowUIMessageBox`, `TileLevelLightMap__Reset`, `std__string_string` (+1 more)
 * Called by: `FinalBoss__Update`, `GSuperMeatBoy__ShowGame`, `SMBChapter__LoadBossLevel`, `SMBChapter__LoadCurrentLevel`, `SMBChapter__LoadNextLevel`, `SMBFinalBossOutroFinished`, `SMB_LOAD_LEVEL_Submit`
 */
/* WARNING: Removing unreachable block (ram,0x004b502f) */
/* WARNING: Removing unreachable block (ram,0x004b501f) */
/* SMBEditor__LoadLevel(TileLevelLoad const*) */

TileLevel * __thiscall SMBEditor__LoadLevel(SMBEditor *self,TileLevelLoad *arg1)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  TileLevel *pTVar4;
  char *local_68;
  uint64_t local_60;
  uint64_t local_58;
  AutoLockSection local_48 [16];
  char *local_38 [2];
  char *local_28;
  allocator local_1c;
  allocator local_1b [3];
  
  AutoLockSection__AutoLockSection(local_48,(CriticalSection *)RenderLayers__MasterRenderSection);
  if (*(int *)(self + 0x110) == 1) {
                    /* try { // try from 004b4f4e to 004b4f52 has its CatchHandler @ 004b501a */
    CreateSMBBoss(iAutoCreateBossIndex);
  }
                    /* try { // try from 004b4d6b to 004b4d6f has its CatchHandler @ 004b501a */
  std__string_string((string *)local_38,"",&local_1c);
                    /* try { // try from 004b4d7f to 004b4d83 has its CatchHandler @ 004b502a */
  std__string_string((string *)&local_28,"Levels/",local_1b);
  local_60 = *(uint64_t *)(arg1 + 8);
  pcVar2 = *(char **)arg1;
  local_58 = *(uint64_t *)(arg1 + 0x10);
  local_68 = pcVar2;
  if (pcVar2 != (char *)0x0) {
    strlen(pcVar2);
                    /* try { // try from 004b4db5 to 004b4ea9 has its CatchHandler @ 004b4ff1 */
    std__string_append((char *)&local_28,(ulong)pcVar2);
    std__string_append((char *)&local_28,0x5c1d1c);
    TileLevelLightMap__Reset(*(TileLevelLightMap **)(SuperMeatBoy + 0x390));
    local_68 = local_28;
  }
  TileLevel__GetPaletteFromLevelFile((TileLevelLoad *)&local_68,(string *)local_38);
  iVar3 = std__string_compare((char *)local_38);
  if (iVar3 != 0) {
                    /* try { // try from 004b4efc to 004b4f3d has its CatchHandler @ 004b4ff1 */
    GSuperMeatBoy__SetTilePalette(SuperMeatBoy,local_38[0]);
  }
  if ((*(int *)(SuperMeatBoy + 0x3a4) == 0) &&
     (iVar3 = GSMBMenu__IsInReplayMode(SMBMenu), iVar3 == 0)) {
    SMBChapter__PreloadPalette((int)SuperMeatBoy + 0x90,0);
  }
  pTVar4 = (TileLevel *)TileLevel__LoadLevelFromFile((TileLevelLoad *)&local_68);
  if (pTVar4 == (TileLevel *)0x0) {
    ShowUIMessageBox(L"Level Failed to Load");
  }
  else if (*(int *)(SuperMeatBoy + 0x2c) == 1) {
    ShowUIMessageBox(L"Level Loaded");
  }
  FillObjectInformationArray(local_38[0]);
  if (pTVar4 != (TileLevel *)0x0) {
    SetLevelSize(self,*(ushort *)(pTVar4 + 0x38),*(ushort *)(pTVar4 + 0x3a));
    GSuperMeatBoy__SetCurrentLevel(SuperMeatBoy,pTVar4);
  }
  if (*(int *)(SuperMeatBoy + 0x2c) == 1) {
                    /* try { // try from 004b4f67 to 004b4f99 has its CatchHandler @ 004b4ff1 */
    RenderLayers__RemoveLayer(SMBEditorLayer);
    RenderLayers__AddLayer(SMBEditorLayer);
  }
  pcVar2 = *(char **)arg1;
  if (pcVar2 != (char *)0x0) {
    strlen(pcVar2);
    std__string_assign((char *)(self + 0x100),(ulong)pcVar2);
  }
  if ((allocator *)(local_28 + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage) {
    LOCK();
    piVar1 = (int *)(local_28 + -8);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 < 1) {
      std__string_Rep_M_destroy((allocator *)(local_28 + -0x18));
    }
  }
  if ((allocator *)(local_38[0] + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage) {
    LOCK();
    piVar1 = (int *)(local_38[0] + -8);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 < 1) {
      std__string_Rep_M_destroy((allocator *)(local_38[0] + -0x18));
    }
  }
  AutoLockSection__AutoLockSection__005b59d0(local_48);
  return pTVar4;
}

/* ======================================================================
 * SMBEditor__SaveLevel  (Ghidra `SaveLevel` @ 004b5040)
 * Signature: uint8_t __thiscall SaveLevel(SMBEditor * self, char * arg1, int arg2)
 * Class: SMBEditor
 * Calls: `AutoLockSection__AutoLockSection`, `AutoLockSection__AutoLockSection__005b59d0`, `RenderLayer__InsertObjectBefore`, `RenderLayer__RemoveObject`, `ShowUIMessageBox`, `Sprint`, `TileLevel__getLevelLayer`, `std__string_string`, `strlen`
 * Called by: `EditorForm_SaveFormOk`, `EditorForm_UploadFormOk`, `QuickSave`, `SMB_SAVE_LEVEL_Submit`
 */
/* WARNING: Removing unreachable block (ram,0x004b5293) */
/* SMBEditor__SaveLevel(char const*, int) */

void __thiscall SMBEditor__SaveLevel(SMBEditor *self,char *arg1,int arg2)

{
  int *piVar1;
  uint uVar2;
  RenderLayerObject *pRVar3;
  int iVar4;
  RenderLayer *this_00;
  uint *puVar5;
  uint local_68 [8];
  AutoLockSection local_48 [16];
  char *local_38;
  allocator local_2a [2];
  
  puVar5 = local_68;
  AutoLockSection__AutoLockSection(local_48,(CriticalSection *)RenderLayers__MasterRenderSection);
                    /* try { // try from 004b5084 to 004b5088 has its CatchHandler @ 004b528e */
  std__string_string((string *)&local_38,"Levels/",local_2a);
  strlen(arg1);
                    /* try { // try from 004b509c to 004b513d has its CatchHandler @ 004b526f */
  std__string_append((char *)&local_38,(ulong)arg1);
  std__string_append((char *)&local_38,0x5c1d1c);
  if (bEditorTmpLevelSave == 1) {
    Sprint(&DAT_005c8bf9 /* R:u32=1996515621 */,local_68,*(uint32_t *)(Engine + 8));
    std__string_append((char *)&local_38,0x5c3206);
    do {
      uVar2 = *puVar5;
      puVar5 = puVar5 + 1;
    } while ((uVar2 + 0xfefefeff & ~uVar2 & 0x80808080) == 0);
    std__string_append((char *)&local_38,(ulong)local_68);
    std__string_assign((string *)&strEditorTmpLevelFile);
  }
  this_00 = (RenderLayer *)TileLevel__getLevelLayer(*(TileLevel **)(SuperMeatBoy + 0x40),0);
  pRVar3 = *(RenderLayerObject **)(this_00 + 8);
  RenderLayer__RemoveObject(this_00,pRVar3);
  iVar4 = TileLevel__SaveLevel(*(TileLevel **)(SuperMeatBoy + 0x40),local_38,7);
  if (iVar4 == 0) {
                    /* try { // try from 004b5185 to 004b5240 has its CatchHandler @ 004b526f */
    ShowUIMessageBox(L"Failed to Save Level");
  }
  else if (((*(int *)(SuperMeatBoy + 0x2c) == 1) && (arg2 == 0)) && (bEditorTmpLevelSave == 0)) {
    ShowUIMessageBox(L"Level Saved");
  }
  strlen(arg1);
  std__string_assign((char *)(self + 0x100),(ulong)arg1);
  RenderLayer__InsertObjectBefore(this_00,pRVar3,*(RenderLayerObject **)(this_00 + 8));
  if ((allocator *)(local_38 + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage) {
    LOCK();
    piVar1 = (int *)(local_38 + -8);
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 < 1) {
      std__string_Rep_M_destroy((allocator *)(local_38 + -0x18));
    }
  }
  AutoLockSection__AutoLockSection__005b59d0(local_48);
  return;
}

/* ======================================================================
 * SMBEditor__InitiateTmpSave  (Ghidra `InitiateTmpSave` @ 004b5570)
 * Signature: uint8_t __stdcall InitiateTmpSave(void)
 * Class: SMBEditor
 * Calls: (none)
 * Called by: (none)
 */
/* SMBEditor__InitiateTmpSave() */

void SMBEditor__InitiateTmpSave(void)

{
  bEditorTmpLevelSave = 1;
  return;
}

/* ======================================================================
 * SMBEditor__DeleteTmpSave  (Ghidra `DeleteTmpSave` @ 004b5580)
 * Signature: uint8_t __stdcall DeleteTmpSave(void)
 * Class: SMBEditor
 * Calls: (none)
 * Called by: (none)
 */
/* SMBEditor__DeleteTmpSave() */

void SMBEditor__DeleteTmpSave(void)

{
  bEditorTmpLevelSave = 0;
  File__DeleteFile(strEditorTmpLevelFile);
  return;
}

/* ======================================================================
 * SMBEditor__OpenTmpFile  (Ghidra `OpenTmpFile` @ 004b55a0)
 * Signature: uint8_t __stdcall OpenTmpFile(void)
 * Class: SMBEditor
 * Calls: `File__File`, `operator_new`
 * Called by: (none)
 */
/* SMBEditor__OpenTmpFile() */

File * SMBEditor__OpenTmpFile(void)

{
  File *self;
  uint64_t local_48;
  uint8_t *local_40;
  uint32_t local_38;
  uint64_t local_30;
  uint32_t local_28;
  uint32_t local_24;
  uint32_t local_20;
  uint32_t local_1c;
  uint32_t local_18;
  uint32_t local_14;
  uint8_t *local_10;
  
  local_38 = 2;
  local_30 = 0;
  local_28 = 0;
  local_24 = 1;
  local_20 = 1;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = &DAT_005c04cf /* R:7.374579797039071e-39f */;
  local_48 = strEditorTmpLevelFile;
  local_40 = &DAT_005c328c /* R:u32=1811964530 */;
  self = operator_new(0x30);
                    /* try { // try from 004b5619 to 004b561d has its CatchHandler @ 004b5627 */
  File__File(self,(tagFileCreation *)&local_48);
  return self;
}

/* ======================================================================
 * SMBEditor__QuickSaveLevel  (Ghidra `QuickSaveLevel` @ 004b5650)
 * Signature: uint8_t __thiscall QuickSaveLevel(SMBEditor * self)
 * Class: SMBEditor
 * Calls: `SaveLevel`, `UIForm__Activate`
 * Called by: (none)
 */
/* SMBEditor__QuickSaveLevel() */

void __thiscall SMBEditor__QuickSaveLevel(SMBEditor *self)

{
  if (*(long *)(*(char **)(self + 0x100) + -0x18) == 0) {
    UIForm__Activate(SMBEditorForms__SMB_SAVE_LEVEL);
    return;
  }
  SaveLevel(self,*(char **)(self + 0x100),1);
  return;
}

/* ======================================================================
 * SMBEditor__ResizeLevel  (Ghidra `ResizeLevel` @ 004b5680)
 * Signature: uint8_t __thiscall ResizeLevel(SMBEditor * self, ushort arg1, ushort arg2)
 * Class: SMBEditor
 * Calls: `AutoLockSection__AutoLockSection`, `AutoLockSection__AutoLockSection__005b59d0`, `TileLevel__ExtendLevelToWH`
 * Called by: `SMB_LEVEL_PROPS_Submit`
 */
/* SMBEditor__ResizeLevel(unsigned short, unsigned short) */

void __thiscall SMBEditor__ResizeLevel(SMBEditor *self,ushort arg1,ushort arg2)

{
  AutoLockSection aAStack_28 [16];
  
  AutoLockSection__AutoLockSection(aAStack_28,(CriticalSection *)RenderLayers__MasterRenderSection);
                    /* try { // try from 004b56bc to 004b56cc has its CatchHandler @ 004b56e9 */
  TileLevel__ExtendLevelToWH(*(TileLevel **)(SuperMeatBoy + 0x40),arg1,arg2);
  SetLevelSize(self,arg1,arg2);
  AutoLockSection__AutoLockSection__005b59d0(aAStack_28);
  return;
}

/* ======================================================================
 * SMBEditor__PromptLevelUploadForm  (Ghidra `PromptLevelUploadForm` @ 004b5710)
 * Signature: uint8_t __stdcall PromptLevelUploadForm(void)
 * Class: SMBEditor
 * Calls: `EditorForm__Activate`, `ShowEditor`
 * Called by: `DrFetusCaptureFinished`
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SMBEditor__PromptLevelUploadForm() */

void SMBEditor__PromptLevelUploadForm(void)

{
  if (bUploadMode != 1) {
    return;
  }
  ShowEditor((tagButtonProps *)0x0,(void *)0x0);
  EditorForm__Activate(pEditorUploadForm);
  EditorForm__SetIndividualTextValue
            ((int)pEditorUploadForm,(char *)0x1,(double)(_DAT_005c0f60 /* R:1.100000023841858f */ * *(float *)(SMBHUD + 0x418))
             ,"Par Time: %.02f");
  return;
}

/* ======================================================================
 * SMBEditor__GetCurrentPaletteIndex  (Ghidra `GetCurrentPaletteIndex` @ 004b5780)
 * Signature: uint8_t __stdcall GetCurrentPaletteIndex(void)
 * Class: SMBEditor
 * Calls: `strcmp`
 * Called by: `SMBLevelPortal__UploadPortalLevel`
 */
/* SMBEditor__GetCurrentPaletteIndex() */

char SMBEditor__GetCurrentPaletteIndex(void)

{
  byte *__s1;
  char cVar1;
  int iVar2;
  long lVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint8_t in_CF;
  bool bVar6;
  bool bVar7;
  uint8_t in_ZF;
  bool bVar8;
  
  lVar3 = 10;
  __s1 = *(byte **)(GSuperMeatBoy__pLevelPalette + 0x18);
  cVar1 = '\x01';
  pbVar4 = __s1;
  pbVar5 = (byte *)"forest.lp";
  do {
    if (lVar3 == 0) break;
    lVar3 = lVar3 + -1;
    in_CF = *pbVar4 < *pbVar5;
    in_ZF = *pbVar4 == *pbVar5;
    pbVar4 = pbVar4 + 1;
    pbVar5 = pbVar5 + 1;
  } while ((bool)in_ZF);
  bVar6 = (!(bool)in_CF && !(bool)in_ZF) < (byte)in_CF;
  bVar8 = (!(bool)in_CF && !(bool)in_ZF) == (bool)in_CF;
  if (!bVar8) {
    lVar3 = 0xc;
    pbVar4 = __s1;
    pbVar5 = (byte *)"hospital.lp";
    do {
      if (lVar3 == 0) break;
      lVar3 = lVar3 + -1;
      bVar6 = *pbVar4 < *pbVar5;
      bVar8 = *pbVar4 == *pbVar5;
      pbVar4 = pbVar4 + 1;
      pbVar5 = pbVar5 + 1;
    } while (bVar8);
    cVar1 = '\x02';
    bVar7 = (!bVar6 && !bVar8) < bVar6;
    bVar6 = (!bVar6 && !bVar8) == bVar6;
    if (!bVar6) {
      lVar3 = 0xb;
      pbVar4 = __s1;
      pbVar5 = (byte *)"factory.lp";
      do {
        if (lVar3 == 0) break;
        lVar3 = lVar3 + -1;
        bVar7 = *pbVar4 < *pbVar5;
        bVar6 = *pbVar4 == *pbVar5;
        pbVar4 = pbVar4 + 1;
        pbVar5 = pbVar5 + 1;
      } while (bVar6);
      cVar1 = '\x03';
      bVar8 = (!bVar7 && !bVar6) < bVar7;
      bVar6 = (!bVar7 && !bVar6) == bVar7;
      if (!bVar6) {
        lVar3 = 8;
        pbVar4 = __s1;
        pbVar5 = &DAT_005c2bc4 /* R:"hell.lp" */;
        do {
          if (lVar3 == 0) break;
          lVar3 = lVar3 + -1;
          bVar8 = *pbVar4 < *pbVar5;
          bVar6 = *pbVar4 == *pbVar5;
          pbVar4 = pbVar4 + 1;
          pbVar5 = pbVar5 + 1;
        } while (bVar6);
        cVar1 = '\x04';
        bVar7 = (!bVar8 && !bVar6) < bVar8;
        bVar6 = (!bVar8 && !bVar6) == bVar8;
        if (!bVar6) {
          lVar3 = 0xb;
          pbVar4 = __s1;
          pbVar5 = (byte *)"rapture.lp";
          do {
            if (lVar3 == 0) break;
            lVar3 = lVar3 + -1;
            bVar7 = *pbVar4 < *pbVar5;
            bVar6 = *pbVar4 == *pbVar5;
            pbVar4 = pbVar4 + 1;
            pbVar5 = pbVar5 + 1;
          } while (bVar6);
          cVar1 = '\x05';
          bVar8 = (!bVar7 && !bVar6) < bVar7;
          bVar6 = (!bVar7 && !bVar6) == bVar7;
          if (!bVar6) {
            lVar3 = 7;
            pbVar4 = __s1;
            pbVar5 = &DAT_005c2bd7 /* R:"end.lp" */;
            do {
              if (lVar3 == 0) break;
              lVar3 = lVar3 + -1;
              bVar8 = *pbVar4 < *pbVar5;
              bVar6 = *pbVar4 == *pbVar5;
              pbVar4 = pbVar4 + 1;
              pbVar5 = pbVar5 + 1;
            } while (bVar6);
            cVar1 = '\x06';
            bVar7 = (!bVar8 && !bVar6) < bVar8;
            bVar6 = (!bVar8 && !bVar6) == bVar8;
            if (!bVar6) {
              lVar3 = 10;
              pbVar4 = __s1;
              pbVar5 = &DAT_005c2bde /* R:"retro1.lp" */;
              do {
                if (lVar3 == 0) break;
                lVar3 = lVar3 + -1;
                bVar7 = *pbVar4 < *pbVar5;
                bVar6 = *pbVar4 == *pbVar5;
                pbVar4 = pbVar4 + 1;
                pbVar5 = pbVar5 + 1;
              } while (bVar6);
              cVar1 = '\a';
              if ((!bVar7 && !bVar6) != bVar7) {
                iVar2 = strcmp((char *)__s1,"4bit1.lp");
                cVar1 = '\t';
                if (iVar2 != 0) {
                  iVar2 = strcmp((char *)__s1,"gb.lp");
                  return (-(iVar2 == 0) & 7U) + 1;
                }
              }
            }
          }
        }
      }
    }
  }
  return cVar1;
}
