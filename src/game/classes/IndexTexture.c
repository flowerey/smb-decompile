/* src/game/classes/IndexTexture.c — 6 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "IndexTexture.h"

/* ======================================================================
 * IndexTexture__IndexTexture  (Ghidra `IndexTexture` @ 005a0fb0)
 * Signature: uint8_t __thiscall IndexTexture(IndexTexture * self)
 * Class: IndexTexture
 * Calls: `IndexTexture__IndexTexture__005a0fc0`
 * Called by: (none)
 */
/* IndexTexture__IndexTexture__005a0fc0() */

void __thiscall IndexTexture__IndexTexture__005a0fc0(IndexTexture *self)

{
  *(uint32_t *)(self + 0xc) = 0;
  *(uint64_t *)(self + 0x10) = 0;
  return;
}

/* ======================================================================
 * IndexTexture__IndexTexture__005a0fc0  (Ghidra `IndexTexture` @ 005a0fc0)
 * Signature: uint8_t __thiscall IndexTexture(IndexTexture * self, Texture * arg1, char * arg2)
 * Class: IndexTexture
 * Calls: `File__File`, `File__File__005b7a70`, `File__ReadVariable`, `File__Reset`
 * Called by: `CreateAnimationLibResources`, `CreateSMBPaletteResources`, `IndexTexture__IndexTexture`
 */
/* IndexTexture__IndexTexture__005a0fc0(Texture*, char const*) */

void __thiscall IndexTexture__IndexTexture__005a0fc0(IndexTexture *self, Texture *arg1, char *arg2)

{
  void *pvVar1;
  int iVar2;
  char *local_88;
  uint8_t *local_80;
  uint32_t local_78;
  uint64_t local_70;
  uint32_t local_68;
  uint32_t local_64;
  uint32_t local_60;
  uint32_t local_5c;
  uint32_t local_58;
  uint32_t local_54;
  uint8_t *local_50;
  File local_48[4];
  uint local_44;

  *(Texture **)(self + 0x10) = arg1;
  local_78 = 2;
  local_70 = 0;
  local_68 = 0;
  local_64 = 1;
  local_60 = 1;
  local_5c = 0;
  local_58 = 0;
  local_54 = 0;
  local_50 = &DAT_005c04cf /* R:7.374579797039071e-39f */;
  local_80 = &DAT_005c328c /* R:u32=1811964530 */;
  local_88 = arg2;
  File__File(local_48, (tagFileCreation *)&local_88);
  /* try { // try from 005a1042 to 005a1116 has its CatchHandler @ 005a114f */
  File__ReadVariable(local_48, self + 0xc, 4);
  if (*(int *)(self + 0xc) == 0x49583031) {
    local_44 = (uint)(((ulong)local_44 - 4) / 0x14);
    *(uint *)(self + 8) = local_44;
  } else {
    *(uint32_t *)(self + 0xc) = 0;
    File__Reset(local_48);
    local_44 = local_44 / 0x14;
    *(uint *)(self + 8) = local_44;
  }
  pvVar1 = operator_new__((long)(int)local_44 * 0x14);
  *(void **)self = pvVar1;
  if (0 < *(int *)(self + 8)) {
    iVar2 = 0;
    do {
      File__ReadVariable(local_48, pvVar1, 4);
      File__ReadVariable(local_48, (void *)((long)pvVar1 + 4), 4);
      File__ReadVariable(local_48, (void *)((long)pvVar1 + 8), 4);
      File__ReadVariable(local_48, (void *)((long)pvVar1 + 0xc), 4);
      File__ReadVariable(local_48, (void *)((long)pvVar1 + 0x10), 4);
      iVar2 = iVar2 + 1;
      pvVar1 = (void *)((long)pvVar1 + 0x14);
    } while (iVar2 < *(int *)(self + 8));
  }
  (**(code **)(**(long **)(self + 0x10) + 0x10))();
  File__File__005b7a70(local_48);
  return;
}

/* ======================================================================
 * IndexTexture__IndexTexture__005a1170  (Ghidra `~IndexTexture` @ 005a1170)
 * Signature: uint8_t __thiscall ~IndexTexture(IndexTexture * self)
 * Class: IndexTexture
 * Calls: `BaseResource__Release`
 * Called by: `DestroyAnimationLibResources`, `DestroySMBPaletteResources`, `FlashAnimationLibrary__FlashAnimationLibrary`
 */
/* IndexTexture__IndexTexture__005a1170() */

void __thiscall IndexTexture__IndexTexture__005a1170(IndexTexture *self)

{
  if (*(void **)self != (void *)0x0) {
    operator_delete__(*(void **)self);
  }
  if (*(BaseResource **)(self + 0x10) != (BaseResource *)0x0) {
    BaseResource__Release(*(BaseResource **)(self + 0x10), 0);
    return;
  }
  return;
}

/* ======================================================================
 * IndexTexture__SetTexture  (Ghidra `SetTexture` @ 005a11a0)
 * Signature: uint8_t __thiscall SetTexture(IndexTexture * self, uchar arg1, int arg2, int arg3)
 * Class: IndexTexture
 * Calls: `TGraphics__AddTextureCoordGen`, `TGraphics__ResetTexCoordGen`, `TGraphics__SetTextCoordMatrix`, `TGraphics__SetTexture`
 * Called by: `FlashAnimationLibrary__SetSymbolTexture`, `RenderSetPiece`, `Render__00571c10`
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IndexTexture__SetTexture(unsigned char, int, int) */

uint32_t __thiscall IndexTexture__SetTexture(IndexTexture *self, uchar arg1, int arg2, int arg3)

{
  long lVar1;
  uint32_t uVar2;
  long lVar3;
  uint64_t uVar4;
  int iVar5;
  long lVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  Matrix4x4 local_138[12];
  float local_12c;
  float local_11c;
  Matrix4x4 local_f8[64];
  uint32_t local_b8;
  uint32_t local_b4;
  float local_a8;
  float local_a4;
  float local_98;
  float local_94;
  float local_88;
  float local_84;
  float local_78;
  float local_74;
  float local_68;
  float local_64;
  float local_58;
  float local_54;
  float local_48;
  float local_44;
  float local_38;
  float local_34;
  float local_2c[3];

  iVar5 = *(int *)(self + 8) + -1;
  if (arg2 < *(int *)(self + 8)) {
    iVar5 = arg2;
  }
  TGraphics__ResetTexCoordGen(Graphics);
  uVar2 = TGraphics__SetTexture(Graphics, arg1, *(Texture **)(self + 0x10));
  lVar6 = (long)iVar5 * 0x14;
  TGraphics__AddTextureCoordGen(Graphics, 0, 2, 8, 0xffffffff);
  local_b8 = 0xbf000000;
  local_b4 = 0xbf000000;
  Matrix4x4__Transformation2DRot(local_138, (Vector2 *)0x0, (float *)0x0, (Vector2 *)&local_b8);
  fVar8 = DAT_005be6e4 /* R:0.5f */;
  lVar3 = *(long *)self + lVar6;
  local_2c[0] = *(float *)(lVar3 + 0x10);
  if (*(int *)(self + 0xc) == 0x49583031) {
    if (arg3 == 0) {
      fVar8 = _DAT_005bff44 /* R:5.0f */;
      if ((SystemCaps._4_4_ != 1) && (fVar8 = DAT_005c72d0 /* R:3.0f */, SystemCaps._4_4_ == 2)) {
        fVar8 = DAT_005dd650 /* R:3.75f */;
      }
      fVar9 = fVar8 / (float)*(ushort *)(*(long *)(self + 0x10) + 0xc);
      fVar8 = fVar8 / (float)*(ushort *)(*(long *)(self + 0x10) + 0x10);
      if (local_2c[0] == DAT_005bf760 /* R:0.0f */) {
        local_a8 = *(float *)(lVar3 + 8) - (fVar9 + fVar9);
        local_a4 = *(float *)(lVar3 + 0xc) - (fVar8 + fVar8);
        local_98 = local_a8 * DAT_005be6e4 /* R:0.5f */;
        local_94 = local_a4 * DAT_005be6e4 /* R:0.5f */;
        Matrix4x4__Transformation2DRot(local_f8, (Vector2 *)&local_a8, local_2c,
                                       (Vector2 *)&local_98);
      } else {
        local_84 = *(float *)(lVar3 + 8) - (fVar9 + fVar9);
        local_88 = *(float *)(lVar3 + 0xc) - (fVar8 + fVar8);
        local_78 = local_84 * DAT_005be6e4 /* R:0.5f */;
        local_74 = local_88 * DAT_005be6e4 /* R:0.5f */;
        Matrix4x4__Transformation2DRot(local_f8, (Vector2 *)&local_88, local_2c,
                                       (Vector2 *)&local_78);
      }
      Matrix4x4__Multiply(local_138, local_138, local_f8);
      local_12c = *(float *)(lVar6 + *(long *)self) + local_12c + fVar9;
      local_11c = ((float *)(lVar6 + *(long *)self))[1] + local_11c + fVar8;
    } else {
      local_68 = DAT_005be894 /* R:1.0f */ / (float)*(ushort *)(*(long *)(self + 0x10) + 0xc);
      local_58 = local_68 * DAT_005be6e4 /* R:0.5f */;
      local_64 = local_68;
      local_54 = local_58;
      Matrix4x4__Transformation2DRot(local_f8, (Vector2 *)&local_68, local_2c,
                                     (Vector2 *)&local_58);
      Matrix4x4__Multiply(local_138, local_138, local_f8);
      pfVar7 = (float *)(lVar6 + *(long *)self);
      local_12c = *pfVar7 + local_12c + pfVar7[2] * fVar8;
      local_11c = pfVar7[1] + local_11c + fVar8 * pfVar7[3];
    }
  } else {
    lVar1 = *(long *)(self + 0x10);
    SetTexture(unsigned_char, int, int)::fPixelOffset = 0x40000000;
    if (local_2c[0] == DAT_005bf760 /* R:0.0f */) {
      local_38 = *(float *)(lVar3 + 8);
      local_48 = local_38 - DAT_005c0068 /* R:2.0f */ / (float)*(ushort *)(lVar1 + 0xc);
      local_34 = *(float *)(lVar3 + 0xc);
      local_44 = local_34 - DAT_005c0068 /* R:2.0f */ / (float)*(ushort *)(lVar1 + 0x10);
    } else {
      local_38 = *(float *)(lVar3 + 8);
      local_44 = local_38 - DAT_005c0068 /* R:2.0f */ / (float)*(ushort *)(lVar1 + 0xc);
      local_34 = *(float *)(lVar3 + 0xc);
      local_48 = local_34 - DAT_005c0068 /* R:2.0f */ / (float)*(ushort *)(lVar1 + 0x10);
    }
    local_34 = local_34 * DAT_005be6e4 /* R:0.5f */;
    local_38 = DAT_005be6e4 /* R:0.5f */ * local_38;
    Matrix4x4__Transformation2DRot(local_f8, (Vector2 *)&local_48, local_2c, (Vector2 *)&local_38);
    Matrix4x4__Multiply(local_138, local_138, local_f8);
    local_12c = local_12c + *(float *)(lVar6 + *(long *)self);
    local_11c = local_11c + ((float *)(lVar6 + *(long *)self))[1];
  }
  uVar4 = Matrix4x4__TexCoordinateMatrix(local_138);
  TGraphics__SetTextCoordMatrix(Graphics, 8, uVar4);
  return uVar2;
}

/* ======================================================================
 * IndexTexture__GetTextureCoords  (Ghidra `GetTextureCoords` @ 005a1650)
 * Signature: uint8_t __thiscall GetTextureCoords(IndexTexture * self, int arg1, Vector2 * arg2)
 * Class: IndexTexture
 * Calls: `Vector2__operator_assign`
 * Called by: `SMBPalette__AddSetPieceToBuffer__004da490`
 */
/* IndexTexture__GetTextureCoords(int, Vector2*) */

void __thiscall IndexTexture__GetTextureCoords(IndexTexture *self, int arg1, Vector2 *arg2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  float *pfVar4;
  Matrix4x4 aMStack_118[12];
  float local_10c;
  float local_fc;
  Matrix4x4 local_d8[64];
  uint32_t local_98;
  uint32_t local_94;
  float local_88;
  float local_84;
  float local_78;
  float local_74;
  Vector2 local_68[16];
  uint32_t local_58;
  uint32_t local_54;
  uint32_t local_48;
  uint32_t local_44;
  uint32_t local_38;
  uint32_t local_34;
  uint32_t local_28;
  uint32_t local_24;
  float local_1c;

  local_98 = 0xbf000000;
  local_94 = 0xbf000000;
  iVar3 = *(int *)(self + 8) + -1;
  if (arg1 < *(int *)(self + 8)) {
    iVar3 = arg1;
  }
  Matrix4x4__Transformation2DRot(aMStack_118, (Vector2 *)0x0, (float *)0x0, (Vector2 *)&local_98);
  lVar1 = *(long *)(self + 0x10);
  GetTextureCoords(int, Vector2 *)::fPixelOffset = 0x40000000;
  lVar2 = *(long *)self + (long)iVar3 * 0x14;
  local_1c = *(float *)(lVar2 + 0x10);
  if (local_1c == DAT_005bf760 /* R:0.0f */) {
    local_78 = *(float *)(lVar2 + 8);
    local_88 = local_78 - DAT_005c0068 /* R:2.0f */ / (float)*(ushort *)(lVar1 + 0xc);
    local_74 = *(float *)(lVar2 + 0xc);
    local_84 = local_74 - DAT_005c0068 /* R:2.0f */ / (float)*(ushort *)(lVar1 + 0x10);
  } else {
    local_78 = *(float *)(lVar2 + 8);
    local_84 = local_78 - DAT_005c0068 /* R:2.0f */ / (float)*(ushort *)(lVar1 + 0xc);
    local_74 = *(float *)(lVar2 + 0xc);
    local_88 = local_74 - DAT_005c0068 /* R:2.0f */ / (float)*(ushort *)(lVar1 + 0x10);
  }
  local_74 = local_74 * DAT_005be6e4 /* R:0.5f */;
  local_78 = DAT_005be6e4 /* R:0.5f */ * local_78;
  Matrix4x4__Transformation2DRot(local_d8, (Vector2 *)&local_88, &local_1c, (Vector2 *)&local_78);
  Matrix4x4__Multiply(aMStack_118, aMStack_118, local_d8);
  pfVar4 = (float *)((long)iVar3 * 0x14 + *(long *)self);
  local_10c = local_10c + *pfVar4;
  local_58 = 0;
  local_fc = local_fc + pfVar4[1];
  local_54 = 0;
  Vector2__operator_assign(local_68, (Vector2 *)&local_58);
  Matrix4x4__TransformVector2(arg2, local_68, aMStack_118, 1);
  local_48 = 0x3f800000;
  local_44 = 0;
  Vector2__operator_assign(local_68, (Vector2 *)&local_48);
  Matrix4x4__TransformVector2(arg2 + 8, local_68, aMStack_118, 1);
  local_38 = 0;
  local_34 = 0x3f800000;
  Vector2__operator_assign(local_68, (Vector2 *)&local_38);
  Matrix4x4__TransformVector2(arg2 + 0x10, local_68, aMStack_118, 1);
  local_28 = 0x3f800000;
  local_24 = 0x3f800000;
  Vector2__operator_assign(local_68, (Vector2 *)&local_28);
  Matrix4x4__TransformVector2(arg2 + 0x18, local_68, aMStack_118, 1);
  return;
}

/* ======================================================================
 * IndexTexture__GetTextureWAndH  (Ghidra `GetTextureWAndH` @ 005a1910)
 * Signature: uint8_t __thiscall GetTextureWAndH(IndexTexture * self, int arg1, float * arg2, float * arg3)
 * Class: IndexTexture
 * Calls: (none)
 * Called by: `RenderSetPiece`, `SMBPalette__AddSetPieceToBuffer__004da490`, `SMBPalette__GetSetPieceProps__004dad20`
 */
/* IndexTexture__GetTextureWAndH(int, float&, float&) */

void __thiscall IndexTexture__GetTextureWAndH(IndexTexture *self, int arg1, float *arg2,
                                              float *arg3)

{
  long lVar1;
  long lVar2;

  if (*(int *)(self + 8) <= arg1) {
    arg1 = *(int *)(self + 8) + -1;
  }
  lVar1 = (long)arg1 * 0x14;
  lVar2 = lVar1 + *(long *)self;
  if (*(float *)(lVar2 + 0x10) != 0.0) {
    *arg2 = *(float *)(lVar2 + 0xc);
    *arg3 = *(float *)(*(long *)self + 8 + lVar1);
    return;
  }
  *arg2 = *(float *)(lVar2 + 8);
  *arg3 = *(float *)(*(long *)self + 0xc + lVar1);
  return;
}
