/* src/game/classes/VertexStream.c — 8 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "VertexStream.h"

/* ======================================================================
 * VertexStream__VertexStream__005a6800  (Ghidra `~VertexStream` @ 005a6800)
 * Signature: uint8_t __thiscall ~VertexStream(VertexStream * self)
 * Class: VertexStream
 * Calls: `VertexStream__VertexStream__005a6810`
 * Called by: (none)
 */
/* VertexStream__VertexStream__005a6810() */

void __thiscall VertexStream__VertexStream__005a6810(VertexStream *self)

{
  *(uint8_t ***)self = &PTR__BaseResource_005dbe30;
  return;
}

/* ======================================================================
 * VertexStream__VertexStream__005a6810  (Ghidra `~VertexStream` @ 005a6810)
 * Signature: uint8_t __thiscall ~VertexStream(VertexStream * self)
 * Class: VertexStream
 * Calls: `BaseResource__operator_delete`
 * Called by: `GLOBAL_sub_I_Plane`, `VertexStream__VertexStream__005a6800`
 */
/* VertexStream__VertexStream__005a6810() */

void __thiscall VertexStream__VertexStream__005a6810(VertexStream *self)

{
  void *in_RSI;
  
  *(uint8_t ***)self = &PTR__BaseResource_005dbe30;
  BaseResource__operator_delete((BaseResource *)self,in_RSI);
  return;
}

/* ======================================================================
 * VertexStream__RemoveRef  (Ghidra `RemoveRef` @ 005a6820)
 * Signature: uint8_t __thiscall RemoveRef(VertexStream * self)
 * Class: VertexStream
 * Calls: `BaseResource__Release`, `BaseResource__RemoveRef`
 * Called by: (none)
 */
/* VertexStream__RemoveRef() */

void __thiscall VertexStream__RemoveRef(VertexStream *self)

{
  VertexStream VVar1;
  VertexStream VVar2;
  
  VVar1 = self[0xc];
  if (VVar1 != (VertexStream)0x0) {
    VVar2 = (VertexStream)0x0;
    do {
      if (*(BaseResource **)(self + (ulong)(byte)VVar2 * 8 + 0x20) != (BaseResource *)0x0) {
        BaseResource__Release(*(BaseResource **)(self + (ulong)(byte)VVar2 * 8 + 0x20),0);
        VVar1 = self[0xc];
      }
      VVar2 = (VertexStream)((char)VVar2 + 1);
    } while ((byte)VVar2 < (byte)VVar1);
  }
  if (*(BaseResource **)(self + 0xa0) != (BaseResource *)0x0) {
    BaseResource__Release(*(BaseResource **)(self + 0xa0),0);
  }
  BaseResource__RemoveRef((BaseResource *)self);
  return;
}

/* ======================================================================
 * VertexStream__AddRef  (Ghidra `AddRef` @ 005a6880)
 * Signature: uint8_t __thiscall AddRef(VertexStream * self)
 * Class: VertexStream
 * Calls: `BaseResource__AddRef`
 * Called by: (none)
 */
/* VertexStream__AddRef() */

void __thiscall VertexStream__AddRef(VertexStream *self)

{
  ulong uVar1;
  VertexStream VVar2;
  
  if (self[0xc] != (VertexStream)0x0) {
    VVar2 = (VertexStream)0x0;
    do {
      uVar1 = (ulong)(byte)VVar2;
      VVar2 = (VertexStream)((char)VVar2 + 1);
      (**(code **)(**(long **)(self + uVar1 * 8 + 0x20) + 0x10))();
    } while ((byte)VVar2 < (byte)self[0xc]);
  }
  if (*(long **)(self + 0xa0) != (long *)0x0) {
    (**(code **)(**(long **)(self + 0xa0) + 0x10))();
  }
  BaseResource__AddRef((BaseResource *)self);
  return;
}

/* ======================================================================
 * VertexStream__VertexStream__005a68d0  (Ghidra `VertexStream` @ 005a68d0)
 * Signature: uint8_t __thiscall VertexStream(VertexStream * self)
 * Class: VertexStream
 * Calls: `VertexStream__VertexStream__005a6980`
 * Called by: (none)
 */
/* VertexStream__VertexStream__005a6980() */

void __thiscall VertexStream__VertexStream__005a6980(VertexStream *self)

{
  ulong uVar1;
  int iVar2;
  uint uVar3;
  VertexStream *pVVar5;
  bool bVar6;
  ulong uVar4;
  
  pVVar5 = self + 0x20;
  *(uint32_t *)(self + 8) = 1;
  *(uint8_t ***)self = &PTR__VertexStream_005dded0;
  self[0xc] = (VertexStream)0x0;
  *(uint64_t *)(self + 0xa0) = 0;
  uVar4 = 0x80;
  iVar2 = 0x80;
  bVar6 = ((ulong)pVVar5 & 1) != 0;
  if (bVar6) {
    pVVar5 = self + 0x21;
    self[0x20] = (VertexStream)0x0;
    uVar4 = 0x7f;
    iVar2 = 0x7f;
  }
  if (((ulong)pVVar5 & 2) == 0) {
    uVar3 = (uint)uVar4;
  }
  else {
    *(uint16_t *)pVVar5 = 0;
    pVVar5 = pVVar5 + 2;
    uVar3 = iVar2 - 2;
    uVar4 = (ulong)uVar3;
  }
  if (((ulong)pVVar5 & 4) != 0) {
    *(uint32_t *)pVVar5 = 0;
    uVar4 = (ulong)(uVar3 - 4);
    pVVar5 = pVVar5 + 4;
  }
  for (uVar1 = uVar4 >> 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(uint64_t *)pVVar5 = 0;
    pVVar5 = pVVar5 + 8;
  }
  if ((uVar4 & 4) != 0) {
    *(uint32_t *)pVVar5 = 0;
    pVVar5 = pVVar5 + 4;
  }
  if ((uVar4 & 2) != 0) {
    *(uint16_t *)pVVar5 = 0;
    pVVar5 = pVVar5 + 2;
  }
  if (bVar6) {
    *pVVar5 = (VertexStream)0x0;
  }
  return;
}

/* ======================================================================
 * VertexStream__VertexStream__005a6980  (Ghidra `VertexStream` @ 005a6980)
 * Signature: uint8_t __thiscall VertexStream(VertexStream * self, uchar arg1, uint arg2, uint arg3, tagDrawType arg4, VertexBuffer * * arg5, VertexDeclaration * arg6)
 * Class: VertexStream
 * Calls: `BaseResource__Release`
 * Called by: `CreateCommanderVideoResources`, `CreateFontEmitterResources`, `CreateRibbonEmitterResources`, `CreateSMBEditorResources`, `CreateSMBPaletteResources`, `CreateSetPieceWayPointResources`, `CreateTileLevelResources`, `CreateTileLightMapResources`, `GLOBAL_sub_I_Plane`, `GScreenMargins__EnableMargins` (+8 more)
 */
/* VertexStream__VertexStream__005a6980(unsigned char, unsigned int, unsigned int, tagDrawType,
   VertexBuffer**, VertexDeclaration*) */

void __thiscall
VertexStream__VertexStream__005a6980
          (VertexStream *self,VertexStream arg1,uint32_t arg2,uint32_t arg3,
          uint32_t arg5,long arg6,BaseResource *arg7)

{
  BaseResource *pBVar1;
  BaseResource *this_00;
  VertexStream VVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  long lVar7;
  VertexStream *pVVar8;
  bool bVar9;
  VertexStream VVar10;
  ulong uVar6;
  
  *(uint32_t *)(self + 0x10) = arg2;
  *(uint32_t *)(self + 8) = 1;
  *(uint8_t ***)self = &PTR__VertexStream_005dded0;
  self[0xc] = arg1;
  uVar6 = 0x80;
  iVar4 = 0x80;
  *(uint32_t *)(self + 0x14) = arg3;
  *(uint32_t *)(self + 0x18) = arg5;
  *(uint64_t *)(self + 0xa0) = 0;
  pVVar8 = self + 0x20;
  bVar9 = ((ulong)pVVar8 & 1) != 0;
  if (bVar9) {
    pVVar8 = self + 0x21;
    self[0x20] = (VertexStream)0x0;
    uVar6 = 0x7f;
    iVar4 = 0x7f;
  }
  if (((ulong)pVVar8 & 2) == 0) {
    uVar5 = (uint)uVar6;
  }
  else {
    *(uint16_t *)pVVar8 = 0;
    pVVar8 = pVVar8 + 2;
    uVar5 = iVar4 - 2;
    uVar6 = (ulong)uVar5;
  }
  if (((ulong)pVVar8 & 4) != 0) {
    *(uint32_t *)pVVar8 = 0;
    uVar6 = (ulong)(uVar5 - 4);
    pVVar8 = pVVar8 + 4;
  }
  for (uVar3 = uVar6 >> 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(uint64_t *)pVVar8 = 0;
    pVVar8 = pVVar8 + 8;
  }
  if ((uVar6 & 4) != 0) {
    *(uint32_t *)pVVar8 = 0;
    pVVar8 = pVVar8 + 4;
  }
  if ((uVar6 & 2) != 0) {
    *(uint16_t *)pVVar8 = 0;
    pVVar8 = pVVar8 + 2;
  }
  if (bVar9) {
    *pVVar8 = (VertexStream)0x0;
  }
  if (arg1 != (VertexStream)0x0) {
    lVar7 = 0;
    do {
      pBVar1 = *(BaseResource **)(arg6 + lVar7);
      this_00 = *(BaseResource **)(self + lVar7 + 0x20);
      if (pBVar1 != this_00) {
        if (this_00 != (BaseResource *)0x0) {
                    /* try { // try from 005a6b24 to 005a6b9c has its CatchHandler @ 005a6be8 */
          BaseResource__Release(this_00,0);
        }
        *(BaseResource **)(self + lVar7 + 0x20) = pBVar1;
        if (pBVar1 != (BaseResource *)0x0) {
          (**(code **)(*(long *)pBVar1 + 0x10))(pBVar1);
        }
      }
      VVar10 = (VertexStream)(*(long *)(self + 0x20) != 0);
      self[0xc] = (VertexStream)0x0;
      VVar2 = (VertexStream)0x1;
      if ((bool)VVar10) {
        self[0xc] = (VertexStream)0x1;
        VVar2 = (VertexStream)0x2;
      }
      if (*(long *)(self + 0x28) != 0) {
        self[0xc] = VVar2;
        VVar10 = VVar2;
      }
      if (*(long *)(self + 0x30) != 0) {
        VVar10 = (VertexStream)((char)VVar10 + '\x01');
        self[0xc] = VVar10;
      }
      if (*(long *)(self + 0x38) != 0) {
        VVar10 = (VertexStream)((char)VVar10 + '\x01');
        self[0xc] = VVar10;
      }
      if (*(long *)(self + 0x40) != 0) {
        VVar10 = (VertexStream)((char)VVar10 + '\x01');
        self[0xc] = VVar10;
      }
      if (*(long *)(self + 0x48) != 0) {
        VVar10 = (VertexStream)((char)VVar10 + '\x01');
        self[0xc] = VVar10;
      }
      if (*(long *)(self + 0x50) != 0) {
        VVar10 = (VertexStream)((char)VVar10 + '\x01');
        self[0xc] = VVar10;
      }
      if (*(long *)(self + 0x58) != 0) {
        VVar10 = (VertexStream)((char)VVar10 + '\x01');
        self[0xc] = VVar10;
      }
      if (*(long *)(self + 0x60) != 0) {
        VVar10 = (VertexStream)((char)VVar10 + '\x01');
        self[0xc] = VVar10;
      }
      if (*(long *)(self + 0x68) != 0) {
        VVar10 = (VertexStream)((char)VVar10 + '\x01');
        self[0xc] = VVar10;
      }
      if (*(long *)(self + 0x70) != 0) {
        VVar10 = (VertexStream)((char)VVar10 + '\x01');
        self[0xc] = VVar10;
      }
      if (*(long *)(self + 0x78) != 0) {
        VVar10 = (VertexStream)((char)VVar10 + '\x01');
        self[0xc] = VVar10;
      }
      if (*(long *)(self + 0x80) != 0) {
        VVar10 = (VertexStream)((char)VVar10 + '\x01');
        self[0xc] = VVar10;
      }
      if (*(long *)(self + 0x88) != 0) {
        VVar10 = (VertexStream)((char)VVar10 + '\x01');
        self[0xc] = VVar10;
      }
      if (*(long *)(self + 0x90) != 0) {
        VVar10 = (VertexStream)((char)VVar10 + '\x01');
        self[0xc] = VVar10;
      }
      if (*(long *)(self + 0x98) != 0) {
        self[0xc] = (VertexStream)((char)VVar10 + '\x01');
      }
      lVar7 = lVar7 + 8;
    } while (lVar7 != (ulong)(byte)((char)arg1 - 1) * 8 + 8);
  }
  pBVar1 = *(BaseResource **)(self + 0xa0);
  if (arg7 != pBVar1) {
    if (pBVar1 != (BaseResource *)0x0) {
      BaseResource__Release(pBVar1,0);
    }
    *(BaseResource **)(self + 0xa0) = arg7;
    if (arg7 != (BaseResource *)0x0) {
      (**(code **)(*(long *)arg7 + 0x10))(arg7);
    }
  }
  return;
}

/* ======================================================================
 * VertexStream__SetVertexBuffer  (Ghidra `SetVertexBuffer` @ 005a6c00)
 * Signature: uint8_t __thiscall SetVertexBuffer(VertexStream * self, uchar arg1, VertexBuffer * arg2)
 * Class: VertexStream
 * Calls: `BaseResource__Release`
 * Called by: `Model__Replicate`, `RibbonEmitter__Update`, `SMBBloodExplosion__Update`, `SparkEmitter__Update`
 */
/* VertexStream__SetVertexBuffer(unsigned char, VertexBuffer*) */

void __thiscall
VertexStream__SetVertexBuffer(VertexStream *self,uchar arg1,VertexBuffer *arg2)

{
  BaseResource *this_00;
  
  this_00 = *(BaseResource **)(self + (ulong)arg1 * 8 + 0x20);
  if (this_00 != (BaseResource *)arg2) {
    if (this_00 != (BaseResource *)0x0) {
      BaseResource__Release(this_00,0);
    }
    *(VertexBuffer **)(self + (ulong)arg1 * 8 + 0x20) = arg2;
    if (arg2 != (VertexBuffer *)0x0) {
      (**(code **)(*(long *)arg2 + 0x10))(arg2);
    }
  }
  self[0xc] = (VertexStream)0x0;
  if (*(long *)(self + 0x20) != 0) {
    self[0xc] = (VertexStream)0x1;
  }
  if (*(long *)(self + 0x28) != 0) {
    self[0xc] = (VertexStream)((char)self[0xc] + '\x01');
  }
  if (*(long *)(self + 0x30) != 0) {
    self[0xc] = (VertexStream)((char)self[0xc] + '\x01');
  }
  if (*(long *)(self + 0x38) != 0) {
    self[0xc] = (VertexStream)((char)self[0xc] + '\x01');
  }
  if (*(long *)(self + 0x40) != 0) {
    self[0xc] = (VertexStream)((char)self[0xc] + '\x01');
  }
  if (*(long *)(self + 0x48) != 0) {
    self[0xc] = (VertexStream)((char)self[0xc] + '\x01');
  }
  if (*(long *)(self + 0x50) != 0) {
    self[0xc] = (VertexStream)((char)self[0xc] + '\x01');
  }
  if (*(long *)(self + 0x58) != 0) {
    self[0xc] = (VertexStream)((char)self[0xc] + '\x01');
  }
  if (*(long *)(self + 0x60) != 0) {
    self[0xc] = (VertexStream)((char)self[0xc] + '\x01');
  }
  if (*(long *)(self + 0x68) != 0) {
    self[0xc] = (VertexStream)((char)self[0xc] + '\x01');
  }
  if (*(long *)(self + 0x70) != 0) {
    self[0xc] = (VertexStream)((char)self[0xc] + '\x01');
  }
  if (*(long *)(self + 0x78) != 0) {
    self[0xc] = (VertexStream)((char)self[0xc] + '\x01');
  }
  if (*(long *)(self + 0x80) != 0) {
    self[0xc] = (VertexStream)((char)self[0xc] + '\x01');
  }
  if (*(long *)(self + 0x88) != 0) {
    self[0xc] = (VertexStream)((char)self[0xc] + '\x01');
  }
  if (*(long *)(self + 0x90) != 0) {
    self[0xc] = (VertexStream)((char)self[0xc] + '\x01');
  }
  if (*(long *)(self + 0x98) != 0) {
    self[0xc] = (VertexStream)((char)self[0xc] + '\x01');
  }
  return;
}

/* ======================================================================
 * VertexStream__SetVertexDeclaration  (Ghidra `SetVertexDeclaration` @ 005a6d00)
 * Signature: uint8_t __thiscall SetVertexDeclaration(VertexStream * self, VertexDeclaration * arg1)
 * Class: VertexStream
 * Calls: `BaseResource__Release`
 * Called by: `Model__Replicate`
 */
/* VertexStream__SetVertexDeclaration(VertexDeclaration*) */

void __thiscall VertexStream__SetVertexDeclaration(VertexStream *self,VertexDeclaration *arg1)

{
  BaseResource *this_00;
  
  this_00 = *(BaseResource **)(self + 0xa0);
  if (this_00 != (BaseResource *)arg1) {
    if (this_00 != (BaseResource *)0x0) {
      BaseResource__Release(this_00,0);
    }
    *(VertexDeclaration **)(self + 0xa0) = arg1;
    if (arg1 != (VertexDeclaration *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005a6d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)arg1 + 0x10))(arg1);
      return;
    }
  }
  return;
}
