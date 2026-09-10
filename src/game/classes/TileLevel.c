/* src/game/classes/TileLevel.c — 25 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "TileLevel.h"

/* ======================================================================
 * TileLevel__GetGridIndex  (Ghidra `GetGridIndex` @ 0058cf60)
 * Signature: uint8_t __thiscall GetGridIndex(TileLevel * self, Vector2 * arg1, Vector2 * arg2, int * arg3, int * arg4)
 * Class: TileLevel
 * Calls: `TileLevel__GetGridIndex__0058dd90`, `Vector2__operator_assign`, `Vector2__operator_mul__005be200`, `Vector2__operator_plus__005be140`
 * Called by: (none)
 */
/* TileLevel__GetGridIndex__0058dd90(Vector2 const&, Vector2&, int&, int&) [clone .constprop.39] */

int __thiscall TileLevel__GetGridIndex__0058dd90(TileLevel *self, Vector2 *arg1, Vector2 *arg2,
                                                 int *arg3, int *arg4)

{
  int iVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float local_78;
  float local_74;
  Vector2 local_68[16];
  float local_58;
  float local_54;
  Vector2 local_48[16];
  Vector2 local_38[24];

  fVar3 = (*(float *)arg1 - *(float *)(self + 0x30)) / fLevelGridWH;
  lVar2 = (long)fVar3;
  if (fVar3 < (float)lVar2) {
    lVar2 = lVar2 + -1;
  }
  iVar1 = (int)lVar2;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  if ((int)(uint) * (ushort *)(self + 0x38) <= iVar1) {
    iVar1 = *(ushort *)(self + 0x38) - 1;
  }
  *arg3 = iVar1;
  fVar3 = DAT_005be6e4 /* R:0.5f */;
  fVar4 = (*(float *)(arg1 + 4) - *(float *)(self + 0x34)) / fLevelGridWH;
  lVar2 = (long)fVar4;
  if (fVar4 < (float)lVar2) {
    lVar2 = lVar2 + -1;
  }
  iVar1 = (int)lVar2;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  if ((int)(uint) * (ushort *)(self + 0x3a) <= iVar1) {
    iVar1 = *(ushort *)(self + 0x3a) - 1;
  }
  *arg4 = iVar1;
  local_58 = fLevelGridWH;
  local_54 = fLevelGridWH;
  Vector2__operator_mul__005be200(local_48, fVar3);
  local_74 = (float)*arg4 * fLevelGridWH;
  local_78 = (float)*arg3 * fLevelGridWH;
  Vector2__operator_plus__005be140(local_68, (Vector2 *)&local_78);
  Vector2__operator_plus__005be140(local_38, local_68);
  Vector2__operator_assign(arg2, local_38);
  return (uint) * (ushort *)(self + 0x38) * *arg4 + *arg3;
}

/* ======================================================================
 * TileLevel__TileLevel  (Ghidra `TileLevel` @ 0058d6c0)
 * Signature: uint8_t __thiscall TileLevel(TileLevel * self)
 * Class: TileLevel
 * Calls: `CreateTileLevelResources`, `DestroyTileLevelResources`, `GSetPieceWayPoints__GSetPieceWayPoints__0059efd0`, `RenderLayer__RenderLayer__00597d50`, `TResourceCreator__AddResourceCreationFunction`, `TResourceCreator__AddResourceDestroyFunction`, `operator_new`
 * Called by: (none)
 */
/* TileLevel__TileLevel() */

void __thiscall TileLevel__TileLevel(TileLevel *self)

{
  GSetPieceWayPoints *this_00;

  *(uint64_t *)(self + 0x18) = 0;
  *(uint64_t *)(self + 0x20) = 0;
  *(uint64_t *)(self + 0x28) = 0;
  *(uint16_t *)(self + 0x38) = 0x20;
  *(uint16_t *)(self + 0x3a) = 0x20;
  *(uint64_t *)(self + 0x40) = 0;
  *(uint64_t *)(self + 0x48) = 0;
  *(uint32_t *)(self + 0x68) = 0;
  RenderLayer__RenderLayer__00597d50((RenderLayer *)(self + 0x70));
  *(uint8_t ***)(self + 0x70) = &PTR__LevelRenderLayer_005dcfb0;
  /* try { // try from 0058d747 to 0058d74b has its CatchHandler @ 0058d957 */
  RenderLayer__RenderLayer__00597d50((RenderLayer *)(self + 0x4a0));
  *(uint8_t ***)(self + 0x4a0) = &PTR__LevelRenderLayer_005dcfb0;
  /* try { // try from 0058d761 to 0058d765 has its CatchHandler @ 0058d9e7 */
  RenderLayer__RenderLayer__00597d50((RenderLayer *)(self + 0x8d0));
  *(uint8_t ***)(self + 0x8d0) = &PTR__LevelRenderLayer_005dcfb0;
  /* try { // try from 0058d77b to 0058d77f has its CatchHandler @ 0058d9e2 */
  RenderLayer__RenderLayer__00597d50((RenderLayer *)(self + 0xd00));
  *(uint8_t ***)(self + 0xd00) = &PTR__TileLevelLayer_005dcff0;
  /* try { // try from 0058d795 to 0058d799 has its CatchHandler @ 0058d9dc */
  RenderLayer__RenderLayer__00597d50((RenderLayer *)(self + 0x1140));
  *(uint8_t ***)(self + 0x1140) = &PTR__TileLevelLayer_005dcff0;
  /* try { // try from 0058d7af to 0058d7b3 has its CatchHandler @ 0058d9d7 */
  RenderLayer__RenderLayer__00597d50((RenderLayer *)(self + 0x1580));
  *(uint8_t ***)(self + 0x1580) = &PTR__TileLevelLayer_005dcff0;
  /* try { // try from 0058d7c9 to 0058d7cd has its CatchHandler @ 0058d9d2 */
  RenderLayer__RenderLayer__00597d50((RenderLayer *)(self + 0x19c0));
  *(uint8_t ***)(self + 0x19c0) = &PTR__LevelRenderLayer_005dcfb0;
  /* try { // try from 0058d7e0 to 0058d7e4 has its CatchHandler @ 0058d99b */
  RenderLayer__RenderLayer__00597d50((RenderLayer *)(self + 0x1df0));
  *(uint8_t ***)(self + 0x1df0) = &PTR__LevelRenderLayer_005dcfb0;
  *(uint64_t *)(self + 0x2220) = 0;
  *(uint32_t *)(self + 0x2228) = 0;
  *(uint64_t *)(self + 0x2230) = 0;
  *(uint32_t *)(self + 0x2238) = 0;
  *(uint64_t *)(self + 0x2240) = 0;
  *(uint32_t *)(self + 0x2248) = 0;
  *(uint64_t *)(self + 0x2250) = 0;
  *(uint32_t *)(self + 0x2258) = 0;
  *(uint64_t *)(self + 0x2260) = 0;
  *(uint32_t *)(self + 0x2268) = 0;
  *(uint64_t *)(self + 0x2270) = 0;
  *(uint32_t *)(self + 0x2278) = 0;
  *(uint64_t *)(self + 0x2280) = 0;
  *(uint32_t *)(self + 0x2288) = 0;
  *(uint64_t *)(self + 0x2290) = 0;
  *(uint32_t *)(self + 0x2298) = 0;
  *(uint8_t **)(self + 0x22a0) = &DAT_008184c8 /* R:0.00016803004837129265f */;
  *(uint32_t *)(self + 0x22a8) = 0;
  *(uint32_t *)(self + 0x22ac) = 0;
  *(uint32_t *)(self + 0x22b0) = 0;
  *(uint32_t *)(self + 0x22b4) = 0xccbebc20;
  *(uint32_t *)(self + 0x22b8) = 0xccbebc20;
  *(uint32_t *)(self + 0x22bc) = 0x4cbebc20;
  *(uint32_t *)(self + 0x22c0) = 0x4cbebc20;
  *(uint32_t *)(self + 0x22c4) = 0;
  /* try { // try from 0058d8f8 to 0058d8fc has its CatchHandler @ 0058d996 */
  this_00 = operator_new(0x50);
  /* try { // try from 0058d903 to 0058d907 has its CatchHandler @ 0058d96b */
  GSetPieceWayPoints__GSetPieceWayPoints__0059efd0(this_00);
  /* try { // try from 0058d90b to 0058d933 has its CatchHandler @ 0058d996 */
  CreateTileLevelResources(self);
  TResourceCreator__AddResourceCreationFunction((TResourceCreator *)ResourceCreator,
                                                CreateTileLevelResources, self);
  TResourceCreator__AddResourceDestroyFunction((TResourceCreator *)ResourceCreator,
                                               DestroyTileLevelResources, self);
  return;
}

/* ======================================================================
 * TileLevel__TileLevel__0058d9f0  (Ghidra `~TileLevel` @ 0058d9f0)
 * Signature: uint8_t __thiscall ~TileLevel(TileLevel * self)
 * Class: TileLevel
 * Calls: `AutoLockSection__AutoLockSection`, `AutoLockSection__AutoLockSection__005b59d0`, `CreateTileLevelResources`, `DestroyTileLevelResources`, `RenderLayer__RenderLayer__005988e0`, `TAudio__DestroyManagedInstances`, `TResourceCreator__RemoveResourceCreationFunction`, `TResourceCreator__RemoveResourceDestroyFunction`
 * Called by: `EndBackToTitleFromReplay`, `GSuperMeatBoy__DestroyGameResources`, `GSuperMeatBoy__GSuperMeatBoy__00512120`, `GSuperMeatBoy__SetCurrentLevel`, `GSuperMeatBoy__SwitchGameMode`, `GSuperMeatBoy__Update__00516690`
 */
/* WARNING: Removing unreachable block (ram,0x0058dcec) */
/* TileLevel__TileLevel__0058d9f0() */

void __thiscall TileLevel__TileLevel__0058d9f0(TileLevel *self)

{
  allocator *paVar1;
  int *piVar2;
  uint64_t *puVar3;
  long lVar4;
  uint64_t *puVar5;
  int iVar6;
  AutoLockSection local_48[24];

  /* try { // try from 0058da0f to 0058da13 has its CatchHandler @ 0058dc28 */
  AutoLockSection__AutoLockSection(local_48, (CriticalSection *)RenderLayers__MasterRenderSection);
  /* try { // try from 0058da20 to 0058db5a has its CatchHandler @ 0058dcda */
  TAudio__DestroyManagedInstances(Audio, 1);
  if (0 < *(int *)(self + 0x68)) {
    lVar4 = 0;
    iVar6 = 0;
    do {
      AnimationManager__RemoveCallback((float *)(lVar4 + *(long *)(self + 0x60) + 0x40));
      iVar6 = iVar6 + 1;
      lVar4 = lVar4 + 0x68;
    } while (iVar6 < *(int *)(self + 0x68));
  }
  RenderLayers__RemoveLayer((RenderLayer *)(self + 0x8d0));
  RenderLayers__RemoveLayer((RenderLayer *)(self + 0x4a0));
  RenderLayers__RemoveLayer((RenderLayer *)(self + 0x70));
  RenderLayers__RemoveLayer((RenderLayer *)(self + 0xd00));
  RenderLayers__RemoveLayer((RenderLayer *)(self + 0x1140));
  RenderLayers__RemoveLayer((RenderLayer *)(self + 0x1580));
  RenderLayers__RemoveLayer((RenderLayer *)(self + 0x1df0));
  RenderLayers__RemoveLayer((RenderLayer *)(self + 0x19c0));
  if (*(long *)self != 0) {
    operator_delete__((void *)(*(long *)self + -8));
  }
  puVar3 = *(uint64_t **)(self + 0x60);
  if (puVar3 != (uint64_t *)0x0) {
    puVar5 = puVar3 + puVar3[-1] * 0xd;
    while (puVar5 != puVar3) {
      puVar5 = puVar5 + -0xd;
      (**(code **)*puVar5)(puVar5);
      puVar3 = *(uint64_t **)(self + 0x60);
    }
    operator_delete__(puVar5 + -1);
  }
  DestroyTileLevelResources(self);
  TResourceCreator__RemoveResourceCreationFunction((TResourceCreator *)ResourceCreator,
                                                   CreateTileLevelResources, self);
  TResourceCreator__RemoveResourceDestroyFunction((TResourceCreator *)ResourceCreator,
                                                  DestroyTileLevelResources, self);
  /* try { // try from 0058db60 to 0058db64 has its CatchHandler @ 0058dc28 */
  AutoLockSection__AutoLockSection__005b59d0(local_48);
  paVar1 = (allocator *)(*(long *)(self + 0x22a0) + -0x18);
  if (paVar1 != (allocator *)&std__string_Rep_S_empty_rep_storage) {
    LOCK();
    piVar2 = (int *)(*(long *)(self + 0x22a0) + -8);
    iVar6 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar6 < 1) {
      std__string_Rep_M_destroy(paVar1);
    }
  }
  *(uint8_t ***)(self + 0x1df0) = &PTR__LevelRenderLayer_005dcfb0;
  /* try { // try from 0058db8d to 0058db91 has its CatchHandler @ 0058dca2 */
  RenderLayer__RenderLayer__005988e0((RenderLayer *)(self + 0x1df0));
  *(uint8_t ***)(self + 0x19c0) = &PTR__LevelRenderLayer_005dcfb0;
  /* try { // try from 0058dba0 to 0058dba4 has its CatchHandler @ 0058dc93 */
  RenderLayer__RenderLayer__005988e0((RenderLayer *)(self + 0x19c0));
  *(uint8_t ***)(self + 0x1580) = &PTR__LevelRenderLayer_005dcfb0;
  /* try { // try from 0058dbb3 to 0058dbb7 has its CatchHandler @ 0058dc86 */
  RenderLayer__RenderLayer__005988e0((RenderLayer *)(self + 0x1580));
  *(uint8_t ***)(self + 0x1140) = &PTR__LevelRenderLayer_005dcfb0;
  /* try { // try from 0058dbc6 to 0058dbca has its CatchHandler @ 0058dc77 */
  RenderLayer__RenderLayer__005988e0((RenderLayer *)(self + 0x1140));
  *(uint8_t ***)(self + 0xd00) = &PTR__LevelRenderLayer_005dcfb0;
  /* try { // try from 0058dbdb to 0058dbdf has its CatchHandler @ 0058dc68 */
  RenderLayer__RenderLayer__005988e0((RenderLayer *)(self + 0xd00));
  *(uint8_t ***)(self + 0x8d0) = &PTR__LevelRenderLayer_005dcfb0;
  /* try { // try from 0058dbf0 to 0058dbf4 has its CatchHandler @ 0058dc5a */
  RenderLayer__RenderLayer__005988e0((RenderLayer *)(self + 0x8d0));
  *(uint8_t ***)(self + 0x4a0) = &PTR__LevelRenderLayer_005dcfb0;
  /* try { // try from 0058dc04 to 0058dc08 has its CatchHandler @ 0058dc47 */
  RenderLayer__RenderLayer__005988e0((RenderLayer *)(self + 0x4a0));
  *(uint8_t ***)(self + 0x70) = &PTR__LevelRenderLayer_005dcfb0;
  RenderLayer__RenderLayer__005988e0((RenderLayer *)(self + 0x70));
  return;
}

/* ======================================================================
 * TileLevel__Update  (Ghidra `Update` @ 0058dd00)
 * Signature: uint8_t __stdcall Update(void)
 * Class: TileLevel
 * Calls: (none)
 * Called by: (none)
 */
/* TileLevel__Update() */

void TileLevel__Update(void)

{
  return;
}

/* ======================================================================
 * TileLevel__Render  (Ghidra `Render` @ 0058dd10)
 * Signature: uint8_t __stdcall Render(void)
 * Class: TileLevel
 * Calls: (none)
 * Called by: (none)
 */
/* TileLevel__Render() */

void TileLevel__Render(void)

{
  return;
}

/* ======================================================================
 * TileLevel__IsPositionWithinGrid  (Ghidra `IsPositionWithinGrid` @ 0058dd20)
 * Signature: uint8_t __thiscall IsPositionWithinGrid(TileLevel * self, Vector2 * arg1)
 * Class: TileLevel
 * Calls: (none)
 * Called by: `RaptureBoss__Update`, `RaptureBoss__UpdateMaggotShots`, `SMBPalette__Update`
 */
/* TileLevel__IsPositionWithinGrid(Vector2 const&) */

bool __thiscall TileLevel__IsPositionWithinGrid(TileLevel *self, Vector2 *arg1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  float fVar4;

  fVar4 = (*(float *)arg1 - *(float *)(self + 0x30)) / fLevelGridWH;
  lVar2 = (long)fVar4;
  if (fVar4 < (float)lVar2) {
    lVar2 = lVar2 + -1;
  }
  fVar4 = (*(float *)(arg1 + 4) - *(float *)(self + 0x34)) / fLevelGridWH;
  lVar3 = (long)fVar4;
  if (fVar4 < (float)lVar3) {
    lVar3 = lVar3 + -1;
  }
  bVar1 = false;
  if (((-1 < (int)lVar2) && ((int)lVar2 < (int)(uint) * (ushort *)(self + 0x38))) &&
      (-1 < (int)lVar3)) {
    bVar1 = (int)lVar3 < (int)(uint) * (ushort *)(self + 0x3a);
  }
  return bVar1;
}

/* ======================================================================
 * TileLevel__GetGridIndex__0058dd90  (Ghidra `GetGridIndex` @ 0058dd90)
 * Signature: uint8_t __thiscall GetGridIndex(TileLevel * self, Vector2 * arg1, Vector2 * arg2, int * arg3, int * arg4)
 * Class: TileLevel
 * Calls: `Vector2__operator_assign`, `Vector2__operator_mul__005be200`, `Vector2__operator_plus__005be140`
 * Called by: `BloodyTiles__Render`, `DeSelectTile`, `GrabBlock`, `IsBloodOnTile`, `IsStickableTile`, `MeatBoyCharactor__Update`, `PasteSelectedTiles`, `PlaceTile`, `RemoveTile`, `SMBEditor__Render` (+10 more)
 */
/* TileLevel__GetGridIndex__0058dd90(Vector2 const&, Vector2&, int&, int&) */

int __thiscall TileLevel__GetGridIndex__0058dd90(TileLevel *self, Vector2 *arg1, Vector2 *arg2,
                                                 int *arg3, int *arg4)

{
  int iVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float local_78;
  float local_74;
  Vector2 local_68[16];
  float local_58;
  float local_54;
  Vector2 local_48[16];
  Vector2 local_38[24];

  fVar3 = (*(float *)arg1 - *(float *)(self + 0x30)) / fLevelGridWH;
  lVar2 = (long)fVar3;
  if (fVar3 < (float)lVar2) {
    lVar2 = lVar2 + -1;
  }
  iVar1 = (int)lVar2;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  if ((int)(uint) * (ushort *)(self + 0x38) <= iVar1) {
    iVar1 = *(ushort *)(self + 0x38) - 1;
  }
  *arg3 = iVar1;
  fVar3 = DAT_005be6e4 /* R:0.5f */;
  fVar4 = (*(float *)(arg1 + 4) - *(float *)(self + 0x34)) / fLevelGridWH;
  lVar2 = (long)fVar4;
  if (fVar4 < (float)lVar2) {
    lVar2 = lVar2 + -1;
  }
  iVar1 = (int)lVar2;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  if ((int)(uint) * (ushort *)(self + 0x3a) <= iVar1) {
    iVar1 = *(ushort *)(self + 0x3a) - 1;
  }
  *arg4 = iVar1;
  local_58 = fLevelGridWH;
  local_54 = fLevelGridWH;
  Vector2__operator_mul__005be200(local_48, fVar3);
  local_74 = (float)*arg4 * fLevelGridWH;
  local_78 = (float)*arg3 * fLevelGridWH;
  Vector2__operator_plus__005be140(local_68, (Vector2 *)&local_78);
  Vector2__operator_plus__005be140(local_38, local_68);
  Vector2__operator_assign(arg2, local_38);
  return (uint) * (ushort *)(self + 0x38) * *arg4 + *arg3;
}

/* ======================================================================
 * TileLevel__GetGridPos  (Ghidra `GetGridPos` @ 0058dec0)
 * Signature: uint8_t __thiscall GetGridPos(TileLevel * self, int arg1, int arg2, Vector2 * arg3)
 * Class: TileLevel
 * Calls: (none)
 * Called by: `CopySelected_Selection`, `FillSelected_Selection`, `SMBEditor__Render`, `SMBPalette__MarkCollision`, `SMBPalette__MarkCollisionOnBlock`, `SMBPalette__SpecialRender__004e1290`, `SelectTile`, `TileLevelLightMap__GenerateShadowMap`
 */
/* TileLevel__GetGridPos(int, int, Vector2&) */

void __thiscall TileLevel__GetGridPos(TileLevel *self, int arg1, int arg2, Vector2 *arg3)

{
  float fVar1;

  fVar1 = DAT_005be6e4 /* R:0.5f */;
  *(float *)arg3 =
      ((float)arg1 + DAT_005be6e4 /* R:0.5f */) * fLevelGridWH + *(float *)(self + 0x30);
  *(float *)(arg3 + 4) = ((float)arg2 + fVar1) * fLevelGridWH + *(float *)(self + 0x34);
  return;
}

/* ======================================================================
 * TileLevel__SnapPositionToCenter  (Ghidra `SnapPositionToCenter` @ 0058df00)
 * Signature: uint8_t __thiscall SnapPositionToCenter(TileLevel * self, Vector2 * arg1, float arg2)
 * Class: TileLevel
 * Calls: (none)
 * Called by: `PlaceCameraItems`, `SMBBloodExplosion__Update`, `SMBEditor__RenderSetPieceInfo`
 */
/* TileLevel__SnapPositionToCenter(Vector2&, float) */

void __thiscall TileLevel__SnapPositionToCenter(TileLevel *self, Vector2 *arg1, float arg2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  float fVar5;
  float fVar6;

  fVar1 = DAT_005be6e4 /* R:0.5f */;
  fVar6 = fLevelGridWH * arg2;
  fVar5 = (*(float *)arg1 - *(float *)(self + 0x30)) / fVar6;
  lVar4 = (long)fVar5;
  if (fVar5 < (float)lVar4) {
    lVar4 = lVar4 + -1;
  }
  iVar3 = (int)lVar4;
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  if ((int)((float)*(ushort *)(self + 0x38) / arg2) <= iVar3) {
    iVar3 = (int)((float)*(ushort *)(self + 0x38) / arg2) + -1;
  }
  fVar5 = (*(float *)(arg1 + 4) - *(float *)(self + 0x34)) / fVar6;
  lVar4 = (long)fVar5;
  if (fVar5 < (float)lVar4) {
    lVar4 = lVar4 + -1;
  }
  iVar2 = (int)lVar4;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  if ((int)((float)*(ushort *)(self + 0x3a) / arg2) <= iVar2) {
    iVar2 = (int)((float)*(ushort *)(self + 0x3a) / arg2) + -1;
  }
  *(float *)arg1 = ((float)iVar3 + DAT_005be6e4 /* R:0.5f */) * fVar6 + *(float *)(self + 0x30);
  *(float *)(arg1 + 4) = arg2 * fLevelGridWH * ((float)iVar2 + fVar1) + *(float *)(self + 0x34);
  return;
}

/* ======================================================================
 * TileLevel__GetGridBlock  (Ghidra `GetGridBlock` @ 0058dfe0)
 * Signature: uint8_t __thiscall GetGridBlock(TileLevel * self, int arg1, int arg2, tagTileLayerLevelType arg3)
 * Class: TileLevel
 * Calls: (none)
 * Called by: `BloodyTiles__Reset`, `CopySelected_Selection`, `FillSelected_Selection`, `GrabBlock`, `IsStickableTile`, `MeatBoyCharactor__Update`, `PasteSelectedTiles`, `RunCommandOnSelection`, `SMBAnimal__CanJumpOver`, `SMBPalette__AddAppearBlock` (+12 more)
 */
/* TileLevel__GetGridBlock(int, int, tagTileLayerLevelType) */

long __thiscall TileLevel__GetGridBlock(TileLevel *self, int arg1, int arg2, int arg4)

{
  ushort uVar1;

  uVar1 = *(ushort *)(self + 0x38);
  if (arg1 < 0) {
    arg1 = 0;
  }
  if ((int)(uint)uVar1 <= arg1) {
    arg1 = uVar1 - 1;
  }
  if (arg2 < 0) {
    arg2 = 0;
  }
  if ((int)(uint) * (ushort *)(self + 0x3a) <= arg2) {
    arg2 = *(ushort *)(self + 0x3a) - 1;
  }
  if (arg4 != 1) {
    if (arg4 != 2) {
      return *(long *)self + (long)(int)((uint)uVar1 * arg2 + arg1) * 4;
    }
    return *(long *)(self + 0x10) + (long)(int)((uint)uVar1 * arg2 + arg1) * 4;
  }
  return *(long *)(self + 8) + (long)(int)((uint)uVar1 * arg2 + arg1) * 4;
}

/* ======================================================================
 * TileLevel__GetGridBlockFromPos  (Ghidra `GetGridBlockFromPos` @ 0058e050)
 * Signature: uint8_t __thiscall GetGridBlockFromPos(TileLevel * self, Vector2 * arg1, tagTileLayerLevelType arg2)
 * Class: TileLevel
 * Calls: (none)
 * Called by: `AlienHominid__Update`, `DrFetus__UpdateShots`, `MrMinecraft__ManipulateBlock`, `SMBBloodExplosion__Update`, `SparkEmitter__Update`
 */
/* TileLevel__GetGridBlockFromPos(Vector2 const&, tagTileLayerLevelType) */

long __thiscall TileLevel__GetGridBlockFromPos(TileLevel *self, float *arg1, int arg3)

{
  ushort uVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  float fVar5;

  uVar1 = *(ushort *)(self + 0x38);
  fVar5 = (*arg1 - *(float *)(self + 0x30)) / fLevelGridWH;
  lVar3 = (long)fVar5;
  if (fVar5 < (float)lVar3) {
    lVar3 = lVar3 + -1;
  }
  iVar2 = (int)lVar3;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  fVar5 = (arg1[1] - *(float *)(self + 0x34)) / fLevelGridWH;
  if ((int)(uint)uVar1 <= iVar2) {
    iVar2 = uVar1 - 1;
  }
  lVar3 = (long)fVar5;
  if (fVar5 < (float)lVar3) {
    lVar3 = lVar3 + -1;
  }
  iVar4 = (int)lVar3;
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  if ((int)(uint) * (ushort *)(self + 0x3a) <= iVar4) {
    iVar4 = *(ushort *)(self + 0x3a) - 1;
  }
  if (arg3 != 1) {
    if (arg3 != 2) {
      return *(long *)self + (long)(int)(iVar2 + iVar4 * (uint)uVar1) * 4;
    }
    return *(long *)(self + 0x10) + (long)(int)(iVar2 + iVar4 * (uint)uVar1) * 4;
  }
  return *(long *)(self + 8) + (long)(int)(iVar2 + iVar4 * (uint)uVar1) * 4;
}

/* ======================================================================
 * TileLevel__GetGridCoordsFromBlock  (Ghidra `GetGridCoordsFromBlock` @ 0058e120)
 * Signature: uint8_t __thiscall GetGridCoordsFromBlock(TileLevel * self, GRIDBLOCK * arg1, int * arg2, int * arg3)
 * Class: TileLevel
 * Calls: (none)
 * Called by: `SMBAnimal__CanJumpOver`, `SMBPalette__BreakyCollide`, `SMBPalette__CollisionResponse__004e61d0`, `SMBPalette__MarkBlockAsNotCollideable`, `SMBPalette__SpecialRender__004e1290`, `SMBPalette__Update`
 */
/* TileLevel__GetGridCoordsFromBlock(GRIDBLOCK const*, int&, int&) */

void __thiscall TileLevel__GetGridCoordsFromBlock(TileLevel *self, GRIDBLOCK *arg1, int *arg2,
                                                  int *arg3)

{
  ushort uVar1;
  GRIDBLOCK *pGVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;

  pGVar2 = *(GRIDBLOCK **)(self + 8);
  if ((arg1 < pGVar2) && (pGVar2 = *(GRIDBLOCK **)(self + 0x10), arg1 < pGVar2)) {
    pGVar2 = *(GRIDBLOCK **)self;
  }
  uVar6 = (ulong)((long)arg1 - (long)pGVar2) >> 2;
  uVar1 = *(ushort *)(self + 0x38);
  uVar4 = (int)uVar6 >> 0x1f;
  iVar5 = (int)((long)((ulong)uVar4 << 0x20 | uVar6 & 0xffffffff) % (long)(int)(uint)uVar1);
  if (iVar5 < 0) {
    iVar5 = 0;
  }
  if ((int)(uint)uVar1 <= iVar5) {
    iVar5 = uVar1 - 1;
  }
  *arg2 = iVar5;
  iVar3 = (int)((long)((ulong)uVar4 << 0x20 | uVar6 & 0xffffffff) / (long)(int)(uint) *
                (ushort *)(self + 0x38));
  iVar5 = 0;
  if (-1 < iVar3) {
    iVar5 = iVar3;
  }
  if ((int)(uint) * (ushort *)(self + 0x3a) <= iVar5) {
    iVar5 = *(ushort *)(self + 0x3a) - 1;
  }
  *arg3 = iVar5;
  return;
}

/* ======================================================================
 * TileLevel__TileCollisionResponse  (Ghidra `TileCollisionResponse` @ 0058e1e0)
 * Signature: uint8_t __thiscall TileCollisionResponse(TileLevel * self, SceneObject2D * arg1, Vector2 * arg2, TileCollisionInfo * arg3)
 * Class: TileLevel
 * Calls: `Vector2__operator_assign`, `Vector2__operator_minus__005be180`, `Vector2__operator_plus__005be140`
 * Called by: (none)
 */
/* TileLevel__TileCollisionResponse(SceneObject2D*, Vector2 const&, TileCollisionInfo&) */

uint __thiscall TileLevel__TileCollisionResponse(TileLevel *self, SceneObject2D *arg1,
                                                 Vector2 *arg2, TileCollisionInfo *arg3)

{
  long *plVar1;
  float fVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  uint64_t uVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  Vector2 *local_280;
  Vector2 *local_278;
  uint local_264;
  uint local_258;
  uint local_254;
  long local_248[8];
  uint64_t local_208;
  Vector2 local_1f8[16];
  uint64_t local_1e8[2];
  uint32_t local_1d8;
  uint32_t local_1d4;
  uint local_1c8;
  uint local_1c4;
  Vector2 local_1b8[16];
  uint32_t local_1a8;
  uint32_t local_1a4;
  uint local_198;
  uint local_194;
  Vector2 local_188[16];
  uint32_t local_178;
  uint32_t local_174;
  uint local_168;
  uint local_164;
  Vector2 local_158[16];
  uint32_t local_148;
  uint32_t local_144;
  uint local_138;
  uint local_134;
  Vector2 local_128[16];
  uint32_t local_118;
  uint32_t local_114;
  uint local_108;
  uint local_104;
  Vector2 local_f8[16];
  uint32_t local_e8;
  uint32_t local_e4;
  uint local_d8;
  uint local_d4;
  Vector2 local_c8[16];
  uint32_t local_b8;
  uint32_t local_b4;
  uint local_a8;
  uint local_a4;
  Vector2 local_98[16];
  uint32_t local_88;
  uint32_t local_84;
  uint local_78;
  uint local_74;
  Vector2 local_68[16];
  int local_58[4];
  int local_48[6];

  *(uint64_t *)(arg3 + 0x10) = 0;
  *(uint64_t *)(arg3 + 0x18) = 0;
  *(uint64_t *)(arg3 + 8) = 0;
  *(uint64_t *)arg3 = 0;
  *(uint32_t *)(arg3 + 0x24) = 0;
  *(uint32_t *)(arg3 + 0x20) = 0;
  local_208 = *(uint64_t *)(arg1 + 0xa0);
  Vector2__operator_minus__005be180(local_1f8, (Vector2 *)(arg1 + 0xa0));
  local_1e8[0] = *(uint64_t *)(arg1 + 0xb8);
  fVar2 = *(float *)(arg1 + 0xc4);
  lVar4 = *(long *)(arg1 + 0x48);
  if (lVar4 == 0) {
    local_264 = *(uint *)(arg1 + 0xd0);
    uVar3 = *(uint *)(arg1 + 0xd4);
  } else {
    local_264 = *(uint *)(lVar4 + 0x8c);
    uVar3 = *(uint *)(lVar4 + 0x90);
  }
  local_58[0] = 0;
  local_48[0] = 0;
  if (*(float *)(arg1 + 0xc0) <= 0.0) {
    if (0.0 <= *(float *)(arg1 + 0xc0)) {
      local_254 = 0;
      local_258 = 0;
      uVar10 = local_254;
      uVar5 = DAT_005be6f0 /* R:u32=2147483648 */;
      uVar6 = local_208;
    } else {
      lVar4 = *(long *)self;
      local_174 = *(uint32_t *)(arg2 + 4);
      uVar10 = local_264 ^ DAT_005be6f0 /* R:u32=2147483648 */;
      local_178 = (uint32_t)local_208;
      local_164 = DAT_005be6f0 /* R:u32=2147483648 */ ^ uVar3;
      local_168 = uVar10;
      Vector2__operator_plus__005be140(local_158, (Vector2 *)&local_178);
      iVar7 = GetGridIndex(self, local_158, (Vector2 *)(arg3 + 0x40), local_58, local_48);
      lVar4 = lVar4 + (long)iVar7 * 4;
      iVar7 = (**(code **)(**(long **)(self + 0x40) + 0x40))(*(long **)(self + 0x40), lVar4,
                                                             &local_208, arg2, local_1e8, arg1,
                                                             (Vector2 *)(arg3 + 0x40), 4, 0);
      local_254 = 1;
      if (iVar7 == 1) {
        *(uint32_t *)(arg3 + 0x24) = 4;
        *(long *)(arg3 + 0x18) = lVar4;
        local_254 = 2;
        local_248[0] = lVar4;
      }
      local_258 = (uint)(iVar7 == 1);
      lVar4 = *(long *)self;
      local_144 = *(uint32_t *)(arg2 + 4);
      local_148 = (uint32_t)local_208;
      local_138 = uVar10;
      local_134 = uVar3;
      Vector2__operator_plus__005be140(local_128, (Vector2 *)&local_148);
      iVar7 = GetGridIndex(self, local_128, (Vector2 *)(arg3 + 0x38), local_58, local_48);
      lVar4 = lVar4 + (long)iVar7 * 4;
      iVar7 = (**(code **)(**(long **)(self + 0x40) + 0x40))(*(long **)(self + 0x40), lVar4,
                                                             &local_208, arg2, local_1e8, arg1,
                                                             (Vector2 *)(arg3 + 0x38), 4, 0);
      uVar10 = local_258;
      uVar5 = DAT_005be6f0 /* R:u32=2147483648 */;
      uVar6 = local_208;
      if (iVar7 == 1) {
        lVar8 = (long)(int)local_258;
        *(uint32_t *)(arg3 + 0x24) = 4;
        *(long *)(arg3 + 0x10) = lVar4;
        local_258 = 1;
        local_248[lVar8] = lVar4;
        uVar10 = local_254;
        uVar5 = DAT_005be6f0 /* R:u32=2147483648 */;
        uVar6 = local_208;
      }
    }
  } else {
    local_1c8 = local_264;
    lVar4 = *(long *)self;
    local_1d4 = *(uint32_t *)(arg2 + 4);
    local_1c4 = DAT_005be6f0 /* R:u32=2147483648 */ ^ uVar3;
    local_1d8 = (uint32_t)local_208;
    Vector2__operator_plus__005be140(local_1b8, (Vector2 *)&local_1d8);
    iVar7 = GetGridIndex(self, local_1b8, (Vector2 *)(arg3 + 0x40), local_58, local_48);
    lVar4 = lVar4 + (long)iVar7 * 4;
    iVar7 = (**(code **)(**(long **)(self + 0x40) + 0x40))(*(long **)(self + 0x40), lVar4,
                                                           &local_208, arg2, local_1e8, arg1,
                                                           (Vector2 *)(arg3 + 0x40), 8, 0);
    local_254 = 1;
    if (iVar7 == 1) {
      *(uint32_t *)(arg3 + 0x24) = 8;
      *(long *)(arg3 + 0x18) = lVar4;
      local_254 = 2;
      local_248[0] = lVar4;
    }
    local_258 = (uint)(iVar7 == 1);
    lVar4 = *(long *)self;
    local_1a4 = *(uint32_t *)(arg2 + 4);
    local_1a8 = (uint32_t)local_208;
    local_198 = local_264;
    local_194 = uVar3;
    Vector2__operator_plus__005be140(local_188, (Vector2 *)&local_1a8);
    iVar7 = GetGridIndex(self, local_188, (Vector2 *)(arg3 + 0x38), local_58, local_48);
    lVar4 = lVar4 + (long)iVar7 * 4;
    iVar7 = (**(code **)(**(long **)(self + 0x40) + 0x40))(*(long **)(self + 0x40), lVar4,
                                                           &local_208, arg2, local_1e8, arg1,
                                                           (Vector2 *)(arg3 + 0x38), 8, 0);
    uVar10 = local_258;
    uVar5 = DAT_005be6f0 /* R:u32=2147483648 */;
    uVar6 = local_208;
    if (iVar7 == 1) {
      lVar8 = (long)(int)local_258;
      *(uint32_t *)(arg3 + 0x24) = 8;
      *(long *)(arg3 + 0x10) = lVar4;
      local_258 = 1;
      local_248[lVar8] = lVar4;
      uVar10 = local_254;
      uVar5 = DAT_005be6f0 /* R:u32=2147483648 */;
      uVar6 = local_208;
    }
  }
  local_208._4_4_ = (uint32_t)((ulong)uVar6 >> 0x20);
  DAT_005be6f0 /* R:u32=2147483648 */ = uVar5;
  local_208 = uVar6;
  if (fVar2 <= 0.0) {
    local_278 = (Vector2 *)local_1e8;
    local_280 = (Vector2 *)&local_208;
    if (fVar2 < 0.0) {
      local_b8 = *(uint32_t *)arg2;
      lVar4 = *(long *)self;
      local_a8 = local_264;
      local_b4 = local_208._4_4_;
      local_a4 = uVar3 ^ uVar5;
      Vector2__operator_plus__005be140(local_98, (Vector2 *)&local_b8);
      iVar7 = GetGridIndex(self, local_98, (Vector2 *)(arg3 + 0x28), local_58, local_48);
      lVar4 = lVar4 + (long)iVar7 * 4;
      if ((*(int *)(arg3 + 0x48) == 0) || (uVar10 == 0)) {
      LAB_0058e85e:
        iVar7 = (**(code **)(**(long **)(self + 0x40) + 0x40))(*(long **)(self + 0x40), lVar4,
                                                               local_280, arg2, local_278, arg1,
                                                               (Vector2 *)(arg3 + 0x28), 2, 0);
        if (iVar7 == 1) {
          *(uint32_t *)(arg3 + 0x20) = 2;
          *(long *)arg3 = lVar4;
          local_258 = 1;
        }
      } else if (lVar4 != local_248[0]) {
        plVar9 = local_248;
        plVar1 = plVar9 + (uVar10 - 1);
        do {
          if (plVar9 == plVar1)
            goto LAB_0058e85e;
          plVar9 = plVar9 + 1;
        } while (lVar4 != *plVar9);
      }
      local_78 = uVar5 ^ local_264;
      local_88 = *(uint32_t *)arg2;
      lVar4 = *(long *)self;
      local_84 = local_208._4_4_;
      local_74 = uVar3 ^ uVar5;
      Vector2__operator_plus__005be140(local_68, (Vector2 *)&local_88);
      iVar7 = GetGridIndex(self, local_68, (Vector2 *)(arg3 + 0x30), local_58, local_48);
      lVar4 = lVar4 + (long)iVar7 * 4;
      if ((*(int *)(arg3 + 0x48) == 0) || (uVar10 == 0)) {
      LAB_0058e946:
        iVar7 = (**(code **)(**(long **)(self + 0x40) + 0x40))(*(long **)(self + 0x40), lVar4,
                                                               local_280, arg2, local_278, arg1,
                                                               (Vector2 *)(arg3 + 0x30), 2, 0);
        uVar6 = local_208;
        if (iVar7 == 1) {
          *(uint32_t *)(arg3 + 0x20) = 2;
          *(long *)(arg3 + 8) = lVar4;
          local_258 = 1;
        }
      } else {
        uVar6 = local_208;
        if (lVar4 != local_248[0]) {
          plVar9 = local_248;
          plVar1 = plVar9 + (uVar10 - 1);
          do {
            if (plVar9 == plVar1)
              goto LAB_0058e946;
            plVar9 = plVar9 + 1;
          } while (lVar4 != *plVar9);
        }
      }
    }
  } else {
    local_278 = (Vector2 *)local_1e8;
    local_280 = (Vector2 *)&local_208;
    local_118 = *(uint32_t *)arg2;
    lVar4 = *(long *)self;
    local_108 = local_264;
    local_114 = local_208._4_4_;
    local_104 = uVar3;
    Vector2__operator_plus__005be140(local_f8, (Vector2 *)&local_118);
    iVar7 = GetGridIndex(self, local_f8, (Vector2 *)(arg3 + 0x28), local_58, local_48);
    lVar4 = lVar4 + (long)iVar7 * 4;
    if ((*(int *)(arg3 + 0x48) == 0) || (uVar10 == 0)) {
    LAB_0058e59b:
      iVar7 = (**(code **)(**(long **)(self + 0x40) + 0x40))(*(long **)(self + 0x40), lVar4,
                                                             local_280, arg2, local_278, arg1,
                                                             (Vector2 *)(arg3 + 0x28), 1, 0);
      if (iVar7 == 1) {
        *(uint32_t *)(arg3 + 0x20) = 1;
        *(long *)arg3 = lVar4;
        local_258 = 1;
      }
    } else if (lVar4 != local_248[0]) {
      plVar9 = local_248;
      plVar1 = plVar9 + (uVar10 - 1);
      do {
        if (plVar9 == plVar1)
          goto LAB_0058e59b;
        plVar9 = plVar9 + 1;
      } while (lVar4 != *plVar9);
    }
    local_e8 = *(uint32_t *)arg2;
    local_d8 = DAT_005be6f0 /* R:u32=2147483648 */ ^ local_264;
    lVar4 = *(long *)self;
    local_e4 = local_208._4_4_;
    local_d4 = uVar3;
    Vector2__operator_plus__005be140(local_c8, (Vector2 *)&local_e8);
    iVar7 = GetGridIndex(self, local_c8, (Vector2 *)(arg3 + 0x30), local_58, local_48);
    lVar4 = lVar4 + (long)iVar7 * 4;
    if ((*(int *)(arg3 + 0x48) == 0) || (uVar10 == 0)) {
    LAB_0058e681:
      iVar7 = (**(code **)(**(long **)(self + 0x40) + 0x40))(*(long **)(self + 0x40), lVar4,
                                                             local_280, arg2, local_278, arg1,
                                                             (Vector2 *)(arg3 + 0x30), 1, 0);
      uVar6 = local_208;
      if (iVar7 == 1) {
        *(uint32_t *)(arg3 + 0x20) = 1;
        *(long *)(arg3 + 8) = lVar4;
        local_258 = 1;
      }
    } else {
      uVar6 = local_208;
      if (lVar4 != local_248[0]) {
        plVar9 = local_248;
        plVar1 = plVar9 + (uVar10 - 1);
        do {
          if (plVar9 == plVar1)
            goto LAB_0058e681;
          plVar9 = plVar9 + 1;
        } while (lVar4 != *plVar9);
      }
    }
  }
  local_208 = uVar6;
  local_278 = (Vector2 *)local_1e8;
  local_280 = (Vector2 *)&local_208;
  *(uint32_t *)(arg1 + 0x9c) = 1;
  Vector2__operator_assign((Vector2 *)(arg1 + 0xa0), local_280);
  Vector2__operator_assign((Vector2 *)(arg1 + 0xb8), local_278);
  return local_258;
}

/* ======================================================================
 * TileLevel__TileLineOfSight  (Ghidra `TileLineOfSight` @ 0058ee00)
 * Signature: uint8_t __thiscall TileLineOfSight(TileLevel * self, Vector2 * arg1, Vector2 * arg2, Vector2 * arg3)
 * Class: TileLevel
 * Calls: `Vector2__operator_assign`, `Vector2__operator_div_assign__005be2c0`, `Vector2__operator_minus__005be180`, `Vector2__operator_mul__005be200`, `Vector2__operator_plus_assign`
 * Called by: `ApplyObstacleForces`, `SMBPalette__Update`
 */
/* TileLevel__TileLineOfSight(Vector2 const&, Vector2 const&, Vector2&) */

uint64_t __thiscall TileLevel__TileLineOfSight(TileLevel *self, Vector2 *arg1, Vector2 *arg2,
                                               Vector2 *arg3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  Vector2 local_58[16];
  uint64_t local_48;
  Vector2 local_38[24];

  Vector2__operator_assign(arg3, arg2);
  Vector2__operator_minus__005be180(local_58, arg2);
  fVar7 = (float)Vector2__Length(local_58);
  if (DAT_005bf760 /* R:0.0f */ < fVar7) {
    Vector2__operator_div_assign__005be2c0(local_58, fVar7);
    fVar8 = fVar7 / (DAT_005be6e4 /* R:0.5f */ * fLevelGridWH);
    lVar5 = (long)fVar8;
    if ((float)lVar5 < fVar8) {
      lVar5 = lVar5 + 1;
    }
    local_48 = *(uint64_t *)arg1;
    iVar3 = (int)lVar5;
    if (iVar3 < 1) {
      return 1;
    }
    iVar6 = 0;
    while (true) {
      uVar1 = *(ushort *)(self + 0x38);
      fVar8 = ((float)local_48 - *(float *)(self + 0x30)) / fLevelGridWH;
      lVar5 = (long)fVar8;
      if (fVar8 < (float)lVar5) {
        lVar5 = lVar5 + -1;
      }
      iVar2 = (int)lVar5;
      if (iVar2 < 0) {
        iVar2 = 0;
      }
      fVar8 = (local_48._4_4_ - *(float *)(self + 0x34)) / fLevelGridWH;
      if ((int)(uint)uVar1 <= iVar2) {
        iVar2 = uVar1 - 1;
      }
      lVar5 = (long)fVar8;
      if (fVar8 < (float)lVar5) {
        lVar5 = lVar5 + -1;
      }
      iVar4 = (int)lVar5;
      if (iVar4 < 0) {
        iVar4 = 0;
      }
      if ((int)(uint) * (ushort *)(self + 0x3a) <= iVar4) {
        iVar4 = *(ushort *)(self + 0x3a) - 1;
      }
      if (*(char *)(*(long *)self + (long)(int)(iVar2 + iVar4 * (uint)uVar1) * 4) != '\0') {
        Vector2__operator_assign(arg3, (Vector2 *)&local_48);
        return 0;
      }
      Vector2__operator_mul__005be200(local_38, fVar7 / (float)iVar3);
      Vector2__operator_plus_assign((Vector2 *)&local_48, local_38);
      if (iVar6 == iVar3 + -1)
        break;
      iVar6 = iVar6 + 1;
    }
  }
  return 1;
}

/* ======================================================================
 * TileLevel__TileCollision  (Ghidra `TileCollision` @ 0058efb0)
 * Signature: uint8_t __thiscall TileCollision(TileLevel * self, SceneObject2D * arg1, TileCollisionInfo * arg2)
 * Class: TileLevel
 * Calls: `Vector2__operator_assign`, `Vector2__operator_div__005be2a0`, `Vector2__operator_minus__005be180`, `Vector2__operator_mul__005be200`, `Vector2__operator_plus_assign`
 * Called by: `MeatBoyCharactor__ProcessReplayFrame`, `MeatBoyCharactor__Update`, `SMBAnimalAirCritterUpdate`, `SMBAnimalAirEnemyUpdate`, `SMBAnimalGroundCritterUpdate`, `SMBAnimalGroundEnemyUpdate`, `SMBAnimal__Update`, `SMBBossGroundCritterUpdate`, `SMBChargerUpdate`, `SMBHellBossBoyUpdate` (+2 more)
 */
/* TileLevel__TileCollision(SceneObject2D*, TileCollisionInfo&) */

void __thiscall TileLevel__TileCollision(TileLevel *self, SceneObject2D *arg1,
                                         TileCollisionInfo *arg2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  uint64_t local_d8[2];
  uint64_t local_c8[2];
  uint64_t local_b8;
  Vector2 local_a8[16];
  Vector2 local_98[16];
  Vector2 local_88[16];
  uint32_t local_78;
  uint32_t local_74;
  uint64_t local_68[2];
  Vector2 local_58[16];
  uint64_t local_48;

  local_d8[0] = *(uint64_t *)(arg1 + 0xa0);
  local_c8[0] = *(uint64_t *)(arg1 + 0xa8);
  local_b8 = *(uint64_t *)(arg1 + 0xc0);
  Vector2__operator_minus__005be180(local_a8, (Vector2 *)local_c8);
  fVar5 = (float)Vector2__Length(local_a8);
  fVar6 = DAT_005be6e4 /* R:0.5f */;
  if (fVar5 <= fLevelGridWH * DAT_005be6e4 /* R:0.5f */) {
    TileCollisionResponse(self, arg1, (Vector2 *)(arg1 + 0xa8), arg2);
  } else {
    if (*(float *)(arg1 + 0x80) <= 0.0) {
      local_74 = 0x3f800000;
      local_78 = 0;
      Vector2__operator_assign(local_98, (Vector2 *)&local_78);
    } else {
      Vector2__operator_div__005be2a0(local_88, *(float *)(arg1 + 0x80));
      Vector2__operator_assign(local_98, local_88);
    }
    fVar6 = fVar5 / (fVar6 * fLevelGridWH);
    lVar4 = (long)fVar6;
    if ((float)lVar4 < fVar6) {
      lVar4 = lVar4 + 1;
    }
    iVar3 = (int)lVar4;
    local_68[0] = local_c8[0];
    if (0 < iVar3) {
      iVar2 = 0;
      do {
        Vector2__operator_assign((Vector2 *)local_c8, (Vector2 *)local_68);
        Vector2__operator_mul__005be200(local_58, fVar5 / (float)iVar3);
        Vector2__operator_plus_assign((Vector2 *)local_68, local_58);
        *(uint32_t *)(arg1 + 0x9c) = 1;
        Vector2__operator_assign((Vector2 *)(arg1 + 0xa0), (Vector2 *)local_68);
        iVar1 = TileCollisionResponse(self, arg1, (Vector2 *)local_c8, arg2);
        if (iVar1 == 1) {
          local_48 = local_d8[0];
          if (*(int *)(arg2 + 0x20) != 0) {
            local_48 = CONCAT44(*(uint32_t *)(arg1 + 0xa4), (int)local_d8[0]);
          }
          if (*(int *)(arg2 + 0x24) != 0) {
            local_48 = CONCAT44(local_48._4_4_, *(uint32_t *)(arg1 + 0xa0));
          }
          *(uint32_t *)(arg1 + 0x9c) = 1;
          Vector2__operator_assign((Vector2 *)(arg1 + 0xa0), (Vector2 *)&local_48);
          return;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar3);
    }
    *(uint32_t *)(arg1 + 0x9c) = 1;
    Vector2__operator_assign((Vector2 *)(arg1 + 0xa0), (Vector2 *)local_d8);
  }
  return;
}

/* ======================================================================
 * TileLevel__PlaceTile  (Ghidra `PlaceTile` @ 0058f260)
 * Signature: uint8_t __thiscall PlaceTile(TileLevel * self, int arg1, int arg2, GRIDBLOCK * arg3, tagTileLayerLevelType arg4)
 * Class: TileLevel
 * Calls: (none)
 * Called by: `DeSelectTile`, `DeleteSelected_Selection`, `FillSelected_Selection`, `PasteSelectedTiles`, `PlaceTile`, `RemoveTile`, `SelectTile`
 */
/* TileLevel__PlaceTile(int, int, GRIDBLOCK&, tagTileLayerLevelType) */

void __thiscall TileLevel__PlaceTile(TileLevel *self, int arg1, int arg2, uint32_t *arg3, int arg5)

{
  if (arg5 == 1) {
    *(uint32_t *)(*(long *)(self + 8) +
                  (long)(int)((uint) * (ushort *)(self + 0x38) * arg2 + arg1) * 4) = *arg3;
    return;
  }
  if (arg5 != 2) {
    *(uint32_t *)(*(long *)self + (long)(int)(arg1 + arg2 * (uint) * (ushort *)(self + 0x38)) * 4) =
        *arg3;
    return;
  }
  *(uint32_t *)(*(long *)(self + 0x10) +
                (long)(int)((uint) * (ushort *)(self + 0x38) * arg2 + arg1) * 4) = *arg3;
  return;
}

/* ======================================================================
 * TileLevel__PlaceSetPiece  (Ghidra `PlaceSetPiece` @ 0058f2c0)
 * Signature: uint8_t __thiscall PlaceSetPiece(TileLevel * self, TileLevelSetPiece * arg1, tagTileLayerLevelType arg2)
 * Class: TileLevel
 * Calls: `RenderLayer__InsertObjectBefore`, `Vector2__operator_assign`
 * Called by: `PasteSelectedPieces`, `PlaceSetPiece`
 */
/* TileLevel__PlaceSetPiece(TileLevelSetPiece const*, tagTileLayerLevelType) */

void __thiscall TileLevel__PlaceSetPiece(TileLevel *self, long arg1, uint32_t arg3)

{
  RenderLayerObject *pRVar1;
  TileLevel *this_00;
  long lVar2;
  long lVar3;

  lVar3 = 0;
  lVar2 = *(long *)(self + 0x60);
  do {
    if (*(long *)(lVar2 + 0x60) == 0) {
      *(uint64_t *)(lVar2 + 8) = *(uint64_t *)(arg1 + 8);
      *(uint64_t *)(lVar2 + 0x10) = *(uint64_t *)(arg1 + 0x10);
      *(uint64_t *)(lVar2 + 0x18) = *(uint64_t *)(arg1 + 0x18);
      *(uint16_t *)(lVar2 + 0x20) = *(uint16_t *)(arg1 + 0x20);
      *(uint32_t *)(lVar2 + 0x24) = *(uint32_t *)(arg1 + 0x24);
      *(uint32_t *)(lVar2 + 0x28) = *(uint32_t *)(arg1 + 0x28);
      *(uint32_t *)(lVar2 + 0x2c) = *(uint32_t *)(arg1 + 0x2c);
      *(uint32_t *)(lVar2 + 0x30) = *(uint32_t *)(arg1 + 0x30);
      Vector2__operator_assign((Vector2 *)(lVar2 + 0x34), (Vector2 *)(arg1 + 0x34));
      *(uint32_t *)(lVar2 + 0x3c) = *(uint32_t *)(arg1 + 0x3c);
      *(uint32_t *)(lVar2 + 0x40) = *(uint32_t *)(arg1 + 0x40);
      *(uint32_t *)(lVar2 + 0x44) = *(uint32_t *)(arg1 + 0x44);
      *(uint32_t *)(lVar2 + 0x48) = *(uint32_t *)(arg1 + 0x48);
      *(uint64_t *)(lVar2 + 0x4c) = *(uint64_t *)(arg1 + 0x4c);
      *(uint64_t *)(lVar2 + 0x54) = *(uint64_t *)(arg1 + 0x54);
      *(uint64_t *)(lVar2 + 0x60) = *(uint64_t *)(arg1 + 0x60);
      *(TileLevel **)(*(long *)(self + 0x60) + 0x60 + lVar3) = self;
      switch (arg3) {
      default:
        this_00 = self + 0x1140;
        break;
      case 1:
        this_00 = self + 0x1580;
        break;
      case 2:
        this_00 = self + 0xd00;
        break;
      case 3:
        this_00 = self + 0x8d0;
        break;
      case 4:
        this_00 = self + 0x4a0;
        break;
      case 5:
        this_00 = self + 0x70;
        break;
      case 6:
        this_00 = self + 0x1df0;
        break;
      case 7:
        this_00 = self + 0x19c0;
      }
      for (pRVar1 = *(RenderLayerObject **)(this_00 + 8);
           (pRVar1 != (RenderLayerObject *)0x0 &&
            ((((byte)pRVar1[0x21] & 2) != 0 ||
              (*(float *)(arg1 + 0x2c) < *(float *)(pRVar1 + 0x2c) ||
               *(float *)(arg1 + 0x2c) == *(float *)(pRVar1 + 0x2c)))));
           pRVar1 = *(RenderLayerObject **)(pRVar1 + 8)) {
      }
      RenderLayer__InsertObjectBefore(
          (RenderLayer *)this_00, (RenderLayerObject *)(lVar3 + *(long *)(self + 0x60)), pRVar1);
      *(int *)(self + 0x68) = *(int *)(self + 0x68) + 1;
      return;
    }
    lVar3 = lVar3 + 0x68;
    lVar2 = lVar2 + 0x68;
  } while (lVar3 != 0xa280);
  return;
}

/* ======================================================================
 * TileLevel__RemoveSetPiece  (Ghidra `RemoveSetPiece` @ 0058f440)
 * Signature: uint8_t __thiscall RemoveSetPiece(TileLevel * self, TileLevelSetPiece * arg1)
 * Class: TileLevel
 * Calls: `RenderLayer__RemoveObject`
 * Called by: `RemoveSetPieces`
 */
/* TileLevel__RemoveSetPiece(TileLevelSetPiece*) */

void __thiscall TileLevel__RemoveSetPiece(TileLevel *self, TileLevelSetPiece *arg1)

{
  RenderLayerObject *pRVar1;
  long lVar2;

  lVar2 = (long)(int)((ulong)((long)arg1 - *(long *)(self + 0x60)) / 0x68) * 0x68;
  pRVar1 = (RenderLayerObject *)(*(long *)(self + 0x60) + lVar2);
  RenderLayer__RemoveObject(*(RenderLayer **)(pRVar1 + 0x18), pRVar1);
  *(uint64_t *)(*(long *)(self + 0x60) + 0x60 + lVar2) = 0;
  *(int *)(self + 0x68) = *(int *)(self + 0x68) + -1;
  return;
}

/* ======================================================================
 * TileLevel__AddLevelLayers  (Ghidra `AddLevelLayers` @ 0058f4b0)
 * Signature: uint8_t __thiscall AddLevelLayers(TileLevel * self, RenderLayer * arg1, RenderLayer * arg2)
 * Class: TileLevel
 * Calls: (none)
 * Called by: `GSuperMeatBoy__SetCurrentLevel`, `GSuperMeatBoy__ShowGame`
 */
/* TileLevel__AddLevelLayers(RenderLayer*, RenderLayer*) */

void __thiscall TileLevel__AddLevelLayers(TileLevel *self, RenderLayer *arg1, RenderLayer *arg2)

{
  *(RenderLayer **)(self + 0x50) = arg2;
  *(RenderLayer **)(self + 0x58) = arg1;
  RenderLayers__InsertLayerBefore((RenderLayer *)(self + 0x70), arg1);
  RenderLayers__InsertLayerBefore((RenderLayer *)(self + 0x4a0), arg1);
  RenderLayers__InsertLayerBefore((RenderLayer *)(self + 0xd00), arg1);
  RenderLayers__InsertLayerBefore((RenderLayer *)(self + 0x8d0), arg1);
  RenderLayers__InsertLayerBefore((RenderLayer *)(self + 0x1140), arg1);
  RenderLayers__InsertLayerAfter((RenderLayer *)(self + 0x1df0), arg1);
  RenderLayers__InsertLayerAfter((RenderLayer *)(self + 0x1580), arg1);
  RenderLayers__InsertLayerAfter((RenderLayer *)(self + 0x19c0), arg1);
  return;
}

/* ======================================================================
 * TileLevel__RemoveLevelLayers  (Ghidra `RemoveLevelLayers` @ 0058f540)
 * Signature: uint8_t __thiscall RemoveLevelLayers(TileLevel * self)
 * Class: TileLevel
 * Calls: (none)
 * Called by: `GSuperMeatBoy__HideGame`
 */
/* TileLevel__RemoveLevelLayers() */

void __thiscall TileLevel__RemoveLevelLayers(TileLevel *self)

{
  RenderLayers__RemoveLayer((RenderLayer *)(self + 0x8d0));
  RenderLayers__RemoveLayer((RenderLayer *)(self + 0x4a0));
  RenderLayers__RemoveLayer((RenderLayer *)(self + 0x70));
  RenderLayers__RemoveLayer((RenderLayer *)(self + 0xd00));
  RenderLayers__RemoveLayer((RenderLayer *)(self + 0x1140));
  RenderLayers__RemoveLayer((RenderLayer *)(self + 0x1580));
  RenderLayers__RemoveLayer((RenderLayer *)(self + 0x1df0));
  RenderLayers__RemoveLayer((RenderLayer *)(self + 0x19c0));
  return;
}

/* ======================================================================
 * TileLevel__BuildTileStreams  (Ghidra `BuildTileStreams` @ 005910b0)
 * Signature: uint8_t __thiscall BuildTileStreams(TileLevel * self)
 * Class: TileLevel
 * Calls: `Vector2__operator_plus__005be140`, `VertexBuffer__Lock`, `VertexBuffer__Realloc`, `VertexBuffer__Unlock`
 * Called by: `GSuperMeatBoy__SetCurrentLevel`, `MrMinecraft__ManipulateBlock`, `MrMinecraft__ResetBlocks`, `ResetLightAndLayerAssets`, `SMBEditor__DeActivate`
 */
/* TileLevel__BuildTileStreams() */

void __thiscall TileLevel__BuildTileStreams(TileLevel *self)

{
  long lVar1;
  long lVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  ulong uVar7;
  VertexBuffer *this_00;
  uint32_t uVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  uint local_d4;
  ushort local_be;
  float local_bc;
  long local_b8;
  long local_a8[4];
  long local_88[4];
  Vector2 local_68[16];
  float local_58;
  float local_54;
  void *local_48;
  int local_40;
  int local_3c[3];

  if ((*(int *)(self + 0x22c4) != 0) && (*(long *)(self + 0x40) != 0)) {
    local_88[0] = *(long *)(self + 0x18);
    this_00 = *(VertexBuffer **)(local_88[0] + 0x20);
    uVar7 = (ulong)((uint) * (ushort *)(self + 0x38) * (uint) * (ushort *)(self + 0x3a) * 0x60);
    if (*(ulong *)(this_00 + 0x10) < uVar7) {
      VertexBuffer__Realloc(this_00, uVar7);
      VertexBuffer__Realloc(*(VertexBuffer **)(*(long *)(self + 0x28) + 0x20), uVar7);
      VertexBuffer__Realloc(*(VertexBuffer **)(*(long *)(self + 0x20) + 0x20), uVar7);
      local_88[0] = *(long *)(self + 0x18);
      this_00 = *(VertexBuffer **)(local_88[0] + 0x20);
    }
    fVar10 = DAT_005be6e4 /* R:0.5f */ * fLevelGridWH;
    local_b8 = 0;
    local_a8[0] = *(long *)self;
    local_88[1] = *(uint64_t *)(self + 0x20);
    local_a8[1] = *(uint64_t *)(self + 0x10);
    local_88[2] = *(uint64_t *)(self + 0x28);
    local_a8[2] = *(uint64_t *)(self + 8);
    while (true) {
      lVar1 = *(long *)((long)local_88 + local_b8);
      uVar7 = 0;
      uVar8 = 0;
      iVar9 = 0;
      VertexBuffer__Lock(this_00, &local_48, 1, 0);
      if (*(ushort *)(self + 0x38) != 0) {
        uVar3 = *(ushort *)(self + 0x3a);
        local_d4 = 0;
        uVar5 = (uint) * (ushort *)(self + 0x38);
        local_be = 0;
        local_bc = 0.0;
        do {
          if (uVar3 != 0) {
            uVar4 = 0;
            uVar6 = 0;
            lVar2 = *(long *)((long)local_a8 + local_b8);
            fVar11 = 0.0;
            while (true) {
              local_54 = fVar10 + fVar11;
              uVar6 = uVar6 + 1;
              local_58 = local_bc + fVar10;
              Vector2__operator_plus__005be140(local_68, (Vector2 *)&local_58);
              local_3c[0] = 0;
              local_40 = 0;
              (**(code **)(**(long **)(self + 0x40) + 0x48))(
                  *(long **)(self + 0x40), (void *)(uVar7 * 0x10 + (long)local_48),
                  lVar2 + (long)(int)(uVar4 * uVar5 + local_d4) * 4, local_68, &local_40, local_3c,
                  fVar11);
              uVar3 = *(ushort *)(self + 0x3a);
              iVar9 = iVar9 + local_40;
              uVar4 = (uint)uVar6;
              uVar7 = (ulong)(uint)((int)uVar7 + local_3c[0]);
              if (uVar3 <= uVar6)
                break;
              fVar11 = fVar11 + fLevelGridWH;
              uVar5 = (uint) * (ushort *)(self + 0x38);
            }
            uVar5 = (uint) * (ushort *)(self + 0x38);
          }
          uVar8 = (uint32_t)uVar7;
          local_be = local_be + 1;
          local_bc = fLevelGridWH + local_bc;
          local_d4 = (uint)local_be;
        } while (local_be < uVar5);
      }
      *(int *)(lVar1 + 0x10) = iVar9;
      *(uint32_t *)(lVar1 + 0x14) = uVar8;
      VertexBuffer__Unlock(*(VertexBuffer **)(lVar1 + 0x20));
      if (local_b8 + 8 == 0x18)
        break;
      this_00 = *(VertexBuffer **)(*(long *)((long)local_88 + local_b8 + 8) + 0x20);
      local_b8 = local_b8 + 8;
    }
  }
  return;
}

/* ======================================================================
 * TileLevel__BuildSetPieceStreams  (Ghidra `BuildSetPieceStreams` @ 00591370)
 * Signature: uint8_t __stdcall BuildSetPieceStreams(void)
 * Class: TileLevel
 * Calls: (none)
 * Called by: `GSuperMeatBoy__SetCurrentLevel`, `ResetLightAndLayerAssets`, `SMBEditor__DeActivate`
 */
/* TileLevel__BuildSetPieceStreams() */

void TileLevel__BuildSetPieceStreams(void)

{
  return;
}

/* ======================================================================
 * TileLevel__ExtendLevelToWH  (Ghidra `ExtendLevelToWH` @ 00591380)
 * Signature: uint8_t __thiscall ExtendLevelToWH(TileLevel * self, ushort arg1, ushort arg2)
 * Class: TileLevel
 * Calls: `Vector2__operator_assign`
 * Called by: `SMBEditor__ResizeLevel`
 */
/* TileLevel__ExtendLevelToWH(unsigned short, unsigned short) */

void __thiscall TileLevel__ExtendLevelToWH(TileLevel *self, ushort arg1, ushort arg2)

{
  uint32_t *puVar1;
  short sVar2;
  short sVar3;
  uint uVar4;
  ushort uVar5;
  ushort uVar6;
  ulong *puVar7;
  ulong *puVar8;
  uint uVar9;
  ulong uVar10;
  uint8_t (*pauVar11)[16];
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  uint uVar16;
  uint uVar17;
  long lVar18;
  ushort uVar19;
  uint uVar20;
  ulong uVar21;
  int iVar22;
  float fVar23;
  long local_88[4];
  ulong *local_68[4];
  float local_48;
  float local_44;

  if ((arg2 < *(ushort *)(self + 0x3a)) && (arg1 < *(ushort *)(self + 0x38))) {
    return;
  }
  iVar22 = (uint)arg1 * (uint)arg2;
  uVar21 = (ulong)(iVar22 * 3);
  puVar7 = operator_new__(uVar21 * 4 + 8);
  lVar18 = uVar21 - 1;
  *puVar7 = uVar21;
  puVar7 = puVar7 + 1;
  if (lVar18 != -1) {
    uVar10 = (ulong)(-(((uint)puVar7 & 0xf) >> 2) & 3);
    if (uVar21 <= uVar10) {
      uVar10 = uVar21;
    }
    puVar8 = puVar7;
    if (uVar10 != 0) {
      uVar13 = 0;
      do {
        uVar13 = uVar13 + 1;
        *(uint32_t *)puVar8 = 0;
        lVar18 = lVar18 + -1;
        puVar8 = (ulong *)((long)puVar8 + 4);
      } while (uVar13 < uVar10);
      if (uVar21 == uVar10)
        goto LAB_00591490;
    }
    uVar13 = uVar21 - uVar10 >> 2;
    if (uVar13 != 0) {
      pauVar11 = (uint8_t (*)[16])((long)puVar7 + uVar10 * 4);
      uVar14 = 0;
      do {
        uVar14 = uVar14 + 1;
        *pauVar11 = (uint8_t[16])0x0;
        pauVar11 = pauVar11 + 1;
      } while (uVar14 < uVar13);
      lVar18 = lVar18 + uVar13 * -4;
      puVar8 = puVar8 + uVar13 * 2;
      if (uVar21 - uVar10 == uVar13 * 4)
        goto LAB_00591490;
    }
    lVar15 = 0;
    do {
      *(uint32_t *)((long)puVar8 + lVar15 * 4) = 0;
      lVar15 = lVar15 + 1;
    } while (lVar15 != lVar18 + 1);
  }
LAB_00591490:
  puVar1 = (uint32_t *)((long)puVar7 + (long)iVar22 * 4);
  puVar8 = puVar7 + iVar22;
  local_68[0] = puVar7;
  local_68[2] = puVar8;
  local_88[0] = *(long *)self;
  local_48 = (float)arg1 * DAT_005c0e00 /* R:-0.5f */ * fLevelGridWH;
  local_88[1] = *(uint64_t *)(self + 0x10);
  local_44 = (float)arg2 * DAT_005c0e00 /* R:-0.5f */ * fLevelGridWH;
  local_88[2] = *(uint64_t *)(self + 8);
  local_68[1] = (ulong *)puVar1;
  fVar23 = (*(float *)(self + 0x30) - local_48) / fLevelGridWH;
  lVar18 = (long)fVar23;
  if (fVar23 < (float)lVar18) {
    lVar18 = lVar18 + -1;
  }
  iVar22 = (int)lVar18;
  fVar23 = (*(float *)(self + 0x34) - local_44) / fLevelGridWH;
  if (iVar22 < 0) {
    iVar22 = 0;
  }
  uVar16 = (uint)arg1;
  uVar5 = (ushort)iVar22;
  if ((int)uVar16 <= iVar22) {
    uVar5 = arg1 - 1;
  }
  lVar18 = (long)fVar23;
  if (fVar23 < (float)lVar18) {
    lVar18 = lVar18 + -1;
  }
  uVar9 = (uint)lVar18;
  if ((int)uVar9 < 0) {
    uVar9 = 0;
  }
  uVar20 = (uint)arg2;
  uVar4 = arg2 - 1;
  if ((int)uVar9 < (int)uVar20) {
    uVar4 = uVar9;
  }
  lVar18 = 0;
  sVar2 = *(short *)(self + 0x38);
  sVar3 = *(short *)(self + 0x3a);
  do {
    uVar9 = 0;
    uVar19 = 0;
    if (uVar16 != 0) {
      do {
        uVar17 = (uint)arg1;
        if (uVar20 != 0) {
          lVar15 = *(long *)((long)local_68 + lVar18);
          if (uVar19 < (ushort)(uVar5 + sVar2)) {
            uVar12 = 0;
            uVar6 = 0;
            if (uVar5 <= uVar19) {
              do {
                if ((uVar6 < (ushort)((ushort)uVar4 + sVar3)) && ((ushort)uVar4 <= uVar6)) {
                  *(uint32_t *)(lVar15 + (long)(int)(uVar12 * uVar16 + uVar9) * 4) =
                      *(uint32_t *)(*(long *)((long)local_88 + lVar18) +
                                    (long)(int)((uVar12 - (uVar4 & 0xffff)) * (uint) *
                                                    (ushort *)(self + 0x38) +
                                                (uVar9 - uVar5)) *
                                        4);
                } else {
                  *(uint32_t *)(lVar15 + (long)(int)(uVar12 * uVar17 + uVar9) * 4) = 0;
                }
                uVar6 = uVar6 + 1;
                uVar12 = (uint)uVar6;
              } while (uVar12 < uVar20);
              goto LAB_0059161a;
            }
          }
          uVar12 = 0;
          uVar6 = 0;
          do {
            uVar6 = uVar6 + 1;
            *(uint32_t *)(lVar15 + (long)(int)(uVar12 * uVar17 + uVar9) * 4) = 0;
            uVar12 = (uint)uVar6;
          } while (uVar12 < arg2);
        }
      LAB_0059161a:
        uVar19 = uVar19 + 1;
        uVar9 = (uint)uVar19;
      } while (uVar9 < uVar17);
    }
    lVar18 = lVar18 + 8;
    if (lVar18 == 0x18) {
      if (*(long *)self != 0) {
        operator_delete__((void *)(*(long *)self + -8));
      }
      *(uint32_t **)(self + 0x10) = puVar1;
      *(ulong **)self = puVar7;
      *(ulong **)(self + 0x1570) = puVar7;
      *(ulong **)(self + 8) = puVar8;
      *(ulong **)(self + 0x19b0) = puVar8;
      *(ushort *)(self + 0x38) = arg1;
      *(uint32_t **)(self + 0x1130) = puVar1;
      *(ushort *)(self + 0x3a) = arg2;
      Vector2__operator_assign((Vector2 *)(self + 0x30), (Vector2 *)&local_48);
      return;
    }
  } while (true);
}

/* ======================================================================
 * TileLevel__ResetLevel  (Ghidra `ResetLevel` @ 00591710)
 * Signature: uint8_t __thiscall ResetLevel(TileLevel * self)
 * Class: TileLevel
 * Calls: `TAudio__RemoveInstanceByPosition`
 * Called by: `FlyWrench__Reset`, `GSuperMeatBoy__LoadDeferredCharactor`, `GSuperMeatBoy__ShowCurrentReplay`, `LoadDeferredCharactor`, `Machinarium__Reset`, `MeatBoyCharactor__Reset`, `MeatBoyCharactor__Update`, `Ogmo__Reset`, `Runman__Reset`, `ShowCurrentReplay`
 */
/* TileLevel__ResetLevel() */

void __thiscall TileLevel__ResetLevel(TileLevel *self)

{
  TAudio *this_00;
  long lVar1;
  long lVar2;
  int iVar3;

  if (0 < *(int *)(self + 0x68)) {
    lVar1 = 0;
    iVar3 = 0;
    do {
      this_00 = Audio;
      iVar3 = iVar3 + 1;
      *(uint32_t *)(*(long *)(self + 0x60) + 0x40 + lVar1) = 0;
      lVar2 = lVar1 + *(long *)(self + 0x60);
      lVar1 = lVar1 + 0x68;
      TAudio__RemoveInstanceByPosition(this_00, (FPUVector *)(lVar2 + 0x24));
    } while (iVar3 < *(int *)(self + 0x68));
  }
  return;
}

/* ======================================================================
 * TileLevel__TileLevelLayers_TileLevelLayers  (Ghidra `~_TileLevelLayers` @ 00592150)
 * Signature: uint8_t __thiscall ~_TileLevelLayers(_TileLevelLayers * self)
 * Class: TileLevel
 * Calls: `RenderLayer__RenderLayer__005988e0`
 * Called by: (none)
 */
/* TileLevel__TileLevelLayers_TileLevelLayers() */

void __thiscall TileLevel__TileLevelLayers_TileLevelLayers(_TileLevelLayers *self)

{
  *(uint8_t ***)(self + 0x1d80) = &PTR__LevelRenderLayer_005dcfb0;
  /* try { // try from 0059216a to 0059216e has its CatchHandler @ 0059220d */
  RenderLayer__RenderLayer__005988e0((RenderLayer *)(self + 0x1d80));
  *(uint8_t ***)(self + 0x1950) = &PTR__LevelRenderLayer_005dcfb0;
  /* try { // try from 00592181 to 00592185 has its CatchHandler @ 005922b6 */
  RenderLayer__RenderLayer__005988e0((RenderLayer *)(self + 0x1950));
  *(uint8_t ***)(self + 0x1510) = &PTR__LevelRenderLayer_005dcfb0;
  /* try { // try from 00592198 to 0059219c has its CatchHandler @ 005922b4 */
  RenderLayer__RenderLayer__005988e0((RenderLayer *)(self + 0x1510));
  *(uint8_t ***)(self + 0x10d0) = &PTR__LevelRenderLayer_005dcfb0;
  /* try { // try from 005921af to 005921b3 has its CatchHandler @ 005922b2 */
  RenderLayer__RenderLayer__005988e0((RenderLayer *)(self + 0x10d0));
  *(uint8_t ***)(self + 0xc90) = &PTR__LevelRenderLayer_005dcfb0;
  /* try { // try from 005921c6 to 005921ca has its CatchHandler @ 005922af */
  RenderLayer__RenderLayer__005988e0((RenderLayer *)(self + 0xc90));
  *(uint8_t ***)(self + 0x860) = &PTR__LevelRenderLayer_005dcfb0;
  /* try { // try from 005921dd to 005921e1 has its CatchHandler @ 005922ad */
  RenderLayer__RenderLayer__005988e0((RenderLayer *)(self + 0x860));
  *(uint8_t ***)(self + 0x430) = &PTR__LevelRenderLayer_005dcfb0;
  /* try { // try from 005921f4 to 005921f8 has its CatchHandler @ 005922ab */
  RenderLayer__RenderLayer__005988e0((RenderLayer *)(self + 0x430));
  *(uint8_t ***)self = &PTR__LevelRenderLayer_005dcfb0;
  RenderLayer__RenderLayer__005988e0((RenderLayer *)self);
  return;
}
