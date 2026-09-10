/* src/game/classes/GSMBCutSceneManager.c — 14 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "GSMBCutSceneManager.h"

/* ======================================================================
 * GSMBCutSceneManager__GSMBCutSceneManager  (Ghidra `~GSMBCutSceneManager` @ 0049d520)
 * Signature: uint8_t __thiscall ~GSMBCutSceneManager(GSMBCutSceneManager * self)
 * Class: GSMBCutSceneManager
 * Calls: `FlashAnimationLibrary__FlashAnimationLibrary`, `GSMBCutSceneManager__GSMBCutSceneManager__0049d5c0`, `RenderLayer__RenderLayer__005988e0`, `operator_delete`
 * Called by: (none)
 */
/* GSMBCutSceneManager__GSMBCutSceneManager__0049d5c0() */

void __thiscall GSMBCutSceneManager__GSMBCutSceneManager__0049d5c0(GSMBCutSceneManager *self)

{
  FlashAnimationLibrary *this_00;
  
  *(uint8_t ***)self = &PTR__GSMBCutSceneManager_005c2af0;
  if (*(long **)(self + 0x478) != (long *)0x0) {
                    /* try { // try from 0049d53f to 0049d585 has its CatchHandler @ 0049d59f */
    (**(code **)(**(long **)(self + 0x478) + 8))();
  }
  this_00 = *(FlashAnimationLibrary **)(self + 0x468);
  *(uint64_t *)(self + 0x478) = 0;
  if (this_00 != (FlashAnimationLibrary *)0x0) {
    FlashAnimationLibrary__FlashAnimationLibrary(this_00);
    operator_delete(this_00);
  }
  *(uint64_t *)(self + 0x468) = 0;
  if (*(long **)(self + 0x480) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x480) + 8))();
  }
  *(uint64_t *)(self + 0x480) = 0;
  RenderLayer__RenderLayer__005988e0((RenderLayer *)self);
  return;
}

/* ======================================================================
 * GSMBCutSceneManager__GSMBCutSceneManager__0049d5c0  (Ghidra `~GSMBCutSceneManager` @ 0049d5c0)
 * Signature: uint8_t __thiscall ~GSMBCutSceneManager(GSMBCutSceneManager * self)
 * Class: GSMBCutSceneManager
 * Calls: `operator_delete`
 * Called by: `GSMBCutSceneManager__GSMBCutSceneManager`
 */
/* GSMBCutSceneManager__GSMBCutSceneManager__0049d5c0() */

void __thiscall GSMBCutSceneManager__GSMBCutSceneManager__0049d5c0(GSMBCutSceneManager *self)

{
  GSMBCutSceneManager__dtor(self);
  operator_delete(self);
  return;
}

/* ======================================================================
 * GSMBCutSceneManager__GSMBCutSceneManager__0049d5e0  (Ghidra `GSMBCutSceneManager` @ 0049d5e0)
 * Signature: uint8_t __thiscall GSMBCutSceneManager(GSMBCutSceneManager * self, int arg1)
 * Class: GSMBCutSceneManager
 * Calls: `FlashAnimationLibrary__FlashAnimationLibrary__00576680`, `FlashAnimationLibrary__GetMovieClip__005731d0`, `FlashAnimationLibrary__GetTextField`, `FormatResourcePath`, `GetLocalizedText`, `RenderLayer__RenderLayer__00597d50`, `operator_new`
 * Called by: `GSMBInstructions__GSMBInstructions`, `GSuperMeatBoy__Initialize__00516f60`
 */
/* WARNING: Removing unreachable block (ram,0x0049d7cf) */
/* GSMBCutSceneManager__GSMBCutSceneManager__0049d5e0(int) */

void __thiscall GSMBCutSceneManager__GSMBCutSceneManager__0049d5e0(GSMBCutSceneManager *self,int arg1)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  FlashAnimationLibrary *this_00;
  uint64_t uVar4;
  uint8_t *local_28 [2];
  
  RenderLayer__RenderLayer__00597d50((RenderLayer *)self);
  *(uint8_t ***)self = &PTR__GSMBCutSceneManager_005c2af0;
  *(uint32_t *)(self + 0x418) = 0x3f800000;
  *(uint32_t *)(self + 0x41c) = 0x3f800000;
  *(uint32_t *)(self + 0x420) = 0;
  *(uint64_t *)(self + 0x428) = 0;
  *(uint64_t *)(self + 0x430) = 0;
  *(uint64_t *)(self + 0x438) = 0;
  *(uint64_t *)(self + 0x440) = 0;
  *(uint64_t *)(self + 0x448) = 0;
  *(uint32_t *)(self + 0x450) = 0;
  *(uint32_t *)(self + 0x454) = 1;
  *(uint32_t *)(self + 0x458) = 1;
  *(uint32_t *)(self + 0x460) = 0;
  *(uint64_t *)(self + 0x468) = 0;
  *(uint64_t *)(self + 0x470) = 0;
  *(uint64_t *)(self + 0x478) = 0;
  *(uint64_t *)(self + 0x480) = 0;
  *(uint32_t *)(self + 0x488) = 0;
  *(uint32_t *)(self + 0x48c) = 0;
  *(uint32_t *)(self + 0x490) = 0x4b0;
  if (arg1 == 1) {
    local_28[0] = &DAT_008184c8 /* R:0.00016803004837129265f */;
                    /* try { // try from 0049d6e0 to 0049d6f1 has its CatchHandler @ 0049d7a4 */
    pcVar3 = (char *)FormatResourcePath("/Menus/loading.am",local_28);
    this_00 = operator_new(0xb0);
                    /* try { // try from 0049d6fb to 0049d6ff has its CatchHandler @ 0049d7bf */
    FlashAnimationLibrary__FlashAnimationLibrary__00576680(this_00,pcVar3);
    *(FlashAnimationLibrary **)(self + 0x468) = this_00;
                    /* try { // try from 0049d70f to 0049d765 has its CatchHandler @ 0049d7a4 */
    uVar4 = FlashAnimationLibrary__GetTextField(this_00,"loading");
    *(uint64_t *)(self + 0x470) = uVar4;
    uVar4 = FlashAnimationLibrary__GetMovieClip__005731d0
                      (*(FlashAnimationLibrary **)(self + 0x468),"loading2");
    *(uint64_t *)(self + 0x478) = uVar4;
    uVar4 = FlashAnimationLibrary__GetMovieClip__005731d0
                      (*(FlashAnimationLibrary **)(self + 0x468),"loading1");
    *(uint64_t *)(self + 0x480) = uVar4;
    uVar4 = GetLocalizedText(0xca);
    FlashTextField__SetText(*(wchar_t **)(self + 0x470),uVar4);
    if ((allocator *)(local_28[0] + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage)
    {
      LOCK();
      piVar1 = (int *)(local_28[0] + -8);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 < 1) {
        std__string_Rep_M_destroy((allocator *)(local_28[0] + -0x18));
      }
    }
  }
  return;
}

/* ======================================================================
 * GSMBCutSceneManager__IsRendering  (Ghidra `IsRendering` @ 0049d7e0)
 * Signature: uint8_t __thiscall IsRendering(GSMBCutSceneManager * self)
 * Class: GSMBCutSceneManager
 * Calls: `LoadingRenderThreadActive`
 * Called by: `GMeatHUD__Update`, `GSuperMeatBoy__Update__00516690`, `ShowPauseMenuPress`
 */
/* GSMBCutSceneManager__IsRendering() */

bool __thiscall GSMBCutSceneManager__IsRendering(GSMBCutSceneManager *self)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = true;
  if (*(int *)(self + 0x460) != 1) {
    iVar1 = LoadingRenderThreadActive();
    bVar2 = iVar1 == 1;
  }
  return bVar2;
}

/* ======================================================================
 * GSMBCutSceneManager__PlayCutScene  (Ghidra `PlayCutScene` @ 0049d810)
 * Signature: uint8_t __thiscall PlayCutScene(GSMBCutSceneManager * self, SMBCutScene * arg1)
 * Class: GSMBCutSceneManager
 * Calls: `EnableLoadingRenderThread`, `FlashLibraryInstance__Reset`, `GSuperMeatBoy__MarkAllLevelsInvisible`, `GSuperMeatBoy__MarkAllLevelsVisible`, `GetLocalizedText`, `ThreadedCutSceneRender`
 * Called by: `BackToTitleFromReplay`, `FinalBoss__Update`, `GMeatHUD__GMeatHUD__004800c0`, `GMeatHUD__PlayIntroPart2`, `GMeatHUD__PlayStartIntro`, `GMeatHUD__Update`, `GSMBInstructions__ShowPage`, `GSMBMenu__HideChapterEnd`, `GSMBMenu__LightDarkStartChange`, `GSMBMenu__LoadReplayFromManager` (+48 more)
 */
/* GSMBCutSceneManager__PlayCutScene(SMBCutScene*) */

void __thiscall GSMBCutSceneManager__PlayCutScene(GSMBCutSceneManager *self,SMBCutScene *arg1)

{
  uint32_t uVar1;
  uint64_t uVar2;
  
  *(uint64_t *)(self + 0x418) = *(uint64_t *)arg1;
  *(uint64_t *)(self + 0x420) = *(uint64_t *)(arg1 + 8);
  *(uint64_t *)(self + 0x428) = *(uint64_t *)(arg1 + 0x10);
  *(uint64_t *)(self + 0x430) = *(uint64_t *)(arg1 + 0x18);
  *(uint64_t *)(self + 0x438) = *(uint64_t *)(arg1 + 0x20);
  *(uint64_t *)(self + 0x440) = *(uint64_t *)(arg1 + 0x28);
  *(uint64_t *)(self + 0x448) = *(uint64_t *)(arg1 + 0x30);
  *(uint64_t *)(self + 0x450) = *(uint64_t *)(arg1 + 0x38);
  uVar1 = *(uint32_t *)(arg1 + 0x40);
  *(uint32_t *)(self + 0x488) = 0;
  *(uint32_t *)(self + 0x418) = 0x44554000;
  *(uint32_t *)(self + 0x41c) = 0x43f00000;
  *(uint32_t *)(self + 0x458) = uVar1;
  if (*(long *)(arg1 + 0x10) == 0) {
    if (*(long *)(arg1 + 0x18) != 0) {
      *(uint32_t *)(self + 0x460) = 0;
      (**(code **)(arg1 + 0x18))(*(uint64_t *)(arg1 + 0x20),0,0);
    }
  }
  else {
    *(uint32_t *)(self + 0x460) = 1;
    FlashLibraryInstance__Reset(*(FlashLibraryInstance **)(arg1 + 0x10));
    if (*(int *)(arg1 + 0x38) == 1) {
      if (*(long *)(self + 0x470) != 0) {
        uVar2 = GetLocalizedText(0x11);
        FlashTextField__SetText(*(wchar_t **)(self + 0x470),uVar2);
      }
      EnableLoadingRenderThread(ThreadedCutSceneRender);
    }
    if (*(int *)(self + 0x454) == 1) {
      GSuperMeatBoy__MarkAllLevelsVisible(SuperMeatBoy);
    }
    else {
      GSuperMeatBoy__MarkAllLevelsInvisible(SuperMeatBoy);
    }
  }
  *(uint32_t *)(self + 0x464) = 0;
  return;
}

/* ======================================================================
 * GSMBCutSceneManager__IsCutSceneFinished  (Ghidra `IsCutSceneFinished` @ 0049d950)
 * Signature: uint8_t __thiscall IsCutSceneFinished(GSMBCutSceneManager * self)
 * Class: GSMBCutSceneManager
 * Calls: `FlashLibraryInstance__IsPlaying`, `GSuperMeatBoy__MarkAllLevelsVisible`
 * Called by: (none)
 */
/* GSMBCutSceneManager__IsCutSceneFinished() */

uint32_t __thiscall GSMBCutSceneManager__IsCutSceneFinished(GSMBCutSceneManager *self)

{
  GSuperMeatBoy *this_00;
  int iVar1;
  int iVar2;
  uint32_t uVar3;
  uint64_t uVar4;
  
  uVar3 = 0;
  if (*(int *)(self + 0x460) == 1) {
    iVar1 = FlashLibraryInstance__IsPlaying(*(FlashLibraryInstance **)(self + 0x428));
    if ((((*(code **)(self + 0x440) == (code *)0x0) ||
         (iVar2 = (**(code **)(self + 0x440))(*(uint64_t *)(self + 0x448)), iVar2 != 1)) ||
        (uVar4 = 1, *(uint *)(self + 0x464) < 2)) && (uVar4 = 0, iVar1 != 0)) {
      return 0;
    }
    this_00 = SuperMeatBoy;
    *(uint32_t *)(self + 0x460) = 0;
    GSuperMeatBoy__MarkAllLevelsVisible(this_00);
    uVar3 = 1;
    if (*(code **)(self + 0x430) != (code *)0x0) {
      (**(code **)(self + 0x430))(*(uint64_t *)(self + 0x438),uVar4,0);
      uVar3 = 1;
    }
  }
  return uVar3;
}

/* ======================================================================
 * GSMBCutSceneManager__Update  (Ghidra `Update` @ 0049da20)
 * Signature: uint8_t __thiscall Update(GSMBCutSceneManager * self)
 * Class: GSMBCutSceneManager
 * Calls: (none)
 * Called by: `GSMBInstructions__Update`, `GSuperMeatBoy__Update__00516690`
 */
/* GSMBCutSceneManager__Update() */

void __thiscall GSMBCutSceneManager__Update(GSMBCutSceneManager *self)

{
  if (*(int *)(self + 0x460) != 1) {
    return;
  }
  IsCutSceneFinished(self);
  return;
}

/* ======================================================================
 * GSMBCutSceneManager__CancelCutScene  (Ghidra `CancelCutScene` @ 0049da40)
 * Signature: uint8_t __thiscall CancelCutScene(GSMBCutSceneManager * self)
 * Class: GSMBCutSceneManager
 * Calls: `GSuperMeatBoy__MarkAllLevelsVisible`
 * Called by: `GSMBInstructions__ForceClosePage`, `GSMBMenu__ShowPauseMenu`, `GSuperMeatBoy__BeatLevel`, `ShowPauseMenu`
 */
/* GSMBCutSceneManager__CancelCutScene() */

void __thiscall GSMBCutSceneManager__CancelCutScene(GSMBCutSceneManager *self)

{
  *(uint32_t *)(self + 0x460) = 0;
  GSuperMeatBoy__MarkAllLevelsVisible(SuperMeatBoy);
  return;
}

/* ======================================================================
 * GSMBCutSceneManager__RenderLoadingOverlay  (Ghidra `RenderLoadingOverlay` @ 0049da60)
 * Signature: uint8_t __thiscall RenderLoadingOverlay(GSMBCutSceneManager * self)
 * Class: GSMBCutSceneManager
 * Calls: `Camera__SetCameraMatricies`, `Camera__SetOrthoProjection`, `FlashAnimationLibrary__DisableFlags`, `FlashAnimationLibrary__EnableFlags`, `RegisterAudioPosition`, `System_ISOSUIShowing`, `TAudio__DisableDirectionalAudio`, `TAudio__EnableDirectionalAudio`, `TGraphics__GetMatrix`, `TGraphics__SetRenderState`
 * Called by: `GSMBMenu__RenderLoadingScreen`, `ThreadedCutSceneRender`
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GSMBCutSceneManager__RenderLoadingOverlay() */

void __thiscall GSMBCutSceneManager__RenderLoadingOverlay(GSMBCutSceneManager *self)

{
  uint32_t uVar1;
  int iVar2;
  Matrix4x4 *pMVar3;
  
  if (*(long *)(self + 0x468) != 0) {
    TGraphics__SetRenderState(Graphics,'\x03',0);
    TGraphics__SetRenderState(Graphics,'\x01',7);
    TGraphics__SetRenderState(Graphics,'\b',1);
    TGraphics__SetRenderState(Graphics,'\x05',4);
    TGraphics__SetRenderState(Graphics,'\x06',5);
    TGraphics__SetRenderState(Graphics,'\n',7);
    TGraphics__SetRenderState(Graphics,'\t',0);
    Camera__SetOrthoProjection
              (*(Camera **)(SuperMeatBoy + 0x38),_DAT_005c0c9c /* R:240.0f */,DAT_005c0c98 /* R:-240.0f */,DAT_005c0c94 /* R:-426.5f */,
               DAT_005c0c90 /* R:426.5f */,DAT_005c07a4 /* R:-1.0f */,DAT_005be894 /* R:1.0f */);
    Camera__SetCameraMatricies(*(Camera **)(SuperMeatBoy + 0x38),2);
    pMVar3 = (Matrix4x4 *)TGraphics__GetMatrix(Graphics,0);
    Matrix4x4__Identity(pMVar3);
    TAudio__DisableDirectionalAudio(Audio);
    RegisterAudioPosition((FPUVector *)0xffffffff);
    uVar1 = *(uint32_t *)(*(long *)(self + 0x478) + 0x58);
    iVar2 = System_ISOSUIShowing();
    if (iVar2 == 1) {
      FlashAnimationLibrary__DisableFlags
                (*(FlashAnimationLibrary **)(*(long *)(self + 0x478) + 0x28),1);
    }
    *(uint32_t *)(*(long *)(self + 0x470) + 0x20) = 0;
    (**(code **)(**(long **)(self + 0x478) + 0x10))();
    iVar2 = System_ISOSUIShowing();
    if (iVar2 == 1) {
      FlashAnimationLibrary__EnableFlags
                (*(FlashAnimationLibrary **)(*(long *)(self + 0x478) + 0x28),1);
      *(uint32_t *)(*(long *)(self + 0x478) + 0x58) = uVar1;
    }
    RegisterAudioPosition((FPUVector *)0x0);
    TAudio__EnableDirectionalAudio(Audio);
    return;
  }
  return;
}

/* ======================================================================
 * GSMBCutSceneManager__RenderSavingOverlay  (Ghidra `RenderSavingOverlay` @ 0049dc40)
 * Signature: uint8_t __thiscall RenderSavingOverlay(GSMBCutSceneManager * self)
 * Class: GSMBCutSceneManager
 * Calls: `Camera__SetCameraMatricies`, `Camera__SetOrthoProjection`, `FlashAnimationLibrary__DisableFlags`, `FlashAnimationLibrary__EnableFlags`, `RegisterAudioPosition`, `System_ISOSUIShowing`, `TAudio__DisableDirectionalAudio`, `TAudio__EnableDirectionalAudio`, `TGraphics__GetMatrix`, `TGraphics__SetRenderState`
 * Called by: `ThreadedCutSceneRender`
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GSMBCutSceneManager__RenderSavingOverlay() */

void __thiscall GSMBCutSceneManager__RenderSavingOverlay(GSMBCutSceneManager *self)

{
  uint32_t uVar1;
  long lVar2;
  int iVar3;
  Matrix4x4 *pMVar4;
  
  if ((*(long *)(self + 0x480) != 0) &&
     ((0 < *(int *)(self + 0x48c) || (*(int *)(self + 0x490) < 1000)))) {
    TGraphics__SetRenderState(Graphics,'\x03',0);
    TGraphics__SetRenderState(Graphics,'\x01',7);
    TGraphics__SetRenderState(Graphics,'\b',1);
    TGraphics__SetRenderState(Graphics,'\x05',4);
    TGraphics__SetRenderState(Graphics,'\x06',5);
    TGraphics__SetRenderState(Graphics,'\n',7);
    TGraphics__SetRenderState(Graphics,'\t',0);
    Camera__SetOrthoProjection
              (*(Camera **)(SuperMeatBoy + 0x38),_DAT_005c0c9c /* R:240.0f */,DAT_005c0c98 /* R:-240.0f */,DAT_005c0c94 /* R:-426.5f */,
               DAT_005c0c90 /* R:426.5f */,DAT_005c07a4 /* R:-1.0f */,DAT_005be894 /* R:1.0f */);
    Camera__SetCameraMatricies(*(Camera **)(SuperMeatBoy + 0x38),2);
    pMVar4 = (Matrix4x4 *)TGraphics__GetMatrix(Graphics,0);
    Matrix4x4__Identity(pMVar4);
    TAudio__DisableDirectionalAudio(Audio);
    RegisterAudioPosition((FPUVector *)0xffffffff);
    uVar1 = *(uint32_t *)(*(long *)(self + 0x480) + 0x58);
    iVar3 = System_ISOSUIShowing();
    if (iVar3 == 1) {
      FlashAnimationLibrary__DisableFlags
                (*(FlashAnimationLibrary **)(*(long *)(self + 0x480) + 0x28),1);
    }
    (**(code **)(**(long **)(self + 0x480) + 0x10))();
    iVar3 = System_ISOSUIShowing();
    if (iVar3 == 1) {
      FlashAnimationLibrary__EnableFlags
                (*(FlashAnimationLibrary **)(*(long *)(self + 0x480) + 0x28),1);
      *(uint32_t *)(*(long *)(self + 0x480) + 0x58) = uVar1;
    }
    TAudio__EnableDirectionalAudio(Audio);
    RegisterAudioPosition((FPUVector *)0x0);
    lVar2 = Engine;
    *(int *)(self + 0x48c) = *(int *)(self + 0x48c) - *(int *)(Engine + 4);
    *(int *)(self + 0x490) = *(int *)(self + 0x490) + *(int *)(lVar2 + 4);
  }
  return;
}

/* ======================================================================
 * GSMBCutSceneManager__Render  (Ghidra `Render` @ 0049de40)
 * Signature: uint8_t __thiscall Render(GSMBCutSceneManager * self)
 * Class: GSMBCutSceneManager
 * Calls: `Camera__SetCameraMatricies`, `Camera__SetOrthoProjection`, `FlashAnimationLibrary__DisableFlags`, `FlashAnimationLibrary__EnableFlags`, `RegisterAudioPosition`, `System_ISOSUIShowing`, `TAudio__DisableDirectionalAudio`, `TAudio__EnableDirectionalAudio`, `TGraphics__AutoSetViewport`, `TGraphics__Clear` (+5 more)
 * Called by: (none)
 */
/* GSMBCutSceneManager__Render() */

void __thiscall GSMBCutSceneManager__Render(GSMBCutSceneManager *self)

{
  uint32_t uVar1;
  int iVar2;
  Matrix4x4 *pMVar3;
  
  TGraphics__ResetTexCoordGen(Graphics);
  TGraphics__ResetPixelStages(Graphics);
  TGraphics__SetRenderState(Graphics,'\x03',0);
  TGraphics__SetRenderState(Graphics,'\x01',7);
  TGraphics__SetRenderState(Graphics,'\b',1);
  TGraphics__SetRenderState(Graphics,'\x05',4);
  TGraphics__SetRenderState(Graphics,'\x06',5);
  TGraphics__SetRenderState(Graphics,'\n',7);
  TGraphics__SetRenderState(Graphics,'\t',0);
  if (*(int *)(self + 0x460) == 1) {
    if (*(int *)(self + 0x458) == 1) {
      TGraphics__ForceAspectRatio(Graphics,0);
      TGraphics__AutoSetViewport();
      TGraphics__Clear(Graphics,(ColorTemplate *)::cNullColor,3);
      TGraphics__ForceAspectRatio(Graphics,1);
      TGraphics__AutoSetViewport();
    }
    Camera__SetOrthoProjection
              (*(Camera **)(SuperMeatBoy + 0x38),*(float *)(self + 0x41c) * DAT_005be6e4 /* R:0.5f */,
               (float)(DAT_005be6f0 /* R:u32=2147483648 */ ^ (uint)*(float *)(self + 0x41c)) * DAT_005be6e4 /* R:0.5f */,
               (float)((uint)*(float *)(self + 0x418) ^ DAT_005be6f0 /* R:u32=2147483648 */) * DAT_005be6e4 /* R:0.5f */,
               *(float *)(self + 0x418) * DAT_005be6e4 /* R:0.5f */,DAT_005c07a4 /* R:-1.0f */,DAT_005be894 /* R:1.0f */);
    Camera__SetCameraMatricies(*(Camera **)(SuperMeatBoy + 0x38),2);
    pMVar3 = (Matrix4x4 *)TGraphics__GetMatrix(Graphics,0);
    Matrix4x4__Identity(pMVar3);
    TAudio__DisableDirectionalAudio(Audio);
    RegisterAudioPosition((FPUVector *)0xffffffff);
    uVar1 = *(uint32_t *)(*(long *)(self + 0x428) + 0x58);
    iVar2 = System_ISOSUIShowing();
    if (iVar2 == 1) {
      FlashAnimationLibrary__DisableFlags
                (*(FlashAnimationLibrary **)(*(long *)(self + 0x428) + 0x28),1);
      if (*(long *)(self + 0x478) != 0) {
        FlashAnimationLibrary__DisableFlags
                  (*(FlashAnimationLibrary **)(*(long *)(self + 0x478) + 0x28),1);
      }
    }
    (**(code **)(**(long **)(self + 0x428) + 0x10))();
    iVar2 = System_ISOSUIShowing();
    if (iVar2 == 1) {
      if (*(long *)(self + 0x478) != 0) {
        FlashAnimationLibrary__EnableFlags
                  (*(FlashAnimationLibrary **)(*(long *)(self + 0x478) + 0x28),1);
        *(uint32_t *)(*(long *)(self + 0x478) + 0x58) = uVar1;
      }
      FlashAnimationLibrary__EnableFlags
                (*(FlashAnimationLibrary **)(*(long *)(self + 0x428) + 0x28),1);
      *(uint32_t *)(*(long *)(self + 0x428) + 0x58) = uVar1;
    }
    RegisterAudioPosition((FPUVector *)0x0);
    TAudio__EnableDirectionalAudio(Audio);
    *(int *)(self + 0x464) = *(int *)(self + 0x464) + 1;
  }
  TAudio__DisableDirectionalAudio(Audio);
  RegisterAudioPosition((FPUVector *)0xffffffff);
  RenderSavingOverlay(self);
  RegisterAudioPosition((FPUVector *)0x0);
  TAudio__EnableDirectionalAudio(Audio);
  return;
}

/* ======================================================================
 * GSMBCutSceneManager__ForceShutdown  (Ghidra `ForceShutdown` @ 0049e140)
 * Signature: uint8_t __thiscall ForceShutdown(GSMBCutSceneManager * self)
 * Class: GSMBCutSceneManager
 * Calls: `GSuperMeatBoy__MarkAllLevelsVisible`
 * Called by: `GSuperMeatBoy__Update__00516690`
 */
/* GSMBCutSceneManager__ForceShutdown() */

void __thiscall GSMBCutSceneManager__ForceShutdown(GSMBCutSceneManager *self)

{
  GSuperMeatBoy__MarkAllLevelsVisible(SuperMeatBoy);
  *(uint32_t *)(self + 0x460) = 0;
  if (*(code **)(self + 0x430) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0049e178. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(self + 0x430))(*(uint64_t *)(self + 0x438),1,1);
    return;
  }
  return;
}

/* ======================================================================
 * GSMBCutSceneManager__ShowSavingMessage  (Ghidra `ShowSavingMessage` @ 0049e190)
 * Signature: uint8_t __thiscall ShowSavingMessage(GSMBCutSceneManager * self)
 * Class: GSMBCutSceneManager
 * Calls: (none)
 * Called by: `GSMBChapterData__SaveData`, `SMBReplay__WriteReplayData`, `SaveData`, `ShowSaveReplayInterface`
 */
/* GSMBCutSceneManager__ShowSavingMessage() */

void __thiscall GSMBCutSceneManager__ShowSavingMessage(GSMBCutSceneManager *self)

{
  *(uint32_t *)(self + 0x48c) = 100000;
  *(uint32_t *)(self + 0x490) = 0;
  return;
}

/* ======================================================================
 * GSMBCutSceneManager__CancelSavingMessage  (Ghidra `CancelSavingMessage` @ 0049e1b0)
 * Signature: uint8_t __thiscall CancelSavingMessage(GSMBCutSceneManager * self)
 * Class: GSMBCutSceneManager
 * Calls: (none)
 * Called by: `SMBChapterDataSave`, `WriteReplayDataThread`
 */
/* GSMBCutSceneManager__CancelSavingMessage() */

void __thiscall GSMBCutSceneManager__CancelSavingMessage(GSMBCutSceneManager *self)

{
  *(uint32_t *)(self + 0x48c) = 0;
  return;
}
