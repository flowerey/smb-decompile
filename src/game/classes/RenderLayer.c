/* src/game/classes/RenderLayer.c — 11 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "RenderLayer.h"

/* ======================================================================
 * RenderLayer__Render  (Ghidra `Render` @ 00597c80)
 * Signature: uint8_t __thiscall Render(RenderLayer * self)
 * Class: RenderLayer
 * Calls: `AutoLockSection__AutoLockSection`, `AutoLockSection__AutoLockSection__005b59d0`, `TGraphics__BindRenderTarget`, `TGraphics__DeleteMasterPixelStage`, `TGraphics__SetMasterPixelStage`, `TGraphics__SetPixelColorConstant`, `TGraphics__SetPixelOutputParams`
 * Called by: (none)
 */
/* RenderLayer__Render() */

void __thiscall RenderLayer__Render(RenderLayer *self)

{
  AutoLockSection aAStack_18 [16];
  
  AutoLockSection__AutoLockSection(aAStack_18,(CriticalSection *)(self + 0x3d8));
                    /* try { // try from 00597cb3 to 00597d25 has its CatchHandler @ 00597d34 */
  TGraphics__SetMasterPixelStage(Graphics,0x15,0,2,0,4);
  TGraphics__SetPixelOutputParams(Graphics,*(float *)(self + 0x410),0.0,0.0,0.0);
  TGraphics__SetPixelColorConstant(Graphics,1,self + 0x400);
  if (*(Texture **)(self + 0x18) != (Texture *)0x0) {
    TGraphics__BindRenderTarget(Graphics,*(Texture **)(self + 0x18));
  }
  while (self = *(RenderLayer **)(self + 8), self != (RenderLayer *)0x0) {
    (**(code **)(*(long *)self + 0x10))(self);
  }
  TGraphics__DeleteMasterPixelStage(Graphics);
  AutoLockSection__AutoLockSection__005b59d0(aAStack_18);
  return;
}

/* ======================================================================
 * RenderLayer__RenderLayer__00597d50  (Ghidra `RenderLayer` @ 00597d50)
 * Signature: uint8_t __thiscall RenderLayer(RenderLayer * self)
 * Class: RenderLayer
 * Calls: `CriticalSection__CriticalSection`, `TGraphics__GPUState_GPUState`
 * Called by: `GMeatHUD__GMeatHUD__004800c0`, `GSMBCutSceneManager__GSMBCutSceneManager__0049d5e0`, `GSMBMenu__GSMBMenu__004d8690`, `GSuperMeatBoy__Initialize__00516f60`, `RenderLayer__RenderLayer`, `SMBEditorRenderLayer__SMBEditorRenderLayer__004a9470`, `SMBEditor__SMBEditor__004ad010`, `SetupUI`, `TileLevel__TileLevel`
 */
/* RenderLayer__RenderLayer__00597d50() */

void __thiscall RenderLayer__RenderLayer__00597d50(RenderLayer *self)

{
  uint64_t uVar1;
  
  *(uint8_t ***)self = &PTR__RenderLayer_005dd2d0;
  *(uint64_t *)(self + 8) = 0;
  *(uint64_t *)(self + 0x10) = 0;
  *(uint64_t *)(self + 0x18) = 0;
  TGraphics__GPUState_GPUState((GPUState *)(self + 0x20));
  *(uint64_t *)(self + 0x3c8) = 0;
  *(uint64_t *)(self + 0x3d0) = 0;
  CriticalSection__CriticalSection((CriticalSection *)(self + 0x3d8));
  uVar1 = ::cWhite;
  *(uint32_t *)(self + 0x410) = 0;
  *(uint32_t *)(self + 0x414) = 1;
  *(uint64_t *)(self + 0x400) = uVar1;
  *(uint64_t *)(self + 0x408) = DAT_00822778 /* R:7.547281424976319e-39f */;
  return;
}

/* ======================================================================
 * RenderLayer__GetNumObjects  (Ghidra `GetNumObjects` @ 00597dd0)
 * Signature: uint8_t __thiscall GetNumObjects(RenderLayer * self)
 * Class: RenderLayer
 * Calls: (none)
 * Called by: `SaveLevel`
 */
/* RenderLayer__GetNumObjects() */

int __thiscall RenderLayer__GetNumObjects(RenderLayer *self)

{
  long lVar1;
  int iVar2;
  
  iVar2 = 0;
  for (lVar1 = *(long *)(self + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}

/* ======================================================================
 * RenderLayer__AddObject  (Ghidra `AddObject` @ 00597df0)
 * Signature: uint8_t __thiscall AddObject(RenderLayer * self, RenderLayerObject * arg1)
 * Class: RenderLayer
 * Calls: `AutoLockSection__AutoLockSection`, `AutoLockSection__AutoLockSection__005b59d0`
 * Called by: `CreateBlankLevel`, `GSuperMeatBoy__Initialize__00516f60`, `LoadLevelFromFile`, `ShowUIMessageBox`, `UIForm__UIForm__005a3ce0`, `UIMessageBox__UIMessageBox__005a4280`
 */
/* RenderLayer__AddObject(RenderLayerObject*) */

void __thiscall RenderLayer__AddObject(RenderLayer *self,RenderLayerObject *arg1)

{
  long lVar1;
  RenderLayerObject *pRVar2;
  AutoLockSection aAStack_38 [16];
  AutoLockSection local_28 [16];
  
  AutoLockSection__AutoLockSection(aAStack_38,(CriticalSection *)(self + 0x3d8));
  lVar1 = *(long *)(arg1 + 0x18);
  if (lVar1 != 0) {
                    /* try { // try from 00597e2e to 00597e8c has its CatchHandler @ 00597f06 */
    AutoLockSection__AutoLockSection(local_28,(CriticalSection *)(lVar1 + 0x3d8));
    if (arg1 == *(RenderLayerObject **)(lVar1 + 8)) {
      pRVar2 = *(RenderLayerObject **)(lVar1 + 0x10);
      *(uint64_t *)(lVar1 + 8) = *(uint64_t *)(arg1 + 8);
    }
    else {
      pRVar2 = *(RenderLayerObject **)(lVar1 + 0x10);
    }
    if (arg1 == pRVar2) {
      *(uint64_t *)(lVar1 + 0x10) = *(uint64_t *)(arg1 + 0x10);
    }
    if (*(long *)(arg1 + 0x10) != 0) {
      *(uint64_t *)(*(long *)(arg1 + 0x10) + 8) = *(uint64_t *)(arg1 + 8);
    }
    if (*(long *)(arg1 + 8) != 0) {
      *(uint64_t *)(*(long *)(arg1 + 8) + 0x10) = *(uint64_t *)(arg1 + 0x10);
    }
    *(uint64_t *)(arg1 + 0x10) = 0;
    *(uint64_t *)(arg1 + 8) = 0;
    *(uint64_t *)(arg1 + 0x18) = 0;
    AutoLockSection__AutoLockSection__005b59d0(local_28);
  }
  if (*(long *)(self + 8) == 0) {
    *(RenderLayerObject **)(self + 8) = arg1;
    *(uint64_t *)(arg1 + 0x10) = 0;
  }
  else if (*(long *)(self + 0x10) != 0) {
    *(RenderLayerObject **)(*(long *)(self + 0x10) + 8) = arg1;
    *(uint64_t *)(arg1 + 0x10) = *(uint64_t *)(self + 0x10);
  }
  *(RenderLayerObject **)(self + 0x10) = arg1;
  *(RenderLayer **)(arg1 + 0x18) = self;
  AutoLockSection__AutoLockSection__005b59d0(aAStack_38);
  return;
}

/* ======================================================================
 * RenderLayer__RemoveObject  (Ghidra `RemoveObject` @ 00597f20)
 * Signature: uint8_t __thiscall RemoveObject(RenderLayer * self, RenderLayerObject * arg1)
 * Class: RenderLayer
 * Calls: `AutoLockSection__AutoLockSection`, `AutoLockSection__AutoLockSection__005b59d0`
 * Called by: `AdjustSetPieceLayering`, `SMBEditor__SaveLevel`, `TileLevelSetPiece__TileLevelSetPiece`, `TileLevelSetPiece__TileLevelSetPiece__0058d560`, `TileLevel__RemoveSetPiece`, `UIForm__UIForm`, `UIForm__UIForm__005a3560`, `UIMessageBox__UIMessageBox`, `UIMessageBox__UIMessageBox__005a34d0`, `VerifyLevelData`
 */
/* RenderLayer__RemoveObject(RenderLayerObject*) */

void __thiscall RenderLayer__RemoveObject(RenderLayer *self,RenderLayerObject *arg1)

{
  RenderLayerObject *pRVar1;
  AutoLockSection aAStack_28 [24];
  
  AutoLockSection__AutoLockSection(aAStack_28,(CriticalSection *)(self + 0x3d8));
  if (arg1 == *(RenderLayerObject **)(self + 8)) {
    pRVar1 = *(RenderLayerObject **)(self + 0x10);
    *(uint64_t *)(self + 8) = *(uint64_t *)(arg1 + 8);
  }
  else {
    pRVar1 = *(RenderLayerObject **)(self + 0x10);
  }
  if (arg1 == pRVar1) {
    *(uint64_t *)(self + 0x10) = *(uint64_t *)(arg1 + 0x10);
  }
  if (*(long *)(arg1 + 0x10) != 0) {
    *(uint64_t *)(*(long *)(arg1 + 0x10) + 8) = *(uint64_t *)(arg1 + 8);
  }
  if (*(long *)(arg1 + 8) != 0) {
    *(uint64_t *)(*(long *)(arg1 + 8) + 0x10) = *(uint64_t *)(arg1 + 0x10);
  }
  *(uint64_t *)(arg1 + 0x10) = 0;
  *(uint64_t *)(arg1 + 8) = 0;
  *(uint64_t *)(arg1 + 0x18) = 0;
  AutoLockSection__AutoLockSection__005b59d0(aAStack_28);
  return;
}

/* ======================================================================
 * RenderLayer__SwapObjects  (Ghidra `SwapObjects` @ 00597fb0)
 * Signature: uint8_t __thiscall SwapObjects(RenderLayer * self, RenderLayerObject * arg1, RenderLayerObject * arg2)
 * Class: RenderLayer
 * Calls: `AutoLockSection__AutoLockSection`, `AutoLockSection__AutoLockSection__005b59d0`
 * Called by: (none)
 */
/* RenderLayer__SwapObjects(RenderLayerObject*, RenderLayerObject*) */

void __thiscall
RenderLayer__SwapObjects(RenderLayer *self,RenderLayerObject *arg1,RenderLayerObject *arg2)

{
  CriticalSection *pCVar1;
  long lVar2;
  long lVar3;
  RenderLayerObject *pRVar4;
  RenderLayerObject *pRVar5;
  RenderLayerObject *pRVar6;
  uint64_t uVar7;
  AutoLockSection local_58 [16];
  AutoLockSection local_48 [24];
  
  pCVar1 = (CriticalSection *)(self + 0x3d8);
  AutoLockSection__AutoLockSection(local_58,pCVar1);
  lVar2 = *(long *)(arg1 + 8);
  lVar3 = *(long *)(arg2 + 8);
  pRVar4 = *(RenderLayerObject **)(arg1 + 0x10);
  pRVar5 = *(RenderLayerObject **)(arg2 + 0x10);
                    /* try { // try from 00598010 to 00598169 has its CatchHandler @ 00598519 */
  AutoLockSection__AutoLockSection(local_48,pCVar1);
  if (arg1 == *(RenderLayerObject **)(self + 8)) {
    pRVar6 = *(RenderLayerObject **)(self + 0x10);
    *(uint64_t *)(self + 8) = *(uint64_t *)(arg1 + 8);
  }
  else {
    pRVar6 = *(RenderLayerObject **)(self + 0x10);
  }
  if (arg1 == pRVar6) {
    *(uint64_t *)(self + 0x10) = *(uint64_t *)(arg1 + 0x10);
  }
  if (*(long *)(arg1 + 0x10) != 0) {
    *(uint64_t *)(*(long *)(arg1 + 0x10) + 8) = *(uint64_t *)(arg1 + 8);
  }
  if (*(long *)(arg1 + 8) != 0) {
    *(uint64_t *)(*(long *)(arg1 + 8) + 0x10) = *(uint64_t *)(arg1 + 0x10);
  }
  *(uint64_t *)(arg1 + 0x10) = 0;
  *(uint64_t *)(arg1 + 8) = 0;
  *(uint64_t *)(arg1 + 0x18) = 0;
  AutoLockSection__AutoLockSection__005b59d0(local_48);
  AutoLockSection__AutoLockSection(local_48,pCVar1);
  if (arg2 == *(RenderLayerObject **)(self + 8)) {
    pRVar6 = *(RenderLayerObject **)(self + 0x10);
    *(uint64_t *)(self + 8) = *(uint64_t *)(arg2 + 8);
  }
  else {
    pRVar6 = *(RenderLayerObject **)(self + 0x10);
  }
  if (arg2 == pRVar6) {
    *(uint64_t *)(self + 0x10) = *(uint64_t *)(arg2 + 0x10);
  }
  if (*(long *)(arg2 + 0x10) != 0) {
    *(uint64_t *)(*(long *)(arg2 + 0x10) + 8) = *(uint64_t *)(arg2 + 8);
  }
  if (*(long *)(arg2 + 8) != 0) {
    *(uint64_t *)(*(long *)(arg2 + 8) + 0x10) = *(uint64_t *)(arg2 + 0x10);
  }
  *(uint64_t *)(arg2 + 0x10) = 0;
  *(uint64_t *)(arg2 + 8) = 0;
  *(uint64_t *)(arg2 + 0x18) = 0;
  AutoLockSection__AutoLockSection__005b59d0(local_48);
  if (pRVar4 == arg2) {
    AutoLockSection__AutoLockSection(local_48,pCVar1);
    if (pRVar5 == (RenderLayerObject *)0x0) {
      uVar7 = 0;
      if (*(long *)(self + 8) != 0) {
        *(RenderLayerObject **)(*(long *)(self + 8) + 0x10) = arg1;
        uVar7 = *(uint64_t *)(self + 8);
      }
      *(uint64_t *)(arg1 + 8) = uVar7;
      *(RenderLayerObject **)(self + 8) = arg1;
      *(uint64_t *)(arg1 + 0x10) = 0;
      if (*(long *)(self + 0x10) == 0) {
        *(uint64_t *)(self + 0x10) = *(uint64_t *)(self + 8);
      }
    }
    else {
      lVar3 = *(long *)(pRVar5 + 8);
      *(RenderLayerObject **)(pRVar5 + 8) = arg1;
      *(RenderLayerObject **)(arg1 + 0x10) = pRVar5;
      *(long *)(arg1 + 8) = lVar3;
      if (lVar3 == 0) {
        *(RenderLayerObject **)(self + 0x10) = arg1;
      }
      else {
        *(RenderLayerObject **)(lVar3 + 0x10) = arg1;
      }
    }
    *(RenderLayer **)(arg1 + 0x18) = self;
    AutoLockSection__AutoLockSection__005b59d0(local_48);
    AutoLockSection__AutoLockSection(local_48,pCVar1);
    if (lVar2 == 0) {
      uVar7 = 0;
      if (*(long *)(self + 0x10) != 0) {
        *(RenderLayerObject **)(*(long *)(self + 0x10) + 8) = pRVar4;
        uVar7 = *(uint64_t *)(self + 0x10);
      }
      *(uint64_t *)(pRVar4 + 0x10) = uVar7;
      *(RenderLayerObject **)(self + 0x10) = pRVar4;
      *(uint64_t *)(pRVar4 + 8) = 0;
      if (*(long *)(self + 8) == 0) {
        *(uint64_t *)(self + 8) = *(uint64_t *)(self + 0x10);
      }
    }
    else {
      lVar3 = *(long *)(lVar2 + 0x10);
      *(RenderLayerObject **)(lVar2 + 0x10) = pRVar4;
      *(long *)(pRVar4 + 8) = lVar2;
      *(long *)(pRVar4 + 0x10) = lVar3;
      if (lVar3 == 0) {
        *(RenderLayerObject **)(self + 8) = pRVar4;
      }
      else {
        *(RenderLayerObject **)(lVar3 + 8) = pRVar4;
      }
    }
    *(RenderLayer **)(pRVar4 + 0x18) = self;
    AutoLockSection__AutoLockSection__005b59d0(local_48);
  }
  else if (pRVar5 == arg1) {
                    /* try { // try from 00598220 to 005983b5 has its CatchHandler @ 00598519 */
    AutoLockSection__AutoLockSection(local_48,pCVar1);
    if (pRVar4 == (RenderLayerObject *)0x0) {
      uVar7 = 0;
      if (*(long *)(self + 8) != 0) {
        *(RenderLayerObject **)(*(long *)(self + 8) + 0x10) = arg2;
        uVar7 = *(uint64_t *)(self + 8);
      }
      *(uint64_t *)(arg2 + 8) = uVar7;
      *(RenderLayerObject **)(self + 8) = arg2;
      *(uint64_t *)(arg2 + 0x10) = 0;
      if (*(long *)(self + 0x10) == 0) {
        *(uint64_t *)(self + 0x10) = *(uint64_t *)(self + 8);
      }
    }
    else {
      lVar2 = *(long *)(pRVar4 + 8);
      *(RenderLayerObject **)(pRVar4 + 8) = arg2;
      *(RenderLayerObject **)(arg2 + 0x10) = pRVar4;
      *(long *)(arg2 + 8) = lVar2;
      if (lVar2 == 0) {
        *(RenderLayerObject **)(self + 0x10) = arg2;
      }
      else {
        *(RenderLayerObject **)(lVar2 + 0x10) = arg2;
      }
    }
    *(RenderLayer **)(arg2 + 0x18) = self;
    AutoLockSection__AutoLockSection__005b59d0(local_48);
    AutoLockSection__AutoLockSection(local_48,pCVar1);
    if (lVar3 == 0) {
      uVar7 = 0;
      if (*(long *)(self + 0x10) != 0) {
        *(RenderLayerObject **)(*(long *)(self + 0x10) + 8) = pRVar5;
        uVar7 = *(uint64_t *)(self + 0x10);
      }
      *(uint64_t *)(pRVar5 + 0x10) = uVar7;
      *(RenderLayerObject **)(self + 0x10) = pRVar5;
      *(uint64_t *)(pRVar5 + 8) = 0;
      if (*(long *)(self + 8) == 0) {
        *(uint64_t *)(self + 8) = *(uint64_t *)(self + 0x10);
      }
    }
    else {
      lVar2 = *(long *)(lVar3 + 0x10);
      *(RenderLayerObject **)(lVar3 + 0x10) = pRVar5;
      *(long *)(pRVar5 + 8) = lVar3;
      *(long *)(pRVar5 + 0x10) = lVar2;
      if (lVar2 == 0) {
        *(RenderLayerObject **)(self + 8) = pRVar5;
      }
      else {
        *(RenderLayerObject **)(lVar2 + 8) = pRVar5;
      }
    }
    *(RenderLayer **)(pRVar5 + 0x18) = self;
    AutoLockSection__AutoLockSection__005b59d0(local_48);
  }
  else {
    AutoLockSection__AutoLockSection(local_48,pCVar1);
    if (pRVar5 == (RenderLayerObject *)0x0) {
      uVar7 = 0;
      if (*(long *)(self + 8) != 0) {
        *(RenderLayerObject **)(*(long *)(self + 8) + 0x10) = arg1;
        uVar7 = *(uint64_t *)(self + 8);
      }
      *(uint64_t *)(arg1 + 8) = uVar7;
      *(RenderLayerObject **)(self + 8) = arg1;
      *(uint64_t *)(arg1 + 0x10) = 0;
      if (*(long *)(self + 0x10) == 0) {
        *(uint64_t *)(self + 0x10) = *(uint64_t *)(self + 8);
      }
    }
    else {
      lVar2 = *(long *)(pRVar5 + 8);
      *(RenderLayerObject **)(pRVar5 + 8) = arg1;
      *(RenderLayerObject **)(arg1 + 0x10) = pRVar5;
      *(long *)(arg1 + 8) = lVar2;
      if (lVar2 == 0) {
        *(RenderLayerObject **)(self + 0x10) = arg1;
      }
      else {
        *(RenderLayerObject **)(lVar2 + 0x10) = arg1;
      }
    }
    *(RenderLayer **)(arg1 + 0x18) = self;
    AutoLockSection__AutoLockSection__005b59d0(local_48);
    AutoLockSection__AutoLockSection(local_48,pCVar1);
    if (pRVar4 == (RenderLayerObject *)0x0) {
      uVar7 = 0;
      if (*(long *)(self + 8) != 0) {
        *(RenderLayerObject **)(*(long *)(self + 8) + 0x10) = arg2;
        uVar7 = *(uint64_t *)(self + 8);
      }
      *(uint64_t *)(arg2 + 8) = uVar7;
      *(RenderLayerObject **)(self + 8) = arg2;
      *(uint64_t *)(arg2 + 0x10) = 0;
      if (*(long *)(self + 0x10) == 0) {
        *(uint64_t *)(self + 0x10) = *(uint64_t *)(self + 8);
      }
    }
    else {
      lVar2 = *(long *)(pRVar4 + 8);
      *(RenderLayerObject **)(pRVar4 + 8) = arg2;
      *(RenderLayerObject **)(arg2 + 0x10) = pRVar4;
      *(long *)(arg2 + 8) = lVar2;
      if (lVar2 == 0) {
        *(RenderLayerObject **)(self + 0x10) = arg2;
      }
      else {
        *(RenderLayerObject **)(lVar2 + 0x10) = arg2;
      }
    }
    *(RenderLayer **)(arg2 + 0x18) = self;
    AutoLockSection__AutoLockSection__005b59d0(local_48);
  }
  *(RenderLayer **)(arg1 + 0x18) = self;
  *(RenderLayer **)(arg2 + 0x18) = self;
  AutoLockSection__AutoLockSection__005b59d0(local_58);
  return;
}

/* ======================================================================
 * RenderLayer__InsertObjectAfter  (Ghidra `InsertObjectAfter` @ 00598530)
 * Signature: uint8_t __thiscall InsertObjectAfter(RenderLayer * self, RenderLayerObject * arg1, RenderLayerObject * arg2)
 * Class: RenderLayer
 * Calls: `AutoLockSection__AutoLockSection`, `AutoLockSection__AutoLockSection__005b59d0`
 * Called by: `AdjustSetPieceLayering`
 */
/* RenderLayer__InsertObjectAfter(RenderLayerObject*, RenderLayerObject*) */

void __thiscall
RenderLayer__InsertObjectAfter
          (RenderLayer *self,RenderLayerObject *arg1,RenderLayerObject *arg2)

{
  long lVar1;
  uint64_t uVar2;
  AutoLockSection aAStack_28 [16];
  
  AutoLockSection__AutoLockSection(aAStack_28,(CriticalSection *)(self + 0x3d8));
  if (arg2 == (RenderLayerObject *)0x0) {
    uVar2 = 0;
    if (*(long *)(self + 8) != 0) {
      *(RenderLayerObject **)(*(long *)(self + 8) + 0x10) = arg1;
      uVar2 = *(uint64_t *)(self + 8);
    }
    *(uint64_t *)(arg1 + 8) = uVar2;
    *(RenderLayerObject **)(self + 8) = arg1;
    *(uint64_t *)(arg1 + 0x10) = 0;
    if (*(long *)(self + 0x10) == 0) {
      *(uint64_t *)(self + 0x10) = *(uint64_t *)(self + 8);
    }
  }
  else {
    lVar1 = *(long *)(arg2 + 8);
    *(RenderLayerObject **)(arg2 + 8) = arg1;
    *(RenderLayerObject **)(arg1 + 0x10) = arg2;
    *(long *)(arg1 + 8) = lVar1;
    if (lVar1 == 0) {
      *(RenderLayerObject **)(self + 0x10) = arg1;
    }
    else {
      *(RenderLayerObject **)(lVar1 + 0x10) = arg1;
    }
  }
  *(RenderLayer **)(arg1 + 0x18) = self;
  AutoLockSection__AutoLockSection__005b59d0(aAStack_28);
  return;
}

/* ======================================================================
 * RenderLayer__InsertObjectBefore  (Ghidra `InsertObjectBefore` @ 005985f0)
 * Signature: uint8_t __thiscall InsertObjectBefore(RenderLayer * self, RenderLayerObject * arg1, RenderLayerObject * arg2)
 * Class: RenderLayer
 * Calls: `AutoLockSection__AutoLockSection`, `AutoLockSection__AutoLockSection__005b59d0`
 * Called by: `AdjustSetPieceLayering`, `GSuperMeatBoy__SetCurrentLevel`, `SMBEditor__SaveLevel`, `TileLevel__PlaceSetPiece`
 */
/* RenderLayer__InsertObjectBefore(RenderLayerObject*, RenderLayerObject*) */

void __thiscall
RenderLayer__InsertObjectBefore
          (RenderLayer *self,RenderLayerObject *arg1,RenderLayerObject *arg2)

{
  long lVar1;
  uint64_t uVar2;
  AutoLockSection aAStack_28 [16];
  
  AutoLockSection__AutoLockSection(aAStack_28,(CriticalSection *)(self + 0x3d8));
  if (arg2 == (RenderLayerObject *)0x0) {
    uVar2 = 0;
    if (*(long *)(self + 0x10) != 0) {
      *(RenderLayerObject **)(*(long *)(self + 0x10) + 8) = arg1;
      uVar2 = *(uint64_t *)(self + 0x10);
    }
    *(uint64_t *)(arg1 + 0x10) = uVar2;
    *(RenderLayerObject **)(self + 0x10) = arg1;
    *(uint64_t *)(arg1 + 8) = 0;
    if (*(long *)(self + 8) == 0) {
      *(uint64_t *)(self + 8) = *(uint64_t *)(self + 0x10);
    }
  }
  else {
    lVar1 = *(long *)(arg2 + 0x10);
    *(RenderLayerObject **)(arg2 + 0x10) = arg1;
    *(RenderLayerObject **)(arg1 + 8) = arg2;
    *(long *)(arg1 + 0x10) = lVar1;
    if (lVar1 == 0) {
      *(RenderLayerObject **)(self + 8) = arg1;
    }
    else {
      *(RenderLayerObject **)(lVar1 + 8) = arg1;
    }
  }
  *(RenderLayer **)(arg1 + 0x18) = self;
  AutoLockSection__AutoLockSection__005b59d0(aAStack_28);
  return;
}

/* ======================================================================
 * RenderLayer__GetObjectPosition  (Ghidra `GetObjectPosition` @ 005986b0)
 * Signature: uint8_t __thiscall GetObjectPosition(RenderLayer * self, RenderLayerObject * arg1)
 * Class: RenderLayer
 * Calls: (none)
 * Called by: `AdjustSetPieceLayering`
 */
/* RenderLayer__GetObjectPosition(RenderLayerObject*) */

int __thiscall RenderLayer__GetObjectPosition(RenderLayer *self,RenderLayerObject *arg1)

{
  int iVar1;
  RenderLayerObject *pRVar2;
  
  pRVar2 = *(RenderLayerObject **)(self + 8);
  iVar1 = -1;
  if (pRVar2 != (RenderLayerObject *)0x0) {
    iVar1 = 0;
    if (pRVar2 == arg1) {
      return 0;
    }
    do {
      pRVar2 = *(RenderLayerObject **)(pRVar2 + 8);
      if (pRVar2 == (RenderLayerObject *)0x0) {
        return -1;
      }
      iVar1 = iVar1 + 1;
    } while (arg1 != pRVar2);
  }
  return iVar1;
}

/* ======================================================================
 * RenderLayer__RenderLayer__00598860  (Ghidra `~RenderLayer` @ 00598860)
 * Signature: uint8_t __thiscall ~RenderLayer(RenderLayer * self)
 * Class: RenderLayer
 * Calls: `CriticalSection__CriticalSection__005b71d0`, `RenderLayer__RenderLayer__005988e0`
 * Called by: (none)
 */
/* RenderLayer__RenderLayer__005988e0() */

void __thiscall RenderLayer__RenderLayer__005988e0(RenderLayer *self)

{
  long lVar1;
  long lVar2;
  
  *(uint8_t ***)self = &PTR__RenderLayer_005dd2d0;
  lVar2 = *(long *)(self + 8);
  while (lVar2 != 0) {
    lVar1 = *(long *)(lVar2 + 8);
    *(uint64_t *)(lVar2 + 0x10) = 0;
    *(uint64_t *)(lVar2 + 8) = 0;
    *(uint64_t *)(lVar2 + 0x18) = 0;
    lVar2 = lVar1;
  }
                    /* try { // try from 005988a7 to 005988ab has its CatchHandler @ 005988bd */
  RenderLayers__RemoveLayer(self);
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)(self + 0x3d8));
  return;
}

/* ======================================================================
 * RenderLayer__RenderLayer__005988e0  (Ghidra `~RenderLayer` @ 005988e0)
 * Signature: uint8_t __thiscall ~RenderLayer(RenderLayer * self)
 * Class: RenderLayer
 * Calls: `CriticalSection__CriticalSection__005b71d0`, `operator_delete`
 * Called by: `AnimalLayer__AnimalLayer`, `AnimalLayer__AnimalLayer__005182c0`, `BossLayer__BossLayer`, `BossLayer__BossLayer__005182a0`, `GMeatHUD__GMeatHUD`, `GSMBCutSceneManager__GSMBCutSceneManager`, `GSMBMenu__GSMBMenu`, `LastLayer__LastLayer`, `LastLayer__LastLayer__00518240`, `LevelRenderLayer__LevelRenderLayer` (+14 more)
 */
/* RenderLayer__RenderLayer__005988e0() */

void __thiscall RenderLayer__RenderLayer__005988e0(RenderLayer *self)

{
  long lVar1;
  long lVar2;
  
  *(uint8_t ***)self = &PTR__RenderLayer_005dd2d0;
  lVar2 = *(long *)(self + 8);
  while (lVar2 != 0) {
    lVar1 = *(long *)(lVar2 + 8);
    *(uint64_t *)(lVar2 + 0x10) = 0;
    *(uint64_t *)(lVar2 + 8) = 0;
    *(uint64_t *)(lVar2 + 0x18) = 0;
    lVar2 = lVar1;
  }
                    /* try { // try from 00598927 to 0059892b has its CatchHandler @ 00598945 */
  RenderLayers__RemoveLayer(self);
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)(self + 0x3d8));
  operator_delete(self);
  return;
}
