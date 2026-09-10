/* src/engine/core_01.c — 78 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "core_01.h"

/* ======================================================================
 * DestroyCommanderVideoResources  (Ghidra `DestroyCommanderVideoResources` @ 00464140)
 * Signature: uint8_t DestroyCommanderVideoResources(void)
 * Calls: `BaseResource__Release`
 * Called by: `CommanderVideo__CommanderVideo`, `CommanderVideo__CommanderVideo__00464c70`
 */
void DestroyCommanderVideoResources(long arg1)

{
  if (*(BaseResource **)(arg1 + 0xab8) != (BaseResource *)0x0) {
    BaseResource__Release(*(BaseResource **)(arg1 + 0xab8),0);
    return;
  }
  return;
}

/* ======================================================================
 * CreateCommanderVideoResources  (Ghidra `CreateCommanderVideoResources` @ 00464160)
 * Signature: uint8_t CreateCommanderVideoResources(void)
 * Calls: `BaseResource__Release`, `VertexStream__VertexStream__005a6980`
 * Called by: `CommanderVideo__CommanderVideo`, `CommanderVideo__CommanderVideo__00464c70`
 */
void CreateCommanderVideoResources(long arg1)

{
  VertexStream *pVVar1;
  uint64_t local_48;
  uint16_t local_40;
  uint32_t local_3c;
  uint64_t local_38;
  uint32_t local_30;
  uint32_t local_2c;
  uint32_t local_28;
  BaseResource *local_20 [2];
  
  local_3c = 5;
  local_38 = 0;
  local_30 = 0;
  local_2c = 1;
  local_28 = 0;
  local_40 = 0xc;
  local_48 = 0x960;
  local_20[0] = (BaseResource *)VertexBuffer__Create((tagVertexBufferCreation *)&local_48);
  pVVar1 = BaseResource__operator_new(0xa8,1);
                    /* try { // try from 004641eb to 004641ef has its CatchHandler @ 0046420a */
  VertexStream__VertexStream__005a6980(pVVar1,1,200,200,2,local_20,CGR__pPos2ColorDecl);
  *(VertexStream **)(arg1 + 0xab8) = pVVar1;
  BaseResource__Release(local_20[0],0);
  return;
}

/* ======================================================================
 * DestroyTileLightMapResources  (Ghidra `DestroyTileLightMapResources` @ 0046e260)
 * Signature: uint8_t __stdcall DestroyTileLightMapResources(void * arg1)
 * Calls: `BaseResource__Release`
 * Called by: `TileLevelLightMap__TileLevelLightMap`, `TileLevelLightMap__TileLevelLightMap__0046f6e0`
 */
/* DestroyTileLightMapResources(void*) */

void DestroyTileLightMapResources(void *arg1)

{
  if (*(BaseResource **)((long)arg1 + 0x30) != (BaseResource *)0x0) {
    BaseResource__Release(*(BaseResource **)((long)arg1 + 0x30),0);
    *(uint64_t *)((long)arg1 + 0x30) = 0;
  }
  if (*(BaseResource **)((long)arg1 + 0x70) != (BaseResource *)0x0) {
    BaseResource__Release(*(BaseResource **)((long)arg1 + 0x70),0);
    *(uint64_t *)((long)arg1 + 0x70) = 0;
  }
  if (*(BaseResource **)((long)arg1 + 0xb0) != (BaseResource *)0x0) {
    BaseResource__Release(*(BaseResource **)((long)arg1 + 0xb0),0);
    *(uint64_t *)((long)arg1 + 0xb0) = 0;
  }
  if (*(BaseResource **)((long)arg1 + 0xf0) != (BaseResource *)0x0) {
    BaseResource__Release(*(BaseResource **)((long)arg1 + 0xf0),0);
    *(uint64_t *)((long)arg1 + 0xf0) = 0;
  }
  if (*(BaseResource **)((long)arg1 + 0x130) != (BaseResource *)0x0) {
    BaseResource__Release(*(BaseResource **)((long)arg1 + 0x130),0);
    *(uint64_t *)((long)arg1 + 0x130) = 0;
  }
  if (*(BaseResource **)((long)arg1 + 0x170) != (BaseResource *)0x0) {
    BaseResource__Release(*(BaseResource **)((long)arg1 + 0x170),0);
    *(uint64_t *)((long)arg1 + 0x170) = 0;
  }
  if (*(BaseResource **)((long)arg1 + 0x1b0) != (BaseResource *)0x0) {
    BaseResource__Release(*(BaseResource **)((long)arg1 + 0x1b0),0);
    *(uint64_t *)((long)arg1 + 0x1b0) = 0;
  }
  if (*(BaseResource **)((long)arg1 + 0x1f0) != (BaseResource *)0x0) {
    BaseResource__Release(*(BaseResource **)((long)arg1 + 0x1f0),0);
    *(uint64_t *)((long)arg1 + 0x1f0) = 0;
  }
  if (*(BaseResource **)((long)arg1 + 0x230) != (BaseResource *)0x0) {
    BaseResource__Release(*(BaseResource **)((long)arg1 + 0x230),0);
    *(uint64_t *)((long)arg1 + 0x230) = 0;
  }
  if (*(BaseResource **)((long)arg1 + 0x270) != (BaseResource *)0x0) {
    BaseResource__Release(*(BaseResource **)((long)arg1 + 0x270),0);
    *(uint64_t *)((long)arg1 + 0x270) = 0;
  }
  if (*(BaseResource **)((long)arg1 + 0x280) != (BaseResource *)0x0) {
    BaseResource__Release(*(BaseResource **)((long)arg1 + 0x280),0);
  }
  if (*(BaseResource **)((long)arg1 + 0x298) != (BaseResource *)0x0) {
    BaseResource__Release(*(BaseResource **)((long)arg1 + 0x298),0);
  }
  if (*(BaseResource **)((long)arg1 + 0x2a0) != (BaseResource *)0x0) {
    BaseResource__Release(*(BaseResource **)((long)arg1 + 0x2a0),0);
    return;
  }
  return;
}

/* ======================================================================
 * CreateTileLightMapResources  (Ghidra `CreateTileLightMapResources` @ 0046e5b0)
 * Signature: uint8_t __stdcall CreateTileLightMapResources(void * arg1)
 * Calls: `BaseResource__Release`, `GetRandomINT`, `Vector2__operator_mul__005be200`, `VertexBuffer__Lock`, `VertexBuffer__Unlock`, `VertexStream__VertexStream__005a6980`
 * Called by: `TileLevelLightMap__TileLevelLightMap`, `TileLevelLightMap__TileLevelLightMap__0046f6e0`
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CreateTileLightMapResources(void*) */

void CreateTileLightMapResources(void *arg1)

{
  float fVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  VertexStream *pVVar6;
  uint64_t uVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  Matrix4x4 local_138 [64];
  uint64_t local_f8;
  uint64_t local_f0;
  uint32_t local_e8;
  uint local_e4;
  uint local_e0;
  uint16_t local_dc;
  uint32_t local_d8;
  uint32_t local_d4;
  uint8_t local_d0;
  uint32_t local_cc;
  uint32_t local_c8;
  uint64_t local_b8;
  uint16_t local_b0;
  uint32_t local_ac;
  uint64_t local_a8;
  uint32_t local_a0;
  uint32_t local_9c;
  uint32_t local_98;
  uint64_t local_88;
  uint16_t local_80;
  uint32_t local_7c;
  uint64_t local_78;
  uint32_t local_70;
  uint32_t local_6c;
  uint32_t local_68;
  uint32_t *local_58 [2];
  uint32_t local_48;
  uint32_t local_44;
  uint32_t local_38;
  uint32_t local_34;
  VertexBuffer *local_30;
  BaseResource *local_28;
  float local_1c [3];
  
  lVar8 = 0xc;
  local_1c[0] = 0.16110732;
  local_ac = 5;
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 1;
  local_98 = 0;
  local_b0 = 0xc;
  local_b8 = 0x1f8;
  local_30 = (VertexBuffer *)VertexBuffer__Create((tagVertexBufferCreation *)&local_b8);
  VertexBuffer__Lock(local_30,local_58,1,0);
  fVar9 = DAT_005be898 /* R:255.0f */;
  *local_58[0] = 0;
  local_58[0][1] = 0;
  local_58[0][2] =
       (uint)(long)(fVar9 * (float)DAT_00818ef8 /* R:5.268882225861312e-43f */) & 0xff |
       (int)(long)(DAT_005be898 /* R:255.0f */ * DAT_00818ef8 /* R:5.268882225861312e-43f */._4_4_) << 0x18 |
       ((uint)(long)(DAT_005be898 /* R:255.0f */ * (float)cWhite) & 0xff) << 0x10 |
       ((uint)(long)(DAT_005be898 /* R:255.0f */ * cWhite._4_4_) & 0xff) << 8;
  Matrix4x4__Transformation2DRot(local_138,(Vector2 *)0x0,local_1c,(Vector2 *)0x0);
  local_48 = 0;
  local_44 = 0x3f800000;
  do {
    Matrix4x4__TransformVector2((Vector2 *)&local_48,(Vector2 *)&local_48,local_138,1);
    iVar4 = GetRandomINT(0xfffffff6,10);
    Vector2__operator_mul__005be200((Vector2 *)&local_38,DAT_005be894 /* R:1.0f */ - (float)iVar4 * _DAT_005c01c8 /* R:0.019999999552965164f */);
    fVar9 = DAT_005be898 /* R:255.0f */;
    *(uint32_t *)(lVar8 + (long)local_58[0]) = local_38;
    ((uint32_t *)(lVar8 + (long)local_58[0]))[1] = local_34;
    *(uint *)((long)local_58[0] + lVar8 + 8) =
         (uint)(long)(fVar9 * (float)cNullColor._8_4_) & 0xff |
         (int)(long)(DAT_005be898 /* R:255.0f */ * (float)cNullColor._12_4_) << 0x18 |
         ((uint)(long)(DAT_005be898 /* R:255.0f */ * (float)cNullColor._0_4_) & 0xff) << 0x10 |
         ((uint)(long)(DAT_005be898 /* R:255.0f */ * (float)cNullColor._4_4_) & 0xff) << 8;
    lVar8 = lVar8 + 0xc;
  } while (lVar8 != 0x1ec);
  VertexBuffer__Unlock(local_30);
  pVVar6 = BaseResource__operator_new(0xa8,1);
                    /* try { // try from 0046e862 to 0046e866 has its CatchHandler @ 0046f33e */
  VertexStream__VertexStream__005a6980(pVVar6,1,0x28,0x2a,1,&local_30,CGR__pPos2ColorDecl);
  *(VertexStream **)((long)arg1 + 0x298) = pVVar6;
  BaseResource__Release((BaseResource *)local_30,0);
  local_b0 = 0xc;
  local_b8 = 0x30;
  local_ac = 5;
  local_30 = (VertexBuffer *)VertexBuffer__Create((tagVertexBufferCreation *)&local_b8);
  VertexBuffer__Lock(local_30,local_58,1,0);
  fVar9 = DAT_005be898 /* R:255.0f */;
  *local_58[0] = 0;
  local_58[0][1] = 0;
  fVar9 = fVar9 * (float)DAT_00818ef8 /* R:5.268882225861312e-43f */;
  local_58[0][4] = 0xc0000000;
  local_58[0][6] = 0xbf800000;
  local_58[0][7] = 0xc0000000;
  fVar10 = DAT_005be898 /* R:255.0f */ * DAT_00818ef8 /* R:5.268882225861312e-43f */._4_4_;
  local_58[0][3] = 0x3f800000;
  fVar1 = DAT_005be898 /* R:255.0f */;
  local_58[0][2] =
       (uint)(long)fVar9 & 0xff | (int)(long)fVar10 << 0x18 |
       ((uint)(long)(DAT_005be898 /* R:255.0f */ * (float)cWhite) & 0xff) << 0x10 |
       ((uint)(long)(DAT_005be898 /* R:255.0f */ * cWhite._4_4_) & 0xff) << 8;
  uVar5 = (uint)(long)(fVar1 * (float)cNullColor._8_4_) & 0xff |
          (int)(long)(DAT_005be898 /* R:255.0f */ * (float)cNullColor._12_4_) << 0x18 |
          ((uint)(long)(DAT_005be898 /* R:255.0f */ * (float)cNullColor._0_4_) & 0xff) << 0x10 |
          ((uint)(long)(DAT_005be898 /* R:255.0f */ * (float)cNullColor._4_4_) & 0xff) << 8;
  local_58[0][5] = uVar5;
  local_58[0][8] = uVar5;
  VertexBuffer__Unlock(local_30);
  pVVar6 = BaseResource__operator_new(0xa8,1);
                    /* try { // try from 0046ea3b to 0046ea3f has its CatchHandler @ 0046f326 */
  VertexStream__VertexStream__005a6980(pVVar6,1,1,3,0,&local_30,CGR__pPos2ColorDecl);
  *(VertexStream **)((long)arg1 + 0x2a0) = pVVar6;
  BaseResource__Release((BaseResource *)local_30,0);
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_dc = 0;
  local_d0 = 1;
  local_cc = 0;
  local_c8 = 0;
  if (SystemCaps._4_4_ == 1) {
    uVar2 = *(ushort *)(Window + 8);
    uVar3 = *(ushort *)(Window + 10);
  }
  else {
    uVar2 = *(ushort *)(Window + 8) >> 1;
    uVar3 = *(ushort *)(Window + 10) >> 1;
  }
  local_e0 = (uint)uVar3;
  local_e4 = (uint)uVar2;
  local_d4 = 0x10;
  local_d8 = 1;
  uVar7 = Texture__Create((tagTextureCreation *)&local_f8);
  *(uint64_t *)((long)arg1 + 0x280) = uVar7;
  if ((*(int *)((long)arg1 + 0x28) != 0) && (*(long *)((long)arg1 + 0x30) == 0)) {
    local_7c = 5;
    local_78 = 0;
    local_70 = 0;
    local_6c = 1;
    local_68 = 0;
    local_80 = 0xc;
    local_88 = 0x1c200;
    local_28 = (BaseResource *)VertexBuffer__Create((tagVertexBufferCreation *)&local_88);
    pVVar6 = BaseResource__operator_new(0xa8,1);
                    /* try { // try from 0046f309 to 0046f30d has its CatchHandler @ 0046f356 */
    VertexStream__VertexStream__005a6980(pVVar6,1,0,0,0,&local_28,CGR__pPos2ColorDecl);
    *(VertexStream **)((long)arg1 + 0x30) = pVVar6;
    BaseResource__Release(local_28,0);
  }
  if ((*(int *)((long)arg1 + 0x68) != 0) && (*(long *)((long)arg1 + 0x70) == 0)) {
    local_7c = 5;
    local_78 = 0;
    local_70 = 0;
    local_6c = 1;
    local_68 = 0;
    local_80 = 0xc;
    local_88 = 0x1c200;
    local_28 = (BaseResource *)VertexBuffer__Create((tagVertexBufferCreation *)&local_88);
    pVVar6 = BaseResource__operator_new(0xa8,1);
                    /* try { // try from 0046f255 to 0046f259 has its CatchHandler @ 0046f356 */
    VertexStream__VertexStream__005a6980(pVVar6,1,0,0,0,&local_28,CGR__pPos2ColorDecl);
    *(VertexStream **)((long)arg1 + 0x70) = pVVar6;
    BaseResource__Release(local_28,0);
  }
  if ((*(int *)((long)arg1 + 0xa8) != 0) && (*(long *)((long)arg1 + 0xb0) == 0)) {
    local_7c = 5;
    local_78 = 0;
    local_70 = 0;
    local_6c = 1;
    local_68 = 0;
    local_80 = 0xc;
    local_88 = 0x1c200;
    local_28 = (BaseResource *)VertexBuffer__Create((tagVertexBufferCreation *)&local_88);
    pVVar6 = BaseResource__operator_new(0xa8,1);
                    /* try { // try from 0046f19e to 0046f1a2 has its CatchHandler @ 0046f356 */
    VertexStream__VertexStream__005a6980(pVVar6,1,0,0,0,&local_28,CGR__pPos2ColorDecl);
    *(VertexStream **)((long)arg1 + 0xb0) = pVVar6;
    BaseResource__Release(local_28,0);
  }
  if ((*(int *)((long)arg1 + 0xe8) != 0) && (*(long *)((long)arg1 + 0xf0) == 0)) {
    local_7c = 5;
    local_78 = 0;
    local_70 = 0;
    local_6c = 1;
    local_68 = 0;
    local_80 = 0xc;
    local_88 = 0x1c200;
    local_28 = (BaseResource *)VertexBuffer__Create((tagVertexBufferCreation *)&local_88);
    pVVar6 = BaseResource__operator_new(0xa8,1);
                    /* try { // try from 0046f0e7 to 0046f0eb has its CatchHandler @ 0046f356 */
    VertexStream__VertexStream__005a6980(pVVar6,1,0,0,0,&local_28,CGR__pPos2ColorDecl);
    *(VertexStream **)((long)arg1 + 0xf0) = pVVar6;
    BaseResource__Release(local_28,0);
  }
  if ((*(int *)((long)arg1 + 0x128) != 0) && (*(long *)((long)arg1 + 0x130) == 0)) {
    local_7c = 5;
    local_78 = 0;
    local_70 = 0;
    local_6c = 1;
    local_68 = 0;
    local_80 = 0xc;
    local_88 = 0x1c200;
    local_28 = (BaseResource *)VertexBuffer__Create((tagVertexBufferCreation *)&local_88);
    pVVar6 = BaseResource__operator_new(0xa8,1);
                    /* try { // try from 0046f030 to 0046f034 has its CatchHandler @ 0046f356 */
    VertexStream__VertexStream__005a6980(pVVar6,1,0,0,0,&local_28,CGR__pPos2ColorDecl);
    *(VertexStream **)((long)arg1 + 0x130) = pVVar6;
    BaseResource__Release(local_28,0);
  }
  if ((*(int *)((long)arg1 + 0x168) != 0) && (*(long *)((long)arg1 + 0x170) == 0)) {
    local_7c = 5;
    local_78 = 0;
    local_70 = 0;
    local_6c = 1;
    local_68 = 0;
    local_80 = 0xc;
    local_88 = 0x1c200;
    local_28 = (BaseResource *)VertexBuffer__Create((tagVertexBufferCreation *)&local_88);
    pVVar6 = BaseResource__operator_new(0xa8,1);
                    /* try { // try from 0046ef79 to 0046ef7d has its CatchHandler @ 0046f356 */
    VertexStream__VertexStream__005a6980(pVVar6,1,0,0,0,&local_28,CGR__pPos2ColorDecl);
    *(VertexStream **)((long)arg1 + 0x170) = pVVar6;
    BaseResource__Release(local_28,0);
  }
  if ((*(int *)((long)arg1 + 0x1a8) != 0) && (*(long *)((long)arg1 + 0x1b0) == 0)) {
    local_7c = 5;
    local_78 = 0;
    local_70 = 0;
    local_6c = 1;
    local_68 = 0;
    local_80 = 0xc;
    local_88 = 0x1c200;
    local_28 = (BaseResource *)VertexBuffer__Create((tagVertexBufferCreation *)&local_88);
    pVVar6 = BaseResource__operator_new(0xa8,1);
                    /* try { // try from 0046eec2 to 0046eec6 has its CatchHandler @ 0046f356 */
    VertexStream__VertexStream__005a6980(pVVar6,1,0,0,0,&local_28,CGR__pPos2ColorDecl);
    *(VertexStream **)((long)arg1 + 0x1b0) = pVVar6;
    BaseResource__Release(local_28,0);
  }
  if ((*(int *)((long)arg1 + 0x1e8) != 0) && (*(long *)((long)arg1 + 0x1f0) == 0)) {
    local_7c = 5;
    local_78 = 0;
    local_70 = 0;
    local_6c = 1;
    local_68 = 0;
    local_80 = 0xc;
    local_88 = 0x1c200;
    local_28 = (BaseResource *)VertexBuffer__Create((tagVertexBufferCreation *)&local_88);
    pVVar6 = BaseResource__operator_new(0xa8,1);
                    /* try { // try from 0046ee0b to 0046ee0f has its CatchHandler @ 0046f356 */
    VertexStream__VertexStream__005a6980(pVVar6,1,0,0,0,&local_28,CGR__pPos2ColorDecl);
    *(VertexStream **)((long)arg1 + 0x1f0) = pVVar6;
    BaseResource__Release(local_28,0);
  }
  if ((*(int *)((long)arg1 + 0x228) != 0) && (*(long *)((long)arg1 + 0x230) == 0)) {
    local_7c = 5;
    local_78 = 0;
    local_70 = 0;
    local_6c = 1;
    local_68 = 0;
    local_80 = 0xc;
    local_88 = 0x1c200;
    local_28 = (BaseResource *)VertexBuffer__Create((tagVertexBufferCreation *)&local_88);
    pVVar6 = BaseResource__operator_new(0xa8,1);
                    /* try { // try from 0046ed54 to 0046ed58 has its CatchHandler @ 0046f356 */
    VertexStream__VertexStream__005a6980(pVVar6,1,0,0,0,&local_28,CGR__pPos2ColorDecl);
    *(VertexStream **)((long)arg1 + 0x230) = pVVar6;
    BaseResource__Release(local_28,0);
  }
  if ((*(int *)((long)arg1 + 0x268) != 0) && (*(long *)((long)arg1 + 0x270) == 0)) {
    local_7c = 5;
    local_78 = 0;
    local_70 = 0;
    local_6c = 1;
    local_68 = 0;
    local_80 = 0xc;
    local_88 = 0x1c200;
    local_28 = (BaseResource *)VertexBuffer__Create((tagVertexBufferCreation *)&local_88);
    pVVar6 = BaseResource__operator_new(0xa8,1);
                    /* try { // try from 0046ec9d to 0046eca1 has its CatchHandler @ 0046f356 */
    VertexStream__VertexStream__005a6980(pVVar6,1,0,0,0,&local_28,CGR__pPos2ColorDecl);
    *(VertexStream **)((long)arg1 + 0x270) = pVVar6;
    BaseResource__Release(local_28,0);
  }
  return;
}

/* ======================================================================
 * DeleteSelected_Selection  (Ghidra `DeleteSelected_Selection` @ 0049eab0)
 * Signature: uint8_t __stdcall DeleteSelected_Selection(GRIDBLOCK * arg1, int arg2, int arg3)
 * Calls: `TileLevel__PlaceTile`
 * Called by: `DeleteSelected`
 */
/* DeleteSelected_Selection(GRIDBLOCK&, int, int) */

void DeleteSelected_Selection(GRIDBLOCK *arg1,int arg2,int arg3)

{
  uint32_t local_18 [6];
  
  local_18[0] = 0;
  TileLevel__PlaceTile
            (*(TileLevel **)(SuperMeatBoy + 0x40),arg2,arg3,local_18,
             *(uint32_t *)(SuperMeatBoyEditor + 0xd0));
  return;
}

/* ======================================================================
 * DeleteCameraItem  (Ghidra `DeleteCameraItem` @ 0049ec60)
 * Signature: uint8_t __stdcall DeleteCameraItem(tagButtonProps * arg1, void * arg2)
 * Calls: `SMBCamera__RemoveWayPoint`
 * Called by: `SMBEditor__SetToCameraMode`
 */
/* DeleteCameraItem(tagButtonProps const*, void*) */

void DeleteCameraItem(tagButtonProps *arg1,void *arg2)

{
  SMBCameraWayPoint *pSVar1;
  
  if (*(int *)arg1 == 1) {
    pSVar1 = *(SMBCameraWayPoint **)(SuperMeatBoyEditor + 0x108);
    if ((pSVar1 != (SMBCameraWayPoint *)0x0) &&
       (*(SMBCameraWayPoint **)(*(SMBCamera **)(SuperMeatBoy + 0x38) + 0x1180) != pSVar1)) {
      SMBCamera__RemoveWayPoint(*(SMBCamera **)(SuperMeatBoy + 0x38),pSVar1);
      return;
    }
  }
  return;
}

/* ======================================================================
 * DeleteSelectedLight  (Ghidra `DeleteSelectedLight` @ 0049f040)
 * Signature: uint8_t __stdcall DeleteSelectedLight(tagButtonProps * arg1, void * arg2)
 * Calls: `Camera__ScreenToWorld`, `TileLevelLightMap__CreateLight`, `TileLevelLightMap__DestroyLight`
 * Called by: `SMBEditor__SetToLightingMode`
 */
/* DeleteSelectedLight(tagButtonProps const*, void*) */

void DeleteSelectedLight(tagButtonProps *arg1,void *arg2)

{
  uint64_t uVar1;
  uint32_t local_58;
  uint32_t local_54;
  uint32_t local_50;
  uint32_t local_4c;
  uint32_t local_48;
  uint32_t local_44;
  uint32_t local_40;
  uint32_t local_3c;
  uint32_t local_38;
  uint32_t local_34;
  uint32_t local_30;
  uint32_t local_28;
  uint32_t local_24;
  uint32_t local_20;
  uint32_t local_1c;
  uint32_t local_18;
  uint32_t local_14;
  
  if (*(int *)arg1 != 1) {
    return;
  }
  TileLevelLightMap__DestroyLight
            (*(TileLevelLightMap **)(SuperMeatBoy + 0x390),(Light **)&pSelectedLight);
  local_14 = *(uint32_t *)(Mouse + 0x10);
  local_1c = 0;
  local_18 = *(uint32_t *)(Mouse + 0xc);
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  Camera__ScreenToWorld
            (*(Camera **)(SuperMeatBoy + 0x38),(FPUVector *)&local_28,(Vector2 *)&local_18,0.0);
  local_38 = 0x42c80000;
  local_48 = 0x3e800000;
  local_34 = 0;
  local_44 = 0x3e800000;
  local_40 = 0x3e800000;
  local_58 = local_28;
  local_3c = 0;
  local_30 = 1;
  local_54 = local_24;
  local_50 = local_20;
  local_4c = local_1c;
  uVar1 = TileLevelLightMap__CreateLight
                    (*(TileLevelLightMap **)(SuperMeatBoy + 0x390),(Light *)&local_58);
  *(uint64_t *)(SuperMeatBoyEditor + 200) = uVar1;
  return;
}

/* ======================================================================
 * EditorButton_MouseOver  (Ghidra `EditorButton_MouseOver` @ 0049f3e0)
 * Signature: uint8_t __stdcall EditorButton_MouseOver(void * arg1)
 * Calls: (none)
 * Called by: `SMBEditor__SMBEditor__004ad010`
 */
/* EditorButton_MouseOver(void*) */

void EditorButton_MouseOver(void *arg1)

{
  FlashAnimationLibrary__SetTextFieldText(pEditorLib,"hotkey",arg1);
  return;
}

/* ======================================================================
 * EditorButton_SetLayerToForeGeneral2_Click  (Ghidra `EditorButton_SetLayerToForeGeneral2_Click` @ 004a30a0)
 * Signature: uint8_t __stdcall EditorButton_SetLayerToForeGeneral2_Click(void * arg1)
 * Calls: `AddEditorLayerTween`, `SMBEditorForms__IsFormActive`, `TileLevel__getLevelLayer`
 * Called by: `SMBEditor__SMBEditor__004ad010`
 */
/* EditorButton_SetLayerToForeGeneral2_Click(void*) */

void EditorButton_SetLayerToForeGeneral2_Click(void *arg1)

{
  long lVar1;
  void *pvVar2;
  int iVar3;
  LevelRenderLayer *pLVar4;
  
  lVar1 = Mouse;
  iVar3 = SMBEditorForms__IsFormActive();
  if ((iVar3 == 1) || ((lVar1 != -0x14 && (*(int *)(lVar1 + 0x14) != 1)))) {
    return;
  }
  FlashTextField__SetText(pCurrentLayerField,"Fore Tile General");
  *(uint32_t *)(SuperMeatBoyEditor + 0xd0) = 7;
  pvVar2 = pCurrentLayerButton;
  if (arg1 != (void *)0x0) {
    if (pCurrentLayerButton != (void *)0x0) {
      pvVar2 = arg1;
      if (arg1 == pCurrentLayerButton) goto LAB_004a313a;
      *(uint8_t *)((long)pCurrentLayerButton + 0x4a) = 0;
      *(uint16_t *)((long)pCurrentLayerButton + 0x48) = 0;
    }
    *(uint8_t *)((long)arg1 + 0x4a) = 1;
    pvVar2 = arg1;
  }
LAB_004a313a:
  pCurrentLayerButton = pvVar2;
  pLVar4 = (LevelRenderLayer *)TileLevel__getLevelLayer(*(TileLevel **)(SuperMeatBoy + 0x40));
  AddEditorLayerTween(pLVar4,0);
  return;
}

/* ======================================================================
 * EditorButton_SetLayerToForeGeneral1_Click  (Ghidra `EditorButton_SetLayerToForeGeneral1_Click` @ 004a3170)
 * Signature: uint8_t __stdcall EditorButton_SetLayerToForeGeneral1_Click(void * arg1)
 * Calls: `AddEditorLayerTween`, `SMBEditorForms__IsFormActive`, `TileLevel__getLevelLayer`
 * Called by: `SMBEditor__SMBEditor__004ad010`
 */
/* EditorButton_SetLayerToForeGeneral1_Click(void*) */

void EditorButton_SetLayerToForeGeneral1_Click(void *arg1)

{
  long lVar1;
  void *pvVar2;
  int iVar3;
  LevelRenderLayer *pLVar4;
  
  lVar1 = Mouse;
  iVar3 = SMBEditorForms__IsFormActive();
  if ((iVar3 == 1) || ((lVar1 != -0x14 && (*(int *)(lVar1 + 0x14) != 1)))) {
    return;
  }
  FlashTextField__SetText(pCurrentLayerField,"Fore General 2");
  *(uint32_t *)(SuperMeatBoyEditor + 0xd0) = 6;
  pvVar2 = pCurrentLayerButton;
  if (arg1 != (void *)0x0) {
    if (pCurrentLayerButton != (void *)0x0) {
      pvVar2 = arg1;
      if (arg1 == pCurrentLayerButton) goto LAB_004a320a;
      *(uint8_t *)((long)pCurrentLayerButton + 0x4a) = 0;
      *(uint16_t *)((long)pCurrentLayerButton + 0x48) = 0;
    }
    *(uint8_t *)((long)arg1 + 0x4a) = 1;
    pvVar2 = arg1;
  }
LAB_004a320a:
  pCurrentLayerButton = pvVar2;
  pLVar4 = (LevelRenderLayer *)TileLevel__getLevelLayer(*(TileLevel **)(SuperMeatBoy + 0x40));
  AddEditorLayerTween(pLVar4,0);
  return;
}

/* ======================================================================
 * EditorButton_SetLayerToBackGeneral3_Click  (Ghidra `EditorButton_SetLayerToBackGeneral3_Click` @ 004a3240)
 * Signature: uint8_t __stdcall EditorButton_SetLayerToBackGeneral3_Click(void * arg1)
 * Calls: `AddEditorLayerTween`, `SMBEditorForms__IsFormActive`, `TileLevel__getLevelLayer`
 * Called by: `SMBEditor__SMBEditor__004ad010`
 */
/* EditorButton_SetLayerToBackGeneral3_Click(void*) */

void EditorButton_SetLayerToBackGeneral3_Click(void *arg1)

{
  long lVar1;
  void *pvVar2;
  int iVar3;
  LevelRenderLayer *pLVar4;
  
  lVar1 = Mouse;
  iVar3 = SMBEditorForms__IsFormActive();
  if ((iVar3 == 1) || ((lVar1 != -0x14 && (*(int *)(lVar1 + 0x14) != 1)))) {
    return;
  }
  FlashTextField__SetText(pCurrentLayerField,"Back General 3");
  *(uint32_t *)(SuperMeatBoyEditor + 0xd0) = 5;
  pvVar2 = pCurrentLayerButton;
  if (arg1 != (void *)0x0) {
    if (pCurrentLayerButton != (void *)0x0) {
      pvVar2 = arg1;
      if (arg1 == pCurrentLayerButton) goto LAB_004a32da;
      *(uint8_t *)((long)pCurrentLayerButton + 0x4a) = 0;
      *(uint16_t *)((long)pCurrentLayerButton + 0x48) = 0;
    }
    *(uint8_t *)((long)arg1 + 0x4a) = 1;
    pvVar2 = arg1;
  }
LAB_004a32da:
  pCurrentLayerButton = pvVar2;
  pLVar4 = (LevelRenderLayer *)TileLevel__getLevelLayer(*(TileLevel **)(SuperMeatBoy + 0x40));
  AddEditorLayerTween(pLVar4,0);
  return;
}

/* ======================================================================
 * EditorButton_SetLayerToFore_Click  (Ghidra `EditorButton_SetLayerToFore_Click` @ 004a33e0)
 * Signature: uint8_t __stdcall EditorButton_SetLayerToFore_Click(void * arg1)
 * Calls: `AddEditorLayerTween`, `SMBEditorForms__IsFormActive`, `TileLevel__getLevelLayer`
 * Called by: `SMBEditor__SMBEditor__004ad010`
 */
/* EditorButton_SetLayerToFore_Click(void*) */

void EditorButton_SetLayerToFore_Click(void *arg1)

{
  long lVar1;
  void *pvVar2;
  int iVar3;
  LevelRenderLayer *pLVar4;
  
  lVar1 = Mouse;
  iVar3 = SMBEditorForms__IsFormActive();
  if ((iVar3 == 1) || ((lVar1 != -0x14 && (*(int *)(lVar1 + 0x14) != 1)))) {
    return;
  }
  FlashTextField__SetText(pCurrentLayerField,"Fore Tile");
  *(uint32_t *)(SuperMeatBoyEditor + 0xd0) = 1;
  pvVar2 = pCurrentLayerButton;
  if (arg1 != (void *)0x0) {
    if (pCurrentLayerButton != (void *)0x0) {
      pvVar2 = arg1;
      if (arg1 == pCurrentLayerButton) goto LAB_004a347a;
      *(uint8_t *)((long)pCurrentLayerButton + 0x4a) = 0;
      *(uint16_t *)((long)pCurrentLayerButton + 0x48) = 0;
    }
    *(uint8_t *)((long)arg1 + 0x4a) = 1;
    pvVar2 = arg1;
  }
LAB_004a347a:
  pCurrentLayerButton = pvVar2;
  pLVar4 = (LevelRenderLayer *)TileLevel__getLevelLayer(*(TileLevel **)(SuperMeatBoy + 0x40));
  AddEditorLayerTween(pLVar4,0);
  return;
}

/* ======================================================================
 * EditorButton_SetLayerToBack_Click  (Ghidra `EditorButton_SetLayerToBack_Click` @ 004a34b0)
 * Signature: uint8_t __stdcall EditorButton_SetLayerToBack_Click(void * arg1)
 * Calls: `AddEditorLayerTween`, `SMBEditorForms__IsFormActive`, `TileLevel__getLevelLayer`
 * Called by: `SMBEditor__SMBEditor__004ad010`
 */
/* EditorButton_SetLayerToBack_Click(void*) */

void EditorButton_SetLayerToBack_Click(void *arg1)

{
  long lVar1;
  void *pvVar2;
  int iVar3;
  LevelRenderLayer *pLVar4;
  
  lVar1 = Mouse;
  iVar3 = SMBEditorForms__IsFormActive();
  if ((iVar3 == 1) || ((lVar1 != -0x14 && (*(int *)(lVar1 + 0x14) != 1)))) {
    return;
  }
  FlashTextField__SetText(pCurrentLayerField,"Back Tile");
  *(uint32_t *)(SuperMeatBoyEditor + 0xd0) = 2;
  pvVar2 = pCurrentLayerButton;
  if (arg1 != (void *)0x0) {
    if (pCurrentLayerButton != (void *)0x0) {
      pvVar2 = arg1;
      if (arg1 == pCurrentLayerButton) goto LAB_004a354a;
      *(uint8_t *)((long)pCurrentLayerButton + 0x4a) = 0;
      *(uint16_t *)((long)pCurrentLayerButton + 0x48) = 0;
    }
    *(uint8_t *)((long)arg1 + 0x4a) = 1;
    pvVar2 = arg1;
  }
LAB_004a354a:
  pCurrentLayerButton = pvVar2;
  pLVar4 = (LevelRenderLayer *)TileLevel__getLevelLayer(*(TileLevel **)(SuperMeatBoy + 0x40));
  AddEditorLayerTween(pLVar4,0);
  return;
}

/* ======================================================================
 * EditorButton_SetLayerToBackGeneral2_Click  (Ghidra `EditorButton_SetLayerToBackGeneral2_Click` @ 004a37a0)
 * Signature: uint8_t __stdcall EditorButton_SetLayerToBackGeneral2_Click(void * arg1)
 * Calls: `AddEditorLayerTween`, `SMBEditorForms__IsFormActive`, `TileLevel__getLevelLayer`
 * Called by: `SMBEditor__SMBEditor__004ad010`
 */
/* EditorButton_SetLayerToBackGeneral2_Click(void*) */

void EditorButton_SetLayerToBackGeneral2_Click(void *arg1)

{
  long lVar1;
  void *pvVar2;
  int iVar3;
  LevelRenderLayer *pLVar4;
  
  lVar1 = Mouse;
  iVar3 = SMBEditorForms__IsFormActive();
  if ((iVar3 == 1) || ((lVar1 != -0x14 && (*(int *)(lVar1 + 0x14) != 1)))) {
    return;
  }
  FlashTextField__SetText(pCurrentLayerField,"Back General 2");
  *(uint32_t *)(SuperMeatBoyEditor + 0xd0) = 4;
  pvVar2 = pCurrentLayerButton;
  if (arg1 != (void *)0x0) {
    if (pCurrentLayerButton != (void *)0x0) {
      pvVar2 = arg1;
      if (arg1 == pCurrentLayerButton) goto LAB_004a383a;
      *(uint8_t *)((long)pCurrentLayerButton + 0x4a) = 0;
      *(uint16_t *)((long)pCurrentLayerButton + 0x48) = 0;
    }
    *(uint8_t *)((long)arg1 + 0x4a) = 1;
    pvVar2 = arg1;
  }
LAB_004a383a:
  pCurrentLayerButton = pvVar2;
  pLVar4 = (LevelRenderLayer *)TileLevel__getLevelLayer(*(TileLevel **)(SuperMeatBoy + 0x40));
  AddEditorLayerTween(pLVar4,0);
  return;
}

/* ======================================================================
 * EditorButton_SetLayerToBackGeneral1_Click  (Ghidra `EditorButton_SetLayerToBackGeneral1_Click` @ 004a3e10)
 * Signature: uint8_t __stdcall EditorButton_SetLayerToBackGeneral1_Click(void * arg1)
 * Calls: `AddEditorLayerTween`, `SMBEditorForms__IsFormActive`, `TileLevel__getLevelLayer`
 * Called by: `SMBEditor__SMBEditor__004ad010`
 */
/* EditorButton_SetLayerToBackGeneral1_Click(void*) */

void EditorButton_SetLayerToBackGeneral1_Click(void *arg1)

{
  long lVar1;
  void *pvVar2;
  int iVar3;
  LevelRenderLayer *pLVar4;
  
  lVar1 = Mouse;
  iVar3 = SMBEditorForms__IsFormActive();
  if ((iVar3 == 1) || ((lVar1 != -0x14 && (*(int *)(lVar1 + 0x14) != 1)))) {
    return;
  }
  FlashTextField__SetText(pCurrentLayerField,"Back Tile General");
  *(uint32_t *)(SuperMeatBoyEditor + 0xd0) = 3;
  pvVar2 = pCurrentLayerButton;
  if (arg1 != (void *)0x0) {
    if (pCurrentLayerButton != (void *)0x0) {
      pvVar2 = arg1;
      if (arg1 == pCurrentLayerButton) goto LAB_004a3eaa;
      *(uint8_t *)((long)pCurrentLayerButton + 0x4a) = 0;
      *(uint16_t *)((long)pCurrentLayerButton + 0x48) = 0;
    }
    *(uint8_t *)((long)arg1 + 0x4a) = 1;
    pvVar2 = arg1;
  }
LAB_004a3eaa:
  pCurrentLayerButton = pvVar2;
  pLVar4 = (LevelRenderLayer *)TileLevel__getLevelLayer(*(TileLevel **)(SuperMeatBoy + 0x40));
  AddEditorLayerTween(pLVar4,0);
  return;
}

/* ======================================================================
 * EditorButton_SetLayerToActive_Click  (Ghidra `EditorButton_SetLayerToActive_Click` @ 004a3ee0)
 * Signature: uint8_t __stdcall EditorButton_SetLayerToActive_Click(void * arg1)
 * Calls: `AddEditorLayerTween`, `SMBEditorForms__IsFormActive`, `TileLevel__getLevelLayer`
 * Called by: `SMBEditor__SMBEditor__004ad010`
 */
/* EditorButton_SetLayerToActive_Click(void*) */

void EditorButton_SetLayerToActive_Click(void *arg1)

{
  long lVar1;
  void *pvVar2;
  int iVar3;
  LevelRenderLayer *pLVar4;
  
  lVar1 = Mouse;
  iVar3 = SMBEditorForms__IsFormActive();
  if ((iVar3 == 1) || ((lVar1 != -0x14 && (*(int *)(lVar1 + 0x14) != 1)))) {
    return;
  }
  FlashTextField__SetText(pCurrentLayerField);
  *(uint32_t *)(SuperMeatBoyEditor + 0xd0) = 0;
  pvVar2 = pCurrentLayerButton;
  if (arg1 != (void *)0x0) {
    if (pCurrentLayerButton != (void *)0x0) {
      pvVar2 = arg1;
      if (arg1 == pCurrentLayerButton) goto LAB_004a3f77;
      *(uint8_t *)((long)pCurrentLayerButton + 0x4a) = 0;
      *(uint16_t *)((long)pCurrentLayerButton + 0x48) = 0;
    }
    *(uint8_t *)((long)arg1 + 0x4a) = 1;
    pvVar2 = arg1;
  }
LAB_004a3f77:
  pCurrentLayerButton = pvVar2;
  pLVar4 = (LevelRenderLayer *)TileLevel__getLevelLayer(*(TileLevel **)(SuperMeatBoy + 0x40));
  AddEditorLayerTween(pLVar4,0);
  return;
}

/* ======================================================================
 * EditorButton_SetCameraMode  (Ghidra `EditorButton_SetCameraMode` @ 004a6440)
 * Signature: uint8_t __stdcall EditorButton_SetCameraMode(void * arg1)
 * Calls: `IsFlashFormActive`, `SMBEditor__SetToCameraMode__004af990`
 * Called by: `SMBEditor__SMBEditor__004ad010`
 */
/* EditorButton_SetCameraMode(void*) */

void EditorButton_SetCameraMode(void *arg1)

{
  SMBEditor *this;
  int iVar1;
  
  this = SuperMeatBoyEditor;
  iVar1 = IsFlashFormActive();
  if (iVar1 != 1) {
    SMBEditor__SetToCameraMode__004af990(this);
    return;
  }
  return;
}

/* ======================================================================
 * EditorButton_SetLightMode  (Ghidra `EditorButton_SetLightMode` @ 004a64a0)
 * Signature: uint8_t __stdcall EditorButton_SetLightMode(void * arg1)
 * Calls: `IsFlashFormActive`, `SMBEditor__SetToLightingMode__004b0570`
 * Called by: `SMBEditor__SMBEditor__004ad010`
 */
/* EditorButton_SetLightMode(void*) */

void EditorButton_SetLightMode(void *arg1)

{
  SMBEditor *this;
  int iVar1;
  
  this = SuperMeatBoyEditor;
  if (*(int *)(SuperMeatBoyEditor + 0xc0) != 6) {
    iVar1 = IsFlashFormActive();
    if (iVar1 != 1) {
      SMBEditor__SetToLightingMode__004b0570(this);
      return;
    }
  }
  return;
}

/* ======================================================================
 * EditorButton_SetAnimalMode  (Ghidra `EditorButton_SetAnimalMode` @ 004a64d0)
 * Signature: uint8_t __stdcall EditorButton_SetAnimalMode(void * arg1)
 * Calls: `IsFlashFormActive`, `SMBAnimals__IsValidAnimal`, `SMBEditor__SetToAnimalMode__004b05a0`
 * Called by: `SMBEditor__SMBEditor__004ad010`
 */
/* EditorButton_SetAnimalMode(void*) */

void EditorButton_SetAnimalMode(void *arg1)

{
  SMBEditor *this;
  int iVar1;
  int iVar2;
  
  this = SuperMeatBoyEditor;
  if ((*(int *)(SuperMeatBoyEditor + 0xc0) != 7) && (iVar1 = IsFlashFormActive(), iVar1 != 1)) {
    iVar1 = 0;
    while (iVar2 = SMBAnimals__IsValidAnimal
                             (*(SMBAnimals **)(GSuperMeatBoy__pLevelPalette + 0x41e8),iAnimalIDX),
          iVar2 == 0) {
      if (iVar1 == 0x14) {
        return;
      }
      iAnimalIDX = iAnimalIDX + 1;
      if (iAnimalIDX < 0x14) {
        if (iAnimalIDX < 0) {
          iAnimalIDX = 0x13;
        }
      }
      else {
        iAnimalIDX = 0;
      }
      iVar1 = iVar1 + 1;
    }
    if (iVar1 != 0x14) {
      SMBEditor__SetToAnimalMode__004b05a0(this);
      return;
    }
  }
  return;
}

/* ======================================================================
 * DeleteSelectedAnimal  (Ghidra `DeleteSelectedAnimal` @ 004a66e0)
 * Signature: uint8_t __stdcall DeleteSelectedAnimal(tagButtonProps * arg1, void * arg2)
 * Calls: `EditorButton__IsMouseOverButton`, `IsFlashFormActive`, `SMBAnimals__RemoveAnimal`, `SMBEditorForms__IsFormActive`
 * Called by: `SMBEditor__SetToAnimalMode`
 */
/* DeleteSelectedAnimal(tagButtonProps const*, void*) */

void DeleteSelectedAnimal(tagButtonProps *arg1,void *arg2)

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
        goto LAB_004a6770;
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < (int)(uint)(ushort)pEditorButtons._40_2_);
  }
  FlashAnimationLibrary__SetTextFieldText(pEditorLib,"hotkey",&DAT_005ca3d2 /* R:u32=1931804704 */);
  if (uVar1 == 0 && uVar2 == 0) {
LAB_004a6770:
    if ((*(int *)arg1 == 1) && (pSelectedAnimal != (SMBAnimal *)0x0)) {
      SMBAnimals__RemoveAnimal
                (*(SMBAnimals **)(GSuperMeatBoy__pLevelPalette + 0x41e8),pSelectedAnimal);
      pSelectedAnimal = (SMBAnimal *)0x0;
      return;
    }
  }
  return;
}

/* ======================================================================
 * DeSelectTile  (Ghidra `DeSelectTile` @ 004a7d30)
 * Signature: uint8_t __stdcall DeSelectTile(tagButtonProps * arg1, void * arg2)
 * Calls: `Camera__ScreenToWorld`, `EditorButton__IsMouseOverButton`, `IsFlashFormActive`, `SMBEditorForms__IsFormActive`, `TileLevel__GetGridIndex__0058dd90`, `TileLevel__PlaceTile`, `Vector2__operator_assign`, `memset`
 * Called by: `CancelPasteTileRendering`, `SMBEditor__SetToTileMode`
 */
/* DeSelectTile(tagButtonProps const*, void*) */

void DeSelectTile(tagButtonProps *arg1,void *arg2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint32_t local_78;
  uint32_t local_74;
  uint32_t local_70;
  uint32_t local_6c;
  uint32_t local_68;
  uint32_t local_64;
  Vector2 local_58 [16];
  uint32_t local_48;
  uint32_t local_44;
  uint32_t local_38;
  uint32_t local_34;
  uint32_t local_28 [2];
  int local_20;
  int local_1c;
  
  iVar2 = SMBEditorForms__IsFormActive();
  iVar3 = IsFlashFormActive();
  if (pEditorButtons._40_2_ != 0) {
    uVar5 = 0;
    do {
      iVar4 = EditorButton__IsMouseOverButton
                        (*(EditorButton **)(pEditorButtons._56_8_ + (ulong)(uVar5 & 0xffff) * 8));
      if (iVar4 == 1) {
        bVar1 = true;
        goto LAB_004a7daa;
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < (int)(uint)(ushort)pEditorButtons._40_2_);
  }
  FlashAnimationLibrary__SetTextFieldText(pEditorLib,"hotkey",&DAT_005ca3d2 /* R:u32=1931804704 */);
  bVar1 = false;
LAB_004a7daa:
  if ((iVar2 == 0 && iVar3 == 0) && !bVar1) {
    local_48 = 0x4cbebc20;
    local_44 = 0x4cbebc20;
    Vector2__operator_assign((Vector2 *)&vSelectionPoint1,(Vector2 *)&local_48);
    local_38 = 0x4cbebc20;
    local_34 = 0x4cbebc20;
    Vector2__operator_assign((Vector2 *)&vSelectionPoint2,(Vector2 *)&local_38);
    memset(pSelectionIDX,0,(long)iNumIDX << 2);
    memset(pCurrSelectionIDX,0,(long)iNumIDX << 2);
    local_68 = *(uint32_t *)(Mouse + 0xc);
    local_64 = *(uint32_t *)(Mouse + 0x10);
    local_78 = 0;
    local_74 = 0;
    local_70 = 0;
    local_6c = 0;
    Camera__ScreenToWorld
              (*(Camera **)(SuperMeatBoy + 0x38),(FPUVector *)&local_78,(Vector2 *)&local_68,0.0);
    TileLevel__GetGridIndex__0058dd90
              (*(TileLevel **)(SuperMeatBoy + 0x40),(Vector2 *)&local_78,local_58,&local_20,
               &local_1c);
    local_28[0] = 0;
    TileLevel__PlaceTile
              (*(TileLevel **)(SuperMeatBoy + 0x40),local_20,local_1c,local_28,
               *(uint32_t *)(SuperMeatBoyEditor + 0xd0));
  }
  return;
}

/* ======================================================================
 * DeleteSelected  (Ghidra `DeleteSelected` @ 004a99e0)
 * Signature: uint8_t __stdcall DeleteSelected(tagButtonProps * arg1, void * arg2)
 * Calls: `DeleteSelected_Selection`, `EditorButton__IsMouseOverButton`, `IsFlashFormActive`, `RunCommandOnSelection`, `SMBEditorForms__IsFormActive`
 * Called by: `SMBEditor__SetToTileMode`
 */
/* DeleteSelected(tagButtonProps const*, void*) */

void DeleteSelected(tagButtonProps *arg1,void *arg2)

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
        goto LAB_004a9a70;
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < (int)(uint)(ushort)pEditorButtons._40_2_);
  }
  FlashAnimationLibrary__SetTextFieldText(pEditorLib,"hotkey",&DAT_005ca3d2 /* R:u32=1931804704 */);
  if (uVar1 == 0 && uVar2 == 0) {
LAB_004a9a70:
    if (*(int *)arg1 == 1) {
      RunCommandOnSelection(DeleteSelected_Selection);
      return;
    }
  }
  return;
}

/* ======================================================================
 * DestroyEditorButtons  (Ghidra `DestroyEditorButtons` @ 004ab310)
 * Signature: uint8_t DestroyEditorButtons(void)
 * Calls: `free`
 * Called by: (none)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DestroyEditorButtons() */

void DestroyEditorButtons(void)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  
  uVar2 = (uint)(ushort)pEditorButtons._40_2_;
  if (pEditorButtons._40_2_ != 0) {
    uVar4 = 0;
    do {
      plVar1 = *(long **)(pEditorButtons._56_8_ + (uVar4 & 0xffff) * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
        uVar2 = (uint)(ushort)pEditorButtons._40_2_;
      }
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulong)uVar3;
    } while ((int)uVar3 < (int)uVar2);
  }
  if (pEditorButtons._72_4_ != -0x5eef3582) {
    return;
  }
  pEditorButtons._72_4_ = 0;
  free(*(void **)(pEditorButtons._56_8_ + -8));
  if (pEditorButtons._48_4_ == 1) {
    free(*(void **)(pEditorButtons._64_8_ + -8));
  }
  pEditorButtons._72_4_ = 0;
  pEditorButtons._42_2_ = 0;
  pEditorButtons._40_2_ = 0;
  pEditorButtons._56_8_ = 0;
  pEditorButtons._64_8_ = 0;
  return;
}

/* ======================================================================
 * EditorButton_SetParalaxMode  (Ghidra `EditorButton_SetParalaxMode` @ 004afcf0)
 * Signature: uint8_t __stdcall EditorButton_SetParalaxMode(void * arg1)
 * Calls: `SMBEditor__SetToParalaxMode`
 * Called by: `SMBEditor__SMBEditor__004ad010`
 */
/* EditorButton_SetParalaxMode(void*) */

void EditorButton_SetParalaxMode(void *arg1)

{
  SMBEditor__SetToParalaxMode(SuperMeatBoyEditor);
  return;
}

/* ======================================================================
 * EditorButton_SetAnimationMode  (Ghidra `EditorButton_SetAnimationMode` @ 004b0290)
 * Signature: uint8_t __stdcall EditorButton_SetAnimationMode(void * arg1)
 * Calls: `SMBEditor__SetToAnimationMode`
 * Called by: `SMBEditor__SMBEditor__004ad010`
 */
/* EditorButton_SetAnimationMode(void*) */

void EditorButton_SetAnimationMode(void *arg1)

{
  SMBEditor__SetToAnimationMode(SuperMeatBoyEditor);
  return;
}

/* ======================================================================
 * EditorButton_SetObstacleMode  (Ghidra `EditorButton_SetObstacleMode` @ 004b0560)
 * Signature: uint8_t __stdcall EditorButton_SetObstacleMode(void * arg1)
 * Calls: `SMBEditor__SetToObstacleMode`
 * Called by: `SMBEditor__SMBEditor__004ad010`
 */
/* EditorButton_SetObstacleMode(void*) */

void EditorButton_SetObstacleMode(void *arg1)

{
  SMBEditor__SetToObstacleMode(SuperMeatBoyEditor);
  return;
}

/* ======================================================================
 * DeActivatePieceProps  (Ghidra `DeActivatePieceProps` @ 004bab90)
 * Signature: uint8_t __stdcall DeActivatePieceProps(void * arg1)
 * Calls: (none)
 * Called by: `SMBEditorForms__Initialize`
 */
/* DeActivatePieceProps(void*) */

void DeActivatePieceProps(void *arg1)

{
  return;
}

/* ======================================================================
 * DeactivateWayPointProps  (Ghidra `DeactivateWayPointProps` @ 004bae50)
 * Signature: uint8_t __stdcall DeactivateWayPointProps(void * arg1)
 * Calls: `StringToFloatW`
 * Called by: `SMBEditorForms__Initialize`
 */
/* DeactivateWayPointProps(void*) */

void DeactivateWayPointProps(void *arg1)

{
  long lVar1;
  long lVar2;
  uint32_t uVar3;
  
  lVar1 = *(long *)(SuperMeatBoyEditor + 0x108);
  if (lVar1 != 0) {
    uVar3 = StringToFloatW(*(uint64_t *)(pWAYPOINTPROPZoom + 0x40));
    lVar2 = pWAYPOINTPROPDuration;
    *(uint32_t *)(lVar1 + 8) = uVar3;
    uVar3 = StringToFloatW(*(uint64_t *)(lVar2 + 0x40));
    *(uint32_t *)(lVar1 + 0x10) = uVar3;
  }
  return;
}

/* ======================================================================
 * DeactivateEffectProps  (Ghidra `DeactivateEffectProps` @ 004bb580)
 * Signature: uint8_t __stdcall DeactivateEffectProps(void * arg1)
 * Calls: `GSuperMeatBoy__getChar`, `MeatBoyCharactor__WritePropertiesToFile`, `StringToFloatW`
 * Called by: `SMBEditorForms__Initialize`
 */
/* DeactivateEffectProps(void*) */

void DeactivateEffectProps(void *arg1)

{
  long lVar1;
  GSuperMeatBoy *this;
  long lVar2;
  MeatBoyCharactor *this_00;
  uint32_t uVar3;
  
  lVar2 = GSuperMeatBoy__getChar(SuperMeatBoy,1);
  uVar3 = StringToFloatW(*(uint64_t *)(pSMBPLAYEREFFECTFields + 0x40));
  lVar1 = DAT_0081ab88 /* R:6.659755029611553e-39f */;
  *(uint32_t *)(lVar2 + 0x994) = uVar3;
  uVar3 = StringToFloatW(*(uint64_t *)(lVar1 + 0x40));
  lVar1 = DAT_0081ab90 /* R:7.805232446289231e-43f */;
  *(uint32_t *)(lVar2 + 0x998) = uVar3;
  uVar3 = StringToFloatW(*(uint64_t *)(lVar1 + 0x40));
  lVar1 = DAT_0081ab98 /* R:6.3184547756406e-42f */;
  *(uint32_t *)(lVar2 + 0x99c) = uVar3;
  uVar3 = StringToFloatW(*(uint64_t *)(lVar1 + 0x40));
  lVar1 = DAT_0081aba0 /* R:8.457071650342278e-39f */;
  *(uint32_t *)(lVar2 + 0x9a4) = uVar3;
  uVar3 = StringToFloatW(*(uint64_t *)(lVar1 + 0x40));
  lVar1 = DAT_0081aba8 /* R:2.2420775429197073e-43f */;
  *(uint32_t *)(lVar2 + 0x9a8) = uVar3;
  uVar3 = StringToFloatW(*(uint64_t *)(lVar1 + 0x40));
  lVar1 = DAT_0081abb0 /* R:6.392723594249815e-42f */;
  *(uint32_t *)(lVar2 + 0x9ac) = uVar3;
  uVar3 = StringToFloatW(*(uint64_t *)(lVar1 + 0x40));
  lVar1 = DAT_0081abb8 /* R:8.45729585809657e-39f */;
  *(uint32_t *)(lVar2 + 0x9b4) = uVar3;
  uVar3 = StringToFloatW(*(uint64_t *)(lVar1 + 0x40));
  lVar1 = DAT_0081abc0 /* R:1.1210387714598537e-43f */;
  *(uint32_t *)(lVar2 + 0x9b8) = uVar3;
  uVar3 = StringToFloatW(*(uint64_t *)(lVar1 + 0x40));
  lVar1 = DAT_0081abc8 /* R:6.471196308252005e-42f */;
  *(uint32_t *)(lVar2 + 0x9bc) = uVar3;
  uVar3 = StringToFloatW(*(uint64_t *)(lVar1 + 0x40));
  lVar1 = DAT_0081abd0 /* R:6.364854570391324e-39f */;
  *(uint32_t *)(lVar2 + 0x9c4) = uVar3;
  uVar3 = StringToFloatW(*(uint64_t *)(lVar1 + 0x40));
  lVar1 = DAT_0081abd8 /* R:5.254869241218064e-43f */;
  *(uint32_t *)(lVar2 + 0x9c8) = uVar3;
  uVar3 = StringToFloatW(*(uint64_t *)(lVar1 + 0x40));
  lVar1 = DAT_0081abe0 /* R:2.766163168577189e-42f */;
  *(uint32_t *)(lVar2 + 0x9cc) = uVar3;
  uVar3 = StringToFloatW(*(uint64_t *)(lVar1 + 0x40));
  lVar1 = DAT_0081abe8 /* R:1.1901171805572098e-38f */;
  *(uint32_t *)(lVar2 + 0x9d4) = uVar3;
  uVar3 = StringToFloatW(*(uint64_t *)(lVar1 + 0x40));
  lVar1 = DAT_0081abf0 /* R:2.2420775429197073e-44f */;
  *(uint32_t *)(lVar2 + 0x9d8) = uVar3;
  uVar3 = StringToFloatW(*(uint64_t *)(lVar1 + 0x40));
  lVar1 = DAT_0081abf8 /* R:2.781577451684762e-42f */;
  *(uint32_t *)(lVar2 + 0x9dc) = uVar3;
  uVar3 = StringToFloatW(*(uint64_t *)(lVar1 + 0x40));
  lVar1 = DAT_0081ac00 /* R:1.1901194226347528e-38f */;
  *(uint32_t *)(lVar2 + 0x9e4) = uVar3;
  uVar3 = StringToFloatW(*(uint64_t *)(lVar1 + 0x40));
  lVar1 = DAT_0081ac08 /* R:2.2420775429197073e-44f */;
  *(uint32_t *)(lVar2 + 0x9e8) = uVar3;
  uVar3 = StringToFloatW(*(uint64_t *)(lVar1 + 0x40));
  lVar1 = DAT_0081ac10 /* R:2.796991734792335e-42f */;
  *(uint32_t *)(lVar2 + 0x9ec) = uVar3;
  uVar3 = StringToFloatW(*(uint64_t *)(lVar1 + 0x40));
  lVar1 = DAT_0081ac18 /* R:1.1901216647122957e-38f */;
  *(uint32_t *)(lVar2 + 0x9f4) = uVar3;
  uVar3 = StringToFloatW(*(uint64_t *)(lVar1 + 0x40));
  lVar1 = DAT_0081ac20 /* R:2.2420775429197073e-44f */;
  *(uint32_t *)(lVar2 + 0x9f8) = uVar3;
  uVar3 = StringToFloatW(*(uint64_t *)(lVar1 + 0x40));
  lVar1 = DAT_0081ac28 /* R:2.8138073163642327e-42f */;
  *(uint32_t *)(lVar2 + 0x9fc) = uVar3;
  uVar3 = StringToFloatW(*(uint64_t *)(lVar1 + 0x40));
  lVar1 = DAT_0081ac30 /* R:1.1901239067898386e-38f */;
  *(uint32_t *)(lVar2 + 0xa04) = uVar3;
  uVar3 = StringToFloatW(*(uint64_t *)(lVar1 + 0x40));
  lVar1 = DAT_0081ac38 /* R:2.2420775429197073e-44f */;
  *(uint32_t *)(lVar2 + 0xa08) = uVar3;
  uVar3 = StringToFloatW(*(uint64_t *)(lVar1 + 0x40));
  lVar1 = DAT_0081ac40 /* R:2.8306228979361305e-42f */;
  *(uint32_t *)(lVar2 + 0xa0c) = uVar3;
  uVar3 = StringToFloatW(*(uint64_t *)(lVar1 + 0x40));
  lVar1 = DAT_0081ac48 /* R:1.1901261488673815e-38f */;
  *(uint32_t *)(lVar2 + 0xa14) = uVar3;
  uVar3 = StringToFloatW(*(uint64_t *)(lVar1 + 0x40));
  lVar1 = DAT_0081ac50 /* R:2.2420775429197073e-44f */;
  *(uint32_t *)(lVar2 + 0xa18) = uVar3;
  uVar3 = StringToFloatW(*(uint64_t *)(lVar1 + 0x40));
  lVar1 = pSMBPLAYEREFFECTWalkDelay;
  *(uint32_t *)(lVar2 + 0xa1c) = uVar3;
  uVar3 = StringToFloatW(*(uint64_t *)(lVar1 + 0x40));
  lVar1 = pSMBPLAYEREFFECTRunDelay;
  *(uint32_t *)(lVar2 + 0xa2c) = uVar3;
  uVar3 = StringToFloatW(*(uint64_t *)(lVar1 + 0x40));
  lVar1 = pSMBPLAYEREFFECTRunFastDelay;
  *(uint32_t *)(lVar2 + 0xa24) = uVar3;
  uVar3 = StringToFloatW(*(uint64_t *)(lVar1 + 0x40));
  this = SuperMeatBoy;
  *(uint32_t *)(lVar2 + 0xa28) = uVar3;
  this_00 = (MeatBoyCharactor *)GSuperMeatBoy__getChar(this,1);
  MeatBoyCharactor__WritePropertiesToFile(this_00);
  return;
}

/* ======================================================================
 * DeactivateAnimProps  (Ghidra `DeactivateAnimProps` @ 004bb880)
 * Signature: uint8_t __stdcall DeactivateAnimProps(void * arg1)
 * Calls: `GSuperMeatBoy__getChar`, `MeatBoyCharactor__WritePropertiesToFile`, `StringToFloatW`
 * Called by: `SMBEditorForms__Initialize`
 */
/* DeactivateAnimProps(void*) */

void DeactivateAnimProps(void *arg1)

{
  long *plVar1;
  long lVar2;
  MeatBoyCharactor *this;
  int iVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  uint32_t uVar7;
  
  plVar5 = &pSMBPLAYERANIMFields;
  lVar2 = GSuperMeatBoy__getChar(SuperMeatBoy,1);
  iVar3 = 0;
  do {
    iVar4 = iVar3 + 2;
    lVar6 = (long)(iVar3 >> 1) + 4;
    uVar7 = StringToFloatW(*(uint64_t *)(*plVar5 + 0x40));
    *(uint32_t *)(lVar2 + 0x8b4 + lVar6 * 8) = uVar7;
    plVar1 = plVar5 + 1;
    plVar5 = plVar5 + 2;
    uVar7 = StringToFloatW(*(uint64_t *)(*plVar1 + 0x40));
    *(uint32_t *)(lVar2 + 0x8b8 + lVar6 * 8) = uVar7;
    iVar3 = iVar4;
  } while (iVar4 != 0x30);
  this = (MeatBoyCharactor *)GSuperMeatBoy__getChar(SuperMeatBoy,1);
  MeatBoyCharactor__WritePropertiesToFile(this);
  return;
}

/* ======================================================================
 * DeactivateForm  (Ghidra `DeactivateForm` @ 004bc230)
 * Signature: uint8_t __stdcall DeactivateForm(void * arg1)
 * Calls: `UIForm__DeActivate`
 * Called by: `SMBEditorForms__Initialize`
 */
/* DeactivateForm(void*) */

void DeactivateForm(void *arg1)

{
  UIForm__DeActivate(*(UIForm **)((long)arg1 + 0x30));
  return;
}

/* ======================================================================
 * DeActivateAnimalProps  (Ghidra `DeActivateAnimalProps` @ 004bc440)
 * Signature: uint8_t __stdcall DeActivateAnimalProps(void * arg1)
 * Calls: (none)
 * Called by: (none)
 */
/* DeActivateAnimalProps(void*) */

void DeActivateAnimalProps(void *arg1)

{
  return;
}

/* ======================================================================
 * DetermineIconPositioning  (Ghidra `DetermineIconPositioning` @ 004c9da0)
 * Signature: uint8_t __stdcall DetermineIconPositioning(FlashLibraryInstance * arg1, FlashLibraryInstance * arg2, LevelIcon * arg3, LevelIcon * arg4, LevelIconPositions * arg5, LevelIconPositions * arg6)
 * Calls: (none)
 * Called by: (none)
 */
/* DetermineIconPositioning(FlashLibraryInstance*, FlashLibraryInstance*, GSMBMenu__LevelIcon,
   GSMBMenu__LevelIcon, GSMBMenu__LevelIcon_LevelIconPositions,
   GSMBMenu__LevelIcon_LevelIconPositions) */

void DetermineIconPositioning
               (FlashLibraryInstance *arg1,FlashLibraryInstance *arg2,LevelIcon *arg3,
               LevelIcon *arg4,LevelIconPositions *arg5,LevelIconPositions *arg6)

{
  if ((float)((uint)(*(float *)(arg1 + 0x30) - *(float *)(arg2 + 0x30)) & DAT_005be880 /* R:u32=2147483647 */) <=
      (float)((uint)(*(float *)(arg1 + 0x34) - *(float *)(arg2 + 0x34)) & DAT_005be880 /* R:u32=2147483647 */)) {
    if (*(float *)(arg1 + 0x34) <= *(float *)(arg2 + 0x34)) {
      *(LevelIcon **)arg5 = arg4;
      *(LevelIcon **)(arg6 + 8) = arg3;
      return;
    }
    *(LevelIcon **)(arg5 + 8) = arg4;
    *(LevelIcon **)arg6 = arg3;
    return;
  }
  if (*(float *)(arg2 + 0x30) < *(float *)(arg1 + 0x30)) {
    *(LevelIcon **)(arg5 + 0x10) = arg4;
    *(LevelIcon **)(arg6 + 0x18) = arg3;
    return;
  }
  *(LevelIcon **)(arg5 + 0x18) = arg4;
  *(LevelIcon **)(arg6 + 0x10) = arg3;
  return;
}

/* ======================================================================
 * DecrementCurrentInternetsRating  (Ghidra `DecrementCurrentInternetsRating` @ 00512690)
 * Signature: uint8_t __stdcall DecrementCurrentInternetsRating(tagButtonProps * arg1, void * arg2)
 * Calls: `SMBLevelPortal__DecrementCurrentRating`
 * Called by: `GSuperMeatBoy__ShowCurrentReplay`, `ShowCurrentReplay`
 */
/* DecrementCurrentInternetsRating(tagButtonProps const*, void*) */

void DecrementCurrentInternetsRating(tagButtonProps *arg1,void *arg2)

{
  if ((arg1 != (tagButtonProps *)0x0) && (*(int *)arg1 != 1)) {
    return;
  }
  SMBLevelPortal__DecrementCurrentRating(SuperMeatBoyPortal);
  return;
}

/* ======================================================================
 * CreateAnimationLibResourceLoader  (Ghidra `CreateAnimationLibResourceLoader` @ 00571710)
 * Signature: uint8_t __stdcall CreateAnimationLibResourceLoader(void * arg1)
 * Calls: `CreateAnimationLibResources`
 * Called by: `FlashAnimationLibrary__FlashAnimationLibrary`, `FlashAnimationLibrary__FlashAnimationLibrary__00576680`
 */
/* CreateAnimationLibResourceLoader(void*) */

void CreateAnimationLibResourceLoader(void *arg1)

{
  code *local_28;
  void *local_20;
  uint32_t local_18;
  uint32_t local_14;
  
  local_18 = *(uint32_t *)((long)arg1 + 0x84);
  local_14 = 0;
  local_28 = CreateAnimationLibResources;
  local_20 = arg1;
  Loader__AddLoader((LoaderFuncCreate *)&local_28);
  return;
}

/* ======================================================================
 * DestroyAnimationLibResources  (Ghidra `DestroyAnimationLibResources` @ 00571740)
 * Signature: uint8_t __stdcall DestroyAnimationLibResources(void * arg1)
 * Calls: `IndexTexture__IndexTexture__005a1170`, `operator_delete`
 * Called by: `FlashAnimationLibrary__FlashAnimationLibrary`, `FlashAnimationLibrary__FlashAnimationLibrary__00576680`
 */
/* DestroyAnimationLibResources(void*) */

void DestroyAnimationLibResources(void *arg1)

{
  IndexTexture *this;
  uint64_t *puVar1;
  
  Loader__Wait(*(uint *)((long)arg1 + 0x84),1);
  puVar1 = *(uint64_t **)((long)arg1 + 8);
  this = (IndexTexture *)*puVar1;
  if (this != (IndexTexture *)0x0) {
    IndexTexture__IndexTexture__005a1170(this);
    operator_delete(this);
    puVar1 = *(uint64_t **)((long)arg1 + 8);
  }
  *puVar1 = 0;
  return;
}

/* ======================================================================
 * CreateAnimationLibResources  (Ghidra `CreateAnimationLibResources` @ 00571e30)
 * Signature: uint8_t __stdcall CreateAnimationLibResources(void * arg1)
 * Calls: `BaseResource__Release`, `IndexTexture__IndexTexture__005a0fc0`, `TexturePackage__CreateTexture`, `TexturePackage__TexturePackage`, `TexturePackage__TexturePackage__005a1b10`, `operator_new`, `std__string_string`
 * Called by: `CreateAnimationLibResourceLoader`, `FlashAnimationLibrary__FlashAnimationLibrary__00576680`
 */
/* WARNING: Removing unreachable block (ram,0x005721c0) */
/* WARNING: Removing unreachable block (ram,0x005721ea) */
/* WARNING: Removing unreachable block (ram,0x00572262) */
/* WARNING: Removing unreachable block (ram,0x005721ce) */
/* WARNING: Removing unreachable block (ram,0x005721dc) */
/* WARNING: Removing unreachable block (ram,0x005721b2) */
/* CreateAnimationLibResources(void*) */

void CreateAnimationLibResources(void *arg1)

{
  string *psVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  BaseResource *this;
  IndexTexture *this_00;
  uint64_t uVar6;
  ulong uVar7;
  TexturePackage aTStack_b8 [32];
  long local_98 [2];
  long local_88 [2];
  long local_78 [2];
  long local_68 [2];
  char *local_58 [2];
  long local_48 [2];
  long local_38 [2];
  
  psVar1 = (string *)((long)arg1 + 0x68);
  iVar4 = std__string_rfind((char)psVar1,0x2f);
  iVar5 = std__string_rfind((char)psVar1,0x2e);
  uVar7 = (ulong)(iVar4 + 1);
  std__string_string((string *)local_98,psVar1,0,uVar7);
  if (*(ulong *)(*(long *)((long)arg1 + 0x68) + -0x18) < uVar7) {
                    /* try { // try from 00572036 to 0057203a has its CatchHandler @ 0057203b */
    uVar6 = std__throw_out_of_range("basic_string__substr");
                    /* catch() { ... } // from try @ 00571eb1 with catch @ 0057203b
                       catch() { ... } // from try @ 00572036 with catch @ 0057203b */
    std__string_string((string *)local_98);
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume(uVar6);
  }
                    /* try { // try from 00571eb1 to 00571eb5 has its CatchHandler @ 0057203b */
  std__string_string((string *)local_88,psVar1,uVar7,(long)((iVar5 - iVar4) + -1));
                    /* try { // try from 00571ec0 to 00571ec4 has its CatchHandler @ 005721ad */
  std__string_string((string *)local_68,(string *)local_98);
                    /* try { // try from 00571ecf to 00571ed3 has its CatchHandler @ 0057220a */
  std__string_append((string *)local_68);
                    /* try { // try from 00571ede to 00571ee2 has its CatchHandler @ 005721f8 */
  std__string_string((string *)local_78,(string *)local_68);
                    /* try { // try from 00571ef2 to 00571ef6 has its CatchHandler @ 00572253 */
  std__string_append((char *)local_78,0x5db9a8);
  if ((allocator *)(local_68[0] + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage) {
    LOCK();
    piVar2 = (int *)(local_68[0] + -8);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 < 1) {
      std__string_Rep_M_destroy((allocator *)(local_68[0] + -0x18));
    }
  }
                    /* try { // try from 00571f17 to 00571f1b has its CatchHandler @ 0057224b */
  std__string_string((string *)local_48,(string *)local_98);
                    /* try { // try from 00571f26 to 00571f2a has its CatchHandler @ 00572239 */
  std__string_append((string *)local_48);
                    /* try { // try from 00571f35 to 00571f39 has its CatchHandler @ 005721a8 */
  std__string_string((string *)local_58,(string *)local_48);
                    /* try { // try from 00571f49 to 00571f4d has its CatchHandler @ 0057218f */
  std__string_append((char *)local_58,0x5db9ac);
  if ((allocator *)(local_48[0] + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage) {
    LOCK();
    piVar2 = (int *)(local_48[0] + -8);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 < 1) {
      std__string_Rep_M_destroy((allocator *)(local_48[0] + -0x18));
    }
  }
  local_38[0] = local_78[0];
                    /* try { // try from 00571f7c to 00571f80 has its CatchHandler @ 00572169 */
  TexturePackage__TexturePackage(aTStack_b8,(TexturePackageCreate *)local_38);
                    /* try { // try from 00571f86 to 00571f9c has its CatchHandler @ 00572234 */
  this = (BaseResource *)TexturePackage__CreateTexture(aTStack_b8,0);
  pcVar3 = local_58[0];
  this_00 = operator_new(0x18);
                    /* try { // try from 00571fa9 to 00571fad has its CatchHandler @ 0057221c */
  IndexTexture__IndexTexture__005a0fc0(this_00,(Texture *)this,pcVar3);
  **(uint64_t **)((long)arg1 + 8) = this_00;
                    /* try { // try from 00571fba to 00571fbe has its CatchHandler @ 00572234 */
  BaseResource__Release(this,0);
  *(uint32_t *)((long)arg1 + 0x84) = 0xffffffff;
                    /* try { // try from 00571fcc to 00571fd0 has its CatchHandler @ 00572169 */
  TexturePackage__TexturePackage__005a1b10(aTStack_b8);
  if ((allocator *)(local_58[0] + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage) {
    LOCK();
    piVar2 = (int *)(local_58[0] + -8);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 < 1) {
      std__string_Rep_M_destroy((allocator *)(local_58[0] + -0x18));
    }
  }
  if ((allocator *)(local_78[0] + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage) {
    LOCK();
    piVar2 = (int *)(local_78[0] + -8);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 < 1) {
      std__string_Rep_M_destroy((allocator *)(local_78[0] + -0x18));
    }
  }
  if ((allocator *)(local_88[0] + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage) {
    LOCK();
    piVar2 = (int *)(local_88[0] + -8);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 < 1) {
      std__string_Rep_M_destroy((allocator *)(local_88[0] + -0x18));
    }
  }
  if ((allocator *)(local_98[0] + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage) {
    LOCK();
    piVar2 = (int *)(local_98[0] + -8);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 < 1) {
      std__string_Rep_M_destroy((allocator *)(local_98[0] + -0x18));
    }
  }
  return;
}

/* ======================================================================
 * DestroyCachedCue  (Ghidra `DestroyCachedCue` @ 0057a3d0)
 * Signature: uint8_t __stdcall DestroyCachedCue(void * * arg1)
 * Calls: `AutoLockSection__AutoLockSection`, `AutoLockSection__AutoLockSection__005b59d0`, `audDestroyCue`
 * Called by: `TAudioCue__TAudioCue__0057ab30`
 */
/* DestroyCachedCue(void**) */

void DestroyCachedCue(void **arg1)

{
  ushort *puVar1;
  ushort uVar2;
  uint64_t uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  ushort uVar7;
  uint uVar8;
  long lVar9;
  uint64_t *puVar10;
  short sVar11;
  uint uVar12;
  uint64_t *puVar13;
  int iVar14;
  ushort uVar15;
  byte bVar16;
  AutoLockSection aAStack_28 [24];
  
  bVar16 = 0;
  AutoLockSection__AutoLockSection(aAStack_28,(CriticalSection *)cacheCueSection);
  uVar3 = pAudioCueCache._56_8_;
  uVar12 = (uint)(ushort)pAudioCueCache._40_2_;
  if (uVar12 != 0) {
    uVar5 = 0;
    do {
      lVar9 = (uVar5 & 0xffff) * 0x90 + uVar3;
      if ((*(void **)(lVar9 + 0x80) == *arg1) &&
         (iVar14 = *(int *)(lVar9 + 0x88) + -1, *(int *)(lVar9 + 0x88) = iVar14, iVar14 < 1)) {
                    /* try { // try from 0057a43c to 0057a440 has its CatchHandler @ 0057a5aa */
        audDestroyCue(arg1);
        uVar12 = (uint)(ushort)pAudioCueCache._40_2_;
        break;
      }
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulong)uVar4;
    } while ((int)uVar4 < (int)uVar12);
  }
  do {
    if (uVar12 == 0) {
LAB_0057a495:
      AutoLockSection__AutoLockSection__005b59d0(aAStack_28);
      return;
    }
    uVar4 = 0;
    if (*(int *)(pAudioCueCache._56_8_ + 0x88) < 1) {
      uVar8 = 1;
      uVar4 = 0;
    }
    else {
      do {
        uVar8 = uVar4;
        uVar4 = uVar8 + 1;
        if ((int)uVar12 <= (int)uVar4) goto LAB_0057a495;
      } while (0 < *(int *)(pAudioCueCache._56_8_ + 0x88 + (ulong)(ushort)uVar4 * 0x90));
      uVar8 = uVar8 + 2;
    }
    sVar11 = (short)uVar12;
    if ((uVar8 < uVar12) && ((int)uVar4 < (int)(uVar12 - 1))) {
      lVar9 = (long)(int)uVar4 * 0x90;
      uVar12 = uVar4;
      do {
        puVar13 = (uint64_t *)(pAudioCueCache._56_8_ + lVar9);
        lVar9 = lVar9 + 0x90;
        uVar12 = uVar12 + 1;
        puVar10 = (uint64_t *)(pAudioCueCache._56_8_ + lVar9);
        for (lVar6 = 0x12; lVar6 != 0; lVar6 = lVar6 + -1) {
          *puVar13 = *puVar10;
          puVar10 = puVar10 + (ulong)bVar16 * -2 + 1;
          puVar13 = puVar13 + (ulong)bVar16 * -2 + 1;
        }
        sVar11 = pAudioCueCache._40_2_;
      } while ((int)uVar12 < (int)((ushort)pAudioCueCache._40_2_ - 1));
    }
    if ((pAudioCueCache._48_4_ == 1) && (pAudioCueCache._42_2_ != 0)) {
      uVar7 = 0;
      uVar15 = pAudioCueCache._42_2_;
      do {
        while( true ) {
          puVar1 = (ushort *)(pAudioCueCache._64_8_ + (ulong)uVar7 * 2);
          uVar2 = *puVar1;
          if (uVar2 != uVar4) break;
          *puVar1 = 0xffff;
          uVar7 = uVar7 + 1;
          sVar11 = pAudioCueCache._40_2_;
          uVar15 = pAudioCueCache._42_2_;
          if ((ushort)pAudioCueCache._42_2_ <= uVar7) goto LAB_0057a50b;
        }
        if ((uVar4 < uVar2) && ((ushort)(uVar2 - 1) < 0xfffe)) {
          *puVar1 = uVar2 - 1;
          uVar15 = pAudioCueCache._42_2_;
        }
        uVar7 = uVar7 + 1;
        sVar11 = pAudioCueCache._40_2_;
      } while (uVar7 < uVar15);
    }
LAB_0057a50b:
    pAudioCueCache._40_2_ = sVar11 + -1 + (ushort)(sVar11 == 0);
    uVar12 = (uint)(ushort)pAudioCueCache._40_2_;
  } while( true );
}

/* ======================================================================
 * CreateTAudioCue  (Ghidra `CreateTAudioCue` @ 0057b290)
 * Signature: uint8_t __stdcall CreateTAudioCue(void * arg1)
 * Calls: `AddCachedCue`, `audCreateCue`
 * Called by: (none)
 */
/* CreateTAudioCue(void*) */

void CreateTAudioCue(void *arg1)

{
  void *pvVar1;
  
  pvVar1 = (void *)audCreateCue((long)arg1 + 0x18);
  *(void **)arg1 = pvVar1;
  AddCachedCue(pvVar1,*(char **)((long)arg1 + 0x20));
  *(uint32_t *)((long)arg1 + 0xc) = 0xffffffff;
  return;
}

/* ======================================================================
 * Create  (Ghidra `Create` @ 0057b2c0)
 * Signature: uint8_t __stdcall Create(TAudioCueCreation * arg1)
 * Calls: `AddCachedCue`, `AutoLockSection__AutoLockSection`, `AutoLockSection__AutoLockSection__005b59d0`, `Loader__GenerateLoadCallerID`, `audCreateCue`, `operator_new`, `strcmp`, `strlen`
 * Called by: (none)
 */
/* TAudioCue__Create(TAudioCueCreation const*) */

long * TAudioCue__Create(TAudioCueCreation *arg1)

{
  char *pcVar1;
  long lVar2;
  uint64_t uVar3;
  int iVar4;
  uint32_t uVar5;
  long *plVar6;
  void *pvVar7;
  uint uVar8;
  char *__s1;
  uint uVar9;
  AutoLockSection aAStack_48 [24];
  
  plVar6 = operator_new(0x30);
  *(uint32_t *)(plVar6 + 1) = 100;
  *(uint32_t *)((long)plVar6 + 0xc) = 0xffffffff;
  plVar6[2] = (long)&DAT_008184c8 /* R:0.00016803004837129265f */;
  *(uint32_t *)(plVar6 + 3) = 0;
  plVar6[4] = 0;
  *(uint32_t *)(plVar6 + 5) = 0;
  *(uint32_t *)((long)plVar6 + 0x2c) = 0;
  plVar6[3] = *(long *)arg1;
  plVar6[4] = *(long *)(arg1 + 8);
  plVar6[5] = *(long *)(arg1 + 0x10);
  pcVar1 = *(char **)(arg1 + 8);
  strlen(pcVar1);
  std__string_assign((char *)(plVar6 + 2),(ulong)pcVar1);
  pcVar1 = (char *)plVar6[2];
  plVar6[4] = (long)pcVar1;
  AutoLockSection__AutoLockSection(aAStack_48,(CriticalSection *)cacheCueSection);
  uVar3 = pAudioCueCache._56_8_;
  uVar9 = (uint)(ushort)pAudioCueCache._40_2_;
  if (uVar9 != 0) {
    uVar8 = 0;
    do {
      __s1 = (char *)((ulong)(uVar8 & 0xffff) * 0x90 + uVar3);
      iVar4 = strcmp(__s1,pcVar1);
      if (iVar4 == 0) {
        *(int *)(__s1 + 0x88) = *(int *)(__s1 + 0x88) + 1;
        lVar2 = *(long *)(__s1 + 0x80);
        AutoLockSection__AutoLockSection__005b59d0(aAStack_48);
        *plVar6 = lVar2;
        if (lVar2 != 0) {
          *(uint32_t *)((long)plVar6 + 0xc) = 0xffffffff;
          return plVar6;
        }
        goto LAB_0057b3ef;
      }
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < (int)uVar9);
  }
  AutoLockSection__AutoLockSection__005b59d0(aAStack_48);
  *plVar6 = 0;
LAB_0057b3ef:
  uVar5 = Loader__GenerateLoadCallerID();
  *(uint32_t *)((long)plVar6 + 0xc) = uVar5;
  pvVar7 = (void *)audCreateCue(plVar6 + 3);
  *plVar6 = (long)pvVar7;
  AddCachedCue(pvVar7,(char *)plVar6[4]);
  *(uint32_t *)((long)plVar6 + 0xc) = 0xffffffff;
  return plVar6;
}

/* ======================================================================
 * Create__0057bd70  (Ghidra `Create` @ 0057bd70)
 * Signature: uint8_t __stdcall Create(AudioEffectFadeCreation * arg1)
 * Calls: `operator_new`
 * Called by: (none)
 */
/* AudioEffectFade__Create(AudioEffectFadeCreation const*) */

void AudioEffectFade__Create(AudioEffectFadeCreation *arg1)

{
  uint32_t uVar1;
  uint64_t *puVar2;
  
  puVar2 = operator_new(0x68);
  puVar2[2] = 0;
  puVar2[3] = 0;
  *(uint32_t *)(puVar2 + 4) = 0;
  *(uint32_t *)((long)puVar2 + 0x24) = 0;
  *(uint32_t *)(puVar2 + 5) = 0x3f800000;
  *puVar2 = &PTR_Update_005dbdd0;
  *(uint32_t *)((long)puVar2 + 0x5c) = 0;
  *(uint32_t *)(puVar2 + 0xc) = 0;
  *(uint32_t *)((long)puVar2 + 100) = 1;
  puVar2[6] = &PTR_Calculate_005c4510;
  puVar2[2] = *(uint64_t *)(arg1 + 8);
  puVar2[3] = *(uint64_t *)(arg1 + 0x10);
  *(uint32_t *)(puVar2 + 4) = *(uint32_t *)(arg1 + 0x18);
  *(uint32_t *)((long)puVar2 + 0x24) = *(uint32_t *)(arg1 + 0x1c);
  *(uint32_t *)(puVar2 + 1) = *(uint32_t *)arg1;
  uVar1 = *(uint32_t *)(arg1 + 0x20);
  *(uint32_t *)((long)puVar2 + 0x44) = 0;
  *(uint32_t *)(puVar2 + 8) = 0x3f800000;
  *(uint32_t *)(puVar2 + 9) = 0x3f800000;
  puVar2[7] = puVar2 + 5;
  *(uint32_t *)((long)puVar2 + 0x4c) = 0;
  *(uint32_t *)(puVar2 + 10) = uVar1;
  *(uint32_t *)((long)puVar2 + 0x54) = 0;
  *(uint32_t *)(puVar2 + 0xb) = 0;
  return;
}

/* ======================================================================
 * DrawBoundingShape  (Ghidra `DrawBoundingShape` @ 0057e2b0)
 * Signature: uint8_t __stdcall DrawBoundingShape(Bounds * arg1, ColorTemplate * arg2)
 * Calls: `TGraphics__AddPixelStage`, `TGraphics__Draw`, `TGraphics__GetMatrix`, `TGraphics__ResetPixelStages`, `TGraphics__SetMatrix`, `TGraphics__SetPixelColorConstant`, `TGraphics__SetRenderState`
 * Called by: `IsEntryTouchingBounds__00571480`
 */
/* DrawBoundingShape(Bounds const*, ColorTemplate<float> const&) */

void DrawBoundingShape(Bounds *arg1,ColorTemplate *arg2)

{
  Matrix4x4 *pMVar1;
  uint64_t local_b8;
  uint64_t local_b0;
  uint64_t local_a8;
  uint64_t local_a0;
  uint64_t local_98;
  uint64_t local_90;
  uint64_t local_88;
  uint64_t local_80;
  float local_78;
  uint32_t uStack_74;
  uint64_t local_70;
  uint32_t local_68;
  float fStack_64;
  uint64_t local_60;
  uint64_t local_58;
  uint64_t local_50;
  uint64_t local_48;
  uint64_t local_40;
  Vector2 local_38 [16];
  uint32_t local_28;
  uint32_t local_24;
  
  TGraphics__SetRenderState(Graphics,'\a',0);
  TGraphics__SetRenderState(Graphics,'\x01',7);
  TGraphics__SetRenderState(Graphics,'\x02',2);
  TGraphics__ResetPixelStages(Graphics);
  TGraphics__AddPixelStage(Graphics,1,0,0,0,0,1,0xffffffff);
  TGraphics__SetPixelColorConstant(Graphics,0,arg2);
  if (((byte)*arg1 & 0xf) == 0) {
    Matrix4x4__Get2DPos(local_38,(Matrix4x4 *)(arg1 + 0x44));
    local_b8 = *(uint64_t *)(arg1 + 0x44);
    local_b0 = *(uint64_t *)(arg1 + 0x4c);
    local_a8 = *(uint64_t *)(arg1 + 0x54);
    local_a0 = *(uint64_t *)(arg1 + 0x5c);
    local_98 = *(uint64_t *)(arg1 + 100);
    local_90 = *(uint64_t *)(arg1 + 0x6c);
    local_88 = *(uint64_t *)(arg1 + 0x74);
    local_80 = *(uint64_t *)(arg1 + 0x7c);
    local_78 = (float)matIdentity;
    local_70 = DAT_005ded48 /* R:0.0f */;
    local_60 = DAT_005ded58 /* R:0.0f */;
    local_58 = DAT_005ded60 /* R:0.0f */;
    local_50 = DAT_005ded68 /* R:1.0f */;
    local_48 = DAT_005ded70 /* R:0.0f */;
    local_40 = DAT_005ded78 /* R:0.0f */;
    _local_78 = CONCAT44((int)((ulong)matIdentity >> 0x20),
                         local_78 * *(float *)(arg1 + 0x8c) +
                         local_78 * *(float *)(arg1 + 0x8c));
    fStack_64 = (float)((ulong)DAT_005ded50 /* R:0.0f */ >> 0x20);
    _local_68 = CONCAT44(fStack_64 * *(float *)(arg1 + 0x90) +
                         fStack_64 * *(float *)(arg1 + 0x90),(int)DAT_005ded50 /* R:0.0f */);
    Matrix4x4__Multiply((Matrix4x4 *)&local_b8,(Matrix4x4 *)&local_78,(Matrix4x4 *)&local_b8);
    TGraphics__SetMatrix(Graphics,0,&local_b8);
    TGraphics__Draw(Graphics,CGR__pSingleQuadStream,(IndexBuffer *)0x0);
  }
  else if (((byte)*arg1 & 0xf) == 1) {
    local_28 = *(uint32_t *)(arg1 + 4);
    local_24 = local_28;
    pMVar1 = (Matrix4x4 *)TGraphics__GetMatrix(Graphics,0);
    Matrix4x4__Transformation2DRot
              (pMVar1,(Vector2 *)&local_28,(float *)0x0,(Vector2 *)(arg1 + 8));
    TGraphics__Draw(Graphics,CGR__pSingleQuadStream,(IndexBuffer *)0x0);
  }
  TGraphics__SetRenderState(Graphics,'\x02',1);
  return;
}

/* ======================================================================
 * DestroyCGR  (Ghidra `DestroyCGR` @ 005815e0)
 * Signature: uint8_t DestroyCGR(void)
 * Calls: `BaseResource__Release`
 * Called by: `TEngine__TEngine`, `TEngine__TEngine__00583e20`
 */
void DestroyCGR(void)

{
  BaseResource__Release(CGR__pSingleQuadStream,0);
  BaseResource__Release(CGR__pPos2TexDecl,0);
  BaseResource__Release(CGR__pPos2ColorDecl,0);
  BaseResource__Release(CGR__pPos2Decl,0);
  BaseResource__Release(CGR__pPos3TexDecl,0);
  return;
}

/* ======================================================================
 * DisableLoadingRenderThread  (Ghidra `DisableLoadingRenderThread` @ 005845b0)
 * Signature: uint8_t DisableLoadingRenderThread(void)
 * Calls: `CloseThread`, `SyncEvent__Reset`, `SyncEvent__Wait`
 * Called by: `FinalBoss__Update`, `GSMBMenu__TransitionInChapter`, `GSMBMenu__TransitionOutGameFromMenu`, `GSMBMenu__TransitionOutMenuFromGame`, `GSMBMenu__TransitionOutReloadChapter`, `GSuperMeatBoy__Initialize__00516f60`, `SMBChapterPlayWarpIntro`, `SMBChapter__ActivateWarpZone`, `SMBChapter__ActivateWarpZoneFromMenu`, `SMBChapter__PlayBossIntro` (+5 more)
 */
void DisableLoadingRenderThread(void)

{
  bLoadThreadRunning = 0;
  SyncEvent__Wait((SyncEvent *)LoadingRenderThreadFinished);
  SyncEvent__Reset((SyncEvent *)LoadingRenderThreadFinished);
  if (hRenderThreadHandle != (THREADHANDLESTRUCT *)0x0) {
    CloseThread(hRenderThreadHandle);
    hRenderThreadHandle = (THREADHANDLESTRUCT *)0x0;
  }
  return;
}

/* ======================================================================
 * DestroyTextEmitterFontResources  (Ghidra `DestroyTextEmitterFontResources` @ 00584950)
 * Signature: uint8_t __stdcall DestroyTextEmitterFontResources(void * arg1)
 * Calls: `BaseResource__Release`
 * Called by: `TextEmitterFont__TextEmitterFont`, `TextEmitterFont__TextEmitterFont__00584f80`
 */
/* DestroyTextEmitterFontResources(void*) */

void DestroyTextEmitterFontResources(void *arg1)

{
  BaseResource *this;
  ushort uVar1;
  long lVar2;
  int iVar3;
  
  uVar1 = *(ushort *)(*(long *)((long)arg1 + 0x18) + 0xc);
  if (uVar1 != 0) {
    lVar2 = 0;
    iVar3 = 0;
    do {
      this = *(BaseResource **)(*(long *)((long)arg1 + 0x58) + lVar2);
      if (this != (BaseResource *)0x0) {
        BaseResource__Release(this,0);
        *(uint64_t *)(*(long *)((long)arg1 + 0x58) + lVar2) = 0;
        uVar1 = *(ushort *)(*(long *)((long)arg1 + 0x18) + 0xc);
      }
      iVar3 = iVar3 + 1;
      lVar2 = lVar2 + 8;
    } while (iVar3 < (int)(uint)uVar1);
  }
  return;
}

/* ======================================================================
 * DestroyFontEmitterResources  (Ghidra `DestroyFontEmitterResources` @ 005849b0)
 * Signature: uint8_t __stdcall DestroyFontEmitterResources(void * arg1)
 * Calls: `BaseResource__Release`, `free`
 * Called by: `FontEmitter__FontEmitter`, `FontEmitter__FontEmitter__00584db0`, `FontEmitter__FontEmitter__005861d0`
 */
/* DestroyFontEmitterResources(void*) */

void DestroyFontEmitterResources(void *arg1)

{
  uint64_t *__ptr;
  
  __ptr = *(uint64_t **)((long)arg1 + 0x68);
  if ((BaseResource *)*__ptr != (BaseResource *)0x0) {
    BaseResource__Release((BaseResource *)*__ptr,0);
    **(uint64_t **)((long)arg1 + 0x68) = 0;
    __ptr = *(uint64_t **)((long)arg1 + 0x68);
  }
  free(__ptr);
  if (*(long **)((long)arg1 + 0x20) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005849ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)((long)arg1 + 0x20) + 0x18))();
    return;
  }
  return;
}

/* ======================================================================
 * CreateTextEmitterFontResources  (Ghidra `CreateTextEmitterFontResources` @ 00584ab0)
 * Signature: uint8_t __stdcall CreateTextEmitterFontResources(void * arg1)
 * Calls: `malloc`, `std__string_string`, `strlen`
 * Called by: `GLOBAL_sub_I_CreateTextEmitterFontResources`, `TextEmitterFont__TextEmitterFont`, `TextEmitterFont__TextEmitterFont__00584f80`
 */
/* WARNING: Removing unreachable block (ram,0x00584d09) */
/* WARNING: Removing unreachable block (ram,0x00584c93) */
/* WARNING: Removing unreachable block (ram,0x00584cfe) */
/* CreateTextEmitterFontResources(void*) */

void CreateTextEmitterFontResources(void *arg1)

{
  int *piVar1;
  char *__s;
  int iVar2;
  long lVar3;
  uint64_t uVar4;
  size_t sVar5;
  uint8_t *puVar6;
  void *pvVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  uint8_t *local_a8;
  uint64_t local_a0;
  uint32_t local_98;
  uint32_t local_94;
  uint32_t local_90;
  uint16_t local_8c;
  uint32_t local_84;
  uint8_t local_80;
  uint32_t local_7c;
  uint32_t local_78;
  long local_68 [2];
  uint8_t *local_58 [2];
  long local_48 [3];
  
  local_a8 = (uint8_t *)0x0;
  local_a0 = 0;
  local_98 = 0;
  local_94 = 0;
  local_90 = 0;
  local_8c = 0;
  local_84 = 0;
  local_80 = 1;
  local_7c = 0;
  local_78 = 0;
  std__string_string((string *)local_68,(string *)((long)arg1 + 0x50));
  local_58[0] = &DAT_008184c8 /* R:0.00016803004837129265f */;
  lVar9 = *(long *)((long)arg1 + 0x18);
  if (*(long *)((long)arg1 + 0x58) == 0) {
    pvVar7 = malloc((ulong)*(ushort *)(lVar9 + 0xc) << 3);
    *(void **)((long)arg1 + 0x58) = pvVar7;
  }
  if (*(short *)(lVar9 + 0xc) == 0) {
    puVar6 = &DAT_008184c8 /* R:0.00016803004837129265f */;
  }
  else {
    lVar9 = 0;
    iVar10 = 0;
    iVar8 = 0;
    do {
      lVar3 = *(long *)((long)arg1 + 0x20);
                    /* try { // try from 00584b5e to 00584b62 has its CatchHandler @ 00584c9e */
      std__string_string((string *)local_48,(string *)local_68);
      __s = (char *)(lVar3 + 4 + (long)iVar8);
      strlen(__s);
                    /* try { // try from 00584b7e to 00584b82 has its CatchHandler @ 00584c6a */
      std__string_append((char *)local_48,(ulong)__s);
                    /* try { // try from 00584b8d to 00584b91 has its CatchHandler @ 00584cf9 */
      std__string_assign((string *)local_58);
      if ((allocator *)(local_48[0] + -0x18) !=
          (allocator *)&std__string_Rep_S_empty_rep_storage) {
        LOCK();
        piVar1 = (int *)(local_48[0] + -8);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 < 1) {
          std__string_Rep_M_destroy((allocator *)(local_48[0] + -0x18));
        }
      }
      lVar3 = *(long *)((long)arg1 + 0x58);
      local_a8 = local_58[0];
                    /* try { // try from 00584bb8 to 00584bbc has its CatchHandler @ 00584c9e */
      uVar4 = Texture__Create((tagTextureCreation *)&local_a8);
      *(uint64_t *)(lVar3 + lVar9) = uVar4;
      iVar10 = iVar10 + 1;
      sVar5 = strlen(__s);
      iVar8 = iVar8 + 1 + (int)sVar5;
      lVar9 = lVar9 + 8;
      puVar6 = local_58[0];
    } while (iVar10 < (int)(uint)*(ushort *)(*(long *)((long)arg1 + 0x18) + 0xc));
  }
  if ((allocator *)(puVar6 + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage) {
    LOCK();
    piVar1 = (int *)(puVar6 + -8);
    iVar8 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar8 < 1) {
      std__string_Rep_M_destroy((allocator *)(puVar6 + -0x18));
    }
  }
  if ((allocator *)(local_68[0] + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage) {
    LOCK();
    piVar1 = (int *)(local_68[0] + -8);
    iVar8 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar8 < 1) {
      std__string_Rep_M_destroy((allocator *)(local_68[0] + -0x18));
    }
  }
  return;
}

/* ======================================================================
 * DetermineCursorStart  (Ghidra `DetermineCursorStart` @ 00585210)
 * Signature: uint8_t __stdcall DetermineCursorStart(char * arg1, int arg2, tagTextAlign arg3, float arg4, Vector2 * arg5)
 * Calls: `Vector2__operator_minus_assign`
 * Called by: (none)
 */
/* DetermineCursorStart(char const*, int, tagTextAlign, float, Vector2&) */

void DetermineCursorStart(float param_1_00,long arg1,int arg2,int arg4,Vector2 *arg5)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  float local_28 [4];
  float local_18 [6];
  
  cVar1 = *(char *)(arg1 + arg2);
  if ((cVar1 == '\0') || (cVar1 == '\n')) {
    iVar3 = 0;
  }
  else {
    pcVar2 = (char *)(arg1 + 1 + (long)arg2);
    iVar3 = 0;
    do {
      cVar1 = *pcVar2;
      iVar3 = iVar3 + 1;
      pcVar2 = pcVar2 + 1;
      if (cVar1 == '\0') break;
    } while (cVar1 != '\n');
  }
  if (arg4 == 0) {
    local_28[1] = 0.0;
    local_28[0] = param_1_00 * DAT_005be6e4 /* R:0.5f */ * (float)(iVar3 + 1);
    Vector2__operator_minus_assign(arg5,(Vector2 *)local_28);
  }
  else if (arg4 == 2) {
    local_18[1] = 0.0;
    local_18[0] = (float)(iVar3 + 1) * param_1_00;
    Vector2__operator_minus_assign(arg5,(Vector2 *)local_18);
    return;
  }
  return;
}

/* ======================================================================
 * CreateFontEmitterResources  (Ghidra `CreateFontEmitterResources` @ 005860a0)
 * Signature: uint8_t __stdcall CreateFontEmitterResources(void * arg1)
 * Calls: `BaseResource__Release`, `FontEmitter__FillVertexBuffer`, `VertexStream__VertexStream__005a6980`, `malloc`
 * Called by: `FontEmitter__FontEmitter`, `FontEmitter__FontEmitter__00584db0`, `FontEmitter__FontEmitter__005861d0`
 */
/* CreateFontEmitterResources(void*) */

void CreateFontEmitterResources(void *arg1)

{
  ushort uVar1;
  long *plVar2;
  void *pvVar3;
  VertexStream *pVVar4;
  long lVar5;
  long local_58;
  uint16_t local_50;
  uint32_t local_4c;
  uint64_t local_48;
  uint32_t local_40;
  uint32_t local_3c;
  uint32_t local_38;
  BaseResource *local_30 [2];
  
  plVar2 = _DEFAULT_UI_FONT;
  *(long **)((long)arg1 + 0x20) = _DEFAULT_UI_FONT;
  (**(code **)(*plVar2 + 0x10))();
  local_40 = 0;
  local_3c = 1;
  local_38 = 0;
  local_4c = 5;
  local_48 = 0;
  local_50 = 0x10;
  local_58 = (long)*(int *)((long)arg1 + 0x70) * 0x60;
  uVar1 = *(ushort *)(*(long *)(*(long *)((long)arg1 + 0x20) + 0x18) + 0xc);
  pvVar3 = malloc((long)(int)(uint)uVar1 << 3);
  *(void **)((long)arg1 + 0x68) = pvVar3;
  if (uVar1 != 0) {
    lVar5 = 0;
    do {
      local_30[0] = (BaseResource *)VertexBuffer__Create((tagVertexBufferCreation *)&local_58);
      pVVar4 = BaseResource__operator_new(0xa8,1);
                    /* try { // try from 00586176 to 0058617a has its CatchHandler @ 005861ac */
      VertexStream__VertexStream__005a6980(pVVar4,1,2,4,0,local_30,CGR__pPos2TexDecl);
      *(VertexStream **)(*(long *)((long)arg1 + 0x68) + lVar5) = pVVar4;
      lVar5 = lVar5 + 8;
      BaseResource__Release(local_30[0],0);
    } while (lVar5 != (ulong)(uVar1 - 1) * 8 + 8);
  }
  FontEmitter__FillVertexBuffer(arg1);
  return;
}

/* ======================================================================
 * CreateGraphicsSettingsForm  (Ghidra `CreateGraphicsSettingsForm` @ 00589ba0)
 * Signature: uint8_t __stdcall CreateGraphicsSettingsForm(void * arg1)
 * Calls: `ApplyFullScreen`, `ApplyWindowed`, `SDL_GetDisplayMode`, `SDL_GetNumDisplayModes`, `SprintW`, `UIButton__UIButton__005a2560`, `UIDropDown__AddDropdownElement`, `UIDropDown__UIDropDown__005a2c90`, `UIForm__AddFormElement`, `UIForm__UIForm__005a3ce0` (+9 more)
 * Called by: `GraphicsSettings__SetupGraphicsSettings`
 */
/* CreateGraphicsSettingsForm(void*) */

void CreateGraphicsSettingsForm(void *arg1)

{
  int *piVar1;
  short sVar2;
  uint64_t uVar3;
  UIFormElement *pUVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  UIForm *pUVar8;
  UILabel *pUVar9;
  UIDropDown *pUVar10;
  void *pvVar11;
  UIButton *pUVar12;
  void *pvVar13;
  ulong uVar14;
  ushort uVar15;
  short *psVar16;
  int iVar17;
  int iVar18;
  ulong uVar19;
  uint uVar20;
  uint64_t *puVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  uint8_t *local_138;
  uint8_t *local_130;
  uint8_t *local_128;
  uint8_t *local_120;
  uint8_t *local_118;
  uint64_t local_108;
  uint32_t local_100;
  uint32_t local_fc;
  uint64_t local_f8;
  uint8_t *local_f0;
  uint8_t local_e8 [4];
  int local_e4;
  int local_e0;
  uint8_t *local_c8;
  uint64_t local_c0;
  uint8_t *local_b8;
  uint8_t *local_a8 [2];
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
  uint32_t local_48;
  uint32_t local_44;
  
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = _DEFAULT_UIFORM_STYLE;
  local_fc = 0xf;
  pUVar8 = operator_new(0xa8);
                    /* try { // try from 00589bf1 to 00589bf5 has its CatchHandler @ 0058a2f2 */
  UIForm__UIForm__005a3ce0(pUVar8,(UIFormCreation *)&local_108);
  local_a8[0] = _DEFAULT_UILABEL_STYLE;
  GraphicsSettings__GRAPHICSFORM = pUVar8;
  pUVar9 = operator_new(0x50);
                    /* try { // try from 00589c21 to 00589c25 has its CatchHandler @ 0058a2f0 */
  UILabel__UILabel__005a5270(pUVar9,(UILabelCreation *)local_a8);
  UILabel__setText(pUVar9,L"Graphics Properties");
  UILabel__setAlign(pUVar9,0);
  local_98 = 0;
  local_94 = 0x43480000;
  Vector2__operator_assign((Vector2 *)(pUVar9 + 0x20),(Vector2 *)&local_98);
  UIForm__AddFormElement(GraphicsSettings__GRAPHICSFORM,(UIFormElement *)pUVar9);
  pUVar9 = operator_new(0x50);
                    /* try { // try from 00589c8b to 00589c8f has its CatchHandler @ 0058a2ee */
  UILabel__UILabel__005a5270(pUVar9,(UILabelCreation *)local_a8);
  UILabel__setText(pUVar9,L"Resolution");
  UILabel__setAlign(pUVar9,0);
  local_88 = 0xc2c80000;
  local_84 = 0x42c80000;
  Vector2__operator_assign((Vector2 *)(pUVar9 + 0x20),(Vector2 *)&local_88);
  UIForm__AddFormElement(GraphicsSettings__GRAPHICSFORM,(UIFormElement *)pUVar9);
  local_138 = _DEFAULT_UIDROPDOWN_STYLE;
  local_130 = _DEFAULT_UIBUTTON_STYLE;
  local_128 = _DEFAULT_UIBUTTON_STYLE;
  local_120 = _DEFAULT_UIFRAME_STYLE;
  local_118 = _DEFAULT_UIDROPDOWNFORM_STYLE;
  pUVar10 = operator_new(0x530);
                    /* try { // try from 00589d1f to 00589d23 has its CatchHandler @ 0058a2db */
  UIDropDown__UIDropDown__005a2c90(pUVar10,(UIDropDownCreation *)&local_138);
  pResolutionDropDown = pUVar10;
  iVar6 = SDL_GetNumDisplayModes(0);
  if (0 < iVar6) {
    iVar17 = 0;
    iVar22 = 0;
    iVar18 = 0x7fffffff;
    iVar24 = 0x7fffffff;
LAB_00589e7d:
    do {
      iVar7 = SDL_GetDisplayMode(0,iVar17,local_e8);
      iVar23 = iVar24;
      if (iVar7 != -1) {
        iVar23 = local_e4;
        if ((iVar24 <= local_e4) && (iVar23 = iVar24, iVar18 <= local_e0)) {
          iVar17 = iVar17 + 1;
          if (iVar17 == iVar6) break;
          goto LAB_00589e7d;
        }
        if (local_e0 < iVar18) {
          iVar18 = local_e0;
        }
        SprintW(&DAT_005dcc98 /* R:5.184804318001823e-44f */,0);
        UIDropDown__AddDropdownElement(pResolutionDropDown,strLargeStringW,(void *)(long)iVar22);
        iVar7 = local_e0;
        iVar24 = local_e4;
        uVar3 = pSelectableResolutions._56_8_;
        if (pSelectableResolutions._72_4_ == -0x5eef3582) {
          uVar19 = (ulong)(ushort)pSelectableResolutions._40_2_;
          if ((ushort)pSelectableResolutions._42_2_ <= (ushort)pSelectableResolutions._40_2_) {
            pSelectableResolutions._42_2_ =
                 pSelectableResolutions._42_2_ + pSelectableResolutions._52_2_;
            uVar14 = (ulong)pSelectableResolutions[0x2c];
            uVar19 = (ulong)(ushort)pSelectableResolutions._42_2_ * 8;
            pvVar13 = malloc(uVar14 + 0x10 + uVar19);
            pvVar11 = (void *)0x0;
            if (pvVar13 != (void *)0x0) {
              pvVar11 = (void *)((long)pvVar13 + 0x10U +
                                (uVar14 - ((long)pvVar13 + 0x10U) % uVar14) % uVar14);
              *(ulong *)((long)pvVar11 + -0x10) = uVar19;
              *(void **)((long)pvVar11 + -8) = pvVar13;
              if (uVar3 != 0) {
                uVar14 = *(ulong *)(uVar3 + -0x10);
                if (uVar19 <= *(ulong *)(uVar3 + -0x10)) {
                  uVar14 = uVar19;
                }
                memcpy(pvVar11,(void *)uVar3,uVar14);
                free(*(void **)(uVar3 + -8));
              }
            }
            uVar3 = pSelectableResolutions._64_8_;
            uVar15 = pSelectableResolutions._42_2_;
            pSelectableResolutions._56_8_ = pvVar11;
            if (pSelectableResolutions._64_8_ != 0) {
              uVar14 = (ulong)pSelectableResolutions[0x2c];
              uVar19 = (ulong)(ushort)pSelectableResolutions._42_2_ * 2;
              pvVar13 = malloc(uVar14 + 0x10 + uVar19);
              pvVar11 = (void *)0x0;
              if (pvVar13 != (void *)0x0) {
                pvVar11 = (void *)((long)pvVar13 + 0x10U +
                                  (uVar14 - ((long)pvVar13 + 0x10U) % uVar14) % uVar14);
                *(void **)((long)pvVar11 + -8) = pvVar13;
                *(ulong *)((long)pvVar11 + -0x10) = uVar19;
                uVar14 = *(ulong *)(uVar3 + -0x10);
                if (uVar19 <= *(ulong *)(uVar3 + -0x10)) {
                  uVar14 = uVar19;
                }
                memcpy(pvVar11,(void *)uVar3,uVar14);
                free(*(void **)(uVar3 + -8));
                uVar15 = pSelectableResolutions._42_2_;
              }
              uVar19 = (ulong)(ushort)pSelectableResolutions._40_2_;
              pSelectableResolutions._64_8_ = pvVar11;
              if (uVar15 <= (ushort)pSelectableResolutions._40_2_) goto LAB_0058a089;
              do {
                uVar14 = uVar19 & 0xffff;
                uVar20 = (int)uVar19 + 1;
                uVar19 = (ulong)uVar20;
                *(uint16_t *)(pSelectableResolutions._64_8_ + uVar14 * 2) = 0xffff;
              } while ((ushort)uVar20 < uVar15);
            }
            uVar19 = (ulong)(ushort)pSelectableResolutions._40_2_;
          }
LAB_0058a089:
          if ((pSelectableResolutions._48_4_ == 1) && (pSelectableResolutions._42_2_ != 0)) {
            sVar5 = 1;
            sVar2 = *(short *)pSelectableResolutions._64_8_;
            psVar16 = (short *)pSelectableResolutions._64_8_;
            while (sVar2 != -1) {
              psVar16 = psVar16 + 1;
              if (sVar5 == pSelectableResolutions._42_2_) goto LAB_00589e55;
              sVar5 = sVar5 + 1;
              sVar2 = *psVar16;
            }
            *psVar16 = (short)uVar19;
            uVar19 = (ulong)(ushort)pSelectableResolutions._40_2_;
          }
        }
        else {
          uVar19 = (ulong)pSelectableResolutions[0x2c];
          pSelectableResolutions._48_4_ = 0;
          pvVar11 = malloc(uVar19 + 0x38);
          puVar21 = (uint64_t *)0x0;
          if (pvVar11 != (void *)0x0) {
            puVar21 = (uint64_t *)
                      ((long)pvVar11 + 0x10U + (uVar19 - ((long)pvVar11 + 0x10U) % uVar19) % uVar19)
            ;
            puVar21[-2] = 0x28;
            puVar21[-1] = pvVar11;
          }
          uVar19 = 0;
          pSelectableResolutions._56_8_ = puVar21;
          *puVar21 = 0;
          puVar21[1] = 0;
          puVar21[2] = 0;
          puVar21[3] = 0;
          puVar21[4] = 0;
          pSelectableResolutions._40_2_ = 0;
          pSelectableResolutions._42_2_ = 5;
          pSelectableResolutions._72_4_ = 0xa110ca7e;
          pSelectableResolutions._52_2_ = 5;
        }
LAB_00589e55:
        iVar22 = iVar22 + 1;
        piVar1 = (int *)(pSelectableResolutions._56_8_ + uVar19 * 8);
        *piVar1 = iVar24;
        piVar1[1] = iVar7;
        pSelectableResolutions._40_2_ = pSelectableResolutions._40_2_ + 1;
      }
      iVar17 = iVar17 + 1;
      iVar24 = iVar23;
    } while (iVar17 != iVar6);
  }
  pUVar10 = pResolutionDropDown;
  local_78 = 0xc2c80000;
  local_74 = 0x42480000;
  *(uint32_t *)(pResolutionDropDown + 0x518) = 7;
  Vector2__operator_assign((Vector2 *)(pUVar10 + 0x20),(Vector2 *)&local_78);
  local_68 = 0x43480000;
  local_64 = 0x41c80000;
  Vector2__operator_assign((Vector2 *)(pResolutionDropDown + 0x28),(Vector2 *)&local_68);
  pUVar8 = GraphicsSettings__GRAPHICSFORM;
  pUVar4 = (UIFormElement *)pResolutionDropDown;
  *(uint32_t *)(*(long *)(pResolutionDropDown + 0x58) + 100) = 0;
  *(uint32_t *)(*(long *)(pUVar4 + 0x58) + 0x60) = 1;
  UIForm__AddFormElement(pUVar8,pUVar4);
  local_c8 = _DEFAULT_UILABEL_STYLE;
  local_c0 = 0;
  local_b8 = _DEFAULT_UIBUTTON_STYLE;
  pUVar12 = operator_new(0x70);
                    /* try { // try from 00589f8b to 00589f8f has its CatchHandler @ 0058a2f6 */
  UIButton__UIButton__005a2560(pUVar12,(UIButtonCreation *)&local_c8);
  local_58 = 0x43160000;
  local_54 = 0xc32f0000;
  Vector2__operator_assign((Vector2 *)(pUVar12 + 0x20),(Vector2 *)&local_58);
  UILabel__setText(*(UILabel **)(pUVar12 + 0x50),L"Windowed");
  pUVar8 = GraphicsSettings__GRAPHICSFORM;
  *(code **)(pUVar12 + 0x40) = ApplyWindowed;
  UIForm__AddFormElement(pUVar8,(UIFormElement *)pUVar12);
  pUVar12 = operator_new(0x70);
                    /* try { // try from 00589ff4 to 00589ff8 has its CatchHandler @ 0058a2f4 */
  UIButton__UIButton__005a2560(pUVar12,(UIButtonCreation *)&local_c8);
  local_48 = 0xc3160000;
  local_44 = 0xc32f0000;
  Vector2__operator_assign((Vector2 *)(pUVar12 + 0x20),(Vector2 *)&local_48);
  UILabel__setText(*(UILabel **)(pUVar12 + 0x50),L"Full Screen");
  pUVar8 = GraphicsSettings__GRAPHICSFORM;
  *(code **)(pUVar12 + 0x40) = ApplyFullScreen;
  UIForm__AddFormElement(pUVar8,(UIFormElement *)pUVar12);
  UIForm__setEdgePadding(GraphicsSettings__GRAPHICSFORM,0x19,0x19);
  return;
}

/* ======================================================================
 * DestroyGraphicsSettingForm  (Ghidra `DestroyGraphicsSettingForm` @ 0058a310)
 * Signature: uint8_t __stdcall DestroyGraphicsSettingForm(void * arg1)
 * Calls: `free`
 * Called by: (none)
 */
/* DestroyGraphicsSettingForm(void*) */

void DestroyGraphicsSettingForm(void *arg1)

{
  if (pSelectableResolutions._72_4_ == -0x5eef3582) {
    pSelectableResolutions._72_4_ = 0;
    free(*(void **)(pSelectableResolutions._56_8_ + -8));
    if (pSelectableResolutions._48_4_ == 1) {
      free(*(void **)(pSelectableResolutions._64_8_ + -8));
    }
    pSelectableResolutions._72_4_ = 0;
    pSelectableResolutions._42_2_ = 0;
    pSelectableResolutions._40_2_ = 0;
    pSelectableResolutions._56_8_ = 0;
    pSelectableResolutions._64_8_ = 0;
  }
  if (GraphicsSettings__GRAPHICSFORM != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0058a337. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*GraphicsSettings__GRAPHICSFORM + 8))();
    return;
  }
  return;
}

/* ======================================================================
 * Create__0058a5b0  (Ghidra `Create` @ 0058a5b0)
 * Signature: uint8_t __stdcall Create(tagIndexBufferCreation * arg1)
 * Calls: `gfxCreateIndexBuffer`
 * Called by: (none)
 */
/* IndexBuffer__Create(tagIndexBufferCreation const*) */

uint64_t * IndexBuffer__Create(tagIndexBufferCreation *arg1)

{
  ushort uVar1;
  ulong uVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  
  puVar3 = BaseResource__operator_new(0x28,1);
  *(uint32_t *)(puVar3 + 1) = 1;
  *puVar3 = &PTR__IndexBuffer_005dcd50;
  puVar3[2] = 0;
  uVar4 = gfxCreateIndexBuffer(arg1);
  puVar3[4] = uVar4;
  uVar2 = *(ulong *)arg1;
  puVar3[2] = uVar2;
  uVar1 = *(ushort *)(arg1 + 8);
  *(ushort *)(puVar3 + 3) = uVar1;
  *(int *)((long)puVar3 + 0x1c) = (int)(uVar2 / uVar1);
  return puVar3;
}

/* ======================================================================
 * Create__005956a0  (Ghidra `Create` @ 005956a0)
 * Signature: uint8_t __stdcall Create(tagModelCreation * arg1)
 * Calls: `Matrix4x4__operator_assign`, `ModelLoader__ModelLoader`, `ModelLoader__ModelLoader__005942a0`, `ResourcePool__FindResource`, `ResourcePool__SetCacheName`, `TGraphics__GPUState_GPUState`
 * Called by: (none)
 */
/* Model__Create(tagModelCreation*) */

BaseResource * Model__Create(tagModelCreation *arg1)

{
  uint32_t *puVar1;
  uint32_t *puVar2;
  ResourcePool *this;
  BaseResource *pBVar3;
  ModelLoader aMStack_a8 [128];
  long *local_28;
  uint64_t local_20;
  
  pBVar3 = (BaseResource *)ResourcePool__FindResource(Resources,*(char **)arg1);
  if (pBVar3 != (BaseResource *)0x0) {
    puVar1 = *(uint32_t **)(pBVar3 + 0x3d8);
    puVar2 = *(uint32_t **)(arg1 + 8);
    *puVar2 = *puVar1;
    puVar2[1] = puVar1[1];
    puVar2[2] = puVar1[2];
    puVar2[3] = puVar1[3];
    puVar2[4] = puVar1[4];
    puVar2[5] = puVar1[5];
    puVar2[6] = puVar1[6];
    puVar2[7] = puVar1[7];
    puVar2[8] = puVar1[8];
    Matrix4x4__operator_assign((Matrix4x4 *)(puVar2 + 9),(Matrix4x4 *)(puVar1 + 9));
    Matrix4x4__operator_assign((Matrix4x4 *)(puVar2 + 0x19),(Matrix4x4 *)(puVar1 + 0x19));
    return pBVar3;
  }
  pBVar3 = BaseResource__operator_new(0x3e0,1);
  *(uint8_t ***)pBVar3 = &PTR__BaseResource_005dbe30;
  *(uint32_t *)(pBVar3 + 8) = 1;
                    /* try { // try from 00595774 to 00595778 has its CatchHandler @ 00595812 */
  TGraphics__GPUState_GPUState((GPUState *)(pBVar3 + 0x10));
  *(uint8_t ***)pBVar3 = &PTR__Model_005dd0b0;
  *(uint64_t *)(pBVar3 + 0x3c0) = 0;
  *(uint64_t *)(pBVar3 + 0x3c8) = 0;
  *(uint64_t *)(pBVar3 + 0x3d0) = 0;
  ModelLoader__ModelLoader__005942a0(aMStack_a8,arg1);
  *(long **)(pBVar3 + 0x3c0) = local_28;
  *(uint64_t *)(pBVar3 + 0x3c8) = local_20;
                    /* try { // try from 005957cd to 005957fa has its CatchHandler @ 00595831 */
  (**(code **)(*local_28 + 0x10))();
  (**(code **)(**(long **)(pBVar3 + 0x3c8) + 0x10))();
  this = Resources;
  *(uint64_t *)(pBVar3 + 0x3d8) = *(uint64_t *)(arg1 + 8);
  ResourcePool__SetCacheName(this,pBVar3,*(char **)arg1);
  ModelLoader__ModelLoader(aMStack_a8);
  return pBVar3;
}

/* ======================================================================
 * Create__00595df0  (Ghidra `Create` @ 00595df0)
 * Signature: uint8_t __stdcall Create(tagShaderCreation * arg1)
 * Calls: `ResourcePool__FindResource`, `ResourcePool__SetCacheName`, `TGraphics__AcquireDevice`, `TGraphics__ReleaseDevice`, `gfxCreatePixelShader`, `gfxCreateVertexShader`
 * Called by: (none)
 */
/* PixelShader__Create(tagShaderCreation*) */

BaseResource * PixelShader__Create(tagShaderCreation *arg1)

{
  int iVar1;
  BaseResource *pBVar2;
  uint64_t uVar3;
  char *pcVar4;
  
  if ((*(long *)(arg1 + 8) == 0) && (*(long *)arg1 == 0)) {
    Error__ThrowFatalError("There was no shader name specified. strFileName was NULL");
  }
  if ((*(int *)(arg1 + 0x30) == 1) &&
     ((pcVar4 = *(char **)(arg1 + 0x18), pcVar4 != (char *)0x0 || (*(long *)arg1 != 0)))) {
    if (*(int *)(arg1 + 0x28) != 0) {
      pcVar4 = *(char **)arg1;
    }
    pBVar2 = (BaseResource *)ResourcePool__FindResource(Resources,pcVar4);
    if (pBVar2 != (BaseResource *)0x0) {
      return pBVar2;
    }
  }
  TGraphics__AcquireDevice();
  iVar1 = *(int *)(arg1 + 0x20);
  if ((iVar1 == 2) || (iVar1 == 0)) {
    pBVar2 = BaseResource__operator_new(0x18,1);
    *(uint32_t *)(pBVar2 + 8) = 1;
    *(uint8_t ***)pBVar2 = &PTR__VertexShader_005dde70;
    uVar3 = gfxCreateVertexShader(arg1);
    *(uint64_t *)(pBVar2 + 0x10) = uVar3;
  }
  else if ((iVar1 == 3) || (pBVar2 = (BaseResource *)0x0, iVar1 == 1)) {
    pBVar2 = BaseResource__operator_new(0x18,1);
    *(uint32_t *)(pBVar2 + 8) = 1;
    *(uint8_t ***)pBVar2 = &PTR__PixelShader_005dd170;
    uVar3 = gfxCreatePixelShader(arg1);
    *(uint64_t *)(pBVar2 + 0x10) = uVar3;
  }
  TGraphics__ReleaseDevice();
  if ((*(int *)(arg1 + 0x30) == 1) &&
     ((pcVar4 = *(char **)(arg1 + 0x18), pcVar4 != (char *)0x0 || (*(long *)arg1 != 0)))) {
    if (*(int *)(arg1 + 0x28) != 0) {
      pcVar4 = *(char **)arg1;
    }
    ResourcePool__SetCacheName(Resources,pBVar2,pcVar4);
  }
  *(uint32_t *)(arg1 + 0x2c) = 1;
  return pBVar2;
}

/* ======================================================================
 * DestroyRibbonEmitterResources  (Ghidra `DestroyRibbonEmitterResources` @ 0059a4c0)
 * Signature: uint8_t DestroyRibbonEmitterResources(void)
 * Calls: `BaseResource__Release`
 * Called by: `RibbonEmitter__RibbonEmitter`, `RibbonEmitter__RibbonEmitter__0059ac20`
 */
void DestroyRibbonEmitterResources(long arg1)

{
  if (*(BaseResource **)(arg1 + 0x60) != (BaseResource *)0x0) {
    BaseResource__Release(*(BaseResource **)(arg1 + 0x60),0);
    *(uint64_t *)(arg1 + 0x60) = 0;
  }
  if (*(BaseResource **)(arg1 + 0x58) != (BaseResource *)0x0) {
    BaseResource__Release(*(BaseResource **)(arg1 + 0x58),0);
    *(uint64_t *)(arg1 + 0x58) = 0;
  }
  if (*(BaseResource **)(arg1 + 0x68) != (BaseResource *)0x0) {
    BaseResource__Release(*(BaseResource **)(arg1 + 0x68),0);
    *(uint64_t *)(arg1 + 0x68) = 0;
  }
  return;
}

/* ======================================================================
 * CreateRibbonEmitterResources  (Ghidra `CreateRibbonEmitterResources` @ 0059a510)
 * Signature: uint8_t CreateRibbonEmitterResources(void)
 * Calls: `VertexStream__VertexStream__005a6980`
 * Called by: `RibbonEmitter__RibbonEmitter`, `RibbonEmitter__RibbonEmitter__0059ac20`
 */
void CreateRibbonEmitterResources(long arg1)

{
  uint64_t uVar1;
  VertexStream *pVVar2;
  long local_48;
  uint16_t local_40;
  uint32_t local_3c;
  uint64_t local_38;
  uint32_t local_30;
  uint32_t local_2c;
  uint32_t local_28;
  
  local_3c = 5;
  local_38 = 0;
  local_30 = 0;
  local_2c = 1;
  local_28 = 0;
  local_40 = 0xc;
  local_48 = (long)*(int *)(arg1 + 0x48) * 0x18;
  uVar1 = VertexBuffer__Create((tagVertexBufferCreation *)&local_48);
  *(uint64_t *)(arg1 + 0x58) = uVar1;
  uVar1 = VertexBuffer__Create((tagVertexBufferCreation *)&local_48);
  *(uint64_t *)(arg1 + 0x60) = uVar1;
  pVVar2 = BaseResource__operator_new(0xa8,1);
                    /* try { // try from 0059a5af to 0059a5b3 has its CatchHandler @ 0059a5bf */
  VertexStream__VertexStream__005a6980
            (pVVar2,1,*(int *)(arg1 + 0x48) * 2 + -2,*(int *)(arg1 + 0x48) * 2,2,
             arg1 + 0x60,CGR__pPos2ColorDecl);
  *(VertexStream **)(arg1 + 0x68) = pVVar2;
  return;
}

/* ======================================================================
 * DestroySetPieceWayPointResources  (Ghidra `DestroySetPieceWayPointResources` @ 0059c050)
 * Signature: uint8_t __stdcall DestroySetPieceWayPointResources(void * arg1)
 * Calls: `BaseResource__Release`
 * Called by: `GSetPieceWayPoints__GSetPieceWayPoints`, `GSetPieceWayPoints__GSetPieceWayPoints__0059efd0`
 */
/* DestroySetPieceWayPointResources(void*) */

void DestroySetPieceWayPointResources(void *arg1)

{
  BaseResource__Release(pSetPieceWayPointStream,0);
  return;
}

/* ======================================================================
 * CreateSetPieceWayPointResources  (Ghidra `CreateSetPieceWayPointResources` @ 0059c060)
 * Signature: uint8_t __stdcall CreateSetPieceWayPointResources(void * arg1)
 * Calls: `BaseResource__Release`, `VertexStream__VertexStream__005a6980`
 * Called by: `GSetPieceWayPoints__GSetPieceWayPoints`, `GSetPieceWayPoints__GSetPieceWayPoints__0059efd0`
 */
/* CreateSetPieceWayPointResources(void*) */

void CreateSetPieceWayPointResources(void *arg1)

{
  VertexStream *pVVar1;
  uint64_t local_38;
  uint16_t local_30;
  uint32_t local_2c;
  uint64_t local_28;
  uint32_t local_20;
  uint32_t local_1c;
  uint32_t local_18;
  BaseResource *local_10;
  
  local_2c = 5;
  local_28 = 0;
  local_20 = 0;
  local_1c = 1;
  local_18 = 0;
  local_38 = 0xa0;
  local_30 = 8;
  local_10 = (BaseResource *)VertexBuffer__Create((tagVertexBufferCreation *)&local_38);
  pVVar1 = BaseResource__operator_new(0xa8,1);
                    /* try { // try from 0059c0e7 to 0059c0eb has its CatchHandler @ 0059c105 */
  VertexStream__VertexStream__005a6980(pVVar1,1,10,0x14,5,&local_10,CGR__pPos2Decl);
  pSetPieceWayPointStream = pVVar1;
  BaseResource__Release(local_10,0);
  return;
}

/* ======================================================================
 * Create__005a0a60  (Ghidra `Create` @ 005a0a60)
 * Signature: uint8_t __stdcall Create(tagTextureCreation * arg1)
 * Calls: `ResourcePool__FindResource`, `ResourcePool__SetCacheName`, `TGraphics__AcquireDevice`, `TGraphics__ReleaseDevice`, `gfxCreateTexture`
 * Called by: (none)
 */
/* Texture__Create(tagTextureCreation*) */

BaseResource * Texture__Create(tagTextureCreation *arg1)

{
  BaseResource *pBVar1;
  uint64_t uVar2;
  
  if (*(char **)arg1 != (char *)0x0) {
    File__Exists(*(char **)arg1,1);
    pBVar1 = (BaseResource *)ResourcePool__FindResource(Resources,*(char **)arg1);
    if (pBVar1 != (BaseResource *)0x0) {
      return pBVar1;
    }
  }
  TGraphics__AcquireDevice();
  pBVar1 = BaseResource__operator_new(0x28,*(int *)(arg1 + 0x2c));
  *(uint32_t *)(pBVar1 + 8) = 1;
  *(uint8_t ***)pBVar1 = &PTR__Texture_005dd630;
  *(uint32_t *)(pBVar1 + 0x20) = 0;
  uVar2 = gfxCreateTexture(arg1);
  *(uint64_t *)(pBVar1 + 0x18) = uVar2;
  *(uint32_t *)(pBVar1 + 0xc) = *(uint32_t *)(arg1 + 0x14);
  *(uint32_t *)(pBVar1 + 0x10) = *(uint32_t *)(arg1 + 0x18);
  *(uint *)(pBVar1 + 0x14) = (uint)(((byte)arg1[0x24] & 0x10) != 0);
  *(uint32_t *)(arg1 + 0x30) = 1;
  if (*(char **)arg1 != (char *)0x0) {
    ResourcePool__SetCacheName(Resources,pBVar1,*(char **)arg1);
  }
  _uNumTextures = _uNumTextures + 1;
  TGraphics__ReleaseDevice();
  return pBVar1;
}

/* ======================================================================
 * DestroyUIResources  (Ghidra `DestroyUIResources` @ 005a1d20)
 * Signature: uint8_t __stdcall DestroyUIResources(void * arg1)
 * Calls: (none)
 * Called by: `SetupUI`, `ShutdownUI`
 */
/* DestroyUIResources(void*) */

void DestroyUIResources(void *arg1)

{
                    /* WARNING: Could not recover jumptable at 0x005a1d2e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*_DEFAULT_UI_FONT + 0x18))();
  return;
}

/* ======================================================================
 * CreateUIResources  (Ghidra `CreateUIResources` @ 005a1d70)
 * Signature: uint8_t __stdcall CreateUIResources(void * arg1)
 * Calls: `System_GetLanguage`, `TextEmitterFont__TextEmitterFont__00584f80`
 * Called by: `SetupUI`, `ShutdownUI`
 */
/* CreateUIResources(void*) */

void CreateUIResources(void *arg1)

{
  uint32_t uVar1;
  TextEmitterFont *this;
  
  if (_DEFAULT_UI_FONT == (TextEmitterFont *)0x0) {
    uVar1 = System_GetLanguage();
    switch(uVar1) {
    default:
      this = BaseResource__operator_new(0x60,0);
                    /* try { // try from 005a1db1 to 005a1db5 has its CatchHandler @ 005a1e4a */
      TextEmitterFont__TextEmitterFont__00584f80(this,"resources/Fonts/EFIGS.fnt");
      break;
    case 2:
      this = BaseResource__operator_new(0x60,0);
                    /* try { // try from 005a1e40 to 005a1e44 has its CatchHandler @ 005a1eba */
      TextEmitterFont__TextEmitterFont__00584f80(this,"resources/Fonts/Japanese.fnt");
      break;
    case 7:
      this = BaseResource__operator_new(0x60,0);
                    /* try { // try from 005a1e00 to 005a1e04 has its CatchHandler @ 005a1e9e */
      TextEmitterFont__TextEmitterFont__00584f80(this,"resources/Fonts/Korean.fnt");
      break;
    case 8:
    case 10:
      this = BaseResource__operator_new(0x60,0);
                    /* try { // try from 005a1e20 to 005a1e24 has its CatchHandler @ 005a1e82 */
      TextEmitterFont__TextEmitterFont__00584f80(this,"resources/Fonts/Chinese.fnt");
      break;
    case 0xc:
      this = BaseResource__operator_new(0x60,0);
                    /* try { // try from 005a1de8 to 005a1dec has its CatchHandler @ 005a1e66 */
      TextEmitterFont__TextEmitterFont__00584f80(this,"resources/Fonts/Russian.fnt");
    }
    _DEFAULT_UI_FONT = this;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x005a1d8d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)_DEFAULT_UI_FONT + 0x10))();
  return;
}

/* ======================================================================
 * DecreaseScroll  (Ghidra `DecreaseScroll` @ 005a53a0)
 * Signature: uint8_t __stdcall DecreaseScroll(void * arg1)
 * Calls: (none)
 * Called by: `UIScrollBar__UIScrollBar__005a5900`
 */
/* DecreaseScroll(void*) */

void DecreaseScroll(void *arg1)

{
  float fVar1;
  
  fVar1 = *(float *)arg1 - DAT_005c72d4 /* R:0.05000000074505806f */;
  if (*(float *)arg1 - DAT_005c72d4 /* R:0.05000000074505806f */ <= DAT_005bf760 /* R:0.0f */) {
    fVar1 = DAT_005bf760 /* R:0.0f */;
  }
  *(float *)arg1 = fVar1;
  return;
}

/* ======================================================================
 * Create__005a63e0  (Ghidra `Create` @ 005a63e0)
 * Signature: uint8_t __stdcall Create(tagVertexBufferCreation * arg1)
 * Calls: `TGraphics__AcquireDevice`, `TGraphics__ReleaseDevice`, `gfxCreateVertexBuffer`
 * Called by: (none)
 */
/* VertexBuffer__Create(tagVertexBufferCreation const*) */

uint64_t * VertexBuffer__Create(tagVertexBufferCreation *arg1)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  
  TGraphics__AcquireDevice();
  puVar1 = BaseResource__operator_new(0x30,*(int *)(arg1 + 0x20));
  *(uint32_t *)(puVar1 + 1) = 1;
  *puVar1 = &PTR__VertexBuffer_005ddd90;
  puVar1[2] = 0;
  *(uint32_t *)((long)puVar1 + 0x1c) = 0;
  uVar2 = gfxCreateVertexBuffer(arg1);
  puVar1[5] = uVar2;
  puVar1[2] = *(uint64_t *)arg1;
  *(uint16_t *)(puVar1 + 3) = *(uint16_t *)(arg1 + 8);
  *(uint32_t *)((long)puVar1 + 0x1c) = *(uint32_t *)(arg1 + 0x18);
  *(uint32_t *)(puVar1 + 4) = *(uint32_t *)(arg1 + 0x1c);
  TGraphics__ReleaseDevice();
  _uNumVertexBuffers = _uNumVertexBuffers + 1;
  return puVar1;
}

/* ======================================================================
 * Create__005a66b0  (Ghidra `Create` @ 005a66b0)
 * Signature: uint8_t __stdcall Create(tagVertexDeclarationCreation * arg1)
 * Calls: `TGraphics__AcquireDevice`, `TGraphics__ReleaseDevice`, `gfxCreateVertexDeclaration`, `malloc`, `memcpy`
 * Called by: (none)
 */
/* VertexDeclaration__Create(tagVertexDeclarationCreation const*) */

uint64_t * VertexDeclaration__Create(tagVertexDeclarationCreation *arg1)

{
  ushort uVar1;
  uint64_t *puVar2;
  void *__dest;
  uint64_t uVar3;
  size_t __size;
  
  puVar2 = BaseResource__operator_new(0x28,*(int *)(arg1 + 0xc));
  *(uint32_t *)(puVar2 + 1) = 1;
  *puVar2 = &PTR__VertexDeclaration_005dde10;
  uVar1 = *(ushort *)(arg1 + 8);
  *(ushort *)(puVar2 + 4) = uVar1;
  __size = (ulong)uVar1 << 4;
  __dest = malloc(__size);
  puVar2[3] = __dest;
  if (__dest != *(void **)arg1) {
    memcpy(__dest,*(void **)arg1,__size);
  }
  TGraphics__AcquireDevice();
  uVar3 = gfxCreateVertexDeclaration(arg1);
  puVar2[2] = uVar3;
  TGraphics__ReleaseDevice();
  return puVar2;
}

/* ======================================================================
 * Create__005a67f0  (Ghidra `Create` @ 005a67f0)
 * Signature: uint8_t __stdcall Create(tagShaderCreation * arg1)
 * Calls: `ResourcePool__FindResource`, `ResourcePool__SetCacheName`, `TGraphics__AcquireDevice`, `TGraphics__ReleaseDevice`, `gfxCreatePixelShader`, `gfxCreateVertexShader`
 * Called by: (none)
 */
/* VertexShader__Create(tagShaderCreation*) */

BaseResource * VertexShader__Create(tagShaderCreation *arg1)

{
  int iVar1;
  BaseResource *pBVar2;
  uint64_t uVar3;
  char *pcVar4;
  
  if ((*(long *)(arg1 + 8) == 0) && (*(long *)arg1 == 0)) {
    Error__ThrowFatalError("There was no shader name specified. strFileName was NULL");
  }
  if ((*(int *)(arg1 + 0x30) == 1) &&
     ((pcVar4 = *(char **)(arg1 + 0x18), pcVar4 != (char *)0x0 || (*(long *)arg1 != 0)))) {
    if (*(int *)(arg1 + 0x28) != 0) {
      pcVar4 = *(char **)arg1;
    }
    pBVar2 = (BaseResource *)ResourcePool__FindResource(Resources,pcVar4);
    if (pBVar2 != (BaseResource *)0x0) {
      return pBVar2;
    }
  }
  TGraphics__AcquireDevice();
  iVar1 = *(int *)(arg1 + 0x20);
  if ((iVar1 == 2) || (iVar1 == 0)) {
    pBVar2 = BaseResource__operator_new(0x18,1);
    *(uint32_t *)(pBVar2 + 8) = 1;
    *(uint8_t ***)pBVar2 = &PTR__VertexShader_005dde70;
    uVar3 = gfxCreateVertexShader(arg1);
    *(uint64_t *)(pBVar2 + 0x10) = uVar3;
  }
  else if ((iVar1 == 3) || (pBVar2 = (BaseResource *)0x0, iVar1 == 1)) {
    pBVar2 = BaseResource__operator_new(0x18,1);
    *(uint32_t *)(pBVar2 + 8) = 1;
    *(uint8_t ***)pBVar2 = &PTR__PixelShader_005dd170;
    uVar3 = gfxCreatePixelShader(arg1);
    *(uint64_t *)(pBVar2 + 0x10) = uVar3;
  }
  TGraphics__ReleaseDevice();
  if ((*(int *)(arg1 + 0x30) == 1) &&
     ((pcVar4 = *(char **)(arg1 + 0x18), pcVar4 != (char *)0x0 || (*(long *)arg1 != 0)))) {
    if (*(int *)(arg1 + 0x28) != 0) {
      pcVar4 = *(char **)arg1;
    }
    ResourcePool__SetCacheName(Resources,pBVar2,pcVar4);
  }
  *(uint32_t *)(arg1 + 0x2c) = 1;
  return pBVar2;
}

/* ======================================================================
 * DestroyLocalizationDatabase  (Ghidra `DestroyLocalizationDatabase` @ 005b6c90)
 * Signature: uint8_t DestroyLocalizationDatabase(void)
 * Calls: `free`
 * Called by: `TEngine__TEngine__00583e20`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DestroyLocalizationDatabase() */

void DestroyLocalizationDatabase(void)

{
  free(pLocalizedDatabase);
  free(pLocalizedStrings);
  return;
}

/* ======================================================================
 * DeleteFile  (Ghidra `DeleteFile` @ 005b8010)
 * Signature: uint8_t __stdcall DeleteFile(char * arg1)
 * Calls: `FixFileCase`, `unlink`
 * Called by: (none)
 */
/* WARNING: Removing unreachable block (ram,0x005b806c) */
/* File__DeleteFile(char const*) */

int File__DeleteFile(char *arg1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char *local_18 [3];
  
  FixFileCase((char *)local_18);
  iVar3 = unlink(local_18[0]);
  if ((allocator *)(local_18[0] + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage) {
    LOCK();
    piVar1 = (int *)(local_18[0] + -8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 < 1) {
      std__string_Rep_M_destroy((allocator *)(local_18[0] + -0x18));
    }
  }
  return iVar3;
}

/* ======================================================================
 * CreateWorkerThread  (Ghidra `CreateWorkerThread` @ 005b86f0)
 * Signature: uint8_t __stdcall CreateWorkerThread(tagThreadCreate * arg1)
 * Calls: `malloc`, `pthread_create`, `pthread_getschedparam`, `pthread_setschedparam`, `sched_get_priority_max`, `sched_get_priority_min`
 * Called by: `AudioFile__AudioFile`, `EnableLoadingRenderThread`, `GSMBChapterData__SaveData`, `SMBReplay__WriteReplayData`, `SQLDatabase__Connect`, `SaveData`
 */
/* CreateWorkerThread(tagThreadCreate const*) */

pthread_t * CreateWorkerThread(tagThreadCreate *arg1)

{
  int iVar1;
  pthread_t *__newthread;
  sched_param local_28 [3];
  int local_1c [3];
  
  __newthread = malloc(0x10);
  *(uint8_t *)((long)__newthread + 9) = 0;
  *(uint8_t *)(__newthread + 1) = 1;
  pthread_create(__newthread,(pthread_attr_t *)0x0,*(__start_routine **)arg1,
                 *(void **)(arg1 + 8));
  if (*(int *)(arg1 + 0x10) == 2) {
    return __newthread;
  }
  local_1c[0] = 0;
  pthread_getschedparam(*__newthread,local_1c,local_28);
  iVar1 = *(int *)(arg1 + 0x10);
  if (iVar1 != 1) {
    if (1 < iVar1) {
      if (iVar1 != 3) {
        if (iVar1 != 4) goto LAB_005b8756;
        iVar1 = sched_get_priority_max(local_1c[0]);
        if (iVar1 != -1) goto LAB_005b87b6;
      }
      local_28[0].__sched_priority = local_28[0].__sched_priority + 1;
      pthread_setschedparam(*__newthread,local_1c[0],local_28);
      return __newthread;
    }
    if (iVar1 != 0) {
LAB_005b8756:
      pthread_setschedparam(*__newthread,local_1c[0],local_28);
      return __newthread;
    }
    iVar1 = sched_get_priority_min(local_1c[0]);
    if (iVar1 != -1) {
LAB_005b87b6:
      local_28[0].__sched_priority = iVar1;
      pthread_setschedparam(*__newthread,local_1c[0],local_28);
      return __newthread;
    }
  }
  local_28[0].__sched_priority = local_28[0].__sched_priority + -1;
  pthread_setschedparam(*__newthread,local_1c[0],local_28);
  return __newthread;
}

/* ======================================================================
 * CreateUserProfile  (Ghidra `CreateUserProfile` @ 005b9160)
 * Signature: uint8_t __stdcall CreateUserProfile(uint arg1)
 * Calls: `CriticalSection__CriticalSection`, `operator_new`
 * Called by: `GSuperMeatBoy__Initialize__00516f60`
 */
/* CreateUserProfile(unsigned int) */

uint64_t * CreateUserProfile(uint arg1)

{
  uint64_t *puVar1;
  
  puVar1 = operator_new(0x50);
  *(uint32_t *)(puVar1 + 1) = 0;
  *(uint32_t *)((long)puVar1 + 0xc) = 0;
  *(uint32_t *)((long)puVar1 + 0x14) = 0xffffffff;
  puVar1[4] = 0;
  *puVar1 = &PTR__UnixUserProfile_005de790;
                    /* try { // try from 005b91a5 to 005b91a9 has its CatchHandler @ 005b91cb */
  CriticalSection__CriticalSection((CriticalSection *)(puVar1 + 5));
  *(uint32_t *)((long)puVar1 + 0xc) = 1;
  (&UserProfiles)[arg1] = puVar1;
  return puVar1;
}

/* ======================================================================
 * CreateMessage  (Ghidra `CreateMessage` @ 005b9500)
 * Signature: uint8_t CreateMessage(void)
 * Calls: `Game_DisableMessage`, `memcpy`, `safe_wcslen`
 * Called by: `EditorFormChapterUpload__LoadLevelLibrary`, `EditorFormChapterUpload__UploadChapter`, `EditorForm_ChapterUploadFormOpen`, `EditorForm_UploadFormOk`, `EditorForm_UploadFormOpen`, `GSMBMenu__ClickPauseOption`, `GSMBMenu__ClickReplayPauseOption`, `GSMBMenu__ClickTitleOption`, `GSMBMenu__ShowBackToMapMessage`, `GSMBMenu__ShowBackToTitleMessage` (+20 more)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CreateMessage(uint64_t *arg1)

{
  wchar_t *pwVar1;
  uint uVar2;
  ulong uVar3;
  size_t sVar4;
  ulong uVar5;
  
  if (UserAlert__currInterrupt != 0) {
    DAT_00824be8 /* R:4.0283126953945516e-41f */ = 3;
    UserAlert__currInterrupt = 0;
    Game_DisableMessage(1);
    if (DAT_00824ba8 /* R:8.396019878848574e-39f */ != (code *)0x0) {
      (*DAT_00824ba8 /* R:8.396019878848574e-39f */)(DAT_00824be0 /* R:7.763193492359487e-43f */);
    }
  }
  UserAlert__currInterrupt = *(int *)arg1;
  uVar5 = 0;
  DAT_00824ba8 /* R:8.396019878848574e-39f */ = (code *)arg1[7];
  DAT_00824bb0 /* R:1.018743983564142e-42f */ = arg1[8];
  _DAT_00824bb8 /* R:4.021726592612225e-41f */ = arg1[9];
  DAT_00824bc0 /* R:1.1880522271401808e-38f */ = arg1[5];
  DAT_00824bc8 /* R:3.363116314379561e-44f */ = arg1[6];
  DAT_00824bd8 /* R:6.931405144711704e-39f */ = arg1[0xc];
  DAT_00824bd0 /* R:4.0242489298480097e-41f */ = arg1[0xb];
  DAT_00824be0 /* R:7.763193492359487e-43f */ = arg1[0xd];
  DAT_00824be8 /* R:4.0283126953945516e-41f */ = 0;
  pwVar1 = (wchar_t *)arg1[2];
  if (pwVar1 != (wchar_t *)0x0) {
    uVar5 = 0x100;
    uVar3 = safe_wcslen(pwVar1);
    sVar4 = 0x400;
    if (uVar3 < 0x100) {
      uVar2 = safe_wcslen(pwVar1);
      uVar5 = (ulong)uVar2;
      sVar4 = uVar5 * 4;
    }
    if (pwVar1 != &DAT_008243a4 /* R:0.0f */) {
      memcpy(&DAT_008243a4 /* R:0.0f */,pwVar1,sVar4);
    }
  }
  (&DAT_008243a4 /* R:0.0f */)[uVar5] = 0;
  pwVar1 = (wchar_t *)arg1[1];
  uVar5 = 0;
  if (pwVar1 != (wchar_t *)0x0) {
    uVar5 = 0x80;
    uVar3 = safe_wcslen(pwVar1);
    sVar4 = 0x200;
    if (uVar3 < 0x80) {
      uVar2 = safe_wcslen(pwVar1);
      uVar5 = (ulong)uVar2;
      sVar4 = uVar5 * 4;
    }
    if (pwVar1 != &DAT_008241a4 /* R:0.0f */) {
      memcpy(&DAT_008241a4 /* R:0.0f */,pwVar1,sVar4);
    }
  }
  (&DAT_008241a4 /* R:0.0f */)[uVar5] = 0;
  pwVar1 = (wchar_t *)arg1[3];
  uVar5 = 0;
  if (pwVar1 != (wchar_t *)0x0) {
    uVar5 = 0x80;
    uVar3 = safe_wcslen(pwVar1);
    sVar4 = 0x200;
    if (uVar3 < 0x80) {
      uVar2 = safe_wcslen(pwVar1);
      uVar5 = (ulong)uVar2;
      sVar4 = uVar5 * 4;
    }
    if (pwVar1 != &DAT_008247a4 /* R:0.0f */) {
      memcpy(&DAT_008247a4 /* R:0.0f */,pwVar1,sVar4);
    }
  }
  (&DAT_008247a4 /* R:0.0f */)[uVar5] = 0;
  pwVar1 = (wchar_t *)arg1[4];
  uVar5 = 0;
  if (pwVar1 != (wchar_t *)0x0) {
    uVar5 = 0x80;
    uVar3 = safe_wcslen(pwVar1);
    sVar4 = 0x200;
    if (uVar3 < 0x80) {
      uVar2 = safe_wcslen(pwVar1);
      uVar5 = (ulong)uVar2;
      sVar4 = uVar5 * 4;
    }
    if (pwVar1 != &DAT_008249a4 /* R:0.0f */) {
      memcpy(&DAT_008249a4 /* R:0.0f */,pwVar1,sVar4);
    }
  }
  (&DAT_008249a4 /* R:0.0f */)[uVar5] = 0;
  if (arg1 != (uint64_t *)pendingCreation) {
    pendingCreation._0_8_ = *arg1;
    pendingCreation._8_8_ = arg1[1];
    pendingCreation._16_8_ = arg1[2];
    pendingCreation._24_8_ = arg1[3];
    pendingCreation._32_8_ = arg1[4];
    pendingCreation._40_8_ = arg1[5];
    pendingCreation._48_8_ = arg1[6];
    pendingCreation._56_8_ = arg1[7];
    pendingCreation._64_8_ = arg1[8];
    pendingCreation._72_8_ = arg1[9];
    pendingCreation._80_8_ = arg1[10];
    pendingCreation._88_8_ = arg1[0xb];
    pendingCreation._96_8_ = arg1[0xc];
    pendingCreation._104_8_ = arg1[0xd];
  }
  bShouldCreateUserAlert = 1;
  return;
}

/* ======================================================================
 * DisableMessage  (Ghidra `DisableMessage` @ 005b9870)
 * Signature: uint8_t DisableMessage(void)
 * Calls: `Game_DisableMessage`
 * Called by: `GSMBMenu__ValidateAndLoadChapter`, `Game_StorageRemovedCancel`, `Game_StorageRemovedOK`, `SMBMoveOn__DisconnectedStorage`, `SMBReplayConfirmDelete`, `SMBReplayManager__DeleteSelectedReplay`
 */
void DisableMessage(void)

{
  if (DAT_00824be8 /* R:4.0283126953945516e-41f */ == 3) {
    UserAlert__currInterrupt = 0;
    Game_DisableMessage();
    if (DAT_00824ba8 /* R:8.396019878848574e-39f */ != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005b98be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_00824ba8 /* R:8.396019878848574e-39f */)(DAT_00824be0 /* R:7.763193492359487e-43f */);
      return;
    }
  }
  else if (DAT_00824be8 /* R:4.0283126953945516e-41f */ == 2) {
    DAT_00824be8 /* R:4.0283126953945516e-41f */ = 1;
  }
  return;
}

/* ======================================================================
 * CreatePendingMessage  (Ghidra `CreatePendingMessage` @ 005b9a40)
 * Signature: uint8_t CreatePendingMessage(void)
 * Calls: `Game_CreateMessage`
 * Called by: `TEngine__Update`
 */
void CreatePendingMessage(void)

{
  if (bShouldCreateUserAlert != 1) {
    return;
  }
  Game_CreateMessage(pendingCreation);
  bShouldCreateUserAlert = 0;
  return;
}

/* ======================================================================
 * DestroyUserProfiles  (Ghidra `DestroyUserProfiles` @ 005b9b80)
 * Signature: uint8_t DestroyUserProfiles(void)
 * Calls: (none)
 * Called by: `TEngine__TEngine__00583e20`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DestroyUserProfiles() */

void DestroyUserProfiles(void)

{
  if (UserProfiles != (long *)0x0) {
    (**(code **)(*UserProfiles + 8))();
  }
  if (DAT_00824c28 /* R:2.8376293902577546e-42f */ != (long *)0x0) {
    (**(code **)(*DAT_00824c28 /* R:2.8376293902577546e-42f */ + 8))();
  }
  if (DAT_00824c30 /* R:4.0442874978878545e-41f */ != (long *)0x0) {
    (**(code **)(*DAT_00824c30 /* R:4.0442874978878545e-41f */ + 8))();
  }
  if (DAT_00824c38 /* R:8.089505457956021e-39f */ != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005b9bd1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_00824c38 /* R:8.089505457956021e-39f */ + 8))();
    return;
  }
  return;
}

/* ======================================================================
 * DoesProfileHaveAchievement  (Ghidra `DoesProfileHaveAchievement` @ 005ba1d0)
 * Signature: uint8_t __stdcall DoesProfileHaveAchievement(UserProfile * arg1, int arg2)
 * Calls: (none)
 * Called by: (none)
 */
/* Achievements__DoesProfileHaveAchievement(UserProfile*, int) */

uint64_t Achievements__DoesProfileHaveAchievement(UserProfile *arg1,int arg2)

{
  return 0;
}

/* ======================================================================
 * Determinant  (Ghidra `Determinant` @ 005bb290)
 * Signature: uint8_t __stdcall Determinant(Matrix4x4 * arg1)
 * Calls: (none)
 * Called by: `Inverse`
 */
/* Matrix4x4__Determinant(Matrix4x4 const*) */

float Matrix4x4__Determinant(Matrix4x4 *arg1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar1 = *(float *)(arg1 + 0x3c);
  fVar2 = *(float *)(arg1 + 0x34);
  fVar3 = *(float *)(arg1 + 0x28);
  fVar4 = *(float *)(arg1 + 0x2c);
  fVar5 = *(float *)(arg1 + 0x24);
  fVar6 = *(float *)(arg1 + 0x38);
  fVar7 = *(float *)(arg1 + 0x1c);
  fVar8 = *(float *)(arg1 + 0x20);
  fVar9 = *(float *)(arg1 + 0x30);
  fVar10 = fVar4 * fVar9 + fVar1 * fVar8;
  return ((fVar3 * fVar9 - fVar6 * fVar8) * fVar7 +
          (fVar4 * fVar6 - fVar1 * fVar3) * *(float *)(arg1 + 0x10) +
         *(float *)(arg1 + 0x18) * fVar10) * *(float *)(arg1 + 4) +
         (((fVar1 * fVar3 - fVar4 * fVar6) * *(float *)(arg1 + 0x14) -
          (fVar2 * fVar4 + fVar5 * fVar1) * *(float *)(arg1 + 0x18)) +
         (fVar5 * fVar6 - fVar2 * fVar3) * fVar7) * *(float *)arg1 +
         (((fVar5 * fVar1 - fVar2 * fVar4) * *(float *)(arg1 + 0x10) -
          fVar10 * *(float *)(arg1 + 0x14)) + (fVar2 * fVar8 - fVar5 * fVar9) * fVar7) *
         *(float *)(arg1 + 8) +
         ((fVar5 * fVar9 - fVar2 * fVar8) * *(float *)(arg1 + 0x18) +
          (fVar2 * fVar3 - fVar5 * fVar6) * *(float *)(arg1 + 0x10) +
         (fVar3 * fVar9 + fVar6 * fVar8) * *(float *)(arg1 + 0x14)) * *(float *)(arg1 + 0xc);
}

/* ======================================================================
 * DebugMsg  (Ghidra `DebugMsg` @ 005bd190)
 * Signature: uint8_t DebugMsg(void)
 * Calls: `fflush`, `fputc`, `vfprintf`
 * Called by: `File__EndOfFile`, `GSuperMeatBoy__Pause__00516530`, `ReadLn`
 */
void DebugMsg(uint64_t arg1,uint64_t arg2,uint64_t arg3,uint64_t arg4,
             uint64_t arg5,uint64_t arg6,uint64_t arg7,uint64_t arg8,
             char *arg9,uint64_t arg10,uint64_t arg11,uint64_t arg12,
             uint64_t arg13,uint64_t arg14)

{
  char in_AL;
  uint32_t local_d0;
  uint32_t local_cc;
  uint8_t *local_c8;
  uint8_t *local_c0;
  uint8_t local_b8 [8];
  uint64_t local_b0;
  uint64_t local_a8;
  uint64_t local_a0;
  uint64_t local_98;
  uint64_t local_90;
  uint64_t local_88;
  uint64_t local_78;
  uint64_t local_68;
  uint64_t local_58;
  uint64_t local_48;
  uint64_t local_38;
  uint64_t local_28;
  uint64_t local_18;
  
  if (in_AL != '\0') {
    local_88 = arg1;
    local_78 = arg2;
    local_68 = arg3;
    local_58 = arg4;
    local_48 = arg5;
    local_38 = arg6;
    local_28 = arg7;
    local_18 = arg8;
  }
  local_c8 = &stack0x00000008;
  local_d0 = 8;
  local_cc = 0x30;
  local_c0 = local_b8;
  local_b0 = arg10;
  local_a8 = arg11;
  local_a0 = arg12;
  local_98 = arg13;
  local_90 = arg14;
  vfprintf(stderr,arg9,&local_d0);
  fputc(10,stderr);
  fflush(stderr);
  return;
}

/* ======================================================================
 * Dot  (Ghidra `Dot` @ 005be000)
 * Signature: uint8_t __stdcall Dot(Vector2 * arg1, Vector2 * arg2)
 * Calls: (none)
 * Called by: (none)
 */
/* Vector2__Dot(Vector2 const*, Vector2 const*) */

float Vector2__Dot(Vector2 *arg1,Vector2 *arg2)

{
  return *(float *)(arg2 + 4) * *(float *)(arg1 + 4) + *(float *)arg2 * *(float *)arg1;
}

/* ======================================================================
 * CreateRemoteFolder  (Ghidra `CreateRemoteFolder` @ 005be380)
 * Signature: uint8_t CreateRemoteFolder(void)
 * Calls: (none)
 * Called by: `GSMBMenu__StartGame`
 */
uint64_t CreateRemoteFolder(void)

{
  return 0;
}
