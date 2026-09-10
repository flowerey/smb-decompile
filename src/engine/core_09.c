/* src/engine/core_09.c — 78 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "core_09.h"

/* ======================================================================
 * globfree  (Ghidra `globfree` @ 004510e0)
 * Signature: void globfree(glob_t * __pglob)
 * Calls: (none)
 * Called by: `ReadDirectory`, `globfree__008250a8`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void globfree(glob_t *__pglob)

{
  (*(code *)PTR_globfree_008156f0)();
  return;
}

/* ======================================================================
 * longjmp  (Ghidra `longjmp` @ 00451260)
 * Signature: noreturn void longjmp(__jmp_buf_tag * __env, int __val)
 * Calls: (none)
 * Called by: `longjmp__00825168`, `png_error`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void longjmp(__jmp_buf_tag *__env,int __val)

{
  (*(code *)PTR_longjmp_008157b0)();
  return;
}

/* ======================================================================
 * memcmp  (Ghidra `memcmp` @ 00451300)
 * Signature: int memcmp(void * __s1, void * __s2, size_t __n)
 * Calls: (none)
 * Called by: `buffer_find`, `gfxCreateTexture`, `is_whole_packet_present`, `memcmp__008251b8`, `png_check_sig`, `png_handle_as_unknown`, `png_handle_unknown`, `png_push_read_IDAT`, `png_push_read_chunk`, `png_read_end` (+7 more)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_memcmp_00815800)();
  return iVar1;
}

/* ======================================================================
 * mkdir  (Ghidra `mkdir` @ 00451310)
 * Signature: int mkdir(char * __path, __mode_t __mode)
 * Calls: (none)
 * Called by: `GSMBChapterData__ReloadData`, `main`, `mkdir__008251c0`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mkdir(char *__path,__mode_t __mode)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_mkdir_00815808)();
  return iVar1;
}

/* ======================================================================
 * localtime_r  (Ghidra `localtime_r` @ 004513b0)
 * Signature: tm * localtime_r(time_t * __timer, tm * __tp)
 * Calls: (none)
 * Called by: `File__GetFileDate`, `localtime_r__00825210`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

tm * localtime_r(time_t *__timer,tm *__tp)

{
  tm *ptVar1;
  
  ptVar1 = (tm *)(*(code *)PTR_localtime_r_00815858)();
  return ptVar1;
}

/* ======================================================================
 * memset  (Ghidra `memset` @ 004513c0)
 * Signature: void * memset(void * __s, int __c, size_t __n)
 * Calls: (none)
 * Called by: `Add`, `BloodyTiles__Reset`, `CreateBlankLevel`, `DeSelectTile`, `MOJOSHADER_glAvailableProfiles`, `MOJOSHADER_glAvailableProfiles_constprop_14`, `MOJOSHADER_glBindProgram`, `MOJOSHADER_glCreateContext`, `MOJOSHADER_glLinkProgram`, `MOJOSHADER_parse` (+38 more)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_00815860)();
  return pvVar1;
}

/* ======================================================================
 * open  (Ghidra `open` @ 004514e0)
 * Signature: int open(char * __file, int __oflag, ...)
 * Calls: (none)
 * Called by: `File__File`, `MOJOSHADER_internal_include_open`, `open__008252a8`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open(char *__file,int __oflag,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_open_008158f0)();
  return iVar1;
}

/* ======================================================================
 * memcpy  (Ghidra `memcpy` @ 00451590)
 * Signature: void * memcpy(void * __dest, void * __src, size_t __n)
 * Calls: (none)
 * Called by: `Add`, `AddAnimationCallback`, `AddCachedCue`, `AddEditorButton`, `AddEditorLayerTween`, `Add__004df390`, `Add__00501060`, `Add__00501440`, `AdjustSetPieceLayering`, `AlignedReAlloc` (+153 more)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_00815948)();
  return pvVar1;
}

/* ======================================================================
 * gmtime  (Ghidra `gmtime` @ 004515e0)
 * Signature: tm * gmtime(time_t * __timer)
 * Calls: (none)
 * Called by: `gmtime__00825328`, `png_convert_from_time_t`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

tm * gmtime(time_t *__timer)

{
  tm *ptVar1;
  
  ptVar1 = (tm *)(*(code *)PTR_gmtime_00815970)();
  return ptVar1;
}

/* ======================================================================
 * operator_delete  (Ghidra `operator.delete` @ 004516b0)
 * Signature: void operator.delete(void * arg1)
 * Calls: (none)
 * Called by: `AlienHominid__AlienHominid__004618f0`, `AnimalLayer__AnimalLayer__005182c0`, `AudioFile__AudioFile`, `AudioFile__AudioFile__005a75c0`, `BandageGirl__BandageGirl__00465370`, `BloodyTiles__BloodyTiles__00463670`, `BossLayer__BossLayer__005182a0`, `Brownie__Brownie__00465390`, `CloseFile`, `CommanderVideo__CommanderVideo__00464490` (+202 more)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *arg1)

{
  (*(code *)PTR_operator_delete_008159d8)();
  return;
}

/* ======================================================================
 * operator_new  (Ghidra `operator.new` @ 00451750)
 * Signature: void * operator.new(ulong arg1)
 * Calls: (none)
 * Called by: `AddEditorButton`, `AddEditorLayerTween`, `AudioFile__AudioFile`, `Clone`, `Create`, `CreateAnimationLibResources`, `CreateBlankLevel`, `CreateEngineShaders`, `CreateGraphicsSettingsForm`, `CreateSMBBoss` (+107 more)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new(ulong arg1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_operator_new_00815a28)();
  return pvVar1;
}

/* ======================================================================
 * memchr  (Ghidra `memchr` @ 00451840)
 * Signature: void * memchr(void * __s, int __c, size_t __n)
 * Calls: (none)
 * Called by: `buffer_find`, `memchr__00825458`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memchr(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memchr_00815aa0)();
  return pvVar1;
}

/* ======================================================================
 * operator_delete_array  (Ghidra `operator.delete[]` @ 004519c0)
 * Signature: void operator.delete[](void * arg1)
 * Calls: (none)
 * Called by: (none)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete__(void *arg1)

{
  (*(code *)PTR_operator_delete___00815b60)();
  return;
}

/* ======================================================================
 * glob  (Ghidra `glob` @ 00451a00)
 * Signature: int glob(char * __pattern, int __flags, __errfunc * __errfunc, glob_t * __pglob)
 * Calls: (none)
 * Called by: `ReadDirectory`, `glob__00825540`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int glob(char *__pattern,int __flags,__errfunc *__errfunc,glob_t *__pglob)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_glob_00815b80)();
  return iVar1;
}

/* ======================================================================
 * malloc  (Ghidra `malloc` @ 00451a10)
 * Signature: void * malloc(size_t __size)
 * Calls: (none)
 * Called by: `Add`, `AddAnimationCallback`, `AddCachedCue`, `AddEditorButton`, `AddEditorLayerTween`, `Add__004df390`, `Add__00501060`, `Add__00501440`, `AdjustSetPieceLayering`, `AlignedReAlloc` (+129 more)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00815b88)();
  return pvVar1;
}

/* ======================================================================
 * opendir  (Ghidra `opendir` @ 00451b80)
 * Signature: DIR * opendir(char * __name)
 * Calls: (none)
 * Called by: `locateOneElement`, `opendir__00825600`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

DIR * opendir(char *__name)

{
  DIR *pDVar1;
  
  pDVar1 = (DIR *)(*(code *)PTR_opendir_00815c40)();
  return pDVar1;
}

/* ======================================================================
 * ldexp  (Ghidra `ldexp` @ 00451bb0)
 * Signature: double ldexp(double __x, int __exponent)
 * Calls: (none)
 * Called by: `float32_unpack`, `ldexp__00825618`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double ldexp(double __x,int __exponent)

{
  double dVar1;
  
  dVar1 = (double)(*(code *)PTR_ldexp_00815c58)();
  return dVar1;
}

/* ======================================================================
 * memmove  (Ghidra `memmove` @ 00451cb0)
 * Signature: void * memmove(void * __dest, void * __src, size_t __n)
 * Calls: (none)
 * Called by: `insertion_sort_SMBPortalLevel_bool_SMBPortalLevel_SMBPortalLevel`, `memmove__00825690`, `preprocessor_nexttoken`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memmove_00815cd8)();
  return pvVar1;
}

/* ======================================================================
 * lseek  (Ghidra `lseek` @ 00451de0)
 * Signature: __off_t lseek(int __fd, __off_t __offset, int __whence)
 * Calls: (none)
 * Called by: `File__GetFilePos`, `File__Reset`, `File__Seek`, `lseek__00825720`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__off_t lseek(int __fd,__off_t __offset,int __whence)

{
  __off_t _Var1;
  
  _Var1 = (*(code *)PTR_lseek_00815d70)();
  return _Var1;
}

/* ======================================================================
 * init_blocksize  (Ghidra `init_blocksize` @ 00451f7b)
 * Signature: uint8_t __stdcall init_blocksize(stb_vorbis * arg1, int arg2, int arg3)
 * Calls: `bit_reverse`, `ilog`, `setup_malloc`, `sin`, `sincos`
 * Called by: `start_decoder`
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* init_blocksize(stb_vorbis*, int, int) */

uint64_t init_blocksize(stb_vorbis *arg1,int arg2,int arg3)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  uint64_t uVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  float fVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  int local_80;
  double local_48;
  double local_40 [2];
  
  iVar8 = arg3 >> 1;
  iVar1 = iVar8 * 4;
  iVar7 = arg3 >> 3;
  uVar4 = setup_malloc(arg1,iVar1);
  lVar10 = (long)arg2;
  *(uint64_t *)(arg1 + (lVar10 + 0xb0) * 8) = uVar4;
  uVar4 = setup_malloc(arg1,iVar1);
  *(uint64_t *)(arg1 + (lVar10 + 0xb2) * 8) = uVar4;
  lVar5 = setup_malloc(arg1,(arg3 >> 2) * 4);
  *(long *)(arg1 + lVar10 * 8 + 0x5a0) = lVar5;
  lVar6 = *(long *)(arg1 + (lVar10 + 0xb0) * 8);
  if (((lVar6 != 0) && (lVar10 = *(long *)(arg1 + (lVar10 + 0xb2) * 8), lVar10 != 0)) &&
     (lVar5 != 0)) {
    local_80 = 1;
    dVar13 = DAT_005c7318 /* R:0.0f */ / (double)arg3;
    dVar14 = dVar13 * _DAT_005de390 /* R:u32=1413754136 */;
    dVar15 = dVar13 * DAT_005de398 /* R:u32=1413754136 */;
    for (lVar11 = 0; (int)lVar11 < arg3 >> 2; lVar11 = lVar11 + 1) {
      sincos((double)((int)lVar11 * 4) * dVar14,local_40,&local_48);
      *(float *)(lVar6 + lVar11 * 8) = (float)local_48;
      *(uint *)(lVar6 + 4 + lVar11 * 8) = (uint)(float)local_40[0] ^ DAT_005be6f0 /* R:u32=2147483648 */;
      sincos((double)local_80 * dVar15,local_40,&local_48);
      local_80 = local_80 + 2;
      fVar12 = (float)local_40[0] * DAT_005be6e4 /* R:0.5f */;
      *(float *)(lVar10 + lVar11 * 8) = (float)local_48 * DAT_005be6e4 /* R:0.5f */;
      *(float *)(lVar10 + 4 + lVar11 * 8) = fVar12;
    }
    iVar9 = 2;
    dVar13 = dVar13 * _DAT_005de390 /* R:u32=1413754136 */;
    for (lVar6 = 0; (int)lVar6 < iVar7; lVar6 = lVar6 + 1) {
      dVar14 = (double)iVar9;
      iVar9 = iVar9 + 4;
      sincos(dVar14 * dVar13,local_40,&local_48);
      *(float *)(lVar5 + lVar6 * 8) = (float)local_48;
      *(uint *)(lVar5 + 4 + lVar6 * 8) = (uint)(float)local_40[0] ^ DAT_005be6f0 /* R:u32=2147483648 */;
    }
    lVar6 = setup_malloc(arg1,iVar1);
    *(long *)(arg1 + (long)arg2 * 8 + 0x5b0) = lVar6;
    if (lVar6 != 0) {
      dVar14 = DAT_005de398 /* R:u32=1413754136 */ / (double)iVar8;
      for (lVar5 = 0; (int)lVar5 < iVar8; lVar5 = lVar5 + 1) {
        dVar15 = sin(((double)(int)lVar5 + DAT_005d2728 /* R:0.0f */) * dVar14);
        dVar15 = sin((double)((float)dVar15 * (float)dVar15) * DAT_005de398 /* R:u32=1413754136 */);
        *(float *)(lVar6 + lVar5 * 4) = (float)dVar15;
      }
      lVar6 = setup_malloc(arg1,iVar7 * 2);
      *(long *)(arg1 + (long)arg2 * 8 + 0x5c0) = lVar6;
      if (lVar6 != 0) {
        cVar2 = ilog(arg3);
        for (lVar5 = 0; (int)(uint)lVar5 < iVar7; lVar5 = lVar5 + 1) {
          uVar3 = bit_reverse((uint)lVar5);
          *(short *)(lVar6 + lVar5 * 2) = (short)((uVar3 >> (0x24U - cVar2 & 0x1f)) << 2);
        }
        return 1;
      }
    }
  }
  *(uint32_t *)(arg1 + 0x94) = 3;
  return 0;
}

/* ======================================================================
 * nexttoken  (Ghidra `nexttoken` @ 0052ba70)
 * Signature: uint8_t nexttoken(void)
 * Calls: `failf`, `preprocessor_nexttoken`, `preprocessor_outofmemory`, `preprocessor_sourcepos`
 * Called by: `MOJOSHADER_assemble`, `parse_args_DEFB__0052d3a0`, `parse_args_DEFx`, `parse_args_DSSSS__0052de90`, `parse_args_DSSS__0052dfe0`, `parse_args_DSS__0052e090`, `parse_args_DS__0052de40`, `parse_args_SINCOS__0052e110`, `parse_args_SS__0052df70`, `parse_args_TEXCRD__0052e190` (+6 more)
 */
int nexttoken(long arg1)

{
  int iVar1;
  uint64_t uVar2;
  uint32_t local_1c;
  
  if (*(int *)(arg1 + 0x48) == 0) {
    while( true ) {
      uVar2 = preprocessor_nexttoken(*(uint64_t *)(arg1 + 0x38),arg1 + 0x58,arg1 + 0x5c);
      *(uint64_t *)(arg1 + 0x50) = uVar2;
      iVar1 = preprocessor_outofmemory(*(uint64_t *)(arg1 + 0x38));
      if (iVar1 != 0) break;
      uVar2 = preprocessor_sourcepos(*(uint64_t *)(arg1 + 0x38),&local_1c);
      *(uint64_t *)(arg1 + 0x20) = uVar2;
      *(uint32_t *)(arg1 + 0x28) = local_1c;
      iVar1 = *(int *)(arg1 + 0x5c);
      if (iVar1 == 0x11c) {
        failf(arg1,"%s","Bad characters in source file");
      }
      else {
        if (iVar1 != 0x11d) {
          return iVar1;
        }
        failf(arg1,"%s",*(uint64_t *)(arg1 + 0x50));
      }
    }
    *(uint32_t *)(arg1 + 0x5c) = 0x11b;
    *(uint64_t *)(arg1 + 0x50) = 0;
    iVar1 = 0x11b;
    *(uint32_t *)(arg1 + 0x58) = 0;
  }
  else {
    *(uint32_t *)(arg1 + 0x48) = 0;
    iVar1 = *(int *)(arg1 + 0x5c);
  }
  return iVar1;
}

/* ======================================================================
 * hash_hash_string  (Ghidra `hash_hash_string` @ 0052fda0)
 * Signature: uint8_t hash_hash_string(void)
 * Calls: `strlen`
 * Called by: `stringmap_create`
 */
uint hash_hash_string(char *arg1)

{
  char cVar1;
  size_t sVar2;
  uint uVar3;
  
  sVar2 = strlen(arg1);
  uVar3 = 0x1505;
  for (; sVar2 != 0; sVar2 = sVar2 - 1) {
    cVar1 = *arg1;
    arg1 = arg1 + 1;
    uVar3 = (int)cVar1 ^ uVar3 * 0x21;
  }
  return uVar3;
}

/* ======================================================================
 * hash_keymatch_string  (Ghidra `hash_keymatch_string` @ 0052fde0)
 * Signature: uint8_t hash_keymatch_string(void)
 * Calls: `strcmp`
 * Called by: `stringmap_create`
 */
bool hash_keymatch_string(char *arg1,char *arg2)

{
  int iVar1;
  
  iVar1 = strcmp(arg1,arg2);
  return iVar1 == 0;
}

/* ======================================================================
 * hash_find  (Ghidra `hash_find` @ 0052fe00)
 * Signature: uint8_t hash_find(void)
 * Calls: (none)
 * Called by: `MOJOSHADER_glBindShaders`, `hash_insert`, `stringmap_find`
 */
uint64_t hash_find(long *arg1,uint64_t arg2,uint64_t *arg3)

{
  long lVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  
  lVar1 = arg1[2];
  uVar5 = (*(code *)arg1[3])(arg2,lVar1);
  uVar7 = (ulong)((int)arg1[1] - 1U & uVar5);
  puVar4 = *(uint64_t **)(*arg1 + uVar7 * 8);
  puVar3 = (uint64_t *)0x0;
  while( true ) {
    puVar2 = puVar4;
    if (puVar2 == (uint64_t *)0x0) {
      return 0;
    }
    iVar6 = (*(code *)arg1[4])(arg2,*puVar2,lVar1);
    if (iVar6 != 0) break;
    puVar4 = (uint64_t *)puVar2[2];
    puVar3 = puVar2;
  }
  if (arg3 != (uint64_t *)0x0) {
    *arg3 = puVar2[1];
  }
  if ((puVar3 != (uint64_t *)0x0) && (*(int *)((long)arg1 + 0xc) == 0)) {
    puVar3[2] = puVar2[2];
    puVar2[2] = *(uint64_t *)(*arg1 + uVar7 * 8);
    *(uint64_t **)(*arg1 + uVar7 * 8) = puVar2;
    return 1;
  }
  return 1;
}

/* ======================================================================
 * hash_iter  (Ghidra `hash_iter` @ 0052fee0)
 * Signature: uint8_t hash_iter(void)
 * Calls: (none)
 * Called by: (none)
 */
uint64_t hash_iter(long *arg1,uint64_t arg2,uint64_t *arg3,long *arg4)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint64_t *puVar4;
  
  if (*arg4 == 0) {
    lVar1 = *arg1;
    uVar3 = (*(code *)arg1[3])(arg2,arg1[2]);
    puVar4 = *(uint64_t **)(lVar1 + (ulong)(uVar3 & (int)arg1[1] - 1U) * 8);
  }
  else {
    puVar4 = *(uint64_t **)(*arg4 + 0x10);
  }
  while( true ) {
    if (puVar4 == (uint64_t *)0x0) {
      *arg3 = 0;
      *arg4 = 0;
      return 0;
    }
    iVar2 = (*(code *)arg1[4])(arg2,*puVar4,arg1[2]);
    if (iVar2 != 0) break;
    puVar4 = (uint64_t *)puVar4[2];
  }
  *arg3 = puVar4[1];
  *arg4 = (long)puVar4;
  return 1;
}

/* ======================================================================
 * hash_iter_keys  (Ghidra `hash_iter_keys` @ 0052ff80)
 * Signature: uint8_t hash_iter_keys(void)
 * Calls: (none)
 * Called by: `MOJOSHADER_glDeleteShader`
 */
uint64_t hash_iter_keys(long *arg1,uint64_t *arg2,long *arg3)

{
  uint uVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint uVar4;
  
  puVar2 = (uint64_t *)*arg3;
  if (puVar2 == (uint64_t *)0x0) {
    uVar4 = *(uint *)(arg1 + 1);
    uVar1 = 0;
  }
  else {
    puVar3 = (uint64_t *)puVar2[2];
    if (puVar3 != (uint64_t *)0x0) {
LAB_0052ff9d:
      *arg2 = *puVar3;
      *arg3 = (long)puVar3;
      return 1;
    }
    uVar1 = (*(code *)arg1[3])(*puVar2,arg1[2]);
    uVar4 = *(uint *)(arg1 + 1);
    uVar1 = (uVar1 & uVar4 - 1) + 1;
  }
  if (uVar1 < uVar4) {
    puVar2 = (uint64_t *)(*arg1 + (long)(int)uVar1 * 8);
    do {
      puVar3 = (uint64_t *)*puVar2;
      if (puVar3 != (uint64_t *)0x0) goto LAB_0052ff9d;
      uVar1 = uVar1 + 1;
      puVar2 = puVar2 + 1;
    } while (uVar1 < uVar4);
  }
  *arg2 = 0;
  *arg3 = 0;
  return 0;
}

/* ======================================================================
 * hash_insert  (Ghidra `hash_insert` @ 00530020)
 * Signature: uint8_t hash_insert(void)
 * Calls: `hash_find`
 * Called by: `MOJOSHADER_glBindShaders`, `stringmap_insert`
 */
uint64_t hash_insert(long *arg1,uint64_t arg2,uint64_t arg3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  uint64_t *puVar4;
  uint64_t uVar5;
  ulong uVar6;
  
  uVar2 = (*(code *)arg1[3])(arg2,arg1[2]);
  lVar1 = arg1[1];
  if ((*(int *)((long)arg1 + 0xc) == 0) && (iVar3 = hash_find(arg1,arg2,0), iVar3 != 0)) {
    return 0;
  }
  puVar4 = (uint64_t *)(*(code *)arg1[6])(0x18,arg1[8]);
  if (puVar4 == (uint64_t *)0x0) {
    uVar5 = 0xffffffff;
  }
  else {
    *puVar4 = arg2;
    puVar4[1] = arg3;
    uVar6 = (ulong)(uVar2 & (int)lVar1 - 1U);
    puVar4[2] = *(uint64_t *)(*arg1 + uVar6 * 8);
    *(uint64_t **)(*arg1 + uVar6 * 8) = puVar4;
    uVar5 = 1;
  }
  return uVar5;
}

/* ======================================================================
 * hash_create  (Ghidra `hash_create` @ 005300d0)
 * Signature: uint8_t hash_create(void)
 * Calls: (none)
 * Called by: `MOJOSHADER_glBindShaders`
 */
uint64_t *
hash_create(uint64_t arg1,uint64_t arg2,uint64_t arg3,uint64_t arg4,
           uint32_t arg5,code *arg6,code *arg7,uint64_t arg8)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  ulong uVar3;
  ulong uVar4;
  uint64_t *puVar5;
  bool bVar6;
  byte bVar7;
  
  bVar7 = 0;
  puVar1 = (uint64_t *)(*arg6)(0x48,arg8);
  puVar5 = puVar1;
  if (puVar1 != (uint64_t *)0x0) {
    bVar6 = ((ulong)puVar1 & 1) != 0;
    uVar4 = 0x48;
    puVar2 = puVar1;
    if (bVar6) {
      *(uint8_t *)puVar1 = 0;
      puVar2 = (uint64_t *)((long)puVar1 + 1);
      uVar4 = 0x47;
    }
    if (((ulong)puVar2 & 2) != 0) {
      *(uint16_t *)puVar2 = 0;
      uVar4 = (ulong)((int)uVar4 - 2);
      puVar2 = (uint64_t *)((long)puVar2 + 2);
    }
    if (((ulong)puVar2 & 4) != 0) {
      *(uint32_t *)puVar2 = 0;
      uVar4 = (ulong)((int)uVar4 - 4);
      puVar2 = (uint64_t *)((long)puVar2 + 4);
    }
    for (uVar3 = uVar4 >> 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar2 = 0;
      puVar2 = puVar2 + (ulong)bVar7 * -2 + 1;
    }
    if ((uVar4 & 4) != 0) {
      *(uint32_t *)puVar2 = 0;
      puVar2 = (uint64_t *)((long)puVar2 + 4);
    }
    if ((uVar4 & 2) != 0) {
      *(uint16_t *)puVar2 = 0;
      puVar2 = (uint64_t *)((long)puVar2 + 2);
    }
    if (bVar6) {
      *(uint8_t *)puVar2 = 0;
    }
    puVar2 = (uint64_t *)(*arg6)(0x800,arg8);
    *puVar1 = puVar2;
    if (puVar2 == (uint64_t *)0x0) {
      puVar5 = (uint64_t *)0x0;
      (*arg7)(puVar1,arg8);
    }
    else {
      bVar6 = ((ulong)puVar2 & 1) != 0;
      uVar4 = 0x800;
      if (bVar6) {
        *(uint8_t *)puVar2 = 0;
        puVar2 = (uint64_t *)((long)puVar2 + 1);
        uVar4 = 0x7ff;
      }
      if (((ulong)puVar2 & 2) != 0) {
        *(uint16_t *)puVar2 = 0;
        uVar4 = (ulong)((int)uVar4 - 2);
        puVar2 = (uint64_t *)((long)puVar2 + 2);
      }
      if (((ulong)puVar2 & 4) != 0) {
        *(uint32_t *)puVar2 = 0;
        uVar4 = (ulong)((int)uVar4 - 4);
        puVar2 = (uint64_t *)((long)puVar2 + 4);
      }
      for (uVar3 = uVar4 >> 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar2 = 0;
        puVar2 = puVar2 + (ulong)bVar7 * -2 + 1;
      }
      if ((uVar4 & 4) != 0) {
        *(uint32_t *)puVar2 = 0;
        puVar2 = (uint64_t *)((long)puVar2 + 4);
      }
      if ((uVar4 & 2) != 0) {
        *(uint16_t *)puVar2 = 0;
        puVar2 = (uint64_t *)((long)puVar2 + 2);
      }
      if (bVar6) {
        *(uint8_t *)puVar2 = 0;
      }
      *(uint32_t *)(puVar1 + 1) = 0x100;
      *(uint32_t *)((long)puVar1 + 0xc) = arg5;
      puVar1[2] = arg1;
      puVar1[4] = arg3;
      puVar1[5] = arg4;
      puVar1[3] = arg2;
      puVar1[6] = arg6;
      puVar1[8] = arg8;
      puVar1[7] = arg7;
    }
  }
  return puVar5;
}

/* ======================================================================
 * hash_destroy  (Ghidra `hash_destroy` @ 00530350)
 * Signature: uint8_t hash_destroy(void)
 * Calls: (none)
 * Called by: `MOJOSHADER_glDestroyContext`
 */
void hash_destroy(long *arg1)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  long lVar2;
  uint64_t *puVar3;
  uint uVar4;
  uint64_t *puVar5;
  long lVar6;
  uint local_3c;
  
  uVar4 = *(uint *)(arg1 + 1);
  lVar1 = arg1[2];
  UNRECOVERED_JUMPTABLE = (code *)arg1[7];
  lVar2 = arg1[8];
  lVar6 = *arg1;
  if (uVar4 != 0) {
    local_3c = 0;
    do {
      puVar5 = *(uint64_t **)(lVar6 + (ulong)local_3c * 8);
      if (puVar5 != (uint64_t *)0x0) {
        do {
          puVar3 = (uint64_t *)puVar5[2];
          (*(code *)arg1[5])(*puVar5,puVar5[1],lVar1);
          (*UNRECOVERED_JUMPTABLE)(puVar5,lVar2);
          puVar5 = puVar3;
        } while (puVar3 != (uint64_t *)0x0);
        lVar6 = *arg1;
        uVar4 = *(uint *)(arg1 + 1);
      }
      local_3c = local_3c + 1;
    } while (local_3c < uVar4);
  }
  (*UNRECOVERED_JUMPTABLE)(lVar6,lVar2);
                    /* WARNING: Could not recover jumptable at 0x005303e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(arg1,lVar2);
  return;
}

/* ======================================================================
 * hash_remove  (Ghidra `hash_remove` @ 005303f0)
 * Signature: uint8_t hash_remove(void)
 * Calls: (none)
 * Called by: `MOJOSHADER_glDeleteShader`
 */
uint64_t hash_remove(long *arg1,uint64_t arg2)

{
  long lVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  
  lVar1 = arg1[2];
  uVar5 = (*(code *)arg1[3])(arg2,lVar1);
  uVar7 = (ulong)((int)arg1[1] - 1U & uVar5);
  puVar4 = *(uint64_t **)(*arg1 + uVar7 * 8);
  puVar3 = (uint64_t *)0x0;
  while( true ) {
    puVar2 = puVar4;
    if (puVar2 == (uint64_t *)0x0) {
      return 0;
    }
    iVar6 = (*(code *)arg1[4])(arg2,*puVar2,lVar1);
    if (iVar6 != 0) break;
    puVar4 = (uint64_t *)puVar2[2];
    puVar3 = puVar2;
  }
  if (puVar3 == (uint64_t *)0x0) {
    *(uint64_t *)(*arg1 + uVar7 * 8) = puVar2[2];
  }
  else {
    puVar3[2] = puVar2[2];
  }
  (*(code *)arg1[5])(*puVar2,puVar2[1],lVar1);
  (*(code *)arg1[7])(puVar2,arg1[8]);
  return 1;
}

/* ======================================================================
 * lookup_samplers  (Ghidra `lookup_samplers` @ 00535be0)
 * Signature: uint8_t lookup_samplers(void)
 * Calls: (none)
 * Called by: `MOJOSHADER_glLinkProgram`
 */
void lookup_samplers(uint64_t arg1,long *arg2,int *arg3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  
  lVar1 = *arg2;
  lVar4 = *(long *)(lVar1 + 0x58);
  if ((*(int *)(lVar1 + 0x50) != 0) && (iVar2 = (**(code **)(ctx + 0x51308))(), iVar2 != 0)) {
    if (*arg3 == 0) {
      (**(code **)(ctx + 0x512e0))(arg1);
      *arg3 = 1;
    }
    if (0 < *(int *)(lVar1 + 0x50)) {
      iVar2 = 0;
      do {
        iVar3 = (**(code **)(ctx + 0x512c8))(arg1,arg2,iVar2);
        if (-1 < iVar3) {
          (**(code **)(ctx + 0x512f8))(iVar3,*(uint32_t *)(lVar4 + 4));
        }
        iVar2 = iVar2 + 1;
        lVar4 = lVar4 + 0x10;
      } while (iVar2 < *(int *)(lVar1 + 0x50));
    }
  }
  return;
}

/* ======================================================================
 * lookup_uniforms  (Ghidra `lookup_uniforms` @ 00536390)
 * Signature: uint8_t lookup_uniforms(void)
 * Calls: `memset`, `snprintf`
 * Called by: `MOJOSHADER_glLinkProgram`
 */
uint64_t lookup_uniforms(long arg1,long *arg2,int *arg3)

{
  uint64_t *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  code *pcVar5;
  long *plVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  void *pvVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  uint64_t uVar15;
  uint8_t *puVar16;
  uint8_t *puVar17;
  int *piVar18;
  int iVar19;
  int *piVar20;
  long lVar21;
  uint8_t auStack_68 [8];
  ulong local_60;
  int *local_58;
  uint local_50;
  uint local_4c;
  uint local_48;
  int local_44;
  long *local_40;
  
  puVar17 = auStack_68;
  lVar4 = *arg2;
  local_44 = *(int *)(lVar4 + 0x28);
  local_58 = arg3;
  local_40 = arg2;
  if (0 < *(int *)(lVar4 + 0x34)) {
    lVar21 = 0;
    iVar19 = 0;
    local_50 = 0;
    local_4c = 0;
    local_48 = 0;
    puVar17 = auStack_68;
    do {
      while (plVar6 = local_40, piVar20 = (int *)(lVar21 + *(long *)(lVar4 + 0x38)),
            puVar16 = puVar17, piVar20[3] != 0) {
        pcVar5 = (code *)ctx[0xa260];
        *(uint64_t *)(puVar17 + -8) = 0x5363ed;
        iVar7 = (*pcVar5)();
        if (iVar7 != 0) {
          iVar7 = piVar20[2];
          iVar11 = *(int *)(lVar4 + 0x40);
          iVar2 = piVar20[1];
          lVar12 = -((long)(iVar7 * 4) * 4 + 0x10);
          puVar16 = puVar17 + lVar12;
          uVar14 = (ulong)(puVar17 + lVar12 + 0xf) & 0xfffffffffffffff0;
          if (0 < iVar11) {
            lVar13 = 0;
            iVar9 = 0;
            do {
              piVar18 = (int *)(lVar13 + *(long *)(lVar4 + 0x48));
              if (((*piVar18 == 0) && (iVar3 = piVar18[1], iVar2 <= iVar3)) &&
                 (iVar3 < iVar7 + iVar2)) {
                puVar1 = (uint64_t *)(uVar14 + (long)((iVar3 - iVar2) * 4) * 4);
                *puVar1 = *(uint64_t *)(piVar18 + 2);
                puVar1[1] = *(uint64_t *)(piVar18 + 4);
                iVar11 = *(int *)(lVar4 + 0x40);
              }
              iVar9 = iVar9 + 1;
              lVar13 = lVar13 + 0x18;
            } while (iVar9 < iVar11);
          }
          if (*local_58 == 0) {
            pcVar5 = (code *)ctx[0xa25c];
            local_60 = uVar14;
            *(uint64_t *)(puVar17 + lVar12 + -8) = 0x5366d4;
            (*pcVar5)(arg1);
            *local_58 = 1;
            uVar14 = local_60;
          }
          pcVar5 = (code *)ctx[0xa25d];
          *(uint64_t *)(puVar17 + lVar12 + -8) = 0x5365cd;
          (*pcVar5)(arg1,piVar20,uVar14);
        }
LAB_005363f5:
        iVar19 = iVar19 + 1;
        lVar21 = lVar21 + 0x18;
        puVar17 = puVar16;
        if (*(int *)(lVar4 + 0x34) <= iVar19) goto LAB_00536480;
      }
      pcVar5 = (code *)ctx[0xa258];
      *(uint64_t *)(puVar17 + -8) = 0x536429;
      iVar7 = (*pcVar5)(arg1,plVar6,iVar19);
      if (iVar7 == -1) goto LAB_005363f5;
      iVar11 = piVar20[2];
      piVar18 = (int *)(*(long *)(arg1 + 0x20) + (ulong)*(uint *)(arg1 + 0x18) * 0x18);
      *(int **)(piVar18 + 2) = piVar20;
      piVar18[4] = iVar7;
      *piVar18 = local_44;
      *(int *)(arg1 + 0x18) = *(int *)(arg1 + 0x18) + 1;
      iVar7 = *piVar20;
      if (iVar7 != 0) {
        if (iVar7 == 1) {
          if (iVar11 == 0) {
            iVar11 = 1;
          }
          local_4c = local_4c + iVar11;
        }
        else if (iVar7 == 2) {
          if (iVar11 == 0) {
            iVar11 = 1;
          }
          local_50 = local_50 + iVar11;
        }
        goto LAB_005363f5;
      }
      if (iVar11 == 0) {
        iVar11 = 1;
      }
      iVar19 = iVar19 + 1;
      local_48 = local_48 + iVar11;
      lVar21 = lVar21 + 0x18;
    } while (iVar19 < *(int *)(lVar4 + 0x34));
LAB_00536480:
    if (local_48 != 0) {
      uVar14 = (ulong)local_48;
      pcVar5 = (code *)*ctx;
      *(uint64_t *)(puVar17 + -8) = 0x53670b;
      pvVar10 = (void *)(*pcVar5)(uVar14 << 4 & 0xffffffff);
      if (pvVar10 == (void *)0x0) goto LAB_0053679d;
      if (local_44 == 2) {
        *(void **)(arg1 + 0x40) = pvVar10;
        *(ulong *)(arg1 + 0x38) = uVar14;
      }
      else if (local_44 == 1) {
        *(void **)(arg1 + 0x70) = pvVar10;
        *(ulong *)(arg1 + 0x68) = uVar14;
      }
      *(uint64_t *)(puVar17 + -8) = 0x536731;
      memset(pvVar10,0,uVar14 << 4);
    }
    if (local_4c != 0) {
      uVar14 = (ulong)local_4c;
      pcVar5 = (code *)*ctx;
      *(uint64_t *)(puVar17 + -8) = 0x536759;
      pvVar10 = (void *)(*pcVar5)(uVar14 << 4 & 0xffffffff);
      if (pvVar10 == (void *)0x0) goto LAB_0053679d;
      if (local_44 == 2) {
        *(void **)(arg1 + 0x50) = pvVar10;
        *(ulong *)(arg1 + 0x48) = uVar14;
      }
      else if (local_44 == 1) {
        *(void **)(arg1 + 0x80) = pvVar10;
        *(ulong *)(arg1 + 0x78) = uVar14;
      }
      *(uint64_t *)(puVar17 + -8) = 0x536777;
      memset(pvVar10,0,uVar14 << 4);
    }
    if (local_50 != 0) {
      uVar14 = (ulong)local_50;
      pcVar5 = (code *)*ctx;
      *(uint64_t *)(puVar17 + -8) = 0x53668c;
      pvVar10 = (void *)(*pcVar5)(uVar14 * 4 & 0xffffffff);
      if (pvVar10 == (void *)0x0) {
LAB_0053679d:
        *(uint64_t *)(puVar17 + -8) = 0x5367b8;
        snprintf(error_buffer,0x400,"%s","out of memory");
        return 0;
      }
      if (local_44 == 2) {
        *(void **)(arg1 + 0x60) = pvVar10;
        *(ulong *)(arg1 + 0x58) = uVar14;
      }
      else if (local_44 == 1) {
        *(void **)(arg1 + 0x90) = pvVar10;
        *(ulong *)(arg1 + 0x88) = uVar14;
      }
      *(uint64_t *)(puVar17 + -8) = 0x5366b6;
      memset(pvVar10,0,uVar14 * 4);
    }
  }
  lVar4 = *(long *)(lVar4 + 0xa0);
  uVar15 = 1;
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x14) != 0) {
      lVar21 = *(long *)(lVar4 + 0x18) + 0x38;
      uVar14 = 0;
      lVar12 = *(long *)(lVar4 + 0x18);
      lVar13 = lVar21;
      while( true ) {
        uVar8 = *(int *)(lVar12 + 0x10) + *(int *)(lVar12 + 0xc);
        if ((uint)uVar14 < uVar8) {
          uVar14 = (ulong)uVar8;
        }
        if (lVar13 == (ulong)(*(int *)(lVar4 + 0x14) - 1) * 0x38 + lVar21) break;
        lVar12 = lVar13;
        lVar13 = lVar13 + 0x38;
      }
      uVar15 = 1;
      if ((int)uVar14 != 0) {
        pcVar5 = (code *)*ctx;
        *(uint64_t *)(puVar17 + -8) = 0x53662f;
        pvVar10 = (void *)(*pcVar5)(uVar14 << 4 & 0xffffffff);
        if (pvVar10 == (void *)0x0) {
          uVar15 = 0;
          *(uint64_t *)(puVar17 + -8) = 0x53681a;
          snprintf(error_buffer,0x400,"%s","out of memory");
        }
        else {
          *(uint64_t *)(puVar17 + -8) = 0x536648;
          memset(pvVar10,0,uVar14 << 4);
          if (local_44 == 2) {
            *(ulong *)(arg1 + 0x98) = uVar14;
            *(void **)(arg1 + 0xa0) = pvVar10;
          }
          else if (local_44 == 1) {
            *(ulong *)(arg1 + 0xa8) = uVar14;
            *(void **)(arg1 + 0xb0) = pvVar10;
          }
        }
      }
    }
  }
  return uVar15;
}

/* ======================================================================
 * load_extensions  (Ghidra `load_extensions` @ 00536a10)
 * Signature: uint8_t load_extensions(void)
 * Calls: `lookup_entry_points`, `snprintf`, `strstr`
 * Called by: `MOJOSHADER_glAvailableProfiles`, `MOJOSHADER_glAvailableProfiles_constprop_14`, `MOJOSHADER_glCreateContext`
 */
void load_extensions(void)

{
  uint64_t *puVar1;
  long lVar2;
  int iVar3;
  char *pcVar4;
  long lVar5;
  uint uVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint local_3c;
  
  lVar2 = ctx;
  *(uint32_t *)(ctx + 0x510b8) = 1;
  *(uint32_t *)(lVar2 + 0x510bc) = 1;
  *(uint32_t *)(lVar2 + 0x510c0) = 1;
  *(uint32_t *)(lVar2 + 0x510c4) = 1;
  *(uint32_t *)(lVar2 + 0x510c8) = 1;
  *(uint32_t *)(lVar2 + 0x510cc) = 1;
  *(uint32_t *)(lVar2 + 0x510d0) = 1;
  *(uint32_t *)(lVar2 + 0x510d4) = 1;
  *(uint32_t *)(lVar2 + 0x510d8) = 1;
  *(uint32_t *)(lVar2 + 0x510dc) = 1;
  *(uint32_t *)(lVar2 + 0x510e0) = 1;
  *(uint32_t *)(lVar2 + 0x510e4) = 1;
  *(uint32_t *)(lVar2 + 0x510e8) = 1;
  *(uint32_t *)(lVar2 + 0x510ec) = 1;
  *(uint32_t *)(lVar2 + 0x510f0) = 1;
  lookup_entry_points();
  if (*(int *)(ctx + 0x510b8) == 0) {
    pcVar7 = "";
    snprintf(error_buffer,0x400,"%s","missing basic OpenGL entry points");
  }
  else {
    lVar5 = (**(code **)(ctx + 0x510f8))(0x1f02);
    lVar2 = ctx;
    if (lVar5 == 0) {
      *(uint32_t *)(ctx + 0x51094) = 0;
      *(uint32_t *)(lVar2 + 0x51090) = 0;
    }
    else {
      __isoc99_sscanf(lVar5,"%d.%d",ctx + 0x51090,ctx + 0x51094);
    }
    pcVar7 = (char *)(**(code **)(lVar2 + 0x510f8))(0x1f03);
    if (pcVar7 == (char *)0x0) {
      pcVar7 = "";
    }
  }
  lVar2 = ctx;
  if ((*(int *)(ctx + 0x510bc) != 0) &&
     ((int)((uint)*(ushort *)(ctx + 0x51094) | *(int *)(ctx + 0x51090) << 0x10) < 0x20000)) {
    puVar1 = (uint64_t *)(ctx + 0x51230);
    *(uint32_t *)(ctx + 0x510bc) = 0;
    *(uint64_t *)(lVar2 + 0x51198) = *puVar1;
    *(uint64_t *)(lVar2 + 0x511a8) = *(uint64_t *)(lVar2 + 0x51240);
    *(uint64_t *)(lVar2 + 0x511b0) = *(uint64_t *)(lVar2 + 0x51248);
    *(uint64_t *)(lVar2 + 0x51150) = *(uint64_t *)(lVar2 + 0x511f0);
    *(uint64_t *)(lVar2 + 0x51158) = *(uint64_t *)(lVar2 + 0x511f8);
    *(uint64_t *)(lVar2 + 0x511c0) = *(uint64_t *)(lVar2 + 0x51258);
  }
  iVar3 = *(int *)(lVar2 + 0x510b8);
  uVar8 = 0;
  if (((*(int *)(lVar2 + 0x510c0) != 0) && (iVar3 != 0)) &&
     (pcVar4 = strstr(pcVar7,"GL_ARB_vertex_program"), pcVar4 != (char *)0x0)) {
    uVar8 = (uint)(pcVar4[0x15] == ' ' || pcVar4[0x15] == '\0');
  }
  *(uint *)(lVar2 + 0x510c0) = uVar8;
  uVar8 = 0;
  if (((*(int *)(lVar2 + 0x510c4) != 0) && (iVar3 != 0)) &&
     (pcVar4 = strstr(pcVar7,"GL_ARB_fragment_program"), uVar8 = 0, pcVar4 != (char *)0x0)) {
    uVar8 = (uint)(pcVar4[0x17] == ' ' || pcVar4[0x17] == '\0');
  }
  *(uint *)(lVar2 + 0x510c4) = uVar8;
  uVar8 = 0;
  if (((*(int *)(lVar2 + 0x510d8) != 0) && (iVar3 != 0)) &&
     (pcVar4 = strstr(pcVar7,"GL_ARB_shader_objects"), uVar8 = 0, pcVar4 != (char *)0x0)) {
    uVar8 = (uint)(pcVar4[0x15] == ' ' || pcVar4[0x15] == '\0');
  }
  uVar9 = 0;
  *(uint *)(lVar2 + 0x510d8) = uVar8;
  if (((*(int *)(lVar2 + 0x510dc) != 0) && (iVar3 != 0)) &&
     (pcVar4 = strstr(pcVar7,"GL_ARB_vertex_shader"), pcVar4 != (char *)0x0)) {
    uVar9 = (uint)(pcVar4[0x14] == ' ' || pcVar4[0x14] == '\0');
  }
  uVar10 = 0;
  *(uint *)(lVar2 + 0x510dc) = uVar9;
  if (((*(int *)(lVar2 + 0x510e0) != 0) && (iVar3 != 0)) &&
     (pcVar4 = strstr(pcVar7,"GL_ARB_fragment_shader"), pcVar4 != (char *)0x0)) {
    uVar10 = (uint)(pcVar4[0x16] == ' ' || pcVar4[0x16] == '\0');
  }
  *(uint *)(lVar2 + 0x510e0) = uVar10;
  local_3c = 0;
  if (((*(int *)(lVar2 + 0x510e4) != 0) && (iVar3 != 0)) &&
     (pcVar4 = strstr(pcVar7,"GL_ARB_shading_language_100"), pcVar4 != (char *)0x0)) {
    local_3c = (uint)(pcVar4[0x1b] == ' ' || pcVar4[0x1b] == '\0');
  }
  *(uint *)(lVar2 + 0x510e4) = local_3c;
  uVar6 = 0;
  if ((*(int *)(lVar2 + 0x510c8) != 0) && (uVar6 = 0, iVar3 != 0)) {
    pcVar4 = strstr(pcVar7,"GL_NV_vertex_program2_option");
    uVar6 = 0;
    if (pcVar4 != (char *)0x0) {
      uVar6 = (uint)(pcVar4[0x1c] == ' ' || pcVar4[0x1c] == '\0');
    }
  }
  *(uint *)(lVar2 + 0x510c8) = uVar6;
  uVar6 = 0;
  if ((*(int *)(lVar2 + 0x510cc) != 0) && (iVar3 != 0)) {
    pcVar4 = strstr(pcVar7,"GL_NV_fragment_program2");
    uVar6 = 0;
    if (pcVar4 != (char *)0x0) {
      uVar6 = (uint)(pcVar4[0x17] == ' ' || pcVar4[0x17] == '\0');
    }
  }
  *(uint *)(lVar2 + 0x510cc) = uVar6;
  uVar6 = 0;
  if ((*(int *)(lVar2 + 0x510d0) != 0) && (iVar3 != 0)) {
    pcVar4 = strstr(pcVar7,"GL_NV_vertex_program3");
    uVar6 = 0;
    if (pcVar4 != (char *)0x0) {
      uVar6 = (uint)(pcVar4[0x15] == ' ' || pcVar4[0x15] == '\0');
    }
  }
  *(uint *)(lVar2 + 0x510d0) = uVar6;
  uVar6 = 0;
  if ((*(int *)(lVar2 + 0x510e8) != 0) && (iVar3 != 0)) {
    pcVar4 = strstr(pcVar7,"GL_NV_half_float");
    uVar6 = 0;
    if (pcVar4 != (char *)0x0) {
      uVar6 = (uint)(pcVar4[0x10] == ' ' || pcVar4[0x10] == '\0');
    }
  }
  *(uint *)(lVar2 + 0x510e8) = uVar6;
  uVar6 = 0;
  if (((*(int *)(lVar2 + 0x510ec) != 0) && (iVar3 != 0)) &&
     (uVar6 = 1,
     (int)((uint)*(ushort *)(lVar2 + 0x51094) | *(int *)(lVar2 + 0x51090) << 0x10) < 0x30000)) {
    pcVar4 = strstr(pcVar7,"GL_ARB_half_float_vertex");
    uVar6 = 0;
    if (pcVar4 != (char *)0x0) {
      uVar6 = (uint)(pcVar4[0x18] == ' ' || pcVar4[0x18] == '\0');
    }
  }
  *(uint *)(lVar2 + 0x510ec) = uVar6;
  if (*(int *)(lVar2 + 0x510f0) == 0) {
    *(uint32_t *)(lVar2 + 0x5109c) = 0;
    *(uint32_t *)(lVar2 + 0x51098) = 0;
    if (iVar3 == 0) {
      return;
    }
  }
  else {
    if (iVar3 == 0) {
      *(uint32_t *)(lVar2 + 0x510f0) = 0;
      *(uint32_t *)(lVar2 + 0x5109c) = 0;
      *(uint32_t *)(lVar2 + 0x51098) = 0;
      return;
    }
    pcVar7 = strstr(pcVar7,"GL_OES_vertex_half_float");
    uVar6 = 0;
    if (pcVar7 != (char *)0x0) {
      uVar6 = (uint)(pcVar7[0x18] == ' ' || pcVar7[0x18] == '\0');
    }
    *(uint *)(lVar2 + 0x510f0) = uVar6;
    *(uint32_t *)(lVar2 + 0x5109c) = 0;
    *(uint32_t *)(lVar2 + 0x51098) = 0;
  }
  if ((*(int *)(lVar2 + 0x510bc) != 0) ||
     (((uVar8 != 0 && (uVar9 != 0)) && ((uVar10 != 0 && (local_3c != 0)))))) {
    (**(code **)(lVar2 + 0x51100))();
    lVar5 = (**(code **)(ctx + 0x510f8))(0x8b8c);
    iVar3 = (**(code **)(ctx + 0x51100))();
    lVar2 = ctx;
    if ((iVar3 != 0x500) && (lVar5 != 0)) {
      __isoc99_sscanf(lVar5,"%d.%d",ctx + 0x51098,ctx + 0x5109c);
      return;
    }
    *(uint32_t *)(ctx + 0x5109c) = 0;
    *(uint32_t *)(lVar2 + 0x51098) = 0;
  }
  return;
}

/* ======================================================================
 * handle_pp_undef  (Ghidra `handle_pp_undef` @ 00539ab0)
 * Signature: uint8_t handle_pp_undef(void)
 * Calls: `failf`, `free_define`, `memcpy`, `preprocessor_lexer`, `strcmp`
 * Called by: `preprocessor_nexttoken`
 */
void handle_pp_undef(long arg1)

{
  char *__s2;
  void *__src;
  uint64_t uVar1;
  uint64_t *puVar2;
  long lVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  char cVar6;
  int iVar7;
  long lVar8;
  char *pcVar9;
  char *pcVar10;
  uint uVar11;
  bool bVar12;
  byte bVar13;
  uint64_t auStack_40 [2];
  
  bVar13 = 0;
  lVar8 = *(long *)(arg1 + 0x120);
  if (*(int *)(lVar8 + 0x28) == 0) {
    auStack_40[0] = 0x539ba8;
    iVar7 = preprocessor_lexer(lVar8);
  }
  else {
    iVar7 = *(int *)(lVar8 + 0x24);
    *(uint32_t *)(lVar8 + 0x28) = 0;
  }
  if (iVar7 == 0x101) {
    uVar11 = *(uint *)(lVar8 + 0x20);
    __src = *(void **)(lVar8 + 0x18);
    lVar3 = -((ulong)(*(int *)(lVar8 + 0x20) + 1) + 0x1e & 0xfffffffffffffff0);
    __s2 = &stack0xffffffffffffffd0 + lVar3;
    *(uint64_t *)((long)auStack_40 + lVar3) = 0x539b3f;
    memcpy(__s2,__src,(ulong)uVar11);
    __s2[*(uint *)(lVar8 + 0x20)] = '\0';
    if (*(int *)(lVar8 + 0x28) == 0) {
      *(uint64_t *)((long)auStack_40 + lVar3) = 0x539d08;
      iVar7 = preprocessor_lexer(lVar8);
    }
    else {
      iVar7 = *(int *)(lVar8 + 0x24);
      *(uint32_t *)(lVar8 + 0x28) = 0;
    }
    bVar12 = iVar7 == 10;
    *(uint32_t *)(lVar8 + 0x28) = 1;
    if (((!bVar12) && (bVar12 = iVar7 == 0x12a, !bVar12)) && (bVar12 = iVar7 == 0x11b, !bVar12)) {
      *(uint64_t *)((long)auStack_40 + lVar3) = 0x539b8f;
      failf(arg1,"%s","Invalid #undef directive");
      return;
    }
    lVar8 = 9;
    pcVar9 = __s2;
    pcVar10 = "__FILE__";
    do {
      if (lVar8 == 0) break;
      lVar8 = lVar8 + -1;
      bVar12 = *pcVar9 == *pcVar10;
      pcVar9 = pcVar9 + (ulong)bVar13 * -2 + 1;
      pcVar10 = pcVar10 + (ulong)bVar13 * -2 + 1;
    } while (bVar12);
    if (bVar12) {
      if (*(long *)(arg1 + 0x938) != 0) {
        *(uint64_t *)((long)auStack_40 + lVar3) = 0x539be2;
        failf(arg1,"undefining \"%s\"",__s2);
        uVar1 = *(uint64_t *)(arg1 + 0x938);
        *(uint64_t *)((long)auStack_40 + lVar3) = 0x539bf2;
        free_define(arg1,uVar1);
        *(uint64_t *)(arg1 + 0x938) = 0;
      }
    }
    else {
      lVar8 = 9;
      pcVar9 = __s2;
      pcVar10 = "__LINE__";
      do {
        if (lVar8 == 0) break;
        lVar8 = lVar8 + -1;
        bVar12 = *pcVar9 == *pcVar10;
        pcVar9 = pcVar9 + (ulong)bVar13 * -2 + 1;
        pcVar10 = pcVar10 + (ulong)bVar13 * -2 + 1;
      } while (bVar12);
      if ((bVar12) && (*(long *)(arg1 + 0x940) != 0)) {
        *(uint64_t *)((long)auStack_40 + lVar3) = 0x539cd6;
        failf(arg1,"undefining \"%s\"",__s2);
        uVar1 = *(uint64_t *)(arg1 + 0x940);
        *(uint64_t *)((long)auStack_40 + lVar3) = 0x539ce6;
        free_define(arg1,uVar1);
        *(uint64_t *)(arg1 + 0x940) = 0;
      }
    }
    cVar6 = *__s2;
    uVar11 = 5;
    if (cVar6 != '\0') {
      uVar11 = 0x1505;
      pcVar9 = __s2;
      do {
        pcVar9 = pcVar9 + 1;
        uVar11 = uVar11 * 0x21 ^ (int)cVar6;
        cVar6 = *pcVar9;
      } while (cVar6 != '\0');
      uVar11 = uVar11 & 0xff;
    }
    puVar2 = *(uint64_t **)(arg1 + 0x130 + (long)(int)uVar11 * 8);
    puVar5 = (uint64_t *)0x0;
    while (puVar4 = puVar5, puVar5 = puVar2, puVar5 != (uint64_t *)0x0) {
      pcVar9 = (char *)*puVar5;
      *(uint64_t *)((long)auStack_40 + lVar3) = 0x539c6b;
      iVar7 = strcmp(pcVar9,__s2);
      puVar2 = (uint64_t *)puVar5[5];
      if (iVar7 == 0) {
        if (puVar4 == (uint64_t *)0x0) {
          *(uint64_t **)(arg1 + 0x130 + (long)(int)uVar11 * 8) = puVar2;
        }
        else {
          puVar4[5] = puVar2;
        }
        *(uint64_t *)((long)auStack_40 + lVar3) = 0x539c8b;
        free_define(arg1,puVar5);
        return;
      }
    }
  }
  else {
    auStack_40[0] = 0x539aff;
    failf(arg1,"%s","Macro names must be indentifiers");
  }
  return;
}

/* ======================================================================
 * handle_pp_line  (Ghidra `handle_pp_line` @ 00539d20)
 * Signature: uint8_t handle_pp_line(void)
 * Calls: `failf`, `memcpy`, `preprocessor_lexer`, `stringcache`, `token_to_int_isra_7`
 * Called by: `preprocessor_nexttoken`
 */
void handle_pp_line(long arg1)

{
  uint8_t *__dest;
  uint64_t *puVar1;
  void *__src;
  long lVar2;
  uint32_t uVar3;
  int iVar4;
  uint64_t uVar5;
  uint8_t *puVar6;
  uint64_t uStack_30;
  
  puVar1 = *(uint64_t **)(arg1 + 0x120);
  if (*(int *)(puVar1 + 5) == 0) {
    uStack_30 = 0x539d90;
    iVar4 = preprocessor_lexer(puVar1);
  }
  else {
    iVar4 = *(int *)((long)puVar1 + 0x24);
    *(uint32_t *)(puVar1 + 5) = 0;
  }
  puVar6 = &stack0xffffffffffffffd8;
  if (iVar4 == 0x102) {
    uStack_30 = 0x539da4;
    uVar3 = token_to_int_isra_7(puVar1 + 3,puVar1 + 4);
    if (*(int *)(puVar1 + 5) == 0) {
      uStack_30 = 0x539e68;
      iVar4 = preprocessor_lexer(puVar1);
    }
    else {
      iVar4 = *(int *)((long)puVar1 + 0x24);
      *(uint32_t *)(puVar1 + 5) = 0;
    }
    if (iVar4 == 10) {
LAB_00539e50:
      *(uint32_t *)(puVar1 + 9) = uVar3;
      return;
    }
    puVar6 = &stack0xffffffffffffffd8;
    if (iVar4 == 0x104) {
      puVar1[3] = puVar1[3] + 1;
      iVar4 = *(int *)(puVar1 + 4);
      __src = (void *)puVar1[3];
      lVar2 = -((ulong)*(uint *)(puVar1 + 4) + 0x1e & 0xfffffffffffffff0);
      puVar6 = &stack0xffffffffffffffd8 + lVar2;
      __dest = &stack0xffffffffffffffe0 + lVar2;
      *(uint64_t *)((long)&uStack_30 + lVar2) = 0x539e00;
      memcpy(__dest,__src,(ulong)(iVar4 - 1));
      __dest[*(int *)(puVar1 + 4) - 1] = 0;
      if (*(int *)(puVar1 + 5) == 0) {
        *(uint64_t *)((long)&uStack_30 + lVar2) = 0x539e78;
        iVar4 = preprocessor_lexer(puVar1);
      }
      else {
        iVar4 = *(int *)((long)puVar1 + 0x24);
        *(uint32_t *)(puVar1 + 5) = 0;
      }
      *(uint32_t *)(puVar1 + 5) = 1;
      if (((iVar4 == 10) || (iVar4 == 0x12a)) || (iVar4 == 0x11b)) {
        uVar5 = *(uint64_t *)(arg1 + 0x948);
        *(uint64_t *)((long)&uStack_30 + lVar2) = 0x539e4d;
        uVar5 = stringcache(uVar5,__dest);
        *puVar1 = uVar5;
        goto LAB_00539e50;
      }
    }
  }
  *(uint64_t *)(puVar6 + -8) = 0x539d70;
  failf(arg1,"%s","Invalid #line directive");
  return;
}

/* ======================================================================
 * handle_pp_include  (Ghidra `handle_pp_include` @ 00539e80)
 * Signature: uint8_t handle_pp_include(void)
 * Calls: `failf`, `memcpy`, `preprocessor_lexer`, `push_source`
 * Called by: `preprocessor_nexttoken`
 */
void handle_pp_include(long arg1)

{
  uint8_t *__dest;
  char cVar1;
  long lVar2;
  code *pcVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  long lVar7;
  uint32_t uVar8;
  int iVar9;
  uint64_t *puVar10;
  void *__src;
  uint64_t uVar11;
  uint uVar12;
  ulong __n;
  char *pcVar13;
  uint64_t uStack_70;
  uint64_t auStack_68 [3];
  uint8_t auStack_50 [8];
  uint32_t local_48 [6];
  
  lVar2 = *(long *)(arg1 + 0x120);
  if (*(int *)(lVar2 + 0x28) == 0) {
    uStack_70 = 0x53a058;
    iVar9 = preprocessor_lexer(lVar2);
  }
  else {
    iVar9 = *(int *)(lVar2 + 0x24);
    *(uint32_t *)(lVar2 + 0x28) = 0;
  }
  if (iVar9 == 0x104) {
    pcVar13 = *(char **)(lVar2 + 0x10);
    uVar11 = 0;
  }
  else {
    puVar10 = auStack_68;
    if (iVar9 != 0x3c) goto LAB_00539ece;
    iVar9 = *(int *)(lVar2 + 0x44);
    do {
      puVar10 = auStack_68;
      if (iVar9 == 0) goto LAB_00539ece;
      cVar1 = **(char **)(lVar2 + 0x10);
      puVar10 = auStack_68;
      if (cVar1 == '\n' || cVar1 == '\r') goto LAB_00539ece;
      pcVar13 = *(char **)(lVar2 + 0x10) + 1;
      iVar9 = iVar9 + -1;
      *(char **)(lVar2 + 0x10) = pcVar13;
      *(int *)(lVar2 + 0x44) = iVar9;
    } while (cVar1 != '>');
    uVar11 = 1;
  }
  __src = (void *)(*(long *)(lVar2 + 0x18) + 1);
  uVar12 = (int)pcVar13 - (int)__src;
  *(void **)(lVar2 + 0x18) = __src;
  __n = (ulong)(uVar12 - 1);
  lVar7 = -((ulong)uVar12 + 0x1e & 0xfffffffffffffff0);
  puVar10 = (uint64_t *)((long)auStack_68 + lVar7);
  __dest = auStack_50 + lVar7;
  *(uint64_t *)((long)auStack_68 + lVar7 + -8) = 0x539f40;
  memcpy(__dest,__src,__n);
  __dest[__n] = 0;
  if (*(int *)(lVar2 + 0x28) == 0) {
    *(uint64_t *)((long)auStack_68 + lVar7 + -8) = 0x53a0d8;
    iVar9 = preprocessor_lexer(lVar2);
  }
  else {
    iVar9 = *(int *)(lVar2 + 0x24);
    *(uint32_t *)(lVar2 + 0x28) = 0;
  }
  *(uint32_t *)(lVar2 + 0x28) = 1;
  if (((iVar9 == 10) || (iVar9 == 0x12a)) || (iVar9 == 0x11b)) {
    pcVar3 = *(code **)(arg1 + 0x950);
    auStack_68[2] = 0;
    local_48[0] = 0;
    if ((pcVar3 == (code *)0x0) || (*(long *)(arg1 + 0x958) == 0)) {
      *(uint64_t *)((long)auStack_68 + lVar7 + -8) = 0x53a0c4;
      failf(arg1,"%s","Saw #include, but no include callbacks defined");
      return;
    }
    uVar4 = *(uint64_t *)(lVar2 + 8);
    uVar5 = *(uint64_t *)(arg1 + 0x960);
    *(uint64_t *)((long)auStack_68 + lVar7 + 8) = *(uint64_t *)(arg1 + 0x970);
    *(uint64_t *)((long)auStack_68 + lVar7) = *(uint64_t *)(arg1 + 0x968);
    *(uint64_t *)((long)auStack_68 + lVar7 + -8) = 0x539fdc;
    iVar9 = (*pcVar3)(uVar11,__dest,uVar4,auStack_68 + 2,local_48,uVar5);
    uVar8 = local_48[0];
    uVar11 = auStack_68[2];
    if (iVar9 == 0) {
      *(uint64_t *)((long)auStack_68 + lVar7 + -8) = 0x53a042;
      failf(arg1,"%s","Include callback failed");
      return;
    }
    uVar4 = *(uint64_t *)(arg1 + 0x958);
    *(uint64_t *)((long)auStack_68 + lVar7 + -8) = 0x539fff;
    iVar9 = push_source(arg1,__dest,uVar11,uVar8,1,uVar4);
    uVar11 = auStack_68[2];
    if (iVar9 != 0) {
      return;
    }
    uVar4 = *(uint64_t *)(arg1 + 0x970);
    uVar5 = *(uint64_t *)(arg1 + 0x968);
    uVar6 = *(uint64_t *)(arg1 + 0x960);
    pcVar3 = *(code **)(arg1 + 0x958);
    *(uint64_t *)((long)auStack_68 + lVar7 + -8) = 0x53a026;
    (*pcVar3)(uVar11,uVar6,uVar5,uVar4);
    return;
  }
LAB_00539ece:
  *(uint64_t *)((long)puVar10 + -8) = 0x539ee2;
  failf(arg1,"%s","Invalid #include directive");
  return;
}

/* ======================================================================
 * handle_pp_identifier  (Ghidra `handle_pp_identifier` @ 0053a0e0)
 * Signature: uint8_t handle_pp_identifier(void)
 * Calls: `FreeBridge`, `MallocBridge`, `buffer_append`, `buffer_create`, `buffer_destroy`, `buffer_flatten`, `buffer_size`, `close_define_include`, `failf`, `find_define` (+7 more)
 * Called by: `preprocessor_nexttoken`, `reduce_pp_expression`
 */
uint32_t handle_pp_identifier(long arg1)

{
  void *pvVar1;
  char cVar2;
  uint uVar3;
  uint32_t uVar4;
  void *__src;
  uint64_t uVar5;
  code *pcVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  long lVar9;
  bool bVar10;
  char *pcVar11;
  uint32_t uVar12;
  int iVar13;
  size_t sVar14;
  uint64_t uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  char *pcVar20;
  uint64_t *puVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  char *pcVar25;
  char *pcVar26;
  uint64_t *puVar27;
  int iVar28;
  bool bVar29;
  byte bVar30;
  long alStack_100 [2];
  char *local_f0;
  void *local_e8;
  uint64_t local_e0;
  uint64_t *local_d8;
  uint local_d0;
  int local_cc;
  long local_c8;
  long local_c0;
  char *local_b8;
  long local_b0;
  uint64_t local_a8;
  uint64_t local_a0;
  uint64_t local_98;
  uint64_t local_90;
  uint64_t local_88;
  uint64_t local_80;
  uint64_t local_78;
  uint64_t local_70;
  uint64_t local_68;
  uint64_t local_60;
  uint64_t local_58;
  uint64_t local_50;
  uint64_t local_48;
  
  bVar30 = 0;
  iVar13 = *(int *)(arg1 + 0x108);
  *(int *)(arg1 + 0x108) = iVar13 + 1;
  if (iVar13 < 0x100) {
    puVar27 = *(uint64_t **)(arg1 + 0x120);
    uVar3 = *(uint *)(puVar27 + 4);
    __src = (void *)puVar27[3];
    uVar15 = *puVar27;
    uVar4 = *(uint32_t *)(puVar27 + 9);
    lVar9 = -((ulong)(*(int *)(puVar27 + 4) + 1) + 0x1e & 0xfffffffffffffff0);
    pvVar1 = (void *)((long)&local_f0 + lVar9);
    *(uint64_t *)((long)alStack_100 + lVar9) = 0x53a14e;
    memcpy(pvVar1,__src,(ulong)uVar3);
    uVar12 = 0;
    *(uint8_t *)((long)pvVar1 + (ulong)*(uint *)(puVar27 + 4)) = 0;
    *(uint64_t *)((long)alStack_100 + lVar9) = 0x53a165;
    local_b8 = (char *)find_define(arg1,pvVar1);
    if (local_b8 != (char *)0x0) {
      iVar13 = *(int *)(local_b8 + 0x20);
      if (iVar13 == 0) {
        pcVar20 = *(char **)(local_b8 + 8);
        *(uint64_t *)((long)alStack_100 + lVar9) = 0x53a18c;
        sVar14 = strlen(pcVar20);
        *(uint64_t *)((long)alStack_100 + lVar9) = 0x53a1a2;
        uVar12 = push_source(arg1,uVar15,pcVar20,sVar14 & 0xffffffff,uVar4,0);
      }
      else {
        pcVar20 = *(char **)(arg1 + 0x120);
        local_cc = 0;
        if (-1 < iVar13) {
          local_cc = iVar13;
        }
        local_a8 = *(uint64_t *)pcVar20;
        local_a0 = *(uint64_t *)(pcVar20 + 8);
        local_98 = *(uint64_t *)(pcVar20 + 0x10);
        local_90 = *(uint64_t *)(pcVar20 + 0x18);
        local_88 = *(uint64_t *)(pcVar20 + 0x20);
        local_80 = *(uint64_t *)(pcVar20 + 0x28);
        local_78 = *(uint64_t *)(pcVar20 + 0x30);
        local_70 = *(uint64_t *)(pcVar20 + 0x38);
        local_68 = *(uint64_t *)(pcVar20 + 0x40);
        local_60 = *(uint64_t *)(pcVar20 + 0x48);
        local_58 = *(uint64_t *)(pcVar20 + 0x50);
        local_50 = *(uint64_t *)(pcVar20 + 0x58);
        local_48 = *(uint64_t *)(pcVar20 + 0x60);
        if (*(int *)(pcVar20 + 0x28) == 0) {
          *(uint64_t *)((long)alStack_100 + lVar9) = 0x53a788;
          iVar13 = preprocessor_lexer(pcVar20);
        }
        else {
          iVar13 = *(int *)(pcVar20 + 0x24);
          pcVar20[0x28] = '\0';
          pcVar20[0x29] = '\0';
          pcVar20[0x2a] = '\0';
          pcVar20[0x2b] = '\0';
        }
        if (iVar13 == 0x28) {
          pcVar20[0x38] = '\x01';
          pcVar20[0x39] = '\0';
          pcVar20[0x3a] = '\0';
          pcVar20[0x3b] = '\0';
          local_c8 = 0;
          local_d0 = 0;
          local_d8 = (uint64_t *)0x0;
          local_e8 = pvVar1;
          local_c0 = arg1;
          do {
            lVar17 = local_c0;
            local_e0 = CONCAT44(local_e0._4_4_,(int)local_c8);
            *(uint64_t *)((long)alStack_100 + lVar9) = 0x53a363;
            uVar15 = buffer_create(0x80,MallocBridge,FreeBridge,lVar17);
            lVar17 = local_c0;
            *(uint64_t *)((long)alStack_100 + lVar9) = 0x53a381;
            local_b0 = buffer_create(0x80,MallocBridge,FreeBridge,lVar17);
            if (*(int *)(pcVar20 + 0x28) == 0) {
              *(uint64_t *)((long)alStack_100 + lVar9) = 0x53a798;
              iVar13 = preprocessor_lexer(pcVar20);
            }
            else {
              iVar13 = *(int *)(pcVar20 + 0x24);
              pcVar20[0x28] = '\0';
              pcVar20[0x29] = '\0';
              pcVar20[0x2a] = '\0';
              pcVar20[0x2b] = '\0';
            }
            iVar28 = 1;
LAB_0053a3a9:
            pcVar26 = *(char **)(pcVar20 + 0x18);
            uVar24 = (ulong)*(uint *)(pcVar20 + 0x20);
            if (iVar13 == 0x28) goto LAB_0053a44d;
LAB_0053a3ba:
            lVar16 = local_b0;
            lVar17 = local_c0;
            puVar27 = local_d8;
            uVar22 = uVar24;
            pcVar25 = pcVar26;
            if (iVar13 == 0x29) {
              iVar28 = iVar28 + -1;
              bVar10 = false;
              if (iVar28 != 0) goto LAB_0053a3fd;
            }
            else {
              if (iVar13 != 0x2c) {
                if (iVar13 == 0x20) {
                  *(uint64_t *)((long)alStack_100 + lVar9) = 0x53a6cf;
                  lVar17 = buffer_size(lVar16);
                  uVar24 = (ulong)(lVar17 != 0);
                  *(uint64_t *)((long)alStack_100 + lVar9) = 0x53a6de;
                  lVar17 = buffer_size(uVar15);
                  pcVar26 = " ";
                  uVar22 = (ulong)(lVar17 != 0);
                  pcVar25 = pcVar26;
                }
                else {
                  if (iVar13 == 0x101) {
                    *(uint64_t *)((long)alStack_100 + lVar9) = 0x53a704;
                    lVar17 = find_define_by_token(lVar17);
                    if ((lVar17 != 0) && (*(int *)(lVar17 + 0x20) == 0)) {
                      pcVar25 = *(char **)(lVar17 + 8);
                      local_f0 = pcVar25;
                      *(uint64_t *)((long)alStack_100 + lVar9) = 0x53a731;
                      sVar14 = strlen(pcVar25);
                      uVar22 = sVar14 & 0xffffffff;
                      pcVar25 = local_f0;
                    }
                    goto LAB_0053a3fd;
                  }
                  if ((iVar13 == 0x11b) || (iVar13 == 0x12a)) {
                    pcVar20[0x28] = '\x01';
                    pcVar20[0x29] = '\0';
                    pcVar20[0x2a] = '\0';
                    pcVar20[0x2b] = '\0';
                    *(uint64_t *)((long)alStack_100 + lVar9) = 0x53a7cc;
                    failf(lVar17,"%s","Unterminated macro list");
                    uVar12 = 0;
                    goto joined_r0x0053a754;
                  }
                }
LAB_0053a3fd:
                do {
                  *(uint64_t *)((long)alStack_100 + lVar9) = 0x53a405;
                  iVar13 = buffer_append(uVar15,pcVar25,uVar22);
                  lVar17 = local_b0;
                  if (iVar13 == 0) {
LAB_0053a740:
                    puVar27 = local_d8;
                    uVar12 = 0;
                    lVar17 = local_c0;
                    goto joined_r0x0053a754;
                  }
                  *(uint64_t *)((long)alStack_100 + lVar9) = 0x53a41f;
                  iVar13 = buffer_append(lVar17,pcVar26,uVar24);
                  if (iVar13 == 0) goto LAB_0053a740;
                  if (*(int *)(pcVar20 + 0x28) == 0) {
                    *(uint64_t *)((long)alStack_100 + lVar9) = 0x53a6a0;
                    iVar13 = preprocessor_lexer(pcVar20);
                    goto LAB_0053a3a9;
                  }
                  iVar13 = *(int *)(pcVar20 + 0x24);
                  pcVar20[0x28] = '\0';
                  pcVar20[0x29] = '\0';
                  pcVar20[0x2a] = '\0';
                  pcVar20[0x2b] = '\0';
                  pcVar26 = *(char **)(pcVar20 + 0x18);
                  uVar24 = (ulong)*(uint *)(pcVar20 + 0x20);
                  if (iVar13 != 0x28) goto LAB_0053a3ba;
LAB_0053a44d:
                  iVar28 = iVar28 + 1;
                  uVar22 = uVar24;
                  pcVar25 = pcVar26;
                } while( true );
              }
              if (iVar28 != 1) goto LAB_0053a3fd;
              bVar10 = true;
            }
            *(uint64_t *)((long)alStack_100 + lVar9) = 0x53a474;
            lVar16 = buffer_size(uVar15);
            lVar17 = local_b0;
            if (lVar16 == 0) {
              local_d0 = (uint)((int)local_e0 == 0 && !bVar10);
            }
            if ((int)local_e0 < local_cc) {
              *(uint64_t *)((long)alStack_100 + lVar9) = 0x53a4ac;
              local_e0 = buffer_size(lVar17);
              lVar17 = local_b0;
              *(uint64_t *)((long)alStack_100 + lVar9) = 0x53a4bf;
              alStack_100[1] = buffer_flatten(lVar17);
              *(uint64_t *)((long)alStack_100 + lVar9) = 0x53a4ce;
              iVar13 = buffer_size(uVar15);
              *(uint64_t *)((long)alStack_100 + lVar9) = 0x53a4d9;
              pcVar26 = (char *)buffer_flatten(uVar15);
              puVar21 = *(uint64_t **)(local_c0 + 0x930);
              if (puVar21 == (uint64_t *)0x0) {
                uVar5 = *(uint64_t *)(local_c0 + 0x970);
                pcVar6 = *(code **)(local_c0 + 0x960);
                local_f0 = pcVar26;
                *(uint64_t *)((long)alStack_100 + lVar9) = 0x53ab0f;
                puVar21 = (uint64_t *)(*pcVar6)(0x30,uVar5);
                pcVar26 = local_f0;
                if (puVar21 != (uint64_t *)0x0) goto LAB_0053a508;
                *(uint32_t *)(local_c0 + 4) = 1;
              }
              else {
                *(uint64_t *)(local_c0 + 0x930) = puVar21[5];
LAB_0053a508:
                bVar29 = ((ulong)puVar21 & 1) != 0;
                uVar24 = 0x30;
                puVar27 = puVar21;
                if (bVar29) {
                  *(uint8_t *)puVar21 = 0;
                  puVar27 = (uint64_t *)((long)puVar21 + 1);
                  uVar24 = 0x2f;
                }
                if (((ulong)puVar27 & 2) != 0) {
                  *(uint16_t *)puVar27 = 0;
                  uVar24 = (ulong)((int)uVar24 - 2);
                  puVar27 = (uint64_t *)((long)puVar27 + 2);
                }
                if (((ulong)puVar27 & 4) != 0) {
                  *(uint32_t *)puVar27 = 0;
                  uVar24 = (ulong)((int)uVar24 - 4);
                  puVar27 = (uint64_t *)((long)puVar27 + 4);
                }
                for (uVar22 = uVar24 >> 3; uVar22 != 0; uVar22 = uVar22 - 1) {
                  *puVar27 = 0;
                  puVar27 = puVar27 + (ulong)bVar30 * -2 + 1;
                }
                if ((uVar24 & 4) != 0) {
                  *(uint32_t *)puVar27 = 0;
                  puVar27 = (uint64_t *)((long)puVar27 + 4);
                }
                if ((uVar24 & 2) != 0) {
                  *(uint16_t *)puVar27 = 0;
                  puVar27 = (uint64_t *)((long)puVar27 + 2);
                }
                if (bVar29) {
                  *(uint8_t *)puVar27 = 0;
                }
              }
              lVar17 = local_c0;
              puVar27 = local_d8;
              lVar16 = alStack_100[1];
              if (((pcVar26 == (char *)0x0) || (alStack_100[1] == 0)) ||
                 (puVar21 == (uint64_t *)0x0)) {
                uVar5 = *(uint64_t *)(local_c0 + 0x970);
                pcVar6 = *(code **)(local_c0 + 0x968);
                local_f0 = pcVar26;
                *(uint64_t *)((long)alStack_100 + lVar9) = 0x53ab65;
                (*pcVar6)(lVar16,uVar5);
                pcVar26 = local_f0;
                uVar5 = *(uint64_t *)(lVar17 + 0x970);
                pcVar6 = *(code **)(lVar17 + 0x968);
                *(uint64_t *)((long)alStack_100 + lVar9) = 0x53ab7d;
                (*pcVar6)(pcVar26,uVar5);
                lVar16 = local_b0;
                *(uint64_t *)((long)alStack_100 + lVar9) = 0x53ab89;
                buffer_destroy(lVar16);
                *(uint64_t *)((long)alStack_100 + lVar9) = 0x53ab91;
                buffer_destroy(uVar15);
                uVar12 = 0;
                *(uint64_t *)((long)alStack_100 + lVar9) = 0x53ab9f;
                free_define(lVar17,puVar21);
                goto joined_r0x0053a754;
              }
              iVar13 = iVar13 + -1;
              if (-1 < iVar13) {
                cVar2 = pcVar26[iVar13];
                pcVar25 = pcVar26 + iVar13;
                pcVar11 = pcVar26 + (long)iVar13 + -1;
                while (cVar2 == ' ') {
                  iVar13 = iVar13 + -1;
                  *pcVar25 = '\0';
                  if (iVar13 < 0) break;
                  cVar2 = *pcVar11;
                  pcVar25 = pcVar11;
                  pcVar11 = pcVar11 + -1;
                }
              }
              iVar13 = (int)local_e0 + -1;
              if (-1 < iVar13) {
                pcVar25 = (char *)(alStack_100[1] + iVar13);
                cVar2 = *pcVar25;
                pcVar11 = (char *)(alStack_100[1] + -1 + (long)iVar13);
                while (cVar2 == ' ') {
                  iVar13 = iVar13 + -1;
                  *pcVar25 = '\0';
                  if (iVar13 < 0) break;
                  cVar2 = *pcVar11;
                  pcVar25 = pcVar11;
                  pcVar11 = pcVar11 + -1;
                }
              }
              uVar5 = *(uint64_t *)(*(long *)(local_b8 + 0x18) + local_c8 * 8);
              puVar21[1] = pcVar26;
              puVar21[2] = alStack_100[1];
              *puVar21 = uVar5;
              puVar21[5] = local_d8;
              local_d8 = puVar21;
            }
            *(uint64_t *)((long)alStack_100 + lVar9) = 0x53a620;
            buffer_destroy(uVar15);
            lVar17 = local_b0;
            *(uint64_t *)((long)alStack_100 + lVar9) = 0x53a62c;
            buffer_destroy(lVar17);
            lVar17 = local_c0;
            iVar13 = local_cc;
            puVar27 = local_d8;
            pvVar1 = local_e8;
            lVar16 = local_c8 + 1;
            iVar28 = (int)local_c8 + 1;
            local_c8 = lVar16;
          } while (bVar10);
          if ((iVar28 == 1) && (local_cc == 0)) {
            if (local_d0 == 0) {
LAB_0053a671:
              *(uint64_t *)((long)alStack_100 + lVar9) = 0x53a68d;
              failf(lVar17,"macro \'%s\' passed %d arguments, but requires %d",pvVar1,iVar28,iVar13)
              ;
              uVar12 = 0;
              goto joined_r0x0053a754;
            }
          }
          else if (local_cc != iVar28) goto LAB_0053a671;
          *(uint64_t *)((long)alStack_100 + lVar9) = 0x53a804;
          local_b0 = buffer_create(0x80,MallocBridge,FreeBridge,lVar17);
          uVar12 = 0;
          if (local_b0 != 0) {
            uVar24 = 0xffffffffffffffff;
            pcVar26 = *(char **)(local_b8 + 8);
            uVar12 = *(uint32_t *)(*(uint64_t **)(lVar17 + 0x120) + 9);
            uVar15 = **(uint64_t **)(lVar17 + 0x120);
            pcVar25 = pcVar26;
            do {
              if (uVar24 == 0) break;
              uVar24 = uVar24 - 1;
              cVar2 = *pcVar25;
              pcVar25 = pcVar25 + (ulong)bVar30 * -2 + 1;
            } while (cVar2 != '\0');
            local_f0 = (char *)0xffffffffffffffff;
            *(uint64_t *)((long)alStack_100 + lVar9) = 0x53a853;
            iVar13 = push_source(lVar17,uVar15,pcVar26,~uVar24 - 1,uVar12,0);
            lVar16 = local_b0;
            if (iVar13 != 0) {
              lVar16 = *(long *)(lVar17 + 0x120);
              local_c0 = lVar16 + 0x20;
              local_c8 = lVar16 + 0x18;
              local_b8 = pcVar20;
              while( true ) {
                if (*(int *)(lVar16 + 0x28) == 0) {
                  *(uint64_t *)((long)alStack_100 + lVar9) = 0x53a920;
                  iVar13 = preprocessor_lexer(lVar16);
                }
                else {
                  iVar13 = *(int *)(lVar16 + 0x24);
                  *(uint32_t *)(lVar16 + 0x28) = 0;
                }
                lVar23 = local_b0;
                pcVar20 = local_b8;
                if (iVar13 == 0x11b) break;
                if (*(int *)(lVar16 + 0x24) == 0x11a) {
                  if (*(int *)(lVar16 + 0x28) == 0) {
                    *(uint64_t *)((long)alStack_100 + lVar9) = 0x53abac;
                    preprocessor_lexer(lVar16);
                    uVar12 = 1;
                  }
                  else {
                    *(uint32_t *)(lVar16 + 0x28) = 0;
                    uVar12 = 1;
                  }
                }
                else {
                  *(uint64_t *)((long)alStack_100 + lVar9) = 0x53a88d;
                  lVar18 = buffer_size(lVar23);
                  lVar23 = local_b0;
                  uVar12 = 0;
                  if (lVar18 != 0) {
                    local_f0 = (char *)((ulong)local_f0 & 0xffffffff00000000);
                    *(uint64_t *)((long)alStack_100 + lVar9) = 0x53a970;
                    iVar13 = buffer_append(lVar23,&DAT_005ca3d2 /* R:u32=1931804704 */,1);
                    uVar12 = SUB84(local_f0,0);
                    pcVar20 = local_b8;
                    if (iVar13 == 0) goto LAB_0053a985;
                  }
                }
                lVar18 = local_c0;
                lVar23 = local_c8;
                pcVar26 = *(char **)(lVar16 + 0x18);
                iVar13 = *(int *)(lVar16 + 0x20);
                if (*(int *)(lVar16 + 0x24) == 0x119) {
                  if (*(int *)(lVar16 + 0x28) == 0) {
                    *(uint64_t *)((long)alStack_100 + lVar9) = 0x53acfc;
                    preprocessor_lexer(lVar16);
                  }
                  else {
                    *(uint32_t *)(lVar16 + 0x28) = 0;
                  }
                  lVar23 = local_b0;
                  *(uint64_t *)((long)alStack_100 + lVar9) = 0x53aa44;
                  iVar28 = buffer_append(lVar23,"\"",1);
                  lVar18 = local_c0;
                  lVar23 = local_c8;
                  pcVar20 = local_b8;
                  if (iVar28 != 0) {
                    if (*(int *)(lVar16 + 0x24) == 0x101) {
                      *(uint64_t *)((long)alStack_100 + lVar9) = 0x53acd0;
                      lVar23 = find_macro_arg_isra_8(lVar23,lVar18,puVar27);
                      if (lVar23 != 0) {
                        pcVar26 = *(char **)(lVar23 + 0x10);
                        lVar23 = -1;
                        pcVar20 = pcVar26;
                        do {
                          if (lVar23 == 0) break;
                          lVar23 = lVar23 + -1;
                          cVar2 = *pcVar20;
                          pcVar20 = pcVar20 + (ulong)bVar30 * -2 + 1;
                        } while (cVar2 != '\0');
                        iVar13 = ~(uint)lVar23 - 1;
                      }
                    }
                    lVar23 = local_b0;
                    *(uint64_t *)((long)alStack_100 + lVar9) = 0x53aa6c;
                    iVar13 = buffer_append(lVar23,pcVar26,iVar13);
                    lVar23 = local_b0;
                    pcVar20 = local_b8;
                    if (iVar13 != 0) {
                      *(uint64_t *)((long)alStack_100 + lVar9) = 0x53aa8a;
                      iVar13 = buffer_append(lVar23,"\"",1);
                      goto joined_r0x0053aa8c;
                    }
                  }
                  goto LAB_0053a985;
                }
                if (*(int *)(lVar16 + 0x24) == 0x101) {
                  local_f0 = (char *)CONCAT44(local_f0._4_4_,uVar12);
                  *(uint64_t *)((long)alStack_100 + lVar9) = 0x53aab3;
                  pcVar20 = (char *)find_macro_arg_isra_8(lVar23,lVar18,puVar27);
                  if (pcVar20 != (char *)0x0) {
                    if ((int)local_f0 == 0) {
                      if (*(int *)(lVar16 + 0x28) == 0) {
                        local_f0 = pcVar20;
                        *(uint64_t *)((long)alStack_100 + lVar9) = 0x53ad50;
                        iVar13 = preprocessor_lexer(lVar16);
                        pcVar20 = local_f0;
                      }
                      else {
                        iVar13 = *(int *)(lVar16 + 0x24);
                        *(uint32_t *)(lVar16 + 0x28) = 0;
                      }
                      *(uint32_t *)(lVar16 + 0x28) = 1;
                      if (iVar13 == 0x11a) goto LAB_0053aacd;
                      pcVar26 = *(char **)(pcVar20 + 8);
                    }
                    else {
LAB_0053aacd:
                      pcVar26 = *(char **)(pcVar20 + 0x10);
                    }
                    lVar23 = -1;
                    pcVar20 = pcVar26;
                    do {
                      if (lVar23 == 0) break;
                      lVar23 = lVar23 + -1;
                      cVar2 = *pcVar20;
                      pcVar20 = pcVar20 + (ulong)bVar30 * -2 + 1;
                    } while (cVar2 != '\0');
                    iVar13 = ~(uint)lVar23 - 1;
                  }
                }
                lVar23 = local_b0;
                *(uint64_t *)((long)alStack_100 + lVar9) = 0x53a8cc;
                iVar13 = buffer_append(lVar23,pcVar26,iVar13);
joined_r0x0053aa8c:
                pcVar20 = local_b8;
                if (iVar13 == 0) goto LAB_0053a985;
              }
              *(uint64_t *)((long)alStack_100 + lVar9) = 0x53abc9;
              local_b8 = (char *)buffer_flatten(lVar23);
              lVar16 = local_b0;
              if (local_b8 == (char *)0x0) goto LAB_0053a985;
              *(uint64_t *)((long)alStack_100 + lVar9) = 0x53abe5;
              buffer_destroy(lVar16);
              lVar16 = *(long *)(lVar17 + 0x120);
              puVar21 = (uint64_t *)0x0;
              if (lVar16 != 0) {
                pcVar6 = *(code **)(lVar16 + 0x58);
                if (pcVar6 != (code *)0x0) {
                  uVar15 = *(uint64_t *)(lVar17 + 0x968);
                  uVar5 = *(uint64_t *)(lVar17 + 0x960);
                  uVar7 = *(uint64_t *)(lVar16 + 8);
                  *(uint64_t *)((long)alStack_100 + lVar9) = 0x53ac15;
                  (*pcVar6)(uVar7,uVar5,uVar15);
                }
                lVar23 = *(long *)(lVar16 + 0x50);
                while (lVar23 != 0) {
                  lVar18 = *(long *)(lVar23 + 0x10);
                  *(uint64_t *)(lVar23 + 0x10) = *(uint64_t *)(lVar17 + 0x118);
                  *(long *)(lVar17 + 0x118) = lVar23;
                  lVar23 = lVar18;
                }
                *(uint64_t *)(lVar17 + 0x120) = *(uint64_t *)(lVar16 + 0x60);
                *(uint64_t *)(lVar16 + 0x60) = *(uint64_t *)(lVar17 + 0x128);
                *(long *)(lVar17 + 0x128) = lVar16;
                puVar21 = *(uint64_t **)(lVar17 + 0x120);
              }
              pcVar26 = local_b8;
              uVar24 = 0xffffffffffffffff;
              uVar12 = *(uint32_t *)(puVar21 + 9);
              uVar15 = *puVar21;
              pcVar25 = local_b8;
              do {
                if (uVar24 == 0) break;
                uVar24 = uVar24 - 1;
                cVar2 = *pcVar25;
                pcVar25 = pcVar25 + (ulong)bVar30 * -2 + 1;
              } while (cVar2 != '\0');
              *(uint64_t *)((long)alStack_100 + lVar9) = 0x53ac95;
              iVar13 = push_source(lVar17,uVar15,pcVar26,~uVar24 - 1,uVar12,close_define_include);
              pcVar26 = local_b8;
              uVar12 = 1;
              if (iVar13 == 0) {
                uVar15 = *(uint64_t *)(lVar17 + 0x970);
                pcVar6 = *(code **)(lVar17 + 0x968);
                *(uint64_t *)((long)alStack_100 + lVar9) = 0x53acb5;
                (*pcVar6)(pcVar26,uVar15);
                uVar12 = 0;
              }
              goto joined_r0x0053a754;
            }
            *(uint64_t *)((long)alStack_100 + lVar9) = 0x53ad0d;
            buffer_destroy(lVar16);
            uVar12 = 0;
          }
          goto joined_r0x0053a754;
        }
        uVar12 = 0;
        *(uint64_t *)pcVar20 = local_a8;
        *(uint64_t *)(pcVar20 + 8) = local_a0;
        *(uint64_t *)(pcVar20 + 0x10) = local_98;
        *(uint64_t *)(pcVar20 + 0x18) = local_90;
        *(uint64_t *)(pcVar20 + 0x20) = local_88;
        *(uint64_t *)(pcVar20 + 0x28) = local_80;
        *(uint64_t *)(pcVar20 + 0x30) = local_78;
        *(uint64_t *)(pcVar20 + 0x38) = local_70;
        *(uint64_t *)(pcVar20 + 0x40) = local_68;
        *(uint64_t *)(pcVar20 + 0x48) = local_60;
        *(uint64_t *)(pcVar20 + 0x50) = local_58;
        *(uint64_t *)(pcVar20 + 0x58) = local_50;
        *(uint64_t *)(pcVar20 + 0x60) = local_48;
LAB_0053a2d9:
        pcVar20[0x38] = '\0';
        pcVar20[0x39] = '\0';
        pcVar20[0x3a] = '\0';
        pcVar20[0x3b] = '\0';
      }
    }
  }
  else {
    alStack_100[0] = 0x53a2f9;
    failf(arg1,"%s","Recursing macros");
    uVar12 = 0;
  }
  return uVar12;
LAB_0053a985:
  lVar16 = *(long *)(lVar17 + 0x120);
  if (lVar16 != 0) {
    pcVar6 = *(code **)(lVar16 + 0x58);
    if (pcVar6 != (code *)0x0) {
      uVar15 = *(uint64_t *)(lVar17 + 0x970);
      uVar5 = *(uint64_t *)(lVar17 + 0x968);
      uVar7 = *(uint64_t *)(lVar17 + 0x960);
      uVar8 = *(uint64_t *)(lVar16 + 8);
      *(uint64_t *)((long)alStack_100 + lVar9) = 0x53a9b5;
      (*pcVar6)(uVar8,uVar7,uVar5,uVar15);
    }
    if (*(long *)(lVar16 + 0x50) != 0) {
      lVar23 = *(long *)(lVar16 + 0x50);
      lVar18 = *(long *)(lVar17 + 0x118);
      do {
        lVar19 = lVar23;
        lVar23 = *(long *)(lVar19 + 0x10);
        *(long *)(lVar19 + 0x10) = lVar18;
        *(long *)(lVar17 + 0x118) = lVar19;
        lVar18 = lVar19;
      } while (lVar23 != 0);
    }
    *(uint64_t *)(lVar17 + 0x120) = *(uint64_t *)(lVar16 + 0x60);
    *(uint64_t *)(lVar16 + 0x60) = *(uint64_t *)(lVar17 + 0x128);
    *(long *)(lVar17 + 0x128) = lVar16;
  }
  lVar16 = local_b0;
  *(uint64_t *)((long)alStack_100 + lVar9) = 0x53aa16;
  buffer_destroy(lVar16);
  uVar12 = 0;
joined_r0x0053a754:
  while (puVar27 != (uint64_t *)0x0) {
    puVar21 = (uint64_t *)puVar27[5];
    *puVar27 = 0;
    *(uint64_t *)((long)alStack_100 + lVar9) = 0x53a776;
    free_define(lVar17);
    puVar27 = puVar21;
  }
  goto LAB_0053a2d9;
}

/* ======================================================================
 * init_adpcm  (Ghidra `init_adpcm` @ 0053df00)
 * Signature: uint8_t __stdcall init_adpcm(TWAVEFORMATEX * arg1)
 * Calls: `operator_new`
 * Called by: `audCreateCue`, `audPlayCue`
 */
/* init_adpcm(TWAVEFORMATEX const&) */

uint8_t  [16] init_adpcm(TWAVEFORMATEX *arg1)

{
  short sVar1;
  ushort uVar2;
  ushort uVar3;
  ulong uVar4;
  int iVar5;
  uint uVar6;
  uint64_t *puVar8;
  bool bVar9;
  byte bVar10;
  uint8_t auVar11 [16];
  ulong uVar7;
  
  bVar10 = 0;
  sVar1 = *(short *)(arg1 + 0xe);
  auVar11._0_8_ = operator_new(0x68);
  bVar9 = ((ulong)auVar11._0_8_ & 1) != 0;
  uVar7 = 0x68;
  iVar5 = 0x68;
  puVar8 = auVar11._0_8_;
  if (bVar9) {
    *(uint8_t *)auVar11._0_8_ = 0;
    uVar7 = 0x67;
    iVar5 = 0x67;
    puVar8 = (uint64_t *)((long)auVar11._0_8_ + 1);
  }
  if (((ulong)puVar8 & 2) == 0) {
    uVar6 = (uint)uVar7;
  }
  else {
    *(uint16_t *)puVar8 = 0;
    puVar8 = (uint64_t *)((long)puVar8 + 2);
    uVar6 = iVar5 - 2;
    uVar7 = (ulong)uVar6;
  }
  if (((ulong)puVar8 & 4) != 0) {
    *(uint32_t *)puVar8 = 0;
    uVar7 = (ulong)(uVar6 - 4);
    puVar8 = (uint64_t *)((long)puVar8 + 4);
  }
  for (uVar4 = uVar7 >> 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar8 = 0;
    puVar8 = puVar8 + (ulong)bVar10 * -2 + 1;
  }
  if ((uVar7 & 4) != 0) {
    *(uint32_t *)puVar8 = 0;
    puVar8 = (uint64_t *)((long)puVar8 + 4);
  }
  if ((uVar7 & 2) != 0) {
    *(uint16_t *)puVar8 = 0;
    puVar8 = (uint64_t *)((long)puVar8 + 2);
  }
  if (bVar9) {
    *(uint8_t *)puVar8 = 0;
  }
  *(uint16_t *)((long)auVar11._0_8_ + 0x24) = *(uint16_t *)(arg1 + 2);
  *(ushort *)((long)auVar11._0_8_ + 0x26) = ((sVar1 != 8) + 1) * *(short *)(arg1 + 2);
  uVar2 = *(ushort *)(arg1 + 0xc);
  uVar3 = *(ushort *)(arg1 + 2);
  *(uint32_t *)((long)auVar11._0_8_ + 0x2c) = 0;
  *(uint16_t *)(auVar11._0_8_ + 6) = 7;
  *(uint16_t *)((long)auVar11._0_8_ + 0x32) = 0x100;
  *(uint16_t *)((long)auVar11._0_8_ + 0x34) = 0;
  *(uint16_t *)((long)auVar11._0_8_ + 0x36) = 0x200;
  *(uint16_t *)(auVar11._0_8_ + 7) = 0xff00;
  *(uint16_t *)((long)auVar11._0_8_ + 0x3a) = 0;
  *(uint16_t *)((long)auVar11._0_8_ + 0x3c) = 0;
  *(uint16_t *)((long)auVar11._0_8_ + 0x3e) = 0xc0;
  *(uint16_t *)(auVar11._0_8_ + 8) = 0x40;
  *(uint16_t *)((long)auVar11._0_8_ + 0x42) = 0xf0;
  *(uint16_t *)((long)auVar11._0_8_ + 0x44) = 0;
  *(uint16_t *)((long)auVar11._0_8_ + 0x46) = 0x1cc;
  *(uint16_t *)(auVar11._0_8_ + 9) = 0xff30;
  *(uint16_t *)((long)auVar11._0_8_ + 0x4a) = 0x188;
  *(uint16_t *)((long)auVar11._0_8_ + 0x4c) = 0xff18;
  *(uint32_t *)(auVar11._0_8_ + 0xc) = 0;
  *(uint8_t *)((long)auVar11._0_8_ + 100) = 0;
  *(uint *)(auVar11._0_8_ + 5) = ((uint)uVar2 * 2) / (uint)uVar3 - 0xc;
  auVar11._8_8_ = (ulong)(long)(int)((uint)uVar2 * 2) % (ulong)(long)(int)(uint)uVar3;
  return auVar11;
}

/* ======================================================================
 * glFrontFace  (Ghidra `glFrontFace` @ 0055dfe0)
 * Signature: uint8_t glFrontFace(void)
 * Calls: (none)
 * Called by: (none)
 */
void glFrontFace(void)

{
                    /* WARNING: Could not recover jumptable at 0x0055dfe7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pglfn_glFrontFace)();
  return;
}

/* ======================================================================
 * glGetIntegerv  (Ghidra `glGetIntegerv` @ 0055dff0)
 * Signature: uint8_t glGetIntegerv(void)
 * Calls: (none)
 * Called by: (none)
 */
void glGetIntegerv(void)

{
                    /* WARNING: Could not recover jumptable at 0x0055dff7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pglfn_glGetIntegerv)();
  return;
}

/* ======================================================================
 * glGetString  (Ghidra `glGetString` @ 0055e000)
 * Signature: uint8_t glGetString(void)
 * Calls: (none)
 * Called by: (none)
 */
void glGetString(void)

{
                    /* WARNING: Could not recover jumptable at 0x0055e007. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pglfn_glGetString)();
  return;
}

/* ======================================================================
 * glGenTextures  (Ghidra `glGenTextures` @ 0055e010)
 * Signature: uint8_t glGenTextures(void)
 * Calls: (none)
 * Called by: `gfxCreateTexture`
 */
void glGenTextures(void)

{
                    /* WARNING: Could not recover jumptable at 0x0055e017. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pglfn_glGenTextures)();
  return;
}

/* ======================================================================
 * glPixelStorei  (Ghidra `glPixelStorei` @ 0055e020)
 * Signature: uint8_t glPixelStorei(void)
 * Calls: (none)
 * Called by: (none)
 */
void glPixelStorei(void)

{
                    /* WARNING: Could not recover jumptable at 0x0055e027. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pglfn_glPixelStorei)();
  return;
}

/* ======================================================================
 * glPolygonMode  (Ghidra `glPolygonMode` @ 0055e030)
 * Signature: uint8_t glPolygonMode(void)
 * Calls: (none)
 * Called by: (none)
 */
void glPolygonMode(void)

{
                    /* WARNING: Could not recover jumptable at 0x0055e037. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pglfn_glPolygonMode)();
  return;
}

/* ======================================================================
 * glScissor  (Ghidra `glScissor` @ 0055e040)
 * Signature: uint8_t glScissor(void)
 * Calls: (none)
 * Called by: (none)
 */
void glScissor(void)

{
                    /* WARNING: Could not recover jumptable at 0x0055e047. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pglfn_glScissor)();
  return;
}

/* ======================================================================
 * glStencilFunc  (Ghidra `glStencilFunc` @ 0055e050)
 * Signature: uint8_t glStencilFunc(void)
 * Calls: (none)
 * Called by: (none)
 */
void glStencilFunc(void)

{
                    /* WARNING: Could not recover jumptable at 0x0055e057. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pglfn_glStencilFunc)();
  return;
}

/* ======================================================================
 * glStencilMask  (Ghidra `glStencilMask` @ 0055e060)
 * Signature: uint8_t glStencilMask(void)
 * Calls: (none)
 * Called by: (none)
 */
void glStencilMask(void)

{
                    /* WARNING: Could not recover jumptable at 0x0055e067. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pglfn_glStencilMask)();
  return;
}

/* ======================================================================
 * glStencilOp  (Ghidra `glStencilOp` @ 0055e070)
 * Signature: uint8_t glStencilOp(void)
 * Calls: (none)
 * Called by: (none)
 */
void glStencilOp(void)

{
                    /* WARNING: Could not recover jumptable at 0x0055e077. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pglfn_glStencilOp)();
  return;
}

/* ======================================================================
 * glTexEnvf  (Ghidra `glTexEnvf` @ 0055e080)
 * Signature: uint8_t glTexEnvf(void)
 * Calls: (none)
 * Called by: (none)
 */
void glTexEnvf(void)

{
                    /* WARNING: Could not recover jumptable at 0x0055e087. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pglfn_glTexEnvf)();
  return;
}

/* ======================================================================
 * glTexImage2D  (Ghidra `glTexImage2D` @ 0055e090)
 * Signature: uint8_t glTexImage2D(void)
 * Calls: (none)
 * Called by: `gfxCreateTexture`
 */
void glTexImage2D(void)

{
                    /* WARNING: Could not recover jumptable at 0x0055e097. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pglfn_glTexImage2D)();
  return;
}

/* ======================================================================
 * glTexParameteri  (Ghidra `glTexParameteri` @ 0055e0a0)
 * Signature: uint8_t glTexParameteri(void)
 * Calls: (none)
 * Called by: `gfxCreateTexture`
 */
void glTexParameteri(void)

{
                    /* WARNING: Could not recover jumptable at 0x0055e0a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pglfn_glTexParameteri)();
  return;
}

/* ======================================================================
 * glTexParameterf  (Ghidra `glTexParameterf` @ 0055e0b0)
 * Signature: uint8_t glTexParameterf(void)
 * Calls: (none)
 * Called by: (none)
 */
void glTexParameterf(void)

{
                    /* WARNING: Could not recover jumptable at 0x0055e0b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pglfn_glTexParameterf)();
  return;
}

/* ======================================================================
 * glTexSubImage2D  (Ghidra `glTexSubImage2D` @ 0055e0c0)
 * Signature: uint8_t glTexSubImage2D(void)
 * Calls: (none)
 * Called by: (none)
 */
void glTexSubImage2D(void)

{
                    /* WARNING: Could not recover jumptable at 0x0055e0c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pglfn_glTexSubImage2D)();
  return;
}

/* ======================================================================
 * glViewport  (Ghidra `glViewport` @ 0055e0d0)
 * Signature: uint8_t glViewport(void)
 * Calls: (none)
 * Called by: (none)
 */
void glViewport(void)

{
                    /* WARNING: Could not recover jumptable at 0x0055e0d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pglfn_glViewport)();
  return;
}

/* ======================================================================
 * glGenRenderbuffersEXT  (Ghidra `glGenRenderbuffersEXT` @ 0055e170)
 * Signature: uint8_t glGenRenderbuffersEXT(void)
 * Calls: (none)
 * Called by: (none)
 */
void glGenRenderbuffersEXT(void)

{
                    /* WARNING: Could not recover jumptable at 0x0055e177. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pglfn_glGenRenderbuffersEXT)();
  return;
}

/* ======================================================================
 * glRenderbufferStorageEXT  (Ghidra `glRenderbufferStorageEXT` @ 0055e180)
 * Signature: uint8_t glRenderbufferStorageEXT(void)
 * Calls: (none)
 * Called by: (none)
 */
void glRenderbufferStorageEXT(void)

{
                    /* WARNING: Could not recover jumptable at 0x0055e187. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pglfn_glRenderbufferStorageEXT)();
  return;
}

/* ======================================================================
 * glGenFramebuffersEXT  (Ghidra `glGenFramebuffersEXT` @ 0055e1b0)
 * Signature: uint8_t glGenFramebuffersEXT(void)
 * Calls: (none)
 * Called by: `gfxCreateTexture`
 */
void glGenFramebuffersEXT(void)

{
                    /* WARNING: Could not recover jumptable at 0x0055e1b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pglfn_glGenFramebuffersEXT)();
  return;
}

/* ======================================================================
 * longest_match  (Ghidra `longest_match` @ 00562c40)
 * Signature: uint8_t longest_match(void)
 * Calls: (none)
 * Called by: `deflate_fast`, `deflate_slow`
 */
uint longest_match(long arg1,uint arg2)

{
  char *pcVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  char *pcVar11;
  char *pcVar12;
  char local_3a;
  char local_39;
  
  uVar8 = *(uint *)(arg1 + 0x9c);
  uVar10 = 0;
  lVar3 = *(long *)(arg1 + 0x50);
  uVar5 = *(uint *)(arg1 + 0xa8);
  pcVar11 = (char *)(lVar3 + (ulong)uVar8);
  if (*(int *)(arg1 + 0x44) - 0x106U < uVar8) {
    uVar10 = (uVar8 + 0x106) - *(int *)(arg1 + 0x44);
  }
  uVar2 = *(uint *)(arg1 + 0xa4);
  pcVar1 = (char *)(lVar3 + 0x102 + (ulong)uVar8);
  local_39 = pcVar11[(long)(int)uVar5 + -1];
  local_3a = pcVar11[(int)uVar5];
  uVar8 = *(uint *)(arg1 + 0xac);
  if (*(uint *)(arg1 + 0xbc) <= uVar5) {
    uVar8 = *(uint *)(arg1 + 0xac) >> 2;
  }
  uVar4 = *(uint *)(arg1 + 0xc0);
  if (uVar2 < *(uint *)(arg1 + 0xc0)) {
    uVar4 = uVar2;
  }
  do {
    pcVar6 = (char *)((ulong)arg2 + lVar3);
    if ((((pcVar6[(int)uVar5] == local_3a) && (pcVar6[(long)(int)uVar5 + -1] == local_39)) &&
        (*pcVar6 == *pcVar11)) && (pcVar6[1] == pcVar11[1])) {
      pcVar11 = pcVar11 + 2;
      pcVar7 = pcVar6 + 2;
      while (((((pcVar12 = pcVar11 + 1, pcVar11[1] == pcVar7[1] &&
                (pcVar12 = pcVar11 + 2, pcVar11[2] == pcVar7[2])) &&
               ((pcVar12 = pcVar11 + 3, pcVar11[3] == pcVar7[3] &&
                ((pcVar12 = pcVar11 + 4, pcVar11[4] == pcVar7[4] &&
                 (pcVar12 = pcVar11 + 5, pcVar11[5] == pcVar7[5])))))) &&
              (pcVar12 = pcVar11 + 6, pcVar11[6] == pcVar7[6])) &&
             (pcVar12 = pcVar11 + 7, pcVar11[7] == pcVar7[7]))) {
        pcVar7 = pcVar7 + 8;
        pcVar11 = pcVar11 + 8;
        pcVar12 = pcVar11;
        if ((*pcVar11 != *pcVar7) || (pcVar1 <= pcVar11)) break;
      }
      uVar9 = 0x102 - ((int)pcVar1 - (int)pcVar12);
      pcVar11 = pcVar1 + -0x102;
      local_3a = pcVar6[(int)uVar5];
      local_39 = pcVar6[(long)(int)uVar5 + -1];
      if ((int)uVar5 < (int)uVar9) {
        *(uint *)(arg1 + 0xa0) = arg2;
        if ((int)uVar4 <= (int)uVar9) {
LAB_00562e40:
          if (uVar2 < uVar9) {
            uVar9 = uVar2;
          }
          return uVar9;
        }
        local_39 = pcVar1[(long)(int)uVar9 + -0x103];
        local_3a = pcVar1[(long)(int)uVar9 + -0x102];
        uVar5 = uVar9;
      }
    }
    arg2 = (uint)*(ushort *)
                     (*(long *)(arg1 + 0x60) + (ulong)(arg2 & *(uint *)(arg1 + 0x4c)) * 2);
    uVar9 = uVar5;
    if ((arg2 <= uVar10) || (uVar8 = uVar8 - 1, uVar8 == 0)) goto LAB_00562e40;
  } while( true );
}

/* ======================================================================
 * longest_match_fast  (Ghidra `longest_match_fast` @ 00562e60)
 * Signature: uint8_t longest_match_fast(void)
 * Calls: (none)
 * Called by: `deflate_fast`, `deflate_slow`
 */
uint longest_match_fast(long arg1,uint arg2)

{
  char *pcVar1;
  long lVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  
  lVar2 = *(long *)(arg1 + 0x50);
  pcVar4 = (char *)((ulong)arg2 + lVar2);
  pcVar7 = (char *)(lVar2 + (ulong)*(uint *)(arg1 + 0x9c));
  pcVar1 = (char *)(lVar2 + 0x102 + (ulong)*(uint *)(arg1 + 0x9c));
  if ((*pcVar4 == *pcVar7) && (pcVar4[1] == pcVar7[1])) {
    pcVar4 = pcVar4 + 2;
    pcVar7 = pcVar7 + 2;
    while (((((pcVar6 = pcVar7 + 1, pcVar7[1] == pcVar4[1] &&
              (pcVar6 = pcVar7 + 2, pcVar7[2] == pcVar4[2])) &&
             (pcVar6 = pcVar7 + 3, pcVar7[3] == pcVar4[3])) &&
            ((pcVar6 = pcVar7 + 4, pcVar7[4] == pcVar4[4] &&
             (pcVar6 = pcVar7 + 5, pcVar7[5] == pcVar4[5])))) &&
           ((pcVar6 = pcVar7 + 6, pcVar7[6] == pcVar4[6] &&
            (pcVar6 = pcVar7 + 7, pcVar7[7] == pcVar4[7]))))) {
      pcVar4 = pcVar4 + 8;
      pcVar6 = pcVar7 + 8;
      if ((*pcVar6 != *pcVar4) || (pcVar7 = pcVar6, pcVar1 <= pcVar6)) break;
    }
    uVar5 = ((int)pcVar6 - (int)pcVar1) + 0x102;
    if (2 < (int)uVar5) {
      *(uint *)(arg1 + 0xa0) = arg2;
      uVar3 = *(uint *)(arg1 + 0xa4);
      if (uVar5 <= *(uint *)(arg1 + 0xa4)) {
        uVar3 = uVar5;
      }
      return uVar3;
    }
  }
  return 2;
}

/* ======================================================================
 * iptRegisterJoystick  (Ghidra `iptRegisterJoystick` @ 005704a0)
 * Signature: uint8_t iptRegisterJoystick(void)
 * Calls: (none)
 * Called by: `Joystick__Joystick`
 */
void iptRegisterJoystick(uint *arg1,uint64_t arg2)

{
  int iVar1;
  long lVar2;
  
  if (pJoysticks._16_8_ == 0) {
    iVar1 = 0;
  }
  else if (pJoysticks._48_8_ == 0) {
    iVar1 = 1;
  }
  else if (pJoysticks._80_8_ == 0) {
    iVar1 = 2;
  }
  else {
    iVar1 = 3;
    if (pJoysticks._112_8_ != 0) {
      Error__ThrowFatalError("Could not find an unregistered Joystick");
      return;
    }
  }
  lVar2 = (long)iVar1 * 0x20;
  *(uint64_t *)(pJoysticks + lVar2 + 0x10) = arg2;
  *(uint **)(pJoysticks + lVar2 + 0x18) = arg1;
  *arg1 = (uint)(*(long *)(pJoysticks + lVar2 + 8) != 0);
  return;
}

/* ======================================================================
 * iptUnRegisterJoystick  (Ghidra `iptUnRegisterJoystick` @ 00570520)
 * Signature: uint8_t iptUnRegisterJoystick(void)
 * Calls: (none)
 * Called by: `Joystick__Joystick__0058b340`
 */
void iptUnRegisterJoystick(uint64_t arg1,long arg2)

{
  int iVar1;
  
  if (pJoysticks._16_8_ == arg2) {
    iVar1 = 0;
  }
  else if (pJoysticks._48_8_ == arg2) {
    iVar1 = 1;
  }
  else if (pJoysticks._80_8_ == arg2) {
    iVar1 = 2;
  }
  else {
    iVar1 = 3;
    if (pJoysticks._112_8_ != arg2) {
      Error__ThrowFatalError("Could not find the joystick registered to the data supplied");
      return;
    }
  }
  *(uint64_t *)(pJoysticks + (long)iVar1 * 0x20 + 0x10) = 0;
  return;
}

/* ======================================================================
 * iptRegisterMouse  (Ghidra `iptRegisterMouse` @ 00570580)
 * Signature: uint8_t iptRegisterMouse(void)
 * Calls: (none)
 * Called by: `TMouse__TMouse`
 */
void iptRegisterMouse(uint64_t *arg1)

{
  ulong uVar1;
  int iVar2;
  uint uVar3;
  uint64_t *puVar5;
  bool bVar6;
  ulong uVar4;
  
  uVar4 = 0x38;
  iVar2 = 0x38;
  bVar6 = ((ulong)arg1 & 1) != 0;
  puVar5 = arg1;
  if (bVar6) {
    *(uint8_t *)arg1 = 0;
    uVar4 = 0x37;
    iVar2 = 0x37;
    puVar5 = (uint64_t *)((long)arg1 + 1);
  }
  if (((ulong)puVar5 & 2) == 0) {
    uVar3 = (uint)uVar4;
  }
  else {
    *(uint16_t *)puVar5 = 0;
    puVar5 = (uint64_t *)((long)puVar5 + 2);
    uVar3 = iVar2 - 2;
    uVar4 = (ulong)uVar3;
  }
  if (((ulong)puVar5 & 4) != 0) {
    *(uint32_t *)puVar5 = 0;
    uVar4 = (ulong)(uVar3 - 4);
    puVar5 = (uint64_t *)((long)puVar5 + 4);
  }
  for (uVar1 = uVar4 >> 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  if ((uVar4 & 4) != 0) {
    *(uint32_t *)puVar5 = 0;
    puVar5 = (uint64_t *)((long)puVar5 + 4);
  }
  if ((uVar4 & 2) != 0) {
    *(uint16_t *)puVar5 = 0;
    puVar5 = (uint64_t *)((long)puVar5 + 2);
  }
  if (bVar6) {
    *(uint8_t *)puVar5 = 0;
  }
  mouse = arg1;
  return;
}

/* ======================================================================
 * iptUnRegisterMouse  (Ghidra `iptUnRegisterMouse` @ 00570620)
 * Signature: uint8_t iptUnRegisterMouse(void)
 * Calls: (none)
 * Called by: `TMouse__TMouse__005959d0`
 */
void iptUnRegisterMouse(void)

{
  mouse = 0;
  return;
}

/* ======================================================================
 * iptRegisterKeyboard  (Ghidra `iptRegisterKeyboard` @ 00570630)
 * Signature: uint8_t iptRegisterKeyboard(void)
 * Calls: (none)
 * Called by: `TKeyboard__TKeyboard`
 */
void iptRegisterKeyboard(uint64_t *arg1)

{
  ulong uVar1;
  int iVar2;
  uint uVar3;
  uint64_t *puVar5;
  bool bVar6;
  ulong uVar4;
  
  uVar4 = 0xc10;
  iVar2 = 0xc10;
  bVar6 = ((ulong)arg1 & 1) != 0;
  puVar5 = arg1;
  if (bVar6) {
    *(uint8_t *)arg1 = 0;
    uVar4 = 0xc0f;
    iVar2 = 0xc0f;
    puVar5 = (uint64_t *)((long)arg1 + 1);
  }
  if (((ulong)puVar5 & 2) == 0) {
    uVar3 = (uint)uVar4;
  }
  else {
    *(uint16_t *)puVar5 = 0;
    puVar5 = (uint64_t *)((long)puVar5 + 2);
    uVar3 = iVar2 - 2;
    uVar4 = (ulong)uVar3;
  }
  if (((ulong)puVar5 & 4) != 0) {
    *(uint32_t *)puVar5 = 0;
    uVar4 = (ulong)(uVar3 - 4);
    puVar5 = (uint64_t *)((long)puVar5 + 4);
  }
  for (uVar1 = uVar4 >> 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  if ((uVar4 & 4) != 0) {
    *(uint32_t *)puVar5 = 0;
    puVar5 = (uint64_t *)((long)puVar5 + 4);
  }
  if ((uVar4 & 2) != 0) {
    *(uint16_t *)puVar5 = 0;
    puVar5 = (uint64_t *)((long)puVar5 + 2);
  }
  if (bVar6) {
    *(uint8_t *)puVar5 = 0;
  }
  keyboard = arg1;
  return;
}

/* ======================================================================
 * iptUnRegisterKeyboard  (Ghidra `iptUnRegisterKeyboard` @ 005706d0)
 * Signature: uint8_t iptUnRegisterKeyboard(void)
 * Calls: (none)
 * Called by: `TKeyboard__TKeyboard__0058c000`
 */
void iptUnRegisterKeyboard(void)

{
  keyboard = 0;
  return;
}

/* ======================================================================
 * iptCreateDevices  (Ghidra `iptCreateDevices` @ 005706e0)
 * Signature: uint8_t iptCreateDevices(void)
 * Calls: `Joystick__Joystick`, `SDL_GameControllerName`, `SDL_GameControllerOpen`, `SDL_Init`, `SDL_IsGameController`, `SDL_NumJoysticks`, `SDL_WasInit`
 * Called by: `TInput__TInput__0058adc0`
 */
void iptCreateDevices(void)

{
  int iVar1;
  int iVar2;
  long lVar3;
  uint64_t *puVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = SDL_WasInit(0x2000);
  if ((iVar1 == 0) && (iVar1 = SDL_Init(0x2000), iVar1 == -1)) {
    return;
  }
  iVar1 = SDL_NumJoysticks();
  if (0 < iVar1) {
    iVar5 = 0;
    iVar6 = 0;
    do {
      iVar2 = SDL_IsGameController(iVar5);
      if (iVar2 != 0) {
        lVar3 = SDL_GameControllerOpen(iVar5);
        *(long *)(pJoysticks + (long)iVar6 * 0x20 + 8) = lVar3;
        if (lVar3 != 0) {
          iVar6 = iVar6 + 1;
          SDL_GameControllerName(lVar3);
          if (3 < iVar6) break;
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 != iVar1);
  }
  puVar4 = operator_new__(0xc28);
  *puVar4 = 4;
                    /* try { // try from 0057077b to 0057077f has its CatchHandler @ 005707be */
  Joystick__Joystick((Joystick *)(puVar4 + 1));
                    /* try { // try from 00570787 to 0057078b has its CatchHandler @ 00570824 */
  Joystick__Joystick((Joystick *)(puVar4 + 0x62));
                    /* try { // try from 00570793 to 00570797 has its CatchHandler @ 0057081d */
  Joystick__Joystick((Joystick *)(puVar4 + 0xc3));
                    /* try { // try from 0057079f to 005707a3 has its CatchHandler @ 00570819 */
  Joystick__Joystick((Joystick *)(puVar4 + 0x124));
  pGameJoysticks = (Joystick *)(puVar4 + 1);
  MAX_GAME_JOYSTICKS = 4;
  return;
}

/* ======================================================================
 * iptDestroyDevices  (Ghidra `iptDestroyDevices` @ 00570830)
 * Signature: uint8_t iptDestroyDevices(void)
 * Calls: `Joystick__Joystick__0058b340`, `SDL_GameControllerClose`, `SDL_QuitSubSystem`
 * Called by: `TInput__TInput`
 */
void iptDestroyDevices(void)

{
  Joystick *this;
  
  if (pJoysticks._8_8_ != 0) {
    SDL_GameControllerClose();
  }
  if (pJoysticks._40_8_ != 0) {
    SDL_GameControllerClose();
  }
  if (pJoysticks._72_8_ != 0) {
    SDL_GameControllerClose();
  }
  if (pJoysticks._104_8_ != 0) {
    SDL_GameControllerClose();
  }
  if (pGameJoysticks != (Joystick *)0x0) {
    this = pGameJoysticks + *(long *)(pGameJoysticks + -8) * 0x308;
    if (pGameJoysticks != this) {
      do {
        this = this + -0x308;
        Joystick__Joystick__0058b340(this);
      } while (pGameJoysticks != this);
    }
    operator_delete__(pGameJoysticks + -8);
  }
  SDL_QuitSubSystem(0x2000);
  return;
}

/* ======================================================================
 * iptUpdateDevices  (Ghidra `iptUpdateDevices` @ 00571220)
 * Signature: uint8_t iptUpdateDevices(void)
 * Calls: `ConvertSDLJoystickStateToJoyState`, `SDL_GameControllerClose`, `SDL_GameControllerGetAttached`, `SDL_GameControllerUpdate`, `UpdateKeyboard`, `UpdateMouse`
 * Called by: `TInput__Update`
 */
void iptUpdateDevices(void)

{
  int iVar1;
  
  uMasterInputFrameCounter = uMasterInputFrameCounter + 1;
  SDL_GameControllerUpdate();
  if (pJoysticks._8_8_ != 0) {
    iVar1 = SDL_GameControllerGetAttached();
    if (iVar1 == 0) {
      SDL_GameControllerClose(pJoysticks._8_8_);
      pJoysticks._8_8_ = 0;
    }
    else {
      ConvertSDLJoystickStateToJoyState((tagSDLJoystick *)pJoysticks);
    }
  }
  if (pJoysticks._40_8_ != 0) {
    iVar1 = SDL_GameControllerGetAttached();
    if (iVar1 == 0) {
      SDL_GameControllerClose(pJoysticks._40_8_);
      pJoysticks._40_8_ = 0;
    }
    else {
      ConvertSDLJoystickStateToJoyState((tagSDLJoystick *)(pJoysticks + 0x20));
    }
  }
  if (pJoysticks._72_8_ != 0) {
    iVar1 = SDL_GameControllerGetAttached();
    if (iVar1 == 0) {
      SDL_GameControllerClose(pJoysticks._72_8_);
      pJoysticks._72_8_ = 0;
    }
    else {
      ConvertSDLJoystickStateToJoyState((tagSDLJoystick *)(pJoysticks + 0x40));
    }
  }
  if (pJoysticks._104_8_ != 0) {
    iVar1 = SDL_GameControllerGetAttached();
    if (iVar1 != 0) {
      ConvertSDLJoystickStateToJoyState((tagSDLJoystick *)(pJoysticks + 0x60));
      UpdateMouse();
      UpdateKeyboard();
      return;
    }
    SDL_GameControllerClose(pJoysticks._104_8_);
    pJoysticks._104_8_ = 0;
  }
  UpdateMouse();
  UpdateKeyboard();
  return;
}

/* ======================================================================
 * operator_delete__0057c2e0  (Ghidra `operator.delete` @ 0057c2e0)
 * Signature: void __stdcall operator.delete(void * arg1, int arg2)
 * Calls: `BaseResource__operator_delete`
 * Called by: (none)
 */
/* BaseResource__operator delete(void*, int) */

void BaseResource__operator_delete(void *arg1,int arg2)

{
  (*(code *)PTR_free_00815b18)();
  return;
}

/* ======================================================================
 * operator_eq  (Ghidra `operator==` @ 00581f30)
 * Signature: bool operator==(string * arg1, char * arg2)
 * Calls: `std__string_string__00825640`
 * Called by: (none)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* bool std__TEMPNAMEPLACEHOLDERVALUE(std__string_string__00825640 const&, char const*) [clone .constprop.20] */

bool std__operator_eq(string *arg1,char *arg2)

{
  int iVar1;
  
  iVar1 = std__string_compare((char *)arg1);
  return iVar1 == 0;
}

/* ======================================================================
 * imdct_step3_iter0_loop  (Ghidra `imdct_step3_iter0_loop` @ 005a7a70)
 * Signature: uint8_t __stdcall imdct_step3_iter0_loop(int arg1, float * arg2, int arg3, int arg4, float * arg5)
 * Calls: (none)
 * Called by: `vorbis_decode_packet_rest`
 */
/* imdct_step3_iter0_loop(int, float*, int, int, float*) */

void imdct_step3_iter0_loop(int arg1,float *arg2,int arg3,int arg4,float *arg5)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  
  if (0 < arg1 >> 2) {
    pfVar5 = arg2 + arg3;
    pfVar4 = pfVar5 + arg4;
    pfVar3 = arg5 + (ulong)((arg1 >> 2) - 1) * 0x20 + 0x20;
    do {
      fVar6 = *pfVar5 - *pfVar4;
      fVar7 = pfVar5[-1] - pfVar4[-1];
      *pfVar5 = *pfVar5 + *pfVar4;
      pfVar5[-1] = pfVar5[-1] + pfVar4[-1];
      *pfVar4 = *arg5 * fVar6 - arg5[1] * fVar7;
      pfVar4[-1] = fVar6 * arg5[1] + fVar7 * *arg5;
      fVar6 = pfVar5[-2] - pfVar4[-2];
      fVar7 = pfVar5[-3] - pfVar4[-3];
      pfVar5[-2] = pfVar5[-2] + pfVar4[-2];
      pfVar5[-3] = pfVar5[-3] + pfVar4[-3];
      pfVar4[-2] = arg5[8] * fVar6 - arg5[9] * fVar7;
      pfVar4[-3] = fVar6 * arg5[9] + fVar7 * arg5[8];
      fVar6 = pfVar5[-4] - pfVar4[-4];
      fVar7 = pfVar5[-5] - pfVar4[-5];
      pfVar5[-4] = pfVar5[-4] + pfVar4[-4];
      pfVar5[-5] = pfVar5[-5] + pfVar4[-5];
      pfVar4[-4] = arg5[0x10] * fVar6 - arg5[0x11] * fVar7;
      pfVar4[-5] = fVar6 * arg5[0x11] + fVar7 * arg5[0x10];
      fVar6 = pfVar5[-6] - pfVar4[-6];
      fVar7 = pfVar5[-7] - pfVar4[-7];
      pfVar5[-6] = pfVar5[-6] + pfVar4[-6];
      pfVar5[-7] = pfVar5[-7] + pfVar4[-7];
      pfVar5 = pfVar5 + -8;
      pfVar4[-6] = arg5[0x18] * fVar6 - arg5[0x19] * fVar7;
      pfVar1 = arg5 + 0x19;
      pfVar2 = arg5 + 0x18;
      arg5 = arg5 + 0x20;
      pfVar4[-7] = fVar6 * *pfVar1 + fVar7 * *pfVar2;
      pfVar4 = pfVar4 + -8;
    } while (pfVar3 != arg5);
  }
  return;
}

/* ======================================================================
 * imdct_step3_inner_r_loop  (Ghidra `imdct_step3_inner_r_loop` @ 005a7c40)
 * Signature: uint8_t __stdcall imdct_step3_inner_r_loop(int arg1, float * arg2, int arg3, int arg4, float * arg5, int arg6)
 * Calls: (none)
 * Called by: `vorbis_decode_packet_rest`
 */
/* imdct_step3_inner_r_loop(int, float*, int, int, float*, int) */

void imdct_step3_inner_r_loop
               (int arg1,float *arg2,int arg3,int arg4,float *arg5,int arg6)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  long lVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  
  if (0 < arg1 >> 2) {
    lVar5 = (long)arg6;
    pfVar4 = arg2 + arg3;
    pfVar3 = pfVar4 + arg4;
    pfVar6 = pfVar4 + (ulong)((arg1 >> 2) - 1) * -8 + -8;
    do {
      fVar7 = *pfVar4 - *pfVar3;
      fVar8 = pfVar4[-1] - pfVar3[-1];
      *pfVar4 = *pfVar4 + *pfVar3;
      pfVar4[-1] = pfVar4[-1] + pfVar3[-1];
      *pfVar3 = *arg5 * fVar7 - arg5[1] * fVar8;
      pfVar3[-1] = fVar7 * arg5[1] + fVar8 * *arg5;
      fVar7 = pfVar4[-2] - pfVar3[-2];
      fVar8 = pfVar4[-3] - pfVar3[-3];
      pfVar4[-2] = pfVar4[-2] + pfVar3[-2];
      pfVar4[-3] = pfVar4[-3] + pfVar3[-3];
      pfVar3[-2] = arg5[lVar5] * fVar7 - arg5[lVar5 + 1] * fVar8;
      pfVar3[-3] = fVar7 * arg5[lVar5 + 1] + fVar8 * arg5[lVar5];
      fVar7 = pfVar4[-4] - pfVar3[-4];
      fVar8 = pfVar4[-5] - pfVar3[-5];
      pfVar4[-4] = pfVar4[-4] + pfVar3[-4];
      pfVar4[-5] = pfVar4[-5] + pfVar3[-5];
      pfVar3[-4] = arg5[lVar5 * 2] * fVar7 - arg5[lVar5 * 2 + 1] * fVar8;
      pfVar3[-5] = fVar7 * arg5[lVar5 * 2 + 1] + fVar8 * arg5[lVar5 * 2];
      fVar7 = pfVar4[-6] - pfVar3[-6];
      fVar8 = pfVar4[-7] - pfVar3[-7];
      pfVar4[-6] = pfVar4[-6] + pfVar3[-6];
      pfVar4[-7] = pfVar4[-7] + pfVar3[-7];
      pfVar4 = pfVar4 + -8;
      pfVar3[-6] = arg5[lVar5 * 3] * fVar7 - arg5[lVar5 * 3 + 1] * fVar8;
      pfVar2 = arg5 + lVar5 * 3 + 1;
      pfVar1 = arg5 + lVar5 * 3;
      arg5 = arg5 + lVar5 * 4;
      pfVar3[-7] = fVar7 * *pfVar2 + fVar8 * *pfVar1;
      pfVar3 = pfVar3 + -8;
    } while (pfVar4 != pfVar6);
  }
  return;
}

/* ======================================================================
 * is_whole_packet_present  (Ghidra `is_whole_packet_present` @ 005a8810)
 * Signature: uint8_t __stdcall is_whole_packet_present(stb_vorbis * arg1, int arg2)
 * Calls: `memcmp`
 * Called by: `start_decoder`, `stb_vorbis_decode_frame_pushdata`
 */
/* is_whole_packet_present(stb_vorbis*, int) */

uint64_t is_whole_packet_present(stb_vorbis *arg1,int arg2)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  void *pvVar6;
  void *__s1;
  void *pvVar7;
  
  iVar5 = *(int *)(arg1 + 0x6e0);
  __s1 = *(void **)(arg1 + 0x28);
  if (iVar5 == -1) {
    pvVar7 = *(void **)(arg1 + 0x38);
    bVar4 = true;
  }
  else {
    iVar3 = *(int *)(arg1 + 0x5d8);
    if (iVar5 < iVar3) {
      do {
        __s1 = (void *)((long)__s1 + (ulong)(byte)arg1[(long)iVar5 + 0x5dc]);
        if (arg1[(long)iVar5 + 0x5dc] != (stb_vorbis)0xff) break;
        iVar5 = iVar5 + 1;
      } while (iVar5 != iVar3);
    }
    if ((arg2 != 0) && (iVar5 < iVar3 + -1)) goto LAB_005a8870;
    pvVar7 = *(void **)(arg1 + 0x38);
    if (iVar5 == iVar3) {
      iVar5 = -1;
    }
    if (pvVar7 < __s1) goto LAB_005a8990;
    if (iVar5 != -1) {
      return 1;
    }
    bVar4 = false;
  }
  if (pvVar7 <= (void *)((long)__s1 + 0x1aU)) {
LAB_005a8990:
    *(uint32_t *)(arg1 + 0x94) = 1;
    return 0;
  }
  while ((iVar5 = memcmp(__s1,ogg_page_header,4), iVar5 == 0 && (*(char *)((long)__s1 + 4) == '\0'))
        ) {
    if (bVar4) {
      if ((*(int *)(arg1 + 0x4f0) != 0) && ((*(byte *)((long)__s1 + 5) & 1) != 0)) break;
    }
    else if ((*(byte *)((long)__s1 + 5) & 1) == 0) break;
    bVar2 = *(byte *)((long)__s1 + 0x1a);
    pvVar6 = (void *)((long)__s1 + (long)(int)(uint)bVar2 + 0x1b);
    if (pvVar7 < pvVar6) goto LAB_005a8990;
    if ((bVar2 == 0) ||
       (pvVar6 = (void *)((long)pvVar6 + (ulong)*(byte *)((long)__s1 + 0x1b)),
       *(byte *)((long)__s1 + 0x1b) != 0xff)) {
      iVar5 = 0;
    }
    else {
      iVar5 = 0;
      do {
        iVar5 = iVar5 + 1;
        if ((int)(uint)bVar2 <= iVar5) break;
        pbVar1 = (byte *)((long)__s1 + 0x1c);
        __s1 = (void *)((long)__s1 + 1);
        pvVar6 = (void *)((long)pvVar6 + (ulong)*pbVar1);
      } while (*pbVar1 == 0xff);
    }
    if ((arg2 != 0) && (iVar5 < (int)(bVar2 - 1))) break;
    if (*(int *)(arg1 + 0x5d8) == iVar5) {
      iVar5 = -1;
    }
    if (pvVar7 < pvVar6) goto LAB_005a8990;
    if (iVar5 != -1) {
      return 1;
    }
    if (pvVar7 <= (void *)((long)pvVar6 + 0x1aU)) goto LAB_005a8990;
    bVar4 = false;
    __s1 = pvVar6;
  }
LAB_005a8870:
  *(uint32_t *)(arg1 + 0x94) = 0x15;
  return 0;
}

/* ======================================================================
 * ilog  (Ghidra `ilog` @ 005a89e0)
 * Signature: uint8_t __stdcall ilog(int arg1)
 * Calls: (none)
 * Called by: `init_blocksize`, `start_decoder`, `vorbis_analyze_page`, `vorbis_decode_initial`, `vorbis_decode_packet_rest`
 */
/* ilog(int) */

int ilog(int arg1)

{
  int iVar1;
  
  if (0x3fff < (uint)arg1) {
    if (0xffffff < (uint)arg1) {
      if (0x1fffffff < (uint)arg1) {
        iVar1 = 0;
        if (-1 < arg1) {
          iVar1 = (char)ilog(int)::log2_4[arg1 >> 0x1e] + 0x1e;
        }
        return iVar1;
      }
      return (char)ilog(int)::log2_4[arg1 >> 0x19] + 0x19;
    }
    if ((uint)arg1 < 0x80000) {
      return (char)ilog(int)::log2_4[arg1 >> 0xf] + 0xf;
    }
    return (char)ilog(int)::log2_4[arg1 >> 0x14] + 0x14;
  }
  if ((uint)arg1 < 0x10) {
    return (int)(char)ilog(int)::log2_4[arg1];
  }
  if ((uint)arg1 < 0x200) {
    return (char)ilog(int)::log2_4[arg1 >> 5] + 5;
  }
  return (char)ilog(int)::log2_4[arg1 >> 10] + 10;
}

/* ======================================================================
 * next_segment  (Ghidra `next_segment` @ 005aa390)
 * Signature: uint8_t __stdcall next_segment(stb_vorbis * arg1)
 * Calls: `start_page`
 * Called by: `codebook_decode_deinterleave_repeat`, `codebook_decode_scalar_raw`, `codebook_decode_start`, `get8_packet_raw`, `get_bits`, `start_decoder`, `stb_vorbis_decode_frame_pushdata`, `vorbis_decode_initial`, `vorbis_decode_packet_rest`, `vorbis_seek_frame_from_page`
 */
/* next_segment(stb_vorbis*) */

stb_vorbis next_segment(stb_vorbis *arg1)

{
  stb_vorbis sVar1;
  int iVar2;
  
  if (*(int *)(arg1 + 0x6e4) != 0) {
    return (stb_vorbis)0x0;
  }
  iVar2 = *(int *)(arg1 + 0x6e0);
  if (iVar2 == -1) {
    *(int *)(arg1 + 0x6e8) = *(int *)(arg1 + 0x5d8) + -1;
    iVar2 = start_page(arg1);
    if (iVar2 == 0) {
      *(uint32_t *)(arg1 + 0x6e4) = 1;
      return (stb_vorbis)0x0;
    }
    if (((byte)arg1[0x6db] & 1) == 0) {
      *(uint32_t *)(arg1 + 0x94) = 0x20;
      return (stb_vorbis)0x0;
    }
    iVar2 = *(int *)(arg1 + 0x6e0);
  }
  sVar1 = arg1[(long)iVar2 + 0x5dc];
  *(int *)(arg1 + 0x6e0) = iVar2 + 1;
  if (sVar1 != (stb_vorbis)0xff) {
    *(uint32_t *)(arg1 + 0x6e4) = 1;
    *(int *)(arg1 + 0x6e8) = iVar2;
  }
  if (*(int *)(arg1 + 0x5d8) <= iVar2 + 1) {
    *(uint32_t *)(arg1 + 0x6e0) = 0xffffffff;
  }
  arg1[0x6dc] = sVar1;
  return sVar1;
}

/* ======================================================================
 * maybe_start_packet  (Ghidra `maybe_start_packet` @ 005aad90)
 * Signature: uint8_t __stdcall maybe_start_packet(stb_vorbis * arg1)
 * Calls: `fgetc`, `get8`, `start_page`, `start_page_no_capturepattern`
 * Called by: `vorbis_decode_initial`, `vorbis_seek_frame_from_page`
 */
/* maybe_start_packet(stb_vorbis*) */

uint64_t maybe_start_packet(stb_vorbis *arg1)

{
  char *pcVar1;
  byte *pbVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  
  if (*(int *)(arg1 + 0x6e0) != -1) goto LAB_005aad9d;
  pcVar1 = *(char **)(arg1 + 0x28);
  if (pcVar1 == (char *)0x0) {
    iVar4 = fgetc(*(FILE **)(arg1 + 0x18));
    if (iVar4 == -1) {
      *(uint32_t *)(arg1 + 0x90) = 1;
      return 0;
    }
    cVar3 = (char)iVar4;
    iVar4 = *(int *)(arg1 + 0x90);
  }
  else {
    if (*(char **)(arg1 + 0x38) <= pcVar1) {
      *(uint32_t *)(arg1 + 0x90) = 1;
      return 0;
    }
    cVar3 = *pcVar1;
    *(char **)(arg1 + 0x28) = pcVar1 + 1;
    iVar4 = *(int *)(arg1 + 0x90);
  }
  if (iVar4 != 0) {
    return 0;
  }
  if (cVar3 != 'O') {
    *(uint32_t *)(arg1 + 0x94) = 0x1e;
    return 0;
  }
  pcVar1 = *(char **)(arg1 + 0x28);
  if (pcVar1 == (char *)0x0) {
    iVar4 = fgetc(*(FILE **)(arg1 + 0x18));
    cVar3 = (char)iVar4;
    if (iVar4 != -1) goto LAB_005aae42;
  }
  else if (pcVar1 < *(char **)(arg1 + 0x38)) {
    cVar3 = *pcVar1;
    *(char **)(arg1 + 0x28) = pcVar1 + 1;
LAB_005aae42:
    if (cVar3 != 'g') goto LAB_005aae47;
    pbVar2 = *(byte **)(arg1 + 0x28);
    if (pbVar2 == (byte *)0x0) {
      uVar5 = fgetc(*(FILE **)(arg1 + 0x18));
      if (uVar5 != 0xffffffff) goto LAB_005aaea3;
    }
    else if (pbVar2 < *(byte **)(arg1 + 0x38)) {
      uVar5 = (uint)*pbVar2;
      *(byte **)(arg1 + 0x28) = pbVar2 + 1;
LAB_005aaea3:
      if (((char)uVar5 == 'g') && (cVar3 = get8(arg1), cVar3 == 'S')) {
        cVar3 = get8(arg1);
        if (cVar3 != '\0') {
          *(uint32_t *)(arg1 + 0x94) = 0x1f;
          return 0;
        }
        iVar4 = start_page_no_capturepattern(arg1);
        if (iVar4 == 0) {
          return 0;
        }
        if (((byte)arg1[0x6db] & 1) != 0) {
          *(uint32_t *)(arg1 + 0x6e4) = 0;
          arg1[0x6dc] = (stb_vorbis)0x0;
          *(uint32_t *)(arg1 + 0x94) = 0x20;
          return 0;
        }
        while (*(int *)(arg1 + 0x6e0) == -1) {
          iVar4 = start_page(arg1);
          if (iVar4 == 0) {
            return 0;
          }
          if (((byte)arg1[0x6db] & 1) != 0) {
            *(uint32_t *)(arg1 + 0x94) = 0x20;
            return 0;
          }
        }
LAB_005aad9d:
        *(uint32_t *)(arg1 + 0x6e4) = 0;
        *(uint32_t *)(arg1 + 0x6f0) = 0;
        *(uint32_t *)(arg1 + 0x6f4) = 0;
        arg1[0x6dc] = (stb_vorbis)0x0;
        return 1;
      }
      goto LAB_005aae47;
    }
  }
  *(uint32_t *)(arg1 + 0x90) = 1;
LAB_005aae47:
  *(uint32_t *)(arg1 + 0x94) = 0x1e;
  return 0;
}

/* ======================================================================
 * inverse_mdct_slow  (Ghidra `inverse_mdct_slow` @ 005afc20)
 * Signature: uint8_t __stdcall inverse_mdct_slow(float * arg1, int arg2, stb_vorbis * arg3, int arg4)
 * Calls: `dct_iv_slow`, `memcpy`
 * Called by: (none)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* inverse_mdct_slow(float*, int, stb_vorbis*, int) */

void inverse_mdct_slow(float *arg1,int arg2,stb_vorbis *arg3,int arg4)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  float *pfVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  uint *puVar21;
  uint uVar22;
  uint uVar23;
  ulong uVar24;
  uint auStack_4038 [4];
  float fStack_4028;
  uint uStack_4024;
  uint64_t uStack_4020;
  
  uVar17 = arg2 >> 2;
  iVar18 = arg2 - uVar17;
  auStack_4038[2] = 0x5afc56;
  auStack_4038[3] = 0;
  memcpy(&fStack_4028,arg1,(long)(arg2 >> 1) << 2);
  auStack_4038[2] = 0x5afc61;
  auStack_4038[3] = 0;
  dct_iv_slow(&fStack_4028,arg2 >> 1);
  if ((int)uVar17 < 1) {
    uVar17 = 0;
  }
  else {
    uVar9 = -(((int)&fStack_4028 + uVar17 * 4 & 0xf) >> 2) & 3;
    uVar19 = uVar17;
    if (uVar9 <= uVar17) {
      uVar19 = uVar9;
    }
    uVar24 = (ulong)uVar19;
    if (uVar19 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = 0;
      pfVar11 = arg1;
      do {
        iVar13 = uVar17 + uVar9;
        uVar9 = uVar9 + 1;
        *pfVar11 = (&fStack_4028)[iVar13];
        pfVar11 = pfVar11 + 1;
      } while (uVar9 < uVar19);
      if (uVar17 == uVar19) goto LAB_005afd26;
    }
    uVar22 = uVar17 - uVar19 >> 2;
    if (uVar22 != 0) {
      lVar15 = 0;
      uVar12 = 0;
      do {
        puVar1 = (uint64_t *)((long)&fStack_4028 + lVar15 + ((long)(int)uVar17 + uVar24) * 4);
        uVar2 = puVar1[1];
        uVar12 = uVar12 + 1;
        *(uint64_t *)((long)arg1 + lVar15 + uVar24 * 4) = *puVar1;
        *(uint64_t *)((long)arg1 + lVar15 + uVar24 * 4 + 8) = uVar2;
        lVar15 = lVar15 + 0x10;
      } while (uVar12 < uVar22);
      uVar9 = uVar9 + uVar22 * 4;
      if (uVar17 - uVar19 == uVar22 * 4) goto LAB_005afd26;
    }
    pfVar11 = arg1 + (int)uVar9;
    do {
      iVar13 = uVar9 + uVar17;
      uVar9 = uVar9 + 1;
      *pfVar11 = (&fStack_4028)[iVar13];
      pfVar11 = pfVar11 + 1;
    } while ((int)uVar9 < (int)uVar17);
  }
LAB_005afd26:
  uVar19 = DAT_005be6f0 /* R:u32=2147483648 */;
  if (iVar18 <= (int)uVar17) goto LAB_005afe43;
  iVar13 = iVar18 - uVar17;
  lVar15 = (long)iVar13;
  uVar9 = iVar18 + 1 + ~uVar17;
  uVar22 = ((int)auStack_4038 + iVar13 * 4 & 0xfU) >> 2;
  if (uVar9 <= uVar22) {
    uVar22 = uVar9;
  }
  uVar12 = uVar17;
  if (uVar22 == 0) {
LAB_005afda1:
    uVar20 = _UNK_005de38c;
    uVar8 = _UNK_005de388;
    uVar7 = _UNK_005de384;
    uVar19 = _DAT_005de380 /* R:u32=2147483648 */;
    uVar23 = uVar9 - uVar22 >> 2;
    if (uVar23 != 0) {
      uVar14 = 0;
      puVar21 = auStack_4038 + (lVar15 - (ulong)uVar22);
      pfVar11 = arg1 + (long)(int)uVar17 + (ulong)uVar22;
      do {
        uVar3 = *puVar21;
        uVar4 = puVar21[1];
        puVar5 = puVar21 + 2;
        puVar6 = puVar21 + 3;
        uVar14 = uVar14 + 1;
        puVar21 = puVar21 + -4;
        *(ulong *)pfVar11 = CONCAT44(*puVar5 ^ uVar7,*puVar6 ^ uVar19);
        *(ulong *)(pfVar11 + 2) = CONCAT44(uVar3 ^ uVar20,uVar4 ^ uVar8);
        pfVar11 = pfVar11 + 4;
      } while (uVar14 < uVar23);
      uVar12 = uVar12 + uVar23 * 4;
      if (uVar9 - uVar22 == uVar23 * 4) goto LAB_005afe3d;
    }
    uVar19 = DAT_005be6f0 /* R:u32=2147483648 */;
    iVar13 = iVar18 - uVar12;
    pfVar11 = arg1 + (int)uVar12;
    do {
      iVar13 = iVar13 + -1;
      uVar12 = uVar12 + 1;
      *pfVar11 = (float)((uint)(&fStack_4028)[iVar13] ^ uVar19);
      pfVar11 = pfVar11 + 1;
    } while ((int)uVar12 < iVar18);
  }
  else {
    lVar16 = 0;
    do {
      iVar13 = iVar13 + -1;
      uVar12 = uVar12 + 1;
      arg1[(int)uVar17 + lVar16] = (float)((uint)(&fStack_4028)[iVar13] ^ uVar19);
      lVar16 = lVar16 + 1;
    } while ((uint)lVar16 < uVar22);
    if (uVar9 != uVar22) goto LAB_005afda1;
  }
LAB_005afe3d:
  uVar17 = uVar17 + 1 + ~uVar17 + iVar18;
LAB_005afe43:
  uVar19 = DAT_005be6f0 /* R:u32=2147483648 */;
  if ((int)uVar17 < arg2) {
    lVar15 = (long)(int)uVar17;
    uVar12 = arg2 - uVar17;
    uVar22 = -(((int)&fStack_4028 + (int)(lVar15 - iVar18) * 4 & 0xfU) >> 2) & 3;
    uVar9 = uVar12;
    if (uVar22 <= uVar12) {
      uVar9 = uVar22;
    }
    if (uVar9 != 0) {
      lVar16 = 0;
      uVar22 = uVar17;
      do {
        uVar17 = uVar22 + 1;
        arg1[lVar15 + lVar16] = (float)((uint)(&fStack_4028)[(int)(uVar22 - iVar18)] ^ uVar19);
        lVar16 = lVar16 + 1;
        uVar22 = uVar17;
      } while ((uint)lVar16 < uVar9);
      if (uVar12 == uVar9) {
        return;
      }
    }
    uVar8 = _UNK_005de38c;
    uVar7 = _UNK_005de388;
    uVar22 = _UNK_005de384;
    uVar19 = _DAT_005de380 /* R:u32=2147483648 */;
    uVar20 = uVar12 - uVar9 >> 2;
    if (uVar20 != 0) {
      uVar23 = 0;
      lVar16 = (ulong)uVar9 * 4 + lVar15 * 4;
      lVar10 = 0;
      do {
        puVar21 = (uint *)((long)&fStack_4028 + lVar10 + ((lVar15 - iVar18) + (ulong)uVar9) * 4);
        uVar14 = puVar21[2];
        uVar3 = puVar21[3];
        uVar23 = uVar23 + 1;
        *(ulong *)((long)arg1 + lVar10 + lVar16) =
             CONCAT44(puVar21[1] ^ uVar22,*puVar21 ^ uVar19);
        *(ulong *)((long)arg1 + lVar10 + lVar16 + 8) = CONCAT44(uVar3 ^ uVar8,uVar14 ^ uVar7);
        lVar10 = lVar10 + 0x10;
      } while (uVar23 < uVar20);
      uVar17 = uVar17 + uVar20 * 4;
      if (uVar12 - uVar9 == uVar20 * 4) {
        return;
      }
    }
    uVar19 = DAT_005be6f0 /* R:u32=2147483648 */;
    pfVar11 = arg1 + (int)uVar17;
    do {
      uVar9 = uVar17 + 1;
      *pfVar11 = (float)((uint)(&fStack_4028)[(int)(uVar17 - iVar18)] ^ uVar19);
      pfVar11 = pfVar11 + 1;
      uVar17 = uVar9;
    } while ((int)uVar9 < arg2);
  }
  return;
}

/* ======================================================================
 * locateOneElement  (Ghidra `locateOneElement` @ 005b7400)
 * Signature: uint8_t __stdcall locateOneElement(char * arg1)
 * Calls: `closedir`, `opendir`, `readdir`, `strcasecmp`, `strcpy`, `strrchr`
 * Called by: `FixFileCase`
 */
/* locateOneElement(char*) [clone .part.1] */

uint64_t locateOneElement(char *arg1)

{
  int iVar1;
  char *pcVar2;
  DIR *__dirp;
  dirent *pdVar3;
  
  pcVar2 = strrchr(arg1,0x2f);
  if (pcVar2 == (char *)0x0) {
    __dirp = opendir(".");
  }
  else {
    *pcVar2 = '\0';
    __dirp = opendir(arg1);
    *pcVar2 = '/';
    arg1 = pcVar2 + 1;
  }
  do {
    pdVar3 = readdir(__dirp);
    if (pdVar3 == (dirent *)0x0) {
      closedir(__dirp);
      return 0;
    }
    iVar1 = strcasecmp(pdVar3->d_name,arg1);
  } while (iVar1 != 0);
  strcpy(arg1,pdVar3->d_name);
  closedir(__dirp);
  return 1;
}
