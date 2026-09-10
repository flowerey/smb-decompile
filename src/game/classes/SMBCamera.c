/* src/game/classes/SMBCamera.c — 11 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "SMBCamera.h"

/* ======================================================================
 * SMBCamera__SMBCamera  (Ghidra `SMBCamera` @ 0048ddc0)
 * Signature: uint8_t __thiscall SMBCamera(SMBCamera * self)
 * Class: SMBCamera
 * Calls: `Camera__Camera__00581800`, `Camera__SetupCamera`, `TWindow__getAspectRatio`
 * Called by: `GSuperMeatBoy__Initialize__00516f60`
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SMBCamera__SMBCamera() */

void __thiscall SMBCamera__SMBCamera(SMBCamera *self)

{
  uint64_t uVar1;
  long lVar2;
  SMBCamera *pSVar3;
  uint32_t uVar4;

  Camera__Camera__00581800((Camera *)self);
  pSVar3 = self + 0x1e0;
  do {
    *(uint32_t *)pSVar3 = 0;
    *(uint32_t *)(pSVar3 + 4) = 0;
    *(uint32_t *)(pSVar3 + 8) = 0xc3fa0000;
    *(uint32_t *)(pSVar3 + 0xc) = 0;
    *(uint32_t *)(pSVar3 + 0x10) = 0;
    *(uint64_t *)(pSVar3 + 0x18) = 0;
    *(uint64_t *)(pSVar3 + 0x20) = 0;
    lVar2 = SuperMeatBoy;
    pSVar3 = pSVar3 + 0x28;
  } while (pSVar3 != self + 0x1180);
  *(uint64_t *)(self + 0x1180) = 0;
  *(uint64_t *)(self + 0x1188) = 0;
  *(uint32_t *)(self + 0x1190) = 0;
  *(uint32_t *)(self + 0x11a0) = 0;
  *(uint32_t *)(self + 0x11a4) = 0;
  *(uint32_t *)(self + 0x11a8) = 0;
  *(uint32_t *)(self + 0x11ac) = 0;
  *(uint32_t *)(self + 0x11b0) = 0;
  *(uint32_t *)(self + 0x11b8) = 0;
  *(uint32_t *)(self + 0x11c0) = 0;
  *(uint32_t *)(self + 0x11c4) = 0;
  *(uint32_t *)(self + 0x130) = 0x3f490fdb;
  if (*(int *)(lVar2 + 0x3a4) == 0) {
    *(uint32_t *)(self + 0x134) = 0x3fe38e39;
  } else {
    uVar4 = TWindow__getAspectRatio(Window);
    *(uint32_t *)(self + 0x134) = uVar4;
  }
  uVar1 = _UNK_005c1908;
  *(uint64_t *)(self + 0x100) = 0;
  *(uint64_t *)(self + 0x110) = 0;
  *(uint64_t *)(self + 0x108) = uVar1;
  *(uint64_t *)(self + 0x118) = 0;
  *(uint64_t *)(self + 0x128) = 0;
  uVar1 = _DAT_005c1910 /* R:0.0f */;
  *(uint32_t *)(self + 0x138) = 0x3f800000;
  *(uint64_t *)(self + 0x120) = uVar1;
  *(uint32_t *)(self + 0x13c) = 0x461c4000;
  *(uint32_t *)(self + 0x1d4) = 1;
  /* try { // try from 0048df19 to 0048df2f has its CatchHandler @ 0048df3d */
  Camera__SetupCamera((Camera *)self);
  return;
}

/* ======================================================================
 * SMBCamera__SMBCamera__0048df60  (Ghidra `~SMBCamera` @ 0048df60)
 * Signature: uint8_t __thiscall ~SMBCamera(SMBCamera * self)
 * Class: SMBCamera
 * Calls: (none)
 * Called by: `GSuperMeatBoy__GSuperMeatBoy__00512120`
 */
/* SMBCamera__SMBCamera__0048df60() */

void __thiscall SMBCamera__SMBCamera__0048df60(SMBCamera *self)

{
  return;
}

/* ======================================================================
 * SMBCamera__Update  (Ghidra `Update` @ 0048df70)
 * Signature: uint8_t __thiscall Update(SMBCamera * self)
 * Class: SMBCamera
 * Calls: `AutoLockSection__AutoLockSection`, `AutoLockSection__AutoLockSection__005b59d0`, `Camera__SetCameraMatricies`, `Camera__Update`, `GSuperMeatBoy__GetCameraFocus`, `GSuperMeatBoy__getChar`, `GetRandomINT`, `LoadingRenderThreadActive`, `TWindow__getAspectRatio`, `Vector2__operator_assign` (+4 more)
 * Called by: `RenderSetupLayer__Render`, `SMBEditor__SetToLightingMode`, `SMBEditor__Update`
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SMBCamera__Update() */

void __thiscall SMBCamera__Update(SMBCamera *self)

{
  float fVar1;
  float fVar2;
  int iVar3;
  long lVar4;
  float *pfVar5;
  double dVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  GSuperMeatBoy *pGVar15;
  int iVar16;
  float *pfVar17;
  long lVar18;
  float fVar19;
  uint32_t uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_138;
  float local_134;
  double local_128;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float local_104;
  uint32_t local_100;
  uint32_t local_fc;
  AutoLockSection local_f8[16];
  float local_e8;
  float local_e4;
  float local_d8;
  float local_d4;
  Vector2 local_c8[16];
  float local_b8;
  float local_b4;
  float local_a8;
  float local_a4;
  Vector2 local_98[16];
  float local_88;
  float local_84;
  float local_78;
  float local_74;
  uint32_t local_68;
  uint32_t local_64;
  uint64_t local_58;
  Vector2 local_48[16];
  Vector2 local_38[16];
  Vector2 local_28[16];

  AutoLockSection__AutoLockSection(local_f8, (CriticalSection *)cameraUpdateSection);
  if (*(int *)(SuperMeatBoy + 0x3a4) == 0) {
    iVar3 = *(int *)(self + 0x11b0);
    *(uint32_t *)(self + 0x134) = 0x3fe38e39;
    iVar16 = *(int *)(self + 0x1190);
  } else {
    /* try { // try from 0048e1cf to 0048e1d3 has its CatchHandler @ 0048eb4d */
    uVar20 = TWindow__getAspectRatio(Window);
    iVar3 = *(int *)(self + 0x11b0);
    *(uint32_t *)(self + 0x134) = uVar20;
    iVar16 = *(int *)(self + 0x1190);
  }
  if ((iVar3 != 1) || (iVar16 != 0)) {
    if (iVar16 == 3) {
      local_64 = *(uint32_t *)(self + 0x104);
      local_68 = *(uint32_t *)(self + 0x100);
      /* try { // try from 0048e85e to 0048e862 has its CatchHandler @ 0048eb54 */
      lVar18 = GSuperMeatBoy__getChar(SuperMeatBoy, 1);
      local_58._4_4_ = (float)((ulong) * (uint64_t *)(lVar18 + 0xa0) >> 0x20);
      local_58 =
          CONCAT44(_DAT_005c0074 /* R:30.0f */ + local_58._4_4_, (int)*(uint64_t *)(lVar18 + 0xa0));
      /* try { // try from 0048e8a4 to 0048e94a has its CatchHandler @ 0048eb52 */
      Vector2__operator_mul__005be200(local_28, _DAT_005bfba8 /* R:0.10000000149011612f */);
      Vector2__operator_mul__005be200(local_38, DAT_005c17e4 /* R:0.8999999761581421f */);
      Vector2__operator_plus__005be140(local_48, local_38);
      Vector2__operator_assign((Vector2 *)&local_68, local_48);
      fVar19 = DAT_005c17e4 /* R:0.8999999761581421f */ * *(float *)(self + 0x108);
      *(uint32_t *)(self + 0x100) = local_68;
      *(uint32_t *)(self + 0x110) = local_68;
      *(uint32_t *)(self + 0x104) = local_64;
      *(uint32_t *)(self + 0x114) = local_64;
      *(float *)(self + 0x108) = fVar19 - DAT_005c13fc /* R:20.0f */;
      Camera__SetCameraMatricies((Camera *)self, 1);
      *(uint32_t *)(self + 0x1d4) = 1;
    }
    goto LAB_0048dfd1;
  }
  lVar18 = *(long *)(SuperMeatBoy + 0x40);
  lVar4 = *(long *)(SuperMeatBoy + 0x38);
  local_118 = 0.0;
  fStack_114 = 0.0;
  fStack_110 = 0.0;
  fStack_10c = 0.0;
  if (*(long *)(self + 0x1180) == 0) {
    local_134 = 0.0;
    local_138 = 0.0;
    local_148 = 0.0;
    local_144 = 0.0;
    local_150 = 0.0;
    local_14c = DAT_005be894 /* R:1.0f */;
    local_128 = DAT_005c1938 /* R:0.0f */;
  } else if (*(long *)(*(long *)(self + 0x1180) + 0x18) == 0) {
    local_144 = *(float *)(self + 0x11a0);
    local_148 = *(float *)(self + 0x11a4);
    local_138 = *(float *)(self + 0x11a8);
    local_134 = *(float *)(self + 0x11ac);
    /* try { // try from 0048eaf2 to 0048eaf6 has its CatchHandler @ 0048eb66 */
    GSuperMeatBoy__GetCameraFocus(SuperMeatBoy, (FPUVector *)&local_118);
    local_150 = DAT_005be6e8 /* R:0.25f */;
    fStack_110 = *(float *)(*(long *)(self + 0x1180) + 8);
    local_14c = DAT_005c1930 /* R:0.75f */;
    local_128 = DAT_005c1938 /* R:0.0f */;
  } else {
    pfVar17 = *(float **)(self + 0x1198);
    pfVar5 = *(float **)(self + 0x1188);
    if (pfVar17 == pfVar5) {
      if (*(float *)(self + 0x11bc) < *(float *)(self + 0x11b4)) {
        *(float *)(self + 0x11b4) = *(float *)(self + 0x11bc);
      }
    LAB_0048e980:
      if (pfVar17 != (float *)0x0)
        goto LAB_0048e2ac;
      local_134 = 0.0;
      local_138 = 0.0;
      local_148 = 0.0;
      local_144 = 0.0;
      local_150 = 0.0;
    } else {
      fVar19 = *(float *)(self + 0x11b4);
      if (fVar19 < *(float *)(self + 0x11bc) || fVar19 == *(float *)(self + 0x11bc))
        goto LAB_0048e980;
      if (pfVar17 == (float *)0x0) {
        *(float **)(self + 0x1198) = pfVar5;
        pfVar17 = pfVar5;
      }
      pfVar17 = *(float **)(pfVar17 + 6);
      *(float **)(self + 0x1198) = pfVar17;
      if ((pfVar17 == (float *)0x0) || (*(long *)(pfVar17 + 6) == 0)) {
        *(float *)(self + 0x11b8) = fVar19;
        goto LAB_0048e980;
      }
      *(float *)(self + 0x11b8) = pfVar17[4];
      *(uint32_t *)(self + 0x11bc) = *(uint32_t *)(*(long *)(pfVar17 + 6) + 0x10);
    LAB_0048e2ac:
      local_144 = *pfVar17;
      local_148 = pfVar17[1];
      local_138 = pfVar17[2];
      local_134 = pfVar17[3];
      pfVar17 = *(float **)(pfVar17 + 6);
      local_118 = local_144;
      fStack_114 = local_148;
      fStack_110 = local_138;
      fStack_10c = local_134;
      if (pfVar17 != (float *)0x0) {
        local_118 = *pfVar17;
        fStack_114 = pfVar17[1];
        fStack_110 = pfVar17[2];
        fStack_10c = pfVar17[3];
      }
      if (*(float *)(self + 0x11bc) <= 0.0) {
        local_150 = 0.0;
      } else {
        local_150 = (*(float *)(self + 0x11b4) - *(float *)(self + 0x11b8)) /
                    (*(float *)(self + 0x11bc) - *(float *)(self + 0x11b8));
        if (DAT_005be894 /* R:1.0f */ <= local_150) {
          local_150 = DAT_005be894 /* R:1.0f */;
        }
      }
    }
    local_108 = 0.0;
    local_104 = 0.0;
    local_100 = 0;
    local_fc = 0;
    /* try { // try from 0048e36a to 0048e36e has its CatchHandler @ 0048eb64 */
    GSuperMeatBoy__GetCameraFocus(SuperMeatBoy, (FPUVector *)&local_108);
    fVar19 = fStack_110;
    local_14c = DAT_005be894 /* R:1.0f */ - local_150;
    local_e8 = local_108;
    local_e4 = local_104;
    local_d4 = local_148 * local_14c + local_150 * fStack_114;
    local_d8 = local_144 * local_14c + local_150 * local_118;
    /* try { // try from 0048e3fa to 0048e3fe has its CatchHandler @ 0048eb62 */
    Vector2__operator_minus__005be180(local_c8, (Vector2 *)&local_e8);
    local_b8 = local_118;
    local_a8 = local_144;
    local_a4 = local_148;
    local_b4 = fStack_114;
    /* try { // try from 0048e44d to 0048e466 has its CatchHandler @ 0048eb56 */
    Vector2__operator_minus__005be180(local_98, (Vector2 *)&local_b8);
    fVar21 = (float)Vector2__Dot(local_98, local_c8);
    fVar19 = local_14c * local_138 + local_150 * fVar19;
    if (fVar21 <= 0.0) {
      local_128 = (double)fVar19;
    } else {
      local_144 = *(float *)(self + 0x11a0);
      local_148 = *(float *)(self + 0x11a4);
      local_128 = (double)fVar19;
      fStack_10c = 0.0;
      local_118 = local_e8;
      local_138 = *(float *)(self + 0x11a8);
      fStack_114 = local_e4;
      local_134 = *(float *)(self + 0x11ac);
      local_14c = DAT_005c1930 /* R:0.75f */;
      local_150 = DAT_005be6e8 /* R:0.25f */;
      fStack_110 = fVar19;
    }
  }
  dVar6 = tan((double)(DAT_005be6e4 /* R:0.5f */ * *(float *)(lVar4 + 0x130)));
  fVar19 = *(float *)(lVar18 + 0x22bc);
  fVar21 = *(float *)(lVar18 + 0x22b4);
  fVar1 = *(float *)(lVar18 + 0x22c0);
  fVar2 = *(float *)(lVar18 + 0x22b8);
  /* try { // try from 0048e57c to 0048e594 has its CatchHandler @ 0048eb36 */
  Vector2__operator_assign((Vector2 *)&local_88, (Vector2 *)(lVar18 + 0x22b4));
  Vector2__operator_assign((Vector2 *)&local_78, (Vector2 *)(lVar18 + 0x22bc));
  pGVar15 = SuperMeatBoy;
  fStack_10c = local_14c * local_134 + local_150 * fStack_10c;
  fStack_110 = local_14c * local_138 + local_150 * fStack_110;
  fStack_114 = local_14c * local_148 + local_150 * fStack_114;
  fVar22 = (float)((uint)(float)(local_128 * dVar6) & DAT_005be880 /* R:u32=2147483647 */);
  fVar23 = *(float *)(lVar4 + 0x134) * fVar22;
  local_118 = local_14c * local_144 + local_150 * local_118;
  if (fVar23 + fVar23 <= (float)((uint)(*(float *)(lVar18 + 0x22bc) - *(float *)(lVar18 + 0x22b4)) &
                                 DAT_005be880 /* R:u32=2147483647 */)) {
    fVar19 = local_78 - fVar23;
    if (local_118 <= local_78 - fVar23) {
      fVar19 = local_118;
    }
    if (fVar19 <= fVar23 + local_88) {
      fVar19 = fVar23 + local_88;
    }
  } else {
    fVar19 = (float)((uint)(fVar19 - fVar21) & DAT_005be880 /* R:u32=2147483647 */) *
                 DAT_005be6e4 /* R:0.5f */
             + fVar21;
  }
  if (fVar22 + fVar22 <= (float)((uint)(*(float *)(lVar18 + 0x22c0) - *(float *)(lVar18 + 0x22b8)) &
                                 DAT_005be880 /* R:u32=2147483647 */)) {
    fVar21 = local_74 - fVar22;
    if (fStack_114 <= local_74 - fVar22) {
      fVar21 = fStack_114;
    }
    if (fVar21 <= fVar22 + local_84) {
      fVar21 = fVar22 + local_84;
    }
  } else {
    fVar21 = (float)((uint)(fVar1 - fVar2) & DAT_005be880 /* R:u32=2147483647 */) *
                 DAT_005be6e4 /* R:0.5f */
             + fVar2;
  }
  lVar18 = *(long *)(SuperMeatBoy + 0x38);
  *(uint32_t *)(lVar18 + 0x1d4) = 1;
  *(float *)(lVar18 + 0x100) = fVar19;
  *(uint32_t *)(lVar18 + 0x10c) = 0;
  *(float *)(lVar18 + 0x104) = fVar21;
  *(float *)(lVar18 + 0x108) = fStack_110;
  lVar18 = *(long *)(pGVar15 + 0x38);
  *(float *)(lVar18 + 0x110) = fVar19;
  *(uint32_t *)(lVar18 + 0x1d4) = 1;
  *(uint32_t *)(lVar18 + 0x118) = 0;
  *(float *)(lVar18 + 0x114) = fVar21;
  *(uint32_t *)(lVar18 + 0x11c) = 0;
  *(uint32_t *)(self + 0x11ac) = 0;
  *(float *)(self + 0x11a0) = fVar19;
  fVar19 = *(float *)(self + 0x11b4) + fOneFrameTimeStep;
  *(float *)(self + 0x11a4) = fVar21;
  *(float *)(self + 0x11a8) = fStack_110;
  *(float *)(self + 0x11b4) = fVar19;
LAB_0048dfd1:
  if (*(float *)(self + 0x11c4) <= 0.0) {
    /* try { // try from 0048e7c3 to 0048e7c7 has its CatchHandler @ 0048eb4d */
    Camera__Update((Camera *)self);
  } else {
    uVar11 = *(uint64_t *)(self + 0x110);
    uVar8 = *(uint64_t *)(self + 0x110);
    uVar12 = *(uint64_t *)(self + 0x118);
    uVar9 = *(uint64_t *)(self + 0x118);
    uVar10 = *(uint64_t *)(self + 0x100);
    uVar7 = *(uint64_t *)(self + 0x100);
    uVar14 = *(uint64_t *)(self + 0x108);
    uVar13 = *(uint64_t *)(self + 0x108);
    /* try { // try from 0048e05f to 0048e101 has its CatchHandler @ 0048eb4b */
    GetRandomINT(0, 100);
    *(float *)(self + 0x114) = *(float *)(self + 0x114) + *(float *)(self + 0x11c0);
    *(float *)(self + 0x104) = *(float *)(self + 0x11c0) + *(float *)(self + 0x104);
    iVar16 = GetRandomINT(0, 100);
    if (iVar16 < 0x33) {
      *(float *)(self + 0x110) = *(float *)(self + 0x110) + *(float *)(self + 0x11c0);
      *(float *)(self + 0x100) = *(float *)(self + 0x11c0) + *(float *)(self + 0x100);
    } else {
      *(float *)(self + 0x110) = *(float *)(self + 0x110) - *(float *)(self + 0x11c0);
      *(float *)(self + 0x100) = *(float *)(self + 0x100) - *(float *)(self + 0x11c0);
    }
    fVar19 = *(float *)(self + 0x11c4) - fOneFrameTimeStep;
    *(float *)(self + 0x11c4) = fVar19;
    if (fVar19 <= 0.0) {
      *(uint64_t *)(self + 0x100) = uVar10;
      *(uint64_t *)(self + 0x108) = uVar14;
      *(uint64_t *)(self + 0x110) = uVar11;
      *(uint64_t *)(self + 0x118) = uVar12;
    }
    Camera__Update((Camera *)self);
    *(uint64_t *)(self + 0x100) = uVar7;
    *(uint64_t *)(self + 0x108) = uVar13;
    *(uint64_t *)(self + 0x110) = uVar8;
    *(uint64_t *)(self + 0x118) = uVar9;
  }
  /* try { // try from 0048e164 to 0048e179 has its CatchHandler @ 0048eb4d */
  iVar16 = LoadingRenderThreadActive();
  if (iVar16 == 0) {
    Camera__SetCameraMatricies((Camera *)self, 1);
  }
  AutoLockSection__AutoLockSection__005b59d0(local_f8);
  return;
}

/* ======================================================================
 * SMBCamera__AddWayPoint  (Ghidra `AddWayPoint` @ 0048eb80)
 * Signature: uint8_t __thiscall AddWayPoint(SMBCamera * self, SMBCameraWayPoint * arg1)
 * Class: SMBCamera
 * Calls: `AutoLockSection__AutoLockSection`, `AutoLockSection__AutoLockSection__005b59d0`
 * Called by: `PlaceCameraItems`, `SMBLevelLoad`
 */
/* SMBCamera__AddWayPoint(SMBCameraWayPoint&) */

SMBCamera *__thiscall SMBCamera__AddWayPoint(SMBCamera *self, SMBCameraWayPoint *arg1)

{
  uint64_t uVar1;
  SMBCamera *pSVar2;
  int iVar3;
  SMBCamera *pSVar4;
  AutoLockSection aAStack_28[16];

  AutoLockSection__AutoLockSection(aAStack_28, (CriticalSection *)cameraUpdateSection);
  pSVar2 = self + 0x1f8;
  iVar3 = 0;
  while (((*(long *)pSVar2 != 0 || (*(long *)(pSVar2 + 8) != 0)) ||
          (pSVar4 = self + (long)iVar3 * 0x28 + 0x1e0, pSVar4 == *(SMBCamera **)(self + 0x1180)))) {
    iVar3 = iVar3 + 1;
    pSVar2 = pSVar2 + 0x28;
    if (iVar3 == 100) {
      pSVar4 = (SMBCamera *)0x0;
    LAB_0048ec63:
      AutoLockSection__AutoLockSection__005b59d0(aAStack_28);
      return pSVar4;
    }
  }
  if (pSVar4 != (SMBCamera *)0x0) {
    *(uint32_t *)pSVar4 = *(uint32_t *)arg1;
    *(uint32_t *)(pSVar4 + 4) = *(uint32_t *)(arg1 + 4);
    *(uint32_t *)(pSVar4 + 8) = *(uint32_t *)(arg1 + 8);
    *(uint32_t *)(pSVar4 + 0xc) = *(uint32_t *)(arg1 + 0xc);
    *(uint32_t *)(pSVar4 + 0x10) = *(uint32_t *)(arg1 + 0x10);
    *(uint64_t *)(pSVar4 + 0x18) = *(uint64_t *)(arg1 + 0x18);
    *(uint64_t *)(pSVar4 + 0x20) = *(uint64_t *)(arg1 + 0x20);
    uVar1 = *(uint64_t *)(self + 0x1188);
    *(uint64_t *)(pSVar4 + 0x18) = 0;
    *(uint64_t *)(pSVar4 + 0x20) = uVar1;
    if (*(long *)(self + 0x1180) == 0) {
      *(SMBCamera **)(self + 0x1180) = pSVar4;
    }
    if (*(long *)(self + 0x1188) != 0) {
      *(SMBCamera **)(*(long *)(self + 0x1188) + 0x18) = pSVar4;
    }
    *(SMBCamera **)(self + 0x1188) = pSVar4;
  }
  goto LAB_0048ec63;
}

/* ======================================================================
 * SMBCamera__RemoveWayPoint  (Ghidra `RemoveWayPoint` @ 0048ec80)
 * Signature: uint8_t __thiscall RemoveWayPoint(SMBCamera * self, SMBCameraWayPoint * arg1)
 * Class: SMBCamera
 * Calls: `AutoLockSection__AutoLockSection`, `AutoLockSection__AutoLockSection__005b59d0`
 * Called by: `DeleteCameraItem`
 */
/* SMBCamera__RemoveWayPoint(SMBCameraWayPoint*) */

void __thiscall SMBCamera__RemoveWayPoint(SMBCamera *self, SMBCameraWayPoint *arg1)

{
  long lVar1;
  AutoLockSection aAStack_28[24];

  AutoLockSection__AutoLockSection(aAStack_28, (CriticalSection *)cameraUpdateSection);
  if (arg1 == (SMBCameraWayPoint *)0x0)
    goto LAB_0048ecd0;
  if (*(long *)(arg1 + 0x18) == 0) {
    *(uint64_t *)(self + 0x1188) = *(uint64_t *)(arg1 + 0x20);
    lVar1 = *(long *)(arg1 + 0x20);
    if (lVar1 == 0)
      goto LAB_0048ecf8;
  LAB_0048ecb8:
    *(uint64_t *)(lVar1 + 0x18) = *(uint64_t *)(arg1 + 0x18);
  } else {
    *(uint64_t *)(*(long *)(arg1 + 0x18) + 0x20) = *(uint64_t *)(arg1 + 0x20);
    lVar1 = *(long *)(arg1 + 0x20);
    if (lVar1 != 0)
      goto LAB_0048ecb8;
  LAB_0048ecf8:
    *(uint64_t *)(self + 0x1180) = *(uint64_t *)(*(long *)(self + 0x1180) + 0x18);
  }
  *(uint64_t *)(arg1 + 0x18) = 0;
  *(uint64_t *)(arg1 + 0x20) = 0;
LAB_0048ecd0:
  AutoLockSection__AutoLockSection__005b59d0(aAStack_28);
  return;
}

/* ======================================================================
 * SMBCamera__SetStartPosition  (Ghidra `SetStartPosition` @ 0048ed10)
 * Signature: uint8_t __thiscall SetStartPosition(SMBCamera * self, Vector2 * arg1)
 * Class: SMBCamera
 * Calls: `AutoLockSection__AutoLockSection`, `AutoLockSection__AutoLockSection__005b59d0`
 * Called by: `SMBEditor__NewLevel`, `SMBLevelLoad`
 */
/* SMBCamera__SetStartPosition(Vector2 const&) */

void __thiscall SMBCamera__SetStartPosition(SMBCamera *self, Vector2 *arg1)

{
  SMBCamera *pSVar1;
  uint32_t uVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  SMBCamera *pSVar7;
  bool bVar8;
  byte bVar9;
  AutoLockSection aAStack_28[24];
  ulong uVar6;

  bVar9 = 0;
  AutoLockSection__AutoLockSection(aAStack_28, (CriticalSection *)cameraUpdateSection);
  pSVar1 = self + 0x1e0;
  uVar6 = 4000;
  iVar4 = 4000;
  bVar8 = ((ulong)pSVar1 & 1) != 0;
  pSVar7 = pSVar1;
  if (bVar8) {
    self[0x1e0] = (SMBCamera)0x0;
    uVar6 = 3999;
    iVar4 = 3999;
    pSVar7 = self + 0x1e1;
  }
  if (((ulong)pSVar7 & 2) == 0) {
    uVar5 = (uint)uVar6;
  } else {
    *(uint16_t *)pSVar7 = 0;
    pSVar7 = pSVar7 + 2;
    uVar5 = iVar4 - 2;
    uVar6 = (ulong)uVar5;
  }
  if (((ulong)pSVar7 & 4) != 0) {
    *(uint32_t *)pSVar7 = 0;
    uVar6 = (ulong)(uVar5 - 4);
    pSVar7 = pSVar7 + 4;
  }
  for (uVar3 = uVar6 >> 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(uint64_t *)pSVar7 = 0;
    pSVar7 = pSVar7 + (ulong)bVar9 * -0x10 + 8;
  }
  if ((uVar6 & 4) != 0) {
    *(uint32_t *)pSVar7 = 0;
    pSVar7 = pSVar7 + 4;
  }
  if ((uVar6 & 2) != 0) {
    *(uint16_t *)pSVar7 = 0;
    pSVar7 = pSVar7 + 2;
  }
  if (bVar8) {
    *pSVar7 = (SMBCamera)0x0;
  }
  *(SMBCamera **)(self + 0x1180) = pSVar1;
  *(SMBCamera **)(self + 0x1188) = pSVar1;
  *(uint32_t *)(self + 0x1e0) = *(uint32_t *)arg1;
  uVar2 = *(uint32_t *)(arg1 + 4);
  *(uint32_t *)(self + 0x1e8) = 0xc3fa0000;
  *(uint32_t *)(self + 0x1e4) = uVar2;
  AutoLockSection__AutoLockSection__005b59d0(aAStack_28);
  return;
}

/* ======================================================================
 * SMBCamera__SetCameraPosition2D  (Ghidra `SetCameraPosition2D` @ 0048ee20)
 * Signature: uint8_t __thiscall SetCameraPosition2D(SMBCamera * self, Vector2 * arg1)
 * Class: SMBCamera
 * Calls: `AutoLockSection__AutoLockSection`, `AutoLockSection__AutoLockSection__005b59d0`
 * Called by: `MeatBoyCharactor__Update`
 */
/* SMBCamera__SetCameraPosition2D(Vector2 const&) */

void __thiscall SMBCamera__SetCameraPosition2D(SMBCamera *self, Vector2 *arg1)

{
  uint32_t *puVar1;
  AutoLockSection aAStack_28[24];

  AutoLockSection__AutoLockSection(aAStack_28, (CriticalSection *)cameraUpdateSection);
  **(uint32_t **)(self + 0x1180) = *(uint32_t *)arg1;
  *(uint32_t *)(*(long *)(self + 0x1180) + 4) = *(uint32_t *)(arg1 + 4);
  puVar1 = *(uint32_t **)(self + 0x1180);
  *(uint32_t *)(self + 0x11a0) = *puVar1;
  *(uint32_t *)(self + 0x11a4) = puVar1[1];
  *(uint32_t *)(self + 0x11a8) = puVar1[2];
  *(uint32_t *)(self + 0x11ac) = puVar1[3];
  AutoLockSection__AutoLockSection__005b59d0(aAStack_28);
  return;
}

/* ======================================================================
 * SMBCamera__Reset  (Ghidra `Reset` @ 0048ee90)
 * Signature: uint8_t __thiscall Reset(SMBCamera * self)
 * Class: SMBCamera
 * Calls: `AutoLockSection__AutoLockSection`, `AutoLockSection__AutoLockSection__005b59d0`, `Update`
 * Called by: `FlyWrench__Reset`, `GSuperMeatBoy__SetCurrentLevel`, `GSuperMeatBoy__ShowCurrentReplay`, `Machinarium__Reset`, `MeatBoyCharactor__Reset`, `Ogmo__Reset`, `Runman__Reset`, `SMBEditor__DeActivate`, `ShowCurrentReplay`
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SMBCamera__Reset() */

void __thiscall SMBCamera__Reset(SMBCamera *self)

{
  uint32_t *puVar1;
  uint64_t uVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  uint32_t uVar6;
  AutoLockSection aAStack_18[16];
  uint32_t uVar5;

  AutoLockSection__AutoLockSection(aAStack_18, (CriticalSection *)cameraUpdateSection);
  puVar1 = *(uint32_t **)(self + 0x1180);
  uVar4 = 0;
  uVar5 = 0;
  *(uint32_t *)(self + 0x11b4) = 0;
  *(uint32_t *)(self + 0x11b8) = 0;
  uVar2 = _UNK_005c1928;
  if (puVar1 == (uint32_t *)0x0) {
    uVar3 = 0xc3fa0000;
    *(uint32_t *)(self + 0x11bc) = 0;
    *(uint64_t *)(self + 0x1198) = 0;
    *(uint64_t *)(self + 0x11a0) = 0;
    *(uint64_t *)(self + 0x11a8) = uVar2;
    uVar6 = uVar4;
  } else {
    if (*(long *)(puVar1 + 6) == 0) {
      *(uint32_t *)(self + 0x11bc) = 0;
    } else {
      *(uint32_t *)(self + 0x11bc) = *(uint32_t *)(*(long *)(puVar1 + 6) + 0x10);
    }
    *(uint32_t **)(self + 0x1198) = puVar1;
    uVar4 = *puVar1;
    *(uint32_t *)(self + 0x11a0) = uVar4;
    uVar6 = puVar1[1];
    *(uint32_t *)(self + 0x11a4) = uVar6;
    uVar3 = puVar1[2];
    *(uint32_t *)(self + 0x11a8) = uVar3;
    uVar5 = puVar1[3];
    *(uint32_t *)(self + 0x11ac) = uVar5;
  }
  *(uint32_t *)(self + 0x100) = uVar4;
  *(uint32_t *)(self + 0x104) = uVar6;
  *(uint32_t *)(self + 0x108) = uVar3;
  *(uint32_t *)(self + 0x10c) = uVar5;
  *(uint32_t *)(self + 0x130) = 0x3f490fdb;
  *(uint32_t *)(self + 0x1190) = 0;
  *(uint32_t *)(self + 0x11c0) = 0;
  *(uint32_t *)(self + 0x11c4) = 0;
  /* try { // try from 0048ef46 to 0048ef4a has its CatchHandler @ 0048efab */
  Update(self);
  AutoLockSection__AutoLockSection__005b59d0(aAStack_18);
  return;
}

/* ======================================================================
 * SMBCamera__GetNumWayPoints  (Ghidra `GetNumWayPoints` @ 0048efc0)
 * Signature: uint8_t __thiscall GetNumWayPoints(SMBCamera * self)
 * Class: SMBCamera
 * Calls: `AutoLockSection__AutoLockSection`, `AutoLockSection__AutoLockSection__005b59d0`
 * Called by: `SMBLevelSave`
 */
/* SMBCamera__GetNumWayPoints() */

int __thiscall SMBCamera__GetNumWayPoints(SMBCamera *self)

{
  long lVar1;
  int iVar2;
  AutoLockSection aAStack_18[16];

  AutoLockSection__AutoLockSection(aAStack_18, (CriticalSection *)cameraUpdateSection);
  iVar2 = 0;
  for (lVar1 = *(long *)(self + 0x1180); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x18)) {
    iVar2 = iVar2 + 1;
  }
  AutoLockSection__AutoLockSection__005b59d0(aAStack_18);
  return iVar2;
}

/* ======================================================================
 * SMBCamera__EndLevelZoomIn  (Ghidra `EndLevelZoomIn` @ 0048f010)
 * Signature: uint8_t __thiscall EndLevelZoomIn(SMBCamera * self)
 * Class: SMBCamera
 * Calls: (none)
 * Called by: `GSuperMeatBoy__BeatLevel`
 */
/* SMBCamera__EndLevelZoomIn() */

void __thiscall SMBCamera__EndLevelZoomIn(SMBCamera *self)

{
  if (1 < *(int *)(SuperMeatBoy + 0x294)) {
    return;
  }
  *(uint32_t *)(self + 0x1190) = 3;
  return;
}

/* ======================================================================
 * SMBCamera__ScreenShake  (Ghidra `ScreenShake` @ 0048f040)
 * Signature: uint8_t __thiscall ScreenShake(SMBCamera * self, float arg1, float arg2)
 * Class: SMBCamera
 * Calls: (none)
 * Called by: `ForestBoss__Render`, `ForestBoss__Update`, `HellBoss__HellAttack_RenderAttack`, `HellBoss__RenderAttack`, `HospitalBoss__Render`, `MaggotScreenShake`, `MeatBoyCharactor__Update`, `QuakeEmitter__Update`, `RaptureBoss__RenderMaggot`, `SMBPalette__ObstacleCollision` (+1 more)
 */
/* SMBCamera__ScreenShake(float, float) */

void __thiscall SMBCamera__ScreenShake(SMBCamera *self, float arg1, float arg2)

{
  *(float *)(self + 0x11c0) = arg1;
  *(float *)(self + 0x11c4) = arg2;
  return;
}
