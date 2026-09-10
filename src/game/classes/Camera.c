/* src/game/classes/Camera.c — 10 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "Camera.h"

/* ======================================================================
 * Camera__Camera__00581630  (Ghidra `~Camera` @ 00581630)
 * Signature: uint8_t __thiscall ~Camera(Camera * self)
 * Class: Camera
 * Calls: (none)
 * Called by: (none)
 */
/* Camera__Camera__00581630() */

void __thiscall Camera__Camera__00581630(Camera *self)

{
  return;
}

/* ======================================================================
 * Camera__SetupCamera  (Ghidra `SetupCamera` @ 00581640)
 * Signature: uint8_t __thiscall SetupCamera(Camera * self)
 * Class: Camera
 * Calls: `BoundingSquare__Change`, `tan`
 * Called by: `SMBCamera__SMBCamera`
 */
/* Camera__SetupCamera() */

void __thiscall Camera__SetupCamera(Camera *self)

{
  double dVar1;
  uint local_28;
  uint local_24;
  
  Matrix4x4__ConvertToPerspectiveMatrix
            ((Matrix4x4 *)self,*(float *)(self + 0x130),*(float *)(self + 0x134),
             *(float *)(self + 0x138),*(float *)(self + 0x13c));
  Matrix4x4__ConvertToLookAtMatrix
            ((Matrix4x4 *)(self + 0x40),(FPUVector *)(self + 0x100),(FPUVector *)(self + 0x110),
             (FPUVector *)(self + 0x120));
  Matrix4x4__Multiply((Matrix4x4 *)(self + 0x80),(Matrix4x4 *)(self + 0x40),(Matrix4x4 *)self);
  dVar1 = tan((double)(DAT_005be6e4 /* R:0.5f */ * *(float *)(self + 0x130)));
  local_24 = (uint)(float)(dVar1 * (double)*(float *)(self + 0x108)) & DAT_005be880 /* R:u32=2147483647 */;
  local_28 = (uint)(*(float *)(self + 0x134) * (float)(dVar1 * (double)*(float *)(self + 0x108))) &
             DAT_005be880 /* R:u32=2147483647 */;
  BoundingSquare__Change
            ((BoundingSquare *)(self + 0x140),(Vector2 *)&local_28,0.0,(Vector2 *)(self + 0x100));
  *(uint32_t *)(self + 0x1d4) = 0;
  return;
}

/* ======================================================================
 * Camera__Camera__00581730  (Ghidra `Camera` @ 00581730)
 * Signature: uint8_t __thiscall Camera(Camera * self, FPUVector * arg1, FPUVector * arg2, float arg3, float arg4, float arg5, float arg6, FPUVector * arg7)
 * Class: Camera
 * Calls: `BoundingSquare__BoundingSquare`, `Camera__Camera__00581800`
 * Called by: (none)
 */
/* Camera__Camera__00581800(FPUVector const&, FPUVector const&, float, float, float, float, FPUVector const&)
    */

void __thiscall
Camera__Camera__00581800(Camera *self,FPUVector *arg1,FPUVector *arg2,float arg3,float arg4,
              float arg5,float arg6,FPUVector *arg7)

{
  uint64_t uVar1;
  uint32_t local_28;
  uint32_t local_24;
  uint32_t local_18;
  uint32_t local_14;
  
  *(uint64_t *)(self + 0x100) = *(uint64_t *)arg1;
  *(uint64_t *)(self + 0x108) = *(uint64_t *)(arg1 + 8);
  *(uint64_t *)(self + 0x110) = *(uint64_t *)arg2;
  *(uint64_t *)(self + 0x118) = *(uint64_t *)(arg2 + 8);
  *(uint64_t *)(self + 0x120) = *(uint64_t *)arg7;
  uVar1 = *(uint64_t *)(arg7 + 8);
  *(float *)(self + 0x130) = arg3;
  *(float *)(self + 0x134) = arg4;
  *(float *)(self + 0x138) = arg5;
  *(float *)(self + 0x13c) = arg6;
  *(uint64_t *)(self + 0x128) = uVar1;
  local_28 = 0;
  local_18 = 0x3f000000;
  local_24 = 0;
  local_14 = 0x3f000000;
  BoundingSquare__BoundingSquare
            ((BoundingSquare *)(self + 0x140),(Vector2 *)&local_28,0.0,(Vector2 *)&local_18);
  *(uint32_t *)(self + 0x1d4) = 1;
  *(uint32_t *)(self + 0x1d8) = 1;
  SetupCamera(self);
  Matrix4x4__Identity((Matrix4x4 *)(self + 0xc0));
  return;
}

/* ======================================================================
 * Camera__Camera__00581800  (Ghidra `Camera` @ 00581800)
 * Signature: uint8_t __thiscall Camera(Camera * self)
 * Class: Camera
 * Calls: `BoundingSquare__BoundingSquare`
 * Called by: `Camera__Camera`, `Camera__Camera__00581730`, `SMBCamera__SMBCamera`
 */
/* Camera__Camera__00581800() */

void __thiscall Camera__Camera__00581800(Camera *self)

{
  ushort uVar1;
  ushort uVar2;
  long lVar3;
  uint32_t local_28;
  uint32_t local_24;
  uint32_t local_18;
  uint32_t local_14;
  
  lVar3 = Window;
  *(uint32_t *)(self + 0x124) = 0x3f800000;
  *(uint32_t *)(self + 0x100) = 0;
  *(uint32_t *)(self + 0x108) = 0xbf800000;
  *(uint32_t *)(self + 0x130) = 0x3fc90fdb;
  *(uint32_t *)(self + 0x104) = 0;
  *(uint32_t *)(self + 0x10c) = 0;
  *(uint32_t *)(self + 0x110) = 0;
  *(uint32_t *)(self + 0x114) = 0;
  *(uint32_t *)(self + 0x118) = 0;
  *(uint32_t *)(self + 0x11c) = 0;
  *(uint32_t *)(self + 0x120) = 0;
  *(uint32_t *)(self + 0x128) = 0;
  *(uint32_t *)(self + 300) = 0;
  uVar1 = *(ushort *)(lVar3 + 8);
  uVar2 = *(ushort *)(lVar3 + 10);
  local_28 = 0;
  *(uint32_t *)(self + 0x138) = 0x3f800000;
  local_24 = 0;
  *(uint32_t *)(self + 0x13c) = 0x461c4000;
  local_18 = 0x3f000000;
  local_14 = 0x3f000000;
  *(float *)(self + 0x134) = (float)uVar1 / (float)uVar2;
  BoundingSquare__BoundingSquare
            ((BoundingSquare *)(self + 0x140),(Vector2 *)&local_28,0.0,(Vector2 *)&local_18);
  *(uint32_t *)(self + 0x1d4) = 1;
  *(uint32_t *)(self + 0x1d8) = 1;
  SetupCamera(self);
  Matrix4x4__Identity((Matrix4x4 *)(self + 0xc0));
  return;
}

/* ======================================================================
 * Camera__Update  (Ghidra `Update` @ 00581910)
 * Signature: uint8_t __thiscall Update(Camera * self)
 * Class: Camera
 * Calls: (none)
 * Called by: `SMBCamera__Update`
 */
/* Camera__Update() */

void __thiscall Camera__Update(Camera *self)

{
  if ((*(int *)(self + 0x1d4) == 1) && (*(int *)(self + 0x1d8) == 1)) {
    SetupCamera(self);
    return;
  }
  return;
}

/* ======================================================================
 * Camera__ScreenToWorld  (Ghidra `ScreenToWorld` @ 00581930)
 * Signature: uint8_t __thiscall ScreenToWorld(Camera * self, FPUVector * arg1, Vector2 * arg2, float arg3)
 * Class: Camera
 * Calls: `tan`
 * Called by: `BloodyTiles__Render`, `DeSelectTile`, `DeleteSelectedLight`, `GrabBlock`, `PasteSelectedPieces`, `PasteSelectedTiles`, `PlaceAnimal`, `PlaceCameraItems`, `PlaceSetPiece`, `PlaceTile` (+11 more)
 */
/* Camera__ScreenToWorld(FPUVector*, Vector2 const*, float) const */

FPUVector * __thiscall
Camera__ScreenToWorld(Camera *self,FPUVector *arg1,Vector2 *arg2,float arg3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  
  dVar4 = tan((double)(DAT_005be6e4 /* R:0.5f */ * *(float *)(self + 0x130)));
  fVar3 = (float)(dVar4 * (double)(*(float *)(self + 0x108) - arg3));
  *(float *)arg1 =
       *(float *)(self + 0x134) * *(float *)arg2 * (float)(DAT_005be6f0 /* R:u32=2147483648 */ ^ (uint)fVar3) +
       *(float *)(self + 0x100);
  fVar1 = *(float *)(arg2 + 4);
  fVar2 = *(float *)(self + 0x104);
  *(float *)(arg1 + 8) = arg3;
  *(float *)(arg1 + 4) = fVar3 * fVar1 + fVar2;
  return arg1;
}

/* ======================================================================
 * Camera__WorldToScreen  (Ghidra `WorldToScreen` @ 005819f0)
 * Signature: uint8_t __thiscall WorldToScreen(Camera * self, Vector2 * arg1, FPUVector * arg2)
 * Class: Camera
 * Calls: (none)
 * Called by: `PlaceSetPiece`, `SetPieceWayPointGroup__GetClickedWayPoint`
 */
/* Camera__WorldToScreen(Vector2*, FPUVector const*) const */

Vector2 * __thiscall Camera__WorldToScreen(Camera *self,Vector2 *arg1,FPUVector *arg2)

{
  uint32_t local_18;
  uint32_t local_14;
  uint32_t local_10;
  uint32_t local_c;
  
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  Matrix4x4__TransformVector3((FPUVector *)&local_18,arg2,(Matrix4x4 *)(self + 0x80),1);
  *(uint32_t *)arg1 = local_18;
  *(uint32_t *)(arg1 + 4) = local_14;
  return arg1;
}

/* ======================================================================
 * Camera__GetSceneWidthAndHeight  (Ghidra `GetSceneWidthAndHeight` @ 00581a40)
 * Signature: uint8_t __thiscall GetSceneWidthAndHeight(Camera * self, float * arg1, float * arg2)
 * Class: Camera
 * Calls: `tan`
 * Called by: (none)
 */
/* Camera__GetSceneWidthAndHeight(float&, float&) */

void __thiscall Camera__GetSceneWidthAndHeight(Camera *self,float *arg1,float *arg2)

{
  float fVar1;
  double dVar2;
  
  dVar2 = tan((double)(DAT_005be6e4 /* R:0.5f */ * *(float *)(self + 0x130)));
  fVar1 = (float)((uint)(float)(dVar2 * (double)*(float *)(self + 0x108)) & DAT_005be880 /* R:u32=2147483647 */);
  *arg1 = (float)((uint)(*(float *)(self + 0x134) *
                           (float)(dVar2 * (double)*(float *)(self + 0x108))) & DAT_005be880 /* R:u32=2147483647 */);
  *arg2 = fVar1;
  return;
}

/* ======================================================================
 * Camera__SetCameraMatricies  (Ghidra `SetCameraMatricies` @ 00581ad0)
 * Signature: uint8_t __thiscall SetCameraMatricies(Camera * self, tagCameraType arg1)
 * Class: Camera
 * Calls: `TGraphics__GetMatrix`, `TGraphics__SetMatrix`, `TGraphics__SetPerspectiveProjectionMode`
 * Called by: `AnimalLayer__Render`, `BossLayer__Render`, `GMeatHUD__Render`, `GSMBCutSceneManager__Render`, `GSMBCutSceneManager__RenderLoadingOverlay`, `GSMBCutSceneManager__RenderSavingOverlay`, `GSMBMenu__Render`, `GSMBMenu__RenderTitleScreenForIntro`, `GSuperMeatBoy__Update__00516690`, `LastLayer__Render` (+11 more)
 */
/* Camera__SetCameraMatricies(tagCameraType) */

void __thiscall Camera__SetCameraMatricies(Camera *self,int arg2)

{
  int iVar1;
  Matrix4x4 *pMVar2;
  
  iVar1 = *(int *)(self + 0x1d8);
  if ((arg2 != 0) && (arg2 != iVar1)) {
    *(int *)(self + 0x1d8) = arg2;
    iVar1 = arg2;
  }
  if (iVar1 != 1) {
    TGraphics__SetMatrix(Graphics,3,self + 0xc0);
    TGraphics__SetPerspectiveProjectionMode(Graphics,0);
    pMVar2 = (Matrix4x4 *)TGraphics__GetMatrix(Graphics,2);
    Matrix4x4__Identity(pMVar2);
    return;
  }
  TGraphics__SetMatrix(Graphics,3,self);
  TGraphics__SetMatrix(Graphics,2,self + 0x40);
  TGraphics__SetPerspectiveProjectionMode(Graphics,1);
  return;
}

/* ======================================================================
 * Camera__SetOrthoProjection  (Ghidra `SetOrthoProjection` @ 00581b70)
 * Signature: uint8_t __thiscall SetOrthoProjection(Camera * self, float arg1, float arg2, float arg3, float arg4, float arg5, float arg6)
 * Class: Camera
 * Calls: (none)
 * Called by: `GMeatHUD__Render`, `GSMBCutSceneManager__Render`, `GSMBCutSceneManager__RenderLoadingOverlay`, `GSMBCutSceneManager__RenderSavingOverlay`, `GSMBMenu__Render`, `GSMBMenu__RenderTitleScreenForIntro`, `LastLayer__Render`, `SMBEditor__Render`, `SMBLevelPortalInterface__Render`, `SMBPopupMenu__Render` (+1 more)
 */
/* Camera__SetOrthoProjection(float, float, float, float, float, float) */

void __thiscall
Camera__SetOrthoProjection
          (Camera *self,float arg1,float arg2,float arg3,float arg4,float arg5,
          float arg6)

{
  *(uint32_t *)(self + 0x1d8) = 2;
  Matrix4x4__ConvertToOrthoMatrix
            ((Matrix4x4 *)(self + 0xc0),arg1,arg2,arg3,arg4,arg5,arg6);
  return;
}
