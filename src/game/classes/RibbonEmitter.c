/* src/game/classes/RibbonEmitter.c — 8 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "RibbonEmitter.h"

/* ======================================================================
 * RibbonEmitter__Reset  (Ghidra `Reset` @ 0059a4b0)
 * Signature: uint8_t __thiscall Reset(RibbonEmitter * self)
 * Class: RibbonEmitter
 * Calls: (none)
 * Called by: (none)
 */
/* RibbonEmitter__Reset() */

void __thiscall RibbonEmitter__Reset(RibbonEmitter *self)

{
  *(uint32_t *)(self + 0x4c) = 0;
  *(uint32_t *)(self + 0x50) = 0;
  return;
}

/* ======================================================================
 * RibbonEmitter__Render  (Ghidra `Render` @ 0059a5e0)
 * Signature: uint8_t __thiscall Render(RibbonEmitter * self)
 * Class: RibbonEmitter
 * Calls: `TGraphics__AddPixelStage`, `TGraphics__Draw`, `TGraphics__GetMatrix`, `TGraphics__ResetPixelStages`, `TGraphics__ResetTexCoordGen`, `TGraphics__SetRenderState`
 * Called by: (none)
 */
/* RibbonEmitter__Render() */

void __thiscall RibbonEmitter__Render(RibbonEmitter *self)

{
  Matrix4x4 *pMVar1;
  
  if ((*(long *)(self + 0x68) != 0) && (1 < *(int *)(self + 0x50))) {
    TGraphics__ResetPixelStages(Graphics);
    TGraphics__ResetTexCoordGen(Graphics);
    TGraphics__SetRenderState(Graphics,'\a',0);
    TGraphics__AddPixelStage(Graphics,4,0,1,0,3,3,0xffffffff);
    pMVar1 = (Matrix4x4 *)TGraphics__GetMatrix(Graphics,0);
    Matrix4x4__Identity(pMVar1);
    TGraphics__Draw(Graphics,*(VertexStream **)(self + 0x68),(IndexBuffer *)0x0);
    return;
  }
  return;
}

/* ======================================================================
 * RibbonEmitter__Update  (Ghidra `Update` @ 0059a690)
 * Signature: uint8_t __thiscall Update(RibbonEmitter * self)
 * Class: RibbonEmitter
 * Calls: `Vector2__operator_assign`, `Vector2__operator_div_assign__005be2c0`, `Vector2__operator_minus__005be180`, `VertexBuffer__Lock`, `VertexBuffer__Unlock`, `VertexStream__SetVertexBuffer`
 * Called by: (none)
 */
/* RibbonEmitter__Update() */

void __thiscall RibbonEmitter__Update(RibbonEmitter *self)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint64_t uVar5;
  VertexBuffer *pVVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float *pfVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float local_68;
  float local_64;
  float local_58;
  float local_54;
  uint64_t local_48;
  Vector2 local_38 [8];
  uint32_t *local_30 [2];
  
  if ((*(long *)(self + 0x68) != 0) && (1 < *(int *)(self + 0x50))) {
    VertexBuffer__Lock(*(VertexBuffer **)(self + 0x58),local_30,1,0);
    lVar13 = 0;
    iVar9 = *(int *)(self + 0x48) + -1;
    iVar7 = *(int *)(self + 0x4c) + -1;
    if (iVar7 <= iVar9) {
      if (iVar7 < 0) {
        if (iVar9 < 0) {
          lVar13 = (long)(iVar9 * 2) << 3;
        }
        else {
          lVar13 = (long)iVar9 << 3;
        }
      }
      else {
        lVar13 = (long)iVar7 * 8;
      }
    }
    iVar11 = 0;
    iVar9 = 2;
    uVar5 = *(uint64_t *)(*(long *)(self + 0x18) + lVar13);
    local_48._0_4_ = (uint32_t)uVar5;
    *local_30[0] = (uint32_t)local_48;
    local_48._4_4_ = (float)((ulong)uVar5 >> 0x20);
    local_30[0][1] = *(float *)(self + 0x20) + local_48._4_4_;
    local_30[0][2] =
         (uint)(long)(DAT_005be898 /* R:255.0f */ * *(float *)(self + 0x30)) & 0xff |
         (int)(long)(DAT_005be898 /* R:255.0f */ * *(float *)(self + 0x34)) << 0x18 |
         ((uint)(long)(DAT_005be898 /* R:255.0f */ * *(float *)(self + 0x28)) & 0xff) << 0x10 |
         ((uint)(long)(DAT_005be898 /* R:255.0f */ * *(float *)(self + 0x2c)) & 0xff) << 8;
    local_30[0][3] = (uint32_t)local_48;
    local_30[0][4] = local_48._4_4_ - *(float *)(self + 0x20);
    local_30[0][5] =
         (uint)(long)(DAT_005be898 /* R:255.0f */ * *(float *)(self + 0x30)) & 0xff |
         (int)(long)(DAT_005be898 /* R:255.0f */ * *(float *)(self + 0x34)) << 0x18 |
         ((uint)(long)(DAT_005be898 /* R:255.0f */ * *(float *)(self + 0x28)) & 0xff) << 0x10 |
         ((uint)(long)(DAT_005be898 /* R:255.0f */ * *(float *)(self + 0x2c)) & 0xff) << 8;
    iVar7 = *(int *)(self + 0x50);
    local_48 = uVar5;
    if (1 < iVar7) {
      lVar13 = 0x18;
      iVar12 = 1;
      do {
        iVar11 = iVar9;
        fVar17 = *(float *)(self + 0x28);
        iVar9 = *(int *)(self + 0x4c) + -1;
        iVar8 = *(int *)(self + 0x48) + -1;
        fVar19 = (float)iVar12 / (float)(iVar7 + -1);
        fVar20 = DAT_005be894 /* R:1.0f */ - fVar19;
        fVar18 = *(float *)(self + 0x38);
        fVar1 = *(float *)(self + 0x2c);
        fVar2 = *(float *)(self + 0x3c);
        fVar15 = *(float *)(self + 0x30);
        fVar16 = *(float *)(self + 0x40);
        fVar3 = *(float *)(self + 0x34);
        fVar4 = *(float *)(self + 0x44);
        fVar21 = fVar20 * *(float *)(self + 0x20) + fVar19 * *(float *)(self + 0x24);
        if (iVar8 < iVar9) {
          iVar9 = 0;
        }
        else if (iVar9 < 0) {
          iVar9 = iVar8;
        }
        iVar9 = iVar9 - (iVar12 + -1);
        if (iVar9 < 0) {
          iVar9 = iVar8 + iVar9;
        }
        Vector2__operator_assign((Vector2 *)&local_48,
                           (Vector2 *)(*(long *)(self + 0x18) + (long)iVar9 * 8));
        iVar9 = *(int *)(self + 0x48) + -1;
        iVar7 = *(int *)(self + 0x4c) + -1;
        if (iVar9 < iVar7) {
          iVar7 = 0;
        }
        else if (iVar7 < 0) {
          iVar7 = iVar9;
        }
        iVar7 = iVar7 - iVar12;
        if (iVar7 < 0) {
          iVar7 = iVar9 + iVar7;
        }
        Vector2__operator_assign((Vector2 *)&local_68,
                           (Vector2 *)(*(long *)(self + 0x18) + (long)iVar7 * 8));
        Vector2__operator_minus__005be180(local_38,(Vector2 *)&local_48);
        Vector2__operator_assign((Vector2 *)&local_58,local_38);
        Vector2__Perpendicular((Vector2 *)&local_58,(Vector2 *)&local_58,1);
        fVar14 = (float)Vector2__Length((Vector2 *)&local_58);
        if (0.0 < fVar14) {
          Vector2__operator_div_assign__005be2c0((Vector2 *)&local_58,fVar14);
        }
        fVar15 = DAT_005be898 /* R:255.0f */ * (fVar16 * fVar19 + fVar15 * fVar20);
        iVar12 = iVar12 + 1;
        iVar9 = iVar11 + 2;
        fVar16 = DAT_005be898 /* R:255.0f */ * (fVar4 * fVar19 + fVar3 * fVar20);
        fVar17 = DAT_005be898 /* R:255.0f */ * (fVar18 * fVar19 + fVar17 * fVar20);
        fVar18 = DAT_005be898 /* R:255.0f */ * (fVar2 * fVar19 + fVar1 * fVar20);
        *(float *)(lVar13 + (long)local_30[0]) = local_58 * fVar21 + local_68;
        fVar17 = (float)((uint)(long)fVar15 & 0xff | (int)(long)fVar16 << 0x18 |
                         ((uint)(long)fVar17 & 0xff) << 0x10 | ((uint)(long)fVar18 & 0xff) << 8);
        ((float *)(lVar13 + (long)local_30[0]))[2] = fVar17;
        *(float *)((long)local_30[0] + lVar13 + 4) = local_54 * fVar21 + local_64;
        pfVar10 = (float *)(lVar13 + 0xc + (long)local_30[0]);
        pfVar10[2] = fVar17;
        *pfVar10 = local_68;
        pfVar10[1] = local_64;
        *(float *)((long)local_30[0] + lVar13 + 0xc) = local_68 - local_58 * fVar21;
        *(float *)((long)local_30[0] + lVar13 + 0x10) = local_64 - fVar21 * local_54;
        iVar7 = *(int *)(self + 0x50);
        lVar13 = lVar13 + 0x18;
      } while (iVar12 < iVar7);
    }
    VertexBuffer__Unlock(*(VertexBuffer **)(self + 0x58));
    pVVar6 = *(VertexBuffer **)(self + 0x58);
    *(uint64_t *)(self + 0x58) = *(uint64_t *)(self + 0x60);
    *(VertexBuffer **)(self + 0x60) = pVVar6;
    VertexStream__SetVertexBuffer(*(VertexStream **)(self + 0x68),'\0',pVVar6);
    *(int *)(*(long *)(self + 0x68) + 0x14) = iVar9;
    *(int *)(*(long *)(self + 0x68) + 0x10) = iVar11;
  }
  return;
}

/* ======================================================================
 * RibbonEmitter__RibbonEmitter  (Ghidra `~RibbonEmitter` @ 0059ab60)
 * Signature: uint8_t __thiscall ~RibbonEmitter(RibbonEmitter * self)
 * Class: RibbonEmitter
 * Calls: `BaseResource__Release`, `CreateRibbonEmitterResources`, `DestroyRibbonEmitterResources`, `RibbonEmitter__RibbonEmitter__0059ac00`, `TResourceCreator__RemoveResourceCreationFunction`, `TResourceCreator__RemoveResourceDestroyFunction`, `free`
 * Called by: (none)
 */
/* RibbonEmitter__RibbonEmitter__0059ac00() */

void __thiscall RibbonEmitter__RibbonEmitter__0059ac00(RibbonEmitter *self)

{
  *(uint8_t ***)self = &PTR__RibbonEmitter_005dd330;
  free(*(void **)(self + 0x18));
  if (*(BaseResource **)(self + 0x60) != (BaseResource *)0x0) {
                    /* try { // try from 0059ab7f to 0059abdf has its CatchHandler @ 0059abe9 */
    BaseResource__Release(*(BaseResource **)(self + 0x60),0);
    *(uint64_t *)(self + 0x60) = 0;
  }
  if (*(BaseResource **)(self + 0x58) != (BaseResource *)0x0) {
    BaseResource__Release(*(BaseResource **)(self + 0x58),0);
    *(uint64_t *)(self + 0x58) = 0;
  }
  if (*(BaseResource **)(self + 0x68) != (BaseResource *)0x0) {
    BaseResource__Release(*(BaseResource **)(self + 0x68),0);
    *(uint64_t *)(self + 0x68) = 0;
  }
  TResourceCreator__RemoveResourceCreationFunction
            ((TResourceCreator *)ResourceCreator,CreateRibbonEmitterResources,self);
  TResourceCreator__RemoveResourceDestroyFunction
            ((TResourceCreator *)ResourceCreator,DestroyRibbonEmitterResources,self);
  *(uint8_t ***)self = &PTR__ParticleEmitter_005c12b0;
  return;
}

/* ======================================================================
 * RibbonEmitter__RibbonEmitter__0059ac00  (Ghidra `~RibbonEmitter` @ 0059ac00)
 * Signature: uint8_t __thiscall ~RibbonEmitter(RibbonEmitter * self)
 * Class: RibbonEmitter
 * Calls: `operator_delete`
 * Called by: `RibbonEmitter__RibbonEmitter`
 */
/* RibbonEmitter__RibbonEmitter__0059ac00() */

void __thiscall RibbonEmitter__RibbonEmitter__0059ac00(RibbonEmitter *self)

{
  RibbonEmitter__dtor(self);
  operator_delete(self);
  return;
}

/* ======================================================================
 * RibbonEmitter__RibbonEmitter__0059ac20  (Ghidra `RibbonEmitter` @ 0059ac20)
 * Signature: uint8_t __thiscall RibbonEmitter(RibbonEmitter * self, RibbonEmitterCreation * arg1)
 * Class: RibbonEmitter
 * Calls: `CreateRibbonEmitterResources`, `DestroyRibbonEmitterResources`, `TResourceCreator__AddResourceCreationFunction`, `TResourceCreator__AddResourceDestroyFunction`, `malloc`, `memset`
 * Called by: `Jill__Jill__0046e110`, `Naija__Naija__004831e0`, `Runman__Runman__004866f0`, `SMBPalette__FindAnimatedObstacles`
 */
/* RibbonEmitter__RibbonEmitter__0059ac20(RibbonEmitterCreation const*) */

void __thiscall RibbonEmitter__RibbonEmitter__0059ac20(RibbonEmitter *self,RibbonEmitterCreation *arg1)

{
  int iVar1;
  uint64_t uVar2;
  void *__s;
  size_t __size;
  
  *(uint64_t *)(self + 8) = 0;
  *(uint8_t ***)self = &PTR__RibbonEmitter_005dd330;
  uVar2 = ::cWhite;
  *(uint32_t *)(self + 0x10) = 1;
  *(uint32_t *)(self + 0x20) = 0x41200000;
  *(uint32_t *)(self + 0x24) = 0;
  *(uint32_t *)(self + 0x4c) = 0;
  *(uint32_t *)(self + 0x50) = 0;
  *(uint64_t *)(self + 0x28) = uVar2;
  *(uint64_t *)(self + 0x30) = DAT_008228c8 /* R:7.550128863455827e-39f */;
  *(uint64_t *)(self + 0x38) = ::cNullColor;
  *(uint64_t *)(self + 0x40) = DAT_008228d8 /* R:3.1986038746678274e-41f */;
  *(uint64_t *)(self + 0x20) = *(uint64_t *)arg1;
  *(uint64_t *)(self + 0x28) = *(uint64_t *)(arg1 + 8);
  *(uint64_t *)(self + 0x30) = *(uint64_t *)(arg1 + 0x10);
  *(uint64_t *)(self + 0x38) = *(uint64_t *)(arg1 + 0x18);
  *(uint64_t *)(self + 0x40) = *(uint64_t *)(arg1 + 0x20);
  iVar1 = *(int *)(arg1 + 0x28);
  *(int *)(self + 0x48) = iVar1;
  __size = (long)iVar1 << 3;
  __s = malloc(__size);
  *(void **)(self + 0x18) = __s;
  memset(__s,0,__size);
                    /* try { // try from 0059acd5 to 0059acfd has its CatchHandler @ 0059ad05 */
  CreateRibbonEmitterResources(self);
  TResourceCreator__AddResourceCreationFunction
            ((TResourceCreator *)ResourceCreator,CreateRibbonEmitterResources,self);
  TResourceCreator__AddResourceDestroyFunction
            ((TResourceCreator *)ResourceCreator,DestroyRibbonEmitterResources,self);
  return;
}

/* ======================================================================
 * RibbonEmitter__AddRibbonPoint  (Ghidra `AddRibbonPoint` @ 0059ad20)
 * Signature: uint8_t __thiscall AddRibbonPoint(RibbonEmitter * self, Vector2 * arg1)
 * Class: RibbonEmitter
 * Calls: `Vector2__operator_assign`
 * Called by: `Jill__Update`, `Naija__Update`, `Runman__Update`, `SMBPalette__Update`
 */
/* RibbonEmitter__AddRibbonPoint(Vector2 const&) */

void __thiscall RibbonEmitter__AddRibbonPoint(RibbonEmitter *self,Vector2 *arg1)

{
  int iVar1;
  int iVar2;
  
  Vector2__operator_assign((Vector2 *)(*(long *)(self + 0x18) + (long)*(int *)(self + 0x4c) * 8),arg1);
  iVar1 = *(int *)(self + 0x48);
  iVar2 = *(int *)(self + 0x50) + 1;
  if (iVar1 < *(int *)(self + 0x50) + 1) {
    iVar2 = iVar1;
  }
  *(int *)(self + 0x50) = iVar2;
  iVar2 = *(int *)(self + 0x4c) + 1;
  if (iVar2 <= iVar1 + -1) {
    if (iVar2 < 0) {
      iVar2 = iVar1 + -1;
    }
    *(int *)(self + 0x4c) = iVar2;
    return;
  }
  *(uint32_t *)(self + 0x4c) = 0;
  return;
}

/* ======================================================================
 * RibbonEmitter__GetRibbonPosition  (Ghidra `GetRibbonPosition` @ 0059ad70)
 * Signature: uint8_t __thiscall GetRibbonPosition(RibbonEmitter * self, int arg1)
 * Class: RibbonEmitter
 * Calls: (none)
 * Called by: (none)
 */
/* RibbonEmitter__GetRibbonPosition(int) */

long __thiscall RibbonEmitter__GetRibbonPosition(RibbonEmitter *self,int arg1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(self + 0x48) + -1;
  iVar1 = *(int *)(self + 0x4c) + -1;
  if (iVar2 < iVar1) {
    iVar1 = 0;
  }
  else if (iVar1 < 0) {
    iVar1 = iVar2;
  }
  iVar1 = iVar1 - arg1;
  if (iVar1 < 0) {
    iVar1 = iVar2 + iVar1;
  }
  return *(long *)(self + 0x18) + (long)iVar1 * 8;
}
