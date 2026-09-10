/* src/game/classes/FlashLibraryInstance.c — 13 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "FlashLibraryInstance.h"

/* ======================================================================
 * FlashLibraryInstance__Render  (Ghidra `Render` @ 005717a0)
 * Signature: uint8_t __thiscall Render(FlashLibraryInstance * self)
 * Class: FlashLibraryInstance
 * Calls: `TGraphics__GetMatrix`, `TGraphics__SetRenderState`
 * Called by: `SMBLevelPortalInterface__Render`
 */
/* FlashLibraryInstance__Render() */

void __thiscall FlashLibraryInstance__Render(FlashLibraryInstance *self)

{
  long *plVar1;
  Matrix4x4 *pMVar2;
  long lVar3;
  float fVar4;

  if ((((*(int *)(self + 0x20) != -1) && (*(int *)(self + 0x24) != 0)) &&
       (*(int *)(self + 0x84) == 0)) &&
      (*(float *)(self + 0x80) != 0.0)) {
    lVar3 = *(long *)(self + 0x28);
    if (*(uint *)(lVar3 + 0x84) != 0xffffffff) {
      pAudioPosition = (FlashLibraryInstance *)0x0;
      Loader__Wait(*(uint *)(lVar3 + 0x84), 1);
      lVar3 = *(long *)(self + 0x28);
    }
    if (pAudioPosition == (FlashLibraryInstance *)0x0) {
      pAudioPosition = self + 0x30;
    }
    if ((*(char *)(lVar3 + 0x8c) == '\0') && (bGlobalAnimationPause == 1)) {
      if (*(int *)(self + 0x9c) != 0) {
        *(uint32_t *)(self + 0x9c) = 2;
      }
    } else if ((*(int *)(self + 0x9c) == 2) && (bGlobalAnimationPause == 0)) {
      *(uint32_t *)(self + 0x9c) = 1;
    }
    TGraphics__SetRenderState(Graphics, '\a', 0);
    if (*(char *)(*(long *)(self + 0x28) + 0x8d) == '\0') {
      fVar4 = fOneFrameTimeStepVSync * *(float *)(self + 0x60);
    } else {
      fVar4 = fOneFrameTimeStep * *(float *)(self + 0x60);
    }
    if ((*(int *)(self + 0x9c) == 1) &&
        (*(float *)(self + 0x58) - fVar4 < *(float *)(self + 0x5c))) {
      *(uint32_t *)(self + 0x58) = 0;
    }
    pMVar2 = (Matrix4x4 *)TGraphics__GetMatrix(Graphics, 0);
    Matrix4x4__Transformation2DSkew(pMVar2, (Vector2 *)(self + 0x40), (Vector2 *)(self + 0x48),
                                    (Vector2 *)0x0);
    lVar3 = TGraphics__GetMatrix(Graphics, 0);
    *(uint32_t *)(lVar3 + 0xc) = *(uint32_t *)(self + 0x30);
    *(uint32_t *)(lVar3 + 0x1c) = *(uint32_t *)(self + 0x34);
    *(uint32_t *)(lVar3 + 0x2c) = *(uint32_t *)(self + 0x38);
    plVar1 = *(long **)(*(long *)(*(long *)(self + 0x28) + 0x48) +
                        (ulong) * (ushort *)(self + 0x20) * 8);
    (**(code **)(*plVar1 + 0x10))(*(uint32_t *)(self + 0x58), plVar1, self + 100, self + 0x74,
                                  self);
    if (*(int *)(self + 0x9c) == 1) {
      *(float *)(self + 0x58) = fVar4 + *(float *)(self + 0x58);
    }
    pCurrentRenderInstance = 0;
  }
  pAudioPosition = (FlashLibraryInstance *)0x0;
  return;
}

/* ======================================================================
 * FlashLibraryInstance__FlashLibraryInstance  (Ghidra `~FlashLibraryInstance` @ 00572b80)
 * Signature: uint8_t __thiscall ~FlashLibraryInstance(FlashLibraryInstance * self)
 * Class: FlashLibraryInstance
 * Calls: `FlashLibraryInstance__FlashLibraryInstance__00572bd0`, `TAudio__RemoveInstanceByPosition`
 * Called by: (none)
 */
/* FlashLibraryInstance__FlashLibraryInstance__00572bd0() */

void __thiscall FlashLibraryInstance__FlashLibraryInstance__00572bd0(FlashLibraryInstance *self)

{
  *(uint8_t ***)self = &PTR__FlashLibraryInstance_005dbb50;
  /* try { // try from 00572b8b to 00572ba8 has its CatchHandler @ 00572bb2 */
  AnimationManager__RemoveCallback(self);
  AnimationManager__RemoveCallback((float *)(self + 0x58));
  TAudio__RemoveInstanceByPosition(Audio, (FPUVector *)(self + 0x30));
  *(uint8_t ***)self = &PTR__RenderLayerObject_005be670;
  return;
}

/* ======================================================================
 * FlashLibraryInstance__FlashLibraryInstance__00572bd0  (Ghidra `~FlashLibraryInstance` @ 00572bd0)
 * Signature: uint8_t __thiscall ~FlashLibraryInstance(FlashLibraryInstance * self)
 * Class: FlashLibraryInstance
 * Calls: `TAudio__RemoveInstanceByPosition`, `operator_delete`
 * Called by: `FlashLibraryInstance__FlashLibraryInstance`, `SMBLevelPortalInterface__PortalInterfaceElement_PortalInterfaceElement`, `SMBLevelPortalInterface__SMBLevelPortalInterface`
 */
/* FlashLibraryInstance__FlashLibraryInstance__00572bd0() */

void __thiscall FlashLibraryInstance__FlashLibraryInstance__00572bd0(FlashLibraryInstance *self)

{
  *(uint8_t ***)self = &PTR__FlashLibraryInstance_005dbb50;
  /* try { // try from 00572bdb to 00572bf8 has its CatchHandler @ 00572c09 */
  AnimationManager__RemoveCallback(self);
  AnimationManager__RemoveCallback((float *)(self + 0x58));
  TAudio__RemoveInstanceByPosition(Audio, (FPUVector *)(self + 0x30));
  *(uint8_t ***)self = &PTR__RenderLayerObject_005be670;
  operator_delete(self);
  return;
}

/* ======================================================================
 * FlashLibraryInstance__FlashLibraryInstance__00573610  (Ghidra `FlashLibraryInstance` @ 00573610)
 * Signature: uint8_t __thiscall FlashLibraryInstance(FlashLibraryInstance * self)
 * Class: FlashLibraryInstance
 * Calls: (none)
 * Called by: `SMBLevelPortalInterface__SMBLevelPortalInterface__005084f0`
 */
/* FlashLibraryInstance__FlashLibraryInstance__00573610() */

void __thiscall FlashLibraryInstance__FlashLibraryInstance__00573610(FlashLibraryInstance *self)

{
  *(uint64_t *)(self + 8) = 0;
  *(uint64_t *)(self + 0x10) = 0;
  *(uint64_t *)(self + 0x18) = 0;
  *(uint8_t ***)self = &PTR__FlashLibraryInstance_005dbb50;
  *(uint32_t *)(self + 0x20) = 0xffffffff;
  *(uint32_t *)(self + 0x24) = 1;
  *(uint64_t *)(self + 0x28) = 0;
  *(uint32_t *)(self + 0x30) = 0;
  *(uint32_t *)(self + 0x34) = 0;
  *(uint32_t *)(self + 0x38) = 0;
  *(uint32_t *)(self + 0x3c) = 0;
  *(uint32_t *)(self + 0x40) = 0x3f800000;
  *(uint32_t *)(self + 0x44) = 0x3f800000;
  *(uint32_t *)(self + 0x48) = 0;
  *(uint32_t *)(self + 0x4c) = 0;
  *(uint32_t *)(self + 0x50) = 0;
  *(uint32_t *)(self + 0x54) = 0;
  *(uint32_t *)(self + 0x58) = 0;
  *(uint32_t *)(self + 0x5c) = 0;
  *(uint32_t *)(self + 0x60) = 0x3f800000;
  *(uint32_t *)(self + 100) = 0;
  *(uint32_t *)(self + 0x68) = 0;
  *(uint32_t *)(self + 0x6c) = 0;
  *(uint32_t *)(self + 0x70) = 0;
  *(uint32_t *)(self + 0x74) = 0x3f800000;
  *(uint32_t *)(self + 0x78) = 0x3f800000;
  *(uint32_t *)(self + 0x7c) = 0x3f800000;
  *(uint32_t *)(self + 0x80) = 0x3f800000;
  *(uint32_t *)(self + 0x84) = 0;
  *(uint64_t *)(self + 0x88) = 0;
  *(uint64_t *)(self + 0x90) = 0;
  *(uint32_t *)(self + 0x9c) = 1;
  return;
}

/* ======================================================================
 * FlashLibraryInstance__GetInstanceBounds  (Ghidra `GetInstanceBounds` @ 00573d00)
 * Signature: uint8_t __thiscall GetInstanceBounds(FlashLibraryInstance * self, float * arg1, float * arg2, Vector2 * arg3)
 * Class: FlashLibraryInstance
 * Calls: `Vector2__operator_assign`
 * Called by: `EditorButton__IsMouseOverButton`, `FactoryBoss__FactoryBoss__00468ff0`, `RenderRating`, `SMBPalette__GetSetPieceProps__004dad20`, `SMBPalette__SMBPalette__004f3ca0`
 */
/* FlashLibraryInstance__GetInstanceBounds(float&, float&, Vector2&) */

void __thiscall FlashLibraryInstance__GetInstanceBounds(FlashLibraryInstance *self, float *arg1,
                                                        float *arg2, Vector2 *arg3)

{
  long *plVar1;
  float fVar2;
  Matrix4x4 aMStack_98[64];
  uint32_t local_58;
  uint32_t local_54;
  float local_48;
  float local_44;
  float local_38;
  float local_34;

  if (*(uint *)(self + 0x20) != 0xffffffff) {
    plVar1 = *(long **)(*(long *)(*(long *)(self + 0x28) + 0x48) +
                        (ulong)(*(uint *)(self + 0x20) & 0xffff) * 8);
    if ((int)plVar1[2] == 2) {
      local_58 = 0;
      local_54 = 0;
      Vector2__operator_assign(arg3, (Vector2 *)&local_58);
      *arg1 = 0.0;
      *arg2 = 0.0;
    } else {
      local_48 = 1e+08;
      local_44 = 1e+08;
      local_38 = -1e+08;
      local_34 = -1e+08;
      (**(code **)(*plVar1 + 0x18))(*(uint32_t *)(self + 0x58), plVar1, &local_48, &local_38);
      fVar2 = DAT_005be6e4 /* R:0.5f */;
      *arg1 = (local_38 - local_48) * DAT_005be6e4 /* R:0.5f */;
      *arg2 = (local_34 - local_44) * fVar2;
      *(float *)arg3 = local_48 + *arg1;
      *(float *)(arg3 + 4) = local_44 + *arg2;
      Matrix4x4__Transformation2DRot(aMStack_98, (Vector2 *)(self + 0x40), (float *)(self + 0x4c),
                                     (Vector2 *)0x0);
      Matrix4x4__TransformVector2(arg3, arg3, aMStack_98, 1);
    }
  }
  return;
}

/* ======================================================================
 * FlashLibraryInstance__GetBounds  (Ghidra `GetBounds` @ 00573e50)
 * Signature: uint8_t __thiscall GetBounds(FlashLibraryInstance * self, float arg1, Vector2 * arg2, Vector2 * arg3, float arg4)
 * Class: FlashLibraryInstance
 * Calls: `Vector2__operator_assign`, `Vector2__operator_mul__005be200`, `Vector2__operator_plus__005be140`
 * Called by: `FlashTimeline__GetBounds`, `SMBPalette__SMBPalette__004f3ca0`
 */
/* FlashLibraryInstance__GetBounds(float, Vector2&, Vector2&, float) */

void __thiscall FlashLibraryInstance__GetBounds(FlashLibraryInstance *self, float arg1,
                                                Vector2 *arg2, Vector2 *arg3, float arg4)

{
  long *plVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  Matrix4x4 local_278[12];
  float local_26c;
  float local_25c;
  float local_24c;
  uint64_t local_238;
  uint32_t local_230;
  float fStack_22c;
  uint64_t local_228;
  uint32_t local_220;
  float fStack_21c;
  uint64_t local_218;
  uint64_t local_210;
  uint64_t local_208;
  uint64_t local_200;
  uint64_t local_1f8;
  uint32_t local_1f0;
  uint32_t uStack_1ec;
  uint64_t local_1e8;
  uint32_t local_1e0;
  uint32_t uStack_1dc;
  uint64_t local_1d8;
  uint64_t local_1d0;
  uint64_t local_1c8;
  uint64_t local_1c0;
  uint32_t local_1b8;
  uint32_t local_1b4;
  uint32_t local_1a8;
  uint32_t local_1a4;
  uint64_t local_198[2];
  Vector2 local_188[16];
  uint32_t local_178;
  uint32_t local_174;
  uint32_t local_168;
  uint32_t local_164;
  float local_158;
  float local_154;
  float local_148;
  float local_144;
  float local_138;
  float local_134;
  float local_128;
  float local_124;
  float local_118;
  float local_114;
  Vector2 local_108[16];
  Vector2 local_f8[16];
  uint32_t local_e8;
  uint32_t local_e4;
  uint32_t local_d8;
  uint32_t local_d4;
  uint32_t local_c8;
  uint32_t local_c4;
  uint32_t local_b8;
  uint32_t local_b4;
  Vector2 local_a8[16];
  Vector2 local_98[16];
  Vector2 local_88[16];
  Vector2 local_78[16];
  Vector2 local_68[16];
  Vector2 local_58[16];
  Vector2 local_48[16];
  Vector2 local_38[16];

  if (*(uint *)(self + 0x20) != 0xffffffff) {
    plVar1 = *(long **)(*(long *)(*(long *)(self + 0x28) + 0x48) +
                        (ulong)(*(uint *)(self + 0x20) & 0xffff) * 8);
    if ((int)plVar1[2] == 2) {
      local_1b8 = 0;
      local_1b4 = 0;
      Vector2__operator_assign(arg2, (Vector2 *)&local_1b8);
      local_1a8 = 0;
      local_1a4 = 0;
      Vector2__operator_assign(arg3, (Vector2 *)&local_1a8);
      return;
    }
    local_198[0] = *(uint64_t *)(self + 0x40);
    fVar3 = *(float *)(self + 0x5c);
    if ((*(long *)(self + 0x88) != 0) && (DAT_005bf760 /* R:0.0f */ < arg4)) {
      Vector2__operator_mul__005be200(local_98, arg4);
      Vector2__operator_mul__005be200(local_a8, DAT_005be894 /* R:1.0f */ - arg4);
      Vector2__operator_plus__005be140(local_188, local_a8);
      Vector2__operator_assign((Vector2 *)local_198, local_188);
    }
    local_178 = 0x4cbebc20;
    local_174 = 0x4cbebc20;
    local_168 = 0xccbebc20;
    local_164 = 0xccbebc20;
    (**(code **)(*plVar1 + 0x18))(arg1 - fVar3, plVar1, &local_178, &local_168);
    if ((*(long *)(self + 0x88) == 0) || (arg4 <= DAT_005bf760 /* R:0.0f */)) {
      local_1f8 = matIdentity;
      local_1e8 = DAT_005ded50 /* R:0.0f */;
      local_1d8 = DAT_005ded60 /* R:0.0f */;
      local_1d0 = DAT_005ded68 /* R:1.0f */;
      local_1c8 = DAT_005ded70 /* R:0.0f */;
      local_1c0 = DAT_005ded78 /* R:0.0f */;
      _local_1f0 = CONCAT44(*(uint32_t *)(self + 0x50), (int)DAT_005ded48 /* R:0.0f */);
      _local_1e0 = CONCAT44(*(uint32_t *)(self + 0x54), (int)DAT_005ded58 /* R:0.0f */);
      Matrix4x4__Transformation2DSkew(local_278, (Vector2 *)(self + 0x40), (Vector2 *)(self + 0x48),
                                      (Vector2 *)0x0);
      local_24c = *(float *)(self + 0x38);
      local_26c = *(float *)(self + 0x30) - *(float *)(self + 0x50);
      local_25c = *(float *)(self + 0x34) - *(float *)(self + 0x54);
      Matrix4x4__Multiply(local_278, (Matrix4x4 *)&local_1f8, local_278);
    } else {
      Vector2__operator_mul__005be200(local_78, arg4);
      fVar3 = DAT_005be894 /* R:1.0f */ - arg4;
      Vector2__operator_mul__005be200(local_88, fVar3);
      Vector2__operator_plus__005be140((Vector2 *)&local_118, local_88);
      local_238 = matIdentity;
      local_228 = DAT_005ded50 /* R:0.0f */;
      local_218 = DAT_005ded60 /* R:0.0f */;
      local_210 = DAT_005ded68 /* R:1.0f */;
      local_208 = DAT_005ded70 /* R:0.0f */;
      local_200 = DAT_005ded78 /* R:0.0f */;
      _local_230 = CONCAT44(local_118, (int)DAT_005ded48 /* R:0.0f */);
      _local_220 = CONCAT44(local_114, (int)DAT_005ded58 /* R:0.0f */);
      Vector2__operator_mul__005be200(local_58, arg4);
      Vector2__operator_mul__005be200(local_68, fVar3);
      Vector2__operator_plus__005be140(local_108, local_68);
      Vector2__operator_mul__005be200(local_38, arg4);
      Vector2__operator_mul__005be200(local_48, fVar3);
      Vector2__operator_plus__005be140(local_f8, local_48);
      Matrix4x4__Transformation2DSkew(local_278, local_108, local_f8, (Vector2 *)0x0);
      lVar2 = *(long *)(self + 0x88);
      local_24c = fVar3 * *(float *)(self + 0x38) + arg4 * *(float *)(lVar2 + 0x38);
      local_26c = (*(float *)(lVar2 + 0x30) * arg4 - local_118) + *(float *)(self + 0x30) * fVar3;
      local_25c = (*(float *)(lVar2 + 0x34) * arg4 - local_114) + *(float *)(self + 0x34) * fVar3;
      Matrix4x4__Multiply(local_278, (Matrix4x4 *)&local_238, local_278);
    }
    local_e8 = local_178;
    local_e4 = local_174;
    Vector2__operator_assign((Vector2 *)&local_158, (Vector2 *)&local_e8);
    local_d8 = local_178;
    local_d4 = local_164;
    Vector2__operator_assign((Vector2 *)&local_148, (Vector2 *)&local_d8);
    local_c8 = local_168;
    local_c4 = local_164;
    Vector2__operator_assign((Vector2 *)&local_138, (Vector2 *)&local_c8);
    local_b8 = local_168;
    local_b4 = local_174;
    Vector2__operator_assign((Vector2 *)&local_128, (Vector2 *)&local_b8);
    Matrix4x4__TransformVector2((Vector2 *)&local_158, (Vector2 *)&local_158, local_278, 1);
    Matrix4x4__TransformVector2((Vector2 *)&local_148, (Vector2 *)&local_148, local_278, 1);
    Matrix4x4__TransformVector2((Vector2 *)&local_138, (Vector2 *)&local_138, local_278, 1);
    Matrix4x4__TransformVector2((Vector2 *)&local_128, (Vector2 *)&local_128, local_278, 1);
    fVar3 = local_138;
    if (local_148 <= local_138) {
      fVar3 = local_148;
    }
    fVar4 = local_134;
    if (local_144 <= local_134) {
      fVar4 = local_144;
    }
    if (local_148 <= local_138) {
      local_148 = local_138;
    }
    if (local_144 <= local_134) {
      local_144 = local_134;
    }
    if (local_128 <= fVar3) {
      fVar3 = local_128;
    }
    if (local_124 <= fVar4) {
      fVar4 = local_124;
    }
    if (local_148 <= local_128) {
      local_148 = local_128;
    }
    if (local_144 <= local_124) {
      local_144 = local_124;
    }
    if (local_158 <= fVar3) {
      fVar3 = local_158;
    }
    if (local_154 <= fVar4) {
      fVar4 = local_154;
    }
    if (local_148 <= local_158) {
      local_148 = local_158;
    }
    if (local_144 <= local_154) {
      local_144 = local_154;
    }
    if (*(float *)arg2 <= fVar3) {
      fVar3 = *(float *)arg2;
    }
    if (*(float *)(arg2 + 4) <= fVar4) {
      fVar4 = *(float *)(arg2 + 4);
    }
    *(float *)arg2 = fVar3;
    *(float *)(arg2 + 4) = fVar4;
    if (local_148 <= *(float *)arg3) {
      local_148 = *(float *)arg3;
    }
    if (local_144 <= *(float *)(arg3 + 4)) {
      local_144 = *(float *)(arg3 + 4);
    }
    *(float *)arg3 = local_148;
    *(float *)(arg3 + 4) = local_144;
  }
  return;
}

/* ======================================================================
 * FlashLibraryInstance__IsPlaying  (Ghidra `IsPlaying` @ 00574510)
 * Signature: uint8_t __thiscall IsPlaying(FlashLibraryInstance * self)
 * Class: FlashLibraryInstance
 * Calls: (none)
 * Called by: `AlienHominid__Render`, `AlienHominid__RenderClones`, `AlienHominid__RenderShots`, `AlienHominid__Update`, `DrFetus__RenderShots`, `DrFetus__Update`, `ForestBoss__Render`, `ForestBoss__Update`, `GMeatHUD__Update`, `GSMBCutSceneManager__IsCutSceneFinished` (+34 more)
 */
/* FlashLibraryInstance__IsPlaying() */

bool __thiscall FlashLibraryInstance__IsPlaying(FlashLibraryInstance *self)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  float fVar4;
  float fVar5;

  bVar2 = false;
  if (*(uint *)(self + 0x20) != 0xffffffff) {
    lVar1 = *(long *)(*(long *)(*(long *)(self + 0x28) + 0x48) +
                      (ulong)(*(uint *)(self + 0x20) & 0xffff) * 8);
    if (*(int *)(lVar1 + 0x10) == 1) {
      iVar3 = *(int *)(lVar1 + 0x18);
      fVar4 = *(float *)(self + 0x58);
      fVar5 = *(float *)(lVar1 + 0x20);
    } else {
      fVar5 = 0.0;
      iVar3 = 0;
      fVar4 = *(float *)(self + 0x58);
    }
    bVar2 = true;
    if (fVar5 < fVar4) {
      return iVar3 != 0;
    }
  }
  return bVar2;
}

/* ======================================================================
 * FlashLibraryInstance__GotoAndPlay  (Ghidra `GotoAndPlay` @ 00574560)
 * Signature: uint8_t __thiscall GotoAndPlay(FlashLibraryInstance * self, int arg1)
 * Class: FlashLibraryInstance
 * Calls: (none)
 * Called by: (none)
 */
/* FlashLibraryInstance__GotoAndPlay(int) */

void __thiscall FlashLibraryInstance__GotoAndPlay(FlashLibraryInstance *self, int arg1)

{
  float fVar1;
  int iVar2;

  iVar2 = 0;
  if (-1 < arg1) {
    iVar2 = arg1;
  }
  fVar1 = *(float *)(*(long *)(self + 0x28) + 0x80);
  *(uint32_t *)(self + 0x9c) = 1;
  *(float *)(self + 0x58) = (float)iVar2 / fVar1;
  return;
}

/* ======================================================================
 * FlashLibraryInstance__GotoAndStop  (Ghidra `GotoAndStop` @ 00574590)
 * Signature: uint8_t __thiscall GotoAndStop(FlashLibraryInstance * self, int arg1)
 * Class: FlashLibraryInstance
 * Calls: (none)
 * Called by: `DetermineMenuButtons`, `EditorButton_ChapterLevelButtonClick`, `EditorButton_ChapterLevelLineButtonClick`, `EditorButton__SetMouseOutState`, `EditorButton__SetMouseOverState`, `EditorButton__SetSelectedState`, `EditorFormChapterUpload__EditorFormChapterUpload__004b8ec0`, `GMeatHUD__Render`, `GSMBMenu__LoadChapterMenu`, `GSMBMenu__Render` (+26 more)
 */
/* FlashLibraryInstance__GotoAndStop(int) */

void __thiscall FlashLibraryInstance__GotoAndStop(FlashLibraryInstance *self, int arg1)

{
  float fVar1;
  int iVar2;

  iVar2 = 0;
  if (-1 < arg1) {
    iVar2 = arg1;
  }
  fVar1 = *(float *)(*(long *)(self + 0x28) + 0x80);
  *(uint32_t *)(self + 0x9c) = 0;
  *(float *)(self + 0x58) = (float)iVar2 / fVar1 - DAT_005dbd04 /* R:9.999999747378752e-05f */;
  return;
}

/* ======================================================================
 * FlashLibraryInstance__Reset  (Ghidra `Reset` @ 005745c0)
 * Signature: uint8_t __thiscall Reset(FlashLibraryInstance * self)
 * Class: FlashLibraryInstance
 * Calls: (none)
 * Called by: `FlyWrench__Reset`, `ForestBoss__OnDeath`, `ForestBoss__Render`, `ForestBoss__Reset`, `GMeatHUD__SetInGameHudLevelName`, `GMeatHUD__ShowEndLevelHud`, `GMeatHUD__ShowLevelTransition`, `GMeatHUD__ShowReplayHUD`, `GSMBCutSceneManager__PlayCutScene`, `GSMBMenu__EnterSelectedChapter` (+57 more)
 */
/* FlashLibraryInstance__Reset() */

void __thiscall FlashLibraryInstance__Reset(FlashLibraryInstance *self)

{
  *(uint32_t *)(self + 0x58) = 0;
  return;
}

/* ======================================================================
 * FlashLibraryInstance__GetLibraryEntry  (Ghidra `GetLibraryEntry` @ 005745d0)
 * Signature: uint8_t __thiscall GetLibraryEntry(FlashLibraryInstance * self)
 * Class: FlashLibraryInstance
 * Calls: (none)
 * Called by: (none)
 */
/* FlashLibraryInstance__GetLibraryEntry() */

uint64_t __thiscall FlashLibraryInstance__GetLibraryEntry(FlashLibraryInstance *self)

{
  return *(uint64_t *)(*(long *)(*(long *)(self + 0x28) + 0x48) +
                       (ulong) * (ushort *)(self + 0x20) * 8);
}

/* ======================================================================
 * FlashLibraryInstance__IsBoundsTouchingInstance  (Ghidra `IsBoundsTouchingInstance` @ 005745f0)
 * Signature: uint8_t __thiscall IsBoundsTouchingInstance(FlashLibraryInstance * self, Bounds * arg1)
 * Class: FlashLibraryInstance
 * Calls: `FlashLibraryInstance__IsBoundsTouchingInstance__00574660`
 * Called by: (none)
 */
/* FlashLibraryInstance__IsBoundsTouchingInstance__00574660(Bounds const*) */

uint64_t __thiscall
FlashLibraryInstance__IsBoundsTouchingInstance__00574660(FlashLibraryInstance *self, Bounds *arg1)

{
  long *plVar1;
  uint64_t uVar2;
  Matrix4x4 aMStack_58[12];
  uint32_t local_4c;
  uint32_t local_3c;
  uint32_t local_2c;

  uVar2 = 0;
  if (*(int *)(self + 0x20) != -1) {
    Matrix4x4__Transformation2DSkew(aMStack_58, (Vector2 *)(self + 0x40), (Vector2 *)(self + 0x48),
                                    (Vector2 *)0x0);
    local_4c = *(uint32_t *)(self + 0x30);
    local_3c = *(uint32_t *)(self + 0x34);
    local_2c = *(uint32_t *)(self + 0x38);
    plVar1 = *(long **)(*(long *)(*(long *)(self + 0x28) + 0x48) +
                        (ulong) * (ushort *)(self + 0x20) * 8);
    uVar2 = (**(code **)(*plVar1 + 0x20))(*(uint32_t *)(self + 0x58), plVar1, arg1,
                                          *(uint32_t *)(self + 0x84), aMStack_58);
  }
  return uVar2;
}

/* ======================================================================
 * FlashLibraryInstance__IsBoundsTouchingInstance__00574660  (Ghidra `IsBoundsTouchingInstance` @ 00574660)
 * Signature: uint8_t __thiscall IsBoundsTouchingInstance(FlashLibraryInstance * self, Bounds * arg1, float arg2, Matrix4x4 * arg3, float arg4)
 * Class: FlashLibraryInstance
 * Calls: `Vector2__operator_mul__005be200`, `Vector2__operator_plus__005be140`
 * Called by: `FlashLibraryInstance__IsBoundsTouchingInstance`, `FlashTimeline__IsEntryTouchingBounds`, `ForestBoss__IsCollidingWithBounds`, `HellBoss__HellAttack_IsTouchingAttack`, `HellBoss__IsCollidingWithBounds`, `HospitalBoss__IsCollidingWithBounds`, `RaptureBoss__IsBoundsTouchingMaggot`, `SMBPalette__ObstacleCollision`, `SMBPalette__Update`
 */
/* FlashLibraryInstance__IsBoundsTouchingInstance__00574660(Bounds const*, float, Matrix4x4*, float) */

uint64_t __thiscall
FlashLibraryInstance__IsBoundsTouchingInstance__00574660(FlashLibraryInstance *self, Bounds *arg1,
                                                         float arg2, Matrix4x4 *arg3, float arg4)

{
  long lVar1;
  long *plVar2;
  uint64_t uVar3;
  float fVar4;
  Matrix4x4 local_178[12];
  float local_16c;
  float local_15c;
  float local_14c;
  uint64_t local_138;
  uint32_t local_130;
  float fStack_12c;
  uint64_t local_128;
  uint32_t local_120;
  float fStack_11c;
  uint64_t local_118;
  uint64_t local_110;
  uint64_t local_108;
  uint64_t local_100;
  uint64_t local_f8;
  uint32_t local_f0;
  uint32_t uStack_ec;
  uint64_t local_e8;
  uint32_t local_e0;
  uint32_t uStack_dc;
  uint64_t local_d8;
  uint64_t local_d0;
  uint64_t local_c8;
  uint64_t local_c0;
  float local_b8;
  float local_b4;
  Vector2 local_a8[16];
  Vector2 local_98[16];
  Vector2 local_88[16];
  Vector2 local_78[16];
  Vector2 local_68[16];
  Vector2 local_58[16];
  Vector2 local_48[16];
  Vector2 local_38[24];

  uVar3 = 0;
  if (*(int *)(self + 0x20) != -1) {
    if ((*(long *)(self + 0x88) == 0) || (arg4 <= DAT_005bf760 /* R:0.0f */)) {
      local_f8 = matIdentity;
      local_e8 = DAT_005ded50 /* R:0.0f */;
      local_d8 = DAT_005ded60 /* R:0.0f */;
      local_d0 = DAT_005ded68 /* R:1.0f */;
      local_c8 = DAT_005ded70 /* R:0.0f */;
      local_c0 = DAT_005ded78 /* R:0.0f */;
      _local_f0 = CONCAT44(*(uint32_t *)(self + 0x50), (int)DAT_005ded48 /* R:0.0f */);
      _local_e0 = CONCAT44(*(uint32_t *)(self + 0x54), (int)DAT_005ded58 /* R:0.0f */);
      Matrix4x4__Transformation2DSkew(local_178, (Vector2 *)0x0, (Vector2 *)(self + 0x48),
                                      (Vector2 *)0x0);
      Matrix4x4__Multiply((Matrix4x4 *)&local_f8, (Matrix4x4 *)&local_f8, local_178);
      Matrix4x4__Transformation2DSkew(local_178, (Vector2 *)(self + 0x40), (Vector2 *)0x0,
                                      (Vector2 *)0x0);
      local_14c = *(float *)(self + 0x38);
      local_16c = *(float *)(self + 0x30) - *(float *)(self + 0x50);
      local_15c = *(float *)(self + 0x34) - *(float *)(self + 0x54);
      Matrix4x4__Multiply(local_178, (Matrix4x4 *)&local_f8, local_178);
    } else {
      Vector2__operator_mul__005be200(local_78, arg4);
      fVar4 = DAT_005be894 /* R:1.0f */ - arg4;
      Vector2__operator_mul__005be200(local_88, fVar4);
      Vector2__operator_plus__005be140((Vector2 *)&local_b8, local_88);
      local_138 = matIdentity;
      local_128 = DAT_005ded50 /* R:0.0f */;
      local_118 = DAT_005ded60 /* R:0.0f */;
      local_110 = DAT_005ded68 /* R:1.0f */;
      local_108 = DAT_005ded70 /* R:0.0f */;
      local_100 = DAT_005ded78 /* R:0.0f */;
      _local_130 = CONCAT44(local_b8, (int)DAT_005ded48 /* R:0.0f */);
      _local_120 = CONCAT44(local_b4, (int)DAT_005ded58 /* R:0.0f */);
      Vector2__operator_mul__005be200(local_58, arg4);
      Vector2__operator_mul__005be200(local_68, fVar4);
      Vector2__operator_plus__005be140(local_a8, local_68);
      Matrix4x4__Transformation2DSkew(local_178, (Vector2 *)0x0, local_a8, (Vector2 *)0x0);
      Matrix4x4__Multiply((Matrix4x4 *)&local_138, (Matrix4x4 *)&local_138, local_178);
      Vector2__operator_mul__005be200(local_38, arg4);
      Vector2__operator_mul__005be200(local_48, fVar4);
      Vector2__operator_plus__005be140(local_98, local_48);
      Matrix4x4__Transformation2DSkew(local_178, local_98, (Vector2 *)0x0, (Vector2 *)0x0);
      lVar1 = *(long *)(self + 0x88);
      local_14c = fVar4 * *(float *)(self + 0x38) + arg4 * *(float *)(lVar1 + 0x38);
      local_16c = (*(float *)(lVar1 + 0x30) * arg4 - local_b8) + *(float *)(self + 0x30) * fVar4;
      local_15c = (*(float *)(lVar1 + 0x34) * arg4 - local_b4) + *(float *)(self + 0x34) * fVar4;
      Matrix4x4__Multiply(local_178, (Matrix4x4 *)&local_138, local_178);
    }
    Matrix4x4__Multiply(local_178, local_178, arg3);
    plVar2 = *(long **)(*(long *)(*(long *)(self + 0x28) + 0x48) +
                        (ulong) * (ushort *)(self + 0x20) * 8);
    uVar3 =
        (**(code **)(*plVar2 + 0x20))(arg2, plVar2, arg1, *(uint32_t *)(self + 0x84), local_178);
  }
  return uVar3;
}
