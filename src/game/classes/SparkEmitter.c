/* src/game/classes/SparkEmitter.c — 8 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "SparkEmitter.h"

/* ======================================================================
 * SparkEmitter__SetPosition  (Ghidra `SetPosition` @ 0059f2a0)
 * Signature: uint8_t __thiscall SetPosition(SparkEmitter * self, Vector2 * arg1)
 * Class: SparkEmitter
 * Calls: `Vector2__operator_assign`
 * Called by: (none)
 */
/* SparkEmitter__SetPosition(Vector2 const&) */

void __thiscall SparkEmitter__SetPosition(SparkEmitter *self,Vector2 *arg1)

{
  Vector2__operator_assign((Vector2 *)(self + 0x14),arg1);
  return;
}

/* ======================================================================
 * SparkEmitter__Reset  (Ghidra `Reset` @ 0059f2b0)
 * Signature: uint8_t __thiscall Reset(SparkEmitter * self)
 * Class: SparkEmitter
 * Calls: `memset`
 * Called by: (none)
 */
/* SparkEmitter__Reset() */

void __thiscall SparkEmitter__Reset(SparkEmitter *self)

{
  memset(*(void **)(self + 0x20),0,(long)*(int *)(self + 0x4c) * 0x1c);
  *(uint32_t *)(self + 0x70) = 0;
  *(uint32_t *)(self + 0x54) = 0;
  return;
}

/* ======================================================================
 * SparkEmitter__Render  (Ghidra `Render` @ 0059f410)
 * Signature: uint8_t __thiscall Render(SparkEmitter * self)
 * Class: SparkEmitter
 * Calls: `TGraphics__AddPixelStage`, `TGraphics__Draw`, `TGraphics__GetMatrix`, `TGraphics__ResetPixelStages`, `TGraphics__ResetTexCoordGen`, `TGraphics__SetRenderState`
 * Called by: (none)
 */
/* SparkEmitter__Render() */

void __thiscall SparkEmitter__Render(SparkEmitter *self)

{
  Matrix4x4 *pMVar1;
  
  if ((*(int *)(self + 0x10) != 0) && (0 < *(int *)(self + 0x54))) {
    TGraphics__ResetPixelStages(Graphics);
    TGraphics__ResetTexCoordGen(Graphics);
    TGraphics__SetRenderState(Graphics,'\a',0);
    TGraphics__SetRenderState(Graphics,'\x05',4);
    TGraphics__SetRenderState(Graphics,'\x06',5);
    pMVar1 = (Matrix4x4 *)TGraphics__GetMatrix(Graphics,0);
    Matrix4x4__Identity(pMVar1);
    TGraphics__AddPixelStage(Graphics,4,0,0,0,0,1,0xffffffff);
    TGraphics__Draw(Graphics,*(VertexStream **)(self + 0x68),(IndexBuffer *)0x0);
    return;
  }
  return;
}

/* ======================================================================
 * SparkEmitter__SparkEmitter  (Ghidra `~SparkEmitter` @ 0059f4f0)
 * Signature: uint8_t __thiscall ~SparkEmitter(SparkEmitter * self)
 * Class: SparkEmitter
 * Calls: `BaseResource__Release`, `SparkEmitterResourceCreate`, `SparkEmitterResourceDestroy`, `SparkEmitter__SparkEmitter__0059f590`, `TResourceCreator__RemoveResourceCreationFunction`, `TResourceCreator__RemoveResourceDestroyFunction`, `free`
 * Called by: (none)
 */
/* SparkEmitter__SparkEmitter__0059f590() */

void __thiscall SparkEmitter__SparkEmitter__0059f590(SparkEmitter *self)

{
  *(uint8_t ***)self = &PTR__SparkEmitter_005dd4f0;
  free(*(void **)(self + 0x20));
  if (*(BaseResource **)(self + 0x58) != (BaseResource *)0x0) {
                    /* try { // try from 0059f50f to 0059f56f has its CatchHandler @ 0059f579 */
    BaseResource__Release(*(BaseResource **)(self + 0x58),0);
    *(uint64_t *)(self + 0x58) = 0;
  }
  if (*(BaseResource **)(self + 0x60) != (BaseResource *)0x0) {
    BaseResource__Release(*(BaseResource **)(self + 0x60),0);
    *(uint64_t *)(self + 0x60) = 0;
  }
  if (*(BaseResource **)(self + 0x68) != (BaseResource *)0x0) {
    BaseResource__Release(*(BaseResource **)(self + 0x68),0);
    *(uint64_t *)(self + 0x68) = 0;
  }
  TResourceCreator__RemoveResourceCreationFunction
            ((TResourceCreator *)ResourceCreator,SparkEmitterResourceCreate,self);
  TResourceCreator__RemoveResourceDestroyFunction
            ((TResourceCreator *)ResourceCreator,SparkEmitterResourceDestroy,self);
  *(uint8_t ***)self = &PTR__ParticleEmitter_005c12b0;
  return;
}

/* ======================================================================
 * SparkEmitter__SparkEmitter__0059f590  (Ghidra `~SparkEmitter` @ 0059f590)
 * Signature: uint8_t __thiscall ~SparkEmitter(SparkEmitter * self)
 * Class: SparkEmitter
 * Calls: `operator_delete`
 * Called by: `SparkEmitter__SparkEmitter`
 */
/* SparkEmitter__SparkEmitter__0059f590() */

void __thiscall SparkEmitter__SparkEmitter__0059f590(SparkEmitter *self)

{
  SparkEmitter__dtor(self);
  operator_delete(self);
  return;
}

/* ======================================================================
 * SparkEmitter__SparkEmitter__0059f5b0  (Ghidra `SparkEmitter` @ 0059f5b0)
 * Signature: uint8_t __thiscall SparkEmitter(SparkEmitter * self, SparkEmitterCreation * arg1)
 * Class: SparkEmitter
 * Calls: `SparkEmitterResourceCreate`, `SparkEmitterResourceDestroy`, `TResourceCreator__AddResourceCreationFunction`, `TResourceCreator__AddResourceDestroyFunction`, `malloc`, `memset`
 * Called by: `SMBPalette__FindAnimatedObstacles`
 */
/* SparkEmitter__SparkEmitter__0059f5b0(SparkEmitterCreation const*) */

void __thiscall SparkEmitter__SparkEmitter__0059f5b0(SparkEmitter *self,SparkEmitterCreation *arg1)

{
  int iVar1;
  uint64_t uVar2;
  void *__s;
  
  *(uint64_t *)(self + 8) = 0;
  *(uint8_t ***)self = &PTR__SparkEmitter_005dd4f0;
  uVar2 = ::cWhite;
  *(uint32_t *)(self + 0x10) = 1;
  *(uint32_t *)(self + 0x14) = 0;
  *(uint32_t *)(self + 0x38) = 0x3f800000;
  *(uint32_t *)(self + 0x3c) = 0x3f800000;
  *(uint32_t *)(self + 0x40) = 0x42c80000;
  *(uint64_t *)(self + 0x28) = uVar2;
  uVar2 = DAT_00822b88 /* R:1.401298464324817e-44f */;
  *(uint32_t *)(self + 0x44) = 0x3f800000;
  *(uint32_t *)(self + 0x48) = 0;
  *(uint32_t *)(self + 0x4c) = 10;
  *(uint32_t *)(self + 0x18) = 0;
  *(uint64_t *)(self + 0x30) = uVar2;
  *(uint64_t *)(self + 0x20) = 0;
  *(uint32_t *)(self + 0x50) = 1;
  *(uint32_t *)(self + 0x54) = 0;
  *(uint32_t *)(self + 0x70) = 0;
  *(uint64_t *)(self + 0x28) = *(uint64_t *)arg1;
  *(uint64_t *)(self + 0x30) = *(uint64_t *)(arg1 + 8);
  *(uint64_t *)(self + 0x38) = *(uint64_t *)(arg1 + 0x10);
  *(uint64_t *)(self + 0x40) = *(uint64_t *)(arg1 + 0x18);
  *(uint64_t *)(self + 0x48) = *(uint64_t *)(arg1 + 0x20);
  *(uint32_t *)(self + 0x50) = *(uint32_t *)(arg1 + 0x28);
  iVar1 = *(int *)(self + 0x4c);
  __s = malloc((long)iVar1 * 0x1c);
  *(void **)(self + 0x20) = __s;
  memset(__s,0,(long)iVar1 * 0x1c);
                    /* try { // try from 0059f696 to 0059f6be has its CatchHandler @ 0059f6c6 */
  SparkEmitterResourceCreate(self);
  TResourceCreator__AddResourceCreationFunction
            ((TResourceCreator *)ResourceCreator,SparkEmitterResourceCreate,self);
  TResourceCreator__AddResourceDestroyFunction
            ((TResourceCreator *)ResourceCreator,SparkEmitterResourceDestroy,self);
  return;
}

/* ======================================================================
 * SparkEmitter__AddNewSpark  (Ghidra `AddNewSpark` @ 0059f6e0)
 * Signature: uint8_t __thiscall AddNewSpark(SparkEmitter * self)
 * Class: SparkEmitter
 * Calls: `GetRandomINT`, `Vector2__operator_assign`
 * Called by: (none)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SparkEmitter__AddNewSpark() */

void __thiscall SparkEmitter__AddNewSpark(SparkEmitter *self)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  
  iVar3 = 0;
  if (0 < *(int *)(self + 0x50)) {
    while (0 < *(int *)(self + 0x4c)) {
      iVar2 = 0;
      fVar4 = (*(float **)(self + 0x20))[4];
      pfVar1 = *(float **)(self + 0x20);
      while (0.0 < fVar4) {
        iVar2 = iVar2 + 1;
        if (iVar2 == *(int *)(self + 0x4c)) {
          return;
        }
        fVar4 = pfVar1[0xb];
        pfVar1 = pfVar1 + 7;
      }
      if (pfVar1 == (float *)0x0) {
        return;
      }
      iVar2 = GetRandomINT(0,0x1e);
      iVar3 = iVar3 + 1;
      fVar4 = (DAT_005be894 /* R:1.0f */ - (float)iVar2 * _DAT_005dd520 /* R:0.03333333507180214f */) * *(float *)(self + 0x38) +
              (float)iVar2 * _DAT_005dd520 /* R:0.03333333507180214f */ * *(float *)(self + 0x3c);
      pfVar1[4] = fVar4;
      pfVar1[6] = fVar4;
      iVar2 = GetRandomINT((int)(float)((uint)*(float *)(self + 0x40) ^ DAT_005be6f0 /* R:u32=2147483648 */),
                           (int)*(float *)(self + 0x40));
      *pfVar1 = (float)iVar2;
      iVar2 = GetRandomINT((int)(float)((uint)*(float *)(self + 0x40) ^ DAT_005be6f0 /* R:u32=2147483648 */),
                           (int)*(float *)(self + 0x40));
      pfVar1[1] = (float)iVar2;
      Vector2__operator_assign((Vector2 *)(pfVar1 + 2),(Vector2 *)(self + 0x14));
      pfVar1[5] = 0.0;
      *(int *)(self + 0x54) = *(int *)(self + 0x54) + 1;
      if (*(int *)(self + 0x50) <= iVar3) {
        return;
      }
    }
  }
  return;
}

/* ======================================================================
 * SparkEmitter__Update  (Ghidra `Update` @ 0059f800)
 * Signature: uint8_t __thiscall Update(SparkEmitter * self)
 * Class: SparkEmitter
 * Calls: `GetRandomINT`, `TileLevel__GetGridBlockFromPos`, `Vector2__operator_assign`, `Vector2__operator_mul__005be200`, `Vector2__operator_plus__005be140`, `VertexBuffer__Lock`, `VertexBuffer__Unlock`, `VertexStream__SetVertexBuffer`
 * Called by: (none)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SparkEmitter__Update() */

void __thiscall SparkEmitter__Update(SparkEmitter *self)

{
  VertexBuffer *pVVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  uint32_t local_f8;
  float local_f4;
  Vector2 local_e8 [4];
  float local_e4;
  uint32_t local_d8;
  float local_d4;
  Vector2 local_c8 [16];
  Vector2 local_b8 [16];
  Vector2 local_a8 [16];
  uint32_t local_98;
  float local_94;
  uint32_t local_88;
  float local_84;
  uint32_t local_78;
  uint32_t local_74;
  Vector2 local_68 [16];
  uint32_t local_58;
  uint32_t local_54;
  Vector2 local_48 [8];
  void *local_40 [2];
  
  if (*(int *)(self + 0x10) != 0) {
    fVar12 = *(float *)(self + 0x70) - fOneFrameTimeStep;
    *(float *)(self + 0x70) = fVar12;
    if (fVar12 < 0.0) {
      AddNewSpark(self);
      iVar2 = GetRandomINT((int)(DAT_005c01c4 /* R:1000.0f */ * *(float *)(self + 0x48)),
                           (int)(*(float *)(self + 0x44) * DAT_005c01c4 /* R:1000.0f */));
      *(float *)(self + 0x70) = (float)iVar2 * DAT_005c01d0 /* R:0.0010000000474974513f */;
    }
    iVar9 = 0;
    iVar10 = 0;
    VertexBuffer__Lock(*(VertexBuffer **)(self + 0x58),local_40,1,0);
    iVar2 = *(int *)(self + 0x4c);
    if (0 < iVar2) {
      lVar7 = 0;
      iVar9 = 0;
      uVar5 = ((uint)(long)(*(float *)(self + 0x2c) * DAT_005be898 /* R:255.0f */) & 0xff) << 8;
      uVar11 = ((uint)(long)(*(float *)(self + 0x28) * DAT_005be898 /* R:255.0f */) & 0xff) << 0x10;
      uVar6 = (uint)(long)(*(float *)(self + 0x30) * DAT_005be898 /* R:255.0f */) & 0xff;
LAB_0059fca0:
      do {
        fVar12 = fOneFrameTimeStep;
        lVar8 = lVar7 + *(long *)(self + 0x20);
        if (0.0 < *(float *)(lVar8 + 0x10)) {
          fVar15 = *(float *)(lVar8 + 0x14);
          fVar13 = fOneFrameTimeStep + fVar15;
          Vector2__operator_mul__005be200(local_c8,fVar15);
          Vector2__operator_plus__005be140((Vector2 *)&local_f8,(Vector2 *)(lVar7 + *(long *)(self + 0x20) + 8));
          fVar14 = *(float *)(lVar7 + *(long *)(self + 0x20) + 0x14);
          local_f4 = fVar14 * fVar14 * _DAT_005c17f8 /* R:-550.0f */ + local_f4;
          Vector2__operator_mul__005be200(local_b8,fVar13);
          Vector2__operator_plus__005be140(local_e8,(Vector2 *)(lVar7 + *(long *)(self + 0x20) + 8));
          fVar14 = fVar13 * fVar13 * _DAT_005c17f8 /* R:-550.0f */;
          local_e4 = local_e4 + fVar14;
          if (*(long *)(self + 8) != 0) {
            fVar15 = fVar15 - fVar12;
            Vector2__operator_mul__005be200(local_a8,fVar15);
            Vector2__operator_plus__005be140((Vector2 *)&local_d8,(Vector2 *)(lVar7 + *(long *)(self + 0x20) + 8))
            ;
            local_98 = local_d8;
            local_94 = local_f4;
            local_d4 = fVar15 * fVar15 * _DAT_005c17f8 /* R:-550.0f */ + local_d4;
            pcVar3 = (char *)TileLevel__GetGridBlockFromPos(*(TileLevel **)(self + 8),&local_98,0);
            local_88 = local_f8;
            local_84 = local_d4;
            pcVar4 = (char *)TileLevel__GetGridBlockFromPos(*(TileLevel **)(self + 8),&local_88,0);
            if ((*pcVar4 != '\0') || (*pcVar3 != '\0')) {
              Vector2__operator_assign((Vector2 *)(lVar7 + *(long *)(self + 0x20) + 8),
                                 (Vector2 *)&local_d8);
              if (*pcVar3 == '\0') {
                *(float *)(lVar7 + *(long *)(self + 0x20)) =
                     DAT_005dd524 /* R:-0.699999988079071f */ * *(float *)(lVar7 + *(long *)(self + 0x20));
                *(float *)(*(long *)(self + 0x20) + 4 + lVar7) = (local_f4 - local_d4) + fVar14;
              }
              else {
                *(float *)(lVar7 + *(long *)(self + 0x20) + 4) =
                     DAT_005dd524 /* R:-0.699999988079071f */ * *(float *)(lVar7 + *(long *)(self + 0x20) + 4);
              }
              *(uint32_t *)(*(long *)(self + 0x20) + 0x14 + lVar7) = 0;
            }
          }
          lVar8 = lVar7 + *(long *)(self + 0x20);
          fVar12 = *(float *)(lVar8 + 0x10);
          fVar15 = *(float *)(lVar8 + 0x18);
          Vector2__operator_mul__005be200(local_68,*(float *)(lVar8 + 0x14));
          Vector2__operator_plus__005be140((Vector2 *)&local_78,(Vector2 *)(lVar7 + *(long *)(self + 0x20) + 8));
          lVar8 = (long)iVar10 * 0xc;
          *(uint32_t *)(lVar8 + (long)local_40[0]) = local_78;
          ((uint32_t *)(lVar8 + (long)local_40[0]))[1] = local_74;
          fVar14 = *(float *)(*(long *)(self + 0x20) + 0x14 + lVar7);
          *(float *)((long)local_40[0] + lVar8 + 4) =
               fVar14 * fVar14 * _DAT_005c17f8 /* R:-550.0f */ + *(float *)((long)local_40[0] + lVar8 + 4);
          *(uint *)((long)local_40[0] + lVar8 + 8) =
               (int)(long)((fVar12 / fVar15) * DAT_005be898 /* R:255.0f */) << 0x18 | uVar11 | uVar6 | uVar5;
          *(float *)(lVar7 + *(long *)(self + 0x20) + 0x14) =
               *(float *)(lVar7 + *(long *)(self + 0x20) + 0x14) + fOneFrameTimeStep;
          lVar8 = lVar7 + *(long *)(self + 0x20);
          fVar12 = *(float *)(lVar8 + 0x10);
          fVar15 = *(float *)(lVar8 + 0x18);
          Vector2__operator_mul__005be200(local_48,*(float *)(lVar8 + 0x14));
          Vector2__operator_plus__005be140((Vector2 *)&local_58,(Vector2 *)(lVar7 + *(long *)(self + 0x20) + 8));
          iVar2 = iVar10 + 1;
          iVar10 = iVar10 + 2;
          lVar8 = (long)iVar2 * 0xc;
          *(uint32_t *)(lVar8 + (long)local_40[0]) = local_58;
          ((uint32_t *)(lVar8 + (long)local_40[0]))[1] = local_54;
          fVar14 = *(float *)(*(long *)(self + 0x20) + 0x14 + lVar7);
          *(float *)((long)local_40[0] + lVar8 + 4) =
               fVar14 * fVar14 * _DAT_005c17f8 /* R:-550.0f */ + *(float *)((long)local_40[0] + lVar8 + 4);
          *(uint *)((long)local_40[0] + lVar8 + 8) =
               (int)(long)((fVar12 / fVar15) * DAT_005be898 /* R:255.0f */) << 0x18 | uVar5 | uVar11 | uVar6;
          *(float *)(lVar7 + *(long *)(self + 0x20) + 0x10) =
               *(float *)(lVar7 + *(long *)(self + 0x20) + 0x10) - fOneFrameTimeStep;
          iVar2 = *(int *)(self + 0x4c);
        }
        else if (*(float *)(lVar8 + 0x10) != DAT_005c07a4 /* R:-1.0f */) {
          *(float *)(lVar8 + 0x10) = DAT_005c07a4 /* R:-1.0f */;
          iVar2 = *(int *)(self + 0x4c);
          iVar9 = iVar9 + 1;
          *(int *)(self + 0x54) = *(int *)(self + 0x54) + -1;
          lVar7 = lVar7 + 0x1c;
          if (iVar2 <= iVar9) break;
          goto LAB_0059fca0;
        }
        iVar9 = iVar9 + 1;
        lVar7 = lVar7 + 0x1c;
      } while (iVar9 < iVar2);
      iVar9 = iVar10 >> 1;
    }
    VertexBuffer__Unlock(*(VertexBuffer **)(self + 0x58));
    pVVar1 = *(VertexBuffer **)(self + 0x58);
    *(uint64_t *)(self + 0x58) = *(uint64_t *)(self + 0x60);
    *(VertexBuffer **)(self + 0x60) = pVVar1;
    VertexStream__SetVertexBuffer(*(VertexStream **)(self + 0x68),'\0',pVVar1);
    *(int *)(*(long *)(self + 0x68) + 0x14) = iVar10;
    *(int *)(*(long *)(self + 0x68) + 0x10) = iVar9;
  }
  return;
}
