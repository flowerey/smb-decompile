/* src/game/classes/Model.c — 4 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "Model.h"

/* ======================================================================
 * Model__Model__00592860  (Ghidra `~Model` @ 00592860)
 * Signature: uint8_t __thiscall ~Model(Model * self)
 * Class: Model
 * Calls: `BaseResource__Release`, `Model__Model__005928a0`
 * Called by: (none)
 */
/* Model__Model__005928a0() */

void __thiscall Model__Model__005928a0(Model *self)

{
  *(uint8_t ***)self = &PTR__Model_005dd0b0;
                    /* try { // try from 00592874 to 00592886 has its CatchHandler @ 00592890 */
  BaseResource__Release(*(BaseResource **)(self + 0x3c0),0);
  BaseResource__Release(*(BaseResource **)(self + 0x3c8),0);
  *(uint8_t ***)self = &PTR__BaseResource_005dbe30;
  return;
}

/* ======================================================================
 * Model__Model__005928a0  (Ghidra `~Model` @ 005928a0)
 * Signature: uint8_t __thiscall ~Model(Model * self)
 * Class: Model
 * Calls: `BaseResource__Release`, `BaseResource__operator_delete`
 * Called by: `Model__Model`, `Model__Model__00592860`
 */
/* Model__Model__005928a0() */

void __thiscall Model__Model__005928a0(Model *self)

{
  void *pvVar1;
  
  *(uint8_t ***)self = &PTR__Model_005dd0b0;
                    /* try { // try from 005928b4 to 005928c6 has its CatchHandler @ 005928d7 */
  BaseResource__Release(*(BaseResource **)(self + 0x3c0),0);
  pvVar1 = (void *)0x0;
  BaseResource__Release(*(BaseResource **)(self + 0x3c8),0);
  *(uint8_t ***)self = &PTR__BaseResource_005dbe30;
  BaseResource__operator_delete((BaseResource *)self,pvVar1);
  return;
}

/* ======================================================================
 * Model__Render  (Ghidra `Render` @ 005929c0)
 * Signature: uint8_t __thiscall Render(Model * self)
 * Class: Model
 * Calls: `TGraphics__Draw`, `TGraphics__SetActiveGPUBlock`, `VertexBuffer__ResetReplication`
 * Called by: (none)
 */
/* Model__Render() */

void __thiscall Model__Render(Model *self)

{
  TGraphics *this_00;
  
  this_00 = Graphics;
  *(uint64_t *)(self + 0x3b8) = *(uint64_t *)(Graphics + 0xaa0);
  TGraphics__SetActiveGPUBlock(this_00,(GPUState *)(self + 0x10));
  TGraphics__Draw(Graphics,*(VertexStream **)(self + 0x3c0),*(IndexBuffer **)(self + 0x3c8));
  VertexBuffer__ResetReplication(*(VertexBuffer **)(*(long *)(self + 0x3c0) + 0x20));
  TGraphics__SetActiveGPUBlock(Graphics,(GPUState *)0x0);
  return;
}

/* ======================================================================
 * Model__Replicate  (Ghidra `Replicate` @ 00592a20)
 * Signature: uint8_t __thiscall Replicate(Model * self, uint arg1, uint arg2)
 * Class: Model
 * Calls: `BaseResource__Release`, `CriticalSection__CriticalSection`, `CriticalSection__CriticalSection__005b71d0`, `VertexBuffer__Replicate`, `VertexStream__SetVertexBuffer`, `VertexStream__SetVertexDeclaration`, `free`, `malloc`, `memcpy`
 * Called by: (none)
 */
/* WARNING: Removing unreachable block (ram,0x00592f9b) */
/* WARNING: Removing unreachable block (ram,0x00592fbc) */
/* WARNING: Removing unreachable block (ram,0x00592fe3) */
/* WARNING: Removing unreachable block (ram,0x00594013) */
/* WARNING: Removing unreachable block (ram,0x00592ff7) */
/* WARNING: Removing unreachable block (ram,0x00594002) */
/* WARNING: Removing unreachable block (ram,0x00593001) */
/* WARNING: Removing unreachable block (ram,0x00594067) */
/* WARNING: Removing unreachable block (ram,0x0059300b) */
/* WARNING: Removing unreachable block (ram,0x00593015) */
/* WARNING: Removing unreachable block (ram,0x00593018) */
/* WARNING: Removing unreachable block (ram,0x00593560) */
/* WARNING: Removing unreachable block (ram,0x0059301e) */
/* WARNING: Removing unreachable block (ram,0x00593550) */
/* WARNING: Removing unreachable block (ram,0x00593027) */
/* WARNING: Removing unreachable block (ram,0x00593540) */
/* WARNING: Removing unreachable block (ram,0x00593030) */
/* Model__Replicate(unsigned int, unsigned int) */

void __thiscall Model__Replicate(Model *self,uint arg1,uint arg2)

{
  short sVar1;
  ushort uVar2;
  uint uVar3;
  VertexBuffer *pVVar4;
  void *pvVar5;
  BaseResource *this_00;
  size_t *psVar6;
  long lVar7;
  uint16_t uVar8;
  ulong uVar9;
  uint8_t uVar10;
  ushort *puVar11;
  size_t __n;
  ulong uVar12;
  size_t *psVar13;
  ushort *puVar14;
  uint uVar15;
  ushort uVar16;
  bool bVar17;
  byte bVar18;
  CriticalSection local_128 [40];
  ushort local_100;
  ushort local_fe;
  byte local_fc;
  int local_f8;
  short local_f4;
  size_t *local_f0;
  ushort *local_e8;
  int local_e0;
  long local_d8;
  ushort local_d0;
  uint32_t local_cc;
  uint64_t local_c8;
  uint32_t local_c0;
  uint32_t local_bc;
  uint32_t local_b8;
  uint8_t local_a8;
  uint8_t uStack_a7;
  uint16_t uStack_a6;
  uint32_t uStack_a4;
  uint32_t local_a0;
  uint8_t local_9c;
  uint8_t local_98;
  uint8_t uStack_97;
  uint16_t uStack_96;
  uint32_t uStack_94;
  uint32_t local_90;
  uint8_t local_8c;
  uint8_t local_88;
  uint8_t uStack_87;
  uint16_t uStack_86;
  uint32_t uStack_84;
  uint32_t local_80;
  uint8_t local_7c;
  uint8_t local_78;
  uint8_t uStack_77;
  uint16_t uStack_76;
  uint32_t uStack_74;
  uint32_t local_70;
  uint8_t local_6c;
  uint8_t local_68;
  uint8_t uStack_67;
  uint16_t uStack_66;
  uint32_t uStack_64;
  uint32_t local_60;
  uint8_t local_5c;
  uint8_t local_58;
  undefined7 uStack_57;
  uint32_t local_50;
  uint8_t local_4c;
  size_t *local_48;
  short local_40;
  uint32_t local_3c;
  
  bVar18 = 0;
  if (*(long *)(self + 0x3d0) != 0) goto LAB_00592a40;
  uVar15 = arg2 & 1;
  local_cc = 5;
  local_c8 = 0;
  local_bc = 1;
  local_b8 = 0;
  local_c0 = 1;
  local_d0 = -(short)uVar15 & 0x40;
  uVar12 = (ulong)((uint)((long)((ulong)uVar15 << 0x3f) >> 0x3f) & 0x40);
  if ((arg2 & 2) != 0) {
    local_d0 = (-(ushort)(uVar15 == 0) & 0xffc0) + 0x48;
    uVar12 = (-(ulong)(uVar15 == 0) & 0xffffffffffffffc0) + 0x48;
  }
  local_d8 = uVar12 * arg1;
  pVVar4 = (VertexBuffer *)VertexBuffer__Create((tagVertexBufferCreation *)&local_d8);
  *(VertexBuffer **)(self + 0x3d0) = pVVar4;
  VertexStream__SetVertexBuffer(*(VertexStream **)(self + 0x3c0),'\x01',pVVar4);
  sVar1 = *(short *)(*(long *)(*(long *)(self + 0x3c0) + 0xa0) + 0x20);
  psVar13 = *(size_t **)(*(long *)(*(long *)(self + 0x3c0) + 0xa0) + 0x18);
  CriticalSection__CriticalSection(local_128);
  __n = 0;
  uVar16 = sVar1 - 1;
  local_fe = 0;
  local_100 = 0;
  local_f4 = 1;
  local_f0 = (size_t *)0x0;
  local_e8 = (ushort *)0x0;
  local_e0 = 0;
  local_fc = 4;
  local_f8 = 0;
  if (uVar16 != 0) {
    __n = (ulong)uVar16 * 0x10;
    local_fe = uVar16;
    psVar6 = malloc(__n + 0x14);
    local_f0 = (size_t *)0x0;
    if (psVar6 != (size_t *)0x0) {
      local_f0 = psVar6 + 2;
      *psVar6 = __n;
      psVar6[1] = (size_t)psVar6;
    }
  }
  if (psVar13 != local_f0) {
    memcpy(local_f0,psVar13,__n);
  }
  psVar13 = local_f0;
  local_e0 = -0x5eef3582;
  if ((local_f8 == 1) && (uVar16 != 0)) {
    lVar7 = 0;
    do {
      local_e8[lVar7] = (ushort)lVar7;
      lVar7 = lVar7 + 1;
    } while ((uint)lVar7 < (uint)uVar16);
  }
  uVar8 = 0;
  uVar10 = 1;
  local_100 = uVar16;
  if (uVar15 != 0) {
    local_a8 = 1;
    uStack_a6 = 0;
    uStack_a4 = 1;
    local_a0 = 3;
    local_9c = 1;
    if (local_fe <= uVar16) {
      local_fe = local_fe + local_f4;
      uVar12 = (ulong)local_fc;
      psVar6 = (size_t *)0x0;
      uVar9 = (ulong)local_fe * 0x10;
      pvVar5 = malloc(uVar12 + 0x10 + uVar9);
      if (pvVar5 != (void *)0x0) {
        psVar6 = (size_t *)
                 ((long)pvVar5 + 0x10U + (uVar12 - ((long)pvVar5 + 0x10U) % uVar12) % uVar12);
        psVar6[-2] = uVar9;
        psVar6[-1] = (size_t)pvVar5;
        if (psVar13 != (size_t *)0x0) {
          uVar12 = psVar13[-2];
          if (uVar9 <= psVar13[-2]) {
            uVar12 = uVar9;
          }
          memcpy(psVar6,psVar13,uVar12);
          free((void *)psVar13[-1]);
        }
      }
      puVar11 = local_e8;
      local_f0 = psVar6;
      if (local_e8 != (ushort *)0x0) {
        uVar9 = (ulong)local_fc;
        uVar12 = (ulong)local_fe * 2;
        pvVar5 = malloc(uVar9 + 0x10 + uVar12);
        uVar16 = local_100;
        puVar14 = (ushort *)0x0;
        if (pvVar5 != (void *)0x0) {
          puVar14 = (ushort *)
                    ((long)pvVar5 + 0x10U + (uVar9 - ((long)pvVar5 + 0x10U) % uVar9) % uVar9);
          *(void **)(puVar14 + -4) = pvVar5;
          *(ulong *)(puVar14 + -8) = uVar12;
          uVar9 = *(ulong *)(puVar11 + -8);
          if (uVar12 <= *(ulong *)(puVar11 + -8)) {
            uVar9 = uVar12;
          }
          memcpy(puVar14,puVar11,uVar9);
          free(*(void **)(puVar11 + -4));
          uVar16 = local_100;
        }
        for (; local_e8 = puVar14, uVar16 < local_fe; uVar16 = uVar16 + 1) {
          local_e8[uVar16] = 0xffff;
          puVar14 = local_e8;
        }
      }
    }
    psVar13 = local_f0;
    if ((local_f8 == 1) && (local_fe != 0)) {
      uVar2 = 1;
      uVar16 = *local_e8;
      puVar11 = local_e8;
      while (uVar16 != 0xffff) {
        puVar11 = puVar11 + 1;
        if (uVar2 == local_fe) goto LAB_0059304f;
        uVar2 = uVar2 + 1;
        uVar16 = *puVar11;
      }
      *puVar11 = local_100;
    }
LAB_0059304f:
    psVar6 = local_f0 + (ulong)local_100 * 2;
    *psVar6 = CONCAT44(uStack_a4,CONCAT22(uStack_a6,CONCAT11(uStack_a7,local_a8)));
    *(uint32_t *)(psVar6 + 1) = local_a0;
    *(uint8_t *)((long)psVar6 + 0xc) = local_9c;
    local_98 = 1;
    uStack_96 = 0x10;
    uStack_94 = 1;
    local_90 = 3;
    local_8c = 2;
    local_100 = local_100 + 1;
    if (local_e0 == -0x5eef3582) {
      if (local_fe <= local_100) {
        local_fe = local_fe + local_f4;
        uVar12 = (ulong)local_fc;
        psVar6 = (size_t *)0x0;
        uVar9 = (ulong)local_fe * 0x10;
        pvVar5 = malloc(uVar12 + 0x10 + uVar9);
        if (pvVar5 != (void *)0x0) {
          psVar6 = (size_t *)
                   ((long)pvVar5 + 0x10U + (uVar12 - ((long)pvVar5 + 0x10U) % uVar12) % uVar12);
          psVar6[-2] = uVar9;
          psVar6[-1] = (size_t)pvVar5;
          if (psVar13 != (size_t *)0x0) {
            uVar12 = psVar13[-2];
            if (uVar9 <= psVar13[-2]) {
              uVar12 = uVar9;
            }
            memcpy(psVar6,psVar13,uVar12);
            free((void *)psVar13[-1]);
          }
        }
        puVar11 = local_e8;
        local_f0 = psVar6;
        if (local_e8 != (ushort *)0x0) {
          uVar9 = (ulong)local_fc;
          uVar12 = (ulong)local_fe * 2;
          pvVar5 = malloc(uVar9 + 0x10 + uVar12);
          uVar16 = local_100;
          puVar14 = (ushort *)0x0;
          if (pvVar5 != (void *)0x0) {
            puVar14 = (ushort *)
                      ((long)pvVar5 + 0x10U + (uVar9 - ((long)pvVar5 + 0x10U) % uVar9) % uVar9);
            *(void **)(puVar14 + -4) = pvVar5;
            *(ulong *)(puVar14 + -8) = uVar12;
            uVar9 = *(ulong *)(puVar11 + -8);
            if (uVar12 <= *(ulong *)(puVar11 + -8)) {
              uVar9 = uVar12;
            }
            memcpy(puVar14,puVar11,uVar9);
            free(*(void **)(puVar11 + -4));
            uVar16 = local_100;
          }
          for (; local_e8 = puVar14, uVar16 < local_fe; uVar16 = uVar16 + 1) {
            local_e8[uVar16] = 0xffff;
            puVar14 = local_e8;
          }
        }
      }
      if ((local_f8 == 1) && (local_fe != 0)) {
        uVar2 = 0;
        uVar16 = *local_e8;
        puVar11 = local_e8;
        while (uVar16 != 0xffff) {
          puVar11 = puVar11 + 1;
          uVar2 = uVar2 + 1;
          if (uVar2 == local_fe) goto LAB_0059317a;
          uVar16 = *puVar11;
        }
        *puVar11 = local_100;
      }
    }
    else {
      uVar12 = (ulong)local_fc;
      local_f8 = 0;
      pvVar5 = malloc(uVar12 + 0x60);
      local_f0 = (size_t *)0x0;
      if (pvVar5 != (void *)0x0) {
        local_f0 = (size_t *)
                   ((long)pvVar5 + 0x10U + (uVar12 - ((long)pvVar5 + 0x10U) % uVar12) % uVar12);
        local_f0[-2] = 0x50;
        local_f0[-1] = (size_t)pvVar5;
      }
      bVar17 = ((ulong)local_f0 & 1) != 0;
      uVar12 = 0x50;
      psVar13 = local_f0;
      if (bVar17) {
        *(uint8_t *)local_f0 = 0;
        uVar12 = 0x4f;
        psVar13 = (size_t *)((long)local_f0 + 1);
      }
      if (((ulong)psVar13 & 2) != 0) {
        *(uint16_t *)psVar13 = 0;
        uVar12 = (ulong)((int)uVar12 - 2);
        psVar13 = (size_t *)((long)psVar13 + 2);
      }
      if (((ulong)psVar13 & 4) != 0) {
        *(uint32_t *)psVar13 = 0;
        uVar12 = (ulong)((int)uVar12 - 4);
        psVar13 = (size_t *)((long)psVar13 + 4);
      }
      for (uVar9 = uVar12 >> 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *psVar13 = 0;
        psVar13 = psVar13 + (ulong)bVar18 * -2 + 1;
      }
      if ((uVar12 & 4) != 0) {
        *(uint32_t *)psVar13 = 0;
        psVar13 = (size_t *)((long)psVar13 + 4);
      }
      if ((uVar12 & 2) != 0) {
        *(uint16_t *)psVar13 = 0;
        psVar13 = (size_t *)((long)psVar13 + 2);
      }
      if (bVar17) {
        *(uint8_t *)psVar13 = 0;
      }
      local_100 = 0;
      local_fe = 5;
      local_e0 = -0x5eef3582;
      local_f4 = 5;
    }
LAB_0059317a:
    psVar13 = local_f0;
    psVar6 = local_f0 + (ulong)local_100 * 2;
    *psVar6 = CONCAT44(uStack_94,CONCAT22(uStack_96,CONCAT11(uStack_97,local_98)));
    *(uint32_t *)(psVar6 + 1) = local_90;
    *(uint8_t *)((long)psVar6 + 0xc) = local_8c;
    local_88 = 1;
    uStack_86 = 0x20;
    uStack_84 = 1;
    local_80 = 3;
    local_7c = 3;
    local_100 = local_100 + 1;
    if (local_e0 == -0x5eef3582) {
      if (local_fe <= local_100) {
        local_fe = local_fe + local_f4;
        uVar12 = (ulong)local_fc;
        psVar6 = (size_t *)0x0;
        uVar9 = (ulong)local_fe * 0x10;
        pvVar5 = malloc(uVar12 + 0x10 + uVar9);
        if (pvVar5 != (void *)0x0) {
          psVar6 = (size_t *)
                   ((long)pvVar5 + 0x10U + (uVar12 - ((long)pvVar5 + 0x10U) % uVar12) % uVar12);
          psVar6[-2] = uVar9;
          psVar6[-1] = (size_t)pvVar5;
          if (psVar13 != (size_t *)0x0) {
            uVar12 = psVar13[-2];
            if (uVar9 <= psVar13[-2]) {
              uVar12 = uVar9;
            }
            memcpy(psVar6,psVar13,uVar12);
            free((void *)psVar13[-1]);
          }
        }
        puVar11 = local_e8;
        local_f0 = psVar6;
        if (local_e8 != (ushort *)0x0) {
          uVar9 = (ulong)local_fc;
          uVar12 = (ulong)local_fe * 2;
          pvVar5 = malloc(uVar9 + 0x10 + uVar12);
          uVar16 = local_100;
          puVar14 = (ushort *)0x0;
          if (pvVar5 != (void *)0x0) {
            puVar14 = (ushort *)
                      ((long)pvVar5 + 0x10U + (uVar9 - ((long)pvVar5 + 0x10U) % uVar9) % uVar9);
            *(void **)(puVar14 + -4) = pvVar5;
            *(ulong *)(puVar14 + -8) = uVar12;
            uVar9 = *(ulong *)(puVar11 + -8);
            if (uVar12 <= *(ulong *)(puVar11 + -8)) {
              uVar9 = uVar12;
            }
            memcpy(puVar14,puVar11,uVar9);
            free(*(void **)(puVar11 + -4));
            uVar16 = local_100;
          }
          for (; local_e8 = puVar14, uVar16 < local_fe; uVar16 = uVar16 + 1) {
            local_e8[uVar16] = 0xffff;
            puVar14 = local_e8;
          }
        }
      }
      if ((local_f8 == 1) && (local_fe != 0)) {
        uVar2 = 1;
        uVar16 = *local_e8;
        puVar11 = local_e8;
        while (uVar16 != 0xffff) {
          puVar11 = puVar11 + 1;
          if (uVar2 == local_fe) goto LAB_005932a5;
          uVar2 = uVar2 + 1;
          uVar16 = *puVar11;
        }
        *puVar11 = local_100;
      }
    }
    else {
      uVar12 = (ulong)local_fc;
      local_f8 = 0;
      pvVar5 = malloc(uVar12 + 0x60);
      local_f0 = (size_t *)0x0;
      if (pvVar5 != (void *)0x0) {
        local_f0 = (size_t *)
                   ((long)pvVar5 + 0x10U + (uVar12 - ((long)pvVar5 + 0x10U) % uVar12) % uVar12);
        local_f0[-2] = 0x50;
        local_f0[-1] = (size_t)pvVar5;
      }
      bVar17 = ((ulong)local_f0 & 1) != 0;
      uVar12 = 0x50;
      psVar13 = local_f0;
      if (bVar17) {
        *(uint8_t *)local_f0 = 0;
        uVar12 = 0x4f;
        psVar13 = (size_t *)((long)local_f0 + 1);
      }
      if (((ulong)psVar13 & 2) != 0) {
        *(uint16_t *)psVar13 = 0;
        uVar12 = (ulong)((int)uVar12 - 2);
        psVar13 = (size_t *)((long)psVar13 + 2);
      }
      if (((ulong)psVar13 & 4) != 0) {
        *(uint32_t *)psVar13 = 0;
        uVar12 = (ulong)((int)uVar12 - 4);
        psVar13 = (size_t *)((long)psVar13 + 4);
      }
      for (uVar9 = uVar12 >> 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *psVar13 = 0;
        psVar13 = psVar13 + (ulong)bVar18 * -2 + 1;
      }
      if ((uVar12 & 4) != 0) {
        *(uint32_t *)psVar13 = 0;
        psVar13 = (size_t *)((long)psVar13 + 4);
      }
      if ((uVar12 & 2) != 0) {
        *(uint16_t *)psVar13 = 0;
        psVar13 = (size_t *)((long)psVar13 + 2);
      }
      if (bVar17) {
        *(uint8_t *)psVar13 = 0;
      }
      local_100 = 0;
      local_fe = 5;
      local_e0 = -0x5eef3582;
      local_f4 = 5;
    }
LAB_005932a5:
    psVar13 = local_f0;
    psVar6 = local_f0 + (ulong)local_100 * 2;
    *psVar6 = CONCAT44(uStack_84,CONCAT22(uStack_86,CONCAT11(uStack_87,local_88)));
    *(uint32_t *)(psVar6 + 1) = local_80;
    *(uint8_t *)((long)psVar6 + 0xc) = local_7c;
    local_78 = 1;
    uStack_76 = 0x30;
    uStack_74 = 1;
    local_70 = 3;
    local_6c = 4;
    local_100 = local_100 + 1;
    if (local_e0 == -0x5eef3582) {
      if (local_fe <= local_100) {
        local_fe = local_fe + local_f4;
        uVar12 = (ulong)local_fc;
        psVar6 = (size_t *)0x0;
        uVar9 = (ulong)local_fe * 0x10;
        pvVar5 = malloc(uVar12 + 0x10 + uVar9);
        if (pvVar5 != (void *)0x0) {
          psVar6 = (size_t *)
                   ((long)pvVar5 + 0x10U + (uVar12 - ((long)pvVar5 + 0x10U) % uVar12) % uVar12);
          psVar6[-2] = uVar9;
          psVar6[-1] = (size_t)pvVar5;
          if (psVar13 != (size_t *)0x0) {
            uVar12 = psVar13[-2];
            if (uVar9 <= psVar13[-2]) {
              uVar12 = uVar9;
            }
            memcpy(psVar6,psVar13,uVar12);
            free((void *)psVar13[-1]);
          }
        }
        puVar11 = local_e8;
        local_f0 = psVar6;
        if (local_e8 != (ushort *)0x0) {
          uVar9 = (ulong)local_fc;
          uVar12 = (ulong)local_fe * 2;
          pvVar5 = malloc(uVar9 + 0x10 + uVar12);
          uVar16 = local_100;
          puVar14 = (ushort *)0x0;
          if (pvVar5 != (void *)0x0) {
            puVar14 = (ushort *)
                      ((long)pvVar5 + 0x10U + (uVar9 - ((long)pvVar5 + 0x10U) % uVar9) % uVar9);
            *(void **)(puVar14 + -4) = pvVar5;
            *(ulong *)(puVar14 + -8) = uVar12;
            uVar9 = *(ulong *)(puVar11 + -8);
            if (uVar12 <= *(ulong *)(puVar11 + -8)) {
              uVar9 = uVar12;
            }
            memcpy(puVar14,puVar11,uVar9);
            free(*(void **)(puVar11 + -4));
            uVar16 = local_100;
          }
          for (; local_e8 = puVar14, uVar16 < local_fe; uVar16 = uVar16 + 1) {
            local_e8[uVar16] = 0xffff;
            puVar14 = local_e8;
          }
        }
      }
      if ((local_f8 == 1) && (local_fe != 0)) {
        uVar2 = 1;
        uVar16 = *local_e8;
        puVar11 = local_e8;
        while (uVar16 != 0xffff) {
          puVar11 = puVar11 + 1;
          if (uVar2 == local_fe) goto LAB_005933d0;
          uVar2 = uVar2 + 1;
          uVar16 = *puVar11;
        }
        *puVar11 = local_100;
      }
    }
    else {
      uVar12 = (ulong)local_fc;
      local_f8 = 0;
      pvVar5 = malloc(uVar12 + 0x60);
      local_f0 = (size_t *)0x0;
      if (pvVar5 != (void *)0x0) {
        local_f0 = (size_t *)
                   ((long)pvVar5 + 0x10U + (uVar12 - ((long)pvVar5 + 0x10U) % uVar12) % uVar12);
        local_f0[-2] = 0x50;
        local_f0[-1] = (size_t)pvVar5;
      }
      bVar17 = ((ulong)local_f0 & 1) != 0;
      uVar12 = 0x50;
      psVar13 = local_f0;
      if (bVar17) {
        *(uint8_t *)local_f0 = 0;
        uVar12 = 0x4f;
        psVar13 = (size_t *)((long)local_f0 + 1);
      }
      if (((ulong)psVar13 & 2) != 0) {
        *(uint16_t *)psVar13 = 0;
        uVar12 = (ulong)((int)uVar12 - 2);
        psVar13 = (size_t *)((long)psVar13 + 2);
      }
      if (((ulong)psVar13 & 4) != 0) {
        *(uint32_t *)psVar13 = 0;
        uVar12 = (ulong)((int)uVar12 - 4);
        psVar13 = (size_t *)((long)psVar13 + 4);
      }
      for (uVar9 = uVar12 >> 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *psVar13 = 0;
        psVar13 = psVar13 + (ulong)bVar18 * -2 + 1;
      }
      if ((uVar12 & 4) != 0) {
        *(uint32_t *)psVar13 = 0;
        psVar13 = (size_t *)((long)psVar13 + 4);
      }
      if ((uVar12 & 2) != 0) {
        *(uint16_t *)psVar13 = 0;
        psVar13 = (size_t *)((long)psVar13 + 2);
      }
      if (bVar17) {
        *(uint8_t *)psVar13 = 0;
      }
      local_100 = 0;
      local_fe = 5;
      local_e0 = -0x5eef3582;
      local_f4 = 5;
    }
LAB_005933d0:
    uVar8 = 0x3c;
    psVar13 = local_f0 + (ulong)local_100 * 2;
    *psVar13 = CONCAT44(uStack_74,CONCAT22(uStack_76,CONCAT11(uStack_77,local_78)));
    *(uint32_t *)(psVar13 + 1) = local_70;
    *(uint8_t *)((long)psVar13 + 0xc) = local_6c;
    uVar10 = 5;
    local_100 = local_100 + 1;
  }
  psVar13 = local_f0;
  if ((arg2 & 2) != 0) {
    local_68 = 1;
    uStack_64 = 1;
    local_60 = 1;
    uStack_66 = uVar8;
    local_5c = uVar10;
    if (local_e0 == -0x5eef3582) {
      uVar15 = (uint)local_100;
      if (local_fe <= local_100) {
        local_fe = local_fe + local_f4;
        uVar9 = (ulong)local_fc;
        psVar6 = (size_t *)0x0;
        uVar12 = (ulong)local_fe * 0x10;
        pvVar5 = malloc(uVar9 + 0x10 + uVar12);
        if (pvVar5 != (void *)0x0) {
          psVar6 = (size_t *)
                   ((long)pvVar5 + 0x10U + (uVar9 - ((long)pvVar5 + 0x10U) % uVar9) % uVar9);
          psVar6[-2] = uVar12;
          psVar6[-1] = (size_t)pvVar5;
          if (psVar13 != (size_t *)0x0) {
            uVar9 = psVar13[-2];
            if (uVar12 <= psVar13[-2]) {
              uVar9 = uVar12;
            }
            memcpy(psVar6,psVar13,uVar9);
            free((void *)psVar13[-1]);
          }
        }
        puVar11 = local_e8;
        uVar16 = local_fe;
        local_f0 = psVar6;
        if (local_e8 != (ushort *)0x0) {
          uVar9 = (ulong)local_fc;
          puVar14 = (ushort *)0x0;
          uVar12 = (ulong)local_fe * 2;
          pvVar5 = malloc(uVar9 + 0x10 + uVar12);
          if (pvVar5 != (void *)0x0) {
            puVar14 = (ushort *)
                      ((long)pvVar5 + 0x10U + (uVar9 - ((long)pvVar5 + 0x10U) % uVar9) % uVar9);
            *(void **)(puVar14 + -4) = pvVar5;
            *(ulong *)(puVar14 + -8) = uVar12;
            uVar9 = *(ulong *)(puVar11 + -8);
            if (uVar12 <= *(ulong *)(puVar11 + -8)) {
              uVar9 = uVar12;
            }
            memcpy(puVar14,puVar11,uVar9);
            free(*(void **)(puVar11 + -4));
            uVar16 = local_fe;
          }
          uVar15 = (uint)local_100;
          local_e8 = puVar14;
          if (uVar16 <= local_100) goto LAB_00592ec7;
          do {
            uVar3 = uVar15 & 0xffff;
            uVar15 = uVar15 + 1;
            puVar14[uVar3] = 0xffff;
          } while ((ushort)uVar15 < uVar16);
        }
        uVar15 = (uint)local_100;
      }
LAB_00592ec7:
      if ((local_f8 == 1) && (local_fe != 0)) {
        uVar2 = 1;
        uVar16 = *local_e8;
        puVar11 = local_e8;
        while (uVar16 != 0xffff) {
          puVar11 = puVar11 + 1;
          if (uVar2 == local_fe) goto LAB_00592cc1;
          uVar2 = uVar2 + 1;
          uVar16 = *puVar11;
        }
        *puVar11 = (ushort)uVar15;
        uVar15 = (uint)local_100;
      }
    }
    else {
      uVar12 = (ulong)local_fc;
      local_f8 = 0;
      pvVar5 = malloc(uVar12 + 0x60);
      local_f0 = (size_t *)0x0;
      if (pvVar5 != (void *)0x0) {
        local_f0 = (size_t *)
                   ((long)pvVar5 + 0x10U + (uVar12 - ((long)pvVar5 + 0x10U) % uVar12) % uVar12);
        local_f0[-2] = 0x50;
        local_f0[-1] = (size_t)pvVar5;
      }
      bVar17 = ((ulong)local_f0 & 1) != 0;
      uVar12 = 0x50;
      psVar13 = local_f0;
      if (bVar17) {
        *(uint8_t *)local_f0 = 0;
        uVar12 = 0x4f;
        psVar13 = (size_t *)((long)local_f0 + 1);
      }
      if (((ulong)psVar13 & 2) != 0) {
        *(uint16_t *)psVar13 = 0;
        uVar12 = (ulong)((int)uVar12 - 2);
        psVar13 = (size_t *)((long)psVar13 + 2);
      }
      if (((ulong)psVar13 & 4) != 0) {
        *(uint32_t *)psVar13 = 0;
        uVar12 = (ulong)((int)uVar12 - 4);
        psVar13 = (size_t *)((long)psVar13 + 4);
      }
      for (uVar9 = uVar12 >> 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *psVar13 = 0;
        psVar13 = psVar13 + (ulong)bVar18 * -2 + 1;
      }
      if ((uVar12 & 4) != 0) {
        *(uint32_t *)psVar13 = 0;
        psVar13 = (size_t *)((long)psVar13 + 4);
      }
      if ((uVar12 & 2) != 0) {
        *(uint16_t *)psVar13 = 0;
        psVar13 = (size_t *)((long)psVar13 + 2);
      }
      if (bVar17) {
        *(uint8_t *)psVar13 = 0;
      }
      local_100 = 0;
      local_fe = 5;
      uVar15 = 0;
      local_e0 = -0x5eef3582;
      local_f4 = 5;
    }
LAB_00592cc1:
    psVar13 = local_f0 + (ulong)uVar15 * 2;
    *psVar13 = CONCAT44(uStack_64,CONCAT22(uStack_66,CONCAT11(uStack_67,local_68)));
    *(uint32_t *)(psVar13 + 1) = local_60;
    *(uint8_t *)((long)psVar13 + 0xc) = local_5c;
    local_100 = local_100 + 1;
  }
  psVar13 = local_f0;
  local_58 = 0xff;
  if (local_e0 == -0x5eef3582) {
    if (local_fe <= local_100) {
      local_fe = local_fe + local_f4;
      uVar9 = (ulong)local_fc;
      psVar6 = (size_t *)0x0;
      uVar12 = (ulong)local_fe * 0x10;
      pvVar5 = malloc(uVar9 + 0x10 + uVar12);
      if (pvVar5 != (void *)0x0) {
        psVar6 = (size_t *)((long)pvVar5 + 0x10U + (uVar9 - ((long)pvVar5 + 0x10U) % uVar9) % uVar9)
        ;
        psVar6[-2] = uVar12;
        psVar6[-1] = (size_t)pvVar5;
        if (psVar13 != (size_t *)0x0) {
          uVar9 = psVar13[-2];
          if (uVar12 <= psVar13[-2]) {
            uVar9 = uVar12;
          }
          memcpy(psVar6,psVar13,uVar9);
          free((void *)psVar13[-1]);
        }
      }
      puVar11 = local_e8;
      uVar16 = local_fe;
      local_f0 = psVar6;
      if (local_e8 != (ushort *)0x0) {
        uVar9 = (ulong)local_fc;
        uVar12 = (ulong)local_fe * 2;
        pvVar5 = malloc(uVar9 + 0x10 + uVar12);
        uVar2 = local_100;
        puVar14 = (ushort *)0x0;
        if (pvVar5 != (void *)0x0) {
          puVar14 = (ushort *)
                    ((long)pvVar5 + 0x10U + (uVar9 - ((long)pvVar5 + 0x10U) % uVar9) % uVar9);
          *(void **)(puVar14 + -4) = pvVar5;
          *(ulong *)(puVar14 + -8) = uVar12;
          uVar9 = *(ulong *)(puVar11 + -8);
          if (uVar12 <= *(ulong *)(puVar11 + -8)) {
            uVar9 = uVar12;
          }
          memcpy(puVar14,puVar11,uVar9);
          free(*(void **)(puVar11 + -4));
          uVar2 = local_100;
          uVar16 = local_fe;
        }
        for (; local_e8 = puVar14, uVar2 < uVar16; uVar2 = uVar2 + 1) {
          local_e8[uVar2] = 0xffff;
          puVar14 = local_e8;
        }
      }
    }
    if ((local_f8 == 1) && (local_fe != 0)) {
      uVar2 = 0;
      uVar16 = *local_e8;
      puVar11 = local_e8;
      while (uVar16 != 0xffff) {
        puVar11 = puVar11 + 1;
        uVar2 = uVar2 + 1;
        if (uVar2 == local_fe) goto LAB_00592dc1;
        uVar16 = *puVar11;
      }
      *puVar11 = local_100;
    }
  }
  else {
    uVar12 = (ulong)local_fc;
    local_f8 = 0;
    pvVar5 = malloc(uVar12 + 0x60);
    local_f0 = (size_t *)0x0;
    if (pvVar5 != (void *)0x0) {
      local_f0 = (size_t *)
                 ((long)pvVar5 + 0x10U + (uVar12 - ((long)pvVar5 + 0x10U) % uVar12) % uVar12);
      local_f0[-2] = 0x50;
      local_f0[-1] = (size_t)pvVar5;
    }
    bVar17 = ((ulong)local_f0 & 1) != 0;
    uVar12 = 0x50;
    psVar13 = local_f0;
    if (bVar17) {
      *(uint8_t *)local_f0 = 0;
      uVar12 = 0x4f;
      psVar13 = (size_t *)((long)local_f0 + 1);
    }
    if (((ulong)psVar13 & 2) != 0) {
      *(uint16_t *)psVar13 = 0;
      uVar12 = (ulong)((int)uVar12 - 2);
      psVar13 = (size_t *)((long)psVar13 + 2);
    }
    if (((ulong)psVar13 & 4) != 0) {
      *(uint32_t *)psVar13 = 0;
      uVar12 = (ulong)((int)uVar12 - 4);
      psVar13 = (size_t *)((long)psVar13 + 4);
    }
    for (uVar9 = uVar12 >> 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *psVar13 = 0;
      psVar13 = psVar13 + (ulong)bVar18 * -2 + 1;
    }
    if ((uVar12 & 4) != 0) {
      *(uint32_t *)psVar13 = 0;
      psVar13 = (size_t *)((long)psVar13 + 4);
    }
    if ((uVar12 & 2) != 0) {
      *(uint16_t *)psVar13 = 0;
      psVar13 = (size_t *)((long)psVar13 + 2);
    }
    if (bVar17) {
      *(uint8_t *)psVar13 = 0;
    }
    local_100 = 0;
    local_fe = 5;
    local_e0 = -0x5eef3582;
    local_f4 = 5;
  }
LAB_00592dc1:
  psVar13 = local_f0 + (ulong)local_100 * 2;
  *psVar13 = CONCAT71(uStack_57,local_58);
  *(uint32_t *)(psVar13 + 1) = local_50;
  *(uint8_t *)((long)psVar13 + 0xc) = local_4c;
  local_3c = 0;
  local_48 = local_f0;
  local_100 = local_100 + 1;
  local_40 = local_100 + *(short *)(*(long *)(*(long *)(self + 0x3c0) + 0x20) + 0x18);
                    /* try { // try from 00592e31 to 00592e51 has its CatchHandler @ 005940aa */
  this_00 = (BaseResource *)VertexDeclaration__Create((tagVertexDeclarationCreation *)&local_48);
  VertexStream__SetVertexDeclaration(*(VertexStream **)(self + 0x3c0),(VertexDeclaration *)this_00);
  BaseResource__Release(this_00,0);
  if (local_e0 == -0x5eef3582) {
    local_e0 = 0;
    free((void *)local_f0[-1]);
    if (local_f8 == 1) {
      free(*(void **)(local_e8 + -4));
    }
    local_e0 = 0;
    local_fe = 0;
    local_100 = 0;
    local_f0 = (size_t *)0x0;
    local_e8 = (ushort *)0x0;
  }
  CriticalSection__CriticalSection__005b71d0(local_128);
LAB_00592a40:
  VertexBuffer__Replicate(*(VertexBuffer **)(*(long *)(self + 0x3c0) + 0x20),arg1);
  return;
}
