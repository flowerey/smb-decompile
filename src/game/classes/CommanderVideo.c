/* src/game/classes/CommanderVideo.c — 15 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "CommanderVideo.h"

/* ======================================================================
 * CommanderVideo__RecordSpecial  (Ghidra `RecordSpecial` @ 00463f40)
 * Signature: uint8_t __thiscall RecordSpecial(CommanderVideo * self)
 * Class: CommanderVideo
 * Calls: (none)
 * Called by: (none)
 */
/* CommanderVideo__RecordSpecial() */

void __thiscall CommanderVideo__RecordSpecial(CommanderVideo *self)

{
  long lVar1;

  lVar1 = *(long *)(self + 0x7e0);
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 3) = *(byte *)(lVar1 + 3) & 0xbf | (byte)((*(uint *)(self + 0xa94) & 1) << 6);
  }
  return;
}

/* ======================================================================
 * CommanderVideo__Death  (Ghidra `Death` @ 00463f80)
 * Signature: uint8_t __thiscall Death(CommanderVideo * self)
 * Class: CommanderVideo
 * Calls: `MeatBoyCharactor__Death`
 * Called by: (none)
 */
/* CommanderVideo__Death() */

void __thiscall CommanderVideo__Death(CommanderVideo *self)

{
  MeatBoyCharactor__Death((MeatBoyCharactor *)self);
  *(uint32_t *)(self + 0xa94) = 0;
  return;
}

/* ======================================================================
 * CommanderVideo__Reset  (Ghidra `Reset` @ 00463fa0)
 * Signature: uint8_t __thiscall Reset(CommanderVideo * self)
 * Class: CommanderVideo
 * Calls: `MeatBoyCharactor__Reset`
 * Called by: (none)
 */
/* CommanderVideo__Reset() */

void __thiscall CommanderVideo__Reset(CommanderVideo *self)

{
  *(uint32_t *)(self + 0xad0) = 0;
  *(uint32_t *)(self + 0xacc) = 0;
  *(uint32_t *)(self + 0xad4) = 0;
  MeatBoyCharactor__Reset((MeatBoyCharactor *)self);
  return;
}

/* ======================================================================
 * CommanderVideo__WallJump  (Ghidra `WallJump` @ 00463fd0)
 * Signature: uint8_t __thiscall WallJump(CommanderVideo * self)
 * Class: CommanderVideo
 * Calls: `GetRandomINT`, `MeatBoyCharactor__AddEffect__0047af00`
 * Called by: (none)
 */
/* CommanderVideo__WallJump() */

void __thiscall CommanderVideo__WallJump(CommanderVideo *self)

{
  ushort uVar1;
  long lVar2;
  CommanderVideo CVar3;
  int iVar4;
  uint32_t uVar5;
  uint32_t *puVar6;
  CommanderVideo CVar7;
  uint32_t *puVar8;
  bool bVar9;
  uint32_t uStack_58;
  uint32_t uStack_54;
  uint32_t uStack_48;
  uint32_t uStack_44;
  uint32_t uStack_38;
  uint32_t uStack_34;
  uint32_t uStack_28;
  uint32_t uStack_24;

  puVar6 = &uStack_58;
  iVar4 = (**(code **)(*(long *)self + 0xb0))();
  if (iVar4 == 0) {
    return;
  }
  *(uint32_t *)(self + 0xbc) = *(uint32_t *)(self + 0x8b4);
  *(float *)(self + 0xb8) =
      *(float *)(self + 0x808) * *(float *)(self + 0x8b8) + *(float *)(self + 0xb8);
  if (*(int *)(self + 0x7d4) != 6) {
    lVar2 = *(long *)(self + 0xf8);
    self[0x7db] = (CommanderVideo)((byte)self[0x7db] | 8);
    uVar5 = 0;
    uVar1 = *(ushort *)(lVar2 + 0x240);
    if (uVar1 != 0) {
      uVar5 = GetRandomINT(0, uVar1 - 1);
    }
    *(uint32_t *)(lVar2 + 0x268) = uVar5;
    *(uint32_t *)(self + 0xa4c) = uVar5;
    *(uint32_t *)(self + 0xa50) = 0;
  }
  *(uint32_t *)(self + 0x7d4) = 6;
  bVar9 = ((byte)self[0x7d8] & 1) == 0;
  CVar3 = (CommanderVideo)((byte)self[0x7d8] & 0xfe | bVar9);
  self[0x7d8] = CVar3;
  if (bVar9) {
    CVar7 = self[0x7d9];
    uStack_38 = 0xbf800000;
    uStack_34 = 0x3f800000;
    uStack_28 = 0xbf800000;
    uStack_24 = 0x3f800000;
    if (((byte)CVar7 & 0x40) != 0)
      goto LAB_00474591;
    puVar6 = &uStack_38;
    puVar8 = &uStack_28;
  } else {
    CVar7 = self[0x7d9];
    uStack_58 = 0x3f800000;
    uStack_54 = 0x3f800000;
    uStack_48 = 0x3f800000;
    uStack_44 = 0x3f800000;
    if (((byte)CVar7 & 0x40) != 0)
      goto LAB_00474591;
    puVar8 = &uStack_48;
  }
  MeatBoyCharactor__AddEffect__0047af00((MeatBoyCharactor *)self, 3, puVar8, puVar6);
  CVar3 = self[0x7d8];
  CVar7 = self[0x7d9];
LAB_00474591:
  self[0x7d8] = (CommanderVideo)((byte)CVar3 & 0xfb);
  self[0x7d9] = (CommanderVideo)((byte)CVar7 | 0x20);
  return;
}

/* ======================================================================
 * CommanderVideo__CreateClones  (Ghidra `CreateClones` @ 004640f0)
 * Signature: uint8_t __thiscall CreateClones(CommanderVideo * self)
 * Class: CommanderVideo
 * Calls: `FlashAnimationLibrary__GetMovieClip__005731d0`, `MeatBoyCharactor__CreateClones`
 * Called by: (none)
 */
/* CommanderVideo__CreateClones() */

void __thiscall CommanderVideo__CreateClones(CommanderVideo *self)

{
  uint64_t uVar1;

  uVar1 = FlashAnimationLibrary__GetMovieClip__005731d0(
      (FlashAnimationLibrary *)**(uint64_t **)(self + 0xf8), "float");
  *(uint64_t *)(self + 0xaa8) = uVar1;
  uVar1 = FlashAnimationLibrary__GetMovieClip__005731d0(
      (FlashAnimationLibrary *)**(uint64_t **)(self + 0xf8), "float move");
  *(uint64_t *)(self + 0xab0) = uVar1;
  MeatBoyCharactor__CreateClones((MeatBoyCharactor *)self);
  return;
}

/* ======================================================================
 * CommanderVideo__ProcessSpecial  (Ghidra `ProcessSpecial` @ 00464230)
 * Signature: uint8_t __thiscall ProcessSpecial(CommanderVideo * self)
 * Class: CommanderVideo
 * Calls: (none)
 * Called by: (none)
 */
/* CommanderVideo__ProcessSpecial() */

void __thiscall CommanderVideo__ProcessSpecial(CommanderVideo *self)

{
  int iVar1;
  uint uVar2;

  iVar1 = *(int *)(self + 0xa94);
  uVar2 = *(byte *)(*(long *)(self + 0x7e0) + 3) >> 6 & 1;
  *(uint *)(self + 0xa94) = uVar2;
  if ((iVar1 == 0) && (uVar2 == 1)) {
    *(uint32_t *)(self + 0xad4) = 0;
    *(uint32_t *)(self + 0xa98) = 0x461c4000;
    return;
  }
  return;
}

/* ======================================================================
 * CommanderVideo__RenderClones  (Ghidra `RenderClones` @ 00464280)
 * Signature: uint8_t __thiscall RenderClones(CommanderVideo * self)
 * Class: CommanderVideo
 * Calls: `FlashAnimationLibrary__DisableFlags`, `FlashAnimationLibrary__EnableFlags`, `MeatBoyCharFoundation__Render`
 * Called by: (none)
 */
/* CommanderVideo__RenderClones() */

void __thiscall CommanderVideo__RenderClones(CommanderVideo *self)

{
  MeatBoyCharactor *pMVar1;
  long lVar2;
  int iVar3;

  if (*(int *)(self + 0xa40) == 0) {
    FlashAnimationLibrary__EnableFlags((FlashAnimationLibrary *)**(uint64_t **)(self + 0xf8), 1);
    lVar2 = *(long *)(self + 0xa38);
    if ((*(int *)(lVar2 + 0x2c8) == 0) && (0 < *(int *)(lVar2 + 0x34))) {
      iVar3 = 0;
      do {
        if ((*(int *)(lVar2 + 0x3c) == iVar3) &&
            (iVar3 == *(int *)(*(long *)(*(long *)(self + 0x7f0) + (long)iVar3 * 8) + 0xa90))) {
          FlashAnimationLibrary__EnableFlags((FlashAnimationLibrary *)**(uint64_t **)(self + 0xf8),
                                             1);
        } else {
          FlashAnimationLibrary__DisableFlags((FlashAnimationLibrary *)**(uint64_t **)(self + 0xf8),
                                              1);
        }
        pMVar1 = *(MeatBoyCharactor **)(*(long *)(self + 0x7f0) + (long)iVar3 * 8);
        if (*(int *)(pMVar1 + 0xa94) == 1) {
          if ((float)(*(uint *)(pMVar1 + 0xb8) & DAT_005be880 /* R:u32=2147483647 */) <
              DAT_005be890 /* R:200.0f */) {
            *(uint32_t *)(*(long *)(self + 0xaa8) + 0x58) = *(uint32_t *)(pMVar1 + 0xad4);
            MeatBoyCharFoundation__Render(*(MeatBoyCharFoundation **)(self + 0xf8), pMVar1,
                                          *(FlashLibraryInstance **)(self + 0xaa8));
          } else {
            *(uint32_t *)(*(long *)(self + 0xab0) + 0x58) = *(uint32_t *)(pMVar1 + 0xad4);
            MeatBoyCharFoundation__Render(*(MeatBoyCharFoundation **)(self + 0xf8), pMVar1,
                                          *(FlashLibraryInstance **)(self + 0xab0));
          }
        } else {
          MeatBoyCharFoundation__Render(*(MeatBoyCharFoundation **)(self + 0xf8), pMVar1,
                                        (FlashLibraryInstance *)0x0);
        }
        lVar2 = *(long *)(self + 0xa38);
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(lVar2 + 0x34));
    }
  }
  return;
}

/* ======================================================================
 * CommanderVideo__CommanderVideo  (Ghidra `~CommanderVideo` @ 004643d0)
 * Signature: uint8_t __thiscall ~CommanderVideo(CommanderVideo * self)
 * Class: CommanderVideo
 * Calls: `BaseResource__Release`, `CommanderVideo__CommanderVideo__00464490`, `CreateCommanderVideoResources`, `DestroyCommanderVideoResources`, `MeatBoyCharactor__MeatBoyCharactor__00476510`, `TResourceCreator__RemoveResourceCreationFunction`, `TResourceCreator__RemoveResourceDestroyFunction`, `free`
 * Called by: (none)
 */
/* CommanderVideo__CommanderVideo__00464490() */

void __thiscall CommanderVideo__CommanderVideo__00464490(CommanderVideo *self)

{
  *(uint8_t ***)self = &PTR__CommanderVideo_005be790;
  if (*(int *)(self + 0xa40) == 0) {
    if (*(long **)(self + 0xaa8) != (long *)0x0) {
      /* try { // try from 004643f8 to 0046445a has its CatchHandler @ 00464468 */
      (**(code **)(**(long **)(self + 0xaa8) + 8))();
    }
    if (*(long **)(self + 0xab0) != (long *)0x0) {
      (**(code **)(**(long **)(self + 0xab0) + 8))();
    }
    free(*(void **)(self + 0xac0));
    *(uint64_t *)(self + 0xac0) = 0;
    if (*(BaseResource **)(self + 0xab8) != (BaseResource *)0x0) {
      BaseResource__Release(*(BaseResource **)(self + 0xab8), 0);
    }
    TResourceCreator__RemoveResourceCreationFunction((TResourceCreator *)ResourceCreator,
                                                     CreateCommanderVideoResources, self);
    TResourceCreator__RemoveResourceDestroyFunction((TResourceCreator *)ResourceCreator,
                                                    DestroyCommanderVideoResources, self);
  }
  MeatBoyCharactor__MeatBoyCharactor__00476510((MeatBoyCharactor *)self);
  return;
}

/* ======================================================================
 * CommanderVideo__CommanderVideo__00464490  (Ghidra `~CommanderVideo` @ 00464490)
 * Signature: uint8_t __thiscall ~CommanderVideo(CommanderVideo * self)
 * Class: CommanderVideo
 * Calls: `operator_delete`
 * Called by: `CommanderVideo__CommanderVideo`
 */
/* CommanderVideo__CommanderVideo__00464490() */

void __thiscall CommanderVideo__CommanderVideo__00464490(CommanderVideo *self)

{
  CommanderVideo__dtor(self);
  operator_delete(self);
  return;
}

/* ======================================================================
 * CommanderVideo__Update  (Ghidra `Update` @ 004644b0)
 * Signature: uint8_t __thiscall Update(CommanderVideo * self)
 * Class: CommanderVideo
 * Calls: `MeatBoyCharactor__ProcessReplayFrame`, `MeatBoyCharactor__Update`, `Vector2__operator_assign`
 * Called by: (none)
 */
/* CommanderVideo__Update() */

void __thiscall CommanderVideo__Update(CommanderVideo *self)

{
  long lVar1;
  int iVar2;
  float fVar3;

  MeatBoyCharactor__ProcessReplayFrame((MeatBoyCharactor *)self);
  lVar1 = Engine;
  if (*(int *)(self + 0xa94) == 1) {
    *(uint32_t *)(self + 0x8c4) = 0;
    *(uint32_t *)(self + 0xbc) = 0;
    fVar3 = *(float *)(self + 0xa98) - *(float *)(lVar1 + 0x38);
    *(float *)(self + 0xa98) = fVar3;
    if (fVar3 <= 0.0) {
      *(uint32_t *)(self + 0xa94) = 0;
    }
  } else {
    *(uint32_t *)(self + 0x8c4) = *(uint32_t *)(self + 0xa9c);
  }
  if (*(long *)(self + 0xab8) != 0) {
    Vector2__operator_assign(
        (Vector2 *)(*(long *)(self + 0xac0) + (long)*(int *)(self + 0xacc) * 8),
        (Vector2 *)(self + 0xa0));
    iVar2 = 100;
    if (*(int *)(self + 0xad0) < 99) {
      iVar2 = *(int *)(self + 0xad0) + 1;
    }
    *(int *)(self + 0xad0) = iVar2;
    iVar2 = *(int *)(self + 0xacc) + 1;
    if (iVar2 < 100) {
      if (iVar2 < 0) {
        iVar2 = 99;
      }
    } else {
      iVar2 = 0;
    }
    *(int *)(self + 0xacc) = iVar2;
  }
  *(uint32_t *)(self + 0xaa0) = *(uint32_t *)(self + 0xbc);
  MeatBoyCharactor__Update((MeatBoyCharactor *)self);
  return;
}

/* ======================================================================
 * CommanderVideo__Render  (Ghidra `Render` @ 004645a0)
 * Signature: uint8_t __thiscall Render(CommanderVideo * self)
 * Class: CommanderVideo
 * Calls: `MeatBoyCharFoundation__Render`, `MeatBoyCharactor__Render`, `Render`, `TGraphics__AddPixelStage`, `TGraphics__Draw`, `TGraphics__GetMatrix`, `TGraphics__ResetPixelStages`, `TGraphics__ResetTexCoordGen`, `TGraphics__SetPixelColorConstant`, `TGraphics__SetRenderState` (+5 more)
 * Called by: (none)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CommanderVideo__Render() */

void __thiscall CommanderVideo__Render(CommanderVideo *self)

{
  VertexBuffer *this_00;
  TGraphics *this_01;
  long lVar1;
  uint32_t *puVar2;
  Matrix4x4 *pMVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  float fVar9;
  float local_fc;
  uint32_t *local_f8[2];
  uint64_t local_e8[2];
  uint32_t local_d8;
  uint32_t local_d4;
  uint32_t local_c8;
  uint32_t local_c4;
  uint32_t local_b8;
  uint32_t local_b4;
  uint32_t local_a8;
  uint32_t local_a4;
  Vector2 local_98[16];
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

  if ((*(long *)(self + 0xab8) != 0) && (1 < *(int *)(self + 0xad0))) {
    this_00 = *(VertexBuffer **)(*(long *)(self + 0xab8) + 0x20);
    VertexBuffer__Lock(this_00, local_f8, 1, 0);
    lVar1 = 0;
    iVar5 = *(int *)(self + 0xad0);
    iVar4 = *(int *)(self + 0xacc) + -1;
    if ((iVar4 < 100) && (lVar1 = 0x318, -1 < iVar4)) {
      lVar1 = (long)iVar4 << 3;
    }
    iVar6 = 0;
    iVar4 = 2;
    local_e8[0] = *(uint64_t *)(*(long *)(self + 0xac0) + lVar1);
    local_d8 = 0;
    local_d4 = 0x40000000;
    Vector2__operator_minus__005be180((Vector2 *)&local_c8, (Vector2 *)local_e8);
    *local_f8[0] = local_c8;
    local_b8 = 0;
    local_f8[0][1] = local_c4;
    local_b4 = 0x40000000;
    local_f8[0][2] = 0xffffffff;
    Vector2__operator_plus__005be140((Vector2 *)&local_a8, (Vector2 *)local_e8);
    local_f8[0][3] = local_a8;
    local_f8[0][5] = 0xffffffff;
    local_f8[0][4] = local_a4;
    if (1 < *(int *)(self + 0xad0)) {
      iVar8 = 1;
      lVar1 = 0x24;
      local_fc = DAT_005be894 /* R:1.0f */ - DAT_005be894 /* R:1.0f */ / (float)iVar5;
      do {
        iVar6 = iVar4;
        iVar5 = *(int *)(self + 0xacc) + -1;
        if (iVar5 < 100) {
          if (iVar5 < 0) {
            iVar5 = 99;
          }
        } else {
          iVar5 = 0;
        }
        iVar5 = iVar5 - iVar8;
        if (iVar5 < 0) {
          iVar5 = iVar5 + 99;
        }
        iVar4 = iVar6 + 2;
        iVar8 = iVar8 + 1;
        Vector2__operator_assign(local_98, (Vector2 *)(*(long *)(self + 0xac0) + (long)iVar5 * 8));
        local_88 = 0;
        local_84 = 0x40000000;
        Vector2__operator_minus__005be180((Vector2 *)&local_78, local_98);
        fVar9 = DAT_005be898 /* R:255.0f */ * local_fc;
        puVar2 = (uint32_t *)(lVar1 + -0xc + (long)local_f8[0]);
        *puVar2 = local_78;
        local_68 = 0;
        puVar2[1] = local_74;
        local_64 = 0x40000000;
        uVar7 = (int)(long)fVar9 << 0x18 | 0xffffff;
        *(uint *)((long)local_f8[0] + lVar1 + -4) = uVar7;
        Vector2__operator_plus__005be140((Vector2 *)&local_58, local_98);
        fVar9 = _DAT_005be89c /* R:0.9300000071525574f */ * local_fc;
        *(uint32_t *)(lVar1 + (long)local_f8[0]) = local_58;
        local_fc = 0.0;
        if (0.0 <= fVar9) {
          local_fc = fVar9;
        }
        ((uint32_t *)(lVar1 + (long)local_f8[0]))[1] = local_54;
        *(uint *)((long)local_f8[0] + lVar1 + 8) = uVar7;
        lVar1 = lVar1 + 0x18;
        Vector2__operator_assign((Vector2 *)local_e8, local_98);
      } while (iVar8 < *(int *)(self + 0xad0));
    }
    VertexBuffer__Unlock(this_00);
    this_01 = Graphics;
    *(int *)(*(long *)(self + 0xab8) + 0x14) = iVar4;
    *(int *)(*(long *)(self + 0xab8) + 0x10) = iVar6;
    TGraphics__ResetPixelStages(this_01);
    TGraphics__ResetTexCoordGen(Graphics);
    TGraphics__AddPixelStage(Graphics, 4, 0, 1, 0, 3, 3, 0xffffffff);
    pMVar3 = (Matrix4x4 *)TGraphics__GetMatrix(Graphics, 0);
    Matrix4x4__Identity(pMVar3);
    if ((Render()::pColors == '\0') &&
        (iVar5 = __cxa_guard_acquire(&Render()::pColors), iVar5 != 0)) {
      Render()::pColors._0_4_ = 0x3ec4c4c5;
      Render()::pColors._4_4_ = 0x3eaeaeaf;
      Render()::pColors._8_4_ = 0x3f038384;
      Render()::pColors._12_4_ = 0x3f800000;
      Render()::pColors._16_4_ = 0x3f6ceced;
      Render()::pColors._20_4_ = 0x3f008081;
      Render()::pColors._24_4_ = 0x3f22a2a3;
      Render()::pColors._28_4_ = 0x3f800000;
      Render()::pColors._32_4_ = 0x3eaeaeaf;
      Render()::pColors._36_4_ = 0x3f2cacad;
      Render()::pColors._40_4_ = 0x3f1f9fa0;
      Render()::pColors._44_4_ = 0x3f800000;
      Render()::pColors._48_4_ = 0x3f800000;
      Render()::pColors._52_4_ = 0x3f2fafb0;
      Render()::pColors._56_4_ = 0x3e989899;
      Render()::pColors._60_4_ = 0x3f800000;
      Render()::pColors._64_4_ = 0x3f77f7f8;
      Render()::pColors._68_4_ = 0x3f5bdbdc;
      Render()::pColors._72_4_ = 0x3e008081;
      Render()::pColors._76_4_ = 0x3f800000;
      __cxa_guard_release(&Render()::pColors);
      __cxa_atexit(__tcf_0, 0, &__dso_handle);
    }
    TGraphics__SetRenderState(Graphics, '\a', 0);
    local_48 = 0;
    local_44 = 0xc0d55556;
    pMVar3 = (Matrix4x4 *)TGraphics__GetMatrix(Graphics);
    Matrix4x4__Transformation2DRot(pMVar3, (Vector2 *)0x0, (float *)0x0, (Vector2 *)&local_48);
    TGraphics__SetPixelColorConstant(Graphics, 0, Render()::pColors);
    TGraphics__Draw(Graphics, *(VertexStream **)(self + 0xab8), (IndexBuffer *)0x0);
    local_48 = 0;
    local_44 = 0xc02aaaac;
    pMVar3 = (Matrix4x4 *)TGraphics__GetMatrix(Graphics);
    Matrix4x4__Transformation2DRot(pMVar3, (Vector2 *)0x0, (float *)0x0, (Vector2 *)&local_48);
    TGraphics__SetPixelColorConstant(Graphics, 0, 0x818790);
    TGraphics__Draw(Graphics, *(VertexStream **)(self + 0xab8), (IndexBuffer *)0x0);
    local_48 = 0;
    local_44 = 0x3faaaaa8;
    pMVar3 = (Matrix4x4 *)TGraphics__GetMatrix(Graphics);
    Matrix4x4__Transformation2DRot(pMVar3, (Vector2 *)0x0, (float *)0x0, (Vector2 *)&local_48);
    TGraphics__SetPixelColorConstant(Graphics, 0, 0x8187a0);
    TGraphics__Draw(Graphics, *(VertexStream **)(self + 0xab8), (IndexBuffer *)0x0);
    local_48 = 0;
    local_44 = 0x40aaaaaa;
    pMVar3 = (Matrix4x4 *)TGraphics__GetMatrix(Graphics);
    Matrix4x4__Transformation2DRot(pMVar3, (Vector2 *)0x0, (float *)0x0, (Vector2 *)&local_48);
    TGraphics__SetPixelColorConstant(Graphics, 0, 0x8187b0);
    TGraphics__Draw(Graphics, *(VertexStream **)(self + 0xab8), (IndexBuffer *)0x0);
    local_48 = 0;
    local_44 = 0x41155555;
    pMVar3 = (Matrix4x4 *)TGraphics__GetMatrix(Graphics);
    Matrix4x4__Transformation2DRot(pMVar3, (Vector2 *)0x0, (float *)0x0, (Vector2 *)&local_48);
    TGraphics__SetPixelColorConstant(Graphics, 0, 0x8187c0);
    TGraphics__Draw(Graphics, *(VertexStream **)(self + 0xab8), (IndexBuffer *)0x0);
  }
  if (*(int *)(self + 0xa94) == 1) {
    (**(code **)(*(long *)self + 0x50))(self);
    if ((float)(*(uint *)(self + 0xb8) & DAT_005be880 /* R:u32=2147483647 */) <
        DAT_005be890 /* R:200.0f */) {
      *(uint32_t *)(*(long *)(self + 0xaa8) + 0x58) = *(uint32_t *)(self + 0xad4);
      MeatBoyCharFoundation__Render(*(MeatBoyCharFoundation **)(self + 0xf8),
                                    (MeatBoyCharactor *)self,
                                    *(FlashLibraryInstance **)(self + 0xaa8));
    } else {
      *(uint32_t *)(*(long *)(self + 0xab0) + 0x58) = *(uint32_t *)(self + 0xad4);
      MeatBoyCharFoundation__Render(*(MeatBoyCharFoundation **)(self + 0xf8),
                                    (MeatBoyCharactor *)self,
                                    *(FlashLibraryInstance **)(self + 0xab0));
    }
  } else {
    MeatBoyCharactor__Render((MeatBoyCharactor *)self);
  }
  return;
}

/* ======================================================================
 * CommanderVideo__CommanderVideo__00464c70  (Ghidra `CommanderVideo` @ 00464c70)
 * Signature: uint8_t __thiscall CommanderVideo(CommanderVideo * self)
 * Class: CommanderVideo
 * Calls: `CommanderVideo__CommanderVideo__00464d60`, `CreateCommanderVideoResources`, `DestroyCommanderVideoResources`, `FormatResourcePath`, `MeatBoyCharactor__MeatBoyCharactor__0047b350`, `TResourceCreator__AddResourceCreationFunction`, `TResourceCreator__AddResourceDestroyFunction`, `malloc`
 * Called by: (none)
 */
/* CommanderVideo__CommanderVideo__00464d60() */

void __thiscall CommanderVideo__CommanderVideo__00464d60(CommanderVideo *self)

{
  uint64_t uVar1;
  void *pvVar2;

  uVar1 = FormatResourcePath("/Animations/commander_video.am", &strCharPath);
  MeatBoyCharactor__MeatBoyCharactor__0047b350((MeatBoyCharactor *)self, uVar1, 0xb);
  *(uint8_t ***)self = &PTR__CommanderVideo_005be790;
  *(uint32_t *)(self + 0xacc) = 0;
  *(uint32_t *)(self + 0xad0) = 0;
  *(uint64_t *)(self + 0xab8) = 0;
  /* try { // try from 00464cc0 to 00464d26 has its CatchHandler @ 00464d3e */
  CreateCommanderVideoResources(self);
  *(uint32_t *)(self + 0xa54) = 0xb;
  *(uint32_t *)(self + 0xaa4) = 0;
  *(uint32_t *)(self + 0xa94) = 0;
  *(uint32_t *)(self + 0xa98) = 0;
  *(uint32_t *)(self + 0xad4) = 0;
  *(uint32_t *)(self + 0xa9c) = *(uint32_t *)(self + 0x8c4);
  TResourceCreator__AddResourceCreationFunction((TResourceCreator *)ResourceCreator,
                                                CreateCommanderVideoResources, self);
  TResourceCreator__AddResourceDestroyFunction((TResourceCreator *)ResourceCreator,
                                               DestroyCommanderVideoResources, self);
  pvVar2 = malloc(800);
  *(void **)(self + 0xac0) = pvVar2;
  return;
}

/* ======================================================================
 * CommanderVideo__CommanderVideo__00464d60  (Ghidra `CommanderVideo` @ 00464d60)
 * Signature: uint8_t __thiscall CommanderVideo(CommanderVideo * self, MeatBoyCharactor * arg1, int arg2)
 * Class: CommanderVideo
 * Calls: `MeatBoyCharactor__Clone`, `MeatBoyCharactor__MeatBoyCharactor__0047b350`
 * Called by: `CommanderVideo__CommanderVideo__00464c70`, `GSMBCharactor__CreateCharactor`, `GSMBCharactor__CreateCharactor__0049c600`
 */
/* CommanderVideo__CommanderVideo__00464d60(MeatBoyCharactor*, int) */

void __thiscall CommanderVideo__CommanderVideo__00464d60(CommanderVideo *self,
                                                         MeatBoyCharactor *arg1, int arg2)

{
  MeatBoyCharactor__MeatBoyCharactor__0047b350((MeatBoyCharactor *)self);
  *(uint8_t ***)self = &PTR__CommanderVideo_005be790;
  *(uint64_t *)(self + 0xab8) = 0;
  *(uint64_t *)(self + 0xac0) = 0;
  /* try { // try from 00464da7 to 00464dab has its CatchHandler @ 00464e0f */
  MeatBoyCharactor__Clone((MeatBoyCharactor *)self, arg1, arg2);
  *(uint32_t *)(self + 0xaa4) = 0;
  *(uint32_t *)(self + 0xa94) = 0;
  *(uint32_t *)(self + 0xa98) = 0;
  *(uint32_t *)(self + 0xad4) = 0;
  *(uint32_t *)(self + 0xa9c) = *(uint32_t *)(self + 0x8c4);
  *(uint64_t *)(self + 0xaa8) = *(uint64_t *)(arg1 + 0xaa8);
  *(uint64_t *)(self + 0xab0) = *(uint64_t *)(arg1 + 0xab0);
  return;
}

/* ======================================================================
 * CommanderVideo__AddRainbowPosition  (Ghidra `AddRainbowPosition` @ 00464e30)
 * Signature: uint8_t __thiscall AddRainbowPosition(CommanderVideo * self, Vector2 * arg1)
 * Class: CommanderVideo
 * Calls: `Vector2__operator_assign`
 * Called by: (none)
 */
/* CommanderVideo__AddRainbowPosition(Vector2 const&) */

void __thiscall CommanderVideo__AddRainbowPosition(CommanderVideo *self, Vector2 *arg1)

{
  int iVar1;

  Vector2__operator_assign((Vector2 *)(*(long *)(self + 0xac0) + (long)*(int *)(self + 0xacc) * 8),
                           arg1);
  iVar1 = 100;
  if (*(int *)(self + 0xad0) < 99) {
    iVar1 = *(int *)(self + 0xad0) + 1;
  }
  *(int *)(self + 0xad0) = iVar1;
  iVar1 = *(int *)(self + 0xacc) + 1;
  if (iVar1 < 100) {
    if (iVar1 < 0) {
      iVar1 = 99;
    }
    *(int *)(self + 0xacc) = iVar1;
    return;
  }
  *(uint32_t *)(self + 0xacc) = 0;
  return;
}

/* ======================================================================
 * CommanderVideo__GetRainbowPosition  (Ghidra `GetRainbowPosition` @ 00464ea0)
 * Signature: uint8_t __thiscall GetRainbowPosition(CommanderVideo * self, int arg1)
 * Class: CommanderVideo
 * Calls: (none)
 * Called by: (none)
 */
/* CommanderVideo__GetRainbowPosition(int) */

long __thiscall CommanderVideo__GetRainbowPosition(CommanderVideo *self, int arg1)

{
  int iVar1;

  iVar1 = *(int *)(self + 0xacc) + -1;
  if (iVar1 < 100) {
    if (iVar1 < 0) {
      iVar1 = 99;
    }
  } else {
    iVar1 = 0;
  }
  iVar1 = iVar1 - arg1;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 99;
  }
  return *(long *)(self + 0xac0) + (long)iVar1 * 8;
}
