/* src/game/classes/BaseResource.c — 6 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "BaseResource.h"

/* ======================================================================
 * BaseResource__AddRef  (Ghidra `AddRef` @ 0057be20)
 * Signature: uint8_t __thiscall AddRef(BaseResource * self)
 * Class: BaseResource
 * Calls: (none)
 * Called by: `TextEmitterFont__AddRef`, `VertexStream__AddRef`
 */
/* BaseResource__AddRef() */

void __thiscall BaseResource__AddRef(BaseResource *self)

{
  *(int *)(self + 8) = *(int *)(self + 8) + 1;
  return;
}

/* ======================================================================
 * BaseResource__RemoveRef  (Ghidra `RemoveRef` @ 0057be30)
 * Signature: uint8_t __thiscall RemoveRef(BaseResource * self)
 * Class: BaseResource
 * Calls: (none)
 * Called by: `TextEmitterFont__RemoveRef`, `VertexStream__RemoveRef`
 */
/* BaseResource__RemoveRef() */

int __thiscall BaseResource__RemoveRef(BaseResource *self)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(self + 8) + -1;
  *(int *)(self + 8) = iVar2;
  iVar1 = 0;
  if (-1 < iVar2) {
    iVar1 = iVar2;
  }
  return iVar1;
}

/* ======================================================================
 * BaseResource__operator_delete  (Ghidra `operator.delete` @ 0057c2f0)
 * Signature: void __thiscall operator.delete(BaseResource * self, void * arg1)
 * Class: BaseResource
 * Calls: (none)
 * Called by: `IndexBuffer__IndexBuffer__0058a550`, `Model__Model__005928a0`, `PixelShader__PixelShader__00595da0`, `SMBPalette__SMBPalette__004f3c80`, `Shader__Shader__00595e10`, `TextEmitterFont__TextEmitterFont__00584f60`, `Texture__Texture__005a0720`, `VertexBuffer__VertexBuffer__005a6360`, `VertexDeclaration__VertexDeclaration__005a65f0`, `VertexShader__VertexShader__005a67a0` (+2 more)
 */
/* BaseResource__operator delete(void*) */

void __thiscall BaseResource__operator_delete(BaseResource *self,void *arg1)

{
  (*(code *)PTR_free_00815b18)();
  return;
}

/* ======================================================================
 * BaseResource__Release  (Ghidra `Release` @ 0057c300)
 * Signature: uint8_t __thiscall Release(BaseResource * self, int arg1)
 * Class: BaseResource
 * Calls: `AutoLockSection__AutoLockSection`, `AutoLockSection__AutoLockSection__005b59d0`
 * Called by: `CommanderVideo__CommanderVideo`, `CreateAnimationLibResources`, `CreateCommanderVideoResources`, `CreateFontEmitterResources`, `CreateSMBEditorResources`, `CreateSMBPaletteResources`, `CreateSetPieceWayPointResources`, `CreateTileLevelResources`, `CreateTileLightMapResources`, `Cursor3D__Cursor3D` (+50 more)
 */
/* BaseResource__Release(int) */

void __thiscall BaseResource__Release(BaseResource *self,int arg1)

{
  long *plVar1;
  ushort uVar2;
  uint64_t *puVar3;
  CriticalSection *pCVar4;
  ushort uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  uint64_t *puVar10;
  uint64_t *puVar11;
  ulong uVar12;
  ulong uVar13;
  ushort uVar14;
  byte bVar15;
  AutoLockSection aAStack_28 [16];
  
  bVar15 = 0;
  if ((arg1 != 1) && (iVar6 = (**(code **)(*(long *)self + 0x18))(), 0 < iVar6)) {
    return;
  }
  pCVar4 = Resources;
  AutoLockSection__AutoLockSection(aAStack_28,Resources);
  uVar14 = *(ushort *)(pCVar4 + 0x50);
  if (uVar14 == 0) goto LAB_0057c3a0;
  puVar11 = *(uint64_t **)(pCVar4 + 0x60);
  uVar5 = 0;
  puVar3 = puVar11;
  if (self == (BaseResource *)puVar11[0x10]) {
    uVar5 = 0;
    puVar10 = puVar11;
  }
  else {
    do {
      uVar5 = uVar5 + 1;
      if (uVar5 == uVar14) goto LAB_0057c3a0;
      plVar1 = puVar3 + 0x21;
      puVar10 = puVar3 + 0x11;
      puVar3 = puVar3 + 0x11;
    } while (self != (BaseResource *)*plVar1);
  }
  uVar14 = uVar14 - 1;
  if ((*(int *)(pCVar4 + 0x58) == 1) && (*(ushort *)(pCVar4 + 0x52) != 0)) {
    uVar13 = 0xffffffff;
    lVar9 = *(long *)(pCVar4 + 0x68);
    uVar12 = 0xffffffff;
    uVar8 = 0;
    do {
      uVar2 = *(ushort *)(lVar9 + uVar8 * 2);
      if (uVar2 == uVar5) {
        uVar13 = uVar8 & 0xffffffff;
      }
      if (uVar14 == uVar2) {
        uVar12 = uVar8 & 0xffffffff;
      }
    } while ((uVar8 != (*(ushort *)(pCVar4 + 0x52) - 1 & 0xffff)) &&
            ((uVar8 = uVar8 + 1, (short)uVar12 == -1 || ((short)uVar13 == -1))));
    if ((short)uVar12 == (short)uVar13) {
      lVar7 = (uVar12 & 0xffff) * 2;
      goto LAB_0057c394;
    }
    puVar11 = puVar11 + (ulong)uVar14 * 0x11;
    for (lVar9 = 0x11; lVar9 != 0; lVar9 = lVar9 + -1) {
      *puVar10 = *puVar11;
      puVar11 = puVar11 + (ulong)bVar15 * -2 + 1;
      puVar10 = puVar10 + (ulong)bVar15 * -2 + 1;
    }
    if (*(int *)(pCVar4 + 0x58) == 1) {
      *(uint16_t *)(*(long *)(pCVar4 + 0x68) + (uVar13 & 0xffff) * 2) = 0xffff;
      *(ushort *)(*(long *)(pCVar4 + 0x68) + (uVar12 & 0xffff) * 2) = uVar5;
    }
  }
  else {
    lVar9 = *(long *)(pCVar4 + 0x68);
    lVar7 = 0x1fffe;
LAB_0057c394:
    *(uint16_t *)(lVar9 + lVar7) = 0xffff;
  }
  *(ushort *)(pCVar4 + 0x50) = uVar14;
LAB_0057c3a0:
  AutoLockSection__AutoLockSection__005b59d0(aAStack_28);
  if (self == (BaseResource *)0x0) {
    return;
  }
  (**(code **)(*(long *)self + 8))(self);
  return;
}

/* ======================================================================
 * BaseResource__BaseResource  (Ghidra `~BaseResource` @ 0057d1c0)
 * Signature: uint8_t __thiscall ~BaseResource(BaseResource * self)
 * Class: BaseResource
 * Calls: `BaseResource__BaseResource__0057d1d0`
 * Called by: (none)
 */
/* BaseResource__BaseResource__0057d1d0() */

void __thiscall BaseResource__BaseResource__0057d1d0(BaseResource *self)

{
  *(uint8_t ***)self = &PTR__BaseResource_005dbe30;
  return;
}

/* ======================================================================
 * BaseResource__BaseResource__0057d1d0  (Ghidra `~BaseResource` @ 0057d1d0)
 * Signature: uint8_t __thiscall ~BaseResource(BaseResource * self)
 * Class: BaseResource
 * Calls: `free`
 * Called by: `BaseResource__BaseResource`
 */
/* BaseResource__BaseResource__0057d1d0() */

void __thiscall BaseResource__BaseResource__0057d1d0(BaseResource *self)

{
  *(uint8_t ***)self = &PTR__BaseResource_005dbe30;
  free(self);
  return;
}
