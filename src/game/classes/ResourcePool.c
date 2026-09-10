/* src/game/classes/ResourcePool.c — 7 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "ResourcePool.h"

/* ======================================================================
 * ResourcePool__ResourcePool  (Ghidra `ResourcePool` @ 0057c490)
 * Signature: uint8_t __thiscall ResourcePool(ResourcePool * self)
 * Class: ResourcePool
 * Calls: `CriticalSection__CriticalSection`, `malloc`, `memset`
 * Called by: `TEngine__TEngine`
 */
/* ResourcePool__ResourcePool() */

void __thiscall ResourcePool__ResourcePool(ResourcePool *self)

{
  uint64_t *puVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  uint64_t *puVar6;
  bool bVar7;
  byte bVar8;

  bVar8 = 0;
  CriticalSection__CriticalSection((CriticalSection *)self);
  /* try { // try from 0057c4a3 to 0057c4a7 has its CatchHandler @ 0057c634 */
  CriticalSection__CriticalSection((CriticalSection *)(self + 0x28));
  *(uint16_t *)(self + 0x52) = 0;
  *(uint16_t *)(self + 0x50) = 0;
  *(uint16_t *)(self + 0x5c) = 1;
  *(uint64_t *)(self + 0x60) = 0;
  *(uint64_t *)(self + 0x68) = 0;
  *(uint32_t *)(self + 0x70) = 0;
  self[0x54] = (ResourcePool)0x4;
  *(uint32_t *)(self + 0x58) = 1;
  puVar1 = malloc(0x3534);
  puVar6 = (uint64_t *)0x0;
  if (puVar1 != (uint64_t *)0x0) {
    puVar6 = puVar1 + 2;
    *puVar1 = 0x3520;
    puVar1[1] = puVar1;
  }
  *(uint64_t **)(self + 0x60) = puVar6;
  memset(puVar6, 0, 0x3520);
  uVar5 = (ulong)(byte)self[0x54];
  *(uint16_t *)(self + 0x50) = 0;
  *(uint16_t *)(self + 0x52) = 100;
  pvVar2 = malloc(uVar5 + 0xd8);
  puVar6 = (uint64_t *)0x0;
  if (pvVar2 != (void *)0x0) {
    puVar6 = (uint64_t *)((long)pvVar2 + 0x10U + (uVar5 - ((long)pvVar2 + 0x10U) % uVar5) % uVar5);
    puVar6[-2] = 200;
    puVar6[-1] = pvVar2;
  }
  bVar7 = ((ulong)puVar6 & 1) != 0;
  *(uint64_t **)(self + 0x68) = puVar6;
  uVar5 = 200;
  if (bVar7) {
    *(uint8_t *)puVar6 = 0;
    uVar5 = 199;
    puVar6 = (uint64_t *)((long)puVar6 + 1);
  }
  if (((ulong)puVar6 & 2) != 0) {
    *(uint16_t *)puVar6 = 0;
    uVar5 = (ulong)((int)uVar5 - 2);
    puVar6 = (uint64_t *)((long)puVar6 + 2);
  }
  if (((ulong)puVar6 & 4) != 0) {
    *(uint32_t *)puVar6 = 0;
    uVar5 = (ulong)((int)uVar5 - 4);
    puVar6 = (uint64_t *)((long)puVar6 + 4);
  }
  for (uVar4 = uVar5 >> 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar6 = 0;
    puVar6 = puVar6 + (ulong)bVar8 * -2 + 1;
  }
  if ((uVar5 & 4) != 0) {
    *(uint32_t *)puVar6 = 0;
    puVar6 = (uint64_t *)((long)puVar6 + 4);
  }
  if ((uVar5 & 2) != 0) {
    *(uint16_t *)puVar6 = 0;
    puVar6 = (uint64_t *)((long)puVar6 + 2);
  }
  if (bVar7) {
    *(uint8_t *)puVar6 = 0;
  }
  lVar3 = 0;
  do {
    *(uint16_t *)(*(long *)(self + 0x68) + lVar3) = 0xffff;
    lVar3 = lVar3 + 2;
  } while (lVar3 != 200);
  *(uint32_t *)(self + 0x70) = 0xa110ca7e;
  *(uint16_t *)(self + 0x5c) = 0x32;
  Resources = self;
  return;
}

/* ======================================================================
 * ResourcePool__FindResource  (Ghidra `FindResource` @ 0057c650)
 * Signature: uint8_t __thiscall FindResource(ResourcePool * self, char * arg1)
 * Class: ResourcePool
 * Calls: `AutoLockSection__AutoLockSection`, `AutoLockSection__AutoLockSection__005b59d0`, `strcmp`
 * Called by: `CreateShader`, `Create__005956a0`, `Create__00595df0`, `Create__005a0a60`, `Create__005a67f0`
 */
/* ResourcePool__FindResource(char const*) */

uint64_t __thiscall ResourcePool__FindResource(ResourcePool *self, char *arg1)

{
  ushort uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  uint64_t uVar5;
  AutoLockSection aAStack_48[24];

  AutoLockSection__AutoLockSection(aAStack_48, (CriticalSection *)self);
  uVar1 = *(ushort *)(self + 0x50);
  if (uVar1 != 0) {
    lVar2 = *(long *)(self + 0x60);
    lVar4 = 0;
    do {
      iVar3 = strcmp((char *)(lVar2 + lVar4), arg1);
      if (iVar3 == 0) {
        /* try { // try from 0057c6c2 to 0057c6c4 has its CatchHandler @ 0057c6f4 */
        (**(code **)(**(long **)((char *)(lVar2 + lVar4) + 0x80) + 0x10))();
        uVar5 = *(uint64_t *)(*(long *)(self + 0x60) + 0x80 + lVar4);
        goto LAB_0057c6da;
      }
      lVar4 = lVar4 + 0x88;
    } while (lVar4 != ((ulong)(uVar1 - 1 & 0xffff) + 1) * 0x88);
  }
  uVar5 = 0;
LAB_0057c6da:
  AutoLockSection__AutoLockSection__005b59d0(aAStack_48);
  return uVar5;
}

/* ======================================================================
 * ResourcePool__AddResource  (Ghidra `AddResource` @ 0057c710)
 * Signature: uint8_t __thiscall AddResource(ResourcePool * self, BaseResource * arg1, char * arg2)
 * Class: ResourcePool
 * Calls: `AutoLockSection__AutoLockSection`, `AutoLockSection__AutoLockSection__005b59d0`, `free`, `malloc`, `memcpy`
 * Called by: (none)
 */
/* ResourcePool__AddResource(BaseResource*, char const*) */

void __thiscall ResourcePool__AddResource(ResourcePool *self, BaseResource *arg1, char *arg2)

{
  void *pvVar1;
  long lVar2;
  ushort uVar3;
  void *pvVar4;
  char *pcVar5;
  void *pvVar6;
  ulong uVar7;
  ushort uVar8;
  long lVar9;
  int iVar10;
  uint uVar11;
  ulong uVar12;
  ushort *puVar13;
  uint64_t *puVar14;
  ResourcePool *pRVar15;
  bool bVar16;
  byte bVar17;
  AutoLockSection local_48[24];

  bVar17 = 0;
  pRVar15 = self + 0x28;
  AutoLockSection__AutoLockSection(local_48, (CriticalSection *)self);
  if (*(int *)(self + 0x70) == -0x5eef3582) {
    uVar3 = *(ushort *)(self + 0x50);
    if (*(ushort *)(self + 0x52) <= uVar3) {
      uVar3 = *(ushort *)(self + 0x52) + *(short *)(self + 0x5c);
      uVar7 = (ulong)(byte)self[0x54];
      pvVar4 = (void *)0x0;
      pvVar1 = *(void **)(self + 0x60);
      *(ushort *)(self + 0x52) = uVar3;
      uVar12 = (ulong)uVar3 * 0x88;
      pvVar6 = malloc(uVar7 + 0x10 + uVar12);
      if (pvVar6 != (void *)0x0) {
        pvVar4 = (void *)((long)pvVar6 + 0x10U + (uVar7 - ((long)pvVar6 + 0x10U) % uVar7) % uVar7);
        *(ulong *)((long)pvVar4 + -0x10) = uVar12;
        *(void **)((long)pvVar4 + -8) = pvVar6;
        if (pvVar1 != (void *)0x0) {
          uVar7 = *(ulong *)((long)pvVar1 + -0x10);
          if (uVar12 <= *(ulong *)((long)pvVar1 + -0x10)) {
            uVar7 = uVar12;
          }
          memcpy(pvVar4, pvVar1, uVar7);
          free(*(void **)((long)pvVar1 + -8));
        }
      }
      pvVar1 = *(void **)(self + 0x68);
      *(void **)(self + 0x60) = pvVar4;
      if (pvVar1 != (void *)0x0) {
        uVar8 = *(ushort *)(self + 0x52);
        uVar7 = (ulong)(byte)self[0x54];
        pvVar4 = (void *)0x0;
        uVar12 = (ulong)uVar8 * 2;
        pvVar6 = malloc(uVar7 + 0x10 + uVar12);
        if (pvVar6 != (void *)0x0) {
          pvVar4 =
              (void *)((long)pvVar6 + 0x10U + (uVar7 - ((long)pvVar6 + 0x10U) % uVar7) % uVar7);
          *(ulong *)((long)pvVar4 + -0x10) = uVar12;
          *(void **)((long)pvVar4 + -8) = pvVar6;
          uVar7 = *(ulong *)((long)pvVar1 + -0x10);
          if (uVar12 <= *(ulong *)((long)pvVar1 + -0x10)) {
            uVar7 = uVar12;
          }
          memcpy(pvVar4, pvVar1, uVar7);
          free(*(void **)((long)pvVar1 + -8));
          uVar8 = *(ushort *)(self + 0x52);
        }
        uVar3 = *(ushort *)(self + 0x50);
        *(void **)(self + 0x68) = pvVar4;
        if (uVar8 <= uVar3)
          goto LAB_0057c7f7;
        while (true) {
          uVar12 = (ulong)uVar3;
          uVar3 = uVar3 + 1;
          *(uint16_t *)((long)pvVar4 + uVar12 * 2) = 0xffff;
          if (uVar8 <= uVar3)
            break;
          pvVar4 = *(void **)(self + 0x68);
        }
      }
      iVar10 = *(int *)(self + 0x58);
      uVar3 = *(ushort *)(self + 0x50);
      goto joined_r0x0057cace;
    }
  } else {
    uVar12 = (ulong)(byte)self[0x54];
    *(uint32_t *)(self + 0x58) = 0;
    pvVar4 = malloc(uVar12 + 0x2b8);
    puVar14 = (uint64_t *)0x0;
    if (pvVar4 != (void *)0x0) {
      puVar14 =
          (uint64_t *)((long)pvVar4 + 0x10U + (uVar12 - ((long)pvVar4 + 0x10U) % uVar12) % uVar12);
      puVar14[-2] = 0x2a8;
      puVar14[-1] = pvVar4;
    }
    bVar16 = ((ulong)puVar14 & 1) != 0;
    *(uint64_t **)(self + 0x60) = puVar14;
    uVar12 = 0x2a8;
    if (bVar16) {
      *(uint8_t *)puVar14 = 0;
      uVar12 = 0x2a7;
      puVar14 = (uint64_t *)((long)puVar14 + 1);
    }
    if (((ulong)puVar14 & 2) != 0) {
      *(uint16_t *)puVar14 = 0;
      uVar12 = (ulong)((int)uVar12 - 2);
      puVar14 = (uint64_t *)((long)puVar14 + 2);
    }
    if (((ulong)puVar14 & 4) != 0) {
      *(uint32_t *)puVar14 = 0;
      uVar12 = (ulong)((int)uVar12 - 4);
      puVar14 = (uint64_t *)((long)puVar14 + 4);
    }
    for (uVar7 = uVar12 >> 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar14 = 0;
      puVar14 = puVar14 + (ulong)bVar17 * -2 + 1;
    }
    if ((uVar12 & 4) != 0) {
      *(uint32_t *)puVar14 = 0;
      puVar14 = (uint64_t *)((long)puVar14 + 4);
    }
    if ((uVar12 & 2) != 0) {
      *(uint16_t *)puVar14 = 0;
      puVar14 = (uint64_t *)((long)puVar14 + 2);
    }
    if (bVar16) {
      *(uint8_t *)puVar14 = 0;
    }
    *(uint16_t *)(self + 0x50) = 0;
    *(uint16_t *)(self + 0x52) = 5;
    uVar3 = 0;
    *(uint32_t *)(self + 0x70) = 0xa110ca7e;
    *(uint16_t *)(self + 0x5c) = 5;
  }
LAB_0057c7f7:
  iVar10 = *(int *)(self + 0x58);
joined_r0x0057cace:
  if (iVar10 == 1) {
    lVar9 = 0x1fffe;
    if (*(ushort *)(self + 0x52) != 0) {
      puVar13 = *(ushort **)(self + 0x68);
      if (*puVar13 == 0xffff) {
        lVar9 = 0;
      } else {
        lVar2 = 2;
        do {
          lVar9 = lVar2;
          puVar13 = puVar13 + 1;
          if (lVar9 == (ulong)(*(ushort *)(self + 0x52) - 1 & 0xffff) * 2 + 2) {
            lVar9 = 0x1fffe;
            goto LAB_0057c809;
          }
          lVar2 = lVar9 + 2;
        } while (*puVar13 != 0xffff);
      }
      *puVar13 = uVar3;
      uVar3 = *(ushort *)(self + 0x50);
    }
  } else {
    lVar9 = 0x1fffe;
    pRVar15 = (ResourcePool *)0x0;
  }
LAB_0057c809:
  uVar12 = 0x88;
  iVar10 = 0x88;
  *(ushort *)(self + 0x50) = uVar3 + 1;
  puVar14 = (uint64_t *)(((ulong)(ushort)(uVar3 + 1) - 1) * 0x88 + *(long *)(self + 0x60));
  bVar16 = ((ulong)puVar14 & 1) != 0;
  if (bVar16) {
    *(uint8_t *)puVar14 = 0;
    puVar14 = (uint64_t *)((long)puVar14 + 1);
    uVar12 = 0x87;
    iVar10 = 0x87;
  }
  if (((ulong)puVar14 & 2) == 0) {
    uVar11 = (uint)uVar12;
  } else {
    *(uint16_t *)puVar14 = 0;
    puVar14 = (uint64_t *)((long)puVar14 + 2);
    uVar11 = iVar10 - 2;
    uVar12 = (ulong)uVar11;
  }
  if (((ulong)puVar14 & 4) != 0) {
    *(uint32_t *)puVar14 = 0;
    uVar12 = (ulong)(uVar11 - 4);
    puVar14 = (uint64_t *)((long)puVar14 + 4);
  }
  for (uVar7 = uVar12 >> 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *puVar14 = 0;
    puVar14 = puVar14 + (ulong)bVar17 * -2 + 1;
  }
  if ((uVar12 & 4) != 0) {
    *(uint32_t *)puVar14 = 0;
    puVar14 = (uint64_t *)((long)puVar14 + 4);
  }
  if ((uVar12 & 2) != 0) {
    *(uint16_t *)puVar14 = 0;
    puVar14 = (uint64_t *)((long)puVar14 + 2);
  }
  if (bVar16) {
    *(uint8_t *)puVar14 = 0;
  }
  *(BaseResource **)((ulong) * (ushort *)(*(long *)(pRVar15 + 0x40) + lVar9) * 0x88 +
                     *(long *)(pRVar15 + 0x38) + 0x80) = arg1;
  pcVar5 = (char *)((ulong) * (ushort *)(*(long *)(pRVar15 + 0x40) + lVar9) * 0x88 +
                    *(long *)(pRVar15 + 0x38));
  if (arg2 == (char *)0x0) {
    *pcVar5 = '\0';
  } else if (arg2 != pcVar5) {
    *(uint64_t *)pcVar5 = *(uint64_t *)arg2;
    *(uint64_t *)(pcVar5 + 8) = *(uint64_t *)(arg2 + 8);
    *(uint64_t *)(pcVar5 + 0x10) = *(uint64_t *)(arg2 + 0x10);
    *(uint64_t *)(pcVar5 + 0x18) = *(uint64_t *)(arg2 + 0x18);
    *(uint64_t *)(pcVar5 + 0x20) = *(uint64_t *)(arg2 + 0x20);
    *(uint64_t *)(pcVar5 + 0x28) = *(uint64_t *)(arg2 + 0x28);
    *(uint64_t *)(pcVar5 + 0x30) = *(uint64_t *)(arg2 + 0x30);
    *(uint64_t *)(pcVar5 + 0x38) = *(uint64_t *)(arg2 + 0x38);
    *(uint64_t *)(pcVar5 + 0x40) = *(uint64_t *)(arg2 + 0x40);
    *(uint64_t *)(pcVar5 + 0x48) = *(uint64_t *)(arg2 + 0x48);
    *(uint64_t *)(pcVar5 + 0x50) = *(uint64_t *)(arg2 + 0x50);
    *(uint64_t *)(pcVar5 + 0x58) = *(uint64_t *)(arg2 + 0x58);
    *(uint64_t *)(pcVar5 + 0x60) = *(uint64_t *)(arg2 + 0x60);
    *(uint64_t *)(pcVar5 + 0x68) = *(uint64_t *)(arg2 + 0x68);
    *(uint64_t *)(pcVar5 + 0x70) = *(uint64_t *)(arg2 + 0x70);
    *(uint64_t *)(pcVar5 + 0x78) = *(uint64_t *)(arg2 + 0x78);
  }
  AutoLockSection__AutoLockSection__005b59d0(local_48);
  return;
}

/* ======================================================================
 * ResourcePool__RemoveResource  (Ghidra `RemoveResource` @ 0057cc10)
 * Signature: uint8_t __thiscall RemoveResource(ResourcePool * self, BaseResource * arg1)
 * Class: ResourcePool
 * Calls: `AutoLockSection__AutoLockSection`, `AutoLockSection__AutoLockSection__005b59d0`
 * Called by: (none)
 */
/* ResourcePool__RemoveResource(BaseResource*) */

void __thiscall ResourcePool__RemoveResource(ResourcePool *self, BaseResource *arg1)

{
  long *plVar1;
  ushort uVar2;
  uint64_t *puVar3;
  ushort uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  ulong uVar10;
  ulong uVar11;
  ushort uVar12;
  byte bVar13;
  AutoLockSection aAStack_28[24];

  bVar13 = 0;
  AutoLockSection__AutoLockSection(aAStack_28, (CriticalSection *)self);
  uVar12 = *(ushort *)(self + 0x50);
  if (uVar12 == 0) {
  LAB_0057cc69:
    AutoLockSection__AutoLockSection__005b59d0(aAStack_28);
    return;
  }
  puVar9 = *(uint64_t **)(self + 0x60);
  uVar4 = 0;
  puVar3 = puVar9;
  if ((BaseResource *)puVar9[0x10] == arg1) {
    uVar4 = 0;
    puVar8 = puVar9;
  } else {
    do {
      puVar8 = puVar3 + 0x11;
      uVar4 = uVar4 + 1;
      if (uVar4 == uVar12)
        goto LAB_0057cc69;
      plVar1 = puVar3 + 0x21;
      puVar3 = puVar8;
    } while ((BaseResource *)*plVar1 != arg1);
  }
  uVar12 = uVar12 - 1;
  if (*(int *)(self + 0x58) == 1) {
    lVar7 = *(long *)(self + 0x68);
    if (*(ushort *)(self + 0x52) == 0)
      goto LAB_0057cc8e;
    uVar11 = 0xffffffff;
    uVar10 = 0xffffffff;
    uVar6 = 0;
    do {
      uVar2 = *(ushort *)(lVar7 + uVar6 * 2);
      if (uVar2 == uVar4) {
        uVar11 = uVar6 & 0xffffffff;
      }
      if (uVar12 == uVar2) {
        uVar10 = uVar6 & 0xffffffff;
      }
    } while ((uVar6 != (*(ushort *)(self + 0x52) - 1 & 0xffff)) &&
             ((uVar6 = uVar6 + 1, (short)uVar10 == -1 || ((short)uVar11 == -1))));
    if ((short)uVar11 != (short)uVar10) {
      puVar9 = puVar9 + (ulong)uVar12 * 0x11;
      for (lVar7 = 0x11; lVar7 != 0; lVar7 = lVar7 + -1) {
        *puVar8 = *puVar9;
        puVar9 = puVar9 + (ulong)bVar13 * -2 + 1;
        puVar8 = puVar8 + (ulong)bVar13 * -2 + 1;
      }
      if (*(int *)(self + 0x58) == 1) {
        *(uint16_t *)(*(long *)(self + 0x68) + (uVar11 & 0xffff) * 2) = 0xffff;
        *(ushort *)(*(long *)(self + 0x68) + (uVar10 & 0xffff) * 2) = uVar4;
      }
      goto LAB_0057cc9a;
    }
    lVar5 = (uVar11 & 0xffff) * 2;
  } else {
    lVar7 = *(long *)(self + 0x68);
  LAB_0057cc8e:
    lVar5 = 0x1fffe;
  }
  *(uint16_t *)(lVar7 + lVar5) = 0xffff;
LAB_0057cc9a:
  *(ushort *)(self + 0x50) = uVar12;
  AutoLockSection__AutoLockSection__005b59d0(aAStack_28);
  return;
}

/* ======================================================================
 * ResourcePool__SetCacheName  (Ghidra `SetCacheName` @ 0057cd60)
 * Signature: uint8_t __thiscall SetCacheName(ResourcePool * self, BaseResource * arg1, char * arg2)
 * Class: ResourcePool
 * Calls: `AutoLockSection__AutoLockSection`, `AutoLockSection__AutoLockSection__005b59d0`
 * Called by: `CreateShader`, `Create__005956a0`, `Create__00595df0`, `Create__005a0a60`, `Create__005a67f0`
 */
/* ResourcePool__SetCacheName(BaseResource const*, char const*) */

uint64_t __thiscall ResourcePool__SetCacheName(ResourcePool *self, BaseResource *arg1, char *arg2)

{
  char *pcVar1;
  long lVar2;
  char *pcVar3;
  uint64_t uVar4;
  AutoLockSection aAStack_38[24];

  uVar4 = 0;
  AutoLockSection__AutoLockSection(aAStack_38, (CriticalSection *)self);
  if (*(ushort *)(self + 0x50) != 0) {
    pcVar1 = *(char **)(self + 0x60);
    pcVar3 = pcVar1;
    if (*(BaseResource **)(pcVar1 + 0x80) != arg1) {
      lVar2 = 0x88;
      do {
        if (lVar2 == ((ulong)(*(ushort *)(self + 0x50) - 1 & 0xffff) + 1) * 0x88) {
          uVar4 = 0;
          goto LAB_0057cdd3;
        }
        pcVar3 = pcVar1 + lVar2;
        lVar2 = lVar2 + 0x88;
      } while (*(BaseResource **)(pcVar3 + 0x80) != arg1);
    }
    uVar4 = 1;
    if (pcVar3 != arg2) {
      *(uint64_t *)pcVar3 = *(uint64_t *)arg2;
      *(uint64_t *)(pcVar3 + 8) = *(uint64_t *)(arg2 + 8);
      *(uint64_t *)(pcVar3 + 0x10) = *(uint64_t *)(arg2 + 0x10);
      *(uint64_t *)(pcVar3 + 0x18) = *(uint64_t *)(arg2 + 0x18);
      *(uint64_t *)(pcVar3 + 0x20) = *(uint64_t *)(arg2 + 0x20);
      *(uint64_t *)(pcVar3 + 0x28) = *(uint64_t *)(arg2 + 0x28);
      *(uint64_t *)(pcVar3 + 0x30) = *(uint64_t *)(arg2 + 0x30);
      *(uint64_t *)(pcVar3 + 0x38) = *(uint64_t *)(arg2 + 0x38);
      *(uint64_t *)(pcVar3 + 0x40) = *(uint64_t *)(arg2 + 0x40);
      *(uint64_t *)(pcVar3 + 0x48) = *(uint64_t *)(arg2 + 0x48);
      *(uint64_t *)(pcVar3 + 0x50) = *(uint64_t *)(arg2 + 0x50);
      *(uint64_t *)(pcVar3 + 0x58) = *(uint64_t *)(arg2 + 0x58);
      *(uint64_t *)(pcVar3 + 0x60) = *(uint64_t *)(arg2 + 0x60);
      *(uint64_t *)(pcVar3 + 0x68) = *(uint64_t *)(arg2 + 0x68);
      *(uint64_t *)(pcVar3 + 0x70) = *(uint64_t *)(arg2 + 0x70);
      *(uint64_t *)(pcVar3 + 0x78) = *(uint64_t *)(arg2 + 0x78);
    }
  }
LAB_0057cdd3:
  AutoLockSection__AutoLockSection__005b59d0(aAStack_38);
  return uVar4;
}

/* ======================================================================
 * ResourcePool__ReleaseAll  (Ghidra `ReleaseAll` @ 0057ce90)
 * Signature: uint8_t __thiscall ReleaseAll(ResourcePool * self)
 * Class: ResourcePool
 * Calls: `AutoLockSection__AutoLockSection`, `AutoLockSection__AutoLockSection__005b59d0`, `Loader__WaitAll`
 * Called by: `TGraphics__ResetDevice`
 */
/* ResourcePool__ReleaseAll() */

void __thiscall ResourcePool__ReleaseAll(ResourcePool *self)

{
  uint64_t *puVar1;
  ushort uVar2;
  long *plVar3;
  uint64_t *puVar4;
  CriticalSection *pCVar5;
  ushort uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  uint64_t *puVar11;
  ushort uVar12;
  uint64_t *puVar13;
  ulong uVar14;
  ulong uVar15;
  ushort uVar16;
  byte bVar17;
  AutoLockSection aAStack_48[24];

  bVar17 = 0;
  Loader__WaitAll();
  uVar16 = *(ushort *)(self + 0x50);
  do {
    if (uVar16 == 0) {
      *(uint16_t *)(self + 0x50) = 0;
      if ((*(int *)(self + 0x58) == 1) && (uVar16 = *(ushort *)(self + 0x52), uVar16 != 0)) {
        lVar8 = 0;
        do {
          *(uint16_t *)(*(long *)(self + 0x68) + lVar8) = 0xffff;
          lVar8 = lVar8 + 2;
        } while (lVar8 != (ulong)(uVar16 - 1 & 0xffff) * 2 + 2);
        return;
      }
      return;
    }
    uVar12 = 0;
    do {
      plVar3 = *(long **)((ulong)uVar12 * 0x88 + *(long *)(self + 0x60) + 0x80);
      iVar7 = (**(code **)(*plVar3 + 0x18))(plVar3);
      pCVar5 = Resources;
      if (iVar7 < 1) {
        AutoLockSection__AutoLockSection(aAStack_48, Resources);
        uVar16 = *(ushort *)(pCVar5 + 0x50);
        if (uVar16 != 0) {
          puVar13 = *(uint64_t **)(pCVar5 + 0x60);
          uVar6 = 0;
          puVar4 = puVar13;
          if (plVar3 == (long *)puVar13[0x10]) {
            uVar6 = 0;
            puVar11 = puVar13;
          } else {
            do {
              puVar11 = puVar4 + 0x11;
              uVar6 = uVar6 + 1;
              if (uVar6 == uVar16)
                goto LAB_0057cf69;
              puVar1 = puVar4 + 0x21;
              puVar4 = puVar11;
            } while (plVar3 != (long *)*puVar1);
          }
          uVar16 = uVar16 - 1;
          if (*(int *)(pCVar5 + 0x58) == 1) {
            lVar8 = *(long *)(pCVar5 + 0x68);
            if (*(ushort *)(pCVar5 + 0x52) == 0)
              goto LAB_0057cfdf;
            uVar15 = 0xffffffff;
            uVar14 = 0xffffffff;
            uVar10 = 0;
            do {
              uVar2 = *(ushort *)(lVar8 + uVar10 * 2);
              if (uVar2 == uVar6) {
                uVar15 = uVar10 & 0xffffffff;
              }
              if (uVar16 == uVar2) {
                uVar14 = uVar10 & 0xffffffff;
              }
            } while ((uVar10 != (*(ushort *)(pCVar5 + 0x52) - 1 & 0xffff)) &&
                     ((uVar10 = uVar10 + 1, (short)uVar14 == -1 || ((short)uVar15 == -1))));
            if ((short)uVar15 == (short)uVar14) {
              lVar9 = (uVar15 & 0xffff) * 2;
              goto LAB_0057cfe4;
            }
            puVar13 = puVar13 + (ulong)uVar16 * 0x11;
            for (lVar8 = 0x11; lVar8 != 0; lVar8 = lVar8 + -1) {
              *puVar11 = *puVar13;
              puVar13 = puVar13 + (ulong)bVar17 * -2 + 1;
              puVar11 = puVar11 + (ulong)bVar17 * -2 + 1;
            }
            if (*(int *)(pCVar5 + 0x58) == 1) {
              *(uint16_t *)(*(long *)(pCVar5 + 0x68) + (uVar15 & 0xffff) * 2) = 0xffff;
              *(ushort *)(*(long *)(pCVar5 + 0x68) + (uVar14 & 0xffff) * 2) = uVar6;
            }
          } else {
            lVar8 = *(long *)(pCVar5 + 0x68);
          LAB_0057cfdf:
            lVar9 = 0x1fffe;
          LAB_0057cfe4:
            *(uint16_t *)(lVar8 + lVar9) = 0xffff;
          }
          *(ushort *)(pCVar5 + 0x50) = uVar16;
        }
      LAB_0057cf69:
        AutoLockSection__AutoLockSection__005b59d0(aAStack_48);
        (**(code **)(*plVar3 + 8))(plVar3);
      }
      uVar16 = *(ushort *)(self + 0x50);
      uVar12 = uVar12 + 1;
    } while (uVar12 < uVar16);
  } while (true);
}

/* ======================================================================
 * ResourcePool__ResourcePool__0057d0b0  (Ghidra `~ResourcePool` @ 0057d0b0)
 * Signature: uint8_t __thiscall ~ResourcePool(ResourcePool * self)
 * Class: ResourcePool
 * Calls: `CriticalSection__CriticalSection__005b71d0`, `free`
 * Called by: `TEngine__TEngine`, `TEngine__TEngine__00583e20`
 */
/* ResourcePool__ResourcePool__0057d0b0() */

void __thiscall ResourcePool__ResourcePool__0057d0b0(ResourcePool *self)

{
  /* try { // try from 0057d0c1 to 0057d0c5 has its CatchHandler @ 0057d13f */
  ReleaseAll(self);
  if (*(int *)(self + 0x70) == -0x5eef3582) {
    *(uint32_t *)(self + 0x70) = 0;
    free(*(void **)(*(long *)(self + 0x60) + -8));
    if (*(int *)(self + 0x58) == 1) {
      free(*(void **)(*(long *)(self + 0x68) + -8));
    }
    *(uint32_t *)(self + 0x70) = 0;
    *(uint16_t *)(self + 0x52) = 0;
    *(uint16_t *)(self + 0x50) = 0;
    *(uint64_t *)(self + 0x60) = 0;
    *(uint64_t *)(self + 0x68) = 0;
  }
  /* try { // try from 0057d0d3 to 0057d0d7 has its CatchHandler @ 0057d171 */
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)(self + 0x28));
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
  return;
}
