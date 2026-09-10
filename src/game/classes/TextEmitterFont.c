/* src/game/classes/TextEmitterFont.c — 7 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "TextEmitterFont.h"

/* ======================================================================
 * TextEmitterFont__RemoveRef  (Ghidra `RemoveRef` @ 00584a00)
 * Signature: uint8_t __thiscall RemoveRef(TextEmitterFont * self)
 * Class: TextEmitterFont
 * Calls: `BaseResource__RemoveRef`
 * Called by: (none)
 */
/* TextEmitterFont__RemoveRef() */

void __thiscall TextEmitterFont__RemoveRef(TextEmitterFont *self)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  long lVar4;

  uVar2 = (uint) * (ushort *)(*(long *)(self + 0x18) + 0xc);
  if (*(ushort *)(*(long *)(self + 0x18) + 0xc) != 0) {
    lVar4 = 0;
    iVar3 = 0;
    do {
      if ((*(long *)(self + 0x58) != 0) &&
          (plVar1 = *(long **)(*(long *)(self + 0x58) + lVar4), plVar1 != (long *)0x0)) {
        (**(code **)(*plVar1 + 0x18))();
        uVar2 = (uint) * (ushort *)(*(long *)(self + 0x18) + 0xc);
      }
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 8;
    } while (iVar3 < (int)uVar2);
  }
  BaseResource__RemoveRef((BaseResource *)self);
  return;
}

/* ======================================================================
 * TextEmitterFont__AddRef  (Ghidra `AddRef` @ 00584a60)
 * Signature: uint8_t __thiscall AddRef(TextEmitterFont * self)
 * Class: TextEmitterFont
 * Calls: `BaseResource__AddRef`
 * Called by: (none)
 */
/* TextEmitterFont__AddRef() */

void __thiscall TextEmitterFont__AddRef(TextEmitterFont *self)

{
  uint64_t *puVar1;
  int iVar2;
  long lVar3;

  if (*(short *)(*(long *)(self + 0x18) + 0xc) != 0) {
    lVar3 = 0;
    iVar2 = 0;
    do {
      iVar2 = iVar2 + 1;
      puVar1 = (uint64_t *)(*(long *)(self + 0x58) + lVar3);
      lVar3 = lVar3 + 8;
      (**(code **)(*(long *)*puVar1 + 0x10))();
    } while (iVar2 < (int)(uint) * (ushort *)(*(long *)(self + 0x18) + 0xc));
  }
  BaseResource__AddRef((BaseResource *)self);
  return;
}

/* ======================================================================
 * TextEmitterFont__TextEmitterFont  (Ghidra `~TextEmitterFont` @ 00584e50)
 * Signature: uint8_t __thiscall ~TextEmitterFont(TextEmitterFont * self)
 * Class: TextEmitterFont
 * Calls: `BaseResource__Release`, `CreateTextEmitterFontResources`, `DestroyTextEmitterFontResources`, `TResourceCreator__RemoveResourceCreationFunction`, `TextEmitterFont__TextEmitterFont__00584f60`
 * Called by: (none)
 */
/* WARNING: Removing unreachable block (ram,0x00584f50) */
/* TextEmitterFont__TextEmitterFont__00584f60() */

void __thiscall TextEmitterFont__TextEmitterFont__00584f60(TextEmitterFont *self)

{
  allocator *paVar1;
  int *piVar2;
  ushort uVar3;
  long lVar4;
  int iVar5;

  *(uint8_t ***)self = &PTR__TextEmitterFont_005dc0b0;
  uVar3 = *(ushort *)(*(long *)(self + 0x18) + 0xc);
  if (uVar3 != 0) {
    lVar4 = 0;
    iVar5 = 0;
    do {
      if (*(BaseResource **)(*(long *)(self + 0x58) + lVar4) != (BaseResource *)0x0) {
        /* try { // try from 00584e87 to 00584eef has its CatchHandler @ 00584f11 */
        BaseResource__Release(*(BaseResource **)(*(long *)(self + 0x58) + lVar4), 0);
        *(uint64_t *)(*(long *)(self + 0x58) + lVar4) = 0;
        uVar3 = *(ushort *)(*(long *)(self + 0x18) + 0xc);
      }
      iVar5 = iVar5 + 1;
      lVar4 = lVar4 + 8;
    } while (iVar5 < (int)(uint)uVar3);
  }
  if (*(void **)(self + 0x40) != (void *)0x0) {
    operator_delete__(*(void **)(self + 0x40));
  }
  if (*(void **)(self + 0x58) != (void *)0x0) {
    operator_delete__(*(void **)(self + 0x58));
  }
  TResourceCreator__RemoveResourceCreationFunction((TResourceCreator *)ResourceCreator,
                                                   CreateTextEmitterFontResources, self);
  TResourceCreator__RemoveResourceCreationFunction((TResourceCreator *)ResourceCreator,
                                                   DestroyTextEmitterFontResources, self);
  paVar1 = (allocator *)(*(long *)(self + 0x50) + -0x18);
  if (paVar1 != (allocator *)&std__string_Rep_S_empty_rep_storage) {
    LOCK();
    piVar2 = (int *)(*(long *)(self + 0x50) + -8);
    iVar5 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar5 < 1) {
      std__string_Rep_M_destroy(paVar1);
    }
  }
  *(uint8_t ***)self = &PTR__BaseResource_005dbe30;
  return;
}

/* ======================================================================
 * TextEmitterFont__TextEmitterFont__00584f60  (Ghidra `~TextEmitterFont` @ 00584f60)
 * Signature: uint8_t __thiscall ~TextEmitterFont(TextEmitterFont * self)
 * Class: TextEmitterFont
 * Calls: `BaseResource__operator_delete`
 * Called by: `TextEmitterFont__TextEmitterFont`
 */
/* TextEmitterFont__TextEmitterFont__00584f60() */

void __thiscall TextEmitterFont__TextEmitterFont__00584f60(TextEmitterFont *self)

{
  void *in_RSI;

  TextEmitterFont__dtor(self);
  BaseResource__operator_delete((BaseResource *)self, in_RSI);
  return;
}

/* ======================================================================
 * TextEmitterFont__TextEmitterFont__00584f80  (Ghidra `TextEmitterFont` @ 00584f80)
 * Signature: uint8_t __thiscall TextEmitterFont(TextEmitterFont * self, char * arg1)
 * Class: TextEmitterFont
 * Calls: `CreateTextEmitterFontResources`, `DestroyTextEmitterFontResources`, `File__File`, `File__File__005b7a70`, `File__Read`, `TResourceCreator__AddResourceCreationFunction`, `TResourceCreator__AddResourceDestroyFunction`
 * Called by: `CreateUIResources`, `FontEmitter__FontEmitter__005861d0`
 */
/* TextEmitterFont__TextEmitterFont__00584f80(char const*) */

void __thiscall TextEmitterFont__TextEmitterFont__00584f80(TextEmitterFont *self, char *arg1)

{
  long lVar1;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  char *local_88;
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
  File local_48[4];
  uint local_44;

  *(uint32_t *)(self + 8) = 1;
  *(uint8_t ***)self = &PTR__TextEmitterFont_005dc0b0;
  *(uint8_t **)(self + 0x50) = &DAT_008184c8 /* R:0.00016803004837129265f */;
  *(uint64_t *)(self + 0x58) = 0;
  local_78 = 2;
  local_70 = 0;
  local_68 = 0;
  local_64 = 1;
  local_60 = 1;
  local_58 = 0;
  local_54 = 0;
  local_50 = &DAT_005c04cf /* R:7.374579797039071e-39f */;
  local_80 = &DAT_005c328c /* R:u32=1811964530 */;
  local_5c = 1;
  local_88 = arg1;
  /* try { // try from 00585010 to 00585014 has its CatchHandler @ 005850fc */
  File__File(local_48, (tagFileCreation *)&local_88);
  /* try { // try from 00585019 to 005850e7 has its CatchHandler @ 0058511d */
  pvVar2 = operator_new__((ulong)local_44);
  *(void **)(self + 0x40) = pvVar2;
  File__Read(local_48, pvVar2, local_44);
  lVar1 = *(long *)(self + 0x40);
  *(long *)(self + 0x10) = lVar1 + 5;
  iVar4 = *(int *)(lVar1 + 5);
  piVar5 = (int *)((ulong)(iVar4 + 10) + lVar1);
  *(int **)(self + 0x18) = piVar5;
  uVar3 = iVar4 + 0xf + *piVar5;
  piVar5 = (int *)((ulong)uVar3 + lVar1);
  *(int **)(self + 0x20) = piVar5;
  uVar3 = uVar3 + 5 + *piVar5;
  piVar5 = (int *)((ulong)uVar3 + lVar1);
  *(int **)(self + 0x28) = piVar5;
  iVar4 = uVar3 + *piVar5;
  *(ulong *)(self + 0x30) = lVar1 + (ulong)(iVar4 + 5);
  *(uint *)(self + 0x38) = (uint)(iVar4 + 6U < local_44);
  *(short *)(self + 0x48) = (short)((ulong)(long)*piVar5 / 0x14);
  std__string_assign((char *)(self + 0x50), 0x5dc004);
  std__string_assign((string *)(self + 0x50));
  CreateTextEmitterFontResources(self);
  TResourceCreator__AddResourceCreationFunction((TResourceCreator *)ResourceCreator,
                                                CreateTextEmitterFontResources, self);
  TResourceCreator__AddResourceDestroyFunction((TResourceCreator *)ResourceCreator,
                                               DestroyTextEmitterFontResources, self);
  /* try { // try from 005850ed to 005850f1 has its CatchHandler @ 005850fc */
  File__File__005b7a70(local_48);
  return;
}

/* ======================================================================
 * TextEmitterFont__GetKerning  (Ghidra `GetKerning` @ 00585140)
 * Signature: uint8_t __thiscall GetKerning(TextEmitterFont * self, wchar_t arg1, wchar_t arg2)
 * Class: TextEmitterFont
 * Calls: (none)
 * Called by: (none)
 */
/* TextEmitterFont__GetKerning(wchar_t, wchar_t) */

ushort __thiscall TextEmitterFont__GetKerning(TextEmitterFont *self, wchar_t arg1, wchar_t arg2)

{
  ushort *puVar1;
  ushort *puVar2;
  int iVar3;

  if (*(int *)(self + 0x38) == 1) {
    puVar1 = *(ushort **)(self + 0x30);
    if (*puVar1 / 6 != 0) {
      iVar3 = 0;
      puVar2 = puVar1;
      while ((arg1 != (uint)puVar2[2] || (arg2 != (uint)puVar2[3]))) {
        iVar3 = iVar3 + 1;
        puVar2 = puVar2 + 3;
        if (*puVar1 / 6 <= (ushort)iVar3) {
          return 0;
        }
      }
      return puVar1[(long)iVar3 * 3 + 4];
    }
  }
  return 0;
}

/* ======================================================================
 * TextEmitterFont__GetCharInfo  (Ghidra `GetCharInfo` @ 005851b0)
 * Signature: uint8_t __thiscall GetCharInfo(TextEmitterFont * self, wchar_t arg1)
 * Class: TextEmitterFont
 * Calls: (none)
 * Called by: `UILabel__getElementArea`
 */
/* TextEmitterFont__GetCharInfo(wchar_t) */

long __thiscall TextEmitterFont__GetCharInfo(TextEmitterFont *self, wchar_t arg1)

{
  wchar_t wVar1;
  long lVar2;
  int iVar3;
  wchar_t *pwVar4;
  int iVar5;

  lVar2 = *(long *)(self + 0x28);
  if (*(ushort *)(self + 0x48) != 0) {
    if (*(wchar_t *)(lVar2 + 4) == arg1) {
      iVar5 = 0;
    } else {
      pwVar4 = (wchar_t *)(lVar2 + 0x18);
      iVar3 = 1;
      do {
        iVar5 = iVar3;
        if (iVar5 == (*(ushort *)(self + 0x48) - 1 & 0xffff) + 1)
          goto LAB_005851f5;
        wVar1 = *pwVar4;
        pwVar4 = pwVar4 + 5;
        iVar3 = iVar5 + 1;
      } while (wVar1 != arg1);
    }
    return lVar2 + 4 + (long)iVar5 * 0x14;
  }
LAB_005851f5:
  return lVar2 + 4;
}
