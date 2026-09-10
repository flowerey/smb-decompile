/* src/game/classes/TileTexture.c — 5 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "TileTexture.h"

/* ======================================================================
 * TileTexture__TileTexture  (Ghidra `TileTexture` @ 005a0bd0)
 * Signature: uint8_t __thiscall TileTexture(TileTexture * self)
 * Class: TileTexture
 * Calls: `TileTexture__TileTexture__005a0be0`
 * Called by: (none)
 */
/* TileTexture__TileTexture__005a0be0() */

void __thiscall TileTexture__TileTexture__005a0be0(TileTexture *self)

{
  *(uint64_t *)self = 0;
  return;
}

/* ======================================================================
 * TileTexture__TileTexture__005a0be0  (Ghidra `TileTexture` @ 005a0be0)
 * Signature: uint8_t __thiscall TileTexture(TileTexture * self, Texture * arg1, int arg2, int arg3)
 * Class: TileTexture
 * Calls: `Vector2__operator_assign`
 * Called by: `CreateSMBPaletteResources`, `TileTexture__TileTexture`
 */
/* TileTexture__TileTexture__005a0be0(Texture*, int, int) */

void __thiscall TileTexture__TileTexture__005a0be0(TileTexture *self, Texture *arg1, int arg2,
                                                   int arg3)

{
  float local_18;
  float local_14;

  *(Texture **)self = arg1;
  *(int *)(self + 0x10) = arg2;
  local_14 = DAT_005be894 /* R:1.0f */;
  *(int *)(self + 0x14) = arg3;
  local_18 = local_14 / (float)arg3;
  local_14 = local_14 / (float)arg2;
  Vector2__operator_assign((Vector2 *)(self + 8), (Vector2 *)&local_18);
  (**(code **)(**(long **)self + 0x10))();
  return;
}

/* ======================================================================
 * TileTexture__TileTexture__005a0c40  (Ghidra `~TileTexture` @ 005a0c40)
 * Signature: uint8_t __thiscall ~TileTexture(TileTexture * self)
 * Class: TileTexture
 * Calls: `BaseResource__Release`
 * Called by: `DestroySMBPaletteResources`
 */
/* TileTexture__TileTexture__005a0c40() */

void __thiscall TileTexture__TileTexture__005a0c40(TileTexture *self)

{
  if (*(BaseResource **)self != (BaseResource *)0x0) {
    BaseResource__Release(*(BaseResource **)self, 0);
    return;
  }
  return;
}

/* ======================================================================
 * TileTexture__SetTexture  (Ghidra `SetTexture` @ 005a0c60)
 * Signature: uint8_t __thiscall SetTexture(TileTexture * self, uchar arg1, int arg2, float * arg3)
 * Class: TileTexture
 * Calls: `TGraphics__AddTextureCoordGen`, `TGraphics__ResetTexCoordGen`, `TGraphics__SetTextCoordMatrix`, `TGraphics__SetTexture`
 * Called by: `SMBPalette__RenderTile__004daac0`
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TileTexture__SetTexture(unsigned char, int, float const*) */

uint32_t __thiscall TileTexture__SetTexture(TileTexture *self, uchar arg1, int arg2, float *arg3)

{
  int iVar1;
  uint32_t uVar2;
  int iVar3;
  uint64_t uVar4;
  Matrix4x4 aMStack_d8[12];
  float local_cc;
  float local_bc;
  Matrix4x4 local_98[64];
  float local_58;
  float fStack_54;
  uint32_t local_48;
  uint32_t local_44;
  float local_38;
  float local_34;

  TGraphics__ResetTexCoordGen(Graphics);
  uVar2 = TGraphics__SetTexture(Graphics, arg1, *(Texture **)self);
  TGraphics__AddTextureCoordGen(Graphics, 0, 2, 8, 0xffffffff);
  iVar3 = (arg2 + -1) / *(int *)(self + 0x14);
  iVar1 = *(int *)(self + 0x10);
  local_58 = (float)*(uint64_t *)(self + 8);
  fStack_54 = (float)((ulong) * (uint64_t *)(self + 8) >> 0x20);
  local_48 = 0xbf000000;
  local_44 = 0xbf000000;
  _local_58 =
      CONCAT44(fStack_54 - _DAT_005bfd00 /* R:10.0f */ / (float)*(ushort *)(*(long *)self + 0x10),
               local_58 - _DAT_005bfd00 /* R:10.0f */ / (float)*(ushort *)(*(long *)self + 0xc));
  Matrix4x4__Transformation2DRot(aMStack_d8, (Vector2 *)0x0, (float *)0x0, (Vector2 *)&local_48);
  local_34 = *(float *)(self + 0xc) * DAT_005be6e4 /* R:0.5f */;
  local_38 = DAT_005be6e4 /* R:0.5f */ * *(float *)(self + 8);
  Matrix4x4__Transformation2DRot(local_98, (Vector2 *)&local_58, arg3, (Vector2 *)&local_38);
  Matrix4x4__Multiply(aMStack_d8, aMStack_d8, local_98);
  local_cc = (float)((arg2 + -1) - iVar3 * iVar1) * *(float *)(self + 8) + local_cc;
  local_bc = (float)iVar3 * *(float *)(self + 0xc) + local_bc;
  uVar4 = Matrix4x4__TexCoordinateMatrix(aMStack_d8);
  TGraphics__SetTextCoordMatrix(Graphics, 8, uVar4);
  return uVar2;
}

/* ======================================================================
 * TileTexture__GetTextureCoords  (Ghidra `GetTextureCoords` @ 005a0e10)
 * Signature: uint8_t __thiscall GetTextureCoords(TileTexture * self, int arg1, float * arg2, Vector2 * arg3)
 * Class: TileTexture
 * Calls: (none)
 * Called by: `SMBPalette__AddTileToBuffer__004db270`
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TileTexture__GetTextureCoords(int, float const*, Vector2*) */

void __thiscall TileTexture__GetTextureCoords(TileTexture *self, int arg1, float *arg2,
                                              Vector2 *arg3)

{
  int iVar1;
  int iVar2;
  Matrix4x4 aMStack_d8[12];
  float local_cc;
  float local_bc;
  Matrix4x4 local_98[64];
  float local_58;
  float fStack_54;
  uint32_t local_48;
  uint32_t local_44;
  float local_38;
  float local_34;

  iVar2 = (arg1 + -1) / *(int *)(self + 0x14);
  iVar1 = *(int *)(self + 0x10);
  local_58 = (float)*(uint64_t *)(self + 8);
  fStack_54 = (float)((ulong) * (uint64_t *)(self + 8) >> 0x20);
  local_48 = 0xbf000000;
  local_44 = 0xbf000000;
  _local_58 =
      CONCAT44(fStack_54 - _DAT_005bfd00 /* R:10.0f */ / (float)*(ushort *)(*(long *)self + 0x10),
               local_58 - _DAT_005bfd00 /* R:10.0f */ / (float)*(ushort *)(*(long *)self + 0xc));
  Matrix4x4__Transformation2DRot(aMStack_d8, (Vector2 *)0x0, (float *)0x0, (Vector2 *)&local_48);
  local_34 = *(float *)(self + 0xc) * DAT_005be6e4 /* R:0.5f */;
  local_38 = DAT_005be6e4 /* R:0.5f */ * *(float *)(self + 8);
  Matrix4x4__Transformation2DRot(local_98, (Vector2 *)&local_58, arg2, (Vector2 *)&local_38);
  Matrix4x4__Multiply(aMStack_d8, aMStack_d8, local_98);
  local_cc = (float)((arg1 + -1) - iVar2 * iVar1) * *(float *)(self + 8) + local_cc;
  local_bc = (float)iVar2 * *(float *)(self + 0xc) + local_bc;
  Matrix4x4__TransformVector2(arg3, arg3, aMStack_d8, 1);
  Matrix4x4__TransformVector2(arg3 + 8, arg3 + 8, aMStack_d8, 1);
  Matrix4x4__TransformVector2(arg3 + 0x10, arg3 + 0x10, aMStack_d8, 1);
  Matrix4x4__TransformVector2(arg3 + 0x18, arg3 + 0x18, aMStack_d8, 1);
  return;
}
