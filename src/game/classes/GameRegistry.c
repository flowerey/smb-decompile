/* src/game/classes/GameRegistry.c — 5 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "GameRegistry.h"

/* ======================================================================
 * GameRegistry__GameRegistry  (Ghidra `GameRegistry` @ 005b6400)
 * Signature: uint8_t __thiscall GameRegistry(GameRegistry * self)
 * Class: GameRegistry
 * Calls: `GameRegistry__GameRegistry__005b6430`
 * Called by: (none)
 */
/* GameRegistry__GameRegistry__005b6430() */

void __thiscall GameRegistry__GameRegistry__005b6430(GameRegistry *self)

{
  *(uint64_t *)self = 0;
  *(uint64_t *)(self + 8) = 0;
  *(uint32_t *)(self + 0x10) = 0;
  *(uint32_t *)(self + 0x14) = 0xffffffff;
  *(uint32_t *)(self + 0x18) = 0;
  return;
}

/* ======================================================================
 * GameRegistry__GameRegistry__005b6430  (Ghidra `GameRegistry` @ 005b6430)
 * Signature: uint8_t __thiscall GameRegistry(GameRegistry * self, uint arg1)
 * Class: GameRegistry
 * Calls: `File__File`, `File__File__005b7a70`, `File__Read`, `File__ReadVariable`, `FormatRegFilePath`, `malloc`, `strlen`
 * Called by: `GSuperMeatBoy__Initialize__00516f60`, `GameRegistry__GameRegistry`, `TEngine__TEngine`, `UnixUserProfile__InitializeProfile`, `UserProfile__CreateUserRegistry`
 */
/* WARNING: Removing unreachable block (ram,0x005b668a) */
/* GameRegistry__GameRegistry__005b6430(unsigned int) */

void __thiscall GameRegistry__GameRegistry__005b6430(GameRegistry *self,uint arg1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  size_t sVar5;
  uint uVar6;
  long lVar7;
  uint64_t *puVar8;
  char *local_a8;
  uint8_t *local_a0;
  uint32_t local_98;
  uint64_t local_90;
  uint32_t local_88;
  uint32_t local_84;
  uint32_t local_80;
  uint32_t local_7c;
  uint32_t local_78;
  uint32_t local_74;
  uint8_t *local_70;
  File local_68 [48];
  char *local_38;
  
  *(uint *)(self + 0x14) = arg1;
  *(uint64_t *)self = 0;
  *(uint64_t *)(self + 8) = 0;
  *(uint32_t *)(self + 0x10) = 0;
  *(uint32_t *)(self + 0x18) = 0;
  local_38 = &DAT_008184c8 /* R:0.00016803004837129265f */;
                    /* try { // try from 005b646f to 005b647f has its CatchHandler @ 005b665d */
  FormatRegFilePath(arg1);
  iVar3 = File__Exists(local_38,0);
  if (iVar3 == 1) {
    local_98 = 2;
    local_90 = 0;
    local_88 = 0;
    local_84 = 1;
    local_80 = 1;
    local_7c = 0;
    local_78 = 0;
    local_74 = 0;
    local_70 = &DAT_005c04cf /* R:7.374579797039071e-39f */;
    local_a0 = &DAT_005c328c /* R:u32=1811964530 */;
    local_a8 = local_38;
                    /* try { // try from 005b6514 to 005b6518 has its CatchHandler @ 005b6639 */
    File__File(local_68,(tagFileCreation *)&local_a8);
                    /* try { // try from 005b6527 to 005b6603 has its CatchHandler @ 005b664e */
    File__ReadVariable(local_68,self + 0x10,4);
    File__ReadVariable(local_68,self + 0x18,4);
    uVar6 = *(uint *)(self + 0x18);
    pvVar4 = malloc((ulong)uVar6);
    *(void **)self = pvVar4;
    File__Read(local_68,pvVar4,uVar6);
    uVar6 = *(uint *)(self + 0x10);
    pvVar4 = malloc((ulong)uVar6 * 0x18);
    *(void **)(self + 8) = pvVar4;
    if (uVar6 != 0) {
      uVar6 = 0;
      iVar3 = 0;
      do {
        lVar7 = (ulong)uVar6 * 0x18;
        *(long *)((long)pvVar4 + (ulong)uVar6 * 0x18) = (long)iVar3 + *(long *)self;
        puVar8 = (uint64_t *)(*(long *)(self + 8) + lVar7);
        sVar5 = strlen((char *)*puVar8);
        iVar3 = iVar3 + 1 + (int)sVar5;
        File__Read(local_68,puVar8 + 1,4);
        lVar7 = lVar7 + *(long *)(self + 8);
        iVar2 = *(int *)(lVar7 + 8);
        if (iVar2 == 1) {
LAB_005b65f0:
          File__Read(local_68,(void *)(lVar7 + 0x10),4);
          if (*(uint *)(self + 0x10) <= uVar6 + 1) break;
        }
        else {
          if (iVar2 == 2) {
LAB_005b6620:
                    /* try { // try from 005b662f to 005b6633 has its CatchHandler @ 005b664e */
            File__Read(local_68,(void *)(lVar7 + 0x10),8);
          }
          else {
            if (iVar2 == 3) goto LAB_005b65f0;
            if (iVar2 == 4) goto LAB_005b6620;
          }
          if (*(uint *)(self + 0x10) <= uVar6 + 1) break;
        }
        uVar6 = uVar6 + 1;
        pvVar4 = *(void **)(self + 8);
      } while( true );
    }
                    /* try { // try from 005b6611 to 005b6615 has its CatchHandler @ 005b6639 */
    File__File__005b7a70(local_68);
  }
  if ((allocator *)(local_38 + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage) {
    LOCK();
    piVar1 = (int *)(local_38 + -8);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 < 1) {
      std__string_Rep_M_destroy((allocator *)(local_38 + -0x18));
    }
  }
  return;
}

/* ======================================================================
 * GameRegistry__GetVariable  (Ghidra `GetVariable` @ 005b66a0)
 * Signature: uint8_t __thiscall GetVariable(GameRegistry * self, char * arg1, GameRegistryEntry * * arg2)
 * Class: GameRegistry
 * Calls: `malloc`, `memcpy`, `realloc`, `strcmp`, `strlen`
 * Called by: `SMBSettingsApplyWindowChanges`, `TEngine__TEngine`, `UnixUserProfile__ReadProfileSettings`, `UnixUserProfile__WriteProfileSettings`
 */
/* GameRegistry__GetVariable(char const*, GameRegistryEntry**) */

uint64_t __thiscall
GameRegistry__GetVariable(GameRegistry *self,char *arg1,GameRegistryEntry **arg2)

{
  int iVar1;
  int iVar2;
  uint32_t extraout_var;
  size_t sVar3;
  void *pvVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  GameRegistryEntry *pGVar8;
  int iVar9;
  ulong uVar10;
  
  if (arg1 == (char *)0x0) {
    *arg2 = (GameRegistryEntry *)0x0;
    return 0;
  }
  iVar1 = *(int *)(self + 0x10);
  if (iVar1 != 0) {
    pGVar8 = *(GameRegistryEntry **)(self + 8);
    iVar9 = 0;
    do {
      iVar2 = strcmp(*(char **)pGVar8,arg1);
      if (iVar2 == 0) {
        *arg2 = pGVar8;
        return CONCAT71((int7)(CONCAT44(extraout_var,iVar2) >> 8),1);
      }
      iVar9 = iVar9 + 1;
      pGVar8 = pGVar8 + 0x18;
    } while (iVar9 != iVar1);
  }
  sVar3 = strlen(arg1);
  uVar7 = (int)sVar3 + 1;
  if (*(void **)self == (void *)0x0) {
    pvVar4 = malloc((ulong)uVar7);
    *(void **)self = pvVar4;
  }
  else {
    pvVar4 = realloc(*(void **)self,(ulong)(uVar7 + *(int *)(self + 0x18)));
    *(void **)self = pvVar4;
  }
  uVar5 = *(uint *)(self + 0x18);
  if (arg1 != (char *)((ulong)uVar5 + (long)pvVar4)) {
    memcpy((char *)((ulong)uVar5 + (long)pvVar4),arg1,(ulong)uVar7);
    uVar5 = *(uint *)(self + 0x18);
  }
  *(uint *)(self + 0x18) = uVar5 + uVar7;
  uVar7 = *(int *)(self + 0x10) + 1;
  *(uint *)(self + 0x10) = uVar7;
  if (*(void **)(self + 8) == (void *)0x0) {
    pvVar4 = malloc((ulong)uVar7 * 0x18);
    *(void **)(self + 8) = pvVar4;
  }
  else {
    pvVar4 = realloc(*(void **)(self + 8),(ulong)uVar7 * 0x18);
    uVar7 = *(uint *)(self + 0x10);
    *(void **)(self + 8) = pvVar4;
  }
  uVar5 = 0;
  if (uVar7 != 0) {
    uVar10 = 0;
    uVar6 = 0;
    do {
      uVar7 = (int)uVar6 + 1;
      *(ulong *)((long)pvVar4 + uVar6 * 0x18) = uVar10 + *(long *)self;
      pvVar4 = *(void **)(self + 8);
      sVar3 = strlen(*(char **)((long)pvVar4 + uVar6 * 0x18));
      uVar10 = (ulong)(uint)((int)uVar10 + 1 + (int)sVar3);
      uVar5 = *(uint *)(self + 0x10);
      uVar6 = (ulong)uVar7;
    } while (uVar7 < uVar5);
  }
  *(uint32_t *)((long)pvVar4 + (ulong)(uVar5 - 1) * 0x18 + 8) = 0;
  *arg2 = (GameRegistryEntry *)(*(long *)(self + 8) + (ulong)(*(int *)(self + 0x10) - 1) * 0x18);
  return 0;
}

/* ======================================================================
 * GameRegistry__Flush  (Ghidra `Flush` @ 005b6850)
 * Signature: uint8_t __thiscall Flush(GameRegistry * self)
 * Class: GameRegistry
 * Calls: `File__File`, `File__File__005b7a70`, `File__Write`, `FormatRegFilePath`
 * Called by: `SMBSettingsApplyWindowChanges`, `TEngine__TEngine`, `UnixUserProfile__WriteProfileSettings`
 */
/* WARNING: Removing unreachable block (ram,0x005b6a51) */
/* GameRegistry__Flush() */

void __thiscall GameRegistry__Flush(GameRegistry *self)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  uint8_t *local_98;
  uint8_t *local_90;
  uint32_t local_88;
  uint64_t local_80;
  uint32_t local_78;
  uint32_t local_74;
  uint32_t local_70;
  uint32_t local_6c;
  uint32_t local_68;
  uint32_t local_64;
  uint8_t *local_60;
  int local_58 [12];
  uint8_t *local_28 [2];
  
  if (((*(int *)(self + 0x14) != -1) && (*(long *)self != 0)) && (*(long *)(self + 8) != 0)) {
    local_98 = (uint8_t *)0x0;
    local_90 = (uint8_t *)0x0;
    local_88 = 2;
    local_80 = 0;
    local_78 = 0;
    local_74 = 1;
    local_70 = 1;
    local_6c = 0;
    local_68 = 0;
    local_64 = 0;
    local_60 = &DAT_005c04cf /* R:7.374579797039071e-39f */;
    local_28[0] = &DAT_008184c8 /* R:0.00016803004837129265f */;
                    /* try { // try from 005b68e5 to 005b6908 has its CatchHandler @ 005b6a28 */
    FormatRegFilePath(*(int *)(self + 0x14),local_28);
    local_90 = &DAT_005c04d3 /* R:3.984248865183858e-39f */;
    local_98 = local_28[0];
    File__File((File *)local_58,(tagFileCreation *)&local_98);
    if (local_58[0] != -1) {
                    /* try { // try from 005b6922 to 005b69bc has its CatchHandler @ 005b6a09 */
      File__Write((File *)local_58,self + 0x10,4);
      File__Write((File *)local_58,self + 0x18,4);
      File__Write((File *)local_58,*(void **)self,*(uint *)(self + 0x18));
      if (*(int *)(self + 0x10) != 0) {
        uVar3 = 0;
        do {
          while( true ) {
            File__Write((File *)local_58,(void *)(*(long *)(self + 8) + (ulong)uVar3 * 0x18 + 8),4);
            lVar4 = (ulong)uVar3 * 0x18 + *(long *)(self + 8);
            iVar2 = *(int *)(lVar4 + 8);
            if (iVar2 != 1) break;
LAB_005b69a9:
            File__Write((File *)local_58,(void *)(lVar4 + 0x10),4);
            uVar3 = uVar3 + 1;
            if (*(uint *)(self + 0x10) <= uVar3) goto LAB_005b69c8;
          }
          if (iVar2 == 2) {
LAB_005b69f0:
                    /* try { // try from 005b69ff to 005b6a03 has its CatchHandler @ 005b6a09 */
            File__Write((File *)local_58,(void *)(lVar4 + 0x10),8);
          }
          else {
            if (iVar2 == 3) goto LAB_005b69a9;
            if (iVar2 == 4) goto LAB_005b69f0;
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < *(uint *)(self + 0x10));
      }
    }
LAB_005b69c8:
                    /* try { // try from 005b69cd to 005b69d1 has its CatchHandler @ 005b6a28 */
    File__File__005b7a70((File *)local_58);
    if ((allocator *)(local_28[0] + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage)
    {
      LOCK();
      piVar1 = (int *)(local_28[0] + -8);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 < 1) {
        std__string_Rep_M_destroy((allocator *)(local_28[0] + -0x18));
      }
    }
  }
  return;
}

/* ======================================================================
 * GameRegistry__GameRegistry__005b6a60  (Ghidra `~GameRegistry` @ 005b6a60)
 * Signature: uint8_t __thiscall ~GameRegistry(GameRegistry * self)
 * Class: GameRegistry
 * Calls: `free`
 * Called by: `GSuperMeatBoy__GSuperMeatBoy__00512120`, `TEngine__TEngine__00583e20`, `UnixUserProfile__UnixUserProfile`, `UnixUserProfile__UnixUserProfile__005b8f50`
 */
/* GameRegistry__GameRegistry__005b6a60() */

void __thiscall GameRegistry__GameRegistry__005b6a60(GameRegistry *self)

{
  Flush(self);
  free(*(void **)self);
  free(*(void **)(self + 8));
  return;
}
