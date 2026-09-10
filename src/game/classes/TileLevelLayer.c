/* src/game/classes/TileLevelLayer.c — 3 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "TileLevelLayer.h"

/* ======================================================================
 * TileLevelLayer__Render  (Ghidra `Render` @ 0058d090)
 * Signature: uint8_t __thiscall Render(TileLevelLayer * self)
 * Class: TileLevelLayer
 * Calls: `Camera__ScreenToWorld`, `Camera__SetCameraMatricies`, `LevelRenderLayer__Render`, `TGraphics__DeleteMasterPixelStage`, `TGraphics__SetMasterPixelStage`, `TGraphics__SetPixelColorConstant`, `TGraphics__SetPixelOutputParams`, `TGraphics__SetRenderState`, `TGraphics__SetSamplerState`, `TileLevel__GetGridIndex__0058dd90`
 * Called by: (none)
 */
/* TileLevelLayer__Render() */

void __thiscall TileLevelLayer__Render(TileLevelLayer *self)

{
  char *pcVar1;
  long lVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  ushort uVar6;
  float fVar7;
  float fVar8;
  float local_a4;
  ushort local_a0;
  ushort local_9e;
  float local_9c;
  uint32_t local_98;
  uint32_t local_94;
  uint32_t local_90;
  uint32_t local_8c;
  Vector2 local_88 [16];
  uint32_t local_78;
  uint32_t local_74;
  uint32_t local_68;
  uint32_t local_64;
  float local_58;
  float local_54;
  ushort local_48 [2];
  ushort local_44 [2];
  uint local_40;
  int local_3c [3];
  
  iVar5 = *(int *)(self + 0x420);
  if ((((iVar5 != 2) && (iVar5 != 0)) && (iVar5 != 1)) && (SystemCaps._4_4_ == 8)) {
    (**(code **)(**(long **)(*(long *)(self + 0x418) + 0x40) + 0x30))();
    return;
  }
  TGraphics__SetMasterPixelStage(Graphics,0x15,0,2,0,4);
  TGraphics__SetPixelOutputParams(Graphics,*(float *)(self + 0x410),0.0,0.0,0.0);
  TGraphics__SetPixelColorConstant(Graphics,1,self + 0x400);
  Camera__SetCameraMatricies(*(Camera **)(*(long *)(self + 0x418) + 0x48),1);
  TGraphics__SetRenderState(Graphics,'\x03',1);
  TGraphics__SetRenderState(Graphics,'\x01',7);
  TGraphics__SetRenderState(Graphics,'\a',0);
  TGraphics__SetRenderState(Graphics,'\b',1);
  TGraphics__SetSamplerState(Graphics,'\0','\x04',2);
  TGraphics__SetSamplerState(Graphics,'\0','\x03',2);
  TGraphics__SetRenderState(Graphics,'\x05',4);
  TGraphics__SetRenderState(Graphics,'\x06',5);
  (**(code **)**(uint64_t **)(*(long *)(self + 0x418) + 0x40))();
  lVar2 = *(long *)(self + 0x418);
  if (*(int *)(lVar2 + 0x22b0) == 0) {
    if (*(Camera **)(lVar2 + 0x48) == (Camera *)0x0) {
      uVar6 = 0;
      local_a0 = 0;
      local_9e = *(short *)(lVar2 + 0x38) - 1;
      iVar5 = *(ushort *)(lVar2 + 0x3a) - 1;
      local_9c = 0.0;
      local_a4 = 0.0;
      fVar8 = TileLevel__fLevelGridWH;
    }
    else {
      local_78 = 0xbf800000;
      local_74 = 0xbf800000;
      local_98 = 0;
      local_94 = 0;
      local_90 = 0;
      local_8c = 0;
      Camera__ScreenToWorld
                (*(Camera **)(lVar2 + 0x48),(FPUVector *)&local_98,(Vector2 *)&local_78,0.0);
      TileLevel__GetGridIndex__0058dd90
                (*(TileLevel **)(self + 0x418),(Vector2 *)&local_98,local_88,(int *)local_48,
                 local_3c);
      local_68 = 0x3f800000;
      local_64 = 0x3f800000;
      Camera__ScreenToWorld
                (*(Camera **)(*(long *)(self + 0x418) + 0x48),(FPUVector *)&local_98,
                 (Vector2 *)&local_68,0.0);
      TileLevel__GetGridIndex__0058dd90
                (*(TileLevel **)(self + 0x418),(Vector2 *)&local_98,local_88,(int *)local_44,
                 (int *)&local_40);
      local_9e = local_44[0];
      if (local_44[0] < local_48[0]) goto LAB_0058d212;
      local_a0 = (ushort)local_40;
      local_a4 = (float)local_48[0] * TileLevel__fLevelGridWH;
      local_9c = (float)(local_40 & 0xffff) * TileLevel__fLevelGridWH;
      fVar8 = TileLevel__fLevelGridWH;
      iVar5 = local_3c[0];
      uVar6 = local_48[0];
    }
    do {
      uVar4 = (ushort)iVar5;
      if (local_a0 <= uVar4) {
        fVar7 = local_9c;
        uVar3 = local_a0;
        do {
          while( true ) {
            lVar2 = *(long *)(self + 0x418);
            pcVar1 = (char *)(*(long *)(self + 0x430) +
                             (long)(int)((uint)uVar3 * (uint)*(ushort *)(lVar2 + 0x38) + (uint)uVar6
                                        ) * 4);
            if (*pcVar1 == '\0') break;
            uVar3 = uVar3 + 1;
            local_54 = *(float *)(lVar2 + 0x34) + fVar7 + fVar8 * DAT_005be6e4 /* R:0.5f */;
            local_58 = local_a4 + *(float *)(lVar2 + 0x30) + fVar8 * DAT_005be6e4 /* R:0.5f */;
            (**(code **)(**(long **)(lVar2 + 0x40) + 0x10))
                      (*(long **)(lVar2 + 0x40),pcVar1,&local_58);
            fVar7 = fVar7 + TileLevel__fLevelGridWH;
            fVar8 = TileLevel__fLevelGridWH;
            if (uVar4 < uVar3) goto LAB_0058d4d0;
          }
          uVar3 = uVar3 + 1;
          fVar7 = fVar7 + fVar8;
        } while (uVar3 <= uVar4);
      }
LAB_0058d4d0:
      uVar6 = uVar6 + 1;
      local_a4 = local_a4 + fVar8;
    } while (uVar6 <= local_9e);
  }
  else if (*(int *)(lVar2 + 0x22b0) == 1) {
    (**(code **)(**(long **)(lVar2 + 0x40) + 0x18))
              (*(long **)(lVar2 + 0x40),*(uint64_t *)(self + 0x438));
  }
LAB_0058d212:
  TGraphics__SetRenderState(Graphics,'\x03',0);
  TGraphics__SetRenderState(Graphics,'\x01',7);
  TGraphics__SetRenderState(Graphics,'\a',0);
  LevelRenderLayer__Render((LevelRenderLayer *)self);
  TGraphics__DeleteMasterPixelStage(Graphics);
  TGraphics__SetMasterPixelStage(Graphics,0x15,0,2,0,4);
  TGraphics__SetPixelOutputParams(Graphics,*(float *)(self + 0x410),0.0,0.0,0.0);
  TGraphics__SetPixelColorConstant(Graphics,1,self + 0x400);
  TGraphics__DeleteMasterPixelStage(Graphics);
  (**(code **)(**(long **)(*(long *)(self + 0x418) + 0x40) + 8))();
  TGraphics__DeleteMasterPixelStage(Graphics);
  return;
}

/* ======================================================================
 * TileLevelLayer__TileLevelLayer  (Ghidra `~TileLevelLayer` @ 00592100)
 * Signature: uint8_t __thiscall ~TileLevelLayer(TileLevelLayer * self)
 * Class: TileLevelLayer
 * Calls: `RenderLayer__RenderLayer__005988e0`, `TileLevelLayer__TileLevelLayer__00592130`
 * Called by: (none)
 */
/* TileLevelLayer__TileLevelLayer__00592130() */

void __thiscall TileLevelLayer__TileLevelLayer__00592130(TileLevelLayer *self)

{
  *(uint8_t ***)self = &PTR__LevelRenderLayer_005dcfb0;
  RenderLayer__RenderLayer__005988e0((RenderLayer *)self);
  return;
}

/* ======================================================================
 * TileLevelLayer__TileLevelLayer__00592130  (Ghidra `~TileLevelLayer` @ 00592130)
 * Signature: uint8_t __thiscall ~TileLevelLayer(TileLevelLayer * self)
 * Class: TileLevelLayer
 * Calls: `RenderLayer__RenderLayer__005988e0`, `operator_delete`
 * Called by: `TileLevelLayer__TileLevelLayer`
 */
/* TileLevelLayer__TileLevelLayer__00592130() */

void __thiscall TileLevelLayer__TileLevelLayer__00592130(TileLevelLayer *self)

{
  *(uint8_t ***)self = &PTR__LevelRenderLayer_005dcfb0;
  RenderLayer__RenderLayer__005988e0((RenderLayer *)self);
  operator_delete(self);
  return;
}
