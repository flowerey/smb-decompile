/* src/game/classes/FontEmitter.c — 10 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "FontEmitter.h"

/* ======================================================================
 * FontEmitter__Render  (Ghidra `Render` @ 00584610)
 * Signature: uint8_t __thiscall Render(FontEmitter * self)
 * Class: FontEmitter
 * Calls: `SamplerRegisterToSource`, `TGraphics__AddPixelStage`, `TGraphics__DeleteMasterPixelStage`, `TGraphics__Draw`, `TGraphics__GetMatrix`, `TGraphics__ResetPixelStages`, `TGraphics__ResetTexCoordGen`, `TGraphics__SetPixelColorConstant`, `TGraphics__SetRenderState`, `TGraphics__SetSamplerState` (+5 more)
 * Called by: (none)
 */
/* FontEmitter__Render() */

void __thiscall FontEmitter__Render(FontEmitter *self)

{
  int iVar1;
  uchar uVar2;
  uint32_t uVar3;
  Matrix4x4 *pMVar4;
  float local_ac;
  uint32_t local_a8[4];
  uint32_t local_98;
  uint32_t local_94;
  uint32_t local_88;
  uint32_t local_84;
  float local_78;
  float local_74;
  float local_68;
  float local_64;
  uint32_t local_58;
  float local_54;
  Vector2 local_48[16];
  Vector2 local_38[16];
  Vector2 local_28[16];

  if (*(long *)(self + 0x28) == 0) {
    return;
  }
  if (*(int *)(self + 0x5c) == 1) {
    local_98 = 0;
    local_94 = 0;
    Vector2__operator_assign((Vector2 *)local_a8, (Vector2 *)&local_98);
    local_ac = DAT_005be6e4 /* R:0.5f */;
  } else {
    if (*(int *)(self + 0x5c) == 2) {
      local_88 = *(uint32_t *)(self + 0x98);
      local_84 = 0;
      Vector2__operator_assign((Vector2 *)local_a8, (Vector2 *)&local_88);
      iVar1 = *(int *)(self + 100);
      local_ac = DAT_005be6e4 /* R:0.5f */;
      goto joined_r0x005848de;
    }
    local_ac = DAT_005be6e4 /* R:0.5f */;
    local_74 = (float)(*(uint *)(self + 0x9c) ^ DAT_005be6f0 /* R:u32=2147483648 */) *
               DAT_005be6e4 /* R:0.5f */;
    local_78 = DAT_005be6e4 /* R:0.5f */ * *(float *)(self + 0x98);
    Vector2__operator_assign((Vector2 *)local_a8, (Vector2 *)&local_78);
  }
  iVar1 = *(int *)(self + 100);
joined_r0x005848de:
  if (iVar1 == 1) {
    local_a8[0] = 0;
  }
  TGraphics__DeleteMasterPixelStage(Graphics);
  Vector2__operator_mul__005be200((Vector2 *)&local_68, DAT_005dc108 /* R:1.2999999523162842f */);
  if (*(int *)(self + 0x38) == 1) {
    local_68 = DAT_005dc108 /* R:1.2999999523162842f */ * local_68;
  }
  TGraphics__SetRenderState(Graphics, '\b', 1);
  TGraphics__SetRenderState(Graphics, '\x05', 4);
  TGraphics__SetRenderState(Graphics, '\x06', 5);
  TGraphics__ResetPixelStages(Graphics);
  TGraphics__ResetTexCoordGen(Graphics);
  uVar2 = TGraphics__SetTexture(Graphics, 0xff,
                                (Texture *)**(uint64_t **)(*(long *)(self + 0x20) + 0x58));
  local_58 = 0;
  local_54 = *(float *)(self + 0x60) * local_64 * local_ac;
  Vector2__operator_mul__005be200(local_28, local_68);
  Vector2__operator_plus__005be140(local_38, (Vector2 *)(self + 0x4c));
  Vector2__operator_minus__005be180(local_48, local_38);
  pMVar4 = (Matrix4x4 *)TGraphics__GetMatrix(Graphics, 0);
  Matrix4x4__Transformation2DRot(pMVar4, (Vector2 *)&local_68, (float *)0x0, local_48);
  uVar3 = SamplerRegisterToSource(uVar2);
  TGraphics__AddPixelStage(Graphics, uVar3, 1, 1, 0, 3, 3, 0xffffffff);
  TGraphics__SetPixelColorConstant(Graphics, 0, self + 0x3c);
  TGraphics__SetSamplerState(Graphics, uVar2, '\x04', 1);
  TGraphics__SetSamplerState(Graphics, uVar2, '\x03', 1);
  TGraphics__SetRenderState(Graphics, '\a', 0);
  TGraphics__Draw(Graphics, (VertexStream *)**(uint64_t **)(self + 0x68), (IndexBuffer *)0x0);
  TGraphics__SetSamplerState(Graphics, uVar2, '\x04', 1);
  TGraphics__SetSamplerState(Graphics, uVar2, '\x03', 1);
  return;
}

/* ======================================================================
 * FontEmitter__FontEmitter  (Ghidra `~FontEmitter` @ 00584d20)
 * Signature: uint8_t __thiscall ~FontEmitter(FontEmitter * self)
 * Class: FontEmitter
 * Calls: `BaseResource__Release`, `CreateFontEmitterResources`, `DestroyFontEmitterResources`, `FontEmitter__FontEmitter__00584db0`, `TResourceCreator__RemoveResourceCreationFunction`, `TResourceCreator__RemoveResourceDestroyFunction`, `free`
 * Called by: (none)
 */
/* FontEmitter__FontEmitter__00584db0() */

void __thiscall FontEmitter__FontEmitter__00584db0(FontEmitter *self)

{
  uint64_t *__ptr;

  *(uint8_t ***)self = &PTR__FontEmitter_005dc0f0;
  if (*(void **)(self + 0x28) != (void *)0x0) {
    free(*(void **)(self + 0x28));
  }
  __ptr = *(uint64_t **)(self + 0x68);
  if ((BaseResource *)*__ptr != (BaseResource *)0x0) {
    /* try { // try from 00584d4a to 00584d95 has its CatchHandler @ 00584d9f */
    BaseResource__Release((BaseResource *)*__ptr, 0);
    **(uint64_t **)(self + 0x68) = 0;
    __ptr = *(uint64_t **)(self + 0x68);
  }
  free(__ptr);
  if (*(long **)(self + 0x20) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x20) + 0x18))();
  }
  TResourceCreator__RemoveResourceCreationFunction((TResourceCreator *)ResourceCreator,
                                                   CreateFontEmitterResources, self);
  TResourceCreator__RemoveResourceDestroyFunction((TResourceCreator *)ResourceCreator,
                                                  DestroyFontEmitterResources, self);
  *(uint8_t ***)self = &PTR__RenderLayerObject_005be670;
  return;
}

/* ======================================================================
 * FontEmitter__FontEmitter__00584db0  (Ghidra `~FontEmitter` @ 00584db0)
 * Signature: uint8_t __thiscall ~FontEmitter(FontEmitter * self)
 * Class: FontEmitter
 * Calls: `BaseResource__Release`, `CreateFontEmitterResources`, `DestroyFontEmitterResources`, `TResourceCreator__RemoveResourceCreationFunction`, `TResourceCreator__RemoveResourceDestroyFunction`, `free`, `operator_delete`
 * Called by: `FontEmitter__FontEmitter`
 */
/* FontEmitter__FontEmitter__00584db0() */

void __thiscall FontEmitter__FontEmitter__00584db0(FontEmitter *self)

{
  uint64_t *__ptr;

  *(uint8_t ***)self = &PTR__FontEmitter_005dc0f0;
  if (*(void **)(self + 0x28) != (void *)0x0) {
    free(*(void **)(self + 0x28));
  }
  __ptr = *(uint64_t **)(self + 0x68);
  if ((BaseResource *)*__ptr != (BaseResource *)0x0) {
    /* try { // try from 00584dda to 00584e25 has its CatchHandler @ 00584e36 */
    BaseResource__Release((BaseResource *)*__ptr, 0);
    **(uint64_t **)(self + 0x68) = 0;
    __ptr = *(uint64_t **)(self + 0x68);
  }
  free(__ptr);
  if (*(long **)(self + 0x20) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0x20) + 0x18))();
  }
  TResourceCreator__RemoveResourceCreationFunction((TResourceCreator *)ResourceCreator,
                                                   CreateFontEmitterResources, self);
  TResourceCreator__RemoveResourceDestroyFunction((TResourceCreator *)ResourceCreator,
                                                  DestroyFontEmitterResources, self);
  *(uint8_t ***)self = &PTR__RenderLayerObject_005be670;
  operator_delete(self);
  return;
}

/* ======================================================================
 * FontEmitter__GetRowWidth  (Ghidra `GetRowWidth` @ 005852d0)
 * Signature: uint8_t __thiscall GetRowWidth(FontEmitter * self, int arg1)
 * Class: FontEmitter
 * Calls: (none)
 * Called by: (none)
 */
/* FontEmitter__GetRowWidth(int) */

float __thiscall FontEmitter__GetRowWidth(FontEmitter *self, int arg1)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ushort *puVar7;
  int iVar8;
  ushort *puVar9;
  long lVar10;
  uint *puVar11;
  int *piVar12;
  int iVar13;
  long lVar14;
  int iVar15;
  long lVar16;
  float fVar17;

  fVar17 = 0.0;
  if (arg1 < *(int *)(self + 0x30)) {
    lVar5 = *(long *)(self + 0x20);
    lVar14 = 0;
    sVar1 = *(short *)(lVar5 + 0x48);
    lVar6 = *(long *)(lVar5 + 0x28);
    iVar13 = (ushort)(sVar1 - 1) + 1;
    do {
      uVar2 = *(uint *)((long)arg1 * 4 + *(long *)(self + 0x28) + lVar14);
      if (sVar1 == 0) {
      LAB_00585370:
        lVar16 = lVar6 + 4;
      } else {
        puVar11 = (uint *)(lVar6 + 0x18);
        iVar8 = 1;
        if (uVar2 == *(uint *)(lVar6 + 4)) {
          iVar15 = 0;
        } else {
          do {
            iVar15 = iVar8;
            if (iVar15 == iVar13)
              goto LAB_00585370;
            uVar3 = *puVar11;
            puVar11 = puVar11 + 5;
            iVar8 = iVar15 + 1;
          } while (uVar2 != uVar3);
        }
        lVar16 = lVar6 + 4 + (long)iVar15 * 0x14;
      }
      if (uVar2 == 10)
        break;
      if (uVar2 == 0x20) {
        if (sVar1 == 0) {
        LAB_005854b5:
          lVar10 = lVar6 + 4;
        } else {
          piVar12 = (int *)(lVar6 + 0x18);
          iVar8 = 1;
          if (*(int *)(lVar6 + 4) == 0x4d) {
            iVar15 = 0;
          } else {
            do {
              iVar15 = iVar8;
              if (iVar15 == iVar13)
                goto LAB_005854b5;
              iVar4 = *piVar12;
              piVar12 = piVar12 + 5;
              iVar8 = iVar15 + 1;
            } while (iVar4 != 0x4d);
          }
          lVar10 = lVar6 + 4 + (long)iVar15 * 0x14;
        }
        fVar17 = fVar17 + (float)(int)*(short *)(lVar10 + 0x10) * 0.5;
      }
      iVar8 = 0;
      if (*(int *)(lVar5 + 0x38) == 1) {
        puVar7 = *(ushort **)(lVar5 + 0x30);
        iVar8 = 0;
        if (*puVar7 / 6 != 0) {
          iVar8 = 0;
          puVar9 = puVar7;
          do {
            if ((puVar9[2] == 0) && (uVar2 == puVar9[3])) {
              iVar8 = (int)(short)puVar7[(long)iVar8 * 3 + 4];
              goto LAB_005853ad;
            }
            iVar8 = iVar8 + 1;
            puVar9 = puVar9 + 3;
          } while ((ushort)iVar8 < *puVar7 / 6);
          iVar8 = 0;
        }
      }
    LAB_005853ad:
      lVar14 = lVar14 + 4;
      fVar17 = fVar17 +
               (float)(int)((((uint) * (ushort *)(lVar16 + 8) + (int)*(short *)(lVar16 + 0x10)) -
                             (uint) * (byte *)(*(long *)(lVar5 + 0x10) + 0xc)) +
                            iVar8) *
                   0.5;
    } while (lVar14 != (ulong)(uint)((*(int *)(self + 0x30) + -1) - arg1) * 4 + 4);
  }
  iVar13 = *(int *)(self + 0x5c);
  if (iVar13 == 0) {
    return DAT_005c0e00 /* R:-0.5f */ * fVar17;
  }
  if ((iVar13 != 1) && (iVar13 == 2)) {
    return (float)(DAT_005be6f0 /* R:u32=2147483648 */ ^ (uint)fVar17);
  }
  return 0.0;
}

/* ======================================================================
 * FontEmitter__FillVertexBuffer  (Ghidra `FillVertexBuffer` @ 00585520)
 * Signature: uint8_t __thiscall FillVertexBuffer(FontEmitter * self)
 * Class: FontEmitter
 * Calls: `System_GetRegion`, `Vector2__operator_minus__005be180`, `Vector2__operator_plus__005be140`, `VertexBuffer__Lock`, `VertexBuffer__Realloc`, `VertexBuffer__Unlock`
 * Called by: `CreateFontEmitterResources`
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FontEmitter__FillVertexBuffer() */

void __thiscall FontEmitter__FillVertexBuffer(FontEmitter *self)

{
  long *plVar1;
  ushort uVar2;
  ushort uVar3;
  short sVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  void *pvVar8;
  VertexBuffer *this_00;
  ushort *puVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  uint32_t *puVar15;
  int *piVar16;
  ushort *puVar17;
  uint *puVar18;
  int *piVar19;
  int iVar20;
  long lVar21;
  uint uVar22;
  long lVar23;
  long lVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float local_204;
  float local_200;
  float local_1fc;
  float local_1ec;
  int local_1e8[2];
  void *local_1e0[29];
  float local_f8;
  float local_f4;
  float local_e8;
  float local_e4;
  uint32_t local_d8;
  uint32_t local_d4;
  float local_c8;
  uint local_c4;
  uint32_t local_b8;
  uint32_t local_b4;
  uint local_a8;
  float local_a4;
  uint32_t local_98;
  uint32_t local_94;
  float local_88;
  uint local_84;
  uint32_t local_78;
  uint32_t local_74;
  uint32_t local_68;
  uint32_t local_64;
  uint local_58;
  float local_54;
  uint32_t local_48;
  uint32_t local_44;

  lVar13 = *(long *)(self + 0x20);
  uVar2 = *(ushort *)(*(long *)(lVar13 + 0x18) + 0xc);
  uVar22 = (uint)uVar2;
  if (uVar2 != 0) {
    iVar20 = *(int *)(self + 0x30);
    lVar21 = 0;
    do {
      while (true) {
        iVar12 = (int)lVar21;
        if (iVar20 <= *(int *)(self + lVar21 * 4 + 0x70))
          break;
        VertexBuffer__Realloc(
            *(VertexBuffer **)(*(long *)(*(long *)(self + 0x68) + lVar21 * 8) + 0x20),
            (long)iVar20 * 0x60);
        iVar20 = *(int *)(self + 0x30);
        *(int *)(self + lVar21 * 4 + 0x70) = iVar20;
        lVar13 = *(long *)(self + 0x20);
        uVar2 = *(ushort *)(*(long *)(lVar13 + 0x18) + 0xc);
        uVar22 = (uint)uVar2;
        lVar21 = lVar21 + 1;
        if ((int)(uint)uVar2 <= iVar12 + 1)
          goto LAB_005855a4;
      }
      lVar21 = lVar21 + 1;
    } while (iVar12 + 1 < (int)uVar22);
  }
LAB_005855a4:
  *(uint32_t *)(self + 0x98) = 0;
  *(uint32_t *)(self + 0x9c) = 0;
  uVar2 = *(ushort *)(**(long **)(lVar13 + 0x58) + 0xc);
  uVar3 = *(ushort *)(**(long **)(lVar13 + 0x58) + 0x10);
  if (*(short *)(*(long *)(lVar13 + 0x18) + 0xc) != 0) {
    piVar16 = local_1e8;
    lVar21 = 0;
    iVar20 = 0;
    do {
      lVar13 = (long)iVar20;
      iVar20 = iVar20 + 1;
      plVar1 = (long *)(*(long *)(self + 0x68) + lVar21);
      lVar21 = lVar21 + 8;
      VertexBuffer__Lock(*(VertexBuffer **)(*plVar1 + 0x20), local_1e0 + lVar13 * 3, 1, 0);
      lVar13 = *(long *)(self + 0x20);
      *piVar16 = 0;
      piVar16[4] = 0;
      piVar16 = piVar16 + 6;
    } while (iVar20 < (int)(uint) * (ushort *)(*(long *)(lVar13 + 0x18) + 0xc));
  }
  *(uint32_t *)(self + 0x60) = 0;
  *(uint32_t *)(self + 100) = 0;
  if (0 < *(int *)(self + 0x30)) {
    piVar16 = *(int **)(self + 0x28);
    if (*piVar16 != 10) {
      lVar21 = 0;
      do {
        if (lVar21 == (ulong)(*(int *)(self + 0x30) - 1) * 4) {
          local_1ec = 0.0;
          goto LAB_005856c1;
        }
        lVar21 = lVar21 + 4;
      } while (*(int *)((long)piVar16 + lVar21) != 10);
    }
    *(uint32_t *)(self + 100) = 1;
    local_1ec = (float)GetRowWidth(self, 0);
  LAB_005856c1:
    local_204 = 0.0;
    fVar28 = DAT_005be894 /* R:1.0f */ / (float)uVar2;
    lVar21 = 0;
    uVar22 = 0;
    fVar31 = DAT_005be894 /* R:1.0f */ / (float)uVar3;
    local_1fc = 0.0;
    local_200 = 0.0;
    iVar20 = 1;
    do {
      fVar27 = DAT_005be6e4 /* R:0.5f */;
      sVar4 = *(short *)(lVar13 + 0x48);
      uVar5 = *(uint *)((long)piVar16 + lVar21);
      lVar23 = *(long *)(lVar13 + 0x28);
      if (sVar4 == 0) {
      LAB_00585761:
        lVar24 = lVar23 + 4;
        if (uVar5 != 10)
          goto LAB_0058576e;
      LAB_00585ded:
        if (sVar4 == 0) {
        LAB_00585e31:
          lVar23 = lVar23 + 4;
        } else {
          if (*(int *)(lVar23 + 4) == 0x4d) {
            iVar12 = 0;
          } else {
            piVar19 = (int *)(lVar23 + 0x18);
            iVar11 = 1;
            do {
              iVar12 = iVar11;
              if (iVar12 == (ushort)(sVar4 - 1) + 1)
                goto LAB_00585e31;
              iVar7 = *piVar19;
              piVar19 = piVar19 + 5;
              iVar11 = iVar12 + 1;
            } while (iVar7 != 0x4d);
          }
          lVar23 = lVar23 + 4 + (long)iVar12 * 0x14;
        }
        local_1fc =
            local_1fc - (float)*(ushort *)(lVar23 + 10) * _DAT_005dc10c /* R:1.2000000476837158f */;
        if (*(int *)(self + 100) == 1) {
          local_1ec = (float)GetRowWidth(self, iVar20);
          local_200 = 0.0;
        } else {
          local_200 = 0.0;
        }
      } else {
        if (uVar5 == *(uint *)(lVar23 + 4)) {
          iVar12 = 0;
        } else {
          puVar18 = (uint *)(lVar23 + 0x18);
          iVar11 = 1;
          do {
            iVar12 = iVar11;
            if (iVar12 == (ushort)(sVar4 - 1) + 1)
              goto LAB_00585761;
            uVar6 = *puVar18;
            puVar18 = puVar18 + 5;
            iVar11 = iVar12 + 1;
          } while (uVar5 != uVar6);
        }
        lVar24 = lVar23 + 4 + (long)iVar12 * 0x14;
        if (uVar5 == 10)
          goto LAB_00585ded;
      LAB_0058576e:
        if (uVar5 == 0x20) {
          if (sVar4 == 0) {
          LAB_00585fe5:
            lVar23 = lVar23 + 4;
          } else {
            if (*(int *)(lVar23 + 4) == 0x4d) {
              iVar12 = 0;
            } else {
              piVar16 = (int *)(lVar23 + 0x18);
              iVar11 = 1;
              do {
                iVar12 = iVar11;
                if (iVar12 == (ushort)(sVar4 - 1) + 1)
                  goto LAB_00585fe5;
                iVar7 = *piVar16;
                piVar16 = piVar16 + 5;
                iVar11 = iVar12 + 1;
              } while (iVar7 != 0x4d);
            }
            lVar23 = lVar23 + 4 + (long)iVar12 * 0x14;
          }
          local_200 = (float)(int)*(short *)(lVar23 + 0x10) * DAT_005be6e4 /* R:0.5f */ + local_200;
        }
        fVar25 = 0.0;
        fVar29 = (float)*(ushort *)(lVar24 + 8) * DAT_005be6e4 /* R:0.5f */;
        if (*(int *)(lVar13 + 0x38) == 1) {
          puVar9 = *(ushort **)(lVar13 + 0x30);
          if (*puVar9 / 6 != 0) {
            iVar12 = 0;
            puVar17 = puVar9;
            do {
              if ((uVar22 == puVar17[2]) && (uVar5 == puVar17[3])) {
                fVar25 = (float)(int)(short)puVar9[(long)iVar12 * 3 + 4];
                goto LAB_005857a7;
              }
              iVar12 = iVar12 + 1;
              puVar17 = puVar17 + 3;
            } while ((ushort)iVar12 < *puVar9 / 6);
            fVar25 = 0.0;
          }
        }
      LAB_005857a7:
        fVar26 = (float)(int)*(short *)(lVar24 + 0xe) * DAT_005be6e4 /* R:0.5f */;
        fVar30 = local_1fc - fVar26;
        if ((uVar5 == 0x27) || (uVar5 == 0x22)) {
          fVar30 = fVar26 + fVar30;
        }
        iVar12 = System_GetRegion();
        if ((((iVar12 == 3) || (iVar12 = System_GetRegion(), iVar12 == 2)) ||
             (iVar12 = System_GetRegion(), iVar12 == 1)) ||
            (iVar12 = System_GetRegion(), iVar12 == 4)) {
          iVar12 = *(int *)(*(long *)(self + 0x28) + lVar21);
          if (iVar12 == 0x2d) {
            fVar30 = fVar30 + _DAT_005c5b58 /* R:7.0f */;
          } else if (iVar12 == 0x30fc) {
            fVar30 = fVar30 + _DAT_005c5b58 /* R:7.0f */;
          } else if (iVar12 == 0x4e00) {
            fVar30 = fVar30 + _DAT_005c5b58 /* R:7.0f */;
          }
        }
        local_f4 = fVar30;
        local_f8 = fVar29 + local_1ec + local_200 + fVar25;
        local_e4 = (float)*(ushort *)(lVar24 + 10) * fVar27;
        fVar25 = local_e4;
        if (local_e4 <= *(float *)(self + 0x60)) {
          fVar25 = *(float *)(self + 0x60);
        }
        local_e8 = (float)*(ushort *)(lVar24 + 8) * fVar27;
        *(float *)(self + 0x60) = fVar25;
        fVar29 = (float)*(ushort *)(lVar24 + 4) * fVar28;
        uVar14 = (ulong) * (byte *)(lVar24 + 0x12);
        fVar25 = (float)*(ushort *)(lVar24 + 6) * fVar31;
        if (fVar29 <= 0.0) {
          fVar29 = local_204;
        }
        fVar30 = (float)*(ushort *)(lVar24 + 8) * fVar28;
        pvVar8 = local_1e0[uVar14 * 3];
        if (fVar25 <= 0.0) {
          fVar25 = local_204;
        }
        iVar12 = local_1e8[uVar14 * 6];
        fVar26 = (float)*(ushort *)(lVar24 + 10) * fVar31;
        if (DAT_005be894 /* R:1.0f */ <= fVar29) {
          fVar29 = DAT_005be894 /* R:1.0f */;
        }
        if (fVar30 <= 0.0) {
          fVar30 = local_204;
        }
        if (DAT_005be894 /* R:1.0f */ <= fVar25) {
          fVar25 = DAT_005be894 /* R:1.0f */;
        }
        if (fVar26 <= 0.0) {
          fVar26 = local_204;
        }
        *(float *)((long)pvVar8 + (long)iVar12 * 0x10 + 8) = fVar29;
        if (DAT_005be894 /* R:1.0f */ <= fVar30) {
          fVar30 = DAT_005be894 /* R:1.0f */;
        }
        if (DAT_005be894 /* R:1.0f */ <= fVar26) {
          fVar26 = DAT_005be894 /* R:1.0f */;
        }
        fVar30 = fVar30 + fVar29;
        fVar26 = fVar26 + fVar25;
        *(float *)((long)pvVar8 + (long)iVar12 * 0x10 + 0xc) = fVar26;
        Vector2__operator_minus__005be180((Vector2 *)&local_d8, (Vector2 *)&local_f8);
        puVar15 = (uint32_t *)((long)local_1e8[uVar14 * 6] * 0x10 + (long)pvVar8);
        local_1e8[uVar14 * 6] = local_1e8[uVar14 * 6] + 1;
        *puVar15 = local_d8;
        puVar15[1] = local_d4;
        iVar12 = local_1e8[uVar14 * 6];
        local_c4 = (uint)local_e4 ^ DAT_005be6f0 /* R:u32=2147483648 */;
        *(float *)((long)pvVar8 + (long)iVar12 * 0x10 + 8) = fVar30;
        *(float *)((long)pvVar8 + (long)iVar12 * 0x10 + 0xc) = fVar26;
        local_c8 = local_e8;
        Vector2__operator_plus__005be140((Vector2 *)&local_b8, (Vector2 *)&local_f8);
        puVar15 = (uint32_t *)((long)local_1e8[uVar14 * 6] * 0x10 + (long)pvVar8);
        local_1e8[uVar14 * 6] = local_1e8[uVar14 * 6] + 1;
        *puVar15 = local_b8;
        local_a8 = (uint)local_e8 ^ DAT_005be6f0 /* R:u32=2147483648 */;
        puVar15[1] = local_b4;
        iVar12 = local_1e8[uVar14 * 6];
        *(float *)((long)pvVar8 + (long)iVar12 * 0x10 + 8) = fVar29;
        *(float *)((long)pvVar8 + (long)iVar12 * 0x10 + 0xc) = fVar25;
        local_a4 = local_e4;
        Vector2__operator_plus__005be140((Vector2 *)&local_98, (Vector2 *)&local_f8);
        puVar15 = (uint32_t *)((long)local_1e8[uVar14 * 6] * 0x10 + (long)pvVar8);
        local_1e8[uVar14 * 6] = local_1e8[uVar14 * 6] + 1;
        *puVar15 = local_98;
        puVar15[1] = local_94;
        iVar12 = local_1e8[uVar14 * 6];
        local_84 = (uint)local_e4 ^ DAT_005be6f0 /* R:u32=2147483648 */;
        *(float *)((long)pvVar8 + (long)iVar12 * 0x10 + 8) = fVar30;
        *(float *)((long)pvVar8 + (long)iVar12 * 0x10 + 0xc) = fVar26;
        local_88 = local_e8;
        Vector2__operator_plus__005be140((Vector2 *)&local_78, (Vector2 *)&local_f8);
        puVar15 = (uint32_t *)((long)local_1e8[uVar14 * 6] * 0x10 + (long)pvVar8);
        local_1e8[uVar14 * 6] = local_1e8[uVar14 * 6] + 1;
        *puVar15 = local_78;
        puVar15[1] = local_74;
        iVar12 = local_1e8[uVar14 * 6];
        *(float *)((long)pvVar8 + (long)iVar12 * 0x10 + 8) = fVar30;
        *(float *)((long)pvVar8 + (long)iVar12 * 0x10 + 0xc) = fVar25;
        Vector2__operator_plus__005be140((Vector2 *)&local_68, (Vector2 *)&local_f8);
        puVar15 = (uint32_t *)((long)local_1e8[uVar14 * 6] * 0x10 + (long)pvVar8);
        local_1e8[uVar14 * 6] = local_1e8[uVar14 * 6] + 1;
        *puVar15 = local_68;
        local_58 = (uint)local_e8 ^ DAT_005be6f0 /* R:u32=2147483648 */;
        puVar15[1] = local_64;
        iVar12 = local_1e8[uVar14 * 6];
        *(float *)((long)pvVar8 + (long)iVar12 * 0x10 + 8) = fVar29;
        *(float *)((long)pvVar8 + (long)iVar12 * 0x10 + 0xc) = fVar25;
        local_54 = local_e4;
        Vector2__operator_plus__005be140((Vector2 *)&local_48, (Vector2 *)&local_f8);
        puVar15 = (uint32_t *)((long)local_1e8[uVar14 * 6] * 0x10 + (long)pvVar8);
        local_1e8[uVar14 * 6] = local_1e8[uVar14 * 6] + 1;
        *puVar15 = local_48;
        puVar15[1] = local_44;
        iVar12 = 0;
        lVar13 = *(long *)(self + 0x20);
        piVar16 = *(int **)(self + 0x28);
        if (*(int *)(lVar13 + 0x38) == 1) {
          puVar9 = *(ushort **)(lVar13 + 0x30);
          if (*puVar9 / 6 != 0) {
            iVar12 = 0;
            puVar17 = puVar9;
            do {
              if ((uVar22 == puVar17[2]) &&
                  (*(uint *)((long)piVar16 + lVar21) == (uint)puVar17[3])) {
                iVar12 = (int)(short)puVar9[(long)iVar12 * 3 + 4];
                goto LAB_00585cf5;
              }
              iVar12 = iVar12 + 1;
              puVar17 = puVar17 + 3;
            } while ((ushort)iVar12 < *puVar9 / 6);
            iVar12 = 0;
          }
        }
      LAB_00585cf5:
        local_200 =
            (float)(int)(iVar12 +
                         (((uint) * (ushort *)(lVar24 + 8) + (int)*(short *)(lVar24 + 0x10)) -
                          (uint) * (byte *)(*(long *)(lVar13 + 0x10) + 0xc))) *
                fVar27 +
            local_200;
        fVar27 = local_200;
        if (local_200 <= *(float *)(self + 0x98)) {
          fVar27 = *(float *)(self + 0x98);
        }
        *(float *)(self + 0x98) = fVar27;
        *(uint *)(self + 0x9c) = (uint)local_1fc ^ DAT_005be6f0 /* R:u32=2147483648 */;
        uVar22 = *(uint *)((long)piVar16 + lVar21);
      }
      lVar21 = lVar21 + 4;
      bVar10 = iVar20 < *(int *)(self + 0x30);
      iVar20 = iVar20 + 1;
    } while (bVar10);
  }
  if (*(short *)(*(long *)(lVar13 + 0x18) + 0xc) != 0) {
    piVar16 = local_1e8;
    lVar13 = 0;
    iVar20 = 0;
    do {
      iVar20 = iVar20 + 1;
      lVar21 = *(long *)(*(long *)(self + 0x68) + lVar13);
      *(int *)(lVar21 + 0x14) = *piVar16;
      this_00 = *(VertexBuffer **)(lVar21 + 0x20);
      iVar12 = *piVar16;
      piVar16 = piVar16 + 6;
      plVar1 = (long *)(*(long *)(self + 0x68) + lVar13);
      lVar13 = lVar13 + 8;
      *(int *)(*plVar1 + 0x10) = iVar12 / 3;
      VertexBuffer__Unlock(this_00);
    } while (iVar20 < (int)(uint) * (ushort *)(*(long *)(*(long *)(self + 0x20) + 0x18) + 0xc));
  }
  return;
}

/* ======================================================================
 * FontEmitter__FontEmitter__005861d0  (Ghidra `FontEmitter` @ 005861d0)
 * Signature: uint8_t __thiscall FontEmitter(FontEmitter * self, FontEmitterCreation * arg1)
 * Class: FontEmitter
 * Calls: `CreateFontEmitterResources`, `DestroyFontEmitterResources`, `TResourceCreator__AddResourceCreationFunction`, `TResourceCreator__AddResourceDestroyFunction`, `TextEmitterFont__TextEmitterFont__00584f80`
 * Called by: `FlashAnimationLibrary__FlashAnimationLibrary__00576680`, `FlashTextField__FlashTextField__00576210`, `UILabel__UILabel__005a5270`, `UITextField__UITextField__005a5de0`
 */
/* FontEmitter__FontEmitter__005861d0(FontEmitterCreation const*) */

void __thiscall FontEmitter__FontEmitter__005861d0(FontEmitter *self, FontEmitterCreation *arg1)

{
  uint64_t uVar1;
  TextEmitterFont *this_00;

  *(uint64_t *)(self + 8) = 0;
  *(uint8_t ***)self = &PTR__FontEmitter_005dc0f0;
  uVar1 = ::cBlack;
  *(uint64_t *)(self + 0x10) = 0;
  *(uint64_t *)(self + 0x18) = 0;
  *(uint64_t *)(self + 0x28) = 0;
  *(uint32_t *)(self + 0x30) = 0;
  *(uint64_t *)(self + 0x3c) = uVar1;
  uVar1 = DAT_00820c68 /* R:2.802596928649634e-45f */;
  *(uint32_t *)(self + 0x34) = 0;
  *(uint32_t *)(self + 0x38) = 0;
  *(uint32_t *)(self + 0x4c) = 0;
  *(uint32_t *)(self + 0x50) = 0;
  *(uint64_t *)(self + 0x44) = uVar1;
  *(uint32_t *)(self + 0x54) = 0x3f800000;
  *(uint32_t *)(self + 0x58) = 0x3f800000;
  *(uint32_t *)(self + 0x5c) = 0;
  if (*(long *)(arg1 + 8) == 0) {
    if (*(long *)arg1 != 0) {
      this_00 = BaseResource__operator_new(0x60, 1);
      /* try { // try from 00586313 to 00586317 has its CatchHandler @ 00586321 */
      TextEmitterFont__TextEmitterFont__00584f80(this_00, *(char **)arg1);
      *(TextEmitterFont **)(self + 0x20) = this_00;
    }
  } else {
    *(long *)(self + 0x20) = *(long *)(arg1 + 8);
  }
  *(uint32_t *)(self + 0x70) = 4;
  *(uint32_t *)(self + 0x74) = 4;
  *(uint32_t *)(self + 0x78) = 4;
  *(uint32_t *)(self + 0x7c) = 4;
  *(uint32_t *)(self + 0x80) = 4;
  *(uint32_t *)(self + 0x84) = 4;
  *(uint32_t *)(self + 0x88) = 4;
  *(uint32_t *)(self + 0x8c) = 4;
  *(uint32_t *)(self + 0x90) = 4;
  *(uint32_t *)(self + 0x94) = 4;
  /* try { // try from 005862bb to 00586308 has its CatchHandler @ 00586343 */
  CreateFontEmitterResources(self);
  TResourceCreator__AddResourceCreationFunction((TResourceCreator *)ResourceCreator,
                                                CreateFontEmitterResources, self);
  TResourceCreator__AddResourceDestroyFunction((TResourceCreator *)ResourceCreator,
                                               DestroyFontEmitterResources, self);
  return;
}

/* ======================================================================
 * FontEmitter__AllocateChars  (Ghidra `AllocateChars` @ 00586350)
 * Signature: uint8_t __thiscall AllocateChars(FontEmitter * self, int arg1)
 * Class: FontEmitter
 * Calls: `malloc`, `realloc`
 * Called by: (none)
 */
/* FontEmitter__AllocateChars(int) */

void __thiscall FontEmitter__AllocateChars(FontEmitter *self, int arg1)

{
  void *pvVar1;
  int iVar2;

  if (*(int *)(self + 0x34) <= arg1) {
    iVar2 = arg1 + 1;
    if (*(void **)(self + 0x28) == (void *)0x0) {
      pvVar1 = malloc((long)iVar2 << 2);
      *(void **)(self + 0x28) = pvVar1;
    } else {
      pvVar1 = realloc(*(void **)(self + 0x28), (long)iVar2 << 2);
      *(void **)(self + 0x28) = pvVar1;
    }
    *(int *)(self + 0x34) = iVar2;
  }
  return;
}

/* ======================================================================
 * FontEmitter__SetStaticText  (Ghidra `SetStaticText` @ 005863b0)
 * Signature: uint8_t __thiscall SetStaticText(FontEmitter * self, wchar_t * arg1)
 * Class: FontEmitter
 * Calls: `malloc`, `memcpy`, `realloc`, `safe_wcslen`
 * Called by: `SetDynamicText__005a6240`, `SetText`, `SetText__005763a0`, `UILabel__setText`, `UITextField__SetStaticText`, `UITextField__Update`
 */
/* FontEmitter__SetStaticText(wchar_t const*) */

void __thiscall FontEmitter__SetStaticText(FontEmitter *self, wchar_t *arg1)

{
  int iVar1;
  wchar_t *__ptr;
  int iVar2;

  iVar1 = safe_wcslen(arg1);
  __ptr = *(wchar_t **)(self + 0x28);
  if (*(int *)(self + 0x34) <= iVar1 + 1) {
    iVar2 = iVar1 + 2;
    if (__ptr == (wchar_t *)0x0) {
      __ptr = malloc((long)iVar2 << 2);
      *(wchar_t **)(self + 0x28) = __ptr;
    } else {
      __ptr = realloc(__ptr, (long)iVar2 << 2);
      *(wchar_t **)(self + 0x28) = __ptr;
    }
    *(int *)(self + 0x34) = iVar2;
  }
  if (arg1 != __ptr) {
    memcpy(__ptr, arg1, (long)(iVar1 + 1) * 4);
    __ptr = *(wchar_t **)(self + 0x28);
  }
  __ptr[(long)iVar1 + 1] = L'\0';
  *(int *)(self + 0x30) = iVar1;
  FillVertexBuffer(self);
  return;
}

/* ======================================================================
 * FontEmitter__SetFontSize  (Ghidra `SetFontSize` @ 00586530)
 * Signature: uint8_t __thiscall SetFontSize(FontEmitter * self, float arg1)
 * Class: FontEmitter
 * Calls: (none)
 * Called by: `UILabel__Render`, `UILabel__UILabel__005a5270`, `UITextField__CustomRender`
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FontEmitter__SetFontSize(float) */

void __thiscall FontEmitter__SetFontSize(FontEmitter *self, float arg1)

{
  ushort uVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  long lVar7;
  float fVar8;

  lVar3 = Window;
  uVar1 = *(ushort *)(*(long *)(self + 0x20) + 0x48);
  lVar7 = *(long *)(*(long *)(self + 0x20) + 0x28);
  if (uVar1 == 0) {
  LAB_00586575:
    lVar7 = lVar7 + 4;
  } else {
    if (*(int *)(lVar7 + 4) == 0x4d) {
      iVar6 = 0;
    } else {
      piVar5 = (int *)(lVar7 + 0x18);
      iVar4 = 1;
      do {
        iVar6 = iVar4;
        if (iVar6 == (uVar1 - 1 & 0xffff) + 1)
          goto LAB_00586575;
        iVar2 = *piVar5;
        piVar5 = piVar5 + 5;
        iVar4 = iVar6 + 1;
      } while (iVar2 != 0x4d);
    }
    lVar7 = lVar7 + 4 + (long)iVar6 * 0x14;
  }
  fVar8 = arg1 / (float)*(ushort *)(lVar7 + 10);
  fVar8 = fVar8 + fVar8;
  if (*(int *)(self + 0x38) != 1) {
    *(float *)(self + 0x54) = fVar8 / (float)*(ushort *)(Window + 8);
    *(float *)(self + 0x58) = fVar8 / (float)*(ushort *)(lVar3 + 10);
    return;
  }
  fVar8 = fVar8 * _DAT_005dc110 /* R:0.2813599109649658f */;
  *(float *)(self + 0x54) = fVar8;
  *(float *)(self + 0x58) = fVar8;
  return;
}

/* ======================================================================
 * FontEmitter__SetFontSizeActualPixels  (Ghidra `SetFontSizeActualPixels` @ 005865f0)
 * Signature: uint8_t __thiscall SetFontSizeActualPixels(FontEmitter * self, float arg1)
 * Class: FontEmitter
 * Calls: (none)
 * Called by: `Render__005719b0`
 */
/* FontEmitter__SetFontSizeActualPixels(float) */

void __thiscall FontEmitter__SetFontSizeActualPixels(FontEmitter *self, float arg1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  long lVar6;
  float fVar7;

  uVar1 = *(ushort *)(*(long *)(self + 0x20) + 0x48);
  lVar6 = *(long *)(*(long *)(self + 0x20) + 0x28);
  if (uVar1 == 0) {
  LAB_00586635:
    lVar6 = lVar6 + 4;
  } else {
    if (*(int *)(lVar6 + 4) == 0x4d) {
      iVar5 = 0;
    } else {
      piVar4 = (int *)(lVar6 + 0x18);
      iVar3 = 1;
      do {
        iVar5 = iVar3;
        if (iVar5 == (uVar1 - 1 & 0xffff) + 1)
          goto LAB_00586635;
        iVar2 = *piVar4;
        piVar4 = piVar4 + 5;
        iVar3 = iVar5 + 1;
      } while (iVar2 != 0x4d);
    }
    lVar6 = lVar6 + 4 + (long)iVar5 * 0x14;
  }
  fVar7 = (arg1 / (float)*(ushort *)(lVar6 + 10)) * DAT_005be6e4 /* R:0.5f */;
  *(float *)(self + 0x54) = fVar7;
  *(float *)(self + 0x58) = fVar7;
  return;
}
