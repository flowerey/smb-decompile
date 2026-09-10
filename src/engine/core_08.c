/* src/engine/core_08.c — 78 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "core_08.h"

/* ======================================================================
 * ftell  (Ghidra `ftell` @ 00450f80)
 * Signature: long ftell(FILE * __stream)
 * Calls: (none)
 * Called by: `GSMBChapterData__ReloadData`, `ftell__00825000`, `gz_open`, `start_decoder`, `stb_vorbis_decode_filename`, `stb_vorbis_get_file_offset`, `stb_vorbis_open_file`, `stb_vorbis_open_file_section`, `stb_vorbis_open_file_section_constprop_33`, `stb_vorbis_open_filename` (+3 more)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long ftell(FILE *__stream)

{
  long lVar1;

  lVar1 = (*(code *)PTR_ftell_00815640)();
  return lVar1;
}

/* ======================================================================
 * fseek  (Ghidra `fseek` @ 00451830)
 * Signature: int fseek(FILE * __stream, long __off, int __whence)
 * Calls: (none)
 * Called by: `GSMBChapterData__ReloadData`, `fseek__00825450`, `gzrewind`, `gzseek`, `gztell`, `start_decoder`, `stb_vorbis_decode_filename`, `stb_vorbis_open_file`, `stb_vorbis_open_filename`, `stb_vorbis_seek_start` (+5 more)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fseek(FILE *__stream, long __off, int __whence)

{
  int iVar1;

  iVar1 = (*(code *)PTR_fseek_00815a98)();
  return iVar1;
}

/* ======================================================================
 * free  (Ghidra `free` @ 00451930)
 * Signature: void free(void * __ptr)
 * Calls: (none)
 * Called by: `ActionAnimations__ActionAnimations`, `Add`, `AddAnimationCallback`, `AddCachedCue`, `AddEditorButton`, `AddEditorLayerTween`, `Add__004df390`, `Add__00501060`, `Add__00501440`, `AdjustSetPieceLayering` (+212 more)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00815b18)();
  return;
}

/* ======================================================================
 * getenv  (Ghidra `getenv` @ 00451980)
 * Signature: char * getenv(char * __name)
 * Calls: (none)
 * Called by: `System_GetLanguage`, `getenv__00825500`, `main`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char *getenv(char *__name)

{
  char *pcVar1;

  pcVar1 = (char *)(*(code *)PTR_getenv_00815b40)();
  return pcVar1;
}

/* ======================================================================
 * fputc  (Ghidra `fputc` @ 004519a0)
 * Signature: int fputc(int __c, FILE * __stream)
 * Calls: (none)
 * Called by: `DebugMsg`, `fputc__00825510`, `gzclose`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c, FILE *__stream)

{
  int iVar1;

  iVar1 = (*(code *)PTR_fputc_00815b50)();
  return iVar1;
}

/* ======================================================================
 * fprintf  (Ghidra `fprintf` @ 00451ac0)
 * Signature: int fprintf(FILE * __stream, char * __format, ...)
 * Calls: (none)
 * Called by: `OpenGLGraphics__OpenGLGraphics`, `TWindow__TWindow`, `ThrowFatalError`, `ThrowNonFatalError`, `fprintf__008255a0`, `gz_open`, `main`, `png_default_warning_isra_0`, `png_error`, `png_handle_cHRM` (+4 more)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream, char *__format, ...)

{
  int iVar1;

  iVar1 = (*(code *)PTR_fprintf_00815be0)();
  return iVar1;
}

/* ======================================================================
 * fread  (Ghidra `fread` @ 00451b60)
 * Signature: size_t fread(void * __ptr, size_t __size, size_t __n, FILE * __stream)
 * Calls: (none)
 * Called by: `CCRC32__FileCRC`, `CCRC32__FileCRC__005b9fc0`, `CreateOpenGLShader`, `GSMBChapterData__ReloadData`, `check_header`, `fread__008255f0`, `gfxCreatePixelShader`, `gfxCreateVertexShader`, `gzread_part_1`, `png_default_read_data` (+4 more)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr, size_t __size, size_t __n, FILE *__stream)

{
  size_t sVar1;

  sVar1 = (*(code *)PTR_fread_00815c30)();
  return sVar1;
}

/* ======================================================================
 * gettimeofday  (Ghidra `gettimeofday` @ 00451c90)
 * Signature: int gettimeofday(timeval * __tv, __timezone_ptr_t __tz)
 * Calls: (none)
 * Called by: `System_GetTimeInMS`, `gettimeofday__00825680`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int gettimeofday(timeval *__tv, __timezone_ptr_t __tz)

{
  int iVar1;

  iVar1 = (*(code *)PTR_gettimeofday_00815cc8)();
  return iVar1;
}

/* ======================================================================
 * fwrite  (Ghidra `fwrite` @ 00451e90)
 * Signature: size_t fwrite(void * __ptr, size_t __size, size_t __n, FILE * __s)
 * Calls: (none)
 * Called by: `CreateOpenGLShader`, `GSMBChapterData__ReloadData`, `SMBChapterDataSave`, `do_flush`, `fwrite__00825778`, `gfxCreatePixelShader`, `gfxCreateVertexShader`, `gzsetparams`, `gzwrite`, `main` (+1 more)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr, size_t __size, size_t __n, FILE *__s)

{
  size_t sVar1;

  sVar1 = (*(code *)PTR_fwrite_00815dc8)();
  return sVar1;
}

/* ======================================================================
 * free_sym_typeinfo_isra_13  (Ghidra `free_sym_typeinfo.isra.13` @ 0051ab10)
 * Signature: uint8_t free_sym_typeinfo.isra.13(void)
 * Calls: (none)
 * Called by: `free_symbols`
 */
void free_sym_typeinfo_isra_13(code *UNRECOVERED_JUMPTABLE, uint64_t arg2, uint *arg3, long *arg4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  uint64_t local_150;
  uint64_t local_130;
  uint32_t local_128;
  uint32_t local_124;
  uint64_t local_108;
  uint64_t local_f8;
  uint64_t local_e8;
  uint64_t local_d8;
  uint64_t local_c8;
  uint64_t local_b8;
  uint32_t local_b0;
  uint32_t local_ac;
  uint32_t local_a8;
  uint32_t local_a4;
  uint32_t local_a0;
  uint32_t local_9c;

  if (*arg3 != 0) {
    local_108 = 0;
    local_b0 = 0;
    do {
      (*UNRECOVERED_JUMPTABLE)(*(uint64_t *)(*arg4 + local_108), arg2);
      lVar1 = local_108 + *arg4;
      if (*(int *)(lVar1 + 0x1c) != 0) {
        local_f8 = 0;
        local_a8 = 0;
        do {
          (*UNRECOVERED_JUMPTABLE)(*(uint64_t *)(*(long *)(lVar1 + 0x20) + local_f8), arg2);
          lVar2 = local_f8 + *(long *)(lVar1 + 0x20);
          if (*(int *)(lVar2 + 0x1c) != 0) {
            local_e8 = 0;
            local_a4 = 0;
            do {
              (*UNRECOVERED_JUMPTABLE)(*(uint64_t *)(*(long *)(lVar2 + 0x20) + local_e8), arg2);
              lVar3 = local_e8 + *(long *)(lVar2 + 0x20);
              if (*(int *)(lVar3 + 0x1c) != 0) {
                local_d8 = 0;
                local_ac = 0;
                do {
                  (*UNRECOVERED_JUMPTABLE)(*(uint64_t *)(*(long *)(lVar3 + 0x20) + local_d8), arg2);
                  lVar4 = local_d8 + *(long *)(lVar3 + 0x20);
                  if (*(int *)(lVar4 + 0x1c) != 0) {
                    local_c8 = 0;
                    local_a0 = 0;
                    do {
                      (*UNRECOVERED_JUMPTABLE)(*(uint64_t *)(*(long *)(lVar4 + 0x20) + local_c8),
                                               arg2);
                      lVar5 = local_c8 + *(long *)(lVar4 + 0x20);
                      if (*(int *)(lVar5 + 0x1c) != 0) {
                        local_b8 = 0;
                        local_9c = 0;
                        do {
                          (*UNRECOVERED_JUMPTABLE)(
                              *(uint64_t *)(*(long *)(lVar5 + 0x20) + local_b8), arg2);
                          lVar6 = local_b8 + *(long *)(lVar5 + 0x20);
                          if (*(int *)(lVar6 + 0x1c) != 0) {
                            local_130 = 0;
                            local_124 = 0;
                            do {
                              (*UNRECOVERED_JUMPTABLE)(
                                  *(uint64_t *)(*(long *)(lVar6 + 0x20) + local_130), arg2);
                              lVar7 = local_130 + *(long *)(lVar6 + 0x20);
                              if (*(int *)(lVar7 + 0x1c) != 0) {
                                local_150 = 0;
                                local_128 = 0;
                                do {
                                  (*UNRECOVERED_JUMPTABLE)(
                                      *(uint64_t *)(*(long *)(lVar7 + 0x20) + local_150), arg2);
                                  lVar8 = local_150 + *(long *)(lVar7 + 0x20);
                                  if (*(int *)(lVar8 + 0x1c) != 0) {
                                    lVar10 = 0;
                                    uVar11 = 0;
                                    do {
                                      uVar11 = uVar11 + 1;
                                      (*UNRECOVERED_JUMPTABLE)(
                                          *(uint64_t *)(*(long *)(lVar8 + 0x20) + lVar10), arg2);
                                      lVar9 = lVar10 + *(long *)(lVar8 + 0x20);
                                      lVar10 = lVar10 + 0x28;
                                      free_sym_typeinfo_isra_13(UNRECOVERED_JUMPTABLE, arg2,
                                                                lVar9 + 0x1c, lVar9 + 0x20);
                                    } while (uVar11 < *(uint *)(lVar8 + 0x1c));
                                  }
                                  (*UNRECOVERED_JUMPTABLE)(*(uint64_t *)(lVar8 + 0x20), arg2);
                                  local_128 = local_128 + 1;
                                  local_150 = local_150 + 0x28;
                                } while (local_128 < *(uint *)(lVar7 + 0x1c));
                              }
                              (*UNRECOVERED_JUMPTABLE)(*(uint64_t *)(lVar7 + 0x20), arg2);
                              local_124 = local_124 + 1;
                              local_130 = local_130 + 0x28;
                            } while (local_124 < *(uint *)(lVar6 + 0x1c));
                          }
                          (*UNRECOVERED_JUMPTABLE)(*(uint64_t *)(lVar6 + 0x20), arg2);
                          local_9c = local_9c + 1;
                          local_b8 = local_b8 + 0x28;
                        } while (local_9c < *(uint *)(lVar5 + 0x1c));
                      }
                      (*UNRECOVERED_JUMPTABLE)(*(uint64_t *)(lVar5 + 0x20), arg2);
                      local_a0 = local_a0 + 1;
                      local_c8 = local_c8 + 0x28;
                    } while (local_a0 < *(uint *)(lVar4 + 0x1c));
                  }
                  (*UNRECOVERED_JUMPTABLE)(*(uint64_t *)(lVar4 + 0x20), arg2);
                  local_ac = local_ac + 1;
                  local_d8 = local_d8 + 0x28;
                } while (local_ac < *(uint *)(lVar3 + 0x1c));
              }
              (*UNRECOVERED_JUMPTABLE)(*(uint64_t *)(lVar3 + 0x20), arg2);
              local_a4 = local_a4 + 1;
              local_e8 = local_e8 + 0x28;
            } while (local_a4 < *(uint *)(lVar2 + 0x1c));
          }
          (*UNRECOVERED_JUMPTABLE)(*(uint64_t *)(lVar2 + 0x20), arg2);
          local_a8 = local_a8 + 1;
          local_f8 = local_f8 + 0x28;
        } while (local_a8 < *(uint *)(lVar1 + 0x1c));
      }
      (*UNRECOVERED_JUMPTABLE)(*(uint64_t *)(lVar1 + 0x20), arg2);
      local_b0 = local_b0 + 1;
      local_108 = local_108 + 0x28;
    } while (local_b0 < *arg3);
  }
  /* WARNING: Could not recover jumptable at 0x0051b0b8. Too many branches */
  /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*arg4, arg2);
  return;
}

/* ======================================================================
 * free_symbols  (Ghidra `free_symbols` @ 0051b0c0)
 * Signature: uint8_t free_symbols(void)
 * Calls: `free_sym_typeinfo_isra_13`
 * Called by: `MOJOSHADER_freeParseData`, `destroy_context`
 */
void free_symbols(code *UNRECOVERED_JUMPTABLE, uint64_t arg2, uint64_t *arg3, int arg4)

{
  long lVar1;
  long lVar2;
  uint64_t *puVar3;
  uint uVar4;
  int iVar5;

  if (0 < arg4) {
    iVar5 = 0;
    puVar3 = arg3;
    do {
      (*UNRECOVERED_JUMPTABLE)(*puVar3, arg2);
      if (*(int *)((long)puVar3 + 0x2c) != 0) {
        lVar2 = 0;
        uVar4 = 0;
        do {
          uVar4 = uVar4 + 1;
          (*UNRECOVERED_JUMPTABLE)(*(uint64_t *)(puVar3[6] + lVar2), arg2);
          lVar1 = puVar3[6] + lVar2;
          lVar2 = lVar2 + 0x28;
          free_sym_typeinfo_isra_13(UNRECOVERED_JUMPTABLE, arg2, lVar1 + 0x1c, lVar1 + 0x20);
        } while (uVar4 < *(uint *)((long)puVar3 + 0x2c));
      }
      iVar5 = iVar5 + 1;
      (*UNRECOVERED_JUMPTABLE)(puVar3[6], arg2);
      puVar3 = puVar3 + 7;
    } while (iVar5 != arg4);
  }
  /* WARNING: Could not recover jumptable at 0x0051b178. Too many branches */
  /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(arg3, arg2);
  return;
}

/* ======================================================================
 * free_define  (Ghidra `free_define` @ 005390e0)
 * Signature: uint8_t free_define(void)
 * Calls: (none)
 * Called by: `handle_pp_identifier`, `handle_pp_undef`, `preprocessor_end`, `preprocessor_nexttoken`
 */
void free_define(long arg1, uint64_t *arg2)

{
  uint64_t *puVar1;
  int iVar2;
  long lVar3;

  if (arg2 != (uint64_t *)0x0) {
    if (0 < *(int *)(arg2 + 4)) {
      lVar3 = 0;
      iVar2 = 0;
      do {
        iVar2 = iVar2 + 1;
        puVar1 = (uint64_t *)(arg2[3] + lVar3);
        lVar3 = lVar3 + 8;
        (**(code **)(arg1 + 0x968))(*puVar1, *(uint64_t *)(arg1 + 0x970));
      } while (iVar2 < *(int *)(arg2 + 4));
    }
    (**(code **)(arg1 + 0x968))(arg2[3], *(uint64_t *)(arg1 + 0x970));
    (**(code **)(arg1 + 0x968))(*arg2, *(uint64_t *)(arg1 + 0x970));
    (**(code **)(arg1 + 0x968))(arg2[1], *(uint64_t *)(arg1 + 0x970));
    (**(code **)(arg1 + 0x968))(arg2[2], *(uint64_t *)(arg1 + 0x970));
    arg2[5] = *(uint64_t *)(arg1 + 0x930);
    *(uint64_t **)(arg1 + 0x930) = arg2;
  }
  return;
}

/* ======================================================================
 * gfxLockIndexBuffer  (Ghidra `gfxLockIndexBuffer` @ 0055cec0)
 * Signature: uint8_t __stdcall gfxLockIndexBuffer(tagGLVertexBuffer * arg1, void * * arg2, uint arg3, ulong arg4)
 * Calls: (none)
 * Called by: `IndexBuffer__Lock`
 */
void gfxLockIndexBuffer(tagGLVertexBuffer *arg1, void **arg2, uint arg3, ulong arg4)

{
  void *pvVar1;

  if (*(int *)(arg1 + 4) == 0) {
    (*pglfn_glBindBufferARB)(*(uint32_t *)arg1, *(uint32_t *)(arg1 + 8));
    if ((arg3 & 1) == 0) {
      if ((arg3 & 2) != 0) {
        pvVar1 = (void *)(*pglfn_glMapBufferARB)(*(uint32_t *)arg1, 0x88ba);
        *arg2 = pvVar1;
      }
    } else {
      (*pglfn_glBufferDataARB)(*(uint32_t *)arg1, *(uint32_t *)(arg1 + 0x18), 0, 0x88e4);
      pvVar1 = (void *)(*pglfn_glMapBufferARB)(*(uint32_t *)arg1, 0x88b9);
      *arg2 = pvVar1;
    }
  } else {
    *arg2 = *(void **)(arg1 + 0x10);
  }
  return;
}

/* ======================================================================
 * gfxUnLockIndexBuffer  (Ghidra `gfxUnLockIndexBuffer` @ 0055ced0)
 * Signature: uint8_t __stdcall gfxUnLockIndexBuffer(tagGLVertexBuffer * arg1)
 * Calls: (none)
 * Called by: `IndexBuffer__Unlock`
 */
void gfxUnLockIndexBuffer(tagGLVertexBuffer *arg1)

{
  if (*(int *)(arg1 + 4) != 0) {
    return;
  }
  /* WARNING: Could not recover jumptable at 0x0055e489. Too many branches */
  /* WARNING: Treating indirect jump as call */
  (*pglfn_glUnmapBufferARB)(*(uint32_t *)arg1);
  return;
}

/* ======================================================================
 * gfxCreateIndexBuffer  (Ghidra `gfxCreateIndexBuffer` @ 0055cee0)
 * Signature: uint8_t gfxCreateIndexBuffer(void)
 * Calls: `glBindBufferARB`, `glBufferDataARB`, `glGenBuffersARB`, `operator_new`
 * Called by: `Create__0058a5b0`
 */
uint32_t *gfxCreateIndexBuffer(uint64_t *arg1)

{
  uint32_t *puVar1;

  if (arg1 == (uint64_t *)0x0) {
    Error__ThrowFatalError("Attempt to Create a GLVertexBuffer with NULL parameters");
  }
  puVar1 = operator_new(0x20);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *(uint64_t *)(puVar1 + 4) = 0;
  *puVar1 = 0x8893;
  puVar1[6] = (int)*arg1;
  puVar1[7] = (uint)(*(short *)(arg1 + 1) == 4) * 2 + 0x1403;
  glGenBuffersARB(1, puVar1 + 2);
  glBindBufferARB(*puVar1, puVar1[2]);
  glBufferDataARB(*puVar1, *arg1, arg1[2], 0x88e4);
  return puVar1;
}

/* ======================================================================
 * gfxDestroyIndexBuffer  (Ghidra `gfxDestroyIndexBuffer` @ 0055cf80)
 * Signature: uint8_t gfxDestroyIndexBuffer(void)
 * Calls: `OpenGLDestroyVertexBuffer`
 * Called by: `IndexBuffer__IndexBuffer__0058a520`, `IndexBuffer__IndexBuffer__0058a550`
 */
void gfxDestroyIndexBuffer(uint64_t *arg1)

{
  OpenGLDestroyVertexBuffer((tagGLVertexBuffer *)*arg1);
  *arg1 = 0;
  return;
}

/* ======================================================================
 * gfxReallocIndexBuffer  (Ghidra `gfxReallocIndexBuffer` @ 0055cfa0)
 * Signature: uint8_t gfxReallocIndexBuffer(void)
 * Calls: `OpenGLDestroyVertexBuffer`, `glBindBufferARB`, `glBufferDataARB`, `glGenBuffersARB`, `operator_new`
 * Called by: (none)
 */
void gfxReallocIndexBuffer(uint64_t *arg1, uint64_t *arg2)

{
  uint32_t *puVar1;

  OpenGLDestroyVertexBuffer((tagGLVertexBuffer *)*arg1);
  *arg1 = 0;
  if (arg2 == (uint64_t *)0x0) {
    Error__ThrowFatalError("Attempt to Create a GLVertexBuffer with NULL parameters");
  }
  puVar1 = operator_new(0x20);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *(uint64_t *)(puVar1 + 4) = 0;
  *puVar1 = 0x8893;
  puVar1[6] = (int)*arg2;
  puVar1[7] = (uint)(*(short *)(arg2 + 1) == 4) * 2 + 0x1403;
  glGenBuffersARB(1, puVar1 + 2);
  glBindBufferARB(*puVar1, puVar1[2]);
  glBufferDataARB(*puVar1, *arg2, arg2[2], 0x88e4);
  *arg1 = puVar1;
  return;
}

/* ======================================================================
 * gfxCreateTexture  (Ghidra `gfxCreateTexture` @ 0055d110)
 * Signature: uint8_t gfxCreateTexture(void)
 * Calls: `File__File`, `File__File__005b7a70`, `File__Read`, `File__Reset`, `PngIoRead`, `free`, `glBindFramebufferEXT`, `glBindTexture`, `glFramebufferTexture2DEXT`, `glGenFramebuffersEXT` (+20 more)
 * Called by: `Create__005a0a60`
 */
void gfxCreateTexture(uint64_t *arg1)

{
  uint8_t uVar1;
  uint32_t uVar2;
  int iVar3;
  uint uVar4;
  void *__ptr;
  void *__ptr_00;
  uint32_t *puVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  uint64_t uVar10;
  uint8_t *puVar11;
  ulong uVar12;
  int iVar13;
  int iVar14;
  uint64_t in_stack_fffffffffffffea8;
  uint32_t uVar15;
  uint64_t in_stack_fffffffffffffeb0;
  uint32_t uVar16;
  uint64_t local_128;
  uint8_t *local_120;
  uint32_t local_118;
  uint64_t local_110;
  uint32_t local_108;
  uint32_t local_104;
  uint32_t local_100;
  uint32_t local_fc;
  uint32_t local_f8;
  uint32_t local_f4;
  uint8_t *local_f0;
  File local_e8[48];
  uint8_t local_b8[16];
  uint8_t local_a8[16];
  uint64_t local_98;
  uint64_t local_90;
  byte local_88;
  byte local_87;
  byte local_86;
  byte local_85;
  byte local_84;
  uint32_t local_78[4];
  uint32_t local_68[4];
  int local_58[4];
  uint local_48[6];

  uVar15 = (uint32_t)((ulong)in_stack_fffffffffffffea8 >> 0x20);
  uVar16 = (uint32_t)((ulong)in_stack_fffffffffffffeb0 >> 0x20);
  local_78[0] = 0;
  local_68[0] = 0;
  if ((char *)*arg1 == (char *)0x0) {
    if ((*(uint *)((long)arg1 + 0x24) & 0x20) == 0) {
      if ((*(uint *)((long)arg1 + 0x24) & 0x40) == 0) {
        glGenTextures(1, local_78);
        glBindTexture(0xde1, local_78[0]);
        lVar6 = (long)*(int *)(arg1 + 4);
        glTexImage2D(0xde1, 0, *(uint32_t *)(GLInternalTextureFormats + lVar6 * 4),
                     *(uint32_t *)((long)arg1 + 0x14), *(uint32_t *)(arg1 + 3), 0,
                     CONCAT44(uVar15, *(uint32_t *)(GLTextureFormats + lVar6 * 4)),
                     CONCAT44(uVar16, *(uint32_t *)(GLTextureFormatTypes + lVar6 * 4)), arg1[1]);
        glTexParameteri(0xde1, 0x2802, 0x2901);
        glTexParameteri(0xde1, 0x2803, 0x2901);
        glTexParameteri(0xde1, 0x2800, 0x2601);
        glTexParameteri(0xde1, 0x2801, 0x2601);
        if ((*(byte *)((long)arg1 + 0x24) & 0x10) != 0) {
          uVar15 = *(uint32_t *)(GLGraphics + 0x10);
          glGenFramebuffersEXT(1, local_68);
          glBindFramebufferEXT(0x8d40, local_68[0]);
          glFramebufferTexture2DEXT(0x8d40, 0x8ce0, 0xde1, local_78[0], 0);
          glBindFramebufferEXT(0x8d40, uVar15);
        }
        glBindTexture(0xde1, 0);
      } else {
        uVar2 = *(uint32_t *)(GLGraphics + 0x10);
        glGenTextures(1, local_78);
        glBindTexture(0xde1, local_78[0]);
        lVar6 = (long)*(int *)(arg1 + 4);
        glTexImage2D(0xde1, 0, *(uint32_t *)(GLInternalTextureFormats + lVar6 * 4),
                     *(uint32_t *)((long)arg1 + 0x14), *(uint32_t *)(arg1 + 3), 0,
                     CONCAT44(uVar15, *(uint32_t *)(GLTextureFormats + lVar6 * 4)),
                     CONCAT44(uVar16, *(uint32_t *)(GLTextureFormatTypes + lVar6 * 4)), 0);
        glTexParameteri(0xde1, 0x2802, 0x2901);
        glTexParameteri(0xde1, 0x2803, 0x2901);
        glTexParameteri(0xde1, 0x2800, 0x2601);
        glTexParameteri(0xde1, 0x2801, 0x2601);
        glGenFramebuffersEXT(1, local_68);
        glBindFramebufferEXT(0x8d40, local_68[0]);
        glFramebufferTexture2DEXT(0x8d40, 0x8ce0, 0xde1, local_78[0], 0);
        glBindFramebufferEXT(0x8d40, uVar2);
        glBindTexture(0xde1, 0);
      }
      goto LAB_0055d4e4;
    }
    local_110 = arg1[1];
    local_128 = 0;
    local_120 = (uint8_t *)0x0;
    local_118 = 2;
    local_104 = 1;
    local_100 = 1;
    local_108 = *(uint32_t *)(arg1 + 2);
    local_fc = 0;
    local_f8 = 0;
    local_f4 = 0;
    local_f0 = &DAT_005c04cf /* R:7.374579797039071e-39f */;
  } else {
    local_128 = 0;
    local_120 = (uint8_t *)0x0;
    local_118 = 2;
    local_110 = 0;
    local_108 = 0;
    local_104 = 1;
    local_100 = 1;
    local_fc = 0;
    local_f8 = 0;
    local_f4 = 0;
    local_f0 = &DAT_005c04cf /* R:7.374579797039071e-39f */;
    File__Exists((char *)*arg1, 1);
    local_128 = *arg1;
    local_120 = &DAT_005c328c /* R:u32=1811964530 */;
    local_fc = 1;
  }
  File__File(local_e8, (tagFileCreation *)&local_128);
  /* try { // try from 0055d1e6 to 0055d4d1 has its CatchHandler @ 0055d91b */
  File__Read(local_e8, local_a8, 8);
  iVar3 = png_check_sig(local_a8, 8);
  if (iVar3 == 0) {
    File__Reset(local_e8);
    File__Read(local_e8, local_b8, 0xc);
    __ptr = (void *)0x0;
    iVar13 = 0x1908;
    iVar3 = memcmp(gfxCreateTexture__byUTGAHeader, local_b8, 0xc);
    if (iVar3 == 0) {
      File__Read(local_e8, &local_88, 6);
      iVar3 = (uint)local_88 + (uint)local_87 * 0x100;
      iVar14 = (uint)local_86 + (uint)local_85 * 0x100;
      iVar13 = (local_84 != 0x18) + 0x1907;
      uVar4 = iVar3 * iVar14 * (uint)(local_84 >> 3);
      __ptr = malloc((ulong)uVar4);
      File__Read(local_e8, __ptr, uVar4);
      if (uVar4 != 0) {
        uVar8 = 0;
        do {
          uVar9 = uVar8 + 2;
          uVar7 = (ulong)uVar8;
          uVar8 = uVar8 + (local_84 >> 3);
          puVar11 = (uint8_t *)((ulong)uVar9 + (long)__ptr);
          uVar1 = *(uint8_t *)(uVar7 + (long)__ptr);
          *(uint8_t *)(uVar7 + (long)__ptr) = *puVar11;
          *puVar11 = uVar1;
        } while (uVar8 < uVar4);
      }
      *(int *)(arg1 + 3) = iVar14;
      *(int *)((long)arg1 + 0x14) = iVar3;
    }
  } else {
    local_98 = png_create_read_struct("1.2.25", 0, 0, 0);
    local_90 = png_create_info_struct(local_98);
    png_create_info_struct(local_98);
    png_set_read_fn(local_98, local_e8, PngIoRead);
    png_set_sig_bytes(local_98, 8);
    png_read_info(local_98, local_90);
    local_58[0] = 0;
    local_48[0] = 0;
    uVar16 = 0;
    uVar15 = 0;
    png_get_IHDR(local_98, local_90, (long)arg1 + 0x14, arg1 + 3, local_58, local_48, 0, 0, 0);
    iVar13 = 0x1907;
    if ((local_48[0] != 2) && (iVar13 = 0x1908, local_48[0] != 6)) {
      iVar13 = 0x1908 - (uint)((local_48[0] & 4) == 0);
    }
    if (8 < local_58[0]) {
      png_set_strip_16(local_98);
    }
    if ((local_48[0] == 4) || (local_48[0] == 0)) {
      /* try { // try from 0055d5b0 to 0055d6bc has its CatchHandler @ 0055d91b */
      png_set_gray_to_rgb(local_98);
    }
    if (local_48[0] == 3) {
      png_set_palette_to_rgb(local_98);
    }
    png_read_update_info(local_98, local_90);
    iVar3 = png_get_rowbytes(local_98, local_90);
    uVar4 = *(uint *)(arg1 + 3);
    __ptr = malloc((ulong)(iVar3 * uVar4));
    __ptr_00 = malloc((ulong)uVar4 << 3);
    if (uVar4 != 0) {
      uVar8 = 0;
      uVar4 = 0;
      do {
        uVar12 = (ulong)uVar8;
        uVar7 = (ulong)uVar4;
        uVar8 = uVar8 + iVar3;
        uVar4 = uVar4 + 1;
        *(ulong *)((long)__ptr_00 + uVar7 * 8) = uVar12 + (long)__ptr;
      } while (uVar4 < *(uint *)(arg1 + 3));
    }
    png_read_image(local_98, __ptr_00);
    png_destroy_read_struct(&local_98, &local_90, 0);
    free(__ptr_00);
  }
  glGenTextures(1, local_78);
  glBindTexture(0xde1, local_78[0]);
  glTexParameteri(0xde1, 0x2802, 0x2901);
  glTexParameteri(0xde1, 0x2803, 0x2901);
  glTexParameteri(0xde1, 0x2800, 0x2601);
  glTexParameteri(0xde1, 0x2801, 0x2601);
  uVar10 = 0x8058;
  if (iVar13 != 0x1908) {
    uVar10 = 0x8051;
  }
  glTexImage2D(0xde1, 0, uVar10, *(uint32_t *)((long)arg1 + 0x14), *(uint32_t *)(arg1 + 3), 0,
               CONCAT44(uVar15, iVar13), CONCAT44(uVar16, 0x1401), __ptr);
  glBindTexture(0xde1, 0);
  free(__ptr);
  File__File__005b7a70(local_e8);
LAB_0055d4e4:
  *(uint64_t *)(Graphics + 1000) = 0;
  puVar5 = operator_new(0x10);
  puVar5[2] = local_78[0];
  puVar5[3] = local_68[0];
  *puVar5 = *(uint32_t *)((long)arg1 + 0x14);
  puVar5[1] = *(uint32_t *)(arg1 + 3);
  return;
}

/* ======================================================================
 * gfxDestroyTexture  (Ghidra `gfxDestroyTexture` @ 0055d930)
 * Signature: uint8_t gfxDestroyTexture(void)
 * Calls: `glDeleteFramebuffersEXT`, `glDeleteTextures`, `operator_delete`
 * Called by: `Texture__Texture`, `Texture__Texture__005a0720`
 */
void gfxDestroyTexture(uint64_t *arg1)

{
  void *pvVar1;

  pvVar1 = (void *)*arg1;
  if (pvVar1 != (void *)0x0) {
    glDeleteTextures(1, (long)pvVar1 + 8);
    glDeleteFramebuffersEXT(1, (long)pvVar1 + 0xc);
    operator_delete(pvVar1);
  }
  *arg1 = 0;
  return;
}

/* ======================================================================
 * gfxLockTexture  (Ghidra `gfxLockTexture` @ 0055d990)
 * Signature: uint8_t gfxLockTexture(void)
 * Calls: (none)
 * Called by: `Texture__Lock`
 */
void gfxLockTexture(void)

{
  return;
}

/* ======================================================================
 * gfxUnlockTexture  (Ghidra `gfxUnlockTexture` @ 0055d9a0)
 * Signature: uint8_t gfxUnlockTexture(void)
 * Calls: (none)
 * Called by: `Texture__Unlock`
 */
void gfxUnlockTexture(void)

{
  return;
}

/* ======================================================================
 * gfxLockVertexBuffer  (Ghidra `gfxLockVertexBuffer` @ 0055d9b0)
 * Signature: uint8_t __stdcall gfxLockVertexBuffer(tagGLVertexBuffer * arg1, void * * arg2, uint arg3, ulong arg4)
 * Calls: (none)
 * Called by: `VertexBuffer__Lock`
 */
void gfxLockVertexBuffer(tagGLVertexBuffer *arg1, void **arg2, uint arg3, ulong arg4)

{
  void *pvVar1;

  if (*(int *)(arg1 + 4) == 0) {
    (*pglfn_glBindBufferARB)(*(uint32_t *)arg1, *(uint32_t *)(arg1 + 8));
    if ((arg3 & 1) == 0) {
      if ((arg3 & 2) != 0) {
        pvVar1 = (void *)(*pglfn_glMapBufferARB)(*(uint32_t *)arg1, 0x88ba);
        *arg2 = pvVar1;
      }
    } else {
      (*pglfn_glBufferDataARB)(*(uint32_t *)arg1, *(uint32_t *)(arg1 + 0x18), 0, 0x88e4);
      pvVar1 = (void *)(*pglfn_glMapBufferARB)(*(uint32_t *)arg1, 0x88b9);
      *arg2 = pvVar1;
    }
  } else {
    *arg2 = *(void **)(arg1 + 0x10);
  }
  return;
}

/* ======================================================================
 * gfxUnLockVertexBuffer  (Ghidra `gfxUnLockVertexBuffer` @ 0055d9c0)
 * Signature: uint8_t __stdcall gfxUnLockVertexBuffer(tagGLVertexBuffer * arg1)
 * Calls: (none)
 * Called by: `VertexBuffer__Unlock`
 */
void gfxUnLockVertexBuffer(tagGLVertexBuffer *arg1)

{
  if (*(int *)(arg1 + 4) != 0) {
    return;
  }
  /* WARNING: Could not recover jumptable at 0x0055e489. Too many branches */
  /* WARNING: Treating indirect jump as call */
  (*pglfn_glUnmapBufferARB)(*(uint32_t *)arg1);
  return;
}

/* ======================================================================
 * gfxCreateVertexBuffer  (Ghidra `gfxCreateVertexBuffer` @ 0055d9d0)
 * Signature: uint8_t gfxCreateVertexBuffer(void)
 * Calls: `glBindBufferARB`, `glBufferDataARB`, `glGenBuffersARB`, `operator_new`
 * Called by: `Create__005a63e0`, `gfxReallocVertexBuffer`
 */
uint32_t *gfxCreateVertexBuffer(ulong *arg1)

{
  uint32_t *puVar1;
  void *pvVar2;

  if (arg1 == (ulong *)0x0) {
    Error__ThrowFatalError("Attempt to Create a GLVertexBuffer with NULL parameters");
  }
  puVar1 = operator_new(0x20);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *(uint64_t *)(puVar1 + 4) = 0;
  *puVar1 = 0x8892;
  puVar1[1] = (int)arg1[3];
  puVar1[6] = (int)*arg1;
  if ((int)arg1[3] != 0) {
    pvVar2 = operator_new__(*arg1);
    *(void **)(puVar1 + 4) = pvVar2;
    return puVar1;
  }
  glGenBuffersARB(1, puVar1 + 2);
  glBindBufferARB(*puVar1, puVar1[2]);
  glBufferDataARB(*puVar1, *arg1, arg1[2], 0x88e4);
  return puVar1;
}

/* ======================================================================
 * gfxDestroyVertexBuffer  (Ghidra `gfxDestroyVertexBuffer` @ 0055da90)
 * Signature: uint8_t gfxDestroyVertexBuffer(void)
 * Calls: `OpenGLDestroyVertexBuffer`
 * Called by: `VertexBuffer__VertexBuffer`, `VertexBuffer__VertexBuffer__005a6360`
 */
void gfxDestroyVertexBuffer(uint64_t *arg1)

{
  OpenGLDestroyVertexBuffer((tagGLVertexBuffer *)*arg1);
  *arg1 = 0;
  return;
}

/* ======================================================================
 * gfxReallocVertexBuffer  (Ghidra `gfxReallocVertexBuffer` @ 0055dab0)
 * Signature: uint8_t gfxReallocVertexBuffer(void)
 * Calls: `OpenGLDestroyVertexBuffer`, `gfxCreateVertexBuffer`
 * Called by: `VertexBuffer__Realloc`
 */
void gfxReallocVertexBuffer(uint64_t *arg1, uint64_t arg2)

{
  uint64_t uVar1;

  OpenGLDestroyVertexBuffer((tagGLVertexBuffer *)*arg1);
  *arg1 = 0;
  uVar1 = gfxCreateVertexBuffer(arg2);
  *arg1 = uVar1;
  return;
}

/* ======================================================================
 * gfxCreateVertexDeclaration  (Ghidra `gfxCreateVertexDeclaration` @ 0055daf0)
 * Signature: uint8_t gfxCreateVertexDeclaration(void)
 * Calls: (none)
 * Called by: `Create__005a66b0`
 */
uint64_t gfxCreateVertexDeclaration(void)

{
  return 0;
}

/* ======================================================================
 * gfxDestroyVertexDeclaration  (Ghidra `gfxDestroyVertexDeclaration` @ 0055db00)
 * Signature: uint8_t gfxDestroyVertexDeclaration(void)
 * Calls: (none)
 * Called by: `VertexDeclaration__VertexDeclaration`, `VertexDeclaration__VertexDeclaration__005a65f0`
 */
void gfxDestroyVertexDeclaration(void)

{
  return;
}

/* ======================================================================
 * glActiveTexture  (Ghidra `glActiveTexture` @ 0055de80)
 * Signature: uint8_t glActiveTexture(void)
 * Calls: (none)
 * Called by: (none)
 */
void glActiveTexture(void)

{
  /* WARNING: Could not recover jumptable at 0x0055de87. Too many branches */
  /* WARNING: Treating indirect jump as call */
  (*pglfn_glActiveTexture)();
  return;
}

/* ======================================================================
 * glAlphaFunc  (Ghidra `glAlphaFunc` @ 0055de90)
 * Signature: uint8_t glAlphaFunc(void)
 * Calls: (none)
 * Called by: (none)
 */
void glAlphaFunc(void)

{
  /* WARNING: Could not recover jumptable at 0x0055de97. Too many branches */
  /* WARNING: Treating indirect jump as call */
  (*pglfn_glAlphaFunc)();
  return;
}

/* ======================================================================
 * glBindTexture  (Ghidra `glBindTexture` @ 0055dea0)
 * Signature: uint8_t glBindTexture(void)
 * Calls: (none)
 * Called by: `gfxCreateTexture`
 */
void glBindTexture(void)

{
  /* WARNING: Could not recover jumptable at 0x0055dea7. Too many branches */
  /* WARNING: Treating indirect jump as call */
  (*pglfn_glBindTexture)();
  return;
}

/* ======================================================================
 * glBlendEquation  (Ghidra `glBlendEquation` @ 0055deb0)
 * Signature: uint8_t glBlendEquation(void)
 * Calls: (none)
 * Called by: (none)
 */
void glBlendEquation(void)

{
  /* WARNING: Could not recover jumptable at 0x0055deb7. Too many branches */
  /* WARNING: Treating indirect jump as call */
  (*pglfn_glBlendEquation)();
  return;
}

/* ======================================================================
 * glBlendFunc  (Ghidra `glBlendFunc` @ 0055dec0)
 * Signature: uint8_t glBlendFunc(void)
 * Calls: (none)
 * Called by: (none)
 */
void glBlendFunc(void)

{
  /* WARNING: Could not recover jumptable at 0x0055dec7. Too many branches */
  /* WARNING: Treating indirect jump as call */
  (*pglfn_glBlendFunc)();
  return;
}

/* ======================================================================
 * glClear  (Ghidra `glClear` @ 0055ded0)
 * Signature: uint8_t glClear(void)
 * Calls: (none)
 * Called by: (none)
 */
void glClear(void)

{
  /* WARNING: Could not recover jumptable at 0x0055ded7. Too many branches */
  /* WARNING: Treating indirect jump as call */
  (*pglfn_glClear)();
  return;
}

/* ======================================================================
 * glClearColor  (Ghidra `glClearColor` @ 0055dee0)
 * Signature: uint8_t glClearColor(void)
 * Calls: (none)
 * Called by: (none)
 */
void glClearColor(void)

{
  /* WARNING: Could not recover jumptable at 0x0055dee7. Too many branches */
  /* WARNING: Treating indirect jump as call */
  (*pglfn_glClearColor)();
  return;
}

/* ======================================================================
 * glClearDepth  (Ghidra `glClearDepth` @ 0055def0)
 * Signature: uint8_t glClearDepth(void)
 * Calls: (none)
 * Called by: (none)
 */
void glClearDepth(void)

{
  /* WARNING: Could not recover jumptable at 0x0055def7. Too many branches */
  /* WARNING: Treating indirect jump as call */
  (*pglfn_glClearDepth)();
  return;
}

/* ======================================================================
 * glClearStencil  (Ghidra `glClearStencil` @ 0055df00)
 * Signature: uint8_t glClearStencil(void)
 * Calls: (none)
 * Called by: (none)
 */
void glClearStencil(void)

{
  /* WARNING: Could not recover jumptable at 0x0055df07. Too many branches */
  /* WARNING: Treating indirect jump as call */
  (*pglfn_glClearStencil)();
  return;
}

/* ======================================================================
 * glColorMask  (Ghidra `glColorMask` @ 0055df10)
 * Signature: uint8_t glColorMask(void)
 * Calls: (none)
 * Called by: (none)
 */
void glColorMask(uint8_t arg1, uint8_t arg2, uint8_t arg3, uint8_t arg4)

{
  /* WARNING: Could not recover jumptable at 0x0055df25. Too many branches */
  /* WARNING: Treating indirect jump as call */
  (*pglfn_glColorMask)(arg1, arg2, arg3, arg4);
  return;
}

/* ======================================================================
 * glCullFace  (Ghidra `glCullFace` @ 0055df40)
 * Signature: uint8_t glCullFace(void)
 * Calls: (none)
 * Called by: (none)
 */
void glCullFace(void)

{
  /* WARNING: Could not recover jumptable at 0x0055df47. Too many branches */
  /* WARNING: Treating indirect jump as call */
  (*pglfn_glCullFace)();
  return;
}

/* ======================================================================
 * glDeleteTextures  (Ghidra `glDeleteTextures` @ 0055df50)
 * Signature: uint8_t glDeleteTextures(void)
 * Calls: (none)
 * Called by: `gfxDestroyTexture`
 */
void glDeleteTextures(void)

{
  /* WARNING: Could not recover jumptable at 0x0055df57. Too many branches */
  /* WARNING: Treating indirect jump as call */
  (*pglfn_glDeleteTextures)();
  return;
}

/* ======================================================================
 * glDepthFunc  (Ghidra `glDepthFunc` @ 0055df60)
 * Signature: uint8_t glDepthFunc(void)
 * Calls: (none)
 * Called by: (none)
 */
void glDepthFunc(void)

{
  /* WARNING: Could not recover jumptable at 0x0055df67. Too many branches */
  /* WARNING: Treating indirect jump as call */
  (*pglfn_glDepthFunc)();
  return;
}

/* ======================================================================
 * glDepthMask  (Ghidra `glDepthMask` @ 0055df70)
 * Signature: uint8_t glDepthMask(void)
 * Calls: (none)
 * Called by: (none)
 */
void glDepthMask(uint8_t arg1)

{
  /* WARNING: Could not recover jumptable at 0x0055df7b. Too many branches */
  /* WARNING: Treating indirect jump as call */
  (*pglfn_glDepthMask)(arg1);
  return;
}

/* ======================================================================
 * glDepthRange  (Ghidra `glDepthRange` @ 0055df80)
 * Signature: uint8_t glDepthRange(void)
 * Calls: (none)
 * Called by: (none)
 */
void glDepthRange(void)

{
  /* WARNING: Could not recover jumptable at 0x0055df87. Too many branches */
  /* WARNING: Treating indirect jump as call */
  (*pglfn_glDepthRange)();
  return;
}

/* ======================================================================
 * glDisable  (Ghidra `glDisable` @ 0055df90)
 * Signature: uint8_t glDisable(void)
 * Calls: (none)
 * Called by: (none)
 */
void glDisable(void)

{
  /* WARNING: Could not recover jumptable at 0x0055df97. Too many branches */
  /* WARNING: Treating indirect jump as call */
  (*pglfn_glDisable)();
  return;
}

/* ======================================================================
 * glDrawArrays  (Ghidra `glDrawArrays` @ 0055dfa0)
 * Signature: uint8_t glDrawArrays(void)
 * Calls: (none)
 * Called by: (none)
 */
void glDrawArrays(void)

{
  /* WARNING: Could not recover jumptable at 0x0055dfa7. Too many branches */
  /* WARNING: Treating indirect jump as call */
  (*pglfn_glDrawArrays)();
  return;
}

/* ======================================================================
 * glDrawElements  (Ghidra `glDrawElements` @ 0055dfb0)
 * Signature: uint8_t glDrawElements(void)
 * Calls: (none)
 * Called by: (none)
 */
void glDrawElements(void)

{
  /* WARNING: Could not recover jumptable at 0x0055dfb7. Too many branches */
  /* WARNING: Treating indirect jump as call */
  (*pglfn_glDrawElements)();
  return;
}

/* ======================================================================
 * glDrawBuffer  (Ghidra `glDrawBuffer` @ 0055dfc0)
 * Signature: uint8_t glDrawBuffer(void)
 * Calls: (none)
 * Called by: (none)
 */
void glDrawBuffer(void)

{
  /* WARNING: Could not recover jumptable at 0x0055dfc7. Too many branches */
  /* WARNING: Treating indirect jump as call */
  (*pglfn_glDrawBuffer)();
  return;
}

/* ======================================================================
 * glEnable  (Ghidra `glEnable` @ 0055dfd0)
 * Signature: uint8_t glEnable(void)
 * Calls: (none)
 * Called by: (none)
 */
void glEnable(void)

{
  /* WARNING: Could not recover jumptable at 0x0055dfd7. Too many branches */
  /* WARNING: Treating indirect jump as call */
  (*pglfn_glEnable)();
  return;
}

/* ======================================================================
 * glBindRenderbufferEXT  (Ghidra `glBindRenderbufferEXT` @ 0055e150)
 * Signature: uint8_t glBindRenderbufferEXT(void)
 * Calls: (none)
 * Called by: (none)
 */
void glBindRenderbufferEXT(void)

{
  /* WARNING: Could not recover jumptable at 0x0055e157. Too many branches */
  /* WARNING: Treating indirect jump as call */
  (*pglfn_glBindRenderbufferEXT)();
  return;
}

/* ======================================================================
 * glDeleteRenderbuffersEXT  (Ghidra `glDeleteRenderbuffersEXT` @ 0055e160)
 * Signature: uint8_t glDeleteRenderbuffersEXT(void)
 * Calls: (none)
 * Called by: (none)
 */
void glDeleteRenderbuffersEXT(void)

{
  /* WARNING: Could not recover jumptable at 0x0055e167. Too many branches */
  /* WARNING: Treating indirect jump as call */
  (*pglfn_glDeleteRenderbuffersEXT)();
  return;
}

/* ======================================================================
 * glBindFramebufferEXT  (Ghidra `glBindFramebufferEXT` @ 0055e190)
 * Signature: uint8_t glBindFramebufferEXT(void)
 * Calls: (none)
 * Called by: `gfxCreateTexture`
 */
void glBindFramebufferEXT(void)

{
  /* WARNING: Could not recover jumptable at 0x0055e197. Too many branches */
  /* WARNING: Treating indirect jump as call */
  (*pglfn_glBindFramebufferEXT)();
  return;
}

/* ======================================================================
 * glDeleteFramebuffersEXT  (Ghidra `glDeleteFramebuffersEXT` @ 0055e1a0)
 * Signature: uint8_t glDeleteFramebuffersEXT(void)
 * Calls: (none)
 * Called by: `gfxDestroyTexture`
 */
void glDeleteFramebuffersEXT(void)

{
  /* WARNING: Could not recover jumptable at 0x0055e1a7. Too many branches */
  /* WARNING: Treating indirect jump as call */
  (*pglfn_glDeleteFramebuffersEXT)();
  return;
}

/* ======================================================================
 * glCheckFramebufferStatusEXT  (Ghidra `glCheckFramebufferStatusEXT` @ 0055e1c0)
 * Signature: uint8_t glCheckFramebufferStatusEXT(void)
 * Calls: (none)
 * Called by: (none)
 */
void glCheckFramebufferStatusEXT(void)

{
  /* WARNING: Could not recover jumptable at 0x0055e1c7. Too many branches */
  /* WARNING: Treating indirect jump as call */
  (*pglfn_glCheckFramebufferStatusEXT)();
  return;
}

/* ======================================================================
 * glFramebufferTexture2DEXT  (Ghidra `glFramebufferTexture2DEXT` @ 0055e1d0)
 * Signature: uint8_t glFramebufferTexture2DEXT(void)
 * Calls: (none)
 * Called by: `gfxCreateTexture`
 */
void glFramebufferTexture2DEXT(void)

{
  /* WARNING: Could not recover jumptable at 0x0055e1d7. Too many branches */
  /* WARNING: Treating indirect jump as call */
  (*pglfn_glFramebufferTexture2DEXT)();
  return;
}

/* ======================================================================
 * glFramebufferRenderbufferEXT  (Ghidra `glFramebufferRenderbufferEXT` @ 0055e1e0)
 * Signature: uint8_t glFramebufferRenderbufferEXT(void)
 * Calls: (none)
 * Called by: (none)
 */
void glFramebufferRenderbufferEXT(void)

{
  /* WARNING: Could not recover jumptable at 0x0055e1e7. Too many branches */
  /* WARNING: Treating indirect jump as call */
  (*pglfn_glFramebufferRenderbufferEXT)();
  return;
}

/* ======================================================================
 * glBlitFramebufferEXT  (Ghidra `glBlitFramebufferEXT` @ 0055e1f0)
 * Signature: uint8_t glBlitFramebufferEXT(void)
 * Calls: (none)
 * Called by: (none)
 */
void glBlitFramebufferEXT(void)

{
  /* WARNING: Could not recover jumptable at 0x0055e1f7. Too many branches */
  /* WARNING: Treating indirect jump as call */
  (*pglfn_glBlitFramebufferEXT)();
  return;
}

/* ======================================================================
 * gfxClear  (Ghidra `gfxClear` @ 00560b90)
 * Signature: uint8_t gfxClear(void)
 * Calls: (none)
 * Called by: `TGraphics__Clear`
 */
void gfxClear(uint32_t *arg1, uint arg2)

{
  uint uVar1;
  uint uVar2;

  (*pglfn_glClearColor)(*arg1, arg1[1], arg1[2], arg1[3]);
  if ((arg2 & 2) != 0) {
    (*pglfn_glClearDepth)(DAT_005c7318 /* R:0.0f */);
  }
  uVar1 = 0x4100;
  uVar2 = 0x4000;
  if ((arg2 & 1) == 0) {
    uVar1 = (-(uint)((arg2 & 4) == 0) & 0xffffc000) + 0x4100;
    uVar2 = ~-(uint)((arg2 & 4) == 0) & 0x4000;
  }
  if ((arg2 & 2) != 0) {
    uVar2 = uVar1;
  }
  /* WARNING: Could not recover jumptable at 0x00560bf8. Too many branches */
  /* WARNING: Treating indirect jump as call */
  (*pglfn_glClear)(uVar2);
  return;
}

/* ======================================================================
 * gfxPresent  (Ghidra `gfxPresent` @ 00560c10)
 * Signature: uint8_t gfxPresent(void)
 * Calls: `SDL_GL_GetDrawableSize`, `SDL_GL_SwapWindow`, `SDL_GetTicks`, `SDL_ceil`, `SDL_fabs`
 * Called by: (none)
 */
void gfxPresent(void)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint64_t uVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int local_60;
  int local_5c;
  int local_58[4];
  int local_48[6];

  iVar3 = *(int *)(GLGraphics + 2);
  uVar4 = *GLGraphics;
  if (iVar3 != 0) {
    SDL_GL_GetDrawableSize(uVar4, local_58, local_48);
    fVar7 = (float)local_48[0];
    fVar9 = (float)local_58[0];
    uVar1 = *(ushort *)(Window + 8);
    uVar2 = *(ushort *)(Window + 10);
    fVar10 = (float)uVar1;
    fVar11 = (float)uVar2;
    dVar8 = (double)SDL_fabs((double)(fVar10 / fVar11 - fVar9 / fVar7));
    if (dVar8 < DAT_005d5480 /* R:u32=3944497965 */) {
      iVar5 = 0;
      iVar6 = 0;
      local_60 = local_58[0];
      local_5c = local_48[0];
    } else if (fVar10 / fVar11 <= fVar9 / fVar7) {
      iVar5 = 0;
      local_5c = local_48[0];
      dVar8 = (double)SDL_ceil((double)(((float)local_48[0] / fVar11) * fVar10));
      local_60 = (int)dVar8;
      iVar6 = (local_58[0] - local_60) / 2;
    } else {
      iVar6 = 0;
      local_60 = local_58[0];
      dVar8 = (double)SDL_ceil((double)(((float)local_58[0] / fVar10) * fVar11));
      local_5c = (int)dVar8;
      iVar5 = (local_48[0] - local_5c) / 2;
    }
    (*pglfn_glBindFramebufferEXT)(0x8ca8, iVar3);
    (*pglfn_glBindFramebufferEXT)(0x8ca9, 0);
    (*pglfn_glBlitFramebufferEXT)(0, 0, uVar1, uVar2, iVar6, iVar5, local_60, local_5c, 0x4000,
                                  0x2601);
    (*pglfn_glBindFramebufferEXT)(0x8d40, 0);
  }
  SDL_GL_SwapWindow(uVar4);
  iVar6 = gfxPresent__frametime + 0xb;
  do {
    iVar5 = SDL_GetTicks();
  } while (0 < iVar6 - iVar5);
  gfxPresent__frametime = iVar6;
  if (iVar3 != 0) {
    (*pglfn_glClearColor)(0, 0, 0);
    (*pglfn_glClear)(0x4000);
    (*pglfn_glBindFramebufferEXT)(0x8d40, iVar3);
  }
  return;
}

/* ======================================================================
 * gfxAutoSetViewport  (Ghidra `gfxAutoSetViewport` @ 00560ea0)
 * Signature: uint8_t gfxAutoSetViewport(void)
 * Calls: (none)
 * Called by: `gfxRenderToBackBuffer`
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gfxAutoSetViewport(void)

{
  ushort uVar1;
  ushort uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;

  uVar1 = *(ushort *)(Window + 10);
  uVar4 = (ulong)uVar1;
  uVar2 = *(ushort *)(Window + 8);
  uVar3 = (ulong)uVar2;
  if (*(int *)(Graphics + 0x348) == 1) {
    uVar6 = 0;
    uVar4 = (long)((float)uVar2 * _DAT_005d5478 /* R:0.5625f */) & 0xffffffff;
    uVar5 = (uint)uVar1 - (int)(long)((float)uVar2 * _DAT_005d5478 /* R:0.5625f */) >> 1;
  } else {
    uVar6 = 0;
    uVar5 = 0;
    if (*(int *)(Graphics + 0x348) == 2) {
      uVar3 = (long)((float)uVar1 * DAT_005d547c /* R:1.3333333730697632f */) & 0xffffffff;
      uVar6 =
          (uint)uVar2 - (int)(long)((float)uVar1 * DAT_005d547c /* R:1.3333333730697632f */) >> 1;
    }
  }
  (*pglfn_glViewport)(uVar6, uVar5, uVar3, uVar4);
  /* WARNING: Could not recover jumptable at 0x00560f02. Too many branches */
  /* WARNING: Treating indirect jump as call */
  (*pglfn_glScissor)((uint) * (ushort *)(Window + 8) - (int)uVar3 >> 1,
                     (uint) * (ushort *)(Window + 10) - (int)uVar4 >> 1, uVar3, uVar4);
  return;
}

/* ======================================================================
 * gfxBindRenderTarget  (Ghidra `gfxBindRenderTarget` @ 00560f50)
 * Signature: uint8_t gfxBindRenderTarget(void)
 * Calls: (none)
 * Called by: `TGraphics__BindRenderTarget`
 */
void gfxBindRenderTarget(uint32_t *arg1)

{
  (*pglfn_glViewport)(0, 0, *arg1, arg1[1]);
  (*pglfn_glScissor)(0, 0, *arg1, arg1[1]);
  (*pglfn_glBindFramebufferEXT)(0x8d40, arg1[3]);
  bRenderingToTexture = 1;
  return;
}

/* ======================================================================
 * gfxUnBindRenderTarget  (Ghidra `gfxUnBindRenderTarget` @ 00560f90)
 * Signature: uint8_t gfxUnBindRenderTarget(void)
 * Calls: (none)
 * Called by: `TGraphics__BindRenderTarget`, `TGraphics__RenderToBackBuffer`, `TGraphics__UnBindRenderTarget`
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gfxUnBindRenderTarget(void)

{
  ushort uVar1;
  ushort uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;

  uVar1 = *(ushort *)(Window + 10);
  uVar4 = (ulong)uVar1;
  uVar2 = *(ushort *)(Window + 8);
  uVar3 = (ulong)uVar2;
  if (*(int *)(Graphics + 0x348) == 1) {
    uVar6 = 0;
    uVar4 = (long)((float)uVar2 * _DAT_005d5478 /* R:0.5625f */) & 0xffffffff;
    uVar5 = (uint)uVar1 - (int)(long)((float)uVar2 * _DAT_005d5478 /* R:0.5625f */) >> 1;
  } else {
    uVar6 = 0;
    uVar5 = 0;
    if (*(int *)(Graphics + 0x348) == 2) {
      uVar3 = (long)((float)uVar1 * DAT_005d547c /* R:1.3333333730697632f */) & 0xffffffff;
      uVar6 =
          (uint)uVar2 - (int)(long)((float)uVar1 * DAT_005d547c /* R:1.3333333730697632f */) >> 1;
    }
  }
  (*pglfn_glViewport)(uVar6, uVar5, uVar3, uVar4);
  /* WARNING: Could not recover jumptable at 0x00560f02. Too many branches */
  /* WARNING: Treating indirect jump as call */
  (*pglfn_glScissor)((uint) * (ushort *)(Window + 8) - (int)uVar3 >> 1,
                     (uint) * (ushort *)(Window + 10) - (int)uVar4 >> 1, uVar3, uVar4);
  return;
}

/* ======================================================================
 * gfxRenderToBackBuffer  (Ghidra `gfxRenderToBackBuffer` @ 00560fa0)
 * Signature: uint8_t gfxRenderToBackBuffer(void)
 * Calls: `gfxAutoSetViewport`
 * Called by: `TGraphics__RenderToBackBuffer`
 */
void gfxRenderToBackBuffer(void)

{
  (*pglfn_glBindFramebufferEXT)(0x8d40, *(uint32_t *)(GLGraphics + 0x10));
  bRenderingToTexture = 0;
  gfxAutoSetViewport();
  return;
}

/* ======================================================================
 * gfxDraw  (Ghidra `gfxDraw` @ 00561070)
 * Signature: uint8_t gfxDraw(void)
 * Calls: `FragmentLinker__AddFragment__00586940`, `FragmentLinker__GetPixelShader`, `FragmentLinker__GetVertexShader`, `FragmentLinker__ResetFragments`, `MOJOSHADER_glBindShaders`, `MOJOSHADER_glProgramReady`, `MOJOSHADER_glSetVertexAttribute`, `MOJOSHADER_glSetVertexShaderUniformF`, `Matrix4x4__operator_cast_to_float`, `TGraphics__SetPixelShader` (+2 more)
 * Called by: `TGraphics__Draw`
 */
/* WARNING: Type propagation algorithm not settling */

void gfxDraw(void)

{
  TGraphics TVar1;
  byte *pbVar2;
  bool bVar3;
  TGraphics *pTVar4;
  Matrix4x4 *pMVar5;
  byte bVar6;
  ushort uVar7;
  int iVar8;
  uint uVar9;
  byte *pbVar10;
  PixelShader *pPVar11;
  VertexShader *pVVar12;
  float *pfVar13;
  uint32_t uVar14;
  ulong uVar15;
  uint32_t uVar16;
  long lVar17;
  TGraphics *pTVar18;
  uint32_t uVar19;
  uint64_t uVar20;
  uint32_t uVar21;
  uint16_t uVar22;
  TGraphics *pTVar23;
  byte *pbVar24;
  byte *pbVar25;
  long lVar26;
  short sVar27;
  long lVar28;
  int iVar29;
  bool bVar30;
  byte bVar31;
  int local_7c;
  Matrix4x4 local_78[72];

  lVar17 = pGPUStateSet;
  pTVar18 = pGPUStateDesired;
  bVar31 = 0;
  iVar29 = 0x84c0;
  lVar28 = 0;
  pTVar23 = pGPUStateDesired;
  lVar26 = pGPUStateSet;
  do {
    if (*(long *)(pTVar18 + lVar28 + 0x98) == 0) {
      if (*(long *)(lVar17 + 0x98 + lVar28) != 0) {
        (*pglfn_glActiveTexture)(iVar29);
        (*pglfn_glBindTexture)(0xde1, 0);
      }
    } else {
      if (*(long *)(pTVar18 + lVar28 + 0x98) != *(long *)(lVar17 + 0x98 + lVar28)) {
        (*pglfn_glActiveTexture)(iVar29);
        (*pglfn_glBindTexture)(
            0xde1, *(uint32_t *)(*(long *)(*(long *)(pTVar18 + lVar28 + 0x98) + 0x18) + 8));
      }
      uVar9 = *(uint *)(pTVar23 + 0x124);
      uVar15 = (ulong)uVar9;
      if ((*(uint *)(lVar26 + 0x124) != uVar9) && (uVar9 != 0xffffffff)) {
        if (GLSamplerStateValues == (uint8_t *)0x1) {
          (*pglfn_glTexParameterf)((float)uVar15, 0xde1, 0x2802);
        } else {
          if (GLSamplerStateValues != (uint8_t *)0x2) {
            uVar15 = (ulong) * (uint *)(GLSamplerStateValues + uVar15 * 4);
          }
          (*pglfn_glTexParameteri)(0xde1, 0x2802, uVar15);
        }
      }
      uVar9 = *(uint *)(pTVar23 + 0x128);
      uVar15 = (ulong)uVar9;
      if ((*(uint *)(lVar26 + 0x128) != uVar9) && (uVar9 != 0xffffffff)) {
        if (PTR_GLTextureAddressing_00817908 == (uint8_t *)0x1) {
          (*pglfn_glTexParameterf)((float)uVar15, 0xde1, 0x2803);
        } else {
          if (PTR_GLTextureAddressing_00817908 != (uint8_t *)0x2) {
            uVar15 = (ulong) * (uint *)(PTR_GLTextureAddressing_00817908 + uVar15 * 4);
          }
          (*pglfn_glTexParameteri)(0xde1, 0x2803, uVar15);
        }
      }
      uVar9 = *(uint *)(pTVar23 + 300);
      uVar15 = (ulong)uVar9;
      if ((*(uint *)(lVar26 + 300) != uVar9) && (uVar9 != 0xffffffff)) {
        if (PTR_GLTextureAddressing_00817910 == (uint8_t *)0x1) {
          (*pglfn_glTexParameterf)((float)uVar15, 0xde1, 0x8072);
        } else {
          if (PTR_GLTextureAddressing_00817910 != (uint8_t *)0x2) {
            uVar15 = (ulong) * (uint *)(PTR_GLTextureAddressing_00817910 + uVar15 * 4);
          }
          (*pglfn_glTexParameteri)(0xde1, 0x8072, uVar15);
        }
      }
      uVar9 = *(uint *)(pTVar23 + 0x130);
      uVar15 = (ulong)uVar9;
      if ((*(uint *)(lVar26 + 0x130) != uVar9) && (uVar9 != 0xffffffff)) {
        if (PTR_GLTextureFilter_00817918 == (uint8_t *)0x1) {
          (*pglfn_glTexParameterf)((float)uVar15, 0xde1, 0x2800);
        } else {
          if (PTR_GLTextureFilter_00817918 != (uint8_t *)0x2) {
            uVar15 = (ulong) * (uint *)(PTR_GLTextureFilter_00817918 + uVar15 * 4);
          }
          (*pglfn_glTexParameteri)(0xde1, 0x2800, uVar15);
        }
      }
      uVar9 = *(uint *)(pTVar23 + 0x134);
      uVar15 = (ulong)uVar9;
      if ((*(uint *)(lVar26 + 0x134) != uVar9) && (uVar9 != 0xffffffff)) {
        if (PTR_GLTextureFilter_00817920 == (uint8_t *)0x1) {
          (*pglfn_glTexParameterf)((float)uVar15, 0xde1, 0x2801);
        } else {
          if (PTR_GLTextureFilter_00817920 != (uint8_t *)0x2) {
            uVar15 = (ulong) * (uint *)(PTR_GLTextureFilter_00817920 + uVar15 * 4);
          }
          (*pglfn_glTexParameteri)(0xde1, 0x2801, uVar15);
        }
      }
      uVar9 = *(uint *)(pTVar23 + 0x138);
      uVar15 = (ulong)uVar9;
      if ((*(uint *)(lVar26 + 0x138) != uVar9) && (uVar9 != 0xffffffff)) {
        if (PTR_GLMipFilter_00817928 == (uint8_t *)0x1) {
          (*pglfn_glTexParameterf)((float)uVar15, 0xde1, 0x9999);
        } else {
          if (PTR_GLMipFilter_00817928 != (uint8_t *)0x2) {
            uVar15 = (ulong) * (uint *)(PTR_GLMipFilter_00817928 + uVar15 * 4);
          }
          (*pglfn_glTexParameteri)(0xde1, 0x9999, uVar15);
        }
      }
      uVar9 = *(uint *)(pTVar23 + 0x13c);
      uVar15 = (ulong)uVar9;
      if ((*(uint *)(lVar26 + 0x13c) != uVar9) && (uVar9 != 0xffffffff)) {
        if (DAT_00817930 /* R:0.0f */ == 1) {
          (*pglfn_glTexParameterf)((float)uVar15, 0xde1, 0x8501);
        } else {
          if (DAT_00817930 /* R:0.0f */ != 2) {
            uVar15 = (ulong) * (uint *)(DAT_00817930 /* R:0.0f */ + uVar15 * 4);
          }
          (*pglfn_glTexParameteri)(0xde1, 0x8501, uVar15);
        }
      }
      uVar9 = *(uint *)(pTVar23 + 0x140);
      uVar15 = (ulong)uVar9;
      if ((*(uint *)(lVar26 + 0x140) != uVar9) && (uVar9 != 0xffffffff)) {
        if (DAT_00817938 /* R:0.0f */ == 1) {
          (*pglfn_glTexParameterf)((float)uVar15, 0xde1, 0x813d);
        } else {
          if (DAT_00817938 /* R:0.0f */ != 2) {
            uVar15 = (ulong) * (uint *)(DAT_00817938 /* R:0.0f */ + uVar15 * 4);
          }
          (*pglfn_glTexParameteri)(0xde1, 0x813d, uVar15);
        }
      }
      uVar9 = *(uint *)(pTVar23 + 0x144);
      uVar15 = (ulong)uVar9;
      if ((*(uint *)(lVar26 + 0x144) != uVar9) && (uVar9 != 0xffffffff)) {
        if (DAT_00817940 /* R:0.0f */ == 1) {
          (*pglfn_glTexParameterf)((float)uVar15, 0xde1, 0x84fe);
        } else {
          if (DAT_00817940 /* R:0.0f */ != 2) {
            uVar15 = (ulong) * (uint *)(DAT_00817940 /* R:0.0f */ + uVar15 * 4);
          }
          (*pglfn_glTexParameteri)(0xde1, 0x84fe, uVar15);
        }
      }
    }
    lVar28 = lVar28 + 8;
    iVar29 = iVar29 + 1;
    lVar26 = lVar26 + 0x24;
    pTVar23 = pTVar23 + 0x24;
  } while (lVar28 != 0x40);
  uVar7 = *(ushort *)(*(long *)(pTVar18 + 0xd8) + 0x20);
  pbVar2 = *(byte **)(*(long *)(pTVar18 + 0xd8) + 0x18);
  FragmentLinker__ResetFragments(pPixelLinker);
  FragmentLinker__ResetFragments(pVertexLinker);
  if ((uVar7 != 0) && (*pbVar2 != 0xff)) {
    local_7c = 0;
    pbVar10 = pbVar2;
    pbVar24 = pbVar2 + 0x10;
    do {
      iVar29 = *(int *)(pbVar10 + 4);
      if (iVar29 == 0) {
        FragmentLinker__AddFragment__00586940(pVertexLinker, (ShaderFragment *)PosTrans);
        FragmentLinker__AddFragment__00586940(pPixelLinker, (ShaderFragment *)PixPos);
      } else if (iVar29 == 1) {
        FragmentLinker__AddFragment__00586940(
            pVertexLinker, (ShaderFragment *)(VertexTexCoordOut + (long)local_7c * 0x30));
        if ((local_7c < *(int *)(pTVar18 + 0x334)) &&
            (lVar26 = (long)local_7c * 0xc, *(int *)(pTVar18 + lVar26 + 0x33c) != 0)) {
          FragmentLinker__AddFragment__00586940(
              pVertexLinker, (ShaderFragment *)(VertexTexCoordMatTrans +
                                                (long)*(int *)(pTVar18 + lVar26 + 0x340) * 0x30));
          local_7c = local_7c + 1;
        } else {
          local_7c = local_7c + 1;
        }
      } else if ((iVar29 != 2) && (iVar29 == 3)) {
        FragmentLinker__AddFragment__00586940(pVertexLinker, (ShaderFragment *)VertexColor);
        FragmentLinker__AddFragment__00586940(pPixelLinker, (ShaderFragment *)PixColor);
      }
    } while ((pbVar24 != pbVar2 + 0x10 + (ulong)(uVar7 - 1 & 0xffff) * 0x10) &&
             (bVar6 = *pbVar24, pbVar10 = pbVar24, pbVar24 = pbVar24 + 0x10, bVar6 != 0xff));
  }
  iVar29 = 0;
  if (0 < *(int *)(pTVar18 + 0x254)) {
    do {
      while (true) {
        lVar26 = (long)iVar29 * 0x18;
        iVar8 = *(int *)(pTVar18 + lVar26 + 600);
        if (iVar8 != 0) {
          if (*(int *)(pTVar18 + lVar26 + 0x25c) != 0) {
            FragmentLinker__AddFragment__00586940(
                pPixelLinker, (ShaderFragment *)(PixelTexCoordsIn +
                                                 (long)*(int *)(pTVar18 + lVar26 + 0x25c) * 0x30));
            iVar8 = *(int *)(pTVar18 + lVar26 + 600);
          }
          FragmentLinker__AddFragment__00586940(
              pPixelLinker, (ShaderFragment *)(PixelChannel1Sources + (long)iVar8 * 0x30));
        }
        iVar8 = *(int *)(pTVar18 + lVar26 + 0x260);
        if (iVar8 != 0) {
          if (*(int *)(pTVar18 + lVar26 + 0x264) != 0) {
            FragmentLinker__AddFragment__00586940(
                pPixelLinker, (ShaderFragment *)(PixelTexCoordsIn +
                                                 (long)*(int *)(pTVar18 + lVar26 + 0x264) * 0x30));
            iVar8 = *(int *)(pTVar18 + lVar26 + 0x260);
          }
          FragmentLinker__AddFragment__00586940(
              pPixelLinker, (ShaderFragment *)(PixelChannel2Sources + (long)iVar8 * 0x30));
        }
        if (*(int *)(pTVar18 + lVar26 + 0x268) != 0)
          break;
        iVar8 = *(int *)(pTVar18 + lVar26 + 0x26c);
        if (iVar8 == 0)
          goto LAB_00561445;
      LAB_00561505:
        iVar29 = iVar29 + 1;
        FragmentLinker__AddFragment__00586940(
            pPixelLinker, (ShaderFragment *)(PixelOutputs + (long)iVar8 * 0x30));
        if (*(int *)(pTVar18 + 0x254) <= iVar29)
          goto LAB_00561533;
      }
      FragmentLinker__AddFragment__00586940(
          pPixelLinker,
          (ShaderFragment *)(PixelOps + (long)*(int *)(pTVar18 + lVar26 + 0x268) * 0x30));
      iVar8 = *(int *)(pTVar18 + lVar26 + 0x26c);
      if (iVar8 != 0)
        goto LAB_00561505;
    LAB_00561445:
      iVar29 = iVar29 + 1;
    } while (iVar29 < *(int *)(pTVar18 + 0x254));
  }
LAB_00561533:
  pPVar11 = (PixelShader *)FragmentLinker__GetPixelShader(pPixelLinker);
  TGraphics__SetPixelShader(Graphics, pPVar11);
  pVVar12 = (VertexShader *)FragmentLinker__GetVertexShader(pVertexLinker);
  TGraphics__SetVertexShader(Graphics, pVVar12);
  if ((*(long *)(lVar17 + 0x90) != *(long *)(pTVar18 + 0x90)) ||
      (*(long *)(lVar17 + 0x88) != *(long *)(pTVar18 + 0x88))) {
    MOJOSHADER_glBindShaders(*(uint64_t *)(*(long *)(pTVar18 + 0x88) + 0x10),
                             *(uint64_t *)(*(long *)(pTVar18 + 0x90) + 0x10));
  }
  if ((uVar7 != 0) && (bVar6 = *pbVar2, bVar6 != 0xff)) {
    iVar29 = 0;
    pbVar10 = pbVar2 + 0x10;
    pbVar24 = pbVar2;
    do {
      pbVar25 = pbVar10;
      uVar22 = 0;
      lVar26 = *(long *)(pTVar18 + (ulong)bVar6 * 8);
      iVar8 = 0;
      if ((lVar26 != 0) && ((*(int *)(lVar26 + 0x1c) == 0 || (*(int *)(lVar26 + 0x1c) == 2)))) {
        uVar22 = *(uint16_t *)(lVar26 + 0x18);
        iVar8 = *(int *)(*(long *)(lVar26 + 0x28) + 8);
      }
      if (iVar8 != iVar29) {
        (*pglfn_glBindBufferARB)(0x8892, iVar8);
        iVar29 = iVar8;
      }
      uVar15 = (ulong)(*(int *)(pbVar24 + 8) - 1U);
      if (*(int *)(pbVar24 + 8) - 1U < 4) {
        uVar14 = *(uint32_t *)(CSWTCH_284 + uVar15 * 4);
        uVar21 = *(uint32_t *)(CSWTCH_285 + uVar15 * 4);
        uVar16 = *(uint32_t *)(CSWTCH_286 + uVar15 * 4);
      } else {
        uVar16 = 1;
        uVar21 = 0;
        uVar14 = 6;
      }
      uVar19 = 0xffffffff;
      if (*(uint *)(pbVar24 + 4) < 4) {
        uVar19 = *(uint32_t *)(CSWTCH_288 + (ulong) * (uint *)(pbVar24 + 4) * 4);
      }
      MOJOSHADER_glSetVertexAttribute(uVar19, pbVar24[0xc], uVar16, uVar14, uVar21, uVar22,
                                      *(uint16_t *)(pbVar24 + 2));
      if (pbVar25 == pbVar2 + 0x10 + (ulong)(uVar7 - 1 & 0xffff) * 0x10)
        break;
      bVar6 = *pbVar25;
      pbVar10 = pbVar25 + 0x10;
      pbVar24 = pbVar25;
    } while (bVar6 != 0xff);
    if (iVar29 != 0) {
      (*pglfn_glBindBufferARB)(0x8892, 0);
    }
  }
  TGraphics__SetPixelShaderConstant(Graphics, 3, pTVar18 + 0x244, 1, 0);
  lVar26 = *(long *)(pTVar18 + 0x80);
  if (*(long *)(lVar17 + 0x80) != lVar26) {
    if (lVar26 == 0) {
      (*pglfn_glBindBufferARB)(0x8893, 0);
    } else {
      (*pglfn_glBindBufferARB)(0x8893, *(uint32_t *)(*(long *)(lVar26 + 0x20) + 8));
    }
  }
  sVar27 = 1;
  bVar3 = false;
  bVar30 = false;
LAB_005617d8:
  uVar7 = sVar27 - 1;
  lVar26 = (ulong)uVar7 + 0x3c;
  uVar9 = *(uint *)(pTVar18 + lVar26 * 4);
  if ((uVar9 == 0xffffffff) || (uVar9 == *(uint *)(lVar17 + lVar26 * 4)))
    goto LAB_00561820;
  if ((&GLRenderStateValues)[uVar7] != (uint8_t *)0x0) {
    uVar9 = *(uint *)((&GLRenderStateValues)[uVar7] + (ulong)uVar9 * 4);
  }
  switch (uVar7) {
  default:
    if (uVar9 != 0) {
      (*pglfn_glEnable)(0xb71);
      goto LAB_00561820;
    }
    goto LAB_00561819;
  case 1:
    (*pglfn_glDepthFunc)(uVar9);
    break;
  case 2:
    (*pglfn_glPolygonMode)(0x408, uVar9);
    break;
  case 3:
    (*pglfn_glDepthMask)(uVar9 != 0);
    break;
  case 4:
    (*pglfn_glBlendEquation)(uVar9);
    break;
  case 5:
  case 6:
    bVar30 = true;
    break;
  case 7:
    if (uVar9 == 0)
      goto LAB_00561819;
    (*pglfn_glEnable)(0xb44);
    (*pglfn_glFrontFace)(uVar9);
    break;
  case 8:
    uVar20 = 0xbe2;
    if (uVar9 == 0)
      goto LAB_00561819;
  LAB_005619d6:
    (*pglfn_glEnable)(uVar20);
    break;
  case 9:
    uVar20 = 0xbc0;
    if (uVar9 != 0)
      goto LAB_005619d6;
  LAB_00561819:
    (*pglfn_glDisable)();
  LAB_00561820:
    if (sVar27 == 0xd)
      goto LAB_00561870;
    break;
  case 10:
  case 0xb:
    bVar3 = true;
    break;
  case 0xc:
    uVar9 = uVar9 & 0xff;
    (*pglfn_glColorMask)(uVar9, uVar9, uVar9, uVar9);
  LAB_00561870:
    if (bVar30) {
      (*pglfn_glBlendFunc)(*(uint32_t *)(GLBlend + (ulong) * (uint *)(pTVar18 + 0x104) * 4),
                           *(uint32_t *)(GLBlend + (ulong) * (uint *)(pTVar18 + 0x108) * 4));
      if (bVar3)
        goto LAB_00561ad1;
    LAB_00561882:
      iVar29 = *(int *)(pTVar18 + 0x398);
    } else {
      if (!bVar3)
        goto LAB_00561882;
    LAB_00561ad1:
      (*pglfn_glAlphaFunc)((float)(byte)pTVar18[0x11c] * DAT_005c4890 /* R:0.003921568859368563f */,
                           *(uint32_t *)(GLACompFunc + (ulong) * (uint *)(pTVar18 + 0x118) * 4));
      iVar29 = *(int *)(pTVar18 + 0x398);
    }
    if (iVar29 != 1)
      goto LAB_0056188f;
    Matrix4x4__Identity(local_78);
    pMVar5 = (Matrix4x4 *)Graphics;
    iVar29 = *(int *)(pTVar18 + 0x39c);
    if ((iVar29 == 0) || (bVar30 = false, iVar29 == 1)) {
      Matrix4x4__Multiply(local_78, local_78, (Matrix4x4 *)Graphics);
      iVar29 = *(int *)(pTVar18 + 0x39c);
      bVar30 = true;
      if (iVar29 != 0)
        goto LAB_00561b2f;
    LAB_00561d88:
      Matrix4x4__Multiply(local_78, local_78, pMVar5 + 0x40);
      if (*(int *)(pTVar18 + 0x39c) == 1) {
        Matrix4x4__Multiply(local_78, local_78, pMVar5 + 0x80);
      }
      bVar30 = true;
      iVar29 = *(int *)(pTVar18 + 0x39c);
    } else {
    LAB_00561b2f:
      if (iVar29 == 1)
        goto LAB_00561d88;
    }
    if ((iVar29 == 0) || (iVar29 == 1)) {
      Matrix4x4__Multiply(local_78, local_78, pMVar5 + 0xc0);
    } else if (!bVar30)
      goto LAB_0056188f;
    pfVar13 = Matrix4x4__operator_cast_to_float(local_78);
    MOJOSHADER_glSetVertexShaderUniformF(0, pfVar13, 4);
  LAB_0056188f:
    pTVar4 = Graphics;
    *(uint32_t *)(pTVar18 + 0x398) = 0;
    pTVar23 = pTVar4 + 0x350;
    if (pTVar18 != pTVar23) {
      bVar30 = ((ulong)pTVar23 & 1) != 0;
      uVar9 = 0x3a8;
      if (bVar30) {
        TVar1 = *pTVar18;
        pTVar23 = pTVar4 + 0x351;
        pTVar18 = pTVar18 + 1;
        pTVar4[0x350] = TVar1;
        uVar9 = 0x3a7;
      }
      if (((ulong)pTVar23 & 2) != 0) {
        uVar22 = *(uint16_t *)pTVar18;
        uVar9 = uVar9 - 2;
        pTVar18 = pTVar18 + 2;
        *(uint16_t *)pTVar23 = uVar22;
        pTVar23 = pTVar23 + 2;
      }
      if (((ulong)pTVar23 & 4) != 0) {
        uVar14 = *(uint32_t *)pTVar18;
        uVar9 = uVar9 - 4;
        pTVar18 = pTVar18 + 4;
        *(uint32_t *)pTVar23 = uVar14;
        pTVar23 = pTVar23 + 4;
      }
      lVar17 = 0;
      for (uVar15 = (ulong)(uVar9 >> 3); uVar15 != 0; uVar15 = uVar15 - 1) {
        *(uint64_t *)pTVar23 = *(uint64_t *)pTVar18;
        pTVar18 = pTVar18 + (ulong)bVar31 * -0x10 + 8;
        pTVar23 = pTVar23 + (ulong)bVar31 * -0x10 + 8;
      }
      if ((uVar9 & 4) != 0) {
        *(uint32_t *)pTVar23 = *(uint32_t *)pTVar18;
        lVar17 = 4;
      }
      if ((uVar9 & 2) != 0) {
        *(uint16_t *)(pTVar23 + lVar17) = *(uint16_t *)(pTVar18 + lVar17);
        lVar17 = lVar17 + 2;
      }
      if (bVar30) {
        pTVar23[lVar17] = pTVar18[lVar17];
      }
    }
    MOJOSHADER_glProgramReady();
    if (*(long *)(pGPUStateSet + 0x80) != 0) {
      (*pglfn_glDrawElements)(
          *(uint32_t *)(GLPrimType + (long)*(int *)(pGPUStateSet + 0xec) * 4),
          *(uint32_t *)(pGPUStateSet + 0xe8),
          *(uint32_t *)(*(long *)(*(long *)(pGPUStateSet + 0x80) + 0x20) + 0x1c), 0);
      return;
    }
    (*pglfn_glDrawArrays)(*(uint32_t *)(GLPrimType + (long)*(int *)(pGPUStateSet + 0xec) * 4), 0,
                          *(uint32_t *)(pGPUStateSet + 0xe8));
    return;
  }
  sVar27 = sVar27 + 1;
  goto LAB_005617d8;
}

/* ======================================================================
 * gfxBeginScene  (Ghidra `gfxBeginScene` @ 00561dd0)
 * Signature: uint8_t gfxBeginScene(void)
 * Calls: (none)
 * Called by: (none)
 */
void gfxBeginScene(void)

{
  return;
}

/* ======================================================================
 * gfxEndScene  (Ghidra `gfxEndScene` @ 00561de0)
 * Signature: uint8_t gfxEndScene(void)
 * Calls: (none)
 * Called by: (none)
 */
void gfxEndScene(void)

{
  return;
}

/* ======================================================================
 * gfxAquireDevice  (Ghidra `gfxAquireDevice` @ 00561df0)
 * Signature: uint8_t gfxAquireDevice(void)
 * Calls: (none)
 * Called by: (none)
 */
uint64_t gfxAquireDevice(void)

{
  return 1;
}

/* ======================================================================
 * gfxReleaseDevice  (Ghidra `gfxReleaseDevice` @ 00561e00)
 * Signature: uint8_t gfxReleaseDevice(void)
 * Calls: (none)
 * Called by: (none)
 */
void gfxReleaseDevice(void)

{
  return;
}

/* ======================================================================
 * gfxResetDevice  (Ghidra `gfxResetDevice` @ 00561e10)
 * Signature: uint8_t gfxResetDevice(void)
 * Calls: `OpenGLGraphics__DestroyBackbuffer`, `OpenGLGraphics__PrepBackbuffer__0055e590`, `SDL_GL_GetDrawableSize`, `SDL_GL_SwapWindow`, `SDL_SetWindowFullscreen`, `SDL_SetWindowSize`
 * Called by: `TGraphics__ResetDevice`
 */
uint64_t gfxResetDevice(uint32_t *arg1)

{
  uint64_t uVar1;
  OpenGLGraphics *this;
  long lVar2;
  uint local_38[4];
  uint local_28[6];

  lVar2 = Window;
  *(uint32_t *)(Window + 0xc) = arg1[2];
  *(short *)(lVar2 + 8) = (short)*arg1;
  *(short *)(lVar2 + 10) = (short)arg1[1];
  uVar1 = *(uint64_t *)GLGraphics;
  SDL_SetWindowFullscreen(uVar1, ~-(uint)(arg1[2] == 0) & 0x1001);
  SDL_SetWindowSize(*(uint64_t *)GLGraphics, *arg1, arg1[1]);
  (*pglfn_glViewport)(0, 0, *arg1, arg1[1]);
  (*pglfn_glScissor)(0, 0, *arg1, arg1[1]);
  (*pglfn_glBindFramebufferEXT)(0x8d40, 0);
  (*pglfn_glClearColor)(0, 0, 0);
  (*pglfn_glClear)(0x4100);
  SDL_GL_SwapWindow(uVar1);
  (*pglfn_glClear)(0x4100);
  SDL_GL_SwapWindow(uVar1);
  (*pglfn_glClear)(0x4100);
  SDL_GL_SwapWindow(uVar1);
  this = GLGraphics;
  OpenGLGraphics__DestroyBackbuffer(GLGraphics);
  SDL_GL_GetDrawableSize(*(uint64_t *)this, local_38, local_28);
  lVar2 = Window;
  if (have_GL_EXT_framebuffer_blit == '\0') {
    *(short *)(Window + 8) = (short)local_38[0];
    *(short *)(lVar2 + 10) = (short)local_28[0];
    return 1;
  }
  if ((*(ushort *)(Window + 8) != local_38[0]) || (*(ushort *)(Window + 10) != local_28[0])) {
    OpenGLGraphics__PrepBackbuffer__0055e590(this);
  }
  return 1;
}

/* ======================================================================
 * gfxSetColorConstant  (Ghidra `gfxSetColorConstant` @ 00561f60)
 * Signature: uint8_t gfxSetColorConstant(void)
 * Calls: `MOJOSHADER_glSetPixelShaderUniformF`
 * Called by: `TGraphics__SetPixelColorConstant`
 */
void gfxSetColorConstant(uint8_t arg1, uint64_t arg2)

{
  MOJOSHADER_glSetPixelShaderUniformF(arg1, arg2, 1);
  return;
}

/* ======================================================================
 * gfxSetTexCoordMatrix  (Ghidra `gfxSetTexCoordMatrix` @ 00561f70)
 * Signature: uint8_t gfxSetTexCoordMatrix(void)
 * Calls: `MOJOSHADER_glSetVertexShaderUniformF`
 * Called by: `TGraphics__SetTextCoordMatrix`
 */
void gfxSetTexCoordMatrix(int arg1, uint64_t arg2)

{
  MOJOSHADER_glSetVertexShaderUniformF
            (gfxSetTexCoordMatrix__iTexMatMap(long)arg1 * 4],arg2,3);
  return;
}

/* ======================================================================
 * gfxSetFogParams  (Ghidra `gfxSetFogParams` @ 00561f90)
 * Signature: uint8_t gfxSetFogParams(void)
 * Calls: `MOJOSHADER_glSetPixelShaderUniformF`
 * Called by: `TGraphics__SetFogParameters`
 */
void gfxSetFogParams(long arg1)

{
  uint32_t local_18;
  uint32_t local_14;
  uint32_t local_10;
  uint32_t local_c;

  MOJOSHADER_glSetPixelShaderUniformF(4, arg1, 1);
  local_10 = 0;
  local_c = 0;
  local_18 = *(uint32_t *)(arg1 + 0x10);
  local_14 = *(uint32_t *)(arg1 + 0x14);
  MOJOSHADER_glSetPixelShaderUniformF(5, &local_18, 1);
  return;
}

/* ======================================================================
 * gfxCreateRenderDevice  (Ghidra `gfxCreateRenderDevice` @ 00561fe0)
 * Signature: uint8_t gfxCreateRenderDevice(void)
 * Calls: `OpenGLGraphics__OpenGLGraphics`, `operator_new`
 * Called by: `TGraphics__TGraphics`
 */
void gfxCreateRenderDevice(void)

{
  OpenGLGraphics *this;

  this = operator_new(0x20);
  /* try { // try from 00561ff5 to 00561ff9 has its CatchHandler @ 00562000 */
  OpenGLGraphics__OpenGLGraphics(this);
  return;
}

/* ======================================================================
 * gfxDestroyRenderDevice  (Ghidra `gfxDestroyRenderDevice` @ 00562020)
 * Signature: uint8_t gfxDestroyRenderDevice(void)
 * Calls: `OpenGLGraphics__OpenGLGraphics__005608f0`, `operator_delete`
 * Called by: (none)
 */
void gfxDestroyRenderDevice(void)

{
  OpenGLGraphics *pOVar1;

  pOVar1 = GLGraphics;
  if (GLGraphics != (OpenGLGraphics *)0x0) {
    OpenGLGraphics__OpenGLGraphics__005608f0(GLGraphics);
    operator_delete(pOVar1);
  }
  GLGraphics = (OpenGLGraphics *)0x0;
  return;
}

/* ======================================================================
 * gfxUnbindAll  (Ghidra `gfxUnbindAll` @ 00562050)
 * Signature: uint8_t gfxUnbindAll(void)
 * Calls: `MOJOSHADER_glBindProgram`
 * Called by: (none)
 */
void gfxUnbindAll(void)

{
  (*pglfn_glActiveTexture)(0x84c7);
  (*pglfn_glBindTexture)(0xde1, 0);
  (*pglfn_glActiveTexture)(0x84c6);
  (*pglfn_glBindTexture)(0xde1, 0);
  (*pglfn_glActiveTexture)(0x84c5);
  (*pglfn_glBindTexture)(0xde1, 0);
  (*pglfn_glActiveTexture)(0x84c4);
  (*pglfn_glBindTexture)(0xde1, 0);
  (*pglfn_glActiveTexture)(0x84c3);
  (*pglfn_glBindTexture)(0xde1, 0);
  (*pglfn_glActiveTexture)(0x84c2);
  (*pglfn_glBindTexture)(0xde1, 0);
  (*pglfn_glActiveTexture)(0x84c1);
  (*pglfn_glBindTexture)(0xde1, 0);
  (*pglfn_glActiveTexture)(0x84c0);
  (*pglfn_glBindTexture)(0xde1, 0);
  MOJOSHADER_glBindProgram(0);
  /* WARNING: Could not recover jumptable at 0x0056212d. Too many branches */
  /* WARNING: Treating indirect jump as call */
  (*pglfn_glBindBufferARB)(0x8893, 0);
  return;
}

/* ======================================================================
 * get8  (Ghidra `get8` @ 005a8ac0)
 * Signature: uint8_t __stdcall get8(stb_vorbis * arg1)
 * Calls: `fgetc`
 * Called by: `maybe_start_packet`, `start_decoder`
 */
/* get8(stb_vorbis*) */

uint get8(stb_vorbis *arg1)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;

  pbVar2 = *(byte **)(arg1 + 0x28);
  if (pbVar2 == (byte *)0x0) {
    uVar3 = fgetc(*(FILE **)(arg1 + 0x18));
    if (uVar3 != 0xffffffff) {
      return uVar3;
    }
  } else if (pbVar2 < *(byte **)(arg1 + 0x38)) {
    bVar1 = *pbVar2;
    *(byte **)(arg1 + 0x28) = pbVar2 + 1;
    return (uint)bVar1;
  }
  *(uint32_t *)(arg1 + 0x90) = 1;
  return 0;
}

/* ======================================================================
 * get32  (Ghidra `get32` @ 005a8f00)
 * Signature: uint8_t __stdcall get32(stb_vorbis * arg1)
 * Calls: `fgetc`
 * Called by: `start_decoder`, `stb_vorbis_stream_length_in_samples_part_24`
 */
/* get32(stb_vorbis*) */

uint get32(stb_vorbis *arg1)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;

  pbVar3 = *(byte **)(arg1 + 0x28);
  if (pbVar3 == (byte *)0x0) {
    uVar2 = fgetc(*(FILE **)(arg1 + 0x18));
    uVar5 = uVar2 & 0xff;
    if (uVar2 == 0xffffffff) {
      *(uint32_t *)(arg1 + 0x90) = 1;
      uVar5 = 0;
    }
    pbVar3 = *(byte **)(arg1 + 0x28);
  LAB_005a8f2b:
    if (pbVar3 != (byte *)0x0) {
      if (pbVar3 < *(byte **)(arg1 + 0x38))
        goto LAB_005a8f92;
      goto LAB_005a8f3a;
    }
    uVar2 = fgetc(*(FILE **)(arg1 + 0x18));
    iVar4 = (uVar2 & 0xff) << 8;
    if (uVar2 == 0xffffffff) {
      *(uint32_t *)(arg1 + 0x90) = 1;
      iVar4 = 0;
    }
    pbVar3 = *(byte **)(arg1 + 0x28);
  LAB_005a8fa3:
    uVar5 = uVar5 + iVar4;
    if (pbVar3 != (byte *)0x0)
      goto LAB_005a8f44;
    uVar2 = fgetc(*(FILE **)(arg1 + 0x18));
    iVar4 = (uVar2 & 0xff) << 0x10;
    if (uVar2 == 0xffffffff) {
      *(uint32_t *)(arg1 + 0x90) = 1;
      iVar4 = 0;
    }
    pbVar3 = *(byte **)(arg1 + 0x28);
  LAB_005a8fe1:
    uVar5 = uVar5 + iVar4;
    if (pbVar3 == (byte *)0x0) {
      uVar2 = fgetc(*(FILE **)(arg1 + 0x18));
      if (uVar2 == 0xffffffff)
        goto LAB_005a9008;
      goto LAB_005a8f70;
    }
  } else {
    if (pbVar3 < *(byte **)(arg1 + 0x38)) {
      bVar1 = *pbVar3;
      pbVar3 = pbVar3 + 1;
      *(byte **)(arg1 + 0x28) = pbVar3;
      uVar5 = (uint)bVar1;
      goto LAB_005a8f2b;
    }
    *(uint32_t *)(arg1 + 0x90) = 1;
    uVar5 = 0;
    if (pbVar3 < *(byte **)(arg1 + 0x38)) {
    LAB_005a8f92:
      bVar1 = *pbVar3;
      pbVar3 = pbVar3 + 1;
      *(byte **)(arg1 + 0x28) = pbVar3;
      iVar4 = (uint)bVar1 << 8;
      goto LAB_005a8fa3;
    }
  LAB_005a8f3a:
    *(uint32_t *)(arg1 + 0x90) = 1;
  LAB_005a8f44:
    if (pbVar3 < *(byte **)(arg1 + 0x38)) {
      bVar1 = *pbVar3;
      pbVar3 = pbVar3 + 1;
      *(byte **)(arg1 + 0x28) = pbVar3;
      iVar4 = (uint)bVar1 << 0x10;
      goto LAB_005a8fe1;
    }
    *(uint32_t *)(arg1 + 0x90) = 1;
  }
  if (*(byte **)(arg1 + 0x38) <= pbVar3) {
  LAB_005a9008:
    *(uint32_t *)(arg1 + 0x90) = 1;
    return uVar5;
  }
  bVar1 = *pbVar3;
  *(byte **)(arg1 + 0x28) = pbVar3 + 1;
  uVar2 = (uint)bVar1;
LAB_005a8f70:
  return uVar5 + uVar2 * 0x1000000;
}

/* ======================================================================
 * get8_packet_raw  (Ghidra `get8_packet_raw` @ 005aa470)
 * Signature: uint8_t __stdcall get8_packet_raw(stb_vorbis * arg1)
 * Calls: `fgetc`, `next_segment`
 * Called by: `start_decoder`
 */
/* get8_packet_raw(stb_vorbis*) */

uint get8_packet_raw(stb_vorbis *arg1)

{
  stb_vorbis sVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;

  sVar1 = arg1[0x6dc];
  if (sVar1 == (stb_vorbis)0x0) {
    if (*(int *)(arg1 + 0x6e4) != 0) {
      return 0xffffffff;
    }
    iVar4 = next_segment(arg1);
    if (iVar4 == 0) {
      return 0xffffffff;
    }
    sVar1 = arg1[0x6dc];
  }
  *(int *)(arg1 + 0x6f4) = *(int *)(arg1 + 0x6f4) + 1;
  arg1[0x6dc] = (stb_vorbis)((char)sVar1 + -1);
  pbVar3 = *(byte **)(arg1 + 0x28);
  if (pbVar3 == (byte *)0x0) {
    uVar5 = fgetc(*(FILE **)(arg1 + 0x18));
    if (uVar5 != 0xffffffff) {
      return uVar5 & 0xff;
    }
  } else if (pbVar3 < *(byte **)(arg1 + 0x38)) {
    bVar2 = *pbVar3;
    *(byte **)(arg1 + 0x28) = pbVar3 + 1;
    return (uint)bVar2;
  }
  *(uint32_t *)(arg1 + 0x90) = 1;
  return 0;
}

/* ======================================================================
 * get_bits  (Ghidra `get_bits` @ 005aa520)
 * Signature: uint8_t __stdcall get_bits(stb_vorbis * arg1, int arg2)
 * Calls: `fgetc`, `next_segment`
 * Called by: `start_decoder`, `vorbis_decode_initial`, `vorbis_decode_packet_rest`
 */
/* get_bits(stb_vorbis*, int) */

uint get_bits(stb_vorbis *arg1, int arg2)

{
  byte bVar1;
  stb_vorbis sVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;

  uVar4 = 0;
  iVar5 = *(int *)(arg1 + 0x6f0);
  if (-1 < iVar5) {
    if (iVar5 < arg2) {
      if (0x18 < arg2) {
        iVar5 = get_bits(arg1, 0x18);
        iVar6 = get_bits(arg1, arg2 + -0x18);
        return iVar6 * 0x1000000 + iVar5;
      }
      if (iVar5 == 0) {
        *(uint32_t *)(arg1 + 0x6ec) = 0;
      }
      do {
        sVar2 = arg1[0x6dc];
        if (sVar2 == (stb_vorbis)0x0) {
          if ((*(int *)(arg1 + 0x6e4) != 0) || (iVar5 = next_segment(arg1), iVar5 == 0)) {
            *(uint32_t *)(arg1 + 0x6f0) = 0xffffffff;
            return 0;
          }
          sVar2 = arg1[0x6dc];
        }
        pbVar3 = *(byte **)(arg1 + 0x28);
        *(int *)(arg1 + 0x6f4) = *(int *)(arg1 + 0x6f4) + 1;
        arg1[0x6dc] = (stb_vorbis)((char)sVar2 + -1);
        if (pbVar3 == (byte *)0x0) {
          uVar4 = fgetc(*(FILE **)(arg1 + 0x18));
          if (uVar4 == 0xffffffff)
            goto LAB_005aa604;
          iVar5 = *(int *)(arg1 + 0x6f0);
          iVar6 = (uVar4 & 0xff) << ((byte)iVar5 & 0x1f);
        } else if (pbVar3 < *(byte **)(arg1 + 0x38)) {
          bVar1 = *pbVar3;
          iVar5 = *(int *)(arg1 + 0x6f0);
          *(byte **)(arg1 + 0x28) = pbVar3 + 1;
          iVar6 = (uint)bVar1 << ((byte)iVar5 & 0x1f);
        } else {
        LAB_005aa604:
          *(uint32_t *)(arg1 + 0x90) = 1;
          iVar5 = *(int *)(arg1 + 0x6f0);
          iVar6 = 0;
        }
        iVar5 = iVar5 + 8;
        *(int *)(arg1 + 0x6f0) = iVar5;
        uVar7 = *(int *)(arg1 + 0x6ec) + iVar6;
        *(uint *)(arg1 + 0x6ec) = uVar7;
      } while (iVar5 < arg2);
      if (iVar5 < 0) {
        return 0;
      }
    } else {
      uVar7 = *(uint *)(arg1 + 0x6ec);
    }
    *(int *)(arg1 + 0x6f0) = iVar5 - arg2;
    uVar4 = (1 << ((byte)arg2 & 0x1f)) - 1U & uVar7;
    *(uint *)(arg1 + 0x6ec) = uVar7 >> ((byte)arg2 & 0x1f);
  }
  return uVar4;
}
