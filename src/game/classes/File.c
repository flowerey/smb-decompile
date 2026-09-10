/* src/game/classes/File.c — 12 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "File.h"

/* ======================================================================
 * File__File  (Ghidra `File` @ 005b76d0)
 * Signature: uint8_t __thiscall File(File * self, tagFileCreation * arg1)
 * Class: File
 * Calls: `CriticalSection__Lock`, `CriticalSection__Unlock`, `FilePackage__GetFileFromPackage`, `FixFileCase`, `Sprint`, `close`, `malloc`, `open`, `read`, `strerror` (+1 more)
 * Called by: `AudioFile__AudioFile`, `EditorForm_UploadFormOk`, `ErrorLog__Initialize`, `FilePackage__FilePackage`, `FilePackage__FilePackage__005b5c90`, `FlashAnimationLibrary__FlashAnimationLibrary__00576680`, `FragmentLinker__CreateFromCache`, `FragmentLinker__FragmentLinker__00587530`, `GSMBChapterData__ReloadData`, `GameRegistry__Flush` (+18 more)
 */
/* WARNING: Removing unreachable block (ram,0x005b79d7) */
/* WARNING: Removing unreachable block (ram,0x005b7a49) */
/* WARNING: Removing unreachable block (ram,0x005b7a56) */
/* WARNING: Removing unreachable block (ram,0x005b7a20) */
/* WARNING: Removing unreachable block (ram,0x005b7a35) */
/* WARNING: Removing unreachable block (ram,0x005b79ce) */
/* File__File(tagFileCreation const*) */

void __thiscall File__File(File *self,tagFileCreation *arg1)

{
  uint32_t uVar1;
  FilePackage *pFVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  size_t sVar6;
  void *__buf;
  long lVar7;
  char *pcVar8;
  FilePackage *this_00;
  stat *psVar9;
  int __oflag;
  uint uVar10;
  bool bVar11;
  byte bVar12;
  stat asStack_448 [7];
  char *local_48 [2];
  uint local_38 [2];
  uint local_30 [2];
  
  bVar12 = 0;
  *(uint32_t *)self = 0xffffffff;
  *(uint64_t *)(self + 0x28) = 0;
  uVar10 = *(uint *)(arg1 + 0x10);
  *(uint32_t *)(self + 0x18) = 0;
  *(uint *)(self + 8) = uVar10;
  if (*(long *)(arg1 + 0x18) == 0) {
    if (**(char **)(arg1 + 8) == 'r') {
      pcVar5 = *(char **)arg1;
      sVar6 = strlen(pcVar5);
      pFVar2 = GameFilePackage;
      this_00 = GameAudioPackage;
      lVar7 = 0;
      if (3 < (int)sVar6) {
        lVar7 = (long)((int)sVar6 + -4);
      }
      pcVar5 = pcVar5 + lVar7;
      bVar11 = pcVar5 == (char *)0x0;
      lVar7 = 5;
      pcVar8 = ".wav";
      do {
        if (lVar7 == 0) break;
        lVar7 = lVar7 + -1;
        bVar11 = *pcVar8 == *pcVar5;
        pcVar8 = pcVar8 + (ulong)bVar12 * -2 + 1;
        pcVar5 = pcVar5 + (ulong)bVar12 * -2 + 1;
      } while (bVar11);
      if (bVar11) {
        *(FilePackage **)(self + 0x28) = GameAudioPackage;
      }
      else {
        *(FilePackage **)(self + 0x28) = GameFilePackage;
        this_00 = pFVar2;
      }
      if ((this_00 != (FilePackage *)0x0) && (*(int *)(arg1 + 0x2c) == 0)) {
        FilePackage__GetFileFromPackage(this_00,*(char **)arg1,local_30,local_38,(void **)0x0);
        if ((local_30[0] == 0) || (local_38[0] == 0)) {
          uVar10 = *(uint *)(self + 8);
        }
        else {
          *(uint *)(self + 4) = local_30[0];
          *(uint *)(self + 0x1c) = local_38[0];
          *(uint32_t *)(self + 0x18) = 0;
          uVar10 = *(uint *)(self + 8) | 0x20;
          *(uint *)(self + 8) = uVar10;
        }
      }
    }
    if ((uVar10 & 0x20) == 0) {
      __oflag = 0x442;
      if ((**(char **)(arg1 + 8) != 'a') && (__oflag = 0x242, **(char **)(arg1 + 8) != 'w')) {
        __oflag = 0;
      }
      do {
        CriticalSection__Lock((CriticalSection *)fileOpenSection,1);
        FixFileCase((char *)local_48);
                    /* try { // try from 005b77dd to 005b77e1 has its CatchHandler @ 005b79bb */
        iVar3 = open(local_48[0],__oflag,0x180);
        *(int *)self = iVar3;
        if ((allocator *)(local_48[0] + -0x18) !=
            (allocator *)&std__string_Rep_S_empty_rep_storage) {
          LOCK();
          piVar4 = (int *)(local_48[0] + -8);
          iVar3 = *piVar4;
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (iVar3 < 1) {
            std__string_Rep_M_destroy((allocator *)(local_48[0] + -0x18));
          }
        }
        CriticalSection__Unlock((CriticalSection *)fileOpenSection);
        iVar3 = *(int *)self;
        if (iVar3 != -1) {
          psVar9 = asStack_448;
          for (lVar7 = 0x12; lVar7 != 0; lVar7 = lVar7 + -1) {
            psVar9->st_dev = 0;
            psVar9 = (stat *)((long)psVar9 + ((ulong)bVar12 * -2 + 1) * 8);
          }
          __fxstat(1,iVar3,asStack_448);
          *(uint *)(self + 4) = (uint)asStack_448[0].st_size;
          *(__time_t *)(self + 0x20) = asStack_448[0].st_mtim.tv_sec;
          if (((0x4fffff < (uint)asStack_448[0].st_size) || (**(char **)(arg1 + 8) != 'r')) &&
             (((byte)self[8] & 0x40) == 0)) {
            return;
          }
          __buf = malloc(asStack_448[0].st_size & 0xffffffffU);
          *(void **)(self + 0x10) = __buf;
          read(*(int *)self,__buf,asStack_448[0].st_size & 0xffffffffU);
          *(uint *)(self + 8) = *(uint *)(self + 8) | 0x10;
          close(*(int *)self);
          *(uint32_t *)self = 0xfffffffe;
          return;
        }
        piVar4 = __errno_location();
        iVar3 = *piVar4;
      } while ((iVar3 - 0x17U < 2) || (iVar3 == 4));
      pcVar5 = strerror(iVar3);
      Sprint("Could not open file: %s \n Returned Error: %i (%s)",asStack_448,*(uint64_t *)arg1
             ,*piVar4,pcVar5);
      Error__ThrowFatalError((char *)asStack_448);
    }
  }
  else {
    *(long *)(self + 0x10) = *(long *)(arg1 + 0x18);
    uVar1 = *(uint32_t *)(arg1 + 0x20);
    *(uint *)(self + 8) = uVar10 | 8;
    *(uint32_t *)(self + 4) = uVar1;
  }
  return;
}

/* ======================================================================
 * File__File__005b7a70  (Ghidra `~File` @ 005b7a70)
 * Signature: uint8_t __thiscall ~File(File * self)
 * Class: File
 * Calls: `close`, `free`
 * Called by: `AudioFile__AudioFile`, `AudioFile__AudioFile__005a75c0`, `CloseFile`, `EditorForm_UploadFormOk`, `ErrorLog__ErrorLog__005b6fc0`, `FilePackage__FilePackage__005b5f40`, `FlashAnimationLibrary__FlashAnimationLibrary__00576680`, `FragmentLinker__CreateFromCache`, `FragmentLinker__FragmentLinker__00587530`, `GSMBChapterData__ReloadData` (+18 more)
 */
/* File__File__005b7a70() */

void __thiscall File__File__005b7a70(File *self)

{
  uint uVar1;
  
  uVar1 = *(uint *)(self + 8);
  if ((uVar1 & 0x18) == 0) {
    if (((uVar1 & 0x20) == 0) && (1 < *(int *)self + 2U)) {
      close(*(int *)self);
      return;
    }
  }
  else if ((uVar1 & 0x10) != 0) {
    free(*(void **)(self + 0x10));
    *(uint64_t *)(self + 0x10) = 0;
    return;
  }
  return;
}

/* ======================================================================
 * File__EndOfFile  (Ghidra `EndOfFile` @ 005b7ac0)
 * Signature: uint8_t __stdcall EndOfFile(void)
 * Class: File
 * Calls: `DebugMsg`
 * Called by: `ModelLoader__ModelLoader__005942a0`
 */
/* File__EndOfFile() */

uint64_t File__EndOfFile(void)

{
  DebugMsg("EndOfFile function not implemented");
  return 0;
}

/* ======================================================================
 * File__Reset  (Ghidra `Reset` @ 005b7ae0)
 * Signature: uint8_t __thiscall Reset(File * self)
 * Class: File
 * Calls: `lseek`
 * Called by: `AudioFile__AudioFile`, `GSMBChapterData__ReloadData`, `IndexTexture__IndexTexture__005a0fc0`, `ModelLoader__ModelLoader__005942a0`, `gfxCreateTexture`
 */
/* File__Reset() */

void __thiscall File__Reset(File *self)

{
  if (((byte)self[8] & 0x38) != 0) {
    *(uint32_t *)(self + 0x18) = 0;
    return;
  }
  lseek(*(int *)self,0,0);
  return;
}

/* ======================================================================
 * File__GetFilePos  (Ghidra `GetFilePos` @ 005b7b00)
 * Signature: uint8_t __thiscall GetFilePos(File * self)
 * Class: File
 * Calls: `lseek`
 * Called by: `AudioFile__AudioFile`, `FlashAnimationLibrary__FlashAnimationLibrary__00576680`
 */
/* File__GetFilePos() */

ulong __thiscall File__GetFilePos(File *self)

{
  ulong uVar1;
  
  if (((byte)self[8] & 0x38) != 0) {
    return (ulong)*(uint *)(self + 0x18);
  }
  uVar1 = lseek(*(int *)self,0,1);
  return uVar1;
}

/* ======================================================================
 * File__Seek  (Ghidra `Seek` @ 005b7b30)
 * Signature: uint8_t __thiscall Seek(File * self, int arg1)
 * Class: File
 * Calls: `lseek`
 * Called by: `AudioFile__AudioFile`, `AudioFile__ManuallyFillStreamBuffer`, `AudioFile__ReadFileToTag`, `AudioFile__ResetStream`, `AudioStreamingFunc`, `FlashAnimationLibrary__FlashAnimationLibrary__00576680`, `VerifyLevelData`
 */
/* File__Seek(int) */

void __thiscall File__Seek(File *self,int arg1)

{
  if (((byte)self[8] & 0x38) != 0) {
    *(int *)(self + 0x18) = arg1;
    return;
  }
  lseek(*(int *)self,(long)arg1,0);
  return;
}

/* ======================================================================
 * File__Read  (Ghidra `Read` @ 005b7b50)
 * Signature: uint8_t __thiscall Read(File * self, void * arg1, uint arg2)
 * Class: File
 * Calls: `FilePackage__Read`, `memcpy`, `read`
 * Called by: `AudioFile__AudioFile`, `AudioFile__ManuallyFillStreamBuffer`, `AudioFile__ReadFileToTag`, `AudioFile__ResetStream`, `AudioStreamingFunc`, `FilePackage__FilePackage`, `FilePackage__FilePackage__005b5c90`, `FlashAnimationLibrary__FlashAnimationLibrary__00576680`, `FragmentLinker__FragmentLinker__00587530`, `GSMBChapterData__ReloadData` (+16 more)
 */
/* File__Read(void*, unsigned int) */

ulong __thiscall File__Read(File *self,void *arg1,uint arg2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if ((*(uint *)(self + 8) & 0x18) != 0) {
    uVar2 = *(uint *)(self + 0x18);
    uVar1 = *(int *)(self + 4) - uVar2;
    if (arg2 <= *(int *)(self + 4) - uVar2) {
      uVar1 = arg2;
    }
    if ((void *)((ulong)uVar2 + *(long *)(self + 0x10)) != arg1) {
      memcpy(arg1,(void *)((ulong)uVar2 + *(long *)(self + 0x10)),(ulong)uVar1);
      uVar2 = *(uint *)(self + 0x18);
    }
    *(uint *)(self + 0x18) = uVar2 + uVar1;
    return (ulong)uVar1;
  }
  if ((*(uint *)(self + 8) & 0x20) == 0) {
    uVar3 = read(*(int *)self,arg1,(ulong)arg2);
    uVar4 = 0;
    if (-1 < (long)uVar3) {
      uVar4 = uVar3;
    }
    return uVar4 & 0xffffffff;
  }
  uVar2 = *(int *)(self + 4) - *(int *)(self + 0x18);
  if (arg2 <= uVar2) {
    uVar2 = arg2;
  }
  FilePackage__Read(*(FilePackage **)(self + 0x28),arg1,
                    *(int *)(self + 0x1c) + *(int *)(self + 0x18),uVar2);
  *(uint *)(self + 0x18) = *(int *)(self + 0x18) + uVar2;
  return (ulong)uVar2;
}

/* ======================================================================
 * File__ReadVariable  (Ghidra `ReadVariable` @ 005b7c00)
 * Signature: uint8_t __thiscall ReadVariable(File * self, void * arg1, uint arg2)
 * Class: File
 * Calls: `FilePackage__Read`, `memcpy`, `read`
 * Called by: `AudioFile__AudioFile`, `AudioFile__ReadFileToTag`, `FilePackage__FilePackage`, `FilePackage__FilePackage__005b5c90`, `FlashAnimationLibrary__FlashAnimationLibrary__00576680`, `FragmentLinker__CreateFromCache`, `GSetPieceWayPoints__LoadWayPointData`, `GameRegistry__GameRegistry__005b6430`, `GetPaletteFromLevelFile`, `GetReplayFileHeader` (+9 more)
 */
/* File__ReadVariable(void*, unsigned int) */

ulong __thiscall File__ReadVariable(File *self,void *arg1,uint arg2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if ((*(uint *)(self + 8) & 0x18) != 0) {
    uVar2 = *(uint *)(self + 0x18);
    uVar1 = *(int *)(self + 4) - uVar2;
    if (arg2 <= *(int *)(self + 4) - uVar2) {
      uVar1 = arg2;
    }
    if ((void *)((ulong)uVar2 + *(long *)(self + 0x10)) != arg1) {
      memcpy(arg1,(void *)((ulong)uVar2 + *(long *)(self + 0x10)),(ulong)uVar1);
      uVar2 = *(uint *)(self + 0x18);
    }
    *(uint *)(self + 0x18) = uVar2 + uVar1;
    return (ulong)uVar1;
  }
  if ((*(uint *)(self + 8) & 0x20) == 0) {
    uVar3 = read(*(int *)self,arg1,(ulong)arg2);
    uVar4 = 0;
    if (-1 < (long)uVar3) {
      uVar4 = uVar3;
    }
    return uVar4 & 0xffffffff;
  }
  uVar2 = *(int *)(self + 4) - *(int *)(self + 0x18);
  if (arg2 <= uVar2) {
    uVar2 = arg2;
  }
  FilePackage__Read(*(FilePackage **)(self + 0x28),arg1,
                    *(int *)(self + 0x1c) + *(int *)(self + 0x18),uVar2);
  *(uint *)(self + 0x18) = *(int *)(self + 0x18) + uVar2;
  return (ulong)uVar2;
}

/* ======================================================================
 * File__ReadArray  (Ghidra `ReadArray` @ 005b7c10)
 * Signature: uint8_t __thiscall ReadArray(File * self, uchar * arg1, uint arg2, uint arg3)
 * Class: File
 * Calls: (none)
 * Called by: `GSetPieceWayPoints__LoadWayPointData`, `LoadLevelFromFile`, `LoadReplayData`, `MeatBoyCharactor__MeatBoyCharactor__0047b350`, `SMBLevelLoad`, `SMBLevelVerify`, `VerifyLevelData`
 */
/* File__ReadArray(unsigned char*, unsigned int, unsigned int) */

void __thiscall File__ReadArray(File *self,uchar *arg1,uint arg2,uint arg3)

{
  uchar *puVar1;
  uint uVar2;
  ulong uVar3;
  
  if (arg2 != 0) {
    uVar3 = 0;
    uVar2 = 0;
    do {
      puVar1 = arg1 + uVar3;
      uVar2 = uVar2 + 1;
      uVar3 = (ulong)((int)uVar3 + arg3);
      Read(self,puVar1,arg3);
    } while (uVar2 != arg2);
  }
  return;
}

/* ======================================================================
 * File__Write  (Ghidra `Write` @ 005b7e20)
 * Signature: uint8_t __thiscall Write(File * self, void * arg1, uint arg2)
 * Class: File
 * Calls: `write`
 * Called by: `ErrorLog__Write`, `GSMBChapterData__ReloadData`, `GSetPieceWayPoints__SaveWayPointData`, `GameRegistry__Flush`, `MeatBoyCharactor__MeatBoyCharactor__0047b350`, `MeatBoyCharactor__WritePropertiesToFile`, `SMBLevelSave`, `SaveLevel`, `UnixUserProfile__WriteData`
 */
/* File__Write(void const*, unsigned int) */

void __thiscall File__Write(File *self,void *arg1,uint arg2)

{
  if (arg1 != (void *)0x0) {
    write(*(int *)self,arg1,(ulong)arg2);
    return;
  }
  return;
}

/* ======================================================================
 * File__WriteArray  (Ghidra `WriteArray` @ 005b7e40)
 * Signature: uint8_t __thiscall WriteArray(File * self, uchar * arg1, uint arg2, uint arg3)
 * Class: File
 * Calls: `write`
 * Called by: `GSetPieceWayPoints__SaveWayPointData`, `MeatBoyCharactor__WritePropertiesToFile`, `SMBLevelSave`, `SaveLevel`
 */
/* File__WriteArray(unsigned char const*, unsigned int, unsigned int) */

void __thiscall File__WriteArray(File *self,uchar *arg1,uint arg2,uint arg3)

{
  uint uVar1;
  ulong uVar2;
  
  if (arg2 != 0) {
    uVar2 = 0;
    uVar1 = 0;
    do {
      if (arg1 + uVar2 != (uchar *)0x0) {
        write(*(int *)self,arg1 + uVar2,(ulong)arg3);
      }
      uVar1 = uVar1 + 1;
      uVar2 = (ulong)((int)uVar2 + arg3);
    } while (uVar1 != arg2);
  }
  return;
}

/* ======================================================================
 * File__GetFileDate  (Ghidra `GetFileDate` @ 005b7fb0)
 * Signature: uint8_t __thiscall GetFileDate(File * self, SystemFileTime * arg1)
 * Class: File
 * Calls: `localtime_r`
 * Called by: `SMBReplay__GetReplayFileHeader`
 */
/* File__GetFileDate(SystemFileTime*) */

void __thiscall File__GetFileDate(File *self,SystemFileTime *arg1)

{
  uint16_t uVar1;
  tm local_48;
  
  localtime_r((time_t *)(self + 0x20),&local_48);
  *(short *)arg1 = (short)local_48.tm_mon + 1;
  *(uint16_t *)(arg1 + 2) = (uint16_t)local_48.tm_mday;
  *(short *)(arg1 + 4) = (short)local_48.tm_year + 0x76c;
  *(uint16_t *)(arg1 + 6) = (uint16_t)local_48.tm_hour;
  uVar1 = 0x3b;
  if (local_48.tm_sec < 0x3c) {
    uVar1 = (short)local_48.tm_sec;
  }
  *(uint16_t *)(arg1 + 10) = uVar1;
  *(uint16_t *)(arg1 + 8) = (uint16_t)local_48.tm_min;
  return;
}
