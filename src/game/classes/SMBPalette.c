/* src/game/classes/SMBPalette.c — 56 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "SMBPalette.h"

/* ======================================================================
 * SMBPalette__AddSetPieceToBuffer  (Ghidra `AddSetPieceToBuffer` @ 004da480)
 * Signature: uint8_t __thiscall AddSetPieceToBuffer(SMBPalette * self, tagPos3TexVertex * arg1, TileLevelSetPiece * arg2, uint * arg3, uint * arg4)
 * Class: SMBPalette
 * Calls: `SMBPalette__AddSetPieceToBuffer__004da490`
 * Called by: (none)
 */
/* non-virtual thunk to SMBPalette__AddSetPieceToBuffer__004da490(CGR__tagPos3TexVertex, TileLevelSetPiece*,
   unsigned int&, unsigned int&) */

void __thiscall SMBPalette__AddSetPieceToBuffer__004da490(SMBPalette *self, tagPos3TexVertex *arg1,
                                                          TileLevelSetPiece *arg2, uint *arg3,
                                                          uint *arg4)

{
  AddSetPieceToBuffer(self + -0x10, arg1, arg2, arg3, arg4);
  return;
}

/* ======================================================================
 * SMBPalette__AddSetPieceToBuffer__004da490  (Ghidra `AddSetPieceToBuffer` @ 004da490)
 * Signature: uint8_t __thiscall AddSetPieceToBuffer(SMBPalette * self, tagPos3TexVertex * arg1, TileLevelSetPiece * arg2, uint * arg3, uint * arg4)
 * Class: SMBPalette
 * Calls: `IndexTexture__GetTextureCoords`, `IndexTexture__GetTextureWAndH`, `sincosf`
 * Called by: `SMBPalette__AddSetPieceToBuffer`
 */
/* SMBPalette__AddSetPieceToBuffer__004da490(CGR__tagPos3TexVertex, TileLevelSetPiece*, unsigned int&,
   unsigned int&) */

void __thiscall SMBPalette__AddSetPieceToBuffer__004da490(SMBPalette *self, tagPos3TexVertex *arg1,
                                                          TileLevelSetPiece *arg2, uint *arg3,
                                                          uint *arg4)

{
  byte bVar1;
  float local_120;
  float local_11c;
  Matrix4x4 local_118[64];
  uint32_t local_d8;
  uint32_t local_d4;
  uint32_t local_d0;
  uint32_t local_cc;
  uint32_t local_c8;
  uint32_t local_c4;
  uint32_t local_c0;
  uint32_t local_bc;
  float local_b8;
  float local_b4;
  uint32_t local_b0;
  uint32_t local_ac;
  uint32_t local_a8;
  uint32_t local_a4;
  float local_a0;
  float local_9c;
  uint32_t local_98;
  uint32_t local_94;
  uint32_t local_90;
  uint32_t local_8c;
  uint32_t local_88;
  uint32_t local_84;
  uint32_t local_80;
  uint32_t local_7c;
  uint32_t local_78;
  uint32_t local_74;
  uint32_t local_70;
  uint32_t local_6c;
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
  uint32_t local_3c;
  float local_30;
  float local_2c;

  IndexTexture__GetTextureWAndH(*(IndexTexture **)(self + 0x70), (uint)(byte)arg2[0x20], &local_30,
                                &local_2c);
  bVar1 = (byte)arg2[0x21] >> 2 & 3;
  local_b8 = DAT_005c07a4 /* R:-1.0f */;
  local_b4 = DAT_005be894 /* R:1.0f */;
  if (((bVar1 != 1) &&
       (local_b8 = DAT_005be894 /* R:1.0f */, local_b4 = DAT_005c07a4 /* R:-1.0f */, bVar1 != 2)) &&
      (local_b8 = DAT_005be894 /* R:1.0f */, local_b4 = DAT_005be894 /* R:1.0f */,
       ((byte)arg2[0x21] >> 2 & 3) != 0)) {
    local_b8 = DAT_005c07a4 /* R:-1.0f */;
    local_b4 = DAT_005c07a4 /* R:-1.0f */;
  }
  local_b0 = 0x3f800000;
  local_ac = 0;
  local_b4 = local_2c * *(float *)(arg2 + 0x38) * local_b4;
  local_b8 = local_30 * *(float *)(arg2 + 0x34) * local_b8;
  sincosf(DAT_005be6e4 /* R:0.5f */ * *(float *)(arg2 + 0x3c), &local_11c, &local_120);
  local_a8 = 0;
  local_a4 = 0;
  local_a0 = local_11c;
  local_9c = local_120;
  Matrix4x4__Transformation3D(local_118, (FPUVector *)&local_b8, (TQuaternion *)&local_a8,
                              (FPUVector *)(arg2 + 0x24));
  IndexTexture__GetTextureCoords(*(IndexTexture **)(self + 0x70), (uint)(byte)arg2[0x20],
                                 (Vector2 *)&local_d8);
  local_98 = 0xbf800000;
  local_94 = 0x3f800000;
  local_90 = 0;
  local_8c = 0;
  Matrix4x4__TransformVector3((FPUVector *)arg1, (FPUVector *)&local_98, local_118, 1);
  local_88 = 0x3f800000;
  local_84 = 0x3f800000;
  local_80 = 0;
  *(uint32_t *)(arg1 + 0xc) = local_d8;
  local_7c = 0;
  *(uint32_t *)(arg1 + 0x10) = local_d4;
  Matrix4x4__TransformVector3((FPUVector *)(arg1 + 0x14), (FPUVector *)&local_88, local_118, 1);
  local_78 = 0xbf800000;
  local_74 = 0xbf800000;
  local_70 = 0;
  *(uint32_t *)(arg1 + 0x20) = local_d0;
  local_6c = 0;
  *(uint32_t *)(arg1 + 0x24) = local_cc;
  Matrix4x4__TransformVector3((FPUVector *)(arg1 + 0x28), (FPUVector *)&local_78, local_118, 1);
  local_68 = 0xbf800000;
  local_64 = 0xbf800000;
  local_60 = 0;
  *(uint32_t *)(arg1 + 0x34) = local_c8;
  local_5c = 0;
  *(uint32_t *)(arg1 + 0x38) = local_c4;
  Matrix4x4__TransformVector3((FPUVector *)(arg1 + 0x3c), (FPUVector *)&local_68, local_118, 1);
  local_58 = 0x3f800000;
  local_54 = 0xbf800000;
  local_50 = 0;
  *(uint32_t *)(arg1 + 0x48) = local_c8;
  local_4c = 0;
  *(uint32_t *)(arg1 + 0x4c) = local_c4;
  Matrix4x4__TransformVector3((FPUVector *)(arg1 + 0x50), (FPUVector *)&local_58, local_118, 1);
  local_48 = 0x3f800000;
  local_44 = 0x3f800000;
  local_40 = 0;
  *(uint32_t *)(arg1 + 0x5c) = local_c0;
  local_3c = 0;
  *(uint32_t *)(arg1 + 0x60) = local_bc;
  Matrix4x4__TransformVector3((FPUVector *)(arg1 + 100), (FPUVector *)&local_48, local_118, 1);
  *(uint32_t *)(arg1 + 0x70) = local_d0;
  *(uint32_t *)(arg1 + 0x74) = local_cc;
  *arg3 = *arg3 + 2;
  *arg4 = *arg4 + 6;
  return;
}

/* ======================================================================
 * SMBPalette__RenderSetPieceStream  (Ghidra `RenderSetPieceStream` @ 004da7f0)
 * Signature: uint8_t __thiscall RenderSetPieceStream(SMBPalette * self, VertexStream * arg1)
 * Class: SMBPalette
 * Calls: `SMBPalette__RenderSetPieceStream__004da800`
 * Called by: (none)
 */
/* non-virtual thunk to SMBPalette__RenderSetPieceStream__004da800(VertexStream*) */

void __thiscall SMBPalette__RenderSetPieceStream__004da800(SMBPalette *self, VertexStream *arg1)

{
  RenderSetPieceStream(self + -0x10, arg1);
  return;
}

/* ======================================================================
 * SMBPalette__RenderSetPieceStream__004da800  (Ghidra `RenderSetPieceStream` @ 004da800)
 * Signature: uint8_t __thiscall RenderSetPieceStream(SMBPalette * self, VertexStream * arg1)
 * Class: SMBPalette
 * Calls: `Camera__SetCameraMatricies`, `SamplerRegisterToSource`, `TGraphics__AddPixelStage`, `TGraphics__Draw`, `TGraphics__GetMatrix`, `TGraphics__ResetPixelStages`, `TGraphics__ResetTexCoordGen`, `TGraphics__SetRenderState`, `TGraphics__SetSamplerState`, `TGraphics__SetTexture`
 * Called by: `SMBPalette__RenderSetPieceStream`
 */
/* SMBPalette__RenderSetPieceStream__004da800(VertexStream*) */

void __thiscall SMBPalette__RenderSetPieceStream__004da800(SMBPalette *self, VertexStream *arg1)

{
  uchar uVar1;
  uint32_t uVar2;
  Matrix4x4 *pMVar3;

  Camera__SetCameraMatricies(*(Camera **)(SuperMeatBoy + 0x38), 1);
  uVar1 = TGraphics__SetTexture(Graphics, 0xff, *(Texture **)(*(long *)(self + 0x70) + 0x10));
  TGraphics__SetSamplerState(Graphics, uVar1, '\x04', 2);
  TGraphics__SetSamplerState(Graphics, uVar1, '\x03', 2);
  TGraphics__ResetPixelStages(Graphics);
  uVar2 = SamplerRegisterToSource(uVar1);
  TGraphics__AddPixelStage(Graphics, uVar2, 1, 0, 0, 0, 1, 0xffffffff);
  TGraphics__SetRenderState(Graphics, '\a', 0);
  TGraphics__SetRenderState(Graphics, '\x03', 0);
  TGraphics__SetRenderState(Graphics, '\x01', 7);
  TGraphics__SetRenderState(Graphics, '\x05', 4);
  TGraphics__SetRenderState(Graphics, '\x06', 5);
  TGraphics__SetSamplerState(Graphics, uVar1, '\0', 2);
  TGraphics__SetSamplerState(Graphics, uVar1, '\x01', 2);
  TGraphics__ResetTexCoordGen(Graphics);
  pMVar3 = (Matrix4x4 *)TGraphics__GetMatrix(Graphics, 0);
  Matrix4x4__Identity(pMVar3);
  TGraphics__ResetPixelStages(Graphics);
  uVar2 = SamplerRegisterToSource(uVar1);
  TGraphics__AddPixelStage(Graphics, uVar2, 1, 0, 0, 0, 1, 0xffffffff);
  TGraphics__Draw(Graphics, arg1, (IndexBuffer *)0x0);
  return;
}

/* ======================================================================
 * SMBPalette__RenderTile  (Ghidra `RenderTile` @ 004daab0)
 * Signature: uint8_t __thiscall RenderTile(SMBPalette * self, GRIDBLOCK * arg1, Vector2 * arg2)
 * Class: SMBPalette
 * Calls: `SMBPalette__RenderTile__004daac0`
 * Called by: (none)
 */
/* non-virtual thunk to SMBPalette__RenderTile__004daac0(GRIDBLOCK const&, Vector2 const&) */

void __thiscall SMBPalette__RenderTile__004daac0(SMBPalette *self, GRIDBLOCK *arg1, Vector2 *arg2)

{
  RenderTile(self + -0x10, arg1, arg2);
  return;
}

/* ======================================================================
 * SMBPalette__RenderTile__004daac0  (Ghidra `RenderTile` @ 004daac0)
 * Signature: uint8_t __thiscall RenderTile(SMBPalette * self, GRIDBLOCK * arg1, Vector2 * arg2)
 * Class: SMBPalette
 * Calls: `SamplerRegisterToSource`, `TGraphics__AddPixelStage`, `TGraphics__Draw`, `TGraphics__GetMatrix`, `TGraphics__ResetPixelStages`, `TGraphics__SetRenderState`, `TileTexture__SetTexture`
 * Called by: `SMBPalette__RenderTile`
 */
/* SMBPalette__RenderTile__004daac0(GRIDBLOCK const&, Vector2 const&) */

void __thiscall SMBPalette__RenderTile__004daac0(SMBPalette *self, GRIDBLOCK *arg1, Vector2 *arg2)

{
  byte bVar1;
  SMBPalette SVar2;
  uint32_t uVar3;
  Matrix4x4 *pMVar4;
  uint uVar5;
  float local_48;
  float local_44;
  float local_38[4];
  float local_28[4];

  if (*arg1 != (GRIDBLOCK)0x0) {
    if (*(int *)arg1 != *(int *)(self + 0x20)) {
      local_28[0] = 0.0;
      bVar1 = (byte)arg1[2] & 3;
      if (bVar1 == 2) {
        local_28[0] = 3.1415927;
      } else if (bVar1 == 3) {
        local_28[0] = -1.5707964;
      } else if (bVar1 == 1) {
        local_28[0] = 1.5707964;
      }
      SVar2 = (SMBPalette)TileTexture__SetTexture(*(TileTexture **)(self + 0x30), 0xff,
                                                  (uint)(byte)*arg1, local_28);
      self[100] = SVar2;
    }
    local_38[0] = 0.0;
    bVar1 = (byte)arg1[1] >> 4 & 3;
    if (bVar1 == 2) {
      local_38[0] = 3.1415927;
    } else if (bVar1 == 3) {
      local_38[0] = -1.5707964;
    } else if (bVar1 == 1) {
      local_38[0] = 1.5707964;
    }
    uVar5 = ((byte)arg1[1] >> 6) - 1;
    local_44 = DAT_005be894 /* R:1.0f */;
    local_48 = DAT_005be894 /* R:1.0f */;
    if (uVar5 < 3) {
      local_48 = *(float *)(CSWTCH_610 + (ulong)uVar5 * 4);
      local_44 = *(float *)(CSWTCH_611 + (ulong)uVar5 * 4);
    }
    local_48 = local_48 * DAT_005be6e4 /* R:0.5f */ * TileLevel__fLevelGridWH;
    local_44 = DAT_005be6e4 /* R:0.5f */ * TileLevel__fLevelGridWH * local_44;
    pMVar4 = (Matrix4x4 *)TGraphics__GetMatrix(Graphics, 0);
    Matrix4x4__Transformation2DRot(pMVar4, (Vector2 *)&local_48, local_38, arg2);
    TGraphics__SetRenderState(Graphics, '\a', 0);
    TGraphics__ResetPixelStages(Graphics);
    uVar3 = SamplerRegisterToSource(self[100]);
    TGraphics__AddPixelStage(Graphics, uVar3, 1, 0, 0, 0, 1, 0xffffffff);
    bVar1 = (byte)arg1[2] >> 2 & 3;
    if (bVar1 == 2) {
      TGraphics__Draw(Graphics, *(VertexStream **)(self + 0x1aa0), (IndexBuffer *)0x0);
    } else if (bVar1 == 3) {
      TGraphics__Draw(Graphics, *(VertexStream **)(self + 0x1aa8), (IndexBuffer *)0x0);
    } else if (bVar1 == 1) {
      TGraphics__Draw(Graphics, *(VertexStream **)(self + 0x1a90), (IndexBuffer *)0x0);
    } else {
      TGraphics__Draw(Graphics, *(VertexStream **)(self + 0x1a98), (IndexBuffer *)0x0);
    }
    *(uint32_t *)(self + 0x20) = *(uint32_t *)arg1;
  }
  return;
}

/* ======================================================================
 * SMBPalette__GetSetPieceProps  (Ghidra `GetSetPieceProps` @ 004dad10)
 * Signature: uint8_t __thiscall GetSetPieceProps(SMBPalette * self, TileLevelSetPiece * arg1, Vector2 * arg2, float * arg3, Vector2 * arg4)
 * Class: SMBPalette
 * Calls: `SMBPalette__GetSetPieceProps__004dad20`
 * Called by: (none)
 */
/* non-virtual thunk to SMBPalette__GetSetPieceProps__004dad20(TileLevelSetPiece const*, Vector2*, float*,
   Vector2*) */

void __thiscall SMBPalette__GetSetPieceProps__004dad20(SMBPalette *self, TileLevelSetPiece *arg1,
                                                       Vector2 *arg2, float *arg3, Vector2 *arg4)

{
  GetSetPieceProps(self + -0x10, arg1, arg2, arg3, arg4);
  return;
}

/* ======================================================================
 * SMBPalette__GetSetPieceProps__004dad20  (Ghidra `GetSetPieceProps` @ 004dad20)
 * Signature: uint8_t __thiscall GetSetPieceProps(SMBPalette * self, TileLevelSetPiece * arg1, Vector2 * arg2, float * arg3, Vector2 * arg4)
 * Class: SMBPalette
 * Calls: `FlashLibraryInstance__GetInstanceBounds`, `IndexTexture__GetTextureWAndH`, `Vector2__operator_assign`, `Vector2__operator_mul_assign__005be220`
 * Called by: `SMBPalette__GetSetPieceProps`
 */
/* SMBPalette__GetSetPieceProps__004dad20(TileLevelSetPiece const*, Vector2*, float*, Vector2*) */

void __thiscall SMBPalette__GetSetPieceProps__004dad20(SMBPalette *self, TileLevelSetPiece *arg1,
                                                       Vector2 *arg2, float *arg3, Vector2 *arg4)

{
  TileLevelSetPiece TVar1;
  long lVar2;
  FlashLibraryInstance *this_00;
  float local_30;
  float local_2c[3];

  TVar1 = arg1[0x21];
  if (((byte)TVar1 & 2) == 0) {
    if (((byte)TVar1 & 1) == 0) {
      if (((byte)TVar1 & 0x10) == 0) {
        IndexTexture__GetTextureWAndH(*(IndexTexture **)(self + 0x70), (uint)(byte)arg1[0x20],
                                      &local_30, local_2c);
        *(float *)arg2 = local_30;
        *(float *)(arg2 + 4) = local_2c[0];
        *arg3 = 0.0;
      } else {
        if (((byte)TVar1 & 0x20) == 0) {
          this_00 = *(FlashLibraryInstance **)(self + 0x80);
        } else {
          this_00 = *(FlashLibraryInstance **)(self + 0x90);
        }
        *(uint32_t *)(this_00 + 0x30) = *(uint32_t *)(arg1 + 0x24);
        *(uint32_t *)(this_00 + 0x34) = *(uint32_t *)(arg1 + 0x28);
        *(uint32_t *)(this_00 + 0x38) = *(uint32_t *)(arg1 + 0x2c);
        *(uint32_t *)(this_00 + 0x3c) = *(uint32_t *)(arg1 + 0x30);
        Vector2__operator_assign((Vector2 *)(this_00 + 0x40), (Vector2 *)(arg1 + 0x34));
        *(uint32_t *)(this_00 + 0x48) = *(uint32_t *)(arg1 + 0x3c);
        *(uint32_t *)(this_00 + 0x4c) = *(uint32_t *)(arg1 + 0x3c);
        *(uint *)(this_00 + 0x20) = (uint)(byte)arg1[0x20];
        *(uint32_t *)(this_00 + 0x58) = *(uint32_t *)(arg1 + 0x40);
        FlashLibraryInstance__GetInstanceBounds(this_00, (float *)arg2, (float *)(arg2 + 4), arg4);
        *arg3 = 0.0;
      }
    } else {
      *(float *)arg2 = DAT_005c1400 /* R:100.0f */ * *(float *)(arg1 + 0x34);
      lVar2 = *(long *)(*(long *)(*(long *)(self + 0x38) + (ulong)(byte)arg1[0x20] * 8) + 0x118);
      *(float *)(arg2 + 4) = ((float)*(ushort *)(lVar2 + 0x10) / (float)*(ushort *)(lVar2 + 0xc)) *
                             *(float *)(arg1 + 0x38);
      Vector2__operator_mul_assign__005be220(arg2, DAT_005c01c4 /* R:1000.0f */);
      *arg3 = 0.0;
    }
  }
  return;
}

/* ======================================================================
 * SMBPalette__RenderTileStream  (Ghidra `RenderTileStream` @ 004daea0)
 * Signature: uint8_t __thiscall RenderTileStream(SMBPalette * self, VertexStream * arg1)
 * Class: SMBPalette
 * Calls: `SMBPalette__RenderTileStream__004daeb0`
 * Called by: (none)
 */
/* non-virtual thunk to SMBPalette__RenderTileStream__004daeb0(VertexStream*) */

void __thiscall SMBPalette__RenderTileStream__004daeb0(SMBPalette *self, VertexStream *arg1)

{
  RenderTileStream(self + -0x10, arg1);
  return;
}

/* ======================================================================
 * SMBPalette__RenderTileStream__004daeb0  (Ghidra `RenderTileStream` @ 004daeb0)
 * Signature: uint8_t __thiscall RenderTileStream(SMBPalette * self, VertexStream * arg1)
 * Class: SMBPalette
 * Calls: `Camera__SetCameraMatricies`, `SamplerRegisterToSource`, `TGraphics__AddPixelStage`, `TGraphics__Draw`, `TGraphics__GetMatrix`, `TGraphics__ResetPixelStages`, `TGraphics__ResetTexCoordGen`, `TGraphics__SetSamplerState`, `TGraphics__SetTexture`
 * Called by: `SMBPalette__RenderTileStream`
 */
/* SMBPalette__RenderTileStream__004daeb0(VertexStream*) */

void __thiscall SMBPalette__RenderTileStream__004daeb0(SMBPalette *self, VertexStream *arg1)

{
  uchar uVar1;
  uint32_t uVar2;
  Matrix4x4 *pMVar3;

  if (*(int *)(SuperMeatBoy + 0x2c) != 2) {
    Camera__SetCameraMatricies(*(Camera **)(SuperMeatBoy + 0x38), 1);
    uVar1 = TGraphics__SetTexture(Graphics, 0xff, (Texture *)**(uint64_t **)(self + 0x30));
    TGraphics__SetSamplerState(Graphics, uVar1, '\x04', 2);
    TGraphics__SetSamplerState(Graphics, uVar1, '\x03', 2);
    TGraphics__SetSamplerState(Graphics, uVar1, '\0', 2);
    TGraphics__SetSamplerState(Graphics, uVar1, '\x01', 2);
    TGraphics__ResetPixelStages(Graphics);
    uVar2 = SamplerRegisterToSource(uVar1);
    TGraphics__AddPixelStage(Graphics, uVar2, 1, 0, 0, 0, 1, 0xffffffff);
    TGraphics__ResetTexCoordGen(Graphics);
    pMVar3 = (Matrix4x4 *)TGraphics__GetMatrix(Graphics, 0);
    Matrix4x4__Identity(pMVar3);
    TGraphics__Draw(Graphics, arg1, (IndexBuffer *)0x0);
    return;
  }
  return;
}

/* ======================================================================
 * SMBPalette__AddTileToBuffer  (Ghidra `AddTileToBuffer` @ 004db260)
 * Signature: uint8_t __thiscall AddTileToBuffer(SMBPalette * self, tagPos2TexVertex * arg1, GRIDBLOCK * arg2, Vector2 * arg3, uint * arg4, uint * arg5)
 * Class: SMBPalette
 * Calls: `SMBPalette__AddTileToBuffer__004db270`
 * Called by: (none)
 */
/* non-virtual thunk to SMBPalette__AddTileToBuffer__004db270(CGR__tagPos2TexVertex, GRIDBLOCK const&,
   Vector2 const&, unsigned int&, unsigned int&) */

void __thiscall SMBPalette__AddTileToBuffer__004db270(SMBPalette *self, tagPos2TexVertex *arg1,
                                                      GRIDBLOCK *arg2, Vector2 *arg3, uint *arg4,
                                                      uint *arg5)

{
  AddTileToBuffer(self + -0x10, arg1, arg2, arg3, arg4, arg5);
  return;
}

/* ======================================================================
 * SMBPalette__AddTileToBuffer__004db270  (Ghidra `AddTileToBuffer` @ 004db270)
 * Signature: uint8_t __thiscall AddTileToBuffer(SMBPalette * self, tagPos2TexVertex * arg1, GRIDBLOCK * arg2, Vector2 * arg3, uint * arg4, uint * arg5)
 * Class: SMBPalette
 * Calls: `TileTexture__GetTextureCoords`, `Vector2__operator_assign`
 * Called by: `SMBPalette__AddTileToBuffer`
 */
/* SMBPalette__AddTileToBuffer__004db270(CGR__tagPos2TexVertex, GRIDBLOCK const&, Vector2 const&, unsigned
   int&, unsigned int&) */

void __thiscall SMBPalette__AddTileToBuffer__004db270(SMBPalette *self, tagPos2TexVertex *arg1,
                                                      GRIDBLOCK *arg2, Vector2 *arg3, uint *arg4,
                                                      uint *arg5)

{
  GRIDBLOCK GVar1;
  byte bVar2;
  uint uVar3;
  Vector2 *pVVar4;
  float fVar5;
  Matrix4x4 local_1b8[64];
  uint32_t local_178;
  uint32_t local_174;
  uint32_t local_170;
  uint32_t local_16c;
  uint32_t local_168;
  uint32_t local_164;
  uint32_t local_160;
  uint32_t local_15c;
  uint32_t local_158;
  uint32_t local_154;
  uint32_t local_148;
  uint32_t local_144;
  uint32_t local_138;
  uint32_t local_134;
  uint32_t local_128;
  uint32_t local_124;
  uint32_t local_118;
  uint32_t local_114;
  uint32_t local_108;
  uint32_t local_104;
  uint32_t local_f8;
  uint32_t local_f4;
  uint32_t local_e8;
  uint32_t local_e4;
  uint32_t local_d8;
  uint32_t local_d4;
  uint32_t local_c8;
  uint32_t local_c4;
  uint32_t local_b8;
  uint32_t local_b4;
  uint32_t local_a8;
  uint32_t local_a4;
  uint32_t local_98;
  uint32_t local_94;
  uint32_t local_88;
  uint32_t local_84;
  uint32_t local_78;
  uint32_t local_74;
  uint32_t local_68;
  uint32_t local_64;
  uint32_t local_58;
  uint32_t local_54;
  float local_48[4];
  float local_38[4];

  if ((*arg2 != (GRIDBLOCK)0x0) && ((uint)(byte)*arg2 != *(uint *)(self + 0x427c))) {
    local_48[0] = 0.0;
    fVar5 = DAT_005be6e4 /* R:0.5f */ * TileLevel__fLevelGridWH;
    bVar2 = (byte)arg2[2] & 3;
    if (bVar2 == 2) {
      local_48[0] = 3.1415927;
    } else if (bVar2 == 3) {
      local_48[0] = -1.5707964;
    } else if (bVar2 == 1) {
      local_48[0] = 1.5707964;
    }
    local_38[0] = 0.0;
    bVar2 = (byte)arg2[1] >> 4 & 3;
    if (bVar2 == 2) {
      local_38[0] = 3.1415927;
    } else if (bVar2 == 3) {
      local_38[0] = -1.5707964;
    } else if (bVar2 == 1) {
      local_38[0] = 1.5707964;
    }
    local_154 = 0x3f800000;
    local_158 = 0x3f800000;
    uVar3 = ((byte)arg2[1] >> 6) - 1;
    if (uVar3 < 3) {
      local_158 = *(uint32_t *)(CSWTCH_639 + (ulong)uVar3 * 4);
      local_154 = *(uint32_t *)(CSWTCH_640 + (ulong)uVar3 * 4);
    }
    Matrix4x4__Transformation2DRot(local_1b8, (Vector2 *)&local_158, local_38, arg3);
    uVar3 = DAT_005be6f0 /* R:u32=2147483648 */;
    bVar2 = (byte)arg2[2] & 0xc;
    if (((byte)arg2[2] & 0xc) == 0) {
      GVar1 = *arg2;
      if ((uint)(byte)GVar1 == *(uint *)(pPalProps + 4)) {
        return;
      }
      if ((uint)(byte)GVar1 == *(uint *)(pPalProps + 0xc)) {
        return;
      }
      if ((uint)(byte)GVar1 == *(uint *)(pPalProps + 0x28)) {
        return;
      }
      if ((uint)(byte)GVar1 == *(uint *)(pPalProps + 0x50)) {
        return;
      }
      *(float *)(arg1 + 4) = fVar5;
      uVar3 = uVar3 ^ (uint)fVar5;
      *(uint *)arg1 = uVar3;
      Matrix4x4__TransformVector2((Vector2 *)arg1, (Vector2 *)arg1, local_1b8, 1);
      *(float *)(arg1 + 0x10) = fVar5;
      *(float *)(arg1 + 0x14) = fVar5;
      Matrix4x4__TransformVector2((Vector2 *)(arg1 + 0x10), (Vector2 *)(arg1 + 0x10), local_1b8, 1);
      *(uint *)(arg1 + 0x20) = uVar3;
      *(uint *)(arg1 + 0x24) = uVar3;
      Matrix4x4__TransformVector2((Vector2 *)(arg1 + 0x20), (Vector2 *)(arg1 + 0x20), local_1b8, 1);
      *(uint *)(arg1 + 0x34) = uVar3;
      *(float *)(arg1 + 0x30) = fVar5;
      Matrix4x4__TransformVector2((Vector2 *)(arg1 + 0x30), (Vector2 *)(arg1 + 0x30), local_1b8, 1);
      *(float *)(arg1 + 0x40) = fVar5;
      *(float *)(arg1 + 0x44) = fVar5;
      Matrix4x4__TransformVector2((Vector2 *)(arg1 + 0x40), (Vector2 *)(arg1 + 0x40), local_1b8, 1);
      *(uint *)(arg1 + 0x50) = uVar3;
      *(uint *)(arg1 + 0x54) = uVar3;
      Matrix4x4__TransformVector2((Vector2 *)(arg1 + 0x50), (Vector2 *)(arg1 + 0x50), local_1b8, 1);
      local_148 = 0;
      local_144 = 0;
      Vector2__operator_assign((Vector2 *)&local_178, (Vector2 *)&local_148);
      local_138 = 0x3f800000;
      local_134 = 0;
      Vector2__operator_assign((Vector2 *)&local_170, (Vector2 *)&local_138);
      local_128 = 0;
      local_124 = 0x3f800000;
      Vector2__operator_assign((Vector2 *)&local_168, (Vector2 *)&local_128);
      pVVar4 = (Vector2 *)&local_118;
      local_118 = 0x3f800000;
      local_114 = 0x3f800000;
    } else {
      if (bVar2 != 4) {
        if (bVar2 == 8) {
          *(float *)(arg1 + 4) = fVar5;
          uVar3 = uVar3 ^ (uint)fVar5;
          *(uint *)arg1 = uVar3;
          Matrix4x4__TransformVector2((Vector2 *)arg1, (Vector2 *)arg1, local_1b8, 1);
          *(float *)(arg1 + 0x10) = fVar5;
          *(float *)(arg1 + 0x14) = fVar5;
          Matrix4x4__TransformVector2((Vector2 *)(arg1 + 0x10), (Vector2 *)(arg1 + 0x10), local_1b8,
                                      1);
          *(uint *)(arg1 + 0x20) = uVar3;
          *(uint *)(arg1 + 0x24) = uVar3;
          Matrix4x4__TransformVector2((Vector2 *)(arg1 + 0x20), (Vector2 *)(arg1 + 0x20), local_1b8,
                                      1);
          local_c8 = 0;
          local_c4 = 0;
          Vector2__operator_assign((Vector2 *)&local_178, (Vector2 *)&local_c8);
          local_b8 = 0x3f800000;
          local_b4 = 0;
          Vector2__operator_assign((Vector2 *)&local_170, (Vector2 *)&local_b8);
          local_a8 = 0;
          local_a4 = 0x3f800000;
          Vector2__operator_assign((Vector2 *)&local_168, (Vector2 *)&local_a8);
          local_98 = 0x3f800000;
          local_94 = 0x3f800000;
          pVVar4 = (Vector2 *)&local_98;
        } else {
          if (bVar2 != 0xc) {
            return;
          }
          *(float *)(arg1 + 4) = fVar5;
          *(uint *)arg1 = uVar3 ^ (uint)fVar5;
          Matrix4x4__TransformVector2((Vector2 *)arg1, (Vector2 *)arg1, local_1b8, 1);
          *(float *)(arg1 + 0x14) = fVar5;
          *(uint32_t *)(arg1 + 0x10) = 0;
          Matrix4x4__TransformVector2((Vector2 *)(arg1 + 0x10), (Vector2 *)(arg1 + 0x10), local_1b8,
                                      1);
          *(uint *)(arg1 + 0x20) = uVar3 ^ (uint)fVar5;
          *(uint32_t *)(arg1 + 0x24) = 0;
          Matrix4x4__TransformVector2((Vector2 *)(arg1 + 0x20), (Vector2 *)(arg1 + 0x20), local_1b8,
                                      1);
          local_88 = 0;
          local_84 = 0;
          Vector2__operator_assign((Vector2 *)&local_178, (Vector2 *)&local_88);
          local_78 = 0x3f000000;
          local_74 = 0;
          Vector2__operator_assign((Vector2 *)&local_170, (Vector2 *)&local_78);
          local_68 = 0;
          local_64 = 0x3f000000;
          Vector2__operator_assign((Vector2 *)&local_168, (Vector2 *)&local_68);
          pVVar4 = (Vector2 *)&local_58;
          local_58 = 0x3f000000;
          local_54 = 0x3f000000;
        }
        Vector2__operator_assign((Vector2 *)&local_160, pVVar4);
        TileTexture__GetTextureCoords(*(TileTexture **)(self + 0x30), (uint)(byte)*arg2, local_48,
                                      (Vector2 *)&local_178);
        *(uint32_t *)(arg1 + 8) = local_178;
        *(uint32_t *)(arg1 + 0xc) = local_174;
        *(uint32_t *)(arg1 + 0x18) = local_170;
        *(uint32_t *)(arg1 + 0x1c) = local_16c;
        *(uint32_t *)(arg1 + 0x28) = local_168;
        *(uint32_t *)(arg1 + 0x2c) = local_164;
        *arg5 = 3;
        *arg4 = 1;
        return;
      }
      *(float *)(arg1 + 4) = fVar5;
      uVar3 = uVar3 ^ (uint)fVar5;
      *(uint *)arg1 = uVar3;
      Matrix4x4__TransformVector2((Vector2 *)arg1, (Vector2 *)arg1, local_1b8, 1);
      *(float *)(arg1 + 0x10) = fVar5;
      *(float *)(arg1 + 0x14) = fVar5;
      Matrix4x4__TransformVector2((Vector2 *)(arg1 + 0x10), (Vector2 *)(arg1 + 0x10), local_1b8, 1);
      *(uint *)(arg1 + 0x20) = uVar3;
      *(uint32_t *)(arg1 + 0x24) = 0;
      Matrix4x4__TransformVector2((Vector2 *)(arg1 + 0x20), (Vector2 *)(arg1 + 0x20), local_1b8, 1);
      *(float *)(arg1 + 0x30) = fVar5;
      *(uint32_t *)(arg1 + 0x34) = 0;
      Matrix4x4__TransformVector2((Vector2 *)(arg1 + 0x30), (Vector2 *)(arg1 + 0x30), local_1b8, 1);
      *(float *)(arg1 + 0x40) = fVar5;
      *(float *)(arg1 + 0x44) = fVar5;
      Matrix4x4__TransformVector2((Vector2 *)(arg1 + 0x40), (Vector2 *)(arg1 + 0x40), local_1b8, 1);
      *(uint *)(arg1 + 0x50) = uVar3;
      *(uint32_t *)(arg1 + 0x54) = 0;
      Matrix4x4__TransformVector2((Vector2 *)(arg1 + 0x50), (Vector2 *)(arg1 + 0x50), local_1b8, 1);
      local_108 = 0;
      local_104 = 0;
      Vector2__operator_assign((Vector2 *)&local_178, (Vector2 *)&local_108);
      local_f8 = 0x3f800000;
      local_f4 = 0;
      Vector2__operator_assign((Vector2 *)&local_170, (Vector2 *)&local_f8);
      local_e8 = 0;
      local_e4 = 0x3f000000;
      Vector2__operator_assign((Vector2 *)&local_168, (Vector2 *)&local_e8);
      local_d8 = 0x3f800000;
      local_d4 = 0x3f000000;
      pVVar4 = (Vector2 *)&local_d8;
    }
    Vector2__operator_assign((Vector2 *)&local_160, pVVar4);
    TileTexture__GetTextureCoords(*(TileTexture **)(self + 0x30), (uint)(byte)*arg2, local_48,
                                  (Vector2 *)&local_178);
    *(uint32_t *)(arg1 + 8) = local_178;
    *(uint32_t *)(arg1 + 0x38) = local_160;
    *(uint32_t *)(arg1 + 0x18) = local_170;
    *(uint32_t *)(arg1 + 0x1c) = local_16c;
    *(uint32_t *)(arg1 + 0xc) = local_174;
    *(uint32_t *)(arg1 + 0x28) = local_168;
    *(uint32_t *)(arg1 + 0x3c) = local_15c;
    *(uint32_t *)(arg1 + 0x48) = local_170;
    *(uint32_t *)(arg1 + 0x4c) = local_16c;
    *(uint32_t *)(arg1 + 0x2c) = local_164;
    *(uint32_t *)(arg1 + 0x58) = local_168;
    *(uint32_t *)(arg1 + 0x5c) = local_164;
    *arg5 = 6;
    *arg4 = 2;
  }
  return;
}

/* ======================================================================
 * SMBPalette__RenderSetPiece  (Ghidra `RenderSetPiece` @ 004dee10)
 * Signature: uint8_t __thiscall RenderSetPiece(SMBPalette * self, TileLevelSetPiece * arg1, int arg2)
 * Class: SMBPalette
 * Calls: `RenderSetPiece`
 * Called by: `RenderSetPiece`, `RenderSetPiece__004dee20`
 */
/* non-virtual thunk to SMBPalette__RenderSetPiece(TileLevelSetPiece*, int) */

void __thiscall SMBPalette__RenderSetPiece(SMBPalette *self, TileLevelSetPiece *arg1, int arg2)

{
  RenderSetPiece((TileLevelSetPiece *)(self + -0x10), (int)arg1);
  return;
}

/* ======================================================================
 * SMBPalette__IsRegisteredBreakyBlock  (Ghidra `IsRegisteredBreakyBlock` @ 004e00e0)
 * Signature: uint8_t __thiscall IsRegisteredBreakyBlock(SMBPalette * self, GRIDBLOCK * arg1)
 * Class: SMBPalette
 * Calls: (none)
 * Called by: (none)
 */
/* SMBPalette__IsRegisteredBreakyBlock(GRIDBLOCK const*) */

uint64_t __thiscall SMBPalette__IsRegisteredBreakyBlock(SMBPalette *self, GRIDBLOCK *arg1)

{
  long *plVar1;
  long lVar2;
  uint64_t uVar3;

  uVar3 = 0;
  if (*(ushort *)(self + 0x3e78) != 0) {
    uVar3 = 1;
    if (*(GRIDBLOCK **)(*(long *)(self + 0x3e88) + 8) != arg1) {
      lVar2 = 0x30;
      do {
        if (lVar2 == ((ulong)(*(ushort *)(self + 0x3e78) - 1 & 0xffff) * 3 + 3) * 0x10) {
          return 0;
        }
        plVar1 = (long *)(*(long *)(self + 0x3e88) + 8 + lVar2);
        lVar2 = lVar2 + 0x30;
      } while ((GRIDBLOCK *)*plVar1 != arg1);
      uVar3 = 1;
    }
  }
  return uVar3;
}

/* ======================================================================
 * SMBPalette__SpawnDemonSpawn  (Ghidra `SpawnDemonSpawn` @ 004e06d0)
 * Signature: uint8_t __thiscall SpawnDemonSpawn(SMBPalette * self, Vector2 * arg1, TileCollisionInfo * arg2, SMBShooter * arg3)
 * Class: SMBPalette
 * Calls: `CriticalSection__CriticalSection`, `Reset2DPhysics`, `Vector2__operator_assign`, `free`, `malloc`, `memcpy`, `sincos`
 * Called by: (none)
 */
/* SMBPalette__SpawnDemonSpawn(Vector2 const&, TileCollisionInfo const&, SMBShooter*) */

void __thiscall SMBPalette__SpawnDemonSpawn(SMBPalette *self, Vector2 *arg1,
                                            TileCollisionInfo *arg2, SMBShooter *arg3)

{
  void *pvVar1;
  bool bVar2;
  uint64_t uVar3;
  short sVar4;
  ushort uVar5;
  void *pvVar6;
  void *pvVar7;
  ulong uVar8;
  ushort uVar9;
  uint64_t *puVar10;
  ushort *puVar11;
  int iVar12;
  uint uVar13;
  uint64_t *puVar15;
  CriticalSection *this_00;
  int iVar16;
  bool bVar17;
  byte bVar18;
  double dVar19;
  float local_4c;
  double local_48;
  double local_40[2];
  ulong uVar14;

  bVar18 = 0;
  local_4c = DAT_005c4898 /* R:3.1415927410125732f */;
  if (*(int *)(arg2 + 0x20) != 1) {
    local_4c = 0.0;
  }
  if (*(int *)(arg2 + 0x24) == 4) {
    local_4c = DAT_005c48a0 /* R:-1.5707963705062866f */;
  } else if (*(int *)(arg2 + 0x24) == 8) {
    local_4c = DAT_005c1408 /* R:1.5707963705062866f */;
  }
  iVar16 = 6;
  do {
    if (*(int *)(self + 0x3f88) == -0x5eef3582) {
      uVar5 = *(ushort *)(self + 0x3f68);
      if (*(ushort *)(self + 0x3f6a) <= uVar5) {
        uVar5 = *(ushort *)(self + 0x3f6a) + *(short *)(self + 0x3f74);
        uVar8 = (ulong)(byte)self[0x3f6c];
        pvVar6 = (void *)0x0;
        pvVar1 = *(void **)(self + 0x3f78);
        *(ushort *)(self + 0x3f6a) = uVar5;
        uVar14 = (ulong)uVar5 * 0x108;
        pvVar7 = malloc(uVar8 + 0x10 + uVar14);
        if (pvVar7 != (void *)0x0) {
          pvVar6 =
              (void *)((long)pvVar7 + 0x10U + (uVar8 - ((long)pvVar7 + 0x10U) % uVar8) % uVar8);
          *(ulong *)((long)pvVar6 + -0x10) = uVar14;
          *(void **)((long)pvVar6 + -8) = pvVar7;
          if (pvVar1 != (void *)0x0) {
            uVar8 = *(ulong *)((long)pvVar1 + -0x10);
            if (uVar14 <= *(ulong *)((long)pvVar1 + -0x10)) {
              uVar8 = uVar14;
            }
            memcpy(pvVar6, pvVar1, uVar8);
            free(*(void **)((long)pvVar1 + -8));
          }
        }
        pvVar1 = *(void **)(self + 0x3f80);
        *(void **)(self + 0x3f78) = pvVar6;
        if (pvVar1 != (void *)0x0) {
          uVar9 = *(ushort *)(self + 0x3f6a);
          uVar8 = (ulong)(byte)self[0x3f6c];
          pvVar6 = (void *)0x0;
          uVar14 = (ulong)uVar9 * 2;
          pvVar7 = malloc(uVar8 + 0x10 + uVar14);
          if (pvVar7 != (void *)0x0) {
            pvVar6 =
                (void *)((long)pvVar7 + 0x10U + (uVar8 - ((long)pvVar7 + 0x10U) % uVar8) % uVar8);
            *(ulong *)((long)pvVar6 + -0x10) = uVar14;
            *(void **)((long)pvVar6 + -8) = pvVar7;
            uVar8 = *(ulong *)((long)pvVar1 + -0x10);
            if (uVar14 <= *(ulong *)((long)pvVar1 + -0x10)) {
              uVar8 = uVar14;
            }
            memcpy(pvVar6, pvVar1, uVar8);
            free(*(void **)((long)pvVar1 + -8));
            uVar9 = *(ushort *)(self + 0x3f6a);
          }
          uVar5 = *(ushort *)(self + 0x3f68);
          *(void **)(self + 0x3f80) = pvVar6;
          if (uVar9 <= uVar5)
            goto LAB_004e09e0;
          while (true) {
            uVar14 = (ulong)uVar5;
            uVar5 = uVar5 + 1;
            *(uint16_t *)((long)pvVar6 + uVar14 * 2) = 0xffff;
            if (uVar9 <= uVar5)
              break;
            pvVar6 = *(void **)(self + 0x3f80);
          }
        }
        uVar5 = *(ushort *)(self + 0x3f68);
      }
    } else {
      uVar14 = (ulong)(byte)self[0x3f6c];
      *(uint32_t *)(self + 0x3f70) = 0;
      pvVar6 = malloc(uVar14 + 0x538);
      puVar10 = (uint64_t *)0x0;
      if (pvVar6 != (void *)0x0) {
        puVar10 = (uint64_t *)((uVar14 - ((long)pvVar6 + 0x10U) % uVar14) % uVar14 + (long)pvVar6 +
                               0x10U);
        puVar10[-2] = 0x528;
        puVar10[-1] = pvVar6;
      }
      *(uint64_t **)(self + 0x3f78) = puVar10;
      uVar14 = 0x528;
      bVar2 = false;
      iVar12 = 0x528;
      bVar17 = false;
      if (((ulong)puVar10 & 1) == 0) {
        puVar15 = puVar10;
        if (((ulong)puVar10 & 2) != 0)
          goto LAB_004e0d10;
      LAB_004e097e:
        uVar13 = (uint)uVar14;
      } else {
        puVar15 = (uint64_t *)((long)puVar10 + 1);
        *(uint8_t *)puVar10 = 0;
        uVar14 = 0x527;
        bVar2 = true;
        iVar12 = 0x527;
        bVar17 = true;
        if (((ulong)puVar15 & 2) == 0)
          goto LAB_004e097e;
      LAB_004e0d10:
        *(uint16_t *)puVar15 = 0;
        puVar15 = (uint64_t *)((long)puVar15 + 2);
        uVar13 = iVar12 - 2;
        uVar14 = (ulong)uVar13;
        bVar2 = bVar17;
      }
      if (((ulong)puVar15 & 4) != 0) {
        *(uint32_t *)puVar15 = 0;
        uVar14 = (ulong)(uVar13 - 4);
        puVar15 = (uint64_t *)((long)puVar15 + 4);
      }
      for (uVar8 = uVar14 >> 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar15 = 0;
        puVar15 = puVar15 + (ulong)bVar18 * -2 + 1;
      }
      if ((uVar14 & 4) != 0) {
        *(uint32_t *)puVar15 = 0;
        puVar15 = (uint64_t *)((long)puVar15 + 4);
      }
      if ((uVar14 & 2) != 0) {
        *(uint16_t *)puVar15 = 0;
        puVar15 = (uint64_t *)((long)puVar15 + 2);
      }
      if (bVar2) {
        *(uint8_t *)puVar15 = 0;
      }
      *(uint16_t *)(self + 0x3f68) = 0;
      *(uint16_t *)(self + 0x3f6a) = 5;
      uVar5 = 0;
      *(uint32_t *)(self + 0x3f88) = 0xa110ca7e;
      *(uint16_t *)(self + 0x3f74) = 5;
    }
  LAB_004e09e0:
    if ((*(int *)(self + 0x3f70) == 1) && (*(short *)(self + 0x3f6a) != 0)) {
      puVar11 = *(ushort **)(self + 0x3f80);
      sVar4 = 1;
      uVar9 = *puVar11;
      while (uVar9 != 0xffff) {
        puVar11 = puVar11 + 1;
        if (sVar4 == *(short *)(self + 0x3f6a))
          goto LAB_004e09ed;
        sVar4 = sVar4 + 1;
        uVar9 = *puVar11;
      }
      *puVar11 = uVar5;
      uVar5 = *(ushort *)(self + 0x3f68);
    }
  LAB_004e09ed:
    uVar14 = 0x108;
    *(ushort *)(self + 0x3f68) = uVar5 + 1;
    puVar10 = (uint64_t *)(((ulong)(ushort)(uVar5 + 1) - 1) * 0x108 + *(long *)(self + 0x3f78));
    bVar17 = ((ulong)puVar10 & 1) != 0;
    if (bVar17) {
      *(uint8_t *)puVar10 = 0;
      puVar10 = (uint64_t *)((long)puVar10 + 1);
      uVar14 = 0x107;
    }
    if (((ulong)puVar10 & 2) != 0) {
      *(uint16_t *)puVar10 = 0;
      uVar14 = (ulong)((int)uVar14 - 2);
      puVar10 = (uint64_t *)((long)puVar10 + 2);
    }
    if (((ulong)puVar10 & 4) != 0) {
      *(uint32_t *)puVar10 = 0;
      uVar14 = (ulong)((int)uVar14 - 4);
      puVar10 = (uint64_t *)((long)puVar10 + 4);
    }
    for (uVar8 = uVar14 >> 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar10 = 0;
      puVar10 = puVar10 + (ulong)bVar18 * -2 + 1;
    }
    if ((uVar14 & 4) != 0) {
      *(uint32_t *)puVar10 = 0;
      puVar10 = (uint64_t *)((long)puVar10 + 4);
    }
    if ((uVar14 & 2) != 0) {
      *(uint16_t *)puVar10 = 0;
      puVar10 = (uint64_t *)((long)puVar10 + 2);
    }
    if (bVar17) {
      *(uint8_t *)puVar10 = 0;
    }
    puVar10 =
        (uint64_t *)(((ulong) * (ushort *)(self + 0x3f68) - 1) * 0x108 + *(long *)(self + 0x3f78));
    if (puVar10 == (uint64_t *)0x0) {
      this_00 = (CriticalSection *)&DAT_00000058 /* R:u32=1919252014 */;
    } else {
      this_00 = (CriticalSection *)(puVar10 + 0xb);
      puVar10[9] = 0;
      *(uint32_t *)(puVar10 + 10) = 1;
      *puVar10 = &PTR__SceneObject2D_005dd3d0;
      /* try { // try from 004e074d to 004e0751 has its CatchHandler @ 004e0d42 */
      CriticalSection__CriticalSection(this_00);
      uVar3 = vDefaultStart2D;
      *(uint32_t *)(puVar10 + 0x10) = 0;
      *(uint32_t *)((long)puVar10 + 0x84) = 0;
      *(uint32_t *)(puVar10 + 0x11) = 0x3f800000;
      *(uint32_t *)((long)puVar10 + 0x8c) = 0;
      *(uint32_t *)(puVar10 + 0x12) = 0;
      *(uint32_t *)((long)puVar10 + 0x94) = 0;
      *(uint32_t *)(puVar10 + 0x13) = 0;
      *(uint32_t *)((long)puVar10 + 0x9c) = 1;
      puVar10[0x14] = uVar3;
      puVar10[0x15] = uVar3;
      *(uint32_t *)(puVar10 + 0x16) = 0;
      *(uint32_t *)((long)puVar10 + 0xb4) = 0;
      *(uint32_t *)(puVar10 + 0x17) = 0;
      *(uint32_t *)((long)puVar10 + 0xbc) = 0;
      *(uint32_t *)(puVar10 + 0x19) = 0;
      *(uint32_t *)((long)puVar10 + 0xcc) = 0;
      *(uint32_t *)(puVar10 + 0x1a) = 0x3f800000;
      *(uint32_t *)((long)puVar10 + 0xd4) = 0x3f800000;
      *(uint32_t *)(puVar10 + 0x1b) = 0;
      *(uint32_t *)((long)puVar10 + 0xdc) = 0;
      *(uint32_t *)(puVar10 + 0x1c) = 0;
      *(uint32_t *)((long)puVar10 + 0xe4) = 0;
      *(uint32_t *)(puVar10 + 0x1d) = 0;
      *(uint32_t *)((long)puVar10 + 0xec) = 0;
      *(uint32_t *)(puVar10 + 0x1e) = 0;
    }
    *(uint32_t *)(puVar10 + 0x1f) = 0;
    puVar10[0x20] = arg3;
    Reset2DPhysics((Physics2D *)this_00);
    *(uint32_t *)((long)puVar10 + 0x9c) = 1;
    Vector2__operator_assign((Vector2 *)(puVar10 + 0x14), arg1);
    sincos((double)local_4c, local_40, &local_48);
    iVar16 = iVar16 + -1;
    dVar19 = DAT_005c7300 /* R:0.0f */ * local_48;
    *(float *)((long)puVar10 + 0xbc) = (float)(local_40[0] * DAT_005c7300 /* R:0.0f */);
    *(float *)(puVar10 + 0x1b) = local_4c;
    local_4c = DAT_005c1404 /* R:0.6283185482025146f */ + local_4c;
    *(float *)(puVar10 + 0x17) = (float)dVar19;
    if (iVar16 == 0) {
      return;
    }
  } while (true);
}

/* ======================================================================
 * SMBPalette__DemonBulletCollision  (Ghidra `DemonBulletCollision` @ 004e0d60)
 * Signature: uint8_t __thiscall DemonBulletCollision(SMBPalette * self, SceneObject2D * arg1, Bounds * arg2)
 * Class: SMBPalette
 * Calls: `IsBoundsTouchingBounds`, `Vector2__operator_assign`
 * Called by: (none)
 */
/* SMBPalette__DemonBulletCollision(SceneObject2D*, Bounds*) */

uint64_t __thiscall SMBPalette__DemonBulletCollision(SMBPalette *self, SceneObject2D *arg1,
                                                     Bounds *arg2)

{
  int iVar1;
  uint64_t uVar2;
  uint uVar3;

  if (arg2 == (Bounds *)0x0) {
    arg2 = *(Bounds **)(arg1 + 0x48);
  }
  uVar2 = 0;
  if (*(short *)(self + 0x3f68) != 0) {
    uVar3 = 0;
    while (true) {
      Vector2__operator_assign(
          (Vector2 *)(demonSpawnCircle + 8),
          (Vector2 *)((ulong)(uVar3 & 0xffff) * 0x108 + *(long *)(self + 0x3f78) + 0xa0));
      iVar1 = IsBoundsTouchingBounds((Bounds *)demonSpawnCircle, arg2);
      if (iVar1 == 1)
        break;
      uVar3 = uVar3 + 1;
      if ((int)(uint) * (ushort *)(self + 0x3f68) <= (int)uVar3) {
        return 0;
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}

/* ======================================================================
 * SMBPalette__UpdateDemonSpawn  (Ghidra `UpdateDemonSpawn` @ 004e0df0)
 * Signature: uint8_t __thiscall UpdateDemonSpawn(SMBPalette * self)
 * Class: SMBPalette
 * Calls: `Apply2DPhysics`, `Matrix4x4__operator_assign`, `TileLevel__TileCollision`, `Vector2__operator_assign`
 * Called by: (none)
 */
/* SMBPalette__UpdateDemonSpawn() */

void __thiscall SMBPalette__UpdateDemonSpawn(SMBPalette *self)

{
  long lVar1;
  ushort *puVar2;
  long lVar3;
  ushort uVar4;
  uint uVar5;
  ushort uVar6;
  uint uVar7;
  ushort uVar8;
  SceneObject2D *pSVar9;
  long lVar10;
  TileCollisionInfo local_88[16];
  uint8_t local_78[16];
  uint32_t local_68;
  uint32_t uStack_64;
  uint32_t local_40;

  local_88[0] = (TileCollisionInfo)0x0;
  local_88[1] = (TileCollisionInfo)0x0;
  local_88[2] = (TileCollisionInfo)0x0;
  local_88[3] = (TileCollisionInfo)0x0;
  local_88[4] = (TileCollisionInfo)0x0;
  local_88[5] = (TileCollisionInfo)0x0;
  local_88[6] = (TileCollisionInfo)0x0;
  local_88[7] = (TileCollisionInfo)0x0;
  local_88[8] = (TileCollisionInfo)0x0;
  local_88[9] = (TileCollisionInfo)0x0;
  local_88[10] = (TileCollisionInfo)0x0;
  local_88[0xb] = (TileCollisionInfo)0x0;
  local_88[0xc] = (TileCollisionInfo)0x0;
  local_88[0xd] = (TileCollisionInfo)0x0;
  local_88[0xe] = (TileCollisionInfo)0x0;
  local_88[0xf] = (TileCollisionInfo)0x0;
  local_68 = 0;
  uStack_64 = 0;
  local_78 = (uint8_t[16])0x0;
  local_40 = 1;
  if (*(short *)(self + 0x3f68) != 0) {
    uVar7 = 0;
    do {
      while (true) {
        pSVar9 = (SceneObject2D *)((ulong)(uVar7 & 0xffff) * 0x108 + *(long *)(self + 0x3f78));
        Apply2DPhysics(pSVar9, fOneFrameTimeStep);
        TileLevel__TileCollision(*(TileLevel **)(SuperMeatBoy + 0x40), pSVar9, local_88);
        if (CONCAT44(uStack_64, local_68) == 0)
          break;
        uVar6 = *(ushort *)(self + 0x3f68);
        if ((uVar7 + 1 < (uint)uVar6) && ((int)uVar7 < (int)(uVar6 - 1))) {
          lVar10 = ((long)(int)uVar7 + 1) * 0x108;
          uVar5 = uVar7;
          do {
            lVar3 = *(long *)(self + 0x3f78) + -0x108 + lVar10;
            lVar1 = *(long *)(self + 0x3f78) + lVar10;
            lVar10 = lVar10 + 0x108;
            Matrix4x4__operator_assign((Matrix4x4 *)(lVar3 + 8), (Matrix4x4 *)(lVar1 + 8));
            *(uint64_t *)(lVar3 + 0x48) = *(uint64_t *)(lVar1 + 0x48);
            *(uint32_t *)(lVar3 + 0x50) = *(uint32_t *)(lVar1 + 0x50);
            *(uint64_t *)(lVar3 + 0x58) = *(uint64_t *)(lVar1 + 0x58);
            *(uint64_t *)(lVar3 + 0x60) = *(uint64_t *)(lVar1 + 0x60);
            *(uint64_t *)(lVar3 + 0x68) = *(uint64_t *)(lVar1 + 0x68);
            *(uint64_t *)(lVar3 + 0x70) = *(uint64_t *)(lVar1 + 0x70);
            *(uint64_t *)(lVar3 + 0x78) = *(uint64_t *)(lVar1 + 0x78);
            *(uint64_t *)(lVar3 + 0x80) = *(uint64_t *)(lVar1 + 0x80);
            *(uint64_t *)(lVar3 + 0x88) = *(uint64_t *)(lVar1 + 0x88);
            *(uint64_t *)(lVar3 + 0x90) = *(uint64_t *)(lVar1 + 0x90);
            *(uint64_t *)(lVar3 + 0x98) = *(uint64_t *)(lVar1 + 0x98);
            Vector2__operator_assign((Vector2 *)(lVar3 + 0xa0), (Vector2 *)(lVar1 + 0xa0));
            Vector2__operator_assign((Vector2 *)(lVar3 + 0xa8), (Vector2 *)(lVar1 + 0xa8));
            Vector2__operator_assign((Vector2 *)(lVar3 + 0xb0), (Vector2 *)(lVar1 + 0xb0));
            Vector2__operator_assign((Vector2 *)(lVar3 + 0xb8), (Vector2 *)(lVar1 + 0xb8));
            Vector2__operator_assign((Vector2 *)(lVar3 + 0xc0), (Vector2 *)(lVar1 + 0xc0));
            Vector2__operator_assign((Vector2 *)(lVar3 + 200), (Vector2 *)(lVar1 + 200));
            Vector2__operator_assign((Vector2 *)(lVar3 + 0xd0), (Vector2 *)(lVar1 + 0xd0));
            *(uint32_t *)(lVar3 + 0xd8) = *(uint32_t *)(lVar1 + 0xd8);
            Vector2__operator_assign((Vector2 *)(lVar3 + 0xdc), (Vector2 *)(lVar1 + 0xdc));
            Vector2__operator_assign((Vector2 *)(lVar3 + 0xe4), (Vector2 *)(lVar1 + 0xe4));
            Vector2__operator_assign((Vector2 *)(lVar3 + 0xec), (Vector2 *)(lVar1 + 0xec));
            *(uint32_t *)(lVar3 + 0xf8) = *(uint32_t *)(lVar1 + 0xf8);
            *(uint64_t *)(lVar3 + 0x100) = *(uint64_t *)(lVar1 + 0x100);
            uVar6 = *(ushort *)(self + 0x3f68);
            uVar5 = uVar5 + 1;
          } while ((int)uVar5 < (int)(uVar6 - 1));
        }
        if ((*(int *)(self + 0x3f70) == 1) && (uVar8 = *(ushort *)(self + 0x3f6a), uVar8 != 0)) {
          uVar6 = 0;
          do {
            while (true) {
              puVar2 = (ushort *)(*(long *)(self + 0x3f80) + (ulong)uVar6 * 2);
              uVar4 = *puVar2;
              if (uVar7 != uVar4)
                break;
              *puVar2 = 0xffff;
              uVar8 = *(ushort *)(self + 0x3f6a);
              uVar6 = uVar6 + 1;
              if (uVar8 <= uVar6)
                goto LAB_004e1122;
            }
            if ((uVar7 < uVar4) && ((ushort)(uVar4 - 1) < 0xfffe)) {
              *puVar2 = uVar4 - 1;
              uVar8 = *(ushort *)(self + 0x3f6a);
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 < uVar8);
        LAB_004e1122:
          uVar6 = *(ushort *)(self + 0x3f68);
        }
        uVar5 = 0;
        uVar8 = 0;
        if (uVar6 != 0) {
          uVar8 = uVar6 - 1;
          uVar5 = (uint)uVar8;
        }
        *(ushort *)(self + 0x3f68) = uVar8;
        if (uVar7 != 0) {
          uVar7 = 1;
        }
        if ((int)uVar5 <= (int)uVar7) {
          return;
        }
      }
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < (int)(uint) * (ushort *)(self + 0x3f68));
  }
  return;
}

/* ======================================================================
 * SMBPalette__RenderDemonSpawn  (Ghidra `RenderDemonSpawn` @ 004e1130)
 * Signature: uint8_t __thiscall RenderDemonSpawn(SMBPalette * self, RenderLayer * arg1)
 * Class: SMBPalette
 * Calls: `Vector2__operator_assign`
 * Called by: (none)
 */
/* SMBPalette__RenderDemonSpawn(RenderLayer const*) */

void __thiscall SMBPalette__RenderDemonSpawn(SMBPalette *self, RenderLayer *arg1)

{
  long lVar1;
  ushort uVar2;
  uint uVar3;
  ulong uVar4;
  uint32_t local_38;
  uint32_t local_34;

  uVar2 = *(ushort *)(self + 0x3f68);
  if (uVar2 != 0) {
    uVar4 = 0;
    do {
      lVar1 = (uVar4 & 0xffff) * 0x108;
      if (*(RenderLayer **)(**(long **)(lVar1 + *(long *)(self + 0x3f78) + 0x100) + 0x18) == arg1) {
        local_38 = 0x3f800000;
        local_34 = 0x3f800000;
        *(uint32_t *)(*(long *)(self + 0x90) + 0x30) =
            *(uint32_t *)(lVar1 + *(long *)(self + 0x3f78) + 0xa0);
        *(uint32_t *)(*(long *)(self + 0x90) + 0x34) =
            *(uint32_t *)(*(long *)(self + 0x3f78) + 0xa4 + lVar1);
        Vector2__operator_assign((Vector2 *)(*(long *)(self + 0x90) + 0x40), (Vector2 *)&local_38);
        *(uint32_t *)(*(long *)(self + 0x90) + 0x48) =
            *(uint32_t *)(*(long *)(self + 0x3f78) + 0xd8 + lVar1);
        *(uint32_t *)(*(long *)(self + 0x90) + 0x4c) =
            *(uint32_t *)(*(long *)(self + 0x3f78) + 0xd8 + lVar1);
        *(uint32_t *)(*(long *)(self + 0x90) + 0x20) = *(uint32_t *)(self + 0x43d4);
        *(uint32_t *)(*(long *)(self + 0x90) + 0x58) =
            *(uint32_t *)(*(long *)(self + 0x3f78) + 0xf8 + lVar1);
        (**(code **)(**(long **)(self + 0x90) + 0x10))();
        *(uint32_t *)(*(long *)(self + 0x3f78) + 0xf8 + lVar1) =
            *(uint32_t *)(*(long *)(self + 0x90) + 0x58);
        uVar2 = *(ushort *)(self + 0x3f68);
      }
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulong)uVar3;
    } while ((int)uVar3 < (int)(uint)uVar2);
  }
  return;
}

/* ======================================================================
 * SMBPalette__SpecialRender  (Ghidra `SpecialRender` @ 004e1280)
 * Signature: uint8_t __thiscall SpecialRender(SMBPalette * self, tagTileLayerLevelType arg1)
 * Class: SMBPalette
 * Calls: `SMBPalette__SpecialRender__004e1290`
 * Called by: (none)
 */
/* non-virtual thunk to SMBPalette__SpecialRender__004e1290(tagTileLayerLevelType) */

void __thiscall SMBPalette__SpecialRender__004e1290(SMBPalette *self)

{
  SpecialRender(self + -0x10);
  return;
}

/* ======================================================================
 * SMBPalette__SpecialRender__004e1290  (Ghidra `SpecialRender` @ 004e1290)
 * Signature: uint8_t __thiscall SpecialRender(SMBPalette * self, tagTileLayerLevelType arg1)
 * Class: SMBPalette
 * Calls: `Camera__ScreenToWorld`, `CriticalSection__Lock`, `CriticalSection__Unlock`, `FlashLibraryInstance__IsPlaying`, `RegisterAudioPosition`, `TGraphics__AddPixelStage`, `TGraphics__ResetPixelStages`, `TGraphics__ResetTexCoordGen`, `TGraphics__SetPixelColorConstant`, `TGraphics__SetRenderState` (+5 more)
 * Called by: `SMBPalette__SpecialRender`
 */
/* SMBPalette__SpecialRender__004e1290(tagTileLayerLevelType) */

void __thiscall SMBPalette__SpecialRender__004e1290(SMBPalette *self, int arg2)

{
  GRIDBLOCK *pGVar1;
  TGraphics *pTVar2;
  int iVar3;
  int iVar4;
  uint32_t uVar5;
  RenderLayer *pRVar6;
  long lVar7;
  uint64_t *puVar8;
  long *plVar9;
  ushort uVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  uint uVar16;
  uint *puVar17;
  uint32_t local_104;
  uint32_t local_fc;
  uint32_t local_f8;
  uint32_t local_f4;
  uint32_t local_f0;
  uint32_t local_ec;
  uint32_t local_e8;
  uint32_t local_e4;
  uint32_t local_e0;
  uint32_t local_dc;
  Vector2 local_d8[16];
  uint32_t local_c8;
  uint32_t local_c4;
  uint32_t local_b8;
  uint32_t local_b4;
  uint32_t local_a8;
  uint32_t local_a4;
  uint local_98;
  uint32_t local_94;
  uint32_t local_88;
  uint32_t local_84;
  uint32_t local_78;
  uint32_t local_74;
  uint32_t local_68;
  uint32_t local_64;
  int local_58[3];
  uint local_4c;
  ushort local_48[2];
  ushort local_44[2];
  ushort local_40[2];
  int local_3c[3];

  pRVar6 = (RenderLayer *)TileLevel__getLevelLayer(*(TileLevel **)(SuperMeatBoy + 0x40));
  uVar10 = *(ushort *)(self + 0x3ec8);
  if (uVar10 != 0) {
    uVar16 = 0;
  LAB_004e12e0:
    do {
      lVar15 = (ulong)(uVar16 & 0xffff) * 0xb68;
      plVar9 = (long *)(*(long *)(self + 0x3ed8) + lVar15);
      if (pRVar6 == *(RenderLayer **)(*plVar9 + 0x18)) {
        iVar4 = (int)plVar9[3];
        if (iVar4 == 3) {
          local_104 = *(uint32_t *)(self + 0x4338);
          local_fc = *(uint32_t *)(self + 0x433c);
        } else if (iVar4 == 0) {
          local_104 = *(uint32_t *)(self + 0x42d8);
          local_fc = *(uint32_t *)(self + 0x42dc);
        } else if (iVar4 == 1) {
          local_104 = *(uint32_t *)(self + 0x42f8);
          local_fc = *(uint32_t *)(self + 0x42fc);
        } else if (iVar4 == 4) {
          local_104 = *(uint32_t *)(self + 0x4370);
          local_fc = *(uint32_t *)(self + 0x4374);
        } else if (iVar4 == 5) {
          local_104 = *(uint32_t *)(self + 0x4354);
          local_fc = *(uint32_t *)(self + 0x4358);
        } else if (iVar4 == 2) {
          local_104 = *(uint32_t *)(self + 0x4318);
          local_fc = *(uint32_t *)(self + 0x431c);
        }
        iVar4 = 0;
        do {
          lVar13 = (long)iVar4;
          lVar7 = lVar13 * 0x120;
          iVar3 = (int)plVar9[lVar13 * 0x24 + 0x24];
          if (iVar3 != 2) {
            if (iVar3 == 0) {
              *(int *)(*(long *)(self + 0x90) + 0x30) = (int)plVar9[lVar13 * 0x24 + 0x19];
              *(uint32_t *)(*(long *)(self + 0x90) + 0x34) =
                  *(uint32_t *)(lVar7 + 0xcc + lVar15 + *(long *)(self + 0x3ed8));
              Vector2__operator_assign(
                  (Vector2 *)(*(long *)(self + 0x90) + 0x40),
                  (Vector2 *)(*(long *)(*(long *)(self + 0x3ed8) + lVar15) + 0x34));
              pTVar2 = Graphics;
              *(uint32_t *)(*(long *)(self + 0x90) + 0x48) =
                  *(uint32_t *)(lVar15 + *(long *)(self + 0x3ed8) + 0xe0 + lVar7 + 0x20);
              *(uint32_t *)(*(long *)(self + 0x90) + 0x4c) =
                  *(uint32_t *)(lVar15 + *(long *)(self + 0x3ed8) + 0xe0 + lVar7 + 0x20);
              *(uint32_t *)(*(long *)(self + 0x90) + 0x20) = local_104;
              *(uint32_t *)(*(long *)(self + 0x90) + 0x58) =
                  *(uint32_t *)(lVar15 + 0x124 + *(long *)(self + 0x3ed8) + lVar7);
              TGraphics__SetRenderState(pTVar2, '\x03', 0);
              TGraphics__SetRenderState(Graphics, '\x01', 7);
              TGraphics__SetRenderState(Graphics, '\a', 0);
              lVar11 = lVar15 + *(long *)(self + 0x3ed8);
              plVar9 = *(long **)(lVar11 + 0x140 + lVar7);
              if ((plVar9 != (long *)0x0) &&
                  ((*(int *)(lVar11 + 0x18) == 3 || (*(int *)(lVar11 + 0x18) == 5)))) {
                (**(code **)(*plVar9 + 0x10))();
                lVar11 = lVar15 + *(long *)(self + 0x3ed8);
              }
              RegisterAudioPosition((FPUVector *)(lVar11 + 8 + (lVar13 * 9 + 9) * 0x20));
              (**(code **)(**(long **)(self + 0x90) + 0x10))();
              *(uint32_t *)(lVar15 + 0x124 + lVar13 * 0x120 + *(long *)(self + 0x3ed8)) =
                  *(uint32_t *)(*(long *)(self + 0x90) + 0x58);
            } else if (iVar3 == 1) {
              *(int *)(*(long *)(self + 0x90) + 0x30) = (int)plVar9[lVar13 * 0x24 + 0x19];
              *(uint32_t *)(*(long *)(self + 0x90) + 0x34) =
                  *(uint32_t *)(lVar7 + 0xcc + lVar15 + *(long *)(self + 0x3ed8));
              Vector2__operator_assign(
                  (Vector2 *)(*(long *)(self + 0x90) + 0x40),
                  (Vector2 *)(*(long *)(*(long *)(self + 0x3ed8) + lVar15) + 0x34));
              iVar3 = *(int *)(lVar15 + *(long *)(self + 0x3ed8) + 0x18);
              if (((iVar3 == 0) || (iVar3 == 1)) || (iVar3 == 2)) {
                *(uint32_t *)(*(long *)(self + 0x90) + 0x48) = 0;
                *(uint32_t *)(*(long *)(self + 0x90) + 0x4c) = 0;
              } else {
                uVar5 = *(uint32_t *)(lVar15 + *(long *)(self + 0x3ed8) + lVar7 + 0x100);
                *(uint32_t *)(*(long *)(self + 0x90) + 0x48) = uVar5;
                *(uint32_t *)(*(long *)(self + 0x90) + 0x4c) = uVar5;
              }
              pTVar2 = Graphics;
              *(uint32_t *)(*(long *)(self + 0x90) + 0x20) = local_fc;
              *(uint32_t *)(*(long *)(self + 0x90) + 0x58) =
                  *(uint32_t *)(lVar15 + 0x124 + *(long *)(self + 0x3ed8) + lVar13 * 0x120);
              TGraphics__SetRenderState(pTVar2, '\x03', 0);
              TGraphics__SetRenderState(Graphics, '\x01', 7);
              TGraphics__SetRenderState(Graphics, '\a', 0);
              lVar7 = lVar15 + *(long *)(self + 0x3ed8);
              plVar9 = *(long **)(lVar7 + 0x140 + lVar13 * 0x120);
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 0x10))();
                lVar7 = lVar15 + *(long *)(self + 0x3ed8);
              }
              RegisterAudioPosition((FPUVector *)(lVar7 + 8 + (lVar13 * 9 + 9) * 0x20));
              (**(code **)(**(long **)(self + 0x90) + 0x10))();
              iVar3 = FlashLibraryInstance__IsPlaying(*(FlashLibraryInstance **)(self + 0x90));
              if (iVar3 == 0) {
                *(uint32_t *)(lVar15 + 0x120 + *(long *)(self + 0x3ed8) + lVar13 * 0x120) = 2;
                lVar11 = lVar15 + *(long *)(self + 0x3ed8);
                lVar7 = *(long *)(lVar11 + 0x140 + lVar13 * 0x120);
                if (lVar7 != 0) {
                  *(uint32_t *)(lVar7 + 0x10) = 0;
                  goto LAB_004e1a47;
                }
              } else {
              LAB_004e1a47:
                lVar11 = lVar15 + *(long *)(self + 0x3ed8);
              }
              *(uint32_t *)(lVar11 + 0x124 + lVar13 * 0x120) =
                  *(uint32_t *)(*(long *)(self + 0x90) + 0x58);
            }
          }
          if (iVar4 == 9)
            goto LAB_004e14f2;
          iVar4 = iVar4 + 1;
          plVar9 = (long *)(*(long *)(self + 0x3ed8) + lVar15);
        } while (true);
      }
      uVar16 = uVar16 + 1;
    } while ((int)uVar16 < (int)(uint)uVar10);
  }
LAB_004e1510:
  RenderDemonSpawn(self, pRVar6);
  if (((SystemCaps._4_4_ != 8) && (SystemCaps._4_4_ != 4)) &&
      (uVar16 = (uint) * (ushort *)(self + 0x4230), *(ushort *)(self + 0x4230) != 0)) {
    uVar14 = 0;
    do {
      puVar8 = (uint64_t *)((uVar14 & 0xffff) * 0x10 + *(long *)(self + 0x4240));
      if (pRVar6 == *(RenderLayer **)(puVar8[1] + 0x18)) {
        (**(code **)(*(long *)*puVar8 + 0x10))();
        uVar16 = (uint) * (ushort *)(self + 0x4230);
      }
      uVar12 = (int)uVar14 + 1;
      uVar14 = (ulong)uVar12;
    } while ((int)uVar12 < (int)uVar16);
  }
  if (arg2 == 0) {
    if (*(int *)(SuperMeatBoy + 0x2c) != 1) {
      local_f8 = 0;
      local_f4 = 0;
      local_f0 = 0;
      local_ec = 0;
      local_c8 = 0xbf800000;
      local_c4 = 0xbf800000;
      Camera__ScreenToWorld(*(Camera **)(SuperMeatBoy + 0x38), (FPUVector *)&local_f8,
                            (Vector2 *)&local_c8, 0.0);
      TileLevel__GetGridIndex__0058dd90(*(TileLevel **)(SuperMeatBoy + 0x40), (Vector2 *)&local_f8,
                                        local_d8, (int *)&local_4c, (int *)local_40);
      local_b8 = 0x3f800000;
      local_b4 = 0x3f800000;
      Camera__ScreenToWorld(*(Camera **)(SuperMeatBoy + 0x38), (FPUVector *)&local_f8,
                            (Vector2 *)&local_b8, 0.0);
      TileLevel__GetGridIndex__0058dd90(*(TileLevel **)(SuperMeatBoy + 0x40), (Vector2 *)&local_f8,
                                        local_d8, (int *)local_48, (int *)local_44);
      if (*(short *)(self + 0x40d0) != 0) {
        uVar14 = 0;
        do {
          lVar15 = (uVar14 & 0xffff) * 0x10;
          pGVar1 = *(GRIDBLOCK **)(*(long *)(self + 0x40e0) + lVar15);
          TileLevel__GetGridCoordsFromBlock(*(TileLevel **)(SuperMeatBoy + 0x40), pGVar1, local_3c,
                                            local_58);
          if (((((int)(local_4c & 0xffff) <= local_3c[0]) &&
                (local_3c[0] <= (int)(uint)local_48[0])) &&
               ((int)(uint)local_44[0] <= local_58[0])) &&
              (local_58[0] <= (int)(uint)local_40[0])) {
            TileLevel__GetGridPos(*(TileLevel **)(SuperMeatBoy + 0x40), local_3c[0], local_58[0],
                                  (Vector2 *)&local_a8);
            *(uint32_t *)(*(long *)(self + 0x90) + 0x30) = local_a8;
            *(uint32_t *)(*(long *)(self + 0x90) + 0x34) = local_a4;
            *(uint32_t *)(*(long *)(self + 0x90) + 0x40) = 0x3f800000;
            *(uint32_t *)(*(long *)(self + 0x90) + 0x44) = 0x3f800000;
            uVar16 = ((byte)pGVar1[1] >> 4 & 3) - 1;
            uVar5 = 0;
            if (uVar16 < 3) {
              uVar5 = *(uint32_t *)(CSWTCH_713 + (ulong)uVar16 * 4);
            }
            *(uint32_t *)(*(long *)(self + 0x90) + 0x48) = uVar5;
            *(uint32_t *)(*(long *)(self + 0x90) + 0x4c) = uVar5;
            *(uint32_t *)(*(long *)(self + 0x90) + 0x20) = *(uint32_t *)(self + 0x4280);
            *(uint32_t *)(*(long *)(self + 0x90) + 0x58) =
                *(uint32_t *)(*(long *)(self + 0x40e0) + 8 + lVar15);
            (**(code **)(**(long **)(self + 0x90) + 0x10))();
          }
          uVar16 = (int)uVar14 + 1;
          uVar14 = (ulong)uVar16;
          *(float *)(lVar15 + *(long *)(self + 0x40e0) + 8) =
              *(float *)(lVar15 + *(long *)(self + 0x40e0) + 8) + fOneFrameTimeStep;
        } while ((int)uVar16 < (int)(uint) * (ushort *)(self + 0x40d0));
      }
    }
    CriticalSection__Lock((CriticalSection *)(self + 0x2a58), 1);
    if (*(short *)(self + 0x3e78) != 0) {
      uVar16 = 0;
      do {
        while (true) {
          lVar15 = (ulong)(uVar16 & 0xffff) * 0x30;
          puVar17 = (uint *)(*(long *)(self + 0x3e88) + lVar15);
          uVar12 = *puVar17;
          if (uVar12 < 2) {
            TGraphics__SetRenderState(Graphics, '\x03', 0);
            TGraphics__SetRenderState(Graphics, '\x01', 7);
            TGraphics__SetRenderState(Graphics, '\a', 0);
            TGraphics__ResetTexCoordGen(Graphics);
            TGraphics__ResetPixelStages(Graphics);
            TGraphics__AddPixelStage(Graphics, 5, 1, 0, 0, 0, 1, 0xffffffff);
            *(uint32_t *)(self + 0x20) = 0xffffffff;
            lVar7 = *(long *)(self + 0x3e88) + lVar15;
            local_98 = *(uint *)(lVar7 + 0x10);
            local_94 = *(uint32_t *)(lVar7 + 0x14);
            (**(code **)(*(long *)self + 0x20))(self, *(uint64_t *)(lVar7 + 8), &local_98);
          } else if (uVar12 == 2) {
            lVar7 = *(long *)(self + 0x90);
            local_88 = 0x3f800000;
            local_84 = 0x3f800000;
            *(uint *)(lVar7 + 0x30) = puVar17[4];
            *(uint *)(lVar7 + 0x34) = puVar17[5];
            *(uint *)(lVar7 + 0x38) = puVar17[6];
            *(uint *)(lVar7 + 0x3c) = puVar17[7];
            Vector2__operator_assign((Vector2 *)(*(long *)(self + 0x90) + 0x40),
                                     (Vector2 *)&local_88);
            *(uint32_t *)(*(long *)(self + 0x90) + 0x48) = 0;
            *(uint32_t *)(*(long *)(self + 0x90) + 0x4c) = 0;
            iVar4 = *(int *)(*(long *)(self + 0x3e88) + 0x24 + lVar15);
            if (iVar4 == *(int *)(pPalProps + 4)) {
              uVar5 = *(uint32_t *)(pPalProps + 8);
            } else if (iVar4 == *(int *)(pPalProps + 0xc)) {
              uVar5 = *(uint32_t *)(pPalProps + 0x10);
            } else if (iVar4 == *(int *)(pPalProps + 0x28)) {
              uVar5 = *(uint32_t *)(pPalProps + 0x2c);
            } else {
              uVar5 = *(uint32_t *)(pPalProps + 0x54);
            }
            *(uint32_t *)(*(long *)(self + 0x90) + 0x20) = uVar5;
            pTVar2 = Graphics;
            *(uint32_t *)(*(long *)(self + 0x90) + 0x58) =
                *(uint32_t *)(*(long *)(self + 0x3e88) + 0x20 + lVar15);
            TGraphics__SetRenderState(pTVar2, '\x03', 0);
            TGraphics__SetRenderState(Graphics, '\x01', 7);
            TGraphics__SetRenderState(Graphics, '\a', 0);
            RegisterAudioPosition((FPUVector *)(*(long *)(self + 0x3e88) + lVar15 + 0x10));
            (**(code **)(**(long **)(self + 0x90) + 0x10))();
            *(uint32_t *)(*(long *)(self + 0x3e88) + 0x20 + lVar15) =
                *(uint32_t *)(*(long *)(self + 0x90) + 0x58);
            iVar4 = FlashLibraryInstance__IsPlaying(*(FlashLibraryInstance **)(self + 0x90));
            if (iVar4 == 0) {
              *puVar17 = 4;
            }
          } else if (uVar12 == 3) {
            lVar7 = *(long *)(self + 0x90);
            local_78 = 0x3f800000;
            local_74 = 0x3f800000;
            *(uint *)(lVar7 + 0x30) = puVar17[4];
            *(uint *)(lVar7 + 0x34) = puVar17[5];
            *(uint *)(lVar7 + 0x38) = puVar17[6];
            *(uint *)(lVar7 + 0x3c) = puVar17[7];
            Vector2__operator_assign((Vector2 *)(*(long *)(self + 0x90) + 0x40),
                                     (Vector2 *)&local_78);
            pTVar2 = Graphics;
            *(uint32_t *)(*(long *)(self + 0x90) + 0x48) = 0;
            *(uint32_t *)(*(long *)(self + 0x90) + 0x4c) = 0;
            *(uint32_t *)(*(long *)(self + 0x90) + 0x20) = *(uint32_t *)(self + 0x428c);
            *(uint32_t *)(*(long *)(self + 0x90) + 0x58) =
                *(uint32_t *)(*(long *)(self + 0x3e88) + 0x20 + lVar15);
            TGraphics__SetRenderState(pTVar2, '\x03', 0);
            TGraphics__SetRenderState(Graphics, '\x01', 7);
            TGraphics__SetRenderState(Graphics, '\a', 0);
            RegisterAudioPosition((FPUVector *)(*(long *)(self + 0x3e88) + lVar15 + 0x10));
            (**(code **)(**(long **)(self + 0x90) + 0x10))();
            *(uint32_t *)(*(long *)(self + 0x3e88) + 0x20 + lVar15) =
                *(uint32_t *)(*(long *)(self + 0x90) + 0x58);
            iVar4 = FlashLibraryInstance__IsPlaying(*(FlashLibraryInstance **)(self + 0x90));
            if (iVar4 == 0) {
              *puVar17 = 0;
              **(uint8_t **)(*(long *)(self + 0x3e88) + 8 + lVar15) =
                  (char)*(uint32_t *)(self + 0x4284);
              lVar7 = *(long *)(*(long *)(self + 0x3e88) + lVar15 + 8);
              *(ushort *)(lVar7 + 2) =
                  *(ushort *)(lVar7 + 2) & 0x3f |
                  (ushort)(*(int *)(*(long *)(self + 0x3e88) + lVar15 + 0x28) << 6);
            }
          }
          if (*(int *)(self + 0x1a78) != 1)
            break;
          uVar16 = uVar16 + 1;
          TGraphics__SetRenderState(Graphics, '\x03', 0);
          TGraphics__SetRenderState(Graphics, '\x01', 7);
          TGraphics__SetRenderState(Graphics, '\a', 0);
          TGraphics__ResetTexCoordGen(Graphics);
          TGraphics__ResetPixelStages(Graphics);
          local_e8 = 0x3f800000;
          local_e4 = 0x3f800000;
          local_e0 = 0x3f800000;
          local_dc = 0x3f000000;
          TGraphics__SetPixelColorConstant(Graphics, 0, &local_e8);
          TGraphics__AddPixelStage(Graphics, 5, 1, 1, 0, 3, 3, 0xffffffff);
          lVar15 = lVar15 + *(long *)(self + 0x3e88);
          *(uint32_t *)(self + 0x20) = 0xffffffff;
          local_98 = *(uint *)(lVar15 + 0x24) & 0xff;
          local_68 = *(uint32_t *)(lVar15 + 0x10);
          local_64 = *(uint32_t *)(lVar15 + 0x14);
          (**(code **)(*(long *)self + 0x20))(self, &local_98, &local_68);
          if ((int)(uint) * (ushort *)(self + 0x3e78) <= (int)uVar16)
            goto LAB_004e1890;
        }
        uVar16 = uVar16 + 1;
      } while ((int)uVar16 < (int)(uint) * (ushort *)(self + 0x3e78));
    }
  LAB_004e1890:
    CriticalSection__Unlock((CriticalSection *)(self + 0x2a58));
  }
  return;
LAB_004e14f2:
  uVar10 = *(ushort *)(self + 0x3ec8);
  uVar16 = uVar16 + 1;
  if ((int)(uint)uVar10 <= (int)uVar16)
    goto LAB_004e1510;
  goto LAB_004e12e0;
}

/* ======================================================================
 * SMBPalette__CreateSMBLaserStream  (Ghidra `CreateSMBLaserStream` @ 004e2050)
 * Signature: uint8_t __thiscall CreateSMBLaserStream(SMBPalette * self)
 * Class: SMBPalette
 * Calls: `BaseResource__Release`, `VertexStream__VertexStream__005a6980`, `free`, `malloc`, `memcpy`
 * Called by: (none)
 */
/* SMBPalette__CreateSMBLaserStream() */

void __thiscall SMBPalette__CreateSMBLaserStream(SMBPalette *self)

{
  long lVar1;
  void *pvVar2;
  ushort uVar3;
  short sVar4;
  void *pvVar5;
  VertexStream *pVVar6;
  void *pvVar7;
  ulong uVar8;
  ulong uVar9;
  ushort *puVar10;
  uint64_t *puVar11;
  ushort uVar12;
  uint64_t local_68;
  uint16_t local_60;
  uint32_t local_5c;
  uint64_t local_58;
  uint32_t local_50;
  uint32_t local_4c;
  uint32_t local_48;
  BaseResource *local_40[2];

  if (*(ushort *)(self + 0x4008) <= *(ushort *)(self + 0x4058)) {
    return;
  }
  local_5c = 5;
  local_58 = 0;
  local_50 = 0;
  local_4c = 1;
  local_48 = 0;
  local_60 = 0xc;
  local_68 = 0x48;
  local_40[0] = (BaseResource *)VertexBuffer__Create((tagVertexBufferCreation *)&local_68);
  if (*(int *)(self + 0x4078) == -0x5eef3582) {
    uVar3 = *(ushort *)(self + 0x4058);
    if (*(ushort *)(self + 0x405a) <= uVar3) {
      uVar3 = *(ushort *)(self + 0x405a) + *(short *)(self + 0x4064);
      uVar9 = (ulong)(byte)self[0x405c];
      pvVar5 = (void *)0x0;
      pvVar2 = *(void **)(self + 0x4068);
      *(ushort *)(self + 0x405a) = uVar3;
      uVar8 = (ulong)uVar3 * 8;
      pvVar7 = malloc(uVar9 + 0x10 + uVar8);
      if (pvVar7 != (void *)0x0) {
        pvVar5 = (void *)((long)pvVar7 + 0x10U + (uVar9 - ((long)pvVar7 + 0x10U) % uVar9) % uVar9);
        *(ulong *)((long)pvVar5 + -0x10) = uVar8;
        *(void **)((long)pvVar5 + -8) = pvVar7;
        if (pvVar2 != (void *)0x0) {
          uVar9 = *(ulong *)((long)pvVar2 + -0x10);
          if (uVar8 < uVar9 || uVar8 - uVar9 == 0) {
            uVar9 = uVar8;
          }
          memcpy(pvVar5, pvVar2, uVar9);
          free(*(void **)((long)pvVar2 + -8));
        }
      }
      pvVar2 = *(void **)(self + 0x4070);
      *(void **)(self + 0x4068) = pvVar5;
      if (pvVar2 != (void *)0x0) {
        uVar12 = *(ushort *)(self + 0x405a);
        uVar9 = (ulong)(byte)self[0x405c];
        pvVar5 = (void *)0x0;
        uVar8 = (ulong)uVar12 * 2;
        pvVar7 = malloc(uVar9 + 0x10 + uVar8);
        if (pvVar7 != (void *)0x0) {
          pvVar5 =
              (void *)((long)pvVar7 + 0x10U + (uVar9 - ((long)pvVar7 + 0x10U) % uVar9) % uVar9);
          *(void **)((long)pvVar5 + -8) = pvVar7;
          *(ulong *)((long)pvVar5 + -0x10) = uVar8;
          uVar9 = *(ulong *)((long)pvVar2 + -0x10);
          if (uVar8 <= *(ulong *)((long)pvVar2 + -0x10)) {
            uVar9 = uVar8;
          }
          memcpy(pvVar5, pvVar2, uVar9);
          free(*(void **)((long)pvVar2 + -8));
          uVar12 = *(ushort *)(self + 0x405a);
        }
        uVar3 = *(ushort *)(self + 0x4058);
        *(void **)(self + 0x4070) = pvVar5;
        if (uVar12 <= uVar3)
          goto LAB_004e21a7;
        while (true) {
          uVar8 = (ulong)uVar3;
          uVar3 = uVar3 + 1;
          *(uint16_t *)((long)pvVar5 + uVar8 * 2) = 0xffff;
          if (uVar12 <= uVar3)
            break;
          pvVar5 = *(void **)(self + 0x4070);
        }
      }
      uVar3 = *(ushort *)(self + 0x4058);
    }
  } else {
    uVar8 = (ulong)(byte)self[0x405c];
    *(uint32_t *)(self + 0x4060) = 0;
    pvVar5 = malloc(uVar8 + 0x38);
    puVar11 = (uint64_t *)0x0;
    if (pvVar5 != (void *)0x0) {
      puVar11 =
          (uint64_t *)((long)pvVar5 + 0x10U + (uVar8 - ((long)pvVar5 + 0x10U) % uVar8) % uVar8);
      puVar11[-2] = 0x28;
      puVar11[-1] = pvVar5;
    }
    *(uint64_t **)(self + 0x4068) = puVar11;
    uVar3 = 0;
    *puVar11 = 0;
    puVar11[1] = 0;
    puVar11[2] = 0;
    puVar11[3] = 0;
    puVar11[4] = 0;
    *(uint16_t *)(self + 0x4058) = 0;
    *(uint16_t *)(self + 0x405a) = 5;
    *(uint32_t *)(self + 0x4078) = 0xa110ca7e;
    *(uint16_t *)(self + 0x4064) = 5;
  }
LAB_004e21a7:
  if ((*(int *)(self + 0x4060) == 1) && (*(short *)(self + 0x405a) != 0)) {
    puVar10 = *(ushort **)(self + 0x4070);
    sVar4 = 1;
    uVar12 = *puVar10;
    while (uVar12 != 0xffff) {
      puVar10 = puVar10 + 1;
      if (sVar4 == *(short *)(self + 0x405a))
        goto LAB_004e21b4;
      sVar4 = sVar4 + 1;
      uVar12 = *puVar10;
    }
    *puVar10 = uVar3;
    uVar3 = *(ushort *)(self + 0x4058);
  }
LAB_004e21b4:
  *(ushort *)(self + 0x4058) = uVar3 + 1;
  *(uint64_t *)((ulong)(ushort)(uVar3 + 1) * 8 + -8 + *(long *)(self + 0x4068)) = 0;
  uVar3 = *(ushort *)(self + 0x4058);
  lVar1 = *(long *)(self + 0x4068);
  pVVar6 = BaseResource__operator_new(0xa8, 1);
  /* try { // try from 004e2220 to 004e2224 has its CatchHandler @ 004e2408 */
  VertexStream__VertexStream__005a6980(pVVar6, 1, 4, 6, 2, local_40, CGR__pPos2ColorDecl);
  *(VertexStream **)(lVar1 + -8 + (ulong)uVar3 * 8) = pVVar6;
  BaseResource__Release(local_40[0], 0);
  return;
}

/* ======================================================================
 * SMBPalette__PortalCollision  (Ghidra `PortalCollision` @ 004e25a0)
 * Signature: uint8_t __thiscall PortalCollision(SMBPalette * self, SceneObject2D * arg1, TileLevelSetPiece * arg2)
 * Class: SMBPalette
 * Calls: `Vector2__operator_assign`
 * Called by: (none)
 */
/* SMBPalette__PortalCollision(SceneObject2D*, TileLevelSetPiece*) */

uint64_t __thiscall SMBPalette__PortalCollision(SMBPalette *self, SceneObject2D *arg1,
                                                TileLevelSetPiece *arg2)

{
  long *plVar1;
  TileLevelSetPiece *pTVar2;
  long lVar3;
  uint uVar4;
  TileLevelSetPiece *pTVar5;
  long *plVar6;
  uint32_t local_28;
  uint32_t local_24;

  lVar3 = pPalProps;
  if (*(ushort *)(self + 0x4170) == 0) {
    return 0;
  }
  plVar1 = *(long **)(self + 0x4180);
  pTVar5 = (TileLevelSetPiece *)plVar1[1];
  plVar6 = plVar1;
  if (pTVar5 != arg2) {
    uVar4 = 0;
    pTVar2 = (TileLevelSetPiece *)*plVar1;
    while (pTVar2 != arg2) {
      uVar4 = uVar4 + 1;
      if ((int)(uint) * (ushort *)(self + 0x4170) <= (int)uVar4) {
        return 0;
      }
      plVar6 = plVar1 + (ulong)(uVar4 & 0xffff) * 3;
      pTVar5 = (TileLevelSetPiece *)plVar6[1];
      if (pTVar5 == arg2)
        break;
      pTVar2 = (TileLevelSetPiece *)*plVar6;
    }
  }
  if ((TileLevelSetPiece *)*plVar6 == arg2) {
    arg2[0x20] = SUB41(*(uint32_t *)(pPalProps + 0x154), 0);
    *(char *)(plVar6[1] + 0x20) = (char)*(uint32_t *)(lVar3 + 0x158);
    *(uint32_t *)(plVar6 + 2) = 1;
    *(uint32_t *)((long)plVar6 + 0x14) = 2;
    local_28 = *(uint32_t *)(plVar6[1] + 0x24);
    local_24 = *(uint32_t *)(plVar6[1] + 0x28);
  } else {
    pTVar5[0x20] = SUB41(*(uint32_t *)(pPalProps + 0x154), 0);
    *(char *)(*plVar6 + 0x20) = (char)*(uint32_t *)(lVar3 + 0x158);
    *(uint32_t *)(plVar6 + 2) = 2;
    *(uint32_t *)((long)plVar6 + 0x14) = 1;
    local_28 = *(uint32_t *)(*plVar6 + 0x24);
    local_24 = *(uint32_t *)(*plVar6 + 0x28);
  }
  *(uint32_t *)(arg1 + 0x9c) = 1;
  Vector2__operator_assign((Vector2 *)(arg1 + 0xa0), (Vector2 *)&local_28);
  Vector2__operator_assign((Vector2 *)(arg1 + 0xa8), (Vector2 *)&local_28);
  *(uint32_t *)(*plVar6 + 0x40) = 0;
  *(uint32_t *)(plVar6[1] + 0x40) = 0;
  *(uint32_t *)(*plVar6 + 0x48) = 0;
  *(uint32_t *)(plVar6[1] + 0x48) = 0;
  return 1;
}

/* ======================================================================
 * SMBPalette__InitializeObstacleArrays  (Ghidra `InitializeObstacleArrays` @ 004e2950)
 * Signature: uint8_t __thiscall InitializeObstacleArrays(SMBPalette * self)
 * Class: SMBPalette
 * Calls: `free`, `malloc`, `memcpy`, `memset`
 * Called by: (none)
 */
/* SMBPalette__InitializeObstacleArrays() */

void __thiscall SMBPalette__InitializeObstacleArrays(SMBPalette *self)

{
  ushort uVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  ulong uVar5;
  size_t sVar6;
  ulong uVar7;
  uint64_t *puVar8;
  ushort uVar9;
  bool bVar10;
  byte bVar11;

  bVar11 = 0;
  *(uint32_t *)(self + 16000) = 0;
  if (*(int *)(self + 0x3e98) == -0x5eef3582) {
    if (*(ushort *)(self + 0x3e7a) < 0x14) {
      uVar7 = (ulong)(byte)self[0x3e7c];
      *(uint16_t *)(self + 0x3e7a) = 0x14;
      pvVar2 = *(void **)(self + 0x3e88);
      pvVar3 = malloc(uVar7 + 0x3d0);
      if (pvVar3 == (void *)0x0) {
        *(uint64_t *)(self + 0x3e88) = 0;
      } else {
        pvVar4 = (void *)((long)pvVar3 + 0x10U + (uVar7 - ((long)pvVar3 + 0x10U) % uVar7) % uVar7);
        *(uint64_t *)((long)pvVar4 + -0x10) = 0x3c0;
        *(void **)((long)pvVar4 + -8) = pvVar3;
        if (pvVar2 != (void *)0x0) {
          sVar6 = 0x3c0;
          if (*(ulong *)((long)pvVar2 + -0x10) < 0x3c1) {
            sVar6 = *(ulong *)((long)pvVar2 + -0x10);
          }
          memcpy(pvVar4, pvVar2, sVar6);
          free(*(void **)((long)pvVar2 + -8));
        }
        *(void **)(self + 0x3e88) = pvVar4;
        if (*(int *)(self + 16000) == 1) {
          uVar9 = *(ushort *)(self + 0x3e7a);
          uVar5 = (ulong)(byte)self[0x3e7c];
          pvVar2 = (void *)0x0;
          pvVar3 = *(void **)(self + 0x3e90);
          uVar7 = (ulong)uVar9 * 2;
          pvVar4 = malloc(uVar5 + 0x10 + uVar7);
          if (pvVar4 != (void *)0x0) {
            pvVar2 =
                (void *)((long)pvVar4 + 0x10U + (uVar5 - ((long)pvVar4 + 0x10U) % uVar5) % uVar5);
            *(ulong *)((long)pvVar2 + -0x10) = uVar7;
            *(void **)((long)pvVar2 + -8) = pvVar4;
            if (pvVar3 != (void *)0x0) {
              uVar5 = *(ulong *)((long)pvVar3 + -0x10);
              if (uVar7 <= *(ulong *)((long)pvVar3 + -0x10)) {
                uVar5 = uVar7;
              }
              memcpy(pvVar2, pvVar3, uVar5);
              free(*(void **)((long)pvVar3 + -8));
            }
            uVar9 = *(ushort *)(self + 0x3e7a);
          }
          uVar1 = *(ushort *)(self + 0x3e78);
          *(void **)(self + 0x3e90) = pvVar2;
          if (uVar1 < uVar9) {
            while (true) {
              uVar7 = (ulong)uVar1;
              uVar1 = uVar1 + 1;
              *(uint16_t *)((long)pvVar2 + uVar7 * 2) = 0xffff;
              if (uVar9 <= uVar1)
                break;
              pvVar2 = *(void **)(self + 0x3e90);
            }
          }
        }
      }
    }
  } else {
    uVar7 = (ulong)(byte)self[0x3e7c];
    pvVar2 = malloc(uVar7 + 0x3d0);
    puVar8 = (uint64_t *)0x0;
    if (pvVar2 != (void *)0x0) {
      puVar8 =
          (uint64_t *)((long)pvVar2 + 0x10U + (uVar7 - ((long)pvVar2 + 0x10U) % uVar7) % uVar7);
      puVar8[-2] = 0x3c0;
      puVar8[-1] = pvVar2;
    }
    bVar10 = ((ulong)puVar8 & 1) != 0;
    *(uint64_t **)(self + 0x3e88) = puVar8;
    uVar7 = 0x3c0;
    if (bVar10) {
      *(uint8_t *)puVar8 = 0;
      uVar7 = 0x3bf;
      puVar8 = (uint64_t *)((long)puVar8 + 1);
    }
    if (((ulong)puVar8 & 2) != 0) {
      *(uint16_t *)puVar8 = 0;
      uVar7 = (ulong)((int)uVar7 - 2);
      puVar8 = (uint64_t *)((long)puVar8 + 2);
    }
    if (((ulong)puVar8 & 4) != 0) {
      *(uint32_t *)puVar8 = 0;
      uVar7 = (ulong)((int)uVar7 - 4);
      puVar8 = (uint64_t *)((long)puVar8 + 4);
    }
    for (uVar5 = uVar7 >> 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar8 = 0;
      puVar8 = puVar8 + (ulong)bVar11 * -2 + 1;
    }
    if ((uVar7 & 4) != 0) {
      *(uint32_t *)puVar8 = 0;
      puVar8 = (uint64_t *)((long)puVar8 + 4);
    }
    if ((uVar7 & 2) != 0) {
      *(uint16_t *)puVar8 = 0;
      puVar8 = (uint64_t *)((long)puVar8 + 2);
    }
    if (bVar10) {
      *(uint8_t *)puVar8 = 0;
    }
    *(uint16_t *)(self + 0x3e78) = 0;
    *(uint16_t *)(self + 0x3e7a) = 0x14;
    *(uint32_t *)(self + 0x3e98) = 0xa110ca7e;
    *(uint16_t *)(self + 0x3e84) = 0x14;
  }
  *(uint32_t *)(self + 0x3ed0) = 0;
  if (*(int *)(self + 0x3ee8) == -0x5eef3582) {
    if (*(ushort *)(self + 0x3eca) < 0x14) {
      uVar7 = (ulong)(byte)self[0x3ecc];
      *(uint16_t *)(self + 0x3eca) = 0x14;
      pvVar2 = *(void **)(self + 0x3ed8);
      pvVar3 = malloc(uVar7 + 0xe430);
      if (pvVar3 == (void *)0x0) {
        *(uint64_t *)(self + 0x3ed8) = 0;
      } else {
        pvVar4 = (void *)((long)pvVar3 + 0x10U + (uVar7 - ((long)pvVar3 + 0x10U) % uVar7) % uVar7);
        *(uint64_t *)((long)pvVar4 + -0x10) = 0xe420;
        *(void **)((long)pvVar4 + -8) = pvVar3;
        if (pvVar2 != (void *)0x0) {
          sVar6 = 0xe420;
          if (*(ulong *)((long)pvVar2 + -0x10) < 0xe421) {
            sVar6 = *(ulong *)((long)pvVar2 + -0x10);
          }
          memcpy(pvVar4, pvVar2, sVar6);
          free(*(void **)((long)pvVar2 + -8));
        }
        *(void **)(self + 0x3ed8) = pvVar4;
        if (*(int *)(self + 0x3ed0) == 1) {
          uVar9 = *(ushort *)(self + 0x3eca);
          uVar5 = (ulong)(byte)self[0x3ecc];
          pvVar2 = (void *)0x0;
          pvVar3 = *(void **)(self + 0x3ee0);
          uVar7 = (ulong)uVar9 * 2;
          pvVar4 = malloc(uVar5 + 0x10 + uVar7);
          if (pvVar4 != (void *)0x0) {
            pvVar2 =
                (void *)((long)pvVar4 + 0x10U + (uVar5 - ((long)pvVar4 + 0x10U) % uVar5) % uVar5);
            *(ulong *)((long)pvVar2 + -0x10) = uVar7;
            *(void **)((long)pvVar2 + -8) = pvVar4;
            if (pvVar3 != (void *)0x0) {
              uVar5 = *(ulong *)((long)pvVar3 + -0x10);
              if (uVar7 <= *(ulong *)((long)pvVar3 + -0x10)) {
                uVar5 = uVar7;
              }
              memcpy(pvVar2, pvVar3, uVar5);
              free(*(void **)((long)pvVar3 + -8));
            }
            uVar9 = *(ushort *)(self + 0x3eca);
          }
          uVar1 = *(ushort *)(self + 0x3ec8);
          *(void **)(self + 0x3ee0) = pvVar2;
          if (uVar1 < uVar9) {
            while (true) {
              uVar7 = (ulong)uVar1;
              uVar1 = uVar1 + 1;
              *(uint16_t *)((long)pvVar2 + uVar7 * 2) = 0xffff;
              if (uVar9 <= uVar1)
                break;
              pvVar2 = *(void **)(self + 0x3ee0);
            }
          }
        }
      }
    }
  } else {
    uVar7 = (ulong)(byte)self[0x3ecc];
    pvVar3 = malloc(uVar7 + 0xe430);
    pvVar2 = (void *)0x0;
    if (pvVar3 != (void *)0x0) {
      pvVar2 = (void *)((long)pvVar3 + 0x10U + (uVar7 - ((long)pvVar3 + 0x10U) % uVar7) % uVar7);
      *(uint64_t *)((long)pvVar2 + -0x10) = 0xe420;
      *(void **)((long)pvVar2 + -8) = pvVar3;
    }
    *(void **)(self + 0x3ed8) = pvVar2;
    memset(pvVar2, 0, 0xe420);
    *(uint16_t *)(self + 0x3ec8) = 0;
    *(uint16_t *)(self + 0x3eca) = 0x14;
    *(uint32_t *)(self + 0x3ee8) = 0xa110ca7e;
    *(uint16_t *)(self + 0x3ed4) = 5;
  }
  *(uint32_t *)(self + 0x4128) = 0;
  if (*(int *)(self + 0x4140) == -0x5eef3582) {
    if (*(ushort *)(self + 0x4122) < 5) {
      uVar7 = (ulong)(byte)self[0x4124];
      *(uint16_t *)(self + 0x4122) = 5;
      pvVar2 = *(void **)(self + 0x4130);
      pvVar3 = malloc(uVar7 + 0x88);
      if (pvVar3 == (void *)0x0) {
        *(uint64_t *)(self + 0x4130) = 0;
      } else {
        pvVar4 = (void *)((long)pvVar3 + 0x10U + (uVar7 - ((long)pvVar3 + 0x10U) % uVar7) % uVar7);
        *(uint64_t *)((long)pvVar4 + -0x10) = 0x78;
        *(void **)((long)pvVar4 + -8) = pvVar3;
        if (pvVar2 != (void *)0x0) {
          sVar6 = 0x78;
          if (*(ulong *)((long)pvVar2 + -0x10) < 0x79) {
            sVar6 = *(ulong *)((long)pvVar2 + -0x10);
          }
          memcpy(pvVar4, pvVar2, sVar6);
          free(*(void **)((long)pvVar2 + -8));
        }
        *(void **)(self + 0x4130) = pvVar4;
        if (*(int *)(self + 0x4128) == 1) {
          uVar9 = *(ushort *)(self + 0x4122);
          uVar5 = (ulong)(byte)self[0x4124];
          pvVar2 = (void *)0x0;
          pvVar3 = *(void **)(self + 0x4138);
          uVar7 = (ulong)uVar9 * 2;
          pvVar4 = malloc(uVar5 + 0x10 + uVar7);
          if (pvVar4 != (void *)0x0) {
            pvVar2 =
                (void *)((long)pvVar4 + 0x10U + (uVar5 - ((long)pvVar4 + 0x10U) % uVar5) % uVar5);
            *(ulong *)((long)pvVar2 + -0x10) = uVar7;
            *(void **)((long)pvVar2 + -8) = pvVar4;
            if (pvVar3 != (void *)0x0) {
              uVar5 = *(ulong *)((long)pvVar3 + -0x10);
              if (uVar7 <= *(ulong *)((long)pvVar3 + -0x10)) {
                uVar5 = uVar7;
              }
              memcpy(pvVar2, pvVar3, uVar5);
              free(*(void **)((long)pvVar3 + -8));
            }
            uVar9 = *(ushort *)(self + 0x4122);
          }
          uVar1 = *(ushort *)(self + 0x4120);
          *(void **)(self + 0x4138) = pvVar2;
          if (uVar1 < uVar9) {
            while (true) {
              uVar7 = (ulong)uVar1;
              uVar1 = uVar1 + 1;
              *(uint16_t *)((long)pvVar2 + uVar7 * 2) = 0xffff;
              if (uVar9 <= uVar1)
                break;
              pvVar2 = *(void **)(self + 0x4138);
            }
          }
        }
      }
    }
  } else {
    uVar7 = (ulong)(byte)self[0x4124];
    pvVar2 = malloc(uVar7 + 0x88);
    puVar8 = (uint64_t *)0x0;
    if (pvVar2 != (void *)0x0) {
      puVar8 =
          (uint64_t *)((long)pvVar2 + 0x10U + (uVar7 - ((long)pvVar2 + 0x10U) % uVar7) % uVar7);
      puVar8[-2] = 0x78;
      puVar8[-1] = pvVar2;
    }
    bVar10 = ((ulong)puVar8 & 1) != 0;
    *(uint64_t **)(self + 0x4130) = puVar8;
    uVar7 = 0x78;
    if (bVar10) {
      *(uint8_t *)puVar8 = 0;
      uVar7 = 0x77;
      puVar8 = (uint64_t *)((long)puVar8 + 1);
    }
    if (((ulong)puVar8 & 2) != 0) {
      *(uint16_t *)puVar8 = 0;
      uVar7 = (ulong)((int)uVar7 - 2);
      puVar8 = (uint64_t *)((long)puVar8 + 2);
    }
    if (((ulong)puVar8 & 4) != 0) {
      *(uint32_t *)puVar8 = 0;
      uVar7 = (ulong)((int)uVar7 - 4);
      puVar8 = (uint64_t *)((long)puVar8 + 4);
    }
    for (uVar5 = uVar7 >> 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar8 = 0;
      puVar8 = puVar8 + (ulong)bVar11 * -2 + 1;
    }
    if ((uVar7 & 4) != 0) {
      *(uint32_t *)puVar8 = 0;
      puVar8 = (uint64_t *)((long)puVar8 + 4);
    }
    if ((uVar7 & 2) != 0) {
      *(uint16_t *)puVar8 = 0;
      puVar8 = (uint64_t *)((long)puVar8 + 2);
    }
    if (bVar10) {
      *(uint8_t *)puVar8 = 0;
    }
    *(uint16_t *)(self + 0x4120) = 0;
    *(uint16_t *)(self + 0x4122) = 5;
    *(uint32_t *)(self + 0x4140) = 0xa110ca7e;
    *(uint16_t *)(self + 0x412c) = 5;
  }
  *(uint32_t *)(self + 0x40d8) = 0;
  if (*(int *)(self + 0x40f0) == -0x5eef3582) {
    if (*(ushort *)(self + 0x40d2) < 10) {
      uVar7 = (ulong)(byte)self[0x40d4];
      *(uint16_t *)(self + 0x40d2) = 10;
      pvVar2 = *(void **)(self + 0x40e0);
      pvVar3 = malloc(uVar7 + 0xb0);
      if (pvVar3 == (void *)0x0) {
        *(uint64_t *)(self + 0x40e0) = 0;
      } else {
        pvVar4 = (void *)((long)pvVar3 + 0x10U + (uVar7 - ((long)pvVar3 + 0x10U) % uVar7) % uVar7);
        *(uint64_t *)((long)pvVar4 + -0x10) = 0xa0;
        *(void **)((long)pvVar4 + -8) = pvVar3;
        if (pvVar2 != (void *)0x0) {
          sVar6 = 0xa0;
          if (*(ulong *)((long)pvVar2 + -0x10) < 0xa1) {
            sVar6 = *(ulong *)((long)pvVar2 + -0x10);
          }
          memcpy(pvVar4, pvVar2, sVar6);
          free(*(void **)((long)pvVar2 + -8));
        }
        *(void **)(self + 0x40e0) = pvVar4;
        if (*(int *)(self + 0x40d8) == 1) {
          uVar9 = *(ushort *)(self + 0x40d2);
          uVar5 = (ulong)(byte)self[0x40d4];
          pvVar2 = (void *)0x0;
          pvVar3 = *(void **)(self + 0x40e8);
          uVar7 = (ulong)uVar9 * 2;
          pvVar4 = malloc(uVar5 + 0x10 + uVar7);
          if (pvVar4 != (void *)0x0) {
            pvVar2 =
                (void *)((long)pvVar4 + 0x10U + (uVar5 - ((long)pvVar4 + 0x10U) % uVar5) % uVar5);
            *(ulong *)((long)pvVar2 + -0x10) = uVar7;
            *(void **)((long)pvVar2 + -8) = pvVar4;
            if (pvVar3 != (void *)0x0) {
              uVar5 = *(ulong *)((long)pvVar3 + -0x10);
              if (uVar7 <= *(ulong *)((long)pvVar3 + -0x10)) {
                uVar5 = uVar7;
              }
              memcpy(pvVar2, pvVar3, uVar5);
              free(*(void **)((long)pvVar3 + -8));
            }
            uVar9 = *(ushort *)(self + 0x40d2);
          }
          uVar1 = *(ushort *)(self + 0x40d0);
          *(void **)(self + 0x40e8) = pvVar2;
          if (uVar1 < uVar9) {
            while (true) {
              uVar7 = (ulong)uVar1;
              uVar1 = uVar1 + 1;
              *(uint16_t *)((long)pvVar2 + uVar7 * 2) = 0xffff;
              if (uVar9 <= uVar1)
                break;
              pvVar2 = *(void **)(self + 0x40e8);
            }
          }
        }
      }
    }
  } else {
    uVar7 = (ulong)(byte)self[0x40d4];
    pvVar2 = malloc(uVar7 + 0xb0);
    puVar8 = (uint64_t *)0x0;
    if (pvVar2 != (void *)0x0) {
      puVar8 =
          (uint64_t *)((long)pvVar2 + 0x10U + (uVar7 - ((long)pvVar2 + 0x10U) % uVar7) % uVar7);
      puVar8[-2] = 0xa0;
      puVar8[-1] = pvVar2;
    }
    bVar10 = ((ulong)puVar8 & 1) != 0;
    *(uint64_t **)(self + 0x40e0) = puVar8;
    uVar7 = 0xa0;
    if (bVar10) {
      *(uint8_t *)puVar8 = 0;
      uVar7 = 0x9f;
      puVar8 = (uint64_t *)((long)puVar8 + 1);
    }
    if (((ulong)puVar8 & 2) != 0) {
      *(uint16_t *)puVar8 = 0;
      uVar7 = (ulong)((int)uVar7 - 2);
      puVar8 = (uint64_t *)((long)puVar8 + 2);
    }
    if (((ulong)puVar8 & 4) != 0) {
      *(uint32_t *)puVar8 = 0;
      uVar7 = (ulong)((int)uVar7 - 4);
      puVar8 = (uint64_t *)((long)puVar8 + 4);
    }
    for (uVar5 = uVar7 >> 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar8 = 0;
      puVar8 = puVar8 + (ulong)bVar11 * -2 + 1;
    }
    if ((uVar7 & 4) != 0) {
      *(uint32_t *)puVar8 = 0;
      puVar8 = (uint64_t *)((long)puVar8 + 4);
    }
    if ((uVar7 & 2) != 0) {
      *(uint16_t *)puVar8 = 0;
      puVar8 = (uint64_t *)((long)puVar8 + 2);
    }
    if (bVar10) {
      *(uint8_t *)puVar8 = 0;
    }
    *(uint16_t *)(self + 0x40d0) = 0;
    *(uint16_t *)(self + 0x40d2) = 10;
    *(uint32_t *)(self + 0x40f0) = 0xa110ca7e;
    *(uint16_t *)(self + 0x40dc) = 5;
  }
  *(uint32_t *)(self + 0x4178) = 0;
  if (*(int *)(self + 0x4190) == -0x5eef3582) {
    if (*(ushort *)(self + 0x4172) < 5) {
      uVar7 = (ulong)(byte)self[0x4174];
      *(uint16_t *)(self + 0x4172) = 5;
      pvVar2 = *(void **)(self + 0x4180);
      pvVar3 = malloc(uVar7 + 0x88);
      if (pvVar3 == (void *)0x0) {
        *(uint64_t *)(self + 0x4180) = 0;
      } else {
        pvVar4 = (void *)((long)pvVar3 + 0x10U + (uVar7 - ((long)pvVar3 + 0x10U) % uVar7) % uVar7);
        *(uint64_t *)((long)pvVar4 + -0x10) = 0x78;
        *(void **)((long)pvVar4 + -8) = pvVar3;
        if (pvVar2 != (void *)0x0) {
          sVar6 = 0x78;
          if (*(ulong *)((long)pvVar2 + -0x10) < 0x79) {
            sVar6 = *(ulong *)((long)pvVar2 + -0x10);
          }
          memcpy(pvVar4, pvVar2, sVar6);
          free(*(void **)((long)pvVar2 + -8));
        }
        *(void **)(self + 0x4180) = pvVar4;
        if (*(int *)(self + 0x4178) == 1) {
          uVar9 = *(ushort *)(self + 0x4172);
          uVar5 = (ulong)(byte)self[0x4174];
          pvVar2 = (void *)0x0;
          pvVar3 = *(void **)(self + 0x4188);
          uVar7 = (ulong)uVar9 * 2;
          pvVar4 = malloc(uVar5 + 0x10 + uVar7);
          if (pvVar4 != (void *)0x0) {
            pvVar2 =
                (void *)((long)pvVar4 + 0x10U + (uVar5 - ((long)pvVar4 + 0x10U) % uVar5) % uVar5);
            *(ulong *)((long)pvVar2 + -0x10) = uVar7;
            *(void **)((long)pvVar2 + -8) = pvVar4;
            if (pvVar3 != (void *)0x0) {
              uVar5 = *(ulong *)((long)pvVar3 + -0x10);
              if (uVar7 <= *(ulong *)((long)pvVar3 + -0x10)) {
                uVar5 = uVar7;
              }
              memcpy(pvVar2, pvVar3, uVar5);
              free(*(void **)((long)pvVar3 + -8));
            }
            uVar9 = *(ushort *)(self + 0x4172);
          }
          uVar1 = *(ushort *)(self + 0x4170);
          *(void **)(self + 0x4188) = pvVar2;
          if (uVar1 < uVar9) {
            while (true) {
              uVar7 = (ulong)uVar1;
              uVar1 = uVar1 + 1;
              *(uint16_t *)((long)pvVar2 + uVar7 * 2) = 0xffff;
              if (uVar9 <= uVar1)
                break;
              pvVar2 = *(void **)(self + 0x4188);
            }
          }
        }
      }
    }
  } else {
    uVar7 = (ulong)(byte)self[0x4174];
    pvVar2 = malloc(uVar7 + 0x88);
    puVar8 = (uint64_t *)0x0;
    if (pvVar2 != (void *)0x0) {
      puVar8 =
          (uint64_t *)((long)pvVar2 + 0x10U + (uVar7 - ((long)pvVar2 + 0x10U) % uVar7) % uVar7);
      puVar8[-2] = 0x78;
      puVar8[-1] = pvVar2;
    }
    bVar10 = ((ulong)puVar8 & 1) != 0;
    *(uint64_t **)(self + 0x4180) = puVar8;
    uVar7 = 0x78;
    if (bVar10) {
      *(uint8_t *)puVar8 = 0;
      uVar7 = 0x77;
      puVar8 = (uint64_t *)((long)puVar8 + 1);
    }
    if (((ulong)puVar8 & 2) != 0) {
      *(uint16_t *)puVar8 = 0;
      uVar7 = (ulong)((int)uVar7 - 2);
      puVar8 = (uint64_t *)((long)puVar8 + 2);
    }
    if (((ulong)puVar8 & 4) != 0) {
      *(uint32_t *)puVar8 = 0;
      uVar7 = (ulong)((int)uVar7 - 4);
      puVar8 = (uint64_t *)((long)puVar8 + 4);
    }
    for (uVar5 = uVar7 >> 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar8 = 0;
      puVar8 = puVar8 + (ulong)bVar11 * -2 + 1;
    }
    if ((uVar7 & 4) != 0) {
      *(uint32_t *)puVar8 = 0;
      puVar8 = (uint64_t *)((long)puVar8 + 4);
    }
    if ((uVar7 & 2) != 0) {
      *(uint16_t *)puVar8 = 0;
      puVar8 = (uint64_t *)((long)puVar8 + 2);
    }
    if (bVar10) {
      *(uint8_t *)puVar8 = 0;
    }
    *(uint16_t *)(self + 0x4170) = 0;
    *(uint16_t *)(self + 0x4172) = 5;
    *(uint32_t *)(self + 0x4190) = 0xa110ca7e;
    *(uint16_t *)(self + 0x417c) = 5;
  }
  *(uint32_t *)(self + 0x3fc0) = 0;
  if (*(int *)(self + 0x3fd8) == -0x5eef3582) {
    if (*(ushort *)(self + 0x3fba) < 5) {
      uVar7 = (ulong)(byte)self[0x3fbc];
      *(uint16_t *)(self + 0x3fba) = 5;
      pvVar2 = *(void **)(self + 0x3fc8);
      pvVar3 = malloc(uVar7 + 0xd8);
      if (pvVar3 == (void *)0x0) {
        *(uint64_t *)(self + 0x3fc8) = 0;
      } else {
        pvVar4 = (void *)((long)pvVar3 + 0x10U + (uVar7 - ((long)pvVar3 + 0x10U) % uVar7) % uVar7);
        *(uint64_t *)((long)pvVar4 + -0x10) = 200;
        *(void **)((long)pvVar4 + -8) = pvVar3;
        if (pvVar2 != (void *)0x0) {
          sVar6 = 200;
          if (*(ulong *)((long)pvVar2 + -0x10) < 0xc9) {
            sVar6 = *(ulong *)((long)pvVar2 + -0x10);
          }
          memcpy(pvVar4, pvVar2, sVar6);
          free(*(void **)((long)pvVar2 + -8));
        }
        *(void **)(self + 0x3fc8) = pvVar4;
        if (*(int *)(self + 0x3fc0) == 1) {
          uVar9 = *(ushort *)(self + 0x3fba);
          uVar5 = (ulong)(byte)self[0x3fbc];
          pvVar2 = (void *)0x0;
          pvVar3 = *(void **)(self + 0x3fd0);
          uVar7 = (ulong)uVar9 * 2;
          pvVar4 = malloc(uVar5 + 0x10 + uVar7);
          if (pvVar4 != (void *)0x0) {
            pvVar2 =
                (void *)((long)pvVar4 + 0x10U + (uVar5 - ((long)pvVar4 + 0x10U) % uVar5) % uVar5);
            *(ulong *)((long)pvVar2 + -0x10) = uVar7;
            *(void **)((long)pvVar2 + -8) = pvVar4;
            if (pvVar3 != (void *)0x0) {
              uVar5 = *(ulong *)((long)pvVar3 + -0x10);
              if (uVar7 <= *(ulong *)((long)pvVar3 + -0x10)) {
                uVar5 = uVar7;
              }
              memcpy(pvVar2, pvVar3, uVar5);
              free(*(void **)((long)pvVar3 + -8));
            }
            uVar9 = *(ushort *)(self + 0x3fba);
          }
          uVar1 = *(ushort *)(self + 0x3fb8);
          *(void **)(self + 0x3fd0) = pvVar2;
          if (uVar1 < uVar9) {
            while (true) {
              uVar7 = (ulong)uVar1;
              uVar1 = uVar1 + 1;
              *(uint16_t *)((long)pvVar2 + uVar7 * 2) = 0xffff;
              if (uVar9 <= uVar1)
                break;
              pvVar2 = *(void **)(self + 0x3fd0);
            }
          }
        }
      }
    }
  } else {
    uVar7 = (ulong)(byte)self[0x3fbc];
    pvVar2 = malloc(uVar7 + 0xd8);
    puVar8 = (uint64_t *)0x0;
    if (pvVar2 != (void *)0x0) {
      puVar8 =
          (uint64_t *)((long)pvVar2 + 0x10U + (uVar7 - ((long)pvVar2 + 0x10U) % uVar7) % uVar7);
      puVar8[-2] = 200;
      puVar8[-1] = pvVar2;
    }
    bVar10 = ((ulong)puVar8 & 1) != 0;
    *(uint64_t **)(self + 0x3fc8) = puVar8;
    uVar7 = 200;
    if (bVar10) {
      *(uint8_t *)puVar8 = 0;
      uVar7 = 199;
      puVar8 = (uint64_t *)((long)puVar8 + 1);
    }
    if (((ulong)puVar8 & 2) != 0) {
      *(uint16_t *)puVar8 = 0;
      uVar7 = (ulong)((int)uVar7 - 2);
      puVar8 = (uint64_t *)((long)puVar8 + 2);
    }
    if (((ulong)puVar8 & 4) != 0) {
      *(uint32_t *)puVar8 = 0;
      uVar7 = (ulong)((int)uVar7 - 4);
      puVar8 = (uint64_t *)((long)puVar8 + 4);
    }
    for (uVar5 = uVar7 >> 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar8 = 0;
      puVar8 = puVar8 + (ulong)bVar11 * -2 + 1;
    }
    if ((uVar7 & 4) != 0) {
      *(uint32_t *)puVar8 = 0;
      puVar8 = (uint64_t *)((long)puVar8 + 4);
    }
    if ((uVar7 & 2) != 0) {
      *(uint16_t *)puVar8 = 0;
      puVar8 = (uint64_t *)((long)puVar8 + 2);
    }
    if (bVar10) {
      *(uint8_t *)puVar8 = 0;
    }
    *(uint16_t *)(self + 0x3fb8) = 0;
    *(uint16_t *)(self + 0x3fba) = 5;
    *(uint32_t *)(self + 0x3fd8) = 0xa110ca7e;
    *(uint16_t *)(self + 0x3fc4) = 5;
  }
  *(uint32_t *)(self + 0x4010) = 0;
  if (*(int *)(self + 0x4028) == -0x5eef3582) {
    if (*(ushort *)(self + 0x400a) < 5) {
      uVar7 = (ulong)(byte)self[0x400c];
      *(uint16_t *)(self + 0x400a) = 5;
      pvVar2 = *(void **)(self + 0x4018);
      pvVar3 = malloc(uVar7 + 0xd8);
      if (pvVar3 == (void *)0x0) {
        *(uint64_t *)(self + 0x4018) = 0;
      } else {
        pvVar4 = (void *)((long)pvVar3 + 0x10U + (uVar7 - ((long)pvVar3 + 0x10U) % uVar7) % uVar7);
        *(uint64_t *)((long)pvVar4 + -0x10) = 200;
        *(void **)((long)pvVar4 + -8) = pvVar3;
        if (pvVar2 != (void *)0x0) {
          sVar6 = 200;
          if (*(ulong *)((long)pvVar2 + -0x10) < 0xc9) {
            sVar6 = *(ulong *)((long)pvVar2 + -0x10);
          }
          memcpy(pvVar4, pvVar2, sVar6);
          free(*(void **)((long)pvVar2 + -8));
        }
        *(void **)(self + 0x4018) = pvVar4;
        if (*(int *)(self + 0x4010) == 1) {
          uVar9 = *(ushort *)(self + 0x400a);
          uVar5 = (ulong)(byte)self[0x400c];
          pvVar2 = (void *)0x0;
          pvVar3 = *(void **)(self + 0x4020);
          uVar7 = (ulong)uVar9 * 2;
          pvVar4 = malloc(uVar5 + 0x10 + uVar7);
          if (pvVar4 != (void *)0x0) {
            pvVar2 =
                (void *)((long)pvVar4 + 0x10U + (uVar5 - ((long)pvVar4 + 0x10U) % uVar5) % uVar5);
            *(ulong *)((long)pvVar2 + -0x10) = uVar7;
            *(void **)((long)pvVar2 + -8) = pvVar4;
            if (pvVar3 != (void *)0x0) {
              uVar5 = *(ulong *)((long)pvVar3 + -0x10);
              if (uVar7 <= *(ulong *)((long)pvVar3 + -0x10)) {
                uVar5 = uVar7;
              }
              memcpy(pvVar2, pvVar3, uVar5);
              free(*(void **)((long)pvVar3 + -8));
            }
            uVar9 = *(ushort *)(self + 0x400a);
          }
          uVar1 = *(ushort *)(self + 0x4008);
          *(void **)(self + 0x4020) = pvVar2;
          if (uVar1 < uVar9) {
            while (true) {
              uVar7 = (ulong)uVar1;
              uVar1 = uVar1 + 1;
              *(uint16_t *)((long)pvVar2 + uVar7 * 2) = 0xffff;
              if (uVar9 <= uVar1)
                break;
              pvVar2 = *(void **)(self + 0x4020);
            }
          }
        }
      }
    }
  } else {
    uVar7 = (ulong)(byte)self[0x400c];
    pvVar2 = malloc(uVar7 + 0xd8);
    puVar8 = (uint64_t *)0x0;
    if (pvVar2 != (void *)0x0) {
      puVar8 =
          (uint64_t *)((long)pvVar2 + 0x10U + (uVar7 - ((long)pvVar2 + 0x10U) % uVar7) % uVar7);
      puVar8[-2] = 200;
      puVar8[-1] = pvVar2;
    }
    bVar10 = ((ulong)puVar8 & 1) != 0;
    *(uint64_t **)(self + 0x4018) = puVar8;
    uVar7 = 200;
    if (bVar10) {
      *(uint8_t *)puVar8 = 0;
      uVar7 = 199;
      puVar8 = (uint64_t *)((long)puVar8 + 1);
    }
    if (((ulong)puVar8 & 2) != 0) {
      *(uint16_t *)puVar8 = 0;
      uVar7 = (ulong)((int)uVar7 - 2);
      puVar8 = (uint64_t *)((long)puVar8 + 2);
    }
    if (((ulong)puVar8 & 4) != 0) {
      *(uint32_t *)puVar8 = 0;
      uVar7 = (ulong)((int)uVar7 - 4);
      puVar8 = (uint64_t *)((long)puVar8 + 4);
    }
    for (uVar5 = uVar7 >> 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar8 = 0;
      puVar8 = puVar8 + (ulong)bVar11 * -2 + 1;
    }
    if ((uVar7 & 4) != 0) {
      *(uint32_t *)puVar8 = 0;
      puVar8 = (uint64_t *)((long)puVar8 + 4);
    }
    if ((uVar7 & 2) != 0) {
      *(uint16_t *)puVar8 = 0;
      puVar8 = (uint64_t *)((long)puVar8 + 2);
    }
    if (bVar10) {
      *(uint8_t *)puVar8 = 0;
    }
    *(uint16_t *)(self + 0x4008) = 0;
    *(uint16_t *)(self + 0x400a) = 5;
    *(uint32_t *)(self + 0x4028) = 0xa110ca7e;
    *(uint16_t *)(self + 0x4014) = 5;
  }
  *(uint32_t *)(self + 0x4060) = 0;
  if (*(int *)(self + 0x4078) == -0x5eef3582) {
    if (*(ushort *)(self + 0x405a) < 5) {
      uVar7 = (ulong)(byte)self[0x405c];
      *(uint16_t *)(self + 0x405a) = 5;
      pvVar2 = *(void **)(self + 0x4068);
      pvVar3 = malloc(uVar7 + 0x38);
      if (pvVar3 == (void *)0x0) {
        *(uint64_t *)(self + 0x4068) = 0;
      } else {
        pvVar4 = (void *)((long)pvVar3 + 0x10U + (uVar7 - ((long)pvVar3 + 0x10U) % uVar7) % uVar7);
        *(uint64_t *)((long)pvVar4 + -0x10) = 0x28;
        *(void **)((long)pvVar4 + -8) = pvVar3;
        if (pvVar2 != (void *)0x0) {
          sVar6 = 0x28;
          if (*(ulong *)((long)pvVar2 + -0x10) < 0x29) {
            sVar6 = *(ulong *)((long)pvVar2 + -0x10);
          }
          memcpy(pvVar4, pvVar2, sVar6);
          free(*(void **)((long)pvVar2 + -8));
        }
        *(void **)(self + 0x4068) = pvVar4;
        if (*(int *)(self + 0x4060) == 1) {
          uVar9 = *(ushort *)(self + 0x405a);
          uVar5 = (ulong)(byte)self[0x405c];
          pvVar2 = (void *)0x0;
          pvVar3 = *(void **)(self + 0x4070);
          uVar7 = (ulong)uVar9 * 2;
          pvVar4 = malloc(uVar5 + 0x10 + uVar7);
          if (pvVar4 != (void *)0x0) {
            pvVar2 =
                (void *)((long)pvVar4 + 0x10U + (uVar5 - ((long)pvVar4 + 0x10U) % uVar5) % uVar5);
            *(ulong *)((long)pvVar2 + -0x10) = uVar7;
            *(void **)((long)pvVar2 + -8) = pvVar4;
            if (pvVar3 != (void *)0x0) {
              uVar5 = *(ulong *)((long)pvVar3 + -0x10);
              if (uVar7 <= *(ulong *)((long)pvVar3 + -0x10)) {
                uVar5 = uVar7;
              }
              memcpy(pvVar2, pvVar3, uVar5);
              free(*(void **)((long)pvVar3 + -8));
            }
            uVar9 = *(ushort *)(self + 0x405a);
          }
          uVar1 = *(ushort *)(self + 0x4058);
          *(void **)(self + 0x4070) = pvVar2;
          if (uVar1 < uVar9) {
            while (true) {
              uVar7 = (ulong)uVar1;
              uVar1 = uVar1 + 1;
              *(uint16_t *)((long)pvVar2 + uVar7 * 2) = 0xffff;
              if (uVar9 <= uVar1)
                break;
              pvVar2 = *(void **)(self + 0x4070);
            }
          }
        }
      }
    }
  } else {
    uVar7 = (ulong)(byte)self[0x405c];
    pvVar2 = malloc(uVar7 + 0x38);
    puVar8 = (uint64_t *)0x0;
    if (pvVar2 != (void *)0x0) {
      puVar8 =
          (uint64_t *)((long)pvVar2 + 0x10U + (uVar7 - ((long)pvVar2 + 0x10U) % uVar7) % uVar7);
      puVar8[-2] = 0x28;
      puVar8[-1] = pvVar2;
    }
    *(uint64_t **)(self + 0x4068) = puVar8;
    *puVar8 = 0;
    puVar8[1] = 0;
    puVar8[2] = 0;
    puVar8[3] = 0;
    puVar8[4] = 0;
    *(uint16_t *)(self + 0x4058) = 0;
    *(uint16_t *)(self + 0x405a) = 5;
    *(uint32_t *)(self + 0x4078) = 0xa110ca7e;
    *(uint16_t *)(self + 0x4064) = 5;
  }
  *(uint32_t *)(self + 0x3f20) = 0;
  if (*(int *)(self + 0x3f38) == -0x5eef3582) {
    if (*(ushort *)(self + 0x3f1a) < 5) {
      uVar7 = (ulong)(byte)self[0x3f1c];
      *(uint16_t *)(self + 0x3f1a) = 5;
      pvVar2 = *(void **)(self + 0x3f28);
      pvVar3 = malloc(uVar7 + 0x38);
      if (pvVar3 == (void *)0x0) {
        *(uint64_t *)(self + 0x3f28) = 0;
      } else {
        pvVar4 = (void *)((long)pvVar3 + 0x10U + (uVar7 - ((long)pvVar3 + 0x10U) % uVar7) % uVar7);
        *(uint64_t *)((long)pvVar4 + -0x10) = 0x28;
        *(void **)((long)pvVar4 + -8) = pvVar3;
        if (pvVar2 != (void *)0x0) {
          sVar6 = 0x28;
          if (*(ulong *)((long)pvVar2 + -0x10) < 0x29) {
            sVar6 = *(ulong *)((long)pvVar2 + -0x10);
          }
          memcpy(pvVar4, pvVar2, sVar6);
          free(*(void **)((long)pvVar2 + -8));
        }
        *(void **)(self + 0x3f28) = pvVar4;
        if (*(int *)(self + 0x3f20) == 1) {
          uVar9 = *(ushort *)(self + 0x3f1a);
          uVar5 = (ulong)(byte)self[0x3f1c];
          pvVar2 = (void *)0x0;
          pvVar3 = *(void **)(self + 0x3f30);
          uVar7 = (ulong)uVar9 * 2;
          pvVar4 = malloc(uVar5 + 0x10 + uVar7);
          if (pvVar4 != (void *)0x0) {
            pvVar2 =
                (void *)((long)pvVar4 + 0x10U + (uVar5 - ((long)pvVar4 + 0x10U) % uVar5) % uVar5);
            *(ulong *)((long)pvVar2 + -0x10) = uVar7;
            *(void **)((long)pvVar2 + -8) = pvVar4;
            if (pvVar3 != (void *)0x0) {
              uVar5 = *(ulong *)((long)pvVar3 + -0x10);
              if (uVar7 <= *(ulong *)((long)pvVar3 + -0x10)) {
                uVar5 = uVar7;
              }
              memcpy(pvVar2, pvVar3, uVar5);
              free(*(void **)((long)pvVar3 + -8));
            }
            uVar9 = *(ushort *)(self + 0x3f1a);
          }
          uVar1 = *(ushort *)(self + 0x3f18);
          *(void **)(self + 0x3f30) = pvVar2;
          if (uVar1 < uVar9) {
            while (true) {
              uVar7 = (ulong)uVar1;
              uVar1 = uVar1 + 1;
              *(uint16_t *)((long)pvVar2 + uVar7 * 2) = 0xffff;
              if (uVar9 <= uVar1)
                break;
              pvVar2 = *(void **)(self + 0x3f30);
            }
          }
        }
      }
    }
  } else {
    uVar7 = (ulong)(byte)self[0x3f1c];
    pvVar2 = malloc(uVar7 + 0x38);
    puVar8 = (uint64_t *)0x0;
    if (pvVar2 != (void *)0x0) {
      puVar8 =
          (uint64_t *)((long)pvVar2 + 0x10U + (uVar7 - ((long)pvVar2 + 0x10U) % uVar7) % uVar7);
      puVar8[-2] = 0x28;
      puVar8[-1] = pvVar2;
    }
    *(uint64_t **)(self + 0x3f28) = puVar8;
    *puVar8 = 0;
    puVar8[1] = 0;
    puVar8[2] = 0;
    puVar8[3] = 0;
    puVar8[4] = 0;
    *(uint16_t *)(self + 0x3f18) = 0;
    *(uint16_t *)(self + 0x3f1a) = 5;
    *(uint32_t *)(self + 0x3f38) = 0xa110ca7e;
    *(uint16_t *)(self + 0x3f24) = 5;
  }
  *(uint32_t *)(self + 0x41c8) = 0;
  if (*(int *)(self + 0x41e0) == -0x5eef3582) {
    if (*(ushort *)(self + 0x41c2) < 5) {
      uVar7 = (ulong)(byte)self[0x41c4];
      *(uint16_t *)(self + 0x41c2) = 5;
      pvVar2 = *(void **)(self + 0x41d0);
      pvVar3 = malloc(uVar7 + 0x38);
      if (pvVar3 == (void *)0x0) {
        *(uint64_t *)(self + 0x41d0) = 0;
      } else {
        pvVar4 = (void *)((long)pvVar3 + 0x10U + (uVar7 - ((long)pvVar3 + 0x10U) % uVar7) % uVar7);
        *(uint64_t *)((long)pvVar4 + -0x10) = 0x28;
        *(void **)((long)pvVar4 + -8) = pvVar3;
        if (pvVar2 != (void *)0x0) {
          sVar6 = 0x28;
          if (*(ulong *)((long)pvVar2 + -0x10) < 0x29) {
            sVar6 = *(ulong *)((long)pvVar2 + -0x10);
          }
          memcpy(pvVar4, pvVar2, sVar6);
          free(*(void **)((long)pvVar2 + -8));
        }
        *(void **)(self + 0x41d0) = pvVar4;
        if (*(int *)(self + 0x41c8) == 1) {
          uVar9 = *(ushort *)(self + 0x41c2);
          uVar5 = (ulong)(byte)self[0x41c4];
          pvVar2 = (void *)0x0;
          pvVar3 = *(void **)(self + 0x41d8);
          uVar7 = (ulong)uVar9 * 2;
          pvVar4 = malloc(uVar5 + 0x10 + uVar7);
          if (pvVar4 != (void *)0x0) {
            pvVar2 =
                (void *)((long)pvVar4 + 0x10U + (uVar5 - ((long)pvVar4 + 0x10U) % uVar5) % uVar5);
            *(ulong *)((long)pvVar2 + -0x10) = uVar7;
            *(void **)((long)pvVar2 + -8) = pvVar4;
            if (pvVar3 != (void *)0x0) {
              uVar5 = *(ulong *)((long)pvVar3 + -0x10);
              if (uVar7 <= *(ulong *)((long)pvVar3 + -0x10)) {
                uVar5 = uVar7;
              }
              memcpy(pvVar2, pvVar3, uVar5);
              free(*(void **)((long)pvVar3 + -8));
            }
            uVar9 = *(ushort *)(self + 0x41c2);
          }
          uVar1 = *(ushort *)(self + 0x41c0);
          *(void **)(self + 0x41d8) = pvVar2;
          if (uVar1 < uVar9) {
            while (true) {
              uVar7 = (ulong)uVar1;
              uVar1 = uVar1 + 1;
              *(uint16_t *)((long)pvVar2 + uVar7 * 2) = 0xffff;
              if (uVar9 <= uVar1)
                break;
              pvVar2 = *(void **)(self + 0x41d8);
            }
          }
        }
      }
    }
  } else {
    uVar7 = (ulong)(byte)self[0x41c4];
    pvVar2 = malloc(uVar7 + 0x38);
    puVar8 = (uint64_t *)0x0;
    if (pvVar2 != (void *)0x0) {
      puVar8 =
          (uint64_t *)((long)pvVar2 + 0x10U + (uVar7 - ((long)pvVar2 + 0x10U) % uVar7) % uVar7);
      puVar8[-2] = 0x28;
      puVar8[-1] = pvVar2;
    }
    *(uint64_t **)(self + 0x41d0) = puVar8;
    *puVar8 = 0;
    puVar8[1] = 0;
    puVar8[2] = 0;
    puVar8[3] = 0;
    puVar8[4] = 0;
    *(uint16_t *)(self + 0x41c0) = 0;
    *(uint16_t *)(self + 0x41c2) = 5;
    *(uint32_t *)(self + 0x41e0) = 0xa110ca7e;
    *(uint16_t *)(self + 0x41cc) = 5;
  }
  *(uint32_t *)(self + 0x2ab0) = 0;
  if (*(int *)(self + 0x2ac8) == -0x5eef3582) {
    if (*(ushort *)(self + 0x2aaa) < 5) {
      uVar7 = (ulong)(byte)self[0x2aac];
      *(uint16_t *)(self + 0x2aaa) = 5;
      pvVar2 = *(void **)(self + 0x2ab8);
      pvVar3 = malloc(uVar7 + 0xb0);
      if (pvVar3 == (void *)0x0) {
        *(uint64_t *)(self + 0x2ab8) = 0;
      } else {
        pvVar4 = (void *)((long)pvVar3 + 0x10U + (uVar7 - ((long)pvVar3 + 0x10U) % uVar7) % uVar7);
        *(uint64_t *)((long)pvVar4 + -0x10) = 0xa0;
        *(void **)((long)pvVar4 + -8) = pvVar3;
        if (pvVar2 != (void *)0x0) {
          sVar6 = 0xa0;
          if (*(ulong *)((long)pvVar2 + -0x10) < 0xa1) {
            sVar6 = *(ulong *)((long)pvVar2 + -0x10);
          }
          memcpy(pvVar4, pvVar2, sVar6);
          free(*(void **)((long)pvVar2 + -8));
        }
        *(void **)(self + 0x2ab8) = pvVar4;
        if (*(int *)(self + 0x2ab0) == 1) {
          uVar9 = *(ushort *)(self + 0x2aaa);
          uVar5 = (ulong)(byte)self[0x2aac];
          pvVar2 = (void *)0x0;
          pvVar3 = *(void **)(self + 0x2ac0);
          uVar7 = (ulong)uVar9 * 2;
          pvVar4 = malloc(uVar5 + 0x10 + uVar7);
          if (pvVar4 != (void *)0x0) {
            pvVar2 =
                (void *)((long)pvVar4 + 0x10U + (uVar5 - ((long)pvVar4 + 0x10U) % uVar5) % uVar5);
            *(ulong *)((long)pvVar2 + -0x10) = uVar7;
            *(void **)((long)pvVar2 + -8) = pvVar4;
            if (pvVar3 != (void *)0x0) {
              uVar5 = *(ulong *)((long)pvVar3 + -0x10);
              if (uVar7 <= *(ulong *)((long)pvVar3 + -0x10)) {
                uVar5 = uVar7;
              }
              memcpy(pvVar2, pvVar3, uVar5);
              free(*(void **)((long)pvVar3 + -8));
            }
            uVar9 = *(ushort *)(self + 0x2aaa);
          }
          uVar1 = *(ushort *)(self + 0x2aa8);
          *(void **)(self + 0x2ac0) = pvVar2;
          if (uVar1 < uVar9) {
            while (true) {
              uVar7 = (ulong)uVar1;
              uVar1 = uVar1 + 1;
              *(uint16_t *)((long)pvVar2 + uVar7 * 2) = 0xffff;
              if (uVar9 <= uVar1)
                break;
              pvVar2 = *(void **)(self + 0x2ac0);
            }
          }
        }
      }
    }
  } else {
    uVar7 = (ulong)(byte)self[0x2aac];
    pvVar2 = malloc(uVar7 + 0xb0);
    puVar8 = (uint64_t *)0x0;
    if (pvVar2 != (void *)0x0) {
      puVar8 =
          (uint64_t *)((long)pvVar2 + 0x10U + (uVar7 - ((long)pvVar2 + 0x10U) % uVar7) % uVar7);
      puVar8[-2] = 0xa0;
      puVar8[-1] = pvVar2;
    }
    bVar10 = ((ulong)puVar8 & 1) != 0;
    *(uint64_t **)(self + 0x2ab8) = puVar8;
    uVar7 = 0xa0;
    if (bVar10) {
      *(uint8_t *)puVar8 = 0;
      uVar7 = 0x9f;
      puVar8 = (uint64_t *)((long)puVar8 + 1);
    }
    if (((ulong)puVar8 & 2) != 0) {
      *(uint16_t *)puVar8 = 0;
      uVar7 = (ulong)((int)uVar7 - 2);
      puVar8 = (uint64_t *)((long)puVar8 + 2);
    }
    if (((ulong)puVar8 & 4) != 0) {
      *(uint32_t *)puVar8 = 0;
      uVar7 = (ulong)((int)uVar7 - 4);
      puVar8 = (uint64_t *)((long)puVar8 + 4);
    }
    for (uVar5 = uVar7 >> 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar8 = 0;
      puVar8 = puVar8 + (ulong)bVar11 * -2 + 1;
    }
    if ((uVar7 & 4) != 0) {
      *(uint32_t *)puVar8 = 0;
      puVar8 = (uint64_t *)((long)puVar8 + 4);
    }
    if ((uVar7 & 2) != 0) {
      *(uint16_t *)puVar8 = 0;
      puVar8 = (uint64_t *)((long)puVar8 + 2);
    }
    if (bVar10) {
      *(uint8_t *)puVar8 = 0;
    }
    *(uint16_t *)(self + 0x2aa8) = 0;
    *(uint16_t *)(self + 0x2aaa) = 5;
    *(uint32_t *)(self + 0x2ac8) = 0xa110ca7e;
    *(uint16_t *)(self + 0x2ab4) = 1;
  }
  return;
}

/* ======================================================================
 * SMBPalette__DestroyObstacleArrays  (Ghidra `DestroyObstacleArrays` @ 004e45e0)
 * Signature: uint8_t __thiscall DestroyObstacleArrays(SMBPalette * self)
 * Class: SMBPalette
 * Calls: `free`
 * Called by: (none)
 */
/* SMBPalette__DestroyObstacleArrays() */

void __thiscall SMBPalette__DestroyObstacleArrays(SMBPalette *self)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;

  if (*(int *)(self + 0x3e98) == -0x5eef3582) {
    *(uint32_t *)(self + 0x3e98) = 0;
    free(*(void **)(*(long *)(self + 0x3e88) + -8));
    if (*(int *)(self + 16000) == 1) {
      free(*(void **)(*(long *)(self + 0x3e90) + -8));
    }
    *(uint32_t *)(self + 0x3e98) = 0;
    *(uint16_t *)(self + 0x3e7a) = 0;
    *(uint16_t *)(self + 0x3e78) = 0;
    *(uint64_t *)(self + 0x3e88) = 0;
    *(uint64_t *)(self + 0x3e90) = 0;
  }
  if (*(short *)(self + 0x3ec8) != 0) {
    uVar6 = 0;
    do {
      lVar5 = (uVar6 & 0xffff) * 0xb68;
      lVar3 = lVar5 + *(long *)(self + 0x3ed8);
      if (*(long **)(lVar3 + 0x140) != (long *)0x0) {
        (**(code **)(**(long **)(lVar3 + 0x140) + 8))();
        lVar3 = lVar5 + *(long *)(self + 0x3ed8);
      }
      if (*(long **)(lVar3 + 0x260) != (long *)0x0) {
        (**(code **)(**(long **)(lVar3 + 0x260) + 8))();
        lVar3 = lVar5 + *(long *)(self + 0x3ed8);
      }
      if (*(long **)(lVar3 + 0x380) != (long *)0x0) {
        (**(code **)(**(long **)(lVar3 + 0x380) + 8))();
        lVar3 = lVar5 + *(long *)(self + 0x3ed8);
      }
      if (*(long **)(lVar3 + 0x4a0) != (long *)0x0) {
        (**(code **)(**(long **)(lVar3 + 0x4a0) + 8))();
        lVar3 = lVar5 + *(long *)(self + 0x3ed8);
      }
      if (*(long **)(lVar3 + 0x5c0) != (long *)0x0) {
        (**(code **)(**(long **)(lVar3 + 0x5c0) + 8))();
        lVar3 = lVar5 + *(long *)(self + 0x3ed8);
      }
      if (*(long **)(lVar3 + 0x6e0) != (long *)0x0) {
        (**(code **)(**(long **)(lVar3 + 0x6e0) + 8))();
        lVar3 = lVar5 + *(long *)(self + 0x3ed8);
      }
      if (*(long **)(lVar3 + 0x800) != (long *)0x0) {
        (**(code **)(**(long **)(lVar3 + 0x800) + 8))();
        lVar3 = lVar5 + *(long *)(self + 0x3ed8);
      }
      if (*(long **)(lVar3 + 0x920) != (long *)0x0) {
        (**(code **)(**(long **)(lVar3 + 0x920) + 8))();
        lVar3 = lVar5 + *(long *)(self + 0x3ed8);
      }
      if (*(long **)(lVar3 + 0xa40) != (long *)0x0) {
        (**(code **)(**(long **)(lVar3 + 0xa40) + 8))();
        lVar3 = lVar5 + *(long *)(self + 0x3ed8);
      }
      if (*(long **)(lVar3 + 0xb60) != (long *)0x0) {
        (**(code **)(**(long **)(lVar3 + 0xb60) + 8))();
      }
      uVar7 = (int)uVar6 + 1;
      uVar6 = (ulong)uVar7;
    } while ((int)uVar7 < (int)(uint) * (ushort *)(self + 0x3ec8));
  }
  if (*(int *)(self + 0x3ee8) == -0x5eef3582) {
    *(uint32_t *)(self + 0x3ee8) = 0;
    free(*(void **)(*(long *)(self + 0x3ed8) + -8));
    if (*(int *)(self + 0x3ed0) == 1) {
      free(*(void **)(*(long *)(self + 0x3ee0) + -8));
    }
    *(uint32_t *)(self + 0x3ee8) = 0;
    *(uint16_t *)(self + 0x3eca) = 0;
    *(uint16_t *)(self + 0x3ec8) = 0;
    *(uint64_t *)(self + 0x3ed8) = 0;
    *(uint64_t *)(self + 0x3ee0) = 0;
  }
  uVar7 = (uint) * (ushort *)(self + 0x4230);
  if (*(ushort *)(self + 0x4230) != 0) {
    uVar6 = 0;
    do {
      plVar2 = *(long **)((uVar6 & 0xffff) * 0x10 + *(long *)(self + 0x4240));
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
        uVar7 = (uint) * (ushort *)(self + 0x4230);
      }
      uVar4 = (int)uVar6 + 1;
      uVar6 = (ulong)uVar4;
    } while ((int)uVar4 < (int)uVar7);
  }
  if (*(int *)(self + 0x4250) == -0x5eef3582) {
    *(uint32_t *)(self + 0x4250) = 0;
    free(*(void **)(*(long *)(self + 0x4240) + -8));
    if (*(int *)(self + 0x4238) == 1) {
      free(*(void **)(*(long *)(self + 0x4248) + -8));
    }
    iVar1 = *(int *)(self + 0x4140);
    *(uint32_t *)(self + 0x4250) = 0;
    *(uint16_t *)(self + 0x4232) = 0;
    *(uint16_t *)(self + 0x4230) = 0;
    *(uint64_t *)(self + 0x4240) = 0;
    *(uint64_t *)(self + 0x4248) = 0;
  } else {
    iVar1 = *(int *)(self + 0x4140);
  }
  if (iVar1 == -0x5eef3582) {
    *(uint32_t *)(self + 0x4140) = 0;
    free(*(void **)(*(long *)(self + 0x4130) + -8));
    if (*(int *)(self + 0x4128) == 1) {
      free(*(void **)(*(long *)(self + 0x4138) + -8));
    }
    iVar1 = *(int *)(self + 0x40f0);
    *(uint32_t *)(self + 0x4140) = 0;
    *(uint16_t *)(self + 0x4122) = 0;
    *(uint16_t *)(self + 0x4120) = 0;
    *(uint64_t *)(self + 0x4130) = 0;
    *(uint64_t *)(self + 0x4138) = 0;
  } else {
    iVar1 = *(int *)(self + 0x40f0);
  }
  if (iVar1 == -0x5eef3582) {
    *(uint32_t *)(self + 0x40f0) = 0;
    free(*(void **)(*(long *)(self + 0x40e0) + -8));
    if (*(int *)(self + 0x40d8) == 1) {
      free(*(void **)(*(long *)(self + 0x40e8) + -8));
    }
    iVar1 = *(int *)(self + 0x4190);
    *(uint32_t *)(self + 0x40f0) = 0;
    *(uint16_t *)(self + 0x40d2) = 0;
    *(uint16_t *)(self + 0x40d0) = 0;
    *(uint64_t *)(self + 0x40e0) = 0;
    *(uint64_t *)(self + 0x40e8) = 0;
  } else {
    iVar1 = *(int *)(self + 0x4190);
  }
  if (iVar1 == -0x5eef3582) {
    *(uint32_t *)(self + 0x4190) = 0;
    free(*(void **)(*(long *)(self + 0x4180) + -8));
    if (*(int *)(self + 0x4178) == 1) {
      free(*(void **)(*(long *)(self + 0x4188) + -8));
    }
    iVar1 = *(int *)(self + 0x3fd8);
    *(uint32_t *)(self + 0x4190) = 0;
    *(uint16_t *)(self + 0x4172) = 0;
    *(uint16_t *)(self + 0x4170) = 0;
    *(uint64_t *)(self + 0x4180) = 0;
    *(uint64_t *)(self + 0x4188) = 0;
  } else {
    iVar1 = *(int *)(self + 0x3fd8);
  }
  if (iVar1 == -0x5eef3582) {
    *(uint32_t *)(self + 0x3fd8) = 0;
    free(*(void **)(*(long *)(self + 0x3fc8) + -8));
    if (*(int *)(self + 0x3fc0) == 1) {
      free(*(void **)(*(long *)(self + 0x3fd0) + -8));
    }
    iVar1 = *(int *)(self + 0x4028);
    *(uint32_t *)(self + 0x3fd8) = 0;
    *(uint16_t *)(self + 0x3fba) = 0;
    *(uint16_t *)(self + 0x3fb8) = 0;
    *(uint64_t *)(self + 0x3fc8) = 0;
    *(uint64_t *)(self + 0x3fd0) = 0;
  } else {
    iVar1 = *(int *)(self + 0x4028);
  }
  if (iVar1 == -0x5eef3582) {
    *(uint32_t *)(self + 0x4028) = 0;
    free(*(void **)(*(long *)(self + 0x4018) + -8));
    if (*(int *)(self + 0x4010) == 1) {
      free(*(void **)(*(long *)(self + 0x4020) + -8));
    }
    iVar1 = *(int *)(self + 0x4078);
    *(uint32_t *)(self + 0x4028) = 0;
    *(uint16_t *)(self + 0x400a) = 0;
    *(uint16_t *)(self + 0x4008) = 0;
    *(uint64_t *)(self + 0x4018) = 0;
    *(uint64_t *)(self + 0x4020) = 0;
  } else {
    iVar1 = *(int *)(self + 0x4078);
  }
  if (iVar1 == -0x5eef3582) {
    *(uint32_t *)(self + 0x4078) = 0;
    free(*(void **)(*(long *)(self + 0x4068) + -8));
    if (*(int *)(self + 0x4060) == 1) {
      free(*(void **)(*(long *)(self + 0x4070) + -8));
    }
    iVar1 = *(int *)(self + 0x3f38);
    *(uint32_t *)(self + 0x4078) = 0;
    *(uint16_t *)(self + 0x405a) = 0;
    *(uint16_t *)(self + 0x4058) = 0;
    *(uint64_t *)(self + 0x4068) = 0;
    *(uint64_t *)(self + 0x4070) = 0;
  } else {
    iVar1 = *(int *)(self + 0x3f38);
  }
  if (iVar1 == -0x5eef3582) {
    *(uint32_t *)(self + 0x3f38) = 0;
    free(*(void **)(*(long *)(self + 0x3f28) + -8));
    if (*(int *)(self + 0x3f20) == 1) {
      free(*(void **)(*(long *)(self + 0x3f30) + -8));
    }
    iVar1 = *(int *)(self + 0x41e0);
    *(uint32_t *)(self + 0x3f38) = 0;
    *(uint16_t *)(self + 0x3f1a) = 0;
    *(uint16_t *)(self + 0x3f18) = 0;
    *(uint64_t *)(self + 0x3f28) = 0;
    *(uint64_t *)(self + 0x3f30) = 0;
  } else {
    iVar1 = *(int *)(self + 0x41e0);
  }
  if (iVar1 == -0x5eef3582) {
    *(uint32_t *)(self + 0x41e0) = 0;
    free(*(void **)(*(long *)(self + 0x41d0) + -8));
    if (*(int *)(self + 0x41c8) == 1) {
      free(*(void **)(*(long *)(self + 0x41d8) + -8));
    }
    iVar1 = *(int *)(self + 0x2ac8);
    *(uint32_t *)(self + 0x41e0) = 0;
    *(uint16_t *)(self + 0x41c2) = 0;
    *(uint16_t *)(self + 0x41c0) = 0;
    *(uint64_t *)(self + 0x41d0) = 0;
    *(uint64_t *)(self + 0x41d8) = 0;
  } else {
    iVar1 = *(int *)(self + 0x2ac8);
  }
  if (iVar1 == -0x5eef3582) {
    *(uint32_t *)(self + 0x2ac8) = 0;
    free(*(void **)(*(long *)(self + 0x2ab8) + -8));
    if (*(int *)(self + 0x2ab0) == 1) {
      free(*(void **)(*(long *)(self + 0x2ac0) + -8));
    }
    iVar1 = *(int *)(self + 0x3178);
    *(uint32_t *)(self + 0x2ac8) = 0;
    *(uint16_t *)(self + 0x2aaa) = 0;
    *(uint16_t *)(self + 0x2aa8) = 0;
    *(uint64_t *)(self + 0x2ab8) = 0;
    *(uint64_t *)(self + 0x2ac0) = 0;
  } else {
    iVar1 = *(int *)(self + 0x3178);
  }
  if (iVar1 == -0x5eef3582) {
    *(uint32_t *)(self + 0x3178) = 0;
    free(*(void **)(*(long *)(self + 0x3168) + -8));
    if (*(int *)(self + 0x3160) == 1) {
      free(*(void **)(*(long *)(self + 0x3170) + -8));
    }
    *(uint32_t *)(self + 0x3178) = 0;
    *(uint16_t *)(self + 0x315a) = 0;
    *(uint16_t *)(self + 0x3158) = 0;
    *(uint64_t *)(self + 0x3168) = 0;
    *(uint64_t *)(self + 0x3170) = 0;
  }
  if (*(int *)(self + 0x31c8) != -0x5eef3582) {
    return;
  }
  *(uint32_t *)(self + 0x31c8) = 0;
  free(*(void **)(*(long *)(self + 0x31b8) + -8));
  if (*(int *)(self + 0x31b0) == 1) {
    free(*(void **)(*(long *)(self + 0x31c0) + -8));
  }
  *(uint32_t *)(self + 0x31c8) = 0;
  *(uint16_t *)(self + 0x31aa) = 0;
  *(uint16_t *)(self + 0x31a8) = 0;
  *(uint64_t *)(self + 0x31b8) = 0;
  *(uint64_t *)(self + 0x31c0) = 0;
  return;
}

/* ======================================================================
 * SMBPalette__ResetObstacleArrays  (Ghidra `ResetObstacleArrays` @ 004e4f60)
 * Signature: uint8_t __thiscall ResetObstacleArrays(SMBPalette * self)
 * Class: SMBPalette
 * Calls: (none)
 * Called by: (none)
 */
/* SMBPalette__ResetObstacleArrays() */

void __thiscall SMBPalette__ResetObstacleArrays(SMBPalette *self)

{
  ushort uVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;

  uVar6 = 0;
  if (*(short *)(self + 0x3ec8) != 0) {
    do {
      lVar5 = (uVar6 & 0xffff) * 0xb68;
      lVar3 = lVar5 + *(long *)(self + 0x3ed8);
      if (*(long **)(lVar3 + 0x140) != (long *)0x0) {
        (**(code **)(**(long **)(lVar3 + 0x140) + 8))();
        lVar3 = lVar5 + *(long *)(self + 0x3ed8);
      }
      if (*(long **)(lVar3 + 0x260) != (long *)0x0) {
        (**(code **)(**(long **)(lVar3 + 0x260) + 8))();
        lVar3 = lVar5 + *(long *)(self + 0x3ed8);
      }
      if (*(long **)(lVar3 + 0x380) != (long *)0x0) {
        (**(code **)(**(long **)(lVar3 + 0x380) + 8))();
        lVar3 = lVar5 + *(long *)(self + 0x3ed8);
      }
      if (*(long **)(lVar3 + 0x4a0) != (long *)0x0) {
        (**(code **)(**(long **)(lVar3 + 0x4a0) + 8))();
        lVar3 = lVar5 + *(long *)(self + 0x3ed8);
      }
      if (*(long **)(lVar3 + 0x5c0) != (long *)0x0) {
        (**(code **)(**(long **)(lVar3 + 0x5c0) + 8))();
        lVar3 = lVar5 + *(long *)(self + 0x3ed8);
      }
      if (*(long **)(lVar3 + 0x6e0) != (long *)0x0) {
        (**(code **)(**(long **)(lVar3 + 0x6e0) + 8))();
        lVar3 = lVar5 + *(long *)(self + 0x3ed8);
      }
      if (*(long **)(lVar3 + 0x800) != (long *)0x0) {
        (**(code **)(**(long **)(lVar3 + 0x800) + 8))();
        lVar3 = lVar5 + *(long *)(self + 0x3ed8);
      }
      if (*(long **)(lVar3 + 0x920) != (long *)0x0) {
        (**(code **)(**(long **)(lVar3 + 0x920) + 8))();
        lVar3 = lVar5 + *(long *)(self + 0x3ed8);
      }
      if (*(long **)(lVar3 + 0xa40) != (long *)0x0) {
        (**(code **)(**(long **)(lVar3 + 0xa40) + 8))();
        lVar3 = lVar5 + *(long *)(self + 0x3ed8);
      }
      if (*(long **)(lVar3 + 0xb60) != (long *)0x0) {
        (**(code **)(**(long **)(lVar3 + 0xb60) + 8))();
      }
      uVar7 = (int)uVar6 + 1;
      uVar6 = (ulong)uVar7;
    } while ((int)uVar7 < (int)(uint) * (ushort *)(self + 0x3ec8));
  }
  uVar7 = (uint) * (ushort *)(self + 0x4230);
  uVar6 = 0;
  if (*(ushort *)(self + 0x4230) != 0) {
    do {
      plVar2 = *(long **)((uVar6 & 0xffff) * 0x10 + *(long *)(self + 0x4240));
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
        uVar7 = (uint) * (ushort *)(self + 0x4230);
      }
      uVar4 = (int)uVar6 + 1;
      uVar6 = (ulong)uVar4;
    } while ((int)uVar4 < (int)uVar7);
  }
  *(uint16_t *)(self + 0x4230) = 0;
  if ((*(int *)(self + 0x4238) == 1) && (uVar1 = *(ushort *)(self + 0x4232), uVar1 != 0)) {
    lVar3 = 0;
    do {
      *(uint16_t *)(*(long *)(self + 0x4248) + lVar3) = 0xffff;
      lVar3 = lVar3 + 2;
    } while (lVar3 != (ulong)(uVar1 - 1 & 0xffff) * 2 + 2);
  }
  *(uint16_t *)(self + 0x3ec8) = 0;
  if ((*(int *)(self + 0x3ed0) == 1) && (uVar1 = *(ushort *)(self + 0x3eca), uVar1 != 0)) {
    lVar3 = 0;
    do {
      *(uint16_t *)(*(long *)(self + 0x3ee0) + lVar3) = 0xffff;
      lVar3 = lVar3 + 2;
    } while (lVar3 != (ulong)(uVar1 - 1 & 0xffff) * 2 + 2);
  }
  *(uint16_t *)(self + 0x4120) = 0;
  if ((*(int *)(self + 0x4128) == 1) && (uVar1 = *(ushort *)(self + 0x4122), uVar1 != 0)) {
    lVar3 = 0;
    do {
      *(uint16_t *)(*(long *)(self + 0x4138) + lVar3) = 0xffff;
      lVar3 = lVar3 + 2;
    } while (lVar3 != (ulong)(uVar1 - 1 & 0xffff) * 2 + 2);
  }
  *(uint16_t *)(self + 0x40d0) = 0;
  if ((*(int *)(self + 0x40d8) == 1) && (uVar1 = *(ushort *)(self + 0x40d2), uVar1 != 0)) {
    lVar3 = 0;
    do {
      *(uint16_t *)(*(long *)(self + 0x40e8) + lVar3) = 0xffff;
      lVar3 = lVar3 + 2;
    } while (lVar3 != (ulong)(uVar1 - 1 & 0xffff) * 2 + 2);
  }
  *(uint16_t *)(self + 0x4170) = 0;
  if ((*(int *)(self + 0x4178) == 1) && (uVar1 = *(ushort *)(self + 0x4172), uVar1 != 0)) {
    lVar3 = 0;
    do {
      *(uint16_t *)(*(long *)(self + 0x4188) + lVar3) = 0xffff;
      lVar3 = lVar3 + 2;
    } while (lVar3 != (ulong)(uVar1 - 1 & 0xffff) * 2 + 2);
  }
  *(uint16_t *)(self + 0x3fb8) = 0;
  if ((*(int *)(self + 0x3fc0) == 1) && (uVar1 = *(ushort *)(self + 0x3fba), uVar1 != 0)) {
    lVar3 = 0;
    do {
      *(uint16_t *)(*(long *)(self + 0x3fd0) + lVar3) = 0xffff;
      lVar3 = lVar3 + 2;
    } while (lVar3 != (ulong)(uVar1 - 1 & 0xffff) * 2 + 2);
  }
  *(uint16_t *)(self + 0x4008) = 0;
  if ((*(int *)(self + 0x4010) == 1) && (uVar1 = *(ushort *)(self + 0x400a), uVar1 != 0)) {
    lVar3 = 0;
    do {
      *(uint16_t *)(*(long *)(self + 0x4020) + lVar3) = 0xffff;
      lVar3 = lVar3 + 2;
    } while (lVar3 != (ulong)(uVar1 - 1 & 0xffff) * 2 + 2);
  }
  *(uint16_t *)(self + 0x4058) = 0;
  if ((*(int *)(self + 0x4060) == 1) && (uVar1 = *(ushort *)(self + 0x405a), uVar1 != 0)) {
    lVar3 = 0;
    do {
      *(uint16_t *)(*(long *)(self + 0x4070) + lVar3) = 0xffff;
      lVar3 = lVar3 + 2;
    } while (lVar3 != (ulong)(uVar1 - 1 & 0xffff) * 2 + 2);
  }
  *(uint16_t *)(self + 0x3f18) = 0;
  if ((*(int *)(self + 0x3f20) == 1) && (uVar1 = *(ushort *)(self + 0x3f1a), uVar1 != 0)) {
    lVar3 = 0;
    do {
      *(uint16_t *)(*(long *)(self + 0x3f30) + lVar3) = 0xffff;
      lVar3 = lVar3 + 2;
    } while (lVar3 != (ulong)(uVar1 - 1 & 0xffff) * 2 + 2);
  }
  *(uint16_t *)(self + 0x41c0) = 0;
  if ((*(int *)(self + 0x41c8) == 1) && (uVar1 = *(ushort *)(self + 0x41c2), uVar1 != 0)) {
    lVar3 = 0;
    do {
      *(uint16_t *)(*(long *)(self + 0x41d8) + lVar3) = 0xffff;
      lVar3 = lVar3 + 2;
    } while (lVar3 != (ulong)(uVar1 - 1 & 0xffff) * 2 + 2);
  }
  *(uint16_t *)(self + 0x2aa8) = 0;
  if ((*(int *)(self + 0x2ab0) == 1) && (uVar1 = *(ushort *)(self + 0x2aaa), uVar1 != 0)) {
    lVar3 = 0;
    do {
      *(uint16_t *)(*(long *)(self + 0x2ac0) + lVar3) = 0xffff;
      lVar3 = lVar3 + 2;
    } while (lVar3 != (ulong)(uVar1 - 1 & 0xffff) * 2 + 2);
  }
  *(uint16_t *)(self + 0x3158) = 0;
  if ((*(int *)(self + 0x3160) == 1) && (uVar1 = *(ushort *)(self + 0x315a), uVar1 != 0)) {
    lVar3 = 0;
    do {
      *(uint16_t *)(*(long *)(self + 0x3170) + lVar3) = 0xffff;
      lVar3 = lVar3 + 2;
    } while (lVar3 != (ulong)(uVar1 - 1 & 0xffff) * 2 + 2);
  }
  *(uint16_t *)(self + 0x31a8) = 0;
  if ((*(int *)(self + 0x31b0) == 1) && (uVar1 = *(ushort *)(self + 0x31aa), uVar1 != 0)) {
    lVar3 = 0;
    do {
      *(uint16_t *)(*(long *)(self + 0x31c0) + lVar3) = 0xffff;
      lVar3 = lVar3 + 2;
    } while (lVar3 != (ulong)(uVar1 - 1 & 0xffff) * 2 + 2);
  }
  *(uint16_t *)(self + 0x3e78) = 0;
  if ((*(int *)(self + 16000) == 1) && (uVar1 = *(ushort *)(self + 0x3e7a), uVar1 != 0)) {
    lVar3 = 0;
    do {
      *(uint16_t *)(*(long *)(self + 0x3e90) + lVar3) = 0xffff;
      lVar3 = lVar3 + 2;
    } while (lVar3 != (ulong)(uVar1 - 1 & 0xffff) * 2 + 2);
  }
  *(uint16_t *)(self + 0x40d0) = 0;
  if ((*(int *)(self + 0x40d8) == 1) && (uVar1 = *(ushort *)(self + 0x40d2), uVar1 != 0)) {
    lVar3 = 0;
    do {
      *(uint16_t *)(*(long *)(self + 0x40e8) + lVar3) = 0xffff;
      lVar3 = lVar3 + 2;
    } while (lVar3 != (ulong)(uVar1 - 1 & 0xffff) * 2 + 2);
    return;
  }
  return;
}

/* ======================================================================
 * SMBPalette__IsBossPosID  (Ghidra `IsBossPosID` @ 004e56c0)
 * Signature: uint8_t __thiscall IsBossPosID(SMBPalette * self, int arg1)
 * Class: SMBPalette
 * Calls: (none)
 * Called by: (none)
 */
/* SMBPalette__IsBossPosID(int) */

int __thiscall SMBPalette__IsBossPosID(SMBPalette *self, int arg1)

{
  int iVar1;
  int iVar2;
  bool bVar3;

  iVar1 = *(int *)(self + 0x4080);
  iVar2 = iVar1;
  if ((iVar1 != -1) && (iVar2 = 0, iVar1 != arg1)) {
    iVar2 = *(int *)(self + 0x4084);
    if ((iVar2 != -1) && (bVar3 = iVar2 != arg1, iVar2 = 1, bVar3)) {
      iVar2 = *(int *)(self + 0x4088);
      if ((iVar2 != -1) && (bVar3 = iVar2 != arg1, iVar2 = 2, bVar3)) {
        iVar2 = *(int *)(self + 0x408c);
        if ((iVar2 != -1) && (bVar3 = iVar2 != arg1, iVar2 = 3, bVar3)) {
          iVar2 = *(int *)(self + 0x4090);
          if ((iVar2 != -1) && (bVar3 = iVar2 != arg1, iVar2 = 4, bVar3)) {
            iVar2 = *(int *)(self + 0x4094);
            if ((iVar2 != -1) && (bVar3 = iVar2 != arg1, iVar2 = 5, bVar3)) {
              iVar2 = *(int *)(self + 0x4098);
              if ((iVar2 != -1) && (bVar3 = iVar2 != arg1, iVar2 = 6, bVar3)) {
                iVar2 = *(int *)(self + 0x409c);
                if ((iVar2 != -1) && (bVar3 = iVar2 != arg1, iVar2 = 7, bVar3)) {
                  iVar2 = *(int *)(self + 0x40a0);
                  if ((iVar2 != -1) && (bVar3 = iVar2 != arg1, iVar2 = 8, bVar3)) {
                    iVar2 = *(int *)(self + 0x40a4);
                    if ((iVar2 != -1) && (bVar3 = iVar2 != arg1, iVar2 = 9, bVar3)) {
                      iVar2 = -1;
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
  return iVar2;
}

/* ======================================================================
 * SMBPalette__ActivateEnd  (Ghidra `ActivateEnd` @ 004e57c0)
 * Signature: uint8_t __thiscall ActivateEnd(SMBPalette * self, int arg1)
 * Class: SMBPalette
 * Calls: `DrFetusCaptureFinished`, `FlashLibraryInstance__Reset`, `GMeatHUD__FreezeTimer`, `GSuperMeatBoy__BeatLevel`, `GetRandomINT`, `Vector2__operator_assign`, `Vector2__operator_mul__005be200`
 * Called by: `MeatBoyCharactor__ProcessReplayFrame`
 */
/* SMBPalette__ActivateEnd(int) */

void __thiscall SMBPalette__ActivateEnd(SMBPalette *self, int arg1)

{
  long lVar1;
  long lVar2;
  GSuperMeatBoy *this_00;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  long lVar6;
  code *local_68;
  uint64_t local_60;
  uint64_t local_58;
  uint32_t local_50;
  uint64_t local_48;
  uint32_t local_38;
  uint32_t local_34;
  Vector2 local_28[24];

  if (arg1 == -1) {
    arg1 = *(int *)(self + 0x4258);
  }
  local_38 = 0x3f800000;
  local_34 = 0x3f800000;
  bVar3 = *(byte *)(*(long *)(self + ((long)arg1 + 0x16) * 0x10 + 8) + 0x21) >> 2;
  bVar4 = bVar3 & 3;
  if (bVar4 != 1) {
    if (bVar4 == 2) {
      local_34 = 0xbf800000;
      goto LAB_004e5816;
    }
    if ((bVar3 & 3) == 0)
      goto LAB_004e5816;
    local_34 = 0xbf800000;
  }
  local_38 = 0xbf800000;
LAB_004e5816:
  lVar6 = (long)arg1 + 0x16;
  uVar5 = GetRandomINT(0, *(ushort *)(self + 0xd0) - 1);
  lVar1 = *(long *)(*(long *)(self + 0xe0) + (ulong)uVar5 * 8);
  *(long *)(self + 0xf8) = lVar1;
  lVar2 = *(long *)(self + lVar6 * 0x10 + 8);
  *(uint32_t *)(lVar1 + 0x30) = *(uint32_t *)(lVar2 + 0x24);
  *(uint32_t *)(lVar1 + 0x34) = *(uint32_t *)(lVar2 + 0x28);
  *(uint32_t *)(lVar1 + 0x38) = *(uint32_t *)(lVar2 + 0x2c);
  *(uint32_t *)(lVar1 + 0x3c) = *(uint32_t *)(lVar2 + 0x30);
  Vector2__operator_mul__005be200(local_28, (Vector2 *)(*(long *)(self + lVar6 * 0x10 + 8) + 0x34));
  Vector2__operator_assign((Vector2 *)(*(long *)(self + 0xf8) + 0x40), local_28);
  *(uint32_t *)(*(long *)(self + 0xf8) + 0x48) =
      *(uint32_t *)(*(long *)(self + lVar6 * 0x10 + 8) + 0x3c);
  *(uint32_t *)(*(long *)(self + 0xf8) + 0x4c) =
      *(uint32_t *)(*(long *)(self + lVar6 * 0x10 + 8) + 0x3c);
  FlashLibraryInstance__Reset(*(FlashLibraryInstance **)(self + 0xf8));
  local_58 = *(uint64_t *)(self + 0xf8);
  local_60 = 0;
  local_50 = 0;
  local_48 = 0;
  local_68 = DrFetusCaptureFinished;
  AnimationManager__AddAnimationCallback((AnimationFinishedCallback *)&local_68);
  this_00 = SuperMeatBoy;
  *(uint32_t *)(self + 0x1a80) = 1;
  if (*(int *)(this_00 + 0x3a4) != 1) {
    GSuperMeatBoy__BeatLevel(this_00, 0);
    return;
  }
  GMeatHUD__FreezeTimer(SMBHUD, 1);
  GSuperMeatBoy__BeatLevel(SuperMeatBoy, 0);
  return;
}

/* ======================================================================
 * SMBPalette__GetCollisionMask  (Ghidra `GetCollisionMask` @ 004e59c0)
 * Signature: uint8_t __thiscall GetCollisionMask(SMBPalette * self, GRIDBLOCK * arg1, Vector2 * arg2)
 * Class: SMBPalette
 * Calls: `GetHalfTileOrientation`, `GetTriangleOrientation`, `TileLevel__GetGridBlock`, `TileLevel__GetGridIndex__0058dd90`, `Vector2__operator_assign`, `Vector2__operator_plus__005be140`
 * Called by: (none)
 */
/* SMBPalette__GetCollisionMask(GRIDBLOCK const&, Vector2 const&) */

byte __thiscall SMBPalette__GetCollisionMask(SMBPalette *self, GRIDBLOCK *arg1, Vector2 *arg2)

{
  GRIDBLOCK GVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint32_t *puVar8;
  bool bVar9;
  bool bVar10;
  int local_10c;
  Vector2 local_108[16];
  Vector2 local_f8[16];
  uint32_t local_e8;
  uint local_e4;
  uint32_t local_d8;
  uint local_d4;
  Vector2 local_c8[16];
  uint local_b8;
  uint32_t local_b4;
  Vector2 local_a8[16];
  uint local_98;
  uint32_t local_94;
  Vector2 local_88[16];
  uint32_t local_78;
  uint32_t local_68;
  uint32_t local_58;
  uint32_t local_48;
  int local_40;
  int local_3c[3];

  bVar2 = (byte)arg1[2] & 0xc;
  if (bVar2 == 8) {
    GetTriangleOrientation(arg1, arg2);
    bVar2 = (byte)arg1[2] & 0xc;
  }
  uVar4 = 5;
  if (bVar2 == 4) {
    uVar4 = GetHalfTileOrientation(arg1, arg2);
  }
  local_e8 = 0;
  local_e4 = TileLevel__fLevelGridWH;
  Vector2__operator_plus__005be140(local_f8, arg2);
  TileLevel__GetGridIndex__0058dd90(*(TileLevel **)(SuperMeatBoy + 0x40), local_f8, local_108,
                                    &local_40, local_3c);
  puVar8 = (uint32_t *)TileLevel__GetGridBlock(*(TileLevel **)(SuperMeatBoy + 0x40), local_40,
                                               local_3c[0], 0);
  local_78 = *puVar8;
  bVar2 = (byte)((uint)local_78 >> 0x10) & 0xc;
  if (bVar2 == 8) {
    GetTriangleOrientation((GRIDBLOCK *)&local_78, local_108);
    bVar2 = local_78._2_1_ & 0xc;
  }
  iVar5 = 5;
  if (bVar2 == 4) {
    iVar5 = GetHalfTileOrientation((GRIDBLOCK *)&local_78, local_108);
  }
  uVar7 = DAT_005be6f0 /* R:u32=2147483648 */;
  bVar2 = 2;
  if (local_78._0_1_ != (GRIDBLOCK)0x0) {
    bVar2 = ((local_78._2_1_ & 0xc) == 0xc) * '\x02';
  }
  local_d4 = TileLevel__fLevelGridWH ^ DAT_005be6f0 /* R:u32=2147483648 */;
  local_d8 = 0;
  Vector2__operator_plus__005be140(local_c8, arg2);
  Vector2__operator_assign(local_f8, local_c8);
  TileLevel__GetGridIndex__0058dd90(*(TileLevel **)(SuperMeatBoy + 0x40), local_f8, local_108,
                                    &local_40, local_3c);
  puVar8 = (uint32_t *)TileLevel__GetGridBlock(*(TileLevel **)(SuperMeatBoy + 0x40), local_40,
                                               local_3c[0], 0);
  local_68 = *puVar8;
  bVar3 = (byte)((uint)local_68 >> 0x10) & 0xc;
  if (bVar3 == 8) {
    GetTriangleOrientation((GRIDBLOCK *)&local_68, local_108);
    bVar3 = local_68._2_1_ & 0xc;
  }
  local_10c = 5;
  if (bVar3 == 4) {
    local_10c = GetHalfTileOrientation((GRIDBLOCK *)&local_68, local_108);
  }
  if ((local_68._0_1_ == (GRIDBLOCK)0x0) || ((local_68._2_1_ & 0xc) == 0xc)) {
    bVar2 = bVar2 | 1;
  }
  local_b8 = TileLevel__fLevelGridWH ^ uVar7;
  local_b4 = 0;
  Vector2__operator_plus__005be140(local_a8, arg2);
  Vector2__operator_assign(local_f8, local_a8);
  TileLevel__GetGridIndex__0058dd90(*(TileLevel **)(SuperMeatBoy + 0x40), local_f8, local_108,
                                    &local_40, local_3c);
  puVar8 = (uint32_t *)TileLevel__GetGridBlock(*(TileLevel **)(SuperMeatBoy + 0x40), local_40,
                                               local_3c[0], 0);
  local_58 = *puVar8;
  bVar3 = (byte)((uint)local_58 >> 0x10) & 0xc;
  if (bVar3 == 8) {
    GetTriangleOrientation((GRIDBLOCK *)&local_58, local_108);
    bVar3 = local_58._2_1_ & 0xc;
  }
  uVar7 = 5;
  if (bVar3 == 4) {
    uVar7 = GetHalfTileOrientation((GRIDBLOCK *)&local_58, local_108);
  }
  if ((local_58._0_1_ == (GRIDBLOCK)0x0) || ((local_58._2_1_ & 0xc) == 0xc)) {
    bVar2 = bVar2 | 8;
  }
  local_94 = 0;
  local_98 = TileLevel__fLevelGridWH;
  Vector2__operator_plus__005be140(local_88, arg2);
  Vector2__operator_assign(local_f8, local_88);
  TileLevel__GetGridIndex__0058dd90(*(TileLevel **)(SuperMeatBoy + 0x40), local_f8, local_108,
                                    &local_40, local_3c);
  puVar8 = (uint32_t *)TileLevel__GetGridBlock(*(TileLevel **)(SuperMeatBoy + 0x40), local_40,
                                               local_3c[0], 0);
  local_48 = *puVar8;
  bVar3 = (byte)((uint)local_48 >> 0x10) & 0xc;
  if (bVar3 == 8) {
    GetTriangleOrientation((GRIDBLOCK *)&local_48, local_108);
    bVar3 = local_48._2_1_ & 0xc;
  }
  uVar6 = 5;
  if (bVar3 == 4) {
    uVar6 = GetHalfTileOrientation((GRIDBLOCK *)&local_48, local_108);
  }
  if ((local_48._0_1_ == (GRIDBLOCK)0x0) || ((local_48._2_1_ & 0xc) == 0xc)) {
    GVar1 = arg1[2];
    bVar2 = bVar2 | 4;
  } else {
    GVar1 = arg1[2];
  }
  bVar3 = (byte)GVar1 & 0xc;
  if (bVar3 == 8) {
    if ((local_78._2_1_ & 0xc) == 8) {
      if ((bVar2 & 8) != 0) {
        bVar2 = bVar2 | 0x20;
      }
      if ((bVar2 & 4) != 0) {
        bVar2 = bVar2 | 0x10;
      }
    }
  } else if (bVar3 == 4) {
    if (((iVar5 == 0) && ((local_78._2_1_ & 0xc) == 4)) && (uVar4 == 1)) {
      bVar2 = bVar2 | 2;
    }
    if (((local_10c == 1) && ((local_68._2_1_ & 0xc) == 4)) && (uVar4 == 0)) {
      bVar2 = bVar2 | 1;
    }
    bVar9 = (local_58._2_1_ & 0xc) == 4;
    if (((uVar7 == 2) && (bVar9)) && (uVar4 == 3)) {
      bVar2 = bVar2 | 8;
    }
    bVar10 = (local_48._2_1_ & 0xc) == 4;
    if (((uVar6 == 3) && (bVar10)) && (uVar4 == 2)) {
      bVar2 = bVar2 | 4;
    }
    if ((uVar4 != uVar6) && (bVar10)) {
      bVar2 = bVar2 | 4;
    }
    if ((uVar4 != uVar7) && (bVar9)) {
      bVar2 = bVar2 | 8;
    }
  } else if (bVar3 == 0) {
    if ((uVar6 < 2) && ((local_48._2_1_ & 0xc) == 4)) {
      bVar2 = bVar2 | 4;
    }
    if ((uVar7 < 2) && ((local_58._2_1_ & 0xc) == 4)) {
      bVar2 = bVar2 | 8;
    }
    if (((local_68._2_1_ & 0xc) == 4) && (local_10c - 2U < 2)) {
      bVar2 = bVar2 | 1;
    }
    if (((local_78._2_1_ & 0xc) == 4) && (iVar5 - 2U < 2)) {
      bVar2 = bVar2 | 2;
    }
  }
  return bVar2;
}

/* ======================================================================
 * SMBPalette__MarkCollisionOnBlock  (Ghidra `MarkCollisionOnBlock` @ 004e60a0)
 * Signature: uint8_t __thiscall MarkCollisionOnBlock(SMBPalette * self, GRIDBLOCK * arg1, int arg2, int arg3)
 * Class: SMBPalette
 * Calls: `GetHalfTileOrientation`, `GetTriangleOrientation`, `SMBPalette__MarkCollisionOnBlock__004f23d0`, `TileLevel__GetGridPos`
 * Called by: (none)
 */
/* SMBPalette__MarkCollisionOnBlock__004f23d0(GRIDBLOCK&, int, int) [clone .part.77] */

void __thiscall SMBPalette__MarkCollisionOnBlock__004f23d0(SMBPalette *self, GRIDBLOCK *arg1,
                                                           int arg2, int arg3)

{
  GRIDBLOCK GVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  Vector2 aVStack_28[24];

  GVar1 = *arg1;
  if (((((uint)(byte)GVar1 == *(uint *)(pPalProps + 4)) ||
        ((uint)(byte)GVar1 == *(uint *)(pPalProps + 0xc))) ||
       ((uint)(byte)GVar1 == *(uint *)(pPalProps + 0x28))) ||
      ((uint)(byte)GVar1 == *(uint *)(pPalProps + 0x50))) {
    arg1[1] = (GRIDBLOCK)((byte)arg1[1] & 0xf0 | (byte) * (uint32_t *)(self + 0x4278) & 0xf);
  } else {
    arg1[1] = (GRIDBLOCK)((byte)arg1[1] & 0xf0);
  }
  TileLevel__GetGridPos(*(TileLevel **)(SuperMeatBoy + 0x40), arg2, arg3, aVStack_28);
  uVar3 = GetCollisionMask(self, arg1, aVStack_28);
  uVar3 = uVar3 & 0xffff03ff;
  uVar4 = *(ushort *)(arg1 + 2) & 0x3f | uVar3 << 6;
  uVar2 = (ushort)uVar4;
  *(ushort *)(arg1 + 2) = uVar2;
  bVar6 = (byte)uVar4 & 0xc;
  if ((bVar6 != 0xc) && (bVar6 != 8)) {
    if (bVar6 != 4) {
      return;
    }
    iVar5 = GetHalfTileOrientation(arg1, aVStack_28);
    *(ushort *)(arg1 + 2) = *(ushort *)(arg1 + 2) & 0x3f | (ushort)((uVar3 | iVar5 << 8) << 6);
    return;
  }
  uVar4 = 0x500;
  if (bVar6 == 8) {
    iVar5 = GetTriangleOrientation(arg1, aVStack_28);
    uVar2 = *(ushort *)(arg1 + 2);
    uVar4 = iVar5 << 8;
  }
  *(ushort *)(arg1 + 2) = uVar2 & 0x3f | (ushort)((uVar3 | uVar4) << 6);
  return;
}

/* ======================================================================
 * SMBPalette__CollisionResponse  (Ghidra `CollisionResponse` @ 004e61c0)
 * Signature: uint8_t __thiscall CollisionResponse(SMBPalette * self, GRIDBLOCK * arg1, Vector2 * arg2, Vector2 * arg3, Vector2 * arg4, SceneObject2D * arg5, Vector2 * arg6, tagTileCollisionType arg7, int arg8)
 * Class: SMBPalette
 * Calls: `SMBPalette__CollisionResponse__004e61d0`
 * Called by: (none)
 */
/* non-virtual thunk to SMBPalette__CollisionResponse__004e61d0(GRIDBLOCK&, Vector2&, Vector2 const&,
   Vector2&, SceneObject2D*, Vector2 const&, tagTileCollisionType, int) */

void __thiscall SMBPalette__CollisionResponse__004e61d0(SMBPalette *self)

{
  CollisionResponse(self + -0x10);
  return;
}

/* ======================================================================
 * SMBPalette__CollisionResponse__004e61d0  (Ghidra `CollisionResponse` @ 004e61d0)
 * Signature: uint8_t __thiscall CollisionResponse(SMBPalette * self, GRIDBLOCK * arg1, Vector2 * arg2, Vector2 * arg3, Vector2 * arg4, SceneObject2D * arg5, Vector2 * arg6, tagTileCollisionType arg7, int arg8)
 * Class: SMBPalette
 * Calls: `AutoLockSection__AutoLockSection`, `AutoLockSection__AutoLockSection__005b59d0`, `TileLevel__GetGridBlock`, `TileLevel__GetGridCoordsFromBlock`, `Vector2__operator_assign`, `Vector2__operator_minus_assign`, `Vector2__operator_mul__005be200`, `Vector2__operator_plus__005be140`, `Vector2__operator_plus_assign`
 * Called by: `SMBPalette__CollisionResponse`
 */
/* SMBPalette__CollisionResponse__004e61d0(GRIDBLOCK&, Vector2&, Vector2 const&, Vector2&, SceneObject2D*,
   Vector2 const&, tagTileCollisionType, int) */

int __thiscall SMBPalette__CollisionResponse__004e61d0(SMBPalette *self, GRIDBLOCK *arg1,
                                                       Vector2 *arg2, float *arg3, Vector2 *arg4,
                                                       long arg5, Vector2 *arg6, uint arg8,
                                                       int arg9)

{
  GRIDBLOCK GVar1;
  int iVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  uint32_t uVar5;
  uint32_t uVar6;
  uint64_t *puVar7;
  uint32_t *puVar8;
  byte *pbVar9;
  bool bVar10;
  int *piVar11;
  float fVar12;
  long lVar13;
  byte bVar14;
  ushort uVar15;
  uint uVar16;
  uint32_t *puVar17;
  uint32_t *puVar18;
  uint32_t *puVar19;
  uint32_t *puVar20;
  SMBPalette *pSVar21;
  long lVar22;
  byte *pbVar23;
  ushort uVar24;
  long *plVar25;
  int iVar26;
  uint64_t *puVar27;
  int *piVar28;
  int iVar29;
  int *piVar30;
  Vector2 *pVVar31;
  short sVar32;
  long lVar33;
  bool bVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float local_618;
  Matrix4x4 local_598[64];
  Matrix4x4 local_558[64];
  AutoLockSection local_518[16];
  uint32_t local_508;
  uint32_t local_504;
  uint32_t local_4f8;
  uint32_t local_4f4;
  uint32_t local_4e8;
  uint32_t local_4e4;
  float local_4d8;
  uint32_t local_4d4;
  uint32_t local_4c8;
  uint32_t local_4c4;
  uint32_t local_4b8;
  uint32_t local_4b4;
  uint32_t local_4a8;
  uint32_t local_4a4;
  uint32_t local_498;
  float local_494;
  uint32_t local_488;
  uint32_t local_484;
  uint32_t local_478;
  float local_474;
  uint32_t local_468;
  uint32_t local_464;
  float local_458;
  float local_454;
  uint32_t local_448;
  float local_444;
  uint32_t local_438;
  uint32_t local_434;
  uint32_t local_428;
  float local_424;
  uint32_t local_418;
  uint32_t local_414;
  uint32_t local_408;
  uint32_t local_404;
  uint32_t local_3f8;
  uint32_t local_3f4;
  uint32_t local_3e8;
  uint32_t local_3e4;
  uint32_t local_3d8;
  uint32_t local_3d4;
  float local_3c8;
  uint32_t local_3c4;
  uint32_t local_3b8;
  uint32_t local_3b4;
  float local_3a8;
  uint32_t local_3a4;
  uint32_t local_398;
  uint32_t local_394;
  uint32_t local_388;
  uint32_t local_384;
  uint32_t local_378;
  uint32_t local_374;
  uint32_t local_368;
  uint32_t local_364;
  uint32_t local_358;
  uint32_t local_354;
  float local_348;
  float local_344;
  uint32_t local_338;
  uint32_t local_334;
  float local_328;
  float local_324;
  uint32_t local_318;
  uint32_t local_314;
  uint32_t local_308;
  uint32_t local_304;
  uint local_2f8;
  float local_2f4;
  float local_2e8;
  float local_2e4;
  uint32_t local_2d8;
  uint32_t local_2d4;
  uint32_t local_2c8;
  uint32_t local_2c4;
  float local_2b8;
  float local_2b4;
  float local_2a8;
  uint local_2a4;
  uint32_t local_298;
  uint32_t local_294;
  uint32_t local_288;
  uint32_t local_284;
  uint32_t local_278;
  uint32_t local_274;
  uint32_t local_268;
  uint32_t local_264;
  float local_258;
  uint32_t local_254;
  uint32_t local_248;
  uint32_t local_244;
  float local_238;
  float local_234;
  uint local_228;
  float local_224;
  uint32_t local_218;
  uint32_t local_214;
  uint32_t local_208;
  uint32_t local_204;
  float local_1f8;
  float local_1f4;
  uint local_1e8;
  uint local_1e4;
  uint32_t local_1d8;
  uint32_t local_1d4;
  uint32_t local_1c8;
  uint32_t local_1c4;
  float local_1b8;
  uint32_t local_1b4;
  uint32_t local_1a8;
  uint32_t local_1a4;
  uint32_t local_198;
  float local_194;
  uint32_t local_188;
  uint32_t local_184;
  float local_178;
  float local_174;
  float local_168;
  uint local_164;
  uint32_t local_158;
  float local_154;
  uint32_t local_148;
  uint32_t local_144;
  uint local_138;
  float local_134;
  uint local_128;
  uint local_124;
  uint32_t local_118;
  float local_114;
  uint32_t local_108;
  uint32_t local_104;
  uint32_t local_f8;
  uint32_t local_f4;
  uint32_t local_e8;
  uint32_t local_e4;
  float local_d8;
  float local_d4;
  uint local_c8;
  float local_c4;
  uint32_t local_b8;
  uint32_t local_b4;
  uint32_t local_a8;
  uint32_t local_a4;
  uint local_98;
  float local_94;
  float local_88;
  float local_84;
  uint32_t local_78;
  uint32_t local_74;
  uint32_t local_68;
  uint32_t local_64;
  Vector2 local_58[16];
  float local_48[3];
  int local_3c[3];

  if ((*arg1 == (GRIDBLOCK)0x0) && (((byte)arg1[1] & 0xf) != *(uint *)(self + 0x4278))) {
    return 0;
  }
  if (((byte)arg1[2] & 0xc) == 0xc) {
    return 0;
  }
  iVar2 = *(int *)arg1;
  iVar29 = *(int *)(self + 0x1a70);
  if (((byte)arg1[1] & 0xf) == *(uint *)(self + 0x4278)) {
    if (iVar29 == -1)
      goto LAB_004e626f;
    if (iVar29 == *(int *)(self + 0x1a74))
      goto LAB_004e6263;
    lVar33 = (long)iVar29 * 0x50;
    if (*(ushort *)(self + lVar33 + 0x31f8) != 0) {
      plVar25 = *(long **)(self + lVar33 + 0x3208);
      if (arg1 == (GRIDBLOCK *)*plVar25) {
        lVar22 = 0;
      } else {
        lVar13 = 0x10;
        do {
          lVar22 = lVar13;
          plVar25 = plVar25 + 2;
          if (lVar22 == ((ulong)(*(ushort *)(self + lVar33 + 0x31f8) - 1 & 0xffff) + 1) * 0x10)
            goto LAB_004e6450;
          lVar13 = lVar22 + 0x10;
        } while (arg1 != (GRIDBLOCK *)*plVar25);
      }
      if (((int)plVar25[1] == 0) || ((int)plVar25[1] == 1)) {
        *arg1 = (GRIDBLOCK)0x1;
        iVar29 = *(int *)(self + 0x1a70);
        iVar26 = *(int *)(lVar22 + *(long *)(self + (long)iVar29 * 0x50 + 0x3208) + 8);
        if (iVar26 == 0) {
          *(uint32_t *)(lVar22 + *(long *)(self + (long)iVar29 * 0x50 + 0x3208) + 8) = 1;
          iVar29 = *(int *)(self + 0x1a70);
          goto LAB_004e625e;
        }
      } else {
        iVar26 = *(int *)(*(long *)(self + lVar33 + 0x3208) + 8 + lVar22);
      }
      if (iVar26 == 4) {
        *(int *)arg1 = iVar2;
        return 0;
      }
      goto LAB_004e625e;
    }
  LAB_004e6450:
    AutoLockSection__AutoLockSection(local_518,
                                     (CriticalSection *)TileLevelLightMap__ShadowMapSection);
    /* try { // try from 004e6480 to 004e6683 has its CatchHandler @ 004e8971 */
    TileLevel__GetGridCoordsFromBlock(*(TileLevel **)(SuperMeatBoy + 0x40), arg1, (int *)local_48,
                                      local_3c);
    puVar17 = (uint32_t *)TileLevel__GetGridBlock(*(TileLevel **)(SuperMeatBoy + 0x40), local_48[0],
                                                  local_3c[0] + 1, 0);
    puVar18 = (uint32_t *)TileLevel__GetGridBlock(*(TileLevel **)(SuperMeatBoy + 0x40), local_48[0],
                                                  local_3c[0] + -1, 0);
    puVar19 = (uint32_t *)TileLevel__GetGridBlock(*(TileLevel **)(SuperMeatBoy + 0x40),
                                                  (int)local_48[0] + -1, local_3c[0], 0);
    puVar20 = (uint32_t *)TileLevel__GetGridBlock(*(TileLevel **)(SuperMeatBoy + 0x40),
                                                  (int)local_48[0] + 1, local_3c[0], 0);
    iVar29 = *(int *)(self + 0x1a70);
    uVar3 = *puVar18;
    uVar4 = *puVar17;
    uVar5 = *puVar19;
    uVar6 = *puVar20;
    pSVar21 = self + (long)iVar29 * 0x50 + 0x31d0;
    uVar24 = *(ushort *)(pSVar21 + 0x28);
    if (uVar24 != 0) {
      puVar7 = *(uint64_t **)(pSVar21 + 0x38);
      puVar27 = puVar7;
      if (puVar17 != (uint32_t *)*puVar7) {
        lVar33 = 0x10;
        do {
          if (lVar33 == ((ulong)(ushort)(uVar24 - 1) + 1) * 0x10)
            goto LAB_004e65ae;
          puVar27 = (uint64_t *)((long)puVar7 + lVar33);
          lVar33 = lVar33 + 0x10;
        } while (puVar17 != (uint32_t *)*puVar27);
      }
      *(bool *)puVar17 = *(int *)(puVar27 + 1) != 4;
      iVar29 = *(int *)(self + 0x1a70);
      pSVar21 = self + (long)iVar29 * 0x50 + 0x31d0;
      uVar24 = *(ushort *)(pSVar21 + 0x28);
      if (uVar24 != 0) {
      LAB_004e65ae:
        puVar7 = *(uint64_t **)(pSVar21 + 0x38);
        uVar15 = 0;
        lVar33 = 0x10;
        puVar8 = (uint32_t *)*puVar7;
        puVar27 = puVar7;
        while (puVar18 != puVar8) {
          uVar15 = uVar15 + 1;
          if (uVar24 <= uVar15) {
            pSVar21 = self + (long)iVar29 * 0x50 + 0x31d0;
            uVar24 = *(ushort *)(pSVar21 + 0x28);
            goto LAB_004e65f8;
          }
          puVar27 = (uint64_t *)((long)puVar7 + lVar33);
          lVar33 = lVar33 + 0x10;
          puVar8 = (uint32_t *)*puVar27;
        }
        *(bool *)puVar18 = *(int *)(puVar27 + 1) != 4;
        iVar29 = *(int *)(self + 0x1a70);
        pSVar21 = self + (long)iVar29 * 0x50 + 0x31d0;
        uVar24 = *(ushort *)(pSVar21 + 0x28);
        if (uVar24 != 0) {
        LAB_004e65f8:
          puVar7 = *(uint64_t **)(pSVar21 + 0x38);
          uVar15 = 0;
          lVar33 = 0x10;
          puVar8 = (uint32_t *)*puVar7;
          puVar27 = puVar7;
          while (puVar19 != puVar8) {
            uVar15 = uVar15 + 1;
            if (uVar24 <= uVar15) {
              pSVar21 = self + (long)iVar29 * 0x50 + 0x31d0;
              uVar24 = *(ushort *)(pSVar21 + 0x28);
              goto LAB_004e6640;
            }
            puVar27 = (uint64_t *)((long)puVar7 + lVar33);
            lVar33 = lVar33 + 0x10;
            puVar8 = (uint32_t *)*puVar27;
          }
          *(bool *)puVar19 = *(int *)(puVar27 + 1) != 4;
          pSVar21 = self + (long)*(int *)(self + 0x1a70) * 0x50 + 0x31d0;
          uVar24 = *(ushort *)(pSVar21 + 0x28);
          if (uVar24 != 0) {
          LAB_004e6640:
            puVar7 = *(uint64_t **)(pSVar21 + 0x38);
            uVar15 = 0;
            lVar33 = 0x10;
            puVar8 = (uint32_t *)*puVar7;
            puVar27 = puVar7;
            while (puVar20 != puVar8) {
              uVar15 = uVar15 + 1;
              if (uVar24 <= uVar15)
                goto LAB_004e6671;
              puVar27 = (uint64_t *)((long)puVar7 + lVar33);
              lVar33 = lVar33 + 0x10;
              puVar8 = (uint32_t *)*puVar27;
            }
            *(bool *)puVar20 = *(int *)(puVar27 + 1) != 4;
          }
        }
      }
    }
  LAB_004e6671:
    uVar16 = GetCollisionMask(self, arg1, arg6);
    *puVar17 = uVar4;
    *puVar18 = uVar3;
    *puVar19 = uVar5;
    *puVar20 = uVar6;
    AutoLockSection__AutoLockSection__005b59d0(local_518);
    fVar39 = DAT_005be6e8 /* R:0.25f */;
  } else {
  LAB_004e625e:
    if (iVar29 != -1) {
    LAB_004e6263:
      if (*(int *)(self + 0x1a74) != iVar29)
        goto LAB_004e6450;
    }
  LAB_004e626f:
    uVar16 = GetCollisionMask(self, arg1, arg6);
    fVar39 = DAT_005be6e8 /* R:0.25f */;
  }
  if (arg9 == 1) {
    uVar16 = (uint)(*(ushort *)(arg1 + 2) >> 6);
  }
  DAT_005be6e8 /* R:0.25f */ = fVar39;
  if ((arg8 & uVar16) == 0) {
    if (iVar2 == *(int *)arg1) {
      return 0;
    }
    *(int *)arg1 = iVar2;
    return 0;
  }
  local_508 = 0;
  local_504 = 0;
  lVar33 = *(long *)(arg5 + 0x48);
  if (lVar33 == 0) {
    fVar40 = *(float *)(arg5 + 0xd0);
    fVar38 = *(float *)(arg5 + 0xd4);
  } else {
    fVar40 = *(float *)(lVar33 + 0x8c);
    fVar38 = *(float *)(lVar33 + 0x90);
  }
  bVar34 = arg8 == 8;
  fVar36 = *(float *)(arg5 + 0x98);
  fVar37 = DAT_005be6e4 /* R:0.5f */ * TileLevel__fLevelGridWH;
  if (((((uVar16 & 0x20) == 0) || (bVar10 = true, !bVar34)) &&
       (((uVar16 & 0x10) == 0 || (bVar10 = true, arg8 != 4)))) &&
      (((uVar16 & 0x40) == 0 || (bVar10 = true, arg8 != 1)))) {
    bVar10 = (uVar16 & 0x80) != 0 && arg8 == 2;
  }
  bVar14 = (byte)arg1[2] & 0xc;
  if ((bVar10) || (bVar14 == 0)) {
    lVar33 = 0x2fffd0;
    sVar32 = -1;
    if ((((byte)arg1[1] & 0xf) == *(uint *)(self + 0x4278)) &&
        ((*(int *)(self + 0x1a70) == -1 || (*(int *)(self + 0x1a70) == *(int *)(self + 0x1a74))))) {
      if (*(short *)(self + 0x3e78) == 0) {
      LAB_004e69c9:
        lVar33 = 0x2fffd0;
        sVar32 = -1;
      } else {
        piVar28 = *(int **)(self + 0x3e88);
        sVar32 = 0;
        piVar11 = piVar28;
        if (arg1 == *(GRIDBLOCK **)(piVar28 + 2)) {
          lVar33 = 0;
          sVar32 = 0;
          piVar30 = piVar28;
        } else {
          do {
            piVar30 = piVar11 + 0xc;
            sVar32 = sVar32 + 1;
            if (sVar32 == *(short *)(self + 0x3e78))
              goto LAB_004e69c9;
            lVar33 = (long)piVar30 - (long)piVar28;
            plVar25 = (long *)(piVar11 + 0xe);
            piVar11 = piVar30;
          } while (arg1 != (GRIDBLOCK *)*plVar25);
        }
        iVar29 = 0;
        fVar35 = 0.0;
        if ((*piVar30 == 2) || (*piVar30 == 4))
          goto LAB_004e6736;
      }
    }
    if (bVar34) {
      local_4f8 = 0xbf800000;
      local_4f4 = 0;
      *(float *)arg2 =
          ((*(float *)arg6 - fVar37) - fVar40) - DAT_005c07b0 /* R:0.009999999776482582f */;
      Vector2__operator_assign((Vector2 *)&local_508, (Vector2 *)&local_4f8);
      local_4e4 = 0;
      local_4e8 = *(uint32_t *)arg4;
      fVar35 = (float)Vector2__Dot((Vector2 *)&local_4e8, (Vector2 *)&local_508);
      fVar36 = fVar36 + DAT_005be894 /* R:1.0f */;
    LAB_004e68d8:
      iVar29 = 1;
      fVar35 = fVar35 * (float)((uint)fVar36 ^ DAT_005be6f0 /* R:u32=2147483648 */);
      if (fVar35 <= 0.0) {
        fVar35 = 0.0;
      }
    } else {
      if (arg8 == 4) {
        local_4d4 = 0;
        *(float *)arg2 =
            fVar37 + *(float *)arg6 + DAT_005c07b0 /* R:0.009999999776482582f */ + fVar40;
        fVar39 = DAT_005be894 /* R:1.0f */;
        local_4d8 = DAT_005be894 /* R:1.0f */;
        Vector2__operator_assign((Vector2 *)&local_508, (Vector2 *)&local_4d8);
        local_4c4 = 0;
        local_4c8 = *(uint32_t *)arg4;
        fVar35 = (float)Vector2__Dot((Vector2 *)&local_4c8, (Vector2 *)&local_508);
        fVar36 = fVar36 + fVar39;
        goto LAB_004e68d8;
      }
      if (arg8 == 1) {
        local_4b8 = 0;
        local_4b4 = 0xbf800000;
        *(float *)(arg2 + 4) =
            ((*(float *)(arg6 + 4) - fVar37) - fVar38) - DAT_005c07b0 /* R:0.009999999776482582f */;
        Vector2__operator_assign((Vector2 *)&local_508, (Vector2 *)&local_4b8);
        local_4a8 = 0;
        local_4a4 = *(uint32_t *)(arg4 + 4);
        fVar35 = (float)Vector2__Dot((Vector2 *)&local_4a8, (Vector2 *)&local_508);
        fVar36 = fVar36 + DAT_005be894 /* R:1.0f */;
        goto LAB_004e68d8;
      }
      iVar29 = 0;
      fVar35 = 0.0;
      if (arg8 == 2) {
        local_498 = 0;
        iVar29 = 1;
        *(float *)(arg2 + 4) =
            fVar37 + *(float *)(arg6 + 4) + DAT_005c07b0 /* R:0.009999999776482582f */ + fVar38;
        fVar39 = DAT_005be894 /* R:1.0f */;
        local_494 = DAT_005be894 /* R:1.0f */;
        Vector2__operator_assign((Vector2 *)&local_508, (Vector2 *)&local_498);
        local_488 = 0;
        local_484 = *(uint32_t *)(arg4 + 4);
        fVar35 = (float)Vector2__Dot((Vector2 *)&local_488, (Vector2 *)&local_508);
        fVar35 = fVar35 * (float)((uint)(fVar36 + fVar39) ^ DAT_005be6f0 /* R:u32=2147483648 */);
        if (fVar35 <= 0.0) {
          fVar35 = 0.0;
        }
      }
    }
    if ((*(uint *)(self + 0x1a7c) & 1) == 0)
      goto LAB_004e6736;
    if (iVar29 == 1) {
      GVar1 = *arg1;
      if ((((((uint)(byte)GVar1 == *(uint *)(pPalProps + 4)) ||
             ((uint)(byte)GVar1 == *(uint *)(pPalProps + 0xc))) ||
            ((uint)(byte)GVar1 == *(uint *)(pPalProps + 0x28))) ||
           ((uint)(byte)GVar1 == *(uint *)(pPalProps + 0x50))) &&
          (((*(int *)(self + 0x1a70) == -1 ||
             (*(int *)(self + 0x1a70) == *(int *)(self + 0x1a74))) &&
            (sVar32 != -1)))) {
        piVar28 = (int *)(lVar33 + *(long *)(self + 0x3e88));
        uVar16 = piVar28[9];
        if (((uVar16 == *(uint *)(pPalProps + 4)) || (uVar16 == *(uint *)(pPalProps + 0x50))) &&
            (*piVar28 == 0)) {
          if (uVar16 == *(uint *)(pPalProps + 0x50)) {
            if ((*(uint *)(self + 0x1a7c) & 0x80) != 0) {
              *piVar28 = 1;
              TileLevel__GetGridCoordsFromBlock(
                  *(TileLevel **)(SuperMeatBoy + 0x40),
                  *(GRIDBLOCK **)(*(long *)(self + 0x3e88) + 8 + lVar33), local_3c,
                  (int *)local_48);
              pbVar23 = (byte *)TileLevel__GetGridBlock(*(TileLevel **)(SuperMeatBoy + 0x40),
                                                        local_3c[0], (int)local_48[0] + 1, 0);
              if (((uint)*pbVar23 == *(uint *)(pPalProps + 0x50)) &&
                  (*(ushort *)(self + 0x3e78) != 0)) {
                lVar33 = *(long *)(self + 0x3e88);
                if (pbVar23 == *(byte **)(lVar33 + 8)) {
                  uVar24 = 0;
                } else {
                  uVar24 = 0;
                  puVar27 = (uint64_t *)(lVar33 + 0x38);
                  do {
                    uVar24 = uVar24 + 1;
                    if (uVar24 == *(ushort *)(self + 0x3e78))
                      goto LAB_004e7b96;
                    pbVar9 = (byte *)*puVar27;
                    puVar27 = puVar27 + 6;
                  } while (pbVar23 != pbVar9);
                }
                piVar28 = (int *)(lVar33 + (ulong)uVar24 * 0x30);
                if (*piVar28 == 0) {
                  *piVar28 = 1;
                }
              }
            LAB_004e7b96:
              pbVar23 = (byte *)TileLevel__GetGridBlock(*(TileLevel **)(SuperMeatBoy + 0x40),
                                                        local_3c[0], (int)local_48[0] + -1, 0);
              if (((uint)*pbVar23 == *(uint *)(pPalProps + 0x50)) &&
                  (*(ushort *)(self + 0x3e78) != 0)) {
                lVar33 = *(long *)(self + 0x3e88);
                if (pbVar23 == *(byte **)(lVar33 + 8)) {
                  uVar24 = 0;
                } else {
                  uVar24 = 0;
                  puVar27 = (uint64_t *)(lVar33 + 0x38);
                  do {
                    uVar24 = uVar24 + 1;
                    if (uVar24 == *(ushort *)(self + 0x3e78))
                      goto LAB_004e7bd8;
                    pbVar9 = (byte *)*puVar27;
                    puVar27 = puVar27 + 6;
                  } while (pbVar23 != pbVar9);
                }
                piVar28 = (int *)(lVar33 + (ulong)uVar24 * 0x30);
                if (*piVar28 == 0) {
                  *piVar28 = 1;
                }
              }
            LAB_004e7bd8:
              pbVar23 = (byte *)TileLevel__GetGridBlock(*(TileLevel **)(SuperMeatBoy + 0x40),
                                                        local_3c[0] + -1, local_48[0], 0);
              if (((uint)*pbVar23 == *(uint *)(pPalProps + 0x50)) &&
                  (*(ushort *)(self + 0x3e78) != 0)) {
                lVar33 = *(long *)(self + 0x3e88);
                if (pbVar23 == *(byte **)(lVar33 + 8)) {
                  uVar24 = 0;
                } else {
                  uVar24 = 0;
                  puVar27 = (uint64_t *)(lVar33 + 0x38);
                  do {
                    uVar24 = uVar24 + 1;
                    if (uVar24 == *(ushort *)(self + 0x3e78))
                      goto LAB_004e7c1a;
                    pbVar9 = (byte *)*puVar27;
                    puVar27 = puVar27 + 6;
                  } while (pbVar23 != pbVar9);
                }
                piVar28 = (int *)(lVar33 + (ulong)uVar24 * 0x30);
                if (*piVar28 == 0) {
                  *piVar28 = 1;
                }
              }
            LAB_004e7c1a:
              pbVar23 = (byte *)TileLevel__GetGridBlock(*(TileLevel **)(SuperMeatBoy + 0x40),
                                                        local_3c[0] + 1, local_48[0], 0);
              if (((uint)*pbVar23 == *(uint *)(pPalProps + 0x50)) &&
                  (*(ushort *)(self + 0x3e78) != 0)) {
                lVar33 = *(long *)(self + 0x3e88);
                if (pbVar23 == *(byte **)(lVar33 + 8)) {
                  uVar24 = 0;
                } else {
                  uVar24 = 0;
                  puVar27 = (uint64_t *)(lVar33 + 0x38);
                  do {
                    uVar24 = uVar24 + 1;
                    if (uVar24 == *(ushort *)(self + 0x3e78))
                      goto LAB_004e6736;
                    pbVar9 = (byte *)*puVar27;
                    puVar27 = puVar27 + 6;
                  } while (pbVar23 != pbVar9);
                }
                piVar28 = (int *)(lVar33 + (ulong)uVar24 * 0x30);
                if (*piVar28 == 0) {
                  *piVar28 = 1;
                }
              }
            }
          } else {
            *piVar28 = 1;
          }
        }
      }
      goto LAB_004e6736;
    }
  } else {
    if (bVar14 == 4) {
      local_478 = 0;
      local_474 = TileLevel__fLevelGridWH * fVar39;
      local_48[0] = 0.0;
      bVar14 = (byte)arg1[1] >> 4 & 3;
      if (bVar14 == 2) {
        local_48[0] = 3.1415927;
      } else if (bVar14 == 3) {
        local_48[0] = -1.5707964;
      } else if (bVar14 == 1) {
        local_48[0] = 1.5707964;
      }
      bVar14 = (byte)arg1[1] >> 6;
      local_468 = 0x3f800000;
      local_464 = 0x3f800000;
      if (bVar14 == 2) {
      LAB_004e6efa:
        local_464 = 0xbf800000;
      } else {
        if (bVar14 == 3) {
          local_468 = 0xbf800000;
          goto LAB_004e6efa;
        }
        if (bVar14 == 1) {
          local_468 = 0xbf800000;
        }
      }
      Matrix4x4__Transformation2DRot(local_598, (Vector2 *)&local_468, local_48, arg6);
      Matrix4x4__TransformVector2((Vector2 *)&local_458, (Vector2 *)&local_478, local_598, 1);
      fVar12 = DAT_005be894 /* R:1.0f */;
      if (arg8 == 2) {
        if (local_454 == *(float *)(arg6 + 4)) {
          if (*(float *)arg6 <= local_458) {
            if (fVar40 + *(float *)arg2 <= local_458 - TileLevel__fLevelGridWH * fVar39) {
              if (*(float *)arg6 < local_458)
                goto LAB_004e6f8b;
              goto LAB_004e73aa;
            }
          } else {
          LAB_004e73aa:
            if (fVar39 * TileLevel__fLevelGridWH + local_458 <= *(float *)arg2 - fVar40)
              goto LAB_004e6f8b;
          }
          local_428 = 0;
          local_424 = DAT_005be894 /* R:1.0f */;
          *(float *)(arg2 + 4) =
              local_454 + DAT_005c07b0 /* R:0.009999999776482582f */ + fVar37 + fVar38;
          Vector2__operator_assign((Vector2 *)&local_508, (Vector2 *)&local_428);
          pVVar31 = (Vector2 *)&local_418;
          local_418 = 0;
          local_414 = *(uint32_t *)(arg4 + 4);
        } else {
          local_454 = fVar39 * TileLevel__fLevelGridWH + local_454;
          if (local_454 < *(float *)(arg2 + 4) - fVar38)
            goto LAB_004e6f8b;
          local_448 = 0;
          local_444 = DAT_005be894 /* R:1.0f */;
          *(float *)(arg2 + 4) = local_454 + DAT_005c07b0 /* R:0.009999999776482582f */ + fVar38;
          Vector2__operator_assign((Vector2 *)&local_508, (Vector2 *)&local_448);
          pVVar31 = (Vector2 *)&local_438;
          local_438 = 0;
          local_434 = *(uint32_t *)(arg4 + 4);
        }
        fVar35 = (float)Vector2__Dot(pVVar31, (Vector2 *)&local_508);
        fVar36 = fVar36 + fVar12;
      } else if (arg8 == 1) {
        if (local_454 != *(float *)(arg6 + 4)) {
          local_454 = local_454 - fVar39 * TileLevel__fLevelGridWH;
          if (fVar38 + *(float *)(arg2 + 4) < local_454)
            goto LAB_004e6f8b;
          local_408 = 0;
          local_404 = 0xbf800000;
          *(float *)(arg2 + 4) = (local_454 - fVar38) - DAT_005c07b0 /* R:0.009999999776482582f */;
          Vector2__operator_assign((Vector2 *)&local_508, (Vector2 *)&local_408);
          local_3f8 = 0;
          local_3f4 = *(uint32_t *)(arg4 + 4);
          fVar35 = (float)Vector2__Dot((Vector2 *)&local_3f8, (Vector2 *)&local_508);
          fVar36 = fVar36 + DAT_005be894 /* R:1.0f */;
          goto LAB_004e71fe;
        }
        if (*(float *)arg6 <= local_458) {
          if (fVar40 + *(float *)arg2 <= local_458 - TileLevel__fLevelGridWH * fVar39) {
            if (*(float *)arg6 < local_458)
              goto LAB_004e6f8b;
            goto LAB_004e7777;
          }
        } else {
        LAB_004e7777:
          if (fVar39 * TileLevel__fLevelGridWH + local_458 <= *(float *)arg2 - fVar40)
            goto LAB_004e6f8b;
        }
        local_3e8 = 0;
        local_3e4 = 0xbf800000;
        *(float *)(arg2 + 4) =
            ((local_454 - fVar37) - fVar38) - DAT_005c07b0 /* R:0.009999999776482582f */;
        Vector2__operator_assign((Vector2 *)&local_508, (Vector2 *)&local_3e8);
        local_3d8 = 0;
        local_3d4 = *(uint32_t *)(arg4 + 4);
        fVar35 = (float)Vector2__Dot((Vector2 *)&local_3d8, (Vector2 *)&local_508);
        fVar36 = fVar36 + DAT_005be894 /* R:1.0f */;
      } else if (arg8 == 4) {
        if (local_458 != *(float *)arg6) {
          local_458 = fVar39 * TileLevel__fLevelGridWH + local_458;
          if (*(float *)arg2 - fVar40 <= local_458) {
            local_3c4 = 0;
            local_3c8 = DAT_005be894 /* R:1.0f */;
            *(float *)arg2 = local_458 + DAT_005c07b0 /* R:0.009999999776482582f */ + fVar40;
            Vector2__operator_assign((Vector2 *)&local_508, (Vector2 *)&local_3c8);
            local_3b4 = 0;
            local_3b8 = *(uint32_t *)arg4;
            fVar35 = (float)Vector2__Dot((Vector2 *)&local_3b8, (Vector2 *)&local_508);
            fVar36 = fVar36 + fVar12;
            goto LAB_004e71fe;
          }
          goto LAB_004e6f8b;
        }
        if (*(float *)(arg6 + 4) <= local_454) {
          if (fVar38 + arg3[1] <= local_454 - TileLevel__fLevelGridWH * fVar39) {
            if (*(float *)(arg6 + 4) < local_454)
              goto LAB_004e6f8b;
            goto LAB_004e7a61;
          }
        } else {
        LAB_004e7a61:
          if (fVar39 * TileLevel__fLevelGridWH + local_454 <= arg3[1] - fVar38)
            goto LAB_004e6f8b;
        }
        local_3a4 = 0;
        local_3a8 = DAT_005be894 /* R:1.0f */;
        *(float *)arg2 = local_458 + DAT_005c07b0 /* R:0.009999999776482582f */ + fVar37 + fVar40;
        Vector2__operator_assign((Vector2 *)&local_508, (Vector2 *)&local_3a8);
        local_394 = 0;
        local_398 = *(uint32_t *)arg4;
        fVar35 = (float)Vector2__Dot((Vector2 *)&local_398, (Vector2 *)&local_508);
        fVar36 = fVar36 + fVar12;
      } else {
        iVar29 = 0;
        fVar35 = 0.0;
        if (!bVar34)
          goto LAB_004e6736;
        if (local_458 != *(float *)arg6) {
          local_458 = local_458 - fVar39 * TileLevel__fLevelGridWH;
          if (local_458 <= fVar40 + *(float *)arg2) {
            local_388 = 0xbf800000;
            local_384 = 0;
            iVar29 = 1;
            *(float *)arg2 = (local_458 - fVar40) - DAT_005c07b0 /* R:0.009999999776482582f */;
            Vector2__operator_assign((Vector2 *)&local_508, (Vector2 *)&local_388);
            local_374 = 0;
            local_378 = *(uint32_t *)arg4;
            fVar35 = (float)Vector2__Dot((Vector2 *)&local_378, (Vector2 *)&local_508);
            fVar35 = fVar35 * (float)((uint)(fVar36 + DAT_005be894 /* R:1.0f */) ^
                                      DAT_005be6f0 /* R:u32=2147483648 */);
            if (fVar35 <= 0.0) {
              fVar35 = 0.0;
            }
          }
          goto LAB_004e6736;
        }
        if (*(float *)(arg6 + 4) <= local_454) {
          if (fVar38 + arg3[1] <= local_454 - TileLevel__fLevelGridWH * fVar39) {
            if (*(float *)(arg6 + 4) < local_454)
              goto LAB_004e6736;
            goto LAB_004e7e08;
          }
        } else {
        LAB_004e7e08:
          if (fVar39 * TileLevel__fLevelGridWH + local_454 <= arg3[1] - fVar38)
            goto LAB_004e6f8b;
        }
        local_368 = 0xbf800000;
        local_364 = 0;
        *(float *)arg2 =
            ((local_458 - fVar37) - fVar40) - DAT_005c07b0 /* R:0.009999999776482582f */;
        Vector2__operator_assign((Vector2 *)&local_508, (Vector2 *)&local_368);
        local_354 = 0;
        local_358 = *(uint32_t *)arg4;
        fVar35 = (float)Vector2__Dot((Vector2 *)&local_358, (Vector2 *)&local_508);
        fVar36 = fVar36 + DAT_005be894 /* R:1.0f */;
      }
    LAB_004e71fe:
      iVar29 = 1;
      fVar35 = fVar35 * (float)((uint)fVar36 ^ DAT_005be6f0 /* R:u32=2147483648 */);
      if (fVar35 <= 0.0) {
        fVar35 = 0.0;
      }
      goto LAB_004e6736;
    }
    fVar35 = 0.0;
    iVar29 = 0;
    if (bVar14 != 8)
      goto LAB_004e6736;
    local_48[0] = 0.0;
    fVar39 = (float)(DAT_005be6f0 /* R:u32=2147483648 */ ^ (uint)fVar37);
    bVar14 = (byte)arg1[1] >> 4 & 3;
    if (bVar14 == 2) {
      local_48[0] = 3.1415927;
    } else if (bVar14 == 3) {
      local_48[0] = -1.5707964;
    } else if (bVar14 == 1) {
      local_48[0] = 1.5707964;
    }
    bVar14 = (byte)arg1[1] >> 6;
    local_338 = 0x3f800000;
    local_334 = 0x3f800000;
    if (bVar14 == 2) {
    LAB_004e6f15:
      local_334 = 0xbf800000;
    } else {
      if (bVar14 == 3) {
        local_338 = 0xbf800000;
        goto LAB_004e6f15;
      }
      if (bVar14 == 1) {
        local_338 = 0xbf800000;
      }
    }
    fVar35 = fVar37 - DAT_005c07b0 /* R:0.009999999776482582f */;
    local_348 = fVar39;
    local_344 = fVar37;
    Matrix4x4__Transformation2DRot(local_558, (Vector2 *)&local_338, local_48, arg6);
    Matrix4x4__TransformVector2((Vector2 *)&local_328, (Vector2 *)&local_348, local_558, 1);
    fVar12 = DAT_005be894 /* R:1.0f */;
    if (bVar34) {
      if (local_328 < *(float *)arg6) {
        fVar37 = *(float *)arg6 - fVar37;
        if (fVar40 + *arg3 < fVar37) {
          local_318 = 0xbf800000;
          local_314 = 0;
          *(float *)arg2 = (fVar37 - fVar40) - DAT_005c07b0 /* R:0.009999999776482582f */;
          Vector2__operator_assign((Vector2 *)&local_508, (Vector2 *)&local_318);
          pVVar31 = (Vector2 *)&local_308;
          local_304 = 0;
          local_308 = *(uint32_t *)arg4;
        LAB_004e712d:
          fVar35 = (float)Vector2__Dot(pVVar31, (Vector2 *)&local_508);
          fVar36 = fVar36 + DAT_005be894 /* R:1.0f */;
          goto LAB_004e6ed2;
        }
      } else {
        if (local_324 < *(float *)(arg6 + 4) || local_324 == *(float *)(arg6 + 4)) {
          local_2a4 = (uint)fVar38 ^ DAT_005be6f0 /* R:u32=2147483648 */;
          local_2a8 = fVar40;
          Vector2__operator_plus__005be140((Vector2 *)&local_2b8, arg2);
          bVar34 = fVar35 + local_2b4 < local_324;
          Vector2__operator_minus_assign((Vector2 *)&local_2b8, arg6);
          if ((bVar34) || (local_2b8 < local_2b4)) {
            iVar29 = 0;
            fVar35 = 0.0;
            if (!bVar34)
              goto LAB_004e6736;
            local_278 = 0xbf800000;
            local_274 = 0;
            *(float *)arg2 =
                ((*(float *)arg6 - fVar37) - fVar40) - DAT_005c07b0 /* R:0.009999999776482582f */;
            Vector2__operator_assign((Vector2 *)&local_508, (Vector2 *)&local_278);
            local_264 = 0;
            local_268 = *(uint32_t *)arg4;
            fVar35 = (float)Vector2__Dot((Vector2 *)&local_268, (Vector2 *)&local_508);
            fVar36 = fVar36 + DAT_005be894 /* R:1.0f */;
          LAB_004e8641:
            iVar29 = 1;
            fVar35 = fVar35 * (float)((uint)fVar36 ^ DAT_005be6f0 /* R:u32=2147483648 */);
            if (fVar35 <= 0.0) {
              fVar35 = 0.0;
            }
            goto LAB_004e6736;
          }
          if (fVar39 <= local_2b8) {
            fVar39 = local_2b8;
          }
          local_294 = 0x3f800000;
          local_298 = 0;
          *(float *)(arg2 + 4) = DAT_005c07b0 /* R:0.009999999776482582f */ + *(float *)(arg6 + 4) +
                                 fVar38 +
                                 (float)(~-(uint)(local_2b8 <= fVar37) & (uint)fVar37 |
                                         (uint)fVar39 & -(uint)(local_2b8 <= fVar37));
          Vector2__operator_assign((Vector2 *)&local_508, (Vector2 *)&local_298);
          pVVar31 = (Vector2 *)&local_288;
          local_288 = 0;
          local_284 = *(uint32_t *)(arg4 + 4);
        LAB_004e805b:
          local_618 = 0.0;
          fVar39 = (float)Vector2__Dot(pVVar31, (Vector2 *)&local_508);
          iVar29 = 1;
          fVar35 = 0.0;
          if (fVar39 < 0.0) {
            iVar29 = 1;
            fVar35 = (float)((uint)(fVar36 + 1.0) ^ DAT_005be6f0 /* R:u32=2147483648 */) * fVar39;
            if (fVar35 <= 0.0) {
              fVar35 = local_618;
            }
          }
          goto LAB_004e6736;
        }
        local_2e8 = fVar40;
        local_2e4 = fVar38;
        Vector2__operator_plus__005be140((Vector2 *)&local_2f8, arg2);
        Vector2__operator_minus_assign((Vector2 *)&local_2f8, arg6);
        if ((float)(local_2f8 ^ DAT_005be6f0 /* R:u32=2147483648 */) <= local_2f4) {
          local_2f4 = (float)((uint)local_2f4 ^ DAT_005be6f0 /* R:u32=2147483648 */);
          local_2d8 = 0xbf800000;
          local_2d4 = 0;
          if (fVar39 <= local_2f4) {
            fVar39 = local_2f4;
          }
          *(float *)arg2 =
              ((DAT_005c17d8 /* R:-0.009999999776482582f */ + *(float *)arg6) - fVar40) +
              (float)(~-(uint)(local_2f4 <= fVar37) & (uint)fVar37 |
                      (uint)fVar39 & -(uint)(local_2f4 <= fVar37));
          Vector2__operator_assign((Vector2 *)&local_508, (Vector2 *)&local_2d8);
          pVVar31 = (Vector2 *)&local_2c8;
          local_2c4 = 0;
          local_2c8 = *(uint32_t *)arg4;
          goto LAB_004e712d;
        }
      }
    } else {
      if (arg8 != 4) {
        if (arg8 == 2) {
          fVar35 = *(float *)(arg6 + 4);
          if ((local_324 <= fVar35) ||
              (fVar41 = fVar37 + fVar35, arg3[1] <= fVar41 && fVar41 != arg3[1])) {
            if (local_324 < fVar35) {
              if (local_328 < *(float *)arg6 || local_328 == *(float *)arg6) {
                local_128 = (uint)fVar40 ^ DAT_005be6f0 /* R:u32=2147483648 */;
                local_124 = (uint)fVar38 ^ DAT_005be6f0 /* R:u32=2147483648 */;
                Vector2__operator_plus__005be140((Vector2 *)&local_138, arg2);
                Vector2__operator_minus_assign((Vector2 *)&local_138, arg6);
                fVar40 = DAT_005be894 /* R:1.0f */;
                fVar35 = (float)(local_138 ^ DAT_005be6f0 /* R:u32=2147483648 */);
                if (local_134 <= fVar35) {
                  if (fVar39 <= fVar35) {
                    fVar39 = fVar35;
                  }
                  local_118 = 0;
                  local_114 = DAT_005be894 /* R:1.0f */;
                  *(float *)(arg2 + 4) = DAT_005c07b0 /* R:0.009999999776482582f */ +
                                         *(float *)(arg6 + 4) + fVar38 +
                                         (float)(~-(uint)(fVar35 <= fVar37) & (uint)fVar37 |
                                                 (uint)fVar39 & -(uint)(fVar35 <= fVar37));
                  Vector2__operator_assign((Vector2 *)&local_508, (Vector2 *)&local_118);
                  local_108 = 0;
                  local_104 = *(uint32_t *)(arg4 + 4);
                  fVar35 = (float)Vector2__Dot((Vector2 *)&local_108, (Vector2 *)&local_508);
                  fVar36 = fVar36 + fVar40;
                  goto LAB_004e6ed2;
                }
              } else {
                local_164 = (uint)fVar38 ^ DAT_005be6f0 /* R:u32=2147483648 */;
                local_168 = fVar40;
                Vector2__operator_plus__005be140((Vector2 *)&local_178, arg2);
                Vector2__operator_minus_assign((Vector2 *)&local_178, arg6);
                fVar40 = DAT_005be894 /* R:1.0f */;
                if (local_174 <= local_178) {
                  if (fVar39 <= local_178) {
                    fVar39 = local_178;
                  }
                  local_158 = 0;
                  local_154 = DAT_005be894 /* R:1.0f */;
                  *(float *)(arg2 + 4) = DAT_005c07b0 /* R:0.009999999776482582f */ +
                                         *(float *)(arg6 + 4) + fVar38 +
                                         (float)(~-(uint)(local_178 <= fVar37) & (uint)fVar37 |
                                                 (uint)fVar39 & -(uint)(local_178 <= fVar37));
                  Vector2__operator_assign((Vector2 *)&local_508, (Vector2 *)&local_158);
                  local_148 = 0;
                  local_144 = *(uint32_t *)(arg4 + 4);
                  fVar35 = (float)Vector2__Dot((Vector2 *)&local_148, (Vector2 *)&local_508);
                  fVar36 = fVar36 + fVar40;
                  goto LAB_004e6ed2;
                }
              }
            }
            goto LAB_004e6f8b;
          }
          local_198 = 0;
          local_194 = DAT_005be894 /* R:1.0f */;
          *(float *)(arg2 + 4) = DAT_005c07b0 /* R:0.009999999776482582f */ + fVar41 + fVar38;
          Vector2__operator_assign((Vector2 *)&local_508, (Vector2 *)&local_198);
          local_188 = 0;
          local_184 = *(uint32_t *)(arg4 + 4);
          fVar35 = (float)Vector2__Dot((Vector2 *)&local_188, (Vector2 *)&local_508);
          fVar36 = fVar36 + fVar12;
        } else {
          fVar35 = 0.0;
          iVar29 = 0;
          if (arg8 != 1)
            goto LAB_004e6736;
          if (local_324 < *(float *)(arg6 + 4)) {
            local_f8 = 0;
            local_f4 = 0xbf800000;
            *(float *)(arg2 + 4) = ((*(float *)(arg6 + 4) - fVar37) - fVar38) -
                                   DAT_005c07b0 /* R:0.009999999776482582f */;
            Vector2__operator_assign((Vector2 *)&local_508, (Vector2 *)&local_f8);
            local_e8 = 0;
            local_e4 = *(uint32_t *)(arg4 + 4);
            fVar35 = (float)Vector2__Dot((Vector2 *)&local_e8, (Vector2 *)&local_508);
            fVar36 = fVar36 + DAT_005be894 /* R:1.0f */;
            goto LAB_004e8641;
          }
          iVar29 = 0;
          if (*(float *)arg6 <= local_328) {
            local_88 = fVar40;
            local_84 = fVar38;
            Vector2__operator_plus__005be140((Vector2 *)&local_98, arg2);
            Vector2__operator_minus_assign((Vector2 *)&local_98, arg6);
            fVar40 = (float)(local_98 ^ DAT_005be6f0 /* R:u32=2147483648 */);
            fVar35 = 0.0;
            if (local_94 <= fVar40)
              goto LAB_004e6736;
            if (fVar39 <= fVar40) {
              fVar39 = fVar40;
            }
            local_78 = 0;
            local_74 = 0xbf800000;
            *(float *)(arg2 + 4) =
                ((DAT_005c17d8 /* R:-0.009999999776482582f */ + *(float *)(arg6 + 4)) - fVar38) +
                (float)(~-(uint)(fVar40 <= fVar37) & (uint)fVar37 |
                        (uint)fVar39 & -(uint)(fVar40 <= fVar37));
            Vector2__operator_assign((Vector2 *)&local_508, (Vector2 *)&local_78);
            local_68 = 0;
            local_64 = *(uint32_t *)(arg4 + 4);
            fVar35 = (float)Vector2__Dot((Vector2 *)&local_68, (Vector2 *)&local_508);
            fVar36 = fVar36 + DAT_005be894 /* R:1.0f */;
          } else {
            local_c8 = (uint)fVar40 ^ DAT_005be6f0 /* R:u32=2147483648 */;
            local_c4 = fVar38;
            Vector2__operator_plus__005be140((Vector2 *)&local_d8, arg2);
            Vector2__operator_minus_assign((Vector2 *)&local_d8, arg6);
            fVar35 = 0.0;
            if (local_d4 <= local_d8)
              goto LAB_004e6736;
            if (fVar39 <= local_d8) {
              fVar39 = local_d8;
            }
            local_b8 = 0;
            local_b4 = 0xbf800000;
            *(float *)(arg2 + 4) =
                ((DAT_005c17d8 /* R:-0.009999999776482582f */ + *(float *)(arg6 + 4)) - fVar38) +
                (float)(~-(uint)(local_d8 <= fVar37) & (uint)fVar37 |
                        (uint)fVar39 & -(uint)(local_d8 <= fVar37));
            Vector2__operator_assign((Vector2 *)&local_508, (Vector2 *)&local_b8);
            local_a8 = 0;
            local_a4 = *(uint32_t *)(arg4 + 4);
            fVar35 = (float)Vector2__Dot((Vector2 *)&local_a8, (Vector2 *)&local_508);
            fVar36 = fVar36 + DAT_005be894 /* R:1.0f */;
          }
        }
      LAB_004e6ed2:
        iVar29 = 1;
        fVar35 = fVar35 * (float)((uint)fVar36 ^ DAT_005be6f0 /* R:u32=2147483648 */);
        if (fVar35 <= 0.0) {
          fVar35 = 0.0;
        }
        goto LAB_004e6736;
      }
      if (local_328 <= *(float *)arg6) {
        if (local_324 < *(float *)(arg6 + 4) || local_324 == *(float *)(arg6 + 4)) {
          local_1e4 = (uint)fVar38 ^ DAT_005be6f0 /* R:u32=2147483648 */;
          local_1e8 = (uint)fVar40 ^ DAT_005be6f0 /* R:u32=2147483648 */;
          Vector2__operator_plus__005be140((Vector2 *)&local_1f8, arg2);
          bVar34 = local_324 <= fVar35 + local_1f4;
          Vector2__operator_minus_assign((Vector2 *)&local_1f8, arg6);
          fVar12 = DAT_005be894 /* R:1.0f */;
          if ((bVar34) &&
              (local_1f4 <= (float)((uint)local_1f8 ^ DAT_005be6f0 /* R:u32=2147483648 */))) {
            if (fVar39 <= local_1f8) {
              fVar39 = local_1f8;
            }
            local_1d4 = 0x3f800000;
            local_1d8 = 0;
            *(float *)(arg2 + 4) =
                (DAT_005c07b0 /* R:0.009999999776482582f */ + *(float *)(arg6 + 4) + fVar38) -
                (float)(~-(uint)(local_1f8 <= fVar37) & (uint)fVar37 |
                        (uint)fVar39 & -(uint)(local_1f8 <= fVar37));
            Vector2__operator_assign((Vector2 *)&local_508, (Vector2 *)&local_1d8);
            pVVar31 = (Vector2 *)&local_1c8;
            local_1c8 = 0;
            local_1c4 = *(uint32_t *)(arg4 + 4);
            goto LAB_004e805b;
          }
          if (!bVar34) {
            local_1b4 = 0;
            local_1b8 = DAT_005be894 /* R:1.0f */;
            *(float *)arg2 =
                DAT_005c07b0 /* R:0.009999999776482582f */ + *(float *)arg6 + fVar37 + fVar40;
            Vector2__operator_assign((Vector2 *)&local_508, (Vector2 *)&local_1b8);
            local_1a4 = 0;
            local_1a8 = *(uint32_t *)arg4;
            fVar35 = (float)Vector2__Dot((Vector2 *)&local_1a8, (Vector2 *)&local_508);
            fVar36 = fVar36 + fVar12;
            goto LAB_004e8641;
          }
        } else {
          local_228 = (uint)fVar40 ^ DAT_005be6f0 /* R:u32=2147483648 */;
          local_224 = fVar38;
          Vector2__operator_plus__005be140((Vector2 *)&local_238, arg2);
          Vector2__operator_minus_assign((Vector2 *)&local_238, arg6);
          if (local_238 < local_234) {
            if (fVar39 <= local_234) {
              fVar39 = local_234;
            }
            local_218 = 0xbf800000;
            local_214 = 0;
            *(float *)arg2 = DAT_005c07b0 /* R:0.009999999776482582f */ + *(float *)arg6 + fVar40 +
                             (float)(~-(uint)(local_234 <= fVar37) & (uint)fVar37 |
                                     (uint)fVar39 & -(uint)(local_234 <= fVar37));
            Vector2__operator_assign((Vector2 *)&local_508, (Vector2 *)&local_218);
            local_204 = 0;
            local_208 = *(uint32_t *)arg4;
            fVar35 = (float)Vector2__Dot((Vector2 *)&local_208, (Vector2 *)&local_508);
            fVar36 = fVar36 + DAT_005be894 /* R:1.0f */;
            goto LAB_004e6ed2;
          }
        }
      } else {
        fVar37 = fVar37 + *(float *)arg6;
        if (fVar37 < *arg3 - fVar40) {
          local_254 = 0;
          local_258 = DAT_005be894 /* R:1.0f */;
          *(float *)arg2 = DAT_005c07b0 /* R:0.009999999776482582f */ + fVar37 + fVar40;
          Vector2__operator_assign((Vector2 *)&local_508, (Vector2 *)&local_258);
          local_244 = 0;
          local_248 = *(uint32_t *)arg4;
          fVar35 = (float)Vector2__Dot((Vector2 *)&local_248, (Vector2 *)&local_508);
          fVar36 = fVar36 + fVar12;
          goto LAB_004e6ed2;
        }
      }
    }
  LAB_004e6f8b:
    fVar35 = 0.0;
  }
  iVar29 = 0;
LAB_004e6736:
  Vector2__operator_mul__005be200(local_58, fVar35);
  Vector2__operator_plus_assign(arg4, local_58);
  *(int *)arg1 = iVar2;
  return iVar29;
}

/* ======================================================================
 * SMBPalette__PlatformWallJump  (Ghidra `PlatformWallJump` @ 004e9380)
 * Signature: uint8_t __thiscall PlatformWallJump(SMBPalette * self, Vector2 * arg1, Vector2 * arg2)
 * Class: SMBPalette
 * Calls: `Vector2__operator_assign`
 * Called by: `MeatBoyCharactor__Update`
 */
/* SMBPalette__PlatformWallJump(Vector2 const&, Vector2&) */

uint64_t __thiscall SMBPalette__PlatformWallJump(SMBPalette *self, Vector2 *arg1, Vector2 *arg2)

{
  long *plVar1;
  float fVar2;
  uint64_t uVar3;
  uint uVar4;
  ulong uVar5;
  float fVar6;
  float local_18;
  float local_14;

  uVar3 = 0;
  if (*(short *)(self + 0x4120) != 0) {
    uVar5 = 0;
    fVar6 = DAT_005be6e4 /* R:0.5f */ * TileLevel__fLevelGridWH;
    fVar2 = *(float *)arg1;
    while (true) {
      plVar1 = (long *)(*(long *)(self + 0x4130) + (uVar5 & 0xffff) * 0x18);
      local_14 = *(float *)(*plVar1 + 0x28);
      local_18 = *(float *)(*plVar1 + 0x24);
      if (*(int *)((long)plVar1 + 0x14) != 0)
        break;
      local_18 = *(float *)(*plVar1 + 0x24) + TileLevel__fLevelGridWH;
      local_14 = *(float *)(*plVar1 + 0x28);
      if ((((fVar2 <= local_18 + fVar6) && (local_18 - fVar6 <= fVar2)) &&
           (*(float *)(arg1 + 4) <= fVar6 + local_14)) &&
          (local_14 - fVar6 <= *(float *)(arg1 + 4)))
        goto LAB_004e95a0;
      local_18 = *(float *)(*plVar1 + 0x24) - TileLevel__fLevelGridWH;
      local_14 = *(float *)(*plVar1 + 0x28);
      if (((fVar2 <= local_18 + fVar6) && (local_18 - fVar6 <= fVar2)) &&
          ((*(float *)(arg1 + 4) <= fVar6 + local_14 &&
            (local_14 - fVar6 <= *(float *)(arg1 + 4)))))
        goto LAB_004e95a0;
    LAB_004e94d0:
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulong)uVar4;
      if ((int)(uint) * (ushort *)(self + 0x4120) <= (int)uVar4) {
        return 0;
      }
    }
    if (((fVar6 + local_18 < fVar2) || (fVar2 < local_18 - fVar6)) ||
        ((fVar6 + local_14 < *(float *)(arg1 + 4) || (*(float *)(arg1 + 4) < local_14 - fVar6)))) {
      local_18 = *(float *)(*plVar1 + 0x24);
      local_14 = *(float *)(*plVar1 + 0x28) + TileLevel__fLevelGridWH;
      if ((((fVar6 + local_18 < fVar2) || (fVar2 < local_18 - fVar6)) ||
           (local_14 + fVar6 < *(float *)(arg1 + 4))) ||
          (*(float *)(arg1 + 4) < local_14 - fVar6)) {
        local_18 = *(float *)(*plVar1 + 0x24);
        local_14 = *(float *)(*plVar1 + 0x28) - TileLevel__fLevelGridWH;
        if (((fVar6 + local_18 < fVar2) || (fVar2 < local_18 - fVar6)) ||
            ((local_14 + fVar6 < *(float *)(arg1 + 4) ||
              (*(float *)(arg1 + 4) < local_14 - fVar6))))
          goto LAB_004e94d0;
      }
    }
  LAB_004e95a0:
    Vector2__operator_assign(arg2, (Vector2 *)&local_18);
    uVar3 = 1;
  }
  return uVar3;
}

/* ======================================================================
 * SMBPalette__PlatformDeath  (Ghidra `PlatformDeath` @ 004ea4d0)
 * Signature: uint8_t __thiscall PlatformDeath(SMBPalette * self, SceneObject2D * arg1, Bounds * arg2)
 * Class: SMBPalette
 * Calls: `BoundingSquare__BoundingSquare`, `GSetPieceWayPoints__GetWayPointGroup`, `IsPointWithinBoundingSquare`, `TileLevel__GetGridBlock`, `TileLevel__GetGridIndex__0058dd90`, `Vector2__operator_assign`, `Vector2__operator_mul__005be200`, `Vector2__operator_plus__005be140`
 * Called by: (none)
 */
/* SMBPalette__PlatformDeath(SceneObject2D*, Bounds*) */

uint64_t __thiscall SMBPalette__PlatformDeath(SMBPalette *self, SceneObject2D *arg1, Bounds *arg2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  long *plVar13;
  long lVar14;
  char *pcVar15;
  long lVar16;
  uint uVar17;
  Vector2 *pVVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  uint uVar24;
  float fVar25;
  float fVar26;
  BoundingSquare local_1c8[160];
  Vector2 local_128[8];
  Vector2 local_120[8];
  Vector2 local_118[8];
  Vector2 local_110[8];
  uint64_t local_108;
  uint32_t local_f8;
  uint32_t local_f4;
  Vector2 local_e8[16];
  float local_d8;
  float local_d4;
  float local_c8;
  float local_c4;
  float local_b8;
  float local_b4;
  float local_a8;
  float local_a4;
  float local_98;
  float local_94;
  uint local_88;
  float local_84;
  float local_78;
  float local_74;
  float local_68;
  uint local_64;
  uint local_58;
  uint local_54;
  Vector2 local_48[8];
  int local_40;
  int local_3c[3];

  if (arg2 == (Bounds *)0x0) {
    return 0;
  }
  fVar22 = *(float *)(arg2 + 0x8c) * DAT_005c1930 /* R:0.75f */;
  fVar19 = DAT_005c1930 /* R:0.75f */ * *(float *)(arg2 + 0x90);
  if (*(short *)(self + 0x4120) == 0) {
    bVar8 = false;
    bVar4 = false;
    bVar5 = false;
    bVar7 = false;
    bVar6 = false;
  } else {
    uVar17 = 0;
    fVar25 = fVar19 + *(float *)(arg1 + 0xa4);
    bVar4 = false;
    bVar5 = false;
    fVar20 = *(float *)(arg1 + 0xa4) - fVar19;
    bVar7 = false;
    bVar6 = false;
    fVar23 = *(float *)(arg1 + 0xa0) + fVar22;
    fVar26 = *(float *)(arg1 + 0xa0) - fVar22;
    do {
      lVar16 = (ulong)(uVar17 & 0xffff) * 0x18;
      plVar13 = (long *)(lVar16 + *(long *)(self + 0x4130));
      local_108 = *(uint64_t *)(*plVar13 + 0x34);
      local_f4 = *(uint32_t *)(*plVar13 + 0x28);
      local_f8 = *(uint32_t *)(*plVar13 + 0x24);
      lVar14 =
          GSetPieceWayPoints__GetWayPointGroup(SetPieceWayPoints, (TileLevelSetPiece *)*plVar13);
      if (*(int *)(*(long *)(self + 0x4130) + 0x14 + lVar16) == 0) {
        local_108 =
            CONCAT44(TileLevel__fLevelGridWH * local_108._4_4_,
                     TileLevel__fLevelGridWH * (float)local_108 * DAT_005c72d0 /* R:3.0f */);
      } else {
        local_108 = CONCAT44(TileLevel__fLevelGridWH * local_108._4_4_ * DAT_005c72d0 /* R:3.0f */,
                             TileLevel__fLevelGridWH * (float)local_108);
      }
      Vector2__operator_mul__005be200(local_e8, DAT_005be6e4 /* R:0.5f */);
      BoundingSquare__BoundingSquare(local_1c8, (Vector2 *)&local_f8, 0.0, local_e8);
      if (lVar14 == 0) {
        Vector2__operator_assign((Vector2 *)&local_d8, (Vector2 *)&local_f8);
      } else {
        Vector2__operator_assign((Vector2 *)&local_d8, (Vector2 *)(lVar14 + 0x60));
      }
      fVar11 = local_d4;
      fVar10 = local_d8;
      fVar21 = DAT_005be6e4 /* R:0.5f */ * (float)local_108;
      fVar9 = local_108._4_4_;
      local_c8 = fVar26;
      local_c4 = fVar25;
      local_b8 = fVar23;
      local_b4 = fVar25;
      local_a8 = fVar26;
      local_a4 = fVar20;
      local_98 = fVar23;
      local_94 = fVar20;
      iVar12 = IsPointWithinBoundingSquare(local_1c8, (Vector2 *)&local_c8);
      if ((iVar12 == 1) ||
          (iVar12 = IsPointWithinBoundingSquare(local_1c8, (Vector2 *)&local_a8), iVar12 == 1)) {
        bVar4 = fVar21 + fVar10 < local_c8;
      }
      iVar12 = IsPointWithinBoundingSquare(local_1c8, (Vector2 *)&local_b8);
      if ((iVar12 == 1) ||
          (iVar12 = IsPointWithinBoundingSquare(local_1c8, (Vector2 *)&local_98), iVar12 == 1)) {
        bVar5 = local_b8 < fVar10 - fVar21;
      }
      iVar12 = IsPointWithinBoundingSquare(local_1c8, (Vector2 *)&local_c8);
      if ((iVar12 == 1) ||
          (iVar12 = IsPointWithinBoundingSquare(local_1c8, (Vector2 *)&local_b8), iVar12 == 1)) {
        bVar6 = local_c4 < fVar11 - DAT_005be6e4 /* R:0.5f */ * fVar9;
      }
      iVar12 = IsPointWithinBoundingSquare(local_1c8, (Vector2 *)&local_a8);
      if ((iVar12 == 1) ||
          (iVar12 = IsPointWithinBoundingSquare(local_1c8, (Vector2 *)&local_98), iVar12 == 1)) {
        bVar7 = true;
      }
      uVar17 = uVar17 + 1;
    } while ((int)uVar17 < (int)(uint) * (ushort *)(self + 0x4120));
    bVar8 = (bool)(bVar5 | bVar4 | bVar7 | bVar6);
  }
  uVar17 = DAT_005be6f0 /* R:u32=2147483648 */;
  pVVar18 = (Vector2 *)(arg1 + 0xa0);
  uVar24 = (uint)fVar22 ^ DAT_005be6f0 /* R:u32=2147483648 */;
  local_88 = uVar24;
  local_84 = fVar19;
  Vector2__operator_plus__005be140(local_128, pVVar18);
  local_78 = fVar22;
  local_74 = fVar19;
  Vector2__operator_plus__005be140(local_120, pVVar18);
  local_68 = fVar22;
  local_64 = uVar17 ^ (uint)fVar19;
  Vector2__operator_plus__005be140(local_118, pVVar18);
  local_58 = uVar24;
  local_54 = uVar17 ^ (uint)fVar19;
  Vector2__operator_plus__005be140(local_110, pVVar18);
  TileLevel__GetGridIndex__0058dd90(*(TileLevel **)(SuperMeatBoy + 0x40), local_128, local_48,
                                    &local_40, local_3c);
  pcVar15 = (char *)TileLevel__GetGridBlock(*(TileLevel **)(SuperMeatBoy + 0x40), local_40 + 1,
                                            local_3c[0], 0);
  cVar1 = *pcVar15;
  pcVar15 = (char *)TileLevel__GetGridBlock(*(TileLevel **)(SuperMeatBoy + 0x40), local_40 + -1,
                                            local_3c[0], 0);
  cVar2 = *pcVar15;
  pcVar15 = (char *)TileLevel__GetGridBlock(*(TileLevel **)(SuperMeatBoy + 0x40), local_40,
                                            local_3c[0] + -1, 0);
  cVar3 = *pcVar15;
  pcVar15 = (char *)TileLevel__GetGridBlock(*(TileLevel **)(SuperMeatBoy + 0x40), local_40,
                                            local_3c[0] + 1, 0);
  if ((!bVar8) || (((((!bVar7 || (*pcVar15 == '\0')) && ((!bVar6 || (cVar3 == '\0')))) &&
                     ((!bVar4 || (cVar1 == '\0')))) &&
                    ((!bVar5 || (cVar2 == '\0')))))) {
    TileLevel__GetGridIndex__0058dd90(*(TileLevel **)(SuperMeatBoy + 0x40), local_120, local_48,
                                      &local_40, local_3c);
    pcVar15 = (char *)TileLevel__GetGridBlock(*(TileLevel **)(SuperMeatBoy + 0x40), local_40 + 1,
                                              local_3c[0], 0);
    cVar1 = *pcVar15;
    pcVar15 = (char *)TileLevel__GetGridBlock(*(TileLevel **)(SuperMeatBoy + 0x40), local_40 + -1,
                                              local_3c[0], 0);
    cVar2 = *pcVar15;
    pcVar15 = (char *)TileLevel__GetGridBlock(*(TileLevel **)(SuperMeatBoy + 0x40), local_40,
                                              local_3c[0] + -1, 0);
    cVar3 = *pcVar15;
    pcVar15 = (char *)TileLevel__GetGridBlock(*(TileLevel **)(SuperMeatBoy + 0x40), local_40,
                                              local_3c[0] + 1, 0);
    if ((!bVar8) || ((((!bVar7 || (*pcVar15 == '\0')) && ((!bVar6 || (cVar3 == '\0')))) &&
                      (((!bVar4 || (cVar1 == '\0')) && ((!bVar5 || (cVar2 == '\0')))))))) {
      TileLevel__GetGridIndex__0058dd90(*(TileLevel **)(SuperMeatBoy + 0x40), local_118, local_48,
                                        &local_40, local_3c);
      pcVar15 = (char *)TileLevel__GetGridBlock(*(TileLevel **)(SuperMeatBoy + 0x40), local_40 + 1,
                                                local_3c[0], 0);
      cVar1 = *pcVar15;
      pcVar15 = (char *)TileLevel__GetGridBlock(*(TileLevel **)(SuperMeatBoy + 0x40), local_40 + -1,
                                                local_3c[0], 0);
      cVar2 = *pcVar15;
      pcVar15 = (char *)TileLevel__GetGridBlock(*(TileLevel **)(SuperMeatBoy + 0x40), local_40,
                                                local_3c[0] + -1, 0);
      cVar3 = *pcVar15;
      pcVar15 = (char *)TileLevel__GetGridBlock(*(TileLevel **)(SuperMeatBoy + 0x40), local_40,
                                                local_3c[0] + 1, 0);
      if ((!bVar8) || ((((!bVar7 || (*pcVar15 == '\0')) && ((!bVar6 || (cVar3 == '\0')))) &&
                        (((!bVar4 || (cVar1 == '\0')) && ((!bVar5 || (cVar2 == '\0')))))))) {
        TileLevel__GetGridIndex__0058dd90(*(TileLevel **)(SuperMeatBoy + 0x40), local_110, local_48,
                                          &local_40, local_3c);
        pcVar15 = (char *)TileLevel__GetGridBlock(*(TileLevel **)(SuperMeatBoy + 0x40),
                                                  local_40 + 1, local_3c[0], 0);
        cVar1 = *pcVar15;
        pcVar15 = (char *)TileLevel__GetGridBlock(*(TileLevel **)(SuperMeatBoy + 0x40),
                                                  local_40 + -1, local_3c[0], 0);
        cVar2 = *pcVar15;
        pcVar15 = (char *)TileLevel__GetGridBlock(*(TileLevel **)(SuperMeatBoy + 0x40), local_40,
                                                  local_3c[0] + -1, 0);
        cVar3 = *pcVar15;
        pcVar15 = (char *)TileLevel__GetGridBlock(*(TileLevel **)(SuperMeatBoy + 0x40), local_40,
                                                  local_3c[0] + 1, 0);
        if (!bVar8) {
          return 0;
        }
        if ((((!bVar7) || (*pcVar15 == '\0')) && ((!bVar6 || (cVar3 == '\0')))) &&
            ((!bVar4 || (cVar1 == '\0')))) {
          if (!bVar5) {
            return 0;
          }
          if (cVar2 == '\0') {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}

/* ======================================================================
 * SMBPalette__PlatformCollision  (Ghidra `PlatformCollision` @ 004eafa0)
 * Signature: uint8_t __thiscall PlatformCollision(SMBPalette * self, SceneObject2D * arg1, TileCollisionInfo * arg2, TileCollisionInfo * arg3)
 * Class: SMBPalette
 * Calls: `ArbitraryBlockCollision`, `GSetPieceWayPoints__GetWayPointGroup`, `Vector2__operator_assign`
 * Called by: `MeatBoyCharactor__Update`
 */
/* SMBPalette__PlatformCollision(SceneObject2D*, TileCollisionInfo&, TileCollisionInfo const&) */

int __thiscall SMBPalette__PlatformCollision(SMBPalette *self, SceneObject2D *arg1,
                                             TileCollisionInfo *arg2, TileCollisionInfo *arg3)

{
  float *pfVar1;
  float fVar2;
  long lVar3;
  uint64_t uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  int local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  int local_b8;
  int local_b4;
  uint32_t local_90;
  uint32_t local_88;
  float local_84;
  float local_78;
  float fStack_74;
  uint64_t local_68[2];
  uint64_t local_58;
  uint32_t local_48;
  float local_44;

  *(uint64_t *)(arg2 + 0x10) = 0;
  *(uint64_t *)(arg2 + 0x18) = 0;
  *(uint64_t *)(arg2 + 8) = 0;
  *(uint64_t *)arg2 = 0;
  *(uint32_t *)(arg2 + 0x24) = 0;
  *(uint32_t *)(arg2 + 0x20) = 0;
  fVar2 = *(float *)(arg1 + 0xb8);
  local_e0 = 0;
  if (*(short *)(self + 0x4120) != 0) {
    uVar10 = 0;
    do {
      while (true) {
        uVar6 = (ulong)(uVar10 & 0xffff);
        local_d8 = 0;
        local_d0 = 0;
        local_c8 = 0;
        local_c0 = 0;
        local_b8 = 0;
        local_b4 = 0;
        local_90 = 1;
        lVar8 = uVar6 * 0x18;
        local_88 = 0;
        local_84 = 0.0;
        lVar7 = GSetPieceWayPoints__GetWayPointGroup(
            SetPieceWayPoints, *(TileLevelSetPiece **)(*(long *)(self + 0x4130) + uVar6 * 0x18));
        if (lVar7 == 0) {
          plVar9 = (long *)(*(long *)(self + 0x4130) + lVar8);
          fStack_74 = *(float *)(*plVar9 + 0x28);
          pfVar1 = (float *)(*plVar9 + 0x24);
          local_78 = *pfVar1;
          local_68[0] = *(uint64_t *)pfVar1;
        } else {
          Vector2__operator_assign((Vector2 *)&local_88, (Vector2 *)(lVar7 + 0x68));
          lVar3 = *(long *)(*(long *)(self + 0x4130) + uVar6 * 0x18);
          fStack_74 = *(float *)(lVar3 + 0x28);
          pfVar1 = (float *)(lVar3 + 0x24);
          local_78 = *pfVar1;
          local_68[0] = *(uint64_t *)pfVar1;
          Vector2__operator_assign((Vector2 *)local_68, (Vector2 *)(lVar7 + 0x60));
          plVar9 = (long *)(*(long *)(self + 0x4130) + lVar8);
        }
        iVar5 = ArbitraryBlockCollision((GRIDBLOCK *)(plVar9 + 1), arg1,
                                        (TileCollisionInfo *)&local_d8, (Vector2 *)&local_78,
                                        (Vector2 *)&local_88, (Vector2 *)arg3, arg3, (int)arg2);
        if (iVar5 == 0)
          break;
      LAB_004eb2a1:
        if (iVar5 != 1)
          goto LAB_004eb02e;
      LAB_004eb2aa:
        lVar8 = GSetPieceWayPoints__GetWayPointGroup(
            SetPieceWayPoints, *(TileLevelSetPiece **)(*(long *)(self + 0x4130) + uVar6 * 0x18));
        iVar5 = local_b8;
        if (lVar8 != 0) {
          fVar12 = *(float *)(lVar8 + 0x68);
          fVar11 = *(float *)(lVar8 + 0x6c);
          if ((float)((uint)fVar12 & DAT_005be880 /* R:u32=2147483647 */) <=
              (float)(DAT_005be880 /* R:u32=2147483647 */ & (uint)fVar11)) {
            fVar12 = 0.0;
          } else {
            fVar11 = 0.0;
          }
          if (((local_b4 == 0) || ((0.0 < fVar12 && (0.0 < fVar2)))) ||
              ((fVar12 < 0.0 && (fVar2 < 0.0)))) {
            *(float *)(arg1 + 200) = fVar12 + *(float *)(arg1 + 200);
          }
          *(float *)(arg1 + 0xcc) = *(float *)(arg1 + 0xcc) + fVar11;
          if (0.0 < fVar11) {
            iVar5 = 0;
            if (local_b8 == 0)
              goto LAB_004eb353;
            *(uint32_t *)(arg1 + 0xcc) = 0;
          }
          iVar5 = local_b8;
          if (local_b8 == 1) {
            *(uint32_t *)(arg1 + 200) = 0;
            if (fVar11 <= 0.0) {
              *(float *)(arg1 + 0xbc) = fVar11;
            } else {
              *(uint32_t *)(arg1 + 0xcc) = 0;
            }
          }
        }
      LAB_004eb353:
        if (local_c0 != 0) {
          *(long *)(arg2 + 0x18) = local_c0;
        }
        if (local_c8 != 0) {
          *(long *)(arg2 + 0x10) = local_c8;
        }
        if (local_d0 != 0) {
          *(long *)(arg2 + 8) = local_d0;
        }
        if (local_d8 != 0) {
          *(long *)arg2 = local_d8;
        }
        if (local_b4 != 0) {
          *(int *)(arg2 + 0x24) = local_b4;
        }
        if (iVar5 != 0) {
          *(int *)(arg2 + 0x20) = iVar5;
        }
        uVar10 = uVar10 + 1;
        local_e0 = 1;
        if ((int)(uint) * (ushort *)(self + 0x4120) <= (int)uVar10)
          goto LAB_004eb3e0;
      }
      if (local_84 < 0.0) {
        uVar4 = *(uint64_t *)(arg1 + 0xa0);
        local_44 = DAT_005be6e4 /* R:0.5f */ * TileLevel__fLevelGridWH;
        *(uint32_t *)(arg1 + 0x9c) = 1;
        local_58._0_4_ = (uint32_t)uVar4;
        local_58._4_4_ = (float)((ulong)uVar4 >> 0x20);
        local_48 = (uint32_t)local_58;
        local_44 = local_58._4_4_ - local_44;
        local_58 = uVar4;
        Vector2__operator_assign((Vector2 *)(arg1 + 0xa0), (Vector2 *)&local_48);
        iVar5 = ArbitraryBlockCollision((GRIDBLOCK *)(*(long *)(self + 0x4130) + lVar8 + 8), arg1,
                                        (TileCollisionInfo *)&local_d8, (Vector2 *)&local_78,
                                        (Vector2 *)&local_88, (Vector2 *)arg3, arg3, (int)arg2);
        if (iVar5 != 0)
          goto LAB_004eb2a1;
        *(uint32_t *)(arg1 + 0x9c) = 1;
        Vector2__operator_assign((Vector2 *)(arg1 + 0xa0), (Vector2 *)&local_58);
      }
    LAB_004eb02e:
      plVar9 = (long *)(*(long *)(self + 0x4130) + lVar8);
      fStack_74 = *(float *)(*plVar9 + 0x28);
      pfVar1 = (float *)(*plVar9 + 0x24);
      local_78 = *pfVar1;
      local_68[0] = *(uint64_t *)pfVar1;
      if (lVar7 != 0) {
        Vector2__operator_assign((Vector2 *)local_68, (Vector2 *)(lVar7 + 0x60));
        plVar9 = (long *)(*(long *)(self + 0x4130) + lVar8);
      }
      if (*(int *)((long)plVar9 + 0x14) == 0) {
        local_78 = local_78 + TileLevel__fLevelGridWH;
      } else {
        fStack_74 = fStack_74 + TileLevel__fLevelGridWH;
      }
      iVar5 = ArbitraryBlockCollision((GRIDBLOCK *)((long)plVar9 + 0xc), arg1,
                                      (TileCollisionInfo *)&local_d8, (Vector2 *)&local_78,
                                      (Vector2 *)&local_88, (Vector2 *)arg3, arg3, (int)arg2);
      if (iVar5 == 0) {
        if (local_84 < 0.0) {
          uVar4 = *(uint64_t *)(arg1 + 0xa0);
          local_44 = DAT_005be6e4 /* R:0.5f */ * TileLevel__fLevelGridWH;
          *(uint32_t *)(arg1 + 0x9c) = 1;
          local_58._0_4_ = (uint32_t)uVar4;
          local_58._4_4_ = (float)((ulong)uVar4 >> 0x20);
          local_48 = (uint32_t)local_58;
          local_44 = local_58._4_4_ - local_44;
          local_58 = uVar4;
          Vector2__operator_assign((Vector2 *)(arg1 + 0xa0), (Vector2 *)&local_48);
          iVar5 =
              ArbitraryBlockCollision((GRIDBLOCK *)(*(long *)(self + 0x4130) + lVar8 + 0xc), arg1,
                                      (TileCollisionInfo *)&local_d8, (Vector2 *)&local_78,
                                      (Vector2 *)&local_88, (Vector2 *)arg3, arg3, (int)arg2);
          if (iVar5 != 0)
            goto LAB_004eb4b0;
          *(uint32_t *)(arg1 + 0x9c) = 1;
          Vector2__operator_assign((Vector2 *)(arg1 + 0xa0), (Vector2 *)&local_58);
        }
      } else {
      LAB_004eb4b0:
        if (iVar5 == 1)
          goto LAB_004eb2aa;
      }
      plVar9 = (long *)(*(long *)(self + 0x4130) + lVar8);
      fStack_74 = *(float *)(*plVar9 + 0x28);
      pfVar1 = (float *)(*plVar9 + 0x24);
      local_78 = *pfVar1;
      local_68[0] = *(uint64_t *)pfVar1;
      if (lVar7 != 0) {
        Vector2__operator_assign((Vector2 *)local_68, (Vector2 *)(lVar7 + 0x60));
        plVar9 = (long *)(*(long *)(self + 0x4130) + lVar8);
      }
      if (*(int *)((long)plVar9 + 0x14) == 0) {
        local_78 = local_78 - TileLevel__fLevelGridWH;
      } else {
        fStack_74 = fStack_74 - TileLevel__fLevelGridWH;
      }
      iVar5 = ArbitraryBlockCollision((GRIDBLOCK *)(plVar9 + 2), arg1,
                                      (TileCollisionInfo *)&local_d8, (Vector2 *)&local_78,
                                      (Vector2 *)&local_88, (Vector2 *)arg3, arg3, (int)arg2);
      if (iVar5 == 0) {
        if (local_84 < 0.0) {
          uVar4 = *(uint64_t *)(arg1 + 0xa0);
          local_44 = DAT_005be6e4 /* R:0.5f */ * TileLevel__fLevelGridWH;
          *(uint32_t *)(arg1 + 0x9c) = 1;
          local_58._0_4_ = (uint32_t)uVar4;
          local_58._4_4_ = (float)((ulong)uVar4 >> 0x20);
          local_48 = (uint32_t)local_58;
          local_44 = local_58._4_4_ - local_44;
          local_58 = uVar4;
          Vector2__operator_assign((Vector2 *)(arg1 + 0xa0), (Vector2 *)&local_48);
          iVar5 =
              ArbitraryBlockCollision((GRIDBLOCK *)(*(long *)(self + 0x4130) + lVar8 + 0x10), arg1,
                                      (TileCollisionInfo *)&local_d8, (Vector2 *)&local_78,
                                      (Vector2 *)&local_88, (Vector2 *)arg3, arg3, (int)arg2);
          if (iVar5 != 0)
            goto LAB_004eb560;
          *(uint32_t *)(arg1 + 0x9c) = 1;
          Vector2__operator_assign((Vector2 *)(arg1 + 0xa0), (Vector2 *)&local_58);
        }
      } else {
      LAB_004eb560:
        if (iVar5 == 1)
          goto LAB_004eb2aa;
      }
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < (int)(uint) * (ushort *)(self + 0x4120));
  LAB_004eb3e0:
    if ((((local_e0 == 1) && (*(int *)(arg2 + 0x20) == 2)) &&
         (lVar8 = *(long *)(arg2 + 0x18), lVar8 != 0)) &&
        ((lVar8 == *(long *)(arg2 + 8) || (lVar8 == *(long *)arg2)))) {
      *(long *)(arg2 + 0x18) = 0;
      *(uint32_t *)(arg2 + 0x24) = 0;
    }
  }
  return local_e0;
}

/* ======================================================================
 * SMBPalette__ObstacleCollision  (Ghidra `ObstacleCollision` @ 004eb7e0)
 * Signature: uint8_t __thiscall ObstacleCollision(SMBPalette * self, SceneObject2D * arg1, Bounds * arg2)
 * Class: SMBPalette
 * Calls: `FlashLibraryInstance__IsBoundsTouchingInstance__00574660`, `GSMBChapterData__GetCurrentLevelData`, `GSMBMenu__IsInReplayMode`, `GSuperMeatBoy__ActivateWarpZone`, `GSuperMeatBoy__BeatLevel`, `GSuperMeatBoy__getChar`, `GetRandomINT`, `IsBoundsTouchingBounds`, `IsLaserHittingObject`, `SMBCamera__ScreenShake` (+2 more)
 * Called by: `LastLayer__Render`, `MeatBoyCharactor__Update`, `RaptureBoss__UpdateMaggot`, `SMBAnimalAirCritterUpdate`, `SMBAnimalGroundCritterUpdate`, `SMBBloodExplosion__Update`, `SMBChargerUpdate`
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SMBPalette__ObstacleCollision(SceneObject2D*, Bounds*) */

ulong __thiscall SMBPalette__ObstacleCollision(SMBPalette *self, SceneObject2D *arg1, Bounds *arg2)

{
  SMBPalette *pSVar1;
  SMBLaser *pSVar2;
  TileLevelSetPiece TVar3;
  GSuperMeatBoy *pGVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  ushort uVar11;
  long lVar12;
  uint uVar13;
  int iVar14;
  SMBPalette *pSVar15;
  long lVar16;
  long lVar17;
  Bounds *pBVar18;
  bool bVar19;
  float fVar20;
  Bounds local_98[4];
  float local_94;
  uint64_t local_90;
  Bounds local_88[4];
  float local_84;
  uint32_t local_80;
  uint32_t local_7c;
  float local_78;
  float local_74;
  float local_68;
  float fStack_64;
  uint32_t local_58;
  uint32_t local_54;
  Vector2 local_48[12];
  uint8_t local_3c[12];

  *(uint32_t *)(self + 0x60) = 0;
  bVar19 = (*(uint *)(self + 0x1a7c) & 0x40) != 0;
  if (((*(uint *)(self + 0x1a7c) & 4) == 0) || (*(int *)(self + 0x1a80) == 1)) {
    if (!bVar19) {
      return 0;
    }
  } else if ((!bVar19) && (uVar9 = PlatformDeath(self, arg1, arg2), (int)uVar9 == 1)) {
    *(uint32_t *)(self + 0x60) = 8;
    return uVar9;
  }
  pBVar18 = arg2;
  if (arg2 == (Bounds *)0x0) {
    pBVar18 = *(Bounds **)(arg1 + 0x48);
  }
  if ((!bVar19) && (uVar11 = *(ushort *)(self + 0x4008), uVar11 != 0)) {
    uVar9 = 0;
    do {
      while (true) {
        pSVar2 = (SMBLaser *)(*(long *)(self + 0x4018) + (uVar9 & 0xffff) * 0x28);
        if (*(int *)(pSVar2 + 0xc) != 1)
          break;
        iVar7 = IsLaserHittingObject(arg1, pBVar18, pSVar2);
        if (iVar7 == 1) {
          return 1;
        }
        uVar11 = *(ushort *)(self + 0x4008);
        uVar13 = (int)uVar9 + 1;
        uVar9 = (ulong)uVar13;
        if ((int)(uint)uVar11 <= (int)uVar13)
          goto LAB_004eb8c8;
      }
      uVar13 = (int)uVar9 + 1;
      uVar9 = (ulong)uVar13;
    } while ((int)uVar13 < (int)(uint)uVar11);
  }
LAB_004eb8c8:
  uVar13 = *(uint *)(self + 0x1a7c);
  if ((uVar13 & 4) != 0) {
    if (arg2 == (Bounds *)0x0) {
      arg2 = *(Bounds **)(arg1 + 0x48);
    }
    if (*(short *)(self + 0x3f68) != 0) {
      uVar13 = 0;
      do {
        Vector2__operator_assign(
            (Vector2 *)(demonSpawnCircle + 8),
            (Vector2 *)((ulong)(uVar13 & 0xffff) * 0x108 + *(long *)(self + 0x3f78) + 0xa0));
        iVar7 = IsBoundsTouchingBounds((Bounds *)demonSpawnCircle, arg2);
        if (iVar7 == 1)
          goto LAB_004ebdb2;
        uVar13 = uVar13 + 1;
      } while ((int)uVar13 < (int)(uint) * (ushort *)(self + 0x3f68));
      uVar13 = *(uint *)(self + 0x1a7c);
    }
  }
  if (((uVar13 & 0x10) != 0) && (uVar13 = 0, *(short *)(self + 0x2aa8) != 0)) {
    do {
      lVar16 = (ulong)(uVar13 & 0xffff) * 0x20;
      lVar10 = *(long *)(*(long *)(self + 0x2ab8) + lVar16);
      lVar12 = *(long *)(self + 0x98);
      *(uint32_t *)(lVar12 + 0x30) = *(uint32_t *)(lVar10 + 0x24);
      *(uint32_t *)(lVar12 + 0x34) = *(uint32_t *)(lVar10 + 0x28);
      *(uint32_t *)(lVar12 + 0x38) = *(uint32_t *)(lVar10 + 0x2c);
      *(uint32_t *)(lVar12 + 0x3c) = *(uint32_t *)(lVar10 + 0x30);
      Vector2__operator_assign((Vector2 *)(*(long *)(self + 0x98) + 0x40),
                               (Vector2 *)(lVar10 + 0x34));
      *(uint32_t *)(*(long *)(self + 0x98) + 0x48) = *(uint32_t *)(lVar10 + 0x3c);
      *(uint32_t *)(*(long *)(self + 0x98) + 0x4c) = *(uint32_t *)(lVar10 + 0x3c);
      *(uint *)(*(long *)(self + 0x98) + 0x20) = (uint) * (byte *)(lVar10 + 0x20);
      *(uint32_t *)(*(long *)(self + 0x98) + 0x58) = 0;
      *(uint32_t *)(*(long *)(self + 0x98) + 0x60) = *(uint32_t *)(lVar10 + 0x44);
      iVar7 = FlashLibraryInstance__IsBoundsTouchingInstance__00574660(
          *(FlashLibraryInstance **)(self + 0x98), pBVar18);
      if (iVar7 == 1) {
        if (*(int *)(*(long *)(self + 0x98) + 0x20) == *(int *)(self + 0x4290)) {
          *(uint32_t *)(*(long *)(self + 0x2ab8) + 0x18 + lVar16) = 1;
        }
        *(uint32_t *)(*(long *)(self + 0x2ab8) + 0x1c + lVar16) = 1;
        return 0;
      }
      uVar13 = uVar13 + 1;
      *(uint32_t *)(*(long *)(self + 0x2ab8) + 0x1c + lVar16) = 0;
    } while ((int)uVar13 < (int)(uint) * (ushort *)(self + 0x2aa8));
  }
  pSVar15 = self + 0x168;
  iVar7 = 1;
  while (true) {
    lVar10 = *(long *)pSVar15;
    if (lVar10 == 0)
      break;
    bVar5 = *(byte *)(lVar10 + 0x20);
    if ((((((uint)bVar5 != *(uint *)(self + 0x43c4)) &&
           ((uint)bVar5 != *(uint *)(pPalProps + 0x3c))) &&
          (uVar13 = (uint)bVar5, uVar13 != *(uint *)(pPalProps + 0x38))) &&
         ((uVar13 != *(uint *)(pPalProps + 0x44) && (uVar13 != *(uint *)(pPalProps + 0x34))))) &&
        (uVar13 != *(uint *)(pPalProps + 0x40))) {
      if ((*(int *)(SuperMeatBoy + 0x3a4) == 0) && ((uint)bVar5 == *(uint *)(self + 0x42b4))) {
        iVar8 = GSMBMenu__IsInReplayMode(SMBMenu);
        if ((iVar8 != 0) ||
            (lVar10 = GSMBChapterData__GetCurrentLevelData(SMBChapterData, 0xffffffff, 0xb),
             (*(byte *)(lVar10 + 4) & 1) != 0))
          goto LAB_004eb9fe;
        lVar10 = *(long *)pSVar15;
      }
      if (*(int *)(SuperMeatBoy + 0x2c) == 0) {
        (**(code **)(*(long *)self + 0x58))(self, lVar10, &local_78, local_3c, &local_68);
        local_68 = local_68 + *(float *)(*(long *)pSVar15 + 0x24);
        fStack_64 = fStack_64 + *(float *)(*(long *)pSVar15 + 0x28);
        local_98[0] = (Bounds)0x11;
        local_90 = CONCAT44(fStack_64, local_68);
        local_94 = (local_74 * local_74 + local_78 * local_78) * DAT_005be6e4 /* R:0.5f */;
        iVar8 = IsBoundsTouchingBounds(pBVar18, local_98);
        if (iVar8 == 0)
          goto LAB_004eb9fe;
        lVar10 = *(long *)pSVar15;
      }
      local_58 = 0x3f800000;
      local_54 = 0x3f800000;
      bVar5 = *(byte *)(lVar10 + 0x21) >> 2;
      bVar6 = bVar5 & 3;
      if (bVar6 == 1) {
      LAB_004eb926:
        local_58 = 0xbf800000;
      } else if (bVar6 == 2) {
        local_54 = 0xbf800000;
      } else if ((bVar5 & 3) != 0) {
        local_54 = 0xbf800000;
        goto LAB_004eb926;
      }
      lVar12 = *(long *)(self + 0x98);
      *(uint32_t *)(lVar12 + 0x30) = *(uint32_t *)(lVar10 + 0x24);
      *(uint32_t *)(lVar12 + 0x34) = *(uint32_t *)(lVar10 + 0x28);
      *(uint32_t *)(lVar12 + 0x38) = *(uint32_t *)(lVar10 + 0x2c);
      *(uint32_t *)(lVar12 + 0x3c) = *(uint32_t *)(lVar10 + 0x30);
      Vector2__operator_mul__005be200(local_48, (Vector2 *)(*(long *)pSVar15 + 0x34));
      Vector2__operator_assign((Vector2 *)(*(long *)(self + 0x98) + 0x40), local_48);
      *(uint32_t *)(*(long *)(self + 0x98) + 0x48) = *(uint32_t *)(*(long *)pSVar15 + 0x3c);
      *(uint32_t *)(*(long *)(self + 0x98) + 0x4c) = *(uint32_t *)(*(long *)pSVar15 + 0x3c);
      *(uint *)(*(long *)(self + 0x98) + 0x20) = (uint) * (byte *)(*(long *)pSVar15 + 0x20);
      *(float *)(*(long *)(self + 0x98) + 0x58) =
          *(float *)(*(long *)pSVar15 + 0x40) + *(float *)(*(long *)pSVar15 + 0x48);
      *(uint32_t *)(*(long *)(self + 0x98) + 0x60) = *(uint32_t *)(*(long *)pSVar15 + 0x44);
      iVar8 = FlashLibraryInstance__IsBoundsTouchingInstance__00574660(
          *(FlashLibraryInstance **)(self + 0x98), pBVar18);
      if (iVar8 == 1) {
        TVar3 = (*(TileLevelSetPiece **)pSVar15)[0x20];
        if ((uint)(byte)TVar3 == *(uint *)(self + 0x43ac)) {
          if (((bVar19) || (((byte)self[0x1a7c] & 0x20) != 0)) &&
              (uVar9 = PortalCollision(self, arg1, *(TileLevelSetPiece **)pSVar15),
               (int)uVar9 == 1)) {
            *(uint32_t *)(self + 0x60) = 4;
            return uVar9 & 0xffffffffffffff00;
          }
        } else if ((((uint)(byte)TVar3 == *(uint *)(self + 0x43b0)) ||
                    ((uint)(byte)TVar3 == *(uint *)(self + 0x43b4))) ||
                   (bVar19))
          goto LAB_004eb9fe;
        if (*(int *)(self + 0x2a50) < 1)
          goto LAB_004ebdb2;
        iVar14 = 0;
        iVar8 = *(int *)(*(long *)(self + 0x98) + 0x20);
        pSVar15 = self + 0x1ab4;
        if (*(int *)(self + 0x1ab0) != iVar8)
          goto LAB_004ebcd8;
        iVar14 = 0;
        goto LAB_004ec4e0;
      }
    }
  LAB_004eb9fe:
    pSVar15 = pSVar15 + 0x10;
    iVar7 = iVar7 + 1;
  }
  uVar9 = 0;
  local_84 = 1.0;
  local_80 = 0;
  local_7c = 0;
  local_88[0] = (Bounds)0x11;
  if (*(short *)(self + 0x3ec8) != 0) {
    do {
      lVar10 = (uVar9 & 0xffff) * 0xb68;
      lVar12 = lVar10 + *(long *)(self + 0x3ed8);
      if (*(int *)(lVar12 + 0x120) == 0) {
        fVar20 = 1.0;
        switch (*(uint32_t *)(lVar12 + 0x18)) {
        case 0:
        case 3:
          fVar20 = *(float *)(self + 0x42e8);
          break;
        case 1:
          fVar20 = *(float *)(self + 0x4308);
          break;
        case 2:
          fVar20 = *(float *)(self + 0x4328);
          break;
        case 4:
          fVar20 = *(float *)(self + 0x4380);
        }
        Vector2__operator_assign((Vector2 *)&local_80, (Vector2 *)(lVar12 + 200));
        local_84 = fVar20 * *(float *)(*(long *)(*(long *)(self + 0x3ed8) + lVar10) + 0x34);
        iVar7 = IsBoundsTouchingBounds(pBVar18, local_88);
        if (iVar7 != 1) {
          lVar12 = lVar10 + *(long *)(self + 0x3ed8);
          goto LAB_004ebe97;
        }
        iVar7 = 0;
      LAB_004ec6b8:
        if (*(int *)(lVar10 + *(long *)(self + 0x3ed8) + 0x18) == 3) {
          lVar12 = (long)iVar7 * 0x120;
          *(uint32_t *)(lVar10 + *(long *)(self + 0x3ed8) + 0x120 + lVar12) = 1;
          *(uint32_t *)(lVar10 + 0x124 + *(long *)(self + 0x3ed8) + lVar12) = 0;
          iVar7 = GetRandomINT(0, 0x13a);
          pGVar4 = SuperMeatBoy;
          fVar20 = DAT_005bfba0 /* R:0.20000000298023224f */;
          lVar10 = lVar12 + 0x28 + lVar10 + *(long *)(self + 0x3ed8);
          *(uint32_t *)(lVar10 + 0x9c) = 1;
          *(float *)(lVar10 + 0xd8) = (float)iVar7 * DAT_005c07b0 /* R:0.009999999776482582f */;
          SMBCamera__ScreenShake(*(SMBCamera **)(pGVar4 + 0x38), _DAT_005bff44 /* R:5.0f */,
                                 fVar20);
        }
        goto LAB_004ebdb2;
      }
    LAB_004ebe97:
      if (*(int *)(lVar12 + 0x240) == 0) {
        fVar20 = DAT_005be894 /* R:1.0f */;
        switch (*(uint32_t *)(lVar12 + 0x18)) {
        case 0:
        case 3:
          fVar20 = *(float *)(self + 0x42e8);
          break;
        case 1:
          fVar20 = *(float *)(self + 0x4308);
          break;
        case 2:
          fVar20 = *(float *)(self + 0x4328);
          break;
        case 4:
          fVar20 = *(float *)(self + 0x4380);
        }
        Vector2__operator_assign((Vector2 *)&local_80, (Vector2 *)(lVar12 + 0x1e8));
        local_84 = fVar20 * *(float *)(*(long *)(*(long *)(self + 0x3ed8) + lVar10) + 0x34);
        iVar7 = IsBoundsTouchingBounds(pBVar18, local_88);
        if (iVar7 == 1) {
          iVar7 = 1;
          goto LAB_004ec6b8;
        }
        lVar12 = lVar10 + *(long *)(self + 0x3ed8);
      }
      if (*(int *)(lVar12 + 0x360) == 0) {
        fVar20 = DAT_005be894 /* R:1.0f */;
        switch (*(uint32_t *)(lVar12 + 0x18)) {
        case 0:
        case 3:
          fVar20 = *(float *)(self + 0x42e8);
          break;
        case 1:
          fVar20 = *(float *)(self + 0x4308);
          break;
        case 2:
          fVar20 = *(float *)(self + 0x4328);
          break;
        case 4:
          fVar20 = *(float *)(self + 0x4380);
        }
        Vector2__operator_assign((Vector2 *)&local_80, (Vector2 *)(lVar12 + 0x308));
        local_84 = fVar20 * *(float *)(*(long *)(*(long *)(self + 0x3ed8) + lVar10) + 0x34);
        iVar7 = IsBoundsTouchingBounds(pBVar18, local_88);
        if (iVar7 == 1) {
          iVar7 = 2;
          goto LAB_004ec6b8;
        }
        lVar12 = lVar10 + *(long *)(self + 0x3ed8);
      }
      if (*(int *)(lVar12 + 0x480) == 0) {
        fVar20 = DAT_005be894 /* R:1.0f */;
        switch (*(uint32_t *)(lVar12 + 0x18)) {
        case 0:
        case 3:
          fVar20 = *(float *)(self + 0x42e8);
          break;
        case 1:
          fVar20 = *(float *)(self + 0x4308);
          break;
        case 2:
          fVar20 = *(float *)(self + 0x4328);
          break;
        case 4:
          fVar20 = *(float *)(self + 0x4380);
        }
        Vector2__operator_assign((Vector2 *)&local_80, (Vector2 *)(lVar12 + 0x428));
        local_84 = fVar20 * *(float *)(*(long *)(*(long *)(self + 0x3ed8) + lVar10) + 0x34);
        iVar7 = IsBoundsTouchingBounds(pBVar18, local_88);
        if (iVar7 == 1) {
          iVar7 = 3;
          goto LAB_004ec6b8;
        }
        lVar12 = lVar10 + *(long *)(self + 0x3ed8);
      }
      if (*(int *)(lVar12 + 0x5a0) == 0) {
        fVar20 = DAT_005be894 /* R:1.0f */;
        switch (*(uint32_t *)(lVar12 + 0x18)) {
        case 0:
        case 3:
          fVar20 = *(float *)(self + 0x42e8);
          break;
        case 1:
          fVar20 = *(float *)(self + 0x4308);
          break;
        case 2:
          fVar20 = *(float *)(self + 0x4328);
          break;
        case 4:
          fVar20 = *(float *)(self + 0x4380);
        }
        Vector2__operator_assign((Vector2 *)&local_80, (Vector2 *)(lVar12 + 0x548));
        local_84 = fVar20 * *(float *)(*(long *)(*(long *)(self + 0x3ed8) + lVar10) + 0x34);
        iVar7 = IsBoundsTouchingBounds(pBVar18, local_88);
        if (iVar7 == 1) {
          iVar7 = 4;
          goto LAB_004ec6b8;
        }
        lVar12 = lVar10 + *(long *)(self + 0x3ed8);
      }
      if (*(int *)(lVar12 + 0x6c0) == 0) {
        fVar20 = DAT_005be894 /* R:1.0f */;
        switch (*(uint32_t *)(lVar12 + 0x18)) {
        case 0:
        case 3:
          fVar20 = *(float *)(self + 0x42e8);
          break;
        case 1:
          fVar20 = *(float *)(self + 0x4308);
          break;
        case 2:
          fVar20 = *(float *)(self + 0x4328);
          break;
        case 4:
          fVar20 = *(float *)(self + 0x4380);
        }
        Vector2__operator_assign((Vector2 *)&local_80, (Vector2 *)(lVar12 + 0x668));
        local_84 = fVar20 * *(float *)(*(long *)(*(long *)(self + 0x3ed8) + lVar10) + 0x34);
        iVar7 = IsBoundsTouchingBounds(pBVar18, local_88);
        if (iVar7 == 1) {
          iVar7 = 5;
          goto LAB_004ec6b8;
        }
        lVar12 = lVar10 + *(long *)(self + 0x3ed8);
      }
      if (*(int *)(lVar12 + 0x7e0) == 0) {
        fVar20 = DAT_005be894 /* R:1.0f */;
        switch (*(uint32_t *)(lVar12 + 0x18)) {
        case 0:
        case 3:
          fVar20 = *(float *)(self + 0x42e8);
          break;
        case 1:
          fVar20 = *(float *)(self + 0x4308);
          break;
        case 2:
          fVar20 = *(float *)(self + 0x4328);
          break;
        case 4:
          fVar20 = *(float *)(self + 0x4380);
        }
        Vector2__operator_assign((Vector2 *)&local_80, (Vector2 *)(lVar12 + 0x788));
        local_84 = fVar20 * *(float *)(*(long *)(*(long *)(self + 0x3ed8) + lVar10) + 0x34);
        iVar7 = IsBoundsTouchingBounds(pBVar18, local_88);
        if (iVar7 == 1) {
          iVar7 = 6;
          goto LAB_004ec6b8;
        }
        lVar12 = lVar10 + *(long *)(self + 0x3ed8);
      }
      if (*(int *)(lVar12 + 0x900) == 0) {
        fVar20 = DAT_005be894 /* R:1.0f */;
        switch (*(uint32_t *)(lVar12 + 0x18)) {
        case 0:
        case 3:
          fVar20 = *(float *)(self + 0x42e8);
          break;
        case 1:
          fVar20 = *(float *)(self + 0x4308);
          break;
        case 2:
          fVar20 = *(float *)(self + 0x4328);
          break;
        case 4:
          fVar20 = *(float *)(self + 0x4380);
        }
        Vector2__operator_assign((Vector2 *)&local_80, (Vector2 *)(lVar12 + 0x8a8));
        local_84 = fVar20 * *(float *)(*(long *)(*(long *)(self + 0x3ed8) + lVar10) + 0x34);
        iVar7 = IsBoundsTouchingBounds(pBVar18, local_88);
        if (iVar7 == 1) {
          iVar7 = 7;
          goto LAB_004ec6b8;
        }
        lVar12 = lVar10 + *(long *)(self + 0x3ed8);
      }
      if (*(int *)(lVar12 + 0xa20) == 0) {
        fVar20 = DAT_005be894 /* R:1.0f */;
        switch (*(uint32_t *)(lVar12 + 0x18)) {
        case 0:
        case 3:
          fVar20 = *(float *)(self + 0x42e8);
          break;
        case 1:
          fVar20 = *(float *)(self + 0x4308);
          break;
        case 2:
          fVar20 = *(float *)(self + 0x4328);
          break;
        case 4:
          fVar20 = *(float *)(self + 0x4380);
        }
        Vector2__operator_assign((Vector2 *)&local_80, (Vector2 *)(lVar12 + 0x9c8));
        local_84 = fVar20 * *(float *)(*(long *)(*(long *)(self + 0x3ed8) + lVar10) + 0x34);
        iVar7 = IsBoundsTouchingBounds(pBVar18, local_88);
        if (iVar7 == 1) {
          iVar7 = 8;
          goto LAB_004ec6b8;
        }
        lVar12 = lVar10 + *(long *)(self + 0x3ed8);
      }
      if (*(int *)(lVar12 + 0xb40) == 0) {
        fVar20 = DAT_005be894 /* R:1.0f */;
        switch (*(uint32_t *)(lVar12 + 0x18)) {
        case 0:
        case 3:
          fVar20 = *(float *)(self + 0x42e8);
          break;
        case 1:
          fVar20 = *(float *)(self + 0x4308);
          break;
        case 2:
          fVar20 = *(float *)(self + 0x4328);
          break;
        case 4:
          fVar20 = *(float *)(self + 0x4380);
        }
        Vector2__operator_assign((Vector2 *)&local_80, (Vector2 *)(lVar12 + 0xae8));
        local_84 = fVar20 * *(float *)(*(long *)(*(long *)(self + 0x3ed8) + lVar10) + 0x34);
        iVar7 = IsBoundsTouchingBounds(pBVar18, local_88);
        if (iVar7 == 1) {
          iVar7 = 9;
          goto LAB_004ec6b8;
        }
      }
      uVar13 = (int)uVar9 + 1;
      uVar9 = (ulong)uVar13;
    } while ((int)uVar13 < (int)(uint) * (ushort *)(self + 0x3ec8));
  }
  *(uint32_t *)(self + 0x60) = 0;
  return 0;
LAB_004ebcd8:
  do {
    if ((*(int *)pSVar15 == iVar8) && (uVar13 = *(uint *)(pSVar15 + 0x20), (uVar13 & 0x20) == 0))
      goto LAB_004ec639;
    iVar14 = iVar14 + 1;
    if (iVar14 == *(int *)(self + 0x2a50)) {
    LAB_004ebdb2:
      *(uint32_t *)(self + 0x60) = 2;
      return 1;
    }
    pSVar1 = pSVar15 + 0x24;
    pSVar15 = pSVar15 + 0x28;
  } while (*(int *)pSVar1 != iVar8);
LAB_004ec4e0:
  lVar16 = (long)iVar14;
  lVar12 = (long)(iVar7 + -1);
  if (((byte)self[lVar16 * 0x28 + 0x1ad4] & 0x20) == 0) {
    *(uint32_t *)(*(long *)(self + (lVar12 + 0x16) * 0x10 + 8) + 0x40) = 0;
    *(uint32_t *)(*(long *)(self + (lVar12 + 0x16) * 0x10 + 8) + 0x48) = 0;
  }
  lVar17 = lVar16 * 0x28;
  Vector2__operator_assign((Vector2 *)(self + lVar17 + 0x1ac4),
                           (Vector2 *)(*(long *)(self + (lVar12 + 0x16) * 0x10 + 8) + 0x34));
  bVar19 = false;
  Vector2__operator_assign((Vector2 *)(*(long *)(self + (lVar12 + 0x16) * 0x10 + 8) + 0x34),
                           (Vector2 *)(self + lVar17 + 0x1ac4));
  uVar13 = *(uint *)(self + lVar17 + 0x1ad4);
  if (((uVar13 & 2) != 0) && (bVar19 = true, ((byte)self[0x1a7c] & 2) != 0)) {
    if (*(short *)(self + 0x68) == 0) {
      ActivateEnd(self, iVar7 + -1);
      uVar13 = *(uint *)(self + lVar17 + 0x1ad4);
    } else {
      GSuperMeatBoy__BeatLevel(SuperMeatBoy, 1);
      uVar13 = *(uint *)(self + lVar17 + 0x1ad4);
    }
  }
  pGVar4 = SuperMeatBoy;
  if (((uVar13 & 0x10) != 0) && (bVar19 = true, ((byte)self[0x1a7c] & 8) != 0)) {
    *(char *)(lVar10 + 0x20) = (char)*(uint32_t *)(self + lVar16 * 0x28 + 0x1ab4);
    GSuperMeatBoy__ActivateWarpZone(pGVar4);
    uVar13 = *(uint *)(self + lVar16 * 0x28 + 0x1ad4);
  }
  if (((uVar13 & 8) != 0) && (bVar19 = true, ((byte)self[0x1a7c] & 0x10) != 0)) {
    SMBCurrLevelData._4_4_ = SMBCurrLevelData._4_4_ | 1;
    *(char *)(lVar10 + 0x20) = (char)*(uint32_t *)(self + lVar16 * 0x28 + 0x1ab4);
    uVar13 = *(uint *)(self + lVar16 * 0x28 + 0x1ad4);
  }
  if ((uVar13 & 0x40) == 0) {
    if ((!bVar19) && ((uVar13 & 0x101) == 0x101)) {
      lVar12 = GSuperMeatBoy__getChar(SuperMeatBoy, 0);
      if (*(int *)(lVar12 + 0xa54) == 0) {
        *(char *)(lVar10 + 0x20) = (char)*(uint32_t *)(self + lVar16 * 0x28 + 0x1ab4);
        uVar13 = *(uint *)(self + lVar16 * 0x28 + 0x1ad4);
      } else {
        uVar13 = *(uint *)(self + lVar16 * 0x28 + 0x1ad4);
      }
    }
  } else if (((byte)self[0x1a7c] & 0x10) != 0) {
    *(char *)(lVar10 + 0x20) = (char)*(uint32_t *)(self + lVar16 * 0x28 + 0x1ab4);
    AddDisappearBlock(self, *(TileLevelSetPiece **)(self + (lVar12 + 0x16) * 0x10 + 8),
                      *(int *)(self + 17000));
    uVar13 = *(uint *)(self + lVar16 * 0x28 + 0x1ad4);
  }
LAB_004ec639:
  return (ulong)(uVar13 & 1);
}

/* ======================================================================
 * SMBPalette__Update  (Ghidra `Update` @ 004ec850)
 * Signature: uint8_t __thiscall Update(SMBPalette * self)
 * Class: SMBPalette
 * Calls: `Apply2DPhysics`, `BoundingSquare__BoundingSquare`, `CriticalSection__Lock`, `CriticalSection__Unlock`, `FlashLibraryInstance__IsBoundsTouchingInstance__00574660`, `GSuperMeatBoy__getChar`, `GetRandomINT`, `RibbonEmitter__AddRibbonPoint`, `SMBCamera__ScreenShake`, `SMBPortal__Update` (+16 more)
 * Called by: `GSuperMeatBoy__Update__00516690`
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SMBPalette__Update() */

void __thiscall SMBPalette__Update(SMBPalette *self)

{
  SMBCurrUnlockBlock *pSVar1;
  int *piVar2;
  long *plVar3;
  SceneObject2D *pSVar4;
  ushort *puVar5;
  long lVar6;
  void *pvVar7;
  GSuperMeatBoy *pGVar8;
  byte bVar9;
  byte bVar10;
  short sVar11;
  ushort uVar12;
  ushort uVar13;
  int iVar14;
  uint32_t uVar15;
  long *plVar16;
  short *psVar17;
  byte *pbVar18;
  byte *pbVar19;
  byte *pbVar20;
  byte *pbVar21;
  byte *pbVar22;
  long lVar23;
  ulong uVar24;
  void *pvVar25;
  void *pvVar26;
  GRIDBLOCK *pGVar27;
  SMBShooter *pSVar28;
  ulong uVar29;
  uint8_t uVar30;
  short sVar31;
  ushort uVar32;
  uint64_t extraout_RDX;
  uint64_t extraout_RDX_00;
  long lVar33;
  uint64_t extraout_RDX_01;
  uint64_t extraout_RDX_02;
  uint64_t extraout_RDX_03;
  ulong uVar34;
  uint64_t extraout_RDX_04;
  uint64_t extraout_RDX_05;
  uint64_t extraout_RDX_06;
  long lVar35;
  long lVar36;
  uint64_t *puVar37;
  uint64_t *puVar38;
  uint uVar39;
  int iVar40;
  uint uVar41;
  bool bVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  float fVar47;
  float fVar48;
  uint32_t uStack_564;
  BoundingSquare local_558[80];
  uint32_t local_508;
  uint32_t local_4f8;
  uint64_t local_4b8;
  uint64_t local_4b0;
  uint64_t local_4a8;
  uint64_t local_4a0;
  uint32_t local_498;
  uint32_t uStack_494;
  uint32_t local_470;
  uint64_t local_468;
  uint64_t local_460;
  uint64_t local_458;
  uint64_t local_450;
  uint32_t local_448;
  uint32_t uStack_444;
  uint32_t local_420;
  uint64_t local_418;
  uint64_t local_410;
  uint64_t local_408;
  uint64_t local_400;
  uint32_t local_3f8;
  uint32_t local_3f4;
  uint32_t local_3d0;
  uint64_t local_3c8;
  uint64_t local_3c0;
  uint64_t local_3b8;
  uint64_t local_3b0;
  uint32_t local_3a8;
  uint32_t local_3a4;
  uint32_t local_380;
  uint64_t local_378;
  uint64_t local_370;
  uint64_t local_368;
  uint64_t local_360;
  uint32_t local_358;
  uint32_t local_354;
  uint32_t local_330;
  Matrix4x4 local_328[64];
  Matrix4x4 local_2e8[64];
  Matrix4x4 local_2a8[64];
  byte *local_268;
  uint64_t local_260;
  float local_258;
  float fStack_254;
  uint32_t local_250;
  Bounds local_248[4];
  uint32_t local_244;
  uint64_t local_240;
  Bounds local_238[4];
  uint32_t local_234;
  uint64_t local_230;
  uint64_t local_228;
  uint64_t local_220;
  uint64_t local_218;
  uint64_t local_210;
  uint64_t local_208;
  uint64_t local_200;
  uint64_t local_1f8;
  uint64_t local_1f0;
  uint64_t local_1e8;
  uint64_t local_1e0;
  uint64_t local_1d8;
  uint64_t local_1d0;
  uint64_t local_1c8;
  uint64_t local_1c0;
  uint64_t local_1b8;
  uint64_t local_1b0;
  uint64_t local_1a8;
  uint32_t local_198;
  uint32_t local_194;
  Vector2 local_188[16];
  uint64_t local_178;
  Vector2 local_168[16];
  Vector2 local_158[16];
  uint64_t local_148;
  uint32_t local_138;
  uint32_t local_134;
  Vector2 local_128[16];
  uint32_t local_118;
  uint32_t local_114;
  Vector2 local_108[4];
  float local_104;
  uint32_t local_f8;
  uint32_t local_f4;
  Vector2 local_e8[16];
  uint32_t local_d8;
  uint32_t local_d4;
  float local_c8;
  float local_c4;
  uint32_t local_b8;
  uint32_t local_b4;
  Vector2 local_a8[16];
  float local_98;
  uint32_t local_94;
  Vector2 local_88[16];
  float local_78;
  uint32_t local_74;
  uint32_t local_68;
  uint32_t local_64;
  float local_58;
  float local_54;
  uint32_t local_48;
  uint32_t local_44;
  int local_40;
  int local_3c[3];

  bVar9 = 0;
  CriticalSection__Lock((CriticalSection *)(self + 0x2a58), 1);
  if (*(short *)(self + 0x2aa8) != 0) {
    uVar24 = 0;
    do {
      lVar35 = (uVar24 & 0xffff) * 0x20;
      plVar16 = (long *)(lVar35 + *(long *)(self + 0x2ab8));
      fVar47 = *(float *)(plVar16 + 1);
      if ((fVar47 <= 0.0) || ((int)plVar16[3] == 1)) {
        bVar10 = *(byte *)(*plVar16 + 0x20);
        if ((*(uint *)(self + 0x4290) != (uint)bVar10) ||
            ((*(float *)((long)plVar16 + 0x14) <= DAT_005c07a4 /* R:-1.0f */ &&
              ((int)plVar16[3] != 1)))) {
          if ((*(uint *)(self + 0x42a0) != (uint)bVar10) || (*(int *)((long)plVar16 + 0x1c) != 0)) {
            if (*(uint *)(self + 0x4294) == (uint)bVar10) {
              *(int *)(plVar16 + 1) = (int)plVar16[2];
              uVar30 = (uint8_t)*(uint32_t *)(self + 0x42a0);
              lVar36 = *(long *)(*(long *)(self + 0x2ab8) + lVar35);
            } else {
              if (*(uint *)(self + 0x4298) != (uint)bVar10)
                goto LAB_004ec896;
              *(uint32_t *)(plVar16 + 1) = *(uint32_t *)((long)plVar16 + 0xc);
              uVar30 = (uint8_t)*(uint32_t *)(self + 0x4290);
              lVar36 = *(long *)(*(long *)(self + 0x2ab8) + lVar35);
            }
            *(uint8_t *)(lVar36 + 0x20) = uVar30;
            *(uint32_t *)(*(long *)(*(long *)(self + 0x2ab8) + lVar35) + 0x40) = 0;
            plVar16 = (long *)(lVar35 + *(long *)(self + 0x2ab8));
            fVar47 = *(float *)(plVar16 + 1);
            goto LAB_004ec896;
          }
          *(uint32_t *)(plVar16 + 1) = *(uint32_t *)(self + 0x42a8);
          *(char *)(*(long *)(*(long *)(self + 0x2ab8) + lVar35) + 0x20) =
              (char)*(uint32_t *)(self + 0x4298);
          *(uint32_t *)(*(long *)(*(long *)(self + 0x2ab8) + lVar35) + 0x40) = 0;
          uVar15 = *(uint32_t *)(self + 0x4284);
          lVar36 = *(long *)(*(long *)(self + 0x2ab8) + lVar35);
          local_268 = (byte *)TileLevel__GetGridBlock(*(TileLevel **)(SuperMeatBoy + 0x40),
                                                      *(uint32_t *)(lVar36 + 0x54),
                                                      *(uint32_t *)(lVar36 + 0x58), 0);
          local_260 = 0;
          fStack_254 = 0.1;
          fVar47 = *(float *)(lVar36 + 0x4c);
          local_250 = uVar15;
          if (fVar47 == 0.0) {
            if (*(int *)(self + 0x31c8) == -0x5eef3582)
              goto LAB_004eee43;
          LAB_004eecec:
            uVar34 = (ulong)(byte)self[0x31ac];
            *(uint32_t *)(self + 0x31b0) = 0;
            local_258 = fStack_254;
            pvVar25 = malloc(uVar34 + 0xb0);
            puVar37 = (uint64_t *)0x0;
            if (pvVar25 != (void *)0x0) {
              puVar37 = (uint64_t *)((long)pvVar25 + 0x10U +
                                     (uVar34 - ((long)pvVar25 + 0x10U) % uVar34) % uVar34);
              puVar37[-2] = 0xa0;
              puVar37[-1] = pvVar25;
            }
            bVar42 = ((ulong)puVar37 & 1) != 0;
            *(uint64_t **)(self + 0x31b8) = puVar37;
            uVar34 = 0xa0;
            if (bVar42) {
              *(uint8_t *)puVar37 = 0;
              puVar37 = (uint64_t *)((long)puVar37 + 1);
              uVar34 = 0x9f;
            }
            if (((ulong)puVar37 & 2) != 0) {
              *(uint16_t *)puVar37 = 0;
              uVar34 = (ulong)((int)uVar34 - 2);
              puVar37 = (uint64_t *)((long)puVar37 + 2);
            }
            if (((ulong)puVar37 & 4) != 0) {
              *(uint32_t *)puVar37 = 0;
              uVar34 = (ulong)((int)uVar34 - 4);
              puVar37 = (uint64_t *)((long)puVar37 + 4);
            }
            for (uVar29 = uVar34 >> 3; uVar29 != 0; uVar29 = uVar29 - 1) {
              *puVar37 = 0;
              puVar37 = puVar37 + (ulong)bVar9 * -2 + 1;
            }
            if ((uVar34 & 4) != 0) {
              *(uint32_t *)puVar37 = 0;
              puVar37 = (uint64_t *)((long)puVar37 + 4);
            }
            if ((uVar34 & 2) != 0) {
              *(uint16_t *)puVar37 = 0;
              puVar37 = (uint64_t *)((long)puVar37 + 2);
            }
            if (bVar42) {
              *(uint8_t *)puVar37 = 0;
            }
            *(uint16_t *)(self + 0x31a8) = 0;
            *(uint16_t *)(self + 0x31aa) = 5;
            uVar34 = 0;
            *(uint32_t *)(self + 0x31c8) = 0xa110ca7e;
            *(uint16_t *)(self + 0x31b4) = 5;
          } else {
            fStack_254 = fVar47;
            if (*(int *)(self + 0x31c8) != -0x5eef3582)
              goto LAB_004eecec;
          LAB_004eee43:
            uVar34 = (ulong) * (ushort *)(self + 0x31a8);
            local_258 = fStack_254;
            if (*(ushort *)(self + 0x31aa) <= *(ushort *)(self + 0x31a8)) {
              uVar12 = *(ushort *)(self + 0x31aa) + *(short *)(self + 0x31b4);
              uVar34 = (ulong)(byte)self[0x31ac];
              pvVar25 = (void *)0x0;
              pvVar7 = *(void **)(self + 0x31b8);
              *(ushort *)(self + 0x31aa) = uVar12;
              uVar29 = (ulong)uVar12 * 0x20;
              pvVar26 = malloc(uVar34 + 0x10 + uVar29);
              if (pvVar26 != (void *)0x0) {
                pvVar25 = (void *)((long)pvVar26 + 0x10U +
                                   (uVar34 - ((long)pvVar26 + 0x10U) % uVar34) % uVar34);
                *(ulong *)((long)pvVar25 + -0x10) = uVar29;
                *(void **)((long)pvVar25 + -8) = pvVar26;
                if (pvVar7 != (void *)0x0) {
                  uVar34 = *(ulong *)((long)pvVar7 + -0x10);
                  if (uVar29 <= *(ulong *)((long)pvVar7 + -0x10)) {
                    uVar34 = uVar29;
                  }
                  memcpy(pvVar25, pvVar7, uVar34);
                  free(*(void **)((long)pvVar7 + -8));
                }
              }
              pvVar7 = *(void **)(self + 0x31c0);
              *(void **)(self + 0x31b8) = pvVar25;
              if (pvVar7 != (void *)0x0) {
                uVar12 = *(ushort *)(self + 0x31aa);
                uVar29 = (ulong)(byte)self[0x31ac];
                pvVar25 = (void *)0x0;
                uVar34 = (ulong)uVar12 * 2;
                pvVar26 = malloc(uVar29 + 0x10 + uVar34);
                if (pvVar26 != (void *)0x0) {
                  pvVar25 = (void *)((long)pvVar26 + 0x10U +
                                     (uVar29 - ((long)pvVar26 + 0x10U) % uVar29) % uVar29);
                  *(ulong *)((long)pvVar25 + -0x10) = uVar34;
                  *(void **)((long)pvVar25 + -8) = pvVar26;
                  uVar29 = *(ulong *)((long)pvVar7 + -0x10);
                  if (uVar34 <= *(ulong *)((long)pvVar7 + -0x10)) {
                    uVar29 = uVar34;
                  }
                  memcpy(pvVar25, pvVar7, uVar29);
                  free(*(void **)((long)pvVar7 + -8));
                  uVar12 = *(ushort *)(self + 0x31aa);
                }
                uVar34 = (ulong) * (ushort *)(self + 0x31a8);
                *(void **)(self + 0x31c0) = pvVar25;
                if (uVar12 <= *(ushort *)(self + 0x31a8))
                  goto LAB_004eedbd;
                while (true) {
                  uVar29 = uVar34 & 0xffff;
                  uVar39 = (int)uVar34 + 1;
                  uVar34 = (ulong)uVar39;
                  *(uint16_t *)((long)pvVar25 + uVar29 * 2) = 0xffff;
                  if (uVar12 <= (ushort)uVar39)
                    break;
                  pvVar25 = *(void **)(self + 0x31c0);
                }
              }
              uVar34 = (ulong) * (ushort *)(self + 0x31a8);
            }
          }
        LAB_004eedbd:
          if ((*(int *)(self + 0x31b0) == 1) && (*(short *)(self + 0x31aa) != 0)) {
            psVar17 = *(short **)(self + 0x31c0);
            sVar31 = 0;
            sVar11 = *psVar17;
            while (sVar11 != -1) {
              psVar17 = psVar17 + 1;
              sVar31 = sVar31 + 1;
              if (sVar31 == *(short *)(self + 0x31aa))
                goto LAB_004eedca;
              sVar11 = *psVar17;
            }
            *psVar17 = (short)uVar34;
            uVar34 = (ulong) * (ushort *)(self + 0x31a8);
          }
        LAB_004eedca:
          puVar37 = (uint64_t *)(uVar34 * 0x20 + *(long *)(self + 0x31b8));
          *puVar37 = local_268;
          puVar37[1] = local_260;
          puVar37[2] = CONCAT44(fStack_254, local_258);
          *(uint32_t *)(puVar37 + 3) = local_250;
          *(short *)(self + 0x31a8) = *(short *)(self + 0x31a8) + 1;
          plVar16 = (long *)(lVar35 + *(long *)(self + 0x2ab8));
          fVar47 = *(float *)(plVar16 + 1);
        } else {
          *(uint32_t *)(plVar16 + 1) = *(uint32_t *)(self + 0x42a4);
          *(char *)(*(long *)(*(long *)(self + 0x2ab8) + lVar35) + 0x20) =
              (char)*(uint32_t *)(self + 0x4294);
          *(uint32_t *)(*(long *)(*(long *)(self + 0x2ab8) + lVar35) + 0x40) = 0;
          uVar15 = *(uint32_t *)(self + 0x4284);
          lVar36 = *(long *)(*(long *)(self + 0x2ab8) + lVar35);
          local_268 = (byte *)TileLevel__GetGridBlock(*(TileLevel **)(SuperMeatBoy + 0x40),
                                                      *(uint32_t *)(lVar36 + 0x54),
                                                      *(uint32_t *)(lVar36 + 0x58), 0);
          local_260 = 0;
          fStack_254 = 0.1;
          fVar47 = *(float *)(lVar36 + 0x4c);
          local_250 = uVar15;
          if (fVar47 == 0.0) {
            if (*(int *)(self + 0x3178) == -0x5eef3582)
              goto LAB_004ecb62;
          LAB_004eca06:
            uVar34 = (ulong)(byte)self[0x315c];
            *(uint32_t *)(self + 0x3160) = 0;
            local_258 = fStack_254;
            pvVar25 = malloc(uVar34 + 0xb0);
            puVar37 = (uint64_t *)0x0;
            if (pvVar25 != (void *)0x0) {
              puVar37 = (uint64_t *)((long)pvVar25 + 0x10U +
                                     (uVar34 - ((long)pvVar25 + 0x10U) % uVar34) % uVar34);
              puVar37[-2] = 0xa0;
              puVar37[-1] = pvVar25;
            }
            bVar42 = ((ulong)puVar37 & 1) != 0;
            *(uint64_t **)(self + 0x3168) = puVar37;
            uVar34 = 0xa0;
            if (bVar42) {
              *(uint8_t *)puVar37 = 0;
              puVar37 = (uint64_t *)((long)puVar37 + 1);
              uVar34 = 0x9f;
            }
            if (((ulong)puVar37 & 2) != 0) {
              *(uint16_t *)puVar37 = 0;
              uVar34 = (ulong)((int)uVar34 - 2);
              puVar37 = (uint64_t *)((long)puVar37 + 2);
            }
            if (((ulong)puVar37 & 4) != 0) {
              *(uint32_t *)puVar37 = 0;
              uVar34 = (ulong)((int)uVar34 - 4);
              puVar37 = (uint64_t *)((long)puVar37 + 4);
            }
            for (uVar29 = uVar34 >> 3; uVar29 != 0; uVar29 = uVar29 - 1) {
              *puVar37 = 0;
              puVar37 = puVar37 + (ulong)bVar9 * -2 + 1;
            }
            if ((uVar34 & 4) != 0) {
              *(uint32_t *)puVar37 = 0;
              puVar37 = (uint64_t *)((long)puVar37 + 4);
            }
            if ((uVar34 & 2) != 0) {
              *(uint16_t *)puVar37 = 0;
              puVar37 = (uint64_t *)((long)puVar37 + 2);
            }
            if (bVar42) {
              *(uint8_t *)puVar37 = 0;
            }
            *(uint16_t *)(self + 0x3158) = 0;
            *(uint16_t *)(self + 0x315a) = 5;
            uVar34 = 0;
            *(uint32_t *)(self + 0x3178) = 0xa110ca7e;
            *(uint16_t *)(self + 0x3164) = 5;
          LAB_004ecacd:
            iVar40 = *(int *)(self + 0x3160);
          } else {
            fStack_254 = fVar47;
            if (*(int *)(self + 0x3178) != -0x5eef3582)
              goto LAB_004eca06;
          LAB_004ecb62:
            uVar34 = (ulong) * (ushort *)(self + 0x3158);
            local_258 = fStack_254;
            if (*(ushort *)(self + 0x3158) < *(ushort *)(self + 0x315a))
              goto LAB_004ecacd;
            uVar12 = *(ushort *)(self + 0x315a) + *(short *)(self + 0x3164);
            uVar34 = (ulong)(byte)self[0x315c];
            pvVar25 = (void *)0x0;
            pvVar7 = *(void **)(self + 0x3168);
            *(ushort *)(self + 0x315a) = uVar12;
            uVar29 = (ulong)uVar12 * 0x20;
            pvVar26 = malloc(uVar34 + 0x10 + uVar29);
            if (pvVar26 != (void *)0x0) {
              pvVar25 = (void *)((long)pvVar26 + 0x10U +
                                 (uVar34 - ((long)pvVar26 + 0x10U) % uVar34) % uVar34);
              *(ulong *)((long)pvVar25 + -0x10) = uVar29;
              *(void **)((long)pvVar25 + -8) = pvVar26;
              if (pvVar7 != (void *)0x0) {
                uVar34 = *(ulong *)((long)pvVar7 + -0x10);
                if (uVar29 <= *(ulong *)((long)pvVar7 + -0x10)) {
                  uVar34 = uVar29;
                }
                memcpy(pvVar25, pvVar7, uVar34);
                free(*(void **)((long)pvVar7 + -8));
              }
            }
            pvVar7 = *(void **)(self + 0x3170);
            *(void **)(self + 0x3168) = pvVar25;
            if (pvVar7 != (void *)0x0) {
              uVar12 = *(ushort *)(self + 0x315a);
              uVar29 = (ulong)(byte)self[0x315c];
              pvVar25 = (void *)0x0;
              uVar34 = (ulong)uVar12 * 2;
              pvVar26 = malloc(uVar29 + 0x10 + uVar34);
              if (pvVar26 != (void *)0x0) {
                pvVar25 = (void *)((long)pvVar26 + 0x10U +
                                   (uVar29 - ((long)pvVar26 + 0x10U) % uVar29) % uVar29);
                *(ulong *)((long)pvVar25 + -0x10) = uVar34;
                *(void **)((long)pvVar25 + -8) = pvVar26;
                uVar29 = *(ulong *)((long)pvVar7 + -0x10);
                if (uVar34 <= *(ulong *)((long)pvVar7 + -0x10)) {
                  uVar29 = uVar34;
                }
                memcpy(pvVar25, pvVar7, uVar29);
                free(*(void **)((long)pvVar7 + -8));
                uVar12 = *(ushort *)(self + 0x315a);
              }
              uVar34 = (ulong) * (ushort *)(self + 0x3158);
              *(void **)(self + 0x3170) = pvVar25;
              if (uVar12 <= *(ushort *)(self + 0x3158))
                goto LAB_004ecacd;
              while (true) {
                uVar29 = uVar34 & 0xffff;
                uVar39 = (int)uVar34 + 1;
                uVar34 = (ulong)uVar39;
                *(uint16_t *)((long)pvVar25 + uVar29 * 2) = 0xffff;
                if (uVar12 <= (ushort)uVar39)
                  break;
                pvVar25 = *(void **)(self + 0x3170);
              }
            }
            iVar40 = *(int *)(self + 0x3160);
            uVar34 = (ulong) * (ushort *)(self + 0x3158);
          }
          if ((iVar40 == 1) && (*(short *)(self + 0x315a) != 0)) {
            psVar17 = *(short **)(self + 0x3170);
            sVar31 = 0;
            sVar11 = *psVar17;
            while (sVar11 != -1) {
              psVar17 = psVar17 + 1;
              sVar31 = sVar31 + 1;
              if (sVar31 == *(short *)(self + 0x315a))
                goto LAB_004ecada;
              sVar11 = *psVar17;
            }
            *psVar17 = (short)uVar34;
            uVar34 = (ulong) * (ushort *)(self + 0x3158);
          }
        LAB_004ecada:
          puVar37 = (uint64_t *)(uVar34 * 0x20 + *(long *)(self + 0x3168));
          *puVar37 = local_268;
          puVar37[1] = local_260;
          puVar37[2] = CONCAT44(fStack_254, local_258);
          *(uint32_t *)(puVar37 + 3) = local_250;
          *(short *)(self + 0x3158) = *(short *)(self + 0x3158) + 1;
          *(uint32_t *)(*(long *)(self + 0x2ab8) + 0x18 + lVar35) = 0;
          plVar16 = (long *)(lVar35 + *(long *)(self + 0x2ab8));
          fVar47 = *(float *)(plVar16 + 1);
        }
      }
    LAB_004ec896:
      uVar39 = (int)uVar24 + 1;
      uVar24 = (ulong)uVar39;
      *(float *)(plVar16 + 1) = fVar47 - fOneFrameTimeStep;
    } while ((int)uVar39 < (int)(uint) * (ushort *)(self + 0x2aa8));
  }
  uVar12 = *(ushort *)(self + 0x3e78);
  *(uint *)(self + 100) = *(uint *)(self + 100) & 0xff0000ff;
  if (uVar12 != 0) {
    uVar13 = 0;
    do {
      fVar47 = fOneFrameTimeStep;
      lVar35 = *(long *)(self + 0x3e88);
      lVar36 = (ulong)uVar13 * 0x30;
      piVar2 = (int *)(lVar35 + lVar36);
      if ((piVar2[9] == *(int *)(pPalProps + 4)) || (piVar2[9] == *(int *)(pPalProps + 0x50))) {
        if (*piVar2 == 1) {
          piVar2[1] = (int)((float)piVar2[1] - fOneFrameTimeStep);
          if ((0.0 < *(float *)(*(long *)(self + 0x3e88) + lVar36 + 4)) &&
              (*(int *)(*(long *)(self + 0x3e88) + lVar36 + 0x24) != *(int *)(pPalProps + 0x50)))
            goto LAB_004ecea0;
          *piVar2 = 2;
          *(uint16_t *)(self + 0x65) = 1;
          pGVar27 = *(GRIDBLOCK **)(*(long *)(self + 0x3e88) + 8 + lVar36);
          TileLevel__GetGridCoordsFromBlock(*(TileLevel **)(SuperMeatBoy + 0x40), pGVar27,
                                            &local_40, local_3c);
          iVar40 = local_3c[0];
          *(ushort *)(pGVar27 + 2) = *(ushort *)(pGVar27 + 2) & 0x3f;
          *pGVar27 = (GRIDBLOCK)0x0;
          iVar14 = local_40 + 1;
          pGVar27 = (GRIDBLOCK *)TileLevel__GetGridBlock(*(TileLevel **)(SuperMeatBoy + 0x40),
                                                         iVar14, local_3c[0], 0);
          if (*pGVar27 == (GRIDBLOCK)0x0) {
            *(ushort *)(pGVar27 + 2) = *(ushort *)(pGVar27 + 2) & 0x3f;
          } else {
            MarkCollisionOnBlock(self, pGVar27, iVar14, iVar40);
          }
          iVar40 = local_40;
          iVar14 = local_3c[0] + 1;
          pGVar27 = (GRIDBLOCK *)TileLevel__GetGridBlock(*(TileLevel **)(SuperMeatBoy + 0x40),
                                                         local_40, iVar14, 0);
          if (*pGVar27 == (GRIDBLOCK)0x0) {
            *(ushort *)(pGVar27 + 2) = *(ushort *)(pGVar27 + 2) & 0x3f;
          } else {
            MarkCollisionOnBlock(self, pGVar27, iVar40, iVar14);
          }
          iVar40 = local_3c[0];
          iVar14 = local_40 + -1;
          pGVar27 = (GRIDBLOCK *)TileLevel__GetGridBlock(*(TileLevel **)(SuperMeatBoy + 0x40),
                                                         iVar14, local_3c[0], 0);
          if (*pGVar27 == (GRIDBLOCK)0x0) {
            *(ushort *)(pGVar27 + 2) = *(ushort *)(pGVar27 + 2) & 0x3f;
          } else {
            MarkCollisionOnBlock(self, pGVar27, iVar14, iVar40);
          }
          iVar40 = local_40;
          iVar14 = local_3c[0] + -1;
          pGVar27 = (GRIDBLOCK *)TileLevel__GetGridBlock(*(TileLevel **)(SuperMeatBoy + 0x40),
                                                         local_40, iVar14, 0);
          if (*pGVar27 == (GRIDBLOCK)0x0) {
            *(ushort *)(pGVar27 + 2) = *(ushort *)(pGVar27 + 2) & 0x3f;
            uVar12 = *(ushort *)(self + 0x3e78);
          } else {
            MarkCollisionOnBlock(self, pGVar27, iVar40, iVar14);
            uVar12 = *(ushort *)(self + 0x3e78);
          }
        }
      } else {
        uVar12 = *(ushort *)(self + 0x3158);
        if (uVar12 != 0) {
          lVar23 = *(long *)(self + 0x3168);
          uVar32 = 0;
          do {
            plVar16 = (long *)(lVar23 + (ulong)uVar32 * 0x20);
            if (*(long *)(lVar35 + 8 + lVar36) == *plVar16) {
              *(float *)(plVar16 + 2) = *(float *)(plVar16 + 2) - fVar47;
              lVar23 = *(long *)(self + 0x3168);
              lVar35 = (ulong)uVar32 * 0x20 + lVar23;
              if (*(float *)(lVar35 + 0x10) <= 0.0) {
                if (*(int *)(lVar35 + 0x18) == *(int *)(self + 17000)) {
                  SMBCamera__ScreenShake(*(SMBCamera **)(SuperMeatBoy + 0x38),
                                         DAT_005c1930 /* R:0.75f */,
                                         _DAT_005bfba8 /* R:0.10000000149011612f */);
                }
                *(uint32_t *)(*(long *)(self + 0x3e88) + lVar36) = 2;
                *(uint32_t *)(*(long *)(self + 0x3e88) + 0x20 + lVar36) = 0;
                *(uint16_t *)(self + 0x65) = 1;
                pGVar27 = *(GRIDBLOCK **)(*(long *)(self + 0x3e88) + 8 + lVar36);
                TileLevel__GetGridCoordsFromBlock(*(TileLevel **)(SuperMeatBoy + 0x40), pGVar27,
                                                  local_3c, &local_40);
                iVar40 = local_40;
                *(ushort *)(pGVar27 + 2) = *(ushort *)(pGVar27 + 2) & 0x3f;
                *pGVar27 = (GRIDBLOCK)0x0;
                iVar14 = local_3c[0] + 1;
                pGVar27 = (GRIDBLOCK *)TileLevel__GetGridBlock(*(TileLevel **)(SuperMeatBoy + 0x40),
                                                               iVar14, local_40, 0);
                if (*pGVar27 == (GRIDBLOCK)0x0) {
                  *(ushort *)(pGVar27 + 2) = *(ushort *)(pGVar27 + 2) & 0x3f;
                } else {
                  MarkCollisionOnBlock(self, pGVar27, iVar14, iVar40);
                }
                iVar40 = local_3c[0];
                iVar14 = local_40 + 1;
                pGVar27 = (GRIDBLOCK *)TileLevel__GetGridBlock(*(TileLevel **)(SuperMeatBoy + 0x40),
                                                               local_3c[0], iVar14, 0);
                if (*pGVar27 == (GRIDBLOCK)0x0) {
                  *(ushort *)(pGVar27 + 2) = *(ushort *)(pGVar27 + 2) & 0x3f;
                } else {
                  MarkCollisionOnBlock(self, pGVar27, iVar40, iVar14);
                }
                iVar40 = local_40;
                iVar14 = local_3c[0] + -1;
                pGVar27 = (GRIDBLOCK *)TileLevel__GetGridBlock(*(TileLevel **)(SuperMeatBoy + 0x40),
                                                               iVar14, local_40, 0);
                if (*pGVar27 == (GRIDBLOCK)0x0) {
                  *(ushort *)(pGVar27 + 2) = *(ushort *)(pGVar27 + 2) & 0x3f;
                } else {
                  MarkCollisionOnBlock(self, pGVar27, iVar14, iVar40);
                }
                iVar40 = local_3c[0];
                iVar14 = local_40 + -1;
                pGVar27 = (GRIDBLOCK *)TileLevel__GetGridBlock(*(TileLevel **)(SuperMeatBoy + 0x40),
                                                               local_3c[0], iVar14, 0);
                if (*pGVar27 == (GRIDBLOCK)0x0) {
                  *(ushort *)(pGVar27 + 2) = *(ushort *)(pGVar27 + 2) & 0x3f;
                } else {
                  MarkCollisionOnBlock(self, pGVar27, iVar40, iVar14);
                }
                break;
              }
              uVar12 = *(ushort *)(self + 0x3158);
              if (uVar12 <= (ushort)(uVar32 + 1))
                break;
            } else if (uVar12 <= (ushort)(uVar32 + 1))
              break;
            uVar32 = uVar32 + 1;
            lVar35 = *(long *)(self + 0x3e88);
          } while (true);
        }
        fVar47 = fOneFrameTimeStep;
        uVar12 = *(ushort *)(self + 0x31a8);
        if (uVar12 != 0) {
          lVar35 = *(long *)(self + 0x31b8);
          uVar32 = 0;
          do {
            while (true) {
              plVar16 = (long *)(lVar35 + (ulong)uVar32 * 0x20);
              if ((*(long *)((int *)(*(long *)(self + 0x3e88) + lVar36) + 2) != *plVar16) ||
                  (*(int *)(*(long *)(self + 0x3e88) + lVar36) != 4))
                break;
              *(float *)(plVar16 + 2) = *(float *)(plVar16 + 2) - fVar47;
              lVar35 = *(long *)(self + 0x31b8);
              if (*(float *)(lVar35 + 0x10 + (ulong)uVar32 * 0x20) <= 0.0) {
                *(uint32_t *)(*(long *)(self + 0x3e88) + lVar36) = 3;
                *(uint32_t *)(*(long *)(self + 0x3e88) + 0x20 + lVar36) = 0;
                uVar12 = *(ushort *)(self + 0x3e78);
                goto LAB_004ecea7;
              }
              uVar12 = *(ushort *)(self + 0x31a8);
              uVar32 = uVar32 + 1;
              if (uVar12 <= uVar32)
                goto LAB_004ecea0;
            }
            uVar32 = uVar32 + 1;
          } while (uVar32 < uVar12);
        }
      LAB_004ecea0:
        uVar12 = *(ushort *)(self + 0x3e78);
      }
    LAB_004ecea7:
      uVar13 = uVar13 + 1;
    } while (uVar13 < uVar12);
  }
  uVar12 = *(ushort *)(self + 0x3158);
  uVar13 = 0;
  if (uVar12 != 0) {
    pSVar1 = (SMBCurrUnlockBlock *)(self + 0x3130);
    uVar13 = 0;
    do {
      puVar37 = (uint64_t *)((ulong)uVar13 * 0x20 + *(long *)(self + 0x3168));
      if ((*(ushort *)((GRIDBLOCK *)*puVar37 + 2) & 0xffc0) == 0) {
        TileLevel__GetGridCoordsFromBlock(*(TileLevel **)(SuperMeatBoy + 0x40),
                                          (GRIDBLOCK *)*puVar37, &local_40, local_3c);
        pbVar18 = (byte *)TileLevel__GetGridBlock(*(TileLevel **)(SuperMeatBoy + 0x40),
                                                  local_40 + 1, local_3c[0], 0);
        pbVar19 = (byte *)TileLevel__GetGridBlock(*(TileLevel **)(SuperMeatBoy + 0x40),
                                                  local_40 + -1, local_3c[0], 0);
        pbVar20 = (byte *)TileLevel__GetGridBlock(*(TileLevel **)(SuperMeatBoy + 0x40), local_40,
                                                  local_3c[0] + -1, 0);
        pbVar21 = (byte *)TileLevel__GetGridBlock(*(TileLevel **)(SuperMeatBoy + 0x40), local_40,
                                                  local_3c[0] + 1, 0);
        pbVar22 = (byte *)*puVar37;
        if (((pbVar18 != pbVar22) && ((*(ushort *)(pbVar18 + 2) & 0xffc0) != 0)) &&
            ((uint)*pbVar18 == *(uint *)(puVar37 + 3))) {
          local_260 = 0;
          fStack_254 = *(float *)((long)puVar37 + 0x14);
          local_258 = *(float *)((long)puVar37 + 0x14);
          local_250 = *(uint32_t *)(puVar37 + 3);
          local_268 = pbVar18;
          if (*(short *)(self + 0x3158) == 0) {
          LAB_004efef5:
            uVar15 = ResizeableArray_SMBCurrUnlockBlock__Add(pSVar1, (int)&local_268);
            local_228 = CONCAT44(uStack_564, uVar15);
            local_220 = extraout_RDX_04;
          } else {
            puVar38 = *(uint64_t **)(self + 0x3168);
            sVar11 = 0;
            pbVar22 = (byte *)*puVar38;
            while (pbVar18 != pbVar22) {
              sVar11 = sVar11 + 1;
              if (sVar11 == *(short *)(self + 0x3158))
                goto LAB_004efef5;
              puVar38 = puVar38 + 4;
              pbVar22 = (byte *)*puVar38;
            }
            if (((*(int *)(self + 0x3160) == 1) && (*(ushort *)(self + 0x315a) != 0)) &&
                (sVar11 != **(short **)(self + 0x3170))) {
              lVar35 = 0;
              do {
                if (lVar35 == (ulong)(*(ushort *)(self + 0x315a) - 1) * 2)
                  break;
                lVar35 = lVar35 + 2;
              } while (sVar11 != *(short *)((long)*(short **)(self + 0x3170) + lVar35));
            }
          }
          pbVar22 = (byte *)*puVar37;
        }
        if (((pbVar19 != pbVar22) && ((*(ushort *)(pbVar19 + 2) & 0xffc0) != 0)) &&
            ((uint)*pbVar19 == *(uint *)(puVar37 + 3))) {
          local_260 = 0;
          fStack_254 = *(float *)((long)puVar37 + 0x14);
          local_258 = *(float *)((long)puVar37 + 0x14);
          local_250 = *(uint32_t *)(puVar37 + 3);
          local_268 = pbVar19;
          if (*(short *)(self + 0x3158) == 0) {
          LAB_004effc5:
            uVar15 = ResizeableArray_SMBCurrUnlockBlock__Add(pSVar1, (int)&local_268);
            local_218 = CONCAT44(uStack_564, uVar15);
            local_210 = extraout_RDX_05;
          } else {
            puVar38 = *(uint64_t **)(self + 0x3168);
            sVar11 = 0;
            pbVar22 = (byte *)*puVar38;
            while (pbVar19 != pbVar22) {
              sVar11 = sVar11 + 1;
              if (sVar11 == *(short *)(self + 0x3158))
                goto LAB_004effc5;
              puVar38 = puVar38 + 4;
              pbVar22 = (byte *)*puVar38;
            }
            if (((*(int *)(self + 0x3160) == 1) && (*(ushort *)(self + 0x315a) != 0)) &&
                (sVar11 != **(short **)(self + 0x3170))) {
              lVar35 = 0;
              do {
                if (lVar35 == (ulong)(*(ushort *)(self + 0x315a) - 1) * 2)
                  break;
                lVar35 = lVar35 + 2;
              } while (sVar11 != *(short *)((long)*(short **)(self + 0x3170) + lVar35));
            }
          }
          pbVar22 = (byte *)*puVar37;
        }
        if (((pbVar21 != pbVar22) && ((*(ushort *)(pbVar21 + 2) & 0xffc0) != 0)) &&
            ((uint)*pbVar21 == *(uint *)(puVar37 + 3))) {
          local_260 = 0;
          fStack_254 = *(float *)((long)puVar37 + 0x14);
          local_258 = *(float *)((long)puVar37 + 0x14);
          local_250 = *(uint32_t *)(puVar37 + 3);
          local_268 = pbVar21;
          if (*(short *)(self + 0x3158) == 0) {
          LAB_004f0095:
            uVar15 = ResizeableArray_SMBCurrUnlockBlock__Add(pSVar1, (int)&local_268);
            local_208 = CONCAT44(uStack_564, uVar15);
            local_200 = extraout_RDX_06;
          } else {
            puVar38 = *(uint64_t **)(self + 0x3168);
            sVar11 = 0;
            pbVar22 = (byte *)*puVar38;
            while (pbVar21 != pbVar22) {
              sVar11 = sVar11 + 1;
              if (sVar11 == *(short *)(self + 0x3158))
                goto LAB_004f0095;
              puVar38 = puVar38 + 4;
              pbVar22 = (byte *)*puVar38;
            }
            if (((*(int *)(self + 0x3160) == 1) && (*(ushort *)(self + 0x315a) != 0)) &&
                (sVar11 != **(short **)(self + 0x3170))) {
              lVar35 = 0;
              do {
                if (lVar35 == (ulong)(*(ushort *)(self + 0x315a) - 1) * 2)
                  break;
                lVar35 = lVar35 + 2;
              } while (sVar11 != *(short *)((long)*(short **)(self + 0x3170) + lVar35));
            }
          }
          pbVar22 = (byte *)*puVar37;
        }
        if (((pbVar20 != pbVar22) && ((*(ushort *)(pbVar20 + 2) & 0xffc0) != 0)) &&
            ((uint)*pbVar20 == *(uint *)(puVar37 + 3))) {
          local_260 = 0;
          fStack_254 = *(float *)((long)puVar37 + 0x14);
          local_258 = *(float *)((long)puVar37 + 0x14);
          local_250 = *(uint32_t *)(puVar37 + 3);
          local_268 = pbVar20;
          if (*(short *)(self + 0x3158) == 0) {
          LAB_004ed0d5:
            uVar15 = ResizeableArray_SMBCurrUnlockBlock__Add(pSVar1, (int)&local_268);
            local_1f8 = CONCAT44(uStack_564, uVar15);
            local_1f0 = extraout_RDX;
          } else {
            puVar37 = *(uint64_t **)(self + 0x3168);
            sVar11 = 0;
            pbVar22 = (byte *)*puVar37;
            while (pbVar20 != pbVar22) {
              sVar11 = sVar11 + 1;
              if (sVar11 == *(short *)(self + 0x3158))
                goto LAB_004ed0d5;
              puVar37 = puVar37 + 4;
              pbVar22 = (byte *)*puVar37;
            }
            if (((*(int *)(self + 0x3160) == 1) && (*(ushort *)(self + 0x315a) != 0)) &&
                (sVar11 != **(short **)(self + 0x3170))) {
              lVar35 = 0;
              do {
                if (lVar35 == (ulong)(*(ushort *)(self + 0x315a) - 1) * 2)
                  break;
                lVar35 = lVar35 + 2;
              } while (sVar11 != *(short *)((long)*(short **)(self + 0x3170) + lVar35));
            }
          }
        }
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 < uVar12);
    uVar13 = *(ushort *)(self + 0x3158);
  }
  while (uVar13 != 0) {
    plVar16 = *(long **)(self + 0x3168);
    if ((*(ushort *)(*plVar16 + 2) & 0xffc0) == 0) {
      uVar39 = 1;
      uVar41 = 0;
    } else {
      lVar35 = 0x20;
      uVar12 = 0;
      do {
        uVar12 = uVar12 + 1;
        if (uVar12 == uVar13)
          goto LAB_004ed1e9;
        plVar3 = (long *)((long)plVar16 + lVar35);
        lVar35 = lVar35 + 0x20;
      } while ((*(ushort *)(*plVar3 + 2) & 0xffc0) != 0);
      uVar41 = (uint)uVar12;
      uVar39 = uVar41 + 1;
    }
    if ((uVar39 < uVar13) && ((int)uVar41 < (int)(uVar13 - 1))) {
      lVar35 = ((long)(int)uVar41 + 1) * 0x20;
      uVar39 = uVar41;
      while (true) {
        puVar37 = (uint64_t *)((long)plVar16 + lVar35 + -0x20);
        puVar38 = (uint64_t *)((long)plVar16 + lVar35);
        uVar39 = uVar39 + 1;
        lVar35 = lVar35 + 0x20;
        *puVar37 = *puVar38;
        puVar37[1] = puVar38[1];
        puVar37[2] = puVar38[2];
        *(uint32_t *)(puVar37 + 3) = *(uint32_t *)(puVar38 + 3);
        uVar13 = *(ushort *)(self + 0x3158);
        if ((int)(uVar13 - 1) <= (int)uVar39)
          break;
        plVar16 = *(long **)(self + 0x3168);
      }
    }
    if ((*(int *)(self + 0x3160) == 1) && (uVar12 = *(ushort *)(self + 0x315a), uVar12 != 0)) {
      uVar13 = 0;
      do {
        puVar5 = (ushort *)(*(long *)(self + 0x3170) + (ulong)uVar13 * 2);
        uVar32 = *puVar5;
        if (uVar41 == uVar32) {
          *puVar5 = 0xffff;
          uVar12 = *(ushort *)(self + 0x315a);
        } else if ((uVar41 < uVar32) && ((ushort)(uVar32 - 1) < 0xfffe)) {
          *puVar5 = uVar32 - 1;
          uVar12 = *(ushort *)(self + 0x315a);
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 < uVar12);
      uVar13 = *(ushort *)(self + 0x3158);
    }
    uVar13 = (uVar13 - 1) + (ushort)(uVar13 == 0);
    *(ushort *)(self + 0x3158) = uVar13;
  }
LAB_004ed1e9:
  uVar12 = *(ushort *)(self + 0x31a8);
  uVar13 = 0;
  if (uVar12 != 0) {
    uVar13 = 0;
    pSVar1 = (SMBCurrUnlockBlock *)(self + 0x3180);
    do {
      while (true) {
        puVar37 = (uint64_t *)((ulong)uVar13 * 0x20 + *(long *)(self + 0x31b8));
        if ((*(ushort *)((GRIDBLOCK *)*puVar37 + 2) & 0xffc0) == 0)
          break;
      LAB_004ed210:
        uVar13 = uVar13 + 1;
        if (uVar12 <= uVar13)
          goto LAB_004ed52e;
      }
      TileLevel__GetGridCoordsFromBlock(*(TileLevel **)(SuperMeatBoy + 0x40), (GRIDBLOCK *)*puVar37,
                                        local_3c, &local_40);
      pbVar18 = (byte *)TileLevel__GetGridBlock(*(TileLevel **)(SuperMeatBoy + 0x40),
                                                local_3c[0] + 1, local_40, 0);
      pbVar19 = (byte *)TileLevel__GetGridBlock(*(TileLevel **)(SuperMeatBoy + 0x40),
                                                local_3c[0] + -1, local_40, 0);
      pbVar20 = (byte *)TileLevel__GetGridBlock(*(TileLevel **)(SuperMeatBoy + 0x40), local_3c[0],
                                                local_40 + -1, 0);
      pbVar21 = (byte *)TileLevel__GetGridBlock(*(TileLevel **)(SuperMeatBoy + 0x40), local_3c[0],
                                                local_40 + 1, 0);
      pbVar22 = (byte *)*puVar37;
      if ((pbVar18 != pbVar22) && (*(ushort *)(self + 0x3e78) != 0)) {
        if (pbVar18 != *(byte **)(*(long *)(self + 0x3e88) + 8)) {
          lVar35 = 0x30;
          do {
            if (lVar35 == ((ulong)(*(ushort *)(self + 0x3e78) - 1 & 0xffff) * 3 + 3) * 0x10)
              goto LAB_004ed35f;
            puVar38 = (uint64_t *)(*(long *)(self + 0x3e88) + 8 + lVar35);
            lVar35 = lVar35 + 0x30;
          } while (pbVar18 != (byte *)*puVar38);
        }
        local_260 = 0;
        fStack_254 = *(float *)((long)puVar37 + 0x14);
        local_258 = *(float *)((long)puVar37 + 0x14);
        local_250 = *(uint32_t *)(puVar37 + 3);
        local_268 = pbVar18;
        if (*(short *)(self + 0x31a8) == 0) {
        LAB_004ee375:
          uVar15 = ResizeableArray_SMBCurrUnlockBlock__Add(pSVar1, (int)&local_268);
          local_1e8 = CONCAT44(uStack_564, uVar15);
          local_1e0 = extraout_RDX_01;
        } else {
          puVar38 = *(uint64_t **)(self + 0x31b8);
          sVar11 = 0;
          pbVar22 = (byte *)*puVar38;
          while (pbVar18 != pbVar22) {
            sVar11 = sVar11 + 1;
            if (sVar11 == *(short *)(self + 0x31a8))
              goto LAB_004ee375;
            puVar38 = puVar38 + 4;
            pbVar22 = (byte *)*puVar38;
          }
          if (((*(int *)(self + 0x31b0) == 1) && (*(ushort *)(self + 0x31aa) != 0)) &&
              (sVar11 != **(short **)(self + 0x31c0))) {
            lVar35 = 0;
            do {
              if (lVar35 == (ulong)(*(ushort *)(self + 0x31aa) - 1) * 2)
                break;
              lVar35 = lVar35 + 2;
            } while (sVar11 != *(short *)((long)*(short **)(self + 0x31c0) + lVar35));
          }
        }
        pbVar22 = (byte *)*puVar37;
      }
    LAB_004ed35f:
      if ((pbVar19 != pbVar22) && (*(ushort *)(self + 0x3e78) != 0)) {
        if (pbVar19 != *(byte **)(*(long *)(self + 0x3e88) + 8)) {
          lVar35 = 0x30;
          do {
            if (lVar35 == ((ulong)(*(ushort *)(self + 0x3e78) - 1 & 0xffff) * 3 + 3) * 0x10)
              goto LAB_004ed3b7;
            puVar38 = (uint64_t *)(*(long *)(self + 0x3e88) + 8 + lVar35);
            lVar35 = lVar35 + 0x30;
          } while (pbVar19 != (byte *)*puVar38);
        }
        local_260 = 0;
        fStack_254 = *(float *)((long)puVar37 + 0x14);
        local_258 = *(float *)((long)puVar37 + 0x14);
        local_250 = *(uint32_t *)(puVar37 + 3);
        local_268 = pbVar19;
        if (*(short *)(self + 0x31a8) == 0) {
        LAB_004ee455:
          uVar15 = ResizeableArray_SMBCurrUnlockBlock__Add(pSVar1, (int)&local_268);
          local_1d8 = CONCAT44(uStack_564, uVar15);
          local_1d0 = extraout_RDX_02;
        } else {
          puVar38 = *(uint64_t **)(self + 0x31b8);
          sVar11 = 0;
          pbVar22 = (byte *)*puVar38;
          while (pbVar19 != pbVar22) {
            sVar11 = sVar11 + 1;
            if (sVar11 == *(short *)(self + 0x31a8))
              goto LAB_004ee455;
            puVar38 = puVar38 + 4;
            pbVar22 = (byte *)*puVar38;
          }
          if (((*(int *)(self + 0x31b0) == 1) && (*(ushort *)(self + 0x31aa) != 0)) &&
              (sVar11 != **(short **)(self + 0x31c0))) {
            lVar35 = 0;
            do {
              if (lVar35 == (ulong)(*(ushort *)(self + 0x31aa) - 1) * 2)
                break;
              lVar35 = lVar35 + 2;
            } while (sVar11 != *(short *)((long)*(short **)(self + 0x31c0) + lVar35));
          }
        }
        pbVar22 = (byte *)*puVar37;
      }
    LAB_004ed3b7:
      if ((pbVar21 != pbVar22) && (*(ushort *)(self + 0x3e78) != 0)) {
        if (pbVar21 != *(byte **)(*(long *)(self + 0x3e88) + 8)) {
          lVar35 = 0x30;
          do {
            if (lVar35 == ((ulong)(*(ushort *)(self + 0x3e78) - 1 & 0xffff) * 3 + 3) * 0x10)
              goto LAB_004ed407;
            puVar38 = (uint64_t *)(*(long *)(self + 0x3e88) + 8 + lVar35);
            lVar35 = lVar35 + 0x30;
          } while (pbVar21 != (byte *)*puVar38);
        }
        local_260 = 0;
        fStack_254 = *(float *)((long)puVar37 + 0x14);
        local_258 = *(float *)((long)puVar37 + 0x14);
        local_250 = *(uint32_t *)(puVar37 + 3);
        local_268 = pbVar21;
        if (*(short *)(self + 0x31a8) == 0) {
        LAB_004ee535:
          uVar15 = ResizeableArray_SMBCurrUnlockBlock__Add(pSVar1, (int)&local_268);
          local_1c8 = CONCAT44(uStack_564, uVar15);
          local_1c0 = extraout_RDX_03;
        } else {
          puVar38 = *(uint64_t **)(self + 0x31b8);
          sVar11 = 0;
          pbVar22 = (byte *)*puVar38;
          while (pbVar21 != pbVar22) {
            sVar11 = sVar11 + 1;
            if (sVar11 == *(short *)(self + 0x31a8))
              goto LAB_004ee535;
            puVar38 = puVar38 + 4;
            pbVar22 = (byte *)*puVar38;
          }
          if (((*(int *)(self + 0x31b0) == 1) && (*(ushort *)(self + 0x31aa) != 0)) &&
              (sVar11 != **(short **)(self + 0x31c0))) {
            lVar35 = 0;
            do {
              if (lVar35 == (ulong)(*(ushort *)(self + 0x31aa) - 1) * 2)
                break;
              lVar35 = lVar35 + 2;
            } while (sVar11 != *(short *)((long)*(short **)(self + 0x31c0) + lVar35));
          }
        }
        pbVar22 = (byte *)*puVar37;
      }
    LAB_004ed407:
      if ((pbVar20 == pbVar22) || (*(ushort *)(self + 0x3e78) == 0))
        goto LAB_004ed210;
      if (pbVar20 != *(byte **)(*(long *)(self + 0x3e88) + 8)) {
        lVar35 = 0x30;
        do {
          if (lVar35 == ((ulong)(*(ushort *)(self + 0x3e78) - 1 & 0xffff) * 3 + 3) * 0x10)
            goto LAB_004ed210;
          puVar38 = (uint64_t *)(*(long *)(self + 0x3e88) + 8 + lVar35);
          lVar35 = lVar35 + 0x30;
        } while (pbVar20 != (byte *)*puVar38);
      }
      local_260 = 0;
      fStack_254 = *(float *)((long)puVar37 + 0x14);
      local_258 = *(float *)((long)puVar37 + 0x14);
      local_250 = *(uint32_t *)(puVar37 + 3);
      local_268 = pbVar20;
      if (*(short *)(self + 0x31a8) != 0) {
        puVar37 = *(uint64_t **)(self + 0x31b8);
        sVar11 = 0;
        pbVar22 = (byte *)*puVar37;
        while (pbVar20 != pbVar22) {
          sVar11 = sVar11 + 1;
          if (sVar11 == *(short *)(self + 0x31a8))
            goto LAB_004ed4e5;
          puVar37 = puVar37 + 4;
          pbVar22 = (byte *)*puVar37;
        }
        if (((*(int *)(self + 0x31b0) == 1) && (*(ushort *)(self + 0x31aa) != 0)) &&
            (sVar11 != **(short **)(self + 0x31c0))) {
          lVar35 = 0;
          do {
            if (lVar35 == (ulong)(*(ushort *)(self + 0x31aa) - 1) * 2)
              break;
            lVar35 = lVar35 + 2;
          } while (sVar11 != *(short *)((long)*(short **)(self + 0x31c0) + lVar35));
        }
        goto LAB_004ed210;
      }
    LAB_004ed4e5:
      uVar13 = uVar13 + 1;
      uVar15 = ResizeableArray_SMBCurrUnlockBlock__Add(pSVar1, (int)&local_268);
      local_1b8 = CONCAT44(uStack_564, uVar15);
      local_1b0 = extraout_RDX_00;
    } while (uVar13 < uVar12);
  LAB_004ed52e:
    uVar13 = *(ushort *)(self + 0x31a8);
  }
  while (uVar13 != 0) {
    puVar37 = *(uint64_t **)(self + 0x31b8);
    if ((uint) * (byte *)*puVar37 == *(uint *)(self + 0x4284)) {
      uVar39 = 1;
      uVar41 = 0;
    } else {
      lVar35 = 0x20;
      uVar12 = 0;
      do {
        uVar12 = uVar12 + 1;
        if (uVar12 == uVar13)
          goto LAB_004ed53e;
        puVar38 = (uint64_t *)((long)puVar37 + lVar35);
        lVar35 = lVar35 + 0x20;
      } while ((uint) * (byte *)*puVar38 != *(uint *)(self + 0x4284));
      uVar41 = (uint)uVar12;
      uVar39 = uVar41 + 1;
    }
    if ((uVar39 < uVar13) && ((int)uVar41 < (int)(uVar13 - 1))) {
      lVar35 = ((long)(int)uVar41 + 1) * 0x20;
      uVar39 = uVar41;
      while (true) {
        puVar38 = (uint64_t *)((long)puVar37 + lVar35 + -0x20);
        puVar37 = (uint64_t *)((long)puVar37 + lVar35);
        uVar39 = uVar39 + 1;
        lVar35 = lVar35 + 0x20;
        *puVar38 = *puVar37;
        puVar38[1] = puVar37[1];
        puVar38[2] = puVar37[2];
        *(uint32_t *)(puVar38 + 3) = *(uint32_t *)(puVar37 + 3);
        uVar13 = *(ushort *)(self + 0x31a8);
        if ((int)(uVar13 - 1) <= (int)uVar39)
          break;
        puVar37 = *(uint64_t **)(self + 0x31b8);
      }
    }
    if ((*(int *)(self + 0x31b0) == 1) && (uVar12 = *(ushort *)(self + 0x31aa), uVar12 != 0)) {
      uVar13 = 0;
      do {
        puVar5 = (ushort *)(*(long *)(self + 0x31c0) + (ulong)uVar13 * 2);
        uVar32 = *puVar5;
        if (uVar41 == uVar32) {
          *puVar5 = 0xffff;
          uVar12 = *(ushort *)(self + 0x31aa);
        } else if ((uVar41 < uVar32) && ((ushort)(uVar32 - 1) < 0xfffe)) {
          *puVar5 = uVar32 - 1;
          uVar12 = *(ushort *)(self + 0x31aa);
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 < uVar12);
      uVar13 = *(ushort *)(self + 0x31a8);
    }
    *(uint16_t *)(self + 0x65) = 1;
    uVar13 = (uVar13 - 1) + (ushort)(uVar13 == 0);
    *(ushort *)(self + 0x31a8) = uVar13;
  }
LAB_004ed53e:
  CriticalSection__Unlock((CriticalSection *)(self + 0x2a58));
  if ((*(uint *)(self + 100) & 0xffff00) == 0x100) {
    TileLevelLightMap__RegenerateLights(*(TileLevelLightMap **)(SuperMeatBoy + 0x390));
    *(uint *)(self + 100) = *(uint *)(self + 100) & 0xff0000ff;
  }
  if (*(short *)(self + 0x3ec8) != 0) {
    uVar39 = 0;
  LAB_004ed584:
    do {
      lVar35 = (ulong)(uVar39 & 0xffff) * 0xb68;
      *(float *)(lVar35 + *(long *)(self + 0x3ed8) + 0xc) =
          *(float *)(lVar35 + *(long *)(self + 0x3ed8) + 0xc) - fOneFrameTimeStep;
      if (0.0 < *(float *)(*(long *)(self + 0x3ed8) + 0xc + lVar35))
        goto LAB_004ed570;
      iVar40 = 0;
      pSVar28 = (SMBShooter *)(*(long *)(self + 0x3ed8) + lVar35);
    LAB_004ed5f4:
      do {
        if ((*(int *)(pSVar28 + 0x18) == 3) || (*(int *)(pSVar28 + 0x18) == 5)) {
          lVar36 = (long)iVar40 * 0x120;
          iVar14 = *(int *)(pSVar28 + lVar36 + 0x120);
          if (iVar14 == 2)
            goto LAB_004ed60c;
          if (*(RibbonEmitter **)(pSVar28 + lVar36 + 0x140) != (RibbonEmitter *)0x0) {
            RibbonEmitter__AddRibbonPoint(*(RibbonEmitter **)(pSVar28 + lVar36 + 0x140),
                                          (Vector2 *)(pSVar28 + lVar36 + 200));
            pSVar28 = (SMBShooter *)(*(long *)(self + 0x3ed8) + lVar35);
            goto LAB_004ed60c;
          }
        } else {
        LAB_004ed60c:
          lVar36 = (long)iVar40 * 0x120;
          if (*(long *)(pSVar28 + lVar36 + 0x140) == 0) {
            iVar14 = *(int *)(pSVar28 + lVar36 + 0x120);
          } else {
            *(uint64_t *)(*(long *)(pSVar28 + lVar36 + 0x140) + 8) =
                *(uint64_t *)(SuperMeatBoy + 0x40);
            (**(code **)(**(long **)(lVar35 + 0x140 + *(long *)(self + 0x3ed8) + lVar36) + 0x18))();
            pSVar28 = (SMBShooter *)(*(long *)(self + 0x3ed8) + lVar35);
            iVar14 = *(int *)(pSVar28 + lVar36 + 0x120);
          }
        }
        lVar36 = (long)iVar40;
        if (iVar14 != 0) {
          iVar14 = *(int *)(pSVar28 + 0x18);
          if ((((iVar14 == 3) || (iVar14 == 5)) || (iVar14 == 1)) &&
              (*(int *)(pSVar28 + 0x1c) == 1)) {
            local_118 = *(uint32_t *)(*(long *)pSVar28 + 0x24);
            local_114 = *(uint32_t *)(*(long *)pSVar28 + 0x28);
            lVar36 = GSuperMeatBoy__getChar(SuperMeatBoy, 0);
            Vector2__operator_minus__005be180(local_108, (Vector2 *)(lVar36 + 0xa0));
            fVar47 = (float)Vector2__Length(local_108);
            if (0.0 < fVar47) {
              Vector2__operator_div_assign__005be2c0(local_108, fVar47);
            }
            dVar46 = (double)__atan2_finite((double)local_104);
            lVar36 = *(long *)(lVar35 + *(long *)(self + 0x3ed8));
            if ((int)((long *)(lVar35 + *(long *)(self + 0x3ed8)))[3] == 1) {
              *(float *)(lVar36 + 0x3c) = (float)dVar46;
              goto LAB_004edf15;
            }
            *(float *)(lVar36 + 0x3c) = (float)dVar46 - DAT_005c1408 /* R:1.5707963705062866f */;
            pSVar28 = (SMBShooter *)(*(long *)(self + 0x3ed8) + lVar35);
          }
        LAB_004ed5e6:
          iVar40 = iVar40 + 1;
          if (iVar40 == 10)
            break;
          goto LAB_004ed5f4;
        }
        local_244 = 0x41200000;
        lVar23 = (lVar36 * 9 + 9) * 0x20;
        local_240 = *(uint64_t *)(pSVar28 + lVar36 * 0x120 + 200);
        local_1a8._0_4_ = (uint32_t)local_240;
        *(uint32_t *)(pSVar28 + lVar23 + 8) = (uint32_t)local_1a8;
        local_1a8._4_4_ = (uint32_t)((ulong)local_240 >> 0x20);
        *(uint32_t *)(lVar35 + 0xc + *(long *)(self + 0x3ed8) + lVar23) = local_1a8._4_4_;
        *(uint32_t *)(lVar35 + 0x10 + lVar23 + *(long *)(self + 0x3ed8)) = 0;
        local_248[0] = (Bounds)0x11;
        local_1a8 = local_240;
        iVar14 = TileLevel__IsPositionWithinGrid(*(TileLevel **)(SuperMeatBoy + 0x40),
                                                 (Vector2 *)&local_1a8);
        if (iVar14 == 0) {
          *(uint32_t *)(lVar35 + 0x120 + lVar36 * 0x120 + *(long *)(self + 0x3ed8)) = 2;
          pSVar28 = (SMBShooter *)(*(long *)(self + 0x3ed8) + lVar35);
          goto LAB_004ed5e6;
        }
        uVar41 = 0;
        if (*(short *)(self + 0x3f18) != 0) {
          do {
            uVar24 = (ulong)(uVar41 & 0xffff);
            lVar23 = *(long *)(*(long *)(self + 0x3f28) + uVar24 * 8);
            lVar6 = *(long *)(self + 0x90);
            *(uint32_t *)(lVar6 + 0x30) = *(uint32_t *)(lVar23 + 0x24);
            *(uint32_t *)(lVar6 + 0x34) = *(uint32_t *)(lVar23 + 0x28);
            *(uint32_t *)(lVar6 + 0x38) = *(uint32_t *)(lVar23 + 0x2c);
            *(uint32_t *)(lVar6 + 0x3c) = *(uint32_t *)(lVar23 + 0x30);
            Vector2__operator_assign(
                (Vector2 *)(*(long *)(self + 0x90) + 0x40),
                (Vector2 *)(*(long *)(*(long *)(self + 0x3f28) + uVar24 * 8) + 0x34));
            *(uint32_t *)(*(long *)(self + 0x90) + 0x48) =
                *(uint32_t *)(*(long *)(*(long *)(self + 0x3f28) + uVar24 * 8) + 0x3c);
            *(uint32_t *)(*(long *)(self + 0x90) + 0x4c) =
                *(uint32_t *)(*(long *)(*(long *)(self + 0x3f28) + uVar24 * 8) + 0x3c);
            *(uint32_t *)(*(long *)(self + 0x90) + 0x20) = *(uint32_t *)(self + 0x42c0);
            *(uint32_t *)(*(long *)(self + 0x90) + 0x58) = 0;
            *(uint32_t *)(*(long *)(self + 0x90) + 0x60) = 0x3f800000;
            iVar14 = FlashLibraryInstance__IsBoundsTouchingInstance__00574660(
                *(FlashLibraryInstance **)(self + 0x90), local_248);
            if (iVar14 == 1) {
              *(uint32_t *)(lVar35 + 0x120 + lVar36 * 0x120 + *(long *)(self + 0x3ed8)) = 2;
              break;
            }
            uVar41 = uVar41 + 1;
          } while ((int)uVar41 < (int)(uint) * (ushort *)(self + 0x3f18));
        }
        lVar23 = lVar36 * 0x120;
        pSVar28 = (SMBShooter *)(*(long *)(self + 0x3ed8) + lVar35);
        if (*(int *)(pSVar28 + lVar23 + 0x120) == 2)
          goto LAB_004ed5e6;
        iVar14 = *(int *)(pSVar28 + 0x18);
        if ((iVar14 == 3) || (iVar14 == 5)) {
          local_198 = *(uint32_t *)(pSVar28 + lVar36 * 0x120 + 200);
          local_194 = *(uint32_t *)(pSVar28 + lVar36 * 0x120 + 0xcc);
          lVar23 = GSuperMeatBoy__getChar(SuperMeatBoy, 0);
          Vector2__operator_minus__005be180(local_188, (Vector2 *)(lVar23 + 0xa0));
          fVar47 = (float)Vector2__Length(local_188);
          if (0.0 < fVar47) {
            Vector2__operator_div_assign__005be2c0(local_188, fVar47);
          }
          lVar23 = lVar36 * 0x120;
          *(uint32_t *)(lVar23 + 0xbc + lVar35 + *(long *)(self + 0x3ed8)) = 0;
          *(uint32_t *)(lVar23 + 0xb8 + lVar35 + *(long *)(self + 0x3ed8)) = 0;
          local_178 = *(uint64_t *)(lVar35 + *(long *)(self + 0x3ed8) + lVar23 + 0xe0);
          fVar47 = (float)Vector2__Length((Vector2 *)&local_178);
          if (0.0 < fVar47) {
            Vector2__operator_div_assign__005be2c0((Vector2 *)&local_178, fVar47);
          }
          fVar47 = (float)Vector2__Dot(local_188, (Vector2 *)&local_178);
          lVar36 = lVar36 * 0x120;
          Vector2__operator_mul__005be200(local_168, DAT_005bf764 /* R:750.0f */);
          Vector2__operator_mul__005be200(local_158,
                                          (float)((uint)(fVar47 - DAT_005be894 /* R:1.0f */) &
                                                  DAT_005be880 /* R:u32=2147483647 */) +
                                              DAT_005be894 /* R:1.0f */);
          Vector2__operator_assign((Vector2 *)(lVar35 + *(long *)(self + 0x3ed8) + lVar36 + 0x114),
                                   local_158);
          dVar46 = (double)__atan2_finite((double)local_178._4_4_);
          dVar46 = dVar46 - _DAT_005bf768 /* R:u32=1610612736 */;
          lVar23 = lVar36 + 0x28 + lVar35 + *(long *)(self + 0x3ed8);
          *(uint32_t *)(lVar23 + 0x9c) = 1;
          *(float *)(lVar23 + 0xd8) = (float)dVar46;
          Apply2DPhysics((SceneObject2D *)(lVar36 + 0x28 + lVar35 + *(long *)(self + 0x3ed8)),
                         fOneFrameTimeStep);
          local_470 = 1;
          local_4b8 = 0;
          local_4b0 = 0;
          local_4a8 = 0;
          local_4a0 = 0;
          *(uint *)(GSuperMeatBoy__pLevelPalette + 0x1a7c) =
              *(uint *)(GSuperMeatBoy__pLevelPalette + 0x1a7c) | 0x81;
          local_498 = 0;
          uStack_494 = 0;
          TileLevel__TileCollision(
              *(TileLevel **)(SuperMeatBoy + 0x40),
              (SceneObject2D *)(lVar36 + 0x28 + lVar35 + *(long *)(self + 0x3ed8)),
              (TileCollisionInfo *)&local_4b8);
          *(uint *)(GSuperMeatBoy__pLevelPalette + 0x1a7c) =
              *(uint *)(GSuperMeatBoy__pLevelPalette + 0x1a7c) & 0xffffff7f;
          if (CONCAT44(uStack_494, local_498) == 0) {
          LAB_004edf15:
            pSVar28 = (SMBShooter *)(*(long *)(self + 0x3ed8) + lVar35);
          } else {
            *(uint32_t *)(lVar35 + 0x120 + *(long *)(self + 0x3ed8) + lVar36) = 1;
            *(uint32_t *)(lVar35 + 0x124 + lVar36 + *(long *)(self + 0x3ed8)) = 0;
            iVar14 = GetRandomINT(0);
            pGVar8 = SuperMeatBoy;
            fVar47 = DAT_005bfba0 /* R:0.20000000298023224f */;
            lVar23 = lVar36 + 0x28 + lVar35 + *(long *)(self + 0x3ed8);
            *(uint32_t *)(lVar23 + 0x9c) = 1;
            *(float *)(lVar23 + 0xd8) = (float)iVar14 * DAT_005c07b0 /* R:0.009999999776482582f */;
            SMBCamera__ScreenShake(*(SMBCamera **)(pGVar8 + 0x38), _DAT_005bff44 /* R:5.0f */,
                                   fVar47);
            pSVar28 = (SMBShooter *)(*(long *)(self + 0x3ed8) + lVar35);
            if (*(int *)(pSVar28 + 0x18) == 5) {
              SpawnDemonSpawn(self, (Vector2 *)(pSVar28 + lVar36 + 200),
                              (TileCollisionInfo *)&local_4b8, pSVar28);
              pSVar28 = (SMBShooter *)(*(long *)(self + 0x3ed8) + lVar35);
            }
          }
          goto LAB_004ed5e6;
        }
        if (((iVar14 != 0) && (iVar14 != 1)) && (iVar14 != 2)) {
          if (iVar14 == 4) {
            lVar36 = lVar23 + 0x20;
            Apply2DPhysics((SceneObject2D *)(pSVar28 + lVar23 + 0x28), fOneFrameTimeStep);
            *(uint32_t *)(lVar35 + *(long *)(self + 0x3ed8) + 0xf8 + lVar36) = 0xc4098000;
            *(uint32_t *)(lVar35 + *(long *)(self + 0x3ed8) + 0xa0 + lVar36) = 0x3f000000;
            local_148 = *(uint64_t *)(*(long *)(*(long *)(self + 0x3ed8) + lVar35) + 0x34);
            local_138 = *(uint32_t *)(self + 0x4380);
            local_134 = local_138;
            Vector2__operator_mul__005be200(local_128, (Vector2 *)&local_138);
            lVar36 = lVar35 + *(long *)(self + 0x3ed8) + lVar36;
            *(uint32_t *)(lVar36 + 0xa4) = 1;
            Vector2__operator_assign((Vector2 *)(lVar36 + 0xd8), local_128);
            local_3d0 = 1;
            local_380 = 1;
            local_418 = 0;
            local_410 = 0;
            local_408 = 0;
            local_400 = 0;
            local_3f8 = 0;
            local_3f4 = 0;
            local_3c8 = 0;
            local_3c0 = 0;
            local_3b8 = 0;
            local_3b0 = 0;
            local_3a8 = 0;
            local_3a4 = 0;
            TileLevel__TileCollision(
                *(TileLevel **)(SuperMeatBoy + 0x40),
                (SceneObject2D *)(lVar23 + 0x28 + lVar35 + *(long *)(self + 0x3ed8)),
                (TileCollisionInfo *)&local_418);
            PlatformCollision(self,
                              (SceneObject2D *)(lVar23 + 0x28 + lVar35 + *(long *)(self + 0x3ed8)),
                              (TileCollisionInfo *)&local_418, (TileCollisionInfo *)&local_3c8);
            uVar15 = *(uint32_t *)(self + 0x1a7c);
            *(uint32_t *)(self + 0x1a7c) = 0x40;
            local_234 = (uint32_t)local_148;
            pSVar4 = (SceneObject2D *)(lVar23 + 0x28 + lVar35 + *(long *)(self + 0x3ed8));
            local_230 = *(uint64_t *)(pSVar4 + 0xa0);
            local_238[0] = (Bounds)0x11;
            ObstacleCollision(self, pSVar4, local_238);
            *(uint32_t *)(self + 0x1a7c) = uVar15;
            lVar36 = lVar23 + 0x28 + lVar35 + *(long *)(self + 0x3ed8);
            *(uint32_t *)(lVar36 + 0x9c) = 1;
            if (*(float *)(lVar36 + 0xb8) <= 0.0) {
              *(float *)(lVar36 + 0xd8) =
                  *(float *)(lVar36 + 0xd8) + DAT_005c72d4 /* R:0.05000000074505806f */;
              pSVar28 = (SMBShooter *)(*(long *)(self + 0x3ed8) + lVar35);
            } else {
              *(float *)(lVar36 + 0xd8) =
                  *(float *)(lVar36 + 0xd8) - DAT_005c72d4 /* R:0.05000000074505806f */;
              pSVar28 = (SMBShooter *)(*(long *)(self + 0x3ed8) + lVar35);
            }
          }
          goto LAB_004ed5e6;
        }
        lVar23 = lVar36 * 0x120;
        Apply2DPhysics((SceneObject2D *)(pSVar28 + lVar23 + 0x28), fOneFrameTimeStep);
        local_420 = 1;
        local_468 = 0;
        local_460 = 0;
        local_458 = 0;
        local_450 = 0;
        local_448 = 0;
        uStack_444 = 0;
        TileLevel__TileCollision(
            *(TileLevel **)(SuperMeatBoy + 0x40),
            (SceneObject2D *)(lVar23 + 0x28 + lVar35 + *(long *)(self + 0x3ed8)),
            (TileCollisionInfo *)&local_468);
        if (CONCAT44(uStack_444, local_448) == 0)
          goto LAB_004edf15;
        *(uint32_t *)(lVar35 + 0x120 + *(long *)(self + 0x3ed8) + lVar23) = 1;
        lVar33 = lVar35 + *(long *)(self + 0x3ed8);
        lVar6 = *(long *)(lVar33 + 0x140 + lVar23);
        if (lVar6 != 0) {
          *(uint32_t *)(lVar6 + 0x10) = 1;
          (**(code **)(**(long **)(lVar35 + 0x140 + *(long *)(self + 0x3ed8) + lVar23) + 0x20))();
          (**(code **)(**(long **)(lVar35 + *(long *)(self + 0x3ed8) + 0x140 + lVar23) + 0x28))();
          lVar33 = lVar35 + *(long *)(self + 0x3ed8);
        }
        iVar40 = iVar40 + 1;
        *(uint32_t *)(lVar33 + 0x124 + lVar36 * 0x120) = 0;
        pSVar28 = (SMBShooter *)(*(long *)(self + 0x3ed8) + lVar35);
      } while (iVar40 != 10);
      fVar47 = fOneFrameTimeStep;
      *(float *)(pSVar28 + 8) = *(float *)(pSVar28 + 8) - fOneFrameTimeStep;
      plVar16 = (long *)(lVar35 + *(long *)(self + 0x3ed8));
      iVar40 = *(int *)((long)plVar16 + 0x14);
      if (iVar40 != 0) {
        if (iVar40 == 1) {
          fVar47 = 0.0;
          switch ((int)plVar16[3]) {
          case 0:
            fVar47 = *(float *)(self + 0x42e0);
            break;
          case 1:
            fVar47 = *(float *)(self + 0x4300);
            break;
          case 2:
            fVar47 = *(float *)(self + 0x4320);
            break;
          case 3:
            fVar47 = *(float *)(self + 0x4340);
            break;
          case 4:
            fVar47 = *(float *)(self + 0x4378);
            break;
          case 5:
            fVar47 = *(float *)(self + 0x435c);
          }
          if (fVar47 < *(float *)(*plVar16 + 0x40) || fVar47 == *(float *)(*plVar16 + 0x40)) {
            *(uint32_t *)((long)plVar16 + 0x14) = 2;
            *(uint32_t *)(*(long *)(*(long *)(self + 0x3ed8) + lVar35) + 0x40) = 0;
            plVar16 = (long *)(lVar35 + *(long *)(self + 0x3ed8));
            iVar40 = (int)plVar16[3];
            if (iVar40 == 3) {
              *(char *)(*plVar16 + 0x20) = (char)*(uint32_t *)(self + 0x4334);
              SMBShooter__AddShot((SMBShooter *)(lVar35 + *(long *)(self + 0x3ed8)));
            } else {
              if (iVar40 == 0) {
                lVar36 = *plVar16;
                uVar30 = (uint8_t)*(uint32_t *)(self + 0x42d4);
              } else {
                if (iVar40 != 1) {
                  if (iVar40 == 4) {
                    *(char *)(*plVar16 + 0x20) = (char)*(uint32_t *)(self + 0x436c);
                    SMBShooter__AddShot((SMBShooter *)(lVar35 + *(long *)(self + 0x3ed8)));
                  } else if (iVar40 == 5) {
                    *(char *)(*plVar16 + 0x20) = (char)*(uint32_t *)(self + 0x4350);
                    SMBShooter__AddShot((SMBShooter *)(lVar35 + *(long *)(self + 0x3ed8)));
                  } else if (iVar40 == 2) {
                    *(char *)(*plVar16 + 0x20) = (char)*(uint32_t *)(self + 0x4314);
                    SMBShooter__AddShot((SMBShooter *)(lVar35 + *(long *)(self + 0x3ed8)));
                  }
                  goto LAB_004ed570;
                }
                lVar36 = *plVar16;
                uVar30 = (uint8_t)*(uint32_t *)(self + 0x42f4);
              }
              *(uint8_t *)(lVar36 + 0x20) = uVar30;
              SMBShooter__AddShot((SMBShooter *)(lVar35 + *(long *)(self + 0x3ed8)));
            }
          }
        } else {
          if (iVar40 != 2)
            goto LAB_004ed570;
          fVar48 = 0.0;
          switch ((int)plVar16[3]) {
          case 0:
            fVar48 = *(float *)(self + 0x42e4);
            break;
          case 1:
            fVar48 = *(float *)(self + 0x4304);
            break;
          case 2:
            fVar48 = *(float *)(self + 0x4324);
            lVar36 = *plVar16;
            *(float *)(lVar36 + 0x3c) = fVar47 * *(float *)(lVar36 + 0x44) *
                                            (DAT_005c07ac /* R:0.7853981852531433f */ / fVar48) +
                                        *(float *)(lVar36 + 0x3c);
            plVar16 = (long *)(lVar35 + *(long *)(self + 0x3ed8));
            break;
          case 3:
            fVar48 = *(float *)(self + 0x4344);
            break;
          case 4:
            fVar48 = *(float *)(self + 0x437c);
            break;
          case 5:
            fVar48 = *(float *)(self + 0x4360);
          }
          lVar36 = *plVar16;
          if (*(float *)(lVar36 + 0x40) <= fVar48 && fVar48 != *(float *)(lVar36 + 0x40))
            goto LAB_004ed570;
          iVar40 = (int)plVar16[3];
          switch (iVar40) {
          case 0:
            uVar30 = (uint8_t)*(uint32_t *)(self + 0x42cc);
            break;
          case 1:
            uVar30 = (uint8_t)*(uint32_t *)(self + 0x42ec);
            break;
          case 2:
            uVar30 = (uint8_t)*(uint32_t *)(self + 0x430c);
            break;
          case 3:
            uVar30 = (uint8_t)*(uint32_t *)(self + 0x432c);
            break;
          case 4:
            uVar30 = (uint8_t)*(uint32_t *)(self + 0x4364);
            break;
          case 5:
            uVar30 = (uint8_t)*(uint32_t *)(self + 0x4348);
            break;
          default:
            goto switchD_004ef004_default;
          }
          *(uint8_t *)(lVar36 + 0x20) = uVar30;
          plVar16 = (long *)(lVar35 + *(long *)(self + 0x3ed8));
          iVar40 = (int)plVar16[3];
          lVar36 = *plVar16;
        switchD_004ef004_default:
          fVar47 = DAT_005c07ac /* R:0.7853981852531433f */;
          if (iVar40 == 2) {
            *(int *)(lVar36 + 0x3c) = (int)plVar16[2];
            *(float *)(lVar35 + *(long *)(self + 0x3ed8) + 0x10) =
                fVar47 + *(float *)(lVar35 + *(long *)(self + 0x3ed8) + 0x10);
            plVar16 = (long *)(lVar35 + *(long *)(self + 0x3ed8));
            lVar36 = *plVar16;
          }
          fVar47 = *(float *)(lVar36 + 0x4c);
          if (*(float *)(lVar36 + 0x4c) == 0.0) {
            fVar47 = DAT_005be894 /* R:1.0f */;
          }
          *(float *)(plVar16 + 1) = fVar47;
          *(uint32_t *)(*(long *)(self + 0x3ed8) + 0x14 + lVar35) = 0;
        }
      LAB_004ed570:
        uVar39 = uVar39 + 1;
        if ((int)(uint) * (ushort *)(self + 0x3ec8) <= (int)uVar39)
          break;
        goto LAB_004ed584;
      }
      if (0.0 < *(float *)(plVar16 + 1))
        goto LAB_004ed570;
      iVar40 = *(int *)((long)plVar16 + 0x1c);
      local_f8 = *(uint32_t *)(*plVar16 + 0x24);
      local_f4 = *(uint32_t *)(*plVar16 + 0x28);
      iVar14 = (int)plVar16[3];
      if (((iVar14 == 0) || (iVar14 == 4)) || (iVar14 == 2)) {
        *(uint32_t *)((long)plVar16 + 0x1c) = 1;
        iVar40 = 1;
      } else {
        lVar36 = GSuperMeatBoy__getChar(SuperMeatBoy, 0);
        uVar15 =
            TileLevel__TileLineOfSight(*(TileLevel **)(SuperMeatBoy + 0x40), (Vector2 *)&local_f8,
                                       (Vector2 *)(lVar36 + 0xa0), local_e8);
        *(uint32_t *)((long)plVar16 + 0x1c) = uVar15;
      }
      plVar16 = (long *)(lVar35 + *(long *)(self + 0x3ed8));
      if ((*(int *)((long)plVar16 + 0x1c) == 1) && (iVar40 == 1)) {
        *(uint32_t *)((long)plVar16 + 0x14) = 1;
        plVar16 = (long *)(lVar35 + *(long *)(self + 0x3ed8));
        iVar40 = (int)plVar16[3];
        if (iVar40 == 3) {
          *(char *)(*plVar16 + 0x20) = (char)*(uint32_t *)(self + 0x4330);
          plVar16 = (long *)(lVar35 + *(long *)(self + 0x3ed8));
        } else if (iVar40 == 0) {
          *(char *)(*plVar16 + 0x20) = (char)*(uint32_t *)(self + 0x42d0);
          plVar16 = (long *)(lVar35 + *(long *)(self + 0x3ed8));
        } else if (iVar40 == 1) {
          *(char *)(*plVar16 + 0x20) = (char)*(uint32_t *)(self + 0x42f0);
          plVar16 = (long *)(lVar35 + *(long *)(self + 0x3ed8));
        } else if (iVar40 == 4) {
          *(char *)(*plVar16 + 0x20) = (char)*(uint32_t *)(self + 0x4368);
          plVar16 = (long *)(lVar35 + *(long *)(self + 0x3ed8));
        } else if (iVar40 == 5) {
          *(char *)(*plVar16 + 0x20) = (char)*(uint32_t *)(self + 0x434c);
          plVar16 = (long *)(lVar35 + *(long *)(self + 0x3ed8));
        } else if (iVar40 == 2) {
          *(char *)(*plVar16 + 0x20) = (char)*(uint32_t *)(self + 0x4310);
          plVar16 = (long *)(lVar35 + *(long *)(self + 0x3ed8));
        }
      }
      uVar39 = uVar39 + 1;
      *(uint32_t *)(*plVar16 + 0x40) = 0;
      *(uint32_t *)(*(long *)(self + 0x3ed8) + 8 + lVar35) = *(uint32_t *)(self + 0x4340);
    } while ((int)uVar39 < (int)(uint) * (ushort *)(self + 0x3ec8));
  }
  UpdateDemonSpawn(self);
  if (*(short *)(self + 0x4008) != 0) {
    uVar24 = 0;
    do {
      while (true) {
        uVar34 = uVar24 & 0xffff;
        lVar35 = uVar34 * 0x28;
        *(float *)(*(long *)(self + 0x4018) + lVar35 + 8) =
            *(float *)(*(long *)(self + 0x4018) + lVar35 + 8) + fOneFrameTimeStep;
        plVar16 = (long *)(*(long *)(self + 0x4018) + lVar35);
        if ((int)plVar16[2] == 1) {
          Matrix4x4__ConvertToRotationMatrix(local_328, *(float *)(*plVar16 + 0x3c));
          local_d8 = *(uint32_t *)(*(long *)(*(long *)(self + 0x4018) + lVar35) + 0x24);
          local_d4 = *(uint32_t *)(*(long *)(*(long *)(self + 0x4018) + lVar35) + 0x28);
          lVar36 = GSuperMeatBoy__getChar(SuperMeatBoy, 0);
          Vector2__operator_minus__005be180((Vector2 *)&local_c8, (Vector2 *)(lVar36 + 0xa0));
          fVar47 = (float)Vector2__Length((Vector2 *)&local_c8);
          if (0.0 < fVar47) {
            Vector2__operator_div_assign__005be2c0((Vector2 *)&local_c8, fVar47);
          }
          local_b8 = 0x3f800000;
          local_b4 = 0;
          fVar47 = *(float *)(*(long *)(*(long *)(self + 0x4018) + uVar34 * 0x28) + 0x3c);
          Matrix4x4__TransformVector2((Vector2 *)&local_b8, (Vector2 *)&local_b8, local_328, 1);
          dVar43 = (double)__atan2_finite((double)local_c4, (double)local_c8);
          Vector2__Dot((Vector2 *)&local_c8, (Vector2 *)&local_b8);
          fVar48 = (float)__acosf_finite();
          dVar44 = sin((double)(fVar48 + fVar47));
          dVar46 = DAT_005c7310 /* R:0.0f */;
          dVar44 = dVar44 * DAT_005c7308 /* R:0.0f */;
          if ((double)((ulong)dVar44 & DAT_005c7328 /* R:u32=4294967295 */) <
              DAT_005c7310 /* R:0.0f */) {
            dVar44 = (double)(DAT_005c7318 /* R:0.0f */ & -(ulong)((double)(long)dVar44 < dVar44)) +
                     (double)(long)dVar44;
          }
          dVar44 = dVar44 * DAT_005c7320 /* R:u32=3539053052 */;
          dVar45 = sin((double)(fVar47 - fVar48));
          dVar45 = DAT_005c7308 /* R:0.0f */ * dVar45;
          if ((double)((ulong)dVar45 & DAT_005c7328 /* R:u32=4294967295 */) < dVar46) {
            dVar45 = (double)(DAT_005c7318 /* R:0.0f */ & -(ulong)((double)(long)dVar45 < dVar45)) +
                     (double)(long)dVar45;
          }
          dVar43 = sin((double)(float)dVar43);
          dVar43 = dVar43 * DAT_005c7308 /* R:0.0f */;
          if ((double)((ulong)dVar43 & DAT_005c7328 /* R:u32=4294967295 */) < dVar46) {
            dVar43 = (double)(DAT_005c7318 /* R:0.0f */ & -(ulong)((double)(long)dVar43 < dVar43)) +
                     (double)(long)dVar43;
          }
          plVar16 = (long *)(*(long *)(self + 0x4018) + lVar35);
          lVar36 = *plVar16;
          fVar47 = _DAT_005bfba8 /* R:0.10000000149011612f */;
          if (*(int *)(lVar36 + 0x58) != 0) {
            fVar47 = DAT_005be894 /* R:1.0f */ / (float)*(int *)(lVar36 + 0x58);
          }
          if ((float)dVar44 == (float)(dVar43 * DAT_005c7320 /* R:u32=3539053052 */)) {
            *(float *)(lVar36 + 0x3c) = fVar47 * fVar48 + *(float *)(lVar36 + 0x3c);
            plVar16 = (long *)(*(long *)(self + 0x4018) + lVar35);
          } else if ((float)(DAT_005c7320 /* R:u32=3539053052 */ * dVar45) ==
                     (float)(dVar43 * DAT_005c7320 /* R:u32=3539053052 */)) {
            *(float *)(lVar36 + 0x3c) = *(float *)(lVar36 + 0x3c) - fVar47 * fVar48;
            plVar16 = (long *)(*(long *)(self + 0x4018) + lVar35);
          }
        }
        iVar40 = *(int *)((long)plVar16 + 0xc);
        if (iVar40 != 0)
          break;
        if (*(float *)(plVar16 + 1) < *(float *)(*plVar16 + 0x4c) ||
            *(float *)(plVar16 + 1) == *(float *)(*plVar16 + 0x4c)) {
        LAB_004edb21:
          iVar40 = (int)plVar16[2];
        } else {
          *(uint32_t *)((long)plVar16 + 0xc) = 2;
          *(uint32_t *)(*(long *)(self + 0x4018) + 8 + lVar35) = 0;
          *(uint32_t *)(*(long *)(*(long *)(self + 0x4018) + uVar34 * 0x28) + 0x40) = 0;
          plVar16 = (long *)(*(long *)(self + 0x4018) + lVar35);
          if ((int)plVar16[2] == 0) {
            *(char *)(*plVar16 + 0x20) = (char)*(uint32_t *)(self + 0x4394);
            plVar16 = (long *)(*(long *)(self + 0x4018) + lVar35);
            goto LAB_004edb21;
          }
          if ((int)plVar16[2] != 1)
            goto LAB_004edb2b;
          *(char *)(*plVar16 + 0x20) = (char)*(uint32_t *)(self + 0x43a4);
          plVar16 = (long *)(*(long *)(self + 0x4018) + lVar35);
          iVar40 = (int)plVar16[2];
        }
        if (iVar40 == 1) {
          Matrix4x4__ConvertToRotationMatrix(local_2e8, *(float *)(*plVar16 + 0x3c));
          fVar48 = (float)*(ushort *)(*(long *)(SuperMeatBoy + 0x40) + 0x38);
          fVar47 = (float)*(ushort *)(*(long *)(SuperMeatBoy + 0x40) + 0x3a);
          bVar9 = *(byte *)(*(long *)(*(long *)(self + 0x4018) + uVar34 * 0x28) + 0x21) >> 2;
          bVar10 = bVar9 & 3;
          local_98 = SQRT(TileLevel__fLevelGridWH * TileLevel__fLevelGridWH *
                          (fVar47 * fVar47 + fVar48 * fVar48));
          if ((bVar10 == 1) || ((bVar10 != 2 && ((bVar9 & 3) != 0)))) {
            local_98 = (float)((uint)local_98 ^ DAT_005be6f0 /* R:u32=2147483648 */);
          }
          local_94 = 0;
          Matrix4x4__TransformVector2(local_a8, (Vector2 *)&local_98, local_2e8, 1);
          *(uint32_t *)((long *)(*(long *)(self + 0x4018) + lVar35) + 3) =
              *(uint32_t *)(*(long *)(*(long *)(self + 0x4018) + lVar35) + 0x24);
          *(uint32_t *)(*(long *)(self + 0x4018) + lVar35 + 0x1c) =
              *(uint32_t *)(*(long *)(*(long *)(self + 0x4018) + lVar35) + 0x28);
          Vector2__operator_plus_assign(local_a8,
                                        (Vector2 *)(*(long *)(self + 0x4018) + lVar35 + 0x18));
          TileLevel__TileLineOfSight(*(TileLevel **)(SuperMeatBoy + 0x40),
                                     (Vector2 *)(*(long *)(self + 0x4018) + lVar35 + 0x18),
                                     local_a8,
                                     (Vector2 *)(*(long *)(self + 0x4018) + lVar35 + 0x20));
        }
      LAB_004edb2b:
        uVar39 = (int)uVar24 + 1;
        uVar24 = (ulong)uVar39;
        if ((int)(uint) * (ushort *)(self + 0x4008) <= (int)uVar39)
          goto LAB_004edd20;
      }
      if ((iVar40 != 1) && (iVar40 != 2))
        goto LAB_004edb2b;
      Matrix4x4__ConvertToRotationMatrix(local_2a8, *(float *)(*plVar16 + 0x3c));
      fVar48 = (float)*(ushort *)(*(long *)(SuperMeatBoy + 0x40) + 0x38);
      fVar47 = (float)*(ushort *)(*(long *)(SuperMeatBoy + 0x40) + 0x3a);
      bVar9 = *(byte *)(*(long *)(*(long *)(self + 0x4018) + uVar34 * 0x28) + 0x21) >> 2;
      bVar10 = bVar9 & 3;
      local_78 = SQRT(TileLevel__fLevelGridWH * TileLevel__fLevelGridWH *
                      (fVar47 * fVar47 + fVar48 * fVar48));
      if ((bVar10 == 1) || ((bVar10 != 2 && ((bVar9 & 3) != 0)))) {
        local_78 = (float)((uint)local_78 ^ DAT_005be6f0 /* R:u32=2147483648 */);
      }
      local_74 = 0;
      Matrix4x4__TransformVector2(local_88, (Vector2 *)&local_78, local_2a8, 1);
      *(uint32_t *)((long *)(*(long *)(self + 0x4018) + lVar35) + 3) =
          *(uint32_t *)(*(long *)(*(long *)(self + 0x4018) + lVar35) + 0x24);
      *(uint32_t *)(*(long *)(self + 0x4018) + lVar35 + 0x1c) =
          *(uint32_t *)(*(long *)(*(long *)(self + 0x4018) + lVar35) + 0x28);
      Vector2__operator_plus_assign(local_88,
                                    (Vector2 *)(*(long *)(self + 0x4018) + lVar35 + 0x18));
      TileLevel__TileLineOfSight(*(TileLevel **)(SuperMeatBoy + 0x40),
                                 (Vector2 *)(*(long *)(self + 0x4018) + lVar35 + 0x18), local_88,
                                 (Vector2 *)(*(long *)(self + 0x4018) + lVar35 + 0x20));
      plVar16 = (long *)(*(long *)(self + 0x4018) + lVar35);
      if ((*(int *)((long)plVar16 + 0xc) != 1) ||
          (*(float *)(plVar16 + 1) < *(float *)(*plVar16 + 0x50) ||
           *(float *)(plVar16 + 1) == *(float *)(*plVar16 + 0x50)))
        goto LAB_004edb2b;
      *(uint32_t *)((long)plVar16 + 0xc) = 0;
      *(uint32_t *)(*(long *)(self + 0x4018) + 8 + lVar35) = 0;
      plVar16 = (long *)(lVar35 + *(long *)(self + 0x4018));
      if ((int)plVar16[2] != 0) {
        if ((int)plVar16[2] == 1) {
          *(char *)(*plVar16 + 0x20) = (char)*(uint32_t *)(self + 0x43a0);
        }
        goto LAB_004edb2b;
      }
      uVar39 = (int)uVar24 + 1;
      uVar24 = (ulong)uVar39;
      *(char *)(*plVar16 + 0x20) = (char)*(uint32_t *)(self + 0x4390);
    } while ((int)uVar39 < (int)(uint) * (ushort *)(self + 0x4008));
  }
LAB_004edd20:
  local_58 = DAT_005be6e4 /* R:0.5f */ * TileLevel__fLevelGridWH;
  local_68 = 0;
  local_64 = 0;
  local_54 = local_58;
  BoundingSquare__BoundingSquare(local_558, (Vector2 *)&local_68, 0.0, (Vector2 *)&local_58);
  if ((*(long *)(self + 0x2ad0) != 0) &&
      ((uint) * (byte *)(*(long *)(self + 0x2ad0) + 0x20) == *(uint *)(self + 0x4270))) {
    local_378 = 0;
    local_370 = 0;
    local_368 = 0;
    local_360 = 0;
    local_358 = 0;
    local_354 = 0;
    local_330 = 1;
    Apply2DPhysics((SceneObject2D *)(self + 0x2ae0), fOneFrameTimeStep);
    local_508 = *(uint32_t *)(self + 0x2b80);
    *(BoundingSquare **)(self + 0x2b28) = local_558;
    local_4f8 = *(uint32_t *)(self + 0x2b84);
    TileLevel__TileCollision(*(TileLevel **)(SuperMeatBoy + 0x40), (SceneObject2D *)(self + 0x2ae0),
                             (TileCollisionInfo *)&local_378);
    *(uint64_t *)(self + 0x2b28) = 0;
    *(uint32_t *)(*(long *)(self + 0x2ad0) + 0x24) = *(uint32_t *)(self + 0x2b80);
    *(uint32_t *)(*(long *)(self + 0x2ad0) + 0x28) = *(uint32_t *)(self + 0x2b84);
    *(float *)(self + 0x2bd0) = *(float *)(self + 0x2bd0) - _DAT_005c17d4 /* R:550.0f */;
  }
  if ((*(long *)(self + 0x2be0) != 0) &&
      ((uint) * (byte *)(*(long *)(self + 0x2be0) + 0x20) == *(uint *)(self + 0x4270))) {
    local_378 = 0;
    local_370 = 0;
    local_368 = 0;
    local_360 = 0;
    local_358 = 0;
    local_354 = 0;
    local_330 = 1;
    Apply2DPhysics((SceneObject2D *)(self + 0x2bf0), fOneFrameTimeStep);
    local_508 = *(uint32_t *)(self + 0x2c90);
    *(BoundingSquare **)(self + 0x2c38) = local_558;
    local_4f8 = *(uint32_t *)(self + 0x2c94);
    TileLevel__TileCollision(*(TileLevel **)(SuperMeatBoy + 0x40), (SceneObject2D *)(self + 0x2bf0),
                             (TileCollisionInfo *)&local_378);
    *(uint64_t *)(self + 0x2c38) = 0;
    *(uint32_t *)(*(long *)(self + 0x2be0) + 0x24) = *(uint32_t *)(self + 0x2c90);
    *(uint32_t *)(*(long *)(self + 0x2be0) + 0x28) = *(uint32_t *)(self + 0x2c94);
    *(float *)(self + 0x2ce0) = *(float *)(self + 0x2ce0) - _DAT_005c17d4 /* R:550.0f */;
  }
  if ((*(long *)(self + 0x2cf0) != 0) &&
      ((uint) * (byte *)(*(long *)(self + 0x2cf0) + 0x20) == *(uint *)(self + 0x4270))) {
    local_378 = 0;
    local_370 = 0;
    local_368 = 0;
    local_360 = 0;
    local_358 = 0;
    local_354 = 0;
    local_330 = 1;
    Apply2DPhysics((SceneObject2D *)(self + 0x2d00), fOneFrameTimeStep);
    local_508 = *(uint32_t *)(self + 0x2da0);
    *(BoundingSquare **)(self + 0x2d48) = local_558;
    local_4f8 = *(uint32_t *)(self + 0x2da4);
    TileLevel__TileCollision(*(TileLevel **)(SuperMeatBoy + 0x40), (SceneObject2D *)(self + 0x2d00),
                             (TileCollisionInfo *)&local_378);
    *(uint64_t *)(self + 0x2d48) = 0;
    *(uint32_t *)(*(long *)(self + 0x2cf0) + 0x24) = *(uint32_t *)(self + 0x2da0);
    *(uint32_t *)(*(long *)(self + 0x2cf0) + 0x28) = *(uint32_t *)(self + 0x2da4);
    *(float *)(self + 0x2df0) = *(float *)(self + 0x2df0) - _DAT_005c17d4 /* R:550.0f */;
  }
  if ((*(long *)(self + 0x2e00) != 0) &&
      ((uint) * (byte *)(*(long *)(self + 0x2e00) + 0x20) == *(uint *)(self + 0x4270))) {
    local_378 = 0;
    local_370 = 0;
    local_368 = 0;
    local_360 = 0;
    local_358 = 0;
    local_354 = 0;
    local_330 = 1;
    Apply2DPhysics((SceneObject2D *)(self + 0x2e10), fOneFrameTimeStep);
    local_508 = *(uint32_t *)(self + 0x2eb0);
    *(BoundingSquare **)(self + 0x2e58) = local_558;
    local_4f8 = *(uint32_t *)(self + 0x2eb4);
    TileLevel__TileCollision(*(TileLevel **)(SuperMeatBoy + 0x40), (SceneObject2D *)(self + 0x2e10),
                             (TileCollisionInfo *)&local_378);
    *(uint64_t *)(self + 0x2e58) = 0;
    *(uint32_t *)(*(long *)(self + 0x2e00) + 0x24) = *(uint32_t *)(self + 0x2eb0);
    *(uint32_t *)(*(long *)(self + 0x2e00) + 0x28) = *(uint32_t *)(self + 0x2eb4);
    *(float *)(self + 0x2f00) = *(float *)(self + 0x2f00) - _DAT_005c17d4 /* R:550.0f */;
  }
  if ((*(long *)(self + 0x2f10) != 0) &&
      ((uint) * (byte *)(*(long *)(self + 0x2f10) + 0x20) == *(uint *)(self + 0x4270))) {
    local_378 = 0;
    local_370 = 0;
    local_368 = 0;
    local_360 = 0;
    local_358 = 0;
    local_354 = 0;
    local_330 = 1;
    Apply2DPhysics((SceneObject2D *)(self + 0x2f20), fOneFrameTimeStep);
    local_508 = *(uint32_t *)(self + 0x2fc0);
    *(BoundingSquare **)(self + 0x2f68) = local_558;
    local_4f8 = *(uint32_t *)(self + 0x2fc4);
    TileLevel__TileCollision(*(TileLevel **)(SuperMeatBoy + 0x40), (SceneObject2D *)(self + 0x2f20),
                             (TileCollisionInfo *)&local_378);
    *(uint64_t *)(self + 0x2f68) = 0;
    *(uint32_t *)(*(long *)(self + 0x2f10) + 0x24) = *(uint32_t *)(self + 0x2fc0);
    *(uint32_t *)(*(long *)(self + 0x2f10) + 0x28) = *(uint32_t *)(self + 0x2fc4);
    *(float *)(self + 0x3010) = *(float *)(self + 0x3010) - _DAT_005c17d4 /* R:550.0f */;
  }
  if ((*(long *)(self + 0x3020) != 0) &&
      ((uint) * (byte *)(*(long *)(self + 0x3020) + 0x20) == *(uint *)(self + 0x4270))) {
    local_378 = 0;
    local_370 = 0;
    local_368 = 0;
    local_360 = 0;
    local_358 = 0;
    local_354 = 0;
    local_330 = 1;
    Apply2DPhysics((SceneObject2D *)(self + 0x3030), fOneFrameTimeStep);
    local_508 = *(uint32_t *)(self + 0x30d0);
    *(BoundingSquare **)(self + 0x3078) = local_558;
    local_4f8 = *(uint32_t *)(self + 0x30d4);
    TileLevel__TileCollision(*(TileLevel **)(SuperMeatBoy + 0x40), (SceneObject2D *)(self + 0x3030),
                             (TileCollisionInfo *)&local_378);
    *(uint64_t *)(self + 0x3078) = 0;
    *(uint32_t *)(*(long *)(self + 0x3020) + 0x24) = *(uint32_t *)(self + 0x30d0);
    *(uint32_t *)(*(long *)(self + 0x3020) + 0x28) = *(uint32_t *)(self + 0x30d4);
    *(float *)(self + 0x3120) = *(float *)(self + 0x3120) - _DAT_005c17d4 /* R:550.0f */;
  }
  if (*(short *)(self + 0x4170) != 0) {
    uVar24 = 0;
    do {
      uVar34 = uVar24 & 0xffff;
      uVar39 = (int)uVar24 + 1;
      uVar24 = (ulong)uVar39;
      SMBPortal__Update((SMBPortal *)(*(long *)(self + 0x4180) + uVar34 * 0x18));
    } while ((int)uVar39 < (int)(uint) * (ushort *)(self + 0x4170));
  }
  if (((SystemCaps._4_4_ != 8) && (SystemCaps._4_4_ != 4)) && (*(short *)(self + 0x4230) != 0)) {
    uVar24 = 0;
    do {
      uVar34 = uVar24 & 0xffff;
      uVar39 = (int)uVar24 + 1;
      uVar24 = (ulong)uVar39;
      lVar36 = uVar34 * 0x10;
      lVar35 = ((long *)(lVar36 + *(long *)(self + 0x4240)))[1];
      local_48 = *(uint32_t *)(lVar35 + 0x24);
      local_44 = *(uint32_t *)(lVar35 + 0x28);
      *(uint64_t *)(*(long *)(lVar36 + *(long *)(self + 0x4240)) + 8) =
          *(uint64_t *)(SuperMeatBoy + 0x40);
      (**(code **)(**(long **)(*(long *)(self + 0x4240) + lVar36) + 0x28))(
          *(long **)(*(long *)(self + 0x4240) + lVar36), &local_48);
      (**(code **)(**(long **)(*(long *)(self + 0x4240) + lVar36) + 0x18))();
    } while ((int)uVar39 < (int)(uint) * (ushort *)(self + 0x4230));
  }
  return;
}

/* ======================================================================
 * SMBPalette__GetInLevelTransition  (Ghidra `GetInLevelTransition` @ 004f07e0)
 * Signature: uint8_t __thiscall GetInLevelTransition(SMBPalette * self)
 * Class: SMBPalette
 * Calls: `GetRandomINT`
 * Called by: `BackToTitleFromReplay`, `GMeatHUD__ShowLevelTransition`, `TransitionToNextLevel`
 */
/* SMBPalette__GetInLevelTransition() */

long __thiscall SMBPalette__GetInLevelTransition(SMBPalette *self)

{
  ushort uVar1;
  long lVar2;

  uVar1 = GetRandomINT(0, *(ushort *)(self + 0x138) - 1);
  *(ulong *)(self + 0x160) = (ulong)uVar1 * 0x10 + *(long *)(self + 0x148);
  lVar2 = 0;
  if (*(ushort *)(self + 0x138) != 0) {
    uVar1 = GetRandomINT(0, *(ushort *)(self + 0x138) - 1);
    lVar2 = (ulong)uVar1 * 0x10 + *(long *)(self + 0x148);
  }
  return lVar2;
}

/* ======================================================================
 * SMBPalette__GetOutLevelTransition  (Ghidra `GetOutLevelTransition` @ 004f0840)
 * Signature: uint8_t __thiscall GetOutLevelTransition(SMBPalette * self)
 * Class: SMBPalette
 * Calls: `GetRandomINT`
 * Called by: `SMBLevelTransitionOut`
 */
/* SMBPalette__GetOutLevelTransition() */

void __thiscall SMBPalette__GetOutLevelTransition(SMBPalette *self)

{
  ushort uVar1;

  if (*(long *)(self + 0x160) != 0) {
    return;
  }
  uVar1 = GetRandomINT(0, *(ushort *)(self + 0x138) - 1);
  *(ulong *)(self + 0x160) = (ulong)uVar1 * 0x10 + *(long *)(self + 0x148);
  return;
}

/* ======================================================================
 * SMBPalette__MarkCollision  (Ghidra `MarkCollision` @ 004f0880)
 * Signature: uint8_t __thiscall MarkCollision(SMBPalette * self, int arg1)
 * Class: SMBPalette
 * Calls: `TileLevel__GetGridBlock`, `TileLevel__GetGridPos`, `free`, `malloc`, `memcpy`
 * Called by: `GSuperMeatBoy__SetCurrentLevel`, `MrMinecraft__ManipulateBlock`, `SMBEditor__DeActivate`
 */
/* SMBPalette__MarkCollision(int) */

void __thiscall SMBPalette__MarkCollision(SMBPalette *self, int arg1)

{
  GRIDBLOCK GVar1;
  ushort uVar2;
  ushort uVar3;
  bool bVar4;
  uint32_t uVar5;
  uint32_t uVar6;
  short sVar7;
  ushort uVar8;
  GRIDBLOCK *pGVar9;
  uint32_t *puVar10;
  void *pvVar11;
  void *pvVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ushort uVar16;
  ushort *puVar17;
  uint64_t *puVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  uint64_t *puVar22;
  void *pvVar23;
  int iVar24;
  bool bVar25;
  byte bVar26;
  uint32_t local_48;
  uint32_t local_44;

  bVar26 = 0;
  uVar2 = *(ushort *)(*(long *)(SuperMeatBoy + 0x40) + 0x38);
  uVar3 = *(ushort *)(*(long *)(SuperMeatBoy + 0x40) + 0x3a);
  if (arg1 == 1) {
    *(uint16_t *)(self + 0x3e78) = 0;
    if ((*(int *)(self + 16000) == 1) && (uVar8 = *(ushort *)(self + 0x3e7a), uVar8 != 0)) {
      lVar13 = 0;
      do {
        *(uint16_t *)(*(long *)(self + 0x3e90) + lVar13) = 0xffff;
        lVar13 = lVar13 + 2;
      } while (lVar13 != (ulong)(uVar8 - 1 & 0xffff) * 2 + 2);
    }
    *(uint16_t *)(self + 0x40d0) = 0;
    if ((*(int *)(self + 0x40d8) == 1) && (uVar8 = *(ushort *)(self + 0x40d2), uVar8 != 0)) {
      lVar13 = 0;
      do {
        *(uint16_t *)(*(long *)(self + 0x40e8) + lVar13) = 0xffff;
        lVar13 = lVar13 + 2;
      } while (lVar13 != (ulong)(uVar8 - 1 & 0xffff) * 2 + 2);
    }
  }
  iVar24 = 0;
  if (uVar2 != 0) {
    do {
      iVar19 = 0;
      if (uVar3 != 0) {
      LAB_004f0992:
        do {
          pGVar9 = (GRIDBLOCK *)TileLevel__GetGridBlock(*(TileLevel **)(SuperMeatBoy + 0x40),
                                                        iVar24, iVar19, 0);
          if (*pGVar9 == (GRIDBLOCK)0x0) {
            *(ushort *)(pGVar9 + 2) = *(ushort *)(pGVar9 + 2) & 0x3f;
            uVar21 = 0;
            if (*(int *)(pPalProps + 4) == 0)
              goto LAB_004f09d0;
          LAB_004f0908:
            if (((uVar21 == *(uint *)(pPalProps + 0xc)) ||
                 (uVar21 == *(uint *)(pPalProps + 0x28))) ||
                (uVar21 == *(uint *)(pPalProps + 0x50)))
              goto LAB_004f09d0;
            if ((uVar21 == *(uint *)(self + 0x427c)) && (arg1 == 1)) {
              if (*(int *)(self + 0x40f0) == -0x5eef3582) {
                uVar8 = *(ushort *)(self + 0x40d0);
                if (*(ushort *)(self + 0x40d2) <= uVar8) {
                  uVar8 = *(ushort *)(self + 0x40d2) + *(short *)(self + 0x40dc);
                  uVar14 = (ulong)(byte)self[0x40d4];
                  pvVar12 = *(void **)(self + 0x40e0);
                  *(ushort *)(self + 0x40d2) = uVar8;
                  uVar15 = (ulong)uVar8 * 0x10;
                  pvVar23 = malloc(uVar14 + 0x10 + uVar15);
                  pvVar11 = (void *)0x0;
                  if (pvVar23 != (void *)0x0) {
                    pvVar11 = (void *)((long)pvVar23 + 0x10U +
                                       (uVar14 - ((long)pvVar23 + 0x10U) % uVar14) % uVar14);
                    *(ulong *)((long)pvVar11 + -0x10) = uVar15;
                    *(void **)((long)pvVar11 + -8) = pvVar23;
                    if (pvVar12 != (void *)0x0) {
                      uVar14 = *(ulong *)((long)pvVar12 + -0x10);
                      if (uVar15 <= *(ulong *)((long)pvVar12 + -0x10)) {
                        uVar14 = uVar15;
                      }
                      memcpy(pvVar11, pvVar12, uVar14);
                      free(*(void **)((long)pvVar12 + -8));
                    }
                  }
                  *(void **)(self + 0x40e0) = pvVar11;
                  pvVar11 = *(void **)(self + 0x40e8);
                  if (pvVar11 != (void *)0x0) {
                    uVar16 = *(ushort *)(self + 0x40d2);
                    uVar14 = (ulong)(byte)self[0x40d4];
                    uVar15 = (ulong)uVar16 * 2;
                    pvVar23 = malloc(uVar14 + 0x10 + uVar15);
                    pvVar12 = (void *)0x0;
                    if (pvVar23 != (void *)0x0) {
                      pvVar12 = (void *)((long)pvVar23 + 0x10U +
                                         (uVar14 - ((long)pvVar23 + 0x10U) % uVar14) % uVar14);
                      *(void **)((long)pvVar12 + -8) = pvVar23;
                      *(ulong *)((long)pvVar12 + -0x10) = uVar15;
                      uVar14 = *(ulong *)((long)pvVar11 + -0x10);
                      if (uVar15 <= *(ulong *)((long)pvVar11 + -0x10)) {
                        uVar14 = uVar15;
                      }
                      memcpy(pvVar12, pvVar11, uVar14);
                      free(*(void **)((long)pvVar11 + -8));
                      uVar16 = *(ushort *)(self + 0x40d2);
                    }
                    uVar8 = *(ushort *)(self + 0x40d0);
                    *(void **)(self + 0x40e8) = pvVar12;
                    if (uVar16 <= uVar8)
                      goto LAB_004f0958;
                    while (true) {
                      uVar15 = (ulong)uVar8;
                      uVar8 = uVar8 + 1;
                      *(uint16_t *)((long)pvVar12 + uVar15 * 2) = 0xffff;
                      if (uVar16 <= uVar8)
                        break;
                      pvVar12 = *(void **)(self + 0x40e8);
                    }
                  }
                  uVar8 = *(ushort *)(self + 0x40d0);
                }
              LAB_004f0958:
                iVar20 = *(int *)(self + 0x40d8);
              } else {
                uVar15 = (ulong)(byte)self[0x40d4];
                *(uint32_t *)(self + 0x40d8) = 0;
                pvVar11 = malloc(uVar15 + 0x60);
                puVar18 = (uint64_t *)0x0;
                if (pvVar11 != (void *)0x0) {
                  puVar18 = (uint64_t *)((uVar15 - ((long)pvVar11 + 0x10U) % uVar15) % uVar15 +
                                         (long)pvVar11 + 0x10U);
                  puVar18[-2] = 0x50;
                  puVar18[-1] = pvVar11;
                }
                bVar25 = ((ulong)puVar18 & 1) != 0;
                *(uint64_t **)(self + 0x40e0) = puVar18;
                uVar15 = 0x50;
                if (bVar25) {
                  *(uint8_t *)puVar18 = 0;
                  puVar18 = (uint64_t *)((long)puVar18 + 1);
                  uVar15 = 0x4f;
                }
                if (((ulong)puVar18 & 2) != 0) {
                  *(uint16_t *)puVar18 = 0;
                  uVar15 = (ulong)((int)uVar15 - 2);
                  puVar18 = (uint64_t *)((long)puVar18 + 2);
                }
                if (((ulong)puVar18 & 4) != 0) {
                  *(uint32_t *)puVar18 = 0;
                  uVar15 = (ulong)((int)uVar15 - 4);
                  puVar18 = (uint64_t *)((long)puVar18 + 4);
                }
                for (uVar14 = uVar15 >> 3; uVar14 != 0; uVar14 = uVar14 - 1) {
                  *puVar18 = 0;
                  puVar18 = puVar18 + (ulong)bVar26 * -2 + 1;
                }
                if ((uVar15 & 4) != 0) {
                  *(uint32_t *)puVar18 = 0;
                  puVar18 = (uint64_t *)((long)puVar18 + 4);
                }
                if ((uVar15 & 2) != 0) {
                  *(uint16_t *)puVar18 = 0;
                  puVar18 = (uint64_t *)((long)puVar18 + 2);
                }
                if (bVar25) {
                  *(uint8_t *)puVar18 = 0;
                }
                uVar8 = 0;
                iVar20 = *(int *)(self + 0x40d8);
                *(uint16_t *)(self + 0x40d0) = 0;
                *(uint16_t *)(self + 0x40d2) = 5;
                *(uint32_t *)(self + 0x40f0) = 0xa110ca7e;
                *(uint16_t *)(self + 0x40dc) = 5;
              }
              if ((iVar20 == 1) && (*(short *)(self + 0x40d2) != 0)) {
                puVar17 = *(ushort **)(self + 0x40e8);
                sVar7 = 1;
                uVar16 = *puVar17;
                while (uVar16 != 0xffff) {
                  puVar17 = puVar17 + 1;
                  if (sVar7 == *(short *)(self + 0x40d2))
                    goto LAB_004f0965;
                  sVar7 = sVar7 + 1;
                  uVar16 = *puVar17;
                }
                *puVar17 = uVar8;
                uVar8 = *(ushort *)(self + 0x40d0);
              }
            LAB_004f0965:
              puVar18 = (uint64_t *)((ulong)uVar8 * 0x10 + *(long *)(self + 0x40e0));
              *puVar18 = pGVar9;
              *(uint32_t *)(puVar18 + 1) = 0;
              *(short *)(self + 0x40d0) = *(short *)(self + 0x40d0) + 1;
            }
          } else {
            MarkCollisionOnBlock(self, pGVar9, iVar24, iVar19);
            uVar21 = (uint)(byte)*pGVar9;
            if ((uint)(byte)*pGVar9 != *(uint *)(pPalProps + 4))
              goto LAB_004f0908;
          LAB_004f09d0:
            if (arg1 == 1) {
              TileLevel__GetGridPos(*(TileLevel **)(SuperMeatBoy + 0x40), iVar24, iVar19,
                                    (Vector2 *)&local_48);
              uVar6 = local_44;
              uVar5 = local_48;
              GVar1 = *pGVar9;
              if (*(int *)(self + 0x3e98) == -0x5eef3582) {
                uVar8 = *(ushort *)(self + 0x3e78);
                if (*(ushort *)(self + 0x3e7a) <= uVar8) {
                  uVar8 = *(ushort *)(self + 0x3e7a) + *(short *)(self + 0x3e84);
                  uVar14 = (ulong)(byte)self[0x3e7c];
                  pvVar11 = *(void **)(self + 0x3e88);
                  *(ushort *)(self + 0x3e7a) = uVar8;
                  uVar15 = (ulong)uVar8 * 0x30;
                  pvVar12 = malloc(uVar14 + 0x10 + uVar15);
                  pvVar23 = (void *)0x0;
                  if (pvVar12 != (void *)0x0) {
                    pvVar23 = (void *)((long)pvVar12 + 0x10U +
                                       (uVar14 - ((long)pvVar12 + 0x10U) % uVar14) % uVar14);
                    *(ulong *)((long)pvVar23 + -0x10) = uVar15;
                    *(void **)((long)pvVar23 + -8) = pvVar12;
                    if (pvVar11 != (void *)0x0) {
                      uVar14 = *(ulong *)((long)pvVar11 + -0x10);
                      if (uVar15 <= *(ulong *)((long)pvVar11 + -0x10)) {
                        uVar14 = uVar15;
                      }
                      memcpy(pvVar23, pvVar11, uVar14);
                      free(*(void **)((long)pvVar11 + -8));
                    }
                  }
                  pvVar11 = *(void **)(self + 0x3e90);
                  *(void **)(self + 0x3e88) = pvVar23;
                  if (pvVar11 != (void *)0x0) {
                    uVar16 = *(ushort *)(self + 0x3e7a);
                    uVar14 = (ulong)(byte)self[0x3e7c];
                    uVar15 = (ulong)uVar16 * 2;
                    pvVar23 = malloc(uVar14 + 0x10 + uVar15);
                    pvVar12 = (void *)0x0;
                    if (pvVar23 != (void *)0x0) {
                      pvVar12 = (void *)((long)pvVar23 + 0x10U +
                                         (uVar14 - ((long)pvVar23 + 0x10U) % uVar14) % uVar14);
                      *(void **)((long)pvVar12 + -8) = pvVar23;
                      *(ulong *)((long)pvVar12 + -0x10) = uVar15;
                      uVar14 = *(ulong *)((long)pvVar11 + -0x10);
                      if (uVar15 <= *(ulong *)((long)pvVar11 + -0x10)) {
                        uVar14 = uVar15;
                      }
                      memcpy(pvVar12, pvVar11, uVar14);
                      free(*(void **)((long)pvVar11 + -8));
                      uVar16 = *(ushort *)(self + 0x3e7a);
                    }
                    uVar8 = *(ushort *)(self + 0x3e78);
                    *(void **)(self + 0x3e90) = pvVar12;
                    if (uVar16 <= uVar8)
                      goto LAB_004f0a38;
                    while (true) {
                      uVar15 = (ulong)uVar8;
                      uVar8 = uVar8 + 1;
                      *(uint16_t *)((long)pvVar12 + uVar15 * 2) = 0xffff;
                      if (uVar16 <= uVar8)
                        break;
                      pvVar12 = *(void **)(self + 0x3e90);
                    }
                  }
                  uVar8 = *(ushort *)(self + 0x3e78);
                }
              LAB_004f0a38:
                iVar20 = *(int *)(self + 16000);
              } else {
                uVar15 = (ulong)(byte)self[0x3e7c];
                *(uint32_t *)(self + 16000) = 0;
                pvVar11 = malloc(uVar15 + 0x100);
                puVar18 = (uint64_t *)0x0;
                if (pvVar11 != (void *)0x0) {
                  puVar18 = (uint64_t *)((uVar15 - ((long)pvVar11 + 0x10U) % uVar15) % uVar15 +
                                         (long)pvVar11 + 0x10U);
                  puVar18[-2] = 0xf0;
                  puVar18[-1] = pvVar11;
                }
                *(uint64_t **)(self + 0x3e88) = puVar18;
                uVar15 = 0xf0;
                bVar4 = false;
                iVar20 = 0xf0;
                bVar25 = false;
                if (((ulong)puVar18 & 1) == 0) {
                  puVar22 = puVar18;
                  if (((ulong)puVar18 & 2) == 0)
                    goto LAB_004f0c89;
                LAB_004f10fa:
                  *(uint16_t *)puVar22 = 0;
                  puVar22 = (uint64_t *)((long)puVar22 + 2);
                  uVar21 = iVar20 - 2;
                  uVar15 = (ulong)uVar21;
                } else {
                  puVar22 = (uint64_t *)((long)puVar18 + 1);
                  *(uint8_t *)puVar18 = 0;
                  uVar15 = 0xef;
                  bVar4 = true;
                  iVar20 = 0xef;
                  bVar25 = true;
                  if (((ulong)puVar22 & 2) != 0)
                    goto LAB_004f10fa;
                LAB_004f0c89:
                  uVar21 = (uint)uVar15;
                  bVar25 = bVar4;
                }
                if (((ulong)puVar22 & 4) != 0) {
                  *(uint32_t *)puVar22 = 0;
                  uVar15 = (ulong)(uVar21 - 4);
                  puVar22 = (uint64_t *)((long)puVar22 + 4);
                }
                for (uVar14 = uVar15 >> 3; uVar14 != 0; uVar14 = uVar14 - 1) {
                  *puVar22 = 0;
                  puVar22 = puVar22 + (ulong)bVar26 * -2 + 1;
                }
                if ((uVar15 & 4) != 0) {
                  *(uint32_t *)puVar22 = 0;
                  puVar22 = (uint64_t *)((long)puVar22 + 4);
                }
                if ((uVar15 & 2) != 0) {
                  *(uint16_t *)puVar22 = 0;
                  puVar22 = (uint64_t *)((long)puVar22 + 2);
                }
                if (bVar25) {
                  *(uint8_t *)puVar22 = 0;
                }
                uVar8 = 0;
                iVar20 = *(int *)(self + 16000);
                *(uint16_t *)(self + 0x3e78) = 0;
                *(uint16_t *)(self + 0x3e7a) = 5;
                *(uint32_t *)(self + 0x3e98) = 0xa110ca7e;
                *(uint16_t *)(self + 0x3e84) = 5;
              }
              if ((iVar20 == 1) && (*(short *)(self + 0x3e7a) != 0)) {
                puVar17 = *(ushort **)(self + 0x3e90);
                sVar7 = 1;
                uVar16 = *puVar17;
                while (uVar16 != 0xffff) {
                  puVar17 = puVar17 + 1;
                  if (sVar7 == *(short *)(self + 0x3e7a))
                    goto LAB_004f0a45;
                  sVar7 = sVar7 + 1;
                  uVar16 = *puVar17;
                }
                *puVar17 = uVar8;
                uVar8 = *(ushort *)(self + 0x3e78);
              }
            LAB_004f0a45:
              iVar19 = iVar19 + 1;
              puVar10 = (uint32_t *)((ulong)uVar8 * 0x30 + *(long *)(self + 0x3e88));
              puVar10[4] = uVar5;
              *puVar10 = 0;
              puVar10[1] = 0x3f000000;
              *(GRIDBLOCK **)(puVar10 + 2) = pGVar9;
              puVar10[5] = uVar6;
              puVar10[6] = 0;
              puVar10[7] = 0;
              puVar10[8] = 0;
              puVar10[9] = (uint)(byte)GVar1;
              puVar10[10] = 0;
              *(short *)(self + 0x3e78) = *(short *)(self + 0x3e78) + 1;
              if (uVar3 <= (ushort)iVar19)
                break;
              goto LAB_004f0992;
            }
          }
          iVar19 = iVar19 + 1;
        } while ((ushort)iVar19 < uVar3);
      }
      iVar24 = iVar24 + 1;
    } while ((ushort)iVar24 < uVar2);
  }
  return;
}

/* ======================================================================
 * SMBPalette__ResetObstacles  (Ghidra `ResetObstacles` @ 004f11c0)
 * Signature: uint8_t __thiscall ResetObstacles(SMBPalette * self)
 * Class: SMBPalette
 * Calls: `GSMBChapterData__DetermineGlitchOccurance`, `GSetPieceWayPoints__Reset`, `Reset2DPhysics`, `SMBLevelData__Reset`, `TAudio__RemoveInstanceByPosition`, `TEngine__ResetTimer`, `TileLevelLightMap__RegenerateLights`, `TileLevel__GetGridBlock`, `Vector2__operator_assign`
 * Called by: `FlyWrench__Reset`, `GSuperMeatBoy__LoadDeferredCharactor`, `GSuperMeatBoy__SetCurrentLevel`, `GSuperMeatBoy__ShowCurrentReplay`, `LoadDeferredCharactor`, `Machinarium__Reset`, `MeatBoyCharactor__Reset`, `Ogmo__Reset`, `Runman__Reset`, `SMBEditor__Activate` (+1 more)
 */
/* SMBPalette__ResetObstacles() */

void __thiscall SMBPalette__ResetObstacles(SMBPalette *self)

{
  ushort uVar1;
  ushort uVar2;
  TAudio *pTVar3;
  uint16_t uVar4;
  SMBPalette *pSVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  GRIDBLOCK *pGVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  SMBPalette *pSVar15;
  int iVar16;
  float fVar17;

  *(uint32_t *)(self + 0x1a80) = 0;
  SMBLevelData__Reset((SMBLevelData *)SMBCurrLevelData);
  GSetPieceWayPoints__Reset(SetPieceWayPoints);
  uVar4 = GSMBChapterData__DetermineGlitchOccurance(SMBChapterData);
  lVar7 = *(long *)(self + 0x168);
  *(uint16_t *)(self + 0x68) = uVar4;
  if (lVar7 != 0) {
    pSVar15 = self + 0x168;
    do {
      AnimationManager__RemoveCallback((float *)(lVar7 + 0x40));
      TAudio__RemoveInstanceByPosition(Audio, (FPUVector *)(*(long *)pSVar15 + 0x24));
      *(uint32_t *)(*(long *)pSVar15 + 0x40) = 0;
      *(uint32_t *)(*(long *)pSVar15 + 0x3c) = *(uint32_t *)(pSVar15 + 8);
      if (0 < *(int *)(self + 0x2a50)) {
        lVar7 = *(long *)pSVar15;
        pSVar5 = self + 0x1ab4;
        iVar16 = 0;
        do {
          uVar12 = (uint) * (byte *)(lVar7 + 0x20);
          if (((*(uint *)pSVar5 == uVar12) || (*(uint *)(pSVar5 + -4) == uVar12)) &&
              (((byte)pSVar5[0x20] & 4) != 0)) {
            if (uVar12 == *(uint *)pSVar5) {
              Vector2__operator_assign((Vector2 *)(lVar7 + 0x34),
                                       (Vector2 *)(self + (long)iVar16 * 0x28 + 0x1ac4));
              lVar7 = *(long *)pSVar15;
            }
            *(char *)(lVar7 + 0x20) = (char)*(uint32_t *)(self + (long)iVar16 * 0x28 + 0x1ab0);
            break;
          }
          iVar16 = iVar16 + 1;
          pSVar5 = pSVar5 + 0x28;
        } while (iVar16 != *(int *)(self + 0x2a50));
      }
      pSVar15 = pSVar15 + 0x10;
      lVar7 = *(long *)pSVar15;
    } while (lVar7 != 0);
  }
  if ((*(int *)(SuperMeatBoy + 0x2c) == 1) && (lVar7 = *(long *)(self + 0x168), lVar7 != 0)) {
    pSVar15 = self + 0x178;
    do {
      if (0 < *(int *)(self + 0x2a50)) {
        lVar9 = 0;
        do {
          if (((*(uint *)(self + lVar9 + 0x1ab4) == (uint) * (byte *)(lVar7 + 0x20)) ||
               (*(uint *)(self + lVar9 + 0x1ab0) == (uint) * (byte *)(lVar7 + 0x20))) &&
              (*(int *)(self + lVar9 + 0x1ab8) != -1)) {
            *(char *)(lVar7 + 0x20) = (char)*(int *)(self + lVar9 + 0x1ab8);
            break;
          }
          lVar9 = lVar9 + 0x28;
        } while (lVar9 != ((ulong)(*(int *)(self + 0x2a50) - 1) * 5 + 5) * 8);
      }
      lVar7 = *(long *)pSVar15;
      pSVar15 = pSVar15 + 0x10;
    } while (lVar7 != 0);
  }
  uVar10 = 0;
  if (*(short *)(self + 0x3e78) != 0) {
    do {
      uVar6 = uVar10 & 0xffff;
      uVar12 = (int)uVar10 + 1;
      uVar10 = (ulong)uVar12;
      lVar7 = uVar6 * 0x30;
      *(uint32_t *)(*(long *)(self + 0x3e88) + lVar7) = 0;
      **(uint8_t **)(lVar7 + *(long *)(self + 0x3e88) + 8) =
          (char)*(uint32_t *)(lVar7 + *(long *)(self + 0x3e88) + 0x24);
      *(uint32_t *)(*(long *)(self + 0x3e88) + 4 + lVar7) = 0x3f000000;
      pTVar3 = Audio;
      *(uint32_t *)(*(long *)(self + 0x3e88) + 0x20 + lVar7) = 0;
      TAudio__RemoveInstanceByPosition(pTVar3,
                                       (FPUVector *)(lVar7 + *(long *)(self + 0x3e88) + 0x10));
    } while ((int)uVar12 < (int)(uint) * (ushort *)(self + 0x3e78));
  }
  *(uint16_t *)(self + 0x3f68) = 0;
  if ((*(int *)(self + 0x3f70) == 1) && (uVar1 = *(ushort *)(self + 0x3f6a), uVar1 != 0)) {
    lVar7 = 0;
    do {
      *(uint16_t *)(*(long *)(self + 0x3f80) + lVar7) = 0xffff;
      lVar7 = lVar7 + 2;
    } while (lVar7 != (ulong)(uVar1 - 1 & 0xffff) * 2 + 2);
  }
  if (*(short *)(self + 0x3ec8) != 0) {
    uVar10 = 0;
    do {
      lVar7 = (uVar10 & 0xffff) * 0xb68;
      *(uint32_t *)(*(long *)(self + 0x3ed8) + 0x14 + lVar7) = 0;
      fVar17 = DAT_005c07ac /* R:0.7853981852531433f */;
      plVar8 = (long *)(lVar7 + *(long *)(self + 0x3ed8));
      if (*(uint *)(plVar8 + 3) < 6) {
        lVar9 = *plVar8;
        switch ((int)plVar8[3]) {
        case 0:
          *(char *)(lVar9 + 0x20) = (char)*(uint32_t *)(self + 0x42cc);
          plVar8 = (long *)(lVar7 + *(long *)(self + 0x3ed8));
          break;
        case 1:
          *(char *)(lVar9 + 0x20) = (char)*(uint32_t *)(self + 0x42ec);
          plVar8 = (long *)(lVar7 + *(long *)(self + 0x3ed8));
          break;
        case 2:
          *(char *)(lVar9 + 0x20) = (char)*(uint32_t *)(self + 0x430c);
          *(float *)((long *)(lVar7 + *(long *)(self + 0x3ed8)) + 2) =
              fVar17 + *(float *)(*(long *)(lVar7 + *(long *)(self + 0x3ed8)) + 0x3c);
          plVar8 = (long *)(lVar7 + *(long *)(self + 0x3ed8));
          break;
        case 3:
          *(char *)(lVar9 + 0x20) = (char)*(uint32_t *)(self + 0x432c);
          plVar8 = (long *)(lVar7 + *(long *)(self + 0x3ed8));
          break;
        case 4:
          *(char *)(lVar9 + 0x20) = (char)*(uint32_t *)(self + 0x4364);
          plVar8 = (long *)(lVar7 + *(long *)(self + 0x3ed8));
          break;
        case 5:
          *(char *)(lVar9 + 0x20) = (char)*(uint32_t *)(self + 0x4348);
          plVar8 = (long *)(lVar7 + *(long *)(self + 0x3ed8));
        }
      }
      fVar17 = *(float *)(*plVar8 + 0x4c);
      if (fVar17 == 0.0) {
        fVar17 = 1.0;
      }
      *(float *)(plVar8 + 1) = fVar17;
      pTVar3 = Audio;
      *(float *)(lVar7 + *(long *)(self + 0x3ed8) + 0xc) =
          (float)*(int *)(*(long *)(lVar7 + *(long *)(self + 0x3ed8)) + 0x54) *
          DAT_005c01d0 /* R:0.0010000000474974513f */;
      TAudio__RemoveInstanceByPosition(pTVar3,
                                       (FPUVector *)(lVar7 + *(long *)(self + 0x3ed8) + 0x128));
      *(uint32_t *)(*(long *)(self + 0x3ed8) + 0x120 + lVar7) = 2;
      *(uint32_t *)(*(long *)(self + 0x3ed8) + 0x124 + lVar7) = 0;
      lVar9 = lVar7 + *(long *)(self + 0x3ed8);
      if (*(long **)(lVar9 + 0x140) != (long *)0x0) {
        (**(code **)(**(long **)(lVar9 + 0x140) + 0x20))();
        lVar9 = lVar7 + *(long *)(self + 0x3ed8);
      }
      TAudio__RemoveInstanceByPosition(Audio, (FPUVector *)(lVar9 + 0x248));
      *(uint32_t *)(*(long *)(self + 0x3ed8) + 0x240 + lVar7) = 2;
      *(uint32_t *)(*(long *)(self + 0x3ed8) + 0x244 + lVar7) = 0;
      lVar9 = lVar7 + *(long *)(self + 0x3ed8);
      if (*(long **)(lVar9 + 0x260) != (long *)0x0) {
        (**(code **)(**(long **)(lVar9 + 0x260) + 0x20))();
        lVar9 = lVar7 + *(long *)(self + 0x3ed8);
      }
      TAudio__RemoveInstanceByPosition(Audio, (FPUVector *)(lVar9 + 0x368));
      *(uint32_t *)(*(long *)(self + 0x3ed8) + 0x360 + lVar7) = 2;
      *(uint32_t *)(*(long *)(self + 0x3ed8) + 0x364 + lVar7) = 0;
      lVar9 = lVar7 + *(long *)(self + 0x3ed8);
      if (*(long **)(lVar9 + 0x380) != (long *)0x0) {
        (**(code **)(**(long **)(lVar9 + 0x380) + 0x20))();
        lVar9 = lVar7 + *(long *)(self + 0x3ed8);
      }
      TAudio__RemoveInstanceByPosition(Audio, (FPUVector *)(lVar9 + 0x488));
      *(uint32_t *)(*(long *)(self + 0x3ed8) + 0x480 + lVar7) = 2;
      *(uint32_t *)(*(long *)(self + 0x3ed8) + 0x484 + lVar7) = 0;
      lVar9 = lVar7 + *(long *)(self + 0x3ed8);
      if (*(long **)(lVar9 + 0x4a0) != (long *)0x0) {
        (**(code **)(**(long **)(lVar9 + 0x4a0) + 0x20))();
        lVar9 = lVar7 + *(long *)(self + 0x3ed8);
      }
      TAudio__RemoveInstanceByPosition(Audio, (FPUVector *)(lVar9 + 0x5a8));
      *(uint32_t *)(*(long *)(self + 0x3ed8) + 0x5a0 + lVar7) = 2;
      *(uint32_t *)(*(long *)(self + 0x3ed8) + 0x5a4 + lVar7) = 0;
      lVar9 = lVar7 + *(long *)(self + 0x3ed8);
      if (*(long **)(lVar9 + 0x5c0) != (long *)0x0) {
        (**(code **)(**(long **)(lVar9 + 0x5c0) + 0x20))();
        lVar9 = lVar7 + *(long *)(self + 0x3ed8);
      }
      TAudio__RemoveInstanceByPosition(Audio, (FPUVector *)(lVar9 + 0x6c8));
      *(uint32_t *)(*(long *)(self + 0x3ed8) + 0x6c0 + lVar7) = 2;
      *(uint32_t *)(*(long *)(self + 0x3ed8) + 0x6c4 + lVar7) = 0;
      lVar9 = lVar7 + *(long *)(self + 0x3ed8);
      if (*(long **)(lVar9 + 0x6e0) != (long *)0x0) {
        (**(code **)(**(long **)(lVar9 + 0x6e0) + 0x20))();
        lVar9 = lVar7 + *(long *)(self + 0x3ed8);
      }
      TAudio__RemoveInstanceByPosition(Audio, (FPUVector *)(lVar9 + 0x7e8));
      *(uint32_t *)(*(long *)(self + 0x3ed8) + 0x7e0 + lVar7) = 2;
      *(uint32_t *)(*(long *)(self + 0x3ed8) + 0x7e4 + lVar7) = 0;
      lVar9 = lVar7 + *(long *)(self + 0x3ed8);
      if (*(long **)(lVar9 + 0x800) != (long *)0x0) {
        (**(code **)(**(long **)(lVar9 + 0x800) + 0x20))();
        lVar9 = lVar7 + *(long *)(self + 0x3ed8);
      }
      TAudio__RemoveInstanceByPosition(Audio, (FPUVector *)(lVar9 + 0x908));
      *(uint32_t *)(*(long *)(self + 0x3ed8) + 0x900 + lVar7) = 2;
      *(uint32_t *)(*(long *)(self + 0x3ed8) + 0x904 + lVar7) = 0;
      lVar9 = lVar7 + *(long *)(self + 0x3ed8);
      if (*(long **)(lVar9 + 0x920) != (long *)0x0) {
        (**(code **)(**(long **)(lVar9 + 0x920) + 0x20))();
        lVar9 = lVar7 + *(long *)(self + 0x3ed8);
      }
      TAudio__RemoveInstanceByPosition(Audio, (FPUVector *)(lVar9 + 0xa28));
      *(uint32_t *)(*(long *)(self + 0x3ed8) + 0xa20 + lVar7) = 2;
      *(uint32_t *)(*(long *)(self + 0x3ed8) + 0xa24 + lVar7) = 0;
      lVar9 = lVar7 + *(long *)(self + 0x3ed8);
      if (*(long **)(lVar9 + 0xa40) != (long *)0x0) {
        (**(code **)(**(long **)(lVar9 + 0xa40) + 0x20))();
        lVar9 = lVar7 + *(long *)(self + 0x3ed8);
      }
      TAudio__RemoveInstanceByPosition(Audio, (FPUVector *)(lVar9 + 0xb48));
      *(uint32_t *)(*(long *)(self + 0x3ed8) + 0xb40 + lVar7) = 2;
      *(uint32_t *)(*(long *)(self + 0x3ed8) + 0xb44 + lVar7) = 0;
      plVar8 = *(long **)(*(long *)(self + 0x3ed8) + 0xb60 + lVar7);
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x20))();
      }
      uVar12 = (int)uVar10 + 1;
      uVar10 = (ulong)uVar12;
    } while ((int)uVar12 < (int)(uint) * (ushort *)(self + 0x3ec8));
  }
  if (*(short *)(self + 0x4008) != 0) {
    uVar12 = 0;
    do {
      while (true) {
        lVar7 = (ulong)(uVar12 & 0xffff) * 0x28;
        *(uint32_t *)(*(long *)(self + 0x4018) + 0xc + lVar7) = 0;
        *(uint32_t *)(*(long *)(self + 0x4018) + 8 + lVar7) = 0;
        plVar8 = (long *)(lVar7 + *(long *)(self + 0x4018));
        if ((int)plVar8[2] != 0)
          break;
        *(char *)(*plVar8 + 0x20) = (char)*(uint32_t *)(self + 0x4390);
      LAB_004f17c8:
        uVar12 = uVar12 + 1;
        if ((int)(uint) * (ushort *)(self + 0x4008) <= (int)uVar12)
          goto LAB_004f182c;
      }
      if ((int)plVar8[2] != 1)
        goto LAB_004f17c8;
      uVar12 = uVar12 + 1;
      *(char *)(*plVar8 + 0x20) = (char)*(uint32_t *)(self + 0x43a0);
    } while ((int)uVar12 < (int)(uint) * (ushort *)(self + 0x4008));
  }
LAB_004f182c:
  if (*(long *)(self + 0x2ad0) != 0) {
    *(char *)(*(long *)(self + 0x2ad0) + 0x20) = (char)*(uint32_t *)(self + 0x4270);
    Reset2DPhysics((Physics2D *)(self + 0x2b38));
    Vector2__operator_assign((Vector2 *)(self + 0x2b80), (Vector2 *)(self + 0x2bd8));
    Vector2__operator_assign((Vector2 *)(self + 0x2b88), (Vector2 *)(self + 0x2bd8));
    *(uint32_t *)(*(long *)(self + 0x2ad0) + 0x24) = *(uint32_t *)(self + 0x2bd8);
    *(uint32_t *)(*(long *)(self + 0x2ad0) + 0x28) = *(uint32_t *)(self + 0x2bdc);
    *(uint32_t *)(self + 0x2b78) = 0x3f000000;
  }
  if (*(long *)(self + 0x2be0) != 0) {
    *(char *)(*(long *)(self + 0x2be0) + 0x20) = (char)*(uint32_t *)(self + 0x4270);
    Reset2DPhysics((Physics2D *)(self + 0x2c48));
    Vector2__operator_assign((Vector2 *)(self + 0x2c90), (Vector2 *)(self + 0x2ce8));
    Vector2__operator_assign((Vector2 *)(self + 0x2c98), (Vector2 *)(self + 0x2ce8));
    *(uint32_t *)(*(long *)(self + 0x2be0) + 0x24) = *(uint32_t *)(self + 0x2ce8);
    *(uint32_t *)(*(long *)(self + 0x2be0) + 0x28) = *(uint32_t *)(self + 0x2cec);
    *(uint32_t *)(self + 0x2c88) = 0x3f000000;
  }
  if (*(long *)(self + 0x2cf0) != 0) {
    *(char *)(*(long *)(self + 0x2cf0) + 0x20) = (char)*(uint32_t *)(self + 0x4270);
    Reset2DPhysics((Physics2D *)(self + 0x2d58));
    Vector2__operator_assign((Vector2 *)(self + 0x2da0), (Vector2 *)(self + 0x2df8));
    Vector2__operator_assign((Vector2 *)(self + 0x2da8), (Vector2 *)(self + 0x2df8));
    *(uint32_t *)(*(long *)(self + 0x2cf0) + 0x24) = *(uint32_t *)(self + 0x2df8);
    *(uint32_t *)(*(long *)(self + 0x2cf0) + 0x28) = *(uint32_t *)(self + 0x2dfc);
    *(uint32_t *)(self + 0x2d98) = 0x3f000000;
  }
  if (*(long *)(self + 0x2e00) != 0) {
    *(char *)(*(long *)(self + 0x2e00) + 0x20) = (char)*(uint32_t *)(self + 0x4270);
    Reset2DPhysics((Physics2D *)(self + 0x2e68));
    Vector2__operator_assign((Vector2 *)(self + 0x2eb0), (Vector2 *)(self + 0x2f08));
    Vector2__operator_assign((Vector2 *)(self + 0x2eb8), (Vector2 *)(self + 0x2f08));
    *(uint32_t *)(*(long *)(self + 0x2e00) + 0x24) = *(uint32_t *)(self + 0x2f08);
    *(uint32_t *)(*(long *)(self + 0x2e00) + 0x28) = *(uint32_t *)(self + 0x2f0c);
    *(uint32_t *)(self + 0x2ea8) = 0x3f000000;
  }
  if (*(long *)(self + 0x2f10) != 0) {
    *(char *)(*(long *)(self + 0x2f10) + 0x20) = (char)*(uint32_t *)(self + 0x4270);
    Reset2DPhysics((Physics2D *)(self + 0x2f78));
    Vector2__operator_assign((Vector2 *)(self + 0x2fc0), (Vector2 *)(self + 0x3018));
    Vector2__operator_assign((Vector2 *)(self + 0x2fc8), (Vector2 *)(self + 0x3018));
    *(uint32_t *)(*(long *)(self + 0x2f10) + 0x24) = *(uint32_t *)(self + 0x3018);
    *(uint32_t *)(*(long *)(self + 0x2f10) + 0x28) = *(uint32_t *)(self + 0x301c);
    *(uint32_t *)(self + 0x2fb8) = 0x3f000000;
  }
  if (*(long *)(self + 0x3020) != 0) {
    *(char *)(*(long *)(self + 0x3020) + 0x20) = (char)*(uint32_t *)(self + 0x4270);
    Reset2DPhysics((Physics2D *)(self + 0x3088));
    Vector2__operator_assign((Vector2 *)(self + 0x30d0), (Vector2 *)(self + 0x3128));
    Vector2__operator_assign((Vector2 *)(self + 0x30d8), (Vector2 *)(self + 0x3128));
    *(uint32_t *)(*(long *)(self + 0x3020) + 0x24) = *(uint32_t *)(self + 0x3128);
    *(uint32_t *)(*(long *)(self + 0x3020) + 0x28) = *(uint32_t *)(self + 0x312c);
    *(uint32_t *)(self + 0x30c8) = 0x3f000000;
  }
  if (*(short *)(self + 0x4170) != 0) {
    uVar10 = 0;
    do {
      uVar6 = uVar10 & 0xffff;
      uVar12 = (int)uVar10 + 1;
      uVar10 = (ulong)uVar12;
      lVar7 = uVar6 * 0x18;
      *(uint32_t *)(*(long *)(self + 0x4180) + 0x10 + lVar7) = 0;
      *(uint32_t *)(*(long *)(self + 0x4180) + 0x14 + lVar7) = 0;
      *(char *)(*(long *)(*(long *)(self + 0x4180) + uVar6 * 0x18) + 0x20) =
          (char)*(uint32_t *)(self + 0x43ac);
      *(char *)(*(long *)(*(long *)(self + 0x4180) + 8 + lVar7) + 0x20) =
          (char)*(uint32_t *)(self + 0x43ac);
    } while ((int)uVar12 < (int)(uint) * (ushort *)(self + 0x4170));
  }
  if (*(long *)(self + 0x90) != 0) {
    *(uint32_t *)(*(long *)(self + 0x90) + 0x58) = 0;
  }
  if (*(long *)(self + 0x80) != 0) {
    *(uint32_t *)(*(long *)(self + 0x80) + 0x58) = 0;
  }
  *(uint16_t *)(self + 0x3158) = 0;
  if ((*(int *)(self + 0x3160) == 1) && (uVar1 = *(ushort *)(self + 0x315a), uVar1 != 0)) {
    lVar7 = 0;
    do {
      *(uint16_t *)(*(long *)(self + 0x3170) + lVar7) = 0xffff;
      lVar7 = lVar7 + 2;
    } while (lVar7 != (ulong)(uVar1 - 1 & 0xffff) * 2 + 2);
  }
  *(uint16_t *)(self + 0x31a8) = 0;
  if ((*(int *)(self + 0x31b0) == 1) && (uVar1 = *(ushort *)(self + 0x31aa), uVar1 != 0)) {
    lVar7 = 0;
    do {
      *(uint16_t *)(*(long *)(self + 0x31c0) + lVar7) = 0xffff;
      lVar7 = lVar7 + 2;
    } while (lVar7 != (ulong)(uVar1 - 1 & 0xffff) * 2 + 2);
  }
  uVar10 = 0;
  if (*(short *)(self + 0x2aa8) != 0) {
    do {
      uVar6 = uVar10 & 0xffff;
      uVar12 = (int)uVar10 + 1;
      uVar10 = (ulong)uVar12;
      lVar7 = uVar6 * 0x20;
      *(uint32_t *)(lVar7 + *(long *)(self + 0x2ab8) + 8) =
          *(uint32_t *)(lVar7 + *(long *)(self + 0x2ab8) + 0x14);
      *(uint32_t *)(*(long *)(self + 0x2ab8) + 0x18 + lVar7) = 0;
      *(char *)(*(long *)(*(long *)(self + 0x2ab8) + lVar7) + 0x20) =
          (char)*(uint32_t *)(self + 0x4290);
    } while ((int)uVar12 < (int)(uint) * (ushort *)(self + 0x2aa8));
  }
  iVar16 = 0;
  uVar1 = *(ushort *)(*(long *)(SuperMeatBoy + 0x40) + 0x38);
  uVar2 = *(ushort *)(*(long *)(SuperMeatBoy + 0x40) + 0x3a);
  lVar7 = SuperMeatBoy;
  if (uVar1 != 0) {
    do {
      iVar14 = 0;
      if (uVar2 != 0) {
        do {
          while (pGVar11 = (GRIDBLOCK *)TileLevel__GetGridBlock(*(TileLevel **)(lVar7 + 0x40),
                                                                iVar16, iVar14, 0),
                 *pGVar11 == (GRIDBLOCK)0x0) {
            iVar14 = iVar14 + 1;
            *(ushort *)(pGVar11 + 2) = *(ushort *)(pGVar11 + 2) & 0x3f;
            lVar7 = SuperMeatBoy;
            if (uVar2 <= (ushort)iVar14)
              goto LAB_004f1c6a;
          }
          iVar13 = iVar14 + 1;
          MarkCollisionOnBlock(self, pGVar11, iVar16, iVar14);
          lVar7 = SuperMeatBoy;
          iVar14 = iVar13;
        } while ((ushort)iVar13 < uVar2);
      }
    LAB_004f1c6a:
      iVar16 = iVar16 + 1;
    } while ((ushort)iVar16 < uVar1);
  }
  TileLevelLightMap__RegenerateLights(*(TileLevelLightMap **)(lVar7 + 0x390));
  if (*(short *)(self + 0x3e78) != 0) {
    uVar10 = 0;
    do {
      uVar6 = uVar10 & 0xffff;
      uVar12 = (int)uVar10 + 1;
      uVar10 = (ulong)uVar12;
      lVar7 = uVar6 * 0x30 + *(long *)(self + 0x3e88);
      *(uint *)(lVar7 + 0x28) = (uint)(*(ushort *)(*(long *)(lVar7 + 8) + 2) >> 6);
    } while ((int)uVar12 < (int)(uint) * (ushort *)(self + 0x3e78));
  }
  TEngine__ResetTimer();
  return;
}

/* ======================================================================
 * SMBPalette__BreakyCollide  (Ghidra `BreakyCollide` @ 004f1eb0)
 * Signature: uint8_t __thiscall BreakyCollide(SMBPalette * self, GRIDBLOCK * arg1)
 * Class: SMBPalette
 * Calls: `TileLevel__GetGridBlock`, `TileLevel__GetGridCoordsFromBlock`
 * Called by: `MeatBoyCharactor__Update`
 */
/* SMBPalette__BreakyCollide(GRIDBLOCK&) */

void __thiscall SMBPalette__BreakyCollide(SMBPalette *self, GRIDBLOCK *arg1)

{
  int iVar1;
  GRIDBLOCK *pGVar2;
  byte *pbVar3;
  int *piVar4;
  long lVar5;
  long *plVar6;
  byte *pbVar7;
  long lVar8;
  uint64_t *puVar9;
  short sVar10;
  ushort uVar11;
  int *piVar12;
  int local_10;
  int local_c;

  if (((((byte)arg1[1] & 0xf) == *(uint *)(self + 0x4278)) && (((byte)arg1[2] & 0xc) == 0)) &&
      ((*(uint *)(self + 0x1a7c) & 1) != 0)) {
    iVar1 = *(int *)(self + 0x1a70);
    if ((iVar1 == -1) || (iVar1 == *(int *)(self + 0x1a74))) {
      if (*(ushort *)(self + 0x3e78) != 0) {
        piVar12 = *(int **)(self + 0x3e88);
        if (arg1 == *(GRIDBLOCK **)(piVar12 + 2)) {
          lVar8 = 0;
        } else {
          lVar5 = 0x30;
          piVar4 = piVar12;
          do {
            lVar8 = lVar5;
            piVar12 = piVar4 + 0xc;
            if (lVar8 == ((ulong)(*(ushort *)(self + 0x3e78) - 1 & 0xffff) * 3 + 3) * 0x10) {
              return;
            }
            plVar6 = (long *)(piVar4 + 0xe);
            lVar5 = lVar8 + 0x30;
            piVar4 = piVar12;
          } while (arg1 != (GRIDBLOCK *)*plVar6);
        }
        iVar1 = piVar12[9];
        if (((iVar1 == *(int *)(pPalProps + 4)) || (iVar1 == *(int *)(pPalProps + 0x50))) &&
            (*piVar12 == 0)) {
          if (iVar1 == *(int *)(pPalProps + 0x50)) {
            if ((*(uint *)(self + 0x1a7c) & 0x80) != 0) {
              *piVar12 = 1;
              TileLevel__GetGridCoordsFromBlock(
                  *(TileLevel **)(SuperMeatBoy + 0x40),
                  *(GRIDBLOCK **)(*(long *)(self + 0x3e88) + 8 + lVar8), &local_10, &local_c);
              pbVar7 = (byte *)TileLevel__GetGridBlock(*(TileLevel **)(SuperMeatBoy + 0x40),
                                                       local_10, local_c + 1, 0);
              if (((uint)*pbVar7 == *(uint *)(pPalProps + 0x50)) &&
                  (*(ushort *)(self + 0x3e78) != 0)) {
                lVar8 = *(long *)(self + 0x3e88);
                if (pbVar7 == *(byte **)(lVar8 + 8)) {
                  uVar11 = 0;
                } else {
                  uVar11 = 0;
                  puVar9 = (uint64_t *)(lVar8 + 0x38);
                  do {
                    uVar11 = uVar11 + 1;
                    if (uVar11 == *(ushort *)(self + 0x3e78))
                      goto LAB_004f2040;
                    pbVar3 = (byte *)*puVar9;
                    puVar9 = puVar9 + 6;
                  } while (pbVar7 != pbVar3);
                }
                piVar12 = (int *)(lVar8 + (ulong)uVar11 * 0x30);
                if (*piVar12 == 0) {
                  *piVar12 = 1;
                }
              }
            LAB_004f2040:
              pbVar7 = (byte *)TileLevel__GetGridBlock(*(TileLevel **)(SuperMeatBoy + 0x40),
                                                       local_10, local_c + -1, 0);
              if (((uint)*pbVar7 == *(uint *)(pPalProps + 0x50)) &&
                  (*(ushort *)(self + 0x3e78) != 0)) {
                lVar8 = *(long *)(self + 0x3e88);
                if (pbVar7 == *(byte **)(lVar8 + 8)) {
                  uVar11 = 0;
                } else {
                  uVar11 = 0;
                  puVar9 = (uint64_t *)(lVar8 + 0x38);
                  do {
                    uVar11 = uVar11 + 1;
                    if (uVar11 == *(ushort *)(self + 0x3e78))
                      goto LAB_004f2070;
                    pbVar3 = (byte *)*puVar9;
                    puVar9 = puVar9 + 6;
                  } while (pbVar7 != pbVar3);
                }
                piVar12 = (int *)(lVar8 + (ulong)uVar11 * 0x30);
                if (*piVar12 == 0) {
                  *piVar12 = 1;
                }
              }
            LAB_004f2070:
              pbVar7 = (byte *)TileLevel__GetGridBlock(*(TileLevel **)(SuperMeatBoy + 0x40),
                                                       local_10 + -1, local_c, 0);
              if (((uint)*pbVar7 == *(uint *)(pPalProps + 0x50)) &&
                  (*(ushort *)(self + 0x3e78) != 0)) {
                lVar8 = *(long *)(self + 0x3e88);
                if (pbVar7 == *(byte **)(lVar8 + 8)) {
                  uVar11 = 0;
                } else {
                  uVar11 = 0;
                  puVar9 = (uint64_t *)(lVar8 + 0x38);
                  do {
                    uVar11 = uVar11 + 1;
                    if (uVar11 == *(ushort *)(self + 0x3e78))
                      goto LAB_004f20a0;
                    pbVar3 = (byte *)*puVar9;
                    puVar9 = puVar9 + 6;
                  } while (pbVar7 != pbVar3);
                }
                piVar12 = (int *)(lVar8 + (ulong)uVar11 * 0x30);
                if (*piVar12 == 0) {
                  *piVar12 = 1;
                }
              }
            LAB_004f20a0:
              pbVar7 = (byte *)TileLevel__GetGridBlock(*(TileLevel **)(SuperMeatBoy + 0x40),
                                                       local_10 + 1, local_c, 0);
              if (((uint)*pbVar7 == *(uint *)(pPalProps + 0x50)) &&
                  (*(ushort *)(self + 0x3e78) != 0)) {
                lVar8 = *(long *)(self + 0x3e88);
                if (pbVar7 == *(byte **)(lVar8 + 8)) {
                  uVar11 = 0;
                } else {
                  uVar11 = 0;
                  puVar9 = (uint64_t *)(lVar8 + 0x38);
                  do {
                    uVar11 = uVar11 + 1;
                    if (uVar11 == *(ushort *)(self + 0x3e78)) {
                      return;
                    }
                    pbVar3 = (byte *)*puVar9;
                    puVar9 = puVar9 + 6;
                  } while (pbVar7 != pbVar3);
                }
                piVar12 = (int *)(lVar8 + (ulong)uVar11 * 0x30);
                if (*piVar12 == 0) {
                  *piVar12 = 1;
                }
              }
            }
          } else {
            *piVar12 = 1;
          }
        }
      }
    } else if (*(short *)(self + (long)iVar1 * 0x50 + 0x31f8) != 0) {
      plVar6 = *(long **)(self + (long)iVar1 * 0x50 + 0x3208);
      sVar10 = 0;
      pGVar2 = (GRIDBLOCK *)*plVar6;
      while (arg1 != pGVar2) {
        plVar6 = plVar6 + 2;
        sVar10 = sVar10 + 1;
        if (sVar10 == *(short *)(self + (long)iVar1 * 0x50 + 0x31f8)) {
          return;
        }
        pGVar2 = (GRIDBLOCK *)*plVar6;
      }
      if ((int)plVar6[1] == 0) {
        *(uint32_t *)(plVar6 + 1) = 1;
      }
    }
  }
  return;
}

/* ======================================================================
 * SMBPalette__MarkBlockAsNotCollideable  (Ghidra `MarkBlockAsNotCollideable` @ 004f2260)
 * Signature: uint8_t __thiscall MarkBlockAsNotCollideable(SMBPalette * self, GRIDBLOCK * arg1)
 * Class: SMBPalette
 * Calls: `TileLevel__GetGridBlock`, `TileLevel__GetGridCoordsFromBlock`
 * Called by: (none)
 */
/* SMBPalette__MarkBlockAsNotCollideable(GRIDBLOCK*) */

void __thiscall SMBPalette__MarkBlockAsNotCollideable(SMBPalette *self, GRIDBLOCK *arg1)

{
  int iVar1;
  GRIDBLOCK *pGVar2;
  int iVar3;
  int local_20;
  int local_1c;

  TileLevel__GetGridCoordsFromBlock(*(TileLevel **)(SuperMeatBoy + 0x40), arg1, &local_20,
                                    &local_1c);
  iVar1 = local_1c;
  *(ushort *)(arg1 + 2) = *(ushort *)(arg1 + 2) & 0x3f;
  *arg1 = (GRIDBLOCK)0x0;
  iVar3 = local_20 + 1;
  pGVar2 = (GRIDBLOCK *)TileLevel__GetGridBlock(*(TileLevel **)(SuperMeatBoy + 0x40), iVar3,
                                                local_1c, 0);
  if (*pGVar2 == (GRIDBLOCK)0x0) {
    *(ushort *)(pGVar2 + 2) = *(ushort *)(pGVar2 + 2) & 0x3f;
  } else {
    MarkCollisionOnBlock(self, pGVar2, iVar3, iVar1);
  }
  iVar1 = local_20;
  iVar3 = local_1c + 1;
  pGVar2 = (GRIDBLOCK *)TileLevel__GetGridBlock(*(TileLevel **)(SuperMeatBoy + 0x40), local_20,
                                                iVar3, 0);
  if (*pGVar2 == (GRIDBLOCK)0x0) {
    *(ushort *)(pGVar2 + 2) = *(ushort *)(pGVar2 + 2) & 0x3f;
  } else {
    MarkCollisionOnBlock(self, pGVar2, iVar1, iVar3);
  }
  iVar1 = local_1c;
  iVar3 = local_20 + -1;
  pGVar2 = (GRIDBLOCK *)TileLevel__GetGridBlock(*(TileLevel **)(SuperMeatBoy + 0x40), iVar3,
                                                local_1c, 0);
  if (*pGVar2 == (GRIDBLOCK)0x0) {
    *(ushort *)(pGVar2 + 2) = *(ushort *)(pGVar2 + 2) & 0x3f;
  } else {
    MarkCollisionOnBlock(self, pGVar2, iVar3, iVar1);
  }
  pGVar2 = (GRIDBLOCK *)TileLevel__GetGridBlock(*(TileLevel **)(SuperMeatBoy + 0x40), local_20,
                                                local_1c + -1, 0);
  if (*pGVar2 != (GRIDBLOCK)0x0) {
    MarkCollisionOnBlock(self, pGVar2, local_20, local_1c + -1);
    return;
  }
  *(ushort *)(pGVar2 + 2) = *(ushort *)(pGVar2 + 2) & 0x3f;
  return;
}

/* ======================================================================
 * SMBPalette__MarkCollisionOnBlock__004f23d0  (Ghidra `MarkCollisionOnBlock` @ 004f23d0)
 * Signature: uint8_t __thiscall MarkCollisionOnBlock(SMBPalette * self, GRIDBLOCK * arg1, int arg2, int arg3)
 * Class: SMBPalette
 * Calls: (none)
 * Called by: `SMBPalette__MarkCollisionOnBlock`
 */
/* SMBPalette__MarkCollisionOnBlock__004f23d0(GRIDBLOCK&, int, int) */

void __thiscall SMBPalette__MarkCollisionOnBlock__004f23d0(SMBPalette *self, GRIDBLOCK *arg1,
                                                           int arg2, int arg3)

{
  if (*arg1 != (GRIDBLOCK)0x0) {
    MarkCollisionOnBlock(self, arg1, arg2, arg3);
    return;
  }
  *(ushort *)(arg1 + 2) = *(ushort *)(arg1 + 2) & 0x3f;
  return;
}

/* ======================================================================
 * SMBPalette__SetReplayIndex  (Ghidra `SetReplayIndex` @ 004f2450)
 * Signature: uint8_t __thiscall SetReplayIndex(SMBPalette * self, int arg1)
 * Class: SMBPalette
 * Calls: (none)
 * Called by: `MeatBoyCharactor__Update`
 */
/* SMBPalette__SetReplayIndex(int) */

void __thiscall SMBPalette__SetReplayIndex(SMBPalette *self, int arg1)

{
  *(int *)(self + 0x1a70) = arg1;
  return;
}

/* ======================================================================
 * SMBPalette__UnSetReplayIndex  (Ghidra `UnSetReplayIndex` @ 004f2460)
 * Signature: uint8_t __thiscall UnSetReplayIndex(SMBPalette * self)
 * Class: SMBPalette
 * Calls: (none)
 * Called by: `MeatBoyCharactor__Update`
 */
/* SMBPalette__UnSetReplayIndex() */

void __thiscall SMBPalette__UnSetReplayIndex(SMBPalette *self)

{
  *(uint32_t *)(self + 0x1a70) = 0xffffffff;
  return;
}

/* ======================================================================
 * SMBPalette__ReplayUpdate  (Ghidra `ReplayUpdate` @ 004f2470)
 * Signature: uint8_t __thiscall ReplayUpdate(SMBPalette * self)
 * Class: SMBPalette
 * Calls: (none)
 * Called by: `MeatBoyCharactor__Update`
 */
/* SMBPalette__ReplayUpdate() */

void __thiscall SMBPalette__ReplayUpdate(SMBPalette *self)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  long lVar4;
  long lVar5;
  ushort uVar6;
  ushort uVar7;

  fVar3 = fOneFrameTimeStep;
  iVar2 = *(int *)(self + 0x1a70);
  if ((iVar2 != -1) && (iVar2 != *(int *)(self + 0x1a74))) {
    lVar4 = (long)iVar2 * 0x50;
    uVar7 = *(ushort *)(self + lVar4 + 0x31f8);
    if (uVar7 != 0) {
      uVar6 = 0;
      do {
        while (true) {
          lVar5 = (ulong)uVar6 * 0x10 + *(long *)(self + lVar4 + 0x3208);
          if (*(int *)(lVar5 + 8) != 1)
            break;
          *(float *)(lVar5 + 0xc) = *(float *)(lVar5 + 0xc) - fVar3;
          lVar5 = (ulong)uVar6 * 0x10 + *(long *)(self + lVar4 + 0x3208);
          pfVar1 = (float *)(lVar5 + 0xc);
          if (*pfVar1 <= 0.0 && *pfVar1 != 0.0) {
            *(uint32_t *)(lVar5 + 8) = 4;
          }
          uVar7 = *(ushort *)(self + lVar4 + 0x31f8);
          uVar6 = uVar6 + 1;
          if (uVar7 <= uVar6) {
            return;
          }
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar7);
    }
  }
  return;
}

/* ======================================================================
 * SMBPalette__SetToReplayMode  (Ghidra `SetToReplayMode` @ 004f2510)
 * Signature: uint8_t __thiscall SetToReplayMode(SMBPalette * self, int arg1)
 * Class: SMBPalette
 * Calls: `free`, `malloc`, `memcpy`
 * Called by: `MeatBoyCharactor__SwitchToReplayMode`
 */
/* SMBPalette__SetToReplayMode(int) */

void __thiscall SMBPalette__SetToReplayMode(SMBPalette *self, int arg1)

{
  int iVar1;
  uint64_t uVar2;
  void *pvVar3;
  short sVar4;
  long lVar5;
  void *pvVar6;
  uint64_t *puVar7;
  void *pvVar8;
  long lVar9;
  ulong uVar10;
  ushort uVar11;
  ushort *puVar12;
  ushort uVar13;
  ushort uVar14;
  ulong uVar15;
  int iVar16;
  bool bVar17;
  byte bVar18;

  bVar18 = 0;
  iVar16 = 0;
  iVar1 = iVar16;
  if (0 < arg1) {
    do {
      iVar16 = iVar1;
      lVar5 = (long)iVar16 * 0x50;
      *(uint16_t *)(self + lVar5 + 0x31f8) = 0;
      if ((*(int *)(self + lVar5 + 0x3200) == 1) &&
          (uVar13 = *(ushort *)(self + lVar5 + 0x31fa), uVar13 != 0)) {
        lVar9 = 0;
        do {
          *(uint16_t *)(*(long *)(self + lVar5 + 0x3210) + lVar9) = 0xffff;
          lVar9 = lVar9 + 2;
        } while (lVar9 != (ulong)(uVar13 - 1 & 0xffff) * 2 + 2);
      }
      if (*(short *)(self + 0x3e78) != 0) {
        uVar13 = 0;
        do {
          uVar2 = *(uint64_t *)((ulong)uVar13 * 0x30 + *(long *)(self + 0x3e88) + 8);
          if (*(int *)(self + lVar5 + 0x3218) == -0x5eef3582) {
            uVar14 = *(ushort *)(self + lVar5 + 0x31f8);
            if (uVar14 < *(ushort *)(self + lVar5 + 0x31fa))
              goto LAB_004f262a;
            uVar14 = *(ushort *)(self + lVar5 + 0x31fa) + *(short *)(self + lVar5 + 0x3204);
            uVar10 = (ulong)(byte)self[lVar5 + 0x31fc];
            pvVar6 = (void *)0x0;
            pvVar3 = *(void **)(self + lVar5 + 0x3208);
            *(ushort *)(self + lVar5 + 0x31fa) = uVar14;
            uVar15 = (ulong)uVar14 * 0x10;
            pvVar8 = malloc(uVar10 + 0x10 + uVar15);
            if (pvVar8 != (void *)0x0) {
              pvVar6 = (void *)((long)pvVar8 + 0x10U +
                                (uVar10 - ((long)pvVar8 + 0x10U) % uVar10) % uVar10);
              *(ulong *)((long)pvVar6 + -0x10) = uVar15;
              *(void **)((long)pvVar6 + -8) = pvVar8;
              if (pvVar3 != (void *)0x0) {
                uVar10 = *(ulong *)((long)pvVar3 + -0x10);
                if (uVar15 <= *(ulong *)((long)pvVar3 + -0x10)) {
                  uVar10 = uVar15;
                }
                memcpy(pvVar6, pvVar3, uVar10);
                free(*(void **)((long)pvVar3 + -8));
              }
            }
            pvVar3 = *(void **)(self + lVar5 + 0x3210);
            *(void **)(self + lVar5 + 0x3208) = pvVar6;
            if (pvVar3 != (void *)0x0) {
              uVar11 = *(ushort *)(self + lVar5 + 0x31fa);
              uVar10 = (ulong)(byte)self[lVar5 + 0x31fc];
              pvVar6 = (void *)0x0;
              uVar15 = (ulong)uVar11 * 2;
              pvVar8 = malloc(uVar10 + 0x10 + uVar15);
              if (pvVar8 != (void *)0x0) {
                pvVar6 = (void *)((long)pvVar8 + 0x10U +
                                  (uVar10 - ((long)pvVar8 + 0x10U) % uVar10) % uVar10);
                *(ulong *)((long)pvVar6 + -0x10) = uVar15;
                *(void **)((long)pvVar6 + -8) = pvVar8;
                uVar10 = *(ulong *)((long)pvVar3 + -0x10);
                if (uVar15 <= *(ulong *)((long)pvVar3 + -0x10)) {
                  uVar10 = uVar15;
                }
                memcpy(pvVar6, pvVar3, uVar10);
                free(*(void **)((long)pvVar3 + -8));
                uVar11 = *(ushort *)(self + lVar5 + 0x31fa);
              }
              uVar14 = *(ushort *)(self + lVar5 + 0x31f8);
              *(void **)(self + lVar5 + 0x3210) = pvVar6;
              if (uVar11 <= uVar14)
                goto LAB_004f262a;
              while (true) {
                uVar15 = (ulong)uVar14;
                uVar14 = uVar14 + 1;
                *(uint16_t *)((long)pvVar6 + uVar15 * 2) = 0xffff;
                if (uVar11 <= uVar14)
                  break;
                pvVar6 = *(void **)(self + lVar5 + 0x3210);
              }
            }
            iVar1 = *(int *)(self + lVar5 + 0x3200);
            uVar14 = *(ushort *)(self + lVar5 + 0x31f8);
          } else {
            uVar15 = (ulong)(byte)self[lVar5 + 0x31fc];
            *(uint32_t *)(self + lVar5 + 0x3200) = 0;
            pvVar6 = malloc(uVar15 + 0x60);
            puVar7 = (uint64_t *)0x0;
            if (pvVar6 != (void *)0x0) {
              puVar7 = (uint64_t *)((uVar15 - ((long)pvVar6 + 0x10U) % uVar15) % uVar15 +
                                    (long)pvVar6 + 0x10U);
              puVar7[-2] = 0x50;
              puVar7[-1] = pvVar6;
            }
            bVar17 = ((ulong)puVar7 & 1) != 0;
            *(uint64_t **)(self + lVar5 + 0x3208) = puVar7;
            uVar15 = 0x50;
            if (bVar17) {
              *(uint8_t *)puVar7 = 0;
              puVar7 = (uint64_t *)((long)puVar7 + 1);
              uVar15 = 0x4f;
            }
            if (((ulong)puVar7 & 2) != 0) {
              *(uint16_t *)puVar7 = 0;
              uVar15 = (ulong)((int)uVar15 - 2);
              puVar7 = (uint64_t *)((long)puVar7 + 2);
            }
            if (((ulong)puVar7 & 4) != 0) {
              *(uint32_t *)puVar7 = 0;
              uVar15 = (ulong)((int)uVar15 - 4);
              puVar7 = (uint64_t *)((long)puVar7 + 4);
            }
            for (uVar10 = uVar15 >> 3; uVar10 != 0; uVar10 = uVar10 - 1) {
              *puVar7 = 0;
              puVar7 = puVar7 + (ulong)bVar18 * -2 + 1;
            }
            if ((uVar15 & 4) != 0) {
              *(uint32_t *)puVar7 = 0;
              puVar7 = (uint64_t *)((long)puVar7 + 4);
            }
            if ((uVar15 & 2) != 0) {
              *(uint16_t *)puVar7 = 0;
              puVar7 = (uint64_t *)((long)puVar7 + 2);
            }
            if (bVar17) {
              *(uint8_t *)puVar7 = 0;
            }
            *(uint16_t *)(self + lVar5 + 0x31f8) = 0;
            *(uint16_t *)(self + lVar5 + 0x31fa) = 5;
            uVar14 = 0;
            *(uint32_t *)(self + lVar5 + 0x3218) = 0xa110ca7e;
            *(uint16_t *)(self + lVar5 + 0x3204) = 5;
          LAB_004f262a:
            iVar1 = *(int *)(self + lVar5 + 0x3200);
          }
          if ((iVar1 == 1) && (*(short *)(self + lVar5 + 0x31fa) != 0)) {
            puVar12 = *(ushort **)(self + lVar5 + 0x3210);
            sVar4 = 1;
            uVar11 = *puVar12;
            while (uVar11 != 0xffff) {
              puVar12 = puVar12 + 1;
              if (sVar4 == *(short *)(self + lVar5 + 0x31fa))
                goto LAB_004f2634;
              sVar4 = sVar4 + 1;
              uVar11 = *puVar12;
            }
            *puVar12 = uVar14;
            uVar14 = *(ushort *)(self + lVar5 + 0x31f8);
          }
        LAB_004f2634:
          uVar13 = uVar13 + 1;
          puVar7 = (uint64_t *)((ulong)uVar14 * 0x10 + *(long *)(self + lVar5 + 0x3208));
          *puVar7 = uVar2;
          *(uint32_t *)(puVar7 + 1) = 0;
          *(uint32_t *)((long)puVar7 + 0xc) = 0x3f000000;
          *(short *)(self + lVar5 + 0x31f8) = *(short *)(self + lVar5 + 0x31f8) + 1;
        } while (uVar13 < *(ushort *)(self + 0x3e78));
      }
      iVar1 = iVar16 + 1;
    } while (iVar16 + 1 != arg1);
  }
  *(int *)(self + 0x1a74) = iVar16;
  *(uint32_t *)(self + 0x1a78) = 1;
  return;
}

/* ======================================================================
 * SMBPalette__SetToNormalMode  (Ghidra `SetToNormalMode` @ 004f2920)
 * Signature: uint8_t __thiscall SetToNormalMode(SMBPalette * self)
 * Class: SMBPalette
 * Calls: (none)
 * Called by: `MeatBoyCharactor__SwitchToRegularMode`
 */
/* SMBPalette__SetToNormalMode() */

void __thiscall SMBPalette__SetToNormalMode(SMBPalette *self)

{
  *(uint32_t *)(self + 0x1a78) = 0;
  return;
}

/* ======================================================================
 * SMBPalette__EnableFlags  (Ghidra `EnableFlags` @ 004f2930)
 * Signature: uint8_t __thiscall EnableFlags(SMBPalette * self, uint arg1)
 * Class: SMBPalette
 * Calls: (none)
 * Called by: `MeatBoyCharactor__Update`, `SMBAnimalAirCritterUpdate`, `SMBAnimalGroundCritterUpdate`, `SMBBloodExplosion__Update`, `SMBBooUpdate`, `SMBBossGroundCritterUpdate`, `SMBChargerUpdate`, `SMBHellBossBoyUpdate`
 */
/* SMBPalette__EnableFlags(unsigned int) */

void __thiscall SMBPalette__EnableFlags(SMBPalette *self, uint arg1)

{
  *(uint *)(self + 0x1a7c) = *(uint *)(self + 0x1a7c) | arg1;
  return;
}

/* ======================================================================
 * SMBPalette__DisableFlags  (Ghidra `DisableFlags` @ 004f2940)
 * Signature: uint8_t __thiscall DisableFlags(SMBPalette * self, uint arg1)
 * Class: SMBPalette
 * Calls: (none)
 * Called by: `SMBAnimalAirCritterUpdate`, `SMBAnimalGroundCritterUpdate`, `SMBBloodExplosion__Update`, `SMBBooUpdate`, `SMBBossGroundCritterUpdate`, `SMBChargerUpdate`, `SMBHellBossBoyUpdate`
 */
/* SMBPalette__DisableFlags(unsigned int) */

void __thiscall SMBPalette__DisableFlags(SMBPalette *self, uint arg1)

{
  *(uint *)(self + 0x1a7c) = *(uint *)(self + 0x1a7c) & ~arg1;
  return;
}

/* ======================================================================
 * SMBPalette__ApplyTredmillForce  (Ghidra `ApplyTredmillForce` @ 004f2950)
 * Signature: uint8_t __thiscall ApplyTredmillForce(SMBPalette * self, GRIDBLOCK * arg1, SceneObject2D * arg2)
 * Class: SMBPalette
 * Calls: `Vector2__operator_assign`, `Vector2__operator_plus_assign`
 * Called by: `MeatBoyCharactor__Update`
 */
/* SMBPalette__ApplyTredmillForce(GRIDBLOCK*, SceneObject2D*) */

uint64_t __thiscall SMBPalette__ApplyTredmillForce(SMBPalette *self, GRIDBLOCK *arg1,
                                                   SceneObject2D *arg2)

{
  byte bVar1;
  uint64_t uVar2;
  uint32_t local_48;
  uint32_t local_44;
  uint32_t local_38;
  uint32_t local_34;
  uint32_t local_28;
  uint32_t local_24;
  uint32_t local_18;
  uint32_t local_14;

  uVar2 = 0;
  if ((uint)(byte)*arg1 == *(uint *)(self + 0x427c)) {
    bVar1 = (byte)arg1[1] >> 4 & 3;
    if (bVar1 == 2) {
      local_38 = 0xc3480000;
      local_34 = 0;
      Vector2__operator_assign((Vector2 *)(arg2 + 200), (Vector2 *)&local_38);
      uVar2 = 1;
    } else if (bVar1 == 3) {
      local_28 = 0;
      local_24 = 0xc4960000;
      Vector2__operator_plus_assign((Vector2 *)(arg2 + 0xec), (Vector2 *)&local_28);
      uVar2 = 1;
    } else if (bVar1 == 1) {
      local_48 = 0;
      local_44 = 0x44960000;
      Vector2__operator_plus_assign((Vector2 *)(arg2 + 0xec), (Vector2 *)&local_48);
      uVar2 = 1;
    } else {
      local_18 = 0x43480000;
      local_14 = 0;
      Vector2__operator_assign((Vector2 *)(arg2 + 200), (Vector2 *)&local_18);
      uVar2 = 1;
    }
  }
  return uVar2;
}

/* ======================================================================
 * SMBPalette__Activate  (Ghidra `Activate` @ 004f2a40)
 * Signature: uint8_t __thiscall Activate(SMBPalette * self, int arg1)
 * Class: SMBPalette
 * Calls: (none)
 * Called by: `GSuperMeatBoy__SetTilePalette`
 */
/* SMBPalette__Activate(int) */

void __thiscall SMBPalette__Activate(SMBPalette *self, int arg1)

{
  pPalProps = self + 0x425c;
  if (arg1 != 1) {
    return;
  }
  /* WARNING: Could not recover jumptable at 0x004f2a5f. Too many branches */
  /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)self + 0x10))();
  return;
}

/* ======================================================================
 * SMBPalette__SMBPalette  (Ghidra `~SMBPalette` @ 004f2c80)
 * Signature: uint8_t __thiscall ~SMBPalette(SMBPalette * self)
 * Class: SMBPalette
 * Calls: `AnimationManager__RemoveAllCallbacks`, `BaseResource__Release`, `CreateSMBPaletteResources`, `CriticalSection__CriticalSection__005b71d0`, `DestroySMBPaletteResources`, `FlashAnimationLibrary__FlashAnimationLibrary`, `Loader__WaitAll`, `PropertiesFile__PropertiesFile`, `RegisterAudioPosition`, `SMBAnimals__SMBAnimals__0048c850` (+8 more)
 * Called by: (none)
 */
/* WARNING: Removing unreachable block (ram,0x004f3b5b) */
/* SMBPalette__SMBPalette__004f3c80() */

void __thiscall SMBPalette__SMBPalette__004f3c80(SMBPalette *self)

{
  allocator *paVar1;
  int *piVar2;
  int iVar3;
  FlashAnimationLibrary *pFVar4;
  long *plVar5;
  PropertiesFile *this_00;
  SMBAnimals *this_01;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  SMBPalette *pSVar9;
  CriticalSection *pCVar10;
  CriticalSection *pCVar11;

  *(uint8_t ***)self = &PTR__SMBPalette_005c71f0;
  *(uint8_t ***)(self + 0x10) = &PTR_StartPaletteRendering_005c7268;
  /* try { // try from 004f2ca8 to 004f2f2a has its CatchHandler @ 004f3c57 */
  TAudio__DestroyManagedInstances(Audio, 1);
  Loader__WaitAll();
  RegisterAudioPosition((FPUVector *)0x0);
  DestroySMBPaletteResources(self);
  AnimationManager__RemoveAllCallbacks();
  if (*(long **)(self + 0x41f8) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x41f8) + 8))();
  }
  if (*(long **)(self + 0x100) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x100) + 8))();
  }
  pFVar4 = *(FlashAnimationLibrary **)(self + 0x41f0);
  *(uint64_t *)(self + 0x100) = 0;
  if (pFVar4 != (FlashAnimationLibrary *)0x0) {
    FlashAnimationLibrary__FlashAnimationLibrary(pFVar4);
    operator_delete(pFVar4);
  }
  if (*(long **)(self + 0x80) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x80) + 8))();
  }
  if (*(long **)(self + 0x90) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x90) + 8))();
  }
  if (*(long **)(self + 0x98) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x98) + 8))();
  }
  pFVar4 = *(FlashAnimationLibrary **)(self + 0x108);
  if (pFVar4 != (FlashAnimationLibrary *)0x0) {
    FlashAnimationLibrary__FlashAnimationLibrary(pFVar4);
    operator_delete(pFVar4);
  }
  pFVar4 = *(FlashAnimationLibrary **)(self + 0x78);
  if (pFVar4 != (FlashAnimationLibrary *)0x0) {
    FlashAnimationLibrary__FlashAnimationLibrary(pFVar4);
    operator_delete(pFVar4);
  }
  pFVar4 = *(FlashAnimationLibrary **)(self + 0x88);
  if (pFVar4 != (FlashAnimationLibrary *)0x0) {
    FlashAnimationLibrary__FlashAnimationLibrary(pFVar4);
    operator_delete(pFVar4);
  }
  uVar7 = (uint) * (ushort *)(self + 0xd0);
  if (*(ushort *)(self + 0xd0) != 0) {
    uVar8 = 0;
    do {
      plVar5 = *(long **)(*(long *)(self + 0xe0) + (uVar8 & 0xffff) * 8);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
        uVar7 = (uint) * (ushort *)(self + 0xd0);
      }
      uVar6 = (int)uVar8 + 1;
      uVar8 = (ulong)uVar6;
    } while ((int)uVar6 < (int)uVar7);
  }
  if (*(int *)(self + 0xf0) == -0x5eef3582) {
    *(uint32_t *)(self + 0xf0) = 0;
    free(*(void **)(*(long *)(self + 0xe0) + -8));
    if (*(int *)(self + 0xd8) == 1) {
      free(*(void **)(*(long *)(self + 0xe8) + -8));
    }
    *(uint32_t *)(self + 0xf0) = 0;
    *(uint16_t *)(self + 0xd2) = 0;
    *(uint16_t *)(self + 0xd0) = 0;
    *(uint64_t *)(self + 0xe0) = 0;
    *(uint64_t *)(self + 0xe8) = 0;
  }
  pFVar4 = *(FlashAnimationLibrary **)(self + 0xa0);
  if (pFVar4 != (FlashAnimationLibrary *)0x0) {
    FlashAnimationLibrary__FlashAnimationLibrary(pFVar4);
    operator_delete(pFVar4);
  }
  this_00 = *(PropertiesFile **)(self + 0x1a68);
  if (this_00 != (PropertiesFile *)0x0) {
    PropertiesFile__PropertiesFile(this_00);
    operator_delete(this_00);
  }
  if (*(void **)(self + 0x40) != (void *)0x0) {
    operator_delete__(*(void **)(self + 0x40));
  }
  if (*(void **)(self + 0x38) != (void *)0x0) {
    operator_delete__(*(void **)(self + 0x38));
  }
  if (*(long **)(self + 0x4200) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x4200) + 8))();
  }
  *(uint64_t *)(self + 0x4200) = 0;
  DestroyObstacleArrays(self);
  *(uint64_t *)(self + 0x2ad0) = 0;
  *(uint64_t *)(self + 0x2be0) = 0;
  *(uint64_t *)(self + 0x2cf0) = 0;
  *(uint64_t *)(self + 0x2e00) = 0;
  *(uint64_t *)(self + 0x2f10) = 0;
  *(uint64_t *)(self + 0x3020) = 0;
  if (*(short *)(self + 0x4058) != 0) {
    uVar8 = 0;
    do {
      BaseResource__Release(*(BaseResource **)(*(long *)(self + 0x4068) + (uVar8 & 0xffff) * 8), 0);
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulong)uVar7;
    } while ((int)uVar7 < (int)(uint) * (ushort *)(self + 0x4058));
  }
  if (*(int *)(self + 0x4078) == -0x5eef3582) {
    *(uint32_t *)(self + 0x4078) = 0;
    free(*(void **)(*(long *)(self + 0x4068) + -8));
    if (*(int *)(self + 0x4060) == 1) {
      free(*(void **)(*(long *)(self + 0x4070) + -8));
    }
    *(uint32_t *)(self + 0x4078) = 0;
    *(uint16_t *)(self + 0x405a) = 0;
    *(uint16_t *)(self + 0x4058) = 0;
    *(uint64_t *)(self + 0x4068) = 0;
    *(uint64_t *)(self + 0x4070) = 0;
  }
  this_01 = *(SMBAnimals **)(self + 0x41e8);
  if (this_01 != (SMBAnimals *)0x0) {
    SMBAnimals__SMBAnimals__0048c850(this_01);
    operator_delete(this_01);
  }
  TResourceCreator__RemoveResourceCreationFunction((TResourceCreator *)ResourceCreator,
                                                   CreateSMBPaletteResources, self);
  TResourceCreator__RemoveResourceDestroyFunction((TResourceCreator *)ResourceCreator,
                                                  DestroySMBPaletteResources, self);
  if (*(int *)(self + 0x4250) == -0x5eef3582) {
    *(uint32_t *)(self + 0x4250) = 0;
    free(*(void **)(*(long *)(self + 0x4240) + -8));
    if (*(int *)(self + 0x4238) == 1) {
      free(*(void **)(*(long *)(self + 0x4248) + -8));
    }
    *(uint32_t *)(self + 0x4250) = 0;
    *(uint16_t *)(self + 0x4232) = 0;
    *(uint16_t *)(self + 0x4230) = 0;
    *(uint64_t *)(self + 0x4240) = 0;
    *(uint64_t *)(self + 0x4248) = 0;
  }
  /* try { // try from 004f2f42 to 004f2f46 has its CatchHandler @ 004f3c46 */
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)(self + 0x4208));
  if (*(int *)(self + 0x41e0) == -0x5eef3582) {
    *(uint32_t *)(self + 0x41e0) = 0;
    free(*(void **)(*(long *)(self + 0x41d0) + -8));
    if (*(int *)(self + 0x41c8) == 1) {
      free(*(void **)(*(long *)(self + 0x41d8) + -8));
    }
    *(uint32_t *)(self + 0x41e0) = 0;
    *(uint16_t *)(self + 0x41c2) = 0;
    *(uint16_t *)(self + 0x41c0) = 0;
    *(uint64_t *)(self + 0x41d0) = 0;
    *(uint64_t *)(self + 0x41d8) = 0;
  }
  /* try { // try from 004f2f5e to 004f2f62 has its CatchHandler @ 004f3c2b */
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)(self + 0x4198));
  if (*(int *)(self + 0x4190) == -0x5eef3582) {
    *(uint32_t *)(self + 0x4190) = 0;
    free(*(void **)(*(long *)(self + 0x4180) + -8));
    if (*(int *)(self + 0x4178) == 1) {
      free(*(void **)(*(long *)(self + 0x4188) + -8));
    }
    *(uint32_t *)(self + 0x4190) = 0;
    *(uint16_t *)(self + 0x4172) = 0;
    *(uint16_t *)(self + 0x4170) = 0;
    *(uint64_t *)(self + 0x4180) = 0;
    *(uint64_t *)(self + 0x4188) = 0;
  }
  /* try { // try from 004f2f7a to 004f2f7e has its CatchHandler @ 004f3c02 */
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)(self + 0x4148));
  if (*(int *)(self + 0x4140) == -0x5eef3582) {
    *(uint32_t *)(self + 0x4140) = 0;
    free(*(void **)(*(long *)(self + 0x4130) + -8));
    if (*(int *)(self + 0x4128) == 1) {
      free(*(void **)(*(long *)(self + 0x4138) + -8));
    }
    *(uint32_t *)(self + 0x4140) = 0;
    *(uint16_t *)(self + 0x4122) = 0;
    *(uint16_t *)(self + 0x4120) = 0;
    *(uint64_t *)(self + 0x4130) = 0;
    *(uint64_t *)(self + 0x4138) = 0;
  }
  /* try { // try from 004f2f96 to 004f2f9a has its CatchHandler @ 004f3c41 */
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)(self + 0x40f8));
  if (*(int *)(self + 0x40f0) == -0x5eef3582) {
    *(uint32_t *)(self + 0x40f0) = 0;
    free(*(void **)(*(long *)(self + 0x40e0) + -8));
    if (*(int *)(self + 0x40d8) == 1) {
      free(*(void **)(*(long *)(self + 0x40e8) + -8));
    }
    *(uint32_t *)(self + 0x40f0) = 0;
    *(uint16_t *)(self + 0x40d2) = 0;
    *(uint16_t *)(self + 0x40d0) = 0;
    *(uint64_t *)(self + 0x40e0) = 0;
    *(uint64_t *)(self + 0x40e8) = 0;
  }
  /* try { // try from 004f2fb2 to 004f2fb6 has its CatchHandler @ 004f3c3c */
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)(self + 0x40a8));
  if (*(int *)(self + 0x4078) == -0x5eef3582) {
    *(uint32_t *)(self + 0x4078) = 0;
    free(*(void **)(*(long *)(self + 0x4068) + -8));
    if (*(int *)(self + 0x4060) == 1) {
      free(*(void **)(*(long *)(self + 0x4070) + -8));
    }
    *(uint32_t *)(self + 0x4078) = 0;
    *(uint16_t *)(self + 0x405a) = 0;
    *(uint16_t *)(self + 0x4058) = 0;
    *(uint64_t *)(self + 0x4068) = 0;
    *(uint64_t *)(self + 0x4070) = 0;
  }
  /* try { // try from 004f2fce to 004f2fd2 has its CatchHandler @ 004f3be5 */
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)(self + 0x4030));
  if (*(int *)(self + 0x4028) == -0x5eef3582) {
    *(uint32_t *)(self + 0x4028) = 0;
    free(*(void **)(*(long *)(self + 0x4018) + -8));
    if (*(int *)(self + 0x4010) == 1) {
      free(*(void **)(*(long *)(self + 0x4020) + -8));
    }
    *(uint32_t *)(self + 0x4028) = 0;
    *(uint16_t *)(self + 0x400a) = 0;
    *(uint16_t *)(self + 0x4008) = 0;
    *(uint64_t *)(self + 0x4018) = 0;
    *(uint64_t *)(self + 0x4020) = 0;
  }
  /* try { // try from 004f2fea to 004f2fee has its CatchHandler @ 004f3bbc */
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)(self + 0x3fe0));
  if (*(int *)(self + 0x3fd8) == -0x5eef3582) {
    *(uint32_t *)(self + 0x3fd8) = 0;
    free(*(void **)(*(long *)(self + 0x3fc8) + -8));
    if (*(int *)(self + 0x3fc0) == 1) {
      free(*(void **)(*(long *)(self + 0x3fd0) + -8));
    }
    *(uint32_t *)(self + 0x3fd8) = 0;
    *(uint16_t *)(self + 0x3fba) = 0;
    *(uint16_t *)(self + 0x3fb8) = 0;
    *(uint64_t *)(self + 0x3fc8) = 0;
    *(uint64_t *)(self + 0x3fd0) = 0;
  }
  /* try { // try from 004f3006 to 004f300a has its CatchHandler @ 004f3bfb */
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)(self + 0x3f90));
  if (*(int *)(self + 0x3f88) == -0x5eef3582) {
    *(uint32_t *)(self + 0x3f88) = 0;
    free(*(void **)(*(long *)(self + 0x3f78) + -8));
    if (*(int *)(self + 0x3f70) == 1) {
      free(*(void **)(*(long *)(self + 0x3f80) + -8));
    }
    *(uint32_t *)(self + 0x3f88) = 0;
    *(uint16_t *)(self + 0x3f6a) = 0;
    *(uint16_t *)(self + 0x3f68) = 0;
    *(uint64_t *)(self + 0x3f78) = 0;
    *(uint64_t *)(self + 0x3f80) = 0;
  }
  /* try { // try from 004f3022 to 004f3026 has its CatchHandler @ 004f3bf6 */
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)(self + 0x3f40));
  if (*(int *)(self + 0x3f38) == -0x5eef3582) {
    *(uint32_t *)(self + 0x3f38) = 0;
    free(*(void **)(*(long *)(self + 0x3f28) + -8));
    if (*(int *)(self + 0x3f20) == 1) {
      free(*(void **)(*(long *)(self + 0x3f30) + -8));
    }
    *(uint32_t *)(self + 0x3f38) = 0;
    *(uint16_t *)(self + 0x3f1a) = 0;
    *(uint16_t *)(self + 0x3f18) = 0;
    *(uint64_t *)(self + 0x3f28) = 0;
    *(uint64_t *)(self + 0x3f30) = 0;
  }
  /* try { // try from 004f303e to 004f3042 has its CatchHandler @ 004f3ba1 */
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)(self + 0x3ef0));
  if (*(int *)(self + 0x3ee8) == -0x5eef3582) {
    *(uint32_t *)(self + 0x3ee8) = 0;
    free(*(void **)(*(long *)(self + 0x3ed8) + -8));
    if (*(int *)(self + 0x3ed0) == 1) {
      free(*(void **)(*(long *)(self + 0x3ee0) + -8));
    }
    *(uint32_t *)(self + 0x3ee8) = 0;
    *(uint16_t *)(self + 0x3eca) = 0;
    *(uint16_t *)(self + 0x3ec8) = 0;
    *(uint64_t *)(self + 0x3ed8) = 0;
    *(uint64_t *)(self + 0x3ee0) = 0;
  }
  /* try { // try from 004f305a to 004f305e has its CatchHandler @ 004f3b66 */
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)(self + 0x3ea0));
  if (*(int *)(self + 0x3e98) == -0x5eef3582) {
    *(uint32_t *)(self + 0x3e98) = 0;
    free(*(void **)(*(long *)(self + 0x3e88) + -8));
    if (*(int *)(self + 16000) == 1) {
      free(*(void **)(*(long *)(self + 0x3e90) + -8));
    }
    *(uint32_t *)(self + 0x3e98) = 0;
    *(uint16_t *)(self + 0x3e7a) = 0;
    *(uint16_t *)(self + 0x3e78) = 0;
    *(uint64_t *)(self + 0x3e88) = 0;
    *(uint64_t *)(self + 0x3e90) = 0;
  }
  pCVar11 = (CriticalSection *)(self + 0x3e50);
  /* try { // try from 004f3079 to 004f307d has its CatchHandler @ 004f3bb7 */
  CriticalSection__CriticalSection__005b71d0(pCVar11);
  pSVar9 = self + 0x3e48;
  do {
    if (*(int *)pSVar9 == -0x5eef3582) {
      *(int *)pSVar9 = 0;
      free(*(void **)(*(long *)(pSVar9 + -0x10) + -8));
      if (*(int *)(pSVar9 + -0x18) == 1) {
        free(*(void **)(*(long *)(pSVar9 + -8) + -8));
      }
      *(int *)pSVar9 = 0;
      *(uint16_t *)(pSVar9 + -0x1e) = 0;
      *(uint16_t *)(pSVar9 + -0x20) = 0;
      *(uint64_t *)(pSVar9 + -0x10) = 0;
      *(uint64_t *)(pSVar9 + -8) = 0;
    }
    pCVar11 = pCVar11 + -0x50;
    /* try { // try from 004f3097 to 004f309b has its CatchHandler @ 004f3bb2 */
    CriticalSection__CriticalSection__005b71d0(pCVar11);
    pSVar9 = pSVar9 + -0x50;
  } while (self + 0x31d0 != (SMBPalette *)pCVar11);
  if (*(int *)(self + 0x31c8) == -0x5eef3582) {
    *(uint32_t *)(self + 0x31c8) = 0;
    free(*(void **)(*(long *)(self + 0x31b8) + -8));
    if (*(int *)(self + 0x31b0) == 1) {
      free(*(void **)(*(long *)(self + 0x31c0) + -8));
    }
    *(uint32_t *)(self + 0x31c8) = 0;
    *(uint16_t *)(self + 0x31aa) = 0;
    *(uint16_t *)(self + 0x31a8) = 0;
    *(uint64_t *)(self + 0x31b8) = 0;
    *(uint64_t *)(self + 0x31c0) = 0;
  }
  /* try { // try from 004f310f to 004f3113 has its CatchHandler @ 004f3b25 */
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)(self + 0x3180));
  if (*(int *)(self + 0x3178) == -0x5eef3582) {
    *(uint32_t *)(self + 0x3178) = 0;
    free(*(void **)(*(long *)(self + 0x3168) + -8));
    if (*(int *)(self + 0x3160) == 1) {
      free(*(void **)(*(long *)(self + 0x3170) + -8));
    }
    *(uint32_t *)(self + 0x3178) = 0;
    *(uint16_t *)(self + 0x315a) = 0;
    *(uint16_t *)(self + 0x3158) = 0;
    *(uint64_t *)(self + 0x3168) = 0;
    *(uint64_t *)(self + 0x3170) = 0;
  }
  /* try { // try from 004f312e to 004f3132 has its CatchHandler @ 004f3c6d */
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)(self + 0x3130));
  pCVar11 = (CriticalSection *)(self + 0x3130);
  do {
    pCVar10 = pCVar11 + -0x110;
    /* try { // try from 004f314b to 004f314f has its CatchHandler @ 004f3ad2 */
    SceneObject2D__SceneObject2D__0059b220((SceneObject2D *)(pCVar11 + -0x100));
    pCVar11 = pCVar10;
  } while ((CriticalSection *)(self + 0x2ad0) != pCVar10);
  if (*(int *)(self + 0x2ac8) == -0x5eef3582) {
    *(uint32_t *)(self + 0x2ac8) = 0;
    free(*(void **)(*(long *)(self + 0x2ab8) + -8));
    if (*(int *)(self + 0x2ab0) == 1) {
      free(*(void **)(*(long *)(self + 0x2ac0) + -8));
    }
    *(uint32_t *)(self + 0x2ac8) = 0;
    *(uint16_t *)(self + 0x2aaa) = 0;
    *(uint16_t *)(self + 0x2aa8) = 0;
    *(uint64_t *)(self + 0x2ab8) = 0;
    *(uint64_t *)(self + 0x2ac0) = 0;
  }
  /* try { // try from 004f316c to 004f3170 has its CatchHandler @ 004f3a84 */
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)(self + 0x2a80));
  /* try { // try from 004f3178 to 004f317c has its CatchHandler @ 004f3b1d */
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)(self + 0x2a58));
  paVar1 = (allocator *)(*(long *)(self + 0x1a88) + -0x18);
  if (paVar1 != (allocator *)&std__string_Rep_S_empty_rep_storage) {
    LOCK();
    piVar2 = (int *)(*(long *)(self + 0x1a88) + -8);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 < 1) {
      std__string_Rep_M_destroy(paVar1);
    }
  }
  if (*(int *)(self + 0x158) == -0x5eef3582) {
    *(uint32_t *)(self + 0x158) = 0;
    free(*(void **)(*(long *)(self + 0x148) + -8));
    if (*(int *)(self + 0x140) == 1) {
      free(*(void **)(*(long *)(self + 0x150) + -8));
    }
    *(uint32_t *)(self + 0x158) = 0;
    *(uint16_t *)(self + 0x13a) = 0;
    *(uint16_t *)(self + 0x138) = 0;
    *(uint64_t *)(self + 0x148) = 0;
    *(uint64_t *)(self + 0x150) = 0;
  }
  /* try { // try from 004f31ac to 004f31b0 has its CatchHandler @ 004f3ae8 */
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)(self + 0x110));
  if (*(int *)(self + 0xf0) == -0x5eef3582) {
    *(uint32_t *)(self + 0xf0) = 0;
    free(*(void **)(*(long *)(self + 0xe0) + -8));
    if (*(int *)(self + 0xd8) == 1) {
      free(*(void **)(*(long *)(self + 0xe8) + -8));
    }
    *(uint32_t *)(self + 0xf0) = 0;
    *(uint16_t *)(self + 0xd2) = 0;
    *(uint16_t *)(self + 0xd0) = 0;
    *(uint64_t *)(self + 0xe0) = 0;
    *(uint64_t *)(self + 0xe8) = 0;
  }
  /* try { // try from 004f31c8 to 004f31cc has its CatchHandler @ 004f3ae3 */
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)(self + 0xa8));
  /* try { // try from 004f31d1 to 004f31d5 has its CatchHandler @ 004f3c68 */
  TilePalette__TilePalette__005a1cd0((TilePalette *)(self + 0x10));
  *(uint8_t ***)self = &PTR__BaseResource_005dbe30;
  return;
}

/* ======================================================================
 * SMBPalette__SMBPalette__004f3c80  (Ghidra `~SMBPalette` @ 004f3c80)
 * Signature: uint8_t __thiscall ~SMBPalette(SMBPalette * self)
 * Class: SMBPalette
 * Calls: `BaseResource__operator_delete`
 * Called by: `SMBPalette__SMBPalette`
 */
/* SMBPalette__SMBPalette__004f3c80() */

void __thiscall SMBPalette__SMBPalette__004f3c80(SMBPalette *self)

{
  void *in_RSI;

  SMBPalette__dtor(self);
  BaseResource__operator_delete((BaseResource *)self, in_RSI);
  return;
}

/* ======================================================================
 * SMBPalette__SMBPalette__004f3ca0  (Ghidra `SMBPalette` @ 004f3ca0)
 * Signature: uint8_t __thiscall SMBPalette(SMBPalette * self, char * arg1)
 * Class: SMBPalette
 * Calls: `CreateSMBPaletteResources`, `CriticalSection__CriticalSection`, `DestroySMBPaletteResources`, `FlashAnimationLibrary__FlashAnimationLibrary__00576680`, `FlashAnimationLibrary__GetClipIndex`, `FlashAnimationLibrary__GetClipNameByIndex`, `FlashAnimationLibrary__GetLibraryEntry`, `FlashAnimationLibrary__GetMovieClip__005731d0`, `FlashAnimationLibrary__GetTextField`, `FlashLibraryEntry__GetDuration` (+23 more)
 * Called by: `GSuperMeatBoy__SetTilePalette`, `Load`, `SMBBGLoaderThread`
 */
/* WARNING: Removing unreachable block (ram,0x004f7cab) */
/* WARNING: Removing unreachable block (ram,0x004f7a3a) */
/* WARNING: Removing unreachable block (ram,0x004f7baf) */
/* WARNING: Removing unreachable block (ram,0x004f779d) */
/* WARNING: Removing unreachable block (ram,0x004f7ad9) */
/* WARNING: Removing unreachable block (ram,0x004f78e9) */
/* WARNING: Removing unreachable block (ram,0x004f7c1d) */
/* WARNING: Removing unreachable block (ram,0x004f7a88) */
/* WARNING: Removing unreachable block (ram,0x004f7c64) */
/* WARNING: Removing unreachable block (ram,0x004f7bd4) */
/* WARNING: Removing unreachable block (ram,0x004f7c72) */
/* WARNING: Removing unreachable block (ram,0x004f7c2b) */
/* SMBPalette__SMBPalette__004f3ca0(char const*) */

void __thiscall SMBPalette__SMBPalette__004f3ca0(SMBPalette *self, char *arg1)

{
  int *piVar1;
  SMBPalette *pSVar2;
  string *psVar3;
  int iVar4;
  bool bVar5;
  PropertyVariable *pPVar6;
  bool bVar7;
  ushort uVar8;
  short sVar9;
  int iVar10;
  uint32_t uVar11;
  int iVar12;
  int iVar13;
  SMBPalette *pSVar14;
  PropertiesFile *this_00;
  void *pvVar15;
  FlashAnimationLibrary *pFVar16;
  uint64_t uVar17;
  FlashLibraryEntry *pFVar18;
  FlashLibraryInstance *pFVar19;
  char *pcVar20;
  wchar_t *pwVar21;
  FlashLibraryInstance *pFVar22;
  void *pvVar23;
  SMBAnimals *this_01;
  uint64_t uVar24;
  ulong uVar25;
  uint64_t *puVar26;
  void *pvVar27;
  ushort uVar28;
  uint uVar29;
  ushort *puVar30;
  CriticalSection *this_02;
  ulong uVar31;
  uint64_t *puVar32;
  long lVar33;
  FlashLibraryInstance *this_03;
  byte bVar34;
  float fVar35;
  char local_368[256];
  char *local_268[16];
  char *local_1e8[2];
  uint8_t *local_1d8;
  uint8_t *local_1c8;
  char *local_1b8[2];
  PropertyBlock *local_1a8[2];
  PropertyBlock *local_198[2];
  PropertyBlock *local_188[2];
  PropertyBlock *local_178[2];
  PropertyBlock *local_168[2];
  Vector2 local_158[16];
  Vector2 local_148[16];
  Vector2 local_138[16];
  Vector2 local_128[16];
  char *local_118[2];
  uint32_t local_108;
  uint32_t local_104;
  char *local_f8[2];
  uint32_t local_e8;
  uint32_t local_e4;
  uint32_t local_d8;
  uint32_t local_d4;
  PropertyVariable *local_c8[2];
  long local_b8[2];
  long local_a8[2];
  PropertyBlock *local_98;
  PropertyVariable *local_90;
  PropertyVariable *local_88;
  PropertyVariable *local_80;
  PropertyVariable *local_78;
  PropertyBlock *local_70;
  uint64_t local_68;
  float local_58[4];
  allocator local_46;
  allocator local_45[21];

  bVar34 = 0;
  *(uint8_t ***)self = &PTR__BaseResource_005dbe30;
  *(uint32_t *)(self + 8) = 1;
  /* try { // try from 004f3cd1 to 004f3cd5 has its CatchHandler @ 004f7bea */
  TilePalette__TilePalette__005a1cb0((TilePalette *)(self + 0x10));
  *(uint *)(self + 100) = *(uint *)(self + 100) & 0xff0000ff;
  *(uint8_t ***)self = &PTR__SMBPalette_005c71f0;
  *(uint8_t ***)(self + 0x10) = &PTR_StartPaletteRendering_005c7268;
  *(uint64_t *)(self + 0x38) = 0;
  *(uint64_t *)(self + 0x40) = 0;
  *(uint32_t *)(self + 0x4c) = 0;
  *(uint32_t *)(self + 0x50) = 0;
  *(uint32_t *)(self + 0x54) = 0;
  *(uint32_t *)(self + 0x58) = 0;
  *(uint32_t *)(self + 0x5c) = 0;
  *(uint64_t *)(self + 0x70) = 0;
  *(uint64_t *)(self + 0x78) = 0;
  *(uint64_t *)(self + 0x80) = 0;
  *(uint64_t *)(self + 0x88) = 0;
  *(uint64_t *)(self + 0x90) = 0;
  *(uint64_t *)(self + 0x98) = 0;
  *(uint64_t *)(self + 0xa0) = 0;
  /* try { // try from 004f3d76 to 004f3d7a has its CatchHandler @ 004f7be2 */
  CriticalSection__CriticalSection((CriticalSection *)(self + 0xa8));
  *(uint16_t *)(self + 0xd2) = 0;
  *(uint16_t *)(self + 0xd0) = 0;
  *(uint16_t *)(self + 0xdc) = 1;
  *(uint64_t *)(self + 0xe0) = 0;
  *(uint64_t *)(self + 0xe8) = 0;
  *(uint32_t *)(self + 0xf0) = 0;
  self[0xd4] = (SMBPalette)0x4;
  *(uint32_t *)(self + 0xd8) = 0;
  *(uint64_t *)(self + 0xf8) = 0;
  *(uint64_t *)(self + 0x108) = 0;
  /* try { // try from 004f3def to 004f3df3 has its CatchHandler @ 004f793b */
  CriticalSection__CriticalSection((CriticalSection *)(self + 0x110));
  pSVar2 = self + 0x1ab0;
  *(uint16_t *)(self + 0x13a) = 0;
  *(uint16_t *)(self + 0x138) = 0;
  *(uint16_t *)(self + 0x144) = 1;
  *(uint64_t *)(self + 0x148) = 0;
  *(uint64_t *)(self + 0x150) = 0;
  *(uint32_t *)(self + 0x158) = 0;
  self[0x13c] = (SMBPalette)0x4;
  *(uint32_t *)(self + 0x140) = 0;
  *(uint64_t *)(self + 0x160) = 0;
  *(uint32_t *)(self + 0x1a70) = 0xffffffff;
  *(uint32_t *)(self + 0x1a74) = 0;
  *(uint32_t *)(self + 0x1a78) = 0;
  *(uint32_t *)(self + 0x1a7c) = 0;
  *(uint8_t **)(self + 0x1a88) = &DAT_008184c8 /* R:0.00016803004837129265f */;
  pSVar14 = pSVar2;
  do {
    *(uint32_t *)pSVar14 = 0xffffffff;
    *(uint32_t *)(pSVar14 + 4) = 0xffffffff;
    *(uint32_t *)(pSVar14 + 8) = 0xffffffff;
    *(uint32_t *)(self + (long)(pSVar14 + (0x1abc - (long)pSVar2))) = 0x3f800000;
    *(uint32_t *)(self + (long)(pSVar14 + (0x1ac0 - (long)pSVar2))) = 0x3f800000;
    *(uint32_t *)(self + (long)(pSVar14 + (0x1ac4 - (long)pSVar2))) = 0x3f800000;
    *(uint32_t *)(self + (long)(pSVar14 + (0x1ac8 - (long)pSVar2))) = 0x3f800000;
    *(uint32_t *)(self + (long)(pSVar14 + (0x1acc - (long)pSVar2))) = 0;
    *(uint32_t *)(self + (long)(pSVar14 + (0x1ad0 - (long)pSVar2))) = 0;
    *(uint32_t *)(pSVar14 + 0x24) = 0;
    pSVar14 = pSVar14 + 0x28;
  } while (pSVar14 != self + 0x2a50);
  /* try { // try from 004f3f0e to 004f3f12 has its CatchHandler @ 004f7924 */
  CriticalSection__CriticalSection((CriticalSection *)(self + 0x2a58));
  /* try { // try from 004f3f25 to 004f3f29 has its CatchHandler @ 004f7910 */
  CriticalSection__CriticalSection((CriticalSection *)(self + 0x2a80));
  *(uint16_t *)(self + 0x2aaa) = 0;
  *(uint16_t *)(self + 0x2aa8) = 0;
  *(uint16_t *)(self + 0x2ab4) = 1;
  *(uint64_t *)(self + 0x2ab8) = 0;
  *(uint64_t *)(self + 0x2ac0) = 0;
  *(uint32_t *)(self + 0x2ac8) = 0;
  self[0x2aac] = (SMBPalette)0x4;
  *(uint32_t *)(self + 0x2ab0) = 0;
  *(uint64_t *)(self + 0x2ad0) = 0;
  *(uint32_t *)(self + 0x2ad8) = 0xffffffff;
  *(uint32_t *)(self + 0x2adc) = 0xffffffff;
  *(uint64_t *)(self + 0x2b28) = 0;
  *(uint32_t *)(self + 0x2b30) = 1;
  *(uint8_t ***)(self + 0x2ae0) = &PTR__SceneObject2D_005dd3d0;
  /* try { // try from 004f3fc8 to 004f3fcc has its CatchHandler @ 004f7901 */
  CriticalSection__CriticalSection((CriticalSection *)(self + 0x2b38));
  uVar17 = vDefaultStart2D;
  *(uint32_t *)(self + 0x2b60) = 0;
  *(uint32_t *)(self + 0x2b64) = 0;
  *(uint32_t *)(self + 0x2b68) = 0x3f800000;
  *(uint32_t *)(self + 0x2b6c) = 0;
  *(uint32_t *)(self + 0x2b70) = 0;
  *(uint32_t *)(self + 0x2b74) = 0;
  *(uint32_t *)(self + 0x2b78) = 0;
  *(uint32_t *)(self + 0x2b7c) = 1;
  *(uint64_t *)(self + 0x2b80) = uVar17;
  *(uint64_t *)(self + 0x2b88) = uVar17;
  *(uint32_t *)(self + 0x2b90) = 0;
  *(uint32_t *)(self + 0x2b94) = 0;
  *(uint32_t *)(self + 0x2b98) = 0;
  *(uint32_t *)(self + 0x2b9c) = 0;
  *(uint32_t *)(self + 0x2ba8) = 0;
  *(uint32_t *)(self + 0x2bac) = 0;
  *(uint32_t *)(self + 0x2bb0) = 0x3f800000;
  *(uint32_t *)(self + 0x2bb4) = 0x3f800000;
  *(uint32_t *)(self + 0x2bb8) = 0;
  *(uint32_t *)(self + 0x2bbc) = 0;
  *(uint32_t *)(self + 0x2bc0) = 0;
  *(uint32_t *)(self + 0x2bc4) = 0;
  *(uint32_t *)(self + 0x2bc8) = 0;
  *(uint32_t *)(self + 0x2bcc) = 0;
  *(uint32_t *)(self + 0x2bd0) = 0;
  *(uint32_t *)(self + 0x2bd8) = 0;
  *(uint32_t *)(self + 0x2bdc) = 0;
  *(uint64_t *)(self + 0x2be0) = 0;
  *(uint32_t *)(self + 0x2be8) = 0xffffffff;
  *(uint32_t *)(self + 0x2bec) = 0xffffffff;
  *(uint64_t *)(self + 0x2c38) = 0;
  *(uint32_t *)(self + 0x2c40) = 1;
  *(uint8_t ***)(self + 0x2bf0) = &PTR__SceneObject2D_005dd3d0;
  /* try { // try from 004f4129 to 004f412d has its CatchHandler @ 004f794d */
  CriticalSection__CriticalSection((CriticalSection *)(self + 0x2c48));
  uVar17 = vDefaultStart2D;
  *(uint32_t *)(self + 0x2c70) = 0;
  *(uint32_t *)(self + 0x2c74) = 0;
  *(uint32_t *)(self + 0x2c78) = 0x3f800000;
  *(uint32_t *)(self + 0x2c7c) = 0;
  *(uint32_t *)(self + 0x2c80) = 0;
  *(uint32_t *)(self + 0x2c84) = 0;
  *(uint32_t *)(self + 0x2c88) = 0;
  *(uint32_t *)(self + 0x2c8c) = 1;
  *(uint64_t *)(self + 0x2c90) = uVar17;
  *(uint64_t *)(self + 0x2c98) = uVar17;
  *(uint32_t *)(self + 0x2ca0) = 0;
  *(uint32_t *)(self + 0x2ca4) = 0;
  *(uint32_t *)(self + 0x2ca8) = 0;
  *(uint32_t *)(self + 0x2cac) = 0;
  *(uint32_t *)(self + 0x2cb8) = 0;
  *(uint32_t *)(self + 0x2cbc) = 0;
  *(uint32_t *)(self + 0x2cc0) = 0x3f800000;
  *(uint32_t *)(self + 0x2cc4) = 0x3f800000;
  *(uint32_t *)(self + 0x2cc8) = 0;
  *(uint32_t *)(self + 0x2ccc) = 0;
  *(uint32_t *)(self + 0x2cd0) = 0;
  *(uint32_t *)(self + 0x2cd4) = 0;
  *(uint32_t *)(self + 0x2cd8) = 0;
  *(uint32_t *)(self + 0x2cdc) = 0;
  *(uint32_t *)(self + 0x2ce0) = 0;
  *(uint32_t *)(self + 0x2ce8) = 0;
  *(uint32_t *)(self + 0x2cec) = 0;
  *(uint64_t *)(self + 0x2cf0) = 0;
  *(uint32_t *)(self + 0x2cf8) = 0xffffffff;
  *(uint32_t *)(self + 0x2cfc) = 0xffffffff;
  *(uint64_t *)(self + 0x2d48) = 0;
  *(uint32_t *)(self + 0x2d50) = 1;
  *(uint8_t ***)(self + 0x2d00) = &PTR__SceneObject2D_005dd3d0;
  /* try { // try from 004f428a to 004f428e has its CatchHandler @ 004f7943 */
  CriticalSection__CriticalSection((CriticalSection *)(self + 0x2d58));
  uVar17 = vDefaultStart2D;
  *(uint32_t *)(self + 0x2d80) = 0;
  *(uint32_t *)(self + 0x2d84) = 0;
  *(uint32_t *)(self + 0x2d88) = 0x3f800000;
  *(uint32_t *)(self + 0x2d8c) = 0;
  *(uint32_t *)(self + 0x2d90) = 0;
  *(uint32_t *)(self + 0x2d94) = 0;
  *(uint32_t *)(self + 0x2d98) = 0;
  *(uint32_t *)(self + 0x2d9c) = 1;
  *(uint64_t *)(self + 0x2da0) = uVar17;
  *(uint64_t *)(self + 0x2da8) = uVar17;
  *(uint32_t *)(self + 0x2db0) = 0;
  *(uint32_t *)(self + 0x2db4) = 0;
  *(uint32_t *)(self + 0x2db8) = 0;
  *(uint32_t *)(self + 0x2dbc) = 0;
  *(uint32_t *)(self + 0x2dc8) = 0;
  *(uint32_t *)(self + 0x2dcc) = 0;
  *(uint32_t *)(self + 0x2dd0) = 0x3f800000;
  *(uint32_t *)(self + 0x2dd4) = 0x3f800000;
  *(uint32_t *)(self + 0x2dd8) = 0;
  *(uint32_t *)(self + 0x2ddc) = 0;
  *(uint32_t *)(self + 0x2de0) = 0;
  *(uint32_t *)(self + 0x2de4) = 0;
  *(uint32_t *)(self + 0x2de8) = 0;
  *(uint32_t *)(self + 0x2dec) = 0;
  *(uint32_t *)(self + 0x2df0) = 0;
  *(uint32_t *)(self + 0x2df8) = 0;
  *(uint32_t *)(self + 0x2dfc) = 0;
  *(uint64_t *)(self + 0x2e00) = 0;
  *(uint32_t *)(self + 0x2e08) = 0xffffffff;
  *(uint32_t *)(self + 0x2e0c) = 0xffffffff;
  *(uint64_t *)(self + 0x2e58) = 0;
  *(uint32_t *)(self + 0x2e60) = 1;
  *(uint8_t ***)(self + 0x2e10) = &PTR__SceneObject2D_005dd3d0;
  /* try { // try from 004f43eb to 004f43ef has its CatchHandler @ 004f787c */
  CriticalSection__CriticalSection((CriticalSection *)(self + 0x2e68));
  uVar17 = vDefaultStart2D;
  *(uint32_t *)(self + 0x2e90) = 0;
  *(uint32_t *)(self + 0x2e94) = 0;
  *(uint32_t *)(self + 0x2e98) = 0x3f800000;
  *(uint32_t *)(self + 0x2e9c) = 0;
  *(uint32_t *)(self + 0x2ea0) = 0;
  *(uint32_t *)(self + 0x2ea4) = 0;
  *(uint32_t *)(self + 0x2ea8) = 0;
  *(uint32_t *)(self + 0x2eac) = 1;
  *(uint64_t *)(self + 0x2eb0) = uVar17;
  *(uint64_t *)(self + 0x2eb8) = uVar17;
  *(uint32_t *)(self + 0x2ec0) = 0;
  *(uint32_t *)(self + 0x2ec4) = 0;
  *(uint32_t *)(self + 0x2ec8) = 0;
  *(uint32_t *)(self + 0x2ecc) = 0;
  *(uint32_t *)(self + 0x2ed8) = 0;
  *(uint32_t *)(self + 0x2edc) = 0;
  *(uint32_t *)(self + 12000) = 0x3f800000;
  *(uint32_t *)(self + 0x2ee4) = 0x3f800000;
  *(uint32_t *)(self + 0x2ee8) = 0;
  *(uint32_t *)(self + 0x2eec) = 0;
  *(uint32_t *)(self + 0x2ef0) = 0;
  *(uint32_t *)(self + 0x2ef4) = 0;
  *(uint32_t *)(self + 0x2ef8) = 0;
  *(uint32_t *)(self + 0x2efc) = 0;
  *(uint32_t *)(self + 0x2f00) = 0;
  *(uint32_t *)(self + 0x2f08) = 0;
  *(uint32_t *)(self + 0x2f0c) = 0;
  *(uint64_t *)(self + 0x2f10) = 0;
  *(uint32_t *)(self + 0x2f18) = 0xffffffff;
  *(uint32_t *)(self + 0x2f1c) = 0xffffffff;
  *(uint64_t *)(self + 0x2f68) = 0;
  *(uint32_t *)(self + 0x2f70) = 1;
  *(uint8_t ***)(self + 0x2f20) = &PTR__SceneObject2D_005dd3d0;
  /* try { // try from 004f454c to 004f4550 has its CatchHandler @ 004f7875 */
  CriticalSection__CriticalSection((CriticalSection *)(self + 0x2f78));
  uVar17 = vDefaultStart2D;
  *(uint32_t *)(self + 0x2fa0) = 0;
  *(uint32_t *)(self + 0x2fa4) = 0;
  *(uint32_t *)(self + 0x2fa8) = 0x3f800000;
  *(uint32_t *)(self + 0x2fac) = 0;
  *(uint32_t *)(self + 0x2fb0) = 0;
  *(uint32_t *)(self + 0x2fb4) = 0;
  *(uint32_t *)(self + 0x2fb8) = 0;
  *(uint32_t *)(self + 0x2fbc) = 1;
  *(uint64_t *)(self + 0x2fc0) = uVar17;
  *(uint64_t *)(self + 0x2fc8) = uVar17;
  *(uint32_t *)(self + 0x2fd0) = 0;
  *(uint32_t *)(self + 0x2fd4) = 0;
  *(uint32_t *)(self + 0x2fd8) = 0;
  *(uint32_t *)(self + 0x2fdc) = 0;
  *(uint32_t *)(self + 0x2fe8) = 0;
  *(uint32_t *)(self + 0x2fec) = 0;
  *(uint32_t *)(self + 0x2ff0) = 0x3f800000;
  *(uint32_t *)(self + 0x2ff4) = 0x3f800000;
  *(uint32_t *)(self + 0x2ff8) = 0;
  *(uint32_t *)(self + 0x2ffc) = 0;
  *(uint32_t *)(self + 0x3000) = 0;
  *(uint32_t *)(self + 0x3004) = 0;
  *(uint32_t *)(self + 0x3008) = 0;
  *(uint32_t *)(self + 0x300c) = 0;
  *(uint32_t *)(self + 0x3010) = 0;
  *(uint32_t *)(self + 0x3018) = 0;
  *(uint32_t *)(self + 0x301c) = 0;
  *(uint64_t *)(self + 0x3020) = 0;
  *(uint32_t *)(self + 0x3028) = 0xffffffff;
  *(uint32_t *)(self + 0x302c) = 0xffffffff;
  *(uint64_t *)(self + 0x3078) = 0;
  *(uint32_t *)(self + 0x3080) = 1;
  *(uint8_t ***)(self + 0x3030) = &PTR__SceneObject2D_005dd3d0;
  /* try { // try from 004f46ad to 004f46b1 has its CatchHandler @ 004f7815 */
  CriticalSection__CriticalSection((CriticalSection *)(self + 0x3088));
  uVar17 = vDefaultStart2D;
  *(uint32_t *)(self + 0x30b0) = 0;
  *(uint32_t *)(self + 0x30b4) = 0;
  *(uint32_t *)(self + 0x30b8) = 0x3f800000;
  *(uint32_t *)(self + 0x30bc) = 0;
  *(uint32_t *)(self + 0x30c0) = 0;
  *(uint64_t *)(self + 0x30d0) = uVar17;
  *(uint64_t *)(self + 0x30d8) = uVar17;
  *(uint32_t *)(self + 0x30c4) = 0;
  *(uint32_t *)(self + 0x30c8) = 0;
  *(uint32_t *)(self + 0x30cc) = 1;
  *(uint32_t *)(self + 0x30e0) = 0;
  *(uint32_t *)(self + 0x30e4) = 0;
  *(uint32_t *)(self + 0x30e8) = 0;
  *(uint32_t *)(self + 0x30ec) = 0;
  *(uint32_t *)(self + 0x30f8) = 0;
  *(uint32_t *)(self + 0x30fc) = 0;
  *(uint32_t *)(self + 0x3100) = 0x3f800000;
  *(uint32_t *)(self + 0x3104) = 0x3f800000;
  *(uint32_t *)(self + 0x3108) = 0;
  *(uint32_t *)(self + 0x310c) = 0;
  *(uint32_t *)(self + 0x3110) = 0;
  *(uint32_t *)(self + 0x3114) = 0;
  *(uint32_t *)(self + 0x3118) = 0;
  *(uint32_t *)(self + 0x311c) = 0;
  *(uint32_t *)(self + 0x3120) = 0;
  *(uint32_t *)(self + 0x3128) = 0;
  *(uint32_t *)(self + 0x312c) = 0;
  /* try { // try from 004f47d0 to 004f47d4 has its CatchHandler @ 004f7628 */
  CriticalSection__CriticalSection((CriticalSection *)(self + 0x3130));
  *(uint16_t *)(self + 0x315a) = 0;
  *(uint16_t *)(self + 0x3158) = 0;
  *(uint16_t *)(self + 0x3164) = 1;
  *(uint64_t *)(self + 0x3168) = 0;
  *(uint64_t *)(self + 0x3170) = 0;
  *(uint32_t *)(self + 0x3178) = 0;
  self[0x315c] = (SMBPalette)0x4;
  *(uint32_t *)(self + 0x3160) = 0;
  /* try { // try from 004f4833 to 004f4837 has its CatchHandler @ 004f7614 */
  CriticalSection__CriticalSection((CriticalSection *)(self + 0x3180));
  this_02 = (CriticalSection *)(self + 0x31d0);
  *(uint16_t *)(self + 0x31aa) = 0;
  *(uint16_t *)(self + 0x31a8) = 0;
  *(uint16_t *)(self + 0x31b4) = 1;
  *(uint64_t *)(self + 0x31b8) = 0;
  lVar33 = 0x27;
  *(uint64_t *)(self + 0x31c0) = 0;
  *(uint32_t *)(self + 0x31c8) = 0;
  self[0x31ac] = (SMBPalette)0x4;
  *(uint32_t *)(self + 0x31b0) = 0;
  do {
    /* try { // try from 004f48a3 to 004f48a7 has its CatchHandler @ 004f75cb */
    CriticalSection__CriticalSection(this_02);
    lVar33 = lVar33 + -1;
    *(uint16_t *)(this_02 + 0x2a) = 0;
    *(uint16_t *)(this_02 + 0x28) = 0;
    *(uint16_t *)(this_02 + 0x34) = 1;
    *(uint64_t *)(this_02 + 0x38) = 0;
    *(uint64_t *)(this_02 + 0x40) = 0;
    *(uint32_t *)(this_02 + 0x48) = 0;
    this_02[0x2c] = (CriticalSection)0x4;
    *(uint32_t *)(this_02 + 0x30) = 0;
    this_02 = this_02 + 0x50;
  } while (lVar33 != -1);
  /* try { // try from 004f48f9 to 004f48fd has its CatchHandler @ 004f75b7 */
  CriticalSection__CriticalSection((CriticalSection *)(self + 0x3e50));
  *(uint16_t *)(self + 0x3e7a) = 0;
  *(uint16_t *)(self + 0x3e78) = 0;
  *(uint16_t *)(self + 0x3e84) = 1;
  *(uint64_t *)(self + 0x3e88) = 0;
  *(uint64_t *)(self + 0x3e90) = 0;
  *(uint32_t *)(self + 0x3e98) = 0;
  self[0x3e7c] = (SMBPalette)0x4;
  *(uint32_t *)(self + 16000) = 0;
  /* try { // try from 004f495c to 004f4960 has its CatchHandler @ 004f75a3 */
  CriticalSection__CriticalSection((CriticalSection *)(self + 0x3ea0));
  *(uint16_t *)(self + 0x3eca) = 0;
  *(uint16_t *)(self + 0x3ec8) = 0;
  *(uint16_t *)(self + 0x3ed4) = 1;
  *(uint64_t *)(self + 0x3ed8) = 0;
  *(uint64_t *)(self + 0x3ee0) = 0;
  *(uint32_t *)(self + 0x3ee8) = 0;
  self[0x3ecc] = (SMBPalette)0x4;
  *(uint32_t *)(self + 0x3ed0) = 0;
  /* try { // try from 004f49bf to 004f49c3 has its CatchHandler @ 004f758f */
  CriticalSection__CriticalSection((CriticalSection *)(self + 0x3ef0));
  *(uint16_t *)(self + 0x3f1a) = 0;
  *(uint16_t *)(self + 0x3f18) = 0;
  *(uint16_t *)(self + 0x3f24) = 1;
  *(uint64_t *)(self + 0x3f28) = 0;
  *(uint64_t *)(self + 0x3f30) = 0;
  *(uint32_t *)(self + 0x3f38) = 0;
  self[0x3f1c] = (SMBPalette)0x4;
  *(uint32_t *)(self + 0x3f20) = 0;
  /* try { // try from 004f4a22 to 004f4a26 has its CatchHandler @ 004f74bb */
  CriticalSection__CriticalSection((CriticalSection *)(self + 0x3f40));
  *(uint16_t *)(self + 0x3f6a) = 0;
  *(uint16_t *)(self + 0x3f68) = 0;
  *(uint16_t *)(self + 0x3f74) = 1;
  *(uint64_t *)(self + 0x3f78) = 0;
  *(uint64_t *)(self + 0x3f80) = 0;
  *(uint32_t *)(self + 0x3f88) = 0;
  self[0x3f6c] = (SMBPalette)0x4;
  *(uint32_t *)(self + 0x3f70) = 0;
  /* try { // try from 004f4a85 to 004f4a89 has its CatchHandler @ 004f79e3 */
  CriticalSection__CriticalSection((CriticalSection *)(self + 0x3f90));
  *(uint16_t *)(self + 0x3fba) = 0;
  *(uint16_t *)(self + 0x3fb8) = 0;
  *(uint16_t *)(self + 0x3fc4) = 1;
  *(uint64_t *)(self + 0x3fc8) = 0;
  *(uint64_t *)(self + 0x3fd0) = 0;
  *(uint32_t *)(self + 0x3fd8) = 0;
  self[0x3fbc] = (SMBPalette)0x4;
  *(uint32_t *)(self + 0x3fc0) = 0;
  /* try { // try from 004f4ae8 to 004f4aec has its CatchHandler @ 004f79cf */
  CriticalSection__CriticalSection((CriticalSection *)(self + 0x3fe0));
  *(uint16_t *)(self + 0x400a) = 0;
  *(uint16_t *)(self + 0x4008) = 0;
  *(uint16_t *)(self + 0x4014) = 1;
  *(uint64_t *)(self + 0x4018) = 0;
  *(uint64_t *)(self + 0x4020) = 0;
  *(uint32_t *)(self + 0x4028) = 0;
  self[0x400c] = (SMBPalette)0x4;
  *(uint32_t *)(self + 0x4010) = 0;
  /* try { // try from 004f4b4b to 004f4b4f has its CatchHandler @ 004f79bb */
  CriticalSection__CriticalSection((CriticalSection *)(self + 0x4030));
  *(uint16_t *)(self + 0x405a) = 0;
  *(uint16_t *)(self + 0x4058) = 0;
  *(uint16_t *)(self + 0x4064) = 1;
  *(uint64_t *)(self + 0x4068) = 0;
  *(uint64_t *)(self + 0x4070) = 0;
  *(uint32_t *)(self + 0x4078) = 0;
  self[0x405c] = (SMBPalette)0x4;
  *(uint32_t *)(self + 0x4060) = 0;
  /* try { // try from 004f4bae to 004f4bb2 has its CatchHandler @ 004f79a7 */
  CriticalSection__CriticalSection((CriticalSection *)(self + 0x40a8));
  *(uint16_t *)(self + 0x40d2) = 0;
  *(uint16_t *)(self + 0x40d0) = 0;
  *(uint16_t *)(self + 0x40dc) = 1;
  *(uint64_t *)(self + 0x40e0) = 0;
  *(uint64_t *)(self + 0x40e8) = 0;
  *(uint32_t *)(self + 0x40f0) = 0;
  self[0x40d4] = (SMBPalette)0x4;
  *(uint32_t *)(self + 0x40d8) = 0;
  /* try { // try from 004f4c11 to 004f4c15 has its CatchHandler @ 004f7993 */
  CriticalSection__CriticalSection((CriticalSection *)(self + 0x40f8));
  *(uint16_t *)(self + 0x4122) = 0;
  *(uint16_t *)(self + 0x4120) = 0;
  *(uint16_t *)(self + 0x412c) = 1;
  *(uint64_t *)(self + 0x4130) = 0;
  *(uint64_t *)(self + 0x4138) = 0;
  *(uint32_t *)(self + 0x4140) = 0;
  self[0x4124] = (SMBPalette)0x4;
  *(uint32_t *)(self + 0x4128) = 0;
  /* try { // try from 004f4c74 to 004f4c78 has its CatchHandler @ 004f797f */
  CriticalSection__CriticalSection((CriticalSection *)(self + 0x4148));
  *(uint16_t *)(self + 0x4172) = 0;
  *(uint16_t *)(self + 0x4170) = 0;
  *(uint16_t *)(self + 0x417c) = 1;
  *(uint64_t *)(self + 0x4180) = 0;
  *(uint64_t *)(self + 0x4188) = 0;
  *(uint32_t *)(self + 0x4190) = 0;
  self[0x4174] = (SMBPalette)0x4;
  *(uint32_t *)(self + 0x4178) = 0;
  /* try { // try from 004f4cd4 to 004f4cd8 has its CatchHandler @ 004f796b */
  CriticalSection__CriticalSection((CriticalSection *)(self + 0x4198));
  *(uint16_t *)(self + 0x41c2) = 0;
  *(uint16_t *)(self + 0x41c0) = 0;
  *(uint16_t *)(self + 0x41cc) = 1;
  *(uint64_t *)(self + 0x41d0) = 0;
  *(uint64_t *)(self + 0x41d8) = 0;
  *(uint32_t *)(self + 0x41e0) = 0;
  self[0x41c4] = (SMBPalette)0x4;
  *(uint32_t *)(self + 0x41c8) = 0;
  /* try { // try from 004f4d34 to 004f4d38 has its CatchHandler @ 004f7957 */
  CriticalSection__CriticalSection((CriticalSection *)(self + 0x4208));
  *(uint16_t *)(self + 0x4232) = 0;
  *(uint16_t *)(self + 0x4230) = 0;
  *(uint16_t *)(self + 0x423c) = 1;
  *(uint64_t *)(self + 0x4240) = 0;
  *(uint64_t *)(self + 0x4248) = 0;
  *(uint32_t *)(self + 0x4250) = 0;
  self[0x4234] = (SMBPalette)0x4;
  *(uint32_t *)(self + 0x4238) = 0;
  *(uint32_t *)(self + 0x425c) = 0xffffffff;
  *(uint32_t *)(self + 0x4260) = 0x40;
  *(uint32_t *)(self + 0x4264) = 0;
  *(uint32_t *)(self + 17000) = 0x3f;
  *(uint32_t *)(self + 0x426c) = 0;
  *(uint32_t *)(self + 0x4270) = 0xffffffff;
  *(uint32_t *)(self + 0x4274) = 0xffffffff;
  *(uint32_t *)(self + 0x4278) = 1;
  *(uint32_t *)(self + 0x427c) = 0x3e;
  *(uint32_t *)(self + 0x4280) = 0xffffffff;
  *(uint32_t *)(self + 0x4284) = 0x3d;
  *(uint32_t *)(self + 0x4288) = 0xffffffff;
  *(uint32_t *)(self + 0x428c) = 0xffffffff;
  *(uint32_t *)(self + 0x4290) = 0xffffffff;
  *(uint32_t *)(self + 0x4294) = 0xffffffff;
  *(uint32_t *)(self + 0x4298) = 0xffffffff;
  *(uint32_t *)(self + 0x429c) = 0xffffffff;
  *(uint32_t *)(self + 0x42a0) = 0xffffffff;
  *(uint32_t *)(self + 0x42a4) = 0;
  *(uint32_t *)(self + 0x42a8) = 0;
  *(uint32_t *)(self + 0x42ac) = 0x3c;
  *(uint32_t *)(self + 0x42b0) = 0xffffffff;
  *(uint32_t *)(self + 0x42b4) = 0xffffffff;
  *(uint32_t *)(self + 0x42b8) = 0xffffffff;
  *(uint32_t *)(self + 0x42bc) = 0xffffffff;
  *(uint32_t *)(self + 0x42c0) = 0xffffffff;
  *(uint32_t *)(self + 0x42c4) = 0xffffffff;
  *(uint32_t *)(self + 0x42c8) = 0xffffffff;
  *(uint32_t *)(self + 0x42cc) = 0xffffffff;
  *(uint32_t *)(self + 0x42d0) = 0xffffffff;
  *(uint32_t *)(self + 0x42d4) = 0xffffffff;
  *(uint32_t *)(self + 0x42d8) = 0xffffffff;
  *(uint32_t *)(self + 0x42dc) = 0xffffffff;
  *(uint32_t *)(self + 0x42e0) = 0;
  *(uint32_t *)(self + 0x42e4) = 0;
  *(uint32_t *)(self + 0x42e8) = 0x3f800000;
  *(uint32_t *)(self + 0x42ec) = 0xffffffff;
  *(uint32_t *)(self + 0x42f0) = 0xffffffff;
  *(uint32_t *)(self + 0x42f4) = 0xffffffff;
  *(uint32_t *)(self + 0x42f8) = 0xffffffff;
  *(uint32_t *)(self + 0x42fc) = 0xffffffff;
  *(uint32_t *)(self + 0x4300) = 0;
  *(uint32_t *)(self + 0x4304) = 0;
  *(uint32_t *)(self + 0x4308) = 0x3f800000;
  *(uint32_t *)(self + 0x430c) = 0xffffffff;
  *(uint32_t *)(self + 0x4310) = 0xffffffff;
  *(uint32_t *)(self + 0x4314) = 0xffffffff;
  *(uint32_t *)(self + 0x4318) = 0xffffffff;
  *(uint32_t *)(self + 0x431c) = 0xffffffff;
  *(uint32_t *)(self + 0x4320) = 0;
  *(uint32_t *)(self + 0x4324) = 0;
  *(uint32_t *)(self + 0x4328) = 0x3f800000;
  *(uint32_t *)(self + 0x432c) = 0xffffffff;
  *(uint32_t *)(self + 0x4330) = 0xffffffff;
  *(uint32_t *)(self + 0x4334) = 0xffffffff;
  *(uint32_t *)(self + 0x4338) = 0xffffffff;
  *(uint32_t *)(self + 0x433c) = 0xffffffff;
  *(uint32_t *)(self + 0x4340) = 0;
  *(uint32_t *)(self + 0x4344) = 0;
  *(uint32_t *)(self + 0x4348) = 0xffffffff;
  *(uint32_t *)(self + 0x434c) = 0xffffffff;
  *(uint32_t *)(self + 0x4350) = 0xffffffff;
  *(uint32_t *)(self + 0x4354) = 0xffffffff;
  *(uint32_t *)(self + 0x4358) = 0xffffffff;
  *(uint32_t *)(self + 0x435c) = 0;
  *(uint32_t *)(self + 0x4360) = 0;
  *(uint32_t *)(self + 0x4364) = 0xffffffff;
  *(uint32_t *)(self + 0x4368) = 0xffffffff;
  *(uint32_t *)(self + 0x436c) = 0xffffffff;
  *(uint32_t *)(self + 0x4370) = 0xffffffff;
  *(uint32_t *)(self + 0x4374) = 0xffffffff;
  *(uint32_t *)(self + 0x4378) = 0;
  *(uint32_t *)(self + 0x437c) = 0;
  *(uint32_t *)(self + 0x4380) = 0x3f800000;
  *(uint32_t *)(self + 0x4384) = 0xffffffff;
  *(uint32_t *)(self + 0x4388) = 0;
  *(uint32_t *)(self + 0x438c) = 0xffffffff;
  *(uint32_t *)(self + 0x4390) = 0xffffffff;
  *(uint32_t *)(self + 0x4394) = 0xffffffff;
  *(uint32_t *)(self + 0x4398) = 0;
  *(uint32_t *)(self + 0x439c) = 0xffffffff;
  *(uint32_t *)(self + 0x43a0) = 0xffffffff;
  *(uint32_t *)(self + 0x43a4) = 0xffffffff;
  *(uint32_t *)(self + 0x43a8) = 0;
  *(uint32_t *)(self + 0x43ac) = 0xffffffff;
  *(uint32_t *)(self + 0x43b0) = 0xffffffff;
  *(uint32_t *)(self + 0x43b4) = 0xffffffff;
  *(uint32_t *)(self + 0x43b8) = 0;
  *(uint32_t *)(self + 0x43bc) = 0;
  *(uint32_t *)(self + 0x43c0) = 0xffffffff;
  *(uint32_t *)(self + 0x43c4) = 0xffffffff;
  *(uint32_t *)(self + 0x43c8) = 0xffffffff;
  *(uint32_t *)(self + 0x43cc) = 0xffffffff;
  *(uint32_t *)(self + 0x43d0) = 0xffffffff;
  *(uint32_t *)(self + 0x43d4) = 0xffffffff;
  /* try { // try from 004f5147 to 004f523e has its CatchHandler @ 004f78f9 */
  System_GetTimeInMS();
  *(uint32_t *)(self + 0x2a50) = 0;
  *(uint32_t *)(self + 0x42cc) = 0xffffffff;
  *(uint32_t *)(self + 0x42d0) = 0xffffffff;
  *(uint32_t *)(self + 0x42d4) = 0xffffffff;
  *(uint32_t *)(self + 17000) = 0xffffffff;
  *(uint32_t *)(self + 0x427c) = 0xffffffff;
  *(uint32_t *)(self + 0x4284) = 0xffffffff;
  *(uint32_t *)(self + 0x42ac) = 0xffffffff;
  strlen(arg1);
  std__string_assign((char *)(self + 0x18), (ulong)arg1);
  psVar3 = (string *)(self + 0x1a88);
  FormatResourcePath("/LevelPalettes/", psVar3);
  InitializeObstacleArrays(self);
  *(uint64_t *)(self + 0x168) = 0;
  *(uint64_t *)(self + 0x2ad0) = 0;
  *(uint64_t *)(self + 0x2be0) = 0;
  *(uint64_t *)(self + 0x2cf0) = 0;
  *(uint64_t *)(self + 0x2e00) = 0;
  *(uint64_t *)(self + 0x2f10) = 0;
  *(uint64_t *)(self + 0x3020) = 0;
  std__string_string((string *)local_1e8, psVar3);
  strlen(arg1);
  /* try { // try from 004f5255 to 004f526b has its CatchHandler @ 004f77e3 */
  std__string_append((char *)local_1e8, (ulong)arg1);
  pcVar20 = local_1e8[0];
  this_00 = operator_new(0x50);
  /* try { // try from 004f5277 to 004f527b has its CatchHandler @ 004f77d0 */
  PropertiesFile__PropertiesFile__005975b0(this_00, pcVar20, 0);
  *(PropertiesFile **)(self + 0x1a68) = this_00;
  /* try { // try from 004f5295 to 004f53b5 has its CatchHandler @ 004f77e3 */
  PropertiesFile__FindPropertyBlock(this_00, &local_98, "tiles", 0);
  PropertiesFile__FindPropertyVariable(*(PropertiesFile **)(self + 0x1a68), &local_90, local_98,
                                       "texturepackage");
  PropertiesFile__FindPropertyVariable(*(PropertiesFile **)(self + 0x1a68), &local_88, local_98,
                                       "packageindex");
  PropertiesFile__FindPropertyVariable(*(PropertiesFile **)(self + 0x1a68), &local_80, local_98,
                                       "tilesize");
  PropertiesFile__FindPropertyVariable(*(PropertiesFile **)(self + 0x1a68), &local_78, local_98,
                                       "numtiles");
  StringToInt(local_88 + 0x20);
  StringToInt(local_80 + 0x20);
  iVar10 = StringToInt(local_78 + 0x20);
  *(int *)(self + 0x48) = iVar10;
  *(int *)(self + 0x4260) = iVar10;
  *(int *)(self + 17000) = iVar10 + -1;
  *(int *)(self + 0x427c) = iVar10 + -2;
  *(int *)(self + 0x42ac) = iVar10 + -4;
  *(int *)(self + 0x4284) = iVar10 + -3;
  iVar10 =
      PropertiesFile__GetNumPropertyBlocksByName(*(PropertiesFile **)(self + 0x1a68), "background");
  *(int *)(self + 0x50) = iVar10;
  pvVar15 = operator_new__((long)iVar10 * 8);
  *(void **)(self + 0x40) = pvVar15;
  iVar10 =
      PropertiesFile__GetNumPropertyBlocksByName(*(PropertiesFile **)(self + 0x1a68), "paralax");
  *(int *)(self + 0x54) = iVar10;
  local_1d8 = &DAT_008184c8 /* R:0.00016803004837129265f */;
  local_1c8 = &DAT_008184c8 /* R:0.00016803004837129265f */;
  if (0 < iVar10) {
    /* try { // try from 004f53df to 004f542f has its CatchHandler @ 004f77c8 */
    pvVar15 = operator_new__((long)iVar10 * 8);
    *(void **)(self + 0x38) = pvVar15;
  }
  PropertiesFile__FindPropertyBlock(*(PropertiesFile **)(self + 0x1a68), &local_70, "setpieces", 0);
  CreateSMBPaletteResources(self);
  if (*(long *)(self + 0x70) == 0) {
    *(uint32_t *)(self + 0x4c) = 0;
  } else {
    *(uint32_t *)(self + 0x4c) = *(uint32_t *)(*(long *)(self + 0x70) + 8);
  }
  std__string_string((string *)local_1b8, psVar3);
  /* try { // try from 004f5442 to 004f5458 has its CatchHandler @ 004f7805 */
  std__string_append((char *)local_1b8, 0x5c6c44);
  pcVar20 = local_1b8[0];
  pFVar16 = operator_new(0xb0);
  /* try { // try from 004f5462 to 004f5466 has its CatchHandler @ 004f7803 */
  FlashAnimationLibrary__FlashAnimationLibrary__00576680(pFVar16, pcVar20);
  *(FlashAnimationLibrary **)(self + 0x41f0) = pFVar16;
  /* try { // try from 004f5476 to 004f550f has its CatchHandler @ 004f7805 */
  uVar17 = FlashAnimationLibrary__GetMovieClip__005731d0(pFVar16, "glitch");
  *(uint64_t *)(self + 0x100) = uVar17;
  if (*(int *)(SuperMeatBoy + 0x290) == 7) {
    uVar17 = FlashAnimationLibrary__GetMovieClip__005731d0(
        *(FlashAnimationLibrary **)(self + 0x41f0), "levelend2");
  } else {
    uVar17 = FlashAnimationLibrary__GetMovieClip__005731d0(
        *(FlashAnimationLibrary **)(self + 0x41f0), "levelend1");
  }
  *(uint64_t *)(self + 0x41f8) = uVar17;
  PropertiesFile__FindPropertyBlock(*(PropertiesFile **)(self + 0x1a68), local_1a8, "animation", 0);
  if (local_1a8[0] != (PropertyBlock *)0x0) {
    PropertiesFile__FindPropertyVariable(*(PropertiesFile **)(self + 0x1a68), local_c8,
                                         local_1a8[0], "animationpackage");
    pPVar6 = local_c8[0];
    std__string_string((string *)local_268, psVar3);
    strlen((char *)(pPVar6 + 0x20));
    /* try { // try from 004f5525 to 004f5529 has its CatchHandler @ 004f7752 */
    std__string_append((char *)local_268, (ulong)(pPVar6 + 0x20));
    pcVar20 = local_268[0];
    /* try { // try from 004f5537 to 004f553b has its CatchHandler @ 004f78f4 */
    pFVar16 = operator_new(0xb0);
    /* try { // try from 004f5545 to 004f5549 has its CatchHandler @ 004f78d6 */
    FlashAnimationLibrary__FlashAnimationLibrary__00576680(pFVar16, pcVar20);
    *(FlashAnimationLibrary **)(self + 0x78) = pFVar16;
    *(uint32_t *)(self + 0x58) = *(uint32_t *)(pFVar16 + 0x60);
    /* try { // try from 004f5559 to 004f555d has its CatchHandler @ 004f78f4 */
    uVar17 = FlashAnimationLibrary__GetMovieClip__005731d0(pFVar16, 0);
    *(uint64_t *)(self + 0x80) = uVar17;
    if ((allocator *)(local_268[0] + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage) {
      LOCK();
      piVar1 = (int *)(local_268[0] + -8);
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar10 < 1) {
        std__string_Rep_M_destroy((allocator *)(local_268[0] + -0x18));
      }
    }
  }
  /* try { // try from 004f5594 to 004f55df has its CatchHandler @ 004f7805 */
  PropertiesFile__FindPropertyBlock(*(PropertiesFile **)(self + 0x1a68), local_198, "obstacles", 0);
  if (local_198[0] != (PropertyBlock *)0x0) {
    PropertiesFile__FindPropertyVariable(*(PropertiesFile **)(self + 0x1a68), local_c8,
                                         local_198[0], "animationpackage");
    pPVar6 = local_c8[0];
    std__string_string((string *)local_268, psVar3);
    strlen((char *)(pPVar6 + 0x20));
    /* try { // try from 004f55f5 to 004f55f9 has its CatchHandler @ 004f7895 */
    std__string_append((char *)local_268, (ulong)(pPVar6 + 0x20));
    pcVar20 = local_268[0];
    /* try { // try from 004f5607 to 004f560b has its CatchHandler @ 004f77fe */
    pFVar16 = operator_new(0xb0);
    /* try { // try from 004f5615 to 004f5619 has its CatchHandler @ 004f77eb */
    FlashAnimationLibrary__FlashAnimationLibrary__00576680(pFVar16, pcVar20);
    *(FlashAnimationLibrary **)(self + 0x88) = pFVar16;
    *(uint32_t *)(self + 0x5c) = *(uint32_t *)(pFVar16 + 0x60);
    /* try { // try from 004f562c to 004f5a67 has its CatchHandler @ 004f77fe */
    uVar17 = FlashAnimationLibrary__GetMovieClip__005731d0(pFVar16, 0);
    *(uint64_t *)(self + 0x90) = uVar17;
    uVar17 =
        FlashAnimationLibrary__GetMovieClip__005731d0(*(FlashAnimationLibrary **)(self + 0x88), 0);
    *(uint64_t *)(self + 0x98) = uVar17;
    uVar11 =
        FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 0x88), "levelend1");
    iVar10 = *(int *)(self + 0x2a50);
    *(uint32_t *)(self + 0x425c) = uVar11;
    *(uint32_t *)(self + (long)iVar10 * 0x28 + 0x1ab0) = uVar11;
    *(uint32_t *)(self + (long)iVar10 * 0x28 + 0x1ab4) = 0xffffffff;
    *(uint32_t *)(self + (long)iVar10 * 0x28 + 0x1ab8) = 0xffffffff;
    *(uint32_t *)(self + (long)iVar10 * 0x28 + 0x1ad4) = 6;
    *(int *)(self + 0x2a50) = iVar10 + 1;
    uVar11 =
        FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 0x88), "bandaid");
    iVar10 = *(int *)(self + 0x2a50);
    *(uint32_t *)(self + 0x42b4) = uVar11;
    *(uint32_t *)(self + (long)iVar10 * 0x28 + 0x1ab0) = uVar11;
    uVar11 = FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 0x88),
                                                 "bandaidpickup");
    *(uint32_t *)(self + (long)iVar10 * 0x28 + 0x1ab4) = uVar11;
    iVar10 = *(int *)(self + 0x2a50);
    *(uint32_t *)(self + (long)iVar10 * 0x28 + 0x1ab8) = 0xffffffff;
    *(uint32_t *)(self + (long)iVar10 * 0x28 + 0x1ad4) = 0xc;
    *(int *)(self + 0x2a50) = iVar10 + 1;
    uVar11 = FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 0x88), "warp");
    *(uint32_t *)(self + 0x42c4) = uVar11;
    uVar11 =
        FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 0x88), "warp close");
    iVar10 = *(int *)(self + 0x2a50);
    *(uint32_t *)(self + 0x42c8) = uVar11;
    *(uint32_t *)(self + (long)iVar10 * 0x28 + 0x1ab0) = *(uint32_t *)(self + 0x42c4);
    *(uint32_t *)(self + (long)iVar10 * 0x28 + 0x1ab4) = uVar11;
    *(uint32_t *)(self + (long)iVar10 * 0x28 + 0x1ab8) = 0xffffffff;
    *(uint32_t *)(self + (long)iVar10 * 0x28 + 0x1ad4) = 0x14;
    *(int *)(self + 0x2a50) = iVar10 + 1;
    uVar11 =
        FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 0x88), "platform");
    *(uint32_t *)(self + 0x43c4) = uVar11;
    uVar11 = FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 0x88),
                                                 "breakblock1break");
    *(uint32_t *)(self + 0x4264) = uVar11;
    uVar11 =
        FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 0x88), "lockbreak");
    *(uint32_t *)(self + 0x426c) = uVar11;
    uVar11 = FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 0x88), "key");
    *(uint32_t *)(self + 0x4270) = uVar11;
    iVar10 =
        FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 0x88), "keypickup");
    *(int *)(self + 0x4274) = iVar10;
    if ((*(int *)(self + 0x4270) != -1) && (iVar10 != -1)) {
      iVar12 = *(int *)(self + 0x2a50);
      *(int *)(self + (long)iVar12 * 0x28 + 0x1ab0) = *(int *)(self + 0x4270);
      *(int *)(self + (long)iVar12 * 0x28 + 0x1ab4) = iVar10;
      *(uint32_t *)(self + (long)iVar12 * 0x28 + 0x1ab8) = 0xffffffff;
      *(uint32_t *)(self + (long)iVar12 * 0x28 + 0x1ad4) = 0x44;
      *(int *)(self + 0x2a50) = iVar12 + 1;
    }
    uVar11 = FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 0x88),
                                                 "missileblock");
    *(uint32_t *)(self + 0x42b0) = uVar11;
    uVar11 = FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 0x88),
                                                 "onoffappear");
    *(uint32_t *)(self + 0x428c) = uVar11;
    uVar11 = FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 0x88),
                                                 "onoffdisappear");
    *(uint32_t *)(self + 0x4288) = uVar11;
    uVar11 =
        FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 0x88), "switchidle");
    *(uint32_t *)(self + 0x4290) = uVar11;
    uVar11 =
        FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 0x88), "switchin");
    *(uint32_t *)(self + 0x4294) = uVar11;
    uVar11 =
        FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 0x88), "switchout");
    *(uint32_t *)(self + 0x4298) = uVar11;
    uVar11 = FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 0x88),
                                                 "switchontick");
    *(uint32_t *)(self + 0x429c) = uVar11;
    iVar12 =
        FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 0x88), "switchon");
    iVar10 = *(int *)(self + 0x4290);
    *(int *)(self + 0x42a0) = iVar12;
    if ((((iVar10 != -1) && (*(int *)(self + 0x4294) != -1)) &&
         (iVar13 = *(int *)(self + 0x4298), iVar13 != -1)) &&
        ((*(int *)(self + 0x429c) != -1 && (iVar12 != -1)))) {
      iVar12 = *(int *)(self + 0x2a50);
      *(int *)(self + (long)iVar12 * 0x28 + 0x1ab0) = iVar10;
      *(int *)(self + (long)iVar12 * 0x28 + 0x1ab4) = iVar10;
      *(uint32_t *)(self + (long)iVar12 * 0x28 + 0x1ab8) = 0xffffffff;
      *(uint32_t *)(self + (long)iVar12 * 0x28 + 0x1ad4) = 0x80;
      *(int *)(self + 0x2a50) = iVar12 + 1;
      pFVar18 = (FlashLibraryEntry *)FlashAnimationLibrary__GetLibraryEntry(
          *(FlashAnimationLibrary **)(self + 0x88), iVar13);
      uVar11 = FlashLibraryEntry__GetDuration(pFVar18);
      *(uint32_t *)(self + 0x42a8) = uVar11;
      pFVar18 = (FlashLibraryEntry *)FlashAnimationLibrary__GetLibraryEntry(
          *(FlashAnimationLibrary **)(self + 0x88), *(int *)(self + 0x4294));
      uVar11 = FlashLibraryEntry__GetDuration(pFVar18);
      *(uint32_t *)(self + 0x42a4) = uVar11;
    }
    uVar11 =
        FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 0x88), "shooter1");
    *(uint32_t *)(self + 0x42cc) = uVar11;
    uVar11 = FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 0x88),
                                                 "shooter1shoot");
    *(uint32_t *)(self + 0x42d0) = uVar11;
    uVar11 = FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 0x88),
                                                 "shooter1reload");
    *(uint32_t *)(self + 0x42d4) = uVar11;
    uVar11 = FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 0x88), "ammo1");
    *(uint32_t *)(self + 0x42d8) = uVar11;
    uVar11 =
        FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 0x88), "ammo1break");
    *(uint32_t *)(self + 0x42dc) = uVar11;
    if (*(int *)(self + 0x42d0) != -1) {
      pFVar18 = (FlashLibraryEntry *)FlashAnimationLibrary__GetLibraryEntry(
          *(FlashAnimationLibrary **)(self + 0x88), *(int *)(self + 0x42d0));
      uVar11 = FlashLibraryEntry__GetDuration(pFVar18);
      *(uint32_t *)(self + 0x42e0) = uVar11;
    }
    if (*(int *)(self + 0x42d4) != -1) {
      pFVar18 = (FlashLibraryEntry *)FlashAnimationLibrary__GetLibraryEntry(
          *(FlashAnimationLibrary **)(self + 0x88), *(int *)(self + 0x42d4));
      uVar11 = FlashLibraryEntry__GetDuration(pFVar18);
      *(uint32_t *)(self + 0x42e4) = uVar11;
    }
    if (*(int *)(self + 0x42d8) != -1) {
      /* try { // try from 004f5a82 to 004f5ad1 has its CatchHandler @ 004f7723 */
      pFVar19 = (FlashLibraryInstance *)FlashAnimationLibrary__GetMovieClip__005731d0(
          *(FlashAnimationLibrary **)(self + 0x88), *(int *)(self + 0x42d8));
      FlashLibraryInstance__GetInstanceBounds(pFVar19, (float *)&local_68, local_58, local_158);
      fVar35 = (float)local_68;
      if ((float)local_68 <= local_58[0]) {
        fVar35 = local_58[0];
      }
      *(float *)(self + 0x42e8) = fVar35;
      if (pFVar19 != (FlashLibraryInstance *)0x0) {
        (**(code **)(*(long *)pFVar19 + 8))(pFVar19);
      }
    }
    /* try { // try from 004f5ade to 004f5b8a has its CatchHandler @ 004f77fe */
    uVar11 =
        FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 0x88), "shooter2");
    *(uint32_t *)(self + 0x42ec) = uVar11;
    uVar11 = FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 0x88),
                                                 "shooter2shoot");
    *(uint32_t *)(self + 0x42f0) = uVar11;
    uVar11 = FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 0x88),
                                                 "shooter2reload");
    *(uint32_t *)(self + 0x42f4) = uVar11;
    uVar11 = FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 0x88), "ammo2");
    *(uint32_t *)(self + 0x42f8) = uVar11;
    uVar11 =
        FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 0x88), "ammo2break");
    *(uint32_t *)(self + 0x42fc) = uVar11;
    if (*(int *)(self + 0x42f0) != -1) {
      pFVar18 = (FlashLibraryEntry *)FlashAnimationLibrary__GetLibraryEntry(
          *(FlashAnimationLibrary **)(self + 0x88), *(int *)(self + 0x42f0));
      uVar11 = FlashLibraryEntry__GetDuration(pFVar18);
      *(uint32_t *)(self + 0x4300) = uVar11;
    }
    if (*(int *)(self + 0x42f4) != -1) {
      pFVar18 = (FlashLibraryEntry *)FlashAnimationLibrary__GetLibraryEntry(
          *(FlashAnimationLibrary **)(self + 0x88), *(int *)(self + 0x42f4));
      uVar11 = FlashLibraryEntry__GetDuration(pFVar18);
      *(uint32_t *)(self + 0x4304) = uVar11;
    }
    if (*(int *)(self + 0x42f8) != -1) {
      /* try { // try from 004f5ba5 to 004f5bf4 has its CatchHandler @ 004f788d */
      pFVar19 = (FlashLibraryInstance *)FlashAnimationLibrary__GetMovieClip__005731d0(
          *(FlashAnimationLibrary **)(self + 0x88), *(int *)(self + 0x42f8));
      FlashLibraryInstance__GetInstanceBounds(pFVar19, local_58, (float *)&local_68, local_148);
      fVar35 = local_58[0];
      if (local_58[0] <= (float)local_68) {
        fVar35 = (float)local_68;
      }
      *(float *)(self + 0x4308) = fVar35;
      if (pFVar19 != (FlashLibraryInstance *)0x0) {
        (**(code **)(*(long *)pFVar19 + 8))(pFVar19);
      }
    }
    /* try { // try from 004f5c01 to 004f5cad has its CatchHandler @ 004f77fe */
    uVar11 = FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 0x88),
                                                 "turret1idle");
    *(uint32_t *)(self + 0x430c) = uVar11;
    uVar11 = FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 0x88),
                                                 "turret1shoot");
    *(uint32_t *)(self + 0x4310) = uVar11;
    uVar11 = FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 0x88),
                                                 "turret1reload");
    *(uint32_t *)(self + 0x4314) = uVar11;
    uVar11 =
        FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 0x88), "bullet");
    *(uint32_t *)(self + 0x4318) = uVar11;
    uVar11 = FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 0x88),
                                                 "bulletbreak");
    *(uint32_t *)(self + 0x431c) = uVar11;
    if (*(int *)(self + 0x4310) != -1) {
      pFVar18 = (FlashLibraryEntry *)FlashAnimationLibrary__GetLibraryEntry(
          *(FlashAnimationLibrary **)(self + 0x88), *(int *)(self + 0x4310));
      uVar11 = FlashLibraryEntry__GetDuration(pFVar18);
      *(uint32_t *)(self + 0x4320) = uVar11;
    }
    if (*(int *)(self + 0x4314) != -1) {
      pFVar18 = (FlashLibraryEntry *)FlashAnimationLibrary__GetLibraryEntry(
          *(FlashAnimationLibrary **)(self + 0x88), *(int *)(self + 0x4314));
      uVar11 = FlashLibraryEntry__GetDuration(pFVar18);
      *(uint32_t *)(self + 0x4324) = uVar11;
    }
    if (*(int *)(self + 0x4318) != -1) {
      /* try { // try from 004f5cc8 to 004f5d17 has its CatchHandler @ 004f7888 */
      pFVar19 = (FlashLibraryInstance *)FlashAnimationLibrary__GetMovieClip__005731d0(
          *(FlashAnimationLibrary **)(self + 0x88), *(int *)(self + 0x4318));
      FlashLibraryInstance__GetInstanceBounds(pFVar19, (float *)&local_68, local_58, local_138);
      fVar35 = (float)local_68;
      if ((float)local_68 <= local_58[0]) {
        fVar35 = local_58[0];
      }
      *(float *)(self + 0x4328) = fVar35;
      if (pFVar19 != (FlashLibraryInstance *)0x0) {
        (**(code **)(*(long *)pFVar19 + 8))(pFVar19);
      }
    }
    /* try { // try from 004f5d24 to 004f5f69 has its CatchHandler @ 004f77fe */
    uVar11 =
        FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 0x88), "cannon");
    *(uint32_t *)(self + 0x432c) = uVar11;
    uVar11 = FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 0x88),
                                                 "launchershoot");
    *(uint32_t *)(self + 0x4330) = uVar11;
    uVar11 = FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 0x88),
                                                 "launcherreload");
    *(uint32_t *)(self + 0x4334) = uVar11;
    uVar11 =
        FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 0x88), "missile");
    *(uint32_t *)(self + 0x4338) = uVar11;
    uVar11 = FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 0x88),
                                                 "missileexplosion");
    *(uint32_t *)(self + 0x433c) = uVar11;
    if (*(int *)(self + 0x4330) != -1) {
      pFVar18 = (FlashLibraryEntry *)FlashAnimationLibrary__GetLibraryEntry(
          *(FlashAnimationLibrary **)(self + 0x88), *(int *)(self + 0x4330));
      uVar11 = FlashLibraryEntry__GetDuration(pFVar18);
      *(uint32_t *)(self + 0x4340) = uVar11;
    }
    if (*(int *)(self + 0x4334) != -1) {
      pFVar18 = (FlashLibraryEntry *)FlashAnimationLibrary__GetLibraryEntry(
          *(FlashAnimationLibrary **)(self + 0x88), *(int *)(self + 0x4334));
      uVar11 = FlashLibraryEntry__GetDuration(pFVar18);
      *(uint32_t *)(self + 0x4344) = uVar11;
    }
    uVar11 =
        FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 0x88), "launcher2");
    *(uint32_t *)(self + 0x4348) = uVar11;
    uVar11 = FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 0x88),
                                                 "launcher2shoot");
    *(uint32_t *)(self + 0x434c) = uVar11;
    uVar11 = FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 0x88),
                                                 "launcher2reload");
    *(uint32_t *)(self + 0x4350) = uVar11;
    uVar11 =
        FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 0x88), "missile2");
    *(uint32_t *)(self + 0x4354) = uVar11;
    uVar11 = FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 0x88),
                                                 "missile2explosion");
    *(uint32_t *)(self + 0x4358) = uVar11;
    uVar11 = FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 0x88),
                                                 "littledemon");
    *(uint32_t *)(self + 0x43d4) = uVar11;
    if (*(int *)(self + 0x434c) != -1) {
      pFVar18 = (FlashLibraryEntry *)FlashAnimationLibrary__GetLibraryEntry(
          *(FlashAnimationLibrary **)(self + 0x88), *(int *)(self + 0x434c));
      uVar11 = FlashLibraryEntry__GetDuration(pFVar18);
      *(uint32_t *)(self + 0x435c) = uVar11;
    }
    if (*(int *)(self + 0x4350) != -1) {
      pFVar18 = (FlashLibraryEntry *)FlashAnimationLibrary__GetLibraryEntry(
          *(FlashAnimationLibrary **)(self + 0x88), *(int *)(self + 0x4350));
      uVar11 = FlashLibraryEntry__GetDuration(pFVar18);
      *(uint32_t *)(self + 0x4360) = uVar11;
    }
    uVar11 = FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 0x88),
                                                 "buttholeidle");
    *(uint32_t *)(self + 0x4364) = uVar11;
    uVar11 = FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 0x88),
                                                 "buttholeshoot");
    *(uint32_t *)(self + 0x4368) = uVar11;
    uVar11 = FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 0x88),
                                                 "buttholereload");
    *(uint32_t *)(self + 0x436c) = uVar11;
    uVar11 = FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 0x88),
                                                 "buttholeammo");
    *(uint32_t *)(self + 0x4370) = uVar11;
    uVar11 = FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 0x88),
                                                 "missileexplosion");
    *(uint32_t *)(self + 0x4374) = uVar11;
    if (*(int *)(self + 0x4368) != -1) {
      pFVar18 = (FlashLibraryEntry *)FlashAnimationLibrary__GetLibraryEntry(
          *(FlashAnimationLibrary **)(self + 0x88), *(int *)(self + 0x4368));
      uVar11 = FlashLibraryEntry__GetDuration(pFVar18);
      *(uint32_t *)(self + 0x4378) = uVar11;
    }
    if (*(int *)(self + 0x436c) != -1) {
      pFVar18 = (FlashLibraryEntry *)FlashAnimationLibrary__GetLibraryEntry(
          *(FlashAnimationLibrary **)(self + 0x88), *(int *)(self + 0x436c));
      uVar11 = FlashLibraryEntry__GetDuration(pFVar18);
      *(uint32_t *)(self + 0x437c) = uVar11;
    }
    if (*(int *)(self + 0x4370) != -1) {
      /* try { // try from 004f5f84 to 004f5fd3 has its CatchHandler @ 004f7883 */
      pFVar19 = (FlashLibraryInstance *)FlashAnimationLibrary__GetMovieClip__005731d0(
          *(FlashAnimationLibrary **)(self + 0x88), *(int *)(self + 0x4370));
      FlashLibraryInstance__GetInstanceBounds(pFVar19, local_58, (float *)&local_68, local_128);
      if (local_58[0] <= (float)local_68) {
        local_58[0] = (float)local_68;
      }
      *(float *)(self + 0x4380) = local_58[0];
      if (pFVar19 != (FlashLibraryInstance *)0x0) {
        (**(code **)(*(long *)pFVar19 + 8))(pFVar19);
      }
    }
    /* try { // try from 004f5fe0 to 004f6077 has its CatchHandler @ 004f77fe */
    uVar11 = FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 0x88),
                                                 "portalenter");
    *(uint32_t *)(self + 0x43b0) = uVar11;
    uVar11 =
        FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 0x88), "portalexit");
    *(uint32_t *)(self + 0x43b4) = uVar11;
    uVar11 =
        FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 0x88), "portalidle");
    *(uint32_t *)(self + 0x43ac) = uVar11;
    if (*(int *)(self + 0x43b0) != -1) {
      pFVar18 = (FlashLibraryEntry *)FlashAnimationLibrary__GetLibraryEntry(
          *(FlashAnimationLibrary **)(self + 0x88), *(int *)(self + 0x43b0));
      uVar11 = FlashLibraryEntry__GetDuration(pFVar18);
      *(uint32_t *)(self + 0x43b8) = uVar11;
    }
    if (*(int *)(self + 0x43b4) != -1) {
      pFVar18 = (FlashLibraryEntry *)FlashAnimationLibrary__GetLibraryEntry(
          *(FlashAnimationLibrary **)(self + 0x88), *(int *)(self + 0x43b4));
      uVar11 = FlashLibraryEntry__GetDuration(pFVar18);
      *(uint32_t *)(self + 0x43bc) = uVar11;
    }
    iVar10 = FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 0x88), "fan");
    *(int *)(self + 0x4384) = iVar10;
    if (iVar10 != -1) {
      /* try { // try from 004f608c to 004f60c0 has its CatchHandler @ 004f7ae9 */
      pFVar19 = (FlashLibraryInstance *)FlashAnimationLibrary__GetMovieClip__005731d0(
          *(FlashAnimationLibrary **)(self + 0x88), iVar10);
      FlashLibraryInstance__GetInstanceBounds(pFVar19, (float *)(self + 0x4388), (float *)&local_68,
                                              (Vector2 *)local_118);
      if (pFVar19 != (FlashLibraryInstance *)0x0) {
        (**(code **)(*(long *)pFVar19 + 8))(pFVar19);
      }
    }
    /* try { // try from 004f60cd to 004f64dd has its CatchHandler @ 004f77fe */
    uVar11 =
        FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 0x88), "lazeron");
    *(uint32_t *)(self + 0x438c) = uVar11;
    uVar11 =
        FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 0x88), "lazeroff");
    *(uint32_t *)(self + 0x4390) = uVar11;
    iVar10 =
        FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 0x88), "lazerwait");
    *(int *)(self + 0x4394) = iVar10;
    if (((*(int *)(self + 0x438c) != -1) && (*(int *)(self + 0x4390) != -1)) && (iVar10 != -1)) {
      pFVar18 = (FlashLibraryEntry *)FlashAnimationLibrary__GetLibraryEntry(
          *(FlashAnimationLibrary **)(self + 0x88), iVar10);
      uVar11 = FlashLibraryEntry__GetDuration(pFVar18);
      *(uint32_t *)(self + 0x4398) = uVar11;
    }
    uVar11 = FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 0x88),
                                                 "hominglazeron");
    *(uint32_t *)(self + 0x439c) = uVar11;
    uVar11 = FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 0x88),
                                                 "hominglazeroff");
    *(uint32_t *)(self + 0x43a0) = uVar11;
    iVar10 = FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 0x88),
                                                 "hominglazerwait");
    *(int *)(self + 0x43a4) = iVar10;
    if (((*(int *)(self + 0x439c) != -1) && (*(int *)(self + 0x43a0) != -1)) && (iVar10 != -1)) {
      pFVar18 = (FlashLibraryEntry *)FlashAnimationLibrary__GetLibraryEntry(
          *(FlashAnimationLibrary **)(self + 0x88), iVar10);
      uVar11 = FlashLibraryEntry__GetDuration(pFVar18);
      *(uint32_t *)(self + 0x4398) = uVar11;
    }
    uVar11 = FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 0x88), "orb");
    *(uint32_t *)(self + 0x43c0) = uVar11;
    uVar11 =
        FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 0x88), "convayer");
    *(uint32_t *)(self + 0x4280) = uVar11;
    uVar11 = FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 0x88),
                                                 "buttholekiller");
    *(uint32_t *)(self + 0x42c0) = uVar11;
    uVar11 =
        FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 0x88), "signpost");
    *(uint32_t *)(self + 0x42b8) = uVar11;
    uVar11 = FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 0x88),
                                                 "signpost_xbox");
    *(uint32_t *)(self + 0x42bc) = uVar11;
    uVar11 = FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 0x88), "smoke");
    *(uint32_t *)(self + 0x43cc) = uVar11;
    uVar11 =
        FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 0x88), "particle");
    *(uint32_t *)(self + 0x43c8) = uVar11;
    uVar11 = FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 0x88), "quake");
    *(uint32_t *)(self + 0x43d0) = uVar11;
    uVar17 = FlashAnimationLibrary__GetMovieClip__005731d0(*(FlashAnimationLibrary **)(self + 0x88),
                                                           "smoke");
    *(uint64_t *)(self + 0x4200) = uVar17;
    *(uint64_t *)(self + 0x4080) = 0xffffffffffffffff;
    *(uint64_t *)(self + 0x4088) = 0xffffffffffffffff;
    *(uint64_t *)(self + 0x4090) = 0xffffffffffffffff;
    *(uint64_t *)(self + 0x4098) = 0xffffffffffffffff;
    *(uint64_t *)(self + 0x40a0) = 0xffffffffffffffff;
    Sprint("bosspos%i", local_368, 0);
    iVar10 =
        FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 0x88), local_368);
    if (iVar10 != -1) {
      *(int *)(self + 0x4080) = iVar10;
    }
    Sprint("bosspos%i", local_368, 1);
    iVar10 =
        FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 0x88), local_368);
    if (iVar10 != -1) {
      *(int *)(self + 0x4084) = iVar10;
    }
    Sprint("bosspos%i", local_368, 2);
    iVar10 =
        FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 0x88), local_368);
    if (iVar10 != -1) {
      *(int *)(self + 0x4088) = iVar10;
    }
    Sprint("bosspos%i", local_368, 3);
    iVar10 =
        FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 0x88), local_368);
    if (iVar10 != -1) {
      *(int *)(self + 0x408c) = iVar10;
    }
    Sprint("bosspos%i", local_368, 4);
    iVar10 =
        FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 0x88), local_368);
    if (iVar10 != -1) {
      *(int *)(self + 0x4090) = iVar10;
    }
    Sprint("bosspos%i", local_368, 5);
    iVar10 =
        FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 0x88), local_368);
    if (iVar10 != -1) {
      *(int *)(self + 0x4094) = iVar10;
    }
    Sprint("bosspos%i", local_368, 6);
    iVar10 =
        FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 0x88), local_368);
    if (iVar10 != -1) {
      *(int *)(self + 0x4098) = iVar10;
    }
    Sprint("bosspos%i", local_368, 7);
    iVar10 =
        FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 0x88), local_368);
    if (iVar10 != -1) {
      *(int *)(self + 0x409c) = iVar10;
    }
    Sprint("bosspos%i", local_368, 8);
    iVar10 =
        FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 0x88), local_368);
    if (iVar10 != -1) {
      *(int *)(self + 0x40a0) = iVar10;
    }
    Sprint("bosspos%i", local_368, 9);
    iVar10 =
        FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 0x88), local_368);
    if (iVar10 != -1) {
      *(int *)(self + 0x40a4) = iVar10;
    }
    pFVar16 = *(FlashAnimationLibrary **)(self + 0x88);
    if (0 < *(int *)(pFVar16 + 0x60)) {
      iVar10 = 0;
      do {
        /* try { // try from 004f6539 to 004f6555 has its CatchHandler @ 004f7ae4 */
        pcVar20 = (char *)FlashAnimationLibrary__GetClipNameByIndex(pFVar16, iVar10);
        std__string_string((string *)local_118, pcVar20, &local_46);
        /* try { // try from 004f656a to 004f6610 has its CatchHandler @ 004f7ac1 */
        lVar33 = std__string_find((char *)local_118, 0x5c3377, 0);
        if (lVar33 == -1) {
          uVar11 = FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 0x88),
                                                       local_118[0]);
          iVar12 = iVar10;
          while (true) {
            Sprint("%salt%i", local_368, local_118[0]);
            iVar13 = FlashAnimationLibrary__GetClipIndex(*(FlashAnimationLibrary **)(self + 0x88),
                                                         local_368);
            if (iVar13 == -1)
              break;
            iVar4 = *(int *)(self + 0x2a50);
            *(int *)(self + (long)iVar4 * 0x28 + 0x1ab0) = iVar12;
            *(int *)(self + (long)iVar4 * 0x28 + 0x1ab4) = iVar13;
            *(uint32_t *)(self + (long)iVar4 * 0x28 + 0x1ab8) = uVar11;
            *(uint32_t *)(self + (long)iVar4 * 0x28 + 0x1ad4) = 0x121;
            *(int *)(self + 0x2a50) = iVar4 + 1;
            iVar12 = iVar13;
          }
        }
        if ((allocator *)(local_118[0] + -0x18) !=
            (allocator *)&std__string_Rep_S_empty_rep_storage) {
          LOCK();
          piVar1 = (int *)(local_118[0] + -8);
          iVar12 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar12 < 1) {
            std__string_Rep_M_destroy((allocator *)(local_118[0] + -0x18));
          }
        }
        pFVar16 = *(FlashAnimationLibrary **)(self + 0x88);
        iVar10 = iVar10 + 1;
      } while (iVar10 < *(int *)(pFVar16 + 0x60));
    }
    if ((allocator *)(local_268[0] + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage) {
      LOCK();
      piVar1 = (int *)(local_268[0] + -8);
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar10 < 1) {
        std__string_Rep_M_destroy((allocator *)(local_268[0] + -0x18));
      }
    }
  }
  /* try { // try from 004f666f to 004f66b7 has its CatchHandler @ 004f7805 */
  PropertiesFile__FindPropertyBlock(*(PropertiesFile **)(self + 0x1a68), local_188, "transition",
                                    0);
  if (local_188[0] != (PropertyBlock *)0x0) {
    PropertiesFile__FindPropertyVariable(*(PropertiesFile **)(self + 0x1a68),
                                         (PropertyVariable **)&local_68, local_188[0],
                                         "animationpackage");
    lVar33 = CONCAT44(local_68._4_4_, (float)local_68);
    std__string_string((string *)local_118, psVar3);
    pcVar20 = (char *)(lVar33 + 0x20);
    strlen(pcVar20);
    /* try { // try from 004f66d2 to 004f66d6 has its CatchHandler @ 004f7a73 */
    std__string_append((char *)local_118, (ulong)pcVar20);
    pcVar20 = local_118[0];
    /* try { // try from 004f66e4 to 004f66e8 has its CatchHandler @ 004f7b0d */
    pFVar16 = operator_new(0xb0);
    /* try { // try from 004f66f2 to 004f66f6 has its CatchHandler @ 004f7af5 */
    FlashAnimationLibrary__FlashAnimationLibrary__00576680(pFVar16, pcVar20);
    *(FlashAnimationLibrary **)(self + 0x108) = pFVar16;
    /* try { // try from 004f6706 to 004f6759 has its CatchHandler @ 004f7b0d */
    pwVar21 = (wchar_t *)FlashAnimationLibrary__GetTextField(pFVar16, "warptext1");
    if (pwVar21 != (wchar_t *)0x0) {
      uVar17 = GetLocalizedText(0x7a);
      FlashTextField__SetText(pwVar21, uVar17);
    }
    pwVar21 = (wchar_t *)FlashAnimationLibrary__GetTextField(
        *(FlashAnimationLibrary **)(self + 0x108), "warptext2");
    if (pwVar21 != (wchar_t *)0x0) {
      uVar17 = GetLocalizedText(0x7b);
      FlashTextField__SetText(pwVar21, uVar17);
    }
    iVar10 = 1;
    while (true) {
      /* try { // try from 004f6942 to 004f6979 has its CatchHandler @ 004f7aee */
      Sprint("trans%i-1", local_268, iVar10);
      pFVar19 = (FlashLibraryInstance *)FlashAnimationLibrary__GetMovieClip__005731d0(
          *(FlashAnimationLibrary **)(self + 0x108), (char *)local_268);
      Sprint("trans%i-2", local_268, iVar10);
      pFVar22 = (FlashLibraryInstance *)FlashAnimationLibrary__GetMovieClip__005731d0(
          *(FlashAnimationLibrary **)(self + 0x108), (char *)local_268);
      if (pFVar19 == (FlashLibraryInstance *)0x0) {
        pFVar19 = pFVar22;
      }
      this_03 = pFVar19;
      if (pFVar22 != (FlashLibraryInstance *)0x0) {
        this_03 = pFVar22;
      }
      if ((pFVar19 == (FlashLibraryInstance *)0x0) || (this_03 == (FlashLibraryInstance *)0x0))
        break;
      if (*(int *)(self + 0x158) == -0x5eef3582) {
        uVar8 = *(ushort *)(self + 0x138);
        if (uVar8 < *(ushort *)(self + 0x13a))
          goto LAB_004f683b;
        uVar8 = *(ushort *)(self + 0x13a) + *(short *)(self + 0x144);
        uVar25 = (ulong)(byte)self[0x13c];
        pvVar15 = *(void **)(self + 0x148);
        *(ushort *)(self + 0x13a) = uVar8;
        uVar31 = (ulong)uVar8 * 0x10;
        pvVar23 = malloc(uVar25 + 0x10 + uVar31);
        pvVar27 = (void *)0x0;
        if (pvVar23 != (void *)0x0) {
          pvVar27 = (void *)((long)pvVar23 + 0x10U +
                             (uVar25 - ((long)pvVar23 + 0x10U) % uVar25) % uVar25);
          *(ulong *)((long)pvVar27 + -0x10) = uVar31;
          *(void **)((long)pvVar27 + -8) = pvVar23;
          if (pvVar15 != (void *)0x0) {
            uVar25 = *(ulong *)((long)pvVar15 + -0x10);
            if (uVar31 <= *(ulong *)((long)pvVar15 + -0x10)) {
              uVar25 = uVar31;
            }
            memcpy(pvVar27, pvVar15, uVar25);
            free(*(void **)((long)pvVar15 + -8));
          }
        }
        *(void **)(self + 0x148) = pvVar27;
        pvVar15 = *(void **)(self + 0x150);
        if (pvVar15 != (void *)0x0) {
          uVar28 = *(ushort *)(self + 0x13a);
          uVar25 = (ulong)(byte)self[0x13c];
          pvVar23 = (void *)0x0;
          uVar31 = (ulong)uVar28 * 2;
          pvVar27 = malloc(uVar25 + 0x10 + uVar31);
          if (pvVar27 != (void *)0x0) {
            pvVar23 = (void *)((long)pvVar27 + 0x10U +
                               (uVar25 - ((long)pvVar27 + 0x10U) % uVar25) % uVar25);
            *(ulong *)((long)pvVar23 + -0x10) = uVar31;
            *(void **)((long)pvVar23 + -8) = pvVar27;
            uVar25 = *(ulong *)((long)pvVar15 + -0x10);
            if (uVar31 <= *(ulong *)((long)pvVar15 + -0x10)) {
              uVar25 = uVar31;
            }
            memcpy(pvVar23, pvVar15, uVar25);
            free(*(void **)((long)pvVar15 + -8));
            uVar28 = *(ushort *)(self + 0x13a);
          }
          uVar8 = *(ushort *)(self + 0x138);
          *(void **)(self + 0x150) = pvVar23;
          if (uVar28 <= uVar8)
            goto LAB_004f683b;
          while (true) {
            uVar31 = (ulong)uVar8;
            uVar8 = uVar8 + 1;
            *(uint16_t *)((long)pvVar23 + uVar31 * 2) = 0xffff;
            if (uVar28 <= uVar8)
              break;
            pvVar23 = *(void **)(self + 0x150);
          }
        }
        iVar12 = *(int *)(self + 0x140);
        uVar8 = *(ushort *)(self + 0x138);
      } else {
        uVar31 = (ulong)(byte)self[0x13c];
        *(uint32_t *)(self + 0x140) = 0;
        pvVar15 = malloc(uVar31 + 0x60);
        puVar26 = (uint64_t *)0x0;
        if (pvVar15 != (void *)0x0) {
          puVar26 = (uint64_t *)((long)pvVar15 + 0x10U +
                                 (uVar31 - ((long)pvVar15 + 0x10U) % uVar31) % uVar31);
          puVar26[-2] = 0x50;
          puVar26[-1] = pvVar15;
        }
        *(uint64_t **)(self + 0x148) = puVar26;
        uVar31 = 0x50;
        bVar5 = false;
        iVar12 = 0x50;
        if (((ulong)puVar26 & 1) == 0) {
          puVar32 = puVar26;
          bVar7 = false;
          if (((ulong)puVar26 & 2) == 0)
            goto LAB_004f67db;
        LAB_004f743b:
          bVar5 = bVar7;
          *(uint16_t *)puVar32 = 0;
          puVar32 = (uint64_t *)((long)puVar32 + 2);
          uVar29 = iVar12 - 2;
          uVar31 = (ulong)uVar29;
        } else {
          puVar32 = (uint64_t *)((long)puVar26 + 1);
          *(uint8_t *)puVar26 = 0;
          uVar31 = 0x4f;
          bVar5 = true;
          iVar12 = 0x4f;
          bVar7 = true;
          if (((ulong)puVar32 & 2) != 0)
            goto LAB_004f743b;
        LAB_004f67db:
          uVar29 = (uint)uVar31;
        }
        if (((ulong)puVar32 & 4) != 0) {
          *(uint32_t *)puVar32 = 0;
          uVar31 = (ulong)(uVar29 - 4);
          puVar32 = (uint64_t *)((long)puVar32 + 4);
        }
        for (uVar25 = uVar31 >> 3; uVar25 != 0; uVar25 = uVar25 - 1) {
          *puVar32 = 0;
          puVar32 = puVar32 + (ulong)bVar34 * -2 + 1;
        }
        if ((uVar31 & 4) != 0) {
          *(uint32_t *)puVar32 = 0;
          puVar32 = (uint64_t *)((long)puVar32 + 4);
        }
        if ((uVar31 & 2) != 0) {
          *(uint16_t *)puVar32 = 0;
          puVar32 = (uint64_t *)((long)puVar32 + 2);
        }
        if (bVar5) {
          *(uint8_t *)puVar32 = 0;
        }
        *(uint16_t *)(self + 0x138) = 0;
        *(uint16_t *)(self + 0x13a) = 5;
        uVar8 = 0;
        *(uint32_t *)(self + 0x158) = 0xa110ca7e;
        *(uint16_t *)(self + 0x144) = 5;
      LAB_004f683b:
        iVar12 = *(int *)(self + 0x140);
      }
      if ((iVar12 == 1) && (*(short *)(self + 0x13a) != 0)) {
        puVar30 = *(ushort **)(self + 0x150);
        sVar9 = 1;
        uVar28 = *puVar30;
        while (uVar28 != 0xffff) {
          puVar30 = puVar30 + 1;
          if (sVar9 == *(short *)(self + 0x13a))
            goto LAB_004f6848;
          sVar9 = sVar9 + 1;
          uVar28 = *puVar30;
        }
        *puVar30 = uVar8;
        uVar8 = *(ushort *)(self + 0x138);
      }
    LAB_004f6848:
      puVar26 = (uint64_t *)((ulong)uVar8 * 0x10 + *(long *)(self + 0x148));
      *puVar26 = pFVar19;
      puVar26[1] = this_03;
      *(short *)(self + 0x138) = *(short *)(self + 0x138) + 1;
      local_108 = 0x4cbebc20;
      local_104 = 0x4cbebc20;
      local_f8[0] = (char *)0xccbebc20ccbebc20;
      /* try { // try from 004f68aa to 004f6922 has its CatchHandler @ 004f773d */
      FlashLibraryInstance__GetBounds(pFVar19, 0.0, (Vector2 *)&local_108, (Vector2 *)local_f8,
                                      0.0);
      local_e8 = 0x4cbebc20;
      local_e4 = 0x4cbebc20;
      Vector2__operator_assign((Vector2 *)&local_108, (Vector2 *)&local_e8);
      local_d8 = 0xccbebc20;
      local_d4 = 0xccbebc20;
      Vector2__operator_assign((Vector2 *)local_f8, (Vector2 *)&local_d8);
      FlashLibraryInstance__GetBounds(this_03, 0.0, (Vector2 *)&local_108, (Vector2 *)local_f8,
                                      0.0);
      iVar10 = iVar10 + 1;
    }
    if ((allocator *)(local_118[0] + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage) {
      LOCK();
      piVar1 = (int *)(local_118[0] + -8);
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar10 < 1) {
        std__string_Rep_M_destroy((allocator *)(local_118[0] + -0x18));
      }
    }
  }
  /* try { // try from 004f6bf6 to 004f6c04 has its CatchHandler @ 004f7805 */
  PropertiesFile__FindPropertyBlock(*(PropertiesFile **)(self + 0x1a68), local_178, "animals", 0);
  this_01 = operator_new(0x4518);
  /* try { // try from 004f6c0b to 004f6c0f has its CatchHandler @ 004f77a8 */
  SMBAnimals__SMBAnimals(this_01);
  *(SMBAnimals **)(self + 0x41e8) = this_01;
  if (local_178[0] != (PropertyBlock *)0x0) {
    /* try { // try from 004f6c3c to 004f6c62 has its CatchHandler @ 004f7805 */
    PropertiesFile__FindPropertyVariable(*(PropertiesFile **)(self + 0x1a68),
                                         (PropertyVariable **)&local_68, local_178[0],
                                         "animationpackage");
    std__string_string((string *)local_f8, "/Animals/", local_45);
    pcVar20 = (char *)(CONCAT44(local_68._4_4_, (float)local_68) + 0x20);
    strlen(pcVar20);
    /* try { // try from 004f6c82 to 004f6c9a has its CatchHandler @ 004f778b */
    std__string_append((char *)local_f8, (ulong)pcVar20);
    SMBAnimals__InitializeAnimals(*(SMBAnimals **)(self + 0x41e8), local_f8[0]);
    if ((allocator *)(local_f8[0] + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage) {
      LOCK();
      piVar1 = (int *)(local_f8[0] + -8);
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar10 < 1) {
        std__string_Rep_M_destroy((allocator *)(local_f8[0] + -0x18));
      }
    }
  }
  /* try { // try from 004f6cca to 004f6d19 has its CatchHandler @ 004f7805 */
  PropertiesFile__FindPropertyBlock(*(PropertiesFile **)(self + 0x1a68), local_168, "Pickup", 0);
  if (local_168[0] == (PropertyBlock *)0x0)
    goto LAB_004f72b3;
  PropertiesFile__FindPropertyVariable(*(PropertiesFile **)(self + 0x1a68),
                                       (PropertyVariable **)&local_68, local_168[0],
                                       "animationpackage");
  PropertiesFile__FindPropertyVariable(*(PropertiesFile **)(self + 0x1a68), local_c8, local_168[0],
                                       "numpickups");
  local_f8[0] = &DAT_008184c8 /* R:0.00016803004837129265f */;
  if (local_c8[0] == (PropertyVariable *)0x0) {
    iVar10 = 1;
  } else {
    /* try { // try from 004f6d48 to 004f6d8a has its CatchHandler @ 004f77bb */
    iVar10 = StringToInt(local_c8[0] + 0x20);
  }
  if (*(int *)(SuperMeatBoy + 0x290) == 7) {
    std__string_string((string *)local_a8, psVar3);
    /* try { // try from 004f7132 to 004f7136 has its CatchHandler @ 004f7b44 */
    std__string_append((char *)local_a8, 0x5c6ed5);
    /* try { // try from 004f714f to 004f7153 has its CatchHandler @ 004f7bba */
    std__string_assign((string *)local_f8);
    if ((allocator *)(local_a8[0] + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage) {
      LOCK();
      piVar1 = (int *)(local_a8[0] + -8);
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar10 < 1) {
        std__string_Rep_M_destroy((allocator *)(local_a8[0] + -0x18));
      }
    }
    pcVar20 = local_f8[0];
    /* try { // try from 004f717a to 004f717e has its CatchHandler @ 004f77bb */
    pFVar16 = operator_new(0xb0);
    /* try { // try from 004f7188 to 004f718c has its CatchHandler @ 004f7b97 */
    FlashAnimationLibrary__FlashAnimationLibrary__00576680(pFVar16, pcVar20);
    *(FlashAnimationLibrary **)(self + 0xa0) = pFVar16;
    /* try { // try from 004f7199 to 004f719d has its CatchHandler @ 004f77bb */
    uVar17 = FlashAnimationLibrary__GetMovieClip__005731d0(pFVar16, 0);
    if (*(int *)(self + 0xf0) == -0x5eef3582) {
      uVar8 = *(ushort *)(self + 0xd0);
      if (*(ushort *)(self + 0xd2) <= uVar8) {
        uVar8 = *(ushort *)(self + 0xd2) + *(short *)(self + 0xdc);
        *(ushort *)(self + 0xd2) = uVar8;
        uVar24 = TMemory__AlignedReAlloc(*(void **)(self + 0xe0), (ulong)uVar8 * 8,
                                         (ulong)(byte)self[0xd4]);
        *(uint64_t *)(self + 0xe0) = uVar24;
        if (*(void **)(self + 0xe8) != (void *)0x0) {
          lVar33 = TMemory__AlignedReAlloc(*(void **)(self + 0xe8),
                                           (ulong) * (ushort *)(self + 0xd2) * 2,
                                           (ulong)(byte)self[0xd4]);
          uVar8 = *(ushort *)(self + 0xd0);
          uVar28 = *(ushort *)(self + 0xd2);
          *(long *)(self + 0xe8) = lVar33;
          if (uVar28 <= uVar8)
            goto LAB_004f7252;
          while (true) {
            uVar31 = (ulong)uVar8;
            uVar8 = uVar8 + 1;
            *(uint16_t *)(lVar33 + uVar31 * 2) = 0xffff;
            if (uVar28 <= uVar8)
              break;
            lVar33 = *(long *)(self + 0xe8);
          }
        }
        uVar8 = *(ushort *)(self + 0xd0);
      }
    } else {
      uVar31 = (ulong)(byte)self[0xd4];
      *(uint32_t *)(self + 0xd8) = 0;
      pvVar15 = malloc(uVar31 + 0x38);
      puVar26 = (uint64_t *)0x0;
      if (pvVar15 != (void *)0x0) {
        puVar26 = (uint64_t *)((long)pvVar15 + 0x10U +
                               (uVar31 - ((long)pvVar15 + 0x10U) % uVar31) % uVar31);
        puVar26[-1] = pvVar15;
        puVar26[-2] = 0x28;
      }
      *(uint64_t **)(self + 0xe0) = puVar26;
      uVar8 = 0;
      *puVar26 = 0;
      puVar26[1] = 0;
      puVar26[2] = 0;
      puVar26[3] = 0;
      puVar26[4] = 0;
      *(uint16_t *)(self + 0xd0) = 0;
      *(uint16_t *)(self + 0xd2) = 5;
      *(uint32_t *)(self + 0xf0) = 0xa110ca7e;
      *(uint16_t *)(self + 0xdc) = 5;
    }
  LAB_004f7252:
    if ((*(int *)(self + 0xd8) == 1) && (*(short *)(self + 0xd2) != 0)) {
      puVar30 = *(ushort **)(self + 0xe8);
      sVar9 = 0;
      uVar28 = *puVar30;
      while (uVar28 != 0xffff) {
        puVar30 = puVar30 + 1;
        sVar9 = sVar9 + 1;
        if (sVar9 == *(short *)(self + 0xd2))
          goto LAB_004f725f;
        uVar28 = *puVar30;
      }
      *puVar30 = uVar8;
      uVar8 = *(ushort *)(self + 0xd0);
    }
  LAB_004f725f:
    *(uint64_t *)(*(long *)(self + 0xe0) + (ulong)uVar8 * 8) = uVar17;
    *(short *)(self + 0xd0) = *(short *)(self + 0xd0) + 1;
  } else {
    std__string_string((string *)local_b8, psVar3);
    pcVar20 = (char *)(CONCAT44(local_68._4_4_, (float)local_68) + 0x20);
    strlen(pcVar20);
    /* try { // try from 004f6da5 to 004f6da9 has its CatchHandler @ 004f76fe */
    std__string_append((char *)local_b8, (ulong)pcVar20);
    /* try { // try from 004f6dc2 to 004f6dc6 has its CatchHandler @ 004f763c */
    std__string_assign((string *)local_f8);
    if ((allocator *)(local_b8[0] + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage) {
      LOCK();
      piVar1 = (int *)(local_b8[0] + -8);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 < 1) {
        std__string_Rep_M_destroy((allocator *)(local_b8[0] + -0x18));
      }
    }
    pcVar20 = local_f8[0];
    /* try { // try from 004f6ded to 004f6df1 has its CatchHandler @ 004f77bb */
    pFVar16 = operator_new(0xb0);
    /* try { // try from 004f6dfb to 004f6dff has its CatchHandler @ 004f7a25 */
    FlashAnimationLibrary__FlashAnimationLibrary__00576680(pFVar16, pcVar20);
    *(FlashAnimationLibrary **)(self + 0xa0) = pFVar16;
    if (0 < iVar10) {
      iVar12 = 0;
      do {
        /* try { // try from 004f6efb to 004f711f has its CatchHandler @ 004f77bb */
        uVar17 = FlashAnimationLibrary__GetMovieClip__005731d0(pFVar16, iVar12);
        if (*(int *)(self + 0xf0) == -0x5eef3582) {
          uVar8 = *(ushort *)(self + 0xd0);
          if (uVar8 < *(ushort *)(self + 0xd2))
            goto LAB_004f6ec0;
          uVar8 = *(ushort *)(self + 0xd2) + *(short *)(self + 0xdc);
          uVar25 = (ulong)(byte)self[0xd4];
          pvVar15 = (void *)0x0;
          pvVar23 = *(void **)(self + 0xe0);
          *(ushort *)(self + 0xd2) = uVar8;
          uVar31 = (ulong)uVar8 * 8;
          pvVar27 = malloc(uVar25 + 0x10 + uVar31);
          if (pvVar27 != (void *)0x0) {
            pvVar15 = (void *)((long)pvVar27 + 0x10U +
                               (uVar25 - ((long)pvVar27 + 0x10U) % uVar25) % uVar25);
            *(ulong *)((long)pvVar15 + -0x10) = uVar31;
            *(void **)((long)pvVar15 + -8) = pvVar27;
            if (pvVar23 != (void *)0x0) {
              uVar25 = *(ulong *)((long)pvVar23 + -0x10);
              if (uVar31 <= *(ulong *)((long)pvVar23 + -0x10)) {
                uVar25 = uVar31;
              }
              memcpy(pvVar15, pvVar23, uVar25);
              free(*(void **)((long)pvVar23 + -8));
            }
          }
          pvVar23 = *(void **)(self + 0xe8);
          *(void **)(self + 0xe0) = pvVar15;
          if (pvVar23 != (void *)0x0) {
            uVar28 = *(ushort *)(self + 0xd2);
            uVar25 = (ulong)(byte)self[0xd4];
            pvVar15 = (void *)0x0;
            uVar31 = (ulong)uVar28 * 2;
            pvVar27 = malloc(uVar25 + 0x10 + uVar31);
            if (pvVar27 != (void *)0x0) {
              pvVar15 = (void *)((long)pvVar27 + 0x10U +
                                 (uVar25 - ((long)pvVar27 + 0x10U) % uVar25) % uVar25);
              *(ulong *)((long)pvVar15 + -0x10) = uVar31;
              *(void **)((long)pvVar15 + -8) = pvVar27;
              uVar25 = *(ulong *)((long)pvVar23 + -0x10);
              if (uVar31 <= *(ulong *)((long)pvVar23 + -0x10)) {
                uVar25 = uVar31;
              }
              memcpy(pvVar15, pvVar23, uVar25);
              free(*(void **)((long)pvVar23 + -8));
              uVar28 = *(ushort *)(self + 0xd2);
            }
            uVar8 = *(ushort *)(self + 0xd0);
            *(void **)(self + 0xe8) = pvVar15;
            if (uVar28 <= uVar8)
              goto LAB_004f6ec0;
            while (true) {
              uVar31 = (ulong)uVar8;
              uVar8 = uVar8 + 1;
              *(uint16_t *)((long)pvVar15 + uVar31 * 2) = 0xffff;
              if (uVar28 <= uVar8)
                break;
              pvVar15 = *(void **)(self + 0xe8);
            }
          }
          iVar13 = *(int *)(self + 0xd8);
          uVar8 = *(ushort *)(self + 0xd0);
        } else {
          uVar31 = (ulong)(byte)self[0xd4];
          *(uint32_t *)(self + 0xd8) = 0;
          pvVar15 = malloc(uVar31 + 0x38);
          puVar26 = (uint64_t *)0x0;
          if (pvVar15 != (void *)0x0) {
            puVar26 = (uint64_t *)((uVar31 - ((long)pvVar15 + 0x10U) % uVar31) % uVar31 +
                                   (long)pvVar15 + 0x10U);
            puVar26[-2] = 0x28;
            puVar26[-1] = pvVar15;
          }
          *(uint64_t **)(self + 0xe0) = puVar26;
          uVar8 = 0;
          *puVar26 = 0;
          puVar26[1] = 0;
          puVar26[2] = 0;
          puVar26[3] = 0;
          puVar26[4] = 0;
          *(uint16_t *)(self + 0xd0) = 0;
          *(uint16_t *)(self + 0xd2) = 5;
          *(uint32_t *)(self + 0xf0) = 0xa110ca7e;
          *(uint16_t *)(self + 0xdc) = 5;
        LAB_004f6ec0:
          iVar13 = *(int *)(self + 0xd8);
        }
        if ((iVar13 == 1) && (*(short *)(self + 0xd2) != 0)) {
          puVar30 = *(ushort **)(self + 0xe8);
          sVar9 = 0;
          uVar28 = *puVar30;
          while (uVar28 != 0xffff) {
            puVar30 = puVar30 + 1;
            sVar9 = sVar9 + 1;
            if (sVar9 == *(short *)(self + 0xd2))
              goto LAB_004f6ecd;
            uVar28 = *puVar30;
          }
          *puVar30 = uVar8;
          uVar8 = *(ushort *)(self + 0xd0);
        }
      LAB_004f6ecd:
        iVar12 = iVar12 + 1;
        *(uint64_t *)(*(long *)(self + 0xe0) + (ulong)uVar8 * 8) = uVar17;
        *(short *)(self + 0xd0) = *(short *)(self + 0xd0) + 1;
        if (iVar12 == iVar10)
          break;
        pFVar16 = *(FlashAnimationLibrary **)(self + 0xa0);
      } while (true);
    }
  }
  if ((allocator *)(local_f8[0] + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage) {
    LOCK();
    piVar1 = (int *)(local_f8[0] + -8);
    iVar10 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar10 < 1) {
      std__string_Rep_M_destroy((allocator *)(local_f8[0] + -0x18));
    }
  }
LAB_004f72b3:
  /* try { // try from 004f72c0 to 004f735b has its CatchHandler @ 004f7805 */
  TResourceCreator__AddResourceCreationFunction((TResourceCreator *)ResourceCreator,
                                                CreateSMBPaletteResources, self);
  TResourceCreator__AddResourceDestroyFunction((TResourceCreator *)ResourceCreator,
                                               DestroySMBPaletteResources, self);
  System_GetTimeInMS();
  if ((allocator *)(local_1b8[0] + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage) {
    LOCK();
    piVar1 = (int *)(local_1b8[0] + -8);
    iVar10 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar10 < 1) {
      std__string_Rep_M_destroy((allocator *)(local_1b8[0] + -0x18));
    }
  }
  if ((allocator *)(local_1c8 + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage) {
    LOCK();
    piVar1 = (int *)(local_1c8 + -8);
    iVar10 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar10 < 1) {
      std__string_Rep_M_destroy((allocator *)(local_1c8 + -0x18));
    }
  }
  if ((allocator *)(local_1d8 + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage) {
    LOCK();
    piVar1 = (int *)(local_1d8 + -8);
    iVar10 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar10 < 1) {
      std__string_Rep_M_destroy((allocator *)(local_1d8 + -0x18));
    }
  }
  if ((allocator *)(local_1e8[0] + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage) {
    LOCK();
    piVar1 = (int *)(local_1e8[0] + -8);
    iVar10 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar10 < 1) {
      std__string_Rep_M_destroy((allocator *)(local_1e8[0] + -0x18));
    }
  }
  return;
}

/* ======================================================================
 * SMBPalette__FindAnimatedObstacles  (Ghidra `FindAnimatedObstacles` @ 004f7e40)
 * Signature: uint8_t __thiscall FindAnimatedObstacles(SMBPalette * self)
 * Class: SMBPalette
 * Calls: `AddSMBBossWayPoint`, `CriticalSection__CriticalSection`, `GSetPieceWayPoints__Reset`, `GetRandomINT`, `IsSwitch`, `Matrix4x4__operator_assign`, `QuakeEmitter__QuakeEmitter__00483a70`, `Reset2DPhysics`, `ResizeableArray_SMBLaser__Add`, `RibbonEmitter__RibbonEmitter__0059ac20` (+14 more)
 * Called by: `GSuperMeatBoy__SetCurrentLevel`, `GSuperMeatBoy__Update__00516690`, `PauseGame`, `ShowEditor`
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SMBPalette__FindAnimatedObstacles() */

void __thiscall SMBPalette__FindAnimatedObstacles(SMBPalette *self)

{
  uint8_t ***pppuVar1;
  QuakeEmitter QVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  TileLevel *pTVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint32_t uVar10;
  long lVar11;
  void *pvVar12;
  ushort *puVar13;
  int *piVar14;
  void *pvVar15;
  RibbonEmitter *pRVar16;
  SmokeEmitter *this_00;
  QuakeEmitter *pQVar17;
  SparkEmitter *pSVar18;
  void *pvVar19;
  short sVar20;
  ulong uVar21;
  uint64_t extraout_RDX;
  uint64_t extraout_RDX_00;
  uint64_t extraout_RDX_01;
  uint64_t extraout_RDX_02;
  uint64_t extraout_RDX_03;
  uint64_t extraout_RDX_04;
  uint64_t extraout_RDX_05;
  uint64_t extraout_RDX_06;
  uint64_t extraout_RDX_07;
  uint64_t extraout_RDX_08;
  uint64_t *puVar22;
  ulong uVar23;
  uint64_t extraout_RDX_09;
  uint64_t extraout_RDX_10;
  int iVar24;
  uint8_t ***pppuVar25;
  uint64_t uVar26;
  long lVar27;
  long *plVar28;
  SMBPalette *pSVar29;
  ushort uVar30;
  ushort uVar31;
  long *plVar32;
  long *plVar33;
  bool bVar34;
  byte bVar35;
  float fVar36;
  double dVar37;
  QuakeEmitter *local_4740;
  int local_4734;
  QuakeEmitter *local_4710;
  uint32_t uStack_4704;
  uint32_t local_46d8;
  uint32_t local_46d4;
  uint8_t **local_46d0[9];
  uint64_t local_4688;
  uint32_t local_4680;
  CriticalSection local_4678[40];
  uint32_t local_4650;
  uint32_t uStack_464c;
  uint32_t local_4648;
  uint32_t uStack_4644;
  uint32_t local_4640;
  uint32_t uStack_463c;
  uint32_t local_4638;
  uint32_t uStack_4634;
  uint64_t local_4630;
  uint64_t local_4628;
  uint32_t local_4620;
  uint32_t local_461c;
  uint32_t local_4618;
  uint32_t local_4614;
  uint32_t local_4608;
  uint32_t local_4604;
  uint32_t local_4600;
  uint32_t local_45fc;
  uint32_t local_45f8;
  uint32_t local_45f4;
  uint32_t local_45f0;
  uint32_t local_45ec;
  uint32_t local_45e8;
  uint32_t local_45e4;
  uint32_t local_45e0;
  uint32_t local_45d8;
  uint32_t local_45d4;
  uint32_t local_45d0;
  uint32_t local_45cc;
  uint32_t local_45c8;
  uint32_t local_45c4;
  uint32_t local_45c0;
  SparkEmitter *local_45b8;
  uint8_t **local_45b0[9];
  uint64_t local_4568;
  uint32_t local_4560;
  CriticalSection local_4558[40];
  uint32_t local_4530;
  uint32_t local_452c;
  uint32_t local_4528;
  uint32_t local_4524;
  uint32_t local_4520;
  uint32_t local_451c;
  uint32_t local_4518;
  uint32_t local_4514;
  uint64_t local_4510;
  uint64_t local_4508;
  uint32_t local_4500;
  uint32_t local_44fc;
  uint32_t local_44f8;
  uint32_t local_44f4;
  uint32_t local_44e8;
  uint32_t local_44e4;
  uint32_t local_44e0;
  uint32_t local_44dc;
  uint32_t local_44d8;
  uint32_t local_44d4;
  uint32_t local_44d0;
  uint32_t local_44cc;
  uint32_t local_44c8;
  uint32_t local_44c4;
  uint32_t local_44c0;
  uint32_t local_44b8;
  uint32_t local_44b4;
  uint32_t local_44b0;
  uint32_t local_44ac;
  uint32_t local_44a8;
  uint32_t local_44a4;
  uint32_t local_44a0;
  SparkEmitter *local_4498;
  uint8_t **local_4490[9];
  uint64_t local_4448;
  uint32_t local_4440;
  CriticalSection local_4438[40];
  uint32_t local_4410;
  uint32_t local_440c;
  uint32_t local_4408;
  uint32_t local_4404;
  uint32_t local_4400;
  uint32_t local_43fc;
  uint32_t local_43f8;
  uint32_t local_43f4;
  uint64_t local_43f0;
  uint64_t local_43e8;
  uint32_t local_43e0;
  uint32_t local_43dc;
  uint32_t local_43d8;
  uint32_t local_43d4;
  uint32_t local_43c8;
  uint32_t local_43c4;
  uint32_t local_43c0;
  uint32_t local_43bc;
  uint32_t local_43b8;
  uint32_t local_43b4;
  uint32_t local_43b0;
  uint32_t local_43ac;
  uint32_t local_43a8;
  uint32_t local_43a4;
  uint32_t local_43a0;
  uint32_t local_4398;
  uint32_t local_4394;
  uint32_t local_4390;
  uint32_t local_438c;
  uint32_t local_4388;
  uint32_t local_4384;
  uint32_t local_4380;
  SparkEmitter *local_4378;
  uint8_t **local_4370[9];
  uint64_t local_4328;
  uint32_t local_4320;
  CriticalSection local_4318[40];
  uint32_t local_42f0;
  uint32_t local_42ec;
  uint32_t local_42e8;
  uint32_t local_42e4;
  uint32_t local_42e0;
  uint32_t local_42dc;
  uint32_t local_42d8;
  uint32_t local_42d4;
  uint64_t local_42d0;
  uint64_t local_42c8;
  uint32_t local_42c0;
  uint32_t local_42bc;
  uint32_t local_42b8;
  uint32_t local_42b4;
  uint32_t local_42a8;
  uint32_t local_42a4;
  uint32_t local_42a0;
  uint32_t local_429c;
  uint32_t local_4298;
  uint32_t local_4294;
  uint32_t local_4290;
  uint32_t local_428c;
  uint32_t local_4288;
  uint32_t local_4284;
  uint32_t local_4280;
  uint32_t local_4278;
  uint32_t local_4274;
  uint32_t local_4270;
  uint32_t local_426c;
  uint32_t local_4268;
  uint32_t local_4264;
  uint32_t local_4260;
  SparkEmitter *local_4258;
  uint8_t **local_4250[9];
  uint64_t local_4208;
  uint32_t local_4200;
  CriticalSection local_41f8[40];
  uint32_t local_41d0;
  uint32_t local_41cc;
  uint32_t local_41c8;
  uint32_t local_41c4;
  uint32_t local_41c0;
  uint32_t local_41bc;
  uint32_t local_41b8;
  uint32_t local_41b4;
  uint64_t local_41b0;
  uint64_t local_41a8;
  uint32_t local_41a0;
  uint32_t local_419c;
  uint32_t local_4198;
  uint32_t local_4194;
  uint32_t local_4188;
  uint32_t local_4184;
  uint32_t local_4180;
  uint32_t local_417c;
  uint32_t local_4178;
  uint32_t local_4174;
  uint32_t local_4170;
  uint32_t local_416c;
  uint32_t local_4168;
  uint32_t local_4164;
  uint32_t local_4160;
  uint32_t local_4158;
  uint32_t local_4154;
  uint32_t local_4150;
  uint32_t local_414c;
  uint32_t local_4148;
  uint32_t local_4144;
  uint32_t local_4140;
  SparkEmitter *local_4138;
  uint8_t **local_4130[9];
  uint64_t local_40e8;
  uint32_t local_40e0;
  CriticalSection local_40d8[40];
  uint32_t local_40b0;
  uint32_t local_40ac;
  uint32_t local_40a8;
  uint32_t local_40a4;
  uint32_t local_40a0;
  uint32_t local_409c;
  uint32_t local_4098;
  uint32_t local_4094;
  uint64_t local_4090;
  uint64_t local_4088;
  uint32_t local_4080;
  uint32_t local_407c;
  uint32_t local_4078;
  uint32_t local_4074;
  uint32_t local_4068;
  uint32_t local_4064;
  uint32_t local_4060;
  uint32_t local_405c;
  uint32_t local_4058;
  uint32_t local_4054;
  uint32_t local_4050;
  uint32_t local_404c;
  uint32_t local_4048;
  uint32_t local_4044;
  uint32_t local_4040;
  uint32_t local_4038;
  uint32_t local_4034;
  uint32_t local_4030;
  uint32_t local_402c;
  uint32_t local_4028;
  uint32_t local_4024;
  uint32_t local_4020;
  SparkEmitter *local_4018;
  uint8_t **local_4010[9];
  uint64_t local_3fc8;
  uint32_t local_3fc0;
  CriticalSection local_3fb8[40];
  uint32_t local_3f90;
  uint32_t local_3f8c;
  uint32_t local_3f88;
  uint32_t local_3f84;
  uint32_t local_3f80;
  uint32_t local_3f7c;
  uint32_t local_3f78;
  uint32_t local_3f74;
  uint64_t local_3f70;
  uint64_t local_3f68;
  uint32_t local_3f60;
  uint32_t local_3f5c;
  uint32_t local_3f58;
  uint32_t local_3f54;
  uint32_t local_3f48;
  uint32_t local_3f44;
  uint32_t local_3f40;
  uint32_t local_3f3c;
  uint32_t local_3f38;
  uint32_t local_3f34;
  uint32_t local_3f30;
  uint32_t local_3f2c;
  uint32_t local_3f28;
  uint32_t local_3f24;
  uint32_t local_3f20;
  uint32_t local_3f18;
  uint32_t local_3f14;
  uint32_t local_3f10;
  uint32_t local_3f0c;
  uint32_t local_3f08;
  uint32_t local_3f04;
  uint32_t local_3f00;
  SparkEmitter *local_3ef8;
  uint8_t **local_3ef0[9];
  uint64_t local_3ea8;
  uint32_t local_3ea0;
  CriticalSection local_3e98[40];
  uint32_t local_3e70;
  uint32_t local_3e6c;
  uint32_t local_3e68;
  uint32_t local_3e64;
  uint32_t local_3e60;
  uint32_t local_3e5c;
  uint32_t local_3e58;
  uint32_t local_3e54;
  uint64_t local_3e50;
  uint64_t local_3e48;
  uint32_t local_3e40;
  uint32_t local_3e3c;
  uint32_t local_3e38;
  uint32_t local_3e34;
  uint32_t local_3e28;
  uint32_t local_3e24;
  uint32_t local_3e20;
  uint32_t local_3e1c;
  uint32_t local_3e18;
  uint32_t local_3e14;
  uint32_t local_3e10;
  uint32_t local_3e0c;
  uint32_t local_3e08;
  uint32_t local_3e04;
  uint32_t local_3e00;
  uint32_t local_3df8;
  uint32_t local_3df4;
  uint32_t local_3df0;
  uint32_t local_3dec;
  uint32_t local_3de8;
  uint32_t local_3de4;
  uint32_t local_3de0;
  SparkEmitter *local_3dd8;
  uint8_t **local_3dd0[9];
  uint64_t local_3d88;
  uint32_t local_3d80;
  CriticalSection local_3d78[40];
  uint32_t local_3d50;
  uint32_t local_3d4c;
  uint32_t local_3d48;
  uint32_t local_3d44;
  uint32_t local_3d40;
  uint32_t local_3d3c;
  uint32_t local_3d38;
  uint32_t local_3d34;
  uint64_t local_3d30;
  uint64_t local_3d28;
  uint32_t local_3d20;
  uint32_t local_3d1c;
  uint32_t local_3d18;
  uint32_t local_3d14;
  uint32_t local_3d08;
  uint32_t local_3d04;
  uint32_t local_3d00;
  uint32_t local_3cfc;
  uint32_t local_3cf8;
  uint32_t local_3cf4;
  uint32_t local_3cf0;
  uint32_t local_3cec;
  uint32_t local_3ce8;
  uint32_t local_3ce4;
  uint32_t local_3ce0;
  uint32_t local_3cd8;
  uint32_t local_3cd4;
  uint32_t local_3cd0;
  uint32_t local_3ccc;
  uint32_t local_3cc8;
  uint32_t local_3cc4;
  uint32_t local_3cc0;
  SparkEmitter *local_3cb8;
  uint8_t **local_3cb0[9];
  uint64_t local_3c68;
  uint32_t local_3c60;
  CriticalSection local_3c58[40];
  uint32_t local_3c30;
  uint32_t local_3c2c;
  uint32_t local_3c28;
  uint32_t local_3c24;
  uint32_t local_3c20;
  uint32_t local_3c1c;
  uint32_t local_3c18;
  uint32_t local_3c14;
  uint64_t local_3c10;
  uint64_t local_3c08;
  uint32_t local_3c00;
  uint32_t local_3bfc;
  uint32_t local_3bf8;
  uint32_t local_3bf4;
  uint32_t local_3be8;
  uint32_t local_3be4;
  uint32_t local_3be0;
  uint32_t local_3bdc;
  uint32_t local_3bd8;
  uint32_t local_3bd4;
  uint32_t local_3bd0;
  uint32_t local_3bcc;
  uint32_t local_3bc8;
  uint32_t local_3bc4;
  uint32_t local_3bc0;
  uint32_t local_3bb8;
  uint32_t local_3bb4;
  uint32_t local_3bb0;
  uint32_t local_3bac;
  uint32_t local_3ba8;
  uint32_t local_3ba4;
  uint32_t local_3ba0;
  SparkEmitter *local_3b98;
  uint8_t **local_3b90;
  long local_3b88;
  uint32_t local_3b80;
  float local_3b7c;
  uint32_t local_3b78;
  uint32_t local_3b74;
  uint32_t local_3b70;
  uint32_t local_3b6c;
  uint32_t local_3b68;
  uint32_t local_3b64;
  uint8_t **local_3b60[9];
  uint64_t local_3b18;
  uint32_t local_3b10;
  CriticalSection local_3b08[40];
  uint32_t local_3ae0;
  uint32_t local_3adc;
  uint32_t local_3ad8;
  uint32_t local_3ad4;
  uint32_t local_3ad0;
  uint32_t local_3acc;
  uint32_t local_3ac8;
  uint32_t local_3ac4;
  uint64_t local_3ac0;
  uint64_t local_3ab8;
  uint32_t local_3ab0;
  uint32_t local_3aac;
  uint32_t local_3aa8;
  uint32_t local_3aa4;
  uint32_t local_3a98;
  uint32_t local_3a94;
  uint32_t local_3a90;
  uint32_t local_3a8c;
  uint32_t local_3a88;
  uint32_t local_3a84;
  uint32_t local_3a80;
  uint32_t local_3a7c;
  uint32_t local_3a78;
  uint32_t local_3a74;
  uint32_t local_3a70;
  uint32_t local_3a68;
  uint32_t local_3a64;
  uint32_t local_3a60;
  uint32_t local_3a5c;
  uint32_t local_3a58;
  uint32_t local_3a54;
  uint32_t local_3a50;
  RibbonEmitter *local_3a48;
  uint8_t **local_3a40[9];
  uint64_t local_39f8;
  uint32_t local_39f0;
  CriticalSection local_39e8[40];
  uint32_t local_39c0;
  uint32_t local_39bc;
  uint32_t local_39b8;
  uint32_t local_39b4;
  uint32_t local_39b0;
  uint32_t local_39ac;
  uint32_t local_39a8;
  uint32_t local_39a4;
  uint64_t local_39a0;
  uint64_t local_3998;
  uint32_t local_3990;
  uint32_t local_398c;
  uint32_t local_3988;
  uint32_t local_3984;
  uint32_t local_3978;
  uint32_t local_3974;
  uint32_t local_3970;
  uint32_t local_396c;
  uint32_t local_3968;
  uint32_t local_3964;
  uint32_t local_3960;
  uint32_t local_395c;
  uint32_t local_3958;
  uint32_t local_3954;
  uint32_t local_3950;
  uint32_t local_3948;
  uint32_t local_3944;
  uint32_t local_3940;
  uint32_t local_393c;
  uint32_t local_3938;
  uint32_t local_3934;
  uint32_t local_3930;
  RibbonEmitter *local_3928;
  uint8_t **local_3920[9];
  uint64_t local_38d8;
  uint32_t local_38d0;
  CriticalSection local_38c8[40];
  uint32_t local_38a0;
  uint32_t local_389c;
  uint32_t local_3898;
  uint32_t local_3894;
  uint32_t local_3890;
  uint32_t local_388c;
  uint32_t local_3888;
  uint32_t local_3884;
  uint64_t local_3880;
  uint64_t local_3878;
  uint32_t local_3870;
  uint32_t local_386c;
  uint32_t local_3868;
  uint32_t local_3864;
  uint32_t local_3858;
  uint32_t local_3854;
  uint32_t local_3850;
  uint32_t local_384c;
  uint32_t local_3848;
  uint32_t local_3844;
  uint32_t local_3840;
  uint32_t local_383c;
  uint32_t local_3838;
  uint32_t local_3834;
  uint32_t local_3830;
  uint32_t local_3828;
  uint32_t local_3824;
  uint32_t local_3820;
  uint32_t local_381c;
  uint32_t local_3818;
  uint32_t local_3814;
  uint32_t local_3810;
  RibbonEmitter *local_3808;
  uint8_t **local_3800[9];
  uint64_t local_37b8;
  uint32_t local_37b0;
  CriticalSection local_37a8[40];
  uint32_t local_3780;
  uint32_t local_377c;
  uint32_t local_3778;
  uint32_t local_3774;
  uint32_t local_3770;
  uint32_t local_376c;
  uint32_t local_3768;
  uint32_t local_3764;
  uint64_t local_3760;
  uint64_t local_3758;
  uint32_t local_3750;
  uint32_t local_374c;
  uint32_t local_3748;
  uint32_t local_3744;
  uint32_t local_3738;
  uint32_t local_3734;
  uint32_t local_3730;
  uint32_t local_372c;
  uint32_t local_3728;
  uint32_t local_3724;
  uint32_t local_3720;
  uint32_t local_371c;
  uint32_t local_3718;
  uint32_t local_3714;
  uint32_t local_3710;
  uint32_t local_3708;
  uint32_t local_3704;
  uint32_t local_3700;
  uint32_t local_36fc;
  uint32_t local_36f8;
  uint32_t local_36f4;
  uint32_t local_36f0;
  RibbonEmitter *local_36e8;
  uint8_t **local_36e0[9];
  uint64_t local_3698;
  uint32_t local_3690;
  CriticalSection local_3688[40];
  uint32_t local_3660;
  uint32_t local_365c;
  uint32_t local_3658;
  uint32_t local_3654;
  uint32_t local_3650;
  uint32_t local_364c;
  uint32_t local_3648;
  uint32_t local_3644;
  uint64_t local_3640;
  uint64_t local_3638;
  uint32_t local_3630;
  uint32_t local_362c;
  uint32_t local_3628;
  uint32_t local_3624;
  uint32_t local_3618;
  uint32_t local_3614;
  uint32_t local_3610;
  uint32_t local_360c;
  uint32_t local_3608;
  uint32_t local_3604;
  uint32_t local_3600;
  uint32_t local_35fc;
  uint32_t local_35f8;
  uint32_t local_35f4;
  uint32_t local_35f0;
  uint32_t local_35e8;
  uint32_t local_35e4;
  uint32_t local_35e0;
  uint32_t local_35dc;
  uint32_t local_35d8;
  uint32_t local_35d4;
  uint32_t local_35d0;
  RibbonEmitter *local_35c8;
  uint8_t **local_35c0[9];
  uint64_t local_3578;
  uint32_t local_3570;
  CriticalSection local_3568[40];
  uint32_t local_3540;
  uint32_t local_353c;
  uint32_t local_3538;
  uint32_t local_3534;
  uint32_t local_3530;
  uint32_t local_352c;
  uint32_t local_3528;
  uint32_t local_3524;
  uint64_t local_3520;
  uint64_t local_3518;
  uint32_t local_3510;
  uint32_t local_350c;
  uint32_t local_3508;
  uint32_t local_3504;
  uint32_t local_34f8;
  uint32_t local_34f4;
  uint32_t local_34f0;
  uint32_t local_34ec;
  uint32_t local_34e8;
  uint32_t local_34e4;
  uint32_t local_34e0;
  uint32_t local_34dc;
  uint32_t local_34d8;
  uint32_t local_34d4;
  uint32_t local_34d0;
  uint32_t local_34c8;
  uint32_t local_34c4;
  uint32_t local_34c0;
  uint32_t local_34bc;
  uint32_t local_34b8;
  uint32_t local_34b4;
  uint32_t local_34b0;
  RibbonEmitter *local_34a8;
  uint8_t **local_34a0[9];
  uint64_t local_3458;
  uint32_t local_3450;
  CriticalSection local_3448[40];
  uint32_t local_3420;
  uint32_t local_341c;
  uint32_t local_3418;
  uint32_t local_3414;
  uint32_t local_3410;
  uint32_t local_340c;
  uint32_t local_3408;
  uint32_t local_3404;
  uint64_t local_3400;
  uint64_t local_33f8;
  uint32_t local_33f0;
  uint32_t local_33ec;
  uint32_t local_33e8;
  uint32_t local_33e4;
  uint32_t local_33d8;
  uint32_t local_33d4;
  uint32_t local_33d0;
  uint32_t local_33cc;
  uint32_t local_33c8;
  uint32_t local_33c4;
  uint32_t local_33c0;
  uint32_t local_33bc;
  uint32_t local_33b8;
  uint32_t local_33b4;
  uint32_t local_33b0;
  uint32_t local_33a8;
  uint32_t local_33a4;
  uint32_t local_33a0;
  uint32_t local_339c;
  uint32_t local_3398;
  uint32_t local_3394;
  uint32_t local_3390;
  RibbonEmitter *local_3388;
  uint8_t **local_3380[9];
  uint64_t local_3338;
  uint32_t local_3330;
  CriticalSection local_3328[40];
  uint32_t local_3300;
  uint32_t local_32fc;
  uint32_t local_32f8;
  uint32_t local_32f4;
  uint32_t local_32f0;
  uint32_t local_32ec;
  uint32_t local_32e8;
  uint32_t local_32e4;
  uint64_t local_32e0;
  uint64_t local_32d8;
  uint32_t local_32d0;
  uint32_t local_32cc;
  uint32_t local_32c8;
  uint32_t local_32c4;
  uint32_t local_32b8;
  uint32_t local_32b4;
  uint32_t local_32b0;
  uint32_t local_32ac;
  uint32_t local_32a8;
  uint32_t local_32a4;
  uint32_t local_32a0;
  uint32_t local_329c;
  uint32_t local_3298;
  uint32_t local_3294;
  uint32_t local_3290;
  uint32_t local_3288;
  uint32_t local_3284;
  uint32_t local_3280;
  uint32_t local_327c;
  uint32_t local_3278;
  uint32_t local_3274;
  uint32_t local_3270;
  RibbonEmitter *local_3268;
  uint8_t **local_3260[9];
  uint64_t local_3218;
  uint32_t local_3210;
  CriticalSection local_3208[40];
  uint32_t local_31e0;
  uint32_t local_31dc;
  uint32_t local_31d8;
  uint32_t local_31d4;
  uint32_t local_31d0;
  uint32_t local_31cc;
  uint32_t local_31c8;
  uint32_t local_31c4;
  uint64_t local_31c0;
  uint64_t local_31b8;
  uint32_t local_31b0;
  uint32_t local_31ac;
  uint32_t local_31a8;
  uint32_t local_31a4;
  uint32_t local_3198;
  uint32_t local_3194;
  uint32_t local_3190;
  uint32_t local_318c;
  uint32_t local_3188;
  uint32_t local_3184;
  uint32_t local_3180;
  uint32_t local_317c;
  uint32_t local_3178;
  uint32_t local_3174;
  uint32_t local_3170;
  uint32_t local_3168;
  uint32_t local_3164;
  uint32_t local_3160;
  uint32_t local_315c;
  uint32_t local_3158;
  uint32_t local_3154;
  uint32_t local_3150;
  RibbonEmitter *local_3148;
  uint8_t **local_3140[9];
  uint64_t local_30f8;
  uint32_t local_30f0;
  CriticalSection local_30e8[40];
  uint32_t local_30c0;
  uint32_t local_30bc;
  uint32_t local_30b8;
  uint32_t local_30b4;
  uint32_t local_30b0;
  uint32_t local_30ac;
  uint32_t local_30a8;
  uint32_t local_30a4;
  uint64_t local_30a0;
  uint64_t local_3098;
  uint32_t local_3090;
  uint32_t local_308c;
  uint32_t local_3088;
  uint32_t local_3084;
  uint32_t local_3078;
  uint32_t local_3074;
  uint32_t local_3070;
  uint32_t local_306c;
  uint32_t local_3068;
  uint32_t local_3064;
  uint32_t local_3060;
  uint32_t local_305c;
  uint32_t local_3058;
  uint32_t local_3054;
  uint32_t local_3050;
  uint32_t local_3048;
  uint32_t local_3044;
  uint32_t local_3040;
  uint32_t local_303c;
  uint32_t local_3038;
  uint32_t local_3034;
  uint32_t local_3030;
  RibbonEmitter *local_3028;
  long local_3018;
  uint32_t local_3010;
  float local_300c;
  uint32_t local_3008;
  uint32_t local_3004;
  uint32_t local_3000;
  uint32_t local_2ffc;
  uint32_t local_2ff8;
  uint32_t local_2ff4;
  uint8_t **local_2ff0[9];
  uint64_t local_2fa8;
  uint32_t local_2fa0;
  CriticalSection local_2f98[40];
  uint32_t local_2f70;
  uint32_t local_2f6c;
  uint32_t local_2f68;
  uint32_t local_2f64;
  uint32_t local_2f60;
  uint32_t local_2f5c;
  uint32_t local_2f58;
  uint32_t local_2f54;
  uint64_t local_2f50;
  uint64_t local_2f48;
  uint32_t local_2f40;
  uint32_t local_2f3c;
  uint32_t local_2f38;
  uint32_t local_2f34;
  uint32_t local_2f28;
  uint32_t local_2f24;
  uint32_t local_2f20;
  uint32_t local_2f1c;
  uint32_t local_2f18;
  uint32_t local_2f14;
  uint32_t local_2f10;
  uint32_t local_2f0c;
  uint32_t local_2f08;
  uint32_t local_2f04;
  uint32_t local_2f00;
  uint32_t local_2ef8;
  uint32_t local_2ef4;
  uint32_t local_2ef0;
  uint32_t local_2eec;
  uint32_t local_2ee8;
  uint32_t local_2ee4;
  uint32_t local_2ee0;
  uint64_t local_2ed8;
  uint8_t **local_2ed0[9];
  uint64_t local_2e88;
  uint32_t local_2e80;
  CriticalSection local_2e78[40];
  uint32_t local_2e50;
  uint32_t local_2e4c;
  uint32_t local_2e48;
  uint32_t local_2e44;
  uint32_t local_2e40;
  uint32_t local_2e3c;
  uint32_t local_2e38;
  uint32_t local_2e34;
  uint64_t local_2e30;
  uint64_t local_2e28;
  uint32_t local_2e20;
  uint32_t local_2e1c;
  uint32_t local_2e18;
  uint32_t local_2e14;
  uint32_t local_2e08;
  uint32_t local_2e04;
  uint32_t local_2e00;
  uint32_t local_2dfc;
  uint32_t local_2df8;
  uint32_t local_2df4;
  uint32_t local_2df0;
  uint32_t local_2dec;
  uint32_t local_2de8;
  uint32_t local_2de4;
  uint32_t local_2de0;
  uint32_t local_2dd8;
  uint32_t local_2dd4;
  uint32_t local_2dd0;
  uint32_t local_2dcc;
  uint32_t local_2dc8;
  uint32_t local_2dc4;
  uint32_t local_2dc0;
  uint64_t local_2db8;
  uint8_t **local_2db0[9];
  uint64_t local_2d68;
  uint32_t local_2d60;
  CriticalSection local_2d58[40];
  uint32_t local_2d30;
  uint32_t local_2d2c;
  uint32_t local_2d28;
  uint32_t local_2d24;
  uint32_t local_2d20;
  uint32_t local_2d1c;
  uint32_t local_2d18;
  uint32_t local_2d14;
  uint64_t local_2d10;
  uint64_t local_2d08;
  uint32_t local_2d00;
  uint32_t local_2cfc;
  uint32_t local_2cf8;
  uint32_t local_2cf4;
  uint32_t local_2ce8;
  uint32_t local_2ce4;
  uint32_t local_2ce0;
  uint32_t local_2cdc;
  uint32_t local_2cd8;
  uint32_t local_2cd4;
  uint32_t local_2cd0;
  uint32_t local_2ccc;
  uint32_t local_2cc8;
  uint32_t local_2cc4;
  uint32_t local_2cc0;
  uint32_t local_2cb8;
  uint32_t local_2cb4;
  uint32_t local_2cb0;
  uint32_t local_2cac;
  uint32_t local_2ca8;
  uint32_t local_2ca4;
  uint32_t local_2ca0;
  uint64_t local_2c98;
  uint8_t **local_2c90[9];
  uint64_t local_2c48;
  uint32_t local_2c40;
  CriticalSection local_2c38[40];
  uint32_t local_2c10;
  uint32_t local_2c0c;
  uint32_t local_2c08;
  uint32_t local_2c04;
  uint32_t local_2c00;
  uint32_t local_2bfc;
  uint32_t local_2bf8;
  uint32_t local_2bf4;
  uint64_t local_2bf0;
  uint64_t local_2be8;
  uint32_t local_2be0;
  uint32_t local_2bdc;
  uint32_t local_2bd8;
  uint32_t local_2bd4;
  uint32_t local_2bc8;
  uint32_t local_2bc4;
  uint32_t local_2bc0;
  uint32_t local_2bbc;
  uint32_t local_2bb8;
  uint32_t local_2bb4;
  uint32_t local_2bb0;
  uint32_t local_2bac;
  uint32_t local_2ba8;
  uint32_t local_2ba4;
  uint32_t local_2ba0;
  uint32_t local_2b98;
  uint32_t local_2b94;
  uint32_t local_2b90;
  uint32_t local_2b8c;
  uint32_t local_2b88;
  uint32_t local_2b84;
  uint32_t local_2b80;
  uint64_t local_2b78;
  uint8_t **local_2b70[9];
  uint64_t local_2b28;
  uint32_t local_2b20;
  CriticalSection local_2b18[40];
  uint32_t local_2af0;
  uint32_t local_2aec;
  uint32_t local_2ae8;
  uint32_t local_2ae4;
  uint32_t local_2ae0;
  uint32_t local_2adc;
  uint32_t local_2ad8;
  uint32_t local_2ad4;
  uint64_t local_2ad0;
  uint64_t local_2ac8;
  uint32_t local_2ac0;
  uint32_t local_2abc;
  uint32_t local_2ab8;
  uint32_t local_2ab4;
  uint32_t local_2aa8;
  uint32_t local_2aa4;
  uint32_t local_2aa0;
  uint32_t local_2a9c;
  uint32_t local_2a98;
  uint32_t local_2a94;
  uint32_t local_2a90;
  uint32_t local_2a8c;
  uint32_t local_2a88;
  uint32_t local_2a84;
  uint32_t local_2a80;
  uint32_t local_2a78;
  uint32_t local_2a74;
  uint32_t local_2a70;
  uint32_t local_2a6c;
  uint32_t local_2a68;
  uint32_t local_2a64;
  uint32_t local_2a60;
  uint64_t local_2a58;
  uint8_t **local_2a50[9];
  uint64_t local_2a08;
  uint32_t local_2a00;
  CriticalSection local_29f8[40];
  uint32_t local_29d0;
  uint32_t local_29cc;
  uint32_t local_29c8;
  uint32_t local_29c4;
  uint32_t local_29c0;
  uint32_t local_29bc;
  uint32_t local_29b8;
  uint32_t local_29b4;
  uint64_t local_29b0;
  uint64_t local_29a8;
  uint32_t local_29a0;
  uint32_t local_299c;
  uint32_t local_2998;
  uint32_t local_2994;
  uint32_t local_2988;
  uint32_t local_2984;
  uint32_t local_2980;
  uint32_t local_297c;
  uint32_t local_2978;
  uint32_t local_2974;
  uint32_t local_2970;
  uint32_t local_296c;
  uint32_t local_2968;
  uint32_t local_2964;
  uint32_t local_2960;
  uint32_t local_2958;
  uint32_t local_2954;
  uint32_t local_2950;
  uint32_t local_294c;
  uint32_t local_2948;
  uint32_t local_2944;
  uint32_t local_2940;
  uint64_t local_2938;
  uint8_t **local_2930[9];
  uint64_t local_28e8;
  uint32_t local_28e0;
  CriticalSection local_28d8[40];
  uint32_t local_28b0;
  uint32_t local_28ac;
  uint32_t local_28a8;
  uint32_t local_28a4;
  uint32_t local_28a0;
  uint32_t local_289c;
  uint32_t local_2898;
  uint32_t local_2894;
  uint64_t local_2890;
  uint64_t local_2888;
  uint32_t local_2880;
  uint32_t local_287c;
  uint32_t local_2878;
  uint32_t local_2874;
  uint32_t local_2868;
  uint32_t local_2864;
  uint32_t local_2860;
  uint32_t local_285c;
  uint32_t local_2858;
  uint32_t local_2854;
  uint32_t local_2850;
  uint32_t local_284c;
  uint32_t local_2848;
  uint32_t local_2844;
  uint32_t local_2840;
  uint32_t local_2838;
  uint32_t local_2834;
  uint32_t local_2830;
  uint32_t local_282c;
  uint32_t local_2828;
  uint32_t local_2824;
  uint32_t local_2820;
  uint64_t local_2818;
  uint8_t **local_2810[9];
  uint64_t local_27c8;
  uint32_t local_27c0;
  CriticalSection local_27b8[40];
  uint32_t local_2790;
  uint32_t local_278c;
  uint32_t local_2788;
  uint32_t local_2784;
  uint32_t local_2780;
  uint32_t local_277c;
  uint32_t local_2778;
  uint32_t local_2774;
  uint64_t local_2770;
  uint64_t local_2768;
  uint32_t local_2760;
  uint32_t local_275c;
  uint32_t local_2758;
  uint32_t local_2754;
  uint32_t local_2748;
  uint32_t local_2744;
  uint32_t local_2740;
  uint32_t local_273c;
  uint32_t local_2738;
  uint32_t local_2734;
  uint32_t local_2730;
  uint32_t local_272c;
  uint32_t local_2728;
  uint32_t local_2724;
  uint32_t local_2720;
  uint32_t local_2718;
  uint32_t local_2714;
  uint32_t local_2710;
  uint32_t local_270c;
  uint32_t local_2708;
  uint32_t local_2704;
  uint32_t local_2700;
  uint64_t local_26f8;
  uint8_t **local_26f0[9];
  uint64_t local_26a8;
  uint32_t local_26a0;
  CriticalSection local_2698[40];
  uint32_t local_2670;
  uint32_t local_266c;
  uint32_t local_2668;
  uint32_t local_2664;
  uint32_t local_2660;
  uint32_t local_265c;
  uint32_t local_2658;
  uint32_t local_2654;
  uint64_t local_2650;
  uint64_t local_2648;
  uint32_t local_2640;
  uint32_t local_263c;
  uint32_t local_2638;
  uint32_t local_2634;
  uint32_t local_2628;
  uint32_t local_2624;
  uint32_t local_2620;
  uint32_t local_261c;
  uint32_t local_2618;
  uint32_t local_2614;
  uint32_t local_2610;
  uint32_t local_260c;
  uint32_t local_2608;
  uint32_t local_2604;
  uint32_t local_2600;
  uint32_t local_25f8;
  uint32_t local_25f4;
  uint32_t local_25f0;
  uint32_t local_25ec;
  uint32_t local_25e8;
  uint32_t local_25e4;
  uint32_t local_25e0;
  uint64_t local_25d8;
  uint8_t **local_25d0[9];
  uint64_t local_2588;
  uint32_t local_2580;
  CriticalSection local_2578[40];
  uint32_t local_2550;
  uint32_t local_254c;
  uint32_t local_2548;
  uint32_t local_2544;
  uint32_t local_2540;
  uint32_t local_253c;
  uint32_t local_2538;
  uint32_t local_2534;
  uint64_t local_2530;
  uint64_t local_2528;
  uint32_t local_2520;
  uint32_t local_251c;
  uint32_t local_2518;
  uint32_t local_2514;
  uint32_t local_2508;
  uint32_t local_2504;
  uint32_t local_2500;
  uint32_t local_24fc;
  uint32_t local_24f8;
  uint32_t local_24f4;
  uint32_t local_24f0;
  uint32_t local_24ec;
  uint32_t local_24e8;
  uint32_t local_24e4;
  uint32_t local_24e0;
  uint32_t local_24d8;
  uint32_t local_24d4;
  uint32_t local_24d0;
  uint32_t local_24cc;
  uint32_t local_24c8;
  uint32_t local_24c4;
  uint32_t local_24c0;
  uint64_t local_24b8;
  long local_24a8;
  uint32_t local_24a0;
  float local_249c;
  uint32_t local_2498;
  uint32_t local_2494;
  uint32_t local_2490;
  uint32_t local_248c;
  uint32_t local_2488;
  uint32_t local_2484;
  uint8_t **local_2480[9];
  uint64_t local_2438;
  uint32_t local_2430;
  CriticalSection local_2428[40];
  uint32_t local_2400;
  uint32_t local_23fc;
  uint32_t local_23f8;
  uint32_t local_23f4;
  uint32_t local_23f0;
  uint32_t local_23ec;
  uint32_t local_23e8;
  uint32_t local_23e4;
  uint64_t local_23e0;
  uint64_t local_23d8;
  uint32_t local_23d0;
  uint32_t local_23cc;
  uint32_t local_23c8;
  uint32_t local_23c4;
  uint32_t local_23b8;
  uint32_t local_23b4;
  uint32_t local_23b0;
  uint32_t local_23ac;
  uint32_t local_23a8;
  uint32_t local_23a4;
  uint32_t local_23a0;
  uint32_t local_239c;
  uint32_t local_2398;
  uint32_t local_2394;
  uint32_t local_2390;
  uint32_t local_2388;
  uint32_t local_2384;
  uint32_t local_2380;
  uint32_t local_237c;
  uint32_t local_2378;
  uint32_t local_2374;
  uint32_t local_2370;
  RibbonEmitter *local_2368;
  uint8_t **local_2360[9];
  uint64_t local_2318;
  uint32_t local_2310;
  CriticalSection local_2308[40];
  uint32_t local_22e0;
  uint32_t local_22dc;
  uint32_t local_22d8;
  uint32_t local_22d4;
  uint32_t local_22d0;
  uint32_t local_22cc;
  uint32_t local_22c8;
  uint32_t local_22c4;
  uint64_t local_22c0;
  uint64_t local_22b8;
  uint32_t local_22b0;
  uint32_t local_22ac;
  uint32_t local_22a8;
  uint32_t local_22a4;
  uint32_t local_2298;
  uint32_t local_2294;
  uint32_t local_2290;
  uint32_t local_228c;
  uint32_t local_2288;
  uint32_t local_2284;
  uint32_t local_2280;
  uint32_t local_227c;
  uint32_t local_2278;
  uint32_t local_2274;
  uint32_t local_2270;
  uint32_t local_2268;
  uint32_t local_2264;
  uint32_t local_2260;
  uint32_t local_225c;
  uint32_t local_2258;
  uint32_t local_2254;
  uint32_t local_2250;
  RibbonEmitter *local_2248;
  uint8_t **local_2240[9];
  uint64_t local_21f8;
  uint32_t local_21f0;
  CriticalSection local_21e8[40];
  uint32_t local_21c0;
  uint32_t local_21bc;
  uint32_t local_21b8;
  uint32_t local_21b4;
  uint32_t local_21b0;
  uint32_t local_21ac;
  uint32_t local_21a8;
  uint32_t local_21a4;
  uint64_t local_21a0;
  uint64_t local_2198;
  uint32_t local_2190;
  uint32_t local_218c;
  uint32_t local_2188;
  uint32_t local_2184;
  uint32_t local_2178;
  uint32_t local_2174;
  uint32_t local_2170;
  uint32_t local_216c;
  uint32_t local_2168;
  uint32_t local_2164;
  uint32_t local_2160;
  uint32_t local_215c;
  uint32_t local_2158;
  uint32_t local_2154;
  uint32_t local_2150;
  uint32_t local_2148;
  uint32_t local_2144;
  uint32_t local_2140;
  uint32_t local_213c;
  uint32_t local_2138;
  uint32_t local_2134;
  uint32_t local_2130;
  RibbonEmitter *local_2128;
  uint8_t **local_2120[9];
  uint64_t local_20d8;
  uint32_t local_20d0;
  CriticalSection local_20c8[40];
  uint32_t local_20a0;
  uint32_t local_209c;
  uint32_t local_2098;
  uint32_t local_2094;
  uint32_t local_2090;
  uint32_t local_208c;
  uint32_t local_2088;
  uint32_t local_2084;
  uint64_t local_2080;
  uint64_t local_2078;
  uint32_t local_2070;
  uint32_t local_206c;
  uint32_t local_2068;
  uint32_t local_2064;
  uint32_t local_2058;
  uint32_t local_2054;
  uint32_t local_2050;
  uint32_t local_204c;
  uint32_t local_2048;
  uint32_t local_2044;
  uint32_t local_2040;
  uint32_t local_203c;
  uint32_t local_2038;
  uint32_t local_2034;
  uint32_t local_2030;
  uint32_t local_2028;
  uint32_t local_2024;
  uint32_t local_2020;
  uint32_t local_201c;
  uint32_t local_2018;
  uint32_t local_2014;
  uint32_t local_2010;
  RibbonEmitter *local_2008;
  uint8_t **local_2000[9];
  uint64_t local_1fb8;
  uint32_t local_1fb0;
  CriticalSection local_1fa8[40];
  uint32_t local_1f80;
  uint32_t local_1f7c;
  uint32_t local_1f78;
  uint32_t local_1f74;
  uint32_t local_1f70;
  uint32_t local_1f6c;
  uint32_t local_1f68;
  uint32_t local_1f64;
  uint64_t local_1f60;
  uint64_t local_1f58;
  uint32_t local_1f50;
  uint32_t local_1f4c;
  uint32_t local_1f48;
  uint32_t local_1f44;
  uint32_t local_1f38;
  uint32_t local_1f34;
  uint32_t local_1f30;
  uint32_t local_1f2c;
  uint32_t local_1f28;
  uint32_t local_1f24;
  uint32_t local_1f20;
  uint32_t local_1f1c;
  uint32_t local_1f18;
  uint32_t local_1f14;
  uint32_t local_1f10;
  uint32_t local_1f08;
  uint32_t local_1f04;
  uint32_t local_1f00;
  uint32_t local_1efc;
  uint32_t local_1ef8;
  uint32_t local_1ef4;
  uint32_t local_1ef0;
  RibbonEmitter *local_1ee8;
  uint8_t **local_1ee0[9];
  uint64_t local_1e98;
  uint32_t local_1e90;
  CriticalSection local_1e88[40];
  uint32_t local_1e60;
  uint32_t local_1e5c;
  uint32_t local_1e58;
  uint32_t local_1e54;
  uint32_t local_1e50;
  uint32_t local_1e4c;
  uint32_t local_1e48;
  uint32_t local_1e44;
  uint64_t local_1e40;
  uint64_t local_1e38;
  uint32_t local_1e30;
  uint32_t local_1e2c;
  uint32_t local_1e28;
  uint32_t local_1e24;
  uint32_t local_1e18;
  uint32_t local_1e14;
  uint32_t local_1e10;
  uint32_t local_1e0c;
  uint32_t local_1e08;
  uint32_t local_1e04;
  uint32_t local_1e00;
  uint32_t local_1dfc;
  uint32_t local_1df8;
  uint32_t local_1df4;
  uint32_t local_1df0;
  uint32_t local_1de8;
  uint32_t local_1de4;
  uint32_t local_1de0;
  uint32_t local_1ddc;
  uint32_t local_1dd8;
  uint32_t local_1dd4;
  uint32_t local_1dd0;
  RibbonEmitter *local_1dc8;
  uint8_t **local_1dc0[9];
  uint64_t local_1d78;
  uint32_t local_1d70;
  CriticalSection local_1d68[40];
  uint32_t local_1d40;
  uint32_t local_1d3c;
  uint32_t local_1d38;
  uint32_t local_1d34;
  uint32_t local_1d30;
  uint32_t local_1d2c;
  uint32_t local_1d28;
  uint32_t local_1d24;
  uint64_t local_1d20;
  uint64_t local_1d18;
  uint32_t local_1d10;
  uint32_t local_1d0c;
  uint32_t local_1d08;
  uint32_t local_1d04;
  uint32_t local_1cf8;
  uint32_t local_1cf4;
  uint32_t local_1cf0;
  uint32_t local_1cec;
  uint32_t local_1ce8;
  uint32_t local_1ce4;
  uint32_t local_1ce0;
  uint32_t local_1cdc;
  uint32_t local_1cd8;
  uint32_t local_1cd4;
  uint32_t local_1cd0;
  uint32_t local_1cc8;
  uint32_t local_1cc4;
  uint32_t local_1cc0;
  uint32_t local_1cbc;
  uint32_t local_1cb8;
  uint32_t local_1cb4;
  uint32_t local_1cb0;
  RibbonEmitter *local_1ca8;
  uint8_t **local_1ca0[9];
  uint64_t local_1c58;
  uint32_t local_1c50;
  CriticalSection local_1c48[40];
  uint32_t local_1c20;
  uint32_t local_1c1c;
  uint32_t local_1c18;
  uint32_t local_1c14;
  uint32_t local_1c10;
  uint32_t local_1c0c;
  uint32_t local_1c08;
  uint32_t local_1c04;
  uint64_t local_1c00;
  uint64_t local_1bf8;
  uint32_t local_1bf0;
  uint32_t local_1bec;
  uint32_t local_1be8;
  uint32_t local_1be4;
  uint32_t local_1bd8;
  uint32_t local_1bd4;
  uint32_t local_1bd0;
  uint32_t local_1bcc;
  uint32_t local_1bc8;
  uint32_t local_1bc4;
  uint32_t local_1bc0;
  uint32_t local_1bbc;
  uint32_t local_1bb8;
  uint32_t local_1bb4;
  uint32_t local_1bb0;
  uint32_t local_1ba8;
  uint32_t local_1ba4;
  uint32_t local_1ba0;
  uint32_t local_1b9c;
  uint32_t local_1b98;
  uint32_t local_1b94;
  uint32_t local_1b90;
  RibbonEmitter *local_1b88;
  uint8_t **local_1b80[9];
  uint64_t local_1b38;
  uint32_t local_1b30;
  CriticalSection local_1b28[40];
  uint32_t local_1b00;
  uint32_t local_1afc;
  uint32_t local_1af8;
  uint32_t local_1af4;
  uint32_t local_1af0;
  uint32_t local_1aec;
  uint32_t local_1ae8;
  uint32_t local_1ae4;
  uint64_t local_1ae0;
  uint64_t local_1ad8;
  uint32_t local_1ad0;
  uint32_t local_1acc;
  uint32_t local_1ac8;
  uint32_t local_1ac4;
  uint32_t local_1ab8;
  uint32_t local_1ab4;
  uint32_t local_1ab0;
  uint32_t local_1aac;
  uint32_t local_1aa8;
  uint32_t local_1aa4;
  uint32_t local_1aa0;
  uint32_t local_1a9c;
  uint32_t local_1a98;
  uint32_t local_1a94;
  uint32_t local_1a90;
  uint32_t local_1a88;
  uint32_t local_1a84;
  uint32_t local_1a80;
  uint32_t local_1a7c;
  uint32_t local_1a78;
  uint32_t local_1a74;
  uint32_t local_1a70;
  RibbonEmitter *local_1a68;
  uint8_t **local_1a60[9];
  uint64_t local_1a18;
  uint32_t local_1a10;
  CriticalSection local_1a08[40];
  uint32_t local_19e0;
  uint32_t local_19dc;
  uint32_t local_19d8;
  uint32_t local_19d4;
  uint32_t local_19d0;
  uint32_t local_19cc;
  uint32_t local_19c8;
  uint32_t local_19c4;
  uint64_t local_19c0;
  uint64_t local_19b8;
  uint32_t local_19b0;
  uint32_t local_19ac;
  uint32_t local_19a8;
  uint32_t local_19a4;
  uint32_t local_1998;
  uint32_t local_1994;
  uint32_t local_1990;
  uint32_t local_198c;
  uint32_t local_1988;
  uint32_t local_1984;
  uint32_t local_1980;
  uint32_t local_197c;
  uint32_t local_1978;
  uint32_t local_1974;
  uint32_t local_1970;
  uint32_t local_1968;
  uint32_t local_1964;
  uint32_t local_1960;
  uint32_t local_195c;
  uint32_t local_1958;
  uint32_t local_1954;
  uint32_t local_1950;
  RibbonEmitter *local_1948;
  long local_1938;
  float local_192c;
  uint32_t local_1920;
  SceneObject2D local_1910[280];
  SparkEmitter *local_17f8;
  SceneObject2D local_17f0[280];
  SparkEmitter *local_16d8;
  SceneObject2D local_16d0[280];
  SparkEmitter *local_15b8;
  SceneObject2D local_15b0[280];
  SparkEmitter *local_1498;
  SceneObject2D local_1490[280];
  SparkEmitter *local_1378;
  SceneObject2D local_1370[280];
  SparkEmitter *local_1258;
  SceneObject2D local_1250[280];
  SparkEmitter *local_1138;
  SceneObject2D local_1130[280];
  SparkEmitter *local_1018;
  SceneObject2D local_1010[280];
  SparkEmitter *local_ef8;
  SceneObject2D local_ef0[280];
  SparkEmitter *local_dd8;
  long local_dc8;
  float local_dbc;
  float local_db8;
  uint32_t local_db0;
  SceneObject2D local_da0[280];
  SparkEmitter *local_c88;
  SceneObject2D local_c80[280];
  SparkEmitter *local_b68;
  SceneObject2D local_b60[280];
  SparkEmitter *local_a48;
  SceneObject2D local_a40[280];
  SparkEmitter *local_928;
  SceneObject2D local_920[280];
  SparkEmitter *local_808;
  SceneObject2D local_800[280];
  SparkEmitter *local_6e8;
  SceneObject2D local_6e0[280];
  SparkEmitter *local_5c8;
  SceneObject2D local_5c0[280];
  SparkEmitter *local_4a8;
  SceneObject2D local_4a0[280];
  SparkEmitter *local_388;
  SceneObject2D local_380[280];
  SparkEmitter *local_268;
  Matrix4x4 local_258[64];
  uint32_t local_218;
  uint32_t local_214;
  uint32_t local_210;
  uint32_t local_20c;
  uint32_t local_208;
  uint32_t local_204;
  uint32_t local_200;
  uint32_t local_1fc;
  float local_1f8;
  QuakeEmitter *local_1f0;
  uint64_t local_1e8;
  uint64_t local_1d8;
  QuakeEmitter *local_1d0;
  uint32_t local_1c8;
  uint32_t local_1c4;
  uint64_t local_1c0;
  uint64_t local_1b8;
  uint32_t local_1b0;
  QuakeEmitter *local_1a8;
  QuakeEmitter *local_1a0;
  float local_198;
  float local_194;
  uint local_190;
  float local_18c;
  float local_188;
  int local_184;
  uint32_t local_180;
  QuakeEmitter *local_178;
  uint32_t local_170;
  uint32_t local_16c;
  uint32_t local_168;
  uint32_t local_164;
  QuakeEmitter *local_148;
  uint32_t local_140;
  uint32_t local_13c;
  uint32_t local_138;
  uint32_t local_134;
  uint64_t local_118;
  uint64_t local_110;
  uint64_t local_108;
  uint64_t local_100;
  uint64_t local_f8;
  uint64_t local_f0;
  uint64_t local_e8;
  uint64_t local_e0;
  uint64_t local_d8;
  uint64_t local_d0;
  uint64_t local_c8;
  uint64_t local_c0;
  uint64_t local_b8;
  uint64_t local_b0;
  uint64_t local_a8;
  uint64_t local_a0;
  uint64_t local_98;
  uint64_t local_90;
  uint64_t local_88;
  uint64_t local_80;
  uint64_t local_78;
  uint64_t local_70;
  uint64_t local_68;
  QuakeEmitter *local_60;
  uint64_t local_58;
  uint64_t local_50;
  uint8_t local_3c[12];

  bVar35 = 0;
  *(uint32_t *)(self + 0x1a80) = 0;
  local_4740 = *(QuakeEmitter **)(*(long *)(self + 0x28) + 0x60);
  iVar9 = *(int *)(*(long *)(self + 0x28) + 0x68);
  GSetPieceWayPoints__Reset(SetPieceWayPoints);
  ResetObstacleArrays(self);
  *(uint64_t *)(self + 0x2ad0) = 0;
  *(uint64_t *)(self + 0x2be0) = 0;
  *(uint64_t *)(self + 0x2cf0) = 0;
  *(uint64_t *)(self + 0x2e00) = 0;
  *(uint64_t *)(self + 0x2f10) = 0;
  *(uint64_t *)(self + 0x3020) = 0;
  if (iVar9 < 1) {
    iVar9 = 0;
  } else {
    local_4734 = 0;
    local_4710 = (QuakeEmitter *)0x0;
    iVar24 = 0;
    do {
      pQVar17 = local_4710;
      lVar27 = *(long *)(local_4740 + 0x18);
      iVar6 = iVar24;
      if (((byte)local_4740[0x21] & 0x30) == 0x30) {
        pTVar5 = *(TileLevel **)(SuperMeatBoy + 0x40);
        lVar11 = TileLevel__getLevelLayer(pTVar5);
        if (((lVar27 == lVar11) || (lVar11 = TileLevel__getLevelLayer(pTVar5), lVar27 == lVar11)) ||
            (lVar11 = TileLevel__getLevelLayer(pTVar5), lVar27 == lVar11)) {
          uVar8 = (uint)(byte)local_4740[0x20];
          if ((uVar8 != *(uint *)(self + 0x43cc)) && (uVar8 != *(uint *)(self + 0x43c8)))
            goto LAB_004f7f08;
        } else {
          uVar8 = (uint)(byte)local_4740[0x20];
        }
        if (*(uint *)(self + 0x4080) == 0xffffffff) {
        LAB_004f8068:
          if (*(uint *)(self + 0x42b8) == uVar8) {
            piVar14 = (int *)TPlayer__GetJoystick((TPlayer *)Players__Player);
            if (*piVar14 == 1) {
              local_4740[0x20] = SUB41(*(uint32_t *)(self + 0x42bc), 0);
            }
          } else {
            lVar27 = (long)iVar24;
            *(QuakeEmitter **)(self + (lVar27 + 0x16) * 0x10 + 8) = local_4740;
            *(uint32_t *)(self + (lVar27 + 0x16) * 0x10 + 0x10) = *(uint32_t *)(local_4740 + 0x3c);
            QVar2 = local_4740[0x20];
            iVar6 = iVar24 + 1;
            if ((((uint)(byte)QVar2 == *(uint *)(self + 0x42cc)) ||
                 ((uint)(byte)QVar2 == *(uint *)(self + 0x42d4))) ||
                (uVar8 = (uint)(byte)QVar2, uVar8 == *(uint *)(self + 0x42d0))) {
              local_46d8 = 0;
              local_46d4 = 0x3f800000;
              local_46d0[0] = &PTR__SceneObject2D_005dd3d0;
              *(uint32_t *)(*(long *)(self + (lVar27 + 0x16) * 0x10 + 8) + 0x48) = 0;
              local_4688 = 0;
              local_4680 = 1;
              /* try { // try from 004f94f2 to 004f94f6 has its CatchHandler @ 004ff1a8 */
              CriticalSection__CriticalSection(local_4678);
              local_4650 = 0;
              uStack_464c = 0;
              local_4648 = 0x3f800000;
              uStack_4644 = 0;
              local_4640 = 0;
              uStack_463c = 0;
              local_4638 = 0;
              uStack_4634 = 1;
              local_4630 = vDefaultStart2D;
              local_4628 = vDefaultStart2D;
              local_4620 = 0;
              local_461c = 0;
              local_4618 = 0;
              local_4614 = 0;
              local_4608 = 0;
              local_4604 = 0;
              local_4600 = 0x3f800000;
              local_45fc = 0x3f800000;
              local_45f8 = 0;
              local_45f4 = 0;
              local_45f0 = 0;
              local_45ec = 0;
              local_45e8 = 0;
              local_45e4 = 0;
              local_45e0 = 0;
              local_45d8 = 2;
              local_45d4 = 0;
              local_45d0 = 0;
              local_45cc = 0;
              local_45c8 = 0;
              local_45c4 = 0;
              local_45c0 = 0;
              local_45b8 = (SparkEmitter *)0x0;
              local_4568 = 0;
              local_4560 = 1;
              local_45b0[0] = &PTR__SceneObject2D_005dd3d0;
              /* try { // try from 004f968f to 004f9693 has its CatchHandler @ 004ff196 */
              CriticalSection__CriticalSection(local_4558);
              local_4530 = 0;
              local_452c = 0;
              local_4528 = 0x3f800000;
              local_4524 = 0;
              local_4520 = 0;
              local_451c = 0;
              local_4518 = 0;
              local_4514 = 1;
              local_4510 = vDefaultStart2D;
              local_4508 = vDefaultStart2D;
              local_4500 = 0;
              local_44fc = 0;
              local_44f8 = 0;
              local_44f4 = 0;
              local_44e8 = 0;
              local_44e4 = 0;
              local_44e0 = 0x3f800000;
              local_44dc = 0x3f800000;
              local_44d8 = 0;
              local_44d4 = 0;
              local_44d0 = 0;
              local_44cc = 0;
              local_44c8 = 0;
              local_44c4 = 0;
              local_44c0 = 0;
              local_44b8 = 2;
              local_44b4 = 0;
              local_44b0 = 0;
              local_44ac = 0;
              local_44a8 = 0;
              local_44a4 = 0;
              local_44a0 = 0;
              local_4498 = (SparkEmitter *)0x0;
              local_4448 = 0;
              local_4440 = 1;
              local_4490[0] = &PTR__SceneObject2D_005dd3d0;
              /* try { // try from 004f982c to 004f9830 has its CatchHandler @ 004feebc */
              CriticalSection__CriticalSection(local_4438);
              local_4410 = 0;
              local_440c = 0;
              local_4408 = 0x3f800000;
              local_4404 = 0;
              local_4400 = 0;
              local_43fc = 0;
              local_43f8 = 0;
              local_43f4 = 1;
              local_43f0 = vDefaultStart2D;
              local_43e8 = vDefaultStart2D;
              local_43e0 = 0;
              local_43dc = 0;
              local_43d8 = 0;
              local_43d4 = 0;
              local_43c8 = 0;
              local_43c4 = 0;
              local_43c0 = 0x3f800000;
              local_43bc = 0x3f800000;
              local_43b8 = 0;
              local_43b4 = 0;
              local_43b0 = 0;
              local_43ac = 0;
              local_43a8 = 0;
              local_43a4 = 0;
              local_43a0 = 0;
              local_4398 = 2;
              local_4394 = 0;
              local_4390 = 0;
              local_438c = 0;
              local_4388 = 0;
              local_4384 = 0;
              local_4380 = 0;
              local_4378 = (SparkEmitter *)0x0;
              local_4328 = 0;
              local_4320 = 1;
              local_4370[0] = &PTR__SceneObject2D_005dd3d0;
              /* try { // try from 004f99c9 to 004f99cd has its CatchHandler @ 004feeaa */
              CriticalSection__CriticalSection(local_4318);
              local_42f0 = 0;
              local_42ec = 0;
              local_42e8 = 0x3f800000;
              local_42e4 = 0;
              local_42e0 = 0;
              local_42dc = 0;
              local_42d8 = 0;
              local_42d4 = 1;
              local_42d0 = vDefaultStart2D;
              local_42c8 = vDefaultStart2D;
              local_42c0 = 0;
              local_42bc = 0;
              local_42b8 = 0;
              local_42b4 = 0;
              local_42a8 = 0;
              local_42a4 = 0;
              local_42a0 = 0x3f800000;
              local_429c = 0x3f800000;
              local_4298 = 0;
              local_4294 = 0;
              local_4290 = 0;
              local_428c = 0;
              local_4288 = 0;
              local_4284 = 0;
              local_4280 = 0;
              local_4278 = 2;
              local_4274 = 0;
              local_4270 = 0;
              local_426c = 0;
              local_4268 = 0;
              local_4264 = 0;
              local_4260 = 0;
              local_4258 = (SparkEmitter *)0x0;
              local_4208 = 0;
              local_4200 = 1;
              local_4250[0] = &PTR__SceneObject2D_005dd3d0;
              /* try { // try from 004f9b66 to 004f9b6a has its CatchHandler @ 004fee98 */
              CriticalSection__CriticalSection(local_41f8);
              local_41d0 = 0;
              local_41cc = 0;
              local_41c8 = 0x3f800000;
              local_41c4 = 0;
              local_41c0 = 0;
              local_41bc = 0;
              local_41b8 = 0;
              local_41b4 = 1;
              local_41b0 = vDefaultStart2D;
              local_41a8 = vDefaultStart2D;
              local_41a0 = 0;
              local_419c = 0;
              local_4198 = 0;
              local_4194 = 0;
              local_4188 = 0;
              local_4184 = 0;
              local_4180 = 0x3f800000;
              local_417c = 0x3f800000;
              local_4178 = 0;
              local_4174 = 0;
              local_4170 = 0;
              local_416c = 0;
              local_4168 = 0;
              local_4164 = 0;
              local_4160 = 0;
              local_4158 = 2;
              local_4154 = 0;
              local_4150 = 0;
              local_414c = 0;
              local_4148 = 0;
              local_4144 = 0;
              local_4140 = 0;
              local_4138 = (SparkEmitter *)0x0;
              local_40e8 = 0;
              local_40e0 = 1;
              local_4130[0] = &PTR__SceneObject2D_005dd3d0;
              /* try { // try from 004f9d03 to 004f9d07 has its CatchHandler @ 004fee86 */
              CriticalSection__CriticalSection(local_40d8);
              local_40b0 = 0;
              local_40ac = 0;
              local_40a8 = 0x3f800000;
              local_40a4 = 0;
              local_40a0 = 0;
              local_409c = 0;
              local_4098 = 0;
              local_4094 = 1;
              local_4090 = vDefaultStart2D;
              local_4088 = vDefaultStart2D;
              local_4080 = 0;
              local_407c = 0;
              local_4078 = 0;
              local_4074 = 0;
              local_4068 = 0;
              local_4064 = 0;
              local_4060 = 0x3f800000;
              local_405c = 0x3f800000;
              local_4058 = 0;
              local_4054 = 0;
              local_4050 = 0;
              local_404c = 0;
              local_4048 = 0;
              local_4044 = 0;
              local_4040 = 0;
              local_4038 = 2;
              local_4034 = 0;
              local_4030 = 0;
              local_402c = 0;
              local_4028 = 0;
              local_4024 = 0;
              local_4020 = 0;
              local_4018 = (SparkEmitter *)0x0;
              local_3fc8 = 0;
              local_3fc0 = 1;
              local_4010[0] = &PTR__SceneObject2D_005dd3d0;
              /* try { // try from 004f9ea0 to 004f9ea4 has its CatchHandler @ 004fe5b0 */
              CriticalSection__CriticalSection(local_3fb8);
              local_3f90 = 0;
              local_3f8c = 0;
              local_3f88 = 0x3f800000;
              local_3f84 = 0;
              local_3f80 = 0;
              local_3f7c = 0;
              local_3f78 = 0;
              local_3f74 = 1;
              local_3f70 = vDefaultStart2D;
              local_3f68 = vDefaultStart2D;
              local_3f60 = 0;
              local_3f5c = 0;
              local_3f58 = 0;
              local_3f54 = 0;
              local_3f48 = 0;
              local_3f44 = 0;
              local_3f40 = 0x3f800000;
              local_3f3c = 0x3f800000;
              local_3f38 = 0;
              local_3f34 = 0;
              local_3f30 = 0;
              local_3f2c = 0;
              local_3f28 = 0;
              local_3f24 = 0;
              local_3f20 = 0;
              local_3f18 = 2;
              local_3f14 = 0;
              local_3f10 = 0;
              local_3f0c = 0;
              local_3f08 = 0;
              local_3f04 = 0;
              local_3f00 = 0;
              local_3ef8 = (SparkEmitter *)0x0;
              local_3ea8 = 0;
              local_3ea0 = 1;
              local_3ef0[0] = &PTR__SceneObject2D_005dd3d0;
              /* try { // try from 004fa03d to 004fa041 has its CatchHandler @ 004ff051 */
              CriticalSection__CriticalSection(local_3e98);
              local_3e70 = 0;
              local_3e6c = 0;
              local_3e68 = 0x3f800000;
              local_3e64 = 0;
              local_3e60 = 0;
              local_3e5c = 0;
              local_3e58 = 0;
              local_3e54 = 1;
              local_3e50 = vDefaultStart2D;
              local_3e48 = vDefaultStart2D;
              local_3e40 = 0;
              local_3e3c = 0;
              local_3e38 = 0;
              local_3e34 = 0;
              local_3e28 = 0;
              local_3e24 = 0;
              local_3e20 = 0x3f800000;
              local_3e1c = 0x3f800000;
              local_3e18 = 0;
              local_3e14 = 0;
              local_3e10 = 0;
              local_3e0c = 0;
              local_3e08 = 0;
              local_3e04 = 0;
              local_3e00 = 0;
              local_3df8 = 2;
              local_3df4 = 0;
              local_3df0 = 0;
              local_3dec = 0;
              local_3de8 = 0;
              local_3de4 = 0;
              local_3de0 = 0;
              local_3dd8 = (SparkEmitter *)0x0;
              local_3d88 = 0;
              local_3d80 = 1;
              local_3dd0[0] = &PTR__SceneObject2D_005dd3d0;
              /* try { // try from 004fa1da to 004fa1de has its CatchHandler @ 004ff03f */
              CriticalSection__CriticalSection(local_3d78);
              local_3d50 = 0;
              local_3d4c = 0;
              local_3d48 = 0x3f800000;
              local_3d44 = 0;
              local_3d40 = 0;
              local_3d3c = 0;
              local_3d38 = 0;
              local_3d34 = 1;
              local_3d30 = vDefaultStart2D;
              local_3d28 = vDefaultStart2D;
              local_3d20 = 0;
              local_3d1c = 0;
              local_3d18 = 0;
              local_3d14 = 0;
              local_3d08 = 0;
              local_3d04 = 0;
              local_3d00 = 0x3f800000;
              local_3cfc = 0x3f800000;
              local_3cf8 = 0;
              local_3cf4 = 0;
              local_3cf0 = 0;
              local_3cec = 0;
              local_3ce8 = 0;
              local_3ce4 = 0;
              local_3ce0 = 0;
              local_3cd8 = 2;
              local_3cd4 = 0;
              local_3cd0 = 0;
              local_3ccc = 0;
              local_3cc8 = 0;
              local_3cc4 = 0;
              local_3cc0 = 0;
              local_3cb8 = (SparkEmitter *)0x0;
              local_3c68 = 0;
              local_3c60 = 1;
              local_3cb0[0] = &PTR__SceneObject2D_005dd3d0;
              /* try { // try from 004fa377 to 004fa37b has its CatchHandler @ 004ff02d */
              CriticalSection__CriticalSection(local_3c58);
              local_3c30 = 0;
              local_3c2c = 0;
              local_3c28 = 0x3f800000;
              local_3c24 = 0;
              local_3c20 = 0;
              local_3c10 = vDefaultStart2D;
              local_3c08 = vDefaultStart2D;
              local_3c1c = 0;
              local_3c18 = 0;
              local_3c14 = 1;
              local_3c00 = 0;
              local_3bfc = 0;
              local_3bf8 = 0;
              local_3bf4 = 0;
              local_3be8 = 0;
              local_3be4 = 0;
              local_3be0 = 0x3f800000;
              local_3bdc = 0x3f800000;
              local_3bd8 = 0;
              local_3bd4 = 0;
              local_3bd0 = 0;
              local_3bcc = 0;
              local_3bc8 = 0;
              local_3bc4 = 0;
              local_3bc0 = 0;
              local_3bb8 = 2;
              local_3bb4 = 0;
              local_3bb0 = 0;
              local_3bac = 0;
              local_3ba8 = 0;
              local_3ba4 = 0;
              local_3ba0 = 0;
              local_3b98 = (SparkEmitter *)0x0;
              lVar27 = *(long *)(self + (lVar27 + 0x16) * 0x10 + 8);
              fVar36 = (float)*(int *)(lVar27 + 0x54) * DAT_005c01d0 /* R:0.0010000000474974513f */;
              local_4740[0x20] = SUB41(*(uint32_t *)(self + 0x42cc), 0);
              if (SystemCaps._4_4_ - 1U < 2) {
                local_1c8 = 0x3f800000;
                local_1c4 = 0x3f800000;
                local_1c0 = 0x3f80000042c80000;
                local_1d8 = ::cWhite;
                local_1b8 = 0xa00000000;
                local_1b0 = 1;
                local_1d0 = DAT_0081c008 /* R:1.0778787787586493e-41f */;
                /* try { // try from 004fbbab to 004fbc06 has its CatchHandler @ 004ff170 */
                ColorConversion__ConvertRBGHEXToColor(0xfaffad, (ColorTemplate *)&local_1d8);
                local_1c0 = 0x4080000043960000;
                local_1c4 = 0x3dcccccd;
                local_1c8 = 0x3e800000;
                local_1b0 = 10;
                local_1b8 = 0xa40800000;
                pSVar18 = operator_new(0x78);
                /* try { // try from 004fbc10 to 004fbc14 has its CatchHandler @ 004ff15d */
                SparkEmitter__SparkEmitter__0059f5b0(pSVar18, (SparkEmitterCreation *)&local_1d8);
                *(uint32_t *)(pSVar18 + 0x10) = 0;
                local_45b8 = pSVar18;
                /* try { // try from 004fbc29 to 004fbc2d has its CatchHandler @ 004ff170 */
                pSVar18 = operator_new(0x78);
                /* try { // try from 004fbc37 to 004fbc3b has its CatchHandler @ 004ff15d */
                SparkEmitter__SparkEmitter__0059f5b0(pSVar18, (SparkEmitterCreation *)&local_1d8);
                *(uint32_t *)(pSVar18 + 0x10) = 0;
                local_4498 = pSVar18;
                /* try { // try from 004fbc50 to 004fbc54 has its CatchHandler @ 004ff170 */
                pSVar18 = operator_new(0x78);
                /* try { // try from 004fbc5e to 004fbc62 has its CatchHandler @ 004ff15d */
                SparkEmitter__SparkEmitter__0059f5b0(pSVar18, (SparkEmitterCreation *)&local_1d8);
                *(uint32_t *)(pSVar18 + 0x10) = 0;
                local_4378 = pSVar18;
                /* try { // try from 004fbc77 to 004fbc7b has its CatchHandler @ 004ff170 */
                pSVar18 = operator_new(0x78);
                /* try { // try from 004fbc85 to 004fbc89 has its CatchHandler @ 004ff15d */
                SparkEmitter__SparkEmitter__0059f5b0(pSVar18, (SparkEmitterCreation *)&local_1d8);
                *(uint32_t *)(pSVar18 + 0x10) = 0;
                local_4258 = pSVar18;
                /* try { // try from 004fbc9e to 004fbca2 has its CatchHandler @ 004ff170 */
                pSVar18 = operator_new(0x78);
                /* try { // try from 004fbcac to 004fbcb0 has its CatchHandler @ 004ff15d */
                SparkEmitter__SparkEmitter__0059f5b0(pSVar18, (SparkEmitterCreation *)&local_1d8);
                *(uint32_t *)(pSVar18 + 0x10) = 0;
                local_4138 = pSVar18;
                /* try { // try from 004fbcc5 to 004fbcc9 has its CatchHandler @ 004ff170 */
                pSVar18 = operator_new(0x78);
                /* try { // try from 004fbcd3 to 004fbcd7 has its CatchHandler @ 004ff15d */
                SparkEmitter__SparkEmitter__0059f5b0(pSVar18, (SparkEmitterCreation *)&local_1d8);
                *(uint32_t *)(pSVar18 + 0x10) = 0;
                local_4018 = pSVar18;
                /* try { // try from 004fbcec to 004fbcf0 has its CatchHandler @ 004ff170 */
                pSVar18 = operator_new(0x78);
                /* try { // try from 004fbcfa to 004fbcfe has its CatchHandler @ 004ff15d */
                SparkEmitter__SparkEmitter__0059f5b0(pSVar18, (SparkEmitterCreation *)&local_1d8);
                *(uint32_t *)(pSVar18 + 0x10) = 0;
                local_3ef8 = pSVar18;
                /* try { // try from 004fbd13 to 004fbd17 has its CatchHandler @ 004ff170 */
                pSVar18 = operator_new(0x78);
                /* try { // try from 004fbd21 to 004fbd25 has its CatchHandler @ 004ff15d */
                SparkEmitter__SparkEmitter__0059f5b0(pSVar18, (SparkEmitterCreation *)&local_1d8);
                *(uint32_t *)(pSVar18 + 0x10) = 0;
                local_3dd8 = pSVar18;
                /* try { // try from 004fbd3a to 004fbd3e has its CatchHandler @ 004ff170 */
                pSVar18 = operator_new(0x78);
                /* try { // try from 004fbd48 to 004fbd4c has its CatchHandler @ 004ff15d */
                SparkEmitter__SparkEmitter__0059f5b0(pSVar18, (SparkEmitterCreation *)&local_1d8);
                *(uint32_t *)(pSVar18 + 0x10) = 0;
                local_3cb8 = pSVar18;
                /* try { // try from 004fbd61 to 004fbd65 has its CatchHandler @ 004ff170 */
                pSVar18 = operator_new(0x78);
                /* try { // try from 004fbd6f to 004fbd73 has its CatchHandler @ 004ff15d */
                SparkEmitter__SparkEmitter__0059f5b0(pSVar18, (SparkEmitterCreation *)&local_1d8);
                *(uint32_t *)(pSVar18 + 0x10) = 0;
                local_3b98 = pSVar18;
              }
              if (*(int *)(self + 0x3ee8) == -0x5eef3582) {
                uVar30 = *(ushort *)(self + 0x3ec8);
                if (*(ushort *)(self + 0x3eca) <= uVar30) {
                  uVar30 = *(ushort *)(self + 0x3eca) + *(short *)(self + 0x3ed4);
                  uVar23 = (ulong)(byte)self[0x3ecc];
                  pvVar19 = (void *)0x0;
                  pvVar12 = *(void **)(self + 0x3ed8);
                  *(ushort *)(self + 0x3eca) = uVar30;
                  uVar21 = (ulong)uVar30 * 0xb68;
                  pvVar15 = malloc(uVar23 + 0x10 + uVar21);
                  if (pvVar15 != (void *)0x0) {
                    pvVar19 = (void *)((long)pvVar15 + 0x10U +
                                       (uVar23 - ((long)pvVar15 + 0x10U) % uVar23) % uVar23);
                    *(ulong *)((long)pvVar19 + -0x10) = uVar21;
                    *(void **)((long)pvVar19 + -8) = pvVar15;
                    if (pvVar12 != (void *)0x0) {
                      uVar23 = *(ulong *)((long)pvVar12 + -0x10);
                      if (uVar21 < uVar23 || uVar21 - uVar23 == 0) {
                        uVar23 = uVar21;
                      }
                      memcpy(pvVar19, pvVar12, uVar23);
                      free(*(void **)((long)pvVar12 + -8));
                    }
                  }
                  pvVar12 = *(void **)(self + 0x3ee0);
                  *(void **)(self + 0x3ed8) = pvVar19;
                  if (pvVar12 != (void *)0x0) {
                    uVar31 = *(ushort *)(self + 0x3eca);
                    uVar21 = (ulong)(byte)self[0x3ecc];
                    pvVar19 = (void *)0x0;
                    uVar23 = (ulong)uVar31 * 2;
                    pvVar15 = malloc(uVar21 + 0x10 + uVar23);
                    if (pvVar15 != (void *)0x0) {
                      pvVar19 = (void *)((long)pvVar15 + 0x10U +
                                         (uVar21 - ((long)pvVar15 + 0x10U) % uVar21) % uVar21);
                      *(void **)((long)pvVar19 + -8) = pvVar15;
                      *(ulong *)((long)pvVar19 + -0x10) = uVar23;
                      uVar21 = *(ulong *)((long)pvVar12 + -0x10);
                      if (uVar23 <= *(ulong *)((long)pvVar12 + -0x10)) {
                        uVar21 = uVar23;
                      }
                      memcpy(pvVar19, pvVar12, uVar21);
                      free(*(void **)((long)pvVar12 + -8));
                      uVar31 = *(ushort *)(self + 0x3eca);
                    }
                    uVar30 = *(ushort *)(self + 0x3ec8);
                    *(void **)(self + 0x3ee0) = pvVar19;
                    if (uVar31 <= uVar30)
                      goto LAB_004fa561;
                    while (true) {
                      uVar23 = (ulong)uVar30;
                      uVar30 = uVar30 + 1;
                      *(uint16_t *)((long)pvVar19 + uVar23 * 2) = 0xffff;
                      if (uVar31 <= uVar30)
                        break;
                      pvVar19 = *(void **)(self + 0x3ee0);
                    }
                  }
                  uVar30 = *(ushort *)(self + 0x3ec8);
                }
              LAB_004fa561:
                iVar24 = *(int *)(self + 0x3ed0);
              } else {
                uVar23 = (ulong)(byte)self[0x3ecc];
                *(uint32_t *)(self + 0x3ed0) = 0;
                pvVar12 = malloc(uVar23 + 0x3918);
                pvVar19 = (void *)0x0;
                if (pvVar12 != (void *)0x0) {
                  pvVar19 = (void *)((long)pvVar12 + 0x10U +
                                     (uVar23 - ((long)pvVar12 + 0x10U) % uVar23) % uVar23);
                  *(uint64_t *)((long)pvVar19 + -0x10) = 0x3908;
                  *(void **)((long)pvVar19 + -8) = pvVar12;
                }
                *(void **)(self + 0x3ed8) = pvVar19;
                memset(pvVar19, 0, 0x3908);
                uVar30 = 0;
                iVar24 = *(int *)(self + 0x3ed0);
                *(uint16_t *)(self + 0x3ec8) = 0;
                *(uint16_t *)(self + 0x3eca) = 5;
                *(uint32_t *)(self + 0x3ee8) = 0xa110ca7e;
                *(uint16_t *)(self + 0x3ed4) = 5;
              }
              if ((iVar24 == 1) && (*(short *)(self + 0x3eca) != 0)) {
                puVar13 = *(ushort **)(self + 0x3ee0);
                sVar20 = 0;
                uVar31 = *puVar13;
                while (uVar31 != 0xffff) {
                  puVar13 = puVar13 + 1;
                  sVar20 = sVar20 + 1;
                  if (sVar20 == *(short *)(self + 0x3eca))
                    goto LAB_004fa56f;
                  uVar31 = *puVar13;
                }
                *puVar13 = uVar30;
                uVar30 = *(ushort *)(self + 0x3ec8);
              }
            LAB_004fa56f:
              plVar32 = (long *)((ulong)uVar30 * 0xb68 + *(long *)(self + 0x3ed8));
              *plVar32 = lVar27;
              *(uint32_t *)(plVar32 + 1) = 0x3f800000;
              *(float *)((long)plVar32 + 0xc) = fVar36;
              *(uint32_t *)(plVar32 + 2) = 0;
              *(uint32_t *)((long)plVar32 + 0x14) = 0;
              *(uint32_t *)(plVar32 + 3) = 0;
              *(uint32_t *)((long)plVar32 + 0x1c) = 0;
              /* try { // try from 004fa5c2 to 004fa72c has its CatchHandler @ 004ff018 */
              Vector2__operator_assign((Vector2 *)(plVar32 + 4), (Vector2 *)&local_46d8);
              plVar33 = plVar32 + 5;
              pppuVar25 = local_46d0;
              plVar28 = plVar33;
              do {
                Matrix4x4__operator_assign((Matrix4x4 *)(plVar28 + 1),
                                           (Matrix4x4 *)(pppuVar25 + 1));
                plVar28[9] = (long)pppuVar25[9];
                *(uint32_t *)(plVar28 + 10) = *(uint32_t *)(pppuVar25 + 10);
                plVar28[0xb] = (long)pppuVar25[0xb];
                *(uint8_t ***)((long)plVar32 + (long)plVar28 + (0x88 - (long)plVar33)) =
                    pppuVar25[0xc];
                *(uint8_t ***)((long)plVar32 + (long)plVar28 + (0x90 - (long)plVar33)) =
                    pppuVar25[0xd];
                *(uint8_t ***)((long)plVar32 + (long)plVar28 + (0x98 - (long)plVar33)) =
                    pppuVar25[0xe];
                *(uint8_t ***)((long)plVar32 + (long)plVar28 + (0xa0 - (long)plVar33)) =
                    pppuVar25[0xf];
                *(uint8_t ***)((long)plVar32 + (long)plVar28 + (0xa8 - (long)plVar33)) =
                    pppuVar25[0x10];
                *(uint8_t ***)((long)plVar32 + (long)plVar28 + (0xb0 - (long)plVar33)) =
                    pppuVar25[0x11];
                *(uint8_t ***)((long)plVar32 + (long)plVar28 + (0xb8 - (long)plVar33)) =
                    pppuVar25[0x12];
                *(uint8_t ***)((long)plVar32 + (long)plVar28 + (0xc0 - (long)plVar33)) =
                    pppuVar25[0x13];
                Vector2__operator_assign((Vector2 *)(plVar28 + 0x14),
                                         (Vector2 *)(pppuVar25 + 0x14));
                Vector2__operator_assign((Vector2 *)(plVar28 + 0x15),
                                         (Vector2 *)(pppuVar25 + 0x15));
                Vector2__operator_assign((Vector2 *)(plVar28 + 0x16),
                                         (Vector2 *)(pppuVar25 + 0x16));
                Vector2__operator_assign((Vector2 *)(plVar28 + 0x17),
                                         (Vector2 *)(pppuVar25 + 0x17));
                Vector2__operator_assign((Vector2 *)(plVar28 + 0x18),
                                         (Vector2 *)(pppuVar25 + 0x18));
                Vector2__operator_assign((Vector2 *)(plVar28 + 0x19),
                                         (Vector2 *)(pppuVar25 + 0x19));
                Vector2__operator_assign((Vector2 *)(plVar28 + 0x1a),
                                         (Vector2 *)(pppuVar25 + 0x1a));
                *(uint32_t *)((long)plVar32 + (long)plVar28 + (0x100 - (long)plVar33)) =
                    *(uint32_t *)(pppuVar25 + 0x1b);
                Vector2__operator_assign((Vector2 *)((long)plVar28 + 0xdc),
                                         (Vector2 *)((long)pppuVar25 + 0xdc));
                Vector2__operator_assign((Vector2 *)((long)plVar28 + 0xe4),
                                         (Vector2 *)((long)pppuVar25 + 0xe4));
                Vector2__operator_assign((Vector2 *)((long)plVar28 + 0xec),
                                         (Vector2 *)((long)pppuVar25 + 0xec));
                *(uint32_t *)(plVar28 + 0x1f) = *(uint32_t *)(pppuVar25 + 0x1f);
                *(uint32_t *)((long)plVar28 + 0xfc) = *(uint32_t *)((long)pppuVar25 + 0xfc);
                *(uint32_t *)((long)plVar32 + (long)plVar28 + (0x128 - (long)plVar33)) =
                    *(uint32_t *)(pppuVar25 + 0x20);
                *(uint32_t *)((long)plVar28 + 0x104) = *(uint32_t *)((long)pppuVar25 + 0x104);
                *(uint32_t *)(plVar28 + 0x21) = *(uint32_t *)(pppuVar25 + 0x21);
                *(uint32_t *)((long)plVar28 + 0x10c) = *(uint32_t *)((long)pppuVar25 + 0x10c);
                *(uint32_t *)(plVar28 + 0x22) = *(uint32_t *)(pppuVar25 + 0x22);
                pppuVar1 = pppuVar25 + 0x23;
                pppuVar25 = pppuVar25 + 0x24;
                plVar28[0x23] = (long)*pppuVar1;
                plVar28 = plVar28 + 0x24;
              } while (pppuVar25 != &local_3b90);
              *(short *)(self + 0x3ec8) = *(short *)(self + 0x3ec8) + 1;
              SceneObject2D__SceneObject2D__0059b220((SceneObject2D *)local_3cb0);
              SceneObject2D__SceneObject2D__0059b220((SceneObject2D *)local_3dd0);
              SceneObject2D__SceneObject2D__0059b220((SceneObject2D *)local_3ef0);
              SceneObject2D__SceneObject2D__0059b220((SceneObject2D *)local_4010);
              SceneObject2D__SceneObject2D__0059b220((SceneObject2D *)local_4130);
              SceneObject2D__SceneObject2D__0059b220((SceneObject2D *)local_4250);
              SceneObject2D__SceneObject2D__0059b220((SceneObject2D *)local_4370);
              SceneObject2D__SceneObject2D__0059b220((SceneObject2D *)local_4490);
              SceneObject2D__SceneObject2D__0059b220((SceneObject2D *)local_45b0);
              SceneObject2D__SceneObject2D__0059b220((SceneObject2D *)local_46d0);
            } else if (((uVar8 == *(uint *)(self + 0x432c)) ||
                        (uVar8 == *(uint *)(self + 0x4330))) ||
                       (uVar8 == *(uint *)(self + 0x4334))) {
              local_3b88 = 0;
              local_3b80 = 0x3f800000;
              local_3b7c = 0.0;
              local_3b78 = 0;
              local_3b74 = 0;
              local_3b70 = 0;
              local_3b6c = 0;
              local_3b68 = 0;
              local_3b64 = 0x3f800000;
              local_3b18 = 0;
              local_3b10 = 1;
              local_3b60[0] = &PTR__SceneObject2D_005dd3d0;
              /* try { // try from 004fa9ec to 004fa9f0 has its CatchHandler @ 004ff009 */
              CriticalSection__CriticalSection(local_3b08);
              local_3ae0 = 0;
              local_3adc = 0;
              local_3ad8 = 0x3f800000;
              local_3ad4 = 0;
              local_3ad0 = 0;
              local_3acc = 0;
              local_3ac8 = 0;
              local_3ac4 = 1;
              local_3ac0 = vDefaultStart2D;
              local_3ab8 = vDefaultStart2D;
              local_3ab0 = 0;
              local_3aac = 0;
              local_3aa8 = 0;
              local_3aa4 = 0;
              local_3a98 = 0;
              local_3a94 = 0;
              local_3a90 = 0x3f800000;
              local_3a8c = 0x3f800000;
              local_3a88 = 0;
              local_3a84 = 0;
              local_3a80 = 0;
              local_3a7c = 0;
              local_3a78 = 0;
              local_3a74 = 0;
              local_3a70 = 0;
              local_3a68 = 2;
              local_3a64 = 0;
              local_3a60 = 0;
              local_3a5c = 0;
              local_3a58 = 0;
              local_3a54 = 0;
              local_3a50 = 0;
              local_3a48 = (RibbonEmitter *)0x0;
              local_39f8 = 0;
              local_39f0 = 1;
              local_3a40[0] = &PTR__SceneObject2D_005dd3d0;
              /* try { // try from 004fab89 to 004fab8d has its CatchHandler @ 004feff7 */
              CriticalSection__CriticalSection(local_39e8);
              local_39c0 = 0;
              local_39bc = 0;
              local_39b8 = 0x3f800000;
              local_39b4 = 0;
              local_39b0 = 0;
              local_39ac = 0;
              local_39a8 = 0;
              local_39a4 = 1;
              local_39a0 = vDefaultStart2D;
              local_3998 = vDefaultStart2D;
              local_3990 = 0;
              local_398c = 0;
              local_3988 = 0;
              local_3984 = 0;
              local_3978 = 0;
              local_3974 = 0;
              local_3970 = 0x3f800000;
              local_396c = 0x3f800000;
              local_3968 = 0;
              local_3964 = 0;
              local_3960 = 0;
              local_395c = 0;
              local_3958 = 0;
              local_3954 = 0;
              local_3950 = 0;
              local_3948 = 2;
              local_3944 = 0;
              local_3940 = 0;
              local_393c = 0;
              local_3938 = 0;
              local_3934 = 0;
              local_3930 = 0;
              local_3928 = (RibbonEmitter *)0x0;
              local_38d8 = 0;
              local_38d0 = 1;
              local_3920[0] = &PTR__SceneObject2D_005dd3d0;
              /* try { // try from 004fad26 to 004fad2a has its CatchHandler @ 004fefe5 */
              CriticalSection__CriticalSection(local_38c8);
              local_38a0 = 0;
              local_389c = 0;
              local_3898 = 0x3f800000;
              local_3894 = 0;
              local_3890 = 0;
              local_388c = 0;
              local_3888 = 0;
              local_3884 = 1;
              local_3880 = vDefaultStart2D;
              local_3878 = vDefaultStart2D;
              local_3870 = 0;
              local_386c = 0;
              local_3868 = 0;
              local_3864 = 0;
              local_3858 = 0;
              local_3854 = 0;
              local_3850 = 0x3f800000;
              local_384c = 0x3f800000;
              local_3848 = 0;
              local_3844 = 0;
              local_3840 = 0;
              local_383c = 0;
              local_3838 = 0;
              local_3834 = 0;
              local_3830 = 0;
              local_3828 = 2;
              local_3824 = 0;
              local_3820 = 0;
              local_381c = 0;
              local_3818 = 0;
              local_3814 = 0;
              local_3810 = 0;
              local_3808 = (RibbonEmitter *)0x0;
              local_37b8 = 0;
              local_37b0 = 1;
              local_3800[0] = &PTR__SceneObject2D_005dd3d0;
              /* try { // try from 004faec3 to 004faec7 has its CatchHandler @ 004fefd3 */
              CriticalSection__CriticalSection(local_37a8);
              local_3780 = 0;
              local_377c = 0;
              local_3778 = 0x3f800000;
              local_3774 = 0;
              local_3770 = 0;
              local_376c = 0;
              local_3768 = 0;
              local_3764 = 1;
              local_3760 = vDefaultStart2D;
              local_3758 = vDefaultStart2D;
              local_3750 = 0;
              local_374c = 0;
              local_3748 = 0;
              local_3744 = 0;
              local_3738 = 0;
              local_3734 = 0;
              local_3730 = 0x3f800000;
              local_372c = 0x3f800000;
              local_3728 = 0;
              local_3724 = 0;
              local_3720 = 0;
              local_371c = 0;
              local_3718 = 0;
              local_3714 = 0;
              local_3710 = 0;
              local_3708 = 2;
              local_3704 = 0;
              local_3700 = 0;
              local_36fc = 0;
              local_36f8 = 0;
              local_36f4 = 0;
              local_36f0 = 0;
              local_36e8 = (RibbonEmitter *)0x0;
              local_3698 = 0;
              local_3690 = 1;
              local_36e0[0] = &PTR__SceneObject2D_005dd3d0;
              /* try { // try from 004fb060 to 004fb064 has its CatchHandler @ 004fdf43 */
              CriticalSection__CriticalSection(local_3688);
              local_3660 = 0;
              local_365c = 0;
              local_3658 = 0x3f800000;
              local_3654 = 0;
              local_3650 = 0;
              local_364c = 0;
              local_3648 = 0;
              local_3644 = 1;
              local_3640 = vDefaultStart2D;
              local_3638 = vDefaultStart2D;
              local_3630 = 0;
              local_362c = 0;
              local_3628 = 0;
              local_3624 = 0;
              local_3618 = 0;
              local_3614 = 0;
              local_3610 = 0x3f800000;
              local_360c = 0x3f800000;
              local_3608 = 0;
              local_3604 = 0;
              local_3600 = 0;
              local_35fc = 0;
              local_35f8 = 0;
              local_35f4 = 0;
              local_35f0 = 0;
              local_35e8 = 2;
              local_35e4 = 0;
              local_35e0 = 0;
              local_35dc = 0;
              local_35d8 = 0;
              local_35d4 = 0;
              local_35d0 = 0;
              local_35c8 = (RibbonEmitter *)0x0;
              local_3578 = 0;
              local_3570 = 1;
              local_35c0[0] = &PTR__SceneObject2D_005dd3d0;
              /* try { // try from 004fb1fd to 004fb201 has its CatchHandler @ 004ff225 */
              CriticalSection__CriticalSection(local_3568);
              local_3540 = 0;
              local_353c = 0;
              local_3538 = 0x3f800000;
              local_3534 = 0;
              local_3530 = 0;
              local_352c = 0;
              local_3528 = 0;
              local_3524 = 1;
              local_3520 = vDefaultStart2D;
              local_3518 = vDefaultStart2D;
              local_3510 = 0;
              local_350c = 0;
              local_3508 = 0;
              local_3504 = 0;
              local_34f8 = 0;
              local_34f4 = 0;
              local_34f0 = 0x3f800000;
              local_34ec = 0x3f800000;
              local_34e8 = 0;
              local_34e4 = 0;
              local_34e0 = 0;
              local_34dc = 0;
              local_34d8 = 0;
              local_34d4 = 0;
              local_34d0 = 0;
              local_34c8 = 2;
              local_34c4 = 0;
              local_34c0 = 0;
              local_34bc = 0;
              local_34b8 = 0;
              local_34b4 = 0;
              local_34b0 = 0;
              local_34a8 = (RibbonEmitter *)0x0;
              local_3458 = 0;
              local_3450 = 1;
              local_34a0[0] = &PTR__SceneObject2D_005dd3d0;
              /* try { // try from 004fb39a to 004fb39e has its CatchHandler @ 004fdf96 */
              CriticalSection__CriticalSection(local_3448);
              local_3420 = 0;
              local_341c = 0;
              local_3418 = 0x3f800000;
              local_3414 = 0;
              local_3410 = 0;
              local_340c = 0;
              local_3408 = 0;
              local_3404 = 1;
              local_3400 = vDefaultStart2D;
              local_33f8 = vDefaultStart2D;
              local_33f0 = 0;
              local_33ec = 0;
              local_33e8 = 0;
              local_33e4 = 0;
              local_33d8 = 0;
              local_33d4 = 0;
              local_33d0 = 0x3f800000;
              local_33cc = 0x3f800000;
              local_33c8 = 0;
              local_33c4 = 0;
              local_33c0 = 0;
              local_33bc = 0;
              local_33b8 = 0;
              local_33b4 = 0;
              local_33b0 = 0;
              local_33a8 = 2;
              local_33a4 = 0;
              local_33a0 = 0;
              local_339c = 0;
              local_3398 = 0;
              local_3394 = 0;
              local_3390 = 0;
              local_3388 = (RibbonEmitter *)0x0;
              local_3338 = 0;
              local_3330 = 1;
              local_3380[0] = &PTR__SceneObject2D_005dd3d0;
              /* try { // try from 004fb537 to 004fb53b has its CatchHandler @ 004ff0e4 */
              CriticalSection__CriticalSection(local_3328);
              local_3300 = 0;
              local_32fc = 0;
              local_32f8 = 0x3f800000;
              local_32f4 = 0;
              local_32f0 = 0;
              local_32ec = 0;
              local_32e8 = 0;
              local_32e4 = 1;
              local_32e0 = vDefaultStart2D;
              local_32d8 = vDefaultStart2D;
              local_32d0 = 0;
              local_32cc = 0;
              local_32c8 = 0;
              local_32c4 = 0;
              local_32b8 = 0;
              local_32b4 = 0;
              local_32b0 = 0x3f800000;
              local_32ac = 0x3f800000;
              local_32a8 = 0;
              local_32a4 = 0;
              local_32a0 = 0;
              local_329c = 0;
              local_3298 = 0;
              local_3294 = 0;
              local_3290 = 0;
              local_3288 = 2;
              local_3284 = 0;
              local_3280 = 0;
              local_327c = 0;
              local_3278 = 0;
              local_3274 = 0;
              local_3270 = 0;
              local_3268 = (RibbonEmitter *)0x0;
              local_3218 = 0;
              local_3210 = 1;
              local_3260[0] = &PTR__SceneObject2D_005dd3d0;
              /* try { // try from 004fb6d4 to 004fb6d8 has its CatchHandler @ 004ff213 */
              CriticalSection__CriticalSection(local_3208);
              local_31e0 = 0;
              local_31dc = 0;
              local_31d8 = 0x3f800000;
              local_31d4 = 0;
              local_31d0 = 0;
              local_31cc = 0;
              local_31c8 = 0;
              local_31c4 = 1;
              local_31c0 = vDefaultStart2D;
              local_31b8 = vDefaultStart2D;
              local_31b0 = 0;
              local_31ac = 0;
              local_31a8 = 0;
              local_31a4 = 0;
              local_3198 = 0;
              local_3194 = 0;
              local_3190 = 0x3f800000;
              local_318c = 0x3f800000;
              local_3188 = 0;
              local_3184 = 0;
              local_3180 = 0;
              local_317c = 0;
              local_3178 = 0;
              local_3174 = 0;
              local_3170 = 0;
              local_3168 = 2;
              local_3164 = 0;
              local_3160 = 0;
              local_315c = 0;
              local_3158 = 0;
              local_3154 = 0;
              local_3150 = 0;
              local_3148 = (RibbonEmitter *)0x0;
              local_30f8 = 0;
              local_30f0 = 1;
              local_3140[0] = &PTR__SceneObject2D_005dd3d0;
              /* try { // try from 004fb871 to 004fb875 has its CatchHandler @ 004ff201 */
              CriticalSection__CriticalSection(local_30e8);
              local_30c0 = 0;
              local_30bc = 0;
              local_30b8 = 0x3f800000;
              local_30b4 = 0;
              local_30b0 = 0;
              local_30a0 = vDefaultStart2D;
              local_3098 = vDefaultStart2D;
              local_30ac = 0;
              local_30a8 = 0;
              local_30a4 = 1;
              local_3090 = 0;
              local_308c = 0;
              local_3088 = 0;
              local_3084 = 0;
              local_3078 = 0;
              local_3074 = 0;
              local_3070 = 0x3f800000;
              local_306c = 0x3f800000;
              local_3068 = 0;
              local_3064 = 0;
              local_3060 = 0;
              local_305c = 0;
              local_3058 = 0;
              local_3054 = 0;
              local_3050 = 0;
              local_3048 = 2;
              local_3044 = 0;
              local_3040 = 0;
              local_303c = 0;
              local_3038 = 0;
              local_3034 = 0;
              local_3030 = 0;
              local_3028 = (RibbonEmitter *)0x0;
              local_3b88 = *(long *)(self + (lVar27 + 0x16) * 0x10 + 8);
              local_3b70 = 3;
              *(uint32_t *)(local_3b88 + 0x48) = 0;
              local_4740[0x20] = SUB41(*(uint32_t *)(self + 0x432c), 0);
              local_3b7c = (float)*(int *)(*(long *)(self + (lVar27 + 0x16) * 0x10 + 8) + 0x54) *
                           DAT_005c01d0 /* R:0.0010000000474974513f */;
              if (SystemCaps._4_4_ - 1U < 2) {
                local_1d0 = (QuakeEmitter *)0x3f6dedee3f6dedee;
                local_1c8 = 0x3f6dedee;
                local_1c0 = _DAT_005c72f0 /* R:0.929411768913269f */;
                local_1c4 = 0x3dcccccd;
                local_1b8 = _UNK_005c72f8;
                local_1d8 = (QuakeEmitter *)0x40a00000;
                local_1b0 = 0x14;
                /* try { // try from 004fbe01 to 004fbe05 has its CatchHandler @ 004ff15b */
                pRVar16 = operator_new(0x70);
                /* try { // try from 004fbe0f to 004fbe13 has its CatchHandler @ 004ff135 */
                RibbonEmitter__RibbonEmitter__0059ac20(pRVar16,
                                                       (RibbonEmitterCreation *)&local_1d8);
                local_3a48 = pRVar16;
                /* try { // try from 004fbe21 to 004fbe25 has its CatchHandler @ 004ff15b */
                pRVar16 = operator_new(0x70);
                /* try { // try from 004fbe2f to 004fbe33 has its CatchHandler @ 004ff135 */
                RibbonEmitter__RibbonEmitter__0059ac20(pRVar16,
                                                       (RibbonEmitterCreation *)&local_1d8);
                local_3928 = pRVar16;
                /* try { // try from 004fbe41 to 004fbe45 has its CatchHandler @ 004ff15b */
                pRVar16 = operator_new(0x70);
                /* try { // try from 004fbe4f to 004fbe53 has its CatchHandler @ 004ff135 */
                RibbonEmitter__RibbonEmitter__0059ac20(pRVar16,
                                                       (RibbonEmitterCreation *)&local_1d8);
                local_3808 = pRVar16;
                /* try { // try from 004fbe61 to 004fbe65 has its CatchHandler @ 004ff15b */
                pRVar16 = operator_new(0x70);
                /* try { // try from 004fbe6f to 004fbe73 has its CatchHandler @ 004ff135 */
                RibbonEmitter__RibbonEmitter__0059ac20(pRVar16,
                                                       (RibbonEmitterCreation *)&local_1d8);
                local_36e8 = pRVar16;
                /* try { // try from 004fbe81 to 004fbe85 has its CatchHandler @ 004ff15b */
                pRVar16 = operator_new(0x70);
                /* try { // try from 004fbe8f to 004fbe93 has its CatchHandler @ 004ff135 */
                RibbonEmitter__RibbonEmitter__0059ac20(pRVar16,
                                                       (RibbonEmitterCreation *)&local_1d8);
                local_35c8 = pRVar16;
                /* try { // try from 004fbea1 to 004fbea5 has its CatchHandler @ 004ff15b */
                pRVar16 = operator_new(0x70);
                /* try { // try from 004fbeaf to 004fbeb3 has its CatchHandler @ 004ff135 */
                RibbonEmitter__RibbonEmitter__0059ac20(pRVar16,
                                                       (RibbonEmitterCreation *)&local_1d8);
                local_34a8 = pRVar16;
                /* try { // try from 004fbec1 to 004fbec5 has its CatchHandler @ 004ff15b */
                pRVar16 = operator_new(0x70);
                /* try { // try from 004fbecf to 004fbed3 has its CatchHandler @ 004ff135 */
                RibbonEmitter__RibbonEmitter__0059ac20(pRVar16,
                                                       (RibbonEmitterCreation *)&local_1d8);
                local_3388 = pRVar16;
                /* try { // try from 004fbee1 to 004fbee5 has its CatchHandler @ 004ff15b */
                pRVar16 = operator_new(0x70);
                /* try { // try from 004fbeef to 004fbef3 has its CatchHandler @ 004ff135 */
                RibbonEmitter__RibbonEmitter__0059ac20(pRVar16,
                                                       (RibbonEmitterCreation *)&local_1d8);
                local_3268 = pRVar16;
                /* try { // try from 004fbf01 to 004fbf05 has its CatchHandler @ 004ff15b */
                pRVar16 = operator_new(0x70);
                /* try { // try from 004fbf0f to 004fbf13 has its CatchHandler @ 004ff135 */
                RibbonEmitter__RibbonEmitter__0059ac20(pRVar16,
                                                       (RibbonEmitterCreation *)&local_1d8);
                local_3148 = pRVar16;
                /* try { // try from 004fbf21 to 004fbf25 has its CatchHandler @ 004ff15b */
                pRVar16 = operator_new(0x70);
                /* try { // try from 004fbf2f to 004fbf33 has its CatchHandler @ 004ff135 */
                RibbonEmitter__RibbonEmitter__0059ac20(pRVar16,
                                                       (RibbonEmitterCreation *)&local_1d8);
                local_3028 = pRVar16;
              }
              /* try { // try from 004fba56 to 004fba5a has its CatchHandler @ 004ff1fc */
              uVar10 =
                  ResizeableArray_SMBShooter__Add((SMBShooter *)(self + 0x3ea0), (int)&local_3b88);
              local_118 = CONCAT44(uStack_4704, uVar10);
              local_110 = extraout_RDX_00;
              SceneObject2D__SceneObject2D__0059b220((SceneObject2D *)local_3140);
              SceneObject2D__SceneObject2D__0059b220((SceneObject2D *)local_3260);
              SceneObject2D__SceneObject2D__0059b220((SceneObject2D *)local_3380);
              SceneObject2D__SceneObject2D__0059b220((SceneObject2D *)local_34a0);
              SceneObject2D__SceneObject2D__0059b220((SceneObject2D *)local_35c0);
              SceneObject2D__SceneObject2D__0059b220((SceneObject2D *)local_36e0);
              SceneObject2D__SceneObject2D__0059b220((SceneObject2D *)local_3800);
              SceneObject2D__SceneObject2D__0059b220((SceneObject2D *)local_3920);
              SceneObject2D__SceneObject2D__0059b220((SceneObject2D *)local_3a40);
              SceneObject2D__SceneObject2D__0059b220((SceneObject2D *)local_3b60);
            } else {
              uVar8 = (uint)(byte)QVar2;
              if (((uVar8 == *(uint *)(self + 0x4364)) || (uVar8 == *(uint *)(self + 0x4368))) ||
                  (uVar8 == *(uint *)(self + 0x436c))) {
                local_3018 = 0;
                local_3010 = 0x3f800000;
                local_300c = 0.0;
                local_3008 = 0;
                local_3004 = 0;
                local_3000 = 0;
                local_2ffc = 0;
                local_2ff8 = 0;
                local_2ff4 = 0x3f800000;
                local_2fa8 = 0;
                local_2fa0 = 1;
                local_2ff0[0] = &PTR__SceneObject2D_005dd3d0;
                /* try { // try from 004fbfd7 to 004fbfdb has its CatchHandler @ 004ff126 */
                CriticalSection__CriticalSection(local_2f98);
                local_2f70 = 0;
                local_2f6c = 0;
                local_2f68 = 0x3f800000;
                local_2f64 = 0;
                local_2f60 = 0;
                local_2f5c = 0;
                local_2f58 = 0;
                local_2f54 = 1;
                local_2f50 = vDefaultStart2D;
                local_2f48 = vDefaultStart2D;
                local_2f40 = 0;
                local_2f3c = 0;
                local_2f38 = 0;
                local_2f34 = 0;
                local_2f28 = 0;
                local_2f24 = 0;
                local_2f20 = 0x3f800000;
                local_2f1c = 0x3f800000;
                local_2f18 = 0;
                local_2f14 = 0;
                local_2f10 = 0;
                local_2f0c = 0;
                local_2f08 = 0;
                local_2f04 = 0;
                local_2f00 = 0;
                local_2ef8 = 2;
                local_2ef4 = 0;
                local_2ef0 = 0;
                local_2eec = 0;
                local_2ee8 = 0;
                local_2ee4 = 0;
                local_2ee0 = 0;
                local_2ed8 = 0;
                local_2e88 = 0;
                local_2e80 = 1;
                local_2ed0[0] = &PTR__SceneObject2D_005dd3d0;
                /* try { // try from 004fc174 to 004fc178 has its CatchHandler @ 004fefc1 */
                CriticalSection__CriticalSection(local_2e78);
                local_2e50 = 0;
                local_2e4c = 0;
                local_2e48 = 0x3f800000;
                local_2e44 = 0;
                local_2e40 = 0;
                local_2e3c = 0;
                local_2e38 = 0;
                local_2e34 = 1;
                local_2e30 = vDefaultStart2D;
                local_2e28 = vDefaultStart2D;
                local_2e20 = 0;
                local_2e1c = 0;
                local_2e18 = 0;
                local_2e14 = 0;
                local_2e08 = 0;
                local_2e04 = 0;
                local_2e00 = 0x3f800000;
                local_2dfc = 0x3f800000;
                local_2df8 = 0;
                local_2df4 = 0;
                local_2df0 = 0;
                local_2dec = 0;
                local_2de8 = 0;
                local_2de4 = 0;
                local_2de0 = 0;
                local_2dd8 = 2;
                local_2dd4 = 0;
                local_2dd0 = 0;
                local_2dcc = 0;
                local_2dc8 = 0;
                local_2dc4 = 0;
                local_2dc0 = 0;
                local_2db8 = 0;
                local_2d68 = 0;
                local_2d60 = 1;
                local_2db0[0] = &PTR__SceneObject2D_005dd3d0;
                /* try { // try from 004fc311 to 004fc315 has its CatchHandler @ 004fefaf */
                CriticalSection__CriticalSection(local_2d58);
                local_2d30 = 0;
                local_2d2c = 0;
                local_2d28 = 0x3f800000;
                local_2d24 = 0;
                local_2d20 = 0;
                local_2d1c = 0;
                local_2d18 = 0;
                local_2d14 = 1;
                local_2d10 = vDefaultStart2D;
                local_2d08 = vDefaultStart2D;
                local_2d00 = 0;
                local_2cfc = 0;
                local_2cf8 = 0;
                local_2cf4 = 0;
                local_2ce8 = 0;
                local_2ce4 = 0;
                local_2ce0 = 0x3f800000;
                local_2cdc = 0x3f800000;
                local_2cd8 = 0;
                local_2cd4 = 0;
                local_2cd0 = 0;
                local_2ccc = 0;
                local_2cc8 = 0;
                local_2cc4 = 0;
                local_2cc0 = 0;
                local_2cb8 = 2;
                local_2cb4 = 0;
                local_2cb0 = 0;
                local_2cac = 0;
                local_2ca8 = 0;
                local_2ca4 = 0;
                local_2ca0 = 0;
                local_2c98 = 0;
                local_2c48 = 0;
                local_2c40 = 1;
                local_2c90[0] = &PTR__SceneObject2D_005dd3d0;
                /* try { // try from 004fc4ae to 004fc4b2 has its CatchHandler @ 004fef9d */
                CriticalSection__CriticalSection(local_2c38);
                local_2c10 = 0;
                local_2c0c = 0;
                local_2c08 = 0x3f800000;
                local_2c04 = 0;
                local_2c00 = 0;
                local_2bfc = 0;
                local_2bf8 = 0;
                local_2bf4 = 1;
                local_2bf0 = vDefaultStart2D;
                local_2be8 = vDefaultStart2D;
                local_2be0 = 0;
                local_2bdc = 0;
                local_2bd8 = 0;
                local_2bd4 = 0;
                local_2bc8 = 0;
                local_2bc4 = 0;
                local_2bc0 = 0x3f800000;
                local_2bbc = 0x3f800000;
                local_2bb8 = 0;
                local_2bb4 = 0;
                local_2bb0 = 0;
                local_2bac = 0;
                local_2ba8 = 0;
                local_2ba4 = 0;
                local_2ba0 = 0;
                local_2b98 = 2;
                local_2b94 = 0;
                local_2b90 = 0;
                local_2b8c = 0;
                local_2b88 = 0;
                local_2b84 = 0;
                local_2b80 = 0;
                local_2b78 = 0;
                local_2b28 = 0;
                local_2b20 = 1;
                local_2b70[0] = &PTR__SceneObject2D_005dd3d0;
                /* try { // try from 004fc64b to 004fc64f has its CatchHandler @ 004fef8b */
                CriticalSection__CriticalSection(local_2b18);
                local_2af0 = 0;
                local_2aec = 0;
                local_2ae8 = 0x3f800000;
                local_2ae4 = 0;
                local_2ae0 = 0;
                local_2adc = 0;
                local_2ad8 = 0;
                local_2ad4 = 1;
                local_2ad0 = vDefaultStart2D;
                local_2ac8 = vDefaultStart2D;
                local_2ac0 = 0;
                local_2abc = 0;
                local_2ab8 = 0;
                local_2ab4 = 0;
                local_2aa8 = 0;
                local_2aa4 = 0;
                local_2aa0 = 0x3f800000;
                local_2a9c = 0x3f800000;
                local_2a98 = 0;
                local_2a94 = 0;
                local_2a90 = 0;
                local_2a8c = 0;
                local_2a88 = 0;
                local_2a84 = 0;
                local_2a80 = 0;
                local_2a78 = 2;
                local_2a74 = 0;
                local_2a70 = 0;
                local_2a6c = 0;
                local_2a68 = 0;
                local_2a64 = 0;
                local_2a60 = 0;
                local_2a58 = 0;
                local_2a08 = 0;
                local_2a00 = 1;
                local_2a50[0] = &PTR__SceneObject2D_005dd3d0;
                /* try { // try from 004fc7e8 to 004fc7ec has its CatchHandler @ 004fef7c */
                CriticalSection__CriticalSection(local_29f8);
                local_29d0 = 0;
                local_29cc = 0;
                local_29c8 = 0x3f800000;
                local_29c4 = 0;
                local_29c0 = 0;
                local_29bc = 0;
                local_29b8 = 0;
                local_29b4 = 1;
                local_29b0 = vDefaultStart2D;
                local_29a8 = vDefaultStart2D;
                local_29a0 = 0;
                local_299c = 0;
                local_2998 = 0;
                local_2994 = 0;
                local_2988 = 0;
                local_2984 = 0;
                local_2980 = 0x3f800000;
                local_297c = 0x3f800000;
                local_2978 = 0;
                local_2974 = 0;
                local_2970 = 0;
                local_296c = 0;
                local_2968 = 0;
                local_2964 = 0;
                local_2960 = 0;
                local_2958 = 2;
                local_2954 = 0;
                local_2950 = 0;
                local_294c = 0;
                local_2948 = 0;
                local_2944 = 0;
                local_2940 = 0;
                local_2938 = 0;
                local_28e8 = 0;
                local_28e0 = 1;
                local_2930[0] = &PTR__SceneObject2D_005dd3d0;
                /* try { // try from 004fc985 to 004fc989 has its CatchHandler @ 004fef6d */
                CriticalSection__CriticalSection(local_28d8);
                local_28b0 = 0;
                local_28ac = 0;
                local_28a8 = 0x3f800000;
                local_28a4 = 0;
                local_28a0 = 0;
                local_289c = 0;
                local_2898 = 0;
                local_2894 = 1;
                local_2890 = vDefaultStart2D;
                local_2888 = vDefaultStart2D;
                local_2880 = 0;
                local_287c = 0;
                local_2878 = 0;
                local_2874 = 0;
                local_2868 = 0;
                local_2864 = 0;
                local_2860 = 0x3f800000;
                local_285c = 0x3f800000;
                local_2858 = 0;
                local_2854 = 0;
                local_2850 = 0;
                local_284c = 0;
                local_2848 = 0;
                local_2844 = 0;
                local_2840 = 0;
                local_2838 = 2;
                local_2834 = 0;
                local_2830 = 0;
                local_282c = 0;
                local_2828 = 0;
                local_2824 = 0;
                local_2820 = 0;
                local_2818 = 0;
                local_27c8 = 0;
                local_27c0 = 1;
                local_2810[0] = &PTR__SceneObject2D_005dd3d0;
                /* try { // try from 004fcb22 to 004fcb26 has its CatchHandler @ 004fef5e */
                CriticalSection__CriticalSection(local_27b8);
                local_2790 = 0;
                local_278c = 0;
                local_2788 = 0x3f800000;
                local_2784 = 0;
                local_2780 = 0;
                local_277c = 0;
                local_2778 = 0;
                local_2774 = 1;
                local_2770 = vDefaultStart2D;
                local_2768 = vDefaultStart2D;
                local_2760 = 0;
                local_275c = 0;
                local_2758 = 0;
                local_2754 = 0;
                local_2748 = 0;
                local_2744 = 0;
                local_2740 = 0x3f800000;
                local_273c = 0x3f800000;
                local_2738 = 0;
                local_2734 = 0;
                local_2730 = 0;
                local_272c = 0;
                local_2728 = 0;
                local_2724 = 0;
                local_2720 = 0;
                local_2718 = 2;
                local_2714 = 0;
                local_2710 = 0;
                local_270c = 0;
                local_2708 = 0;
                local_2704 = 0;
                local_2700 = 0;
                local_26f8 = 0;
                local_26a8 = 0;
                local_26a0 = 1;
                local_26f0[0] = &PTR__SceneObject2D_005dd3d0;
                /* try { // try from 004fccbf to 004fccc3 has its CatchHandler @ 004fef4f */
                CriticalSection__CriticalSection(local_2698);
                local_2670 = 0;
                local_266c = 0;
                local_2668 = 0x3f800000;
                local_2664 = 0;
                local_2660 = 0;
                local_265c = 0;
                local_2658 = 0;
                local_2654 = 1;
                local_2650 = vDefaultStart2D;
                local_2648 = vDefaultStart2D;
                local_2640 = 0;
                local_263c = 0;
                local_2638 = 0;
                local_2634 = 0;
                local_2628 = 0;
                local_2624 = 0;
                local_2620 = 0x3f800000;
                local_261c = 0x3f800000;
                local_2618 = 0;
                local_2614 = 0;
                local_2610 = 0;
                local_260c = 0;
                local_2608 = 0;
                local_2604 = 0;
                local_2600 = 0;
                local_25f8 = 2;
                local_25f4 = 0;
                local_25f0 = 0;
                local_25ec = 0;
                local_25e8 = 0;
                local_25e4 = 0;
                local_25e0 = 0;
                local_25d8 = 0;
                local_2588 = 0;
                local_2580 = 1;
                local_25d0[0] = &PTR__SceneObject2D_005dd3d0;
                /* try { // try from 004fce5c to 004fce60 has its CatchHandler @ 004feefe */
                CriticalSection__CriticalSection(local_2578);
                local_2550 = 0;
                local_254c = 0;
                local_2548 = 0x3f800000;
                local_2544 = 0;
                local_2540 = 0;
                local_2530 = vDefaultStart2D;
                local_2528 = vDefaultStart2D;
                local_253c = 0;
                local_2538 = 0;
                local_2534 = 1;
                local_2520 = 0;
                local_251c = 0;
                local_2518 = 0;
                local_2514 = 0;
                local_2508 = 0;
                local_2504 = 0;
                local_2500 = 0x3f800000;
                local_24fc = 0x3f800000;
                local_24f8 = 0;
                local_24f4 = 0;
                local_24f0 = 0;
                local_24ec = 0;
                local_24e8 = 0;
                local_24e4 = 0;
                local_24e0 = 0;
                local_24d8 = 2;
                local_24d4 = 0;
                local_24d0 = 0;
                local_24cc = 0;
                local_24c8 = 0;
                local_24c4 = 0;
                local_24c0 = 0;
                local_24b8 = 0;
                local_3018 = *(long *)(self + (lVar27 + 0x16) * 0x10 + 8);
                local_3000 = 4;
                *(uint32_t *)(local_3018 + 0x48) = 0;
                local_4740[0x20] = SUB41(*(uint32_t *)(self + 0x4364), 0);
                local_300c = (float)*(int *)(*(long *)(self + (lVar27 + 0x16) * 0x10 + 8) + 0x54) *
                             DAT_005c01d0 /* R:0.0010000000474974513f */;
                /* try { // try from 004fd02f to 004fd033 has its CatchHandler @ 004feee6 */
                uVar10 = ResizeableArray_SMBShooter__Add((SMBShooter *)(self + 0x3ea0),
                                                         (int)&local_3018);
                local_108 = CONCAT44(uStack_4704, uVar10);
                local_100 = extraout_RDX_01;
                SceneObject2D__SceneObject2D__0059b220((SceneObject2D *)local_25d0);
                SceneObject2D__SceneObject2D__0059b220((SceneObject2D *)local_26f0);
                SceneObject2D__SceneObject2D__0059b220((SceneObject2D *)local_2810);
                SceneObject2D__SceneObject2D__0059b220((SceneObject2D *)local_2930);
                SceneObject2D__SceneObject2D__0059b220((SceneObject2D *)local_2a50);
                SceneObject2D__SceneObject2D__0059b220((SceneObject2D *)local_2b70);
                SceneObject2D__SceneObject2D__0059b220((SceneObject2D *)local_2c90);
                SceneObject2D__SceneObject2D__0059b220((SceneObject2D *)local_2db0);
                SceneObject2D__SceneObject2D__0059b220((SceneObject2D *)local_2ed0);
                SceneObject2D__SceneObject2D__0059b220((SceneObject2D *)local_2ff0);
              } else if (((uVar8 == *(uint *)(self + 0x4348)) ||
                          (uVar8 == *(uint *)(self + 0x4350))) ||
                         (uVar8 == *(uint *)(self + 0x434c))) {
                local_24a8 = 0;
                local_24a0 = 0x3f800000;
                local_249c = 0.0;
                local_2498 = 0;
                local_2494 = 0;
                local_2490 = 0;
                local_248c = 0;
                local_2488 = 0;
                local_2484 = 0x3f800000;
                local_2438 = 0;
                local_2430 = 1;
                local_2480[0] = &PTR__SceneObject2D_005dd3d0;
                /* try { // try from 004f834f to 004f8353 has its CatchHandler @ 004ff187 */
                CriticalSection__CriticalSection(local_2428);
                local_2400 = 0;
                local_23fc = 0;
                local_23f8 = 0x3f800000;
                local_23f4 = 0;
                local_23f0 = 0;
                local_23ec = 0;
                local_23e8 = 0;
                local_23e4 = 1;
                local_23e0 = vDefaultStart2D;
                local_23d8 = vDefaultStart2D;
                local_23d0 = 0;
                local_23cc = 0;
                local_23c8 = 0;
                local_23c4 = 0;
                local_23b8 = 0;
                local_23b4 = 0;
                local_23b0 = 0x3f800000;
                local_23ac = 0x3f800000;
                local_23a8 = 0;
                local_23a4 = 0;
                local_23a0 = 0;
                local_239c = 0;
                local_2398 = 0;
                local_2394 = 0;
                local_2390 = 0;
                local_2388 = 2;
                local_2384 = 0;
                local_2380 = 0;
                local_237c = 0;
                local_2378 = 0;
                local_2374 = 0;
                local_2370 = 0;
                local_2368 = (RibbonEmitter *)0x0;
                local_2318 = 0;
                local_2310 = 1;
                local_2360[0] = &PTR__SceneObject2D_005dd3d0;
                /* try { // try from 004f84ec to 004f84f0 has its CatchHandler @ 004ff175 */
                CriticalSection__CriticalSection(local_2308);
                local_22e0 = 0;
                local_22dc = 0;
                local_22d8 = 0x3f800000;
                local_22d4 = 0;
                local_22d0 = 0;
                local_22cc = 0;
                local_22c8 = 0;
                local_22c4 = 1;
                local_22c0 = vDefaultStart2D;
                local_22b8 = vDefaultStart2D;
                local_22b0 = 0;
                local_22ac = 0;
                local_22a8 = 0;
                local_22a4 = 0;
                local_2298 = 0;
                local_2294 = 0;
                local_2290 = 0x3f800000;
                local_228c = 0x3f800000;
                local_2288 = 0;
                local_2284 = 0;
                local_2280 = 0;
                local_227c = 0;
                local_2278 = 0;
                local_2274 = 0;
                local_2270 = 0;
                local_2268 = 2;
                local_2264 = 0;
                local_2260 = 0;
                local_225c = 0;
                local_2258 = 0;
                local_2254 = 0;
                local_2250 = 0;
                local_2248 = (RibbonEmitter *)0x0;
                local_21f8 = 0;
                local_21f0 = 1;
                local_2240[0] = &PTR__SceneObject2D_005dd3d0;
                /* try { // try from 004f8689 to 004f868d has its CatchHandler @ 004ff093 */
                CriticalSection__CriticalSection(local_21e8);
                local_21c0 = 0;
                local_21bc = 0;
                local_21b8 = 0x3f800000;
                local_21b4 = 0;
                local_21b0 = 0;
                local_21ac = 0;
                local_21a8 = 0;
                local_21a4 = 1;
                local_21a0 = vDefaultStart2D;
                local_2198 = vDefaultStart2D;
                local_2190 = 0;
                local_218c = 0;
                local_2188 = 0;
                local_2184 = 0;
                local_2178 = 0;
                local_2174 = 0;
                local_2170 = 0x3f800000;
                local_216c = 0x3f800000;
                local_2168 = 0;
                local_2164 = 0;
                local_2160 = 0;
                local_215c = 0;
                local_2158 = 0;
                local_2154 = 0;
                local_2150 = 0;
                local_2148 = 2;
                local_2144 = 0;
                local_2140 = 0;
                local_213c = 0;
                local_2138 = 0;
                local_2134 = 0;
                local_2130 = 0;
                local_2128 = (RibbonEmitter *)0x0;
                local_20d8 = 0;
                local_20d0 = 1;
                local_2120[0] = &PTR__SceneObject2D_005dd3d0;
                /* try { // try from 004f8826 to 004f882a has its CatchHandler @ 004ff114 */
                CriticalSection__CriticalSection(local_20c8);
                local_20a0 = 0;
                local_209c = 0;
                local_2098 = 0x3f800000;
                local_2094 = 0;
                local_2090 = 0;
                local_208c = 0;
                local_2088 = 0;
                local_2084 = 1;
                local_2080 = vDefaultStart2D;
                local_2078 = vDefaultStart2D;
                local_2070 = 0;
                local_206c = 0;
                local_2068 = 0;
                local_2064 = 0;
                local_2058 = 0;
                local_2054 = 0;
                local_2050 = 0x3f800000;
                local_204c = 0x3f800000;
                local_2048 = 0;
                local_2044 = 0;
                local_2040 = 0;
                local_203c = 0;
                local_2038 = 0;
                local_2034 = 0;
                local_2030 = 0;
                local_2028 = 2;
                local_2024 = 0;
                local_2020 = 0;
                local_201c = 0;
                local_2018 = 0;
                local_2014 = 0;
                local_2010 = 0;
                local_2008 = (RibbonEmitter *)0x0;
                local_1fb8 = 0;
                local_1fb0 = 1;
                local_2000[0] = &PTR__SceneObject2D_005dd3d0;
                /* try { // try from 004f89c3 to 004f89c7 has its CatchHandler @ 004ff105 */
                CriticalSection__CriticalSection(local_1fa8);
                local_1f80 = 0;
                local_1f7c = 0;
                local_1f78 = 0x3f800000;
                local_1f74 = 0;
                local_1f70 = 0;
                local_1f6c = 0;
                local_1f68 = 0;
                local_1f64 = 1;
                local_1f60 = vDefaultStart2D;
                local_1f58 = vDefaultStart2D;
                local_1f50 = 0;
                local_1f4c = 0;
                local_1f48 = 0;
                local_1f44 = 0;
                local_1f38 = 0;
                local_1f34 = 0;
                local_1f30 = 0x3f800000;
                local_1f2c = 0x3f800000;
                local_1f28 = 0;
                local_1f24 = 0;
                local_1f20 = 0;
                local_1f1c = 0;
                local_1f18 = 0;
                local_1f14 = 0;
                local_1f10 = 0;
                local_1f08 = 2;
                local_1f04 = 0;
                local_1f00 = 0;
                local_1efc = 0;
                local_1ef8 = 0;
                local_1ef4 = 0;
                local_1ef0 = 0;
                local_1ee8 = (RibbonEmitter *)0x0;
                local_1e98 = 0;
                local_1e90 = 1;
                local_1ee0[0] = &PTR__SceneObject2D_005dd3d0;
                /* try { // try from 004f8b60 to 004f8b64 has its CatchHandler @ 004ff0f6 */
                CriticalSection__CriticalSection(local_1e88);
                local_1e60 = 0;
                local_1e5c = 0;
                local_1e58 = 0x3f800000;
                local_1e54 = 0;
                local_1e50 = 0;
                local_1e4c = 0;
                local_1e48 = 0;
                local_1e44 = 1;
                local_1e40 = vDefaultStart2D;
                local_1e38 = vDefaultStart2D;
                local_1e30 = 0;
                local_1e2c = 0;
                local_1e28 = 0;
                local_1e24 = 0;
                local_1e18 = 0;
                local_1e14 = 0;
                local_1e10 = 0x3f800000;
                local_1e0c = 0x3f800000;
                local_1e08 = 0;
                local_1e04 = 0;
                local_1e00 = 0;
                local_1dfc = 0;
                local_1df8 = 0;
                local_1df4 = 0;
                local_1df0 = 0;
                local_1de8 = 2;
                local_1de4 = 0;
                local_1de0 = 0;
                local_1ddc = 0;
                local_1dd8 = 0;
                local_1dd4 = 0;
                local_1dd0 = 0;
                local_1dc8 = (RibbonEmitter *)0x0;
                local_1d78 = 0;
                local_1d70 = 1;
                local_1dc0[0] = &PTR__SceneObject2D_005dd3d0;
                /* try { // try from 004f8cfd to 004f8d01 has its CatchHandler @ 004ff1ea */
                CriticalSection__CriticalSection(local_1d68);
                local_1d40 = 0;
                local_1d3c = 0;
                local_1d38 = 0x3f800000;
                local_1d34 = 0;
                local_1d30 = 0;
                local_1d2c = 0;
                local_1d28 = 0;
                local_1d24 = 1;
                local_1d20 = vDefaultStart2D;
                local_1d18 = vDefaultStart2D;
                local_1d10 = 0;
                local_1d0c = 0;
                local_1d08 = 0;
                local_1d04 = 0;
                local_1cf8 = 0;
                local_1cf4 = 0;
                local_1cf0 = 0x3f800000;
                local_1cec = 0x3f800000;
                local_1ce8 = 0;
                local_1ce4 = 0;
                local_1ce0 = 0;
                local_1cdc = 0;
                local_1cd8 = 0;
                local_1cd4 = 0;
                local_1cd0 = 0;
                local_1cc8 = 2;
                local_1cc4 = 0;
                local_1cc0 = 0;
                local_1cbc = 0;
                local_1cb8 = 0;
                local_1cb4 = 0;
                local_1cb0 = 0;
                local_1ca8 = (RibbonEmitter *)0x0;
                local_1c58 = 0;
                local_1c50 = 1;
                local_1ca0[0] = &PTR__SceneObject2D_005dd3d0;
                /* try { // try from 004f8e9a to 004f8e9e has its CatchHandler @ 004ff1d8 */
                CriticalSection__CriticalSection(local_1c48);
                local_1c20 = 0;
                local_1c1c = 0;
                local_1c18 = 0x3f800000;
                local_1c14 = 0;
                local_1c10 = 0;
                local_1c0c = 0;
                local_1c08 = 0;
                local_1c04 = 1;
                local_1c00 = vDefaultStart2D;
                local_1bf8 = vDefaultStart2D;
                local_1bf0 = 0;
                local_1bec = 0;
                local_1be8 = 0;
                local_1be4 = 0;
                local_1bd8 = 0;
                local_1bd4 = 0;
                local_1bd0 = 0x3f800000;
                local_1bcc = 0x3f800000;
                local_1bc8 = 0;
                local_1bc4 = 0;
                local_1bc0 = 0;
                local_1bbc = 0;
                local_1bb8 = 0;
                local_1bb4 = 0;
                local_1bb0 = 0;
                local_1ba8 = 2;
                local_1ba4 = 0;
                local_1ba0 = 0;
                local_1b9c = 0;
                local_1b98 = 0;
                local_1b94 = 0;
                local_1b90 = 0;
                local_1b88 = (RibbonEmitter *)0x0;
                local_1b38 = 0;
                local_1b30 = 1;
                local_1b80[0] = &PTR__SceneObject2D_005dd3d0;
                /* try { // try from 004f9037 to 004f903b has its CatchHandler @ 004ff1c6 */
                CriticalSection__CriticalSection(local_1b28);
                local_1b00 = 0;
                local_1afc = 0;
                local_1af8 = 0x3f800000;
                local_1af4 = 0;
                local_1af0 = 0;
                local_1aec = 0;
                local_1ae8 = 0;
                local_1ae4 = 1;
                local_1ae0 = vDefaultStart2D;
                local_1ad8 = vDefaultStart2D;
                local_1ad0 = 0;
                local_1acc = 0;
                local_1ac8 = 0;
                local_1ac4 = 0;
                local_1ab8 = 0;
                local_1ab4 = 0;
                local_1ab0 = 0x3f800000;
                local_1aac = 0x3f800000;
                local_1aa8 = 0;
                local_1aa4 = 0;
                local_1aa0 = 0;
                local_1a9c = 0;
                local_1a98 = 0;
                local_1a94 = 0;
                local_1a90 = 0;
                local_1a88 = 2;
                local_1a84 = 0;
                local_1a80 = 0;
                local_1a7c = 0;
                local_1a78 = 0;
                local_1a74 = 0;
                local_1a70 = 0;
                local_1a68 = (RibbonEmitter *)0x0;
                local_1a18 = 0;
                local_1a10 = 1;
                local_1a60[0] = &PTR__SceneObject2D_005dd3d0;
                /* try { // try from 004f91d4 to 004f91d8 has its CatchHandler @ 004ff1b4 */
                CriticalSection__CriticalSection(local_1a08);
                local_19e0 = 0;
                local_19dc = 0;
                local_19d8 = 0x3f800000;
                local_19d4 = 0;
                local_19d0 = 0;
                local_19c0 = vDefaultStart2D;
                local_19b8 = vDefaultStart2D;
                local_19cc = 0;
                local_19c8 = 0;
                local_19c4 = 1;
                local_19b0 = 0;
                local_19ac = 0;
                local_19a8 = 0;
                local_19a4 = 0;
                local_1998 = 0;
                local_1994 = 0;
                local_1990 = 0x3f800000;
                local_198c = 0x3f800000;
                local_1988 = 0;
                local_1984 = 0;
                local_1980 = 0;
                local_197c = 0;
                local_1978 = 0;
                local_1974 = 0;
                local_1970 = 0;
                local_1968 = 2;
                local_1964 = 0;
                local_1960 = 0;
                local_195c = 0;
                local_1958 = 0;
                local_1954 = 0;
                local_1950 = 0;
                local_1948 = (RibbonEmitter *)0x0;
                local_24a8 = *(long *)(self + (lVar27 + 0x16) * 0x10 + 8);
                local_2490 = 5;
                *(uint32_t *)(local_24a8 + 0x48) = 0;
                local_4740[0x20] = SUB41(*(uint32_t *)(self + 0x4348), 0);
                local_249c = (float)*(int *)(*(long *)(self + (lVar27 + 0x16) * 0x10 + 8) + 0x54) *
                             DAT_005c01d0 /* R:0.0010000000474974513f */;
                if (SystemCaps._4_4_ - 1U < 2) {
                  local_1d0 = (QuakeEmitter *)0x0;
                  local_1c8 = 0;
                  local_1c4 = 0x3dcccccd;
                  local_1c0 = 0;
                  local_1b8 = 0;
                  local_1d8 = (QuakeEmitter *)0x40c00000;
                  local_1b0 = 0x14;
                  /* try { // try from 004fd41a to 004fd41e has its CatchHandler @ 004ff063 */
                  pRVar16 = operator_new(0x70);
                  /* try { // try from 004fd428 to 004fd42c has its CatchHandler @ 004ff068 */
                  RibbonEmitter__RibbonEmitter__0059ac20(pRVar16,
                                                         (RibbonEmitterCreation *)&local_1d8);
                  local_2368 = pRVar16;
                  /* try { // try from 004fd43a to 004fd43e has its CatchHandler @ 004ff063 */
                  pRVar16 = operator_new(0x70);
                  /* try { // try from 004fd448 to 004fd44c has its CatchHandler @ 004ff068 */
                  RibbonEmitter__RibbonEmitter__0059ac20(pRVar16,
                                                         (RibbonEmitterCreation *)&local_1d8);
                  local_2248 = pRVar16;
                  /* try { // try from 004fd45a to 004fd45e has its CatchHandler @ 004ff063 */
                  pRVar16 = operator_new(0x70);
                  /* try { // try from 004fd468 to 004fd46c has its CatchHandler @ 004ff068 */
                  RibbonEmitter__RibbonEmitter__0059ac20(pRVar16,
                                                         (RibbonEmitterCreation *)&local_1d8);
                  local_2128 = pRVar16;
                  /* try { // try from 004fd47a to 004fd47e has its CatchHandler @ 004ff063 */
                  pRVar16 = operator_new(0x70);
                  /* try { // try from 004fd488 to 004fd48c has its CatchHandler @ 004ff068 */
                  RibbonEmitter__RibbonEmitter__0059ac20(pRVar16,
                                                         (RibbonEmitterCreation *)&local_1d8);
                  local_2008 = pRVar16;
                  /* try { // try from 004fd49a to 004fd49e has its CatchHandler @ 004ff063 */
                  pRVar16 = operator_new(0x70);
                  /* try { // try from 004fd4a8 to 004fd4ac has its CatchHandler @ 004ff068 */
                  RibbonEmitter__RibbonEmitter__0059ac20(pRVar16,
                                                         (RibbonEmitterCreation *)&local_1d8);
                  local_1ee8 = pRVar16;
                  /* try { // try from 004fd4ba to 004fd4be has its CatchHandler @ 004ff063 */
                  pRVar16 = operator_new(0x70);
                  /* try { // try from 004fd4c8 to 004fd4cc has its CatchHandler @ 004ff068 */
                  RibbonEmitter__RibbonEmitter__0059ac20(pRVar16,
                                                         (RibbonEmitterCreation *)&local_1d8);
                  local_1dc8 = pRVar16;
                  /* try { // try from 004fd4da to 004fd4de has its CatchHandler @ 004ff063 */
                  pRVar16 = operator_new(0x70);
                  /* try { // try from 004fd4e8 to 004fd4ec has its CatchHandler @ 004ff068 */
                  RibbonEmitter__RibbonEmitter__0059ac20(pRVar16,
                                                         (RibbonEmitterCreation *)&local_1d8);
                  local_1ca8 = pRVar16;
                  /* try { // try from 004fd4fa to 004fd4fe has its CatchHandler @ 004ff063 */
                  pRVar16 = operator_new(0x70);
                  /* try { // try from 004fd508 to 004fd50c has its CatchHandler @ 004ff068 */
                  RibbonEmitter__RibbonEmitter__0059ac20(pRVar16,
                                                         (RibbonEmitterCreation *)&local_1d8);
                  local_1b88 = pRVar16;
                  /* try { // try from 004fd51a to 004fd51e has its CatchHandler @ 004ff063 */
                  pRVar16 = operator_new(0x70);
                  /* try { // try from 004fd528 to 004fd52c has its CatchHandler @ 004ff068 */
                  RibbonEmitter__RibbonEmitter__0059ac20(pRVar16,
                                                         (RibbonEmitterCreation *)&local_1d8);
                  local_1a68 = pRVar16;
                  /* try { // try from 004fd53a to 004fd53e has its CatchHandler @ 004ff063 */
                  pRVar16 = operator_new(0x70);
                  /* try { // try from 004fd548 to 004fd54c has its CatchHandler @ 004ff068 */
                  RibbonEmitter__RibbonEmitter__0059ac20(pRVar16,
                                                         (RibbonEmitterCreation *)&local_1d8);
                  local_1948 = pRVar16;
                }
                /* try { // try from 004f93b9 to 004f93bd has its CatchHandler @ 004feece */
                uVar10 = ResizeableArray_SMBShooter__Add((SMBShooter *)(self + 0x3ea0),
                                                         (int)&local_24a8);
                local_f8 = CONCAT44(uStack_4704, uVar10);
                local_f0 = extraout_RDX;
                SceneObject2D__SceneObject2D__0059b220((SceneObject2D *)local_1a60);
                SceneObject2D__SceneObject2D__0059b220((SceneObject2D *)local_1b80);
                SceneObject2D__SceneObject2D__0059b220((SceneObject2D *)local_1ca0);
                SceneObject2D__SceneObject2D__0059b220((SceneObject2D *)local_1dc0);
                SceneObject2D__SceneObject2D__0059b220((SceneObject2D *)local_1ee0);
                SceneObject2D__SceneObject2D__0059b220((SceneObject2D *)local_2000);
                SceneObject2D__SceneObject2D__0059b220((SceneObject2D *)local_2120);
                SceneObject2D__SceneObject2D__0059b220((SceneObject2D *)local_2240);
                SceneObject2D__SceneObject2D__0059b220((SceneObject2D *)local_2360);
                SceneObject2D__SceneObject2D__0059b220((SceneObject2D *)local_2480);
              } else if (((uVar8 == *(uint *)(self + 0x42ec)) ||
                          (uVar8 == *(uint *)(self + 0x42f4))) ||
                         (uVar8 = (uint)(byte)QVar2, uVar8 == *(uint *)(self + 0x42f0))) {
                *(uint32_t *)(*(long *)(self + (lVar27 + 0x16) * 0x10 + 8) + 0x48) = 0;
                SMBShooter__SMBShooter((SMBShooter *)&local_1938);
                local_1938 = *(long *)(self + (lVar27 + 0x16) * 0x10 + 8);
                local_1920 = 1;
                local_192c = (float)*(int *)(local_1938 + 0x54) *
                             DAT_005c01d0 /* R:0.0010000000474974513f */;
                local_4740[0x20] = SUB41(*(uint32_t *)(self + 0x42ec), 0);
                if (SystemCaps._4_4_ - 1U < 2) {
                  local_1c8 = 0x3f800000;
                  local_1c4 = 0x3f800000;
                  local_1c0 = 0x3f80000042c80000;
                  local_1d8 = ::cWhite;
                  local_1b8 = 0xa00000000;
                  local_1b0 = 1;
                  local_1d0 = DAT_0081c008 /* R:1.0778787787586493e-41f */;
                  /* try { // try from 004fd70d to 004fd768 has its CatchHandler @ 004ff264 */
                  ColorConversion__ConvertRBGHEXToColor(0xfaffad, (ColorTemplate *)&local_1d8);
                  local_1c0 = 0x4080000043960000;
                  local_1c4 = 0x3dcccccd;
                  local_1c8 = 0x3e800000;
                  local_1b0 = 10;
                  local_1b8 = 0xa40800000;
                  pSVar18 = operator_new(0x78);
                  /* try { // try from 004fd772 to 004fd776 has its CatchHandler @ 004ff251 */
                  SparkEmitter__SparkEmitter__0059f5b0(pSVar18, (SparkEmitterCreation *)&local_1d8);
                  *(uint32_t *)(pSVar18 + 0x10) = 0;
                  local_17f8 = pSVar18;
                  /* try { // try from 004fd78b to 004fd78f has its CatchHandler @ 004ff264 */
                  pSVar18 = operator_new(0x78);
                  /* try { // try from 004fd799 to 004fd79d has its CatchHandler @ 004ff251 */
                  SparkEmitter__SparkEmitter__0059f5b0(pSVar18, (SparkEmitterCreation *)&local_1d8);
                  *(uint32_t *)(pSVar18 + 0x10) = 0;
                  local_16d8 = pSVar18;
                  /* try { // try from 004fd7b2 to 004fd7b6 has its CatchHandler @ 004ff264 */
                  pSVar18 = operator_new(0x78);
                  /* try { // try from 004fd7c0 to 004fd7c4 has its CatchHandler @ 004ff251 */
                  SparkEmitter__SparkEmitter__0059f5b0(pSVar18, (SparkEmitterCreation *)&local_1d8);
                  *(uint32_t *)(pSVar18 + 0x10) = 0;
                  local_15b8 = pSVar18;
                  /* try { // try from 004fd7d9 to 004fd7dd has its CatchHandler @ 004ff264 */
                  pSVar18 = operator_new(0x78);
                  /* try { // try from 004fd7e7 to 004fd7eb has its CatchHandler @ 004ff251 */
                  SparkEmitter__SparkEmitter__0059f5b0(pSVar18, (SparkEmitterCreation *)&local_1d8);
                  *(uint32_t *)(pSVar18 + 0x10) = 0;
                  local_1498 = pSVar18;
                  /* try { // try from 004fd800 to 004fd804 has its CatchHandler @ 004ff264 */
                  pSVar18 = operator_new(0x78);
                  /* try { // try from 004fd80e to 004fd812 has its CatchHandler @ 004ff251 */
                  SparkEmitter__SparkEmitter__0059f5b0(pSVar18, (SparkEmitterCreation *)&local_1d8);
                  *(uint32_t *)(pSVar18 + 0x10) = 0;
                  local_1378 = pSVar18;
                  /* try { // try from 004fd827 to 004fd82b has its CatchHandler @ 004ff264 */
                  pSVar18 = operator_new(0x78);
                  /* try { // try from 004fd835 to 004fd839 has its CatchHandler @ 004ff251 */
                  SparkEmitter__SparkEmitter__0059f5b0(pSVar18, (SparkEmitterCreation *)&local_1d8);
                  *(uint32_t *)(pSVar18 + 0x10) = 0;
                  local_1258 = pSVar18;
                  /* try { // try from 004fd84e to 004fd852 has its CatchHandler @ 004ff264 */
                  pSVar18 = operator_new(0x78);
                  /* try { // try from 004fd85c to 004fd860 has its CatchHandler @ 004ff251 */
                  SparkEmitter__SparkEmitter__0059f5b0(pSVar18, (SparkEmitterCreation *)&local_1d8);
                  *(uint32_t *)(pSVar18 + 0x10) = 0;
                  local_1138 = pSVar18;
                  /* try { // try from 004fd875 to 004fd879 has its CatchHandler @ 004ff264 */
                  pSVar18 = operator_new(0x78);
                  /* try { // try from 004fd883 to 004fd887 has its CatchHandler @ 004ff251 */
                  SparkEmitter__SparkEmitter__0059f5b0(pSVar18, (SparkEmitterCreation *)&local_1d8);
                  *(uint32_t *)(pSVar18 + 0x10) = 0;
                  local_1018 = pSVar18;
                  /* try { // try from 004fd89c to 004fd8a0 has its CatchHandler @ 004ff264 */
                  pSVar18 = operator_new(0x78);
                  /* try { // try from 004fd8aa to 004fd8ae has its CatchHandler @ 004ff251 */
                  SparkEmitter__SparkEmitter__0059f5b0(pSVar18, (SparkEmitterCreation *)&local_1d8);
                  *(uint32_t *)(pSVar18 + 0x10) = 0;
                  local_ef8 = pSVar18;
                  /* try { // try from 004fd8c3 to 004fd8c7 has its CatchHandler @ 004ff264 */
                  pSVar18 = operator_new(0x78);
                  /* try { // try from 004fd8d1 to 004fd8d5 has its CatchHandler @ 004ff251 */
                  SparkEmitter__SparkEmitter__0059f5b0(pSVar18, (SparkEmitterCreation *)&local_1d8);
                  *(uint32_t *)(pSVar18 + 0x10) = 0;
                  local_dd8 = pSVar18;
                }
                /* try { // try from 004fd5e4 to 004fd5e8 has its CatchHandler @ 004ff07b */
                uVar10 = ResizeableArray_SMBShooter__Add((SMBShooter *)(self + 0x3ea0),
                                                         (int)&local_1938);
                local_e8 = CONCAT44(uStack_4704, uVar10);
                local_e0 = extraout_RDX_02;
                SceneObject2D__SceneObject2D__0059b220(local_ef0);
                SceneObject2D__SceneObject2D__0059b220(local_1010);
                SceneObject2D__SceneObject2D__0059b220(local_1130);
                SceneObject2D__SceneObject2D__0059b220(local_1250);
                SceneObject2D__SceneObject2D__0059b220(local_1370);
                SceneObject2D__SceneObject2D__0059b220(local_1490);
                SceneObject2D__SceneObject2D__0059b220(local_15b0);
                SceneObject2D__SceneObject2D__0059b220(local_16d0);
                SceneObject2D__SceneObject2D__0059b220(local_17f0);
                SceneObject2D__SceneObject2D__0059b220(local_1910);
              } else if (((uVar8 == *(uint *)(self + 0x430c)) ||
                          (uVar8 == *(uint *)(self + 0x4314))) ||
                         (uVar8 == *(uint *)(self + 0x4310))) {
                lVar27 = lVar27 + 0x16;
                *(uint32_t *)(*(long *)(self + lVar27 * 0x10 + 8) + 0x48) = 0;
                SMBShooter__SMBShooter((SMBShooter *)&local_dc8);
                local_dc8 = *(long *)(self + lVar27 * 0x10 + 8);
                local_db8 = DAT_005c07ac /* R:0.7853981852531433f */ +
                            *(float *)(self + lVar27 * 0x10 + 0x10);
                local_db0 = 2;
                local_dbc =
                    (float)*(int *)(local_dc8 + 0x54) * DAT_005c01d0 /* R:0.0010000000474974513f */;
                local_4740[0x20] = SUB41(*(uint32_t *)(self + 0x430c), 0);
                if (SystemCaps._4_4_ - 1U < 2) {
                  local_1c8 = 0x3f800000;
                  local_1c4 = 0x3f800000;
                  local_1c0 = 0x3f80000042c80000;
                  local_1d8 = ::cWhite;
                  local_1b8 = 0xa00000000;
                  local_1b0 = 1;
                  local_1d0 = DAT_0081c008 /* R:1.0778787787586493e-41f */;
                  /* try { // try from 004fdb31 to 004fdb8c has its CatchHandler @ 004ff237 */
                  ColorConversion__ConvertRBGHEXToColor(0xfaffad, (ColorTemplate *)&local_1d8);
                  local_1c0 = 0x4080000043960000;
                  local_1c4 = 0x3dcccccd;
                  local_1c8 = 0x3e800000;
                  local_1b0 = 10;
                  local_1b8 = 0xa40800000;
                  pSVar18 = operator_new(0x78);
                  /* try { // try from 004fdb96 to 004fdb9a has its CatchHandler @ 004ff269 */
                  SparkEmitter__SparkEmitter__0059f5b0(pSVar18, (SparkEmitterCreation *)&local_1d8);
                  *(uint32_t *)(pSVar18 + 0x10) = 0;
                  local_c88 = pSVar18;
                  /* try { // try from 004fdbaf to 004fdbb3 has its CatchHandler @ 004ff237 */
                  pSVar18 = operator_new(0x78);
                  /* try { // try from 004fdbbd to 004fdbc1 has its CatchHandler @ 004ff269 */
                  SparkEmitter__SparkEmitter__0059f5b0(pSVar18, (SparkEmitterCreation *)&local_1d8);
                  *(uint32_t *)(pSVar18 + 0x10) = 0;
                  local_b68 = pSVar18;
                  /* try { // try from 004fdbd6 to 004fdbda has its CatchHandler @ 004ff237 */
                  pSVar18 = operator_new(0x78);
                  /* try { // try from 004fdbe4 to 004fdbe8 has its CatchHandler @ 004ff269 */
                  SparkEmitter__SparkEmitter__0059f5b0(pSVar18, (SparkEmitterCreation *)&local_1d8);
                  *(uint32_t *)(pSVar18 + 0x10) = 0;
                  local_a48 = pSVar18;
                  /* try { // try from 004fdbfd to 004fdc01 has its CatchHandler @ 004ff237 */
                  pSVar18 = operator_new(0x78);
                  /* try { // try from 004fdc0b to 004fdc0f has its CatchHandler @ 004ff269 */
                  SparkEmitter__SparkEmitter__0059f5b0(pSVar18, (SparkEmitterCreation *)&local_1d8);
                  *(uint32_t *)(pSVar18 + 0x10) = 0;
                  local_928 = pSVar18;
                  /* try { // try from 004fdc24 to 004fdc28 has its CatchHandler @ 004ff237 */
                  pSVar18 = operator_new(0x78);
                  /* try { // try from 004fdc32 to 004fdc36 has its CatchHandler @ 004ff269 */
                  SparkEmitter__SparkEmitter__0059f5b0(pSVar18, (SparkEmitterCreation *)&local_1d8);
                  *(uint32_t *)(pSVar18 + 0x10) = 0;
                  local_808 = pSVar18;
                  /* try { // try from 004fdc4b to 004fdc4f has its CatchHandler @ 004ff237 */
                  pSVar18 = operator_new(0x78);
                  /* try { // try from 004fdc59 to 004fdc5d has its CatchHandler @ 004ff269 */
                  SparkEmitter__SparkEmitter__0059f5b0(pSVar18, (SparkEmitterCreation *)&local_1d8);
                  *(uint32_t *)(pSVar18 + 0x10) = 0;
                  local_6e8 = pSVar18;
                  /* try { // try from 004fdc72 to 004fdc76 has its CatchHandler @ 004ff237 */
                  pSVar18 = operator_new(0x78);
                  /* try { // try from 004fdc80 to 004fdc84 has its CatchHandler @ 004ff269 */
                  SparkEmitter__SparkEmitter__0059f5b0(pSVar18, (SparkEmitterCreation *)&local_1d8);
                  *(uint32_t *)(pSVar18 + 0x10) = 0;
                  local_5c8 = pSVar18;
                  /* try { // try from 004fdc99 to 004fdc9d has its CatchHandler @ 004ff237 */
                  pSVar18 = operator_new(0x78);
                  /* try { // try from 004fdca7 to 004fdcab has its CatchHandler @ 004ff269 */
                  SparkEmitter__SparkEmitter__0059f5b0(pSVar18, (SparkEmitterCreation *)&local_1d8);
                  *(uint32_t *)(pSVar18 + 0x10) = 0;
                  local_4a8 = pSVar18;
                  /* try { // try from 004fdcc0 to 004fdcc4 has its CatchHandler @ 004ff237 */
                  pSVar18 = operator_new(0x78);
                  /* try { // try from 004fdcce to 004fdcd2 has its CatchHandler @ 004ff269 */
                  SparkEmitter__SparkEmitter__0059f5b0(pSVar18, (SparkEmitterCreation *)&local_1d8);
                  *(uint32_t *)(pSVar18 + 0x10) = 0;
                  local_388 = pSVar18;
                  /* try { // try from 004fdce7 to 004fdceb has its CatchHandler @ 004ff237 */
                  pSVar18 = operator_new(0x78);
                  /* try { // try from 004fdcf5 to 004fdcf9 has its CatchHandler @ 004ff269 */
                  SparkEmitter__SparkEmitter__0059f5b0(pSVar18, (SparkEmitterCreation *)&local_1d8);
                  *(uint32_t *)(pSVar18 + 0x10) = 0;
                  local_268 = pSVar18;
                }
                /* try { // try from 004fd980 to 004fd984 has its CatchHandler @ 004ff24f */
                uVar10 =
                    ResizeableArray_SMBShooter__Add((SMBShooter *)(self + 0x3ea0), (int)&local_dc8);
                local_d8 = CONCAT44(uStack_4704, uVar10);
                local_d0 = extraout_RDX_03;
                SceneObject2D__SceneObject2D__0059b220(local_380);
                SceneObject2D__SceneObject2D__0059b220(local_4a0);
                SceneObject2D__SceneObject2D__0059b220(local_5c0);
                SceneObject2D__SceneObject2D__0059b220(local_6e0);
                SceneObject2D__SceneObject2D__0059b220(local_800);
                SceneObject2D__SceneObject2D__0059b220(local_920);
                SceneObject2D__SceneObject2D__0059b220(local_a40);
                SceneObject2D__SceneObject2D__0059b220(local_b60);
                SceneObject2D__SceneObject2D__0059b220(local_c80);
                SceneObject2D__SceneObject2D__0059b220(local_da0);
              } else if (uVar8 == *(uint *)(self + 0x4384)) {
                local_190 = *(uint *)(self + 0x4388);
                local_198 = (float)(DAT_005be6f0 /* R:u32=2147483648 */ ^ local_190);
                local_1a0 = (QuakeEmitter *)0x3f800000;
                local_194 = 0.0;
                local_1a8 = local_4740;
                local_18c = 0.0;
                local_188 = 0.0;
                local_184 = 0x3f800000;
                Matrix4x4__ConvertToRotationMatrix(local_258, *(float *)(local_4740 + 0x3c));
                Matrix4x4__TransformVector2((Vector2 *)&local_1a0, (Vector2 *)&local_1a0, local_258,
                                            1);
                Matrix4x4__TransformVector2((Vector2 *)&local_198, (Vector2 *)&local_198, local_258,
                                            1);
                Matrix4x4__TransformVector2((Vector2 *)&local_190, (Vector2 *)&local_190, local_258,
                                            1);
                Matrix4x4__TransformVector2((Vector2 *)&local_188, (Vector2 *)&local_188, local_258,
                                            1);
                if (*(int *)(self + 0x3fd8) == -0x5eef3582) {
                  uVar30 = *(ushort *)(self + 0x3fb8);
                  if (*(ushort *)(self + 0x3fba) <= uVar30) {
                    uVar30 = *(ushort *)(self + 0x3fba) + *(short *)(self + 0x3fc4);
                    *(ushort *)(self + 0x3fba) = uVar30;
                    uVar26 = TMemory__AlignedReAlloc(
                        *(void **)(self + 0x3fc8), (ulong)uVar30 * 0x28, (ulong)(byte)self[0x3fbc]);
                    *(uint64_t *)(self + 0x3fc8) = uVar26;
                    if (*(void **)(self + 0x3fd0) != (void *)0x0) {
                      lVar27 = TMemory__AlignedReAlloc(*(void **)(self + 0x3fd0),
                                                       (ulong) * (ushort *)(self + 0x3fba) * 2,
                                                       (ulong)(byte)self[0x3fbc]);
                      uVar30 = *(ushort *)(self + 0x3fb8);
                      uVar31 = *(ushort *)(self + 0x3fba);
                      *(long *)(self + 0x3fd0) = lVar27;
                      if (uVar31 <= uVar30)
                        goto LAB_004fdebb;
                      while (true) {
                        uVar23 = (ulong)uVar30;
                        uVar30 = uVar30 + 1;
                        *(uint16_t *)(lVar27 + uVar23 * 2) = 0xffff;
                        if (uVar31 <= uVar30)
                          break;
                        lVar27 = *(long *)(self + 0x3fd0);
                      }
                    }
                    uVar30 = *(ushort *)(self + 0x3fb8);
                  }
                } else {
                  uVar23 = (ulong)(byte)self[0x3fbc];
                  *(uint32_t *)(self + 0x3fc0) = 0;
                  pvVar19 = malloc(uVar23 + 0xd8);
                  puVar22 = (uint64_t *)0x0;
                  if (pvVar19 != (void *)0x0) {
                    puVar22 = (uint64_t *)((uVar23 - ((long)pvVar19 + 0x10U) % uVar23) % uVar23 +
                                           (long)pvVar19 + 0x10U);
                    puVar22[-1] = pvVar19;
                    puVar22[-2] = 200;
                  }
                  bVar34 = ((ulong)puVar22 & 1) != 0;
                  *(uint64_t **)(self + 0x3fc8) = puVar22;
                  uVar23 = 200;
                  if (bVar34) {
                    *(uint8_t *)puVar22 = 0;
                    puVar22 = (uint64_t *)((long)puVar22 + 1);
                    uVar23 = 199;
                  }
                  if (((ulong)puVar22 & 2) != 0) {
                    *(uint16_t *)puVar22 = 0;
                    uVar23 = (ulong)((int)uVar23 - 2);
                    puVar22 = (uint64_t *)((long)puVar22 + 2);
                  }
                  if (((ulong)puVar22 & 4) != 0) {
                    *(uint32_t *)puVar22 = 0;
                    uVar23 = (ulong)((int)uVar23 - 4);
                    puVar22 = (uint64_t *)((long)puVar22 + 4);
                  }
                  for (uVar21 = uVar23 >> 3; uVar21 != 0; uVar21 = uVar21 - 1) {
                    *puVar22 = 0;
                    puVar22 = puVar22 + (ulong)bVar35 * -2 + 1;
                  }
                  if ((uVar23 & 4) != 0) {
                    *(uint32_t *)puVar22 = 0;
                    puVar22 = (uint64_t *)((long)puVar22 + 4);
                  }
                  if ((uVar23 & 2) != 0) {
                    *(uint16_t *)puVar22 = 0;
                    puVar22 = (uint64_t *)((long)puVar22 + 2);
                  }
                  if (bVar34) {
                    *(uint8_t *)puVar22 = 0;
                  }
                  *(uint16_t *)(self + 0x3fb8) = 0;
                  *(uint16_t *)(self + 0x3fba) = 5;
                  uVar30 = 0;
                  *(uint32_t *)(self + 0x3fd8) = 0xa110ca7e;
                  *(uint16_t *)(self + 0x3fc4) = 5;
                }
              LAB_004fdebb:
                if ((*(int *)(self + 0x3fc0) == 1) && (*(short *)(self + 0x3fba) != 0)) {
                  puVar13 = *(ushort **)(self + 0x3fd0);
                  sVar20 = 1;
                  uVar31 = *puVar13;
                  while (uVar31 != 0xffff) {
                    puVar13 = puVar13 + 1;
                    if (sVar20 == *(short *)(self + 0x3fba))
                      goto LAB_004fdec9;
                    sVar20 = sVar20 + 1;
                    uVar31 = *puVar13;
                  }
                  *puVar13 = uVar30;
                  uVar30 = *(ushort *)(self + 0x3fb8);
                }
              LAB_004fdec9:
                puVar22 = (uint64_t *)(*(long *)(self + 0x3fc8) + (ulong)uVar30 * 0x28);
                *puVar22 = local_1a8;
                Vector2__operator_assign((Vector2 *)(puVar22 + 1), (Vector2 *)&local_1a0);
                Vector2__operator_assign((Vector2 *)(puVar22 + 2), (Vector2 *)&local_198);
                Vector2__operator_assign((Vector2 *)(puVar22 + 3), (Vector2 *)&local_190);
                Vector2__operator_assign((Vector2 *)(puVar22 + 4), (Vector2 *)&local_188);
                *(short *)(self + 0x3fb8) = *(short *)(self + 0x3fb8) + 1;
              } else if (((uVar8 == *(uint *)(self + 0x438c)) ||
                          (uVar8 == *(uint *)(self + 0x4390))) ||
                         (uVar8 == *(uint *)(self + 0x4394))) {
                local_170 = 0;
                local_16c = 0;
                local_168 = 0;
                local_164 = 0;
                local_4740[0x20] = SUB41(*(uint32_t *)(self + 0x4390), 0);
                local_178 = local_4740;
                uVar10 = ResizeableArray_SMBLaser__Add((ResizeableArray<SMBLaser> *)(self + 0x3fe0),
                                                       (SMBLaser *)&local_178, 0);
                local_c8 = CONCAT44(uStack_4704, uVar10);
                local_c0 = extraout_RDX_04;
                CreateSMBLaserStream(self);
              } else if (((uVar8 == *(uint *)(self + 0x439c)) ||
                          (uVar8 == *(uint *)(self + 0x43a0))) ||
                         (uVar8 == *(uint *)(self + 0x43a4))) {
                local_140 = 0;
                local_13c = 0;
                local_134 = 0;
                local_4740[0x20] = SUB41(*(uint32_t *)(self + 0x43a0), 0);
                local_148 = local_4740;
                local_138 = 1;
                uVar10 = ResizeableArray_SMBLaser__Add((ResizeableArray<SMBLaser> *)(self + 0x3fe0),
                                                       (SMBLaser *)&local_148, 0);
                local_b8 = CONCAT44(uStack_4704, uVar10);
                local_b0 = extraout_RDX_05;
                CreateSMBLaserStream(self);
              } else if ((uVar8 == *(uint *)(self + 0x4270)) ||
                         (uVar8 == *(uint *)(self + 0x4274))) {
                local_4740[0x20] = SUB41(*(uint *)(self + 0x4270), 0);
                pSVar29 = (SMBPalette *)0x0;
                if (*(long *)(self + 0x2ad0) == 0) {
                  pSVar29 = self + 0x2ad0;
                }
                if (*(long *)(self + 0x2be0) == 0) {
                  pSVar29 = self + 0x2be0;
                }
                if (*(long *)(self + 0x2cf0) == 0) {
                  pSVar29 = self + 0x2cf0;
                }
                if (*(long *)(self + 0x2e00) == 0) {
                  pSVar29 = self + 0x2e00;
                }
                if (*(long *)(self + 0x2f10) == 0) {
                  pSVar29 = self + 0x2f10;
                }
                if (*(long *)(self + 0x3020) == 0) {
                  pSVar29 = self + 0x3020;
                }
                if (pSVar29 != (SMBPalette *)0x0) {
                  *(QuakeEmitter **)pSVar29 = local_4740;
                  *(uint32_t *)(pSVar29 + 8) = *(uint32_t *)(local_4740 + 0x54);
                  *(uint32_t *)(pSVar29 + 0xc) = *(uint32_t *)(local_4740 + 0x58);
                  Reset2DPhysics((Physics2D *)(pSVar29 + 0x68));
                  *(uint32_t *)(pSVar29 + 0x108) = *(uint32_t *)(local_4740 + 0x24);
                  uVar10 = *(uint32_t *)(local_4740 + 0x28);
                  *(uint32_t *)(pSVar29 + 0xa8) = 0x3f000000;
                  *(uint32_t *)(pSVar29 + 0x10c) = uVar10;
                  Vector2__operator_assign((Vector2 *)(pSVar29 + 0xb0),
                                           (Vector2 *)(pSVar29 + 0x108));
                  Vector2__operator_assign((Vector2 *)(pSVar29 + 0xb8),
                                           (Vector2 *)(pSVar29 + 0x108));
                }
              } else if ((uVar8 == *(uint *)(self + 0x42c8)) ||
                         (uVar8 == *(uint *)(self + 0x42c4))) {
                local_4740[0x20] = SUB41(*(uint32_t *)(self + 0x42c4), 0);
                *(uint32_t *)(local_4740 + 0x48) = 0;
              } else if (uVar8 == *(uint *)(self + 0x43c4)) {
                dVar37 = cos((double)*(float *)(local_4740 + 0x3c));
                if (_DAT_005c7330 /* R:u32=3758096384 */ <=
                    (double)((ulong)dVar37 & DAT_005c72e0 /* R:u32=4294967295 */)) {
                  SMBPlatform__SMBPlatform((SMBPlatform *)&local_1d8, 0);
                  local_1d8 = local_4740;
                  uVar10 = ResizeableArray_SMBPlatform__Add(
                      (ResizeableArray<SMBPlatform> *)(self + 0x40f8), (SMBPlatform *)&local_1d8,
                      0);
                  local_98 = CONCAT44(uStack_4704, uVar10);
                  local_90 = extraout_RDX_10;
                } else {
                  SMBPlatform__SMBPlatform((SMBPlatform *)&local_1d8, 1);
                  local_1d8 = local_4740;
                  uVar10 = ResizeableArray_SMBPlatform__Add(
                      (ResizeableArray<SMBPlatform> *)(self + 0x40f8), (SMBPlatform *)&local_1d8,
                      0);
                  local_a8 = CONCAT44(uStack_4704, uVar10);
                  local_a0 = extraout_RDX_09;
                }
              } else {
                uVar8 = (uint)(byte)QVar2;
                if (((uVar8 == *(uint *)(self + 0x43ac)) || (uVar8 == *(uint *)(self + 0x43b0))) ||
                    (uVar8 == *(uint *)(self + 0x43b4))) {
                  if (local_4710 == (QuakeEmitter *)0x0) {
                    local_4710 = local_4740;
                  } else {
                    local_4710[0x20] = SUB41(*(uint *)(self + 0x43ac), 0);
                    local_4740[0x20] = SUB41(*(uint32_t *)(self + 0x43ac), 0);
                    if (*(int *)(self + 0x4190) == -0x5eef3582) {
                      uVar30 = *(ushort *)(self + 0x4170);
                      if (*(ushort *)(self + 0x4172) <= uVar30) {
                        uVar30 = *(ushort *)(self + 0x4172) + *(short *)(self + 0x417c);
                        *(ushort *)(self + 0x4172) = uVar30;
                        uVar26 =
                            TMemory__AlignedReAlloc(*(void **)(self + 0x4180), (ulong)uVar30 * 0x18,
                                                    (ulong)(byte)self[0x4174]);
                        *(uint64_t *)(self + 0x4180) = uVar26;
                        if (*(void **)(self + 0x4188) != (void *)0x0) {
                          lVar27 = TMemory__AlignedReAlloc(*(void **)(self + 0x4188),
                                                           (ulong) * (ushort *)(self + 0x4172) * 2,
                                                           (ulong)(byte)self[0x4174]);
                          uVar30 = *(ushort *)(self + 0x4170);
                          uVar31 = *(ushort *)(self + 0x4172);
                          *(long *)(self + 0x4188) = lVar27;
                          if (uVar31 <= uVar30)
                            goto LAB_004feb4e;
                          while (true) {
                            uVar23 = (ulong)uVar30;
                            uVar30 = uVar30 + 1;
                            *(uint16_t *)(lVar27 + uVar23 * 2) = 0xffff;
                            if (uVar31 <= uVar30)
                              break;
                            lVar27 = *(long *)(self + 0x4188);
                          }
                        }
                        uVar30 = *(ushort *)(self + 0x4170);
                      }
                    } else {
                      uVar23 = (ulong)(byte)self[0x4174];
                      *(uint32_t *)(self + 0x4178) = 0;
                      pvVar19 = malloc(uVar23 + 0x88);
                      puVar22 = (uint64_t *)0x0;
                      if (pvVar19 != (void *)0x0) {
                        puVar22 =
                            (uint64_t *)((uVar23 - ((long)pvVar19 + 0x10U) % uVar23) % uVar23 +
                                         (long)pvVar19 + 0x10U);
                        puVar22[-1] = pvVar19;
                        puVar22[-2] = 0x78;
                      }
                      bVar34 = ((ulong)puVar22 & 1) != 0;
                      *(uint64_t **)(self + 0x4180) = puVar22;
                      uVar23 = 0x78;
                      if (bVar34) {
                        *(uint8_t *)puVar22 = 0;
                        puVar22 = (uint64_t *)((long)puVar22 + 1);
                        uVar23 = 0x77;
                      }
                      if (((ulong)puVar22 & 2) != 0) {
                        *(uint16_t *)puVar22 = 0;
                        uVar23 = (ulong)((int)uVar23 - 2);
                        puVar22 = (uint64_t *)((long)puVar22 + 2);
                      }
                      if (((ulong)puVar22 & 4) != 0) {
                        *(uint32_t *)puVar22 = 0;
                        uVar23 = (ulong)((int)uVar23 - 4);
                        puVar22 = (uint64_t *)((long)puVar22 + 4);
                      }
                      for (uVar21 = uVar23 >> 3; uVar21 != 0; uVar21 = uVar21 - 1) {
                        *puVar22 = 0;
                        puVar22 = puVar22 + (ulong)bVar35 * -2 + 1;
                      }
                      if ((uVar23 & 4) != 0) {
                        *(uint32_t *)puVar22 = 0;
                        puVar22 = (uint64_t *)((long)puVar22 + 4);
                      }
                      if ((uVar23 & 2) != 0) {
                        *(uint16_t *)puVar22 = 0;
                        puVar22 = (uint64_t *)((long)puVar22 + 2);
                      }
                      if (bVar34) {
                        *(uint8_t *)puVar22 = 0;
                      }
                      *(uint16_t *)(self + 0x4170) = 0;
                      *(uint16_t *)(self + 0x4172) = 5;
                      uVar30 = 0;
                      *(uint32_t *)(self + 0x4190) = 0xa110ca7e;
                      *(uint16_t *)(self + 0x417c) = 5;
                    }
                  LAB_004feb4e:
                    if ((*(int *)(self + 0x4178) == 1) && (*(short *)(self + 0x4172) != 0)) {
                      puVar13 = *(ushort **)(self + 0x4188);
                      sVar20 = 1;
                      uVar31 = *puVar13;
                      while (uVar31 != 0xffff) {
                        puVar13 = puVar13 + 1;
                        if (sVar20 == *(short *)(self + 0x4172))
                          goto LAB_004feb5c;
                        sVar20 = sVar20 + 1;
                        uVar31 = *puVar13;
                      }
                      *puVar13 = uVar30;
                      uVar30 = *(ushort *)(self + 0x4170);
                    }
                  LAB_004feb5c:
                    local_4710 = (QuakeEmitter *)0x0;
                    puVar22 = (uint64_t *)(*(long *)(self + 0x4180) + (ulong)uVar30 * 0x18);
                    *puVar22 = pQVar17;
                    *(uint32_t *)(puVar22 + 2) = 0;
                    puVar22[1] = local_4740;
                    *(uint32_t *)((long)puVar22 + 0x14) = 0;
                    *(short *)(self + 0x4170) = *(short *)(self + 0x4170) + 1;
                  }
                } else if (uVar8 == *(uint *)(self + 0x42c0)) {
                  if (*(int *)(self + 0x3f38) == -0x5eef3582) {
                    uVar30 = *(ushort *)(self + 0x3f18);
                    if (*(ushort *)(self + 0x3f1a) <= uVar30) {
                      uVar30 = *(ushort *)(self + 0x3f1a) + *(short *)(self + 0x3f24);
                      *(ushort *)(self + 0x3f1a) = uVar30;
                      uVar26 = TMemory__AlignedReAlloc(*(void **)(self + 0x3f28), (ulong)uVar30 * 8,
                                                       (ulong)(byte)self[0x3f1c]);
                      *(uint64_t *)(self + 0x3f28) = uVar26;
                      if (*(void **)(self + 0x3f30) != (void *)0x0) {
                        lVar27 = TMemory__AlignedReAlloc(*(void **)(self + 0x3f30),
                                                         (ulong) * (ushort *)(self + 0x3f1a) * 2,
                                                         (ulong)(byte)self[0x3f1c]);
                        uVar30 = *(ushort *)(self + 0x3f18);
                        uVar31 = *(ushort *)(self + 0x3f1a);
                        *(long *)(self + 0x3f30) = lVar27;
                        if (uVar31 <= uVar30)
                          goto LAB_004fe78a;
                        while (true) {
                          uVar23 = (ulong)uVar30;
                          uVar30 = uVar30 + 1;
                          *(uint16_t *)(lVar27 + uVar23 * 2) = 0xffff;
                          if (uVar31 <= uVar30)
                            break;
                          lVar27 = *(long *)(self + 0x3f30);
                        }
                      }
                      uVar30 = *(ushort *)(self + 0x3f18);
                    }
                  } else {
                    uVar23 = (ulong)(byte)self[0x3f1c];
                    *(uint32_t *)(self + 0x3f20) = 0;
                    pvVar19 = malloc(uVar23 + 0x38);
                    puVar22 = (uint64_t *)0x0;
                    if (pvVar19 != (void *)0x0) {
                      puVar22 = (uint64_t *)((uVar23 - ((long)pvVar19 + 0x10U) % uVar23) % uVar23 +
                                             (long)pvVar19 + 0x10U);
                      puVar22[-1] = pvVar19;
                      puVar22[-2] = 0x28;
                    }
                    *(uint64_t **)(self + 0x3f28) = puVar22;
                    uVar30 = 0;
                    *puVar22 = 0;
                    puVar22[1] = 0;
                    puVar22[2] = 0;
                    puVar22[3] = 0;
                    puVar22[4] = 0;
                    *(uint16_t *)(self + 0x3f18) = 0;
                    *(uint16_t *)(self + 0x3f1a) = 5;
                    *(uint32_t *)(self + 0x3f38) = 0xa110ca7e;
                    *(uint16_t *)(self + 0x3f24) = 5;
                  }
                LAB_004fe78a:
                  if ((*(int *)(self + 0x3f20) == 1) && (*(short *)(self + 0x3f1a) != 0)) {
                    puVar13 = *(ushort **)(self + 0x3f30);
                    sVar20 = 1;
                    uVar31 = *puVar13;
                    while (uVar31 != 0xffff) {
                      puVar13 = puVar13 + 1;
                      if (sVar20 == *(short *)(self + 0x3f1a))
                        goto LAB_004fe794;
                      sVar20 = sVar20 + 1;
                      uVar31 = *puVar13;
                    }
                    *puVar13 = uVar30;
                    uVar30 = *(ushort *)(self + 0x3f18);
                  }
                LAB_004fe794:
                  *(QuakeEmitter **)(*(long *)(self + 0x3f28) + (ulong)uVar30 * 8) = local_4740;
                  *(short *)(self + 0x3f18) = *(short *)(self + 0x3f18) + 1;
                } else {
                  if (uVar8 != *(uint *)(self + 0x43c0)) {
                    iVar7 = IsSwitch(uVar8);
                    if (iVar7 != 1) {
                      if ((uVar8 == *(uint *)(self + 0x43c8)) && (SystemCaps._4_4_ - 1U < 2)) {
                        local_1d0 = local_4740;
                        iVar24 = (int)*(float *)(local_4740 + 0x48);
                        if (SystemCaps._4_4_ != 1) {
                          iVar24 = iVar24 / 2;
                        }
                        if (0 < iVar24) {
                          local_198 = 1.0;
                          local_194 = 1.0;
                          local_190 = 0x42c80000;
                          local_18c = 1.0;
                          local_1a8 = ::cWhite;
                          local_188 = 0.0;
                          local_184 = 10;
                          local_180 = 1;
                          local_1a0 = DAT_0081c008 /* R:1.0778787787586493e-41f */;
                          ColorConversion__ConvertRBGHEXToColor(*(uint *)(local_4740 + 0x54),
                                                                (ColorTemplate *)&local_1a8);
                          local_198 = *(float *)(local_4740 + 0x4c);
                          local_194 = local_198 * DAT_005be6e4 /* R:0.5f */;
                          local_180 = *(uint32_t *)(local_4740 + 0x58);
                          local_190 = *(uint *)(local_4740 + 0x44);
                          local_18c = *(float *)(local_4740 + 0x50);
                          local_188 = DAT_005be6e4 /* R:0.5f */ * local_18c;
                          local_184 = iVar24;
                          pSVar18 = operator_new(0x78);
                          /* try { // try from 004fe2d4 to 004fe2d8 has its CatchHandler @ 004fe3b0 */
                          SparkEmitter__SparkEmitter__0059f5b0(pSVar18,
                                                               (SparkEmitterCreation *)&local_1a8);
                          local_1d8 = (QuakeEmitter *)pSVar18;
                          uVar10 = ResizeableArray_SMBPaletteEmitter__Add(
                              (ResizeableArray<SMBPaletteEmitter> *)(self + 0x4208),
                              (SMBPaletteEmitter *)&local_1d8, 0);
                          local_88 = CONCAT44(uStack_4704, uVar10);
                          local_80 = extraout_RDX_08;
                        }
                      } else if (uVar8 == *(uint *)(self + 0x43d0)) {
                        local_1d0 = local_4740;
                        local_60 = (QuakeEmitter *)CONCAT44(local_60._4_4_,
                                                            *(uint32_t *)(local_4740 + 0x58));
                        local_68 = (SmokeEmitter *)CONCAT44(*(uint32_t *)(local_4740 + 0x54),
                                                            *(uint32_t *)(local_4740 + 0x4c));
                        pQVar17 = operator_new(0x28);
                        /* try { // try from 004fe13e to 004fe142 has its CatchHandler @ 004fe19b */
                        QuakeEmitter__QuakeEmitter__00483a70(pQVar17,
                                                             (QuakeEmitterCreate *)&local_68);
                        local_1d8 = pQVar17;
                        uVar10 = ResizeableArray_SMBPaletteEmitter__Add(
                            (ResizeableArray<SMBPaletteEmitter> *)(self + 0x4208),
                            (SMBPaletteEmitter *)&local_1d8, 0);
                        local_78 = CONCAT44(uStack_4704, uVar10);
                        local_70 = extraout_RDX_07;
                      } else if ((uVar8 == *(uint *)(self + 0x43cc)) &&
                                 (SystemCaps._4_4_ - 1U < 2)) {
                        local_218 = 0;
                        local_214 = 0;
                        local_210 = 0;
                        local_20c = 0;
                        local_60 = local_4740;
                        ColorConversion__ConvertRBGHEXToColor(*(uint *)(local_4740 + 0x54),
                                                              (ColorTemplate *)&local_218);
                        local_1f8 = *(float *)(local_4740 + 0x44);
                        iVar24 = *(int *)(local_4740 + 0x58);
                        iVar7 = GetRandomINT(0x4b, 100);
                        local_1fc = (uint32_t)(long)((float)(iVar24 * iVar7) *
                                                     DAT_005c07b0 /* R:0.009999999776482582f */);
                        local_200 = *(uint32_t *)(local_4740 + 0x58);
                        local_208 = *(uint32_t *)(local_4740 + 0x4c);
                        local_204 = *(uint32_t *)(local_4740 + 0x50);
                        local_1f0 = local_4740;
                        local_1e8 = *(uint64_t *)(self + 0x4200);
                        if (SystemCaps._4_4_ != 1) {
                          local_1f8 = DAT_005be6e8 /* R:0.25f */ + local_1f8;
                        }
                        this_00 = operator_new(0x1188);
                        /* try { // try from 004fe0b1 to 004fe0b5 has its CatchHandler @ 004fe188 */
                        SmokeEmitter__SmokeEmitter__00511b60(this_00,
                                                             (SmokeEmitterCreate *)&local_218);
                        local_68 = this_00;
                        uVar10 = ResizeableArray_SMBPaletteEmitter__Add(
                            (ResizeableArray<SMBPaletteEmitter> *)(self + 0x4208),
                            (SMBPaletteEmitter *)&local_68, 0);
                        local_58 = CONCAT44(uStack_4704, uVar10);
                        local_50 = extraout_RDX_06;
                      } else if (uVar8 == *(uint *)(self + 0x425c)) {
                        if (iVar6 == 1) {
                          iVar24 = 0;
                        }
                        *(int *)(self + 0x4258) = iVar24;
                      }
                      goto LAB_004f7f08;
                    }
                    uVar10 = *(uint32_t *)(local_4740 + 0x48);
                    uVar3 = *(uint32_t *)(local_4740 + 0x44);
                    uVar4 = *(uint32_t *)(local_4740 + 0x50);
                    if (*(int *)(self + 0x2ac8) == -0x5eef3582) {
                      uVar30 = *(ushort *)(self + 0x2aa8);
                      if (*(ushort *)(self + 0x2aaa) <= uVar30) {
                        uVar30 = *(ushort *)(self + 0x2aaa) + *(short *)(self + 0x2ab4);
                        *(ushort *)(self + 0x2aaa) = uVar30;
                        uVar26 =
                            TMemory__AlignedReAlloc(*(void **)(self + 0x2ab8), (ulong)uVar30 << 5,
                                                    (ulong)(byte)self[0x2aac]);
                        *(uint64_t *)(self + 0x2ab8) = uVar26;
                        if (*(void **)(self + 0x2ac0) != (void *)0x0) {
                          lVar27 = TMemory__AlignedReAlloc(*(void **)(self + 0x2ac0),
                                                           (ulong) * (ushort *)(self + 0x2aaa) * 2,
                                                           (ulong)(byte)self[0x2aac]);
                          uVar30 = *(ushort *)(self + 0x2aa8);
                          uVar31 = *(ushort *)(self + 0x2aaa);
                          *(long *)(self + 0x2ac0) = lVar27;
                          if (uVar31 <= uVar30)
                            goto LAB_004fe358;
                          while (true) {
                            uVar23 = (ulong)uVar30;
                            uVar30 = uVar30 + 1;
                            *(uint16_t *)(lVar27 + uVar23 * 2) = 0xffff;
                            if (uVar31 <= uVar30)
                              break;
                            lVar27 = *(long *)(self + 0x2ac0);
                          }
                        }
                        uVar30 = *(ushort *)(self + 0x2aa8);
                      }
                    } else {
                      uVar23 = (ulong)(byte)self[0x2aac];
                      *(uint32_t *)(self + 0x2ab0) = 0;
                      pvVar19 = malloc(uVar23 + 0xb0);
                      puVar22 = (uint64_t *)0x0;
                      if (pvVar19 != (void *)0x0) {
                        puVar22 =
                            (uint64_t *)((uVar23 - ((long)pvVar19 + 0x10U) % uVar23) % uVar23 +
                                         (long)pvVar19 + 0x10U);
                        puVar22[-1] = pvVar19;
                        puVar22[-2] = 0xa0;
                      }
                      bVar34 = ((ulong)puVar22 & 1) != 0;
                      *(uint64_t **)(self + 0x2ab8) = puVar22;
                      uVar23 = 0xa0;
                      if (bVar34) {
                        *(uint8_t *)puVar22 = 0;
                        puVar22 = (uint64_t *)((long)puVar22 + 1);
                        uVar23 = 0x9f;
                      }
                      if (((ulong)puVar22 & 2) != 0) {
                        *(uint16_t *)puVar22 = 0;
                        uVar23 = (ulong)((int)uVar23 - 2);
                        puVar22 = (uint64_t *)((long)puVar22 + 2);
                      }
                      if (((ulong)puVar22 & 4) != 0) {
                        *(uint32_t *)puVar22 = 0;
                        uVar23 = (ulong)((int)uVar23 - 4);
                        puVar22 = (uint64_t *)((long)puVar22 + 4);
                      }
                      for (uVar21 = uVar23 >> 3; uVar21 != 0; uVar21 = uVar21 - 1) {
                        *puVar22 = 0;
                        puVar22 = puVar22 + (ulong)bVar35 * -2 + 1;
                      }
                      if ((uVar23 & 4) != 0) {
                        *(uint32_t *)puVar22 = 0;
                        puVar22 = (uint64_t *)((long)puVar22 + 4);
                      }
                      if ((uVar23 & 2) != 0) {
                        *(uint16_t *)puVar22 = 0;
                        puVar22 = (uint64_t *)((long)puVar22 + 2);
                      }
                      if (bVar34) {
                        *(uint8_t *)puVar22 = 0;
                      }
                      *(uint16_t *)(self + 0x2aa8) = 0;
                      *(uint16_t *)(self + 0x2aaa) = 5;
                      uVar30 = 0;
                      *(uint32_t *)(self + 0x2ac8) = 0xa110ca7e;
                      *(uint16_t *)(self + 0x2ab4) = 5;
                    }
                  LAB_004fe358:
                    if ((*(int *)(self + 0x2ab0) == 1) && (*(short *)(self + 0x2aaa) != 0)) {
                      puVar13 = *(ushort **)(self + 0x2ac0);
                      sVar20 = 1;
                      uVar31 = *puVar13;
                      while (uVar31 != 0xffff) {
                        puVar13 = puVar13 + 1;
                        if (sVar20 == *(short *)(self + 0x2aaa))
                          goto LAB_004fe362;
                        sVar20 = sVar20 + 1;
                        uVar31 = *puVar13;
                      }
                      *puVar13 = uVar30;
                      uVar30 = *(ushort *)(self + 0x2aa8);
                    }
                  LAB_004fe362:
                    puVar22 = (uint64_t *)((ulong)uVar30 * 0x20 + *(long *)(self + 0x2ab8));
                    *puVar22 = local_4740;
                    *(uint32_t *)(puVar22 + 1) = uVar10;
                    *(uint32_t *)((long)puVar22 + 0xc) = uVar3;
                    *(uint32_t *)(puVar22 + 2) = uVar4;
                    *(uint32_t *)((long)puVar22 + 0x14) = uVar10;
                    *(uint32_t *)(puVar22 + 3) = 0;
                    *(uint32_t *)((long)puVar22 + 0x1c) = 0;
                    *(short *)(self + 0x2aa8) = *(short *)(self + 0x2aa8) + 1;
                    local_4740[0x20] = SUB41(*(uint32_t *)(self + 0x4290), 0);
                    goto LAB_004f7f08;
                  }
                  if (*(int *)(self + 0x41e0) == -0x5eef3582) {
                    uVar30 = *(ushort *)(self + 0x41c0);
                    if (*(ushort *)(self + 0x41c2) <= uVar30) {
                      uVar30 = *(ushort *)(self + 0x41c2) + *(short *)(self + 0x41cc);
                      *(ushort *)(self + 0x41c2) = uVar30;
                      uVar26 = TMemory__AlignedReAlloc(*(void **)(self + 0x41d0), (ulong)uVar30 * 8,
                                                       (ulong)(byte)self[0x41c4]);
                      *(uint64_t *)(self + 0x41d0) = uVar26;
                      if (*(void **)(self + 0x41d8) != (void *)0x0) {
                        lVar27 = TMemory__AlignedReAlloc(*(void **)(self + 0x41d8),
                                                         (ulong) * (ushort *)(self + 0x41c2) * 2,
                                                         (ulong)(byte)self[0x41c4]);
                        uVar30 = *(ushort *)(self + 0x41c0);
                        uVar31 = *(ushort *)(self + 0x41c2);
                        *(long *)(self + 0x41d8) = lVar27;
                        if (uVar31 <= uVar30)
                          goto LAB_004fe731;
                        while (true) {
                          uVar23 = (ulong)uVar30;
                          uVar30 = uVar30 + 1;
                          *(uint16_t *)(lVar27 + uVar23 * 2) = 0xffff;
                          if (uVar31 <= uVar30)
                            break;
                          lVar27 = *(long *)(self + 0x41d8);
                        }
                      }
                      uVar30 = *(ushort *)(self + 0x41c0);
                    }
                  } else {
                    uVar23 = (ulong)(byte)self[0x41c4];
                    *(uint32_t *)(self + 0x41c8) = 0;
                    pvVar19 = malloc(uVar23 + 0x38);
                    puVar22 = (uint64_t *)0x0;
                    if (pvVar19 != (void *)0x0) {
                      puVar22 = (uint64_t *)((uVar23 - ((long)pvVar19 + 0x10U) % uVar23) % uVar23 +
                                             (long)pvVar19 + 0x10U);
                      puVar22[-1] = pvVar19;
                      puVar22[-2] = 0x28;
                    }
                    *(uint64_t **)(self + 0x41d0) = puVar22;
                    uVar30 = 0;
                    *puVar22 = 0;
                    puVar22[1] = 0;
                    puVar22[2] = 0;
                    puVar22[3] = 0;
                    puVar22[4] = 0;
                    *(uint16_t *)(self + 0x41c0) = 0;
                    *(uint16_t *)(self + 0x41c2) = 5;
                    *(uint32_t *)(self + 0x41e0) = 0xa110ca7e;
                    *(uint16_t *)(self + 0x41cc) = 5;
                  }
                LAB_004fe731:
                  if ((*(int *)(self + 0x41c8) == 1) && (*(short *)(self + 0x41c2) != 0)) {
                    puVar13 = *(ushort **)(self + 0x41d8);
                    sVar20 = 1;
                    uVar31 = *puVar13;
                    while (uVar31 != 0xffff) {
                      puVar13 = puVar13 + 1;
                      if (sVar20 == *(short *)(self + 0x41c2))
                        goto LAB_004fe73b;
                      sVar20 = sVar20 + 1;
                      uVar31 = *puVar13;
                    }
                    *puVar13 = uVar30;
                    uVar30 = *(ushort *)(self + 0x41c0);
                  }
                LAB_004fe73b:
                  *(QuakeEmitter **)(*(long *)(self + 0x41d0) + (ulong)uVar30 * 8) = local_4740;
                  *(short *)(self + 0x41c0) = *(short *)(self + 0x41c0) + 1;
                }
              }
            }
          }
        } else {
          if (uVar8 == *(uint *)(self + 0x4080)) {
            uVar26 = 0;
          } else {
            if (*(uint *)(self + 0x4084) == 0xffffffff)
              goto LAB_004f8068;
            if (uVar8 == *(uint *)(self + 0x4084)) {
              uVar26 = 1;
            } else {
              if (*(uint *)(self + 0x4088) == 0xffffffff)
                goto LAB_004f8068;
              if (uVar8 == *(uint *)(self + 0x4088)) {
                uVar26 = 2;
              } else {
                if (*(uint *)(self + 0x408c) == 0xffffffff)
                  goto LAB_004f8068;
                if (uVar8 == *(uint *)(self + 0x408c)) {
                  uVar26 = 3;
                } else {
                  if (*(uint *)(self + 0x4090) == 0xffffffff)
                    goto LAB_004f8068;
                  if (uVar8 == *(uint *)(self + 0x4090)) {
                    uVar26 = 4;
                  } else {
                    if (*(uint *)(self + 0x4094) == 0xffffffff)
                      goto LAB_004f8068;
                    if (uVar8 == *(uint *)(self + 0x4094)) {
                      uVar26 = 5;
                    } else {
                      if (*(uint *)(self + 0x4098) == 0xffffffff)
                        goto LAB_004f8068;
                      if (uVar8 == *(uint *)(self + 0x4098)) {
                        uVar26 = 6;
                      } else {
                        if (*(uint *)(self + 0x409c) == 0xffffffff)
                          goto LAB_004f8068;
                        if (uVar8 == *(uint *)(self + 0x409c)) {
                          uVar26 = 7;
                        } else {
                          if (*(uint *)(self + 0x40a0) == 0xffffffff)
                            goto LAB_004f8068;
                          if (uVar8 == *(uint *)(self + 0x40a0)) {
                            uVar26 = 8;
                          } else if ((*(uint *)(self + 0x40a4) == 0xffffffff) ||
                                     (uVar26 = 9, uVar8 != *(uint *)(self + 0x40a4)))
                            goto LAB_004f8068;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          local_1d8 = (QuakeEmitter *)0x0;
          (**(code **)(*(long *)self + 0x58))(self, local_4740, &local_68, local_3c, &local_1d8);
          local_68 = (SmokeEmitter *)CONCAT44(
              DAT_005be6e4 /* R:0.5f */ * local_68._4_4_ * *(float *)(local_4740 + 0x38),
              (float)local_68 * DAT_005be6e4 /* R:0.5f */ * *(float *)(local_4740 + 0x34));
          local_1d8 = (QuakeEmitter *)CONCAT44(local_1d8._4_4_ + *(float *)(local_4740 + 0x28),
                                               (float)local_1d8 + *(float *)(local_4740 + 0x24));
          AddSMBBossWayPoint(&local_1d8, &local_68, uVar26);
        }
      }
    LAB_004f7f08:
      local_4734 = local_4734 + 1;
      local_4740 = local_4740 + 0x68;
      iVar24 = iVar6;
    } while (local_4734 != iVar9);
    iVar9 = 399;
    if (iVar6 < 400) {
      iVar9 = iVar6;
    }
  }
  *(uint64_t *)(self + ((long)iVar9 + 0x16) * 0x10 + 8) = 0;
  return;
}
