/* src/game/logic/game_01.c — 100 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "game_01.h"

/* ======================================================================
 * ConvertLevelToLeaderboardID  (Ghidra `ConvertLevelToLeaderboardID` @ 004c3f50)
 * Signature: uint8_t ConvertLevelToLeaderboardID(void)
 * Calls: `GSMBMenu__ExtractChapterAndLevelFromSelectedLevel`
 * Called by: `GSuperMeatBoy__BeatLevel`, `SMBLeaderBoardMenu__ReadData`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ConvertLevelToLeaderboardID() */

int ConvertLevelToLeaderboardID(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int local_28 [3];
  int local_1c [3];
  
  local_28[0] = 0;
  local_1c[0] = 0;
  iVar2 = *(int *)(SuperMeatBoy + 0x290);
  uVar1 = *(uint *)(SuperMeatBoy + 0x294);
  GSMBMenu__ExtractChapterAndLevelFromSelectedLevel(SMBMenu,local_1c,local_28,(char *)0x0);
  uVar4 = 0;
  if ((((local_1c[0] != 1) && (uVar4 = 1, local_1c[0] != 2)) && (uVar4 = 2, local_1c[0] != 3)) &&
     (((uVar4 = 3, local_1c[0] != 4 && (uVar4 = 4, local_1c[0] != 5)) &&
      (uVar4 = 5, local_1c[0] != 6)))) {
    uVar4 = 6;
    if (local_1c[0] != 7) {
      uVar4 = iVar2 - 1;
    }
  }
  iVar2 = -1;
  iVar3 = 0;
  if (1 < local_28[0]) {
    iVar3 = local_28[0] + -1;
  }
  if (uVar4 < 7) {
    iVar2 = (&CSWTCH_12)[uVar4];
    if (iVar2 != -1) {
      if (uVar1 < 2) {
        if (uVar1 == 1) {
          iVar2 = (&CSWTCH_13)[uVar4] + iVar2;
        }
        iVar2 = iVar2 + iVar3;
      }
      else {
        iVar2 = -1;
      }
    }
  }
  return iVar2;
}

/* ======================================================================
 * SMBLeaderboardPageUp  (Ghidra `SMBLeaderboardPageUp` @ 004c44e0)
 * Signature: uint8_t __stdcall SMBLeaderboardPageUp(tagButtonProps * arg1, void * arg2)
 * Calls: (none)
 * Called by: `SMBLeaderBoardMenu__Activate`
 */
/* SMBLeaderboardPageUp(tagButtonProps const*, void*) */

void SMBLeaderboardPageUp(tagButtonProps *arg1,void *arg2)

{
  if (*(int *)arg1 != 1) {
    return;
  }
  (**(code **)(*(long *)arg2 + 0x50))(arg2);
  (**(code **)(*(long *)arg2 + 0x50))(arg2);
  (**(code **)(*(long *)arg2 + 0x50))(arg2);
  (**(code **)(*(long *)arg2 + 0x50))(arg2);
  (**(code **)(*(long *)arg2 + 0x50))(arg2);
  (**(code **)(*(long *)arg2 + 0x50))(arg2);
  (**(code **)(*(long *)arg2 + 0x50))(arg2);
  (**(code **)(*(long *)arg2 + 0x50))(arg2);
  (**(code **)(*(long *)arg2 + 0x50))(arg2);
                    /* WARNING: Could not recover jumptable at 0x004c454c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)arg2 + 0x50))(arg2);
  return;
}

/* ======================================================================
 * SMBLeaderboardPageDown  (Ghidra `SMBLeaderboardPageDown` @ 004c4550)
 * Signature: uint8_t __stdcall SMBLeaderboardPageDown(tagButtonProps * arg1, void * arg2)
 * Calls: (none)
 * Called by: `SMBLeaderBoardMenu__Activate`
 */
/* SMBLeaderboardPageDown(tagButtonProps const*, void*) */

void SMBLeaderboardPageDown(tagButtonProps *arg1,void *arg2)

{
  if (*(int *)arg1 != 1) {
    return;
  }
  (**(code **)(*(long *)arg2 + 0x48))(arg2);
  (**(code **)(*(long *)arg2 + 0x48))(arg2);
  (**(code **)(*(long *)arg2 + 0x48))(arg2);
  (**(code **)(*(long *)arg2 + 0x48))(arg2);
  (**(code **)(*(long *)arg2 + 0x48))(arg2);
  (**(code **)(*(long *)arg2 + 0x48))(arg2);
  (**(code **)(*(long *)arg2 + 0x48))(arg2);
  (**(code **)(*(long *)arg2 + 0x48))(arg2);
  (**(code **)(*(long *)arg2 + 0x48))(arg2);
                    /* WARNING: Could not recover jumptable at 0x004c45bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)arg2 + 0x48))(arg2);
  return;
}

/* ======================================================================
 * SMBLeaderBoardShowGamerID  (Ghidra `SMBLeaderBoardShowGamerID` @ 004c4c60)
 * Signature: uint8_t __stdcall SMBLeaderBoardShowGamerID(tagButtonProps * arg1, void * arg2)
 * Calls: `TPlayer__GetProfile`
 * Called by: `SMBLeaderBoardMenu__Activate`
 */
/* SMBLeaderBoardShowGamerID(tagButtonProps const*, void*) */

void SMBLeaderBoardShowGamerID(tagButtonProps *arg1,void *arg2)

{
  long lVar1;
  UserProfile *pUVar2;
  
  if (*(int *)arg1 != 1) {
    return;
  }
  lVar1 = *(long *)((long)arg2 + (long)*(int *)((long)arg2 + 0x68) * 8 + 0x80);
  pUVar2 = (UserProfile *)TPlayer__GetProfile((TPlayer *)Players__Player);
  Leaderboards__ShowGamerInfo(pUVar2,lVar1);
  return;
}

/* ======================================================================
 * SMBLeaderBoardSwitchFilter  (Ghidra `SMBLeaderBoardSwitchFilter` @ 004c61e0)
 * Signature: uint8_t __stdcall SMBLeaderBoardSwitchFilter(tagButtonProps * arg1, void * arg2)
 * Calls: `SMBLeaderBoardMenu__ToggleFilterSwitch`
 * Called by: `GLOBAL_sub_I_SMBLeaderBoardSwitchFilter`, `SMBLeaderBoardMenu__Activate`
 */
/* SMBLeaderBoardSwitchFilter(tagButtonProps const*, void*) */

void SMBLeaderBoardSwitchFilter(tagButtonProps *arg1,void *arg2)

{
  if (*(int *)arg1 != 1) {
    return;
  }
  SMBLeaderBoardMenu__ToggleFilterSwitch(arg2);
  return;
}

/* ======================================================================
 * SMBLevelLoad  (Ghidra `SMBLevelLoad` @ 004c62f0)
 * Signature: uint8_t SMBLevelLoad(void)
 * Calls: `File__ReadArray`, `File__ReadVariable`, `GSetPieceWayPoints__LoadWayPointData`, `SMBAnimals__CreateAnimal`, `SMBAnimals__RemoveAnimals`, `SMBCamera__AddWayPoint`, `SMBCamera__SetStartPosition`, `TileLevelLightMap__CreateLight`, `TileLevelLightMap__Reset`
 * Called by: `SMBEditor__SMBEditor__004ad010`
 */
uint64_t SMBLevelLoad(File *arg1,TileLevel *arg2,int arg3)

{
  TileLevelLightMap *self;
  SMBCamera *this_00;
  uchar *puVar1;
  byte bVar2;
  int iVar3;
  uint32_t local_108;
  uint32_t local_104;
  uint32_t local_100;
  uint32_t local_fc;
  uint64_t local_f8;
  uint64_t local_f0;
  uint32_t local_e8;
  uint32_t local_e4;
  uint32_t local_e0 [2];
  uint32_t local_d8;
  uint32_t local_d4;
  uint32_t local_d0;
  uint32_t local_cc;
  uint64_t local_c8;
  uint64_t local_c0;
  uint32_t local_b8;
  uint32_t local_b4;
  uint32_t local_b0 [2];
  uint32_t local_a8;
  uint32_t local_a4;
  uint32_t local_a0;
  uint32_t local_9c;
  uint32_t local_98 [2];
  uint64_t local_90;
  uint64_t local_88;
  uint32_t local_78;
  uchar local_74 [28];
  uint local_58 [4];
  byte local_48 [24];
  
  if (arg3 < 2) {
    return 1;
  }
  local_48[0] = 0;
  File__ReadVariable(arg1,local_48,1);
  self = *(TileLevelLightMap **)(SuperMeatBoy + 0x390);
  TileLevelLightMap__Reset(self);
  SMBCamera__SetStartPosition(*(SMBCamera **)(SuperMeatBoy + 0x38),(Vector2 *)(arg2 + 0x22a8));
  if (arg3 == 2) {
    if (local_48[0] != 0) {
      bVar2 = 0;
      do {
        local_108 = 0;
        local_104 = 0;
        local_100 = 0;
        bVar2 = bVar2 + 1;
        local_f8 = cWhite;
        local_fc = 0;
        local_e8 = 0x3f800000;
        local_e4 = 0;
        local_e0[0] = 0;
        local_f0 = DAT_0081ba88 /* R:1.1910274640396352e-38f */;
        File__ReadArray(arg1,(uchar *)&local_108,3,4);
        File__ReadArray(arg1,(uchar *)&local_f8,4,4);
        File__ReadVariable(arg1,&local_e8,4);
        File__ReadVariable(arg1,local_e0,4);
        local_e4 = 0;
        TileLevelLightMap__CreateLight(self,(Light *)&local_108);
      } while (bVar2 < local_48[0]);
    }
  }
  else {
    bVar2 = 0;
    if (local_48[0] != 0) {
      do {
        local_d8 = 0;
        local_d4 = 0;
        local_d0 = 0;
        bVar2 = bVar2 + 1;
        local_c8 = cWhite;
        local_cc = 0;
        local_b8 = 0x3f800000;
        local_b4 = 0;
        local_b0[0] = 0;
        local_c0 = DAT_0081ba88 /* R:1.1910274640396352e-38f */;
        File__ReadArray(arg1,(uchar *)&local_d8,3,4);
        File__ReadArray(arg1,(uchar *)&local_c8,4,4);
        File__ReadVariable(arg1,&local_b8,4);
        File__ReadVariable(arg1,&local_b4,4);
        File__ReadVariable(arg1,local_b0,4);
        TileLevelLightMap__CreateLight(self,(Light *)&local_d8);
      } while (bVar2 < local_48[0]);
    }
    if (arg3 != 3) {
      local_58[0] = local_58[0] & 0xffffff00;
      File__ReadVariable(arg1,local_58,1);
      this_00 = *(SMBCamera **)(SuperMeatBoy + 0x38);
      if ((char)local_58[0] != '\0') {
        iVar3 = 0;
        do {
          while (iVar3 != 0) {
            local_a8 = 0;
            local_a4 = 0;
            local_a0 = 0xc3fa0000;
            local_9c = 0;
            iVar3 = iVar3 + 1;
            local_98[0] = 0;
            local_90 = 0;
            local_88 = 0;
            File__ReadArray(arg1,(uchar *)&local_a8,3,4);
            File__ReadVariable(arg1,local_98,4);
            SMBCamera__AddWayPoint(this_00,(SMBCameraWayPoint *)&local_a8);
            if ((int)(local_58[0] & 0xff) <= iVar3) goto LAB_004c66b9;
          }
          puVar1 = *(uchar **)(this_00 + 0x1180);
          iVar3 = 1;
          File__ReadArray(arg1,puVar1,3,4);
          File__ReadVariable(arg1,puVar1 + 0x10,4);
        } while (1 < (local_58[0] & 0xff));
      }
LAB_004c66b9:
      SMBAnimals__RemoveAnimals(*(SMBAnimals **)(GSuperMeatBoy__pLevelPalette + 0x41e8));
      if (arg3 == 4) {
        return 1;
      }
      File__ReadVariable(arg1,local_58,4);
      if (0 < (int)local_58[0]) {
        iVar3 = 0;
        if (arg3 == 5) {
          do {
            local_78 = 0;
            local_74[0] = '\0';
            local_74[1] = '\0';
            local_74[2] = '\0';
            local_74[3] = '\0';
            iVar3 = iVar3 + 1;
            local_74[4] = '\0';
            local_74[5] = '\0';
            local_74[6] = '\0';
            local_74[7] = '\0';
            local_74[8] = '\0';
            local_74[9] = '\0';
            local_74[10] = '\0';
            local_74[0xb] = '\0';
            local_74[0xc] = '\0';
            local_74[0xd] = 0x80;
            local_74[0xe] = '\t';
            local_74[0xf] = 0xc4;
            local_74[0x10] = '\0';
            local_74[0x11] = '\0';
            local_74[0x12] = '\0';
            local_74[0x13] = '\0';
            local_74[0x14] = '\0';
            local_74[0x15] = '\0';
            local_74[0x16] = '\0';
            local_74[0x17] = '\0';
            File__ReadVariable(arg1,(SMBAnimalCreate *)&local_78,4);
            File__ReadArray(arg1,local_74,2,4);
            SMBAnimals__CreateAnimal
                      (*(SMBAnimals **)(GSuperMeatBoy__pLevelPalette + 0x41e8),
                       (SMBAnimalCreate *)&local_78);
          } while (iVar3 < (int)local_58[0]);
          return 1;
        }
        do {
          local_78 = 0;
          local_74[0] = '\0';
          local_74[1] = '\0';
          local_74[2] = '\0';
          local_74[3] = '\0';
          iVar3 = iVar3 + 1;
          local_74[4] = '\0';
          local_74[5] = '\0';
          local_74[6] = '\0';
          local_74[7] = '\0';
          local_74[8] = '\0';
          local_74[9] = '\0';
          local_74[10] = '\0';
          local_74[0xb] = '\0';
          local_74[0xc] = '\0';
          local_74[0xd] = 0x80;
          local_74[0xe] = '\t';
          local_74[0xf] = 0xc4;
          local_74[0x10] = '\0';
          local_74[0x11] = '\0';
          local_74[0x12] = '\0';
          local_74[0x13] = '\0';
          local_74[0x14] = '\0';
          local_74[0x15] = '\0';
          local_74[0x16] = '\0';
          local_74[0x17] = '\0';
          File__ReadVariable(arg1,(SMBAnimalCreate *)&local_78,4);
          File__ReadArray(arg1,local_74,2,4);
          File__ReadArray(arg1,local_74 + 8,2,4);
          File__ReadArray(arg1,local_74 + 0x10,2,4);
          SMBAnimals__CreateAnimal
                    (*(SMBAnimals **)(GSuperMeatBoy__pLevelPalette + 0x41e8),
                     (SMBAnimalCreate *)&local_78);
        } while (iVar3 < (int)local_58[0]);
      }
      if (arg3 < 7) {
        return 1;
      }
      GSetPieceWayPoints__LoadWayPointData(SetPieceWayPoints,arg1,arg2);
      return 1;
    }
  }
  SMBAnimals__RemoveAnimals(*(SMBAnimals **)(GSuperMeatBoy__pLevelPalette + 0x41e8));
  return 1;
}

/* ======================================================================
 * SMBLevelSave  (Ghidra `SMBLevelSave` @ 004c68c0)
 * Signature: uint8_t SMBLevelSave(void)
 * Calls: `File__Write`, `File__WriteArray`, `GSetPieceWayPoints__SaveWayPointData`, `SMBAnimals__GetAnimal`, `SMBAnimals__GetNumAnimals`, `SMBCamera__GetNumWayPoints`, `TileLevelLightMap__GetLight`, `TileLevelLightMap__getNumLights`
 * Called by: `SMBEditor__SMBEditor__004ad010`
 */
uint64_t SMBLevelSave(File *arg1,TileLevel *arg2)

{
  TileLevelLightMap *self;
  SMBCamera *this_00;
  uchar *puVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  uint64_t local_48 [2];
  int local_38 [2];
  uint32_t local_30;
  uint8_t local_2a;
  uint8_t local_29 [9];
  
  self = *(TileLevelLightMap **)(SuperMeatBoy + 0x390);
  local_2a = TileLevelLightMap__getNumLights(self);
  File__Write(arg1,&local_2a,1);
  puVar1 = (uchar *)TileLevelLightMap__GetLight(self,0);
  if (*(int *)(puVar1 + 0x28) != 0) {
    File__WriteArray(arg1,puVar1,3,4);
    File__WriteArray(arg1,puVar1 + 0x10,4,4);
    File__Write(arg1,puVar1 + 0x20,4);
    File__Write(arg1,puVar1 + 0x24,4);
    File__Write(arg1,puVar1 + 0x28,4);
  }
  puVar1 = (uchar *)TileLevelLightMap__GetLight(self,1);
  if (*(int *)(puVar1 + 0x28) != 0) {
    File__WriteArray(arg1,puVar1,3,4);
    File__WriteArray(arg1,puVar1 + 0x10,4,4);
    File__Write(arg1,puVar1 + 0x20,4);
    File__Write(arg1,puVar1 + 0x24,4);
    File__Write(arg1,puVar1 + 0x28,4);
  }
  puVar1 = (uchar *)TileLevelLightMap__GetLight(self,2);
  if (*(int *)(puVar1 + 0x28) != 0) {
    File__WriteArray(arg1,puVar1,3,4);
    File__WriteArray(arg1,puVar1 + 0x10,4,4);
    File__Write(arg1,puVar1 + 0x20,4);
    File__Write(arg1,puVar1 + 0x24,4);
    File__Write(arg1,puVar1 + 0x28,4);
  }
  puVar1 = (uchar *)TileLevelLightMap__GetLight(self,3);
  if (*(int *)(puVar1 + 0x28) != 0) {
    File__WriteArray(arg1,puVar1,3,4);
    File__WriteArray(arg1,puVar1 + 0x10,4,4);
    File__Write(arg1,puVar1 + 0x20,4);
    File__Write(arg1,puVar1 + 0x24,4);
    File__Write(arg1,puVar1 + 0x28,4);
  }
  puVar1 = (uchar *)TileLevelLightMap__GetLight(self,4);
  if (*(int *)(puVar1 + 0x28) != 0) {
    File__WriteArray(arg1,puVar1,3,4);
    File__WriteArray(arg1,puVar1 + 0x10,4,4);
    File__Write(arg1,puVar1 + 0x20,4);
    File__Write(arg1,puVar1 + 0x24,4);
    File__Write(arg1,puVar1 + 0x28,4);
  }
  puVar1 = (uchar *)TileLevelLightMap__GetLight(self,5);
  if (*(int *)(puVar1 + 0x28) != 0) {
    File__WriteArray(arg1,puVar1,3,4);
    File__WriteArray(arg1,puVar1 + 0x10,4,4);
    File__Write(arg1,puVar1 + 0x20,4);
    File__Write(arg1,puVar1 + 0x24,4);
    File__Write(arg1,puVar1 + 0x28,4);
  }
  puVar1 = (uchar *)TileLevelLightMap__GetLight(self,6);
  if (*(int *)(puVar1 + 0x28) != 0) {
    File__WriteArray(arg1,puVar1,3,4);
    File__WriteArray(arg1,puVar1 + 0x10,4,4);
    File__Write(arg1,puVar1 + 0x20,4);
    File__Write(arg1,puVar1 + 0x24,4);
    File__Write(arg1,puVar1 + 0x28,4);
  }
  puVar1 = (uchar *)TileLevelLightMap__GetLight(self,7);
  if (*(int *)(puVar1 + 0x28) != 0) {
    File__WriteArray(arg1,puVar1,3,4);
    File__WriteArray(arg1,puVar1 + 0x10,4,4);
    File__Write(arg1,puVar1 + 0x20,4);
    File__Write(arg1,puVar1 + 0x24,4);
    File__Write(arg1,puVar1 + 0x28,4);
  }
  puVar1 = (uchar *)TileLevelLightMap__GetLight(self,8);
  if (*(int *)(puVar1 + 0x28) != 0) {
    File__WriteArray(arg1,puVar1,3,4);
    File__WriteArray(arg1,puVar1 + 0x10,4,4);
    File__Write(arg1,puVar1 + 0x20,4);
    File__Write(arg1,puVar1 + 0x24,4);
    File__Write(arg1,puVar1 + 0x28,4);
  }
  puVar1 = (uchar *)TileLevelLightMap__GetLight(self,9);
  if (*(int *)(puVar1 + 0x28) != 0) {
    File__WriteArray(arg1,puVar1,3,4);
    File__WriteArray(arg1,puVar1 + 0x10,4,4);
    File__Write(arg1,puVar1 + 0x20,4);
    File__Write(arg1,puVar1 + 0x24,4);
    File__Write(arg1,puVar1 + 0x28,4);
  }
  this_00 = *(SMBCamera **)(SuperMeatBoy + 0x38);
  local_29[0] = SMBCamera__GetNumWayPoints(this_00);
  puVar1 = *(uchar **)(this_00 + 0x1180);
  File__Write(arg1,local_29,1);
  for (; puVar1 != (uchar *)0x0; puVar1 = *(uchar **)(puVar1 + 0x18)) {
    File__WriteArray(arg1,puVar1,3,4);
    File__Write(arg1,puVar1 + 0x10,4);
  }
  local_38[0] = SMBAnimals__GetNumAnimals(*(SMBAnimals **)(GSuperMeatBoy__pLevelPalette + 0x41e8));
  File__Write(arg1,local_38,4);
  if (0 < local_38[0]) {
    iVar3 = 0;
    do {
      iVar4 = iVar3 + 1;
      lVar2 = SMBAnimals__GetAnimal(*(SMBAnimals **)(GSuperMeatBoy__pLevelPalette + 0x41e8),iVar3);
      local_30 = *(uint32_t *)(lVar2 + 0x214);
      local_48[0] = *(uint64_t *)(lVar2 + 0xf8);
      File__Write(arg1,&local_30,4);
      File__WriteArray(arg1,(uchar *)local_48,2,4);
      File__WriteArray(arg1,(uchar *)(lVar2 + 0x100),2,4);
      File__WriteArray(arg1,(uchar *)(lVar2 + 0x108),2,4);
      iVar3 = iVar4;
    } while (iVar4 < local_38[0]);
  }
  GSetPieceWayPoints__SaveWayPointData(SetPieceWayPoints,arg1,arg2);
  return 1;
}

/* ======================================================================
 * SMBLevelVerify  (Ghidra `SMBLevelVerify` @ 004c6f80)
 * Signature: uint8_t SMBLevelVerify(void)
 * Calls: `File__ReadArray`, `File__ReadVariable`, `GSetPieceWayPoints__LoadWayPointData`
 * Called by: `SMBEditor__SMBEditor__004ad010`
 */
bool SMBLevelVerify(File *arg1,int arg2)

{
  byte bVar1;
  int iVar2;
  uchar local_138 [16];
  uint64_t local_128;
  uint64_t local_120;
  uint32_t local_118;
  uint32_t local_114;
  uint32_t local_110 [2];
  uchar local_108 [16];
  uint64_t local_f8;
  uint64_t local_f0;
  uint32_t local_e8;
  uint32_t local_e4;
  uint32_t local_e0 [2];
  uchar local_d8 [16];
  uint32_t local_c8 [2];
  uint64_t local_c0;
  uint64_t local_b8;
  uchar local_a8 [16];
  uint32_t local_98 [2];
  uint64_t local_90;
  uint64_t local_88;
  uint local_78;
  uchar local_74 [28];
  uint local_58 [4];
  byte local_48 [24];
  
  if (arg2 < 2) {
    return true;
  }
  local_48[0] = 0;
  File__ReadVariable(arg1,local_48,1);
  if (10 < local_48[0]) {
    return false;
  }
  if (arg2 == 2) {
    if (local_48[0] == 0) {
      return true;
    }
    bVar1 = 0;
    do {
      local_138[0] = '\0';
      local_138[1] = '\0';
      local_138[2] = '\0';
      local_138[3] = '\0';
      local_138[4] = '\0';
      local_138[5] = '\0';
      local_138[6] = '\0';
      local_138[7] = '\0';
      local_138[8] = '\0';
      local_138[9] = '\0';
      local_138[10] = '\0';
      local_138[0xb] = '\0';
      bVar1 = bVar1 + 1;
      local_128 = cWhite;
      local_138[0xc] = '\0';
      local_138[0xd] = '\0';
      local_138[0xe] = '\0';
      local_138[0xf] = '\0';
      local_118 = 0x3f800000;
      local_114 = 0;
      local_110[0] = 0;
      local_120 = DAT_0081ba88 /* R:1.1910274640396352e-38f */;
      File__ReadArray(arg1,local_138,3,4);
      File__ReadArray(arg1,(uchar *)&local_128,4,4);
      File__ReadVariable(arg1,&local_118,4);
      File__ReadVariable(arg1,local_110,4);
    } while (bVar1 < local_48[0]);
  }
  else {
    bVar1 = 0;
    if (local_48[0] != 0) {
      do {
        local_108[0] = '\0';
        local_108[1] = '\0';
        local_108[2] = '\0';
        local_108[3] = '\0';
        local_108[4] = '\0';
        local_108[5] = '\0';
        local_108[6] = '\0';
        local_108[7] = '\0';
        local_108[8] = '\0';
        local_108[9] = '\0';
        local_108[10] = '\0';
        local_108[0xb] = '\0';
        bVar1 = bVar1 + 1;
        local_f8 = cWhite;
        local_108[0xc] = '\0';
        local_108[0xd] = '\0';
        local_108[0xe] = '\0';
        local_108[0xf] = '\0';
        local_e8 = 0x3f800000;
        local_e4 = 0;
        local_e0[0] = 0;
        local_f0 = DAT_0081ba88 /* R:1.1910274640396352e-38f */;
        File__ReadArray(arg1,local_108,3,4);
        File__ReadArray(arg1,(uchar *)&local_f8,4,4);
        File__ReadVariable(arg1,&local_e8,4);
        File__ReadVariable(arg1,&local_e4,4);
        File__ReadVariable(arg1,local_e0,4);
      } while (bVar1 < local_48[0]);
    }
    if (arg2 == 3) {
      return true;
    }
    local_58[0] = local_58[0] & 0xffffff00;
    File__ReadVariable(arg1,local_58,1);
    if (100 < (byte)local_58[0]) {
      return false;
    }
    if ((byte)local_58[0] != 0) {
      iVar2 = 0;
      do {
        if (iVar2 == 0) {
          local_d8[0] = '\0';
          local_d8[1] = '\0';
          local_d8[2] = '\0';
          local_d8[3] = '\0';
          local_d8[4] = '\0';
          local_d8[5] = '\0';
          local_d8[6] = '\0';
          local_d8[7] = '\0';
          local_d8[8] = '\0';
          local_d8[9] = '\0';
          local_d8[10] = 0xfa;
          local_d8[0xb] = 0xc3;
          local_d8[0xc] = '\0';
          local_d8[0xd] = '\0';
          local_d8[0xe] = '\0';
          local_d8[0xf] = '\0';
          local_c8[0] = 0;
          local_c0 = 0;
          local_b8 = 0;
          File__ReadArray(arg1,local_d8,3,4);
          File__ReadVariable(arg1,local_c8,4);
        }
        else {
          local_a8[0] = '\0';
          local_a8[1] = '\0';
          local_a8[2] = '\0';
          local_a8[3] = '\0';
          local_a8[4] = '\0';
          local_a8[5] = '\0';
          local_a8[6] = '\0';
          local_a8[7] = '\0';
          local_a8[8] = '\0';
          local_a8[9] = '\0';
          local_a8[10] = 0xfa;
          local_a8[0xb] = 0xc3;
          local_a8[0xc] = '\0';
          local_a8[0xd] = '\0';
          local_a8[0xe] = '\0';
          local_a8[0xf] = '\0';
          local_98[0] = 0;
          local_90 = 0;
          local_88 = 0;
          File__ReadArray(arg1,local_a8,3,4);
          File__ReadVariable(arg1,local_98,4);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)(local_58[0] & 0xff));
    }
    if (arg2 != 4) {
      File__ReadVariable(arg1,local_58,4);
      if (0 < (int)local_58[0]) {
        iVar2 = 0;
        if (arg2 == 5) {
          do {
            local_78 = 0;
            local_74[0] = '\0';
            local_74[1] = '\0';
            local_74[2] = '\0';
            local_74[3] = '\0';
            local_74[4] = '\0';
            local_74[5] = '\0';
            local_74[6] = '\0';
            local_74[7] = '\0';
            local_74[8] = '\0';
            local_74[9] = '\0';
            local_74[10] = '\0';
            local_74[0xb] = '\0';
            local_74[0xc] = '\0';
            local_74[0xd] = 0x80;
            local_74[0xe] = '\t';
            local_74[0xf] = 0xc4;
            local_74[0x10] = '\0';
            local_74[0x11] = '\0';
            local_74[0x12] = '\0';
            local_74[0x13] = '\0';
            local_74[0x14] = '\0';
            local_74[0x15] = '\0';
            local_74[0x16] = '\0';
            local_74[0x17] = '\0';
            File__ReadVariable(arg1,&local_78,4);
            if (0x13 < local_78) {
              return false;
            }
            iVar2 = iVar2 + 1;
            File__ReadArray(arg1,local_74,2,4);
          } while (iVar2 < (int)local_58[0]);
          return true;
        }
        do {
          local_78 = 0;
          local_74[0] = '\0';
          local_74[1] = '\0';
          local_74[2] = '\0';
          local_74[3] = '\0';
          local_74[4] = '\0';
          local_74[5] = '\0';
          local_74[6] = '\0';
          local_74[7] = '\0';
          local_74[8] = '\0';
          local_74[9] = '\0';
          local_74[10] = '\0';
          local_74[0xb] = '\0';
          local_74[0xc] = '\0';
          local_74[0xd] = 0x80;
          local_74[0xe] = '\t';
          local_74[0xf] = 0xc4;
          local_74[0x10] = '\0';
          local_74[0x11] = '\0';
          local_74[0x12] = '\0';
          local_74[0x13] = '\0';
          local_74[0x14] = '\0';
          local_74[0x15] = '\0';
          local_74[0x16] = '\0';
          local_74[0x17] = '\0';
          File__ReadVariable(arg1,&local_78,4);
          if (0x13 < local_78) {
            return false;
          }
          iVar2 = iVar2 + 1;
          File__ReadArray(arg1,local_74,2,4);
          File__ReadArray(arg1,local_74 + 8,2,4);
          File__ReadArray(arg1,local_74 + 0x10,2,4);
        } while (iVar2 < (int)local_58[0]);
      }
      if (6 < arg2) {
        iVar2 = GSetPieceWayPoints__LoadWayPointData(SetPieceWayPoints,arg1,(TileLevel *)0x0);
        return iVar2 != 0;
      }
    }
  }
  return true;
}

/* ======================================================================
 * CreateSMBMenuResources  (Ghidra `CreateSMBMenuResources` @ 004c7500)
 * Signature: uint8_t __stdcall CreateSMBMenuResources(void * arg1)
 * Calls: (none)
 * Called by: `GSMBMenu__GSMBMenu`, `GSMBMenu__GSMBMenu__004d8690`
 */
/* CreateSMBMenuResources(void*) */

void CreateSMBMenuResources(void *arg1)

{
  return;
}

/* ======================================================================
 * DestroySMBMenuResources  (Ghidra `DestroySMBMenuResources` @ 004c7510)
 * Signature: uint8_t __stdcall DestroySMBMenuResources(void * arg1)
 * Calls: (none)
 * Called by: `GSMBMenu__GSMBMenu`, `GSMBMenu__GSMBMenu__004d8690`
 */
/* DestroySMBMenuResources(void*) */

void DestroySMBMenuResources(void *arg1)

{
  return;
}

/* ======================================================================
 * SMBProfileInitialized  (Ghidra `SMBProfileInitialized` @ 004c7520)
 * Signature: uint8_t SMBProfileInitialized(void)
 * Calls: (none)
 * Called by: `Game_StorageRemovedOK`, `SMBMenu_StartMenuStart`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SMBProfileInitialized() */

void SMBProfileInitialized(void)

{
  bEnterTitleMenu = 1;
  return;
}

/* ======================================================================
 * SMBMenuEndMenuTransition  (Ghidra `SMBMenuEndMenuTransition` @ 004c7530)
 * Signature: uint8_t __stdcall SMBMenuEndMenuTransition(void * arg1, int arg2, int arg3)
 * Calls: (none)
 * Called by: `GSMBMenu__ToggleLightAndDark`, `GSMBMenu__TransitionInWorld`, `GSMBMenu__TransitionOutMenuFromGame`, `SMBMenuInMenuFromGame`, `SMBMenuInWorldTrans`
 */
/* SMBMenuEndMenuTransition(void*, int, int) */

void SMBMenuEndMenuTransition(void *arg1,int arg2,int arg3)

{
  bMenuTransitioning = 0;
  return;
}

/* ======================================================================
 * SMBMenuTransitionFinished  (Ghidra `SMBMenuTransitionFinished` @ 004c7540)
 * Signature: uint8_t __stdcall SMBMenuTransitionFinished(void * arg1, int arg2, int arg3)
 * Calls: (none)
 * Called by: `GSMBMenu__HideChapterEnd`, `SMBChapterEndIdleFinished`
 */
/* SMBMenuTransitionFinished(void*, int, int) */

void SMBMenuTransitionFinished(void *arg1,int arg2,int arg3)

{
  bMenuTransitioning = 0;
  return;
}

/* ======================================================================
 * SMBMenuExitGameFromMsg  (Ghidra `SMBMenuExitGameFromMsg` @ 004c7550)
 * Signature: uint8_t __stdcall SMBMenuExitGameFromMsg(void * arg1)
 * Calls: (none)
 * Called by: `GSMBMenu__ClickTitleOption`, `GSMBMenu__ShowExitMessage`
 */
/* SMBMenuExitGameFromMsg(void*) */

void SMBMenuExitGameFromMsg(void *arg1)

{
                    /* WARNING: Could not recover jumptable at 0x004c7563. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(SuperMeatBoy + 0x20) + 0x30))(SuperMeatBoy + 0x20);
  return;
}

/* ======================================================================
 * SMBChapterEndSkip  (Ghidra `SMBChapterEndSkip` @ 004c7570)
 * Signature: uint8_t __stdcall SMBChapterEndSkip(void * arg1)
 * Calls: `TPlayer__GetJoystick`
 * Called by: `SMBChapterEndInFinished`
 */
/* SMBChapterEndSkip(void*) */

bool SMBChapterEndSkip(void *arg1)

{
  long lVar1;
  bool bVar2;
  
  if ((Keyboard == 0) || (bVar2 = true, *(int *)(Keyboard + 8) != 1)) {
    lVar1 = TPlayer__GetJoystick((TPlayer *)Players__Player);
    bVar2 = *(int *)(lVar1 + 8) == 1;
  }
  return bVar2;
}

/* ======================================================================
 * SMBMenuGameTransitionOut  (Ghidra `SMBMenuGameTransitionOut` @ 004c75b0)
 * Signature: uint8_t __stdcall SMBMenuGameTransitionOut(void * arg1, int arg2, int arg3)
 * Calls: `SMBLevelFinished`
 * Called by: `GSMBMenu__TransitionOutGameFromMenu`
 */
/* SMBMenuGameTransitionOut(void*, int, int) */

void SMBMenuGameTransitionOut(void *arg1,int arg2,int arg3)

{
  bMenuTransitioning = 0;
  SMBLevelFinished((void *)0x0,0,0);
  return;
}

/* ======================================================================
 * SMBChapterMenuUpsell  (Ghidra `SMBChapterMenuUpsell` @ 004c75d0)
 * Signature: uint8_t __stdcall SMBChapterMenuUpsell(tagButtonProps * arg1, void * arg2)
 * Calls: `System_PurchaseFullGame`, `TPlayer__GetProfile`
 * Called by: `GSMBMenu__RestoreControls`
 */
/* SMBChapterMenuUpsell(tagButtonProps const*, void*) */

void SMBChapterMenuUpsell(tagButtonProps *arg1,void *arg2)

{
  long lVar1;
  
  if (*(int *)arg1 != 1) {
    return;
  }
  lVar1 = TPlayer__GetProfile((TPlayer *)Players__Player);
  System_PurchaseFullGame(*(uint32_t *)(lVar1 + 0x14));
  return;
}

/* ======================================================================
 * SMBChapterEndInFinished  (Ghidra `SMBChapterEndInFinished` @ 004c7600)
 * Signature: uint8_t __stdcall SMBChapterEndInFinished(void * arg1, int arg2, int arg3)
 * Calls: `GSMBCutSceneManager__PlayCutScene`, `GSuperMeatBoy__SwitchGameMode`, `SMBChapterEndIdleFinished`, `SMBChapterEndSkip`, `TAudioInstance__Stop`
 * Called by: `GSMBMenu__ShowChapterEnd`
 */
/* SMBChapterEndInFinished(void*, int, int) */

void SMBChapterEndInFinished(void *arg1,int arg2,int arg3)

{
  uint32_t local_58;
  uint32_t local_54;
  uint32_t local_50;
  void *local_48;
  code *local_40;
  uint64_t local_38;
  code *local_30;
  uint64_t local_28;
  uint32_t local_20;
  uint32_t local_1c;
  uint32_t local_18;
  
  if (arg3 != 0) {
    TAudioInstance__Stop((TAudioInstance *)titleMusicInstance);
    GSuperMeatBoy__SwitchGameMode(SuperMeatBoy,9);
    return;
  }
  local_38 = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 1;
  local_54 = 0x43f00000;
  local_58 = 0x44200000;
  local_50 = 1;
  local_30 = SMBChapterEndSkip;
  local_40 = SMBChapterEndIdleFinished;
  local_18 = 0;
  local_48 = arg1;
  GSMBCutSceneManager__PlayCutScene(SMBCutSceneManager,(SMBCutScene *)&local_58);
  return;
}

/* ======================================================================
 * SMBMenuChapterIntroFinished  (Ghidra `SMBMenuChapterIntroFinished` @ 004c76a0)
 * Signature: uint8_t __stdcall SMBMenuChapterIntroFinished(void * arg1, int arg2, int arg3)
 * Calls: `GSuperMeatBoy__SwitchGameMode`, `SMBChapter__DestroyChapterIntro`, `SMBChapter__PlayChapterIntroEnd`, `SMBChapter__Reset`, `SMBMenuChapterIntroEndFinished`
 * Called by: `GSMBMenu__TransitionInChapter`
 */
/* SMBMenuChapterIntroFinished(void*, int, int) */

void SMBMenuChapterIntroFinished(void *arg1,int arg2,int arg3)

{
  SMBChapter__DestroyChapterIntro((SMBChapter *)(SuperMeatBoy + 0x90));
  if (arg3 != 0) {
    GSuperMeatBoy__SwitchGameMode(SuperMeatBoy,9);
    return;
  }
  bShowingIntroEnd = 1;
  bTransitionFromWorldToChapter = 1;
  GSuperMeatBoy__SwitchGameMode(SuperMeatBoy,9);
  SMBChapter__Reset((SMBChapter *)(SuperMeatBoy + 0x90));
  SMBChapter__PlayChapterIntroEnd
            ((SMBChapter *)(SuperMeatBoy + 0x90),SMBMenuChapterIntroEndFinished);
  return;
}

/* ======================================================================
 * SMBMenuChapterIntroEndFinished  (Ghidra `SMBMenuChapterIntroEndFinished` @ 004c7730)
 * Signature: uint8_t __stdcall SMBMenuChapterIntroEndFinished(void * arg1, int arg2, int arg3)
 * Calls: `GSuperMeatBoy__SwitchGameMode`, `SMBChapter__DestroyChapterIntroEnd`, `SMBChapter__PlayChapterMenuMusic`
 * Called by: `SMBMenuChapterIntroFinished`
 */
/* SMBMenuChapterIntroEndFinished(void*, int, int) */

void SMBMenuChapterIntroEndFinished(void *arg1,int arg2,int arg3)

{
  bMenuTransitioning = 0;
  bShowingIntroEnd = 0;
  SMBChapter__DestroyChapterIntroEnd((SMBChapter *)(SuperMeatBoy + 0x90));
  if (arg3 != 0) {
    GSuperMeatBoy__SwitchGameMode(SuperMeatBoy,9);
    return;
  }
  SMBChapter__PlayChapterMenuMusic((SMBChapter *)(SuperMeatBoy + 0x90));
  return;
}

/* ======================================================================
 * SMBMenu_IncrementReplayPauseOption  (Ghidra `SMBMenu_IncrementReplayPauseOption` @ 004c7820)
 * Signature: uint8_t __stdcall SMBMenu_IncrementReplayPauseOption(tagButtonProps * arg1, void * arg2)
 * Calls: (none)
 * Called by: `GSMBMenu__ShowPauseMenu`, `ShowPauseMenu`
 */
/* SMBMenu_IncrementReplayPauseOption(tagButtonProps const*, void*) */

void SMBMenu_IncrementReplayPauseOption(tagButtonProps *arg1,void *arg2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  lVar2 = SMBMenu;
  if ((arg1 != (tagButtonProps *)0x0) && (*(int *)arg1 == 1)) {
    iVar1 = *(int *)(SMBMenu + 0x81c);
    iVar3 = 0;
    if (iVar1 + 1 != 4) {
      iVar3 = iVar1 + 1;
    }
    *(int *)(SMBMenu + 0x81c) = iVar3;
    *(uint32_t *)(*(long *)(lVar2 + 0xb38 + (long)iVar1 * 0x20) + 0x20) =
         *(uint32_t *)(lVar2 + 8 + ((long)iVar1 + 0x59) * 0x20);
    *(uint32_t *)(*(long *)(lVar2 + 0xb38 + (long)*(int *)(lVar2 + 0x81c) * 0x20) + 0x20) =
         *(uint32_t *)(lVar2 + 0xc + ((long)*(int *)(lVar2 + 0x81c) + 0x59) * 0x20);
    return;
  }
  return;
}

/* ======================================================================
 * SMBMenu_DecrementReplayPauseOption  (Ghidra `SMBMenu_DecrementReplayPauseOption` @ 004c78a0)
 * Signature: uint8_t __stdcall SMBMenu_DecrementReplayPauseOption(tagButtonProps * arg1, void * arg2)
 * Calls: (none)
 * Called by: `GSMBMenu__ShowPauseMenu`, `ShowPauseMenu`
 */
/* SMBMenu_DecrementReplayPauseOption(tagButtonProps const*, void*) */

void SMBMenu_DecrementReplayPauseOption(tagButtonProps *arg1,void *arg2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  lVar2 = SMBMenu;
  if ((arg1 != (tagButtonProps *)0x0) && (*(int *)arg1 == 1)) {
    iVar1 = *(int *)(SMBMenu + 0x81c);
    iVar3 = 3;
    if (iVar1 + -1 != -1) {
      iVar3 = iVar1 + -1;
    }
    *(int *)(SMBMenu + 0x81c) = iVar3;
    *(uint32_t *)(*(long *)(lVar2 + 0xb38 + (long)iVar1 * 0x20) + 0x20) =
         *(uint32_t *)(lVar2 + 8 + ((long)iVar1 + 0x59) * 0x20);
    *(uint32_t *)(*(long *)(lVar2 + 0xb38 + (long)*(int *)(lVar2 + 0x81c) * 0x20) + 0x20) =
         *(uint32_t *)(lVar2 + 0xc + ((long)*(int *)(lVar2 + 0x81c) + 0x59) * 0x20);
    return;
  }
  return;
}

/* ======================================================================
 * SMBMenu_IncrementTitleHelpOption  (Ghidra `SMBMenu_IncrementTitleHelpOption` @ 004c7920)
 * Signature: uint8_t __stdcall SMBMenu_IncrementTitleHelpOption(tagButtonProps * arg1, void * arg2)
 * Calls: (none)
 * Called by: `GSMBMenu__ShowTitleHelpAndOptions`
 */
/* SMBMenu_IncrementTitleHelpOption(tagButtonProps const*, void*) */

void SMBMenu_IncrementTitleHelpOption(tagButtonProps *arg1,void *arg2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  lVar2 = SMBMenu;
  if ((arg1 != (tagButtonProps *)0x0) && (*(int *)arg1 == 1)) {
    iVar1 = *(int *)(SMBMenu + 0x820);
    iVar3 = 0;
    if (iVar1 + 1 != 5) {
      iVar3 = iVar1 + 1;
    }
    *(int *)(SMBMenu + 0x820) = iVar3;
    *(uint32_t *)(*(long *)(lVar2 + 0x9f8 + (long)iVar1 * 0x20) + 0x20) =
         *(uint32_t *)(lVar2 + 8 + ((long)iVar1 + 0x4f) * 0x20);
    *(uint32_t *)(*(long *)(lVar2 + 0x9f8 + (long)*(int *)(lVar2 + 0x820) * 0x20) + 0x20) =
         *(uint32_t *)(lVar2 + 0xc + ((long)*(int *)(lVar2 + 0x820) + 0x4f) * 0x20);
    return;
  }
  return;
}

/* ======================================================================
 * SMBMenu_DecrementTitleHelpOption  (Ghidra `SMBMenu_DecrementTitleHelpOption` @ 004c79a0)
 * Signature: uint8_t __stdcall SMBMenu_DecrementTitleHelpOption(tagButtonProps * arg1, void * arg2)
 * Calls: (none)
 * Called by: `GSMBMenu__ShowTitleHelpAndOptions`
 */
/* SMBMenu_DecrementTitleHelpOption(tagButtonProps const*, void*) */

void SMBMenu_DecrementTitleHelpOption(tagButtonProps *arg1,void *arg2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  lVar2 = SMBMenu;
  if ((arg1 != (tagButtonProps *)0x0) && (*(int *)arg1 == 1)) {
    iVar1 = *(int *)(SMBMenu + 0x820);
    iVar3 = 4;
    if (iVar1 + -1 != -1) {
      iVar3 = iVar1 + -1;
    }
    *(int *)(SMBMenu + 0x820) = iVar3;
    *(uint32_t *)(*(long *)(lVar2 + 0x9f8 + (long)iVar1 * 0x20) + 0x20) =
         *(uint32_t *)(lVar2 + 8 + ((long)iVar1 + 0x4f) * 0x20);
    *(uint32_t *)(*(long *)(lVar2 + 0x9f8 + (long)*(int *)(lVar2 + 0x820) * 0x20) + 0x20) =
         *(uint32_t *)(lVar2 + 0xc + ((long)*(int *)(lVar2 + 0x820) + 0x4f) * 0x20);
    return;
  }
  return;
}

/* ======================================================================
 * SMBMenu_IncrementPauseHelpOption  (Ghidra `SMBMenu_IncrementPauseHelpOption` @ 004c7a20)
 * Signature: uint8_t __stdcall SMBMenu_IncrementPauseHelpOption(tagButtonProps * arg1, void * arg2)
 * Calls: (none)
 * Called by: `GSMBMenu__ShowPauseHelpAndOptions`
 */
/* SMBMenu_IncrementPauseHelpOption(tagButtonProps const*, void*) */

void SMBMenu_IncrementPauseHelpOption(tagButtonProps *arg1,void *arg2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  lVar2 = SMBMenu;
  if ((arg1 != (tagButtonProps *)0x0) && (*(int *)arg1 == 1)) {
    iVar1 = *(int *)(SMBMenu + 0x820);
    iVar3 = 0;
    if (iVar1 + 1 != 5) {
      iVar3 = iVar1 + 1;
    }
    *(int *)(SMBMenu + 0x820) = iVar3;
    *(uint32_t *)(*(long *)(lVar2 + 0xa98 + (long)iVar1 * 0x20) + 0x20) =
         *(uint32_t *)(lVar2 + 8 + ((long)iVar1 + 0x54) * 0x20);
    *(uint32_t *)(*(long *)(lVar2 + 0xa98 + (long)*(int *)(lVar2 + 0x820) * 0x20) + 0x20) =
         *(uint32_t *)(lVar2 + 0xc + ((long)*(int *)(lVar2 + 0x820) + 0x54) * 0x20);
    return;
  }
  return;
}

/* ======================================================================
 * SMBMenu_DecrementPauseHelpOption  (Ghidra `SMBMenu_DecrementPauseHelpOption` @ 004c7aa0)
 * Signature: uint8_t __stdcall SMBMenu_DecrementPauseHelpOption(tagButtonProps * arg1, void * arg2)
 * Calls: (none)
 * Called by: `GSMBMenu__ShowPauseHelpAndOptions`
 */
/* SMBMenu_DecrementPauseHelpOption(tagButtonProps const*, void*) */

void SMBMenu_DecrementPauseHelpOption(tagButtonProps *arg1,void *arg2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  lVar2 = SMBMenu;
  if ((arg1 != (tagButtonProps *)0x0) && (*(int *)arg1 == 1)) {
    iVar1 = *(int *)(SMBMenu + 0x820);
    iVar3 = 4;
    if (iVar1 + -1 != -1) {
      iVar3 = iVar1 + -1;
    }
    *(int *)(SMBMenu + 0x820) = iVar3;
    *(uint32_t *)(*(long *)(lVar2 + 0xa98 + (long)iVar1 * 0x20) + 0x20) =
         *(uint32_t *)(lVar2 + 8 + ((long)iVar1 + 0x54) * 0x20);
    *(uint32_t *)(*(long *)(lVar2 + 0xa98 + (long)*(int *)(lVar2 + 0x820) * 0x20) + 0x20) =
         *(uint32_t *)(lVar2 + 0xc + ((long)*(int *)(lVar2 + 0x820) + 0x54) * 0x20);
    return;
  }
  return;
}

/* ======================================================================
 * SMBMenuUnlocksFinished  (Ghidra `SMBMenuUnlocksFinished` @ 004c7c40)
 * Signature: uint8_t __stdcall SMBMenuUnlocksFinished(void * arg1, int arg2, int arg3)
 * Calls: `SMBChapter__ResetChapterMusic`
 * Called by: `GSMBMenu__RenderUnlocks`, `GSMBMenu__ShowChapterMap`
 */
/* SMBMenuUnlocksFinished(void*, int, int) */

void SMBMenuUnlocksFinished(void *arg1,int arg2,int arg3)

{
  bRenderingUnlocks = 0;
  if (arg2 != 0) {
    return;
  }
  bMenuTransitioning = 0;
  SMBChapter__ResetChapterMusic((SMBChapter *)(SuperMeatBoy + 0x90));
  return;
}

/* ======================================================================
 * SMBMenuToTitleFromGame  (Ghidra `SMBMenuToTitleFromGame` @ 004c7c70)
 * Signature: uint8_t __stdcall SMBMenuToTitleFromGame(void * arg1)
 * Calls: `ShowTitleMenuPress`, `UserAlertCloseCurrent`
 * Called by: `GSMBMenu__ClickPauseOption`, `GSMBMenu__ClickReplayPauseOption`, `GSMBMenu__ShowBackToTitleMessage`, `SMBMenu_ClickReplayPauseOption`
 */
/* SMBMenuToTitleFromGame(void*) */

void SMBMenuToTitleFromGame(void *arg1)

{
  GSuperMeatBoy__HidePauseMenu((int)SuperMeatBoy);
  ShowTitleMenuPress((tagButtonProps *)0x0,(void *)0x0);
  UserAlertCloseCurrent((void *)0x0);
  return;
}

/* ======================================================================
 * SMBMenuToMapFromGame  (Ghidra `SMBMenuToMapFromGame` @ 004c7ca0)
 * Signature: uint8_t __stdcall SMBMenuToMapFromGame(void * arg1)
 * Calls: `ShowMenuPress`, `UserAlertCloseCurrent`
 * Called by: `GSMBMenu__ClickPauseOption`, `GSMBMenu__ShowBackToMapMessage`
 */
/* SMBMenuToMapFromGame(void*) */

void SMBMenuToMapFromGame(void *arg1)

{
  GSuperMeatBoy__HidePauseMenu((int)SuperMeatBoy);
  ShowMenuPress((tagButtonProps *)0x0,(void *)0x0);
  UserAlertCloseCurrent((void *)0x0);
  return;
}

/* ======================================================================
 * SMBWorldToTitleTransFinished  (Ghidra `SMBWorldToTitleTransFinished` @ 004c7cd0)
 * Signature: uint8_t __stdcall SMBWorldToTitleTransFinished(void * arg1, int arg2, int arg3)
 * Calls: `FlashLibraryInstance__Reset`, `TAudioCue__Play`, `TAudioInstance__IsPlaying`
 * Called by: `GSMBMenu__TransitionOutWorldToTitle`, `SMBWorldMapBackPress`
 */
/* SMBWorldToTitleTransFinished(void*, int, int) */

void SMBWorldToTitleTransFinished(void *arg1,int arg2,int arg3)

{
  uint64_t *puVar1;
  int iVar2;
  
  bMenuTransitioning = 0;
  puVar1 = (uint64_t *)(SMBMenu + 0x7f8);
  *(uint32_t *)(SMBMenu + 0xd04) = 0x10;
  FlashLibraryInstance__Reset((FlashLibraryInstance *)*puVar1);
  iVar2 = TAudioInstance__IsPlaying((TAudioInstance *)titleMusicInstance);
  if (iVar2 != 0) {
    return;
  }
  TAudioCue__Play(pTitleMenuMusic,GLOBALMUSICVOLUME,0,(TAudioInstance *)titleMusicInstance);
  return;
}

/* ======================================================================
 * SMBGameToTitleTransFinished  (Ghidra `SMBGameToTitleTransFinished` @ 004c7d30)
 * Signature: uint8_t __stdcall SMBGameToTitleTransFinished(void * arg1, int arg2, int arg3)
 * Calls: `FlashLibraryInstance__Reset`, `GSuperMeatBoy__SwitchGameMode`, `TAudioCue__Play`, `TAudioInstance__IsPlaying`
 * Called by: `GSMBMenu__TransitionOutGameToTitle`
 */
/* SMBGameToTitleTransFinished(void*, int, int) */

void SMBGameToTitleTransFinished(void *arg1,int arg2,int arg3)

{
  long lVar1;
  int iVar2;
  uint32_t in_register_00000014;
  
  lVar1 = SMBMenu;
  bMenuTransitioning = 0;
  GSuperMeatBoy__SwitchGameMode(SuperMeatBoy,0xc,CONCAT44(in_register_00000014,arg3));
  *(uint32_t *)(lVar1 + 0xd04) = 0x10;
  FlashLibraryInstance__Reset(*(FlashLibraryInstance **)(lVar1 + 0x7f8));
  iVar2 = TAudioInstance__IsPlaying((TAudioInstance *)titleMusicInstance);
  if (iVar2 != 0) {
    return;
  }
  TAudioCue__Play(pTitleMenuMusic,GLOBALMUSICVOLUME,0,(TAudioInstance *)titleMusicInstance);
  return;
}

/* ======================================================================
 * SMBMenuInWorldTrans  (Ghidra `SMBMenuInWorldTrans` @ 004c7da0)
 * Signature: uint8_t __stdcall SMBMenuInWorldTrans(void * arg1, int arg2, int arg3)
 * Calls: `GSMBCutSceneManager__PlayCutScene`, `GSuperMeatBoy__SwitchGameMode`, `SMBMenuEndMenuTransition`
 * Called by: `GSMBMenu__TransitionOutChapter`, `SMBMenuEnterWorld`
 */
/* SMBMenuInWorldTrans(void*, int, int) */

void SMBMenuInWorldTrans(void *arg1,int arg2,int arg3)

{
  uint32_t local_58;
  uint32_t local_54;
  uint32_t local_50;
  uint64_t local_48;
  code *local_40;
  uint64_t local_38;
  uint64_t local_30;
  uint64_t local_28;
  uint32_t local_20;
  uint32_t local_1c;
  uint32_t local_18;
  
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_48 = *(uint64_t *)(SMBMenu + 0x628);
  local_1c = 1;
  local_58 = 0x44200000;
  local_54 = 0x43f00000;
  local_50 = 1;
  local_40 = SMBMenuEndMenuTransition;
  local_18 = 0;
  GSMBCutSceneManager__PlayCutScene(SMBCutSceneManager,(SMBCutScene *)&local_58);
  GSuperMeatBoy__SwitchGameMode(SuperMeatBoy,10);
  return;
}

/* ======================================================================
 * SMBMenuShowLeaderBoard  (Ghidra `SMBMenuShowLeaderBoard` @ 004c7e30)
 * Signature: uint8_t __stdcall SMBMenuShowLeaderBoard(tagButtonProps * arg1, void * arg2)
 * Calls: `GSMBMenu__ShowLeaderboardMenu__004d6eb0`
 * Called by: `GSMBMenu__RestoreControls`
 */
/* SMBMenuShowLeaderBoard(tagButtonProps const*, void*) */

void SMBMenuShowLeaderBoard(tagButtonProps *arg1,void *arg2)

{
  int iVar1;
  
  if ((bMenuTransitioning == 0) && (*(int *)arg1 == 1)) {
    iVar1 = *(int *)(SMBMenu + 0xd04);
    if ((iVar1 != 8) && ((iVar1 != 7 && (bRenderingUnlocks == 0)))) {
      if (((*(int *)(SMBMenu + 0xd00) - 0x62U < 2) ||
          ((*(long *)(SMBMenu + 0xce0) == 0 ||
           ((*(byte *)(*(long *)(SMBMenu + 0xce0) + 2) & 5) != 0)))) &&
         ((iVar1 != 0xf && (iVar1 != 0x11)))) {
        return;
      }
      GSMBMenu__ShowLeaderboardMenu__004d6eb0(SMBMenu);
      return;
    }
  }
  return;
}

/* ======================================================================
 * SMBMenu_DecrementTitleOption  (Ghidra `SMBMenu_DecrementTitleOption` @ 004c7ea0)
 * Signature: uint8_t __stdcall SMBMenu_DecrementTitleOption(tagButtonProps * arg1, void * arg2)
 * Calls: `System_IsTrialMode`
 * Called by: `GSMBMenu__ShowTitleMenu`
 */
/* SMBMenu_DecrementTitleOption(tagButtonProps const*, void*) */

void SMBMenu_DecrementTitleOption(tagButtonProps *arg1,void *arg2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  
  lVar2 = SMBMenu;
  if (((arg1 != (tagButtonProps *)0x0) && (*(int *)arg1 == 1)) &&
     (*(int *)(SMBMenu + 0xd04) == 0xf)) {
    iVar1 = *(int *)(SMBMenu + 0x818);
    iVar4 = iVar1 + -1;
    *(int *)(SMBMenu + 0x818) = iVar4;
    if (iVar4 == 5) {
      iVar3 = System_IsTrialMode();
      iVar4 = *(int *)(lVar2 + 0x818);
      if (iVar3 == 0) {
        iVar4 = iVar4 + -1;
        *(int *)(lVar2 + 0x818) = iVar4;
      }
    }
    if (iVar4 == -1) {
      *(uint32_t *)(lVar2 + 0x818) = 6;
    }
    *(uint32_t *)(*(long *)(lVar2 + 0x838 + (long)iVar1 * 0x20) + 0x20) =
         *(uint32_t *)(lVar2 + 8 + ((long)iVar1 + 0x41) * 0x20);
    *(uint32_t *)(*(long *)(lVar2 + 0x838 + (long)*(int *)(lVar2 + 0x818) * 0x20) + 0x20) =
         *(uint32_t *)(lVar2 + 0xc + ((long)*(int *)(lVar2 + 0x818) + 0x41) * 0x20);
  }
  return;
}

/* ======================================================================
 * SMBMenu_IncrementTitleOption  (Ghidra `SMBMenu_IncrementTitleOption` @ 004c7f70)
 * Signature: uint8_t __stdcall SMBMenu_IncrementTitleOption(tagButtonProps * arg1, void * arg2)
 * Calls: `System_IsTrialMode`
 * Called by: `GSMBMenu__ShowTitleMenu`
 */
/* SMBMenu_IncrementTitleOption(tagButtonProps const*, void*) */

void SMBMenu_IncrementTitleOption(tagButtonProps *arg1,void *arg2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  
  lVar2 = SMBMenu;
  if (((arg1 != (tagButtonProps *)0x0) && (*(int *)arg1 == 1)) &&
     (*(int *)(SMBMenu + 0xd04) == 0xf)) {
    iVar1 = *(int *)(SMBMenu + 0x818);
    iVar4 = iVar1 + 1;
    *(int *)(SMBMenu + 0x818) = iVar4;
    if (iVar4 == 5) {
      iVar3 = System_IsTrialMode();
      iVar4 = *(int *)(lVar2 + 0x818);
      if (iVar3 == 0) {
        iVar4 = iVar4 + 1;
        *(int *)(lVar2 + 0x818) = iVar4;
      }
    }
    if (iVar4 == 7) {
      *(uint32_t *)(lVar2 + 0x818) = 0;
    }
    *(uint32_t *)(*(long *)(lVar2 + 0x838 + (long)iVar1 * 0x20) + 0x20) =
         *(uint32_t *)(lVar2 + 8 + ((long)iVar1 + 0x41) * 0x20);
    *(uint32_t *)(*(long *)(lVar2 + 0x838 + (long)*(int *)(lVar2 + 0x818) * 0x20) + 0x20) =
         *(uint32_t *)(lVar2 + 0xc + ((long)*(int *)(lVar2 + 0x818) + 0x41) * 0x20);
  }
  return;
}

/* ======================================================================
 * SMBMenu_DecrementPauseOption  (Ghidra `SMBMenu_DecrementPauseOption` @ 004c8040)
 * Signature: uint8_t __stdcall SMBMenu_DecrementPauseOption(tagButtonProps * arg1, void * arg2)
 * Calls: `System_IsTrialMode`
 * Called by: `GSMBMenu__ShowPauseMenu`, `ShowPauseMenu`
 */
/* SMBMenu_DecrementPauseOption(tagButtonProps const*, void*) */

void SMBMenu_DecrementPauseOption(tagButtonProps *arg1,void *arg2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  
  lVar2 = SMBMenu;
  if ((arg1 != (tagButtonProps *)0x0) && (*(int *)arg1 == 1)) {
    iVar1 = *(int *)(SMBMenu + 0x81c);
    iVar4 = iVar1 + -1;
    *(int *)(SMBMenu + 0x81c) = iVar4;
    if (iVar4 == 3) {
      iVar3 = System_IsTrialMode();
      iVar4 = *(int *)(lVar2 + 0x81c);
      if (iVar3 == 0) {
        iVar4 = iVar4 + -1;
        *(int *)(lVar2 + 0x81c) = iVar4;
      }
    }
    if (iVar4 == -1) {
      *(uint32_t *)(lVar2 + 0x81c) = 6;
    }
    *(uint32_t *)(*(long *)(lVar2 + 0x918 + (long)iVar1 * 0x20) + 0x20) =
         *(uint32_t *)(lVar2 + 8 + ((long)iVar1 + 0x48) * 0x20);
    *(uint32_t *)(*(long *)(lVar2 + 0x918 + (long)*(int *)(lVar2 + 0x81c) * 0x20) + 0x20) =
         *(uint32_t *)(lVar2 + 0xc + ((long)*(int *)(lVar2 + 0x81c) + 0x48) * 0x20);
    return;
  }
  return;
}

/* ======================================================================
 * SMBMenu_IncrementPauseOption  (Ghidra `SMBMenu_IncrementPauseOption` @ 004c8110)
 * Signature: uint8_t __stdcall SMBMenu_IncrementPauseOption(tagButtonProps * arg1, void * arg2)
 * Calls: `System_IsTrialMode`
 * Called by: `GSMBMenu__ShowPauseMenu`, `ShowPauseMenu`
 */
/* SMBMenu_IncrementPauseOption(tagButtonProps const*, void*) */

void SMBMenu_IncrementPauseOption(tagButtonProps *arg1,void *arg2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  
  lVar2 = SMBMenu;
  if ((arg1 != (tagButtonProps *)0x0) && (*(int *)arg1 == 1)) {
    iVar1 = *(int *)(SMBMenu + 0x81c);
    iVar4 = iVar1 + 1;
    *(int *)(SMBMenu + 0x81c) = iVar4;
    if (iVar4 == 3) {
      iVar3 = System_IsTrialMode();
      iVar4 = *(int *)(lVar2 + 0x81c);
      if (iVar3 == 0) {
        iVar4 = iVar4 + 1;
        *(int *)(lVar2 + 0x81c) = iVar4;
      }
    }
    if (iVar4 == 7) {
      *(uint32_t *)(lVar2 + 0x81c) = 0;
    }
    *(uint32_t *)(*(long *)(lVar2 + 0x918 + (long)iVar1 * 0x20) + 0x20) =
         *(uint32_t *)(lVar2 + 8 + ((long)iVar1 + 0x48) * 0x20);
    *(uint32_t *)(*(long *)(lVar2 + 0x918 + (long)*(int *)(lVar2 + 0x81c) * 0x20) + 0x20) =
         *(uint32_t *)(lVar2 + 0xc + ((long)*(int *)(lVar2 + 0x81c) + 0x48) * 0x20);
    return;
  }
  return;
}

/* ======================================================================
 * SMBMenuInMenuFromGame  (Ghidra `SMBMenuInMenuFromGame` @ 004c81e0)
 * Signature: uint8_t __stdcall SMBMenuInMenuFromGame(void * arg1, int arg2, int arg3)
 * Calls: `DisableLoadingRenderThread`, `EnableLoadingRenderThread`, `GSMBCutSceneManager__PlayCutScene`, `GSuperMeatBoy__Freeze`, `GSuperMeatBoy__SwitchGameMode`, `Loader__WaitAll`, `RenderLoadingScreenFunc`, `SMBMenuEndMenuTransition`
 * Called by: `GSMBMenu__TransitionInMenuFromGame`
 */
/* SMBMenuInMenuFromGame(void*, int, int) */

void SMBMenuInMenuFromGame(void *arg1,int arg2,int arg3)

{
  uint32_t local_58;
  uint32_t local_54;
  uint32_t local_50;
  uint64_t local_48;
  code *local_40;
  uint64_t local_38;
  uint64_t local_30;
  uint64_t local_28;
  uint32_t local_20;
  uint32_t local_1c;
  uint32_t local_18;
  
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_48 = *(uint64_t *)(SMBMenu + 0x618);
  local_1c = 1;
  local_58 = 0x44200000;
  local_54 = 0x43f00000;
  local_50 = 1;
  local_40 = SMBMenuEndMenuTransition;
  local_18 = 0;
  GSMBCutSceneManager__PlayCutScene(SMBCutSceneManager,(SMBCutScene *)&local_58);
  EnableLoadingRenderThread(RenderLoadingScreenFunc);
  GSuperMeatBoy__SwitchGameMode(SuperMeatBoy);
  Loader__WaitAll();
  DisableLoadingRenderThread();
  GSuperMeatBoy__Freeze(SuperMeatBoy,0);
  return;
}

/* ======================================================================
 * SMBChapterEndIdleFinished  (Ghidra `SMBChapterEndIdleFinished` @ 004c82a0)
 * Signature: uint8_t __stdcall SMBChapterEndIdleFinished(void * arg1, int arg2, int arg3)
 * Calls: `GSMBCutSceneManager__PlayCutScene`, `GSuperMeatBoy__Freeze`, `GSuperMeatBoy__SwitchGameMode`, `SMBMenuTransitionFinished`, `TAudioInstance__Stop`
 * Called by: `SMBChapterEndInFinished`
 */
/* SMBChapterEndIdleFinished(void*, int, int) */

void SMBChapterEndIdleFinished(void *arg1,int arg2,int arg3)

{
  long lVar1;
  uint32_t local_58;
  uint32_t local_54;
  uint32_t local_50;
  uint64_t local_48;
  code *local_40;
  uint64_t local_38;
  uint64_t local_30;
  uint64_t local_28;
  uint32_t local_20;
  uint32_t local_1c;
  uint32_t local_18;
  
  lVar1 = SMBMenu;
  if (arg3 != 0) {
    TAudioInstance__Stop((TAudioInstance *)titleMusicInstance);
    GSuperMeatBoy__SwitchGameMode(SuperMeatBoy,9);
    return;
  }
  TAudioInstance__Stop((TAudioInstance *)titleMusicInstance);
  GSuperMeatBoy__SwitchGameMode(SuperMeatBoy,9);
  local_48 = *(uint64_t *)(lVar1 + 0x1178);
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 1;
  local_54 = 0x43f00000;
  local_58 = 0x44200000;
  local_50 = 1;
  local_40 = SMBMenuTransitionFinished;
  local_18 = 0;
  GSMBCutSceneManager__PlayCutScene(SMBCutSceneManager,(SMBCutScene *)&local_58);
  GSuperMeatBoy__Freeze(SuperMeatBoy,0);
  return;
}

/* ======================================================================
 * FindCachedInternetsChapter  (Ghidra `FindCachedInternetsChapter` @ 004c8380)
 * Signature: uint8_t __stdcall FindCachedInternetsChapter(char * arg1)
 * Calls: `strcmp`
 * Called by: (none)
 */
/* FindCachedInternetsChapter(char const*) */

void FindCachedInternetsChapter(char *arg1)

{
  char *__s2;
  uint64_t uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = pInternetsChapters._56_8_;
  pCurrInternetsChapter = (char *)0x0;
  uVar4 = (uint)(ushort)pInternetsChapters._40_2_;
  if (uVar4 != 0) {
    uVar3 = 0;
    do {
      __s2 = *(char **)(uVar1 + (ulong)(uVar3 & 0xffff) * 8);
      iVar2 = strcmp(arg1,__s2);
      if (iVar2 == 0) {
        pCurrInternetsChapter = __s2;
        return;
      }
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < (int)uVar4);
  }
  return;
}

/* ======================================================================
 * IsLeaderboardLevel  (Ghidra `IsLeaderboardLevel` @ 004c83e0)
 * Signature: uint8_t __stdcall IsLeaderboardLevel(int arg1)
 * Calls: (none)
 * Called by: (none)
 */
/* IsLeaderboardLevel(int) */

bool IsLeaderboardLevel(int arg1)

{
  return 1 < arg1 - 0x62U;
}

/* ======================================================================
 * SetupMenuIconTween  (Ghidra `SetupMenuIconTween` @ 004c83f0)
 * Signature: uint8_t __stdcall SetupMenuIconTween(FPUVector * arg1, FPUVector * arg2, Basic * arg3)
 * Calls: (none)
 * Called by: `GSMBMenu__MoveToDownLevel`, `GSMBMenu__MoveToLeftLevel`, `GSMBMenu__MoveToRightLevel`, `GSMBMenu__MoveToUpLevel`, `GSMBMenu__SetSelectedLevel`, `GSMBMenu__ShowChapterMap`, `GSMBMenu__TransitionInReloadChapter`
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SetupMenuIconTween(FPUVector const&, FPUVector const&, Tweening__Basic_FPUVector&) */

void SetupMenuIconTween(FPUVector *arg1,FPUVector *arg2,Basic *arg3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar4 = *(float *)(arg2 + 0xc) + _DAT_0081bf2c /* R:0.0f */;
  fVar5 = *(float *)(arg2 + 8) + _DAT_0081bf28 /* R:2.2420775429197073e-44f */;
  fVar6 = *(float *)(arg2 + 4) + _DAT_0081bf24 /* R:0.0f */;
  fVar3 = _DAT_0081bf28 /* R:2.2420775429197073e-44f */ + *(float *)(arg1 + 8);
  fVar2 = _DAT_0081bf24 /* R:0.0f */ + *(float *)(arg1 + 4);
  fVar7 = *(float *)arg2 + vChapterMenuMeatBoyOffset;
  fVar1 = vChapterMenuMeatBoyOffset + *(float *)arg1;
  *(float *)(arg3 + 0x1c) = _DAT_0081bf2c /* R:0.0f */ + *(float *)(arg1 + 0xc);
  *(float *)(arg3 + 0x24) = fVar6;
  *(float *)(arg3 + 0x28) = fVar5;
  *(float *)(arg3 + 0x18) = fVar3;
  *(float *)(arg3 + 0x14) = fVar2;
  *(float *)(arg3 + 0x20) = fVar7;
  *(float *)(arg3 + 0x10) = fVar1;
  *(float *)(arg3 + 0x2c) = fVar4;
                    /* WARNING: Could not recover jumptable at 0x004c847d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)arg3 + 0x10))(arg3,1);
  return;
}

/* ======================================================================
 * EnterTitleMenu  (Ghidra `EnterTitleMenu` @ 004c8480)
 * Signature: uint8_t EnterTitleMenu(void)
 * Calls: `GSMBChapterData__LoadData`, `GSMBChapterData__ResetData`, `GSuperMeatBoy__SwitchGameMode`, `TAudio__SetMusicVolume`, `TPlayer__GetProfile`
 * Called by: `GSMBMenu__Update`, `SMBMenu_StartMenuStart`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* EnterTitleMenu() */

void EnterTitleMenu(void)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  uint32_t local_18 [2];
  uint32_t *local_10;
  
  plVar3 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
  (**(code **)(*plVar3 + 0x30))(plVar3,0);
  GSMBChapterData__ResetData(SMBChapterData);
  GSMBChapterData__LoadData(SMBChapterData,1);
  GSuperMeatBoy__SwitchGameMode(SuperMeatBoy,0xc);
  bEnterTitleMenu = 0;
  local_18[0] = 2;
  *(uint32_t *)(SMBMenu + 0xd04) = 0xc;
  local_10 = operator_new__(0x10);
  *local_10 = 0;
  local_10[2] = 1;
  GLOBALMUSICVOLUME = GLOBALDEFAULTMUSICVOLUME;
  GLOBALSFXVOLUME = GLOBALDEFAULTSFXVOLUME;
  plVar3 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
  (**(code **)(*plVar3 + 0xa0))(plVar3,local_18);
  uVar1 = local_10[1];
  if (((uVar1 != 0xffffffff) && (GLOBALMUSICVOLUME = 100, (int)uVar1 < 100)) &&
     (GLOBALMUSICVOLUME = 0, -1 < (int)uVar1)) {
    GLOBALMUSICVOLUME = uVar1;
  }
  iVar2 = local_10[3];
  if (((iVar2 != -1) && (GLOBALSFXVOLUME = 100, iVar2 < 100)) && (GLOBALSFXVOLUME = 0, -1 < iVar2))
  {
    GLOBALSFXVOLUME = iVar2;
  }
  TAudio__SetMusicVolume(Audio,GLOBALMUSICVOLUME);
  if (local_10 != (uint32_t *)0x0) {
    operator_delete__(local_10);
  }
  return;
}

/* ======================================================================
 * SMBMenu_StartMenuStart  (Ghidra `SMBMenu_StartMenuStart` @ 004c85c0)
 * Signature: uint8_t __stdcall SMBMenu_StartMenuStart(tagButtonProps * arg1, void * arg2)
 * Calls: `EnterTitleMenu`, `Joystick__Reset`, `SMBProfileInitialized`, `TPlayer__GetJoystick`, `TPlayer__GetProfile`
 * Called by: `GSMBMenu__RestoreStartGameControls`, `GSMBMenu__ShowStartMenu`
 */
/* SMBMenu_StartMenuStart(tagButtonProps const*, void*) */

void SMBMenu_StartMenuStart(tagButtonProps *arg1,void *arg2)

{
  long lVar1;
  long *plVar2;
  Joystick *pJVar3;
  
  if (*(int *)arg1 != 1) {
    return;
  }
  lVar1 = TPlayer__GetProfile((TPlayer *)Players__Player);
  if (*(int *)(lVar1 + 8) != 1) {
    plVar2 = (long *)TPlayer__GetProfile((TPlayer *)Players__Player);
                    /* WARNING: Could not recover jumptable at 0x004c8601. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x10))(plVar2,0,0,SMBProfileInitialized,*(code **)(*plVar2 + 0x10));
    return;
  }
  pJVar3 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__Reset(pJVar3);
  pJVar3 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__Reset(pJVar3);
  pJVar3 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__Reset(pJVar3);
  pJVar3 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__Reset(pJVar3);
  EnterTitleMenu();
  return;
}

/* ======================================================================
 * SMBMenuUnlockAll  (Ghidra `SMBMenuUnlockAll` @ 004c8660)
 * Signature: uint8_t __stdcall SMBMenuUnlockAll(tagButtonProps * arg1, void * arg2)
 * Calls: (none)
 * Called by: (none)
 */
/* SMBMenuUnlockAll(tagButtonProps const*, void*) */

void SMBMenuUnlockAll(tagButtonProps *arg1,void *arg2)

{
  bAutoUnlock = (uint)(*(int *)arg1 == 2);
  return;
}

/* ======================================================================
 * DetermineMenuButtons  (Ghidra `DetermineMenuButtons` @ 004c8670)
 * Signature: uint8_t __stdcall DetermineMenuButtons(FlashAnimationLibrary * arg1, FlashLibraryInstance * arg2, char * arg3)
 * Calls: `FlashAnimationLibrary__GetClipIndex`, `FlashAnimationLibrary__GetLibraryEntry`, `FlashLibraryInstance__GotoAndStop`, `FlashMovieClip__FindInstance`, `TPlayer__GetJoystick`
 * Called by: (none)
 */
/* DetermineMenuButtons(FlashAnimationLibrary*, FlashLibraryInstance*, char const*) */

void DetermineMenuButtons
               (FlashAnimationLibrary *arg1,FlashLibraryInstance *arg2,char *arg3)

{
  int *piVar1;
  int iVar2;
  FlashMovieClip *self;
  FlashLibraryInstance *this_00;
  
  if (((arg2 != (FlashLibraryInstance *)0x0) && (*(int *)(arg2 + 0x20) != -1)) &&
     (arg1 != (FlashAnimationLibrary *)0x0)) {
    self = (FlashMovieClip *)
           FlashAnimationLibrary__GetLibraryEntry(arg1,*(int *)(arg2 + 0x20));
    if (self != (FlashMovieClip *)0x0) {
      iVar2 = FlashAnimationLibrary__GetClipIndex(arg1,arg3);
      this_00 = (FlashLibraryInstance *)FlashMovieClip__FindInstance(self,iVar2,0,(int *)0x0,0);
      if (this_00 != (FlashLibraryInstance *)0x0) {
        piVar1 = (int *)TPlayer__GetJoystick((TPlayer *)Players__Player);
        iVar2 = 2;
        if (*piVar1 != 1) {
          iVar2 = 1;
        }
        FlashLibraryInstance__GotoAndStop(this_00,iVar2);
        return;
      }
    }
  }
  return;
}

/* ======================================================================
 * SwitchOutMenuButtons  (Ghidra `SwitchOutMenuButtons` @ 004c8720)
 * Signature: uint8_t __stdcall SwitchOutMenuButtons(FlashAnimationLibrary * arg1, FlashLibraryInstance * arg2)
 * Calls: `FlashAnimationLibrary__GetClipIndex`, `FlashAnimationLibrary__GetLibraryEntry`, `FlashLibraryInstance__GotoAndStop`, `FlashMovieClip__FindInstance`, `TPlayer__GetJoystick`
 * Called by: `GMeatHUD__Render`, `GSMBMenu__Render`, `SMBLeaderBoardMenu__Render`, `SMBMessageRender`, `SMBPopupMenu__Render`
 */
/* SwitchOutMenuButtons(FlashAnimationLibrary*, FlashLibraryInstance*) */

void SwitchOutMenuButtons(FlashAnimationLibrary *arg1,FlashLibraryInstance *arg2)

{
  int *piVar1;
  int iVar2;
  FlashMovieClip *pFVar3;
  FlashLibraryInstance *pFVar4;
  
  if (arg2 == (FlashLibraryInstance *)0x0) {
    return;
  }
  if (*(int *)(arg2 + 0x20) == -1) {
    return;
  }
  if (arg1 == (FlashAnimationLibrary *)0x0) {
    return;
  }
  pFVar3 = (FlashMovieClip *)
           FlashAnimationLibrary__GetLibraryEntry(arg1,*(int *)(arg2 + 0x20));
  if (pFVar3 == (FlashMovieClip *)0x0) {
LAB_004c879b:
    iVar2 = *(int *)(arg2 + 0x20);
  }
  else {
    iVar2 = FlashAnimationLibrary__GetClipIndex(arg1,"buttony");
    pFVar4 = (FlashLibraryInstance *)FlashMovieClip__FindInstance(pFVar3,iVar2,0,(int *)0x0,0);
    if (pFVar4 == (FlashLibraryInstance *)0x0) goto LAB_004c879b;
    piVar1 = (int *)TPlayer__GetJoystick((TPlayer *)Players__Player);
    if (*piVar1 != 1) {
      FlashLibraryInstance__GotoAndStop(pFVar4,1);
      goto LAB_004c879b;
    }
    FlashLibraryInstance__GotoAndStop(pFVar4,2);
    iVar2 = *(int *)(arg2 + 0x20);
  }
  if (iVar2 == -1) {
    return;
  }
  pFVar3 = (FlashMovieClip *)FlashAnimationLibrary__GetLibraryEntry(arg1,iVar2);
  if (pFVar3 == (FlashMovieClip *)0x0) {
LAB_004c87fd:
    iVar2 = *(int *)(arg2 + 0x20);
  }
  else {
    iVar2 = FlashAnimationLibrary__GetClipIndex(arg1,"buttona");
    pFVar4 = (FlashLibraryInstance *)FlashMovieClip__FindInstance(pFVar3,iVar2,0,(int *)0x0,0);
    if (pFVar4 == (FlashLibraryInstance *)0x0) goto LAB_004c87fd;
    piVar1 = (int *)TPlayer__GetJoystick((TPlayer *)Players__Player);
    if (*piVar1 != 1) {
      FlashLibraryInstance__GotoAndStop(pFVar4,1);
      goto LAB_004c87fd;
    }
    FlashLibraryInstance__GotoAndStop(pFVar4,2);
    iVar2 = *(int *)(arg2 + 0x20);
  }
  if (iVar2 == -1) {
    return;
  }
  pFVar3 = (FlashMovieClip *)FlashAnimationLibrary__GetLibraryEntry(arg1,iVar2);
  if (pFVar3 == (FlashMovieClip *)0x0) {
LAB_004c885f:
    iVar2 = *(int *)(arg2 + 0x20);
  }
  else {
    iVar2 = FlashAnimationLibrary__GetClipIndex(arg1,"buttonax");
    pFVar4 = (FlashLibraryInstance *)FlashMovieClip__FindInstance(pFVar3,iVar2,0,(int *)0x0,0);
    if (pFVar4 == (FlashLibraryInstance *)0x0) goto LAB_004c885f;
    piVar1 = (int *)TPlayer__GetJoystick((TPlayer *)Players__Player);
    if (*piVar1 != 1) {
      FlashLibraryInstance__GotoAndStop(pFVar4,1);
      goto LAB_004c885f;
    }
    FlashLibraryInstance__GotoAndStop(pFVar4,2);
    iVar2 = *(int *)(arg2 + 0x20);
  }
  if (iVar2 == -1) {
    return;
  }
  pFVar3 = (FlashMovieClip *)FlashAnimationLibrary__GetLibraryEntry(arg1,iVar2);
  if (pFVar3 != (FlashMovieClip *)0x0) {
    iVar2 = FlashAnimationLibrary__GetClipIndex(arg1,"buttonb");
    pFVar4 = (FlashLibraryInstance *)FlashMovieClip__FindInstance(pFVar3,iVar2,0,(int *)0x0,0);
    if (pFVar4 != (FlashLibraryInstance *)0x0) {
      piVar1 = (int *)TPlayer__GetJoystick((TPlayer *)Players__Player);
      if (*piVar1 == 1) {
        FlashLibraryInstance__GotoAndStop(pFVar4,2);
        iVar2 = *(int *)(arg2 + 0x20);
        goto LAB_004c88c4;
      }
      FlashLibraryInstance__GotoAndStop(pFVar4,1);
    }
  }
  iVar2 = *(int *)(arg2 + 0x20);
LAB_004c88c4:
  if ((iVar2 != -1) &&
     (pFVar3 = (FlashMovieClip *)FlashAnimationLibrary__GetLibraryEntry(arg1,iVar2),
     pFVar3 != (FlashMovieClip *)0x0)) {
    iVar2 = FlashAnimationLibrary__GetClipIndex(arg1,"dwbutton");
    pFVar4 = (FlashLibraryInstance *)FlashMovieClip__FindInstance(pFVar3,iVar2,0,(int *)0x0,0);
    if (pFVar4 != (FlashLibraryInstance *)0x0) {
      piVar1 = (int *)TPlayer__GetJoystick((TPlayer *)Players__Player);
      iVar2 = 2;
      if (*piVar1 != 1) {
        iVar2 = 1;
      }
      FlashLibraryInstance__GotoAndStop(pFVar4,iVar2);
      return;
    }
  }
  return;
}

/* ======================================================================
 * SetMenuProperties  (Ghidra `SetMenuProperties` @ 004c8990)
 * Signature: uint8_t __stdcall SetMenuProperties(int arg1, FlashAnimationLibrary * arg2, FlashLibraryEntry * arg3, MenuSelection * arg4, MenuEntryProps * arg5)
 * Calls: `FlashAnimationLibrary__GetClipIndex`, `FlashAnimationLibrary__GetTextField`, `FlashMovieClip__FindInstance`
 * Called by: `GSMBMenu__GSMBMenu__004d8690`
 */
/* SetMenuProperties(int, FlashAnimationLibrary*, FlashLibraryEntry*, MenuSelection*, MenuEntryProps
   const*) */

void SetMenuProperties(int arg1,FlashAnimationLibrary *arg2,FlashLibraryEntry *arg3,
                      MenuSelection *arg4,MenuEntryProps *arg5)

{
  MenuSelection *pMVar1;
  MenuEntryProps *pMVar2;
  int iVar3;
  long lVar4;
  uint64_t uVar5;
  
  pMVar1 = arg4 + (long)arg1 * 0x20;
  pMVar2 = arg5 + (long)arg1 * 0x18;
  iVar3 = FlashAnimationLibrary__GetClipIndex(arg2,*(char **)(pMVar2 + 8));
  *(int *)pMVar1 = iVar3;
  iVar3 = FlashAnimationLibrary__GetClipIndex(arg2,*(char **)pMVar2);
  *(int *)(pMVar1 + 4) = iVar3;
  lVar4 = FlashMovieClip__FindInstance((FlashMovieClip *)arg3,*(int *)pMVar1,0,(int *)0x0,0);
  iVar3 = *(int *)(lVar4 + 0x34);
  *(long *)(pMVar1 + 0x10) = lVar4;
  *(int *)(pMVar1 + 8) = iVar3;
  uVar5 = FlashAnimationLibrary__GetTextField(arg2,*(char **)(pMVar2 + 0x10));
  *(uint64_t *)(pMVar1 + 0x18) = uVar5;
  return;
}

/* ======================================================================
 * SMBMenuMoveRightChar  (Ghidra `SMBMenuMoveRightChar` @ 004c9a60)
 * Signature: uint8_t __stdcall SMBMenuMoveRightChar(tagButtonProps * arg1, void * arg2)
 * Calls: `GSMBMenu__SetCharSilouetteText`
 * Called by: `GSMBMenu__ShowCharMenu`, `SMBMenuTransitionInCharMenu`
 */
/* SMBMenuMoveRightChar(tagButtonProps const*, void*) */

ulong SMBMenuMoveRightChar(tagButtonProps *arg1,void *arg2)

{
  uint uVar1;
  GSMBMenu *self;
  int iVar2;
  ulong uVar3;
  
  self = SMBMenu;
  uVar1 = *(uint *)arg1;
  uVar3 = (ulong)uVar1;
  if (uVar1 != 1) {
    if (uVar1 != 2) {
      return uVar3;
    }
    uVar1 = *(uint *)(arg1 + 4);
    uVar3 = (ulong)uVar1 * 0x51eb851f & 0xffffffff;
    if (uVar1 != (uVar1 / 100) * 100) {
      return uVar3;
    }
  }
  if (currCharMoveState != 2) {
    return uVar3;
  }
  iVar2 = *(int *)(SMBMenu + 0xd08) + 1;
  if ((int)(*(ushort *)(SMBMenu + 0xbe8) - 1) < iVar2) {
    iVar2 = 0;
  }
  else if (iVar2 < 0) {
    iVar2 = *(ushort *)(SMBMenu + 0xbe8) - 1;
  }
  *(int *)(SMBMenu + 0xd08) = iVar2;
  currCharMoveState = 1;
  *(uint32_t *)(*(long *)(self + 0x748) + 0x20) = *(uint32_t *)(self + 0x764);
  *(uint32_t *)(*(long *)(self + 0x678) + 0x58) = 0;
  uVar3 = GSMBMenu__SetCharSilouetteText(self);
  return uVar3;
}

/* ======================================================================
 * SMBMenuMoveLeftChar  (Ghidra `SMBMenuMoveLeftChar` @ 004c9b00)
 * Signature: uint8_t __stdcall SMBMenuMoveLeftChar(tagButtonProps * arg1, void * arg2)
 * Calls: `GSMBMenu__SetCharSilouetteText`
 * Called by: `GSMBMenu__ShowCharMenu`, `SMBMenuTransitionInCharMenu`
 */
/* SMBMenuMoveLeftChar(tagButtonProps const*, void*) */

ulong SMBMenuMoveLeftChar(tagButtonProps *arg1,void *arg2)

{
  uint uVar1;
  GSMBMenu *self;
  int iVar2;
  ulong uVar3;
  
  self = SMBMenu;
  uVar1 = *(uint *)arg1;
  uVar3 = (ulong)uVar1;
  if (uVar1 != 1) {
    if (uVar1 != 2) {
      return uVar3;
    }
    uVar1 = *(uint *)(arg1 + 4);
    uVar3 = (ulong)uVar1 * 0x51eb851f & 0xffffffff;
    if (uVar1 != (uVar1 / 100) * 100) {
      return uVar3;
    }
  }
  if (currCharMoveState != 2) {
    return uVar3;
  }
  iVar2 = *(int *)(SMBMenu + 0xd08) + -1;
  if ((int)(*(ushort *)(SMBMenu + 0xbe8) - 1) < iVar2) {
    iVar2 = 0;
  }
  else if (iVar2 < 0) {
    iVar2 = *(ushort *)(SMBMenu + 0xbe8) - 1;
  }
  *(int *)(SMBMenu + 0xd08) = iVar2;
  currCharMoveState = 0;
  *(uint32_t *)(*(long *)(self + 0x748) + 0x20) = *(uint32_t *)(self + 0x760);
  *(uint32_t *)(*(long *)(self + 0x678) + 0x58) = 0;
  uVar3 = GSMBMenu__SetCharSilouetteText(self);
  return uVar3;
}

/* ======================================================================
 * SMBMenuInChapterTrans  (Ghidra `SMBMenuInChapterTrans` @ 004ccae0)
 * Signature: uint8_t __stdcall SMBMenuInChapterTrans(void * arg1, int arg2, int arg3)
 * Calls: `GSMBMenu__TransitionInChapter`
 * Called by: `GSMBMenu__TransitionOutWorld`, `GSMBMenu__Update`
 */
/* SMBMenuInChapterTrans(void*, int, int) */

void SMBMenuInChapterTrans(void *arg1,int arg2,int arg3)

{
  GSMBMenu__TransitionInChapter(SMBMenu);
  return;
}

/* ======================================================================
 * LoadWorldMenu  (Ghidra `LoadWorldMenu` @ 004ccc40)
 * Signature: uint8_t __stdcall LoadWorldMenu(tagChapterName arg1, int arg2)
 * Calls: `FlashAnimationLibrary__FlashAnimationLibrary__00576680`, `FlashAnimationLibrary__GetClipIndex`, `FlashAnimationLibrary__GetLibraryEntry`, `FlashAnimationLibrary__GetMovieClip__005731d0`, `FlashAnimationLibrary__GetTextField`, `FlashMovieClip__FindInstance`, `FormatResourcePath`, `GetLocalizedText`, `System_IsTrialMode`, `operator_new`
 * Called by: `GSMBMenu__ShowWorldMap`
 */
/* WARNING: Removing unreachable block (ram,0x004cd2a4) */
/* GSMBMenu__LoadWorldMenu(tagChapterName, int) */

void GSMBMenu__LoadWorldMenu(GSMBMenu *arg1,int arg2)

{
  int *piVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  uint64_t uVar8;
  long *plVar9;
  FlashMovieClip *self;
  long lVar10;
  wchar_t *pwVar11;
  char *pcVar12;
  FlashAnimationLibrary *pFVar13;
  float fVar14;
  float fVar15;
  uint8_t *local_38 [3];
  
  local_38[0] = &DAT_008184c8 /* R:0.00016803004837129265f */;
  if (*(int *)(arg1 + 0x41c) != 0) {
    if ((*(int *)(arg1 + 0x41c) != arg2) && (hChapterLoadThreadHandle == 0)) {
      UnloadWorldMenu(arg1);
    }
    if (arg2 != 7) goto LAB_004ccc82;
    uVar8 = FlashAnimationLibrary__GetMovieClip__005731d0
                      (*(FlashAnimationLibrary **)(arg1 + 0x4c8),"idle2");
    *(uint64_t *)(arg1 + 0x4d0) = uVar8;
    uVar8 = FlashAnimationLibrary__GetMovieClip__005731d0
                      (*(FlashAnimationLibrary **)(arg1 + 0x4c8),"levelselect2");
    *(uint64_t *)(arg1 + 0x4d8) = uVar8;
    arg2 = 7;
switchD_004ccf73_caseD_7:
    pcVar12 = (char *)FormatResourcePath("/Menus/bworldmenu.am",local_38);
    pFVar13 = operator_new(0xb0);
                    /* try { // try from 004ccfd3 to 004ccfd7 has its CatchHandler @ 004cd2c6 */
    FlashAnimationLibrary__FlashAnimationLibrary__00576680(pFVar13,pcVar12);
    *(FlashAnimationLibrary **)(arg1 + 0x428) = pFVar13;
                    /* try { // try from 004ccfe4 to 004cd069 has its CatchHandler @ 004cd2d2 */
    uVar8 = GetLocalizedText(0x101);
    goto LAB_004ccff0;
  }
  iVar7 = System_IsTrialMode();
  arg2 = 1;
  if (iVar7 == 1) {
    arg2 = 8;
  }
LAB_004ccc82:
                    /* try { // try from 004ccc8e to 004ccfc9 has its CatchHandler @ 004cd2d2 */
  uVar8 = FlashAnimationLibrary__GetMovieClip__005731d0(*(FlashAnimationLibrary **)(arg1 + 0x4c8),"idle");
  *(uint64_t *)(arg1 + 0x4d0) = uVar8;
  uVar8 = FlashAnimationLibrary__GetMovieClip__005731d0
                    (*(FlashAnimationLibrary **)(arg1 + 0x4c8),"levelselect");
  *(uint64_t *)(arg1 + 0x4d8) = uVar8;
  switch(arg2) {
  default:
    goto switchD_004ccf73_caseD_0;
  case 1:
    pcVar12 = (char *)FormatResourcePath("/Menus/worldmenu.am",local_38);
    pFVar13 = operator_new(0xb0);
                    /* try { // try from 004cd243 to 004cd247 has its CatchHandler @ 004cd287 */
    FlashAnimationLibrary__FlashAnimationLibrary__00576680(pFVar13,pcVar12);
    *(FlashAnimationLibrary **)(arg1 + 0x428) = pFVar13;
                    /* try { // try from 004cd254 to 004cd258 has its CatchHandler @ 004cd2d2 */
    uVar8 = GetLocalizedText(0xfb);
    break;
  case 2:
    pcVar12 = (char *)FormatResourcePath("/Menus/hworldmenu.am",local_38);
    pFVar13 = operator_new(0xb0);
                    /* try { // try from 004cd203 to 004cd207 has its CatchHandler @ 004cd2a2 */
    FlashAnimationLibrary__FlashAnimationLibrary__00576680(pFVar13,pcVar12);
    *(FlashAnimationLibrary **)(arg1 + 0x428) = pFVar13;
                    /* try { // try from 004cd214 to 004cd239 has its CatchHandler @ 004cd2d2 */
    uVar8 = GetLocalizedText(0xfc);
    break;
  case 3:
    pcVar12 = (char *)FormatResourcePath("/Menus/fworldmenu.am",local_38);
    pFVar13 = operator_new(0xb0);
                    /* try { // try from 004cd1c3 to 004cd1c7 has its CatchHandler @ 004cd2af */
    FlashAnimationLibrary__FlashAnimationLibrary__00576680(pFVar13,pcVar12);
    *(FlashAnimationLibrary **)(arg1 + 0x428) = pFVar13;
                    /* try { // try from 004cd1d4 to 004cd1f9 has its CatchHandler @ 004cd2d2 */
    uVar8 = GetLocalizedText(0xfd);
    break;
  case 4:
    pcVar12 = (char *)FormatResourcePath("/Menus/hellworldmenu.am",local_38);
    pFVar13 = operator_new(0xb0);
                    /* try { // try from 004cd183 to 004cd187 has its CatchHandler @ 004cd2b2 */
    FlashAnimationLibrary__FlashAnimationLibrary__00576680(pFVar13,pcVar12);
    *(FlashAnimationLibrary **)(arg1 + 0x428) = pFVar13;
                    /* try { // try from 004cd194 to 004cd1b9 has its CatchHandler @ 004cd2d2 */
    uVar8 = GetLocalizedText(0xfe);
    break;
  case 5:
    pcVar12 = (char *)FormatResourcePath("/Menus/rworldmenu.am",local_38);
    pFVar13 = operator_new(0xb0);
                    /* try { // try from 004cd143 to 004cd147 has its CatchHandler @ 004cd2b4 */
    FlashAnimationLibrary__FlashAnimationLibrary__00576680(pFVar13,pcVar12);
    *(FlashAnimationLibrary **)(arg1 + 0x428) = pFVar13;
                    /* try { // try from 004cd154 to 004cd179 has its CatchHandler @ 004cd2d2 */
    uVar8 = GetLocalizedText(0xff);
    break;
  case 6:
    pcVar12 = (char *)FormatResourcePath("/Menus/eworldmenu.am",local_38);
    pFVar13 = operator_new(0xb0);
                    /* try { // try from 004cd073 to 004cd077 has its CatchHandler @ 004cd2c4 */
    FlashAnimationLibrary__FlashAnimationLibrary__00576680(pFVar13,pcVar12);
    *(FlashAnimationLibrary **)(arg1 + 0x428) = pFVar13;
                    /* try { // try from 004cd084 to 004cd0a9 has its CatchHandler @ 004cd2d2 */
    uVar8 = GetLocalizedText(0x100);
    break;
  case 7:
    goto switchD_004ccf73_caseD_7;
  case 8:
    pcVar12 = (char *)FormatResourcePath("/Menus/dworldmenu.am",local_38);
    pFVar13 = operator_new(0xb0);
                    /* try { // try from 004cd103 to 004cd107 has its CatchHandler @ 004cd2b6 */
    FlashAnimationLibrary__FlashAnimationLibrary__00576680(pFVar13,pcVar12);
    *(FlashAnimationLibrary **)(arg1 + 0x428) = pFVar13;
                    /* try { // try from 004cd114 to 004cd139 has its CatchHandler @ 004cd2d2 */
    uVar8 = GetLocalizedText(0x103);
    break;
  case 9:
    pcVar12 = (char *)FormatResourcePath("/Menus/i2worldmenu.am",local_38);
    pFVar13 = operator_new(0xb0);
                    /* try { // try from 004cd0b3 to 004cd0b7 has its CatchHandler @ 004cd2c2 */
    FlashAnimationLibrary__FlashAnimationLibrary__00576680(pFVar13,pcVar12);
    *(FlashAnimationLibrary **)(arg1 + 0x428) = pFVar13;
                    /* try { // try from 004cd0c7 to 004cd0f9 has its CatchHandler @ 004cd2d2 */
    pwVar11 = (wchar_t *)FlashAnimationLibrary__GetTextField(pFVar13,"chaptername");
    FlashTextField__SetText(pwVar11,L"Super Meat World");
    goto switchD_004ccf73_caseD_0;
  }
LAB_004ccff0:
  pwVar11 = (wchar_t *)
            FlashAnimationLibrary__GetTextField
                      (*(FlashAnimationLibrary **)(arg1 + 0x428),"chaptername");
  FlashTextField__SetText(pwVar11,uVar8);
switchD_004ccf73_caseD_0:
  uVar8 = FlashAnimationLibrary__GetMovieClip__005731d0
                    (*(FlashAnimationLibrary **)(arg1 + 0x428),"worldmap");
  *(uint64_t *)(arg1 + 0x430) = uVar8;
  plVar9 = (long *)FlashAnimationLibrary__GetMovieClip__005731d0
                             (*(FlashAnimationLibrary **)(arg1 + 0x428),"chaptericon");
  self = (FlashMovieClip *)
         FlashAnimationLibrary__GetLibraryEntry
                   (*(FlashAnimationLibrary **)(arg1 + 0x428),
                    *(int *)(*(long *)(arg1 + 0x430) + 0x20));
  iVar7 = FlashAnimationLibrary__GetClipIndex
                    (*(FlashAnimationLibrary **)(arg1 + 0x428),"worldpad1");
  uVar8 = FlashMovieClip__FindInstance(self,iVar7,0,(int *)0x0,0);
  *(uint64_t *)(arg1 + 0x438) = uVar8;
  iVar7 = FlashAnimationLibrary__GetClipIndex
                    (*(FlashAnimationLibrary **)(arg1 + 0x428),"worldpad2");
  uVar8 = FlashMovieClip__FindInstance(self,iVar7,0,(int *)0x0,0);
  *(uint64_t *)(arg1 + 0x440) = uVar8;
  iVar7 = FlashAnimationLibrary__GetClipIndex
                    (*(FlashAnimationLibrary **)(arg1 + 0x428),"worldpad3");
  uVar8 = FlashMovieClip__FindInstance(self,iVar7,0,(int *)0x0,0);
  *(uint64_t *)(arg1 + 0x448) = uVar8;
  iVar7 = FlashAnimationLibrary__GetClipIndex
                    (*(FlashAnimationLibrary **)(arg1 + 0x428),"worldpad4");
  uVar8 = FlashMovieClip__FindInstance(self,iVar7,0,(int *)0x0,0);
  *(uint64_t *)(arg1 + 0x450) = uVar8;
  iVar7 = FlashAnimationLibrary__GetClipIndex
                    (*(FlashAnimationLibrary **)(arg1 + 0x428),"worldpad5");
  uVar8 = FlashMovieClip__FindInstance(self,iVar7,0,(int *)0x0,0);
  *(uint64_t *)(arg1 + 0x458) = uVar8;
  iVar7 = FlashAnimationLibrary__GetClipIndex
                    (*(FlashAnimationLibrary **)(arg1 + 0x428),"worldpad6");
  uVar8 = FlashMovieClip__FindInstance(self,iVar7,0,(int *)0x0,0);
  *(uint64_t *)(arg1 + 0x460) = uVar8;
  iVar7 = FlashAnimationLibrary__GetClipIndex
                    (*(FlashAnimationLibrary **)(arg1 + 0x428),"worldpad7");
  uVar8 = FlashMovieClip__FindInstance(self,iVar7,0,(int *)0x0,0);
  *(uint64_t *)(arg1 + 0x468) = uVar8;
  iVar7 = FlashAnimationLibrary__GetClipIndex
                    (*(FlashAnimationLibrary **)(arg1 + 0x428),"worldpad8");
  uVar8 = FlashMovieClip__FindInstance(self,iVar7,0,(int *)0x0,0);
  *(uint64_t *)(arg1 + 0x470) = uVar8;
  lVar10 = FlashMovieClip__FindInstance(self,(int)plVar9[4],0,(int *)0x0,0);
  (**(code **)(*plVar9 + 8))(plVar9);
  pwVar11 = (wchar_t *)
            FlashAnimationLibrary__GetTextField(*(FlashAnimationLibrary **)(arg1 + 0x428),"back")
  ;
  if (pwVar11 != (wchar_t *)0x0) {
    uVar8 = GetLocalizedText(10);
    FlashTextField__SetText(pwVar11,uVar8);
  }
  pwVar11 = (wchar_t *)
            FlashAnimationLibrary__GetTextField
                      (*(FlashAnimationLibrary **)(arg1 + 0x428),"select");
  if (pwVar11 != (wchar_t *)0x0) {
    uVar8 = GetLocalizedText(0xb7);
    FlashTextField__SetText(pwVar11,uVar8);
  }
  fVar6 = DAT_0081bf3c /* R:0.0f */;
  fVar5 = DAT_0081bf38 /* R:1.1915431418745068e-38f */;
  fVar4 = DAT_0081bf34 /* R:2.2958888052482446e-39f */;
  fVar3 = vWorldMenuMeatBoyOffset;
  lVar2 = *(long *)(arg1 + 0x4d0);
  fVar14 = (float)*(uint64_t *)(lVar10 + 0x38) + DAT_0081bf38 /* R:1.1915431418745068e-38f */;
  fVar15 = (float)((ulong)*(uint64_t *)(lVar10 + 0x38) >> 0x20) + DAT_0081bf3c /* R:0.0f */;
  *(ulong *)(lVar2 + 0x30) =
       CONCAT44((float)((ulong)*(uint64_t *)(lVar10 + 0x30) >> 0x20) + DAT_0081bf34 /* R:2.2958888052482446e-39f */,
                (float)*(uint64_t *)(lVar10 + 0x30) + vWorldMenuMeatBoyOffset);
  *(ulong *)(lVar2 + 0x38) = CONCAT44(fVar15,fVar14);
  lVar2 = *(long *)(arg1 + 0x4d8);
  uVar8 = *(uint64_t *)(lVar10 + 0x38);
  *(ulong *)(lVar2 + 0x30) =
       CONCAT44((float)((ulong)*(uint64_t *)(lVar10 + 0x30) >> 0x20) + fVar4,
                (float)*(uint64_t *)(lVar10 + 0x30) + fVar3);
  *(ulong *)(lVar2 + 0x38) = CONCAT44((float)((ulong)uVar8 >> 0x20) + fVar6,(float)uVar8 + fVar5);
  *(int *)(arg1 + 0x41c) = arg2;
  SetWorldMenuStats(arg1);
  if ((allocator *)(local_38[0] + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage) {
    LOCK();
    piVar1 = (int *)(local_38[0] + -8);
    iVar7 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar7 < 1) {
      std__string_Rep_M_destroy((allocator *)(local_38[0] + -0x18));
    }
  }
  return;
}

/* ======================================================================
 * SMBMenuTransitionWorldLeftIn  (Ghidra `SMBMenuTransitionWorldLeftIn` @ 004cd2e0)
 * Signature: uint8_t __stdcall SMBMenuTransitionWorldLeftIn(void * arg1, int arg2, int arg3)
 * Calls: `GSMBChapterData__IsChapterUnlocked`, `GSMBCutSceneManager__PlayCutScene`, `SMBMenuWorldNextTransEnd`
 * Called by: `GSMBMenu__TransitionInNextWorldMap`
 */
/* SMBMenuTransitionWorldLeftIn(void*, int, int) */

void SMBMenuTransitionWorldLeftIn(void *arg1,int arg2,int arg3)

{
  int iVar1;
  uint32_t in_register_00000014;
  uint64_t uVar2;
  uint64_t extraout_RDX;
  int iVar3;
  uint32_t local_68;
  uint32_t local_64;
  uint32_t local_60;
  uint64_t local_58;
  code *local_50;
  uint64_t local_48;
  uint64_t local_40;
  uint64_t local_38;
  uint32_t local_30;
  uint32_t local_2c;
  uint32_t local_28;
  
  uVar2 = CONCAT44(in_register_00000014,arg3);
  iVar3 = *(int *)(SMBMenu + 0x41c) + -1;
  while (iVar1 = GSMBChapterData__IsChapterUnlocked(SMBChapterData,iVar3,uVar2), iVar1 == 0) {
    uVar2 = extraout_RDX;
    if (iVar3 == 0) {
      iVar3 = 9;
    }
    else {
      iVar3 = iVar3 + -1;
      if (iVar3 == 8) {
        iVar3 = 7;
      }
    }
  }
  GSMBMenu__LoadWorldMenu(SMBMenu,iVar3,0);
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_58 = *(uint64_t *)(SMBMenu + 0x638);
  local_2c = 1;
  local_68 = 0x44200000;
  local_64 = 0x43f00000;
  local_60 = 1;
  local_50 = SMBMenuWorldNextTransEnd;
  local_28 = 0;
  GSMBCutSceneManager__PlayCutScene(SMBCutSceneManager,(SMBCutScene *)&local_68);
  return;
}

/* ======================================================================
 * SMBMenuTransitionWorldRightIn  (Ghidra `SMBMenuTransitionWorldRightIn` @ 004cd3c0)
 * Signature: uint8_t __stdcall SMBMenuTransitionWorldRightIn(void * arg1, int arg2, int arg3)
 * Calls: `GSMBChapterData__IsChapterUnlocked`, `GSMBCutSceneManager__PlayCutScene`, `SMBMenuWorldNextTransEnd`
 * Called by: `GSMBMenu__TransitionInNextWorldMap`
 */
/* SMBMenuTransitionWorldRightIn(void*, int, int) */

void SMBMenuTransitionWorldRightIn(void *arg1,int arg2,int arg3)

{
  int iVar1;
  uint32_t in_register_00000014;
  uint64_t uVar2;
  uint64_t extraout_RDX;
  int iVar3;
  uint32_t local_68;
  uint32_t local_64;
  uint32_t local_60;
  uint64_t local_58;
  code *local_50;
  uint64_t local_48;
  uint64_t local_40;
  uint64_t local_38;
  uint32_t local_30;
  uint32_t local_2c;
  uint32_t local_28;
  
  uVar2 = CONCAT44(in_register_00000014,arg3);
  iVar3 = *(int *)(SMBMenu + 0x41c) + 1;
  while( true ) {
    iVar1 = GSMBChapterData__IsChapterUnlocked(SMBChapterData,iVar3,uVar2);
    if (iVar1 != 0) break;
    iVar1 = iVar3 + 1;
    if ((iVar1 == 0) || (iVar1 == 8)) {
      iVar1 = iVar3 + 2;
    }
    uVar2 = extraout_RDX;
    iVar3 = 1;
    if (iVar1 < 10) {
      iVar3 = iVar1;
    }
  }
  GSMBMenu__LoadWorldMenu(SMBMenu,iVar3,0);
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_58 = *(uint64_t *)(SMBMenu + 0x648);
  local_2c = 1;
  local_68 = 0x44200000;
  local_64 = 0x43f00000;
  local_60 = 1;
  local_50 = SMBMenuWorldNextTransEnd;
  local_28 = 0;
  GSMBCutSceneManager__PlayCutScene(SMBCutSceneManager,(SMBCutScene *)&local_68);
  return;
}

/* ======================================================================
 * HidePauseMenu  (Ghidra `HidePauseMenu` @ 004cd980)
 * Signature: uint8_t __stdcall HidePauseMenu(int arg1)
 * Calls: (none)
 * Called by: (none)
 */
/* GSMBMenu__HidePauseMenu(int) */

void GSMBMenu__HidePauseMenu(int arg1)

{
  uint32_t in_register_0000003c;
  
  *(uint32_t *)(CONCAT44(in_register_0000003c,arg1) + 0xd04) = 0;
  RenderLayers__RemoveLayer((RenderLayer *)CONCAT44(in_register_0000003c,arg1));
  return;
}

/* ======================================================================
 * ShowPauseMenu  (Ghidra `ShowPauseMenu` @ 004ced80)
 * Signature: uint8_t __stdcall ShowPauseMenu(int arg1)
 * Calls: `FlashLibraryInstance__Reset`, `GSMBCutSceneManager__CancelCutScene`, `GSMBMenu__ShowPauseMenu`, `Joystick__AddButtonCallback`, `Joystick__AddPOVCallback`, `SMBMenu_ClickPauseOption`, `SMBMenu_ClickReplayPauseOption`, `SMBMenu_DecrementPauseOption`, `SMBMenu_DecrementReplayPauseOption`, `SMBMenu_IncrementPauseOption` (+4 more)
 * Called by: `GSMBMenu__BackFromHelpAndOptions`, `GSMBMenu__ClickHelpOption`, `GSMBMenu__HidePauseHelpAndOptions`
 */
/* GSMBMenu__ShowPauseMenu(int) [clone .constprop.116] */

void GSMBMenu__ShowPauseMenu(int arg1)

{
  Joystick *pJVar1;
  code *pcVar2;
  uint32_t in_register_0000003c;
  long lVar3;
  
  lVar3 = CONCAT44(in_register_0000003c,arg1);
  *(uint32_t *)(lVar3 + 0xd04) = 0x11;
  FlashLibraryInstance__Reset(*(FlashLibraryInstance **)(lVar3 + 2000));
  FlashLibraryInstance__Reset(*(FlashLibraryInstance **)(lVar3 + 0x7d8));
  FlashLibraryInstance__Reset(*(FlashLibraryInstance **)(lVar3 + 0x7b0));
  FlashLibraryInstance__Reset(*(FlashLibraryInstance **)(lVar3 + 0x7a8));
  if (*(short *)(lVar3 + 0x1840) == 0) {
    if (Keyboard != (TKeyboard *)0x0) {
      TKeyboard__AddKeyCallback(Keyboard,0x76,SMBMenu_ClickPauseOption,0);
      TKeyboard__AddKeyCallback(Keyboard,0x6c,SMBMenu_ClickPauseOption,0);
      TKeyboard__AddKeyCallback(Keyboard,0x1f,SMBMenu_IncrementPauseOption,0);
      TKeyboard__AddKeyCallback(Keyboard,0x7f,SMBMenu_DecrementPauseOption,0);
      TKeyboard__AddKeyCallback(Keyboard,0x61,ShowPauseMenuPress,0);
      TKeyboard__AddKeyCallback(Keyboard,0x23,ShowPauseMenuPress,0);
    }
    pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
    Joystick__AddButtonCallback(pJVar1,0,SMBMenu_ClickPauseOption,0);
    pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
    Joystick__AddPOVCallback(pJVar1,2,SMBMenu_IncrementPauseOption,0);
    pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
    pcVar2 = SMBMenu_DecrementPauseOption;
  }
  else {
    if (Keyboard != (TKeyboard *)0x0) {
      TKeyboard__AddKeyCallback(Keyboard,0x76,SMBMenu_ClickReplayPauseOption,0);
      TKeyboard__AddKeyCallback(Keyboard,0x6c,SMBMenu_ClickReplayPauseOption,0);
      TKeyboard__AddKeyCallback(Keyboard,0x1f,SMBMenu_IncrementReplayPauseOption,0);
      TKeyboard__AddKeyCallback(Keyboard,0x7f,SMBMenu_DecrementReplayPauseOption,0);
      TKeyboard__AddKeyCallback(Keyboard,0x61,ShowPauseMenuPress,0);
      TKeyboard__AddKeyCallback(Keyboard,0x23,ShowPauseMenuPress,0);
    }
    pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
    Joystick__AddButtonCallback(pJVar1,0,SMBMenu_ClickReplayPauseOption,0);
    pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
    Joystick__AddPOVCallback(pJVar1,2,SMBMenu_IncrementReplayPauseOption,0);
    pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
    pcVar2 = SMBMenu_DecrementReplayPauseOption;
  }
  Joystick__AddPOVCallback(pJVar1,0,pcVar2,0);
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddButtonCallback(pJVar1,7,ShowPauseMenuPress,0);
  pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddButtonCallback(pJVar1,1,ShowPauseMenuPress,0);
  GSMBCutSceneManager__CancelCutScene(SMBCutSceneManager);
  return;
}

/* ======================================================================
 * SMBMenuSelectChar  (Ghidra `SMBMenuSelectChar` @ 004cf710)
 * Signature: uint8_t __stdcall SMBMenuSelectChar(tagButtonProps * arg1, void * arg2)
 * Calls: `GSMBMenu__HideCharMenu`
 * Called by: `GSMBMenu__ShowCharMenu`, `SMBMenuTransitionInCharMenu`
 */
/* SMBMenuSelectChar(tagButtonProps const*, void*) */

void SMBMenuSelectChar(tagButtonProps *arg1,void *arg2)

{
  long *plVar1;
  
  if ((*(int *)arg1 == 1) &&
     (*(int *)(*(long *)(SMBMenu + 0xbf8) + (ulong)*(ushort *)(SMBMenu + 0xd08) * 0x2c + 0x14) == 1)
     ) {
    plVar1 = (long *)(SMBMenu + 0x678);
    *(uint32_t *)(SMBMenu + 0xd04) = 5;
    *(uint32_t *)(*plVar1 + 0x58) = 0;
    GSMBMenu__HideCharMenu();
    return;
  }
  return;
}

/* ======================================================================
 * SMBMenuEnterWorld  (Ghidra `SMBMenuEnterWorld` @ 004cfd20)
 * Signature: uint8_t __stdcall SMBMenuEnterWorld(tagButtonProps * arg1, void * arg2)
 * Calls: `AutoLockSection__AutoLockSection`, `AutoLockSection__AutoLockSection__005b59d0`, `GSMBCutSceneManager__PlayCutScene`, `GSMBMenu__RemoveControls`, `SMBLevelPortal__DeActivateInterface`, `SMBLevelPortal__InitializeInterface`, `SMBLevelPortal__IsInterfaceActive`, `SMBMenuInWorldTrans`
 * Called by: `GSMBMenu__Render`, `GSMBMenu__RestoreControls`, `SMBLevelPortalInterface__Activate`
 */
/* SMBMenuEnterWorld(tagButtonProps const*, void*) */

void SMBMenuEnterWorld(tagButtonProps *arg1,void *arg2)

{
  int iVar1;
  uint32_t local_68;
  uint32_t local_64;
  uint32_t local_60;
  uint64_t local_58;
  code *local_50;
  uint64_t local_48;
  uint64_t local_40;
  uint64_t local_38;
  uint32_t local_30;
  uint32_t local_2c;
  uint32_t local_28;
  AutoLockSection local_18 [24];
  
  if ((((arg1 == (tagButtonProps *)0x0) || (*(int *)arg1 == 1)) && (bMenuTransitioning == 0))
     && (*(int *)(SMBMenu + 0xd04) != 7)) {
    AutoLockSection__AutoLockSection(local_18,(CriticalSection *)SMBMenuSection);
    if (*(int *)(SuperMeatBoy + 0x290) == 9) {
                    /* try { // try from 004cfe27 to 004cfee6 has its CatchHandler @ 004cfeec */
      iVar1 = SMBLevelPortal__IsInterfaceActive(SuperMeatBoyPortal);
      if (iVar1 == 0) {
        SMBLevelPortal__InitializeInterface(SuperMeatBoyPortal);
      }
      else {
        if (bMenuTransitioning != 1) {
          local_48 = 0;
          local_40 = 0;
          local_38 = 0;
          local_30 = 0;
          local_2c = 1;
          local_68 = 0x44200000;
          local_64 = 0x43f00000;
          local_60 = 1;
          local_58 = *(uint64_t *)(SMBMenu + 0x620);
          bMenuTransitioning = 1;
          local_50 = SMBMenuInWorldTrans;
          local_28 = 0;
          GSMBCutSceneManager__PlayCutScene(SMBCutSceneManager,(SMBCutScene *)&local_68);
        }
        GSMBMenu__RemoveControls();
        SMBLevelPortal__DeActivateInterface(SuperMeatBoyPortal);
      }
    }
    else {
      if (bMenuTransitioning != 1) {
        local_48 = 0;
        local_40 = 0;
        local_38 = 0;
        local_30 = 0;
        local_2c = 1;
        local_68 = 0x44200000;
        local_64 = 0x43f00000;
        local_60 = 1;
        local_58 = *(uint64_t *)(SMBMenu + 0x620);
        bMenuTransitioning = 1;
        local_50 = SMBMenuInWorldTrans;
        local_28 = 0;
                    /* try { // try from 004cfdff to 004cfe0f has its CatchHandler @ 004cfeec */
        GSMBCutSceneManager__PlayCutScene(SMBCutSceneManager,(SMBCutScene *)&local_68);
      }
      GSMBMenu__RemoveControls();
    }
    AutoLockSection__AutoLockSection__005b59d0(local_18);
    return;
  }
  return;
}

/* ======================================================================
 * SMBMenuTransitionInCharMenu  (Ghidra `SMBMenuTransitionInCharMenu` @ 004d1710)
 * Signature: uint8_t __stdcall SMBMenuTransitionInCharMenu(void * arg1, int arg2, int arg3)
 * Calls: `FlashLibraryInstance__Reset`, `GSMBChapterData__GetTotalNumBandagesCollected`, `GSMBMenu__RemoveControls`, `Joystick__AddButtonCallback`, `Joystick__AddPOVCallback`, `SMBMenuMoveLeftChar`, `SMBMenuMoveRightChar`, `SMBMenuSelectChar`, `TInput__RegisterCode`, `TKeyboard__AddKeyCallback` (+1 more)
 * Called by: `GSMBMenu__Update`
 */
/* SMBMenuTransitionInCharMenu(void*, int, int) */

void SMBMenuTransitionInCharMenu(void *arg1,int arg2,int arg3)

{
  ushort uVar1;
  long lVar2;
  uint uVar3;
  Joystick *pJVar4;
  long lVar5;
  
  lVar2 = SMBMenu;
  bMenuTransitioning = 1;
  GSMBMenu__RemoveControls();
  pJVar4 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddPOVCallback(pJVar4,3,SMBMenuMoveRightChar,0);
  pJVar4 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddPOVCallback(pJVar4,1,SMBMenuMoveLeftChar,0);
  pJVar4 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddButtonCallback(pJVar4,0,SMBMenuSelectChar,0);
  if (Keyboard != (TKeyboard *)0x0) {
    TKeyboard__AddKeyCallback(Keyboard,0x41,SMBMenuMoveRightChar,0);
    TKeyboard__AddKeyCallback(Keyboard,0x6d,SMBMenuMoveLeftChar,0);
    TKeyboard__AddKeyCallback(Keyboard,0x76,SMBMenuSelectChar,0);
    TKeyboard__AddKeyCallback(Keyboard,0x6c,SMBMenuSelectChar,0);
  }
  TInput__RegisterCode(Input,(tagCheatCode *)playAsBrownie);
  TInput__RegisterCode(Input,(tagCheatCode *)playAsDrFetus);
  TInput__RegisterCode(Input,(tagCheatCode *)playAsTofuBoy);
  TInput__RegisterCode(Input,(tagCheatCode *)playAsWOG);
  TInput__RegisterCode(Input,(tagCheatCode *)playAsTim);
  *(uint32_t *)(lVar2 + 0xd04) = 4;
  FlashLibraryInstance__Reset(*(FlashLibraryInstance **)(lVar2 + 0x670));
  if (*(long *)(lVar2 + 0x758) != 0) {
    uVar3 = GSMBChapterData__GetTotalNumBandagesCollected(SMBChapterData);
    FlashTextField__SetText(*(char **)(lVar2 + 0x758),&DAT_005c8bf9 /* R:u32=1996515621 */,(ulong)uVar3);
  }
  *(uint16_t *)(lVar2 + 0x1818) = 0;
  if ((*(int *)(lVar2 + 0x1820) == 1) && (uVar1 = *(ushort *)(lVar2 + 0x181a), uVar1 != 0)) {
    lVar5 = 0;
    do {
      *(uint16_t *)(*(long *)(lVar2 + 0x1830) + lVar5) = 0xffff;
      lVar5 = lVar5 + 2;
    } while (lVar5 != (ulong)(uVar1 - 1 & 0xffff) * 2 + 2);
    return;
  }
  return;
}

/* ======================================================================
 * SMBMenuChapterSelect  (Ghidra `SMBMenuChapterSelect` @ 004d18e0)
 * Signature: uint8_t __stdcall SMBMenuChapterSelect(tagButtonProps * arg1, void * arg2)
 * Calls: `AutoLockSection__AutoLockSection`, `AutoLockSection__AutoLockSection__005b59d0`, `FlashLibraryInstance__Reset`, `GSMBMenu__RemoveControls`, `Joystick__AddButtonCallback`, `SMBChapter__LoadChapter`, `TKeyboard__AddKeyCallback`, `TPlayer__GetJoystick`
 * Called by: `GSMBMenu__RestoreWorldMapControls`
 */
/* SMBMenuChapterSelect(tagButtonProps const*, void*) */

void SMBMenuChapterSelect(tagButtonProps *arg1,void *arg2)

{
  long lVar1;
  Joystick *pJVar2;
  AutoLockSection aAStack_18 [16];
  
  lVar1 = SMBMenu;
  if (*(int *)arg1 == 1) {
    if ((*(int *)(SMBMenu + 0xd04) != 8) && (*(int *)(SMBMenu + 0xd04) != 0x15)) {
      AutoLockSection__AutoLockSection(aAStack_18,(CriticalSection *)SMBMenuSection);
                    /* try { // try from 004d1928 to 004d1968 has its CatchHandler @ 004d19f2 */
      SMBChapter__LoadChapter((SMBChapter *)(SuperMeatBoy + 0x90),*(uint32_t *)(lVar1 + 0x41c));
      *(uint32_t *)(lVar1 + 0xd00) = 0;
      *(uint32_t *)(lVar1 + 0x420) = 0;
      *(uint32_t *)(lVar1 + 0xd04) = 8;
      iCurrentLevel = 0;
      FlashLibraryInstance__Reset(*(FlashLibraryInstance **)(lVar1 + 0x4d8));
      GSMBMenu__RemoveControls();
      AutoLockSection__AutoLockSection__005b59d0(aAStack_18);
      pJVar2 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
      Joystick__AddButtonCallback(pJVar2,0,0,0);
      pJVar2 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
      Joystick__AddButtonCallback(pJVar2,1,0,0);
      if (Keyboard != (TKeyboard *)0x0) {
        TKeyboard__AddKeyCallback(Keyboard,0x23,0,0);
        TKeyboard__AddKeyCallback(Keyboard,0x76,0,0);
        TKeyboard__AddKeyCallback(Keyboard,0x6c,0,0);
        return;
      }
    }
  }
  return;
}

/* ======================================================================
 * SMBWorldMapBackPress  (Ghidra `SMBWorldMapBackPress` @ 004d1a10)
 * Signature: uint8_t __stdcall SMBWorldMapBackPress(tagButtonProps * arg1, void * arg2)
 * Calls: `GSMBCutSceneManager__PlayCutScene`, `GSMBMenu__RemoveControls`, `Joystick__AddButtonCallback`, `SMBWorldToTitleTransFinished`, `TKeyboard__AddKeyCallback`, `TPlayer__GetJoystick`
 * Called by: `GSMBMenu__RestoreWorldMapControls`
 */
/* SMBWorldMapBackPress(tagButtonProps const*, void*) */

void SMBWorldMapBackPress(tagButtonProps *arg1,void *arg2)

{
  Joystick *pJVar1;
  uint32_t local_58;
  uint32_t local_54;
  uint32_t local_50;
  uint64_t local_48;
  code *local_40;
  uint64_t local_38;
  uint64_t local_30;
  uint64_t local_28;
  uint32_t local_20;
  uint32_t local_1c;
  uint32_t local_18;
  
  if (*(int *)arg1 == 1) {
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_48 = *(uint64_t *)(SMBMenu + 0x620);
    local_1c = 1;
    local_58 = 0x44200000;
    local_54 = 0x43f00000;
    local_50 = 1;
    local_40 = SMBWorldToTitleTransFinished;
    local_18 = 0;
    GSMBCutSceneManager__PlayCutScene(SMBCutSceneManager,(SMBCutScene *)&local_58);
    GSMBMenu__RemoveControls();
    pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
    Joystick__AddButtonCallback(pJVar1,0,0,0);
    pJVar1 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
    Joystick__AddButtonCallback(pJVar1,1,0,0);
    if (Keyboard != (TKeyboard *)0x0) {
      TKeyboard__AddKeyCallback(Keyboard,0x23,0,0);
      TKeyboard__AddKeyCallback(Keyboard,0x76,0,0);
      TKeyboard__AddKeyCallback(Keyboard,0x6c,0,0);
      return;
    }
  }
  return;
}

/* ======================================================================
 * SMBMenu_ClickBackFromHelpOption  (Ghidra `SMBMenu_ClickBackFromHelpOption` @ 004d1b20)
 * Signature: uint8_t __stdcall SMBMenu_ClickBackFromHelpOption(tagButtonProps * arg1, void * arg2)
 * Calls: `GSMBMenu__RemoveControls`, `GSMBMenu__SetPauseMenuText`, `GSMBMenu__SetReplayPauseMenuText`, `GSMBMenu__SetTitleMenuText`, `GSMBMenu__ShowPauseMenu`, `GSMBMenu__ShowTitleMenu`
 * Called by: `GSMBMenu__ShowPauseHelpAndOptions`, `GSMBMenu__ShowTitleHelpAndOptions`
 */
/* SMBMenu_ClickBackFromHelpOption(tagButtonProps const*, void*) */

void SMBMenu_ClickBackFromHelpOption(tagButtonProps *arg1,void *arg2)

{
  GSMBMenu *self;
  
  self = SMBMenu;
  if ((arg1 == (tagButtonProps *)0x0) || (*(int *)arg1 != 1)) {
    return;
  }
  if (*(int *)(SMBMenu + 0xd04) != 0x11) {
    GSMBMenu__RemoveControls();
    GSMBMenu__ShowTitleMenu(self,1);
    GSMBMenu__SetTitleMenuText(self);
    *(uint32_t *)(*(long *)(self + (long)*(int *)(self + 0x820) * 0x20 + 0x9f8) + 0x20) =
         *(uint32_t *)(self + ((long)*(int *)(self + 0x820) + 0x4f) * 0x20 + 8);
    *(uint32_t *)(*(long *)(self + (long)*(int *)(self + 0x818) * 0x20 + 0x838) + 0x20) =
         *(uint32_t *)(self + ((long)*(int *)(self + 0x818) + 0x41) * 0x20 + 0xc);
    return;
  }
  GSMBMenu__RemoveControls();
  GSMBMenu__ShowPauseMenu((int)self);
  if (*(short *)(self + 0x1840) != 0) {
    GSMBMenu__SetReplayPauseMenuText(self);
    *(uint32_t *)(*(long *)(self + (long)*(int *)(self + 0x820) * 0x20 + 0xa98) + 0x20) =
         *(uint32_t *)(self + ((long)*(int *)(self + 0x820) + 0x54) * 0x20 + 8);
    *(uint32_t *)(*(long *)(self + (long)*(int *)(self + 0x81c) * 0x20 + 0xb38) + 0x20) =
         *(uint32_t *)(self + ((long)*(int *)(self + 0x81c) + 0x59) * 0x20 + 0xc);
    return;
  }
  GSMBMenu__SetPauseMenuText(self);
  *(uint32_t *)(*(long *)(self + (long)*(int *)(self + 0x820) * 0x20 + 0xa98) + 0x20) =
       *(uint32_t *)(self + ((long)*(int *)(self + 0x820) + 0x54) * 0x20 + 8);
  *(uint32_t *)(*(long *)(self + (long)*(int *)(self + 0x81c) * 0x20 + 0x918) + 0x20) =
       *(uint32_t *)(self + ((long)*(int *)(self + 0x81c) + 0x48) * 0x20 + 0xc);
  return;
}

/* ======================================================================
 * SMBMenuWorldNextTransEnd  (Ghidra `SMBMenuWorldNextTransEnd` @ 004d1db0)
 * Signature: uint8_t __stdcall SMBMenuWorldNextTransEnd(void * arg1, int arg2, int arg3)
 * Calls: `GSMBMenu__RestoreWorldMapControls`
 * Called by: `GSMBMenu__TransitionOutNextWorldMap`, `SMBMenuTransitionWorldLeftIn`, `SMBMenuTransitionWorldRightIn`
 */
/* SMBMenuWorldNextTransEnd(void*, int, int) */

void SMBMenuWorldNextTransEnd(void *arg1,int arg2,int arg3)

{
  bMenuTransitioning = 0;
  GSMBMenu__RestoreWorldMapControls();
  return;
}

/* ======================================================================
 * SMBMenuMoveRightLevel  (Ghidra `SMBMenuMoveRightLevel` @ 004d2ad0)
 * Signature: uint8_t __stdcall SMBMenuMoveRightLevel(tagButtonProps * arg1, void * arg2)
 * Calls: `GSMBMenu__MoveToRightLevel`
 * Called by: `GSMBMenu__RestoreControls`
 */
/* SMBMenuMoveRightLevel(tagButtonProps const*, void*) */

void SMBMenuMoveRightLevel(tagButtonProps *arg1,void *arg2)

{
  if ((*(int *)arg1 == 1) && (bRenderingUnlocks == 0)) {
    GSMBMenu__MoveToRightLevel();
    return;
  }
  return;
}

/* ======================================================================
 * SMBMenuMoveLeftLevel  (Ghidra `SMBMenuMoveLeftLevel` @ 004d2cf0)
 * Signature: uint8_t __stdcall SMBMenuMoveLeftLevel(tagButtonProps * arg1, void * arg2)
 * Calls: `GSMBMenu__MoveToLeftLevel`
 * Called by: `GSMBMenu__RestoreControls`
 */
/* SMBMenuMoveLeftLevel(tagButtonProps const*, void*) */

void SMBMenuMoveLeftLevel(tagButtonProps *arg1,void *arg2)

{
  if ((*(int *)arg1 == 1) && (bRenderingUnlocks == 0)) {
    GSMBMenu__MoveToLeftLevel();
    return;
  }
  return;
}

/* ======================================================================
 * SMBMenuMoveDownLevel  (Ghidra `SMBMenuMoveDownLevel` @ 004d2ee0)
 * Signature: uint8_t __stdcall SMBMenuMoveDownLevel(tagButtonProps * arg1, void * arg2)
 * Calls: `GSMBMenu__MoveToDownLevel`
 * Called by: `GSMBMenu__RestoreControls`
 */
/* SMBMenuMoveDownLevel(tagButtonProps const*, void*) */

void SMBMenuMoveDownLevel(tagButtonProps *arg1,void *arg2)

{
  if ((*(int *)arg1 == 1) && (bRenderingUnlocks == 0)) {
    GSMBMenu__MoveToDownLevel();
    return;
  }
  return;
}

/* ======================================================================
 * SMBMenuMoveUpLevel  (Ghidra `SMBMenuMoveUpLevel` @ 004d30d0)
 * Signature: uint8_t __stdcall SMBMenuMoveUpLevel(tagButtonProps * arg1, void * arg2)
 * Calls: `GSMBMenu__MoveToUpLevel`
 * Called by: `GSMBMenu__RestoreControls`
 */
/* SMBMenuMoveUpLevel(tagButtonProps const*, void*) */

void SMBMenuMoveUpLevel(tagButtonProps *arg1,void *arg2)

{
  if ((*(int *)arg1 == 1) && (bRenderingUnlocks == 0)) {
    GSMBMenu__MoveToUpLevel();
    return;
  }
  return;
}

/* ======================================================================
 * SMBMenuLevelSelect  (Ghidra `SMBMenuLevelSelect` @ 004d3950)
 * Signature: uint8_t __stdcall SMBMenuLevelSelect(tagButtonProps * arg1, void * arg2)
 * Calls: `GSMBMenu__EnterSelectedLevel`
 * Called by: `GSMBMenu__RestoreControls`
 */
/* SMBMenuLevelSelect(tagButtonProps const*, void*) */

void SMBMenuLevelSelect(tagButtonProps *arg1,void *arg2)

{
  if ((((*(int *)arg1 == 1) && (bMenuTransitioning == 0)) && (*(int *)(SMBMenu + 0xd04) != 7)) &&
     (((bRenderingUnlocks == 0 && (bBossJustDefeated == 0)) && (bBossJustUnlocked == 0)))) {
    GSMBMenu__EnterSelectedLevel(SMBMenu);
    return;
  }
  return;
}

/* ======================================================================
 * SMBMenuBossIntroFinished  (Ghidra `SMBMenuBossIntroFinished` @ 004d3ca0)
 * Signature: uint8_t __stdcall SMBMenuBossIntroFinished(void * arg1, int arg2, int arg3)
 * Calls: `GSMBMenu__LoadSelectedLevel`, `GSuperMeatBoy__Freeze`, `GSuperMeatBoy__SwitchGameMode`, `SMBChapter__DestroyBossIntro`
 * Called by: `GSMBMenu__PlayBossIntro`, `GSMBMenu__Update`
 */
/* SMBMenuBossIntroFinished(void*, int, int) */

void SMBMenuBossIntroFinished(void *arg1,int arg2,int arg3)

{
  GSuperMeatBoy *self;
  
  bMenuTransitioning = 0;
  SMBChapter__DestroyBossIntro((SMBChapter *)(SuperMeatBoy + 0x90));
  GSMBMenu__LoadSelectedLevel(SMBMenu);
  *(uint32_t *)(SuperMeatBoy + 0x370) = 1;
  GSuperMeatBoy__SwitchGameMode();
  self = SuperMeatBoy;
  *(uint32_t *)(SuperMeatBoy + 0x370) = 0;
  GSuperMeatBoy__Freeze(self,0);
  return;
}

/* ======================================================================
 * SMBMenuTransitionPart2  (Ghidra `SMBMenuTransitionPart2` @ 004d3e00)
 * Signature: uint8_t __stdcall SMBMenuTransitionPart2(void * arg1, int arg2, int arg3)
 * Calls: `GSMBMenu__ToggleLightAndDark`
 * Called by: `GSMBMenu__LightDarkStartChange`
 */
/* SMBMenuTransitionPart2(void*, int, int) */

void SMBMenuTransitionPart2(void *arg1,int arg2,int arg3)

{
  GSMBMenu__ToggleLightAndDark(SMBMenu);
  return;
}

/* ======================================================================
 * SMBMenuInChapterReload  (Ghidra `SMBMenuInChapterReload` @ 004d4290)
 * Signature: uint8_t __stdcall SMBMenuInChapterReload(void * arg1, int arg2, int arg3)
 * Calls: `GSMBMenu__TransitionOutReloadChapter`
 * Called by: `GSMBMenu__TransitionInReloadChapter`
 */
/* SMBMenuInChapterReload(void*, int, int) */

void SMBMenuInChapterReload(void *arg1,int arg2,int arg3)

{
  GSMBMenu__TransitionOutReloadChapter(SMBMenu);
  return;
}

/* ======================================================================
 * SMBMenuInGameFromMenu  (Ghidra `SMBMenuInGameFromMenu` @ 004d4390)
 * Signature: uint8_t __stdcall SMBMenuInGameFromMenu(void * arg1, int arg2, int arg3)
 * Calls: `GSMBMenu__TransitionOutGameFromMenu`
 * Called by: `GSMBMenu__LoadReplayFromManager`, `GSMBMenu__SelectCharacter`, `GSMBMenu__TransitionInGameFromMenu`, `GSMBMenu__Update`
 */
/* SMBMenuInGameFromMenu(void*, int, int) */

void SMBMenuInGameFromMenu(void *arg1,int arg2,int arg3)

{
  GSMBMenu__TransitionOutGameFromMenu(SMBMenu);
  return;
}

/* ======================================================================
 * SMBMenuLoadNextWorld  (Ghidra `SMBMenuLoadNextWorld` @ 004d4940)
 * Signature: uint8_t __stdcall SMBMenuLoadNextWorld(tagButtonProps * arg1, void * arg2)
 * Calls: `GSMBMenu__RemoveWorldMapControls`, `GSMBMenu__TransitionInNextWorldMap`
 * Called by: `GSMBMenu__RestoreWorldMapControls`
 */
/* SMBMenuLoadNextWorld(tagButtonProps const*, void*) */

void SMBMenuLoadNextWorld(tagButtonProps *arg1,void *arg2)

{
  if ((((*(int *)arg1 == 1) && (bMenuTransitioning == 0)) && (*(int *)(SMBMenu + 0xd04) != 7)) &&
     (*(int *)(SMBMenu + 0xd04) != 0x15)) {
    GSMBMenu__RemoveWorldMapControls();
    GSMBMenu__TransitionInNextWorldMap(SMBMenu,1);
    return;
  }
  return;
}

/* ======================================================================
 * SMBMenuLoadPrevWorld  (Ghidra `SMBMenuLoadPrevWorld` @ 004d4990)
 * Signature: uint8_t __stdcall SMBMenuLoadPrevWorld(tagButtonProps * arg1, void * arg2)
 * Calls: `GSMBMenu__RemoveWorldMapControls`, `GSMBMenu__TransitionInNextWorldMap`
 * Called by: `GSMBMenu__RestoreWorldMapControls`
 */
/* SMBMenuLoadPrevWorld(tagButtonProps const*, void*) */

void SMBMenuLoadPrevWorld(tagButtonProps *arg1,void *arg2)

{
  if ((((*(int *)arg1 == 1) && (bMenuTransitioning == 0)) && (*(int *)(SMBMenu + 0xd04) != 7)) &&
     (*(int *)(SMBMenu + 0xd04) != 0x15)) {
    GSMBMenu__RemoveWorldMapControls();
    GSMBMenu__TransitionInNextWorldMap(SMBMenu,0);
    return;
  }
  return;
}

/* ======================================================================
 * SMBMenu_ClickTitleOption  (Ghidra `SMBMenu_ClickTitleOption` @ 004d5c90)
 * Signature: uint8_t __stdcall SMBMenu_ClickTitleOption(tagButtonProps * arg1, void * arg2)
 * Calls: `GSMBMenu__ClickTitleOption`
 * Called by: `GSMBMenu__ShowTitleMenu`
 */
/* SMBMenu_ClickTitleOption(tagButtonProps const*, void*) */

void SMBMenu_ClickTitleOption(tagButtonProps *arg1,void *arg2)

{
  if ((arg1 != (tagButtonProps *)0x0) && (*(int *)arg1 == 1)) {
    GSMBMenu__ClickTitleOption(SMBMenu);
    return;
  }
  return;
}

/* ======================================================================
 * SMBMenu_ClickPauseOption  (Ghidra `SMBMenu_ClickPauseOption` @ 004d6340)
 * Signature: uint8_t __stdcall SMBMenu_ClickPauseOption(tagButtonProps * arg1, void * arg2)
 * Calls: `GSMBMenu__ClickPauseOption`
 * Called by: `GSMBMenu__ShowPauseMenu`, `ShowPauseMenu`
 */
/* SMBMenu_ClickPauseOption(tagButtonProps const*, void*) */

void SMBMenu_ClickPauseOption(tagButtonProps *arg1,void *arg2)

{
  if ((arg1 != (tagButtonProps *)0x0) && (*(int *)arg1 == 1)) {
    GSMBMenu__ClickPauseOption(SMBMenu);
    return;
  }
  return;
}

/* ======================================================================
 * SMBMenu_ClickReplayPauseOption  (Ghidra `SMBMenu_ClickReplayPauseOption` @ 004d6360)
 * Signature: uint8_t __stdcall SMBMenu_ClickReplayPauseOption(tagButtonProps * arg1, void * arg2)
 * Calls: `CreateMessage`, `GSMBMenu__ShowLeaderboardMenu__004d6eb0`, `GSMBMenu__ShowPauseHelpAndOptions`, `GetLocalizedText`, `SMBMenuToTitleFromGame`, `SMBUpsellMenu__Activate`, `SMBUpsellMenu__SetUpsellAchievementMode`, `SMBUpsellMenu__SetUpsellNotExitMode`, `SMBUpsellMenu__SetUpsellOutroMode`, `System_IsTrialMode` (+1 more)
 * Called by: `GSMBMenu__ShowPauseMenu`, `ShowPauseMenu`
 */
/* SMBMenu_ClickReplayPauseOption(tagButtonProps const*, void*) */

void SMBMenu_ClickReplayPauseOption(tagButtonProps *arg1,void *arg2)

{
  SMBUpsellMenu *self;
  GSMBMenu *this_00;
  int iVar1;
  uint32_t local_88 [2];
  uint64_t local_80;
  uint64_t local_78;
  uint64_t local_70;
  uint64_t local_68;
  code *local_60;
  code *local_58;
  uint64_t local_50;
  uint64_t local_48;
  uint64_t local_40;
  uint64_t local_38;
  uint64_t local_30;
  uint64_t local_28;
  uint64_t local_20;
  
  this_00 = SMBMenu;
  if (*(int *)arg1 == 1) {
    iVar1 = *(int *)(SMBMenu + 0x81c);
    if (iVar1 == 0) {
      GSuperMeatBoy__HidePauseMenu((int)SuperMeatBoy);
    }
    else if (iVar1 == 1) {
      iVar1 = System_IsTrialMode();
      if (iVar1 == 0) {
        if ((((1 < *(int *)(this_00 + 0xd00) - 0x62U) && (*(long *)(this_00 + 0xce0) != 0)) &&
            ((*(byte *)(*(long *)(this_00 + 0xce0) + 2) & 5) == 0)) ||
           ((*(int *)(this_00 + 0xd04) == 0xf || (*(int *)(this_00 + 0xd04) == 0x11)))) {
          GSMBMenu__ShowLeaderboardMenu__004d6eb0(this_00);
        }
      }
      else {
        self = (SMBUpsellMenu *)(this_00 + 0x1600);
        SMBUpsellMenu__SetUpsellAchievementMode(self,0);
        SMBUpsellMenu__SetUpsellNotExitMode(self,(uint)(byte)this_00[0x1842]);
        SMBUpsellMenu__SetUpsellOutroMode(self,(uint)(byte)this_00[0x1842]);
        SMBUpsellMenu__Activate(self);
      }
    }
    else if (iVar1 == 2) {
      GSMBMenu__ShowPauseHelpAndOptions(SMBMenu);
    }
    else if (iVar1 == 3) {
      local_88[0] = 0;
      local_80 = 0;
      local_78 = 0;
      local_70 = 0;
      local_68 = 0;
      local_60 = (code *)0x0;
      local_58 = (code *)0x0;
      local_50 = 0;
      local_48 = 0;
      local_40 = 0;
      local_38 = 0;
      local_30 = 0;
      local_28 = 0;
      local_20 = 0;
      local_80 = GetLocalizedText(0xbc);
      local_78 = GetLocalizedText(0xbd);
      local_88[0] = 0x1e;
      local_70 = GetLocalizedText(4);
      local_68 = GetLocalizedText(5);
      local_60 = SMBMenuToTitleFromGame;
      local_58 = UserAlertCloseCurrent;
      CreateMessage(local_88);
    }
  }
  return;
}

/* ======================================================================
 * SMBMenu_ClickTitleHelpOption  (Ghidra `SMBMenu_ClickTitleHelpOption` @ 004d6830)
 * Signature: uint8_t __stdcall SMBMenu_ClickTitleHelpOption(tagButtonProps * arg1, void * arg2)
 * Calls: `GSMBMenu__ClickHelpOption`
 * Called by: `GSMBMenu__ShowPauseHelpAndOptions`, `GSMBMenu__ShowTitleHelpAndOptions`
 */
/* SMBMenu_ClickTitleHelpOption(tagButtonProps const*, void*) */

void SMBMenu_ClickTitleHelpOption(tagButtonProps *arg1,void *arg2)

{
  if ((arg1 != (tagButtonProps *)0x0) && (*(int *)arg1 == 1)) {
    GSMBMenu__ClickHelpOption(SMBMenu);
    return;
  }
  return;
}

/* ======================================================================
 * ThreadRemoteLoadChapterFile  (Ghidra `ThreadRemoteLoadChapterFile` @ 004d71a0)
 * Signature: uint8_t __stdcall ThreadRemoteLoadChapterFile(void * arg1)
 * Calls: (none)
 * Called by: (none)
 */
/* ThreadRemoteLoadChapterFile(void*) */

uint64_t ThreadRemoteLoadChapterFile(void *arg1)

{
  (**(code **)**(uint64_t **)((long)arg1 + 8))
            (*(uint64_t **)((long)arg1 + 8),*(long *)arg1 + 0x38);
  *(uint64_t *)(*(long *)arg1 + 0x30) = *(uint64_t *)(*(long *)arg1 + 0x38);
  return 0;
}

/* ======================================================================
 * SMBMenuThreadLoadChapter  (Ghidra `SMBMenuThreadLoadChapter` @ 004d7330)
 * Signature: uint8_t __stdcall SMBMenuThreadLoadChapter(void * arg1)
 * Calls: `SyncEvent__Set`
 * Called by: (none)
 */
/* SMBMenuThreadLoadChapter(void*) */

uint64_t SMBMenuThreadLoadChapter(void *arg1)

{
  GSMBMenu__LoadWorldMenu(SMBMenu,(ulong)arg1 & 0xffffffff,1);
  SyncEvent__Set((SyncEvent *)loadChapterEvent);
  return 0;
}

/* ======================================================================
 * DestroySMBPaletteResources  (Ghidra `DestroySMBPaletteResources` @ 004da9c0)
 * Signature: uint8_t __stdcall DestroySMBPaletteResources(void * arg1)
 * Calls: `BaseResource__Release`, `IndexTexture__IndexTexture__005a1170`, `TileTexture__TileTexture__005a0c40`, `operator_delete`
 * Called by: `SMBPalette__SMBPalette`, `SMBPalette__SMBPalette__004f3ca0`
 */
/* DestroySMBPaletteResources(void*) */

void DestroySMBPaletteResources(void *arg1)

{
  long *plVar1;
  TileTexture *self;
  IndexTexture *this_00;
  int iVar2;
  int iVar3;
  long lVar4;
  
  BaseResource__Release(*(BaseResource **)((long)arg1 + 0x1aa0),0);
  BaseResource__Release(*(BaseResource **)((long)arg1 + 0x1aa8),0);
  BaseResource__Release(*(BaseResource **)((long)arg1 + 0x1a90),0);
  BaseResource__Release(*(BaseResource **)((long)arg1 + 0x1a98),0);
  iVar2 = *(int *)((long)arg1 + 0x50);
  if (0 < iVar2) {
    lVar4 = 0;
    iVar3 = 0;
    do {
      plVar1 = *(long **)(*(long *)((long)arg1 + 0x40) + lVar4);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
        iVar2 = *(int *)((long)arg1 + 0x50);
      }
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 8;
    } while (iVar3 < iVar2);
  }
  iVar2 = *(int *)((long)arg1 + 0x54);
  if (0 < iVar2) {
    lVar4 = 0;
    iVar3 = 0;
    do {
      plVar1 = *(long **)(*(long *)((long)arg1 + 0x38) + lVar4);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
        iVar2 = *(int *)((long)arg1 + 0x54);
      }
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 8;
    } while (iVar3 < iVar2);
  }
  self = *(TileTexture **)((long)arg1 + 0x30);
  if (self != (TileTexture *)0x0) {
    TileTexture__TileTexture__005a0c40(self);
    operator_delete(self);
  }
  this_00 = *(IndexTexture **)((long)arg1 + 0x70);
  if (this_00 != (IndexTexture *)0x0) {
    IndexTexture__IndexTexture__005a1170(this_00);
    operator_delete(this_00);
    return;
  }
  return;
}

/* ======================================================================
 * CreateSMBPaletteResources  (Ghidra `CreateSMBPaletteResources` @ 004dca10)
 * Signature: uint8_t __stdcall CreateSMBPaletteResources(void * arg1)
 * Calls: `BaseResource__Release`, `IndexTexture__IndexTexture__005a0fc0`, `PropertiesFile__FindPropertyBlock`, `PropertiesFile__FindPropertyVariable`, `Sprite__Sprite__005a0040`, `StringToFloat`, `StringToInt`, `TexturePackage__CreateTexture`, `TexturePackage__TexturePackage`, `TexturePackage__TexturePackage__005a1b10` (+5 more)
 * Called by: `SMBPalette__SMBPalette`, `SMBPalette__SMBPalette__004f3ca0`
 */
/* WARNING: Removing unreachable block (ram,0x004dd722) */
/* WARNING: Removing unreachable block (ram,0x004dd717) */
/* WARNING: Removing unreachable block (ram,0x004dd80a) */
/* WARNING: Removing unreachable block (ram,0x004dd56e) */
/* WARNING: Removing unreachable block (ram,0x004dd579) */
/* WARNING: Removing unreachable block (ram,0x004dd730) */
/* WARNING: Removing unreachable block (ram,0x004dd709) */
/* CreateSMBPaletteResources(void*) */

void CreateSMBPaletteResources(void *arg1)

{
  int *piVar1;
  string *psVar2;
  byte *pbVar3;
  long *plVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  VertexStream *pVVar8;
  BaseResource *pBVar9;
  Sprite *pSVar10;
  IndexTexture *self;
  TileTexture *this_00;
  long lVar11;
  PropertyVariable *pPVar12;
  float fVar13;
  int local_22c;
  uint32_t local_218;
  uint32_t local_214;
  uint64_t local_210;
  uint32_t local_208;
  uint32_t local_204;
  uint64_t local_200;
  uint64_t local_1f8;
  uint64_t local_1f0;
  uint64_t local_1e8;
  uint32_t local_1e0;
  uint32_t local_1dc;
  uint32_t local_1d8;
  uint32_t local_1d4;
  uint64_t local_1d0;
  uint32_t local_1c8;
  uint32_t local_1c4;
  uint64_t local_1c0;
  uint32_t local_1b8;
  uint32_t local_1b4;
  uint64_t local_1b0;
  uint32_t local_1a8;
  uint32_t local_1a4;
  uint64_t local_1a0;
  uint64_t local_198;
  uint64_t local_190;
  uint64_t local_188;
  uint64_t local_180;
  uint64_t local_178;
  uint16_t local_170;
  uint32_t local_16c;
  uint32_t *local_168;
  uint32_t local_160;
  uint32_t local_15c;
  uint32_t local_158;
  char *local_148 [4];
  BaseResource *local_128;
  uint64_t local_120;
  uint32_t local_118;
  char *local_108 [4];
  char *local_e8 [2];
  char *local_d8 [2];
  uint8_t *local_c8;
  char *local_b8 [2];
  long local_a8 [2];
  PropertyBlock *local_98 [2];
  BaseResource *local_88;
  PropertyBlock *local_80;
  PropertyVariable *local_78;
  PropertyVariable *local_70;
  PropertyVariable *local_68;
  PropertyVariable *local_60;
  PropertyBlock *local_58;
  PropertyVariable *local_50;
  PropertyBlock *local_48 [3];
  
  plVar4 = CGR__pSingleQuadStream;
  *(long **)((long)arg1 + 0x1a98) = CGR__pSingleQuadStream;
  (**(code **)(*plVar4 + 0x10))();
  local_168 = &local_1d8;
  local_1d0 = 0;
  local_1d8 = 0xbf800000;
  local_1d4 = 0x3f800000;
  local_1c8 = 0x3f800000;
  local_1c4 = 0x3f800000;
  local_1c0 = 0x3f800000;
  local_1b8 = 0xbf800000;
  local_1b4 = 0xbf800000;
  local_1b0 = 0x3f80000000000000;
  local_16c = 5;
  local_160 = 0;
  local_15c = 1;
  local_158 = 0;
  local_178 = 0x30;
  local_170 = 0x10;
  local_88 = (BaseResource *)VertexBuffer__Create((tagVertexBufferCreation *)&local_178);
  pVVar8 = BaseResource__operator_new(0xa8,1);
                    /* try { // try from 004dcb49 to 004dcb4d has its CatchHandler @ 004dd73b */
  VertexStream__VertexStream__005a6980(pVVar8,1,1,3,0,&local_88,CGR__pPos2TexDecl);
  *(VertexStream **)((long)arg1 + 0x1aa0) = pVVar8;
  BaseResource__Release(local_88,0);
  local_168 = &local_1a8;
  local_1a0 = 0;
  local_1a8 = 0xbf800000;
  local_1a4 = 0x3f800000;
  local_198 = 0x3f80000000000000;
  local_190 = 0x3f000000;
  local_188 = 0xbf800000;
  local_180 = 0x3f00000000000000;
  local_178 = 0x30;
  local_170 = 0x10;
  local_16c = 5;
  local_88 = (BaseResource *)VertexBuffer__Create((tagVertexBufferCreation *)&local_178);
  pVVar8 = BaseResource__operator_new(0xa8,1);
                    /* try { // try from 004dcc62 to 004dcc66 has its CatchHandler @ 004dd7c7 */
  VertexStream__VertexStream__005a6980(pVVar8,1,1,3,0,&local_88,CGR__pPos2TexDecl);
  *(VertexStream **)((long)arg1 + 0x1aa8) = pVVar8;
  BaseResource__Release(local_88,0);
  local_168 = &local_218;
  local_210 = 0;
  local_218 = 0xbf800000;
  local_214 = 0x3f800000;
  local_208 = 0x3f800000;
  local_204 = 0x3f800000;
  local_200 = 0x3f800000;
  local_1f8 = 0xbf800000;
  local_1f0 = 0x3f00000000000000;
  local_1e8 = 0x3f800000;
  local_1e0 = 0x3f800000;
  local_1dc = 0x3f000000;
  local_178 = 0x40;
  local_170 = 0x10;
  local_16c = 5;
  local_88 = (BaseResource *)VertexBuffer__Create((tagVertexBufferCreation *)&local_178);
  pVVar8 = BaseResource__operator_new(0xa8,1);
                    /* try { // try from 004dcd7a to 004dcd7e has its CatchHandler @ 004dd7af */
  VertexStream__VertexStream__005a6980(pVVar8,1,2,4,2,&local_88,CGR__pPos2TexDecl);
  *(VertexStream **)((long)arg1 + 0x1a90) = pVVar8;
  BaseResource__Release(local_88,0);
  PropertiesFile__FindPropertyBlock
            (*(PropertiesFile **)((long)arg1 + 0x1a68),&local_80,"tiles",0);
  PropertiesFile__FindPropertyVariable
            (*(PropertiesFile **)((long)arg1 + 0x1a68),&local_78,local_80,"texturepackage");
  PropertiesFile__FindPropertyVariable
            (*(PropertiesFile **)((long)arg1 + 0x1a68),&local_70,local_80,"packageindex");
  PropertiesFile__FindPropertyVariable
            (*(PropertiesFile **)((long)arg1 + 0x1a68),&local_68,local_80,"tilesize");
  PropertiesFile__FindPropertyVariable
            (*(PropertiesFile **)((long)arg1 + 0x1a68),&local_60,local_80,"numtiles");
  psVar2 = (string *)((long)arg1 + 0x1a88);
  std__string_string((string *)local_e8,psVar2);
  strlen((char *)(local_78 + 0x20));
                    /* try { // try from 004dce72 to 004dce76 has its CatchHandler @ 004dd797 */
  std__string_append((char *)local_e8,(ulong)(local_78 + 0x20));
                    /* try { // try from 004dce83 to 004dcf44 has its CatchHandler @ 004dd78f */
  iVar6 = StringToInt(local_70 + 0x20);
  StringToInt(local_68 + 0x20);
  if (*(long *)(local_e8[0] + -0x18) != 0) {
    local_108[0] = local_e8[0];
                    /* try { // try from 004dd474 to 004dd478 has its CatchHandler @ 004dd78f */
    TexturePackage__TexturePackage((TexturePackage *)local_148,(TexturePackageCreate *)local_108);
                    /* try { // try from 004dd47e to 004dd4aa has its CatchHandler @ 004dd802 */
    pBVar9 = (BaseResource *)TexturePackage__CreateTexture((TexturePackage *)local_148,iVar6);
    fVar13 = (float)StringToFloat(local_60 + 0x20);
    this_00 = operator_new(0x18);
                    /* try { // try from 004dd4c0 to 004dd4c4 has its CatchHandler @ 004dd763 */
    TileTexture__TileTexture__005a0be0(this_00,(Texture *)pBVar9,(int)SQRT(fVar13),(int)SQRT(fVar13));
    *(TileTexture **)((long)arg1 + 0x30) = this_00;
                    /* try { // try from 004dd4ce to 004dd4d2 has its CatchHandler @ 004dd802 */
    BaseResource__Release(pBVar9,0);
                    /* try { // try from 004dd4d6 to 004dd4da has its CatchHandler @ 004dd78f */
    TexturePackage__TexturePackage__005a1b10((TexturePackage *)local_148);
  }
  if (0 < *(int *)((long)arg1 + 0x50)) {
    lVar11 = 0;
    iVar6 = 0;
    local_22c = 0;
    do {
      local_22c = PropertiesFile__FindPropertyBlock
                            (*(PropertiesFile **)((long)arg1 + 0x1a68),&local_58,"background",
                             local_22c);
      PropertiesFile__FindPropertyVariable
                (*(PropertiesFile **)((long)arg1 + 0x1a68),&local_50,local_58,"texturepackage");
      PropertiesFile__FindPropertyVariable
                (*(PropertiesFile **)((long)arg1 + 0x1a68),(PropertyVariable **)local_48,local_58
                 ,"packageindex");
      std__string_string((string *)local_108,psVar2);
      pPVar12 = local_50 + 0x20;
      strlen((char *)pPVar12);
                    /* try { // try from 004dcf67 to 004dcfa7 has its CatchHandler @ 004dd787 */
      std__string_append((char *)local_108,(ulong)pPVar12);
      iVar7 = StringToInt(local_48[0] + 0x20);
      local_d8[0] = local_108[0];
      TexturePackage__TexturePackage((TexturePackage *)local_148,(TexturePackageCreate *)local_d8);
                    /* try { // try from 004dcfae to 004dcfb2 has its CatchHandler @ 004dd785 */
      pBVar9 = (BaseResource *)TexturePackage__CreateTexture((TexturePackage *)local_148,iVar7);
      local_120 = 0;
      local_118 = 0xffffffff;
      local_128 = pBVar9;
                    /* try { // try from 004dcfda to 004dcfde has its CatchHandler @ 004dd77b */
      pSVar10 = operator_new(0x128);
                    /* try { // try from 004dcfed to 004dcff1 has its CatchHandler @ 004dd622 */
      Sprite__Sprite__005a0040(pSVar10,(SpriteCreation *)&local_128);
      *(Sprite **)(*(long *)((long)arg1 + 0x40) + lVar11) = pSVar10;
      pbVar3 = (byte *)(*(long *)(*(long *)((long)arg1 + 0x40) + lVar11) + 0x120);
      *pbVar3 = *pbVar3 | 1;
                    /* try { // try from 004dd00e to 004dd012 has its CatchHandler @ 004dd77b */
      BaseResource__Release(pBVar9,0);
                    /* try { // try from 004dd016 to 004dd01a has its CatchHandler @ 004dd787 */
      TexturePackage__TexturePackage__005a1b10((TexturePackage *)local_148);
      if ((allocator *)(local_108[0] + -0x18) !=
          (allocator *)&std__string_Rep_S_empty_rep_storage) {
        LOCK();
        piVar1 = (int *)(local_108[0] + -8);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 < 1) {
          std__string_Rep_M_destroy((allocator *)(local_108[0] + -0x18));
        }
      }
      iVar6 = iVar6 + 1;
      lVar11 = lVar11 + 8;
    } while (iVar6 < *(int *)((long)arg1 + 0x50));
  }
  local_c8 = &DAT_008184c8 /* R:0.00016803004837129265f */;
  local_b8[0] = &DAT_008184c8 /* R:0.00016803004837129265f */;
  if (0 < *(int *)((long)arg1 + 0x54)) {
    lVar11 = 0;
    iVar6 = 0;
    local_22c = 0;
    do {
                    /* try { // try from 004dd0a0 to 004dd104 has its CatchHandler @ 004dd5ff */
      local_22c = PropertiesFile__FindPropertyBlock
                            (*(PropertiesFile **)((long)arg1 + 0x1a68),local_48,"paralax",
                             local_22c);
      PropertiesFile__FindPropertyVariable
                (*(PropertiesFile **)((long)arg1 + 0x1a68),&local_50,local_48[0],"texturepackage"
                );
      PropertiesFile__FindPropertyVariable
                (*(PropertiesFile **)((long)arg1 + 0x1a68),(PropertyVariable **)&local_58,
                 local_48[0],"packageindex");
      pPVar12 = local_50;
      std__string_string((string *)local_a8,psVar2);
      strlen((char *)(pPVar12 + 0x20));
                    /* try { // try from 004dd11f to 004dd123 has its CatchHandler @ 004dd620 */
      std__string_append((char *)local_a8,(ulong)(pPVar12 + 0x20));
                    /* try { // try from 004dd131 to 004dd135 has its CatchHandler @ 004dd609 */
      std__string_assign((string *)local_b8);
      if ((allocator *)(local_a8[0] + -0x18) !=
          (allocator *)&std__string_Rep_S_empty_rep_storage) {
        LOCK();
        piVar1 = (int *)(local_a8[0] + -8);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 < 1) {
          std__string_Rep_M_destroy((allocator *)(local_a8[0] + -0x18));
        }
      }
      local_d8[0] = local_b8[0];
                    /* try { // try from 004dd172 to 004dd176 has its CatchHandler @ 004dd5ff */
      TexturePackage__TexturePackage((TexturePackage *)local_108,(TexturePackageCreate *)local_d8);
                    /* try { // try from 004dd183 to 004dd191 has its CatchHandler @ 004dd5ed */
      iVar7 = StringToInt(local_58 + 0x20);
      pBVar9 = (BaseResource *)TexturePackage__CreateTexture((TexturePackage *)local_108,iVar7);
      local_120 = 0;
      local_118 = 0xffffffff;
      local_128 = pBVar9;
                    /* try { // try from 004dd1b9 to 004dd1bd has its CatchHandler @ 004dd704 */
      pSVar10 = operator_new(0x128);
                    /* try { // try from 004dd1cc to 004dd1d0 has its CatchHandler @ 004dd753 */
      Sprite__Sprite__005a0040(pSVar10,(SpriteCreation *)&local_128);
      *(Sprite **)(*(long *)((long)arg1 + 0x38) + lVar11) = pSVar10;
      pbVar3 = (byte *)(*(long *)(*(long *)((long)arg1 + 0x38) + lVar11) + 0x120);
      *pbVar3 = *pbVar3 | 2;
                    /* try { // try from 004dd1ed to 004dd1f1 has its CatchHandler @ 004dd704 */
      BaseResource__Release(pBVar9,0);
                    /* try { // try from 004dd1f5 to 004dd2ed has its CatchHandler @ 004dd5ff */
      TexturePackage__TexturePackage__005a1b10((TexturePackage *)local_108);
      iVar6 = iVar6 + 1;
      lVar11 = lVar11 + 8;
    } while (iVar6 < *(int *)((long)arg1 + 0x54));
  }
  PropertiesFile__FindPropertyBlock
            (*(PropertiesFile **)((long)arg1 + 0x1a68),local_98,"setpieces",0);
  if (local_98[0] != (PropertyBlock *)0x0) {
    PropertiesFile__FindPropertyVariable
              (*(PropertiesFile **)((long)arg1 + 0x1a68),(PropertyVariable **)&local_58,
               local_98[0],"texturepackage");
    PropertiesFile__FindPropertyVariable
              (*(PropertiesFile **)((long)arg1 + 0x1a68),&local_50,local_98[0],"packageindex");
    PropertiesFile__FindPropertyVariable
              (*(PropertiesFile **)((long)arg1 + 0x1a68),(PropertyVariable **)local_48,
               local_98[0],"textureindex");
    std__string_string((string *)local_d8,psVar2);
    strlen((char *)(local_58 + 0x20));
                    /* try { // try from 004dd308 to 004dd30c has its CatchHandler @ 004dd7ff */
    std__string_append((char *)local_d8,(ulong)(local_58 + 0x20));
                    /* try { // try from 004dd325 to 004dd329 has its CatchHandler @ 004dd7f7 */
    std__string_string((string *)local_108,psVar2);
    strlen((char *)(local_48[0] + 0x20));
                    /* try { // try from 004dd33f to 004dd343 has its CatchHandler @ 004dd7e7 */
    std__string_append((char *)local_108,(ulong)(local_48[0] + 0x20));
    local_148[0] = local_d8[0];
                    /* try { // try from 004dd364 to 004dd368 has its CatchHandler @ 004dd7df */
    TexturePackage__TexturePackage((TexturePackage *)&local_128,(TexturePackageCreate *)local_148);
                    /* try { // try from 004dd375 to 004dd39d has its CatchHandler @ 004dd5e8 */
    iVar6 = StringToInt(local_50 + 0x20);
    pBVar9 = (BaseResource *)TexturePackage__CreateTexture((TexturePackage *)&local_128,iVar6);
    pcVar5 = local_108[0];
    self = operator_new(0x18);
                    /* try { // try from 004dd3aa to 004dd3ae has its CatchHandler @ 004dd584 */
    IndexTexture__IndexTexture__005a0fc0(self,(Texture *)pBVar9,pcVar5);
    *(IndexTexture **)((long)arg1 + 0x70) = self;
                    /* try { // try from 004dd3b8 to 004dd3bc has its CatchHandler @ 004dd5e8 */
    BaseResource__Release(pBVar9,0);
                    /* try { // try from 004dd3c5 to 004dd3c9 has its CatchHandler @ 004dd7df */
    TexturePackage__TexturePackage__005a1b10((TexturePackage *)&local_128);
    if ((allocator *)(local_108[0] + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage
       ) {
      LOCK();
      piVar1 = (int *)(local_108[0] + -8);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 < 1) {
        std__string_Rep_M_destroy((allocator *)(local_108[0] + -0x18));
      }
    }
    if ((allocator *)(local_d8[0] + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage)
    {
      LOCK();
      piVar1 = (int *)(local_d8[0] + -8);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 < 1) {
        std__string_Rep_M_destroy((allocator *)(local_d8[0] + -0x18));
      }
    }
  }
  if ((allocator *)(local_b8[0] + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage) {
    LOCK();
    piVar1 = (int *)(local_b8[0] + -8);
    iVar6 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar6 < 1) {
      std__string_Rep_M_destroy((allocator *)(local_b8[0] + -0x18));
    }
  }
  if ((allocator *)(local_c8 + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage) {
    LOCK();
    piVar1 = (int *)(local_c8 + -8);
    iVar6 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar6 < 1) {
      std__string_Rep_M_destroy((allocator *)(local_c8 + -0x18));
    }
  }
  if ((allocator *)(local_e8[0] + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage) {
    LOCK();
    piVar1 = (int *)(local_e8[0] + -8);
    iVar6 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar6 < 1) {
      std__string_Rep_M_destroy((allocator *)(local_e8[0] + -0x18));
    }
  }
  return;
}

/* ======================================================================
 * ModifyReplayBlock  (Ghidra `ModifyReplayBlock` @ 004e0080)
 * Signature: uint8_t __stdcall ModifyReplayBlock(ResizeableArray * arg1, GRIDBLOCK * arg2, GRIDBLOCK * arg3)
 * Calls: (none)
 * Called by: (none)
 */
/* ModifyReplayBlock(ResizeableArray<ReplayBreakyBlock>&, GRIDBLOCK*, GRIDBLOCK&) */

void ModifyReplayBlock(ResizeableArray *arg1,GRIDBLOCK *arg2,GRIDBLOCK *arg3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  if (*(short *)(arg1 + 0x28) == 0) {
    return;
  }
  plVar1 = *(long **)(arg1 + 0x38);
  plVar3 = plVar1;
  if ((GRIDBLOCK *)*plVar1 != arg2) {
    lVar2 = 0x10;
    do {
      if (lVar2 == ((ulong)(ushort)(*(short *)(arg1 + 0x28) - 1) + 1) * 0x10) {
        return;
      }
      plVar3 = (long *)((long)plVar1 + lVar2);
      lVar2 = lVar2 + 0x10;
    } while ((GRIDBLOCK *)*plVar3 != arg2);
  }
  *arg3 = (GRIDBLOCK)((int)plVar3[1] != 4);
  return;
}

/* ======================================================================
 * SMBBGLoaderThread  (Ghidra `SMBBGLoaderThread` @ 004f7dd0)
 * Signature: uint8_t SMBBGLoaderThread(void)
 * Calls: `SMBPalette__SMBPalette__004f3ca0`, `SyncEvent__Set`
 * Called by: (none)
 */
uint64_t SMBBGLoaderThread(SyncEvent *arg1)

{
  char *pcVar1;
  SMBPalette *self;
  
  pcVar1 = *(char **)(arg1 + 0x70);
  self = BaseResource__operator_new(0x43d8,0);
                    /* try { // try from 004f7dff to 004f7e03 has its CatchHandler @ 004f7e25 */
  SMBPalette__SMBPalette__004f3ca0(self,pcVar1);
  *(SMBPalette **)(arg1 + 0x68) = self;
  SyncEvent__Set(arg1);
  return 0;
}

/* ======================================================================
 * SMBMessageUpsellUpdate  (Ghidra `SMBMessageUpsellUpdate` @ 005018b0)
 * Signature: uint8_t __stdcall SMBMessageUpsellUpdate(void * arg1)
 * Calls: (none)
 * Called by: `SMBUpsellMenu__Activate`
 */
/* SMBMessageUpsellUpdate(void*) */

void SMBMessageUpsellUpdate(void *arg1)

{
  return;
}

/* ======================================================================
 * SMBMoveOnUpdate  (Ghidra `SMBMoveOnUpdate` @ 005018e0)
 * Signature: uint8_t __stdcall SMBMoveOnUpdate(void * arg1)
 * Calls: (none)
 * Called by: `SMBMoveOn__Activate`
 */
/* SMBMoveOnUpdate(void*) */

void SMBMoveOnUpdate(void *arg1)

{
  return;
}

/* ======================================================================
 * SMBPopupDeActivateMenu  (Ghidra `SMBPopupDeActivateMenu` @ 00501eb0)
 * Signature: uint8_t __stdcall SMBPopupDeActivateMenu(tagButtonProps * arg1, void * arg2)
 * Calls: (none)
 * Called by: `GLOBAL_sub_I_SMBPopupDeActivateMenu`, `SMBHowToPlayMenu__Activate`, `SMBPopupMenu__Activate`
 */
/* SMBPopupDeActivateMenu(tagButtonProps const*, void*) */

void SMBPopupDeActivateMenu(tagButtonProps *arg1,void *arg2)

{
  if (*(int *)arg1 != 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00501eca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)arg2 + 0x28))(arg2);
  return;
}

/* ======================================================================
 * SMBUpsellExit  (Ghidra `SMBUpsellExit` @ 00501ed0)
 * Signature: uint8_t __stdcall SMBUpsellExit(tagButtonProps * arg1, void * arg2)
 * Calls: (none)
 * Called by: `SMBMessageUpsellControls`, `SMBUpsellMenu__SetUpsellControls`
 */
/* SMBUpsellExit(tagButtonProps const*, void*) */

void SMBUpsellExit(tagButtonProps *arg1,void *arg2)

{
  if (*(int *)arg1 != 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00501ef3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(SuperMeatBoy + 0x20) + 0x30))(SuperMeatBoy + 0x20);
  return;
}

/* ======================================================================
 * SMBUpsellBuy  (Ghidra `SMBUpsellBuy` @ 00501f30)
 * Signature: uint8_t __stdcall SMBUpsellBuy(tagButtonProps * arg1, void * arg2)
 * Calls: `System_PurchaseFullGame`, `TPlayer__GetProfile`
 * Called by: `SMBMessageUpsellControls`, `SMBUpsellMenu__SetUpsellControls`
 */
/* SMBUpsellBuy(tagButtonProps const*, void*) */

void SMBUpsellBuy(tagButtonProps *arg1,void *arg2)

{
  long lVar1;
  
  if (*(int *)arg1 != 1) {
    return;
  }
  lVar1 = TPlayer__GetProfile((TPlayer *)Players__Player);
  System_PurchaseFullGame(*(uint32_t *)(lVar1 + 0x14));
  return;
}

/* ======================================================================
 * SMBUpsellContinue  (Ghidra `SMBUpsellContinue` @ 00502130)
 * Signature: uint8_t __stdcall SMBUpsellContinue(tagButtonProps * arg1, void * arg2)
 * Calls: `RunCancelFunction`
 * Called by: `SMBMessageUpsellControls`, `SMBUpsellMenu__SetUpsellControls`
 */
/* SMBUpsellContinue(tagButtonProps const*, void*) */

void SMBUpsellContinue(tagButtonProps *arg1,void *arg2)

{
  if (*(int *)arg1 != 1) {
    return;
  }
  if (*(char *)(pCurrUpsellMenu + 0xb3) != '\0') {
    *(uint8_t *)(pCurrUpsellMenu + 0xb3) = 0;
    return;
  }
  RunCancelFunction();
  return;
}

/* ======================================================================
 * SMBMessageUpsellControls  (Ghidra `SMBMessageUpsellControls` @ 00502c80)
 * Signature: uint8_t __stdcall SMBMessageUpsellControls(void * arg1)
 * Calls: `Joystick__AddButtonCallback`, `SMBUpsellBuy`, `SMBUpsellContinue`, `SMBUpsellExit`, `TPlayer__GetJoystick`
 * Called by: `SMBUpsellMenu__Activate`
 */
/* SMBMessageUpsellControls(void*) */

void SMBMessageUpsellControls(void *arg1)

{
  long lVar1;
  Joystick *pJVar2;
  
  lVar1 = pCurrUpsellMenu;
  pJVar2 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddButtonCallback(pJVar2,2,SMBUpsellBuy,0);
  if (*(short *)(lVar1 + 0xb0) != 0) {
    return;
  }
  if (*(char *)(lVar1 + 0xb2) != '\x01') {
    pJVar2 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
    Joystick__AddButtonCallback(pJVar2,0,SMBUpsellExit,0);
    return;
  }
  pJVar2 = (Joystick *)TPlayer__GetJoystick((TPlayer *)Players__Player);
  Joystick__AddButtonCallback(pJVar2,0,SMBUpsellContinue,0);
  return;
}

/* ======================================================================
 * SMBCharSwitchMoveSelect  (Ghidra `SMBCharSwitchMoveSelect` @ 00502d00)
 * Signature: uint8_t __stdcall SMBCharSwitchMoveSelect(tagButtonProps * arg1, void * arg2)
 * Calls: `GSMBChapterData__IsCharacterUnlocked`, `GSuperMeatBoy__DeferLoadCharactor`
 * Called by: `SMBCharSwitch__Activate`
 */
/* SMBCharSwitchMoveSelect(tagButtonProps const*, void*) */

void SMBCharSwitchMoveSelect(tagButtonProps *arg1,void *arg2)

{
  GSuperMeatBoy *pGVar1;
  int iVar2;
  
  if ((arg1 != (tagButtonProps *)0x0) && (*(int *)arg1 == 1)) {
    iVar2 = GSMBChapterData__IsCharacterUnlocked
                      (SMBChapterData,(&DAT_00817108 /* R:0.0f */)[(long)*(int *)((long)arg2 + 0x68) * 4]);
    pGVar1 = SuperMeatBoy;
    if (iVar2 == 1) {
      *(uint32_t *)((long)arg2 + 0x6c) = 1;
      GSuperMeatBoy__DeferLoadCharactor
                (pGVar1,(&DAT_00817108 /* R:0.0f */)[(long)*(int *)((long)arg2 + 0x68) * 4]);
                    /* WARNING: Could not recover jumptable at 0x00502d5b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)arg2 + 0x28))(arg2);
      return;
    }
  }
  return;
}

/* ======================================================================
 * SMBCharSwitchMoveUp  (Ghidra `SMBCharSwitchMoveUp` @ 00503c90)
 * Signature: uint8_t __stdcall SMBCharSwitchMoveUp(tagButtonProps * arg1, void * arg2)
 * Calls: `GSMBChapterData__IsCharacterUnlocked`, `GetLocalizedText`
 * Called by: `SMBCharSwitch__Activate`
 */
/* SMBCharSwitchMoveUp(tagButtonProps const*, void*) */

void SMBCharSwitchMoveUp(tagButtonProps *arg1,void *arg2)

{
  GSMBChapterData *pGVar1;
  int iVar2;
  uint64_t uVar3;
  
  pGVar1 = SMBChapterData;
  if ((arg1 == (tagButtonProps *)0x0) || (*(int *)arg1 != 1)) {
    return;
  }
  iVar2 = *(int *)((long)arg2 + 0x68) + -6;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  *(int *)((long)arg2 + 0x68) = iVar2;
  iVar2 = GSMBChapterData__IsCharacterUnlocked(pGVar1,(&DAT_00817108 /* R:0.0f */)[(long)iVar2 * 4]);
  if (iVar2 != 1) {
    FlashTextField__SetText(*(char **)((long)arg2 + 0x58),&DAT_005c741a /* R:"??????" */);
    return;
  }
  uVar3 = GetLocalizedText(*(uint *)(&DAT_0081710c /* R:3.685414961174269e-43f */ + (long)*(int *)((long)arg2 + 0x68) * 0x10));
  FlashTextField__SetText(*(wchar_t **)((long)arg2 + 0x58),uVar3);
  return;
}

/* ======================================================================
 * SMBCharSwitchMoveLeft  (Ghidra `SMBCharSwitchMoveLeft` @ 00503d10)
 * Signature: uint8_t __stdcall SMBCharSwitchMoveLeft(tagButtonProps * arg1, void * arg2)
 * Calls: `GSMBChapterData__IsCharacterUnlocked`, `GetLocalizedText`
 * Called by: `SMBCharSwitch__Activate`
 */
/* SMBCharSwitchMoveLeft(tagButtonProps const*, void*) */

void SMBCharSwitchMoveLeft(tagButtonProps *arg1,void *arg2)

{
  GSMBChapterData *pGVar1;
  int iVar2;
  uint64_t uVar3;
  
  pGVar1 = SMBChapterData;
  if ((arg1 == (tagButtonProps *)0x0) || (*(int *)arg1 != 1)) {
    return;
  }
  iVar2 = *(int *)((long)arg2 + 0x68) + -1;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  *(int *)((long)arg2 + 0x68) = iVar2;
  iVar2 = GSMBChapterData__IsCharacterUnlocked(pGVar1,(&DAT_00817108 /* R:0.0f */)[(long)iVar2 * 4]);
  if (iVar2 != 1) {
    FlashTextField__SetText(*(char **)((long)arg2 + 0x58),&DAT_005c741a /* R:"??????" */);
    return;
  }
  uVar3 = GetLocalizedText(*(uint *)(&DAT_0081710c /* R:3.685414961174269e-43f */ + (long)*(int *)((long)arg2 + 0x68) * 0x10));
  FlashTextField__SetText(*(wchar_t **)((long)arg2 + 0x58),uVar3);
  return;
}

/* ======================================================================
 * SMBMessageUpsellFinished  (Ghidra `SMBMessageUpsellFinished` @ 00504a60)
 * Signature: uint8_t __stdcall SMBMessageUpsellFinished(void * arg1)
 * Calls: `GMeatHUD__RestoreMessageBoxFunctions`
 * Called by: (none)
 */
/* SMBMessageUpsellFinished(void*) */

void SMBMessageUpsellFinished(void *arg1)

{
  GMeatHUD__RestoreMessageBoxFunctions();
  return;
}

/* ======================================================================
 * SMBMessageUpsellRender  (Ghidra `SMBMessageUpsellRender` @ 00505040)
 * Signature: uint8_t __stdcall SMBMessageUpsellRender(void * arg1, tagUAState arg2)
 * Calls: `SMBUpsellMenu__MessageBoxRender`
 * Called by: `SMBUpsellMenu__Activate`
 */
/* SMBMessageUpsellRender(void*, tagUAState) */

void SMBMessageUpsellRender(void)

{
  SMBUpsellMenu__MessageBoxRender(pCurrUpsellMenu);
  return;
}

/* ======================================================================
 * SMBCharSwitchMoveDown  (Ghidra `SMBCharSwitchMoveDown` @ 00505230)
 * Signature: uint8_t __stdcall SMBCharSwitchMoveDown(tagButtonProps * arg1, void * arg2)
 * Calls: `SMBCharSwitch__MoveDown`
 * Called by: `SMBCharSwitch__Activate`
 */
/* SMBCharSwitchMoveDown(tagButtonProps const*, void*) */

void SMBCharSwitchMoveDown(tagButtonProps *arg1,void *arg2)

{
  if ((arg1 != (tagButtonProps *)0x0) && (*(int *)arg1 == 1)) {
    SMBCharSwitch__MoveDown(arg2);
    return;
  }
  return;
}

/* ======================================================================
 * SMBCharSwitchMoveRight  (Ghidra `SMBCharSwitchMoveRight` @ 00505380)
 * Signature: uint8_t __stdcall SMBCharSwitchMoveRight(tagButtonProps * arg1, void * arg2)
 * Calls: `SMBCharSwitch__MoveRight`
 * Called by: `SMBCharSwitch__Activate`
 */
/* SMBCharSwitchMoveRight(tagButtonProps const*, void*) */

void SMBCharSwitchMoveRight(tagButtonProps *arg1,void *arg2)

{
  if ((arg1 != (tagButtonProps *)0x0) && (*(int *)arg1 == 1)) {
    SMBCharSwitch__MoveRight(arg2);
    return;
  }
  return;
}

/* ======================================================================
 * SMBMoveOnFinished  (Ghidra `SMBMoveOnFinished` @ 00505460)
 * Signature: uint8_t __stdcall SMBMoveOnFinished(void * arg1)
 * Calls: `GMeatHUD__RestoreMessageBoxFunctions`
 * Called by: (none)
 */
/* SMBMoveOnFinished(void*) */

void SMBMoveOnFinished(void *arg1)

{
  GMeatHUD__RestoreMessageBoxFunctions();
  return;
}

/* ======================================================================
 * SMBMoveOnRender  (Ghidra `SMBMoveOnRender` @ 005056e0)
 * Signature: uint8_t __stdcall SMBMoveOnRender(void * arg1, tagUAState arg2)
 * Calls: `SMBMoveOn__MessageBoxRender`
 * Called by: `SMBMoveOn__Activate`
 */
/* SMBMoveOnRender(void*, tagUAState) */

void SMBMoveOnRender(void)

{
  SMBMoveOn__MessageBoxRender(pCurrMoveOnMenu);
  return;
}
