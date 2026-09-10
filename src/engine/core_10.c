/* src/engine/core_10.c — 78 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "core_10.h"

/* ======================================================================
 * operator_new_array  (Ghidra `operator.new[]` @ 00450fa0)
 * Signature: void * operator.new[](ulong arg1)
 * Calls: (none)
 * Called by: (none)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void *operator_new__(ulong arg1)

{
  void *pvVar1;

  pvVar1 = (void *)(*(code *)PTR_operator_new___00815650)();
  return pvVar1;
}

/* ======================================================================
 * printf  (Ghidra `printf` @ 00450ff0)
 * Signature: int printf(char * __format, ...)
 * Calls: (none)
 * Called by: `ThrowFileNotFoundError`, `printf__00825038`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format, ...)

{
  int iVar1;

  iVar1 = (*(code *)PTR_printf_00815678)();
  return iVar1;
}

/* ======================================================================
 * pthread_cancel  (Ghidra `pthread_cancel` @ 00451020)
 * Signature: int pthread_cancel(pthread_t __th)
 * Calls: (none)
 * Called by: (none)
 */
/* WARNING: Switch with 1 destination removed at 0x00451020 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cancel(pthread_t __th)

{
  do {
    /* WARNING: Do nothing block with infinite loop */
  } while (true);
}

/* ======================================================================
 * sprintf  (Ghidra `sprintf` @ 004510a0)
 * Signature: int sprintf(char * __s, char * __format, ...)
 * Calls: (none)
 * Called by: `gzdopen`, `sprintf__00825088`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s, char *__format, ...)

{
  int iVar1;

  iVar1 = (*(code *)PTR_sprintf_008156d0)();
  return iVar1;
}

/* ======================================================================
 * sin  (Ghidra `sin` @ 00451110)
 * Signature: double sin(double __x)
 * Calls: (none)
 * Called by: `Get2DScale`, `SMBPalette__Update`, `Transformation2DRot`, `Transformation2DSkew`, `init_blocksize`, `sin__008250c0`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double sin(double __x)

{
  double dVar1;

  dVar1 = (double)(*(code *)PTR_sin_00815708)();
  return dVar1;
}

/* ======================================================================
 * srandom  (Ghidra `srandom` @ 00451160)
 * Signature: void srandom(uint __seed)
 * Calls: (none)
 * Called by: `TEngine__TEngine`, `srandom__008250e8`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void srandom(uint __seed)

{
  (*(code *)PTR_srandom_00815730)();
  return;
}

/* ======================================================================
 * pthread_mutex_trylock  (Ghidra `pthread_mutex_trylock` @ 00451170)
 * Signature: int pthread_mutex_trylock(pthread_mutex_t * __mutex)
 * Calls: (none)
 * Called by: `CriticalSection__Lock`, `pthread_mutex_trylock__008250f0`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_trylock(pthread_mutex_t *__mutex)

{
  int iVar1;

  iVar1 = (*(code *)PTR_pthread_mutex_trylock_00815738)();
  return iVar1;
}

/* ======================================================================
 * pthread_cond_broadcast  (Ghidra `pthread_cond_broadcast` @ 00451210)
 * Signature: int pthread_cond_broadcast(pthread_cond_t * __cond)
 * Calls: (none)
 * Called by: `SyncEvent__Set`, `pthread_cond_broadcast__00825140`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cond_broadcast(pthread_cond_t *__cond)

{
  int iVar1;

  iVar1 = (*(code *)PTR_pthread_cond_broadcast_00815788)();
  return iVar1;
}

/* ======================================================================
 * reserve  (Ghidra `reserve` @ 004512a0)
 * Signature: uint8_t reserve(ulong arg1)
 * Calls: (none)
 * Called by: (none)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std__wstring_reserve(ulong arg1)

{
  (*(code *)PTR_reserve_008157d0)();
  return;
}

/* ======================================================================
 * sincosf  (Ghidra `sincosf` @ 004512b0)
 * Signature: void sincosf(float __x, float * __sinx, float * __cosx)
 * Calls: (none)
 * Called by: `ConvertToRotationMatrix__005bc1e0`, `RenderSetPiece`, `SMBEditor__Render`, `SMBPalette__AddSetPieceToBuffer__004da490`, `SMBShooter__AddShot`, `sincosf__00825190`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void sincosf(float __x, float *__sinx, float *__cosx)

{
  (*(code *)PTR_sincosf_008157d8)();
  return;
}

/* ======================================================================
 * pthread_mutexattr_destroy  (Ghidra `pthread_mutexattr_destroy` @ 004512e0)
 * Signature: int pthread_mutexattr_destroy(pthread_mutexattr_t * __attr)
 * Calls: (none)
 * Called by: `CriticalSection__CriticalSection`, `pthread_mutexattr_destroy__008251a8`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutexattr_destroy(pthread_mutexattr_t *__attr)

{
  int iVar1;

  iVar1 = (*(code *)PTR_pthread_mutexattr_destroy_008157f0)();
  return iVar1;
}

/* ======================================================================
 * pthread_join  (Ghidra `pthread_join` @ 00451360)
 * Signature: int pthread_join(pthread_t __th, void * * __thread_return)
 * Calls: (none)
 * Called by: `CloseThread`, `WaitForWorkerThread`, `WaitForWorkerThreads`, `pthread_join__008251e8`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th, void **__thread_return)

{
  int iVar1;

  iVar1 = (*(code *)PTR_pthread_join_00815830)();
  return iVar1;
}

/* ======================================================================
 * random  (Ghidra `random` @ 004513a0)
 * Signature: long random(void)
 * Calls: (none)
 * Called by: `GetRandomINT`, `random__00825208`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long random(void)

{
  long lVar1;

  lVar1 = (*(code *)PTR_random_00815850)();
  return lVar1;
}

/* ======================================================================
 * pthread_create  (Ghidra `pthread_create` @ 00451400)
 * Signature: int pthread_create(pthread_t * __newthread, pthread_attr_t * __attr, __start_routine * __start_routine, void * __arg)
 * Calls: (none)
 * Called by: `CreateWorkerThread`, `pthread_create__00825238`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread, pthread_attr_t *__attr, __start_routine *__start_routine,
                   void *__arg)

{
  int iVar1;

  iVar1 = (*(code *)PTR_pthread_create_00815880)();
  return iVar1;
}

/* ======================================================================
 * sincos  (Ghidra `sincos` @ 00451440)
 * Signature: void sincos(double __x, double * __sinx, double * __cosx)
 * Calls: (none)
 * Called by: `Get2DScale`, `RaptureBoss__ShootMaggots`, `RaptureBoss__UpdateMaggot`, `SMBPalette__SpawnDemonSpawn`, `init_blocksize`, `sincos__00825258`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void sincos(double __x, double *__sinx, double *__cosx)

{
  (*(code *)PTR_sincos_008158a0)();
  return;
}

/* ======================================================================
 * rename  (Ghidra `rename` @ 00451460)
 * Signature: int rename(char * __old, char * __new)
 * Calls: (none)
 * Called by: `main`, `rename__00825268`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int rename(char *__old, char *__new)

{
  int iVar1;

  iVar1 = (*(code *)PTR_rename_008158b0)();
  return iVar1;
}

/* ======================================================================
 * pthread_setschedparam  (Ghidra `pthread_setschedparam` @ 004514d0)
 * Signature: int pthread_setschedparam(pthread_t __target_thread, int __policy, sched_param * __param)
 * Calls: (none)
 * Called by: `CreateWorkerThread`, `pthread_setschedparam__008252a0`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_setschedparam(pthread_t __target_thread, int __policy, sched_param *__param)

{
  int iVar1;

  iVar1 = (*(code *)PTR_pthread_setschedparam_008158e8)();
  return iVar1;
}

/* ======================================================================
 * pthread_mutex_unlock  (Ghidra `pthread_mutex_unlock` @ 00451510)
 * Signature: int pthread_mutex_unlock(pthread_mutex_t * __mutex)
 * Calls: (none)
 * Called by: `SyncEvent__CheckStatus`, `SyncEvent__Reset`, `SyncEvent__Set`, `SyncEvent__Wait`, `pthread_mutex_unlock__008252c0`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
  int iVar1;

  iVar1 = (*(code *)PTR_pthread_mutex_unlock_00815908)();
  return iVar1;
}

/* ======================================================================
 * reserve__00451550  (Ghidra `reserve` @ 00451550)
 * Signature: uint8_t reserve(ulong arg1)
 * Calls: (none)
 * Called by: (none)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std__string_reserve(ulong arg1)

{
  (*(code *)PTR_reserve_00815928)();
  return;
}

/* ======================================================================
 * setlocale  (Ghidra `setlocale` @ 00451610)
 * Signature: char * setlocale(int __category, char * __locale)
 * Calls: (none)
 * Called by: `main`, `setlocale__00825340`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char *setlocale(int __category, char *__locale)

{
  char *pcVar1;

  pcVar1 = (char *)(*(code *)PTR_setlocale_00815988)();
  return pcVar1;
}

/* ======================================================================
 * srand  (Ghidra `srand` @ 004516d0)
 * Signature: void srand(uint __seed)
 * Calls: (none)
 * Called by: `TEngine__TEngine`, `srand__008253a0`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void srand(uint __seed)

{
  (*(code *)PTR_srand_008159e8)();
  return;
}

/* ======================================================================
 * sched_get_priority_max  (Ghidra `sched_get_priority_max` @ 00451700)
 * Signature: int sched_get_priority_max(int __algorithm)
 * Calls: (none)
 * Called by: `CreateWorkerThread`, `sched_get_priority_max__008253b8`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sched_get_priority_max(int __algorithm)

{
  int iVar1;

  iVar1 = (*(code *)PTR_sched_get_priority_max_00815a00)();
  return iVar1;
}

/* ======================================================================
 * pthread_detach  (Ghidra `pthread_detach` @ 004517a0)
 * Signature: int pthread_detach(pthread_t __th)
 * Calls: (none)
 * Called by: `CloseThread`, `pthread_detach__00825408`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_detach(pthread_t __th)

{
  int iVar1;

  iVar1 = (*(code *)PTR_pthread_detach_00815a50)();
  return iVar1;
}

/* ======================================================================
 * pthread_mutex_destroy  (Ghidra `pthread_mutex_destroy` @ 004518c0)
 * Signature: int pthread_mutex_destroy(pthread_mutex_t * __mutex)
 * Calls: (none)
 * Called by: `SyncEvent__SyncEvent`, `SyncEvent__SyncEvent__005b8100`, `pthread_mutex_destroy__00825498`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_destroy(pthread_mutex_t *__mutex)

{
  int iVar1;

  iVar1 = (*(code *)PTR_pthread_mutex_destroy_00815ae0)();
  return iVar1;
}

/* ======================================================================
 * pthread_cond_init  (Ghidra `pthread_cond_init` @ 00451960)
 * Signature: int pthread_cond_init(pthread_cond_t * __cond, pthread_condattr_t * __cond_attr)
 * Calls: (none)
 * Called by: `SyncEvent__SyncEvent`, `pthread_cond_init__008254f0`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cond_init(pthread_cond_t *__cond, pthread_condattr_t *__cond_attr)

{
  int iVar1;

  iVar1 = (*(code *)PTR_pthread_cond_init_00815b30)();
  return iVar1;
}

/* ======================================================================
 * sched_get_priority_min  (Ghidra `sched_get_priority_min` @ 004519e0)
 * Signature: int sched_get_priority_min(int __algorithm)
 * Calls: (none)
 * Called by: `CreateWorkerThread`, `sched_get_priority_min__00825530`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sched_get_priority_min(int __algorithm)

{
  int iVar1;

  iVar1 = (*(code *)PTR_sched_get_priority_min_00815b70)();
  return iVar1;
}

/* ======================================================================
 * pthread_mutexattr_init  (Ghidra `pthread_mutexattr_init` @ 00451a50)
 * Signature: int pthread_mutexattr_init(pthread_mutexattr_t * __attr)
 * Calls: (none)
 * Called by: `CriticalSection__CriticalSection`, `pthread_mutexattr_init__00825568`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutexattr_init(pthread_mutexattr_t *__attr)

{
  int iVar1;

  iVar1 = (*(code *)PTR_pthread_mutexattr_init_00815ba8)();
  return iVar1;
}

/* ======================================================================
 * rfind  (Ghidra `rfind` @ 00451a60)
 * Signature: uint8_t rfind(char arg1, ulong arg2)
 * Calls: (none)
 * Called by: (none)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std__string_rfind(char arg1, ulong arg2)

{
  (*(code *)PTR_rfind_00815bb0)();
  return;
}

/* ======================================================================
 * read  (Ghidra `read` @ 00451ad0)
 * Signature: ssize_t read(int __fd, void * __buf, size_t __nbytes)
 * Calls: (none)
 * Called by: `File__File`, `File__Read`, `File__ReadVariable`, `MOJOSHADER_internal_include_open`, `read__008255a8`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd, void *__buf, size_t __nbytes)

{
  ssize_t sVar1;

  sVar1 = (*(code *)PTR_read_00815be8)();
  return sVar1;
}

/* ======================================================================
 * pthread_mutex_lock  (Ghidra `pthread_mutex_lock` @ 00451b30)
 * Signature: int pthread_mutex_lock(pthread_mutex_t * __mutex)
 * Calls: (none)
 * Called by: `CriticalSection__Lock`, `SyncEvent__CheckStatus`, `SyncEvent__Reset`, `SyncEvent__Set`, `SyncEvent__Wait`, `pthread_mutex_lock__008255d8`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
  int iVar1;

  iVar1 = (*(code *)PTR_pthread_mutex_lock_00815c18)();
  return iVar1;
}

/* ======================================================================
 * pthread_mutex_init  (Ghidra `pthread_mutex_init` @ 00451b50)
 * Signature: int pthread_mutex_init(pthread_mutex_t * __mutex, pthread_mutexattr_t * __mutexattr)
 * Calls: (none)
 * Called by: `CriticalSection__CriticalSection`, `SyncEvent__SyncEvent`, `pthread_mutex_init__008255e8`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_init(pthread_mutex_t *__mutex, pthread_mutexattr_t *__mutexattr)

{
  int iVar1;

  iVar1 = (*(code *)PTR_pthread_mutex_init_00815c28)();
  return iVar1;
}

/* ======================================================================
 * pthread_cond_wait  (Ghidra `pthread_cond_wait` @ 00451bc0)
 * Signature: int pthread_cond_wait(pthread_cond_t * __cond, pthread_mutex_t * __mutex)
 * Calls: (none)
 * Called by: `SyncEvent__Wait`, `pthread_cond_wait__00825620`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cond_wait(pthread_cond_t *__cond, pthread_mutex_t *__mutex)

{
  int iVar1;

  iVar1 = (*(code *)PTR_pthread_cond_wait_00815c60)();
  return iVar1;
}

/* ======================================================================
 * readdir  (Ghidra `readdir` @ 00451be0)
 * Signature: dirent * readdir(DIR * __dirp)
 * Calls: (none)
 * Called by: `locateOneElement`, `readdir__00825630`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

dirent *readdir(DIR *__dirp)

{
  dirent *pdVar1;

  pdVar1 = (dirent *)(*(code *)PTR_readdir_00815c70)();
  return pdVar1;
}

/* ======================================================================
 * snprintf  (Ghidra `snprintf` @ 00451c50)
 * Signature: int snprintf(char * __s, size_t __maxlen, char * __format, ...)
 * Calls: (none)
 * Called by: `CreateOpenGLShader`, `MOJOSHADER_glAvailableProfiles`, `MOJOSHADER_glAvailableProfiles_constprop_14`, `MOJOSHADER_glBestProfile`, `MOJOSHADER_glBindShaders`, `MOJOSHADER_glCompileShader`, `MOJOSHADER_glCreateContext`, `MOJOSHADER_glLinkProgram`, `arb1_log_constprop_81`, `arb1_texld` (+92 more)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s, size_t __maxlen, char *__format, ...)

{
  int iVar1;

  iVar1 = (*(code *)PTR_snprintf_00815ca8)();
  return iVar1;
}

/* ======================================================================
 * realloc  (Ghidra `realloc` @ 00451cc0)
 * Signature: void * realloc(void * __ptr, size_t __size)
 * Calls: (none)
 * Called by: `BloodyTiles__Reset`, `FontEmitter__AllocateChars`, `FontEmitter__SetStaticText`, `GameRegistry__GetVariable`, `realloc__00825698`, `stb_vorbis_decode_filename`, `stb_vorbis_decode_memory`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void *realloc(void *__ptr, size_t __size)

{
  void *pvVar1;

  pvVar1 = (void *)(*(code *)PTR_realloc_00815ce0)();
  return pvVar1;
}

/* ======================================================================
 * pthread_getschedparam  (Ghidra `pthread_getschedparam` @ 00451d40)
 * Signature: int pthread_getschedparam(pthread_t __target_thread, int * __policy, sched_param * __param)
 * Calls: (none)
 * Called by: `CreateWorkerThread`, `pthread_getschedparam__008256d0`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_getschedparam(pthread_t __target_thread, int *__policy, sched_param *__param)

{
  int iVar1;

  iVar1 = (*(code *)PTR_pthread_getschedparam_00815d20)();
  return iVar1;
}

/* ======================================================================
 * pthread_mutexattr_settype  (Ghidra `pthread_mutexattr_settype` @ 00451da0)
 * Signature: int pthread_mutexattr_settype(pthread_mutexattr_t * __attr, int __kind)
 * Calls: (none)
 * Called by: `CriticalSection__CriticalSection`, `pthread_mutexattr_settype__00825700`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutexattr_settype(pthread_mutexattr_t *__attr, int __kind)

{
  int iVar1;

  iVar1 = (*(code *)PTR_pthread_mutexattr_settype_00815d50)();
  return iVar1;
}

/* ======================================================================
 * qsort  (Ghidra `qsort` @ 00451e50)
 * Signature: void qsort(void * __base, size_t __nmemb, size_t __size, __compar_fn_t __compar)
 * Calls: (none)
 * Called by: `qsort__00825758`, `start_decoder`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void qsort(void *__base, size_t __nmemb, size_t __size, __compar_fn_t __compar)

{
  (*(code *)PTR_qsort_00815da8)();
  return;
}

/* ======================================================================
 * pthread_cond_destroy  (Ghidra `pthread_cond_destroy` @ 00451e70)
 * Signature: int pthread_cond_destroy(pthread_cond_t * __cond)
 * Calls: (none)
 * Called by: `SyncEvent__SyncEvent__005b8100`, `pthread_cond_destroy__00825768`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cond_destroy(pthread_cond_t *__cond)

{
  int iVar1;

  iVar1 = (*(code *)PTR_pthread_cond_destroy_00815db8)();
  return iVar1;
}

/* ======================================================================
 * setup_temp_malloc  (Ghidra `setup_temp_malloc` @ 00451f00)
 * Signature: uint8_t __stdcall setup_temp_malloc(stb_vorbis * arg1, int arg2)
 * Calls: `malloc`
 * Called by: `start_decoder`
 */
/* setup_temp_malloc(stb_vorbis*, int) */

void *setup_temp_malloc(stb_vorbis *arg1, int arg2)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;

  uVar3 = arg2 + 3U & 0xfffffffc;
  if (*(long *)(arg1 + 0x78) == 0) {
    pvVar1 = malloc((long)(int)uVar3);
    return pvVar1;
  }
  iVar2 = *(int *)(arg1 + 0x8c) - uVar3;
  if (*(int *)(arg1 + 0x88) <= iVar2) {
    *(int *)(arg1 + 0x8c) = iVar2;
    return (void *)(*(long *)(arg1 + 0x78) + (long)iVar2);
  }
  return (void *)0x0;
}

/* ======================================================================
 * setup_temp_free  (Ghidra `setup_temp_free` @ 004522a0)
 * Signature: uint8_t __stdcall setup_temp_free(stb_vorbis * arg1, void * arg2, ulong arg3)
 * Calls: `free`
 * Called by: `start_decoder`
 */
/* setup_temp_free(stb_vorbis*, void*, unsigned long) [clone .isra.20] */

void setup_temp_free(stb_vorbis *arg1, void *arg2, ulong arg3)

{
  int in_ECX;

  if (arg1 != (stb_vorbis *)0x0) {
    *(uint *)arg2 = *(int *)arg2 + (in_ECX + 3U & 0xfffffffc);
    return;
  }
  free((void *)arg3);
  return;
}

/* ======================================================================
 * sdl_quit_at_exit  (Ghidra `sdl_quit_at_exit` @ 00473c40)
 * Signature: uint8_t sdl_quit_at_exit(void)
 * Calls: (none)
 * Called by: `main`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* sdl_quit_at_exit() */

void sdl_quit_at_exit(void)

{
  (*(code *)PTR_SDL_Quit_00815698)();
  return;
}

/* ======================================================================
 * reglist_insert  (Ghidra `reglist_insert` @ 00519840)
 * Signature: uint8_t reglist_insert(void)
 * Calls: (none)
 * Called by: `MOJOSHADER_parse`, `parse_destination_token_part_47`, `parse_source_token`, `state_DCL`, `state_DEF`, `state_DEFB`, `state_DEFI`, `state_LABEL`, `state_M3X2`, `state_M3X3` (+3 more)
 */
uint *reglist_insert(uint32_t *arg1, uint *arg2, uint arg3, uint arg4)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;

  puVar1 = *(uint **)(arg2 + 8);
  if (puVar1 == (uint *)0x0) {
  LAB_0051989d:
    puVar2 = (uint *)(**(code **)(arg1 + 2))(0x28, *(uint64_t *)(arg1 + 6));
    if (puVar2 == (uint *)0x0) {
      arg1[1] = 1;
      *arg1 = 1;
      return (uint *)0x0;
    }
    *puVar2 = arg3;
    puVar2[1] = arg4;
    puVar2[2] = 0xffffffff;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    *(uint64_t *)(puVar2 + 8) = *(uint64_t *)(arg2 + 8);
    *(uint **)(arg2 + 8) = puVar2;
  } else {
    uVar4 = arg4 << 0x10 | arg3;
    uVar3 = puVar1[1] << 0x10 | *puVar1;
    while (puVar2 = puVar1, uVar4 != uVar3) {
      if ((uVar4 < uVar3) ||
          (puVar1 = *(uint **)(puVar2 + 8), arg2 = puVar2, puVar1 == (uint *)0x0))
        goto LAB_0051989d;
      uVar3 = puVar1[1] << 0x10 | *puVar1;
    }
  }
  return puVar2;
}

/* ======================================================================
 * state_DP4  (Ghidra `state_DP4` @ 00519fe0)
 * Signature: uint8_t state_DP4(void)
 * Calls: (none)
 * Called by: (none)
 */
void state_DP4(long arg1)

{
  uint uVar1;

  uVar1 = 1;
  if (*(byte *)(arg1 + 0xd5) != 0xff) {
    uVar1 = (uint) * (byte *)(arg1 + 0xd5);
  }
  if ((uVar1 | (uint) * (byte *)(arg1 + 0xd4) << 0x10) < 0x10004) {
    *(int *)(arg1 + 0x2a4) = *(int *)(arg1 + 0x2a4) + 1;
  }
  return;
}

/* ======================================================================
 * output_line  (Ghidra `output_line` @ 0051a020)
 * Signature: uint8_t output_line(void)
 * Calls: `buffer_append`, `buffer_append_va`, `memset`
 * Called by: `arb1_log_constprop_81`, `arb1_texld`, `emit_ARB1_ABS`, `emit_ARB1_BREAK`, `emit_ARB1_CALL`, `emit_ARB1_CALLNZ`, `emit_ARB1_CMP`, `emit_ARB1_DEF`, `emit_ARB1_DEFB`, `emit_ARB1_DEFI` (+121 more)
 */
void output_line(uint64_t arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4, uint64_t arg5,
                 uint64_t arg6, uint64_t arg7, uint64_t arg8, int *arg9, uint64_t arg10,
                 uint64_t arg11, uint64_t arg12, uint64_t arg13, uint64_t arg14)

{
  int iVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  long lVar4;
  char in_AL;
  uint8_t *puVar5;
  size_t __n;
  uint64_t uStack_100;
  uint8_t auStack_f8[8];
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

  puVar5 = auStack_f8;
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
  if (*arg9 == 0) {
    local_c8 = arg11;
    local_c0 = arg12;
    local_b8 = arg13;
    local_b0 = arg14;
    if (0 < arg9[0x2b]) {
      __n = (size_t)arg9[0x2b];
      lVar4 = -(__n + 0x1e & 0xfffffffffffffff0);
      puVar5 = auStack_f8 + lVar4;
      *(uint64_t *)((long)&uStack_100 + lVar4) = 0x51a0c4;
      memset((void *)((long)&local_f0 + lVar4), 9, __n);
      uVar2 = *(uint64_t *)(arg9 + 0x14);
      *(uint64_t *)((long)&uStack_100 + lVar4) = 0x51a0d3;
      buffer_append(uVar2, (void *)((long)&local_f0 + lVar4), __n);
    }
    local_e8 = &stack0x00000008;
    uVar2 = *(uint64_t *)(arg9 + 0x14);
    local_f0 = 0x10;
    local_ec = 0x30;
    local_e0 = local_d8;
    *(uint64_t *)(puVar5 + -8) = 0x51a113;
    buffer_append_va(uVar2, arg10, &local_f0);
    iVar1 = arg9[0x30];
    uVar2 = *(uint64_t *)(arg9 + 0x2e);
    uVar3 = *(uint64_t *)(arg9 + 0x14);
    *(uint64_t *)(puVar5 + -8) = 0x51a12a;
    buffer_append(uVar3, uVar2, (long)iVar1);
  }
  return;
}

/* ======================================================================
 * state_DP2ADD  (Ghidra `state_DP2ADD` @ 0051c070)
 * Signature: uint8_t state_DP2ADD(void)
 * Calls: `failf`
 * Called by: (none)
 */
void state_DP2ADD(long arg1)

{
  uint uVar1;

  uVar1 = *(uint *)(arg1 + 0x19c);
  if ((((int)uVar1 >> 2 ^ uVar1) & 3) == 0) {
    if (((((int)uVar1 >> 2 ^ (int)uVar1 >> 4) & 3U) == 0) &&
        ((((int)uVar1 >> 6 ^ (int)uVar1 >> 4) & 3U) == 0)) {
      return;
    }
  }
  failf(arg1, "%s", "DP2ADD src2 must have replicate swizzle");
  return;
}

/* ======================================================================
 * state_BREAK  (Ghidra `state_BREAK` @ 0051c160)
 * Signature: uint8_t state_BREAK(void)
 * Calls: `failf`
 * Called by: (none)
 */
void state_BREAK(long arg1)

{
  if (*(long *)(arg1 + 0x2b0) != 0) {
    return;
  }
  failf(arg1, "%s", "BREAK outside LOOP/ENDLOOP or REP/ENDREP");
  return;
}

/* ======================================================================
 * state_CND  (Ghidra `state_CND` @ 0051c790)
 * Signature: uint8_t state_CND(void)
 * Calls: `failf`
 * Called by: (none)
 */
void state_CND(long arg1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;

  bVar1 = *(byte *)(arg1 + 0xd5);
  uVar2 = (uint) * (byte *)(arg1 + 0xd4) << 0x10;
  uVar3 = 1;
  if (bVar1 != 0xff) {
    uVar3 = (uint)bVar1;
  }
  if (0x1ffff < (uVar3 | uVar2)) {
    failf(arg1, "%s", "CND not allowed in this shader model");
    return;
  }
  uVar3 = 1;
  if (bVar1 != 0xff) {
    uVar3 = (uint)bVar1;
  }
  if (((uVar3 | uVar2) < 0x10004) &&
      ((*(int *)(arg1 + 0x134) != 0 || (*(long *)(arg1 + 0x118) != 0)))) {
    failf(arg1, "%s", "CND src must be r0.a in this shader model");
    return;
  }
  return;
}

/* ======================================================================
 * state_DEFB  (Ghidra `state_DEFB` @ 0051c820)
 * Signature: uint8_t state_DEFB(void)
 * Calls: `failf`, `reglist_insert`
 * Called by: (none)
 */
void state_DEFB(uint32_t *arg1)

{
  uint32_t uVar1;
  uint64_t *puVar2;
  char *pcVar3;

  uVar1 = arg1[0x38];
  pcVar3 = "DEFB token must come before any instructions";
  if (arg1[0xa9] == 0) {
    if (arg1[0x42] == 0xe) {
      puVar2 = (uint64_t *)(**(code **)(arg1 + 2))(0x20, *(uint64_t *)(arg1 + 6),
                                                   "DEFB token must come before any instructions");
      if (puVar2 == (uint64_t *)0x0) {
        arg1[1] = 1;
        *arg1 = 1;
      } else {
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = *(uint64_t *)(arg1 + 0xee);
        arg1[0xec] = arg1[0xec] + 1;
        *(uint64_t **)(arg1 + 0xee) = puVar2;
      }
      *(uint32_t *)((long)puVar2 + 4) = uVar1;
      *(uint32_t *)puVar2 = 2;
      *(uint *)(puVar2 + 1) = (uint)(arg1[0xa4] != 0);
      reglist_insert(arg1, arg1 + 0xe0, 0xe, uVar1);
      return;
    }
    pcVar3 = "DEFB token using invalid register";
  }
  failf(arg1, "%s", pcVar3);
  return;
}

/* ======================================================================
 * state_IFC  (Ghidra `state_IFC` @ 0051c910)
 * Signature: uint8_t state_IFC(void)
 * Calls: `failf`
 * Called by: (none)
 */
void state_IFC(long arg1)

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
      failf(arg1, "%s", "IFC src1 must have replicate swizzle");
      return;
    }
  }
  failf(arg1, "%s", "IFC src0 must have replicate swizzle");
  return;
}

/* ======================================================================
 * state_IF  (Ghidra `state_IF` @ 0051c9a0)
 * Signature: uint8_t state_IF(void)
 * Calls: `failf`
 * Called by: (none)
 */
void state_IF(long arg1)

{
  uint uVar1;

  if ((*(int *)(arg1 + 0x134) != 0xe) && (*(int *)(arg1 + 0x134) != 0x13)) {
    failf(arg1, "%s", "IF src0 must be CONSTBOOL or PREDICATE");
    return;
  }
  uVar1 = *(uint *)(arg1 + 0x11c);
  if ((((int)uVar1 >> 2 ^ uVar1) & 3) == 0) {
    if (((((int)uVar1 >> 2 ^ (int)uVar1 >> 4) & 3U) == 0) &&
        ((((int)uVar1 >> 6 ^ (int)uVar1 >> 4) & 3U) == 0)) {
      return;
    }
  }
  failf(arg1, "%s", "IF src0 must have replicate swizzle");
  return;
}

/* ======================================================================
 * state_ENDREP  (Ghidra `state_ENDREP` @ 0051ca10)
 * Signature: uint8_t state_ENDREP(void)
 * Calls: `failf`
 * Called by: (none)
 */
void state_ENDREP(long arg1)

{
  if (0 < *(int *)(arg1 + 0x2b4)) {
    *(int *)(arg1 + 0x2b4) = *(int *)(arg1 + 0x2b4) + -1;
    return;
  }
  failf(arg1, "%s", "ENDREP without REP");
  *(int *)(arg1 + 0x2b4) = *(int *)(arg1 + 0x2b4) + -1;
  return;
}

/* ======================================================================
 * state_ENDLOOP  (Ghidra `state_ENDLOOP` @ 0051caf0)
 * Signature: uint8_t state_ENDLOOP(void)
 * Calls: `failf`
 * Called by: (none)
 */
void state_ENDLOOP(long arg1)

{
  if (0 < *(int *)(arg1 + 0x2b0)) {
    *(int *)(arg1 + 0x2b0) = *(int *)(arg1 + 0x2b0) + -1;
    return;
  }
  failf(arg1, "%s", "ENDLOOP without LOOP");
  *(int *)(arg1 + 0x2b0) = *(int *)(arg1 + 0x2b0) + -1;
  return;
}

/* ======================================================================
 * state_FRC  (Ghidra `state_FRC` @ 0051cb40)
 * Signature: uint8_t state_FRC(void)
 * Calls: `failf`
 * Called by: (none)
 */
void state_FRC(long arg1)

{
  uint uVar1;

  if ((*(byte *)(arg1 + 0x100) & 1) != 0) {
    failf(arg1, "%s", "FRC destination can\'t use saturate modifier");
    return;
  }
  uVar1 = 1;
  if (*(byte *)(arg1 + 0xd5) != 0xff) {
    uVar1 = (uint) * (byte *)(arg1 + 0xd5);
  }
  if ((((uVar1 | (uint) * (byte *)(arg1 + 0xd4) << 0x10) < 0x20000) &&
       (*(int *)(arg1 + 0xe8) != 2)) &&
      (*(int *)(arg1 + 0xe8) != 3)) {
    failf(arg1, "%s", "FRC writemask must be .y or .xy for shader model 1.x");
    return;
  }
  return;
}

/* ======================================================================
 * state_DEF  (Ghidra `state_DEF` @ 0051cbc0)
 * Signature: uint8_t state_DEF(void)
 * Calls: `failf`, `reglist_insert`
 * Called by: (none)
 */
void state_DEF(uint32_t *arg1)

{
  uint32_t uVar1;
  uint64_t *puVar2;
  char *pcVar3;

  uVar1 = arg1[0x38];
  pcVar3 = "DEF token must come before any instructions";
  if (arg1[0xa9] == 0) {
    if (arg1[0x42] == 2) {
      puVar2 = (uint64_t *)(**(code **)(arg1 + 2))(0x20, *(uint64_t *)(arg1 + 6),
                                                   "DEF token must come before any instructions");
      if (puVar2 == (uint64_t *)0x0) {
        arg1[1] = 1;
        *arg1 = 1;
      } else {
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = *(uint64_t *)(arg1 + 0xee);
        arg1[0xec] = arg1[0xec] + 1;
        *(uint64_t **)(arg1 + 0xee) = puVar2;
      }
      *(uint32_t *)((long)puVar2 + 4) = uVar1;
      *(uint32_t *)puVar2 = 0;
      puVar2[1] = *(uint64_t *)(arg1 + 0xa4);
      puVar2[2] = *(uint64_t *)(arg1 + 0xa6);
      reglist_insert(arg1, arg1 + 0xe0, 2, uVar1);
      return;
    }
    pcVar3 = "DEF token using invalid register";
  }
  failf(arg1, "%s", pcVar3);
  return;
}

/* ======================================================================
 * state_DEFI  (Ghidra `state_DEFI` @ 0051ccb0)
 * Signature: uint8_t state_DEFI(void)
 * Calls: `failf`, `reglist_insert`
 * Called by: (none)
 */
void state_DEFI(uint32_t *arg1)

{
  uint32_t uVar1;
  uint64_t *puVar2;
  char *pcVar3;

  uVar1 = arg1[0x38];
  if (arg1[0xa9] == 0) {
    if (arg1[0x42] == 7) {
      puVar2 = (uint64_t *)(**(code **)(arg1 + 2))(0x20, *(uint64_t *)(arg1 + 6));
      if (puVar2 == (uint64_t *)0x0) {
        arg1[1] = 1;
        *arg1 = 1;
      } else {
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = *(uint64_t *)(arg1 + 0xee);
        arg1[0xec] = arg1[0xec] + 1;
        *(uint64_t **)(arg1 + 0xee) = puVar2;
      }
      *(uint32_t *)((long)puVar2 + 4) = uVar1;
      *(uint32_t *)puVar2 = 1;
      puVar2[1] = *(uint64_t *)(arg1 + 0xa4);
      puVar2[2] = *(uint64_t *)(arg1 + 0xa6);
      reglist_insert(arg1, arg1 + 0xe0, 7, uVar1);
      return;
    }
    pcVar3 = "DEFI token using invalid register";
  } else {
    pcVar3 = "DEFI token must come before any instructions";
  }
  failf(arg1, "%s", pcVar3);
  return;
}

/* ======================================================================
 * state_CMP  (Ghidra `state_CMP` @ 0051ced0)
 * Signature: uint8_t state_CMP(void)
 * Calls: `failf`
 * Called by: (none)
 */
/* WARNING: Type propagation algorithm not settling */

void state_CMP(long arg1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;

  iVar4 = *(int *)(arg1 + 700) + 1;
  *(int *)(arg1 + 700) = iVar4;
  uVar3 = 1;
  if (*(byte *)(arg1 + 0xd5) != 0xff) {
    uVar3 = (uint) * (byte *)(arg1 + 0xd5);
  }
  if ((uVar3 | (uint) * (byte *)(arg1 + 0xd4) << 0x10) < 0x10004) {
    iVar1 = *(int *)(arg1 + 0x108);
    iVar2 = *(int *)(arg1 + 0xe0);
    if (iVar4 < 4) {
      iVar4 = *(int *)(arg1 + 0x118);
    } else {
      failf(arg1, "%s", "only 3 CMP instructions allowed in this shader model");
      iVar4 = *(int *)(arg1 + 0x118);
    }
    if ((iVar2 == iVar4) && (iVar1 == *(int *)(arg1 + 0x134))) {
      failf(arg1, "%s", "CMP dest can\'t match sources in this shader model");
      iVar4 = *(int *)(arg1 + 0x158);
    } else {
      iVar4 = *(int *)(arg1 + 0x158);
    }
    if ((iVar2 == iVar4) && (iVar1 == *(int *)(arg1 + 0x174))) {
      failf(arg1, "%s", "CMP dest can\'t match sources in this shader model");
      iVar4 = *(int *)(arg1 + 0x198);
    } else {
      iVar4 = *(int *)(arg1 + 0x198);
    }
    if ((iVar2 == iVar4) && (iVar1 == *(int *)(arg1 + 0x1b4))) {
      failf(arg1, "%s", "CMP dest can\'t match sources in this shader model");
    }
    *(int *)(arg1 + 0x2a4) = *(int *)(arg1 + 0x2a4) + 1;
    return;
  }
  return;
}

/* ======================================================================
 * state_BREAKC  (Ghidra `state_BREAKC` @ 0051d000)
 * Signature: uint8_t state_BREAKC(void)
 * Calls: `failf`
 * Called by: (none)
 */
void state_BREAKC(long arg1)

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
          if (*(long *)(arg1 + 0x2b0) != 0) {
            return;
          }
          failf(arg1, "%s", "BREAKC outside LOOP/ENDLOOP or REP/ENDREP");
          return;
        }
      }
      failf(arg1, "%s", "BREAKC src2 must have replicate swizzle");
      return;
    }
  }
  failf(arg1, "%s", "BREAKC src1 must have replicate swizzle");
  return;
}

/* ======================================================================
 * state_LABEL  (Ghidra `state_LABEL` @ 0051d1c0)
 * Signature: uint8_t state_LABEL(void)
 * Calls: `check_label_register_constprop_79`, `failf`, `reglist_insert`
 * Called by: (none)
 */
void state_LABEL(long arg1)

{
  if (*(int *)(arg1 + 0x2ac) != 0x1c) {
    failf(arg1, "%s", "LABEL not followed by a RET");
  }
  check_label_register_constprop_79(arg1, "LABEL");
  reglist_insert(arg1, arg1 + 0x380, 0x12, *(uint32_t *)(arg1 + 0x118));
  return;
}

/* ======================================================================
 * state_BREAKP  (Ghidra `state_BREAKP` @ 0051d210)
 * Signature: uint8_t state_BREAKP(void)
 * Calls: `failf`
 * Called by: (none)
 */
void state_BREAKP(long arg1)

{
  uint uVar1;

  if (*(int *)(arg1 + 0x134) != 0x13) {
    failf(arg1, "%s", "BREAKP argument isn\'t predicate register");
    return;
  }
  uVar1 = *(uint *)(arg1 + 0x11c);
  if ((((int)uVar1 >> 2 ^ uVar1) & 3) == 0) {
    if (((((int)uVar1 >> 2 ^ (int)uVar1 >> 4) & 3U) == 0) &&
        ((((int)uVar1 >> 6 ^ (int)uVar1 >> 4) & 3U) == 0)) {
      if (*(long *)(arg1 + 0x2b0) != 0) {
        return;
      }
      failf(arg1, "%s", "BREAKP outside LOOP/ENDLOOP or REP/ENDREP");
      return;
    }
  }
  failf(arg1, "%s", "BREAKP without replicate swizzzle");
  return;
}

/* ======================================================================
 * state_CALL  (Ghidra `state_CALL` @ 0051d2a0)
 * Signature: uint8_t state_CALL(void)
 * Calls: `check_label_register_constprop_79`, `failf`
 * Called by: (none)
 */
void state_CALL(long arg1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  uint *puVar5;
  uint uVar6;

  check_label_register_constprop_79(arg1, &DAT_005c9c06 /* R:"CALL" */);
  puVar5 = *(uint **)(arg1 + 0x378);
  bVar1 = 0 < *(int *)(arg1 + 0x2b0);
  uVar6 = (bVar1 - 1) + (uint)bVar1;
  if (puVar5 != (uint *)0x0) {
    uVar3 = *(int *)(arg1 + 0x118) << 0x10 | 0x12;
    do {
      uVar2 = puVar5[1] << 0x10 | *puVar5;
      if (uVar3 == uVar2)
        break;
      if (uVar3 < uVar2) {
        puVar5 = (uint *)0x0;
        break;
      }
      puVar5 = *(uint **)(puVar5 + 8);
    } while (puVar5 != (uint *)0x0);
  }
  if (puVar5[5] == 0) {
    puVar5[5] = uVar6;
  } else if (puVar5[5] != uVar6) {
    pcVar4 = "CALL to this label must be wrapped in LOOP/ENDLOOP";
    if (uVar6 != 1) {
      pcVar4 = "CALL to this label must not be wrapped in LOOP/ENDLOOP";
    }
    failf(arg1, "%s", pcVar4);
    return;
  }
  return;
}

/* ======================================================================
 * state_CALLNZ  (Ghidra `state_CALLNZ` @ 0051d340)
 * Signature: uint8_t state_CALLNZ(void)
 * Calls: `check_label_register_constprop_79`, `failf`
 * Called by: (none)
 */
void state_CALLNZ(long arg1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  uint *puVar5;
  uint uVar6;

  if ((*(int *)(arg1 + 0x174) != 0x13) && (*(int *)(arg1 + 0x174) != 0xe)) {
    failf(arg1, "%s", "CALLNZ argument isn\'t constbool or predicate register");
  }
  check_label_register_constprop_79(arg1, "CALLNZ");
  puVar5 = *(uint **)(arg1 + 0x378);
  bVar1 = 0 < *(int *)(arg1 + 0x2b0);
  uVar6 = (bVar1 - 1) + (uint)bVar1;
  if (puVar5 != (uint *)0x0) {
    uVar3 = *(int *)(arg1 + 0x118) << 0x10 | 0x12;
    do {
      uVar2 = puVar5[1] << 0x10 | *puVar5;
      if (uVar3 == uVar2)
        break;
      if (uVar3 < uVar2) {
        puVar5 = (uint *)0x0;
        break;
      }
      puVar5 = *(uint **)(puVar5 + 8);
    } while (puVar5 != (uint *)0x0);
  }
  if (puVar5[5] == 0) {
    puVar5[5] = uVar6;
  } else if (puVar5[5] != uVar6) {
    pcVar4 = "CALL to this label must be wrapped in LOOP/ENDLOOP";
    if (uVar6 != 1) {
      pcVar4 = "CALL to this label must not be wrapped in LOOP/ENDLOOP";
    }
    failf(arg1, "%s", pcVar4);
    return;
  }
  return;
}

/* ======================================================================
 * state_DCL  (Ghidra `state_DCL` @ 0051d520)
 * Signature: uint8_t state_DCL(void)
 * Calls: `failf`, `reglist_insert`
 * Called by: (none)
 */
void state_DCL(long arg1)

{
  int iVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  long lVar5;
  char *pcVar6;
  uint32_t uVar7;
  int iVar8;

  iVar1 = *(int *)(arg1 + 0x108);
  uVar2 = *(uint32_t *)(arg1 + 0xe0);
  uVar3 = *(uint32_t *)(arg1 + 0xe8);
  uVar4 = *(uint32_t *)(arg1 + 0x100);
  if (*(int *)(arg1 + 0x2a4) == 0) {
    if (*(int *)(arg1 + 0xd0) == 2) {
      iVar8 = *(int *)(arg1 + 0x290);
      uVar7 = *(uint32_t *)(arg1 + 0x294);
      pcVar6 = "unknown DCL usage";
      if (0xd < iVar8)
        goto LAB_0051d625;
    } else {
      if (*(int *)(arg1 + 0xd0) != 1) {
        pcVar6 = "unsupported shader type.";
      LAB_0051d625:
        failf(arg1, "%s", pcVar6);
        return;
      }
      if (iVar1 == 10) {
        uVar3 = *(uint32_t *)(arg1 + 0x290);
        lVar5 = reglist_insert(arg1, arg1 + 0x430, 10, uVar2);
        *(uint32_t *)(lVar5 + 0xc) = uVar3;
        goto LAB_0051d5e2;
      }
      iVar8 = *(int *)(arg1 + 0x290);
      uVar7 = *(uint32_t *)(arg1 + 0x294);
    }
    lVar5 = reglist_insert(arg1, arg1 + 0x400, iVar1, uVar2);
    *(int *)(lVar5 + 8) = iVar8;
    *(uint32_t *)(lVar5 + 0x10) = uVar3;
    *(uint32_t *)(lVar5 + 0x14) = uVar4;
    *(uint32_t *)(lVar5 + 0xc) = uVar7;
    if ((iVar8 == 4) && (iVar1 == 6)) {
      *(uint32_t *)(arg1 + 0x488) = 1;
    }
  } else {
    failf(arg1, "%s", "DCL token must come before any instructions");
  }
LAB_0051d5e2:
  reglist_insert(arg1, arg1 + 0x380, iVar1, uVar2);
  return;
}

/* ======================================================================
 * output_comment_bytes_part_12  (Ghidra `output_comment_bytes.part.12` @ 0052bf10)
 * Signature: uint8_t output_comment_bytes.part.12(void)
 * Calls: `buffer_append`, `memcpy`, `preprocessor_sourcepos`
 * Called by: `MOJOSHADER_assemble`
 */
void output_comment_bytes_part_12(int *arg1, uint *arg2, ulong arg3)

{
  uint *puVar1;
  ulong uVar2;
  uint64_t local_68;
  ulong local_60;
  uint local_58[4];
  uint local_48[3];
  uint local_3c[3];

  local_48[0] = ((int)(arg3 >> 2) + (uint)((arg3 & 3) != 0)) * 0x10000 | 0xfffe;
  if (*arg1 == 0) {
    buffer_append(*(uint64_t *)(arg1 + 0x38), local_48, 4);
    local_3c[0] = 0;
    local_68 = preprocessor_sourcepos(*(uint64_t *)(arg1 + 0xe), local_3c);
    local_60 = (ulong)local_3c[0];
    buffer_append(*(uint64_t *)(arg1 + 0x3a), &local_68, 0x10);
  }
  puVar1 = arg2;
  uVar2 = arg3;
  if (3 < arg3) {
    do {
      local_3c[0] = *puVar1;
      if (*arg1 == 0) {
        buffer_append(*(uint64_t *)(arg1 + 0x38), local_3c, 4);
        local_48[0] = 0;
        local_68 = preprocessor_sourcepos(*(uint64_t *)(arg1 + 0xe), local_48);
        local_60 = (ulong)local_48[0];
        buffer_append(*(uint64_t *)(arg1 + 0x3a), &local_68, 0x10);
      }
      uVar2 = uVar2 - 4;
      puVar1 = puVar1 + 1;
    } while (3 < uVar2);
    arg2 = (uint *)((long)arg2 + (arg3 - 4 & 0xfffffffffffffffc) + 4);
    arg3 = (ulong)((uint)arg3 & 3);
  }
  if (arg3 != 0) {
    local_58[0] = 0;
    memcpy(local_58, arg2, arg3);
    local_48[0] = local_58[0];
    if (*arg1 == 0) {
      buffer_append(*(uint64_t *)(arg1 + 0x38), local_48, 4);
      local_3c[0] = 0;
      local_68 = preprocessor_sourcepos(*(uint64_t *)(arg1 + 0xe), local_3c);
      local_60 = (ulong)local_3c[0];
      buffer_append(*(uint64_t *)(arg1 + 0x3a), &local_68, 0x10);
      return;
    }
  }
  return;
}

/* ======================================================================
 * program_unref_part_10  (Ghidra `program_unref.part.10` @ 00535fd0)
 * Signature: uint8_t program_unref.part.10(void)
 * Calls: `MOJOSHADER_freeParseData`
 * Called by: `MOJOSHADER_glBindProgram`, `MOJOSHADER_glBindShaders`, `MOJOSHADER_glDeleteProgram`, `nuke_shaders`
 */
void program_unref_part_10(long *arg1)

{
  uint64_t *puVar1;

  (**(code **)(ctx + 0x512b0))((int)arg1[2]);
  puVar1 = (uint64_t *)*arg1;
  if (puVar1 != (uint64_t *)0x0) {
    if (*(uint *)((long)puVar1 + 0xc) < 2) {
      (**(code **)(ctx + 0x512a8))(*(uint32_t *)(puVar1 + 1));
      MOJOSHADER_freeParseData(*puVar1);
      (**(code **)(ctx + 8))(puVar1, *(uint64_t *)(ctx + 0x10));
    } else {
      *(uint *)((long)puVar1 + 0xc) = *(uint *)((long)puVar1 + 0xc) - 1;
    }
  }
  puVar1 = (uint64_t *)arg1[1];
  if (puVar1 != (uint64_t *)0x0) {
    if (*(uint *)((long)puVar1 + 0xc) < 2) {
      (**(code **)(ctx + 0x512a8))(*(uint32_t *)(puVar1 + 1));
      MOJOSHADER_freeParseData(*puVar1);
      (**(code **)(ctx + 8))(puVar1, *(uint64_t *)(ctx + 0x10));
    } else {
      *(uint *)((long)puVar1 + 0xc) = *(uint *)((long)puVar1 + 0xc) - 1;
    }
  }
  if (arg1[0x14] != 0) {
    (**(code **)(ctx + 8))(arg1[0x14], *(uint64_t *)(ctx + 0x10));
  }
  if (arg1[0x16] != 0) {
    (**(code **)(ctx + 8))(arg1[0x16], *(uint64_t *)(ctx + 0x10));
  }
  if (arg1[8] != 0) {
    (**(code **)(ctx + 8))(arg1[8], *(uint64_t *)(ctx + 0x10));
  }
  if (arg1[10] != 0) {
    (**(code **)(ctx + 8))(arg1[10], *(uint64_t *)(ctx + 0x10));
  }
  if (arg1[0xc] != 0) {
    (**(code **)(ctx + 8))(arg1[0xc], *(uint64_t *)(ctx + 0x10));
  }
  if (arg1[0xe] != 0) {
    (**(code **)(ctx + 8))(arg1[0xe], *(uint64_t *)(ctx + 0x10));
  }
  if (arg1[0x10] != 0) {
    (**(code **)(ctx + 8))(arg1[0x10], *(uint64_t *)(ctx + 0x10));
  }
  if (arg1[0x12] != 0) {
    (**(code **)(ctx + 8))(arg1[0x12], *(uint64_t *)(ctx + 0x10));
  }
  if (arg1[4] != 0) {
    (**(code **)(ctx + 8))(arg1[4], *(uint64_t *)(ctx + 0x10));
  }
  if (arg1[6] != 0) {
    (**(code **)(ctx + 8))(arg1[6], *(uint64_t *)(ctx + 0x10));
  }
  /* WARNING: Could not recover jumptable at 0x00536128. Too many branches */
  /* WARNING: Treating indirect jump as call */
  (**(code **)(ctx + 8))(arg1, *(uint64_t *)(ctx + 0x10));
  return;
}

/* ======================================================================
 * push_source  (Ghidra `push_source` @ 005394c0)
 * Signature: uint8_t push_source(void)
 * Calls: `stringcache`
 * Called by: `MOJOSHADER_preprocess`, `handle_pp_identifier`, `handle_pp_include`, `preprocessor_start`
 */
uint64_t push_source(long arg1, long arg2, long arg3, uint32_t arg4, uint32_t arg5, long arg6)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  bool bVar6;
  byte bVar7;

  bVar7 = 0;
  plVar2 = *(long **)(arg1 + 0x128);
  if (plVar2 == (long *)0x0) {
    plVar2 = (long *)(**(code **)(arg1 + 0x960))(0x68, *(uint64_t *)(arg1 + 0x970));
    if (plVar2 == (long *)0x0) {
      *(uint32_t *)(arg1 + 4) = 1;
      return 0;
    }
  } else {
    *(long *)(arg1 + 0x128) = plVar2[0xc];
  }
  bVar6 = ((ulong)plVar2 & 1) != 0;
  uVar4 = 0x68;
  plVar5 = plVar2;
  if (bVar6) {
    *(uint8_t *)plVar2 = 0;
    plVar5 = (long *)((long)plVar2 + 1);
    uVar4 = 0x67;
  }
  if (((ulong)plVar5 & 2) != 0) {
    *(uint16_t *)plVar5 = 0;
    uVar4 = (ulong)((int)uVar4 - 2);
    plVar5 = (long *)((long)plVar5 + 2);
  }
  if (((ulong)plVar5 & 4) != 0) {
    *(uint32_t *)plVar5 = 0;
    uVar4 = (ulong)((int)uVar4 - 4);
    plVar5 = (long *)((long)plVar5 + 4);
  }
  for (uVar3 = uVar4 >> 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *plVar5 = 0;
    plVar5 = plVar5 + (ulong)bVar7 * -2 + 1;
  }
  if ((uVar4 & 4) != 0) {
    *(uint32_t *)plVar5 = 0;
    plVar5 = (long *)((long)plVar5 + 4);
  }
  if ((uVar4 & 2) != 0) {
    *(uint16_t *)plVar5 = 0;
    plVar5 = (long *)((long)plVar5 + 2);
  }
  if (bVar6) {
    *(uint8_t *)plVar5 = 0;
  }
  if (arg2 != 0) {
    lVar1 = stringcache(*(uint64_t *)(arg1 + 0x948), arg2);
    *plVar2 = lVar1;
    if (lVar1 == 0) {
      plVar2[0xc] = *(long *)(arg1 + 0x128);
      *(long **)(arg1 + 0x128) = plVar2;
      return 0;
    }
  }
  plVar2[0xb] = arg6;
  plVar2[1] = arg3;
  plVar2[2] = arg3;
  plVar2[3] = arg3;
  *(uint32_t *)((long)plVar2 + 0x24) = 10;
  *(uint32_t *)(plVar2 + 8) = arg4;
  *(uint32_t *)((long)plVar2 + 0x44) = arg4;
  *(uint32_t *)(plVar2 + 9) = arg5;
  plVar2[0xc] = *(long *)(arg1 + 0x120);
  *(uint32_t *)((long)plVar2 + 0x3c) = *(uint32_t *)(arg1 + 0x10c);
  *(long **)(arg1 + 0x120) = plVar2;
  return 1;
}

/* ======================================================================
 * reduce_pp_expression  (Ghidra `reduce_pp_expression` @ 0053ad60)
 * Signature: uint8_t reduce_pp_expression(void)
 * Calls: `failf`, `find_define_by_token`, `handle_pp_identifier`, `memcmp`, `preprocessor_lexer`, `token_to_int_isra_7`
 * Called by: `preprocessor_nexttoken`
 */
/* WARNING: Type propagation algorithm not settling */

ulong reduce_pp_expression(long arg1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  char *pcVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  uint *puVar14;
  uint uVar15;
  bool bVar16;
  bool bVar17;
  uint local_938[254];
  ulong auStack_540[128];
  uint auStack_13c[67];

  lVar10 = 0;
  lVar2 = *(long *)(arg1 + 0x120);
  lVar12 = 0;
  lVar8 = lVar2;
  uVar15 = 0x100;
LAB_0053ad90:
  if (*(int *)(lVar8 + 0x28) == 0)
    goto LAB_0053ae70;
LAB_0053ad9c:
  uVar3 = *(uint *)(lVar8 + 0x24);
  *(uint32_t *)(lVar8 + 0x28) = 0;
  if (uVar3 == 0x7e)
    goto LAB_0053ae88;
LAB_0053adb1:
  if (uVar3 == 0x21)
    goto LAB_0053ae88;
  if (uVar3 == 0x2d) {
    bVar16 = uVar15 == 0x102;
    bVar17 = !bVar16;
    uVar3 = 0x2d;
    if (bVar16)
      goto LAB_0053addf;
    uVar3 = 299;
    goto LAB_0053addf;
  }
  bVar17 = false;
  bVar16 = true;
  if (uVar3 == 0x2b) {
    bVar16 = uVar15 == 0x102;
    bVar17 = !bVar16;
    uVar3 = 0x2b;
    if (bVar16)
      goto LAB_0053addf;
    uVar3 = 300;
    goto LAB_0053addf;
  }
  do {
    if (uVar3 == 0x101) {
      iVar4 = handle_pp_identifier();
    joined_r0x0053aea5:
      if (iVar4 != 0) {
        lVar8 = *(long *)(arg1 + 0x120);
        goto LAB_0053ad90;
      }
      if ((*(int *)(lVar8 + 0x20) != 7) ||
          (iVar4 = memcmp(*(void **)(lVar8 + 0x18), "defined", 7), iVar4 != 0)) {
        local_938[lVar10 * 2] = 0;
        local_938[lVar10 * 2 + 1] = 0;
        uVar15 = 0x102;
        lVar10 = lVar10 + 1;
        lVar8 = *(long *)(arg1 + 0x120);
        goto LAB_0053ad90;
      }
      if (*(int *)(lVar8 + 0x28) == 0) {
        iVar4 = preprocessor_lexer(lVar8);
      } else {
        iVar4 = *(int *)(lVar8 + 0x24);
        *(uint32_t *)(lVar8 + 0x28) = 0;
      }
      bVar17 = iVar4 == 0x28;
      if (bVar17) {
        if (*(int *)(lVar8 + 0x28) == 0) {
          iVar4 = preprocessor_lexer(lVar8);
        } else {
          *(uint32_t *)(lVar8 + 0x28) = 0;
          iVar4 = *(int *)(lVar8 + 0x24);
        }
      }
      if (iVar4 != 0x101) {
        pcVar6 = "operator \'defined\' requires an identifier";
        goto LAB_0053b049;
      }
      lVar5 = find_define_by_token();
      if (bVar17) {
        if (*(int *)(lVar8 + 0x28) == 0) {
          iVar4 = preprocessor_lexer();
        } else {
          iVar4 = *(int *)(lVar8 + 0x24);
          *(uint32_t *)(lVar8 + 0x28) = 0;
        }
        if (iVar4 != 0x29)
          goto LAB_0053b044;
      }
      local_938[lVar10 * 2] = 0;
      lVar8 = *(long *)(arg1 + 0x120);
      local_938[lVar10 * 2 + 1] = (uint)(lVar5 != 0);
      lVar10 = lVar10 + 1;
      goto LAB_0053ad90;
    }
  LAB_0053addf:
    *(uint32_t *)(arg1 + 0x108) = 0;
    if (uVar3 == 0x29) {
      if (lVar12 == 0)
        goto LAB_0053b044;
      uVar15 = auStack_13c[lVar12];
      break;
    }
    if (0x29 < uVar3) {
      if (uVar3 == 0x102) {
        local_938[lVar10 * 2] = 0;
        uVar15 = 0x102;
        uVar3 = token_to_int_isra_7();
        lVar8 = *(long *)(arg1 + 0x120);
        local_938[lVar10 * 2 + 1] = uVar3;
        lVar10 = lVar10 + 1;
        goto LAB_0053ad90;
      }
      if (uVar3 != 0x11b) {
        if (uVar3 == 0x101) {
          iVar4 = handle_pp_identifier();
          goto joined_r0x0053aea5;
        }
        goto LAB_0053ae08;
      }
      if (lVar2 != lVar8) {
        lVar5 = *(long *)(arg1 + 0x120);
        lVar8 = 0;
        if (lVar5 != 0) {
          if (*(code **)(lVar5 + 0x58) != (code *)0x0) {
            (**(code **)(lVar5 + 0x58))(*(uint64_t *)(lVar5 + 8), *(uint64_t *)(arg1 + 0x960),
                                        *(uint64_t *)(arg1 + 0x968), *(uint64_t *)(arg1 + 0x970));
          }
          if (*(long *)(lVar5 + 0x50) != 0) {
            lVar8 = *(long *)(lVar5 + 0x50);
            lVar11 = *(long *)(arg1 + 0x118);
            do {
              lVar7 = lVar8;
              lVar8 = *(long *)(lVar7 + 0x10);
              *(long *)(lVar7 + 0x10) = lVar11;
              *(long *)(arg1 + 0x118) = lVar7;
              lVar11 = lVar7;
            } while (lVar8 != 0);
          }
          *(uint64_t *)(arg1 + 0x120) = *(uint64_t *)(lVar5 + 0x60);
          *(uint64_t *)(lVar5 + 0x60) = *(uint64_t *)(arg1 + 0x128);
          *(long *)(arg1 + 0x128) = lVar5;
          lVar8 = *(long *)(arg1 + 0x120);
        }
        goto LAB_0053ad90;
      }
    LAB_0053b1ea:
      if (lVar12 == 0)
        goto LAB_0053b238;
      uVar15 = auStack_13c[lVar12];
      goto joined_r0x0053b207;
    }
    if (uVar3 == 10)
      goto LAB_0053b1ea;
    if (uVar3 != 0x28) {
    LAB_0053ae08:
      lVar5 = 0;
      goto LAB_0053ae10;
    }
    lVar8 = *(long *)(arg1 + 0x120);
    auStack_13c[lVar12 + 1] = 0x28;
    lVar12 = lVar12 + 1;
    uVar15 = 0x28;
    if (*(int *)(lVar8 + 0x28) != 0)
      goto LAB_0053ad9c;
  LAB_0053ae70:
    uVar3 = preprocessor_lexer();
    if (uVar3 != 0x7e)
      goto LAB_0053adb1;
  LAB_0053ae88:
    bVar16 = false;
    bVar17 = true;
  } while (true);
joined_r0x0053b018:
  lVar12 = lVar12 + -1;
  if (uVar15 == 0x28)
    goto LAB_0053b0a7;
  local_938[lVar10 * 2] = 1;
  local_938[lVar10 * 2 + 1] = uVar15;
  if (lVar12 == 0)
    goto LAB_0053b044;
  lVar10 = lVar10 + 1;
  uVar15 = auStack_13c[lVar12];
  goto joined_r0x0053b018;
LAB_0053b0a7:
  lVar8 = *(long *)(arg1 + 0x120);
  uVar15 = 0x29;
  goto LAB_0053ad90;
joined_r0x0053b207:
  lVar12 = lVar12 + -1;
  if (uVar15 == 0x28)
    goto LAB_0053b044;
  local_938[lVar10 * 2] = 1;
  local_938[lVar10 * 2 + 1] = uVar15;
  lVar10 = lVar10 + 1;
  if (lVar12 == 0)
    goto LAB_0053b238;
  uVar15 = auStack_13c[lVar12];
  goto joined_r0x0053b207;
LAB_0053b044:
  pcVar6 = "Unmatched \')\'";
  goto LAB_0053b049;
LAB_0053b238:
  puVar14 = local_938;
  iVar4 = 0;
  uVar13 = 0;
LAB_0053b257:
  if ((int)lVar10 - iVar4 < 1)
    goto LAB_0053b65a;
  if (*puVar14 == 0) {
    auStack_540[uVar13 + 1] = (long)(int)puVar14[1];
    uVar9 = uVar13 + 1;
  } else {
    uVar15 = puVar14[1];
    if (uVar15 == 0x7c) {
      if (uVar13 < 2)
        goto LAB_0053b2a2;
      uVar9 = uVar13 - 1;
      auStack_540[uVar13 + 0xffffffffffffffff] =
          auStack_540[uVar13 + 0xffffffffffffffff] | auStack_540[uVar13];
    } else {
      uVar9 = uVar13;
      if ((int)uVar15 < 0x7d) {
        if (uVar15 == 0x2b) {
          if (uVar13 < 2)
            goto LAB_0053b2a2;
          auStack_540[uVar13 + 0xffffffffffffffff] =
              auStack_540[uVar13 + 0xffffffffffffffff] + auStack_540[uVar13];
          uVar9 = uVar13 - 1;
        } else if ((int)uVar15 < 0x2c) {
          if (uVar15 == 0x25) {
            if (uVar13 < 2)
              goto LAB_0053b2a2;
            auStack_540[uVar13 + 0xffffffffffffffff] =
                (long)auStack_540[uVar13 + 0xffffffffffffffff] % (long)auStack_540[uVar13];
            uVar9 = uVar13 - 1;
          } else if ((int)uVar15 < 0x26) {
            if ((uVar15 != 0x21) || (uVar13 == 0))
              goto LAB_0053b2a2;
            auStack_540[uVar13] = (ulong)(auStack_540[uVar13] == 0);
          } else if (uVar15 == 0x26) {
            if (uVar13 < 2)
              goto LAB_0053b2a2;
            auStack_540[uVar13 + 0xffffffffffffffff] =
                auStack_540[uVar13 + 0xffffffffffffffff] & auStack_540[uVar13];
            uVar9 = uVar13 - 1;
          } else {
            if ((uVar15 != 0x2a) || (uVar13 < 2))
              goto LAB_0053b2a2;
            auStack_540[uVar13 + 0xffffffffffffffff] =
                auStack_540[uVar13 + 0xffffffffffffffff] * auStack_540[uVar13];
            uVar9 = uVar13 - 1;
          }
        } else if (uVar15 == 0x3c) {
          if (uVar13 < 2)
            goto LAB_0053b2a2;
          auStack_540[uVar13 + 0xffffffffffffffff] =
              (ulong)((long)auStack_540[uVar13 + 0xffffffffffffffff] < (long)auStack_540[uVar13]);
          uVar9 = uVar13 - 1;
        } else if ((int)uVar15 < 0x3d) {
          if (uVar15 == 0x2d) {
            if (uVar13 < 2)
              goto LAB_0053b2a2;
            auStack_540[uVar13 + 0xffffffffffffffff] =
                auStack_540[uVar13 + 0xffffffffffffffff] - auStack_540[uVar13];
            uVar9 = uVar13 - 1;
          } else {
            if ((uVar15 != 0x2f) || (uVar13 < 2))
              goto LAB_0053b2a2;
            auStack_540[uVar13 + 0xffffffffffffffff] =
                (long)auStack_540[uVar13 + 0xffffffffffffffff] / (long)auStack_540[uVar13];
            uVar9 = uVar13 - 1;
          }
        } else if (uVar15 == 0x3e) {
          if (uVar13 < 2)
            goto LAB_0053b2a2;
          auStack_540[uVar13 + 0xffffffffffffffff] =
              (ulong)((long)auStack_540[uVar13] < (long)auStack_540[uVar13 + 0xffffffffffffffff]);
          uVar9 = uVar13 - 1;
        } else {
          if ((uVar15 != 0x5e) || (uVar13 < 2))
            goto LAB_0053b2a2;
          auStack_540[uVar13 + 0xffffffffffffffff] =
              auStack_540[uVar13 + 0xffffffffffffffff] ^ auStack_540[uVar13];
          uVar9 = uVar13 - 1;
        }
      } else if (uVar15 == 0x115) {
        if (uVar13 < 2)
          goto LAB_0053b2a2;
        uVar9 = uVar13 - 1;
        auStack_540[uVar13 + 0xffffffffffffffff] =
            (ulong)((long)auStack_540[uVar13 + 0xffffffffffffffff] <= (long)auStack_540[uVar13]);
      } else {
        if ((int)uVar15 < 0x116) {
          if (uVar15 == 0x112) {
            if (uVar13 < 2)
              goto LAB_0053b2a2;
            auStack_540[uVar13 + 0xffffffffffffffff] = auStack_540[uVar13 + 0xffffffffffffffff]
                                                       << ((byte)auStack_540[uVar13] & 0x3f);
            uVar9 = uVar13 - 1;
            goto LAB_0053b253;
          }
          if ((int)uVar15 < 0x113) {
            if (uVar15 == 0x7e) {
              if (uVar13 == 0)
                goto LAB_0053b2a2;
              auStack_540[uVar13] = ~auStack_540[uVar13];
            } else {
              if ((uVar15 != 0x111) || (uVar13 < 2))
                goto LAB_0053b2a2;
              auStack_540[uVar13 + 0xffffffffffffffff] =
                  (long)auStack_540[uVar13 + 0xffffffffffffffff] >>
                  ((byte)auStack_540[uVar13] & 0x3f);
              uVar9 = uVar13 - 1;
            }
            goto LAB_0053b253;
          }
          if (uVar15 != 0x113) {
            if ((uVar15 == 0x114) && (1 < uVar13)) {
              uVar9 = 1;
              if (auStack_540[uVar13 + 0xffffffffffffffff] == 0) {
                uVar9 = (ulong)(auStack_540[uVar13] != 0);
              }
              goto LAB_0053b5ae;
            }
            goto LAB_0053b2a2;
          }
          if (uVar13 < 2)
            goto LAB_0053b2a2;
          if ((auStack_540[uVar13 + 0xffffffffffffffff] == 0) ||
              (uVar9 = 1, auStack_540[uVar13] == 0)) {
            uVar9 = 0;
          }
        } else {
          if (uVar15 != 0x118) {
            if ((int)uVar15 < 0x119) {
              if (uVar15 == 0x116) {
                if (uVar13 < 2)
                  goto LAB_0053b2a2;
                auStack_540[uVar13 + 0xffffffffffffffff] =
                    (ulong)((long)auStack_540[uVar13] <=
                            (long)auStack_540[uVar13 + 0xffffffffffffffff]);
                uVar9 = uVar13 - 1;
              } else {
                if ((uVar15 != 0x117) || (uVar13 < 2))
                  goto LAB_0053b2a2;
                auStack_540[uVar13 + 0xffffffffffffffff] =
                    (ulong)(auStack_540[uVar13 + 0xffffffffffffffff] == auStack_540[uVar13]);
                uVar9 = uVar13 - 1;
              }
            } else if (uVar15 == 299) {
              if (uVar13 == 0)
                goto LAB_0053b2a2;
              auStack_540[uVar13] = -auStack_540[uVar13];
            } else if ((uVar15 != 300) || (uVar13 == 0))
              goto LAB_0053b2a2;
            goto LAB_0053b253;
          }
          if (uVar13 < 2)
            goto LAB_0053b2a2;
          uVar9 = (ulong)(auStack_540[uVar13 + 0xffffffffffffffff] != auStack_540[uVar13]);
        }
      LAB_0053b5ae:
        auStack_540[uVar13 + 0xffffffffffffffff] = uVar9;
        uVar9 = uVar13 - 1;
      }
    }
  }
LAB_0053b253:
  puVar14 = puVar14 + 2;
  iVar4 = iVar4 + 1;
  uVar13 = uVar9;
  goto LAB_0053b257;
LAB_0053ae10:
  if (*(uint *)(ops_5934 + lVar5 * 8 + 4) == uVar3)
    goto LAB_0053b0ba;
  lVar5 = lVar5 + 1;
  if (lVar5 == 0x16)
    goto LAB_0053ae27;
  goto LAB_0053ae10;
LAB_0053b0ba:
  iVar4 = *(int *)(ops_5934 + lVar5 * 8);
  if (iVar4 < 0) {
  LAB_0053ae27:
    *(uint32_t *)(lVar8 + 0x28) = 1;
    pcVar6 = "Invalid expression";
    goto LAB_0053b049;
  }
  if (lVar12 == 0) {
    lVar5 = 1;
  } else {
    do {
      uVar15 = auStack_13c[lVar12];
      lVar8 = 0;
      while (uVar15 != *(uint *)(ops_5934 + lVar8 * 8 + 4)) {
        lVar8 = lVar8 + 1;
        if (lVar8 == 0x16)
          goto LAB_0053b103;
      }
      iVar1 = *(int *)(ops_5934 + lVar8 * 8);
      if ((iVar1 < 0) || (((!bVar16 || (iVar1 < iVar4)) && ((!bVar17 || (iVar1 <= iVar4)))))) {
      LAB_0053b103:
        lVar5 = lVar12 + 1;
        goto LAB_0053b107;
      }
      local_938[lVar10 * 2] = 1;
      local_938[lVar10 * 2 + 1] = uVar15;
      lVar10 = lVar10 + 1;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    lVar5 = 1;
  }
LAB_0053b107:
  auStack_13c[lVar12 + 1] = uVar3;
  lVar8 = *(long *)(arg1 + 0x120);
  lVar12 = lVar5;
  uVar15 = uVar3;
  goto LAB_0053ad90;
LAB_0053b65a:
  if (uVar13 == 1) {
    return (ulong)(auStack_540[1] != 0);
  }
LAB_0053b2a2:
  pcVar6 = "Invalid expression";
LAB_0053b049:
  failf(arg1, "%s", pcVar6);
  return 0xffffffff;
}

/* ======================================================================
 * pqdownheap  (Ghidra `pqdownheap` @ 0056d5c0)
 * Signature: uint8_t pqdownheap(void)
 * Calls: (none)
 * Called by: `build_tree`
 */
void pqdownheap(long arg1, long arg2, int arg3)

{
  ushort *puVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ushort uVar8;
  long lVar9;
  bool bVar10;

  iVar3 = *(int *)(arg1 + 0x14a4);
  lVar9 = (long)arg3;
  arg3 = arg3 * 2;
  iVar4 = *(int *)(arg1 + 0xbb0 + lVar9 * 4);
  if (arg3 <= iVar3) {
    puVar1 = (ushort *)(arg2 + (long)iVar4 * 4);
    do {
      if (arg3 < iVar3) {
        iVar6 = arg3 + 1;
        iVar5 = *(int *)(arg1 + 0xbb0 + (long)arg3 * 4);
        iVar7 = *(int *)(arg1 + 0xbb0 + (long)iVar6 * 4);
        uVar2 = *(ushort *)(arg2 + (long)iVar5 * 4);
        uVar8 = *(ushort *)(arg2 + (long)iVar7 * 4);
        if (uVar8 < uVar2)
          goto LAB_0056d604;
        if (uVar8 == uVar2) {
          if (*(byte *)(arg1 + 0x14ac + (long)iVar5) < *(byte *)(arg1 + 0x14ac + (long)iVar7)) {
            iVar7 = iVar5;
            iVar6 = arg3;
          }
          goto LAB_0056d604;
        }
        uVar8 = *puVar1;
        bVar10 = uVar8 == uVar2;
        iVar7 = iVar5;
        iVar6 = arg3;
        if (uVar8 < uVar2)
          break;
      } else {
        iVar7 = *(int *)(arg1 + 0xbb0 + (long)arg3 * 4);
        uVar8 = *(ushort *)(arg2 + (long)iVar7 * 4);
        iVar6 = arg3;
      LAB_0056d604:
        uVar2 = *puVar1;
        bVar10 = uVar2 == uVar8;
        if (uVar2 < uVar8)
          break;
      }
      if ((bVar10) &&
          (*(byte *)(arg1 + 0x14ac + (long)iVar4) <= *(byte *)(arg1 + 0x14ac + (long)iVar7)))
        break;
      arg3 = iVar6 * 2;
      *(int *)(arg1 + 0xbb0 + lVar9 * 4) = iVar7;
      lVar9 = (long)iVar6;
    } while (arg3 <= iVar3);
  }
  *(int *)(arg1 + 0xbb0 + lVar9 * 4) = iVar4;
  return;
}

/* ======================================================================
 * scan_tree  (Ghidra `scan_tree` @ 0056dd80)
 * Signature: uint8_t scan_tree(void)
 * Calls: (none)
 * Called by: `tr_flush_block`
 */
void scan_tree(long arg1, long arg2, int arg3)

{
  short *psVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  int iVar9;

  uVar2 = *(ushort *)(arg2 + 2);
  *(uint16_t *)(arg2 + 6 + (long)arg3 * 4) = 0xffff;
  uVar5 = 0xffffffff;
  iVar9 = 4 - (uint)(uVar2 == 0);
  lVar6 = 0;
  iVar3 = 0;
  iVar8 = (-(uint)(uVar2 == 0) & 0x83) + 7;
  uVar4 = (uint)uVar2;
  if (arg3 < 0) {
    return;
  }
  do {
    iVar3 = iVar3 + 1;
    uVar2 = *(ushort *)(arg2 + 6 + lVar6 * 4);
    uVar7 = (uint)uVar2;
    if ((iVar8 <= iVar3) || (uVar4 != uVar7)) {
      if (iVar3 < iVar9) {
        psVar1 = (short *)(arg1 + 0xaac + (long)(int)uVar4 * 4);
        *psVar1 = *psVar1 + (short)iVar3;
      LAB_0056ddcc:
        if (uVar7 != 0) {
        LAB_0056ddd1:
          if (uVar4 == uVar7) {
            iVar9 = 3;
            iVar8 = 6;
            iVar3 = 0;
            uVar5 = uVar7;
          } else {
            iVar9 = 4;
            iVar8 = 7;
            iVar3 = 0;
            uVar5 = uVar4;
          }
          goto joined_r0x0056ddf1;
        }
      } else {
        if (uVar4 == 0) {
          if (iVar3 < 0xb) {
            *(short *)(arg1 + 0xaf0) = *(short *)(arg1 + 0xaf0) + 1;
          } else {
            *(short *)(arg1 + 0xaf4) = *(short *)(arg1 + 0xaf4) + 1;
          }
          goto LAB_0056ddcc;
        }
        if (uVar5 != uVar4) {
          psVar1 = (short *)(arg1 + 0xaac + (long)(int)uVar4 * 4);
          *psVar1 = *psVar1 + 1;
        }
        *(short *)(arg1 + 0xaec) = *(short *)(arg1 + 0xaec) + 1;
        if (uVar2 != 0)
          goto LAB_0056ddd1;
      }
      iVar3 = 0;
      iVar9 = 3;
      iVar8 = 0x8a;
      uVar5 = uVar4;
    }
  joined_r0x0056ddf1:
    if (arg3 < (int)lVar6 + 1) {
      return;
    }
    lVar6 = lVar6 + 1;
    uVar4 = uVar7;
  } while (true);
}

/* ======================================================================
 * send_tree  (Ghidra `send_tree` @ 0056de90)
 * Signature: uint8_t send_tree(void)
 * Calls: (none)
 * Called by: `tr_flush_block`
 */
void send_tree(long arg1, long arg2, int arg3)

{
  long lVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  ushort uVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  int iVar10;
  uint uVar11;
  ushort uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;

  uVar2 = *(ushort *)(arg2 + 2);
  iVar13 = 4 - (uint)(uVar2 == 0);
  iVar7 = (-(uint)(uVar2 == 0) & 0x83) + 7;
  if (arg3 < 0) {
    return;
  }
  lVar9 = 0;
  iVar10 = 0;
  uVar14 = 0xffffffff;
  uVar8 = (uint)uVar2;
  do {
    iVar4 = iVar10 + 1;
    uVar15 = (uint) * (ushort *)(arg2 + 6 + lVar9 * 4);
    if ((iVar7 <= iVar4) || (uVar8 != uVar15)) {
      if (iVar4 < iVar13) {
        iVar13 = *(int *)(arg1 + 0x1724);
        uVar14 = (uint) * (ushort *)(arg1 + 0x1720);
        do {
          while (true) {
            lVar1 = (long)(int)uVar8 + 0x2a8;
            uVar11 = (uint) * (ushort *)(arg1 + 0xe + lVar1 * 4);
            bVar5 = (byte)iVar13;
            if ((int)(0x10 - uVar11) < iVar13)
              break;
            iVar13 = iVar13 + uVar11;
            uVar14 = uVar14 | (uint) * (ushort *)(arg1 + 0xc + lVar1 * 4) << (bVar5 & 0x1f);
            iVar4 = iVar4 + -1;
            *(int *)(arg1 + 0x1724) = iVar13;
            *(short *)(arg1 + 0x1720) = (short)uVar14;
            if (iVar4 == 0)
              goto joined_r0x0056e182;
          }
          uVar2 = *(ushort *)(arg1 + 0xc + lVar1 * 4);
          uVar3 = *(uint *)(arg1 + 0x28);
          uVar14 = uVar14 | (uint)uVar2 << (bVar5 & 0x1f);
          *(short *)(arg1 + 0x1720) = (short)uVar14;
          *(char *)(*(long *)(arg1 + 0x10) + (ulong)uVar3) = (char)uVar14;
          *(uint8_t *)(*(long *)(arg1 + 0x10) + (ulong)(uVar3 + 1)) = *(uint8_t *)(arg1 + 0x1721);
          *(uint *)(arg1 + 0x28) = uVar3 + 2;
          uVar14 = (int)(uint)uVar2 >> (0x10U - (char)*(int *)(arg1 + 0x1724) & 0x1f);
          iVar13 = (uVar11 - 0x10) + *(int *)(arg1 + 0x1724);
          iVar4 = iVar4 + -1;
          *(short *)(arg1 + 0x1720) = (short)uVar14;
          *(int *)(arg1 + 0x1724) = iVar13;
        } while (iVar4 != 0);
      } else if (uVar8 == 0) {
        if (iVar4 < 0xb) {
          uVar2 = *(ushort *)(arg1 + 0xaf2);
          iVar13 = *(int *)(arg1 + 0x1724);
          uVar12 = *(ushort *)(arg1 + 0xaf0);
          if ((int)(0x10 - (uint)uVar2) < iVar13) {
            uVar14 = *(uint *)(arg1 + 0x28);
            uVar6 = uVar12 << ((byte)iVar13 & 0x1f) | *(ushort *)(arg1 + 0x1720);
            *(ushort *)(arg1 + 0x1720) = uVar6;
            *(char *)(*(long *)(arg1 + 0x10) + (ulong)uVar14) = (char)uVar6;
            *(uint8_t *)(*(long *)(arg1 + 0x10) + (ulong)(uVar14 + 1)) =
                *(uint8_t *)(arg1 + 0x1721);
            *(uint *)(arg1 + 0x28) = uVar14 + 2;
            uVar14 = (int)(uint)uVar12 >> (0x10U - (char)*(int *)(arg1 + 0x1724) & 0x1f);
            uVar12 = (ushort)uVar14;
            *(ushort *)(arg1 + 0x1720) = uVar12;
            iVar13 = (uVar2 - 0x10) + *(int *)(arg1 + 0x1724);
            *(int *)(arg1 + 0x1724) = iVar13;
          } else {
            uVar12 = uVar12 << ((byte)iVar13 & 0x1f) | *(ushort *)(arg1 + 0x1720);
            uVar14 = (uint)uVar12;
            iVar13 = iVar13 + (uint)uVar2;
            *(int *)(arg1 + 0x1724) = iVar13;
            *(ushort *)(arg1 + 0x1720) = uVar12;
          }
          if (iVar13 < 0xe) {
            *(int *)(arg1 + 0x1724) = iVar13 + 3;
            *(ushort *)(arg1 + 0x1720) = (ushort)(iVar10 + -2 << ((byte)iVar13 & 0x1f)) | uVar12;
          } else {
            uVar11 = *(uint *)(arg1 + 0x28);
            uVar14 = uVar14 | iVar10 - 2U << ((byte)iVar13 & 0x1f);
            *(short *)(arg1 + 0x1720) = (short)uVar14;
            *(char *)(*(long *)(arg1 + 0x10) + (ulong)uVar11) = (char)uVar14;
            *(uint8_t *)(*(long *)(arg1 + 0x10) + (ulong)(uVar11 + 1)) =
                *(uint8_t *)(arg1 + 0x1721);
            iVar13 = *(int *)(arg1 + 0x1724);
            *(uint *)(arg1 + 0x28) = uVar11 + 2;
            *(int *)(arg1 + 0x1724) = iVar13 + -0xd;
            *(short *)(arg1 + 0x1720) =
                (short)((int)(iVar10 - 2U & 0xffff) >> (0x10U - (char)iVar13 & 0x1f));
          }
        } else {
          uVar2 = *(ushort *)(arg1 + 0xaf6);
          iVar13 = *(int *)(arg1 + 0x1724);
          uVar12 = *(ushort *)(arg1 + 0xaf4);
          if ((int)(0x10 - (uint)uVar2) < iVar13) {
            uVar14 = *(uint *)(arg1 + 0x28);
            uVar6 = uVar12 << ((byte)iVar13 & 0x1f) | *(ushort *)(arg1 + 0x1720);
            *(ushort *)(arg1 + 0x1720) = uVar6;
            *(char *)(*(long *)(arg1 + 0x10) + (ulong)uVar14) = (char)uVar6;
            *(uint8_t *)(*(long *)(arg1 + 0x10) + (ulong)(uVar14 + 1)) =
                *(uint8_t *)(arg1 + 0x1721);
            *(uint *)(arg1 + 0x28) = uVar14 + 2;
            uVar14 = (int)(uint)uVar12 >> (0x10U - (char)*(int *)(arg1 + 0x1724) & 0x1f);
            *(short *)(arg1 + 0x1720) = (short)uVar14;
            iVar13 = (uVar2 - 0x10) + *(int *)(arg1 + 0x1724);
            *(int *)(arg1 + 0x1724) = iVar13;
          } else {
            uVar12 = uVar12 << ((byte)iVar13 & 0x1f) | *(ushort *)(arg1 + 0x1720);
            uVar14 = (uint)uVar12;
            iVar13 = iVar13 + (uint)uVar2;
            *(int *)(arg1 + 0x1724) = iVar13;
            *(ushort *)(arg1 + 0x1720) = uVar12;
          }
          uVar11 = iVar10 - 10;
          if (iVar13 < 10) {
            *(int *)(arg1 + 0x1724) = iVar13 + 7;
            *(ushort *)(arg1 + 0x1720) = (ushort)(uVar11 << ((byte)iVar13 & 0x1f)) | (ushort)uVar14;
          } else {
            uVar3 = *(uint *)(arg1 + 0x28);
            uVar14 = uVar14 | uVar11 << ((byte)iVar13 & 0x1f);
            *(short *)(arg1 + 0x1720) = (short)uVar14;
            *(char *)(*(long *)(arg1 + 0x10) + (ulong)uVar3) = (char)uVar14;
            *(uint8_t *)(*(long *)(arg1 + 0x10) + (ulong)(uVar3 + 1)) = *(uint8_t *)(arg1 + 0x1721);
            iVar13 = *(int *)(arg1 + 0x1724);
            *(uint *)(arg1 + 0x28) = uVar3 + 2;
            *(int *)(arg1 + 0x1724) = iVar13 + -9;
            *(short *)(arg1 + 0x1720) =
                (short)((int)(uVar11 & 0xffff) >> (0x10U - (char)iVar13 & 0x1f));
          }
        }
      } else {
        if (uVar14 == uVar8) {
          iVar13 = *(int *)(arg1 + 0x1724);
          uVar14 = (uint) * (ushort *)(arg1 + 0x1720);
        } else {
          iVar13 = *(int *)(arg1 + 0x1724);
          uVar2 = *(ushort *)(arg1 + 0xe + ((long)(int)uVar8 + 0x2a8) * 4);
          uVar12 = *(ushort *)(arg1 + 0xc + ((long)(int)uVar8 + 0x2a8) * 4);
          iVar4 = iVar10;
          if ((int)(0x10 - (uint)uVar2) < iVar13) {
            uVar14 = *(uint *)(arg1 + 0x28);
            uVar6 = uVar12 << ((byte)iVar13 & 0x1f) | *(ushort *)(arg1 + 0x1720);
            *(ushort *)(arg1 + 0x1720) = uVar6;
            *(char *)(*(long *)(arg1 + 0x10) + (ulong)uVar14) = (char)uVar6;
            *(uint8_t *)(*(long *)(arg1 + 0x10) + (ulong)(uVar14 + 1)) =
                *(uint8_t *)(arg1 + 0x1721);
            *(uint *)(arg1 + 0x28) = uVar14 + 2;
            uVar14 = (int)(uint)uVar12 >> (0x10U - (char)*(int *)(arg1 + 0x1724) & 0x1f);
            *(short *)(arg1 + 0x1720) = (short)uVar14;
            iVar13 = (uVar2 - 0x10) + *(int *)(arg1 + 0x1724);
            *(int *)(arg1 + 0x1724) = iVar13;
          } else {
            uVar12 = uVar12 << ((byte)iVar13 & 0x1f) | *(ushort *)(arg1 + 0x1720);
            uVar14 = (uint)uVar12;
            iVar13 = iVar13 + (uint)uVar2;
            *(int *)(arg1 + 0x1724) = iVar13;
            *(ushort *)(arg1 + 0x1720) = uVar12;
          }
        }
        uVar2 = *(ushort *)(arg1 + 0xaee);
        if ((int)(0x10 - (uint)uVar2) < iVar13) {
          uVar12 = *(ushort *)(arg1 + 0xaec);
          uVar11 = *(uint *)(arg1 + 0x28);
          uVar14 = uVar14 | (uint)uVar12 << ((byte)iVar13 & 0x1f);
          *(short *)(arg1 + 0x1720) = (short)uVar14;
          *(char *)(*(long *)(arg1 + 0x10) + (ulong)uVar11) = (char)uVar14;
          *(uint8_t *)(*(long *)(arg1 + 0x10) + (ulong)(uVar11 + 1)) = *(uint8_t *)(arg1 + 0x1721);
          *(uint *)(arg1 + 0x28) = uVar11 + 2;
          uVar14 = (int)(uint)uVar12 >> (0x10U - (char)*(int *)(arg1 + 0x1724) & 0x1f);
          iVar7 = (uVar2 - 0x10) + *(int *)(arg1 + 0x1724);
          *(short *)(arg1 + 0x1720) = (short)uVar14;
          *(int *)(arg1 + 0x1724) = iVar7;
        } else {
          iVar7 = iVar13 + (uint)uVar2;
          uVar14 = uVar14 | (uint) * (ushort *)(arg1 + 0xaec) << ((byte)iVar13 & 0x1f);
          *(int *)(arg1 + 0x1724) = iVar7;
          *(short *)(arg1 + 0x1720) = (short)uVar14;
        }
        uVar11 = iVar4 - 3;
        if (iVar7 < 0xf) {
          *(int *)(arg1 + 0x1724) = iVar7 + 2;
          *(ushort *)(arg1 + 0x1720) = (ushort)(uVar11 << ((byte)iVar7 & 0x1f)) | (ushort)uVar14;
        } else {
          uVar3 = *(uint *)(arg1 + 0x28);
          uVar14 = uVar14 | uVar11 << ((byte)iVar7 & 0x1f);
          *(short *)(arg1 + 0x1720) = (short)uVar14;
          *(char *)(*(long *)(arg1 + 0x10) + (ulong)uVar3) = (char)uVar14;
          *(uint8_t *)(*(long *)(arg1 + 0x10) + (ulong)(uVar3 + 1)) = *(uint8_t *)(arg1 + 0x1721);
          iVar13 = *(int *)(arg1 + 0x1724);
          *(uint *)(arg1 + 0x28) = uVar3 + 2;
          *(int *)(arg1 + 0x1724) = iVar13 + -0xe;
          *(short *)(arg1 + 0x1720) =
              (short)((int)(uVar11 & 0xffff) >> (0x10U - (char)iVar13 & 0x1f));
        }
      }
    joined_r0x0056e182:
      uVar14 = uVar8;
      if (uVar15 == 0) {
        iVar13 = 3;
        iVar7 = 0x8a;
        iVar4 = 0;
      } else if (uVar8 == uVar15) {
        iVar13 = 3;
        iVar7 = 6;
        iVar4 = 0;
        uVar14 = uVar15;
      } else {
        iVar13 = 4;
        iVar7 = 7;
        iVar4 = 0;
      }
    }
    iVar10 = iVar4;
    if (arg3 < (int)lVar9 + 1) {
      return;
    }
    lVar9 = lVar9 + 1;
    uVar8 = uVar15;
  } while (true);
}

/* ======================================================================
 * operator_new__0057be50  (Ghidra `operator.new` @ 0057be50)
 * Signature: void * __stdcall operator.new(ulong arg1, int arg2)
 * Calls: `AutoLockSection__AutoLockSection`, `AutoLockSection__AutoLockSection__005b59d0`, `free`, `malloc`, `memcpy`
 * Called by: (none)
 */
/* BaseResource__operator new(unsigned long, int) */

void *BaseResource__operator_new(ulong arg1, int arg2)

{
  void *pvVar1;
  CriticalSection *pCVar2;
  long lVar3;
  ushort uVar4;
  void *pvVar5;
  void *pvVar6;
  void *pvVar7;
  ulong uVar8;
  ushort uVar9;
  long lVar10;
  ulong uVar11;
  ushort *puVar12;
  uint64_t *puVar13;
  CriticalSection *pCVar14;
  bool bVar15;
  byte bVar16;
  AutoLockSection local_48[24];

  bVar16 = 0;
  pvVar5 = malloc(arg1);
  pCVar2 = Resources;
  if (arg2 != 1) {
    return pvVar5;
  }
  pCVar14 = Resources + 0x28;
  AutoLockSection__AutoLockSection(local_48, Resources);
  if (*(int *)(pCVar2 + 0x70) == -0x5eef3582) {
    uVar4 = *(ushort *)(pCVar2 + 0x50);
    if (*(ushort *)(pCVar2 + 0x52) <= uVar4) {
      uVar4 = *(ushort *)(pCVar2 + 0x52) + *(short *)(pCVar2 + 0x5c);
      uVar8 = (ulong)(byte)pCVar2[0x54];
      pvVar6 = (void *)0x0;
      pvVar1 = *(void **)(pCVar2 + 0x60);
      *(ushort *)(pCVar2 + 0x52) = uVar4;
      uVar11 = (ulong)uVar4 * 0x88;
      pvVar7 = malloc(uVar8 + 0x10 + uVar11);
      if (pvVar7 != (void *)0x0) {
        pvVar6 = (void *)((long)pvVar7 + 0x10U + (uVar8 - ((long)pvVar7 + 0x10U) % uVar8) % uVar8);
        *(ulong *)((long)pvVar6 + -0x10) = uVar11;
        *(void **)((long)pvVar6 + -8) = pvVar7;
        if (pvVar1 != (void *)0x0) {
          uVar8 = *(ulong *)((long)pvVar1 + -0x10);
          if (uVar11 <= *(ulong *)((long)pvVar1 + -0x10)) {
            uVar8 = uVar11;
          }
          memcpy(pvVar6, pvVar1, uVar8);
          free(*(void **)((long)pvVar1 + -8));
        }
      }
      pvVar1 = *(void **)(pCVar2 + 0x68);
      *(void **)(pCVar2 + 0x60) = pvVar6;
      if (pvVar1 != (void *)0x0) {
        uVar9 = *(ushort *)(pCVar2 + 0x52);
        uVar8 = (ulong)(byte)pCVar2[0x54];
        pvVar6 = (void *)0x0;
        uVar11 = (ulong)uVar9 * 2;
        pvVar7 = malloc(uVar8 + 0x10 + uVar11);
        if (pvVar7 != (void *)0x0) {
          pvVar6 =
              (void *)((long)pvVar7 + 0x10U + (uVar8 - ((long)pvVar7 + 0x10U) % uVar8) % uVar8);
          *(ulong *)((long)pvVar6 + -0x10) = uVar11;
          *(void **)((long)pvVar6 + -8) = pvVar7;
          uVar8 = *(ulong *)((long)pvVar1 + -0x10);
          if (uVar11 <= *(ulong *)((long)pvVar1 + -0x10)) {
            uVar8 = uVar11;
          }
          memcpy(pvVar6, pvVar1, uVar8);
          free(*(void **)((long)pvVar1 + -8));
          uVar9 = *(ushort *)(pCVar2 + 0x52);
        }
        uVar4 = *(ushort *)(pCVar2 + 0x50);
        *(void **)(pCVar2 + 0x68) = pvVar6;
        if (uVar9 <= uVar4)
          goto LAB_0057bee6;
        while (true) {
          uVar11 = (ulong)uVar4;
          uVar4 = uVar4 + 1;
          *(uint16_t *)((long)pvVar6 + uVar11 * 2) = 0xffff;
          if (uVar9 <= uVar4)
            break;
          pvVar6 = *(void **)(pCVar2 + 0x68);
        }
      }
      uVar4 = *(ushort *)(pCVar2 + 0x50);
    }
  } else {
    uVar11 = (ulong)(byte)pCVar2[0x54];
    *(uint32_t *)(pCVar2 + 0x58) = 0;
    pvVar6 = malloc(uVar11 + 0x2b8);
    puVar13 = (uint64_t *)0x0;
    if (pvVar6 != (void *)0x0) {
      puVar13 =
          (uint64_t *)((long)pvVar6 + 0x10U + (uVar11 - ((long)pvVar6 + 0x10U) % uVar11) % uVar11);
      puVar13[-2] = 0x2a8;
      puVar13[-1] = pvVar6;
    }
    bVar15 = ((ulong)puVar13 & 1) != 0;
    *(uint64_t **)(pCVar2 + 0x60) = puVar13;
    uVar11 = 0x2a8;
    if (bVar15) {
      *(uint8_t *)puVar13 = 0;
      uVar11 = 0x2a7;
      puVar13 = (uint64_t *)((long)puVar13 + 1);
    }
    if (((ulong)puVar13 & 2) != 0) {
      *(uint16_t *)puVar13 = 0;
      uVar11 = (ulong)((int)uVar11 - 2);
      puVar13 = (uint64_t *)((long)puVar13 + 2);
    }
    if (((ulong)puVar13 & 4) != 0) {
      *(uint32_t *)puVar13 = 0;
      uVar11 = (ulong)((int)uVar11 - 4);
      puVar13 = (uint64_t *)((long)puVar13 + 4);
    }
    for (uVar8 = uVar11 >> 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar13 = 0;
      puVar13 = puVar13 + (ulong)bVar16 * -2 + 1;
    }
    if ((uVar11 & 4) != 0) {
      *(uint32_t *)puVar13 = 0;
      puVar13 = (uint64_t *)((long)puVar13 + 4);
    }
    if ((uVar11 & 2) != 0) {
      *(uint16_t *)puVar13 = 0;
      puVar13 = (uint64_t *)((long)puVar13 + 2);
    }
    if (bVar15) {
      *(uint8_t *)puVar13 = 0;
    }
    *(uint16_t *)(pCVar2 + 0x50) = 0;
    *(uint16_t *)(pCVar2 + 0x52) = 5;
    uVar4 = 0;
    *(uint32_t *)(pCVar2 + 0x70) = 0xa110ca7e;
    *(uint16_t *)(pCVar2 + 0x5c) = 5;
  }
LAB_0057bee6:
  if (*(int *)(pCVar2 + 0x58) == 1) {
    lVar10 = 0x1fffe;
    if (*(ushort *)(pCVar2 + 0x52) != 0) {
      puVar12 = *(ushort **)(pCVar2 + 0x68);
      if (*puVar12 == 0xffff) {
        lVar10 = 0;
      } else {
        lVar3 = 2;
        do {
          lVar10 = lVar3;
          puVar12 = puVar12 + 1;
          if (lVar10 == (ulong)(*(ushort *)(pCVar2 + 0x52) - 1 & 0xffff) * 2 + 2) {
            lVar10 = 0x1fffe;
            goto LAB_0057bef8;
          }
          lVar3 = lVar10 + 2;
        } while (*puVar12 != 0xffff);
      }
      *puVar12 = uVar4;
      uVar4 = *(ushort *)(pCVar2 + 0x50);
    }
  } else {
    lVar10 = 0x1fffe;
    pCVar14 = (CriticalSection *)0x0;
  }
LAB_0057bef8:
  uVar11 = 0x88;
  *(ushort *)(pCVar2 + 0x50) = uVar4 + 1;
  puVar13 = (uint64_t *)(((ulong)(ushort)(uVar4 + 1) - 1) * 0x88 + *(long *)(pCVar2 + 0x60));
  bVar15 = ((ulong)puVar13 & 1) != 0;
  if (bVar15) {
    *(uint8_t *)puVar13 = 0;
    uVar11 = 0x87;
    puVar13 = (uint64_t *)((long)puVar13 + 1);
  }
  if (((ulong)puVar13 & 2) != 0) {
    *(uint16_t *)puVar13 = 0;
    uVar11 = (ulong)((int)uVar11 - 2);
    puVar13 = (uint64_t *)((long)puVar13 + 2);
  }
  if (((ulong)puVar13 & 4) != 0) {
    *(uint32_t *)puVar13 = 0;
    uVar11 = (ulong)((int)uVar11 - 4);
    puVar13 = (uint64_t *)((long)puVar13 + 4);
  }
  for (uVar8 = uVar11 >> 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *puVar13 = 0;
    puVar13 = puVar13 + (ulong)bVar16 * -2 + 1;
  }
  if ((uVar11 & 4) != 0) {
    *(uint32_t *)puVar13 = 0;
    puVar13 = (uint64_t *)((long)puVar13 + 4);
  }
  if ((uVar11 & 2) != 0) {
    *(uint16_t *)puVar13 = 0;
    puVar13 = (uint64_t *)((long)puVar13 + 2);
  }
  if (bVar15) {
    *(uint8_t *)puVar13 = 0;
  }
  *(void **)((ulong) * (ushort *)(*(long *)(pCVar14 + 0x40) + lVar10) * 0x88 +
             *(long *)(pCVar14 + 0x38) + 0x80) = pvVar5;
  *(uint8_t *)((ulong) * (ushort *)(*(long *)(pCVar14 + 0x40) + lVar10) * 0x88 +
               *(long *)(pCVar14 + 0x38)) = 0;
  AutoLockSection__AutoLockSection__005b59d0(local_48);
  return pvVar5;
}

/* ======================================================================
 * point_compare  (Ghidra `point_compare` @ 005a7a50)
 * Signature: uint8_t __stdcall point_compare(void * arg1, void * arg2)
 * Calls: (none)
 * Called by: `start_decoder`
 */
/* point_compare(void const*, void const*) */

ulong point_compare(void *arg1, void *arg2)

{
  ulong uVar1;

  uVar1 = 0xffffffff;
  if (*(ushort *)arg2 <= *(ushort *)arg1) {
    uVar1 = (ulong)(*(ushort *)arg2 < *(ushort *)arg1);
  }
  return uVar1;
}

/* ======================================================================
 * setup_malloc  (Ghidra `setup_malloc` @ 005a87c0)
 * Signature: uint8_t __stdcall setup_malloc(stb_vorbis * arg1, int arg2)
 * Calls: `malloc`
 * Called by: `init_blocksize`, `start_decoder`
 */
/* setup_malloc(stb_vorbis*, int) */

void *setup_malloc(stb_vorbis *arg1, int arg2)

{
  int iVar1;
  void *pvVar2;
  uint uVar3;
  int iVar4;

  uVar3 = arg2 + 3U & 0xfffffffc;
  *(uint *)(arg1 + 8) = *(int *)(arg1 + 8) + uVar3;
  if (*(long *)(arg1 + 0x78) == 0) {
    if (uVar3 != 0) {
      pvVar2 = malloc((long)(int)uVar3);
      return pvVar2;
    }
  } else {
    iVar1 = *(int *)(arg1 + 0x88);
    iVar4 = uVar3 + iVar1;
    if (iVar4 <= *(int *)(arg1 + 0x8c)) {
      *(int *)(arg1 + 0x88) = iVar4;
      return (void *)((long)iVar1 + *(long *)(arg1 + 0x78));
    }
  }
  return (void *)0x0;
}

/* ======================================================================
 * start_page_no_capturepattern  (Ghidra `start_page_no_capturepattern` @ 005a90a0)
 * Signature: uint8_t __stdcall start_page_no_capturepattern(stb_vorbis * arg1)
 * Calls: `fgetc`, `fread`, `memcpy`
 * Called by: `maybe_start_packet`, `start_page`
 */
/* start_page_no_capturepattern(stb_vorbis*) [clone .part.8] */

uint64_t start_page_no_capturepattern(stb_vorbis *arg1)

{
  uint8_t auVar1[16];
  uint8_t auVar2[14];
  uint8_t auVar3[15];
  uint8_t auVar4[15];
  uint8_t auVar5[15];
  uint8_t auVar6[14];
  uint8_t auVar7[13];
  uint8_t auVar8[13];
  uint8_t auVar9[13];
  uint uVar10;
  uint8_t auVar11[15];
  uint8_t auVar12[15];
  uint8_t auVar13[15];
  uint8_t auVar14[15];
  uint8_t auVar15[15];
  unkuint9 Var16;
  uint8_t auVar17[11];
  uint8_t auVar18[13];
  uint8_t auVar19[14];
  uint8_t auVar20[13];
  uint8_t auVar21[15];
  uint8_t auVar22[15];
  uint6 uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  long lVar27;
  stb_vorbis sVar28;
  int iVar29;
  uint uVar30;
  stb_vorbis *psVar31;
  uint uVar32;
  size_t sVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  uint uVar38;
  int local_48;
  int local_44;
  uint local_40;
  uint local_3c;

  psVar31 = *(stb_vorbis **)(arg1 + 0x28);
  if (psVar31 == (stb_vorbis *)0x0) {
    iVar29 = fgetc(*(FILE **)(arg1 + 0x18));
    if (iVar29 == -1) {
      *(uint32_t *)(arg1 + 0x90) = 1;
      iVar29 = 0;
    }
    sVar28 = SUB41(iVar29, 0);
    psVar31 = *(stb_vorbis **)(arg1 + 0x28);
  LAB_005a90d3:
    arg1[0x6db] = sVar28;
    if (psVar31 != (stb_vorbis *)0x0) {
      if (psVar31 < *(stb_vorbis **)(arg1 + 0x38))
        goto LAB_005a9323;
      goto LAB_005a90ec;
    }
    uVar25 = fgetc(*(FILE **)(arg1 + 0x18));
    local_3c = uVar25 & 0xff;
    if (uVar25 == 0xffffffff) {
      *(uint32_t *)(arg1 + 0x90) = 1;
      local_3c = 0;
    }
    psVar31 = *(stb_vorbis **)(arg1 + 0x28);
  LAB_005a9335:
    if (psVar31 != (stb_vorbis *)0x0)
      goto LAB_005a90fe;
    uVar30 = fgetc(*(FILE **)(arg1 + 0x18));
    uVar25 = uVar30 & 0xff;
    if (uVar30 == 0xffffffff) {
      *(uint32_t *)(arg1 + 0x90) = 1;
      uVar25 = 0;
    }
    psVar31 = *(stb_vorbis **)(arg1 + 0x28);
  LAB_005a97d4:
    iVar29 = uVar25 << 8;
    if (psVar31 != (stb_vorbis *)0x0)
      goto LAB_005a9115;
    uVar25 = fgetc(*(FILE **)(arg1 + 0x18));
    iVar34 = (uVar25 & 0xff) << 0x10;
    if (uVar25 == 0xffffffff) {
      *(uint32_t *)(arg1 + 0x90) = 1;
      iVar34 = 0;
    }
    psVar31 = *(stb_vorbis **)(arg1 + 0x28);
  LAB_005a9794:
    if (psVar31 != (stb_vorbis *)0x0)
      goto LAB_005a912c;
    iVar35 = fgetc(*(FILE **)(arg1 + 0x18));
    local_44 = iVar35 << 0x18;
    if (iVar35 == -1) {
      *(uint32_t *)(arg1 + 0x90) = 1;
      local_44 = 0;
    }
    psVar31 = *(stb_vorbis **)(arg1 + 0x28);
  LAB_005a9754:
    if (psVar31 != (stb_vorbis *)0x0)
      goto LAB_005a9148;
    uVar25 = fgetc(*(FILE **)(arg1 + 0x18));
    local_40 = uVar25 & 0xff;
    if (uVar25 == 0xffffffff) {
      *(uint32_t *)(arg1 + 0x90) = 1;
      local_40 = 0;
    }
    psVar31 = *(stb_vorbis **)(arg1 + 0x28);
  LAB_005a9712:
    if (psVar31 != (stb_vorbis *)0x0)
      goto LAB_005a9164;
    uVar25 = fgetc(*(FILE **)(arg1 + 0x18));
    iVar35 = (uVar25 & 0xff) << 8;
    if (uVar25 == 0xffffffff) {
      *(uint32_t *)(arg1 + 0x90) = 1;
      iVar35 = 0;
    }
    psVar31 = *(stb_vorbis **)(arg1 + 0x28);
  LAB_005a96d2:
    if (psVar31 != (stb_vorbis *)0x0)
      goto LAB_005a917a;
    uVar25 = fgetc(*(FILE **)(arg1 + 0x18));
    iVar36 = (uVar25 & 0xff) << 0x10;
    if (uVar25 == 0xffffffff) {
      *(uint32_t *)(arg1 + 0x90) = 1;
      iVar36 = 0;
    }
    psVar31 = *(stb_vorbis **)(arg1 + 0x28);
  LAB_005a968c:
    if (psVar31 != (stb_vorbis *)0x0)
      goto LAB_005a9191;
    iVar37 = fgetc(*(FILE **)(arg1 + 0x18));
    local_48 = iVar37 << 0x18;
    if (iVar37 == -1) {
      *(uint32_t *)(arg1 + 0x90) = 1;
      local_48 = 0;
    }
    psVar31 = *(stb_vorbis **)(arg1 + 0x28);
  LAB_005a9654:
    if (psVar31 != (stb_vorbis *)0x0)
      goto LAB_005a91ad;
    iVar37 = fgetc(*(FILE **)(arg1 + 0x18));
    if (iVar37 == -1) {
      *(uint32_t *)(arg1 + 0x90) = 1;
    }
    psVar31 = *(stb_vorbis **)(arg1 + 0x28);
  LAB_005a9618:
    if (psVar31 != (stb_vorbis *)0x0)
      goto LAB_005a91c1;
    iVar37 = fgetc(*(FILE **)(arg1 + 0x18));
    if (iVar37 == -1) {
      *(uint32_t *)(arg1 + 0x90) = 1;
    }
    psVar31 = *(stb_vorbis **)(arg1 + 0x28);
  LAB_005a95e8:
    if (psVar31 != (stb_vorbis *)0x0)
      goto LAB_005a91d5;
    iVar37 = fgetc(*(FILE **)(arg1 + 0x18));
    if (iVar37 == -1) {
      *(uint32_t *)(arg1 + 0x90) = 1;
    }
    psVar31 = *(stb_vorbis **)(arg1 + 0x28);
  LAB_005a95b8:
    if (psVar31 != (stb_vorbis *)0x0)
      goto LAB_005a91e9;
    iVar37 = fgetc(*(FILE **)(arg1 + 0x18));
    if (iVar37 == -1) {
      *(uint32_t *)(arg1 + 0x90) = 1;
    }
    psVar31 = *(stb_vorbis **)(arg1 + 0x28);
  LAB_005a9588:
    if (psVar31 != (stb_vorbis *)0x0)
      goto LAB_005a91fd;
    uVar25 = fgetc(*(FILE **)(arg1 + 0x18));
    uVar30 = uVar25 & 0xff;
    if (uVar25 == 0xffffffff) {
      *(uint32_t *)(arg1 + 0x90) = 1;
      uVar30 = 0;
    }
    psVar31 = *(stb_vorbis **)(arg1 + 0x28);
  LAB_005a9550:
    if (psVar31 != (stb_vorbis *)0x0)
      goto LAB_005a9214;
    uVar24 = fgetc(*(FILE **)(arg1 + 0x18));
    uVar25 = uVar24 & 0xff;
    if (uVar24 == 0xffffffff) {
      *(uint32_t *)(arg1 + 0x90) = 1;
      uVar25 = 0;
    }
    psVar31 = *(stb_vorbis **)(arg1 + 0x28);
  LAB_005a9511:
    uVar30 = uVar30 + uVar25 * 0x100;
    if (psVar31 != (stb_vorbis *)0x0)
      goto LAB_005a9228;
    uVar24 = fgetc(*(FILE **)(arg1 + 0x18));
    uVar25 = uVar24 & 0xff;
    if (uVar24 == 0xffffffff) {
      *(uint32_t *)(arg1 + 0x90) = 1;
      uVar25 = 0;
    }
    psVar31 = *(stb_vorbis **)(arg1 + 0x28);
  LAB_005a94d1:
    uVar30 = uVar30 + uVar25 * 0x10000;
    if (psVar31 != (stb_vorbis *)0x0)
      goto LAB_005a923c;
    uVar25 = fgetc(*(FILE **)(arg1 + 0x18));
    if (uVar25 == 0xffffffff) {
      *(uint32_t *)(arg1 + 0x90) = 1;
      uVar25 = 0;
    }
    psVar31 = *(stb_vorbis **)(arg1 + 0x28);
  LAB_005a948e:
    *(uint *)(arg1 + 0x5d4) = uVar30 + uVar25 * 0x1000000;
    if (psVar31 != (stb_vorbis *)0x0)
      goto LAB_005a9257;
    iVar37 = fgetc(*(FILE **)(arg1 + 0x18));
    if (iVar37 == -1) {
      *(uint32_t *)(arg1 + 0x90) = 1;
    }
    psVar31 = *(stb_vorbis **)(arg1 + 0x28);
  LAB_005a9458:
    if (psVar31 != (stb_vorbis *)0x0)
      goto LAB_005a926b;
    iVar37 = fgetc(*(FILE **)(arg1 + 0x18));
    if (iVar37 == -1) {
      *(uint32_t *)(arg1 + 0x90) = 1;
    }
    psVar31 = *(stb_vorbis **)(arg1 + 0x28);
  LAB_005a9428:
    if (psVar31 != (stb_vorbis *)0x0)
      goto LAB_005a927f;
    iVar37 = fgetc(*(FILE **)(arg1 + 0x18));
    if (iVar37 == -1) {
      *(uint32_t *)(arg1 + 0x90) = 1;
    }
    psVar31 = *(stb_vorbis **)(arg1 + 0x28);
  LAB_005a93f8:
    if (psVar31 != (stb_vorbis *)0x0)
      goto LAB_005a9293;
    iVar37 = fgetc(*(FILE **)(arg1 + 0x18));
    if (iVar37 == -1) {
      *(uint32_t *)(arg1 + 0x90) = 1;
    }
    psVar31 = *(stb_vorbis **)(arg1 + 0x28);
  LAB_005a93c8:
    if (psVar31 != (stb_vorbis *)0x0)
      goto LAB_005a92a7;
    uVar25 = fgetc(*(FILE **)(arg1 + 0x18));
    uVar30 = uVar25 & 0xff;
    sVar33 = (size_t)(int)uVar30;
    if (uVar25 == 0xffffffff) {
      *(uint32_t *)(arg1 + 0x90) = 1;
      sVar33 = 0;
      uVar30 = 0;
    }
    psVar31 = *(stb_vorbis **)(arg1 + 0x28);
  LAB_005a9379:
    *(uint *)(arg1 + 0x5d8) = uVar30;
    if (psVar31 != (stb_vorbis *)0x0)
      goto LAB_005a92cf;
    sVar33 = fread(arg1 + 0x5dc, sVar33, 1, *(FILE **)(arg1 + 0x18));
    if (sVar33 != 1)
      goto LAB_005a92dd;
  } else {
    if (psVar31 < *(stb_vorbis **)(arg1 + 0x38)) {
      sVar28 = *psVar31;
      psVar31 = psVar31 + 1;
      *(stb_vorbis **)(arg1 + 0x28) = psVar31;
      goto LAB_005a90d3;
    }
    *(uint32_t *)(arg1 + 0x90) = 1;
    arg1[0x6db] = (stb_vorbis)0x0;
    if (psVar31 < *(stb_vorbis **)(arg1 + 0x38)) {
    LAB_005a9323:
      sVar28 = *psVar31;
      psVar31 = psVar31 + 1;
      *(stb_vorbis **)(arg1 + 0x28) = psVar31;
      local_3c = (uint)(byte)sVar28;
      goto LAB_005a9335;
    }
  LAB_005a90ec:
    *(uint32_t *)(arg1 + 0x90) = 1;
    local_3c = 0;
  LAB_005a90fe:
    if (psVar31 < *(stb_vorbis **)(arg1 + 0x38)) {
      sVar28 = *psVar31;
      psVar31 = psVar31 + 1;
      *(stb_vorbis **)(arg1 + 0x28) = psVar31;
      uVar25 = (uint)(byte)sVar28;
      goto LAB_005a97d4;
    }
    *(uint32_t *)(arg1 + 0x90) = 1;
    iVar29 = 0;
  LAB_005a9115:
    if (psVar31 < *(stb_vorbis **)(arg1 + 0x38)) {
      sVar28 = *psVar31;
      psVar31 = psVar31 + 1;
      *(stb_vorbis **)(arg1 + 0x28) = psVar31;
      iVar34 = (uint)(byte)sVar28 << 0x10;
      goto LAB_005a9794;
    }
    *(uint32_t *)(arg1 + 0x90) = 1;
    iVar34 = 0;
  LAB_005a912c:
    if (psVar31 < *(stb_vorbis **)(arg1 + 0x38)) {
      sVar28 = *psVar31;
      psVar31 = psVar31 + 1;
      *(stb_vorbis **)(arg1 + 0x28) = psVar31;
      local_44 = (uint)(byte)sVar28 << 0x18;
      goto LAB_005a9754;
    }
    *(uint32_t *)(arg1 + 0x90) = 1;
    local_44 = 0;
  LAB_005a9148:
    if (psVar31 < *(stb_vorbis **)(arg1 + 0x38)) {
      sVar28 = *psVar31;
      psVar31 = psVar31 + 1;
      *(stb_vorbis **)(arg1 + 0x28) = psVar31;
      local_40 = (uint)(byte)sVar28;
      goto LAB_005a9712;
    }
    *(uint32_t *)(arg1 + 0x90) = 1;
    local_40 = 0;
  LAB_005a9164:
    if (psVar31 < *(stb_vorbis **)(arg1 + 0x38)) {
      sVar28 = *psVar31;
      psVar31 = psVar31 + 1;
      *(stb_vorbis **)(arg1 + 0x28) = psVar31;
      iVar35 = (uint)(byte)sVar28 << 8;
      goto LAB_005a96d2;
    }
    *(uint32_t *)(arg1 + 0x90) = 1;
    iVar35 = 0;
  LAB_005a917a:
    if (psVar31 < *(stb_vorbis **)(arg1 + 0x38)) {
      sVar28 = *psVar31;
      psVar31 = psVar31 + 1;
      *(stb_vorbis **)(arg1 + 0x28) = psVar31;
      iVar36 = (uint)(byte)sVar28 << 0x10;
      goto LAB_005a968c;
    }
    *(uint32_t *)(arg1 + 0x90) = 1;
    iVar36 = 0;
  LAB_005a9191:
    if (psVar31 < *(stb_vorbis **)(arg1 + 0x38)) {
      sVar28 = *psVar31;
      psVar31 = psVar31 + 1;
      *(stb_vorbis **)(arg1 + 0x28) = psVar31;
      local_48 = (uint)(byte)sVar28 << 0x18;
      goto LAB_005a9654;
    }
    *(uint32_t *)(arg1 + 0x90) = 1;
    local_48 = 0;
  LAB_005a91ad:
    if (psVar31 < *(stb_vorbis **)(arg1 + 0x38)) {
      psVar31 = psVar31 + 1;
      *(stb_vorbis **)(arg1 + 0x28) = psVar31;
      goto LAB_005a9618;
    }
    *(uint32_t *)(arg1 + 0x90) = 1;
  LAB_005a91c1:
    if (psVar31 < *(stb_vorbis **)(arg1 + 0x38)) {
      psVar31 = psVar31 + 1;
      *(stb_vorbis **)(arg1 + 0x28) = psVar31;
      goto LAB_005a95e8;
    }
    *(uint32_t *)(arg1 + 0x90) = 1;
  LAB_005a91d5:
    if (psVar31 < *(stb_vorbis **)(arg1 + 0x38)) {
      psVar31 = psVar31 + 1;
      *(stb_vorbis **)(arg1 + 0x28) = psVar31;
      goto LAB_005a95b8;
    }
    *(uint32_t *)(arg1 + 0x90) = 1;
  LAB_005a91e9:
    if (psVar31 < *(stb_vorbis **)(arg1 + 0x38)) {
      psVar31 = psVar31 + 1;
      *(stb_vorbis **)(arg1 + 0x28) = psVar31;
      goto LAB_005a9588;
    }
    *(uint32_t *)(arg1 + 0x90) = 1;
  LAB_005a91fd:
    if (psVar31 < *(stb_vorbis **)(arg1 + 0x38)) {
      sVar28 = *psVar31;
      psVar31 = psVar31 + 1;
      *(stb_vorbis **)(arg1 + 0x28) = psVar31;
      uVar30 = (uint)(byte)sVar28;
      goto LAB_005a9550;
    }
    *(uint32_t *)(arg1 + 0x90) = 1;
    uVar30 = 0;
  LAB_005a9214:
    if (psVar31 < *(stb_vorbis **)(arg1 + 0x38)) {
      sVar28 = *psVar31;
      psVar31 = psVar31 + 1;
      *(stb_vorbis **)(arg1 + 0x28) = psVar31;
      uVar25 = (uint)(byte)sVar28;
      goto LAB_005a9511;
    }
    *(uint32_t *)(arg1 + 0x90) = 1;
  LAB_005a9228:
    if (psVar31 < *(stb_vorbis **)(arg1 + 0x38)) {
      sVar28 = *psVar31;
      psVar31 = psVar31 + 1;
      *(stb_vorbis **)(arg1 + 0x28) = psVar31;
      uVar25 = (uint)(byte)sVar28;
      goto LAB_005a94d1;
    }
    *(uint32_t *)(arg1 + 0x90) = 1;
  LAB_005a923c:
    if (psVar31 < *(stb_vorbis **)(arg1 + 0x38)) {
      sVar28 = *psVar31;
      psVar31 = psVar31 + 1;
      *(stb_vorbis **)(arg1 + 0x28) = psVar31;
      uVar25 = (uint)(byte)sVar28;
      goto LAB_005a948e;
    }
    *(uint32_t *)(arg1 + 0x90) = 1;
    *(uint *)(arg1 + 0x5d4) = uVar30;
  LAB_005a9257:
    if (psVar31 < *(stb_vorbis **)(arg1 + 0x38)) {
      psVar31 = psVar31 + 1;
      *(stb_vorbis **)(arg1 + 0x28) = psVar31;
      goto LAB_005a9458;
    }
    *(uint32_t *)(arg1 + 0x90) = 1;
  LAB_005a926b:
    if (psVar31 < *(stb_vorbis **)(arg1 + 0x38)) {
      psVar31 = psVar31 + 1;
      *(stb_vorbis **)(arg1 + 0x28) = psVar31;
      goto LAB_005a9428;
    }
    *(uint32_t *)(arg1 + 0x90) = 1;
  LAB_005a927f:
    if (psVar31 < *(stb_vorbis **)(arg1 + 0x38)) {
      psVar31 = psVar31 + 1;
      *(stb_vorbis **)(arg1 + 0x28) = psVar31;
      goto LAB_005a93f8;
    }
    *(uint32_t *)(arg1 + 0x90) = 1;
  LAB_005a9293:
    if (psVar31 < *(stb_vorbis **)(arg1 + 0x38)) {
      psVar31 = psVar31 + 1;
      *(stb_vorbis **)(arg1 + 0x28) = psVar31;
      goto LAB_005a93c8;
    }
    *(uint32_t *)(arg1 + 0x90) = 1;
  LAB_005a92a7:
    if (psVar31 < *(stb_vorbis **)(arg1 + 0x38)) {
      sVar28 = *psVar31;
      psVar31 = psVar31 + 1;
      *(stb_vorbis **)(arg1 + 0x28) = psVar31;
      uVar30 = (uint)(byte)sVar28;
      sVar33 = (size_t)(int)(uint)(byte)sVar28;
      goto LAB_005a9379;
    }
    *(uint32_t *)(arg1 + 0x90) = 1;
    *(uint32_t *)(arg1 + 0x5d8) = 0;
    sVar33 = 0;
  LAB_005a92cf:
    if (*(stb_vorbis **)(arg1 + 0x38) < psVar31 + sVar33) {
    LAB_005a92dd:
      *(uint32_t *)(arg1 + 0x90) = 1;
      *(uint32_t *)(arg1 + 0x94) = 10;
      return 0;
    }
    memcpy(arg1 + 0x5dc, psVar31, sVar33);
    *(size_t *)(arg1 + 0x28) = *(long *)(arg1 + 0x28) + sVar33;
  }
  psVar31 = arg1 + 0x5dc;
  *(uint32_t *)(arg1 + 0x6f8) = 0xfffffffe;
  local_44 = iVar34 + iVar29 + local_3c + local_44;
  if ((iVar36 + iVar35 + local_40 + local_48 != -1) || (local_44 != -1)) {
    uVar25 = *(uint *)(arg1 + 0x5d8);
    do {
      uVar25 = uVar25 - 1;
    } while (arg1[(ulong)uVar25 + 0x5dc] == (stb_vorbis)0xff);
    *(uint *)(arg1 + 0x6f8) = uVar25;
    *(int *)(arg1 + 0x6fc) = local_44;
  }
  if (arg1[0x6dd] == (stb_vorbis)0x0)
    goto LAB_005a9981;
  uVar25 = *(uint *)(arg1 + 0x5d8);
  if ((int)uVar25 < 1) {
    iVar29 = 0;
  } else {
    uVar30 = -(int)psVar31 & 0xf;
    if (uVar25 < uVar30) {
      uVar30 = uVar25;
    }
    iVar29 = 0;
    uVar24 = 0;
    if (uVar30 != 0) {
      do {
        sVar28 = *psVar31;
        uVar24 = uVar24 + 1;
        psVar31 = psVar31 + 1;
        iVar29 = iVar29 + (uint)(byte)sVar28;
      } while (uVar24 < uVar30);
      if (uVar25 == uVar30)
        goto LAB_005a9964;
    }
    uVar32 = uVar25 - uVar30 >> 4;
    if (uVar32 != 0) {
      iVar34 = 0;
      iVar35 = 0;
      iVar36 = 0;
      iVar37 = 0;
      psVar31 = arg1 + (ulong)uVar30 + 0x5dc;
      uVar26 = 0;
      do {
        auVar1 = *(uint8_t (*)[16])psVar31;
        uVar26 = uVar26 + 1;
        psVar31 = psVar31 + 0x10;
        uVar38 = CONCAT13(0, CONCAT12(auVar1[9], (ushort)auVar1[8]));
        auVar3[0xd] = 0;
        auVar3._0_13_ = auVar1._0_13_;
        auVar3[0xe] = auVar1[7];
        auVar4[0xc] = auVar1[6];
        auVar4._0_12_ = auVar1._0_12_;
        auVar4._13_2_ = auVar3._13_2_;
        auVar5[0xb] = 0;
        auVar5._0_11_ = auVar1._0_11_;
        auVar5._12_3_ = auVar4._12_3_;
        uVar10 = auVar5._11_4_;
        auVar11[10] = auVar1[5];
        auVar11._0_10_ = auVar1._0_10_;
        auVar11._11_4_ = uVar10;
        auVar12[9] = 0;
        auVar12._0_9_ = auVar1._0_9_;
        auVar12._10_5_ = auVar11._10_5_;
        auVar13[8] = auVar1[4];
        auVar13._0_8_ = auVar1._0_8_;
        auVar13._9_6_ = auVar12._9_6_;
        auVar15._7_8_ = 0;
        auVar15._0_7_ = auVar13._8_7_;
        Var16 = CONCAT81(SUB158(auVar15 << 0x40, 7), auVar1[3]);
        auVar21._9_6_ = 0;
        auVar21._0_9_ = Var16;
        auVar17._1_10_ = SUB1510(auVar21 << 0x30, 5);
        auVar17[0] = auVar1[2];
        auVar22._11_4_ = 0;
        auVar22._0_11_ = auVar17;
        auVar18._1_12_ = SUB1512(auVar22 << 0x20, 3);
        auVar18[0] = auVar1[1];
        auVar14[1] = 0;
        auVar14[0] = auVar1[0];
        auVar14._2_13_ = auVar18;
        auVar2._10_2_ = 0;
        auVar2._0_10_ = auVar14._0_10_;
        auVar2._12_2_ = (short)Var16;
        uVar23 = CONCAT42(auVar2._10_4_, auVar17._0_2_);
        auVar19._6_8_ = 0;
        auVar19._0_6_ = uVar23;
        auVar6._4_2_ = auVar18._0_2_;
        auVar6._0_4_ = auVar14._0_4_;
        auVar6._6_8_ = SUB148(auVar19 << 0x40, 6);
        auVar7[0xc] = auVar1[0xb];
        auVar7._0_12_ = ZEXT112(auVar1[0xc]) << 0x40;
        auVar8._10_3_ = auVar7._10_3_;
        auVar8._0_10_ = (unkuint10)auVar1[10] << 0x40;
        auVar20._5_8_ = 0;
        auVar20._0_5_ = auVar8._8_5_;
        auVar9[4] = auVar1[9];
        auVar9._0_4_ = uVar38;
        auVar9[5] = 0;
        auVar9._6_7_ = SUB137(auVar20 << 0x40, 6);
        iVar34 = iVar34 + (auVar14._0_4_ & 0xffff) + (uint)auVar13._8_2_ + (uVar38 & 0xffff) +
                 (uint)auVar1[0xc];
        iVar35 = iVar35 + auVar6._4_4_ + (uint)auVar11._10_2_ + auVar9._4_4_ + (uint)auVar1[0xd];
        iVar36 = iVar36 + (int)uVar23 + (uVar10 >> 8 & 0xffff) + auVar8._8_4_ + (uint)auVar1[0xe];
        iVar37 = iVar37 + (auVar2._10_4_ >> 0x10) + (uVar10 >> 0x18) +
                 (uint)(uint3)(auVar7._10_3_ >> 0x10) + (uint)auVar1[0xf];
      } while (uVar26 < uVar32);
      uVar24 = uVar24 + uVar32 * 0x10;
      iVar29 = iVar29 + iVar34 + iVar36 + iVar35 + iVar37;
      if (uVar25 - uVar30 == uVar32 * 0x10)
        goto LAB_005a9964;
    }
    do {
      lVar27 = (long)(int)uVar24;
      uVar24 = uVar24 + 1;
      iVar29 = iVar29 + (uint)(byte)arg1[lVar27 + 0x5dc];
    } while ((int)uVar24 < (int)uVar25);
  }
LAB_005a9964:
  iVar34 = *(int *)(arg1 + 0x48);
  *(uint32_t *)(arg1 + 0x58) = 0;
  *(int *)(arg1 + 0x5c) = local_44;
  *(int *)(arg1 + 0x4c) = iVar34;
  *(int *)(arg1 + 0x54) = iVar34;
  *(uint *)(arg1 + 0x50) = iVar29 + 0x1b + uVar25 + iVar34;
LAB_005a9981:
  *(uint32_t *)(arg1 + 0x6e0) = 0;
  return 1;
}

/* ======================================================================
 * start_page  (Ghidra `start_page` @ 005aa220)
 * Signature: uint8_t __stdcall start_page(stb_vorbis * arg1)
 * Calls: `fgetc`, `start_page_no_capturepattern`
 * Called by: `maybe_start_packet`, `next_segment`, `start_decoder`, `start_packet`, `stb_vorbis_open_file_section`, `stb_vorbis_open_file_section_constprop_33`, `stb_vorbis_open_memory`, `stb_vorbis_open_memory_constprop_31`, `stb_vorbis_open_pushdata`
 */
/* start_page(stb_vorbis*) */

uint64_t start_page(stb_vorbis *arg1)

{
  char *pcVar1;
  int iVar2;
  uint64_t uVar3;
  char cVar4;

  pcVar1 = *(char **)(arg1 + 0x28);
  if (pcVar1 == (char *)0x0) {
    iVar2 = fgetc(*(FILE **)(arg1 + 0x18));
    cVar4 = (char)iVar2;
    if (iVar2 != -1)
      goto LAB_005aa25b;
  } else if (pcVar1 < *(char **)(arg1 + 0x38)) {
    cVar4 = *pcVar1;
    *(char **)(arg1 + 0x28) = pcVar1 + 1;
  LAB_005aa25b:
    if (cVar4 != 'O')
      goto LAB_005aa241;
    pcVar1 = *(char **)(arg1 + 0x28);
    if (pcVar1 == (char *)0x0) {
      iVar2 = fgetc(*(FILE **)(arg1 + 0x18));
      cVar4 = (char)iVar2;
      if (iVar2 != -1)
        goto LAB_005aa27e;
    } else if (pcVar1 < *(char **)(arg1 + 0x38)) {
      cVar4 = *pcVar1;
      *(char **)(arg1 + 0x28) = pcVar1 + 1;
    LAB_005aa27e:
      if (cVar4 != 'g')
        goto LAB_005aa241;
      pcVar1 = *(char **)(arg1 + 0x28);
      if (pcVar1 == (char *)0x0) {
        iVar2 = fgetc(*(FILE **)(arg1 + 0x18));
        cVar4 = (char)iVar2;
        if (iVar2 != -1)
          goto LAB_005aa2a1;
      } else if (pcVar1 < *(char **)(arg1 + 0x38)) {
        cVar4 = *pcVar1;
        *(char **)(arg1 + 0x28) = pcVar1 + 1;
      LAB_005aa2a1:
        if (cVar4 != 'g')
          goto LAB_005aa241;
        pcVar1 = *(char **)(arg1 + 0x28);
        if (pcVar1 == (char *)0x0) {
          iVar2 = fgetc(*(FILE **)(arg1 + 0x18));
          cVar4 = (char)iVar2;
          if (iVar2 != -1)
            goto LAB_005aa2c8;
        } else if (pcVar1 < *(char **)(arg1 + 0x38)) {
          cVar4 = *pcVar1;
          *(char **)(arg1 + 0x28) = pcVar1 + 1;
        LAB_005aa2c8:
          if (cVar4 != 'S')
            goto LAB_005aa241;
          pcVar1 = *(char **)(arg1 + 0x28);
          if (pcVar1 == (char *)0x0) {
            iVar2 = fgetc(*(FILE **)(arg1 + 0x18));
            cVar4 = (char)iVar2;
            if (iVar2 == -1)
              goto LAB_005aa330;
          } else {
            if (*(char **)(arg1 + 0x38) <= pcVar1) {
            LAB_005aa330:
              *(uint32_t *)(arg1 + 0x90) = 1;
              goto LAB_005aa33a;
            }
            cVar4 = *pcVar1;
            *(char **)(arg1 + 0x28) = pcVar1 + 1;
          }
          if (cVar4 != '\0') {
            *(uint32_t *)(arg1 + 0x94) = 0x1f;
            return 0;
          }
        LAB_005aa33a:
          uVar3 = start_page_no_capturepattern(arg1);
          return uVar3;
        }
      }
    }
  }
  *(uint32_t *)(arg1 + 0x90) = 1;
LAB_005aa241:
  *(uint32_t *)(arg1 + 0x94) = 0x1e;
  return 0;
}

/* ======================================================================
 * start_packet  (Ghidra `start_packet` @ 005aad10)
 * Signature: uint8_t __stdcall start_packet(stb_vorbis * arg1)
 * Calls: `start_page`
 * Called by: `start_decoder`
 */
/* start_packet(stb_vorbis*) */

uint64_t start_packet(stb_vorbis *arg1)

{
  int iVar1;

  while (true) {
    if (*(int *)(arg1 + 0x6e0) != -1) {
      *(uint32_t *)(arg1 + 0x6e4) = 0;
      *(uint32_t *)(arg1 + 0x6f0) = 0;
      *(uint32_t *)(arg1 + 0x6f4) = 0;
      arg1[0x6dc] = (stb_vorbis)0x0;
      return 1;
    }
    iVar1 = start_page(arg1);
    if (iVar1 == 0)
      break;
    if (((byte)arg1[0x6db] & 1) != 0) {
      *(uint32_t *)(arg1 + 0x94) = 0x20;
      return 0;
    }
  }
  return 0;
}

/* ======================================================================
 * start_decoder  (Ghidra `start_decoder` @ 005b08d0)
 * Signature: uint8_t __stdcall start_decoder(stb_vorbis * arg1)
 * Calls: `bit_reverse`, `fgetc`, `float32_unpack`, `floor`, `fread`, `fseek`, `ftell`, `get32`, `get8`, `get8_packet_raw` (+17 more)
 * Called by: `stb_vorbis_open_file_section`, `stb_vorbis_open_file_section_constprop_33`, `stb_vorbis_open_memory`, `stb_vorbis_open_memory_constprop_31`, `stb_vorbis_open_pushdata`
 */
/* start_decoder(stb_vorbis*) [clone .part.23] */

uint64_t start_decoder(stb_vorbis *arg1)

{
  char *pcVar1;
  ulong uVar2;
  byte bVar3;
  uint8_t uVar4;
  char cVar5;
  byte bVar6;
  char cVar7;
  stb_vorbis sVar8;
  ushort uVar9;
  short sVar10;
  uint16_t uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint32_t uVar18;
  int iVar19;
  size_t sVar20;
  ulong uVar21;
  void *pvVar22;
  int *piVar23;
  void *__dest;
  uint32_t *puVar24;
  uint64_t uVar25;
  long lVar26;
  long lVar27;
  uint uVar28;
  long lVar29;
  int *piVar30;
  int *piVar31;
  byte *pbVar32;
  uint8_t *puVar33;
  ushort *puVar34;
  stb_vorbis *psVar35;
  long lVar36;
  ushort *puVar37;
  byte *pbVar38;
  long lVar39;
  float fVar40;
  double dVar41;
  double dVar42;
  byte *local_460;
  long local_450;
  uint32_t local_444;
  uint32_t local_440;
  uint32_t local_438;
  int local_434[251];
  uint32_t local_48;
  uint16_t local_44;

  bVar6 = 0;
  if ((*(int *)(arg1 + 0x5d8) != 1) || (arg1[0x5dc] != (stb_vorbis)0x1e))
    goto LAB_005b0901;
  pcVar1 = *(char **)(arg1 + 0x28);
  if (pcVar1 == (char *)0x0) {
    iVar12 = fgetc(*(FILE **)(arg1 + 0x18));
    cVar5 = (char)iVar12;
    if (iVar12 == -1)
      goto LAB_005b09c0;
  } else {
    if (*(char **)(arg1 + 0x38) <= pcVar1) {
    LAB_005b09c0:
      *(uint32_t *)(arg1 + 0x90) = 1;
      goto LAB_005b0901;
    }
    cVar5 = *pcVar1;
    *(char **)(arg1 + 0x28) = pcVar1 + 1;
  }
  if (cVar5 == '\x01') {
    puVar24 = *(uint32_t **)(arg1 + 0x28);
    if (puVar24 == (uint32_t *)0x0) {
      sVar20 = fread(&local_48, 6, 1, *(FILE **)(arg1 + 0x18));
      if (sVar20 != 1)
        goto LAB_005b098f;
    } else {
      if (*(ulong *)(arg1 + 0x38) < (long)puVar24 + 6U) {
      LAB_005b098f:
        *(uint32_t *)(arg1 + 0x90) = 1;
        *(uint32_t *)(arg1 + 0x94) = 10;
        return 0;
      }
      local_48 = *puVar24;
      local_44 = *(uint16_t *)(puVar24 + 1);
      *(ulong *)(arg1 + 0x28) = (long)puVar24 + 6U;
    }
    iVar12 = memcmp(&local_48, ogg_page_header + 4, 6);
    if ((iVar12 == 0) && (iVar12 = get32(arg1), iVar12 == 0)) {
      bVar3 = get8(arg1);
      *(uint *)(arg1 + 4) = (uint)bVar3;
      if (bVar3 != 0) {
        if (0x10 < bVar3) {
          *(uint32_t *)(arg1 + 0x94) = 5;
          return 0;
        }
        iVar12 = get32(arg1);
        *(int *)arg1 = iVar12;
        if (iVar12 != 0) {
          get32(arg1);
          get32(arg1);
          get32(arg1);
          bVar3 = get8(arg1);
          uVar13 = (int)(uint)bVar3 >> 4;
          uVar28 = bVar3 & 0xf;
          *(int *)(arg1 + 0xa0) = 1 << (sbyte)uVar28;
          *(int *)(arg1 + 0xa4) = 1 << (sbyte)uVar13;
          if (((uVar28 - 6 < 8) && (uVar13 - 6 < 8)) && (uVar28 <= uVar13)) {
            uVar21 = get8(arg1);
            if ((uVar21 & 1) == 0)
              goto LAB_005b0901;
            iVar12 = start_page(arg1);
            if (iVar12 == 0) {
              return 0;
            }
            iVar12 = start_packet(arg1);
            if (iVar12 == 0) {
              return 0;
            }
            do {
              iVar12 = next_segment(arg1);
              if (*(long *)(arg1 + 0x28) == 0) {
                lVar29 = ftell(*(FILE **)(arg1 + 0x18));
                fseek(*(FILE **)(arg1 + 0x18), lVar29 + iVar12, 0);
              } else {
                uVar21 = *(long *)(arg1 + 0x28) + (long)iVar12;
                *(ulong *)(arg1 + 0x28) = uVar21;
                if (*(ulong *)(arg1 + 0x38) <= uVar21) {
                  *(uint32_t *)(arg1 + 0x90) = 1;
                }
              }
              arg1[0x6dc] = (stb_vorbis)0x0;
            } while (iVar12 != 0);
            iVar12 = start_packet(arg1);
            if (iVar12 == 0) {
              return 0;
            }
            if ((arg1[0x44] != (stb_vorbis)0x0) &&
                (iVar12 = is_whole_packet_present(arg1, 1), iVar12 == 0)) {
              if (*(int *)(arg1 + 0x94) != 0x15) {
                return 0;
              }
              *(uint32_t *)(arg1 + 0x94) = 0x14;
              return 0;
            }
            lVar29 = 0;
            do {
              iVar12 = 8;
              uVar13 = (int)lVar29 << 0x18;
              do {
                uVar13 = (int)uVar13 >> 0x1f & 0x4c11db7U ^ uVar13 * 2;
                iVar12 = iVar12 + -1;
              } while (iVar12 != 0);
              (&crc_table)[lVar29] = uVar13;
              lVar29 = lVar29 + 1;
            } while (lVar29 != 0x100);
            iVar12 = get8_packet_raw(arg1);
            *(uint32_t *)(arg1 + 0x6f0) = 0;
            if (iVar12 == 5) {
              lVar29 = 0;
              do {
                uVar4 = get8_packet_raw(arg1);
                *(uint8_t *)((long)&local_48 + lVar29) = uVar4;
                lVar29 = lVar29 + 1;
                *(uint32_t *)(arg1 + 0x6f0) = 0;
              } while (lVar29 != 6);
              iVar12 = memcmp(&local_48, ogg_page_header + 4, 6);
              if (iVar12 != 0) {
                *(uint32_t *)(arg1 + 0x94) = 0x14;
                return 0;
              }
              iVar12 = get_bits(arg1, 8);
              *(int *)(arg1 + 0xa8) = iVar12 + 1;
              pvVar22 = (void *)setup_malloc(arg1, (iVar12 + 1) * 0x848);
              *(void **)(arg1 + 0xb0) = pvVar22;
              if (pvVar22 == (void *)0x0) {
              LAB_005b0e67:
                *(uint32_t *)(arg1 + 0x94) = 3;
                return 0;
              }
              psVar35 = arg1 + 0x8c;
              memset(pvVar22, 0, (long)*(int *)(arg1 + 0xa8) * 0x848);
              local_450 = 0;
              for (iVar12 = 0; iVar12 < *(int *)(arg1 + 0xa8); iVar12 = iVar12 + 1) {
                lVar29 = *(long *)(arg1 + 0xb0);
                cVar5 = get_bits(arg1, 8);
                if (((cVar5 != 'B') || (cVar5 = get_bits(arg1, 8), cVar5 != 'C')) ||
                    (cVar5 = get_bits(arg1, 8), cVar5 != 'V'))
                  goto LAB_005b0ae0;
                piVar31 = (int *)(lVar29 + local_450);
                uVar13 = get_bits(arg1, 8);
                iVar14 = get_bits(arg1, 8);
                *piVar31 = iVar14 * 0x100 + (uVar13 & 0xff);
                uVar13 = get_bits(arg1, 8);
                uVar28 = get_bits(arg1, 8);
                iVar14 = get_bits(arg1, 8);
                piVar31[1] = (uVar28 & 0xff) * 0x100 + iVar14 * 0x10000 + (uVar13 & 0xff);
                iVar14 = get_bits(arg1, 1);
                if (iVar14 == 0) {
                  cVar5 = get_bits(arg1, 1);
                  *(char *)((long)piVar31 + 0x1b) = cVar5;
                  if (cVar5 == '\0')
                    goto LAB_005b0dc4;
                  pvVar22 = (void *)setup_temp_malloc(arg1, piVar31[1]);
                } else {
                  *(uint8_t *)((long)piVar31 + 0x1b) = 0;
                LAB_005b0dc4:
                  pvVar22 = (void *)setup_malloc(arg1, piVar31[1]);
                  *(void **)(piVar31 + 2) = pvVar22;
                }
                if (pvVar22 == (void *)0x0)
                  goto LAB_005b116b;
                if (iVar14 == 0) {
                  iVar14 = 0;
                  for (lVar29 = 0; (int)lVar29 < piVar31[1]; lVar29 = lVar29 + 1) {
                    if ((*(char *)((long)piVar31 + 0x1b) == '\0') ||
                        (iVar15 = get_bits(arg1, 1), iVar15 != 0)) {
                      iVar14 = iVar14 + 1;
                      cVar5 = get_bits(arg1, 5);
                      *(char *)((long)pvVar22 + lVar29) = cVar5 + '\x01';
                    } else {
                      *(uint8_t *)((long)pvVar22 + lVar29) = 0xff;
                    }
                  }
                  iVar16 = piVar31[1];
                } else {
                  iVar14 = get_bits(arg1, 5);
                  iVar15 = 0;
                  while (true) {
                    iVar14 = iVar14 + 1;
                    iVar16 = piVar31[1];
                    if (iVar16 <= iVar15)
                      break;
                    iVar16 = ilog(iVar16 - iVar15);
                    iVar16 = get_bits(arg1, iVar16);
                    if (piVar31[1] < iVar15 + iVar16)
                      goto LAB_005b0ae0;
                    memset((void *)((long)pvVar22 + (long)iVar15), iVar14, (long)iVar16);
                    iVar15 = iVar15 + iVar16;
                  }
                  iVar14 = 0;
                }
                if (*(char *)((long)piVar31 + 0x1b) == '\0') {
                LAB_005b0eec:
                  iVar14 = 0;
                  for (lVar29 = 0; (int)lVar29 < iVar16; lVar29 = lVar29 + 1) {
                    iVar14 =
                        iVar14 + (uint)((byte)(*(char *)((long)pvVar22 + lVar29) - 0xbU) < 0xf4);
                  }
                  piVar31[0x210] = iVar14;
                  lVar29 = setup_malloc(arg1, iVar16 << 2);
                  *(long *)(piVar31 + 10) = lVar29;
                  if (lVar29 == 0)
                    goto LAB_005b0e67;
                  piVar23 = (int *)0x0;
                } else {
                  if (iVar16 >> 2 <= iVar14) {
                    if (*(int *)(arg1 + 0x10) < iVar16) {
                      *(int *)(arg1 + 0x10) = iVar16;
                      iVar16 = piVar31[1];
                    }
                    __dest = (void *)setup_malloc(arg1, iVar16);
                    *(void **)(piVar31 + 2) = __dest;
                    memcpy(__dest, pvVar22, (long)piVar31[1]);
                    setup_temp_free(*(stb_vorbis **)(arg1 + 0x78), psVar35, (ulong)pvVar22);
                    pvVar22 = *(void **)(piVar31 + 2);
                    iVar16 = piVar31[1];
                    *(uint8_t *)((long)piVar31 + 0x1b) = 0;
                    goto LAB_005b0eec;
                  }
                  piVar31[0x210] = iVar14;
                  if (iVar14 == 0) {
                    piVar23 = (int *)0x0;
                  } else {
                    lVar29 = setup_malloc(arg1, iVar14);
                    *(long *)(piVar31 + 2) = lVar29;
                    if (lVar29 == 0)
                      goto LAB_005b0e67;
                    lVar29 = setup_temp_malloc(arg1, piVar31[0x210] << 2);
                    *(long *)(piVar31 + 10) = lVar29;
                    if ((lVar29 == 0) ||
                        (piVar23 = (int *)setup_temp_malloc(arg1, piVar31[0x210] << 2),
                         piVar23 == (int *)0x0))
                      goto LAB_005b0e67;
                  }
                  uVar13 = piVar31[1] + piVar31[0x210] * 8;
                  if (*(uint *)(arg1 + 0x10) < uVar13) {
                    *(uint *)(arg1 + 0x10) = uVar13;
                  }
                }
                iVar14 = piVar31[1];
                puVar24 = &local_438;
                for (lVar29 = 0x20; lVar29 != 0; lVar29 = lVar29 + -1) {
                  *puVar24 = 0;
                  puVar24 = puVar24 + (ulong)bVar6 * -2 + 1;
                }
                lVar29 = 0;
                do {
                  iVar15 = (int)lVar29;
                  if (iVar14 <= iVar15)
                    break;
                  pcVar1 = (char *)((long)pvVar22 + lVar29);
                  lVar29 = lVar29 + 1;
                } while (*pcVar1 == -1);
                if (iVar14 != iVar15) {
                  pbVar32 = (byte *)((long)pvVar22 + (long)iVar15);
                  bVar3 = *pbVar32;
                  if (*(char *)((long)piVar31 + 0x1b) == '\0') {
                    *(uint32_t *)(*(long *)(piVar31 + 10) + (long)iVar15 * 4) = 0;
                  } else {
                    **(uint32_t **)(piVar31 + 10) = 0;
                    **(byte **)(piVar31 + 2) = bVar3;
                    *piVar23 = iVar15;
                  }
                  piVar30 = local_434;
                  for (iVar16 = 1; iVar16 <= (int)(uint)*pbVar32; iVar16 = iVar16 + 1) {
                    *piVar30 = 1 << (-(char)iVar16 & 0x1fU);
                    piVar30 = piVar30 + 1;
                  }
                  iVar15 = iVar15 + 1;
                  lVar39 = 0;
                  iVar16 = 1;
                  lVar29 = (long)iVar15;
                  for (; iVar15 < iVar14; iVar15 = iVar15 + 1) {
                    bVar3 = *(byte *)((long)pvVar22 + lVar39 + lVar29);
                    if (bVar3 != 0xff) {
                      iVar17 = 0;
                      do {
                        uVar13 = (uint)bVar3 - iVar17;
                        if ((int)uVar13 < 1)
                          break;
                        iVar17 = iVar17 + 1;
                      } while ((&local_438)[(int)uVar13] == 0);
                      if (uVar13 == 0) {
                        if (*(char *)((long)piVar31 + 0x1b) != '\0') {
                          setup_temp_free(*(stb_vorbis **)(arg1 + 0x78), arg1 + 0x8c,
                                          (ulong)piVar23);
                        }
                        goto LAB_005b0ae0;
                      }
                      uVar28 = (&local_438)[(int)uVar13];
                      (&local_438)[(int)uVar13] = 0;
                      uVar4 = *(uint8_t *)((long)pvVar22 + lVar39 + lVar29);
                      iVar17 = iVar16 + 1;
                      uVar18 = bit_reverse(uVar28);
                      if (*(char *)((long)piVar31 + 0x1b) == '\0') {
                        *(uint32_t *)(*(long *)(piVar31 + 10) + (lVar39 + lVar29) * 4) = uVar18;
                      } else {
                        lVar27 = (long)iVar16;
                        *(uint32_t *)(*(long *)(piVar31 + 10) + lVar27 * 4) = uVar18;
                        *(uint8_t *)(*(long *)(piVar31 + 2) + lVar27) = uVar4;
                        piVar23[lVar27] = iVar15;
                      }
                      bVar3 = *(byte *)((long)pvVar22 + lVar39 + lVar29);
                      iVar19 = 0;
                      iVar16 = iVar17;
                      if (uVar13 != bVar3) {
                        for (; iVar17 = (uint)bVar3 - iVar19, (int)uVar13 < iVar17;
                             iVar19 = iVar19 + 1) {
                          (&local_438)[iVar17] =
                              uVar28 + (1 << ((' ' - bVar3) + (char)iVar19 & 0x1f));
                        }
                      }
                    }
                    lVar39 = lVar39 + 1;
                  }
                }
                if (piVar31[0x210] != 0) {
                  uVar25 = setup_malloc(arg1, piVar31[0x210] * 4 + 4);
                  *(uint64_t *)(piVar31 + 0x20c) = uVar25;
                  puVar24 = (uint32_t *)setup_malloc(arg1, piVar31[0x210] * 4 + 4);
                  *(uint32_t **)(piVar31 + 0x20e) = puVar24;
                  if (puVar24 != (uint32_t *)0x0) {
                    *(uint32_t **)(piVar31 + 0x20e) = puVar24 + 1;
                    *puVar24 = 0xffffffff;
                  }
                  lVar29 = 0;
                  if (*(char *)((long)piVar31 + 0x1b) == '\0') {
                    iVar14 = 0;
                    for (; (int)lVar29 < piVar31[1]; lVar29 = lVar29 + 1) {
                      if ((*(char *)((long)piVar31 + 0x1b) != '\0') ||
                          ((*(byte *)((long)pvVar22 + lVar29) != 0xff &&
                            (10 < *(byte *)((long)pvVar22 + lVar29))))) {
                        lVar39 = *(long *)(piVar31 + 0x20c);
                        uVar18 = bit_reverse(*(uint *)(*(long *)(piVar31 + 10) + lVar29 * 4));
                        *(uint32_t *)(lVar39 + (long)iVar14 * 4) = uVar18;
                        iVar14 = iVar14 + 1;
                      }
                    }
                  } else {
                    for (; (int)lVar29 < piVar31[0x210]; lVar29 = lVar29 + 1) {
                      lVar39 = *(long *)(piVar31 + 0x20c);
                      uVar18 = bit_reverse(*(uint *)(*(long *)(piVar31 + 10) + lVar29 * 4));
                      *(uint32_t *)(lVar29 * 4 + lVar39) = uVar18;
                    }
                  }
                  qsort(*(void **)(piVar31 + 0x20c), (long)piVar31[0x210], 4, uint32_compare);
                  *(uint32_t *)(*(long *)(piVar31 + 0x20c) + (long)piVar31[0x210] * 4) = 0xffffffff;
                  if (*(char *)((long)piVar31 + 0x1b) == '\0') {
                    iVar14 = piVar31[1];
                  } else {
                    iVar14 = piVar31[0x210];
                  }
                  for (lVar29 = 0; (int)lVar29 < iVar14; lVar29 = lVar29 + 1) {
                    cVar5 = *(char *)((long)piVar31 + 0x1b);
                    if (cVar5 == '\0') {
                      bVar3 = *(byte *)((long)pvVar22 + lVar29);
                      if ((bVar3 != 0xff) && (10 < bVar3))
                        goto LAB_005b13b8;
                    } else {
                      bVar3 = *(byte *)((long)pvVar22 + (ulong)(uint)piVar23[lVar29]);
                    LAB_005b13b8:
                      uVar13 = bit_reverse(*(uint *)(*(long *)(piVar31 + 10) + lVar29 * 4));
                      iVar15 = piVar31[0x210];
                      iVar16 = 0;
                      while (iVar17 = iVar15, 1 < iVar17) {
                        iVar19 = iVar17 >> 1;
                        iVar15 = iVar19;
                        if (*(uint *)(*(long *)(piVar31 + 0x20c) + (long)(iVar19 + iVar16) * 4) <=
                            uVar13) {
                          iVar15 = iVar17 - iVar19;
                          iVar16 = iVar19 + iVar16;
                        }
                      }
                      lVar39 = (long)iVar16;
                      if (cVar5 == '\0') {
                        *(int *)(*(long *)(piVar31 + 0x20e) + lVar39 * 4) = (int)lVar29;
                      } else {
                        *(int *)(*(long *)(piVar31 + 0x20e) + lVar39 * 4) = piVar23[lVar29];
                        *(byte *)(*(long *)(piVar31 + 2) + lVar39) = bVar3;
                      }
                    }
                  }
                }
                if (*(char *)((long)piVar31 + 0x1b) != '\0') {
                  setup_temp_free(*(stb_vorbis **)(arg1 + 0x78), psVar35, (ulong)piVar23);
                  setup_temp_free(*(stb_vorbis **)(arg1 + 0x78), psVar35, *(ulong *)(piVar31 + 10));
                  setup_temp_free(*(stb_vorbis **)(arg1 + 0x78), psVar35, (ulong)pvVar22);
                  piVar31[10] = 0;
                  piVar31[0xb] = 0;
                }
                lVar29 = 0;
                do {
                  *(uint16_t *)((long)piVar31 + lVar29 + 0x30) = 0xffff;
                  lVar29 = lVar29 + 2;
                } while (lVar29 != 0x800);
                cVar5 = *(char *)((long)piVar31 + 0x1b);
                if (cVar5 == '\0') {
                  iVar14 = piVar31[1];
                } else {
                  iVar14 = piVar31[0x210];
                }
                iVar15 = 0x7fff;
                if (iVar14 < 0x8000) {
                  iVar15 = iVar14;
                }
                lVar39 = 0;
                for (lVar29 = 0; (int)lVar29 < iVar15; lVar29 = lVar29 + 1) {
                  lVar27 = *(long *)(piVar31 + 2);
                  if (*(byte *)(lVar29 + lVar27) < 0xb) {
                    if (cVar5 == '\0') {
                      uVar13 = *(uint *)(*(long *)(piVar31 + 10) + lVar39);
                    } else {
                      uVar13 = bit_reverse(*(uint *)(*(long *)(piVar31 + 0x20c) + lVar39));
                    }
                    for (; uVar13 < 0x400;
                         uVar13 = uVar13 + (1 << (*(byte *)(lVar29 + lVar27) & 0x1f))) {
                      *(short *)((long)piVar31 + (ulong)uVar13 * 2 + 0x30) = (short)lVar29;
                    }
                  }
                  lVar39 = lVar39 + 4;
                }
                bVar3 = get_bits(arg1, 4);
                *(byte *)((long)piVar31 + 0x19) = bVar3;
                if (2 < bVar3)
                  goto LAB_005b0ae0;
                if (bVar3 != 0) {
                  uVar13 = get_bits(arg1, 0x20);
                  iVar14 = float32_unpack(uVar13);
                  piVar31[4] = iVar14;
                  uVar13 = get_bits(arg1, 0x20);
                  iVar14 = float32_unpack(uVar13);
                  piVar31[5] = iVar14;
                  cVar5 = get_bits(arg1, 4);
                  *(char *)(piVar31 + 6) = cVar5 + '\x01';
                  uVar4 = get_bits(arg1, 1);
                  *(uint8_t *)((long)piVar31 + 0x1a) = uVar4;
                  if (*(char *)((long)piVar31 + 0x19) == '\x01') {
                    iVar14 = piVar31[1];
                    iVar15 = *piVar31;
                    fVar40 = (float)__logf_finite((float)iVar14);
                    dVar41 = (double)__exp_finite((double)(fVar40 / (float)iVar15));
                    dVar42 = (double)__pow_finite(
                        (double)((float)(int)dVar41 + DAT_005be894 /* R:1.0f */), (double)iVar15);
                    dVar42 = floor(dVar42);
                    piVar31[7] = (int)dVar41 + (uint)((int)(long)dVar42 <= iVar14);
                  } else {
                    piVar31[7] = piVar31[1] * *piVar31;
                  }
                  uVar21 = setup_temp_malloc(arg1, piVar31[7] * 2);
                  if (uVar21 == 0) {
                  LAB_005b116b:
                    *(uint32_t *)(arg1 + 0x94) = 3;
                    return 0;
                  }
                  for (lVar29 = 0; (int)lVar29 < piVar31[7]; lVar29 = lVar29 + 1) {
                    iVar14 = get_bits(arg1, (uint) * (byte *)(piVar31 + 6));
                    if (iVar14 == -1) {
                      setup_temp_free(*(stb_vorbis **)(arg1 + 0x78), arg1 + 0x8c, uVar21);
                      *(uint32_t *)(arg1 + 0x94) = 0x14;
                      return 0;
                    }
                    *(short *)(uVar21 + lVar29 * 2) = (short)iVar14;
                  }
                  if (*(char *)((long)piVar31 + 0x19) == '\x01') {
                    cVar5 = *(char *)((long)piVar31 + 0x1b);
                    if (cVar5 == '\0') {
                      uVar25 = setup_malloc(arg1, *piVar31 * piVar31[1] * 4);
                      *(uint64_t *)(piVar31 + 8) = uVar25;
                    } else {
                      if (piVar31[0x210] == 0)
                        goto LAB_005b1527;
                      uVar25 = setup_malloc(arg1, piVar31[0x210] * *piVar31 * 4);
                      *(uint64_t *)(piVar31 + 8) = uVar25;
                    }
                    if (*(long *)(piVar31 + 8) == 0) {
                      setup_temp_free(*(stb_vorbis **)(arg1 + 0x78), arg1 + 0x8c, uVar21);
                      *(uint32_t *)(arg1 + 0x94) = 3;
                      return 0;
                    }
                    if (cVar5 == '\0') {
                      iVar14 = piVar31[1];
                    } else {
                      iVar14 = piVar31[0x210];
                    }
                    for (lVar29 = 0; iVar15 = (int)lVar29, iVar15 < iVar14; lVar29 = lVar29 + 1) {
                      iVar16 = iVar15;
                      if (cVar5 != '\0') {
                        iVar16 = *(int *)(*(long *)(piVar31 + 0x20e) + lVar29 * 4);
                      }
                      iVar19 = 1;
                      for (iVar17 = 0; iVar17 < *piVar31; iVar17 = iVar17 + 1) {
                        *(float *)(*(long *)(piVar31 + 8) +
                                   (long)(*piVar31 * iVar15 + iVar17) * 4) =
                            (float)*(ushort *)(uVar21 + (long)(int)(((long)iVar16 / (long)iVar19 &
                                                                     0xffffffffU) %
                                                                    (ulong)(uint)piVar31[7]) *
                                                            2) *
                                (float)piVar31[5] +
                            (float)piVar31[4];
                        iVar19 = iVar19 * piVar31[7];
                      }
                    }
                    setup_temp_free(*(stb_vorbis **)(arg1 + 0x78), psVar35, uVar21);
                    *(uint8_t *)((long)piVar31 + 0x19) = 2;
                  } else {
                    uVar25 = setup_malloc(arg1, piVar31[7] * 4);
                    *(uint64_t *)(piVar31 + 8) = uVar25;
                    for (lVar29 = 0; (int)lVar29 < piVar31[7]; lVar29 = lVar29 + 1) {
                      *(float *)(*(long *)(piVar31 + 8) + lVar29 * 4) =
                          (float)*(ushort *)(uVar21 + lVar29 * 2) * (float)piVar31[5] +
                          (float)piVar31[4];
                    }
                    setup_temp_free(*(stb_vorbis **)(arg1 + 0x78), psVar35, uVar21);
                    if (*(char *)((long)piVar31 + 0x19) != '\x02')
                      goto LAB_005b1527;
                  }
                  if (*(char *)((long)piVar31 + 0x1a) != '\0') {
                    lVar29 = 0;
                    for (iVar14 = 1; iVar14 < piVar31[7]; iVar14 = iVar14 + 1) {
                      *(uint32_t *)(*(long *)(piVar31 + 8) + 4 + lVar29) =
                          *(uint32_t *)(*(long *)(piVar31 + 8) + lVar29);
                      lVar29 = lVar29 + 4;
                    }
                    *(uint8_t *)((long)piVar31 + 0x1a) = 0;
                  }
                }
              LAB_005b1527:
                local_450 = local_450 + 0x848;
              }
              iVar12 = get_bits(arg1, 6);
              for (iVar14 = 0; iVar14 < (int)(iVar12 + 1U & 0xff); iVar14 = iVar14 + 1) {
                iVar15 = get_bits(arg1, 0x10);
                if (iVar15 != 0)
                  goto LAB_005b0ae0;
              }
              iVar14 = get_bits(arg1, 6);
              iVar12 = 0;
              *(int *)(arg1 + 0xb8) = iVar14 + 1;
              uVar25 = setup_malloc(arg1, (iVar14 + 1) * 0x63c);
              *(uint64_t *)(arg1 + 0x140) = uVar25;
              for (lVar29 = 0; (int)lVar29 < *(int *)(arg1 + 0xb8); lVar29 = lVar29 + 1) {
                uVar9 = get_bits(arg1, 0x10);
                *(ushort *)(arg1 + lVar29 * 2 + 0xbc) = uVar9;
                if (1 < uVar9)
                  goto LAB_005b0ae0;
                if (uVar9 == 0) {
                  puVar33 = (uint8_t *)((long)(int)lVar29 * 0x63c + *(long *)(arg1 + 0x140));
                  uVar4 = get_bits(arg1, 8);
                  *puVar33 = uVar4;
                  uVar11 = get_bits(arg1, 0x10);
                  *(uint16_t *)(puVar33 + 2) = uVar11;
                  uVar11 = get_bits(arg1, 0x10);
                  *(uint16_t *)(puVar33 + 4) = uVar11;
                  uVar4 = get_bits(arg1, 6);
                  puVar33[6] = uVar4;
                  uVar4 = get_bits(arg1, 8);
                  puVar33[7] = uVar4;
                  cVar5 = get_bits(arg1, 4);
                  puVar33[8] = cVar5 + '\x01';
                  for (lVar29 = 0; (int)lVar29 < (int)(uint)(byte)puVar33[8]; lVar29 = lVar29 + 1) {
                    uVar4 = get_bits(arg1, 8);
                    puVar33[lVar29 + 9] = uVar4;
                  }
                  *(uint32_t *)(arg1 + 0x94) = 4;
                  return 0;
                }
                pbVar32 = (byte *)(lVar29 * 0x63c + *(long *)(arg1 + 0x140));
                uVar13 = 0xffffffff;
                bVar6 = get_bits(arg1, 5);
                *pbVar32 = bVar6;
                for (lVar39 = 0;
                     pbVar38 = pbVar32, local_460 = pbVar32, (int)lVar39 < (int)(uint)*pbVar32;
                     lVar39 = lVar39 + 1) {
                  bVar6 = get_bits(arg1, 4);
                  pbVar32[lVar39 + 1] = bVar6;
                  if ((int)uVar13 < (int)(uint)bVar6) {
                    uVar13 = (uint)bVar6;
                  }
                }
                for (; (int)pbVar38 - (int)pbVar32 <= (int)uVar13; pbVar38 = pbVar38 + 1) {
                  cVar5 = get_bits(arg1, 3);
                  pbVar38[0x21] = cVar5 + 1;
                  bVar6 = get_bits(arg1, 2);
                  pbVar38[0x31] = bVar6;
                  if (bVar6 != 0) {
                    bVar6 = get_bits(arg1, 8);
                    pbVar38[0x41] = bVar6;
                    if (*(int *)(arg1 + 0xa8) <= (int)(uint)bVar6)
                      goto LAB_005b0ae0;
                  }
                  lVar39 = 0;
                  while ((int)lVar39 < 1 << (pbVar38[0x31] & 0x1f)) {
                    sVar10 = get_bits(arg1, 8);
                    *(short *)(local_460 + lVar39 * 2 + 0x52) = sVar10 + -1;
                    lVar39 = lVar39 + 1;
                    if (*(int *)(arg1 + 0xa8) <= (int)(short)(sVar10 + -1))
                      goto LAB_005b0ae0;
                  }
                  local_460 = local_460 + 0x10;
                }
                cVar5 = get_bits(arg1, 2);
                pbVar32[0x634] = cVar5 + 1;
                bVar6 = get_bits(arg1, 4);
                pbVar32[0x635] = bVar6;
                pbVar32[0x152] = 0;
                pbVar32[0x153] = 0;
                *(short *)(pbVar32 + 0x154) = (short)(1 << (bVar6 & 0x1f));
                pbVar32[0x638] = 2;
                pbVar32[0x639] = 0;
                pbVar32[0x63a] = 0;
                pbVar32[0x63b] = 0;
                for (lVar39 = 0; (int)lVar39 < (int)(uint)*pbVar32; lVar39 = lVar39 + 1) {
                  bVar6 = pbVar32[lVar39 + 1];
                  for (iVar14 = 0; iVar14 < (int)(uint)pbVar32[(ulong)bVar6 + 0x21];
                       iVar14 = iVar14 + 1) {
                    iVar15 = *(int *)(pbVar32 + 0x638);
                    uVar11 = get_bits(arg1, (uint)pbVar32[0x635]);
                    *(uint16_t *)(pbVar32 + (long)iVar15 * 2 + 0x152) = uVar11;
                    *(int *)(pbVar32 + 0x638) = *(int *)(pbVar32 + 0x638) + 1;
                  }
                }
                iVar14 = *(int *)(pbVar32 + 0x638);
                for (lVar39 = 0; (int)lVar39 < iVar14; lVar39 = lVar39 + 1) {
                  uVar11 = *(uint16_t *)(pbVar32 + lVar39 * 2 + 0x152);
                  *(short *)((long)local_434 + lVar39 * 4 + -2) = (short)lVar39;
                  *(uint16_t *)(&local_438 + lVar39) = uVar11;
                }
                qsort(&local_438, (long)iVar14, 4, point_compare);
                iVar14 = *(int *)(pbVar32 + 0x638);
                for (lVar39 = 0; (int)lVar39 < iVar14; lVar39 = lVar39 + 1) {
                  pbVar32[lVar39 + 0x346] =
                      (byte) * (uint16_t *)((long)local_434 + lVar39 * 4 + -2);
                }
                lVar39 = 4;
                for (iVar15 = 2; iVar15 < iVar14; iVar15 = iVar15 + 1) {
                  lVar27 = 0;
                  uVar13 = 0x10000;
                  uVar28 = 0xffffffff;
                  do {
                    uVar9 = *(ushort *)(pbVar32 + lVar27 * 2 + 0x152);
                    if (((int)uVar28 < (int)(uint)uVar9) &&
                        (uVar9 < *(ushort *)(pbVar32 + lVar39 + 0x152))) {
                      local_444 = (int)lVar27;
                      uVar28 = (uint)uVar9;
                    }
                    if ((uVar9 < uVar13) && (*(ushort *)(pbVar32 + lVar39 + 0x152) < uVar9)) {
                      uVar13 = (uint)uVar9;
                      local_440 = (int)lVar27;
                    }
                    lVar27 = lVar27 + 1;
                  } while ((int)lVar27 < iVar15);
                  pbVar32[lVar39 + 0x441] = (byte)local_440;
                  pbVar32[lVar39 + 0x440] = (byte)local_444;
                  lVar39 = lVar39 + 2;
                }
                if (iVar12 < iVar14) {
                  iVar12 = iVar14;
                }
              }
              iVar14 = get_bits(arg1, 6);
              *(int *)(arg1 + 0x148) = iVar14 + 1;
              uVar25 = setup_malloc(arg1, (iVar14 + 1) * 0x20);
              *(uint64_t *)(arg1 + 0x1d0) = uVar25;
              for (lVar29 = 0; (int)lVar29 < *(int *)(arg1 + 0x148); lVar29 = lVar29 + 1) {
                lVar39 = *(long *)(arg1 + 0x1d0);
                uVar9 = get_bits(arg1, 0x10);
                *(ushort *)(arg1 + lVar29 * 2 + 0x14c) = uVar9;
                if (2 < uVar9)
                  goto LAB_005b0ae0;
                puVar24 = (uint32_t *)(lVar39 + lVar29 * 0x20);
                uVar18 = get_bits(arg1, 0x18);
                *puVar24 = uVar18;
                uVar18 = get_bits(arg1, 0x18);
                puVar24[1] = uVar18;
                iVar14 = get_bits(arg1, 0x18);
                puVar24[2] = iVar14 + 1;
                cVar5 = get_bits(arg1, 6);
                *(char *)(puVar24 + 3) = cVar5 + '\x01';
                uVar4 = get_bits(arg1, 8);
                *(uint8_t *)((long)puVar24 + 0xd) = uVar4;
                for (lVar39 = 0; (int)lVar39 < (int)(uint) * (byte *)(puVar24 + 3);
                     lVar39 = lVar39 + 1) {
                  cVar5 = get_bits(arg1, 3);
                  iVar14 = get_bits(arg1, 1);
                  cVar7 = '\0';
                  if (iVar14 != 0) {
                    cVar7 = get_bits(arg1, 5);
                  }
                  *(char *)((long)&local_438 + lVar39) = cVar5 + cVar7 * '\b';
                }
                lVar39 = 0;
                uVar25 = setup_malloc(arg1, (uint) * (byte *)(puVar24 + 3) << 4);
                *(uint64_t *)(puVar24 + 6) = uVar25;
                for (lVar27 = 0; (int)lVar27 < (int)(uint) * (byte *)(puVar24 + 3);
                     lVar27 = lVar27 + 1) {
                  uVar13 = 0;
                  do {
                    if ((*(byte *)((long)&local_438 + lVar27) >> (uVar13 & 0x1f) & 1) == 0) {
                      *(uint16_t *)(*(long *)(puVar24 + 6) + (long)(int)uVar13 * 2 + lVar39) =
                          0xffff;
                    } else {
                      lVar26 = *(long *)(puVar24 + 6);
                      uVar11 = get_bits(arg1, 8);
                      *(uint16_t *)(lVar39 + lVar26 + (long)(int)uVar13 * 2) = uVar11;
                      if (*(int *)(arg1 + 0xa8) <=
                          (int)*(short *)((long)(int)uVar13 * 2 + *(long *)(puVar24 + 6) + lVar39))
                        goto LAB_005b0ae0;
                    }
                    uVar13 = uVar13 + 1;
                  } while (uVar13 != 8);
                  lVar39 = lVar39 + 0x10;
                }
                pvVar22 = (void *)setup_malloc(
                    arg1, *(int *)((ulong) * (byte *)((long)puVar24 + 0xd) * 0x848 +
                                   *(long *)(arg1 + 0xb0) + 4)
                              << 3);
                *(void **)(puVar24 + 4) = pvVar22;
                if (pvVar22 == (void *)0x0)
                  goto LAB_005b0e67;
                memset(pvVar22, 0,
                       (long)*(int *)((ulong) * (byte *)((long)puVar24 + 0xd) * 0x848 +
                                      *(long *)(arg1 + 0xb0) + 4)
                           << 3);
                for (lVar39 = 0; piVar31 = (int *)((ulong) * (byte *)((long)puVar24 + 0xd) * 0x848 +
                                                   *(long *)(arg1 + 0xb0)),
                    (int)lVar39 < piVar31[1];
                     lVar39 = lVar39 + 1) {
                  iVar15 = *piVar31;
                  lVar27 = *(long *)(puVar24 + 4);
                  uVar25 = setup_malloc(arg1, iVar15);
                  *(uint64_t *)(lVar39 * 8 + lVar27) = uVar25;
                  lVar26 = 0;
                  iVar14 = iVar15 + -1;
                  lVar27 = lVar39;
                  while (true) {
                    iVar15 = iVar15 + -1;
                    if (iVar15 < 0)
                      break;
                    lVar36 = iVar14 - lVar26;
                    lVar26 = lVar26 + 1;
                    *(char *)(*(long *)(*(long *)(puVar24 + 4) + lVar39 * 8) + lVar36) =
                        (char)((int)lVar27 % (int)(uint) * (byte *)(puVar24 + 3));
                    lVar27 = (long)(int)lVar27 / (long)(int)(uint) * (byte *)(puVar24 + 3);
                  }
                }
              }
              iVar14 = get_bits(arg1, 6);
              lVar29 = 0;
              *(int *)(arg1 + 0x1d8) = iVar14 + 1;
              uVar25 = setup_malloc(arg1, (iVar14 + 1) * 0x30);
              *(uint64_t *)(arg1 + 0x1e0) = uVar25;
              for (iVar14 = 0; iVar14 < *(int *)(arg1 + 0x1d8); iVar14 = iVar14 + 1) {
                lVar39 = *(long *)(arg1 + 0x1e0);
                iVar15 = get_bits(arg1, 0x10);
                if (iVar15 != 0)
                  goto LAB_005b0ae0;
                puVar34 = (ushort *)(lVar39 + lVar29);
                uVar25 = setup_malloc(arg1, *(int *)(arg1 + 4) * 3);
                *(uint64_t *)(puVar34 + 4) = uVar25;
                iVar15 = get_bits(arg1, 1);
                if (iVar15 == 0) {
                  *(uint8_t *)(puVar34 + 8) = 1;
                } else {
                  uVar4 = get_bits(arg1, 4);
                  *(uint8_t *)(puVar34 + 8) = uVar4;
                }
                iVar15 = get_bits(arg1, 1);
                if (iVar15 == 0) {
                  *puVar34 = 0;
                } else {
                  lVar39 = 0;
                  sVar10 = get_bits(arg1, 8);
                  *puVar34 = sVar10 + 1;
                  for (iVar15 = 0; iVar15 < (int)(uint)*puVar34; iVar15 = iVar15 + 1) {
                    lVar27 = *(long *)(puVar34 + 4);
                    iVar16 = ilog(*(int *)(arg1 + 4));
                    uVar4 = get_bits(arg1, iVar16 + -1);
                    *(uint8_t *)(lVar39 + lVar27) = uVar4;
                    lVar27 = *(long *)(puVar34 + 4);
                    iVar16 = ilog(*(int *)(arg1 + 4));
                    uVar4 = get_bits(arg1, iVar16 + -1);
                    *(uint8_t *)(lVar39 + lVar27 + 1) = uVar4;
                    bVar6 = *(byte *)(lVar39 + *(long *)(puVar34 + 4));
                    if (((*(int *)(arg1 + 4) <= (int)(uint)bVar6) ||
                         (bVar3 = ((byte *)(lVar39 + *(long *)(puVar34 + 4)))[1],
                          *(int *)(arg1 + 4) <= (int)(uint)bVar3)) ||
                        (lVar39 = lVar39 + 3, bVar6 == bVar3))
                      goto LAB_005b0ae0;
                  }
                }
                iVar15 = get_bits(arg1, 2);
                if (iVar15 != 0)
                  goto LAB_005b0ae0;
                puVar37 = puVar34;
                if ((byte)puVar34[8] < 2) {
                  lVar39 = 0;
                  for (iVar15 = 0; iVar15 < *(int *)(arg1 + 4); iVar15 = iVar15 + 1) {
                    *(uint8_t *)(*(long *)(puVar34 + 4) + 2 + lVar39) = 0;
                    lVar39 = lVar39 + 3;
                  }
                } else {
                  lVar39 = 0;
                  for (iVar15 = 0; iVar15 < *(int *)(arg1 + 4); iVar15 = iVar15 + 1) {
                    lVar27 = *(long *)(puVar34 + 4);
                    uVar4 = get_bits(arg1, 4);
                    *(uint8_t *)(lVar39 + lVar27 + 2) = uVar4;
                    pbVar32 = (byte *)(*(long *)(puVar34 + 4) + 2 + lVar39);
                    lVar39 = lVar39 + 3;
                    if ((byte)puVar34[8] <= *pbVar32)
                      goto LAB_005b0ae0;
                  }
                }
                while ((int)puVar37 - (int)puVar34 < (int)(uint)(byte)puVar34[8]) {
                  get_bits(arg1, 8);
                  uVar4 = get_bits(arg1, 8);
                  *(uint8_t *)((long)puVar37 + 0x11) = uVar4;
                  bVar6 = get_bits(arg1, 8);
                  *(byte *)(puVar37 + 0x10) = bVar6;
                  if ((*(int *)(arg1 + 0xb8) <= (int)(uint) * (byte *)((long)puVar37 + 0x11)) ||
                      (puVar37 = (ushort *)((long)puVar37 + 1),
                       *(int *)(arg1 + 0x148) <= (int)(uint)bVar6))
                    goto LAB_005b0ae0;
                }
                lVar29 = lVar29 + 0x30;
              }
              iVar14 = get_bits(arg1, 6);
              lVar29 = 0;
              *(int *)(arg1 + 0x1e8) = iVar14 + 1;
              do {
                if (*(int *)(arg1 + 0x1e8) <= (int)lVar29)
                  goto LAB_005b21fb;
                lVar39 = lVar29 * 6;
                sVar8 = (stb_vorbis)get_bits(arg1, 1);
                arg1[lVar39 + 0x1ec] = sVar8;
                uVar11 = get_bits(arg1, 0x10);
                *(uint16_t *)(arg1 + lVar39 + 0x1ee) = uVar11;
                uVar11 = get_bits(arg1, 0x10);
                *(uint16_t *)(arg1 + lVar39 + 0x1f0) = uVar11;
                sVar8 = (stb_vorbis)get_bits(arg1, 8);
                arg1[lVar39 + 0x1ed] = sVar8;
              } while (((*(short *)(arg1 + lVar39 + 0x1ee) == 0) &&
                        (*(short *)(arg1 + lVar39 + 0x1f0) == 0)) &&
                       (lVar29 = lVar29 + 1, (int)(uint)(byte)sVar8 < *(int *)(arg1 + 0x1d8)));
            }
          }
        LAB_005b0ae0:
          *(uint32_t *)(arg1 + 0x94) = 0x14;
          return 0;
        }
      }
    }
  }
LAB_005b0901:
  *(uint32_t *)(arg1 + 0x94) = 0x22;
  return 0;
LAB_005b21fb:
  do {
    if ((arg1[0x6dc] == (stb_vorbis)0x0) &&
        ((*(int *)(arg1 + 0x6e4) != 0 || (iVar14 = next_segment(arg1), iVar14 == 0))))
      break;
    uVar21 = *(ulong *)(arg1 + 0x28);
    arg1[0x6dc] = (stb_vorbis)((char)arg1[0x6dc] + -1);
    *(int *)(arg1 + 0x6f4) = *(int *)(arg1 + 0x6f4) + 1;
    if (uVar21 == 0)
      goto LAB_005b21e3;
    if (*(ulong *)(arg1 + 0x38) <= uVar21)
      goto LAB_005b21f1;
    *(ulong *)(arg1 + 0x28) = uVar21 + 1;
  } while (true);
  *(uint32_t *)(arg1 + 0x4f0) = 0;
  psVar35 = arg1;
  for (iVar14 = 0; iVar14 < *(int *)(arg1 + 4); iVar14 = iVar14 + 1) {
    uVar25 = setup_malloc(arg1, *(int *)(arg1 + 0xa4) << 2);
    *(uint64_t *)(psVar35 + 0x370) = uVar25;
    uVar25 = setup_malloc(arg1, *(int *)(arg1 + 0xa4) << 1);
    *(uint64_t *)(psVar35 + 0x470) = uVar25;
    uVar25 = setup_malloc(arg1, iVar12 * 2);
    *(uint64_t *)(psVar35 + 0x4f8) = uVar25;
    psVar35 = psVar35 + 8;
  }
  iVar12 = init_blocksize(arg1, 0, *(int *)(arg1 + 0xa0));
  if (iVar12 == 0) {
    return 0;
  }
  iVar12 = init_blocksize(arg1, 1, *(int *)(arg1 + 0xa4));
  if (iVar12 == 0) {
    return 0;
  }
  uVar21 = 0;
  *(uint32_t *)(arg1 + 0x98) = *(uint32_t *)(arg1 + 0xa0);
  *(int *)(arg1 + 0x9c) = *(int *)(arg1 + 0xa4);
  uVar13 = *(int *)(arg1 + 0xa4) << 1;
  for (lVar29 = 0; (int)lVar29 < *(int *)(arg1 + 0x148); lVar29 = lVar29 + 1) {
    piVar31 = (int *)(lVar29 * 0x20 + *(long *)(arg1 + 0x1d0));
    uVar2 = (ulong)(uint)(piVar31[1] - *piVar31) / (ulong)(uint)piVar31[2];
    if ((int)uVar21 < (int)uVar2) {
      uVar21 = uVar2;
    }
  }
  uVar28 = ((int)uVar21 + 1) * *(int *)(arg1 + 4) * 8;
  *(uint *)(arg1 + 0xc) = uVar28;
  if (uVar28 < uVar13) {
    *(uint *)(arg1 + 0xc) = uVar13;
    uVar28 = uVar13;
  }
  arg1[0x6dd] = (stb_vorbis)0x1;
  if ((*(long *)(arg1 + 0x78) == 0) ||
      ((long)*(int *)(arg1 + 0x88) + 0x768 + (ulong)uVar28 <= (ulong) * (uint *)(arg1 + 0x8c))) {
    uVar18 = stb_vorbis_get_file_offset(arg1);
    *(uint32_t *)(arg1 + 0x48) = uVar18;
    return 1;
  }
  goto LAB_005b0e67;
LAB_005b21e3:
  iVar14 = fgetc(*(FILE **)(arg1 + 0x18));
  if (iVar14 == -1) {
  LAB_005b21f1:
    *(uint32_t *)(arg1 + 0x90) = 1;
  }
  goto LAB_005b21fb;
}

/* ======================================================================
 * safe_wcslen  (Ghidra `safe_wcslen` @ 005b82d0)
 * Signature: uint8_t __stdcall safe_wcslen(wchar_t * arg1)
 * Calls: (none)
 * Called by: `ConvertWCHARtoTCHAR`, `CreateMessage`, `FontEmitter__SetStaticText`, `SprintArgListW`, `SprintW`, `UserAlertCopyText`
 */
/* safe_wcslen(wchar_t const*) */

long safe_wcslen(wchar_t *arg1)

{
  wchar_t wVar1;
  wchar_t *pwVar2;

  pwVar2 = arg1;
  do {
    wVar1 = *pwVar2;
    pwVar2 = pwVar2 + 1;
  } while (wVar1 != L'\0');
  return ((long)pwVar2 - (long)arg1 >> 2) + -1;
}
