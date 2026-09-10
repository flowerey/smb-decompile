/* src/engine/core_07.c — 78 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "core_07.h"

/* ======================================================================
 * clearerr  (Ghidra `clearerr` @ 00451090)
 * Signature: void clearerr(FILE * __stream)
 * Calls: (none)
 * Called by: `clearerr__00825080`, `gzclearerr`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void clearerr(FILE *__stream)

{
  (*(code *)PTR_clearerr_008156c8)();
  return;
}

/* ======================================================================
 * find  (Ghidra `find` @ 00451120)
 * Signature: uint8_t find(char * arg1, ulong arg2, ulong arg3)
 * Calls: (none)
 * Called by: (none)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std__string_find(char *arg1,ulong arg2,ulong arg3)

{
  (*(code *)PTR_find_00815710)();
  return;
}

/* ======================================================================
 * compare  (Ghidra `compare` @ 00451140)
 * Signature: uint8_t compare(char * arg1)
 * Calls: (none)
 * Called by: (none)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std__string_compare(char *arg1)

{
  (*(code *)PTR_compare_00815720)();
  return;
}

/* ======================================================================
 * cosf  (Ghidra `cosf` @ 004514f0)
 * Signature: float cosf(float __x)
 * Calls: (none)
 * Called by: `Get2DScale`, `cosf__008252b0`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float cosf(float __x)

{
  float fVar1;
  
  fVar1 = (float)(*(code *)PTR_cosf_008158f8)();
  return fVar1;
}

/* ======================================================================
 * find__00451530  (Ghidra `find` @ 00451530)
 * Signature: uint8_t find(char arg1, ulong arg2)
 * Calls: (none)
 * Called by: (none)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std__string_find(char arg1,ulong arg2)

{
  (*(code *)PTR_find_00815918)();
  return;
}

/* ======================================================================
 * fclose  (Ghidra `fclose` @ 00451740)
 * Signature: int fclose(FILE * __stream)
 * Calls: (none)
 * Called by: `CCRC32__FileCRC`, `CCRC32__FileCRC__005b9fc0`, `CreateOpenGLShader`, `GSMBChapterData__ReloadData`, `SMBChapterDataSave`, `destroy`, `fclose__008253d8`, `gfxCreatePixelShader`, `gfxCreateVertexShader`, `vorbis_deinit`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_00815a20)();
  return iVar1;
}

/* ======================================================================
 * fdopen  (Ghidra `fdopen` @ 004517b0)
 * Signature: FILE * fdopen(int __fd, char * __modes)
 * Calls: (none)
 * Called by: `fdopen__00825410`, `gz_open`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fdopen(int __fd,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fdopen_00815a58)();
  return pFVar1;
}

/* ======================================================================
 * fflush  (Ghidra `fflush` @ 004518d0)
 * Signature: int fflush(FILE * __stream)
 * Calls: (none)
 * Called by: `DebugMsg`, `TWindow__TWindow`, `ThrowFatalError`, `ThrowFileNotFoundError`, `ThrowNonFatalError`, `fflush__008254a8`, `gzflush`, `main`, `png_default_flush`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fflush_00815ae8)();
  return iVar1;
}

/* ======================================================================
 * fopen  (Ghidra `fopen` @ 00451900)
 * Signature: FILE * fopen(char * __filename, char * __modes)
 * Calls: (none)
 * Called by: `CCRC32__FileCRC`, `CCRC32__FileCRC__005b9fc0`, `CreateOpenGLShader`, `GSMBChapterData__ReloadData`, `SMBChapterDataSave`, `fopen__008254c0`, `gfxCreatePixelShader`, `gfxCreateVertexShader`, `gz_open`, `stb_vorbis_decode_filename` (+1 more)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen_00815b00)();
  return pFVar1;
}

/* ======================================================================
 * exit  (Ghidra `exit` @ 00451970)
 * Signature: noreturn void exit(int __status)
 * Calls: (none)
 * Called by: `OpenGLGraphics__OpenGLGraphics`, `ThrowFatalError`, `ThrowFileNotFoundError`, `exit__008254f8`, `main`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_00815b38)();
  return;
}

/* ======================================================================
 * assign__00451aa0  (Ghidra `assign` @ 00451aa0)
 * Signature: uint8_t assign(char * arg1)
 * Calls: (none)
 * Called by: (none)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std__string_assign(char *arg1)

{
  (*(code *)PTR_assign_00815bd0)();
  return;
}

/* ======================================================================
 * chdir  (Ghidra `chdir` @ 00451b40)
 * Signature: int chdir(char * __path)
 * Calls: (none)
 * Called by: `chdir__008255e0`, `main`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int chdir(char *__path)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_chdir_00815c20)();
  return iVar1;
}

/* ======================================================================
 * fgetc  (Ghidra `fgetc` @ 00451c20)
 * Signature: int fgetc(FILE * __stream)
 * Calls: (none)
 * Called by: `codebook_decode_deinterleave_repeat`, `codebook_decode_scalar_raw`, `codebook_decode_start`, `fgetc__00825650`, `get32`, `get8`, `get8_packet_raw`, `get_bits`, `maybe_start_packet`, `start_decoder` (+8 more)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fgetc(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fgetc_00815c90)();
  return iVar1;
}

/* ======================================================================
 * closedir  (Ghidra `closedir` @ 00451c70)
 * Signature: int closedir(DIR * __dirp)
 * Calls: (none)
 * Called by: `closedir__00825670`, `locateOneElement`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int closedir(DIR *__dirp)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_closedir_00815cb8)();
  return iVar1;
}

/* ======================================================================
 * floor  (Ghidra `floor` @ 00451d10)
 * Signature: double floor(double __x)
 * Calls: (none)
 * Called by: `floor__008256b8`, `start_decoder`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double floor(double __x)

{
  double dVar1;
  
  dVar1 = (double)(*(code *)PTR_floor_00815d08)();
  return dVar1;
}

/* ======================================================================
 * cos  (Ghidra `cos` @ 00451df0)
 * Signature: double cos(double __x)
 * Calls: (none)
 * Called by: `SMBPalette__FindAnimatedObstacles`, `Transformation2DRot`, `Transformation2DSkew`, `cos__00825728`, `dct_iv_slow`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double cos(double __x)

{
  double dVar1;
  
  dVar1 = (double)(*(code *)PTR_cos_00815d78)();
  return dVar1;
}

/* ======================================================================
 * ferror  (Ghidra `ferror` @ 00451e10)
 * Signature: int ferror(FILE * __stream)
 * Calls: (none)
 * Called by: `check_header`, `ferror__00825738`, `gzread_part_1`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ferror(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_ferror_00815d88)();
  return iVar1;
}

/* ======================================================================
 * close  (Ghidra `close` @ 00451ea0)
 * Signature: int close(int __fd)
 * Calls: (none)
 * Called by: `File__File`, `File__File__005b7a70`, `MOJOSHADER_internal_include_open`, `close__00825780`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_00815dd0)();
  return iVar1;
}

/* ======================================================================
 * float32_unpack  (Ghidra `float32_unpack` @ 00451f38)
 * Signature: uint8_t __stdcall float32_unpack(uint arg1)
 * Calls: `ldexp`
 * Called by: `start_decoder`
 */
/* float32_unpack(unsigned int) */

float float32_unpack(uint arg1)

{
  double dVar1;
  
  dVar1 = (double)(arg1 & 0x1fffff);
  if ((int)arg1 < 0) {
    dVar1 = (double)((ulong)dVar1 ^ DAT_005de370 /* R:0.0f */);
  }
  dVar1 = ldexp((double)(float)dVar1,((arg1 & 0x7fe00000) >> 0x15) - 0x314);
  return (float)dVar1;
}

/* ======================================================================
 * failf  (Ghidra `failf` @ 0051a390)
 * Signature: uint8_t failf(void)
 * Calls: `errorlist_add_va`
 * Called by: `MOJOSHADER_assemble`, `MOJOSHADER_parse`, `arb1_texld`, `build_parsedata`, `check_label_register_constprop_79`, `determine_constants_arrays`, `emit_ARB1_BEM`, `emit_ARB1_BREAK`, `emit_ARB1_BREAKC`, `emit_ARB1_BREAKP` (+158 more)
 */
void failf(uint64_t arg1,uint64_t arg2,uint64_t arg3,uint64_t arg4,
          uint64_t arg5,uint64_t arg6,uint64_t arg7,uint64_t arg8,
          uint32_t *arg9,uint64_t arg10,uint64_t arg11,uint64_t arg12,
          uint64_t arg13,uint64_t arg14)

{
  char in_AL;
  uint32_t local_d0;
  uint32_t local_cc;
  uint8_t *local_c8;
  uint8_t *local_c0;
  uint8_t local_b8 [16];
  uint64_t local_a8;
  uint64_t local_a0;
  uint64_t local_98;
  uint64_t local_90;
  uint64_t local_88;
  uint64_t local_78;
  uint64_t local_68;
  uint64_t local_58;
  uint64_t local_48;
  uint64_t local_38;
  uint64_t local_28;
  uint64_t local_18;
  
  if (in_AL != '\0') {
    local_88 = arg1;
    local_78 = arg2;
    local_68 = arg3;
    local_58 = arg4;
    local_48 = arg5;
    local_38 = arg6;
    local_28 = arg7;
    local_18 = arg8;
  }
  *arg9 = 1;
  if (arg9[1] == 0) {
    local_c8 = &stack0x00000008;
    local_c0 = local_b8;
    local_d0 = 0x10;
    local_cc = 0x30;
    local_a8 = arg11;
    local_a0 = arg12;
    local_98 = arg13;
    local_90 = arg14;
    errorlist_add_va(*(uint64_t *)(arg9 + 0xea),0,arg9[8],arg10,&local_d0);
  }
  return;
}

/* ======================================================================
 * destroy_context  (Ghidra `destroy_context` @ 0051b180)
 * Signature: uint8_t destroy_context(void)
 * Calls: `buffer_destroy`, `errorlist_destroy`, `free_symbols`
 * Called by: `MOJOSHADER_parse`
 */
void destroy_context(long arg1)

{
  code *UNRECOVERED_JUMPTABLE;
  uint64_t uVar1;
  long lVar2;
  long lVar3;
  
  if (arg1 != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(arg1 + 0x10);
    uVar1 = *(uint64_t *)(arg1 + 0x18);
    buffer_destroy(*(uint64_t *)(arg1 + 0x58));
    buffer_destroy(*(uint64_t *)(arg1 + 0x60));
    buffer_destroy(*(uint64_t *)(arg1 + 0x68));
    buffer_destroy(*(uint64_t *)(arg1 + 0x70));
    buffer_destroy(*(uint64_t *)(arg1 + 0x78));
    buffer_destroy(*(uint64_t *)(arg1 + 0x80));
    buffer_destroy(*(uint64_t *)(arg1 + 0x88));
    lVar3 = *(long *)(arg1 + 0x3b8);
    while (lVar3 != 0) {
      lVar2 = *(long *)(lVar3 + 0x18);
      (*UNRECOVERED_JUMPTABLE)(lVar3,uVar1);
      lVar3 = lVar2;
    }
    lVar3 = *(long *)(arg1 + 0x378);
    while (lVar3 != 0) {
      lVar2 = *(long *)(lVar3 + 0x20);
      (*UNRECOVERED_JUMPTABLE)(lVar3,uVar1);
      lVar3 = lVar2;
    }
    lVar3 = *(long *)(arg1 + 0x3a0);
    while (lVar3 != 0) {
      lVar2 = *(long *)(lVar3 + 0x20);
      (*UNRECOVERED_JUMPTABLE)(lVar3,uVar1);
      lVar3 = lVar2;
    }
    lVar3 = *(long *)(arg1 + 0x3f0);
    while (lVar3 != 0) {
      lVar2 = *(long *)(lVar3 + 0x20);
      (*UNRECOVERED_JUMPTABLE)(lVar3,uVar1);
      lVar3 = lVar2;
    }
    lVar3 = *(long *)(arg1 + 0x420);
    while (lVar3 != 0) {
      lVar2 = *(long *)(lVar3 + 0x20);
      (*UNRECOVERED_JUMPTABLE)(lVar3,uVar1);
      lVar3 = lVar2;
    }
    lVar3 = *(long *)(arg1 + 0x450);
    while (lVar3 != 0) {
      lVar2 = *(long *)(lVar3 + 0x20);
      (*UNRECOVERED_JUMPTABLE)(lVar3,uVar1);
      lVar3 = lVar2;
    }
    lVar3 = *(long *)(arg1 + 0x458);
    while (lVar3 != 0) {
      lVar2 = *(long *)(lVar3 + 0x20);
      (*UNRECOVERED_JUMPTABLE)(lVar3,uVar1);
      lVar3 = lVar2;
    }
    errorlist_destroy(*(uint64_t *)(arg1 + 0x3a8));
    free_symbols(UNRECOVERED_JUMPTABLE,uVar1,*(uint64_t *)(arg1 + 0x470),
                 *(uint32_t *)(arg1 + 0x46c));
    lVar3 = *(long *)(arg1 + 0x4a0);
    if (lVar3 != 0) {
      (*UNRECOVERED_JUMPTABLE)(*(uint64_t *)(lVar3 + 8),uVar1);
      (*UNRECOVERED_JUMPTABLE)(*(uint64_t *)(lVar3 + 0x28),uVar1);
      free_symbols(UNRECOVERED_JUMPTABLE,uVar1,*(uint64_t *)(lVar3 + 0x18),
                   *(uint32_t *)(lVar3 + 0x14));
      (*UNRECOVERED_JUMPTABLE)(lVar3,uVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x0051b346. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(arg1,uVar1);
    return;
  }
  return;
}

/* ======================================================================
 * determine_constants_arrays  (Ghidra `determine_constants_arrays` @ 0051c510)
 * Signature: uint8_t determine_constants_arrays(void)
 * Calls: `failf`
 * Called by: `MOJOSHADER_parse`, `parse_source_token`
 */
void determine_constants_arrays(uint32_t *arg1)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  uint64_t uVar4;
  code *pcVar5;
  int *piVar6;
  long lVar7;
  bool bVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  uint32_t *puVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  int iVar17;
  uint uVar18;
  uint64_t auStack_60 [2];
  uint local_50 [2];
  int local_48 [2];
  int local_40;
  
  if (arg1[0x120] == 0) {
    iVar17 = arg1[0xec];
    arg1[0x120] = 1;
    if (1 < iVar17) {
      lVar7 = -((long)(iVar17 + 1) * 8 + 0x1eU & 0xfffffffffffffff0);
      lVar10 = *(long *)(arg1 + 0xee);
      plVar2 = (long *)((long)local_50 + lVar7);
      if (iVar17 < 1) {
LAB_0051c5a7:
        bVar8 = true;
        plVar2[iVar17] = 0;
        iVar9 = 0;
        do {
          if (iVar17 + -1 <= iVar9) {
            do {
              if (bVar8) {
                if (0 < iVar17) {
                  iVar9 = 0;
                  plVar11 = plVar2;
                  do {
                    lVar10 = *plVar11;
                    plVar1 = plVar11 + 1;
                    iVar9 = iVar9 + 1;
                    plVar11 = plVar11 + 1;
                    *(long *)(lVar10 + 0x18) = *plVar1;
                    iVar17 = arg1[0xec];
                  } while (iVar9 < iVar17);
                }
                *(long *)(arg1 + 0xee) = *plVar2;
                if (iVar17 < 0) {
                  return;
                }
                uVar16 = 0;
                local_48[0] = 0;
                uVar14 = 0xffffffff;
                uVar18 = 0xffffffff;
                do {
                  piVar6 = (int *)plVar2[uVar16];
                  if ((piVar6 == (int *)0x0) ||
                     (uVar13 = uVar14, local_50[0] = uVar18, *piVar6 == 0)) {
                    local_40 = (int)uVar14;
                    local_50[0] = (uint)uVar16;
                    uVar13 = uVar16 & 0xffffffff;
                    if (local_40 != -1) {
                      if ((piVar6 == (int *)0x0) ||
                         (piVar6[1] != *(int *)(plVar2[(int)uVar18] + 4) + 1)) {
                        if (local_48[0] != 0) {
                          uVar4 = *(uint64_t *)(arg1 + 6);
                          pcVar5 = *(code **)(arg1 + 2);
                          *(uint64_t *)((long)auStack_60 + lVar7) = 0x51c6c3;
                          puVar12 = (uint32_t *)(*pcVar5)(0x28,uVar4);
                          if (puVar12 == (uint32_t *)0x0) {
                            arg1[1] = 1;
                            *arg1 = 1;
                            return;
                          }
                          *puVar12 = 0;
                          lVar10 = plVar2[local_40];
                          lVar15 = plVar2[(int)uVar18];
                          iVar9 = *(int *)(lVar10 + 4);
                          puVar12[1] = iVar9;
                          iVar3 = *(int *)(lVar15 + 4);
                          *(long *)(puVar12 + 4) = lVar10;
                          puVar12[6] = 0;
                          puVar12[7] = 0xffffffff;
                          puVar12[2] = (iVar3 - iVar9) + 1;
                          *(uint64_t *)(puVar12 + 8) = *(uint64_t *)(arg1 + 0x116);
                          *(uint32_t **)(arg1 + 0x116) = puVar12;
                          uVar13 = (ulong)local_50[0];
                        }
                      }
                      else {
                        local_48[0] = local_48[0] + 1;
                        uVar13 = uVar14;
                      }
                    }
                  }
                  uVar16 = uVar16 + 1;
                  uVar14 = uVar13;
                  uVar18 = local_50[0];
                } while ((int)uVar16 <= iVar17);
                return;
              }
              iVar9 = 0;
              bVar8 = true;
            } while (iVar17 + -1 < 1);
          }
          plVar11 = (long *)((long)local_48 + (long)iVar9 * 8 + lVar7);
          lVar10 = plVar2[iVar9];
          lVar15 = *plVar11;
          if (*(int *)(lVar15 + 4) < *(int *)(lVar10 + 4)) {
            plVar2[iVar9] = lVar15;
            bVar8 = false;
            *plVar11 = lVar10;
          }
          iVar9 = iVar9 + 1;
        } while( true );
      }
      if (lVar10 != 0) {
        lVar15 = 0;
        do {
          *(long *)((long)plVar2 + lVar15) = lVar10;
          lVar10 = *(long *)(lVar10 + 0x18);
          if (lVar15 == (ulong)(iVar17 - 1) << 3) goto LAB_0051c5a7;
          lVar15 = lVar15 + 8;
        } while (lVar10 != 0);
      }
      *(uint64_t *)((long)auStack_60 + lVar7) = 0x51c614;
      failf(arg1,"%s","BUG: mismatched constant list and count");
    }
  }
  return;
}

/* ======================================================================
 * floatstr_constprop_59  (Ghidra `floatstr.constprop.59` @ 0051cdb0)
 * Signature: uint8_t floatstr.constprop.59(void)
 * Calls: `failf`, `snprintf`, `strchr`, `strlen`
 * Called by: `emit_ARB1_DEF`, `emit_ARB1_const_array`, `emit_D3D_DEF`, `emit_GLSL_DEF`
 */
void floatstr_constprop_59(float arg1,uint64_t arg2,char *arg3,int arg4)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  size_t sVar4;
  char *pcVar5;
  bool bVar6;
  
  iVar2 = snprintf(arg3,0x20,"%f",(double)arg1);
  if (0x1f < (long)iVar2 + 2U) {
    failf(arg2,"%s","BUG: internal buffer is too small");
    return;
  }
  pcVar3 = strchr(arg3,0x2e);
  if (pcVar3 == (char *)0x0) {
    if (arg4 != 0) {
      sVar4 = strlen(arg3);
      arg3 = arg3 + sVar4;
      arg3[0] = '.';
      arg3[1] = '0';
      arg3[2] = '\0';
    }
  }
  else {
    pcVar1 = arg3 + iVar2;
    do {
      pcVar5 = pcVar1;
      if (pcVar3 == pcVar5 + -1) goto LAB_0051ce50;
      pcVar1 = pcVar5 + -1;
    } while (pcVar5[-1] == '0');
    bVar6 = pcVar3 == pcVar5;
    pcVar3 = pcVar5;
    if (bVar6) {
LAB_0051ce50:
      pcVar5 = pcVar3;
      if (arg4 != 0) {
        pcVar5 = pcVar3 + 2;
      }
    }
    *pcVar5 = '\0';
  }
  return;
}

/* ======================================================================
 * check_label_register_constprop_79  (Ghidra `check_label_register.constprop.79` @ 0051d0b0)
 * Signature: uint8_t check_label_register.constprop.79(void)
 * Calls: `failf`
 * Called by: `state_CALL`, `state_CALLNZ`, `state_LABEL`
 */
void check_label_register_constprop_79(long arg1,uint64_t arg2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar2 = *(int *)(arg1 + 0x118);
  if (*(int *)(arg1 + 0x134) != 0x12) {
    failf(arg1,"%s with a non-label register specified",arg2);
  }
  bVar1 = *(byte *)(arg1 + 0xd5);
  uVar4 = (uint)*(byte *)(arg1 + 0xd4) << 0x10;
  uVar3 = 1;
  if (bVar1 != 0xff) {
    uVar3 = (uint)bVar1;
  }
  if ((uVar3 | uVar4) < 0x20000) {
    failf(arg1,"%s not supported in Shader Model 1",arg2);
    bVar1 = *(byte *)(arg1 + 0xd5);
    uVar4 = (uint)*(byte *)(arg1 + 0xd4) << 0x10;
  }
  uVar3 = 1;
  if (bVar1 != 0xff) {
    uVar3 = (uint)bVar1;
  }
  if (((uVar3 | uVar4) < 0x20001) || (iVar2 < 0x800)) {
    if (iVar2 < 0x10) {
      return;
    }
  }
  else {
    failf(arg1,"%s","label register number must be <= 2047");
  }
  failf(arg1,"%s","label register number must be <= 15");
  return;
}

/* ======================================================================
 * build_parsedata  (Ghidra `build_parsedata` @ 00520580)
 * Signature: uint8_t build_parsedata(void)
 * Calls: `buffer_merge`, `errorlist_count`, `errorlist_flatten`, `failf`, `memcpy`, `memset`
 * Called by: `MOJOSHADER_parse`
 */
int * build_parsedata(int *arg1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  uint32_t uVar5;
  int *piVar6;
  long lVar7;
  uint64_t *puVar8;
  uint64_t uVar9;
  void *__dest;
  uint *__s;
  uint *puVar10;
  ulong uVar11;
  ulong uVar12;
  uint64_t *puVar13;
  uint32_t *puVar14;
  uint *puVar15;
  int *piVar16;
  uint *puVar17;
  int iVar18;
  long lVar19;
  uint32_t *puVar20;
  bool bVar21;
  byte bVar22;
  uint32_t *local_b8;
  int local_b0;
  uint32_t *local_a8;
  int local_9c;
  uint64_t *local_98;
  uint64_t local_88;
  uint64_t local_78;
  uint64_t local_70;
  uint64_t local_68;
  uint64_t local_60;
  uint64_t local_58;
  uint64_t local_50;
  uint64_t local_48 [3];
  
  bVar22 = 0;
  local_48[0] = 0;
  if (arg1[1] != 0) {
    return (int *)MOJOSHADER_out_of_mem_data;
  }
  piVar6 = (int *)(**(code **)(arg1 + 2))(0xc0,*(uint64_t *)(arg1 + 6));
  if (piVar6 == (int *)0x0) {
    arg1[1] = 1;
    *arg1 = 1;
    return (int *)MOJOSHADER_out_of_mem_data;
  }
  bVar21 = ((ulong)piVar6 & 1) != 0;
  uVar12 = 0xc0;
  piVar16 = piVar6;
  if (bVar21) {
    *(uint8_t *)piVar6 = 0;
    piVar16 = (int *)((long)piVar6 + 1);
    uVar12 = 0xbf;
  }
  if (((ulong)piVar16 & 2) != 0) {
    *(uint16_t *)piVar16 = 0;
    uVar12 = (ulong)((int)uVar12 - 2);
    piVar16 = (int *)((long)piVar16 + 2);
  }
  if (((ulong)piVar16 & 4) != 0) {
    *piVar16 = 0;
    uVar12 = (ulong)((int)uVar12 - 4);
    piVar16 = piVar16 + 1;
  }
  for (uVar11 = uVar12 >> 3; uVar11 != 0; uVar11 = uVar11 - 1) {
    piVar16[0] = 0;
    piVar16[1] = 0;
    piVar16 = piVar16 + (ulong)bVar22 * -4 + 2;
  }
  if ((uVar12 & 4) != 0) {
    *piVar16 = 0;
    piVar16 = piVar16 + 1;
  }
  if ((uVar12 & 2) != 0) {
    *(uint16_t *)piVar16 = 0;
    piVar16 = (int *)((long)piVar16 + 2);
  }
  if (bVar21) {
    *(uint8_t *)piVar16 = 0;
  }
  local_88 = 0;
  if (*arg1 == 0) {
    local_78 = *(uint64_t *)(arg1 + 0x16);
    local_70 = *(uint64_t *)(arg1 + 0x18);
    local_68 = *(uint64_t *)(arg1 + 0x1a);
    local_60 = *(uint64_t *)(arg1 + 0x1c);
    local_58 = *(uint64_t *)(arg1 + 0x1e);
    local_50 = *(uint64_t *)(arg1 + 0x20);
    local_88 = buffer_merge(&local_78,6,local_48);
    if (*arg1 != 0) goto LAB_0052063c;
    local_98 = (uint64_t *)
               (**(code **)(arg1 + 2))((long)arg1[0xec] * 0x18,*(uint64_t *)(arg1 + 6));
    if (local_98 == (uint64_t *)0x0) {
      arg1[1] = 1;
      *arg1 = 1;
      goto LAB_00520645;
    }
    puVar8 = *(uint64_t **)(arg1 + 0xee);
    if (arg1[0xec] < 1) {
LAB_00520ad2:
      iVar4 = *arg1;
    }
    else {
      if (puVar8 != (uint64_t *)0x0) {
        iVar4 = 0;
        puVar13 = local_98;
        do {
          iVar4 = iVar4 + 1;
          *puVar13 = *puVar8;
          puVar13[1] = puVar8[1];
          puVar13[2] = puVar8[2];
          puVar8 = (uint64_t *)puVar8[3];
          if (arg1[0xec] <= iVar4) goto LAB_00520ad2;
          puVar13 = puVar13 + 3;
        } while (puVar8 != (uint64_t *)0x0);
      }
      failf(arg1,"%s","BUG: mismatched constant list and count");
      iVar4 = *arg1;
    }
    if (iVar4 != 0) goto LAB_00520645;
    iVar4 = arg1[0xf0];
    local_b8 = (uint32_t *)(**(code **)(arg1 + 2))((long)iVar4 * 0x18 & 0xffffffff);
    if (local_b8 == (uint32_t *)0x0) {
      arg1[1] = 1;
      *arg1 = 1;
      goto LAB_0052064e;
    }
    memset(local_b8,0,(long)iVar4 * 0x18);
    iVar4 = 0;
    puVar14 = local_b8;
    for (lVar7 = *(long *)(arg1 + 0x116); lVar7 != 0; lVar7 = *(long *)(lVar7 + 0x20)) {
      if ((*(int *)(lVar7 + 0x18) != 0) &&
         (lVar19 = (**(code **)(*(long *)(arg1 + 0x32) + 0x60))
                             (arg1,*(uint32_t *)(lVar7 + 4),*(uint32_t *)(lVar7 + 8)),
         lVar19 != 0)) {
        *puVar14 = 0;
        puVar14[1] = *(uint32_t *)(lVar7 + 4);
        puVar14[2] = *(uint32_t *)(lVar7 + 8);
        lVar3 = *(long *)(lVar7 + 0x10);
        *(long *)(puVar14 + 4) = lVar19;
        iVar4 = iVar4 + 1;
        puVar14[3] = (uint)(lVar3 != 0);
        puVar14 = puVar14 + 6;
      }
    }
    iVar18 = arg1[0xf0];
    piVar16 = *(int **)(arg1 + 0xfc);
    if (iVar4 < iVar18) {
      if (piVar16 != (int *)0x0) {
        uVar5 = 0;
        do {
          iVar1 = *piVar16;
          iVar2 = piVar16[1];
          if (iVar1 == 7) {
            uVar5 = 1;
LAB_00520c16:
            *puVar14 = uVar5;
            puVar14[1] = iVar2;
            puVar14[2] = 0;
            iVar4 = iVar4 + 1;
            uVar9 = (**(code **)(*(long *)(arg1 + 0x32) + 0x58))(arg1,*piVar16,piVar16[1]);
            *(uint64_t *)(puVar14 + 4) = uVar9;
            iVar18 = arg1[0xf0];
            puVar14 = puVar14 + 6;
          }
          else {
            if (iVar1 == 0xe) {
              uVar5 = 2;
              goto LAB_00520c16;
            }
            if (iVar1 != 2) {
              failf(arg1,"%s","unknown uniform datatype");
              goto LAB_00520c16;
            }
            uVar5 = 0;
            if (*(long *)(piVar16 + 6) == 0) goto LAB_00520c16;
          }
          piVar16 = *(int **)(piVar16 + 8);
          if (iVar18 <= iVar4) goto LAB_00520d0d;
        } while (piVar16 != (int *)0x0);
      }
      failf(arg1,"%s","BUG: mismatched uniform list and count");
      iVar4 = *arg1;
    }
    else {
LAB_00520d0d:
      iVar4 = *arg1;
    }
    if (iVar4 != 0) goto LAB_0052064e;
    if (arg1[0xfe] != 0) {
      uVar12 = (long)arg1[0xfe] << 4;
      __s = (uint *)(**(code **)(arg1 + 2))(uVar12 & 0xffffffff);
      if (__s == (uint *)0x0) {
        arg1[1] = 1;
        *arg1 = 1;
        local_b0 = 0;
      }
      else {
        puVar10 = *(uint **)(arg1 + 0x108);
        memset(__s,0,uVar12);
        iVar4 = arg1[0xfe];
        if (iVar4 < 1) {
          iVar4 = *arg1;
          local_b0 = 0;
        }
        else {
          if (puVar10 == (uint *)0x0) {
            local_b0 = 0;
          }
          else {
            iVar18 = 0;
            local_b0 = 0;
            puVar17 = __s;
            do {
              if (*puVar10 < 0x12) {
                uVar12 = 1L << ((byte)*puVar10 & 0x3f);
                if ((uVar12 & 0x2000a) == 0) {
                  if ((uVar12 & 0x370) == 0) goto LAB_00520d80;
                }
                else if (arg1[0x34] != 1) goto LAB_00520d8d;
              }
              else {
LAB_00520d80:
                if (arg1[0x34] == 1) {
                  failf(arg1,"%s","BUG: pixel shader with vertex attributes");
                  iVar4 = arg1[0xfe];
                }
                else {
LAB_00520d8d:
                  *puVar17 = puVar10[2];
                  puVar17[1] = puVar10[3];
                  uVar9 = (**(code **)(*(long *)(arg1 + 0x32) + 0x58))
                                    (arg1,*puVar10,puVar10[1]);
                  local_b0 = local_b0 + 1;
                  *(uint64_t *)(puVar17 + 2) = uVar9;
                  puVar17 = puVar17 + 4;
                  iVar4 = arg1[0xfe];
                }
              }
              iVar18 = iVar18 + 1;
              puVar10 = *(uint **)(puVar10 + 8);
              if (iVar4 <= iVar18) {
                iVar4 = *arg1;
                goto LAB_00520ec6;
              }
            } while (puVar10 != (uint *)0x0);
          }
          failf(arg1,"%s","BUG: mismatched attribute list and count");
          iVar4 = *arg1;
        }
LAB_00520ec6:
        if (iVar4 == 0) {
          if (arg1[0xfe] == 0) goto LAB_0052111b;
          uVar12 = (long)arg1[0xfe] << 4;
          puVar10 = (uint *)(**(code **)(arg1 + 2))(uVar12 & 0xffffffff);
          if (puVar10 == (uint *)0x0) {
            arg1[1] = 1;
            *arg1 = 1;
            local_9c = 0;
          }
          else {
            puVar17 = *(uint **)(arg1 + 0x108);
            memset(puVar10,0,uVar12);
            iVar4 = arg1[0xfe];
            if (iVar4 < 1) {
              iVar4 = *arg1;
              local_9c = 0;
            }
            else {
              if (puVar17 == (uint *)0x0) {
                local_9c = 0;
              }
              else {
                iVar18 = 0;
                local_9c = 0;
                puVar15 = puVar10;
                do {
                  if ((*puVar17 < 10) && ((1L << ((byte)*puVar17 & 0x3f) & 0x370U) != 0)) {
                    *puVar15 = puVar17[2];
                    puVar15[1] = puVar17[3];
                    uVar9 = (**(code **)(*(long *)(arg1 + 0x32) + 0x58))
                                      (arg1,*puVar17,puVar17[1]);
                    local_9c = local_9c + 1;
                    *(uint64_t *)(puVar15 + 2) = uVar9;
                    puVar15 = puVar15 + 4;
                    iVar4 = arg1[0xfe];
                  }
                  iVar18 = iVar18 + 1;
                  puVar17 = *(uint **)(puVar17 + 8);
                  if (iVar4 <= iVar18) {
                    iVar4 = *arg1;
                    goto LAB_00520fab;
                  }
                } while (puVar17 != (uint *)0x0);
              }
              failf(arg1,"%s","BUG: mismatched attribute list and count");
              iVar4 = *arg1;
            }
LAB_00520fab:
            if (iVar4 == 0) goto LAB_00520fb3;
          }
          local_a8 = (uint32_t *)0x0;
          goto LAB_0052066d;
        }
      }
      goto LAB_00520659;
    }
    __s = (uint *)0x0;
    local_b0 = 0;
LAB_0052111b:
    local_9c = 0;
    puVar10 = (uint *)0x0;
LAB_00520fb3:
    iVar4 = arg1[0x10a];
    local_a8 = (uint32_t *)(**(code **)(arg1 + 2))((long)iVar4 << 4 & 0xffffffff);
    if (local_a8 == (uint32_t *)0x0) {
      arg1[1] = 1;
      *arg1 = 1;
    }
    else {
      puVar14 = *(uint32_t **)(arg1 + 0x114);
      memset(local_a8,0,(long)iVar4 << 4);
      if (0 < arg1[0x10a]) {
        if (puVar14 != (uint32_t *)0x0) {
          uVar5 = 0;
          iVar4 = 0;
          puVar20 = local_a8;
          do {
            iVar18 = puVar14[3];
            if (iVar18 == 3) {
              uVar5 = 1;
            }
            else if (iVar18 == 4) {
              uVar5 = 2;
            }
            else if (iVar18 == 2) {
              uVar5 = 0;
            }
            else {
              failf(arg1,"%s","Unknown sampler type");
            }
            *puVar20 = uVar5;
            iVar4 = iVar4 + 1;
            puVar20[1] = puVar14[1];
            uVar9 = (**(code **)(*(long *)(arg1 + 0x32) + 0x58))(arg1,*puVar14,puVar14[1]);
            *(uint64_t *)(puVar20 + 2) = uVar9;
            puVar14 = *(uint32_t **)(puVar14 + 8);
            if (arg1[0x10a] <= iVar4) goto LAB_0052066d;
            puVar20 = puVar20 + 4;
          } while (puVar14 != (uint32_t *)0x0);
        }
        failf(arg1,"%s","BUG: mismatched sampler list and count");
      }
    }
  }
  else {
LAB_0052063c:
    local_98 = (uint64_t *)0x0;
LAB_00520645:
    local_b8 = (uint32_t *)0x0;
LAB_0052064e:
    local_b0 = 0;
    __s = (uint *)0x0;
LAB_00520659:
    local_9c = 0;
    puVar10 = (uint *)0x0;
    local_a8 = (uint32_t *)0x0;
  }
LAB_0052066d:
  __dest = (void *)0x0;
  iVar4 = errorlist_count(*(uint64_t *)(arg1 + 0xea));
  lVar7 = errorlist_flatten(*(uint64_t *)(arg1 + 0xea));
  if (*arg1 == 0) {
    if (arg1[0x12] == 0) {
LAB_005208cb:
      *(uint64_t *)(piVar6 + 4) = **(uint64_t **)(arg1 + 0x32);
      *(uint64_t *)(piVar6 + 6) = local_88;
      piVar6[8] = (int)local_48[0];
      piVar6[9] = arg1[0xa9];
      piVar6[10] = arg1[0x34];
      piVar6[0xb] = (uint)*(byte *)(arg1 + 0x35);
      piVar6[0xc] = (uint)*(byte *)((long)arg1 + 0xd5);
      piVar6[0xd] = arg1[0xf0];
      *(uint32_t **)(piVar6 + 0xe) = local_b8;
      piVar6[0x10] = arg1[0xec];
      *(uint64_t **)(piVar6 + 0x12) = local_98;
      iVar18 = arg1[0x10a];
      piVar6[0x18] = local_b0;
      *(uint **)(piVar6 + 0x1a) = __s;
      *(uint **)(piVar6 + 0x1e) = puVar10;
      piVar6[0x14] = iVar18;
      *(uint32_t **)(piVar6 + 0x16) = local_a8;
      piVar6[0x1c] = local_9c;
      piVar6[0x20] = arg1[0x12];
      *(void **)(piVar6 + 0x22) = __dest;
      piVar6[0x24] = arg1[0x11b];
      *(uint64_t *)(piVar6 + 0x26) = *(uint64_t *)(arg1 + 0x11c);
      *(uint64_t *)(piVar6 + 0x28) = *(uint64_t *)(arg1 + 0x128);
      arg1[0x11c] = 0;
      arg1[0x11d] = 0;
      arg1[0x128] = 0;
      arg1[0x129] = 0;
      arg1[0x11b] = 0;
      goto LAB_005209b7;
    }
    iVar18 = arg1[0x12] * 0xc;
    __dest = (void *)(**(code **)(arg1 + 2))(iVar18,*(uint64_t *)(arg1 + 6));
    if (__dest == (void *)0x0) {
      arg1[1] = 1;
      *arg1 = 1;
    }
    else {
      memcpy(__dest,*(void **)(arg1 + 0x10),(long)iVar18);
      if (*arg1 == 0) goto LAB_005208cb;
    }
  }
  (**(code **)(arg1 + 4))(local_88,*(uint64_t *)(arg1 + 6));
  (**(code **)(arg1 + 4))(local_98,*(uint64_t *)(arg1 + 6));
  (**(code **)(arg1 + 4))(__dest,*(uint64_t *)(arg1 + 6));
  if (local_b8 != (uint32_t *)0x0) {
    if (0 < arg1[0xf0]) {
      iVar18 = 0;
      puVar14 = local_b8;
      do {
        iVar18 = iVar18 + 1;
        (**(code **)(arg1 + 4))(*(uint64_t *)(puVar14 + 4),*(uint64_t *)(arg1 + 6));
        puVar14 = puVar14 + 6;
      } while (iVar18 < arg1[0xf0]);
    }
    (**(code **)(arg1 + 4))(local_b8,*(uint64_t *)(arg1 + 6));
  }
  if (__s != (uint *)0x0) {
    if (local_b0 != 0) {
      lVar19 = 0;
      do {
        lVar3 = lVar19 + 8;
        lVar19 = lVar19 + 0x10;
        (**(code **)(arg1 + 4))(*(uint64_t *)((long)__s + lVar3),*(uint64_t *)(arg1 + 6));
      } while (lVar19 != ((ulong)(local_b0 - 1) + 1) * 0x10);
    }
    (**(code **)(arg1 + 4))(__s,*(uint64_t *)(arg1 + 6));
  }
  if (puVar10 != (uint *)0x0) {
    if (local_9c != 0) {
      lVar19 = 0;
      do {
        lVar3 = lVar19 + 8;
        lVar19 = lVar19 + 0x10;
        (**(code **)(arg1 + 4))
                  (*(uint64_t *)((long)puVar10 + lVar3),*(uint64_t *)(arg1 + 6));
      } while (lVar19 != ((ulong)(local_9c - 1) + 1) * 0x10);
    }
    (**(code **)(arg1 + 4))(puVar10,*(uint64_t *)(arg1 + 6));
  }
  if (local_a8 != (uint32_t *)0x0) {
    if (0 < arg1[0x10a]) {
      iVar18 = 0;
      puVar14 = local_a8;
      do {
        iVar18 = iVar18 + 1;
        (**(code **)(arg1 + 4))(*(uint64_t *)(puVar14 + 2),*(uint64_t *)(arg1 + 6));
        puVar14 = puVar14 + 4;
      } while (iVar18 < arg1[0x10a]);
    }
    (**(code **)(arg1 + 4))(local_a8,*(uint64_t *)(arg1 + 6));
  }
  if (arg1[1] != 0) {
    if (0 < iVar4) {
      lVar19 = 0;
      do {
        (**(code **)(arg1 + 4))(*(uint64_t *)(lVar7 + 8 + lVar19),*(uint64_t *)(arg1 + 6))
        ;
        puVar8 = (uint64_t *)(lVar7 + lVar19);
        lVar19 = lVar19 + 0x18;
        (**(code **)(arg1 + 4))(*puVar8,*(uint64_t *)(arg1 + 6));
      } while (lVar19 != ((ulong)(iVar4 - 1) * 3 + 3) * 8);
    }
    (**(code **)(arg1 + 4))(lVar7,*(uint64_t *)(arg1 + 6));
    (**(code **)(arg1 + 4))(piVar6,*(uint64_t *)(arg1 + 6));
    return (int *)MOJOSHADER_out_of_mem_data;
  }
LAB_005209b7:
  *(long *)(piVar6 + 2) = lVar7;
  *piVar6 = iVar4;
  *(uint64_t *)(piVar6 + 0x2a) = *(uint64_t *)(arg1 + 2);
  *(uint64_t *)(piVar6 + 0x2c) = *(uint64_t *)(arg1 + 4);
  *(uint64_t *)(piVar6 + 0x2e) = *(uint64_t *)(arg1 + 6);
  return piVar6;
}

/* ======================================================================
 * failf__0052b7d0  (Ghidra `failf` @ 0052b7d0)
 * Signature: uint8_t failf(void)
 * Calls: `errorlist_add_va`, `failf`
 * Called by: (none)
 */
void failf(uint64_t arg1,uint64_t arg2,uint64_t arg3,uint64_t arg4,
          uint64_t arg5,uint64_t arg6,uint64_t arg7,uint64_t arg8,
          uint32_t *arg9,uint64_t arg10,uint64_t arg11,uint64_t arg12,
          uint64_t arg13,uint64_t arg14)

{
  char in_AL;
  uint32_t local_d0;
  uint32_t local_cc;
  uint8_t *local_c8;
  uint8_t *local_c0;
  uint8_t local_b8 [16];
  uint64_t local_a8;
  uint64_t local_a0;
  uint64_t local_98;
  uint64_t local_90;
  uint64_t local_88;
  uint64_t local_78;
  uint64_t local_68;
  uint64_t local_58;
  uint64_t local_48;
  uint64_t local_38;
  uint64_t local_28;
  uint64_t local_18;
  
  if (in_AL != '\0') {
    local_88 = arg1;
    local_78 = arg2;
    local_68 = arg3;
    local_58 = arg4;
    local_48 = arg5;
    local_38 = arg6;
    local_28 = arg7;
    local_18 = arg8;
  }
  *arg9 = 1;
  if (arg9[1] == 0) {
    local_c8 = &stack0x00000008;
    local_d0 = 0x10;
    local_cc = 0x30;
    local_c0 = local_b8;
    local_a8 = arg11;
    local_a0 = arg12;
    local_98 = arg13;
    local_90 = arg14;
    errorlist_add_va(*(uint64_t *)(arg9 + 0xc),*(uint64_t *)(arg9 + 8),arg9[10],
                     arg10,&local_d0);
  }
  return;
}

/* ======================================================================
 * check_token_segment_isra_6  (Ghidra `check_token_segment.isra.6` @ 0052b880)
 * Signature: uint8_t check_token_segment.isra.6(void)
 * Calls: `strlen`, `strncasecmp`
 * Called by: `parse_register_name_part_13`
 */
uint64_t check_token_segment_isra_6(uint64_t *arg1,uint *arg2,char *arg3)

{
  char *__s1;
  int iVar1;
  size_t __n;
  uint64_t uVar2;
  
  uVar2 = 0;
  __n = strlen(arg3);
  if (__n <= *arg2) {
    __s1 = (char *)*arg1;
    iVar1 = strncasecmp(__s1,arg3,__n);
    if (iVar1 == 0) {
      uVar2 = 1;
      *arg1 = __s1 + __n;
      *arg2 = *arg2 - (int)__n;
    }
  }
  return uVar2;
}

/* ======================================================================
 * build_failed_assembly_part_14  (Ghidra `build_failed_assembly.part.14` @ 0052b910)
 * Signature: uint8_t build_failed_assembly.part.14(void)
 * Calls: `errorlist_count`, `errorlist_flatten`
 * Called by: `MOJOSHADER_assemble`
 */
uint64_t * build_failed_assembly_part_14(uint32_t *arg1)

{
  uint32_t uVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  ulong uVar4;
  ulong uVar5;
  uint8_t *puVar6;
  uint64_t *puVar7;
  bool bVar8;
  byte bVar9;
  
  bVar9 = 0;
  puVar2 = (uint64_t *)(**(code **)(arg1 + 2))(0xc0,*(uint64_t *)(arg1 + 6));
  if (puVar2 == (uint64_t *)0x0) {
    arg1[1] = 1;
    *arg1 = 1;
    return (uint64_t *)MOJOSHADER_out_of_mem_data;
  }
  bVar8 = ((ulong)puVar2 & 1) != 0;
  uVar5 = 0xc0;
  puVar7 = puVar2;
  if (bVar8) {
    *(uint8_t *)puVar2 = 0;
    puVar7 = (uint64_t *)((long)puVar2 + 1);
    uVar5 = 0xbf;
  }
  if (((ulong)puVar7 & 2) != 0) {
    *(uint16_t *)puVar7 = 0;
    uVar5 = (ulong)((int)uVar5 - 2);
    puVar7 = (uint64_t *)((long)puVar7 + 2);
  }
  if (((ulong)puVar7 & 4) != 0) {
    *(uint32_t *)puVar7 = 0;
    uVar5 = (ulong)((int)uVar5 - 4);
    puVar7 = (uint64_t *)((long)puVar7 + 4);
  }
  for (uVar4 = uVar5 >> 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar7 = 0;
    puVar7 = puVar7 + (ulong)bVar9 * -2 + 1;
  }
  if ((uVar5 & 4) != 0) {
    *(uint32_t *)puVar7 = 0;
    puVar7 = (uint64_t *)((long)puVar7 + 4);
  }
  if ((uVar5 & 2) != 0) {
    *(uint16_t *)puVar7 = 0;
    puVar7 = (uint64_t *)((long)puVar7 + 2);
  }
  if (bVar8) {
    *(uint8_t *)puVar7 = 0;
  }
  puVar2[0x15] = *(uint64_t *)(arg1 + 2);
  puVar2[0x16] = *(uint64_t *)(arg1 + 4);
  puVar2[0x17] = *(uint64_t *)(arg1 + 6);
  uVar1 = errorlist_count(*(uint64_t *)(arg1 + 0xc));
  *(uint32_t *)puVar2 = uVar1;
  uVar3 = errorlist_flatten(*(uint64_t *)(arg1 + 0xc));
  puVar2[1] = uVar3;
  puVar6 = (uint8_t *)puVar2;
  if (arg1[1] != 0) {
    (**(code **)(arg1 + 4))(uVar3,*(uint64_t *)(arg1 + 6));
    puVar6 = MOJOSHADER_out_of_mem_data;
    (**(code **)(arg1 + 4))(puVar2,*(uint64_t *)(arg1 + 6));
  }
  return (uint64_t *)puVar6;
}

/* ======================================================================
 * errorlist_create  (Ghidra `errorlist_create` @ 00530e90)
 * Signature: uint8_t errorlist_create(void)
 * Calls: (none)
 * Called by: `MOJOSHADER_assemble`, `MOJOSHADER_parse`, `MOJOSHADER_preprocess`
 */
uint64_t * errorlist_create(code *arg1,uint64_t arg2,uint64_t arg3)

{
  uint64_t *puVar1;
  ulong uVar2;
  ulong uVar3;
  uint64_t *puVar4;
  bool bVar5;
  byte bVar6;
  
  bVar6 = 0;
  puVar1 = (uint64_t *)(*arg1)(0x48,arg3);
  if (puVar1 != (uint64_t *)0x0) {
    bVar5 = ((ulong)puVar1 & 1) != 0;
    uVar3 = 0x48;
    puVar4 = puVar1;
    if (bVar5) {
      *(uint8_t *)puVar1 = 0;
      puVar4 = (uint64_t *)((long)puVar1 + 1);
      uVar3 = 0x47;
    }
    if (((ulong)puVar4 & 2) != 0) {
      *(uint16_t *)puVar4 = 0;
      uVar3 = (ulong)((int)uVar3 - 2);
      puVar4 = (uint64_t *)((long)puVar4 + 2);
    }
    if (((ulong)puVar4 & 4) != 0) {
      *(uint32_t *)puVar4 = 0;
      uVar3 = (ulong)((int)uVar3 - 4);
      puVar4 = (uint64_t *)((long)puVar4 + 4);
    }
    for (uVar2 = uVar3 >> 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar4 = 0;
      puVar4 = puVar4 + (ulong)bVar6 * -2 + 1;
    }
    if ((uVar3 & 4) != 0) {
      *(uint32_t *)puVar4 = 0;
      puVar4 = (uint64_t *)((long)puVar4 + 4);
    }
    if ((uVar3 & 2) != 0) {
      *(uint16_t *)puVar4 = 0;
      puVar4 = (uint64_t *)((long)puVar4 + 2);
    }
    if (bVar5) {
      *(uint8_t *)puVar4 = 0;
    }
    puVar1[4] = puVar1;
    puVar1[6] = arg1;
    puVar1[7] = arg2;
    puVar1[8] = arg3;
  }
  return puVar1;
}

/* ======================================================================
 * errorlist_add_va  (Ghidra `errorlist_add_va` @ 00530fa0)
 * Signature: uint8_t errorlist_add_va(void)
 * Calls: `strcpy`, `strlen`, `vsnprintf`
 * Called by: `errorlist_add_fmt`, `failf`, `failf__0052b7d0`
 */
uint32_t
errorlist_add_va(long arg1,char *arg2,uint32_t arg3,char *arg4,uint64_t *arg5)

{
  uint uVar1;
  uint64_t *puVar2;
  size_t sVar3;
  char *__dest;
  char *__dest_00;
  uint32_t uVar4;
  char local_d8 [136];
  uint64_t local_50;
  uint64_t local_48;
  uint64_t local_40;
  
  puVar2 = (uint64_t *)(**(code **)(arg1 + 0x30))(0x20,*(uint64_t *)(arg1 + 0x40));
  uVar4 = 0;
  if (puVar2 != (uint64_t *)0x0) {
    if (arg2 == (char *)0x0) {
      __dest = (char *)0x0;
    }
    else {
      sVar3 = strlen(arg2);
      __dest = (char *)(**(code **)(arg1 + 0x30))((int)sVar3 + 1,*(uint64_t *)(arg1 + 0x40))
      ;
      if (__dest == (char *)0x0) {
        (**(code **)(arg1 + 0x38))(puVar2,*(uint64_t *)(arg1 + 0x40));
        return 0;
      }
      strcpy(__dest,arg2);
    }
    local_50 = *arg5;
    local_48 = arg5[1];
    local_40 = arg5[2];
    uVar1 = vsnprintf(local_d8,0x80,arg4,&local_50);
    __dest_00 = (char *)(**(code **)(arg1 + 0x30))(uVar1 + 1,*(uint64_t *)(arg1 + 0x40));
    if (__dest_00 == (char *)0x0) {
      (**(code **)(arg1 + 0x38))(puVar2,*(uint64_t *)(arg1 + 0x40));
      (**(code **)(arg1 + 0x38))(__dest,*(uint64_t *)(arg1 + 0x40));
      uVar4 = 0;
    }
    else {
      if (uVar1 < 0x80) {
        strcpy(__dest_00,local_d8);
      }
      else {
        local_50 = *arg5;
        local_48 = arg5[1];
        local_40 = arg5[2];
        vsnprintf(__dest_00,(long)(int)(uVar1 + 1),arg4,&local_50);
      }
      *puVar2 = __dest_00;
      uVar4 = 1;
      puVar2[1] = __dest;
      puVar2[3] = 0;
      *(uint32_t *)(puVar2 + 2) = arg3;
      *(uint64_t **)(*(long *)(arg1 + 0x20) + 0x18) = puVar2;
      *(int *)(arg1 + 0x28) = *(int *)(arg1 + 0x28) + 1;
      *(uint64_t **)(arg1 + 0x20) = puVar2;
    }
  }
  return uVar4;
}

/* ======================================================================
 * errorlist_add_fmt  (Ghidra `errorlist_add_fmt` @ 00531190)
 * Signature: uint8_t errorlist_add_fmt(void)
 * Calls: `errorlist_add_va`
 * Called by: `errorlist_add`
 */
void errorlist_add_fmt(void)

{
  errorlist_add_va();
  return;
}

/* ======================================================================
 * errorlist_add  (Ghidra `errorlist_add` @ 00531220)
 * Signature: uint8_t errorlist_add(void)
 * Calls: `errorlist_add_fmt`
 * Called by: `MOJOSHADER_preprocess`
 */
void errorlist_add(void)

{
  errorlist_add_fmt();
  return;
}

/* ======================================================================
 * errorlist_count  (Ghidra `errorlist_count` @ 00531230)
 * Signature: uint8_t errorlist_count(void)
 * Calls: (none)
 * Called by: `MOJOSHADER_preprocess`, `build_failed_assembly_part_14`, `build_parsedata`
 */
uint32_t errorlist_count(long arg1)

{
  return *(uint32_t *)(arg1 + 0x28);
}

/* ======================================================================
 * errorlist_flatten  (Ghidra `errorlist_flatten` @ 00531240)
 * Signature: uint8_t errorlist_flatten(void)
 * Calls: (none)
 * Called by: `MOJOSHADER_preprocess`, `build_failed_assembly_part_14`, `build_parsedata`
 */
uint64_t * errorlist_flatten(long arg1)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  
  puVar3 = (uint64_t *)0x0;
  if ((*(int *)(arg1 + 0x28) != 0) &&
     (puVar3 = (uint64_t *)
               (**(code **)(arg1 + 0x30))
                         (*(int *)(arg1 + 0x28) * 0x18,*(uint64_t *)(arg1 + 0x40)),
     puVar3 != (uint64_t *)0x0)) {
    puVar2 = *(uint64_t **)(arg1 + 0x18);
    puVar4 = puVar3;
    while (puVar2 != (uint64_t *)0x0) {
      puVar1 = (uint64_t *)puVar2[3];
      *puVar4 = *puVar2;
      puVar4[1] = puVar2[1];
      puVar4[2] = puVar2[2];
      puVar4 = puVar4 + 3;
      (**(code **)(arg1 + 0x38))(puVar2,*(uint64_t *)(arg1 + 0x40));
      puVar2 = puVar1;
    }
    *(uint32_t *)(arg1 + 0x28) = 0;
    *(uint64_t *)(arg1 + 0x18) = 0;
    *(long *)(arg1 + 0x20) = arg1;
  }
  return puVar3;
}

/* ======================================================================
 * errorlist_destroy  (Ghidra `errorlist_destroy` @ 005312d0)
 * Signature: uint8_t errorlist_destroy(void)
 * Calls: (none)
 * Called by: `MOJOSHADER_assemble`, `MOJOSHADER_parse`, `MOJOSHADER_preprocess`, `destroy_context`
 */
void errorlist_destroy(long arg1)

{
  code *UNRECOVERED_JUMPTABLE;
  uint64_t uVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  
  if (arg1 != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(arg1 + 0x38);
    uVar1 = *(uint64_t *)(arg1 + 0x40);
    puVar3 = *(uint64_t **)(arg1 + 0x18);
    while (puVar3 != (uint64_t *)0x0) {
      puVar2 = (uint64_t *)puVar3[3];
      (*UNRECOVERED_JUMPTABLE)(*puVar3,uVar1);
      (*UNRECOVERED_JUMPTABLE)(puVar3[1],uVar1);
      (*UNRECOVERED_JUMPTABLE)(puVar3,uVar1);
      puVar3 = puVar2;
    }
                    /* WARNING: Could not recover jumptable at 0x0053132e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(arg1,uVar1);
    return;
  }
  return;
}

/* ======================================================================
 * buffer_create  (Ghidra `buffer_create` @ 00531340)
 * Signature: uint8_t buffer_create(void)
 * Calls: (none)
 * Called by: `MOJOSHADER_assemble`, `MOJOSHADER_parse`, `MOJOSHADER_preprocess`, `emit_ARB1_DEF`, `emit_ARB1_DEFB`, `emit_ARB1_DEFI`, `emit_ARB1_LABEL`, `emit_ARB1_RET`, `emit_ARB1_array`, `emit_ARB1_attribute` (+25 more)
 */
uint64_t * buffer_create(uint64_t arg1,code *arg2,uint64_t arg3,uint64_t arg4)

{
  uint64_t *puVar1;
  ulong uVar2;
  ulong uVar3;
  uint64_t *puVar4;
  bool bVar5;
  byte bVar6;
  
  bVar6 = 0;
  puVar1 = (uint64_t *)(*arg2)(0x38,arg4);
  if (puVar1 != (uint64_t *)0x0) {
    bVar5 = ((ulong)puVar1 & 1) != 0;
    uVar3 = 0x38;
    puVar4 = puVar1;
    if (bVar5) {
      *(uint8_t *)puVar1 = 0;
      puVar4 = (uint64_t *)((long)puVar1 + 1);
      uVar3 = 0x37;
    }
    if (((ulong)puVar4 & 2) != 0) {
      *(uint16_t *)puVar4 = 0;
      uVar3 = (ulong)((int)uVar3 - 2);
      puVar4 = (uint64_t *)((long)puVar4 + 2);
    }
    if (((ulong)puVar4 & 4) != 0) {
      *(uint32_t *)puVar4 = 0;
      uVar3 = (ulong)((int)uVar3 - 4);
      puVar4 = (uint64_t *)((long)puVar4 + 4);
    }
    for (uVar2 = uVar3 >> 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar4 = 0;
      puVar4 = puVar4 + (ulong)bVar6 * -2 + 1;
    }
    if ((uVar3 & 4) != 0) {
      *(uint32_t *)puVar4 = 0;
      puVar4 = (uint64_t *)((long)puVar4 + 4);
    }
    if ((uVar3 & 2) != 0) {
      *(uint16_t *)puVar4 = 0;
      puVar4 = (uint64_t *)((long)puVar4 + 2);
    }
    if (bVar5) {
      *(uint8_t *)puVar4 = 0;
    }
    puVar1[3] = arg1;
    puVar1[4] = arg2;
    puVar1[5] = arg3;
    puVar1[6] = arg4;
  }
  return puVar1;
}

/* ======================================================================
 * buffer_reserve  (Ghidra `buffer_reserve` @ 00531460)
 * Signature: uint8_t buffer_reserve(void)
 * Calls: (none)
 * Called by: `MOJOSHADER_assemble`
 */
ulong buffer_reserve(long *arg1,ulong arg2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  
  uVar3 = 0;
  uVar5 = arg1[3];
  if (arg2 != 0) {
    lVar1 = arg1[2];
    if (lVar1 != 0) {
      uVar2 = *(ulong *)(lVar1 + 8);
      if (uVar2 < uVar5) {
        uVar3 = uVar5 - uVar2;
      }
      if (arg2 <= uVar3) {
        *(ulong *)(lVar1 + 8) = arg2 + uVar2;
        *arg1 = *arg1 + arg2;
        return uVar2 + *(long *)arg1[2];
      }
    }
    if (uVar5 <= arg2) {
      uVar5 = arg2;
    }
    puVar4 = (ulong *)(*(code *)arg1[4])(uVar5 + 0x18,arg1[6]);
    if (puVar4 == (ulong *)0x0) {
      uVar3 = 0;
    }
    else {
      puVar4[1] = arg2;
      puVar4[2] = 0;
      *puVar4 = (ulong)(puVar4 + 3);
      if (arg1[2] == 0) {
        arg1[1] = (long)puVar4;
      }
      else {
        *(ulong **)(arg1[2] + 0x10) = puVar4;
      }
      *arg1 = *arg1 + arg2;
      arg1[2] = (long)puVar4;
      uVar3 = *puVar4;
    }
  }
  return uVar3;
}

/* ======================================================================
 * buffer_append  (Ghidra `buffer_append` @ 00531520)
 * Signature: uint8_t buffer_append(void)
 * Calls: `memcpy`
 * Called by: `MOJOSHADER_assemble`, `MOJOSHADER_preprocess`, `add_ctab_members_isra_11`, `buffer_append_va`, `emit_BYTECODE_start`, `emit_GLSL_LIT`, `emit_GLSL_RET`, `emit_GLSL_TEXLDD`, `emit_GLSL_end`, `emit_GLSL_finalize` (+5 more)
 */
uint64_t buffer_append(long *arg1,void *arg2,ulong arg3)

{
  ulong uVar1;
  long *plVar2;
  uint64_t uVar3;
  ulong uVar4;
  ulong __n;
  
  uVar4 = arg1[3];
  uVar3 = 1;
  if (arg3 != 0) {
    plVar2 = (long *)arg1[2];
    if ((plVar2 != (long *)0x0) && (uVar1 = plVar2[1], uVar1 < uVar4)) {
      __n = uVar4 - uVar1;
      if (arg3 <= uVar4 - uVar1) {
        __n = arg3;
      }
      if (__n != 0) {
        memcpy((void *)(uVar1 + *plVar2),arg2,__n);
        *(long *)(arg1[2] + 8) = *(long *)(arg1[2] + 8) + __n;
        *arg1 = *arg1 + __n;
        arg3 = arg3 - __n;
        if (arg3 == 0) {
          return 1;
        }
        arg2 = (void *)((long)arg2 + __n);
      }
    }
    if (uVar4 <= arg3) {
      uVar4 = arg3;
    }
    uVar3 = 0;
    plVar2 = (long *)(*(code *)arg1[4])(uVar4 + 0x18,arg1[6]);
    if (plVar2 != (long *)0x0) {
      plVar2[1] = arg3;
      plVar2[2] = 0;
      *plVar2 = (long)(plVar2 + 3);
      if (arg1[2] == 0) {
        arg1[1] = (long)plVar2;
      }
      else {
        *(long **)(arg1[2] + 0x10) = plVar2;
      }
      arg1[2] = (long)plVar2;
      uVar3 = 1;
      memcpy((void *)*plVar2,arg2,arg3);
      *arg1 = *arg1 + arg3;
    }
  }
  return uVar3;
}

/* ======================================================================
 * buffer_append_va  (Ghidra `buffer_append_va` @ 00531650)
 * Signature: uint8_t buffer_append_va(void)
 * Calls: `buffer_append`, `vsnprintf`
 * Called by: `buffer_append_fmt`, `output_line`
 */
ulong buffer_append_va(long arg1,char *arg2,uint64_t *arg3)

{
  uint uVar1;
  ulong uVar2;
  char *__s;
  char acStack_d8 [136];
  uint64_t local_50;
  uint64_t local_48;
  uint64_t local_40;
  
  local_50 = *arg3;
  local_48 = arg3[1];
  local_40 = arg3[2];
  uVar1 = vsnprintf(acStack_d8,0x80,arg2,&local_50);
  uVar2 = 1;
  if (uVar1 != 0) {
    if (uVar1 < 0x80) {
      uVar2 = buffer_append(arg1,acStack_d8,(long)(int)uVar1);
    }
    else {
      __s = (char *)(**(code **)(arg1 + 0x20))(uVar1 + 1,*(uint64_t *)(arg1 + 0x30));
      uVar2 = 0;
      if (__s != (char *)0x0) {
        local_50 = *arg3;
        local_48 = arg3[1];
        local_40 = arg3[2];
        vsnprintf(__s,(long)(int)(uVar1 + 1),arg2,&local_50);
        uVar1 = buffer_append(arg1,acStack_d8,(long)(int)uVar1);
        uVar2 = (ulong)uVar1;
        (**(code **)(arg1 + 0x28))(__s,*(uint64_t *)(arg1 + 0x30));
      }
    }
  }
  return uVar2;
}

/* ======================================================================
 * buffer_append_fmt  (Ghidra `buffer_append_fmt` @ 00531790)
 * Signature: uint8_t buffer_append_fmt(void)
 * Calls: `buffer_append_va`
 * Called by: `MOJOSHADER_preprocess`, `preprocessor_start`
 */
void buffer_append_fmt(uint64_t arg1,uint64_t arg2,uint64_t arg3,uint64_t arg4,
                      uint64_t arg5,uint64_t arg6,uint64_t arg7,uint64_t arg8,
                      uint64_t arg9,uint64_t arg10,uint64_t arg11,uint64_t arg12
                      ,uint64_t arg13,uint64_t arg14)

{
  char in_AL;
  uint32_t local_d0;
  uint32_t local_cc;
  uint8_t *local_c8;
  uint8_t *local_c0;
  uint8_t local_b8 [16];
  uint64_t local_a8;
  uint64_t local_a0;
  uint64_t local_98;
  uint64_t local_90;
  uint64_t local_88;
  uint64_t local_78;
  uint64_t local_68;
  uint64_t local_58;
  uint64_t local_48;
  uint64_t local_38;
  uint64_t local_28;
  uint64_t local_18;
  
  if (in_AL != '\0') {
    local_88 = arg1;
    local_78 = arg2;
    local_68 = arg3;
    local_58 = arg4;
    local_48 = arg5;
    local_38 = arg6;
    local_28 = arg7;
    local_18 = arg8;
  }
  local_c8 = &stack0x00000008;
  local_d0 = 0x10;
  local_cc = 0x30;
  local_c0 = local_b8;
  local_a8 = arg11;
  local_a0 = arg12;
  local_98 = arg13;
  local_90 = arg14;
  buffer_append_va(arg9,arg10,&local_d0);
  return;
}

/* ======================================================================
 * buffer_size  (Ghidra `buffer_size` @ 00531820)
 * Signature: uint8_t buffer_size(void)
 * Calls: (none)
 * Called by: `MOJOSHADER_assemble`, `MOJOSHADER_preprocess`, `add_ctab_members_isra_11`, `handle_pp_identifier`, `preprocessor_nexttoken`, `preprocessor_start`
 */
uint64_t buffer_size(uint64_t *arg1)

{
  return *arg1;
}

/* ======================================================================
 * buffer_empty  (Ghidra `buffer_empty` @ 00531830)
 * Signature: uint8_t buffer_empty(void)
 * Calls: (none)
 * Called by: (none)
 */
void buffer_empty(uint64_t *arg1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = arg1[1];
  while (lVar2 != 0) {
    lVar1 = *(long *)(lVar2 + 0x10);
    (*(code *)arg1[5])(lVar2,arg1[6]);
    lVar2 = lVar1;
  }
  arg1[2] = 0;
  arg1[1] = 0;
  *arg1 = 0;
  return;
}

/* ======================================================================
 * buffer_flatten  (Ghidra `buffer_flatten` @ 00531880)
 * Signature: uint8_t buffer_flatten(void)
 * Calls: `memcpy`
 * Called by: `MOJOSHADER_assemble`, `MOJOSHADER_preprocess`, `handle_pp_identifier`, `preprocessor_nexttoken`, `preprocessor_start`
 */
uint8_t * buffer_flatten(uint64_t *arg1)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint8_t *puVar3;
  uint8_t *__dest;
  
  puVar3 = (uint8_t *)(*(code *)arg1[4])((int)*arg1 + 1,arg1[6]);
  if (puVar3 != (uint8_t *)0x0) {
    puVar2 = (uint64_t *)arg1[1];
    __dest = puVar3;
    while (puVar2 != (uint64_t *)0x0) {
      puVar1 = (uint64_t *)puVar2[2];
      memcpy(__dest,(void *)*puVar2,puVar2[1]);
      __dest = __dest + puVar2[1];
      (*(code *)arg1[5])(puVar2,arg1[6]);
      puVar2 = puVar1;
    }
    *__dest = 0;
    arg1[2] = 0;
    arg1[1] = 0;
    *arg1 = 0;
  }
  return puVar3;
}

/* ======================================================================
 * buffer_merge  (Ghidra `buffer_merge` @ 00531910)
 * Signature: uint8_t buffer_merge(void)
 * Calls: `memcpy`
 * Called by: `build_parsedata`
 */
uint8_t * buffer_merge(long arg1,long arg2,long *arg3)

{
  long *plVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  long *plVar5;
  uint8_t *puVar6;
  long lVar7;
  long lVar8;
  uint8_t *__dest;
  
  if (arg2 != 0) {
    lVar7 = 0;
    lVar8 = 0;
    plVar5 = (long *)0x0;
    do {
      plVar1 = *(long **)(arg1 + lVar7 * 8);
      if (plVar1 != (long *)0x0) {
        if (plVar5 == (long *)0x0) {
          plVar5 = plVar1;
        }
        lVar8 = lVar8 + *plVar1;
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 != arg2);
    if ((plVar5 != (long *)0x0) &&
       (puVar6 = (uint8_t *)(*(code *)plVar5[4])((int)lVar8 + 1,plVar5[6]),
       puVar6 != (uint8_t *)0x0)) {
      *arg3 = lVar8;
      lVar7 = 0;
      __dest = puVar6;
      do {
        puVar2 = *(uint64_t **)(arg1 + lVar7 * 8);
        if (puVar2 != (uint64_t *)0x0) {
          puVar4 = (uint64_t *)puVar2[1];
          while (puVar4 != (uint64_t *)0x0) {
            puVar3 = (uint64_t *)puVar4[2];
            memcpy(__dest,(void *)*puVar4,puVar4[1]);
            __dest = __dest + puVar4[1];
            (*(code *)puVar2[5])(puVar4,puVar2[6]);
            puVar4 = puVar3;
          }
          puVar2[2] = 0;
          puVar2[1] = 0;
          *puVar2 = 0;
        }
        lVar7 = lVar7 + 1;
      } while (lVar7 != arg2);
      *__dest = 0;
      return puVar6;
    }
  }
  *arg3 = 0;
  return (uint8_t *)0x0;
}

/* ======================================================================
 * buffer_destroy  (Ghidra `buffer_destroy` @ 00531a30)
 * Signature: uint8_t buffer_destroy(void)
 * Calls: (none)
 * Called by: `MOJOSHADER_assemble`, `MOJOSHADER_preprocess`, `destroy_context`, `handle_pp_identifier`, `preprocessor_nexttoken`, `preprocessor_start`
 */
void buffer_destroy(uint64_t *arg1)

{
  code *UNRECOVERED_JUMPTABLE;
  uint64_t uVar1;
  long lVar2;
  code *pcVar3;
  uint64_t uVar4;
  long lVar5;
  
  if (arg1 == (uint64_t *)0x0) {
    return;
  }
  UNRECOVERED_JUMPTABLE = (code *)arg1[5];
  uVar1 = arg1[6];
  lVar5 = arg1[1];
  pcVar3 = UNRECOVERED_JUMPTABLE;
  uVar4 = uVar1;
  if (lVar5 != 0) {
    while( true ) {
      lVar2 = *(long *)(lVar5 + 0x10);
      (*pcVar3)(lVar5,uVar4);
      if (lVar2 == 0) break;
      pcVar3 = (code *)arg1[5];
      uVar4 = arg1[6];
      lVar5 = lVar2;
    }
  }
  arg1[2] = 0;
  arg1[1] = 0;
  *arg1 = 0;
                    /* WARNING: Could not recover jumptable at 0x00531aa1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(arg1,uVar1);
  return;
}

/* ======================================================================
 * buffer_find  (Ghidra `buffer_find` @ 00531ac0)
 * Signature: uint8_t buffer_find(void)
 * Calls: `memchr`, `memcmp`
 * Called by: `MOJOSHADER_assemble`, `add_ctab_members_isra_11`
 */
long buffer_find(ulong *arg1,ulong arg2,byte *arg3,ulong arg4)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  void *pvVar4;
  ulong uVar5;
  uint64_t *puVar6;
  ulong uVar7;
  byte *__s2;
  ulong uVar8;
  void *local_70;
  ulong local_68;
  uint64_t *local_60;
  long local_48;
  
  lVar3 = 0;
  if (arg4 != 0) {
    lVar3 = -1;
    if ((arg2 < *arg1) && (arg4 <= *arg1 - arg2)) {
      local_60 = (uint64_t *)arg1[1];
      local_68 = 0;
      pvVar4 = (void *)*local_60;
      local_70 = pvVar4;
      if (arg2 != 0) {
        uVar7 = local_60[1];
        if (arg2 < (ulong)local_60[1]) {
          local_68 = 0;
        }
        else {
          do {
            local_68 = uVar7;
            local_60 = (uint64_t *)local_60[2];
            uVar7 = local_68 + local_60[1];
          } while (local_68 + local_60[1] <= arg2);
          local_70 = (void *)*local_60;
        }
        pvVar4 = (void *)((long)local_70 + (arg2 - local_68));
      }
      bVar1 = *arg3;
      while( true ) {
        lVar3 = local_60[1];
        pvVar4 = memchr(pvVar4,(uint)bVar1,(long)local_70 + (lVar3 - (long)pvVar4));
        if (pvVar4 != (void *)0x0) break;
        local_60 = (uint64_t *)local_60[2];
LAB_00531cc3:
        if (local_60 == (uint64_t *)0x0) {
          return -1;
        }
        local_68 = local_68 + lVar3;
        pvVar4 = (void *)*local_60;
        local_70 = pvVar4;
      }
      local_48 = (long)pvVar4 + (local_68 - (long)local_70);
      if (arg4 == 1) {
        return local_48;
      }
      local_60 = (uint64_t *)local_60[2];
      do {
        uVar8 = (long)local_70 + (lVar3 - (long)pvVar4);
        uVar7 = arg4;
        if (uVar8 <= arg4) {
          uVar7 = uVar8;
        }
        if ((uVar7 == 0) || (iVar2 = memcmp(pvVar4,arg3,uVar7), iVar2 == 0)) {
          uVar5 = arg4 - uVar7;
          if (uVar5 == 0) {
            return local_48;
          }
          if (local_60 != (uint64_t *)0x0) {
            __s2 = arg3 + uVar7;
            puVar6 = local_60;
            do {
              uVar7 = puVar6[1];
              if (uVar5 <= (ulong)puVar6[1]) {
                uVar7 = uVar5;
              }
              iVar2 = memcmp((void *)*puVar6,__s2,uVar7);
              if (iVar2 != 0) break;
              if (uVar5 == uVar7) {
                return local_48;
              }
              puVar6 = (uint64_t *)puVar6[2];
              uVar5 = uVar5 - uVar7;
              __s2 = __s2 + uVar7;
            } while (puVar6 != (uint64_t *)0x0);
          }
        }
        pvVar4 = memchr((void *)((long)pvVar4 + 1),(uint)bVar1,uVar8 - 1);
        if (pvVar4 == (void *)0x0) goto LAB_00531cc3;
        local_48 = (long)pvVar4 + (local_68 - (long)local_70);
      } while( true );
    }
  }
  return lVar3;
}

/* ======================================================================
 * close_define_include  (Ghidra `close_define_include` @ 00539190)
 * Signature: uint8_t close_define_include(void)
 * Calls: (none)
 * Called by: `MOJOSHADER_preprocess`, `handle_pp_identifier`, `preprocessor_start`
 */
void close_define_include
               (uint64_t arg1,uint64_t arg2,code *UNRECOVERED_JUMPTABLE,uint64_t arg4
               )

{
                    /* WARNING: Could not recover jumptable at 0x00539193. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(arg1,arg4);
  return;
}

/* ======================================================================
 * failf__005391a0  (Ghidra `failf` @ 005391a0)
 * Signature: uint8_t failf(void)
 * Calls: `failf`, `vsnprintf`
 * Called by: (none)
 */
void failf(uint64_t arg1,uint64_t arg2,uint64_t arg3,uint64_t arg4,
          uint64_t arg5,uint64_t arg6,uint64_t arg7,uint64_t arg8,
          uint32_t *arg9,char *arg10,uint64_t arg11,uint64_t arg12,
          uint64_t arg13,uint64_t arg14)

{
  char in_AL;
  uint32_t local_d0;
  uint32_t local_cc;
  uint8_t *local_c8;
  uint8_t *local_c0;
  uint8_t local_b8 [16];
  uint64_t local_a8;
  uint64_t local_a0;
  uint64_t local_98;
  uint64_t local_90;
  uint64_t local_88;
  uint64_t local_78;
  uint64_t local_68;
  uint64_t local_58;
  uint64_t local_48;
  uint64_t local_38;
  uint64_t local_28;
  uint64_t local_18;
  
  if (in_AL != '\0') {
    local_88 = arg1;
    local_78 = arg2;
    local_68 = arg3;
    local_58 = arg4;
    local_48 = arg5;
    local_38 = arg6;
    local_28 = arg7;
    local_18 = arg8;
  }
  local_c8 = &stack0x00000008;
  *arg9 = 1;
  local_c0 = local_b8;
  local_d0 = 0x10;
  local_cc = 0x30;
  local_a8 = arg11;
  local_a0 = arg12;
  local_98 = arg13;
  local_90 = arg14;
  vsnprintf((char *)(arg9 + 2),0x100,arg10,&local_d0);
  return;
}

/* ======================================================================
 * find_define  (Ghidra `find_define` @ 00539250)
 * Signature: uint8_t find_define(void)
 * Calls: `memcpy`, `snprintf`, `strcmp`, `strlen`
 * Called by: `find_define_by_token`, `handle_pp_identifier`, `handle_pp_ifdef`
 */
uint64_t * find_define(long arg1,char *arg2)

{
  uint uVar1;
  int iVar2;
  size_t __n;
  uint8_t *puVar3;
  char *pcVar4;
  long lVar5;
  char cVar6;
  uint64_t *puVar7;
  char *pcVar8;
  bool bVar9;
  
  if (*(long *)(arg1 + 0x938) == 0) {
LAB_0053927e:
    bVar9 = *(long *)(arg1 + 0x940) == 0;
    if (!bVar9) {
      lVar5 = 9;
      pcVar4 = arg2;
      pcVar8 = "__LINE__";
      do {
        if (lVar5 == 0) break;
        lVar5 = lVar5 + -1;
        bVar9 = *pcVar4 == *pcVar8;
        pcVar4 = pcVar4 + 1;
        pcVar8 = pcVar8 + 1;
      } while (bVar9);
      if (bVar9) {
        (**(code **)(arg1 + 0x968))
                  (*(uint64_t *)(*(long *)(arg1 + 0x940) + 8),*(uint64_t *)(arg1 + 0x970))
        ;
        lVar5 = *(long *)(arg1 + 0x120);
        pcVar4 = (char *)(**(code **)(arg1 + 0x960))(0x20,*(uint64_t *)(arg1 + 0x970));
        if (pcVar4 != (char *)0x0) {
          snprintf(pcVar4,0x20,"%u",(ulong)*(uint *)(lVar5 + 0x48));
          *(char **)(*(long *)(arg1 + 0x940) + 8) = pcVar4;
          return *(uint64_t **)(arg1 + 0x940);
        }
        goto LAB_00539408;
      }
    }
    cVar6 = *arg2;
    uVar1 = 0x1505;
    pcVar4 = arg2;
    if (cVar6 == '\0') {
      uVar1 = 5;
    }
    else {
      do {
        uVar1 = uVar1 * 0x21 ^ (int)cVar6;
        cVar6 = pcVar4[1];
        pcVar4 = pcVar4 + 1;
      } while (cVar6 != '\0');
      uVar1 = uVar1 & 0xff;
    }
    puVar7 = *(uint64_t **)(arg1 + 0x130 + (long)(int)uVar1 * 8);
    while ((puVar7 != (uint64_t *)0x0 && (iVar2 = strcmp((char *)*puVar7,arg2), iVar2 != 0))) {
      puVar7 = (uint64_t *)puVar7[5];
    }
  }
  else {
    lVar5 = 9;
    bVar9 = false;
    pcVar4 = arg2;
    pcVar8 = "__FILE__";
    do {
      if (lVar5 == 0) break;
      lVar5 = lVar5 + -1;
      bVar9 = *pcVar4 == *pcVar8;
      pcVar4 = pcVar4 + 1;
      pcVar8 = pcVar8 + 1;
    } while (bVar9);
    if (!bVar9) goto LAB_0053927e;
    (**(code **)(arg1 + 0x968))
              (*(uint64_t *)(*(long *)(arg1 + 0x938) + 8),*(uint64_t *)(arg1 + 0x970));
    if (*(uint64_t **)(arg1 + 0x120) == (uint64_t *)0x0) {
      iVar2 = 2;
      __n = 0;
      pcVar4 = "";
    }
    else {
      pcVar4 = (char *)**(uint64_t **)(arg1 + 0x120);
      __n = strlen(pcVar4);
      iVar2 = (int)__n + 2;
    }
    puVar3 = (uint8_t *)(**(code **)(arg1 + 0x960))(iVar2,*(uint64_t *)(arg1 + 0x970));
    if (puVar3 != (uint8_t *)0x0) {
      *puVar3 = 0x22;
      memcpy(puVar3 + 1,pcVar4,__n);
      puVar3[__n + 1] = 0x22;
      *(uint8_t **)(*(long *)(arg1 + 0x938) + 8) = puVar3;
      return *(uint64_t **)(arg1 + 0x938);
    }
LAB_00539408:
    *(uint32_t *)(arg1 + 4) = 1;
    puVar7 = (uint64_t *)0x0;
  }
  return puVar7;
}

/* ======================================================================
 * find_define_by_token  (Ghidra `find_define_by_token` @ 00539440)
 * Signature: uint8_t find_define_by_token(void)
 * Calls: `find_define`, `memcpy`
 * Called by: `handle_pp_identifier`, `reduce_pp_expression`
 */
void find_define_by_token(long arg1)

{
  uint8_t *__dest;
  uint uVar1;
  long lVar2;
  void *__src;
  long lVar3;
  uint64_t auStack_30 [2];
  
  lVar2 = *(long *)(arg1 + 0x120);
  uVar1 = *(uint *)(lVar2 + 0x20);
  __src = *(void **)(lVar2 + 0x18);
  lVar3 = -((ulong)(*(int *)(lVar2 + 0x20) + 1) + 0x1e & 0xfffffffffffffff0);
  __dest = &stack0xffffffffffffffe0 + lVar3;
  *(uint64_t *)((long)auStack_30 + lVar3) = 0x539490;
  memcpy(__dest,__src,(ulong)uVar1);
  __dest[*(uint *)(lVar2 + 0x20)] = 0;
  *(uint64_t *)((long)auStack_30 + lVar3) = 0x5394a4;
  find_define(arg1,__dest);
  return;
}

/* ======================================================================
 * find_macro_arg_isra_8  (Ghidra `find_macro_arg.isra.8` @ 00539840)
 * Signature: uint8_t find_macro_arg.isra.8(void)
 * Calls: `memcpy`, `strcmp`
 * Called by: `handle_pp_identifier`
 */
uint64_t * find_macro_arg_isra_8(uint64_t *arg1,uint *arg2,uint64_t *arg3)

{
  char *__s2;
  uint uVar1;
  void *__src;
  char *__s1;
  long lVar2;
  int iVar3;
  uint64_t auStack_30 [2];
  
  uVar1 = *arg2;
  __src = (void *)*arg1;
  lVar2 = -((ulong)(*arg2 + 1) + 0x1e & 0xfffffffffffffff0);
  __s2 = &stack0xffffffffffffffe0 + lVar2;
  *(uint64_t *)((long)auStack_30 + lVar2) = 0x53987e;
  memcpy(__s2,__src,(ulong)uVar1);
  __s2[uVar1] = '\0';
  while( true ) {
    if (arg3 == (uint64_t *)0x0) {
      return (uint64_t *)0x0;
    }
    __s1 = (char *)*arg3;
    *(uint64_t *)((long)auStack_30 + lVar2) = 0x5398a4;
    iVar3 = strcmp(__s1,__s2);
    if (iVar3 == 0) break;
    arg3 = (uint64_t *)arg3[5];
  }
  return arg3;
}

/* ======================================================================
 * audCreateDevice  (Ghidra `audCreateDevice` @ 0053e2d0)
 * Signature: uint8_t audCreateDevice(void)
 * Calls: `alcCloseDevice`, `alcCreateContext`, `alcMakeContextCurrent`, `alcOpenDevice`, `alcProcessContext`
 * Called by: `TAudio__TAudio__0057b5e0`
 */
void audCreateDevice(void)

{
  long lVar1;
  long lVar2;
  uint64_t *puVar3;
  byte bVar4;
  uint32_t local_28 [6];
  
  bVar4 = 0;
  lVar1 = alcOpenDevice(0);
  if (lVar1 == 0) {
    Error__ThrowFatalError("Could not open OpenAL device");
  }
  local_28[0] = 0;
  lVar2 = alcCreateContext(lVar1,local_28);
  if (lVar2 == 0) {
    alcCloseDevice(lVar1);
    Error__ThrowFatalError("Could not create OpenAL context");
  }
  alcMakeContextCurrent(lVar2);
  alcProcessContext(lVar2);
  puVar3 = (uint64_t *)&pVoices;
  for (lVar1 = 800; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * -2 + 1;
  }
  return;
}

/* ======================================================================
 * audDestroyDevice  (Ghidra `audDestroyDevice` @ 0053e360)
 * Signature: uint8_t audDestroyDevice(void)
 * Calls: `AudioFile__AudioFile__005a75c0`, `AutoLockSection__AutoLockSection`, `AutoLockSection__AutoLockSection__005b59d0`, `alDeleteBuffers`, `alDeleteSources`, `alcCloseDevice`, `alcDestroyContext`, `alcGetContextsDevice`, `alcGetCurrentContext`, `alcMakeContextCurrent` (+3 more)
 * Called by: `TAudio__TAudio`
 */
void audDestroyDevice(void)

{
  uint64_t *puVar1;
  ushort *puVar2;
  void *pvVar3;
  AudioFile *this;
  void *pvVar4;
  void *pvVar5;
  long lVar6;
  uint64_t uVar7;
  ushort uVar8;
  ushort uVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  ushort uVar13;
  AutoLockSection aAStack_28 [16];
  
  iVar12 = 0;
  piVar11 = &pVoices;
  AutoLockSection__AutoLockSection(aAStack_28,(CriticalSection *)XAudioSection);
  do {
    while (*piVar11 == 0) {
      iVar12 = iVar12 + 1;
      piVar11 = piVar11 + 8;
      if (iVar12 == 200) goto LAB_0053e3c4;
    }
                    /* try { // try from 0053e3aa to 0053e560 has its CatchHandler @ 0053e572 */
    alDeleteSources(1,&pVoices + (long)iVar12 * 8);
    iVar12 = iVar12 + 1;
    *piVar11 = 0;
    piVar11 = piVar11 + 8;
  } while (iVar12 != 200);
LAB_0053e3c4:
  uVar10 = (uint)(ushort)pActiveCues._40_2_;
  if (pActiveCues._40_2_ != 0) {
    do {
      pvVar3 = *(void **)pActiveCues._56_8_;
      if (pvVar3 != (void *)0x0) {
        piVar11 = *(int **)((long)pvVar3 + 8);
        if ((piVar11 != (int *)0x0) && (iVar12 = *piVar11, *piVar11 = iVar12 + -1, iVar12 + -1 == 0)
           ) {
          this = *(AudioFile **)(piVar11 + 8);
          if (this != (AudioFile *)0x0) {
            AudioFile__AudioFile__005a75c0(this);
            operator_delete(this);
          }
          if (*(void **)(piVar11 + 2) != (void *)0x0) {
            free(*(void **)(piVar11 + 2));
          }
          pvVar4 = *(void **)(piVar11 + 0x10);
          pvVar5 = *(void **)((long)pvVar4 + 0x18);
          if (pvVar5 != (void *)0x0) {
            operator_delete__(pvVar5);
          }
          operator_delete(pvVar4);
          alDeleteBuffers(2,piVar11 + 4);
          operator_delete(piVar11);
        }
        operator_delete(pvVar3);
        uVar10 = (uint)(ushort)pActiveCues._40_2_;
      }
      if (1 < (ushort)uVar10) {
        lVar6 = 0;
        iVar12 = 0;
        do {
          iVar12 = iVar12 + 1;
          puVar1 = (uint64_t *)(pActiveCues._56_8_ + lVar6);
          lVar6 = lVar6 + 8;
          *puVar1 = *(uint64_t *)(pActiveCues._56_8_ + lVar6);
          uVar10 = (uint)(ushort)pActiveCues._40_2_;
        } while (iVar12 < (int)(uVar10 - 1));
      }
      if ((pActiveCues._48_4_ == 1) && (pActiveCues._42_2_ != 0)) {
        uVar9 = 0;
        uVar13 = pActiveCues._42_2_;
        do {
          while( true ) {
            puVar2 = (ushort *)(pActiveCues._64_8_ + (ulong)uVar9 * 2);
            if (*puVar2 != 0) break;
            *puVar2 = 0xffff;
            uVar9 = uVar9 + 1;
            uVar13 = pActiveCues._42_2_;
            if ((ushort)pActiveCues._42_2_ <= uVar9) goto LAB_0053e515;
          }
          uVar8 = *puVar2 - 1;
          if (uVar8 < 0xfffe) {
            *puVar2 = uVar8;
            uVar13 = pActiveCues._42_2_;
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < uVar13);
LAB_0053e515:
        uVar10 = (uint)(ushort)pActiveCues._40_2_;
      }
      else {
        pActiveCues._40_2_ = (uint16_t)uVar10;
      }
      if (pActiveCues._40_2_ == 0) {
        pActiveCues._40_2_ = 0;
        goto LAB_0053e52a;
      }
      uVar10 = uVar10 - 1;
      pActiveCues._40_2_ = (uint16_t)uVar10;
    } while (pActiveCues._40_2_ != 0);
    pActiveCues._40_2_ = 0;
  }
LAB_0053e52a:
  lVar6 = alcGetCurrentContext();
  if (lVar6 != 0) {
    uVar7 = alcGetContextsDevice(lVar6);
    alcMakeContextCurrent(0);
    alcSuspendContext(lVar6);
    alcDestroyContext(lVar6);
    alcCloseDevice(uVar7);
  }
  AutoLockSection__AutoLockSection__005b59d0(aAStack_28);
  return;
}

/* ======================================================================
 * audUpdateDevice  (Ghidra `audUpdateDevice` @ 0053e590)
 * Signature: uint8_t audUpdateDevice(void)
 * Calls: `AudioFile__GetStreamingData`, `TAudio__InvalidateInstance`, `alBufferData`, `alDeleteSources`, `alGetSourceiv`, `alSourcePlay`, `alSourceQueueBuffers`, `alSourceStop`, `alSourceUnqueueBuffers`, `unpack_adpcm`
 * Called by: `TAudio__Update`
 */
void audUpdateDevice(void)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  int iVar7;
  void *local_58;
  uint local_50;
  int local_48 [6];
  
  iVar7 = 0;
  piVar6 = &DAT_0081cedc /* R:2.2958888052482446e-39f */;
LAB_0053e5c3:
  do {
    iVar1 = piVar6[-7];
    if (*piVar6 == 1) {
      TAudio__InvalidateInstance(Audio,*(TAudioInstance **)(piVar6 + -3));
      piVar6[-5] = 0;
      piVar6[-4] = 0;
      if (*(uint64_t **)(piVar6 + -3) != (uint64_t *)0x0) {
        **(uint64_t **)(piVar6 + -3) = 0;
      }
      if (iVar1 != 0) {
        alDeleteSources(1,&pVoices + (long)iVar7 * 8);
      }
      piVar6[-7] = 0;
      *piVar6 = 0;
    }
    else if (iVar1 != 0) {
      local_48[2] = 0;
      alGetSourceiv(iVar1,0x1016,local_48 + 2);
      iVar1 = local_48[2];
      if (0 < local_48[2]) {
        lVar4 = (long)iVar7;
        iVar2 = (&pVoices)[lVar4 * 8];
        puVar3 = (uint *)(&DAT_0081cec8 /* R:1.1930094605875763e-38f */)[lVar4 * 4];
        alSourceUnqueueBuffers(iVar2,local_48[2],local_48);
        if ((*puVar3 & 1) == 0) {
          if ((*puVar3 & 2) != 0) {
            if (iVar2 != 0) {
              alSourceStop(iVar2);
            }
            (&DAT_0081cedc /* R:2.2958888052482446e-39f */)[lVar4 * 8] = 1;
          }
        }
        else {
          lVar4 = 0;
          do {
            local_50 = 0;
            local_58 = (void *)0x0;
            AudioFile__GetStreamingData
                      (*(AudioFile **)(*(long *)(puVar3 + 2) + 0x20),(AudioStreamData *)&local_58);
            unpack_adpcm(*(AdpcmDecoder **)(*(long *)(puVar3 + 2) + 0x40),local_58,local_50);
            lVar5 = *(long *)(puVar3 + 2);
            alBufferData(local_48[lVar4],*(uint32_t *)(lVar5 + 0x18),
                         *(uint64_t *)(*(long *)(lVar5 + 0x40) + 0x18),
                         *(uint32_t *)(*(long *)(lVar5 + 0x40) + 0x20),
                         *(uint32_t *)(lVar5 + 0x2c));
            alSourceQueueBuffers(iVar2,1,local_48 + (int)lVar4);
            lVar5 = *(long *)(*(long *)(puVar3 + 2) + 0x40);
            if (*(void **)(lVar5 + 0x18) != (void *)0x0) {
              operator_delete__(*(void **)(lVar5 + 0x18));
              lVar5 = *(long *)(*(long *)(puVar3 + 2) + 0x40);
            }
            *(uint64_t *)(lVar5 + 0x18) = 0;
            lVar4 = lVar4 + 1;
            *(uint32_t *)(*(long *)(*(long *)(puVar3 + 2) + 0x40) + 0x20) = 0;
          } while ((int)lVar4 < iVar1);
          local_48[3] = 0;
          alGetSourceiv(iVar2,0x1010,local_48 + 3);
          if (local_48[3] == 0x1014) {
            iVar7 = iVar7 + 1;
            piVar6 = piVar6 + 8;
            alSourcePlay(iVar2);
            if (iVar7 == 200) {
              return;
            }
            goto LAB_0053e5c3;
          }
        }
      }
    }
    iVar7 = iVar7 + 1;
    piVar6 = piVar6 + 8;
    if (iVar7 == 200) {
      return;
    }
  } while( true );
}

/* ======================================================================
 * audCreateCue  (Ghidra `audCreateCue` @ 0053e7d0)
 * Signature: uint8_t audCreateCue(void)
 * Calls: `AudioFile__AudioFile`, `AudioFile__AudioFile__005a75c0`, `AudioFile__CopyWavData`, `AudioFile__GetWaveFormat`, `CriticalSection__Lock`, `CriticalSection__Unlock`, `alBufferData`, `alGenBuffers`, `free`, `init_adpcm` (+5 more)
 * Called by: `Create`, `CreateTAudioCue`
 */
uint32_t * audCreateCue(byte *arg1)

{
  short sVar1;
  ushort uVar2;
  uint32_t *puVar3;
  void *pvVar4;
  uint32_t *puVar5;
  AudioFile *this;
  uint64_t uVar6;
  long lVar7;
  short *psVar8;
  void *pvVar9;
  short sVar10;
  ushort uVar11;
  ulong uVar12;
  ulong uVar13;
  uint64_t *puVar14;
  uint64_t local_58;
  uint32_t local_50;
  uint local_3c [3];
  
  puVar3 = operator_new(0x10);
  puVar3[1] = 0x3f800000;
  *(uint64_t *)(puVar3 + 2) = 0;
  *puVar3 = *(uint32_t *)arg1;
  CriticalSection__Lock((CriticalSection *)pActiveCues,1);
  uVar6 = pActiveCues._56_8_;
  if (pActiveCues._72_4_ == -0x5eef3582) {
    if ((ushort)pActiveCues._42_2_ <= (ushort)pActiveCues._40_2_) {
      pActiveCues._42_2_ = pActiveCues._42_2_ + pActiveCues._52_2_;
      uVar12 = (ulong)pActiveCues[0x2c];
      pvVar4 = (void *)0x0;
      uVar13 = (ulong)(ushort)pActiveCues._42_2_ * 8;
      pvVar9 = malloc(uVar12 + 0x10 + uVar13);
      if (pvVar9 != (void *)0x0) {
        pvVar4 = (void *)((long)pvVar9 + 0x10U + (uVar12 - ((long)pvVar9 + 0x10U) % uVar12) % uVar12
                         );
        *(ulong *)((long)pvVar4 + -0x10) = uVar13;
        *(void **)((long)pvVar4 + -8) = pvVar9;
        if (uVar6 != 0) {
          uVar12 = *(ulong *)(uVar6 + -0x10);
          if (uVar13 < uVar12 || uVar13 - uVar12 == 0) {
            uVar12 = uVar13;
          }
          memcpy(pvVar4,(void *)uVar6,uVar12);
          free(*(void **)(uVar6 + -8));
        }
      }
      uVar6 = pActiveCues._64_8_;
      uVar11 = pActiveCues._42_2_;
      pActiveCues._56_8_ = pvVar4;
      if (pActiveCues._64_8_ != 0) {
        uVar12 = (ulong)pActiveCues[0x2c];
        uVar13 = (ulong)(ushort)pActiveCues._42_2_ * 2;
        pvVar9 = malloc(uVar12 + 0x10 + uVar13);
        pvVar4 = (void *)0x0;
        uVar2 = pActiveCues._40_2_;
        if (pvVar9 != (void *)0x0) {
          pvVar4 = (void *)((long)pvVar9 + 0x10U +
                           (uVar12 - ((long)pvVar9 + 0x10U) % uVar12) % uVar12);
          *(void **)((long)pvVar4 + -8) = pvVar9;
          *(ulong *)((long)pvVar4 + -0x10) = uVar13;
          uVar12 = *(ulong *)(uVar6 + -0x10);
          if (uVar13 <= *(ulong *)(uVar6 + -0x10)) {
            uVar12 = uVar13;
          }
          memcpy(pvVar4,(void *)uVar6,uVar12);
          free(*(void **)(uVar6 + -8));
          uVar2 = pActiveCues._40_2_;
          uVar11 = pActiveCues._42_2_;
        }
        for (; pActiveCues._64_8_ = pvVar4, uVar2 < uVar11; uVar2 = uVar2 + 1) {
          *(uint16_t *)(pActiveCues._64_8_ + (ulong)uVar2 * 2) = 0xffff;
          pvVar4 = (void *)pActiveCues._64_8_;
        }
      }
    }
    if ((pActiveCues._48_4_ == 1) && (pActiveCues._42_2_ != 0)) {
      sVar10 = 0;
      sVar1 = *(short *)pActiveCues._64_8_;
      psVar8 = (short *)pActiveCues._64_8_;
      while (sVar1 != -1) {
        psVar8 = psVar8 + 1;
        sVar10 = sVar10 + 1;
        if (sVar10 == pActiveCues._42_2_) goto LAB_0053e8c2;
        sVar1 = *psVar8;
      }
      *psVar8 = pActiveCues._40_2_;
    }
  }
  else {
    uVar13 = (ulong)pActiveCues[0x2c];
    pActiveCues._48_4_ = 0;
    pvVar4 = malloc(uVar13 + 0x38);
    puVar14 = (uint64_t *)0x0;
    if (pvVar4 != (void *)0x0) {
      puVar14 = (uint64_t *)
                ((long)pvVar4 + 0x10U + (uVar13 - ((long)pvVar4 + 0x10U) % uVar13) % uVar13);
      puVar14[-2] = 0x28;
      puVar14[-1] = pvVar4;
    }
    pActiveCues._56_8_ = puVar14;
    *puVar14 = 0;
    puVar14[1] = 0;
    puVar14[2] = 0;
    puVar14[3] = 0;
    puVar14[4] = 0;
    pActiveCues._40_2_ = 0;
    pActiveCues._42_2_ = 5;
    pActiveCues._72_4_ = 0xa110ca7e;
    pActiveCues._52_2_ = 5;
  }
LAB_0053e8c2:
  *(uint32_t **)(pActiveCues._56_8_ + (ulong)(ushort)pActiveCues._40_2_ * 8) = puVar3;
  pActiveCues._40_2_ = pActiveCues._40_2_ + 1;
  CriticalSection__Unlock((CriticalSection *)pActiveCues);
  puVar5 = operator_new(0x48);
  *puVar5 = 1;
  *(uint64_t *)(puVar5 + 2) = 0;
  puVar5[6] = 0;
  *(uint64_t *)(puVar5 + 8) = 0;
  *(uint64_t *)(puVar5 + 0x10) = 0;
  *(uint64_t *)(puVar5 + 4) = 0;
                    /* try { // try from 0053e925 to 0053e929 has its CatchHandler @ 0053ec95 */
  alGenBuffers(2,puVar5 + 4);
  *(uint32_t **)(puVar3 + 2) = puVar5;
  local_58 = *(uint64_t *)(arg1 + 8);
  local_50 = *(uint32_t *)arg1;
  this = operator_new(0x160);
                    /* try { // try from 0053e955 to 0053e959 has its CatchHandler @ 0053ec82 */
  AudioFile__AudioFile(this,(AudioFileCreation *)&local_58);
  *(AudioFile **)(*(long *)(puVar3 + 2) + 0x20) = this;
  AudioFile__GetWaveFormat(this,(TWAVEFORMATEX *)(*(long *)(puVar3 + 2) + 0x28));
  lVar7 = *(long *)(puVar3 + 2);
  uVar6 = init_adpcm((TWAVEFORMATEX *)(lVar7 + 0x28));
  *(uint64_t *)(lVar7 + 0x40) = uVar6;
  lVar7 = *(long *)(puVar3 + 2);
  if (*(short *)(lVar7 + 0x2a) == 1) {
    *(uint *)(lVar7 + 0x18) = (*(short *)(lVar7 + 0x36) != 8) + 0x1100;
  }
  else if (*(short *)(lVar7 + 0x2a) == 2) {
    *(uint *)(lVar7 + 0x18) = (*(short *)(lVar7 + 0x36) != 8) + 0x1102;
  }
  if ((*arg1 & 1) == 0) {
    local_3c[0] = 0;
    AudioFile__CopyWavData(this,(uchar **)(*(long *)(puVar3 + 2) + 8),local_3c);
    unpack_adpcm(*(AdpcmDecoder **)(*(long *)(puVar3 + 2) + 0x40),
                 *(void **)(*(long *)(puVar3 + 2) + 8),local_3c[0]);
    lVar7 = *(long *)(puVar3 + 2);
    alBufferData(*(uint32_t *)(lVar7 + 0x10),*(uint32_t *)(lVar7 + 0x18),
                 *(uint64_t *)(*(long *)(lVar7 + 0x40) + 0x18),
                 *(uint32_t *)(*(long *)(lVar7 + 0x40) + 0x20),*(uint32_t *)(lVar7 + 0x2c));
    lVar7 = *(long *)(*(long *)(puVar3 + 2) + 0x40);
    if (*(void **)(lVar7 + 0x18) != (void *)0x0) {
      operator_delete__(*(void **)(lVar7 + 0x18));
      lVar7 = *(long *)(*(long *)(puVar3 + 2) + 0x40);
    }
    *(uint64_t *)(lVar7 + 0x18) = 0;
    *(uint32_t *)(*(long *)(*(long *)(puVar3 + 2) + 0x40) + 0x20) = 0;
    if (this != (AudioFile *)0x0) {
      AudioFile__AudioFile__005a75c0(this);
      operator_delete(this);
    }
    *(uint64_t *)(*(long *)(puVar3 + 2) + 0x20) = 0;
  }
  return puVar3;
}

/* ======================================================================
 * audDuplicateCue  (Ghidra `audDuplicateCue` @ 0053eca0)
 * Signature: uint8_t audDuplicateCue(void)
 * Calls: `operator_new`
 * Called by: `Clone`
 */
void audDuplicateCue(long arg1)

{
  int *piVar1;
  void *pvVar2;
  
  pvVar2 = operator_new(0x10);
  *(uint64_t *)((long)pvVar2 + 8) = 0;
  *(uint32_t *)((long)pvVar2 + 4) = 0x3f800000;
  piVar1 = *(int **)(arg1 + 8);
  *(int **)((long)pvVar2 + 8) = piVar1;
  *piVar1 = *piVar1 + 1;
  return;
}

/* ======================================================================
 * audDestroyCue  (Ghidra `audDestroyCue` @ 0053ecd0)
 * Signature: uint8_t audDestroyCue(void)
 * Calls: `AudioFile__AudioFile__005a75c0`, `AutoLockSection__AutoLockSection`, `AutoLockSection__AutoLockSection__005b59d0`, `TAudio__InvalidateInstance`, `alDeleteBuffers`, `alDeleteSources`, `free`, `operator_delete`
 * Called by: `DestroyCachedCue`
 */
void audDestroyCue(uint64_t *arg1)

{
  ushort *puVar1;
  ushort uVar2;
  void *pvVar3;
  int *piVar4;
  AudioFile *this;
  void *pvVar5;
  void *pvVar6;
  ushort uVar7;
  short sVar8;
  uint uVar9;
  ushort uVar10;
  long lVar11;
  uint64_t *puVar12;
  int iVar13;
  uint uVar14;
  bool bVar15;
  AutoLockSection aAStack_38 [24];
  
  AutoLockSection__AutoLockSection(aAStack_38,(CriticalSection *)XAudioSection);
  pvVar3 = (void *)*arg1;
  if (pvVar3 != (void *)0x0) {
    puVar12 = &DAT_0081cec8 /* R:1.1930094605875763e-38f */;
    iVar13 = 0;
    do {
      while (pvVar3 != (void *)*puVar12) {
        iVar13 = iVar13 + 1;
        puVar12 = puVar12 + 4;
        if (iVar13 == 200) goto LAB_0053ed60;
      }
      if (*(int *)(puVar12 + -1) != 0) {
                    /* try { // try from 0053ed2e to 0053ee00 has its CatchHandler @ 0053ef0e */
        alDeleteSources(1,&pVoices + (long)iVar13 * 8);
        *(uint32_t *)(puVar12 + -1) = 0;
      }
      TAudio__InvalidateInstance(Audio,(TAudioInstance *)puVar12[1]);
      iVar13 = iVar13 + 1;
      puVar12 = puVar12 + 4;
    } while (iVar13 != 200);
LAB_0053ed60:
    if (pActiveCues._40_2_ != 0) {
      uVar7 = 0;
      puVar12 = (uint64_t *)pActiveCues._56_8_;
      if (pvVar3 == *(void **)pActiveCues._56_8_) {
        uVar14 = 1;
        uVar9 = 0;
      }
      else {
        do {
          uVar7 = uVar7 + 1;
          if (uVar7 == pActiveCues._40_2_) goto LAB_0053ed9d;
          puVar12 = puVar12 + 1;
        } while (pvVar3 != (void *)*puVar12);
        uVar9 = (uint)uVar7;
        uVar14 = uVar9 + 1;
      }
      if ((uVar14 < (ushort)pActiveCues._40_2_) &&
         ((int)uVar9 < (int)((ushort)pActiveCues._40_2_ - 1))) {
        lVar11 = (long)(int)uVar9 << 3;
        uVar14 = uVar9;
        do {
          puVar12 = (uint64_t *)(pActiveCues._56_8_ + lVar11);
          lVar11 = lVar11 + 8;
          uVar14 = uVar14 + 1;
          *puVar12 = *(uint64_t *)(pActiveCues._56_8_ + lVar11);
        } while ((int)uVar14 < (int)((ushort)pActiveCues._40_2_ - 1));
      }
      if ((pActiveCues._48_4_ == 1) && (pActiveCues._42_2_ != 0)) {
        uVar10 = 0;
        uVar7 = pActiveCues._42_2_;
        do {
          while( true ) {
            puVar1 = (ushort *)(pActiveCues._64_8_ + (ulong)uVar10 * 2);
            uVar2 = *puVar1;
            if (uVar2 != uVar9) break;
            *puVar1 = 0xffff;
            uVar10 = uVar10 + 1;
            uVar7 = pActiveCues._42_2_;
            if ((ushort)pActiveCues._42_2_ <= uVar10) goto LAB_0053ee83;
          }
          if ((uVar9 < uVar2) && ((ushort)(uVar2 - 1) < 0xfffe)) {
            *puVar1 = uVar2 - 1;
            uVar7 = pActiveCues._42_2_;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar7);
      }
LAB_0053ee83:
      sVar8 = pActiveCues._40_2_ + -1;
      bVar15 = pActiveCues._40_2_ != 0;
      pActiveCues._40_2_ = 0;
      if (bVar15) {
        pActiveCues._40_2_ = sVar8;
      }
    }
LAB_0053ed9d:
    piVar4 = *(int **)((long)pvVar3 + 8);
    if ((piVar4 != (int *)0x0) && (iVar13 = *piVar4, *piVar4 = iVar13 + -1, iVar13 + -1 == 0)) {
      this = *(AudioFile **)(piVar4 + 8);
      if (this != (AudioFile *)0x0) {
        AudioFile__AudioFile__005a75c0(this);
        operator_delete(this);
      }
      if (*(void **)(piVar4 + 2) != (void *)0x0) {
        free(*(void **)(piVar4 + 2));
      }
      pvVar5 = *(void **)(piVar4 + 0x10);
      pvVar6 = *(void **)((long)pvVar5 + 0x18);
      if (pvVar6 != (void *)0x0) {
        operator_delete__(pvVar6);
      }
      operator_delete(pvVar5);
      alDeleteBuffers(2,piVar4 + 4);
      operator_delete(piVar4);
    }
    operator_delete(pvVar3);
  }
  *arg1 = 0;
  AutoLockSection__AutoLockSection__005b59d0(aAStack_38);
  return;
}

/* ======================================================================
 * audPlayCue  (Ghidra `audPlayCue` @ 0053ef30)
 * Signature: uint8_t audPlayCue(void)
 * Calls: `AudioFile__GetStreamingData`, `AudioFile__ResetStream`, `AutoLockSection__AutoLockSection`, `AutoLockSection__AutoLockSection__005b59d0`, `alBufferData`, `alGenSources`, `alGetError`, `alSourcePlay`, `alSourceQueueBuffers`, `alSourcef` (+4 more)
 * Called by: `TAudioCue__Play`
 */
void audPlayCue(byte *arg1,uint arg2,uint64_t *arg3)

{
  void *pvVar1;
  void *pvVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  uint64_t uVar6;
  void *local_58;
  uint local_50;
  AutoLockSection local_48 [24];
  
  AutoLockSection__AutoLockSection(local_48,(CriticalSection *)XAudioSection);
  if (arg1 != (byte *)0x0) {
    if ((*arg1 & 1) != 0) {
      AudioFile__ResetStream(*(AudioFile **)(*(long *)(arg1 + 8) + 0x20));
      pvVar1 = *(void **)(*(long *)(arg1 + 8) + 0x40);
      pvVar2 = *(void **)((long)pvVar1 + 0x18);
      if (pvVar2 != (void *)0x0) {
        operator_delete__(pvVar2);
      }
      operator_delete(pvVar1);
      lVar5 = *(long *)(arg1 + 8);
      uVar6 = init_adpcm((TWAVEFORMATEX *)(lVar5 + 0x28));
      *(uint64_t *)(lVar5 + 0x40) = uVar6;
    }
    lVar5 = 0;
    do {
      if ((&pVoices)[lVar5 * 8] == 0) {
        lVar5 = (long)(int)lVar5;
        (&DAT_0081cedc /* R:2.2958888052482446e-39f */)[lVar5 * 8] = 0;
                    /* try { // try from 0053efa3 to 0053efce has its CatchHandler @ 0053f247 */
        alGetError();
        (&pVoices)[lVar5 * 8] = 0;
        alGenSources(1,&pVoices + lVar5 * 8);
        iVar3 = alGetError();
        if ((iVar3 == 0) && (iVar3 = (&pVoices)[lVar5 * 8], iVar3 != 0)) {
          (&DAT_0081cec8 /* R:1.1930094605875763e-38f */)[lVar5 * 4] = arg1;
          if ((*arg1 & 1) == 0) {
            alSourcei(iVar3,0x1009,0);
            alSourceQueueBuffers((&pVoices)[lVar5 * 8],1,*(long *)(arg1 + 8) + 0x10);
          }
          else {
            local_58 = (void *)0x0;
            local_50 = 0;
                    /* try { // try from 0053f023 to 0053f157 has its CatchHandler @ 0053f232 */
            AudioFile__GetStreamingData
                      (*(AudioFile **)(*(long *)(arg1 + 8) + 0x20),(AudioStreamData *)&local_58);
            if (local_58 != (void *)0x0) {
              if (0 < (int)local_50) {
                unpack_adpcm(*(AdpcmDecoder **)(*(long *)(arg1 + 8) + 0x40),local_58,local_50);
                lVar4 = *(long *)(arg1 + 8);
                alBufferData(*(uint32_t *)(lVar4 + 0x10),*(uint32_t *)(lVar4 + 0x18),
                             *(uint64_t *)(*(long *)(lVar4 + 0x40) + 0x18),
                             *(uint32_t *)(*(long *)(lVar4 + 0x40) + 0x20),
                             *(uint32_t *)(lVar4 + 0x2c));
                lVar4 = *(long *)(*(long *)(arg1 + 8) + 0x40);
                if (*(void **)(lVar4 + 0x18) != (void *)0x0) {
                  operator_delete__(*(void **)(lVar4 + 0x18));
                  lVar4 = *(long *)(*(long *)(arg1 + 8) + 0x40);
                }
                *(uint64_t *)(lVar4 + 0x18) = 0;
                *(uint32_t *)(*(long *)(*(long *)(arg1 + 8) + 0x40) + 0x20) = 0;
                AudioFile__GetStreamingData
                          (*(AudioFile **)(*(long *)(arg1 + 8) + 0x20),
                           (AudioStreamData *)&local_58);
                if ((local_58 == (void *)0x0) || ((int)local_50 < 1)) {
                  uVar6 = 1;
                }
                else {
                  unpack_adpcm(*(AdpcmDecoder **)(*(long *)(arg1 + 8) + 0x40),local_58,local_50);
                  lVar4 = *(long *)(arg1 + 8);
                  alBufferData(*(uint32_t *)(lVar4 + 0x14),*(uint32_t *)(lVar4 + 0x18),
                               *(uint64_t *)(*(long *)(lVar4 + 0x40) + 0x18),
                               *(uint32_t *)(*(long *)(lVar4 + 0x40) + 0x20),
                               *(uint32_t *)(lVar4 + 0x2c));
                  lVar4 = *(long *)(*(long *)(arg1 + 8) + 0x40);
                  if (*(void **)(lVar4 + 0x18) != (void *)0x0) {
                    operator_delete__(*(void **)(lVar4 + 0x18));
                    lVar4 = *(long *)(*(long *)(arg1 + 8) + 0x40);
                  }
                  *(uint64_t *)(lVar4 + 0x18) = 0;
                  uVar6 = 2;
                  *(uint32_t *)(*(long *)(*(long *)(arg1 + 8) + 0x40) + 0x20) = 0;
                }
                alSourcei((&pVoices)[lVar5 * 8],0x1009,0);
                alSourceQueueBuffers((&pVoices)[lVar5 * 8],uVar6,*(long *)(arg1 + 8) + 0x10);
              }
            }
          }
                    /* try { // try from 0053f173 to 0053f214 has its CatchHandler @ 0053f247 */
          alSourcef((float)arg2 * DAT_005c07b0 /* R:0.009999999776482582f */,(&pVoices)[lVar5 * 8],0x100a);
          alSourcePlay((&pVoices)[lVar5 * 8]);
          if (arg3 == (uint64_t *)0x0) {
            (&DAT_0081ced0 /* R:2.2420775429197073e-44f */)[lVar5 * 4] = 0;
          }
          else {
            *(uint32_t *)(arg3 + 3) = 1;
            (&DAT_0081ced0 /* R:2.2420775429197073e-44f */)[lVar5 * 4] = arg3;
            *arg3 = &pVoices + lVar5 * 8;
            *(uint *)(arg3 + 1) = arg2;
          }
        }
        break;
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 != 200);
  }
  AutoLockSection__AutoLockSection__005b59d0(local_48);
  return;
}

/* ======================================================================
 * audStopCue  (Ghidra `audStopCue` @ 0053f250)
 * Signature: uint8_t audStopCue(void)
 * Calls: `AutoLockSection__AutoLockSection`, `AutoLockSection__AutoLockSection__005b59d0`, `TAudio__InvalidateInstance`, `alDeleteSources`, `alSourceStop`, `alSourcei`
 * Called by: `TAudioInstance__Stop`, `TAudio__DestroyManagedInstance`, `TAudio__DestroyManagedInstances`, `TAudio__RemoveInstanceByLibraryID`, `TAudio__RemoveInstanceByPosition`, `TAudio__Update`
 */
void audStopCue(uint64_t *arg1)

{
  int *piVar1;
  AutoLockSection aAStack_48 [16];
  AutoLockSection local_38 [16];
  int local_28 [6];
  
  AutoLockSection__AutoLockSection(aAStack_48,(CriticalSection *)XAudioSection);
  if ((arg1 != (uint64_t *)0x0) && (piVar1 = (int *)*arg1, piVar1 != (int *)0x0)) {
    *(uint32_t *)(arg1 + 3) = 0;
    arg1[2] = 0;
    if (*piVar1 != 0) {
                    /* try { // try from 0053f2a0 to 0053f2c9 has its CatchHandler @ 0053f339 */
      alSourceStop();
      TAudio__InvalidateInstance(Audio,*(TAudioInstance **)(piVar1 + 4));
      local_28[0] = *piVar1;
      AutoLockSection__AutoLockSection(local_38,(CriticalSection *)XAudioSection);
      piVar1 = &pVoices;
      do {
        while (*piVar1 == local_28[0]) {
                    /* try { // try from 0053f2f4 to 0053f307 has its CatchHandler @ 0053f34c */
          alSourcei(*piVar1,0x1009,0);
          alDeleteSources(1,local_28);
          *piVar1 = 0;
          piVar1 = piVar1 + 8;
          if (piVar1 == (int *)XAudioSection) goto LAB_0053f320;
        }
        piVar1 = piVar1 + 8;
      } while (piVar1 != (int *)XAudioSection);
LAB_0053f320:
                    /* try { // try from 0053f325 to 0053f329 has its CatchHandler @ 0053f339 */
      AutoLockSection__AutoLockSection__005b59d0(local_38);
      AutoLockSection__AutoLockSection__005b59d0(aAStack_48);
      return;
    }
  }
  AutoLockSection__AutoLockSection__005b59d0(aAStack_48);
  return;
}

/* ======================================================================
 * audSetVolume  (Ghidra `audSetVolume` @ 0053f360)
 * Signature: uint8_t audSetVolume(void)
 * Calls: `AutoLockSection__AutoLockSection`, `AutoLockSection__AutoLockSection__005b59d0`, `alSourcef`
 * Called by: `TAudioInstance__SetVolume`, `TAudio__SetMusicVolume`, `TAudio__Update`
 */
void audSetVolume(uint64_t *arg1,uint arg2)

{
  int iVar1;
  AutoLockSection aAStack_28 [24];
  
  AutoLockSection__AutoLockSection(aAStack_28,(CriticalSection *)XAudioSection);
  if (((arg1 != (uint64_t *)0x0) && ((int *)*arg1 != (int *)0x0)) &&
     (iVar1 = *(int *)*arg1, iVar1 != 0)) {
                    /* try { // try from 0053f3c2 to 0053f3c6 has its CatchHandler @ 0053f3c9 */
    alSourcef((float)arg2 * DAT_005c07b0 /* R:0.009999999776482582f */,iVar1,0x100a);
  }
  AutoLockSection__AutoLockSection__005b59d0(aAStack_28);
  return;
}

/* ======================================================================
 * audMute  (Ghidra `audMute` @ 0053f3e0)
 * Signature: uint8_t audMute(void)
 * Calls: `AutoLockSection__AutoLockSection`, `AutoLockSection__AutoLockSection__005b59d0`, `alGetSourcefv`, `alSourcef`
 * Called by: (none)
 */
void audMute(void)

{
  int *piVar1;
  int iVar2;
  AutoLockSection aAStack_28 [24];
  
  iVar2 = 0;
  piVar1 = &pVoices;
  AutoLockSection__AutoLockSection(aAStack_28,(CriticalSection *)XAudioSection);
  do {
    while (*piVar1 != 0) {
                    /* try { // try from 0053f428 to 0053f43b has its CatchHandler @ 0053f45a */
      alGetSourcefv(*piVar1,0x100a,&DAT_0081ced8 /* R:2.8586488672226268e-42f */ + (long)iVar2 * 8);
      alSourcef(0,*piVar1,0x100a);
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 8;
      if (iVar2 == 200) goto LAB_0053f44b;
    }
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 8;
  } while (iVar2 != 200);
LAB_0053f44b:
  AutoLockSection__AutoLockSection__005b59d0(aAStack_28);
  return;
}

/* ======================================================================
 * audUnMute  (Ghidra `audUnMute` @ 0053f470)
 * Signature: uint8_t audUnMute(void)
 * Calls: `AutoLockSection__AutoLockSection`, `AutoLockSection__AutoLockSection__005b59d0`, `alSourcef`
 * Called by: (none)
 */
void audUnMute(void)

{
  int *piVar1;
  AutoLockSection aAStack_18 [16];
  
  piVar1 = &pVoices;
  AutoLockSection__AutoLockSection(aAStack_18,(CriticalSection *)XAudioSection);
  do {
    while (*piVar1 != 0) {
                    /* try { // try from 0053f4ad to 0053f4b1 has its CatchHandler @ 0053f4cd */
      alSourcef(piVar1[6],*piVar1,0x100a);
      piVar1 = piVar1 + 8;
      if (piVar1 == (int *)XAudioSection) goto LAB_0053f4bf;
    }
    piVar1 = piVar1 + 8;
  } while (piVar1 != (int *)XAudioSection);
LAB_0053f4bf:
  AutoLockSection__AutoLockSection__005b59d0(aAStack_18);
  return;
}

/* ======================================================================
 * audDestroyInstance  (Ghidra `audDestroyInstance` @ 0053f4e0)
 * Signature: uint8_t audDestroyInstance(void)
 * Calls: `AutoLockSection__AutoLockSection`, `AutoLockSection__AutoLockSection__005b59d0`, `alDeleteSources`, `alSourceStop`, `alSourcei`
 * Called by: `TAudio__DestroyManagedInstances`, `TAudio__RemoveInstanceByLibraryID`, `TAudio__RemoveInstanceByPosition`, `TAudio__Update`
 */
void audDestroyInstance(uint64_t *arg1)

{
  int *piVar1;
  int *piVar2;
  AutoLockSection aAStack_48 [16];
  AutoLockSection local_38 [16];
  int local_28 [6];
  
  AutoLockSection__AutoLockSection(aAStack_48,(CriticalSection *)XAudioSection);
  piVar1 = (int *)*arg1;
  arg1[2] = 0;
  if (((piVar1 != (int *)0x0) && (*(uint64_t **)(piVar1 + 4) == arg1)) && (*piVar1 != 0)) {
                    /* try { // try from 0053f527 to 0053f541 has its CatchHandler @ 0053f5a7 */
    alSourceStop();
    local_28[0] = *piVar1;
    AutoLockSection__AutoLockSection(local_38,(CriticalSection *)XAudioSection);
    piVar2 = &pVoices;
    do {
      if (*piVar2 == local_28[0]) {
                    /* try { // try from 0053f56c to 0053f57f has its CatchHandler @ 0053f5ba */
        alSourcei(*piVar2,0x1009,0);
        alDeleteSources(1,local_28);
        *piVar2 = 0;
      }
      piVar2 = piVar2 + 8;
    } while (piVar2 != (int *)XAudioSection);
                    /* try { // try from 0053f595 to 0053f599 has its CatchHandler @ 0053f5a7 */
    AutoLockSection__AutoLockSection__005b59d0(local_38);
    piVar1[4] = 0;
    piVar1[5] = 0;
  }
  AutoLockSection__AutoLockSection__005b59d0(aAStack_48);
  return;
}

/* ======================================================================
 * audDecodeConsoleADPCM  (Ghidra `audDecodeConsoleADPCM` @ 0053f5d0)
 * Signature: uint8_t audDecodeConsoleADPCM(void)
 * Calls: (none)
 * Called by: `TAudio__DecodeConsoleADPCMData`
 */
void audDecodeConsoleADPCM(void)

{
  return;
}

/* ======================================================================
 * audAlloc  (Ghidra `audAlloc` @ 0053f5e0)
 * Signature: uint8_t audAlloc(void)
 * Calls: `malloc`
 * Called by: `AudioFile__AudioFile`, `AudioFile__CopyWavData`
 */
void audAlloc(uint arg1)

{
  malloc((ulong)arg1);
  return;
}

/* ======================================================================
 * audFree  (Ghidra `audFree` @ 0053f5f0)
 * Signature: uint8_t audFree(void)
 * Calls: (none)
 * Called by: `AudioFile__AudioFile__005a75c0`
 */
void audFree(void)

{
  (*(code *)PTR_free_00815b18)();
  return;
}

/* ======================================================================
 * audRealloc  (Ghidra `audRealloc` @ 0053f600)
 * Signature: uint8_t audRealloc(void)
 * Calls: (none)
 * Called by: (none)
 */
uint64_t audRealloc(void)

{
  return 0;
}

/* ======================================================================
 * flush_pending  (Ghidra `flush_pending` @ 00562f50)
 * Signature: uint8_t flush_pending(void)
 * Calls: `memcpy`
 * Called by: `deflate`, `deflateParams`, `deflate_fast`, `deflate_slow`, `deflate_stored`
 */
void flush_pending(long arg1)

{
  long *plVar1;
  int *piVar2;
  long lVar3;
  uint uVar4;
  ulong __n;
  
  uVar4 = *(uint *)(*(long *)(arg1 + 0x38) + 0x28);
  if (*(uint *)(arg1 + 0x20) <= uVar4) {
    uVar4 = *(uint *)(arg1 + 0x20);
  }
  if (uVar4 != 0) {
    __n = (ulong)uVar4;
    memcpy(*(void **)(arg1 + 0x18),*(void **)(*(long *)(arg1 + 0x38) + 0x20),__n);
    *(long *)(arg1 + 0x18) = *(long *)(arg1 + 0x18) + __n;
    plVar1 = (long *)(*(long *)(arg1 + 0x38) + 0x20);
    *plVar1 = *plVar1 + __n;
    *(long *)(arg1 + 0x28) = *(long *)(arg1 + 0x28) + __n;
    *(int *)(arg1 + 0x20) = *(int *)(arg1 + 0x20) - uVar4;
    piVar2 = (int *)(*(long *)(arg1 + 0x38) + 0x28);
    *piVar2 = *piVar2 - uVar4;
    lVar3 = *(long *)(arg1 + 0x38);
    if (*(int *)(lVar3 + 0x28) == 0) {
      *(uint64_t *)(lVar3 + 0x20) = *(uint64_t *)(lVar3 + 0x10);
    }
  }
  return;
}

/* ======================================================================
 * fill_window  (Ghidra `fill_window` @ 00562fe0)
 * Signature: uint8_t fill_window(void)
 * Calls: `adler32`, `crc32`, `memcpy`
 * Called by: `deflate_fast`, `deflate_slow`, `deflate_stored`
 */
void fill_window(long *arg1)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  ushort uVar6;
  uint uVar7;
  int iVar8;
  ulong __n;
  ushort *puVar9;
  long lVar10;
  uint uVar11;
  ushort *puVar12;
  uint uVar13;
  ulong __n_00;
  uint uVar14;
  
  uVar2 = *(uint *)((long)arg1 + 0x44);
  uVar14 = *(uint *)((long)arg1 + 0xa4);
  __n = (ulong)uVar2;
  uVar11 = uVar2;
  do {
    uVar13 = ((int)arg1[0xb] - uVar14) - *(uint *)((long)arg1 + 0x9c);
    if (*(uint *)((long)arg1 + 0x9c) < uVar11 + (uVar2 - 0x106)) {
      plVar4 = (long *)*arg1;
      uVar11 = *(uint *)(plVar4 + 1);
    }
    else {
      memcpy((void *)arg1[10],(void *)(__n + arg1[10]),__n);
      arg1[0x11] = arg1[0x11] - __n;
      *(uint *)(arg1 + 0x14) = (int)arg1[0x14] - uVar2;
      *(int *)((long)arg1 + 0x9c) = *(int *)((long)arg1 + 0x9c) - uVar2;
      puVar9 = (ushort *)(arg1[0xd] + (ulong)*(uint *)((long)arg1 + 0x74) * 2);
      puVar12 = puVar9 + (-1 - (ulong)(*(uint *)((long)arg1 + 0x74) - 1));
      do {
        puVar9 = puVar9 + -1;
        uVar1 = *puVar9;
        uVar6 = 0;
        if (uVar2 < uVar1 || uVar2 == uVar1) {
          uVar6 = uVar1 - (short)uVar2;
        }
        *puVar9 = uVar6;
      } while (puVar9 != puVar12);
      puVar9 = (ushort *)(__n * 2 + arg1[0xc]);
      puVar12 = puVar9 + (-1 - (ulong)(uVar2 - 1));
      do {
        puVar9 = puVar9 + -1;
        uVar1 = *puVar9;
        uVar6 = 0;
        if (uVar2 < uVar1 || uVar2 == uVar1) {
          uVar6 = uVar1 - (short)uVar2;
        }
        *puVar9 = uVar6;
      } while (puVar9 != puVar12);
      plVar4 = (long *)*arg1;
      uVar13 = uVar13 + uVar2;
      uVar11 = *(uint *)(plVar4 + 1);
    }
    if (uVar11 == 0) {
      return;
    }
    iVar8 = 0;
    uVar7 = 0;
    lVar5 = arg1[10];
    uVar3 = *(uint *)((long)arg1 + 0x9c);
    uVar14 = *(uint *)((long)arg1 + 0xa4);
    if (uVar13 < uVar11) {
      if (uVar13 != 0) {
        iVar8 = uVar11 - uVar13;
        uVar11 = uVar13;
        goto LAB_005630ce;
      }
    }
    else {
LAB_005630ce:
      uVar7 = uVar11;
      *(int *)(plVar4 + 1) = iVar8;
      if (*(int *)(plVar4[7] + 0x2c) == 1) {
        lVar10 = adler32(plVar4[0xc],*plVar4,uVar7);
        plVar4[0xc] = lVar10;
      }
      else if (*(int *)(plVar4[7] + 0x2c) == 2) {
        lVar10 = crc32(plVar4[0xc],*plVar4,uVar7);
        plVar4[0xc] = lVar10;
      }
      __n_00 = (ulong)uVar7;
      memcpy((void *)((ulong)uVar14 + (ulong)uVar3 + lVar5),(void *)*plVar4,__n_00);
      *plVar4 = *plVar4 + __n_00;
      plVar4[2] = plVar4[2] + __n_00;
      uVar14 = *(uint *)((long)arg1 + 0xa4);
    }
    uVar14 = uVar14 + uVar7;
    *(uint *)((long)arg1 + 0xa4) = uVar14;
    if (2 < uVar14) {
      uVar11 = (uint)*(byte *)(arg1[10] + (ulong)*(uint *)((long)arg1 + 0x9c));
      *(uint *)(arg1 + 0xe) = uVar11;
      *(uint *)(arg1 + 0xe) =
           ((uint)*(byte *)(arg1[10] + (ulong)(*(uint *)((long)arg1 + 0x9c) + 1)) ^
           uVar11 << ((byte)(int)arg1[0x10] & 0x1f)) & *(uint *)((long)arg1 + 0x7c);
      if (0x105 < uVar14) {
        return;
      }
    }
    if (*(int *)(*arg1 + 8) == 0) {
      return;
    }
    uVar11 = *(uint *)((long)arg1 + 0x44);
  } while( true );
}

/* ======================================================================
 * do_flush  (Ghidra `do_flush` @ 00566090)
 * Signature: uint8_t do_flush(void)
 * Calls: `deflate`, `fwrite`
 * Called by: `gzclose`, `gzflush`
 */
uint do_flush(long arg1,uint32_t arg2)

{
  bool bVar1;
  uint uVar2;
  size_t sVar3;
  ulong uVar4;
  uint uVar5;
  
  uVar2 = 0xfffffffe;
  if ((arg1 != 0) && (*(char *)(arg1 + 0xac) == 'w')) {
    uVar4 = (ulong)*(uint *)(arg1 + 0x20);
    *(uint32_t *)(arg1 + 8) = 0;
    bVar1 = false;
    do {
      uVar5 = 0x4000 - (int)uVar4;
      if (uVar5 != 0) {
        sVar3 = fwrite(*(void **)(arg1 + 0x88),1,(ulong)uVar5,*(FILE **)(arg1 + 0x78));
        if (uVar5 != (uint)sVar3) {
          *(uint32_t *)(arg1 + 0x70) = 0xffffffff;
          return 0xffffffff;
        }
        *(uint32_t *)(arg1 + 0x20) = 0x4000;
        uVar4 = 0x4000;
        *(uint64_t *)(arg1 + 0x18) = *(uint64_t *)(arg1 + 0x88);
      }
      if (bVar1) {
        uVar2 = *(uint *)(arg1 + 0x70);
        break;
      }
      *(long *)(arg1 + 0xc0) = *(long *)(arg1 + 0xc0) + uVar4;
      uVar2 = deflate(arg1,arg2);
      uVar4 = (ulong)*(uint *)(arg1 + 0x20);
      *(uint *)(arg1 + 0x70) = uVar2;
      *(long *)(arg1 + 0xc0) = *(long *)(arg1 + 0xc0) - uVar4;
      if ((uVar5 == 0) && (uVar2 == 0xfffffffb)) {
        *(uint32_t *)(arg1 + 0x70) = 0;
        uVar2 = 0;
      }
      bVar1 = *(uint *)(arg1 + 0x20) != 0 || uVar2 == 1;
    } while (uVar2 < 2);
    if (uVar2 == 1) {
      uVar2 = 0;
    }
  }
  return uVar2;
}

/* ======================================================================
 * destroy  (Ghidra `destroy` @ 00566190)
 * Signature: uint8_t destroy(void)
 * Calls: `deflateEnd`, `fclose`, `free`, `inflateEnd`
 * Called by: `gz_open`, `gzclose`
 */
int destroy(void *arg1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if (arg1 == (void *)0x0) {
    iVar2 = -2;
  }
  else {
    if (*(void **)((long)arg1 + 0x98) != (void *)0x0) {
      free(*(void **)((long)arg1 + 0x98));
    }
    iVar2 = 0;
    if (*(long *)((long)arg1 + 0x38) != 0) {
      if (*(char *)((long)arg1 + 0xac) == 'w') {
        iVar2 = deflateEnd(arg1);
      }
      else {
        iVar2 = 0;
        if (*(char *)((long)arg1 + 0xac) == 'r') {
          iVar2 = inflateEnd(arg1);
        }
      }
    }
    if (((*(FILE **)((long)arg1 + 0x78) != (FILE *)0x0) &&
        (iVar1 = fclose(*(FILE **)((long)arg1 + 0x78)), iVar1 != 0)) &&
       (piVar3 = __errno_location(), *piVar3 != 0x1d)) {
      iVar2 = -1;
    }
    if (*(int *)((long)arg1 + 0x70) < 0) {
      iVar2 = *(int *)((long)arg1 + 0x70);
    }
    if (*(void **)((long)arg1 + 0x80) != (void *)0x0) {
      free(*(void **)((long)arg1 + 0x80));
    }
    if (*(void **)((long)arg1 + 0x88) != (void *)0x0) {
      free(*(void **)((long)arg1 + 0x88));
    }
    if (*(void **)((long)arg1 + 0xa0) != (void *)0x0) {
      free(*(void **)((long)arg1 + 0xa0));
    }
    free(arg1);
  }
  return iVar2;
}

/* ======================================================================
 * check_header  (Ghidra `check_header` @ 00566280)
 * Signature: uint8_t check_header(void)
 * Calls: `ferror`, `fread`
 * Called by: `gz_open`, `gzread_part_1`
 */
void check_header(long *arg1)

{
  byte bVar1;
  uint32_t uVar2;
  char *pcVar3;
  byte *pbVar4;
  long lVar5;
  int *piVar6;
  size_t sVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  byte bVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  
  uVar14 = *(uint *)(arg1 + 1);
  if (uVar14 < 2) {
    if (uVar14 != 0) {
      *(uint8_t *)arg1[0x10] = *(uint8_t *)*arg1;
    }
    piVar6 = __errno_location();
    *piVar6 = 0;
    sVar7 = fread((void *)((ulong)uVar14 + arg1[0x10]),1,(long)(0x4000 >> ((byte)uVar14 & 0x1f)),
                  (FILE *)arg1[0xf]);
    if (((int)sVar7 == 0) && (iVar13 = ferror((FILE *)arg1[0xf]), iVar13 != 0)) {
      *(uint32_t *)(arg1 + 0xe) = 0xffffffff;
    }
    uVar14 = (int)sVar7 + (int)arg1[1];
    pcVar3 = (char *)arg1[0x10];
    *arg1 = (long)pcVar3;
    *(uint *)(arg1 + 1) = uVar14;
    if (uVar14 < 2) {
      *(uint *)(arg1 + 0x15) = uVar14;
      return;
    }
  }
  else {
    pcVar3 = (char *)*arg1;
  }
  if ((*pcVar3 != '\x1f') || (pcVar3[1] != -0x75)) {
    *(uint32_t *)(arg1 + 0x15) = 1;
    return;
  }
  iVar13 = uVar14 - 2;
  pbVar4 = (byte *)(pcVar3 + 2);
  *(int *)(arg1 + 1) = iVar13;
  *arg1 = (long)pbVar4;
  if (*(int *)((long)arg1 + 0x74) != 0) goto LAB_00566510;
  iVar10 = 0;
  if (iVar13 == 0) {
    piVar6 = __errno_location();
    *piVar6 = 0;
    sVar7 = fread((void *)arg1[0x10],1,0x4000,(FILE *)arg1[0xf]);
    iVar13 = (int)sVar7;
    *(int *)(arg1 + 1) = iVar13;
    if (iVar13 != 0) {
      pbVar4 = (byte *)arg1[0x10];
      iVar10 = *(int *)((long)arg1 + 0x74);
      *arg1 = (long)pbVar4;
      goto LAB_005662f8;
    }
    *(uint32_t *)((long)arg1 + 0x74) = 1;
    iVar13 = ferror((FILE *)arg1[0xf]);
    if (iVar13 != 0) {
      *(uint32_t *)(arg1 + 0xe) = 0xffffffff;
    }
    iVar10 = *(int *)((long)arg1 + 0x74);
    uVar14 = 0xffffffff;
  }
  else {
LAB_005662f8:
    *(int *)(arg1 + 1) = iVar13 + -1;
    uVar14 = (uint)*pbVar4;
    *arg1 = (long)(pbVar4 + 1);
  }
  if (iVar10 == 0) {
    iVar13 = (int)arg1[1];
    if (iVar13 == 0) {
      piVar6 = __errno_location();
      *piVar6 = 0;
      sVar7 = fread((void *)arg1[0x10],1,0x4000,(FILE *)arg1[0xf]);
      iVar13 = (int)sVar7;
      *(int *)(arg1 + 1) = iVar13;
      if (iVar13 == 0) {
        *(uint32_t *)((long)arg1 + 0x74) = 1;
        bVar12 = 0xff;
        iVar13 = ferror((FILE *)arg1[0xf]);
        if (iVar13 != 0) {
          *(uint32_t *)(arg1 + 0xe) = 0xffffffff;
        }
        goto LAB_0056632f;
      }
      pbVar4 = (byte *)arg1[0x10];
      *arg1 = (long)pbVar4;
    }
    else {
      pbVar4 = (byte *)*arg1;
    }
    *(int *)(arg1 + 1) = iVar13 + -1;
    bVar12 = *pbVar4;
    *arg1 = (long)(pbVar4 + 1);
  }
  else {
    bVar12 = 0xff;
  }
LAB_0056632f:
  if ((uVar14 != 8) || ((bVar12 & 0xe0) != 0)) {
LAB_00566510:
    *(uint32_t *)(arg1 + 0xe) = 0xfffffffd;
    return;
  }
  iVar13 = *(int *)((long)arg1 + 0x74);
  if (iVar13 == 0) {
    iVar10 = (int)arg1[1];
    if (iVar10 == 0) {
      piVar6 = __errno_location();
      *piVar6 = 0;
      sVar7 = fread((void *)arg1[0x10],1,0x4000,(FILE *)arg1[0xf]);
      iVar10 = (int)sVar7;
      *(int *)(arg1 + 1) = iVar10;
      if (iVar10 != 0) {
        iVar13 = *(int *)((long)arg1 + 0x74);
        lVar5 = arg1[0x10];
        goto LAB_0056635e;
      }
      *(uint32_t *)((long)arg1 + 0x74) = 1;
      iVar13 = ferror((FILE *)arg1[0xf]);
      if (iVar13 == 0) {
        iVar13 = *(int *)((long)arg1 + 0x74);
      }
      else {
        iVar13 = *(int *)((long)arg1 + 0x74);
        *(uint32_t *)(arg1 + 0xe) = 0xffffffff;
      }
    }
    else {
      lVar5 = *arg1;
LAB_0056635e:
      *(int *)(arg1 + 1) = iVar10 + -1;
      *arg1 = lVar5 + 1;
    }
    if (iVar13 == 0) {
      iVar10 = (int)arg1[1];
      if (iVar10 == 0) {
        piVar6 = __errno_location();
        *piVar6 = 0;
        sVar7 = fread((void *)arg1[0x10],1,0x4000,(FILE *)arg1[0xf]);
        iVar10 = (int)sVar7;
        *(int *)(arg1 + 1) = iVar10;
        if (iVar10 != 0) {
          iVar13 = *(int *)((long)arg1 + 0x74);
          lVar5 = arg1[0x10];
          goto LAB_00566381;
        }
        *(uint32_t *)((long)arg1 + 0x74) = 1;
        iVar13 = ferror((FILE *)arg1[0xf]);
        if (iVar13 == 0) {
          iVar13 = *(int *)((long)arg1 + 0x74);
        }
        else {
          iVar13 = *(int *)((long)arg1 + 0x74);
          *(uint32_t *)(arg1 + 0xe) = 0xffffffff;
        }
      }
      else {
        lVar5 = *arg1;
LAB_00566381:
        *(int *)(arg1 + 1) = iVar10 + -1;
        *arg1 = lVar5 + 1;
      }
      if (iVar13 == 0) {
        iVar10 = (int)arg1[1];
        if (iVar10 == 0) {
          piVar6 = __errno_location();
          *piVar6 = 0;
          sVar7 = fread((void *)arg1[0x10],1,0x4000,(FILE *)arg1[0xf]);
          iVar10 = (int)sVar7;
          *(int *)(arg1 + 1) = iVar10;
          if (iVar10 != 0) {
            iVar13 = *(int *)((long)arg1 + 0x74);
            lVar5 = arg1[0x10];
            goto LAB_005663a0;
          }
          *(uint32_t *)((long)arg1 + 0x74) = 1;
          iVar13 = ferror((FILE *)arg1[0xf]);
          if (iVar13 == 0) {
            iVar13 = *(int *)((long)arg1 + 0x74);
          }
          else {
            iVar13 = *(int *)((long)arg1 + 0x74);
            *(uint32_t *)(arg1 + 0xe) = 0xffffffff;
          }
        }
        else {
          lVar5 = *arg1;
LAB_005663a0:
          *(int *)(arg1 + 1) = iVar10 + -1;
          *arg1 = lVar5 + 1;
        }
        if (iVar13 == 0) {
          iVar10 = (int)arg1[1];
          if (iVar10 == 0) {
            piVar6 = __errno_location();
            *piVar6 = 0;
            sVar7 = fread((void *)arg1[0x10],1,0x4000,(FILE *)arg1[0xf]);
            iVar10 = (int)sVar7;
            *(int *)(arg1 + 1) = iVar10;
            if (iVar10 != 0) {
              iVar13 = *(int *)((long)arg1 + 0x74);
              lVar5 = arg1[0x10];
              goto LAB_005663bf;
            }
            *(uint32_t *)((long)arg1 + 0x74) = 1;
            iVar13 = ferror((FILE *)arg1[0xf]);
            if (iVar13 == 0) {
              iVar13 = *(int *)((long)arg1 + 0x74);
            }
            else {
              iVar13 = *(int *)((long)arg1 + 0x74);
              *(uint32_t *)(arg1 + 0xe) = 0xffffffff;
            }
          }
          else {
            lVar5 = *arg1;
LAB_005663bf:
            *(int *)(arg1 + 1) = iVar10 + -1;
            *arg1 = lVar5 + 1;
          }
          if (iVar13 == 0) {
            iVar10 = (int)arg1[1];
            if (iVar10 == 0) {
              piVar6 = __errno_location();
              *piVar6 = 0;
              sVar7 = fread((void *)arg1[0x10],1,0x4000,(FILE *)arg1[0xf]);
              iVar10 = (int)sVar7;
              *(int *)(arg1 + 1) = iVar10;
              if (iVar10 != 0) {
                iVar13 = *(int *)((long)arg1 + 0x74);
                lVar5 = arg1[0x10];
                goto LAB_005663de;
              }
              *(uint32_t *)((long)arg1 + 0x74) = 1;
              iVar13 = ferror((FILE *)arg1[0xf]);
              if (iVar13 == 0) {
                iVar13 = *(int *)((long)arg1 + 0x74);
              }
              else {
                iVar13 = *(int *)((long)arg1 + 0x74);
                *(uint32_t *)(arg1 + 0xe) = 0xffffffff;
              }
            }
            else {
              lVar5 = *arg1;
LAB_005663de:
              *(int *)(arg1 + 1) = iVar10 + -1;
              *arg1 = lVar5 + 1;
            }
            if (iVar13 == 0) {
              iVar10 = (int)arg1[1];
              if (iVar10 == 0) {
                piVar6 = __errno_location();
                *piVar6 = 0;
                sVar7 = fread((void *)arg1[0x10],1,0x4000,(FILE *)arg1[0xf]);
                iVar10 = (int)sVar7;
                *(int *)(arg1 + 1) = iVar10;
                if (iVar10 == 0) {
                  *(uint32_t *)((long)arg1 + 0x74) = 1;
                  iVar13 = ferror((FILE *)arg1[0xf]);
                  if (iVar13 != 0) {
                    *(uint32_t *)(arg1 + 0xe) = 0xffffffff;
                  }
                  iVar13 = *(int *)((long)arg1 + 0x74);
                  goto LAB_0056640a;
                }
                iVar13 = *(int *)((long)arg1 + 0x74);
                lVar5 = arg1[0x10];
              }
              else {
                lVar5 = *arg1;
              }
              *(int *)(arg1 + 1) = iVar10 + -1;
              *arg1 = lVar5 + 1;
            }
          }
        }
      }
    }
  }
LAB_0056640a:
  iVar10 = iVar13;
  if (((bVar12 & 4) != 0) && (iVar13 == 0)) {
    iVar10 = (int)arg1[1];
    if (iVar10 == 0) {
      piVar6 = __errno_location();
      *piVar6 = 0;
      sVar7 = fread((void *)arg1[0x10],1,0x4000,(FILE *)arg1[0xf]);
      iVar10 = (int)sVar7;
      *(int *)(arg1 + 1) = iVar10;
      if (iVar10 != 0) {
        *arg1 = arg1[0x10];
        iVar13 = *(int *)((long)arg1 + 0x74);
        goto LAB_005666de;
      }
      *(uint32_t *)((long)arg1 + 0x74) = 1;
      iVar13 = ferror((FILE *)arg1[0xf]);
      if (iVar13 != 0) {
        *(uint32_t *)(arg1 + 0xe) = 0xffffffff;
      }
      iVar13 = *(int *)((long)arg1 + 0x74);
      uVar14 = 0xffffffff;
    }
    else {
LAB_005666de:
      *(int *)(arg1 + 1) = iVar10 + -1;
      uVar14 = (uint)*(byte *)*arg1;
      *arg1 = (long)((byte *)*arg1 + 1);
    }
    if (iVar13 == 0) {
      iVar10 = (int)arg1[1];
      if (iVar10 == 0) {
        piVar6 = __errno_location();
        *piVar6 = 0;
        sVar7 = fread((void *)arg1[0x10],1,0x4000,(FILE *)arg1[0xf]);
        iVar10 = (int)sVar7;
        *(int *)(arg1 + 1) = iVar10;
        if (iVar10 == 0) {
          *(uint32_t *)((long)arg1 + 0x74) = 1;
          iVar13 = ferror((FILE *)arg1[0xf]);
          if (iVar13 != 0) {
            *(uint32_t *)(arg1 + 0xe) = 0xffffffff;
          }
          iVar13 = *(int *)((long)arg1 + 0x74);
          uVar8 = 0xffffffff;
          goto LAB_00566718;
        }
        *arg1 = arg1[0x10];
        iVar13 = *(int *)((long)arg1 + 0x74);
      }
      *(int *)(arg1 + 1) = iVar10 + -1;
      uVar8 = (uint)*(byte *)*arg1;
      *arg1 = (long)((byte *)*arg1 + 1);
    }
    else {
      uVar8 = 0xffffffff;
    }
LAB_00566718:
    iVar15 = uVar14 + uVar8 * 0x100;
    iVar10 = iVar13;
    if ((iVar15 != 0) && (iVar13 == 0)) {
      iVar9 = (int)arg1[1];
      do {
        if (iVar9 == 0) {
          piVar6 = __errno_location();
          *piVar6 = 0;
          sVar7 = fread((void *)arg1[0x10],1,0x4000,(FILE *)arg1[0xf]);
          iVar9 = (int)sVar7;
          *(int *)(arg1 + 1) = iVar9;
          if (iVar9 == 0) {
            *(uint32_t *)((long)arg1 + 0x74) = 1;
            iVar13 = ferror((FILE *)arg1[0xf]);
            if (iVar13 != 0) {
              *(uint32_t *)(arg1 + 0xe) = 0xffffffff;
            }
            iVar10 = *(int *)((long)arg1 + 0x74);
            break;
          }
          iVar13 = *(int *)((long)arg1 + 0x74);
          lVar5 = arg1[0x10];
          iVar11 = iVar13;
        }
        else {
          lVar5 = *arg1;
          iVar11 = 0;
        }
        iVar9 = iVar9 + -1;
        *(int *)(arg1 + 1) = iVar9;
        *arg1 = lVar5 + 1;
        iVar10 = iVar11;
        if ((iVar15 == 1) || (iVar15 = iVar15 + -1, iVar10 = iVar13, iVar11 != 0)) break;
      } while( true );
    }
  }
  bVar1 = bVar12 & 8;
joined_r0x00566418:
  if ((bVar1 == 0) || (iVar10 != 0)) goto LAB_0056641e;
  iVar13 = (int)arg1[1];
  if (iVar13 != 0) {
    pbVar4 = (byte *)*arg1;
LAB_00566593:
    *(int *)(arg1 + 1) = iVar13 + -1;
    bVar1 = *pbVar4;
    *arg1 = (long)(pbVar4 + 1);
    goto joined_r0x00566418;
  }
  piVar6 = __errno_location();
  *piVar6 = 0;
  sVar7 = fread((void *)arg1[0x10],1,0x4000,(FILE *)arg1[0xf]);
  iVar13 = (int)sVar7;
  *(int *)(arg1 + 1) = iVar13;
  if (iVar13 != 0) {
    pbVar4 = (byte *)arg1[0x10];
    iVar10 = *(int *)((long)arg1 + 0x74);
    *arg1 = (long)pbVar4;
    goto LAB_00566593;
  }
  *(uint32_t *)((long)arg1 + 0x74) = 1;
  iVar13 = ferror((FILE *)arg1[0xf]);
  if (iVar13 != 0) {
    *(uint32_t *)(arg1 + 0xe) = 0xffffffff;
  }
  iVar10 = *(int *)((long)arg1 + 0x74);
LAB_0056641e:
  bVar1 = bVar12 & 0x10;
joined_r0x00566422:
  if ((bVar1 == 0) || (iVar10 != 0)) goto LAB_00566428;
  iVar13 = (int)arg1[1];
  if (iVar13 != 0) {
    pbVar4 = (byte *)*arg1;
LAB_00566523:
    *(int *)(arg1 + 1) = iVar13 + -1;
    bVar1 = *pbVar4;
    *arg1 = (long)(pbVar4 + 1);
    goto joined_r0x00566422;
  }
  piVar6 = __errno_location();
  *piVar6 = 0;
  sVar7 = fread((void *)arg1[0x10],1,0x4000,(FILE *)arg1[0xf]);
  iVar13 = (int)sVar7;
  *(int *)(arg1 + 1) = iVar13;
  if (iVar13 != 0) {
    pbVar4 = (byte *)arg1[0x10];
    iVar10 = *(int *)((long)arg1 + 0x74);
    *arg1 = (long)pbVar4;
    goto LAB_00566523;
  }
  *(uint32_t *)((long)arg1 + 0x74) = 1;
  iVar13 = ferror((FILE *)arg1[0xf]);
  if (iVar13 != 0) {
    *(uint32_t *)(arg1 + 0xe) = 0xffffffff;
  }
  iVar10 = *(int *)((long)arg1 + 0x74);
LAB_00566428:
  if ((bVar12 & 2) == 0) {
LAB_0056646c:
    uVar2 = 0;
    if (iVar10 == 0) goto LAB_00566477;
  }
  else if (iVar10 == 0) {
    iVar13 = (int)arg1[1];
    if (iVar13 == 0) {
      piVar6 = __errno_location();
      *piVar6 = 0;
      sVar7 = fread((void *)arg1[0x10],1,0x4000,(FILE *)arg1[0xf]);
      iVar13 = (int)sVar7;
      *(int *)(arg1 + 1) = iVar13;
      if (iVar13 != 0) {
        lVar5 = arg1[0x10];
        iVar10 = *(int *)((long)arg1 + 0x74);
        goto LAB_00566440;
      }
      *(uint32_t *)((long)arg1 + 0x74) = 1;
      iVar13 = ferror((FILE *)arg1[0xf]);
      if (iVar13 == 0) {
        iVar10 = *(int *)((long)arg1 + 0x74);
      }
      else {
        *(uint32_t *)(arg1 + 0xe) = 0xffffffff;
        iVar10 = *(int *)((long)arg1 + 0x74);
      }
    }
    else {
      lVar5 = *arg1;
      iVar10 = 0;
LAB_00566440:
      *(int *)(arg1 + 1) = iVar13 + -1;
      *arg1 = lVar5 + 1;
    }
    if (iVar10 == 0) {
      iVar13 = (int)arg1[1];
      if (iVar13 == 0) {
        piVar6 = __errno_location();
        *piVar6 = 0;
        sVar7 = fread((void *)arg1[0x10],1,0x4000,(FILE *)arg1[0xf]);
        iVar13 = (int)sVar7;
        *(int *)(arg1 + 1) = iVar13;
        if (iVar13 == 0) {
          *(uint32_t *)((long)arg1 + 0x74) = 1;
          ferror((FILE *)arg1[0xf]);
          iVar10 = *(int *)((long)arg1 + 0x74);
          goto LAB_0056646c;
        }
        lVar5 = arg1[0x10];
        iVar10 = *(int *)((long)arg1 + 0x74);
      }
      else {
        lVar5 = *arg1;
        iVar10 = 0;
      }
      *(int *)(arg1 + 1) = iVar13 + -1;
      *arg1 = lVar5 + 1;
      goto LAB_0056646c;
    }
  }
  uVar2 = 0xfffffffd;
LAB_00566477:
  *(uint32_t *)(arg1 + 0xe) = uVar2;
  return;
}

/* ======================================================================
 * build_tree  (Ghidra `build_tree` @ 0056d6c0)
 * Signature: uint8_t build_tree(void)
 * Calls: `pqdownheap`
 * Called by: `tr_flush_block`
 */
void build_tree(long arg1,long *arg2)

{
  ushort *puVar1;
  short *psVar2;
  short *psVar3;
  byte bVar4;
  byte bVar5;
  ushort uVar6;
  short sVar7;
  ushort uVar8;
  uint32_t uVar9;
  long lVar10;
  long *plVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  long lVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  long lVar23;
  long lVar24;
  int iVar25;
  int iVar26;
  ulong uVar27;
  int iVar28;
  int iVar29;
  short *psVar30;
  ushort auStack_58 [5];
  short local_4e;
  short local_4c;
  short local_4a;
  short local_48;
  short local_46;
  short local_44;
  short local_42;
  short local_40;
  short local_3e;
  short local_3c;
  short local_3a;
  
  lVar10 = *arg2;
  iVar28 = *(int *)(arg2[2] + 0x14);
  lVar19 = *(long *)arg2[2];
  *(uint32_t *)(arg1 + 0x14a4) = 0;
  *(uint32_t *)(arg1 + 0x14a8) = 0x23d;
  if (iVar28 < 1) {
    iVar14 = 0;
    uVar27 = 0xffffffff;
  }
  else {
    uVar16 = 0;
    uVar27 = 0xffffffff;
    uVar18 = (ulong)(iVar28 - 1) + 1;
    do {
      while (*(short *)(lVar10 + uVar16 * 4) == 0) {
        *(uint16_t *)(lVar10 + 2 + uVar16 * 4) = 0;
        uVar16 = uVar16 + 1;
        if (uVar16 == uVar18) goto LAB_0056d75d;
      }
      uVar27 = uVar16 & 0xffffffff;
      iVar14 = *(int *)(arg1 + 0x14a4) + 1;
      *(int *)(arg1 + 0x14a4) = iVar14;
      *(int *)(arg1 + 0xbb0 + (long)iVar14 * 4) = (int)uVar16;
      *(uint8_t *)(arg1 + 0x14ac + uVar16) = 0;
      uVar16 = uVar16 + 1;
    } while (uVar16 != uVar18);
LAB_0056d75d:
    iVar14 = *(int *)(arg1 + 0x14a4);
  }
  if (lVar19 == 0) {
    while (iVar26 = (int)uVar27, iVar14 < 2) {
      lVar19 = 0;
      uVar12 = 0;
      *(int *)(arg1 + 0x14a4) = iVar14 + 1;
      if (iVar26 < 2) {
        uVar12 = iVar26 + 1;
        uVar27 = (ulong)uVar12;
        lVar19 = (long)(int)uVar12 << 2;
      }
      *(uint *)(arg1 + 0xbb0 + (long)(iVar14 + 1) * 4) = uVar12;
      *(uint16_t *)(lVar10 + lVar19) = 1;
      *(uint8_t *)(arg1 + 0x14ac + (long)(int)uVar12) = 0;
      *(long *)(arg1 + 0x1708) = *(long *)(arg1 + 0x1708) + -1;
      iVar14 = *(int *)(arg1 + 0x14a4);
    }
  }
  else {
    while (iVar26 = (int)uVar27, iVar14 < 2) {
      uVar12 = 0;
      lVar24 = 0;
      *(int *)(arg1 + 0x14a4) = iVar14 + 1;
      if (iVar26 < 2) {
        uVar12 = iVar26 + 1;
        uVar27 = (ulong)uVar12;
        lVar24 = (long)(int)uVar12 << 2;
      }
      *(uint *)(arg1 + 0xbb0 + (long)(iVar14 + 1) * 4) = uVar12;
      *(uint16_t *)(lVar10 + lVar24) = 1;
      *(uint8_t *)(arg1 + 0x14ac + (long)(int)uVar12) = 0;
      *(long *)(arg1 + 0x1708) = *(long *)(arg1 + 0x1708) + -1;
      *(long *)(arg1 + 0x1710) =
           *(long *)(arg1 + 0x1710) - (ulong)*(ushort *)(lVar19 + 2 + lVar24);
      iVar14 = *(int *)(arg1 + 0x14a4);
    }
  }
  *(int *)(arg2 + 1) = iVar26;
  iVar14 = *(int *)(arg1 + 0x14a4);
  iVar29 = iVar14 / 2;
  if (0 < iVar14 / 2) {
    do {
      pqdownheap(arg1,lVar10,iVar29);
      iVar29 = iVar29 + -1;
    } while (iVar29 != 0);
    iVar14 = *(int *)(arg1 + 0x14a4);
  }
  psVar30 = (short *)(lVar10 + (long)iVar28 * 4);
  do {
    iVar29 = *(int *)(arg1 + 0xbb4);
    uVar9 = *(uint32_t *)(arg1 + 0xbb0 + (long)iVar14 * 4);
    *(int *)(arg1 + 0x14a4) = iVar14 + -1;
    *(uint32_t *)(arg1 + 0xbb4) = uVar9;
    pqdownheap(arg1,lVar10,1);
    iVar14 = *(int *)(arg1 + 0xbb4);
    iVar13 = *(int *)(arg1 + 0x14a8) + -2;
    psVar2 = (short *)(lVar10 + (long)iVar14 * 4);
    *(int *)(arg1 + 0xbb0 + (long)(*(int *)(arg1 + 0x14a8) + -1) * 4) = iVar29;
    *(int *)(arg1 + 0x14a8) = iVar13;
    psVar3 = (short *)(lVar10 + (long)iVar29 * 4);
    *(int *)(arg1 + 0xbb0 + (long)iVar13 * 4) = iVar14;
    *psVar30 = *psVar2 + *psVar3;
    bVar4 = *(byte *)(arg1 + 0x14ac + (long)iVar29);
    bVar5 = *(byte *)(arg1 + 0x14ac + (long)iVar14);
    if (bVar4 < bVar5) {
      bVar4 = bVar5;
    }
    psVar30 = psVar30 + 2;
    *(byte *)(arg1 + 0x14ac + (long)iVar28) = bVar4 + 1;
    psVar2[1] = (short)iVar28;
    psVar3[1] = (short)iVar28;
    *(int *)(arg1 + 0xbb4) = iVar28;
    pqdownheap(arg1,lVar10,1);
    iVar14 = *(int *)(arg1 + 0x14a4);
    iVar28 = iVar28 + 1;
  } while (1 < iVar14);
  iVar28 = *(int *)(arg1 + 0xbb4);
  iVar14 = *(int *)(arg1 + 0x14a8) + -1;
  *(int *)(arg1 + 0x14a8) = iVar14;
  *(int *)(arg1 + 0xbb0 + (long)iVar14 * 4) = iVar28;
  lVar19 = *arg2;
  iVar14 = (int)arg2[1];
  plVar11 = (long *)arg2[2];
  lVar24 = *plVar11;
  lVar23 = plVar11[1];
  iVar29 = (int)plVar11[2];
  uVar12 = *(uint *)(plVar11 + 3);
  *(uint16_t *)(arg1 + 0xb90) = 0;
  *(uint16_t *)(arg1 + 0xb92) = 0;
  *(uint16_t *)(arg1 + 0xb94) = 0;
  *(uint16_t *)(arg1 + 0xb96) = 0;
  *(uint16_t *)(arg1 + 0xb98) = 0;
  *(uint16_t *)(arg1 + 0xb9a) = 0;
  *(uint16_t *)(arg1 + 0xb9c) = 0;
  *(uint16_t *)(arg1 + 0xb9e) = 0;
  *(uint16_t *)(arg1 + 0xba0) = 0;
  *(uint16_t *)(arg1 + 0xba2) = 0;
  *(uint16_t *)(arg1 + 0xba4) = 0;
  *(uint16_t *)(arg1 + 0xba6) = 0;
  *(uint16_t *)(arg1 + 0xba8) = 0;
  *(uint16_t *)(arg1 + 0xbaa) = 0;
  *(uint16_t *)(arg1 + 0xbac) = 0;
  *(uint16_t *)(arg1 + 0xbae) = 0;
  *(uint16_t *)(lVar19 + 2 + (long)iVar28 * 4) = 0;
  iVar28 = *(int *)(arg1 + 0x14a8) + 1;
  if (iVar28 < 0x23d) {
    iVar13 = 0;
    if (lVar24 == 0) {
      do {
        iVar21 = *(int *)(arg1 + 0xbb0 + (long)iVar28 * 4);
        puVar1 = (ushort *)(lVar19 + (long)iVar21 * 4);
        uVar20 = *(ushort *)(lVar19 + 2 + (ulong)puVar1[1] * 4) + 1;
        if ((int)uVar12 < (int)uVar20) {
          iVar13 = iVar13 + 1;
          uVar20 = uVar12;
        }
        puVar1[1] = (ushort)uVar20;
        if (iVar21 <= iVar14) {
          psVar30 = (short *)(arg1 + 0xb90 + (long)(int)uVar20 * 2);
          *psVar30 = *psVar30 + 1;
          if (iVar21 < iVar29) {
            iVar21 = 0;
          }
          else {
            iVar21 = *(int *)(lVar23 + (long)(iVar21 - iVar29) * 4);
          }
          *(long *)(arg1 + 0x1708) =
               *(long *)(arg1 + 0x1708) + (long)(int)(uVar20 + iVar21) * (ulong)*puVar1;
        }
        iVar28 = iVar28 + 1;
      } while (iVar28 != 0x23d);
    }
    else {
      do {
        iVar21 = *(int *)(arg1 + 0xbb0 + (long)iVar28 * 4);
        puVar1 = (ushort *)(lVar19 + (long)iVar21 * 4);
        uVar20 = *(ushort *)(lVar19 + 2 + (ulong)puVar1[1] * 4) + 1;
        if ((int)uVar12 < (int)uVar20) {
          iVar13 = iVar13 + 1;
          uVar20 = uVar12;
        }
        puVar1[1] = (ushort)uVar20;
        if (iVar21 <= iVar14) {
          psVar30 = (short *)(arg1 + 0xb90 + (long)(int)uVar20 * 2);
          *psVar30 = *psVar30 + 1;
          iVar25 = 0;
          if (iVar29 <= iVar21) {
            iVar25 = *(int *)(lVar23 + (long)(iVar21 - iVar29) * 4);
          }
          uVar6 = *puVar1;
          *(long *)(arg1 + 0x1708) =
               *(long *)(arg1 + 0x1708) + (long)(int)(uVar20 + iVar25) * (ulong)uVar6;
          *(long *)(arg1 + 0x1710) =
               *(long *)(arg1 + 0x1710) +
               (long)(int)(iVar25 + (uint)*(ushort *)(lVar24 + 2 + (long)iVar21 * 4)) * (ulong)uVar6
          ;
        }
        iVar28 = iVar28 + 1;
      } while (iVar28 != 0x23d);
    }
    iVar28 = 0x23d;
    if (iVar13 != 0) {
      iVar29 = uVar12 - 1;
      lVar24 = (long)(int)uVar12;
      do {
        sVar7 = *(short *)(arg1 + 0xb90 + (long)iVar29 * 2);
        lVar23 = (long)iVar29;
        iVar21 = iVar29;
        while (sVar7 == 0) {
          iVar21 = iVar21 + -1;
          lVar23 = (long)iVar21;
          sVar7 = *(short *)(arg1 + 0xb90 + lVar23 * 2);
        }
        iVar13 = iVar13 + -2;
        *(short *)(arg1 + 0xb90 + lVar23 * 2) = sVar7 + -1;
        psVar30 = (short *)(arg1 + 0xb90 + (long)(iVar21 + 1) * 2);
        *psVar30 = *psVar30 + 2;
        psVar30 = (short *)(arg1 + 0xb90 + lVar24 * 2);
        *psVar30 = *psVar30 + -1;
      } while (0 < iVar13);
      if (uVar12 != 0) {
        lVar23 = 0;
        do {
          uVar6 = *(ushort *)(arg1 + 0xb90 + (long)(int)uVar12 * 2);
          uVar20 = (uint)uVar6;
          if (uVar6 != 0) {
            do {
              iVar28 = iVar28 + -1;
              iVar29 = *(int *)(arg1 + 0xbb0 + (long)iVar28 * 4);
              if (iVar29 <= iVar14) {
                puVar1 = (ushort *)(lVar19 + (long)iVar29 * 4);
                if (puVar1[1] != uVar12) {
                  *(long *)(arg1 + 0x1708) =
                       *(long *)(arg1 + 0x1708) +
                       ((lVar24 - lVar23) - (ulong)puVar1[1]) * (ulong)*puVar1;
                  puVar1[1] = (ushort)uVar12;
                }
                uVar20 = uVar20 - 1;
              }
            } while (uVar20 != 0);
          }
          lVar23 = lVar23 + 1;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
    }
  }
  lVar19 = 0;
  auStack_58[1] = *(short *)(arg1 + 0xb90) * 2;
  auStack_58[2] = (auStack_58[1] + *(short *)(arg1 + 0xb92)) * 2;
  auStack_58[3] = (auStack_58[2] + *(short *)(arg1 + 0xb94)) * 2;
  auStack_58[4] = (auStack_58[3] + *(short *)(arg1 + 0xb96)) * 2;
  local_4e = (auStack_58[4] + *(short *)(arg1 + 0xb98)) * 2;
  local_4c = (local_4e + *(short *)(arg1 + 0xb9a)) * 2;
  local_4a = (local_4c + *(short *)(arg1 + 0xb9c)) * 2;
  local_48 = (local_4a + *(short *)(arg1 + 0xb9e)) * 2;
  local_46 = (local_48 + *(short *)(arg1 + 0xba0)) * 2;
  local_44 = (local_46 + *(short *)(arg1 + 0xba2)) * 2;
  local_42 = (local_44 + *(short *)(arg1 + 0xba4)) * 2;
  local_40 = (local_42 + *(short *)(arg1 + 0xba6)) * 2;
  local_3e = (local_40 + *(short *)(arg1 + 0xba8)) * 2;
  local_3c = (local_3e + *(short *)(arg1 + 0xbaa)) * 2;
  local_3a = (local_3c + *(short *)(arg1 + 0xbac)) * 2;
  if (-1 < iVar26) {
    do {
      uVar6 = *(ushort *)(lVar10 + 2 + lVar19 * 4);
      uVar12 = (uint)uVar6;
      if (uVar6 != 0) {
        uVar8 = auStack_58[(int)(uint)uVar6];
        auStack_58[(int)(uint)uVar6] = uVar8 + 1;
        uVar20 = 0;
        uVar17 = (uint)uVar8;
        do {
          uVar22 = uVar20;
          uVar15 = uVar17 & 1;
          uVar12 = uVar12 - 1;
          uVar20 = (uVar15 | uVar22) * 2;
          uVar17 = uVar17 >> 1;
        } while (uVar12 != 0);
        *(ushort *)(lVar10 + lVar19 * 4) = (ushort)uVar15 | (ushort)uVar22;
      }
      lVar19 = lVar19 + 1;
    } while ((int)lVar19 <= iVar26);
  }
  return;
}

/* ======================================================================
 * bit_reverse  (Ghidra `bit_reverse` @ 005a79d0)
 * Signature: uint8_t __stdcall bit_reverse(uint arg1)
 * Calls: (none)
 * Called by: `init_blocksize`, `start_decoder`
 */
/* bit_reverse(unsigned int) */

uint bit_reverse(uint arg1)

{
  uint uVar1;
  
  uVar1 = (arg1 & 0x55555555) * 2 | (arg1 & 0xaaaaaaaa) >> 1;
  uVar1 = (uVar1 & 0x33333333) << 2 | (uVar1 & 0xcccccccc) >> 2;
  uVar1 = (uVar1 & 0xf0f0f0f) << 4 | (uVar1 & 0xf0f0f0f0) >> 4;
  uVar1 = (uVar1 & 0xff00ff) << 8 | (uVar1 & 0xff00ff00) >> 8;
  return uVar1 << 0x10 | uVar1 >> 0x10;
}

/* ======================================================================
 * convert_samples_short  (Ghidra `convert_samples_short` @ 005a7fb0)
 * Signature: uint8_t __stdcall convert_samples_short(int arg1, short * * arg2, int arg3, int arg4, float * * arg5, int arg6, int arg7)
 * Calls: `memset`
 * Called by: `stb_vorbis_decode_filename`, `stb_vorbis_decode_memory`, `stb_vorbis_get_frame_short`, `stb_vorbis_get_frame_short_interleaved`, `stb_vorbis_get_samples_short`
 */
/* convert_samples_short(int, short**, int, int, float**, int, int) */

void convert_samples_short
               (int arg1,short **arg2,int arg3,int arg4,float **arg5,int arg6,
               int arg7)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint uVar3;
  float fVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  float *pfVar12;
  uint uVar13;
  short *psVar14;
  float fVar15;
  long local_e0;
  float local_b8 [34];
  
  fVar4 = DAT_005de36c /* R:384.0f */;
  if (((arg1 == arg4) || (2 < arg1)) || (6 < arg4)) {
    if (arg1 < arg4) {
      arg4 = arg1;
    }
    iVar5 = 0;
    if (0 < arg4) {
      lVar10 = 0;
      do {
        psVar14 = arg2[lVar10];
        pfVar12 = arg5[lVar10];
        if (0 < arg7) {
          lVar6 = 0;
          do {
            while (iVar5 = (int)(pfVar12[lVar6] + fVar4) + -0x43c00000,
                  0xffff < (int)(pfVar12[lVar6] + fVar4) + 0xbc408000U) {
              psVar14[arg3 + lVar6] = ((ushort)(iVar5 >> 0x1f) & 1) + 0x7fff;
              lVar6 = lVar6 + 1;
              if (arg7 <= (int)lVar6) goto LAB_005a807a;
            }
            psVar14[arg3 + lVar6] = (short)iVar5;
            lVar6 = lVar6 + 1;
          } while ((int)lVar6 < arg7);
        }
LAB_005a807a:
        lVar10 = lVar10 + 1;
        iVar5 = arg4;
      } while ((int)lVar10 < arg4);
    }
    if (iVar5 < arg1) {
      lVar10 = 0;
      do {
        lVar6 = lVar10 + (long)iVar5 * 8;
        lVar10 = lVar10 + 8;
        memset((void *)((long)arg3 * 2 + *(long *)((long)arg2 + lVar6)),0,(long)arg7 * 2);
      } while (lVar10 != (ulong)(uint)((arg1 + -1) - iVar5) * 8 + 8);
    }
  }
  else if (0 < arg1) {
    local_e0 = 0;
    do {
      fVar4 = DAT_005de36c /* R:384.0f */;
      psVar14 = arg2[local_e0] + arg3;
      uVar3 = *(uint *)(convert_samples_short(int,short**,int,int,float**,int,int)::channel_selector
                       + local_e0 * 4 + (long)arg1 * 8);
      if (0 < arg7) {
        lVar6 = 0;
        uVar13 = 0x20;
        lVar10 = (long)arg6 << 2;
        do {
          pfVar12 = local_b8;
          for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
            pfVar12[0] = 0.0;
            pfVar12[1] = 0.0;
            pfVar12 = pfVar12 + 2;
          }
          if (arg7 < (int)(uVar13 + (int)lVar6)) {
            uVar13 = arg7 - (int)lVar6;
          }
          if (0 < arg4) {
            lVar9 = 0;
            uVar11 = uVar13 >> 2;
            do {
              if ((((int)(char)channel_position[lVar9 + (long)arg4 * 6] & uVar3) != 0) &&
                 (0 < (int)uVar13)) {
                pfVar12 = arg5[lVar9];
                if ((uVar11 == 0) || (uVar13 < 4)) {
                  uVar8 = 0;
                }
                else {
                  lVar7 = 0;
                  uVar8 = 0;
                  do {
                    uVar8 = uVar8 + 1;
                    uVar1 = *(uint64_t *)((long)pfVar12 + lVar7 + lVar10);
                    uVar2 = *(uint64_t *)((long)pfVar12 + lVar7 + lVar10 + 8);
                    *(float *)((long)local_b8 + lVar7) =
                         (float)uVar1 + *(float *)((long)local_b8 + lVar7);
                    *(float *)((long)local_b8 + lVar7 + 4) =
                         (float)((ulong)uVar1 >> 0x20) + *(float *)((long)local_b8 + lVar7 + 4);
                    *(float *)((long)local_b8 + lVar7 + 8) =
                         (float)uVar2 + *(float *)((long)local_b8 + lVar7 + 8);
                    *(float *)((long)local_b8 + lVar7 + 0xc) =
                         (float)((ulong)uVar2 >> 0x20) + *(float *)((long)local_b8 + lVar7 + 0xc);
                    lVar7 = lVar7 + 0x10;
                  } while (uVar8 < uVar11);
                  uVar8 = uVar11 * 4;
                  if (uVar13 == uVar11 * 4) goto LAB_005a8280;
                }
                lVar7 = (long)(int)uVar8;
                pfVar12 = pfVar12 + arg6 + lVar6 + lVar7;
                while( true ) {
                  fVar15 = *pfVar12;
                  uVar8 = uVar8 + 1;
                  pfVar12 = pfVar12 + 1;
                  local_b8[lVar7] = fVar15 + local_b8[lVar7];
                  if ((int)uVar13 <= (int)uVar8) break;
                  lVar7 = (long)(int)uVar8;
                }
              }
LAB_005a8280:
              lVar9 = lVar9 + 1;
            } while ((int)lVar9 < arg4);
          }
          if (0 < (int)uVar13) {
            lVar9 = 0;
            do {
              fVar15 = *(float *)((long)local_b8 + lVar9 * 2) + fVar4;
              uVar11 = (int)fVar15 + 0xbc400000;
              if (0xffff < (int)fVar15 + 0xbc408000U) {
                uVar11 = (uint)(ushort)(((ushort)((int)uVar11 >> 0x1f) & 1) + 0x7fff);
              }
              *(short *)((long)psVar14 + lVar9) = (short)uVar11;
              lVar9 = lVar9 + 2;
            } while (lVar9 != (ulong)(uVar13 - 1) * 2 + 2);
          }
          psVar14 = psVar14 + 0x20;
          lVar10 = lVar10 + 0x80;
          lVar6 = lVar6 + 0x20;
        } while ((int)lVar6 < arg7);
      }
      local_e0 = local_e0 + 1;
    } while ((int)local_e0 < arg1);
  }
  return;
}

/* ======================================================================
 * convert_channels_short_interleaved  (Ghidra `convert_channels_short_interleaved` @ 005a8320)
 * Signature: uint8_t __stdcall convert_channels_short_interleaved(int arg1, short * arg2, int arg3, float * * arg4, int arg5, int arg6)
 * Calls: (none)
 * Called by: `stb_vorbis_decode_filename`, `stb_vorbis_decode_memory`, `stb_vorbis_get_frame_short_interleaved`, `stb_vorbis_get_samples_short_interleaved`
 */
/* convert_channels_short_interleaved(int, short*, int, float**, int, int) */

void convert_channels_short_interleaved
               (int arg1,short *arg2,int arg3,float **arg4,int arg5,int arg6)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  byte bVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  short *psVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  float *pfVar22;
  uint uVar23;
  uint8_t (*pauVar24) [16];
  long lVar25;
  long lVar26;
  uint uVar27;
  float fVar28;
  long local_e8;
  int local_cc;
  float local_b8 [34];
  
  fVar11 = DAT_005de36c /* R:384.0f */;
  if (((arg1 == arg3) || (2 < arg1)) || (6 < arg3)) {
    if (arg1 < arg3) {
      arg3 = arg1;
    }
    if (0 < arg6) {
      lVar25 = (long)arg5 * 4;
      iVar19 = 0;
      do {
        lVar14 = 0;
        uVar23 = 0;
        if (0 < arg3) {
          do {
            while (fVar28 = *(float *)((long)arg4[lVar14] + lVar25) + fVar11,
                  iVar16 = (int)fVar28 + -0x43c00000, 0xffff < (int)fVar28 + 0xbc408000U) {
              arg2[lVar14] = ((ushort)(iVar16 >> 0x1f) & 1) + 0x7fff;
              lVar14 = lVar14 + 1;
              if (arg3 <= (int)lVar14) goto LAB_005a83f3;
            }
            arg2[lVar14] = (short)iVar16;
            lVar14 = lVar14 + 1;
          } while ((int)lVar14 < arg3);
LAB_005a83f3:
          arg2 = arg2 + (ulong)(arg3 - 1) + 1;
          uVar23 = arg3;
        }
        if ((int)uVar23 < arg1) {
          uVar27 = arg1 + 1 + ~uVar23;
          uVar13 = -(((uint)arg2 & 0xf) >> 1) & 7;
          uVar21 = uVar27;
          if (uVar13 <= uVar27) {
            uVar21 = uVar13;
          }
          psVar17 = arg2;
          uVar13 = uVar23;
          if (uVar21 == 0) {
LAB_005a8452:
            uVar18 = uVar27 - uVar21 >> 3;
            uVar2 = uVar18 * 8;
            if (uVar18 != 0) {
              pauVar24 = (uint8_t (*) [16])(arg2 + uVar21);
              uVar20 = 0;
              do {
                uVar20 = uVar20 + 1;
                *pauVar24 = (uint8_t  [16])0x0;
                pauVar24 = pauVar24 + 1;
              } while (uVar20 < uVar18);
              uVar13 = uVar13 + uVar2;
              psVar17 = psVar17 + uVar2;
              if (uVar27 - uVar21 == uVar2) goto LAB_005a84a1;
            }
            do {
              uVar13 = uVar13 + 1;
              *psVar17 = 0;
              psVar17 = psVar17 + 1;
            } while ((int)uVar13 < arg1);
          }
          else {
            do {
              uVar13 = uVar13 + 1;
              *psVar17 = 0;
              psVar17 = psVar17 + 1;
            } while (uVar13 - uVar23 < uVar21);
            if (uVar27 != uVar21) goto LAB_005a8452;
          }
LAB_005a84a1:
          arg2 = arg2 + (ulong)(~uVar23 + arg1) + 1;
        }
        iVar19 = iVar19 + 1;
        lVar25 = lVar25 + 4;
      } while (iVar19 != arg6);
    }
  }
  else {
    local_cc = 0;
    if (0 < arg1) {
      do {
        fVar11 = DAT_005de36c /* R:384.0f */;
        if (0 < arg6) {
          iVar19 = 0;
          uVar23 = 0x10;
          lVar25 = (long)arg5 << 2;
          local_e8 = (long)arg5;
          do {
            pfVar22 = local_b8;
            for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
              pfVar22[0] = 0.0;
              pfVar22[1] = 0.0;
              pfVar22 = pfVar22 + 2;
            }
            if (arg6 < (int)(iVar19 + uVar23)) {
              uVar23 = arg6 - iVar19;
            }
            if (0 < arg3) {
              lVar14 = 0;
              uVar27 = uVar23 >> 2;
              do {
                while (bVar12 = channel_position[lVar14 + (long)arg3 * 6] & 6, bVar12 != 6) {
                  if (bVar12 == 2) {
                    if (0 < (int)uVar23) {
                      pfVar22 = arg4[lVar14];
                      lVar15 = 0;
                      do {
                        local_b8[lVar15 * 2] =
                             *(float *)((long)pfVar22 + lVar15 * 4 + lVar25) + local_b8[lVar15 * 2];
                        lVar15 = lVar15 + 1;
                      } while ((int)lVar15 < (int)uVar23);
                    }
                  }
                  else if ((bVar12 == 4) && (0 < (int)uVar23)) {
                    pfVar22 = arg4[lVar14];
                    lVar15 = 0;
                    do {
                      local_b8[lVar15 * 2 + 1] =
                           *(float *)((long)pfVar22 + lVar15 * 4 + lVar25) +
                           local_b8[lVar15 * 2 + 1];
                      lVar15 = lVar15 + 1;
                    } while ((int)lVar15 < (int)uVar23);
                  }
LAB_005a8592:
                  lVar14 = lVar14 + 1;
                  if (arg3 <= (int)lVar14) goto LAB_005a8699;
                }
                if ((int)uVar23 < 1) goto LAB_005a8592;
                pfVar22 = arg4[lVar14];
                if ((uVar23 < 4) || (uVar27 == 0)) {
                  uVar21 = 0;
                }
                else {
                  lVar15 = 0;
                  uVar21 = 0;
                  do {
                    lVar26 = lVar15 * 2;
                    fVar28 = *(float *)((long)local_b8 + lVar26);
                    fVar8 = *(float *)((long)local_b8 + lVar26 + 4);
                    fVar9 = *(float *)((long)local_b8 + lVar26 + 8);
                    fVar10 = *(float *)((long)local_b8 + lVar26 + 0xc);
                    uVar21 = uVar21 + 1;
                    lVar26 = lVar15 * 2;
                    uVar4 = *(uint64_t *)((long)pfVar22 + lVar15 + lVar25);
                    uVar5 = *(uint64_t *)((long)pfVar22 + lVar15 + lVar25 + 8);
                    uVar6 = *(uint64_t *)((long)pfVar22 + lVar15 + lVar25);
                    uVar7 = *(uint64_t *)((long)pfVar22 + lVar15 + lVar25 + 8);
                    lVar3 = lVar15 * 2;
                    *(float *)((long)local_b8 + lVar3 + 0x10) =
                         *(float *)((long)local_b8 + lVar26 + 0x10) + (float)uVar5;
                    *(float *)((long)local_b8 + lVar3 + 0x14) =
                         *(float *)((long)local_b8 + lVar26 + 0x14) + (float)uVar7;
                    *(float *)((long)local_b8 + lVar3 + 0x18) =
                         *(float *)((long)local_b8 + lVar26 + 0x18) + (float)((ulong)uVar5 >> 0x20);
                    *(float *)((long)local_b8 + lVar3 + 0x1c) =
                         *(float *)((long)local_b8 + lVar26 + 0x1c) + (float)((ulong)uVar7 >> 0x20);
                    lVar26 = lVar15 * 2;
                    *(float *)((long)local_b8 + lVar26) = fVar28 + (float)uVar4;
                    *(float *)((long)local_b8 + lVar26 + 4) = fVar8 + (float)uVar6;
                    *(float *)((long)local_b8 + lVar26 + 8) = fVar9 + (float)((ulong)uVar4 >> 0x20);
                    *(float *)((long)local_b8 + lVar26 + 0xc) =
                         fVar10 + (float)((ulong)uVar6 >> 0x20);
                    lVar15 = lVar15 + 0x10;
                  } while (uVar21 < uVar27);
                  uVar21 = uVar27 * 4;
                  if (uVar23 == uVar27 * 4) goto LAB_005a8592;
                }
                lVar26 = (long)(int)uVar21;
                iVar16 = uVar21 * 2;
                lVar15 = 0;
                do {
                  uVar21 = uVar21 + 1;
                  local_b8[iVar16] =
                       local_b8[iVar16] +
                       *(float *)((long)pfVar22 + lVar15 + (lVar26 + local_e8) * 4);
                  iVar1 = iVar16 + 1;
                  iVar16 = iVar16 + 2;
                  lVar3 = lVar15 + (lVar26 + local_e8) * 4;
                  lVar15 = lVar15 + 4;
                  local_b8[iVar1] = local_b8[iVar1] + *(float *)((long)pfVar22 + lVar3);
                } while ((int)uVar21 < (int)uVar23);
                lVar14 = lVar14 + 1;
              } while ((int)lVar14 < arg3);
            }
LAB_005a8699:
            if (0 < (int)(uVar23 * 2)) {
              lVar14 = 0;
              do {
                fVar28 = *(float *)((long)local_b8 + lVar14 * 2) + fVar11;
                uVar27 = (int)fVar28 + 0xbc400000;
                if (0xffff < (int)fVar28 + 0xbc408000U) {
                  uVar27 = (uint)(ushort)(((ushort)((int)uVar27 >> 0x1f) & 1) + 0x7fff);
                }
                *(short *)((long)arg2 + lVar14 + (long)(iVar19 * 2) * 2) = (short)uVar27;
                lVar14 = lVar14 + 2;
              } while (lVar14 != (ulong)(uVar23 * 2 - 1) * 2 + 2);
            }
            lVar25 = lVar25 + 0x40;
            local_e8 = local_e8 + 0x10;
            iVar19 = iVar19 + 0x10;
          } while (iVar19 < arg6);
        }
        local_cc = local_cc + 1;
        if (local_cc == arg1) {
          return;
        }
      } while( true );
    }
  }
  return;
}

/* ======================================================================
 * dct_iv_slow  (Ghidra `dct_iv_slow` @ 005afb00)
 * Signature: uint8_t __stdcall dct_iv_slow(float * arg1, int arg2)
 * Calls: `cos`, `memcpy`
 * Called by: `inverse_mdct_slow`
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* dct_iv_slow(float*, int) */

void dct_iv_slow(float *arg1,int arg2)

{
  uint uVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  double dVar8;
  float fVar9;
  double dVar10;
  float afStack_12028 [16384];
  float local_2028;
  float local_2024 [2047];
  
  uVar5 = arg2 * 8 - 1;
  memcpy(&local_2028,arg1,(long)arg2 << 2);
  if (0 < arg2 * 8) {
    lVar7 = 0;
    dVar10 = (DAT_005c7318 /* R:0.0f */ / (double)arg2) * _DAT_005de3a0 /* R:u32=1413754136 */;
    do {
      dVar8 = cos((double)(int)lVar7 * dVar10);
      afStack_12028[lVar7] = (float)dVar8;
      lVar7 = lVar7 + 1;
    } while (lVar7 != (ulong)uVar5 + 1);
  }
  if (0 < arg2) {
    uVar6 = 1;
    lVar7 = 0;
    do {
      fVar9 = 0.0;
      pfVar2 = local_2024;
      pfVar4 = &local_2028;
      uVar1 = uVar6;
      while( true ) {
        pfVar3 = pfVar2;
        fVar9 = fVar9 + afStack_12028[(int)(uVar1 & uVar5)] * *pfVar4;
        if (pfVar3 == local_2024 + (arg2 - 1)) break;
        pfVar2 = pfVar3 + 1;
        pfVar4 = pfVar3;
        uVar1 = uVar1 + uVar6 * 2;
      }
      arg1[lVar7] = fVar9;
      lVar7 = lVar7 + 1;
      uVar6 = uVar6 + 2;
    } while ((int)lVar7 < arg2);
  }
  return;
}

/* ======================================================================
 * atexit  (Ghidra `atexit` @ 005be430)
 * Signature: int __stdcall atexit(__func * __func)
 * Calls: (none)
 * Called by: `main`
 */
int atexit(__func *__func)

{
  int iVar1;
  uint64_t uVar2;
  
  if (PTR___dso_handle_00815618 == (uint8_t *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(uint64_t *)PTR___dso_handle_00815618;
  }
  iVar1 = __cxa_atexit(__func,0,uVar2);
  return iVar1;
}
