/* src/game/classes/SMBShooter.c — 3 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "SMBShooter.h"

/* ======================================================================
 * SMBShooter__AddShot  (Ghidra `AddShot` @ 004e0140)
 * Signature: uint8_t __thiscall AddShot(SMBShooter * self, tagBulletType arg1)
 * Class: SMBShooter
 * Calls: `Vector2__operator_assign`, `Vector2__operator_mul__005be200`, `Vector2__operator_mul_assign__005be220`, `Vector2__operator_plus_assign`, `sincosf`
 * Called by: `SMBPalette__Update`
 */
/* SMBShooter__AddShot(tagBulletType) */

void __thiscall SMBShooter__AddShot(SMBShooter *self, uint arg2)

{
  long lVar1;
  float fVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  bool bVar6;
  float __x;
  float local_110;
  float local_10c;
  uint32_t local_108;
  uint32_t local_104;
  Vector2 local_f8[16];
  float local_e8;
  float local_e4;
  Vector2 local_d8[16];
  float local_c8;
  float local_c4;
  Vector2 local_b8[16];
  float local_a8;
  float local_a4;
  Vector2 local_98[16];
  float local_88;
  float local_84;
  Vector2 local_78[16];
  float local_68;
  float local_64;
  Vector2 local_58[16];
  Vector2 local_48[24];

  bVar6 = arg2 == 3;
  iVar5 = 0;
  do {
    if (*(int *)(self + 0x120) == 2) {
      iVar3 = 0;
    } else if (*(int *)(self + 0x240) == 2) {
      iVar3 = 1;
    } else if (*(int *)(self + 0x360) == 2) {
      iVar3 = 2;
    } else if (*(int *)(self + 0x480) == 2) {
      iVar3 = 3;
    } else if (*(int *)(self + 0x5a0) == 2) {
      iVar3 = 4;
    } else if (*(int *)(self + 0x6c0) == 2) {
      iVar3 = 5;
    } else if (*(int *)(self + 0x7e0) == 2) {
      iVar3 = 6;
    } else if (*(int *)(self + 0x900) == 2) {
      iVar3 = 7;
    } else if (*(int *)(self + 0xa20) == 2) {
      iVar3 = 8;
    } else {
      if (*(int *)(self + 0xb40) != 2) {
        return;
      }
      iVar3 = 9;
    }
    lVar4 = (long)iVar3 * 0x120;
    if (*(long **)(self + lVar4 + 0x140) != (long *)0x0) {
      (**(code **)(**(long **)(self + lVar4 + 0x140) + 0x20))();
    }
    *(uint32_t *)(self + lVar4 + 0x120) = 0;
    fVar2 = DAT_005c1408 /* R:1.5707963705062866f */;
    lVar1 = *(long *)self;
    local_108 = *(uint32_t *)(lVar1 + 0x24);
    local_104 = *(uint32_t *)(lVar1 + 0x28);
    if (arg2 == 2) {
      sincosf(DAT_005c1408 /* R:1.5707963705062866f */ + *(float *)(lVar1 + 0x3c), &local_10c,
              &local_110);
      local_e8 = local_110;
      local_e4 = local_10c;
      Vector2__operator_mul__005be200(local_d8, DAT_005be894 /* R:1.0f */);
      Vector2__operator_assign(local_f8, local_d8);
    } else if (arg2 < 2) {
      sincosf(*(float *)(lVar1 + 0x3c), &local_10c, &local_110);
      local_c8 = local_110;
      local_c4 = local_10c;
      Vector2__operator_mul__005be200(local_b8, DAT_005be894 /* R:1.0f */);
      Vector2__operator_assign(local_f8, local_b8);
    } else if (arg2 == 4) {
      sincosf(*(float *)(lVar1 + 0x3c), &local_10c, &local_110);
      local_a8 = local_110;
      local_a4 = local_10c;
      Vector2__operator_mul__005be200(local_98, DAT_005be894 /* R:1.0f */);
      Vector2__operator_assign(local_f8, local_98);
    } else if (arg2 == 5) {
      sincosf(DAT_005c1408 /* R:1.5707963705062866f */ + *(float *)(lVar1 + 0x3c), &local_10c,
              &local_110);
      local_88 = local_110;
      local_84 = local_10c;
      Vector2__operator_mul__005be200(local_78, DAT_005be894 /* R:1.0f */);
      Vector2__operator_assign(local_f8, local_78);
    } else if (bVar6) {
      __x = (float)iVar5 * DAT_005c1408 /* R:1.5707963705062866f */ + *(float *)(lVar1 + 0x3c);
      sincosf(__x, &local_10c, &local_110);
      local_68 = local_110;
      local_64 = local_10c;
      Vector2__operator_mul__005be200(local_58, DAT_005be894 /* R:1.0f */);
      Vector2__operator_assign(local_f8, local_58);
      *(uint32_t *)(self + lVar4 + 0xc4) = 1;
      *(float *)(self + lVar4 + 0x100) = __x - fVar2;
    }
    Vector2__operator_mul__005be200(local_48, DAT_005c13fc /* R:20.0f */);
    Vector2__operator_plus_assign((Vector2 *)&local_108, local_48);
    if (arg2 == 2) {
      Vector2__operator_mul_assign__005be220(local_f8, DAT_005c07bc /* R:400.0f */);
      goto LAB_004e0378;
    }
    if (arg2 < 2 || bVar6) {
      Vector2__operator_mul_assign__005be220(local_f8, DAT_005c72cc /* R:360.0f */);
    } else {
      if (arg2 == 4) {
        Vector2__operator_mul_assign__005be220(local_f8, (float)*(int *)(*(long *)self + 0x58) +
                                                             DAT_005c07bc /* R:400.0f */);
      LAB_004e0378:
        *(uint32_t *)(self + lVar4 + 0xc4) = 1;
        Vector2__operator_assign((Vector2 *)(self + lVar4 + 200), (Vector2 *)&local_108);
        Vector2__operator_assign((Vector2 *)(self + lVar4 + 0xe0), local_f8);
        *(uint32_t *)(self + lVar4 + 0xbc) = 0;
        *(uint32_t *)(self + lVar4 + 0xb8) = 0;
        *(uint32_t *)(self + lVar4 + 0x124) = 0;
        *(uint *)(self + lVar4 + 0x138) = arg2;
        return;
      }
      if (arg2 == 5) {
        Vector2__operator_mul_assign__005be220(local_f8, DAT_005be890 /* R:200.0f */);
        goto LAB_004e0378;
      }
    }
    *(uint32_t *)(self + lVar4 + 0xc4) = 1;
    Vector2__operator_assign((Vector2 *)(self + lVar4 + 200), (Vector2 *)&local_108);
    Vector2__operator_assign((Vector2 *)(self + lVar4 + 0xe0), local_f8);
    *(uint32_t *)(self + lVar4 + 0xbc) = 0;
    *(uint32_t *)(self + lVar4 + 0xb8) = 0;
    *(uint32_t *)(self + lVar4 + 0x124) = 0;
    *(uint *)(self + lVar4 + 0x138) = arg2;
    if (3 < iVar5) {
      return;
    }
    if (!bVar6) {
      return;
    }
    iVar5 = iVar5 + 1;
  } while (true);
}

/* ======================================================================
 * SMBShooter__SMBShooter  (Ghidra `SMBShooter` @ 004ff470)
 * Signature: uint8_t __thiscall SMBShooter(SMBShooter * self)
 * Class: SMBShooter
 * Calls: `CriticalSection__CriticalSection`
 * Called by: `SMBPalette__FindAnimatedObstacles`
 */
/* SMBShooter__SMBShooter() */

void __thiscall SMBShooter__SMBShooter(SMBShooter *self)

{
  uint64_t uVar1;

  *(uint64_t *)self = 0;
  *(uint32_t *)(self + 8) = 0x3f800000;
  *(uint32_t *)(self + 0xc) = 0;
  *(uint32_t *)(self + 0x10) = 0;
  *(uint32_t *)(self + 0x14) = 0;
  *(uint32_t *)(self + 0x18) = 0;
  *(uint32_t *)(self + 0x1c) = 0;
  *(uint32_t *)(self + 0x20) = 0;
  *(uint32_t *)(self + 0x24) = 0x3f800000;
  *(uint64_t *)(self + 0x70) = 0;
  *(uint32_t *)(self + 0x78) = 1;
  *(uint8_t ***)(self + 0x28) = &PTR__SceneObject2D_005dd3d0;
  /* try { // try from 004ff4dc to 004ff4e0 has its CatchHandler @ 005003ad */
  CriticalSection__CriticalSection((CriticalSection *)(self + 0x80));
  uVar1 = vDefaultStart2D;
  *(uint32_t *)(self + 0xa8) = 0;
  *(uint32_t *)(self + 0xac) = 0;
  *(uint32_t *)(self + 0xb0) = 0x3f800000;
  *(uint32_t *)(self + 0xb4) = 0;
  *(uint32_t *)(self + 0xb8) = 0;
  *(uint32_t *)(self + 0xbc) = 0;
  *(uint32_t *)(self + 0xc0) = 0;
  *(uint32_t *)(self + 0xc4) = 1;
  *(uint64_t *)(self + 200) = uVar1;
  *(uint64_t *)(self + 0xd0) = uVar1;
  *(uint32_t *)(self + 0xd8) = 0;
  *(uint32_t *)(self + 0xdc) = 0;
  *(uint32_t *)(self + 0xe0) = 0;
  *(uint32_t *)(self + 0xe4) = 0;
  *(uint32_t *)(self + 0xf0) = 0;
  *(uint32_t *)(self + 0xf4) = 0;
  *(uint32_t *)(self + 0xf8) = 0x3f800000;
  *(uint32_t *)(self + 0xfc) = 0x3f800000;
  *(uint32_t *)(self + 0x100) = 0;
  *(uint32_t *)(self + 0x104) = 0;
  *(uint32_t *)(self + 0x108) = 0;
  *(uint32_t *)(self + 0x10c) = 0;
  *(uint32_t *)(self + 0x110) = 0;
  *(uint32_t *)(self + 0x114) = 0;
  *(uint32_t *)(self + 0x118) = 0;
  *(uint32_t *)(self + 0x120) = 2;
  *(uint32_t *)(self + 0x124) = 0;
  *(uint32_t *)(self + 0x128) = 0;
  *(uint32_t *)(self + 300) = 0;
  *(uint32_t *)(self + 0x130) = 0;
  *(uint32_t *)(self + 0x134) = 0;
  *(uint32_t *)(self + 0x138) = 0;
  *(uint64_t *)(self + 0x140) = 0;
  *(uint64_t *)(self + 400) = 0;
  *(uint32_t *)(self + 0x198) = 1;
  *(uint8_t ***)(self + 0x148) = &PTR__SceneObject2D_005dd3d0;
  /* try { // try from 004ff65b to 004ff65f has its CatchHandler @ 00500431 */
  CriticalSection__CriticalSection((CriticalSection *)(self + 0x1a0));
  uVar1 = vDefaultStart2D;
  *(uint32_t *)(self + 0x1c8) = 0;
  *(uint32_t *)(self + 0x1cc) = 0;
  *(uint32_t *)(self + 0x1d0) = 0x3f800000;
  *(uint32_t *)(self + 0x1d4) = 0;
  *(uint32_t *)(self + 0x1d8) = 0;
  *(uint32_t *)(self + 0x1dc) = 0;
  *(uint32_t *)(self + 0x1e0) = 0;
  *(uint32_t *)(self + 0x1e4) = 1;
  *(uint64_t *)(self + 0x1e8) = uVar1;
  *(uint64_t *)(self + 0x1f0) = uVar1;
  *(uint32_t *)(self + 0x1f8) = 0;
  *(uint32_t *)(self + 0x1fc) = 0;
  *(uint32_t *)(self + 0x200) = 0;
  *(uint32_t *)(self + 0x204) = 0;
  *(uint32_t *)(self + 0x210) = 0;
  *(uint32_t *)(self + 0x214) = 0;
  *(uint32_t *)(self + 0x218) = 0x3f800000;
  *(uint32_t *)(self + 0x21c) = 0x3f800000;
  *(uint32_t *)(self + 0x220) = 0;
  *(uint32_t *)(self + 0x224) = 0;
  *(uint32_t *)(self + 0x228) = 0;
  *(uint32_t *)(self + 0x22c) = 0;
  *(uint32_t *)(self + 0x230) = 0;
  *(uint32_t *)(self + 0x234) = 0;
  *(uint32_t *)(self + 0x238) = 0;
  *(uint32_t *)(self + 0x240) = 2;
  *(uint32_t *)(self + 0x244) = 0;
  *(uint32_t *)(self + 0x248) = 0;
  *(uint32_t *)(self + 0x24c) = 0;
  *(uint32_t *)(self + 0x250) = 0;
  *(uint32_t *)(self + 0x254) = 0;
  *(uint32_t *)(self + 600) = 0;
  *(uint64_t *)(self + 0x260) = 0;
  *(uint64_t *)(self + 0x2b0) = 0;
  *(uint32_t *)(self + 0x2b8) = 1;
  *(uint8_t ***)(self + 0x268) = &PTR__SceneObject2D_005dd3d0;
  /* try { // try from 004ff7da to 004ff7de has its CatchHandler @ 0050042a */
  CriticalSection__CriticalSection((CriticalSection *)(self + 0x2c0));
  uVar1 = vDefaultStart2D;
  *(uint32_t *)(self + 0x2e8) = 0;
  *(uint32_t *)(self + 0x2ec) = 0;
  *(uint32_t *)(self + 0x2f0) = 0x3f800000;
  *(uint32_t *)(self + 0x2f4) = 0;
  *(uint32_t *)(self + 0x2f8) = 0;
  *(uint32_t *)(self + 0x2fc) = 0;
  *(uint32_t *)(self + 0x300) = 0;
  *(uint32_t *)(self + 0x304) = 1;
  *(uint64_t *)(self + 0x308) = uVar1;
  *(uint64_t *)(self + 0x310) = uVar1;
  *(uint32_t *)(self + 0x318) = 0;
  *(uint32_t *)(self + 0x31c) = 0;
  *(uint32_t *)(self + 800) = 0;
  *(uint32_t *)(self + 0x324) = 0;
  *(uint32_t *)(self + 0x330) = 0;
  *(uint32_t *)(self + 0x334) = 0;
  *(uint32_t *)(self + 0x338) = 0x3f800000;
  *(uint32_t *)(self + 0x33c) = 0x3f800000;
  *(uint32_t *)(self + 0x340) = 0;
  *(uint32_t *)(self + 0x344) = 0;
  *(uint32_t *)(self + 0x348) = 0;
  *(uint32_t *)(self + 0x34c) = 0;
  *(uint32_t *)(self + 0x350) = 0;
  *(uint32_t *)(self + 0x354) = 0;
  *(uint32_t *)(self + 0x358) = 0;
  *(uint32_t *)(self + 0x360) = 2;
  *(uint32_t *)(self + 0x364) = 0;
  *(uint32_t *)(self + 0x368) = 0;
  *(uint32_t *)(self + 0x36c) = 0;
  *(uint32_t *)(self + 0x370) = 0;
  *(uint32_t *)(self + 0x374) = 0;
  *(uint32_t *)(self + 0x378) = 0;
  *(uint64_t *)(self + 0x380) = 0;
  *(uint64_t *)(self + 0x3d0) = 0;
  *(uint32_t *)(self + 0x3d8) = 1;
  *(uint8_t ***)(self + 0x388) = &PTR__SceneObject2D_005dd3d0;
  /* try { // try from 004ff959 to 004ff95d has its CatchHandler @ 00500423 */
  CriticalSection__CriticalSection((CriticalSection *)(self + 0x3e0));
  uVar1 = vDefaultStart2D;
  *(uint32_t *)(self + 0x408) = 0;
  *(uint32_t *)(self + 0x40c) = 0;
  *(uint32_t *)(self + 0x410) = 0x3f800000;
  *(uint32_t *)(self + 0x414) = 0;
  *(uint32_t *)(self + 0x418) = 0;
  *(uint32_t *)(self + 0x41c) = 0;
  *(uint32_t *)(self + 0x420) = 0;
  *(uint32_t *)(self + 0x424) = 1;
  *(uint64_t *)(self + 0x428) = uVar1;
  *(uint64_t *)(self + 0x430) = uVar1;
  *(uint32_t *)(self + 0x438) = 0;
  *(uint32_t *)(self + 0x43c) = 0;
  *(uint32_t *)(self + 0x440) = 0;
  *(uint32_t *)(self + 0x444) = 0;
  *(uint32_t *)(self + 0x450) = 0;
  *(uint32_t *)(self + 0x454) = 0;
  *(uint32_t *)(self + 0x458) = 0x3f800000;
  *(uint32_t *)(self + 0x45c) = 0x3f800000;
  *(uint32_t *)(self + 0x460) = 0;
  *(uint32_t *)(self + 0x464) = 0;
  *(uint32_t *)(self + 0x468) = 0;
  *(uint32_t *)(self + 0x46c) = 0;
  *(uint32_t *)(self + 0x470) = 0;
  *(uint32_t *)(self + 0x474) = 0;
  *(uint32_t *)(self + 0x478) = 0;
  *(uint32_t *)(self + 0x480) = 2;
  *(uint32_t *)(self + 0x484) = 0;
  *(uint32_t *)(self + 0x488) = 0;
  *(uint32_t *)(self + 0x48c) = 0;
  *(uint32_t *)(self + 0x490) = 0;
  *(uint32_t *)(self + 0x494) = 0;
  *(uint32_t *)(self + 0x498) = 0;
  *(uint64_t *)(self + 0x4a0) = 0;
  *(uint64_t *)(self + 0x4f0) = 0;
  *(uint32_t *)(self + 0x4f8) = 1;
  *(uint8_t ***)(self + 0x4a8) = &PTR__SceneObject2D_005dd3d0;
  /* try { // try from 004ffad8 to 004ffadc has its CatchHandler @ 0050041c */
  CriticalSection__CriticalSection((CriticalSection *)(self + 0x500));
  uVar1 = vDefaultStart2D;
  *(uint32_t *)(self + 0x528) = 0;
  *(uint32_t *)(self + 0x52c) = 0;
  *(uint32_t *)(self + 0x530) = 0x3f800000;
  *(uint32_t *)(self + 0x534) = 0;
  *(uint32_t *)(self + 0x538) = 0;
  *(uint32_t *)(self + 0x53c) = 0;
  *(uint32_t *)(self + 0x540) = 0;
  *(uint32_t *)(self + 0x544) = 1;
  *(uint64_t *)(self + 0x548) = uVar1;
  *(uint64_t *)(self + 0x550) = uVar1;
  *(uint32_t *)(self + 0x558) = 0;
  *(uint32_t *)(self + 0x55c) = 0;
  *(uint32_t *)(self + 0x560) = 0;
  *(uint32_t *)(self + 0x564) = 0;
  *(uint32_t *)(self + 0x570) = 0;
  *(uint32_t *)(self + 0x574) = 0;
  *(uint32_t *)(self + 0x578) = 0x3f800000;
  *(uint32_t *)(self + 0x57c) = 0x3f800000;
  *(uint32_t *)(self + 0x580) = 0;
  *(uint32_t *)(self + 0x584) = 0;
  *(uint32_t *)(self + 0x588) = 0;
  *(uint32_t *)(self + 0x58c) = 0;
  *(uint32_t *)(self + 0x590) = 0;
  *(uint32_t *)(self + 0x594) = 0;
  *(uint32_t *)(self + 0x598) = 0;
  *(uint32_t *)(self + 0x5a0) = 2;
  *(uint32_t *)(self + 0x5a4) = 0;
  *(uint32_t *)(self + 0x5a8) = 0;
  *(uint32_t *)(self + 0x5ac) = 0;
  *(uint32_t *)(self + 0x5b0) = 0;
  *(uint32_t *)(self + 0x5b4) = 0;
  *(uint32_t *)(self + 0x5b8) = 0;
  *(uint64_t *)(self + 0x5c0) = 0;
  *(uint64_t *)(self + 0x610) = 0;
  *(uint32_t *)(self + 0x618) = 1;
  *(uint8_t ***)(self + 0x5c8) = &PTR__SceneObject2D_005dd3d0;
  /* try { // try from 004ffc57 to 004ffc5b has its CatchHandler @ 00500415 */
  CriticalSection__CriticalSection((CriticalSection *)(self + 0x620));
  uVar1 = vDefaultStart2D;
  *(uint32_t *)(self + 0x648) = 0;
  *(uint32_t *)(self + 0x64c) = 0;
  *(uint32_t *)(self + 0x650) = 0x3f800000;
  *(uint32_t *)(self + 0x654) = 0;
  *(uint32_t *)(self + 0x658) = 0;
  *(uint32_t *)(self + 0x65c) = 0;
  *(uint32_t *)(self + 0x660) = 0;
  *(uint32_t *)(self + 0x664) = 1;
  *(uint64_t *)(self + 0x668) = uVar1;
  *(uint64_t *)(self + 0x670) = uVar1;
  *(uint32_t *)(self + 0x678) = 0;
  *(uint32_t *)(self + 0x67c) = 0;
  *(uint32_t *)(self + 0x680) = 0;
  *(uint32_t *)(self + 0x684) = 0;
  *(uint32_t *)(self + 0x690) = 0;
  *(uint32_t *)(self + 0x694) = 0;
  *(uint32_t *)(self + 0x698) = 0x3f800000;
  *(uint32_t *)(self + 0x69c) = 0x3f800000;
  *(uint32_t *)(self + 0x6a0) = 0;
  *(uint32_t *)(self + 0x6a4) = 0;
  *(uint32_t *)(self + 0x6a8) = 0;
  *(uint32_t *)(self + 0x6ac) = 0;
  *(uint32_t *)(self + 0x6b0) = 0;
  *(uint32_t *)(self + 0x6b4) = 0;
  *(uint32_t *)(self + 0x6b8) = 0;
  *(uint32_t *)(self + 0x6c0) = 2;
  *(uint32_t *)(self + 0x6c4) = 0;
  *(uint32_t *)(self + 0x6c8) = 0;
  *(uint32_t *)(self + 0x6cc) = 0;
  *(uint32_t *)(self + 0x6d0) = 0;
  *(uint32_t *)(self + 0x6d4) = 0;
  *(uint32_t *)(self + 0x6d8) = 0;
  *(uint64_t *)(self + 0x6e0) = 0;
  *(uint64_t *)(self + 0x730) = 0;
  *(uint32_t *)(self + 0x738) = 1;
  *(uint8_t ***)(self + 0x6e8) = &PTR__SceneObject2D_005dd3d0;
  /* try { // try from 004ffdd6 to 004ffdda has its CatchHandler @ 0050040e */
  CriticalSection__CriticalSection((CriticalSection *)(self + 0x740));
  uVar1 = vDefaultStart2D;
  *(uint32_t *)(self + 0x768) = 0;
  *(uint32_t *)(self + 0x76c) = 0;
  *(uint32_t *)(self + 0x770) = 0x3f800000;
  *(uint32_t *)(self + 0x774) = 0;
  *(uint32_t *)(self + 0x778) = 0;
  *(uint32_t *)(self + 0x77c) = 0;
  *(uint32_t *)(self + 0x780) = 0;
  *(uint32_t *)(self + 0x784) = 1;
  *(uint64_t *)(self + 0x788) = uVar1;
  *(uint64_t *)(self + 0x790) = uVar1;
  *(uint32_t *)(self + 0x798) = 0;
  *(uint32_t *)(self + 0x79c) = 0;
  *(uint32_t *)(self + 0x7a0) = 0;
  *(uint32_t *)(self + 0x7a4) = 0;
  *(uint32_t *)(self + 0x7b0) = 0;
  *(uint32_t *)(self + 0x7b4) = 0;
  *(uint32_t *)(self + 0x7b8) = 0x3f800000;
  *(uint32_t *)(self + 0x7bc) = 0x3f800000;
  *(uint32_t *)(self + 0x7c0) = 0;
  *(uint32_t *)(self + 0x7c4) = 0;
  *(uint32_t *)(self + 0x7c8) = 0;
  *(uint32_t *)(self + 0x7cc) = 0;
  *(uint32_t *)(self + 2000) = 0;
  *(uint32_t *)(self + 0x7d4) = 0;
  *(uint32_t *)(self + 0x7d8) = 0;
  *(uint32_t *)(self + 0x7e0) = 2;
  *(uint32_t *)(self + 0x7e4) = 0;
  *(uint32_t *)(self + 0x7e8) = 0;
  *(uint32_t *)(self + 0x7ec) = 0;
  *(uint32_t *)(self + 0x7f0) = 0;
  *(uint32_t *)(self + 0x7f4) = 0;
  *(uint32_t *)(self + 0x7f8) = 0;
  *(uint64_t *)(self + 0x800) = 0;
  *(uint64_t *)(self + 0x850) = 0;
  *(uint32_t *)(self + 0x858) = 1;
  *(uint8_t ***)(self + 0x808) = &PTR__SceneObject2D_005dd3d0;
  /* try { // try from 004fff55 to 004fff59 has its CatchHandler @ 00500407 */
  CriticalSection__CriticalSection((CriticalSection *)(self + 0x860));
  uVar1 = vDefaultStart2D;
  *(uint32_t *)(self + 0x888) = 0;
  *(uint32_t *)(self + 0x88c) = 0;
  *(uint32_t *)(self + 0x890) = 0x3f800000;
  *(uint32_t *)(self + 0x894) = 0;
  *(uint32_t *)(self + 0x898) = 0;
  *(uint32_t *)(self + 0x89c) = 0;
  *(uint32_t *)(self + 0x8a0) = 0;
  *(uint32_t *)(self + 0x8a4) = 1;
  *(uint64_t *)(self + 0x8a8) = uVar1;
  *(uint64_t *)(self + 0x8b0) = uVar1;
  *(uint32_t *)(self + 0x8b8) = 0;
  *(uint32_t *)(self + 0x8bc) = 0;
  *(uint32_t *)(self + 0x8c0) = 0;
  *(uint32_t *)(self + 0x8c4) = 0;
  *(uint32_t *)(self + 0x8d0) = 0;
  *(uint32_t *)(self + 0x8d4) = 0;
  *(uint32_t *)(self + 0x8d8) = 0x3f800000;
  *(uint32_t *)(self + 0x8dc) = 0x3f800000;
  *(uint32_t *)(self + 0x8e0) = 0;
  *(uint32_t *)(self + 0x8e4) = 0;
  *(uint32_t *)(self + 0x8e8) = 0;
  *(uint32_t *)(self + 0x8ec) = 0;
  *(uint32_t *)(self + 0x8f0) = 0;
  *(uint32_t *)(self + 0x8f4) = 0;
  *(uint32_t *)(self + 0x8f8) = 0;
  *(uint32_t *)(self + 0x900) = 2;
  *(uint32_t *)(self + 0x904) = 0;
  *(uint32_t *)(self + 0x908) = 0;
  *(uint32_t *)(self + 0x90c) = 0;
  *(uint32_t *)(self + 0x910) = 0;
  *(uint32_t *)(self + 0x914) = 0;
  *(uint32_t *)(self + 0x918) = 0;
  *(uint64_t *)(self + 0x920) = 0;
  *(uint64_t *)(self + 0x970) = 0;
  *(uint32_t *)(self + 0x978) = 1;
  *(uint8_t ***)(self + 0x928) = &PTR__SceneObject2D_005dd3d0;
  /* try { // try from 005000d4 to 005000d8 has its CatchHandler @ 00500400 */
  CriticalSection__CriticalSection((CriticalSection *)(self + 0x980));
  uVar1 = vDefaultStart2D;
  *(uint32_t *)(self + 0x9a8) = 0;
  *(uint32_t *)(self + 0x9ac) = 0;
  *(uint32_t *)(self + 0x9b0) = 0x3f800000;
  *(uint32_t *)(self + 0x9b4) = 0;
  *(uint32_t *)(self + 0x9b8) = 0;
  *(uint32_t *)(self + 0x9bc) = 0;
  *(uint32_t *)(self + 0x9c0) = 0;
  *(uint32_t *)(self + 0x9c4) = 1;
  *(uint64_t *)(self + 0x9c8) = uVar1;
  *(uint64_t *)(self + 0x9d0) = uVar1;
  *(uint32_t *)(self + 0x9d8) = 0;
  *(uint32_t *)(self + 0x9dc) = 0;
  *(uint32_t *)(self + 0x9e0) = 0;
  *(uint32_t *)(self + 0x9e4) = 0;
  *(uint32_t *)(self + 0x9f0) = 0;
  *(uint32_t *)(self + 0x9f4) = 0;
  *(uint32_t *)(self + 0x9f8) = 0x3f800000;
  *(uint32_t *)(self + 0x9fc) = 0x3f800000;
  *(uint32_t *)(self + 0xa00) = 0;
  *(uint32_t *)(self + 0xa04) = 0;
  *(uint32_t *)(self + 0xa08) = 0;
  *(uint32_t *)(self + 0xa0c) = 0;
  *(uint32_t *)(self + 0xa10) = 0;
  *(uint32_t *)(self + 0xa14) = 0;
  *(uint32_t *)(self + 0xa18) = 0;
  *(uint32_t *)(self + 0xa20) = 2;
  *(uint32_t *)(self + 0xa24) = 0;
  *(uint32_t *)(self + 0xa28) = 0;
  *(uint32_t *)(self + 0xa2c) = 0;
  *(uint32_t *)(self + 0xa30) = 0;
  *(uint32_t *)(self + 0xa34) = 0;
  *(uint32_t *)(self + 0xa38) = 0;
  *(uint64_t *)(self + 0xa40) = 0;
  *(uint64_t *)(self + 0xa90) = 0;
  *(uint32_t *)(self + 0xa98) = 1;
  *(uint8_t ***)(self + 0xa48) = &PTR__SceneObject2D_005dd3d0;
  /* try { // try from 00500253 to 00500257 has its CatchHandler @ 005003fc */
  CriticalSection__CriticalSection((CriticalSection *)(self + 0xaa0));
  uVar1 = vDefaultStart2D;
  *(uint32_t *)(self + 0xac8) = 0;
  *(uint32_t *)(self + 0xacc) = 0;
  *(uint32_t *)(self + 0xad0) = 0x3f800000;
  *(uint32_t *)(self + 0xad4) = 0;
  *(uint32_t *)(self + 0xad8) = 0;
  *(uint32_t *)(self + 0xadc) = 0;
  *(uint32_t *)(self + 0xae0) = 0;
  *(uint32_t *)(self + 0xae4) = 1;
  *(uint64_t *)(self + 0xae8) = uVar1;
  *(uint64_t *)(self + 0xaf0) = uVar1;
  *(uint32_t *)(self + 0xaf8) = 0;
  *(uint32_t *)(self + 0xafc) = 0;
  *(uint32_t *)(self + 0xb00) = 0;
  *(uint32_t *)(self + 0xb04) = 0;
  *(uint32_t *)(self + 0xb10) = 0;
  *(uint32_t *)(self + 0xb14) = 0;
  *(uint32_t *)(self + 0xb18) = 0x3f800000;
  *(uint32_t *)(self + 0xb1c) = 0x3f800000;
  *(uint32_t *)(self + 0xb20) = 0;
  *(uint32_t *)(self + 0xb24) = 0;
  *(uint32_t *)(self + 0xb28) = 0;
  *(uint32_t *)(self + 0xb2c) = 0;
  *(uint32_t *)(self + 0xb30) = 0;
  *(uint32_t *)(self + 0xb34) = 0;
  *(uint32_t *)(self + 0xb38) = 0;
  *(uint32_t *)(self + 0xb40) = 2;
  *(uint32_t *)(self + 0xb44) = 0;
  *(uint32_t *)(self + 0xb48) = 0;
  *(uint32_t *)(self + 0xb4c) = 0;
  *(uint32_t *)(self + 0xb50) = 0;
  *(uint32_t *)(self + 0xb54) = 0;
  *(uint32_t *)(self + 0xb58) = 0;
  *(uint64_t *)(self + 0xb60) = 0;
  return;
}

/* ======================================================================
 * SMBShooter__SMBShooter__00500440  (Ghidra `~SMBShooter` @ 00500440)
 * Signature: uint8_t __thiscall ~SMBShooter(SMBShooter * self)
 * Class: SMBShooter
 * Calls: `SceneObject2D__SceneObject2D__0059b220`
 * Called by: (none)
 */
/* SMBShooter__SMBShooter__00500440() */

void __thiscall SMBShooter__SMBShooter__00500440(SMBShooter *self)

{
  SceneObject2D *this_00;

  if (self != (SMBShooter *)0xffffffffffffffd8) {
    this_00 = (SceneObject2D *)(self + 0xb68);
    do {
      this_00 = this_00 + -0x120;
      SceneObject2D__SceneObject2D__0059b220(this_00);
    } while ((SceneObject2D *)(self + 0x28) != this_00);
  }
  return;
}
