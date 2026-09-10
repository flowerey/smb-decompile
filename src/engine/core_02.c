/* src/engine/core_02.c — 78 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "core_02.h"

/* ======================================================================
 * FUN_00450f70  (Ghidra `FUN_00450f70` @ 00450f70)
 * Signature: uint8_t FUN_00450f70(void)
 * Calls: (none)
 * Called by: (none)
 */
void FUN_00450f70(void)

{
  (*(code *)PTR_00815638)();
  return;
}

/* ======================================================================
 * ExtendFaceFromLight  (Ghidra `ExtendFaceFromLight` @ 0046e3d0)
 * Signature: uint8_t __stdcall ExtendFaceFromLight(LightFace2D * arg1, Vector2 * arg2, int * arg3, tagPos2ColorVertex * arg4)
 * Calls: `Vector2__operator_minus__005be180`, `Vector2__operator_mul__005be200`, `Vector2__operator_plus__005be140`
 * Called by: `ExtendFaceFromLight__0046fd60`, `TileLevelLightMap__GenerateShadowMap`
 */
/* ExtendFaceFromLight(LightFace2D const&, Vector2 const&, int&, CGR__tagPos2ColorVertex) [clone
   .constprop.18] */

bool ExtendFaceFromLight(LightFace2D *arg1,Vector2 *arg2,int *arg3,
                        tagPos2ColorVertex *arg4)

{
  int iVar1;
  float fVar2;
  Vector2 aVStack_a8 [16];
  Vector2 local_98 [16];
  Vector2 local_88 [16];
  uint32_t local_78;
  uint32_t local_74;
  uint32_t local_68;
  uint32_t local_64;
  uint32_t local_58;
  uint32_t local_54;
  Vector2 local_48 [16];
  Vector2 local_38 [16];
  
  Vector2__operator_minus__005be180(aVStack_a8,arg2);
  fVar2 = (float)Vector2__Dot(aVStack_a8,(Vector2 *)(arg1 + 0x10));
  if (fVar2 < 0.0) {
    Vector2__operator_minus__005be180(local_38,(Vector2 *)arg1);
    Vector2__operator_mul__005be200(local_98,DAT_005c01c4 /* R:1000.0f */);
    Vector2__operator_minus__005be180(local_48,(Vector2 *)(arg1 + 8));
    Vector2__operator_mul__005be200(local_88,DAT_005c01c4 /* R:1000.0f */);
    iVar1 = *arg3;
    *arg3 = iVar1 + 1;
    *(uint32_t *)(arg4 + (long)iVar1 * 0xc) = *(uint32_t *)arg1;
    *(uint32_t *)(arg4 + (long)iVar1 * 0xc + 4) = *(uint32_t *)(arg1 + 4);
    Vector2__operator_plus__005be140((Vector2 *)&local_58,(Vector2 *)arg1);
    iVar1 = *arg3;
    *arg3 = iVar1 + 1;
    *(uint32_t *)(arg4 + (long)iVar1 * 0xc) = local_58;
    *(uint32_t *)(arg4 + (long)iVar1 * 0xc + 4) = local_54;
    iVar1 = *arg3;
    *arg3 = iVar1 + 1;
    *(uint32_t *)(arg4 + (long)iVar1 * 0xc) = *(uint32_t *)(arg1 + 8);
    *(uint32_t *)(arg4 + (long)iVar1 * 0xc + 4) = *(uint32_t *)(arg1 + 0xc);
    iVar1 = *arg3;
    *arg3 = iVar1 + 1;
    *(uint32_t *)(arg4 + (long)iVar1 * 0xc) = *(uint32_t *)(arg1 + 8);
    *(uint32_t *)(arg4 + (long)iVar1 * 0xc + 4) = *(uint32_t *)(arg1 + 0xc);
    Vector2__operator_plus__005be140((Vector2 *)&local_68,(Vector2 *)arg1);
    iVar1 = *arg3;
    *arg3 = iVar1 + 1;
    *(uint32_t *)(arg4 + (long)iVar1 * 0xc) = local_68;
    *(uint32_t *)(arg4 + (long)iVar1 * 0xc + 4) = local_64;
    Vector2__operator_plus__005be140((Vector2 *)&local_78,(Vector2 *)(arg1 + 8));
    iVar1 = *arg3;
    *arg3 = iVar1 + 1;
    *(uint32_t *)(arg4 + (long)iVar1 * 0xc) = local_78;
    *(uint32_t *)(arg4 + (long)iVar1 * 0xc + 4) = local_74;
  }
  return fVar2 < 0.0;
}

/* ======================================================================
 * ExtendFaceFromLight__0046fd60  (Ghidra `ExtendFaceFromLight` @ 0046fd60)
 * Signature: uint8_t __stdcall ExtendFaceFromLight(LightFace2D * arg1, Vector2 * arg2, int * arg3, tagPos2ColorVertex * arg4)
 * Calls: `ExtendFaceFromLight`, `Vector2__operator_minus__005be180`, `Vector2__operator_mul__005be200`, `Vector2__operator_plus__005be140`
 * Called by: (none)
 */
/* ExtendFaceFromLight(LightFace2D const&, Vector2 const&, int&, CGR__tagPos2ColorVertex) */

bool ExtendFaceFromLight(LightFace2D *arg1,Vector2 *arg2,int *arg3,
                        tagPos2ColorVertex *arg4)

{
  int iVar1;
  float fVar2;
  Vector2 aVStack_a8 [16];
  Vector2 local_98 [16];
  Vector2 local_88 [16];
  Vector2 local_78 [16];
  Vector2 local_68 [16];
  uint32_t local_58;
  uint32_t local_54;
  uint32_t local_48;
  uint32_t local_44;
  uint32_t local_38;
  uint32_t local_34;
  
  Vector2__operator_minus__005be180(aVStack_a8,arg2);
  fVar2 = (float)Vector2__Dot(aVStack_a8,(Vector2 *)(arg1 + 0x10));
  if (fVar2 < 0.0) {
    Vector2__operator_minus__005be180(local_88,(Vector2 *)arg1);
    Vector2__operator_mul__005be200(local_98,DAT_005c01c4 /* R:1000.0f */);
    Vector2__operator_minus__005be180(local_68,(Vector2 *)(arg1 + 8));
    Vector2__operator_mul__005be200(local_78,DAT_005c01c4 /* R:1000.0f */);
    iVar1 = *arg3;
    *arg3 = iVar1 + 1;
    *(uint32_t *)(arg4 + (long)iVar1 * 0xc) = *(uint32_t *)arg1;
    *(uint32_t *)(arg4 + (long)iVar1 * 0xc + 4) = *(uint32_t *)(arg1 + 4);
    Vector2__operator_plus__005be140((Vector2 *)&local_58,(Vector2 *)arg1);
    iVar1 = *arg3;
    *arg3 = iVar1 + 1;
    *(uint32_t *)(arg4 + (long)iVar1 * 0xc) = local_58;
    *(uint32_t *)(arg4 + (long)iVar1 * 0xc + 4) = local_54;
    iVar1 = *arg3;
    *arg3 = iVar1 + 1;
    *(uint32_t *)(arg4 + (long)iVar1 * 0xc) = *(uint32_t *)(arg1 + 8);
    *(uint32_t *)(arg4 + (long)iVar1 * 0xc + 4) = *(uint32_t *)(arg1 + 0xc);
    iVar1 = *arg3;
    *arg3 = iVar1 + 1;
    *(uint32_t *)(arg4 + (long)iVar1 * 0xc) = *(uint32_t *)(arg1 + 8);
    *(uint32_t *)(arg4 + (long)iVar1 * 0xc + 4) = *(uint32_t *)(arg1 + 0xc);
    Vector2__operator_plus__005be140((Vector2 *)&local_48,(Vector2 *)arg1);
    iVar1 = *arg3;
    *arg3 = iVar1 + 1;
    *(uint32_t *)(arg4 + (long)iVar1 * 0xc) = local_48;
    *(uint32_t *)(arg4 + (long)iVar1 * 0xc + 4) = local_44;
    Vector2__operator_plus__005be140((Vector2 *)&local_38,(Vector2 *)(arg1 + 8));
    iVar1 = *arg3;
    *arg3 = iVar1 + 1;
    *(uint32_t *)(arg4 + (long)iVar1 * 0xc) = local_38;
    *(uint32_t *)(arg4 + (long)iVar1 * 0xc + 4) = local_34;
  }
  return fVar2 < 0.0;
}

/* ======================================================================
 * GetClosestAnimal  (Ghidra `GetClosestAnimal` @ 0048be20)
 * Signature: uint8_t __stdcall GetClosestAnimal(Vector2 * arg1)
 * Calls: `Vector2__operator_minus__005be180`
 * Called by: (none)
 */
/* SMBAnimals__GetClosestAnimal(Vector2 const&) */

uint64_t SMBAnimals__GetClosestAnimal(Vector2 *arg1)

{
  uint uVar1;
  ulong uVar2;
  uint64_t uVar3;
  float fVar4;
  float local_3c;
  Vector2 local_38 [16];
  
  uVar3 = 0;
  if (*(short *)(arg1 + 0x28) != 0) {
    uVar2 = 0;
    local_3c = DAT_005c17f0 /* R:100000000.0f */;
    do {
      Vector2__operator_minus__005be180(local_38,(Vector2 *)
                                  (*(long *)(*(long *)(arg1 + 0x38) + (uVar2 & 0xffff) * 8) +
                                  0xf8));
      fVar4 = (float)Vector2__LengthSq(local_38);
      if (fVar4 < local_3c) {
        uVar3 = *(uint64_t *)(*(long *)(arg1 + 0x38) + (uVar2 & 0xffff) * 8);
        local_3c = fVar4;
      }
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulong)uVar1;
    } while ((int)uVar1 < (int)(uint)*(ushort *)(arg1 + 0x28));
  }
  return uVar3;
}

/* ======================================================================
 * EditorPaletteButton_Click  (Ghidra `EditorPaletteButton_Click` @ 0049e250)
 * Signature: uint8_t __stdcall EditorPaletteButton_Click(void * arg1)
 * Calls: (none)
 * Called by: `SMBEditor__SMBEditor__004ad010`
 */
/* EditorPaletteButton_Click(void*) */

void EditorPaletteButton_Click(void *arg1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)arg1;
  iVar1 = *(int *)((long)arg1 + 8);
  lVar3 = *(long *)(lVar2 + 0x108);
  *(uint8_t *)(lVar3 + 0x4a) = 0;
  *(uint16_t *)(lVar3 + 0x48) = 0;
  lVar3 = *(long *)(lVar2 + 0xb8 + (long)iVar1 * 8);
  *(long *)(lVar2 + 0x108) = lVar3;
  *(uint8_t *)(lVar3 + 0x4a) = 1;
  return;
}

/* ======================================================================
 * EditorForm_LayerPropsCancel  (Ghidra `EditorForm_LayerPropsCancel` @ 0049e300)
 * Signature: uint8_t __stdcall EditorForm_LayerPropsCancel(void * arg1)
 * Calls: (none)
 * Called by: `SMBEditor__SMBEditor__004ad010`
 */
/* EditorForm_LayerPropsCancel(void*) */

void EditorForm_LayerPropsCancel(void *arg1)

{
  *(uint32_t *)(pEditorLayerPropsForm + 0xac) = 1;
  return;
}

/* ======================================================================
 * EditorForm_NewFormCancel  (Ghidra `EditorForm_NewFormCancel` @ 0049e320)
 * Signature: uint8_t __stdcall EditorForm_NewFormCancel(void * arg1)
 * Calls: (none)
 * Called by: `SMBEditor__SMBEditor__004ad010`
 */
/* EditorForm_NewFormCancel(void*) */

void EditorForm_NewFormCancel(void *arg1)

{
  *(uint32_t *)(pEditorNewLevelForm + 0xac) = 1;
  return;
}

/* ======================================================================
 * EditorForm_SaveFormCancel  (Ghidra `EditorForm_SaveFormCancel` @ 0049e340)
 * Signature: uint8_t __stdcall EditorForm_SaveFormCancel(void * arg1)
 * Calls: (none)
 * Called by: `SMBEditor__SMBEditor__004ad010`
 */
/* EditorForm_SaveFormCancel(void*) */

void EditorForm_SaveFormCancel(void *arg1)

{
  *(uint32_t *)(pEditorSaveForm + 0xac) = 1;
  return;
}

/* ======================================================================
 * EditorForm_LoadFormCancel  (Ghidra `EditorForm_LoadFormCancel` @ 0049e360)
 * Signature: uint8_t __stdcall EditorForm_LoadFormCancel(void * arg1)
 * Calls: (none)
 * Called by: `SMBEditor__SMBEditor__004ad010`
 */
/* EditorForm_LoadFormCancel(void*) */

void EditorForm_LoadFormCancel(void *arg1)

{
  *(uint32_t *)(pEditorLoadForm + 0xac) = 1;
  return;
}

/* ======================================================================
 * EditorForm_UploadFormCancel  (Ghidra `EditorForm_UploadFormCancel` @ 0049e380)
 * Signature: uint8_t __stdcall EditorForm_UploadFormCancel(void * arg1)
 * Calls: (none)
 * Called by: `SMBEditor__SMBEditor__004ad010`
 */
/* EditorForm_UploadFormCancel(void*) */

void EditorForm_UploadFormCancel(void *arg1)

{
  *(uint32_t *)(pEditorUploadForm + 0xac) = 1;
  return;
}

/* ======================================================================
 * EditorForm_CharFormCancel  (Ghidra `EditorForm_CharFormCancel` @ 0049e3a0)
 * Signature: uint8_t __stdcall EditorForm_CharFormCancel(void * arg1)
 * Calls: (none)
 * Called by: `SMBEditor__SMBEditor__004ad010`
 */
/* EditorForm_CharFormCancel(void*) */

void EditorForm_CharFormCancel(void *arg1)

{
  *(uint32_t *)(pEditorCharForm + 0xac) = 1;
  return;
}

/* ======================================================================
 * EditorForm_CharFormOk  (Ghidra `EditorForm_CharFormOk` @ 0049e4b0)
 * Signature: uint8_t __stdcall EditorForm_CharFormOk(void * arg1)
 * Calls: `GSuperMeatBoy__DeferLoadCharactor`
 * Called by: `SMBEditor__SMBEditor__004ad010`
 */
/* EditorForm_CharFormOk(void*) */

void EditorForm_CharFormOk(void *arg1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = 0;
  uVar2 = 0;
  do {
    if (*(long *)(pEditorCharForm + 0x158) == *(long *)(pEditorCharForm + 0xb8 + uVar1 * 8)) {
      uVar2 = uVar1 & 0xffffffff;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 != 0x14);
  GSuperMeatBoy__DeferLoadCharactor
            (SuperMeatBoy,
             *(uint32_t *)
              (EditorFormCharacter__GetSelectedCharacter()::pCharCodes + (long)(int)uVar2 * 4));
  *(uint32_t *)(pEditorCharForm + 0xac) = 1;
  return;
}

/* ======================================================================
 * EditorForm_HelpButtonPress  (Ghidra `EditorForm_HelpButtonPress` @ 0049e5a0)
 * Signature: uint8_t __stdcall EditorForm_HelpButtonPress(void * arg1)
 * Calls: `SteamFriends`
 * Called by: `SMBEditor__SMBEditor__004ad010`
 */
/* EditorForm_HelpButtonPress(void*) */

void EditorForm_HelpButtonPress(void *arg1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = SteamFriends();
  if (lVar1 != 0) {
    plVar2 = (long *)SteamFriends();
                    /* WARNING: Could not recover jumptable at 0x0049e5c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0xc0))
              (plVar2,"http://supermeatboy.com/forum/index.php/board,10.0.html",
               *(code **)(*plVar2 + 0xc0));
    return;
  }
  return;
}

/* ======================================================================
 * FillSelected_Selection  (Ghidra `FillSelected_Selection` @ 0049eaf0)
 * Signature: uint8_t __stdcall FillSelected_Selection(GRIDBLOCK * arg1, int arg2, int arg3)
 * Calls: `TileLevel__GetGridBlock`, `TileLevel__GetGridPos`, `TileLevel__PlaceTile`
 * Called by: `FillSelected`
 */
/* FillSelected_Selection(GRIDBLOCK&, int, int) */

void FillSelected_Selection(GRIDBLOCK *arg1,int arg2,int arg3)

{
  uint32_t in_register_00000034;
  Vector2 aVStack_38 [16];
  uint32_t local_28 [6];
  
  local_28[0] = *SuperMeatBoyEditor;
  TileLevel__GetGridBlock
            (*(TileLevel **)(SuperMeatBoy + 0x40),CONCAT44(in_register_00000034,arg2),arg3,
             SuperMeatBoyEditor[0x34]);
  TileLevel__PlaceTile
            (*(TileLevel **)(SuperMeatBoy + 0x40),arg2,arg3,local_28,SuperMeatBoyEditor[0x34])
  ;
  TileLevel__GetGridPos(*(TileLevel **)(SuperMeatBoy + 0x40),arg2,arg3,aVStack_38);
  return;
}

/* ======================================================================
 * EditorForm_ObjectPropertiesCancel  (Ghidra `EditorForm_ObjectPropertiesCancel` @ 0049edb0)
 * Signature: uint8_t __stdcall EditorForm_ObjectPropertiesCancel(void * arg1)
 * Calls: (none)
 * Called by: `SMBEditor__SMBEditor__004ad010`
 */
/* EditorForm_ObjectPropertiesCancel(void*) */

void EditorForm_ObjectPropertiesCancel(void *arg1)

{
  int iVar1;
  
  iVar1 = *(int *)(SuperMeatBoyEditor + 0xc0);
  if (iVar1 == 6) {
    *(uint32_t *)(pEditorLightPropsForm + 0xac) = 1;
    return;
  }
  if (iVar1 != 3) {
    if (iVar1 != 7) {
      *(uint32_t *)(pEditorObjectPropsForm + 0xac) = 1;
      return;
    }
    *(uint32_t *)(pEditorAnimalPropsForm + 0xac) = 1;
    return;
  }
  *(uint32_t *)(pEditorCameraPropsForm + 0xac) = 1;
  return;
}

/* ======================================================================
 * EditorForm_UploadFormOpen  (Ghidra `EditorForm_UploadFormOpen` @ 0049f500)
 * Signature: uint8_t __stdcall EditorForm_UploadFormOpen(void * arg1)
 * Calls: `CreateMessage`, `GetLocalizedText`, `SteamUser`, `UploadPromptClose`, `UserAlertCloseCurrent`
 * Called by: `SMBEditor__SMBEditor__004ad010`
 */
/* EditorForm_UploadFormOpen(void*) */

void EditorForm_UploadFormOpen(void *arg1)

{
  long lVar1;
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
  
  lVar1 = SteamUser();
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
  if (lVar1 != 0) {
    local_70 = L"Upload Level";
    local_68 = 
    L"Play through your level \nand when you reach bandage girl \nyou will be prompted to upload";
    local_78[0] = 0xe;
    local_60 = GetLocalizedText(4);
    local_50 = UploadPromptClose;
    CreateMessage(local_78);
    bUploadMode = 1;
    return;
  }
  local_70 = L"Steam Login Required";
  local_68 = L"You must be logged into \nSteam in order to use this feature";
  local_78[0] = 0xe;
  local_60 = GetLocalizedText(4);
  local_50 = UserAlertCloseCurrent;
  CreateMessage(local_78);
  return;
}

/* ======================================================================
 * EditorForm_WaypointOpen  (Ghidra `EditorForm_WaypointOpen` @ 0049f600)
 * Signature: uint8_t __stdcall EditorForm_WaypointOpen(void * arg1)
 * Calls: (none)
 * Called by: `SMBEditor__SMBEditor__004ad010`
 */
/* EditorForm_WaypointOpen(void*) */

void EditorForm_WaypointOpen(void *arg1)

{
  if (*(short *)(SuperMeatBoyEditor + 0x98) != 1) {
    return;
  }
  pCurrentSetPieceWayPoint = 0;
  bSetPieceWayPointMode = (uint)(bSetPieceWayPointMode == 0);
  return;
}

/* ======================================================================
 * EditorForm_LayerPropsOk  (Ghidra `EditorForm_LayerPropsOk` @ 0049f7c0)
 * Signature: uint8_t __stdcall EditorForm_LayerPropsOk(void * arg1)
 * Calls: `FlashEditableTextField__GetUITextField`, `StringToFloatW`, `StringToIntW`, `TileLevel__getLevelLayer`
 * Called by: `SMBEditor__SMBEditor__004ad010`
 */
/* EditorForm_LayerPropsOk(void*) */

void EditorForm_LayerPropsOk(void *arg1)

{
  int iVar1;
  long lVar2;
  uint32_t uVar3;
  uint64_t uVar4;
  TileLevel *pTVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint32_t uVar10;
  
  uVar4 = 0;
  if (*(long *)(pEditorLayerPropsForm + 0x28) != 0) {
    lVar2 = FlashEditableTextField__GetUITextField
                      (*(FlashEditableTextField **)(*(long *)(pEditorLayerPropsForm + 0x28) + 0x50))
    ;
    uVar4 = *(uint64_t *)(lVar2 + 0x40);
  }
  iVar1 = StringToIntW(uVar4);
  uVar4 = 0;
  fVar6 = DAT_005c4890 /* R:0.003921568859368563f */ * (float)iVar1;
  if (*(long *)(pEditorLayerPropsForm + 0x30) != 0) {
    lVar2 = FlashEditableTextField__GetUITextField
                      (*(FlashEditableTextField **)(*(long *)(pEditorLayerPropsForm + 0x30) + 0x50))
    ;
    uVar4 = *(uint64_t *)(lVar2 + 0x40);
  }
  iVar1 = StringToIntW(uVar4);
  uVar4 = 0;
  fVar7 = DAT_005c4890 /* R:0.003921568859368563f */ * (float)iVar1;
  if (*(long *)(pEditorLayerPropsForm + 0x38) != 0) {
    lVar2 = FlashEditableTextField__GetUITextField
                      (*(FlashEditableTextField **)(*(long *)(pEditorLayerPropsForm + 0x38) + 0x50))
    ;
    uVar4 = *(uint64_t *)(lVar2 + 0x40);
  }
  iVar1 = StringToIntW(uVar4);
  uVar4 = 0;
  fVar8 = DAT_005c4890 /* R:0.003921568859368563f */ * (float)iVar1;
  if (*(long *)(pEditorLayerPropsForm + 0x40) != 0) {
    lVar2 = FlashEditableTextField__GetUITextField
                      (*(FlashEditableTextField **)(*(long *)(pEditorLayerPropsForm + 0x40) + 0x50))
    ;
    uVar4 = *(uint64_t *)(lVar2 + 0x40);
  }
  iVar1 = StringToIntW(uVar4);
  uVar4 = 0;
  fVar9 = DAT_005c4890 /* R:0.003921568859368563f */ * (float)iVar1;
  if (*(long *)(pEditorLayerPropsForm + 0x48) != 0) {
    lVar2 = FlashEditableTextField__GetUITextField
                      (*(FlashEditableTextField **)(*(long *)(pEditorLayerPropsForm + 0x48) + 0x50))
    ;
    uVar4 = *(uint64_t *)(lVar2 + 0x40);
  }
  uVar10 = StringToFloatW(uVar4);
  if ((int)arg1 == 0) {
    uVar3 = *(uint32_t *)(SuperMeatBoyEditor + 0xd0);
    pTVar5 = *(TileLevel **)(SuperMeatBoy + 0x40);
  }
  else {
    lVar2 = TileLevel__getLevelLayer(*(TileLevel **)(SuperMeatBoy + 0x40),0);
    *(float *)(lVar2 + 0x400) = fVar6;
    *(float *)(lVar2 + 0x404) = fVar7;
    *(float *)(lVar2 + 0x408) = fVar8;
    *(float *)(lVar2 + 0x40c) = fVar9;
    *(uint32_t *)(lVar2 + 0x410) = uVar10;
    lVar2 = TileLevel__getLevelLayer(*(TileLevel **)(SuperMeatBoy + 0x40),1);
    *(float *)(lVar2 + 0x400) = fVar6;
    *(float *)(lVar2 + 0x404) = fVar7;
    *(float *)(lVar2 + 0x408) = fVar8;
    *(float *)(lVar2 + 0x40c) = fVar9;
    *(uint32_t *)(lVar2 + 0x410) = uVar10;
    lVar2 = TileLevel__getLevelLayer(*(TileLevel **)(SuperMeatBoy + 0x40),2);
    *(float *)(lVar2 + 0x400) = fVar6;
    *(float *)(lVar2 + 0x404) = fVar7;
    *(float *)(lVar2 + 0x408) = fVar8;
    *(float *)(lVar2 + 0x40c) = fVar9;
    *(uint32_t *)(lVar2 + 0x410) = uVar10;
    lVar2 = TileLevel__getLevelLayer(*(TileLevel **)(SuperMeatBoy + 0x40),3);
    *(float *)(lVar2 + 0x400) = fVar6;
    *(float *)(lVar2 + 0x404) = fVar7;
    *(float *)(lVar2 + 0x408) = fVar8;
    *(float *)(lVar2 + 0x40c) = fVar9;
    *(uint32_t *)(lVar2 + 0x410) = uVar10;
    lVar2 = TileLevel__getLevelLayer(*(TileLevel **)(SuperMeatBoy + 0x40),4);
    *(float *)(lVar2 + 0x400) = fVar6;
    *(float *)(lVar2 + 0x404) = fVar7;
    *(float *)(lVar2 + 0x408) = fVar8;
    *(float *)(lVar2 + 0x40c) = fVar9;
    *(uint32_t *)(lVar2 + 0x410) = uVar10;
    lVar2 = TileLevel__getLevelLayer(*(TileLevel **)(SuperMeatBoy + 0x40),5);
    *(float *)(lVar2 + 0x400) = fVar6;
    *(float *)(lVar2 + 0x404) = fVar7;
    *(float *)(lVar2 + 0x408) = fVar8;
    *(float *)(lVar2 + 0x40c) = fVar9;
    *(uint32_t *)(lVar2 + 0x410) = uVar10;
    lVar2 = TileLevel__getLevelLayer(*(TileLevel **)(SuperMeatBoy + 0x40),6);
    uVar3 = 7;
    *(float *)(lVar2 + 0x400) = fVar6;
    *(float *)(lVar2 + 0x404) = fVar7;
    *(float *)(lVar2 + 0x408) = fVar8;
    *(float *)(lVar2 + 0x40c) = fVar9;
    *(uint32_t *)(lVar2 + 0x410) = uVar10;
    pTVar5 = *(TileLevel **)(SuperMeatBoy + 0x40);
  }
  lVar2 = TileLevel__getLevelLayer(pTVar5,uVar3);
  *(float *)(lVar2 + 0x400) = fVar6;
  *(float *)(lVar2 + 0x404) = fVar7;
  *(float *)(lVar2 + 0x408) = fVar8;
  *(float *)(lVar2 + 0x40c) = fVar9;
  *(uint32_t *)(lVar2 + 0x410) = uVar10;
  return;
}

/* ======================================================================
 * EditorForm_ObjectPropertiesOk  (Ghidra `EditorForm_ObjectPropertiesOk` @ 0049fc00)
 * Signature: uint8_t __stdcall EditorForm_ObjectPropertiesOk(void * arg1)
 * Calls: `FlashEditableTextField__GetUITextField`, `StringToFloatW`, `StringToIntW`, `Vector2__operator_assign`
 * Called by: `SMBEditor__SMBEditor__004ad010`
 */
/* EditorForm_ObjectPropertiesOk(void*) */

void EditorForm_ObjectPropertiesOk(void *arg1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  uint64_t uVar4;
  uint32_t uVar5;
  float fVar6;
  float fVar7;
  uint32_t local_28;
  uint32_t local_24;
  uint32_t local_18;
  uint32_t local_14;
  
  lVar3 = pSelectedAnimal;
  iVar1 = *(int *)(SuperMeatBoyEditor + 0xc0);
  if (iVar1 == 6) {
    lVar3 = pSelectedLight;
    if ((pSelectedLight == 0) && (lVar3 = *(long *)(SuperMeatBoyEditor + 200), lVar3 == 0))
    goto LAB_0049fe80;
    uVar4 = 0;
    if (*(long *)(pEditorLightPropsForm + 0x28) != 0) {
      lVar2 = FlashEditableTextField__GetUITextField
                        (*(FlashEditableTextField **)
                          (*(long *)(pEditorLightPropsForm + 0x28) + 0x50));
      uVar4 = *(uint64_t *)(lVar2 + 0x40);
    }
    iVar1 = StringToIntW(uVar4);
    uVar4 = 0;
    fVar7 = DAT_005c4890 /* R:0.003921568859368563f */ * (float)iVar1;
    if (*(long *)(pEditorLightPropsForm + 0x30) != 0) {
      lVar2 = FlashEditableTextField__GetUITextField
                        (*(FlashEditableTextField **)
                          (*(long *)(pEditorLightPropsForm + 0x30) + 0x50));
      uVar4 = *(uint64_t *)(lVar2 + 0x40);
    }
    iVar1 = StringToIntW(uVar4);
    uVar4 = 0;
    fVar6 = (float)iVar1 * DAT_005c4890 /* R:0.003921568859368563f */;
    if (*(long *)(pEditorLightPropsForm + 0x38) != 0) {
      lVar2 = FlashEditableTextField__GetUITextField
                        (*(FlashEditableTextField **)
                          (*(long *)(pEditorLightPropsForm + 0x38) + 0x50));
      uVar4 = *(uint64_t *)(lVar2 + 0x40);
    }
    iVar1 = StringToIntW(uVar4);
    *(float *)(lVar3 + 0x10) = fVar7;
    *(float *)(lVar3 + 0x14) = fVar6;
    *(uint32_t *)(lVar3 + 0x28) = 1;
    *(float *)(lVar3 + 0x18) = (float)iVar1 * DAT_005c4890 /* R:0.003921568859368563f */;
  }
  else if (iVar1 == 3) {
    lVar3 = *(long *)(SuperMeatBoyEditor + 0x108);
    if (lVar3 == 0) goto LAB_0049fea0;
    uVar4 = 0;
    if (*(long *)(pEditorCameraPropsForm + 0x30) != 0) {
      lVar2 = FlashEditableTextField__GetUITextField
                        (*(FlashEditableTextField **)
                          (*(long *)(pEditorCameraPropsForm + 0x30) + 0x50));
      uVar4 = *(uint64_t *)(lVar2 + 0x40);
    }
    uVar5 = StringToFloatW(uVar4);
    lVar2 = pEditorCameraPropsForm;
    *(uint32_t *)(lVar3 + 8) = uVar5;
    uVar4 = 0;
    if (*(long *)(lVar2 + 0x28) != 0) {
      lVar2 = FlashEditableTextField__GetUITextField
                        (*(FlashEditableTextField **)(*(long *)(lVar2 + 0x28) + 0x50));
      uVar4 = *(uint64_t *)(lVar2 + 0x40);
    }
    uVar5 = StringToFloatW(uVar4);
    *(uint32_t *)(lVar3 + 0x10) = uVar5;
  }
  else if (iVar1 == 7) {
    if (pSelectedAnimal == 0) goto LAB_0049fe50;
    uVar4 = 0;
    if (*(long *)(pEditorAnimalPropsForm + 0x28) != 0) {
      lVar2 = FlashEditableTextField__GetUITextField
                        (*(FlashEditableTextField **)
                          (*(long *)(pEditorAnimalPropsForm + 0x28) + 0x50));
      uVar4 = *(uint64_t *)(lVar2 + 0x40);
    }
    local_28 = StringToFloatW(uVar4);
    uVar4 = 0;
    if (*(long *)(pEditorAnimalPropsForm + 0x30) != 0) {
      lVar2 = FlashEditableTextField__GetUITextField
                        (*(FlashEditableTextField **)
                          (*(long *)(pEditorAnimalPropsForm + 0x30) + 0x50));
      uVar4 = *(uint64_t *)(lVar2 + 0x40);
    }
    local_24 = StringToFloatW(uVar4);
    uVar4 = 0;
    if (*(long *)(pEditorAnimalPropsForm + 0x38) != 0) {
      lVar2 = FlashEditableTextField__GetUITextField
                        (*(FlashEditableTextField **)
                          (*(long *)(pEditorAnimalPropsForm + 0x38) + 0x50));
      uVar4 = *(uint64_t *)(lVar2 + 0x40);
    }
    local_18 = StringToFloatW(uVar4);
    uVar4 = 0;
    if (*(long *)(pEditorAnimalPropsForm + 0x40) != 0) {
      lVar2 = FlashEditableTextField__GetUITextField
                        (*(FlashEditableTextField **)
                          (*(long *)(pEditorAnimalPropsForm + 0x40) + 0x50));
      uVar4 = *(uint64_t *)(lVar2 + 0x40);
    }
    local_14 = StringToFloatW(uVar4);
    Vector2__operator_assign((Vector2 *)(lVar3 + 0x108),(Vector2 *)&local_28);
    Vector2__operator_assign((Vector2 *)(lVar3 + 0x100),(Vector2 *)&local_18);
  }
  else {
    uVar4 = 0;
    lVar3 = **(long **)(SuperMeatBoyEditor + 0xa8);
    if (*(long *)(pEditorObjectPropsForm + 0x28) != 0) {
      lVar2 = FlashEditableTextField__GetUITextField
                        (*(FlashEditableTextField **)
                          (*(long *)(pEditorObjectPropsForm + 0x28) + 0x50));
      uVar4 = *(uint64_t *)(lVar2 + 0x40);
    }
    uVar5 = StringToFloatW(uVar4);
    lVar2 = pEditorObjectPropsForm;
    *(uint32_t *)(lVar3 + 0x48) = uVar5;
    uVar4 = 0;
    if (*(long *)(lVar2 + 0x30) != 0) {
      lVar2 = FlashEditableTextField__GetUITextField
                        (*(FlashEditableTextField **)(*(long *)(lVar2 + 0x30) + 0x50));
      uVar4 = *(uint64_t *)(lVar2 + 0x40);
    }
    uVar5 = StringToFloatW(uVar4);
    lVar2 = pEditorObjectPropsForm;
    *(uint32_t *)(lVar3 + 0x44) = uVar5;
    uVar4 = 0;
    if (*(long *)(lVar2 + 0x38) != 0) {
      lVar2 = FlashEditableTextField__GetUITextField
                        (*(FlashEditableTextField **)(*(long *)(lVar2 + 0x38) + 0x50));
      uVar4 = *(uint64_t *)(lVar2 + 0x40);
    }
    uVar5 = StringToFloatW(uVar4);
    lVar2 = pEditorObjectPropsForm;
    *(uint32_t *)(lVar3 + 0x4c) = uVar5;
    uVar4 = 0;
    if (*(long *)(lVar2 + 0x40) != 0) {
      lVar2 = FlashEditableTextField__GetUITextField
                        (*(FlashEditableTextField **)(*(long *)(lVar2 + 0x40) + 0x50));
      uVar4 = *(uint64_t *)(lVar2 + 0x40);
    }
    uVar5 = StringToFloatW(uVar4);
    lVar2 = pEditorObjectPropsForm;
    *(uint32_t *)(lVar3 + 0x50) = uVar5;
    uVar4 = 0;
    if (*(long *)(lVar2 + 0x48) != 0) {
      lVar2 = FlashEditableTextField__GetUITextField
                        (*(FlashEditableTextField **)(*(long *)(lVar2 + 0x48) + 0x50));
      uVar4 = *(uint64_t *)(lVar2 + 0x40);
    }
    uVar5 = StringToIntW(uVar4);
    *(uint32_t *)(lVar3 + 0x54) = uVar5;
    uVar4 = 0;
    if (*(long *)(pEditorObjectPropsForm + 0x50) != 0) {
      lVar2 = FlashEditableTextField__GetUITextField
                        (*(FlashEditableTextField **)
                          (*(long *)(pEditorObjectPropsForm + 0x50) + 0x50));
      uVar4 = *(uint64_t *)(lVar2 + 0x40);
    }
    uVar5 = StringToIntW(uVar4);
    *(uint32_t *)(lVar3 + 0x58) = uVar5;
  }
  iVar1 = *(int *)(SuperMeatBoyEditor + 0xc0);
  if (iVar1 != 6) {
    if (iVar1 != 3) {
      if (iVar1 != 7) {
        *(uint32_t *)(pEditorObjectPropsForm + 0xac) = 1;
        return;
      }
LAB_0049fe50:
      *(uint32_t *)(pEditorAnimalPropsForm + 0xac) = 1;
      return;
    }
LAB_0049fea0:
    *(uint32_t *)(pEditorCameraPropsForm + 0xac) = 1;
    return;
  }
LAB_0049fe80:
  *(uint32_t *)(pEditorLightPropsForm + 0xac) = 1;
  return;
}

/* ======================================================================
 * EditorForm_LoadFormOpen  (Ghidra `EditorForm_LoadFormOpen` @ 004a0190)
 * Signature: uint8_t __stdcall EditorForm_LoadFormOpen(void * arg1)
 * Calls: `Sprint`, `TKeyboard__BackupCallbacks`
 * Called by: `SMBEditor__SMBEditor__004ad010`
 */
/* EditorForm_LoadFormOpen(void*) */

void EditorForm_LoadFormOpen(void *arg1)

{
  InputCallback **ppIVar1;
  long lVar2;
  TKeyboard *this;
  long *plVar3;
  char acStack_28 [32];
  
  this = Keyboard;
  lVar2 = pEditorLoadForm;
  ppIVar1 = (InputCallback **)(pEditorLoadForm + 0xb0);
  *(uint64_t *)(pEditorLoadForm + 0xb0) = 0;
  TKeyboard__BackupCallbacks(this,ppIVar1);
  if (pCurrentVisibleForm == 0) {
    if (lVar2 == 0) goto LAB_004a0424;
  }
  else {
    if (lVar2 == pCurrentVisibleForm) goto LAB_004a0424;
    *(uint32_t *)(pCurrentVisibleForm + 0xac) = 1;
  }
  FlashAnimationLibrary__SetTextFieldText(*(char **)(lVar2 + 0x78),"formlabel",lVar2 + 0x88);
  plVar3 = *(long **)(lVar2 + 0x80);
  if (*plVar3 != 0) {
    Sprint("labeltext%i",acStack_28,1);
    FlashAnimationLibrary__SetTextFieldText
              (*(char **)(lVar2 + 0x78),acStack_28,**(uint64_t **)(lVar2 + 0x80));
    plVar3 = *(long **)(lVar2 + 0x80);
  }
  if (plVar3[1] != 0) {
    Sprint("labeltext%i",acStack_28,2);
    FlashAnimationLibrary__SetTextFieldText
              (*(char **)(lVar2 + 0x78),acStack_28,*(uint64_t *)(*(long *)(lVar2 + 0x80) + 8));
    plVar3 = *(long **)(lVar2 + 0x80);
  }
  if (plVar3[2] != 0) {
    Sprint("labeltext%i",acStack_28,3);
    FlashAnimationLibrary__SetTextFieldText
              (*(char **)(lVar2 + 0x78),acStack_28,*(uint64_t *)(*(long *)(lVar2 + 0x80) + 0x10));
    plVar3 = *(long **)(lVar2 + 0x80);
  }
  if (plVar3[3] != 0) {
    Sprint("labeltext%i",acStack_28,4);
    FlashAnimationLibrary__SetTextFieldText
              (*(char **)(lVar2 + 0x78),acStack_28,*(uint64_t *)(*(long *)(lVar2 + 0x80) + 0x18));
    plVar3 = *(long **)(lVar2 + 0x80);
  }
  if (plVar3[4] != 0) {
    Sprint("labeltext%i",acStack_28,5);
    FlashAnimationLibrary__SetTextFieldText
              (*(char **)(lVar2 + 0x78),acStack_28,*(uint64_t *)(*(long *)(lVar2 + 0x80) + 0x20));
  }
  if (*(long *)(lVar2 + 0x28) != 0) {
    FlashEditableTextField__SetText(*(char **)(*(long *)(lVar2 + 0x28) + 0x50),"");
  }
  if (*(long *)(lVar2 + 0x30) != 0) {
    FlashEditableTextField__SetText(*(char **)(*(long *)(lVar2 + 0x30) + 0x50),"");
  }
  if (*(long *)(lVar2 + 0x38) != 0) {
    FlashEditableTextField__SetText(*(char **)(*(long *)(lVar2 + 0x38) + 0x50),"");
  }
  if (*(long *)(lVar2 + 0x40) != 0) {
    FlashEditableTextField__SetText(*(char **)(*(long *)(lVar2 + 0x40) + 0x50),"");
  }
  if (*(long *)(lVar2 + 0x48) != 0) {
    FlashEditableTextField__SetText(*(char **)(*(long *)(lVar2 + 0x48) + 0x50),"");
  }
  if (*(long *)(lVar2 + 0x50) != 0) {
    FlashEditableTextField__SetText(*(char **)(*(long *)(lVar2 + 0x50) + 0x50),"");
  }
  if (*(long *)(lVar2 + 0x58) != 0) {
    FlashEditableTextField__SetText(*(char **)(*(long *)(lVar2 + 0x58) + 0x50),"");
  }
  if (*(long *)(lVar2 + 0x60) != 0) {
    FlashEditableTextField__SetText(*(char **)(*(long *)(lVar2 + 0x60) + 0x50),"");
  }
  if (*(long *)(lVar2 + 0x68) != 0) {
    FlashEditableTextField__SetText(*(char **)(*(long *)(lVar2 + 0x68) + 0x50),"");
  }
  if (*(long *)(lVar2 + 0x70) != 0) {
    FlashEditableTextField__SetText(*(char **)(*(long *)(lVar2 + 0x70) + 0x50),"");
  }
  pCurrentVisibleForm = lVar2;
  *(uint32_t *)(lVar2 + 0xa8) = 1;
LAB_004a0424:
  if (*(long **)(lVar2 + 0x28) != (long *)0x0) {
    (**(code **)(**(long **)(lVar2 + 0x28) + 0x48))();
  }
  if (*(long **)(lVar2 + 0x30) != (long *)0x0) {
    (**(code **)(**(long **)(lVar2 + 0x30) + 0x48))();
  }
  if (*(long **)(lVar2 + 0x38) != (long *)0x0) {
    (**(code **)(**(long **)(lVar2 + 0x38) + 0x48))();
  }
  if (*(long **)(lVar2 + 0x40) != (long *)0x0) {
    (**(code **)(**(long **)(lVar2 + 0x40) + 0x48))();
  }
  if (*(long **)(lVar2 + 0x48) != (long *)0x0) {
    (**(code **)(**(long **)(lVar2 + 0x48) + 0x48))();
  }
  if (*(long **)(lVar2 + 0x50) != (long *)0x0) {
    (**(code **)(**(long **)(lVar2 + 0x50) + 0x48))();
  }
  if (*(long **)(lVar2 + 0x58) != (long *)0x0) {
    (**(code **)(**(long **)(lVar2 + 0x58) + 0x48))();
  }
  if (*(long **)(lVar2 + 0x60) != (long *)0x0) {
    (**(code **)(**(long **)(lVar2 + 0x60) + 0x48))();
  }
  if (*(long **)(lVar2 + 0x68) != (long *)0x0) {
    (**(code **)(**(long **)(lVar2 + 0x68) + 0x48))();
  }
  if (*(long **)(lVar2 + 0x70) != (long *)0x0) {
    (**(code **)(**(long **)(lVar2 + 0x70) + 0x48))();
  }
  if (*(long **)(lVar2 + 0x28) != (long *)0x0) {
    (**(code **)(**(long **)(lVar2 + 0x28) + 0x38))();
  }
  return;
}

/* ======================================================================
 * EditorForm_CharFormOpen  (Ghidra `EditorForm_CharFormOpen` @ 004a04e0)
 * Signature: uint8_t __stdcall EditorForm_CharFormOpen(void * arg1)
 * Calls: `Sprint`, `TKeyboard__BackupCallbacks`
 * Called by: `SMBEditor__SMBEditor__004ad010`
 */
/* EditorForm_CharFormOpen(void*) */

void EditorForm_CharFormOpen(void *arg1)

{
  InputCallback **ppIVar1;
  long lVar2;
  TKeyboard *this;
  long *plVar3;
  char acStack_28 [32];
  
  this = Keyboard;
  lVar2 = pEditorCharForm;
  ppIVar1 = (InputCallback **)(pEditorCharForm + 0xb0);
  *(uint64_t *)(pEditorCharForm + 0xb0) = 0;
  TKeyboard__BackupCallbacks(this,ppIVar1);
  if (pCurrentVisibleForm == 0) {
    if (lVar2 == 0) goto LAB_004a0774;
  }
  else {
    if (lVar2 == pCurrentVisibleForm) goto LAB_004a0774;
    *(uint32_t *)(pCurrentVisibleForm + 0xac) = 1;
  }
  FlashAnimationLibrary__SetTextFieldText(*(char **)(lVar2 + 0x78),"formlabel",lVar2 + 0x88);
  plVar3 = *(long **)(lVar2 + 0x80);
  if (*plVar3 != 0) {
    Sprint("labeltext%i",acStack_28,1);
    FlashAnimationLibrary__SetTextFieldText
              (*(char **)(lVar2 + 0x78),acStack_28,**(uint64_t **)(lVar2 + 0x80));
    plVar3 = *(long **)(lVar2 + 0x80);
  }
  if (plVar3[1] != 0) {
    Sprint("labeltext%i",acStack_28,2);
    FlashAnimationLibrary__SetTextFieldText
              (*(char **)(lVar2 + 0x78),acStack_28,*(uint64_t *)(*(long *)(lVar2 + 0x80) + 8));
    plVar3 = *(long **)(lVar2 + 0x80);
  }
  if (plVar3[2] != 0) {
    Sprint("labeltext%i",acStack_28,3);
    FlashAnimationLibrary__SetTextFieldText
              (*(char **)(lVar2 + 0x78),acStack_28,*(uint64_t *)(*(long *)(lVar2 + 0x80) + 0x10));
    plVar3 = *(long **)(lVar2 + 0x80);
  }
  if (plVar3[3] != 0) {
    Sprint("labeltext%i",acStack_28,4);
    FlashAnimationLibrary__SetTextFieldText
              (*(char **)(lVar2 + 0x78),acStack_28,*(uint64_t *)(*(long *)(lVar2 + 0x80) + 0x18));
    plVar3 = *(long **)(lVar2 + 0x80);
  }
  if (plVar3[4] != 0) {
    Sprint("labeltext%i",acStack_28,5);
    FlashAnimationLibrary__SetTextFieldText
              (*(char **)(lVar2 + 0x78),acStack_28,*(uint64_t *)(*(long *)(lVar2 + 0x80) + 0x20));
  }
  if (*(long *)(lVar2 + 0x28) != 0) {
    FlashEditableTextField__SetText(*(char **)(*(long *)(lVar2 + 0x28) + 0x50),"");
  }
  if (*(long *)(lVar2 + 0x30) != 0) {
    FlashEditableTextField__SetText(*(char **)(*(long *)(lVar2 + 0x30) + 0x50),"");
  }
  if (*(long *)(lVar2 + 0x38) != 0) {
    FlashEditableTextField__SetText(*(char **)(*(long *)(lVar2 + 0x38) + 0x50),"");
  }
  if (*(long *)(lVar2 + 0x40) != 0) {
    FlashEditableTextField__SetText(*(char **)(*(long *)(lVar2 + 0x40) + 0x50),"");
  }
  if (*(long *)(lVar2 + 0x48) != 0) {
    FlashEditableTextField__SetText(*(char **)(*(long *)(lVar2 + 0x48) + 0x50),"");
  }
  if (*(long *)(lVar2 + 0x50) != 0) {
    FlashEditableTextField__SetText(*(char **)(*(long *)(lVar2 + 0x50) + 0x50),"");
  }
  if (*(long *)(lVar2 + 0x58) != 0) {
    FlashEditableTextField__SetText(*(char **)(*(long *)(lVar2 + 0x58) + 0x50),"");
  }
  if (*(long *)(lVar2 + 0x60) != 0) {
    FlashEditableTextField__SetText(*(char **)(*(long *)(lVar2 + 0x60) + 0x50),"");
  }
  if (*(long *)(lVar2 + 0x68) != 0) {
    FlashEditableTextField__SetText(*(char **)(*(long *)(lVar2 + 0x68) + 0x50),"");
  }
  if (*(long *)(lVar2 + 0x70) != 0) {
    FlashEditableTextField__SetText(*(char **)(*(long *)(lVar2 + 0x70) + 0x50),"");
  }
  pCurrentVisibleForm = lVar2;
  *(uint32_t *)(lVar2 + 0xa8) = 1;
LAB_004a0774:
  if (*(long **)(lVar2 + 0x28) != (long *)0x0) {
    (**(code **)(**(long **)(lVar2 + 0x28) + 0x48))();
  }
  if (*(long **)(lVar2 + 0x30) != (long *)0x0) {
    (**(code **)(**(long **)(lVar2 + 0x30) + 0x48))();
  }
  if (*(long **)(lVar2 + 0x38) != (long *)0x0) {
    (**(code **)(**(long **)(lVar2 + 0x38) + 0x48))();
  }
  if (*(long **)(lVar2 + 0x40) != (long *)0x0) {
    (**(code **)(**(long **)(lVar2 + 0x40) + 0x48))();
  }
  if (*(long **)(lVar2 + 0x48) != (long *)0x0) {
    (**(code **)(**(long **)(lVar2 + 0x48) + 0x48))();
  }
  if (*(long **)(lVar2 + 0x50) != (long *)0x0) {
    (**(code **)(**(long **)(lVar2 + 0x50) + 0x48))();
  }
  if (*(long **)(lVar2 + 0x58) != (long *)0x0) {
    (**(code **)(**(long **)(lVar2 + 0x58) + 0x48))();
  }
  if (*(long **)(lVar2 + 0x60) != (long *)0x0) {
    (**(code **)(**(long **)(lVar2 + 0x60) + 0x48))();
  }
  if (*(long **)(lVar2 + 0x68) != (long *)0x0) {
    (**(code **)(**(long **)(lVar2 + 0x68) + 0x48))();
  }
  if (*(long **)(lVar2 + 0x70) != (long *)0x0) {
    (**(code **)(**(long **)(lVar2 + 0x70) + 0x48))();
  }
  if (*(long **)(lVar2 + 0x28) != (long *)0x0) {
    (**(code **)(**(long **)(lVar2 + 0x28) + 0x38))();
  }
  return;
}

/* ======================================================================
 * EditorForm_SaveFormOpen  (Ghidra `EditorForm_SaveFormOpen` @ 004a0830)
 * Signature: uint8_t __stdcall EditorForm_SaveFormOpen(void * arg1)
 * Calls: `Sprint`, `TKeyboard__BackupCallbacks`
 * Called by: `SMBEditor__SMBEditor__004ad010`
 */
/* EditorForm_SaveFormOpen(void*) */

void EditorForm_SaveFormOpen(void *arg1)

{
  InputCallback **ppIVar1;
  long lVar2;
  TKeyboard *this;
  long *plVar3;
  char acStack_28 [32];
  
  this = Keyboard;
  lVar2 = pEditorSaveForm;
  ppIVar1 = (InputCallback **)(pEditorSaveForm + 0xb0);
  *(uint64_t *)(pEditorSaveForm + 0xb0) = 0;
  TKeyboard__BackupCallbacks(this,ppIVar1);
  if (pCurrentVisibleForm == 0) {
    if (lVar2 == 0) goto LAB_004a0ac4;
  }
  else {
    if (lVar2 == pCurrentVisibleForm) goto LAB_004a0ac4;
    *(uint32_t *)(pCurrentVisibleForm + 0xac) = 1;
  }
  FlashAnimationLibrary__SetTextFieldText(*(char **)(lVar2 + 0x78),"formlabel",lVar2 + 0x88);
  plVar3 = *(long **)(lVar2 + 0x80);
  if (*plVar3 != 0) {
    Sprint("labeltext%i",acStack_28,1);
    FlashAnimationLibrary__SetTextFieldText
              (*(char **)(lVar2 + 0x78),acStack_28,**(uint64_t **)(lVar2 + 0x80));
    plVar3 = *(long **)(lVar2 + 0x80);
  }
  if (plVar3[1] != 0) {
    Sprint("labeltext%i",acStack_28,2);
    FlashAnimationLibrary__SetTextFieldText
              (*(char **)(lVar2 + 0x78),acStack_28,*(uint64_t *)(*(long *)(lVar2 + 0x80) + 8));
    plVar3 = *(long **)(lVar2 + 0x80);
  }
  if (plVar3[2] != 0) {
    Sprint("labeltext%i",acStack_28,3);
    FlashAnimationLibrary__SetTextFieldText
              (*(char **)(lVar2 + 0x78),acStack_28,*(uint64_t *)(*(long *)(lVar2 + 0x80) + 0x10));
    plVar3 = *(long **)(lVar2 + 0x80);
  }
  if (plVar3[3] != 0) {
    Sprint("labeltext%i",acStack_28,4);
    FlashAnimationLibrary__SetTextFieldText
              (*(char **)(lVar2 + 0x78),acStack_28,*(uint64_t *)(*(long *)(lVar2 + 0x80) + 0x18));
    plVar3 = *(long **)(lVar2 + 0x80);
  }
  if (plVar3[4] != 0) {
    Sprint("labeltext%i",acStack_28,5);
    FlashAnimationLibrary__SetTextFieldText
              (*(char **)(lVar2 + 0x78),acStack_28,*(uint64_t *)(*(long *)(lVar2 + 0x80) + 0x20));
  }
  if (*(long *)(lVar2 + 0x28) != 0) {
    FlashEditableTextField__SetText(*(char **)(*(long *)(lVar2 + 0x28) + 0x50),"");
  }
  if (*(long *)(lVar2 + 0x30) != 0) {
    FlashEditableTextField__SetText(*(char **)(*(long *)(lVar2 + 0x30) + 0x50),"");
  }
  if (*(long *)(lVar2 + 0x38) != 0) {
    FlashEditableTextField__SetText(*(char **)(*(long *)(lVar2 + 0x38) + 0x50),"");
  }
  if (*(long *)(lVar2 + 0x40) != 0) {
    FlashEditableTextField__SetText(*(char **)(*(long *)(lVar2 + 0x40) + 0x50),"");
  }
  if (*(long *)(lVar2 + 0x48) != 0) {
    FlashEditableTextField__SetText(*(char **)(*(long *)(lVar2 + 0x48) + 0x50),"");
  }
  if (*(long *)(lVar2 + 0x50) != 0) {
    FlashEditableTextField__SetText(*(char **)(*(long *)(lVar2 + 0x50) + 0x50),"");
  }
  if (*(long *)(lVar2 + 0x58) != 0) {
    FlashEditableTextField__SetText(*(char **)(*(long *)(lVar2 + 0x58) + 0x50),"");
  }
  if (*(long *)(lVar2 + 0x60) != 0) {
    FlashEditableTextField__SetText(*(char **)(*(long *)(lVar2 + 0x60) + 0x50),"");
  }
  if (*(long *)(lVar2 + 0x68) != 0) {
    FlashEditableTextField__SetText(*(char **)(*(long *)(lVar2 + 0x68) + 0x50),"");
  }
  if (*(long *)(lVar2 + 0x70) != 0) {
    FlashEditableTextField__SetText(*(char **)(*(long *)(lVar2 + 0x70) + 0x50),"");
  }
  pCurrentVisibleForm = lVar2;
  *(uint32_t *)(lVar2 + 0xa8) = 1;
LAB_004a0ac4:
  if (*(long **)(lVar2 + 0x28) != (long *)0x0) {
    (**(code **)(**(long **)(lVar2 + 0x28) + 0x48))();
  }
  if (*(long **)(lVar2 + 0x30) != (long *)0x0) {
    (**(code **)(**(long **)(lVar2 + 0x30) + 0x48))();
  }
  if (*(long **)(lVar2 + 0x38) != (long *)0x0) {
    (**(code **)(**(long **)(lVar2 + 0x38) + 0x48))();
  }
  if (*(long **)(lVar2 + 0x40) != (long *)0x0) {
    (**(code **)(**(long **)(lVar2 + 0x40) + 0x48))();
  }
  if (*(long **)(lVar2 + 0x48) != (long *)0x0) {
    (**(code **)(**(long **)(lVar2 + 0x48) + 0x48))();
  }
  if (*(long **)(lVar2 + 0x50) != (long *)0x0) {
    (**(code **)(**(long **)(lVar2 + 0x50) + 0x48))();
  }
  if (*(long **)(lVar2 + 0x58) != (long *)0x0) {
    (**(code **)(**(long **)(lVar2 + 0x58) + 0x48))();
  }
  if (*(long **)(lVar2 + 0x60) != (long *)0x0) {
    (**(code **)(**(long **)(lVar2 + 0x60) + 0x48))();
  }
  if (*(long **)(lVar2 + 0x68) != (long *)0x0) {
    (**(code **)(**(long **)(lVar2 + 0x68) + 0x48))();
  }
  if (*(long **)(lVar2 + 0x70) != (long *)0x0) {
    (**(code **)(**(long **)(lVar2 + 0x70) + 0x48))();
  }
  if (*(long **)(lVar2 + 0x28) != (long *)0x0) {
    (**(code **)(**(long **)(lVar2 + 0x28) + 0x38))();
  }
  return;
}

/* ======================================================================
 * EditorForm_NewFormOpen  (Ghidra `EditorForm_NewFormOpen` @ 004a0b80)
 * Signature: uint8_t __stdcall EditorForm_NewFormOpen(void * arg1)
 * Calls: `FlashEditableTextField__GetUITextField`, `Sprint`, `TKeyboard__BackupCallbacks`
 * Called by: `SMBEditor__SMBEditor__004ad010`
 */
/* WARNING: Removing unreachable block (ram,0x004a1020) */
/* EditorForm_NewFormOpen(void*) */

void EditorForm_NewFormOpen(void *arg1)

{
  InputCallback **ppIVar1;
  long lVar2;
  long lVar3;
  TKeyboard *this;
  ulong uVar4;
  long *plVar5;
  wchar_t *pwVar6;
  double dVar7;
  char local_48 [32];
  uint64_t local_28;
  uint64_t local_20;
  
  this = Keyboard;
  lVar3 = pEditorNewLevelForm;
  ppIVar1 = (InputCallback **)(pEditorNewLevelForm + 0xb0);
  *(uint64_t *)(pEditorNewLevelForm + 0xb0) = 0;
  TKeyboard__BackupCallbacks(this,ppIVar1);
  if (pCurrentVisibleForm == 0) {
    if (lVar3 == 0) goto LAB_004a0e29;
  }
  else {
    if (lVar3 == pCurrentVisibleForm) goto LAB_004a0e29;
    *(uint32_t *)(pCurrentVisibleForm + 0xac) = 1;
  }
  FlashAnimationLibrary__SetTextFieldText(*(char **)(lVar3 + 0x78),"formlabel",lVar3 + 0x88);
  plVar5 = *(long **)(lVar3 + 0x80);
  if (*plVar5 != 0) {
    Sprint("labeltext%i",local_48,1);
    FlashAnimationLibrary__SetTextFieldText
              (*(char **)(lVar3 + 0x78),local_48,**(uint64_t **)(lVar3 + 0x80));
    plVar5 = *(long **)(lVar3 + 0x80);
  }
  if (plVar5[1] != 0) {
    Sprint("labeltext%i",local_48,2);
    FlashAnimationLibrary__SetTextFieldText
              (*(char **)(lVar3 + 0x78),local_48,*(uint64_t *)(*(long *)(lVar3 + 0x80) + 8));
    plVar5 = *(long **)(lVar3 + 0x80);
  }
  if (plVar5[2] != 0) {
    Sprint("labeltext%i",local_48,3);
    FlashAnimationLibrary__SetTextFieldText
              (*(char **)(lVar3 + 0x78),local_48,*(uint64_t *)(*(long *)(lVar3 + 0x80) + 0x10));
    plVar5 = *(long **)(lVar3 + 0x80);
  }
  if (plVar5[3] != 0) {
    Sprint("labeltext%i",local_48,4);
    FlashAnimationLibrary__SetTextFieldText
              (*(char **)(lVar3 + 0x78),local_48,*(uint64_t *)(*(long *)(lVar3 + 0x80) + 0x18));
    plVar5 = *(long **)(lVar3 + 0x80);
  }
  if (plVar5[4] != 0) {
    Sprint("labeltext%i",local_48,5);
    FlashAnimationLibrary__SetTextFieldText
              (*(char **)(lVar3 + 0x78),local_48,*(uint64_t *)(*(long *)(lVar3 + 0x80) + 0x20));
  }
  if (*(long *)(lVar3 + 0x28) != 0) {
    FlashEditableTextField__SetText(*(char **)(*(long *)(lVar3 + 0x28) + 0x50),"");
  }
  if (*(long *)(lVar3 + 0x30) != 0) {
    FlashEditableTextField__SetText(*(char **)(*(long *)(lVar3 + 0x30) + 0x50),"");
  }
  if (*(long *)(lVar3 + 0x38) != 0) {
    FlashEditableTextField__SetText(*(char **)(*(long *)(lVar3 + 0x38) + 0x50),"");
  }
  if (*(long *)(lVar3 + 0x40) != 0) {
    FlashEditableTextField__SetText(*(char **)(*(long *)(lVar3 + 0x40) + 0x50),"");
  }
  if (*(long *)(lVar3 + 0x48) != 0) {
    FlashEditableTextField__SetText(*(char **)(*(long *)(lVar3 + 0x48) + 0x50),"");
  }
  if (*(long *)(lVar3 + 0x50) != 0) {
    FlashEditableTextField__SetText(*(char **)(*(long *)(lVar3 + 0x50) + 0x50),"");
  }
  if (*(long *)(lVar3 + 0x58) != 0) {
    FlashEditableTextField__SetText(*(char **)(*(long *)(lVar3 + 0x58) + 0x50),"");
  }
  if (*(long *)(lVar3 + 0x60) != 0) {
    FlashEditableTextField__SetText(*(char **)(*(long *)(lVar3 + 0x60) + 0x50),"");
  }
  if (*(long *)(lVar3 + 0x68) != 0) {
    FlashEditableTextField__SetText(*(char **)(*(long *)(lVar3 + 0x68) + 0x50),"");
  }
  if (*(long *)(lVar3 + 0x70) != 0) {
    FlashEditableTextField__SetText(*(char **)(*(long *)(lVar3 + 0x70) + 0x50),"");
  }
  pCurrentVisibleForm = lVar3;
  *(uint32_t *)(lVar3 + 0xa8) = 1;
LAB_004a0e29:
  if (*(long **)(lVar3 + 0x28) != (long *)0x0) {
    (**(code **)(**(long **)(lVar3 + 0x28) + 0x48))();
  }
  if (*(long **)(lVar3 + 0x30) != (long *)0x0) {
    (**(code **)(**(long **)(lVar3 + 0x30) + 0x48))();
  }
  if (*(long **)(lVar3 + 0x38) != (long *)0x0) {
    (**(code **)(**(long **)(lVar3 + 0x38) + 0x48))();
  }
  if (*(long **)(lVar3 + 0x40) != (long *)0x0) {
    (**(code **)(**(long **)(lVar3 + 0x40) + 0x48))();
  }
  if (*(long **)(lVar3 + 0x48) != (long *)0x0) {
    (**(code **)(**(long **)(lVar3 + 0x48) + 0x48))();
  }
  if (*(long **)(lVar3 + 0x50) != (long *)0x0) {
    (**(code **)(**(long **)(lVar3 + 0x50) + 0x48))();
  }
  if (*(long **)(lVar3 + 0x58) != (long *)0x0) {
    (**(code **)(**(long **)(lVar3 + 0x58) + 0x48))();
  }
  if (*(long **)(lVar3 + 0x60) != (long *)0x0) {
    (**(code **)(**(long **)(lVar3 + 0x60) + 0x48))();
  }
  if (*(long **)(lVar3 + 0x68) != (long *)0x0) {
    (**(code **)(**(long **)(lVar3 + 0x68) + 0x48))();
  }
  if (*(long **)(lVar3 + 0x70) != (long *)0x0) {
    (**(code **)(**(long **)(lVar3 + 0x70) + 0x48))();
  }
  if (*(long **)(lVar3 + 0x28) != (long *)0x0) {
    (**(code **)(**(long **)(lVar3 + 0x28) + 0x38))();
  }
  lVar3 = pEditorNewLevelForm;
  local_28 = 0x32;
  local_20 = 0x28;
  if (*(long *)(pEditorNewLevelForm + 0x28) != 0) {
    pwVar6 = (wchar_t *)
             FlashEditableTextField__GetUITextField
                       (*(FlashEditableTextField **)(*(long *)(pEditorNewLevelForm + 0x28) + 0x50));
    UITextField__SetDynamicText(pwVar6,&DAT_005c6660 /* R:5.184804318001823e-44f */,0x32);
    *(uint32_t *)(*(long *)(*(long *)(lVar3 + 0x28) + 0x50) + 0x48) = 1;
  }
  uVar4 = local_20;
  lVar2 = *(long *)(lVar3 + 0x30);
  if (lVar2 != 0) {
    if (local_20._4_1_ == '\x01') {
      dVar7 = (double)(float)local_20;
      pwVar6 = (wchar_t *)
               FlashEditableTextField__GetUITextField(*(FlashEditableTextField **)(lVar2 + 0x50));
      UITextField__SetDynamicText(pwVar6,dVar7,&DAT_005c07c4 /* R:5.184804318001823e-44f */);
    }
    else {
      pwVar6 = (wchar_t *)
               FlashEditableTextField__GetUITextField(*(FlashEditableTextField **)(lVar2 + 0x50));
      UITextField__SetDynamicText(pwVar6,&DAT_005c6660 /* R:5.184804318001823e-44f */,uVar4 & 0xffffffff);
    }
    *(uint32_t *)(*(long *)(*(long *)(lVar3 + 0x30) + 0x50) + 0x48) = 1;
  }
  if (*(long *)(lVar3 + 0x38) != 0) {
    *(uint32_t *)(*(long *)(*(long *)(lVar3 + 0x38) + 0x50) + 0x48) = 0;
  }
  if (*(long *)(lVar3 + 0x40) != 0) {
    *(uint32_t *)(*(long *)(*(long *)(lVar3 + 0x40) + 0x50) + 0x48) = 0;
  }
  if (*(long *)(lVar3 + 0x48) != 0) {
    *(uint32_t *)(*(long *)(*(long *)(lVar3 + 0x48) + 0x50) + 0x48) = 0;
  }
  if (*(long *)(lVar3 + 0x50) != 0) {
    *(uint32_t *)(*(long *)(*(long *)(lVar3 + 0x50) + 0x50) + 0x48) = 0;
  }
  if (*(long *)(lVar3 + 0x58) != 0) {
    *(uint32_t *)(*(long *)(*(long *)(lVar3 + 0x58) + 0x50) + 0x48) = 0;
  }
  if (*(long *)(lVar3 + 0x60) != 0) {
    *(uint32_t *)(*(long *)(*(long *)(lVar3 + 0x60) + 0x50) + 0x48) = 0;
  }
  if (*(long *)(lVar3 + 0x68) != 0) {
    *(uint32_t *)(*(long *)(*(long *)(lVar3 + 0x68) + 0x50) + 0x48) = 0;
  }
  if (*(long *)(lVar3 + 0x70) != 0) {
    *(uint32_t *)(*(long *)(*(long *)(lVar3 + 0x70) + 0x50) + 0x48) = 0;
  }
  return;
}

/* ======================================================================
 * EditorForm_LayerPropsOpen  (Ghidra `EditorForm_LayerPropsOpen` @ 004a10b0)
 * Signature: uint8_t __stdcall EditorForm_LayerPropsOpen(void * arg1)
 * Calls: `FlashEditableTextField__GetUITextField`, `Sprint`, `TKeyboard__BackupCallbacks`, `TileLevel__getLevelLayer`
 * Called by: `SMBEditor__SMBEditor__004ad010`, `ShowLayerProperties`
 */
/* WARNING: Removing unreachable block (ram,0x004a16b0) */
/* WARNING: Removing unreachable block (ram,0x004a1640) */
/* WARNING: Removing unreachable block (ram,0x004a1678) */
/* WARNING: Removing unreachable block (ram,0x004a15a2) */
/* EditorForm_LayerPropsOpen(void*) */

void EditorForm_LayerPropsOpen(void *arg1)

{
  InputCallback **ppIVar1;
  float fVar2;
  long lVar3;
  TKeyboard *this;
  long *plVar4;
  long lVar5;
  wchar_t *pwVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  char local_38 [40];
  
  this = Keyboard;
  lVar3 = pEditorLayerPropsForm;
  ppIVar1 = (InputCallback **)(pEditorLayerPropsForm + 0xb0);
  *(uint64_t *)(pEditorLayerPropsForm + 0xb0) = 0;
  TKeyboard__BackupCallbacks(this,ppIVar1);
  if (pCurrentVisibleForm == 0) {
    if (lVar3 == 0) goto LAB_004a1359;
  }
  else {
    if (lVar3 == pCurrentVisibleForm) goto LAB_004a1359;
    *(uint32_t *)(pCurrentVisibleForm + 0xac) = 1;
  }
  FlashAnimationLibrary__SetTextFieldText(*(char **)(lVar3 + 0x78),"formlabel",lVar3 + 0x88);
  plVar4 = *(long **)(lVar3 + 0x80);
  if (*plVar4 != 0) {
    Sprint("labeltext%i",local_38,1);
    FlashAnimationLibrary__SetTextFieldText
              (*(char **)(lVar3 + 0x78),local_38,**(uint64_t **)(lVar3 + 0x80));
    plVar4 = *(long **)(lVar3 + 0x80);
  }
  if (plVar4[1] != 0) {
    Sprint("labeltext%i",local_38,2);
    FlashAnimationLibrary__SetTextFieldText
              (*(char **)(lVar3 + 0x78),local_38,*(uint64_t *)(*(long *)(lVar3 + 0x80) + 8));
    plVar4 = *(long **)(lVar3 + 0x80);
  }
  if (plVar4[2] != 0) {
    Sprint("labeltext%i",local_38,3);
    FlashAnimationLibrary__SetTextFieldText
              (*(char **)(lVar3 + 0x78),local_38,*(uint64_t *)(*(long *)(lVar3 + 0x80) + 0x10));
    plVar4 = *(long **)(lVar3 + 0x80);
  }
  if (plVar4[3] != 0) {
    Sprint("labeltext%i",local_38,4);
    FlashAnimationLibrary__SetTextFieldText
              (*(char **)(lVar3 + 0x78),local_38,*(uint64_t *)(*(long *)(lVar3 + 0x80) + 0x18));
    plVar4 = *(long **)(lVar3 + 0x80);
  }
  if (plVar4[4] != 0) {
    Sprint("labeltext%i",local_38,5);
    FlashAnimationLibrary__SetTextFieldText
              (*(char **)(lVar3 + 0x78),local_38,*(uint64_t *)(*(long *)(lVar3 + 0x80) + 0x20));
  }
  if (*(long *)(lVar3 + 0x28) != 0) {
    FlashEditableTextField__SetText(*(char **)(*(long *)(lVar3 + 0x28) + 0x50),"");
  }
  if (*(long *)(lVar3 + 0x30) != 0) {
    FlashEditableTextField__SetText(*(char **)(*(long *)(lVar3 + 0x30) + 0x50),"");
  }
  if (*(long *)(lVar3 + 0x38) != 0) {
    FlashEditableTextField__SetText(*(char **)(*(long *)(lVar3 + 0x38) + 0x50),"");
  }
  if (*(long *)(lVar3 + 0x40) != 0) {
    FlashEditableTextField__SetText(*(char **)(*(long *)(lVar3 + 0x40) + 0x50),"");
  }
  if (*(long *)(lVar3 + 0x48) != 0) {
    FlashEditableTextField__SetText(*(char **)(*(long *)(lVar3 + 0x48) + 0x50),"");
  }
  if (*(long *)(lVar3 + 0x50) != 0) {
    FlashEditableTextField__SetText(*(char **)(*(long *)(lVar3 + 0x50) + 0x50),"");
  }
  if (*(long *)(lVar3 + 0x58) != 0) {
    FlashEditableTextField__SetText(*(char **)(*(long *)(lVar3 + 0x58) + 0x50),"");
  }
  if (*(long *)(lVar3 + 0x60) != 0) {
    FlashEditableTextField__SetText(*(char **)(*(long *)(lVar3 + 0x60) + 0x50),"");
  }
  if (*(long *)(lVar3 + 0x68) != 0) {
    FlashEditableTextField__SetText(*(char **)(*(long *)(lVar3 + 0x68) + 0x50),"");
  }
  if (*(long *)(lVar3 + 0x70) != 0) {
    FlashEditableTextField__SetText(*(char **)(*(long *)(lVar3 + 0x70) + 0x50),"");
  }
  pCurrentVisibleForm = lVar3;
  *(uint32_t *)(lVar3 + 0xa8) = 1;
LAB_004a1359:
  if (*(long **)(lVar3 + 0x28) != (long *)0x0) {
    (**(code **)(**(long **)(lVar3 + 0x28) + 0x48))();
  }
  if (*(long **)(lVar3 + 0x30) != (long *)0x0) {
    (**(code **)(**(long **)(lVar3 + 0x30) + 0x48))();
  }
  if (*(long **)(lVar3 + 0x38) != (long *)0x0) {
    (**(code **)(**(long **)(lVar3 + 0x38) + 0x48))();
  }
  if (*(long **)(lVar3 + 0x40) != (long *)0x0) {
    (**(code **)(**(long **)(lVar3 + 0x40) + 0x48))();
  }
  if (*(long **)(lVar3 + 0x48) != (long *)0x0) {
    (**(code **)(**(long **)(lVar3 + 0x48) + 0x48))();
  }
  if (*(long **)(lVar3 + 0x50) != (long *)0x0) {
    (**(code **)(**(long **)(lVar3 + 0x50) + 0x48))();
  }
  if (*(long **)(lVar3 + 0x58) != (long *)0x0) {
    (**(code **)(**(long **)(lVar3 + 0x58) + 0x48))();
  }
  if (*(long **)(lVar3 + 0x60) != (long *)0x0) {
    (**(code **)(**(long **)(lVar3 + 0x60) + 0x48))();
  }
  if (*(long **)(lVar3 + 0x68) != (long *)0x0) {
    (**(code **)(**(long **)(lVar3 + 0x68) + 0x48))();
  }
  if (*(long **)(lVar3 + 0x70) != (long *)0x0) {
    (**(code **)(**(long **)(lVar3 + 0x70) + 0x48))();
  }
  if (*(long **)(lVar3 + 0x28) != (long *)0x0) {
    (**(code **)(**(long **)(lVar3 + 0x28) + 0x38))();
  }
  lVar5 = TileLevel__getLevelLayer
                    (*(TileLevel **)(SuperMeatBoy + 0x40),*(uint32_t *)(SuperMeatBoyEditor + 0xd0)
                    );
  lVar3 = pEditorLayerPropsForm;
  fVar8 = *(float *)(lVar5 + 0x400) * DAT_005be898 /* R:255.0f */;
  fVar9 = *(float *)(lVar5 + 0x404) * DAT_005be898 /* R:255.0f */;
  fVar10 = *(float *)(lVar5 + 0x408) * DAT_005be898 /* R:255.0f */;
  fVar7 = DAT_005be898 /* R:255.0f */ * *(float *)(lVar5 + 0x40c);
  fVar2 = *(float *)(lVar5 + 0x410);
  if (*(long *)(pEditorLayerPropsForm + 0x28) != 0) {
    pwVar6 = (wchar_t *)
             FlashEditableTextField__GetUITextField
                       (*(FlashEditableTextField **)(*(long *)(pEditorLayerPropsForm + 0x28) + 0x50)
                       );
    UITextField__SetDynamicText(pwVar6,&DAT_005c6660 /* R:5.184804318001823e-44f */,(ulong)(uint)(int)fVar8);
    *(uint32_t *)(*(long *)(*(long *)(lVar3 + 0x28) + 0x50) + 0x48) = 1;
  }
  if (*(long *)(lVar3 + 0x30) != 0) {
    pwVar6 = (wchar_t *)
             FlashEditableTextField__GetUITextField
                       (*(FlashEditableTextField **)(*(long *)(lVar3 + 0x30) + 0x50));
    UITextField__SetDynamicText(pwVar6,&DAT_005c6660 /* R:5.184804318001823e-44f */,(ulong)(uint)(int)fVar9);
    *(uint32_t *)(*(long *)(*(long *)(lVar3 + 0x30) + 0x50) + 0x48) = 1;
  }
  if (*(long *)(lVar3 + 0x38) != 0) {
    pwVar6 = (wchar_t *)
             FlashEditableTextField__GetUITextField
                       (*(FlashEditableTextField **)(*(long *)(lVar3 + 0x38) + 0x50));
    UITextField__SetDynamicText(pwVar6,&DAT_005c6660 /* R:5.184804318001823e-44f */,(ulong)(uint)(int)fVar10);
    *(uint32_t *)(*(long *)(*(long *)(lVar3 + 0x38) + 0x50) + 0x48) = 1;
  }
  if (*(long *)(lVar3 + 0x40) != 0) {
    pwVar6 = (wchar_t *)
             FlashEditableTextField__GetUITextField
                       (*(FlashEditableTextField **)(*(long *)(lVar3 + 0x40) + 0x50));
    UITextField__SetDynamicText(pwVar6,&DAT_005c6660 /* R:5.184804318001823e-44f */,(ulong)(uint)(int)fVar7);
    *(uint32_t *)(*(long *)(*(long *)(lVar3 + 0x40) + 0x50) + 0x48) = 1;
  }
  if (*(long *)(lVar3 + 0x48) != 0) {
    pwVar6 = (wchar_t *)
             FlashEditableTextField__GetUITextField
                       (*(FlashEditableTextField **)(*(long *)(lVar3 + 0x48) + 0x50));
    UITextField__SetDynamicText(pwVar6,(double)fVar2,&DAT_005c07c4 /* R:5.184804318001823e-44f */);
    *(uint32_t *)(*(long *)(*(long *)(lVar3 + 0x48) + 0x50) + 0x48) = 1;
  }
  if (*(long *)(lVar3 + 0x50) != 0) {
    *(uint32_t *)(*(long *)(*(long *)(lVar3 + 0x50) + 0x50) + 0x48) = 0;
  }
  if (*(long *)(lVar3 + 0x58) != 0) {
    *(uint32_t *)(*(long *)(*(long *)(lVar3 + 0x58) + 0x50) + 0x48) = 0;
  }
  if (*(long *)(lVar3 + 0x60) != 0) {
    *(uint32_t *)(*(long *)(*(long *)(lVar3 + 0x60) + 0x50) + 0x48) = 0;
  }
  if (*(long *)(lVar3 + 0x68) != 0) {
    *(uint32_t *)(*(long *)(*(long *)(lVar3 + 0x68) + 0x50) + 0x48) = 0;
  }
  if (*(long *)(lVar3 + 0x70) != 0) {
    *(uint32_t *)(*(long *)(*(long *)(lVar3 + 0x70) + 0x50) + 0x48) = 0;
  }
  return;
}

/* ======================================================================
 * FillObjectInformationArray  (Ghidra `FillObjectInformationArray` @ 004a21e0)
 * Signature: uint8_t __stdcall FillObjectInformationArray(char * arg1)
 * Calls: `FlashAnimationLibrary__GetClipIndex`
 * Called by: `EditorForm_LoadFormOk`, `SMBEditor__LoadLevel`, `SMBEditor__NewLevel`
 */
/* FillObjectInformationArray(char const*) */

void FillObjectInformationArray(char *arg1)

{
  FlashAnimationLibrary *this;
  int iVar1;
  uint32_t uVar2;
  long lVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  uint8_t **ppuVar7;
  uint64_t *puVar8;
  bool bVar9;
  
  lVar3 = 10;
  bVar9 = &stack0x00000000 == (uint8_t *)0x28;
  pcVar5 = arg1;
  pcVar6 = "forest.lp";
  do {
    if (lVar3 == 0) break;
    lVar3 = lVar3 + -1;
    bVar9 = *pcVar5 == *pcVar6;
    pcVar5 = pcVar5 + 1;
    pcVar6 = pcVar6 + 1;
  } while (bVar9);
  if (!bVar9) {
    lVar3 = 0xc;
    pcVar5 = arg1;
    pcVar6 = "hospital.lp";
    do {
      if (lVar3 == 0) break;
      lVar3 = lVar3 + -1;
      bVar9 = *pcVar5 == *pcVar6;
      pcVar5 = pcVar5 + 1;
      pcVar6 = pcVar6 + 1;
    } while (bVar9);
    if (bVar9) {
      pCurrentObjectArray = &pHospitalObjectNames;
      iNumObjectArrayEntries = 0xd;
      ppuVar7 = &pHospitalObjectNames;
      goto LAB_004a2263;
    }
    lVar3 = 0xb;
    bVar9 = false;
    pcVar5 = arg1;
    pcVar6 = "factory.lp";
    do {
      if (lVar3 == 0) break;
      lVar3 = lVar3 + -1;
      bVar9 = *pcVar5 == *pcVar6;
      pcVar5 = pcVar5 + 1;
      pcVar6 = pcVar6 + 1;
    } while (bVar9);
    if (bVar9) {
      pCurrentObjectArray = (uint8_t **)pFactoryObjectNames;
      iNumObjectArrayEntries = 0x11;
      ppuVar7 = (uint8_t **)pFactoryObjectNames;
      goto LAB_004a2263;
    }
    lVar3 = 8;
    bVar9 = false;
    pcVar5 = arg1;
    pcVar6 = "hell.lp";
    do {
      if (lVar3 == 0) break;
      lVar3 = lVar3 + -1;
      bVar9 = *pcVar5 == *pcVar6;
      pcVar5 = pcVar5 + 1;
      pcVar6 = pcVar6 + 1;
    } while (bVar9);
    if (bVar9) {
      pCurrentObjectArray = (uint8_t **)pHellObjectNames;
      iNumObjectArrayEntries = 0x15;
      ppuVar7 = (uint8_t **)pHellObjectNames;
      goto LAB_004a2263;
    }
    lVar3 = 0xb;
    bVar9 = false;
    pcVar5 = arg1;
    pcVar6 = "rapture.lp";
    do {
      if (lVar3 == 0) break;
      lVar3 = lVar3 + -1;
      bVar9 = *pcVar5 == *pcVar6;
      pcVar5 = pcVar5 + 1;
      pcVar6 = pcVar6 + 1;
    } while (bVar9);
    if (bVar9) {
      pCurrentObjectArray = (uint8_t **)pRaptureObjectNames;
      iNumObjectArrayEntries = 0x10;
      ppuVar7 = (uint8_t **)pRaptureObjectNames;
      goto LAB_004a2263;
    }
    lVar3 = 7;
    bVar9 = false;
    pcVar5 = arg1;
    pcVar6 = "end.lp";
    do {
      if (lVar3 == 0) break;
      lVar3 = lVar3 + -1;
      bVar9 = *pcVar5 == *pcVar6;
      pcVar5 = pcVar5 + 1;
      pcVar6 = pcVar6 + 1;
    } while (bVar9);
    if (bVar9) {
      pCurrentObjectArray = (uint8_t **)pTheEndObjectNames;
      iNumObjectArrayEntries = 0xe;
      ppuVar7 = (uint8_t **)pTheEndObjectNames;
      goto LAB_004a2263;
    }
    lVar3 = 10;
    bVar9 = false;
    pcVar5 = arg1;
    pcVar6 = "retro1.lp";
    do {
      if (lVar3 == 0) break;
      lVar3 = lVar3 + -1;
      bVar9 = *pcVar5 == *pcVar6;
      pcVar5 = pcVar5 + 1;
      pcVar6 = pcVar6 + 1;
    } while (bVar9);
    if (bVar9) {
      pCurrentObjectArray = (uint8_t **)pRetroObjectNames;
      iNumObjectArrayEntries = 0xe;
      ppuVar7 = (uint8_t **)pRetroObjectNames;
      goto LAB_004a2263;
    }
    lVar3 = 9;
    bVar9 = false;
    pcVar5 = arg1;
    pcVar6 = "4bit1.lp";
    do {
      if (lVar3 == 0) break;
      lVar3 = lVar3 + -1;
      bVar9 = *pcVar5 == *pcVar6;
      pcVar5 = pcVar5 + 1;
      pcVar6 = pcVar6 + 1;
    } while (bVar9);
    if (bVar9) {
      pCurrentObjectArray = (uint8_t **)p4BitObjectNames;
      iNumObjectArrayEntries = 4;
      ppuVar7 = (uint8_t **)p4BitObjectNames;
      goto LAB_004a2263;
    }
    lVar3 = 6;
    bVar9 = false;
    pcVar5 = "gb.lp";
    do {
      if (lVar3 == 0) break;
      lVar3 = lVar3 + -1;
      bVar9 = *arg1 == *pcVar5;
      arg1 = arg1 + 1;
      pcVar5 = pcVar5 + 1;
    } while (bVar9);
    if (bVar9) {
      pCurrentObjectArray = (uint8_t **)pGameboyObjectNames;
      iNumObjectArrayEntries = 7;
      ppuVar7 = (uint8_t **)pGameboyObjectNames;
      goto LAB_004a2263;
    }
  }
  pCurrentObjectArray = (uint8_t **)pForestObjectNames;
  iNumObjectArrayEntries = 0xd;
  ppuVar7 = (uint8_t **)pForestObjectNames;
LAB_004a2263:
  lVar3 = 0;
  iVar4 = 0;
  this = *(FlashAnimationLibrary **)(GSuperMeatBoy__pLevelPalette + 0x88);
  do {
    puVar8 = (uint64_t *)((long)ppuVar7 + lVar3);
    iVar4 = iVar4 + 1;
    lVar3 = lVar3 + 0x18;
    uVar2 = FlashAnimationLibrary__GetClipIndex(this,(char *)*puVar8);
    iVar1 = iNumObjectArrayEntries;
    *(uint32_t *)(puVar8 + 2) = uVar2;
    ppuVar7 = pCurrentObjectArray;
  } while (iVar4 < iVar1);
  return;
}

/* ======================================================================
 * GetIDArrayIndex  (Ghidra `GetIDArrayIndex` @ 004a2420)
 * Signature: uint8_t __stdcall GetIDArrayIndex(int arg1)
 * Calls: (none)
 * Called by: (none)
 */
/* GetIDArrayIndex(int) */

int GetIDArrayIndex(int arg1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < iNumObjectArrayEntries) {
    iVar1 = *(int *)(pCurrentObjectArray + 0x10);
    lVar2 = pCurrentObjectArray;
    while (iVar1 != arg1) {
      iVar3 = iVar3 + 1;
      if (iVar3 == iNumObjectArrayEntries) {
        return 0;
      }
      iVar1 = *(int *)(lVar2 + 0x28);
      lVar2 = lVar2 + 0x18;
    }
  }
  return iVar3;
}

/* ======================================================================
 * GetNextID  (Ghidra `GetNextID` @ 004a2460)
 * Signature: uint8_t __stdcall GetNextID(int arg1, int arg2)
 * Calls: (none)
 * Called by: (none)
 */
/* GetNextID(int, int) */

int GetNextID(int arg1,int arg2)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  if (*(int *)(SuperMeatBoyEditor + 0xc0) != 5) {
    iVar3 = arg1 + 1;
    if (arg2 + -1 < iVar3) {
      return 0;
    }
    if (iVar3 < 0) {
      iVar3 = arg2 + -1;
    }
    return iVar3;
  }
  if (0 < iNumObjectArrayEntries) {
    if (arg1 == *(int *)(pCurrentObjectArray + 0x10)) {
LAB_004a24d0:
      lVar4 = 0;
      if (1 < iNumObjectArrayEntries) {
LAB_004a24d5:
        return *(int *)(pCurrentObjectArray + 0x10 + (lVar4 * 3 + 3) * 8);
      }
    }
    else {
      lVar2 = 1;
      lVar5 = pCurrentObjectArray;
      do {
        lVar4 = lVar2;
        if (iNumObjectArrayEntries <= (int)lVar4) goto LAB_004a24d0;
        piVar1 = (int *)(lVar5 + 0x28);
        lVar5 = lVar5 + 0x18;
        lVar2 = lVar4 + 1;
      } while (arg1 != *piVar1);
      if ((int)lVar4 + 1 < iNumObjectArrayEntries) goto LAB_004a24d5;
    }
  }
  return *(int *)(pCurrentObjectArray + 0x10);
}

/* ======================================================================
 * GetObjectFormDefaults  (Ghidra `GetObjectFormDefaults` @ 004a4380)
 * Signature: uint8_t __stdcall GetObjectFormDefaults(int arg1)
 * Calls: `strcmp`
 * Called by: `PlaceSetPiece`
 */
/* GetObjectFormDefaults(int) */

uint8_t ** GetObjectFormDefaults(int arg1)

{
  char *__s1;
  uint64_t *puVar1;
  int iVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  
  puVar4 = pCurrentObjectArray;
  if ((0 < iNumObjectArrayEntries) && (arg1 != *(int *)(pCurrentObjectArray + 2))) {
    puVar1 = pCurrentObjectArray + 3;
    do {
      puVar3 = puVar1;
      puVar4 = pCurrentObjectArray;
      if (puVar3 == pCurrentObjectArray + 3 + (ulong)(iNumObjectArrayEntries - 1) * 3) break;
      puVar1 = puVar3 + 3;
      puVar4 = puVar3;
    } while (arg1 != *(int *)(puVar3 + 2));
  }
  __s1 = (char *)*puVar4;
  iVar2 = strcmp(__s1,objectFormDefaults);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = strcmp(__s1,PTR_s_quake_00816018);
    if (iVar2 == 0) {
      iVar2 = 1;
    }
    else {
      iVar2 = strcmp(__s1,PTR_s_smoke_00816030);
      if (iVar2 == 0) {
        iVar2 = 2;
      }
      else {
        iVar2 = strcmp(__s1,PTR_s_shooter1_00816048);
        if (iVar2 == 0) {
          iVar2 = 3;
        }
        else {
          iVar2 = strcmp(__s1,PTR_s_shooter2_00816060);
          if (iVar2 == 0) {
            iVar2 = 4;
          }
          else {
            iVar2 = strcmp(__s1,PTR_s_cannon_00816078);
            if (iVar2 == 0) {
              iVar2 = 5;
            }
            else {
              iVar2 = strcmp(__s1,PTR_s_buttholeidle_00816090);
              if (iVar2 == 0) {
                iVar2 = 6;
              }
              else {
                iVar2 = strcmp(__s1,PTR_s_turret1idle_008160a8);
                if (iVar2 == 0) {
                  iVar2 = 7;
                }
                else {
                  iVar2 = strcmp(__s1,PTR_s_lazeroff_005c6e3d_6_008160c0);
                  if (iVar2 == 0) {
                    iVar2 = 8;
                  }
                  else {
                    iVar2 = strcmp(__s1,PTR_s_hominglazeron_008160d8);
                    if (iVar2 == 0) {
                      iVar2 = 9;
                    }
                    else {
                      iVar2 = strcmp(__s1,PTR_DAT_008160f0 /* R:8.464432671175376e-39f */);
                      if (iVar2 == 0) {
                        iVar2 = 10;
                      }
                      else {
                        iVar2 = strcmp(__s1,PTR_s_switchidle_00816108);
                        if (iVar2 == 0) {
                          iVar2 = 0xb;
                        }
                        else {
                          iVar2 = strcmp(__s1,PTR_DAT_00816120 /* R:8.46699704736509e-39f */);
                          if (iVar2 == 0) {
                            iVar2 = 0xc;
                          }
                          else {
                            iVar2 = strcmp(__s1,PTR_s_launcher2shoot_00816138);
                            if (iVar2 == 0) {
                              iVar2 = 0xd;
                            }
                            else {
                              iVar2 = strcmp(__s1,PTR_DAT_00816150 /* R:8.467023672035912e-39f */);
                              if (iVar2 == 0) {
                                iVar2 = 0xe;
                              }
                              else {
                                iVar2 = strcmp(__s1,PTR_s_defaultform_00816168);
                                if (iVar2 != 0) {
                                  return &PTR_s_defaultform_00816168;
                                }
                                iVar2 = 0xf;
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
          }
        }
      }
    }
  }
  return &objectFormDefaults + (long)iVar2 * 3;
}

/* ======================================================================
 * EditorForm_ObjectPropertiesOpen  (Ghidra `EditorForm_ObjectPropertiesOpen` @ 004a5ae0)
 * Signature: uint8_t __stdcall EditorForm_ObjectPropertiesOpen(void * arg1)
 * Calls: `FlashEditableTextField__GetUITextField`, `ShowLightProperties`, `ShowObstacleAnimalProps`, `Sprint`, `TKeyboard__BackupCallbacks`
 * Called by: `SMBEditor__SMBEditor__004ad010`
 */
/* EditorForm_ObjectPropertiesOpen(void*) */

void EditorForm_ObjectPropertiesOpen(void *arg1)

{
  InputCallback **ppIVar1;
  long lVar2;
  long lVar3;
  TKeyboard *this;
  float fVar4;
  long *plVar5;
  wchar_t *pwVar6;
  void *in_RSI;
  double dVar7;
  char local_48 [32];
  float local_28;
  uint8_t local_24;
  float local_20;
  char local_1c;
  
  this = Keyboard;
  lVar2 = pEditorCameraPropsForm;
  if (*(int *)(SuperMeatBoyEditor + 0xc0) == 6) {
    ShowLightProperties(arg1,in_RSI);
    return;
  }
  if (*(int *)(SuperMeatBoyEditor + 0xc0) != 3) {
    ShowObstacleAnimalProps(arg1,in_RSI);
    return;
  }
  ppIVar1 = (InputCallback **)(pEditorCameraPropsForm + 0xb0);
  *(uint64_t *)(pEditorCameraPropsForm + 0xb0) = 0;
  TKeyboard__BackupCallbacks(this,ppIVar1);
  if (pCurrentVisibleForm == 0) {
    if (lVar2 == 0) goto LAB_004a5db3;
  }
  else {
    if (lVar2 == pCurrentVisibleForm) goto LAB_004a5db3;
    *(uint32_t *)(pCurrentVisibleForm + 0xac) = 1;
  }
  FlashAnimationLibrary__SetTextFieldText(*(char **)(lVar2 + 0x78),"formlabel",lVar2 + 0x88);
  plVar5 = *(long **)(lVar2 + 0x80);
  if (*plVar5 != 0) {
    Sprint("labeltext%i",local_48,1);
    FlashAnimationLibrary__SetTextFieldText
              (*(char **)(lVar2 + 0x78),local_48,**(uint64_t **)(lVar2 + 0x80));
    plVar5 = *(long **)(lVar2 + 0x80);
  }
  if (plVar5[1] != 0) {
    Sprint("labeltext%i",local_48,2);
    FlashAnimationLibrary__SetTextFieldText
              (*(char **)(lVar2 + 0x78),local_48,*(uint64_t *)(*(long *)(lVar2 + 0x80) + 8));
    plVar5 = *(long **)(lVar2 + 0x80);
  }
  if (plVar5[2] != 0) {
    Sprint("labeltext%i",local_48,3);
    FlashAnimationLibrary__SetTextFieldText
              (*(char **)(lVar2 + 0x78),local_48,*(uint64_t *)(*(long *)(lVar2 + 0x80) + 0x10));
    plVar5 = *(long **)(lVar2 + 0x80);
  }
  if (plVar5[3] != 0) {
    Sprint("labeltext%i",local_48,4);
    FlashAnimationLibrary__SetTextFieldText
              (*(char **)(lVar2 + 0x78),local_48,*(uint64_t *)(*(long *)(lVar2 + 0x80) + 0x18));
    plVar5 = *(long **)(lVar2 + 0x80);
  }
  if (plVar5[4] != 0) {
    Sprint("labeltext%i",local_48,5);
    FlashAnimationLibrary__SetTextFieldText
              (*(char **)(lVar2 + 0x78),local_48,*(uint64_t *)(*(long *)(lVar2 + 0x80) + 0x20));
  }
  if (*(long *)(lVar2 + 0x28) != 0) {
    FlashEditableTextField__SetText(*(char **)(*(long *)(lVar2 + 0x28) + 0x50),"");
  }
  if (*(long *)(lVar2 + 0x30) != 0) {
    FlashEditableTextField__SetText(*(char **)(*(long *)(lVar2 + 0x30) + 0x50),"");
  }
  if (*(long *)(lVar2 + 0x38) != 0) {
    FlashEditableTextField__SetText(*(char **)(*(long *)(lVar2 + 0x38) + 0x50),"");
  }
  if (*(long *)(lVar2 + 0x40) != 0) {
    FlashEditableTextField__SetText(*(char **)(*(long *)(lVar2 + 0x40) + 0x50),"");
  }
  if (*(long *)(lVar2 + 0x48) != 0) {
    FlashEditableTextField__SetText(*(char **)(*(long *)(lVar2 + 0x48) + 0x50),"");
  }
  if (*(long *)(lVar2 + 0x50) != 0) {
    FlashEditableTextField__SetText(*(char **)(*(long *)(lVar2 + 0x50) + 0x50),"");
  }
  if (*(long *)(lVar2 + 0x58) != 0) {
    FlashEditableTextField__SetText(*(char **)(*(long *)(lVar2 + 0x58) + 0x50),"");
  }
  if (*(long *)(lVar2 + 0x60) != 0) {
    FlashEditableTextField__SetText(*(char **)(*(long *)(lVar2 + 0x60) + 0x50),"");
  }
  if (*(long *)(lVar2 + 0x68) != 0) {
    FlashEditableTextField__SetText(*(char **)(*(long *)(lVar2 + 0x68) + 0x50),"");
  }
  if (*(long *)(lVar2 + 0x70) != 0) {
    FlashEditableTextField__SetText(*(char **)(*(long *)(lVar2 + 0x70) + 0x50),"");
  }
  pCurrentVisibleForm = lVar2;
  *(uint32_t *)(lVar2 + 0xa8) = 1;
LAB_004a5db3:
  if (*(long **)(lVar2 + 0x28) != (long *)0x0) {
    (**(code **)(**(long **)(lVar2 + 0x28) + 0x48))();
  }
  if (*(long **)(lVar2 + 0x30) != (long *)0x0) {
    (**(code **)(**(long **)(lVar2 + 0x30) + 0x48))();
  }
  if (*(long **)(lVar2 + 0x38) != (long *)0x0) {
    (**(code **)(**(long **)(lVar2 + 0x38) + 0x48))();
  }
  if (*(long **)(lVar2 + 0x40) != (long *)0x0) {
    (**(code **)(**(long **)(lVar2 + 0x40) + 0x48))();
  }
  if (*(long **)(lVar2 + 0x48) != (long *)0x0) {
    (**(code **)(**(long **)(lVar2 + 0x48) + 0x48))();
  }
  if (*(long **)(lVar2 + 0x50) != (long *)0x0) {
    (**(code **)(**(long **)(lVar2 + 0x50) + 0x48))();
  }
  if (*(long **)(lVar2 + 0x58) != (long *)0x0) {
    (**(code **)(**(long **)(lVar2 + 0x58) + 0x48))();
  }
  if (*(long **)(lVar2 + 0x60) != (long *)0x0) {
    (**(code **)(**(long **)(lVar2 + 0x60) + 0x48))();
  }
  if (*(long **)(lVar2 + 0x68) != (long *)0x0) {
    (**(code **)(**(long **)(lVar2 + 0x68) + 0x48))();
  }
  if (*(long **)(lVar2 + 0x70) != (long *)0x0) {
    (**(code **)(**(long **)(lVar2 + 0x70) + 0x48))();
  }
  if (*(long **)(lVar2 + 0x28) != (long *)0x0) {
    (**(code **)(**(long **)(lVar2 + 0x28) + 0x38))();
  }
  lVar3 = pEditorCameraPropsForm;
  lVar2 = *(long *)(SuperMeatBoyEditor + 0x108);
  if (lVar2 != 0) {
    local_28 = *(float *)(lVar2 + 0x10);
    local_20 = *(float *)(lVar2 + 8);
    local_24 = 1;
    local_1c = '\x01';
    if (*(long *)(pEditorCameraPropsForm + 0x28) != 0) {
      dVar7 = (double)local_28;
      pwVar6 = (wchar_t *)
               FlashEditableTextField__GetUITextField
                         (*(FlashEditableTextField **)
                           (*(long *)(pEditorCameraPropsForm + 0x28) + 0x50));
      UITextField__SetDynamicText(pwVar6,dVar7,&DAT_005c07c4 /* R:5.184804318001823e-44f */);
      *(uint32_t *)(*(long *)(*(long *)(lVar3 + 0x28) + 0x50) + 0x48) = 1;
    }
    fVar4 = local_20;
    lVar2 = *(long *)(lVar3 + 0x30);
    if (lVar2 != 0) {
      if (local_1c == '\x01') {
        dVar7 = (double)local_20;
        pwVar6 = (wchar_t *)
                 FlashEditableTextField__GetUITextField(*(FlashEditableTextField **)(lVar2 + 0x50));
        UITextField__SetDynamicText(pwVar6,dVar7,&DAT_005c07c4 /* R:5.184804318001823e-44f */);
      }
      else {
        pwVar6 = (wchar_t *)
                 FlashEditableTextField__GetUITextField(*(FlashEditableTextField **)(lVar2 + 0x50));
        UITextField__SetDynamicText(pwVar6,&DAT_005c6660 /* R:5.184804318001823e-44f */,(ulong)(uint)fVar4);
      }
      *(uint32_t *)(*(long *)(*(long *)(lVar3 + 0x30) + 0x50) + 0x48) = 1;
    }
    if (*(long *)(lVar3 + 0x38) != 0) {
      *(uint32_t *)(*(long *)(*(long *)(lVar3 + 0x38) + 0x50) + 0x48) = 0;
    }
    if (*(long *)(lVar3 + 0x40) != 0) {
      *(uint32_t *)(*(long *)(*(long *)(lVar3 + 0x40) + 0x50) + 0x48) = 0;
    }
    if (*(long *)(lVar3 + 0x48) != 0) {
      *(uint32_t *)(*(long *)(*(long *)(lVar3 + 0x48) + 0x50) + 0x48) = 0;
    }
    if (*(long *)(lVar3 + 0x50) != 0) {
      *(uint32_t *)(*(long *)(*(long *)(lVar3 + 0x50) + 0x50) + 0x48) = 0;
    }
    if (*(long *)(lVar3 + 0x58) != 0) {
      *(uint32_t *)(*(long *)(*(long *)(lVar3 + 0x58) + 0x50) + 0x48) = 0;
    }
    if (*(long *)(lVar3 + 0x60) != 0) {
      *(uint32_t *)(*(long *)(*(long *)(lVar3 + 0x60) + 0x50) + 0x48) = 0;
    }
    if (*(long *)(lVar3 + 0x68) != 0) {
      *(uint32_t *)(*(long *)(*(long *)(lVar3 + 0x68) + 0x50) + 0x48) = 0;
    }
    if (*(long *)(lVar3 + 0x70) != 0) {
      *(uint32_t *)(*(long *)(*(long *)(lVar3 + 0x70) + 0x50) + 0x48) = 0;
    }
  }
  return;
}

/* ======================================================================
 * EditorPaletteButton_Over  (Ghidra `EditorPaletteButton_Over` @ 004a6210)
 * Signature: uint8_t __stdcall EditorPaletteButton_Over(void * arg1)
 * Calls: (none)
 * Called by: (none)
 */
/* EditorPaletteButton_Over(void*) */

void EditorPaletteButton_Over(void *arg1)

{
  return;
}

/* ======================================================================
 * EditorButton_SetTileMode  (Ghidra `EditorButton_SetTileMode` @ 004a6470)
 * Signature: uint8_t __stdcall EditorButton_SetTileMode(void * arg1)
 * Calls: `IsFlashFormActive`, `SMBEditor__SetToTileMode__004af960`
 * Called by: `SMBEditor__SMBEditor__004ad010`
 */
/* EditorButton_SetTileMode(void*) */

void EditorButton_SetTileMode(void *arg1)

{
  SMBEditor *this;
  int iVar1;
  
  this = SuperMeatBoyEditor;
  iVar1 = IsFlashFormActive();
  if (iVar1 != 1) {
    SMBEditor__SetToTileMode__004af960(this);
    return;
  }
  return;
}

/* ======================================================================
 * GetIDX  (Ghidra `GetIDX` @ 004a9510)
 * Signature: uint8_t __stdcall GetIDX(int arg1, int arg2, int * arg3)
 * Calls: (none)
 * Called by: (none)
 */
/* GetIDX(int, int, int const*) */

uint GetIDX(int arg1,int arg2,int *arg3)

{
  long lVar1;
  float fVar2;
  
  fVar2 = (float)*(ushort *)(*(long *)(SuperMeatBoy + 0x40) + 0x38) * DAT_005be6e8 /* R:0.25f */;
  lVar1 = (long)fVar2;
  if ((float)lVar1 < fVar2) {
    lVar1 = lVar1 + 1;
  }
  return arg3[((ulong)(long)arg1 >> 2) + (long)(arg2 * (int)lVar1)] >>
         ((byte)arg1 & 0x1f) & 1;
}

/* ======================================================================
 * FillSelected  (Ghidra `FillSelected` @ 004a9b40)
 * Signature: uint8_t __stdcall FillSelected(tagButtonProps * arg1, void * arg2)
 * Calls: `EditorButton__IsMouseOverButton`, `FillSelected_Selection`, `IsFlashFormActive`, `RunCommandOnSelection`, `SMBEditorForms__IsFormActive`
 * Called by: `SMBEditor__SetToTileMode`
 */
/* FillSelected(tagButtonProps const*, void*) */

void FillSelected(tagButtonProps *arg1,void *arg2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = SMBEditorForms__IsFormActive();
  uVar2 = IsFlashFormActive();
  if (pEditorButtons._40_2_ != 0) {
    uVar4 = 0;
    do {
      iVar3 = EditorButton__IsMouseOverButton
                        (*(EditorButton **)(pEditorButtons._56_8_ + (ulong)(uVar4 & 0xffff) * 8));
      if (iVar3 == 1) {
        if ((uVar1 | uVar2 | 1) != 0) {
          return;
        }
        goto LAB_004a9bd0;
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < (int)(uint)(ushort)pEditorButtons._40_2_);
  }
  FlashAnimationLibrary__SetTextFieldText(pEditorLib,"hotkey",&DAT_005ca3d2 /* R:u32=1931804704 */);
  if (uVar1 == 0 && uVar2 == 0) {
LAB_004a9bd0:
    if (*(int *)arg1 == 1) {
      RunCommandOnSelection(FillSelected_Selection);
      return;
    }
  }
  return;
}

/* ======================================================================
 * EditorForm_LoadFormOk  (Ghidra `EditorForm_LoadFormOk` @ 004af600)
 * Signature: uint8_t __stdcall EditorForm_LoadFormOk(void * arg1)
 * Calls: `AutoLockSection__AutoLockSection`, `AutoLockSection__AutoLockSection__005b59d0`, `ConvertWCHARtoTCHAR`, `CreateSMBBoss`, `FillObjectInformationArray`, `FlashEditableTextField__GetUITextField`, `GSMBMenu__IsInReplayMode`, `GSuperMeatBoy__SetCurrentLevel`, `GSuperMeatBoy__SetTilePalette`, `SMBEditor__SetLevelSize` (+4 more)
 * Called by: `SMBEditor__SMBEditor__004ad010`
 */
/* WARNING: Removing unreachable block (ram,0x004af92f) */
/* WARNING: Removing unreachable block (ram,0x004af91f) */
/* EditorForm_LoadFormOk(void*) */

void EditorForm_LoadFormOk(void *arg1)

{
  int *piVar1;
  SMBEditor *this;
  char *__s;
  int iVar2;
  long lVar3;
  TileLevel *pTVar4;
  uint64_t uVar5;
  char *local_68;
  uint64_t local_60;
  uint32_t local_58;
  AutoLockSection local_48 [16];
  char *local_38 [2];
  char *local_28;
  allocator local_1c;
  allocator local_1b [3];
  
  lVar3 = pEditorLoadForm;
  uVar5 = 0;
  *(uint32_t *)(pEditorLoadForm + 0xac) = 1;
  if (*(long *)(lVar3 + 0x28) != 0) {
    lVar3 = FlashEditableTextField__GetUITextField
                      (*(FlashEditableTextField **)(*(long *)(lVar3 + 0x28) + 0x50));
    uVar5 = *(uint64_t *)(lVar3 + 0x40);
  }
  ConvertWCHARtoTCHAR(uVar5,&strLargeString);
  __s = strLargeString;
  this = SuperMeatBoyEditor;
  AutoLockSection__AutoLockSection(local_48,(CriticalSection *)RenderLayers__MasterRenderSection);
  if (*(int *)(this + 0x110) == 1) {
                    /* try { // try from 004af84e to 004af852 has its CatchHandler @ 004af91a */
    CreateSMBBoss(iAutoCreateBossIndex);
  }
                    /* try { // try from 004af676 to 004af67a has its CatchHandler @ 004af91a */
  std__string_string((string *)local_38,"",&local_1c);
                    /* try { // try from 004af68a to 004af68e has its CatchHandler @ 004af92a */
  std__string_string((string *)&local_28,"Levels/",local_1b);
  local_68 = __s;
  local_60 = 0;
  local_58 = 0;
  if (__s != (char *)0x0) {
    strlen(__s);
                    /* try { // try from 004af6bc to 004af7af has its CatchHandler @ 004af8f1 */
    std__string_append((char *)&local_28,(ulong)__s);
    std__string_append((char *)&local_28,0x5c1d1c);
    TileLevelLightMap__Reset(*(TileLevelLightMap **)(SuperMeatBoy + 0x390));
    local_68 = local_28;
  }
  TileLevel__GetPaletteFromLevelFile((TileLevelLoad *)&local_68,(string *)local_38);
  iVar2 = std__string_compare((char *)local_38);
  if (iVar2 != 0) {
                    /* try { // try from 004af7fc to 004af83d has its CatchHandler @ 004af8f1 */
    GSuperMeatBoy__SetTilePalette(SuperMeatBoy,local_38[0]);
  }
  if ((*(int *)(SuperMeatBoy + 0x3a4) == 0) &&
     (iVar2 = GSMBMenu__IsInReplayMode(SMBMenu), iVar2 == 0)) {
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
    SMBEditor__SetLevelSize(this,*(ushort *)(pTVar4 + 0x38),*(ushort *)(pTVar4 + 0x3a));
    GSuperMeatBoy__SetCurrentLevel(SuperMeatBoy,pTVar4);
  }
  if (*(int *)(SuperMeatBoy + 0x2c) == 1) {
                    /* try { // try from 004af867 to 004af899 has its CatchHandler @ 004af8f1 */
    RenderLayers__RemoveLayer(SMBEditorLayer);
    RenderLayers__AddLayer(SMBEditorLayer);
  }
  if (__s != (char *)0x0) {
    strlen(__s);
    std__string_assign((char *)(this + 0x100),(ulong)__s);
  }
  if ((allocator *)(local_28 + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage) {
    LOCK();
    piVar1 = (int *)(local_28 + -8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 < 1) {
      std__string_Rep_M_destroy((allocator *)(local_28 + -0x18));
    }
  }
  if ((allocator *)(local_38[0] + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage) {
    LOCK();
    piVar1 = (int *)(local_38[0] + -8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 < 1) {
      std__string_Rep_M_destroy((allocator *)(local_38[0] + -0x18));
    }
  }
  AutoLockSection__AutoLockSection__005b59d0(local_48);
  return;
}

/* ======================================================================
 * EditorButton_SetSetPieceMode  (Ghidra `EditorButton_SetSetPieceMode` @ 004affc0)
 * Signature: uint8_t __stdcall EditorButton_SetSetPieceMode(void * arg1)
 * Calls: `SMBEditor__SetToSetPieceMode`
 * Called by: `SMBEditor__SMBEditor__004ad010`
 */
/* EditorButton_SetSetPieceMode(void*) */

void EditorButton_SetSetPieceMode(void *arg1)

{
  SMBEditor__SetToSetPieceMode(SuperMeatBoyEditor);
  return;
}

/* ======================================================================
 * EditorForm_NewFormOk  (Ghidra `EditorForm_NewFormOk` @ 004b4c10)
 * Signature: uint8_t __stdcall EditorForm_NewFormOk(void * arg1)
 * Calls: `FlashEditableTextField__GetUITextField`, `SMBEditor__NewLevel`, `StringToIntW`
 * Called by: `SMBEditor__SMBEditor__004ad010`
 */
/* EditorForm_NewFormOk(void*) */

void EditorForm_NewFormOk(void *arg1)

{
  ushort uVar1;
  ushort uVar2;
  long lVar3;
  uint uVar4;
  uint64_t uVar5;
  uint uVar6;
  
  uVar5 = 0;
  if (*(long *)(pEditorNewLevelForm + 0x28) != 0) {
    lVar3 = FlashEditableTextField__GetUITextField
                      (*(FlashEditableTextField **)(*(long *)(pEditorNewLevelForm + 0x28) + 0x50));
    uVar5 = *(uint64_t *)(lVar3 + 0x40);
  }
  uVar1 = StringToIntW(uVar5);
  uVar5 = 0;
  if (*(long *)(pEditorNewLevelForm + 0x30) != 0) {
    lVar3 = FlashEditableTextField__GetUITextField
                      (*(FlashEditableTextField **)(*(long *)(pEditorNewLevelForm + 0x30) + 0x50));
    uVar5 = *(uint64_t *)(lVar3 + 0x40);
  }
  uVar2 = StringToIntW(uVar5);
  lVar3 = *(long *)(pEditorNewLevelForm + 0x108);
  uVar6 = 2;
  if (lVar3 != *(long *)(pEditorNewLevelForm + 200)) {
    uVar6 = (uint)(lVar3 == *(long *)(pEditorNewLevelForm + 0xc0));
  }
  uVar4 = 3;
  if (lVar3 != *(long *)(pEditorNewLevelForm + 0xd0)) {
    uVar4 = uVar6;
  }
  uVar6 = 4;
  if (lVar3 != *(long *)(pEditorNewLevelForm + 0xd8)) {
    uVar6 = uVar4;
  }
  uVar4 = 5;
  if (lVar3 != *(long *)(pEditorNewLevelForm + 0xe0)) {
    uVar4 = uVar6;
  }
  uVar6 = 6;
  if (lVar3 != *(long *)(pEditorNewLevelForm + 0xe8)) {
    uVar6 = uVar4;
  }
  uVar4 = 7;
  if (lVar3 != *(long *)(pEditorNewLevelForm + 0xf0)) {
    uVar4 = uVar6;
  }
  uVar6 = 8;
  if (lVar3 != *(long *)(pEditorNewLevelForm + 0xf8)) {
    uVar6 = uVar4;
  }
  uVar4 = 9;
  if (lVar3 != *(long *)(pEditorNewLevelForm + 0x100)) {
    uVar4 = uVar6;
  }
  SMBEditor__NewLevel(SuperMeatBoyEditor,uVar1,uVar2,
                      *(char **)(EditorFormNewLevel__GetSelectedPalette()::strPaletteNames +
                                (long)(int)uVar4 * 8));
  *(uint32_t *)(pEditorNewLevelForm + 0xac) = 1;
  return;
}

/* ======================================================================
 * EditorForm_UploadFormOk  (Ghidra `EditorForm_UploadFormOk` @ 004b52a0)
 * Signature: uint8_t __stdcall EditorForm_UploadFormOk(void * arg1)
 * Calls: `ConvertWCHARtoTCHAR`, `CreateMessage`, `File__File`, `File__File__005b7a70`, `FlashEditableTextField__GetUITextField`, `GetLocalizedText`, `SMBEditor__SaveLevel`, `SMBLevelPortal__UploadPortalLevel`, `UserAlertCloseCurrent`, `free` (+2 more)
 * Called by: `SMBEditor__SMBEditor__004ad010`
 */
/* EditorForm_UploadFormOk(void*) */

void EditorForm_UploadFormOk(void *arg1)

{
  File *pFVar1;
  long lVar2;
  uint64_t uVar3;
  uint32_t local_d8 [2];
  wchar_t *local_d0;
  wchar_t *local_c8;
  uint64_t local_c0;
  uint64_t local_b8;
  code *local_b0;
  uint64_t local_a8;
  uint64_t local_a0;
  uint64_t local_98;
  uint64_t local_90;
  uint64_t local_88;
  uint64_t local_80;
  uint64_t local_78;
  uint64_t local_70;
  char *local_68;
  uint8_t *local_60;
  uint32_t local_58;
  uint64_t local_50;
  uint32_t local_48;
  uint32_t local_44;
  uint32_t local_40;
  uint32_t local_3c;
  uint32_t local_38;
  uint32_t local_34;
  uint8_t *local_30;
  File *local_28;
  void *local_20;
  void *local_18 [2];
  
  bEditorTmpLevelSave = 1;
  SMBEditor__SaveLevel(SuperMeatBoyEditor,"editorUpload",0);
  local_58 = 2;
  local_50 = 0;
  local_48 = 0;
  local_44 = 1;
  local_40 = 1;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = &DAT_005c04cf /* R:7.374579797039071e-39f */;
  local_68 = strEditorTmpLevelFile;
  local_60 = &DAT_005c328c /* R:u32=1811964530 */;
  pFVar1 = operator_new(0x30);
                    /* try { // try from 004b535d to 004b5361 has its CatchHandler @ 004b54bf */
  File__File(pFVar1,(tagFileCreation *)&local_68);
  uVar3 = 0;
  local_18[0] = (void *)0x0;
  local_28 = pFVar1;
  if (*(long *)(pEditorUploadForm + 0x28) != 0) {
    lVar2 = FlashEditableTextField__GetUITextField
                      (*(FlashEditableTextField **)(*(long *)(pEditorUploadForm + 0x28) + 0x50));
    uVar3 = *(uint64_t *)(lVar2 + 0x40);
  }
  ConvertWCHARtoTCHAR(uVar3,local_18);
  local_20 = local_18[0];
  SMBLevelPortal__UploadPortalLevel(SuperMeatBoyPortal,(SMBPortalUpload *)&local_28);
  pFVar1 = local_28;
  if (local_28 != (File *)0x0) {
    File__File__005b7a70(local_28);
    operator_delete(pFVar1);
  }
  bEditorTmpLevelSave = 0;
  File__DeleteFile(strEditorTmpLevelFile);
  free(local_18[0]);
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = (code *)0x0;
  local_a8 = 0;
  local_a0 = 0;
  *(uint32_t *)(pEditorUploadForm + 0xac) = 1;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_d0 = L"Level Uploaded";
  local_c8 = L"Your Level has been uploaded";
  local_d8[0] = 0xe;
  local_c0 = GetLocalizedText(4);
  local_b0 = UserAlertCloseCurrent;
  CreateMessage(local_d8);
  return;
}

/* ======================================================================
 * EditorForm_SaveFormOk  (Ghidra `EditorForm_SaveFormOk` @ 004b54e0)
 * Signature: uint8_t __stdcall EditorForm_SaveFormOk(void * arg1)
 * Calls: `ConvertWCHARtoTCHAR`, `FlashEditableTextField__GetUITextField`, `SMBEditor__SaveLevel`
 * Called by: `SMBEditor__SMBEditor__004ad010`
 */
/* EditorForm_SaveFormOk(void*) */

void EditorForm_SaveFormOk(void *arg1)

{
  long lVar1;
  uint64_t uVar2;
  
  lVar1 = pEditorSaveForm;
  uVar2 = 0;
  *(uint32_t *)(pEditorSaveForm + 0xac) = 1;
  if (*(long *)(lVar1 + 0x28) != 0) {
    lVar1 = FlashEditableTextField__GetUITextField
                      (*(FlashEditableTextField **)(*(long *)(lVar1 + 0x28) + 0x50));
    uVar2 = *(uint64_t *)(lVar1 + 0x40);
  }
  ConvertWCHARtoTCHAR(uVar2,&strLargeString);
  SMBEditor__SaveLevel(SuperMeatBoyEditor,strLargeString,0);
  return;
}

/* ======================================================================
 * GetHalfTileOrientation  (Ghidra `GetHalfTileOrientation` @ 004db120)
 * Signature: uint8_t __stdcall GetHalfTileOrientation(GRIDBLOCK * arg1, Vector2 * arg2)
 * Calls: (none)
 * Called by: `BloodyTiles__AddBloodyTile`, `GetHalfTileOrientation__004e59a0`, `SMBPalette__GetCollisionMask`, `SMBPalette__MarkCollisionOnBlock`
 */
/* GetHalfTileOrientation(GRIDBLOCK const&, Vector2 const&) [clone .part.73] */

char GetHalfTileOrientation(GRIDBLOCK *arg1,Vector2 *arg2)

{
  byte bVar1;
  Matrix4x4 aMStack_88 [64];
  uint32_t local_48;
  float local_44;
  uint32_t local_38;
  uint32_t local_34;
  float local_28;
  float local_24;
  float local_18 [4];
  
  local_48 = 0;
  local_44 = DAT_005be6e8 /* R:0.25f */ * TileLevel__fLevelGridWH;
  local_18[0] = 0.0;
  bVar1 = (byte)arg1[1] >> 4 & 3;
  if (bVar1 == 2) {
    local_18[0] = 3.1415927;
  }
  else if (bVar1 == 3) {
    local_18[0] = -1.5707964;
  }
  else if (bVar1 == 1) {
    local_18[0] = 1.5707964;
  }
  bVar1 = (byte)arg1[1] >> 6;
  local_38 = 0x3f800000;
  local_34 = 0x3f800000;
  if (bVar1 != 2) {
    if (bVar1 != 3) {
      if (bVar1 == 1) {
        local_38 = 0xbf800000;
      }
      goto LAB_004db19e;
    }
    local_38 = 0xbf800000;
  }
  local_34 = 0xbf800000;
LAB_004db19e:
  Matrix4x4__Transformation2DRot(aMStack_88,(Vector2 *)&local_38,local_18,arg2);
  Matrix4x4__TransformVector2((Vector2 *)&local_28,(Vector2 *)&local_48,aMStack_88,1);
  if (local_24 == *(float *)(arg2 + 4)) {
    return (*(float *)arg2 <= local_28 && local_28 != *(float *)arg2) + '\x02';
  }
  return local_24 <= *(float *)(arg2 + 4);
}

/* ======================================================================
 * GetBreakableBlockAnim  (Ghidra `GetBreakableBlockAnim` @ 004df750)
 * Signature: uint8_t GetBreakableBlockAnim(void)
 * Calls: (none)
 * Called by: (none)
 */
uint32_t GetBreakableBlockAnim(int arg1)

{
  if (*(int *)(pPalProps + 4) == arg1) {
    return *(uint32_t *)(pPalProps + 8);
  }
  if (*(int *)(pPalProps + 0xc) != arg1) {
    if (*(int *)(pPalProps + 0x28) != arg1) {
      return *(uint32_t *)(pPalProps + 0x54);
    }
    return *(uint32_t *)(pPalProps + 0x2c);
  }
  return *(uint32_t *)(pPalProps + 0x10);
}

/* ======================================================================
 * GetHalfTileOrientation__004e59a0  (Ghidra `GetHalfTileOrientation` @ 004e59a0)
 * Signature: uint8_t __stdcall GetHalfTileOrientation(GRIDBLOCK * arg1, Vector2 * arg2)
 * Calls: `GetHalfTileOrientation`
 * Called by: (none)
 */
/* GetHalfTileOrientation(GRIDBLOCK const&, Vector2 const&) */

uint64_t GetHalfTileOrientation(GRIDBLOCK *arg1,Vector2 *arg2)

{
  uint64_t uVar1;
  
  if (((byte)arg1[2] & 0xc) != 4) {
    return 5;
  }
  uVar1 = GetHalfTileOrientation(arg1,arg2);
  return uVar1;
}

/* ======================================================================
 * FillPortalInterfaceElement  (Ghidra `FillPortalInterfaceElement` @ 0050a620)
 * Signature: uint8_t __stdcall FillPortalInterfaceElement(SQLQuery * arg1, PortalInterfaceElement * arg2, FlashTextField * arg3, int arg4, int arg5)
 * Calls: `SQLResultSet__GetINT`, `SQLResultSet__GetString`, `strlen`
 * Called by: `SMBLevelPortalInterface__FillList`
 */
/* FillPortalInterfaceElement(SQLQuery&, SMBLevelPortalInterface__PortalInterfaceElement,
   FlashTextField*, int, int) */

void FillPortalInterfaceElement
               (SQLQuery *arg1,PortalInterfaceElement *arg2,FlashTextField *arg3,
               int arg4,int arg5)

{
  char *pcVar1;
  size_t sVar2;
  char *local_d8;
  uint32_t local_d0;
  char *local_c8;
  uint32_t local_c0;
  char *local_b8;
  uint32_t local_b0;
  char *local_a8;
  uint32_t local_a0;
  char *local_98;
  uint32_t local_90;
  char *local_88;
  uint32_t local_80;
  char *local_78;
  uint32_t local_70;
  char *local_68;
  uint32_t local_60;
  char *local_50;
  int local_48 [4];
  int local_38 [2];
  int local_30;
  int local_2c [3];
  
  local_d0 = 0xffffffff;
  local_c0 = 0xffffffff;
  if (arg4 == 1) {
    local_48[0] = 0;
    local_30 = 0;
    local_38[0] = 0;
    local_2c[0] = 0;
    local_d8 = "levelname";
    local_c8 = "level_id";
    local_b0 = 0xffffffff;
    local_b8 = "palette";
    SQLResultSet__GetINT
              (*(SQLResultSet **)(arg1 + 0x10),(SQLFieldName *)&local_b8,(int *)(arg2 + 0x290)
               ,(uint *)0x0);
    local_a0 = 0xffffffff;
    local_a8 = "times_died";
    SQLResultSet__GetINT
              (*(SQLResultSet **)(arg1 + 0x10),(SQLFieldName *)&local_a8,local_38,(uint *)0x0);
    local_90 = 0xffffffff;
    local_98 = "times_played";
    SQLResultSet__GetINT
              (*(SQLResultSet **)(arg1 + 0x10),(SQLFieldName *)&local_98,local_2c,(uint *)0x0);
    if (local_2c[0] < 1) {
      *(uint32_t *)(arg2 + 0x298) = 0;
    }
    else {
      *(float *)(arg2 + 0x298) = (float)local_38[0] / (float)local_2c[0];
    }
    local_80 = 0xffffffff;
    local_88 = "raw_fun_ratings";
    SQLResultSet__GetINT
              (*(SQLResultSet **)(arg1 + 0x10),(SQLFieldName *)&local_88,local_48,(uint *)0x0);
    local_70 = 0xffffffff;
    local_78 = "num_fun_ratings";
    SQLResultSet__GetINT
              (*(SQLResultSet **)(arg1 + 0x10),(SQLFieldName *)&local_78,&local_30,(uint *)0x0);
    if (local_30 < 1) {
      *(uint32_t *)(arg2 + 0x29c) = 0;
    }
    else {
      *(float *)(arg2 + 0x29c) = (float)local_48[0] / (float)local_30;
    }
    local_60 = 0xffffffff;
    local_68 = "char_id";
    SQLResultSet__GetINT
              (*(SQLResultSet **)(arg1 + 0x10),(SQLFieldName *)&local_68,(int *)(arg2 + 0x294)
               ,(uint *)0x0);
  }
  else {
    local_d8 = "chaptername";
    local_c8 = "chapter_id";
    local_60 = 0xffffffff;
    local_68 = "palette";
    SQLResultSet__GetINT
              (*(SQLResultSet **)(arg1 + 0x10),(SQLFieldName *)&local_68,(int *)(arg2 + 0x290)
               ,(uint *)0x0);
    local_70 = 0xffffffff;
    local_78 = "char_id";
    SQLResultSet__GetINT
              (*(SQLResultSet **)(arg1 + 0x10),(SQLFieldName *)&local_78,(int *)(arg2 + 0x294)
               ,(uint *)0x0);
  }
  SQLResultSet__GetString
            (*(SQLResultSet **)(arg1 + 0x10),(SQLFieldName *)&local_d8,&local_50,(uint *)0x0);
  SQLResultSet__GetINT
            (*(SQLResultSet **)(arg1 + 0x10),(SQLFieldName *)&local_c8,(int *)arg2,(uint *)0x0
            );
  pcVar1 = local_50;
  sVar2 = strlen(local_50);
  if (0x10 < (int)sVar2) {
    pcVar1[0xf] = '\0';
  }
  FlashTextField__SetText((char *)arg3,pcVar1);
  *(int *)(arg2 + 0x2a0) = arg4;
  if (local_50 != (char *)0x0) {
    operator_delete__(local_50);
  }
  return;
}

/* ======================================================================
 * FormatValueIntoJoystickButton  (Ghidra `FormatValueIntoJoystickButton` @ 005146a0)
 * Signature: uint8_t __stdcall FormatValueIntoJoystickButton(PropertyVariable * arg1)
 * Calls: `StringToInt`
 * Called by: (none)
 */
/* FormatValueIntoJoystickButton(PropertyBlock__PropertyVariable) */

int FormatValueIntoJoystickButton(PropertyVariable *arg1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = StringToInt(arg1 + 0x20);
  iVar2 = 0;
  if (1 < iVar1) {
    iVar1 = StringToInt(arg1 + 0x20);
    iVar1 = iVar1 + -1;
    if ((-1 < iVar1) && (iVar2 = 0xb, iVar1 < 0xc)) {
      iVar2 = iVar1;
    }
  }
  return iVar2;
}

/* ======================================================================
 * FormatValueIntoKeyboardKey  (Ghidra `FormatValueIntoKeyboardKey` @ 005146f0)
 * Signature: uint8_t __stdcall FormatValueIntoKeyboardKey(PropertyVariable * arg1)
 * Calls: `FormatStringToKeyboardKey`
 * Called by: (none)
 */
/* FormatValueIntoKeyboardKey(PropertyBlock__PropertyVariable) */

void FormatValueIntoKeyboardKey(PropertyVariable *arg1)

{
  FormatStringToKeyboardKey((char *)(arg1 + 0x20));
  return;
}

/* ======================================================================
 * FreeBridge  (Ghidra `FreeBridge` @ 00519830)
 * Signature: uint8_t FreeBridge(void)
 * Calls: (none)
 * Called by: `FreeBridge__0052b7b0`, `FreeBridge__005390b0`, `MOJOSHADER_assemble`, `MOJOSHADER_parse`, `MOJOSHADER_preprocess`, `emit_ARB1_DEF`, `emit_ARB1_DEFB`, `emit_ARB1_DEFI`, `emit_ARB1_LABEL`, `emit_ARB1_RET` (+27 more)
 */
void FreeBridge(uint64_t arg1,long arg2)

{
                    /* WARNING: Could not recover jumptable at 0x0051983b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(arg2 + 0x10))(arg1,*(uint64_t *)(arg2 + 0x18));
  return;
}

/* ======================================================================
 * FreeBridge__0052b7b0  (Ghidra `FreeBridge` @ 0052b7b0)
 * Signature: uint8_t FreeBridge(void)
 * Calls: `FreeBridge`
 * Called by: (none)
 */
void FreeBridge(uint64_t arg1,long arg2)

{
                    /* WARNING: Could not recover jumptable at 0x0052b7bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(arg2 + 0x10))(arg1,*(uint64_t *)(arg2 + 0x18));
  return;
}

/* ======================================================================
 * FreeBridge__005390b0  (Ghidra `FreeBridge` @ 005390b0)
 * Signature: uint8_t FreeBridge(void)
 * Calls: `FreeBridge`
 * Called by: (none)
 */
void FreeBridge(uint64_t arg1,long arg2)

{
                    /* WARNING: Could not recover jumptable at 0x005390c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(arg2 + 0x968))(arg1,*(uint64_t *)(arg2 + 0x970));
  return;
}

/* ======================================================================
 * FindVoice  (Ghidra `FindVoice` @ 0053e280)
 * Signature: uint8_t FindVoice(void)
 * Calls: (none)
 * Called by: (none)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* FindVoice() */

uint32_t * FindVoice(void)

{
  long lVar1;
  
  lVar1 = 0;
  do {
    if ((&pVoices)[lVar1 * 8] == 0) {
      (&DAT_0081cedc /* R:2.2958888052482446e-39f */)[(long)(int)lVar1 * 8] = 0;
      return &pVoices + (long)(int)lVar1 * 8;
    }
    lVar1 = lVar1 + 1;
  } while (lVar1 != 200);
  return (uint32_t *)0x0;
}

/* ======================================================================
 * GetBounds  (Ghidra `GetBounds` @ 00571400)
 * Signature: uint8_t __stdcall GetBounds(float arg1, Vector2 * arg2, Vector2 * arg3)
 * Calls: (none)
 * Called by: (none)
 */
/* FlashTextField__GetBounds(float, Vector2&, Vector2&) */

void FlashTextField__GetBounds(float arg1,Vector2 *arg2,Vector2 *arg3)

{
  uint32_t *in_RDX;
  
  *(uint32_t *)arg3 = 0;
  *(uint32_t *)(arg3 + 4) = 0;
  *in_RDX = 0;
  in_RDX[1] = 0;
  return;
}

/* ======================================================================
 * GetBounds__005716b0  (Ghidra `GetBounds` @ 005716b0)
 * Signature: uint8_t __stdcall GetBounds(float arg1, Vector2 * arg2, Vector2 * arg3)
 * Calls: `Vector2__operator_assign`, `Vector2__operator_minus__005be180`
 * Called by: (none)
 */
/* FlashSymbol__GetBounds(float, Vector2&, Vector2&) */

void FlashSymbol__GetBounds(float arg1,Vector2 *arg2,Vector2 *arg3)

{
  Vector2 *in_RDX;
  Vector2 aVStack_28 [16];
  
  Vector2__operator_minus__005be180(aVStack_28);
  Vector2__operator_assign(arg3,aVStack_28);
  Vector2__operator_assign(in_RDX,arg2 + 0x14);
  return;
}

/* ======================================================================
 * FindNextInstance  (Ghidra `FindNextInstance` @ 00572d70)
 * Signature: uint8_t __stdcall FindNextInstance(FlashKeyFrame * arg1, int arg2)
 * Calls: (none)
 * Called by: (none)
 */
/* FindNextInstance(FlashKeyFrame*, int) */

long FindNextInstance(FlashKeyFrame *arg1,int arg2)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  
  if (0 < *(int *)(arg1 + 0x18)) {
    lVar2 = *(long *)(arg1 + 0x20);
    iVar3 = 0;
    if (*(int *)(lVar2 + 0x20) == arg2) {
      return lVar2;
    }
    while( true ) {
      lVar4 = lVar2 + 0xa0;
      iVar3 = iVar3 + 1;
      if (iVar3 == *(int *)(arg1 + 0x18)) break;
      piVar1 = (int *)(lVar2 + 0xc0);
      lVar2 = lVar4;
      if (*piVar1 == arg2) {
        return lVar4;
      }
    }
  }
  return 0;
}

/* ======================================================================
 * GetCachedCue  (Ghidra `GetCachedCue` @ 0057a5c0)
 * Signature: uint8_t __stdcall GetCachedCue(char * arg1)
 * Calls: `AutoLockSection__AutoLockSection`, `AutoLockSection__AutoLockSection__005b59d0`, `strcmp`
 * Called by: (none)
 */
/* GetCachedCue(char const*) */

ulong GetCachedCue(char *arg1)

{
  uint64_t uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  char *__s1;
  uint uVar5;
  AutoLockSection aAStack_38 [16];
  
  uVar4 = 0;
  AutoLockSection__AutoLockSection(aAStack_38,(CriticalSection *)cacheCueSection);
  uVar1 = pAudioCueCache._56_8_;
  uVar5 = (uint)(ushort)pAudioCueCache._40_2_;
  if (uVar5 != 0) {
    do {
      __s1 = (char *)((uVar4 & 0xffff) * 0x90 + uVar1);
      iVar2 = strcmp(__s1,arg1);
      if (iVar2 == 0) {
        *(int *)(__s1 + 0x88) = *(int *)(__s1 + 0x88) + 1;
        uVar4 = *(ulong *)(__s1 + 0x80);
        goto LAB_0057a62b;
      }
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulong)uVar3;
    } while ((int)uVar3 < (int)uVar5);
    uVar4 = 0;
  }
LAB_0057a62b:
  AutoLockSection__AutoLockSection__005b59d0(aAStack_38);
  return uVar4;
}

/* ======================================================================
 * Find2DLineIntersect  (Ghidra `Find2DLineIntersect` @ 00581120)
 * Signature: uint8_t __stdcall Find2DLineIntersect(Vector2 * arg1, Vector2 * arg2, Vector2 * arg3, Vector2 * arg4, Vector2 * arg5, float * arg6)
 * Calls: `Vector2__operator_minus__005be180`
 * Called by: (none)
 */
/* Find2DLineIntersect(Vector2 const&, Vector2 const&, Vector2 const&, Vector2 const&, Vector2*,
   float*) */

uint64_t
Find2DLineIntersect(Vector2 *arg1,Vector2 *arg2,Vector2 *arg3,Vector2 *arg4,
                   Vector2 *arg5,float *arg6)

{
  float fVar1;
  uint64_t uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_58;
  float local_54;
  float local_48;
  float local_44;
  float local_38;
  float local_34;
  
  Vector2__operator_minus__005be180((Vector2 *)&local_58,arg4);
  Vector2__operator_minus__005be180((Vector2 *)&local_48,arg1);
  Vector2__operator_minus__005be180((Vector2 *)&local_38,arg2);
  uVar2 = 0;
  fVar3 = local_38 * local_54 - local_34 * local_58;
  if (fVar3 != DAT_005bf760 /* R:0.0f */) {
    uVar2 = 2;
    fVar1 = *(float *)arg1;
    fVar5 = (local_38 * local_44 - local_34 * local_48) / fVar3;
    fVar4 = ((local_58 * local_44 - local_54 * local_48) / fVar3) * (*(float *)arg2 - fVar1);
    fVar3 = (*(float *)(arg2 + 4) - fVar1) * fVar5;
    *(float *)arg5 = fVar1 + fVar4;
    *(float *)(arg5 + 4) =
         (*(float *)(arg2 + 4) - *(float *)(arg1 + 4)) * fVar5 + *(float *)(arg1 + 4);
    *arg6 = SQRT(fVar3 * fVar3 + fVar4 * fVar4);
  }
  return uVar2;
}

/* ======================================================================
 * FormatInvocationID  (Ghidra `FormatInvocationID` @ 00581d70)
 * Signature: uint8_t __stdcall FormatInvocationID(char * arg1)
 * Calls: `strlen`
 * Called by: (none)
 */
/* FormatInvocationID(char const*) */

int FormatInvocationID(char *arg1)

{
  int iVar1;
  size_t sVar2;
  uint uVar3;
  ushort uVar4;
  ulong uVar5;
  int iVar6;
  
  sVar2 = strlen(arg1);
  iVar6 = (int)sVar2;
  iVar1 = iVar6 + 0xfffff;
  if (0 < iVar6) {
    uVar3 = 0;
    uVar4 = 0;
    do {
      uVar5 = (ulong)uVar4;
      uVar4 = uVar4 + 1;
      iVar1 = iVar1 + (uVar3 + 1) * 0x100 + 0x100 + (int)arg1[uVar5];
      uVar3 = (uint)uVar4;
    } while ((int)uVar3 < iVar6);
  }
  return iVar1;
}

/* ======================================================================
 * ForceVSync  (Ghidra `ForceVSync` @ 00584290)
 * Signature: uint8_t __stdcall ForceVSync(uint * arg1)
 * Calls: (none)
 * Called by: (none)
 */
/* ForceVSync(unsigned int&) */

void ForceVSync(uint *arg1)

{
  return;
}

/* ======================================================================
 * EnableLoadingRenderThread  (Ghidra `EnableLoadingRenderThread` @ 00584560)
 * Signature: uint8_t EnableLoadingRenderThread(void)
 * Calls: `CreateWorkerThread`, `TEngineLoadThreadFunc`
 * Called by: `GSMBCutSceneManager__PlayCutScene`, `GSMBMenu__TransitionOutGameFromMenu`, `GSMBMenu__TransitionOutMenuFromGame`, `GSMBMenu__TransitionOutReloadChapter`, `SMBMenuInMenuFromGame`
 */
void EnableLoadingRenderThread(uint64_t arg1)

{
  code *local_28;
  uint64_t local_20;
  uint32_t local_18;
  
  if (bLoadThreadRunning == 0) {
    local_18 = 2;
    local_28 = TEngineLoadThreadFunc;
    bLoadThreadRunning = 1;
    local_20 = arg1;
    hRenderThreadHandle = CreateWorkerThread((tagThreadCreate *)&local_28);
  }
  return;
}

/* ======================================================================
 * FormatButtonProps  (Ghidra `FormatButtonProps` @ 0058a7c0)
 * Signature: uint8_t __stdcall FormatButtonProps(tagButtonProps * arg1, int arg2, uint arg3)
 * Calls: (none)
 * Called by: `ConvertSDLJoystickStateToJoyState`, `UpdateKeyboard`, `UpdateMouse`
 */
/* FormatButtonProps(tagButtonProps*, int, unsigned int) */

void FormatButtonProps(tagButtonProps *arg1,int arg2,uint arg3)

{
  if (arg2 != 1) {
    *(uint32_t *)(arg1 + 4) = 0;
    *(uint *)arg1 = -(uint)(*(int *)arg1 - 1U < 2) & 3;
    return;
  }
  *(uint *)(arg1 + 4) = *(int *)(arg1 + 4) + arg3;
  if (*(int *)arg1 == 0) {
    *(uint32_t *)arg1 = 1;
    *(uint32_t *)(arg1 + 4) = 0;
    return;
  }
  *(uint32_t *)arg1 = 2;
  return;
}

/* ======================================================================
 * FormatStringToKeyboardKey  (Ghidra `FormatStringToKeyboardKey` @ 0058c6e0)
 * Signature: uint8_t __stdcall FormatStringToKeyboardKey(char * arg1)
 * Calls: `strcmp`
 * Called by: `FormatValueIntoKeyboardKey`, `LoadControlConfig`
 */
/* FormatStringToKeyboardKey(char const*) */

ulong FormatStringToKeyboardKey(char *arg1)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = 0;
  do {
    if ((&strKeyNames)[uVar2] != (char *)0x0) {
      iVar1 = strcmp(arg1,(&strKeyNames)[uVar2]);
      if (iVar1 == 0) {
        return uVar2 & 0xffffffff;
      }
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 != 0x90);
  return 0;
}

/* ======================================================================
 * GetAbsoluteRect  (Ghidra `GetAbsoluteRect` @ 005a2060)
 * Signature: uint8_t __stdcall GetAbsoluteRect(UIFormElement * arg1, UIRect * arg2)
 * Calls: (none)
 * Called by: (none)
 */
/* UIFormElement__GetAbsoluteRect(UIFormElement*, UIRect&) */

void UIFormElement__GetAbsoluteRect(UIFormElement *arg1,UIRect *arg2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  (**(code **)(*(long *)arg1 + 0x58))();
  lVar1 = *(long *)(arg1 + 0x30);
  if (lVar1 != 0) {
    fVar3 = *(float *)(lVar1 + 0x40) * *(float *)arg2;
    *(float *)arg2 = fVar3;
    fVar2 = *(float *)(lVar1 + 0x44) * *(float *)(arg2 + 4);
    *(float *)(arg2 + 4) = fVar2;
    *(float *)arg2 = fVar3 + *(float *)(lVar1 + 0x38);
    *(float *)(arg2 + 4) = fVar2 + *(float *)(lVar1 + 0x3c);
    *(float *)(arg2 + 8) = *(float *)(arg2 + 8) * *(float *)(lVar1 + 0x40);
    *(float *)(arg2 + 0xc) = *(float *)(arg2 + 0xc) * *(float *)(lVar1 + 0x44);
  }
  return;
}

/* ======================================================================
 * ElementUpdate  (Ghidra `ElementUpdate` @ 005a3740)
 * Signature: uint8_t __stdcall ElementUpdate(UIFormElement * arg1, UIFormElement * * arg2, float arg3, float arg4, tagButtonState arg5)
 * Calls: (none)
 * Called by: `UIForm__Update`
 */
/* UIForm__ElementUpdate(UIFormElement*, UIFormElement**, float, float, tagButtonState) */

void UIForm__ElementUpdate
               (float arg3,float arg4,UIFormElement *arg1,long *arg2,int arg5)

{
  UIFormElement *pUVar1;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  
  if (*(int *)(arg1 + 0x38) == 1) {
    UIFormElement__GetAbsoluteRect(arg1,(UIRect *)&local_28);
    if ((((arg3 < local_28) || (local_28 + local_20 < arg3)) || (local_24 < arg4)) ||
       (arg4 < local_24 - local_1c)) {
      if (arg5 == 1) {
        (**(code **)(*(long *)arg1 + 0x38))(arg1);
      }
      else {
        (**(code **)(*(long *)arg1 + 0x20))();
      }
    }
    else if (arg5 == 1) {
      pUVar1 = (UIFormElement *)*arg2;
      if ((pUVar1 != (UIFormElement *)0x0) && (arg1 != pUVar1)) {
        (**(code **)(*(long *)pUVar1 + 0x38))();
      }
      (**(code **)(*(long *)arg1 + 0x30))(arg1);
      *arg2 = (long)arg1;
    }
    else {
      (**(code **)(*(long *)arg1 + 0x28))(arg1);
    }
  }
  (**(code **)(*(long *)arg1 + 0x10))(arg1);
  return;
}

/* ======================================================================
 * GetLBPropertyServerID  (Ghidra `GetLBPropertyServerID` @ 005b6aa0)
 * Signature: uint8_t __stdcall GetLBPropertyServerID(int arg1)
 * Calls: (none)
 * Called by: (none)
 */
/* Leaderboards__GetLBPropertyServerID(int) */

int Leaderboards__GetLBPropertyServerID(int arg1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if (uNumLBProps != 0) {
    iVar3 = 0;
    iVar1 = *pLBProps;
    piVar2 = pLBProps;
    while( true ) {
      if (iVar1 == arg1) {
        return piVar2[2];
      }
      piVar2 = piVar2 + 3;
      iVar3 = iVar3 + 1;
      if (iVar3 == uNumLBProps) break;
      iVar1 = *piVar2;
    }
  }
  return -1;
}

/* ======================================================================
 * GetLBPropertySystemID  (Ghidra `GetLBPropertySystemID` @ 005b6af0)
 * Signature: uint8_t __stdcall GetLBPropertySystemID(int arg1)
 * Calls: (none)
 * Called by: (none)
 */
/* Leaderboards__GetLBPropertySystemID(int) */

int Leaderboards__GetLBPropertySystemID(int arg1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if (uNumLBProps != 0) {
    iVar3 = 0;
    iVar1 = *pLBProps;
    piVar2 = pLBProps;
    while( true ) {
      if (iVar1 == arg1) {
        return piVar2[1];
      }
      piVar2 = piVar2 + 3;
      iVar3 = iVar3 + 1;
      if (iVar3 == uNumLBProps) break;
      iVar1 = *piVar2;
    }
  }
  return -1;
}

/* ======================================================================
 * GetLBSystemID  (Ghidra `GetLBSystemID` @ 005b6b40)
 * Signature: uint8_t __stdcall GetLBSystemID(int arg1)
 * Calls: (none)
 * Called by: (none)
 */
/* Leaderboards__GetLBSystemID(int) */

int Leaderboards__GetLBSystemID(int arg1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if (uNumLBIDs != 0) {
    iVar3 = 0;
    iVar1 = *pLBIDs;
    piVar2 = pLBIDs;
    while( true ) {
      if (iVar1 == arg1) {
        return piVar2[1];
      }
      piVar2 = piVar2 + 2;
      iVar3 = iVar3 + 1;
      if (iVar3 == uNumLBIDs) break;
      iVar1 = *piVar2;
    }
  }
  return -1;
}

/* ======================================================================
 * GetLocalizedText  (Ghidra `GetLocalizedText` @ 005b6c60)
 * Signature: uint8_t __stdcall GetLocalizedText(uint arg1)
 * Calls: (none)
 * Called by: `EditorFormChapterUpload__LoadLevelLibrary`, `EditorFormChapterUpload__UploadChapter`, `EditorForm_ChapterUploadFormOpen`, `EditorForm_UploadFormOk`, `EditorForm_UploadFormOpen`, `GMeatHUD__GMeatHUD__004800c0`, `GMeatHUD__SetInGameHudLevelName`, `GMeatHUD__Update`, `GSMBChapterData__SaveLevelData`, `GSMBCutSceneManager__GSMBCutSceneManager__0049d5e0` (+75 more)
 */
/* GetLocalizedText(unsigned int) */

uint64_t GetLocalizedText(uint arg1)

{
  if (iTotalNumLocStrings <= arg1) {
    return *pLocalizedStrings;
  }
  return pLocalizedStrings[arg1];
}

/* ======================================================================
 * FixFileCase  (Ghidra `FixFileCase` @ 005b7490)
 * Signature: uint8_t __stdcall FixFileCase(char * arg1)
 * Calls: `access`, `locateOneElement`, `std__string_string`, `strchr`, `strcpy`, `strlen`
 * Called by: `DeleteFile`, `Exists`, `File__File`, `GLOBAL_sub_I_FixFileCase`, `GSMBChapterData__ReloadData`, `SMBChapterDataSave`
 */
/* FixFileCase(char const*) */

char * FixFileCase(char *arg1)

{
  char *__dest;
  long lVar1;
  int iVar2;
  size_t sVar3;
  char *pcVar4;
  char *in_RSI;
  uint64_t auStack_40 [2];
  char acStack_30 [6];
  allocator local_2a;
  allocator local_29 [9];
  
  auStack_40[0] = 0x5b74ad;
  iVar2 = access(in_RSI,0);
  if (iVar2 == 0) {
    auStack_40[0] = 0x5b7557;
    std__string_string((string *)arg1,in_RSI,&local_2a);
    return arg1;
  }
  auStack_40[0] = 0x5b74bd;
  sVar3 = strlen(in_RSI);
  lVar1 = -(sVar3 + 0x1f & 0xfffffffffffffff0);
  __dest = acStack_30 + lVar1;
  *(uint64_t *)((long)auStack_40 + lVar1) = 0x5b74df;
  strcpy(__dest,in_RSI);
  pcVar4 = __dest;
  do {
    *(uint64_t *)((long)auStack_40 + lVar1) = 0x5b74fb;
    pcVar4 = strchr(pcVar4 + 1,0x2f);
    if (pcVar4 == (char *)0x0) {
      *(uint64_t *)((long)auStack_40 + lVar1) = 0x5b7572;
      iVar2 = access(__dest,0);
      if (iVar2 != 0) {
        *(uint64_t *)((long)auStack_40 + lVar1) = 0x5b757e;
        locateOneElement(__dest);
      }
LAB_005b7527:
      *(uint64_t *)((long)auStack_40 + lVar1) = 0x5b7536;
      std__string_string((string *)arg1,__dest,local_29);
      return arg1;
    }
    *pcVar4 = '\0';
    *(uint64_t *)((long)auStack_40 + lVar1) = 0x5b7512;
    iVar2 = access(__dest,0);
    if (iVar2 != 0) {
      *(uint64_t *)((long)auStack_40 + lVar1) = 0x5b751e;
      iVar2 = locateOneElement(__dest);
      if (iVar2 == 0) {
        *pcVar4 = '/';
        goto LAB_005b7527;
      }
    }
    *pcVar4 = '/';
  } while( true );
}

/* ======================================================================
 * FormatRegFilePath  (Ghidra `FormatRegFilePath` @ 005b7590)
 * Signature: uint8_t FormatRegFilePath(void)
 * Calls: `Sprint`
 * Called by: `GameRegistry__Flush`, `GameRegistry__GameRegistry__005b6430`
 */
void FormatRegFilePath(uint32_t arg1,char *arg2)

{
  uint uVar1;
  uint *puVar2;
  uint local_1018 [1026];
  
  puVar2 = local_1018;
  Sprint("%sreg%i.dat",local_1018,GUserDataPath,arg1);
  do {
    uVar1 = *puVar2;
    puVar2 = puVar2 + 1;
  } while ((uVar1 + 0xfefefeff & ~uVar1 & 0x80808080) == 0);
  std__string_assign(arg2,(ulong)local_1018);
  return;
}

/* ======================================================================
 * FormatResourcePath  (Ghidra `FormatResourcePath` @ 005b7610)
 * Signature: uint8_t FormatResourcePath(void)
 * Calls: `strlen`
 * Called by: `AlienHominid__AlienHominid__004628b0`, `BandageGirl__BandageGirl__00465880`, `Brownie__Brownie__00465920`, `CommanderVideo__CommanderVideo__00464c70`, `DefaultMeatBoy__DefaultMeatBoy__004654a0`, `DrFetus__DrFetus__00466250`, `FactoryBoss__FactoryBoss__00468ff0`, `FinalBoss__FinalBoss__00469560`, `FlyWrench__FlyWrench__00469f60`, `ForestBoss__ForestBoss__0046a890` (+46 more)
 */
uint64_t FormatResourcePath(char *arg1,char *arg2)

{
  if ((SystemCaps._4_4_ == 8) || (SystemCaps._4_4_ == 4)) {
    std__string_assign(arg2,0x5de634);
  }
  else if (SystemCaps._4_4_ == 2) {
    std__string_assign(arg2,0x5de63b);
  }
  else {
    std__string_assign(arg2,0x5de642);
  }
  strlen(arg1);
  std__string_append(arg2,(ulong)arg1);
  return *(uint64_t *)arg2;
}

/* ======================================================================
 * Exists  (Ghidra `Exists` @ 005b7eb0)
 * Signature: uint8_t __stdcall Exists(char * arg1, int arg2)
 * Calls: `FilePackage__GetFileFromPackage`, `FixFileCase`, `access`, `strlen`
 * Called by: (none)
 */
/* WARNING: Removing unreachable block (ram,0x005b7fa2) */
/* File__Exists(char const*, int) */

bool File__Exists(char *arg1,int arg2)

{
  int *piVar1;
  int iVar2;
  FilePackage *this;
  int iVar3;
  size_t sVar4;
  long lVar5;
  char *pcVar6;
  long lVar7;
  char *pcVar8;
  bool bVar9;
  byte bVar10;
  char *local_38 [2];
  uint local_28 [4];
  uint local_18 [4];
  
  bVar10 = 0;
  local_28[0] = 0;
  local_18[0] = 0;
  sVar4 = strlen(arg1);
  lVar7 = 0;
  if (3 < (int)sVar4) {
    lVar7 = (long)((int)sVar4 + -4);
  }
  bVar9 = arg1 + lVar7 == (char *)0x0;
  lVar5 = 5;
  pcVar6 = ".wav";
  pcVar8 = arg1 + lVar7;
  do {
    if (lVar5 == 0) break;
    lVar5 = lVar5 + -1;
    bVar9 = *pcVar6 == *pcVar8;
    pcVar6 = pcVar6 + (ulong)bVar10 * -2 + 1;
    pcVar8 = pcVar8 + (ulong)bVar10 * -2 + 1;
  } while (bVar9);
  this = GameAudioPackage;
  if (!bVar9) {
    this = GameFilePackage;
  }
  if (this != (FilePackage *)0x0) {
    FilePackage__GetFileFromPackage(this,arg1,local_28,local_18,(void **)0x0);
    if (local_28[0] != 0) {
      return true;
    }
    if (local_18[0] != 0) {
      return true;
    }
  }
  FixFileCase((char *)local_38);
  iVar3 = access(local_38[0],0);
  if ((allocator *)(local_38[0] + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage) {
    LOCK();
    piVar1 = (int *)(local_38[0] + -8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 < 1) {
      std__string_Rep_M_destroy((allocator *)(local_38[0] + -0x18));
    }
  }
  return iVar3 == 0;
}

/* ======================================================================
 * ForceClose  (Ghidra `ForceClose` @ 005b9820)
 * Signature: uint8_t ForceClose(void)
 * Calls: `Game_ForceCloseMessage`
 * Called by: `GSuperMeatBoy__Update__00516690`, `Game_FullGamePurchased`, `Game_ProfileSignedOut`
 */
void ForceClose(void)

{
  if (UserAlert__currInterrupt != 0) {
    UserAlert__currInterrupt = 0;
    Game_ForceCloseMessage();
    if (DAT_00824ba8 /* R:8.396019878848574e-39f */ != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005b985e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_00824ba8 /* R:8.396019878848574e-39f */)(DAT_00824be0 /* R:7.763193492359487e-43f */);
      return;
    }
  }
  return;
}

/* ======================================================================
 * GetCallbackSizeBytes  (Ghidra `GetCallbackSizeBytes` @ 005ba230)
 * Signature: uint8_t __stdcall GetCallbackSizeBytes(void)
 * Calls: (none)
 * Called by: (none)
 */
/* CCallback<Achievements, UserStatsReceived_t, false__GetCallbackSizeBytes() */

uint64_t CCallback<Achievements,UserStatsReceived_t,false__GetCallbackSizeBytes(void)

{
  return 0x14;
}

/* ======================================================================
 * GetCallbackSizeBytes__005badb0  (Ghidra `GetCallbackSizeBytes` @ 005badb0)
 * Signature: uint8_t __stdcall GetCallbackSizeBytes(void)
 * Calls: (none)
 * Called by: (none)
 */
/* CCallResult<SteamLeaderBoards, LeaderboardScoreUploaded_t__GetCallbackSizeBytes() */

uint64_t CCallResult<SteamLeaderBoards,LeaderboardScoreUploaded_t__GetCallbackSizeBytes(void)

{
  return 0x1c;
}

/* ======================================================================
 * GetCallbackSizeBytes__005badf0  (Ghidra `GetCallbackSizeBytes` @ 005badf0)
 * Signature: uint8_t __stdcall GetCallbackSizeBytes(void)
 * Calls: (none)
 * Called by: (none)
 */
/* CCallResult<SteamLeaderBoards, LeaderboardScoresDownloaded_t__GetCallbackSizeBytes() */

uint64_t CCallResult<SteamLeaderBoards,LeaderboardScoresDownloaded_t__GetCallbackSizeBytes(void)

{
  return 0x14;
}

/* ======================================================================
 * GetCallbackSizeBytes__005bae30  (Ghidra `GetCallbackSizeBytes` @ 005bae30)
 * Signature: uint8_t __stdcall GetCallbackSizeBytes(void)
 * Calls: (none)
 * Called by: (none)
 */
/* CCallResult<SteamLeaderBoards, LeaderboardFindResult_t__GetCallbackSizeBytes() */

uint64_t CCallResult<SteamLeaderBoards,LeaderboardFindResult_t__GetCallbackSizeBytes(void)

{
  return 0xc;
}

/* ======================================================================
 * Get2DScale  (Ghidra `Get2DScale` @ 005bcf70)
 * Signature: uint8_t __stdcall Get2DScale(Vector2 * arg1, Matrix4x4 * arg2)
 * Calls: `cosf`, `sin`, `sincos`
 * Called by: (none)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matrix4x4__Get2DScale(Vector2*, Matrix4x4 const*) */

Vector2 * Matrix4x4__Get2DScale(Vector2 *arg1,Matrix4x4 *arg2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double local_28;
  double local_20 [2];
  
  dVar4 = (double)__atan2_finite((double)(float)(*(uint *)(arg2 + 4) ^ DAT_005be6f0 /* R:u32=2147483648 */),
                                 (double)(float)(*(uint *)(arg2 + 0x14) ^ DAT_005be6f0 /* R:u32=2147483648 */));
  fVar1 = *(float *)arg2;
  fVar2 = *(float *)(arg2 + 0x10);
  dVar5 = (double)__atan2_finite((double)fVar2,(double)fVar1);
  fVar3 = cosf((float)dVar5);
  if ((float)((uint)fVar3 & DAT_005be880 /* R:u32=2147483647 */) <= _DAT_005dedb0 /* R:9.999999974752427e-07f */) {
    dVar5 = sin((double)(float)dVar5);
    *(float *)arg1 = (float)((double)fVar2 / dVar5);
  }
  else {
    *(float *)arg1 = fVar1 / (float)((uint)fVar3 & DAT_005be880 /* R:u32=2147483647 */);
  }
  sincos((double)(float)dVar4,local_20,&local_28);
  if ((float)(double)((ulong)local_28 & DAT_005c72e0 /* R:u32=4294967295 */) <= _DAT_005dedb0 /* R:9.999999974752427e-07f */) {
    *(float *)(arg1 + 4) =
         (float)((double)(float)(*(uint *)(arg2 + 4) ^ DAT_005be6f0 /* R:u32=2147483648 */) / local_20[0]);
    return arg1;
  }
  *(float *)(arg1 + 4) =
       *(float *)(arg2 + 0x14) / (float)(double)((ulong)local_28 & DAT_005c72e0 /* R:u32=4294967295 */);
  return arg1;
}

/* ======================================================================
 * Get2DSkew  (Ghidra `Get2DSkew` @ 005bd0d0)
 * Signature: uint8_t __stdcall Get2DSkew(Vector2 * arg1, Matrix4x4 * arg2)
 * Calls: (none)
 * Called by: (none)
 */
/* Matrix4x4__Get2DSkew(Vector2*, Matrix4x4 const*) */

Vector2 * Matrix4x4__Get2DSkew(Vector2 *arg1,Matrix4x4 *arg2)

{
  double dVar1;
  
  dVar1 = (double)__atan2_finite((double)(float)(*(uint *)(arg2 + 4) ^ DAT_005be6f0 /* R:u32=2147483648 */),
                                 (double)(float)(*(uint *)(arg2 + 0x14) ^ DAT_005be6f0 /* R:u32=2147483648 */));
  *(float *)arg1 = (float)dVar1;
  dVar1 = (double)__atan2_finite((double)*(float *)(arg2 + 0x10),(double)*(float *)arg2);
  *(float *)(arg1 + 4) = (float)dVar1;
  return arg1;
}

/* ======================================================================
 * Get2DPos  (Ghidra `Get2DPos` @ 005bd140)
 * Signature: uint8_t __stdcall Get2DPos(Vector2 * arg1, Matrix4x4 * arg2)
 * Calls: (none)
 * Called by: (none)
 */
/* Matrix4x4__Get2DPos(Vector2*, Matrix4x4 const*) */

Vector2 * Matrix4x4__Get2DPos(Vector2 *arg1,Matrix4x4 *arg2)

{
  *(uint32_t *)arg1 = *(uint32_t *)(arg2 + 0xc);
  *(uint32_t *)(arg1 + 4) = *(uint32_t *)(arg2 + 0x1c);
  return arg1;
}

/* ======================================================================
 * ExplodeString  (Ghidra `ExplodeString` @ 005bd5b0)
 * Signature: uint8_t ExplodeString(void)
 * Calls: `CriticalSection__CriticalSection`, `CriticalSection__CriticalSection__005b71d0`, `free`, `malloc`, `memcpy`
 * Called by: `GSuperMeatBoy__GSuperMeatBoy__00514290`, `ModelLoader__ModelLoader__005942a0`, `TEngine__TEngine`
 */
uint64_t ExplodeString(char arg1,char *arg2,uint *arg3)

{
  ushort *puVar1;
  uint64_t *puVar2;
  char cVar3;
  ushort uVar4;
  uint uVar5;
  void *pvVar6;
  void *pvVar7;
  int iVar8;
  ushort uVar9;
  ulong uVar10;
  ushort *puVar11;
  ulong uVar12;
  ushort uVar13;
  int iVar14;
  uint64_t uVar15;
  char *__dest;
  ushort uVar16;
  uint64_t *puVar17;
  uint uVar18;
  CriticalSection local_88 [40];
  ushort local_60;
  ushort local_5e;
  byte local_5c;
  int local_58;
  short local_54;
  uint64_t *local_50;
  ushort *local_48;
  int local_40;
  
  CriticalSection__CriticalSection(local_88);
  cVar3 = *arg2;
  local_5e = 0;
  local_60 = 0;
  local_54 = 1;
  local_50 = (uint64_t *)0x0;
  local_48 = (ushort *)0x0;
  local_40 = 0;
  local_5c = 4;
  local_58 = 0;
  if (cVar3 != '\0') {
    uVar13 = 1;
    iVar8 = 0;
    uVar16 = 0;
    do {
      puVar2 = local_50;
      if (cVar3 == arg1) {
        if (iVar8 == -0x5eef3582) {
          if (local_5e <= local_60) {
            local_5e = local_5e + local_54;
            uVar12 = (ulong)local_5c;
            puVar17 = (uint64_t *)0x0;
            uVar10 = (ulong)local_5e * 4;
            pvVar6 = malloc(uVar12 + 0x10 + uVar10);
            if (pvVar6 != (void *)0x0) {
              puVar17 = (uint64_t *)
                        ((long)pvVar6 + 0x10U + (uVar12 - ((long)pvVar6 + 0x10U) % uVar12) % uVar12)
              ;
              puVar17[-2] = uVar10;
              puVar17[-1] = pvVar6;
              if (puVar2 != (uint64_t *)0x0) {
                uVar12 = puVar2[-2];
                if (uVar10 <= (ulong)puVar2[-2]) {
                  uVar12 = uVar10;
                }
                memcpy(puVar17,puVar2,uVar12);
                free((void *)puVar2[-1]);
              }
            }
            puVar11 = local_48;
            uVar9 = local_5e;
            local_50 = puVar17;
            if (local_48 != (ushort *)0x0) {
              uVar12 = (ulong)local_5c;
              uVar10 = (ulong)local_5e * 2;
              pvVar6 = malloc(uVar12 + 0x10 + uVar10);
              uVar4 = local_60;
              puVar1 = (ushort *)0x0;
              if (pvVar6 != (void *)0x0) {
                puVar1 = (ushort *)
                         ((long)pvVar6 + 0x10U + (uVar12 - ((long)pvVar6 + 0x10U) % uVar12) % uVar12
                         );
                *(ulong *)(puVar1 + -8) = uVar10;
                *(void **)(puVar1 + -4) = pvVar6;
                uVar12 = *(ulong *)(puVar11 + -8);
                if (uVar10 <= *(ulong *)(puVar11 + -8)) {
                  uVar12 = uVar10;
                }
                memcpy(puVar1,puVar11,uVar12);
                free(*(void **)(puVar11 + -4));
                uVar4 = local_60;
                uVar9 = local_5e;
              }
              for (; local_48 = puVar1, uVar4 < uVar9; uVar4 = uVar4 + 1) {
                local_48[uVar4] = 0xffff;
                puVar1 = local_48;
              }
            }
          }
          if ((local_58 == 1) && (local_5e != 0)) {
            uVar4 = 1;
            uVar9 = *local_48;
            puVar11 = local_48;
            while (uVar9 != 0xffff) {
              puVar11 = puVar11 + 1;
              if (uVar4 == local_5e) goto LAB_005bd6dd;
              uVar4 = uVar4 + 1;
              uVar9 = *puVar11;
            }
            *puVar11 = local_60;
          }
        }
        else {
          uVar10 = (ulong)local_5c;
          local_58 = 0;
          pvVar6 = malloc(uVar10 + 0x24);
          local_50 = (uint64_t *)0x0;
          if (pvVar6 != (void *)0x0) {
            local_50 = (uint64_t *)
                       ((uVar10 - ((long)pvVar6 + 0x10U) % uVar10) % uVar10 + (long)pvVar6 + 0x10U);
            local_50[-2] = 0x14;
            local_50[-1] = pvVar6;
          }
          *local_50 = 0;
          local_50[1] = 0;
          *(uint32_t *)(local_50 + 2) = 0;
          local_60 = 0;
          local_5e = 5;
          local_40 = -0x5eef3582;
          local_54 = 5;
        }
LAB_005bd6dd:
        *(uint *)((long)local_50 + (ulong)local_60 * 4) = (uint)(ushort)(uVar13 - 1) - (uint)uVar16;
        local_60 = local_60 + 1;
        cVar3 = arg2[uVar13];
        iVar8 = local_40;
        puVar2 = local_50;
        uVar16 = uVar13;
      }
      else {
        cVar3 = arg2[uVar13];
      }
      local_50 = puVar2;
      if (cVar3 == '\0') goto LAB_005bd710;
      uVar13 = uVar13 + 1;
    } while( true );
  }
  iVar14 = 0;
LAB_005bd724:
  uVar10 = (ulong)local_5c;
  local_58 = 0;
  pvVar6 = malloc(uVar10 + 0x24);
  local_50 = (uint64_t *)0x0;
  if (pvVar6 != (void *)0x0) {
    local_50 = (uint64_t *)
               ((uVar10 - ((long)pvVar6 + 0x10U) % uVar10) % uVar10 + (long)pvVar6 + 0x10U);
    local_50[-2] = 0x14;
    local_50[-1] = pvVar6;
  }
  *local_50 = 0;
  local_50[1] = 0;
  *(uint32_t *)(local_50 + 2) = 0;
  local_60 = 0;
  local_5e = 5;
  local_40 = -0x5eef3582;
  local_54 = 5;
LAB_005bd7a6:
  *(int *)((long)local_50 + (ulong)local_60 * 4) = iVar14;
  local_60 = local_60 + 1;
  if (local_60 == 1) {
    uVar15 = 0;
  }
  else {
                    /* try { // try from 005bd7d3 to 005bd814 has its CatchHandler @ 005bdcef */
    pvVar6 = operator_new__((ulong)local_60 * 8);
    *(void **)(arg3 + 2) = pvVar6;
    if (local_60 != 0) {
      uVar16 = 0;
      uVar18 = 0;
      while( true ) {
        uVar12 = (ulong)uVar16;
        pvVar7 = operator_new__((ulong)(*(int *)((long)local_50 + uVar12 * 4) + 1));
        *(void **)((long)pvVar6 + uVar12 * 8) = pvVar7;
        __dest = *(char **)(*(long *)(arg3 + 2) + uVar12 * 8);
        uVar5 = *(uint *)((long)local_50 + uVar12 * 4);
        uVar10 = (ulong)uVar5;
        if (arg2 + (uVar18 & 0xffff) != __dest) {
          memcpy(__dest,arg2 + (uVar18 & 0xffff),uVar10);
          uVar5 = *(uint *)((long)local_50 + uVar12 * 4);
          __dest = *(char **)(*(long *)(arg3 + 2) + uVar12 * 8);
          uVar10 = (ulong)uVar5;
        }
        __dest[uVar10] = '\0';
        uVar16 = uVar16 + 1;
        if (local_60 <= uVar16) break;
        pvVar6 = *(void **)(arg3 + 2);
        uVar18 = uVar18 + 1 + uVar5;
      }
    }
    uVar15 = 1;
    *arg3 = (uint)local_60;
  }
  if (local_40 == -0x5eef3582) {
    local_40 = 0;
    free((void *)local_50[-1]);
    if (local_58 == 1) {
      free(*(void **)(local_48 + -4));
    }
    local_40 = 0;
    local_5e = 0;
    local_60 = 0;
    local_50 = (uint64_t *)0x0;
    local_48 = (ushort *)0x0;
  }
  CriticalSection__CriticalSection__005b71d0(local_88);
  return uVar15;
LAB_005bd710:
  iVar14 = (uint)uVar13 - (uint)uVar16;
  if (iVar8 == -0x5eef3582) {
    if (local_5e <= local_60) {
      local_5e = local_5e + local_54;
      uVar12 = (ulong)local_5c;
      puVar17 = (uint64_t *)0x0;
      uVar10 = (ulong)local_5e * 4;
      pvVar6 = malloc(uVar12 + 0x10 + uVar10);
      if (pvVar6 != (void *)0x0) {
        puVar17 = (uint64_t *)
                  ((long)pvVar6 + 0x10U + (uVar12 - ((long)pvVar6 + 0x10U) % uVar12) % uVar12);
        puVar17[-2] = uVar10;
        puVar17[-1] = pvVar6;
        if (puVar2 != (uint64_t *)0x0) {
          uVar12 = puVar2[-2];
          if (uVar10 <= (ulong)puVar2[-2]) {
            uVar12 = uVar10;
          }
          memcpy(puVar17,puVar2,uVar12);
          free((void *)puVar2[-1]);
        }
      }
      puVar11 = local_48;
      uVar16 = local_5e;
      local_50 = puVar17;
      if (local_48 != (ushort *)0x0) {
        uVar12 = (ulong)local_5c;
        uVar10 = (ulong)local_5e * 2;
        pvVar6 = malloc(uVar12 + 0x10 + uVar10);
        uVar13 = local_60;
        puVar1 = (ushort *)0x0;
        if (pvVar6 != (void *)0x0) {
          puVar1 = (ushort *)
                   ((long)pvVar6 + 0x10U + (uVar12 - ((long)pvVar6 + 0x10U) % uVar12) % uVar12);
          *(ulong *)(puVar1 + -8) = uVar10;
          *(void **)(puVar1 + -4) = pvVar6;
          uVar12 = *(ulong *)(puVar11 + -8);
          if (uVar10 <= *(ulong *)(puVar11 + -8)) {
            uVar12 = uVar10;
          }
          memcpy(puVar1,puVar11,uVar12);
          free(*(void **)(puVar11 + -4));
          uVar13 = local_60;
          uVar16 = local_5e;
        }
        for (; local_48 = puVar1, uVar13 < uVar16; uVar13 = uVar13 + 1) {
          local_48[uVar13] = 0xffff;
          puVar1 = local_48;
        }
      }
    }
    if ((local_58 == 1) && (local_5e != 0)) {
      uVar13 = 0;
      uVar16 = *local_48;
      puVar11 = local_48;
      while (uVar16 != 0xffff) {
        puVar11 = puVar11 + 1;
        uVar13 = uVar13 + 1;
        if (uVar13 == local_5e) goto LAB_005bd7a6;
        uVar16 = *puVar11;
      }
      *puVar11 = local_60;
    }
    goto LAB_005bd7a6;
  }
  goto LAB_005bd724;
}

/* ======================================================================
 * FindCharInstances  (Ghidra `FindCharInstances` @ 005bdd70)
 * Signature: uint8_t FindCharInstances(void)
 * Calls: (none)
 * Called by: (none)
 */
int FindCharInstances(char arg1,char *arg2)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  
  cVar3 = *arg2;
  iVar1 = 0;
  if (cVar3 != '\0') {
    uVar2 = 0;
    do {
      if (arg1 == cVar3) {
        iVar1 = iVar1 + 1;
      }
      uVar2 = uVar2 + 1;
      cVar3 = arg2[uVar2];
    } while (cVar3 != '\0');
  }
  return iVar1;
}
