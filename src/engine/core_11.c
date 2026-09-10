/* src/engine/core_11.c — 69 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "core_11.h"

/* ======================================================================
 * strstr  (Ghidra `strstr` @ 00451130)
 * Signature: char * strstr(char * __haystack, char * __needle)
 * Calls: (none)
 * Called by: `load_extensions`, `strstr__008250d0`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char *strstr(char *__haystack, char *__needle)

{
  char *pcVar1;

  pcVar1 = (char *)(*(code *)PTR_strstr_00815718)();
  return pcVar1;
}

/* ======================================================================
 * strerror  (Ghidra `strerror` @ 004511f0)
 * Signature: char * strerror(int __errnum)
 * Calls: (none)
 * Called by: `File__File`, `gzerror`, `strerror__00825130`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char *strerror(int __errnum)

{
  char *pcVar1;

  pcVar1 = (char *)(*(code *)PTR_strerror_00815778)();
  return pcVar1;
}

/* ======================================================================
 * write  (Ghidra `write` @ 00451230)
 * Signature: ssize_t write(int __fd, void * __buf, size_t __n)
 * Calls: (none)
 * Called by: `File__Write`, `File__WriteArray`, `write__00825150`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t write(int __fd, void *__buf, size_t __n)

{
  ssize_t sVar1;

  sVar1 = (*(code *)PTR_write_00815798)();
  return sVar1;
}

/* ======================================================================
 * strchr  (Ghidra `strchr` @ 00451240)
 * Signature: char * strchr(char * __s, int __c)
 * Calls: (none)
 * Called by: `FixFileCase`, `floatstr_constprop_59`, `strchr__00825158`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char *strchr(char *__s, int __c)

{
  char *pcVar1;

  pcVar1 = (char *)(*(code *)PTR_strchr_008157a0)();
  return pcVar1;
}

/* ======================================================================
 * strlen  (Ghidra `strlen` @ 004512c0)
 * Signature: size_t strlen(char * __s)
 * Calls: (none)
 * Called by: `AddCachedCue`, `ConvertCHARtoWCHAR`, `Create`, `CreateOpenGLShader`, `CreateSMBPaletteResources`, `CreateTextEmitterFontResources`, `EditorFormChapterUpload__EditorFormChapterUpload__004b8ec0`, `EditorFormChapterUpload__LoadLevelLibrary`, `EditorFormChapterUpload__UploadChapter`, `EditorForm_LoadFormOk` (+101 more)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;

  sVar1 = (*(code *)PTR_strlen_008157e0)();
  return sVar1;
}

/* ======================================================================
 * vsprintf  (Ghidra `vsprintf` @ 00451320)
 * Signature: int vsprintf(char * __s, char * __format, __gnuc_va_list __arg)
 * Calls: (none)
 * Called by: `Sprint`, `SprintArgList`, `vsprintf__008251c8`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vsprintf(char *__s, char *__format, __gnuc_va_list __arg)

{
  int iVar1;

  iVar1 = (*(code *)PTR_vsprintf_00815810)();
  return iVar1;
}

/* ======================================================================
 * unlink  (Ghidra `unlink` @ 00451340)
 * Signature: int unlink(char * __name)
 * Calls: (none)
 * Called by: `DeleteFile`, `UnixUserProfile__DeleteUserFile`, `unlink__008251d8`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int unlink(char *__name)

{
  int iVar1;

  iVar1 = (*(code *)PTR_unlink_00815820)();
  return iVar1;
}

/* ======================================================================
 * strncmp  (Ghidra `strncmp` @ 00451350)
 * Signature: int strncmp(char * __s1, char * __s2, size_t __n)
 * Calls: (none)
 * Called by: `stringcache_len`, `strncmp__008251e0`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1, char *__s2, size_t __n)

{
  int iVar1;

  iVar1 = (*(code *)PTR_strncmp_00815828)();
  return iVar1;
}

/* ======================================================================
 * wcstof  (Ghidra `wcstof` @ 00451370)
 * Signature: float wcstof(wchar_t * __nptr, wchar_t * * __endptr)
 * Calls: (none)
 * Called by: `StringToFloatW`, `wcstof__008251f0`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float wcstof(wchar_t *__nptr, wchar_t **__endptr)

{
  float fVar1;

  fVar1 = (float)(*(code *)PTR_wcstof_00815838)();
  return fVar1;
}

/* ======================================================================
 * tan  (Ghidra `tan` @ 004513e0)
 * Signature: double tan(double __x)
 * Calls: (none)
 * Called by: `Camera__GetSceneWidthAndHeight`, `Camera__ScreenToWorld`, `Camera__SetupCamera`, `ConvertToPerspectiveMatrix`, `SMBCamera__Update`, `tan__00825228`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double tan(double __x)

{
  double dVar1;

  dVar1 = (double)(*(code *)PTR_tan_00815870)();
  return dVar1;
}

/* ======================================================================
 * vsnprintf  (Ghidra `vsnprintf` @ 00451470)
 * Signature: int vsnprintf(char * __s, size_t __maxlen, char * __format, __gnuc_va_list __arg)
 * Calls: (none)
 * Called by: `buffer_append_va`, `errorlist_add_va`, `failf__005391a0`, `gzprintf`, `make_GLSL_destarg_assign`, `stringcache_fmt`, `vsnprintf__00825270`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vsnprintf(char *__s, size_t __maxlen, char *__format, __gnuc_va_list __arg)

{
  int iVar1;

  iVar1 = (*(code *)PTR_vsnprintf_008158b8)();
  return iVar1;
}

/* ======================================================================
 * sysconf  (Ghidra `sysconf` @ 004514c0)
 * Signature: long sysconf(int __name)
 * Calls: (none)
 * Called by: `IsMultiCore`, `sysconf__00825298`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long sysconf(int __name)

{
  long lVar1;

  lVar1 = (*(code *)PTR_sysconf_008158e0)();
  return lVar1;
}

/* ======================================================================
 * strtod  (Ghidra `strtod` @ 00451520)
 * Signature: double strtod(char * __nptr, char * * __endptr)
 * Calls: (none)
 * Called by: `StringToFloat`, `png_handle_sCAL`, `strtod__008252c8`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double strtod(char *__nptr, char **__endptr)

{
  double dVar1;

  dVar1 = (double)(*(code *)PTR_strtod_00815910)();
  return dVar1;
}

/* ======================================================================
 * wcslen  (Ghidra `wcslen` @ 004515b0)
 * Signature: size_t wcslen(wchar_t * __s)
 * Calls: (none)
 * Called by: `SetDynamicText__005a6240`, `UITextField__SetStaticText`, `wcslen__00825310`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t wcslen(wchar_t *__s)

{
  size_t sVar1;

  sVar1 = (*(code *)PTR_wcslen_00815958)();
  return sVar1;
}

/* ======================================================================
 * time  (Ghidra `time` @ 00451670)
 * Signature: time_t time(time_t * __timer)
 * Calls: (none)
 * Called by: `TEngine__TEngine`, `time__00825370`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t time(time_t *__timer)

{
  time_t tVar1;

  tVar1 = (*(code *)PTR_time_008159b8)();
  return tVar1;
}

/* ======================================================================
 * strcpy  (Ghidra `strcpy` @ 00451680)
 * Signature: char * strcpy(char * __dest, char * __src)
 * Calls: (none)
 * Called by: `FixFileCase`, `MOJOSHADER_assemble`, `MOJOSHADER_parse`, `System_GetLanguage`, `TEngine__TEngine`, `errorlist_add_va`, `get_ARB1_const_array_varname`, `get_ARB1_varname`, `get_BYTECODE_const_array_varname`, `get_BYTECODE_varname` (+11 more)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char *strcpy(char *__dest, char *__src)

{
  char *pcVar1;

  pcVar1 = (char *)(*(code *)PTR_strcpy_008159c0)();
  return pcVar1;
}

/* ======================================================================
 * vswprintf  (Ghidra `vswprintf` @ 004516c0)
 * Signature: int vswprintf(wchar_t * __s, size_t __n, wchar_t * __format, __gnuc_va_list __arg)
 * Calls: (none)
 * Called by: `SprintArgListW`, `SprintW`, `vswprintf__00825398`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vswprintf(wchar_t *__s, size_t __n, wchar_t *__format, __gnuc_va_list __arg)

{
  int iVar1;

  iVar1 = (*(code *)PTR_vswprintf_008159e0)();
  return iVar1;
}

/* ======================================================================
 * strcasecmp  (Ghidra `strcasecmp` @ 00451800)
 * Signature: int strcasecmp(char * __s1, char * __s2)
 * Calls: (none)
 * Called by: `locateOneElement`, `strcasecmp__00825438`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcasecmp(char *__s1, char *__s2)

{
  int iVar1;

  iVar1 = (*(code *)PTR_strcasecmp_00815a80)();
  return iVar1;
}

/* ======================================================================
 * strrchr  (Ghidra `strrchr` @ 00451820)
 * Signature: char * strrchr(char * __s, int __c)
 * Calls: (none)
 * Called by: `ReadDirectory`, `locateOneElement`, `strrchr__00825448`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char *strrchr(char *__s, int __c)

{
  char *pcVar1;

  pcVar1 = (char *)(*(code *)PTR_strrchr_00815a90)();
  return pcVar1;
}

/* ======================================================================
 * strncasecmp  (Ghidra `strncasecmp` @ 004519b0)
 * Signature: int strncasecmp(char * __s1, char * __s2, size_t __n)
 * Calls: (none)
 * Called by: `MOJOSHADER_assemble`, `check_token_segment_isra_6`, `parse_args_DCL__0052cd90`, `parse_args_DEFB__0052d3a0`, `parse_destination_token`, `parse_instruction_token`, `parse_register_name_part_13`, `parse_source_token_maybe_relative`, `strncasecmp__00825518`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncasecmp(char *__s1, char *__s2, size_t __n)

{
  int iVar1;

  iVar1 = (*(code *)PTR_strncasecmp_00815b58)();
  return iVar1;
}

/* ======================================================================
 * vfprintf  (Ghidra `vfprintf` @ 00451a20)
 * Signature: int vfprintf(FILE * __s, char * __format, __gnuc_va_list __arg)
 * Calls: (none)
 * Called by: `DebugMsg`, `vfprintf__00825550`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vfprintf(FILE *__s, char *__format, __gnuc_va_list __arg)

{
  int iVar1;

  iVar1 = (*(code *)PTR_vfprintf_00815b90)();
  return iVar1;
}

/* ======================================================================
 * strcmp  (Ghidra `strcmp` @ 00451a70)
 * Signature: int strcmp(char * __s1, char * __s2)
 * Calls: (none)
 * Called by: `Create`, `FilePackage__GetFileFromPackage`, `FindCachedInternetsChapter`, `FlashAnimationLibrary__GetClipIndex`, `FlashAnimationLibrary__GetDotIndex`, `FlashAnimationLibrary__GetEditablTextFieldText`, `FlashAnimationLibrary__GetMovieClip`, `FlashAnimationLibrary__GetUITextField`, `FormatStringToKeyboardKey`, `GameRegistry__GetVariable` (+23 more)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1, char *__s2)

{
  int iVar1;

  iVar1 = (*(code *)PTR_strcmp_00815bb8)();
  return iVar1;
}

/* ======================================================================
 * strtol  (Ghidra `strtol` @ 00451a80)
 * Signature: long strtol(char * __nptr, char * * __endptr, int __base)
 * Calls: (none)
 * Called by: `StringToInt`, `strtol__00825580`, `token_to_int_isra_7`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr, char **__endptr, int __base)

{
  long lVar1;

  lVar1 = (*(code *)PTR_strtol_00815bc0)();
  return lVar1;
}

/* ======================================================================
 * usleep  (Ghidra `usleep` @ 00451a90)
 * Signature: int usleep(__useconds_t __useconds)
 * Calls: (none)
 * Called by: `SQLDatabaseQueryProcessor`, `SQLDatabase__SQLDatabase__005b4540`, `SQLDatabase__WaitForQuery`, `WaitForWorkerThread`, `WaitForWorkerThreads`, `usleep__00825588`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
  int iVar1;

  iVar1 = (*(code *)PTR_usleep_00815bc8)();
  return iVar1;
}

/* ======================================================================
 * wcstol  (Ghidra `wcstol` @ 00451ba0)
 * Signature: long wcstol(wchar_t * __nptr, wchar_t * * __endptr, int __base)
 * Calls: (none)
 * Called by: `StringToIntW`, `wcstol__00825610`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long wcstol(wchar_t *__nptr, wchar_t **__endptr, int __base)

{
  long lVar1;

  lVar1 = (*(code *)PTR_wcstol_00815c50)();
  return lVar1;
}

/* ======================================================================
 * substr  (Ghidra `substr` @ 00451d30)
 * Signature: uint8_t substr(ulong arg1, ulong arg2)
 * Calls: (none)
 * Called by: (none)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std__string_substr(ulong arg1, ulong arg2)

{
  (*(code *)PTR_substr_00815d18)();
  return;
}

/* ======================================================================
 * strcat  (Ghidra `strcat` @ 00451d80)
 * Signature: char * strcat(char * __dest, char * __src)
 * Calls: (none)
 * Called by: `gzerror`, `main`, `strcat__008256f0`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char *strcat(char *__dest, char *__src)

{
  char *pcVar1;

  pcVar1 = (char *)(*(code *)PTR_strcat_00815d40)();
  return pcVar1;
}

/* ======================================================================
 * state_SETP  (Ghidra `state_SETP` @ 0051bc80)
 * Signature: uint8_t state_SETP(void)
 * Calls: `failf`
 * Called by: (none)
 */
void state_SETP(long arg1)

{
  if (*(int *)(arg1 + 0x108) != 0x13) {
    failf(arg1, "%s", "SETP argument isn\'t predicate register");
    return;
  }
  return;
}

/* ======================================================================
 * state_MOVA  (Ghidra `state_MOVA` @ 0051bef0)
 * Signature: uint8_t state_MOVA(void)
 * Calls: `failf`
 * Called by: (none)
 */
void state_MOVA(long arg1)

{
  if (*(int *)(arg1 + 0x108) != 3) {
    failf(arg1, "%s", "MOVA argument isn\'t address register");
    return;
  }
  return;
}

/* ======================================================================
 * state_M3X3  (Ghidra `state_M3X3` @ 0051bf20)
 * Signature: uint8_t state_M3X3(void)
 * Calls: `failf`, `reglist_insert`
 * Called by: (none)
 */
void state_M3X3(long arg1)

{
  int iVar1;

  if (*(int *)(arg1 + 0xe8) != 7) {
    failf(arg1, "%s", "M3X3 writemask must be .xyz");
  }
  *(uint64_t *)(arg1 + 400) = *(uint64_t *)(arg1 + 0x150);
  *(uint64_t *)(arg1 + 0x198) = *(uint64_t *)(arg1 + 0x158);
  iVar1 = (int)*(uint64_t *)(arg1 + 0x158) + 1;
  *(uint64_t *)(arg1 + 0x1a0) = *(uint64_t *)(arg1 + 0x160);
  *(uint64_t *)(arg1 + 0x1a8) = *(uint64_t *)(arg1 + 0x168);
  *(uint64_t *)(arg1 + 0x1b0) = *(uint64_t *)(arg1 + 0x170);
  *(uint64_t *)(arg1 + 0x1b8) = *(uint64_t *)(arg1 + 0x178);
  *(uint64_t *)(arg1 + 0x1c0) = *(uint64_t *)(arg1 + 0x180);
  *(int *)(arg1 + 0x198) = iVar1;
  *(uint64_t *)(arg1 + 0x1c8) = *(uint64_t *)(arg1 + 0x188);
  if ((0 < iVar1) && ((int)((ulong) * (uint64_t *)(arg1 + 0x170) >> 0x20) == 8)) {
    *(uint32_t *)(arg1 + 0x47c) = 1;
  }
  reglist_insert(arg1, arg1 + 0x358);
  *(uint64_t *)(arg1 + 0x1d0) = *(uint64_t *)(arg1 + 0x150);
  *(uint64_t *)(arg1 + 0x1d8) = *(uint64_t *)(arg1 + 0x158);
  *(uint64_t *)(arg1 + 0x1e0) = *(uint64_t *)(arg1 + 0x160);
  iVar1 = *(int *)(arg1 + 0x1d8) + 2;
  *(uint64_t *)(arg1 + 0x1e8) = *(uint64_t *)(arg1 + 0x168);
  *(uint64_t *)(arg1 + 0x1f0) = *(uint64_t *)(arg1 + 0x170);
  *(uint64_t *)(arg1 + 0x1f8) = *(uint64_t *)(arg1 + 0x178);
  *(uint64_t *)(arg1 + 0x200) = *(uint64_t *)(arg1 + 0x180);
  *(int *)(arg1 + 0x1d8) = iVar1;
  *(uint64_t *)(arg1 + 0x208) = *(uint64_t *)(arg1 + 0x188);
  if ((0 < iVar1) && (*(int *)(arg1 + 500) == 8)) {
    *(uint32_t *)(arg1 + 0x47c) = 1;
  }
  reglist_insert(arg1, arg1 + 0x358);
  return;
}

/* ======================================================================
 * state_LOGP  (Ghidra `state_LOGP` @ 0051c0c0)
 * Signature: uint8_t state_LOGP(void)
 * Calls: `failf`
 * Called by: (none)
 */
void state_LOGP(long arg1)

{
  uint uVar1;

  uVar1 = *(uint *)(arg1 + 0x11c);
  if ((((int)uVar1 >> 2 ^ uVar1) & 3) == 0) {
    if (((((int)uVar1 >> 2 ^ (int)uVar1 >> 4) & 3U) == 0) &&
        ((((int)uVar1 >> 6 ^ (int)uVar1 >> 4) & 3U) == 0)) {
      return;
    }
  }
  failf(arg1, "%s", "LOGP src0 must have replicate swizzle");
  return;
}

/* ======================================================================
 * state_TEXCRD  (Ghidra `state_TEXCRD` @ 0051c110)
 * Signature: uint8_t state_TEXCRD(void)
 * Calls: `failf`
 * Called by: (none)
 */
void state_TEXCRD(long arg1)

{
  uint uVar1;

  uVar1 = 1;
  if (*(byte *)(arg1 + 0xd5) != 0xff) {
    uVar1 = (uint) * (byte *)(arg1 + 0xd5);
  }
  if ((uVar1 | (uint) * (byte *)(arg1 + 0xd4) << 0x10) < 0x20000) {
    return;
  }
  failf(arg1, "%s", "TEXCRD in Shader Model >= 2.0");
  return;
}

/* ======================================================================
 * state_REP  (Ghidra `state_REP` @ 0051c2c0)
 * Signature: uint8_t state_REP(void)
 * Calls: `failf`
 * Called by: (none)
 */
void state_REP(long arg1)

{
  int iVar1;

  if (*(int *)(arg1 + 0x134) != 7) {
    failf(arg1, "%s", "REP argument isn\'t constint register");
  }
  iVar1 = *(int *)(arg1 + 0x2b4) + 1;
  *(int *)(arg1 + 0x2b4) = iVar1;
  if (*(int *)(arg1 + 0x2b8) < iVar1) {
    *(int *)(arg1 + 0x2b8) = iVar1;
  }
  return;
}

/* ======================================================================
 * state_RET  (Ghidra `state_RET` @ 0051c300)
 * Signature: uint8_t state_RET(void)
 * Calls: `failf`
 * Called by: (none)
 */
void state_RET(long arg1)

{
  if (0 < *(int *)(arg1 + 0x2b0)) {
    failf(arg1, "%s", "LOOP without ENDLOOP");
  }
  if (0 < *(int *)(arg1 + 0x2b4)) {
    failf(arg1, "%s", "REP without ENDREP");
    return;
  }
  return;
}

/* ======================================================================
 * state_LOG  (Ghidra `state_LOG` @ 0051c350)
 * Signature: uint8_t state_LOG(void)
 * Calls: `failf`
 * Called by: (none)
 */
void state_LOG(long arg1)

{
  uint uVar1;

  uVar1 = *(uint *)(arg1 + 0x11c);
  if ((((int)uVar1 >> 2 ^ uVar1) & 3) == 0) {
    if (((((int)uVar1 >> 2 ^ (int)uVar1 >> 4) & 3U) == 0) &&
        ((((int)uVar1 >> 6 ^ (int)uVar1 >> 4) & 3U) == 0)) {
      return;
    }
  }
  failf(arg1, "%s", "LOG src0 must have replicate swizzle");
  return;
}

/* ======================================================================
 * state_RCP  (Ghidra `state_RCP` @ 0051c3a0)
 * Signature: uint8_t state_RCP(void)
 * Calls: `failf`
 * Called by: (none)
 */
void state_RCP(long arg1)

{
  uint uVar1;

  uVar1 = *(uint *)(arg1 + 0x11c);
  if ((((int)uVar1 >> 2 ^ uVar1) & 3) == 0) {
    if (((((int)uVar1 >> 2 ^ (int)uVar1 >> 4) & 3U) == 0) &&
        ((((int)uVar1 >> 6 ^ (int)uVar1 >> 4) & 3U) == 0)) {
      return;
    }
  }
  failf(arg1, "%s", "RCP without replicate swizzzle");
  return;
}

/* ======================================================================
 * state_TEXKILL  (Ghidra `state_TEXKILL` @ 0051c3f0)
 * Signature: uint8_t state_TEXKILL(void)
 * Calls: `failf`
 * Called by: (none)
 */
void state_TEXKILL(long arg1)

{
  if (*(int *)(arg1 + 0xe8) != 0xf) {
    failf(arg1, "%s", "TEXKILL writemask must be .xyzw");
    return;
  }
  if ((*(int *)(arg1 + 0x108) != 3) && (*(int *)(arg1 + 0x108) != 0)) {
    failf(arg1, "%s", "TEXKILL must use a temp or texture register");
    return;
  }
  return;
}

/* ======================================================================
 * state_LOOP  (Ghidra `state_LOOP` @ 0051c440)
 * Signature: uint8_t state_LOOP(void)
 * Calls: `failf`
 * Called by: (none)
 */
void state_LOOP(long arg1)

{
  if (*(int *)(arg1 + 0x134) != 0xf) {
    failf(arg1, "%s", "LOOP argument isn\'t loop register");
    return;
  }
  if (*(int *)(arg1 + 0x174) == 7) {
    *(int *)(arg1 + 0x2b0) = *(int *)(arg1 + 0x2b0) + 1;
    return;
  }
  failf(arg1, "%s", "LOOP argument isn\'t constint register");
  return;
}

/* ======================================================================
 * state_TEXLDL  (Ghidra `state_TEXLDL` @ 0051c490)
 * Signature: uint8_t state_TEXLDL(void)
 * Calls: `failf`
 * Called by: (none)
 */
void state_TEXLDL(long arg1)

{
  uint uVar1;

  uVar1 = 1;
  if (*(byte *)(arg1 + 0xd5) != 0xff) {
    uVar1 = (uint) * (byte *)(arg1 + 0xd5);
  }
  if ((uVar1 | (uint) * (byte *)(arg1 + 0xd4) << 0x10) < 0x30000) {
    failf(arg1, "%s", "TEXLDL in version < Shader Model 3.0");
    return;
  }
  if (*(int *)(arg1 + 0x174) != 10) {
    failf(arg1, "%s", "TEXLDL src1 must be sampler register");
    return;
  }
  if (*(int *)(arg1 + 0x158) != 3) {
    return;
  }
  *(int *)(arg1 + 0x2a4) = *(int *)(arg1 + 0x2a4) + 3;
  return;
}

/* ======================================================================
 * state_POW  (Ghidra `state_POW` @ 0051ca60)
 * Signature: uint8_t state_POW(void)
 * Calls: `failf`
 * Called by: (none)
 */
void state_POW(long arg1)

{
  uint uVar1;

  uVar1 = *(uint *)(arg1 + 0x11c);
  if ((((int)uVar1 >> 2 ^ uVar1) & 3) == 0) {
    if (((((int)uVar1 >> 2 ^ (int)uVar1 >> 4) & 3U) == 0) &&
        ((((int)uVar1 >> 6 ^ (int)uVar1 >> 4) & 3U) == 0)) {
      uVar1 = *(uint *)(arg1 + 0x15c);
      if ((((int)uVar1 >> 2 ^ uVar1) & 3) == 0) {
        if (((((int)uVar1 >> 2 ^ (int)uVar1 >> 4) & 3U) == 0) &&
            ((((int)uVar1 >> 6 ^ (int)uVar1 >> 4) & 3U) == 0)) {
          return;
        }
      }
      failf(arg1, "%s", "POW src1 must have replicate swizzle");
      return;
    }
  }
  failf(arg1, "%s", "POW src0 must have replicate swizzle");
  return;
}

/* ======================================================================
 * state_TEXLD  (Ghidra `state_TEXLD` @ 0051d410)
 * Signature: uint8_t state_TEXLD(void)
 * Calls: `failf`
 * Called by: (none)
 */
void state_TEXLD(long arg1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;

  bVar1 = *(byte *)(arg1 + 0xd5);
  uVar2 = (uint) * (byte *)(arg1 + 0xd4) << 0x10;
  uVar3 = 1;
  if (bVar1 != 0xff) {
    uVar3 = (uint)bVar1;
  }
  if ((uVar3 | uVar2) < 0x20000) {
    return;
  }
  if (*(int *)(arg1 + 0x130) == 0) {
    pcVar4 = "TEXLD src1 must be sampler register";
    if (*(int *)(arg1 + 0x174) == 10) {
      if (*(int *)(arg1 + 0x170) != 0)
        goto LAB_0051d480;
      if (*(uint *)(arg1 + 0x2a8) < 3)
        goto LAB_0051d4a5;
      pcVar4 = "TEXLD has unknown control bits";
    }
  } else {
  LAB_0051d480:
    pcVar4 = "TEXLD src0 must have no modifiers";
  }
  failf(arg1, "%s", pcVar4);
  bVar1 = *(byte *)(arg1 + 0xd5);
  uVar2 = (uint) * (byte *)(arg1 + 0xd4) << 0x10;
LAB_0051d4a5:
  uVar3 = 1;
  if (bVar1 != 0xff) {
    uVar3 = (uint)bVar1;
  }
  if ((uVar3 | uVar2) < 0x30000) {
    if (*(int *)(arg1 + 0x11c) == 0xe4) {
      if (*(int *)(arg1 + 0x15c) != 0xe4) {
        failf(arg1, "%s", "TEXLD src1 must not swizzle");
      }
    } else {
      failf(arg1, "%s", "TEXLD src0 must not swizzle");
    }
  }
  if (*(int *)(arg1 + 0x158) == 3) {
    *(int *)(arg1 + 0x2a4) = *(int *)(arg1 + 0x2a4) + 3;
  }
  return;
}

/* ======================================================================
 * state_SINCOS  (Ghidra `state_SINCOS` @ 0051d6d0)
 * Signature: uint8_t state_SINCOS(void)
 * Calls: `failf`
 * Called by: (none)
 */
void state_SINCOS(long arg1)

{
  int iVar1;
  uint uVar2;
  uint64_t uVar3;

  iVar1 = *(int *)(arg1 + 0xe8);
  if (((iVar1 != 1) && (iVar1 != 2)) && (iVar1 != 3)) {
    failf(arg1, "%s", "SINCOS write mask must be .x or .y or .xy");
    return;
  }
  uVar2 = *(uint *)(arg1 + 0x11c);
  if ((((((int)uVar2 >> 2 ^ uVar2) & 3) == 0) &&
       ((((int)uVar2 >> 2 ^ (int)uVar2 >> 4) & 3U) == 0)) &&
      ((((int)uVar2 >> 6 ^ (int)uVar2 >> 4) & 3U) == 0)) {
    if ((*(byte *)(arg1 + 0x100) & 1) != 0) {
      failf(arg1, "%s", "SINCOS destination can\'t use saturate modifier");
      return;
    }
    uVar2 = 1;
    if (*(byte *)(arg1 + 0xd5) != 0xff) {
      uVar2 = (uint) * (byte *)(arg1 + 0xd5);
    }
    if (0x2ffff < (uVar2 | (uint) * (byte *)(arg1 + 0xd4) << 0x10)) {
      return;
    }
    if (*(int *)(arg1 + 0x174) == 2) {
      if (*(int *)(arg1 + 0x1b4) == 2) {
        if (*(int *)(arg1 + 0x158) != *(int *)(arg1 + 0x198)) {
          return;
        }
        failf(arg1, "%s", "SINCOS src1 and src2 must be different registers");
        return;
      }
      uVar3 = 2;
    } else {
      uVar3 = 1;
    }
    failf(arg1, "SINCOS src%d must be constfloat", uVar3);
    return;
  }
  failf(arg1, "%s", "SINCOS src0 must have replicate swizzle");
  return;
}

/* ======================================================================
 * state_M3X2  (Ghidra `state_M3X2` @ 00529cf0)
 * Signature: uint8_t state_M3X2(void)
 * Calls: `failf`, `reglist_insert`
 * Called by: (none)
 */
void state_M3X2(long arg1)

{
  int iVar1;

  if (*(int *)(arg1 + 0xe8) != 3) {
    failf(arg1, "%s", "M3X2 writemask must be .xy");
  }
  *(uint64_t *)(arg1 + 400) = *(uint64_t *)(arg1 + 0x150);
  *(uint64_t *)(arg1 + 0x1b8) = *(uint64_t *)(arg1 + 0x178);
  *(uint64_t *)(arg1 + 0x198) = *(uint64_t *)(arg1 + 0x158);
  iVar1 = (int)*(uint64_t *)(arg1 + 0x158) + 1;
  *(uint64_t *)(arg1 + 0x1c8) = *(uint64_t *)(arg1 + 0x188);
  *(uint64_t *)(arg1 + 0x1a0) = *(uint64_t *)(arg1 + 0x160);
  *(uint64_t *)(arg1 + 0x1c0) = *(uint64_t *)(arg1 + 0x180);
  *(int *)(arg1 + 0x198) = iVar1;
  *(uint64_t *)(arg1 + 0x1a8) = *(uint64_t *)(arg1 + 0x168);
  *(uint64_t *)(arg1 + 0x1b0) = *(uint64_t *)(arg1 + 0x170);
  if ((0 < iVar1) && ((int)((ulong) * (uint64_t *)(arg1 + 0x170) >> 0x20) == 8)) {
    *(uint32_t *)(arg1 + 0x47c) = 1;
  }
  reglist_insert(arg1, arg1 + 0x358);
  return;
}

/* ======================================================================
 * state_M4X4  (Ghidra `state_M4X4` @ 00529db0)
 * Signature: uint8_t state_M4X4(void)
 * Calls: `failf`, `reglist_insert`
 * Called by: (none)
 */
void state_M4X4(long arg1)

{
  long lVar1;
  int iVar2;

  if (*(int *)(arg1 + 0xe8) != 0xf) {
    failf(arg1, "%s", "M4X4 writemask must be full");
  }
  *(uint64_t *)(arg1 + 400) = *(uint64_t *)(arg1 + 0x150);
  *(uint64_t *)(arg1 + 0x198) = *(uint64_t *)(arg1 + 0x158);
  iVar2 = (int)*(uint64_t *)(arg1 + 0x158) + 1;
  *(uint64_t *)(arg1 + 0x1a0) = *(uint64_t *)(arg1 + 0x160);
  *(uint64_t *)(arg1 + 0x1a8) = *(uint64_t *)(arg1 + 0x168);
  *(uint64_t *)(arg1 + 0x1b0) = *(uint64_t *)(arg1 + 0x170);
  *(uint64_t *)(arg1 + 0x1b8) = *(uint64_t *)(arg1 + 0x178);
  *(uint64_t *)(arg1 + 0x1c0) = *(uint64_t *)(arg1 + 0x180);
  *(int *)(arg1 + 0x198) = iVar2;
  *(uint64_t *)(arg1 + 0x1c8) = *(uint64_t *)(arg1 + 0x188);
  if ((0 < iVar2) && ((int)((ulong) * (uint64_t *)(arg1 + 0x170) >> 0x20) == 8)) {
    *(uint32_t *)(arg1 + 0x47c) = 1;
  }
  lVar1 = arg1 + 0x358;
  reglist_insert(arg1, lVar1);
  *(uint64_t *)(arg1 + 0x1d0) = *(uint64_t *)(arg1 + 0x150);
  *(uint64_t *)(arg1 + 0x1d8) = *(uint64_t *)(arg1 + 0x158);
  *(uint64_t *)(arg1 + 0x1e0) = *(uint64_t *)(arg1 + 0x160);
  iVar2 = *(int *)(arg1 + 0x1d8) + 2;
  *(uint64_t *)(arg1 + 0x1e8) = *(uint64_t *)(arg1 + 0x168);
  *(uint64_t *)(arg1 + 0x1f0) = *(uint64_t *)(arg1 + 0x170);
  *(uint64_t *)(arg1 + 0x1f8) = *(uint64_t *)(arg1 + 0x178);
  *(uint64_t *)(arg1 + 0x200) = *(uint64_t *)(arg1 + 0x180);
  *(int *)(arg1 + 0x1d8) = iVar2;
  *(uint64_t *)(arg1 + 0x208) = *(uint64_t *)(arg1 + 0x188);
  if ((0 < iVar2) && (*(int *)(arg1 + 500) == 8)) {
    *(uint32_t *)(arg1 + 0x47c) = 1;
  }
  reglist_insert(arg1, lVar1);
  *(uint64_t *)(arg1 + 0x210) = *(uint64_t *)(arg1 + 0x150);
  *(uint64_t *)(arg1 + 0x218) = *(uint64_t *)(arg1 + 0x158);
  *(uint64_t *)(arg1 + 0x220) = *(uint64_t *)(arg1 + 0x160);
  iVar2 = *(int *)(arg1 + 0x218) + 3;
  *(uint64_t *)(arg1 + 0x228) = *(uint64_t *)(arg1 + 0x168);
  *(uint64_t *)(arg1 + 0x230) = *(uint64_t *)(arg1 + 0x170);
  *(uint64_t *)(arg1 + 0x238) = *(uint64_t *)(arg1 + 0x178);
  *(uint64_t *)(arg1 + 0x240) = *(uint64_t *)(arg1 + 0x180);
  *(int *)(arg1 + 0x218) = iVar2;
  *(uint64_t *)(arg1 + 0x248) = *(uint64_t *)(arg1 + 0x188);
  if ((0 < iVar2) && (*(int *)(arg1 + 0x234) == 8)) {
    *(uint32_t *)(arg1 + 0x47c) = 1;
  }
  reglist_insert(arg1, lVar1);
  return;
}

/* ======================================================================
 * state_M4X3  (Ghidra `state_M4X3` @ 00529f90)
 * Signature: uint8_t state_M4X3(void)
 * Calls: `failf`, `reglist_insert`
 * Called by: (none)
 */
void state_M4X3(long arg1)

{
  int iVar1;

  if (*(int *)(arg1 + 0xe8) != 7) {
    failf(arg1, "%s", "M4X3 writemask must be .xyz");
  }
  *(uint64_t *)(arg1 + 400) = *(uint64_t *)(arg1 + 0x150);
  *(uint64_t *)(arg1 + 0x198) = *(uint64_t *)(arg1 + 0x158);
  iVar1 = (int)*(uint64_t *)(arg1 + 0x158) + 1;
  *(uint64_t *)(arg1 + 0x1a0) = *(uint64_t *)(arg1 + 0x160);
  *(uint64_t *)(arg1 + 0x1a8) = *(uint64_t *)(arg1 + 0x168);
  *(uint64_t *)(arg1 + 0x1b0) = *(uint64_t *)(arg1 + 0x170);
  *(uint64_t *)(arg1 + 0x1b8) = *(uint64_t *)(arg1 + 0x178);
  *(uint64_t *)(arg1 + 0x1c0) = *(uint64_t *)(arg1 + 0x180);
  *(int *)(arg1 + 0x198) = iVar1;
  *(uint64_t *)(arg1 + 0x1c8) = *(uint64_t *)(arg1 + 0x188);
  if ((0 < iVar1) && ((int)((ulong) * (uint64_t *)(arg1 + 0x170) >> 0x20) == 8)) {
    *(uint32_t *)(arg1 + 0x47c) = 1;
  }
  reglist_insert(arg1, arg1 + 0x358);
  *(uint64_t *)(arg1 + 0x1d0) = *(uint64_t *)(arg1 + 0x150);
  *(uint64_t *)(arg1 + 0x1d8) = *(uint64_t *)(arg1 + 0x158);
  *(uint64_t *)(arg1 + 0x1e0) = *(uint64_t *)(arg1 + 0x160);
  iVar1 = *(int *)(arg1 + 0x1d8) + 2;
  *(uint64_t *)(arg1 + 0x1e8) = *(uint64_t *)(arg1 + 0x168);
  *(uint64_t *)(arg1 + 0x1f0) = *(uint64_t *)(arg1 + 0x170);
  *(uint64_t *)(arg1 + 0x1f8) = *(uint64_t *)(arg1 + 0x178);
  *(uint64_t *)(arg1 + 0x200) = *(uint64_t *)(arg1 + 0x180);
  *(int *)(arg1 + 0x1d8) = iVar1;
  *(uint64_t *)(arg1 + 0x208) = *(uint64_t *)(arg1 + 0x188);
  if ((0 < iVar1) && (*(int *)(arg1 + 500) == 8)) {
    *(uint32_t *)(arg1 + 0x47c) = 1;
  }
  reglist_insert(arg1, arg1 + 0x358);
  return;
}

/* ======================================================================
 * state_M3X4  (Ghidra `state_M3X4` @ 0052a0e0)
 * Signature: uint8_t state_M3X4(void)
 * Calls: `failf`, `reglist_insert`
 * Called by: (none)
 */
void state_M3X4(long arg1)

{
  long lVar1;
  int iVar2;

  if (*(int *)(arg1 + 0xe8) != 0xf) {
    failf(arg1, "%s", "M3X4 writemask must be .xyzw");
  }
  *(uint64_t *)(arg1 + 400) = *(uint64_t *)(arg1 + 0x150);
  *(uint64_t *)(arg1 + 0x198) = *(uint64_t *)(arg1 + 0x158);
  iVar2 = (int)*(uint64_t *)(arg1 + 0x158) + 1;
  *(uint64_t *)(arg1 + 0x1a0) = *(uint64_t *)(arg1 + 0x160);
  *(uint64_t *)(arg1 + 0x1a8) = *(uint64_t *)(arg1 + 0x168);
  *(uint64_t *)(arg1 + 0x1b0) = *(uint64_t *)(arg1 + 0x170);
  *(uint64_t *)(arg1 + 0x1b8) = *(uint64_t *)(arg1 + 0x178);
  *(uint64_t *)(arg1 + 0x1c0) = *(uint64_t *)(arg1 + 0x180);
  *(int *)(arg1 + 0x198) = iVar2;
  *(uint64_t *)(arg1 + 0x1c8) = *(uint64_t *)(arg1 + 0x188);
  if ((0 < iVar2) && ((int)((ulong) * (uint64_t *)(arg1 + 0x170) >> 0x20) == 8)) {
    *(uint32_t *)(arg1 + 0x47c) = 1;
  }
  lVar1 = arg1 + 0x358;
  reglist_insert(arg1, lVar1);
  *(uint64_t *)(arg1 + 0x1d0) = *(uint64_t *)(arg1 + 0x150);
  *(uint64_t *)(arg1 + 0x1d8) = *(uint64_t *)(arg1 + 0x158);
  *(uint64_t *)(arg1 + 0x1e0) = *(uint64_t *)(arg1 + 0x160);
  iVar2 = *(int *)(arg1 + 0x1d8) + 2;
  *(uint64_t *)(arg1 + 0x1e8) = *(uint64_t *)(arg1 + 0x168);
  *(uint64_t *)(arg1 + 0x1f0) = *(uint64_t *)(arg1 + 0x170);
  *(uint64_t *)(arg1 + 0x1f8) = *(uint64_t *)(arg1 + 0x178);
  *(uint64_t *)(arg1 + 0x200) = *(uint64_t *)(arg1 + 0x180);
  *(int *)(arg1 + 0x1d8) = iVar2;
  *(uint64_t *)(arg1 + 0x208) = *(uint64_t *)(arg1 + 0x188);
  if ((0 < iVar2) && (*(int *)(arg1 + 500) == 8)) {
    *(uint32_t *)(arg1 + 0x47c) = 1;
  }
  reglist_insert(arg1, lVar1);
  *(uint64_t *)(arg1 + 0x210) = *(uint64_t *)(arg1 + 0x150);
  *(uint64_t *)(arg1 + 0x218) = *(uint64_t *)(arg1 + 0x158);
  *(uint64_t *)(arg1 + 0x220) = *(uint64_t *)(arg1 + 0x160);
  iVar2 = *(int *)(arg1 + 0x218) + 3;
  *(uint64_t *)(arg1 + 0x228) = *(uint64_t *)(arg1 + 0x168);
  *(uint64_t *)(arg1 + 0x230) = *(uint64_t *)(arg1 + 0x170);
  *(uint64_t *)(arg1 + 0x238) = *(uint64_t *)(arg1 + 0x178);
  *(uint64_t *)(arg1 + 0x240) = *(uint64_t *)(arg1 + 0x180);
  *(int *)(arg1 + 0x218) = iVar2;
  *(uint64_t *)(arg1 + 0x248) = *(uint64_t *)(arg1 + 0x188);
  if ((0 < iVar2) && (*(int *)(arg1 + 0x234) == 8)) {
    *(uint32_t *)(arg1 + 0x47c) = 1;
  }
  reglist_insert(arg1, lVar1);
  return;
}

/* ======================================================================
 * stringmap_nuke_noop  (Ghidra `stringmap_nuke_noop` @ 0052fd50)
 * Signature: uint8_t stringmap_nuke_noop(void)
 * Calls: (none)
 * Called by: `stringmap_create`, `stringmap_insert`
 */
void stringmap_nuke_noop(void)

{
  return;
}

/* ======================================================================
 * stringmap_nuke  (Ghidra `stringmap_nuke` @ 0052fd60)
 * Signature: uint8_t stringmap_nuke(void)
 * Calls: (none)
 * Called by: `stringmap_create`
 */
void stringmap_nuke(uint64_t arg1, uint64_t arg2, long arg3)

{
  (**(code **)(arg3 + 0x38))(arg1, *(uint64_t *)(arg3 + 0x40));
  /* WARNING: Could not recover jumptable at 0x0052fd94. Too many branches */
  /* WARNING: Treating indirect jump as call */
  (**(code **)(arg3 + 0x38))(arg2, *(uint64_t *)(arg3 + 0x40));
  return;
}

/* ======================================================================
 * stringmap_create  (Ghidra `stringmap_create` @ 005304a0)
 * Signature: uint8_t stringmap_create(void)
 * Calls: `hash_hash_string`, `hash_keymatch_string`, `stringmap_nuke`, `stringmap_nuke_noop`
 * Called by: (none)
 */
uint64_t *stringmap_create(int arg1, code *arg2, code *arg3, uint64_t arg4)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  ulong uVar3;
  ulong uVar4;
  uint64_t *puVar5;
  code *pcVar6;
  bool bVar7;
  byte bVar8;

  bVar8 = 0;
  pcVar6 = stringmap_nuke;
  if (arg1 == 0) {
    pcVar6 = stringmap_nuke_noop;
  }
  puVar1 = (uint64_t *)(*arg2)(0x48, arg4);
  puVar5 = puVar1;
  if (puVar1 != (uint64_t *)0x0) {
    bVar7 = ((ulong)puVar1 & 1) != 0;
    uVar4 = 0x48;
    puVar2 = puVar1;
    if (bVar7) {
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
      puVar2 = puVar2 + (ulong)bVar8 * -2 + 1;
    }
    if ((uVar4 & 4) != 0) {
      *(uint32_t *)puVar2 = 0;
      puVar2 = (uint64_t *)((long)puVar2 + 4);
    }
    if ((uVar4 & 2) != 0) {
      *(uint16_t *)puVar2 = 0;
      puVar2 = (uint64_t *)((long)puVar2 + 2);
    }
    if (bVar7) {
      *(uint8_t *)puVar2 = 0;
    }
    puVar2 = (uint64_t *)(*arg2)(0x800, arg4);
    *puVar1 = puVar2;
    if (puVar2 == (uint64_t *)0x0) {
      puVar5 = (uint64_t *)0x0;
      (*arg3)(puVar1, arg4);
    } else {
      bVar7 = ((ulong)puVar2 & 1) != 0;
      uVar4 = 0x800;
      if (bVar7) {
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
        puVar2 = puVar2 + (ulong)bVar8 * -2 + 1;
      }
      if ((uVar4 & 4) != 0) {
        *(uint32_t *)puVar2 = 0;
        puVar2 = (uint64_t *)((long)puVar2 + 4);
      }
      if ((uVar4 & 2) != 0) {
        *(uint16_t *)puVar2 = 0;
        puVar2 = (uint64_t *)((long)puVar2 + 2);
      }
      if (bVar7) {
        *(uint8_t *)puVar2 = 0;
      }
      *(uint32_t *)(puVar1 + 1) = 0x100;
      *(uint32_t *)((long)puVar1 + 0xc) = 0;
      puVar1[2] = 0;
      puVar1[3] = hash_hash_string;
      puVar1[4] = hash_keymatch_string;
      puVar1[5] = pcVar6;
      puVar1[6] = arg2;
      puVar1[7] = arg3;
      puVar1[8] = arg4;
    }
  }
  puVar5[2] = puVar5;
  return puVar5;
}

/* ======================================================================
 * stringmap_destroy  (Ghidra `stringmap_destroy` @ 00530700)
 * Signature: uint8_t stringmap_destroy(void)
 * Calls: (none)
 * Called by: (none)
 */
void stringmap_destroy(long *arg1)

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
          (*(code *)arg1[5])(*puVar5, puVar5[1], lVar1);
          (*UNRECOVERED_JUMPTABLE)(puVar5, lVar2);
          puVar5 = puVar3;
        } while (puVar3 != (uint64_t *)0x0);
        lVar6 = *arg1;
        uVar4 = *(uint *)(arg1 + 1);
      }
      local_3c = local_3c + 1;
    } while (local_3c < uVar4);
  }
  (*UNRECOVERED_JUMPTABLE)(lVar6, lVar2);
  /* WARNING: Could not recover jumptable at 0x00530795. Too many branches */
  /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(arg1, lVar2);
  return;
}

/* ======================================================================
 * stringmap_insert  (Ghidra `stringmap_insert` @ 005307a0)
 * Signature: uint8_t stringmap_insert(void)
 * Calls: `hash_insert`, `strcpy`, `stringmap_nuke_noop`, `strlen`
 * Called by: (none)
 */
ulong stringmap_insert(long arg1, char *arg2, char *arg3)

{
  size_t sVar1;
  char *__dest;
  char *__dest_00;
  ulong uVar2;

  if (*(code **)(arg1 + 0x28) == stringmap_nuke_noop) {
    uVar2 = hash_insert();
    return uVar2;
  }
  __dest_00 = (char *)0x0;
  sVar1 = strlen(arg2);
  __dest = (char *)(**(code **)(arg1 + 0x30))((int)sVar1 + 1, *(uint64_t *)(arg1 + 0x40));
  if (arg3 != (char *)0x0) {
    sVar1 = strlen(arg3);
    __dest_00 = (char *)(**(code **)(arg1 + 0x30))((int)sVar1 + 1, *(uint64_t *)(arg1 + 0x40));
  }
  if (__dest == (char *)0x0) {
    uVar2 = 0xffffffff;
  } else if ((__dest_00 != (char *)0x0) || (uVar2 = 0xffffffff, arg3 == (char *)0x0)) {
    strcpy(__dest, arg2);
    if (arg3 != (char *)0x0) {
      strcpy(__dest_00, arg3);
    }
    uVar2 = hash_insert(arg1, __dest, __dest_00);
    if (0 < (int)uVar2) {
      return uVar2;
    }
  }
  (**(code **)(arg1 + 0x38))(__dest, *(uint64_t *)(arg1 + 0x40));
  (**(code **)(arg1 + 0x38))(__dest_00, *(uint64_t *)(arg1 + 0x40));
  return uVar2 & 0xffffffff;
}

/* ======================================================================
 * stringmap_remove  (Ghidra `stringmap_remove` @ 005308e0)
 * Signature: uint8_t stringmap_remove(void)
 * Calls: (none)
 * Called by: (none)
 */
uint64_t stringmap_remove(long *arg1, uint64_t arg2)

{
  long lVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;

  lVar1 = arg1[2];
  uVar5 = (*(code *)arg1[3])(arg2, lVar1);
  uVar7 = (ulong)((int)arg1[1] - 1U & uVar5);
  puVar4 = *(uint64_t **)(*arg1 + uVar7 * 8);
  puVar3 = (uint64_t *)0x0;
  while (true) {
    puVar2 = puVar4;
    if (puVar2 == (uint64_t *)0x0) {
      return 0;
    }
    iVar6 = (*(code *)arg1[4])(arg2, *puVar2, lVar1);
    if (iVar6 != 0)
      break;
    puVar4 = (uint64_t *)puVar2[2];
    puVar3 = puVar2;
  }
  if (puVar3 == (uint64_t *)0x0) {
    *(uint64_t *)(*arg1 + uVar7 * 8) = puVar2[2];
  } else {
    puVar3[2] = puVar2[2];
  }
  (*(code *)arg1[5])(*puVar2, puVar2[1], lVar1);
  (*(code *)arg1[7])(puVar2, arg1[8]);
  return 1;
}

/* ======================================================================
 * stringmap_find  (Ghidra `stringmap_find` @ 005308f0)
 * Signature: uint8_t stringmap_find(void)
 * Calls: `hash_find`
 * Called by: (none)
 */
void stringmap_find(uint64_t arg1, uint64_t arg2, uint64_t *arg3)

{
  uint64_t local_10;

  local_10 = 0;
  hash_find(arg1, arg2, &local_10);
  *arg3 = local_10;
  return;
}

/* ======================================================================
 * stringcache_len  (Ghidra `stringcache_len` @ 00530920)
 * Signature: uint8_t stringcache_len(void)
 * Calls: `memcpy`, `strncmp`
 * Called by: `stringcache`, `stringcache_fmt`
 */
char *stringcache_len(long *arg1, char *arg2, uint arg3)

{
  char cVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint uVar5;
  int iVar6;
  long *plVar7;
  void *__dest;
  ulong uVar8;
  char *pcVar9;
  ulong __n;

  uVar5 = 5;
  __n = (ulong)arg3;
  if (__n != 0) {
    uVar5 = 0x1505;
    uVar8 = __n;
    pcVar9 = arg2;
    do {
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      uVar5 = (int)cVar1 ^ uVar5 * 0x21;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  uVar8 = (ulong)((int)arg1[1] - 1U & uVar5 & 0xff);
  puVar4 = *(uint64_t **)(*arg1 + uVar8 * 8);
  puVar3 = (uint64_t *)0x0;
  while (true) {
    puVar2 = puVar4;
    if (puVar2 == (uint64_t *)0x0) {
      pcVar9 = (char *)0x0;
      plVar7 = (long *)(*(code *)arg1[2])(0x10, arg1[4]);
      if (plVar7 != (long *)0x0) {
        __dest = (void *)(*(code *)arg1[2])(arg3 + 1, arg1[4]);
        *plVar7 = (long)__dest;
        if (__dest == (void *)0x0) {
          (*(code *)arg1[3])(plVar7, arg1[4]);
        } else {
          memcpy(__dest, arg2, __n);
          *(uint8_t *)(*plVar7 + __n) = 0;
          plVar7[1] = *(long *)(*arg1 + uVar8 * 8);
          *(long **)(*arg1 + uVar8 * 8) = plVar7;
          pcVar9 = (char *)*plVar7;
        }
      }
      return pcVar9;
    }
    pcVar9 = (char *)*puVar2;
    iVar6 = strncmp(pcVar9, arg2, __n);
    if ((iVar6 == 0) && (pcVar9[__n] == '\0'))
      break;
    puVar4 = (uint64_t *)puVar2[1];
    puVar3 = puVar2;
  }
  if (puVar3 == (uint64_t *)0x0) {
    return pcVar9;
  }
  puVar3[1] = puVar2[1];
  puVar2[1] = *(uint64_t *)(*arg1 + uVar8 * 8);
  *(uint64_t **)(*arg1 + uVar8 * 8) = puVar2;
  return pcVar9;
}

/* ======================================================================
 * stringcache  (Ghidra `stringcache` @ 00530a70)
 * Signature: uint8_t stringcache(void)
 * Calls: `stringcache_len`, `strlen`
 * Called by: `handle_pp_line`, `push_source`
 */
void stringcache(uint64_t arg1, char *arg2)

{
  size_t sVar1;

  sVar1 = strlen(arg2);
  stringcache_len(arg1, arg2, sVar1 & 0xffffffff);
  return;
}

/* ======================================================================
 * stringcache_fmt  (Ghidra `stringcache_fmt` @ 00530ab0)
 * Signature: uint8_t stringcache_fmt(void)
 * Calls: `stringcache_len`, `vsnprintf`
 * Called by: (none)
 */
uint64_t stringcache_fmt(uint64_t arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4, uint64_t arg5,
                         uint64_t arg6, uint64_t arg7, uint64_t arg8, long arg9, char *arg10,
                         uint64_t arg11, uint64_t arg12, uint64_t arg13, uint64_t arg14)

{
  char in_AL;
  uint uVar1;
  uint64_t uVar2;
  char *__s;
  char local_178[136];
  uint32_t local_f0;
  uint32_t local_ec;
  uint8_t *local_e8;
  uint8_t *local_e0;
  uint8_t local_d8[16];
  uint64_t local_c8;
  uint64_t local_c0;
  uint64_t local_b8;
  uint64_t local_b0;
  uint64_t local_a8;
  uint64_t local_98;
  uint64_t local_88;
  uint64_t local_78;
  uint64_t local_68;
  uint64_t local_58;
  uint64_t local_48;
  uint64_t local_38;

  if (in_AL != '\0') {
    local_a8 = arg1;
    local_98 = arg2;
    local_88 = arg3;
    local_78 = arg4;
    local_68 = arg5;
    local_58 = arg6;
    local_48 = arg7;
    local_38 = arg8;
  }
  local_e8 = &stack0x00000008;
  local_e0 = local_d8;
  local_f0 = 0x10;
  local_ec = 0x30;
  local_c8 = arg11;
  local_c0 = arg12;
  local_b8 = arg13;
  local_b0 = arg14;
  uVar1 = vsnprintf(local_178, 0x80, arg10, &local_f0);
  if (uVar1 < 0x81) {
    uVar2 = stringcache_len(arg9, local_178, uVar1);
  } else {
    __s = (char *)(**(code **)(arg9 + 0x10))(uVar1, *(uint64_t *)(arg9 + 0x20));
    uVar2 = 0;
    if (__s != (char *)0x0) {
      local_e8 = &stack0x00000008;
      local_f0 = 0x10;
      local_e0 = local_d8;
      local_ec = 0x30;
      vsnprintf(__s, (long)(int)uVar1, arg10, &local_f0);
      uVar2 = stringcache_len(arg9, __s, uVar1);
      (**(code **)(arg9 + 0x18))(__s, *(uint64_t *)(arg9 + 0x20));
    }
  }
  return uVar2;
}

/* ======================================================================
 * stringcache_create  (Ghidra `stringcache_create` @ 00530c60)
 * Signature: uint8_t stringcache_create(void)
 * Calls: (none)
 * Called by: `MOJOSHADER_preprocess`, `preprocessor_start`
 */
uint64_t *stringcache_create(code *arg1, code *arg2, uint64_t arg3)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  ulong uVar3;
  ulong uVar4;
  uint64_t *puVar5;
  bool bVar6;
  byte bVar7;

  bVar7 = 0;
  puVar1 = (uint64_t *)(*arg1)(0x28, arg3);
  puVar5 = puVar1;
  if (puVar1 != (uint64_t *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar2 = (uint64_t *)(*arg1)(0x800, arg3);
    *puVar1 = puVar2;
    if (puVar2 == (uint64_t *)0x0) {
      puVar5 = (uint64_t *)0x0;
      (*arg2)(puVar1, arg3);
    } else {
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
      puVar1[2] = arg1;
      puVar1[3] = arg2;
      puVar1[4] = arg3;
    }
  }
  return puVar5;
}

/* ======================================================================
 * stringcache_destroy  (Ghidra `stringcache_destroy` @ 00530de0)
 * Signature: uint8_t stringcache_destroy(void)
 * Calls: (none)
 * Called by: `preprocessor_end`
 */
void stringcache_destroy(long *arg1)

{
  code *UNRECOVERED_JUMPTABLE;
  long lVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  ulong uVar4;

  if (arg1 != (long *)0x0) {
    UNRECOVERED_JUMPTABLE = (code *)arg1[3];
    lVar1 = arg1[4];
    if ((int)arg1[1] != 0) {
      uVar4 = 0;
      do {
        puVar3 = (uint64_t *)(uVar4 * 8 + *arg1);
        puVar2 = (uint64_t *)*puVar3;
        *puVar3 = 0;
        while (puVar2 != (uint64_t *)0x0) {
          puVar3 = (uint64_t *)puVar2[1];
          (*UNRECOVERED_JUMPTABLE)(*puVar2, lVar1);
          (*UNRECOVERED_JUMPTABLE)(puVar2, lVar1);
          puVar2 = puVar3;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)(arg1 + 1));
    }
    (*UNRECOVERED_JUMPTABLE)(*arg1, lVar1);
    /* WARNING: Could not recover jumptable at 0x00530e7b. Too many branches */
    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(arg1, lVar1);
    return;
  }
  return;
}

/* ======================================================================
 * update_state  (Ghidra `update_state` @ 00531d10)
 * Signature: uint8_t update_state(void)
 * Calls: (none)
 * Called by: `preprocessor_lexer`
 */
uint32_t update_state(long arg1, int arg2, long arg3, uint8_t *arg4, uint32_t arg5)

{
  uint64_t uVar1;

  if (arg2 == 0) {
    uVar1 = *(uint64_t *)(arg1 + 0x10);
    *(long *)(arg1 + 0x10) = arg3;
    *(int *)(arg1 + 0x44) = *(int *)(arg1 + 0x44) - ((int)arg3 - (int)uVar1);
  } else {
    *(uint32_t *)(arg1 + 0x44) = 0;
    arg3 = (ulong) * (uint *)(arg1 + 0x40) + *(long *)(arg1 + 8);
    *(long *)(arg1 + 0x10) = arg3;
    if (((uint8_t *)0x81ca1f < arg4) && (arg4 < &DAT_0081ca28 /* R:1.395132751081788e-41f */)) {
      *(long *)(arg1 + 0x18) = arg3;
      *(uint32_t *)(arg1 + 0x24) = arg5;
      *(uint32_t *)(arg1 + 0x20) = 0;
      return arg5;
    }
  }
  *(uint8_t **)(arg1 + 0x18) = arg4;
  *(uint32_t *)(arg1 + 0x24) = arg5;
  *(int *)(arg1 + 0x20) = (int)arg3 - (int)arg4;
  return arg5;
}

/* ======================================================================
 * valid_profile_part_12  (Ghidra `valid_profile.part.12` @ 00536820)
 * Signature: uint8_t valid_profile.part.12(void)
 * Calls: `snprintf`
 * Called by: `MOJOSHADER_glAvailableProfiles`, `MOJOSHADER_glAvailableProfiles_constprop_14`, `MOJOSHADER_glCreateContext`
 */
uint64_t valid_profile_part_12(char *arg1)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;

  if ((*arg1 == 'n') && (arg1[1] == 'v')) {
    if ((arg1[2] == '2') && (arg1[3] == '\0')) {
      pcVar2 = "MOJOSHADER_PROFILE_NV2 profile needs GL_ARB_vertex_program";
      if ((((*(int *)(ctx + 0x510c0) != 0) &&
            (pcVar2 = "MOJOSHADER_PROFILE_NV2 profile needs GL_ARB_fragment_program",
             *(int *)(ctx + 0x510c4) != 0)) &&
           (pcVar2 = "MOJOSHADER_PROFILE_NV2 profile needs GL_NV_vertex_program2_option",
            *(int *)(ctx + 0x510c8) != 0)) &&
          (pcVar2 = "MOJOSHADER_PROFILE_NV2 profile needs GL_NV_fragment_program2",
           *(int *)(ctx + 0x510cc) != 0)) {
        return 1;
      }
      goto LAB_00536870;
    }
    if ((arg1[2] == '3') && (arg1[3] == '\0')) {
      pcVar2 = "MOJOSHADER_PROFILE_NV3 profile needs GL_ARB_vertex_program";
      if ((*(int *)(ctx + 0x510c0) != 0) &&
          ((pcVar2 = "MOJOSHADER_PROFILE_NV3 profile needs GL_ARB_fragment_program",
            *(int *)(ctx + 0x510c4) != 0 &&
                (pcVar2 = "MOJOSHADER_PROFILE_NV3 profile needs GL_NV_vertex_program3",
                 *(int *)(ctx + 0x510d0) != 0)))) {
        if (*(int *)(ctx + 0x510cc) != 0) {
          return 1;
        }
        pcVar2 = "MOJOSHADER_PROFILE_NV3 profile needs GL_NV_fragment_program2";
      }
      goto LAB_00536870;
    }
    if ((arg1[2] == '4') && (arg1[3] == '\0')) {
      pcVar2 = "MOJOSHADER_PROFILE_NV4 profile needs GL_NV_gpu_program4";
      if (*(int *)(ctx + 0x510d4) != 0) {
        return 1;
      }
      goto LAB_00536870;
    }
  }
  bVar4 = false;
  lVar1 = 8;
  pcVar2 = arg1;
  pcVar3 = "glsl120";
  do {
    if (lVar1 == 0)
      break;
    lVar1 = lVar1 + -1;
    bVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar4);
  if (bVar4) {
    pcVar2 = "MOJOSHADER_PROFILE_GLSL120 profile needs missing GLSL support";
    if (0x10013 < (int)((uint) * (ushort *)(ctx + 0x5109c) | *(int *)(ctx + 0x51098) << 0x10)) {
      return 1;
    }
  } else {
    lVar1 = 5;
    pcVar2 = "glsl";
    do {
      if (lVar1 == 0)
        break;
      lVar1 = lVar1 + -1;
      bVar4 = *arg1 == *pcVar2;
      arg1 = arg1 + 1;
      pcVar2 = pcVar2 + 1;
    } while (bVar4);
    if (bVar4) {
      pcVar2 = "MOJOSHADER_PROFILE_GLSL profile needs missing GLSL support";
      if (0x10009 < (int)((uint) * (ushort *)(ctx + 0x5109c) | *(int *)(ctx + 0x51098) << 0x10)) {
        return 1;
      }
    } else {
      pcVar2 = "unknown or unsupported profile";
    }
  }
LAB_00536870:
  snprintf(error_buffer, 0x400, "%s", pcVar2);
  return 0;
}

/* ======================================================================
 * token_to_int_isra_7  (Ghidra `token_to_int.isra.7` @ 005397e0)
 * Signature: uint8_t token_to_int.isra.7(void)
 * Calls: `memcpy`, `strtol`
 * Called by: `handle_pp_line`, `reduce_pp_expression`
 */
void token_to_int_isra_7(uint64_t *arg1, uint *arg2)

{
  char *__nptr;
  uint uVar1;
  void *__src;
  long lVar2;
  uint64_t uStack_20;

  uVar1 = *arg2;
  __src = (void *)*arg1;
  lVar2 = -((ulong)(*arg2 + 1) + 0x1e & 0xfffffffffffffff0);
  __nptr = &stack0xfffffffffffffff0 + lVar2;
  *(uint64_t *)((long)&uStack_20 + lVar2) = 0x539814;
  memcpy(__nptr, __src, (ulong)uVar1);
  __nptr[*arg2] = '\0';
  *(uint64_t *)((long)&uStack_20 + lVar2) = 0x53982b;
  strtol(__nptr, (char **)0x0, 10);
  return;
}

/* ======================================================================
 * unpack_adpcm  (Ghidra `unpack_adpcm` @ 0053db40)
 * Signature: uint8_t __stdcall unpack_adpcm(AdpcmDecoder * arg1, void * arg2, uint arg3)
 * Calls: (none)
 * Called by: `audCreateCue`, `audPlayCue`, `audUpdateDevice`
 */
/* unpack_adpcm(AdpcmDecoder*, void*, unsigned int) */

void unpack_adpcm(AdpcmDecoder *arg1, void *arg2, uint arg3)

{
  byte bVar1;
  ushort uVar2;
  uint16_t uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  void *pvVar7;
  long lVar8;
  AdpcmDecoder *pAVar9;
  long lVar10;
  uint16_t uVar11;
  AdpcmDecoder *pAVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  AdpcmDecoder AVar16;

  *(void **)arg1 = arg2;
  *(void **)(arg1 + 8) = arg2;
  if (*(void **)(arg1 + 0x18) != (void *)0x0) {
    operator_delete__(*(void **)(arg1 + 0x18));
  }
  pvVar7 = operator_new__((ulong)(arg3 * 8));
  uVar14 = 0;
  uVar13 = 0;
  *(void **)(arg1 + 0x18) = pvVar7;
  *(uint32_t *)(arg1 + 0x20) = 0;
  *(uint *)(arg1 + 0x10) = arg3;
  if (arg3 != 0) {
    iVar6 = *(int *)(arg1 + 0x2c);
    do {
      if (iVar6 == 0) {
        uVar2 = *(ushort *)(arg1 + 0x24);
        if (uVar2 == 0) {
          *(uint32_t *)(arg1 + 0x60) = 0;
          iVar6 = *(int *)(arg1 + 0x28);
          pAVar9 = *(AdpcmDecoder **)(arg1 + 8);
        } else {
          pAVar9 = *(AdpcmDecoder **)(arg1 + 8);
          lVar8 = 0;
          pAVar12 = pAVar9;
          do {
            AVar16 = *pAVar12;
            pAVar12 = pAVar12 + 1;
            arg1[lVar8 * 8 + 0x4e] = AVar16;
            lVar8 = lVar8 + 1;
            *(AdpcmDecoder **)(arg1 + 8) = pAVar12;
            uVar13 = (uint)uVar2;
          } while ((int)lVar8 < (int)uVar13);
          lVar8 = 0;
          pAVar9 = pAVar9 + (ulong)(uVar2 - 1) + 1;
          do {
            *(uint16_t *)(arg1 + lVar8 * 8 + 0x50) = *(uint16_t *)pAVar9;
            lVar8 = lVar8 + 1;
            pAVar9 = (AdpcmDecoder *)(*(long *)(arg1 + 8) + 2);
            *(AdpcmDecoder **)(arg1 + 8) = pAVar9;
          } while ((int)lVar8 < (int)uVar13);
          lVar8 = 0;
          do {
            *(uint16_t *)(arg1 + lVar8 * 8 + 0x52) = *(uint16_t *)pAVar9;
            lVar8 = lVar8 + 1;
            pAVar9 = (AdpcmDecoder *)(*(long *)(arg1 + 8) + 2);
            *(AdpcmDecoder **)(arg1 + 8) = pAVar9;
          } while ((int)lVar8 < (int)uVar13);
          lVar8 = 0;
          do {
            *(uint16_t *)(arg1 + lVar8 * 8 + 0x54) = *(uint16_t *)pAVar9;
            lVar8 = lVar8 + 1;
            pAVar9 = (AdpcmDecoder *)(*(long *)(arg1 + 8) + 2);
            *(AdpcmDecoder **)(arg1 + 8) = pAVar9;
          } while ((int)lVar8 < (int)uVar13);
          iVar6 = *(int *)(arg1 + 0x28);
          *(uint32_t *)(arg1 + 0x60) = 0;
          lVar8 = *(long *)(arg1 + 0x18);
          *(int *)(arg1 + 0x2c) = iVar6;
          if (*(short *)(arg1 + 0x24) != 0) {
            lVar10 = 0;
            do {
              *(uint16_t *)(lVar8 + uVar14 + lVar10 * 2) = *(uint16_t *)(arg1 + lVar10 * 8 + 0x54);
              iVar6 = (int)lVar10;
              lVar10 = lVar10 + 1;
            } while (iVar6 + 1 < (int)(uint) * (ushort *)(arg1 + 0x24));
          LAB_0053dcb9:
            iVar6 = *(int *)(arg1 + 0x2c);
            pAVar9 = *(AdpcmDecoder **)(arg1 + 8);
          }
        }
      } else {
        if (iVar6 == 1) {
          lVar8 = *(long *)(arg1 + 0x18);
          if (*(short *)(arg1 + 0x24) != 0) {
            lVar10 = 0;
            do {
              *(uint16_t *)(uVar14 + lVar8 + lVar10 * 2) = *(uint16_t *)(arg1 + lVar10 * 8 + 0x52);
              iVar6 = (int)lVar10;
              lVar10 = lVar10 + 1;
            } while (iVar6 + 1 < (int)(uint) * (ushort *)(arg1 + 0x24));
            goto LAB_0053dcb9;
          }
        } else {
          lVar8 = *(long *)(arg1 + 0x18);
          if (*(short *)(arg1 + 0x24) == 0) {
            AVar16 = arg1[100];
          } else {
            lVar10 = 0;
            do {
              *(uint16_t *)(uVar14 + lVar8 + lVar10 * 2) = *(uint16_t *)(arg1 + lVar10 * 8 + 0x52);
              uVar2 = *(ushort *)(arg1 + 0x24);
              iVar6 = (int)lVar10;
              lVar10 = lVar10 + 1;
            } while (iVar6 + 1 < (int)(uint)uVar2);
            AVar16 = arg1[100];
            uVar13 = (uint)(byte)AVar16;
            if (uVar2 != 0) {
              lVar8 = 0;
              do {
                lVar10 = lVar8 * 8;
                iVar6 =
                    (int)*(short *)(arg1 + lVar10 + 0x54) *
                        (int)*(short *)(arg1 + ((ulong)(byte)arg1[lVar10 + 0x4e] + 0xc) * 4 + 4) +
                    (int)*(short *)(arg1 + lVar10 + 0x52) *
                        (int)*(short *)(arg1 + ((ulong)(byte)arg1[lVar10 + 0x4e] + 0xc) * 4 + 2);
                if (iVar6 < 0) {
                  iVar6 = iVar6 + 0xff;
                }
                if (*(int *)(arg1 + 0x60) == 0) {
                  bVar1 = **(byte **)(arg1 + 8);
                  uVar13 = (uint)bVar1;
                  *(uint32_t *)(arg1 + 0x60) = 1;
                  *(byte **)(arg1 + 8) = *(byte **)(arg1 + 8) + 1;
                  bVar1 = bVar1 >> 4;
                  uVar15 = (uint)bVar1;
                  uVar5 = uVar15;
                  if ((bVar1 & 8) != 0) {
                    uVar5 = uVar15 - 0x10;
                  }
                  iVar6 = (iVar6 >> 8) + uVar5 * *(ushort *)(arg1 + lVar10 + 0x50);
                  if (0x7fff < iVar6) {
                    iVar6 = 0x7fff;
                  }
                  uVar11 = (uint16_t)iVar6;
                  if (iVar6 < -0x8000) {
                    uVar11 = 0x8000;
                  }
                  iVar6 = (uint) * (ushort *)(arg1 + lVar10 + 0x50) *
                          *(int *)(do_adpcm_nibble(unsigned_char, ADPCMBLOCKHEADER *,
                                                   int)::AdaptionTable +
                                   (long)(int)uVar15 * 4);
                } else {
                  *(uint32_t *)(arg1 + 0x60) = 0;
                  uVar15 = uVar13 & 0xf;
                  uVar5 = uVar15;
                  if ((uVar13 & 8) != 0) {
                    uVar5 = uVar15 - 0x10;
                  }
                  iVar6 = (iVar6 >> 8) + uVar5 * *(ushort *)(arg1 + lVar10 + 0x50);
                  if (0x7fff < iVar6) {
                    iVar6 = 0x7fff;
                  }
                  if (iVar6 < -0x8000) {
                    iVar6 = -0x8000;
                  }
                  uVar11 = (uint16_t)iVar6;
                  iVar6 = (uint) * (ushort *)(arg1 + lVar10 + 0x50) *
                          *(int *)(do_adpcm_nibble(unsigned_char, ADPCMBLOCKHEADER *,
                                                   int)::AdaptionTable +
                                   (long)(int)uVar15 * 4);
                }
                AVar16 = SUB41(uVar13, 0);
                if (iVar6 < 0) {
                  iVar6 = iVar6 + 0xff;
                }
                iVar4 = iVar6 >> 8;
                if (iVar6 >> 8 < 0x10) {
                  iVar4 = 0x10;
                }
                lVar8 = lVar8 + 1;
                *(short *)(arg1 + lVar10 + 0x50) = (short)iVar4;
                uVar3 = *(uint16_t *)(arg1 + lVar10 + 0x52);
                *(uint16_t *)(arg1 + lVar10 + 0x52) = uVar11;
                *(uint16_t *)(arg1 + lVar10 + 0x54) = uVar3;
              } while ((int)lVar8 < (int)(uint)uVar2);
            }
            iVar6 = *(int *)(arg1 + 0x2c);
          }
          arg1[100] = AVar16;
        }
        pAVar9 = *(AdpcmDecoder **)(arg1 + 8);
      }
      iVar6 = iVar6 + -1;
      *(int *)(arg1 + 0x2c) = iVar6;
      uVar13 = (int)uVar14 + (uint) * (ushort *)(arg1 + 0x26);
      uVar14 = (ulong)uVar13;
    } while (*(int *)arg1 + arg3 != (int)pAVar9);
  }
  *(uint *)(arg1 + 0x20) = uVar13;
  return;
}

/* ======================================================================
 * updatewindow  (Ghidra `updatewindow` @ 0056a280)
 * Signature: uint8_t updatewindow(void)
 * Calls: `memcpy`
 * Called by: `inflate`, `inflateSetDictionary`
 */
uint64_t updatewindow(long arg1, int arg2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;

  lVar1 = *(long *)(arg1 + 0x38);
  if (*(long *)(lVar1 + 0x40) == 0) {
    lVar2 = (**(code **)(arg1 + 0x40))(*(uint64_t *)(arg1 + 0x50),
                                       1 << ((byte) * (uint32_t *)(lVar1 + 0x30) & 0x1f), 1);
    *(long *)(lVar1 + 0x40) = lVar2;
    if (lVar2 == 0) {
      return 1;
    }
  }
  uVar4 = *(uint *)(lVar1 + 0x34);
  if (uVar4 == 0) {
    *(uint32_t *)(lVar1 + 0x3c) = 0;
    *(uint32_t *)(lVar1 + 0x38) = 0;
    uVar4 = 1 << ((byte) * (uint32_t *)(lVar1 + 0x30) & 0x1f);
    *(uint *)(lVar1 + 0x34) = uVar4;
    uVar3 = arg2 - *(int *)(arg1 + 0x20);
    if (uVar4 <= uVar3)
      goto LAB_0056a358;
  } else {
    uVar3 = arg2 - *(int *)(arg1 + 0x20);
    if (uVar4 <= uVar3) {
    LAB_0056a358:
      memcpy(*(void **)(lVar1 + 0x40), (void *)(*(long *)(arg1 + 0x18) - (ulong)uVar4),
             (ulong)uVar4);
      *(uint32_t *)(lVar1 + 0x3c) = 0;
      *(uint32_t *)(lVar1 + 0x38) = *(uint32_t *)(lVar1 + 0x34);
      return 0;
    }
  }
  uVar4 = uVar4 - *(uint *)(lVar1 + 0x3c);
  if (uVar3 < uVar4) {
    uVar4 = uVar3;
  }
  memcpy((void *)((ulong) * (uint *)(lVar1 + 0x3c) + *(long *)(lVar1 + 0x40)),
         (void *)(*(long *)(arg1 + 0x18) - (ulong)uVar3), (ulong)uVar4);
  uVar3 = uVar3 - uVar4;
  if (uVar3 == 0) {
    uVar3 = *(int *)(lVar1 + 0x3c) + uVar4;
    *(uint *)(lVar1 + 0x3c) = uVar3;
    if (uVar3 == *(uint *)(lVar1 + 0x34)) {
      uVar3 = *(uint *)(lVar1 + 0x38);
      *(uint32_t *)(lVar1 + 0x3c) = 0;
    } else {
      uVar3 = *(uint *)(lVar1 + 0x38);
    }
    if (uVar3 < *(uint *)(lVar1 + 0x34)) {
      *(uint *)(lVar1 + 0x38) = uVar4 + uVar3;
    }
  } else {
    memcpy(*(void **)(lVar1 + 0x40), (void *)(*(long *)(arg1 + 0x18) - (ulong)uVar3), (ulong)uVar3);
    *(uint *)(lVar1 + 0x3c) = uVar3;
    *(uint32_t *)(lVar1 + 0x38) = *(uint32_t *)(lVar1 + 0x34);
  }
  return 0;
}

/* ======================================================================
 * zlibVersion  (Ghidra `zlibVersion` @ 0056f870)
 * Signature: uint8_t zlibVersion(void)
 * Calls: (none)
 * Called by: (none)
 */
char *zlibVersion(void)

{
  return "1.2.3";
}

/* ======================================================================
 * zlibCompileFlags  (Ghidra `zlibCompileFlags` @ 0056f880)
 * Signature: uint8_t zlibCompileFlags(void)
 * Calls: (none)
 * Called by: (none)
 */
uint64_t zlibCompileFlags(void)

{
  return 0xa9;
}

/* ======================================================================
 * zError  (Ghidra `zError` @ 0056f890)
 * Signature: uint8_t zError(void)
 * Calls: (none)
 * Called by: (none)
 */
uint64_t zError(int arg1)

{
  return *(uint64_t *)(z_errmsg + (long)(2 - arg1) * 8);
}

/* ======================================================================
 * zcalloc  (Ghidra `zcalloc` @ 0056f8b0)
 * Signature: uint8_t zcalloc(void)
 * Calls: `malloc`
 * Called by: `deflateInit`, `deflateInit2`, `inflateBackInit`, `inflateInit`, `inflateInit2`
 */
void zcalloc(uint64_t arg1, int arg2, int arg3)

{
  malloc((ulong)(uint)(arg3 * arg2));
  return;
}

/* ======================================================================
 * zcfree  (Ghidra `zcfree` @ 0056f8c0)
 * Signature: uint8_t zcfree(void)
 * Calls: `free`
 * Called by: `deflateInit`, `deflateInit2`, `inflateBackInit`, `inflateInit`, `inflateInit2`
 */
void zcfree(uint64_t arg1, void *arg2)

{
  free(arg2);
  return;
}

/* ======================================================================
 * uint32_compare  (Ghidra `uint32_compare` @ 005a7a30)
 * Signature: uint8_t __stdcall uint32_compare(void * arg1, void * arg2)
 * Calls: (none)
 * Called by: `start_decoder`
 */
/* uint32_compare(void const*, void const*) */

ulong uint32_compare(void *arg1, void *arg2)

{
  ulong uVar1;

  uVar1 = 0xffffffff;
  if (*(uint *)arg2 <= *(uint *)arg1) {
    uVar1 = (ulong)(*(uint *)arg2 < *(uint *)arg1);
  }
  return uVar1;
}
