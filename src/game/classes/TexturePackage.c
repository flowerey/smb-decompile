/* src/game/classes/TexturePackage.c — 4 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "TexturePackage.h"

/* ======================================================================
 * TexturePackage__TexturePackage  (Ghidra `TexturePackage` @ 005a1960)
 * Signature: uint8_t __thiscall TexturePackage(TexturePackage * self, TexturePackageCreate * arg1)
 * Class: TexturePackage
 * Calls: `File__File`, `File__File__005b7a70`, `File__Read`, `File__ReadVariable`, `malloc`
 * Called by: `CreateAnimationLibResources`, `CreateSMBEditorResources`, `CreateSMBPaletteResources`, `GLOBAL_sub_I_TexturePackage`
 */
/* TexturePackage__TexturePackage(TexturePackageCreate const*) */

void __thiscall TexturePackage__TexturePackage(TexturePackage *self,TexturePackageCreate *arg1)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  uint64_t local_88;
  uint8_t *local_80;
  uint32_t local_78;
  uint64_t local_70;
  uint32_t local_68;
  uint32_t local_64;
  uint32_t local_60;
  uint32_t local_5c;
  uint32_t local_58;
  uint32_t local_54;
  uint8_t *local_50;
  File local_48 [4];
  int local_44;
  
  local_88 = *(uint64_t *)arg1;
  local_78 = 2;
  local_70 = 0;
  local_68 = 0;
  local_64 = 1;
  local_60 = 1;
  local_5c = 0;
  local_58 = 0;
  local_54 = 0;
  local_50 = &DAT_005c04cf /* R:7.374579797039071e-39f */;
  local_80 = &DAT_005c328c /* R:u32=1811964530 */;
  File__File(local_48,(tagFileCreation *)&local_88);
                    /* try { // try from 005a19df to 005a1ae5 has its CatchHandler @ 005a1af9 */
  File__ReadVariable(local_48,self,4);
  pvVar1 = operator_new__((long)*(int *)self * 0x14);
  iVar2 = *(int *)self;
  *(void **)(self + 8) = pvVar1;
  if (0 < iVar2) {
    lVar4 = 0;
    iVar5 = 0;
    while( true ) {
      File__ReadVariable(local_48,(void *)((long)pvVar1 + lVar4),4);
      File__ReadVariable(local_48,(void *)(lVar4 + *(long *)(self + 8) + 4),4);
      File__ReadVariable(local_48,(void *)(lVar4 + *(long *)(self + 8) + 8),2);
      File__ReadVariable(local_48,(void *)(lVar4 + *(long *)(self + 8) + 10),2);
      File__ReadVariable(local_48,(void *)(lVar4 + *(long *)(self + 8) + 0xc),1);
      File__ReadVariable(local_48,(void *)(lVar4 + *(long *)(self + 8) + 0x10),4);
      iVar2 = *(int *)self;
      iVar5 = iVar5 + 1;
      lVar4 = lVar4 + 0x14;
      if (iVar2 <= iVar5) break;
      pvVar1 = *(void **)(self + 8);
    }
  }
  uVar3 = local_44 + -4 + iVar2 * -0x11;
  pvVar1 = malloc((ulong)uVar3);
  *(void **)(self + 0x10) = pvVar1;
  File__Read(local_48,pvVar1,uVar3);
  File__File__005b7a70(local_48);
  return;
}

/* ======================================================================
 * TexturePackage__TexturePackage__005a1b10  (Ghidra `~TexturePackage` @ 005a1b10)
 * Signature: uint8_t __thiscall ~TexturePackage(TexturePackage * self)
 * Class: TexturePackage
 * Calls: `free`
 * Called by: `CreateAnimationLibResources`, `CreateSMBEditorResources`, `CreateSMBPaletteResources`
 */
/* TexturePackage__TexturePackage__005a1b10() */

void __thiscall TexturePackage__TexturePackage__005a1b10(TexturePackage *self)

{
  if (*(void **)(self + 8) != (void *)0x0) {
    operator_delete__(*(void **)(self + 8));
  }
  free(*(void **)(self + 0x10));
  return;
}

/* ======================================================================
 * TexturePackage__CreateTexture  (Ghidra `CreateTexture` @ 005a1b30)
 * Signature: uint8_t __thiscall CreateTexture(TexturePackage * self, int arg1)
 * Class: TexturePackage
 * Calls: (none)
 * Called by: `CreateAnimationLibResources`, `CreateSMBEditorResources`, `CreateSMBPaletteResources`, `Sprite__Sprite__005a0040`
 */
/* TexturePackage__CreateTexture(int) */

void __thiscall TexturePackage__CreateTexture(TexturePackage *self,int arg1)

{
  uint *puVar1;
  uint64_t local_48;
  long local_40;
  uint local_38;
  uint32_t local_34;
  uint32_t local_30;
  uint16_t local_2c;
  uint32_t local_24;
  uint8_t local_20;
  uint32_t local_1c;
  uint32_t local_18;
  
  local_48 = 0;
  puVar1 = (uint *)(*(long *)(self + 8) + (long)arg1 * 0x14);
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_20 = 1;
  local_1c = 0;
  local_18 = 0;
  local_40 = ((ulong)*puVar1 + *(long *)(self + 0x10) + -4) - (ulong)(uint)(*(int *)self * 0x11);
  local_38 = puVar1[1];
  local_24 = 0x20;
  Texture__Create((tagTextureCreation *)&local_48);
  return;
}

/* ======================================================================
 * TexturePackage__GetTextureData  (Ghidra `GetTextureData` @ 005a1bd0)
 * Signature: uint8_t __thiscall GetTextureData(TexturePackage * self, int arg1, TexturePackageTexture * arg2)
 * Class: TexturePackage
 * Calls: (none)
 * Called by: (none)
 */
/* TexturePackage__GetTextureData(int, TexturePackageTexture*) */

void __thiscall
TexturePackage__GetTextureData(TexturePackage *self,int arg1,TexturePackageTexture *arg2)

{
  long lVar1;
  
  lVar1 = (long)arg1 * 0x14;
  arg2[4] = *(TexturePackageTexture *)(*(long *)(self + 8) + 0xc + lVar1);
  *(uint16_t *)arg2 = *(uint16_t *)(*(long *)(self + 8) + 8 + lVar1);
  *(uint16_t *)(arg2 + 2) = *(uint16_t *)(*(long *)(self + 8) + 10 + lVar1);
  *(uint32_t *)(arg2 + 8) = *(uint32_t *)(*(long *)(self + 8) + 0x10 + lVar1);
  *(ulong *)(arg2 + 0x10) =
       ((ulong)*(uint *)(*(long *)(self + 8) + lVar1) + *(long *)(self + 0x10) + -4) -
       (ulong)(uint)(*(int *)self * 0x11);
  return;
}
