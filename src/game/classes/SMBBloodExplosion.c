/* src/game/classes/SMBBloodExplosion.c — 5 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "SMBBloodExplosion.h"

/* ======================================================================
 * SMBBloodExplosion__SMBBloodExplosion  (Ghidra `SMBBloodExplosion` @ 0048cbf0)
 * Signature: uint8_t __thiscall SMBBloodExplosion(SMBBloodExplosion * self)
 * Class: SMBBloodExplosion
 * Calls: `CriticalSection__CriticalSection`, `SMBBloodExplosionCreateResources`, `SMBBloodExplosionDestroyResources`, `TResourceCreator__AddResourceCreationFunction`, `TResourceCreator__AddResourceDestroyFunction`
 * Called by: `DefaultMeatBoy__DefaultMeatBoy__004654a0`, `SprintMeatBoy__SprintMeatBoy__004655a0`
 */
/* SMBBloodExplosion__SMBBloodExplosion() */

void __thiscall SMBBloodExplosion__SMBBloodExplosion(SMBBloodExplosion *self)

{
  *(uint64_t *)self = 0;
  *(uint64_t *)(self + 8) = 0;
  *(uint32_t *)(self + 0x658) = 0;
  *(uint32_t *)(self + 0x65c) = 0;
  *(uint32_t *)(self + 0x660) = 0x40a00000;
  CriticalSection__CriticalSection((CriticalSection *)(self + 0x668));
                    /* try { // try from 0048cc40 to 0048cc68 has its CatchHandler @ 0048cc78 */
  SMBBloodExplosionCreateResources(self);
  TResourceCreator__AddResourceCreationFunction
            ((TResourceCreator *)ResourceCreator,SMBBloodExplosionCreateResources,self);
  TResourceCreator__AddResourceDestroyFunction
            ((TResourceCreator *)ResourceCreator,SMBBloodExplosionDestroyResources,self);
  return;
}

/* ======================================================================
 * SMBBloodExplosion__SMBBloodExplosion__0048cc90  (Ghidra `~SMBBloodExplosion` @ 0048cc90)
 * Signature: uint8_t __thiscall ~SMBBloodExplosion(SMBBloodExplosion * self)
 * Class: SMBBloodExplosion
 * Calls: `BaseResource__Release`, `CriticalSection__CriticalSection__005b71d0`, `SMBBloodExplosionCreateResources`, `SMBBloodExplosionDestroyResources`, `TResourceCreator__RemoveResourceCreationFunction`, `TResourceCreator__RemoveResourceDestroyFunction`
 * Called by: `DefaultMeatBoy__DefaultMeatBoy__004651c0`, `DefaultMeatBoy__DefaultMeatBoy__00465430`, `SprintMeatBoy__SprintMeatBoy`, `SprintMeatBoy__SprintMeatBoy__004653b0`
 */
/* SMBBloodExplosion__SMBBloodExplosion__0048cc90() */

void __thiscall SMBBloodExplosion__SMBBloodExplosion__0048cc90(SMBBloodExplosion *self)

{
  if (*(BaseResource **)(self + 8) != (BaseResource *)0x0) {
                    /* try { // try from 0048cca3 to 0048ccea has its CatchHandler @ 0048ccfd */
    BaseResource__Release(*(BaseResource **)(self + 8),0);
  }
  if (*(BaseResource **)self != (BaseResource *)0x0) {
    BaseResource__Release(*(BaseResource **)self,0);
  }
  if (*(BaseResource **)(self + 0x10) != (BaseResource *)0x0) {
    BaseResource__Release(*(BaseResource **)(self + 0x10),0);
  }
  TResourceCreator__RemoveResourceCreationFunction
            ((TResourceCreator *)ResourceCreator,SMBBloodExplosionCreateResources,self);
  TResourceCreator__RemoveResourceDestroyFunction
            ((TResourceCreator *)ResourceCreator,SMBBloodExplosionDestroyResources,self);
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)(self + 0x668));
  return;
}

/* ======================================================================
 * SMBBloodExplosion__Spawn  (Ghidra `Spawn` @ 0048cd20)
 * Signature: uint8_t __thiscall Spawn(SMBBloodExplosion * self, Vector2 * arg1)
 * Class: SMBBloodExplosion
 * Calls: `AutoLockSection__AutoLockSection`, `AutoLockSection__AutoLockSection__005b59d0`, `GetRandomINT`, `Vector2__operator_assign`
 * Called by: `DefaultMeatBoy__Death`, `SprintMeatBoy__Death`
 */
/* SMBBloodExplosion__Spawn(Vector2 const&) */

void __thiscall SMBBloodExplosion__Spawn(SMBBloodExplosion *self,Vector2 *arg1)

{
  float fVar1;
  int iVar2;
  SMBBloodExplosion *pSVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  AutoLockSection aAStack_28 [16];
  
  AutoLockSection__AutoLockSection(aAStack_28,(CriticalSection *)(self + 0x668));
  if (*(int *)(SuperMeatBoy + 0x294) < 2) {
                    /* try { // try from 0048cd6a to 0048ce10 has its CatchHandler @ 0048ce23 */
    Vector2__operator_assign((Vector2 *)(self + 0x658),arg1);
    *(uint32_t *)(self + 0x660) = 0;
    iVar5 = 100;
    pSVar3 = self + 0x24;
    iVar4 = 0;
    do {
      iVar2 = GetRandomINT(0xffffff38,200);
      *(float *)(pSVar3 + -0xc) = (float)iVar2;
      iVar2 = GetRandomINT(0xffffff9c,500);
      *(uint32_t *)(pSVar3 + -4) = 1;
      *(float *)(pSVar3 + -8) = (float)iVar2;
      if (iVar4 < 10) {
        iVar2 = GetRandomINT(100,300);
        fVar1 = DAT_005c17f4 /* R:2.5f */;
        fVar6 = (float)iVar2 * DAT_005c07b0 /* R:0.009999999776482582f */;
        *(float *)pSVar3 = fVar6;
        if (fVar1 < fVar6) {
          iVar4 = iVar4 + 1;
        }
      }
      else {
        iVar2 = GetRandomINT(100,0xf9);
        *(float *)pSVar3 = (float)iVar2 * DAT_005c07b0 /* R:0.009999999776482582f */;
      }
      pSVar3 = pSVar3 + 0x10;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  AutoLockSection__AutoLockSection__005b59d0(aAStack_28);
  return;
}

/* ======================================================================
 * SMBBloodExplosion__Update  (Ghidra `Update` @ 0048ce40)
 * Signature: uint8_t __thiscall Update(SMBBloodExplosion * self)
 * Class: SMBBloodExplosion
 * Calls: `AutoLockSection__AutoLockSection`, `AutoLockSection__AutoLockSection__005b59d0`, `BloodyTiles__AddBloodyTile`, `CriticalSection__CriticalSection`, `GSuperMeatBoy__getChar`, `GetTriangleOrientation`, `MeatBoyCharactor__GetGroundSplatInstance`, `SMBPalette__DisableFlags`, `SMBPalette__EnableFlags`, `SMBPalette__ObstacleCollision` (+9 more)
 * Called by: `DefaultMeatBoy__Update`, `SprintMeatBoy__Update`
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SMBBloodExplosion__Update() */

void __thiscall SMBBloodExplosion__Update(SMBBloodExplosion *self)

{
  GSuperMeatBoy *pGVar1;
  ushort uVar2;
  uint32_t uVar3;
  int iVar4;
  GRIDBLOCK *pGVar5;
  long lVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  MeatBoyCharactor *this_00;
  uint64_t uVar11;
  SMBBloodExplosion *pSVar12;
  int iVar13;
  float fVar14;
  int local_1ec;
  uint8_t **local_1e8 [9];
  uint64_t local_1a0;
  uint32_t local_198;
  CriticalSection local_190 [40];
  uint32_t local_168;
  uint32_t local_164;
  uint32_t local_160;
  uint32_t local_15c;
  uint32_t local_158;
  uint32_t local_154;
  uint32_t local_150;
  uint32_t local_14c;
  uint64_t local_148;
  uint64_t local_140;
  uint32_t local_138;
  uint32_t local_134;
  uint32_t local_130;
  uint32_t local_12c;
  uint32_t local_120;
  uint32_t local_11c;
  uint32_t local_118;
  uint32_t local_114;
  uint32_t local_110;
  uint32_t local_10c;
  uint32_t local_108;
  uint32_t local_104;
  uint32_t local_100;
  uint32_t local_fc;
  uint32_t local_f8;
  Bounds local_e8 [4];
  uint32_t local_e4;
  uint32_t local_e0;
  uint32_t local_dc;
  Vector2 local_d8 [4];
  float local_d4;
  float local_c8;
  float fStack_c4;
  Vector2 local_b8 [16];
  Vector2 local_a8 [16];
  Vector2 local_98 [16];
  float local_88;
  float local_84;
  float local_78;
  float local_74;
  float local_68;
  float local_64;
  float local_58;
  float local_54;
  AutoLockSection local_48 [8];
  void *local_40 [2];
  
  if (((*(float *)(self + 0x660) <= _DAT_005bff44 /* R:5.0f */) && (*(int *)(SuperMeatBoy + 0x294) < 2)) &&
     (*(int *)(SuperMeatBoy + 0x294) != 10)) {
    VertexBuffer__Lock(*(VertexBuffer **)(self + 8),local_40,1,0);
    local_1a0 = 0;
    local_198 = 1;
    local_1e8[0] = &PTR__SceneObject2D_005dd3d0;
    CriticalSection__CriticalSection(local_190);
    local_168 = 0;
    local_164 = 0;
    local_160 = 0x3f800000;
    local_15c = 0;
    local_158 = 0;
    local_154 = 0;
    local_150 = 0;
    local_14c = 1;
    local_148 = vDefaultStart2D;
    local_140 = vDefaultStart2D;
    local_138 = 0;
    local_134 = 0;
    local_130 = 0;
    local_12c = 0;
    local_120 = 0;
    local_11c = 0;
    local_118 = 0x3f800000;
    local_114 = 0x3f800000;
    local_110 = 0;
    local_10c = 0;
    local_108 = 0;
    local_104 = 0;
    local_100 = 0;
    local_fc = 0;
    local_f8 = 0;
    local_e4 = 0x3f800000;
    local_e0 = 0;
    local_dc = 0;
    local_e8[0] = (Bounds)0x11;
                    /* try { // try from 0048d013 to 0048d08e has its CatchHandler @ 0048d614 */
    SMBPalette__EnableFlags(GSuperMeatBoy__pLevelPalette,4);
    SMBPalette__DisableFlags(GSuperMeatBoy__pLevelPalette,0x3b);
    pSVar12 = self + 0x20;
    iVar13 = 0;
    local_1ec = 0;
LAB_0048d060:
    do {
      if (*(int *)pSVar12 == 1) {
        Vector2__operator_mul__005be200(local_d8,*(float *)(self + 0x660));
        local_d4 = *(float *)(self + 0x660) * *(float *)(self + 0x660) * _DAT_005c17f8 /* R:-550.0f */ + local_d4;
                    /* try { // try from 0048d0d2 to 0048d0d6 has its CatchHandler @ 0048d644 */
        Vector2__operator_plus__005be140((Vector2 *)&local_c8,(Vector2 *)(self + 0x658));
                    /* try { // try from 0048d0ec to 0048d13a has its CatchHandler @ 0048d642 */
        pGVar5 = (GRIDBLOCK *)
                 TileLevel__GetGridBlockFromPos(*(TileLevel **)(SuperMeatBoy + 0x40),&local_c8,0);
        local_14c = 1;
        Vector2__operator_assign((Vector2 *)&local_148,(Vector2 *)&local_c8);
        fVar14 = *(float *)(pSVar12 + 4);
        if (*pGVar5 == (GRIDBLOCK)0x0) {
          Vector2__operator_assign((Vector2 *)&local_e0,(Vector2 *)&local_c8);
          if (DAT_005c17f4 /* R:2.5f */ < *(float *)(pSVar12 + 4)) {
                    /* try { // try from 0048d5fc to 0048d600 has its CatchHandler @ 0048d642 */
            iVar4 = SMBPalette__ObstacleCollision
                              (GSuperMeatBoy__pLevelPalette,(SceneObject2D *)local_1e8,local_e8);
            if (iVar4 != 0) {
              *(int *)pSVar12 = 0;
              goto LAB_0048d050;
            }
          }
          lVar6 = (long)local_1ec;
          iVar13 = iVar13 + 1;
          *(int *)pSVar12 = 1;
          pSVar12 = pSVar12 + 0x10;
          *(float *)((long)local_40[0] + lVar6 * 8) = local_c8 - fVar14;
          *(float *)((long)local_40[0] + lVar6 * 8 + 4) = fStack_c4 - fVar14;
          *(float *)((long)local_40[0] + (lVar6 + 1) * 8) = local_c8 - fVar14;
          *(float *)((long)local_40[0] + (lVar6 + 1) * 8 + 4) = fVar14 + fStack_c4;
          *(float *)((long)local_40[0] + (lVar6 + 2) * 8) = fVar14 + local_c8;
          *(float *)((long)local_40[0] + (lVar6 + 2) * 8 + 4) = fVar14 + fStack_c4;
          *(float *)((long)local_40[0] + (lVar6 + 3) * 8) = fVar14 + local_c8;
          *(float *)((long)local_40[0] + (lVar6 + 3) * 8 + 4) = fVar14 + fStack_c4;
          local_1ec = local_1ec + 6;
          *(float *)((long)local_40[0] + (lVar6 + 4) * 8) = fVar14 + local_c8;
          *(float *)((long)local_40[0] + (lVar6 + 4) * 8 + 4) = fStack_c4 - fVar14;
          *(float *)((long)local_40[0] + (lVar6 + 5) * 8) = local_c8 - fVar14;
          *(float *)((long)local_40[0] + (lVar6 + 5) * 8 + 4) = fStack_c4 - fVar14;
          if (iVar13 == 100) break;
          goto LAB_0048d060;
        }
        *(int *)pSVar12 = 0;
        fVar14 = *(float *)(self + 0x660) - fOneFrameTimeStep;
                    /* try { // try from 0048d3a8 to 0048d3fc has its CatchHandler @ 0048d63d */
        Vector2__operator_mul__005be200(local_a8,fVar14);
        Vector2__operator_assign(local_d8,local_a8);
        local_d4 = fVar14 * fVar14 * _DAT_005c17f8 /* R:-550.0f */ + local_d4;
        Vector2__operator_plus__005be140(local_98,(Vector2 *)(self + 0x658));
                    /* try { // try from 0048d418 to 0048d5db has its CatchHandler @ 0048d63b */
        TileLevel__SnapPositionToCenter(*(TileLevel **)(SuperMeatBoy + 0x40),local_b8,DAT_005be894 /* R:1.0f */);
        uVar3 = GetTriangleOrientation(pGVar5,local_b8);
        local_88 = local_c8 - TileLevel__fLevelGridWH;
        local_84 = fStack_c4;
        piVar7 = (int *)TileLevel__GetGridBlockFromPos
                                  (*(TileLevel **)(SuperMeatBoy + 0x40),&local_88,0);
        local_78 = TileLevel__fLevelGridWH + local_c8;
        local_74 = fStack_c4;
        piVar8 = (int *)TileLevel__GetGridBlockFromPos
                                  (*(TileLevel **)(SuperMeatBoy + 0x40),&local_78,0);
        local_64 = TileLevel__fLevelGridWH + fStack_c4;
        local_68 = local_c8;
        TileLevel__GetGridBlockFromPos(*(TileLevel **)(SuperMeatBoy + 0x40),&local_68,0);
        local_54 = fStack_c4 - TileLevel__fLevelGridWH;
        local_58 = local_c8;
        piVar9 = (int *)TileLevel__GetGridBlockFromPos
                                  (*(TileLevel **)(SuperMeatBoy + 0x40),&local_58,0);
        piVar10 = (int *)TileLevel__GetGridBlockFromPos
                                   (*(TileLevel **)(SuperMeatBoy + 0x40),local_98,0);
        pGVar1 = SuperMeatBoy;
        iVar4 = *piVar10;
        uVar2 = 8;
        if (iVar4 != *piVar7) {
          uVar2 = 4;
          if (iVar4 != *piVar8) {
            uVar2 = (iVar4 != *piVar9) + 1;
          }
        }
        if ((uVar2 & *(ushort *)(pGVar5 + 2) >> 6) != 0) {
          this_00 = (MeatBoyCharactor *)GSuperMeatBoy__getChar(SuperMeatBoy,1);
          uVar11 = MeatBoyCharactor__GetGroundSplatInstance(this_00);
          BloodyTiles__AddBloodyTile
                    ((BloodyTiles *)(pGVar1 + 0x50),pGVar5,uVar2,local_b8,uVar3,uVar11);
        }
      }
LAB_0048d050:
      iVar13 = iVar13 + 1;
      pSVar12 = pSVar12 + 0x10;
    } while (iVar13 != 100);
                    /* try { // try from 0048d2d0 to 0048d305 has its CatchHandler @ 0048d614 */
    VertexBuffer__Unlock(*(VertexBuffer **)(self + 8));
    *(float *)(self + 0x660) = *(float *)(self + 0x660) + fOneFrameTimeStep;
    AutoLockSection__AutoLockSection(local_48,(CriticalSection *)(self + 0x668));
    uVar11 = *(uint64_t *)self;
    *(uint64_t *)self = *(uint64_t *)(self + 8);
    *(uint64_t *)(self + 8) = uVar11;
    *(int *)(*(long *)(self + 0x10) + 0x10) = local_1ec / 3;
    *(int *)(*(long *)(self + 0x10) + 0x14) = local_1ec;
                    /* try { // try from 0048d34b to 0048d34f has its CatchHandler @ 0048d629 */
    VertexStream__SetVertexBuffer(*(VertexStream **)(self + 0x10),'\0',*(VertexBuffer **)self);
                    /* try { // try from 0048d358 to 0048d35c has its CatchHandler @ 0048d614 */
    AutoLockSection__AutoLockSection__005b59d0(local_48);
    SceneObject2D__SceneObject2D__0059b220((SceneObject2D *)local_1e8);
  }
  return;
}

/* ======================================================================
 * SMBBloodExplosion__Render  (Ghidra `Render` @ 0048d650)
 * Signature: uint8_t __thiscall Render(SMBBloodExplosion * self)
 * Class: SMBBloodExplosion
 * Calls: `AutoLockSection__AutoLockSection`, `AutoLockSection__AutoLockSection__005b59d0`, `TGraphics__AddPixelStage`, `TGraphics__Draw`, `TGraphics__GetMatrix`, `TGraphics__ResetPixelStages`, `TGraphics__ResetTexCoordGen`, `TGraphics__SetPixelColorConstant`, `TGraphics__SetRenderState`
 * Called by: `DefaultMeatBoy__Render`, `SprintMeatBoy__Render`
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SMBBloodExplosion__Render() */

void __thiscall SMBBloodExplosion__Render(SMBBloodExplosion *self)

{
  Matrix4x4 *pMVar1;
  uint32_t local_38;
  uint32_t local_34;
  uint32_t local_30;
  uint32_t local_2c;
  AutoLockSection local_28 [24];
  
  if (((*(float *)(self + 0x660) <= _DAT_005bff44 /* R:5.0f */) && (*(int *)(SuperMeatBoy + 0x294) < 2)) &&
     (*(int *)(SuperMeatBoy + 0x294) != 10)) {
    AutoLockSection__AutoLockSection(local_28,(CriticalSection *)(self + 0x668));
                    /* try { // try from 0048d6a8 to 0048d750 has its CatchHandler @ 0048d760 */
    TGraphics__ResetPixelStages(Graphics);
    TGraphics__ResetTexCoordGen(Graphics);
    TGraphics__SetRenderState(Graphics,'\a',0);
    pMVar1 = (Matrix4x4 *)TGraphics__GetMatrix(Graphics,0);
    Matrix4x4__Identity(pMVar1);
    TGraphics__AddPixelStage(Graphics,1,0,0,0,0,1,0xffffffff);
    local_38 = 0x3ec2c2c3;
    local_34 = 0x3d989899;
    local_30 = 0x3d989899;
    local_2c = 0x3f800000;
    TGraphics__SetPixelColorConstant(Graphics,0,&local_38);
    TGraphics__Draw(Graphics,*(VertexStream **)(self + 0x10),(IndexBuffer *)0x0);
    AutoLockSection__AutoLockSection__005b59d0(local_28);
    return;
  }
  return;
}
